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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0002fb1d };

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
0xaf3b,	// (0x0003aa58) Screen

0xaf47,	// (0x0003aa64) application_window_ParamLimits

0xaf47,	// (0x0003aa64) application_window

0x2200,	// (0x00031d1d) screen_g1

0xaf7f,	// (0x0003aa9c) area_bottom_pane_ParamLimits

0xaf7f,	// (0x0003aa9c) area_bottom_pane

0xf30c,	// (0x0003ee29) area_top_pane_ParamLimits

0xf30c,	// (0x0003ee29) area_top_pane

0xf416,	// (0x0003ef33) main_pane_ParamLimits

0xf416,	// (0x0003ef33) main_pane

0x220a,	// (0x00031d27) misc_graphics

0xd027,	// (0x0003cb44) battery_pane_ParamLimits

0xd027,	// (0x0003cb44) battery_pane

0x5475,	// (0x00034f92) bg_status_flat_pane_g8

0x547d,	// (0x00034f9a) bg_status_flat_pane_g9

0x485b,	// (0x00034378) context_pane_ParamLimits

0x485b,	// (0x00034378) context_pane

0xd19e,	// (0x0003ccbb) navi_pane_ParamLimits

0xd19e,	// (0x0003ccbb) navi_pane

0xd227,	// (0x0003cd44) signal_pane_ParamLimits

0xd227,	// (0x0003cd44) signal_pane

0x0008,

0xf8a8,	// (0x0003f3c5) bg_status_flat_pane_g

0xd2b7,	// (0x0003cdd4) status_pane_g1_ParamLimits

0xd2b7,	// (0x0003cdd4) status_pane_g1

0xd2cd,	// (0x0003cdea) status_pane_g2_ParamLimits

0xd2cd,	// (0x0003cdea) status_pane_g2

0x4a9b,	// (0x000345b8) status_pane_g3_ParamLimits

0x4a9b,	// (0x000345b8) status_pane_g3

0x0004,

0xf7db,	// (0x0003f2f8) status_pane_g_ParamLimits

0xf7db,	// (0x0003f2f8) status_pane_g

0xd2d9,	// (0x0003cdf6) title_pane_ParamLimits

0xd2d9,	// (0x0003cdf6) title_pane

0xd336,	// (0x0003ce53) uni_indicator_pane_ParamLimits

0xd336,	// (0x0003ce53) uni_indicator_pane

0x407c,	// (0x00033b99) bg_list_pane_ParamLimits

0x407c,	// (0x00033b99) bg_list_pane

0xb922,	// (0x0003b43f) find_pane

0xc880,	// (0x0003c39d) listscroll_app_pane_ParamLimits

0xc880,	// (0x0003c39d) listscroll_app_pane

0x40b0,	// (0x00033bcd) listscroll_form_pane

0xb92a,	// (0x0003b447) listscroll_gen_pane_ParamLimits

0xb92a,	// (0x0003b447) listscroll_gen_pane

0x40b0,	// (0x00033bcd) listscroll_set_pane

0x602e,	// (0x00035b4b) main_idle_act_pane

0x3d58,	// (0x00033875) main_idle_trad_pane

0x3d58,	// (0x00033875) main_list_empty_pane

0x40de,	// (0x00033bfb) main_midp_pane

0x40ea,	// (0x00033c07) main_pane_g1_ParamLimits

0x40ea,	// (0x00033c07) main_pane_g1

0xc88c,	// (0x0003c3a9) popup_ai_message_window_ParamLimits

0xc88c,	// (0x0003c3a9) popup_ai_message_window

0xc92c,	// (0x0003c449) popup_fep_china_uni_window_ParamLimits

0xc92c,	// (0x0003c449) popup_fep_china_uni_window

0x4208,	// (0x00033d25) popup_fep_japan_candidate_window_ParamLimits

0x4208,	// (0x00033d25) popup_fep_japan_candidate_window

0x4232,	// (0x00033d4f) popup_fep_japan_predictive_window_ParamLimits

0x4232,	// (0x00033d4f) popup_fep_japan_predictive_window

0xc98c,	// (0x0003c4a9) popup_find_window

0xc9a9,	// (0x0003c4c6) popup_grid_graphic_window_ParamLimits

0xc9a9,	// (0x0003c4c6) popup_grid_graphic_window

0x42a3,	// (0x00033dc0) popup_large_graphic_colour_window

0xca4d,	// (0x0003c56a) popup_menu_window_ParamLimits

0xca4d,	// (0x0003c56a) popup_menu_window

0xcc39,	// (0x0003c756) popup_note_image_window

0xcbf9,	// (0x0003c716) popup_note_wait_window_ParamLimits

0xcbf9,	// (0x0003c716) popup_note_wait_window

0xcc51,	// (0x0003c76e) popup_note_window_ParamLimits

0xcc51,	// (0x0003c76e) popup_note_window

0xccff,	// (0x0003c81c) popup_query_code_window_ParamLimits

0xccff,	// (0x0003c81c) popup_query_code_window

0x451b,	// (0x00034038) popup_query_data_code_window_ParamLimits

0x451b,	// (0x00034038) popup_query_data_code_window

0xcd3f,	// (0x0003c85c) popup_query_data_window_ParamLimits

0xcd3f,	// (0x0003c85c) popup_query_data_window

0xcdd3,	// (0x0003c8f0) popup_query_sat_info_window_ParamLimits

0xcdd3,	// (0x0003c8f0) popup_query_sat_info_window

0xce7e,	// (0x0003c99b) popup_snote_single_graphic_window_ParamLimits

0xce7e,	// (0x0003c99b) popup_snote_single_graphic_window

0xce7e,	// (0x0003c99b) popup_snote_single_text_window_ParamLimits

0xce7e,	// (0x0003c99b) popup_snote_single_text_window

0x45b6,	// (0x000340d3) popup_sub_window_general

0x46fc,	// (0x00034219) popup_window_general_ParamLimits

0x46fc,	// (0x00034219) popup_window_general

0x4715,	// (0x00034232) power_save_pane

0xb7e3,	// (0x0003b300) control_pane_g1_ParamLimits

0xb7e3,	// (0x0003b300) control_pane_g1

0x0d1c,	// (0x00030839) control_pane_g2_ParamLimits

0x0d1c,	// (0x00030839) control_pane_g2

0x4025,	// (0x00033b42) control_pane_g3_ParamLimits

0x4025,	// (0x00033b42) control_pane_g3

0x0007,

0xf7c3,	// (0x0003f2e0) control_pane_g_ParamLimits

0xf7c3,	// (0x0003f2e0) control_pane_g

0xb825,	// (0x0003b342) control_pane_t1_ParamLimits

0xb825,	// (0x0003b342) control_pane_t1

0xb883,	// (0x0003b3a0) control_pane_t2_ParamLimits

0xb883,	// (0x0003b3a0) control_pane_t2

0x0002,

0xf7d4,	// (0x0003f2f1) control_pane_t_ParamLimits

0xf7d4,	// (0x0003f2f1) control_pane_t

0x3f46,	// (0x00033a63) navi_navi_volume_pane_cp1

0x3f4f,	// (0x00033a6c) status_small_icon_pane

0x3f57,	// (0x00033a74) status_small_pane_g1_ParamLimits

0x3f57,	// (0x00033a74) status_small_pane_g1

0x3f8b,	// (0x00033aa8) status_small_pane_g2_ParamLimits

0x3f8b,	// (0x00033aa8) status_small_pane_g2

0x3f97,	// (0x00033ab4) status_small_pane_g3_ParamLimits

0x3f97,	// (0x00033ab4) status_small_pane_g3

0x3fa3,	// (0x00033ac0) status_small_pane_g4_ParamLimits

0x3fa3,	// (0x00033ac0) status_small_pane_g4

0x3faf,	// (0x00033acc) status_small_pane_g5_ParamLimits

0x3faf,	// (0x00033acc) status_small_pane_g5

0x3fbe,	// (0x00033adb) status_small_pane_g6_ParamLimits

0x3fbe,	// (0x00033adb) status_small_pane_g6

0x0007,

0xf7b2,	// (0x0003f2cf) status_small_pane_g_ParamLimits

0xf7b2,	// (0x0003f2cf) status_small_pane_g

0x3fee,	// (0x00033b0b) status_small_pane_t1

0x4011,	// (0x00033b2e) status_small_wait_pane_ParamLimits

0x4011,	// (0x00033b2e) status_small_wait_pane

0xc6c4,	// (0x0003c1e1) aid_levels_signal_ParamLimits

0xc6c4,	// (0x0003c1e1) aid_levels_signal

0xc6dc,	// (0x0003c1f9) signal_pane_g1_ParamLimits

0xc6dc,	// (0x0003c1f9) signal_pane_g1

0xc6f7,	// (0x0003c214) signal_pane_g2_ParamLimits

0xc6f7,	// (0x0003c214) signal_pane_g2

0x0001,

0xf747,	// (0x0003f264) signal_pane_g_ParamLimits

0xf747,	// (0x0003f264) signal_pane_g

0x382b,	// (0x00033348) context_pane_g1

0xb0fc,	// (0x0003ac19) title_pane_g1

0xb131,	// (0x0003ac4e) title_pane_t1

0x22b2,	// (0x00031dcf) title_pane_t2

0x22d8,	// (0x00031df5) title_pane_t3

0x0002,

0xf59b,	// (0x0003f0b8) title_pane_t

0xd35e,	// (0x0003ce7b) aid_levels_battery_ParamLimits

0xd35e,	// (0x0003ce7b) aid_levels_battery

0xd37a,	// (0x0003ce97) battery_pane_g1_ParamLimits

0xd37a,	// (0x0003ce97) battery_pane_g1

0xd397,	// (0x0003ceb4) battery_pane_g2_ParamLimits

0xd397,	// (0x0003ceb4) battery_pane_g2

0x0001,

0xf7e6,	// (0x0003f303) battery_pane_g_ParamLimits

0xf7e6,	// (0x0003f303) battery_pane_g

0xd5ba,	// (0x0003d0d7) uni_indicator_pane_g1

0xd5cf,	// (0x0003d0ec) uni_indicator_pane_g2

0xd5e4,	// (0x0003d101) uni_indicator_pane_g3

0x0005,

0xf950,	// (0x0003f46d) uni_indicator_pane_g

0x3bc6,	// (0x000336e3) navi_icon_pane_ParamLimits

0x3bc6,	// (0x000336e3) navi_icon_pane

0x3b0d,	// (0x0003362a) navi_midp_pane

0x3be2,	// (0x000336ff) navi_navi_pane

0x3bec,	// (0x00033709) navi_text_pane_ParamLimits

0x3bec,	// (0x00033709) navi_text_pane

0x2200,	// (0x00031d1d) status_small_wait_pane_g1

0x271c,	// (0x00032239) status_small_wait_pane_g2

0x0001,

0xf94b,	// (0x0003f468) status_small_wait_pane_g

0xd559,	// (0x0003d076) navi_navi_icon_text_pane

0xd561,	// (0x0003d07e) navi_navi_pane_g1_ParamLimits

0xd561,	// (0x0003d07e) navi_navi_pane_g1

0xd573,	// (0x0003d090) navi_navi_pane_g2_ParamLimits

0xd573,	// (0x0003d090) navi_navi_pane_g2

0x0001,

0xf919,	// (0x0003f436) navi_navi_pane_g_ParamLimits

0xf919,	// (0x0003f436) navi_navi_pane_g

0x5b04,	// (0x00035621) navi_navi_tabs_pane

0xd585,	// (0x0003d0a2) navi_navi_text_pane

0xd559,	// (0x0003d076) navi_navi_volume_pane

0xd547,	// (0x0003d064) navi_text_pane_t1

0xd53b,	// (0x0003d058) navi_icon_pane_g1

0x59f5,	// (0x00035512) navi_navi_text_pane_t1

0xbb23,	// (0x0003b640) navi_navi_volume_pane_g1

0xbb2b,	// (0x0003b648) volume_small_pane

0xd497,	// (0x0003cfb4) navi_navi_icon_text_pane_g1

0xd49f,	// (0x0003cfbc) navi_navi_icon_text_pane_t1

0x3be2,	// (0x000336ff) navi_tabs_2_long_pane

0x3be2,	// (0x000336ff) navi_tabs_2_pane

0x3be2,	// (0x000336ff) navi_tabs_3_long_pane

0x3be2,	// (0x000336ff) navi_tabs_3_pane

0x3be2,	// (0x000336ff) navi_tabs_4_pane

0xbb03,	// (0x0003b620) tabs_2_active_pane_ParamLimits

0xbb03,	// (0x0003b620) tabs_2_active_pane

0xbb13,	// (0x0003b630) tabs_2_passive_pane_ParamLimits

0xbb13,	// (0x0003b630) tabs_2_passive_pane

0xbad1,	// (0x0003b5ee) tabs_3_active_pane_ParamLimits

0xbad1,	// (0x0003b5ee) tabs_3_active_pane

0xbae1,	// (0x0003b5fe) tabs_3_passive_pane_ParamLimits

0xbae1,	// (0x0003b5fe) tabs_3_passive_pane

0xbaf2,	// (0x0003b60f) tabs_3_passive_pane_cp_ParamLimits

0xbaf2,	// (0x0003b60f) tabs_3_passive_pane_cp

0xba8d,	// (0x0003b5aa) tabs_4_active_pane_ParamLimits

0xba8d,	// (0x0003b5aa) tabs_4_active_pane

0xba9e,	// (0x0003b5bb) tabs_4_passive_pane_ParamLimits

0xba9e,	// (0x0003b5bb) tabs_4_passive_pane

0xbaaf,	// (0x0003b5cc) tabs_4_passive_pane_cp_ParamLimits

0xbaaf,	// (0x0003b5cc) tabs_4_passive_pane_cp

0xbac0,	// (0x0003b5dd) tabs_4_passive_pane_cp2_ParamLimits

0xbac0,	// (0x0003b5dd) tabs_4_passive_pane_cp2

0xba69,	// (0x0003b586) tabs_2_long_active_pane_ParamLimits

0xba69,	// (0x0003b586) tabs_2_long_active_pane

0xba7b,	// (0x0003b598) tabs_2_long_passive_pane_ParamLimits

0xba7b,	// (0x0003b598) tabs_2_long_passive_pane

0xba1e,	// (0x0003b53b) tabs_3_long_active_pane_ParamLimits

0xba1e,	// (0x0003b53b) tabs_3_long_active_pane

0xba37,	// (0x0003b554) tabs_3_long_passive_pane_ParamLimits

0xba37,	// (0x0003b554) tabs_3_long_passive_pane

0xba50,	// (0x0003b56d) tabs_3_long_passive_pane_cp_ParamLimits

0xba50,	// (0x0003b56d) tabs_3_long_passive_pane_cp

0x1053,	// (0x00030b70) volume_small_pane_g1

0xb9cd,	// (0x0003b4ea) volume_small_pane_g2

0xb9d6,	// (0x0003b4f3) volume_small_pane_g3

0xb9df,	// (0x0003b4fc) volume_small_pane_g4

0xb9e8,	// (0x0003b505) volume_small_pane_g5

0xb9f1,	// (0x0003b50e) volume_small_pane_g6

0xb9fa,	// (0x0003b517) volume_small_pane_g7

0xba03,	// (0x0003b520) volume_small_pane_g8

0xba0c,	// (0x0003b529) volume_small_pane_g9

0xba15,	// (0x0003b532) volume_small_pane_g10

0x0009,

0xf8e5,	// (0x0003f402) volume_small_pane_g

0x2566,	// (0x00032083) bg_active_tab_pane_cp2_ParamLimits

0x2566,	// (0x00032083) bg_active_tab_pane_cp2

0xb1bd,	// (0x0003acda) tabs_3_active_pane_g1

0xb1c5,	// (0x0003ace2) tabs_3_active_pane_t1

0x2566,	// (0x00032083) bg_passive_tab_pane_cp2_ParamLimits

0x2566,	// (0x00032083) bg_passive_tab_pane_cp2

0xb1bd,	// (0x0003acda) tabs_3_passive_pane_g1

0xb1c5,	// (0x0003ace2) tabs_3_passive_pane_t1

0x2566,	// (0x00032083) bg_active_tab_pane_cp3_ParamLimits

0x2566,	// (0x00032083) bg_active_tab_pane_cp3

0xb1d7,	// (0x0003acf4) tabs_4_active_pane_g1

0xb1df,	// (0x0003acfc) tabs_4_active_pane_t1

0x2566,	// (0x00032083) bg_passive_tab_pane_cp3_ParamLimits

0x2566,	// (0x00032083) bg_passive_tab_pane_cp3

0xb1d7,	// (0x0003acf4) tabs_4_1_passive_pane_g1

0xb1df,	// (0x0003acfc) tabs_4_1_passive_pane_t1

0x40de,	// (0x00033bfb) list_highlight_pane_cp2

0xd6a2,	// (0x0003d1bf) list_set_pane_ParamLimits

0xd6a2,	// (0x0003d1bf) list_set_pane

0xd76a,	// (0x0003d287) main_pane_set_t1_ParamLimits

0xd76a,	// (0x0003d287) main_pane_set_t1

0xd78a,	// (0x0003d2a7) main_pane_set_t2_ParamLimits

0xd78a,	// (0x0003d2a7) main_pane_set_t2

0xd79e,	// (0x0003d2bb) main_pane_set_t3_ParamLimits

0xd79e,	// (0x0003d2bb) main_pane_set_t3

0xd7b2,	// (0x0003d2cf) main_pane_set_t4_ParamLimits

0xd7b2,	// (0x0003d2cf) main_pane_set_t4

0x0003,

0xf9b5,	// (0x0003f4d2) main_pane_set_t_ParamLimits

0xf9b5,	// (0x0003f4d2) main_pane_set_t

0xd7c6,	// (0x0003d2e3) setting_code_pane

0x618e,	// (0x00035cab) setting_slider_graphic_pane

0x618e,	// (0x00035cab) setting_slider_pane

0x618e,	// (0x00035cab) setting_text_pane

0x618e,	// (0x00035cab) setting_volume_pane

0x0020,	// (0x0002fb3d) volume_set_pane

0x22ea,	// (0x00031e07) bg_set_opt_pane_cp

0x002a,	// (0x0002fb47) setting_slider_pane_t1

0x0040,	// (0x0002fb5d) setting_slider_pane_t2

0x005a,	// (0x0002fb77) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0003f0bf) setting_slider_pane_t

0x0072,	// (0x0002fb8f) slider_set_pane

0x220a,	// (0x00031d27) bg_set_opt_pane_cp2

0x232c,	// (0x00031e49) setting_slider_graphic_pane_g1

0x0088,	// (0x0002fba5) setting_slider_graphic_pane_t1

0x0098,	// (0x0002fbb5) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0003f0c6) setting_slider_graphic_pane_t

0x00a8,	// (0x0002fbc5) slider_set_pane_cp

0x220a,	// (0x00031d27) input_focus_pane_cp1

0x6015,	// (0x00035b32) list_set_text_pane

0x2200,	// (0x00031d1d) setting_text_pane_g1

0x220a,	// (0x00031d27) input_focus_pane_cp2

0x2200,	// (0x00031d1d) setting_code_pane_g1

0x2335,	// (0x00031e52) setting_code_pane_t1

0xeec8,	// (0x0003e9e5) set_text_pane_t1_ParamLimits

0xeec8,	// (0x0003e9e5) set_text_pane_t1

0x3161,	// (0x00032c7e) set_opt_bg_pane_g1

0x3169,	// (0x00032c86) set_opt_bg_pane_g2

0x5fed,	// (0x00035b0a) set_opt_bg_pane_g3

0x3179,	// (0x00032c96) set_opt_bg_pane_g4

0x3181,	// (0x00032c9e) set_opt_bg_pane_g5

0x3189,	// (0x00032ca6) set_opt_bg_pane_g6

0x5ff7,	// (0x00035b14) set_opt_bg_pane_g7

0x6001,	// (0x00035b1e) set_opt_bg_pane_g8

0x600b,	// (0x00035b28) set_opt_bg_pane_g9

0x0008,

0xf9a2,	// (0x0003f4bf) set_opt_bg_pane_g

0x5fe0,	// (0x00035afd) slider_set_pane_g1

0x125f,	// (0x00030d7c) slider_set_pane_g2

0x0006,

0xf993,	// (0x0003f4b0) slider_set_pane_g

0x11bf,	// (0x00030cdc) volume_set_pane_g1

0x11c9,	// (0x00030ce6) volume_set_pane_g2

0x11d3,	// (0x00030cf0) volume_set_pane_g3

0x11dd,	// (0x00030cfa) volume_set_pane_g4

0x11e7,	// (0x00030d04) volume_set_pane_g5

0x11f1,	// (0x00030d0e) volume_set_pane_g6

0x11fb,	// (0x00030d18) volume_set_pane_g7

0x1205,	// (0x00030d22) volume_set_pane_g8

0x120f,	// (0x00030d2c) volume_set_pane_g9

0x1219,	// (0x00030d36) volume_set_pane_g10

0x0009,

0xf96b,	// (0x0003f488) volume_set_pane_g

0xc205,	// (0x0003bd22) indicator_pane_ParamLimits

0xc205,	// (0x0003bd22) indicator_pane

0xc231,	// (0x0003bd4e) main_idle_pane_g2_ParamLimits

0xc231,	// (0x0003bd4e) main_idle_pane_g2

0xc269,	// (0x0003bd86) main_pane_idle_g1_ParamLimits

0xc269,	// (0x0003bd86) main_pane_idle_g1

0x2385,	// (0x00031ea2) popup_clock_digital_analogue_window_ParamLimits

0x2385,	// (0x00031ea2) popup_clock_digital_analogue_window

0xc297,	// (0x0003bdb4) soft_indicator_pane_ParamLimits

0xc297,	// (0x0003bdb4) soft_indicator_pane

0xc2b3,	// (0x0003bdd0) wallpaper_pane_ParamLimits

0xc2b3,	// (0x0003bdd0) wallpaper_pane

0x2200,	// (0x00031d1d) wallpaper_pane_g1

0xc2c5,	// (0x0003bde2) indicator_pane_g1_ParamLimits

0xc2c5,	// (0x0003bde2) indicator_pane_g1

0x6452,	// (0x00035f6f) navi_navi_icon_text_pane_srt_g1

0x23d9,	// (0x00031ef6) soft_indicator_pane_t1

0x23f3,	// (0x00031f10) aid_ps_area_pane

0xc2de,	// (0x0003bdfb) aid_ps_clock_pane

0x2412,	// (0x00031f2f) aid_ps_indicator_pane

0x241e,	// (0x00031f3b) indicator_ps_pane_ParamLimits

0x241e,	// (0x00031f3b) indicator_ps_pane

0x242d,	// (0x00031f4a) power_save_pane_g1_ParamLimits

0x242d,	// (0x00031f4a) power_save_pane_g1

0x2439,	// (0x00031f56) power_save_pane_g2_ParamLimits

0x2439,	// (0x00031f56) power_save_pane_g2

0xf2ec,	// (0x0003ee09) aid_navinavi_width_pane

0x23f3,	// (0x00031f10) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0003f0cb) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0003f0cb) power_save_pane_g

0x2447,	// (0x00031f64) power_save_pane_t1_ParamLimits

0x2447,	// (0x00031f64) power_save_pane_t1

0xc2de,	// (0x0003bdfb) aid_ps_clock_pane_ParamLimits

0x2412,	// (0x00031f2f) aid_ps_indicator_pane_ParamLimits

0x2459,	// (0x00031f76) power_save_pane_t4_ParamLimits

0x2459,	// (0x00031f76) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0003f0d0) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0003f0d0) power_save_pane_t

0x2483,	// (0x00031fa0) power_save_t3_ParamLimits

0x2483,	// (0x00031fa0) power_save_t3

0x246e,	// (0x00031f8b) power_save_t2_ParamLimits

0x246e,	// (0x00031f8b) power_save_t2

0x2498,	// (0x00031fb5) indicator_ps_pane_g1

0xc2ec,	// (0x0003be09) ai_gene_pane_ParamLimits

0xc2ec,	// (0x0003be09) ai_gene_pane

0xc303,	// (0x0003be20) ai_links_pane_ParamLimits

0xc303,	// (0x0003be20) ai_links_pane

0xc31b,	// (0x0003be38) indicator_pane_cp1_ParamLimits

0xc31b,	// (0x0003be38) indicator_pane_cp1

0xc32a,	// (0x0003be47) main_pane_idle_g1_cp_ParamLimits

0xc32a,	// (0x0003be47) main_pane_idle_g1_cp

0x24d1,	// (0x00031fee) popup_ai_links_title_window

0xc342,	// (0x0003be5f) soft_indicator_pane_cp1_ParamLimits

0xc342,	// (0x0003be5f) soft_indicator_pane_cp1

0x5db3,	// (0x000358d0) ai_links_pane_g1

0x5dbc,	// (0x000358d9) grid_ai_links_pane

0xd5b1,	// (0x0003d0ce) ai_gene_pane_1

0x5da1,	// (0x000358be) ai_gene_pane_2

0x5daa,	// (0x000358c7) list_highlight_pane_cp4

0xd58d,	// (0x0003d0aa) cell_ai_link_pane_ParamLimits

0xd58d,	// (0x0003d0aa) cell_ai_link_pane

0x5d70,	// (0x0003588d) cell_ai_link_pane_g1

0x271c,	// (0x00032239) cell_ai_link_pane_g2

0x0001,

0xf946,	// (0x0003f463) cell_ai_link_pane_g

0x220a,	// (0x00031d27) grid_highlight_cp2

0x220a,	// (0x00031d27) bg_popup_sub_pane_cp1

0x24f4,	// (0x00032011) popup_ai_links_title_window_t1

0x5cbc,	// (0x000357d9) ai_gene_pane_1_g1_ParamLimits

0x5cbc,	// (0x000357d9) ai_gene_pane_1_g1

0x5cc8,	// (0x000357e5) ai_gene_pane_1_g2_ParamLimits

0x5cc8,	// (0x000357e5) ai_gene_pane_1_g2

0x0001,

0xf93c,	// (0x0003f459) ai_gene_pane_1_g_ParamLimits

0xf93c,	// (0x0003f459) ai_gene_pane_1_g

0x5cd5,	// (0x000357f2) ai_gene_pane_1_t1_ParamLimits

0x5cd5,	// (0x000357f2) ai_gene_pane_1_t1

0x5d09,	// (0x00035826) grid_ai_soft_ind_pane

0x5ca7,	// (0x000357c4) ai_gene_pane_2_t1_ParamLimits

0x5ca7,	// (0x000357c4) ai_gene_pane_2_t1

0xc356,	// (0x0003be73) main_pane_empty_t1_ParamLimits

0xc356,	// (0x0003be73) main_pane_empty_t1

0xc36e,	// (0x0003be8b) main_pane_empty_t2_ParamLimits

0xc36e,	// (0x0003be8b) main_pane_empty_t2

0xc383,	// (0x0003bea0) main_pane_empty_t3_ParamLimits

0xc383,	// (0x0003bea0) main_pane_empty_t3

0xc395,	// (0x0003beb2) main_pane_empty_t4_ParamLimits

0xc395,	// (0x0003beb2) main_pane_empty_t4

0xc3a7,	// (0x0003bec4) main_pane_empty_t5_ParamLimits

0xc3a7,	// (0x0003bec4) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0003f0d5) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0003f0d5) main_pane_empty_t

0x31b2,	// (0x00032ccf) bg_popup_window_pane_ParamLimits

0x31b2,	// (0x00032ccf) bg_popup_window_pane

0x5a03,	// (0x00035520) find_popup_pane_cp2_ParamLimits

0x5a03,	// (0x00035520) find_popup_pane_cp2

0x5a0f,	// (0x0003552c) heading_pane_ParamLimits

0x5a0f,	// (0x0003552c) heading_pane

0x220a,	// (0x00031d27) bg_popup_sub_pane

0xd4bc,	// (0x0003cfd9) bg_popup_window_pane_g1_ParamLimits

0xd4bc,	// (0x0003cfd9) bg_popup_window_pane_g1

0xd4cb,	// (0x0003cfe8) bg_popup_window_pane_g2_ParamLimits

0xd4cb,	// (0x0003cfe8) bg_popup_window_pane_g2

0xd4d7,	// (0x0003cff4) bg_popup_window_pane_g3_ParamLimits

0xd4d7,	// (0x0003cff4) bg_popup_window_pane_g3

0xd4e3,	// (0x0003d000) bg_popup_window_pane_g4_ParamLimits

0xd4e3,	// (0x0003d000) bg_popup_window_pane_g4

0xd4f2,	// (0x0003d00f) bg_popup_window_pane_g5_ParamLimits

0xd4f2,	// (0x0003d00f) bg_popup_window_pane_g5

0xd502,	// (0x0003d01f) bg_popup_window_pane_g6_ParamLimits

0xd502,	// (0x0003d01f) bg_popup_window_pane_g6

0xd50e,	// (0x0003d02b) bg_popup_window_pane_g7_ParamLimits

0xd50e,	// (0x0003d02b) bg_popup_window_pane_g7

0xd51d,	// (0x0003d03a) bg_popup_window_pane_g8_ParamLimits

0xd51d,	// (0x0003d03a) bg_popup_window_pane_g8

0xd52c,	// (0x0003d049) bg_popup_window_pane_g9_ParamLimits

0xd52c,	// (0x0003d049) bg_popup_window_pane_g9

0x59e9,	// (0x00035506) bg_popup_window_pane_g10_ParamLimits

0x59e9,	// (0x00035506) bg_popup_window_pane_g10

0x0009,

0xf904,	// (0x0003f421) bg_popup_window_pane_g_ParamLimits

0xf904,	// (0x0003f421) bg_popup_window_pane_g

0x5912,	// (0x0003542f) bg_popup_heading_pane_ParamLimits

0x5912,	// (0x0003542f) bg_popup_heading_pane

0x1385,	// (0x00030ea2) tabs_4_passive_pane_cp_srt_ParamLimits

0x1385,	// (0x00030ea2) tabs_4_passive_pane_cp_srt

0x1397,	// (0x00030eb4) tabs_4_passive_pane_srt_ParamLimits

0x5926,	// (0x00035443) heading_pane_g2

0x1397,	// (0x00030eb4) tabs_4_passive_pane_srt

0x4d18,	// (0x00034835) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4d18,	// (0x00034835) bg_passive_tab_pane_cp3_srt

0x592e,	// (0x0003544b) heading_pane_t1_ParamLimits

0x592e,	// (0x0003544b) heading_pane_t1

0x5945,	// (0x00035462) heading_pane_t2_ParamLimits

0x5945,	// (0x00035462) heading_pane_t2

0x0001,

0xf8ff,	// (0x0003f41c) heading_pane_t_ParamLimits

0xf8ff,	// (0x0003f41c) heading_pane_t

0x543d,	// (0x00034f5a) bg_popup_heading_pane_g1

0x54ec,	// (0x00035009) bg_popup_heading_pane_g2

0x54f6,	// (0x00035013) bg_popup_heading_pane_g3

0x5500,	// (0x0003501d) bg_popup_heading_pane_g4

0x550a,	// (0x00035027) bg_popup_heading_pane_g5

0x5514,	// (0x00035031) bg_popup_heading_pane_g6

0x551c,	// (0x00035039) bg_popup_heading_pane_g7

0x5524,	// (0x00035041) bg_popup_heading_pane_g8

0x552e,	// (0x0003504b) bg_popup_heading_pane_g9

0x0008,

0xf8bb,	// (0x0003f3d8) bg_popup_heading_pane_g

0x4c26,	// (0x00034743) bg_popup_sub_pane_g1

0x4c36,	// (0x00034753) bg_popup_sub_pane_g2

0x4c2e,	// (0x0003474b) bg_popup_sub_pane_g3

0x4c46,	// (0x00034763) bg_popup_sub_pane_g4

0x4c3e,	// (0x0003475b) bg_popup_sub_pane_g5

0x4c4e,	// (0x0003476b) bg_popup_sub_pane_g6

0x4c56,	// (0x00034773) bg_popup_sub_pane_g7

0x4c66,	// (0x00034783) bg_popup_sub_pane_g8

0x4c5e,	// (0x0003477b) bg_popup_sub_pane_g9

0x0008,

0xf895,	// (0x0003f3b2) bg_popup_sub_pane_g

0x2566,	// (0x00032083) bg_popup_window_pane_cp5_ParamLimits

0x2566,	// (0x00032083) bg_popup_window_pane_cp5

0x2582,	// (0x0003209f) popup_note_window_g1_ParamLimits

0x2582,	// (0x0003209f) popup_note_window_g1

0x258e,	// (0x000320ab) popup_note_window_t1_ParamLimits

0x258e,	// (0x000320ab) popup_note_window_t1

0x25a4,	// (0x000320c1) popup_note_window_t2_ParamLimits

0x25a4,	// (0x000320c1) popup_note_window_t2

0x25ba,	// (0x000320d7) popup_note_window_t3_ParamLimits

0x25ba,	// (0x000320d7) popup_note_window_t3

0x25d0,	// (0x000320ed) popup_note_window_t4_ParamLimits

0x25d0,	// (0x000320ed) popup_note_window_t4

0x25f8,	// (0x00032115) popup_note_window_t5_ParamLimits

0x25f8,	// (0x00032115) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0003f0e0) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0003f0e0) popup_note_window_t

0x261c,	// (0x00032139) bg_popup_window_pane_cp6_ParamLimits

0x261c,	// (0x00032139) bg_popup_window_pane_cp6

0x53b9,	// (0x00034ed6) popup_note_image_window_g1_ParamLimits

0x53b9,	// (0x00034ed6) popup_note_image_window_g1

0x53c5,	// (0x00034ee2) popup_note_image_window_g2_ParamLimits

0x53c5,	// (0x00034ee2) popup_note_image_window_g2

0x0001,

0xf889,	// (0x0003f3a6) popup_note_image_window_g_ParamLimits

0xf889,	// (0x0003f3a6) popup_note_image_window_g

0x53de,	// (0x00034efb) popup_note_image_window_t1_ParamLimits

0x53de,	// (0x00034efb) popup_note_image_window_t1

0x53f7,	// (0x00034f14) popup_note_image_window_t2_ParamLimits

0x53f7,	// (0x00034f14) popup_note_image_window_t2

0x5410,	// (0x00034f2d) popup_note_image_window_t3_ParamLimits

0x5410,	// (0x00034f2d) popup_note_image_window_t3

0x0002,

0xf88e,	// (0x0003f3ab) popup_note_image_window_t_ParamLimits

0xf88e,	// (0x0003f3ab) popup_note_image_window_t

0x5279,	// (0x00034d96) bg_popup_window_pane_cp7_ParamLimits

0x5279,	// (0x00034d96) bg_popup_window_pane_cp7

0x52a9,	// (0x00034dc6) popup_note_wait_window_g1_ParamLimits

0x52a9,	// (0x00034dc6) popup_note_wait_window_g1

0x52b5,	// (0x00034dd2) popup_note_wait_window_g2_ParamLimits

0x52b5,	// (0x00034dd2) popup_note_wait_window_g2

0x0002,

0xf877,	// (0x0003f394) popup_note_wait_window_g_ParamLimits

0xf877,	// (0x0003f394) popup_note_wait_window_g

0x52cd,	// (0x00034dea) popup_note_wait_window_t1_ParamLimits

0x52cd,	// (0x00034dea) popup_note_wait_window_t1

0x52f4,	// (0x00034e11) popup_note_wait_window_t2_ParamLimits

0x52f4,	// (0x00034e11) popup_note_wait_window_t2

0x5312,	// (0x00034e2f) popup_note_wait_window_t3_ParamLimits

0x5312,	// (0x00034e2f) popup_note_wait_window_t3

0x5325,	// (0x00034e42) popup_note_wait_window_t4_ParamLimits

0x5325,	// (0x00034e42) popup_note_wait_window_t4

0x0004,

0xf87e,	// (0x0003f39b) popup_note_wait_window_t_ParamLimits

0xf87e,	// (0x0003f39b) popup_note_wait_window_t

0x534a,	// (0x00034e67) wait_bar_pane_ParamLimits

0x534a,	// (0x00034e67) wait_bar_pane

0x220a,	// (0x00031d27) wait_anim_pane

0x220a,	// (0x00031d27) wait_border_pane

0x2200,	// (0x00031d1d) wait_anim_pane_g1

0x2200,	// (0x00031d1d) wait_anim_pane_g2

0x0001,

0xf742,	// (0x0003f25f) wait_anim_pane_g

0x521d,	// (0x00034d3a) wait_border_pane_g1

0x5228,	// (0x00034d45) wait_border_pane_g2

0x5231,	// (0x00034d4e) wait_border_pane_g3

0x0002,

0xf870,	// (0x0003f38d) wait_border_pane_g

0x5179,	// (0x00034c96) bg_popup_window_pane_cp16_ParamLimits

0x5179,	// (0x00034c96) bg_popup_window_pane_cp16

0x5187,	// (0x00034ca4) indicator_popup_pane_cp4_ParamLimits

0x5187,	// (0x00034ca4) indicator_popup_pane_cp4

0x519b,	// (0x00034cb8) popup_query_data_window_t1_ParamLimits

0x519b,	// (0x00034cb8) popup_query_data_window_t1

0x51ad,	// (0x00034cca) popup_query_data_window_t2_ParamLimits

0x51ad,	// (0x00034cca) popup_query_data_window_t2

0x51c6,	// (0x00034ce3) popup_query_data_window_t3_ParamLimits

0x51c6,	// (0x00034ce3) popup_query_data_window_t3

0x0002,

0xf869,	// (0x0003f386) popup_query_data_window_t_ParamLimits

0xf869,	// (0x0003f386) popup_query_data_window_t

0x51e0,	// (0x00034cfd) query_popup_data_pane_ParamLimits

0x51e0,	// (0x00034cfd) query_popup_data_pane

0x51f4,	// (0x00034d11) query_popup_data_pane_cp1_ParamLimits

0x51f4,	// (0x00034d11) query_popup_data_pane_cp1

0x261c,	// (0x00032139) bg_popup_window_pane_cp10_ParamLimits

0x261c,	// (0x00032139) bg_popup_window_pane_cp10

0x50dc,	// (0x00034bf9) indicator_popup_pane_ParamLimits

0x50dc,	// (0x00034bf9) indicator_popup_pane

0x267d,	// (0x0003219a) popup_query_code_window_t1_ParamLimits

0x267d,	// (0x0003219a) popup_query_code_window_t1

0x50f4,	// (0x00034c11) popup_query_code_window_t2_ParamLimits

0x50f4,	// (0x00034c11) popup_query_code_window_t2

0x5132,	// (0x00034c4f) popup_query_code_window_t3_ParamLimits

0x5132,	// (0x00034c4f) popup_query_code_window_t3

0x0002,

0xf862,	// (0x0003f37f) popup_query_code_window_t_ParamLimits

0xf862,	// (0x0003f37f) popup_query_code_window_t

0x5161,	// (0x00034c7e) query_popup_pane_ParamLimits

0x5161,	// (0x00034c7e) query_popup_pane

0x261c,	// (0x00032139) bg_popup_window_pane_cp15_ParamLimits

0x261c,	// (0x00032139) bg_popup_window_pane_cp15

0x263c,	// (0x00032159) indicator_popup_pane_cp1_ParamLimits

0x263c,	// (0x00032159) indicator_popup_pane_cp1

0x264f,	// (0x0003216c) indicator_popup_pane_cp2_ParamLimits

0x264f,	// (0x0003216c) indicator_popup_pane_cp2

0x266a,	// (0x00032187) popup_query_data_code_window_g1_ParamLimits

0x266a,	// (0x00032187) popup_query_data_code_window_g1

0x267d,	// (0x0003219a) popup_query_data_code_window_t1_ParamLimits

0x267d,	// (0x0003219a) popup_query_data_code_window_t1

0x268f,	// (0x000321ac) popup_query_data_code_window_t2_ParamLimits

0x268f,	// (0x000321ac) popup_query_data_code_window_t2

0x26a1,	// (0x000321be) popup_query_data_code_window_t3_ParamLimits

0x26a1,	// (0x000321be) popup_query_data_code_window_t3

0x26b7,	// (0x000321d4) popup_query_data_code_window_t4_ParamLimits

0x26b7,	// (0x000321d4) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0003f0eb) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0003f0eb) popup_query_data_code_window_t

0x0eeb,	// (0x00030a08) list_single_midp_graphic_pane_g3

0x26d1,	// (0x000321ee) query_popup_data_pane_cp2_ParamLimits

0x26e4,	// (0x00032201) query_popup_pane_cp2_ParamLimits

0x26e4,	// (0x00032201) query_popup_pane_cp2

0x220a,	// (0x00031d27) bg_popup_window_pane_cp11

0x50b0,	// (0x00034bcd) heading_pane_cp5

0x2d5d,	// (0x0003287a) listscroll_popup_info_pane

0x220a,	// (0x00031d27) input_focus_pane_cp3

0x26ff,	// (0x0003221c) query_popup_pane_t1

0x270d,	// (0x0003222a) list_popup_info_pane_ParamLimits

0x270d,	// (0x0003222a) list_popup_info_pane

0x271c,	// (0x00032239) listscroll_popup_info_pane_g1

0x2724,	// (0x00032241) scroll_pane_cp7

0x272e,	// (0x0003224b) popup_info_list_pane_t1_ParamLimits

0x272e,	// (0x0003224b) popup_info_list_pane_t1

0x2748,	// (0x00032265) popup_info_list_pane_t2_ParamLimits

0x2748,	// (0x00032265) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0003f0f4) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0003f0f4) popup_info_list_pane_t

0x220a,	// (0x00031d27) bg_popup_window_pane_cp12

0x646c,	// (0x00035f89) find_popup_pane

0x22ea,	// (0x00031e07) bg_popup_window_pane_cp3

0x2762,	// (0x0003227f) heading_pane_cp3

0x2cf7,	// (0x00032814) listscroll_popup_graphic_pane

0x220a,	// (0x00031d27) bg_popup_window_pane_cp4

0xc409,	// (0x0003bf26) heading_pane_cp4

0x2d5d,	// (0x0003287a) listscroll_popup_colour_pane

0xc413,	// (0x0003bf30) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc413,	// (0x0003bf30) cell_large_graphic_colour_none_popup_pane

0xc427,	// (0x0003bf44) grid_large_graphic_colour_popup_pane_ParamLimits

0xc427,	// (0x0003bf44) grid_large_graphic_colour_popup_pane

0xc453,	// (0x0003bf70) listscroll_popup_colour_pane_g1_ParamLimits

0xc453,	// (0x0003bf70) listscroll_popup_colour_pane_g1

0xc46a,	// (0x0003bf87) listscroll_popup_colour_pane_g2_ParamLimits

0xc46a,	// (0x0003bf87) listscroll_popup_colour_pane_g2

0xc481,	// (0x0003bf9e) listscroll_popup_colour_pane_g3_ParamLimits

0xc481,	// (0x0003bf9e) listscroll_popup_colour_pane_g3

0xc491,	// (0x0003bfae) listscroll_popup_colour_pane_g4_ParamLimits

0xc491,	// (0x0003bfae) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0003f0f9) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0003f0f9) listscroll_popup_colour_pane_g

0x2df7,	// (0x00032914) scroll_pane_cp6_ParamLimits

0x2df7,	// (0x00032914) scroll_pane_cp6

0xc4a5,	// (0x0003bfc2) cell_large_graphic_colour_popup_pane_ParamLimits

0xc4a5,	// (0x0003bfc2) cell_large_graphic_colour_popup_pane

0x2e2e,	// (0x0003294b) cell_large_graphic_colour_none_popup_pane_t1

0x220a,	// (0x00031d27) grid_highlight_pane_cp5

0x2e3d,	// (0x0003295a) cell_large_graphic_colour_popup_pane_g1

0x2e45,	// (0x00032962) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0003f102) cell_large_graphic_colour_popup_pane_g

0x2e4d,	// (0x0003296a) cell_large_graphic_colour_popup_pane_g2_copy1

0x2e56,	// (0x00032973) grid_highlight_pane_cp4

0x2e5e,	// (0x0003297b) bg_popup_window_pane_cp8_ParamLimits

0x2e5e,	// (0x0003297b) bg_popup_window_pane_cp8

0x2e79,	// (0x00032996) popup_snote_single_text_window_g1_ParamLimits

0x2e79,	// (0x00032996) popup_snote_single_text_window_g1

0x2e8b,	// (0x000329a8) popup_snote_single_text_window_t1_ParamLimits

0x2e8b,	// (0x000329a8) popup_snote_single_text_window_t1

0x2e9e,	// (0x000329bb) popup_snote_single_text_window_t2_ParamLimits

0x2e9e,	// (0x000329bb) popup_snote_single_text_window_t2

0x2eb1,	// (0x000329ce) popup_snote_single_text_window_t3_ParamLimits

0x2eb1,	// (0x000329ce) popup_snote_single_text_window_t3

0x2eea,	// (0x00032a07) popup_snote_single_text_window_t4_ParamLimits

0x2eea,	// (0x00032a07) popup_snote_single_text_window_t4

0x2f1e,	// (0x00032a3b) popup_snote_single_text_window_t5_ParamLimits

0x2f1e,	// (0x00032a3b) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0003f107) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0003f107) popup_snote_single_text_window_t

0x2f4d,	// (0x00032a6a) bg_popup_window_pane_cp9_ParamLimits

0x2f4d,	// (0x00032a6a) bg_popup_window_pane_cp9

0x2e79,	// (0x00032996) popup_snote_single_graphic_window_g1_ParamLimits

0x2e79,	// (0x00032996) popup_snote_single_graphic_window_g1

0x2f5b,	// (0x00032a78) popup_snote_single_graphic_window_g2_ParamLimits

0x2f5b,	// (0x00032a78) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0003f112) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0003f112) popup_snote_single_graphic_window_g

0x2f67,	// (0x00032a84) popup_snote_single_graphic_window_t1_ParamLimits

0x2f67,	// (0x00032a84) popup_snote_single_graphic_window_t1

0x2f7a,	// (0x00032a97) popup_snote_single_graphic_window_t2_ParamLimits

0x2f7a,	// (0x00032a97) popup_snote_single_graphic_window_t2

0x2f8d,	// (0x00032aaa) popup_snote_single_graphic_window_t3_ParamLimits

0x2f8d,	// (0x00032aaa) popup_snote_single_graphic_window_t3

0x2fc6,	// (0x00032ae3) popup_snote_single_graphic_window_t4_ParamLimits

0x2fc6,	// (0x00032ae3) popup_snote_single_graphic_window_t4

0x2ffa,	// (0x00032b17) popup_snote_single_graphic_window_t5_ParamLimits

0x2ffa,	// (0x00032b17) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0003f117) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0003f117) popup_snote_single_graphic_window_t

0x63aa,	// (0x00035ec7) grid_graphic_popup_pane_ParamLimits

0x63aa,	// (0x00035ec7) grid_graphic_popup_pane

0x63d8,	// (0x00035ef5) listscroll_popup_graphic_pane_g1_ParamLimits

0x63d8,	// (0x00035ef5) listscroll_popup_graphic_pane_g1

0xd8ee,	// (0x0003d40b) listscroll_popup_graphic_pane_g2_ParamLimits

0xd8ee,	// (0x0003d40b) listscroll_popup_graphic_pane_g2

0x0001,

0xf9df,	// (0x0003f4fc) listscroll_popup_graphic_pane_g_ParamLimits

0xf9df,	// (0x0003f4fc) listscroll_popup_graphic_pane_g

0x6400,	// (0x00035f1d) scroll_pane_cp5

0xd8ae,	// (0x0003d3cb) cell_graphic_popup_pane_ParamLimits

0xd8ae,	// (0x0003d3cb) cell_graphic_popup_pane

0x6333,	// (0x00035e50) cell_graphic_popup_pane_g1

0x633b,	// (0x00035e58) cell_graphic_popup_pane_g2

0x2e4d,	// (0x0003296a) cell_graphic_popup_pane_g3

0x0002,

0xf9d8,	// (0x0003f4f5) cell_graphic_popup_pane_g

0x6344,	// (0x00035e61) cell_graphic_popup_pane_t2

0x2e56,	// (0x00032973) grid_highlight_pane_cp3

0x303b,	// (0x00032b58) list_gen_pane_ParamLimits

0x303b,	// (0x00032b58) list_gen_pane

0x306d,	// (0x00032b8a) scroll_pane

0xd869,	// (0x0003d386) bg_list_pane_g1_ParamLimits

0xd869,	// (0x0003d386) bg_list_pane_g1

0x62b0,	// (0x00035dcd) bg_list_pane_g2_ParamLimits

0x62b0,	// (0x00035dcd) bg_list_pane_g2

0x62c3,	// (0x00035de0) bg_list_pane_g3_ParamLimits

0x62c3,	// (0x00035de0) bg_list_pane_g3

0x62d5,	// (0x00035df2) bg_list_pane_g4_ParamLimits

0x62d5,	// (0x00035df2) bg_list_pane_g4

0xd884,	// (0x0003d3a1) bg_list_pane_g5_ParamLimits

0xd884,	// (0x0003d3a1) bg_list_pane_g5

0x0004,

0xf9cd,	// (0x0003f4ea) bg_list_pane_g_ParamLimits

0xf9cd,	// (0x0003f4ea) bg_list_pane_g

0xd804,	// (0x0003d321) list_double2_graphic_large_graphic_pane_ParamLimits

0xd804,	// (0x0003d321) list_double2_graphic_large_graphic_pane

0xd804,	// (0x0003d321) list_double2_graphic_pane_ParamLimits

0xd804,	// (0x0003d321) list_double2_graphic_pane

0xd804,	// (0x0003d321) list_double2_large_graphic_pane_ParamLimits

0xd804,	// (0x0003d321) list_double2_large_graphic_pane

0xd804,	// (0x0003d321) list_double2_pane_ParamLimits

0xd804,	// (0x0003d321) list_double2_pane

0xd804,	// (0x0003d321) list_double_graphic_heading_pane_ParamLimits

0xd804,	// (0x0003d321) list_double_graphic_heading_pane

0xd804,	// (0x0003d321) list_double_graphic_pane_ParamLimits

0xd804,	// (0x0003d321) list_double_graphic_pane

0xd804,	// (0x0003d321) list_double_heading_pane_ParamLimits

0xd804,	// (0x0003d321) list_double_heading_pane

0xd804,	// (0x0003d321) list_double_large_graphic_pane_ParamLimits

0xd804,	// (0x0003d321) list_double_large_graphic_pane

0xd804,	// (0x0003d321) list_double_number_pane_ParamLimits

0xd804,	// (0x0003d321) list_double_number_pane

0xd804,	// (0x0003d321) list_double_pane_ParamLimits

0xd804,	// (0x0003d321) list_double_pane

0xd804,	// (0x0003d321) list_double_time_pane_ParamLimits

0xd804,	// (0x0003d321) list_double_time_pane

0xd804,	// (0x0003d321) list_setting_number_pane_ParamLimits

0xd804,	// (0x0003d321) list_setting_number_pane

0xd804,	// (0x0003d321) list_setting_pane_ParamLimits

0xd804,	// (0x0003d321) list_setting_pane

0xbb72,	// (0x0003b68f) list_single_2graphic_pane_ParamLimits

0xbb72,	// (0x0003b68f) list_single_2graphic_pane

0xbb72,	// (0x0003b68f) list_single_graphic_heading_pane_ParamLimits

0xbb72,	// (0x0003b68f) list_single_graphic_heading_pane

0xbb72,	// (0x0003b68f) list_single_graphic_pane_ParamLimits

0xbb72,	// (0x0003b68f) list_single_graphic_pane

0xbb72,	// (0x0003b68f) list_single_heading_pane_ParamLimits

0xbb72,	// (0x0003b68f) list_single_heading_pane

0xd82c,	// (0x0003d349) list_single_large_graphic_pane_ParamLimits

0xd82c,	// (0x0003d349) list_single_large_graphic_pane

0xbb72,	// (0x0003b68f) list_single_number_heading_pane_ParamLimits

0xbb72,	// (0x0003b68f) list_single_number_heading_pane

0xbb72,	// (0x0003b68f) list_single_number_pane_ParamLimits

0xbb72,	// (0x0003b68f) list_single_number_pane

0xbb72,	// (0x0003b68f) list_single_pane_ParamLimits

0xbb72,	// (0x0003b68f) list_single_pane

0x220a,	// (0x00031d27) list_highlight_pane_cp1

0x0f1a,	// (0x00030a37) list_single_pane_g1_ParamLimits

0x0f1a,	// (0x00030a37) list_single_pane_g1

0x0f26,	// (0x00030a43) list_single_pane_g2_ParamLimits

0x0f26,	// (0x00030a43) list_single_pane_g2

0x0001,

0xf60c,	// (0x0003f129) list_single_pane_g_ParamLimits

0xf60c,	// (0x0003f129) list_single_pane_g

0x1478,	// (0x00030f95) list_single_pane_t1_ParamLimits

0x1478,	// (0x00030f95) list_single_pane_t1

0x0f1a,	// (0x00030a37) list_single_number_pane_g1_ParamLimits

0x0f1a,	// (0x00030a37) list_single_number_pane_g1

0x0f26,	// (0x00030a43) list_single_number_pane_g2_ParamLimits

0x0f26,	// (0x00030a43) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0003f129) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0003f129) list_single_number_pane_g

0x0eb0,	// (0x000309cd) list_single_number_pane_t1_ParamLimits

0x0eb0,	// (0x000309cd) list_single_number_pane_t1

0xbb34,	// (0x0003b651) list_single_number_pane_t2_ParamLimits

0xbb34,	// (0x0003b651) list_single_number_pane_t2

0x0001,

0xf98e,	// (0x0003f4ab) list_single_number_pane_t_ParamLimits

0xf98e,	// (0x0003f4ab) list_single_number_pane_t

0xb1f1,	// (0x0003ad0e) list_single_graphic_pane_g1_ParamLimits

0xb1f1,	// (0x0003ad0e) list_single_graphic_pane_g1

0x0f1a,	// (0x00030a37) list_single_graphic_pane_g2_ParamLimits

0x0f1a,	// (0x00030a37) list_single_graphic_pane_g2

0x0f26,	// (0x00030a43) list_single_graphic_pane_g3_ParamLimits

0x0f26,	// (0x00030a43) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0003f122) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0003f122) list_single_graphic_pane_g

0xb1fd,	// (0x0003ad1a) list_single_graphic_pane_t1_ParamLimits

0xb1fd,	// (0x0003ad1a) list_single_graphic_pane_t1

0x0f1a,	// (0x00030a37) list_single_heading_pane_g1_ParamLimits

0x0f1a,	// (0x00030a37) list_single_heading_pane_g1

0x0f26,	// (0x00030a43) list_single_heading_pane_g2_ParamLimits

0x0f26,	// (0x00030a43) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0003f129) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0003f129) list_single_heading_pane_g

0xb213,	// (0x0003ad30) list_single_heading_pane_t1_ParamLimits

0xb213,	// (0x0003ad30) list_single_heading_pane_t1

0xb229,	// (0x0003ad46) list_single_heading_pane_t2_ParamLimits

0xb229,	// (0x0003ad46) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0003f12e) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0003f12e) list_single_heading_pane_t

0x0f1a,	// (0x00030a37) list_single_number_heading_pane_g1_ParamLimits

0x0f1a,	// (0x00030a37) list_single_number_heading_pane_g1

0x0f26,	// (0x00030a43) list_single_number_heading_pane_g2_ParamLimits

0x0f26,	// (0x00030a43) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0003f129) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0003f129) list_single_number_heading_pane_g

0xb213,	// (0x0003ad30) list_single_number_heading_pane_t1_ParamLimits

0xb213,	// (0x0003ad30) list_single_number_heading_pane_t1

0xb23b,	// (0x0003ad58) list_single_number_heading_pane_t2_ParamLimits

0xb23b,	// (0x0003ad58) list_single_number_heading_pane_t2

0x1452,	// (0x00030f6f) list_single_number_heading_pane_t3_ParamLimits

0x1452,	// (0x00030f6f) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0003f133) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0003f133) list_single_number_heading_pane_t

0x0e8c,	// (0x000309a9) list_single_graphic_heading_pane_g1_ParamLimits

0x0e8c,	// (0x000309a9) list_single_graphic_heading_pane_g1

0xb24d,	// (0x0003ad6a) list_single_graphic_heading_pane_g4_ParamLimits

0xb24d,	// (0x0003ad6a) list_single_graphic_heading_pane_g4

0x0f26,	// (0x00030a43) list_single_graphic_heading_pane_g5_ParamLimits

0x0f26,	// (0x00030a43) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0003f13a) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0003f13a) list_single_graphic_heading_pane_g

0xb213,	// (0x0003ad30) list_single_graphic_heading_pane_t1_ParamLimits

0xb213,	// (0x0003ad30) list_single_graphic_heading_pane_t1

0xb25e,	// (0x0003ad7b) list_single_graphic_heading_pane_t2_ParamLimits

0xb25e,	// (0x0003ad7b) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0003f141) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0003f141) list_single_graphic_heading_pane_t

0x148e,	// (0x00030fab) list_single_large_graphic_pane_g1_ParamLimits

0x148e,	// (0x00030fab) list_single_large_graphic_pane_g1

0x149a,	// (0x00030fb7) list_single_large_graphic_pane_g2_ParamLimits

0x149a,	// (0x00030fb7) list_single_large_graphic_pane_g2

0x14a6,	// (0x00030fc3) list_single_large_graphic_pane_g3_ParamLimits

0x14a6,	// (0x00030fc3) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0003f146) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0003f146) list_single_large_graphic_pane_g

0x5228,	// (0x00034d45) wait_border_pane_g2_copy1

0xb270,	// (0x0003ad8d) list_single_large_graphic_pane_g4_cp2

0x14b2,	// (0x00030fcf) list_single_large_graphic_pane_t1_ParamLimits

0x14b2,	// (0x00030fcf) list_single_large_graphic_pane_t1

0xb278,	// (0x0003ad95) list_double_pane_g1_ParamLimits

0xb278,	// (0x0003ad95) list_double_pane_g1

0xb284,	// (0x0003ada1) list_double_pane_g2_ParamLimits

0xb284,	// (0x0003ada1) list_double_pane_g2

0x0001,

0xf630,	// (0x0003f14d) list_double_pane_g_ParamLimits

0xf630,	// (0x0003f14d) list_double_pane_g

0xb290,	// (0x0003adad) list_double_pane_t1_ParamLimits

0xb290,	// (0x0003adad) list_double_pane_t1

0xb2a6,	// (0x0003adc3) list_double_pane_t2_ParamLimits

0xb2a6,	// (0x0003adc3) list_double_pane_t2

0x0001,

0xf635,	// (0x0003f152) list_double_pane_t_ParamLimits

0xf635,	// (0x0003f152) list_double_pane_t

0xb2b8,	// (0x0003add5) list_double2_pane_g1_ParamLimits

0xb2b8,	// (0x0003add5) list_double2_pane_g1

0xb284,	// (0x0003ada1) list_double2_pane_g2_ParamLimits

0xb284,	// (0x0003ada1) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0003f157) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0003f157) list_double2_pane_g

0xb290,	// (0x0003adad) list_double2_pane_t1_ParamLimits

0xb290,	// (0x0003adad) list_double2_pane_t1

0xb2c9,	// (0x0003ade6) list_double2_pane_t2_ParamLimits

0xb2c9,	// (0x0003ade6) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0003f15c) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0003f15c) list_double2_pane_t

0xb278,	// (0x0003ad95) list_double_number_pane_g1_ParamLimits

0xb278,	// (0x0003ad95) list_double_number_pane_g1

0xb284,	// (0x0003ada1) list_double_number_pane_g2_ParamLimits

0xb284,	// (0x0003ada1) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0003f14d) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0003f14d) list_double_number_pane_g

0xb2db,	// (0x0003adf8) list_double_number_pane_t1_ParamLimits

0xb2db,	// (0x0003adf8) list_double_number_pane_t1

0xb2ed,	// (0x0003ae0a) list_double_number_pane_t2_ParamLimits

0xb2ed,	// (0x0003ae0a) list_double_number_pane_t2

0xb303,	// (0x0003ae20) list_double_number_pane_t3_ParamLimits

0xb303,	// (0x0003ae20) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0003f161) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0003f161) list_double_number_pane_t

0xb315,	// (0x0003ae32) list_double_graphic_pane_g1_ParamLimits

0xb315,	// (0x0003ae32) list_double_graphic_pane_g1

0xb321,	// (0x0003ae3e) list_double_graphic_pane_g2_ParamLimits

0xb321,	// (0x0003ae3e) list_double_graphic_pane_g2

0xb330,	// (0x0003ae4d) list_double_graphic_pane_g3_ParamLimits

0xb330,	// (0x0003ae4d) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0003f168) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0003f168) list_double_graphic_pane_g

0xb348,	// (0x0003ae65) list_double_graphic_pane_t1_ParamLimits

0xb348,	// (0x0003ae65) list_double_graphic_pane_t1

0xb35e,	// (0x0003ae7b) list_double_graphic_pane_t2_ParamLimits

0xb35e,	// (0x0003ae7b) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0003f171) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0003f171) list_double_graphic_pane_t

0xb315,	// (0x0003ae32) list_double2_graphic_pane_g1_ParamLimits

0xb315,	// (0x0003ae32) list_double2_graphic_pane_g1

0xb370,	// (0x0003ae8d) list_double2_graphic_pane_g2_ParamLimits

0xb370,	// (0x0003ae8d) list_double2_graphic_pane_g2

0xb37c,	// (0x0003ae99) list_double2_graphic_pane_g3_ParamLimits

0xb37c,	// (0x0003ae99) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0003f176) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0003f176) list_double2_graphic_pane_g

0xb2ed,	// (0x0003ae0a) list_double2_graphic_pane_t1_ParamLimits

0xb2ed,	// (0x0003ae0a) list_double2_graphic_pane_t1

0xb388,	// (0x0003aea5) list_double2_graphic_pane_t2_ParamLimits

0xb388,	// (0x0003aea5) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0003f17d) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0003f17d) list_double2_graphic_pane_t

0xb39a,	// (0x0003aeb7) list_double_large_graphic_pane_g1_ParamLimits

0xb39a,	// (0x0003aeb7) list_double_large_graphic_pane_g1

0xb2b8,	// (0x0003add5) list_double_large_graphic_pane_g2_ParamLimits

0xb2b8,	// (0x0003add5) list_double_large_graphic_pane_g2

0xb284,	// (0x0003ada1) list_double_large_graphic_pane_g3_ParamLimits

0xb284,	// (0x0003ada1) list_double_large_graphic_pane_g3

0xb3c5,	// (0x0003aee2) list_double_large_graphic_pane_g4_ParamLimits

0xb3c5,	// (0x0003aee2) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0003f182) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0003f182) list_double_large_graphic_pane_g

0xb3d7,	// (0x0003aef4) list_double_large_graphic_pane_t1_ParamLimits

0xb3d7,	// (0x0003aef4) list_double_large_graphic_pane_t1

0xb3f0,	// (0x0003af0d) list_double_large_graphic_pane_t2_ParamLimits

0xb3f0,	// (0x0003af0d) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0003f18d) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0003f18d) list_double_large_graphic_pane_t

0xb402,	// (0x0003af1f) list_double2_large_graphic_pane_g1_ParamLimits

0xb402,	// (0x0003af1f) list_double2_large_graphic_pane_g1

0xb2b8,	// (0x0003add5) list_double2_large_graphic_pane_g2_ParamLimits

0xb2b8,	// (0x0003add5) list_double2_large_graphic_pane_g2

0xb284,	// (0x0003ada1) list_double2_large_graphic_pane_g3_ParamLimits

0xb284,	// (0x0003ada1) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0003f192) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0003f192) list_double2_large_graphic_pane_g

0xb40e,	// (0x0003af2b) list_double2_large_graphic_pane_t1_ParamLimits

0xb40e,	// (0x0003af2b) list_double2_large_graphic_pane_t1

0xb424,	// (0x0003af41) list_double2_large_graphic_pane_t2_ParamLimits

0xb424,	// (0x0003af41) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0003f199) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0003f199) list_double2_large_graphic_pane_t

0xb436,	// (0x0003af53) list_double_heading_pane_g1_ParamLimits

0xb436,	// (0x0003af53) list_double_heading_pane_g1

0xb447,	// (0x0003af64) list_double_heading_pane_g2_ParamLimits

0xb447,	// (0x0003af64) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0003f19e) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0003f19e) list_double_heading_pane_g

0xb453,	// (0x0003af70) list_double_heading_pane_t1_ParamLimits

0xb453,	// (0x0003af70) list_double_heading_pane_t1

0xb469,	// (0x0003af86) list_double_heading_pane_t2_ParamLimits

0xb469,	// (0x0003af86) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0003f1a3) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0003f1a3) list_double_heading_pane_t

0xb47b,	// (0x0003af98) list_double_graphic_heading_pane_g1_ParamLimits

0xb47b,	// (0x0003af98) list_double_graphic_heading_pane_g1

0xb436,	// (0x0003af53) list_double_graphic_heading_pane_g2_ParamLimits

0xb436,	// (0x0003af53) list_double_graphic_heading_pane_g2

0xb447,	// (0x0003af64) list_double_graphic_heading_pane_g3_ParamLimits

0xb447,	// (0x0003af64) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0003f1a8) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0003f1a8) list_double_graphic_heading_pane_g

0xb487,	// (0x0003afa4) list_double_graphic_heading_pane_t1_ParamLimits

0xb487,	// (0x0003afa4) list_double_graphic_heading_pane_t1

0xb49d,	// (0x0003afba) list_double_graphic_heading_pane_t2_ParamLimits

0xb49d,	// (0x0003afba) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0003f1af) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0003f1af) list_double_graphic_heading_pane_t

0xb2b8,	// (0x0003add5) list_double_time_pane_g1_ParamLimits

0xb2b8,	// (0x0003add5) list_double_time_pane_g1

0xb284,	// (0x0003ada1) list_double_time_pane_g2_ParamLimits

0xb284,	// (0x0003ada1) list_double_time_pane_g2

0x0001,

0xf63a,	// (0x0003f157) list_double_time_pane_g_ParamLimits

0xf63a,	// (0x0003f157) list_double_time_pane_g

0xb40e,	// (0x0003af2b) list_double_time_pane_t1_ParamLimits

0xb40e,	// (0x0003af2b) list_double_time_pane_t1

0xb4af,	// (0x0003afcc) list_double_time_pane_t2_ParamLimits

0xb4af,	// (0x0003afcc) list_double_time_pane_t2

0xb4c1,	// (0x0003afde) list_double_time_pane_t3_ParamLimits

0xb4c1,	// (0x0003afde) list_double_time_pane_t3

0xb4d3,	// (0x0003aff0) list_double_time_pane_t4_ParamLimits

0xb4d3,	// (0x0003aff0) list_double_time_pane_t4

0x0003,

0xf697,	// (0x0003f1b4) list_double_time_pane_t_ParamLimits

0xf697,	// (0x0003f1b4) list_double_time_pane_t

0xb4e5,	// (0x0003b002) list_setting_pane_g1_ParamLimits

0xb4e5,	// (0x0003b002) list_setting_pane_g1

0xb4f1,	// (0x0003b00e) list_setting_pane_g2_ParamLimits

0xb4f1,	// (0x0003b00e) list_setting_pane_g2

0x0001,

0xf6a0,	// (0x0003f1bd) list_setting_pane_g_ParamLimits

0xf6a0,	// (0x0003f1bd) list_setting_pane_g

0xb4fd,	// (0x0003b01a) list_setting_pane_t1_ParamLimits

0xb4fd,	// (0x0003b01a) list_setting_pane_t1

0xb517,	// (0x0003b034) list_setting_pane_t2_ParamLimits

0xb517,	// (0x0003b034) list_setting_pane_t2

0x0002,

0xf6a5,	// (0x0003f1c2) list_setting_pane_t_ParamLimits

0xf6a5,	// (0x0003f1c2) list_setting_pane_t

0xb556,	// (0x0003b073) set_value_pane_cp_ParamLimits

0xb556,	// (0x0003b073) set_value_pane_cp

0xb564,	// (0x0003b081) list_setting_number_pane_g1_ParamLimits

0xb564,	// (0x0003b081) list_setting_number_pane_g1

0xb570,	// (0x0003b08d) list_setting_number_pane_g2_ParamLimits

0xb570,	// (0x0003b08d) list_setting_number_pane_g2

0x0001,

0xf6ac,	// (0x0003f1c9) list_setting_number_pane_g_ParamLimits

0xf6ac,	// (0x0003f1c9) list_setting_number_pane_g

0xb57c,	// (0x0003b099) list_setting_number_pane_t1_ParamLimits

0xb57c,	// (0x0003b099) list_setting_number_pane_t1

0xb595,	// (0x0003b0b2) list_setting_number_pane_t2_ParamLimits

0xb595,	// (0x0003b0b2) list_setting_number_pane_t2

0xb5af,	// (0x0003b0cc) list_setting_number_pane_t3_ParamLimits

0xb5af,	// (0x0003b0cc) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x0003f1ce) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x0003f1ce) list_setting_number_pane_t

0xb556,	// (0x0003b073) set_value_pane_ParamLimits

0xb556,	// (0x0003b073) set_value_pane

0x30a1,	// (0x00032bbe) bg_set_opt_pane_ParamLimits

0x30a1,	// (0x00032bbe) bg_set_opt_pane

0x0573,	// (0x00030090) set_value_pane_t1

0x30c2,	// (0x00032bdf) slider_set_pane_cp3

0x30cb,	// (0x00032be8) volume_small_pane_cp

0x30d4,	// (0x00032bf1) list_form_gen_pane

0x30dd,	// (0x00032bfa) scroll_pane_cp8

0xb5f2,	// (0x0003b10f) form_field_data_pane_ParamLimits

0xb5f2,	// (0x0003b10f) form_field_data_pane

0xb60d,	// (0x0003b12a) form_field_data_wide_pane_ParamLimits

0xb60d,	// (0x0003b12a) form_field_data_wide_pane

0x05ce,	// (0x000300eb) form_field_popup_pane_ParamLimits

0x05ce,	// (0x000300eb) form_field_popup_pane

0xb631,	// (0x0003b14e) form_field_popup_wide_pane_ParamLimits

0xb631,	// (0x0003b14e) form_field_popup_wide_pane

0x0611,	// (0x0003012e) form_field_slider_pane_ParamLimits

0x0611,	// (0x0003012e) form_field_slider_pane

0x0624,	// (0x00030141) form_field_slider_wide_pane_ParamLimits

0x0624,	// (0x00030141) form_field_slider_wide_pane

0x30ee,	// (0x00032c0b) data_form_pane

0xb65c,	// (0x0003b179) form_field_data_pane_t1

0x30fa,	// (0x00032c17) input_focus_pane

0x3108,	// (0x00032c25) data_form_wide_pane

0x0667,	// (0x00030184) form_field_data_wide_pane_t1

0x2e6b,	// (0x00032988) input_focus_pane_cp6

0xb676,	// (0x0003b193) form_field_popup_pane_t1

0x30fa,	// (0x00032c17) input_focus_pane_cp7

0x3134,	// (0x00032c51) list_form_pane

0x06ab,	// (0x000301c8) form_field_popup_wide_pane_t1

0x30fa,	// (0x00032c17) input_focus_pane_cp8

0x3140,	// (0x00032c5d) list_form_wide_pane

0xb698,	// (0x0003b1b5) form_field_slider_pane_t1_ParamLimits

0xb698,	// (0x0003b1b5) form_field_slider_pane_t1

0xb6b0,	// (0x0003b1cd) form_field_slider_pane_t2_ParamLimits

0xb6b0,	// (0x0003b1cd) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x0003f1de) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x0003f1de) form_field_slider_pane_t

0x2566,	// (0x00032083) input_focus_pane_cp9_ParamLimits

0x2566,	// (0x00032083) input_focus_pane_cp9

0xb6c5,	// (0x0003b1e2) slider_cont_pane_ParamLimits

0xb6c5,	// (0x0003b1e2) slider_cont_pane

0x314f,	// (0x00032c6c) form_field_slider_wide_pane_t1_ParamLimits

0x314f,	// (0x00032c6c) form_field_slider_wide_pane_t1

0x0709,	// (0x00030226) form_field_slider_wide_pane_t2_ParamLimits

0x0709,	// (0x00030226) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x0003f1e3) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x0003f1e3) form_field_slider_wide_pane_t

0x2566,	// (0x00032083) input_focus_pane_cp10_ParamLimits

0x2566,	// (0x00032083) input_focus_pane_cp10

0xb6d9,	// (0x0003b1f6) slider_cont_pane_cp1_ParamLimits

0xb6d9,	// (0x0003b1f6) slider_cont_pane_cp1

0xb6ed,	// (0x0003b20a) slider_form_pane_cp

0x3161,	// (0x00032c7e) input_focus_pane_g1

0x3169,	// (0x00032c86) input_focus_pane_g2

0x3171,	// (0x00032c8e) input_focus_pane_g3

0x3179,	// (0x00032c96) input_focus_pane_g4

0x3181,	// (0x00032c9e) input_focus_pane_g5

0x3189,	// (0x00032ca6) input_focus_pane_g6

0x3191,	// (0x00032cae) input_focus_pane_g7

0x3199,	// (0x00032cb6) input_focus_pane_g8

0x31a1,	// (0x00032cbe) input_focus_pane_g9

0x2200,	// (0x00031d1d) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x0003f1e8) input_focus_pane_g

0x5231,	// (0x00034d4e) wait_border_pane_g3_copy1

0xb6f5,	// (0x0003b212) data_form_pane_t1

0x2200,	// (0x00031d1d) wait_anim_pane_g1_copy1

0xbb46,	// (0x0003b663) data_form_wide_pane_t1

0x0769,	// (0x00030286) list_form_graphic_pane_cp_ParamLimits

0x0769,	// (0x00030286) list_form_graphic_pane_cp

0x61b6,	// (0x00035cd3) slider_form_pane_g1

0x61bf,	// (0x00035cdc) slider_form_pane_g2

0x0006,

0xf9be,	// (0x0003f4db) slider_form_pane_g

0x0769,	// (0x00030286) list_form_graphic_pane_ParamLimits

0x0769,	// (0x00030286) list_form_graphic_pane

0x077b,	// (0x00030298) list_form_graphic_pane_g1

0x0783,	// (0x000302a0) list_form_graphic_pane_t1_ParamLimits

0x0783,	// (0x000302a0) list_form_graphic_pane_t1

0x22ea,	// (0x00031e07) list_highlight_pane_cp5_ParamLimits

0x22ea,	// (0x00031e07) list_highlight_pane_cp5

0xb70f,	// (0x0003b22c) find_pane_g1

0x31a9,	// (0x00032cc6) input_find_pane

0xb718,	// (0x0003b235) input_find_pane_g1_ParamLimits

0xb718,	// (0x0003b235) input_find_pane_g1

0xb724,	// (0x0003b241) input_find_pane_t1_ParamLimits

0xb724,	// (0x0003b241) input_find_pane_t1

0xb739,	// (0x0003b256) input_find_pane_t2_ParamLimits

0xb739,	// (0x0003b256) input_find_pane_t2

0x0001,

0xf6e0,	// (0x0003f1fd) input_find_pane_t_ParamLimits

0xf6e0,	// (0x0003f1fd) input_find_pane_t

0x31b2,	// (0x00032ccf) input_focus_pane_cp5_ParamLimits

0x31b2,	// (0x00032ccf) input_focus_pane_cp5

0xc4dc,	// (0x0003bff9) bg_popup_window_pane_cp2_ParamLimits

0xc4dc,	// (0x0003bff9) bg_popup_window_pane_cp2

0xc4e9,	// (0x0003c006) listscroll_menu_pane_ParamLimits

0xc4e9,	// (0x0003c006) listscroll_menu_pane

0xc4f5,	// (0x0003c012) popup_submenu_window_ParamLimits

0xc4f5,	// (0x0003c012) popup_submenu_window

0x3215,	// (0x00032d32) find_popup_pane_g1

0x321d,	// (0x00032d3a) input_popup_find_pane_cp

0x31b2,	// (0x00032ccf) input_focus_pane_cp4_ParamLimits

0x31b2,	// (0x00032ccf) input_focus_pane_cp4

0x3235,	// (0x00032d52) input_popup_find_pane_t1_ParamLimits

0x3235,	// (0x00032d52) input_popup_find_pane_t1

0x220a,	// (0x00031d27) bg_popup_sub_pane_cp

0x3263,	// (0x00032d80) listscroll_popup_sub_pane

0x326b,	// (0x00032d88) list_submenu_pane_ParamLimits

0x326b,	// (0x00032d88) list_submenu_pane

0x327c,	// (0x00032d99) scroll_pane_cp4

0x3284,	// (0x00032da1) list_single_popup_submenu_pane_ParamLimits

0x3284,	// (0x00032da1) list_single_popup_submenu_pane

0x3299,	// (0x00032db6) list_single_popup_submenu_pane_g1

0x32a1,	// (0x00032dbe) list_single_popup_submenu_pane_t1_ParamLimits

0x32a1,	// (0x00032dbe) list_single_popup_submenu_pane_t1

0x2566,	// (0x00032083) bg_active_tab_pane_cp1_ParamLimits

0x2566,	// (0x00032083) bg_active_tab_pane_cp1

0xc533,	// (0x0003c050) tabs_2_active_pane_g1

0xc53b,	// (0x0003c058) tabs_2_active_pane_t1

0x2566,	// (0x00032083) bg_passive_tab_pane_cp1_ParamLimits

0x2566,	// (0x00032083) bg_passive_tab_pane_cp1

0xc533,	// (0x0003c050) tabs_2_passive_pane_g1

0xc53b,	// (0x0003c058) tabs_2_passive_pane_t1

0x22ea,	// (0x00031e07) bg_active_tab_pane_cp4

0xc54d,	// (0x0003c06a) tabs_2_long_active_pane_t1

0x40de,	// (0x00033bfb) bg_passive_tab_pane_cp4

0x0ef3,	// (0x00030a10) list_single_midp_graphic_pane_g4_ParamLimits

0x22ea,	// (0x00031e07) bg_active_tab_pane_cp5

0xc560,	// (0x0003c07d) tabs_3_long_active_pane_t1

0x40de,	// (0x00033bfb) bg_passive_tab_pane_cp5

0x0ef3,	// (0x00030a10) list_single_midp_graphic_pane_g4

0x22ea,	// (0x00031e07) bg_popup_window_pane_cp13_ParamLimits

0x22ea,	// (0x00031e07) bg_popup_window_pane_cp13

0x3318,	// (0x00032e35) listscroll_popup_fast_pane_ParamLimits

0x3318,	// (0x00032e35) listscroll_popup_fast_pane

0x3327,	// (0x00032e44) grid_popup_fast_pane_ParamLimits

0x3327,	// (0x00032e44) grid_popup_fast_pane

0x3339,	// (0x00032e56) scroll_pane_cp9_ParamLimits

0x3339,	// (0x00032e56) scroll_pane_cp9

0x7adb,	// (0x000375f8) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7adb,	// (0x000375f8) list_single_graphic_hl_pane_t1_cp2

0x335d,	// (0x00032e7a) input_focus_pane_cp20_ParamLimits

0x335d,	// (0x00032e7a) input_focus_pane_cp20

0x336b,	// (0x00032e88) query_popup_data_pane_t1_ParamLimits

0x336b,	// (0x00032e88) query_popup_data_pane_t1

0x337e,	// (0x00032e9b) query_popup_data_pane_t2_ParamLimits

0x337e,	// (0x00032e9b) query_popup_data_pane_t2

0x33c4,	// (0x00032ee1) query_popup_data_pane_t3_ParamLimits

0x33c4,	// (0x00032ee1) query_popup_data_pane_t3

0x3405,	// (0x00032f22) query_popup_data_pane_t4_ParamLimits

0x3405,	// (0x00032f22) query_popup_data_pane_t4

0x3441,	// (0x00032f5e) query_popup_data_pane_t5_ParamLimits

0x3441,	// (0x00032f5e) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x0003f202) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x0003f202) query_popup_data_pane_t

0x3161,	// (0x00032c7e) bg_set_opt_pane_g1

0x3169,	// (0x00032c86) bg_set_opt_pane_g2

0x3171,	// (0x00032c8e) bg_set_opt_pane_g3

0x3179,	// (0x00032c96) bg_set_opt_pane_g4

0x3181,	// (0x00032c9e) bg_set_opt_pane_g5

0x3189,	// (0x00032ca6) bg_set_opt_pane_g6

0x3191,	// (0x00032cae) bg_set_opt_pane_g7

0x3199,	// (0x00032cb6) bg_set_opt_pane_g8

0x31a1,	// (0x00032cbe) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x0003f20d) bg_set_opt_pane_g

0x0b06,	// (0x00030623) control_top_pane_stacon_ParamLimits

0x0b06,	// (0x00030623) control_top_pane_stacon

0x0b59,	// (0x00030676) signal_pane_stacon_ParamLimits

0x0b59,	// (0x00030676) signal_pane_stacon

0x39ed,	// (0x0003350a) stacon_top_pane_g1_ParamLimits

0x39ed,	// (0x0003350a) stacon_top_pane_g1

0x0b7e,	// (0x0003069b) title_pane_stacon_ParamLimits

0x0b7e,	// (0x0003069b) title_pane_stacon

0x0ba8,	// (0x000306c5) uni_indicator_pane_stacon_ParamLimits

0x0ba8,	// (0x000306c5) uni_indicator_pane_stacon

0x0bc0,	// (0x000306dd) battery_pane_stacon_ParamLimits

0x0bc0,	// (0x000306dd) battery_pane_stacon

0x0c04,	// (0x00030721) control_bottom_pane_stacon_ParamLimits

0x0c04,	// (0x00030721) control_bottom_pane_stacon

0x0c27,	// (0x00030744) navi_pane_stacon_ParamLimits

0x0c27,	// (0x00030744) navi_pane_stacon

0x3a0f,	// (0x0003352c) stacon_bottom_pane_g1_ParamLimits

0x3a0f,	// (0x0003352c) stacon_bottom_pane_g1

0x07d7,	// (0x000302f4) aid_levels_signal_lsc_ParamLimits

0x07d7,	// (0x000302f4) aid_levels_signal_lsc

0x07ee,	// (0x0003030b) signal_pane_stacon_g1_ParamLimits

0x07ee,	// (0x0003030b) signal_pane_stacon_g1

0x0802,	// (0x0003031f) signal_pane_stacon_g2_ParamLimits

0x0802,	// (0x0003031f) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x0003f220) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x0003f220) signal_pane_stacon_g

0x0837,	// (0x00030354) title_pane_stacon_t1_ParamLimits

0x0837,	// (0x00030354) title_pane_stacon_t1

0x3485,	// (0x00032fa2) uni_indicator_pane_stacon_g1

0x348f,	// (0x00032fac) uni_indicator_pane_stacon_g2

0x3499,	// (0x00032fb6) uni_indicator_pane_stacon_g3

0x34a3,	// (0x00032fc0) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x0003f22c) uni_indicator_pane_stacon_g

0x085c,	// (0x00030379) control_top_pane_stacon_g1

0x0864,	// (0x00030381) control_top_pane_stacon_t1_ParamLimits

0x0864,	// (0x00030381) control_top_pane_stacon_t1

0x089b,	// (0x000303b8) aid_levels_battery_lsc_ParamLimits

0x089b,	// (0x000303b8) aid_levels_battery_lsc

0x08b3,	// (0x000303d0) battery_pane_stacon_g1_ParamLimits

0x08b3,	// (0x000303d0) battery_pane_stacon_g1

0x08c6,	// (0x000303e3) battery_pane_stacon_g2_ParamLimits

0x08c6,	// (0x000303e3) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x0003f235) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x0003f235) battery_pane_stacon_g

0x0904,	// (0x00030421) navi_icon_pane_stacon

0x0918,	// (0x00030435) navi_navi_pane_stacon

0x0904,	// (0x00030421) navi_text_pane_stacon

0x085c,	// (0x00030379) control_bottom_pane_stacon_g1

0x092e,	// (0x0003044b) control_bottom_pane_stacon_t1_ParamLimits

0x092e,	// (0x0003044b) control_bottom_pane_stacon_t1

0xc572,	// (0x0003c08f) grid_app_pane_ParamLimits

0xc572,	// (0x0003c08f) grid_app_pane

0xc5aa,	// (0x0003c0c7) scroll_pane_cp15_ParamLimits

0xc5aa,	// (0x0003c0c7) scroll_pane_cp15

0xc5c7,	// (0x0003c0e4) cell_app_pane_ParamLimits

0xc5c7,	// (0x0003c0e4) cell_app_pane

0xc608,	// (0x0003c125) cell_app_pane_g1_ParamLimits

0xc608,	// (0x0003c125) cell_app_pane_g1

0x3550,	// (0x0003306d) cell_app_pane_g2_ParamLimits

0x3550,	// (0x0003306d) cell_app_pane_g2

0x0001,

0xf71d,	// (0x0003f23a) cell_app_pane_g_ParamLimits

0xf71d,	// (0x0003f23a) cell_app_pane_g

0x355c,	// (0x00033079) cell_app_pane_t1_ParamLimits

0x355c,	// (0x00033079) cell_app_pane_t1

0x356e,	// (0x0003308b) grid_highlight_pane_ParamLimits

0x356e,	// (0x0003308b) grid_highlight_pane

0x3161,	// (0x00032c7e) cell_highlight_pane_g1

0x3169,	// (0x00032c86) cell_highlight_pane_g2

0x3171,	// (0x00032c8e) cell_highlight_pane_g3

0x3179,	// (0x00032c96) cell_highlight_pane_g4

0x3181,	// (0x00032c9e) cell_highlight_pane_g5

0x3189,	// (0x00032ca6) cell_highlight_pane_g6

0x3191,	// (0x00032cae) cell_highlight_pane_g7

0x3199,	// (0x00032cb6) cell_highlight_pane_g8

0x31a1,	// (0x00032cbe) cell_highlight_pane_g9

0x2200,	// (0x00031d1d) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x0003f1e8) cell_highlight_pane_g

0x357f,	// (0x0003309c) bg_scroll_pane

0x0978,	// (0x00030495) scroll_handle_pane

0x35c6,	// (0x000330e3) scroll_bg_pane_g1

0x35db,	// (0x000330f8) scroll_bg_pane_g2

0x35f3,	// (0x00033110) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x0003f23f) scroll_bg_pane_g

0x3608,	// (0x00033125) scroll_handle_focus_pane_ParamLimits

0x3608,	// (0x00033125) scroll_handle_focus_pane

0x35c6,	// (0x000330e3) scroll_handle_pane_g1

0x3615,	// (0x00033132) scroll_handle_pane_g2

0x35f3,	// (0x00033110) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x0003f246) scroll_handle_pane_g

0x31b2,	// (0x00032ccf) bg_popup_sub_pane_cp21_ParamLimits

0x31b2,	// (0x00032ccf) bg_popup_sub_pane_cp21

0x3629,	// (0x00033146) popup_fep_japan_predictive_window_t1_ParamLimits

0x3629,	// (0x00033146) popup_fep_japan_predictive_window_t1

0x3640,	// (0x0003315d) popup_fep_japan_predictive_window_t2_ParamLimits

0x3640,	// (0x0003315d) popup_fep_japan_predictive_window_t2

0x3673,	// (0x00033190) popup_fep_japan_predictive_window_t3_ParamLimits

0x3673,	// (0x00033190) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x0003f24d) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x0003f24d) popup_fep_japan_predictive_window_t

0x220a,	// (0x00031d27) bg_popup_sub_pane_cp23

0x36aa,	// (0x000331c7) listscroll_japin_cand_pane

0x36b2,	// (0x000331cf) popup_fep_japan_candidate_window_t1

0x36c0,	// (0x000331dd) candidate_pane_ParamLimits

0x36c0,	// (0x000331dd) candidate_pane

0x36d2,	// (0x000331ef) scroll_pane_cp30

0x36dc,	// (0x000331f9) list_single_popup_jap_candidate_pane_ParamLimits

0x36dc,	// (0x000331f9) list_single_popup_jap_candidate_pane

0x220a,	// (0x00031d27) list_highlight_pane_cp30

0x36f0,	// (0x0003320d) list_single_popup_jap_candidate_pane_t1

0xc62c,	// (0x0003c149) level_1_signal

0xc63e,	// (0x0003c15b) level_2_signal

0xc651,	// (0x0003c16e) level_3_signal

0xc664,	// (0x0003c181) level_4_signal

0xc677,	// (0x0003c194) level_5_signal

0xc68a,	// (0x0003c1a7) level_6_signal

0xc69d,	// (0x0003c1ba) level_7_signal

0xc62c,	// (0x0003c149) level_1_battery

0xc63e,	// (0x0003c15b) level_2_battery

0xc651,	// (0x0003c16e) level_3_battery

0xc664,	// (0x0003c181) level_4_battery

0xc677,	// (0x0003c194) level_5_battery

0xc68a,	// (0x0003c1a7) level_6_battery

0xc69d,	// (0x0003c1ba) level_7_battery

0x3772,	// (0x0003328f) list_menu_pane_ParamLimits

0x3772,	// (0x0003328f) list_menu_pane

0x3783,	// (0x000332a0) scroll_pane_cp25_ParamLimits

0x3783,	// (0x000332a0) scroll_pane_cp25

0x379c,	// (0x000332b9) list_double2_graphic_pane_cp2_ParamLimits

0x379c,	// (0x000332b9) list_double2_graphic_pane_cp2

0x379c,	// (0x000332b9) list_double2_large_graphic_pane_cp2_ParamLimits

0x379c,	// (0x000332b9) list_double2_large_graphic_pane_cp2

0x379c,	// (0x000332b9) list_double2_pane_cp2_ParamLimits

0x379c,	// (0x000332b9) list_double2_pane_cp2

0x379c,	// (0x000332b9) list_double_graphic_pane_cp2_ParamLimits

0x379c,	// (0x000332b9) list_double_graphic_pane_cp2

0x379c,	// (0x000332b9) list_double_large_graphic_pane_cp2_ParamLimits

0x379c,	// (0x000332b9) list_double_large_graphic_pane_cp2

0x379c,	// (0x000332b9) list_double_number_pane_cp2_ParamLimits

0x379c,	// (0x000332b9) list_double_number_pane_cp2

0x379c,	// (0x000332b9) list_double_pane_cp2_ParamLimits

0x379c,	// (0x000332b9) list_double_pane_cp2

0xc6b0,	// (0x0003c1cd) list_single_2graphic_pane_cp2_ParamLimits

0xc6b0,	// (0x0003c1cd) list_single_2graphic_pane_cp2

0xc6b0,	// (0x0003c1cd) list_single_graphic_heading_pane_cp2_ParamLimits

0xc6b0,	// (0x0003c1cd) list_single_graphic_heading_pane_cp2

0xc6b0,	// (0x0003c1cd) list_single_graphic_pane_cp2_ParamLimits

0xc6b0,	// (0x0003c1cd) list_single_graphic_pane_cp2

0xc6b0,	// (0x0003c1cd) list_single_heading_pane_cp2_ParamLimits

0xc6b0,	// (0x0003c1cd) list_single_heading_pane_cp2

0x37df,	// (0x000332fc) list_single_large_graphic_pane_cp2_ParamLimits

0x37df,	// (0x000332fc) list_single_large_graphic_pane_cp2

0xc6b0,	// (0x0003c1cd) list_single_number_heading_pane_cp2_ParamLimits

0xc6b0,	// (0x0003c1cd) list_single_number_heading_pane_cp2

0xc6b0,	// (0x0003c1cd) list_single_number_pane_cp2_ParamLimits

0xc6b0,	// (0x0003c1cd) list_single_number_pane_cp2

0xc6b0,	// (0x0003c1cd) list_single_pane_cp2_ParamLimits

0xc6b0,	// (0x0003c1cd) list_single_pane_cp2

0x3834,	// (0x00033351) bg_popup_sub_pane_cp22

0x0a2a,	// (0x00030547) popup_side_volume_key_window_g1

0x0a54,	// (0x00030571) popup_side_volume_key_window_t1

0x0a72,	// (0x0003058f) volume_small_pane_cp1

0x2566,	// (0x00032083) bg_popup_sub_pane_cp24_ParamLimits

0x2566,	// (0x00032083) bg_popup_sub_pane_cp24

0x384a,	// (0x00033367) fep_china_uni_candidate_pane_ParamLimits

0x384a,	// (0x00033367) fep_china_uni_candidate_pane

0x385e,	// (0x0003337b) fep_china_uni_entry_pane

0x386e,	// (0x0003338b) popup_fep_china_uni_window_g1

0x388a,	// (0x000333a7) fep_china_uni_entry_pane_g1

0x3894,	// (0x000333b1) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x0003f27a) fep_china_uni_entry_pane_g

0x389e,	// (0x000333bb) fep_entry_item_pane

0x38a8,	// (0x000333c5) fep_candidate_item_pane

0x38b0,	// (0x000333cd) fep_china_uni_candidate_pane_g1

0x38ba,	// (0x000333d7) fep_china_uni_candidate_pane_g2

0x38c2,	// (0x000333df) fep_china_uni_candidate_pane_g3

0x38ca,	// (0x000333e7) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x0003f27f) fep_china_uni_candidate_pane_g

0x2200,	// (0x00031d1d) fep_entry_item_pane_g1

0x38d4,	// (0x000333f1) fep_entry_item_pane_t1_ParamLimits

0x38d4,	// (0x000333f1) fep_entry_item_pane_t1

0x38ea,	// (0x00033407) fep_candidate_item_pane_t1_ParamLimits

0x38ea,	// (0x00033407) fep_candidate_item_pane_t1

0x38ff,	// (0x0003341c) fep_candidate_item_pane_t2_ParamLimits

0x38ff,	// (0x0003341c) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x0003f288) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x0003f288) fep_candidate_item_pane_t

0x22ea,	// (0x00031e07) list_highlight_pane_cp31_ParamLimits

0x22ea,	// (0x00031e07) list_highlight_pane_cp31

0x3911,	// (0x0003342e) level_1_signal_lsc

0x391a,	// (0x00033437) level_2_signal_lsc

0x3923,	// (0x00033440) level_3_signal_lsc

0x392c,	// (0x00033449) level_4_signal_lsc

0x3935,	// (0x00033452) level_5_signal_lsc

0x393e,	// (0x0003345b) level_6_signal_lsc

0x3947,	// (0x00033464) level_7_signal_lsc

0x3947,	// (0x00033464) level_1_battery_lsc

0x3950,	// (0x0003346d) level_2_battery_lsc

0x3959,	// (0x00033476) level_3_battery_lsc

0x3962,	// (0x0003347f) level_4_battery_lsc

0x396b,	// (0x00033488) level_5_battery_lsc

0x3974,	// (0x00033491) level_6_battery_lsc

0x3911,	// (0x0003342e) level_7_battery_lsc

0x397d,	// (0x0003349a) scroll_handle_focus_pane_g1

0x3986,	// (0x000334a3) scroll_handle_focus_pane_g2

0x398f,	// (0x000334ac) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x0003f28d) scroll_handle_focus_pane_g

0xb757,	// (0x0003b274) list_single_2graphic_pane_g1_ParamLimits

0xb757,	// (0x0003b274) list_single_2graphic_pane_g1

0xb24d,	// (0x0003ad6a) list_single_2graphic_pane_g2_ParamLimits

0xb24d,	// (0x0003ad6a) list_single_2graphic_pane_g2

0x0f26,	// (0x00030a43) list_single_2graphic_pane_g3_ParamLimits

0x0f26,	// (0x00030a43) list_single_2graphic_pane_g3

0xb763,	// (0x0003b280) list_single_2graphic_pane_g4_ParamLimits

0xb763,	// (0x0003b280) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x0003f294) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x0003f294) list_single_2graphic_pane_g

0xb76f,	// (0x0003b28c) list_single_2graphic_pane_t1_ParamLimits

0xb76f,	// (0x0003b28c) list_single_2graphic_pane_t1

0xb79d,	// (0x0003b2ba) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb79d,	// (0x0003b2ba) list_double2_graphic_large_graphic_pane_g1

0xb2b8,	// (0x0003add5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb2b8,	// (0x0003add5) list_double2_graphic_large_graphic_pane_g2

0xb284,	// (0x0003ada1) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb284,	// (0x0003ada1) list_double2_graphic_large_graphic_pane_g3

0xb7af,	// (0x0003b2cc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb7af,	// (0x0003b2cc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x0003f29d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x0003f29d) list_double2_graphic_large_graphic_pane_g

0xb7bb,	// (0x0003b2d8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb7bb,	// (0x0003b2d8) list_double2_graphic_large_graphic_pane_t1

0xb7d1,	// (0x0003b2ee) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb7d1,	// (0x0003b2ee) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x0003f2a6) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x0003f2a6) list_double2_graphic_large_graphic_pane_t

0x3ad1,	// (0x000335ee) popup_fast_swap_window_ParamLimits

0x3ad1,	// (0x000335ee) popup_fast_swap_window

0x3aef,	// (0x0003360c) popup_side_volume_key_window

0x3b0d,	// (0x0003362a) stacon_top_pane

0x3b17,	// (0x00033634) status_pane_ParamLimits

0x3b17,	// (0x00033634) status_pane

0x3b0d,	// (0x0003362a) status_small_pane

0x220a,	// (0x00031d27) control_pane

0x220a,	// (0x00031d27) stacon_bottom_pane

0x30dd,	// (0x00032bfa) scroll_pane_cp121

0x30d4,	// (0x00032bf1) set_content_pane

0xc713,	// (0x0003c230) bg_active_tab_pane_g1_cp1

0x39a1,	// (0x000334be) bg_active_tab_pane_g2_cp1

0xc71c,	// (0x0003c239) bg_active_tab_pane_g3_cp1

0xc713,	// (0x0003c230) bg_passive_tab_pane_g1_cp1

0x39a1,	// (0x000334be) bg_passive_tab_pane_g2_cp1

0xc71c,	// (0x0003c239) bg_passive_tab_pane_g3_cp1

0xc725,	// (0x0003c242) bg_active_tab_pane_g1_cp2

0x39a1,	// (0x000334be) bg_active_tab_pane_g2_cp2

0xc72e,	// (0x0003c24b) bg_active_tab_pane_g3_cp2

0xc725,	// (0x0003c242) bg_passive_tab_pane_g1_cp2

0x39a1,	// (0x000334be) bg_passive_tab_pane_g2_cp2

0xc72e,	// (0x0003c24b) bg_passive_tab_pane_g3_cp2

0xc737,	// (0x0003c254) bg_active_tab_pane_g1_cp3

0x39a1,	// (0x000334be) bg_active_tab_pane_g2_cp3

0xc740,	// (0x0003c25d) bg_active_tab_pane_g3_cp3

0xc737,	// (0x0003c254) bg_passive_tab_pane_g1_cp3

0x39a1,	// (0x000334be) bg_passive_tab_pane_g2_cp3

0xc740,	// (0x0003c25d) bg_passive_tab_pane_g3_cp3

0xc749,	// (0x0003c266) bg_active_tab_pane_g1_cp4

0x39a1,	// (0x000334be) bg_active_tab_pane_g2_cp4

0xc752,	// (0x0003c26f) bg_active_tab_pane_g3_cp4

0xc749,	// (0x0003c266) bg_passive_tab_pane_g1_cp4

0x39a1,	// (0x000334be) bg_passive_tab_pane_g2_cp4

0xc752,	// (0x0003c26f) bg_passive_tab_pane_g3_cp4

0x3a2b,	// (0x00033548) bg_active_tab_pane_g1_cp5

0x39a1,	// (0x000334be) bg_active_tab_pane_g2_cp5

0x3a34,	// (0x00033551) bg_active_tab_pane_g3_cp5

0x3a2b,	// (0x00033548) bg_passive_tab_pane_g1_cp5

0x39a1,	// (0x000334be) bg_passive_tab_pane_g2_cp5

0x3a34,	// (0x00033551) bg_passive_tab_pane_g3_cp5

0x3284,	// (0x00032da1) list_set_graphic_pane_ParamLimits

0x3284,	// (0x00032da1) list_set_graphic_pane

0x220a,	// (0x00031d27) bg_set_opt_pane_cp4

0xc75b,	// (0x0003c278) list_set_graphic_pane_g1_ParamLimits

0xc75b,	// (0x0003c278) list_set_graphic_pane_g1

0xc767,	// (0x0003c284) list_set_graphic_pane_g2_ParamLimits

0xc767,	// (0x0003c284) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x0003f2ab) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x0003f2ab) list_set_graphic_pane_g

0x0009,

0xfaf4,	// (0x0003f611) volume_small_pane_cp_g

0x3a82,	// (0x0003359f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3a82,	// (0x0003359f) list_double2_large_graphic_pane_g1_cp2

0x3a90,	// (0x000335ad) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3a90,	// (0x000335ad) list_double2_large_graphic_pane_g2_cp2

0x3aa1,	// (0x000335be) list_double2_large_graphic_pane_g3_cp2

0x3aa9,	// (0x000335c6) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3aa9,	// (0x000335c6) list_double2_large_graphic_pane_t1_cp2

0x3abf,	// (0x000335dc) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3abf,	// (0x000335dc) list_double2_large_graphic_pane_t2_cp2

0x5d1b,	// (0x00035838) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5d1b,	// (0x00035838) list_double_large_graphic_pane_g1_cp2

0x5d2e,	// (0x0003584b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5d2e,	// (0x0003584b) list_double_large_graphic_pane_g2_cp2

0x3c35,	// (0x00033752) list_double_large_graphic_pane_g3_cp2

0x5d3f,	// (0x0003585c) list_double_large_graphic_pane_g4_cp

0x5d47,	// (0x00035864) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5d47,	// (0x00035864) list_double_large_graphic_pane_t1_cp2

0x5d5e,	// (0x0003587b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5d5e,	// (0x0003587b) list_double_large_graphic_pane_t2_cp2

0x3b25,	// (0x00033642) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3b25,	// (0x00033642) list_double2_graphic_pane_g1_cp2

0x3b33,	// (0x00033650) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3b33,	// (0x00033650) list_double2_graphic_pane_g2_cp2

0x3b44,	// (0x00033661) list_double2_graphic_pane_g3_cp2

0x3b4e,	// (0x0003366b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3b4e,	// (0x0003366b) list_double2_graphic_pane_t1_cp2

0x3b64,	// (0x00033681) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3b64,	// (0x00033681) list_double2_graphic_pane_t2_cp2

0x3b76,	// (0x00033693) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3b76,	// (0x00033693) list_single_number_heading_pane_g1_cp2

0x3b82,	// (0x0003369f) list_single_number_heading_pane_g2_cp2

0x3b8a,	// (0x000336a7) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3b8a,	// (0x000336a7) list_single_number_heading_pane_t1_cp2

0x3ba0,	// (0x000336bd) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3ba0,	// (0x000336bd) list_single_number_heading_pane_t2_cp2

0x3bb4,	// (0x000336d1) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3bb4,	// (0x000336d1) list_single_number_heading_pane_t3_cp2

0x3b76,	// (0x00033693) list_single_heading_pane_g1_cp2_ParamLimits

0x3b76,	// (0x00033693) list_single_heading_pane_g1_cp2

0x3b82,	// (0x0003369f) list_single_heading_pane_g2_cp2

0x3b8a,	// (0x000336a7) list_single_heading_pane_t1_cp2_ParamLimits

0x3b8a,	// (0x000336a7) list_single_heading_pane_t1_cp2

0x5b15,	// (0x00035632) list_single_heading_pane_t2_cp2_ParamLimits

0x5b15,	// (0x00035632) list_single_heading_pane_t2_cp2

0x5a57,	// (0x00035574) list_double_graphic_pane_g1_cp2_ParamLimits

0x5a57,	// (0x00035574) list_double_graphic_pane_g1_cp2

0x5a63,	// (0x00035580) list_double_graphic_pane_g2_cp2_ParamLimits

0x5a63,	// (0x00035580) list_double_graphic_pane_g2_cp2

0x5a72,	// (0x0003558f) list_double_graphic_pane_g3_cp2

0x5a7a,	// (0x00035597) list_double_graphic_pane_t1_cp2_ParamLimits

0x5a7a,	// (0x00035597) list_double_graphic_pane_t1_cp2

0x5a90,	// (0x000355ad) list_double_graphic_pane_t2_cp2_ParamLimits

0x5a90,	// (0x000355ad) list_double_graphic_pane_t2_cp2

0x3c29,	// (0x00033746) list_double_number_pane_g1_cp2_ParamLimits

0x3c29,	// (0x00033746) list_double_number_pane_g1_cp2

0x3c35,	// (0x00033752) list_double_number_pane_g2_cp2

0x5a1b,	// (0x00035538) list_double_number_pane_t1_cp2_ParamLimits

0x5a1b,	// (0x00035538) list_double_number_pane_t1_cp2

0x5a2f,	// (0x0003554c) list_double_number_pane_t2_cp2_ParamLimits

0x5a2f,	// (0x0003554c) list_double_number_pane_t2_cp2

0x5a45,	// (0x00035562) list_double_number_pane_t3_cp2_ParamLimits

0x5a45,	// (0x00035562) list_double_number_pane_t3_cp2

0x5904,	// (0x00035421) list_single_graphic_pane_g1_cp2_ParamLimits

0x5904,	// (0x00035421) list_single_graphic_pane_g1_cp2

0x3c8f,	// (0x000337ac) list_single_graphic_pane_g2_cp2_ParamLimits

0x3c8f,	// (0x000337ac) list_single_graphic_pane_g2_cp2

0x3c9b,	// (0x000337b8) list_single_graphic_pane_g3_cp2

0x58da,	// (0x000353f7) list_single_graphic_pane_t1_cp2_ParamLimits

0x58da,	// (0x000353f7) list_single_graphic_pane_t1_cp2

0x3c8f,	// (0x000337ac) list_single_number_pane_g1_cp2_ParamLimits

0x3c8f,	// (0x000337ac) list_single_number_pane_g1_cp2

0x3c9b,	// (0x000337b8) list_single_number_pane_g2_cp2

0x58da,	// (0x000353f7) list_single_number_pane_t1_cp2_ParamLimits

0x58da,	// (0x000353f7) list_single_number_pane_t1_cp2

0x58f0,	// (0x0003540d) list_single_number_pane_t2_cp2_ParamLimits

0x58f0,	// (0x0003540d) list_single_number_pane_t2_cp2

0x3a90,	// (0x000335ad) list_double2_pane_g1_cp2_ParamLimits

0x3a90,	// (0x000335ad) list_double2_pane_g1_cp2

0x3aa1,	// (0x000335be) list_double2_pane_g2_cp2

0x3c01,	// (0x0003371e) list_double2_pane_t1_cp2_ParamLimits

0x3c01,	// (0x0003371e) list_double2_pane_t1_cp2

0x3c17,	// (0x00033734) list_double2_pane_t2_cp2_ParamLimits

0x3c17,	// (0x00033734) list_double2_pane_t2_cp2

0x3c29,	// (0x00033746) list_double_pane_g1_cp2_ParamLimits

0x3c29,	// (0x00033746) list_double_pane_g1_cp2

0x3c35,	// (0x00033752) list_double_pane_g2_cp2

0x3c3d,	// (0x0003375a) list_double_pane_t1_cp2_ParamLimits

0x3c3d,	// (0x0003375a) list_double_pane_t1_cp2

0x3c53,	// (0x00033770) list_double_pane_t2_cp2_ParamLimits

0x3c53,	// (0x00033770) list_double_pane_t2_cp2

0x3c7f,	// (0x0003379c) list_single_pane_cp2_g3

0x3c8f,	// (0x000337ac) list_single_pane_g1_cp2_ParamLimits

0x3c8f,	// (0x000337ac) list_single_pane_g1_cp2

0x3c9b,	// (0x000337b8) list_single_pane_g2_cp2

0x3ca3,	// (0x000337c0) list_single_pane_t1_cp2_ParamLimits

0x3ca3,	// (0x000337c0) list_single_pane_t1_cp2

0x3cbb,	// (0x000337d8) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3cbb,	// (0x000337d8) list_single_large_graphic_pane_g1_cp2

0x3cc9,	// (0x000337e6) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3cc9,	// (0x000337e6) list_single_large_graphic_pane_g2_cp2

0x3cd5,	// (0x000337f2) list_single_large_graphic_pane_g3_cp2

0x3cdd,	// (0x000337fa) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3cdd,	// (0x000337fa) list_single_large_graphic_pane_g4_cp1

0x3cf7,	// (0x00033814) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3cf7,	// (0x00033814) list_single_large_graphic_pane_t1_cp2

0x58a4,	// (0x000353c1) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x58a4,	// (0x000353c1) list_single_graphic_heading_pane_g1_cp2

0x5871,	// (0x0003538e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5871,	// (0x0003538e) list_single_graphic_heading_pane_g4_cp2

0x3c9b,	// (0x000337b8) list_single_graphic_heading_pane_g5_cp2

0x58b0,	// (0x000353cd) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x58b0,	// (0x000353cd) list_single_graphic_heading_pane_t1_cp2

0x58c6,	// (0x000353e3) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x58c6,	// (0x000353e3) list_single_graphic_heading_pane_t2_cp2

0x5865,	// (0x00035382) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5865,	// (0x00035382) list_single_2graphic_pane_g1_cp2

0x5871,	// (0x0003538e) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5871,	// (0x0003538e) list_single_2graphic_pane_g2_cp2

0x3c9b,	// (0x000337b8) list_single_2graphic_pane_g3_cp2

0x5882,	// (0x0003539f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5882,	// (0x0003539f) list_single_2graphic_pane_g4_cp2

0x588e,	// (0x000353ab) list_single_2graphic_pane_t1_cp2_ParamLimits

0x588e,	// (0x000353ab) list_single_2graphic_pane_t1_cp2

0x2200,	// (0x00031d1d) list_highlight_pane_g10_cp1

0x543d,	// (0x00034f5a) list_highlight_pane_g1_cp1

0x5445,	// (0x00034f62) list_highlight_pane_g2_cp1

0x544d,	// (0x00034f6a) list_highlight_pane_g3_cp1

0x5455,	// (0x00034f72) list_highlight_pane_g4_cp1

0x545d,	// (0x00034f7a) list_highlight_pane_g5_cp1

0x5465,	// (0x00034f82) list_highlight_pane_g6_cp1

0x546d,	// (0x00034f8a) list_highlight_pane_g7_cp1

0x5475,	// (0x00034f92) list_highlight_pane_g8_cp1

0x547d,	// (0x00034f9a) list_highlight_pane_g9_cp1

0xd45d,	// (0x0003cf7a) form_field_slider_pane_t3

0xd46b,	// (0x0003cf88) form_field_slider_pane_t4

0x5379,	// (0x00034e96) slider_form_pane_ParamLimits

0x5379,	// (0x00034e96) slider_form_pane

0x220a,	// (0x00031d27) control_abbreviations

0x220a,	// (0x00031d27) control_conventions

0x220a,	// (0x00031d27) control_definitions

0x220a,	// (0x00031d27) format_table_attribute

0x5b6b,	// (0x00035688) bg_popup_preview_window_pane_g9

0x220a,	// (0x00031d27) format_table_data2

0x220a,	// (0x00031d27) format_table_data3

0x220a,	// (0x00031d27) format_table_data_example

0x0008,

0x220a,	// (0x00031d27) intro_purpose

0xf91e,	// (0x0003f43b) bg_popup_preview_window_pane_g

0x220a,	// (0x00031d27) texts_category

0x220a,	// (0x00031d27) texts_graphics

0x3d0d,	// (0x0003382a) text_digital

0x3d1c,	// (0x00033839) text_primary

0x3d2b,	// (0x00033848) text_primary_small

0x3d3a,	// (0x00033857) text_secondary

0x3d49,	// (0x00033866) text_title

0x6307,	// (0x00035e24) bg_passive_tab_pane_g1_cp3_srt

0x39a1,	// (0x000334be) bg_passive_tab_pane_g2_cp3_srt

0x6310,	// (0x00035e2d) bg_passive_tab_pane_g3_cp3_srt

0x2566,	// (0x00032083) bg_active_tab_pane_cp3_srt_ParamLimits

0x2566,	// (0x00032083) bg_active_tab_pane_cp3_srt

0x6319,	// (0x00035e36) tabs_4_active_pane_srt_g1

0xd898,	// (0x0003d3b5) tabs_4_active_pane_srt_t1_ParamLimits

0xd898,	// (0x0003d3b5) tabs_4_active_pane_srt_t1

0x6307,	// (0x00035e24) bg_active_tab_pane_g1_cp3_copy1

0x39a1,	// (0x000334be) bg_active_tab_pane_g2_cp3_copy1

0x6310,	// (0x00035e2d) bg_active_tab_pane_g3_cp3_copy1

0x22ea,	// (0x00031e07) tabs_2_long_active_pane_srt_ParamLimits

0x22ea,	// (0x00031e07) tabs_2_long_active_pane_srt

0x22ea,	// (0x00031e07) tabs_2_long_passive_pane_srt_ParamLimits

0x22ea,	// (0x00031e07) tabs_2_long_passive_pane_srt

0x40de,	// (0x00033bfb) bg_passive_tab_pane_cp4_srt_ParamLimits

0x40de,	// (0x00033bfb) bg_passive_tab_pane_cp4_srt

0x5fbb,	// (0x00035ad8) bg_passive_tab_pane_g1_cp4_srt

0x39a1,	// (0x000334be) bg_passive_tab_pane_g2_cp4_srt

0x5fc4,	// (0x00035ae1) bg_passive_tab_pane_g3_cp4_srt

0x22ea,	// (0x00031e07) bg_active_tab_pane_cp4_srt_ParamLimits

0x22ea,	// (0x00031e07) bg_active_tab_pane_cp4_srt

0xd666,	// (0x0003d183) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd666,	// (0x0003d183) tabs_2_long_active_pane_srt_t1

0x5fbb,	// (0x00035ad8) bg_active_tab_pane_g1_cp4_srt

0x39a1,	// (0x000334be) bg_active_tab_pane_g2_cp4_srt

0x5fc4,	// (0x00035ae1) bg_active_tab_pane_g3_cp4_srt

0x2566,	// (0x00032083) tabs_3_long_active_pane_srt_ParamLimits

0x2566,	// (0x00032083) tabs_3_long_active_pane_srt

0x2566,	// (0x00032083) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2566,	// (0x00032083) tabs_3_long_passive_pane_cp_srt

0x2566,	// (0x00032083) tabs_3_long_passive_pane_srt_ParamLimits

0x2566,	// (0x00032083) tabs_3_long_passive_pane_srt

0x40de,	// (0x00033bfb) bg_passive_tab_pane_cp5_srt_ParamLimits

0x40de,	// (0x00033bfb) bg_passive_tab_pane_cp5_srt

0x3a2b,	// (0x00033548) bg_passive_tab_pane_g1_cp5_srt

0x39a1,	// (0x000334be) bg_passive_tab_pane_g2_cp5_srt

0x3a34,	// (0x00033551) bg_passive_tab_pane_g3_cp5_srt

0x22ea,	// (0x00031e07) bg_active_tab_pane_cp5_srt_ParamLimits

0x22ea,	// (0x00031e07) bg_active_tab_pane_cp5_srt

0xd650,	// (0x0003d16d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd650,	// (0x0003d16d) tabs_3_long_active_pane_srt_t1

0x3a2b,	// (0x00033548) bg_active_tab_pane_g1_cp5_srt

0x39a1,	// (0x000334be) bg_active_tab_pane_g2_cp5_srt

0x3a34,	// (0x00033551) bg_active_tab_pane_g3_cp5_srt

0x5f9b,	// (0x00035ab8) navi_text_pane_srt_t1

0x5f93,	// (0x00035ab0) navi_icon_pane_srt_g1

0x3f20,	// (0x00033a3d) midp_editing_number_pane_srt

0x3d58,	// (0x00033875) midp_ticker_pane_srt

0x3f28,	// (0x00033a45) midp_ticker_pane_srt_g1

0x3f30,	// (0x00033a4d) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x0003f2ca) midp_ticker_pane_srt_g

0x3f38,	// (0x00033a55) midp_ticker_pane_srt_t1

0x5f84,	// (0x00035aa1) midp_editing_number_pane_t1_copy1

0xc78b,	// (0x0003c2a8) listscroll_midp_pane

0xc78b,	// (0x0003c2a8) midp_form_pane

0x3dce,	// (0x000338eb) midp_info_popup_window_ParamLimits

0x3dce,	// (0x000338eb) midp_info_popup_window

0x31b2,	// (0x00032ccf) bg_popup_sub_pane_cp50_ParamLimits

0x31b2,	// (0x00032ccf) bg_popup_sub_pane_cp50

0x50a4,	// (0x00034bc1) listscroll_midp_info_pane_ParamLimits

0x50a4,	// (0x00034bc1) listscroll_midp_info_pane

0x508c,	// (0x00034ba9) listscroll_form_midp_pane_ParamLimits

0x508c,	// (0x00034ba9) listscroll_form_midp_pane

0x5098,	// (0x00034bb5) scroll_bar_cp050

0xd451,	// (0x0003cf6e) list_midp_pane

0x6d1e,	// (0x0003683b) signal_pane_g2_cp

0x4fa6,	// (0x00034ac3) listscroll_midp_info_pane_t1_ParamLimits

0x4fa6,	// (0x00034ac3) listscroll_midp_info_pane_t1

0x4fbe,	// (0x00034adb) listscroll_midp_info_pane_t2_ParamLimits

0x4fbe,	// (0x00034adb) listscroll_midp_info_pane_t2

0x4ffc,	// (0x00034b19) listscroll_midp_info_pane_t3_ParamLimits

0x4ffc,	// (0x00034b19) listscroll_midp_info_pane_t3

0x5036,	// (0x00034b53) listscroll_midp_info_pane_t4_ParamLimits

0x5036,	// (0x00034b53) listscroll_midp_info_pane_t4

0x0003,

0xf859,	// (0x0003f376) listscroll_midp_info_pane_t_ParamLimits

0xf859,	// (0x0003f376) listscroll_midp_info_pane_t

0x327c,	// (0x00032d99) scroll_pane_cp21

0x4f40,	// (0x00034a5d) form_midp_field_choice_group_pane

0x4f49,	// (0x00034a66) form_midp_field_text_pane

0x4f8c,	// (0x00034aa9) form_midp_field_time_pane

0x4f94,	// (0x00034ab1) form_midp_gauge_slider_pane

0x4f9d,	// (0x00034aba) form_midp_gauge_wait_pane

0x220a,	// (0x00031d27) form_midp_image_pane

0xb9b0,	// (0x0003b4cd) list_single_midp_pane_ParamLimits

0xb9b0,	// (0x0003b4cd) list_single_midp_pane

0xd429,	// (0x0003cf46) form_midp_field_text_pane_t1

0x4d18,	// (0x00034835) input_focus_pane_cp050

0x4f2f,	// (0x00034a4c) list_midp_form_text_pane

0x4ed3,	// (0x000349f0) form_midp_field_choice_group_pane_t1

0x4ee1,	// (0x000349fe) input_focus_pane_cp051

0x4ef5,	// (0x00034a12) list_midp_choice_pane

0x220a,	// (0x00031d27) status_idle_pane

0x4eb7,	// (0x000349d4) form_midp_field_time_pane_t1

0x2200,	// (0x00031d1d) wait_anim_pane_g2_copy1

0x4ec5,	// (0x000349e2) form_midp_field_time_pane_t2

0x0001,

0x3e7e,	// (0x0003399b) aid_navinavi_width_2_pane

0xf854,	// (0x0003f371) form_midp_field_time_pane_t

0x220a,	// (0x00031d27) input_focus_pane_cp052

0x220a,	// (0x00031d27) bg_input_focus_pane_cp040

0x4e77,	// (0x00034994) form_midp_gauge_slider_pane_t1

0x4e85,	// (0x000349a2) form_midp_gauge_slider_pane_t2

0xd40d,	// (0x0003cf2a) form_midp_gauge_slider_pane_t3

0xd41b,	// (0x0003cf38) form_midp_gauge_slider_pane_t4

0x0003,

0xf84b,	// (0x0003f368) form_midp_gauge_slider_pane_t

0x4eaf,	// (0x000349cc) form_midp_slider_pane

0x22ea,	// (0x00031e07) bg_input_focus_pane_cp041_ParamLimits

0x22ea,	// (0x00031e07) bg_input_focus_pane_cp041

0x4e44,	// (0x00034961) form_midp_gauge_wait_pane_t1_ParamLimits

0x4e44,	// (0x00034961) form_midp_gauge_wait_pane_t1

0x4e56,	// (0x00034973) form_midp_gauge_wait_pane_t2_ParamLimits

0x4e56,	// (0x00034973) form_midp_gauge_wait_pane_t2

0x0001,

0xf846,	// (0x0003f363) form_midp_gauge_wait_pane_t_ParamLimits

0xf846,	// (0x0003f363) form_midp_gauge_wait_pane_t

0x4e68,	// (0x00034985) form_midp_wait_pane_ParamLimits

0x4e68,	// (0x00034985) form_midp_wait_pane

0x4e0c,	// (0x00034929) form_midp_image_pane_g1

0x4e15,	// (0x00034932) form_midp_image_pane_t1

0x4e24,	// (0x00034941) form_midp_image_pane_t2

0x4e33,	// (0x00034950) form_midp_image_pane_t3

0x0002,

0xf83f,	// (0x0003f35c) form_midp_image_pane_t

0x4e03,	// (0x00034920) list_single_midp_pane_g1

0x1021,	// (0x00030b3e) list_single_midp_pane_t1

0xd3f6,	// (0x0003cf13) list_midp_form_item_pane_ParamLimits

0xd3f6,	// (0x0003cf13) list_midp_form_item_pane

0x3e26,	// (0x00033943) list_midp_form_item_pane_t1

0x3e35,	// (0x00033952) midp_ticker_pane_g1

0x3e41,	// (0x0003395e) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x0003f2b0) midp_ticker_pane_g

0xc833,	// (0x0003c350) midp_ticker_pane_t1

0xd7f5,	// (0x0003d312) midp_editing_number_pane_t1

0x61e1,	// (0x00035cfe) midp_editing_number_pane

0x61f0,	// (0x00035d0d) midp_ticker_pane

0x5f74,	// (0x00035a91) ai_message_heading_pane

0x220a,	// (0x00031d27) bg_popup_window_pane_cp14

0x5f7c,	// (0x00035a99) listscroll_ai_message_pane

0x5efa,	// (0x00035a17) ai_message_heading_pane_g1_ParamLimits

0x5efa,	// (0x00035a17) ai_message_heading_pane_g1

0x5f06,	// (0x00035a23) ai_message_heading_pane_g2_ParamLimits

0x5f06,	// (0x00035a23) ai_message_heading_pane_g2

0x5f14,	// (0x00035a31) ai_message_heading_pane_g3_ParamLimits

0x5f14,	// (0x00035a31) ai_message_heading_pane_g3

0x5f20,	// (0x00035a3d) ai_message_heading_pane_g4_ParamLimits

0x5f20,	// (0x00035a3d) ai_message_heading_pane_g4

0x0003,

0xf980,	// (0x0003f49d) ai_message_heading_pane_g_ParamLimits

0xf980,	// (0x0003f49d) ai_message_heading_pane_g

0x5f2c,	// (0x00035a49) ai_message_heading_pane_t1_ParamLimits

0x5f2c,	// (0x00035a49) ai_message_heading_pane_t1

0x5f46,	// (0x00035a63) ai_message_heading_pane_t2_ParamLimits

0x5f46,	// (0x00035a63) ai_message_heading_pane_t2

0x0001,

0xf989,	// (0x0003f4a6) ai_message_heading_pane_t_ParamLimits

0xf989,	// (0x0003f4a6) ai_message_heading_pane_t

0x5f5a,	// (0x00035a77) bg_popup_heading_pane_cp1_ParamLimits

0x5f5a,	// (0x00035a77) bg_popup_heading_pane_cp1

0x5ee8,	// (0x00035a05) list_ai_message_pane_ParamLimits

0x5ee8,	// (0x00035a05) list_ai_message_pane

0x327c,	// (0x00032d99) scroll_pane_cp10

0x5e84,	// (0x000359a1) list_ai_message_pane_g1

0x5e8c,	// (0x000359a9) list_ai_message_pane_g2

0x0001,

0xf95d,	// (0x0003f47a) list_ai_message_pane_g

0x5e94,	// (0x000359b1) list_ai_message_pane_t1_ParamLimits

0x5e94,	// (0x000359b1) list_ai_message_pane_t1

0x5ea9,	// (0x000359c6) list_ai_message_pane_t2_ParamLimits

0x5ea9,	// (0x000359c6) list_ai_message_pane_t2

0x5ebe,	// (0x000359db) list_ai_message_pane_t3_ParamLimits

0x5ebe,	// (0x000359db) list_ai_message_pane_t3

0x5ed3,	// (0x000359f0) list_ai_message_pane_t4_ParamLimits

0x5ed3,	// (0x000359f0) list_ai_message_pane_t4

0x0003,

0xf962,	// (0x0003f47f) list_ai_message_pane_t_ParamLimits

0xf962,	// (0x0003f47f) list_ai_message_pane_t

0xd636,	// (0x0003d153) cell_ai_soft_ind_pane_ParamLimits

0xd636,	// (0x0003d153) cell_ai_soft_ind_pane

0x3e5f,	// (0x0003397c) cell_ai_soft_ind_pane_g1_ParamLimits

0x3e5f,	// (0x0003397c) cell_ai_soft_ind_pane_g1

0x220a,	// (0x00031d27) grid_highlight_cp1

0x3e6c,	// (0x00033989) text_secondary_cp56_ParamLimits

0x3e6c,	// (0x00033989) text_secondary_cp56

0x5e42,	// (0x0003595f) example_general_pane_ParamLimits

0x5e42,	// (0x0003595f) example_general_pane

0x5e4e,	// (0x0003596b) example_parent_pane_g1_ParamLimits

0x5e4e,	// (0x0003596b) example_parent_pane_g1

0x5e5a,	// (0x00035977) example_parent_pane_t1_ParamLimits

0x5e5a,	// (0x00035977) example_parent_pane_t1

0xcc89,	// (0x0003c7a6) popup_preview_text_window_ParamLimits

0xcc89,	// (0x0003c7a6) popup_preview_text_window

0x3c87,	// (0x000337a4) list_single_pane_cp2_g4

0x261c,	// (0x00032139) bg_popup_preview_window_pane_ParamLimits

0x261c,	// (0x00032139) bg_popup_preview_window_pane

0x5b75,	// (0x00035692) popup_preview_text_window_t1_ParamLimits

0x5b75,	// (0x00035692) popup_preview_text_window_t1

0x5b93,	// (0x000356b0) popup_preview_text_window_t2_ParamLimits

0x5b93,	// (0x000356b0) popup_preview_text_window_t2

0x5bdc,	// (0x000356f9) popup_preview_text_window_t3_ParamLimits

0x5bdc,	// (0x000356f9) popup_preview_text_window_t3

0x5c21,	// (0x0003573e) popup_preview_text_window_t4_ParamLimits

0x5c21,	// (0x0003573e) popup_preview_text_window_t4

0x0004,

0xf931,	// (0x0003f44e) popup_preview_text_window_t_ParamLimits

0xf931,	// (0x0003f44e) popup_preview_text_window_t

0x5c9f,	// (0x000357bc) scroll_pane_cp11

0x4c26,	// (0x00034743) bg_popup_preview_window_pane_g1

0x5b29,	// (0x00035646) bg_popup_preview_window_pane_g2

0x5b33,	// (0x00035650) bg_popup_preview_window_pane_g3

0x5b3d,	// (0x0003565a) bg_popup_preview_window_pane_g4

0x5b47,	// (0x00035664) bg_popup_preview_window_pane_g5

0x5b51,	// (0x0003566e) bg_popup_preview_window_pane_g6

0x5b59,	// (0x00035676) bg_popup_preview_window_pane_g7

0x5b61,	// (0x0003567e) bg_popup_preview_window_pane_g8

0xf2f8,	// (0x0003ee15) aid_popup_width_pane

0xcbf9,	// (0x0003c716) popup_midp_note_alarm_window_ParamLimits

0xcbf9,	// (0x0003c716) popup_midp_note_alarm_window

0x30ee,	// (0x00032c0b) data_form_pane_ParamLimits

0xb652,	// (0x0003b16f) form_field_data_pane_g1

0xb65c,	// (0x0003b179) form_field_data_pane_t1_ParamLimits

0x30fa,	// (0x00032c17) input_focus_pane_ParamLimits

0x3108,	// (0x00032c25) data_form_wide_pane_ParamLimits

0x065b,	// (0x00030178) form_field_data_wide_pane_g1

0x0667,	// (0x00030184) form_field_data_wide_pane_t1_ParamLimits

0x2e6b,	// (0x00032988) input_focus_pane_cp6_ParamLimits

0xc525,	// (0x0003c042) input_popup_find_pane_g1_ParamLimits

0xc525,	// (0x0003c042) input_popup_find_pane_g1

0x08d7,	// (0x000303f4) aid_navi_side_left_pane

0x08ec,	// (0x00030409) aid_navi_side_right_pane

0x5538,	// (0x00035055) bg_popup_window_pane_cp30_ParamLimits

0x5538,	// (0x00035055) bg_popup_window_pane_cp30

0x55b2,	// (0x000350cf) popup_midp_note_alarm_window_g1_ParamLimits

0x55b2,	// (0x000350cf) popup_midp_note_alarm_window_g1

0x55e2,	// (0x000350ff) popup_midp_note_alarm_window_t1_ParamLimits

0x55e2,	// (0x000350ff) popup_midp_note_alarm_window_t1

0x5683,	// (0x000351a0) popup_midp_note_alarm_window_t2_ParamLimits

0x5683,	// (0x000351a0) popup_midp_note_alarm_window_t2

0x5731,	// (0x0003524e) popup_midp_note_alarm_window_t3_ParamLimits

0x5731,	// (0x0003524e) popup_midp_note_alarm_window_t3

0x5763,	// (0x00035280) popup_midp_note_alarm_window_t4_ParamLimits

0x5763,	// (0x00035280) popup_midp_note_alarm_window_t4

0x5789,	// (0x000352a6) popup_midp_note_alarm_window_t5_ParamLimits

0x5789,	// (0x000352a6) popup_midp_note_alarm_window_t5

0x000a,

0xf8ce,	// (0x0003f3eb) popup_midp_note_alarm_window_t_ParamLimits

0xf8ce,	// (0x0003f3eb) popup_midp_note_alarm_window_t

0x5835,	// (0x00035352) wait_bar_pane_cp1_ParamLimits

0x5835,	// (0x00035352) wait_bar_pane_cp1

0x220a,	// (0x00031d27) wait_anim_pane_copy1

0x220a,	// (0x00031d27) wait_border_pane_copy1

0x521d,	// (0x00034d3a) wait_border_pane_g1_copy1

0x0681,	// (0x0003019e) form_field_popup_pane_g1

0xb676,	// (0x0003b193) form_field_popup_pane_t1_ParamLimits

0x30fa,	// (0x00032c17) input_focus_pane_cp7_ParamLimits

0x3134,	// (0x00032c51) list_form_pane_ParamLimits

0x06a3,	// (0x000301c0) form_field_popup_wide_pane_g1

0x06ab,	// (0x000301c8) form_field_popup_wide_pane_t1_ParamLimits

0x30fa,	// (0x00032c17) input_focus_pane_cp8_ParamLimits

0x3140,	// (0x00032c5d) list_form_wide_pane_ParamLimits

0x6394,	// (0x00035eb1) aid_size_cell_graphic_pane

0xb6f5,	// (0x0003b212) data_form_pane_t1_ParamLimits

0xbb46,	// (0x0003b663) data_form_wide_pane_t1_ParamLimits

0xd086,	// (0x0003cba3) bg_status_flat_pane

0xb131,	// (0x0003ac4e) title_pane_t1_ParamLimits

0x22b2,	// (0x00031dcf) title_pane_t2_ParamLimits

0x22d8,	// (0x00031df5) title_pane_t3_ParamLimits

0xf59b,	// (0x0003f0b8) title_pane_t_ParamLimits

0xc62c,	// (0x0003c149) level_1_signal_ParamLimits

0xc63e,	// (0x0003c15b) level_2_signal_ParamLimits

0xc651,	// (0x0003c16e) level_3_signal_ParamLimits

0xc664,	// (0x0003c181) level_4_signal_ParamLimits

0xc677,	// (0x0003c194) level_5_signal_ParamLimits

0xc68a,	// (0x0003c1a7) level_6_signal_ParamLimits

0xc69d,	// (0x0003c1ba) level_7_signal_ParamLimits

0xc62c,	// (0x0003c149) level_1_battery_ParamLimits

0xc63e,	// (0x0003c15b) level_2_battery_ParamLimits

0xc651,	// (0x0003c16e) level_3_battery_ParamLimits

0xc664,	// (0x0003c181) level_4_battery_ParamLimits

0xc677,	// (0x0003c194) level_5_battery_ParamLimits

0xc68a,	// (0x0003c1a7) level_6_battery_ParamLimits

0xc69d,	// (0x0003c1ba) level_7_battery_ParamLimits

0x543d,	// (0x00034f5a) bg_status_flat_pane_g1

0x5445,	// (0x00034f62) bg_status_flat_pane_g2

0x544d,	// (0x00034f6a) bg_status_flat_pane_g3

0x5455,	// (0x00034f72) bg_status_flat_pane_g4

0x545d,	// (0x00034f7a) bg_status_flat_pane_g5

0x5465,	// (0x00034f82) bg_status_flat_pane_g6

0x546d,	// (0x00034f8a) bg_status_flat_pane_g7

0xb1c5,	// (0x0003ace2) tabs_3_active_pane_t1_ParamLimits

0xb1c5,	// (0x0003ace2) tabs_3_passive_pane_t1_ParamLimits

0xb1df,	// (0x0003acfc) tabs_4_active_pane_t1_ParamLimits

0xb1df,	// (0x0003acfc) tabs_4_1_passive_pane_t1_ParamLimits

0xc53b,	// (0x0003c058) tabs_2_active_pane_t1_ParamLimits

0xc53b,	// (0x0003c058) tabs_2_passive_pane_t1_ParamLimits

0x22ea,	// (0x00031e07) bg_active_tab_pane_cp4_ParamLimits

0xc54d,	// (0x0003c06a) tabs_2_long_active_pane_t1_ParamLimits

0x40de,	// (0x00033bfb) bg_passive_tab_pane_cp4_ParamLimits

0x0f68,	// (0x00030a85) list_single_midp_graphic_pane_t1_ParamLimits

0x22ea,	// (0x00031e07) bg_active_tab_pane_cp5_ParamLimits

0xc560,	// (0x0003c07d) tabs_3_long_active_pane_t1_ParamLimits

0x40de,	// (0x00033bfb) bg_passive_tab_pane_cp5_ParamLimits

0x0f68,	// (0x00030a85) list_single_midp_graphic_pane_t1

0xd086,	// (0x0003cba3) bg_status_flat_pane_ParamLimits

0x489f,	// (0x000343bc) indicator_pane_cp2_ParamLimits

0x489f,	// (0x000343bc) indicator_pane_cp2

0xd21b,	// (0x0003cd38) navi_pane_srt_ParamLimits

0xd21b,	// (0x0003cd38) navi_pane_srt

0x4a05,	// (0x00034522) popup_clock_digital_analogue_window_cp1

0x23ca,	// (0x00031ee7) indicator_pane_t1

0x3d58,	// (0x00033875) copy_highlight_pane

0x3d58,	// (0x00033875) cursor_graphics_pane

0x3d58,	// (0x00033875) graphic_within_text_pane

0x3d58,	// (0x00033875) link_highlight_pane

0x5c62,	// (0x0003577f) popup_preview_text_window_t5_ParamLimits

0x5c62,	// (0x0003577f) popup_preview_text_window_t5

0x3e88,	// (0x000339a5) cursor_digital_pane

0x3e88,	// (0x000339a5) cursor_primary_pane

0x3e99,	// (0x000339b6) cursor_primary_small_pane

0x3ea1,	// (0x000339be) cursor_secondary_pane

0x3ea9,	// (0x000339c6) cursor_title_pane

0x3e88,	// (0x000339a5) link_highlight_digital_pane

0x3e90,	// (0x000339ad) link_highlight_primary_pane

0x3e99,	// (0x000339b6) link_highlight_primary_small_pane

0x3ea1,	// (0x000339be) link_highlight_secondary_pane

0x3ea9,	// (0x000339c6) link_highlight_title_pane

0x3e88,	// (0x000339a5) copy_highlight_digital_pane

0x3e88,	// (0x000339a5) copy_highlight_primary_pane

0x3e99,	// (0x000339b6) copy_highlight_primary_small_pane

0x3ea1,	// (0x000339be) copy_highlight_secondary_pane

0x3ea9,	// (0x000339c6) copy_highlight_title_pane

0x3ea1,	// (0x000339be) graphic_text_digital_pane

0x54db,	// (0x00034ff8) graphic_text_primary_pane

0x54e4,	// (0x00035001) graphic_text_primary_small_pane

0x3e99,	// (0x000339b6) graphic_text_secondary_pane

0x3e88,	// (0x000339a5) graphic_text_title_pane

0xc845,	// (0x0003c362) cursor_primary_pane_g1

0x54cd,	// (0x00034fea) cursor_text_primary_t1

0xd48d,	// (0x0003cfaa) cursor_primary_small_pane_g1

0x54bf,	// (0x00034fdc) cursor_text_primary_small_t1

0xd483,	// (0x0003cfa0) cursor_primary_small_pane_g1_copy1

0x54a7,	// (0x00034fc4) cursor_text_primary_small_t1_copy1

0x5485,	// (0x00034fa2) cursor_text_title_t1

0xd479,	// (0x0003cf96) cursor_title_pane_g1

0xc845,	// (0x0003c362) cursor_digital_pane_g1

0x3ebb,	// (0x000339d8) cursor_text_digital_t1

0x3ec9,	// (0x000339e6) link_highlight_primary_pane_g1

0x542e,	// (0x00034f4b) link_highlight_primary_pane_t1

0x3ec9,	// (0x000339e6) link_highlight_primary_small_pane_g1

0x3ed1,	// (0x000339ee) link_highlight_primary_small_pane_t1

0x3ee0,	// (0x000339fd) link_highlight_secondary_pane_g1

0x3ee8,	// (0x00033a05) link_highlight_secondary_pane_t1

0x53a2,	// (0x00034ebf) link_highlight_title_pane_g1

0x53aa,	// (0x00034ec7) link_highlight_title_pane_t1

0x538b,	// (0x00034ea8) link_highlight_digital_pane_g1

0x5393,	// (0x00034eb0) link_highlight_digital_pane_t1

0x5253,	// (0x00034d70) copy_highlight_primary_pane_g1

0x526a,	// (0x00034d87) copy_highlight_primary_pane_t1

0x5253,	// (0x00034d70) copy_highlight_primary_small_pane_g1

0x525b,	// (0x00034d78) copy_highlight_primary_small_pane_t1

0x3ef7,	// (0x00033a14) copy_highlight_secondary_pane_g1

0x3eff,	// (0x00033a1c) copy_highlight_secondary_pane_t1

0x523c,	// (0x00034d59) copy_highlight_title_pane_g1

0x5244,	// (0x00034d61) copy_highlight_title_pane_t1

0x5253,	// (0x00034d70) copy_highlight_digital_pane_g1

0x6564,	// (0x00036081) copy_highlight_digital_pane_t1

0x64b8,	// (0x00035fd5) graphic_text_primary_pane_g1

0x6548,	// (0x00036065) graphic_text_primary_pane_t1

0x6556,	// (0x00036073) graphic_text_primary_pane_t2

0x0001,

0xf9fd,	// (0x0003f51a) graphic_text_primary_pane_t

0x6524,	// (0x00036041) graphic_text_primary_small_pane_g1

0x652c,	// (0x00036049) graphic_text_primary_small_pane_t1

0x653a,	// (0x00036057) graphic_text_primary_small_pane_t2

0x0001,

0xf9f8,	// (0x0003f515) graphic_text_primary_small_pane_t

0x6500,	// (0x0003601d) graphic_text_secondary_pane_g1

0x6508,	// (0x00036025) graphic_text_secondary_pane_t1

0x6516,	// (0x00036033) graphic_text_secondary_pane_t2

0x0001,

0xf9f3,	// (0x0003f510) graphic_text_secondary_pane_t

0x64dc,	// (0x00035ff9) graphic_text_title_pane_g1

0x64e4,	// (0x00036001) graphic_text_title_pane_t1

0x64f2,	// (0x0003600f) graphic_text_title_pane_t2

0x0001,

0xf9ee,	// (0x0003f50b) graphic_text_title_pane_t

0x64b8,	// (0x00035fd5) graphic_text_digital_pane_g1

0x64c0,	// (0x00035fdd) graphic_text_digital_pane_t1

0x64ce,	// (0x00035feb) graphic_text_digital_pane_t2

0x0001,

0xf9e9,	// (0x0003f506) graphic_text_digital_pane_t

0x22ea,	// (0x00031e07) navi_icon_pane_srt_ParamLimits

0x22ea,	// (0x00031e07) navi_icon_pane_srt

0x220a,	// (0x00031d27) navi_midp_pane_srt

0x220a,	// (0x00031d27) navi_navi_pane_srt

0x22ea,	// (0x00031e07) navi_text_pane_srt_ParamLimits

0x22ea,	// (0x00031e07) navi_text_pane_srt

0x6483,	// (0x00035fa0) navi_navi_icon_text_pane_srt

0x648b,	// (0x00035fa8) navi_navi_pane_srt_g1_ParamLimits

0x648b,	// (0x00035fa8) navi_navi_pane_srt_g1

0x649d,	// (0x00035fba) navi_navi_pane_srt_g2_ParamLimits

0x649d,	// (0x00035fba) navi_navi_pane_srt_g2

0x0001,

0xf9e4,	// (0x0003f501) navi_navi_pane_srt_g_ParamLimits

0xf9e4,	// (0x0003f501) navi_navi_pane_srt_g

0x64af,	// (0x00035fcc) navi_navi_tabs_pane_srt

0x6483,	// (0x00035fa0) navi_navi_text_pane_srt

0x6483,	// (0x00035fa0) navi_navi_volume_pane_srt

0x6474,	// (0x00035f91) navi_navi_text_pane_srt_t1

0x13fc,	// (0x00030f19) navi_navi_volume_pane_srt_g1

0x1404,	// (0x00030f21) volume_small_pane_srt_ParamLimits

0x1404,	// (0x00030f21) volume_small_pane_srt

0x0c4a,	// (0x00030767) volume_small_pane_srt_g1_ParamLimits

0x0c4a,	// (0x00030767) volume_small_pane_srt_g1

0x0c5a,	// (0x00030777) volume_small_pane_srt_g2_ParamLimits

0x0c5a,	// (0x00030777) volume_small_pane_srt_g2

0x0c6b,	// (0x00030788) volume_small_pane_srt_g3_ParamLimits

0x0c6b,	// (0x00030788) volume_small_pane_srt_g3

0x0c7c,	// (0x00030799) volume_small_pane_srt_g4_ParamLimits

0x0c7c,	// (0x00030799) volume_small_pane_srt_g4

0x0c8d,	// (0x000307aa) volume_small_pane_srt_g5_ParamLimits

0x0c8d,	// (0x000307aa) volume_small_pane_srt_g5

0x0c9e,	// (0x000307bb) volume_small_pane_srt_g6_ParamLimits

0x0c9e,	// (0x000307bb) volume_small_pane_srt_g6

0x0caf,	// (0x000307cc) volume_small_pane_srt_g7_ParamLimits

0x0caf,	// (0x000307cc) volume_small_pane_srt_g7

0x0cc0,	// (0x000307dd) volume_small_pane_srt_g8_ParamLimits

0x0cc0,	// (0x000307dd) volume_small_pane_srt_g8

0x0cd1,	// (0x000307ee) volume_small_pane_srt_g9_ParamLimits

0x0cd1,	// (0x000307ee) volume_small_pane_srt_g9

0x0ce2,	// (0x000307ff) volume_small_pane_srt_g10_ParamLimits

0x0ce2,	// (0x000307ff) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x0003f2b5) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x0003f2b5) volume_small_pane_srt_g

0x26d1,	// (0x000321ee) query_popup_data_pane_cp2

0x645a,	// (0x00035f77) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x645a,	// (0x00035f77) navi_navi_icon_text_pane_srt_t1

0x54db,	// (0x00034ff8) navi_tabs_2_long_pane_srt

0x54db,	// (0x00034ff8) navi_tabs_2_pane_srt

0x54db,	// (0x00034ff8) navi_tabs_3_long_pane_srt

0x54db,	// (0x00034ff8) navi_tabs_3_pane_srt

0x54db,	// (0x00034ff8) navi_tabs_4_pane_srt

0x13dc,	// (0x00030ef9) tabs_2_active_pane_srt_ParamLimits

0x13dc,	// (0x00030ef9) tabs_2_active_pane_srt

0x13ec,	// (0x00030f09) tabs_2_passive_pane_srt_ParamLimits

0x13ec,	// (0x00030f09) tabs_2_passive_pane_srt

0x4d18,	// (0x00034835) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4d18,	// (0x00034835) bg_passive_tab_pane_cp1_srt

0x6426,	// (0x00035f43) bg_passive_tab_pane_g1_cp1_srt

0x39a1,	// (0x000334be) bg_passive_tab_pane_g2_cp1_srt

0x642f,	// (0x00035f4c) bg_passive_tab_pane_g3_cp1_srt

0x2566,	// (0x00032083) bg_active_tab_pane_cp1_srt_ParamLimits

0x2566,	// (0x00032083) bg_active_tab_pane_cp1_srt

0x6438,	// (0x00035f55) tabs_2_active_pane_srt_g1

0xd918,	// (0x0003d435) tabs_2_active_pane_srt_t1_ParamLimits

0xd918,	// (0x0003d435) tabs_2_active_pane_srt_t1

0x6426,	// (0x00035f43) bg_active_tab_pane_g1_cp1_srt

0x39a1,	// (0x000334be) bg_active_tab_pane_g2_cp1_srt

0x642f,	// (0x00035f4c) bg_active_tab_pane_g3_cp1_srt

0x13a9,	// (0x00030ec6) tabs_3_active_pane_srt_ParamLimits

0x13a9,	// (0x00030ec6) tabs_3_active_pane_srt

0x13ba,	// (0x00030ed7) tabs_3_passive_pane_cp_srt_ParamLimits

0x13ba,	// (0x00030ed7) tabs_3_passive_pane_cp_srt

0x13cb,	// (0x00030ee8) tabs_3_passive_pane_srt_ParamLimits

0x13cb,	// (0x00030ee8) tabs_3_passive_pane_srt

0x4d18,	// (0x00034835) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4d18,	// (0x00034835) bg_passive_tab_pane_cp2_srt

0x3f0e,	// (0x00033a2b) bg_passive_tab_pane_g1_cp2_srt

0x39a1,	// (0x000334be) bg_passive_tab_pane_g2_cp2_srt

0x3f17,	// (0x00033a34) bg_passive_tab_pane_g3_cp2_srt

0x2566,	// (0x00032083) bg_active_tab_pane_cp2_srt_ParamLimits

0x2566,	// (0x00032083) bg_active_tab_pane_cp2_srt

0x640c,	// (0x00035f29) tabs_3_active_pane_srt_g1

0xd902,	// (0x0003d41f) tabs_3_active_pane_srt_t1_ParamLimits

0xd902,	// (0x0003d41f) tabs_3_active_pane_srt_t1

0x3f0e,	// (0x00033a2b) bg_active_tab_pane_g1_cp2_srt

0x39a1,	// (0x000334be) bg_active_tab_pane_g2_cp2_srt

0x3f17,	// (0x00033a34) bg_active_tab_pane_g3_cp2_srt

0x1361,	// (0x00030e7e) tabs_4_active_pane_srt_ParamLimits

0x1361,	// (0x00030e7e) tabs_4_active_pane_srt

0x1373,	// (0x00030e90) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1373,	// (0x00030e90) tabs_4_passive_pane_cp2_srt

0x406c,	// (0x00033b89) aid_size_cell_toolbar

0x602e,	// (0x00035b4b) main_idle_act_pane_ParamLimits

0x42a3,	// (0x00033dc0) popup_large_graphic_colour_window_ParamLimits

0xcf4f,	// (0x0003ca6c) popup_toolbar_window_ParamLimits

0xcf4f,	// (0x0003ca6c) popup_toolbar_window

0x131c,	// (0x00030e39) list_single_graphic_2heading_pane_ParamLimits

0x131c,	// (0x00030e39) list_single_graphic_2heading_pane

0x34ad,	// (0x00032fca) aid_size_cell_apps_grid_lsc_pane

0x34bf,	// (0x00032fdc) aid_size_cell_apps_grid_prt_pane

0x40de,	// (0x00033bfb) bg_wml_button_pane_cp1_ParamLimits

0x40de,	// (0x00033bfb) bg_wml_button_pane_cp1

0xd429,	// (0x0003cf46) form_midp_field_text_pane_t1_ParamLimits

0x4d18,	// (0x00034835) input_focus_pane_cp050_ParamLimits

0x4f2f,	// (0x00034a4c) list_midp_form_text_pane_ParamLimits

0x4ee1,	// (0x000349fe) input_focus_pane_cp051_ParamLimits

0x4ef5,	// (0x00034a12) list_midp_choice_pane_ParamLimits

0xd3e0,	// (0x0003cefd) list_single_2graphic_pane_cp3_ParamLimits

0xd3e0,	// (0x0003cefd) list_single_2graphic_pane_cp3

0x7047,	// (0x00036b64) list_single_midp_graphic_pane_ParamLimits

0x7047,	// (0x00036b64) list_single_midp_graphic_pane

0xf3a0,	// (0x0003eebd) list_single_graphic_2heading_pane_g1_ParamLimits

0xf3a0,	// (0x0003eebd) list_single_graphic_2heading_pane_g1

0xf3ac,	// (0x0003eec9) list_single_graphic_2heading_pane_g4_ParamLimits

0xf3ac,	// (0x0003eec9) list_single_graphic_2heading_pane_g4

0xf3b8,	// (0x0003eed5) list_single_graphic_2heading_pane_g5_ParamLimits

0xf3b8,	// (0x0003eed5) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x0003f308) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x0003f308) list_single_graphic_2heading_pane_g

0xf3c4,	// (0x0003eee1) list_single_graphic_2heading_pane_t1_ParamLimits

0xf3c4,	// (0x0003eee1) list_single_graphic_2heading_pane_t1

0xf3d8,	// (0x0003eef5) list_single_graphic_2heading_pane_t2_ParamLimits

0xf3d8,	// (0x0003eef5) list_single_graphic_2heading_pane_t2

0xf3f4,	// (0x0003ef11) list_single_graphic_2heading_pane_t3_ParamLimits

0xf3f4,	// (0x0003ef11) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x0003f30f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x0003f30f) list_single_graphic_2heading_pane_t

0x4b64,	// (0x00034681) bg_popup_sub_pane_cp2

0x4b8e,	// (0x000346ab) grid_toobar_pane

0x0e5c,	// (0x00030979) cell_toolbar_pane_ParamLimits

0x0e5c,	// (0x00030979) cell_toolbar_pane

0x4bca,	// (0x000346e7) cell_toolbar_pane_g1_ParamLimits

0x4bca,	// (0x000346e7) cell_toolbar_pane_g1

0x4bde,	// (0x000346fb) cell_toolbar_pane_g2_ParamLimits

0x4bde,	// (0x000346fb) cell_toolbar_pane_g2

0x0001,

0xf800,	// (0x0003f31d) cell_toolbar_pane_g_ParamLimits

0xf800,	// (0x0003f31d) cell_toolbar_pane_g

0x4c00,	// (0x0003471d) grid_highlight_pane_cp2_ParamLimits

0x4c00,	// (0x0003471d) grid_highlight_pane_cp2

0x4c1a,	// (0x00034737) toolbar_button_pane

0x4c26,	// (0x00034743) toolbar_button_pane_g1

0x4c2e,	// (0x0003474b) toolbar_button_pane_g2

0x4c36,	// (0x00034753) toolbar_button_pane_g3

0x4c3e,	// (0x0003475b) toolbar_button_pane_g4

0x4c46,	// (0x00034763) toolbar_button_pane_g5

0x4c4e,	// (0x0003476b) toolbar_button_pane_g6

0x4c56,	// (0x00034773) toolbar_button_pane_g7

0x4c5e,	// (0x0003477b) toolbar_button_pane_g8

0x4c66,	// (0x00034783) toolbar_button_pane_g9

0x0009,

0xf805,	// (0x0003f322) toolbar_button_pane_g

0x0ece,	// (0x000309eb) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0ece,	// (0x000309eb) list_single_2graphic_pane_g1_cp3

0xb93e,	// (0x0003b45b) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb93e,	// (0x0003b45b) list_single_2graphic_pane_g2_cp3

0x0eeb,	// (0x00030a08) list_single_2graphic_pane_g3_cp3

0x0ef3,	// (0x00030a10) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0ef3,	// (0x00030a10) list_single_2graphic_pane_g4_cp3

0x0eff,	// (0x00030a1c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0eff,	// (0x00030a1c) list_single_2graphic_pane_t1_cp3

0x0f5c,	// (0x00030a79) list_single_midp_graphic_pane_g2_ParamLimits

0x0f5c,	// (0x00030a79) list_single_midp_graphic_pane_g2

0x4074,	// (0x00033b91) aid_zoom_text_primary

0x0e4c,	// (0x00030969) aid_zoom_text_secondary

0x3fcb,	// (0x00033ae8) status_small_pane_g7_ParamLimits

0x3fcb,	// (0x00033ae8) status_small_pane_g7

0x3fee,	// (0x00033b0b) status_small_pane_t1_ParamLimits

0xb10d,	// (0x0003ac2a) title_pane_g2

0x0003,

0xf592,	// (0x0003f0af) title_pane_g

0xc3b9,	// (0x0003bed6) aid_size_cell_colour_1_pane_ParamLimits

0xc3b9,	// (0x0003bed6) aid_size_cell_colour_1_pane

0xc3cd,	// (0x0003beea) aid_size_cell_colour_2_pane_ParamLimits

0xc3cd,	// (0x0003beea) aid_size_cell_colour_2_pane

0xc3e1,	// (0x0003befe) aid_size_cell_colour_3_pane_ParamLimits

0xc3e1,	// (0x0003befe) aid_size_cell_colour_3_pane

0xc3f5,	// (0x0003bf12) aid_size_cell_colour_4_pane_ParamLimits

0xc3f5,	// (0x0003bf12) aid_size_cell_colour_4_pane

0x0813,	// (0x00030330) title_pane_stacon_g1_ParamLimits

0x0813,	// (0x00030330) title_pane_stacon_g1

0x52c1,	// (0x00034dde) popup_note_wait_window_g3_ParamLimits

0x52c1,	// (0x00034dde) popup_note_wait_window_g3

0x5338,	// (0x00034e55) popup_note_wait_window_t5_ParamLimits

0x5338,	// (0x00034e55) popup_note_wait_window_t5

0x220a,	// (0x00031d27) main_feb_china_hwr_fs_writing_pane

0xc8ea,	// (0x0003c407) popup_feb_china_hwr_fs_window_ParamLimits

0xc8ea,	// (0x0003c407) popup_feb_china_hwr_fs_window

0xb94f,	// (0x0003b46c) aid_size_cell_hwr_fs_ParamLimits

0xb94f,	// (0x0003b46c) aid_size_cell_hwr_fs

0x4d18,	// (0x00034835) bg_popup_sub_pane_cp3_ParamLimits

0x4d18,	// (0x00034835) bg_popup_sub_pane_cp3

0xb964,	// (0x0003b481) grid_hwr_fs_pane_ParamLimits

0xb964,	// (0x0003b481) grid_hwr_fs_pane

0x0fab,	// (0x00030ac8) linegrid_hwr_fs_pane_ParamLimits

0x0fab,	// (0x00030ac8) linegrid_hwr_fs_pane

0xb97c,	// (0x0003b499) cell_hwr_fs_pane_ParamLimits

0xb97c,	// (0x0003b499) cell_hwr_fs_pane

0x4d24,	// (0x00034841) linegrid_hwr_fs_pane_g1_ParamLimits

0x4d24,	// (0x00034841) linegrid_hwr_fs_pane_g1

0xd3b4,	// (0x0003ced1) linegrid_hwr_fs_pane_g2_ParamLimits

0xd3b4,	// (0x0003ced1) linegrid_hwr_fs_pane_g2

0x4d42,	// (0x0003485f) linegrid_hwr_fs_pane_g3_ParamLimits

0x4d42,	// (0x0003485f) linegrid_hwr_fs_pane_g3

0x0fdf,	// (0x00030afc) linegrid_hwr_fs_pane_g4_ParamLimits

0x0fdf,	// (0x00030afc) linegrid_hwr_fs_pane_g4

0x0ffd,	// (0x00030b1a) linegrid_hwr_fs_pane_g5_ParamLimits

0x0ffd,	// (0x00030b1a) linegrid_hwr_fs_pane_g5

0x0004,

0xf82b,	// (0x0003f348) linegrid_hwr_fs_pane_g_ParamLimits

0xf82b,	// (0x0003f348) linegrid_hwr_fs_pane_g

0x4d4e,	// (0x0003486b) cell_hwr_fs_pane_g1_ParamLimits

0x4d4e,	// (0x0003486b) cell_hwr_fs_pane_g1

0x4a9b,	// (0x000345b8) cell_hwr_fs_pane_g2_ParamLimits

0x4a9b,	// (0x000345b8) cell_hwr_fs_pane_g2

0xd3c6,	// (0x0003cee3) cell_hwr_fs_pane_g3_ParamLimits

0xd3c6,	// (0x0003cee3) cell_hwr_fs_pane_g3

0xd3d3,	// (0x0003cef0) cell_hwr_fs_pane_g4_ParamLimits

0xd3d3,	// (0x0003cef0) cell_hwr_fs_pane_g4

0x0003,

0xf836,	// (0x0003f353) cell_hwr_fs_pane_g_ParamLimits

0xf836,	// (0x0003f353) cell_hwr_fs_pane_g

0xb9a2,	// (0x0003b4bf) cell_hwr_fs_pane_t1

0x220a,	// (0x00031d27) grid_highlight_pane_cp6

0x220a,	// (0x00031d27) main_idle_act2_pane

0x3263,	// (0x00032d80) aid_inside_area_popup_secondary

0xd4ad,	// (0x0003cfca) aid_inside_area_window_primary_ParamLimits

0xd4ad,	// (0x0003cfca) aid_inside_area_window_primary

0x6573,	// (0x00036090) ai2_news_ticker_pane

0x657b,	// (0x00036098) aid_size_cell_ai1_link_ParamLimits

0x657b,	// (0x00036098) aid_size_cell_ai1_link

0x6595,	// (0x000360b2) popup_ai2_data_window_ParamLimits

0x6595,	// (0x000360b2) popup_ai2_data_window

0x65b3,	// (0x000360d0) popup_ai2_link_window_ParamLimits

0x65b3,	// (0x000360d0) popup_ai2_link_window

0x4d18,	// (0x00034835) bg_popup_sub_pane_cp4_ParamLimits

0x4d18,	// (0x00034835) bg_popup_sub_pane_cp4

0x65c9,	// (0x000360e6) grid_ai2_link_pane_ParamLimits

0x65c9,	// (0x000360e6) grid_ai2_link_pane

0x65e0,	// (0x000360fd) popup_ai2_link_window_g1_ParamLimits

0x65e0,	// (0x000360fd) popup_ai2_link_window_g1

0x65ec,	// (0x00036109) popup_ai2_link_window_g2_ParamLimits

0x65ec,	// (0x00036109) popup_ai2_link_window_g2

0x0001,

0xfa02,	// (0x0003f51f) popup_ai2_link_window_g_ParamLimits

0xfa02,	// (0x0003f51f) popup_ai2_link_window_g

0x65fd,	// (0x0003611a) ai2_mp_button_pane

0x6605,	// (0x00036122) ai2_mp_volume_pane

0x4ee1,	// (0x000349fe) bg_popup_sub_pane_cp5_ParamLimits

0x4ee1,	// (0x000349fe) bg_popup_sub_pane_cp5

0x660d,	// (0x0003612a) heading_ai2_gene_pane_ParamLimits

0x660d,	// (0x0003612a) heading_ai2_gene_pane

0x6619,	// (0x00036136) list_ai2_gene_pane_ParamLimits

0x6619,	// (0x00036136) list_ai2_gene_pane

0x6661,	// (0x0003617e) cell_ai2_link_pane_ParamLimits

0x6661,	// (0x0003617e) cell_ai2_link_pane

0x6677,	// (0x00036194) cell_ai2_link_pane_g1

0x220a,	// (0x00031d27) grid_highlight_pane_cp7

0x1419,	// (0x00030f36) ai2_mp_volume_pane_g1

0x674a,	// (0x00036267) ai2_mp_volume_pane_g2

0x66bf,	// (0x000361dc) list_ai2_gene_pane_t1

0x6752,	// (0x0003626f) ai2_mp_volume_pane_g3

0x0002,

0xfa1b,	// (0x0003f538) ai2_mp_volume_pane_g

0x1421,	// (0x00030f3e) volume_small_pane_cp3

0x675a,	// (0x00036277) aid_size_cell_ai2_button

0x6762,	// (0x0003627f) grid_ai2_button_pane

0x676b,	// (0x00036288) cell_ai2_button_pane_ParamLimits

0x676b,	// (0x00036288) cell_ai2_button_pane

0x2200,	// (0x00031d1d) cell_ai2_button_pane_g1

0x220a,	// (0x00031d27) grid_highlight_pane_cp8

0x670a,	// (0x00036227) ai2_gene_pane_t1_ParamLimits

0x670a,	// (0x00036227) ai2_gene_pane_t1

0xc876,	// (0x0003c393) aid_height_parent_landscape

0xd67d,	// (0x0003d19a) aid_height_set_list

0x602e,	// (0x00035b4b) aid_size_parent

0x6394,	// (0x00035eb1) aid_size_cell_graphic_pane_ParamLimits

0x6629,	// (0x00036146) popup_ai2_data_window_g1_ParamLimits

0x6629,	// (0x00036146) popup_ai2_data_window_g1

0x6635,	// (0x00036152) ai2_news_ticker_pane_g1

0x663d,	// (0x0003615a) ai2_news_ticker_pane_g2

0x0001,

0xfa07,	// (0x0003f524) ai2_news_ticker_pane_g

0x6645,	// (0x00036162) ai2_news_ticker_pane_t1

0x6653,	// (0x00036170) ai2_news_ticker_pane_t2

0x0001,

0xfa0c,	// (0x0003f529) ai2_news_ticker_pane_t

0x6680,	// (0x0003619d) heading_ai2_gene_pane_g1

0x6688,	// (0x000361a5) heading_ai2_gene_pane_t1_ParamLimits

0x6688,	// (0x000361a5) heading_ai2_gene_pane_t1

0x669d,	// (0x000361ba) list_highlight_pane_cp6

0x66a5,	// (0x000361c2) ai2_gene_pane_ParamLimits

0x66a5,	// (0x000361c2) ai2_gene_pane

0x66cd,	// (0x000361ea) list_ai2_gene_pane_t2

0x0001,

0xfa11,	// (0x0003f52e) list_ai2_gene_pane_t

0x66db,	// (0x000361f8) list_highlight_pane_cp8_ParamLimits

0x66db,	// (0x000361f8) list_highlight_pane_cp8

0x66ec,	// (0x00036209) ai2_gene_pane_g1_ParamLimits

0x66ec,	// (0x00036209) ai2_gene_pane_g1

0x66fe,	// (0x0003621b) ai2_gene_pane_g2_ParamLimits

0x66fe,	// (0x0003621b) ai2_gene_pane_g2

0x0001,

0xfa16,	// (0x0003f533) ai2_gene_pane_g_ParamLimits

0xfa16,	// (0x0003f533) ai2_gene_pane_g

0x3090,	// (0x00032bad) scroll_pane_cp12

0xb8e1,	// (0x0003b3fe) control_pane_t3_ParamLimits

0xb8e1,	// (0x0003b3fe) control_pane_t3

0x3fdf,	// (0x00033afc) status_small_pane_g8_ParamLimits

0x3fdf,	// (0x00033afc) status_small_pane_g8

0xc98c,	// (0x0003c4a9) popup_find_window_ParamLimits

0xcc39,	// (0x0003c756) popup_note_image_window_ParamLimits

0x0e8c,	// (0x000309a9) list_double2_graphic_pane_vc_g1_ParamLimits

0x0e8c,	// (0x000309a9) list_double2_graphic_pane_vc_g1

0x0e98,	// (0x000309b5) list_double2_graphic_pane_vc_g2_ParamLimits

0x0e98,	// (0x000309b5) list_double2_graphic_pane_vc_g2

0x0ea4,	// (0x000309c1) list_double2_graphic_pane_vc_g3_ParamLimits

0x0ea4,	// (0x000309c1) list_double2_graphic_pane_vc_g3

0x0002,

0xf7f9,	// (0x0003f316) list_double2_graphic_pane_vc_g_ParamLimits

0xf7f9,	// (0x0003f316) list_double2_graphic_pane_vc_g

0x0eb0,	// (0x000309cd) list_double2_graphic_pane_vc_t1_ParamLimits

0x0eb0,	// (0x000309cd) list_double2_graphic_pane_vc_t1

0x0f1a,	// (0x00030a37) list_single_heading_pane_vc_g1_ParamLimits

0x0f1a,	// (0x00030a37) list_single_heading_pane_vc_g1

0x0f26,	// (0x00030a43) list_single_heading_pane_vc_g2_ParamLimits

0x0f26,	// (0x00030a43) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0003f129) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0003f129) list_single_heading_pane_vc_g

0x0f32,	// (0x00030a4f) list_single_heading_pane_vc_t1_ParamLimits

0x0f32,	// (0x00030a4f) list_single_heading_pane_vc_t1

0x0f48,	// (0x00030a65) list_single_heading_pane_vc_t2_ParamLimits

0x0f48,	// (0x00030a65) list_single_heading_pane_vc_t2

0x0001,

0xf81a,	// (0x0003f337) list_single_heading_pane_vc_t_ParamLimits

0xf81a,	// (0x0003f337) list_single_heading_pane_vc_t

0x4c6e,	// (0x0003478b) list_setting_number_pane_vc_g1_ParamLimits

0x4c6e,	// (0x0003478b) list_setting_number_pane_vc_g1

0x4c7a,	// (0x00034797) list_setting_number_pane_vc_g2_ParamLimits

0x4c7a,	// (0x00034797) list_setting_number_pane_vc_g2

0x0001,

0xf81f,	// (0x0003f33c) list_setting_number_pane_vc_g_ParamLimits

0xf81f,	// (0x0003f33c) list_setting_number_pane_vc_g

0x4c86,	// (0x000347a3) list_setting_number_pane_vc_t1_ParamLimits

0x4c86,	// (0x000347a3) list_setting_number_pane_vc_t1

0x4c9a,	// (0x000347b7) list_setting_number_pane_vc_t2_ParamLimits

0x4c9a,	// (0x000347b7) list_setting_number_pane_vc_t2

0x4cb6,	// (0x000347d3) list_setting_number_pane_vc_t3_ParamLimits

0x4cb6,	// (0x000347d3) list_setting_number_pane_vc_t3

0x0002,

0xf824,	// (0x0003f341) list_setting_number_pane_vc_t_ParamLimits

0xf824,	// (0x0003f341) list_setting_number_pane_vc_t

0x4cde,	// (0x000347fb) set_value_pane_vc_ParamLimits

0x4cde,	// (0x000347fb) set_value_pane_vc

0x131c,	// (0x00030e39) list_double2_graphic_pane_vc_ParamLimits

0x131c,	// (0x00030e39) list_double2_graphic_pane_vc

0x6212,	// (0x00035d2f) list_double2_large_graphic_pane_vc_ParamLimits

0x6212,	// (0x00035d2f) list_double2_large_graphic_pane_vc

0x131c,	// (0x00030e39) list_double2_pane_vc_ParamLimits

0x131c,	// (0x00030e39) list_double2_pane_vc

0x131c,	// (0x00030e39) list_double_graphic_heading_pane_vc_ParamLimits

0x131c,	// (0x00030e39) list_double_graphic_heading_pane_vc

0x131c,	// (0x00030e39) list_double_graphic_pane_vc_ParamLimits

0x131c,	// (0x00030e39) list_double_graphic_pane_vc

0x131c,	// (0x00030e39) list_double_heading_pane_vc_ParamLimits

0x131c,	// (0x00030e39) list_double_heading_pane_vc

0x6212,	// (0x00035d2f) list_double_large_graphic_pane_vc_ParamLimits

0x6212,	// (0x00035d2f) list_double_large_graphic_pane_vc

0x131c,	// (0x00030e39) list_double_number_pane_vc_ParamLimits

0x131c,	// (0x00030e39) list_double_number_pane_vc

0x131c,	// (0x00030e39) list_double_pane_vc_ParamLimits

0x131c,	// (0x00030e39) list_double_pane_vc

0x131c,	// (0x00030e39) list_double_time_pane_vc_ParamLimits

0x131c,	// (0x00030e39) list_double_time_pane_vc

0x131c,	// (0x00030e39) list_setting_number_pane_vc_ParamLimits

0x131c,	// (0x00030e39) list_setting_number_pane_vc

0x131c,	// (0x00030e39) list_setting_pane_vc_ParamLimits

0x131c,	// (0x00030e39) list_setting_pane_vc

0x131c,	// (0x00030e39) list_single_graphic_heading_pane_vc_ParamLimits

0x131c,	// (0x00030e39) list_single_graphic_heading_pane_vc

0x131c,	// (0x00030e39) list_single_heading_pane_vc_ParamLimits

0x131c,	// (0x00030e39) list_single_heading_pane_vc

0x131c,	// (0x00030e39) list_single_number_heading_pane_vc_ParamLimits

0x131c,	// (0x00030e39) list_single_number_heading_pane_vc

0x0e8c,	// (0x000309a9) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0e8c,	// (0x000309a9) list_double_graphic_heading_pane_vc_g1

0x0f1a,	// (0x00030a37) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0f1a,	// (0x00030a37) list_double_graphic_heading_pane_vc_g2

0x0f26,	// (0x00030a43) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0f26,	// (0x00030a43) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa22,	// (0x0003f53f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa22,	// (0x0003f53f) list_double_graphic_heading_pane_vc_g

0x142a,	// (0x00030f47) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x142a,	// (0x00030f47) list_double_graphic_heading_pane_vc_t1

0x0f32,	// (0x00030a4f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0f32,	// (0x00030a4f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa29,	// (0x0003f546) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa29,	// (0x0003f546) list_double_graphic_heading_pane_vc_t

0x4c6e,	// (0x0003478b) list_setting_pane_vc_g1_ParamLimits

0x4c6e,	// (0x0003478b) list_setting_pane_vc_g1

0x4c7a,	// (0x00034797) list_setting_pane_vc_g2_ParamLimits

0x4c7a,	// (0x00034797) list_setting_pane_vc_g2

0x0001,

0xf81f,	// (0x0003f33c) list_setting_pane_vc_g_ParamLimits

0xf81f,	// (0x0003f33c) list_setting_pane_vc_g

0x69a7,	// (0x000364c4) list_setting_pane_vc_t1_ParamLimits

0x69a7,	// (0x000364c4) list_setting_pane_vc_t1

0x69bb,	// (0x000364d8) list_setting_pane_vc_t2_ParamLimits

0x69bb,	// (0x000364d8) list_setting_pane_vc_t2

0x0001,

0xfa6c,	// (0x0003f589) list_setting_pane_vc_t_ParamLimits

0xfa6c,	// (0x0003f589) list_setting_pane_vc_t

0x4cde,	// (0x000347fb) set_value_pane_cp_vc_ParamLimits

0x4cde,	// (0x000347fb) set_value_pane_cp_vc

0x0f1a,	// (0x00030a37) list_single_number_heading_pane_vc_g1_ParamLimits

0x0f1a,	// (0x00030a37) list_single_number_heading_pane_vc_g1

0x0f26,	// (0x00030a43) list_single_number_heading_pane_vc_g2_ParamLimits

0x0f26,	// (0x00030a43) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0003f129) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0003f129) list_single_number_heading_pane_vc_g

0x0f32,	// (0x00030a4f) list_single_number_heading_pane_vc_t1_ParamLimits

0x0f32,	// (0x00030a4f) list_single_number_heading_pane_vc_t1

0x143e,	// (0x00030f5b) list_single_number_heading_pane_vc_t2_ParamLimits

0x143e,	// (0x00030f5b) list_single_number_heading_pane_vc_t2

0x1452,	// (0x00030f6f) list_single_number_heading_pane_vc_t3_ParamLimits

0x1452,	// (0x00030f6f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa71,	// (0x0003f58e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0003f58e) list_single_number_heading_pane_vc_t

0x0e8c,	// (0x000309a9) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0e8c,	// (0x000309a9) list_single_graphic_heading_pane_vc_g1

0x0f1a,	// (0x00030a37) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0f1a,	// (0x00030a37) list_single_graphic_heading_pane_vc_g4

0x0f26,	// (0x00030a43) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0f26,	// (0x00030a43) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa22,	// (0x0003f53f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa22,	// (0x0003f53f) list_single_graphic_heading_pane_vc_g

0x0f32,	// (0x00030a4f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0f32,	// (0x00030a4f) list_single_graphic_heading_pane_vc_t1

0x1464,	// (0x00030f81) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x1464,	// (0x00030f81) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa78,	// (0x0003f595) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa78,	// (0x0003f595) list_single_graphic_heading_pane_vc_t

0x0f1a,	// (0x00030a37) list_double2_pane_vc_g1_ParamLimits

0x0f1a,	// (0x00030a37) list_double2_pane_vc_g1

0x0f26,	// (0x00030a43) list_double2_pane_vc_g2_ParamLimits

0x0f26,	// (0x00030a43) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x0003f129) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x0003f129) list_double2_pane_vc_g

0x1478,	// (0x00030f95) list_double2_pane_vc_t1_ParamLimits

0x1478,	// (0x00030f95) list_double2_pane_vc_t1

0x148e,	// (0x00030fab) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x148e,	// (0x00030fab) list_double2_large_graphic_pane_vc_g1

0x149a,	// (0x00030fb7) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x149a,	// (0x00030fb7) list_double2_large_graphic_pane_vc_g2

0x14a6,	// (0x00030fc3) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x14a6,	// (0x00030fc3) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x0003f146) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x0003f146) list_double2_large_graphic_pane_vc_g

0x14b2,	// (0x00030fcf) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x14b2,	// (0x00030fcf) list_double2_large_graphic_pane_vc_t1

0x276e,	// (0x0003228b) list_double_time_pane_vc_g1_ParamLimits

0x276e,	// (0x0003228b) list_double_time_pane_vc_g1

0x277a,	// (0x00032297) list_double_time_pane_vc_g2_ParamLimits

0x277a,	// (0x00032297) list_double_time_pane_vc_g2

0x0001,

0xfa7d,	// (0x0003f59a) list_double_time_pane_vc_g_ParamLimits

0xfa7d,	// (0x0003f59a) list_double_time_pane_vc_g

0x2786,	// (0x000322a3) list_double_time_pane_vc_t1_ParamLimits

0x2786,	// (0x000322a3) list_double_time_pane_vc_t1

0x279f,	// (0x000322bc) list_double_time_pane_vc_t2_ParamLimits

0x279f,	// (0x000322bc) list_double_time_pane_vc_t2

0x27df,	// (0x000322fc) list_double_time_pane_vc_t3_ParamLimits

0x27df,	// (0x000322fc) list_double_time_pane_vc_t3

0x27f7,	// (0x00032314) list_double_time_pane_vc_t4_ParamLimits

0x27f7,	// (0x00032314) list_double_time_pane_vc_t4

0x0003,

0xfa82,	// (0x0003f59f) list_double_time_pane_vc_t_ParamLimits

0xfa82,	// (0x0003f59f) list_double_time_pane_vc_t

0x0f1a,	// (0x00030a37) list_double_pane_vc_g1_ParamLimits

0x0f1a,	// (0x00030a37) list_double_pane_vc_g1

0x0f26,	// (0x00030a43) list_double_pane_vc_g2_ParamLimits

0x0f26,	// (0x00030a43) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x0003f129) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x0003f129) list_double_pane_vc_g

0x280b,	// (0x00032328) list_double_pane_vc_t1_ParamLimits

0x280b,	// (0x00032328) list_double_pane_vc_t1

0x281d,	// (0x0003233a) list_double_pane_vc_t2_ParamLimits

0x281d,	// (0x0003233a) list_double_pane_vc_t2

0x0001,

0xfa8b,	// (0x0003f5a8) list_double_pane_vc_t_ParamLimits

0xfa8b,	// (0x0003f5a8) list_double_pane_vc_t

0x0f1a,	// (0x00030a37) list_double_number_pane_vc_g1_ParamLimits

0x0f1a,	// (0x00030a37) list_double_number_pane_vc_g1

0x0f26,	// (0x00030a43) list_double_number_pane_vc_g2_ParamLimits

0x0f26,	// (0x00030a43) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x0003f129) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x0003f129) list_double_number_pane_vc_g

0x2835,	// (0x00032352) list_double_number_pane_vc_t1_ParamLimits

0x2835,	// (0x00032352) list_double_number_pane_vc_t1

0x2849,	// (0x00032366) list_double_number_pane_vc_t2_ParamLimits

0x2849,	// (0x00032366) list_double_number_pane_vc_t2

0x281d,	// (0x0003233a) list_double_number_pane_vc_t3_ParamLimits

0x281d,	// (0x0003233a) list_double_number_pane_vc_t3

0x0002,

0xfa90,	// (0x0003f5ad) list_double_number_pane_vc_t_ParamLimits

0xfa90,	// (0x0003f5ad) list_double_number_pane_vc_t

0x285b,	// (0x00032378) list_double_large_graphic_pane_vc_g1_ParamLimits

0x285b,	// (0x00032378) list_double_large_graphic_pane_vc_g1

0x2867,	// (0x00032384) list_double_large_graphic_pane_vc_g2_ParamLimits

0x2867,	// (0x00032384) list_double_large_graphic_pane_vc_g2

0x14a6,	// (0x00030fc3) list_double_large_graphic_pane_vc_g3_ParamLimits

0x14a6,	// (0x00030fc3) list_double_large_graphic_pane_vc_g3

0x2876,	// (0x00032393) list_double_large_graphic_pane_vc_g4_ParamLimits

0x2876,	// (0x00032393) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa97,	// (0x0003f5b4) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa97,	// (0x0003f5b4) list_double_large_graphic_pane_vc_g

0x2882,	// (0x0003239f) list_double_large_graphic_pane_vc_t1_ParamLimits

0x2882,	// (0x0003239f) list_double_large_graphic_pane_vc_t1

0x2894,	// (0x000323b1) list_double_large_graphic_pane_vc_t2_ParamLimits

0x2894,	// (0x000323b1) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa0,	// (0x0003f5bd) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa0,	// (0x0003f5bd) list_double_large_graphic_pane_vc_t

0x0f1a,	// (0x00030a37) list_double_heading_pane_vc_g1_ParamLimits

0x0f1a,	// (0x00030a37) list_double_heading_pane_vc_g1

0x0f26,	// (0x00030a43) list_double_heading_pane_vc_g2_ParamLimits

0x0f26,	// (0x00030a43) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0003f129) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0003f129) list_double_heading_pane_vc_g

0x28ad,	// (0x000323ca) list_double_heading_pane_vc_t1_ParamLimits

0x28ad,	// (0x000323ca) list_double_heading_pane_vc_t1

0x0f32,	// (0x00030a4f) list_double_heading_pane_vc_t2_ParamLimits

0x0f32,	// (0x00030a4f) list_double_heading_pane_vc_t2

0x0001,

0xfaa5,	// (0x0003f5c2) list_double_heading_pane_vc_t_ParamLimits

0xfaa5,	// (0x0003f5c2) list_double_heading_pane_vc_t

0x28c1,	// (0x000323de) list_double_graphic_pane_vc_g1_ParamLimits

0x28c1,	// (0x000323de) list_double_graphic_pane_vc_g1

0x28d1,	// (0x000323ee) list_double_graphic_pane_vc_g2_ParamLimits

0x28d1,	// (0x000323ee) list_double_graphic_pane_vc_g2

0x28e0,	// (0x000323fd) list_double_graphic_pane_vc_g3_ParamLimits

0x28e0,	// (0x000323fd) list_double_graphic_pane_vc_g3

0x0002,

0xfaaa,	// (0x0003f5c7) list_double_graphic_pane_vc_g_ParamLimits

0xfaaa,	// (0x0003f5c7) list_double_graphic_pane_vc_g

0x28ec,	// (0x00032409) list_double_graphic_pane_vc_t1_ParamLimits

0x28ec,	// (0x00032409) list_double_graphic_pane_vc_t1

0x281d,	// (0x0003233a) list_double_graphic_pane_vc_t2_ParamLimits

0x281d,	// (0x0003233a) list_double_graphic_pane_vc_t2

0x0001,

0xfab1,	// (0x0003f5ce) list_double_graphic_pane_vc_t_ParamLimits

0xfab1,	// (0x0003f5ce) list_double_graphic_pane_vc_t

0xf304,	// (0x0003ee21) aid_size_cell_fastswap

0xaf57,	// (0x0003aa74) aid_size_cell_touch_ParamLimits

0xaf57,	// (0x0003aa74) aid_size_cell_touch

0xf4f7,	// (0x0003f014) popup_fast_swap_wide_window_ParamLimits

0xf4f7,	// (0x0003f014) popup_fast_swap_wide_window

0xb0a6,	// (0x0003abc3) touch_pane_ParamLimits

0xb0a6,	// (0x0003abc3) touch_pane

0x30e6,	// (0x00032c03) button_value_adjust_pane_cp2

0x30e6,	// (0x00032c03) button_value_adjust_pane_cp4

0x059f,	// (0x000300bc) form_field_data_pane_cp2

0xb627,	// (0x0003b144) form_field_data_wide_pane_cp2

0x357f,	// (0x0003309c) bg_scroll_pane_ParamLimits

0x0978,	// (0x00030495) scroll_handle_pane_ParamLimits

0x098c,	// (0x000304a9) scroll_sc2_down_pane_ParamLimits

0x098c,	// (0x000304a9) scroll_sc2_down_pane

0x35b0,	// (0x000330cd) scroll_sc2_up_pane_ParamLimits

0x35b0,	// (0x000330cd) scroll_sc2_up_pane

0xda59,	// (0x0003d576) grid_wheel_folder_pane_g1_ParamLimits

0xda59,	// (0x0003d576) grid_wheel_folder_pane_g1

0x0be2,	// (0x000306ff) clock_nsta_pane_cp2_ParamLimits

0x0be2,	// (0x000306ff) clock_nsta_pane_cp2

0xc78b,	// (0x0003c2a8) listscroll_midp_pane_ParamLimits

0xc79c,	// (0x0003c2b9) midp_canvas_pane

0x405a,	// (0x00033b77) nsta_clock_indic_pane

0x40b0,	// (0x00033bcd) listscroll_form_pane_vc

0x40cc,	// (0x00033be9) listscroll_set_pane_vc_ParamLimits

0x40cc,	// (0x00033be9) listscroll_set_pane_vc

0xd0ae,	// (0x0003cbcb) clock_nsta_pane

0xd0d8,	// (0x0003cbf5) indicator_nsta_pane

0x4b64,	// (0x00034681) bg_popup_sub_pane_cp2_ParamLimits

0x4b78,	// (0x00034695) find_pane_cp2_ParamLimits

0x4b78,	// (0x00034695) find_pane_cp2

0x4b8e,	// (0x000346ab) grid_toobar_pane_ParamLimits

0x4cec,	// (0x00034809) list_form_gen_pane_vc_ParamLimits

0x4cec,	// (0x00034809) list_form_gen_pane_vc

0x4d02,	// (0x0003481f) scroll_pane_cp8_vc_ParamLimits

0x4d02,	// (0x0003481f) scroll_pane_cp8_vc

0x4d7e,	// (0x0003489b) data_form_wide_pane_vc_ParamLimits

0x4d7e,	// (0x0003489b) data_form_wide_pane_vc

0x4d8a,	// (0x000348a7) form_field_data_wide_pane_vc_g1

0x4d92,	// (0x000348af) form_field_data_wide_pane_vc_t1_ParamLimits

0x4d92,	// (0x000348af) form_field_data_wide_pane_vc_t1

0x30fa,	// (0x00032c17) input_focus_pane_cp6_vc_ParamLimits

0x30fa,	// (0x00032c17) input_focus_pane_cp6_vc

0xd451,	// (0x0003cf6e) list_midp_pane_ParamLimits

0x6400,	// (0x00035f1d) scroll_pane_cp16_ParamLimits

0x6400,	// (0x00035f1d) scroll_pane_cp16

0x50b8,	// (0x00034bd5) button_value_adjust_pane_ParamLimits

0x50b8,	// (0x00034bd5) button_value_adjust_pane

0xd68e,	// (0x0003d1ab) button_value_adjust_pane_cp6_ParamLimits

0xd68e,	// (0x0003d1ab) button_value_adjust_pane_cp6

0xd7d0,	// (0x0003d2ed) settings_code_pane_cp_ParamLimits

0xd7d0,	// (0x0003d2ed) settings_code_pane_cp

0x2200,	// (0x00031d1d) cell_touch_pane_g1

0x2200,	// (0x00031d1d) cell_touch_pane_g2

0x0001,

0xf742,	// (0x0003f25f) cell_touch_pane_g

0xd92e,	// (0x0003d44b) cell_touch_pane_cp_ParamLimits

0xd92e,	// (0x0003d44b) cell_touch_pane_cp

0xd94a,	// (0x0003d467) cell_touch_pane_ParamLimits

0xd94a,	// (0x0003d467) cell_touch_pane

0x2200,	// (0x00031d1d) scroll_sc2_down_pane_g1

0x2200,	// (0x00031d1d) scroll_sc2_up_pane_g1

0x220a,	// (0x00031d27) bg_set_opt_pane_cp4_vc

0x679e,	// (0x000362bb) list_set_graphic_pane_vc_g1_ParamLimits

0x679e,	// (0x000362bb) list_set_graphic_pane_vc_g1

0x67aa,	// (0x000362c7) list_set_graphic_pane_vc_g2_ParamLimits

0x67aa,	// (0x000362c7) list_set_graphic_pane_vc_g2

0x0001,

0xfa2e,	// (0x0003f54b) list_set_graphic_pane_vc_g_ParamLimits

0xfa2e,	// (0x0003f54b) list_set_graphic_pane_vc_g

0x67b6,	// (0x000362d3) text_primary_small_cp13_vc_ParamLimits

0x67b6,	// (0x000362d3) text_primary_small_cp13_vc

0x67ce,	// (0x000362eb) list_set_graphic_pane_vc_ParamLimits

0x67ce,	// (0x000362eb) list_set_graphic_pane_vc

0x220a,	// (0x00031d27) input_focus_pane_cp2_vc

0x2200,	// (0x00031d1d) setting_code_pane_vc_g1

0x67e2,	// (0x000362ff) setting_code_pane_vc_t1

0x67f0,	// (0x0003630d) set_text_pane_vc_t1_ParamLimits

0x67f0,	// (0x0003630d) set_text_pane_vc_t1

0x220a,	// (0x00031d27) input_focus_pane_cp1_vc

0x680e,	// (0x0003632b) list_set_text_pane_vc

0x2200,	// (0x00031d1d) setting_text_pane_vc_g1

0x220a,	// (0x00031d27) bg_set_opt_pane_cp2_vc

0x6818,	// (0x00036335) setting_slider_graphic_pane_vc_g1

0x6820,	// (0x0003633d) setting_slider_graphic_pane_vc_t1

0x682e,	// (0x0003634b) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa33,	// (0x0003f550) setting_slider_graphic_pane_vc_t

0x683c,	// (0x00036359) slider_set_pane_cp_vc

0x6844,	// (0x00036361) slider_set_pane_vc_g1

0x684d,	// (0x0003636a) slider_set_pane_vc_g2

0x0006,

0xfa38,	// (0x0003f555) slider_set_pane_vc_g

0x3161,	// (0x00032c7e) set_opt_bg_pane_g1_copy1

0x3169,	// (0x00032c86) set_opt_bg_pane_g2_copy1

0x6879,	// (0x00036396) set_opt_bg_pane_g3_copy1

0x3179,	// (0x00032c96) set_opt_bg_pane_g4_copy1

0x3181,	// (0x00032c9e) set_opt_bg_pane_g5_copy1

0x3189,	// (0x00032ca6) set_opt_bg_pane_g6_copy1

0x6883,	// (0x000363a0) set_opt_bg_pane_g7_copy1

0x688d,	// (0x000363aa) set_opt_bg_pane_g8_copy1

0x6897,	// (0x000363b4) set_opt_bg_pane_g9_copy1

0x220a,	// (0x00031d27) bg_set_opt_pane_cp_vc

0x68a1,	// (0x000363be) setting_slider_pane_vc_t1

0x6820,	// (0x0003633d) setting_slider_pane_vc_t2

0x682e,	// (0x0003634b) setting_slider_pane_vc_t3

0x0002,

0xfa47,	// (0x0003f564) setting_slider_pane_vc_t

0x683c,	// (0x00036359) slider_set_pane_vc

0x1053,	// (0x00030b70) volume_set_pane_vc_g1

0x105c,	// (0x00030b79) volume_set_pane_vc_g2

0x1065,	// (0x00030b82) volume_set_pane_vc_g3

0x106e,	// (0x00030b8b) volume_set_pane_vc_g4

0x1077,	// (0x00030b94) volume_set_pane_vc_g5

0x1080,	// (0x00030b9d) volume_set_pane_vc_g6

0x1089,	// (0x00030ba6) volume_set_pane_vc_g7

0x1092,	// (0x00030baf) volume_set_pane_vc_g8

0x109b,	// (0x00030bb8) volume_set_pane_vc_g9

0x10a4,	// (0x00030bc1) volume_set_pane_vc_g10

0x0009,

0xfa4e,	// (0x0003f56b) volume_set_pane_vc_g

0x68b0,	// (0x000363cd) volume_set_pane_vc

0x68b8,	// (0x000363d5) button_value_adjust_pane_cp1_vc

0x68c2,	// (0x000363df) list_highlight_pane_cp2_vc

0x68cb,	// (0x000363e8) list_set_pane_vc_ParamLimits

0x68cb,	// (0x000363e8) list_set_pane_vc

0x6935,	// (0x00036452) main_pane_set_vc_t1_ParamLimits

0x6935,	// (0x00036452) main_pane_set_vc_t1

0x694a,	// (0x00036467) main_pane_set_vc_t2_ParamLimits

0x694a,	// (0x00036467) main_pane_set_vc_t2

0x695c,	// (0x00036479) main_pane_set_vc_t3_ParamLimits

0x695c,	// (0x00036479) main_pane_set_vc_t3

0x6970,	// (0x0003648d) main_pane_set_vc_t4_ParamLimits

0x6970,	// (0x0003648d) main_pane_set_vc_t4

0x0003,

0xfa63,	// (0x0003f580) main_pane_set_vc_t_ParamLimits

0xfa63,	// (0x0003f580) main_pane_set_vc_t

0x6984,	// (0x000364a1) setting_code_pane_vc_ParamLimits

0x6984,	// (0x000364a1) setting_code_pane_vc

0x6995,	// (0x000364b2) setting_slider_graphic_pane_vc

0x6995,	// (0x000364b2) setting_slider_pane_vc

0x6995,	// (0x000364b2) setting_text_pane_vc

0x6995,	// (0x000364b2) setting_volume_pane_vc

0x699f,	// (0x000364bc) scroll_pane_cp121_vc

0x30d4,	// (0x00032bf1) set_content_pane_vc

0x69dd,	// (0x000364fa) button_value_adjust_pane_g1

0x69e6,	// (0x00036503) button_value_adjust_pane_g2

0x0001,

0xfab6,	// (0x0003f5d3) button_value_adjust_pane_g

0x69ef,	// (0x0003650c) form_field_slider_wide_pane_vc_t1_ParamLimits

0x69ef,	// (0x0003650c) form_field_slider_wide_pane_vc_t1

0x6a03,	// (0x00036520) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6a03,	// (0x00036520) form_field_slider_wide_pane_vc_t2

0x0001,

0xfabb,	// (0x0003f5d8) form_field_slider_wide_pane_vc_t_ParamLimits

0xfabb,	// (0x0003f5d8) form_field_slider_wide_pane_vc_t

0x2566,	// (0x00032083) input_focus_pane_cp10_vc_ParamLimits

0x2566,	// (0x00032083) input_focus_pane_cp10_vc

0x6a15,	// (0x00036532) slider_cont_pane_cp1_vc_ParamLimits

0x6a15,	// (0x00036532) slider_cont_pane_cp1_vc

0x6844,	// (0x00036361) slider_form_pane_g1_cp2

0x684d,	// (0x0003636a) slider_form_pane_g2_cp2

0x6a2e,	// (0x0003654b) form_field_slider_pane_vc_t3

0x6a3c,	// (0x00036559) form_field_slider_pane_vc_t4

0x6a4a,	// (0x00036567) slider_form_pane_vc_ParamLimits

0x6a4a,	// (0x00036567) slider_form_pane_vc

0x6a57,	// (0x00036574) form_field_slider_pane_vc_t1_ParamLimits

0x6a57,	// (0x00036574) form_field_slider_pane_vc_t1

0x6a03,	// (0x00036520) form_field_slider_pane_vc_t2_ParamLimits

0x6a03,	// (0x00036520) form_field_slider_pane_vc_t2

0x0001,

0xfacb,	// (0x0003f5e8) form_field_slider_pane_vc_t_ParamLimits

0xfacb,	// (0x0003f5e8) form_field_slider_pane_vc_t

0x2566,	// (0x00032083) input_focus_pane_cp9_vc_ParamLimits

0x2566,	// (0x00032083) input_focus_pane_cp9_vc

0x6a73,	// (0x00036590) slider_cont_pane_vc_ParamLimits

0x6a73,	// (0x00036590) slider_cont_pane_vc

0x6a85,	// (0x000365a2) list_form_graphic_pane_cp_vc_ParamLimits

0x6a85,	// (0x000365a2) list_form_graphic_pane_cp_vc

0x4d8a,	// (0x000348a7) form_field_popup_wide_pane_vc_g1

0x6a9a,	// (0x000365b7) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6a9a,	// (0x000365b7) form_field_popup_wide_pane_vc_t1

0x30fa,	// (0x00032c17) input_focus_pane_cp8_vc_ParamLimits

0x30fa,	// (0x00032c17) input_focus_pane_cp8_vc

0x6ab1,	// (0x000365ce) list_form_wide_pane_vc_ParamLimits

0x6ab1,	// (0x000365ce) list_form_wide_pane_vc

0x6abd,	// (0x000365da) list_form_graphic_pane_vc_g1

0x6ac5,	// (0x000365e2) list_form_graphic_pane_vc_t1_ParamLimits

0x6ac5,	// (0x000365e2) list_form_graphic_pane_vc_t1

0x22ea,	// (0x00031e07) list_highlight_pane_cp5_vc_ParamLimits

0x22ea,	// (0x00031e07) list_highlight_pane_cp5_vc

0x6ae1,	// (0x000365fe) list_form_graphic_pane_vc_ParamLimits

0x6ae1,	// (0x000365fe) list_form_graphic_pane_vc

0x4d8a,	// (0x000348a7) form_field_popup_pane_vc_g1

0x6af7,	// (0x00036614) form_field_popup_pane_vc_t1_ParamLimits

0x6af7,	// (0x00036614) form_field_popup_pane_vc_t1

0x30fa,	// (0x00032c17) input_focus_pane_cp7_vc_ParamLimits

0x30fa,	// (0x00032c17) input_focus_pane_cp7_vc

0x6b0e,	// (0x0003662b) list_form_pane_vc_ParamLimits

0x6b0e,	// (0x0003662b) list_form_pane_vc

0x6b1a,	// (0x00036637) data_form_pane_vc_t1_ParamLimits

0x6b1a,	// (0x00036637) data_form_pane_vc_t1

0x3161,	// (0x00032c7e) input_focus_pane_vc_g1

0x3169,	// (0x00032c86) input_focus_pane_vc_g2

0x3171,	// (0x00032c8e) input_focus_pane_vc_g3

0x3179,	// (0x00032c96) input_focus_pane_vc_g4

0x3181,	// (0x00032c9e) input_focus_pane_vc_g5

0x3189,	// (0x00032ca6) input_focus_pane_vc_g6

0x3191,	// (0x00032cae) input_focus_pane_vc_g7

0x3199,	// (0x00032cb6) input_focus_pane_vc_g8

0x31a1,	// (0x00032cbe) input_focus_pane_vc_g9

0x2200,	// (0x00031d1d) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x0003f1e8) input_focus_pane_vc_g

0x4d7e,	// (0x0003489b) data_form_pane_vc_ParamLimits

0x4d7e,	// (0x0003489b) data_form_pane_vc

0x4d8a,	// (0x000348a7) form_field_data_pane_vc_g1

0x6b37,	// (0x00036654) form_field_data_pane_vc_t1_ParamLimits

0x6b37,	// (0x00036654) form_field_data_pane_vc_t1

0x30fa,	// (0x00032c17) input_focus_pane_vc_ParamLimits

0x30fa,	// (0x00032c17) input_focus_pane_vc

0x6b51,	// (0x0003666e) button_value_adjust_pane_cp3_vc

0x6b59,	// (0x00036676) button_value_adjust_pane_cp5_vc

0x6b61,	// (0x0003667e) form_field_data_pane_vc_ParamLimits

0x6b61,	// (0x0003667e) form_field_data_pane_vc

0x6b7c,	// (0x00036699) form_field_data_pane_vc_cp2

0x6b84,	// (0x000366a1) form_field_data_wide_pane_vc_ParamLimits

0x6b84,	// (0x000366a1) form_field_data_wide_pane_vc

0x6b9e,	// (0x000366bb) form_field_data_wide_pane_vc_cp2

0x6ba6,	// (0x000366c3) form_field_popup_pane_vc_ParamLimits

0x6ba6,	// (0x000366c3) form_field_popup_pane_vc

0x6bc1,	// (0x000366de) form_field_popup_wide_pane_vc_ParamLimits

0x6bc1,	// (0x000366de) form_field_popup_wide_pane_vc

0x6bdb,	// (0x000366f8) form_field_slider_pane_vc_ParamLimits

0x6bdb,	// (0x000366f8) form_field_slider_pane_vc

0x6bee,	// (0x0003670b) form_field_slider_wide_pane_vc_ParamLimits

0x6bee,	// (0x0003670b) form_field_slider_wide_pane_vc

0xd968,	// (0x0003d485) grid_touch_1_pane_ParamLimits

0xd968,	// (0x0003d485) grid_touch_1_pane

0xd97c,	// (0x0003d499) grid_touch_2_pane_ParamLimits

0xd97c,	// (0x0003d499) grid_touch_2_pane

0x6cc5,	// (0x000367e2) touch_pane_g1_ParamLimits

0x6cc5,	// (0x000367e2) touch_pane_g1

0x6c27,	// (0x00036744) cell_app_pane_cp_wide_ParamLimits

0x6c27,	// (0x00036744) cell_app_pane_cp_wide

0x6c38,	// (0x00036755) grid_popup_fast_wide_pane_ParamLimits

0x6c38,	// (0x00036755) grid_popup_fast_wide_pane

0x6c4c,	// (0x00036769) scroll_pane_cp19_ParamLimits

0x6c4c,	// (0x00036769) scroll_pane_cp19

0x220a,	// (0x00031d27) bg_popup_window_pane_cp20

0x6c60,	// (0x0003677d) listscroll_popup_fast_wide_pane

0x32d0,	// (0x00032ded) grid_indicator_nsta_pane

0x6c68,	// (0x00036785) clock_nsta_pane_g1

0x6c71,	// (0x0003678e) clock_nsta_pane_t1

0xd9a8,	// (0x0003d4c5) cell_indicator_nsta_pane_ParamLimits

0xd9a8,	// (0x0003d4c5) cell_indicator_nsta_pane

0x6cc5,	// (0x000367e2) cell_indicator_nsta_pane_g1

0xd9c5,	// (0x0003d4e2) cell_indicator_nsta_pane_g2

0x0001,

0xfad5,	// (0x0003f5f2) cell_indicator_nsta_pane_g

0x6ce8,	// (0x00036805) clock_nsta_pane_cp

0x6cf0,	// (0x0003680d) indicator_nsta_pane_cp

0x6cf8,	// (0x00036815) nsta_clock_indic_pane_g1

0x23b6,	// (0x00031ed3) grid_indicator_pane

0x36a2,	// (0x000331bf) scroll_pane_cp29

0x0b2e,	// (0x0003064b) indicator_nsta_pane_cp2_ParamLimits

0x0b2e,	// (0x0003064b) indicator_nsta_pane_cp2

0x22ea,	// (0x00031e07) main_apps_wheel_pane

0x4f49,	// (0x00034a66) form_midp_field_text_pane_ParamLimits

0x5098,	// (0x00034bb5) scroll_bar_cp050_ParamLimits

0x6d30,	// (0x0003684d) cell_indicator_pane_ParamLimits

0x6d30,	// (0x0003684d) cell_indicator_pane

0x6d48,	// (0x00036865) cell_indicator_pane_g1

0xd9db,	// (0x0003d4f8) grid_wheel_folder_pane_ParamLimits

0xd9db,	// (0x0003d4f8) grid_wheel_folder_pane

0xd9e9,	// (0x0003d506) list_wheel_apps_pane_ParamLimits

0xd9e9,	// (0x0003d506) list_wheel_apps_pane

0xd9f7,	// (0x0003d514) main_apps_wheel_pane_g1_ParamLimits

0xd9f7,	// (0x0003d514) main_apps_wheel_pane_g1

0xda07,	// (0x0003d524) main_apps_wheel_pane_g2_ParamLimits

0xda07,	// (0x0003d524) main_apps_wheel_pane_g2

0x0001,

0xfae4,	// (0x0003f601) main_apps_wheel_pane_g_ParamLimits

0xfae4,	// (0x0003f601) main_apps_wheel_pane_g

0xda17,	// (0x0003d534) main_apps_wheel_pane_t1_ParamLimits

0xda17,	// (0x0003d534) main_apps_wheel_pane_t1

0xda2f,	// (0x0003d54c) list_wheel_apps_pane_g1

0xda37,	// (0x0003d554) list_wheel_apps_pane_g2

0xda3f,	// (0x0003d55c) list_wheel_apps_pane_g3

0xda47,	// (0x0003d564) list_wheel_apps_pane_g4

0xda4f,	// (0x0003d56c) list_wheel_apps_pane_g5

0x0004,

0xfae9,	// (0x0003f606) list_wheel_apps_pane_g

0x3bd4,	// (0x000336f1) navi_icon_text_pane

0xcfa7,	// (0x0003cac4) aid_fill_nsta

0xda6c,	// (0x0003d589) navi_icon_text_pane_g1

0xda78,	// (0x0003d595) navi_icon_text_pane_t1

0xc773,	// (0x0003c290) list_set_graphic_pane_t1_ParamLimits

0xc773,	// (0x0003c290) list_set_graphic_pane_t1

0x57b8,	// (0x000352d5) popup_midp_note_alarm_window_t6_ParamLimits

0x57b8,	// (0x000352d5) popup_midp_note_alarm_window_t6

0x57ca,	// (0x000352e7) popup_midp_note_alarm_window_t7_ParamLimits

0x57ca,	// (0x000352e7) popup_midp_note_alarm_window_t7

0x57dc,	// (0x000352f9) popup_midp_note_alarm_window_t8_ParamLimits

0x57dc,	// (0x000352f9) popup_midp_note_alarm_window_t8

0x57ee,	// (0x0003530b) popup_midp_note_alarm_window_t9_ParamLimits

0x57ee,	// (0x0003530b) popup_midp_note_alarm_window_t9

0x5800,	// (0x0003531d) popup_midp_note_alarm_window_t10_ParamLimits

0x5800,	// (0x0003531d) popup_midp_note_alarm_window_t10

0x5812,	// (0x0003532f) popup_midp_note_alarm_window_t11_ParamLimits

0x5812,	// (0x0003532f) popup_midp_note_alarm_window_t11

0x5824,	// (0x00035341) scroll_pane_cp17_ParamLimits

0x5824,	// (0x00035341) scroll_pane_cp17

0x1053,	// (0x00030b70) volume_small_pane_cp_g1

0x14c8,	// (0x00030fe5) volume_small_pane_cp_g2

0x14d1,	// (0x00030fee) volume_small_pane_cp_g3

0x14da,	// (0x00030ff7) volume_small_pane_cp_g4

0x14e3,	// (0x00031000) volume_small_pane_cp_g5

0x14ec,	// (0x00031009) volume_small_pane_cp_g6

0x14f5,	// (0x00031012) volume_small_pane_cp_g7

0x14fe,	// (0x0003101b) volume_small_pane_cp_g8

0x1507,	// (0x00031024) volume_small_pane_cp_g9

0x1510,	// (0x0003102d) volume_small_pane_cp_g10

0x3e35,	// (0x00033952) midp_ticker_pane_g1_ParamLimits

0x3e41,	// (0x0003395e) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x0003f2b0) midp_ticker_pane_g_ParamLimits

0xc833,	// (0x0003c350) midp_ticker_pane_t1_ParamLimits

0xcfc7,	// (0x0003cae4) aid_fill_nsta_2

0x5084,	// (0x00034ba1) list_form2_midp_pane

0x61e1,	// (0x00035cfe) midp_editing_number_pane_ParamLimits

0x61f0,	// (0x00035d0d) midp_ticker_pane_ParamLimits

0x6e41,	// (0x0003695e) form2_midp_field_pane

0x6e65,	// (0x00036982) scroll_pane_cp51

0x6e85,	// (0x000369a2) form2_midp_button_pane_ParamLimits

0x6e85,	// (0x000369a2) form2_midp_button_pane

0x6e97,	// (0x000369b4) form2_midp_content_pane_ParamLimits

0x6e97,	// (0x000369b4) form2_midp_content_pane

0x6eb1,	// (0x000369ce) form2_midp_field_choice_group_pane

0x6eb9,	// (0x000369d6) form2_midp_field_pane_g1

0x6ec1,	// (0x000369de) form2_midp_field_pane_g2

0x6ec9,	// (0x000369e6) form2_midp_field_pane_g3

0x6ed1,	// (0x000369ee) form2_midp_field_pane_g4

0x0003,

0xfb0e,	// (0x0003f62b) form2_midp_field_pane_g

0x6ed9,	// (0x000369f6) form2_midp_gauge_slider_pane

0x6ee1,	// (0x000369fe) form2_midp_gauge_wait_pane

0x6ee9,	// (0x00036a06) form2_midp_image_pane_ParamLimits

0x6ee9,	// (0x00036a06) form2_midp_image_pane

0x6f04,	// (0x00036a21) form2_midp_label_pane_ParamLimits

0x6f04,	// (0x00036a21) form2_midp_label_pane

0xdaa6,	// (0x0003d5c3) form2_midp_label_pane_cp_ParamLimits

0xdaa6,	// (0x0003d5c3) form2_midp_label_pane_cp

0x6f44,	// (0x00036a61) form2_midp_string_pane_ParamLimits

0x6f44,	// (0x00036a61) form2_midp_string_pane

0x28fe,	// (0x0003241b) form2_midp_text_pane_ParamLimits

0x28fe,	// (0x0003241b) form2_midp_text_pane

0x6f56,	// (0x00036a73) form2_midp_time_pane

0x6f66,	// (0x00036a83) input_focus_pane_cp51_ParamLimits

0x6f66,	// (0x00036a83) input_focus_pane_cp51

0x6f7e,	// (0x00036a9b) form2_midp_label_pane_t1_ParamLimits

0x6f7e,	// (0x00036a9b) form2_midp_label_pane_t1

0x291f,	// (0x0003243c) form2_mdip_text_pane_t1_ParamLimits

0x291f,	// (0x0003243c) form2_mdip_text_pane_t1

0x2943,	// (0x00032460) form2_midp_time_pane_t1

0x6fcc,	// (0x00036ae9) form2_midp_gauge_slider_pane_t1

0xdac7,	// (0x0003d5e4) form2_midp_gauge_slider_pane_t2

0xdad9,	// (0x0003d5f6) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb17,	// (0x0003f634) form2_midp_gauge_slider_pane_t

0x7002,	// (0x00036b1f) form2_midp_slider_pane

0x700e,	// (0x00036b2b) form2_midp_gauge_wait_pane_t1

0x701c,	// (0x00036b39) form2_midp_wait_pane_ParamLimits

0x701c,	// (0x00036b39) form2_midp_wait_pane

0xd3e0,	// (0x0003cefd) list_single_2graphic_pane_cp4_ParamLimits

0xd3e0,	// (0x0003cefd) list_single_2graphic_pane_cp4

0xdaeb,	// (0x0003d608) list_single_midp_graphic_pane_cp_ParamLimits

0xdaeb,	// (0x0003d608) list_single_midp_graphic_pane_cp

0x220a,	// (0x00031d27) list_highlight_pane_cp20

0x706b,	// (0x00036b88) list_single_2graphic_pane_g1_cp4

0x6680,	// (0x0003619d) list_single_2graphic_pane_g2_cp4

0x7073,	// (0x00036b90) list_single_2graphic_pane_t1_cp4

0x22ea,	// (0x00031e07) list_highlight_pane_cp21

0x7082,	// (0x00036b9f) list_single_midp_graphic_pane_g4_cp

0x7091,	// (0x00036bae) list_single_midp_graphic_pane_t1_cp

0xdb0c,	// (0x0003d629) form2_mdip_string_pane_t1_ParamLimits

0xdb0c,	// (0x0003d629) form2_mdip_string_pane_t1

0x220a,	// (0x00031d27) bg_wml_button_pane_cp2

0x2200,	// (0x00031d1d) form2_midp_image_pane_g1

0x0322,	// (0x0002fe3f) list_double_large_graphic_pane_g5_ParamLimits

0x0322,	// (0x0002fe3f) list_double_large_graphic_pane_g5

0xc78b,	// (0x0003c2a8) midp_form_pane_ParamLimits

0x22ea,	// (0x00031e07) main_apps_wheel_pane_ParamLimits

0xccbf,	// (0x0003c7dc) popup_preview_window_ParamLimits

0xccbf,	// (0x0003c7dc) popup_preview_window

0x46ae,	// (0x000341cb) popup_touch_info_window_ParamLimits

0x46ae,	// (0x000341cb) popup_touch_info_window

0x46d0,	// (0x000341ed) popup_touch_menu_window_ParamLimits

0x46d0,	// (0x000341ed) popup_touch_menu_window

0x21f6,	// (0x00031d13) bg_popup_sub_pane_cp6

0x718d,	// (0x00036caa) list_touch_menu_pane

0x7195,	// (0x00036cb2) list_single_touch_menu_pane_ParamLimits

0x7195,	// (0x00036cb2) list_single_touch_menu_pane

0x71b0,	// (0x00036ccd) list_single_touch_menu_pane_t1

0x22ea,	// (0x00031e07) bg_popup_sub_pane_cp7_ParamLimits

0x22ea,	// (0x00031e07) bg_popup_sub_pane_cp7

0x71be,	// (0x00036cdb) heading_sub_pane

0x71c6,	// (0x00036ce3) list_touch_info_pane_ParamLimits

0x71c6,	// (0x00036ce3) list_touch_info_pane

0x71d5,	// (0x00036cf2) list_single_touch_info_pane_ParamLimits

0x71d5,	// (0x00036cf2) list_single_touch_info_pane

0x71e7,	// (0x00036d04) list_single_touch_info_pane_t1

0x71f5,	// (0x00036d12) list_single_touch_info_pane_t2

0x0001,

0xfb25,	// (0x0003f642) list_single_touch_info_pane_t

0x3d58,	// (0x00033875) bg_popup_heading_pane_cp

0x7203,	// (0x00036d20) heading_sub_pane_t1

0x4d18,	// (0x00034835) bg_popup_preview_window_pane_cp_ParamLimits

0x4d18,	// (0x00034835) bg_popup_preview_window_pane_cp

0x71be,	// (0x00036cdb) heading_preview_pane

0x71c6,	// (0x00036ce3) list_preview_pane_ParamLimits

0x71c6,	// (0x00036ce3) list_preview_pane

0x7211,	// (0x00036d2e) popup_preview_window_g1

0x71d5,	// (0x00036cf2) list_single_preview_pane_ParamLimits

0x71d5,	// (0x00036cf2) list_single_preview_pane

0x7219,	// (0x00036d36) list_single_preview_pane_g1

0x7221,	// (0x00036d3e) list_single_preview_pane_t1

0x71e7,	// (0x00036d04) list_single_preview_pane_t2

0x0001,

0xfb2a,	// (0x0003f647) list_single_preview_pane_t

0x722f,	// (0x00036d4c) bg_popup_heading_pane_cp2_ParamLimits

0x722f,	// (0x00036d4c) bg_popup_heading_pane_cp2

0x7245,	// (0x00036d62) heading_preview_pane_g1

0x724d,	// (0x00036d6a) heading_preview_pane_t1_ParamLimits

0x724d,	// (0x00036d6a) heading_preview_pane_t1

0x23d9,	// (0x00031ef6) soft_indicator_pane_t1_ParamLimits

0x306d,	// (0x00032b8a) scroll_pane_ParamLimits

0x359e,	// (0x000330bb) scroll_sc2_left_pane

0x35a7,	// (0x000330c4) scroll_sc2_right_pane

0x35c6,	// (0x000330e3) scroll_bg_pane_g1_ParamLimits

0x35db,	// (0x000330f8) scroll_bg_pane_g2_ParamLimits

0x35f3,	// (0x00033110) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x0003f23f) scroll_bg_pane_g_ParamLimits

0x35c6,	// (0x000330e3) scroll_handle_pane_g1_ParamLimits

0x3615,	// (0x00033132) scroll_handle_pane_g2_ParamLimits

0x35f3,	// (0x00033110) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x0003f246) scroll_handle_pane_g_ParamLimits

0x4106,	// (0x00033c23) popup_choice_list_window_ParamLimits

0x4106,	// (0x00033c23) popup_choice_list_window

0x4b70,	// (0x0003468d) choice_list_pane

0x4bf2,	// (0x0003470f) cell_toolbar_pane_t1

0x4c1a,	// (0x00034737) toolbar_button_pane_ParamLimits

0x5cf4,	// (0x00035811) ai_gene_pane_1_t2_ParamLimits

0x5cf4,	// (0x00035811) ai_gene_pane_1_t2

0x0001,

0xf941,	// (0x0003f45e) ai_gene_pane_1_t_ParamLimits

0xf941,	// (0x0003f45e) ai_gene_pane_1_t

0x726a,	// (0x00036d87) scroll_sc2_left_pane_g1

0x726a,	// (0x00036d87) scroll_sc2_right_pane_g1

0x40de,	// (0x00033bfb) bg_popup_sub_pane_cp10

0x7274,	// (0x00036d91) list_choice_list_pane

0x728b,	// (0x00036da8) list_single_choice_list_pane_ParamLimits

0x728b,	// (0x00036da8) list_single_choice_list_pane

0x729f,	// (0x00036dbc) list_single_choice_list_pane_g1

0x72a7,	// (0x00036dc4) list_single_choice_list_pane_t1_ParamLimits

0x72a7,	// (0x00036dc4) list_single_choice_list_pane_t1

0x72bc,	// (0x00036dd9) choice_list_pane_g1

0x72c4,	// (0x00036de1) choice_list_pane_t1

0x21f6,	// (0x00031d13) input_focus_pane_cp11

0x3478,	// (0x00032f95) title_pane_stacon_g2_ParamLimits

0x3478,	// (0x00032f95) title_pane_stacon_g2

0x0002,

0xf708,	// (0x0003f225) title_pane_stacon_g_ParamLimits

0xf708,	// (0x0003f225) title_pane_stacon_g

0x3d58,	// (0x00033875) cursor_press_pane

0xc940,	// (0x0003c45d) popup_fep_hwr_window_ParamLimits

0xc940,	// (0x0003c45d) popup_fep_hwr_window

0x4246,	// (0x00033d63) popup_fep_vkb_window_ParamLimits

0x4246,	// (0x00033d63) popup_fep_vkb_window

0x72d2,	// (0x00036def) cursor_press_pane_g1

0x0002,

0xfb53,	// (0x0003f670) fep_vkb_side_pane_g_ParamLimits

0x1552,	// (0x0003106f) fep_hwr_candidate_pane_ParamLimits

0x1552,	// (0x0003106f) fep_hwr_candidate_pane

0x157c,	// (0x00031099) fep_hwr_side_pane_ParamLimits

0x157c,	// (0x00031099) fep_hwr_side_pane

0x159e,	// (0x000310bb) fep_hwr_top_pane_ParamLimits

0x159e,	// (0x000310bb) fep_hwr_top_pane

0x15b6,	// (0x000310d3) fep_hwr_write_pane_ParamLimits

0x15b6,	// (0x000310d3) fep_hwr_write_pane

0xfb53,	// (0x0003f670) fep_vkb_side_pane_g

0x72da,	// (0x00036df7) fep_hwr_top_pane_g1

0x72ec,	// (0x00036e09) fep_hwr_top_pane_g2

0x15f0,	// (0x0003110d) fep_hwr_top_pane_g3

0x0002,

0xfb2f,	// (0x0003f64c) fep_hwr_top_pane_g

0x1605,	// (0x00031122) fep_hwr_top_text_pane

0x376a,	// (0x00033287) fep_hwr_top_text_pane_g1

0x7322,	// (0x00036e3f) fep_hwr_top_text_pane_t1

0x170f,	// (0x0003122c) fep_hwr_candidate_pane_g1

0x756d,	// (0x0003708a) fep_vkb_keypad_pane_g3_ParamLimits

0x756d,	// (0x0003708a) fep_vkb_keypad_pane_g3

0x7599,	// (0x000370b6) fep_vkb_keypad_pane_g4_ParamLimits

0x7599,	// (0x000370b6) fep_vkb_keypad_pane_g4

0x7610,	// (0x0003712d) fep_vkb_bottom_pane_g2_ParamLimits

0x7610,	// (0x0003712d) fep_vkb_bottom_pane_g2

0x0001,

0xfb5a,	// (0x0003f677) fep_vkb_bottom_pane_g_ParamLimits

0xfb5a,	// (0x0003f677) fep_vkb_bottom_pane_g

0x726a,	// (0x00036d87) cell_vkb_side_pane_g2

0x0001,

0xfb64,	// (0x0003f681) cell_vkb_side_pane_g

0x769b,	// (0x000371b8) cell_vkb_side_pane_t1

0x76a9,	// (0x000371c6) cell_vkb_side_pane_t1_copy1

0x726a,	// (0x00036d87) bg_fep_vkb_candidate_pane_g2

0x77ed,	// (0x0003730a) cell_vkb_candidate_pane_ParamLimits

0x7330,	// (0x00036e4d) aid_size_cell_vkb_ParamLimits

0x7330,	// (0x00036e4d) aid_size_cell_vkb

0x77ed,	// (0x0003730a) cell_vkb_candidate_pane

0x1736,	// (0x00031253) bg_popup_fep_shadow_pane_g1

0xdba8,	// (0x0003d6c5) fep_vkb_bottom_pane_ParamLimits

0xdba8,	// (0x0003d6c5) fep_vkb_bottom_pane

0x73ff,	// (0x00036f1c) fep_vkb_candidate_pane_ParamLimits

0x73ff,	// (0x00036f1c) fep_vkb_candidate_pane

0xdbd4,	// (0x0003d6f1) fep_vkb_keypad_pane_ParamLimits

0xdbd4,	// (0x0003d6f1) fep_vkb_keypad_pane

0xdbfb,	// (0x0003d718) fep_vkb_side_pane_ParamLimits

0xdbfb,	// (0x0003d718) fep_vkb_side_pane

0xdc37,	// (0x0003d754) fep_vkb_top_pane_ParamLimits

0xdc37,	// (0x0003d754) fep_vkb_top_pane

0x74c6,	// (0x00036fe3) fep_vkb_top_pane_g1_ParamLimits

0x74c6,	// (0x00036fe3) fep_vkb_top_pane_g1

0x74d5,	// (0x00036ff2) fep_vkb_top_pane_g2_ParamLimits

0x74d5,	// (0x00036ff2) fep_vkb_top_pane_g2

0x74e4,	// (0x00037001) fep_vkb_top_pane_g3_ParamLimits

0x74e4,	// (0x00037001) fep_vkb_top_pane_g3

0x0003,

0xfb4a,	// (0x0003f667) fep_vkb_top_pane_g_ParamLimits

0xfb4a,	// (0x0003f667) fep_vkb_top_pane_g

0x7502,	// (0x0003701f) fep_vkb_top_text_pane_ParamLimits

0x7502,	// (0x0003701f) fep_vkb_top_text_pane

0xdc73,	// (0x0003d790) fep_vkb_side_pane_g1_ParamLimits

0xdc73,	// (0x0003d790) fep_vkb_side_pane_g1

0x755c,	// (0x00037079) grid_vkb_side_pane_ParamLimits

0x755c,	// (0x00037079) grid_vkb_side_pane

0x173e,	// (0x0003125b) bg_popup_fep_shadow_pane_g2

0x1747,	// (0x00031264) bg_popup_fep_shadow_pane_g3

0x174f,	// (0x0003126c) bg_popup_fep_shadow_pane_g4

0x1758,	// (0x00031275) bg_popup_fep_shadow_pane_g5

0x1762,	// (0x0003127f) bg_popup_fep_shadow_pane_g6

0x176a,	// (0x00031287) bg_popup_fep_shadow_pane_g7

0x3179,	// (0x00032c96) bg_popup_fep_shadow_pane_g8

0x75bb,	// (0x000370d8) grid_vkb_keypad_number_pane_ParamLimits

0x75bb,	// (0x000370d8) grid_vkb_keypad_number_pane

0x75cf,	// (0x000370ec) grid_vkb_keypad_pane_ParamLimits

0x75cf,	// (0x000370ec) grid_vkb_keypad_pane

0x75f5,	// (0x00037112) fep_vkb_bottom_pane_g1_ParamLimits

0x75f5,	// (0x00037112) fep_vkb_bottom_pane_g1

0x761e,	// (0x0003713b) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x761e,	// (0x0003713b) grid_vkb_keypad_bottom_left_pane

0x7633,	// (0x00037150) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7633,	// (0x00037150) grid_vkb_keypad_bottom_right_pane

0x7648,	// (0x00037165) fep_vkb_top_text_pane_g1

0xdcba,	// (0x0003d7d7) fep_vkb_top_text_pane_t1

0xdccc,	// (0x0003d7e9) cell_vkb_side_pane_ParamLimits

0xdccc,	// (0x0003d7e9) cell_vkb_side_pane

0x726a,	// (0x00036d87) cell_vkb_side_pane_g1

0x76b7,	// (0x000371d4) cell_vkb_keypad_pane_ParamLimits

0x76b7,	// (0x000371d4) cell_vkb_keypad_pane

0x7744,	// (0x00037261) cell_vkb_keypad_pane_g1

0x0008,

0xfb77,	// (0x0003f694) bg_popup_fep_shadow_pane_g

0x177c,	// (0x00031299) cell_hwr_side_pane_g1

0x177c,	// (0x00031299) cell_hwr_side_pane_g2

0x774e,	// (0x0003726b) cell_vkb_keypad_pane_t1

0xdce2,	// (0x0003d7ff) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdce2,	// (0x0003d7ff) cell_vkb_keypad_bottom_left_pane

0xdcf7,	// (0x0003d814) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdcf7,	// (0x0003d814) cell_vkb_keypad_bottom_right_pane

0x726a,	// (0x00036d87) cell_vkb_keypad_bottom_left_pane_g1

0x726a,	// (0x00036d87) cell_vkb_keypad_bottom_right_pane_g1

0x77b2,	// (0x000372cf) cell_vkb_keypad_number_pane_ParamLimits

0x77b2,	// (0x000372cf) cell_vkb_keypad_number_pane

0x77d1,	// (0x000372ee) cell_vkb_keypad_number_pane_g1

0x77db,	// (0x000372f8) cell_vkb_keypad_number_pane_g2

0x77e4,	// (0x00037301) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb69,	// (0x0003f686) cell_vkb_keypad_number_pane_g

0x774e,	// (0x0003726b) cell_vkb_keypad_number_pane_t1

0x780e,	// (0x0003732b) fep_vkb_candidate_pane_g1

0x0001,

0xfb8a,	// (0x0003f6a7) cell_hwr_side_pane_g

0x7827,	// (0x00037344) cell_hwr_side_pane_t1

0x1786,	// (0x000312a3) cell_hwr_side_pane_t1_copy1

0x1794,	// (0x000312b1) cell_hwr_candidate_pane_g1

0x17c3,	// (0x000312e0) cell_hwr_candidate_pane_t1

0x726a,	// (0x00036d87) cell_vkb_candidate_pane_g2

0x786b,	// (0x00037388) cell_vkb_candidate_pane_t1

0x1519,	// (0x00031036) bg_popup_fep_shadow_pane_ParamLimits

0x1519,	// (0x00031036) bg_popup_fep_shadow_pane

0x15d0,	// (0x000310ed) bg_fep_hwr_top_pane_g4

0x72fe,	// (0x00036e1b) bg_hwr_side_pane_g1_ParamLimits

0x72fe,	// (0x00036e1b) bg_hwr_side_pane_g1

0xbbca,	// (0x0003b6e7) cell_hwr_side_pane_ParamLimits

0xbbca,	// (0x0003b6e7) cell_hwr_side_pane

0x1680,	// (0x0003119d) fep_hwr_write_pane_g1_ParamLimits

0x1680,	// (0x0003119d) fep_hwr_write_pane_g1

0x168d,	// (0x000311aa) fep_hwr_write_pane_g2_ParamLimits

0x168d,	// (0x000311aa) fep_hwr_write_pane_g2

0x169a,	// (0x000311b7) fep_hwr_write_pane_g3_ParamLimits

0x169a,	// (0x000311b7) fep_hwr_write_pane_g3

0xbbea,	// (0x0003b707) fep_hwr_write_pane_g4_ParamLimits

0xbbea,	// (0x0003b707) fep_hwr_write_pane_g4

0x0005,

0xfb36,	// (0x0003f653) fep_hwr_write_pane_g_ParamLimits

0xfb36,	// (0x0003f653) fep_hwr_write_pane_g

0x15d0,	// (0x000310ed) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x15d0,	// (0x000310ed) bg_fep_hwr_candidate_pane_g2

0x16bd,	// (0x000311da) cell_hwr_candidate_pane_ParamLimits

0x16bd,	// (0x000311da) cell_hwr_candidate_pane

0x170f,	// (0x0003122c) fep_hwr_candidate_pane_g1_ParamLimits

0x735e,	// (0x00036e7b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x735e,	// (0x00036e7b) bg_popup_fep_shadow_pane_cp2

0x74f4,	// (0x00037011) fep_vkb_top_pane_g4_ParamLimits

0x74f4,	// (0x00037011) fep_vkb_top_pane_g4

0x753a,	// (0x00037057) fep_vkb_side_pane_g2_ParamLimits

0x753a,	// (0x00037057) fep_vkb_side_pane_g2

0xb52b,	// (0x0003b048) list_setting_pane_t4_ParamLimits

0xb52b,	// (0x0003b048) list_setting_pane_t4

0xb5c7,	// (0x0003b0e4) list_setting_number_pane_t5_ParamLimits

0xb5c7,	// (0x0003b0e4) list_setting_number_pane_t5

0x379c,	// (0x000332b9) list_double_heading_pane_cp2_ParamLimits

0x379c,	// (0x000332b9) list_double_heading_pane_cp2

0x3114,	// (0x00032c31) list_double_heading_pane_g1_cp2_ParamLimits

0x3114,	// (0x00032c31) list_double_heading_pane_g1_cp2

0x3120,	// (0x00032c3d) list_double_heading_pane_g2_cp2_ParamLimits

0x3120,	// (0x00032c3d) list_double_heading_pane_g2_cp2

0x7879,	// (0x00037396) list_double_heading_pane_t1_cp2_ParamLimits

0x7879,	// (0x00037396) list_double_heading_pane_t1_cp2

0x788f,	// (0x000373ac) list_double_heading_pane_t2_cp2_ParamLimits

0x788f,	// (0x000373ac) list_double_heading_pane_t2_cp2

0x21de,	// (0x00031cfb) aid_value_unit2

0xf51b,	// (0x0003f038) popup_preview_fixed_window

0x2574,	// (0x00032091) bg_popup_preview_window_pane_cp02

0x78a1,	// (0x000373be) list_preview_fixed_pane

0x78e7,	// (0x00037404) list_empty_pane_fp_ParamLimits

0x78e7,	// (0x00037404) list_empty_pane_fp

0x78e7,	// (0x00037404) list_single_cale_day_pane_fp_ParamLimits

0x78e7,	// (0x00037404) list_single_cale_day_pane_fp

0x78e7,	// (0x00037404) list_single_graphic_heading_pane_fp_ParamLimits

0x78e7,	// (0x00037404) list_single_graphic_heading_pane_fp

0x78e7,	// (0x00037404) list_single_graphic_pane_fp_ParamLimits

0x78e7,	// (0x00037404) list_single_graphic_pane_fp

0x78e7,	// (0x00037404) list_single_heading_pane_fp_ParamLimits

0x78e7,	// (0x00037404) list_single_heading_pane_fp

0x78e7,	// (0x00037404) list_single_pane_fp_ParamLimits

0x78e7,	// (0x00037404) list_single_pane_fp

0x7900,	// (0x0003741d) list_single_pane_fp_g1_ParamLimits

0x7900,	// (0x0003741d) list_single_pane_fp_g1

0x2956,	// (0x00032473) list_single_pane_fp_g2_ParamLimits

0x2956,	// (0x00032473) list_single_pane_fp_g2

0x2962,	// (0x0003247f) list_single_pane_fp_g3_ParamLimits

0x2962,	// (0x0003247f) list_single_pane_fp_g3

0x790c,	// (0x00037429) list_single_pane_fp_g4_ParamLimits

0x790c,	// (0x00037429) list_single_pane_fp_g4

0x0003,

0xfb9d,	// (0x0003f6ba) list_single_pane_fp_g_ParamLimits

0xfb9d,	// (0x0003f6ba) list_single_pane_fp_g

0x2976,	// (0x00032493) list_single_pane_fp_t1_ParamLimits

0x2976,	// (0x00032493) list_single_pane_fp_t1

0x298d,	// (0x000324aa) list_single_graphic_pane_fp_g1_ParamLimits

0x298d,	// (0x000324aa) list_single_graphic_pane_fp_g1

0x7900,	// (0x0003741d) list_single_graphic_pane_fp_g2_ParamLimits

0x7900,	// (0x0003741d) list_single_graphic_pane_fp_g2

0x2956,	// (0x00032473) list_single_graphic_pane_fp_g3_ParamLimits

0x2956,	// (0x00032473) list_single_graphic_pane_fp_g3

0x2962,	// (0x0003247f) list_single_graphic_pane_fp_g4_ParamLimits

0x2962,	// (0x0003247f) list_single_graphic_pane_fp_g4

0x790c,	// (0x00037429) list_single_graphic_pane_fp_g5_ParamLimits

0x790c,	// (0x00037429) list_single_graphic_pane_fp_g5

0x0004,

0xfba6,	// (0x0003f6c3) list_single_graphic_pane_fp_g_ParamLimits

0xfba6,	// (0x0003f6c3) list_single_graphic_pane_fp_g

0x2999,	// (0x000324b6) list_single_graphic_pane_fp_t1_ParamLimits

0x2999,	// (0x000324b6) list_single_graphic_pane_fp_t1

0x298d,	// (0x000324aa) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x298d,	// (0x000324aa) list_single_graphic_heading_pane_fp_g1

0x7900,	// (0x0003741d) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7900,	// (0x0003741d) list_single_graphic_heading_pane_fp_g2

0x2956,	// (0x00032473) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x2956,	// (0x00032473) list_single_graphic_heading_pane_fp_g3

0x2962,	// (0x0003247f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x2962,	// (0x0003247f) list_single_graphic_heading_pane_fp_g4

0x790c,	// (0x00037429) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x790c,	// (0x00037429) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba6,	// (0x0003f6c3) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba6,	// (0x0003f6c3) list_single_graphic_heading_pane_fp_g

0x29af,	// (0x000324cc) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x29af,	// (0x000324cc) list_single_graphic_heading_pane_fp_t1

0x29c5,	// (0x000324e2) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x29c5,	// (0x000324e2) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbb1,	// (0x0003f6ce) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbb1,	// (0x0003f6ce) list_single_graphic_heading_pane_fp_t

0x29d7,	// (0x000324f4) list_single_cale_day_pane_fp_g1_ParamLimits

0x29d7,	// (0x000324f4) list_single_cale_day_pane_fp_g1

0x7918,	// (0x00037435) list_single_cale_day_pane_fp_g2_ParamLimits

0x7918,	// (0x00037435) list_single_cale_day_pane_fp_g2

0x2a0f,	// (0x0003252c) list_single_cale_day_pane_fp_g3_ParamLimits

0x2a0f,	// (0x0003252c) list_single_cale_day_pane_fp_g3

0x2a37,	// (0x00032554) list_single_cale_day_pane_fp_g4_ParamLimits

0x2a37,	// (0x00032554) list_single_cale_day_pane_fp_g4

0x2a5b,	// (0x00032578) list_single_cale_day_pane_fp_g5_ParamLimits

0x2a5b,	// (0x00032578) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb6,	// (0x0003f6d3) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb6,	// (0x0003f6d3) list_single_cale_day_pane_fp_g

0x2a7f,	// (0x0003259c) list_single_cale_day_pane_fp_t1_ParamLimits

0x2a7f,	// (0x0003259c) list_single_cale_day_pane_fp_t1

0x2aa5,	// (0x000325c2) list_single_cale_day_pane_fp_t2_ParamLimits

0x2aa5,	// (0x000325c2) list_single_cale_day_pane_fp_t2

0x2abe,	// (0x000325db) list_single_cale_day_pane_fp_t3_ParamLimits

0x2abe,	// (0x000325db) list_single_cale_day_pane_fp_t3

0x0002,

0xfbc1,	// (0x0003f6de) list_single_cale_day_pane_fp_t_ParamLimits

0xfbc1,	// (0x0003f6de) list_single_cale_day_pane_fp_t

0x7900,	// (0x0003741d) list_empty_pane_fp_g1_ParamLimits

0x7900,	// (0x0003741d) list_empty_pane_fp_g1

0x2ad7,	// (0x000325f4) list_empty_pane_fp_t1

0x2ae5,	// (0x00032602) list_empty_pane_fp_t2

0x0001,

0xfbc8,	// (0x0003f6e5) list_empty_pane_fp_t

0x7900,	// (0x0003741d) list_single_heading_pane_fp_g1_ParamLimits

0x7900,	// (0x0003741d) list_single_heading_pane_fp_g1

0x2956,	// (0x00032473) list_single_heading_pane_fp_g2_ParamLimits

0x2956,	// (0x00032473) list_single_heading_pane_fp_g2

0x2962,	// (0x0003247f) list_single_heading_pane_fp_g3_ParamLimits

0x2962,	// (0x0003247f) list_single_heading_pane_fp_g3

0x0002,

0xfbcd,	// (0x0003f6ea) list_single_heading_pane_fp_g_ParamLimits

0xfbcd,	// (0x0003f6ea) list_single_heading_pane_fp_g

0x2af3,	// (0x00032610) list_single_heading_pane_fp_t1_ParamLimits

0x2af3,	// (0x00032610) list_single_heading_pane_fp_t1

0x2b05,	// (0x00032622) list_single_heading_pane_fp_t2_ParamLimits

0x2b05,	// (0x00032622) list_single_heading_pane_fp_t2

0x0001,

0xfbd4,	// (0x0003f6f1) list_single_heading_pane_fp_t_ParamLimits

0xfbd4,	// (0x0003f6f1) list_single_heading_pane_fp_t

0x330f,	// (0x00032e2c) aid_size_cell_fast

0x24e6,	// (0x00032003) soft_indicator_pane_cp1_t1

0x334c,	// (0x00032e69) cell_app_pane_cp2_ParamLimits

0x334c,	// (0x00032e69) cell_app_pane_cp2

0x153b,	// (0x00031058) fep_hwr_candidate_drop_down_list_pane

0x1729,	// (0x00031246) fep_hwr_candidate_pane_g3_ParamLimits

0x1729,	// (0x00031246) fep_hwr_candidate_pane_g3

0xe3a5,	// (0x0003dec2) fep_hwr_candidate_pane_g4_ParamLimits

0xe3a5,	// (0x0003dec2) fep_hwr_candidate_pane_g4

0x0002,

0xfb43,	// (0x0003f660) fep_hwr_candidate_pane_g_ParamLimits

0xfb43,	// (0x0003f660) fep_hwr_candidate_pane_g

0x73ee,	// (0x00036f0b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x73ee,	// (0x00036f0b) fep_vkb_candidate_drop_down_list_pane

0x7816,	// (0x00037333) fep_vkb_candidate_pane_g3

0x781e,	// (0x0003733b) fep_vkb_candidate_pane_g4

0x0002,

0xfb70,	// (0x0003f68d) fep_vkb_candidate_pane_g

0x1794,	// (0x000312b1) cell_hwr_candidate_pane_g1_ParamLimits

0x17a2,	// (0x000312bf) cell_hwr_candidate_pane_g3_ParamLimits

0x17a2,	// (0x000312bf) cell_hwr_candidate_pane_g3

0x9328,	// (0x00038e45) cell_hwr_candidate_pane_g4_ParamLimits

0x9328,	// (0x00038e45) cell_hwr_candidate_pane_g4

0x0002,

0xfb8f,	// (0x0003f6ac) cell_hwr_candidate_pane_g_ParamLimits

0xfb8f,	// (0x0003f6ac) cell_hwr_candidate_pane_g

0x7835,	// (0x00037352) cell_vkb_candidate_pane_g3_ParamLimits

0x7835,	// (0x00037352) cell_vkb_candidate_pane_g3

0x7850,	// (0x0003736d) cell_vkb_candidate_pane_g4_ParamLimits

0x7850,	// (0x0003736d) cell_vkb_candidate_pane_g4

0x7924,	// (0x00037441) cell_app_pane_cp2_g1_ParamLimits

0x7924,	// (0x00037441) cell_app_pane_cp2_g1

0x7942,	// (0x0003745f) cell_app_pane_cp2_g2_ParamLimits

0x7942,	// (0x0003745f) cell_app_pane_cp2_g2

0x0001,

0xfbd9,	// (0x0003f6f6) cell_app_pane_cp2_g_ParamLimits

0xfbd9,	// (0x0003f6f6) cell_app_pane_cp2_g

0x794e,	// (0x0003746b) cell_app_pane_cp2_t1_ParamLimits

0x794e,	// (0x0003746b) cell_app_pane_cp2_t1

0x30fa,	// (0x00032c17) grid_highlight_pane_cp1_ParamLimits

0x30fa,	// (0x00032c17) grid_highlight_pane_cp1

0x17e1,	// (0x000312fe) cell_hwr_candidate_pane_cp1_ParamLimits

0x17e1,	// (0x000312fe) cell_hwr_candidate_pane_cp1

0x1794,	// (0x000312b1) fep_hwr_candidate_drop_down_list_pane_g1

0x1805,	// (0x00031322) fep_hwr_candidate_drop_down_list_pane_g2

0x1812,	// (0x0003132f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x0003f6fb) fep_hwr_candidate_drop_down_list_pane_g

0x181f,	// (0x0003133c) fep_hwr_candidate_drop_down_list_scroll_pane

0x1828,	// (0x00031345) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1828,	// (0x00031345) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1835,	// (0x00031352) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1835,	// (0x00031352) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1842,	// (0x0003135f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1842,	// (0x0003135f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x184f,	// (0x0003136c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x184f,	// (0x0003136c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x186a,	// (0x00031387) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x186a,	// (0x00031387) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1885,	// (0x000313a2) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1885,	// (0x000313a2) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x18a0,	// (0x000313bd) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x18a0,	// (0x000313bd) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x18bb,	// (0x000313d8) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x18bb,	// (0x000313d8) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x0003f702) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x0003f702) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7960,	// (0x0003747d) cell_vkb_candidate_pane_cp1_ParamLimits

0x7960,	// (0x0003747d) cell_vkb_candidate_pane_cp1

0x74f4,	// (0x00037011) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x74f4,	// (0x00037011) fep_vkb_candidate_drop_down_list_pane_g1

0x7986,	// (0x000374a3) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7986,	// (0x000374a3) fep_vkb_candidate_drop_down_list_pane_g2

0x7993,	// (0x000374b0) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7993,	// (0x000374b0) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbf6,	// (0x0003f713) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbf6,	// (0x0003f713) fep_vkb_candidate_drop_down_list_pane_g

0x79a0,	// (0x000374bd) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x79a0,	// (0x000374bd) fep_vkb_candidate_drop_down_list_scroll_pane

0x79ad,	// (0x000374ca) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x79ad,	// (0x000374ca) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x79ba,	// (0x000374d7) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x79ba,	// (0x000374d7) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x79c6,	// (0x000374e3) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x79c6,	// (0x000374e3) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x79d2,	// (0x000374ef) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x79d2,	// (0x000374ef) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x79f3,	// (0x00037510) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x79f3,	// (0x00037510) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7a14,	// (0x00037531) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7a14,	// (0x00037531) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7a35,	// (0x00037552) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7a35,	// (0x00037552) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7a56,	// (0x00037573) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7a56,	// (0x00037573) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbfd,	// (0x0003f71a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbfd,	// (0x0003f71a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb0fc,	// (0x0003ac19) title_pane_g1_ParamLimits

0xb10d,	// (0x0003ac2a) title_pane_g2_ParamLimits

0xf592,	// (0x0003f0af) title_pane_g_ParamLimits

0x375a,	// (0x00033277) aid_call2_pane

0x3762,	// (0x0003327f) aid_call_pane

0x376a,	// (0x00033287) popup_clock_analogue_window_g1

0x376a,	// (0x00033287) popup_clock_analogue_window_g2

0x09a1,	// (0x000304be) popup_clock_analogue_window_g3

0x09aa,	// (0x000304c7) popup_clock_analogue_window_g4

0x2200,	// (0x00031d1d) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x0003f254) popup_clock_analogue_window_g

0x09b2,	// (0x000304cf) popup_clock_analogue_window_t1

0x09c0,	// (0x000304dd) clock_digital_number_pane_ParamLimits

0x09c0,	// (0x000304dd) clock_digital_number_pane

0x09cc,	// (0x000304e9) clock_digital_number_pane_cp02_ParamLimits

0x09cc,	// (0x000304e9) clock_digital_number_pane_cp02

0x09d8,	// (0x000304f5) clock_digital_number_pane_cp03_ParamLimits

0x09d8,	// (0x000304f5) clock_digital_number_pane_cp03

0x09e4,	// (0x00030501) clock_digital_number_pane_cp04_ParamLimits

0x09e4,	// (0x00030501) clock_digital_number_pane_cp04

0x09f0,	// (0x0003050d) clock_digital_separator_pane_ParamLimits

0x09f0,	// (0x0003050d) clock_digital_separator_pane

0x09fc,	// (0x00030519) popup_clock_digital_window_t1_ParamLimits

0x09fc,	// (0x00030519) popup_clock_digital_window_t1

0x2200,	// (0x00031d1d) clock_digital_number_pane_g1

0x2200,	// (0x00031d1d) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x0003f25f) clock_digital_number_pane_g

0x2200,	// (0x00031d1d) clock_digital_separator_pane_g1

0x2200,	// (0x00031d1d) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x0003f25f) clock_digital_separator_pane_g

0xcfa7,	// (0x0003cac4) aid_fill_nsta_ParamLimits

0xd0d8,	// (0x0003cbf5) indicator_nsta_pane_ParamLimits

0x49fd,	// (0x0003451a) popup_clock_analogue_window

0x49fd,	// (0x0003451a) popup_clock_digital_window

0x32d0,	// (0x00032ded) grid_indicator_nsta_pane_ParamLimits

0x6c7f,	// (0x0003679c) clock_nsta_pane_t2

0x0001,

0xfad0,	// (0x0003f5ed) clock_nsta_pane_t

0x0965,	// (0x00030482) aid_size_max_handle

0xb74e,	// (0x0003b26b) aid_size_min_handle

0x3d58,	// (0x00033875) editor_scroll_pane

0x7a71,	// (0x0003758e) ex_editor_pane

0x327c,	// (0x00032d99) scroll_pane_cp13

0x3099,	// (0x00032bb6) scroll_pane_cp14

0x3794,	// (0x000332b1) scroll_pane_cp36

0xc6b0,	// (0x0003c1cd) list_single_graphic_hl_pane_cp2_ParamLimits

0xc6b0,	// (0x0003c1cd) list_single_graphic_hl_pane_cp2

0xd818,	// (0x0003d335) list_single_graphic_hl_pane_ParamLimits

0xd818,	// (0x0003d335) list_single_graphic_hl_pane

0x2b1b,	// (0x00032638) aid_size_min_hl_cp1

0x7a79,	// (0x00037596) list_highlight_pane_cp34_ParamLimits

0x7a79,	// (0x00037596) list_highlight_pane_cp34

0x7a8a,	// (0x000375a7) list_single_graphic_hl_pane_g1_ParamLimits

0x7a8a,	// (0x000375a7) list_single_graphic_hl_pane_g1

0xbbff,	// (0x0003b71c) list_single_graphic_hl_pane_g2_ParamLimits

0xbbff,	// (0x0003b71c) list_single_graphic_hl_pane_g2

0xbbff,	// (0x0003b71c) list_single_graphic_hl_pane_g3_ParamLimits

0xbbff,	// (0x0003b71c) list_single_graphic_hl_pane_g3

0xeee3,	// (0x0003ea00) list_single_graphic_hl_pane_g4_ParamLimits

0xeee3,	// (0x0003ea00) list_single_graphic_hl_pane_g4

0xbc0b,	// (0x0003b728) list_single_graphic_hl_pane_g5_ParamLimits

0xbc0b,	// (0x0003b728) list_single_graphic_hl_pane_g5

0x0004,

0xfc0e,	// (0x0003f72b) list_single_graphic_hl_pane_g_ParamLimits

0xfc0e,	// (0x0003f72b) list_single_graphic_hl_pane_g

0xbc1f,	// (0x0003b73c) list_single_graphic_hl_pane_t1_ParamLimits

0xbc1f,	// (0x0003b73c) list_single_graphic_hl_pane_t1

0x7a97,	// (0x000375b4) aid_size_min_hl_cp2

0x7aa0,	// (0x000375bd) list_highlight_pane_cp34_cp2_ParamLimits

0x7aa0,	// (0x000375bd) list_highlight_pane_cp34_cp2

0x7a8a,	// (0x000375a7) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7a8a,	// (0x000375a7) list_single_graphic_hl_pane_g1_cp2

0x7aad,	// (0x000375ca) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7aad,	// (0x000375ca) list_single_graphic_hl_pane_g2_cp2

0x7ab9,	// (0x000375d6) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7ab9,	// (0x000375d6) list_single_graphic_hl_pane_g3_cp2

0x447d,	// (0x00033f9a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x447d,	// (0x00033f9a) list_single_graphic_hl_pane_g4_cp2

0x7ac7,	// (0x000375e4) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7ac7,	// (0x000375e4) list_single_graphic_hl_pane_g5_cp2

0xb80c,	// (0x0003b329) control_pane_g4_ParamLimits

0xb80c,	// (0x0003b329) control_pane_g4

0x40de,	// (0x00033bfb) bg_popup_sub_pane_cp10_ParamLimits

0x7274,	// (0x00036d91) list_choice_list_pane_ParamLimits

0x7283,	// (0x00036da0) scroll_pane_cp23

0x2574,	// (0x00032091) bg_popup_preview_window_pane_cp02_ParamLimits

0x78a1,	// (0x000373be) list_preview_fixed_pane_ParamLimits

0x78b7,	// (0x000373d4) list_preview_fixed_pane_cp_ParamLimits

0x78b7,	// (0x000373d4) list_preview_fixed_pane_cp

0x78c3,	// (0x000373e0) popup_preview_fixed_window_g1_ParamLimits

0x78c3,	// (0x000373e0) popup_preview_fixed_window_g1

0x78cf,	// (0x000373ec) popup_preview_fixed_window_g2_ParamLimits

0x78cf,	// (0x000373ec) popup_preview_fixed_window_g2

0x0002,

0xfb96,	// (0x0003f6b3) popup_preview_fixed_window_g_ParamLimits

0xfb96,	// (0x0003f6b3) popup_preview_fixed_window_g

0x08d7,	// (0x000303f4) aid_navi_side_left_pane_ParamLimits

0x08ec,	// (0x00030409) aid_navi_side_right_pane_ParamLimits

0x0904,	// (0x00030421) navi_icon_pane_stacon_ParamLimits

0x0918,	// (0x00030435) navi_navi_pane_stacon_ParamLimits

0x0904,	// (0x00030421) navi_text_pane_stacon_ParamLimits

0x21f6,	// (0x00031d13) main_text_info_pane

0x7af1,	// (0x0003760e) listscroll_text_info_pane

0x7af9,	// (0x00037616) list_text_info_pane_ParamLimits

0x7af9,	// (0x00037616) list_text_info_pane

0x7b08,	// (0x00037625) scroll_pane_cp24_ParamLimits

0x7b08,	// (0x00037625) scroll_pane_cp24

0xdd12,	// (0x0003d82f) list_text_info_pane_t1_ParamLimits

0xdd12,	// (0x0003d82f) list_text_info_pane_t1

0xc8a4,	// (0x0003c3c1) popup_fast_swap2_window_ParamLimits

0xc8a4,	// (0x0003c3c1) popup_fast_swap2_window

0x7b4b,	// (0x00037668) aid_size_cell_fast2

0x21f6,	// (0x00031d13) bg_popup_window_pane_cp17

0x50b0,	// (0x00034bcd) heading_pane_cp2

0x2d5d,	// (0x0003287a) listscroll_fast2_pane

0x7b55,	// (0x00037672) grid_fast2_pane

0x7b5f,	// (0x0003767c) listscroll_fast2_pane_g1

0x7b69,	// (0x00037686) listscroll_fast2_pane_g2

0x0001,

0xfc19,	// (0x0003f736) listscroll_fast2_pane_g

0x327c,	// (0x00032d99) scroll_pane_cp26

0x7b73,	// (0x00037690) cell_fast2_pane_ParamLimits

0x7b73,	// (0x00037690) cell_fast2_pane

0x7b8a,	// (0x000376a7) cell_fast2_pane_g1

0x7b93,	// (0x000376b0) cell_fast2_pane_g2

0x7b9c,	// (0x000376b9) cell_fast2_pane_g3

0x0002,

0xfc1e,	// (0x0003f73b) cell_fast2_pane_g

0x2e56,	// (0x00032973) grid_highlight_pane_cp9

0x2e6b,	// (0x00032988) main_eswt_pane_ParamLimits

0x2e6b,	// (0x00032988) main_eswt_pane

0x7b1d,	// (0x0003763a) list_single_text_info_pane

0x7ba4,	// (0x000376c1) eswt_ctrl_button_pane

0x7ba4,	// (0x000376c1) eswt_ctrl_canvas_pane

0x7bac,	// (0x000376c9) eswt_ctrl_combo_pane

0x7ba4,	// (0x000376c1) eswt_ctrl_default_pane

0x7ba4,	// (0x000376c1) eswt_ctrl_label_pane

0x7bb4,	// (0x000376d1) eswt_ctrl_wait_pane

0x7bbc,	// (0x000376d9) eswt_shell_pane

0x21f6,	// (0x00031d13) listscroll_eswt_app_pane

0x7bdc,	// (0x000376f9) popup_eswt_tasktip_window_ParamLimits

0x7bdc,	// (0x000376f9) popup_eswt_tasktip_window

0x4d18,	// (0x00034835) bg_popup_window_pane_cp18

0x7bed,	// (0x0003770a) eswt_control_pane_g1_ParamLimits

0x7bed,	// (0x0003770a) eswt_control_pane_g1

0x7bfa,	// (0x00037717) eswt_control_pane_g2_ParamLimits

0x7bfa,	// (0x00037717) eswt_control_pane_g2

0x7c07,	// (0x00037724) eswt_control_pane_g3_ParamLimits

0x7c07,	// (0x00037724) eswt_control_pane_g3

0x7c14,	// (0x00037731) eswt_control_pane_g4_ParamLimits

0x7c14,	// (0x00037731) eswt_control_pane_g4

0x0003,

0xfc25,	// (0x0003f742) eswt_control_pane_g_ParamLimits

0xfc25,	// (0x0003f742) eswt_control_pane_g

0x30fa,	// (0x00032c17) bg_button_pane_ParamLimits

0x30fa,	// (0x00032c17) bg_button_pane

0x2e6b,	// (0x00032988) common_borders_pane_copy2_ParamLimits

0x2e6b,	// (0x00032988) common_borders_pane_copy2

0x7c21,	// (0x0003773e) control_button_pane_g1_ParamLimits

0x7c21,	// (0x0003773e) control_button_pane_g1

0x7c2d,	// (0x0003774a) control_button_pane_g2_ParamLimits

0x7c2d,	// (0x0003774a) control_button_pane_g2

0x7c39,	// (0x00037756) control_button_pane_g3_ParamLimits

0x7c39,	// (0x00037756) control_button_pane_g3

0x0002,

0xfc2e,	// (0x0003f74b) control_button_pane_g_ParamLimits

0xfc2e,	// (0x0003f74b) control_button_pane_g

0x7c4d,	// (0x0003776a) control_button_pane_t1

0x7c5b,	// (0x00037778) control_button_pane_t2

0x0001,

0xfc35,	// (0x0003f752) control_button_pane_t

0x4c26,	// (0x00034743) bg_button_pane_g1

0x4c36,	// (0x00034753) bg_button_pane_g2

0x4c2e,	// (0x0003474b) bg_button_pane_g3

0x4c46,	// (0x00034763) bg_button_pane_g4

0x4c3e,	// (0x0003475b) bg_button_pane_g5

0x4c4e,	// (0x0003476b) bg_button_pane_g6

0x4c56,	// (0x00034773) bg_button_pane_g7

0x4c66,	// (0x00034783) bg_button_pane_g8

0x4c5e,	// (0x0003477b) bg_button_pane_g9

0x0008,

0xf895,	// (0x0003f3b2) bg_button_pane_g

0x722f,	// (0x00036d4c) common_borders_pane_ParamLimits

0x722f,	// (0x00036d4c) common_borders_pane

0x7bed,	// (0x0003770a) eswt_control_pane_g1_copy1_ParamLimits

0x7bed,	// (0x0003770a) eswt_control_pane_g1_copy1

0x7bfa,	// (0x00037717) eswt_control_pane_g2_copy1_ParamLimits

0x7bfa,	// (0x00037717) eswt_control_pane_g2_copy1

0x7c07,	// (0x00037724) eswt_control_pane_g3_copy1_ParamLimits

0x7c07,	// (0x00037724) eswt_control_pane_g3_copy1

0x7c14,	// (0x00037731) eswt_control_pane_g4_copy1_ParamLimits

0x7c14,	// (0x00037731) eswt_control_pane_g4_copy1

0x726a,	// (0x00036d87) bg_eswt_ctrl_canvas_pane_g1

0x722f,	// (0x00036d4c) common_borders_pane_cp2_ParamLimits

0x722f,	// (0x00036d4c) common_borders_pane_cp2

0x722f,	// (0x00036d4c) common_borders_pane_cp3_ParamLimits

0x722f,	// (0x00036d4c) common_borders_pane_cp3

0x7c69,	// (0x00037786) separator_horizontal_pane

0x7c71,	// (0x0003778e) separator_vertical_pane

0x7bed,	// (0x0003770a) eswt_control_pane_g1_copy2_ParamLimits

0x7bed,	// (0x0003770a) eswt_control_pane_g1_copy2

0x7bfa,	// (0x00037717) eswt_control_pane_g2_copy2_ParamLimits

0x7bfa,	// (0x00037717) eswt_control_pane_g2_copy2

0x7c07,	// (0x00037724) eswt_control_pane_g3_copy2_ParamLimits

0x7c07,	// (0x00037724) eswt_control_pane_g3_copy2

0x7c14,	// (0x00037731) eswt_control_pane_g4_copy2_ParamLimits

0x7c14,	// (0x00037731) eswt_control_pane_g4_copy2

0x21f6,	// (0x00031d13) common_borders_pane_cp4

0x7c7a,	// (0x00037797) separator_horizontal_pane_g1

0x7c83,	// (0x000377a0) separator_horizontal_pane_g2

0x7c8c,	// (0x000377a9) separator_horizontal_pane_g3

0x0002,

0xfc3a,	// (0x0003f757) separator_horizontal_pane_g

0x7bed,	// (0x0003770a) eswt_control_pane_g1_copy3_ParamLimits

0x7bed,	// (0x0003770a) eswt_control_pane_g1_copy3

0x7bfa,	// (0x00037717) eswt_control_pane_g2_copy3_ParamLimits

0x7bfa,	// (0x00037717) eswt_control_pane_g2_copy3

0x7c07,	// (0x00037724) eswt_control_pane_g3_copy3_ParamLimits

0x7c07,	// (0x00037724) eswt_control_pane_g3_copy3

0x7c14,	// (0x00037731) eswt_control_pane_g4_copy3_ParamLimits

0x7c14,	// (0x00037731) eswt_control_pane_g4_copy3

0x21f6,	// (0x00031d13) common_borders_pane_cp5

0x7c95,	// (0x000377b2) separator_vertical_pane_g1

0x7c9e,	// (0x000377bb) separator_vertical_pane_g2

0x7cb5,	// (0x000377d2) separator_vertical_pane_g3

0x0002,

0xfc41,	// (0x0003f75e) separator_vertical_pane_g

0x7bed,	// (0x0003770a) eswt_control_pane_g1_copy4_ParamLimits

0x7bed,	// (0x0003770a) eswt_control_pane_g1_copy4

0x7bfa,	// (0x00037717) eswt_control_pane_g2_copy4_ParamLimits

0x7bfa,	// (0x00037717) eswt_control_pane_g2_copy4

0x7c07,	// (0x00037724) eswt_control_pane_g3_copy4_ParamLimits

0x7c07,	// (0x00037724) eswt_control_pane_g3_copy4

0x7c14,	// (0x00037731) eswt_control_pane_g4_copy4_ParamLimits

0x7c14,	// (0x00037731) eswt_control_pane_g4_copy4

0xdd34,	// (0x0003d851) eswt_ctrl_combo_button_pane

0xdd3c,	// (0x0003d859) eswt_ctrl_input_pane

0xdd44,	// (0x0003d861) popup_choice_list_window_cp70

0xdd4c,	// (0x0003d869) eswt_ctrl_input_pane_t1

0x21f6,	// (0x00031d13) input_focus_pane_cp70

0x722f,	// (0x00036d4c) bg_button_pane_cp70_ParamLimits

0x722f,	// (0x00036d4c) bg_button_pane_cp70

0xdd5a,	// (0x0003d877) eswt_ctrl_combo_button_pane_g1

0x7cec,	// (0x00037809) wait_bar_pane_cp70

0x4d18,	// (0x00034835) bg_popup_window_pane_cp70_ParamLimits

0x4d18,	// (0x00034835) bg_popup_window_pane_cp70

0x7cf4,	// (0x00037811) popup_eswt_tasktip_window_t1

0x7d0a,	// (0x00037827) wait_bar_pane_cp71_ParamLimits

0x7d0a,	// (0x00037827) wait_bar_pane_cp71

0x7d16,	// (0x00037833) grid_eswt_app_pane

0x359e,	// (0x000330bb) scroll_pane_cp70

0xdd62,	// (0x0003d87f) cell_eswt_app_pane_ParamLimits

0xdd62,	// (0x0003d87f) cell_eswt_app_pane

0xdd94,	// (0x0003d8b1) cell_eswt_app_pane_g1_ParamLimits

0xdd94,	// (0x0003d8b1) cell_eswt_app_pane_g1

0xddc3,	// (0x0003d8e0) cell_eswt_app_pane_g2_ParamLimits

0xddc3,	// (0x0003d8e0) cell_eswt_app_pane_g2

0x0001,

0xfc48,	// (0x0003f765) cell_eswt_app_pane_g_ParamLimits

0xfc48,	// (0x0003f765) cell_eswt_app_pane_g

0xddec,	// (0x0003d909) cell_eswt_app_pane_t1_ParamLimits

0xddec,	// (0x0003d909) cell_eswt_app_pane_t1

0x7ddb,	// (0x000378f8) grid_highlight_pane_cp70_ParamLimits

0x7ddb,	// (0x000378f8) grid_highlight_pane_cp70

0x6178,	// (0x00035c95) set_content_pane_g1

0x4008,	// (0x00033b25) status_small_volume_pane

0x18d6,	// (0x000313f3) status_small_volume_pane_g1

0x18de,	// (0x000313fb) volume_small2_pane

0x18e7,	// (0x00031404) volume_small2_pane_g1

0x18f0,	// (0x0003140d) volume_small2_pane_g2

0x18f9,	// (0x00031416) volume_small2_pane_g3

0x1902,	// (0x0003141f) volume_small2_pane_g4

0x190b,	// (0x00031428) volume_small2_pane_g5

0x1914,	// (0x00031431) volume_small2_pane_g6

0x191d,	// (0x0003143a) volume_small2_pane_g7

0x1926,	// (0x00031443) volume_small2_pane_g8

0x192f,	// (0x0003144c) volume_small2_pane_g9

0x1938,	// (0x00031455) volume_small2_pane_g10

0x0009,

0xfc4d,	// (0x0003f76a) volume_small2_pane_g

0x7648,	// (0x00037165) fep_vkb_top_text_pane_g1_ParamLimits

0xdcba,	// (0x0003d7d7) fep_vkb_top_text_pane_t1_ParamLimits

0x78db,	// (0x000373f8) popup_preview_fixed_window_g3_ParamLimits

0x78db,	// (0x000373f8) popup_preview_fixed_window_g3

0xcf3a,	// (0x0003ca57) popup_toolbar_trans_pane

0xd67d,	// (0x0003d19a) aid_height_set_list_ParamLimits

0x602e,	// (0x00035b4b) aid_size_parent_ParamLimits

0x40de,	// (0x00033bfb) list_highlight_pane_cp2_ParamLimits

0x6178,	// (0x00035c95) set_content_pane_g1_ParamLimits

0xbb9e,	// (0x0003b6bb) list_single_image_pane_ParamLimits

0xbb9e,	// (0x0003b6bb) list_single_image_pane

0xde1e,	// (0x0003d93b) aid_size_cell_image_ParamLimits

0xde1e,	// (0x0003d93b) aid_size_cell_image

0xde2b,	// (0x0003d948) grid_single_image_pane_ParamLimits

0xde2b,	// (0x0003d948) grid_single_image_pane

0x3114,	// (0x00032c31) list_single_image_pane_g1_ParamLimits

0x3114,	// (0x00032c31) list_single_image_pane_g1

0x3120,	// (0x00032c3d) list_single_image_pane_g2_ParamLimits

0x3120,	// (0x00032c3d) list_single_image_pane_g2

0x0001,

0xfc62,	// (0x0003f77f) list_single_image_pane_g_ParamLimits

0xfc62,	// (0x0003f77f) list_single_image_pane_g

0x7e02,	// (0x0003791f) list_single_image_pane_t1_ParamLimits

0x7e02,	// (0x0003791f) list_single_image_pane_t1

0xde39,	// (0x0003d956) cell_image_list_pane_ParamLimits

0xde39,	// (0x0003d956) cell_image_list_pane

0xde53,	// (0x0003d970) cell_image_list_pane_g1

0xde5c,	// (0x0003d979) cell_image_list_pane_g2

0x0001,

0xfc67,	// (0x0003f784) cell_image_list_pane_g

0x7e40,	// (0x0003795d) aid_size_cell_tb_trans_pane

0x30fa,	// (0x00032c17) bg_tb_trans_pane

0x7e52,	// (0x0003796f) grid_tb_trans_pane

0x4c26,	// (0x00034743) bg_tb_trans_pane_g1

0x4c36,	// (0x00034753) bg_tb_trans_pane_g2

0x4c2e,	// (0x0003474b) bg_tb_trans_pane_g3

0x4c46,	// (0x00034763) bg_tb_trans_pane_g4

0x4c3e,	// (0x0003475b) bg_tb_trans_pane_g5

0x4c66,	// (0x00034783) bg_tb_trans_pane_g6

0x4c5e,	// (0x0003477b) bg_tb_trans_pane_g7

0x4c4e,	// (0x0003476b) bg_tb_trans_pane_g8

0x4c56,	// (0x00034773) bg_tb_trans_pane_g9

0x0008,

0xfc6c,	// (0x0003f789) bg_tb_trans_pane_g

0x7e66,	// (0x00037983) cell_toolbar_trans_pane_ParamLimits

0x7e66,	// (0x00037983) cell_toolbar_trans_pane

0x726a,	// (0x00036d87) cell_toolbar_trans_pane_g1

0xda8a,	// (0x0003d5a7) list_form2_midp_pane_t1

0xda98,	// (0x0003d5b5) list_form2_midp_pane_t2

0x0001,

0xfb09,	// (0x0003f626) list_form2_midp_pane_t

0x6e65,	// (0x00036982) scroll_pane_cp51_ParamLimits

0x702c,	// (0x00036b49) form2_midp_wait_pane_g1

0x7035,	// (0x00036b52) form2_midp_wait_pane_g2

0x703e,	// (0x00036b5b) form2_midp_wait_pane_g3

0x0002,

0xfb1e,	// (0x0003f63b) form2_midp_wait_pane_g

0x22ea,	// (0x00031e07) list_highlight_pane_cp21_ParamLimits

0x7082,	// (0x00036b9f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7091,	// (0x00036bae) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x131c,	// (0x00030e39) list_single_2graphic_im_pane_ParamLimits

0x131c,	// (0x00030e39) list_single_2graphic_im_pane

0xde65,	// (0x0003d982) list_single_2graphic_im_pane_g1_ParamLimits

0xde65,	// (0x0003d982) list_single_2graphic_im_pane_g1

0xde76,	// (0x0003d993) list_single_2graphic_im_pane_g2_ParamLimits

0xde76,	// (0x0003d993) list_single_2graphic_im_pane_g2

0xde82,	// (0x0003d99f) list_single_2graphic_im_pane_g3_ParamLimits

0xde82,	// (0x0003d99f) list_single_2graphic_im_pane_g3

0x0003,

0xfc7f,	// (0x0003f79c) list_single_2graphic_im_pane_g_ParamLimits

0xfc7f,	// (0x0003f79c) list_single_2graphic_im_pane_g

0xde96,	// (0x0003d9b3) list_single_2graphic_im_pane_t1_ParamLimits

0xde96,	// (0x0003d9b3) list_single_2graphic_im_pane_t1

0x78e7,	// (0x00037404) list_single_graphic_2heading_pane_fp_ParamLimits

0x78e7,	// (0x00037404) list_single_graphic_2heading_pane_fp

0x298d,	// (0x000324aa) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x298d,	// (0x000324aa) list_single_graphic_2heading_pane_fp_g1

0x7900,	// (0x0003741d) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7900,	// (0x0003741d) list_single_graphic_2heading_pane_fp_g2

0x2956,	// (0x00032473) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x2956,	// (0x00032473) list_single_graphic_2heading_pane_fp_g3

0x2962,	// (0x0003247f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x2962,	// (0x0003247f) list_single_graphic_2heading_pane_fp_g4

0x790c,	// (0x00037429) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x790c,	// (0x00037429) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba6,	// (0x0003f6c3) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba6,	// (0x0003f6c3) list_single_graphic_2heading_pane_fp_g

0x2b5a,	// (0x00032677) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x2b5a,	// (0x00032677) list_single_graphic_2heading_pane_fp_t1

0x29c5,	// (0x000324e2) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x29c5,	// (0x000324e2) list_single_graphic_2heading_pane_fp_t2

0x2b70,	// (0x0003268d) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x2b70,	// (0x0003268d) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc88,	// (0x0003f7a5) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc88,	// (0x0003f7a5) list_single_graphic_2heading_pane_fp_t

0x730a,	// (0x00036e27) fep_hwr_write_pane_g5_ParamLimits

0x730a,	// (0x00036e27) fep_hwr_write_pane_g5

0x7316,	// (0x00036e33) fep_hwr_write_pane_g6_ParamLimits

0x7316,	// (0x00036e33) fep_hwr_write_pane_g6

0x7bbc,	// (0x000376d9) eswt_shell_pane_ParamLimits

0x4d18,	// (0x00034835) bg_popup_window_pane_cp18_ParamLimits

0x5f74,	// (0x00035a91) heading_pane_cp70

0x7cf4,	// (0x00037811) popup_eswt_tasktip_window_t1_ParamLimits

0xcffd,	// (0x0003cb1a) aid_touch_tab_arrow_left

0xd013,	// (0x0003cb30) aid_touch_tab_arrow_right

0xb125,	// (0x0003ac42) title_pane_g3_ParamLimits

0xb125,	// (0x0003ac42) title_pane_g3

0x30b9,	// (0x00032bd6) set_value_pane_g1

0xcf3a,	// (0x0003ca57) popup_toolbar_trans_pane_ParamLimits

0x7e40,	// (0x0003795d) aid_size_cell_tb_trans_pane_ParamLimits

0x30fa,	// (0x00032c17) bg_tb_trans_pane_ParamLimits

0x7e52,	// (0x0003796f) grid_tb_trans_pane_ParamLimits

0x2574,	// (0x00032091) cont_note_pane_ParamLimits

0x2574,	// (0x00032091) cont_note_pane

0x2e6b,	// (0x00032988) cont_snote2_single_text_pane_ParamLimits

0x2e6b,	// (0x00032988) cont_snote2_single_text_pane

0x2e6b,	// (0x00032988) cont_snote2_single_graphic_pane_ParamLimits

0x2e6b,	// (0x00032988) cont_snote2_single_graphic_pane

0x529b,	// (0x00034db8) cont_note_wait_pane_ParamLimits

0x529b,	// (0x00034db8) cont_note_wait_pane

0x529b,	// (0x00034db8) cont_note_image_pane_ParamLimits

0x529b,	// (0x00034db8) cont_note_image_pane

0x7efa,	// (0x00037a17) popup_note2_window_g1_ParamLimits

0x7efa,	// (0x00037a17) popup_note2_window_g1

0x7f2b,	// (0x00037a48) popup_note2_window_t1_ParamLimits

0x7f2b,	// (0x00037a48) popup_note2_window_t1

0x7f70,	// (0x00037a8d) popup_note2_window_t2_ParamLimits

0x7f70,	// (0x00037a8d) popup_note2_window_t2

0x7fb5,	// (0x00037ad2) popup_note2_window_t3_ParamLimits

0x7fb5,	// (0x00037ad2) popup_note2_window_t3

0x7ffa,	// (0x00037b17) popup_note2_window_t4_ParamLimits

0x7ffa,	// (0x00037b17) popup_note2_window_t4

0x25f8,	// (0x00032115) popup_note2_window_t5_ParamLimits

0x25f8,	// (0x00032115) popup_note2_window_t5

0x0004,

0xfc94,	// (0x0003f7b1) popup_note2_window_t_ParamLimits

0xfc94,	// (0x0003f7b1) popup_note2_window_t

0x8029,	// (0x00037b46) popup_note2_image_window_g1_ParamLimits

0x8029,	// (0x00037b46) popup_note2_image_window_g1

0x8035,	// (0x00037b52) popup_note2_image_window_g2_ParamLimits

0x8035,	// (0x00037b52) popup_note2_image_window_g2

0x0001,

0xfc9f,	// (0x0003f7bc) popup_note2_image_window_g_ParamLimits

0xfc9f,	// (0x0003f7bc) popup_note2_image_window_g

0x8047,	// (0x00037b64) popup_note2_image_window_t1_ParamLimits

0x8047,	// (0x00037b64) popup_note2_image_window_t1

0x805f,	// (0x00037b7c) popup_note2_image_window_t2_ParamLimits

0x805f,	// (0x00037b7c) popup_note2_image_window_t2

0x8077,	// (0x00037b94) popup_note2_image_window_t3_ParamLimits

0x8077,	// (0x00037b94) popup_note2_image_window_t3

0x0002,

0xfca4,	// (0x0003f7c1) popup_note2_image_window_t_ParamLimits

0xfca4,	// (0x0003f7c1) popup_note2_image_window_t

0x52a9,	// (0x00034dc6) popup_note2_wait_window_g1_ParamLimits

0x52a9,	// (0x00034dc6) popup_note2_wait_window_g1

0x8093,	// (0x00037bb0) popup_note2_wait_window_g2_ParamLimits

0x8093,	// (0x00037bb0) popup_note2_wait_window_g2

0x52c1,	// (0x00034dde) popup_note2_wait_window_g3_ParamLimits

0x52c1,	// (0x00034dde) popup_note2_wait_window_g3

0x0002,

0xfcab,	// (0x0003f7c8) popup_note2_wait_window_g_ParamLimits

0xfcab,	// (0x0003f7c8) popup_note2_wait_window_g

0x809f,	// (0x00037bbc) popup_note2_wait_window_t1_ParamLimits

0x809f,	// (0x00037bbc) popup_note2_wait_window_t1

0x80bd,	// (0x00037bda) popup_note2_wait_window_t2_ParamLimits

0x80bd,	// (0x00037bda) popup_note2_wait_window_t2

0x80db,	// (0x00037bf8) popup_note2_wait_window_t3_ParamLimits

0x80db,	// (0x00037bf8) popup_note2_wait_window_t3

0x80ed,	// (0x00037c0a) popup_note2_wait_window_t4_ParamLimits

0x80ed,	// (0x00037c0a) popup_note2_wait_window_t4

0x0003,

0xfcb2,	// (0x0003f7cf) popup_note2_wait_window_t_ParamLimits

0xfcb2,	// (0x0003f7cf) popup_note2_wait_window_t

0x80ff,	// (0x00037c1c) wait_bar2_pane_ParamLimits

0x80ff,	// (0x00037c1c) wait_bar2_pane

0x8117,	// (0x00037c34) popup_snote2_single_text_window_g1_ParamLimits

0x8117,	// (0x00037c34) popup_snote2_single_text_window_g1

0x813f,	// (0x00037c5c) popup_snote2_single_text_window_t1_ParamLimits

0x813f,	// (0x00037c5c) popup_snote2_single_text_window_t1

0x818b,	// (0x00037ca8) popup_snote2_single_text_window_t2_ParamLimits

0x818b,	// (0x00037ca8) popup_snote2_single_text_window_t2

0x81d7,	// (0x00037cf4) popup_snote2_single_text_window_t3_ParamLimits

0x81d7,	// (0x00037cf4) popup_snote2_single_text_window_t3

0x8218,	// (0x00037d35) popup_snote2_single_text_window_t4_ParamLimits

0x8218,	// (0x00037d35) popup_snote2_single_text_window_t4

0x824e,	// (0x00037d6b) popup_snote2_single_text_window_t5_ParamLimits

0x824e,	// (0x00037d6b) popup_snote2_single_text_window_t5

0x0004,

0xfcbb,	// (0x0003f7d8) popup_snote2_single_text_window_t_ParamLimits

0xfcbb,	// (0x0003f7d8) popup_snote2_single_text_window_t

0x8279,	// (0x00037d96) popup_snote2_single_graphic_window_g1_ParamLimits

0x8279,	// (0x00037d96) popup_snote2_single_graphic_window_g1

0x82a1,	// (0x00037dbe) popup_snote2_single_graphic_window_g2_ParamLimits

0x82a1,	// (0x00037dbe) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc6,	// (0x0003f7e3) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc6,	// (0x0003f7e3) popup_snote2_single_graphic_window_g

0x82c9,	// (0x00037de6) popup_snote2_single_graphic_window_t1_ParamLimits

0x82c9,	// (0x00037de6) popup_snote2_single_graphic_window_t1

0x8315,	// (0x00037e32) popup_snote2_single_graphic_window_t2_ParamLimits

0x8315,	// (0x00037e32) popup_snote2_single_graphic_window_t2

0x81d7,	// (0x00037cf4) popup_snote2_single_graphic_window_t3_ParamLimits

0x81d7,	// (0x00037cf4) popup_snote2_single_graphic_window_t3

0x8218,	// (0x00037d35) popup_snote2_single_graphic_window_t4_ParamLimits

0x8218,	// (0x00037d35) popup_snote2_single_graphic_window_t4

0x824e,	// (0x00037d6b) popup_snote2_single_graphic_window_t5_ParamLimits

0x824e,	// (0x00037d6b) popup_snote2_single_graphic_window_t5

0x0004,

0xfccb,	// (0x0003f7e8) popup_snote2_single_graphic_window_t_ParamLimits

0xfccb,	// (0x0003f7e8) popup_snote2_single_graphic_window_t

0x6d0f,	// (0x0003682c) clock_nsta_pane_cp2_t1

0x6d0f,	// (0x0003682c) clock_nsta_pane_cp2_t2

0x0001,

0xfadf,	// (0x0003f5fc) clock_nsta_pane_cp2_t

0x065b,	// (0x00030178) form_field_data_wide_pane_g1_ParamLimits

0x3114,	// (0x00032c31) form_field_data_wide_pane_g2_ParamLimits

0x3114,	// (0x00032c31) form_field_data_wide_pane_g2

0x3120,	// (0x00032c3d) form_field_data_wide_pane_g3_ParamLimits

0x3120,	// (0x00032c3d) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x0003f1d7) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x0003f1d7) form_field_data_wide_pane_g

0xd992,	// (0x0003d4af) grid_touch_3_pane_ParamLimits

0xd992,	// (0x0003d4af) grid_touch_3_pane

0xdec7,	// (0x0003d9e4) cell_touch_3_pane_ParamLimits

0xdec7,	// (0x0003d9e4) cell_touch_3_pane

0x726a,	// (0x00036d87) cell_touch_3_pane_g1

0x726a,	// (0x00036d87) cell_touch_3_pane_g2

0x0001,

0xfb64,	// (0x0003f681) cell_touch_3_pane_g

0x262a,	// (0x00032147) cont_query_data_pane

0x2632,	// (0x0003214f) cont_query_data_pane_cp1

0x8394,	// (0x00037eb1) button_value_adjust_pane_cp7

0x839c,	// (0x00037eb9) query_popup_pane_cp3

0x3834,	// (0x00033351) bg_popup_sub_pane_cp22_ParamLimits

0x0a1b,	// (0x00030538) navi_navi_volume_pane_cp2

0x0a36,	// (0x00030553) popup_side_volume_key_window_g2

0x0a45,	// (0x00030562) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x0003f269) popup_side_volume_key_window_g

0x0a62,	// (0x0003057f) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x0003f270) popup_side_volume_key_window_t

0x3aef,	// (0x0003360c) popup_side_volume_key_window_ParamLimits

0xb33c,	// (0x0003ae59) list_double_graphic_pane_g4_ParamLimits

0xb33c,	// (0x0003ae59) list_double_graphic_pane_g4

0xbb88,	// (0x0003b6a5) list_single_2heading_msg_pane_ParamLimits

0xbb88,	// (0x0003b6a5) list_single_2heading_msg_pane

0xbc35,	// (0x0003b752) list_single_2heading_msg_pane_g1_ParamLimits

0xbc35,	// (0x0003b752) list_single_2heading_msg_pane_g1

0xbc41,	// (0x0003b75e) list_single_2heading_msg_pane_g2_ParamLimits

0xbc41,	// (0x0003b75e) list_single_2heading_msg_pane_g2

0xbc54,	// (0x0003b771) list_single_2heading_msg_pane_g3_ParamLimits

0xbc54,	// (0x0003b771) list_single_2heading_msg_pane_g3

0xbc60,	// (0x0003b77d) list_single_2heading_msg_pane_g4_ParamLimits

0xbc60,	// (0x0003b77d) list_single_2heading_msg_pane_g4

0x0003,

0xfcd6,	// (0x0003f7f3) list_single_2heading_msg_pane_g_ParamLimits

0xfcd6,	// (0x0003f7f3) list_single_2heading_msg_pane_g

0xbc78,	// (0x0003b795) list_single_2heading_msg_pane_t1_ParamLimits

0xbc78,	// (0x0003b795) list_single_2heading_msg_pane_t1

0xbca0,	// (0x0003b7bd) list_single_2heading_msg_pane_t2_ParamLimits

0xbca0,	// (0x0003b7bd) list_single_2heading_msg_pane_t2

0xbd0b,	// (0x0003b828) list_single_2heading_msg_pane_t3_ParamLimits

0xbd0b,	// (0x0003b828) list_single_2heading_msg_pane_t3

0x2c55,	// (0x00032772) list_single_2heading_msg_pane_t4_ParamLimits

0x2c55,	// (0x00032772) list_single_2heading_msg_pane_t4

0x0003,

0xfcdf,	// (0x0003f7fc) list_single_2heading_msg_pane_t_ParamLimits

0xfcdf,	// (0x0003f7fc) list_single_2heading_msg_pane_t

0x223e,	// (0x00031d5b) title_pane_g4_ParamLimits

0x223e,	// (0x00031d5b) title_pane_g4

0x0827,	// (0x00030344) title_pane_stacon_g3_ParamLimits

0x0827,	// (0x00030344) title_pane_stacon_g3

0x7ebd,	// (0x000379da) list_single_2graphic_im_pane_g4_ParamLimits

0x7ebd,	// (0x000379da) list_single_2graphic_im_pane_g4

0x5d11,	// (0x0003582e) popup_side_volume_key_window_cp

0x6587,	// (0x000360a4) main_idle_act2_pane_t1

0x0ec6,	// (0x000309e3) toolbar_button_pane_g10

0xc4c6,	// (0x0003bfe3) popup_toolbar_window_cp1

0x6d00,	// (0x0003681d) clock_nsta_pane_cp_t1

0x6d00,	// (0x0003681d) clock_nsta_pane_cp_t2

0x0001,

0xfada,	// (0x0003f5f7) clock_nsta_pane_cp_t

0x0a1b,	// (0x00030538) navi_navi_volume_pane_cp2_ParamLimits

0x0a2a,	// (0x00030547) popup_side_volume_key_window_g1_ParamLimits

0x0a36,	// (0x00030553) popup_side_volume_key_window_g2_ParamLimits

0x0a45,	// (0x00030562) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x0003f269) popup_side_volume_key_window_g_ParamLimits

0x1527,	// (0x00031044) fep_hwr_aid_pane

0x15d0,	// (0x000310ed) bg_fep_hwr_top_pane_g4_ParamLimits

0x72da,	// (0x00036df7) fep_hwr_top_pane_g1_ParamLimits

0x72ec,	// (0x00036e09) fep_hwr_top_pane_g2_ParamLimits

0x15f0,	// (0x0003110d) fep_hwr_top_pane_g3_ParamLimits

0xfb2f,	// (0x0003f64c) fep_hwr_top_pane_g_ParamLimits

0x1605,	// (0x00031122) fep_hwr_top_text_pane_ParamLimits

0x5ac6,	// (0x000355e3) aid_touch_tab_arrow_arrow_2

0x5acf,	// (0x000355ec) aid_touch_tab_arrow_left_2

0x153b,	// (0x00031058) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1572,	// (0x0003108f) fep_hwr_prediction_pane

0x7442,	// (0x00036f5f) fep_vkb_prediction_pane

0xdc9a,	// (0x0003d7b7) fep_vkb_side_pane_g3_ParamLimits

0xdc9a,	// (0x0003d7b7) fep_vkb_side_pane_g3

0x1794,	// (0x000312b1) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1805,	// (0x00031322) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1812,	// (0x0003132f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbde,	// (0x0003f6fb) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1941,	// (0x0003145e) fep_hwr_prediction_pane_g1

0x194b,	// (0x00031468) fep_hwr_prediction_pane_g2

0x1953,	// (0x00031470) fep_hwr_prediction_pane_g3

0x195b,	// (0x00031478) fep_hwr_prediction_pane_g4

0x0003,

0xfce8,	// (0x0003f805) fep_hwr_prediction_pane_g

0x83c3,	// (0x00037ee0) fep_vkb_prediction_pane_g1

0x83cd,	// (0x00037eea) fep_vkb_prediction_pane_g2

0x83d5,	// (0x00037ef2) fep_vkb_prediction_pane_g3

0x83dd,	// (0x00037efa) fep_vkb_prediction_pane_g4

0x0003,

0xfcf1,	// (0x0003f80e) fep_vkb_prediction_pane_g

0x126b,	// (0x00030d88) slider_set_pane_g3

0x127f,	// (0x00030d9c) slider_set_pane_g4

0x1297,	// (0x00030db4) slider_set_pane_g5

0x126b,	// (0x00030d88) slider_set_pane_g6

0x12ad,	// (0x00030dca) slider_set_pane_g7

0x61bf,	// (0x00035cdc) slider_form_pane_g3

0x61c8,	// (0x00035ce5) slider_form_pane_g4

0x61d0,	// (0x00035ced) slider_form_pane_g5

0x61bf,	// (0x00035cdc) slider_form_pane_g6

0xd7ec,	// (0x0003d309) slider_form_pane_g7

0x6855,	// (0x00036372) slider_set_pane_vc_g3

0x685e,	// (0x0003637b) slider_set_pane_vc_g4

0x6867,	// (0x00036384) slider_set_pane_vc_g5

0x6855,	// (0x00036372) slider_set_pane_vc_g6

0x6870,	// (0x0003638d) slider_set_pane_vc_g7

0x6855,	// (0x00036372) slider_form_pane_vc_g1

0x685e,	// (0x0003637b) slider_form_pane_vc_g2

0x6867,	// (0x00036384) slider_form_pane_vc_g3

0x6855,	// (0x00036372) slider_form_pane_vc_g4

0x6a25,	// (0x00036542) slider_form_pane_vc_g5

0x0004,

0xfac0,	// (0x0003f5dd) slider_form_pane_vc_g

0x21f6,	// (0x00031d13) main_idle_act3_pane

0x83e5,	// (0x00037f02) ai3_links_pane

0xdf11,	// (0x0003da2e) popup_ai3_data_window_ParamLimits

0xdf11,	// (0x0003da2e) popup_ai3_data_window

0x21f6,	// (0x00031d13) grid_ai3_links_pane

0xdf2f,	// (0x0003da4c) cell_ai3_links_pane_ParamLimits

0xdf2f,	// (0x0003da4c) cell_ai3_links_pane

0x8426,	// (0x00037f43) bg_popup_sub_pane_cp11

0x8433,	// (0x00037f50) cell_ai3_links_pane_g1

0x21f6,	// (0x00031d13) bg_popup_sub_pane_cp12

0x8458,	// (0x00037f75) heading_ai3_data_pane

0x8460,	// (0x00037f7d) list_ai3_gene_pane

0x846c,	// (0x00037f89) popup_ai3_data_window_g1

0x8474,	// (0x00037f91) heading_ai3_data_pane_g1

0x847c,	// (0x00037f99) heading_ai3_data_pane_t1

0x848a,	// (0x00037fa7) list_double_ai3_gene_pane_ParamLimits

0x848a,	// (0x00037fa7) list_double_ai3_gene_pane

0x8497,	// (0x00037fb4) list_single_ai3_gene_pane_ParamLimits

0x8497,	// (0x00037fb4) list_single_ai3_gene_pane

0x722f,	// (0x00036d4c) list_highlight_pane_cp7_ParamLimits

0x722f,	// (0x00036d4c) list_highlight_pane_cp7

0x84a4,	// (0x00037fc1) list_single_a13_gene_pane_t1_ParamLimits

0x84a4,	// (0x00037fc1) list_single_a13_gene_pane_t1

0x84bb,	// (0x00037fd8) list_single_ai3_gene_pane_g1

0x84c4,	// (0x00037fe1) list_single_ai3_gene_pane_g2

0x0001,

0xfcfa,	// (0x0003f817) list_single_ai3_gene_pane_g

0x84cc,	// (0x00037fe9) list_double_ai3_gene_pane_g1_ParamLimits

0x84cc,	// (0x00037fe9) list_double_ai3_gene_pane_g1

0x84d8,	// (0x00037ff5) list_double_ai3_gene_pane_t1_ParamLimits

0x84d8,	// (0x00037ff5) list_double_ai3_gene_pane_t1

0x84f4,	// (0x00038011) list_double_ai3_gene_pane_t2_ParamLimits

0x84f4,	// (0x00038011) list_double_ai3_gene_pane_t2

0x8509,	// (0x00038026) list_double_ai3_gene_pane_t3_ParamLimits

0x8509,	// (0x00038026) list_double_ai3_gene_pane_t3

0x0002,

0xfcff,	// (0x0003f81c) list_double_ai3_gene_pane_t_ParamLimits

0xfcff,	// (0x0003f81c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x2b86,	// (0x000326a3) aid_size_min_col_2

0xdefb,	// (0x0003da18) aid_size_min_msg_ParamLimits

0xdefb,	// (0x0003da18) aid_size_min_msg

0xdcae,	// (0x0003d7cb) fep_vkb_top_text_pane_g2_ParamLimits

0xdcae,	// (0x0003d7cb) fep_vkb_top_text_pane_g2

0x0001,

0xfb5f,	// (0x0003f67c) fep_vkb_top_text_pane_g_ParamLimits

0xfb5f,	// (0x0003f67c) fep_vkb_top_text_pane_g

0x21f6,	// (0x00031d13) main_hc_apps_shell_pane

0x8526,	// (0x00038043) grid_hc_apps_pane_ParamLimits

0x8526,	// (0x00038043) grid_hc_apps_pane

0x8535,	// (0x00038052) list_hc_apps_pane

0x853d,	// (0x0003805a) scroll_pane_cp37_ParamLimits

0x853d,	// (0x0003805a) scroll_pane_cp37

0xdf49,	// (0x0003da66) cell_hc_apps_pane_ParamLimits

0xdf49,	// (0x0003da66) cell_hc_apps_pane

0xe013,	// (0x0003db30) cell_hc_apps_pane_g1_ParamLimits

0xe013,	// (0x0003db30) cell_hc_apps_pane_g1

0x8632,	// (0x0003814f) cell_hc_apps_pane_g2_ParamLimits

0x8632,	// (0x0003814f) cell_hc_apps_pane_g2

0x864e,	// (0x0003816b) cell_hc_apps_pane_g3_ParamLimits

0x864e,	// (0x0003816b) cell_hc_apps_pane_g3

0x0002,

0xfd06,	// (0x0003f823) cell_hc_apps_pane_g_ParamLimits

0xfd06,	// (0x0003f823) cell_hc_apps_pane_g

0xe040,	// (0x0003db5d) cell_hc_apps_pane_t1_ParamLimits

0xe040,	// (0x0003db5d) cell_hc_apps_pane_t1

0x2574,	// (0x00032091) grid_highlight_pane_cp10_ParamLimits

0x2574,	// (0x00032091) grid_highlight_pane_cp10

0xe080,	// (0x0003db9d) list_single_hc_apps_pane_ParamLimits

0xe080,	// (0x0003db9d) list_single_hc_apps_pane

0xe0ba,	// (0x0003dbd7) list_single_hc_apps_pane_g1

0xbd79,	// (0x0003b896) list_single_hc_apps_pane_g2

0x0001,

0xfd0d,	// (0x0003f82a) list_single_hc_apps_pane_g

0xbd92,	// (0x0003b8af) list_single_hc_apps_pane_g2_copy1

0xbdae,	// (0x0003b8cb) list_single_hc_apps_pane_t1

0x22ea,	// (0x00031e07) bg_set_opt_pane_cp_ParamLimits

0x002a,	// (0x0002fb47) setting_slider_pane_t1_ParamLimits

0x0040,	// (0x0002fb5d) setting_slider_pane_t2_ParamLimits

0x005a,	// (0x0002fb77) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0003f0bf) setting_slider_pane_t_ParamLimits

0x0072,	// (0x0002fb8f) slider_set_pane_ParamLimits

0x0d58,	// (0x00030875) control_pane_g5_ParamLimits

0x0d58,	// (0x00030875) control_pane_g5

0x5fe0,	// (0x00035afd) slider_set_pane_g1_ParamLimits

0x125f,	// (0x00030d7c) slider_set_pane_g2_ParamLimits

0x126b,	// (0x00030d88) slider_set_pane_g3_ParamLimits

0x127f,	// (0x00030d9c) slider_set_pane_g4_ParamLimits

0x1297,	// (0x00030db4) slider_set_pane_g5_ParamLimits

0x126b,	// (0x00030d88) slider_set_pane_g6_ParamLimits

0x12ad,	// (0x00030dca) slider_set_pane_g7_ParamLimits

0xf993,	// (0x0003f4b0) slider_set_pane_g_ParamLimits

0x3bd4,	// (0x000336f1) navi_icon_text_pane_ParamLimits

0xcfc7,	// (0x0003cae4) aid_fill_nsta_2_ParamLimits

0xcffd,	// (0x0003cb1a) aid_touch_tab_arrow_left_ParamLimits

0xd013,	// (0x0003cb30) aid_touch_tab_arrow_right_ParamLimits

0xd0ae,	// (0x0003cbcb) clock_nsta_pane_ParamLimits

0xd53b,	// (0x0003d058) navi_icon_pane_g1_ParamLimits

0xd547,	// (0x0003d064) navi_text_pane_t1_ParamLimits

0xda6c,	// (0x0003d589) navi_icon_text_pane_g1_ParamLimits

0xda78,	// (0x0003d595) navi_icon_text_pane_t1_ParamLimits

0xe0ba,	// (0x0003dbd7) list_single_hc_apps_pane_g1_ParamLimits

0xbd79,	// (0x0003b896) list_single_hc_apps_pane_g2_ParamLimits

0xfd0d,	// (0x0003f82a) list_single_hc_apps_pane_g_ParamLimits

0xbd92,	// (0x0003b8af) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbdae,	// (0x0003b8cb) list_single_hc_apps_pane_t1_ParamLimits

0xb091,	// (0x0003abae) popup_toolbar2_fixed_window_ParamLimits

0xb091,	// (0x0003abae) popup_toolbar2_fixed_window

0xcf30,	// (0x0003ca4d) popup_toolbar2_float_window

0x21f6,	// (0x00031d13) bg_popup_sub_pane_cp27

0x8708,	// (0x00038225) grid_toolbar2_float_pane

0x21f6,	// (0x00031d13) bg_popup_sub_pane_cp26

0x8708,	// (0x00038225) grid_toolbar2_fixed_pane

0xe0d3,	// (0x0003dbf0) cell_toolbar2_fixed_pane_ParamLimits

0xe0d3,	// (0x0003dbf0) cell_toolbar2_fixed_pane

0xe0f0,	// (0x0003dc0d) cell_toolbar2_fixed_pane_g1

0x8729,	// (0x00038246) toolbar2_fixed_button_pane

0x4c26,	// (0x00034743) toolbar2_fixed_button_pane_g1

0x4c36,	// (0x00034753) toolbar2_fixed_button_pane_g2

0x4c2e,	// (0x0003474b) toolbar2_fixed_button_pane_g3

0x4c46,	// (0x00034763) toolbar2_fixed_button_pane_g4

0x4c3e,	// (0x0003475b) toolbar2_fixed_button_pane_g5

0x4c4e,	// (0x0003476b) toolbar2_fixed_button_pane_g6

0x4c56,	// (0x00034773) toolbar2_fixed_button_pane_g7

0x4c66,	// (0x00034783) toolbar2_fixed_button_pane_g8

0x4c5e,	// (0x0003477b) toolbar2_fixed_button_pane_g9

0x0008,

0xf895,	// (0x0003f3b2) toolbar2_fixed_button_pane_g

0x8731,	// (0x0003824e) cell_toolbar2_float_pane_ParamLimits

0x8731,	// (0x0003824e) cell_toolbar2_float_pane

0x8742,	// (0x0003825f) cell_toolbar2_float_pane_g1

0x8729,	// (0x00038246) toolbar2_fixed_button_pane_cp

0xdb96,	// (0x0003d6b3) fep_vkb_accented_list_pane_ParamLimits

0xdb96,	// (0x0003d6b3) fep_vkb_accented_list_pane

0x1774,	// (0x00031291) bg_popup_fep_shadow_pane_g9

0x3d58,	// (0x00033875) bg_popup_fep_shadow_pane_cp3

0x3263,	// (0x00032d80) list_accented_list_pane

0x874b,	// (0x00038268) list_single_accented_list_pane_ParamLimits

0x874b,	// (0x00038268) list_single_accented_list_pane

0x3d58,	// (0x00033875) list_highlight_pane_cp10

0x875c,	// (0x00038279) list_single_accented_list_pane_t1

0xce4c,	// (0x0003c969) popup_slider_window_ParamLimits

0xce4c,	// (0x0003c969) popup_slider_window

0x83a4,	// (0x00037ec1) aid_indentation_list_msg

0xe1fb,	// (0x0003dd18) bg_popup_window_pane_cp19

0x8896,	// (0x000383b3) popup_slider_window_g1

0x88b2,	// (0x000383cf) popup_slider_window_g2

0x88ce,	// (0x000383eb) popup_slider_window_g3

0x0005,

0xfd12,	// (0x0003f82f) popup_slider_window_g

0x892a,	// (0x00038447) popup_slider_window_t1

0x899e,	// (0x000384bb) small_volume_slider_vertical_pane

0x726a,	// (0x00036d87) small_volume_slider_vertical_pane_g1

0x726a,	// (0x00036d87) small_volume_slider_vertical_pane_g2

0x89ba,	// (0x000384d7) small_volume_slider_vertical_pane_g3

0x0002,

0xfd24,	// (0x0003f841) small_volume_slider_vertical_pane_g

0xaffb,	// (0x0003ab18) area_side_right_pane_ParamLimits

0xaffb,	// (0x0003ab18) area_side_right_pane

0xbddc,	// (0x0003b8f9) aid_size_side_button_ParamLimits

0xbddc,	// (0x0003b8f9) aid_size_side_button

0xbdf5,	// (0x0003b912) grid_sctrl_middle_pane_ParamLimits

0xbdf5,	// (0x0003b912) grid_sctrl_middle_pane

0x1997,	// (0x000314b4) sctrl_sk_bottom_pane

0x19a8,	// (0x000314c5) sctrl_sk_top_pane

0x19ba,	// (0x000314d7) aid_touch_sctrl_top

0x19c7,	// (0x000314e4) bg_sctrl_sk_pane_ParamLimits

0x19c7,	// (0x000314e4) bg_sctrl_sk_pane

0x19d5,	// (0x000314f2) sctrl_sk_top_pane_g1

0x19e2,	// (0x000314ff) sctrl_sk_top_pane_t1

0x19ba,	// (0x000314d7) aid_touch_sctrl_bottom

0x19c7,	// (0x000314e4) bg_sctrl_sk_pane_cp_ParamLimits

0x19c7,	// (0x000314e4) bg_sctrl_sk_pane_cp

0x19fd,	// (0x0003151a) sctrl_sk_bottom_pane_g1

0x19e2,	// (0x000314ff) sctrl_sk_bottom_pane_t1

0xbe0f,	// (0x0003b92c) cell_sctrl_middle_pane_ParamLimits

0xbe0f,	// (0x0003b92c) cell_sctrl_middle_pane

0xbe22,	// (0x0003b93f) aid_touch_sctrl_middle_ParamLimits

0xbe22,	// (0x0003b93f) aid_touch_sctrl_middle

0xbe2f,	// (0x0003b94c) bg_sctrl_middle_pane_ParamLimits

0xbe2f,	// (0x0003b94c) bg_sctrl_middle_pane

0x2077,	// (0x00031b94) cell_sctrl_middle_pane_g1_ParamLimits

0x2077,	// (0x00031b94) cell_sctrl_middle_pane_g1

0xbe3d,	// (0x0003b95a) cell_sctrl_middle_pane_g2_ParamLimits

0xbe3d,	// (0x0003b95a) cell_sctrl_middle_pane_g2

0x0001,

0xfd30,	// (0x0003f84d) cell_sctrl_middle_pane_g_ParamLimits

0xfd30,	// (0x0003f84d) cell_sctrl_middle_pane_g

0x4c26,	// (0x00034743) bg_sctrl_middle_pane_g1

0x4c2e,	// (0x0003474b) bg_sctrl_middle_pane_g2

0x4c36,	// (0x00034753) bg_sctrl_middle_pane_g3

0x4c3e,	// (0x0003475b) bg_sctrl_middle_pane_g4

0x4c46,	// (0x00034763) bg_sctrl_middle_pane_g5

0x4c4e,	// (0x0003476b) bg_sctrl_middle_pane_g6

0x4c56,	// (0x00034773) bg_sctrl_middle_pane_g7

0x4c5e,	// (0x0003477b) bg_sctrl_middle_pane_g8

0x0007,

0xfd35,	// (0x0003f852) bg_sctrl_middle_pane_g

0x4c66,	// (0x00034783) bg_sctrl_middle_pane_g8_copy1

0x4c26,	// (0x00034743) bg_sctrl_sk_pane_g1

0x4c36,	// (0x00034753) bg_sctrl_sk_pane_g2

0x4c2e,	// (0x0003474b) bg_sctrl_sk_pane_g3

0x0008,

0xf895,	// (0x0003f3b2) bg_sctrl_sk_pane_g

0x3029,	// (0x00032b46) aid_size_touch_scroll_bar

0x4c46,	// (0x00034763) bg_sctrl_sk_pane_g4

0x4c3e,	// (0x0003475b) bg_sctrl_sk_pane_g5

0x4c4e,	// (0x0003476b) bg_sctrl_sk_pane_g6

0x4c56,	// (0x00034773) bg_sctrl_sk_pane_g7

0x4c66,	// (0x00034783) bg_sctrl_sk_pane_g8

0x4c5e,	// (0x0003477b) bg_sctrl_sk_pane_g9

0x4188,	// (0x00033ca5) popup_fep_china_hwr2_fs_candidate_window

0xc908,	// (0x0003c425) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc908,	// (0x0003c425) popup_fep_china_hwr2_fs_control_window

0x1794,	// (0x000312b1) sctrl_sk_top_pane_g2

0x0001,

0xfd2b,	// (0x0003f848) sctrl_sk_top_pane_g

0xe2b3,	// (0x0003ddd0) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe2b3,	// (0x0003ddd0) aid_fep_china_hwr2_fs_cell

0xe2c9,	// (0x0003dde6) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe2c9,	// (0x0003dde6) bg_popup_fep_shadow_pane_cp4

0xe2e0,	// (0x0003ddfd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe2e0,	// (0x0003ddfd) bg_popup_fep_shadow_pane_cp5

0xe2f2,	// (0x0003de0f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe2f2,	// (0x0003de0f) popup_fep_china_hwr2_fs_control_bar_grid

0xe306,	// (0x0003de23) popup_fep_china_hwr2_fs_control_funtion_grid

0x8a19,	// (0x00038536) aid_fep_china_hwr2_fs_candi_cell

0x21f6,	// (0x00031d13) bg_popup_fep_shadow_pane_cp6

0x8a23,	// (0x00038540) popup_fep_china_hwr2_fs_candidate_grid

0xe30e,	// (0x0003de2b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe30e,	// (0x0003de2b) cell_fep_china_hwr2_fs_funtion_grid

0x726a,	// (0x00036d87) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8a45,	// (0x00038562) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8a45,	// (0x00038562) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8a53,	// (0x00038570) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8a53,	// (0x00038570) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd46,	// (0x0003f863) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd46,	// (0x0003f863) cell_fep_china_hwr2_fs_funtion_grid_g

0xe326,	// (0x0003de43) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe326,	// (0x0003de43) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe33b,	// (0x0003de58) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe33b,	// (0x0003de58) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd4b,	// (0x0003f868) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd4b,	// (0x0003f868) cell_fep_china_hwr2_fs_funtion_grid_t

0x8a9a,	// (0x000385b7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8aa2,	// (0x000385bf) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8aaa,	// (0x000385c7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd50,	// (0x0003f86d) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8ab2,	// (0x000385cf) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8ab2,	// (0x000385cf) cell_fep_china_hwr2_fs_candidate_grid

0x8ad1,	// (0x000385ee) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8ad9,	// (0x000385f6) popup_fep_china_hwr2_fs_candidate_grid_g21

0x726a,	// (0x00036d87) cell_fep_china_hwr2_fs_candidate_grid_g1

0x726a,	// (0x00036d87) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb64,	// (0x0003f681) cell_fep_china_hwr2_fs_candidate_grid_g

0x8ae1,	// (0x000385fe) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4803,	// (0x00034320) clock_nsta_pane_cp_24_ParamLimits

0x4803,	// (0x00034320) clock_nsta_pane_cp_24

0x4883,	// (0x000343a0) indicator_nsta_pane_cp_24_ParamLimits

0x4883,	// (0x000343a0) indicator_nsta_pane_cp_24

0x591e,	// (0x0003543b) heading_pane_g1

0x0001,

0xf8fa,	// (0x0003f417) heading_pane_g

0x63ce,	// (0x00035eeb) grid_sct_catagory_button_pane

0x6400,	// (0x00035f1d) scroll_pane_cp5_ParamLimits

0x6e71,	// (0x0003698e) button_value_adjust_pane_cp5_ParamLimits

0x6e71,	// (0x0003698e) button_value_adjust_pane_cp5

0x6f56,	// (0x00036a73) form2_midp_time_pane_ParamLimits

0x8aef,	// (0x0003860c) cell_sct_catagory_button_pane_ParamLimits

0x8aef,	// (0x0003860c) cell_sct_catagory_button_pane

0x722f,	// (0x00036d4c) bg_button_pane_cp01_ParamLimits

0x722f,	// (0x00036d4c) bg_button_pane_cp01

0x726a,	// (0x00036d87) cell_sct_catagory_button_pane_g1

0xcecd,	// (0x0003c9ea) popup_tb_extension_window

0xe357,	// (0x0003de74) aid_size_cell_ext_ParamLimits

0xe357,	// (0x0003de74) aid_size_cell_ext

0x2e6b,	// (0x00032988) bg_tb_trans_pane_cp1_ParamLimits

0x2e6b,	// (0x00032988) bg_tb_trans_pane_cp1

0xe37d,	// (0x0003de9a) grid_tb_ext_pane_ParamLimits

0xe37d,	// (0x0003de9a) grid_tb_ext_pane

0xe3ca,	// (0x0003dee7) cell_tb_ext_pane_ParamLimits

0xe3ca,	// (0x0003dee7) cell_tb_ext_pane

0xe3f4,	// (0x0003df11) cell_tb_ext_pane_g1_ParamLimits

0xe3f4,	// (0x0003df11) cell_tb_ext_pane_g1

0x8b85,	// (0x000386a2) cell_tb_ext_pane_t1

0x2574,	// (0x00032091) list_highlight_pane_cp11_ParamLimits

0x2574,	// (0x00032091) list_highlight_pane_cp11

0xf525,	// (0x0003f042) popup_uni_indicator_window_ParamLimits

0xf525,	// (0x0003f042) popup_uni_indicator_window

0x30fa,	// (0x00032c17) bg_popup_sub_pane_cp14

0x8ba0,	// (0x000386bd) list_uniindi_pane

0x8bac,	// (0x000386c9) uniindi_top_pane

0x2574,	// (0x00032091) bg_uniindi_top_pane

0x8bcd,	// (0x000386ea) uniindi_top_pane_g1

0x8be3,	// (0x00038700) uniindi_top_pane_g2

0x0003,

0xfd57,	// (0x0003f874) uniindi_top_pane_g

0x8c0d,	// (0x0003872a) uniindi_top_pane_t1

0x8c39,	// (0x00038756) list_single_uniindi_pane_ParamLimits

0x8c39,	// (0x00038756) list_single_uniindi_pane

0x726a,	// (0x00036d87) bg_uniindi_top_pane_g1

0x8c4b,	// (0x00038768) list_single_uniindi_pane_g1

0x8c5e,	// (0x0003877b) list_single_uniindi_pane_t1

0xf40c,	// (0x0003ef29) control_bg_pane

0x8c83,	// (0x000387a0) bg_sctrl_sk_pane_cp1

0x8c8c,	// (0x000387a9) bg_sctrl_sk_pane_cp2

0x8c95,	// (0x000387b2) control_bg_pane_g1

0x8c9e,	// (0x000387bb) control_bg_pane_g2

0x0001,

0xfd60,	// (0x0003f87d) control_bg_pane_g

0x6cc5,	// (0x000367e2) cell_indicator_nsta_pane_g1_ParamLimits

0xd9c5,	// (0x0003d4e2) cell_indicator_nsta_pane_g2_ParamLimits

0xfad5,	// (0x0003f5f2) cell_indicator_nsta_pane_g_ParamLimits

0x2943,	// (0x00032460) form2_midp_time_pane_t1_ParamLimits

0x7ca7,	// (0x000377c4) main_idle_act4_pane_ParamLimits

0x7ca7,	// (0x000377c4) main_idle_act4_pane

0xcecd,	// (0x0003c9ea) popup_tb_extension_window_ParamLimits

0xe3b2,	// (0x0003decf) tb_ext_find_pane_ParamLimits

0xe3b2,	// (0x0003decf) tb_ext_find_pane

0x8ca7,	// (0x000387c4) ai_gene_pane_1_cp1

0x3ea1,	// (0x000339be) ai_gene_pane_2_cp1

0x8caf,	// (0x000387cc) list_single_idle_plugin_calendar_pane

0x8cb8,	// (0x000387d5) list_single_idle_plugin_notification_pane

0x8cc1,	// (0x000387de) list_single_idle_plugin_player_pane

0xe411,	// (0x0003df2e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe411,	// (0x0003df2e) list_single_idle_plugin_shortcut_pane

0xe439,	// (0x0003df56) main_idle_act4_pane_t1

0xe451,	// (0x0003df6e) main_idle_act4_pane_t2

0x0001,

0xfd65,	// (0x0003f882) main_idle_act4_pane_t

0xe469,	// (0x0003df86) middle_sk_idle_act4_pane_ParamLimits

0xe469,	// (0x0003df86) middle_sk_idle_act4_pane

0xe485,	// (0x0003dfa2) popup_clock_digital_analogue_window_cp2

0xe4ac,	// (0x0003dfc9) shortcut_wheel_idle_act4_pane_ParamLimits

0xe4ac,	// (0x0003dfc9) shortcut_wheel_idle_act4_pane

0x726a,	// (0x00036d87) shortcut_wheel_idle_act4_pane_g1

0x726a,	// (0x00036d87) shortcut_wheel_idle_act4_pane_g2

0x726a,	// (0x00036d87) shortcut_wheel_idle_act4_pane_g3

0x726a,	// (0x00036d87) shortcut_wheel_idle_act4_pane_g4

0x726a,	// (0x00036d87) shortcut_wheel_idle_act4_pane_g5

0x8d54,	// (0x00038871) shortcut_wheel_idle_act4_pane_g6

0x8d5c,	// (0x00038879) shortcut_wheel_idle_act4_pane_g7

0x8d64,	// (0x00038881) shortcut_wheel_idle_act4_pane_g8

0x8d6c,	// (0x00038889) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd6a,	// (0x0003f887) shortcut_wheel_idle_act4_pane_g

0xd841,	// (0x0003d35e) middle_sk_idle_act4_pane_g1_ParamLimits

0xd841,	// (0x0003d35e) middle_sk_idle_act4_pane_g1

0xe529,	// (0x0003e046) middle_sk_idle_act4_pane_g2_ParamLimits

0xe529,	// (0x0003e046) middle_sk_idle_act4_pane_g2

0x0001,

0xfd8d,	// (0x0003f8aa) middle_sk_idle_act4_pane_g_ParamLimits

0xfd8d,	// (0x0003f8aa) middle_sk_idle_act4_pane_g

0xe541,	// (0x0003e05e) middle_sk_idle_act4_pane_t1_ParamLimits

0xe541,	// (0x0003e05e) middle_sk_idle_act4_pane_t1

0xe570,	// (0x0003e08d) grid_ai_shortcut_pane_ParamLimits

0xe570,	// (0x0003e08d) grid_ai_shortcut_pane

0xe58d,	// (0x0003e0aa) list_highlight_pane_cp16_ParamLimits

0xe58d,	// (0x0003e0aa) list_highlight_pane_cp16

0xe59a,	// (0x0003e0b7) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe59a,	// (0x0003e0b7) list_single_idle_plugin_shortcut_pane_g1

0xe5a6,	// (0x0003e0c3) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe5a6,	// (0x0003e0c3) list_single_idle_plugin_shortcut_pane_g2

0xe5c4,	// (0x0003e0e1) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe5c4,	// (0x0003e0e1) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd92,	// (0x0003f8af) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd92,	// (0x0003f8af) list_single_idle_plugin_shortcut_pane_g

0xe5d9,	// (0x0003e0f6) cell_ai_shortcut_pane_ParamLimits

0xe5d9,	// (0x0003e0f6) cell_ai_shortcut_pane

0xe5ef,	// (0x0003e10c) cell_ai_shortcut_pane_g1_ParamLimits

0xe5ef,	// (0x0003e10c) cell_ai_shortcut_pane_g1

0x8ca7,	// (0x000387c4) ai_gene_pane_1_cp2

0x8e9d,	// (0x000389ba) ai_gene_pane_2_cp2

0x8ea5,	// (0x000389c2) list_highlight_pane_cp15

0x8eae,	// (0x000389cb) list_single_idle_plugin_calendar_pane_g1

0x8ea5,	// (0x000389c2) list_highlight_pane_cp17

0x8eb6,	// (0x000389d3) list_single_idle_plugin_calendar_pane_g1_copy1

0x8ebe,	// (0x000389db) list_single_idle_plugin_player_pane_g1

0x6635,	// (0x00036152) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd99,	// (0x0003f8b6) list_single_idle_plugin_player_pane_g

0x8ec6,	// (0x000389e3) list_single_idle_plugin_player_pane_t1

0x8ed4,	// (0x000389f1) list_single_idle_plugin_player_pane_t2

0x8ee2,	// (0x000389ff) list_single_idle_plugin_player_pane_t3

0x8ef0,	// (0x00038a0d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd9e,	// (0x0003f8bb) list_single_idle_plugin_player_pane_t

0x8efe,	// (0x00038a1b) wait_bar_pane_cp15

0x8f06,	// (0x00038a23) grid_ai_notification_pane

0x6635,	// (0x00036152) list_single_idle_plugin_notification_pane_g1

0xe611,	// (0x0003e12e) cell_ai_notification_pane_ParamLimits

0xe611,	// (0x0003e12e) cell_ai_notification_pane

0x8f1c,	// (0x00038a39) cell_ai_notification_pane_g1

0x8f24,	// (0x00038a41) cell_ai_notification_pane_t1

0xe61e,	// (0x0003e13b) tb_ext_find_button_pane

0xe626,	// (0x0003e143) tb_ext_find_pane_g1

0xe62e,	// (0x0003e14b) tb_ext_find_pane_t1

0x376a,	// (0x00033287) tb_ext_find_button_pane_g1

0x8f50,	// (0x00038a6d) tb_ext_find_button_pane_g2

0x0001,

0xfda7,	// (0x0003f8c4) tb_ext_find_button_pane_g

0xe439,	// (0x0003df56) main_idle_act4_pane_t1_ParamLimits

0xe451,	// (0x0003df6e) main_idle_act4_pane_t2_ParamLimits

0xfd65,	// (0x0003f882) main_idle_act4_pane_t_ParamLimits

0xe485,	// (0x0003dfa2) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe49c,	// (0x0003dfb9) sat_plugin_idle_act4_pane_ParamLimits

0xe49c,	// (0x0003dfb9) sat_plugin_idle_act4_pane

0xe63c,	// (0x0003e159) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe63c,	// (0x0003e159) sat_plugin_idle_act4_pane_t1

0xe654,	// (0x0003e171) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe654,	// (0x0003e171) sat_plugin_idle_act4_pane_t2

0xe66c,	// (0x0003e189) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe66c,	// (0x0003e189) sat_plugin_idle_act4_pane_t3

0xe684,	// (0x0003e1a1) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe684,	// (0x0003e1a1) sat_plugin_idle_act4_pane_t4

0x0003,

0xfdac,	// (0x0003f8c9) sat_plugin_idle_act4_pane_t_ParamLimits

0xfdac,	// (0x0003f8c9) sat_plugin_idle_act4_pane_t

0xf4d1,	// (0x0003efee) popup_battery_window_ParamLimits

0xf4d1,	// (0x0003efee) popup_battery_window

0x2574,	// (0x00032091) bg_popup_sub_pane_cp25_ParamLimits

0x2574,	// (0x00032091) bg_popup_sub_pane_cp25

0x8fa5,	// (0x00038ac2) popup_battery_window_g1_ParamLimits

0x8fa5,	// (0x00038ac2) popup_battery_window_g1

0x8fb1,	// (0x00038ace) popup_battery_window_t1_ParamLimits

0x8fb1,	// (0x00038ace) popup_battery_window_t1

0x8fc3,	// (0x00038ae0) popup_battery_window_t2_ParamLimits

0x8fc3,	// (0x00038ae0) popup_battery_window_t2

0x0001,

0xfdb5,	// (0x0003f8d2) popup_battery_window_t_ParamLimits

0xfdb5,	// (0x0003f8d2) popup_battery_window_t

0xc79c,	// (0x0003c2b9) midp_canvas_pane_ParamLimits

0xc7f7,	// (0x0003c314) midp_keypad_pane_ParamLimits

0xc7f7,	// (0x0003c314) midp_keypad_pane

0x40de,	// (0x00033bfb) main_midp_pane_ParamLimits

0x6d1e,	// (0x0003683b) signal_pane_g2_cp_ParamLimits

0xe69c,	// (0x0003e1b9) aid_size_cell_midp_keypad_ParamLimits

0xe69c,	// (0x0003e1b9) aid_size_cell_midp_keypad

0xe6ba,	// (0x0003e1d7) midp_keyp_game_grid_pane_ParamLimits

0xe6ba,	// (0x0003e1d7) midp_keyp_game_grid_pane

0xe6e1,	// (0x0003e1fe) midp_keyp_rocker_pane_ParamLimits

0xe6e1,	// (0x0003e1fe) midp_keyp_rocker_pane

0xe726,	// (0x0003e243) midp_keyp_sk_left_pane_ParamLimits

0xe726,	// (0x0003e243) midp_keyp_sk_left_pane

0xe77a,	// (0x0003e297) midp_keyp_sk_right_pane_ParamLimits

0xe77a,	// (0x0003e297) midp_keyp_sk_right_pane

0x21f6,	// (0x00031d13) bg_button_pane_cp03

0xe7ce,	// (0x0003e2eb) midp_keyp_sk_left_pane_g1

0x21f6,	// (0x00031d13) bg_button_pane_cp04

0xe7ce,	// (0x0003e2eb) midp_keyp_sk_right_pane_g1

0x726a,	// (0x00036d87) midp_keyp_rocker_pane_g1

0xe7d7,	// (0x0003e2f4) keyp_game_cell_pane_ParamLimits

0xe7d7,	// (0x0003e2f4) keyp_game_cell_pane

0x21f6,	// (0x00031d13) bg_button_pane_cp02

0xe7fd,	// (0x0003e31a) keyp_game_cell_pane_g1

0xb03d,	// (0x0003ab5a) popup_fep_vkb2_window_ParamLimits

0xb03d,	// (0x0003ab5a) popup_fep_vkb2_window

0xbe49,	// (0x0003b966) aid_size_cell_vkb2_ParamLimits

0xbe49,	// (0x0003b966) aid_size_cell_vkb2

0xbe77,	// (0x0003b994) popup_fep_vkb2_window_g1_ParamLimits

0xbe77,	// (0x0003b994) popup_fep_vkb2_window_g1

0xbec7,	// (0x0003b9e4) vkb2_area_bottom_pane_ParamLimits

0xbec7,	// (0x0003b9e4) vkb2_area_bottom_pane

0xbf23,	// (0x0003ba40) vkb2_area_keypad_pane_ParamLimits

0xbf23,	// (0x0003ba40) vkb2_area_keypad_pane

0xbf71,	// (0x0003ba8e) vkb2_area_top_pane_ParamLimits

0xbf71,	// (0x0003ba8e) vkb2_area_top_pane

0xbff7,	// (0x0003bb14) vkb2_top_entry_pane_ParamLimits

0xbff7,	// (0x0003bb14) vkb2_top_entry_pane

0xc024,	// (0x0003bb41) vkb2_top_grid_left_pane_ParamLimits

0xc024,	// (0x0003bb41) vkb2_top_grid_left_pane

0xc044,	// (0x0003bb61) vkb2_top_grid_right_pane_ParamLimits

0xc044,	// (0x0003bb61) vkb2_top_grid_right_pane

0x1c73,	// (0x00031790) vkb2_cell_keypad_pane_ParamLimits

0x1c73,	// (0x00031790) vkb2_cell_keypad_pane

0xc08a,	// (0x0003bba7) vkb2_area_bottom_grid_pane_ParamLimits

0xc08a,	// (0x0003bba7) vkb2_area_bottom_grid_pane

0xc0b4,	// (0x0003bbd1) vkb2_area_bottom_pane_g1_ParamLimits

0xc0b4,	// (0x0003bbd1) vkb2_area_bottom_pane_g1

0xc0da,	// (0x0003bbf7) vkb2_area_bottom_pane_g2_ParamLimits

0xc0da,	// (0x0003bbf7) vkb2_area_bottom_pane_g2

0xc10b,	// (0x0003bc28) vkb2_area_bottom_pane_g3_ParamLimits

0xc10b,	// (0x0003bc28) vkb2_area_bottom_pane_g3

0x0002,

0xfdba,	// (0x0003f8d7) vkb2_area_bottom_pane_g_ParamLimits

0xfdba,	// (0x0003f8d7) vkb2_area_bottom_pane_g

0x1e02,	// (0x0003191f) vkb2_top_cell_left_pane_ParamLimits

0x1e02,	// (0x0003191f) vkb2_top_cell_left_pane

0xe806,	// (0x0003e323) vkb2_top_entry_pane_g1_ParamLimits

0xe806,	// (0x0003e323) vkb2_top_entry_pane_g1

0xe814,	// (0x0003e331) vkb2_top_entry_pane_t1_ParamLimits

0xe814,	// (0x0003e331) vkb2_top_entry_pane_t1

0x9150,	// (0x00038c6d) vkb2_top_entry_pane_t2_ParamLimits

0x9150,	// (0x00038c6d) vkb2_top_entry_pane_t2

0x9168,	// (0x00038c85) vkb2_top_entry_pane_t3_ParamLimits

0x9168,	// (0x00038c85) vkb2_top_entry_pane_t3

0x0002,

0xfdc1,	// (0x0003f8de) vkb2_top_entry_pane_t_ParamLimits

0xfdc1,	// (0x0003f8de) vkb2_top_entry_pane_t

0xc175,	// (0x0003bc92) vkb2_top_grid_right_pane_g1_ParamLimits

0xc175,	// (0x0003bc92) vkb2_top_grid_right_pane_g1

0x1e65,	// (0x00031982) vkb2_top_grid_right_pane_g2_ParamLimits

0x1e65,	// (0x00031982) vkb2_top_grid_right_pane_g2

0x1e7d,	// (0x0003199a) vkb2_top_grid_right_pane_g3_ParamLimits

0x1e7d,	// (0x0003199a) vkb2_top_grid_right_pane_g3

0xc18b,	// (0x0003bca8) vkb2_top_grid_right_pane_g4_ParamLimits

0xc18b,	// (0x0003bca8) vkb2_top_grid_right_pane_g4

0x0003,

0xfdc8,	// (0x0003f8e5) vkb2_top_grid_right_pane_g_ParamLimits

0xfdc8,	// (0x0003f8e5) vkb2_top_grid_right_pane_g

0x1eab,	// (0x000319c8) vkb2_top_cell_left_pane_g1

0x1ec2,	// (0x000319df) vkb2_cell_keypad_pane_g1_ParamLimits

0x1ec2,	// (0x000319df) vkb2_cell_keypad_pane_g1

0x917e,	// (0x00038c9b) vkb2_cell_keypad_pane_t1_ParamLimits

0x917e,	// (0x00038c9b) vkb2_cell_keypad_pane_t1

0x1ee6,	// (0x00031a03) vkb2_cell_bottom_grid_pane_ParamLimits

0x1ee6,	// (0x00031a03) vkb2_cell_bottom_grid_pane

0x1f1f,	// (0x00031a3c) vkb2_cell_bottom_grid_pane_g1

0xe4cd,	// (0x0003dfea) aid_call2_pane_cp02

0xe4d5,	// (0x0003dff2) aid_call_pane_cp02

0xe4dd,	// (0x0003dffa) clock_digital_number_pane_cp10

0xe4e5,	// (0x0003e002) clock_digital_number_pane_cp11

0xe4ed,	// (0x0003e00a) clock_digital_number_pane_cp12

0xe4f5,	// (0x0003e012) clock_digital_number_pane_cp13

0xe4fd,	// (0x0003e01a) clock_digital_separator_pane_cp10

0x376a,	// (0x00033287) popup_clock_digital_analogue_window_cp2_g1

0x376a,	// (0x00033287) popup_clock_digital_analogue_window_cp2_g2

0xe505,	// (0x0003e022) popup_clock_digital_analogue_window_cp2_g3

0x376a,	// (0x00033287) popup_clock_digital_analogue_window_cp2_g4

0xe505,	// (0x0003e022) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd7d,	// (0x0003f89a) popup_clock_digital_analogue_window_cp2_g

0xe50d,	// (0x0003e02a) popup_clock_digital_analogue_window_cp2_t1

0xe51b,	// (0x0003e038) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd88,	// (0x0003f8a5) popup_clock_digital_analogue_window_cp2_t

0x726a,	// (0x00036d87) clock_digital_number_pane_cp10_g1

0x726a,	// (0x00036d87) clock_digital_number_pane_cp10_g2

0x0001,

0xfb64,	// (0x0003f681) clock_digital_number_pane_cp10_g

0x726a,	// (0x00036d87) clock_digital_separator_pane_cp10_g1

0x726a,	// (0x00036d87) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb64,	// (0x0003f681) clock_digital_separator_pane_cp10_g

0x8bef,	// (0x0003870c) uniindi_top_pane_g3

0x8c00,	// (0x0003871d) uniindi_top_pane_g4

0x1ce3,	// (0x00031800) vkb2_row_keypad_pane_ParamLimits

0x1ce3,	// (0x00031800) vkb2_row_keypad_pane

0x1f3b,	// (0x00031a58) vkb2_cell_t_keypad_pane_ParamLimits

0x1f3b,	// (0x00031a58) vkb2_cell_t_keypad_pane

0x1f4b,	// (0x00031a68) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1f4b,	// (0x00031a68) vkb2_cell_t_keypad_pane_cp08

0x1f60,	// (0x00031a7d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1f60,	// (0x00031a7d) vkb2_cell_t_keypad_pane_cp09

0x1f74,	// (0x00031a91) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1f74,	// (0x00031a91) vkb2_cell_t_keypad_pane_cp01

0x1f85,	// (0x00031aa2) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1f85,	// (0x00031aa2) vkb2_cell_t_keypad_pane_cp02

0x1f96,	// (0x00031ab3) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1f96,	// (0x00031ab3) vkb2_cell_t_keypad_pane_cp03

0x1fa7,	// (0x00031ac4) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1fa7,	// (0x00031ac4) vkb2_cell_t_keypad_pane_cp04

0x1fb8,	// (0x00031ad5) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1fb8,	// (0x00031ad5) vkb2_cell_t_keypad_pane_cp05

0x1fc9,	// (0x00031ae6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1fc9,	// (0x00031ae6) vkb2_cell_t_keypad_pane_cp06

0x1fdc,	// (0x00031af9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1fdc,	// (0x00031af9) vkb2_cell_t_keypad_pane_cp07

0x1ff1,	// (0x00031b0e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1ff1,	// (0x00031b0e) vkb2_cell_t_keypad_pane_cp10

0x1794,	// (0x000312b1) vkb2_cell_t_keypad_pane_g1

0x9195,	// (0x00038cb2) vkb2_cell_t_keypad_pane_t1

0xf40c,	// (0x0003ef29) popup_grid_graphic2_window

0xe84d,	// (0x0003e36a) aid_size_cell_graphic2_ParamLimits

0xe84d,	// (0x0003e36a) aid_size_cell_graphic2

0x529b,	// (0x00034db8) bg_popup_window_pane_cp21_ParamLimits

0x529b,	// (0x00034db8) bg_popup_window_pane_cp21

0xe87f,	// (0x0003e39c) graphic2_pages_pane_ParamLimits

0xe87f,	// (0x0003e39c) graphic2_pages_pane

0xe8d7,	// (0x0003e3f4) grid_graphic2_control_pane_ParamLimits

0xe8d7,	// (0x0003e3f4) grid_graphic2_control_pane

0xe90b,	// (0x0003e428) grid_graphic2_pane_ParamLimits

0xe90b,	// (0x0003e428) grid_graphic2_pane

0xe982,	// (0x0003e49f) cell_graphic2_pane

0x21f6,	// (0x00031d13) main_comp_mode_pane

0x8460,	// (0x00037f7d) list_ai3_gene_pane_ParamLimits

0xe1fb,	// (0x0003dd18) bg_popup_window_pane_cp19_ParamLimits

0x8834,	// (0x00038351) bg_touch_area_indi_pane_ParamLimits

0x8834,	// (0x00038351) bg_touch_area_indi_pane

0x884a,	// (0x00038367) bg_touch_area_indi_pane_cp01_ParamLimits

0x884a,	// (0x00038367) bg_touch_area_indi_pane_cp01

0x8862,	// (0x0003837f) bg_touch_area_indi_pane_cp02_ParamLimits

0x8862,	// (0x0003837f) bg_touch_area_indi_pane_cp02

0x887c,	// (0x00038399) bg_touch_area_indi_pane_cp03_ParamLimits

0x887c,	// (0x00038399) bg_touch_area_indi_pane_cp03

0x8896,	// (0x000383b3) popup_slider_window_g1_ParamLimits

0x88b2,	// (0x000383cf) popup_slider_window_g2_ParamLimits

0x88ce,	// (0x000383eb) popup_slider_window_g3_ParamLimits

0xfd12,	// (0x0003f82f) popup_slider_window_g_ParamLimits

0x892a,	// (0x00038447) popup_slider_window_t1_ParamLimits

0x899e,	// (0x000384bb) small_volume_slider_vertical_pane_ParamLimits

0xe982,	// (0x0003e49f) cell_graphic2_pane_ParamLimits

0xe9e5,	// (0x0003e502) bg_button_pane_cp10_ParamLimits

0xe9e5,	// (0x0003e502) bg_button_pane_cp10

0xe9f8,	// (0x0003e515) bg_button_pane_cp11_ParamLimits

0xe9f8,	// (0x0003e515) bg_button_pane_cp11

0xea0b,	// (0x0003e528) graphic2_pages_pane_g1_ParamLimits

0xea0b,	// (0x0003e528) graphic2_pages_pane_g1

0xea26,	// (0x0003e543) graphic2_pages_pane_g2_ParamLimits

0xea26,	// (0x0003e543) graphic2_pages_pane_g2

0x0001,

0xfdd6,	// (0x0003f8f3) graphic2_pages_pane_g_ParamLimits

0xfdd6,	// (0x0003f8f3) graphic2_pages_pane_g

0xea3e,	// (0x0003e55b) graphic2_pages_pane_t1_ParamLimits

0xea3e,	// (0x0003e55b) graphic2_pages_pane_t1

0xea56,	// (0x0003e573) cell_graphic2_control_pane_ParamLimits

0xea56,	// (0x0003e573) cell_graphic2_control_pane

0xea70,	// (0x0003e58d) cell_graphic2_pane_g1_ParamLimits

0xea70,	// (0x0003e58d) cell_graphic2_pane_g1

0xd84f,	// (0x0003d36c) cell_graphic2_pane_g2_ParamLimits

0xd84f,	// (0x0003d36c) cell_graphic2_pane_g2

0xe3a5,	// (0x0003dec2) cell_graphic2_pane_g3_ParamLimits

0xe3a5,	// (0x0003dec2) cell_graphic2_pane_g3

0xd85c,	// (0x0003d379) cell_graphic2_pane_g4_ParamLimits

0xd85c,	// (0x0003d379) cell_graphic2_pane_g4

0xea7d,	// (0x0003e59a) cell_graphic2_pane_g5_ParamLimits

0xea7d,	// (0x0003e59a) cell_graphic2_pane_g5

0x0004,

0xfddb,	// (0x0003f8f8) cell_graphic2_pane_g_ParamLimits

0xfddb,	// (0x0003f8f8) cell_graphic2_pane_g

0xea9d,	// (0x0003e5ba) cell_graphic2_pane_t1_ParamLimits

0xea9d,	// (0x0003e5ba) cell_graphic2_pane_t1

0x5912,	// (0x0003542f) grid_highlight_pane_cp11_ParamLimits

0x5912,	// (0x0003542f) grid_highlight_pane_cp11

0x30fa,	// (0x00032c17) bg_button_pane_cp05

0xeab4,	// (0x0003e5d1) cell_graphic2_control_pane_g1

0x726a,	// (0x00036d87) bg_touch_area_indi_pane_g1

0x941e,	// (0x00038f3b) aid_cmod_rocker_key_size

0x9428,	// (0x00038f45) aid_cmode_itu_key_size

0x9432,	// (0x00038f4f) main_cmode_video_pane

0x943c,	// (0x00038f59) main_comp_mode_itu_pane

0x9448,	// (0x00038f65) main_comp_mode_rocker_pane

0x9454,	// (0x00038f71) cell_cmode_rocker_pane_ParamLimits

0x9454,	// (0x00038f71) cell_cmode_rocker_pane

0x9468,	// (0x00038f85) cell_cmode_itu_pane_ParamLimits

0x9468,	// (0x00038f85) cell_cmode_itu_pane

0x30fa,	// (0x00032c17) bg_button_pane_cp06_ParamLimits

0x30fa,	// (0x00032c17) bg_button_pane_cp06

0x74f4,	// (0x00037011) cell_cmode_rocker_pane_g1_ParamLimits

0x74f4,	// (0x00037011) cell_cmode_rocker_pane_g1

0x8a45,	// (0x00038562) cell_cmode_rocker_pane_g2_ParamLimits

0x8a45,	// (0x00038562) cell_cmode_rocker_pane_g2

0x0001,

0xfde6,	// (0x0003f903) cell_cmode_rocker_pane_g_ParamLimits

0xfde6,	// (0x0003f903) cell_cmode_rocker_pane_g

0x21f6,	// (0x00031d13) bg_button_pane_cp07

0x947f,	// (0x00038f9c) cell_cmode_itu_pane_g1

0x9488,	// (0x00038fa5) cell_cmode_itu_pane_t1

0x9496,	// (0x00038fb3) cell_cmode_itu_pane_t2

0x0001,

0xfdeb,	// (0x0003f908) cell_cmode_itu_pane_t

0x8c73,	// (0x00038790) aid_touch_ctrl_left

0x8c7b,	// (0x00038798) aid_touch_ctrl_right

0x21f6,	// (0x00031d13) compa_mode_pane

0xeac1,	// (0x0003e5de) aid_cmod_rocker_key_size_cp

0xeacb,	// (0x0003e5e8) aid_cmode_itu_key_size_cp

0x94b8,	// (0x00038fd5) compa_mode_pane_g1

0x94c0,	// (0x00038fdd) compa_mode_pane_g2

0x94c8,	// (0x00038fe5) compa_mode_pane_g3

0x0002,

0xfdf0,	// (0x0003f90d) compa_mode_pane_g

0xead5,	// (0x0003e5f2) main_comp_mode_itu_pane_cp

0xeadd,	// (0x0003e5fa) main_comp_mode_rocker_pane_cp

0xeae5,	// (0x0003e602) cell_cmode_itu_pane_cp_ParamLimits

0xeae5,	// (0x0003e602) cell_cmode_itu_pane_cp

0xeafa,	// (0x0003e617) cell_cmode_rocker_pane_cp_ParamLimits

0xeafa,	// (0x0003e617) cell_cmode_rocker_pane_cp

0x30fa,	// (0x00032c17) bg_button_pane_cp06_cp_ParamLimits

0x30fa,	// (0x00032c17) bg_button_pane_cp06_cp

0x74f4,	// (0x00037011) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x74f4,	// (0x00037011) cell_cmode_rocker_pane_g1_cp

0x726a,	// (0x00036d87) cell_cmode_rocker_pane_g2_cp

0x21f6,	// (0x00031d13) bg_button_pane_cp07_cp

0xeb0c,	// (0x0003e629) cell_cmode_itu_pane_g1_cp

0xeb15,	// (0x0003e632) cell_cmode_itu_pane_t1_cp

0xeb15,	// (0x0003e632) cell_cmode_itu_pane_t2_cp

0xd7e4,	// (0x0003d301) settings_code_pane_cp2

0x22ea,	// (0x00031e07) bg_popup_window_pane_cp3_ParamLimits

0x2762,	// (0x0003227f) heading_pane_cp3_ParamLimits

0x2cf7,	// (0x00032814) listscroll_popup_graphic_pane_ParamLimits

0x1527,	// (0x00031044) fep_hwr_aid_pane_ParamLimits

0x19ba,	// (0x000314d7) aid_touch_sctrl_top_ParamLimits

0x19d5,	// (0x000314f2) sctrl_sk_top_pane_g1_ParamLimits

0x1794,	// (0x000312b1) sctrl_sk_top_pane_g2_ParamLimits

0xfd2b,	// (0x0003f848) sctrl_sk_top_pane_g_ParamLimits

0x19e2,	// (0x000314ff) sctrl_sk_top_pane_t1_ParamLimits

0x19ba,	// (0x000314d7) aid_touch_sctrl_bottom_ParamLimits

0x19e2,	// (0x000314ff) sctrl_sk_bottom_pane_t1_ParamLimits

0x8bb9,	// (0x000386d6) aid_area_touch_clock

0xbfb9,	// (0x0003bad6) aid_vkb2_area_top_pane_cell_ParamLimits

0xbfb9,	// (0x0003bad6) aid_vkb2_area_top_pane_cell

0xc064,	// (0x0003bb81) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc064,	// (0x0003bb81) aid_vkb2_area_bottom_pane_cell

0x9122,	// (0x00038c3f) popup_char_count_window

0x951e,	// (0x0003903b) popup_char_count_window_g1

0x9527,	// (0x00039044) popup_char_count_window_g2

0x9530,	// (0x0003904d) popup_char_count_window_g3

0x0002,

0xfdf7,	// (0x0003f914) popup_char_count_window_g

0x9539,	// (0x00039056) popup_char_count_window_t1

0x1a8f,	// (0x000315ac) popup_fep_char_preview_window_ParamLimits

0x1a8f,	// (0x000315ac) popup_fep_char_preview_window

0xbfd9,	// (0x0003baf6) vkb2_top_candi_pane_ParamLimits

0xbfd9,	// (0x0003baf6) vkb2_top_candi_pane

0xeb23,	// (0x0003e640) cell_vkb2_top_candi_pane_ParamLimits

0xeb23,	// (0x0003e640) cell_vkb2_top_candi_pane

0x2006,	// (0x00031b23) bg_popup_fep_char_preview_window_ParamLimits

0x2006,	// (0x00031b23) bg_popup_fep_char_preview_window

0x2014,	// (0x00031b31) popup_fep_char_preview_window_t1_ParamLimits

0x2014,	// (0x00031b31) popup_fep_char_preview_window_t1

0x9598,	// (0x000390b5) bg_popup_fep_char_preview_window_g1

0x95a0,	// (0x000390bd) bg_popup_fep_char_preview_window_g2

0x95a8,	// (0x000390c5) bg_popup_fep_char_preview_window_g3

0x95b0,	// (0x000390cd) bg_popup_fep_char_preview_window_g4

0x95b8,	// (0x000390d5) bg_popup_fep_char_preview_window_g5

0x204e,	// (0x00031b6b) bg_popup_fep_char_preview_window_g6

0x95c0,	// (0x000390dd) bg_popup_fep_char_preview_window_g7

0x95c8,	// (0x000390e5) bg_popup_fep_char_preview_window_g8

0x95d0,	// (0x000390ed) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdfe,	// (0x0003f91b) bg_popup_fep_char_preview_window_g

0x1794,	// (0x000312b1) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1794,	// (0x000312b1) cell_vkb2_top_candi_pane_g1

0x17a2,	// (0x000312bf) cell_vkb2_top_candi_pane_g2_ParamLimits

0x17a2,	// (0x000312bf) cell_vkb2_top_candi_pane_g2

0x9328,	// (0x00038e45) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9328,	// (0x00038e45) cell_vkb2_top_candi_pane_g3

0x2056,	// (0x00031b73) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2056,	// (0x00031b73) cell_vkb2_top_candi_pane_g4

0x79f3,	// (0x00037510) cell_vkb2_top_candi_pane_g5_ParamLimits

0x79f3,	// (0x00037510) cell_vkb2_top_candi_pane_g5

0x2077,	// (0x00031b94) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2077,	// (0x00031b94) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe11,	// (0x0003f92e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe11,	// (0x0003f92e) cell_vkb2_top_candi_pane_g

0x2085,	// (0x00031ba2) cell_vkb2_top_candi_pane_t1

0x124b,	// (0x00030d68) aid_size_touch_slider_mark_ParamLimits

0x124b,	// (0x00030d68) aid_size_touch_slider_mark

0xe8bb,	// (0x0003e3d8) grid_graphic2_catg_pane_ParamLimits

0xe8bb,	// (0x0003e3d8) grid_graphic2_catg_pane

0xe951,	// (0x0003e46e) popup_grid_graphic2_window_t1_ParamLimits

0xe951,	// (0x0003e46e) popup_grid_graphic2_window_t1

0xe967,	// (0x0003e484) popup_grid_graphic2_window_t2_ParamLimits

0xe967,	// (0x0003e484) popup_grid_graphic2_window_t2

0x0001,

0xfdd1,	// (0x0003f8ee) popup_grid_graphic2_window_t_ParamLimits

0xfdd1,	// (0x0003f8ee) popup_grid_graphic2_window_t

0x30fa,	// (0x00032c17) bg_button_pane_cp05_ParamLimits

0xeab4,	// (0x0003e5d1) cell_graphic2_control_pane_g1_ParamLimits

0xeb77,	// (0x0003e694) cell_graphic2_catg_pane_ParamLimits

0xeb77,	// (0x0003e694) cell_graphic2_catg_pane

0x21f6,	// (0x00031d13) bg_button_pane_cp12

0xeb89,	// (0x0003e6a6) cell_graphic2_catg_pane_g1

0x8b85,	// (0x000386a2) cell_tb_ext_pane_t1_ParamLimits

0x1e22,	// (0x0003193f) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1e22,	// (0x0003193f) vkb2_top_cell_right_narrow_pane

0x1e3a,	// (0x00031957) vkb2_top_cell_right_wide_pane_ParamLimits

0x1e3a,	// (0x00031957) vkb2_top_cell_right_wide_pane

0x1519,	// (0x00031036) bg_vkb2_func_pane_ParamLimits

0x1519,	// (0x00031036) bg_vkb2_func_pane

0x1eab,	// (0x000319c8) vkb2_top_cell_left_pane_g1_ParamLimits

0x1519,	// (0x00031036) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1519,	// (0x00031036) bg_vkb2_fuc_pane_cp03

0x1f1f,	// (0x00031a3c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4c2e,	// (0x0003474b) bg_vkb2_func_pane_g1

0x4c36,	// (0x00034753) bg_vkb2_func_pane_g2

0x4c46,	// (0x00034763) bg_vkb2_func_pane_g3

0x4c3e,	// (0x0003475b) bg_vkb2_func_pane_g4

0x4c4e,	// (0x0003476b) bg_vkb2_func_pane_g5

0x4c56,	// (0x00034773) bg_vkb2_func_pane_g6

0x4c5e,	// (0x0003477b) bg_vkb2_func_pane_g7

0x4c66,	// (0x00034783) bg_vkb2_func_pane_g8

0x4c26,	// (0x00034743) bg_vkb2_func_pane_g9

0x0008,

0xfe1e,	// (0x0003f93b) bg_vkb2_func_pane_g

0x1519,	// (0x00031036) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1519,	// (0x00031036) bg_vkb2_fuc_pane_cp01

0x1eab,	// (0x000319c8) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1eab,	// (0x000319c8) vkb2_top_cell_right_wide_pane_g1

0x1519,	// (0x00031036) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1519,	// (0x00031036) bg_vkb2_fuc_pane_cp02

0x1f1f,	// (0x00031a3c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1f1f,	// (0x00031a3c) vkb2_top_cell_right_narrow_pane_g1

0xe135,	// (0x0003dc52) aid_touch_area_decrease_ParamLimits

0xe135,	// (0x0003dc52) aid_touch_area_decrease

0xe16f,	// (0x0003dc8c) aid_touch_area_increase_ParamLimits

0xe16f,	// (0x0003dc8c) aid_touch_area_increase

0xe197,	// (0x0003dcb4) aid_touch_area_mute_ParamLimits

0xe197,	// (0x0003dcb4) aid_touch_area_mute

0xe1c7,	// (0x0003dce4) aid_touch_area_slider_ParamLimits

0xe1c7,	// (0x0003dce4) aid_touch_area_slider

0xe207,	// (0x0003dd24) popup_slider_window_g4_ParamLimits

0xe207,	// (0x0003dd24) popup_slider_window_g4

0xe22f,	// (0x0003dd4c) popup_slider_window_g5_ParamLimits

0xe22f,	// (0x0003dd4c) popup_slider_window_g5

0xe263,	// (0x0003dd80) popup_slider_window_g6_ParamLimits

0xe263,	// (0x0003dd80) popup_slider_window_g6

0x8958,	// (0x00038475) popup_slider_window_t2_ParamLimits

0x8958,	// (0x00038475) popup_slider_window_t2

0x0001,

0xfd1f,	// (0x0003f83c) popup_slider_window_t_ParamLimits

0xfd1f,	// (0x0003f83c) popup_slider_window_t

0xe27f,	// (0x0003dd9c) slider_pane_ParamLimits

0xe27f,	// (0x0003dd9c) slider_pane

0x95f3,	// (0x00039110) slider_pane_g1_ParamLimits

0x95f3,	// (0x00039110) slider_pane_g1

0x9607,	// (0x00039124) slider_pane_g2_ParamLimits

0x9607,	// (0x00039124) slider_pane_g2

0x961d,	// (0x0003913a) slider_pane_g3_ParamLimits

0x961d,	// (0x0003913a) slider_pane_g3

0x0003,

0xfe31,	// (0x0003f94e) slider_pane_g_ParamLimits

0xfe31,	// (0x0003f94e) slider_pane_g

0xcf19,	// (0x0003ca36) popup_tb_float_extension_window_ParamLimits

0xcf19,	// (0x0003ca36) popup_tb_float_extension_window

0x9649,	// (0x00039166) aid_size_cell_tb_float_ext

0x21f6,	// (0x00031d13) bg_popup_sub_window_cp28

0x9655,	// (0x00039172) grid_tb_float_ext_pane

0x9661,	// (0x0003917e) cell_tb_float_ext_pane_ParamLimits

0x9661,	// (0x0003917e) cell_tb_float_ext_pane

0x967d,	// (0x0003919a) cell_tb_float_ext_pane_g1

0x9686,	// (0x000391a3) grid_highlight_pane_cp12

0xbbdd,	// (0x0003b6fa) cell_last_hwr_side_pane_ParamLimits

0xbbdd,	// (0x0003b6fa) cell_last_hwr_side_pane

0x726a,	// (0x00036d87) cell_last_hwr_side_pane_g1

0x968f,	// (0x000391ac) cell_last_hwr_side_pane_g2

0x0001,

0xfe3a,	// (0x0003f957) cell_last_hwr_side_pane_g

0xc140,	// (0x0003bc5d) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc140,	// (0x0003bc5d) vkb2_area_bottom_space_btn_pane

0x1794,	// (0x000312b1) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9195,	// (0x00038cb2) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2085,	// (0x00031ba2) cell_vkb2_top_candi_pane_t1_ParamLimits

0x20a3,	// (0x00031bc0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x20a3,	// (0x00031bc0) vkb2_area_bottom_space_btn_pane_g1

0x20dd,	// (0x00031bfa) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x20dd,	// (0x00031bfa) vkb2_area_bottom_space_btn_pane_g2

0x2113,	// (0x00031c30) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2113,	// (0x00031c30) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe3f,	// (0x0003f95c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe3f,	// (0x0003f95c) vkb2_area_bottom_space_btn_pane_g

0x15de,	// (0x000310fb) cel_fep_hwr_func_pane_ParamLimits

0x15de,	// (0x000310fb) cel_fep_hwr_func_pane

0xbbb2,	// (0x0003b6cf) cell_hwr_side_button_pane_ParamLimits

0xbbb2,	// (0x0003b6cf) cell_hwr_side_button_pane

0x8bb9,	// (0x000386d6) aid_area_touch_clock_ParamLimits

0x2574,	// (0x00032091) bg_uniindi_top_pane_ParamLimits

0x8bcd,	// (0x000386ea) uniindi_top_pane_g1_ParamLimits

0x8be3,	// (0x00038700) uniindi_top_pane_g2_ParamLimits

0x8bef,	// (0x0003870c) uniindi_top_pane_g3_ParamLimits

0x8c00,	// (0x0003871d) uniindi_top_pane_g4_ParamLimits

0xfd57,	// (0x0003f874) uniindi_top_pane_g_ParamLimits

0x8c0d,	// (0x0003872a) uniindi_top_pane_t1_ParamLimits

0x2574,	// (0x00032091) bg_vkb2_func_pane_cp01_ParamLimits

0x2574,	// (0x00032091) bg_vkb2_func_pane_cp01

0x9698,	// (0x000391b5) cel_fep_hwr_func_pane_g1_ParamLimits

0x9698,	// (0x000391b5) cel_fep_hwr_func_pane_g1

0x2574,	// (0x00032091) bg_vkb2_func_pane_cp02_ParamLimits

0x2574,	// (0x00032091) bg_vkb2_func_pane_cp02

0x9698,	// (0x000391b5) cell_hwr_side_button_pane_g1_ParamLimits

0x9698,	// (0x000391b5) cell_hwr_side_button_pane_g1

0x4aa7,	// (0x000345c4) status_pane_g4_ParamLimits

0x4aa7,	// (0x000345c4) status_pane_g4

0x4ac1,	// (0x000345de) status_pane_t1

0x6fc4,	// (0x00036ae1) form2_midp_gauge_slider_cont_pane

0x6fcc,	// (0x00036ae9) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdac7,	// (0x0003d5e4) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdad9,	// (0x0003d5f6) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb17,	// (0x0003f634) form2_midp_gauge_slider_pane_t_ParamLimits

0x7002,	// (0x00036b1f) form2_midp_slider_pane_ParamLimits

0x1a57,	// (0x00031574) aid_size_cell_func_vkb2_ParamLimits

0x1a57,	// (0x00031574) aid_size_cell_func_vkb2

0x9635,	// (0x00039152) slider_pane_g4_ParamLimits

0x9635,	// (0x00039152) slider_pane_g4

0xc1a1,	// (0x0003bcbe) form2_midp_gauge_slider_pane_t2_cp01

0xc1af,	// (0x0003bccc) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc1af,	// (0x0003bccc) form2_midp_gauge_slider_pane_t3_cp01

0x2188,	// (0x00031ca5) form2_midp_slider_pane_cp01

0x21f6,	// (0x00031d13) navi_smil_pane

0x96d1,	// (0x000391ee) navi_smil_pane_g1

0x96d9,	// (0x000391f6) navi_smil_pane_t1

0x96a6,	// (0x000391c3) form2_midp_slider_pane_g1

0x96af,	// (0x000391cc) form2_midp_slider_pane_g2

0x96b7,	// (0x000391d4) form2_midp_slider_pane_g3

0x96a6,	// (0x000391c3) form2_midp_slider_pane_g4

0xeb92,	// (0x0003e6af) form2_midp_slider_pane_g5

0x0004,

0xfe48,	// (0x0003f965) form2_midp_slider_pane_g

0x214d,	// (0x00031c6a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x214d,	// (0x00031c6a) vkb2_area_bottom_space_btn_pane_g4

0xd0f9,	// (0x0003cc16) lc0_navi_pane_ParamLimits

0xd0f9,	// (0x0003cc16) lc0_navi_pane

0xd169,	// (0x0003cc86) lc0_stat_indi_pane_ParamLimits

0xd169,	// (0x0003cc86) lc0_stat_indi_pane

0xd17e,	// (0x0003cc9b) ls0_title_pane_ParamLimits

0xd17e,	// (0x0003cc9b) ls0_title_pane

0x30fa,	// (0x00032c17) bg_popup_sub_pane_cp14_ParamLimits

0x8ba0,	// (0x000386bd) list_uniindi_pane_ParamLimits

0x8bac,	// (0x000386c9) uniindi_top_pane_ParamLimits

0x8c4b,	// (0x00038768) list_single_uniindi_pane_g1_ParamLimits

0x8c5e,	// (0x0003877b) list_single_uniindi_pane_t1_ParamLimits

0xc1cc,	// (0x0003bce9) lc0_stat_clock_pane_ParamLimits

0xc1cc,	// (0x0003bce9) lc0_stat_clock_pane

0xeb9b,	// (0x0003e6b8) lc0_stat_indi_pane_g1_ParamLimits

0xeb9b,	// (0x0003e6b8) lc0_stat_indi_pane_g1

0xeba8,	// (0x0003e6c5) lc0_stat_indi_pane_g2_ParamLimits

0xeba8,	// (0x0003e6c5) lc0_stat_indi_pane_g2

0x0001,

0xfe53,	// (0x0003f970) lc0_stat_indi_pane_g_ParamLimits

0xfe53,	// (0x0003f970) lc0_stat_indi_pane_g

0xc1d9,	// (0x0003bcf6) lc0_uni_indicator_pane_ParamLimits

0xc1d9,	// (0x0003bcf6) lc0_uni_indicator_pane

0xebb5,	// (0x0003e6d2) ls0_title_pane_g1_ParamLimits

0xebb5,	// (0x0003e6d2) ls0_title_pane_g1

0xebc9,	// (0x0003e6e6) ls0_title_pane_t1_ParamLimits

0xebc9,	// (0x0003e6e6) ls0_title_pane_t1

0xc1e6,	// (0x0003bd03) lc0_uni_indicator_pane_g1_ParamLimits

0xc1e6,	// (0x0003bd03) lc0_uni_indicator_pane_g1

0x974b,	// (0x00039268) lc0_stat_clock_pane_t1

0x21f6,	// (0x00031d13) main_ai5_pane

0x9759,	// (0x00039276) ai5_sk_pane_ParamLimits

0x9759,	// (0x00039276) ai5_sk_pane

0xebf7,	// (0x0003e714) cell_ai5_widget_pane_ParamLimits

0xebf7,	// (0x0003e714) cell_ai5_widget_pane

0x97dc,	// (0x000392f9) aid_size_cell_widget_grid

0x97f0,	// (0x0003930d) bg_ai5_widget_pane_ParamLimits

0x97f0,	// (0x0003930d) bg_ai5_widget_pane

0xec84,	// (0x0003e7a1) cell_ai5_widget_pane_g2

0xec94,	// (0x0003e7b1) cell_ai5_widget_pane_g3

0xeca8,	// (0x0003e7c5) cell_ai5_widget_pane_g4

0xecb4,	// (0x0003e7d1) cell_ai5_widget_pane_g5

0xecc0,	// (0x0003e7dd) cell_ai5_widget_pane_g6

0xeccc,	// (0x0003e7e9) cell_ai5_widget_pane_g7

0xed14,	// (0x0003e831) cell_ai5_widget_pane_t1_ParamLimits

0xed14,	// (0x0003e831) cell_ai5_widget_pane_t1

0xed31,	// (0x0003e84e) cell_ai5_widget_pane_t2_ParamLimits

0xed31,	// (0x0003e84e) cell_ai5_widget_pane_t2

0xed49,	// (0x0003e866) cell_ai5_widget_pane_t3_ParamLimits

0xed49,	// (0x0003e866) cell_ai5_widget_pane_t3

0xed61,	// (0x0003e87e) cell_ai5_widget_pane_t4_ParamLimits

0xed61,	// (0x0003e87e) cell_ai5_widget_pane_t4

0xed7b,	// (0x0003e898) cell_ai5_widget_pane_t5_ParamLimits

0xed7b,	// (0x0003e898) cell_ai5_widget_pane_t5

0x9930,	// (0x0003944d) cell_ai5_widget_pane_t6_ParamLimits

0x9930,	// (0x0003944d) cell_ai5_widget_pane_t6

0x9942,	// (0x0003945f) cell_ai5_widget_pane_t7_ParamLimits

0x9942,	// (0x0003945f) cell_ai5_widget_pane_t7

0xed9a,	// (0x0003e8b7) cell_ai5_widget_pane_t8_ParamLimits

0xed9a,	// (0x0003e8b7) cell_ai5_widget_pane_t8

0x0009,

0xfe6d,	// (0x0003f98a) cell_ai5_widget_pane_t_ParamLimits

0xfe6d,	// (0x0003f98a) cell_ai5_widget_pane_t

0xede2,	// (0x0003e8ff) grid_ai5_widget_pane

0x30fa,	// (0x00032c17) highlight_cell_ai5_widget_pane_ParamLimits

0x30fa,	// (0x00032c17) highlight_cell_ai5_widget_pane

0xedf9,	// (0x0003e916) ai5_sk_left_pane

0xee03,	// (0x0003e920) ai5_sk_middle_pane

0xee0d,	// (0x0003e92a) ai5_sk_right_pane

0x99d8,	// (0x000394f5) bg_ai5_widget_pane_g1_ParamLimits

0x99d8,	// (0x000394f5) bg_ai5_widget_pane_g1

0x99e4,	// (0x00039501) bg_ai5_widget_pane_g2_ParamLimits

0x99e4,	// (0x00039501) bg_ai5_widget_pane_g2

0x99f0,	// (0x0003950d) bg_ai5_widget_pane_g3_ParamLimits

0x99f0,	// (0x0003950d) bg_ai5_widget_pane_g3

0x99fc,	// (0x00039519) bg_ai5_widget_pane_g4_ParamLimits

0x99fc,	// (0x00039519) bg_ai5_widget_pane_g4

0x9a08,	// (0x00039525) bg_ai5_widget_pane_g5_ParamLimits

0x9a08,	// (0x00039525) bg_ai5_widget_pane_g5

0x9a14,	// (0x00039531) bg_ai5_widget_pane_g6_ParamLimits

0x9a14,	// (0x00039531) bg_ai5_widget_pane_g6

0x9a20,	// (0x0003953d) bg_ai5_widget_pane_g7_ParamLimits

0x9a20,	// (0x0003953d) bg_ai5_widget_pane_g7

0x9a2c,	// (0x00039549) bg_ai5_widget_pane_g8_ParamLimits

0x9a2c,	// (0x00039549) bg_ai5_widget_pane_g8

0x9a38,	// (0x00039555) bg_ai5_widget_pane_g9_ParamLimits

0x9a38,	// (0x00039555) bg_ai5_widget_pane_g9

0x0008,

0xfe82,	// (0x0003f99f) bg_ai5_widget_pane_g_ParamLimits

0xfe82,	// (0x0003f99f) bg_ai5_widget_pane_g

0x9a5f,	// (0x0003957c) cell_shortcut_ai5_widget_pane_ParamLimits

0x9a5f,	// (0x0003957c) cell_shortcut_ai5_widget_pane

0x23b6,	// (0x00031ed3) bg_cell_shortcut_ai5_widget_pane

0x9a71,	// (0x0003958e) cell_grid_ai5_widget_pane_g1

0x9a7a,	// (0x00039597) highlight_cell_shortcut_ai5_widget_pane

0x4c2e,	// (0x0003474b) ai5_sk_left_pane_g1

0x9a82,	// (0x0003959f) ai5_sk_left_pane_g2

0x9a8a,	// (0x000395a7) ai5_sk_left_pane_g3

0x9a92,	// (0x000395af) ai5_sk_left_pane_g4

0x0003,

0xfe95,	// (0x0003f9b2) ai5_sk_left_pane_g

0x9a9a,	// (0x000395b7) ai5_sk_left_pane_t1

0x4c36,	// (0x00034753) ai5_sk_right_pane_g1

0x9aa8,	// (0x000395c5) ai5_sk_right_pane_g2

0x9ab0,	// (0x000395cd) ai5_sk_right_pane_g3

0x9ab8,	// (0x000395d5) ai5_sk_right_pane_g4

0x0003,

0xfe9e,	// (0x0003f9bb) ai5_sk_right_pane_g

0x9ac0,	// (0x000395dd) ai5_sk_right_pane_t1

0x4c36,	// (0x00034753) ai5_sk_middle_pane_g1

0x4c2e,	// (0x0003474b) ai5_sk_middle_pane_g2

0x4c4e,	// (0x0003476b) ai5_sk_middle_pane_g3

0x9ab0,	// (0x000395cd) ai5_sk_middle_pane_g4

0x9a8a,	// (0x000395a7) ai5_sk_middle_pane_g5

0x9ace,	// (0x000395eb) ai5_sk_middle_pane_g6

0xee17,	// (0x0003e934) ai5_sk_middle_pane_g7

0x0006,

0xfea7,	// (0x0003f9c4) ai5_sk_middle_pane_g

0xcfe3,	// (0x0003cb00) aid_touch_area_size_lc0_ParamLimits

0xcfe3,	// (0x0003cb00) aid_touch_area_size_lc0

0x17c3,	// (0x000312e0) cell_hwr_candidate_pane_t1_ParamLimits

0x475f,	// (0x0003427c) aid_touch_navi_pane

0xd288,	// (0x0003cda5) status_dt_navi_pane_ParamLimits

0xd288,	// (0x0003cda5) status_dt_navi_pane

0xd2a0,	// (0x0003cdbd) status_dt_sta_pane_ParamLimits

0xd2a0,	// (0x0003cdbd) status_dt_sta_pane

0xee1f,	// (0x0003e93c) dt_sta_controll_pane

0xee2c,	// (0x0003e949) dt_sta_indi_pane

0xee39,	// (0x0003e956) dt_sta_title_pane

0x2574,	// (0x00032091) bg_dt_sta_indi_pane_ParamLimits

0x2574,	// (0x00032091) bg_dt_sta_indi_pane

0xee4b,	// (0x0003e968) dt_sta_battery_pane

0xee53,	// (0x0003e970) dt_sta_indi_pane_g1

0xee5c,	// (0x0003e979) dt_sta_indi_pane_g2

0xee65,	// (0x0003e982) dt_sta_indi_pane_g3

0x0002,

0xfeb6,	// (0x0003f9d3) dt_sta_indi_pane_g

0xee6e,	// (0x0003e98b) dt_sta_signal_pane

0x30fa,	// (0x00032c17) bg_dt_sta_title_pane_ParamLimits

0x30fa,	// (0x00032c17) bg_dt_sta_title_pane

0xee77,	// (0x0003e994) dt_sta_title_pane_g1

0xee7f,	// (0x0003e99c) dt_sta_title_pane_t1_ParamLimits

0xee7f,	// (0x0003e99c) dt_sta_title_pane_t1

0x21f6,	// (0x00031d13) bg_dt_sta_control_pane

0xee94,	// (0x0003e9b1) dt_sta_controll_pane_g1

0xee9d,	// (0x0003e9ba) bg_dt_sta_title_pane_g1

0xeea6,	// (0x0003e9c3) bg_dt_sta_title_pane_g2

0xeeaf,	// (0x0003e9cc) bg_dt_sta_title_pane_g3

0x0002,

0xfebd,	// (0x0003f9da) bg_dt_sta_title_pane_g

0x726a,	// (0x00036d87) bg_dt_sta_indi_pane_g1

0x9b7c,	// (0x00039699) dt_sta_signal_pane_g1

0x9b84,	// (0x000396a1) dt_sta_signal_pane_g2

0x0001,

0xfec4,	// (0x0003f9e1) dt_sta_signal_pane_g

0x9b8c,	// (0x000396a9) dt_sta_battery_pane_g1

0x9b95,	// (0x000396b2) dt_sta_battery_pane_t1

0x726a,	// (0x00036d87) bg_dt_sta_control_pane_g1

0x3856,	// (0x00033373) fep_china_uni_eep_pane

0x385e,	// (0x0003337b) fep_china_uni_entry_pane_ParamLimits

0x386e,	// (0x0003338b) popup_fep_china_uni_window_g1_ParamLimits

0x387e,	// (0x0003339b) popup_fep_china_uni_window_g2_ParamLimits

0x387e,	// (0x0003339b) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x0003f275) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x0003f275) popup_fep_china_uni_window_g

0x9ba4,	// (0x000396c1) fep_china_uni_eep_pane_g1

0x9bac,	// (0x000396c9) fep_china_uni_eep_pane_t1

0x96c8,	// (0x000391e5) aid_touch_area_size_smil_player

0x48b7,	// (0x000343d4) lc0_clock_pane

0x4ab5,	// (0x000345d2) status_pane_g5_ParamLimits

0x4ab5,	// (0x000345d2) status_pane_g5

0xca43,	// (0x0003c560) popup_keymap_window

0x4a73,	// (0x00034590) status_icon_pane

0xec94,	// (0x0003e7b1) cell_ai5_widget_pane_g3_ParamLimits

0xeca8,	// (0x0003e7c5) cell_ai5_widget_pane_g4_ParamLimits

0xecb4,	// (0x0003e7d1) cell_ai5_widget_pane_g5_ParamLimits

0xecd8,	// (0x0003e7f5) cell_ai5_widget_pane_g8_ParamLimits

0xecd8,	// (0x0003e7f5) cell_ai5_widget_pane_g8

0xecec,	// (0x0003e809) cell_ai5_widget_pane_g9_ParamLimits

0xecec,	// (0x0003e809) cell_ai5_widget_pane_g9

0xed00,	// (0x0003e81d) cell_ai5_widget_pane_g10_ParamLimits

0xed00,	// (0x0003e81d) cell_ai5_widget_pane_g10

0x9bbb,	// (0x000396d8) status_icon_pane_g1

0x21f6,	// (0x00031d13) bg_popup_sub_pane_cp13

0x9bc3,	// (0x000396e0) popup_keymap_window_t1

0xc84f,	// (0x0003c36c) control_pane_g6_ParamLimits

0xc84f,	// (0x0003c36c) control_pane_g6

0xc85c,	// (0x0003c379) control_pane_g7_ParamLimits

0xc85c,	// (0x0003c379) control_pane_g7

0xc869,	// (0x0003c386) control_pane_g8_ParamLimits

0xc869,	// (0x0003c386) control_pane_g8

0xee1f,	// (0x0003e93c) dt_sta_controll_pane_ParamLimits

0xee2c,	// (0x0003e949) dt_sta_indi_pane_ParamLimits

0xee39,	// (0x0003e956) dt_sta_title_pane_ParamLimits

0x3032,	// (0x00032b4f) aid_size_touch_scroll_bar_cale

0xf4e9,	// (0x0003f006) popup_discreet_window_ParamLimits

0xf4e9,	// (0x0003f006) popup_discreet_window

0xb087,	// (0x0003aba4) popup_sk_window

0x529b,	// (0x00034db8) bg_popup_sub_pane_cp28_ParamLimits

0x529b,	// (0x00034db8) bg_popup_sub_pane_cp28

0x9bd1,	// (0x000396ee) popup_discreet_window_g1_ParamLimits

0x9bd1,	// (0x000396ee) popup_discreet_window_g1

0x9bf1,	// (0x0003970e) popup_discreet_window_t1_ParamLimits

0x9bf1,	// (0x0003970e) popup_discreet_window_t1

0x9c0f,	// (0x0003972c) popup_discreet_window_t2_ParamLimits

0x9c0f,	// (0x0003972c) popup_discreet_window_t2

0x0002,

0xfec9,	// (0x0003f9e6) popup_discreet_window_t_ParamLimits

0xfec9,	// (0x0003f9e6) popup_discreet_window_t

0x21be,	// (0x00031cdb) popup_sk_window_g1

0x21c8,	// (0x00031ce5) popup_sk_window_g2

0x0001,

0xfed0,	// (0x0003f9ed) popup_sk_window_g

0x9c61,	// (0x0003977e) popup_sk_window_t1

0x9c6f,	// (0x0003978c) popup_sk_window_t1_copy1

0xec84,	// (0x0003e7a1) cell_ai5_widget_pane_g2_ParamLimits

0xedac,	// (0x0003e8c9) cell_ai5_widget_pane_t9_ParamLimits

0xedac,	// (0x0003e8c9) cell_ai5_widget_pane_t9

0x21f6,	// (0x00031d13) main_fep_fshwr2_pane

0xeeb8,	// (0x0003e9d5) aid_fshwr2_btn_pane

0xeec0,	// (0x0003e9dd) aid_fshwr2_syb_pane

0xeeef,	// (0x0003ea0c) aid_fshwr2_txt_pane

0xeef7,	// (0x0003ea14) fshwr2_func_candi_pane

0xef01,	// (0x0003ea1e) fshwr2_hwr_syb_pane

0xef0d,	// (0x0003ea2a) fshwr2_icf_pane

0x21f6,	// (0x00031d13) fshwr2_icf_bg_pane

0xef17,	// (0x0003ea34) fshwr2_icf_pane_t1_ParamLimits

0xef17,	// (0x0003ea34) fshwr2_icf_pane_t1

0x726a,	// (0x00036d87) fshwr2_func_candi_pane_g1

0x9ce2,	// (0x000397ff) fshwr2_func_candi_row_pane_ParamLimits

0x9ce2,	// (0x000397ff) fshwr2_func_candi_row_pane

0xef2f,	// (0x0003ea4c) cell_fshwr2_syb_pane_ParamLimits

0xef2f,	// (0x0003ea4c) cell_fshwr2_syb_pane

0x74f4,	// (0x00037011) fshwr2_hwr_syb_pane_g1_ParamLimits

0x74f4,	// (0x00037011) fshwr2_hwr_syb_pane_g1

0x21f6,	// (0x00031d13) bg_popup_call_pane_cp01

0x9d0d,	// (0x0003982a) fshwr2_func_candi_cell_pane_ParamLimits

0x9d0d,	// (0x0003982a) fshwr2_func_candi_cell_pane

0x9d3f,	// (0x0003985c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9d3f,	// (0x0003985c) fshwr2_func_candi_cell_bg_pane

0x9d59,	// (0x00039876) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9d59,	// (0x00039876) fshwr2_func_candi_cell_pane_g1

0x9d79,	// (0x00039896) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9d79,	// (0x00039896) fshwr2_func_candi_cell_pane_t1

0x21f6,	// (0x00031d13) bg_button_pane_cp08

0x3d58,	// (0x00033875) cell_fshwr2_syb_bg_pane

0xef48,	// (0x0003ea65) cell_fshwr2_syb_bg_pane_g1

0xef50,	// (0x0003ea6d) cell_fshwr2_syb_bg_pane_t1

0x30fa,	// (0x00032c17) main_tmo_pane

0xd5ba,	// (0x0003d0d7) uni_indicator_pane_g1_ParamLimits

0xd5cf,	// (0x0003d0ec) uni_indicator_pane_g2_ParamLimits

0xd5e4,	// (0x0003d101) uni_indicator_pane_g3_ParamLimits

0xd5fa,	// (0x0003d117) uni_indicator_pane_g4_ParamLimits

0xd5fa,	// (0x0003d117) uni_indicator_pane_g4

0xd60e,	// (0x0003d12b) uni_indicator_pane_g5_ParamLimits

0xd60e,	// (0x0003d12b) uni_indicator_pane_g5

0xd622,	// (0x0003d13f) uni_indicator_pane_g6_ParamLimits

0xd622,	// (0x0003d13f) uni_indicator_pane_g6

0xf950,	// (0x0003f46d) uni_indicator_pane_g_ParamLimits

0xe105,	// (0x0003dc22) popup_tmo_note_window_ParamLimits

0xe105,	// (0x0003dc22) popup_tmo_note_window

0x21f6,	// (0x00031d13) fshwr2_bg_pane

0x9d6a,	// (0x00039887) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9d6a,	// (0x00039887) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfed5,	// (0x0003f9f2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfed5,	// (0x0003f9f2) fshwr2_func_candi_cell_pane_g

0x726a,	// (0x00036d87) bg_popup_window_pane_cp01

0x9da3,	// (0x000398c0) bg_popup_window_pane_g1_cp01

0x9dac,	// (0x000398c9) bg_popup_window_pane_cp22_ParamLimits

0x9dac,	// (0x000398c9) bg_popup_window_pane_cp22

0x9dba,	// (0x000398d7) listscroll_tmo_link_pane_ParamLimits

0x9dba,	// (0x000398d7) listscroll_tmo_link_pane

0x9dfa,	// (0x00039917) popup_tmo_note_window_g1_ParamLimits

0x9dfa,	// (0x00039917) popup_tmo_note_window_g1

0x9e07,	// (0x00039924) tmo_note_info_pane_ParamLimits

0x9e07,	// (0x00039924) tmo_note_info_pane

0xef5f,	// (0x0003ea7c) list_tmo_note_info_pane_g1_ParamLimits

0xef5f,	// (0x0003ea7c) list_tmo_note_info_pane_g1

0x9e38,	// (0x00039955) list_tmo_note_info_pane_g2_ParamLimits

0x9e38,	// (0x00039955) list_tmo_note_info_pane_g2

0x0001,

0xfeda,	// (0x0003f9f7) list_tmo_note_info_pane_g_ParamLimits

0xfeda,	// (0x0003f9f7) list_tmo_note_info_pane_g

0x9e54,	// (0x00039971) list_tmo_note_info_text_pane_ParamLimits

0x9e54,	// (0x00039971) list_tmo_note_info_text_pane

0x9ed9,	// (0x000399f6) list_tmo_link_pane

0x9ee6,	// (0x00039a03) scroll_pane_cp20

0x9ef3,	// (0x00039a10) list_single_tmo_link_pane_ParamLimits

0x9ef3,	// (0x00039a10) list_single_tmo_link_pane

0x9f03,	// (0x00039a20) list_single_tmo_link_pane_t1

0x9f11,	// (0x00039a2e) list_tmo_note_info_text_pane_t1_ParamLimits

0x9f11,	// (0x00039a2e) list_tmo_note_info_text_pane_t1

0xc4d0,	// (0x0003bfed) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc4d0,	// (0x0003bfed) aid_size_touch_scroll_bar_cp01

0xb690,	// (0x0003b1ad) aid_size_touch_slider_marker

0xb077,	// (0x0003ab94) popup_settings_window_ParamLimits

0xb077,	// (0x0003ab94) popup_settings_window

0x0e54,	// (0x00030971) popup_candi_list_indi_window

0x475f,	// (0x0003427c) aid_touch_navi_pane_ParamLimits

0x198e,	// (0x000314ab) rs_clock_indi_pane

0x1997,	// (0x000314b4) sctrl_sk_bottom_pane_ParamLimits

0x19a8,	// (0x000314c5) sctrl_sk_top_pane_ParamLimits

0x1aa9,	// (0x000315c6) popup_fep_tooltip_window

0x97dc,	// (0x000392f9) aid_size_cell_widget_grid_ParamLimits

0xec78,	// (0x0003e795) cell_ai5_widget_pane_g1_ParamLimits

0xec78,	// (0x0003e795) cell_ai5_widget_pane_g1

0xecc0,	// (0x0003e7dd) cell_ai5_widget_pane_g6_ParamLimits

0xeccc,	// (0x0003e7e9) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe58,	// (0x0003f975) cell_ai5_widget_pane_g_ParamLimits

0xfe58,	// (0x0003f975) cell_ai5_widget_pane_g

0xedd0,	// (0x0003e8ed) cell_ai5_widget_pane_t10_ParamLimits

0xedd0,	// (0x0003e8ed) cell_ai5_widget_pane_t10

0xede2,	// (0x0003e8ff) grid_ai5_widget_pane_ParamLimits

0x9a44,	// (0x00039561) cell_contacts_ai5_widget_pane_ParamLimits

0x9a44,	// (0x00039561) cell_contacts_ai5_widget_pane

0x9c24,	// (0x00039741) popup_discreet_window_t3_ParamLimits

0x9c24,	// (0x00039741) popup_discreet_window_t3

0x9cb3,	// (0x000397d0) popup_fshwr2_char_preview_window_ParamLimits

0x9cb3,	// (0x000397d0) popup_fshwr2_char_preview_window

0xef76,	// (0x0003ea93) tmo_note_info_pane_t1

0xef8b,	// (0x0003eaa8) tmo_note_info_pane_t2

0xefa4,	// (0x0003eac1) tmo_note_info_pane_t3

0x9eb5,	// (0x000399d2) tmo_note_info_pane_t4

0x9ec7,	// (0x000399e4) tmo_note_info_pane_t5

0x0004,

0xfedf,	// (0x0003f9fc) tmo_note_info_pane_t

0x9ed9,	// (0x000399f6) list_tmo_link_pane_ParamLimits

0x9ee6,	// (0x00039a03) scroll_pane_cp20_ParamLimits

0x21f6,	// (0x00031d13) bg_popup_fep_char_preview_window_cp01

0x9f2a,	// (0x00039a47) popup_fshwr2_char_preview_window_t1

0x9f38,	// (0x00039a55) popup_candi_list_indi_window_g1

0x9f41,	// (0x00039a5e) bg_cell_contacts_ai5_widget_pane

0x9f4d,	// (0x00039a6a) cell_contacts_ai5_widget_pane_g1

0x9f61,	// (0x00039a7e) cell_contacts_ai5_widget_pane_g2

0x9f70,	// (0x00039a8d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeea,	// (0x0003fa07) cell_contacts_ai5_widget_pane_g

0x9f83,	// (0x00039aa0) cell_contacts_ai5_widget_pane_t1

0x30fa,	// (0x00032c17) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf01e,	// (0x0003eb3b) settings_container_pane

0x3d58,	// (0x00033875) listscroll_set_pane_copy1

0x699f,	// (0x000364bc) scroll_pane_cp121_copy1

0xa009,	// (0x00039b26) set_content_pane_copy1

0xf02a,	// (0x0003eb47) aid_height_set_list_copy1_ParamLimits

0xf02a,	// (0x0003eb47) aid_height_set_list_copy1

0x602e,	// (0x00035b4b) aid_size_parent_copy1_ParamLimits

0x602e,	// (0x00035b4b) aid_size_parent_copy1

0xf036,	// (0x0003eb53) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf036,	// (0x0003eb53) button_value_adjust_pane_cp6_copy1

0x40de,	// (0x00033bfb) list_highlight_pane_cp2_copy1_ParamLimits

0x40de,	// (0x00033bfb) list_highlight_pane_cp2_copy1

0xf04a,	// (0x0003eb67) list_set_pane_copy1_ParamLimits

0xf04a,	// (0x0003eb67) list_set_pane_copy1

0xefb9,	// (0x0003ead6) main_pane_set_t1_copy1_ParamLimits

0xefb9,	// (0x0003ead6) main_pane_set_t1_copy1

0xeff3,	// (0x0003eb10) main_pane_set_t2_copy1_ParamLimits

0xeff3,	// (0x0003eb10) main_pane_set_t2_copy1

0xf111,	// (0x0003ec2e) main_pane_set_t3_copy1

0xf11f,	// (0x0003ec3c) main_pane_set_t4_copy1

0xf012,	// (0x0003eb2f) set_content_pane_g1_copy1_ParamLimits

0xf012,	// (0x0003eb2f) set_content_pane_g1_copy1

0xf12d,	// (0x0003ec4a) setting_code_pane_copy1

0xa11e,	// (0x00039c3b) setting_slider_graphic_pane_copy1

0xa11e,	// (0x00039c3b) setting_slider_pane_copy1

0xa128,	// (0x00039c45) setting_text_pane_copy1

0xa132,	// (0x00039c4f) setting_volume_pane_copy1

0xf137,	// (0x0003ec54) settings_code_pane_cp2_copy1

0xf13f,	// (0x0003ec5c) settings_code_pane_cp_copy1_ParamLimits

0xf13f,	// (0x0003ec5c) settings_code_pane_cp_copy1

0xf153,	// (0x0003ec70) volume_set_pane_copy1

0xf15f,	// (0x0003ec7c) volume_set_pane_g10_copy1

0xf16b,	// (0x0003ec88) volume_set_pane_g1_copy1

0xf175,	// (0x0003ec92) volume_set_pane_g2_copy1

0xf17f,	// (0x0003ec9c) volume_set_pane_g3_copy1

0xf189,	// (0x0003eca6) volume_set_pane_g4_copy1

0xf193,	// (0x0003ecb0) volume_set_pane_g5_copy1

0xf19d,	// (0x0003ecba) volume_set_pane_g6_copy1

0xf1a7,	// (0x0003ecc4) volume_set_pane_g7_copy1

0xf1b1,	// (0x0003ecce) volume_set_pane_g8_copy1

0xf1bb,	// (0x0003ecd8) volume_set_pane_g9_copy1

0x22ea,	// (0x00031e07) bg_set_opt_pane_cp_copy1_ParamLimits

0x22ea,	// (0x00031e07) bg_set_opt_pane_cp_copy1

0xa1c9,	// (0x00039ce6) setting_slider_pane_t1_copy1_ParamLimits

0xa1c9,	// (0x00039ce6) setting_slider_pane_t1_copy1

0xf1c5,	// (0x0003ece2) setting_slider_pane_t2_copy1_ParamLimits

0xf1c5,	// (0x0003ece2) setting_slider_pane_t2_copy1

0xf1df,	// (0x0003ecfc) setting_slider_pane_t3_copy1_ParamLimits

0xf1df,	// (0x0003ecfc) setting_slider_pane_t3_copy1

0xf1f7,	// (0x0003ed14) slider_set_pane_copy1_ParamLimits

0xf1f7,	// (0x0003ed14) slider_set_pane_copy1

0x3161,	// (0x00032c7e) set_opt_bg_pane_g1_copy2

0x3169,	// (0x00032c86) set_opt_bg_pane_g2_copy2

0xa22f,	// (0x00039d4c) set_opt_bg_pane_g3_copy2

0x3179,	// (0x00032c96) set_opt_bg_pane_g4_copy2

0x3181,	// (0x00032c9e) set_opt_bg_pane_g5_copy2

0x3189,	// (0x00032ca6) set_opt_bg_pane_g6_copy2

0xf20d,	// (0x0003ed2a) set_opt_bg_pane_g7_copy2

0xa243,	// (0x00039d60) set_opt_bg_pane_g8_copy2

0xa24d,	// (0x00039d6a) set_opt_bg_pane_g9_copy2

0xa257,	// (0x00039d74) aid_size_touch_slider_mark_copy1_ParamLimits

0xa257,	// (0x00039d74) aid_size_touch_slider_mark_copy1

0xa26b,	// (0x00039d88) slider_set_pane_g1_copy1

0xa274,	// (0x00039d91) slider_set_pane_g2_copy1

0x714b,	// (0x00036c68) slider_set_pane_g3_copy1_ParamLimits

0x714b,	// (0x00036c68) slider_set_pane_g3_copy1

0x715f,	// (0x00036c7c) slider_set_pane_g4_copy1_ParamLimits

0x715f,	// (0x00036c7c) slider_set_pane_g4_copy1

0x7177,	// (0x00036c94) slider_set_pane_g5_copy1_ParamLimits

0x7177,	// (0x00036c94) slider_set_pane_g5_copy1

0x714b,	// (0x00036c68) slider_set_pane_g6_copy1_ParamLimits

0x714b,	// (0x00036c68) slider_set_pane_g6_copy1

0xf217,	// (0x0003ed34) slider_set_pane_g7_copy1_ParamLimits

0xf217,	// (0x0003ed34) slider_set_pane_g7_copy1

0x220a,	// (0x00031d27) bg_set_opt_pane_cp2_copy1

0xa292,	// (0x00039daf) setting_slider_graphic_pane_g1_copy1

0xf22d,	// (0x0003ed4a) setting_slider_graphic_pane_t1_copy1

0xf23d,	// (0x0003ed5a) setting_slider_graphic_pane_t2_copy1

0xf24d,	// (0x0003ed6a) slider_set_pane_cp_copy1

0xa2cb,	// (0x00039de8) input_focus_pane_cp1_copy1

0xa2d4,	// (0x00039df1) list_set_text_pane_copy1

0xa2dc,	// (0x00039df9) setting_text_pane_g1_copy1

0xeec8,	// (0x0003e9e5) set_text_pane_t1_copy1

0xa2cb,	// (0x00039de8) input_focus_pane_cp2_copy1

0xa2dc,	// (0x00039df9) setting_code_pane_g1_copy1

0xf255,	// (0x0003ed72) setting_code_pane_t1_copy1

0xf263,	// (0x0003ed80) list_set_graphic_pane_copy1

0x220a,	// (0x00031d27) bg_set_opt_pane_cp4_copy1

0xc75b,	// (0x0003c278) list_set_graphic_pane_g1_copy1_ParamLimits

0xc75b,	// (0x0003c278) list_set_graphic_pane_g1_copy1

0xf275,	// (0x0003ed92) list_set_graphic_pane_g2_copy1

0xc773,	// (0x0003c290) list_set_graphic_pane_t1_copy1_ParamLimits

0xc773,	// (0x0003c290) list_set_graphic_pane_t1_copy1

0x726a,	// (0x00036d87) rs_clock_indi_pane_g1

0xa30d,	// (0x00039e2a) rs_clock_indi_pane_t1

0xa31b,	// (0x00039e38) rs_indi_pane

0xa323,	// (0x00039e40) rs_indi_pane_g1

0xa32c,	// (0x00039e49) rs_indi_pane_g2

0xa335,	// (0x00039e52) rs_indi_pane_g3

0x0002,

0xfef1,	// (0x0003fa0e) rs_indi_pane_g

0x3d58,	// (0x00033875) bg_popup_preview_window_pane_cp03

0xa33e,	// (0x00039e5b) popup_fep_tooltip_window_t1

0x7f1e,	// (0x00037a3b) popup_note2_window_g2_ParamLimits

0x7f1e,	// (0x00037a3b) popup_note2_window_g2

0x0001,

0xfc8f,	// (0x0003f7ac) popup_note2_window_g_ParamLimits

0xfc8f,	// (0x0003f7ac) popup_note2_window_g

0x8426,	// (0x00037f43) bg_popup_sub_pane_cp11_ParamLimits

0x8433,	// (0x00037f50) cell_ai3_links_pane_g1_ParamLimits

0x844a,	// (0x00037f67) cell_ai3_links_pane_t1

0xeec8,	// (0x0003e9e5) set_text_pane_t1_copy1_ParamLimits

0x3c65,	// (0x00033782) cell_graphic_popup_pane_cp2_ParamLimits

0x3c65,	// (0x00033782) cell_graphic_popup_pane_cp2

0xa34c,	// (0x00039e69) cell_graphic_popup_pane_g1_cp2

0x2e45,	// (0x00032962) cell_graphic_popup_pane_g2_cp2

0xa354,	// (0x00039e71) cell_graphic_popup_pane_g3_cp2

0xa35c,	// (0x00039e79) cell_graphic_popup_pane_t2_cp2

0x2e56,	// (0x00032973) grid_highlight_pane_cp3_cp2

0x34ad,	// (0x00032fca) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x30fa,	// (0x00032c17) main_tmo_pane_ParamLimits

0xe0f9,	// (0x0003dc16) popup_tmo_big_image_note_window

0xec68,	// (0x0003e785) cell_ai5_widget_list_pane

0xec70,	// (0x0003e78d) cell_ai5_widget_lrg_icon_pane

0xef76,	// (0x0003ea93) tmo_note_info_pane_t1_ParamLimits

0xef8b,	// (0x0003eaa8) tmo_note_info_pane_t2_ParamLimits

0xefa4,	// (0x0003eac1) tmo_note_info_pane_t3_ParamLimits

0x9eb5,	// (0x000399d2) tmo_note_info_pane_t4_ParamLimits

0x9ec7,	// (0x000399e4) tmo_note_info_pane_t5_ParamLimits

0xfedf,	// (0x0003f9fc) tmo_note_info_pane_t_ParamLimits

0xf01e,	// (0x0003eb3b) settings_container_pane_ParamLimits

0xa2c3,	// (0x00039de0) indicator_popup_pane_cp5

0xa2c3,	// (0x00039de0) indicator_popup_pane_cp6

0xf263,	// (0x0003ed80) list_set_graphic_pane_copy1_ParamLimits

0x21f6,	// (0x00031d13) bg_popup_window_pane_cp23

0xa36a,	// (0x00039e87) popup_tmo_big_image_note_window_g1

0xa376,	// (0x00039e93) popup_tmo_big_image_note_window_t1

0xa386,	// (0x00039ea3) popup_tmo_big_image_note_window_t2

0xa396,	// (0x00039eb3) popup_tmo_big_image_note_window_t3

0x0002,

0xfef8,	// (0x0003fa15) popup_tmo_big_image_note_window_t

0xf27d,	// (0x0003ed9a) cell_ai5_widget_lrg_icon_pane_g1

0xf285,	// (0x0003eda2) cell_ai5_widget_lrg_icon_pane_t1

0xf293,	// (0x0003edb0) cell_ai5_widget_list_row_pane_ParamLimits

0xf293,	// (0x0003edb0) cell_ai5_widget_list_row_pane

0xf2ac,	// (0x0003edc9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2ac,	// (0x0003edc9) cell_ai5_widget_list_row_pane_g1

0xf2b9,	// (0x0003edd6) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2b9,	// (0x0003edd6) cell_ai5_widget_list_row_pane_t1

0xf2d1,	// (0x0003edee) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2d1,	// (0x0003edee) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeff,	// (0x0003fa1c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeff,	// (0x0003fa1c) cell_ai5_widget_list_row_pane_t

0xf40c,	// (0x0003ef29) main_fep_vtchi_ss_pane

0xa40c,	// (0x00039f29) popup_fep_char_pre_window

0xa414,	// (0x00039f31) popup_fep_ituss_window

0xa41f,	// (0x00039f3c) popup_fep_vkbss_window

0xa42a,	// (0x00039f47) grid_vkbss_keypad_pane_ParamLimits

0xa42a,	// (0x00039f47) grid_vkbss_keypad_pane

0xa43a,	// (0x00039f57) ituss_keypad_pane

0xa442,	// (0x00039f5f) aid_vkbss_key_offset_ParamLimits

0xa442,	// (0x00039f5f) aid_vkbss_key_offset

0xa451,	// (0x00039f6e) cell_vkbss_key_pane_ParamLimits

0xa451,	// (0x00039f6e) cell_vkbss_key_pane

0xa467,	// (0x00039f84) bg_cell_vkbss_key_g1_ParamLimits

0xa467,	// (0x00039f84) bg_cell_vkbss_key_g1

0xa473,	// (0x00039f90) cell_vkbss_key_3p_pane_ParamLimits

0xa473,	// (0x00039f90) cell_vkbss_key_3p_pane

0xa48d,	// (0x00039faa) cell_vkbss_key_g1_ParamLimits

0xa48d,	// (0x00039faa) cell_vkbss_key_g1

0xa4a7,	// (0x00039fc4) cell_vkbss_key_t1_ParamLimits

0xa4a7,	// (0x00039fc4) cell_vkbss_key_t1

0xa4d2,	// (0x00039fef) cell_ituss_key_pane_ParamLimits

0xa4d2,	// (0x00039fef) cell_ituss_key_pane

0xa4e1,	// (0x00039ffe) bg_cell_ituss_key_g1_ParamLimits

0xa4e1,	// (0x00039ffe) bg_cell_ituss_key_g1

0xa4ed,	// (0x0003a00a) cell_ituss_key_pane_g1_ParamLimits

0xa4ed,	// (0x0003a00a) cell_ituss_key_pane_g1

0xa4f9,	// (0x0003a016) cell_ituss_key_pane_g2_ParamLimits

0xa4f9,	// (0x0003a016) cell_ituss_key_pane_g2

0x0001,

0xff04,	// (0x0003fa21) cell_ituss_key_pane_g_ParamLimits

0xff04,	// (0x0003fa21) cell_ituss_key_pane_g

0xa50d,	// (0x0003a02a) cell_ituss_key_t1_ParamLimits

0xa50d,	// (0x0003a02a) cell_ituss_key_t1

0xa52b,	// (0x0003a048) cell_ituss_key_t2_ParamLimits

0xa52b,	// (0x0003a048) cell_ituss_key_t2

0xa54a,	// (0x0003a067) cell_ituss_key_t3_ParamLimits

0xa54a,	// (0x0003a067) cell_ituss_key_t3

0xa569,	// (0x0003a086) cell_ituss_key_t4_ParamLimits

0xa569,	// (0x0003a086) cell_ituss_key_t4

0x0003,

0xff09,	// (0x0003fa26) cell_ituss_key_t_ParamLimits

0xff09,	// (0x0003fa26) cell_ituss_key_t

0xa588,	// (0x0003a0a5) cell_vkbss_key_3p_pane_g1

0xa590,	// (0x0003a0ad) cell_vkbss_key_3p_pane_g2

0xa598,	// (0x0003a0b5) cell_vkbss_key_3p_pane_g3

0x0002,

0xff12,	// (0x0003fa2f) cell_vkbss_key_3p_pane_g

0x21f6,	// (0x00031d13) bg_popup_fep_char_preview_window_cp02

0xa5a0,	// (0x0003a0bd) popup_fep_char_pre_window_t1

0xec5e,	// (0x0003e77b) main_ai5_sk_pane

0x9f41,	// (0x00039a5e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9f4d,	// (0x00039a6a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9f61,	// (0x00039a7e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9f70,	// (0x00039a8d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeea,	// (0x0003fa07) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9f83,	// (0x00039aa0) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x30fa,	// (0x00032c17) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf2e3,	// (0x0003ee00) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small

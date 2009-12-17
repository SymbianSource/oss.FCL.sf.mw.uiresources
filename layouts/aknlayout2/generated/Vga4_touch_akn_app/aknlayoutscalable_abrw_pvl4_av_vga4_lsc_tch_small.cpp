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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0002fabd };

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
0xaf46,	// (0x0003aa03) Screen

0xaf52,	// (0x0003aa0f) application_window_ParamLimits

0xaf52,	// (0x0003aa0f) application_window

0x21eb,	// (0x00031ca8) screen_g1

0xaf8a,	// (0x0003aa47) area_bottom_pane_ParamLimits

0xaf8a,	// (0x0003aa47) area_bottom_pane

0xf30c,	// (0x0003edc9) area_top_pane_ParamLimits

0xf30c,	// (0x0003edc9) area_top_pane

0xf416,	// (0x0003eed3) main_pane_ParamLimits

0xf416,	// (0x0003eed3) main_pane

0x21f5,	// (0x00031cb2) misc_graphics

0xd027,	// (0x0003cae4) battery_pane_ParamLimits

0xd027,	// (0x0003cae4) battery_pane

0x5482,	// (0x00034f3f) bg_status_flat_pane_g8

0x548a,	// (0x00034f47) bg_status_flat_pane_g9

0x4868,	// (0x00034325) context_pane_ParamLimits

0x4868,	// (0x00034325) context_pane

0xd19e,	// (0x0003cc5b) navi_pane_ParamLimits

0xd19e,	// (0x0003cc5b) navi_pane

0xd227,	// (0x0003cce4) signal_pane_ParamLimits

0xd227,	// (0x0003cce4) signal_pane

0x0008,

0xf8a8,	// (0x0003f365) bg_status_flat_pane_g

0xd2b7,	// (0x0003cd74) status_pane_g1_ParamLimits

0xd2b7,	// (0x0003cd74) status_pane_g1

0xd2cd,	// (0x0003cd8a) status_pane_g2_ParamLimits

0xd2cd,	// (0x0003cd8a) status_pane_g2

0x4aa8,	// (0x00034565) status_pane_g3_ParamLimits

0x4aa8,	// (0x00034565) status_pane_g3

0x0004,

0xf7db,	// (0x0003f298) status_pane_g_ParamLimits

0xf7db,	// (0x0003f298) status_pane_g

0xd2d9,	// (0x0003cd96) title_pane_ParamLimits

0xd2d9,	// (0x0003cd96) title_pane

0xd336,	// (0x0003cdf3) uni_indicator_pane_ParamLimits

0xd336,	// (0x0003cdf3) uni_indicator_pane

0x4089,	// (0x00033b46) bg_list_pane_ParamLimits

0x4089,	// (0x00033b46) bg_list_pane

0xb908,	// (0x0003b3c5) find_pane

0xc880,	// (0x0003c33d) listscroll_app_pane_ParamLimits

0xc880,	// (0x0003c33d) listscroll_app_pane

0x40bd,	// (0x00033b7a) listscroll_form_pane

0xb910,	// (0x0003b3cd) listscroll_gen_pane_ParamLimits

0xb910,	// (0x0003b3cd) listscroll_gen_pane

0x40bd,	// (0x00033b7a) listscroll_set_pane

0x603b,	// (0x00035af8) main_idle_act_pane

0x3d65,	// (0x00033822) main_idle_trad_pane

0x3d65,	// (0x00033822) main_list_empty_pane

0x40eb,	// (0x00033ba8) main_midp_pane

0x40f7,	// (0x00033bb4) main_pane_g1_ParamLimits

0x40f7,	// (0x00033bb4) main_pane_g1

0xc88c,	// (0x0003c349) popup_ai_message_window_ParamLimits

0xc88c,	// (0x0003c349) popup_ai_message_window

0xc92c,	// (0x0003c3e9) popup_fep_china_uni_window_ParamLimits

0xc92c,	// (0x0003c3e9) popup_fep_china_uni_window

0x4215,	// (0x00033cd2) popup_fep_japan_candidate_window_ParamLimits

0x4215,	// (0x00033cd2) popup_fep_japan_candidate_window

0x423f,	// (0x00033cfc) popup_fep_japan_predictive_window_ParamLimits

0x423f,	// (0x00033cfc) popup_fep_japan_predictive_window

0xc98c,	// (0x0003c449) popup_find_window

0xc9a9,	// (0x0003c466) popup_grid_graphic_window_ParamLimits

0xc9a9,	// (0x0003c466) popup_grid_graphic_window

0x42b0,	// (0x00033d6d) popup_large_graphic_colour_window

0xca4d,	// (0x0003c50a) popup_menu_window_ParamLimits

0xca4d,	// (0x0003c50a) popup_menu_window

0xcc39,	// (0x0003c6f6) popup_note_image_window

0xcbf9,	// (0x0003c6b6) popup_note_wait_window_ParamLimits

0xcbf9,	// (0x0003c6b6) popup_note_wait_window

0xcc51,	// (0x0003c70e) popup_note_window_ParamLimits

0xcc51,	// (0x0003c70e) popup_note_window

0xccff,	// (0x0003c7bc) popup_query_code_window_ParamLimits

0xccff,	// (0x0003c7bc) popup_query_code_window

0x4528,	// (0x00033fe5) popup_query_data_code_window_ParamLimits

0x4528,	// (0x00033fe5) popup_query_data_code_window

0xcd3f,	// (0x0003c7fc) popup_query_data_window_ParamLimits

0xcd3f,	// (0x0003c7fc) popup_query_data_window

0xcdd3,	// (0x0003c890) popup_query_sat_info_window_ParamLimits

0xcdd3,	// (0x0003c890) popup_query_sat_info_window

0xce7e,	// (0x0003c93b) popup_snote_single_graphic_window_ParamLimits

0xce7e,	// (0x0003c93b) popup_snote_single_graphic_window

0xce7e,	// (0x0003c93b) popup_snote_single_text_window_ParamLimits

0xce7e,	// (0x0003c93b) popup_snote_single_text_window

0x45c3,	// (0x00034080) popup_sub_window_general

0x4709,	// (0x000341c6) popup_window_general_ParamLimits

0x4709,	// (0x000341c6) popup_window_general

0x4722,	// (0x000341df) power_save_pane

0xb7d4,	// (0x0003b291) control_pane_g1_ParamLimits

0xb7d4,	// (0x0003b291) control_pane_g1

0x0d34,	// (0x000307f1) control_pane_g2_ParamLimits

0x0d34,	// (0x000307f1) control_pane_g2

0x4032,	// (0x00033aef) control_pane_g3_ParamLimits

0x4032,	// (0x00033aef) control_pane_g3

0x0007,

0xf7c3,	// (0x0003f280) control_pane_g_ParamLimits

0xf7c3,	// (0x0003f280) control_pane_g

0xb80b,	// (0x0003b2c8) control_pane_t1_ParamLimits

0xb80b,	// (0x0003b2c8) control_pane_t1

0xb869,	// (0x0003b326) control_pane_t2_ParamLimits

0xb869,	// (0x0003b326) control_pane_t2

0x0002,

0xf7d4,	// (0x0003f291) control_pane_t_ParamLimits

0xf7d4,	// (0x0003f291) control_pane_t

0x3f53,	// (0x00033a10) navi_navi_volume_pane_cp1

0x3f5c,	// (0x00033a19) status_small_icon_pane

0x3f64,	// (0x00033a21) status_small_pane_g1_ParamLimits

0x3f64,	// (0x00033a21) status_small_pane_g1

0x3f98,	// (0x00033a55) status_small_pane_g2_ParamLimits

0x3f98,	// (0x00033a55) status_small_pane_g2

0x3fa4,	// (0x00033a61) status_small_pane_g3_ParamLimits

0x3fa4,	// (0x00033a61) status_small_pane_g3

0x3fb0,	// (0x00033a6d) status_small_pane_g4_ParamLimits

0x3fb0,	// (0x00033a6d) status_small_pane_g4

0x3fbc,	// (0x00033a79) status_small_pane_g5_ParamLimits

0x3fbc,	// (0x00033a79) status_small_pane_g5

0x3fcb,	// (0x00033a88) status_small_pane_g6_ParamLimits

0x3fcb,	// (0x00033a88) status_small_pane_g6

0x0007,

0xf7b2,	// (0x0003f26f) status_small_pane_g_ParamLimits

0xf7b2,	// (0x0003f26f) status_small_pane_g

0x3ffb,	// (0x00033ab8) status_small_pane_t1

0x401e,	// (0x00033adb) status_small_wait_pane_ParamLimits

0x401e,	// (0x00033adb) status_small_wait_pane

0xc6c4,	// (0x0003c181) aid_levels_signal_ParamLimits

0xc6c4,	// (0x0003c181) aid_levels_signal

0xc6dc,	// (0x0003c199) signal_pane_g1_ParamLimits

0xc6dc,	// (0x0003c199) signal_pane_g1

0xc6f7,	// (0x0003c1b4) signal_pane_g2_ParamLimits

0xc6f7,	// (0x0003c1b4) signal_pane_g2

0x0001,

0xf747,	// (0x0003f204) signal_pane_g_ParamLimits

0xf747,	// (0x0003f204) signal_pane_g

0x3838,	// (0x000332f5) context_pane_g1

0xb107,	// (0x0003abc4) title_pane_g1

0xb13c,	// (0x0003abf9) title_pane_t1

0x229d,	// (0x00031d5a) title_pane_t2

0x22c3,	// (0x00031d80) title_pane_t3

0x0002,

0xf59b,	// (0x0003f058) title_pane_t

0xd35e,	// (0x0003ce1b) aid_levels_battery_ParamLimits

0xd35e,	// (0x0003ce1b) aid_levels_battery

0xd37a,	// (0x0003ce37) battery_pane_g1_ParamLimits

0xd37a,	// (0x0003ce37) battery_pane_g1

0xd397,	// (0x0003ce54) battery_pane_g2_ParamLimits

0xd397,	// (0x0003ce54) battery_pane_g2

0x0001,

0xf7e6,	// (0x0003f2a3) battery_pane_g_ParamLimits

0xf7e6,	// (0x0003f2a3) battery_pane_g

0xd5ba,	// (0x0003d077) uni_indicator_pane_g1

0xd5cf,	// (0x0003d08c) uni_indicator_pane_g2

0xd5e4,	// (0x0003d0a1) uni_indicator_pane_g3

0x0005,

0xf950,	// (0x0003f40d) uni_indicator_pane_g

0x3bd3,	// (0x00033690) navi_icon_pane_ParamLimits

0x3bd3,	// (0x00033690) navi_icon_pane

0x3b1a,	// (0x000335d7) navi_midp_pane

0x3bef,	// (0x000336ac) navi_navi_pane

0x3bf9,	// (0x000336b6) navi_text_pane_ParamLimits

0x3bf9,	// (0x000336b6) navi_text_pane

0x21eb,	// (0x00031ca8) status_small_wait_pane_g1

0x2707,	// (0x000321c4) status_small_wait_pane_g2

0x0001,

0xf94b,	// (0x0003f408) status_small_wait_pane_g

0xd559,	// (0x0003d016) navi_navi_icon_text_pane

0xd561,	// (0x0003d01e) navi_navi_pane_g1_ParamLimits

0xd561,	// (0x0003d01e) navi_navi_pane_g1

0xd573,	// (0x0003d030) navi_navi_pane_g2_ParamLimits

0xd573,	// (0x0003d030) navi_navi_pane_g2

0x0001,

0xf919,	// (0x0003f3d6) navi_navi_pane_g_ParamLimits

0xf919,	// (0x0003f3d6) navi_navi_pane_g

0x5b11,	// (0x000355ce) navi_navi_tabs_pane

0xd585,	// (0x0003d042) navi_navi_text_pane

0xd559,	// (0x0003d016) navi_navi_volume_pane

0xd547,	// (0x0003d004) navi_text_pane_t1

0xd53b,	// (0x0003cff8) navi_icon_pane_g1

0x5a02,	// (0x000354bf) navi_navi_text_pane_t1

0xbb09,	// (0x0003b5c6) navi_navi_volume_pane_g1

0xbb11,	// (0x0003b5ce) volume_small_pane

0xd497,	// (0x0003cf54) navi_navi_icon_text_pane_g1

0xd49f,	// (0x0003cf5c) navi_navi_icon_text_pane_t1

0x3bef,	// (0x000336ac) navi_tabs_2_long_pane

0x3bef,	// (0x000336ac) navi_tabs_2_pane

0x3bef,	// (0x000336ac) navi_tabs_3_long_pane

0x3bef,	// (0x000336ac) navi_tabs_3_pane

0x3bef,	// (0x000336ac) navi_tabs_4_pane

0xbae9,	// (0x0003b5a6) tabs_2_active_pane_ParamLimits

0xbae9,	// (0x0003b5a6) tabs_2_active_pane

0xbaf9,	// (0x0003b5b6) tabs_2_passive_pane_ParamLimits

0xbaf9,	// (0x0003b5b6) tabs_2_passive_pane

0xbab7,	// (0x0003b574) tabs_3_active_pane_ParamLimits

0xbab7,	// (0x0003b574) tabs_3_active_pane

0xbac7,	// (0x0003b584) tabs_3_passive_pane_ParamLimits

0xbac7,	// (0x0003b584) tabs_3_passive_pane

0xbad8,	// (0x0003b595) tabs_3_passive_pane_cp_ParamLimits

0xbad8,	// (0x0003b595) tabs_3_passive_pane_cp

0xba73,	// (0x0003b530) tabs_4_active_pane_ParamLimits

0xba73,	// (0x0003b530) tabs_4_active_pane

0xba84,	// (0x0003b541) tabs_4_passive_pane_ParamLimits

0xba84,	// (0x0003b541) tabs_4_passive_pane

0xba95,	// (0x0003b552) tabs_4_passive_pane_cp_ParamLimits

0xba95,	// (0x0003b552) tabs_4_passive_pane_cp

0xbaa6,	// (0x0003b563) tabs_4_passive_pane_cp2_ParamLimits

0xbaa6,	// (0x0003b563) tabs_4_passive_pane_cp2

0xba4f,	// (0x0003b50c) tabs_2_long_active_pane_ParamLimits

0xba4f,	// (0x0003b50c) tabs_2_long_active_pane

0xba61,	// (0x0003b51e) tabs_2_long_passive_pane_ParamLimits

0xba61,	// (0x0003b51e) tabs_2_long_passive_pane

0xba04,	// (0x0003b4c1) tabs_3_long_active_pane_ParamLimits

0xba04,	// (0x0003b4c1) tabs_3_long_active_pane

0xba1d,	// (0x0003b4da) tabs_3_long_passive_pane_ParamLimits

0xba1d,	// (0x0003b4da) tabs_3_long_passive_pane

0xba36,	// (0x0003b4f3) tabs_3_long_passive_pane_cp_ParamLimits

0xba36,	// (0x0003b4f3) tabs_3_long_passive_pane_cp

0x1060,	// (0x00030b1d) volume_small_pane_g1

0xb9b3,	// (0x0003b470) volume_small_pane_g2

0xb9bc,	// (0x0003b479) volume_small_pane_g3

0xb9c5,	// (0x0003b482) volume_small_pane_g4

0xb9ce,	// (0x0003b48b) volume_small_pane_g5

0xb9d7,	// (0x0003b494) volume_small_pane_g6

0xb9e0,	// (0x0003b49d) volume_small_pane_g7

0xb9e9,	// (0x0003b4a6) volume_small_pane_g8

0xb9f2,	// (0x0003b4af) volume_small_pane_g9

0xb9fb,	// (0x0003b4b8) volume_small_pane_g10

0x0009,

0xf8e5,	// (0x0003f3a2) volume_small_pane_g

0x2551,	// (0x0003200e) bg_active_tab_pane_cp2_ParamLimits

0x2551,	// (0x0003200e) bg_active_tab_pane_cp2

0xb1c8,	// (0x0003ac85) tabs_3_active_pane_g1

0xb1d0,	// (0x0003ac8d) tabs_3_active_pane_t1

0x2551,	// (0x0003200e) bg_passive_tab_pane_cp2_ParamLimits

0x2551,	// (0x0003200e) bg_passive_tab_pane_cp2

0xb1c8,	// (0x0003ac85) tabs_3_passive_pane_g1

0xb1d0,	// (0x0003ac8d) tabs_3_passive_pane_t1

0x2551,	// (0x0003200e) bg_active_tab_pane_cp3_ParamLimits

0x2551,	// (0x0003200e) bg_active_tab_pane_cp3

0xc1eb,	// (0x0003bca8) tabs_4_active_pane_g1

0xc1f3,	// (0x0003bcb0) tabs_4_active_pane_t1

0x2551,	// (0x0003200e) bg_passive_tab_pane_cp3_ParamLimits

0x2551,	// (0x0003200e) bg_passive_tab_pane_cp3

0xc1eb,	// (0x0003bca8) tabs_4_1_passive_pane_g1

0xc1f3,	// (0x0003bcb0) tabs_4_1_passive_pane_t1

0x40eb,	// (0x00033ba8) list_highlight_pane_cp2

0xd6a2,	// (0x0003d15f) list_set_pane_ParamLimits

0xd6a2,	// (0x0003d15f) list_set_pane

0xd76a,	// (0x0003d227) main_pane_set_t1_ParamLimits

0xd76a,	// (0x0003d227) main_pane_set_t1

0xd78a,	// (0x0003d247) main_pane_set_t2_ParamLimits

0xd78a,	// (0x0003d247) main_pane_set_t2

0xd79e,	// (0x0003d25b) main_pane_set_t3_ParamLimits

0xd79e,	// (0x0003d25b) main_pane_set_t3

0xd7b2,	// (0x0003d26f) main_pane_set_t4_ParamLimits

0xd7b2,	// (0x0003d26f) main_pane_set_t4

0x0003,

0xf9b5,	// (0x0003f472) main_pane_set_t_ParamLimits

0xf9b5,	// (0x0003f472) main_pane_set_t

0xd7c6,	// (0x0003d283) setting_code_pane

0x619b,	// (0x00035c58) setting_slider_graphic_pane

0x619b,	// (0x00035c58) setting_slider_pane

0x619b,	// (0x00035c58) setting_text_pane

0x619b,	// (0x00035c58) setting_volume_pane

0x0038,	// (0x0002faf5) volume_set_pane

0x22d5,	// (0x00031d92) bg_set_opt_pane_cp

0x0042,	// (0x0002faff) setting_slider_pane_t1

0x0058,	// (0x0002fb15) setting_slider_pane_t2

0x0072,	// (0x0002fb2f) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0003f05f) setting_slider_pane_t

0x008a,	// (0x0002fb47) slider_set_pane

0x21f5,	// (0x00031cb2) bg_set_opt_pane_cp2

0x2317,	// (0x00031dd4) setting_slider_graphic_pane_g1

0x00a0,	// (0x0002fb5d) setting_slider_graphic_pane_t1

0x00b0,	// (0x0002fb6d) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0003f066) setting_slider_graphic_pane_t

0x00c0,	// (0x0002fb7d) slider_set_pane_cp

0x21f5,	// (0x00031cb2) input_focus_pane_cp1

0x6022,	// (0x00035adf) list_set_text_pane

0x21eb,	// (0x00031ca8) setting_text_pane_g1

0x21f5,	// (0x00031cb2) input_focus_pane_cp2

0x21eb,	// (0x00031ca8) setting_code_pane_g1

0x2320,	// (0x00031ddd) setting_code_pane_t1

0xee94,	// (0x0003e951) set_text_pane_t1_ParamLimits

0xee94,	// (0x0003e951) set_text_pane_t1

0x316e,	// (0x00032c2b) set_opt_bg_pane_g1

0x3176,	// (0x00032c33) set_opt_bg_pane_g2

0x5ffa,	// (0x00035ab7) set_opt_bg_pane_g3

0x3186,	// (0x00032c43) set_opt_bg_pane_g4

0x318e,	// (0x00032c4b) set_opt_bg_pane_g5

0x3196,	// (0x00032c53) set_opt_bg_pane_g6

0x6004,	// (0x00035ac1) set_opt_bg_pane_g7

0x600e,	// (0x00035acb) set_opt_bg_pane_g8

0x6018,	// (0x00035ad5) set_opt_bg_pane_g9

0x0008,

0xf9a2,	// (0x0003f45f) set_opt_bg_pane_g

0x5fed,	// (0x00035aaa) slider_set_pane_g1

0x126c,	// (0x00030d29) slider_set_pane_g2

0x0006,

0xf993,	// (0x0003f450) slider_set_pane_g

0x11cc,	// (0x00030c89) volume_set_pane_g1

0x11d6,	// (0x00030c93) volume_set_pane_g2

0x11e0,	// (0x00030c9d) volume_set_pane_g3

0x11ea,	// (0x00030ca7) volume_set_pane_g4

0x11f4,	// (0x00030cb1) volume_set_pane_g5

0x11fe,	// (0x00030cbb) volume_set_pane_g6

0x1208,	// (0x00030cc5) volume_set_pane_g7

0x1212,	// (0x00030ccf) volume_set_pane_g8

0x121c,	// (0x00030cd9) volume_set_pane_g9

0x1226,	// (0x00030ce3) volume_set_pane_g10

0x0009,

0xf96b,	// (0x0003f428) volume_set_pane_g

0xc205,	// (0x0003bcc2) indicator_pane_ParamLimits

0xc205,	// (0x0003bcc2) indicator_pane

0xc231,	// (0x0003bcee) main_idle_pane_g2_ParamLimits

0xc231,	// (0x0003bcee) main_idle_pane_g2

0xc269,	// (0x0003bd26) main_pane_idle_g1_ParamLimits

0xc269,	// (0x0003bd26) main_pane_idle_g1

0x2370,	// (0x00031e2d) popup_clock_digital_analogue_window_ParamLimits

0x2370,	// (0x00031e2d) popup_clock_digital_analogue_window

0xc297,	// (0x0003bd54) soft_indicator_pane_ParamLimits

0xc297,	// (0x0003bd54) soft_indicator_pane

0xc2b3,	// (0x0003bd70) wallpaper_pane_ParamLimits

0xc2b3,	// (0x0003bd70) wallpaper_pane

0x21eb,	// (0x00031ca8) wallpaper_pane_g1

0xc2c5,	// (0x0003bd82) indicator_pane_g1_ParamLimits

0xc2c5,	// (0x0003bd82) indicator_pane_g1

0x645f,	// (0x00035f1c) navi_navi_icon_text_pane_srt_g1

0x23c4,	// (0x00031e81) soft_indicator_pane_t1

0x23de,	// (0x00031e9b) aid_ps_area_pane

0xc2de,	// (0x0003bd9b) aid_ps_clock_pane

0x23fd,	// (0x00031eba) aid_ps_indicator_pane

0x2409,	// (0x00031ec6) indicator_ps_pane_ParamLimits

0x2409,	// (0x00031ec6) indicator_ps_pane

0x2418,	// (0x00031ed5) power_save_pane_g1_ParamLimits

0x2418,	// (0x00031ed5) power_save_pane_g1

0x2424,	// (0x00031ee1) power_save_pane_g2_ParamLimits

0x2424,	// (0x00031ee1) power_save_pane_g2

0xf2ec,	// (0x0003eda9) aid_navinavi_width_pane

0x23de,	// (0x00031e9b) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0003f06b) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0003f06b) power_save_pane_g

0x2432,	// (0x00031eef) power_save_pane_t1_ParamLimits

0x2432,	// (0x00031eef) power_save_pane_t1

0xc2de,	// (0x0003bd9b) aid_ps_clock_pane_ParamLimits

0x23fd,	// (0x00031eba) aid_ps_indicator_pane_ParamLimits

0x2444,	// (0x00031f01) power_save_pane_t4_ParamLimits

0x2444,	// (0x00031f01) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0003f070) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0003f070) power_save_pane_t

0x246e,	// (0x00031f2b) power_save_t3_ParamLimits

0x246e,	// (0x00031f2b) power_save_t3

0x2459,	// (0x00031f16) power_save_t2_ParamLimits

0x2459,	// (0x00031f16) power_save_t2

0x2483,	// (0x00031f40) indicator_ps_pane_g1

0xc2ec,	// (0x0003bda9) ai_gene_pane_ParamLimits

0xc2ec,	// (0x0003bda9) ai_gene_pane

0xc303,	// (0x0003bdc0) ai_links_pane_ParamLimits

0xc303,	// (0x0003bdc0) ai_links_pane

0xc31b,	// (0x0003bdd8) indicator_pane_cp1_ParamLimits

0xc31b,	// (0x0003bdd8) indicator_pane_cp1

0xc32a,	// (0x0003bde7) main_pane_idle_g1_cp_ParamLimits

0xc32a,	// (0x0003bde7) main_pane_idle_g1_cp

0x24bc,	// (0x00031f79) popup_ai_links_title_window

0xc342,	// (0x0003bdff) soft_indicator_pane_cp1_ParamLimits

0xc342,	// (0x0003bdff) soft_indicator_pane_cp1

0x5dc0,	// (0x0003587d) ai_links_pane_g1

0x5dc9,	// (0x00035886) grid_ai_links_pane

0xd5b1,	// (0x0003d06e) ai_gene_pane_1

0x5dae,	// (0x0003586b) ai_gene_pane_2

0x5db7,	// (0x00035874) list_highlight_pane_cp4

0xd58d,	// (0x0003d04a) cell_ai_link_pane_ParamLimits

0xd58d,	// (0x0003d04a) cell_ai_link_pane

0x5d7d,	// (0x0003583a) cell_ai_link_pane_g1

0x2707,	// (0x000321c4) cell_ai_link_pane_g2

0x0001,

0xf946,	// (0x0003f403) cell_ai_link_pane_g

0x21f5,	// (0x00031cb2) grid_highlight_cp2

0x21f5,	// (0x00031cb2) bg_popup_sub_pane_cp1

0x24df,	// (0x00031f9c) popup_ai_links_title_window_t1

0x5cc9,	// (0x00035786) ai_gene_pane_1_g1_ParamLimits

0x5cc9,	// (0x00035786) ai_gene_pane_1_g1

0x5cd5,	// (0x00035792) ai_gene_pane_1_g2_ParamLimits

0x5cd5,	// (0x00035792) ai_gene_pane_1_g2

0x0001,

0xf93c,	// (0x0003f3f9) ai_gene_pane_1_g_ParamLimits

0xf93c,	// (0x0003f3f9) ai_gene_pane_1_g

0x5ce2,	// (0x0003579f) ai_gene_pane_1_t1_ParamLimits

0x5ce2,	// (0x0003579f) ai_gene_pane_1_t1

0x5d16,	// (0x000357d3) grid_ai_soft_ind_pane

0x5cb4,	// (0x00035771) ai_gene_pane_2_t1_ParamLimits

0x5cb4,	// (0x00035771) ai_gene_pane_2_t1

0xc356,	// (0x0003be13) main_pane_empty_t1_ParamLimits

0xc356,	// (0x0003be13) main_pane_empty_t1

0xc36e,	// (0x0003be2b) main_pane_empty_t2_ParamLimits

0xc36e,	// (0x0003be2b) main_pane_empty_t2

0xc383,	// (0x0003be40) main_pane_empty_t3_ParamLimits

0xc383,	// (0x0003be40) main_pane_empty_t3

0xc395,	// (0x0003be52) main_pane_empty_t4_ParamLimits

0xc395,	// (0x0003be52) main_pane_empty_t4

0xc3a7,	// (0x0003be64) main_pane_empty_t5_ParamLimits

0xc3a7,	// (0x0003be64) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0003f075) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0003f075) main_pane_empty_t

0x31bf,	// (0x00032c7c) bg_popup_window_pane_ParamLimits

0x31bf,	// (0x00032c7c) bg_popup_window_pane

0x5a10,	// (0x000354cd) find_popup_pane_cp2_ParamLimits

0x5a10,	// (0x000354cd) find_popup_pane_cp2

0x5a1c,	// (0x000354d9) heading_pane_ParamLimits

0x5a1c,	// (0x000354d9) heading_pane

0x21f5,	// (0x00031cb2) bg_popup_sub_pane

0xd4bc,	// (0x0003cf79) bg_popup_window_pane_g1_ParamLimits

0xd4bc,	// (0x0003cf79) bg_popup_window_pane_g1

0xd4cb,	// (0x0003cf88) bg_popup_window_pane_g2_ParamLimits

0xd4cb,	// (0x0003cf88) bg_popup_window_pane_g2

0xd4d7,	// (0x0003cf94) bg_popup_window_pane_g3_ParamLimits

0xd4d7,	// (0x0003cf94) bg_popup_window_pane_g3

0xd4e3,	// (0x0003cfa0) bg_popup_window_pane_g4_ParamLimits

0xd4e3,	// (0x0003cfa0) bg_popup_window_pane_g4

0xd4f2,	// (0x0003cfaf) bg_popup_window_pane_g5_ParamLimits

0xd4f2,	// (0x0003cfaf) bg_popup_window_pane_g5

0xd502,	// (0x0003cfbf) bg_popup_window_pane_g6_ParamLimits

0xd502,	// (0x0003cfbf) bg_popup_window_pane_g6

0xd50e,	// (0x0003cfcb) bg_popup_window_pane_g7_ParamLimits

0xd50e,	// (0x0003cfcb) bg_popup_window_pane_g7

0xd51d,	// (0x0003cfda) bg_popup_window_pane_g8_ParamLimits

0xd51d,	// (0x0003cfda) bg_popup_window_pane_g8

0xd52c,	// (0x0003cfe9) bg_popup_window_pane_g9_ParamLimits

0xd52c,	// (0x0003cfe9) bg_popup_window_pane_g9

0x59f6,	// (0x000354b3) bg_popup_window_pane_g10_ParamLimits

0x59f6,	// (0x000354b3) bg_popup_window_pane_g10

0x0009,

0xf904,	// (0x0003f3c1) bg_popup_window_pane_g_ParamLimits

0xf904,	// (0x0003f3c1) bg_popup_window_pane_g

0x591f,	// (0x000353dc) bg_popup_heading_pane_ParamLimits

0x591f,	// (0x000353dc) bg_popup_heading_pane

0x1392,	// (0x00030e4f) tabs_4_passive_pane_cp_srt_ParamLimits

0x1392,	// (0x00030e4f) tabs_4_passive_pane_cp_srt

0x13a4,	// (0x00030e61) tabs_4_passive_pane_srt_ParamLimits

0x5933,	// (0x000353f0) heading_pane_g2

0x13a4,	// (0x00030e61) tabs_4_passive_pane_srt

0x4d25,	// (0x000347e2) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4d25,	// (0x000347e2) bg_passive_tab_pane_cp3_srt

0x593b,	// (0x000353f8) heading_pane_t1_ParamLimits

0x593b,	// (0x000353f8) heading_pane_t1

0x5952,	// (0x0003540f) heading_pane_t2_ParamLimits

0x5952,	// (0x0003540f) heading_pane_t2

0x0001,

0xf8ff,	// (0x0003f3bc) heading_pane_t_ParamLimits

0xf8ff,	// (0x0003f3bc) heading_pane_t

0x544a,	// (0x00034f07) bg_popup_heading_pane_g1

0x54f9,	// (0x00034fb6) bg_popup_heading_pane_g2

0x5503,	// (0x00034fc0) bg_popup_heading_pane_g3

0x550d,	// (0x00034fca) bg_popup_heading_pane_g4

0x5517,	// (0x00034fd4) bg_popup_heading_pane_g5

0x5521,	// (0x00034fde) bg_popup_heading_pane_g6

0x5529,	// (0x00034fe6) bg_popup_heading_pane_g7

0x5531,	// (0x00034fee) bg_popup_heading_pane_g8

0x553b,	// (0x00034ff8) bg_popup_heading_pane_g9

0x0008,

0xf8bb,	// (0x0003f378) bg_popup_heading_pane_g

0x4c33,	// (0x000346f0) bg_popup_sub_pane_g1

0x4c43,	// (0x00034700) bg_popup_sub_pane_g2

0x4c3b,	// (0x000346f8) bg_popup_sub_pane_g3

0x4c53,	// (0x00034710) bg_popup_sub_pane_g4

0x4c4b,	// (0x00034708) bg_popup_sub_pane_g5

0x4c5b,	// (0x00034718) bg_popup_sub_pane_g6

0x4c63,	// (0x00034720) bg_popup_sub_pane_g7

0x4c73,	// (0x00034730) bg_popup_sub_pane_g8

0x4c6b,	// (0x00034728) bg_popup_sub_pane_g9

0x0008,

0xf895,	// (0x0003f352) bg_popup_sub_pane_g

0x2551,	// (0x0003200e) bg_popup_window_pane_cp5_ParamLimits

0x2551,	// (0x0003200e) bg_popup_window_pane_cp5

0x256d,	// (0x0003202a) popup_note_window_g1_ParamLimits

0x256d,	// (0x0003202a) popup_note_window_g1

0x2579,	// (0x00032036) popup_note_window_t1_ParamLimits

0x2579,	// (0x00032036) popup_note_window_t1

0x258f,	// (0x0003204c) popup_note_window_t2_ParamLimits

0x258f,	// (0x0003204c) popup_note_window_t2

0x25a5,	// (0x00032062) popup_note_window_t3_ParamLimits

0x25a5,	// (0x00032062) popup_note_window_t3

0x25bb,	// (0x00032078) popup_note_window_t4_ParamLimits

0x25bb,	// (0x00032078) popup_note_window_t4

0x25e3,	// (0x000320a0) popup_note_window_t5_ParamLimits

0x25e3,	// (0x000320a0) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0003f080) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0003f080) popup_note_window_t

0x2607,	// (0x000320c4) bg_popup_window_pane_cp6_ParamLimits

0x2607,	// (0x000320c4) bg_popup_window_pane_cp6

0x53c6,	// (0x00034e83) popup_note_image_window_g1_ParamLimits

0x53c6,	// (0x00034e83) popup_note_image_window_g1

0x53d2,	// (0x00034e8f) popup_note_image_window_g2_ParamLimits

0x53d2,	// (0x00034e8f) popup_note_image_window_g2

0x0001,

0xf889,	// (0x0003f346) popup_note_image_window_g_ParamLimits

0xf889,	// (0x0003f346) popup_note_image_window_g

0x53eb,	// (0x00034ea8) popup_note_image_window_t1_ParamLimits

0x53eb,	// (0x00034ea8) popup_note_image_window_t1

0x5404,	// (0x00034ec1) popup_note_image_window_t2_ParamLimits

0x5404,	// (0x00034ec1) popup_note_image_window_t2

0x541d,	// (0x00034eda) popup_note_image_window_t3_ParamLimits

0x541d,	// (0x00034eda) popup_note_image_window_t3

0x0002,

0xf88e,	// (0x0003f34b) popup_note_image_window_t_ParamLimits

0xf88e,	// (0x0003f34b) popup_note_image_window_t

0x5286,	// (0x00034d43) bg_popup_window_pane_cp7_ParamLimits

0x5286,	// (0x00034d43) bg_popup_window_pane_cp7

0x52b6,	// (0x00034d73) popup_note_wait_window_g1_ParamLimits

0x52b6,	// (0x00034d73) popup_note_wait_window_g1

0x52c2,	// (0x00034d7f) popup_note_wait_window_g2_ParamLimits

0x52c2,	// (0x00034d7f) popup_note_wait_window_g2

0x0002,

0xf877,	// (0x0003f334) popup_note_wait_window_g_ParamLimits

0xf877,	// (0x0003f334) popup_note_wait_window_g

0x52da,	// (0x00034d97) popup_note_wait_window_t1_ParamLimits

0x52da,	// (0x00034d97) popup_note_wait_window_t1

0x5301,	// (0x00034dbe) popup_note_wait_window_t2_ParamLimits

0x5301,	// (0x00034dbe) popup_note_wait_window_t2

0x531f,	// (0x00034ddc) popup_note_wait_window_t3_ParamLimits

0x531f,	// (0x00034ddc) popup_note_wait_window_t3

0x5332,	// (0x00034def) popup_note_wait_window_t4_ParamLimits

0x5332,	// (0x00034def) popup_note_wait_window_t4

0x0004,

0xf87e,	// (0x0003f33b) popup_note_wait_window_t_ParamLimits

0xf87e,	// (0x0003f33b) popup_note_wait_window_t

0x5357,	// (0x00034e14) wait_bar_pane_ParamLimits

0x5357,	// (0x00034e14) wait_bar_pane

0x21f5,	// (0x00031cb2) wait_anim_pane

0x21f5,	// (0x00031cb2) wait_border_pane

0x21eb,	// (0x00031ca8) wait_anim_pane_g1

0x21eb,	// (0x00031ca8) wait_anim_pane_g2

0x0001,

0xf742,	// (0x0003f1ff) wait_anim_pane_g

0x522a,	// (0x00034ce7) wait_border_pane_g1

0x5235,	// (0x00034cf2) wait_border_pane_g2

0x523e,	// (0x00034cfb) wait_border_pane_g3

0x0002,

0xf870,	// (0x0003f32d) wait_border_pane_g

0x5186,	// (0x00034c43) bg_popup_window_pane_cp16_ParamLimits

0x5186,	// (0x00034c43) bg_popup_window_pane_cp16

0x5194,	// (0x00034c51) indicator_popup_pane_cp4_ParamLimits

0x5194,	// (0x00034c51) indicator_popup_pane_cp4

0x51a8,	// (0x00034c65) popup_query_data_window_t1_ParamLimits

0x51a8,	// (0x00034c65) popup_query_data_window_t1

0x51ba,	// (0x00034c77) popup_query_data_window_t2_ParamLimits

0x51ba,	// (0x00034c77) popup_query_data_window_t2

0x51d3,	// (0x00034c90) popup_query_data_window_t3_ParamLimits

0x51d3,	// (0x00034c90) popup_query_data_window_t3

0x0002,

0xf869,	// (0x0003f326) popup_query_data_window_t_ParamLimits

0xf869,	// (0x0003f326) popup_query_data_window_t

0x51ed,	// (0x00034caa) query_popup_data_pane_ParamLimits

0x51ed,	// (0x00034caa) query_popup_data_pane

0x5201,	// (0x00034cbe) query_popup_data_pane_cp1_ParamLimits

0x5201,	// (0x00034cbe) query_popup_data_pane_cp1

0x2607,	// (0x000320c4) bg_popup_window_pane_cp10_ParamLimits

0x2607,	// (0x000320c4) bg_popup_window_pane_cp10

0x50e9,	// (0x00034ba6) indicator_popup_pane_ParamLimits

0x50e9,	// (0x00034ba6) indicator_popup_pane

0x2668,	// (0x00032125) popup_query_code_window_t1_ParamLimits

0x2668,	// (0x00032125) popup_query_code_window_t1

0x5101,	// (0x00034bbe) popup_query_code_window_t2_ParamLimits

0x5101,	// (0x00034bbe) popup_query_code_window_t2

0x513f,	// (0x00034bfc) popup_query_code_window_t3_ParamLimits

0x513f,	// (0x00034bfc) popup_query_code_window_t3

0x0002,

0xf862,	// (0x0003f31f) popup_query_code_window_t_ParamLimits

0xf862,	// (0x0003f31f) popup_query_code_window_t

0x516e,	// (0x00034c2b) query_popup_pane_ParamLimits

0x516e,	// (0x00034c2b) query_popup_pane

0x2607,	// (0x000320c4) bg_popup_window_pane_cp15_ParamLimits

0x2607,	// (0x000320c4) bg_popup_window_pane_cp15

0x2627,	// (0x000320e4) indicator_popup_pane_cp1_ParamLimits

0x2627,	// (0x000320e4) indicator_popup_pane_cp1

0x263a,	// (0x000320f7) indicator_popup_pane_cp2_ParamLimits

0x263a,	// (0x000320f7) indicator_popup_pane_cp2

0x2655,	// (0x00032112) popup_query_data_code_window_g1_ParamLimits

0x2655,	// (0x00032112) popup_query_data_code_window_g1

0x2668,	// (0x00032125) popup_query_data_code_window_t1_ParamLimits

0x2668,	// (0x00032125) popup_query_data_code_window_t1

0x267a,	// (0x00032137) popup_query_data_code_window_t2_ParamLimits

0x267a,	// (0x00032137) popup_query_data_code_window_t2

0x268c,	// (0x00032149) popup_query_data_code_window_t3_ParamLimits

0x268c,	// (0x00032149) popup_query_data_code_window_t3

0x26a2,	// (0x0003215f) popup_query_data_code_window_t4_ParamLimits

0x26a2,	// (0x0003215f) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0003f08b) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0003f08b) popup_query_data_code_window_t

0x0ef8,	// (0x000309b5) list_single_midp_graphic_pane_g3

0x26bc,	// (0x00032179) query_popup_data_pane_cp2_ParamLimits

0x26cf,	// (0x0003218c) query_popup_pane_cp2_ParamLimits

0x26cf,	// (0x0003218c) query_popup_pane_cp2

0x21f5,	// (0x00031cb2) bg_popup_window_pane_cp11

0x50bd,	// (0x00034b7a) heading_pane_cp5

0x2d6a,	// (0x00032827) listscroll_popup_info_pane

0x21f5,	// (0x00031cb2) input_focus_pane_cp3

0x26ea,	// (0x000321a7) query_popup_pane_t1

0x26f8,	// (0x000321b5) list_popup_info_pane_ParamLimits

0x26f8,	// (0x000321b5) list_popup_info_pane

0x2707,	// (0x000321c4) listscroll_popup_info_pane_g1

0x270f,	// (0x000321cc) scroll_pane_cp7

0x2719,	// (0x000321d6) popup_info_list_pane_t1_ParamLimits

0x2719,	// (0x000321d6) popup_info_list_pane_t1

0x2cde,	// (0x0003279b) popup_info_list_pane_t2_ParamLimits

0x2cde,	// (0x0003279b) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0003f094) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0003f094) popup_info_list_pane_t

0x21f5,	// (0x00031cb2) bg_popup_window_pane_cp12

0x6479,	// (0x00035f36) find_popup_pane

0x22d5,	// (0x00031d92) bg_popup_window_pane_cp3

0x2cf8,	// (0x000327b5) heading_pane_cp3

0x2d04,	// (0x000327c1) listscroll_popup_graphic_pane

0x21f5,	// (0x00031cb2) bg_popup_window_pane_cp4

0xc409,	// (0x0003bec6) heading_pane_cp4

0x2d6a,	// (0x00032827) listscroll_popup_colour_pane

0xc413,	// (0x0003bed0) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc413,	// (0x0003bed0) cell_large_graphic_colour_none_popup_pane

0xc427,	// (0x0003bee4) grid_large_graphic_colour_popup_pane_ParamLimits

0xc427,	// (0x0003bee4) grid_large_graphic_colour_popup_pane

0xc453,	// (0x0003bf10) listscroll_popup_colour_pane_g1_ParamLimits

0xc453,	// (0x0003bf10) listscroll_popup_colour_pane_g1

0xc46a,	// (0x0003bf27) listscroll_popup_colour_pane_g2_ParamLimits

0xc46a,	// (0x0003bf27) listscroll_popup_colour_pane_g2

0xc481,	// (0x0003bf3e) listscroll_popup_colour_pane_g3_ParamLimits

0xc481,	// (0x0003bf3e) listscroll_popup_colour_pane_g3

0xc491,	// (0x0003bf4e) listscroll_popup_colour_pane_g4_ParamLimits

0xc491,	// (0x0003bf4e) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0003f099) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0003f099) listscroll_popup_colour_pane_g

0x2e04,	// (0x000328c1) scroll_pane_cp6_ParamLimits

0x2e04,	// (0x000328c1) scroll_pane_cp6

0xc4a5,	// (0x0003bf62) cell_large_graphic_colour_popup_pane_ParamLimits

0xc4a5,	// (0x0003bf62) cell_large_graphic_colour_popup_pane

0x2e3b,	// (0x000328f8) cell_large_graphic_colour_none_popup_pane_t1

0x21f5,	// (0x00031cb2) grid_highlight_pane_cp5

0x2e4a,	// (0x00032907) cell_large_graphic_colour_popup_pane_g1

0x2e52,	// (0x0003290f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0003f0a2) cell_large_graphic_colour_popup_pane_g

0x2e5a,	// (0x00032917) cell_large_graphic_colour_popup_pane_g2_copy1

0x2e63,	// (0x00032920) grid_highlight_pane_cp4

0x2e6b,	// (0x00032928) bg_popup_window_pane_cp8_ParamLimits

0x2e6b,	// (0x00032928) bg_popup_window_pane_cp8

0x2e86,	// (0x00032943) popup_snote_single_text_window_g1_ParamLimits

0x2e86,	// (0x00032943) popup_snote_single_text_window_g1

0x2e98,	// (0x00032955) popup_snote_single_text_window_t1_ParamLimits

0x2e98,	// (0x00032955) popup_snote_single_text_window_t1

0x2eab,	// (0x00032968) popup_snote_single_text_window_t2_ParamLimits

0x2eab,	// (0x00032968) popup_snote_single_text_window_t2

0x2ebe,	// (0x0003297b) popup_snote_single_text_window_t3_ParamLimits

0x2ebe,	// (0x0003297b) popup_snote_single_text_window_t3

0x2ef7,	// (0x000329b4) popup_snote_single_text_window_t4_ParamLimits

0x2ef7,	// (0x000329b4) popup_snote_single_text_window_t4

0x2f2b,	// (0x000329e8) popup_snote_single_text_window_t5_ParamLimits

0x2f2b,	// (0x000329e8) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0003f0a7) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0003f0a7) popup_snote_single_text_window_t

0x2f5a,	// (0x00032a17) bg_popup_window_pane_cp9_ParamLimits

0x2f5a,	// (0x00032a17) bg_popup_window_pane_cp9

0x2e86,	// (0x00032943) popup_snote_single_graphic_window_g1_ParamLimits

0x2e86,	// (0x00032943) popup_snote_single_graphic_window_g1

0x2f68,	// (0x00032a25) popup_snote_single_graphic_window_g2_ParamLimits

0x2f68,	// (0x00032a25) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0003f0b2) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0003f0b2) popup_snote_single_graphic_window_g

0x2f74,	// (0x00032a31) popup_snote_single_graphic_window_t1_ParamLimits

0x2f74,	// (0x00032a31) popup_snote_single_graphic_window_t1

0x2f87,	// (0x00032a44) popup_snote_single_graphic_window_t2_ParamLimits

0x2f87,	// (0x00032a44) popup_snote_single_graphic_window_t2

0x2f9a,	// (0x00032a57) popup_snote_single_graphic_window_t3_ParamLimits

0x2f9a,	// (0x00032a57) popup_snote_single_graphic_window_t3

0x2fd3,	// (0x00032a90) popup_snote_single_graphic_window_t4_ParamLimits

0x2fd3,	// (0x00032a90) popup_snote_single_graphic_window_t4

0x3007,	// (0x00032ac4) popup_snote_single_graphic_window_t5_ParamLimits

0x3007,	// (0x00032ac4) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0003f0b7) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0003f0b7) popup_snote_single_graphic_window_t

0x63b7,	// (0x00035e74) grid_graphic_popup_pane_ParamLimits

0x63b7,	// (0x00035e74) grid_graphic_popup_pane

0x63e5,	// (0x00035ea2) listscroll_popup_graphic_pane_g1_ParamLimits

0x63e5,	// (0x00035ea2) listscroll_popup_graphic_pane_g1

0xd8ee,	// (0x0003d3ab) listscroll_popup_graphic_pane_g2_ParamLimits

0xd8ee,	// (0x0003d3ab) listscroll_popup_graphic_pane_g2

0x0001,

0xf9df,	// (0x0003f49c) listscroll_popup_graphic_pane_g_ParamLimits

0xf9df,	// (0x0003f49c) listscroll_popup_graphic_pane_g

0x640d,	// (0x00035eca) scroll_pane_cp5

0xd8ae,	// (0x0003d36b) cell_graphic_popup_pane_ParamLimits

0xd8ae,	// (0x0003d36b) cell_graphic_popup_pane

0x6340,	// (0x00035dfd) cell_graphic_popup_pane_g1

0x6348,	// (0x00035e05) cell_graphic_popup_pane_g2

0x2e5a,	// (0x00032917) cell_graphic_popup_pane_g3

0x0002,

0xf9d8,	// (0x0003f495) cell_graphic_popup_pane_g

0x6351,	// (0x00035e0e) cell_graphic_popup_pane_t2

0x2e63,	// (0x00032920) grid_highlight_pane_cp3

0x3048,	// (0x00032b05) list_gen_pane_ParamLimits

0x3048,	// (0x00032b05) list_gen_pane

0x307a,	// (0x00032b37) scroll_pane

0xd869,	// (0x0003d326) bg_list_pane_g1_ParamLimits

0xd869,	// (0x0003d326) bg_list_pane_g1

0x62bd,	// (0x00035d7a) bg_list_pane_g2_ParamLimits

0x62bd,	// (0x00035d7a) bg_list_pane_g2

0x62d0,	// (0x00035d8d) bg_list_pane_g3_ParamLimits

0x62d0,	// (0x00035d8d) bg_list_pane_g3

0x62e2,	// (0x00035d9f) bg_list_pane_g4_ParamLimits

0x62e2,	// (0x00035d9f) bg_list_pane_g4

0xd884,	// (0x0003d341) bg_list_pane_g5_ParamLimits

0xd884,	// (0x0003d341) bg_list_pane_g5

0x0004,

0xf9cd,	// (0x0003f48a) bg_list_pane_g_ParamLimits

0xf9cd,	// (0x0003f48a) bg_list_pane_g

0xd804,	// (0x0003d2c1) list_double2_graphic_large_graphic_pane_ParamLimits

0xd804,	// (0x0003d2c1) list_double2_graphic_large_graphic_pane

0xd804,	// (0x0003d2c1) list_double2_graphic_pane_ParamLimits

0xd804,	// (0x0003d2c1) list_double2_graphic_pane

0xd804,	// (0x0003d2c1) list_double2_large_graphic_pane_ParamLimits

0xd804,	// (0x0003d2c1) list_double2_large_graphic_pane

0xd804,	// (0x0003d2c1) list_double2_pane_ParamLimits

0xd804,	// (0x0003d2c1) list_double2_pane

0xd804,	// (0x0003d2c1) list_double_graphic_heading_pane_ParamLimits

0xd804,	// (0x0003d2c1) list_double_graphic_heading_pane

0xd804,	// (0x0003d2c1) list_double_graphic_pane_ParamLimits

0xd804,	// (0x0003d2c1) list_double_graphic_pane

0xd804,	// (0x0003d2c1) list_double_heading_pane_ParamLimits

0xd804,	// (0x0003d2c1) list_double_heading_pane

0xd804,	// (0x0003d2c1) list_double_large_graphic_pane_ParamLimits

0xd804,	// (0x0003d2c1) list_double_large_graphic_pane

0xd804,	// (0x0003d2c1) list_double_number_pane_ParamLimits

0xd804,	// (0x0003d2c1) list_double_number_pane

0xd804,	// (0x0003d2c1) list_double_pane_ParamLimits

0xd804,	// (0x0003d2c1) list_double_pane

0xd804,	// (0x0003d2c1) list_double_time_pane_ParamLimits

0xd804,	// (0x0003d2c1) list_double_time_pane

0xd804,	// (0x0003d2c1) list_setting_number_pane_ParamLimits

0xd804,	// (0x0003d2c1) list_setting_number_pane

0xd804,	// (0x0003d2c1) list_setting_pane_ParamLimits

0xd804,	// (0x0003d2c1) list_setting_pane

0xbb58,	// (0x0003b615) list_single_2graphic_pane_ParamLimits

0xbb58,	// (0x0003b615) list_single_2graphic_pane

0xbb58,	// (0x0003b615) list_single_graphic_heading_pane_ParamLimits

0xbb58,	// (0x0003b615) list_single_graphic_heading_pane

0xbb58,	// (0x0003b615) list_single_graphic_pane_ParamLimits

0xbb58,	// (0x0003b615) list_single_graphic_pane

0xbb58,	// (0x0003b615) list_single_heading_pane_ParamLimits

0xbb58,	// (0x0003b615) list_single_heading_pane

0xd854,	// (0x0003d311) list_single_large_graphic_pane_ParamLimits

0xd854,	// (0x0003d311) list_single_large_graphic_pane

0xbb58,	// (0x0003b615) list_single_number_heading_pane_ParamLimits

0xbb58,	// (0x0003b615) list_single_number_heading_pane

0xbb58,	// (0x0003b615) list_single_number_pane_ParamLimits

0xbb58,	// (0x0003b615) list_single_number_pane

0xbb58,	// (0x0003b615) list_single_pane_ParamLimits

0xbb58,	// (0x0003b615) list_single_pane

0x21f5,	// (0x00031cb2) list_highlight_pane_cp1

0x0f27,	// (0x000309e4) list_single_pane_g1_ParamLimits

0x0f27,	// (0x000309e4) list_single_pane_g1

0x0f33,	// (0x000309f0) list_single_pane_g2_ParamLimits

0x0f33,	// (0x000309f0) list_single_pane_g2

0x0001,

0xf60c,	// (0x0003f0c9) list_single_pane_g_ParamLimits

0xf60c,	// (0x0003f0c9) list_single_pane_g

0x1485,	// (0x00030f42) list_single_pane_t1_ParamLimits

0x1485,	// (0x00030f42) list_single_pane_t1

0x0f27,	// (0x000309e4) list_single_number_pane_g1_ParamLimits

0x0f27,	// (0x000309e4) list_single_number_pane_g1

0x0f33,	// (0x000309f0) list_single_number_pane_g2_ParamLimits

0x0f33,	// (0x000309f0) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0003f0c9) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0003f0c9) list_single_number_pane_g

0x0ebd,	// (0x0003097a) list_single_number_pane_t1_ParamLimits

0x0ebd,	// (0x0003097a) list_single_number_pane_t1

0xbb1a,	// (0x0003b5d7) list_single_number_pane_t2_ParamLimits

0xbb1a,	// (0x0003b5d7) list_single_number_pane_t2

0x0001,

0xf98e,	// (0x0003f44b) list_single_number_pane_t_ParamLimits

0xf98e,	// (0x0003f44b) list_single_number_pane_t

0xb1e2,	// (0x0003ac9f) list_single_graphic_pane_g1_ParamLimits

0xb1e2,	// (0x0003ac9f) list_single_graphic_pane_g1

0x0f27,	// (0x000309e4) list_single_graphic_pane_g2_ParamLimits

0x0f27,	// (0x000309e4) list_single_graphic_pane_g2

0x0f33,	// (0x000309f0) list_single_graphic_pane_g3_ParamLimits

0x0f33,	// (0x000309f0) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0003f0c2) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0003f0c2) list_single_graphic_pane_g

0xb1ee,	// (0x0003acab) list_single_graphic_pane_t1_ParamLimits

0xb1ee,	// (0x0003acab) list_single_graphic_pane_t1

0x0f27,	// (0x000309e4) list_single_heading_pane_g1_ParamLimits

0x0f27,	// (0x000309e4) list_single_heading_pane_g1

0x0f33,	// (0x000309f0) list_single_heading_pane_g2_ParamLimits

0x0f33,	// (0x000309f0) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0003f0c9) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0003f0c9) list_single_heading_pane_g

0xb204,	// (0x0003acc1) list_single_heading_pane_t1_ParamLimits

0xb204,	// (0x0003acc1) list_single_heading_pane_t1

0xb21a,	// (0x0003acd7) list_single_heading_pane_t2_ParamLimits

0xb21a,	// (0x0003acd7) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0003f0ce) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0003f0ce) list_single_heading_pane_t

0x0f27,	// (0x000309e4) list_single_number_heading_pane_g1_ParamLimits

0x0f27,	// (0x000309e4) list_single_number_heading_pane_g1

0x0f33,	// (0x000309f0) list_single_number_heading_pane_g2_ParamLimits

0x0f33,	// (0x000309f0) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0003f0c9) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0003f0c9) list_single_number_heading_pane_g

0xb204,	// (0x0003acc1) list_single_number_heading_pane_t1_ParamLimits

0xb204,	// (0x0003acc1) list_single_number_heading_pane_t1

0xb22c,	// (0x0003ace9) list_single_number_heading_pane_t2_ParamLimits

0xb22c,	// (0x0003ace9) list_single_number_heading_pane_t2

0x145f,	// (0x00030f1c) list_single_number_heading_pane_t3_ParamLimits

0x145f,	// (0x00030f1c) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0003f0d3) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0003f0d3) list_single_number_heading_pane_t

0x0e99,	// (0x00030956) list_single_graphic_heading_pane_g1_ParamLimits

0x0e99,	// (0x00030956) list_single_graphic_heading_pane_g1

0xb23e,	// (0x0003acfb) list_single_graphic_heading_pane_g4_ParamLimits

0xb23e,	// (0x0003acfb) list_single_graphic_heading_pane_g4

0x0f33,	// (0x000309f0) list_single_graphic_heading_pane_g5_ParamLimits

0x0f33,	// (0x000309f0) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0003f0da) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0003f0da) list_single_graphic_heading_pane_g

0xb204,	// (0x0003acc1) list_single_graphic_heading_pane_t1_ParamLimits

0xb204,	// (0x0003acc1) list_single_graphic_heading_pane_t1

0xb24f,	// (0x0003ad0c) list_single_graphic_heading_pane_t2_ParamLimits

0xb24f,	// (0x0003ad0c) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0003f0e1) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0003f0e1) list_single_graphic_heading_pane_t

0x149b,	// (0x00030f58) list_single_large_graphic_pane_g1_ParamLimits

0x149b,	// (0x00030f58) list_single_large_graphic_pane_g1

0x14a7,	// (0x00030f64) list_single_large_graphic_pane_g2_ParamLimits

0x14a7,	// (0x00030f64) list_single_large_graphic_pane_g2

0x2733,	// (0x000321f0) list_single_large_graphic_pane_g3_ParamLimits

0x2733,	// (0x000321f0) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0003f0e6) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0003f0e6) list_single_large_graphic_pane_g

0x5235,	// (0x00034cf2) wait_border_pane_g2_copy1

0xb261,	// (0x0003ad1e) list_single_large_graphic_pane_g4_cp2

0x273f,	// (0x000321fc) list_single_large_graphic_pane_t1_ParamLimits

0x273f,	// (0x000321fc) list_single_large_graphic_pane_t1

0xb269,	// (0x0003ad26) list_double_pane_g1_ParamLimits

0xb269,	// (0x0003ad26) list_double_pane_g1

0xb275,	// (0x0003ad32) list_double_pane_g2_ParamLimits

0xb275,	// (0x0003ad32) list_double_pane_g2

0x0001,

0xf630,	// (0x0003f0ed) list_double_pane_g_ParamLimits

0xf630,	// (0x0003f0ed) list_double_pane_g

0xb281,	// (0x0003ad3e) list_double_pane_t1_ParamLimits

0xb281,	// (0x0003ad3e) list_double_pane_t1

0xb297,	// (0x0003ad54) list_double_pane_t2_ParamLimits

0xb297,	// (0x0003ad54) list_double_pane_t2

0x0001,

0xf635,	// (0x0003f0f2) list_double_pane_t_ParamLimits

0xf635,	// (0x0003f0f2) list_double_pane_t

0xb2a9,	// (0x0003ad66) list_double2_pane_g1_ParamLimits

0xb2a9,	// (0x0003ad66) list_double2_pane_g1

0xb275,	// (0x0003ad32) list_double2_pane_g2_ParamLimits

0xb275,	// (0x0003ad32) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0003f0f7) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0003f0f7) list_double2_pane_g

0xb281,	// (0x0003ad3e) list_double2_pane_t1_ParamLimits

0xb281,	// (0x0003ad3e) list_double2_pane_t1

0xb2ba,	// (0x0003ad77) list_double2_pane_t2_ParamLimits

0xb2ba,	// (0x0003ad77) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0003f0fc) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0003f0fc) list_double2_pane_t

0xb269,	// (0x0003ad26) list_double_number_pane_g1_ParamLimits

0xb269,	// (0x0003ad26) list_double_number_pane_g1

0xb275,	// (0x0003ad32) list_double_number_pane_g2_ParamLimits

0xb275,	// (0x0003ad32) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0003f0ed) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0003f0ed) list_double_number_pane_g

0xb2cc,	// (0x0003ad89) list_double_number_pane_t1_ParamLimits

0xb2cc,	// (0x0003ad89) list_double_number_pane_t1

0xb2de,	// (0x0003ad9b) list_double_number_pane_t2_ParamLimits

0xb2de,	// (0x0003ad9b) list_double_number_pane_t2

0xb2f4,	// (0x0003adb1) list_double_number_pane_t3_ParamLimits

0xb2f4,	// (0x0003adb1) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0003f101) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0003f101) list_double_number_pane_t

0xb306,	// (0x0003adc3) list_double_graphic_pane_g1_ParamLimits

0xb306,	// (0x0003adc3) list_double_graphic_pane_g1

0xb312,	// (0x0003adcf) list_double_graphic_pane_g2_ParamLimits

0xb312,	// (0x0003adcf) list_double_graphic_pane_g2

0xb321,	// (0x0003adde) list_double_graphic_pane_g3_ParamLimits

0xb321,	// (0x0003adde) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0003f108) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0003f108) list_double_graphic_pane_g

0xb339,	// (0x0003adf6) list_double_graphic_pane_t1_ParamLimits

0xb339,	// (0x0003adf6) list_double_graphic_pane_t1

0xb34f,	// (0x0003ae0c) list_double_graphic_pane_t2_ParamLimits

0xb34f,	// (0x0003ae0c) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0003f111) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0003f111) list_double_graphic_pane_t

0xb306,	// (0x0003adc3) list_double2_graphic_pane_g1_ParamLimits

0xb306,	// (0x0003adc3) list_double2_graphic_pane_g1

0xb361,	// (0x0003ae1e) list_double2_graphic_pane_g2_ParamLimits

0xb361,	// (0x0003ae1e) list_double2_graphic_pane_g2

0xb36d,	// (0x0003ae2a) list_double2_graphic_pane_g3_ParamLimits

0xb36d,	// (0x0003ae2a) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0003f116) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0003f116) list_double2_graphic_pane_g

0xb2de,	// (0x0003ad9b) list_double2_graphic_pane_t1_ParamLimits

0xb2de,	// (0x0003ad9b) list_double2_graphic_pane_t1

0xb379,	// (0x0003ae36) list_double2_graphic_pane_t2_ParamLimits

0xb379,	// (0x0003ae36) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0003f11d) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0003f11d) list_double2_graphic_pane_t

0xb38b,	// (0x0003ae48) list_double_large_graphic_pane_g1_ParamLimits

0xb38b,	// (0x0003ae48) list_double_large_graphic_pane_g1

0xb2a9,	// (0x0003ad66) list_double_large_graphic_pane_g2_ParamLimits

0xb2a9,	// (0x0003ad66) list_double_large_graphic_pane_g2

0xb275,	// (0x0003ad32) list_double_large_graphic_pane_g3_ParamLimits

0xb275,	// (0x0003ad32) list_double_large_graphic_pane_g3

0xb3b6,	// (0x0003ae73) list_double_large_graphic_pane_g4_ParamLimits

0xb3b6,	// (0x0003ae73) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0003f122) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0003f122) list_double_large_graphic_pane_g

0xb3c8,	// (0x0003ae85) list_double_large_graphic_pane_t1_ParamLimits

0xb3c8,	// (0x0003ae85) list_double_large_graphic_pane_t1

0xb3e1,	// (0x0003ae9e) list_double_large_graphic_pane_t2_ParamLimits

0xb3e1,	// (0x0003ae9e) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0003f12d) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0003f12d) list_double_large_graphic_pane_t

0xb3f3,	// (0x0003aeb0) list_double2_large_graphic_pane_g1_ParamLimits

0xb3f3,	// (0x0003aeb0) list_double2_large_graphic_pane_g1

0xb2a9,	// (0x0003ad66) list_double2_large_graphic_pane_g2_ParamLimits

0xb2a9,	// (0x0003ad66) list_double2_large_graphic_pane_g2

0xb275,	// (0x0003ad32) list_double2_large_graphic_pane_g3_ParamLimits

0xb275,	// (0x0003ad32) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0003f132) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0003f132) list_double2_large_graphic_pane_g

0xb3ff,	// (0x0003aebc) list_double2_large_graphic_pane_t1_ParamLimits

0xb3ff,	// (0x0003aebc) list_double2_large_graphic_pane_t1

0xb415,	// (0x0003aed2) list_double2_large_graphic_pane_t2_ParamLimits

0xb415,	// (0x0003aed2) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0003f139) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0003f139) list_double2_large_graphic_pane_t

0xb427,	// (0x0003aee4) list_double_heading_pane_g1_ParamLimits

0xb427,	// (0x0003aee4) list_double_heading_pane_g1

0xb438,	// (0x0003aef5) list_double_heading_pane_g2_ParamLimits

0xb438,	// (0x0003aef5) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0003f13e) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0003f13e) list_double_heading_pane_g

0xb444,	// (0x0003af01) list_double_heading_pane_t1_ParamLimits

0xb444,	// (0x0003af01) list_double_heading_pane_t1

0xb45a,	// (0x0003af17) list_double_heading_pane_t2_ParamLimits

0xb45a,	// (0x0003af17) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0003f143) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0003f143) list_double_heading_pane_t

0xb46c,	// (0x0003af29) list_double_graphic_heading_pane_g1_ParamLimits

0xb46c,	// (0x0003af29) list_double_graphic_heading_pane_g1

0xb427,	// (0x0003aee4) list_double_graphic_heading_pane_g2_ParamLimits

0xb427,	// (0x0003aee4) list_double_graphic_heading_pane_g2

0xb438,	// (0x0003aef5) list_double_graphic_heading_pane_g3_ParamLimits

0xb438,	// (0x0003aef5) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0003f148) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0003f148) list_double_graphic_heading_pane_g

0xb478,	// (0x0003af35) list_double_graphic_heading_pane_t1_ParamLimits

0xb478,	// (0x0003af35) list_double_graphic_heading_pane_t1

0xb48e,	// (0x0003af4b) list_double_graphic_heading_pane_t2_ParamLimits

0xb48e,	// (0x0003af4b) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0003f14f) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0003f14f) list_double_graphic_heading_pane_t

0xb2a9,	// (0x0003ad66) list_double_time_pane_g1_ParamLimits

0xb2a9,	// (0x0003ad66) list_double_time_pane_g1

0xb275,	// (0x0003ad32) list_double_time_pane_g2_ParamLimits

0xb275,	// (0x0003ad32) list_double_time_pane_g2

0x0001,

0xf63a,	// (0x0003f0f7) list_double_time_pane_g_ParamLimits

0xf63a,	// (0x0003f0f7) list_double_time_pane_g

0xb3ff,	// (0x0003aebc) list_double_time_pane_t1_ParamLimits

0xb3ff,	// (0x0003aebc) list_double_time_pane_t1

0xb4a0,	// (0x0003af5d) list_double_time_pane_t2_ParamLimits

0xb4a0,	// (0x0003af5d) list_double_time_pane_t2

0xb4b2,	// (0x0003af6f) list_double_time_pane_t3_ParamLimits

0xb4b2,	// (0x0003af6f) list_double_time_pane_t3

0xb4c4,	// (0x0003af81) list_double_time_pane_t4_ParamLimits

0xb4c4,	// (0x0003af81) list_double_time_pane_t4

0x0003,

0xf697,	// (0x0003f154) list_double_time_pane_t_ParamLimits

0xf697,	// (0x0003f154) list_double_time_pane_t

0xb4d6,	// (0x0003af93) list_setting_pane_g1_ParamLimits

0xb4d6,	// (0x0003af93) list_setting_pane_g1

0xb4e2,	// (0x0003af9f) list_setting_pane_g2_ParamLimits

0xb4e2,	// (0x0003af9f) list_setting_pane_g2

0x0001,

0xf6a0,	// (0x0003f15d) list_setting_pane_g_ParamLimits

0xf6a0,	// (0x0003f15d) list_setting_pane_g

0xb4ee,	// (0x0003afab) list_setting_pane_t1_ParamLimits

0xb4ee,	// (0x0003afab) list_setting_pane_t1

0xb508,	// (0x0003afc5) list_setting_pane_t2_ParamLimits

0xb508,	// (0x0003afc5) list_setting_pane_t2

0x0002,

0xf6a5,	// (0x0003f162) list_setting_pane_t_ParamLimits

0xf6a5,	// (0x0003f162) list_setting_pane_t

0xb547,	// (0x0003b004) set_value_pane_cp_ParamLimits

0xb547,	// (0x0003b004) set_value_pane_cp

0xb555,	// (0x0003b012) list_setting_number_pane_g1_ParamLimits

0xb555,	// (0x0003b012) list_setting_number_pane_g1

0xb561,	// (0x0003b01e) list_setting_number_pane_g2_ParamLimits

0xb561,	// (0x0003b01e) list_setting_number_pane_g2

0x0001,

0xf6ac,	// (0x0003f169) list_setting_number_pane_g_ParamLimits

0xf6ac,	// (0x0003f169) list_setting_number_pane_g

0xb56d,	// (0x0003b02a) list_setting_number_pane_t1_ParamLimits

0xb56d,	// (0x0003b02a) list_setting_number_pane_t1

0xb586,	// (0x0003b043) list_setting_number_pane_t2_ParamLimits

0xb586,	// (0x0003b043) list_setting_number_pane_t2

0xb5a0,	// (0x0003b05d) list_setting_number_pane_t3_ParamLimits

0xb5a0,	// (0x0003b05d) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x0003f16e) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x0003f16e) list_setting_number_pane_t

0xb547,	// (0x0003b004) set_value_pane_ParamLimits

0xb547,	// (0x0003b004) set_value_pane

0x30ae,	// (0x00032b6b) bg_set_opt_pane_ParamLimits

0x30ae,	// (0x00032b6b) bg_set_opt_pane

0x058b,	// (0x00030048) set_value_pane_t1

0x30cf,	// (0x00032b8c) slider_set_pane_cp3

0x30d8,	// (0x00032b95) volume_small_pane_cp

0x30e1,	// (0x00032b9e) list_form_gen_pane

0x30ea,	// (0x00032ba7) scroll_pane_cp8

0xb5e3,	// (0x0003b0a0) form_field_data_pane_ParamLimits

0xb5e3,	// (0x0003b0a0) form_field_data_pane

0xb5fe,	// (0x0003b0bb) form_field_data_wide_pane_ParamLimits

0xb5fe,	// (0x0003b0bb) form_field_data_wide_pane

0x05e6,	// (0x000300a3) form_field_popup_pane_ParamLimits

0x05e6,	// (0x000300a3) form_field_popup_pane

0xb622,	// (0x0003b0df) form_field_popup_wide_pane_ParamLimits

0xb622,	// (0x0003b0df) form_field_popup_wide_pane

0x0629,	// (0x000300e6) form_field_slider_pane_ParamLimits

0x0629,	// (0x000300e6) form_field_slider_pane

0x063c,	// (0x000300f9) form_field_slider_wide_pane_ParamLimits

0x063c,	// (0x000300f9) form_field_slider_wide_pane

0x30fb,	// (0x00032bb8) data_form_pane

0xb64d,	// (0x0003b10a) form_field_data_pane_t1

0x3107,	// (0x00032bc4) input_focus_pane

0x3115,	// (0x00032bd2) data_form_wide_pane

0x067f,	// (0x0003013c) form_field_data_wide_pane_t1

0x2e78,	// (0x00032935) input_focus_pane_cp6

0xb667,	// (0x0003b124) form_field_popup_pane_t1

0x3107,	// (0x00032bc4) input_focus_pane_cp7

0x3141,	// (0x00032bfe) list_form_pane

0x06c3,	// (0x00030180) form_field_popup_wide_pane_t1

0x3107,	// (0x00032bc4) input_focus_pane_cp8

0x314d,	// (0x00032c0a) list_form_wide_pane

0xb689,	// (0x0003b146) form_field_slider_pane_t1_ParamLimits

0xb689,	// (0x0003b146) form_field_slider_pane_t1

0xb6a1,	// (0x0003b15e) form_field_slider_pane_t2_ParamLimits

0xb6a1,	// (0x0003b15e) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x0003f17e) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x0003f17e) form_field_slider_pane_t

0x2551,	// (0x0003200e) input_focus_pane_cp9_ParamLimits

0x2551,	// (0x0003200e) input_focus_pane_cp9

0xb6b6,	// (0x0003b173) slider_cont_pane_ParamLimits

0xb6b6,	// (0x0003b173) slider_cont_pane

0x315c,	// (0x00032c19) form_field_slider_wide_pane_t1_ParamLimits

0x315c,	// (0x00032c19) form_field_slider_wide_pane_t1

0x0721,	// (0x000301de) form_field_slider_wide_pane_t2_ParamLimits

0x0721,	// (0x000301de) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x0003f183) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x0003f183) form_field_slider_wide_pane_t

0x2551,	// (0x0003200e) input_focus_pane_cp10_ParamLimits

0x2551,	// (0x0003200e) input_focus_pane_cp10

0xb6ca,	// (0x0003b187) slider_cont_pane_cp1_ParamLimits

0xb6ca,	// (0x0003b187) slider_cont_pane_cp1

0xb6de,	// (0x0003b19b) slider_form_pane_cp

0x316e,	// (0x00032c2b) input_focus_pane_g1

0x3176,	// (0x00032c33) input_focus_pane_g2

0x317e,	// (0x00032c3b) input_focus_pane_g3

0x3186,	// (0x00032c43) input_focus_pane_g4

0x318e,	// (0x00032c4b) input_focus_pane_g5

0x3196,	// (0x00032c53) input_focus_pane_g6

0x319e,	// (0x00032c5b) input_focus_pane_g7

0x31a6,	// (0x00032c63) input_focus_pane_g8

0x31ae,	// (0x00032c6b) input_focus_pane_g9

0x21eb,	// (0x00031ca8) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x0003f188) input_focus_pane_g

0x523e,	// (0x00034cfb) wait_border_pane_g3_copy1

0xb6e6,	// (0x0003b1a3) data_form_pane_t1

0x21eb,	// (0x00031ca8) wait_anim_pane_g1_copy1

0xbb2c,	// (0x0003b5e9) data_form_wide_pane_t1

0x0781,	// (0x0003023e) list_form_graphic_pane_cp_ParamLimits

0x0781,	// (0x0003023e) list_form_graphic_pane_cp

0x61c3,	// (0x00035c80) slider_form_pane_g1

0x61cc,	// (0x00035c89) slider_form_pane_g2

0x0006,

0xf9be,	// (0x0003f47b) slider_form_pane_g

0x0781,	// (0x0003023e) list_form_graphic_pane_ParamLimits

0x0781,	// (0x0003023e) list_form_graphic_pane

0x0793,	// (0x00030250) list_form_graphic_pane_g1

0x079b,	// (0x00030258) list_form_graphic_pane_t1_ParamLimits

0x079b,	// (0x00030258) list_form_graphic_pane_t1

0x22d5,	// (0x00031d92) list_highlight_pane_cp5_ParamLimits

0x22d5,	// (0x00031d92) list_highlight_pane_cp5

0xb700,	// (0x0003b1bd) find_pane_g1

0x31b6,	// (0x00032c73) input_find_pane

0xb709,	// (0x0003b1c6) input_find_pane_g1_ParamLimits

0xb709,	// (0x0003b1c6) input_find_pane_g1

0xb715,	// (0x0003b1d2) input_find_pane_t1_ParamLimits

0xb715,	// (0x0003b1d2) input_find_pane_t1

0xb72a,	// (0x0003b1e7) input_find_pane_t2_ParamLimits

0xb72a,	// (0x0003b1e7) input_find_pane_t2

0x0001,

0xf6e0,	// (0x0003f19d) input_find_pane_t_ParamLimits

0xf6e0,	// (0x0003f19d) input_find_pane_t

0x31bf,	// (0x00032c7c) input_focus_pane_cp5_ParamLimits

0x31bf,	// (0x00032c7c) input_focus_pane_cp5

0xc4dc,	// (0x0003bf99) bg_popup_window_pane_cp2_ParamLimits

0xc4dc,	// (0x0003bf99) bg_popup_window_pane_cp2

0xc4e9,	// (0x0003bfa6) listscroll_menu_pane_ParamLimits

0xc4e9,	// (0x0003bfa6) listscroll_menu_pane

0xc4f5,	// (0x0003bfb2) popup_submenu_window_ParamLimits

0xc4f5,	// (0x0003bfb2) popup_submenu_window

0x3222,	// (0x00032cdf) find_popup_pane_g1

0x322a,	// (0x00032ce7) input_popup_find_pane_cp

0x31bf,	// (0x00032c7c) input_focus_pane_cp4_ParamLimits

0x31bf,	// (0x00032c7c) input_focus_pane_cp4

0x3242,	// (0x00032cff) input_popup_find_pane_t1_ParamLimits

0x3242,	// (0x00032cff) input_popup_find_pane_t1

0x21f5,	// (0x00031cb2) bg_popup_sub_pane_cp

0x3270,	// (0x00032d2d) listscroll_popup_sub_pane

0x3278,	// (0x00032d35) list_submenu_pane_ParamLimits

0x3278,	// (0x00032d35) list_submenu_pane

0x3289,	// (0x00032d46) scroll_pane_cp4

0x3291,	// (0x00032d4e) list_single_popup_submenu_pane_ParamLimits

0x3291,	// (0x00032d4e) list_single_popup_submenu_pane

0x32a6,	// (0x00032d63) list_single_popup_submenu_pane_g1

0x32ae,	// (0x00032d6b) list_single_popup_submenu_pane_t1_ParamLimits

0x32ae,	// (0x00032d6b) list_single_popup_submenu_pane_t1

0x2551,	// (0x0003200e) bg_active_tab_pane_cp1_ParamLimits

0x2551,	// (0x0003200e) bg_active_tab_pane_cp1

0xc533,	// (0x0003bff0) tabs_2_active_pane_g1

0xc53b,	// (0x0003bff8) tabs_2_active_pane_t1

0x2551,	// (0x0003200e) bg_passive_tab_pane_cp1_ParamLimits

0x2551,	// (0x0003200e) bg_passive_tab_pane_cp1

0xc533,	// (0x0003bff0) tabs_2_passive_pane_g1

0xc53b,	// (0x0003bff8) tabs_2_passive_pane_t1

0x22d5,	// (0x00031d92) bg_active_tab_pane_cp4

0xc54d,	// (0x0003c00a) tabs_2_long_active_pane_t1

0x40eb,	// (0x00033ba8) bg_passive_tab_pane_cp4

0x0f00,	// (0x000309bd) list_single_midp_graphic_pane_g4_ParamLimits

0x22d5,	// (0x00031d92) bg_active_tab_pane_cp5

0xc560,	// (0x0003c01d) tabs_3_long_active_pane_t1

0x40eb,	// (0x00033ba8) bg_passive_tab_pane_cp5

0x0f00,	// (0x000309bd) list_single_midp_graphic_pane_g4

0x22d5,	// (0x00031d92) bg_popup_window_pane_cp13_ParamLimits

0x22d5,	// (0x00031d92) bg_popup_window_pane_cp13

0x3325,	// (0x00032de2) listscroll_popup_fast_pane_ParamLimits

0x3325,	// (0x00032de2) listscroll_popup_fast_pane

0x3334,	// (0x00032df1) grid_popup_fast_pane_ParamLimits

0x3334,	// (0x00032df1) grid_popup_fast_pane

0x3346,	// (0x00032e03) scroll_pane_cp9_ParamLimits

0x3346,	// (0x00032e03) scroll_pane_cp9

0x7ae8,	// (0x000375a5) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7ae8,	// (0x000375a5) list_single_graphic_hl_pane_t1_cp2

0x336a,	// (0x00032e27) input_focus_pane_cp20_ParamLimits

0x336a,	// (0x00032e27) input_focus_pane_cp20

0x3378,	// (0x00032e35) query_popup_data_pane_t1_ParamLimits

0x3378,	// (0x00032e35) query_popup_data_pane_t1

0x338b,	// (0x00032e48) query_popup_data_pane_t2_ParamLimits

0x338b,	// (0x00032e48) query_popup_data_pane_t2

0x33d1,	// (0x00032e8e) query_popup_data_pane_t3_ParamLimits

0x33d1,	// (0x00032e8e) query_popup_data_pane_t3

0x3412,	// (0x00032ecf) query_popup_data_pane_t4_ParamLimits

0x3412,	// (0x00032ecf) query_popup_data_pane_t4

0x344e,	// (0x00032f0b) query_popup_data_pane_t5_ParamLimits

0x344e,	// (0x00032f0b) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x0003f1a2) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x0003f1a2) query_popup_data_pane_t

0x316e,	// (0x00032c2b) bg_set_opt_pane_g1

0x3176,	// (0x00032c33) bg_set_opt_pane_g2

0x317e,	// (0x00032c3b) bg_set_opt_pane_g3

0x3186,	// (0x00032c43) bg_set_opt_pane_g4

0x318e,	// (0x00032c4b) bg_set_opt_pane_g5

0x3196,	// (0x00032c53) bg_set_opt_pane_g6

0x319e,	// (0x00032c5b) bg_set_opt_pane_g7

0x31a6,	// (0x00032c63) bg_set_opt_pane_g8

0x31ae,	// (0x00032c6b) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x0003f1ad) bg_set_opt_pane_g

0x0b1e,	// (0x000305db) control_top_pane_stacon_ParamLimits

0x0b1e,	// (0x000305db) control_top_pane_stacon

0x0b71,	// (0x0003062e) signal_pane_stacon_ParamLimits

0x0b71,	// (0x0003062e) signal_pane_stacon

0x39fa,	// (0x000334b7) stacon_top_pane_g1_ParamLimits

0x39fa,	// (0x000334b7) stacon_top_pane_g1

0x0b96,	// (0x00030653) title_pane_stacon_ParamLimits

0x0b96,	// (0x00030653) title_pane_stacon

0x0bc0,	// (0x0003067d) uni_indicator_pane_stacon_ParamLimits

0x0bc0,	// (0x0003067d) uni_indicator_pane_stacon

0x0bd8,	// (0x00030695) battery_pane_stacon_ParamLimits

0x0bd8,	// (0x00030695) battery_pane_stacon

0x0c1c,	// (0x000306d9) control_bottom_pane_stacon_ParamLimits

0x0c1c,	// (0x000306d9) control_bottom_pane_stacon

0x0c3f,	// (0x000306fc) navi_pane_stacon_ParamLimits

0x0c3f,	// (0x000306fc) navi_pane_stacon

0x3a1c,	// (0x000334d9) stacon_bottom_pane_g1_ParamLimits

0x3a1c,	// (0x000334d9) stacon_bottom_pane_g1

0x07ef,	// (0x000302ac) aid_levels_signal_lsc_ParamLimits

0x07ef,	// (0x000302ac) aid_levels_signal_lsc

0x0806,	// (0x000302c3) signal_pane_stacon_g1_ParamLimits

0x0806,	// (0x000302c3) signal_pane_stacon_g1

0x081a,	// (0x000302d7) signal_pane_stacon_g2_ParamLimits

0x081a,	// (0x000302d7) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x0003f1c0) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x0003f1c0) signal_pane_stacon_g

0x084f,	// (0x0003030c) title_pane_stacon_t1_ParamLimits

0x084f,	// (0x0003030c) title_pane_stacon_t1

0x3492,	// (0x00032f4f) uni_indicator_pane_stacon_g1

0x349c,	// (0x00032f59) uni_indicator_pane_stacon_g2

0x34a6,	// (0x00032f63) uni_indicator_pane_stacon_g3

0x34b0,	// (0x00032f6d) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x0003f1cc) uni_indicator_pane_stacon_g

0x0874,	// (0x00030331) control_top_pane_stacon_g1

0x087c,	// (0x00030339) control_top_pane_stacon_t1_ParamLimits

0x087c,	// (0x00030339) control_top_pane_stacon_t1

0x08b3,	// (0x00030370) aid_levels_battery_lsc_ParamLimits

0x08b3,	// (0x00030370) aid_levels_battery_lsc

0x08cb,	// (0x00030388) battery_pane_stacon_g1_ParamLimits

0x08cb,	// (0x00030388) battery_pane_stacon_g1

0x08de,	// (0x0003039b) battery_pane_stacon_g2_ParamLimits

0x08de,	// (0x0003039b) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x0003f1d5) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x0003f1d5) battery_pane_stacon_g

0x091c,	// (0x000303d9) navi_icon_pane_stacon

0x0930,	// (0x000303ed) navi_navi_pane_stacon

0x091c,	// (0x000303d9) navi_text_pane_stacon

0x0874,	// (0x00030331) control_bottom_pane_stacon_g1

0x0946,	// (0x00030403) control_bottom_pane_stacon_t1_ParamLimits

0x0946,	// (0x00030403) control_bottom_pane_stacon_t1

0xc572,	// (0x0003c02f) grid_app_pane_ParamLimits

0xc572,	// (0x0003c02f) grid_app_pane

0xc5aa,	// (0x0003c067) scroll_pane_cp15_ParamLimits

0xc5aa,	// (0x0003c067) scroll_pane_cp15

0xc5c7,	// (0x0003c084) cell_app_pane_ParamLimits

0xc5c7,	// (0x0003c084) cell_app_pane

0xc608,	// (0x0003c0c5) cell_app_pane_g1_ParamLimits

0xc608,	// (0x0003c0c5) cell_app_pane_g1

0x355d,	// (0x0003301a) cell_app_pane_g2_ParamLimits

0x355d,	// (0x0003301a) cell_app_pane_g2

0x0001,

0xf71d,	// (0x0003f1da) cell_app_pane_g_ParamLimits

0xf71d,	// (0x0003f1da) cell_app_pane_g

0x3569,	// (0x00033026) cell_app_pane_t1_ParamLimits

0x3569,	// (0x00033026) cell_app_pane_t1

0x357b,	// (0x00033038) grid_highlight_pane_ParamLimits

0x357b,	// (0x00033038) grid_highlight_pane

0x316e,	// (0x00032c2b) cell_highlight_pane_g1

0x3176,	// (0x00032c33) cell_highlight_pane_g2

0x317e,	// (0x00032c3b) cell_highlight_pane_g3

0x3186,	// (0x00032c43) cell_highlight_pane_g4

0x318e,	// (0x00032c4b) cell_highlight_pane_g5

0x3196,	// (0x00032c53) cell_highlight_pane_g6

0x319e,	// (0x00032c5b) cell_highlight_pane_g7

0x31a6,	// (0x00032c63) cell_highlight_pane_g8

0x31ae,	// (0x00032c6b) cell_highlight_pane_g9

0x21eb,	// (0x00031ca8) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x0003f188) cell_highlight_pane_g

0x358c,	// (0x00033049) bg_scroll_pane

0x0990,	// (0x0003044d) scroll_handle_pane

0x35d3,	// (0x00033090) scroll_bg_pane_g1

0x35e8,	// (0x000330a5) scroll_bg_pane_g2

0x3600,	// (0x000330bd) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x0003f1df) scroll_bg_pane_g

0x3615,	// (0x000330d2) scroll_handle_focus_pane_ParamLimits

0x3615,	// (0x000330d2) scroll_handle_focus_pane

0x35d3,	// (0x00033090) scroll_handle_pane_g1

0x3622,	// (0x000330df) scroll_handle_pane_g2

0x3600,	// (0x000330bd) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x0003f1e6) scroll_handle_pane_g

0x31bf,	// (0x00032c7c) bg_popup_sub_pane_cp21_ParamLimits

0x31bf,	// (0x00032c7c) bg_popup_sub_pane_cp21

0x3636,	// (0x000330f3) popup_fep_japan_predictive_window_t1_ParamLimits

0x3636,	// (0x000330f3) popup_fep_japan_predictive_window_t1

0x364d,	// (0x0003310a) popup_fep_japan_predictive_window_t2_ParamLimits

0x364d,	// (0x0003310a) popup_fep_japan_predictive_window_t2

0x3680,	// (0x0003313d) popup_fep_japan_predictive_window_t3_ParamLimits

0x3680,	// (0x0003313d) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x0003f1ed) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x0003f1ed) popup_fep_japan_predictive_window_t

0x21f5,	// (0x00031cb2) bg_popup_sub_pane_cp23

0x36b7,	// (0x00033174) listscroll_japin_cand_pane

0x36bf,	// (0x0003317c) popup_fep_japan_candidate_window_t1

0x36cd,	// (0x0003318a) candidate_pane_ParamLimits

0x36cd,	// (0x0003318a) candidate_pane

0x36df,	// (0x0003319c) scroll_pane_cp30

0x36e9,	// (0x000331a6) list_single_popup_jap_candidate_pane_ParamLimits

0x36e9,	// (0x000331a6) list_single_popup_jap_candidate_pane

0x21f5,	// (0x00031cb2) list_highlight_pane_cp30

0x36fd,	// (0x000331ba) list_single_popup_jap_candidate_pane_t1

0xc62c,	// (0x0003c0e9) level_1_signal

0xc63e,	// (0x0003c0fb) level_2_signal

0xc651,	// (0x0003c10e) level_3_signal

0xc664,	// (0x0003c121) level_4_signal

0xc677,	// (0x0003c134) level_5_signal

0xc68a,	// (0x0003c147) level_6_signal

0xc69d,	// (0x0003c15a) level_7_signal

0xc62c,	// (0x0003c0e9) level_1_battery

0xc63e,	// (0x0003c0fb) level_2_battery

0xc651,	// (0x0003c10e) level_3_battery

0xc664,	// (0x0003c121) level_4_battery

0xc677,	// (0x0003c134) level_5_battery

0xc68a,	// (0x0003c147) level_6_battery

0xc69d,	// (0x0003c15a) level_7_battery

0x377f,	// (0x0003323c) list_menu_pane_ParamLimits

0x377f,	// (0x0003323c) list_menu_pane

0x3790,	// (0x0003324d) scroll_pane_cp25_ParamLimits

0x3790,	// (0x0003324d) scroll_pane_cp25

0x37a9,	// (0x00033266) list_double2_graphic_pane_cp2_ParamLimits

0x37a9,	// (0x00033266) list_double2_graphic_pane_cp2

0x37a9,	// (0x00033266) list_double2_large_graphic_pane_cp2_ParamLimits

0x37a9,	// (0x00033266) list_double2_large_graphic_pane_cp2

0x37a9,	// (0x00033266) list_double2_pane_cp2_ParamLimits

0x37a9,	// (0x00033266) list_double2_pane_cp2

0x37a9,	// (0x00033266) list_double_graphic_pane_cp2_ParamLimits

0x37a9,	// (0x00033266) list_double_graphic_pane_cp2

0x37a9,	// (0x00033266) list_double_large_graphic_pane_cp2_ParamLimits

0x37a9,	// (0x00033266) list_double_large_graphic_pane_cp2

0x37a9,	// (0x00033266) list_double_number_pane_cp2_ParamLimits

0x37a9,	// (0x00033266) list_double_number_pane_cp2

0x37a9,	// (0x00033266) list_double_pane_cp2_ParamLimits

0x37a9,	// (0x00033266) list_double_pane_cp2

0xc6b0,	// (0x0003c16d) list_single_2graphic_pane_cp2_ParamLimits

0xc6b0,	// (0x0003c16d) list_single_2graphic_pane_cp2

0xc6b0,	// (0x0003c16d) list_single_graphic_heading_pane_cp2_ParamLimits

0xc6b0,	// (0x0003c16d) list_single_graphic_heading_pane_cp2

0xc6b0,	// (0x0003c16d) list_single_graphic_pane_cp2_ParamLimits

0xc6b0,	// (0x0003c16d) list_single_graphic_pane_cp2

0xc6b0,	// (0x0003c16d) list_single_heading_pane_cp2_ParamLimits

0xc6b0,	// (0x0003c16d) list_single_heading_pane_cp2

0x37ec,	// (0x000332a9) list_single_large_graphic_pane_cp2_ParamLimits

0x37ec,	// (0x000332a9) list_single_large_graphic_pane_cp2

0xc6b0,	// (0x0003c16d) list_single_number_heading_pane_cp2_ParamLimits

0xc6b0,	// (0x0003c16d) list_single_number_heading_pane_cp2

0xc6b0,	// (0x0003c16d) list_single_number_pane_cp2_ParamLimits

0xc6b0,	// (0x0003c16d) list_single_number_pane_cp2

0xc6b0,	// (0x0003c16d) list_single_pane_cp2_ParamLimits

0xc6b0,	// (0x0003c16d) list_single_pane_cp2

0x3841,	// (0x000332fe) bg_popup_sub_pane_cp22

0x0a42,	// (0x000304ff) popup_side_volume_key_window_g1

0x0a6c,	// (0x00030529) popup_side_volume_key_window_t1

0x0a8a,	// (0x00030547) volume_small_pane_cp1

0x2551,	// (0x0003200e) bg_popup_sub_pane_cp24_ParamLimits

0x2551,	// (0x0003200e) bg_popup_sub_pane_cp24

0x3857,	// (0x00033314) fep_china_uni_candidate_pane_ParamLimits

0x3857,	// (0x00033314) fep_china_uni_candidate_pane

0x386b,	// (0x00033328) fep_china_uni_entry_pane

0x387b,	// (0x00033338) popup_fep_china_uni_window_g1

0x3897,	// (0x00033354) fep_china_uni_entry_pane_g1

0x38a1,	// (0x0003335e) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x0003f21a) fep_china_uni_entry_pane_g

0x38ab,	// (0x00033368) fep_entry_item_pane

0x38b5,	// (0x00033372) fep_candidate_item_pane

0x38bd,	// (0x0003337a) fep_china_uni_candidate_pane_g1

0x38c7,	// (0x00033384) fep_china_uni_candidate_pane_g2

0x38cf,	// (0x0003338c) fep_china_uni_candidate_pane_g3

0x38d7,	// (0x00033394) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x0003f21f) fep_china_uni_candidate_pane_g

0x21eb,	// (0x00031ca8) fep_entry_item_pane_g1

0x38e1,	// (0x0003339e) fep_entry_item_pane_t1_ParamLimits

0x38e1,	// (0x0003339e) fep_entry_item_pane_t1

0x38f7,	// (0x000333b4) fep_candidate_item_pane_t1_ParamLimits

0x38f7,	// (0x000333b4) fep_candidate_item_pane_t1

0x390c,	// (0x000333c9) fep_candidate_item_pane_t2_ParamLimits

0x390c,	// (0x000333c9) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x0003f228) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x0003f228) fep_candidate_item_pane_t

0x22d5,	// (0x00031d92) list_highlight_pane_cp31_ParamLimits

0x22d5,	// (0x00031d92) list_highlight_pane_cp31

0x391e,	// (0x000333db) level_1_signal_lsc

0x3927,	// (0x000333e4) level_2_signal_lsc

0x3930,	// (0x000333ed) level_3_signal_lsc

0x3939,	// (0x000333f6) level_4_signal_lsc

0x3942,	// (0x000333ff) level_5_signal_lsc

0x394b,	// (0x00033408) level_6_signal_lsc

0x3954,	// (0x00033411) level_7_signal_lsc

0x3954,	// (0x00033411) level_1_battery_lsc

0x395d,	// (0x0003341a) level_2_battery_lsc

0x3966,	// (0x00033423) level_3_battery_lsc

0x396f,	// (0x0003342c) level_4_battery_lsc

0x3978,	// (0x00033435) level_5_battery_lsc

0x3981,	// (0x0003343e) level_6_battery_lsc

0x391e,	// (0x000333db) level_7_battery_lsc

0x398a,	// (0x00033447) scroll_handle_focus_pane_g1

0x3993,	// (0x00033450) scroll_handle_focus_pane_g2

0x399c,	// (0x00033459) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x0003f22d) scroll_handle_focus_pane_g

0xb748,	// (0x0003b205) list_single_2graphic_pane_g1_ParamLimits

0xb748,	// (0x0003b205) list_single_2graphic_pane_g1

0xb23e,	// (0x0003acfb) list_single_2graphic_pane_g2_ParamLimits

0xb23e,	// (0x0003acfb) list_single_2graphic_pane_g2

0x0f33,	// (0x000309f0) list_single_2graphic_pane_g3_ParamLimits

0x0f33,	// (0x000309f0) list_single_2graphic_pane_g3

0xb754,	// (0x0003b211) list_single_2graphic_pane_g4_ParamLimits

0xb754,	// (0x0003b211) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x0003f234) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x0003f234) list_single_2graphic_pane_g

0xb760,	// (0x0003b21d) list_single_2graphic_pane_t1_ParamLimits

0xb760,	// (0x0003b21d) list_single_2graphic_pane_t1

0xb78e,	// (0x0003b24b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb78e,	// (0x0003b24b) list_double2_graphic_large_graphic_pane_g1

0xb2a9,	// (0x0003ad66) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb2a9,	// (0x0003ad66) list_double2_graphic_large_graphic_pane_g2

0xb275,	// (0x0003ad32) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb275,	// (0x0003ad32) list_double2_graphic_large_graphic_pane_g3

0xb7a0,	// (0x0003b25d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb7a0,	// (0x0003b25d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x0003f23d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x0003f23d) list_double2_graphic_large_graphic_pane_g

0xb7ac,	// (0x0003b269) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb7ac,	// (0x0003b269) list_double2_graphic_large_graphic_pane_t1

0xb7c2,	// (0x0003b27f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb7c2,	// (0x0003b27f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x0003f246) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x0003f246) list_double2_graphic_large_graphic_pane_t

0x3ade,	// (0x0003359b) popup_fast_swap_window_ParamLimits

0x3ade,	// (0x0003359b) popup_fast_swap_window

0x3afc,	// (0x000335b9) popup_side_volume_key_window

0x3b1a,	// (0x000335d7) stacon_top_pane

0x3b24,	// (0x000335e1) status_pane_ParamLimits

0x3b24,	// (0x000335e1) status_pane

0x3b1a,	// (0x000335d7) status_small_pane

0x21f5,	// (0x00031cb2) control_pane

0x21f5,	// (0x00031cb2) stacon_bottom_pane

0x30ea,	// (0x00032ba7) scroll_pane_cp121

0x30e1,	// (0x00032b9e) set_content_pane

0xc713,	// (0x0003c1d0) bg_active_tab_pane_g1_cp1

0x39ae,	// (0x0003346b) bg_active_tab_pane_g2_cp1

0xc71c,	// (0x0003c1d9) bg_active_tab_pane_g3_cp1

0xc713,	// (0x0003c1d0) bg_passive_tab_pane_g1_cp1

0x39ae,	// (0x0003346b) bg_passive_tab_pane_g2_cp1

0xc71c,	// (0x0003c1d9) bg_passive_tab_pane_g3_cp1

0xc725,	// (0x0003c1e2) bg_active_tab_pane_g1_cp2

0x39ae,	// (0x0003346b) bg_active_tab_pane_g2_cp2

0xc72e,	// (0x0003c1eb) bg_active_tab_pane_g3_cp2

0xc725,	// (0x0003c1e2) bg_passive_tab_pane_g1_cp2

0x39ae,	// (0x0003346b) bg_passive_tab_pane_g2_cp2

0xc72e,	// (0x0003c1eb) bg_passive_tab_pane_g3_cp2

0xc737,	// (0x0003c1f4) bg_active_tab_pane_g1_cp3

0x39ae,	// (0x0003346b) bg_active_tab_pane_g2_cp3

0xc740,	// (0x0003c1fd) bg_active_tab_pane_g3_cp3

0xc737,	// (0x0003c1f4) bg_passive_tab_pane_g1_cp3

0x39ae,	// (0x0003346b) bg_passive_tab_pane_g2_cp3

0xc740,	// (0x0003c1fd) bg_passive_tab_pane_g3_cp3

0xc749,	// (0x0003c206) bg_active_tab_pane_g1_cp4

0x39ae,	// (0x0003346b) bg_active_tab_pane_g2_cp4

0xc752,	// (0x0003c20f) bg_active_tab_pane_g3_cp4

0xc749,	// (0x0003c206) bg_passive_tab_pane_g1_cp4

0x39ae,	// (0x0003346b) bg_passive_tab_pane_g2_cp4

0xc752,	// (0x0003c20f) bg_passive_tab_pane_g3_cp4

0x3a38,	// (0x000334f5) bg_active_tab_pane_g1_cp5

0x39ae,	// (0x0003346b) bg_active_tab_pane_g2_cp5

0x3a41,	// (0x000334fe) bg_active_tab_pane_g3_cp5

0x3a38,	// (0x000334f5) bg_passive_tab_pane_g1_cp5

0x39ae,	// (0x0003346b) bg_passive_tab_pane_g2_cp5

0x3a41,	// (0x000334fe) bg_passive_tab_pane_g3_cp5

0x3291,	// (0x00032d4e) list_set_graphic_pane_ParamLimits

0x3291,	// (0x00032d4e) list_set_graphic_pane

0x21f5,	// (0x00031cb2) bg_set_opt_pane_cp4

0xc75b,	// (0x0003c218) list_set_graphic_pane_g1_ParamLimits

0xc75b,	// (0x0003c218) list_set_graphic_pane_g1

0xc767,	// (0x0003c224) list_set_graphic_pane_g2_ParamLimits

0xc767,	// (0x0003c224) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x0003f24b) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x0003f24b) list_set_graphic_pane_g

0x0009,

0xfaf4,	// (0x0003f5b1) volume_small_pane_cp_g

0x3a8f,	// (0x0003354c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3a8f,	// (0x0003354c) list_double2_large_graphic_pane_g1_cp2

0x3a9d,	// (0x0003355a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3a9d,	// (0x0003355a) list_double2_large_graphic_pane_g2_cp2

0x3aae,	// (0x0003356b) list_double2_large_graphic_pane_g3_cp2

0x3ab6,	// (0x00033573) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3ab6,	// (0x00033573) list_double2_large_graphic_pane_t1_cp2

0x3acc,	// (0x00033589) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3acc,	// (0x00033589) list_double2_large_graphic_pane_t2_cp2

0x5d28,	// (0x000357e5) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5d28,	// (0x000357e5) list_double_large_graphic_pane_g1_cp2

0x5d3b,	// (0x000357f8) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5d3b,	// (0x000357f8) list_double_large_graphic_pane_g2_cp2

0x3c42,	// (0x000336ff) list_double_large_graphic_pane_g3_cp2

0x5d4c,	// (0x00035809) list_double_large_graphic_pane_g4_cp

0x5d54,	// (0x00035811) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5d54,	// (0x00035811) list_double_large_graphic_pane_t1_cp2

0x5d6b,	// (0x00035828) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5d6b,	// (0x00035828) list_double_large_graphic_pane_t2_cp2

0x3b32,	// (0x000335ef) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3b32,	// (0x000335ef) list_double2_graphic_pane_g1_cp2

0x3b40,	// (0x000335fd) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3b40,	// (0x000335fd) list_double2_graphic_pane_g2_cp2

0x3b51,	// (0x0003360e) list_double2_graphic_pane_g3_cp2

0x3b5b,	// (0x00033618) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3b5b,	// (0x00033618) list_double2_graphic_pane_t1_cp2

0x3b71,	// (0x0003362e) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3b71,	// (0x0003362e) list_double2_graphic_pane_t2_cp2

0x3b83,	// (0x00033640) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3b83,	// (0x00033640) list_single_number_heading_pane_g1_cp2

0x3b8f,	// (0x0003364c) list_single_number_heading_pane_g2_cp2

0x3b97,	// (0x00033654) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3b97,	// (0x00033654) list_single_number_heading_pane_t1_cp2

0x3bad,	// (0x0003366a) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3bad,	// (0x0003366a) list_single_number_heading_pane_t2_cp2

0x3bc1,	// (0x0003367e) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3bc1,	// (0x0003367e) list_single_number_heading_pane_t3_cp2

0x3b83,	// (0x00033640) list_single_heading_pane_g1_cp2_ParamLimits

0x3b83,	// (0x00033640) list_single_heading_pane_g1_cp2

0x3b8f,	// (0x0003364c) list_single_heading_pane_g2_cp2

0x3b97,	// (0x00033654) list_single_heading_pane_t1_cp2_ParamLimits

0x3b97,	// (0x00033654) list_single_heading_pane_t1_cp2

0x5b22,	// (0x000355df) list_single_heading_pane_t2_cp2_ParamLimits

0x5b22,	// (0x000355df) list_single_heading_pane_t2_cp2

0x5a64,	// (0x00035521) list_double_graphic_pane_g1_cp2_ParamLimits

0x5a64,	// (0x00035521) list_double_graphic_pane_g1_cp2

0x5a70,	// (0x0003552d) list_double_graphic_pane_g2_cp2_ParamLimits

0x5a70,	// (0x0003552d) list_double_graphic_pane_g2_cp2

0x5a7f,	// (0x0003553c) list_double_graphic_pane_g3_cp2

0x5a87,	// (0x00035544) list_double_graphic_pane_t1_cp2_ParamLimits

0x5a87,	// (0x00035544) list_double_graphic_pane_t1_cp2

0x5a9d,	// (0x0003555a) list_double_graphic_pane_t2_cp2_ParamLimits

0x5a9d,	// (0x0003555a) list_double_graphic_pane_t2_cp2

0x3c36,	// (0x000336f3) list_double_number_pane_g1_cp2_ParamLimits

0x3c36,	// (0x000336f3) list_double_number_pane_g1_cp2

0x3c42,	// (0x000336ff) list_double_number_pane_g2_cp2

0x5a28,	// (0x000354e5) list_double_number_pane_t1_cp2_ParamLimits

0x5a28,	// (0x000354e5) list_double_number_pane_t1_cp2

0x5a3c,	// (0x000354f9) list_double_number_pane_t2_cp2_ParamLimits

0x5a3c,	// (0x000354f9) list_double_number_pane_t2_cp2

0x5a52,	// (0x0003550f) list_double_number_pane_t3_cp2_ParamLimits

0x5a52,	// (0x0003550f) list_double_number_pane_t3_cp2

0x5911,	// (0x000353ce) list_single_graphic_pane_g1_cp2_ParamLimits

0x5911,	// (0x000353ce) list_single_graphic_pane_g1_cp2

0x3c9c,	// (0x00033759) list_single_graphic_pane_g2_cp2_ParamLimits

0x3c9c,	// (0x00033759) list_single_graphic_pane_g2_cp2

0x3ca8,	// (0x00033765) list_single_graphic_pane_g3_cp2

0x58e7,	// (0x000353a4) list_single_graphic_pane_t1_cp2_ParamLimits

0x58e7,	// (0x000353a4) list_single_graphic_pane_t1_cp2

0x3c9c,	// (0x00033759) list_single_number_pane_g1_cp2_ParamLimits

0x3c9c,	// (0x00033759) list_single_number_pane_g1_cp2

0x3ca8,	// (0x00033765) list_single_number_pane_g2_cp2

0x58e7,	// (0x000353a4) list_single_number_pane_t1_cp2_ParamLimits

0x58e7,	// (0x000353a4) list_single_number_pane_t1_cp2

0x58fd,	// (0x000353ba) list_single_number_pane_t2_cp2_ParamLimits

0x58fd,	// (0x000353ba) list_single_number_pane_t2_cp2

0x3a9d,	// (0x0003355a) list_double2_pane_g1_cp2_ParamLimits

0x3a9d,	// (0x0003355a) list_double2_pane_g1_cp2

0x3aae,	// (0x0003356b) list_double2_pane_g2_cp2

0x3c0e,	// (0x000336cb) list_double2_pane_t1_cp2_ParamLimits

0x3c0e,	// (0x000336cb) list_double2_pane_t1_cp2

0x3c24,	// (0x000336e1) list_double2_pane_t2_cp2_ParamLimits

0x3c24,	// (0x000336e1) list_double2_pane_t2_cp2

0x3c36,	// (0x000336f3) list_double_pane_g1_cp2_ParamLimits

0x3c36,	// (0x000336f3) list_double_pane_g1_cp2

0x3c42,	// (0x000336ff) list_double_pane_g2_cp2

0x3c4a,	// (0x00033707) list_double_pane_t1_cp2_ParamLimits

0x3c4a,	// (0x00033707) list_double_pane_t1_cp2

0x3c60,	// (0x0003371d) list_double_pane_t2_cp2_ParamLimits

0x3c60,	// (0x0003371d) list_double_pane_t2_cp2

0x3c8c,	// (0x00033749) list_single_pane_cp2_g3

0x3c9c,	// (0x00033759) list_single_pane_g1_cp2_ParamLimits

0x3c9c,	// (0x00033759) list_single_pane_g1_cp2

0x3ca8,	// (0x00033765) list_single_pane_g2_cp2

0x3cb0,	// (0x0003376d) list_single_pane_t1_cp2_ParamLimits

0x3cb0,	// (0x0003376d) list_single_pane_t1_cp2

0x3cc8,	// (0x00033785) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3cc8,	// (0x00033785) list_single_large_graphic_pane_g1_cp2

0x3cd6,	// (0x00033793) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3cd6,	// (0x00033793) list_single_large_graphic_pane_g2_cp2

0x3ce2,	// (0x0003379f) list_single_large_graphic_pane_g3_cp2

0x3cea,	// (0x000337a7) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3cea,	// (0x000337a7) list_single_large_graphic_pane_g4_cp1

0x3d04,	// (0x000337c1) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3d04,	// (0x000337c1) list_single_large_graphic_pane_t1_cp2

0x58b1,	// (0x0003536e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x58b1,	// (0x0003536e) list_single_graphic_heading_pane_g1_cp2

0x587e,	// (0x0003533b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x587e,	// (0x0003533b) list_single_graphic_heading_pane_g4_cp2

0x3ca8,	// (0x00033765) list_single_graphic_heading_pane_g5_cp2

0x58bd,	// (0x0003537a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x58bd,	// (0x0003537a) list_single_graphic_heading_pane_t1_cp2

0x58d3,	// (0x00035390) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x58d3,	// (0x00035390) list_single_graphic_heading_pane_t2_cp2

0x5872,	// (0x0003532f) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5872,	// (0x0003532f) list_single_2graphic_pane_g1_cp2

0x587e,	// (0x0003533b) list_single_2graphic_pane_g2_cp2_ParamLimits

0x587e,	// (0x0003533b) list_single_2graphic_pane_g2_cp2

0x3ca8,	// (0x00033765) list_single_2graphic_pane_g3_cp2

0x588f,	// (0x0003534c) list_single_2graphic_pane_g4_cp2_ParamLimits

0x588f,	// (0x0003534c) list_single_2graphic_pane_g4_cp2

0x589b,	// (0x00035358) list_single_2graphic_pane_t1_cp2_ParamLimits

0x589b,	// (0x00035358) list_single_2graphic_pane_t1_cp2

0x21eb,	// (0x00031ca8) list_highlight_pane_g10_cp1

0x544a,	// (0x00034f07) list_highlight_pane_g1_cp1

0x5452,	// (0x00034f0f) list_highlight_pane_g2_cp1

0x545a,	// (0x00034f17) list_highlight_pane_g3_cp1

0x5462,	// (0x00034f1f) list_highlight_pane_g4_cp1

0x546a,	// (0x00034f27) list_highlight_pane_g5_cp1

0x5472,	// (0x00034f2f) list_highlight_pane_g6_cp1

0x547a,	// (0x00034f37) list_highlight_pane_g7_cp1

0x5482,	// (0x00034f3f) list_highlight_pane_g8_cp1

0x548a,	// (0x00034f47) list_highlight_pane_g9_cp1

0xd45d,	// (0x0003cf1a) form_field_slider_pane_t3

0xd46b,	// (0x0003cf28) form_field_slider_pane_t4

0x5386,	// (0x00034e43) slider_form_pane_ParamLimits

0x5386,	// (0x00034e43) slider_form_pane

0x21f5,	// (0x00031cb2) control_abbreviations

0x21f5,	// (0x00031cb2) control_conventions

0x21f5,	// (0x00031cb2) control_definitions

0x21f5,	// (0x00031cb2) format_table_attribute

0x5b78,	// (0x00035635) bg_popup_preview_window_pane_g9

0x21f5,	// (0x00031cb2) format_table_data2

0x21f5,	// (0x00031cb2) format_table_data3

0x21f5,	// (0x00031cb2) format_table_data_example

0x0008,

0x21f5,	// (0x00031cb2) intro_purpose

0xf91e,	// (0x0003f3db) bg_popup_preview_window_pane_g

0x21f5,	// (0x00031cb2) texts_category

0x21f5,	// (0x00031cb2) texts_graphics

0x3d1a,	// (0x000337d7) text_digital

0x3d29,	// (0x000337e6) text_primary

0x3d38,	// (0x000337f5) text_primary_small

0x3d47,	// (0x00033804) text_secondary

0x3d56,	// (0x00033813) text_title

0x6314,	// (0x00035dd1) bg_passive_tab_pane_g1_cp3_srt

0x39ae,	// (0x0003346b) bg_passive_tab_pane_g2_cp3_srt

0x631d,	// (0x00035dda) bg_passive_tab_pane_g3_cp3_srt

0x2551,	// (0x0003200e) bg_active_tab_pane_cp3_srt_ParamLimits

0x2551,	// (0x0003200e) bg_active_tab_pane_cp3_srt

0x6326,	// (0x00035de3) tabs_4_active_pane_srt_g1

0xd898,	// (0x0003d355) tabs_4_active_pane_srt_t1_ParamLimits

0xd898,	// (0x0003d355) tabs_4_active_pane_srt_t1

0x6314,	// (0x00035dd1) bg_active_tab_pane_g1_cp3_copy1

0x39ae,	// (0x0003346b) bg_active_tab_pane_g2_cp3_copy1

0x631d,	// (0x00035dda) bg_active_tab_pane_g3_cp3_copy1

0x22d5,	// (0x00031d92) tabs_2_long_active_pane_srt_ParamLimits

0x22d5,	// (0x00031d92) tabs_2_long_active_pane_srt

0x22d5,	// (0x00031d92) tabs_2_long_passive_pane_srt_ParamLimits

0x22d5,	// (0x00031d92) tabs_2_long_passive_pane_srt

0x40eb,	// (0x00033ba8) bg_passive_tab_pane_cp4_srt_ParamLimits

0x40eb,	// (0x00033ba8) bg_passive_tab_pane_cp4_srt

0x5fc8,	// (0x00035a85) bg_passive_tab_pane_g1_cp4_srt

0x39ae,	// (0x0003346b) bg_passive_tab_pane_g2_cp4_srt

0x5fd1,	// (0x00035a8e) bg_passive_tab_pane_g3_cp4_srt

0x22d5,	// (0x00031d92) bg_active_tab_pane_cp4_srt_ParamLimits

0x22d5,	// (0x00031d92) bg_active_tab_pane_cp4_srt

0xd666,	// (0x0003d123) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd666,	// (0x0003d123) tabs_2_long_active_pane_srt_t1

0x5fc8,	// (0x00035a85) bg_active_tab_pane_g1_cp4_srt

0x39ae,	// (0x0003346b) bg_active_tab_pane_g2_cp4_srt

0x5fd1,	// (0x00035a8e) bg_active_tab_pane_g3_cp4_srt

0x2551,	// (0x0003200e) tabs_3_long_active_pane_srt_ParamLimits

0x2551,	// (0x0003200e) tabs_3_long_active_pane_srt

0x2551,	// (0x0003200e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2551,	// (0x0003200e) tabs_3_long_passive_pane_cp_srt

0x2551,	// (0x0003200e) tabs_3_long_passive_pane_srt_ParamLimits

0x2551,	// (0x0003200e) tabs_3_long_passive_pane_srt

0x40eb,	// (0x00033ba8) bg_passive_tab_pane_cp5_srt_ParamLimits

0x40eb,	// (0x00033ba8) bg_passive_tab_pane_cp5_srt

0x3a38,	// (0x000334f5) bg_passive_tab_pane_g1_cp5_srt

0x39ae,	// (0x0003346b) bg_passive_tab_pane_g2_cp5_srt

0x3a41,	// (0x000334fe) bg_passive_tab_pane_g3_cp5_srt

0x22d5,	// (0x00031d92) bg_active_tab_pane_cp5_srt_ParamLimits

0x22d5,	// (0x00031d92) bg_active_tab_pane_cp5_srt

0xd650,	// (0x0003d10d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd650,	// (0x0003d10d) tabs_3_long_active_pane_srt_t1

0x3a38,	// (0x000334f5) bg_active_tab_pane_g1_cp5_srt

0x39ae,	// (0x0003346b) bg_active_tab_pane_g2_cp5_srt

0x3a41,	// (0x000334fe) bg_active_tab_pane_g3_cp5_srt

0x5fa8,	// (0x00035a65) navi_text_pane_srt_t1

0x5fa0,	// (0x00035a5d) navi_icon_pane_srt_g1

0x3f2d,	// (0x000339ea) midp_editing_number_pane_srt

0x3d65,	// (0x00033822) midp_ticker_pane_srt

0x3f35,	// (0x000339f2) midp_ticker_pane_srt_g1

0x3f3d,	// (0x000339fa) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x0003f26a) midp_ticker_pane_srt_g

0x3f45,	// (0x00033a02) midp_ticker_pane_srt_t1

0x5f91,	// (0x00035a4e) midp_editing_number_pane_t1_copy1

0xc78b,	// (0x0003c248) listscroll_midp_pane

0xc78b,	// (0x0003c248) midp_form_pane

0x3ddb,	// (0x00033898) midp_info_popup_window_ParamLimits

0x3ddb,	// (0x00033898) midp_info_popup_window

0x31bf,	// (0x00032c7c) bg_popup_sub_pane_cp50_ParamLimits

0x31bf,	// (0x00032c7c) bg_popup_sub_pane_cp50

0x50b1,	// (0x00034b6e) listscroll_midp_info_pane_ParamLimits

0x50b1,	// (0x00034b6e) listscroll_midp_info_pane

0x5099,	// (0x00034b56) listscroll_form_midp_pane_ParamLimits

0x5099,	// (0x00034b56) listscroll_form_midp_pane

0x50a5,	// (0x00034b62) scroll_bar_cp050

0xd451,	// (0x0003cf0e) list_midp_pane

0x6d2b,	// (0x000367e8) signal_pane_g2_cp

0x4fb3,	// (0x00034a70) listscroll_midp_info_pane_t1_ParamLimits

0x4fb3,	// (0x00034a70) listscroll_midp_info_pane_t1

0x4fcb,	// (0x00034a88) listscroll_midp_info_pane_t2_ParamLimits

0x4fcb,	// (0x00034a88) listscroll_midp_info_pane_t2

0x5009,	// (0x00034ac6) listscroll_midp_info_pane_t3_ParamLimits

0x5009,	// (0x00034ac6) listscroll_midp_info_pane_t3

0x5043,	// (0x00034b00) listscroll_midp_info_pane_t4_ParamLimits

0x5043,	// (0x00034b00) listscroll_midp_info_pane_t4

0x0003,

0xf859,	// (0x0003f316) listscroll_midp_info_pane_t_ParamLimits

0xf859,	// (0x0003f316) listscroll_midp_info_pane_t

0x3289,	// (0x00032d46) scroll_pane_cp21

0x4f4d,	// (0x00034a0a) form_midp_field_choice_group_pane

0x4f56,	// (0x00034a13) form_midp_field_text_pane

0x4f99,	// (0x00034a56) form_midp_field_time_pane

0x4fa1,	// (0x00034a5e) form_midp_gauge_slider_pane

0x4faa,	// (0x00034a67) form_midp_gauge_wait_pane

0x21f5,	// (0x00031cb2) form_midp_image_pane

0xb996,	// (0x0003b453) list_single_midp_pane_ParamLimits

0xb996,	// (0x0003b453) list_single_midp_pane

0xd429,	// (0x0003cee6) form_midp_field_text_pane_t1

0x4d25,	// (0x000347e2) input_focus_pane_cp050

0x4f3c,	// (0x000349f9) list_midp_form_text_pane

0x4ee0,	// (0x0003499d) form_midp_field_choice_group_pane_t1

0x4eee,	// (0x000349ab) input_focus_pane_cp051

0x4f02,	// (0x000349bf) list_midp_choice_pane

0x21f5,	// (0x00031cb2) status_idle_pane

0x4ec4,	// (0x00034981) form_midp_field_time_pane_t1

0x21eb,	// (0x00031ca8) wait_anim_pane_g2_copy1

0x4ed2,	// (0x0003498f) form_midp_field_time_pane_t2

0x0001,

0x3e8b,	// (0x00033948) aid_navinavi_width_2_pane

0xf854,	// (0x0003f311) form_midp_field_time_pane_t

0x21f5,	// (0x00031cb2) input_focus_pane_cp052

0x21f5,	// (0x00031cb2) bg_input_focus_pane_cp040

0x4e84,	// (0x00034941) form_midp_gauge_slider_pane_t1

0x4e92,	// (0x0003494f) form_midp_gauge_slider_pane_t2

0xd40d,	// (0x0003ceca) form_midp_gauge_slider_pane_t3

0xd41b,	// (0x0003ced8) form_midp_gauge_slider_pane_t4

0x0003,

0xf84b,	// (0x0003f308) form_midp_gauge_slider_pane_t

0x4ebc,	// (0x00034979) form_midp_slider_pane

0x22d5,	// (0x00031d92) bg_input_focus_pane_cp041_ParamLimits

0x22d5,	// (0x00031d92) bg_input_focus_pane_cp041

0x4e51,	// (0x0003490e) form_midp_gauge_wait_pane_t1_ParamLimits

0x4e51,	// (0x0003490e) form_midp_gauge_wait_pane_t1

0x4e63,	// (0x00034920) form_midp_gauge_wait_pane_t2_ParamLimits

0x4e63,	// (0x00034920) form_midp_gauge_wait_pane_t2

0x0001,

0xf846,	// (0x0003f303) form_midp_gauge_wait_pane_t_ParamLimits

0xf846,	// (0x0003f303) form_midp_gauge_wait_pane_t

0x4e75,	// (0x00034932) form_midp_wait_pane_ParamLimits

0x4e75,	// (0x00034932) form_midp_wait_pane

0x4e19,	// (0x000348d6) form_midp_image_pane_g1

0x4e22,	// (0x000348df) form_midp_image_pane_t1

0x4e31,	// (0x000348ee) form_midp_image_pane_t2

0x4e40,	// (0x000348fd) form_midp_image_pane_t3

0x0002,

0xf83f,	// (0x0003f2fc) form_midp_image_pane_t

0x4e10,	// (0x000348cd) list_single_midp_pane_g1

0x102e,	// (0x00030aeb) list_single_midp_pane_t1

0xd3f6,	// (0x0003ceb3) list_midp_form_item_pane_ParamLimits

0xd3f6,	// (0x0003ceb3) list_midp_form_item_pane

0x3e33,	// (0x000338f0) list_midp_form_item_pane_t1

0x3e42,	// (0x000338ff) midp_ticker_pane_g1

0x3e4e,	// (0x0003390b) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x0003f250) midp_ticker_pane_g

0xc833,	// (0x0003c2f0) midp_ticker_pane_t1

0xd7f5,	// (0x0003d2b2) midp_editing_number_pane_t1

0x61ee,	// (0x00035cab) midp_editing_number_pane

0x61fd,	// (0x00035cba) midp_ticker_pane

0x5f81,	// (0x00035a3e) ai_message_heading_pane

0x21f5,	// (0x00031cb2) bg_popup_window_pane_cp14

0x5f89,	// (0x00035a46) listscroll_ai_message_pane

0x5f07,	// (0x000359c4) ai_message_heading_pane_g1_ParamLimits

0x5f07,	// (0x000359c4) ai_message_heading_pane_g1

0x5f13,	// (0x000359d0) ai_message_heading_pane_g2_ParamLimits

0x5f13,	// (0x000359d0) ai_message_heading_pane_g2

0x5f21,	// (0x000359de) ai_message_heading_pane_g3_ParamLimits

0x5f21,	// (0x000359de) ai_message_heading_pane_g3

0x5f2d,	// (0x000359ea) ai_message_heading_pane_g4_ParamLimits

0x5f2d,	// (0x000359ea) ai_message_heading_pane_g4

0x0003,

0xf980,	// (0x0003f43d) ai_message_heading_pane_g_ParamLimits

0xf980,	// (0x0003f43d) ai_message_heading_pane_g

0x5f39,	// (0x000359f6) ai_message_heading_pane_t1_ParamLimits

0x5f39,	// (0x000359f6) ai_message_heading_pane_t1

0x5f53,	// (0x00035a10) ai_message_heading_pane_t2_ParamLimits

0x5f53,	// (0x00035a10) ai_message_heading_pane_t2

0x0001,

0xf989,	// (0x0003f446) ai_message_heading_pane_t_ParamLimits

0xf989,	// (0x0003f446) ai_message_heading_pane_t

0x5f67,	// (0x00035a24) bg_popup_heading_pane_cp1_ParamLimits

0x5f67,	// (0x00035a24) bg_popup_heading_pane_cp1

0x5ef5,	// (0x000359b2) list_ai_message_pane_ParamLimits

0x5ef5,	// (0x000359b2) list_ai_message_pane

0x3289,	// (0x00032d46) scroll_pane_cp10

0x5e91,	// (0x0003594e) list_ai_message_pane_g1

0x5e99,	// (0x00035956) list_ai_message_pane_g2

0x0001,

0xf95d,	// (0x0003f41a) list_ai_message_pane_g

0x5ea1,	// (0x0003595e) list_ai_message_pane_t1_ParamLimits

0x5ea1,	// (0x0003595e) list_ai_message_pane_t1

0x5eb6,	// (0x00035973) list_ai_message_pane_t2_ParamLimits

0x5eb6,	// (0x00035973) list_ai_message_pane_t2

0x5ecb,	// (0x00035988) list_ai_message_pane_t3_ParamLimits

0x5ecb,	// (0x00035988) list_ai_message_pane_t3

0x5ee0,	// (0x0003599d) list_ai_message_pane_t4_ParamLimits

0x5ee0,	// (0x0003599d) list_ai_message_pane_t4

0x0003,

0xf962,	// (0x0003f41f) list_ai_message_pane_t_ParamLimits

0xf962,	// (0x0003f41f) list_ai_message_pane_t

0xd636,	// (0x0003d0f3) cell_ai_soft_ind_pane_ParamLimits

0xd636,	// (0x0003d0f3) cell_ai_soft_ind_pane

0x3e6c,	// (0x00033929) cell_ai_soft_ind_pane_g1_ParamLimits

0x3e6c,	// (0x00033929) cell_ai_soft_ind_pane_g1

0x21f5,	// (0x00031cb2) grid_highlight_cp1

0x3e79,	// (0x00033936) text_secondary_cp56_ParamLimits

0x3e79,	// (0x00033936) text_secondary_cp56

0x5e4f,	// (0x0003590c) example_general_pane_ParamLimits

0x5e4f,	// (0x0003590c) example_general_pane

0x5e5b,	// (0x00035918) example_parent_pane_g1_ParamLimits

0x5e5b,	// (0x00035918) example_parent_pane_g1

0x5e67,	// (0x00035924) example_parent_pane_t1_ParamLimits

0x5e67,	// (0x00035924) example_parent_pane_t1

0xcc89,	// (0x0003c746) popup_preview_text_window_ParamLimits

0xcc89,	// (0x0003c746) popup_preview_text_window

0x3c94,	// (0x00033751) list_single_pane_cp2_g4

0x2607,	// (0x000320c4) bg_popup_preview_window_pane_ParamLimits

0x2607,	// (0x000320c4) bg_popup_preview_window_pane

0x5b82,	// (0x0003563f) popup_preview_text_window_t1_ParamLimits

0x5b82,	// (0x0003563f) popup_preview_text_window_t1

0x5ba0,	// (0x0003565d) popup_preview_text_window_t2_ParamLimits

0x5ba0,	// (0x0003565d) popup_preview_text_window_t2

0x5be9,	// (0x000356a6) popup_preview_text_window_t3_ParamLimits

0x5be9,	// (0x000356a6) popup_preview_text_window_t3

0x5c2e,	// (0x000356eb) popup_preview_text_window_t4_ParamLimits

0x5c2e,	// (0x000356eb) popup_preview_text_window_t4

0x0004,

0xf931,	// (0x0003f3ee) popup_preview_text_window_t_ParamLimits

0xf931,	// (0x0003f3ee) popup_preview_text_window_t

0x5cac,	// (0x00035769) scroll_pane_cp11

0x4c33,	// (0x000346f0) bg_popup_preview_window_pane_g1

0x5b36,	// (0x000355f3) bg_popup_preview_window_pane_g2

0x5b40,	// (0x000355fd) bg_popup_preview_window_pane_g3

0x5b4a,	// (0x00035607) bg_popup_preview_window_pane_g4

0x5b54,	// (0x00035611) bg_popup_preview_window_pane_g5

0x5b5e,	// (0x0003561b) bg_popup_preview_window_pane_g6

0x5b66,	// (0x00035623) bg_popup_preview_window_pane_g7

0x5b6e,	// (0x0003562b) bg_popup_preview_window_pane_g8

0xf2f8,	// (0x0003edb5) aid_popup_width_pane

0xcbf9,	// (0x0003c6b6) popup_midp_note_alarm_window_ParamLimits

0xcbf9,	// (0x0003c6b6) popup_midp_note_alarm_window

0x30fb,	// (0x00032bb8) data_form_pane_ParamLimits

0xb643,	// (0x0003b100) form_field_data_pane_g1

0xb64d,	// (0x0003b10a) form_field_data_pane_t1_ParamLimits

0x3107,	// (0x00032bc4) input_focus_pane_ParamLimits

0x3115,	// (0x00032bd2) data_form_wide_pane_ParamLimits

0x0673,	// (0x00030130) form_field_data_wide_pane_g1

0x067f,	// (0x0003013c) form_field_data_wide_pane_t1_ParamLimits

0x2e78,	// (0x00032935) input_focus_pane_cp6_ParamLimits

0xc525,	// (0x0003bfe2) input_popup_find_pane_g1_ParamLimits

0xc525,	// (0x0003bfe2) input_popup_find_pane_g1

0x08ef,	// (0x000303ac) aid_navi_side_left_pane

0x0904,	// (0x000303c1) aid_navi_side_right_pane

0x5545,	// (0x00035002) bg_popup_window_pane_cp30_ParamLimits

0x5545,	// (0x00035002) bg_popup_window_pane_cp30

0x55bf,	// (0x0003507c) popup_midp_note_alarm_window_g1_ParamLimits

0x55bf,	// (0x0003507c) popup_midp_note_alarm_window_g1

0x55ef,	// (0x000350ac) popup_midp_note_alarm_window_t1_ParamLimits

0x55ef,	// (0x000350ac) popup_midp_note_alarm_window_t1

0x5690,	// (0x0003514d) popup_midp_note_alarm_window_t2_ParamLimits

0x5690,	// (0x0003514d) popup_midp_note_alarm_window_t2

0x573e,	// (0x000351fb) popup_midp_note_alarm_window_t3_ParamLimits

0x573e,	// (0x000351fb) popup_midp_note_alarm_window_t3

0x5770,	// (0x0003522d) popup_midp_note_alarm_window_t4_ParamLimits

0x5770,	// (0x0003522d) popup_midp_note_alarm_window_t4

0x5796,	// (0x00035253) popup_midp_note_alarm_window_t5_ParamLimits

0x5796,	// (0x00035253) popup_midp_note_alarm_window_t5

0x000a,

0xf8ce,	// (0x0003f38b) popup_midp_note_alarm_window_t_ParamLimits

0xf8ce,	// (0x0003f38b) popup_midp_note_alarm_window_t

0x5842,	// (0x000352ff) wait_bar_pane_cp1_ParamLimits

0x5842,	// (0x000352ff) wait_bar_pane_cp1

0x21f5,	// (0x00031cb2) wait_anim_pane_copy1

0x21f5,	// (0x00031cb2) wait_border_pane_copy1

0x522a,	// (0x00034ce7) wait_border_pane_g1_copy1

0x0699,	// (0x00030156) form_field_popup_pane_g1

0xb667,	// (0x0003b124) form_field_popup_pane_t1_ParamLimits

0x3107,	// (0x00032bc4) input_focus_pane_cp7_ParamLimits

0x3141,	// (0x00032bfe) list_form_pane_ParamLimits

0x06bb,	// (0x00030178) form_field_popup_wide_pane_g1

0x06c3,	// (0x00030180) form_field_popup_wide_pane_t1_ParamLimits

0x3107,	// (0x00032bc4) input_focus_pane_cp8_ParamLimits

0x314d,	// (0x00032c0a) list_form_wide_pane_ParamLimits

0x63a1,	// (0x00035e5e) aid_size_cell_graphic_pane

0xb6e6,	// (0x0003b1a3) data_form_pane_t1_ParamLimits

0xbb2c,	// (0x0003b5e9) data_form_wide_pane_t1_ParamLimits

0xd086,	// (0x0003cb43) bg_status_flat_pane

0xb13c,	// (0x0003abf9) title_pane_t1_ParamLimits

0x229d,	// (0x00031d5a) title_pane_t2_ParamLimits

0x22c3,	// (0x00031d80) title_pane_t3_ParamLimits

0xf59b,	// (0x0003f058) title_pane_t_ParamLimits

0xc62c,	// (0x0003c0e9) level_1_signal_ParamLimits

0xc63e,	// (0x0003c0fb) level_2_signal_ParamLimits

0xc651,	// (0x0003c10e) level_3_signal_ParamLimits

0xc664,	// (0x0003c121) level_4_signal_ParamLimits

0xc677,	// (0x0003c134) level_5_signal_ParamLimits

0xc68a,	// (0x0003c147) level_6_signal_ParamLimits

0xc69d,	// (0x0003c15a) level_7_signal_ParamLimits

0xc62c,	// (0x0003c0e9) level_1_battery_ParamLimits

0xc63e,	// (0x0003c0fb) level_2_battery_ParamLimits

0xc651,	// (0x0003c10e) level_3_battery_ParamLimits

0xc664,	// (0x0003c121) level_4_battery_ParamLimits

0xc677,	// (0x0003c134) level_5_battery_ParamLimits

0xc68a,	// (0x0003c147) level_6_battery_ParamLimits

0xc69d,	// (0x0003c15a) level_7_battery_ParamLimits

0x544a,	// (0x00034f07) bg_status_flat_pane_g1

0x5452,	// (0x00034f0f) bg_status_flat_pane_g2

0x545a,	// (0x00034f17) bg_status_flat_pane_g3

0x5462,	// (0x00034f1f) bg_status_flat_pane_g4

0x546a,	// (0x00034f27) bg_status_flat_pane_g5

0x5472,	// (0x00034f2f) bg_status_flat_pane_g6

0x547a,	// (0x00034f37) bg_status_flat_pane_g7

0xb1d0,	// (0x0003ac8d) tabs_3_active_pane_t1_ParamLimits

0xb1d0,	// (0x0003ac8d) tabs_3_passive_pane_t1_ParamLimits

0xc1f3,	// (0x0003bcb0) tabs_4_active_pane_t1_ParamLimits

0xc1f3,	// (0x0003bcb0) tabs_4_1_passive_pane_t1_ParamLimits

0xc53b,	// (0x0003bff8) tabs_2_active_pane_t1_ParamLimits

0xc53b,	// (0x0003bff8) tabs_2_passive_pane_t1_ParamLimits

0x22d5,	// (0x00031d92) bg_active_tab_pane_cp4_ParamLimits

0xc54d,	// (0x0003c00a) tabs_2_long_active_pane_t1_ParamLimits

0x40eb,	// (0x00033ba8) bg_passive_tab_pane_cp4_ParamLimits

0x0f75,	// (0x00030a32) list_single_midp_graphic_pane_t1_ParamLimits

0x22d5,	// (0x00031d92) bg_active_tab_pane_cp5_ParamLimits

0xc560,	// (0x0003c01d) tabs_3_long_active_pane_t1_ParamLimits

0x40eb,	// (0x00033ba8) bg_passive_tab_pane_cp5_ParamLimits

0x0f75,	// (0x00030a32) list_single_midp_graphic_pane_t1

0xd086,	// (0x0003cb43) bg_status_flat_pane_ParamLimits

0x48ac,	// (0x00034369) indicator_pane_cp2_ParamLimits

0x48ac,	// (0x00034369) indicator_pane_cp2

0xd21b,	// (0x0003ccd8) navi_pane_srt_ParamLimits

0xd21b,	// (0x0003ccd8) navi_pane_srt

0x4a12,	// (0x000344cf) popup_clock_digital_analogue_window_cp1

0x23b5,	// (0x00031e72) indicator_pane_t1

0x3d65,	// (0x00033822) copy_highlight_pane

0x3d65,	// (0x00033822) cursor_graphics_pane

0x3d65,	// (0x00033822) graphic_within_text_pane

0x3d65,	// (0x00033822) link_highlight_pane

0x5c6f,	// (0x0003572c) popup_preview_text_window_t5_ParamLimits

0x5c6f,	// (0x0003572c) popup_preview_text_window_t5

0x3e95,	// (0x00033952) cursor_digital_pane

0x3e95,	// (0x00033952) cursor_primary_pane

0x3ea6,	// (0x00033963) cursor_primary_small_pane

0x3eae,	// (0x0003396b) cursor_secondary_pane

0x3eb6,	// (0x00033973) cursor_title_pane

0x3e95,	// (0x00033952) link_highlight_digital_pane

0x3e9d,	// (0x0003395a) link_highlight_primary_pane

0x3ea6,	// (0x00033963) link_highlight_primary_small_pane

0x3eae,	// (0x0003396b) link_highlight_secondary_pane

0x3eb6,	// (0x00033973) link_highlight_title_pane

0x3e95,	// (0x00033952) copy_highlight_digital_pane

0x3e95,	// (0x00033952) copy_highlight_primary_pane

0x3ea6,	// (0x00033963) copy_highlight_primary_small_pane

0x3eae,	// (0x0003396b) copy_highlight_secondary_pane

0x3eb6,	// (0x00033973) copy_highlight_title_pane

0x3eae,	// (0x0003396b) graphic_text_digital_pane

0x54e8,	// (0x00034fa5) graphic_text_primary_pane

0x54f1,	// (0x00034fae) graphic_text_primary_small_pane

0x3ea6,	// (0x00033963) graphic_text_secondary_pane

0x3e95,	// (0x00033952) graphic_text_title_pane

0xc845,	// (0x0003c302) cursor_primary_pane_g1

0x54da,	// (0x00034f97) cursor_text_primary_t1

0xd48d,	// (0x0003cf4a) cursor_primary_small_pane_g1

0x54cc,	// (0x00034f89) cursor_text_primary_small_t1

0xd483,	// (0x0003cf40) cursor_primary_small_pane_g1_copy1

0x54b4,	// (0x00034f71) cursor_text_primary_small_t1_copy1

0x5492,	// (0x00034f4f) cursor_text_title_t1

0xd479,	// (0x0003cf36) cursor_title_pane_g1

0xc845,	// (0x0003c302) cursor_digital_pane_g1

0x3ec8,	// (0x00033985) cursor_text_digital_t1

0x3ed6,	// (0x00033993) link_highlight_primary_pane_g1

0x543b,	// (0x00034ef8) link_highlight_primary_pane_t1

0x3ed6,	// (0x00033993) link_highlight_primary_small_pane_g1

0x3ede,	// (0x0003399b) link_highlight_primary_small_pane_t1

0x3eed,	// (0x000339aa) link_highlight_secondary_pane_g1

0x3ef5,	// (0x000339b2) link_highlight_secondary_pane_t1

0x53af,	// (0x00034e6c) link_highlight_title_pane_g1

0x53b7,	// (0x00034e74) link_highlight_title_pane_t1

0x5398,	// (0x00034e55) link_highlight_digital_pane_g1

0x53a0,	// (0x00034e5d) link_highlight_digital_pane_t1

0x5260,	// (0x00034d1d) copy_highlight_primary_pane_g1

0x5277,	// (0x00034d34) copy_highlight_primary_pane_t1

0x5260,	// (0x00034d1d) copy_highlight_primary_small_pane_g1

0x5268,	// (0x00034d25) copy_highlight_primary_small_pane_t1

0x3f04,	// (0x000339c1) copy_highlight_secondary_pane_g1

0x3f0c,	// (0x000339c9) copy_highlight_secondary_pane_t1

0x5249,	// (0x00034d06) copy_highlight_title_pane_g1

0x5251,	// (0x00034d0e) copy_highlight_title_pane_t1

0x5260,	// (0x00034d1d) copy_highlight_digital_pane_g1

0x6571,	// (0x0003602e) copy_highlight_digital_pane_t1

0x64c5,	// (0x00035f82) graphic_text_primary_pane_g1

0x6555,	// (0x00036012) graphic_text_primary_pane_t1

0x6563,	// (0x00036020) graphic_text_primary_pane_t2

0x0001,

0xf9fd,	// (0x0003f4ba) graphic_text_primary_pane_t

0x6531,	// (0x00035fee) graphic_text_primary_small_pane_g1

0x6539,	// (0x00035ff6) graphic_text_primary_small_pane_t1

0x6547,	// (0x00036004) graphic_text_primary_small_pane_t2

0x0001,

0xf9f8,	// (0x0003f4b5) graphic_text_primary_small_pane_t

0x650d,	// (0x00035fca) graphic_text_secondary_pane_g1

0x6515,	// (0x00035fd2) graphic_text_secondary_pane_t1

0x6523,	// (0x00035fe0) graphic_text_secondary_pane_t2

0x0001,

0xf9f3,	// (0x0003f4b0) graphic_text_secondary_pane_t

0x64e9,	// (0x00035fa6) graphic_text_title_pane_g1

0x64f1,	// (0x00035fae) graphic_text_title_pane_t1

0x64ff,	// (0x00035fbc) graphic_text_title_pane_t2

0x0001,

0xf9ee,	// (0x0003f4ab) graphic_text_title_pane_t

0x64c5,	// (0x00035f82) graphic_text_digital_pane_g1

0x64cd,	// (0x00035f8a) graphic_text_digital_pane_t1

0x64db,	// (0x00035f98) graphic_text_digital_pane_t2

0x0001,

0xf9e9,	// (0x0003f4a6) graphic_text_digital_pane_t

0x22d5,	// (0x00031d92) navi_icon_pane_srt_ParamLimits

0x22d5,	// (0x00031d92) navi_icon_pane_srt

0x21f5,	// (0x00031cb2) navi_midp_pane_srt

0x21f5,	// (0x00031cb2) navi_navi_pane_srt

0x22d5,	// (0x00031d92) navi_text_pane_srt_ParamLimits

0x22d5,	// (0x00031d92) navi_text_pane_srt

0x6490,	// (0x00035f4d) navi_navi_icon_text_pane_srt

0x6498,	// (0x00035f55) navi_navi_pane_srt_g1_ParamLimits

0x6498,	// (0x00035f55) navi_navi_pane_srt_g1

0x64aa,	// (0x00035f67) navi_navi_pane_srt_g2_ParamLimits

0x64aa,	// (0x00035f67) navi_navi_pane_srt_g2

0x0001,

0xf9e4,	// (0x0003f4a1) navi_navi_pane_srt_g_ParamLimits

0xf9e4,	// (0x0003f4a1) navi_navi_pane_srt_g

0x64bc,	// (0x00035f79) navi_navi_tabs_pane_srt

0x6490,	// (0x00035f4d) navi_navi_text_pane_srt

0x6490,	// (0x00035f4d) navi_navi_volume_pane_srt

0x6481,	// (0x00035f3e) navi_navi_text_pane_srt_t1

0x1409,	// (0x00030ec6) navi_navi_volume_pane_srt_g1

0x1411,	// (0x00030ece) volume_small_pane_srt_ParamLimits

0x1411,	// (0x00030ece) volume_small_pane_srt

0x0c62,	// (0x0003071f) volume_small_pane_srt_g1_ParamLimits

0x0c62,	// (0x0003071f) volume_small_pane_srt_g1

0x0c72,	// (0x0003072f) volume_small_pane_srt_g2_ParamLimits

0x0c72,	// (0x0003072f) volume_small_pane_srt_g2

0x0c83,	// (0x00030740) volume_small_pane_srt_g3_ParamLimits

0x0c83,	// (0x00030740) volume_small_pane_srt_g3

0x0c94,	// (0x00030751) volume_small_pane_srt_g4_ParamLimits

0x0c94,	// (0x00030751) volume_small_pane_srt_g4

0x0ca5,	// (0x00030762) volume_small_pane_srt_g5_ParamLimits

0x0ca5,	// (0x00030762) volume_small_pane_srt_g5

0x0cb6,	// (0x00030773) volume_small_pane_srt_g6_ParamLimits

0x0cb6,	// (0x00030773) volume_small_pane_srt_g6

0x0cc7,	// (0x00030784) volume_small_pane_srt_g7_ParamLimits

0x0cc7,	// (0x00030784) volume_small_pane_srt_g7

0x0cd8,	// (0x00030795) volume_small_pane_srt_g8_ParamLimits

0x0cd8,	// (0x00030795) volume_small_pane_srt_g8

0x0ce9,	// (0x000307a6) volume_small_pane_srt_g9_ParamLimits

0x0ce9,	// (0x000307a6) volume_small_pane_srt_g9

0x0cfa,	// (0x000307b7) volume_small_pane_srt_g10_ParamLimits

0x0cfa,	// (0x000307b7) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x0003f255) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x0003f255) volume_small_pane_srt_g

0x26bc,	// (0x00032179) query_popup_data_pane_cp2

0x6467,	// (0x00035f24) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6467,	// (0x00035f24) navi_navi_icon_text_pane_srt_t1

0x54e8,	// (0x00034fa5) navi_tabs_2_long_pane_srt

0x54e8,	// (0x00034fa5) navi_tabs_2_pane_srt

0x54e8,	// (0x00034fa5) navi_tabs_3_long_pane_srt

0x54e8,	// (0x00034fa5) navi_tabs_3_pane_srt

0x54e8,	// (0x00034fa5) navi_tabs_4_pane_srt

0x13e9,	// (0x00030ea6) tabs_2_active_pane_srt_ParamLimits

0x13e9,	// (0x00030ea6) tabs_2_active_pane_srt

0x13f9,	// (0x00030eb6) tabs_2_passive_pane_srt_ParamLimits

0x13f9,	// (0x00030eb6) tabs_2_passive_pane_srt

0x4d25,	// (0x000347e2) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4d25,	// (0x000347e2) bg_passive_tab_pane_cp1_srt

0x6433,	// (0x00035ef0) bg_passive_tab_pane_g1_cp1_srt

0x39ae,	// (0x0003346b) bg_passive_tab_pane_g2_cp1_srt

0x643c,	// (0x00035ef9) bg_passive_tab_pane_g3_cp1_srt

0x2551,	// (0x0003200e) bg_active_tab_pane_cp1_srt_ParamLimits

0x2551,	// (0x0003200e) bg_active_tab_pane_cp1_srt

0x6445,	// (0x00035f02) tabs_2_active_pane_srt_g1

0xd918,	// (0x0003d3d5) tabs_2_active_pane_srt_t1_ParamLimits

0xd918,	// (0x0003d3d5) tabs_2_active_pane_srt_t1

0x6433,	// (0x00035ef0) bg_active_tab_pane_g1_cp1_srt

0x39ae,	// (0x0003346b) bg_active_tab_pane_g2_cp1_srt

0x643c,	// (0x00035ef9) bg_active_tab_pane_g3_cp1_srt

0x13b6,	// (0x00030e73) tabs_3_active_pane_srt_ParamLimits

0x13b6,	// (0x00030e73) tabs_3_active_pane_srt

0x13c7,	// (0x00030e84) tabs_3_passive_pane_cp_srt_ParamLimits

0x13c7,	// (0x00030e84) tabs_3_passive_pane_cp_srt

0x13d8,	// (0x00030e95) tabs_3_passive_pane_srt_ParamLimits

0x13d8,	// (0x00030e95) tabs_3_passive_pane_srt

0x4d25,	// (0x000347e2) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4d25,	// (0x000347e2) bg_passive_tab_pane_cp2_srt

0x3f1b,	// (0x000339d8) bg_passive_tab_pane_g1_cp2_srt

0x39ae,	// (0x0003346b) bg_passive_tab_pane_g2_cp2_srt

0x3f24,	// (0x000339e1) bg_passive_tab_pane_g3_cp2_srt

0x2551,	// (0x0003200e) bg_active_tab_pane_cp2_srt_ParamLimits

0x2551,	// (0x0003200e) bg_active_tab_pane_cp2_srt

0x6419,	// (0x00035ed6) tabs_3_active_pane_srt_g1

0xd902,	// (0x0003d3bf) tabs_3_active_pane_srt_t1_ParamLimits

0xd902,	// (0x0003d3bf) tabs_3_active_pane_srt_t1

0x3f1b,	// (0x000339d8) bg_active_tab_pane_g1_cp2_srt

0x39ae,	// (0x0003346b) bg_active_tab_pane_g2_cp2_srt

0x3f24,	// (0x000339e1) bg_active_tab_pane_g3_cp2_srt

0x136e,	// (0x00030e2b) tabs_4_active_pane_srt_ParamLimits

0x136e,	// (0x00030e2b) tabs_4_active_pane_srt

0x1380,	// (0x00030e3d) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1380,	// (0x00030e3d) tabs_4_passive_pane_cp2_srt

0x4079,	// (0x00033b36) aid_size_cell_toolbar

0x603b,	// (0x00035af8) main_idle_act_pane_ParamLimits

0x42b0,	// (0x00033d6d) popup_large_graphic_colour_window_ParamLimits

0xcf4f,	// (0x0003ca0c) popup_toolbar_window_ParamLimits

0xcf4f,	// (0x0003ca0c) popup_toolbar_window

0x1329,	// (0x00030de6) list_single_graphic_2heading_pane_ParamLimits

0x1329,	// (0x00030de6) list_single_graphic_2heading_pane

0x34ba,	// (0x00032f77) aid_size_cell_apps_grid_lsc_pane

0x34cc,	// (0x00032f89) aid_size_cell_apps_grid_prt_pane

0x40eb,	// (0x00033ba8) bg_wml_button_pane_cp1_ParamLimits

0x40eb,	// (0x00033ba8) bg_wml_button_pane_cp1

0xd429,	// (0x0003cee6) form_midp_field_text_pane_t1_ParamLimits

0x4d25,	// (0x000347e2) input_focus_pane_cp050_ParamLimits

0x4f3c,	// (0x000349f9) list_midp_form_text_pane_ParamLimits

0x4eee,	// (0x000349ab) input_focus_pane_cp051_ParamLimits

0x4f02,	// (0x000349bf) list_midp_choice_pane_ParamLimits

0xd3e0,	// (0x0003ce9d) list_single_2graphic_pane_cp3_ParamLimits

0xd3e0,	// (0x0003ce9d) list_single_2graphic_pane_cp3

0x7054,	// (0x00036b11) list_single_midp_graphic_pane_ParamLimits

0x7054,	// (0x00036b11) list_single_midp_graphic_pane

0xf3a0,	// (0x0003ee5d) list_single_graphic_2heading_pane_g1_ParamLimits

0xf3a0,	// (0x0003ee5d) list_single_graphic_2heading_pane_g1

0xf3ac,	// (0x0003ee69) list_single_graphic_2heading_pane_g4_ParamLimits

0xf3ac,	// (0x0003ee69) list_single_graphic_2heading_pane_g4

0xf3b8,	// (0x0003ee75) list_single_graphic_2heading_pane_g5_ParamLimits

0xf3b8,	// (0x0003ee75) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x0003f2a8) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x0003f2a8) list_single_graphic_2heading_pane_g

0xf3c4,	// (0x0003ee81) list_single_graphic_2heading_pane_t1_ParamLimits

0xf3c4,	// (0x0003ee81) list_single_graphic_2heading_pane_t1

0xf3d8,	// (0x0003ee95) list_single_graphic_2heading_pane_t2_ParamLimits

0xf3d8,	// (0x0003ee95) list_single_graphic_2heading_pane_t2

0xf3f4,	// (0x0003eeb1) list_single_graphic_2heading_pane_t3_ParamLimits

0xf3f4,	// (0x0003eeb1) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x0003f2af) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x0003f2af) list_single_graphic_2heading_pane_t

0x4b71,	// (0x0003462e) bg_popup_sub_pane_cp2

0x4b9b,	// (0x00034658) grid_toobar_pane

0x0e69,	// (0x00030926) cell_toolbar_pane_ParamLimits

0x0e69,	// (0x00030926) cell_toolbar_pane

0x4bd7,	// (0x00034694) cell_toolbar_pane_g1_ParamLimits

0x4bd7,	// (0x00034694) cell_toolbar_pane_g1

0x4beb,	// (0x000346a8) cell_toolbar_pane_g2_ParamLimits

0x4beb,	// (0x000346a8) cell_toolbar_pane_g2

0x0001,

0xf800,	// (0x0003f2bd) cell_toolbar_pane_g_ParamLimits

0xf800,	// (0x0003f2bd) cell_toolbar_pane_g

0x4c0d,	// (0x000346ca) grid_highlight_pane_cp2_ParamLimits

0x4c0d,	// (0x000346ca) grid_highlight_pane_cp2

0x4c27,	// (0x000346e4) toolbar_button_pane

0x4c33,	// (0x000346f0) toolbar_button_pane_g1

0x4c3b,	// (0x000346f8) toolbar_button_pane_g2

0x4c43,	// (0x00034700) toolbar_button_pane_g3

0x4c4b,	// (0x00034708) toolbar_button_pane_g4

0x4c53,	// (0x00034710) toolbar_button_pane_g5

0x4c5b,	// (0x00034718) toolbar_button_pane_g6

0x4c63,	// (0x00034720) toolbar_button_pane_g7

0x4c6b,	// (0x00034728) toolbar_button_pane_g8

0x4c73,	// (0x00034730) toolbar_button_pane_g9

0x0009,

0xf805,	// (0x0003f2c2) toolbar_button_pane_g

0x0edb,	// (0x00030998) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0edb,	// (0x00030998) list_single_2graphic_pane_g1_cp3

0xb924,	// (0x0003b3e1) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb924,	// (0x0003b3e1) list_single_2graphic_pane_g2_cp3

0x0ef8,	// (0x000309b5) list_single_2graphic_pane_g3_cp3

0x0f00,	// (0x000309bd) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0f00,	// (0x000309bd) list_single_2graphic_pane_g4_cp3

0x0f0c,	// (0x000309c9) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0f0c,	// (0x000309c9) list_single_2graphic_pane_t1_cp3

0x0f69,	// (0x00030a26) list_single_midp_graphic_pane_g2_ParamLimits

0x0f69,	// (0x00030a26) list_single_midp_graphic_pane_g2

0x4081,	// (0x00033b3e) aid_zoom_text_primary

0x0e59,	// (0x00030916) aid_zoom_text_secondary

0x3fd8,	// (0x00033a95) status_small_pane_g7_ParamLimits

0x3fd8,	// (0x00033a95) status_small_pane_g7

0x3ffb,	// (0x00033ab8) status_small_pane_t1_ParamLimits

0xb118,	// (0x0003abd5) title_pane_g2

0x0003,

0xf592,	// (0x0003f04f) title_pane_g

0xc3b9,	// (0x0003be76) aid_size_cell_colour_1_pane_ParamLimits

0xc3b9,	// (0x0003be76) aid_size_cell_colour_1_pane

0xc3cd,	// (0x0003be8a) aid_size_cell_colour_2_pane_ParamLimits

0xc3cd,	// (0x0003be8a) aid_size_cell_colour_2_pane

0xc3e1,	// (0x0003be9e) aid_size_cell_colour_3_pane_ParamLimits

0xc3e1,	// (0x0003be9e) aid_size_cell_colour_3_pane

0xc3f5,	// (0x0003beb2) aid_size_cell_colour_4_pane_ParamLimits

0xc3f5,	// (0x0003beb2) aid_size_cell_colour_4_pane

0x082b,	// (0x000302e8) title_pane_stacon_g1_ParamLimits

0x082b,	// (0x000302e8) title_pane_stacon_g1

0x52ce,	// (0x00034d8b) popup_note_wait_window_g3_ParamLimits

0x52ce,	// (0x00034d8b) popup_note_wait_window_g3

0x5345,	// (0x00034e02) popup_note_wait_window_t5_ParamLimits

0x5345,	// (0x00034e02) popup_note_wait_window_t5

0x21f5,	// (0x00031cb2) main_feb_china_hwr_fs_writing_pane

0xc8ea,	// (0x0003c3a7) popup_feb_china_hwr_fs_window_ParamLimits

0xc8ea,	// (0x0003c3a7) popup_feb_china_hwr_fs_window

0xb935,	// (0x0003b3f2) aid_size_cell_hwr_fs_ParamLimits

0xb935,	// (0x0003b3f2) aid_size_cell_hwr_fs

0x4d25,	// (0x000347e2) bg_popup_sub_pane_cp3_ParamLimits

0x4d25,	// (0x000347e2) bg_popup_sub_pane_cp3

0xb94a,	// (0x0003b407) grid_hwr_fs_pane_ParamLimits

0xb94a,	// (0x0003b407) grid_hwr_fs_pane

0x0fb8,	// (0x00030a75) linegrid_hwr_fs_pane_ParamLimits

0x0fb8,	// (0x00030a75) linegrid_hwr_fs_pane

0xb962,	// (0x0003b41f) cell_hwr_fs_pane_ParamLimits

0xb962,	// (0x0003b41f) cell_hwr_fs_pane

0x4d31,	// (0x000347ee) linegrid_hwr_fs_pane_g1_ParamLimits

0x4d31,	// (0x000347ee) linegrid_hwr_fs_pane_g1

0xd3b4,	// (0x0003ce71) linegrid_hwr_fs_pane_g2_ParamLimits

0xd3b4,	// (0x0003ce71) linegrid_hwr_fs_pane_g2

0x4d4f,	// (0x0003480c) linegrid_hwr_fs_pane_g3_ParamLimits

0x4d4f,	// (0x0003480c) linegrid_hwr_fs_pane_g3

0x0fec,	// (0x00030aa9) linegrid_hwr_fs_pane_g4_ParamLimits

0x0fec,	// (0x00030aa9) linegrid_hwr_fs_pane_g4

0x100a,	// (0x00030ac7) linegrid_hwr_fs_pane_g5_ParamLimits

0x100a,	// (0x00030ac7) linegrid_hwr_fs_pane_g5

0x0004,

0xf82b,	// (0x0003f2e8) linegrid_hwr_fs_pane_g_ParamLimits

0xf82b,	// (0x0003f2e8) linegrid_hwr_fs_pane_g

0x4d5b,	// (0x00034818) cell_hwr_fs_pane_g1_ParamLimits

0x4d5b,	// (0x00034818) cell_hwr_fs_pane_g1

0x4aa8,	// (0x00034565) cell_hwr_fs_pane_g2_ParamLimits

0x4aa8,	// (0x00034565) cell_hwr_fs_pane_g2

0xd3c6,	// (0x0003ce83) cell_hwr_fs_pane_g3_ParamLimits

0xd3c6,	// (0x0003ce83) cell_hwr_fs_pane_g3

0xd3d3,	// (0x0003ce90) cell_hwr_fs_pane_g4_ParamLimits

0xd3d3,	// (0x0003ce90) cell_hwr_fs_pane_g4

0x0003,

0xf836,	// (0x0003f2f3) cell_hwr_fs_pane_g_ParamLimits

0xf836,	// (0x0003f2f3) cell_hwr_fs_pane_g

0xb988,	// (0x0003b445) cell_hwr_fs_pane_t1

0x21f5,	// (0x00031cb2) grid_highlight_pane_cp6

0x21f5,	// (0x00031cb2) main_idle_act2_pane

0x3270,	// (0x00032d2d) aid_inside_area_popup_secondary

0xd4ad,	// (0x0003cf6a) aid_inside_area_window_primary_ParamLimits

0xd4ad,	// (0x0003cf6a) aid_inside_area_window_primary

0x6580,	// (0x0003603d) ai2_news_ticker_pane

0x6588,	// (0x00036045) aid_size_cell_ai1_link_ParamLimits

0x6588,	// (0x00036045) aid_size_cell_ai1_link

0x65a2,	// (0x0003605f) popup_ai2_data_window_ParamLimits

0x65a2,	// (0x0003605f) popup_ai2_data_window

0x65c0,	// (0x0003607d) popup_ai2_link_window_ParamLimits

0x65c0,	// (0x0003607d) popup_ai2_link_window

0x4d25,	// (0x000347e2) bg_popup_sub_pane_cp4_ParamLimits

0x4d25,	// (0x000347e2) bg_popup_sub_pane_cp4

0x65d6,	// (0x00036093) grid_ai2_link_pane_ParamLimits

0x65d6,	// (0x00036093) grid_ai2_link_pane

0x65ed,	// (0x000360aa) popup_ai2_link_window_g1_ParamLimits

0x65ed,	// (0x000360aa) popup_ai2_link_window_g1

0x65f9,	// (0x000360b6) popup_ai2_link_window_g2_ParamLimits

0x65f9,	// (0x000360b6) popup_ai2_link_window_g2

0x0001,

0xfa02,	// (0x0003f4bf) popup_ai2_link_window_g_ParamLimits

0xfa02,	// (0x0003f4bf) popup_ai2_link_window_g

0x660a,	// (0x000360c7) ai2_mp_button_pane

0x6612,	// (0x000360cf) ai2_mp_volume_pane

0x4eee,	// (0x000349ab) bg_popup_sub_pane_cp5_ParamLimits

0x4eee,	// (0x000349ab) bg_popup_sub_pane_cp5

0x661a,	// (0x000360d7) heading_ai2_gene_pane_ParamLimits

0x661a,	// (0x000360d7) heading_ai2_gene_pane

0x6626,	// (0x000360e3) list_ai2_gene_pane_ParamLimits

0x6626,	// (0x000360e3) list_ai2_gene_pane

0x666e,	// (0x0003612b) cell_ai2_link_pane_ParamLimits

0x666e,	// (0x0003612b) cell_ai2_link_pane

0x6684,	// (0x00036141) cell_ai2_link_pane_g1

0x21f5,	// (0x00031cb2) grid_highlight_pane_cp7

0x1426,	// (0x00030ee3) ai2_mp_volume_pane_g1

0x6757,	// (0x00036214) ai2_mp_volume_pane_g2

0x66cc,	// (0x00036189) list_ai2_gene_pane_t1

0x675f,	// (0x0003621c) ai2_mp_volume_pane_g3

0x0002,

0xfa1b,	// (0x0003f4d8) ai2_mp_volume_pane_g

0x142e,	// (0x00030eeb) volume_small_pane_cp3

0x6767,	// (0x00036224) aid_size_cell_ai2_button

0x676f,	// (0x0003622c) grid_ai2_button_pane

0x6778,	// (0x00036235) cell_ai2_button_pane_ParamLimits

0x6778,	// (0x00036235) cell_ai2_button_pane

0x21eb,	// (0x00031ca8) cell_ai2_button_pane_g1

0x21f5,	// (0x00031cb2) grid_highlight_pane_cp8

0x6717,	// (0x000361d4) ai2_gene_pane_t1_ParamLimits

0x6717,	// (0x000361d4) ai2_gene_pane_t1

0xc876,	// (0x0003c333) aid_height_parent_landscape

0xd67d,	// (0x0003d13a) aid_height_set_list

0x603b,	// (0x00035af8) aid_size_parent

0x63a1,	// (0x00035e5e) aid_size_cell_graphic_pane_ParamLimits

0x6636,	// (0x000360f3) popup_ai2_data_window_g1_ParamLimits

0x6636,	// (0x000360f3) popup_ai2_data_window_g1

0x6642,	// (0x000360ff) ai2_news_ticker_pane_g1

0x664a,	// (0x00036107) ai2_news_ticker_pane_g2

0x0001,

0xfa07,	// (0x0003f4c4) ai2_news_ticker_pane_g

0x6652,	// (0x0003610f) ai2_news_ticker_pane_t1

0x6660,	// (0x0003611d) ai2_news_ticker_pane_t2

0x0001,

0xfa0c,	// (0x0003f4c9) ai2_news_ticker_pane_t

0x668d,	// (0x0003614a) heading_ai2_gene_pane_g1

0x6695,	// (0x00036152) heading_ai2_gene_pane_t1_ParamLimits

0x6695,	// (0x00036152) heading_ai2_gene_pane_t1

0x66aa,	// (0x00036167) list_highlight_pane_cp6

0x66b2,	// (0x0003616f) ai2_gene_pane_ParamLimits

0x66b2,	// (0x0003616f) ai2_gene_pane

0x66da,	// (0x00036197) list_ai2_gene_pane_t2

0x0001,

0xfa11,	// (0x0003f4ce) list_ai2_gene_pane_t

0x66e8,	// (0x000361a5) list_highlight_pane_cp8_ParamLimits

0x66e8,	// (0x000361a5) list_highlight_pane_cp8

0x66f9,	// (0x000361b6) ai2_gene_pane_g1_ParamLimits

0x66f9,	// (0x000361b6) ai2_gene_pane_g1

0x670b,	// (0x000361c8) ai2_gene_pane_g2_ParamLimits

0x670b,	// (0x000361c8) ai2_gene_pane_g2

0x0001,

0xfa16,	// (0x0003f4d3) ai2_gene_pane_g_ParamLimits

0xfa16,	// (0x0003f4d3) ai2_gene_pane_g

0x309d,	// (0x00032b5a) scroll_pane_cp12

0xb8c7,	// (0x0003b384) control_pane_t3_ParamLimits

0xb8c7,	// (0x0003b384) control_pane_t3

0x3fec,	// (0x00033aa9) status_small_pane_g8_ParamLimits

0x3fec,	// (0x00033aa9) status_small_pane_g8

0xc98c,	// (0x0003c449) popup_find_window_ParamLimits

0xcc39,	// (0x0003c6f6) popup_note_image_window_ParamLimits

0x0e99,	// (0x00030956) list_double2_graphic_pane_vc_g1_ParamLimits

0x0e99,	// (0x00030956) list_double2_graphic_pane_vc_g1

0x0ea5,	// (0x00030962) list_double2_graphic_pane_vc_g2_ParamLimits

0x0ea5,	// (0x00030962) list_double2_graphic_pane_vc_g2

0x0eb1,	// (0x0003096e) list_double2_graphic_pane_vc_g3_ParamLimits

0x0eb1,	// (0x0003096e) list_double2_graphic_pane_vc_g3

0x0002,

0xf7f9,	// (0x0003f2b6) list_double2_graphic_pane_vc_g_ParamLimits

0xf7f9,	// (0x0003f2b6) list_double2_graphic_pane_vc_g

0x0ebd,	// (0x0003097a) list_double2_graphic_pane_vc_t1_ParamLimits

0x0ebd,	// (0x0003097a) list_double2_graphic_pane_vc_t1

0x0f27,	// (0x000309e4) list_single_heading_pane_vc_g1_ParamLimits

0x0f27,	// (0x000309e4) list_single_heading_pane_vc_g1

0x0f33,	// (0x000309f0) list_single_heading_pane_vc_g2_ParamLimits

0x0f33,	// (0x000309f0) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0003f0c9) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0003f0c9) list_single_heading_pane_vc_g

0x0f3f,	// (0x000309fc) list_single_heading_pane_vc_t1_ParamLimits

0x0f3f,	// (0x000309fc) list_single_heading_pane_vc_t1

0x0f55,	// (0x00030a12) list_single_heading_pane_vc_t2_ParamLimits

0x0f55,	// (0x00030a12) list_single_heading_pane_vc_t2

0x0001,

0xf81a,	// (0x0003f2d7) list_single_heading_pane_vc_t_ParamLimits

0xf81a,	// (0x0003f2d7) list_single_heading_pane_vc_t

0x4c7b,	// (0x00034738) list_setting_number_pane_vc_g1_ParamLimits

0x4c7b,	// (0x00034738) list_setting_number_pane_vc_g1

0x4c87,	// (0x00034744) list_setting_number_pane_vc_g2_ParamLimits

0x4c87,	// (0x00034744) list_setting_number_pane_vc_g2

0x0001,

0xf81f,	// (0x0003f2dc) list_setting_number_pane_vc_g_ParamLimits

0xf81f,	// (0x0003f2dc) list_setting_number_pane_vc_g

0x4c93,	// (0x00034750) list_setting_number_pane_vc_t1_ParamLimits

0x4c93,	// (0x00034750) list_setting_number_pane_vc_t1

0x4ca7,	// (0x00034764) list_setting_number_pane_vc_t2_ParamLimits

0x4ca7,	// (0x00034764) list_setting_number_pane_vc_t2

0x4cc3,	// (0x00034780) list_setting_number_pane_vc_t3_ParamLimits

0x4cc3,	// (0x00034780) list_setting_number_pane_vc_t3

0x0002,

0xf824,	// (0x0003f2e1) list_setting_number_pane_vc_t_ParamLimits

0xf824,	// (0x0003f2e1) list_setting_number_pane_vc_t

0x4ceb,	// (0x000347a8) set_value_pane_vc_ParamLimits

0x4ceb,	// (0x000347a8) set_value_pane_vc

0x1329,	// (0x00030de6) list_double2_graphic_pane_vc_ParamLimits

0x1329,	// (0x00030de6) list_double2_graphic_pane_vc

0x621f,	// (0x00035cdc) list_double2_large_graphic_pane_vc_ParamLimits

0x621f,	// (0x00035cdc) list_double2_large_graphic_pane_vc

0x1329,	// (0x00030de6) list_double2_pane_vc_ParamLimits

0x1329,	// (0x00030de6) list_double2_pane_vc

0x1329,	// (0x00030de6) list_double_graphic_heading_pane_vc_ParamLimits

0x1329,	// (0x00030de6) list_double_graphic_heading_pane_vc

0x1329,	// (0x00030de6) list_double_graphic_pane_vc_ParamLimits

0x1329,	// (0x00030de6) list_double_graphic_pane_vc

0x1329,	// (0x00030de6) list_double_heading_pane_vc_ParamLimits

0x1329,	// (0x00030de6) list_double_heading_pane_vc

0x621f,	// (0x00035cdc) list_double_large_graphic_pane_vc_ParamLimits

0x621f,	// (0x00035cdc) list_double_large_graphic_pane_vc

0x1329,	// (0x00030de6) list_double_number_pane_vc_ParamLimits

0x1329,	// (0x00030de6) list_double_number_pane_vc

0x1329,	// (0x00030de6) list_double_pane_vc_ParamLimits

0x1329,	// (0x00030de6) list_double_pane_vc

0x1329,	// (0x00030de6) list_double_time_pane_vc_ParamLimits

0x1329,	// (0x00030de6) list_double_time_pane_vc

0x1329,	// (0x00030de6) list_setting_number_pane_vc_ParamLimits

0x1329,	// (0x00030de6) list_setting_number_pane_vc

0x1329,	// (0x00030de6) list_setting_pane_vc_ParamLimits

0x1329,	// (0x00030de6) list_setting_pane_vc

0x1329,	// (0x00030de6) list_single_graphic_heading_pane_vc_ParamLimits

0x1329,	// (0x00030de6) list_single_graphic_heading_pane_vc

0x1329,	// (0x00030de6) list_single_heading_pane_vc_ParamLimits

0x1329,	// (0x00030de6) list_single_heading_pane_vc

0x1329,	// (0x00030de6) list_single_number_heading_pane_vc_ParamLimits

0x1329,	// (0x00030de6) list_single_number_heading_pane_vc

0x0e99,	// (0x00030956) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0e99,	// (0x00030956) list_double_graphic_heading_pane_vc_g1

0x0f27,	// (0x000309e4) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0f27,	// (0x000309e4) list_double_graphic_heading_pane_vc_g2

0x0f33,	// (0x000309f0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0f33,	// (0x000309f0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa22,	// (0x0003f4df) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa22,	// (0x0003f4df) list_double_graphic_heading_pane_vc_g

0x1437,	// (0x00030ef4) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x1437,	// (0x00030ef4) list_double_graphic_heading_pane_vc_t1

0x0f3f,	// (0x000309fc) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0f3f,	// (0x000309fc) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa29,	// (0x0003f4e6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa29,	// (0x0003f4e6) list_double_graphic_heading_pane_vc_t

0x4c7b,	// (0x00034738) list_setting_pane_vc_g1_ParamLimits

0x4c7b,	// (0x00034738) list_setting_pane_vc_g1

0x4c87,	// (0x00034744) list_setting_pane_vc_g2_ParamLimits

0x4c87,	// (0x00034744) list_setting_pane_vc_g2

0x0001,

0xf81f,	// (0x0003f2dc) list_setting_pane_vc_g_ParamLimits

0xf81f,	// (0x0003f2dc) list_setting_pane_vc_g

0x69b4,	// (0x00036471) list_setting_pane_vc_t1_ParamLimits

0x69b4,	// (0x00036471) list_setting_pane_vc_t1

0x69c8,	// (0x00036485) list_setting_pane_vc_t2_ParamLimits

0x69c8,	// (0x00036485) list_setting_pane_vc_t2

0x0001,

0xfa6c,	// (0x0003f529) list_setting_pane_vc_t_ParamLimits

0xfa6c,	// (0x0003f529) list_setting_pane_vc_t

0x4ceb,	// (0x000347a8) set_value_pane_cp_vc_ParamLimits

0x4ceb,	// (0x000347a8) set_value_pane_cp_vc

0x0f27,	// (0x000309e4) list_single_number_heading_pane_vc_g1_ParamLimits

0x0f27,	// (0x000309e4) list_single_number_heading_pane_vc_g1

0x0f33,	// (0x000309f0) list_single_number_heading_pane_vc_g2_ParamLimits

0x0f33,	// (0x000309f0) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0003f0c9) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0003f0c9) list_single_number_heading_pane_vc_g

0x0f3f,	// (0x000309fc) list_single_number_heading_pane_vc_t1_ParamLimits

0x0f3f,	// (0x000309fc) list_single_number_heading_pane_vc_t1

0x144b,	// (0x00030f08) list_single_number_heading_pane_vc_t2_ParamLimits

0x144b,	// (0x00030f08) list_single_number_heading_pane_vc_t2

0x145f,	// (0x00030f1c) list_single_number_heading_pane_vc_t3_ParamLimits

0x145f,	// (0x00030f1c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa71,	// (0x0003f52e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0003f52e) list_single_number_heading_pane_vc_t

0x0e99,	// (0x00030956) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0e99,	// (0x00030956) list_single_graphic_heading_pane_vc_g1

0x0f27,	// (0x000309e4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0f27,	// (0x000309e4) list_single_graphic_heading_pane_vc_g4

0x0f33,	// (0x000309f0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0f33,	// (0x000309f0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa22,	// (0x0003f4df) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa22,	// (0x0003f4df) list_single_graphic_heading_pane_vc_g

0x0f3f,	// (0x000309fc) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0f3f,	// (0x000309fc) list_single_graphic_heading_pane_vc_t1

0x1471,	// (0x00030f2e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x1471,	// (0x00030f2e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa78,	// (0x0003f535) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa78,	// (0x0003f535) list_single_graphic_heading_pane_vc_t

0x0f27,	// (0x000309e4) list_double2_pane_vc_g1_ParamLimits

0x0f27,	// (0x000309e4) list_double2_pane_vc_g1

0x0f33,	// (0x000309f0) list_double2_pane_vc_g2_ParamLimits

0x0f33,	// (0x000309f0) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x0003f0c9) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x0003f0c9) list_double2_pane_vc_g

0x1485,	// (0x00030f42) list_double2_pane_vc_t1_ParamLimits

0x1485,	// (0x00030f42) list_double2_pane_vc_t1

0x149b,	// (0x00030f58) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x149b,	// (0x00030f58) list_double2_large_graphic_pane_vc_g1

0x14a7,	// (0x00030f64) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x14a7,	// (0x00030f64) list_double2_large_graphic_pane_vc_g2

0x2733,	// (0x000321f0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2733,	// (0x000321f0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x0003f0e6) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x0003f0e6) list_double2_large_graphic_pane_vc_g

0x273f,	// (0x000321fc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x273f,	// (0x000321fc) list_double2_large_graphic_pane_vc_t1

0x2755,	// (0x00032212) list_double_time_pane_vc_g1_ParamLimits

0x2755,	// (0x00032212) list_double_time_pane_vc_g1

0x2761,	// (0x0003221e) list_double_time_pane_vc_g2_ParamLimits

0x2761,	// (0x0003221e) list_double_time_pane_vc_g2

0x0001,

0xfa7d,	// (0x0003f53a) list_double_time_pane_vc_g_ParamLimits

0xfa7d,	// (0x0003f53a) list_double_time_pane_vc_g

0x276d,	// (0x0003222a) list_double_time_pane_vc_t1_ParamLimits

0x276d,	// (0x0003222a) list_double_time_pane_vc_t1

0x2786,	// (0x00032243) list_double_time_pane_vc_t2_ParamLimits

0x2786,	// (0x00032243) list_double_time_pane_vc_t2

0x27c6,	// (0x00032283) list_double_time_pane_vc_t3_ParamLimits

0x27c6,	// (0x00032283) list_double_time_pane_vc_t3

0x27de,	// (0x0003229b) list_double_time_pane_vc_t4_ParamLimits

0x27de,	// (0x0003229b) list_double_time_pane_vc_t4

0x0003,

0xfa82,	// (0x0003f53f) list_double_time_pane_vc_t_ParamLimits

0xfa82,	// (0x0003f53f) list_double_time_pane_vc_t

0x0f27,	// (0x000309e4) list_double_pane_vc_g1_ParamLimits

0x0f27,	// (0x000309e4) list_double_pane_vc_g1

0x0f33,	// (0x000309f0) list_double_pane_vc_g2_ParamLimits

0x0f33,	// (0x000309f0) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x0003f0c9) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x0003f0c9) list_double_pane_vc_g

0x27f2,	// (0x000322af) list_double_pane_vc_t1_ParamLimits

0x27f2,	// (0x000322af) list_double_pane_vc_t1

0x2804,	// (0x000322c1) list_double_pane_vc_t2_ParamLimits

0x2804,	// (0x000322c1) list_double_pane_vc_t2

0x0001,

0xfa8b,	// (0x0003f548) list_double_pane_vc_t_ParamLimits

0xfa8b,	// (0x0003f548) list_double_pane_vc_t

0x0f27,	// (0x000309e4) list_double_number_pane_vc_g1_ParamLimits

0x0f27,	// (0x000309e4) list_double_number_pane_vc_g1

0x0f33,	// (0x000309f0) list_double_number_pane_vc_g2_ParamLimits

0x0f33,	// (0x000309f0) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x0003f0c9) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x0003f0c9) list_double_number_pane_vc_g

0x281c,	// (0x000322d9) list_double_number_pane_vc_t1_ParamLimits

0x281c,	// (0x000322d9) list_double_number_pane_vc_t1

0x2830,	// (0x000322ed) list_double_number_pane_vc_t2_ParamLimits

0x2830,	// (0x000322ed) list_double_number_pane_vc_t2

0x2804,	// (0x000322c1) list_double_number_pane_vc_t3_ParamLimits

0x2804,	// (0x000322c1) list_double_number_pane_vc_t3

0x0002,

0xfa90,	// (0x0003f54d) list_double_number_pane_vc_t_ParamLimits

0xfa90,	// (0x0003f54d) list_double_number_pane_vc_t

0x2842,	// (0x000322ff) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2842,	// (0x000322ff) list_double_large_graphic_pane_vc_g1

0x284e,	// (0x0003230b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x284e,	// (0x0003230b) list_double_large_graphic_pane_vc_g2

0x2733,	// (0x000321f0) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2733,	// (0x000321f0) list_double_large_graphic_pane_vc_g3

0x285d,	// (0x0003231a) list_double_large_graphic_pane_vc_g4_ParamLimits

0x285d,	// (0x0003231a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa97,	// (0x0003f554) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa97,	// (0x0003f554) list_double_large_graphic_pane_vc_g

0x2869,	// (0x00032326) list_double_large_graphic_pane_vc_t1_ParamLimits

0x2869,	// (0x00032326) list_double_large_graphic_pane_vc_t1

0x287b,	// (0x00032338) list_double_large_graphic_pane_vc_t2_ParamLimits

0x287b,	// (0x00032338) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa0,	// (0x0003f55d) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa0,	// (0x0003f55d) list_double_large_graphic_pane_vc_t

0x0f27,	// (0x000309e4) list_double_heading_pane_vc_g1_ParamLimits

0x0f27,	// (0x000309e4) list_double_heading_pane_vc_g1

0x0f33,	// (0x000309f0) list_double_heading_pane_vc_g2_ParamLimits

0x0f33,	// (0x000309f0) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0003f0c9) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0003f0c9) list_double_heading_pane_vc_g

0x2894,	// (0x00032351) list_double_heading_pane_vc_t1_ParamLimits

0x2894,	// (0x00032351) list_double_heading_pane_vc_t1

0x0f3f,	// (0x000309fc) list_double_heading_pane_vc_t2_ParamLimits

0x0f3f,	// (0x000309fc) list_double_heading_pane_vc_t2

0x0001,

0xfaa5,	// (0x0003f562) list_double_heading_pane_vc_t_ParamLimits

0xfaa5,	// (0x0003f562) list_double_heading_pane_vc_t

0x28a8,	// (0x00032365) list_double_graphic_pane_vc_g1_ParamLimits

0x28a8,	// (0x00032365) list_double_graphic_pane_vc_g1

0x28b8,	// (0x00032375) list_double_graphic_pane_vc_g2_ParamLimits

0x28b8,	// (0x00032375) list_double_graphic_pane_vc_g2

0x28c7,	// (0x00032384) list_double_graphic_pane_vc_g3_ParamLimits

0x28c7,	// (0x00032384) list_double_graphic_pane_vc_g3

0x0002,

0xfaaa,	// (0x0003f567) list_double_graphic_pane_vc_g_ParamLimits

0xfaaa,	// (0x0003f567) list_double_graphic_pane_vc_g

0x28d3,	// (0x00032390) list_double_graphic_pane_vc_t1_ParamLimits

0x28d3,	// (0x00032390) list_double_graphic_pane_vc_t1

0x2804,	// (0x000322c1) list_double_graphic_pane_vc_t2_ParamLimits

0x2804,	// (0x000322c1) list_double_graphic_pane_vc_t2

0x0001,

0xfab1,	// (0x0003f56e) list_double_graphic_pane_vc_t_ParamLimits

0xfab1,	// (0x0003f56e) list_double_graphic_pane_vc_t

0xf304,	// (0x0003edc1) aid_size_cell_fastswap

0xaf62,	// (0x0003aa1f) aid_size_cell_touch_ParamLimits

0xaf62,	// (0x0003aa1f) aid_size_cell_touch

0xf4f7,	// (0x0003efb4) popup_fast_swap_wide_window_ParamLimits

0xf4f7,	// (0x0003efb4) popup_fast_swap_wide_window

0xb0b1,	// (0x0003ab6e) touch_pane_ParamLimits

0xb0b1,	// (0x0003ab6e) touch_pane

0x30f3,	// (0x00032bb0) button_value_adjust_pane_cp2

0x30f3,	// (0x00032bb0) button_value_adjust_pane_cp4

0x05b7,	// (0x00030074) form_field_data_pane_cp2

0xb618,	// (0x0003b0d5) form_field_data_wide_pane_cp2

0x358c,	// (0x00033049) bg_scroll_pane_ParamLimits

0x0990,	// (0x0003044d) scroll_handle_pane_ParamLimits

0x09a4,	// (0x00030461) scroll_sc2_down_pane_ParamLimits

0x09a4,	// (0x00030461) scroll_sc2_down_pane

0x35bd,	// (0x0003307a) scroll_sc2_up_pane_ParamLimits

0x35bd,	// (0x0003307a) scroll_sc2_up_pane

0xda59,	// (0x0003d516) grid_wheel_folder_pane_g1_ParamLimits

0xda59,	// (0x0003d516) grid_wheel_folder_pane_g1

0x0bfa,	// (0x000306b7) clock_nsta_pane_cp2_ParamLimits

0x0bfa,	// (0x000306b7) clock_nsta_pane_cp2

0xc78b,	// (0x0003c248) listscroll_midp_pane_ParamLimits

0xc79c,	// (0x0003c259) midp_canvas_pane

0x4067,	// (0x00033b24) nsta_clock_indic_pane

0x40bd,	// (0x00033b7a) listscroll_form_pane_vc

0x40d9,	// (0x00033b96) listscroll_set_pane_vc_ParamLimits

0x40d9,	// (0x00033b96) listscroll_set_pane_vc

0xd0ae,	// (0x0003cb6b) clock_nsta_pane

0xd0d8,	// (0x0003cb95) indicator_nsta_pane

0x4b71,	// (0x0003462e) bg_popup_sub_pane_cp2_ParamLimits

0x4b85,	// (0x00034642) find_pane_cp2_ParamLimits

0x4b85,	// (0x00034642) find_pane_cp2

0x4b9b,	// (0x00034658) grid_toobar_pane_ParamLimits

0x4cf9,	// (0x000347b6) list_form_gen_pane_vc_ParamLimits

0x4cf9,	// (0x000347b6) list_form_gen_pane_vc

0x4d0f,	// (0x000347cc) scroll_pane_cp8_vc_ParamLimits

0x4d0f,	// (0x000347cc) scroll_pane_cp8_vc

0x4d8b,	// (0x00034848) data_form_wide_pane_vc_ParamLimits

0x4d8b,	// (0x00034848) data_form_wide_pane_vc

0x4d97,	// (0x00034854) form_field_data_wide_pane_vc_g1

0x4d9f,	// (0x0003485c) form_field_data_wide_pane_vc_t1_ParamLimits

0x4d9f,	// (0x0003485c) form_field_data_wide_pane_vc_t1

0x3107,	// (0x00032bc4) input_focus_pane_cp6_vc_ParamLimits

0x3107,	// (0x00032bc4) input_focus_pane_cp6_vc

0xd451,	// (0x0003cf0e) list_midp_pane_ParamLimits

0x640d,	// (0x00035eca) scroll_pane_cp16_ParamLimits

0x640d,	// (0x00035eca) scroll_pane_cp16

0x50c5,	// (0x00034b82) button_value_adjust_pane_ParamLimits

0x50c5,	// (0x00034b82) button_value_adjust_pane

0xd68e,	// (0x0003d14b) button_value_adjust_pane_cp6_ParamLimits

0xd68e,	// (0x0003d14b) button_value_adjust_pane_cp6

0xd7d0,	// (0x0003d28d) settings_code_pane_cp_ParamLimits

0xd7d0,	// (0x0003d28d) settings_code_pane_cp

0x21eb,	// (0x00031ca8) cell_touch_pane_g1

0x21eb,	// (0x00031ca8) cell_touch_pane_g2

0x0001,

0xf742,	// (0x0003f1ff) cell_touch_pane_g

0xd92e,	// (0x0003d3eb) cell_touch_pane_cp_ParamLimits

0xd92e,	// (0x0003d3eb) cell_touch_pane_cp

0xd94a,	// (0x0003d407) cell_touch_pane_ParamLimits

0xd94a,	// (0x0003d407) cell_touch_pane

0x21eb,	// (0x00031ca8) scroll_sc2_down_pane_g1

0x21eb,	// (0x00031ca8) scroll_sc2_up_pane_g1

0x21f5,	// (0x00031cb2) bg_set_opt_pane_cp4_vc

0x67ab,	// (0x00036268) list_set_graphic_pane_vc_g1_ParamLimits

0x67ab,	// (0x00036268) list_set_graphic_pane_vc_g1

0x67b7,	// (0x00036274) list_set_graphic_pane_vc_g2_ParamLimits

0x67b7,	// (0x00036274) list_set_graphic_pane_vc_g2

0x0001,

0xfa2e,	// (0x0003f4eb) list_set_graphic_pane_vc_g_ParamLimits

0xfa2e,	// (0x0003f4eb) list_set_graphic_pane_vc_g

0x67c3,	// (0x00036280) text_primary_small_cp13_vc_ParamLimits

0x67c3,	// (0x00036280) text_primary_small_cp13_vc

0x67db,	// (0x00036298) list_set_graphic_pane_vc_ParamLimits

0x67db,	// (0x00036298) list_set_graphic_pane_vc

0x21f5,	// (0x00031cb2) input_focus_pane_cp2_vc

0x21eb,	// (0x00031ca8) setting_code_pane_vc_g1

0x67ef,	// (0x000362ac) setting_code_pane_vc_t1

0x67fd,	// (0x000362ba) set_text_pane_vc_t1_ParamLimits

0x67fd,	// (0x000362ba) set_text_pane_vc_t1

0x21f5,	// (0x00031cb2) input_focus_pane_cp1_vc

0x681b,	// (0x000362d8) list_set_text_pane_vc

0x21eb,	// (0x00031ca8) setting_text_pane_vc_g1

0x21f5,	// (0x00031cb2) bg_set_opt_pane_cp2_vc

0x6825,	// (0x000362e2) setting_slider_graphic_pane_vc_g1

0x682d,	// (0x000362ea) setting_slider_graphic_pane_vc_t1

0x683b,	// (0x000362f8) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa33,	// (0x0003f4f0) setting_slider_graphic_pane_vc_t

0x6849,	// (0x00036306) slider_set_pane_cp_vc

0x6851,	// (0x0003630e) slider_set_pane_vc_g1

0x685a,	// (0x00036317) slider_set_pane_vc_g2

0x0006,

0xfa38,	// (0x0003f4f5) slider_set_pane_vc_g

0x316e,	// (0x00032c2b) set_opt_bg_pane_g1_copy1

0x3176,	// (0x00032c33) set_opt_bg_pane_g2_copy1

0x6886,	// (0x00036343) set_opt_bg_pane_g3_copy1

0x3186,	// (0x00032c43) set_opt_bg_pane_g4_copy1

0x318e,	// (0x00032c4b) set_opt_bg_pane_g5_copy1

0x3196,	// (0x00032c53) set_opt_bg_pane_g6_copy1

0x6890,	// (0x0003634d) set_opt_bg_pane_g7_copy1

0x689a,	// (0x00036357) set_opt_bg_pane_g8_copy1

0x68a4,	// (0x00036361) set_opt_bg_pane_g9_copy1

0x21f5,	// (0x00031cb2) bg_set_opt_pane_cp_vc

0x68ae,	// (0x0003636b) setting_slider_pane_vc_t1

0x682d,	// (0x000362ea) setting_slider_pane_vc_t2

0x683b,	// (0x000362f8) setting_slider_pane_vc_t3

0x0002,

0xfa47,	// (0x0003f504) setting_slider_pane_vc_t

0x6849,	// (0x00036306) slider_set_pane_vc

0x1060,	// (0x00030b1d) volume_set_pane_vc_g1

0x1069,	// (0x00030b26) volume_set_pane_vc_g2

0x1072,	// (0x00030b2f) volume_set_pane_vc_g3

0x107b,	// (0x00030b38) volume_set_pane_vc_g4

0x1084,	// (0x00030b41) volume_set_pane_vc_g5

0x108d,	// (0x00030b4a) volume_set_pane_vc_g6

0x1096,	// (0x00030b53) volume_set_pane_vc_g7

0x109f,	// (0x00030b5c) volume_set_pane_vc_g8

0x10a8,	// (0x00030b65) volume_set_pane_vc_g9

0x10b1,	// (0x00030b6e) volume_set_pane_vc_g10

0x0009,

0xfa4e,	// (0x0003f50b) volume_set_pane_vc_g

0x68bd,	// (0x0003637a) volume_set_pane_vc

0x68c5,	// (0x00036382) button_value_adjust_pane_cp1_vc

0x68cf,	// (0x0003638c) list_highlight_pane_cp2_vc

0x68d8,	// (0x00036395) list_set_pane_vc_ParamLimits

0x68d8,	// (0x00036395) list_set_pane_vc

0x6942,	// (0x000363ff) main_pane_set_vc_t1_ParamLimits

0x6942,	// (0x000363ff) main_pane_set_vc_t1

0x6957,	// (0x00036414) main_pane_set_vc_t2_ParamLimits

0x6957,	// (0x00036414) main_pane_set_vc_t2

0x6969,	// (0x00036426) main_pane_set_vc_t3_ParamLimits

0x6969,	// (0x00036426) main_pane_set_vc_t3

0x697d,	// (0x0003643a) main_pane_set_vc_t4_ParamLimits

0x697d,	// (0x0003643a) main_pane_set_vc_t4

0x0003,

0xfa63,	// (0x0003f520) main_pane_set_vc_t_ParamLimits

0xfa63,	// (0x0003f520) main_pane_set_vc_t

0x6991,	// (0x0003644e) setting_code_pane_vc_ParamLimits

0x6991,	// (0x0003644e) setting_code_pane_vc

0x69a2,	// (0x0003645f) setting_slider_graphic_pane_vc

0x69a2,	// (0x0003645f) setting_slider_pane_vc

0x69a2,	// (0x0003645f) setting_text_pane_vc

0x69a2,	// (0x0003645f) setting_volume_pane_vc

0x69ac,	// (0x00036469) scroll_pane_cp121_vc

0x30e1,	// (0x00032b9e) set_content_pane_vc

0x69ea,	// (0x000364a7) button_value_adjust_pane_g1

0x69f3,	// (0x000364b0) button_value_adjust_pane_g2

0x0001,

0xfab6,	// (0x0003f573) button_value_adjust_pane_g

0x69fc,	// (0x000364b9) form_field_slider_wide_pane_vc_t1_ParamLimits

0x69fc,	// (0x000364b9) form_field_slider_wide_pane_vc_t1

0x6a10,	// (0x000364cd) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6a10,	// (0x000364cd) form_field_slider_wide_pane_vc_t2

0x0001,

0xfabb,	// (0x0003f578) form_field_slider_wide_pane_vc_t_ParamLimits

0xfabb,	// (0x0003f578) form_field_slider_wide_pane_vc_t

0x2551,	// (0x0003200e) input_focus_pane_cp10_vc_ParamLimits

0x2551,	// (0x0003200e) input_focus_pane_cp10_vc

0x6a22,	// (0x000364df) slider_cont_pane_cp1_vc_ParamLimits

0x6a22,	// (0x000364df) slider_cont_pane_cp1_vc

0x6851,	// (0x0003630e) slider_form_pane_g1_cp2

0x685a,	// (0x00036317) slider_form_pane_g2_cp2

0x6a3b,	// (0x000364f8) form_field_slider_pane_vc_t3

0x6a49,	// (0x00036506) form_field_slider_pane_vc_t4

0x6a57,	// (0x00036514) slider_form_pane_vc_ParamLimits

0x6a57,	// (0x00036514) slider_form_pane_vc

0x6a64,	// (0x00036521) form_field_slider_pane_vc_t1_ParamLimits

0x6a64,	// (0x00036521) form_field_slider_pane_vc_t1

0x6a10,	// (0x000364cd) form_field_slider_pane_vc_t2_ParamLimits

0x6a10,	// (0x000364cd) form_field_slider_pane_vc_t2

0x0001,

0xfacb,	// (0x0003f588) form_field_slider_pane_vc_t_ParamLimits

0xfacb,	// (0x0003f588) form_field_slider_pane_vc_t

0x2551,	// (0x0003200e) input_focus_pane_cp9_vc_ParamLimits

0x2551,	// (0x0003200e) input_focus_pane_cp9_vc

0x6a80,	// (0x0003653d) slider_cont_pane_vc_ParamLimits

0x6a80,	// (0x0003653d) slider_cont_pane_vc

0x6a92,	// (0x0003654f) list_form_graphic_pane_cp_vc_ParamLimits

0x6a92,	// (0x0003654f) list_form_graphic_pane_cp_vc

0x4d97,	// (0x00034854) form_field_popup_wide_pane_vc_g1

0x6aa7,	// (0x00036564) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6aa7,	// (0x00036564) form_field_popup_wide_pane_vc_t1

0x3107,	// (0x00032bc4) input_focus_pane_cp8_vc_ParamLimits

0x3107,	// (0x00032bc4) input_focus_pane_cp8_vc

0x6abe,	// (0x0003657b) list_form_wide_pane_vc_ParamLimits

0x6abe,	// (0x0003657b) list_form_wide_pane_vc

0x6aca,	// (0x00036587) list_form_graphic_pane_vc_g1

0x6ad2,	// (0x0003658f) list_form_graphic_pane_vc_t1_ParamLimits

0x6ad2,	// (0x0003658f) list_form_graphic_pane_vc_t1

0x22d5,	// (0x00031d92) list_highlight_pane_cp5_vc_ParamLimits

0x22d5,	// (0x00031d92) list_highlight_pane_cp5_vc

0x6aee,	// (0x000365ab) list_form_graphic_pane_vc_ParamLimits

0x6aee,	// (0x000365ab) list_form_graphic_pane_vc

0x4d97,	// (0x00034854) form_field_popup_pane_vc_g1

0x6b04,	// (0x000365c1) form_field_popup_pane_vc_t1_ParamLimits

0x6b04,	// (0x000365c1) form_field_popup_pane_vc_t1

0x3107,	// (0x00032bc4) input_focus_pane_cp7_vc_ParamLimits

0x3107,	// (0x00032bc4) input_focus_pane_cp7_vc

0x6b1b,	// (0x000365d8) list_form_pane_vc_ParamLimits

0x6b1b,	// (0x000365d8) list_form_pane_vc

0x6b27,	// (0x000365e4) data_form_pane_vc_t1_ParamLimits

0x6b27,	// (0x000365e4) data_form_pane_vc_t1

0x316e,	// (0x00032c2b) input_focus_pane_vc_g1

0x3176,	// (0x00032c33) input_focus_pane_vc_g2

0x317e,	// (0x00032c3b) input_focus_pane_vc_g3

0x3186,	// (0x00032c43) input_focus_pane_vc_g4

0x318e,	// (0x00032c4b) input_focus_pane_vc_g5

0x3196,	// (0x00032c53) input_focus_pane_vc_g6

0x319e,	// (0x00032c5b) input_focus_pane_vc_g7

0x31a6,	// (0x00032c63) input_focus_pane_vc_g8

0x31ae,	// (0x00032c6b) input_focus_pane_vc_g9

0x21eb,	// (0x00031ca8) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x0003f188) input_focus_pane_vc_g

0x4d8b,	// (0x00034848) data_form_pane_vc_ParamLimits

0x4d8b,	// (0x00034848) data_form_pane_vc

0x4d97,	// (0x00034854) form_field_data_pane_vc_g1

0x6b44,	// (0x00036601) form_field_data_pane_vc_t1_ParamLimits

0x6b44,	// (0x00036601) form_field_data_pane_vc_t1

0x3107,	// (0x00032bc4) input_focus_pane_vc_ParamLimits

0x3107,	// (0x00032bc4) input_focus_pane_vc

0x6b5e,	// (0x0003661b) button_value_adjust_pane_cp3_vc

0x6b66,	// (0x00036623) button_value_adjust_pane_cp5_vc

0x6b6e,	// (0x0003662b) form_field_data_pane_vc_ParamLimits

0x6b6e,	// (0x0003662b) form_field_data_pane_vc

0x6b89,	// (0x00036646) form_field_data_pane_vc_cp2

0x6b91,	// (0x0003664e) form_field_data_wide_pane_vc_ParamLimits

0x6b91,	// (0x0003664e) form_field_data_wide_pane_vc

0x6bab,	// (0x00036668) form_field_data_wide_pane_vc_cp2

0x6bb3,	// (0x00036670) form_field_popup_pane_vc_ParamLimits

0x6bb3,	// (0x00036670) form_field_popup_pane_vc

0x6bce,	// (0x0003668b) form_field_popup_wide_pane_vc_ParamLimits

0x6bce,	// (0x0003668b) form_field_popup_wide_pane_vc

0x6be8,	// (0x000366a5) form_field_slider_pane_vc_ParamLimits

0x6be8,	// (0x000366a5) form_field_slider_pane_vc

0x6bfb,	// (0x000366b8) form_field_slider_wide_pane_vc_ParamLimits

0x6bfb,	// (0x000366b8) form_field_slider_wide_pane_vc

0xd968,	// (0x0003d425) grid_touch_1_pane_ParamLimits

0xd968,	// (0x0003d425) grid_touch_1_pane

0xd97c,	// (0x0003d439) grid_touch_2_pane_ParamLimits

0xd97c,	// (0x0003d439) grid_touch_2_pane

0x6cd2,	// (0x0003678f) touch_pane_g1_ParamLimits

0x6cd2,	// (0x0003678f) touch_pane_g1

0x6c34,	// (0x000366f1) cell_app_pane_cp_wide_ParamLimits

0x6c34,	// (0x000366f1) cell_app_pane_cp_wide

0x6c45,	// (0x00036702) grid_popup_fast_wide_pane_ParamLimits

0x6c45,	// (0x00036702) grid_popup_fast_wide_pane

0x6c59,	// (0x00036716) scroll_pane_cp19_ParamLimits

0x6c59,	// (0x00036716) scroll_pane_cp19

0x21f5,	// (0x00031cb2) bg_popup_window_pane_cp20

0x6c6d,	// (0x0003672a) listscroll_popup_fast_wide_pane

0x32dd,	// (0x00032d9a) grid_indicator_nsta_pane

0x6c75,	// (0x00036732) clock_nsta_pane_g1

0x6c7e,	// (0x0003673b) clock_nsta_pane_t1

0xd9a8,	// (0x0003d465) cell_indicator_nsta_pane_ParamLimits

0xd9a8,	// (0x0003d465) cell_indicator_nsta_pane

0x6cd2,	// (0x0003678f) cell_indicator_nsta_pane_g1

0xd9c5,	// (0x0003d482) cell_indicator_nsta_pane_g2

0x0001,

0xfad5,	// (0x0003f592) cell_indicator_nsta_pane_g

0x6cf5,	// (0x000367b2) clock_nsta_pane_cp

0x6cfd,	// (0x000367ba) indicator_nsta_pane_cp

0x6d05,	// (0x000367c2) nsta_clock_indic_pane_g1

0x23a1,	// (0x00031e5e) grid_indicator_pane

0x36af,	// (0x0003316c) scroll_pane_cp29

0x0b46,	// (0x00030603) indicator_nsta_pane_cp2_ParamLimits

0x0b46,	// (0x00030603) indicator_nsta_pane_cp2

0x22d5,	// (0x00031d92) main_apps_wheel_pane

0x4f56,	// (0x00034a13) form_midp_field_text_pane_ParamLimits

0x50a5,	// (0x00034b62) scroll_bar_cp050_ParamLimits

0x6d3d,	// (0x000367fa) cell_indicator_pane_ParamLimits

0x6d3d,	// (0x000367fa) cell_indicator_pane

0x6d55,	// (0x00036812) cell_indicator_pane_g1

0xd9db,	// (0x0003d498) grid_wheel_folder_pane_ParamLimits

0xd9db,	// (0x0003d498) grid_wheel_folder_pane

0xd9e9,	// (0x0003d4a6) list_wheel_apps_pane_ParamLimits

0xd9e9,	// (0x0003d4a6) list_wheel_apps_pane

0xd9f7,	// (0x0003d4b4) main_apps_wheel_pane_g1_ParamLimits

0xd9f7,	// (0x0003d4b4) main_apps_wheel_pane_g1

0xda07,	// (0x0003d4c4) main_apps_wheel_pane_g2_ParamLimits

0xda07,	// (0x0003d4c4) main_apps_wheel_pane_g2

0x0001,

0xfae4,	// (0x0003f5a1) main_apps_wheel_pane_g_ParamLimits

0xfae4,	// (0x0003f5a1) main_apps_wheel_pane_g

0xda17,	// (0x0003d4d4) main_apps_wheel_pane_t1_ParamLimits

0xda17,	// (0x0003d4d4) main_apps_wheel_pane_t1

0xda2f,	// (0x0003d4ec) list_wheel_apps_pane_g1

0xda37,	// (0x0003d4f4) list_wheel_apps_pane_g2

0xda3f,	// (0x0003d4fc) list_wheel_apps_pane_g3

0xda47,	// (0x0003d504) list_wheel_apps_pane_g4

0xda4f,	// (0x0003d50c) list_wheel_apps_pane_g5

0x0004,

0xfae9,	// (0x0003f5a6) list_wheel_apps_pane_g

0x3be1,	// (0x0003369e) navi_icon_text_pane

0xcfa7,	// (0x0003ca64) aid_fill_nsta

0xda6c,	// (0x0003d529) navi_icon_text_pane_g1

0xda78,	// (0x0003d535) navi_icon_text_pane_t1

0xc773,	// (0x0003c230) list_set_graphic_pane_t1_ParamLimits

0xc773,	// (0x0003c230) list_set_graphic_pane_t1

0x57c5,	// (0x00035282) popup_midp_note_alarm_window_t6_ParamLimits

0x57c5,	// (0x00035282) popup_midp_note_alarm_window_t6

0x57d7,	// (0x00035294) popup_midp_note_alarm_window_t7_ParamLimits

0x57d7,	// (0x00035294) popup_midp_note_alarm_window_t7

0x57e9,	// (0x000352a6) popup_midp_note_alarm_window_t8_ParamLimits

0x57e9,	// (0x000352a6) popup_midp_note_alarm_window_t8

0x57fb,	// (0x000352b8) popup_midp_note_alarm_window_t9_ParamLimits

0x57fb,	// (0x000352b8) popup_midp_note_alarm_window_t9

0x580d,	// (0x000352ca) popup_midp_note_alarm_window_t10_ParamLimits

0x580d,	// (0x000352ca) popup_midp_note_alarm_window_t10

0x581f,	// (0x000352dc) popup_midp_note_alarm_window_t11_ParamLimits

0x581f,	// (0x000352dc) popup_midp_note_alarm_window_t11

0x5831,	// (0x000352ee) scroll_pane_cp17_ParamLimits

0x5831,	// (0x000352ee) scroll_pane_cp17

0x1060,	// (0x00030b1d) volume_small_pane_cp_g1

0x14b3,	// (0x00030f70) volume_small_pane_cp_g2

0x14bc,	// (0x00030f79) volume_small_pane_cp_g3

0x14c5,	// (0x00030f82) volume_small_pane_cp_g4

0x14ce,	// (0x00030f8b) volume_small_pane_cp_g5

0x14d7,	// (0x00030f94) volume_small_pane_cp_g6

0x14e0,	// (0x00030f9d) volume_small_pane_cp_g7

0x14e9,	// (0x00030fa6) volume_small_pane_cp_g8

0x14f2,	// (0x00030faf) volume_small_pane_cp_g9

0x14fb,	// (0x00030fb8) volume_small_pane_cp_g10

0x3e42,	// (0x000338ff) midp_ticker_pane_g1_ParamLimits

0x3e4e,	// (0x0003390b) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x0003f250) midp_ticker_pane_g_ParamLimits

0xc833,	// (0x0003c2f0) midp_ticker_pane_t1_ParamLimits

0xcfc7,	// (0x0003ca84) aid_fill_nsta_2

0x5091,	// (0x00034b4e) list_form2_midp_pane

0x61ee,	// (0x00035cab) midp_editing_number_pane_ParamLimits

0x61fd,	// (0x00035cba) midp_ticker_pane_ParamLimits

0x6e4e,	// (0x0003690b) form2_midp_field_pane

0x6e72,	// (0x0003692f) scroll_pane_cp51

0x6e92,	// (0x0003694f) form2_midp_button_pane_ParamLimits

0x6e92,	// (0x0003694f) form2_midp_button_pane

0x6ea4,	// (0x00036961) form2_midp_content_pane_ParamLimits

0x6ea4,	// (0x00036961) form2_midp_content_pane

0x6ebe,	// (0x0003697b) form2_midp_field_choice_group_pane

0x6ec6,	// (0x00036983) form2_midp_field_pane_g1

0x6ece,	// (0x0003698b) form2_midp_field_pane_g2

0x6ed6,	// (0x00036993) form2_midp_field_pane_g3

0x6ede,	// (0x0003699b) form2_midp_field_pane_g4

0x0003,

0xfb0e,	// (0x0003f5cb) form2_midp_field_pane_g

0x6ee6,	// (0x000369a3) form2_midp_gauge_slider_pane

0x6eee,	// (0x000369ab) form2_midp_gauge_wait_pane

0x6ef6,	// (0x000369b3) form2_midp_image_pane_ParamLimits

0x6ef6,	// (0x000369b3) form2_midp_image_pane

0x6f11,	// (0x000369ce) form2_midp_label_pane_ParamLimits

0x6f11,	// (0x000369ce) form2_midp_label_pane

0xdaa6,	// (0x0003d563) form2_midp_label_pane_cp_ParamLimits

0xdaa6,	// (0x0003d563) form2_midp_label_pane_cp

0x6f51,	// (0x00036a0e) form2_midp_string_pane_ParamLimits

0x6f51,	// (0x00036a0e) form2_midp_string_pane

0x28e5,	// (0x000323a2) form2_midp_text_pane_ParamLimits

0x28e5,	// (0x000323a2) form2_midp_text_pane

0x6f63,	// (0x00036a20) form2_midp_time_pane

0x6f73,	// (0x00036a30) input_focus_pane_cp51_ParamLimits

0x6f73,	// (0x00036a30) input_focus_pane_cp51

0x6f8b,	// (0x00036a48) form2_midp_label_pane_t1_ParamLimits

0x6f8b,	// (0x00036a48) form2_midp_label_pane_t1

0x2906,	// (0x000323c3) form2_mdip_text_pane_t1_ParamLimits

0x2906,	// (0x000323c3) form2_mdip_text_pane_t1

0x292a,	// (0x000323e7) form2_midp_time_pane_t1

0x6fd9,	// (0x00036a96) form2_midp_gauge_slider_pane_t1

0xdac7,	// (0x0003d584) form2_midp_gauge_slider_pane_t2

0xdad9,	// (0x0003d596) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb17,	// (0x0003f5d4) form2_midp_gauge_slider_pane_t

0x700f,	// (0x00036acc) form2_midp_slider_pane

0x701b,	// (0x00036ad8) form2_midp_gauge_wait_pane_t1

0x7029,	// (0x00036ae6) form2_midp_wait_pane_ParamLimits

0x7029,	// (0x00036ae6) form2_midp_wait_pane

0xd3e0,	// (0x0003ce9d) list_single_2graphic_pane_cp4_ParamLimits

0xd3e0,	// (0x0003ce9d) list_single_2graphic_pane_cp4

0xdaeb,	// (0x0003d5a8) list_single_midp_graphic_pane_cp_ParamLimits

0xdaeb,	// (0x0003d5a8) list_single_midp_graphic_pane_cp

0x21f5,	// (0x00031cb2) list_highlight_pane_cp20

0x7078,	// (0x00036b35) list_single_2graphic_pane_g1_cp4

0x668d,	// (0x0003614a) list_single_2graphic_pane_g2_cp4

0x7080,	// (0x00036b3d) list_single_2graphic_pane_t1_cp4

0x22d5,	// (0x00031d92) list_highlight_pane_cp21

0x70d1,	// (0x00036b8e) list_single_midp_graphic_pane_g4_cp

0x70e0,	// (0x00036b9d) list_single_midp_graphic_pane_t1_cp

0xdb0c,	// (0x0003d5c9) form2_mdip_string_pane_t1_ParamLimits

0xdb0c,	// (0x0003d5c9) form2_mdip_string_pane_t1

0x21f5,	// (0x00031cb2) bg_wml_button_pane_cp2

0x21eb,	// (0x00031ca8) form2_midp_image_pane_g1

0x033a,	// (0x0002fdf7) list_double_large_graphic_pane_g5_ParamLimits

0x033a,	// (0x0002fdf7) list_double_large_graphic_pane_g5

0xc78b,	// (0x0003c248) midp_form_pane_ParamLimits

0x22d5,	// (0x00031d92) main_apps_wheel_pane_ParamLimits

0xccbf,	// (0x0003c77c) popup_preview_window_ParamLimits

0xccbf,	// (0x0003c77c) popup_preview_window

0x46bb,	// (0x00034178) popup_touch_info_window_ParamLimits

0x46bb,	// (0x00034178) popup_touch_info_window

0x46dd,	// (0x0003419a) popup_touch_menu_window_ParamLimits

0x46dd,	// (0x0003419a) popup_touch_menu_window

0x21e1,	// (0x00031c9e) bg_popup_sub_pane_cp6

0x719a,	// (0x00036c57) list_touch_menu_pane

0x71a2,	// (0x00036c5f) list_single_touch_menu_pane_ParamLimits

0x71a2,	// (0x00036c5f) list_single_touch_menu_pane

0x71bd,	// (0x00036c7a) list_single_touch_menu_pane_t1

0x22d5,	// (0x00031d92) bg_popup_sub_pane_cp7_ParamLimits

0x22d5,	// (0x00031d92) bg_popup_sub_pane_cp7

0x71cb,	// (0x00036c88) heading_sub_pane

0x71d3,	// (0x00036c90) list_touch_info_pane_ParamLimits

0x71d3,	// (0x00036c90) list_touch_info_pane

0x71e2,	// (0x00036c9f) list_single_touch_info_pane_ParamLimits

0x71e2,	// (0x00036c9f) list_single_touch_info_pane

0x71f4,	// (0x00036cb1) list_single_touch_info_pane_t1

0x7202,	// (0x00036cbf) list_single_touch_info_pane_t2

0x0001,

0xfb25,	// (0x0003f5e2) list_single_touch_info_pane_t

0x3d65,	// (0x00033822) bg_popup_heading_pane_cp

0x7210,	// (0x00036ccd) heading_sub_pane_t1

0x4d25,	// (0x000347e2) bg_popup_preview_window_pane_cp_ParamLimits

0x4d25,	// (0x000347e2) bg_popup_preview_window_pane_cp

0x71cb,	// (0x00036c88) heading_preview_pane

0x71d3,	// (0x00036c90) list_preview_pane_ParamLimits

0x71d3,	// (0x00036c90) list_preview_pane

0x721e,	// (0x00036cdb) popup_preview_window_g1

0x71e2,	// (0x00036c9f) list_single_preview_pane_ParamLimits

0x71e2,	// (0x00036c9f) list_single_preview_pane

0x7226,	// (0x00036ce3) list_single_preview_pane_g1

0x722e,	// (0x00036ceb) list_single_preview_pane_t1

0x71f4,	// (0x00036cb1) list_single_preview_pane_t2

0x0001,

0xfb2a,	// (0x0003f5e7) list_single_preview_pane_t

0x723c,	// (0x00036cf9) bg_popup_heading_pane_cp2_ParamLimits

0x723c,	// (0x00036cf9) bg_popup_heading_pane_cp2

0x7252,	// (0x00036d0f) heading_preview_pane_g1

0x725a,	// (0x00036d17) heading_preview_pane_t1_ParamLimits

0x725a,	// (0x00036d17) heading_preview_pane_t1

0x23c4,	// (0x00031e81) soft_indicator_pane_t1_ParamLimits

0x307a,	// (0x00032b37) scroll_pane_ParamLimits

0x35ab,	// (0x00033068) scroll_sc2_left_pane

0x35b4,	// (0x00033071) scroll_sc2_right_pane

0x35d3,	// (0x00033090) scroll_bg_pane_g1_ParamLimits

0x35e8,	// (0x000330a5) scroll_bg_pane_g2_ParamLimits

0x3600,	// (0x000330bd) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x0003f1df) scroll_bg_pane_g_ParamLimits

0x35d3,	// (0x00033090) scroll_handle_pane_g1_ParamLimits

0x3622,	// (0x000330df) scroll_handle_pane_g2_ParamLimits

0x3600,	// (0x000330bd) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x0003f1e6) scroll_handle_pane_g_ParamLimits

0x4113,	// (0x00033bd0) popup_choice_list_window_ParamLimits

0x4113,	// (0x00033bd0) popup_choice_list_window

0x4b7d,	// (0x0003463a) choice_list_pane

0x4bff,	// (0x000346bc) cell_toolbar_pane_t1

0x4c27,	// (0x000346e4) toolbar_button_pane_ParamLimits

0x5d01,	// (0x000357be) ai_gene_pane_1_t2_ParamLimits

0x5d01,	// (0x000357be) ai_gene_pane_1_t2

0x0001,

0xf941,	// (0x0003f3fe) ai_gene_pane_1_t_ParamLimits

0xf941,	// (0x0003f3fe) ai_gene_pane_1_t

0x7277,	// (0x00036d34) scroll_sc2_left_pane_g1

0x7277,	// (0x00036d34) scroll_sc2_right_pane_g1

0x40eb,	// (0x00033ba8) bg_popup_sub_pane_cp10

0x7281,	// (0x00036d3e) list_choice_list_pane

0x7298,	// (0x00036d55) list_single_choice_list_pane_ParamLimits

0x7298,	// (0x00036d55) list_single_choice_list_pane

0x72ac,	// (0x00036d69) list_single_choice_list_pane_g1

0x72b4,	// (0x00036d71) list_single_choice_list_pane_t1_ParamLimits

0x72b4,	// (0x00036d71) list_single_choice_list_pane_t1

0x72c9,	// (0x00036d86) choice_list_pane_g1

0x72d1,	// (0x00036d8e) choice_list_pane_t1

0x21e1,	// (0x00031c9e) input_focus_pane_cp11

0x3485,	// (0x00032f42) title_pane_stacon_g2_ParamLimits

0x3485,	// (0x00032f42) title_pane_stacon_g2

0x0002,

0xf708,	// (0x0003f1c5) title_pane_stacon_g_ParamLimits

0xf708,	// (0x0003f1c5) title_pane_stacon_g

0x3d65,	// (0x00033822) cursor_press_pane

0xc940,	// (0x0003c3fd) popup_fep_hwr_window_ParamLimits

0xc940,	// (0x0003c3fd) popup_fep_hwr_window

0x4253,	// (0x00033d10) popup_fep_vkb_window_ParamLimits

0x4253,	// (0x00033d10) popup_fep_vkb_window

0x72df,	// (0x00036d9c) cursor_press_pane_g1

0x0002,

0xfb53,	// (0x0003f610) fep_vkb_side_pane_g_ParamLimits

0x153d,	// (0x00030ffa) fep_hwr_candidate_pane_ParamLimits

0x153d,	// (0x00030ffa) fep_hwr_candidate_pane

0x1567,	// (0x00031024) fep_hwr_side_pane_ParamLimits

0x1567,	// (0x00031024) fep_hwr_side_pane

0x1589,	// (0x00031046) fep_hwr_top_pane_ParamLimits

0x1589,	// (0x00031046) fep_hwr_top_pane

0x15a1,	// (0x0003105e) fep_hwr_write_pane_ParamLimits

0x15a1,	// (0x0003105e) fep_hwr_write_pane

0xfb53,	// (0x0003f610) fep_vkb_side_pane_g

0x72e7,	// (0x00036da4) fep_hwr_top_pane_g1

0x72f9,	// (0x00036db6) fep_hwr_top_pane_g2

0x15db,	// (0x00031098) fep_hwr_top_pane_g3

0x0002,

0xfb2f,	// (0x0003f5ec) fep_hwr_top_pane_g

0x15f0,	// (0x000310ad) fep_hwr_top_text_pane

0x3777,	// (0x00033234) fep_hwr_top_text_pane_g1

0x732f,	// (0x00036dec) fep_hwr_top_text_pane_t1

0x16fa,	// (0x000311b7) fep_hwr_candidate_pane_g1

0x757a,	// (0x00037037) fep_vkb_keypad_pane_g3_ParamLimits

0x757a,	// (0x00037037) fep_vkb_keypad_pane_g3

0x75a6,	// (0x00037063) fep_vkb_keypad_pane_g4_ParamLimits

0x75a6,	// (0x00037063) fep_vkb_keypad_pane_g4

0x761d,	// (0x000370da) fep_vkb_bottom_pane_g2_ParamLimits

0x761d,	// (0x000370da) fep_vkb_bottom_pane_g2

0x0001,

0xfb5a,	// (0x0003f617) fep_vkb_bottom_pane_g_ParamLimits

0xfb5a,	// (0x0003f617) fep_vkb_bottom_pane_g

0x7277,	// (0x00036d34) cell_vkb_side_pane_g2

0x0001,

0xfb64,	// (0x0003f621) cell_vkb_side_pane_g

0x76a8,	// (0x00037165) cell_vkb_side_pane_t1

0x76b6,	// (0x00037173) cell_vkb_side_pane_t1_copy1

0x7277,	// (0x00036d34) bg_fep_vkb_candidate_pane_g2

0x77fa,	// (0x000372b7) cell_vkb_candidate_pane_ParamLimits

0x733d,	// (0x00036dfa) aid_size_cell_vkb_ParamLimits

0x733d,	// (0x00036dfa) aid_size_cell_vkb

0x77fa,	// (0x000372b7) cell_vkb_candidate_pane

0x1721,	// (0x000311de) bg_popup_fep_shadow_pane_g1

0xdba8,	// (0x0003d665) fep_vkb_bottom_pane_ParamLimits

0xdba8,	// (0x0003d665) fep_vkb_bottom_pane

0x740c,	// (0x00036ec9) fep_vkb_candidate_pane_ParamLimits

0x740c,	// (0x00036ec9) fep_vkb_candidate_pane

0xdbd4,	// (0x0003d691) fep_vkb_keypad_pane_ParamLimits

0xdbd4,	// (0x0003d691) fep_vkb_keypad_pane

0xdbfb,	// (0x0003d6b8) fep_vkb_side_pane_ParamLimits

0xdbfb,	// (0x0003d6b8) fep_vkb_side_pane

0xdc37,	// (0x0003d6f4) fep_vkb_top_pane_ParamLimits

0xdc37,	// (0x0003d6f4) fep_vkb_top_pane

0x74d3,	// (0x00036f90) fep_vkb_top_pane_g1_ParamLimits

0x74d3,	// (0x00036f90) fep_vkb_top_pane_g1

0x74e2,	// (0x00036f9f) fep_vkb_top_pane_g2_ParamLimits

0x74e2,	// (0x00036f9f) fep_vkb_top_pane_g2

0x74f1,	// (0x00036fae) fep_vkb_top_pane_g3_ParamLimits

0x74f1,	// (0x00036fae) fep_vkb_top_pane_g3

0x0003,

0xfb4a,	// (0x0003f607) fep_vkb_top_pane_g_ParamLimits

0xfb4a,	// (0x0003f607) fep_vkb_top_pane_g

0x750f,	// (0x00036fcc) fep_vkb_top_text_pane_ParamLimits

0x750f,	// (0x00036fcc) fep_vkb_top_text_pane

0xdc73,	// (0x0003d730) fep_vkb_side_pane_g1_ParamLimits

0xdc73,	// (0x0003d730) fep_vkb_side_pane_g1

0x7569,	// (0x00037026) grid_vkb_side_pane_ParamLimits

0x7569,	// (0x00037026) grid_vkb_side_pane

0x1729,	// (0x000311e6) bg_popup_fep_shadow_pane_g2

0x1732,	// (0x000311ef) bg_popup_fep_shadow_pane_g3

0x173a,	// (0x000311f7) bg_popup_fep_shadow_pane_g4

0x1743,	// (0x00031200) bg_popup_fep_shadow_pane_g5

0x174d,	// (0x0003120a) bg_popup_fep_shadow_pane_g6

0x1755,	// (0x00031212) bg_popup_fep_shadow_pane_g7

0x3186,	// (0x00032c43) bg_popup_fep_shadow_pane_g8

0x75c8,	// (0x00037085) grid_vkb_keypad_number_pane_ParamLimits

0x75c8,	// (0x00037085) grid_vkb_keypad_number_pane

0x75dc,	// (0x00037099) grid_vkb_keypad_pane_ParamLimits

0x75dc,	// (0x00037099) grid_vkb_keypad_pane

0x7602,	// (0x000370bf) fep_vkb_bottom_pane_g1_ParamLimits

0x7602,	// (0x000370bf) fep_vkb_bottom_pane_g1

0x762b,	// (0x000370e8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x762b,	// (0x000370e8) grid_vkb_keypad_bottom_left_pane

0x7640,	// (0x000370fd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7640,	// (0x000370fd) grid_vkb_keypad_bottom_right_pane

0x7655,	// (0x00037112) fep_vkb_top_text_pane_g1

0xdcba,	// (0x0003d777) fep_vkb_top_text_pane_t1

0xdccc,	// (0x0003d789) cell_vkb_side_pane_ParamLimits

0xdccc,	// (0x0003d789) cell_vkb_side_pane

0x7277,	// (0x00036d34) cell_vkb_side_pane_g1

0x76c4,	// (0x00037181) cell_vkb_keypad_pane_ParamLimits

0x76c4,	// (0x00037181) cell_vkb_keypad_pane

0x7751,	// (0x0003720e) cell_vkb_keypad_pane_g1

0x0008,

0xfb77,	// (0x0003f634) bg_popup_fep_shadow_pane_g

0x1767,	// (0x00031224) cell_hwr_side_pane_g1

0x1767,	// (0x00031224) cell_hwr_side_pane_g2

0x775b,	// (0x00037218) cell_vkb_keypad_pane_t1

0xdce2,	// (0x0003d79f) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdce2,	// (0x0003d79f) cell_vkb_keypad_bottom_left_pane

0xdcf7,	// (0x0003d7b4) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdcf7,	// (0x0003d7b4) cell_vkb_keypad_bottom_right_pane

0x7277,	// (0x00036d34) cell_vkb_keypad_bottom_left_pane_g1

0x7277,	// (0x00036d34) cell_vkb_keypad_bottom_right_pane_g1

0x77bf,	// (0x0003727c) cell_vkb_keypad_number_pane_ParamLimits

0x77bf,	// (0x0003727c) cell_vkb_keypad_number_pane

0x77de,	// (0x0003729b) cell_vkb_keypad_number_pane_g1

0x77e8,	// (0x000372a5) cell_vkb_keypad_number_pane_g2

0x77f1,	// (0x000372ae) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb69,	// (0x0003f626) cell_vkb_keypad_number_pane_g

0x775b,	// (0x00037218) cell_vkb_keypad_number_pane_t1

0x781b,	// (0x000372d8) fep_vkb_candidate_pane_g1

0x0001,

0xfb8a,	// (0x0003f647) cell_hwr_side_pane_g

0x7834,	// (0x000372f1) cell_hwr_side_pane_t1

0x1771,	// (0x0003122e) cell_hwr_side_pane_t1_copy1

0x177f,	// (0x0003123c) cell_hwr_candidate_pane_g1

0x17ae,	// (0x0003126b) cell_hwr_candidate_pane_t1

0x7277,	// (0x00036d34) cell_vkb_candidate_pane_g2

0x7878,	// (0x00037335) cell_vkb_candidate_pane_t1

0x1504,	// (0x00030fc1) bg_popup_fep_shadow_pane_ParamLimits

0x1504,	// (0x00030fc1) bg_popup_fep_shadow_pane

0x15bb,	// (0x00031078) bg_fep_hwr_top_pane_g4

0x730b,	// (0x00036dc8) bg_hwr_side_pane_g1_ParamLimits

0x730b,	// (0x00036dc8) bg_hwr_side_pane_g1

0xbbb0,	// (0x0003b66d) cell_hwr_side_pane_ParamLimits

0xbbb0,	// (0x0003b66d) cell_hwr_side_pane

0x166b,	// (0x00031128) fep_hwr_write_pane_g1_ParamLimits

0x166b,	// (0x00031128) fep_hwr_write_pane_g1

0x1678,	// (0x00031135) fep_hwr_write_pane_g2_ParamLimits

0x1678,	// (0x00031135) fep_hwr_write_pane_g2

0x1685,	// (0x00031142) fep_hwr_write_pane_g3_ParamLimits

0x1685,	// (0x00031142) fep_hwr_write_pane_g3

0xbbd0,	// (0x0003b68d) fep_hwr_write_pane_g4_ParamLimits

0xbbd0,	// (0x0003b68d) fep_hwr_write_pane_g4

0x0005,

0xfb36,	// (0x0003f5f3) fep_hwr_write_pane_g_ParamLimits

0xfb36,	// (0x0003f5f3) fep_hwr_write_pane_g

0x15bb,	// (0x00031078) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x15bb,	// (0x00031078) bg_fep_hwr_candidate_pane_g2

0x16a8,	// (0x00031165) cell_hwr_candidate_pane_ParamLimits

0x16a8,	// (0x00031165) cell_hwr_candidate_pane

0x16fa,	// (0x000311b7) fep_hwr_candidate_pane_g1_ParamLimits

0x736b,	// (0x00036e28) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x736b,	// (0x00036e28) bg_popup_fep_shadow_pane_cp2

0x7501,	// (0x00036fbe) fep_vkb_top_pane_g4_ParamLimits

0x7501,	// (0x00036fbe) fep_vkb_top_pane_g4

0x7547,	// (0x00037004) fep_vkb_side_pane_g2_ParamLimits

0x7547,	// (0x00037004) fep_vkb_side_pane_g2

0xb51c,	// (0x0003afd9) list_setting_pane_t4_ParamLimits

0xb51c,	// (0x0003afd9) list_setting_pane_t4

0xb5b8,	// (0x0003b075) list_setting_number_pane_t5_ParamLimits

0xb5b8,	// (0x0003b075) list_setting_number_pane_t5

0x37a9,	// (0x00033266) list_double_heading_pane_cp2_ParamLimits

0x37a9,	// (0x00033266) list_double_heading_pane_cp2

0x3121,	// (0x00032bde) list_double_heading_pane_g1_cp2_ParamLimits

0x3121,	// (0x00032bde) list_double_heading_pane_g1_cp2

0x312d,	// (0x00032bea) list_double_heading_pane_g2_cp2_ParamLimits

0x312d,	// (0x00032bea) list_double_heading_pane_g2_cp2

0x7886,	// (0x00037343) list_double_heading_pane_t1_cp2_ParamLimits

0x7886,	// (0x00037343) list_double_heading_pane_t1_cp2

0x789c,	// (0x00037359) list_double_heading_pane_t2_cp2_ParamLimits

0x789c,	// (0x00037359) list_double_heading_pane_t2_cp2

0x21c9,	// (0x00031c86) aid_value_unit2

0xf51b,	// (0x0003efd8) popup_preview_fixed_window

0x255f,	// (0x0003201c) bg_popup_preview_window_pane_cp02

0x78ae,	// (0x0003736b) list_preview_fixed_pane

0x78f4,	// (0x000373b1) list_empty_pane_fp_ParamLimits

0x78f4,	// (0x000373b1) list_empty_pane_fp

0x78f4,	// (0x000373b1) list_single_cale_day_pane_fp_ParamLimits

0x78f4,	// (0x000373b1) list_single_cale_day_pane_fp

0x78f4,	// (0x000373b1) list_single_graphic_heading_pane_fp_ParamLimits

0x78f4,	// (0x000373b1) list_single_graphic_heading_pane_fp

0x78f4,	// (0x000373b1) list_single_graphic_pane_fp_ParamLimits

0x78f4,	// (0x000373b1) list_single_graphic_pane_fp

0x78f4,	// (0x000373b1) list_single_heading_pane_fp_ParamLimits

0x78f4,	// (0x000373b1) list_single_heading_pane_fp

0x78f4,	// (0x000373b1) list_single_pane_fp_ParamLimits

0x78f4,	// (0x000373b1) list_single_pane_fp

0x790d,	// (0x000373ca) list_single_pane_fp_g1_ParamLimits

0x790d,	// (0x000373ca) list_single_pane_fp_g1

0x293d,	// (0x000323fa) list_single_pane_fp_g2_ParamLimits

0x293d,	// (0x000323fa) list_single_pane_fp_g2

0x2949,	// (0x00032406) list_single_pane_fp_g3_ParamLimits

0x2949,	// (0x00032406) list_single_pane_fp_g3

0x7919,	// (0x000373d6) list_single_pane_fp_g4_ParamLimits

0x7919,	// (0x000373d6) list_single_pane_fp_g4

0x0003,

0xfb9d,	// (0x0003f65a) list_single_pane_fp_g_ParamLimits

0xfb9d,	// (0x0003f65a) list_single_pane_fp_g

0x295d,	// (0x0003241a) list_single_pane_fp_t1_ParamLimits

0x295d,	// (0x0003241a) list_single_pane_fp_t1

0x2974,	// (0x00032431) list_single_graphic_pane_fp_g1_ParamLimits

0x2974,	// (0x00032431) list_single_graphic_pane_fp_g1

0x790d,	// (0x000373ca) list_single_graphic_pane_fp_g2_ParamLimits

0x790d,	// (0x000373ca) list_single_graphic_pane_fp_g2

0x293d,	// (0x000323fa) list_single_graphic_pane_fp_g3_ParamLimits

0x293d,	// (0x000323fa) list_single_graphic_pane_fp_g3

0x2949,	// (0x00032406) list_single_graphic_pane_fp_g4_ParamLimits

0x2949,	// (0x00032406) list_single_graphic_pane_fp_g4

0x7919,	// (0x000373d6) list_single_graphic_pane_fp_g5_ParamLimits

0x7919,	// (0x000373d6) list_single_graphic_pane_fp_g5

0x0004,

0xfba6,	// (0x0003f663) list_single_graphic_pane_fp_g_ParamLimits

0xfba6,	// (0x0003f663) list_single_graphic_pane_fp_g

0x2980,	// (0x0003243d) list_single_graphic_pane_fp_t1_ParamLimits

0x2980,	// (0x0003243d) list_single_graphic_pane_fp_t1

0x2974,	// (0x00032431) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x2974,	// (0x00032431) list_single_graphic_heading_pane_fp_g1

0x790d,	// (0x000373ca) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x790d,	// (0x000373ca) list_single_graphic_heading_pane_fp_g2

0x293d,	// (0x000323fa) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x293d,	// (0x000323fa) list_single_graphic_heading_pane_fp_g3

0x2949,	// (0x00032406) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x2949,	// (0x00032406) list_single_graphic_heading_pane_fp_g4

0x7919,	// (0x000373d6) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7919,	// (0x000373d6) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba6,	// (0x0003f663) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba6,	// (0x0003f663) list_single_graphic_heading_pane_fp_g

0x2996,	// (0x00032453) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x2996,	// (0x00032453) list_single_graphic_heading_pane_fp_t1

0x29ac,	// (0x00032469) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x29ac,	// (0x00032469) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbb1,	// (0x0003f66e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbb1,	// (0x0003f66e) list_single_graphic_heading_pane_fp_t

0x29be,	// (0x0003247b) list_single_cale_day_pane_fp_g1_ParamLimits

0x29be,	// (0x0003247b) list_single_cale_day_pane_fp_g1

0x7925,	// (0x000373e2) list_single_cale_day_pane_fp_g2_ParamLimits

0x7925,	// (0x000373e2) list_single_cale_day_pane_fp_g2

0x29f6,	// (0x000324b3) list_single_cale_day_pane_fp_g3_ParamLimits

0x29f6,	// (0x000324b3) list_single_cale_day_pane_fp_g3

0x2a1e,	// (0x000324db) list_single_cale_day_pane_fp_g4_ParamLimits

0x2a1e,	// (0x000324db) list_single_cale_day_pane_fp_g4

0x2a42,	// (0x000324ff) list_single_cale_day_pane_fp_g5_ParamLimits

0x2a42,	// (0x000324ff) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb6,	// (0x0003f673) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb6,	// (0x0003f673) list_single_cale_day_pane_fp_g

0x2a66,	// (0x00032523) list_single_cale_day_pane_fp_t1_ParamLimits

0x2a66,	// (0x00032523) list_single_cale_day_pane_fp_t1

0x2a8c,	// (0x00032549) list_single_cale_day_pane_fp_t2_ParamLimits

0x2a8c,	// (0x00032549) list_single_cale_day_pane_fp_t2

0x2aa5,	// (0x00032562) list_single_cale_day_pane_fp_t3_ParamLimits

0x2aa5,	// (0x00032562) list_single_cale_day_pane_fp_t3

0x0002,

0xfbc1,	// (0x0003f67e) list_single_cale_day_pane_fp_t_ParamLimits

0xfbc1,	// (0x0003f67e) list_single_cale_day_pane_fp_t

0x790d,	// (0x000373ca) list_empty_pane_fp_g1_ParamLimits

0x790d,	// (0x000373ca) list_empty_pane_fp_g1

0x2abe,	// (0x0003257b) list_empty_pane_fp_t1

0x2acc,	// (0x00032589) list_empty_pane_fp_t2

0x0001,

0xfbc8,	// (0x0003f685) list_empty_pane_fp_t

0x790d,	// (0x000373ca) list_single_heading_pane_fp_g1_ParamLimits

0x790d,	// (0x000373ca) list_single_heading_pane_fp_g1

0x293d,	// (0x000323fa) list_single_heading_pane_fp_g2_ParamLimits

0x293d,	// (0x000323fa) list_single_heading_pane_fp_g2

0x2949,	// (0x00032406) list_single_heading_pane_fp_g3_ParamLimits

0x2949,	// (0x00032406) list_single_heading_pane_fp_g3

0x0002,

0xfbcd,	// (0x0003f68a) list_single_heading_pane_fp_g_ParamLimits

0xfbcd,	// (0x0003f68a) list_single_heading_pane_fp_g

0x2ada,	// (0x00032597) list_single_heading_pane_fp_t1_ParamLimits

0x2ada,	// (0x00032597) list_single_heading_pane_fp_t1

0x2aec,	// (0x000325a9) list_single_heading_pane_fp_t2_ParamLimits

0x2aec,	// (0x000325a9) list_single_heading_pane_fp_t2

0x0001,

0xfbd4,	// (0x0003f691) list_single_heading_pane_fp_t_ParamLimits

0xfbd4,	// (0x0003f691) list_single_heading_pane_fp_t

0x331c,	// (0x00032dd9) aid_size_cell_fast

0x24d1,	// (0x00031f8e) soft_indicator_pane_cp1_t1

0x3359,	// (0x00032e16) cell_app_pane_cp2_ParamLimits

0x3359,	// (0x00032e16) cell_app_pane_cp2

0x1526,	// (0x00030fe3) fep_hwr_candidate_drop_down_list_pane

0x1714,	// (0x000311d1) fep_hwr_candidate_pane_g3_ParamLimits

0x1714,	// (0x000311d1) fep_hwr_candidate_pane_g3

0xe37d,	// (0x0003de3a) fep_hwr_candidate_pane_g4_ParamLimits

0xe37d,	// (0x0003de3a) fep_hwr_candidate_pane_g4

0x0002,

0xfb43,	// (0x0003f600) fep_hwr_candidate_pane_g_ParamLimits

0xfb43,	// (0x0003f600) fep_hwr_candidate_pane_g

0x73fb,	// (0x00036eb8) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x73fb,	// (0x00036eb8) fep_vkb_candidate_drop_down_list_pane

0x7823,	// (0x000372e0) fep_vkb_candidate_pane_g3

0x782b,	// (0x000372e8) fep_vkb_candidate_pane_g4

0x0002,

0xfb70,	// (0x0003f62d) fep_vkb_candidate_pane_g

0x177f,	// (0x0003123c) cell_hwr_candidate_pane_g1_ParamLimits

0x178d,	// (0x0003124a) cell_hwr_candidate_pane_g3_ParamLimits

0x178d,	// (0x0003124a) cell_hwr_candidate_pane_g3

0x9226,	// (0x00038ce3) cell_hwr_candidate_pane_g4_ParamLimits

0x9226,	// (0x00038ce3) cell_hwr_candidate_pane_g4

0x0002,

0xfb8f,	// (0x0003f64c) cell_hwr_candidate_pane_g_ParamLimits

0xfb8f,	// (0x0003f64c) cell_hwr_candidate_pane_g

0x7842,	// (0x000372ff) cell_vkb_candidate_pane_g3_ParamLimits

0x7842,	// (0x000372ff) cell_vkb_candidate_pane_g3

0x785d,	// (0x0003731a) cell_vkb_candidate_pane_g4_ParamLimits

0x785d,	// (0x0003731a) cell_vkb_candidate_pane_g4

0x7931,	// (0x000373ee) cell_app_pane_cp2_g1_ParamLimits

0x7931,	// (0x000373ee) cell_app_pane_cp2_g1

0x794f,	// (0x0003740c) cell_app_pane_cp2_g2_ParamLimits

0x794f,	// (0x0003740c) cell_app_pane_cp2_g2

0x0001,

0xfbd9,	// (0x0003f696) cell_app_pane_cp2_g_ParamLimits

0xfbd9,	// (0x0003f696) cell_app_pane_cp2_g

0x795b,	// (0x00037418) cell_app_pane_cp2_t1_ParamLimits

0x795b,	// (0x00037418) cell_app_pane_cp2_t1

0x3107,	// (0x00032bc4) grid_highlight_pane_cp1_ParamLimits

0x3107,	// (0x00032bc4) grid_highlight_pane_cp1

0x17cc,	// (0x00031289) cell_hwr_candidate_pane_cp1_ParamLimits

0x17cc,	// (0x00031289) cell_hwr_candidate_pane_cp1

0x177f,	// (0x0003123c) fep_hwr_candidate_drop_down_list_pane_g1

0x17f0,	// (0x000312ad) fep_hwr_candidate_drop_down_list_pane_g2

0x17fd,	// (0x000312ba) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x0003f69b) fep_hwr_candidate_drop_down_list_pane_g

0x180a,	// (0x000312c7) fep_hwr_candidate_drop_down_list_scroll_pane

0x1813,	// (0x000312d0) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1813,	// (0x000312d0) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1820,	// (0x000312dd) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1820,	// (0x000312dd) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x182d,	// (0x000312ea) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x182d,	// (0x000312ea) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x183a,	// (0x000312f7) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x183a,	// (0x000312f7) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1855,	// (0x00031312) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1855,	// (0x00031312) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1870,	// (0x0003132d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1870,	// (0x0003132d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x188b,	// (0x00031348) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x188b,	// (0x00031348) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x18a6,	// (0x00031363) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x18a6,	// (0x00031363) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x0003f6a2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x0003f6a2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x796d,	// (0x0003742a) cell_vkb_candidate_pane_cp1_ParamLimits

0x796d,	// (0x0003742a) cell_vkb_candidate_pane_cp1

0x7501,	// (0x00036fbe) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7501,	// (0x00036fbe) fep_vkb_candidate_drop_down_list_pane_g1

0x7993,	// (0x00037450) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7993,	// (0x00037450) fep_vkb_candidate_drop_down_list_pane_g2

0x79a0,	// (0x0003745d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x79a0,	// (0x0003745d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbf6,	// (0x0003f6b3) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbf6,	// (0x0003f6b3) fep_vkb_candidate_drop_down_list_pane_g

0x79ad,	// (0x0003746a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x79ad,	// (0x0003746a) fep_vkb_candidate_drop_down_list_scroll_pane

0x79ba,	// (0x00037477) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x79ba,	// (0x00037477) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x79c7,	// (0x00037484) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x79c7,	// (0x00037484) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x79d3,	// (0x00037490) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x79d3,	// (0x00037490) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x79df,	// (0x0003749c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x79df,	// (0x0003749c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7a00,	// (0x000374bd) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7a00,	// (0x000374bd) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7a21,	// (0x000374de) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7a21,	// (0x000374de) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7a42,	// (0x000374ff) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7a42,	// (0x000374ff) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7a63,	// (0x00037520) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7a63,	// (0x00037520) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbfd,	// (0x0003f6ba) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbfd,	// (0x0003f6ba) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb107,	// (0x0003abc4) title_pane_g1_ParamLimits

0xb118,	// (0x0003abd5) title_pane_g2_ParamLimits

0xf592,	// (0x0003f04f) title_pane_g_ParamLimits

0x3767,	// (0x00033224) aid_call2_pane

0x376f,	// (0x0003322c) aid_call_pane

0x3777,	// (0x00033234) popup_clock_analogue_window_g1

0x3777,	// (0x00033234) popup_clock_analogue_window_g2

0x09b9,	// (0x00030476) popup_clock_analogue_window_g3

0x09c2,	// (0x0003047f) popup_clock_analogue_window_g4

0x21eb,	// (0x00031ca8) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x0003f1f4) popup_clock_analogue_window_g

0x09ca,	// (0x00030487) popup_clock_analogue_window_t1

0x09d8,	// (0x00030495) clock_digital_number_pane_ParamLimits

0x09d8,	// (0x00030495) clock_digital_number_pane

0x09e4,	// (0x000304a1) clock_digital_number_pane_cp02_ParamLimits

0x09e4,	// (0x000304a1) clock_digital_number_pane_cp02

0x09f0,	// (0x000304ad) clock_digital_number_pane_cp03_ParamLimits

0x09f0,	// (0x000304ad) clock_digital_number_pane_cp03

0x09fc,	// (0x000304b9) clock_digital_number_pane_cp04_ParamLimits

0x09fc,	// (0x000304b9) clock_digital_number_pane_cp04

0x0a08,	// (0x000304c5) clock_digital_separator_pane_ParamLimits

0x0a08,	// (0x000304c5) clock_digital_separator_pane

0x0a14,	// (0x000304d1) popup_clock_digital_window_t1_ParamLimits

0x0a14,	// (0x000304d1) popup_clock_digital_window_t1

0x21eb,	// (0x00031ca8) clock_digital_number_pane_g1

0x21eb,	// (0x00031ca8) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x0003f1ff) clock_digital_number_pane_g

0x21eb,	// (0x00031ca8) clock_digital_separator_pane_g1

0x21eb,	// (0x00031ca8) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x0003f1ff) clock_digital_separator_pane_g

0xcfa7,	// (0x0003ca64) aid_fill_nsta_ParamLimits

0xd0d8,	// (0x0003cb95) indicator_nsta_pane_ParamLimits

0x4a0a,	// (0x000344c7) popup_clock_analogue_window

0x4a0a,	// (0x000344c7) popup_clock_digital_window

0x32dd,	// (0x00032d9a) grid_indicator_nsta_pane_ParamLimits

0x6c8c,	// (0x00036749) clock_nsta_pane_t2

0x0001,

0xfad0,	// (0x0003f58d) clock_nsta_pane_t

0x097d,	// (0x0003043a) aid_size_max_handle

0xb73f,	// (0x0003b1fc) aid_size_min_handle

0x3d65,	// (0x00033822) editor_scroll_pane

0x7a7e,	// (0x0003753b) ex_editor_pane

0x3289,	// (0x00032d46) scroll_pane_cp13

0x30a6,	// (0x00032b63) scroll_pane_cp14

0x37a1,	// (0x0003325e) scroll_pane_cp36

0xc6b0,	// (0x0003c16d) list_single_graphic_hl_pane_cp2_ParamLimits

0xc6b0,	// (0x0003c16d) list_single_graphic_hl_pane_cp2

0xd818,	// (0x0003d2d5) list_single_graphic_hl_pane_ParamLimits

0xd818,	// (0x0003d2d5) list_single_graphic_hl_pane

0x2b02,	// (0x000325bf) aid_size_min_hl_cp1

0x7a86,	// (0x00037543) list_highlight_pane_cp34_ParamLimits

0x7a86,	// (0x00037543) list_highlight_pane_cp34

0x7a97,	// (0x00037554) list_single_graphic_hl_pane_g1_ParamLimits

0x7a97,	// (0x00037554) list_single_graphic_hl_pane_g1

0xbbe5,	// (0x0003b6a2) list_single_graphic_hl_pane_g2_ParamLimits

0xbbe5,	// (0x0003b6a2) list_single_graphic_hl_pane_g2

0xbbe5,	// (0x0003b6a2) list_single_graphic_hl_pane_g3_ParamLimits

0xbbe5,	// (0x0003b6a2) list_single_graphic_hl_pane_g3

0xeeaf,	// (0x0003e96c) list_single_graphic_hl_pane_g4_ParamLimits

0xeeaf,	// (0x0003e96c) list_single_graphic_hl_pane_g4

0xbbf1,	// (0x0003b6ae) list_single_graphic_hl_pane_g5_ParamLimits

0xbbf1,	// (0x0003b6ae) list_single_graphic_hl_pane_g5

0x0004,

0xfc0e,	// (0x0003f6cb) list_single_graphic_hl_pane_g_ParamLimits

0xfc0e,	// (0x0003f6cb) list_single_graphic_hl_pane_g

0xbc05,	// (0x0003b6c2) list_single_graphic_hl_pane_t1_ParamLimits

0xbc05,	// (0x0003b6c2) list_single_graphic_hl_pane_t1

0x7aa4,	// (0x00037561) aid_size_min_hl_cp2

0x7aad,	// (0x0003756a) list_highlight_pane_cp34_cp2_ParamLimits

0x7aad,	// (0x0003756a) list_highlight_pane_cp34_cp2

0x7a97,	// (0x00037554) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7a97,	// (0x00037554) list_single_graphic_hl_pane_g1_cp2

0x7aba,	// (0x00037577) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7aba,	// (0x00037577) list_single_graphic_hl_pane_g2_cp2

0x7ac6,	// (0x00037583) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7ac6,	// (0x00037583) list_single_graphic_hl_pane_g3_cp2

0x448a,	// (0x00033f47) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x448a,	// (0x00033f47) list_single_graphic_hl_pane_g4_cp2

0x7ad4,	// (0x00037591) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7ad4,	// (0x00037591) list_single_graphic_hl_pane_g5_cp2

0xb7fd,	// (0x0003b2ba) control_pane_g4_ParamLimits

0xb7fd,	// (0x0003b2ba) control_pane_g4

0x40eb,	// (0x00033ba8) bg_popup_sub_pane_cp10_ParamLimits

0x7281,	// (0x00036d3e) list_choice_list_pane_ParamLimits

0x7290,	// (0x00036d4d) scroll_pane_cp23

0x255f,	// (0x0003201c) bg_popup_preview_window_pane_cp02_ParamLimits

0x78ae,	// (0x0003736b) list_preview_fixed_pane_ParamLimits

0x78c4,	// (0x00037381) list_preview_fixed_pane_cp_ParamLimits

0x78c4,	// (0x00037381) list_preview_fixed_pane_cp

0x78d0,	// (0x0003738d) popup_preview_fixed_window_g1_ParamLimits

0x78d0,	// (0x0003738d) popup_preview_fixed_window_g1

0x78dc,	// (0x00037399) popup_preview_fixed_window_g2_ParamLimits

0x78dc,	// (0x00037399) popup_preview_fixed_window_g2

0x0002,

0xfb96,	// (0x0003f653) popup_preview_fixed_window_g_ParamLimits

0xfb96,	// (0x0003f653) popup_preview_fixed_window_g

0x08ef,	// (0x000303ac) aid_navi_side_left_pane_ParamLimits

0x0904,	// (0x000303c1) aid_navi_side_right_pane_ParamLimits

0x091c,	// (0x000303d9) navi_icon_pane_stacon_ParamLimits

0x0930,	// (0x000303ed) navi_navi_pane_stacon_ParamLimits

0x091c,	// (0x000303d9) navi_text_pane_stacon_ParamLimits

0x21e1,	// (0x00031c9e) main_text_info_pane

0x7afe,	// (0x000375bb) listscroll_text_info_pane

0x7b06,	// (0x000375c3) list_text_info_pane_ParamLimits

0x7b06,	// (0x000375c3) list_text_info_pane

0x7b15,	// (0x000375d2) scroll_pane_cp24_ParamLimits

0x7b15,	// (0x000375d2) scroll_pane_cp24

0xdd12,	// (0x0003d7cf) list_text_info_pane_t1_ParamLimits

0xdd12,	// (0x0003d7cf) list_text_info_pane_t1

0xc8a4,	// (0x0003c361) popup_fast_swap2_window_ParamLimits

0xc8a4,	// (0x0003c361) popup_fast_swap2_window

0x7b58,	// (0x00037615) aid_size_cell_fast2

0x21e1,	// (0x00031c9e) bg_popup_window_pane_cp17

0x50bd,	// (0x00034b7a) heading_pane_cp2

0x2d6a,	// (0x00032827) listscroll_fast2_pane

0x7b62,	// (0x0003761f) grid_fast2_pane

0x7b6c,	// (0x00037629) listscroll_fast2_pane_g1

0x7b76,	// (0x00037633) listscroll_fast2_pane_g2

0x0001,

0xfc19,	// (0x0003f6d6) listscroll_fast2_pane_g

0x3289,	// (0x00032d46) scroll_pane_cp26

0x7b80,	// (0x0003763d) cell_fast2_pane_ParamLimits

0x7b80,	// (0x0003763d) cell_fast2_pane

0x7b97,	// (0x00037654) cell_fast2_pane_g1

0x7ba0,	// (0x0003765d) cell_fast2_pane_g2

0x7ba9,	// (0x00037666) cell_fast2_pane_g3

0x0002,

0xfc1e,	// (0x0003f6db) cell_fast2_pane_g

0x2e63,	// (0x00032920) grid_highlight_pane_cp9

0x2e78,	// (0x00032935) main_eswt_pane_ParamLimits

0x2e78,	// (0x00032935) main_eswt_pane

0x7b2a,	// (0x000375e7) list_single_text_info_pane

0x7bb1,	// (0x0003766e) eswt_ctrl_button_pane

0x7bb1,	// (0x0003766e) eswt_ctrl_canvas_pane

0x7bb9,	// (0x00037676) eswt_ctrl_combo_pane

0x7bb1,	// (0x0003766e) eswt_ctrl_default_pane

0x7bb1,	// (0x0003766e) eswt_ctrl_label_pane

0x7bc1,	// (0x0003767e) eswt_ctrl_wait_pane

0x7bc9,	// (0x00037686) eswt_shell_pane

0x21e1,	// (0x00031c9e) listscroll_eswt_app_pane

0x7bf7,	// (0x000376b4) popup_eswt_tasktip_window_ParamLimits

0x7bf7,	// (0x000376b4) popup_eswt_tasktip_window

0x4d25,	// (0x000347e2) bg_popup_window_pane_cp18

0x7c08,	// (0x000376c5) eswt_control_pane_g1_ParamLimits

0x7c08,	// (0x000376c5) eswt_control_pane_g1

0x7c15,	// (0x000376d2) eswt_control_pane_g2_ParamLimits

0x7c15,	// (0x000376d2) eswt_control_pane_g2

0x7c22,	// (0x000376df) eswt_control_pane_g3_ParamLimits

0x7c22,	// (0x000376df) eswt_control_pane_g3

0x7c2f,	// (0x000376ec) eswt_control_pane_g4_ParamLimits

0x7c2f,	// (0x000376ec) eswt_control_pane_g4

0x0003,

0xfc25,	// (0x0003f6e2) eswt_control_pane_g_ParamLimits

0xfc25,	// (0x0003f6e2) eswt_control_pane_g

0x3107,	// (0x00032bc4) bg_button_pane_ParamLimits

0x3107,	// (0x00032bc4) bg_button_pane

0x2e78,	// (0x00032935) common_borders_pane_copy2_ParamLimits

0x2e78,	// (0x00032935) common_borders_pane_copy2

0x7c3c,	// (0x000376f9) control_button_pane_g1_ParamLimits

0x7c3c,	// (0x000376f9) control_button_pane_g1

0x7c48,	// (0x00037705) control_button_pane_g2_ParamLimits

0x7c48,	// (0x00037705) control_button_pane_g2

0x7c54,	// (0x00037711) control_button_pane_g3_ParamLimits

0x7c54,	// (0x00037711) control_button_pane_g3

0x0002,

0xfc2e,	// (0x0003f6eb) control_button_pane_g_ParamLimits

0xfc2e,	// (0x0003f6eb) control_button_pane_g

0x7c68,	// (0x00037725) control_button_pane_t1

0x7c76,	// (0x00037733) control_button_pane_t2

0x0001,

0xfc35,	// (0x0003f6f2) control_button_pane_t

0x4c33,	// (0x000346f0) bg_button_pane_g1

0x4c43,	// (0x00034700) bg_button_pane_g2

0x4c3b,	// (0x000346f8) bg_button_pane_g3

0x4c53,	// (0x00034710) bg_button_pane_g4

0x4c4b,	// (0x00034708) bg_button_pane_g5

0x4c5b,	// (0x00034718) bg_button_pane_g6

0x4c63,	// (0x00034720) bg_button_pane_g7

0x4c73,	// (0x00034730) bg_button_pane_g8

0x4c6b,	// (0x00034728) bg_button_pane_g9

0x0008,

0xf895,	// (0x0003f352) bg_button_pane_g

0x723c,	// (0x00036cf9) common_borders_pane_ParamLimits

0x723c,	// (0x00036cf9) common_borders_pane

0x7c08,	// (0x000376c5) eswt_control_pane_g1_copy1_ParamLimits

0x7c08,	// (0x000376c5) eswt_control_pane_g1_copy1

0x7c15,	// (0x000376d2) eswt_control_pane_g2_copy1_ParamLimits

0x7c15,	// (0x000376d2) eswt_control_pane_g2_copy1

0x7c22,	// (0x000376df) eswt_control_pane_g3_copy1_ParamLimits

0x7c22,	// (0x000376df) eswt_control_pane_g3_copy1

0x7c2f,	// (0x000376ec) eswt_control_pane_g4_copy1_ParamLimits

0x7c2f,	// (0x000376ec) eswt_control_pane_g4_copy1

0x7277,	// (0x00036d34) bg_eswt_ctrl_canvas_pane_g1

0x723c,	// (0x00036cf9) common_borders_pane_cp2_ParamLimits

0x723c,	// (0x00036cf9) common_borders_pane_cp2

0x723c,	// (0x00036cf9) common_borders_pane_cp3_ParamLimits

0x723c,	// (0x00036cf9) common_borders_pane_cp3

0x7c84,	// (0x00037741) separator_horizontal_pane

0x7c8c,	// (0x00037749) separator_vertical_pane

0x7c08,	// (0x000376c5) eswt_control_pane_g1_copy2_ParamLimits

0x7c08,	// (0x000376c5) eswt_control_pane_g1_copy2

0x7c15,	// (0x000376d2) eswt_control_pane_g2_copy2_ParamLimits

0x7c15,	// (0x000376d2) eswt_control_pane_g2_copy2

0x7c22,	// (0x000376df) eswt_control_pane_g3_copy2_ParamLimits

0x7c22,	// (0x000376df) eswt_control_pane_g3_copy2

0x7c2f,	// (0x000376ec) eswt_control_pane_g4_copy2_ParamLimits

0x7c2f,	// (0x000376ec) eswt_control_pane_g4_copy2

0x21e1,	// (0x00031c9e) common_borders_pane_cp4

0x7c95,	// (0x00037752) separator_horizontal_pane_g1

0x7c9e,	// (0x0003775b) separator_horizontal_pane_g2

0x7ca7,	// (0x00037764) separator_horizontal_pane_g3

0x0002,

0xfc3a,	// (0x0003f6f7) separator_horizontal_pane_g

0x7c08,	// (0x000376c5) eswt_control_pane_g1_copy3_ParamLimits

0x7c08,	// (0x000376c5) eswt_control_pane_g1_copy3

0x7c15,	// (0x000376d2) eswt_control_pane_g2_copy3_ParamLimits

0x7c15,	// (0x000376d2) eswt_control_pane_g2_copy3

0x7c22,	// (0x000376df) eswt_control_pane_g3_copy3_ParamLimits

0x7c22,	// (0x000376df) eswt_control_pane_g3_copy3

0x7c2f,	// (0x000376ec) eswt_control_pane_g4_copy3_ParamLimits

0x7c2f,	// (0x000376ec) eswt_control_pane_g4_copy3

0x21e1,	// (0x00031c9e) common_borders_pane_cp5

0x7cb0,	// (0x0003776d) separator_vertical_pane_g1

0x7cb9,	// (0x00037776) separator_vertical_pane_g2

0x7cc2,	// (0x0003777f) separator_vertical_pane_g3

0x0002,

0xfc41,	// (0x0003f6fe) separator_vertical_pane_g

0x7c08,	// (0x000376c5) eswt_control_pane_g1_copy4_ParamLimits

0x7c08,	// (0x000376c5) eswt_control_pane_g1_copy4

0x7c15,	// (0x000376d2) eswt_control_pane_g2_copy4_ParamLimits

0x7c15,	// (0x000376d2) eswt_control_pane_g2_copy4

0x7c22,	// (0x000376df) eswt_control_pane_g3_copy4_ParamLimits

0x7c22,	// (0x000376df) eswt_control_pane_g3_copy4

0x7c2f,	// (0x000376ec) eswt_control_pane_g4_copy4_ParamLimits

0x7c2f,	// (0x000376ec) eswt_control_pane_g4_copy4

0xdd34,	// (0x0003d7f1) eswt_ctrl_combo_button_pane

0xdd3c,	// (0x0003d7f9) eswt_ctrl_input_pane

0xdd44,	// (0x0003d801) popup_choice_list_window_cp70

0xdd4c,	// (0x0003d809) eswt_ctrl_input_pane_t1

0x21e1,	// (0x00031c9e) input_focus_pane_cp70

0x723c,	// (0x00036cf9) bg_button_pane_cp70_ParamLimits

0x723c,	// (0x00036cf9) bg_button_pane_cp70

0xdd5a,	// (0x0003d817) eswt_ctrl_combo_button_pane_g1

0x7cf9,	// (0x000377b6) wait_bar_pane_cp70

0x4d25,	// (0x000347e2) bg_popup_window_pane_cp70_ParamLimits

0x4d25,	// (0x000347e2) bg_popup_window_pane_cp70

0x7d01,	// (0x000377be) popup_eswt_tasktip_window_t1

0x7d17,	// (0x000377d4) wait_bar_pane_cp71_ParamLimits

0x7d17,	// (0x000377d4) wait_bar_pane_cp71

0x7d23,	// (0x000377e0) grid_eswt_app_pane

0x35ab,	// (0x00033068) scroll_pane_cp70

0xdd62,	// (0x0003d81f) cell_eswt_app_pane_ParamLimits

0xdd62,	// (0x0003d81f) cell_eswt_app_pane

0xdd94,	// (0x0003d851) cell_eswt_app_pane_g1_ParamLimits

0xdd94,	// (0x0003d851) cell_eswt_app_pane_g1

0xddc3,	// (0x0003d880) cell_eswt_app_pane_g2_ParamLimits

0xddc3,	// (0x0003d880) cell_eswt_app_pane_g2

0x0001,

0xfc48,	// (0x0003f705) cell_eswt_app_pane_g_ParamLimits

0xfc48,	// (0x0003f705) cell_eswt_app_pane_g

0xddec,	// (0x0003d8a9) cell_eswt_app_pane_t1_ParamLimits

0xddec,	// (0x0003d8a9) cell_eswt_app_pane_t1

0x7de8,	// (0x000378a5) grid_highlight_pane_cp70_ParamLimits

0x7de8,	// (0x000378a5) grid_highlight_pane_cp70

0x6185,	// (0x00035c42) set_content_pane_g1

0x4015,	// (0x00033ad2) status_small_volume_pane

0x18c1,	// (0x0003137e) status_small_volume_pane_g1

0x18c9,	// (0x00031386) volume_small2_pane

0x18d2,	// (0x0003138f) volume_small2_pane_g1

0x18db,	// (0x00031398) volume_small2_pane_g2

0x18e4,	// (0x000313a1) volume_small2_pane_g3

0x18ed,	// (0x000313aa) volume_small2_pane_g4

0x18f6,	// (0x000313b3) volume_small2_pane_g5

0x18ff,	// (0x000313bc) volume_small2_pane_g6

0x1908,	// (0x000313c5) volume_small2_pane_g7

0x1911,	// (0x000313ce) volume_small2_pane_g8

0x191a,	// (0x000313d7) volume_small2_pane_g9

0x1923,	// (0x000313e0) volume_small2_pane_g10

0x0009,

0xfc4d,	// (0x0003f70a) volume_small2_pane_g

0x7655,	// (0x00037112) fep_vkb_top_text_pane_g1_ParamLimits

0xdcba,	// (0x0003d777) fep_vkb_top_text_pane_t1_ParamLimits

0x78e8,	// (0x000373a5) popup_preview_fixed_window_g3_ParamLimits

0x78e8,	// (0x000373a5) popup_preview_fixed_window_g3

0xcf3a,	// (0x0003c9f7) popup_toolbar_trans_pane

0xd67d,	// (0x0003d13a) aid_height_set_list_ParamLimits

0x603b,	// (0x00035af8) aid_size_parent_ParamLimits

0x40eb,	// (0x00033ba8) list_highlight_pane_cp2_ParamLimits

0x6185,	// (0x00035c42) set_content_pane_g1_ParamLimits

0xbb84,	// (0x0003b641) list_single_image_pane_ParamLimits

0xbb84,	// (0x0003b641) list_single_image_pane

0xde1e,	// (0x0003d8db) aid_size_cell_image_ParamLimits

0xde1e,	// (0x0003d8db) aid_size_cell_image

0xde2b,	// (0x0003d8e8) grid_single_image_pane_ParamLimits

0xde2b,	// (0x0003d8e8) grid_single_image_pane

0x3121,	// (0x00032bde) list_single_image_pane_g1_ParamLimits

0x3121,	// (0x00032bde) list_single_image_pane_g1

0x312d,	// (0x00032bea) list_single_image_pane_g2_ParamLimits

0x312d,	// (0x00032bea) list_single_image_pane_g2

0x0001,

0xfc62,	// (0x0003f71f) list_single_image_pane_g_ParamLimits

0xfc62,	// (0x0003f71f) list_single_image_pane_g

0x7e0f,	// (0x000378cc) list_single_image_pane_t1_ParamLimits

0x7e0f,	// (0x000378cc) list_single_image_pane_t1

0xde39,	// (0x0003d8f6) cell_image_list_pane_ParamLimits

0xde39,	// (0x0003d8f6) cell_image_list_pane

0xde53,	// (0x0003d910) cell_image_list_pane_g1

0xde5c,	// (0x0003d919) cell_image_list_pane_g2

0x0001,

0xfc67,	// (0x0003f724) cell_image_list_pane_g

0x7e4d,	// (0x0003790a) aid_size_cell_tb_trans_pane

0x3107,	// (0x00032bc4) bg_tb_trans_pane

0x7e5f,	// (0x0003791c) grid_tb_trans_pane

0x4c33,	// (0x000346f0) bg_tb_trans_pane_g1

0x4c43,	// (0x00034700) bg_tb_trans_pane_g2

0x4c3b,	// (0x000346f8) bg_tb_trans_pane_g3

0x4c53,	// (0x00034710) bg_tb_trans_pane_g4

0x4c4b,	// (0x00034708) bg_tb_trans_pane_g5

0x4c73,	// (0x00034730) bg_tb_trans_pane_g6

0x4c6b,	// (0x00034728) bg_tb_trans_pane_g7

0x4c5b,	// (0x00034718) bg_tb_trans_pane_g8

0x4c63,	// (0x00034720) bg_tb_trans_pane_g9

0x0008,

0xfc6c,	// (0x0003f729) bg_tb_trans_pane_g

0x7e73,	// (0x00037930) cell_toolbar_trans_pane_ParamLimits

0x7e73,	// (0x00037930) cell_toolbar_trans_pane

0x7277,	// (0x00036d34) cell_toolbar_trans_pane_g1

0xda8a,	// (0x0003d547) list_form2_midp_pane_t1

0xda98,	// (0x0003d555) list_form2_midp_pane_t2

0x0001,

0xfb09,	// (0x0003f5c6) list_form2_midp_pane_t

0x6e72,	// (0x0003692f) scroll_pane_cp51_ParamLimits

0x7039,	// (0x00036af6) form2_midp_wait_pane_g1

0x7042,	// (0x00036aff) form2_midp_wait_pane_g2

0x704b,	// (0x00036b08) form2_midp_wait_pane_g3

0x0002,

0xfb1e,	// (0x0003f5db) form2_midp_wait_pane_g

0x22d5,	// (0x00031d92) list_highlight_pane_cp21_ParamLimits

0x70d1,	// (0x00036b8e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x70e0,	// (0x00036b9d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x1329,	// (0x00030de6) list_single_2graphic_im_pane_ParamLimits

0x1329,	// (0x00030de6) list_single_2graphic_im_pane

0xde65,	// (0x0003d922) list_single_2graphic_im_pane_g1_ParamLimits

0xde65,	// (0x0003d922) list_single_2graphic_im_pane_g1

0xde76,	// (0x0003d933) list_single_2graphic_im_pane_g2_ParamLimits

0xde76,	// (0x0003d933) list_single_2graphic_im_pane_g2

0xde82,	// (0x0003d93f) list_single_2graphic_im_pane_g3_ParamLimits

0xde82,	// (0x0003d93f) list_single_2graphic_im_pane_g3

0x0003,

0xfc7f,	// (0x0003f73c) list_single_2graphic_im_pane_g_ParamLimits

0xfc7f,	// (0x0003f73c) list_single_2graphic_im_pane_g

0xde96,	// (0x0003d953) list_single_2graphic_im_pane_t1_ParamLimits

0xde96,	// (0x0003d953) list_single_2graphic_im_pane_t1

0x78f4,	// (0x000373b1) list_single_graphic_2heading_pane_fp_ParamLimits

0x78f4,	// (0x000373b1) list_single_graphic_2heading_pane_fp

0x2974,	// (0x00032431) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x2974,	// (0x00032431) list_single_graphic_2heading_pane_fp_g1

0x790d,	// (0x000373ca) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x790d,	// (0x000373ca) list_single_graphic_2heading_pane_fp_g2

0x293d,	// (0x000323fa) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x293d,	// (0x000323fa) list_single_graphic_2heading_pane_fp_g3

0x2949,	// (0x00032406) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x2949,	// (0x00032406) list_single_graphic_2heading_pane_fp_g4

0x7919,	// (0x000373d6) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7919,	// (0x000373d6) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba6,	// (0x0003f663) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba6,	// (0x0003f663) list_single_graphic_2heading_pane_fp_g

0x2b41,	// (0x000325fe) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x2b41,	// (0x000325fe) list_single_graphic_2heading_pane_fp_t1

0x29ac,	// (0x00032469) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x29ac,	// (0x00032469) list_single_graphic_2heading_pane_fp_t2

0x2b57,	// (0x00032614) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x2b57,	// (0x00032614) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc88,	// (0x0003f745) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc88,	// (0x0003f745) list_single_graphic_2heading_pane_fp_t

0x7317,	// (0x00036dd4) fep_hwr_write_pane_g5_ParamLimits

0x7317,	// (0x00036dd4) fep_hwr_write_pane_g5

0x7323,	// (0x00036de0) fep_hwr_write_pane_g6_ParamLimits

0x7323,	// (0x00036de0) fep_hwr_write_pane_g6

0x7bc9,	// (0x00037686) eswt_shell_pane_ParamLimits

0x4d25,	// (0x000347e2) bg_popup_window_pane_cp18_ParamLimits

0x5f81,	// (0x00035a3e) heading_pane_cp70

0x7d01,	// (0x000377be) popup_eswt_tasktip_window_t1_ParamLimits

0xcffd,	// (0x0003caba) aid_touch_tab_arrow_left

0xd013,	// (0x0003cad0) aid_touch_tab_arrow_right

0xb130,	// (0x0003abed) title_pane_g3_ParamLimits

0xb130,	// (0x0003abed) title_pane_g3

0x30c6,	// (0x00032b83) set_value_pane_g1

0xcf3a,	// (0x0003c9f7) popup_toolbar_trans_pane_ParamLimits

0x7e4d,	// (0x0003790a) aid_size_cell_tb_trans_pane_ParamLimits

0x3107,	// (0x00032bc4) bg_tb_trans_pane_ParamLimits

0x7e5f,	// (0x0003791c) grid_tb_trans_pane_ParamLimits

0x255f,	// (0x0003201c) cont_note_pane_ParamLimits

0x255f,	// (0x0003201c) cont_note_pane

0x2e78,	// (0x00032935) cont_snote2_single_text_pane_ParamLimits

0x2e78,	// (0x00032935) cont_snote2_single_text_pane

0x2e78,	// (0x00032935) cont_snote2_single_graphic_pane_ParamLimits

0x2e78,	// (0x00032935) cont_snote2_single_graphic_pane

0x52a8,	// (0x00034d65) cont_note_wait_pane_ParamLimits

0x52a8,	// (0x00034d65) cont_note_wait_pane

0x52a8,	// (0x00034d65) cont_note_image_pane_ParamLimits

0x52a8,	// (0x00034d65) cont_note_image_pane

0x7f07,	// (0x000379c4) popup_note2_window_g1_ParamLimits

0x7f07,	// (0x000379c4) popup_note2_window_g1

0x7f38,	// (0x000379f5) popup_note2_window_t1_ParamLimits

0x7f38,	// (0x000379f5) popup_note2_window_t1

0x7f7d,	// (0x00037a3a) popup_note2_window_t2_ParamLimits

0x7f7d,	// (0x00037a3a) popup_note2_window_t2

0x7fc2,	// (0x00037a7f) popup_note2_window_t3_ParamLimits

0x7fc2,	// (0x00037a7f) popup_note2_window_t3

0x8007,	// (0x00037ac4) popup_note2_window_t4_ParamLimits

0x8007,	// (0x00037ac4) popup_note2_window_t4

0x25e3,	// (0x000320a0) popup_note2_window_t5_ParamLimits

0x25e3,	// (0x000320a0) popup_note2_window_t5

0x0004,

0xfc94,	// (0x0003f751) popup_note2_window_t_ParamLimits

0xfc94,	// (0x0003f751) popup_note2_window_t

0x8036,	// (0x00037af3) popup_note2_image_window_g1_ParamLimits

0x8036,	// (0x00037af3) popup_note2_image_window_g1

0x8042,	// (0x00037aff) popup_note2_image_window_g2_ParamLimits

0x8042,	// (0x00037aff) popup_note2_image_window_g2

0x0001,

0xfc9f,	// (0x0003f75c) popup_note2_image_window_g_ParamLimits

0xfc9f,	// (0x0003f75c) popup_note2_image_window_g

0x8054,	// (0x00037b11) popup_note2_image_window_t1_ParamLimits

0x8054,	// (0x00037b11) popup_note2_image_window_t1

0x806c,	// (0x00037b29) popup_note2_image_window_t2_ParamLimits

0x806c,	// (0x00037b29) popup_note2_image_window_t2

0x8084,	// (0x00037b41) popup_note2_image_window_t3_ParamLimits

0x8084,	// (0x00037b41) popup_note2_image_window_t3

0x0002,

0xfca4,	// (0x0003f761) popup_note2_image_window_t_ParamLimits

0xfca4,	// (0x0003f761) popup_note2_image_window_t

0x52b6,	// (0x00034d73) popup_note2_wait_window_g1_ParamLimits

0x52b6,	// (0x00034d73) popup_note2_wait_window_g1

0x80a0,	// (0x00037b5d) popup_note2_wait_window_g2_ParamLimits

0x80a0,	// (0x00037b5d) popup_note2_wait_window_g2

0x52ce,	// (0x00034d8b) popup_note2_wait_window_g3_ParamLimits

0x52ce,	// (0x00034d8b) popup_note2_wait_window_g3

0x0002,

0xfcab,	// (0x0003f768) popup_note2_wait_window_g_ParamLimits

0xfcab,	// (0x0003f768) popup_note2_wait_window_g

0x80ac,	// (0x00037b69) popup_note2_wait_window_t1_ParamLimits

0x80ac,	// (0x00037b69) popup_note2_wait_window_t1

0x80ca,	// (0x00037b87) popup_note2_wait_window_t2_ParamLimits

0x80ca,	// (0x00037b87) popup_note2_wait_window_t2

0x80e8,	// (0x00037ba5) popup_note2_wait_window_t3_ParamLimits

0x80e8,	// (0x00037ba5) popup_note2_wait_window_t3

0x80fa,	// (0x00037bb7) popup_note2_wait_window_t4_ParamLimits

0x80fa,	// (0x00037bb7) popup_note2_wait_window_t4

0x0003,

0xfcb2,	// (0x0003f76f) popup_note2_wait_window_t_ParamLimits

0xfcb2,	// (0x0003f76f) popup_note2_wait_window_t

0x810c,	// (0x00037bc9) wait_bar2_pane_ParamLimits

0x810c,	// (0x00037bc9) wait_bar2_pane

0x8124,	// (0x00037be1) popup_snote2_single_text_window_g1_ParamLimits

0x8124,	// (0x00037be1) popup_snote2_single_text_window_g1

0x814c,	// (0x00037c09) popup_snote2_single_text_window_t1_ParamLimits

0x814c,	// (0x00037c09) popup_snote2_single_text_window_t1

0x8198,	// (0x00037c55) popup_snote2_single_text_window_t2_ParamLimits

0x8198,	// (0x00037c55) popup_snote2_single_text_window_t2

0x81e4,	// (0x00037ca1) popup_snote2_single_text_window_t3_ParamLimits

0x81e4,	// (0x00037ca1) popup_snote2_single_text_window_t3

0x8225,	// (0x00037ce2) popup_snote2_single_text_window_t4_ParamLimits

0x8225,	// (0x00037ce2) popup_snote2_single_text_window_t4

0x825b,	// (0x00037d18) popup_snote2_single_text_window_t5_ParamLimits

0x825b,	// (0x00037d18) popup_snote2_single_text_window_t5

0x0004,

0xfcbb,	// (0x0003f778) popup_snote2_single_text_window_t_ParamLimits

0xfcbb,	// (0x0003f778) popup_snote2_single_text_window_t

0x8286,	// (0x00037d43) popup_snote2_single_graphic_window_g1_ParamLimits

0x8286,	// (0x00037d43) popup_snote2_single_graphic_window_g1

0x82ae,	// (0x00037d6b) popup_snote2_single_graphic_window_g2_ParamLimits

0x82ae,	// (0x00037d6b) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc6,	// (0x0003f783) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc6,	// (0x0003f783) popup_snote2_single_graphic_window_g

0x82d6,	// (0x00037d93) popup_snote2_single_graphic_window_t1_ParamLimits

0x82d6,	// (0x00037d93) popup_snote2_single_graphic_window_t1

0x8322,	// (0x00037ddf) popup_snote2_single_graphic_window_t2_ParamLimits

0x8322,	// (0x00037ddf) popup_snote2_single_graphic_window_t2

0x81e4,	// (0x00037ca1) popup_snote2_single_graphic_window_t3_ParamLimits

0x81e4,	// (0x00037ca1) popup_snote2_single_graphic_window_t3

0x8225,	// (0x00037ce2) popup_snote2_single_graphic_window_t4_ParamLimits

0x8225,	// (0x00037ce2) popup_snote2_single_graphic_window_t4

0x825b,	// (0x00037d18) popup_snote2_single_graphic_window_t5_ParamLimits

0x825b,	// (0x00037d18) popup_snote2_single_graphic_window_t5

0x0004,

0xfccb,	// (0x0003f788) popup_snote2_single_graphic_window_t_ParamLimits

0xfccb,	// (0x0003f788) popup_snote2_single_graphic_window_t

0x6d1c,	// (0x000367d9) clock_nsta_pane_cp2_t1

0x6d1c,	// (0x000367d9) clock_nsta_pane_cp2_t2

0x0001,

0xfadf,	// (0x0003f59c) clock_nsta_pane_cp2_t

0x0673,	// (0x00030130) form_field_data_wide_pane_g1_ParamLimits

0x3121,	// (0x00032bde) form_field_data_wide_pane_g2_ParamLimits

0x3121,	// (0x00032bde) form_field_data_wide_pane_g2

0x312d,	// (0x00032bea) form_field_data_wide_pane_g3_ParamLimits

0x312d,	// (0x00032bea) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x0003f177) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x0003f177) form_field_data_wide_pane_g

0xd992,	// (0x0003d44f) grid_touch_3_pane_ParamLimits

0xd992,	// (0x0003d44f) grid_touch_3_pane

0xdec7,	// (0x0003d984) cell_touch_3_pane_ParamLimits

0xdec7,	// (0x0003d984) cell_touch_3_pane

0x7277,	// (0x00036d34) cell_touch_3_pane_g1

0x7277,	// (0x00036d34) cell_touch_3_pane_g2

0x0001,

0xfb64,	// (0x0003f621) cell_touch_3_pane_g

0x2615,	// (0x000320d2) cont_query_data_pane

0x261d,	// (0x000320da) cont_query_data_pane_cp1

0x83a1,	// (0x00037e5e) button_value_adjust_pane_cp7

0x83a9,	// (0x00037e66) query_popup_pane_cp3

0x3841,	// (0x000332fe) bg_popup_sub_pane_cp22_ParamLimits

0x0a33,	// (0x000304f0) navi_navi_volume_pane_cp2

0x0a4e,	// (0x0003050b) popup_side_volume_key_window_g2

0x0a5d,	// (0x0003051a) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x0003f209) popup_side_volume_key_window_g

0x0a7a,	// (0x00030537) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x0003f210) popup_side_volume_key_window_t

0x3afc,	// (0x000335b9) popup_side_volume_key_window_ParamLimits

0xb32d,	// (0x0003adea) list_double_graphic_pane_g4_ParamLimits

0xb32d,	// (0x0003adea) list_double_graphic_pane_g4

0xbb6e,	// (0x0003b62b) list_single_2heading_msg_pane_ParamLimits

0xbb6e,	// (0x0003b62b) list_single_2heading_msg_pane

0xbc1b,	// (0x0003b6d8) list_single_2heading_msg_pane_g1_ParamLimits

0xbc1b,	// (0x0003b6d8) list_single_2heading_msg_pane_g1

0xbc27,	// (0x0003b6e4) list_single_2heading_msg_pane_g2_ParamLimits

0xbc27,	// (0x0003b6e4) list_single_2heading_msg_pane_g2

0xbc3a,	// (0x0003b6f7) list_single_2heading_msg_pane_g3_ParamLimits

0xbc3a,	// (0x0003b6f7) list_single_2heading_msg_pane_g3

0xbc46,	// (0x0003b703) list_single_2heading_msg_pane_g4_ParamLimits

0xbc46,	// (0x0003b703) list_single_2heading_msg_pane_g4

0x0003,

0xfcd6,	// (0x0003f793) list_single_2heading_msg_pane_g_ParamLimits

0xfcd6,	// (0x0003f793) list_single_2heading_msg_pane_g

0xbc5e,	// (0x0003b71b) list_single_2heading_msg_pane_t1_ParamLimits

0xbc5e,	// (0x0003b71b) list_single_2heading_msg_pane_t1

0xbc86,	// (0x0003b743) list_single_2heading_msg_pane_t2_ParamLimits

0xbc86,	// (0x0003b743) list_single_2heading_msg_pane_t2

0xbcf1,	// (0x0003b7ae) list_single_2heading_msg_pane_t3_ParamLimits

0xbcf1,	// (0x0003b7ae) list_single_2heading_msg_pane_t3

0x2c3c,	// (0x000326f9) list_single_2heading_msg_pane_t4_ParamLimits

0x2c3c,	// (0x000326f9) list_single_2heading_msg_pane_t4

0x0003,

0xfcdf,	// (0x0003f79c) list_single_2heading_msg_pane_t_ParamLimits

0xfcdf,	// (0x0003f79c) list_single_2heading_msg_pane_t

0x2229,	// (0x00031ce6) title_pane_g4_ParamLimits

0x2229,	// (0x00031ce6) title_pane_g4

0x083f,	// (0x000302fc) title_pane_stacon_g3_ParamLimits

0x083f,	// (0x000302fc) title_pane_stacon_g3

0x7eca,	// (0x00037987) list_single_2graphic_im_pane_g4_ParamLimits

0x7eca,	// (0x00037987) list_single_2graphic_im_pane_g4

0x5d1e,	// (0x000357db) popup_side_volume_key_window_cp

0x6594,	// (0x00036051) main_idle_act2_pane_t1

0x0ed3,	// (0x00030990) toolbar_button_pane_g10

0xc4c6,	// (0x0003bf83) popup_toolbar_window_cp1

0x6d0d,	// (0x000367ca) clock_nsta_pane_cp_t1

0x6d0d,	// (0x000367ca) clock_nsta_pane_cp_t2

0x0001,

0xfada,	// (0x0003f597) clock_nsta_pane_cp_t

0x0a33,	// (0x000304f0) navi_navi_volume_pane_cp2_ParamLimits

0x0a42,	// (0x000304ff) popup_side_volume_key_window_g1_ParamLimits

0x0a4e,	// (0x0003050b) popup_side_volume_key_window_g2_ParamLimits

0x0a5d,	// (0x0003051a) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x0003f209) popup_side_volume_key_window_g_ParamLimits

0x1512,	// (0x00030fcf) fep_hwr_aid_pane

0x15bb,	// (0x00031078) bg_fep_hwr_top_pane_g4_ParamLimits

0x72e7,	// (0x00036da4) fep_hwr_top_pane_g1_ParamLimits

0x72f9,	// (0x00036db6) fep_hwr_top_pane_g2_ParamLimits

0x15db,	// (0x00031098) fep_hwr_top_pane_g3_ParamLimits

0xfb2f,	// (0x0003f5ec) fep_hwr_top_pane_g_ParamLimits

0x15f0,	// (0x000310ad) fep_hwr_top_text_pane_ParamLimits

0x5ad3,	// (0x00035590) aid_touch_tab_arrow_arrow_2

0x5adc,	// (0x00035599) aid_touch_tab_arrow_left_2

0x1526,	// (0x00030fe3) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x155d,	// (0x0003101a) fep_hwr_prediction_pane

0x744f,	// (0x00036f0c) fep_vkb_prediction_pane

0xdc9a,	// (0x0003d757) fep_vkb_side_pane_g3_ParamLimits

0xdc9a,	// (0x0003d757) fep_vkb_side_pane_g3

0x177f,	// (0x0003123c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x17f0,	// (0x000312ad) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x17fd,	// (0x000312ba) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbde,	// (0x0003f69b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x192c,	// (0x000313e9) fep_hwr_prediction_pane_g1

0x1936,	// (0x000313f3) fep_hwr_prediction_pane_g2

0x193e,	// (0x000313fb) fep_hwr_prediction_pane_g3

0x1946,	// (0x00031403) fep_hwr_prediction_pane_g4

0x0003,

0xfce8,	// (0x0003f7a5) fep_hwr_prediction_pane_g

0x83d0,	// (0x00037e8d) fep_vkb_prediction_pane_g1

0x83da,	// (0x00037e97) fep_vkb_prediction_pane_g2

0x83e2,	// (0x00037e9f) fep_vkb_prediction_pane_g3

0x83ea,	// (0x00037ea7) fep_vkb_prediction_pane_g4

0x0003,

0xfcf1,	// (0x0003f7ae) fep_vkb_prediction_pane_g

0x1278,	// (0x00030d35) slider_set_pane_g3

0x128c,	// (0x00030d49) slider_set_pane_g4

0x12a4,	// (0x00030d61) slider_set_pane_g5

0x1278,	// (0x00030d35) slider_set_pane_g6

0x12ba,	// (0x00030d77) slider_set_pane_g7

0x61cc,	// (0x00035c89) slider_form_pane_g3

0x61d5,	// (0x00035c92) slider_form_pane_g4

0x61dd,	// (0x00035c9a) slider_form_pane_g5

0x61cc,	// (0x00035c89) slider_form_pane_g6

0xd7ec,	// (0x0003d2a9) slider_form_pane_g7

0x6862,	// (0x0003631f) slider_set_pane_vc_g3

0x686b,	// (0x00036328) slider_set_pane_vc_g4

0x6874,	// (0x00036331) slider_set_pane_vc_g5

0x6862,	// (0x0003631f) slider_set_pane_vc_g6

0x687d,	// (0x0003633a) slider_set_pane_vc_g7

0x6862,	// (0x0003631f) slider_form_pane_vc_g1

0x686b,	// (0x00036328) slider_form_pane_vc_g2

0x6874,	// (0x00036331) slider_form_pane_vc_g3

0x6862,	// (0x0003631f) slider_form_pane_vc_g4

0x6a32,	// (0x000364ef) slider_form_pane_vc_g5

0x0004,

0xfac0,	// (0x0003f57d) slider_form_pane_vc_g

0x21e1,	// (0x00031c9e) main_idle_act3_pane

0x83f2,	// (0x00037eaf) ai3_links_pane

0xdf11,	// (0x0003d9ce) popup_ai3_data_window_ParamLimits

0xdf11,	// (0x0003d9ce) popup_ai3_data_window

0x21e1,	// (0x00031c9e) grid_ai3_links_pane

0xdf2f,	// (0x0003d9ec) cell_ai3_links_pane_ParamLimits

0xdf2f,	// (0x0003d9ec) cell_ai3_links_pane

0x8433,	// (0x00037ef0) bg_popup_sub_pane_cp11

0x8440,	// (0x00037efd) cell_ai3_links_pane_g1

0x21e1,	// (0x00031c9e) bg_popup_sub_pane_cp12

0x8465,	// (0x00037f22) heading_ai3_data_pane

0x846d,	// (0x00037f2a) list_ai3_gene_pane

0x8479,	// (0x00037f36) popup_ai3_data_window_g1

0x8481,	// (0x00037f3e) heading_ai3_data_pane_g1

0x8489,	// (0x00037f46) heading_ai3_data_pane_t1

0x8497,	// (0x00037f54) list_double_ai3_gene_pane_ParamLimits

0x8497,	// (0x00037f54) list_double_ai3_gene_pane

0x84a4,	// (0x00037f61) list_single_ai3_gene_pane_ParamLimits

0x84a4,	// (0x00037f61) list_single_ai3_gene_pane

0x723c,	// (0x00036cf9) list_highlight_pane_cp7_ParamLimits

0x723c,	// (0x00036cf9) list_highlight_pane_cp7

0x84b1,	// (0x00037f6e) list_single_a13_gene_pane_t1_ParamLimits

0x84b1,	// (0x00037f6e) list_single_a13_gene_pane_t1

0x84c8,	// (0x00037f85) list_single_ai3_gene_pane_g1

0x84d1,	// (0x00037f8e) list_single_ai3_gene_pane_g2

0x0001,

0xfcfa,	// (0x0003f7b7) list_single_ai3_gene_pane_g

0x84d9,	// (0x00037f96) list_double_ai3_gene_pane_g1_ParamLimits

0x84d9,	// (0x00037f96) list_double_ai3_gene_pane_g1

0x84e5,	// (0x00037fa2) list_double_ai3_gene_pane_t1_ParamLimits

0x84e5,	// (0x00037fa2) list_double_ai3_gene_pane_t1

0x8501,	// (0x00037fbe) list_double_ai3_gene_pane_t2_ParamLimits

0x8501,	// (0x00037fbe) list_double_ai3_gene_pane_t2

0x8516,	// (0x00037fd3) list_double_ai3_gene_pane_t3_ParamLimits

0x8516,	// (0x00037fd3) list_double_ai3_gene_pane_t3

0x0002,

0xfcff,	// (0x0003f7bc) list_double_ai3_gene_pane_t_ParamLimits

0xfcff,	// (0x0003f7bc) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x2b6d,	// (0x0003262a) aid_size_min_col_2

0xdefb,	// (0x0003d9b8) aid_size_min_msg_ParamLimits

0xdefb,	// (0x0003d9b8) aid_size_min_msg

0xdcae,	// (0x0003d76b) fep_vkb_top_text_pane_g2_ParamLimits

0xdcae,	// (0x0003d76b) fep_vkb_top_text_pane_g2

0x0001,

0xfb5f,	// (0x0003f61c) fep_vkb_top_text_pane_g_ParamLimits

0xfb5f,	// (0x0003f61c) fep_vkb_top_text_pane_g

0x21e1,	// (0x00031c9e) main_hc_apps_shell_pane

0x8533,	// (0x00037ff0) grid_hc_apps_pane_ParamLimits

0x8533,	// (0x00037ff0) grid_hc_apps_pane

0x8542,	// (0x00037fff) list_hc_apps_pane

0x854a,	// (0x00038007) scroll_pane_cp37_ParamLimits

0x854a,	// (0x00038007) scroll_pane_cp37

0xdf49,	// (0x0003da06) cell_hc_apps_pane_ParamLimits

0xdf49,	// (0x0003da06) cell_hc_apps_pane

0xe013,	// (0x0003dad0) cell_hc_apps_pane_g1_ParamLimits

0xe013,	// (0x0003dad0) cell_hc_apps_pane_g1

0x863f,	// (0x000380fc) cell_hc_apps_pane_g2_ParamLimits

0x863f,	// (0x000380fc) cell_hc_apps_pane_g2

0x865b,	// (0x00038118) cell_hc_apps_pane_g3_ParamLimits

0x865b,	// (0x00038118) cell_hc_apps_pane_g3

0x0002,

0xfd06,	// (0x0003f7c3) cell_hc_apps_pane_g_ParamLimits

0xfd06,	// (0x0003f7c3) cell_hc_apps_pane_g

0xe040,	// (0x0003dafd) cell_hc_apps_pane_t1_ParamLimits

0xe040,	// (0x0003dafd) cell_hc_apps_pane_t1

0x255f,	// (0x0003201c) grid_highlight_pane_cp10_ParamLimits

0x255f,	// (0x0003201c) grid_highlight_pane_cp10

0xe080,	// (0x0003db3d) list_single_hc_apps_pane_ParamLimits

0xe080,	// (0x0003db3d) list_single_hc_apps_pane

0xe0ba,	// (0x0003db77) list_single_hc_apps_pane_g1

0xbd5f,	// (0x0003b81c) list_single_hc_apps_pane_g2

0x0001,

0xfd0d,	// (0x0003f7ca) list_single_hc_apps_pane_g

0xbd78,	// (0x0003b835) list_single_hc_apps_pane_g2_copy1

0xbd94,	// (0x0003b851) list_single_hc_apps_pane_t1

0x22d5,	// (0x00031d92) bg_set_opt_pane_cp_ParamLimits

0x0042,	// (0x0002faff) setting_slider_pane_t1_ParamLimits

0x0058,	// (0x0002fb15) setting_slider_pane_t2_ParamLimits

0x0072,	// (0x0002fb2f) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0003f05f) setting_slider_pane_t_ParamLimits

0x008a,	// (0x0002fb47) slider_set_pane_ParamLimits

0x0d65,	// (0x00030822) control_pane_g5_ParamLimits

0x0d65,	// (0x00030822) control_pane_g5

0x5fed,	// (0x00035aaa) slider_set_pane_g1_ParamLimits

0x126c,	// (0x00030d29) slider_set_pane_g2_ParamLimits

0x1278,	// (0x00030d35) slider_set_pane_g3_ParamLimits

0x128c,	// (0x00030d49) slider_set_pane_g4_ParamLimits

0x12a4,	// (0x00030d61) slider_set_pane_g5_ParamLimits

0x1278,	// (0x00030d35) slider_set_pane_g6_ParamLimits

0x12ba,	// (0x00030d77) slider_set_pane_g7_ParamLimits

0xf993,	// (0x0003f450) slider_set_pane_g_ParamLimits

0x3be1,	// (0x0003369e) navi_icon_text_pane_ParamLimits

0xcfc7,	// (0x0003ca84) aid_fill_nsta_2_ParamLimits

0xcffd,	// (0x0003caba) aid_touch_tab_arrow_left_ParamLimits

0xd013,	// (0x0003cad0) aid_touch_tab_arrow_right_ParamLimits

0xd0ae,	// (0x0003cb6b) clock_nsta_pane_ParamLimits

0xd53b,	// (0x0003cff8) navi_icon_pane_g1_ParamLimits

0xd547,	// (0x0003d004) navi_text_pane_t1_ParamLimits

0xda6c,	// (0x0003d529) navi_icon_text_pane_g1_ParamLimits

0xda78,	// (0x0003d535) navi_icon_text_pane_t1_ParamLimits

0xe0ba,	// (0x0003db77) list_single_hc_apps_pane_g1_ParamLimits

0xbd5f,	// (0x0003b81c) list_single_hc_apps_pane_g2_ParamLimits

0xfd0d,	// (0x0003f7ca) list_single_hc_apps_pane_g_ParamLimits

0xbd78,	// (0x0003b835) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbd94,	// (0x0003b851) list_single_hc_apps_pane_t1_ParamLimits

0xb09c,	// (0x0003ab59) popup_toolbar2_fixed_window_ParamLimits

0xb09c,	// (0x0003ab59) popup_toolbar2_fixed_window

0xcf30,	// (0x0003c9ed) popup_toolbar2_float_window

0x21e1,	// (0x00031c9e) bg_popup_sub_pane_cp27

0x8715,	// (0x000381d2) grid_toolbar2_float_pane

0x21e1,	// (0x00031c9e) bg_popup_sub_pane_cp26

0x8715,	// (0x000381d2) grid_toolbar2_fixed_pane

0xe0d3,	// (0x0003db90) cell_toolbar2_fixed_pane_ParamLimits

0xe0d3,	// (0x0003db90) cell_toolbar2_fixed_pane

0xe0f0,	// (0x0003dbad) cell_toolbar2_fixed_pane_g1

0x8736,	// (0x000381f3) toolbar2_fixed_button_pane

0x4c33,	// (0x000346f0) toolbar2_fixed_button_pane_g1

0x4c43,	// (0x00034700) toolbar2_fixed_button_pane_g2

0x4c3b,	// (0x000346f8) toolbar2_fixed_button_pane_g3

0x4c53,	// (0x00034710) toolbar2_fixed_button_pane_g4

0x4c4b,	// (0x00034708) toolbar2_fixed_button_pane_g5

0x4c5b,	// (0x00034718) toolbar2_fixed_button_pane_g6

0x4c63,	// (0x00034720) toolbar2_fixed_button_pane_g7

0x4c73,	// (0x00034730) toolbar2_fixed_button_pane_g8

0x4c6b,	// (0x00034728) toolbar2_fixed_button_pane_g9

0x0008,

0xf895,	// (0x0003f352) toolbar2_fixed_button_pane_g

0x873e,	// (0x000381fb) cell_toolbar2_float_pane_ParamLimits

0x873e,	// (0x000381fb) cell_toolbar2_float_pane

0x874f,	// (0x0003820c) cell_toolbar2_float_pane_g1

0x8736,	// (0x000381f3) toolbar2_fixed_button_pane_cp

0xdb96,	// (0x0003d653) fep_vkb_accented_list_pane_ParamLimits

0xdb96,	// (0x0003d653) fep_vkb_accented_list_pane

0x175f,	// (0x0003121c) bg_popup_fep_shadow_pane_g9

0x3d65,	// (0x00033822) bg_popup_fep_shadow_pane_cp3

0x3270,	// (0x00032d2d) list_accented_list_pane

0x8758,	// (0x00038215) list_single_accented_list_pane_ParamLimits

0x8758,	// (0x00038215) list_single_accented_list_pane

0x3d65,	// (0x00033822) list_highlight_pane_cp10

0x8769,	// (0x00038226) list_single_accented_list_pane_t1

0xce4c,	// (0x0003c909) popup_slider_window_ParamLimits

0xce4c,	// (0x0003c909) popup_slider_window

0x83b1,	// (0x00037e6e) aid_indentation_list_msg

0xe1fb,	// (0x0003dcb8) bg_popup_window_pane_cp19

0x88a3,	// (0x00038360) popup_slider_window_g1

0x88bf,	// (0x0003837c) popup_slider_window_g2

0x88db,	// (0x00038398) popup_slider_window_g3

0x0005,

0xfd12,	// (0x0003f7cf) popup_slider_window_g

0x8937,	// (0x000383f4) popup_slider_window_t1

0x89ab,	// (0x00038468) small_volume_slider_vertical_pane

0x7277,	// (0x00036d34) small_volume_slider_vertical_pane_g1

0x7277,	// (0x00036d34) small_volume_slider_vertical_pane_g2

0x89c7,	// (0x00038484) small_volume_slider_vertical_pane_g3

0x0002,

0xfd24,	// (0x0003f7e1) small_volume_slider_vertical_pane_g

0xb006,	// (0x0003aac3) area_side_right_pane_ParamLimits

0xb006,	// (0x0003aac3) area_side_right_pane

0xbdc2,	// (0x0003b87f) aid_size_side_button_ParamLimits

0xbdc2,	// (0x0003b87f) aid_size_side_button

0xbddb,	// (0x0003b898) grid_sctrl_middle_pane_ParamLimits

0xbddb,	// (0x0003b898) grid_sctrl_middle_pane

0x1982,	// (0x0003143f) sctrl_sk_bottom_pane

0x1993,	// (0x00031450) sctrl_sk_top_pane

0x19a5,	// (0x00031462) aid_touch_sctrl_top

0x19b2,	// (0x0003146f) bg_sctrl_sk_pane_ParamLimits

0x19b2,	// (0x0003146f) bg_sctrl_sk_pane

0x19c0,	// (0x0003147d) sctrl_sk_top_pane_g1

0x19cd,	// (0x0003148a) sctrl_sk_top_pane_t1

0x19a5,	// (0x00031462) aid_touch_sctrl_bottom

0x19b2,	// (0x0003146f) bg_sctrl_sk_pane_cp_ParamLimits

0x19b2,	// (0x0003146f) bg_sctrl_sk_pane_cp

0x19e8,	// (0x000314a5) sctrl_sk_bottom_pane_g1

0x19cd,	// (0x0003148a) sctrl_sk_bottom_pane_t1

0xbdf5,	// (0x0003b8b2) cell_sctrl_middle_pane_ParamLimits

0xbdf5,	// (0x0003b8b2) cell_sctrl_middle_pane

0xbe08,	// (0x0003b8c5) aid_touch_sctrl_middle_ParamLimits

0xbe08,	// (0x0003b8c5) aid_touch_sctrl_middle

0xbe15,	// (0x0003b8d2) bg_sctrl_middle_pane_ParamLimits

0xbe15,	// (0x0003b8d2) bg_sctrl_middle_pane

0x2062,	// (0x00031b1f) cell_sctrl_middle_pane_g1_ParamLimits

0x2062,	// (0x00031b1f) cell_sctrl_middle_pane_g1

0xbe23,	// (0x0003b8e0) cell_sctrl_middle_pane_g2_ParamLimits

0xbe23,	// (0x0003b8e0) cell_sctrl_middle_pane_g2

0x0001,

0xfd30,	// (0x0003f7ed) cell_sctrl_middle_pane_g_ParamLimits

0xfd30,	// (0x0003f7ed) cell_sctrl_middle_pane_g

0x4c33,	// (0x000346f0) bg_sctrl_middle_pane_g1

0x4c3b,	// (0x000346f8) bg_sctrl_middle_pane_g2

0x4c43,	// (0x00034700) bg_sctrl_middle_pane_g3

0x4c4b,	// (0x00034708) bg_sctrl_middle_pane_g4

0x4c53,	// (0x00034710) bg_sctrl_middle_pane_g5

0x4c5b,	// (0x00034718) bg_sctrl_middle_pane_g6

0x4c63,	// (0x00034720) bg_sctrl_middle_pane_g7

0x4c6b,	// (0x00034728) bg_sctrl_middle_pane_g8

0x0007,

0xfd35,	// (0x0003f7f2) bg_sctrl_middle_pane_g

0x4c73,	// (0x00034730) bg_sctrl_middle_pane_g8_copy1

0x4c33,	// (0x000346f0) bg_sctrl_sk_pane_g1

0x4c43,	// (0x00034700) bg_sctrl_sk_pane_g2

0x4c3b,	// (0x000346f8) bg_sctrl_sk_pane_g3

0x0008,

0xf895,	// (0x0003f352) bg_sctrl_sk_pane_g

0x3036,	// (0x00032af3) aid_size_touch_scroll_bar

0x4c53,	// (0x00034710) bg_sctrl_sk_pane_g4

0x4c4b,	// (0x00034708) bg_sctrl_sk_pane_g5

0x4c5b,	// (0x00034718) bg_sctrl_sk_pane_g6

0x4c63,	// (0x00034720) bg_sctrl_sk_pane_g7

0x4c73,	// (0x00034730) bg_sctrl_sk_pane_g8

0x4c6b,	// (0x00034728) bg_sctrl_sk_pane_g9

0x4195,	// (0x00033c52) popup_fep_china_hwr2_fs_candidate_window

0xc908,	// (0x0003c3c5) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc908,	// (0x0003c3c5) popup_fep_china_hwr2_fs_control_window

0x177f,	// (0x0003123c) sctrl_sk_top_pane_g2

0x0001,

0xfd2b,	// (0x0003f7e8) sctrl_sk_top_pane_g

0xe2b3,	// (0x0003dd70) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe2b3,	// (0x0003dd70) aid_fep_china_hwr2_fs_cell

0xe2c9,	// (0x0003dd86) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe2c9,	// (0x0003dd86) bg_popup_fep_shadow_pane_cp4

0xe2e0,	// (0x0003dd9d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe2e0,	// (0x0003dd9d) bg_popup_fep_shadow_pane_cp5

0xe2f2,	// (0x0003ddaf) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe2f2,	// (0x0003ddaf) popup_fep_china_hwr2_fs_control_bar_grid

0xe306,	// (0x0003ddc3) popup_fep_china_hwr2_fs_control_funtion_grid

0x8a26,	// (0x000384e3) aid_fep_china_hwr2_fs_candi_cell

0x21e1,	// (0x00031c9e) bg_popup_fep_shadow_pane_cp6

0x8a30,	// (0x000384ed) popup_fep_china_hwr2_fs_candidate_grid

0xe30e,	// (0x0003ddcb) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe30e,	// (0x0003ddcb) cell_fep_china_hwr2_fs_funtion_grid

0x7277,	// (0x00036d34) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8a52,	// (0x0003850f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8a52,	// (0x0003850f) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8a60,	// (0x0003851d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8a60,	// (0x0003851d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd46,	// (0x0003f803) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd46,	// (0x0003f803) cell_fep_china_hwr2_fs_funtion_grid_g

0xe326,	// (0x0003dde3) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe326,	// (0x0003dde3) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe33b,	// (0x0003ddf8) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe33b,	// (0x0003ddf8) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd4b,	// (0x0003f808) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd4b,	// (0x0003f808) cell_fep_china_hwr2_fs_funtion_grid_t

0x8aa7,	// (0x00038564) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8aaf,	// (0x0003856c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8ab7,	// (0x00038574) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd50,	// (0x0003f80d) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8abf,	// (0x0003857c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8abf,	// (0x0003857c) cell_fep_china_hwr2_fs_candidate_grid

0x8ade,	// (0x0003859b) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8ae6,	// (0x000385a3) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7277,	// (0x00036d34) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7277,	// (0x00036d34) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb64,	// (0x0003f621) cell_fep_china_hwr2_fs_candidate_grid_g

0x8aee,	// (0x000385ab) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4810,	// (0x000342cd) clock_nsta_pane_cp_24_ParamLimits

0x4810,	// (0x000342cd) clock_nsta_pane_cp_24

0x4890,	// (0x0003434d) indicator_nsta_pane_cp_24_ParamLimits

0x4890,	// (0x0003434d) indicator_nsta_pane_cp_24

0x592b,	// (0x000353e8) heading_pane_g1

0x0001,

0xf8fa,	// (0x0003f3b7) heading_pane_g

0x63db,	// (0x00035e98) grid_sct_catagory_button_pane

0x640d,	// (0x00035eca) scroll_pane_cp5_ParamLimits

0x6e7e,	// (0x0003693b) button_value_adjust_pane_cp5_ParamLimits

0x6e7e,	// (0x0003693b) button_value_adjust_pane_cp5

0x6f63,	// (0x00036a20) form2_midp_time_pane_ParamLimits

0x8afc,	// (0x000385b9) cell_sct_catagory_button_pane_ParamLimits

0x8afc,	// (0x000385b9) cell_sct_catagory_button_pane

0x723c,	// (0x00036cf9) bg_button_pane_cp01_ParamLimits

0x723c,	// (0x00036cf9) bg_button_pane_cp01

0x7277,	// (0x00036d34) cell_sct_catagory_button_pane_g1

0xcecd,	// (0x0003c98a) popup_tb_extension_window

0xe357,	// (0x0003de14) aid_size_cell_ext_ParamLimits

0xe357,	// (0x0003de14) aid_size_cell_ext

0x2e78,	// (0x00032935) bg_tb_trans_pane_cp1_ParamLimits

0x2e78,	// (0x00032935) bg_tb_trans_pane_cp1

0xe38a,	// (0x0003de47) grid_tb_ext_pane_ParamLimits

0xe38a,	// (0x0003de47) grid_tb_ext_pane

0xe3ca,	// (0x0003de87) cell_tb_ext_pane_ParamLimits

0xe3ca,	// (0x0003de87) cell_tb_ext_pane

0xe3f4,	// (0x0003deb1) cell_tb_ext_pane_g1_ParamLimits

0xe3f4,	// (0x0003deb1) cell_tb_ext_pane_g1

0x8b92,	// (0x0003864f) cell_tb_ext_pane_t1

0x255f,	// (0x0003201c) list_highlight_pane_cp11_ParamLimits

0x255f,	// (0x0003201c) list_highlight_pane_cp11

0xf525,	// (0x0003efe2) popup_uni_indicator_window_ParamLimits

0xf525,	// (0x0003efe2) popup_uni_indicator_window

0x3107,	// (0x00032bc4) bg_popup_sub_pane_cp14

0x8bad,	// (0x0003866a) list_uniindi_pane

0x8bb9,	// (0x00038676) uniindi_top_pane

0x255f,	// (0x0003201c) bg_uniindi_top_pane

0x8bda,	// (0x00038697) uniindi_top_pane_g1

0x8bf0,	// (0x000386ad) uniindi_top_pane_g2

0x0003,

0xfd57,	// (0x0003f814) uniindi_top_pane_g

0x8c1a,	// (0x000386d7) uniindi_top_pane_t1

0x8c46,	// (0x00038703) list_single_uniindi_pane_ParamLimits

0x8c46,	// (0x00038703) list_single_uniindi_pane

0x7277,	// (0x00036d34) bg_uniindi_top_pane_g1

0x8c58,	// (0x00038715) list_single_uniindi_pane_g1

0x8c6b,	// (0x00038728) list_single_uniindi_pane_t1

0xf40c,	// (0x0003eec9) control_bg_pane

0x8c90,	// (0x0003874d) bg_sctrl_sk_pane_cp1

0x8c99,	// (0x00038756) bg_sctrl_sk_pane_cp2

0x8ca2,	// (0x0003875f) control_bg_pane_g1

0x8cab,	// (0x00038768) control_bg_pane_g2

0x0001,

0xfd60,	// (0x0003f81d) control_bg_pane_g

0x6cd2,	// (0x0003678f) cell_indicator_nsta_pane_g1_ParamLimits

0xd9c5,	// (0x0003d482) cell_indicator_nsta_pane_g2_ParamLimits

0xfad5,	// (0x0003f592) cell_indicator_nsta_pane_g_ParamLimits

0x292a,	// (0x000323e7) form2_midp_time_pane_t1_ParamLimits

0x7be9,	// (0x000376a6) main_idle_act4_pane_ParamLimits

0x7be9,	// (0x000376a6) main_idle_act4_pane

0xcecd,	// (0x0003c98a) popup_tb_extension_window_ParamLimits

0xe3b2,	// (0x0003de6f) tb_ext_find_pane_ParamLimits

0xe3b2,	// (0x0003de6f) tb_ext_find_pane

0x8cb4,	// (0x00038771) ai_gene_pane_1_cp1

0x3eae,	// (0x0003396b) ai_gene_pane_2_cp1

0x8cbc,	// (0x00038779) list_single_idle_plugin_calendar_pane

0x8cc5,	// (0x00038782) list_single_idle_plugin_notification_pane

0x8cce,	// (0x0003878b) list_single_idle_plugin_player_pane

0xe411,	// (0x0003dece) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe411,	// (0x0003dece) list_single_idle_plugin_shortcut_pane

0xe439,	// (0x0003def6) main_idle_act4_pane_t1

0xe451,	// (0x0003df0e) main_idle_act4_pane_t2

0x0001,

0xfd65,	// (0x0003f822) main_idle_act4_pane_t

0xe469,	// (0x0003df26) middle_sk_idle_act4_pane_ParamLimits

0xe469,	// (0x0003df26) middle_sk_idle_act4_pane

0xe485,	// (0x0003df42) popup_clock_digital_analogue_window_cp2

0xe4ac,	// (0x0003df69) shortcut_wheel_idle_act4_pane_ParamLimits

0xe4ac,	// (0x0003df69) shortcut_wheel_idle_act4_pane

0x7277,	// (0x00036d34) shortcut_wheel_idle_act4_pane_g1

0x7277,	// (0x00036d34) shortcut_wheel_idle_act4_pane_g2

0x7277,	// (0x00036d34) shortcut_wheel_idle_act4_pane_g3

0x7277,	// (0x00036d34) shortcut_wheel_idle_act4_pane_g4

0x7277,	// (0x00036d34) shortcut_wheel_idle_act4_pane_g5

0x8d61,	// (0x0003881e) shortcut_wheel_idle_act4_pane_g6

0x8d69,	// (0x00038826) shortcut_wheel_idle_act4_pane_g7

0x8d71,	// (0x0003882e) shortcut_wheel_idle_act4_pane_g8

0x8d79,	// (0x00038836) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd6a,	// (0x0003f827) shortcut_wheel_idle_act4_pane_g

0xd82c,	// (0x0003d2e9) middle_sk_idle_act4_pane_g1_ParamLimits

0xd82c,	// (0x0003d2e9) middle_sk_idle_act4_pane_g1

0xe529,	// (0x0003dfe6) middle_sk_idle_act4_pane_g2_ParamLimits

0xe529,	// (0x0003dfe6) middle_sk_idle_act4_pane_g2

0x0001,

0xfd8d,	// (0x0003f84a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd8d,	// (0x0003f84a) middle_sk_idle_act4_pane_g

0xe541,	// (0x0003dffe) middle_sk_idle_act4_pane_t1_ParamLimits

0xe541,	// (0x0003dffe) middle_sk_idle_act4_pane_t1

0xe570,	// (0x0003e02d) grid_ai_shortcut_pane_ParamLimits

0xe570,	// (0x0003e02d) grid_ai_shortcut_pane

0xe58d,	// (0x0003e04a) list_highlight_pane_cp16_ParamLimits

0xe58d,	// (0x0003e04a) list_highlight_pane_cp16

0xe59a,	// (0x0003e057) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe59a,	// (0x0003e057) list_single_idle_plugin_shortcut_pane_g1

0xe5a6,	// (0x0003e063) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe5a6,	// (0x0003e063) list_single_idle_plugin_shortcut_pane_g2

0xe5c4,	// (0x0003e081) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe5c4,	// (0x0003e081) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd92,	// (0x0003f84f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd92,	// (0x0003f84f) list_single_idle_plugin_shortcut_pane_g

0xe5d9,	// (0x0003e096) cell_ai_shortcut_pane_ParamLimits

0xe5d9,	// (0x0003e096) cell_ai_shortcut_pane

0xe5ef,	// (0x0003e0ac) cell_ai_shortcut_pane_g1_ParamLimits

0xe5ef,	// (0x0003e0ac) cell_ai_shortcut_pane_g1

0x8cb4,	// (0x00038771) ai_gene_pane_1_cp2

0x8eaa,	// (0x00038967) ai_gene_pane_2_cp2

0x8eb2,	// (0x0003896f) list_highlight_pane_cp15

0x8ebb,	// (0x00038978) list_single_idle_plugin_calendar_pane_g1

0x8eb2,	// (0x0003896f) list_highlight_pane_cp17

0x8ec3,	// (0x00038980) list_single_idle_plugin_calendar_pane_g1_copy1

0x8ecb,	// (0x00038988) list_single_idle_plugin_player_pane_g1

0x6642,	// (0x000360ff) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd99,	// (0x0003f856) list_single_idle_plugin_player_pane_g

0x8ed3,	// (0x00038990) list_single_idle_plugin_player_pane_t1

0x8ee1,	// (0x0003899e) list_single_idle_plugin_player_pane_t2

0x8eef,	// (0x000389ac) list_single_idle_plugin_player_pane_t3

0x8efd,	// (0x000389ba) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd9e,	// (0x0003f85b) list_single_idle_plugin_player_pane_t

0x8f0b,	// (0x000389c8) wait_bar_pane_cp15

0x8f13,	// (0x000389d0) grid_ai_notification_pane

0x6642,	// (0x000360ff) list_single_idle_plugin_notification_pane_g1

0xe611,	// (0x0003e0ce) cell_ai_notification_pane_ParamLimits

0xe611,	// (0x0003e0ce) cell_ai_notification_pane

0x8f29,	// (0x000389e6) cell_ai_notification_pane_g1

0x8f31,	// (0x000389ee) cell_ai_notification_pane_t1

0xe61e,	// (0x0003e0db) tb_ext_find_button_pane

0xe626,	// (0x0003e0e3) tb_ext_find_pane_g1

0xe62e,	// (0x0003e0eb) tb_ext_find_pane_t1

0x3777,	// (0x00033234) tb_ext_find_button_pane_g1

0x8f5d,	// (0x00038a1a) tb_ext_find_button_pane_g2

0x0001,

0xfda7,	// (0x0003f864) tb_ext_find_button_pane_g

0xe439,	// (0x0003def6) main_idle_act4_pane_t1_ParamLimits

0xe451,	// (0x0003df0e) main_idle_act4_pane_t2_ParamLimits

0xfd65,	// (0x0003f822) main_idle_act4_pane_t_ParamLimits

0xe485,	// (0x0003df42) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe49c,	// (0x0003df59) sat_plugin_idle_act4_pane_ParamLimits

0xe49c,	// (0x0003df59) sat_plugin_idle_act4_pane

0xe63c,	// (0x0003e0f9) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe63c,	// (0x0003e0f9) sat_plugin_idle_act4_pane_t1

0xe654,	// (0x0003e111) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe654,	// (0x0003e111) sat_plugin_idle_act4_pane_t2

0xe66c,	// (0x0003e129) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe66c,	// (0x0003e129) sat_plugin_idle_act4_pane_t3

0xe684,	// (0x0003e141) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe684,	// (0x0003e141) sat_plugin_idle_act4_pane_t4

0x0003,

0xfdac,	// (0x0003f869) sat_plugin_idle_act4_pane_t_ParamLimits

0xfdac,	// (0x0003f869) sat_plugin_idle_act4_pane_t

0xf4d1,	// (0x0003ef8e) popup_battery_window_ParamLimits

0xf4d1,	// (0x0003ef8e) popup_battery_window

0x255f,	// (0x0003201c) bg_popup_sub_pane_cp25_ParamLimits

0x255f,	// (0x0003201c) bg_popup_sub_pane_cp25

0x8fb2,	// (0x00038a6f) popup_battery_window_g1_ParamLimits

0x8fb2,	// (0x00038a6f) popup_battery_window_g1

0x8fbe,	// (0x00038a7b) popup_battery_window_t1_ParamLimits

0x8fbe,	// (0x00038a7b) popup_battery_window_t1

0x8fd0,	// (0x00038a8d) popup_battery_window_t2_ParamLimits

0x8fd0,	// (0x00038a8d) popup_battery_window_t2

0x0001,

0xfdb5,	// (0x0003f872) popup_battery_window_t_ParamLimits

0xfdb5,	// (0x0003f872) popup_battery_window_t

0xc79c,	// (0x0003c259) midp_canvas_pane_ParamLimits

0xc7f7,	// (0x0003c2b4) midp_keypad_pane_ParamLimits

0xc7f7,	// (0x0003c2b4) midp_keypad_pane

0x40eb,	// (0x00033ba8) main_midp_pane_ParamLimits

0x6d2b,	// (0x000367e8) signal_pane_g2_cp_ParamLimits

0xe69c,	// (0x0003e159) aid_size_cell_midp_keypad_ParamLimits

0xe69c,	// (0x0003e159) aid_size_cell_midp_keypad

0xe6ba,	// (0x0003e177) midp_keyp_game_grid_pane_ParamLimits

0xe6ba,	// (0x0003e177) midp_keyp_game_grid_pane

0xe6e1,	// (0x0003e19e) midp_keyp_rocker_pane_ParamLimits

0xe6e1,	// (0x0003e19e) midp_keyp_rocker_pane

0xe726,	// (0x0003e1e3) midp_keyp_sk_left_pane_ParamLimits

0xe726,	// (0x0003e1e3) midp_keyp_sk_left_pane

0xe77a,	// (0x0003e237) midp_keyp_sk_right_pane_ParamLimits

0xe77a,	// (0x0003e237) midp_keyp_sk_right_pane

0x21e1,	// (0x00031c9e) bg_button_pane_cp03

0xe7ce,	// (0x0003e28b) midp_keyp_sk_left_pane_g1

0x21e1,	// (0x00031c9e) bg_button_pane_cp04

0xe7ce,	// (0x0003e28b) midp_keyp_sk_right_pane_g1

0x7277,	// (0x00036d34) midp_keyp_rocker_pane_g1

0xe7d7,	// (0x0003e294) keyp_game_cell_pane_ParamLimits

0xe7d7,	// (0x0003e294) keyp_game_cell_pane

0x21e1,	// (0x00031c9e) bg_button_pane_cp02

0xe7fd,	// (0x0003e2ba) keyp_game_cell_pane_g1

0xb048,	// (0x0003ab05) popup_fep_vkb2_window_ParamLimits

0xb048,	// (0x0003ab05) popup_fep_vkb2_window

0xbe2f,	// (0x0003b8ec) aid_size_cell_vkb2_ParamLimits

0xbe2f,	// (0x0003b8ec) aid_size_cell_vkb2

0xbe5d,	// (0x0003b91a) popup_fep_vkb2_window_g1_ParamLimits

0xbe5d,	// (0x0003b91a) popup_fep_vkb2_window_g1

0xbead,	// (0x0003b96a) vkb2_area_bottom_pane_ParamLimits

0xbead,	// (0x0003b96a) vkb2_area_bottom_pane

0xbf09,	// (0x0003b9c6) vkb2_area_keypad_pane_ParamLimits

0xbf09,	// (0x0003b9c6) vkb2_area_keypad_pane

0xbf57,	// (0x0003ba14) vkb2_area_top_pane_ParamLimits

0xbf57,	// (0x0003ba14) vkb2_area_top_pane

0xbfdd,	// (0x0003ba9a) vkb2_top_entry_pane_ParamLimits

0xbfdd,	// (0x0003ba9a) vkb2_top_entry_pane

0xc00a,	// (0x0003bac7) vkb2_top_grid_left_pane_ParamLimits

0xc00a,	// (0x0003bac7) vkb2_top_grid_left_pane

0xc02a,	// (0x0003bae7) vkb2_top_grid_right_pane_ParamLimits

0xc02a,	// (0x0003bae7) vkb2_top_grid_right_pane

0x1c5e,	// (0x0003171b) vkb2_cell_keypad_pane_ParamLimits

0x1c5e,	// (0x0003171b) vkb2_cell_keypad_pane

0xc070,	// (0x0003bb2d) vkb2_area_bottom_grid_pane_ParamLimits

0xc070,	// (0x0003bb2d) vkb2_area_bottom_grid_pane

0xc09a,	// (0x0003bb57) vkb2_area_bottom_pane_g1_ParamLimits

0xc09a,	// (0x0003bb57) vkb2_area_bottom_pane_g1

0xc0c0,	// (0x0003bb7d) vkb2_area_bottom_pane_g2_ParamLimits

0xc0c0,	// (0x0003bb7d) vkb2_area_bottom_pane_g2

0xc0f1,	// (0x0003bbae) vkb2_area_bottom_pane_g3_ParamLimits

0xc0f1,	// (0x0003bbae) vkb2_area_bottom_pane_g3

0x0002,

0xfdba,	// (0x0003f877) vkb2_area_bottom_pane_g_ParamLimits

0xfdba,	// (0x0003f877) vkb2_area_bottom_pane_g

0x1ded,	// (0x000318aa) vkb2_top_cell_left_pane_ParamLimits

0x1ded,	// (0x000318aa) vkb2_top_cell_left_pane

0xe806,	// (0x0003e2c3) vkb2_top_entry_pane_g1_ParamLimits

0xe806,	// (0x0003e2c3) vkb2_top_entry_pane_g1

0xe814,	// (0x0003e2d1) vkb2_top_entry_pane_t1_ParamLimits

0xe814,	// (0x0003e2d1) vkb2_top_entry_pane_t1

0x915d,	// (0x00038c1a) vkb2_top_entry_pane_t2_ParamLimits

0x915d,	// (0x00038c1a) vkb2_top_entry_pane_t2

0x9175,	// (0x00038c32) vkb2_top_entry_pane_t3_ParamLimits

0x9175,	// (0x00038c32) vkb2_top_entry_pane_t3

0x0002,

0xfdc1,	// (0x0003f87e) vkb2_top_entry_pane_t_ParamLimits

0xfdc1,	// (0x0003f87e) vkb2_top_entry_pane_t

0xc15b,	// (0x0003bc18) vkb2_top_grid_right_pane_g1_ParamLimits

0xc15b,	// (0x0003bc18) vkb2_top_grid_right_pane_g1

0x1e50,	// (0x0003190d) vkb2_top_grid_right_pane_g2_ParamLimits

0x1e50,	// (0x0003190d) vkb2_top_grid_right_pane_g2

0x1e68,	// (0x00031925) vkb2_top_grid_right_pane_g3_ParamLimits

0x1e68,	// (0x00031925) vkb2_top_grid_right_pane_g3

0xc171,	// (0x0003bc2e) vkb2_top_grid_right_pane_g4_ParamLimits

0xc171,	// (0x0003bc2e) vkb2_top_grid_right_pane_g4

0x0003,

0xfdc8,	// (0x0003f885) vkb2_top_grid_right_pane_g_ParamLimits

0xfdc8,	// (0x0003f885) vkb2_top_grid_right_pane_g

0x1e96,	// (0x00031953) vkb2_top_cell_left_pane_g1

0x1ead,	// (0x0003196a) vkb2_cell_keypad_pane_g1_ParamLimits

0x1ead,	// (0x0003196a) vkb2_cell_keypad_pane_g1

0x918b,	// (0x00038c48) vkb2_cell_keypad_pane_t1_ParamLimits

0x918b,	// (0x00038c48) vkb2_cell_keypad_pane_t1

0x1ed1,	// (0x0003198e) vkb2_cell_bottom_grid_pane_ParamLimits

0x1ed1,	// (0x0003198e) vkb2_cell_bottom_grid_pane

0x1f0a,	// (0x000319c7) vkb2_cell_bottom_grid_pane_g1

0xe4cd,	// (0x0003df8a) aid_call2_pane_cp02

0xe4d5,	// (0x0003df92) aid_call_pane_cp02

0xe4dd,	// (0x0003df9a) clock_digital_number_pane_cp10

0xe4e5,	// (0x0003dfa2) clock_digital_number_pane_cp11

0xe4ed,	// (0x0003dfaa) clock_digital_number_pane_cp12

0xe4f5,	// (0x0003dfb2) clock_digital_number_pane_cp13

0xe4fd,	// (0x0003dfba) clock_digital_separator_pane_cp10

0x3777,	// (0x00033234) popup_clock_digital_analogue_window_cp2_g1

0x3777,	// (0x00033234) popup_clock_digital_analogue_window_cp2_g2

0xe505,	// (0x0003dfc2) popup_clock_digital_analogue_window_cp2_g3

0x3777,	// (0x00033234) popup_clock_digital_analogue_window_cp2_g4

0xe505,	// (0x0003dfc2) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd7d,	// (0x0003f83a) popup_clock_digital_analogue_window_cp2_g

0xe50d,	// (0x0003dfca) popup_clock_digital_analogue_window_cp2_t1

0xe51b,	// (0x0003dfd8) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd88,	// (0x0003f845) popup_clock_digital_analogue_window_cp2_t

0x7277,	// (0x00036d34) clock_digital_number_pane_cp10_g1

0x7277,	// (0x00036d34) clock_digital_number_pane_cp10_g2

0x0001,

0xfb64,	// (0x0003f621) clock_digital_number_pane_cp10_g

0x7277,	// (0x00036d34) clock_digital_separator_pane_cp10_g1

0x7277,	// (0x00036d34) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb64,	// (0x0003f621) clock_digital_separator_pane_cp10_g

0x8bfc,	// (0x000386b9) uniindi_top_pane_g3

0x8c0d,	// (0x000386ca) uniindi_top_pane_g4

0x1cce,	// (0x0003178b) vkb2_row_keypad_pane_ParamLimits

0x1cce,	// (0x0003178b) vkb2_row_keypad_pane

0x1f26,	// (0x000319e3) vkb2_cell_t_keypad_pane_ParamLimits

0x1f26,	// (0x000319e3) vkb2_cell_t_keypad_pane

0x1f36,	// (0x000319f3) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1f36,	// (0x000319f3) vkb2_cell_t_keypad_pane_cp08

0x1f4b,	// (0x00031a08) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1f4b,	// (0x00031a08) vkb2_cell_t_keypad_pane_cp09

0x1f5f,	// (0x00031a1c) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1f5f,	// (0x00031a1c) vkb2_cell_t_keypad_pane_cp01

0x1f70,	// (0x00031a2d) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1f70,	// (0x00031a2d) vkb2_cell_t_keypad_pane_cp02

0x1f81,	// (0x00031a3e) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1f81,	// (0x00031a3e) vkb2_cell_t_keypad_pane_cp03

0x1f92,	// (0x00031a4f) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1f92,	// (0x00031a4f) vkb2_cell_t_keypad_pane_cp04

0x1fa3,	// (0x00031a60) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1fa3,	// (0x00031a60) vkb2_cell_t_keypad_pane_cp05

0x1fb4,	// (0x00031a71) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1fb4,	// (0x00031a71) vkb2_cell_t_keypad_pane_cp06

0x1fc7,	// (0x00031a84) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1fc7,	// (0x00031a84) vkb2_cell_t_keypad_pane_cp07

0x1fdc,	// (0x00031a99) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1fdc,	// (0x00031a99) vkb2_cell_t_keypad_pane_cp10

0x177f,	// (0x0003123c) vkb2_cell_t_keypad_pane_g1

0x91a2,	// (0x00038c5f) vkb2_cell_t_keypad_pane_t1

0xf40c,	// (0x0003eec9) popup_grid_graphic2_window

0xe84d,	// (0x0003e30a) aid_size_cell_graphic2_ParamLimits

0xe84d,	// (0x0003e30a) aid_size_cell_graphic2

0x52a8,	// (0x00034d65) bg_popup_window_pane_cp21_ParamLimits

0x52a8,	// (0x00034d65) bg_popup_window_pane_cp21

0xe87f,	// (0x0003e33c) graphic2_pages_pane_ParamLimits

0xe87f,	// (0x0003e33c) graphic2_pages_pane

0xe8d7,	// (0x0003e394) grid_graphic2_control_pane_ParamLimits

0xe8d7,	// (0x0003e394) grid_graphic2_control_pane

0xe90b,	// (0x0003e3c8) grid_graphic2_pane_ParamLimits

0xe90b,	// (0x0003e3c8) grid_graphic2_pane

0xe982,	// (0x0003e43f) cell_graphic2_pane

0x21e1,	// (0x00031c9e) main_comp_mode_pane

0x846d,	// (0x00037f2a) list_ai3_gene_pane_ParamLimits

0xe1fb,	// (0x0003dcb8) bg_popup_window_pane_cp19_ParamLimits

0x8841,	// (0x000382fe) bg_touch_area_indi_pane_ParamLimits

0x8841,	// (0x000382fe) bg_touch_area_indi_pane

0x8857,	// (0x00038314) bg_touch_area_indi_pane_cp01_ParamLimits

0x8857,	// (0x00038314) bg_touch_area_indi_pane_cp01

0x886f,	// (0x0003832c) bg_touch_area_indi_pane_cp02_ParamLimits

0x886f,	// (0x0003832c) bg_touch_area_indi_pane_cp02

0x8889,	// (0x00038346) bg_touch_area_indi_pane_cp03_ParamLimits

0x8889,	// (0x00038346) bg_touch_area_indi_pane_cp03

0x88a3,	// (0x00038360) popup_slider_window_g1_ParamLimits

0x88bf,	// (0x0003837c) popup_slider_window_g2_ParamLimits

0x88db,	// (0x00038398) popup_slider_window_g3_ParamLimits

0xfd12,	// (0x0003f7cf) popup_slider_window_g_ParamLimits

0x8937,	// (0x000383f4) popup_slider_window_t1_ParamLimits

0x89ab,	// (0x00038468) small_volume_slider_vertical_pane_ParamLimits

0xe982,	// (0x0003e43f) cell_graphic2_pane_ParamLimits

0xe9e5,	// (0x0003e4a2) bg_button_pane_cp10_ParamLimits

0xe9e5,	// (0x0003e4a2) bg_button_pane_cp10

0xe9f8,	// (0x0003e4b5) bg_button_pane_cp11_ParamLimits

0xe9f8,	// (0x0003e4b5) bg_button_pane_cp11

0xea0b,	// (0x0003e4c8) graphic2_pages_pane_g1_ParamLimits

0xea0b,	// (0x0003e4c8) graphic2_pages_pane_g1

0xea26,	// (0x0003e4e3) graphic2_pages_pane_g2_ParamLimits

0xea26,	// (0x0003e4e3) graphic2_pages_pane_g2

0x0001,

0xfdd6,	// (0x0003f893) graphic2_pages_pane_g_ParamLimits

0xfdd6,	// (0x0003f893) graphic2_pages_pane_g

0xea3e,	// (0x0003e4fb) graphic2_pages_pane_t1_ParamLimits

0xea3e,	// (0x0003e4fb) graphic2_pages_pane_t1

0xea56,	// (0x0003e513) cell_graphic2_control_pane_ParamLimits

0xea56,	// (0x0003e513) cell_graphic2_control_pane

0xea70,	// (0x0003e52d) cell_graphic2_pane_g1_ParamLimits

0xea70,	// (0x0003e52d) cell_graphic2_pane_g1

0xd83a,	// (0x0003d2f7) cell_graphic2_pane_g2_ParamLimits

0xd83a,	// (0x0003d2f7) cell_graphic2_pane_g2

0xe37d,	// (0x0003de3a) cell_graphic2_pane_g3_ParamLimits

0xe37d,	// (0x0003de3a) cell_graphic2_pane_g3

0xd847,	// (0x0003d304) cell_graphic2_pane_g4_ParamLimits

0xd847,	// (0x0003d304) cell_graphic2_pane_g4

0xea7d,	// (0x0003e53a) cell_graphic2_pane_g5_ParamLimits

0xea7d,	// (0x0003e53a) cell_graphic2_pane_g5

0x0004,

0xfddb,	// (0x0003f898) cell_graphic2_pane_g_ParamLimits

0xfddb,	// (0x0003f898) cell_graphic2_pane_g

0xea9d,	// (0x0003e55a) cell_graphic2_pane_t1_ParamLimits

0xea9d,	// (0x0003e55a) cell_graphic2_pane_t1

0x591f,	// (0x000353dc) grid_highlight_pane_cp11_ParamLimits

0x591f,	// (0x000353dc) grid_highlight_pane_cp11

0x3107,	// (0x00032bc4) bg_button_pane_cp05

0xeab4,	// (0x0003e571) cell_graphic2_control_pane_g1

0x7277,	// (0x00036d34) bg_touch_area_indi_pane_g1

0x942b,	// (0x00038ee8) aid_cmod_rocker_key_size

0x9435,	// (0x00038ef2) aid_cmode_itu_key_size

0x943f,	// (0x00038efc) main_cmode_video_pane

0x9449,	// (0x00038f06) main_comp_mode_itu_pane

0x9455,	// (0x00038f12) main_comp_mode_rocker_pane

0x9461,	// (0x00038f1e) cell_cmode_rocker_pane_ParamLimits

0x9461,	// (0x00038f1e) cell_cmode_rocker_pane

0x9475,	// (0x00038f32) cell_cmode_itu_pane_ParamLimits

0x9475,	// (0x00038f32) cell_cmode_itu_pane

0x3107,	// (0x00032bc4) bg_button_pane_cp06_ParamLimits

0x3107,	// (0x00032bc4) bg_button_pane_cp06

0x7501,	// (0x00036fbe) cell_cmode_rocker_pane_g1_ParamLimits

0x7501,	// (0x00036fbe) cell_cmode_rocker_pane_g1

0x8a52,	// (0x0003850f) cell_cmode_rocker_pane_g2_ParamLimits

0x8a52,	// (0x0003850f) cell_cmode_rocker_pane_g2

0x0001,

0xfde6,	// (0x0003f8a3) cell_cmode_rocker_pane_g_ParamLimits

0xfde6,	// (0x0003f8a3) cell_cmode_rocker_pane_g

0x21e1,	// (0x00031c9e) bg_button_pane_cp07

0x948c,	// (0x00038f49) cell_cmode_itu_pane_g1

0x9495,	// (0x00038f52) cell_cmode_itu_pane_t1

0x94a3,	// (0x00038f60) cell_cmode_itu_pane_t2

0x0001,

0xfdeb,	// (0x0003f8a8) cell_cmode_itu_pane_t

0x8c80,	// (0x0003873d) aid_touch_ctrl_left

0x8c88,	// (0x00038745) aid_touch_ctrl_right

0x21e1,	// (0x00031c9e) compa_mode_pane

0xeac1,	// (0x0003e57e) aid_cmod_rocker_key_size_cp

0xeacb,	// (0x0003e588) aid_cmode_itu_key_size_cp

0x94c5,	// (0x00038f82) compa_mode_pane_g1

0x94cd,	// (0x00038f8a) compa_mode_pane_g2

0x94d5,	// (0x00038f92) compa_mode_pane_g3

0x0002,

0xfdf0,	// (0x0003f8ad) compa_mode_pane_g

0xead5,	// (0x0003e592) main_comp_mode_itu_pane_cp

0xeadd,	// (0x0003e59a) main_comp_mode_rocker_pane_cp

0xeae5,	// (0x0003e5a2) cell_cmode_itu_pane_cp_ParamLimits

0xeae5,	// (0x0003e5a2) cell_cmode_itu_pane_cp

0xeafa,	// (0x0003e5b7) cell_cmode_rocker_pane_cp_ParamLimits

0xeafa,	// (0x0003e5b7) cell_cmode_rocker_pane_cp

0x3107,	// (0x00032bc4) bg_button_pane_cp06_cp_ParamLimits

0x3107,	// (0x00032bc4) bg_button_pane_cp06_cp

0x7501,	// (0x00036fbe) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7501,	// (0x00036fbe) cell_cmode_rocker_pane_g1_cp

0x7277,	// (0x00036d34) cell_cmode_rocker_pane_g2_cp

0x21e1,	// (0x00031c9e) bg_button_pane_cp07_cp

0xeb0c,	// (0x0003e5c9) cell_cmode_itu_pane_g1_cp

0xeb15,	// (0x0003e5d2) cell_cmode_itu_pane_t1_cp

0xeb15,	// (0x0003e5d2) cell_cmode_itu_pane_t2_cp

0xd7e4,	// (0x0003d2a1) settings_code_pane_cp2

0x22d5,	// (0x00031d92) bg_popup_window_pane_cp3_ParamLimits

0x2cf8,	// (0x000327b5) heading_pane_cp3_ParamLimits

0x2d04,	// (0x000327c1) listscroll_popup_graphic_pane_ParamLimits

0x1512,	// (0x00030fcf) fep_hwr_aid_pane_ParamLimits

0x19a5,	// (0x00031462) aid_touch_sctrl_top_ParamLimits

0x19c0,	// (0x0003147d) sctrl_sk_top_pane_g1_ParamLimits

0x177f,	// (0x0003123c) sctrl_sk_top_pane_g2_ParamLimits

0xfd2b,	// (0x0003f7e8) sctrl_sk_top_pane_g_ParamLimits

0x19cd,	// (0x0003148a) sctrl_sk_top_pane_t1_ParamLimits

0x19a5,	// (0x00031462) aid_touch_sctrl_bottom_ParamLimits

0x19cd,	// (0x0003148a) sctrl_sk_bottom_pane_t1_ParamLimits

0x8bc6,	// (0x00038683) aid_area_touch_clock

0xbf9f,	// (0x0003ba5c) aid_vkb2_area_top_pane_cell_ParamLimits

0xbf9f,	// (0x0003ba5c) aid_vkb2_area_top_pane_cell

0xc04a,	// (0x0003bb07) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc04a,	// (0x0003bb07) aid_vkb2_area_bottom_pane_cell

0x912f,	// (0x00038bec) popup_char_count_window

0x952b,	// (0x00038fe8) popup_char_count_window_g1

0x9534,	// (0x00038ff1) popup_char_count_window_g2

0x953d,	// (0x00038ffa) popup_char_count_window_g3

0x0002,

0xfdf7,	// (0x0003f8b4) popup_char_count_window_g

0x9546,	// (0x00039003) popup_char_count_window_t1

0x1a7a,	// (0x00031537) popup_fep_char_preview_window_ParamLimits

0x1a7a,	// (0x00031537) popup_fep_char_preview_window

0xbfbf,	// (0x0003ba7c) vkb2_top_candi_pane_ParamLimits

0xbfbf,	// (0x0003ba7c) vkb2_top_candi_pane

0xeb23,	// (0x0003e5e0) cell_vkb2_top_candi_pane_ParamLimits

0xeb23,	// (0x0003e5e0) cell_vkb2_top_candi_pane

0x1ff1,	// (0x00031aae) bg_popup_fep_char_preview_window_ParamLimits

0x1ff1,	// (0x00031aae) bg_popup_fep_char_preview_window

0x1fff,	// (0x00031abc) popup_fep_char_preview_window_t1_ParamLimits

0x1fff,	// (0x00031abc) popup_fep_char_preview_window_t1

0x95a5,	// (0x00039062) bg_popup_fep_char_preview_window_g1

0x95ad,	// (0x0003906a) bg_popup_fep_char_preview_window_g2

0x95b5,	// (0x00039072) bg_popup_fep_char_preview_window_g3

0x95bd,	// (0x0003907a) bg_popup_fep_char_preview_window_g4

0x95c5,	// (0x00039082) bg_popup_fep_char_preview_window_g5

0x2039,	// (0x00031af6) bg_popup_fep_char_preview_window_g6

0x95cd,	// (0x0003908a) bg_popup_fep_char_preview_window_g7

0x95d5,	// (0x00039092) bg_popup_fep_char_preview_window_g8

0x95dd,	// (0x0003909a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdfe,	// (0x0003f8bb) bg_popup_fep_char_preview_window_g

0x177f,	// (0x0003123c) cell_vkb2_top_candi_pane_g1_ParamLimits

0x177f,	// (0x0003123c) cell_vkb2_top_candi_pane_g1

0x178d,	// (0x0003124a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x178d,	// (0x0003124a) cell_vkb2_top_candi_pane_g2

0x9226,	// (0x00038ce3) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9226,	// (0x00038ce3) cell_vkb2_top_candi_pane_g3

0x2041,	// (0x00031afe) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2041,	// (0x00031afe) cell_vkb2_top_candi_pane_g4

0x7a00,	// (0x000374bd) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7a00,	// (0x000374bd) cell_vkb2_top_candi_pane_g5

0x2062,	// (0x00031b1f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2062,	// (0x00031b1f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe11,	// (0x0003f8ce) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe11,	// (0x0003f8ce) cell_vkb2_top_candi_pane_g

0x2070,	// (0x00031b2d) cell_vkb2_top_candi_pane_t1

0x1258,	// (0x00030d15) aid_size_touch_slider_mark_ParamLimits

0x1258,	// (0x00030d15) aid_size_touch_slider_mark

0xe8bb,	// (0x0003e378) grid_graphic2_catg_pane_ParamLimits

0xe8bb,	// (0x0003e378) grid_graphic2_catg_pane

0xe951,	// (0x0003e40e) popup_grid_graphic2_window_t1_ParamLimits

0xe951,	// (0x0003e40e) popup_grid_graphic2_window_t1

0xe967,	// (0x0003e424) popup_grid_graphic2_window_t2_ParamLimits

0xe967,	// (0x0003e424) popup_grid_graphic2_window_t2

0x0001,

0xfdd1,	// (0x0003f88e) popup_grid_graphic2_window_t_ParamLimits

0xfdd1,	// (0x0003f88e) popup_grid_graphic2_window_t

0x3107,	// (0x00032bc4) bg_button_pane_cp05_ParamLimits

0xeab4,	// (0x0003e571) cell_graphic2_control_pane_g1_ParamLimits

0xeb77,	// (0x0003e634) cell_graphic2_catg_pane_ParamLimits

0xeb77,	// (0x0003e634) cell_graphic2_catg_pane

0x21e1,	// (0x00031c9e) bg_button_pane_cp12

0xeb89,	// (0x0003e646) cell_graphic2_catg_pane_g1

0x8b92,	// (0x0003864f) cell_tb_ext_pane_t1_ParamLimits

0x1e0d,	// (0x000318ca) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1e0d,	// (0x000318ca) vkb2_top_cell_right_narrow_pane

0x1e25,	// (0x000318e2) vkb2_top_cell_right_wide_pane_ParamLimits

0x1e25,	// (0x000318e2) vkb2_top_cell_right_wide_pane

0x1504,	// (0x00030fc1) bg_vkb2_func_pane_ParamLimits

0x1504,	// (0x00030fc1) bg_vkb2_func_pane

0x1e96,	// (0x00031953) vkb2_top_cell_left_pane_g1_ParamLimits

0x1504,	// (0x00030fc1) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1504,	// (0x00030fc1) bg_vkb2_fuc_pane_cp03

0x1f0a,	// (0x000319c7) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4c3b,	// (0x000346f8) bg_vkb2_func_pane_g1

0x4c43,	// (0x00034700) bg_vkb2_func_pane_g2

0x4c53,	// (0x00034710) bg_vkb2_func_pane_g3

0x4c4b,	// (0x00034708) bg_vkb2_func_pane_g4

0x4c5b,	// (0x00034718) bg_vkb2_func_pane_g5

0x4c63,	// (0x00034720) bg_vkb2_func_pane_g6

0x4c6b,	// (0x00034728) bg_vkb2_func_pane_g7

0x4c73,	// (0x00034730) bg_vkb2_func_pane_g8

0x4c33,	// (0x000346f0) bg_vkb2_func_pane_g9

0x0008,

0xfe1e,	// (0x0003f8db) bg_vkb2_func_pane_g

0x1504,	// (0x00030fc1) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1504,	// (0x00030fc1) bg_vkb2_fuc_pane_cp01

0x1e96,	// (0x00031953) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1e96,	// (0x00031953) vkb2_top_cell_right_wide_pane_g1

0x1504,	// (0x00030fc1) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1504,	// (0x00030fc1) bg_vkb2_fuc_pane_cp02

0x1f0a,	// (0x000319c7) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1f0a,	// (0x000319c7) vkb2_top_cell_right_narrow_pane_g1

0xe135,	// (0x0003dbf2) aid_touch_area_decrease_ParamLimits

0xe135,	// (0x0003dbf2) aid_touch_area_decrease

0xe16f,	// (0x0003dc2c) aid_touch_area_increase_ParamLimits

0xe16f,	// (0x0003dc2c) aid_touch_area_increase

0xe197,	// (0x0003dc54) aid_touch_area_mute_ParamLimits

0xe197,	// (0x0003dc54) aid_touch_area_mute

0xe1c7,	// (0x0003dc84) aid_touch_area_slider_ParamLimits

0xe1c7,	// (0x0003dc84) aid_touch_area_slider

0xe207,	// (0x0003dcc4) popup_slider_window_g4_ParamLimits

0xe207,	// (0x0003dcc4) popup_slider_window_g4

0xe22f,	// (0x0003dcec) popup_slider_window_g5_ParamLimits

0xe22f,	// (0x0003dcec) popup_slider_window_g5

0xe263,	// (0x0003dd20) popup_slider_window_g6_ParamLimits

0xe263,	// (0x0003dd20) popup_slider_window_g6

0x8965,	// (0x00038422) popup_slider_window_t2_ParamLimits

0x8965,	// (0x00038422) popup_slider_window_t2

0x0001,

0xfd1f,	// (0x0003f7dc) popup_slider_window_t_ParamLimits

0xfd1f,	// (0x0003f7dc) popup_slider_window_t

0xe27f,	// (0x0003dd3c) slider_pane_ParamLimits

0xe27f,	// (0x0003dd3c) slider_pane

0x9600,	// (0x000390bd) slider_pane_g1_ParamLimits

0x9600,	// (0x000390bd) slider_pane_g1

0x9614,	// (0x000390d1) slider_pane_g2_ParamLimits

0x9614,	// (0x000390d1) slider_pane_g2

0x962a,	// (0x000390e7) slider_pane_g3_ParamLimits

0x962a,	// (0x000390e7) slider_pane_g3

0x0003,

0xfe31,	// (0x0003f8ee) slider_pane_g_ParamLimits

0xfe31,	// (0x0003f8ee) slider_pane_g

0xcf19,	// (0x0003c9d6) popup_tb_float_extension_window_ParamLimits

0xcf19,	// (0x0003c9d6) popup_tb_float_extension_window

0x9656,	// (0x00039113) aid_size_cell_tb_float_ext

0x21e1,	// (0x00031c9e) bg_popup_sub_window_cp28

0x9662,	// (0x0003911f) grid_tb_float_ext_pane

0x966e,	// (0x0003912b) cell_tb_float_ext_pane_ParamLimits

0x966e,	// (0x0003912b) cell_tb_float_ext_pane

0x968a,	// (0x00039147) cell_tb_float_ext_pane_g1

0x9693,	// (0x00039150) grid_highlight_pane_cp12

0xbbc3,	// (0x0003b680) cell_last_hwr_side_pane_ParamLimits

0xbbc3,	// (0x0003b680) cell_last_hwr_side_pane

0x7277,	// (0x00036d34) cell_last_hwr_side_pane_g1

0x969c,	// (0x00039159) cell_last_hwr_side_pane_g2

0x0001,

0xfe3a,	// (0x0003f8f7) cell_last_hwr_side_pane_g

0xc126,	// (0x0003bbe3) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc126,	// (0x0003bbe3) vkb2_area_bottom_space_btn_pane

0x177f,	// (0x0003123c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x91a2,	// (0x00038c5f) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2070,	// (0x00031b2d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x208e,	// (0x00031b4b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x208e,	// (0x00031b4b) vkb2_area_bottom_space_btn_pane_g1

0x20c8,	// (0x00031b85) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x20c8,	// (0x00031b85) vkb2_area_bottom_space_btn_pane_g2

0x20fe,	// (0x00031bbb) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x20fe,	// (0x00031bbb) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe3f,	// (0x0003f8fc) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe3f,	// (0x0003f8fc) vkb2_area_bottom_space_btn_pane_g

0x15c9,	// (0x00031086) cel_fep_hwr_func_pane_ParamLimits

0x15c9,	// (0x00031086) cel_fep_hwr_func_pane

0xbb98,	// (0x0003b655) cell_hwr_side_button_pane_ParamLimits

0xbb98,	// (0x0003b655) cell_hwr_side_button_pane

0x8bc6,	// (0x00038683) aid_area_touch_clock_ParamLimits

0x255f,	// (0x0003201c) bg_uniindi_top_pane_ParamLimits

0x8bda,	// (0x00038697) uniindi_top_pane_g1_ParamLimits

0x8bf0,	// (0x000386ad) uniindi_top_pane_g2_ParamLimits

0x8bfc,	// (0x000386b9) uniindi_top_pane_g3_ParamLimits

0x8c0d,	// (0x000386ca) uniindi_top_pane_g4_ParamLimits

0xfd57,	// (0x0003f814) uniindi_top_pane_g_ParamLimits

0x8c1a,	// (0x000386d7) uniindi_top_pane_t1_ParamLimits

0x255f,	// (0x0003201c) bg_vkb2_func_pane_cp01_ParamLimits

0x255f,	// (0x0003201c) bg_vkb2_func_pane_cp01

0x96a5,	// (0x00039162) cel_fep_hwr_func_pane_g1_ParamLimits

0x96a5,	// (0x00039162) cel_fep_hwr_func_pane_g1

0x255f,	// (0x0003201c) bg_vkb2_func_pane_cp02_ParamLimits

0x255f,	// (0x0003201c) bg_vkb2_func_pane_cp02

0x96a5,	// (0x00039162) cell_hwr_side_button_pane_g1_ParamLimits

0x96a5,	// (0x00039162) cell_hwr_side_button_pane_g1

0x4ab4,	// (0x00034571) status_pane_g4_ParamLimits

0x4ab4,	// (0x00034571) status_pane_g4

0x4ace,	// (0x0003458b) status_pane_t1

0x6fd1,	// (0x00036a8e) form2_midp_gauge_slider_cont_pane

0x6fd9,	// (0x00036a96) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdac7,	// (0x0003d584) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdad9,	// (0x0003d596) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb17,	// (0x0003f5d4) form2_midp_gauge_slider_pane_t_ParamLimits

0x700f,	// (0x00036acc) form2_midp_slider_pane_ParamLimits

0x1a42,	// (0x000314ff) aid_size_cell_func_vkb2_ParamLimits

0x1a42,	// (0x000314ff) aid_size_cell_func_vkb2

0x9642,	// (0x000390ff) slider_pane_g4_ParamLimits

0x9642,	// (0x000390ff) slider_pane_g4

0xc187,	// (0x0003bc44) form2_midp_gauge_slider_pane_t2_cp01

0xc195,	// (0x0003bc52) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc195,	// (0x0003bc52) form2_midp_gauge_slider_pane_t3_cp01

0x2173,	// (0x00031c30) form2_midp_slider_pane_cp01

0x21e1,	// (0x00031c9e) navi_smil_pane

0x96de,	// (0x0003919b) navi_smil_pane_g1

0x96e6,	// (0x000391a3) navi_smil_pane_t1

0x96b3,	// (0x00039170) form2_midp_slider_pane_g1

0x96bc,	// (0x00039179) form2_midp_slider_pane_g2

0x96c4,	// (0x00039181) form2_midp_slider_pane_g3

0x96b3,	// (0x00039170) form2_midp_slider_pane_g4

0xeb92,	// (0x0003e64f) form2_midp_slider_pane_g5

0x0004,

0xfe48,	// (0x0003f905) form2_midp_slider_pane_g

0x2138,	// (0x00031bf5) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2138,	// (0x00031bf5) vkb2_area_bottom_space_btn_pane_g4

0xd0f9,	// (0x0003cbb6) lc0_navi_pane_ParamLimits

0xd0f9,	// (0x0003cbb6) lc0_navi_pane

0xd169,	// (0x0003cc26) lc0_stat_indi_pane_ParamLimits

0xd169,	// (0x0003cc26) lc0_stat_indi_pane

0xd17e,	// (0x0003cc3b) ls0_title_pane_ParamLimits

0xd17e,	// (0x0003cc3b) ls0_title_pane

0x3107,	// (0x00032bc4) bg_popup_sub_pane_cp14_ParamLimits

0x8bad,	// (0x0003866a) list_uniindi_pane_ParamLimits

0x8bb9,	// (0x00038676) uniindi_top_pane_ParamLimits

0x8c58,	// (0x00038715) list_single_uniindi_pane_g1_ParamLimits

0x8c6b,	// (0x00038728) list_single_uniindi_pane_t1_ParamLimits

0xc1b2,	// (0x0003bc6f) lc0_stat_clock_pane_ParamLimits

0xc1b2,	// (0x0003bc6f) lc0_stat_clock_pane

0xeb9b,	// (0x0003e658) lc0_stat_indi_pane_g1_ParamLimits

0xeb9b,	// (0x0003e658) lc0_stat_indi_pane_g1

0xeba8,	// (0x0003e665) lc0_stat_indi_pane_g2_ParamLimits

0xeba8,	// (0x0003e665) lc0_stat_indi_pane_g2

0x0001,

0xfe53,	// (0x0003f910) lc0_stat_indi_pane_g_ParamLimits

0xfe53,	// (0x0003f910) lc0_stat_indi_pane_g

0xc1bf,	// (0x0003bc7c) lc0_uni_indicator_pane_ParamLimits

0xc1bf,	// (0x0003bc7c) lc0_uni_indicator_pane

0xebb5,	// (0x0003e672) ls0_title_pane_g1_ParamLimits

0xebb5,	// (0x0003e672) ls0_title_pane_g1

0xebc9,	// (0x0003e686) ls0_title_pane_t1_ParamLimits

0xebc9,	// (0x0003e686) ls0_title_pane_t1

0xc1cc,	// (0x0003bc89) lc0_uni_indicator_pane_g1_ParamLimits

0xc1cc,	// (0x0003bc89) lc0_uni_indicator_pane_g1

0x9758,	// (0x00039215) lc0_stat_clock_pane_t1

0x21e1,	// (0x00031c9e) main_ai5_pane

0x9766,	// (0x00039223) ai5_sk_pane_ParamLimits

0x9766,	// (0x00039223) ai5_sk_pane

0xebf7,	// (0x0003e6b4) cell_ai5_widget_pane_ParamLimits

0xebf7,	// (0x0003e6b4) cell_ai5_widget_pane

0x97e9,	// (0x000392a6) aid_size_cell_widget_grid

0x97fd,	// (0x000392ba) bg_ai5_widget_pane_ParamLimits

0x97fd,	// (0x000392ba) bg_ai5_widget_pane

0xec84,	// (0x0003e741) cell_ai5_widget_pane_g2

0xec94,	// (0x0003e751) cell_ai5_widget_pane_g3

0xeca8,	// (0x0003e765) cell_ai5_widget_pane_g4

0xecb4,	// (0x0003e771) cell_ai5_widget_pane_g5

0xecc0,	// (0x0003e77d) cell_ai5_widget_pane_g6

0xeccc,	// (0x0003e789) cell_ai5_widget_pane_g7

0xed14,	// (0x0003e7d1) cell_ai5_widget_pane_t1_ParamLimits

0xed14,	// (0x0003e7d1) cell_ai5_widget_pane_t1

0xed31,	// (0x0003e7ee) cell_ai5_widget_pane_t2_ParamLimits

0xed31,	// (0x0003e7ee) cell_ai5_widget_pane_t2

0xed49,	// (0x0003e806) cell_ai5_widget_pane_t3_ParamLimits

0xed49,	// (0x0003e806) cell_ai5_widget_pane_t3

0xed61,	// (0x0003e81e) cell_ai5_widget_pane_t4_ParamLimits

0xed61,	// (0x0003e81e) cell_ai5_widget_pane_t4

0xed7b,	// (0x0003e838) cell_ai5_widget_pane_t5_ParamLimits

0xed7b,	// (0x0003e838) cell_ai5_widget_pane_t5

0x993d,	// (0x000393fa) cell_ai5_widget_pane_t6_ParamLimits

0x993d,	// (0x000393fa) cell_ai5_widget_pane_t6

0x994f,	// (0x0003940c) cell_ai5_widget_pane_t7_ParamLimits

0x994f,	// (0x0003940c) cell_ai5_widget_pane_t7

0xed9a,	// (0x0003e857) cell_ai5_widget_pane_t8_ParamLimits

0xed9a,	// (0x0003e857) cell_ai5_widget_pane_t8

0x0009,

0xfe6d,	// (0x0003f92a) cell_ai5_widget_pane_t_ParamLimits

0xfe6d,	// (0x0003f92a) cell_ai5_widget_pane_t

0xede2,	// (0x0003e89f) grid_ai5_widget_pane

0x3107,	// (0x00032bc4) highlight_cell_ai5_widget_pane_ParamLimits

0x3107,	// (0x00032bc4) highlight_cell_ai5_widget_pane

0xedf9,	// (0x0003e8b6) ai5_sk_left_pane

0xee03,	// (0x0003e8c0) ai5_sk_middle_pane

0xee0d,	// (0x0003e8ca) ai5_sk_right_pane

0x99e5,	// (0x000394a2) bg_ai5_widget_pane_g1_ParamLimits

0x99e5,	// (0x000394a2) bg_ai5_widget_pane_g1

0x99f1,	// (0x000394ae) bg_ai5_widget_pane_g2_ParamLimits

0x99f1,	// (0x000394ae) bg_ai5_widget_pane_g2

0x99fd,	// (0x000394ba) bg_ai5_widget_pane_g3_ParamLimits

0x99fd,	// (0x000394ba) bg_ai5_widget_pane_g3

0x9a09,	// (0x000394c6) bg_ai5_widget_pane_g4_ParamLimits

0x9a09,	// (0x000394c6) bg_ai5_widget_pane_g4

0x9a15,	// (0x000394d2) bg_ai5_widget_pane_g5_ParamLimits

0x9a15,	// (0x000394d2) bg_ai5_widget_pane_g5

0x9a21,	// (0x000394de) bg_ai5_widget_pane_g6_ParamLimits

0x9a21,	// (0x000394de) bg_ai5_widget_pane_g6

0x9a2d,	// (0x000394ea) bg_ai5_widget_pane_g7_ParamLimits

0x9a2d,	// (0x000394ea) bg_ai5_widget_pane_g7

0x9a39,	// (0x000394f6) bg_ai5_widget_pane_g8_ParamLimits

0x9a39,	// (0x000394f6) bg_ai5_widget_pane_g8

0x9a45,	// (0x00039502) bg_ai5_widget_pane_g9_ParamLimits

0x9a45,	// (0x00039502) bg_ai5_widget_pane_g9

0x0008,

0xfe82,	// (0x0003f93f) bg_ai5_widget_pane_g_ParamLimits

0xfe82,	// (0x0003f93f) bg_ai5_widget_pane_g

0x9a6a,	// (0x00039527) cell_shortcut_ai5_widget_pane_ParamLimits

0x9a6a,	// (0x00039527) cell_shortcut_ai5_widget_pane

0x23a1,	// (0x00031e5e) bg_cell_shortcut_ai5_widget_pane

0x9a7c,	// (0x00039539) cell_grid_ai5_widget_pane_g1

0x9a85,	// (0x00039542) highlight_cell_shortcut_ai5_widget_pane

0x4c3b,	// (0x000346f8) ai5_sk_left_pane_g1

0x9a8d,	// (0x0003954a) ai5_sk_left_pane_g2

0x9a95,	// (0x00039552) ai5_sk_left_pane_g3

0x9a9d,	// (0x0003955a) ai5_sk_left_pane_g4

0x0003,

0xfe95,	// (0x0003f952) ai5_sk_left_pane_g

0x9aa5,	// (0x00039562) ai5_sk_left_pane_t1

0x4c43,	// (0x00034700) ai5_sk_right_pane_g1

0x9ab3,	// (0x00039570) ai5_sk_right_pane_g2

0x9abb,	// (0x00039578) ai5_sk_right_pane_g3

0x9ac3,	// (0x00039580) ai5_sk_right_pane_g4

0x0003,

0xfe9e,	// (0x0003f95b) ai5_sk_right_pane_g

0x9acb,	// (0x00039588) ai5_sk_right_pane_t1

0x4c43,	// (0x00034700) ai5_sk_middle_pane_g1

0x4c3b,	// (0x000346f8) ai5_sk_middle_pane_g2

0x4c5b,	// (0x00034718) ai5_sk_middle_pane_g3

0x9abb,	// (0x00039578) ai5_sk_middle_pane_g4

0x9a95,	// (0x00039552) ai5_sk_middle_pane_g5

0x9ad9,	// (0x00039596) ai5_sk_middle_pane_g6

0xee17,	// (0x0003e8d4) ai5_sk_middle_pane_g7

0x0006,

0xfea7,	// (0x0003f964) ai5_sk_middle_pane_g

0xcfe3,	// (0x0003caa0) aid_touch_area_size_lc0_ParamLimits

0xcfe3,	// (0x0003caa0) aid_touch_area_size_lc0

0x17ae,	// (0x0003126b) cell_hwr_candidate_pane_t1_ParamLimits

0x476c,	// (0x00034229) aid_touch_navi_pane

0xd288,	// (0x0003cd45) status_dt_navi_pane_ParamLimits

0xd288,	// (0x0003cd45) status_dt_navi_pane

0xd2a0,	// (0x0003cd5d) status_dt_sta_pane_ParamLimits

0xd2a0,	// (0x0003cd5d) status_dt_sta_pane

0xee1f,	// (0x0003e8dc) dt_sta_controll_pane

0xee2c,	// (0x0003e8e9) dt_sta_indi_pane

0xee39,	// (0x0003e8f6) dt_sta_title_pane

0x255f,	// (0x0003201c) bg_dt_sta_indi_pane_ParamLimits

0x255f,	// (0x0003201c) bg_dt_sta_indi_pane

0xee4b,	// (0x0003e908) dt_sta_battery_pane

0xee53,	// (0x0003e910) dt_sta_indi_pane_g1

0xee5c,	// (0x0003e919) dt_sta_indi_pane_g2

0xee65,	// (0x0003e922) dt_sta_indi_pane_g3

0x0002,

0xfeb6,	// (0x0003f973) dt_sta_indi_pane_g

0xee6e,	// (0x0003e92b) dt_sta_signal_pane

0x3107,	// (0x00032bc4) bg_dt_sta_title_pane_ParamLimits

0x3107,	// (0x00032bc4) bg_dt_sta_title_pane

0xee77,	// (0x0003e934) dt_sta_title_pane_g1

0xee7f,	// (0x0003e93c) dt_sta_title_pane_t1_ParamLimits

0xee7f,	// (0x0003e93c) dt_sta_title_pane_t1

0x21e1,	// (0x00031c9e) bg_dt_sta_control_pane

0xeebb,	// (0x0003e978) dt_sta_controll_pane_g1

0xeec4,	// (0x0003e981) bg_dt_sta_title_pane_g1

0xeecd,	// (0x0003e98a) bg_dt_sta_title_pane_g2

0xeed6,	// (0x0003e993) bg_dt_sta_title_pane_g3

0x0002,

0xfebd,	// (0x0003f97a) bg_dt_sta_title_pane_g

0x7277,	// (0x00036d34) bg_dt_sta_indi_pane_g1

0x9b87,	// (0x00039644) dt_sta_signal_pane_g1

0x9b8f,	// (0x0003964c) dt_sta_signal_pane_g2

0x0001,

0xfec4,	// (0x0003f981) dt_sta_signal_pane_g

0x9b97,	// (0x00039654) dt_sta_battery_pane_g1

0x9ba0,	// (0x0003965d) dt_sta_battery_pane_t1

0x7277,	// (0x00036d34) bg_dt_sta_control_pane_g1

0x3863,	// (0x00033320) fep_china_uni_eep_pane

0x386b,	// (0x00033328) fep_china_uni_entry_pane_ParamLimits

0x387b,	// (0x00033338) popup_fep_china_uni_window_g1_ParamLimits

0x388b,	// (0x00033348) popup_fep_china_uni_window_g2_ParamLimits

0x388b,	// (0x00033348) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x0003f215) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x0003f215) popup_fep_china_uni_window_g

0x9baf,	// (0x0003966c) fep_china_uni_eep_pane_g1

0x9bb7,	// (0x00039674) fep_china_uni_eep_pane_t1

0x96d5,	// (0x00039192) aid_touch_area_size_smil_player

0x48c4,	// (0x00034381) lc0_clock_pane

0x4ac2,	// (0x0003457f) status_pane_g5_ParamLimits

0x4ac2,	// (0x0003457f) status_pane_g5

0xca43,	// (0x0003c500) popup_keymap_window

0x4a80,	// (0x0003453d) status_icon_pane

0xec94,	// (0x0003e751) cell_ai5_widget_pane_g3_ParamLimits

0xeca8,	// (0x0003e765) cell_ai5_widget_pane_g4_ParamLimits

0xecb4,	// (0x0003e771) cell_ai5_widget_pane_g5_ParamLimits

0xecd8,	// (0x0003e795) cell_ai5_widget_pane_g8_ParamLimits

0xecd8,	// (0x0003e795) cell_ai5_widget_pane_g8

0xecec,	// (0x0003e7a9) cell_ai5_widget_pane_g9_ParamLimits

0xecec,	// (0x0003e7a9) cell_ai5_widget_pane_g9

0xed00,	// (0x0003e7bd) cell_ai5_widget_pane_g10_ParamLimits

0xed00,	// (0x0003e7bd) cell_ai5_widget_pane_g10

0x9bc6,	// (0x00039683) status_icon_pane_g1

0x21e1,	// (0x00031c9e) bg_popup_sub_pane_cp13

0x9bce,	// (0x0003968b) popup_keymap_window_t1

0xc84f,	// (0x0003c30c) control_pane_g6_ParamLimits

0xc84f,	// (0x0003c30c) control_pane_g6

0xc85c,	// (0x0003c319) control_pane_g7_ParamLimits

0xc85c,	// (0x0003c319) control_pane_g7

0xc869,	// (0x0003c326) control_pane_g8_ParamLimits

0xc869,	// (0x0003c326) control_pane_g8

0xee1f,	// (0x0003e8dc) dt_sta_controll_pane_ParamLimits

0xee2c,	// (0x0003e8e9) dt_sta_indi_pane_ParamLimits

0xee39,	// (0x0003e8f6) dt_sta_title_pane_ParamLimits

0x303f,	// (0x00032afc) aid_size_touch_scroll_bar_cale

0xf4e9,	// (0x0003efa6) popup_discreet_window_ParamLimits

0xf4e9,	// (0x0003efa6) popup_discreet_window

0xb092,	// (0x0003ab4f) popup_sk_window

0x52a8,	// (0x00034d65) bg_popup_sub_pane_cp28_ParamLimits

0x52a8,	// (0x00034d65) bg_popup_sub_pane_cp28

0x9bdc,	// (0x00039699) popup_discreet_window_g1_ParamLimits

0x9bdc,	// (0x00039699) popup_discreet_window_g1

0x9bfc,	// (0x000396b9) popup_discreet_window_t1_ParamLimits

0x9bfc,	// (0x000396b9) popup_discreet_window_t1

0x9c1a,	// (0x000396d7) popup_discreet_window_t2_ParamLimits

0x9c1a,	// (0x000396d7) popup_discreet_window_t2

0x0002,

0xfec9,	// (0x0003f986) popup_discreet_window_t_ParamLimits

0xfec9,	// (0x0003f986) popup_discreet_window_t

0x21a9,	// (0x00031c66) popup_sk_window_g1

0x21b3,	// (0x00031c70) popup_sk_window_g2

0x0001,

0xfed0,	// (0x0003f98d) popup_sk_window_g

0x9c6c,	// (0x00039729) popup_sk_window_t1

0x9c7a,	// (0x00039737) popup_sk_window_t1_copy1

0xec84,	// (0x0003e741) cell_ai5_widget_pane_g2_ParamLimits

0xedac,	// (0x0003e869) cell_ai5_widget_pane_t9_ParamLimits

0xedac,	// (0x0003e869) cell_ai5_widget_pane_t9

0x21e1,	// (0x00031c9e) main_fep_fshwr2_pane

0xeedf,	// (0x0003e99c) aid_fshwr2_btn_pane

0xeee7,	// (0x0003e9a4) aid_fshwr2_syb_pane

0xeeef,	// (0x0003e9ac) aid_fshwr2_txt_pane

0xeef7,	// (0x0003e9b4) fshwr2_func_candi_pane

0xef01,	// (0x0003e9be) fshwr2_hwr_syb_pane

0xef0d,	// (0x0003e9ca) fshwr2_icf_pane

0x21e1,	// (0x00031c9e) fshwr2_icf_bg_pane

0xef17,	// (0x0003e9d4) fshwr2_icf_pane_t1_ParamLimits

0xef17,	// (0x0003e9d4) fshwr2_icf_pane_t1

0x7277,	// (0x00036d34) fshwr2_func_candi_pane_g1

0x9ced,	// (0x000397aa) fshwr2_func_candi_row_pane_ParamLimits

0x9ced,	// (0x000397aa) fshwr2_func_candi_row_pane

0xef2f,	// (0x0003e9ec) cell_fshwr2_syb_pane_ParamLimits

0xef2f,	// (0x0003e9ec) cell_fshwr2_syb_pane

0x7501,	// (0x00036fbe) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7501,	// (0x00036fbe) fshwr2_hwr_syb_pane_g1

0x21e1,	// (0x00031c9e) bg_popup_call_pane_cp01

0x9d18,	// (0x000397d5) fshwr2_func_candi_cell_pane_ParamLimits

0x9d18,	// (0x000397d5) fshwr2_func_candi_cell_pane

0x9d4a,	// (0x00039807) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9d4a,	// (0x00039807) fshwr2_func_candi_cell_bg_pane

0x9d64,	// (0x00039821) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9d64,	// (0x00039821) fshwr2_func_candi_cell_pane_g1

0x9d84,	// (0x00039841) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9d84,	// (0x00039841) fshwr2_func_candi_cell_pane_t1

0x21e1,	// (0x00031c9e) bg_button_pane_cp08

0x3d65,	// (0x00033822) cell_fshwr2_syb_bg_pane

0xef48,	// (0x0003ea05) cell_fshwr2_syb_bg_pane_g1

0xef50,	// (0x0003ea0d) cell_fshwr2_syb_bg_pane_t1

0x3107,	// (0x00032bc4) main_tmo_pane

0xd5ba,	// (0x0003d077) uni_indicator_pane_g1_ParamLimits

0xd5cf,	// (0x0003d08c) uni_indicator_pane_g2_ParamLimits

0xd5e4,	// (0x0003d0a1) uni_indicator_pane_g3_ParamLimits

0xd5fa,	// (0x0003d0b7) uni_indicator_pane_g4_ParamLimits

0xd5fa,	// (0x0003d0b7) uni_indicator_pane_g4

0xd60e,	// (0x0003d0cb) uni_indicator_pane_g5_ParamLimits

0xd60e,	// (0x0003d0cb) uni_indicator_pane_g5

0xd622,	// (0x0003d0df) uni_indicator_pane_g6_ParamLimits

0xd622,	// (0x0003d0df) uni_indicator_pane_g6

0xf950,	// (0x0003f40d) uni_indicator_pane_g_ParamLimits

0xe105,	// (0x0003dbc2) popup_tmo_note_window_ParamLimits

0xe105,	// (0x0003dbc2) popup_tmo_note_window

0x21e1,	// (0x00031c9e) fshwr2_bg_pane

0x9d75,	// (0x00039832) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9d75,	// (0x00039832) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfed5,	// (0x0003f992) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfed5,	// (0x0003f992) fshwr2_func_candi_cell_pane_g

0x7277,	// (0x00036d34) bg_popup_window_pane_cp01

0x9dae,	// (0x0003986b) bg_popup_window_pane_g1_cp01

0x9db7,	// (0x00039874) bg_popup_window_pane_cp22_ParamLimits

0x9db7,	// (0x00039874) bg_popup_window_pane_cp22

0x9dc5,	// (0x00039882) listscroll_tmo_link_pane_ParamLimits

0x9dc5,	// (0x00039882) listscroll_tmo_link_pane

0x9e05,	// (0x000398c2) popup_tmo_note_window_g1_ParamLimits

0x9e05,	// (0x000398c2) popup_tmo_note_window_g1

0x9e12,	// (0x000398cf) tmo_note_info_pane_ParamLimits

0x9e12,	// (0x000398cf) tmo_note_info_pane

0xef5f,	// (0x0003ea1c) list_tmo_note_info_pane_g1_ParamLimits

0xef5f,	// (0x0003ea1c) list_tmo_note_info_pane_g1

0x9e43,	// (0x00039900) list_tmo_note_info_pane_g2_ParamLimits

0x9e43,	// (0x00039900) list_tmo_note_info_pane_g2

0x0001,

0xfeda,	// (0x0003f997) list_tmo_note_info_pane_g_ParamLimits

0xfeda,	// (0x0003f997) list_tmo_note_info_pane_g

0x9e5f,	// (0x0003991c) list_tmo_note_info_text_pane_ParamLimits

0x9e5f,	// (0x0003991c) list_tmo_note_info_text_pane

0x9ee4,	// (0x000399a1) list_tmo_link_pane

0x9ef1,	// (0x000399ae) scroll_pane_cp20

0x9efe,	// (0x000399bb) list_single_tmo_link_pane_ParamLimits

0x9efe,	// (0x000399bb) list_single_tmo_link_pane

0x9f0e,	// (0x000399cb) list_single_tmo_link_pane_t1

0x9f1c,	// (0x000399d9) list_tmo_note_info_text_pane_t1_ParamLimits

0x9f1c,	// (0x000399d9) list_tmo_note_info_text_pane_t1

0xc4d0,	// (0x0003bf8d) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc4d0,	// (0x0003bf8d) aid_size_touch_scroll_bar_cp01

0xb681,	// (0x0003b13e) aid_size_touch_slider_marker

0xb082,	// (0x0003ab3f) popup_settings_window_ParamLimits

0xb082,	// (0x0003ab3f) popup_settings_window

0x0e61,	// (0x0003091e) popup_candi_list_indi_window

0x476c,	// (0x00034229) aid_touch_navi_pane_ParamLimits

0x1979,	// (0x00031436) rs_clock_indi_pane

0x1982,	// (0x0003143f) sctrl_sk_bottom_pane_ParamLimits

0x1993,	// (0x00031450) sctrl_sk_top_pane_ParamLimits

0x1a94,	// (0x00031551) popup_fep_tooltip_window

0x97e9,	// (0x000392a6) aid_size_cell_widget_grid_ParamLimits

0xec78,	// (0x0003e735) cell_ai5_widget_pane_g1_ParamLimits

0xec78,	// (0x0003e735) cell_ai5_widget_pane_g1

0xecc0,	// (0x0003e77d) cell_ai5_widget_pane_g6_ParamLimits

0xeccc,	// (0x0003e789) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe58,	// (0x0003f915) cell_ai5_widget_pane_g_ParamLimits

0xfe58,	// (0x0003f915) cell_ai5_widget_pane_g

0xedd0,	// (0x0003e88d) cell_ai5_widget_pane_t10_ParamLimits

0xedd0,	// (0x0003e88d) cell_ai5_widget_pane_t10

0xede2,	// (0x0003e89f) grid_ai5_widget_pane_ParamLimits

0x9a51,	// (0x0003950e) cell_contacts_ai5_widget_pane_ParamLimits

0x9a51,	// (0x0003950e) cell_contacts_ai5_widget_pane

0x9c2f,	// (0x000396ec) popup_discreet_window_t3_ParamLimits

0x9c2f,	// (0x000396ec) popup_discreet_window_t3

0x9cbe,	// (0x0003977b) popup_fshwr2_char_preview_window_ParamLimits

0x9cbe,	// (0x0003977b) popup_fshwr2_char_preview_window

0xef76,	// (0x0003ea33) tmo_note_info_pane_t1

0xef8b,	// (0x0003ea48) tmo_note_info_pane_t2

0xefa4,	// (0x0003ea61) tmo_note_info_pane_t3

0x9ec0,	// (0x0003997d) tmo_note_info_pane_t4

0x9ed2,	// (0x0003998f) tmo_note_info_pane_t5

0x0004,

0xfedf,	// (0x0003f99c) tmo_note_info_pane_t

0x9ee4,	// (0x000399a1) list_tmo_link_pane_ParamLimits

0x9ef1,	// (0x000399ae) scroll_pane_cp20_ParamLimits

0x21e1,	// (0x00031c9e) bg_popup_fep_char_preview_window_cp01

0x9f35,	// (0x000399f2) popup_fshwr2_char_preview_window_t1

0x9f43,	// (0x00039a00) popup_candi_list_indi_window_g1

0x9f4c,	// (0x00039a09) bg_cell_contacts_ai5_widget_pane

0x9f58,	// (0x00039a15) cell_contacts_ai5_widget_pane_g1

0x9f6c,	// (0x00039a29) cell_contacts_ai5_widget_pane_g2

0x9f7b,	// (0x00039a38) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeea,	// (0x0003f9a7) cell_contacts_ai5_widget_pane_g

0x9f8e,	// (0x00039a4b) cell_contacts_ai5_widget_pane_t1

0x3107,	// (0x00032bc4) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf01e,	// (0x0003eadb) settings_container_pane

0x3d65,	// (0x00033822) listscroll_set_pane_copy1

0x69ac,	// (0x00036469) scroll_pane_cp121_copy1

0xa014,	// (0x00039ad1) set_content_pane_copy1

0xf02a,	// (0x0003eae7) aid_height_set_list_copy1_ParamLimits

0xf02a,	// (0x0003eae7) aid_height_set_list_copy1

0x603b,	// (0x00035af8) aid_size_parent_copy1_ParamLimits

0x603b,	// (0x00035af8) aid_size_parent_copy1

0xf036,	// (0x0003eaf3) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf036,	// (0x0003eaf3) button_value_adjust_pane_cp6_copy1

0x40eb,	// (0x00033ba8) list_highlight_pane_cp2_copy1_ParamLimits

0x40eb,	// (0x00033ba8) list_highlight_pane_cp2_copy1

0xf04a,	// (0x0003eb07) list_set_pane_copy1_ParamLimits

0xf04a,	// (0x0003eb07) list_set_pane_copy1

0xefb9,	// (0x0003ea76) main_pane_set_t1_copy1_ParamLimits

0xefb9,	// (0x0003ea76) main_pane_set_t1_copy1

0xeff3,	// (0x0003eab0) main_pane_set_t2_copy1_ParamLimits

0xeff3,	// (0x0003eab0) main_pane_set_t2_copy1

0xf111,	// (0x0003ebce) main_pane_set_t3_copy1

0xf11f,	// (0x0003ebdc) main_pane_set_t4_copy1

0xf012,	// (0x0003eacf) set_content_pane_g1_copy1_ParamLimits

0xf012,	// (0x0003eacf) set_content_pane_g1_copy1

0xf12d,	// (0x0003ebea) setting_code_pane_copy1

0xa129,	// (0x00039be6) setting_slider_graphic_pane_copy1

0xa129,	// (0x00039be6) setting_slider_pane_copy1

0xa133,	// (0x00039bf0) setting_text_pane_copy1

0xa13d,	// (0x00039bfa) setting_volume_pane_copy1

0xf137,	// (0x0003ebf4) settings_code_pane_cp2_copy1

0xf13f,	// (0x0003ebfc) settings_code_pane_cp_copy1_ParamLimits

0xf13f,	// (0x0003ebfc) settings_code_pane_cp_copy1

0xf153,	// (0x0003ec10) volume_set_pane_copy1

0xf15f,	// (0x0003ec1c) volume_set_pane_g10_copy1

0xf16b,	// (0x0003ec28) volume_set_pane_g1_copy1

0xf175,	// (0x0003ec32) volume_set_pane_g2_copy1

0xf17f,	// (0x0003ec3c) volume_set_pane_g3_copy1

0xf189,	// (0x0003ec46) volume_set_pane_g4_copy1

0xf193,	// (0x0003ec50) volume_set_pane_g5_copy1

0xf19d,	// (0x0003ec5a) volume_set_pane_g6_copy1

0xf1a7,	// (0x0003ec64) volume_set_pane_g7_copy1

0xf1b1,	// (0x0003ec6e) volume_set_pane_g8_copy1

0xf1bb,	// (0x0003ec78) volume_set_pane_g9_copy1

0x22d5,	// (0x00031d92) bg_set_opt_pane_cp_copy1_ParamLimits

0x22d5,	// (0x00031d92) bg_set_opt_pane_cp_copy1

0xa1d4,	// (0x00039c91) setting_slider_pane_t1_copy1_ParamLimits

0xa1d4,	// (0x00039c91) setting_slider_pane_t1_copy1

0xf1c5,	// (0x0003ec82) setting_slider_pane_t2_copy1_ParamLimits

0xf1c5,	// (0x0003ec82) setting_slider_pane_t2_copy1

0xf1df,	// (0x0003ec9c) setting_slider_pane_t3_copy1_ParamLimits

0xf1df,	// (0x0003ec9c) setting_slider_pane_t3_copy1

0xf1f7,	// (0x0003ecb4) slider_set_pane_copy1_ParamLimits

0xf1f7,	// (0x0003ecb4) slider_set_pane_copy1

0x316e,	// (0x00032c2b) set_opt_bg_pane_g1_copy2

0x3176,	// (0x00032c33) set_opt_bg_pane_g2_copy2

0xa23a,	// (0x00039cf7) set_opt_bg_pane_g3_copy2

0x3186,	// (0x00032c43) set_opt_bg_pane_g4_copy2

0x318e,	// (0x00032c4b) set_opt_bg_pane_g5_copy2

0x3196,	// (0x00032c53) set_opt_bg_pane_g6_copy2

0xf20d,	// (0x0003ecca) set_opt_bg_pane_g7_copy2

0xa24e,	// (0x00039d0b) set_opt_bg_pane_g8_copy2

0xa258,	// (0x00039d15) set_opt_bg_pane_g9_copy2

0xa262,	// (0x00039d1f) aid_size_touch_slider_mark_copy1_ParamLimits

0xa262,	// (0x00039d1f) aid_size_touch_slider_mark_copy1

0xa276,	// (0x00039d33) slider_set_pane_g1_copy1

0xa27f,	// (0x00039d3c) slider_set_pane_g2_copy1

0x708f,	// (0x00036b4c) slider_set_pane_g3_copy1_ParamLimits

0x708f,	// (0x00036b4c) slider_set_pane_g3_copy1

0x70a3,	// (0x00036b60) slider_set_pane_g4_copy1_ParamLimits

0x70a3,	// (0x00036b60) slider_set_pane_g4_copy1

0x70bb,	// (0x00036b78) slider_set_pane_g5_copy1_ParamLimits

0x70bb,	// (0x00036b78) slider_set_pane_g5_copy1

0x708f,	// (0x00036b4c) slider_set_pane_g6_copy1_ParamLimits

0x708f,	// (0x00036b4c) slider_set_pane_g6_copy1

0xf217,	// (0x0003ecd4) slider_set_pane_g7_copy1_ParamLimits

0xf217,	// (0x0003ecd4) slider_set_pane_g7_copy1

0x21f5,	// (0x00031cb2) bg_set_opt_pane_cp2_copy1

0xa29d,	// (0x00039d5a) setting_slider_graphic_pane_g1_copy1

0xf22d,	// (0x0003ecea) setting_slider_graphic_pane_t1_copy1

0xf23d,	// (0x0003ecfa) setting_slider_graphic_pane_t2_copy1

0xf24d,	// (0x0003ed0a) slider_set_pane_cp_copy1

0xa2d6,	// (0x00039d93) input_focus_pane_cp1_copy1

0xa2df,	// (0x00039d9c) list_set_text_pane_copy1

0xa2e7,	// (0x00039da4) setting_text_pane_g1_copy1

0xee94,	// (0x0003e951) set_text_pane_t1_copy1

0xa2d6,	// (0x00039d93) input_focus_pane_cp2_copy1

0xa2e7,	// (0x00039da4) setting_code_pane_g1_copy1

0xf255,	// (0x0003ed12) setting_code_pane_t1_copy1

0xf263,	// (0x0003ed20) list_set_graphic_pane_copy1

0x21f5,	// (0x00031cb2) bg_set_opt_pane_cp4_copy1

0xc75b,	// (0x0003c218) list_set_graphic_pane_g1_copy1_ParamLimits

0xc75b,	// (0x0003c218) list_set_graphic_pane_g1_copy1

0xf275,	// (0x0003ed32) list_set_graphic_pane_g2_copy1

0xc773,	// (0x0003c230) list_set_graphic_pane_t1_copy1_ParamLimits

0xc773,	// (0x0003c230) list_set_graphic_pane_t1_copy1

0x7277,	// (0x00036d34) rs_clock_indi_pane_g1

0xa318,	// (0x00039dd5) rs_clock_indi_pane_t1

0xa326,	// (0x00039de3) rs_indi_pane

0xa32e,	// (0x00039deb) rs_indi_pane_g1

0xa337,	// (0x00039df4) rs_indi_pane_g2

0xa340,	// (0x00039dfd) rs_indi_pane_g3

0x0002,

0xfef1,	// (0x0003f9ae) rs_indi_pane_g

0x3d65,	// (0x00033822) bg_popup_preview_window_pane_cp03

0xa349,	// (0x00039e06) popup_fep_tooltip_window_t1

0x7f2b,	// (0x000379e8) popup_note2_window_g2_ParamLimits

0x7f2b,	// (0x000379e8) popup_note2_window_g2

0x0001,

0xfc8f,	// (0x0003f74c) popup_note2_window_g_ParamLimits

0xfc8f,	// (0x0003f74c) popup_note2_window_g

0x8433,	// (0x00037ef0) bg_popup_sub_pane_cp11_ParamLimits

0x8440,	// (0x00037efd) cell_ai3_links_pane_g1_ParamLimits

0x8457,	// (0x00037f14) cell_ai3_links_pane_t1

0xee94,	// (0x0003e951) set_text_pane_t1_copy1_ParamLimits

0x3c72,	// (0x0003372f) cell_graphic_popup_pane_cp2_ParamLimits

0x3c72,	// (0x0003372f) cell_graphic_popup_pane_cp2

0xa357,	// (0x00039e14) cell_graphic_popup_pane_g1_cp2

0x2e52,	// (0x0003290f) cell_graphic_popup_pane_g2_cp2

0xa35f,	// (0x00039e1c) cell_graphic_popup_pane_g3_cp2

0xa367,	// (0x00039e24) cell_graphic_popup_pane_t2_cp2

0x2e63,	// (0x00032920) grid_highlight_pane_cp3_cp2

0x34ba,	// (0x00032f77) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3107,	// (0x00032bc4) main_tmo_pane_ParamLimits

0xe0f9,	// (0x0003dbb6) popup_tmo_big_image_note_window

0xec68,	// (0x0003e725) cell_ai5_widget_list_pane

0xec70,	// (0x0003e72d) cell_ai5_widget_lrg_icon_pane

0xef76,	// (0x0003ea33) tmo_note_info_pane_t1_ParamLimits

0xef8b,	// (0x0003ea48) tmo_note_info_pane_t2_ParamLimits

0xefa4,	// (0x0003ea61) tmo_note_info_pane_t3_ParamLimits

0x9ec0,	// (0x0003997d) tmo_note_info_pane_t4_ParamLimits

0x9ed2,	// (0x0003998f) tmo_note_info_pane_t5_ParamLimits

0xfedf,	// (0x0003f99c) tmo_note_info_pane_t_ParamLimits

0xf01e,	// (0x0003eadb) settings_container_pane_ParamLimits

0xa2ce,	// (0x00039d8b) indicator_popup_pane_cp5

0xa2ce,	// (0x00039d8b) indicator_popup_pane_cp6

0xf263,	// (0x0003ed20) list_set_graphic_pane_copy1_ParamLimits

0x21e1,	// (0x00031c9e) bg_popup_window_pane_cp23

0xa375,	// (0x00039e32) popup_tmo_big_image_note_window_g1

0xa381,	// (0x00039e3e) popup_tmo_big_image_note_window_t1

0xa391,	// (0x00039e4e) popup_tmo_big_image_note_window_t2

0xa3a1,	// (0x00039e5e) popup_tmo_big_image_note_window_t3

0x0002,

0xfef8,	// (0x0003f9b5) popup_tmo_big_image_note_window_t

0xf27d,	// (0x0003ed3a) cell_ai5_widget_lrg_icon_pane_g1

0xf285,	// (0x0003ed42) cell_ai5_widget_lrg_icon_pane_t1

0xf293,	// (0x0003ed50) cell_ai5_widget_list_row_pane_ParamLimits

0xf293,	// (0x0003ed50) cell_ai5_widget_list_row_pane

0xf2ac,	// (0x0003ed69) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2ac,	// (0x0003ed69) cell_ai5_widget_list_row_pane_g1

0xf2b9,	// (0x0003ed76) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2b9,	// (0x0003ed76) cell_ai5_widget_list_row_pane_t1

0xf2d1,	// (0x0003ed8e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2d1,	// (0x0003ed8e) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeff,	// (0x0003f9bc) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeff,	// (0x0003f9bc) cell_ai5_widget_list_row_pane_t

0xf40c,	// (0x0003eec9) main_fep_vtchi_ss_pane

0xa417,	// (0x00039ed4) popup_fep_char_pre_window

0xa41f,	// (0x00039edc) popup_fep_ituss_window

0xa42a,	// (0x00039ee7) popup_fep_vkbss_window

0xa435,	// (0x00039ef2) grid_vkbss_keypad_pane_ParamLimits

0xa435,	// (0x00039ef2) grid_vkbss_keypad_pane

0xa445,	// (0x00039f02) ituss_keypad_pane

0xa44d,	// (0x00039f0a) aid_vkbss_key_offset_ParamLimits

0xa44d,	// (0x00039f0a) aid_vkbss_key_offset

0xa45c,	// (0x00039f19) cell_vkbss_key_pane_ParamLimits

0xa45c,	// (0x00039f19) cell_vkbss_key_pane

0xa472,	// (0x00039f2f) bg_cell_vkbss_key_g1_ParamLimits

0xa472,	// (0x00039f2f) bg_cell_vkbss_key_g1

0xa47e,	// (0x00039f3b) cell_vkbss_key_3p_pane_ParamLimits

0xa47e,	// (0x00039f3b) cell_vkbss_key_3p_pane

0xa498,	// (0x00039f55) cell_vkbss_key_g1_ParamLimits

0xa498,	// (0x00039f55) cell_vkbss_key_g1

0xa4b2,	// (0x00039f6f) cell_vkbss_key_t1_ParamLimits

0xa4b2,	// (0x00039f6f) cell_vkbss_key_t1

0xa4dd,	// (0x00039f9a) cell_ituss_key_pane_ParamLimits

0xa4dd,	// (0x00039f9a) cell_ituss_key_pane

0xa4ec,	// (0x00039fa9) bg_cell_ituss_key_g1_ParamLimits

0xa4ec,	// (0x00039fa9) bg_cell_ituss_key_g1

0xa4f8,	// (0x00039fb5) cell_ituss_key_pane_g1_ParamLimits

0xa4f8,	// (0x00039fb5) cell_ituss_key_pane_g1

0xa504,	// (0x00039fc1) cell_ituss_key_pane_g2_ParamLimits

0xa504,	// (0x00039fc1) cell_ituss_key_pane_g2

0x0001,

0xff04,	// (0x0003f9c1) cell_ituss_key_pane_g_ParamLimits

0xff04,	// (0x0003f9c1) cell_ituss_key_pane_g

0xa518,	// (0x00039fd5) cell_ituss_key_t1_ParamLimits

0xa518,	// (0x00039fd5) cell_ituss_key_t1

0xa536,	// (0x00039ff3) cell_ituss_key_t2_ParamLimits

0xa536,	// (0x00039ff3) cell_ituss_key_t2

0xa555,	// (0x0003a012) cell_ituss_key_t3_ParamLimits

0xa555,	// (0x0003a012) cell_ituss_key_t3

0xa574,	// (0x0003a031) cell_ituss_key_t4_ParamLimits

0xa574,	// (0x0003a031) cell_ituss_key_t4

0x0003,

0xff09,	// (0x0003f9c6) cell_ituss_key_t_ParamLimits

0xff09,	// (0x0003f9c6) cell_ituss_key_t

0xa593,	// (0x0003a050) cell_vkbss_key_3p_pane_g1

0xa59b,	// (0x0003a058) cell_vkbss_key_3p_pane_g2

0xa5a3,	// (0x0003a060) cell_vkbss_key_3p_pane_g3

0x0002,

0xff12,	// (0x0003f9cf) cell_vkbss_key_3p_pane_g

0x21e1,	// (0x00031c9e) bg_popup_fep_char_preview_window_cp02

0xa5ab,	// (0x0003a068) popup_fep_char_pre_window_t1

0xec5e,	// (0x0003e71b) main_ai5_sk_pane

0x9f4c,	// (0x00039a09) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9f58,	// (0x00039a15) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9f6c,	// (0x00039a29) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9f7b,	// (0x00039a38) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeea,	// (0x0003f9a7) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9f8e,	// (0x00039a4b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3107,	// (0x00032bc4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf2e3,	// (0x0003eda0) main_ai5_sk_pane_g1
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

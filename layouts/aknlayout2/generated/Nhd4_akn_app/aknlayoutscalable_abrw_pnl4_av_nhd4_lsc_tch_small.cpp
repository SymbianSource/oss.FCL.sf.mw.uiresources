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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000261a0 };

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
0x8cf2,	// (0x0002ee92) Screen

0x8cfe,	// (0x0002ee9e) application_window_ParamLimits

0x8cfe,	// (0x0002ee9e) application_window

0xbb1c,	// (0x00031cbc) screen_g1

0x817a,	// (0x0002e31a) area_bottom_pane_ParamLimits

0x817a,	// (0x0002e31a) area_bottom_pane

0x08d6,	// (0x00026a76) area_top_pane_ParamLimits

0x08d6,	// (0x00026a76) area_top_pane

0x0974,	// (0x00026b14) main_pane_ParamLimits

0x0974,	// (0x00026b14) main_pane

0xbb26,	// (0x00031cc6) misc_graphics

0x9f8f,	// (0x0003012f) battery_pane_ParamLimits

0x9f8f,	// (0x0003012f) battery_pane

0xd8e3,	// (0x00033a83) bg_status_flat_pane_g8

0xd8eb,	// (0x00033a8b) bg_status_flat_pane_g9

0xd00a,	// (0x000331aa) context_pane_ParamLimits

0xd00a,	// (0x000331aa) context_pane

0xa0fa,	// (0x0003029a) navi_pane_ParamLimits

0xa0fa,	// (0x0003029a) navi_pane

0xa172,	// (0x00030312) signal_pane_ParamLimits

0xa172,	// (0x00030312) signal_pane

0x0008,

0x00c5,	// (0x00026265) bg_status_flat_pane_g

0xa202,	// (0x000303a2) status_pane_g1_ParamLimits

0xa202,	// (0x000303a2) status_pane_g1

0xa218,	// (0x000303b8) status_pane_g2_ParamLimits

0xa218,	// (0x000303b8) status_pane_g2

0xd07d,	// (0x0003321d) status_pane_g3_ParamLimits

0xd07d,	// (0x0003321d) status_pane_g3

0x0004,

0xf7b8,	// (0x00035958) status_pane_g_ParamLimits

0xf7b8,	// (0x00035958) status_pane_g

0xa224,	// (0x000303c4) title_pane_ParamLimits

0xa224,	// (0x000303c4) title_pane

0xa287,	// (0x00030427) uni_indicator_pane_ParamLimits

0xa287,	// (0x00030427) uni_indicator_pane

0xce43,	// (0x00032fe3) bg_list_pane_ParamLimits

0xce43,	// (0x00032fe3) bg_list_pane

0x69c1,	// (0x0002cb61) find_pane

0x9876,	// (0x0002fa16) listscroll_app_pane_ParamLimits

0x9876,	// (0x0002fa16) listscroll_app_pane

0xce63,	// (0x00033003) listscroll_form_pane

0x69c9,	// (0x0002cb69) listscroll_gen_pane_ParamLimits

0x69c9,	// (0x0002cb69) listscroll_gen_pane

0xce63,	// (0x00033003) listscroll_set_pane

0xda02,	// (0x00033ba2) main_idle_act_pane

0xcc17,	// (0x00032db7) main_idle_trad_pane

0xcc17,	// (0x00032db7) main_list_empty_pane

0xc339,	// (0x000324d9) main_midp_pane

0xce7d,	// (0x0003301d) main_pane_g1_ParamLimits

0xce7d,	// (0x0003301d) main_pane_g1

0x9882,	// (0x0002fa22) popup_ai_message_window_ParamLimits

0x9882,	// (0x0002fa22) popup_ai_message_window

0x9913,	// (0x0002fab3) popup_fep_china_uni_window_ParamLimits

0x9913,	// (0x0002fab3) popup_fep_china_uni_window

0xceaf,	// (0x0003304f) popup_fep_japan_candidate_window_ParamLimits

0xceaf,	// (0x0003304f) popup_fep_japan_candidate_window

0xcecd,	// (0x0003306d) popup_fep_japan_predictive_window_ParamLimits

0xcecd,	// (0x0003306d) popup_fep_japan_predictive_window

0x996d,	// (0x0002fb0d) popup_find_window

0x998a,	// (0x0002fb2a) popup_grid_graphic_window_ParamLimits

0x998a,	// (0x0002fb2a) popup_grid_graphic_window

0xcefd,	// (0x0003309d) popup_large_graphic_colour_window

0x9a1c,	// (0x0002fbbc) popup_menu_window_ParamLimits

0x9a1c,	// (0x0002fbbc) popup_menu_window

0x9be8,	// (0x0002fd88) popup_note_image_window

0x9bae,	// (0x0002fd4e) popup_note_wait_window_ParamLimits

0x9bae,	// (0x0002fd4e) popup_note_wait_window

0x9c00,	// (0x0002fda0) popup_note_window_ParamLimits

0x9c00,	// (0x0002fda0) popup_note_window

0x9ca6,	// (0x0002fe46) popup_query_code_window_ParamLimits

0x9ca6,	// (0x0002fe46) popup_query_code_window

0xcf23,	// (0x000330c3) popup_query_data_code_window_ParamLimits

0xcf23,	// (0x000330c3) popup_query_data_code_window

0x9ce0,	// (0x0002fe80) popup_query_data_window_ParamLimits

0x9ce0,	// (0x0002fe80) popup_query_data_window

0x9d56,	// (0x0002fef6) popup_query_sat_info_window_ParamLimits

0x9d56,	// (0x0002fef6) popup_query_sat_info_window

0x9ded,	// (0x0002ff8d) popup_snote_single_graphic_window_ParamLimits

0x9ded,	// (0x0002ff8d) popup_snote_single_graphic_window

0x9ded,	// (0x0002ff8d) popup_snote_single_text_window_ParamLimits

0x9ded,	// (0x0002ff8d) popup_snote_single_text_window

0xcf3a,	// (0x000330da) popup_sub_window_general

0xcf80,	// (0x00033120) popup_window_general_ParamLimits

0xcf80,	// (0x00033120) popup_window_general

0xcf95,	// (0x00033135) power_save_pane

0x8521,	// (0x0002e6c1) control_pane_g1_ParamLimits

0x8521,	// (0x0002e6c1) control_pane_g1

0x854a,	// (0x0002e6ea) control_pane_g2_ParamLimits

0x854a,	// (0x0002e6ea) control_pane_g2

0xce1d,	// (0x00032fbd) control_pane_g3_ParamLimits

0xce1d,	// (0x00032fbd) control_pane_g3

0x0007,

0xf7a0,	// (0x00035940) control_pane_g_ParamLimits

0xf7a0,	// (0x00035940) control_pane_g

0x8587,	// (0x0002e727) control_pane_t1_ParamLimits

0x8587,	// (0x0002e727) control_pane_t1

0x85e5,	// (0x0002e785) control_pane_t2_ParamLimits

0x85e5,	// (0x0002e785) control_pane_t2

0x0002,

0xf7b1,	// (0x00035951) control_pane_t_ParamLimits

0xf7b1,	// (0x00035951) control_pane_t

0xcd3e,	// (0x00032ede) navi_navi_volume_pane_cp1

0xcd47,	// (0x00032ee7) status_small_icon_pane

0xcd4f,	// (0x00032eef) status_small_pane_g1_ParamLimits

0xcd4f,	// (0x00032eef) status_small_pane_g1

0xcd83,	// (0x00032f23) status_small_pane_g2_ParamLimits

0xcd83,	// (0x00032f23) status_small_pane_g2

0xcd8f,	// (0x00032f2f) status_small_pane_g3_ParamLimits

0xcd8f,	// (0x00032f2f) status_small_pane_g3

0xcd9b,	// (0x00032f3b) status_small_pane_g4_ParamLimits

0xcd9b,	// (0x00032f3b) status_small_pane_g4

0xcda7,	// (0x00032f47) status_small_pane_g5_ParamLimits

0xcda7,	// (0x00032f47) status_small_pane_g5

0xcdb6,	// (0x00032f56) status_small_pane_g6_ParamLimits

0xcdb6,	// (0x00032f56) status_small_pane_g6

0x0007,

0xf78f,	// (0x0003592f) status_small_pane_g_ParamLimits

0xf78f,	// (0x0003592f) status_small_pane_g

0xcde6,	// (0x00032f86) status_small_pane_t1

0xce09,	// (0x00032fa9) status_small_wait_pane_ParamLimits

0xce09,	// (0x00032fa9) status_small_wait_pane

0x94dc,	// (0x0002f67c) aid_levels_signal_ParamLimits

0x94dc,	// (0x0002f67c) aid_levels_signal

0x96f5,	// (0x0002f895) signal_pane_g1_ParamLimits

0x96f5,	// (0x0002f895) signal_pane_g1

0x9710,	// (0x0002f8b0) signal_pane_g2_ParamLimits

0x9710,	// (0x0002f8b0) signal_pane_g2

0x0003,

0xf720,	// (0x000358c0) signal_pane_g_ParamLimits

0xf720,	// (0x000358c0) signal_pane_g

0xc75b,	// (0x000328fb) context_pane_g1

0x8d0e,	// (0x0002eeae) title_pane_g1

0x8d45,	// (0x0002eee5) title_pane_t1

0xbb3c,	// (0x00031cdc) title_pane_t2

0xbb62,	// (0x00031d02) title_pane_t3

0x0002,

0xf56f,	// (0x0003570f) title_pane_t

0xa2af,	// (0x0003044f) aid_levels_battery_ParamLimits

0xa2af,	// (0x0003044f) aid_levels_battery

0xa2cb,	// (0x0003046b) battery_pane_g1_ParamLimits

0xa2cb,	// (0x0003046b) battery_pane_g1

0xa2e8,	// (0x00030488) battery_pane_g2_ParamLimits

0xa2e8,	// (0x00030488) battery_pane_g2

0x0001,

0xf7c3,	// (0x00035963) battery_pane_g_ParamLimits

0xf7c3,	// (0x00035963) battery_pane_g

0xa4df,	// (0x0003067f) uni_indicator_pane_g1

0xa4f4,	// (0x00030694) uni_indicator_pane_g2

0xe158,	// (0x000342f8) uni_indicator_pane_g3

0x0005,

0xf872,	// (0x00035a12) uni_indicator_pane_g

0xca87,	// (0x00032c27) navi_icon_pane_ParamLimits

0xca87,	// (0x00032c27) navi_icon_pane

0xc9ce,	// (0x00032b6e) navi_midp_pane

0xcaa3,	// (0x00032c43) navi_navi_pane

0xcaad,	// (0x00032c4d) navi_text_pane_ParamLimits

0xcaad,	// (0x00032c4d) navi_text_pane

0xbb1c,	// (0x00031cbc) status_small_wait_pane_g1

0xbea8,	// (0x00032048) status_small_wait_pane_g2

0x0001,

0xf86d,	// (0x00035a0d) status_small_wait_pane_g

0xdea2,	// (0x00034042) navi_navi_icon_text_pane

0xdebc,	// (0x0003405c) navi_navi_pane_g1_ParamLimits

0xdebc,	// (0x0003405c) navi_navi_pane_g1

0xdeaa,	// (0x0003404a) navi_navi_pane_g2_ParamLimits

0xdeaa,	// (0x0003404a) navi_navi_pane_g2

0x0001,

0xf868,	// (0x00035a08) navi_navi_pane_g_ParamLimits

0xf868,	// (0x00035a08) navi_navi_pane_g

0xdece,	// (0x0003406e) navi_navi_tabs_pane

0xded7,	// (0x00034077) navi_navi_text_pane

0xdea2,	// (0x00034042) navi_navi_volume_pane

0xde7e,	// (0x0003401e) navi_text_pane_t1

0xde72,	// (0x00034012) navi_icon_pane_g1

0xddd1,	// (0x00033f71) navi_navi_text_pane_t1

0x8840,	// (0x0002e9e0) navi_navi_volume_pane_g1

0x8848,	// (0x0002e9e8) volume_small_pane

0xa40e,	// (0x000305ae) navi_navi_icon_text_pane_g1

0xa416,	// (0x000305b6) navi_navi_icon_text_pane_t1

0xcaa3,	// (0x00032c43) navi_tabs_2_long_pane

0xcaa3,	// (0x00032c43) navi_tabs_2_pane

0xcaa3,	// (0x00032c43) navi_tabs_3_long_pane

0xcaa3,	// (0x00032c43) navi_tabs_3_pane

0xcaa3,	// (0x00032c43) navi_tabs_4_pane

0x8820,	// (0x0002e9c0) tabs_2_active_pane_ParamLimits

0x8820,	// (0x0002e9c0) tabs_2_active_pane

0x8830,	// (0x0002e9d0) tabs_2_passive_pane_ParamLimits

0x8830,	// (0x0002e9d0) tabs_2_passive_pane

0x87ee,	// (0x0002e98e) tabs_3_active_pane_ParamLimits

0x87ee,	// (0x0002e98e) tabs_3_active_pane

0x87fe,	// (0x0002e99e) tabs_3_passive_pane_ParamLimits

0x87fe,	// (0x0002e99e) tabs_3_passive_pane

0x880f,	// (0x0002e9af) tabs_3_passive_pane_cp_ParamLimits

0x880f,	// (0x0002e9af) tabs_3_passive_pane_cp

0x87aa,	// (0x0002e94a) tabs_4_active_pane_ParamLimits

0x87aa,	// (0x0002e94a) tabs_4_active_pane

0x87bb,	// (0x0002e95b) tabs_4_passive_pane_ParamLimits

0x87bb,	// (0x0002e95b) tabs_4_passive_pane

0x87cc,	// (0x0002e96c) tabs_4_passive_pane_cp_ParamLimits

0x87cc,	// (0x0002e96c) tabs_4_passive_pane_cp

0x87dd,	// (0x0002e97d) tabs_4_passive_pane_cp2_ParamLimits

0x87dd,	// (0x0002e97d) tabs_4_passive_pane_cp2

0x878a,	// (0x0002e92a) tabs_2_long_active_pane_ParamLimits

0x878a,	// (0x0002e92a) tabs_2_long_active_pane

0x879a,	// (0x0002e93a) tabs_2_long_passive_pane_ParamLimits

0x879a,	// (0x0002e93a) tabs_2_long_passive_pane

0x8755,	// (0x0002e8f5) tabs_3_long_active_pane_ParamLimits

0x8755,	// (0x0002e8f5) tabs_3_long_active_pane

0x8766,	// (0x0002e906) tabs_3_long_passive_pane_ParamLimits

0x8766,	// (0x0002e906) tabs_3_long_passive_pane

0x8779,	// (0x0002e919) tabs_3_long_passive_pane_cp_ParamLimits

0x8779,	// (0x0002e919) tabs_3_long_passive_pane_cp

0x2240,	// (0x000283e0) volume_small_pane_g1

0x8704,	// (0x0002e8a4) volume_small_pane_g2

0x870d,	// (0x0002e8ad) volume_small_pane_g3

0x8716,	// (0x0002e8b6) volume_small_pane_g4

0x871f,	// (0x0002e8bf) volume_small_pane_g5

0x8728,	// (0x0002e8c8) volume_small_pane_g6

0x8731,	// (0x0002e8d1) volume_small_pane_g7

0x873a,	// (0x0002e8da) volume_small_pane_g8

0x8743,	// (0x0002e8e3) volume_small_pane_g9

0x874c,	// (0x0002e8ec) volume_small_pane_g10

0x0009,

0xf83e,	// (0x000359de) volume_small_pane_g

0xbb74,	// (0x00031d14) bg_active_tab_pane_cp2_ParamLimits

0xbb74,	// (0x00031d14) bg_active_tab_pane_cp2

0x8dd1,	// (0x0002ef71) tabs_3_active_pane_g1

0x8dd9,	// (0x0002ef79) tabs_3_active_pane_t1

0xbb74,	// (0x00031d14) bg_passive_tab_pane_cp2_ParamLimits

0xbb74,	// (0x00031d14) bg_passive_tab_pane_cp2

0x8dd1,	// (0x0002ef71) tabs_3_passive_pane_g1

0x8dd9,	// (0x0002ef79) tabs_3_passive_pane_t1

0xbb74,	// (0x00031d14) bg_active_tab_pane_cp3_ParamLimits

0xbb74,	// (0x00031d14) bg_active_tab_pane_cp3

0x8deb,	// (0x0002ef8b) tabs_4_active_pane_g1

0x8df3,	// (0x0002ef93) tabs_4_active_pane_t1

0xbb74,	// (0x00031d14) bg_passive_tab_pane_cp3_ParamLimits

0xbb74,	// (0x00031d14) bg_passive_tab_pane_cp3

0x8deb,	// (0x0002ef8b) tabs_4_1_passive_pane_g1

0x8df3,	// (0x0002ef93) tabs_4_1_passive_pane_t1

0xc339,	// (0x000324d9) list_highlight_pane_cp2

0xa581,	// (0x00030721) list_set_pane_ParamLimits

0xa581,	// (0x00030721) list_set_pane

0xa61b,	// (0x000307bb) main_pane_set_t1_ParamLimits

0xa61b,	// (0x000307bb) main_pane_set_t1

0xa63b,	// (0x000307db) main_pane_set_t2_ParamLimits

0xa63b,	// (0x000307db) main_pane_set_t2

0xa64f,	// (0x000307ef) main_pane_set_t3_ParamLimits

0xa64f,	// (0x000307ef) main_pane_set_t3

0xa661,	// (0x00030801) main_pane_set_t4_ParamLimits

0xa661,	// (0x00030801) main_pane_set_t4

0x0003,

0xf8a8,	// (0x00035a48) main_pane_set_t_ParamLimits

0xf8a8,	// (0x00035a48) main_pane_set_t

0xa673,	// (0x00030813) setting_code_pane

0xa67b,	// (0x0003081b) setting_slider_graphic_pane

0xa67b,	// (0x0003081b) setting_slider_pane

0xa67b,	// (0x0003081b) setting_text_pane

0xa67b,	// (0x0003081b) setting_volume_pane

0x0c6b,	// (0x00026e0b) volume_set_pane

0xbb82,	// (0x00031d22) bg_set_opt_pane_cp

0x0c73,	// (0x00026e13) setting_slider_pane_t1

0x0c8c,	// (0x00026e2c) setting_slider_pane_t2

0x0ca5,	// (0x00026e45) setting_slider_pane_t3

0x0002,

0xf576,	// (0x00035716) setting_slider_pane_t

0x0cbc,	// (0x00026e5c) slider_set_pane

0xbb26,	// (0x00031cc6) bg_set_opt_pane_cp2

0xbb90,	// (0x00031d30) setting_slider_graphic_pane_g1

0x0cd2,	// (0x00026e72) setting_slider_graphic_pane_t1

0x0ce1,	// (0x00026e81) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x0003571d) setting_slider_graphic_pane_t

0x0cf0,	// (0x00026e90) slider_set_pane_cp

0xbb26,	// (0x00031cc6) input_focus_pane_cp1

0xe335,	// (0x000344d5) list_set_text_pane

0xbb1c,	// (0x00031cbc) setting_text_pane_g1

0xbb26,	// (0x00031cc6) input_focus_pane_cp2

0xbb1c,	// (0x00031cbc) setting_code_pane_g1

0xbb99,	// (0x00031d39) setting_code_pane_t1

0x6274,	// (0x0002c414) set_text_pane_t1_ParamLimits

0x6274,	// (0x0002c414) set_text_pane_t1

0xc249,	// (0x000323e9) set_opt_bg_pane_g1

0xc251,	// (0x000323f1) set_opt_bg_pane_g2

0xe315,	// (0x000344b5) set_opt_bg_pane_g3

0xc261,	// (0x00032401) set_opt_bg_pane_g4

0xc269,	// (0x00032409) set_opt_bg_pane_g5

0xc271,	// (0x00032411) set_opt_bg_pane_g6

0xe31d,	// (0x000344bd) set_opt_bg_pane_g7

0xe325,	// (0x000344c5) set_opt_bg_pane_g8

0xe32d,	// (0x000344cd) set_opt_bg_pane_g9

0x0008,

0x01bf,	// (0x0002635f) set_opt_bg_pane_g

0xe308,	// (0x000344a8) slider_set_pane_g1

0x2529,	// (0x000286c9) slider_set_pane_g2

0x0006,

0xf899,	// (0x00035a39) slider_set_pane_g

0x24a0,	// (0x00028640) volume_set_pane_g1

0x24a8,	// (0x00028648) volume_set_pane_g2

0x24b0,	// (0x00028650) volume_set_pane_g3

0x24b8,	// (0x00028658) volume_set_pane_g4

0x24c0,	// (0x00028660) volume_set_pane_g5

0x24c8,	// (0x00028668) volume_set_pane_g6

0x24d0,	// (0x00028670) volume_set_pane_g7

0x24d8,	// (0x00028678) volume_set_pane_g8

0x24e0,	// (0x00028680) volume_set_pane_g9

0x24e8,	// (0x00028688) volume_set_pane_g10

0x0009,

0xf87f,	// (0x00035a1f) volume_set_pane_g

0x8e05,	// (0x0002efa5) indicator_pane_ParamLimits

0x8e05,	// (0x0002efa5) indicator_pane

0x8e2d,	// (0x0002efcd) main_idle_pane_g2_ParamLimits

0x8e2d,	// (0x0002efcd) main_idle_pane_g2

0x8e65,	// (0x0002f005) main_pane_idle_g1_ParamLimits

0x8e65,	// (0x0002f005) main_pane_idle_g1

0xbba7,	// (0x00031d47) popup_clock_digital_analogue_window_ParamLimits

0xbba7,	// (0x00031d47) popup_clock_digital_analogue_window

0x8e8c,	// (0x0002f02c) soft_indicator_pane_ParamLimits

0x8e8c,	// (0x0002f02c) soft_indicator_pane

0x8ea6,	// (0x0002f046) wallpaper_pane_ParamLimits

0x8ea6,	// (0x0002f046) wallpaper_pane

0xbb1c,	// (0x00031cbc) wallpaper_pane_g1

0x8eb8,	// (0x0002f058) indicator_pane_g1_ParamLimits

0x8eb8,	// (0x0002f058) indicator_pane_g1

0xe4ab,	// (0x0003464b) navi_navi_icon_text_pane_srt_g1

0xbbd5,	// (0x00031d75) soft_indicator_pane_t1

0xbbef,	// (0x00031d8f) aid_ps_area_pane

0x8ed1,	// (0x0002f071) aid_ps_clock_pane

0xbc00,	// (0x00031da0) aid_ps_indicator_pane

0xbc0c,	// (0x00031dac) indicator_ps_pane_ParamLimits

0xbc0c,	// (0x00031dac) indicator_ps_pane

0xbc1b,	// (0x00031dbb) power_save_pane_g1_ParamLimits

0xbc1b,	// (0x00031dbb) power_save_pane_g1

0xbc27,	// (0x00031dc7) power_save_pane_g2_ParamLimits

0xbc27,	// (0x00031dc7) power_save_pane_g2

0x07ca,	// (0x0002696a) aid_navinavi_width_pane

0xbbef,	// (0x00031d8f) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x00035722) power_save_pane_g_ParamLimits

0xf582,	// (0x00035722) power_save_pane_g

0xbc35,	// (0x00031dd5) power_save_pane_t1_ParamLimits

0xbc35,	// (0x00031dd5) power_save_pane_t1

0x8ed1,	// (0x0002f071) aid_ps_clock_pane_ParamLimits

0xbc00,	// (0x00031da0) aid_ps_indicator_pane_ParamLimits

0xbc47,	// (0x00031de7) power_save_pane_t4_ParamLimits

0xbc47,	// (0x00031de7) power_save_pane_t4

0x0001,

0xf587,	// (0x00035727) power_save_pane_t_ParamLimits

0xf587,	// (0x00035727) power_save_pane_t

0xbc71,	// (0x00031e11) power_save_t3_ParamLimits

0xbc71,	// (0x00031e11) power_save_t3

0xbc5c,	// (0x00031dfc) power_save_t2_ParamLimits

0xbc5c,	// (0x00031dfc) power_save_t2

0xbc86,	// (0x00031e26) indicator_ps_pane_g1

0x8edf,	// (0x0002f07f) ai_gene_pane_ParamLimits

0x8edf,	// (0x0002f07f) ai_gene_pane

0x8ef6,	// (0x0002f096) ai_links_pane_ParamLimits

0x8ef6,	// (0x0002f096) ai_links_pane

0x8f0e,	// (0x0002f0ae) indicator_pane_cp1_ParamLimits

0x8f0e,	// (0x0002f0ae) indicator_pane_cp1

0x8f1d,	// (0x0002f0bd) main_pane_idle_g1_cp_ParamLimits

0x8f1d,	// (0x0002f0bd) main_pane_idle_g1_cp

0xbc8f,	// (0x00031e2f) popup_ai_links_title_window

0x8f35,	// (0x0002f0d5) soft_indicator_pane_cp1_ParamLimits

0x8f35,	// (0x0002f0d5) soft_indicator_pane_cp1

0xe146,	// (0x000342e6) ai_links_pane_g1

0xe14f,	// (0x000342ef) grid_ai_links_pane

0xa4d6,	// (0x00030676) ai_gene_pane_1

0xe134,	// (0x000342d4) ai_gene_pane_2

0xe13d,	// (0x000342dd) list_highlight_pane_cp4

0xa4b2,	// (0x00030652) cell_ai_link_pane_ParamLimits

0xa4b2,	// (0x00030652) cell_ai_link_pane

0xe12c,	// (0x000342cc) cell_ai_link_pane_g1

0xbea8,	// (0x00032048) cell_ai_link_pane_g2

0x0001,

0x0163,	// (0x00026303) cell_ai_link_pane_g

0xbb26,	// (0x00031cc6) grid_highlight_cp2

0xbb26,	// (0x00031cc6) bg_popup_sub_pane_cp1

0xbca6,	// (0x00031e46) popup_ai_links_title_window_t1

0xe07a,	// (0x0003421a) ai_gene_pane_1_g1_ParamLimits

0xe07a,	// (0x0003421a) ai_gene_pane_1_g1

0xe086,	// (0x00034226) ai_gene_pane_1_g2_ParamLimits

0xe086,	// (0x00034226) ai_gene_pane_1_g2

0x0001,

0x0159,	// (0x000262f9) ai_gene_pane_1_g_ParamLimits

0x0159,	// (0x000262f9) ai_gene_pane_1_g

0xe093,	// (0x00034233) ai_gene_pane_1_t1_ParamLimits

0xe093,	// (0x00034233) ai_gene_pane_1_t1

0xe0c7,	// (0x00034267) grid_ai_soft_ind_pane

0xe065,	// (0x00034205) ai_gene_pane_2_t1_ParamLimits

0xe065,	// (0x00034205) ai_gene_pane_2_t1

0x8f49,	// (0x0002f0e9) main_pane_empty_t1_ParamLimits

0x8f49,	// (0x0002f0e9) main_pane_empty_t1

0x8f61,	// (0x0002f101) main_pane_empty_t2_ParamLimits

0x8f61,	// (0x0002f101) main_pane_empty_t2

0x8f76,	// (0x0002f116) main_pane_empty_t3_ParamLimits

0x8f76,	// (0x0002f116) main_pane_empty_t3

0x8f88,	// (0x0002f128) main_pane_empty_t4_ParamLimits

0x8f88,	// (0x0002f128) main_pane_empty_t4

0x8f9a,	// (0x0002f13a) main_pane_empty_t5_ParamLimits

0x8f9a,	// (0x0002f13a) main_pane_empty_t5

0x0004,

0xf58c,	// (0x0003572c) main_pane_empty_t_ParamLimits

0xf58c,	// (0x0003572c) main_pane_empty_t

0xc29a,	// (0x0003243a) bg_popup_window_pane_ParamLimits

0xc29a,	// (0x0003243a) bg_popup_window_pane

0xdddf,	// (0x00033f7f) find_popup_pane_cp2_ParamLimits

0xdddf,	// (0x00033f7f) find_popup_pane_cp2

0xddeb,	// (0x00033f8b) heading_pane_ParamLimits

0xddeb,	// (0x00033f8b) heading_pane

0xbb26,	// (0x00031cc6) bg_popup_sub_pane

0xa433,	// (0x000305d3) bg_popup_window_pane_g1_ParamLimits

0xa433,	// (0x000305d3) bg_popup_window_pane_g1

0xa442,	// (0x000305e2) bg_popup_window_pane_g2_ParamLimits

0xa442,	// (0x000305e2) bg_popup_window_pane_g2

0xa44e,	// (0x000305ee) bg_popup_window_pane_g3_ParamLimits

0xa44e,	// (0x000305ee) bg_popup_window_pane_g3

0xa45a,	// (0x000305fa) bg_popup_window_pane_g4_ParamLimits

0xa45a,	// (0x000305fa) bg_popup_window_pane_g4

0xa469,	// (0x00030609) bg_popup_window_pane_g5_ParamLimits

0xa469,	// (0x00030609) bg_popup_window_pane_g5

0xa479,	// (0x00030619) bg_popup_window_pane_g6_ParamLimits

0xa479,	// (0x00030619) bg_popup_window_pane_g6

0xa485,	// (0x00030625) bg_popup_window_pane_g7_ParamLimits

0xa485,	// (0x00030625) bg_popup_window_pane_g7

0xa494,	// (0x00030634) bg_popup_window_pane_g8_ParamLimits

0xa494,	// (0x00030634) bg_popup_window_pane_g8

0xa4a3,	// (0x00030643) bg_popup_window_pane_g9_ParamLimits

0xa4a3,	// (0x00030643) bg_popup_window_pane_g9

0xddc5,	// (0x00033f65) bg_popup_window_pane_g10_ParamLimits

0xddc5,	// (0x00033f65) bg_popup_window_pane_g10

0x0009,

0xf853,	// (0x000359f3) bg_popup_window_pane_g_ParamLimits

0xf853,	// (0x000359f3) bg_popup_window_pane_g

0xdd7c,	// (0x00033f1c) bg_popup_heading_pane_ParamLimits

0xdd7c,	// (0x00033f1c) bg_popup_heading_pane

0x27d0,	// (0x00028970) tabs_4_passive_pane_cp_srt_ParamLimits

0x27d0,	// (0x00028970) tabs_4_passive_pane_cp_srt

0x27e2,	// (0x00028982) tabs_4_passive_pane_srt_ParamLimits

0xdd90,	// (0x00033f30) heading_pane_g2

0x27e2,	// (0x00028982) tabs_4_passive_pane_srt

0xd261,	// (0x00033401) bg_passive_tab_pane_cp3_srt_ParamLimits

0xd261,	// (0x00033401) bg_passive_tab_pane_cp3_srt

0xdd98,	// (0x00033f38) heading_pane_t1_ParamLimits

0xdd98,	// (0x00033f38) heading_pane_t1

0xddaf,	// (0x00033f4f) heading_pane_t2_ParamLimits

0xddaf,	// (0x00033f4f) heading_pane_t2

0x0001,

0x011c,	// (0x000262bc) heading_pane_t_ParamLimits

0x011c,	// (0x000262bc) heading_pane_t

0xd8ab,	// (0x00033a4b) bg_popup_heading_pane_g1

0xd93c,	// (0x00033adc) bg_popup_heading_pane_g2

0xd946,	// (0x00033ae6) bg_popup_heading_pane_g3

0xd950,	// (0x00033af0) bg_popup_heading_pane_g4

0xd95a,	// (0x00033afa) bg_popup_heading_pane_g5

0xd964,	// (0x00033b04) bg_popup_heading_pane_g6

0xd96c,	// (0x00033b0c) bg_popup_heading_pane_g7

0xd974,	// (0x00033b14) bg_popup_heading_pane_g8

0xd97e,	// (0x00033b1e) bg_popup_heading_pane_g9

0x0008,

0x00d8,	// (0x00026278) bg_popup_heading_pane_g

0xd171,	// (0x00033311) bg_popup_sub_pane_g1

0xd181,	// (0x00033321) bg_popup_sub_pane_g2

0xd179,	// (0x00033319) bg_popup_sub_pane_g3

0xd191,	// (0x00033331) bg_popup_sub_pane_g4

0xd189,	// (0x00033329) bg_popup_sub_pane_g5

0xd199,	// (0x00033339) bg_popup_sub_pane_g6

0xd1a1,	// (0x00033341) bg_popup_sub_pane_g7

0xd1b1,	// (0x00033351) bg_popup_sub_pane_g8

0xd1a9,	// (0x00033349) bg_popup_sub_pane_g9

0x0008,

0xf814,	// (0x000359b4) bg_popup_sub_pane_g

0xbb74,	// (0x00031d14) bg_popup_window_pane_cp5_ParamLimits

0xbb74,	// (0x00031d14) bg_popup_window_pane_cp5

0xbcc3,	// (0x00031e63) popup_note_window_g1_ParamLimits

0xbcc3,	// (0x00031e63) popup_note_window_g1

0xbccf,	// (0x00031e6f) popup_note_window_t1_ParamLimits

0xbccf,	// (0x00031e6f) popup_note_window_t1

0xbce1,	// (0x00031e81) popup_note_window_t2_ParamLimits

0xbce1,	// (0x00031e81) popup_note_window_t2

0xbd5e,	// (0x00031efe) popup_note_window_t3_ParamLimits

0xbd5e,	// (0x00031efe) popup_note_window_t3

0xbd70,	// (0x00031f10) popup_note_window_t4_ParamLimits

0xbd70,	// (0x00031f10) popup_note_window_t4

0xbd98,	// (0x00031f38) popup_note_window_t5_ParamLimits

0xbd98,	// (0x00031f38) popup_note_window_t5

0x0004,

0xf597,	// (0x00035737) popup_note_window_t_ParamLimits

0xf597,	// (0x00035737) popup_note_window_t

0xbdbc,	// (0x00031f5c) bg_popup_window_pane_cp6_ParamLimits

0xbdbc,	// (0x00031f5c) bg_popup_window_pane_cp6

0xd81f,	// (0x000339bf) popup_note_image_window_g1_ParamLimits

0xd81f,	// (0x000339bf) popup_note_image_window_g1

0xd82b,	// (0x000339cb) popup_note_image_window_g2_ParamLimits

0xd82b,	// (0x000339cb) popup_note_image_window_g2

0x0001,

0x00a6,	// (0x00026246) popup_note_image_window_g_ParamLimits

0x00a6,	// (0x00026246) popup_note_image_window_g

0xd844,	// (0x000339e4) popup_note_image_window_t1_ParamLimits

0xd844,	// (0x000339e4) popup_note_image_window_t1

0xd85d,	// (0x000339fd) popup_note_image_window_t2_ParamLimits

0xd85d,	// (0x000339fd) popup_note_image_window_t2

0xd876,	// (0x00033a16) popup_note_image_window_t3_ParamLimits

0xd876,	// (0x00033a16) popup_note_image_window_t3

0x0002,

0x00ab,	// (0x0002624b) popup_note_image_window_t_ParamLimits

0x00ab,	// (0x0002624b) popup_note_image_window_t

0xd6fc,	// (0x0003389c) bg_popup_window_pane_cp7_ParamLimits

0xd6fc,	// (0x0003389c) bg_popup_window_pane_cp7

0xd72c,	// (0x000338cc) popup_note_wait_window_g1_ParamLimits

0xd72c,	// (0x000338cc) popup_note_wait_window_g1

0xd738,	// (0x000338d8) popup_note_wait_window_g2_ParamLimits

0xd738,	// (0x000338d8) popup_note_wait_window_g2

0x0002,

0x0094,	// (0x00026234) popup_note_wait_window_g_ParamLimits

0x0094,	// (0x00026234) popup_note_wait_window_g

0xd750,	// (0x000338f0) popup_note_wait_window_t1_ParamLimits

0xd750,	// (0x000338f0) popup_note_wait_window_t1

0xd777,	// (0x00033917) popup_note_wait_window_t2_ParamLimits

0xd777,	// (0x00033917) popup_note_wait_window_t2

0xd794,	// (0x00033934) popup_note_wait_window_t3_ParamLimits

0xd794,	// (0x00033934) popup_note_wait_window_t3

0xd7a7,	// (0x00033947) popup_note_wait_window_t4_ParamLimits

0xd7a7,	// (0x00033947) popup_note_wait_window_t4

0x0004,

0x009b,	// (0x0002623b) popup_note_wait_window_t_ParamLimits

0x009b,	// (0x0002623b) popup_note_wait_window_t

0xd7cc,	// (0x0003396c) wait_bar_pane_ParamLimits

0xd7cc,	// (0x0003396c) wait_bar_pane

0xbb26,	// (0x00031cc6) wait_anim_pane

0xbb26,	// (0x00031cc6) wait_border_pane

0xbb1c,	// (0x00031cbc) wait_anim_pane_g1

0xbb1c,	// (0x00031cbc) wait_anim_pane_g2

0x0001,

0xf71b,	// (0x000358bb) wait_anim_pane_g

0xd6a0,	// (0x00033840) wait_border_pane_g1

0xd6ab,	// (0x0003384b) wait_border_pane_g2

0xd6b4,	// (0x00033854) wait_border_pane_g3

0x0002,

0x008d,	// (0x0002622d) wait_border_pane_g

0xd510,	// (0x000336b0) bg_popup_window_pane_cp16_ParamLimits

0xd510,	// (0x000336b0) bg_popup_window_pane_cp16

0xd610,	// (0x000337b0) indicator_popup_pane_cp4_ParamLimits

0xd610,	// (0x000337b0) indicator_popup_pane_cp4

0xd624,	// (0x000337c4) popup_query_data_window_t1_ParamLimits

0xd624,	// (0x000337c4) popup_query_data_window_t1

0xd636,	// (0x000337d6) popup_query_data_window_t2_ParamLimits

0xd636,	// (0x000337d6) popup_query_data_window_t2

0xd64f,	// (0x000337ef) popup_query_data_window_t3_ParamLimits

0xd64f,	// (0x000337ef) popup_query_data_window_t3

0x0002,

0x0086,	// (0x00026226) popup_query_data_window_t_ParamLimits

0x0086,	// (0x00026226) popup_query_data_window_t

0xd669,	// (0x00033809) query_popup_data_pane_ParamLimits

0xd669,	// (0x00033809) query_popup_data_pane

0xd67d,	// (0x0003381d) query_popup_data_pane_cp1_ParamLimits

0xd67d,	// (0x0003381d) query_popup_data_pane_cp1

0xd510,	// (0x000336b0) bg_popup_window_pane_cp10_ParamLimits

0xd510,	// (0x000336b0) bg_popup_window_pane_cp10

0xd542,	// (0x000336e2) indicator_popup_pane_ParamLimits

0xd542,	// (0x000336e2) indicator_popup_pane

0xd564,	// (0x00033704) popup_query_code_window_t1_ParamLimits

0xd564,	// (0x00033704) popup_query_code_window_t1

0xd57e,	// (0x0003371e) popup_query_code_window_t2_ParamLimits

0xd57e,	// (0x0003371e) popup_query_code_window_t2

0xd5c7,	// (0x00033767) popup_query_code_window_t3_ParamLimits

0xd5c7,	// (0x00033767) popup_query_code_window_t3

0x0002,

0x007f,	// (0x0002621f) popup_query_code_window_t_ParamLimits

0x007f,	// (0x0002621f) popup_query_code_window_t

0xd5f6,	// (0x00033796) query_popup_pane_ParamLimits

0xd5f6,	// (0x00033796) query_popup_pane

0xbdbc,	// (0x00031f5c) bg_popup_window_pane_cp15_ParamLimits

0xbdbc,	// (0x00031f5c) bg_popup_window_pane_cp15

0xbdda,	// (0x00031f7a) indicator_popup_pane_cp1_ParamLimits

0xbdda,	// (0x00031f7a) indicator_popup_pane_cp1

0xbded,	// (0x00031f8d) indicator_popup_pane_cp2_ParamLimits

0xbded,	// (0x00031f8d) indicator_popup_pane_cp2

0xbe00,	// (0x00031fa0) popup_query_data_code_window_g1_ParamLimits

0xbe00,	// (0x00031fa0) popup_query_data_code_window_g1

0xbe13,	// (0x00031fb3) popup_query_data_code_window_t1_ParamLimits

0xbe13,	// (0x00031fb3) popup_query_data_code_window_t1

0xbe25,	// (0x00031fc5) popup_query_data_code_window_t2_ParamLimits

0xbe25,	// (0x00031fc5) popup_query_data_code_window_t2

0xbe37,	// (0x00031fd7) popup_query_data_code_window_t3_ParamLimits

0xbe37,	// (0x00031fd7) popup_query_data_code_window_t3

0xbe4d,	// (0x00031fed) popup_query_data_code_window_t4_ParamLimits

0xbe4d,	// (0x00031fed) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x00035742) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x00035742) popup_query_data_code_window_t

0x1fe4,	// (0x00028184) list_single_midp_graphic_pane_g3

0xbe65,	// (0x00032005) query_popup_data_pane_cp2_ParamLimits

0xbe78,	// (0x00032018) query_popup_pane_cp2_ParamLimits

0xbe78,	// (0x00032018) query_popup_pane_cp2

0xbb26,	// (0x00031cc6) bg_popup_window_pane_cp11

0xd508,	// (0x000336a8) heading_pane_cp5

0xbf06,	// (0x000320a6) listscroll_popup_info_pane

0xbb26,	// (0x00031cc6) input_focus_pane_cp3

0xbe8b,	// (0x0003202b) query_popup_pane_t1

0xbe99,	// (0x00032039) list_popup_info_pane_ParamLimits

0xbe99,	// (0x00032039) list_popup_info_pane

0xbea8,	// (0x00032048) listscroll_popup_info_pane_g1

0xbeb0,	// (0x00032050) scroll_pane_cp7

0xbeba,	// (0x0003205a) popup_info_list_pane_t1_ParamLimits

0xbeba,	// (0x0003205a) popup_info_list_pane_t1

0xbed4,	// (0x00032074) popup_info_list_pane_t2_ParamLimits

0xbed4,	// (0x00032074) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x0003574b) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x0003574b) popup_info_list_pane_t

0xbb26,	// (0x00031cc6) bg_popup_window_pane_cp12

0xe4c5,	// (0x00034665) find_popup_pane

0xbb82,	// (0x00031d22) bg_popup_window_pane_cp3

0xbeee,	// (0x0003208e) heading_pane_cp3

0xbefa,	// (0x0003209a) listscroll_popup_graphic_pane

0xbb26,	// (0x00031cc6) bg_popup_window_pane_cp4

0x8ffc,	// (0x0002f19c) heading_pane_cp4

0xbf06,	// (0x000320a6) listscroll_popup_colour_pane

0x9004,	// (0x0002f1a4) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9004,	// (0x0002f1a4) cell_large_graphic_colour_none_popup_pane

0x9018,	// (0x0002f1b8) grid_large_graphic_colour_popup_pane_ParamLimits

0x9018,	// (0x0002f1b8) grid_large_graphic_colour_popup_pane

0x903c,	// (0x0002f1dc) listscroll_popup_colour_pane_g1_ParamLimits

0x903c,	// (0x0002f1dc) listscroll_popup_colour_pane_g1

0x9053,	// (0x0002f1f3) listscroll_popup_colour_pane_g2_ParamLimits

0x9053,	// (0x0002f1f3) listscroll_popup_colour_pane_g2

0x906a,	// (0x0002f20a) listscroll_popup_colour_pane_g3_ParamLimits

0x906a,	// (0x0002f20a) listscroll_popup_colour_pane_g3

0x907a,	// (0x0002f21a) listscroll_popup_colour_pane_g4_ParamLimits

0x907a,	// (0x0002f21a) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x00035750) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x00035750) listscroll_popup_colour_pane_g

0xbf0e,	// (0x000320ae) scroll_pane_cp6_ParamLimits

0xbf0e,	// (0x000320ae) scroll_pane_cp6

0x9089,	// (0x0002f229) cell_large_graphic_colour_popup_pane_ParamLimits

0x9089,	// (0x0002f229) cell_large_graphic_colour_popup_pane

0xbf20,	// (0x000320c0) cell_large_graphic_colour_none_popup_pane_t1

0xbb26,	// (0x00031cc6) grid_highlight_pane_cp5

0xbf2f,	// (0x000320cf) cell_large_graphic_colour_popup_pane_g1

0xbf37,	// (0x000320d7) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x00035759) cell_large_graphic_colour_popup_pane_g

0xbf3f,	// (0x000320df) cell_large_graphic_colour_popup_pane_g2_copy1

0xbf48,	// (0x000320e8) grid_highlight_pane_cp4

0xbf50,	// (0x000320f0) bg_popup_window_pane_cp8_ParamLimits

0xbf50,	// (0x000320f0) bg_popup_window_pane_cp8

0xbf6b,	// (0x0003210b) popup_snote_single_text_window_g1_ParamLimits

0xbf6b,	// (0x0003210b) popup_snote_single_text_window_g1

0xbf7d,	// (0x0003211d) popup_snote_single_text_window_t1_ParamLimits

0xbf7d,	// (0x0003211d) popup_snote_single_text_window_t1

0xbf90,	// (0x00032130) popup_snote_single_text_window_t2_ParamLimits

0xbf90,	// (0x00032130) popup_snote_single_text_window_t2

0xbfa3,	// (0x00032143) popup_snote_single_text_window_t3_ParamLimits

0xbfa3,	// (0x00032143) popup_snote_single_text_window_t3

0xbfdc,	// (0x0003217c) popup_snote_single_text_window_t4_ParamLimits

0xbfdc,	// (0x0003217c) popup_snote_single_text_window_t4

0xc010,	// (0x000321b0) popup_snote_single_text_window_t5_ParamLimits

0xc010,	// (0x000321b0) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x0003575e) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x0003575e) popup_snote_single_text_window_t

0xc03f,	// (0x000321df) bg_popup_window_pane_cp9_ParamLimits

0xc03f,	// (0x000321df) bg_popup_window_pane_cp9

0xbf6b,	// (0x0003210b) popup_snote_single_graphic_window_g1_ParamLimits

0xbf6b,	// (0x0003210b) popup_snote_single_graphic_window_g1

0xc04d,	// (0x000321ed) popup_snote_single_graphic_window_g2_ParamLimits

0xc04d,	// (0x000321ed) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x00035769) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x00035769) popup_snote_single_graphic_window_g

0xc059,	// (0x000321f9) popup_snote_single_graphic_window_t1_ParamLimits

0xc059,	// (0x000321f9) popup_snote_single_graphic_window_t1

0xc06c,	// (0x0003220c) popup_snote_single_graphic_window_t2_ParamLimits

0xc06c,	// (0x0003220c) popup_snote_single_graphic_window_t2

0xc07f,	// (0x0003221f) popup_snote_single_graphic_window_t3_ParamLimits

0xc07f,	// (0x0003221f) popup_snote_single_graphic_window_t3

0xc0b8,	// (0x00032258) popup_snote_single_graphic_window_t4_ParamLimits

0xc0b8,	// (0x00032258) popup_snote_single_graphic_window_t4

0xc0ec,	// (0x0003228c) popup_snote_single_graphic_window_t5_ParamLimits

0xc0ec,	// (0x0003228c) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x0003576e) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x0003576e) popup_snote_single_graphic_window_t

0xe449,	// (0x000345e9) grid_graphic_popup_pane_ParamLimits

0xe449,	// (0x000345e9) grid_graphic_popup_pane

0xe475,	// (0x00034615) listscroll_popup_graphic_pane_g1_ParamLimits

0xe475,	// (0x00034615) listscroll_popup_graphic_pane_g1

0xa7a7,	// (0x00030947) listscroll_popup_graphic_pane_g2_ParamLimits

0xa7a7,	// (0x00030947) listscroll_popup_graphic_pane_g2

0x0001,

0xf8cb,	// (0x00035a6b) listscroll_popup_graphic_pane_g_ParamLimits

0xf8cb,	// (0x00035a6b) listscroll_popup_graphic_pane_g

0xe36e,	// (0x0003450e) scroll_pane_cp5

0xa76a,	// (0x0003090a) cell_graphic_popup_pane_ParamLimits

0xa76a,	// (0x0003090a) cell_graphic_popup_pane

0xe414,	// (0x000345b4) cell_graphic_popup_pane_g1

0xe41c,	// (0x000345bc) cell_graphic_popup_pane_g2

0xbf3f,	// (0x000320df) cell_graphic_popup_pane_g3

0x0002,

0x01f5,	// (0x00026395) cell_graphic_popup_pane_g

0xe425,	// (0x000345c5) cell_graphic_popup_pane_t2

0xbf48,	// (0x000320e8) grid_highlight_pane_cp3

0xc12d,	// (0x000322cd) list_gen_pane_ParamLimits

0xc12d,	// (0x000322cd) list_gen_pane

0xc155,	// (0x000322f5) scroll_pane

0xa725,	// (0x000308c5) bg_list_pane_g1_ParamLimits

0xa725,	// (0x000308c5) bg_list_pane_g1

0xe3c3,	// (0x00034563) bg_list_pane_g2_ParamLimits

0xe3c3,	// (0x00034563) bg_list_pane_g2

0xe3d6,	// (0x00034576) bg_list_pane_g3_ParamLimits

0xe3d6,	// (0x00034576) bg_list_pane_g3

0xe3e8,	// (0x00034588) bg_list_pane_g4_ParamLimits

0xe3e8,	// (0x00034588) bg_list_pane_g4

0xa740,	// (0x000308e0) bg_list_pane_g5_ParamLimits

0xa740,	// (0x000308e0) bg_list_pane_g5

0x0004,

0xf8c0,	// (0x00035a60) bg_list_pane_g_ParamLimits

0xf8c0,	// (0x00035a60) bg_list_pane_g

0xa6ae,	// (0x0003084e) list_double2_graphic_large_graphic_pane_ParamLimits

0xa6ae,	// (0x0003084e) list_double2_graphic_large_graphic_pane

0xa6ae,	// (0x0003084e) list_double2_graphic_pane_ParamLimits

0xa6ae,	// (0x0003084e) list_double2_graphic_pane

0xa6ae,	// (0x0003084e) list_double2_large_graphic_pane_ParamLimits

0xa6ae,	// (0x0003084e) list_double2_large_graphic_pane

0xa6c1,	// (0x00030861) list_double2_pane_ParamLimits

0xa6c1,	// (0x00030861) list_double2_pane

0xa6ae,	// (0x0003084e) list_double_graphic_heading_pane_ParamLimits

0xa6ae,	// (0x0003084e) list_double_graphic_heading_pane

0xa6ae,	// (0x0003084e) list_double_graphic_pane_ParamLimits

0xa6ae,	// (0x0003084e) list_double_graphic_pane

0xa6ae,	// (0x0003084e) list_double_heading_pane_ParamLimits

0xa6ae,	// (0x0003084e) list_double_heading_pane

0xa6ae,	// (0x0003084e) list_double_large_graphic_pane_ParamLimits

0xa6ae,	// (0x0003084e) list_double_large_graphic_pane

0xa6ae,	// (0x0003084e) list_double_number_pane_ParamLimits

0xa6ae,	// (0x0003084e) list_double_number_pane

0xa6ae,	// (0x0003084e) list_double_pane_ParamLimits

0xa6ae,	// (0x0003084e) list_double_pane

0xa6ae,	// (0x0003084e) list_double_time_pane_ParamLimits

0xa6ae,	// (0x0003084e) list_double_time_pane

0xa6ae,	// (0x0003084e) list_setting_number_pane_ParamLimits

0xa6ae,	// (0x0003084e) list_setting_number_pane

0xa6ae,	// (0x0003084e) list_setting_pane_ParamLimits

0xa6ae,	// (0x0003084e) list_setting_pane

0xa6d5,	// (0x00030875) list_single_2graphic_pane_ParamLimits

0xa6d5,	// (0x00030875) list_single_2graphic_pane

0xa6d5,	// (0x00030875) list_single_graphic_heading_pane_ParamLimits

0xa6d5,	// (0x00030875) list_single_graphic_heading_pane

0xa6d5,	// (0x00030875) list_single_graphic_pane_ParamLimits

0xa6d5,	// (0x00030875) list_single_graphic_pane

0xa6d5,	// (0x00030875) list_single_heading_pane_ParamLimits

0xa6d5,	// (0x00030875) list_single_heading_pane

0xa6c1,	// (0x00030861) list_single_large_graphic_pane_ParamLimits

0xa6c1,	// (0x00030861) list_single_large_graphic_pane

0xa6d5,	// (0x00030875) list_single_number_heading_pane_ParamLimits

0xa6d5,	// (0x00030875) list_single_number_heading_pane

0xa6d5,	// (0x00030875) list_single_number_pane_ParamLimits

0xa6d5,	// (0x00030875) list_single_number_pane

0xa6d5,	// (0x00030875) list_single_pane_ParamLimits

0xa6d5,	// (0x00030875) list_single_pane

0xbb26,	// (0x00031cc6) list_highlight_pane_cp1

0x629a,	// (0x0002c43a) list_single_pane_g1_ParamLimits

0x629a,	// (0x0002c43a) list_single_pane_g1

0x62a6,	// (0x0002c446) list_single_pane_g2_ParamLimits

0x62a6,	// (0x0002c446) list_single_pane_g2

0x0001,

0xf5e0,	// (0x00035780) list_single_pane_g_ParamLimits

0xf5e0,	// (0x00035780) list_single_pane_g

0x6ab1,	// (0x0002cc51) list_single_pane_t1_ParamLimits

0x6ab1,	// (0x0002cc51) list_single_pane_t1

0x629a,	// (0x0002c43a) list_single_number_pane_g1_ParamLimits

0x629a,	// (0x0002c43a) list_single_number_pane_g1

0x62a6,	// (0x0002c446) list_single_number_pane_g2_ParamLimits

0x62a6,	// (0x0002c446) list_single_number_pane_g2

0x0001,

0xf5e0,	// (0x00035780) list_single_number_pane_g_ParamLimits

0xf5e0,	// (0x00035780) list_single_number_pane_g

0x69e5,	// (0x0002cb85) list_single_number_pane_t1_ParamLimits

0x69e5,	// (0x0002cb85) list_single_number_pane_t1

0x6a71,	// (0x0002cc11) list_single_number_pane_t2_ParamLimits

0x6a71,	// (0x0002cc11) list_single_number_pane_t2

0x0001,

0xf894,	// (0x00035a34) list_single_number_pane_t_ParamLimits

0xf894,	// (0x00035a34) list_single_number_pane_t

0x628e,	// (0x0002c42e) list_single_graphic_pane_g1_ParamLimits

0x628e,	// (0x0002c42e) list_single_graphic_pane_g1

0x629a,	// (0x0002c43a) list_single_graphic_pane_g2_ParamLimits

0x629a,	// (0x0002c43a) list_single_graphic_pane_g2

0x62a6,	// (0x0002c446) list_single_graphic_pane_g3_ParamLimits

0x62a6,	// (0x0002c446) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x00035779) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x00035779) list_single_graphic_pane_g

0x62b2,	// (0x0002c452) list_single_graphic_pane_t1_ParamLimits

0x62b2,	// (0x0002c452) list_single_graphic_pane_t1

0x629a,	// (0x0002c43a) list_single_heading_pane_g1_ParamLimits

0x629a,	// (0x0002c43a) list_single_heading_pane_g1

0x62a6,	// (0x0002c446) list_single_heading_pane_g2_ParamLimits

0x62a6,	// (0x0002c446) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x00035780) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x00035780) list_single_heading_pane_g

0x62c8,	// (0x0002c468) list_single_heading_pane_t1_ParamLimits

0x62c8,	// (0x0002c468) list_single_heading_pane_t1

0x62de,	// (0x0002c47e) list_single_heading_pane_t2_ParamLimits

0x62de,	// (0x0002c47e) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x00035785) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x00035785) list_single_heading_pane_t

0x629a,	// (0x0002c43a) list_single_number_heading_pane_g1_ParamLimits

0x629a,	// (0x0002c43a) list_single_number_heading_pane_g1

0x62a6,	// (0x0002c446) list_single_number_heading_pane_g2_ParamLimits

0x62a6,	// (0x0002c446) list_single_number_heading_pane_g2

0x0001,

0xf5e0,	// (0x00035780) list_single_number_heading_pane_g_ParamLimits

0xf5e0,	// (0x00035780) list_single_number_heading_pane_g

0x62c8,	// (0x0002c468) list_single_number_heading_pane_t1_ParamLimits

0x62c8,	// (0x0002c468) list_single_number_heading_pane_t1

0x62f0,	// (0x0002c490) list_single_number_heading_pane_t2_ParamLimits

0x62f0,	// (0x0002c490) list_single_number_heading_pane_t2

0x6302,	// (0x0002c4a2) list_single_number_heading_pane_t3_ParamLimits

0x6302,	// (0x0002c4a2) list_single_number_heading_pane_t3

0x0002,

0xf5ea,	// (0x0003578a) list_single_number_heading_pane_t_ParamLimits

0xf5ea,	// (0x0003578a) list_single_number_heading_pane_t

0x6314,	// (0x0002c4b4) list_single_graphic_heading_pane_g1_ParamLimits

0x6314,	// (0x0002c4b4) list_single_graphic_heading_pane_g1

0x82f3,	// (0x0002e493) list_single_graphic_heading_pane_g4_ParamLimits

0x82f3,	// (0x0002e493) list_single_graphic_heading_pane_g4

0x62a6,	// (0x0002c446) list_single_graphic_heading_pane_g5_ParamLimits

0x62a6,	// (0x0002c446) list_single_graphic_heading_pane_g5

0x0002,

0xf5f1,	// (0x00035791) list_single_graphic_heading_pane_g_ParamLimits

0xf5f1,	// (0x00035791) list_single_graphic_heading_pane_g

0x62c8,	// (0x0002c468) list_single_graphic_heading_pane_t1_ParamLimits

0x62c8,	// (0x0002c468) list_single_graphic_heading_pane_t1

0x6331,	// (0x0002c4d1) list_single_graphic_heading_pane_t2_ParamLimits

0x6331,	// (0x0002c4d1) list_single_graphic_heading_pane_t2

0x0001,

0xf5f8,	// (0x00035798) list_single_graphic_heading_pane_t_ParamLimits

0xf5f8,	// (0x00035798) list_single_graphic_heading_pane_t

0x6be2,	// (0x0002cd82) list_single_large_graphic_pane_g1_ParamLimits

0x6be2,	// (0x0002cd82) list_single_large_graphic_pane_g1

0x6bee,	// (0x0002cd8e) list_single_large_graphic_pane_g2_ParamLimits

0x6bee,	// (0x0002cd8e) list_single_large_graphic_pane_g2

0x6bfa,	// (0x0002cd9a) list_single_large_graphic_pane_g3_ParamLimits

0x6bfa,	// (0x0002cd9a) list_single_large_graphic_pane_g3

0x0002,

0xf5fd,	// (0x0003579d) list_single_large_graphic_pane_g_ParamLimits

0xf5fd,	// (0x0003579d) list_single_large_graphic_pane_g

0xd6ab,	// (0x0003384b) wait_border_pane_g2_copy1

0x8304,	// (0x0002e4a4) list_single_large_graphic_pane_g4_cp2

0x6c06,	// (0x0002cda6) list_single_large_graphic_pane_t1_ParamLimits

0x6c06,	// (0x0002cda6) list_single_large_graphic_pane_t1

0x830c,	// (0x0002e4ac) list_double_pane_g1_ParamLimits

0x830c,	// (0x0002e4ac) list_double_pane_g1

0x8318,	// (0x0002e4b8) list_double_pane_g2_ParamLimits

0x8318,	// (0x0002e4b8) list_double_pane_g2

0x0001,

0xf604,	// (0x000357a4) list_double_pane_g_ParamLimits

0xf604,	// (0x000357a4) list_double_pane_g

0x8324,	// (0x0002e4c4) list_double_pane_t1_ParamLimits

0x8324,	// (0x0002e4c4) list_double_pane_t1

0x833a,	// (0x0002e4da) list_double_pane_t2_ParamLimits

0x833a,	// (0x0002e4da) list_double_pane_t2

0x0001,

0xf609,	// (0x000357a9) list_double_pane_t_ParamLimits

0xf609,	// (0x000357a9) list_double_pane_t

0x834c,	// (0x0002e4ec) list_double2_pane_g1_ParamLimits

0x834c,	// (0x0002e4ec) list_double2_pane_g1

0x656a,	// (0x0002c70a) list_double2_pane_g2_ParamLimits

0x656a,	// (0x0002c70a) list_double2_pane_g2

0x0001,

0xf60e,	// (0x000357ae) list_double2_pane_g_ParamLimits

0xf60e,	// (0x000357ae) list_double2_pane_g

0x835d,	// (0x0002e4fd) list_double2_pane_t1_ParamLimits

0x835d,	// (0x0002e4fd) list_double2_pane_t1

0x8373,	// (0x0002e513) list_double2_pane_t2_ParamLimits

0x8373,	// (0x0002e513) list_double2_pane_t2

0x0001,

0xf613,	// (0x000357b3) list_double2_pane_t_ParamLimits

0xf613,	// (0x000357b3) list_double2_pane_t

0x830c,	// (0x0002e4ac) list_double_number_pane_g1_ParamLimits

0x830c,	// (0x0002e4ac) list_double_number_pane_g1

0x8318,	// (0x0002e4b8) list_double_number_pane_g2_ParamLimits

0x8318,	// (0x0002e4b8) list_double_number_pane_g2

0x0001,

0xf604,	// (0x000357a4) list_double_number_pane_g_ParamLimits

0xf604,	// (0x000357a4) list_double_number_pane_g

0x8385,	// (0x0002e525) list_double_number_pane_t1_ParamLimits

0x8385,	// (0x0002e525) list_double_number_pane_t1

0x8397,	// (0x0002e537) list_double_number_pane_t2_ParamLimits

0x8397,	// (0x0002e537) list_double_number_pane_t2

0x83ad,	// (0x0002e54d) list_double_number_pane_t3_ParamLimits

0x83ad,	// (0x0002e54d) list_double_number_pane_t3

0x0002,

0xf618,	// (0x000357b8) list_double_number_pane_t_ParamLimits

0xf618,	// (0x000357b8) list_double_number_pane_t

0x83bf,	// (0x0002e55f) list_double_graphic_pane_g1_ParamLimits

0x83bf,	// (0x0002e55f) list_double_graphic_pane_g1

0x83cb,	// (0x0002e56b) list_double_graphic_pane_g2_ParamLimits

0x83cb,	// (0x0002e56b) list_double_graphic_pane_g2

0x83da,	// (0x0002e57a) list_double_graphic_pane_g3_ParamLimits

0x83da,	// (0x0002e57a) list_double_graphic_pane_g3

0x0003,

0xf61f,	// (0x000357bf) list_double_graphic_pane_g_ParamLimits

0xf61f,	// (0x000357bf) list_double_graphic_pane_g

0x83f2,	// (0x0002e592) list_double_graphic_pane_t1_ParamLimits

0x83f2,	// (0x0002e592) list_double_graphic_pane_t1

0x8408,	// (0x0002e5a8) list_double_graphic_pane_t2_ParamLimits

0x8408,	// (0x0002e5a8) list_double_graphic_pane_t2

0x0001,

0xf628,	// (0x000357c8) list_double_graphic_pane_t_ParamLimits

0xf628,	// (0x000357c8) list_double_graphic_pane_t

0x83bf,	// (0x0002e55f) list_double2_graphic_pane_g1_ParamLimits

0x83bf,	// (0x0002e55f) list_double2_graphic_pane_g1

0x841a,	// (0x0002e5ba) list_double2_graphic_pane_g2_ParamLimits

0x841a,	// (0x0002e5ba) list_double2_graphic_pane_g2

0x8426,	// (0x0002e5c6) list_double2_graphic_pane_g3_ParamLimits

0x8426,	// (0x0002e5c6) list_double2_graphic_pane_g3

0x0002,

0xf62d,	// (0x000357cd) list_double2_graphic_pane_g_ParamLimits

0xf62d,	// (0x000357cd) list_double2_graphic_pane_g

0x8397,	// (0x0002e537) list_double2_graphic_pane_t1_ParamLimits

0x8397,	// (0x0002e537) list_double2_graphic_pane_t1

0x8432,	// (0x0002e5d2) list_double2_graphic_pane_t2_ParamLimits

0x8432,	// (0x0002e5d2) list_double2_graphic_pane_t2

0x0001,

0xf634,	// (0x000357d4) list_double2_graphic_pane_t_ParamLimits

0xf634,	// (0x000357d4) list_double2_graphic_pane_t

0x8444,	// (0x0002e5e4) list_double_large_graphic_pane_g1_ParamLimits

0x8444,	// (0x0002e5e4) list_double_large_graphic_pane_g1

0x846f,	// (0x0002e60f) list_double_large_graphic_pane_g2_ParamLimits

0x846f,	// (0x0002e60f) list_double_large_graphic_pane_g2

0x8318,	// (0x0002e4b8) list_double_large_graphic_pane_g3_ParamLimits

0x8318,	// (0x0002e4b8) list_double_large_graphic_pane_g3

0x8480,	// (0x0002e620) list_double_large_graphic_pane_g4_ParamLimits

0x8480,	// (0x0002e620) list_double_large_graphic_pane_g4

0x0004,

0xf639,	// (0x000357d9) list_double_large_graphic_pane_g_ParamLimits

0xf639,	// (0x000357d9) list_double_large_graphic_pane_g

0x8492,	// (0x0002e632) list_double_large_graphic_pane_t1_ParamLimits

0x8492,	// (0x0002e632) list_double_large_graphic_pane_t1

0x84ab,	// (0x0002e64b) list_double_large_graphic_pane_t2_ParamLimits

0x84ab,	// (0x0002e64b) list_double_large_graphic_pane_t2

0x0001,

0xf644,	// (0x000357e4) list_double_large_graphic_pane_t_ParamLimits

0xf644,	// (0x000357e4) list_double_large_graphic_pane_t

0x84bd,	// (0x0002e65d) list_double2_large_graphic_pane_g1_ParamLimits

0x84bd,	// (0x0002e65d) list_double2_large_graphic_pane_g1

0x846f,	// (0x0002e60f) list_double2_large_graphic_pane_g2_ParamLimits

0x846f,	// (0x0002e60f) list_double2_large_graphic_pane_g2

0x8318,	// (0x0002e4b8) list_double2_large_graphic_pane_g3_ParamLimits

0x8318,	// (0x0002e4b8) list_double2_large_graphic_pane_g3

0x0002,

0xf649,	// (0x000357e9) list_double2_large_graphic_pane_g_ParamLimits

0xf649,	// (0x000357e9) list_double2_large_graphic_pane_g

0x84c9,	// (0x0002e669) list_double2_large_graphic_pane_t1_ParamLimits

0x84c9,	// (0x0002e669) list_double2_large_graphic_pane_t1

0x84df,	// (0x0002e67f) list_double2_large_graphic_pane_t2_ParamLimits

0x84df,	// (0x0002e67f) list_double2_large_graphic_pane_t2

0x0001,

0xf650,	// (0x000357f0) list_double2_large_graphic_pane_t_ParamLimits

0xf650,	// (0x000357f0) list_double2_large_graphic_pane_t

0x84f1,	// (0x0002e691) list_double_heading_pane_g1_ParamLimits

0x84f1,	// (0x0002e691) list_double_heading_pane_g1

0x6391,	// (0x0002c531) list_double_heading_pane_g2_ParamLimits

0x6391,	// (0x0002c531) list_double_heading_pane_g2

0x0001,

0xf655,	// (0x000357f5) list_double_heading_pane_g_ParamLimits

0xf655,	// (0x000357f5) list_double_heading_pane_g

0x8502,	// (0x0002e6a2) list_double_heading_pane_t1_ParamLimits

0x8502,	// (0x0002e6a2) list_double_heading_pane_t1

0x90b2,	// (0x0002f252) list_double_heading_pane_t2_ParamLimits

0x90b2,	// (0x0002f252) list_double_heading_pane_t2

0x0001,

0xf65a,	// (0x000357fa) list_double_heading_pane_t_ParamLimits

0xf65a,	// (0x000357fa) list_double_heading_pane_t

0x6422,	// (0x0002c5c2) list_double_graphic_heading_pane_g1_ParamLimits

0x6422,	// (0x0002c5c2) list_double_graphic_heading_pane_g1

0x84f1,	// (0x0002e691) list_double_graphic_heading_pane_g2_ParamLimits

0x84f1,	// (0x0002e691) list_double_graphic_heading_pane_g2

0x6391,	// (0x0002c531) list_double_graphic_heading_pane_g3_ParamLimits

0x6391,	// (0x0002c531) list_double_graphic_heading_pane_g3

0x0002,

0xf65f,	// (0x000357ff) list_double_graphic_heading_pane_g_ParamLimits

0xf65f,	// (0x000357ff) list_double_graphic_heading_pane_g

0x90c4,	// (0x0002f264) list_double_graphic_heading_pane_t1_ParamLimits

0x90c4,	// (0x0002f264) list_double_graphic_heading_pane_t1

0x8432,	// (0x0002e5d2) list_double_graphic_heading_pane_t2_ParamLimits

0x8432,	// (0x0002e5d2) list_double_graphic_heading_pane_t2

0x0001,

0xf666,	// (0x00035806) list_double_graphic_heading_pane_t_ParamLimits

0xf666,	// (0x00035806) list_double_graphic_heading_pane_t

0x846f,	// (0x0002e60f) list_double_time_pane_g1_ParamLimits

0x846f,	// (0x0002e60f) list_double_time_pane_g1

0x8318,	// (0x0002e4b8) list_double_time_pane_g2_ParamLimits

0x8318,	// (0x0002e4b8) list_double_time_pane_g2

0x0001,

0xf66b,	// (0x0003580b) list_double_time_pane_g_ParamLimits

0xf66b,	// (0x0003580b) list_double_time_pane_g

0x84c9,	// (0x0002e669) list_double_time_pane_t1_ParamLimits

0x84c9,	// (0x0002e669) list_double_time_pane_t1

0x90da,	// (0x0002f27a) list_double_time_pane_t2_ParamLimits

0x90da,	// (0x0002f27a) list_double_time_pane_t2

0x90ec,	// (0x0002f28c) list_double_time_pane_t3_ParamLimits

0x90ec,	// (0x0002f28c) list_double_time_pane_t3

0x90fe,	// (0x0002f29e) list_double_time_pane_t4_ParamLimits

0x90fe,	// (0x0002f29e) list_double_time_pane_t4

0x0003,

0xf670,	// (0x00035810) list_double_time_pane_t_ParamLimits

0xf670,	// (0x00035810) list_double_time_pane_t

0x647d,	// (0x0002c61d) list_setting_pane_g1_ParamLimits

0x647d,	// (0x0002c61d) list_setting_pane_g1

0x6489,	// (0x0002c629) list_setting_pane_g2_ParamLimits

0x6489,	// (0x0002c629) list_setting_pane_g2

0x0001,

0xf679,	// (0x00035819) list_setting_pane_g_ParamLimits

0xf679,	// (0x00035819) list_setting_pane_g

0x9110,	// (0x0002f2b0) list_setting_pane_t1_ParamLimits

0x9110,	// (0x0002f2b0) list_setting_pane_t1

0x912a,	// (0x0002f2ca) list_setting_pane_t2_ParamLimits

0x912a,	// (0x0002f2ca) list_setting_pane_t2

0x0002,

0xf67e,	// (0x0003581e) list_setting_pane_t_ParamLimits

0xf67e,	// (0x0003581e) list_setting_pane_t

0x9167,	// (0x0002f307) set_value_pane_cp_ParamLimits

0x9167,	// (0x0002f307) set_value_pane_cp

0x9173,	// (0x0002f313) list_setting_number_pane_g1_ParamLimits

0x9173,	// (0x0002f313) list_setting_number_pane_g1

0x917f,	// (0x0002f31f) list_setting_number_pane_g2_ParamLimits

0x917f,	// (0x0002f31f) list_setting_number_pane_g2

0x0001,

0xf685,	// (0x00035825) list_setting_number_pane_g_ParamLimits

0xf685,	// (0x00035825) list_setting_number_pane_g

0x918b,	// (0x0002f32b) list_setting_number_pane_t1_ParamLimits

0x918b,	// (0x0002f32b) list_setting_number_pane_t1

0x91a4,	// (0x0002f344) list_setting_number_pane_t2_ParamLimits

0x91a4,	// (0x0002f344) list_setting_number_pane_t2

0x91be,	// (0x0002f35e) list_setting_number_pane_t3_ParamLimits

0x91be,	// (0x0002f35e) list_setting_number_pane_t3

0x0003,

0xf68a,	// (0x0003582a) list_setting_number_pane_t_ParamLimits

0xf68a,	// (0x0003582a) list_setting_number_pane_t

0x9167,	// (0x0002f307) set_value_pane_ParamLimits

0x9167,	// (0x0002f307) set_value_pane

0xc189,	// (0x00032329) bg_set_opt_pane_ParamLimits

0xc189,	// (0x00032329) bg_set_opt_pane

0x66d6,	// (0x0002c876) set_value_pane_t1

0xc1aa,	// (0x0003234a) slider_set_pane_cp3

0xc1b3,	// (0x00032353) volume_small_pane_cp

0xc1bc,	// (0x0003235c) list_form_gen_pane

0xc1c5,	// (0x00032365) scroll_pane_cp8

0x9201,	// (0x0002f3a1) form_field_data_pane_ParamLimits

0x9201,	// (0x0002f3a1) form_field_data_pane

0x9218,	// (0x0002f3b8) form_field_data_wide_pane_ParamLimits

0x9218,	// (0x0002f3b8) form_field_data_wide_pane

0x9238,	// (0x0002f3d8) form_field_popup_pane_ParamLimits

0x9238,	// (0x0002f3d8) form_field_popup_pane

0x9256,	// (0x0002f3f6) form_field_popup_wide_pane_ParamLimits

0x9256,	// (0x0002f3f6) form_field_popup_wide_pane

0x6766,	// (0x0002c906) form_field_slider_pane_ParamLimits

0x6766,	// (0x0002c906) form_field_slider_pane

0x6779,	// (0x0002c919) form_field_slider_wide_pane_ParamLimits

0x6779,	// (0x0002c919) form_field_slider_wide_pane

0xc1d6,	// (0x00032376) data_form_pane

0x9277,	// (0x0002f417) form_field_data_pane_t1

0xc1e2,	// (0x00032382) input_focus_pane

0xc1f0,	// (0x00032390) data_form_wide_pane

0x67bc,	// (0x0002c95c) form_field_data_wide_pane_t1

0xbf5d,	// (0x000320fd) input_focus_pane_cp6

0x9291,	// (0x0002f431) form_field_popup_pane_t1

0xc1e2,	// (0x00032382) input_focus_pane_cp7

0xc21c,	// (0x000323bc) list_form_pane

0x6800,	// (0x0002c9a0) form_field_popup_wide_pane_t1

0xc1e2,	// (0x00032382) input_focus_pane_cp8

0xc228,	// (0x000323c8) list_form_wide_pane

0x92b3,	// (0x0002f453) form_field_slider_pane_t1_ParamLimits

0x92b3,	// (0x0002f453) form_field_slider_pane_t1

0x92cb,	// (0x0002f46b) form_field_slider_pane_t2_ParamLimits

0x92cb,	// (0x0002f46b) form_field_slider_pane_t2

0x0001,

0xf69a,	// (0x0003583a) form_field_slider_pane_t_ParamLimits

0xf69a,	// (0x0003583a) form_field_slider_pane_t

0xbb74,	// (0x00031d14) input_focus_pane_cp9_ParamLimits

0xbb74,	// (0x00031d14) input_focus_pane_cp9

0x92e0,	// (0x0002f480) slider_cont_pane_ParamLimits

0x92e0,	// (0x0002f480) slider_cont_pane

0xc237,	// (0x000323d7) form_field_slider_wide_pane_t1_ParamLimits

0xc237,	// (0x000323d7) form_field_slider_wide_pane_t1

0x6857,	// (0x0002c9f7) form_field_slider_wide_pane_t2_ParamLimits

0x6857,	// (0x0002c9f7) form_field_slider_wide_pane_t2

0x0001,

0xf69f,	// (0x0003583f) form_field_slider_wide_pane_t_ParamLimits

0xf69f,	// (0x0003583f) form_field_slider_wide_pane_t

0xbb74,	// (0x00031d14) input_focus_pane_cp10_ParamLimits

0xbb74,	// (0x00031d14) input_focus_pane_cp10

0x92f4,	// (0x0002f494) slider_cont_pane_cp1_ParamLimits

0x92f4,	// (0x0002f494) slider_cont_pane_cp1

0x9308,	// (0x0002f4a8) slider_form_pane_cp

0xc249,	// (0x000323e9) input_focus_pane_g1

0xc251,	// (0x000323f1) input_focus_pane_g2

0xc259,	// (0x000323f9) input_focus_pane_g3

0xc261,	// (0x00032401) input_focus_pane_g4

0xc269,	// (0x00032409) input_focus_pane_g5

0xc271,	// (0x00032411) input_focus_pane_g6

0xc279,	// (0x00032419) input_focus_pane_g7

0xc281,	// (0x00032421) input_focus_pane_g8

0xc289,	// (0x00032429) input_focus_pane_g9

0xbb1c,	// (0x00031cbc) input_focus_pane_g10

0x0009,

0xf6a4,	// (0x00035844) input_focus_pane_g

0xd6b4,	// (0x00033854) wait_border_pane_g3_copy1

0x9310,	// (0x0002f4b0) data_form_pane_t1

0xbb1c,	// (0x00031cbc) wait_anim_pane_g1_copy1

0x9556,	// (0x0002f6f6) data_form_wide_pane_t1

0x932a,	// (0x0002f4ca) list_form_graphic_pane_cp_ParamLimits

0x932a,	// (0x0002f4ca) list_form_graphic_pane_cp

0xe33d,	// (0x000344dd) slider_form_pane_g1

0xe346,	// (0x000344e6) slider_form_pane_g2

0x0006,

0xf8b1,	// (0x00035a51) slider_form_pane_g

0x933d,	// (0x0002f4dd) list_form_graphic_pane_ParamLimits

0x933d,	// (0x0002f4dd) list_form_graphic_pane

0x68d1,	// (0x0002ca71) list_form_graphic_pane_g1

0x68d9,	// (0x0002ca79) list_form_graphic_pane_t1_ParamLimits

0x68d9,	// (0x0002ca79) list_form_graphic_pane_t1

0xbb82,	// (0x00031d22) list_highlight_pane_cp5_ParamLimits

0xbb82,	// (0x00031d22) list_highlight_pane_cp5

0x68ee,	// (0x0002ca8e) find_pane_g1

0xc291,	// (0x00032431) input_find_pane

0x68f7,	// (0x0002ca97) input_find_pane_g1_ParamLimits

0x68f7,	// (0x0002ca97) input_find_pane_g1

0x6903,	// (0x0002caa3) input_find_pane_t1_ParamLimits

0x6903,	// (0x0002caa3) input_find_pane_t1

0x6918,	// (0x0002cab8) input_find_pane_t2_ParamLimits

0x6918,	// (0x0002cab8) input_find_pane_t2

0x0001,

0xf6b9,	// (0x00035859) input_find_pane_t_ParamLimits

0xf6b9,	// (0x00035859) input_find_pane_t

0xc29a,	// (0x0003243a) input_focus_pane_cp5_ParamLimits

0xc29a,	// (0x0003243a) input_focus_pane_cp5

0x935d,	// (0x0002f4fd) bg_popup_window_pane_cp2_ParamLimits

0x935d,	// (0x0002f4fd) bg_popup_window_pane_cp2

0x936a,	// (0x0002f50a) listscroll_menu_pane_ParamLimits

0x936a,	// (0x0002f50a) listscroll_menu_pane

0x9376,	// (0x0002f516) popup_submenu_window_ParamLimits

0x9376,	// (0x0002f516) popup_submenu_window

0xc2a8,	// (0x00032448) find_popup_pane_g1

0xc2b0,	// (0x00032450) input_popup_find_pane_cp

0xc29a,	// (0x0003243a) input_focus_pane_cp4_ParamLimits

0xc29a,	// (0x0003243a) input_focus_pane_cp4

0xc2ba,	// (0x0003245a) input_popup_find_pane_t1_ParamLimits

0xc2ba,	// (0x0003245a) input_popup_find_pane_t1

0xbb26,	// (0x00031cc6) bg_popup_sub_pane_cp

0xc2e8,	// (0x00032488) listscroll_popup_sub_pane

0xc2f0,	// (0x00032490) list_submenu_pane_ParamLimits

0xc2f0,	// (0x00032490) list_submenu_pane

0xc301,	// (0x000324a1) scroll_pane_cp4

0xc309,	// (0x000324a9) list_single_popup_submenu_pane_ParamLimits

0xc309,	// (0x000324a9) list_single_popup_submenu_pane

0xc31c,	// (0x000324bc) list_single_popup_submenu_pane_g1

0xc324,	// (0x000324c4) list_single_popup_submenu_pane_t1_ParamLimits

0xc324,	// (0x000324c4) list_single_popup_submenu_pane_t1

0xbb74,	// (0x00031d14) bg_active_tab_pane_cp1_ParamLimits

0xbb74,	// (0x00031d14) bg_active_tab_pane_cp1

0x93ac,	// (0x0002f54c) tabs_2_active_pane_g1

0x93b4,	// (0x0002f554) tabs_2_active_pane_t1

0xbb74,	// (0x00031d14) bg_passive_tab_pane_cp1_ParamLimits

0xbb74,	// (0x00031d14) bg_passive_tab_pane_cp1

0x93ac,	// (0x0002f54c) tabs_2_passive_pane_g1

0x93b4,	// (0x0002f554) tabs_2_passive_pane_t1

0xbb82,	// (0x00031d22) bg_active_tab_pane_cp4

0x93c6,	// (0x0002f566) tabs_2_long_active_pane_t1

0xc339,	// (0x000324d9) bg_passive_tab_pane_cp4

0x1fec,	// (0x0002818c) list_single_midp_graphic_pane_g4_ParamLimits

0xbb82,	// (0x00031d22) bg_active_tab_pane_cp5

0x93d9,	// (0x0002f579) tabs_3_long_active_pane_t1

0xc339,	// (0x000324d9) bg_passive_tab_pane_cp5

0x1fec,	// (0x0002818c) list_single_midp_graphic_pane_g4

0xbb82,	// (0x00031d22) bg_popup_window_pane_cp13_ParamLimits

0xbb82,	// (0x00031d22) bg_popup_window_pane_cp13

0xc34e,	// (0x000324ee) listscroll_popup_fast_pane_ParamLimits

0xc34e,	// (0x000324ee) listscroll_popup_fast_pane

0xc35d,	// (0x000324fd) grid_popup_fast_pane_ParamLimits

0xc35d,	// (0x000324fd) grid_popup_fast_pane

0xc36f,	// (0x0003250f) scroll_pane_cp9_ParamLimits

0xc36f,	// (0x0003250f) scroll_pane_cp9

0x3293,	// (0x00029433) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x3293,	// (0x00029433) list_single_graphic_hl_pane_t1_cp2

0xc393,	// (0x00032533) input_focus_pane_cp20_ParamLimits

0xc393,	// (0x00032533) input_focus_pane_cp20

0xc3a1,	// (0x00032541) query_popup_data_pane_t1_ParamLimits

0xc3a1,	// (0x00032541) query_popup_data_pane_t1

0xc3b4,	// (0x00032554) query_popup_data_pane_t2_ParamLimits

0xc3b4,	// (0x00032554) query_popup_data_pane_t2

0xc3fa,	// (0x0003259a) query_popup_data_pane_t3_ParamLimits

0xc3fa,	// (0x0003259a) query_popup_data_pane_t3

0xc43b,	// (0x000325db) query_popup_data_pane_t4_ParamLimits

0xc43b,	// (0x000325db) query_popup_data_pane_t4

0xc477,	// (0x00032617) query_popup_data_pane_t5_ParamLimits

0xc477,	// (0x00032617) query_popup_data_pane_t5

0x0004,

0xf6be,	// (0x0003585e) query_popup_data_pane_t_ParamLimits

0xf6be,	// (0x0003585e) query_popup_data_pane_t

0xc249,	// (0x000323e9) bg_set_opt_pane_g1

0xc251,	// (0x000323f1) bg_set_opt_pane_g2

0xc259,	// (0x000323f9) bg_set_opt_pane_g3

0xc261,	// (0x00032401) bg_set_opt_pane_g4

0xc269,	// (0x00032409) bg_set_opt_pane_g5

0xc271,	// (0x00032411) bg_set_opt_pane_g6

0xc279,	// (0x00032419) bg_set_opt_pane_g7

0xc281,	// (0x00032421) bg_set_opt_pane_g8

0xc289,	// (0x00032429) bg_set_opt_pane_g9

0x0008,

0xf6c9,	// (0x00035869) bg_set_opt_pane_g

0x13c8,	// (0x00027568) control_top_pane_stacon_ParamLimits

0x13c8,	// (0x00027568) control_top_pane_stacon

0x141b,	// (0x000275bb) signal_pane_stacon_ParamLimits

0x141b,	// (0x000275bb) signal_pane_stacon

0xc8c9,	// (0x00032a69) stacon_top_pane_g1_ParamLimits

0xc8c9,	// (0x00032a69) stacon_top_pane_g1

0x1440,	// (0x000275e0) title_pane_stacon_ParamLimits

0x1440,	// (0x000275e0) title_pane_stacon

0x146a,	// (0x0002760a) uni_indicator_pane_stacon_ParamLimits

0x146a,	// (0x0002760a) uni_indicator_pane_stacon

0x147f,	// (0x0002761f) battery_pane_stacon_ParamLimits

0x147f,	// (0x0002761f) battery_pane_stacon

0x14c3,	// (0x00027663) control_bottom_pane_stacon_ParamLimits

0x14c3,	// (0x00027663) control_bottom_pane_stacon

0x14e6,	// (0x00027686) navi_pane_stacon_ParamLimits

0x14e6,	// (0x00027686) navi_pane_stacon

0xc8eb,	// (0x00032a8b) stacon_bottom_pane_g1_ParamLimits

0xc8eb,	// (0x00032a8b) stacon_bottom_pane_g1

0x0fba,	// (0x0002715a) aid_levels_signal_lsc_ParamLimits

0x0fba,	// (0x0002715a) aid_levels_signal_lsc

0x0fd1,	// (0x00027171) signal_pane_stacon_g1_ParamLimits

0x0fd1,	// (0x00027171) signal_pane_stacon_g1

0x0fe5,	// (0x00027185) signal_pane_stacon_g2_ParamLimits

0x0fe5,	// (0x00027185) signal_pane_stacon_g2

0x0001,

0xf6dc,	// (0x0003587c) signal_pane_stacon_g_ParamLimits

0xf6dc,	// (0x0003587c) signal_pane_stacon_g

0x101a,	// (0x000271ba) title_pane_stacon_t1_ParamLimits

0x101a,	// (0x000271ba) title_pane_stacon_t1

0xc4bb,	// (0x0003265b) uni_indicator_pane_stacon_g1

0xc4c5,	// (0x00032665) uni_indicator_pane_stacon_g2

0xc4cf,	// (0x0003266f) uni_indicator_pane_stacon_g3

0xc4d9,	// (0x00032679) uni_indicator_pane_stacon_g4

0x0003,

0xf6e8,	// (0x00035888) uni_indicator_pane_stacon_g

0x103f,	// (0x000271df) control_top_pane_stacon_g1

0x1047,	// (0x000271e7) control_top_pane_stacon_t1_ParamLimits

0x1047,	// (0x000271e7) control_top_pane_stacon_t1

0x107e,	// (0x0002721e) aid_levels_battery_lsc_ParamLimits

0x107e,	// (0x0002721e) aid_levels_battery_lsc

0x1096,	// (0x00027236) battery_pane_stacon_g1_ParamLimits

0x1096,	// (0x00027236) battery_pane_stacon_g1

0x10a9,	// (0x00027249) battery_pane_stacon_g2_ParamLimits

0x10a9,	// (0x00027249) battery_pane_stacon_g2

0x0001,

0xf6f1,	// (0x00035891) battery_pane_stacon_g_ParamLimits

0xf6f1,	// (0x00035891) battery_pane_stacon_g

0x10e7,	// (0x00027287) navi_icon_pane_stacon

0x10fb,	// (0x0002729b) navi_navi_pane_stacon

0x10e7,	// (0x00027287) navi_text_pane_stacon

0x103f,	// (0x000271df) control_bottom_pane_stacon_g1

0x110f,	// (0x000272af) control_bottom_pane_stacon_t1_ParamLimits

0x110f,	// (0x000272af) control_bottom_pane_stacon_t1

0x93eb,	// (0x0002f58b) grid_app_pane_ParamLimits

0x93eb,	// (0x0002f58b) grid_app_pane

0x9421,	// (0x0002f5c1) scroll_pane_cp15_ParamLimits

0x9421,	// (0x0002f5c1) scroll_pane_cp15

0x943a,	// (0x0002f5da) cell_app_pane_ParamLimits

0x943a,	// (0x0002f5da) cell_app_pane

0x9481,	// (0x0002f621) cell_app_pane_g1_ParamLimits

0x9481,	// (0x0002f621) cell_app_pane_g1

0xc4fd,	// (0x0003269d) cell_app_pane_g2_ParamLimits

0xc4fd,	// (0x0003269d) cell_app_pane_g2

0x0001,

0xf6f6,	// (0x00035896) cell_app_pane_g_ParamLimits

0xf6f6,	// (0x00035896) cell_app_pane_g

0x94a1,	// (0x0002f641) cell_app_pane_t1_ParamLimits

0x94a1,	// (0x0002f641) cell_app_pane_t1

0xc509,	// (0x000326a9) grid_highlight_pane_ParamLimits

0xc509,	// (0x000326a9) grid_highlight_pane

0xc249,	// (0x000323e9) cell_highlight_pane_g1

0xc251,	// (0x000323f1) cell_highlight_pane_g2

0xc259,	// (0x000323f9) cell_highlight_pane_g3

0xc261,	// (0x00032401) cell_highlight_pane_g4

0xc269,	// (0x00032409) cell_highlight_pane_g5

0xc271,	// (0x00032411) cell_highlight_pane_g6

0xc279,	// (0x00032419) cell_highlight_pane_g7

0xc281,	// (0x00032421) cell_highlight_pane_g8

0xc289,	// (0x00032429) cell_highlight_pane_g9

0xbb1c,	// (0x00031cbc) cell_highlight_pane_g10

0x0009,

0xf6a4,	// (0x00035844) cell_highlight_pane_g

0xc51a,	// (0x000326ba) bg_scroll_pane

0x11f1,	// (0x00027391) scroll_handle_pane

0xc561,	// (0x00032701) scroll_bg_pane_g1

0xc576,	// (0x00032716) scroll_bg_pane_g2

0xc58e,	// (0x0003272e) scroll_bg_pane_g3

0x0002,

0xf6fb,	// (0x0003589b) scroll_bg_pane_g

0xc5a3,	// (0x00032743) scroll_handle_focus_pane_ParamLimits

0xc5a3,	// (0x00032743) scroll_handle_focus_pane

0xc561,	// (0x00032701) scroll_handle_pane_g1

0xc5b0,	// (0x00032750) scroll_handle_pane_g2

0xc58e,	// (0x0003272e) scroll_handle_pane_g3

0x0002,

0xf702,	// (0x000358a2) scroll_handle_pane_g

0xc29a,	// (0x0003243a) bg_popup_sub_pane_cp21_ParamLimits

0xc29a,	// (0x0003243a) bg_popup_sub_pane_cp21

0xc5c4,	// (0x00032764) popup_fep_japan_predictive_window_t1_ParamLimits

0xc5c4,	// (0x00032764) popup_fep_japan_predictive_window_t1

0xc5db,	// (0x0003277b) popup_fep_japan_predictive_window_t2_ParamLimits

0xc5db,	// (0x0003277b) popup_fep_japan_predictive_window_t2

0xc60e,	// (0x000327ae) popup_fep_japan_predictive_window_t3_ParamLimits

0xc60e,	// (0x000327ae) popup_fep_japan_predictive_window_t3

0x0002,

0xf709,	// (0x000358a9) popup_fep_japan_predictive_window_t_ParamLimits

0xf709,	// (0x000358a9) popup_fep_japan_predictive_window_t

0xbb26,	// (0x00031cc6) bg_popup_sub_pane_cp23

0xc645,	// (0x000327e5) listscroll_japin_cand_pane

0xc64d,	// (0x000327ed) popup_fep_japan_candidate_window_t1

0xc65b,	// (0x000327fb) candidate_pane_ParamLimits

0xc65b,	// (0x000327fb) candidate_pane

0xc66d,	// (0x0003280d) scroll_pane_cp30

0xc675,	// (0x00032815) list_single_popup_jap_candidate_pane_ParamLimits

0xc675,	// (0x00032815) list_single_popup_jap_candidate_pane

0xbb26,	// (0x00031cc6) list_highlight_pane_cp30

0xc689,	// (0x00032829) list_single_popup_jap_candidate_pane_t1

0xc698,	// (0x00032838) level_1_signal

0xc6a5,	// (0x00032845) level_2_signal

0xc6b2,	// (0x00032852) level_3_signal

0xc6bf,	// (0x0003285f) level_4_signal

0xc6cc,	// (0x0003286c) level_5_signal

0xc6d9,	// (0x00032879) level_6_signal

0xc6e6,	// (0x00032886) level_7_signal

0xc698,	// (0x00032838) level_1_battery

0xc6a5,	// (0x00032845) level_2_battery

0xc6b2,	// (0x00032852) level_3_battery

0xc6bf,	// (0x0003285f) level_4_battery

0xc6cc,	// (0x0003286c) level_5_battery

0xc6d9,	// (0x00032879) level_6_battery

0xc6e6,	// (0x00032886) level_7_battery

0xc70b,	// (0x000328ab) list_menu_pane_ParamLimits

0xc70b,	// (0x000328ab) list_menu_pane

0xc721,	// (0x000328c1) scroll_pane_cp25_ParamLimits

0xc721,	// (0x000328c1) scroll_pane_cp25

0xc73a,	// (0x000328da) list_double2_graphic_pane_cp2_ParamLimits

0xc73a,	// (0x000328da) list_double2_graphic_pane_cp2

0xc73a,	// (0x000328da) list_double2_large_graphic_pane_cp2_ParamLimits

0xc73a,	// (0x000328da) list_double2_large_graphic_pane_cp2

0xc73a,	// (0x000328da) list_double2_pane_cp2_ParamLimits

0xc73a,	// (0x000328da) list_double2_pane_cp2

0xc73a,	// (0x000328da) list_double_graphic_pane_cp2_ParamLimits

0xc73a,	// (0x000328da) list_double_graphic_pane_cp2

0xc73a,	// (0x000328da) list_double_large_graphic_pane_cp2_ParamLimits

0xc73a,	// (0x000328da) list_double_large_graphic_pane_cp2

0xc73a,	// (0x000328da) list_double_number_pane_cp2_ParamLimits

0xc73a,	// (0x000328da) list_double_number_pane_cp2

0xc73a,	// (0x000328da) list_double_pane_cp2_ParamLimits

0xc73a,	// (0x000328da) list_double_pane_cp2

0x94c9,	// (0x0002f669) list_single_2graphic_pane_cp2_ParamLimits

0x94c9,	// (0x0002f669) list_single_2graphic_pane_cp2

0x94c9,	// (0x0002f669) list_single_graphic_heading_pane_cp2_ParamLimits

0x94c9,	// (0x0002f669) list_single_graphic_heading_pane_cp2

0x94c9,	// (0x0002f669) list_single_graphic_pane_cp2_ParamLimits

0x94c9,	// (0x0002f669) list_single_graphic_pane_cp2

0x94c9,	// (0x0002f669) list_single_heading_pane_cp2_ParamLimits

0x94c9,	// (0x0002f669) list_single_heading_pane_cp2

0xc74a,	// (0x000328ea) list_single_large_graphic_pane_cp2_ParamLimits

0xc74a,	// (0x000328ea) list_single_large_graphic_pane_cp2

0x94c9,	// (0x0002f669) list_single_number_heading_pane_cp2_ParamLimits

0x94c9,	// (0x0002f669) list_single_number_heading_pane_cp2

0x94c9,	// (0x0002f669) list_single_number_pane_cp2_ParamLimits

0x94c9,	// (0x0002f669) list_single_number_pane_cp2

0x94c9,	// (0x0002f669) list_single_pane_cp2_ParamLimits

0x94c9,	// (0x0002f669) list_single_pane_cp2

0xc764,	// (0x00032904) bg_popup_sub_pane_cp22

0x132e,	// (0x000274ce) popup_side_volume_key_window_g1

0x1358,	// (0x000274f8) popup_side_volume_key_window_t1

0x1374,	// (0x00027514) volume_small_pane_cp1

0xbb74,	// (0x00031d14) bg_popup_sub_pane_cp24_ParamLimits

0xbb74,	// (0x00031d14) bg_popup_sub_pane_cp24

0xc77a,	// (0x0003291a) fep_china_uni_candidate_pane_ParamLimits

0xc77a,	// (0x0003291a) fep_china_uni_candidate_pane

0xc78e,	// (0x0003292e) fep_china_uni_entry_pane

0xc79e,	// (0x0003293e) popup_fep_china_uni_window_g1

0xc7ba,	// (0x0003295a) fep_china_uni_entry_pane_g1

0xc7c2,	// (0x00032962) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x000358da) fep_china_uni_entry_pane_g

0xc7ca,	// (0x0003296a) fep_entry_item_pane

0xc7d4,	// (0x00032974) fep_candidate_item_pane

0xc7dc,	// (0x0003297c) fep_china_uni_candidate_pane_g1

0xc7e4,	// (0x00032984) fep_china_uni_candidate_pane_g2

0xc7ec,	// (0x0003298c) fep_china_uni_candidate_pane_g3

0xc7f4,	// (0x00032994) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x000358df) fep_china_uni_candidate_pane_g

0xbb1c,	// (0x00031cbc) fep_entry_item_pane_g1

0xc7fc,	// (0x0003299c) fep_entry_item_pane_t1_ParamLimits

0xc7fc,	// (0x0003299c) fep_entry_item_pane_t1

0xc812,	// (0x000329b2) fep_candidate_item_pane_t1_ParamLimits

0xc812,	// (0x000329b2) fep_candidate_item_pane_t1

0xc827,	// (0x000329c7) fep_candidate_item_pane_t2_ParamLimits

0xc827,	// (0x000329c7) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x000358e8) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x000358e8) fep_candidate_item_pane_t

0xbb82,	// (0x00031d22) list_highlight_pane_cp31_ParamLimits

0xbb82,	// (0x00031d22) list_highlight_pane_cp31

0xc839,	// (0x000329d9) level_1_signal_lsc

0xc842,	// (0x000329e2) level_2_signal_lsc

0xc84b,	// (0x000329eb) level_3_signal_lsc

0xc854,	// (0x000329f4) level_4_signal_lsc

0xc85d,	// (0x000329fd) level_5_signal_lsc

0xc866,	// (0x00032a06) level_6_signal_lsc

0xc86f,	// (0x00032a0f) level_7_signal_lsc

0xc86f,	// (0x00032a0f) level_1_battery_lsc

0xc878,	// (0x00032a18) level_2_battery_lsc

0xc881,	// (0x00032a21) level_3_battery_lsc

0xc88a,	// (0x00032a2a) level_4_battery_lsc

0xc893,	// (0x00032a33) level_5_battery_lsc

0xc89c,	// (0x00032a3c) level_6_battery_lsc

0xc839,	// (0x000329d9) level_7_battery_lsc

0xc8a5,	// (0x00032a45) scroll_handle_focus_pane_g1

0xc8ae,	// (0x00032a4e) scroll_handle_focus_pane_g2

0xc8b7,	// (0x00032a57) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x000358ed) scroll_handle_focus_pane_g

0x692d,	// (0x0002cacd) list_single_2graphic_pane_g1_ParamLimits

0x692d,	// (0x0002cacd) list_single_2graphic_pane_g1

0x82f3,	// (0x0002e493) list_single_2graphic_pane_g2_ParamLimits

0x82f3,	// (0x0002e493) list_single_2graphic_pane_g2

0x62a6,	// (0x0002c446) list_single_2graphic_pane_g3_ParamLimits

0x62a6,	// (0x0002c446) list_single_2graphic_pane_g3

0x6939,	// (0x0002cad9) list_single_2graphic_pane_g4_ParamLimits

0x6939,	// (0x0002cad9) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x000358f4) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x000358f4) list_single_2graphic_pane_g

0x6945,	// (0x0002cae5) list_single_2graphic_pane_t1_ParamLimits

0x6945,	// (0x0002cae5) list_single_2graphic_pane_t1

0x94f4,	// (0x0002f694) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x94f4,	// (0x0002f694) list_double2_graphic_large_graphic_pane_g1

0x846f,	// (0x0002e60f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x846f,	// (0x0002e60f) list_double2_graphic_large_graphic_pane_g2

0x8318,	// (0x0002e4b8) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8318,	// (0x0002e4b8) list_double2_graphic_large_graphic_pane_g3

0x9506,	// (0x0002f6a6) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9506,	// (0x0002f6a6) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x000358fd) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x000358fd) list_double2_graphic_large_graphic_pane_g

0x9512,	// (0x0002f6b2) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9512,	// (0x0002f6b2) list_double2_graphic_large_graphic_pane_t1

0x9528,	// (0x0002f6c8) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9528,	// (0x0002f6c8) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x00035906) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x00035906) list_double2_graphic_large_graphic_pane_t

0xc998,	// (0x00032b38) popup_fast_swap_window_ParamLimits

0xc998,	// (0x00032b38) popup_fast_swap_window

0xc9b4,	// (0x00032b54) popup_side_volume_key_window

0xc9ce,	// (0x00032b6e) stacon_top_pane

0xc9d8,	// (0x00032b78) status_pane_ParamLimits

0xc9d8,	// (0x00032b78) status_pane

0xc9ce,	// (0x00032b6e) status_small_pane

0xbb26,	// (0x00031cc6) control_pane

0xbb26,	// (0x00031cc6) stacon_bottom_pane

0xc1c5,	// (0x00032365) scroll_pane_cp121

0xc1bc,	// (0x0003235c) set_content_pane

0x9758,	// (0x0002f8f8) bg_active_tab_pane_g1_cp1

0xc8c0,	// (0x00032a60) bg_active_tab_pane_g2_cp1

0x9761,	// (0x0002f901) bg_active_tab_pane_g3_cp1

0x9758,	// (0x0002f8f8) bg_passive_tab_pane_g1_cp1

0xc8c0,	// (0x00032a60) bg_passive_tab_pane_g2_cp1

0x9761,	// (0x0002f901) bg_passive_tab_pane_g3_cp1

0x976a,	// (0x0002f90a) bg_active_tab_pane_g1_cp2

0xc8c0,	// (0x00032a60) bg_active_tab_pane_g2_cp2

0x9773,	// (0x0002f913) bg_active_tab_pane_g3_cp2

0x976a,	// (0x0002f90a) bg_passive_tab_pane_g1_cp2

0xc8c0,	// (0x00032a60) bg_passive_tab_pane_g2_cp2

0x9773,	// (0x0002f913) bg_passive_tab_pane_g3_cp2

0x977c,	// (0x0002f91c) bg_active_tab_pane_g1_cp3

0xc8c0,	// (0x00032a60) bg_active_tab_pane_g2_cp3

0x9785,	// (0x0002f925) bg_active_tab_pane_g3_cp3

0x977c,	// (0x0002f91c) bg_passive_tab_pane_g1_cp3

0xc8c0,	// (0x00032a60) bg_passive_tab_pane_g2_cp3

0x9785,	// (0x0002f925) bg_passive_tab_pane_g3_cp3

0x978e,	// (0x0002f92e) bg_active_tab_pane_g1_cp4

0xc8c0,	// (0x00032a60) bg_active_tab_pane_g2_cp4

0x9797,	// (0x0002f937) bg_active_tab_pane_g3_cp4

0x978e,	// (0x0002f92e) bg_passive_tab_pane_g1_cp4

0xc8c0,	// (0x00032a60) bg_passive_tab_pane_g2_cp4

0x9797,	// (0x0002f937) bg_passive_tab_pane_g3_cp4

0xc907,	// (0x00032aa7) bg_active_tab_pane_g1_cp5

0xc8c0,	// (0x00032a60) bg_active_tab_pane_g2_cp5

0xc910,	// (0x00032ab0) bg_active_tab_pane_g3_cp5

0xc907,	// (0x00032aa7) bg_passive_tab_pane_g1_cp5

0xc8c0,	// (0x00032a60) bg_passive_tab_pane_g2_cp5

0xc910,	// (0x00032ab0) bg_passive_tab_pane_g3_cp5

0x5e4e,	// (0x0002bfee) list_set_graphic_pane_ParamLimits

0x5e4e,	// (0x0002bfee) list_set_graphic_pane

0xbb26,	// (0x00031cc6) bg_set_opt_pane_cp4

0xc919,	// (0x00032ab9) list_set_graphic_pane_g1_ParamLimits

0xc919,	// (0x00032ab9) list_set_graphic_pane_g1

0xc925,	// (0x00032ac5) list_set_graphic_pane_g2_ParamLimits

0xc925,	// (0x00032ac5) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x0003590b) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x0003590b) list_set_graphic_pane_g

0x0009,

0xf94b,	// (0x00035aeb) volume_small_pane_cp_g

0xc949,	// (0x00032ae9) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc949,	// (0x00032ae9) list_double2_large_graphic_pane_g1_cp2

0xc957,	// (0x00032af7) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc957,	// (0x00032af7) list_double2_large_graphic_pane_g2_cp2

0xc968,	// (0x00032b08) list_double2_large_graphic_pane_g3_cp2

0xc970,	// (0x00032b10) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc970,	// (0x00032b10) list_double2_large_graphic_pane_t1_cp2

0xc986,	// (0x00032b26) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc986,	// (0x00032b26) list_double2_large_graphic_pane_t2_cp2

0xe0d7,	// (0x00034277) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xe0d7,	// (0x00034277) list_double_large_graphic_pane_g1_cp2

0xe0ea,	// (0x0003428a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xe0ea,	// (0x0003428a) list_double_large_graphic_pane_g2_cp2

0xcaf6,	// (0x00032c96) list_double_large_graphic_pane_g3_cp2

0xe0fb,	// (0x0003429b) list_double_large_graphic_pane_g4_cp

0xe103,	// (0x000342a3) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xe103,	// (0x000342a3) list_double_large_graphic_pane_t1_cp2

0xe11a,	// (0x000342ba) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xe11a,	// (0x000342ba) list_double_large_graphic_pane_t2_cp2

0xc9e6,	// (0x00032b86) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc9e6,	// (0x00032b86) list_double2_graphic_pane_g1_cp2

0xc9f4,	// (0x00032b94) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc9f4,	// (0x00032b94) list_double2_graphic_pane_g2_cp2

0xca05,	// (0x00032ba5) list_double2_graphic_pane_g3_cp2

0xca0f,	// (0x00032baf) list_double2_graphic_pane_t1_cp2_ParamLimits

0xca0f,	// (0x00032baf) list_double2_graphic_pane_t1_cp2

0xca25,	// (0x00032bc5) list_double2_graphic_pane_t2_cp2_ParamLimits

0xca25,	// (0x00032bc5) list_double2_graphic_pane_t2_cp2

0xca37,	// (0x00032bd7) list_single_number_heading_pane_g1_cp2_ParamLimits

0xca37,	// (0x00032bd7) list_single_number_heading_pane_g1_cp2

0xca43,	// (0x00032be3) list_single_number_heading_pane_g2_cp2

0xca4b,	// (0x00032beb) list_single_number_heading_pane_t1_cp2_ParamLimits

0xca4b,	// (0x00032beb) list_single_number_heading_pane_t1_cp2

0xca61,	// (0x00032c01) list_single_number_heading_pane_t2_cp2_ParamLimits

0xca61,	// (0x00032c01) list_single_number_heading_pane_t2_cp2

0xca75,	// (0x00032c15) list_single_number_heading_pane_t3_cp2_ParamLimits

0xca75,	// (0x00032c15) list_single_number_heading_pane_t3_cp2

0xca37,	// (0x00032bd7) list_single_heading_pane_g1_cp2_ParamLimits

0xca37,	// (0x00032bd7) list_single_heading_pane_g1_cp2

0xca43,	// (0x00032be3) list_single_heading_pane_g2_cp2

0xca4b,	// (0x00032beb) list_single_heading_pane_t1_cp2_ParamLimits

0xca4b,	// (0x00032beb) list_single_heading_pane_t1_cp2

0xdedf,	// (0x0003407f) list_single_heading_pane_t2_cp2_ParamLimits

0xdedf,	// (0x0003407f) list_single_heading_pane_t2_cp2

0xdc40,	// (0x00033de0) list_double_graphic_pane_g1_cp2_ParamLimits

0xdc40,	// (0x00033de0) list_double_graphic_pane_g1_cp2

0xde33,	// (0x00033fd3) list_double_graphic_pane_g2_cp2_ParamLimits

0xde33,	// (0x00033fd3) list_double_graphic_pane_g2_cp2

0xde42,	// (0x00033fe2) list_double_graphic_pane_g3_cp2

0xde4a,	// (0x00033fea) list_double_graphic_pane_t1_cp2_ParamLimits

0xde4a,	// (0x00033fea) list_double_graphic_pane_t1_cp2

0xde60,	// (0x00034000) list_double_graphic_pane_t2_cp2_ParamLimits

0xde60,	// (0x00034000) list_double_graphic_pane_t2_cp2

0xcaea,	// (0x00032c8a) list_double_number_pane_g1_cp2_ParamLimits

0xcaea,	// (0x00032c8a) list_double_number_pane_g1_cp2

0xcaf6,	// (0x00032c96) list_double_number_pane_g2_cp2

0xddf7,	// (0x00033f97) list_double_number_pane_t1_cp2_ParamLimits

0xddf7,	// (0x00033f97) list_double_number_pane_t1_cp2

0xde0b,	// (0x00033fab) list_double_number_pane_t2_cp2_ParamLimits

0xde0b,	// (0x00033fab) list_double_number_pane_t2_cp2

0xde21,	// (0x00033fc1) list_double_number_pane_t3_cp2_ParamLimits

0xde21,	// (0x00033fc1) list_double_number_pane_t3_cp2

0xdd6e,	// (0x00033f0e) list_single_graphic_pane_g1_cp2_ParamLimits

0xdd6e,	// (0x00033f0e) list_single_graphic_pane_g1_cp2

0xcb4e,	// (0x00032cee) list_single_graphic_pane_g2_cp2_ParamLimits

0xcb4e,	// (0x00032cee) list_single_graphic_pane_g2_cp2

0xcb5a,	// (0x00032cfa) list_single_graphic_pane_g3_cp2

0xdd44,	// (0x00033ee4) list_single_graphic_pane_t1_cp2_ParamLimits

0xdd44,	// (0x00033ee4) list_single_graphic_pane_t1_cp2

0xcb4e,	// (0x00032cee) list_single_number_pane_g1_cp2_ParamLimits

0xcb4e,	// (0x00032cee) list_single_number_pane_g1_cp2

0xcb5a,	// (0x00032cfa) list_single_number_pane_g2_cp2

0xdd44,	// (0x00033ee4) list_single_number_pane_t1_cp2_ParamLimits

0xdd44,	// (0x00033ee4) list_single_number_pane_t1_cp2

0xdd5a,	// (0x00033efa) list_single_number_pane_t2_cp2_ParamLimits

0xdd5a,	// (0x00033efa) list_single_number_pane_t2_cp2

0xc957,	// (0x00032af7) list_double2_pane_g1_cp2_ParamLimits

0xc957,	// (0x00032af7) list_double2_pane_g1_cp2

0xc968,	// (0x00032b08) list_double2_pane_g2_cp2

0xcac2,	// (0x00032c62) list_double2_pane_t1_cp2_ParamLimits

0xcac2,	// (0x00032c62) list_double2_pane_t1_cp2

0xcad8,	// (0x00032c78) list_double2_pane_t2_cp2_ParamLimits

0xcad8,	// (0x00032c78) list_double2_pane_t2_cp2

0xcaea,	// (0x00032c8a) list_double_pane_g1_cp2_ParamLimits

0xcaea,	// (0x00032c8a) list_double_pane_g1_cp2

0xcaf6,	// (0x00032c96) list_double_pane_g2_cp2

0xcafe,	// (0x00032c9e) list_double_pane_t1_cp2_ParamLimits

0xcafe,	// (0x00032c9e) list_double_pane_t1_cp2

0xcb14,	// (0x00032cb4) list_double_pane_t2_cp2_ParamLimits

0xcb14,	// (0x00032cb4) list_double_pane_t2_cp2

0xcb3e,	// (0x00032cde) list_single_pane_cp2_g3

0xcb4e,	// (0x00032cee) list_single_pane_g1_cp2_ParamLimits

0xcb4e,	// (0x00032cee) list_single_pane_g1_cp2

0xcb5a,	// (0x00032cfa) list_single_pane_g2_cp2

0xcb62,	// (0x00032d02) list_single_pane_t1_cp2_ParamLimits

0xcb62,	// (0x00032d02) list_single_pane_t1_cp2

0xcb7a,	// (0x00032d1a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xcb7a,	// (0x00032d1a) list_single_large_graphic_pane_g1_cp2

0xcb88,	// (0x00032d28) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xcb88,	// (0x00032d28) list_single_large_graphic_pane_g2_cp2

0xcb94,	// (0x00032d34) list_single_large_graphic_pane_g3_cp2

0xcb9c,	// (0x00032d3c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xcb9c,	// (0x00032d3c) list_single_large_graphic_pane_g4_cp1

0xcbb6,	// (0x00032d56) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xcbb6,	// (0x00032d56) list_single_large_graphic_pane_t1_cp2

0xdd0e,	// (0x00033eae) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xdd0e,	// (0x00033eae) list_single_graphic_heading_pane_g1_cp2

0xdcdb,	// (0x00033e7b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xdcdb,	// (0x00033e7b) list_single_graphic_heading_pane_g4_cp2

0xcb5a,	// (0x00032cfa) list_single_graphic_heading_pane_g5_cp2

0xdd1a,	// (0x00033eba) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xdd1a,	// (0x00033eba) list_single_graphic_heading_pane_t1_cp2

0xdd30,	// (0x00033ed0) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xdd30,	// (0x00033ed0) list_single_graphic_heading_pane_t2_cp2

0xdccf,	// (0x00033e6f) list_single_2graphic_pane_g1_cp2_ParamLimits

0xdccf,	// (0x00033e6f) list_single_2graphic_pane_g1_cp2

0xdcdb,	// (0x00033e7b) list_single_2graphic_pane_g2_cp2_ParamLimits

0xdcdb,	// (0x00033e7b) list_single_2graphic_pane_g2_cp2

0xcb5a,	// (0x00032cfa) list_single_2graphic_pane_g3_cp2

0xdcec,	// (0x00033e8c) list_single_2graphic_pane_g4_cp2_ParamLimits

0xdcec,	// (0x00033e8c) list_single_2graphic_pane_g4_cp2

0xdcf8,	// (0x00033e98) list_single_2graphic_pane_t1_cp2_ParamLimits

0xdcf8,	// (0x00033e98) list_single_2graphic_pane_t1_cp2

0xbb1c,	// (0x00031cbc) list_highlight_pane_g10_cp1

0xd8ab,	// (0x00033a4b) list_highlight_pane_g1_cp1

0xd8b3,	// (0x00033a53) list_highlight_pane_g2_cp1

0xd8bb,	// (0x00033a5b) list_highlight_pane_g3_cp1

0xd8c3,	// (0x00033a63) list_highlight_pane_g4_cp1

0xd8cb,	// (0x00033a6b) list_highlight_pane_g5_cp1

0xd8d3,	// (0x00033a73) list_highlight_pane_g6_cp1

0xd8db,	// (0x00033a7b) list_highlight_pane_g7_cp1

0xd8e3,	// (0x00033a83) list_highlight_pane_g8_cp1

0xd8eb,	// (0x00033a8b) list_highlight_pane_g9_cp1

0xa3d0,	// (0x00030570) form_field_slider_pane_t3

0xa3e0,	// (0x00030580) form_field_slider_pane_t4

0xd7df,	// (0x0003397f) slider_form_pane_ParamLimits

0xd7df,	// (0x0003397f) slider_form_pane

0xbb26,	// (0x00031cc6) control_abbreviations

0xbb26,	// (0x00031cc6) control_conventions

0xbb26,	// (0x00031cc6) control_definitions

0xbb26,	// (0x00031cc6) format_table_attribute

0xdf2b,	// (0x000340cb) bg_popup_preview_window_pane_g9

0xbb26,	// (0x00031cc6) format_table_data2

0xbb26,	// (0x00031cc6) format_table_data3

0xbb26,	// (0x00031cc6) format_table_data_example

0x0008,

0xbb26,	// (0x00031cc6) intro_purpose

0x013b,	// (0x000262db) bg_popup_preview_window_pane_g

0xbb26,	// (0x00031cc6) texts_category

0xbb26,	// (0x00031cc6) texts_graphics

0xcbcc,	// (0x00032d6c) text_digital

0xcbdb,	// (0x00032d7b) text_primary

0xcbea,	// (0x00032d8a) text_primary_small

0xcbf9,	// (0x00032d99) text_secondary

0xcc08,	// (0x00032da8) text_title

0xe3fa,	// (0x0003459a) bg_passive_tab_pane_g1_cp3_srt

0xc8c0,	// (0x00032a60) bg_passive_tab_pane_g2_cp3_srt

0xe403,	// (0x000345a3) bg_passive_tab_pane_g3_cp3_srt

0xbb74,	// (0x00031d14) bg_active_tab_pane_cp3_srt_ParamLimits

0xbb74,	// (0x00031d14) bg_active_tab_pane_cp3_srt

0xe40c,	// (0x000345ac) tabs_4_active_pane_srt_g1

0xa754,	// (0x000308f4) tabs_4_active_pane_srt_t1_ParamLimits

0xa754,	// (0x000308f4) tabs_4_active_pane_srt_t1

0xe3fa,	// (0x0003459a) bg_active_tab_pane_g1_cp3_copy1

0xc8c0,	// (0x00032a60) bg_active_tab_pane_g2_cp3_copy1

0xe403,	// (0x000345a3) bg_active_tab_pane_g3_cp3_copy1

0xbb82,	// (0x00031d22) tabs_2_long_active_pane_srt_ParamLimits

0xbb82,	// (0x00031d22) tabs_2_long_active_pane_srt

0xbb82,	// (0x00031d22) tabs_2_long_passive_pane_srt_ParamLimits

0xbb82,	// (0x00031d22) tabs_2_long_passive_pane_srt

0xc339,	// (0x000324d9) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc339,	// (0x000324d9) bg_passive_tab_pane_cp4_srt

0xe2f6,	// (0x00034496) bg_passive_tab_pane_g1_cp4_srt

0xc8c0,	// (0x00032a60) bg_passive_tab_pane_g2_cp4_srt

0xe2ff,	// (0x0003449f) bg_passive_tab_pane_g3_cp4_srt

0xbb82,	// (0x00031d22) bg_active_tab_pane_cp4_srt_ParamLimits

0xbb82,	// (0x00031d22) bg_active_tab_pane_cp4_srt

0xa545,	// (0x000306e5) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa545,	// (0x000306e5) tabs_2_long_active_pane_srt_t1

0xe2f6,	// (0x00034496) bg_active_tab_pane_g1_cp4_srt

0xc8c0,	// (0x00032a60) bg_active_tab_pane_g2_cp4_srt

0xe2ff,	// (0x0003449f) bg_active_tab_pane_g3_cp4_srt

0xbb74,	// (0x00031d14) tabs_3_long_active_pane_srt_ParamLimits

0xbb74,	// (0x00031d14) tabs_3_long_active_pane_srt

0xbb74,	// (0x00031d14) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xbb74,	// (0x00031d14) tabs_3_long_passive_pane_cp_srt

0xbb74,	// (0x00031d14) tabs_3_long_passive_pane_srt_ParamLimits

0xbb74,	// (0x00031d14) tabs_3_long_passive_pane_srt

0xc339,	// (0x000324d9) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc339,	// (0x000324d9) bg_passive_tab_pane_cp5_srt

0xc907,	// (0x00032aa7) bg_passive_tab_pane_g1_cp5_srt

0xc8c0,	// (0x00032a60) bg_passive_tab_pane_g2_cp5_srt

0xc910,	// (0x00032ab0) bg_passive_tab_pane_g3_cp5_srt

0xbb82,	// (0x00031d22) bg_active_tab_pane_cp5_srt_ParamLimits

0xbb82,	// (0x00031d22) bg_active_tab_pane_cp5_srt

0xa52f,	// (0x000306cf) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa52f,	// (0x000306cf) tabs_3_long_active_pane_srt_t1

0xc907,	// (0x00032aa7) bg_active_tab_pane_g1_cp5_srt

0xc8c0,	// (0x00032a60) bg_active_tab_pane_g2_cp5_srt

0xc910,	// (0x00032ab0) bg_active_tab_pane_g3_cp5_srt

0xe2e8,	// (0x00034488) navi_text_pane_srt_t1

0xe2e0,	// (0x00034480) navi_icon_pane_srt_g1

0xcd18,	// (0x00032eb8) midp_editing_number_pane_srt

0xcc17,	// (0x00032db7) midp_ticker_pane_srt

0xcd20,	// (0x00032ec0) midp_ticker_pane_srt_g1

0xcd28,	// (0x00032ec8) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x0003592a) midp_ticker_pane_srt_g

0xcd30,	// (0x00032ed0) midp_ticker_pane_srt_t1

0xe2d1,	// (0x00034471) midp_editing_number_pane_t1_copy1

0xc339,	// (0x000324d9) listscroll_midp_pane

0xc339,	// (0x000324d9) midp_form_pane

0xcc1f,	// (0x00032dbf) midp_info_popup_window_ParamLimits

0xcc1f,	// (0x00032dbf) midp_info_popup_window

0xc29a,	// (0x0003243a) bg_popup_sub_pane_cp50_ParamLimits

0xc29a,	// (0x0003243a) bg_popup_sub_pane_cp50

0xd4fc,	// (0x0003369c) listscroll_midp_info_pane_ParamLimits

0xd4fc,	// (0x0003369c) listscroll_midp_info_pane

0xd4e4,	// (0x00033684) listscroll_form_midp_pane_ParamLimits

0xd4e4,	// (0x00033684) listscroll_form_midp_pane

0xd4f0,	// (0x00033690) scroll_bar_cp050

0xa3c4,	// (0x00030564) list_midp_pane

0xecc8,	// (0x00034e68) signal_pane_g2_cp

0xd416,	// (0x000335b6) listscroll_midp_info_pane_t1_ParamLimits

0xd416,	// (0x000335b6) listscroll_midp_info_pane_t1

0xd42e,	// (0x000335ce) listscroll_midp_info_pane_t2_ParamLimits

0xd42e,	// (0x000335ce) listscroll_midp_info_pane_t2

0xd46c,	// (0x0003360c) listscroll_midp_info_pane_t3_ParamLimits

0xd46c,	// (0x0003360c) listscroll_midp_info_pane_t3

0xd4a6,	// (0x00033646) listscroll_midp_info_pane_t4_ParamLimits

0xd4a6,	// (0x00033646) listscroll_midp_info_pane_t4

0x0003,

0x0076,	// (0x00026216) listscroll_midp_info_pane_t_ParamLimits

0x0076,	// (0x00026216) listscroll_midp_info_pane_t

0xc301,	// (0x000324a1) scroll_pane_cp21

0xd3ba,	// (0x0003355a) form_midp_field_choice_group_pane

0xd3c3,	// (0x00033563) form_midp_field_text_pane

0xd3fc,	// (0x0003359c) form_midp_field_time_pane

0xd404,	// (0x000335a4) form_midp_gauge_slider_pane

0xd40d,	// (0x000335ad) form_midp_gauge_wait_pane

0xbb26,	// (0x00031cc6) form_midp_image_pane

0x953a,	// (0x0002f6da) list_single_midp_pane_ParamLimits

0x953a,	// (0x0002f6da) list_single_midp_pane

0xa3a0,	// (0x00030540) form_midp_field_text_pane_t1

0xd261,	// (0x00033401) input_focus_pane_cp050

0xd3a9,	// (0x00033549) list_midp_form_text_pane

0xd378,	// (0x00033518) form_midp_field_choice_group_pane_t1

0xd386,	// (0x00033526) input_focus_pane_cp051

0xd39a,	// (0x0003353a) list_midp_choice_pane

0xbb26,	// (0x00031cc6) status_idle_pane

0xd35c,	// (0x000334fc) form_midp_field_time_pane_t1

0xbb1c,	// (0x00031cbc) wait_anim_pane_g2_copy1

0xd36a,	// (0x0003350a) form_midp_field_time_pane_t2

0x0001,

0xcc8a,	// (0x00032e2a) aid_navinavi_width_2_pane

0x0071,	// (0x00026211) form_midp_field_time_pane_t

0xbb26,	// (0x00031cc6) input_focus_pane_cp052

0xbb26,	// (0x00031cc6) bg_input_focus_pane_cp040

0xd338,	// (0x000334d8) form_midp_gauge_slider_pane_t1

0xd346,	// (0x000334e6) form_midp_gauge_slider_pane_t2

0xa380,	// (0x00030520) form_midp_gauge_slider_pane_t3

0xa390,	// (0x00030530) form_midp_gauge_slider_pane_t4

0x0003,

0xf80b,	// (0x000359ab) form_midp_gauge_slider_pane_t

0xd354,	// (0x000334f4) form_midp_slider_pane

0xbb82,	// (0x00031d22) bg_input_focus_pane_cp041_ParamLimits

0xbb82,	// (0x00031d22) bg_input_focus_pane_cp041

0xd305,	// (0x000334a5) form_midp_gauge_wait_pane_t1_ParamLimits

0xd305,	// (0x000334a5) form_midp_gauge_wait_pane_t1

0xd317,	// (0x000334b7) form_midp_gauge_wait_pane_t2_ParamLimits

0xd317,	// (0x000334b7) form_midp_gauge_wait_pane_t2

0x0001,

0x0063,	// (0x00026203) form_midp_gauge_wait_pane_t_ParamLimits

0x0063,	// (0x00026203) form_midp_gauge_wait_pane_t

0xd329,	// (0x000334c9) form_midp_wait_pane_ParamLimits

0xd329,	// (0x000334c9) form_midp_wait_pane

0xd2cf,	// (0x0003346f) form_midp_image_pane_g1

0xd2d8,	// (0x00033478) form_midp_image_pane_t1

0xd2e7,	// (0x00033487) form_midp_image_pane_t2

0xd2f6,	// (0x00033496) form_midp_image_pane_t3

0x0002,

0x005c,	// (0x000261fc) form_midp_image_pane_t

0xd2c6,	// (0x00033466) list_single_midp_pane_g1

0x6a25,	// (0x0002cbc5) list_single_midp_pane_t1

0xa369,	// (0x00030509) list_midp_form_item_pane_ParamLimits

0xa369,	// (0x00030509) list_midp_form_item_pane

0xcc32,	// (0x00032dd2) list_midp_form_item_pane_t1

0xcc41,	// (0x00032de1) midp_ticker_pane_g1

0xcc4d,	// (0x00032ded) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x00035910) midp_ticker_pane_g

0xcc59,	// (0x00032df9) midp_ticker_pane_t1

0xe38d,	// (0x0003452d) midp_editing_number_pane_t1

0xe35f,	// (0x000344ff) midp_editing_number_pane

0xe37a,	// (0x0003451a) midp_ticker_pane

0xe2c1,	// (0x00034461) ai_message_heading_pane

0xbb26,	// (0x00031cc6) bg_popup_window_pane_cp14

0xe2c9,	// (0x00034469) listscroll_ai_message_pane

0xe24b,	// (0x000343eb) ai_message_heading_pane_g1_ParamLimits

0xe24b,	// (0x000343eb) ai_message_heading_pane_g1

0xe257,	// (0x000343f7) ai_message_heading_pane_g2_ParamLimits

0xe257,	// (0x000343f7) ai_message_heading_pane_g2

0xe263,	// (0x00034403) ai_message_heading_pane_g3_ParamLimits

0xe263,	// (0x00034403) ai_message_heading_pane_g3

0xe26f,	// (0x0003440f) ai_message_heading_pane_g4_ParamLimits

0xe26f,	// (0x0003440f) ai_message_heading_pane_g4

0x0003,

0x019d,	// (0x0002633d) ai_message_heading_pane_g_ParamLimits

0x019d,	// (0x0002633d) ai_message_heading_pane_g

0xe27b,	// (0x0003441b) ai_message_heading_pane_t1_ParamLimits

0xe27b,	// (0x0003441b) ai_message_heading_pane_t1

0xe295,	// (0x00034435) ai_message_heading_pane_t2_ParamLimits

0xe295,	// (0x00034435) ai_message_heading_pane_t2

0x0001,

0x01a6,	// (0x00026346) ai_message_heading_pane_t_ParamLimits

0x01a6,	// (0x00026346) ai_message_heading_pane_t

0xe2a7,	// (0x00034447) bg_popup_heading_pane_cp1_ParamLimits

0xe2a7,	// (0x00034447) bg_popup_heading_pane_cp1

0xe239,	// (0x000343d9) list_ai_message_pane_ParamLimits

0xe239,	// (0x000343d9) list_ai_message_pane

0xc301,	// (0x000324a1) scroll_pane_cp10

0xe1d5,	// (0x00034375) list_ai_message_pane_g1

0xe1dd,	// (0x0003437d) list_ai_message_pane_g2

0x0001,

0x017a,	// (0x0002631a) list_ai_message_pane_g

0xe1e5,	// (0x00034385) list_ai_message_pane_t1_ParamLimits

0xe1e5,	// (0x00034385) list_ai_message_pane_t1

0xe1fa,	// (0x0003439a) list_ai_message_pane_t2_ParamLimits

0xe1fa,	// (0x0003439a) list_ai_message_pane_t2

0xe20f,	// (0x000343af) list_ai_message_pane_t3_ParamLimits

0xe20f,	// (0x000343af) list_ai_message_pane_t3

0xe224,	// (0x000343c4) list_ai_message_pane_t4_ParamLimits

0xe224,	// (0x000343c4) list_ai_message_pane_t4

0x0003,

0x017f,	// (0x0002631f) list_ai_message_pane_t_ParamLimits

0x017f,	// (0x0002631f) list_ai_message_pane_t

0xa50a,	// (0x000306aa) cell_ai_soft_ind_pane_ParamLimits

0xa50a,	// (0x000306aa) cell_ai_soft_ind_pane

0xcc6b,	// (0x00032e0b) cell_ai_soft_ind_pane_g1_ParamLimits

0xcc6b,	// (0x00032e0b) cell_ai_soft_ind_pane_g1

0xbb26,	// (0x00031cc6) grid_highlight_cp1

0xcc78,	// (0x00032e18) text_secondary_cp56_ParamLimits

0xcc78,	// (0x00032e18) text_secondary_cp56

0xe1aa,	// (0x0003434a) example_general_pane_ParamLimits

0xe1aa,	// (0x0003434a) example_general_pane

0xe1b6,	// (0x00034356) example_parent_pane_g1_ParamLimits

0xe1b6,	// (0x00034356) example_parent_pane_g1

0xe1c2,	// (0x00034362) example_parent_pane_t1_ParamLimits

0xe1c2,	// (0x00034362) example_parent_pane_t1

0x9c32,	// (0x0002fdd2) popup_preview_text_window_ParamLimits

0x9c32,	// (0x0002fdd2) popup_preview_text_window

0xcb46,	// (0x00032ce6) list_single_pane_cp2_g4

0xbdbc,	// (0x00031f5c) bg_popup_preview_window_pane_ParamLimits

0xbdbc,	// (0x00031f5c) bg_popup_preview_window_pane

0xdf33,	// (0x000340d3) popup_preview_text_window_t1_ParamLimits

0xdf33,	// (0x000340d3) popup_preview_text_window_t1

0xdf51,	// (0x000340f1) popup_preview_text_window_t2_ParamLimits

0xdf51,	// (0x000340f1) popup_preview_text_window_t2

0xdf9a,	// (0x0003413a) popup_preview_text_window_t3_ParamLimits

0xdf9a,	// (0x0003413a) popup_preview_text_window_t3

0xdfdf,	// (0x0003417f) popup_preview_text_window_t4_ParamLimits

0xdfdf,	// (0x0003417f) popup_preview_text_window_t4

0x0004,

0x014e,	// (0x000262ee) popup_preview_text_window_t_ParamLimits

0x014e,	// (0x000262ee) popup_preview_text_window_t

0xe05d,	// (0x000341fd) scroll_pane_cp11

0xd171,	// (0x00033311) bg_popup_preview_window_pane_g1

0xdef3,	// (0x00034093) bg_popup_preview_window_pane_g2

0xdefb,	// (0x0003409b) bg_popup_preview_window_pane_g3

0xdf03,	// (0x000340a3) bg_popup_preview_window_pane_g4

0xdf0b,	// (0x000340ab) bg_popup_preview_window_pane_g5

0xdf13,	// (0x000340b3) bg_popup_preview_window_pane_g6

0xdf1b,	// (0x000340bb) bg_popup_preview_window_pane_g7

0xdf23,	// (0x000340c3) bg_popup_preview_window_pane_g8

0x07d6,	// (0x00026976) aid_popup_width_pane

0x9bae,	// (0x0002fd4e) popup_midp_note_alarm_window_ParamLimits

0x9bae,	// (0x0002fd4e) popup_midp_note_alarm_window

0xc1d6,	// (0x00032376) data_form_pane_ParamLimits

0x926d,	// (0x0002f40d) form_field_data_pane_g1

0x9277,	// (0x0002f417) form_field_data_pane_t1_ParamLimits

0xc1e2,	// (0x00032382) input_focus_pane_ParamLimits

0xc1f0,	// (0x00032390) data_form_wide_pane_ParamLimits

0x67b0,	// (0x0002c950) form_field_data_wide_pane_g1

0x67bc,	// (0x0002c95c) form_field_data_wide_pane_t1_ParamLimits

0xbf5d,	// (0x000320fd) input_focus_pane_cp6_ParamLimits

0x939e,	// (0x0002f53e) input_popup_find_pane_g1_ParamLimits

0x939e,	// (0x0002f53e) input_popup_find_pane_g1

0x10ba,	// (0x0002725a) aid_navi_side_left_pane

0x10cf,	// (0x0002726f) aid_navi_side_right_pane

0xd988,	// (0x00033b28) bg_popup_window_pane_cp30_ParamLimits

0xd988,	// (0x00033b28) bg_popup_window_pane_cp30

0xda14,	// (0x00033bb4) popup_midp_note_alarm_window_g1_ParamLimits

0xda14,	// (0x00033bb4) popup_midp_note_alarm_window_g1

0xda44,	// (0x00033be4) popup_midp_note_alarm_window_t1_ParamLimits

0xda44,	// (0x00033be4) popup_midp_note_alarm_window_t1

0xdae5,	// (0x00033c85) popup_midp_note_alarm_window_t2_ParamLimits

0xdae5,	// (0x00033c85) popup_midp_note_alarm_window_t2

0xdb93,	// (0x00033d33) popup_midp_note_alarm_window_t3_ParamLimits

0xdb93,	// (0x00033d33) popup_midp_note_alarm_window_t3

0xdbbb,	// (0x00033d5b) popup_midp_note_alarm_window_t4_ParamLimits

0xdbbb,	// (0x00033d5b) popup_midp_note_alarm_window_t4

0xdbdb,	// (0x00033d7b) popup_midp_note_alarm_window_t5_ParamLimits

0xdbdb,	// (0x00033d7b) popup_midp_note_alarm_window_t5

0x000a,

0xf827,	// (0x000359c7) popup_midp_note_alarm_window_t_ParamLimits

0xf827,	// (0x000359c7) popup_midp_note_alarm_window_t

0xdc9f,	// (0x00033e3f) wait_bar_pane_cp1_ParamLimits

0xdc9f,	// (0x00033e3f) wait_bar_pane_cp1

0xbb26,	// (0x00031cc6) wait_anim_pane_copy1

0xbb26,	// (0x00031cc6) wait_border_pane_copy1

0xd6a0,	// (0x00033840) wait_border_pane_g1_copy1

0x67d6,	// (0x0002c976) form_field_popup_pane_g1

0x9291,	// (0x0002f431) form_field_popup_pane_t1_ParamLimits

0xc1e2,	// (0x00032382) input_focus_pane_cp7_ParamLimits

0xc21c,	// (0x000323bc) list_form_pane_ParamLimits

0x67f8,	// (0x0002c998) form_field_popup_wide_pane_g1

0x6800,	// (0x0002c9a0) form_field_popup_wide_pane_t1_ParamLimits

0xc1e2,	// (0x00032382) input_focus_pane_cp8_ParamLimits

0xc228,	// (0x000323c8) list_form_wide_pane_ParamLimits

0xe433,	// (0x000345d3) aid_size_cell_graphic_pane

0x9310,	// (0x0002f4b0) data_form_pane_t1_ParamLimits

0x9556,	// (0x0002f6f6) data_form_wide_pane_t1_ParamLimits

0x9fee,	// (0x0003018e) bg_status_flat_pane

0x8d45,	// (0x0002eee5) title_pane_t1_ParamLimits

0xbb3c,	// (0x00031cdc) title_pane_t2_ParamLimits

0xbb62,	// (0x00031d02) title_pane_t3_ParamLimits

0xf56f,	// (0x0003570f) title_pane_t_ParamLimits

0xc698,	// (0x00032838) level_1_signal_ParamLimits

0xc6a5,	// (0x00032845) level_2_signal_ParamLimits

0xc6b2,	// (0x00032852) level_3_signal_ParamLimits

0xc6bf,	// (0x0003285f) level_4_signal_ParamLimits

0xc6cc,	// (0x0003286c) level_5_signal_ParamLimits

0xc6d9,	// (0x00032879) level_6_signal_ParamLimits

0xc6e6,	// (0x00032886) level_7_signal_ParamLimits

0xc698,	// (0x00032838) level_1_battery_ParamLimits

0xc6a5,	// (0x00032845) level_2_battery_ParamLimits

0xc6b2,	// (0x00032852) level_3_battery_ParamLimits

0xc6bf,	// (0x0003285f) level_4_battery_ParamLimits

0xc6cc,	// (0x0003286c) level_5_battery_ParamLimits

0xc6d9,	// (0x00032879) level_6_battery_ParamLimits

0xc6e6,	// (0x00032886) level_7_battery_ParamLimits

0xd8ab,	// (0x00033a4b) bg_status_flat_pane_g1

0xd8b3,	// (0x00033a53) bg_status_flat_pane_g2

0xd8bb,	// (0x00033a5b) bg_status_flat_pane_g3

0xd8c3,	// (0x00033a63) bg_status_flat_pane_g4

0xd8cb,	// (0x00033a6b) bg_status_flat_pane_g5

0xd8d3,	// (0x00033a73) bg_status_flat_pane_g6

0xd8db,	// (0x00033a7b) bg_status_flat_pane_g7

0x8dd9,	// (0x0002ef79) tabs_3_active_pane_t1_ParamLimits

0x8dd9,	// (0x0002ef79) tabs_3_passive_pane_t1_ParamLimits

0x8df3,	// (0x0002ef93) tabs_4_active_pane_t1_ParamLimits

0x8df3,	// (0x0002ef93) tabs_4_1_passive_pane_t1_ParamLimits

0x93b4,	// (0x0002f554) tabs_2_active_pane_t1_ParamLimits

0x93b4,	// (0x0002f554) tabs_2_passive_pane_t1_ParamLimits

0xbb82,	// (0x00031d22) bg_active_tab_pane_cp4_ParamLimits

0x93c6,	// (0x0002f566) tabs_2_long_active_pane_t1_ParamLimits

0xc339,	// (0x000324d9) bg_passive_tab_pane_cp4_ParamLimits

0x201e,	// (0x000281be) list_single_midp_graphic_pane_t1_ParamLimits

0xbb82,	// (0x00031d22) bg_active_tab_pane_cp5_ParamLimits

0x93d9,	// (0x0002f579) tabs_3_long_active_pane_t1_ParamLimits

0xc339,	// (0x000324d9) bg_passive_tab_pane_cp5_ParamLimits

0x201e,	// (0x000281be) list_single_midp_graphic_pane_t1

0x9fee,	// (0x0003018e) bg_status_flat_pane_ParamLimits

0xd036,	// (0x000331d6) indicator_pane_cp2_ParamLimits

0xd036,	// (0x000331d6) indicator_pane_cp2

0xa166,	// (0x00030306) navi_pane_srt_ParamLimits

0xa166,	// (0x00030306) navi_pane_srt

0xd06c,	// (0x0003320c) popup_clock_digital_analogue_window_cp1

0xbbc6,	// (0x00031d66) indicator_pane_t1

0xcc17,	// (0x00032db7) copy_highlight_pane

0xcc17,	// (0x00032db7) cursor_graphics_pane

0xcc17,	// (0x00032db7) graphic_within_text_pane

0xcc17,	// (0x00032db7) link_highlight_pane

0xe020,	// (0x000341c0) popup_preview_text_window_t5_ParamLimits

0xe020,	// (0x000341c0) popup_preview_text_window_t5

0xcc92,	// (0x00032e32) cursor_digital_pane

0xcc92,	// (0x00032e32) cursor_primary_pane

0xcca3,	// (0x00032e43) cursor_primary_small_pane

0xccab,	// (0x00032e4b) cursor_secondary_pane

0xccb3,	// (0x00032e53) cursor_title_pane

0xcc92,	// (0x00032e32) link_highlight_digital_pane

0xcc9a,	// (0x00032e3a) link_highlight_primary_pane

0xcca3,	// (0x00032e43) link_highlight_primary_small_pane

0xccab,	// (0x00032e4b) link_highlight_secondary_pane

0xccb3,	// (0x00032e53) link_highlight_title_pane

0xcc92,	// (0x00032e32) copy_highlight_digital_pane

0xcc92,	// (0x00032e32) copy_highlight_primary_pane

0xcca3,	// (0x00032e43) copy_highlight_primary_small_pane

0xccab,	// (0x00032e4b) copy_highlight_secondary_pane

0xccb3,	// (0x00032e53) copy_highlight_title_pane

0xccab,	// (0x00032e4b) graphic_text_digital_pane

0xd92b,	// (0x00033acb) graphic_text_primary_pane

0xd934,	// (0x00033ad4) graphic_text_primary_small_pane

0xcca3,	// (0x00032e43) graphic_text_secondary_pane

0xcc92,	// (0x00032e32) graphic_text_title_pane

0x983b,	// (0x0002f9db) cursor_primary_pane_g1

0xd91d,	// (0x00033abd) cursor_text_primary_t1

0xa404,	// (0x000305a4) cursor_primary_small_pane_g1

0xd90f,	// (0x00033aaf) cursor_text_primary_small_t1

0xa3fa,	// (0x0003059a) cursor_primary_small_pane_g1_copy1

0xd901,	// (0x00033aa1) cursor_text_primary_small_t1_copy1

0xd8f3,	// (0x00033a93) cursor_text_title_t1

0xa3f0,	// (0x00030590) cursor_title_pane_g1

0x983b,	// (0x0002f9db) cursor_digital_pane_g1

0xccbb,	// (0x00032e5b) cursor_text_digital_t1

0xd894,	// (0x00033a34) link_highlight_primary_pane_g1

0xd89c,	// (0x00033a3c) link_highlight_primary_pane_t1

0xccc9,	// (0x00032e69) link_highlight_primary_small_pane_g1

0xccd1,	// (0x00032e71) link_highlight_primary_small_pane_t1

0xccc9,	// (0x00032e69) link_highlight_secondary_pane_g1

0xcce0,	// (0x00032e80) link_highlight_secondary_pane_t1

0xd808,	// (0x000339a8) link_highlight_title_pane_g1

0xd810,	// (0x000339b0) link_highlight_title_pane_t1

0xd7f1,	// (0x00033991) link_highlight_digital_pane_g1

0xd7f9,	// (0x00033999) link_highlight_digital_pane_t1

0xd6e5,	// (0x00033885) copy_highlight_primary_pane_g1

0xd6ed,	// (0x0003388d) copy_highlight_primary_pane_t1

0xd6bf,	// (0x0003385f) copy_highlight_primary_small_pane_g1

0xd6d6,	// (0x00033876) copy_highlight_primary_small_pane_t1

0xccef,	// (0x00032e8f) copy_highlight_secondary_pane_g1

0xccf7,	// (0x00032e97) copy_highlight_secondary_pane_t1

0xd6bf,	// (0x0003385f) copy_highlight_title_pane_g1

0xd6c7,	// (0x00033867) copy_highlight_title_pane_t1

0xd6e5,	// (0x00033885) copy_highlight_digital_pane_g1

0xe5bd,	// (0x0003475d) copy_highlight_digital_pane_t1

0xe511,	// (0x000346b1) graphic_text_primary_pane_g1

0xe5a1,	// (0x00034741) graphic_text_primary_pane_t1

0xe5af,	// (0x0003474f) graphic_text_primary_pane_t2

0x0001,

0x021a,	// (0x000263ba) graphic_text_primary_pane_t

0xe57d,	// (0x0003471d) graphic_text_primary_small_pane_g1

0xe585,	// (0x00034725) graphic_text_primary_small_pane_t1

0xe593,	// (0x00034733) graphic_text_primary_small_pane_t2

0x0001,

0x0215,	// (0x000263b5) graphic_text_primary_small_pane_t

0xe559,	// (0x000346f9) graphic_text_secondary_pane_g1

0xe561,	// (0x00034701) graphic_text_secondary_pane_t1

0xe56f,	// (0x0003470f) graphic_text_secondary_pane_t2

0x0001,

0x0210,	// (0x000263b0) graphic_text_secondary_pane_t

0xe535,	// (0x000346d5) graphic_text_title_pane_g1

0xe53d,	// (0x000346dd) graphic_text_title_pane_t1

0xe54b,	// (0x000346eb) graphic_text_title_pane_t2

0x0001,

0x020b,	// (0x000263ab) graphic_text_title_pane_t

0xe511,	// (0x000346b1) graphic_text_digital_pane_g1

0xe519,	// (0x000346b9) graphic_text_digital_pane_t1

0xe527,	// (0x000346c7) graphic_text_digital_pane_t2

0x0001,

0x0206,	// (0x000263a6) graphic_text_digital_pane_t

0xbb82,	// (0x00031d22) navi_icon_pane_srt_ParamLimits

0xbb82,	// (0x00031d22) navi_icon_pane_srt

0xbb26,	// (0x00031cc6) navi_midp_pane_srt

0xbb26,	// (0x00031cc6) navi_navi_pane_srt

0xbb82,	// (0x00031d22) navi_text_pane_srt_ParamLimits

0xbb82,	// (0x00031d22) navi_text_pane_srt

0xe4dc,	// (0x0003467c) navi_navi_icon_text_pane_srt

0xe4e4,	// (0x00034684) navi_navi_pane_srt_g1_ParamLimits

0xe4e4,	// (0x00034684) navi_navi_pane_srt_g1

0xe4f6,	// (0x00034696) navi_navi_pane_srt_g2_ParamLimits

0xe4f6,	// (0x00034696) navi_navi_pane_srt_g2

0x0001,

0x0201,	// (0x000263a1) navi_navi_pane_srt_g_ParamLimits

0x0201,	// (0x000263a1) navi_navi_pane_srt_g

0xe508,	// (0x000346a8) navi_navi_tabs_pane_srt

0xe4dc,	// (0x0003467c) navi_navi_text_pane_srt

0xe4dc,	// (0x0003467c) navi_navi_volume_pane_srt

0xe4cd,	// (0x0003466d) navi_navi_text_pane_srt_t1

0x286b,	// (0x00028a0b) navi_navi_volume_pane_srt_g1

0x2873,	// (0x00028a13) volume_small_pane_srt_ParamLimits

0x2873,	// (0x00028a13) volume_small_pane_srt

0x15da,	// (0x0002777a) volume_small_pane_srt_g1_ParamLimits

0x15da,	// (0x0002777a) volume_small_pane_srt_g1

0x15ea,	// (0x0002778a) volume_small_pane_srt_g2_ParamLimits

0x15ea,	// (0x0002778a) volume_small_pane_srt_g2

0x15fb,	// (0x0002779b) volume_small_pane_srt_g3_ParamLimits

0x15fb,	// (0x0002779b) volume_small_pane_srt_g3

0x160c,	// (0x000277ac) volume_small_pane_srt_g4_ParamLimits

0x160c,	// (0x000277ac) volume_small_pane_srt_g4

0x161d,	// (0x000277bd) volume_small_pane_srt_g5_ParamLimits

0x161d,	// (0x000277bd) volume_small_pane_srt_g5

0x162e,	// (0x000277ce) volume_small_pane_srt_g6_ParamLimits

0x162e,	// (0x000277ce) volume_small_pane_srt_g6

0x163f,	// (0x000277df) volume_small_pane_srt_g7_ParamLimits

0x163f,	// (0x000277df) volume_small_pane_srt_g7

0x1650,	// (0x000277f0) volume_small_pane_srt_g8_ParamLimits

0x1650,	// (0x000277f0) volume_small_pane_srt_g8

0x1661,	// (0x00027801) volume_small_pane_srt_g9_ParamLimits

0x1661,	// (0x00027801) volume_small_pane_srt_g9

0x1672,	// (0x00027812) volume_small_pane_srt_g10_ParamLimits

0x1672,	// (0x00027812) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x00035915) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x00035915) volume_small_pane_srt_g

0xbe65,	// (0x00032005) query_popup_data_pane_cp2

0xe4b3,	// (0x00034653) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xe4b3,	// (0x00034653) navi_navi_icon_text_pane_srt_t1

0xd92b,	// (0x00033acb) navi_tabs_2_long_pane_srt

0xd92b,	// (0x00033acb) navi_tabs_2_pane_srt

0xd92b,	// (0x00033acb) navi_tabs_3_long_pane_srt

0xd92b,	// (0x00033acb) navi_tabs_3_pane_srt

0xd92b,	// (0x00033acb) navi_tabs_4_pane_srt

0x284b,	// (0x000289eb) tabs_2_active_pane_srt_ParamLimits

0x284b,	// (0x000289eb) tabs_2_active_pane_srt

0x285b,	// (0x000289fb) tabs_2_passive_pane_srt_ParamLimits

0x285b,	// (0x000289fb) tabs_2_passive_pane_srt

0xd261,	// (0x00033401) bg_passive_tab_pane_cp1_srt_ParamLimits

0xd261,	// (0x00033401) bg_passive_tab_pane_cp1_srt

0xe491,	// (0x00034631) bg_passive_tab_pane_g1_cp1_srt

0xc8c0,	// (0x00032a60) bg_passive_tab_pane_g2_cp1_srt

0xe49a,	// (0x0003463a) bg_passive_tab_pane_g3_cp1_srt

0xbb74,	// (0x00031d14) bg_active_tab_pane_cp1_srt_ParamLimits

0xbb74,	// (0x00031d14) bg_active_tab_pane_cp1_srt

0xe4a3,	// (0x00034643) tabs_2_active_pane_srt_g1

0xa7d1,	// (0x00030971) tabs_2_active_pane_srt_t1_ParamLimits

0xa7d1,	// (0x00030971) tabs_2_active_pane_srt_t1

0xe491,	// (0x00034631) bg_active_tab_pane_g1_cp1_srt

0xc8c0,	// (0x00032a60) bg_active_tab_pane_g2_cp1_srt

0xe49a,	// (0x0003463a) bg_active_tab_pane_g3_cp1_srt

0x2806,	// (0x000289a6) tabs_3_active_pane_srt_ParamLimits

0x2806,	// (0x000289a6) tabs_3_active_pane_srt

0x2817,	// (0x000289b7) tabs_3_passive_pane_cp_srt_ParamLimits

0x2817,	// (0x000289b7) tabs_3_passive_pane_cp_srt

0x2828,	// (0x000289c8) tabs_3_passive_pane_srt_ParamLimits

0x2828,	// (0x000289c8) tabs_3_passive_pane_srt

0xd261,	// (0x00033401) bg_passive_tab_pane_cp2_srt_ParamLimits

0xd261,	// (0x00033401) bg_passive_tab_pane_cp2_srt

0xcd06,	// (0x00032ea6) bg_passive_tab_pane_g1_cp2_srt

0xc8c0,	// (0x00032a60) bg_passive_tab_pane_g2_cp2_srt

0xcd0f,	// (0x00032eaf) bg_passive_tab_pane_g3_cp2_srt

0xbb74,	// (0x00031d14) bg_active_tab_pane_cp2_srt_ParamLimits

0xbb74,	// (0x00031d14) bg_active_tab_pane_cp2_srt

0xe489,	// (0x00034629) tabs_3_active_pane_srt_g1

0xa7bb,	// (0x0003095b) tabs_3_active_pane_srt_t1_ParamLimits

0xa7bb,	// (0x0003095b) tabs_3_active_pane_srt_t1

0xcd06,	// (0x00032ea6) bg_active_tab_pane_g1_cp2_srt

0xc8c0,	// (0x00032a60) bg_active_tab_pane_g2_cp2_srt

0xcd0f,	// (0x00032eaf) bg_active_tab_pane_g3_cp2_srt

0x27ac,	// (0x0002894c) tabs_4_active_pane_srt_ParamLimits

0x27ac,	// (0x0002894c) tabs_4_active_pane_srt

0x27be,	// (0x0002895e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x27be,	// (0x0002895e) tabs_4_passive_pane_cp2_srt

0xce33,	// (0x00032fd3) aid_size_cell_toolbar

0xda02,	// (0x00033ba2) main_idle_act_pane_ParamLimits

0xcefd,	// (0x0003309d) popup_large_graphic_colour_window_ParamLimits

0x9eb2,	// (0x00030052) popup_toolbar_window_ParamLimits

0x9eb2,	// (0x00030052) popup_toolbar_window

0xe39c,	// (0x0003453c) list_single_graphic_2heading_pane_ParamLimits

0xe39c,	// (0x0003453c) list_single_graphic_2heading_pane

0xc4e3,	// (0x00032683) aid_size_cell_apps_grid_lsc_pane

0xc4f5,	// (0x00032695) aid_size_cell_apps_grid_prt_pane

0xc339,	// (0x000324d9) bg_wml_button_pane_cp1_ParamLimits

0xc339,	// (0x000324d9) bg_wml_button_pane_cp1

0xa3a0,	// (0x00030540) form_midp_field_text_pane_t1_ParamLimits

0xd261,	// (0x00033401) input_focus_pane_cp050_ParamLimits

0xd3a9,	// (0x00033549) list_midp_form_text_pane_ParamLimits

0xd386,	// (0x00033526) input_focus_pane_cp051_ParamLimits

0xd39a,	// (0x0003353a) list_midp_choice_pane_ParamLimits

0xa331,	// (0x000304d1) list_single_2graphic_pane_cp3_ParamLimits

0xa331,	// (0x000304d1) list_single_2graphic_pane_cp3

0xa347,	// (0x000304e7) list_single_midp_graphic_pane_ParamLimits

0xa347,	// (0x000304e7) list_single_midp_graphic_pane

0x0744,	// (0x000268e4) list_single_graphic_2heading_pane_g1_ParamLimits

0x0744,	// (0x000268e4) list_single_graphic_2heading_pane_g1

0x0750,	// (0x000268f0) list_single_graphic_2heading_pane_g4_ParamLimits

0x0750,	// (0x000268f0) list_single_graphic_2heading_pane_g4

0x075c,	// (0x000268fc) list_single_graphic_2heading_pane_g5_ParamLimits

0x075c,	// (0x000268fc) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x00035968) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x00035968) list_single_graphic_2heading_pane_g

0x0768,	// (0x00026908) list_single_graphic_2heading_pane_t1_ParamLimits

0x0768,	// (0x00026908) list_single_graphic_2heading_pane_t1

0x077c,	// (0x0002691c) list_single_graphic_2heading_pane_t2_ParamLimits

0x077c,	// (0x0002691c) list_single_graphic_2heading_pane_t2

0x0796,	// (0x00026936) list_single_graphic_2heading_pane_t3_ParamLimits

0x0796,	// (0x00026936) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x0003596f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x0003596f) list_single_graphic_2heading_pane_t

0xd0af,	// (0x0003324f) bg_popup_sub_pane_cp2

0xd0d9,	// (0x00033279) grid_toobar_pane

0x1f8f,	// (0x0002812f) cell_toolbar_pane_ParamLimits

0x1f8f,	// (0x0002812f) cell_toolbar_pane

0xd115,	// (0x000332b5) cell_toolbar_pane_g1_ParamLimits

0xd115,	// (0x000332b5) cell_toolbar_pane_g1

0xd129,	// (0x000332c9) cell_toolbar_pane_g2_ParamLimits

0xd129,	// (0x000332c9) cell_toolbar_pane_g2

0x0001,

0x001d,	// (0x000261bd) cell_toolbar_pane_g_ParamLimits

0x001d,	// (0x000261bd) cell_toolbar_pane_g

0xd14b,	// (0x000332eb) grid_highlight_pane_cp2_ParamLimits

0xd14b,	// (0x000332eb) grid_highlight_pane_cp2

0xd165,	// (0x00033305) toolbar_button_pane

0xd171,	// (0x00033311) toolbar_button_pane_g1

0xd179,	// (0x00033319) toolbar_button_pane_g2

0xd181,	// (0x00033321) toolbar_button_pane_g3

0xd189,	// (0x00033329) toolbar_button_pane_g4

0xd191,	// (0x00033331) toolbar_button_pane_g5

0xd199,	// (0x00033339) toolbar_button_pane_g6

0xd1a1,	// (0x00033341) toolbar_button_pane_g7

0xd1a9,	// (0x00033349) toolbar_button_pane_g8

0xd1b1,	// (0x00033351) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x0003597d) toolbar_button_pane_g

0x1fc7,	// (0x00028167) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1fc7,	// (0x00028167) list_single_2graphic_pane_g1_cp3

0x8692,	// (0x0002e832) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8692,	// (0x0002e832) list_single_2graphic_pane_g2_cp3

0x1fe4,	// (0x00028184) list_single_2graphic_pane_g3_cp3

0x1fec,	// (0x0002818c) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1fec,	// (0x0002818c) list_single_2graphic_pane_g4_cp3

0x1ff8,	// (0x00028198) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1ff8,	// (0x00028198) list_single_2graphic_pane_t1_cp3

0x2012,	// (0x000281b2) list_single_midp_graphic_pane_g2_ParamLimits

0x2012,	// (0x000281b2) list_single_midp_graphic_pane_g2

0xce3b,	// (0x00032fdb) aid_zoom_text_primary

0x69b9,	// (0x0002cb59) aid_zoom_text_secondary

0xcdc3,	// (0x00032f63) status_small_pane_g7_ParamLimits

0xcdc3,	// (0x00032f63) status_small_pane_g7

0xcde6,	// (0x00032f86) status_small_pane_t1_ParamLimits

0x8d21,	// (0x0002eec1) title_pane_g2

0x0003,

0xf566,	// (0x00035706) title_pane_g

0x8fac,	// (0x0002f14c) aid_size_cell_colour_1_pane_ParamLimits

0x8fac,	// (0x0002f14c) aid_size_cell_colour_1_pane

0x8fc0,	// (0x0002f160) aid_size_cell_colour_2_pane_ParamLimits

0x8fc0,	// (0x0002f160) aid_size_cell_colour_2_pane

0x8fd4,	// (0x0002f174) aid_size_cell_colour_3_pane_ParamLimits

0x8fd4,	// (0x0002f174) aid_size_cell_colour_3_pane

0x8fe8,	// (0x0002f188) aid_size_cell_colour_4_pane_ParamLimits

0x8fe8,	// (0x0002f188) aid_size_cell_colour_4_pane

0x0ff6,	// (0x00027196) title_pane_stacon_g1_ParamLimits

0x0ff6,	// (0x00027196) title_pane_stacon_g1

0xd744,	// (0x000338e4) popup_note_wait_window_g3_ParamLimits

0xd744,	// (0x000338e4) popup_note_wait_window_g3

0xd7ba,	// (0x0003395a) popup_note_wait_window_t5_ParamLimits

0xd7ba,	// (0x0003395a) popup_note_wait_window_t5

0xbb26,	// (0x00031cc6) main_feb_china_hwr_fs_writing_pane

0x98da,	// (0x0002fa7a) popup_feb_china_hwr_fs_window_ParamLimits

0x98da,	// (0x0002fa7a) popup_feb_china_hwr_fs_window

0x86a3,	// (0x0002e843) aid_size_cell_hwr_fs_ParamLimits

0x86a3,	// (0x0002e843) aid_size_cell_hwr_fs

0xd261,	// (0x00033401) bg_popup_sub_pane_cp3_ParamLimits

0xd261,	// (0x00033401) bg_popup_sub_pane_cp3

0x86b8,	// (0x0002e858) grid_hwr_fs_pane_ParamLimits

0x86b8,	// (0x0002e858) grid_hwr_fs_pane

0x2061,	// (0x00028201) linegrid_hwr_fs_pane_ParamLimits

0x2061,	// (0x00028201) linegrid_hwr_fs_pane

0x86d0,	// (0x0002e870) cell_hwr_fs_pane_ParamLimits

0x86d0,	// (0x0002e870) cell_hwr_fs_pane

0xd26d,	// (0x0003340d) linegrid_hwr_fs_pane_g1_ParamLimits

0xd26d,	// (0x0003340d) linegrid_hwr_fs_pane_g1

0xa305,	// (0x000304a5) linegrid_hwr_fs_pane_g2_ParamLimits

0xa305,	// (0x000304a5) linegrid_hwr_fs_pane_g2

0xd279,	// (0x00033419) linegrid_hwr_fs_pane_g3_ParamLimits

0xd279,	// (0x00033419) linegrid_hwr_fs_pane_g3

0x20a5,	// (0x00028245) linegrid_hwr_fs_pane_g4_ParamLimits

0x20a5,	// (0x00028245) linegrid_hwr_fs_pane_g4

0x20bf,	// (0x0002825f) linegrid_hwr_fs_pane_g5_ParamLimits

0x20bf,	// (0x0002825f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f7,	// (0x00035997) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f7,	// (0x00035997) linegrid_hwr_fs_pane_g

0xd285,	// (0x00033425) cell_hwr_fs_pane_g1_ParamLimits

0xd285,	// (0x00033425) cell_hwr_fs_pane_g1

0xd07d,	// (0x0003321d) cell_hwr_fs_pane_g2_ParamLimits

0xd07d,	// (0x0003321d) cell_hwr_fs_pane_g2

0xa317,	// (0x000304b7) cell_hwr_fs_pane_g3_ParamLimits

0xa317,	// (0x000304b7) cell_hwr_fs_pane_g3

0xa324,	// (0x000304c4) cell_hwr_fs_pane_g4_ParamLimits

0xa324,	// (0x000304c4) cell_hwr_fs_pane_g4

0x0003,

0xf802,	// (0x000359a2) cell_hwr_fs_pane_g_ParamLimits

0xf802,	// (0x000359a2) cell_hwr_fs_pane_g

0x86f6,	// (0x0002e896) cell_hwr_fs_pane_t1

0xbb26,	// (0x00031cc6) grid_highlight_pane_cp6

0xbb26,	// (0x00031cc6) main_idle_act2_pane

0xc2e8,	// (0x00032488) aid_inside_area_popup_secondary

0xa424,	// (0x000305c4) aid_inside_area_window_primary_ParamLimits

0xa424,	// (0x000305c4) aid_inside_area_window_primary

0xe5cc,	// (0x0003476c) ai2_news_ticker_pane

0xe5d4,	// (0x00034774) aid_size_cell_ai1_link_ParamLimits

0xe5d4,	// (0x00034774) aid_size_cell_ai1_link

0xe5ee,	// (0x0003478e) popup_ai2_data_window_ParamLimits

0xe5ee,	// (0x0003478e) popup_ai2_data_window

0xe602,	// (0x000347a2) popup_ai2_link_window_ParamLimits

0xe602,	// (0x000347a2) popup_ai2_link_window

0xd261,	// (0x00033401) bg_popup_sub_pane_cp4_ParamLimits

0xd261,	// (0x00033401) bg_popup_sub_pane_cp4

0xe616,	// (0x000347b6) grid_ai2_link_pane_ParamLimits

0xe616,	// (0x000347b6) grid_ai2_link_pane

0xe62d,	// (0x000347cd) popup_ai2_link_window_g1_ParamLimits

0xe62d,	// (0x000347cd) popup_ai2_link_window_g1

0xe639,	// (0x000347d9) popup_ai2_link_window_g2_ParamLimits

0xe639,	// (0x000347d9) popup_ai2_link_window_g2

0x0001,

0x021f,	// (0x000263bf) popup_ai2_link_window_g_ParamLimits

0x021f,	// (0x000263bf) popup_ai2_link_window_g

0xe648,	// (0x000347e8) ai2_mp_button_pane

0xe650,	// (0x000347f0) ai2_mp_volume_pane

0xd386,	// (0x00033526) bg_popup_sub_pane_cp5_ParamLimits

0xd386,	// (0x00033526) bg_popup_sub_pane_cp5

0xe658,	// (0x000347f8) heading_ai2_gene_pane_ParamLimits

0xe658,	// (0x000347f8) heading_ai2_gene_pane

0xe664,	// (0x00034804) list_ai2_gene_pane_ParamLimits

0xe664,	// (0x00034804) list_ai2_gene_pane

0xe6ac,	// (0x0003484c) cell_ai2_link_pane_ParamLimits

0xe6ac,	// (0x0003484c) cell_ai2_link_pane

0xe6c2,	// (0x00034862) cell_ai2_link_pane_g1

0xbb26,	// (0x00031cc6) grid_highlight_pane_cp7

0x2888,	// (0x00028a28) ai2_mp_volume_pane_g1

0xe793,	// (0x00034933) ai2_mp_volume_pane_g2

0xe708,	// (0x000348a8) list_ai2_gene_pane_t1

0xe79b,	// (0x0003493b) ai2_mp_volume_pane_g3

0x0002,

0xf8d0,	// (0x00035a70) ai2_mp_volume_pane_g

0x2890,	// (0x00028a30) volume_small_pane_cp3

0xe7a3,	// (0x00034943) aid_size_cell_ai2_button

0xe7ab,	// (0x0003494b) grid_ai2_button_pane

0xe7b4,	// (0x00034954) cell_ai2_button_pane_ParamLimits

0xe7b4,	// (0x00034954) cell_ai2_button_pane

0xbb1c,	// (0x00031cbc) cell_ai2_button_pane_g1

0xbb26,	// (0x00031cc6) grid_highlight_pane_cp8

0xe753,	// (0x000348f3) ai2_gene_pane_t1_ParamLimits

0xe753,	// (0x000348f3) ai2_gene_pane_t1

0x986c,	// (0x0002fa0c) aid_height_parent_landscape

0xa55c,	// (0x000306fc) aid_height_set_list

0xda02,	// (0x00033ba2) aid_size_parent

0xe433,	// (0x000345d3) aid_size_cell_graphic_pane_ParamLimits

0xe674,	// (0x00034814) popup_ai2_data_window_g1_ParamLimits

0xe674,	// (0x00034814) popup_ai2_data_window_g1

0xe680,	// (0x00034820) ai2_news_ticker_pane_g1

0xe688,	// (0x00034828) ai2_news_ticker_pane_g2

0x0001,

0x0224,	// (0x000263c4) ai2_news_ticker_pane_g

0xe690,	// (0x00034830) ai2_news_ticker_pane_t1

0xe69e,	// (0x0003483e) ai2_news_ticker_pane_t2

0x0001,

0x0229,	// (0x000263c9) ai2_news_ticker_pane_t

0xe6cb,	// (0x0003486b) heading_ai2_gene_pane_g1

0xe6d3,	// (0x00034873) heading_ai2_gene_pane_t1_ParamLimits

0xe6d3,	// (0x00034873) heading_ai2_gene_pane_t1

0xe6e8,	// (0x00034888) list_highlight_pane_cp6

0xe6f0,	// (0x00034890) ai2_gene_pane_ParamLimits

0xe6f0,	// (0x00034890) ai2_gene_pane

0xe716,	// (0x000348b6) list_ai2_gene_pane_t2

0x0001,

0x022e,	// (0x000263ce) list_ai2_gene_pane_t

0xe724,	// (0x000348c4) list_highlight_pane_cp8_ParamLimits

0xe724,	// (0x000348c4) list_highlight_pane_cp8

0xe735,	// (0x000348d5) ai2_gene_pane_g1_ParamLimits

0xe735,	// (0x000348d5) ai2_gene_pane_g1

0xe747,	// (0x000348e7) ai2_gene_pane_g2_ParamLimits

0xe747,	// (0x000348e7) ai2_gene_pane_g2

0x0001,

0x0233,	// (0x000263d3) ai2_gene_pane_g_ParamLimits

0x0233,	// (0x000263d3) ai2_gene_pane_g

0xc178,	// (0x00032318) scroll_pane_cp12

0x8643,	// (0x0002e7e3) control_pane_t3_ParamLimits

0x8643,	// (0x0002e7e3) control_pane_t3

0xcdd7,	// (0x00032f77) status_small_pane_g8_ParamLimits

0xcdd7,	// (0x00032f77) status_small_pane_g8

0x996d,	// (0x0002fb0d) popup_find_window_ParamLimits

0x9be8,	// (0x0002fd88) popup_note_image_window_ParamLimits

0x6314,	// (0x0002c4b4) list_double2_graphic_pane_vc_g1_ParamLimits

0x6314,	// (0x0002c4b4) list_double2_graphic_pane_vc_g1

0x629a,	// (0x0002c43a) list_double2_graphic_pane_vc_g2_ParamLimits

0x629a,	// (0x0002c43a) list_double2_graphic_pane_vc_g2

0x62a6,	// (0x0002c446) list_double2_graphic_pane_vc_g3_ParamLimits

0x62a6,	// (0x0002c446) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d6,	// (0x00035976) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d6,	// (0x00035976) list_double2_graphic_pane_vc_g

0x69e5,	// (0x0002cb85) list_double2_graphic_pane_vc_t1_ParamLimits

0x69e5,	// (0x0002cb85) list_double2_graphic_pane_vc_t1

0x629a,	// (0x0002c43a) list_single_heading_pane_vc_g1_ParamLimits

0x629a,	// (0x0002c43a) list_single_heading_pane_vc_g1

0x62a6,	// (0x0002c446) list_single_heading_pane_vc_g2_ParamLimits

0x62a6,	// (0x0002c446) list_single_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x00035780) list_single_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x00035780) list_single_heading_pane_vc_g

0x69fb,	// (0x0002cb9b) list_single_heading_pane_vc_t1_ParamLimits

0x69fb,	// (0x0002cb9b) list_single_heading_pane_vc_t1

0x6a11,	// (0x0002cbb1) list_single_heading_pane_vc_t2_ParamLimits

0x6a11,	// (0x0002cbb1) list_single_heading_pane_vc_t2

0x0001,

0xf7f2,	// (0x00035992) list_single_heading_pane_vc_t_ParamLimits

0xf7f2,	// (0x00035992) list_single_heading_pane_vc_t

0xd1b9,	// (0x00033359) list_setting_number_pane_vc_g1_ParamLimits

0xd1b9,	// (0x00033359) list_setting_number_pane_vc_g1

0xd1c5,	// (0x00033365) list_setting_number_pane_vc_g2_ParamLimits

0xd1c5,	// (0x00033365) list_setting_number_pane_vc_g2

0x0001,

0x003c,	// (0x000261dc) list_setting_number_pane_vc_g_ParamLimits

0x003c,	// (0x000261dc) list_setting_number_pane_vc_g

0xd1d1,	// (0x00033371) list_setting_number_pane_vc_t1_ParamLimits

0xd1d1,	// (0x00033371) list_setting_number_pane_vc_t1

0xd1e5,	// (0x00033385) list_setting_number_pane_vc_t2_ParamLimits

0xd1e5,	// (0x00033385) list_setting_number_pane_vc_t2

0xd1ff,	// (0x0003339f) list_setting_number_pane_vc_t3_ParamLimits

0xd1ff,	// (0x0003339f) list_setting_number_pane_vc_t3

0x0002,

0x0041,	// (0x000261e1) list_setting_number_pane_vc_t_ParamLimits

0x0041,	// (0x000261e1) list_setting_number_pane_vc_t

0xd225,	// (0x000333c5) set_value_pane_vc_ParamLimits

0xd225,	// (0x000333c5) set_value_pane_vc

0xe39c,	// (0x0003453c) list_double2_graphic_pane_vc_ParamLimits

0xe39c,	// (0x0003453c) list_double2_graphic_pane_vc

0xe3b0,	// (0x00034550) list_double2_large_graphic_pane_vc_ParamLimits

0xe3b0,	// (0x00034550) list_double2_large_graphic_pane_vc

0xe39c,	// (0x0003453c) list_double2_pane_vc_ParamLimits

0xe39c,	// (0x0003453c) list_double2_pane_vc

0xe39c,	// (0x0003453c) list_double_graphic_heading_pane_vc_ParamLimits

0xe39c,	// (0x0003453c) list_double_graphic_heading_pane_vc

0xe39c,	// (0x0003453c) list_double_graphic_pane_vc_ParamLimits

0xe39c,	// (0x0003453c) list_double_graphic_pane_vc

0xe39c,	// (0x0003453c) list_double_heading_pane_vc_ParamLimits

0xe39c,	// (0x0003453c) list_double_heading_pane_vc

0xe3b0,	// (0x00034550) list_double_large_graphic_pane_vc_ParamLimits

0xe3b0,	// (0x00034550) list_double_large_graphic_pane_vc

0xe39c,	// (0x0003453c) list_double_number_pane_vc_ParamLimits

0xe39c,	// (0x0003453c) list_double_number_pane_vc

0xe39c,	// (0x0003453c) list_double_pane_vc_ParamLimits

0xe39c,	// (0x0003453c) list_double_pane_vc

0xe39c,	// (0x0003453c) list_double_time_pane_vc_ParamLimits

0xe39c,	// (0x0003453c) list_double_time_pane_vc

0xe39c,	// (0x0003453c) list_setting_number_pane_vc_ParamLimits

0xe39c,	// (0x0003453c) list_setting_number_pane_vc

0xe39c,	// (0x0003453c) list_setting_pane_vc_ParamLimits

0xe39c,	// (0x0003453c) list_setting_pane_vc

0xe39c,	// (0x0003453c) list_single_graphic_heading_pane_vc_ParamLimits

0xe39c,	// (0x0003453c) list_single_graphic_heading_pane_vc

0xe39c,	// (0x0003453c) list_single_heading_pane_vc_ParamLimits

0xe39c,	// (0x0003453c) list_single_heading_pane_vc

0xe39c,	// (0x0003453c) list_single_number_heading_pane_vc_ParamLimits

0xe39c,	// (0x0003453c) list_single_number_heading_pane_vc

0x6314,	// (0x0002c4b4) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x6314,	// (0x0002c4b4) list_double_graphic_heading_pane_vc_g1

0x629a,	// (0x0002c43a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x629a,	// (0x0002c43a) list_double_graphic_heading_pane_vc_g2

0x62a6,	// (0x0002c446) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x62a6,	// (0x0002c446) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7d6,	// (0x00035976) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7d6,	// (0x00035976) list_double_graphic_heading_pane_vc_g

0x6ba6,	// (0x0002cd46) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x6ba6,	// (0x0002cd46) list_double_graphic_heading_pane_vc_t1

0x69fb,	// (0x0002cb9b) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x69fb,	// (0x0002cb9b) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf8d7,	// (0x00035a77) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf8d7,	// (0x00035a77) list_double_graphic_heading_pane_vc_t

0xd1b9,	// (0x00033359) list_setting_pane_vc_g1_ParamLimits

0xd1b9,	// (0x00033359) list_setting_pane_vc_g1

0xd1c5,	// (0x00033365) list_setting_pane_vc_g2_ParamLimits

0xd1c5,	// (0x00033365) list_setting_pane_vc_g2

0x0001,

0x003c,	// (0x000261dc) list_setting_pane_vc_g_ParamLimits

0x003c,	// (0x000261dc) list_setting_pane_vc_g

0xe9aa,	// (0x00034b4a) list_setting_pane_vc_t1_ParamLimits

0xe9aa,	// (0x00034b4a) list_setting_pane_vc_t1

0xe9c4,	// (0x00034b64) list_setting_pane_vc_t2_ParamLimits

0xe9c4,	// (0x00034b64) list_setting_pane_vc_t2

0x0001,

0x0282,	// (0x00026422) list_setting_pane_vc_t_ParamLimits

0x0282,	// (0x00026422) list_setting_pane_vc_t

0xd225,	// (0x000333c5) set_value_pane_cp_vc_ParamLimits

0xd225,	// (0x000333c5) set_value_pane_cp_vc

0x629a,	// (0x0002c43a) list_single_number_heading_pane_vc_g1_ParamLimits

0x629a,	// (0x0002c43a) list_single_number_heading_pane_vc_g1

0x62a6,	// (0x0002c446) list_single_number_heading_pane_vc_g2_ParamLimits

0x62a6,	// (0x0002c446) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x00035780) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x00035780) list_single_number_heading_pane_vc_g

0x69fb,	// (0x0002cb9b) list_single_number_heading_pane_vc_t1_ParamLimits

0x69fb,	// (0x0002cb9b) list_single_number_heading_pane_vc_t1

0x6bba,	// (0x0002cd5a) list_single_number_heading_pane_vc_t2_ParamLimits

0x6bba,	// (0x0002cd5a) list_single_number_heading_pane_vc_t2

0x6302,	// (0x0002c4a2) list_single_number_heading_pane_vc_t3_ParamLimits

0x6302,	// (0x0002c4a2) list_single_number_heading_pane_vc_t3

0x0002,

0xf8f1,	// (0x00035a91) list_single_number_heading_pane_vc_t_ParamLimits

0xf8f1,	// (0x00035a91) list_single_number_heading_pane_vc_t

0x6314,	// (0x0002c4b4) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x6314,	// (0x0002c4b4) list_single_graphic_heading_pane_vc_g1

0x629a,	// (0x0002c43a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x629a,	// (0x0002c43a) list_single_graphic_heading_pane_vc_g4

0x62a6,	// (0x0002c446) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x62a6,	// (0x0002c446) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d6,	// (0x00035976) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d6,	// (0x00035976) list_single_graphic_heading_pane_vc_g

0x69fb,	// (0x0002cb9b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x69fb,	// (0x0002cb9b) list_single_graphic_heading_pane_vc_t1

0x6bce,	// (0x0002cd6e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6bce,	// (0x0002cd6e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xf8f8,	// (0x00035a98) list_single_graphic_heading_pane_vc_t_ParamLimits

0xf8f8,	// (0x00035a98) list_single_graphic_heading_pane_vc_t

0x629a,	// (0x0002c43a) list_double2_pane_vc_g1_ParamLimits

0x629a,	// (0x0002c43a) list_double2_pane_vc_g1

0x62a6,	// (0x0002c446) list_double2_pane_vc_g2_ParamLimits

0x62a6,	// (0x0002c446) list_double2_pane_vc_g2

0x0001,

0xf5e0,	// (0x00035780) list_double2_pane_vc_g_ParamLimits

0xf5e0,	// (0x00035780) list_double2_pane_vc_g

0x6ab1,	// (0x0002cc51) list_double2_pane_vc_t1_ParamLimits

0x6ab1,	// (0x0002cc51) list_double2_pane_vc_t1

0x6be2,	// (0x0002cd82) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6be2,	// (0x0002cd82) list_double2_large_graphic_pane_vc_g1

0x6bee,	// (0x0002cd8e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6bee,	// (0x0002cd8e) list_double2_large_graphic_pane_vc_g2

0x6bfa,	// (0x0002cd9a) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6bfa,	// (0x0002cd9a) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5fd,	// (0x0003579d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5fd,	// (0x0003579d) list_double2_large_graphic_pane_vc_g

0x6c06,	// (0x0002cda6) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6c06,	// (0x0002cda6) list_double2_large_graphic_pane_vc_t1

0x6c1c,	// (0x0002cdbc) list_double_time_pane_vc_g1_ParamLimits

0x6c1c,	// (0x0002cdbc) list_double_time_pane_vc_g1

0x6c28,	// (0x0002cdc8) list_double_time_pane_vc_g2_ParamLimits

0x6c28,	// (0x0002cdc8) list_double_time_pane_vc_g2

0x0001,

0xf8fd,	// (0x00035a9d) list_double_time_pane_vc_g_ParamLimits

0xf8fd,	// (0x00035a9d) list_double_time_pane_vc_g

0x6c34,	// (0x0002cdd4) list_double_time_pane_vc_t1_ParamLimits

0x6c34,	// (0x0002cdd4) list_double_time_pane_vc_t1

0x6c4d,	// (0x0002cded) list_double_time_pane_vc_t2_ParamLimits

0x6c4d,	// (0x0002cded) list_double_time_pane_vc_t2

0x6c8d,	// (0x0002ce2d) list_double_time_pane_vc_t3_ParamLimits

0x6c8d,	// (0x0002ce2d) list_double_time_pane_vc_t3

0x6ca5,	// (0x0002ce45) list_double_time_pane_vc_t4_ParamLimits

0x6ca5,	// (0x0002ce45) list_double_time_pane_vc_t4

0x0003,

0xf902,	// (0x00035aa2) list_double_time_pane_vc_t_ParamLimits

0xf902,	// (0x00035aa2) list_double_time_pane_vc_t

0x629a,	// (0x0002c43a) list_double_pane_vc_g1_ParamLimits

0x629a,	// (0x0002c43a) list_double_pane_vc_g1

0x62a6,	// (0x0002c446) list_double_pane_vc_g2_ParamLimits

0x62a6,	// (0x0002c446) list_double_pane_vc_g2

0x0001,

0xf5e0,	// (0x00035780) list_double_pane_vc_g_ParamLimits

0xf5e0,	// (0x00035780) list_double_pane_vc_g

0x6cb9,	// (0x0002ce59) list_double_pane_vc_t1_ParamLimits

0x6cb9,	// (0x0002ce59) list_double_pane_vc_t1

0x6ccb,	// (0x0002ce6b) list_double_pane_vc_t2_ParamLimits

0x6ccb,	// (0x0002ce6b) list_double_pane_vc_t2

0x0001,

0xf90b,	// (0x00035aab) list_double_pane_vc_t_ParamLimits

0xf90b,	// (0x00035aab) list_double_pane_vc_t

0x629a,	// (0x0002c43a) list_double_number_pane_vc_g1_ParamLimits

0x629a,	// (0x0002c43a) list_double_number_pane_vc_g1

0x62a6,	// (0x0002c446) list_double_number_pane_vc_g2_ParamLimits

0x62a6,	// (0x0002c446) list_double_number_pane_vc_g2

0x0001,

0xf5e0,	// (0x00035780) list_double_number_pane_vc_g_ParamLimits

0xf5e0,	// (0x00035780) list_double_number_pane_vc_g

0x6ce3,	// (0x0002ce83) list_double_number_pane_vc_t1_ParamLimits

0x6ce3,	// (0x0002ce83) list_double_number_pane_vc_t1

0x6cf7,	// (0x0002ce97) list_double_number_pane_vc_t2_ParamLimits

0x6cf7,	// (0x0002ce97) list_double_number_pane_vc_t2

0x6ccb,	// (0x0002ce6b) list_double_number_pane_vc_t3_ParamLimits

0x6ccb,	// (0x0002ce6b) list_double_number_pane_vc_t3

0x0002,

0xf910,	// (0x00035ab0) list_double_number_pane_vc_t_ParamLimits

0xf910,	// (0x00035ab0) list_double_number_pane_vc_t

0x6d09,	// (0x0002cea9) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6d09,	// (0x0002cea9) list_double_large_graphic_pane_vc_g1

0x6d15,	// (0x0002ceb5) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6d15,	// (0x0002ceb5) list_double_large_graphic_pane_vc_g2

0x6bfa,	// (0x0002cd9a) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6bfa,	// (0x0002cd9a) list_double_large_graphic_pane_vc_g3

0x6d24,	// (0x0002cec4) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6d24,	// (0x0002cec4) list_double_large_graphic_pane_vc_g4

0x0003,

0xf917,	// (0x00035ab7) list_double_large_graphic_pane_vc_g_ParamLimits

0xf917,	// (0x00035ab7) list_double_large_graphic_pane_vc_g

0x6d30,	// (0x0002ced0) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6d30,	// (0x0002ced0) list_double_large_graphic_pane_vc_t1

0x6d42,	// (0x0002cee2) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6d42,	// (0x0002cee2) list_double_large_graphic_pane_vc_t2

0x0001,

0xf920,	// (0x00035ac0) list_double_large_graphic_pane_vc_t_ParamLimits

0xf920,	// (0x00035ac0) list_double_large_graphic_pane_vc_t

0x629a,	// (0x0002c43a) list_double_heading_pane_vc_g1_ParamLimits

0x629a,	// (0x0002c43a) list_double_heading_pane_vc_g1

0x62a6,	// (0x0002c446) list_double_heading_pane_vc_g2_ParamLimits

0x62a6,	// (0x0002c446) list_double_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x00035780) list_double_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x00035780) list_double_heading_pane_vc_g

0x6d5b,	// (0x0002cefb) list_double_heading_pane_vc_t1_ParamLimits

0x6d5b,	// (0x0002cefb) list_double_heading_pane_vc_t1

0x69fb,	// (0x0002cb9b) list_double_heading_pane_vc_t2_ParamLimits

0x69fb,	// (0x0002cb9b) list_double_heading_pane_vc_t2

0x0001,

0xf925,	// (0x00035ac5) list_double_heading_pane_vc_t_ParamLimits

0xf925,	// (0x00035ac5) list_double_heading_pane_vc_t

0x6d6f,	// (0x0002cf0f) list_double_graphic_pane_vc_g1_ParamLimits

0x6d6f,	// (0x0002cf0f) list_double_graphic_pane_vc_g1

0x6d7f,	// (0x0002cf1f) list_double_graphic_pane_vc_g2_ParamLimits

0x6d7f,	// (0x0002cf1f) list_double_graphic_pane_vc_g2

0x6d8e,	// (0x0002cf2e) list_double_graphic_pane_vc_g3_ParamLimits

0x6d8e,	// (0x0002cf2e) list_double_graphic_pane_vc_g3

0x0002,

0xf92a,	// (0x00035aca) list_double_graphic_pane_vc_g_ParamLimits

0xf92a,	// (0x00035aca) list_double_graphic_pane_vc_g

0x6d9a,	// (0x0002cf3a) list_double_graphic_pane_vc_t1_ParamLimits

0x6d9a,	// (0x0002cf3a) list_double_graphic_pane_vc_t1

0x6ccb,	// (0x0002ce6b) list_double_graphic_pane_vc_t2_ParamLimits

0x6ccb,	// (0x0002ce6b) list_double_graphic_pane_vc_t2

0x0001,

0xf931,	// (0x00035ad1) list_double_graphic_pane_vc_t_ParamLimits

0xf931,	// (0x00035ad1) list_double_graphic_pane_vc_t

0x07e2,	// (0x00026982) aid_size_cell_fastswap

0x8152,	// (0x0002e2f2) aid_size_cell_touch_ParamLimits

0x8152,	// (0x0002e2f2) aid_size_cell_touch

0x0a4f,	// (0x00026bef) popup_fast_swap_wide_window_ParamLimits

0x0a4f,	// (0x00026bef) popup_fast_swap_wide_window

0x829d,	// (0x0002e43d) touch_pane_ParamLimits

0x829d,	// (0x0002e43d) touch_pane

0xc1ce,	// (0x0003236e) button_value_adjust_pane_cp2

0x66e4,	// (0x0002c884) button_value_adjust_pane_cp4

0x6704,	// (0x0002c8a4) form_field_data_pane_cp2

0x922e,	// (0x0002f3ce) form_field_data_wide_pane_cp2

0xc51a,	// (0x000326ba) bg_scroll_pane_ParamLimits

0x11f1,	// (0x00027391) scroll_handle_pane_ParamLimits

0x1205,	// (0x000273a5) scroll_sc2_down_pane_ParamLimits

0x1205,	// (0x000273a5) scroll_sc2_down_pane

0xc54b,	// (0x000326eb) scroll_sc2_up_pane_ParamLimits

0xc54b,	// (0x000326eb) scroll_sc2_up_pane

0xa908,	// (0x00030aa8) grid_wheel_folder_pane_g1_ParamLimits

0xa908,	// (0x00030aa8) grid_wheel_folder_pane_g1

0x14a1,	// (0x00027641) clock_nsta_pane_cp2_ParamLimits

0x14a1,	// (0x00027641) clock_nsta_pane_cp2

0xc339,	// (0x000324d9) listscroll_midp_pane_ParamLimits

0x97a0,	// (0x0002f940) midp_canvas_pane

0xce2b,	// (0x00032fcb) nsta_clock_indic_pane

0xce63,	// (0x00033003) listscroll_form_pane_vc

0xce6b,	// (0x0003300b) listscroll_set_pane_vc_ParamLimits

0xce6b,	// (0x0003300b) listscroll_set_pane_vc

0xa016,	// (0x000301b6) clock_nsta_pane

0xa040,	// (0x000301e0) indicator_nsta_pane

0xd0af,	// (0x0003324f) bg_popup_sub_pane_cp2_ParamLimits

0xd0c3,	// (0x00033263) find_pane_cp2_ParamLimits

0xd0c3,	// (0x00033263) find_pane_cp2

0xd0d9,	// (0x00033279) grid_toobar_pane_ParamLimits

0xd235,	// (0x000333d5) list_form_gen_pane_vc_ParamLimits

0xd235,	// (0x000333d5) list_form_gen_pane_vc

0xd24b,	// (0x000333eb) scroll_pane_cp8_vc_ParamLimits

0xd24b,	// (0x000333eb) scroll_pane_cp8_vc

0xd29b,	// (0x0003343b) data_form_wide_pane_vc_ParamLimits

0xd29b,	// (0x0003343b) data_form_wide_pane_vc

0xd2a7,	// (0x00033447) form_field_data_wide_pane_vc_g1

0xd2af,	// (0x0003344f) form_field_data_wide_pane_vc_t1_ParamLimits

0xd2af,	// (0x0003344f) form_field_data_wide_pane_vc_t1

0xc1e2,	// (0x00032382) input_focus_pane_cp6_vc_ParamLimits

0xc1e2,	// (0x00032382) input_focus_pane_cp6_vc

0xa3c4,	// (0x00030564) list_midp_pane_ParamLimits

0xe36e,	// (0x0003450e) scroll_pane_cp16_ParamLimits

0xe36e,	// (0x0003450e) scroll_pane_cp16

0xd51e,	// (0x000336be) button_value_adjust_pane_ParamLimits

0xd51e,	// (0x000336be) button_value_adjust_pane

0xa56d,	// (0x0003070d) button_value_adjust_pane_cp6_ParamLimits

0xa56d,	// (0x0003070d) button_value_adjust_pane_cp6

0xa683,	// (0x00030823) settings_code_pane_cp_ParamLimits

0xa683,	// (0x00030823) settings_code_pane_cp

0xbb1c,	// (0x00031cbc) cell_touch_pane_g1

0xbb1c,	// (0x00031cbc) cell_touch_pane_g2

0x0001,

0xf71b,	// (0x000358bb) cell_touch_pane_g

0xa7e7,	// (0x00030987) cell_touch_pane_cp_ParamLimits

0xa7e7,	// (0x00030987) cell_touch_pane_cp

0xa803,	// (0x000309a3) cell_touch_pane_ParamLimits

0xa803,	// (0x000309a3) cell_touch_pane

0xbb1c,	// (0x00031cbc) scroll_sc2_down_pane_g1

0xbb1c,	// (0x00031cbc) scroll_sc2_up_pane_g1

0xbb26,	// (0x00031cc6) bg_set_opt_pane_cp4_vc

0xe7c6,	// (0x00034966) list_set_graphic_pane_vc_g1_ParamLimits

0xe7c6,	// (0x00034966) list_set_graphic_pane_vc_g1

0xe7d2,	// (0x00034972) list_set_graphic_pane_vc_g2_ParamLimits

0xe7d2,	// (0x00034972) list_set_graphic_pane_vc_g2

0x0001,

0x0244,	// (0x000263e4) list_set_graphic_pane_vc_g_ParamLimits

0x0244,	// (0x000263e4) list_set_graphic_pane_vc_g

0xe7de,	// (0x0003497e) text_primary_small_cp13_vc_ParamLimits

0xe7de,	// (0x0003497e) text_primary_small_cp13_vc

0xe7f6,	// (0x00034996) list_set_graphic_pane_vc_ParamLimits

0xe7f6,	// (0x00034996) list_set_graphic_pane_vc

0xbb26,	// (0x00031cc6) input_focus_pane_cp2_vc

0xbb1c,	// (0x00031cbc) setting_code_pane_vc_g1

0xe80a,	// (0x000349aa) setting_code_pane_vc_t1

0xe818,	// (0x000349b8) set_text_pane_vc_t1_ParamLimits

0xe818,	// (0x000349b8) set_text_pane_vc_t1

0xbb26,	// (0x00031cc6) input_focus_pane_cp1_vc

0xe837,	// (0x000349d7) list_set_text_pane_vc

0xbb1c,	// (0x00031cbc) setting_text_pane_vc_g1

0xbb26,	// (0x00031cc6) bg_set_opt_pane_cp2_vc

0xe841,	// (0x000349e1) setting_slider_graphic_pane_vc_g1

0xe849,	// (0x000349e9) setting_slider_graphic_pane_vc_t1

0xe857,	// (0x000349f7) setting_slider_graphic_pane_vc_t2

0x0001,

0x0249,	// (0x000263e9) setting_slider_graphic_pane_vc_t

0xe865,	// (0x00034a05) slider_set_pane_cp_vc

0xe86d,	// (0x00034a0d) slider_set_pane_vc_g1

0xe876,	// (0x00034a16) slider_set_pane_vc_g2

0x0006,

0x024e,	// (0x000263ee) slider_set_pane_vc_g

0xc249,	// (0x000323e9) set_opt_bg_pane_g1_copy1

0xc251,	// (0x000323f1) set_opt_bg_pane_g2_copy1

0xe8a2,	// (0x00034a42) set_opt_bg_pane_g3_copy1

0xc261,	// (0x00032401) set_opt_bg_pane_g4_copy1

0xc269,	// (0x00032409) set_opt_bg_pane_g5_copy1

0xc271,	// (0x00032411) set_opt_bg_pane_g6_copy1

0xe8aa,	// (0x00034a4a) set_opt_bg_pane_g7_copy1

0xe8b4,	// (0x00034a54) set_opt_bg_pane_g8_copy1

0xe8bc,	// (0x00034a5c) set_opt_bg_pane_g9_copy1

0xbb26,	// (0x00031cc6) bg_set_opt_pane_cp_vc

0xe8c4,	// (0x00034a64) setting_slider_pane_vc_t1

0xe849,	// (0x000349e9) setting_slider_pane_vc_t2

0xe857,	// (0x000349f7) setting_slider_pane_vc_t3

0x0002,

0x025d,	// (0x000263fd) setting_slider_pane_vc_t

0xe865,	// (0x00034a05) slider_set_pane_vc

0x2240,	// (0x000283e0) volume_set_pane_vc_g1

0x28bb,	// (0x00028a5b) volume_set_pane_vc_g2

0x28c4,	// (0x00028a64) volume_set_pane_vc_g3

0x28cd,	// (0x00028a6d) volume_set_pane_vc_g4

0x28d6,	// (0x00028a76) volume_set_pane_vc_g5

0x28df,	// (0x00028a7f) volume_set_pane_vc_g6

0x28e8,	// (0x00028a88) volume_set_pane_vc_g7

0x28f1,	// (0x00028a91) volume_set_pane_vc_g8

0x28fa,	// (0x00028a9a) volume_set_pane_vc_g9

0x2903,	// (0x00028aa3) volume_set_pane_vc_g10

0x0009,

0xf8dc,	// (0x00035a7c) volume_set_pane_vc_g

0xe8d3,	// (0x00034a73) volume_set_pane_vc

0xe8db,	// (0x00034a7b) button_value_adjust_pane_cp1_vc

0xe8e5,	// (0x00034a85) list_highlight_pane_cp2_vc

0xe8ee,	// (0x00034a8e) list_set_pane_vc_ParamLimits

0xe8ee,	// (0x00034a8e) list_set_pane_vc

0xe940,	// (0x00034ae0) main_pane_set_vc_t1_ParamLimits

0xe940,	// (0x00034ae0) main_pane_set_vc_t1

0xe955,	// (0x00034af5) main_pane_set_vc_t2_ParamLimits

0xe955,	// (0x00034af5) main_pane_set_vc_t2

0xe967,	// (0x00034b07) main_pane_set_vc_t3_ParamLimits

0xe967,	// (0x00034b07) main_pane_set_vc_t3

0xe979,	// (0x00034b19) main_pane_set_vc_t4_ParamLimits

0xe979,	// (0x00034b19) main_pane_set_vc_t4

0x0003,

0x0279,	// (0x00026419) main_pane_set_vc_t_ParamLimits

0x0279,	// (0x00026419) main_pane_set_vc_t

0xe98b,	// (0x00034b2b) setting_code_pane_vc_ParamLimits

0xe98b,	// (0x00034b2b) setting_code_pane_vc

0xe99a,	// (0x00034b3a) setting_slider_graphic_pane_vc

0xe99a,	// (0x00034b3a) setting_slider_pane_vc

0xe99a,	// (0x00034b3a) setting_text_pane_vc

0xe99a,	// (0x00034b3a) setting_volume_pane_vc

0xe9a2,	// (0x00034b42) scroll_pane_cp121_vc

0xc1bc,	// (0x0003235c) set_content_pane_vc

0xe9da,	// (0x00034b7a) button_value_adjust_pane_g1

0xe9e3,	// (0x00034b83) button_value_adjust_pane_g2

0x0001,

0x02cc,	// (0x0002646c) button_value_adjust_pane_g

0xe9ec,	// (0x00034b8c) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe9ec,	// (0x00034b8c) form_field_slider_wide_pane_vc_t1

0xea00,	// (0x00034ba0) form_field_slider_wide_pane_vc_t2_ParamLimits

0xea00,	// (0x00034ba0) form_field_slider_wide_pane_vc_t2

0x0001,

0x02d1,	// (0x00026471) form_field_slider_wide_pane_vc_t_ParamLimits

0x02d1,	// (0x00026471) form_field_slider_wide_pane_vc_t

0xbb74,	// (0x00031d14) input_focus_pane_cp10_vc_ParamLimits

0xbb74,	// (0x00031d14) input_focus_pane_cp10_vc

0xea12,	// (0x00034bb2) slider_cont_pane_cp1_vc_ParamLimits

0xea12,	// (0x00034bb2) slider_cont_pane_cp1_vc

0xe86d,	// (0x00034a0d) slider_form_pane_g1_cp2

0xe876,	// (0x00034a16) slider_form_pane_g2_cp2

0xea2b,	// (0x00034bcb) form_field_slider_pane_vc_t3

0xea39,	// (0x00034bd9) form_field_slider_pane_vc_t4

0xea47,	// (0x00034be7) slider_form_pane_vc_ParamLimits

0xea47,	// (0x00034be7) slider_form_pane_vc

0xea54,	// (0x00034bf4) form_field_slider_pane_vc_t1_ParamLimits

0xea54,	// (0x00034bf4) form_field_slider_pane_vc_t1

0xea00,	// (0x00034ba0) form_field_slider_pane_vc_t2_ParamLimits

0xea00,	// (0x00034ba0) form_field_slider_pane_vc_t2

0x0001,

0x02e1,	// (0x00026481) form_field_slider_pane_vc_t_ParamLimits

0x02e1,	// (0x00026481) form_field_slider_pane_vc_t

0xbb74,	// (0x00031d14) input_focus_pane_cp9_vc_ParamLimits

0xbb74,	// (0x00031d14) input_focus_pane_cp9_vc

0xea70,	// (0x00034c10) slider_cont_pane_vc_ParamLimits

0xea70,	// (0x00034c10) slider_cont_pane_vc

0xea82,	// (0x00034c22) list_form_graphic_pane_cp_vc_ParamLimits

0xea82,	// (0x00034c22) list_form_graphic_pane_cp_vc

0xd2a7,	// (0x00033447) form_field_popup_wide_pane_vc_g1

0xea97,	// (0x00034c37) form_field_popup_wide_pane_vc_t1_ParamLimits

0xea97,	// (0x00034c37) form_field_popup_wide_pane_vc_t1

0xc1e2,	// (0x00032382) input_focus_pane_cp8_vc_ParamLimits

0xc1e2,	// (0x00032382) input_focus_pane_cp8_vc

0xeaae,	// (0x00034c4e) list_form_wide_pane_vc_ParamLimits

0xeaae,	// (0x00034c4e) list_form_wide_pane_vc

0xeaba,	// (0x00034c5a) list_form_graphic_pane_vc_g1

0xeac2,	// (0x00034c62) list_form_graphic_pane_vc_t1_ParamLimits

0xeac2,	// (0x00034c62) list_form_graphic_pane_vc_t1

0xbb82,	// (0x00031d22) list_highlight_pane_cp5_vc_ParamLimits

0xbb82,	// (0x00031d22) list_highlight_pane_cp5_vc

0xeade,	// (0x00034c7e) list_form_graphic_pane_vc_ParamLimits

0xeade,	// (0x00034c7e) list_form_graphic_pane_vc

0xd2a7,	// (0x00033447) form_field_popup_pane_vc_g1

0xeaf4,	// (0x00034c94) form_field_popup_pane_vc_t1_ParamLimits

0xeaf4,	// (0x00034c94) form_field_popup_pane_vc_t1

0xc1e2,	// (0x00032382) input_focus_pane_cp7_vc_ParamLimits

0xc1e2,	// (0x00032382) input_focus_pane_cp7_vc

0xeb0b,	// (0x00034cab) list_form_pane_vc_ParamLimits

0xeb0b,	// (0x00034cab) list_form_pane_vc

0xeb17,	// (0x00034cb7) data_form_pane_vc_t1_ParamLimits

0xeb17,	// (0x00034cb7) data_form_pane_vc_t1

0xc249,	// (0x000323e9) input_focus_pane_vc_g1

0xc251,	// (0x000323f1) input_focus_pane_vc_g2

0xc259,	// (0x000323f9) input_focus_pane_vc_g3

0xc261,	// (0x00032401) input_focus_pane_vc_g4

0xc269,	// (0x00032409) input_focus_pane_vc_g5

0xc271,	// (0x00032411) input_focus_pane_vc_g6

0xc279,	// (0x00032419) input_focus_pane_vc_g7

0xc281,	// (0x00032421) input_focus_pane_vc_g8

0xc289,	// (0x00032429) input_focus_pane_vc_g9

0xbb1c,	// (0x00031cbc) input_focus_pane_vc_g10

0x0009,

0xf6a4,	// (0x00035844) input_focus_pane_vc_g

0xd29b,	// (0x0003343b) data_form_pane_vc_ParamLimits

0xd29b,	// (0x0003343b) data_form_pane_vc

0xd2a7,	// (0x00033447) form_field_data_pane_vc_g1

0xeb32,	// (0x00034cd2) form_field_data_pane_vc_t1_ParamLimits

0xeb32,	// (0x00034cd2) form_field_data_pane_vc_t1

0xc1e2,	// (0x00032382) input_focus_pane_vc_ParamLimits

0xc1e2,	// (0x00032382) input_focus_pane_vc

0xeb4c,	// (0x00034cec) button_value_adjust_pane_cp3_vc

0xeb54,	// (0x00034cf4) button_value_adjust_pane_cp5_vc

0xeb5c,	// (0x00034cfc) form_field_data_pane_vc_ParamLimits

0xeb5c,	// (0x00034cfc) form_field_data_pane_vc

0xeb73,	// (0x00034d13) form_field_data_pane_vc_cp2

0xeb7b,	// (0x00034d1b) form_field_data_wide_pane_vc_ParamLimits

0xeb7b,	// (0x00034d1b) form_field_data_wide_pane_vc

0xeb91,	// (0x00034d31) form_field_data_wide_pane_vc_cp2

0xeb99,	// (0x00034d39) form_field_popup_pane_vc_ParamLimits

0xeb99,	// (0x00034d39) form_field_popup_pane_vc

0xebb0,	// (0x00034d50) form_field_popup_wide_pane_vc_ParamLimits

0xebb0,	// (0x00034d50) form_field_popup_wide_pane_vc

0xebc6,	// (0x00034d66) form_field_slider_pane_vc_ParamLimits

0xebc6,	// (0x00034d66) form_field_slider_pane_vc

0xebd9,	// (0x00034d79) form_field_slider_wide_pane_vc_ParamLimits

0xebd9,	// (0x00034d79) form_field_slider_wide_pane_vc

0xa821,	// (0x000309c1) grid_touch_1_pane_ParamLimits

0xa821,	// (0x000309c1) grid_touch_1_pane

0xa835,	// (0x000309d5) grid_touch_2_pane_ParamLimits

0xa835,	// (0x000309d5) grid_touch_2_pane

0xebec,	// (0x00034d8c) touch_pane_g1_ParamLimits

0xebec,	// (0x00034d8c) touch_pane_g1

0xebfa,	// (0x00034d9a) cell_app_pane_cp_wide_ParamLimits

0xebfa,	// (0x00034d9a) cell_app_pane_cp_wide

0xec0b,	// (0x00034dab) grid_popup_fast_wide_pane_ParamLimits

0xec0b,	// (0x00034dab) grid_popup_fast_wide_pane

0xec1f,	// (0x00034dbf) scroll_pane_cp19_ParamLimits

0xec1f,	// (0x00034dbf) scroll_pane_cp19

0xbb26,	// (0x00031cc6) bg_popup_window_pane_cp20

0xec33,	// (0x00034dd3) listscroll_popup_fast_wide_pane

0xd04e,	// (0x000331ee) grid_indicator_nsta_pane

0xec3b,	// (0x00034ddb) clock_nsta_pane_g1

0xec44,	// (0x00034de4) clock_nsta_pane_t1

0xa85f,	// (0x000309ff) cell_indicator_nsta_pane_ParamLimits

0xa85f,	// (0x000309ff) cell_indicator_nsta_pane

0xebec,	// (0x00034d8c) cell_indicator_nsta_pane_g1

0xa87c,	// (0x00030a1c) cell_indicator_nsta_pane_g2

0x0001,

0xf936,	// (0x00035ad6) cell_indicator_nsta_pane_g

0xec60,	// (0x00034e00) clock_nsta_pane_cp

0xec68,	// (0x00034e08) indicator_nsta_pane_cp

0xec71,	// (0x00034e11) nsta_clock_indic_pane_g1

0xbbbe,	// (0x00031d5e) grid_indicator_pane

0xc63d,	// (0x000327dd) scroll_pane_cp29

0x13f0,	// (0x00027590) indicator_nsta_pane_cp2_ParamLimits

0x13f0,	// (0x00027590) indicator_nsta_pane_cp2

0xbb82,	// (0x00031d22) main_apps_wheel_pane

0xd3c3,	// (0x00033563) form_midp_field_text_pane_ParamLimits

0xd4f0,	// (0x00033690) scroll_bar_cp050_ParamLimits

0xecda,	// (0x00034e7a) cell_indicator_pane_ParamLimits

0xecda,	// (0x00034e7a) cell_indicator_pane

0xecf7,	// (0x00034e97) cell_indicator_pane_g1

0xa892,	// (0x00030a32) grid_wheel_folder_pane_ParamLimits

0xa892,	// (0x00030a32) grid_wheel_folder_pane

0xa8a0,	// (0x00030a40) list_wheel_apps_pane_ParamLimits

0xa8a0,	// (0x00030a40) list_wheel_apps_pane

0xa8ae,	// (0x00030a4e) main_apps_wheel_pane_g1_ParamLimits

0xa8ae,	// (0x00030a4e) main_apps_wheel_pane_g1

0xa8ba,	// (0x00030a5a) main_apps_wheel_pane_g2_ParamLimits

0xa8ba,	// (0x00030a5a) main_apps_wheel_pane_g2

0x0001,

0xf93b,	// (0x00035adb) main_apps_wheel_pane_g_ParamLimits

0xf93b,	// (0x00035adb) main_apps_wheel_pane_g

0xa8c8,	// (0x00030a68) main_apps_wheel_pane_t1_ParamLimits

0xa8c8,	// (0x00030a68) main_apps_wheel_pane_t1

0xa8dc,	// (0x00030a7c) list_wheel_apps_pane_g1

0xa8e4,	// (0x00030a84) list_wheel_apps_pane_g2

0xa8ec,	// (0x00030a8c) list_wheel_apps_pane_g3

0xa8f4,	// (0x00030a94) list_wheel_apps_pane_g4

0xa8fe,	// (0x00030a9e) list_wheel_apps_pane_g5

0x0004,

0xf940,	// (0x00035ae0) list_wheel_apps_pane_g

0xca95,	// (0x00032c35) navi_icon_text_pane

0x9f0a,	// (0x000300aa) aid_fill_nsta

0xed01,	// (0x00034ea1) navi_icon_text_pane_g1

0xed0d,	// (0x00034ead) navi_icon_text_pane_t1

0xc931,	// (0x00032ad1) list_set_graphic_pane_t1_ParamLimits

0xc931,	// (0x00032ad1) list_set_graphic_pane_t1

0xdc0a,	// (0x00033daa) popup_midp_note_alarm_window_t6_ParamLimits

0xdc0a,	// (0x00033daa) popup_midp_note_alarm_window_t6

0xdc1c,	// (0x00033dbc) popup_midp_note_alarm_window_t7_ParamLimits

0xdc1c,	// (0x00033dbc) popup_midp_note_alarm_window_t7

0xdc2e,	// (0x00033dce) popup_midp_note_alarm_window_t8_ParamLimits

0xdc2e,	// (0x00033dce) popup_midp_note_alarm_window_t8

0xdc58,	// (0x00033df8) popup_midp_note_alarm_window_t9_ParamLimits

0xdc58,	// (0x00033df8) popup_midp_note_alarm_window_t9

0xdc6a,	// (0x00033e0a) popup_midp_note_alarm_window_t10_ParamLimits

0xdc6a,	// (0x00033e0a) popup_midp_note_alarm_window_t10

0xdc7c,	// (0x00033e1c) popup_midp_note_alarm_window_t11_ParamLimits

0xdc7c,	// (0x00033e1c) popup_midp_note_alarm_window_t11

0xdc8e,	// (0x00033e2e) scroll_pane_cp17_ParamLimits

0xdc8e,	// (0x00033e2e) scroll_pane_cp17

0x2240,	// (0x000283e0) volume_small_pane_cp_g1

0x2a3b,	// (0x00028bdb) volume_small_pane_cp_g2

0x2a44,	// (0x00028be4) volume_small_pane_cp_g3

0x2a4d,	// (0x00028bed) volume_small_pane_cp_g4

0x2a56,	// (0x00028bf6) volume_small_pane_cp_g5

0x2a5f,	// (0x00028bff) volume_small_pane_cp_g6

0x2a68,	// (0x00028c08) volume_small_pane_cp_g7

0x2a71,	// (0x00028c11) volume_small_pane_cp_g8

0x2a7a,	// (0x00028c1a) volume_small_pane_cp_g9

0x2a83,	// (0x00028c23) volume_small_pane_cp_g10

0xcc41,	// (0x00032de1) midp_ticker_pane_g1_ParamLimits

0xcc4d,	// (0x00032ded) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x00035910) midp_ticker_pane_g_ParamLimits

0xcc59,	// (0x00032df9) midp_ticker_pane_t1_ParamLimits

0x9f2e,	// (0x000300ce) aid_fill_nsta_2

0xd4dc,	// (0x0003367c) list_form2_midp_pane

0xe35f,	// (0x000344ff) midp_editing_number_pane_ParamLimits

0xe37a,	// (0x0003451a) midp_ticker_pane_ParamLimits

0xed1f,	// (0x00034ebf) form2_midp_field_pane

0xed27,	// (0x00034ec7) scroll_pane_cp51

0xed47,	// (0x00034ee7) form2_midp_button_pane_ParamLimits

0xed47,	// (0x00034ee7) form2_midp_button_pane

0xed59,	// (0x00034ef9) form2_midp_content_pane_ParamLimits

0xed59,	// (0x00034ef9) form2_midp_content_pane

0xed73,	// (0x00034f13) form2_midp_field_choice_group_pane

0xed7b,	// (0x00034f1b) form2_midp_field_pane_g1

0xed83,	// (0x00034f23) form2_midp_field_pane_g2

0xed8b,	// (0x00034f2b) form2_midp_field_pane_g3

0xed93,	// (0x00034f33) form2_midp_field_pane_g4

0x0003,

0x0331,	// (0x000264d1) form2_midp_field_pane_g

0xed9b,	// (0x00034f3b) form2_midp_gauge_slider_pane

0xeda3,	// (0x00034f43) form2_midp_gauge_wait_pane

0xedab,	// (0x00034f4b) form2_midp_image_pane_ParamLimits

0xedab,	// (0x00034f4b) form2_midp_image_pane

0xedc6,	// (0x00034f66) form2_midp_label_pane_ParamLimits

0xedc6,	// (0x00034f66) form2_midp_label_pane

0xa931,	// (0x00030ad1) form2_midp_label_pane_cp_ParamLimits

0xa931,	// (0x00030ad1) form2_midp_label_pane_cp

0xeddf,	// (0x00034f7f) form2_midp_string_pane_ParamLimits

0xeddf,	// (0x00034f7f) form2_midp_string_pane

0x6dac,	// (0x0002cf4c) form2_midp_text_pane_ParamLimits

0x6dac,	// (0x0002cf4c) form2_midp_text_pane

0xedf1,	// (0x00034f91) form2_midp_time_pane

0xee01,	// (0x00034fa1) input_focus_pane_cp51_ParamLimits

0xee01,	// (0x00034fa1) input_focus_pane_cp51

0xee19,	// (0x00034fb9) form2_midp_label_pane_t1_ParamLimits

0xee19,	// (0x00034fb9) form2_midp_label_pane_t1

0x6dc5,	// (0x0002cf65) form2_mdip_text_pane_t1_ParamLimits

0x6dc5,	// (0x0002cf65) form2_mdip_text_pane_t1

0x6de2,	// (0x0002cf82) form2_midp_time_pane_t1

0xee61,	// (0x00035001) form2_midp_gauge_slider_pane_t1

0xa952,	// (0x00030af2) form2_midp_gauge_slider_pane_t2

0xa966,	// (0x00030b06) form2_midp_gauge_slider_pane_t3

0x0002,

0xf965,	// (0x00035b05) form2_midp_gauge_slider_pane_t

0xee73,	// (0x00035013) form2_midp_slider_pane

0xee7f,	// (0x0003501f) form2_midp_gauge_wait_pane_t1

0xee8d,	// (0x0003502d) form2_midp_wait_pane_ParamLimits

0xee8d,	// (0x0003502d) form2_midp_wait_pane

0xa97a,	// (0x00030b1a) list_single_2graphic_pane_cp4_ParamLimits

0xa97a,	// (0x00030b1a) list_single_2graphic_pane_cp4

0xa347,	// (0x000304e7) list_single_midp_graphic_pane_cp_ParamLimits

0xa347,	// (0x000304e7) list_single_midp_graphic_pane_cp

0xbb26,	// (0x00031cc6) list_highlight_pane_cp20

0xeeb8,	// (0x00035058) list_single_2graphic_pane_g1_cp4

0xe6cb,	// (0x0003486b) list_single_2graphic_pane_g2_cp4

0xeec0,	// (0x00035060) list_single_2graphic_pane_t1_cp4

0xbb82,	// (0x00031d22) list_highlight_pane_cp21

0xeecf,	// (0x0003506f) list_single_midp_graphic_pane_g4_cp

0xeede,	// (0x0003507e) list_single_midp_graphic_pane_t1_cp

0xa991,	// (0x00030b31) form2_mdip_string_pane_t1_ParamLimits

0xa991,	// (0x00030b31) form2_mdip_string_pane_t1

0xbb26,	// (0x00031cc6) bg_wml_button_pane_cp2

0xbb1c,	// (0x00031cbc) form2_midp_image_pane_g1

0x64e5,	// (0x0002c685) list_double_large_graphic_pane_g5_ParamLimits

0x64e5,	// (0x0002c685) list_double_large_graphic_pane_g5

0xc339,	// (0x000324d9) midp_form_pane_ParamLimits

0xbb82,	// (0x00031d22) main_apps_wheel_pane_ParamLimits

0x9c66,	// (0x0002fe06) popup_preview_window_ParamLimits

0x9c66,	// (0x0002fe06) popup_preview_window

0xcf42,	// (0x000330e2) popup_touch_info_window_ParamLimits

0xcf42,	// (0x000330e2) popup_touch_info_window

0xcf60,	// (0x00033100) popup_touch_menu_window_ParamLimits

0xcf60,	// (0x00033100) popup_touch_menu_window

0xbb12,	// (0x00031cb2) bg_popup_sub_pane_cp6

0xeef3,	// (0x00035093) list_touch_menu_pane

0xeefb,	// (0x0003509b) list_single_touch_menu_pane_ParamLimits

0xeefb,	// (0x0003509b) list_single_touch_menu_pane

0xef0f,	// (0x000350af) list_single_touch_menu_pane_t1

0xbb82,	// (0x00031d22) bg_popup_sub_pane_cp7_ParamLimits

0xbb82,	// (0x00031d22) bg_popup_sub_pane_cp7

0xef1d,	// (0x000350bd) heading_sub_pane

0xef25,	// (0x000350c5) list_touch_info_pane_ParamLimits

0xef25,	// (0x000350c5) list_touch_info_pane

0xef34,	// (0x000350d4) list_single_touch_info_pane_ParamLimits

0xef34,	// (0x000350d4) list_single_touch_info_pane

0xef46,	// (0x000350e6) list_single_touch_info_pane_t1

0xef54,	// (0x000350f4) list_single_touch_info_pane_t2

0x0001,

0x0348,	// (0x000264e8) list_single_touch_info_pane_t

0xcc17,	// (0x00032db7) bg_popup_heading_pane_cp

0xef62,	// (0x00035102) heading_sub_pane_t1

0xd261,	// (0x00033401) bg_popup_preview_window_pane_cp_ParamLimits

0xd261,	// (0x00033401) bg_popup_preview_window_pane_cp

0xef1d,	// (0x000350bd) heading_preview_pane

0xef25,	// (0x000350c5) list_preview_pane_ParamLimits

0xef25,	// (0x000350c5) list_preview_pane

0xef70,	// (0x00035110) popup_preview_window_g1

0xef34,	// (0x000350d4) list_single_preview_pane_ParamLimits

0xef34,	// (0x000350d4) list_single_preview_pane

0xef78,	// (0x00035118) list_single_preview_pane_g1

0xef80,	// (0x00035120) list_single_preview_pane_t1

0xef46,	// (0x000350e6) list_single_preview_pane_t2

0x0001,

0x034d,	// (0x000264ed) list_single_preview_pane_t

0xef8e,	// (0x0003512e) bg_popup_heading_pane_cp2_ParamLimits

0xef8e,	// (0x0003512e) bg_popup_heading_pane_cp2

0xefa4,	// (0x00035144) heading_preview_pane_g1

0xefac,	// (0x0003514c) heading_preview_pane_t1_ParamLimits

0xefac,	// (0x0003514c) heading_preview_pane_t1

0xbbd5,	// (0x00031d75) soft_indicator_pane_t1_ParamLimits

0xc155,	// (0x000322f5) scroll_pane_ParamLimits

0xc539,	// (0x000326d9) scroll_sc2_left_pane

0xc542,	// (0x000326e2) scroll_sc2_right_pane

0xc561,	// (0x00032701) scroll_bg_pane_g1_ParamLimits

0xc576,	// (0x00032716) scroll_bg_pane_g2_ParamLimits

0xc58e,	// (0x0003272e) scroll_bg_pane_g3_ParamLimits

0xf6fb,	// (0x0003589b) scroll_bg_pane_g_ParamLimits

0xc561,	// (0x00032701) scroll_handle_pane_g1_ParamLimits

0xc5b0,	// (0x00032750) scroll_handle_pane_g2_ParamLimits

0xc58e,	// (0x0003272e) scroll_handle_pane_g3_ParamLimits

0xf702,	// (0x000358a2) scroll_handle_pane_g_ParamLimits

0xce8b,	// (0x0003302b) popup_choice_list_window_ParamLimits

0xce8b,	// (0x0003302b) popup_choice_list_window

0xd0bb,	// (0x0003325b) choice_list_pane

0xd13d,	// (0x000332dd) cell_toolbar_pane_t1

0xd165,	// (0x00033305) toolbar_button_pane_ParamLimits

0xe0b2,	// (0x00034252) ai_gene_pane_1_t2_ParamLimits

0xe0b2,	// (0x00034252) ai_gene_pane_1_t2

0x0001,

0x015e,	// (0x000262fe) ai_gene_pane_1_t_ParamLimits

0x015e,	// (0x000262fe) ai_gene_pane_1_t

0xefc9,	// (0x00035169) scroll_sc2_left_pane_g1

0xefc9,	// (0x00035169) scroll_sc2_right_pane_g1

0xc339,	// (0x000324d9) bg_popup_sub_pane_cp10

0xefd3,	// (0x00035173) list_choice_list_pane

0xefea,	// (0x0003518a) list_single_choice_list_pane_ParamLimits

0xefea,	// (0x0003518a) list_single_choice_list_pane

0xc31c,	// (0x000324bc) list_single_choice_list_pane_g1

0xc324,	// (0x000324c4) list_single_choice_list_pane_t1_ParamLimits

0xc324,	// (0x000324c4) list_single_choice_list_pane_t1

0xeffd,	// (0x0003519d) choice_list_pane_g1

0xf005,	// (0x000351a5) choice_list_pane_t1

0xbb12,	// (0x00031cb2) input_focus_pane_cp11

0xc4ae,	// (0x0003264e) title_pane_stacon_g2_ParamLimits

0xc4ae,	// (0x0003264e) title_pane_stacon_g2

0x0002,

0xf6e1,	// (0x00035881) title_pane_stacon_g_ParamLimits

0xf6e1,	// (0x00035881) title_pane_stacon_g

0xcc17,	// (0x00032db7) cursor_press_pane

0x9925,	// (0x0002fac5) popup_fep_hwr_window_ParamLimits

0x9925,	// (0x0002fac5) popup_fep_hwr_window

0xcedf,	// (0x0003307f) popup_fep_vkb_window_ParamLimits

0xcedf,	// (0x0003307f) popup_fep_vkb_window

0xf013,	// (0x000351b3) cursor_press_pane_g1

0x0002,

0xf987,	// (0x00035b27) fep_vkb_side_pane_g_ParamLimits

0x2c8f,	// (0x00028e2f) fep_hwr_candidate_pane_ParamLimits

0x2c8f,	// (0x00028e2f) fep_hwr_candidate_pane

0x2cb9,	// (0x00028e59) fep_hwr_side_pane_ParamLimits

0x2cb9,	// (0x00028e59) fep_hwr_side_pane

0x2cd9,	// (0x00028e79) fep_hwr_top_pane_ParamLimits

0x2cd9,	// (0x00028e79) fep_hwr_top_pane

0x2cf1,	// (0x00028e91) fep_hwr_write_pane_ParamLimits

0x2cf1,	// (0x00028e91) fep_hwr_write_pane

0xf987,	// (0x00035b27) fep_vkb_side_pane_g

0xf01b,	// (0x000351bb) fep_hwr_top_pane_g1

0xf02d,	// (0x000351cd) fep_hwr_top_pane_g2

0x2d2b,	// (0x00028ecb) fep_hwr_top_pane_g3

0x0002,

0xf96c,	// (0x00035b0c) fep_hwr_top_pane_g

0x2d40,	// (0x00028ee0) fep_hwr_top_text_pane

0xc703,	// (0x000328a3) fep_hwr_top_text_pane_g1

0xf063,	// (0x00035203) fep_hwr_top_text_pane_t1

0x2e36,	// (0x00028fd6) fep_hwr_candidate_pane_g1

0xf270,	// (0x00035410) fep_vkb_keypad_pane_g3_ParamLimits

0xf270,	// (0x00035410) fep_vkb_keypad_pane_g3

0xf298,	// (0x00035438) fep_vkb_keypad_pane_g4_ParamLimits

0xf298,	// (0x00035438) fep_vkb_keypad_pane_g4

0xf307,	// (0x000354a7) fep_vkb_bottom_pane_g2_ParamLimits

0xf307,	// (0x000354a7) fep_vkb_bottom_pane_g2

0x0001,

0x037d,	// (0x0002651d) fep_vkb_bottom_pane_g_ParamLimits

0x037d,	// (0x0002651d) fep_vkb_bottom_pane_g

0xefc9,	// (0x00035169) cell_vkb_side_pane_g2

0x0001,

0x0387,	// (0x00026527) cell_vkb_side_pane_g

0xf34b,	// (0x000354eb) cell_vkb_side_pane_t1

0xf359,	// (0x000354f9) cell_vkb_side_pane_t1_copy1

0xefc9,	// (0x00035169) bg_fep_vkb_candidate_pane_g2

0xf435,	// (0x000355d5) cell_vkb_candidate_pane_ParamLimits

0xf071,	// (0x00035211) aid_size_cell_vkb_ParamLimits

0xf071,	// (0x00035211) aid_size_cell_vkb

0xf435,	// (0x000355d5) cell_vkb_candidate_pane

0x2f47,	// (0x000290e7) bg_popup_fep_shadow_pane_g1

0xf0ed,	// (0x0003528d) fep_vkb_bottom_pane_ParamLimits

0xf0ed,	// (0x0003528d) fep_vkb_bottom_pane

0xf12a,	// (0x000352ca) fep_vkb_candidate_pane_ParamLimits

0xf12a,	// (0x000352ca) fep_vkb_candidate_pane

0xf146,	// (0x000352e6) fep_vkb_keypad_pane_ParamLimits

0xf146,	// (0x000352e6) fep_vkb_keypad_pane

0xf18c,	// (0x0003532c) fep_vkb_side_pane_ParamLimits

0xf18c,	// (0x0003532c) fep_vkb_side_pane

0xf1c8,	// (0x00035368) fep_vkb_top_pane_ParamLimits

0xf1c8,	// (0x00035368) fep_vkb_top_pane

0xf204,	// (0x000353a4) fep_vkb_top_pane_g1_ParamLimits

0xf204,	// (0x000353a4) fep_vkb_top_pane_g1

0xf213,	// (0x000353b3) fep_vkb_top_pane_g2_ParamLimits

0xf213,	// (0x000353b3) fep_vkb_top_pane_g2

0xf222,	// (0x000353c2) fep_vkb_top_pane_g3_ParamLimits

0xf222,	// (0x000353c2) fep_vkb_top_pane_g3

0x0003,

0x036d,	// (0x0002650d) fep_vkb_top_pane_g_ParamLimits

0x036d,	// (0x0002650d) fep_vkb_top_pane_g

0xf240,	// (0x000353e0) fep_vkb_top_text_pane_ParamLimits

0xf240,	// (0x000353e0) fep_vkb_top_text_pane

0xaa29,	// (0x00030bc9) fep_vkb_side_pane_g1_ParamLimits

0xaa29,	// (0x00030bc9) fep_vkb_side_pane_g1

0xf25f,	// (0x000353ff) grid_vkb_side_pane_ParamLimits

0xf25f,	// (0x000353ff) grid_vkb_side_pane

0x2f4f,	// (0x000290ef) bg_popup_fep_shadow_pane_g2

0x2f58,	// (0x000290f8) bg_popup_fep_shadow_pane_g3

0x2f60,	// (0x00029100) bg_popup_fep_shadow_pane_g4

0x2f69,	// (0x00029109) bg_popup_fep_shadow_pane_g5

0x2f73,	// (0x00029113) bg_popup_fep_shadow_pane_g6

0x2f7b,	// (0x0002911b) bg_popup_fep_shadow_pane_g7

0xc261,	// (0x00032401) bg_popup_fep_shadow_pane_g8

0xf2b6,	// (0x00035456) grid_vkb_keypad_number_pane_ParamLimits

0xf2b6,	// (0x00035456) grid_vkb_keypad_number_pane

0xf2c6,	// (0x00035466) grid_vkb_keypad_pane_ParamLimits

0xf2c6,	// (0x00035466) grid_vkb_keypad_pane

0xf2ec,	// (0x0003548c) fep_vkb_bottom_pane_g1_ParamLimits

0xf2ec,	// (0x0003548c) fep_vkb_bottom_pane_g1

0xf315,	// (0x000354b5) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xf315,	// (0x000354b5) grid_vkb_keypad_bottom_left_pane

0xf32a,	// (0x000354ca) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xf32a,	// (0x000354ca) grid_vkb_keypad_bottom_right_pane

0xf33f,	// (0x000354df) fep_vkb_top_text_pane_g1

0xaa70,	// (0x00030c10) fep_vkb_top_text_pane_t1

0xaa82,	// (0x00030c22) cell_vkb_side_pane_ParamLimits

0xaa82,	// (0x00030c22) cell_vkb_side_pane

0xefc9,	// (0x00035169) cell_vkb_side_pane_g1

0xf367,	// (0x00035507) cell_vkb_keypad_pane_ParamLimits

0xf367,	// (0x00035507) cell_vkb_keypad_pane

0xf3e2,	// (0x00035582) cell_vkb_keypad_pane_g1

0x0008,

0xf993,	// (0x00035b33) bg_popup_fep_shadow_pane_g

0x2f8d,	// (0x0002912d) cell_hwr_side_pane_g1

0x2f8d,	// (0x0002912d) cell_hwr_side_pane_g2

0xf3ec,	// (0x0003558c) cell_vkb_keypad_pane_t1

0xaa98,	// (0x00030c38) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xaa98,	// (0x00030c38) cell_vkb_keypad_bottom_left_pane

0xaaad,	// (0x00030c4d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xaaad,	// (0x00030c4d) cell_vkb_keypad_bottom_right_pane

0xefc9,	// (0x00035169) cell_vkb_keypad_bottom_left_pane_g1

0xefc9,	// (0x00035169) cell_vkb_keypad_bottom_right_pane_g1

0xf3fa,	// (0x0003559a) cell_vkb_keypad_number_pane_ParamLimits

0xf3fa,	// (0x0003559a) cell_vkb_keypad_number_pane

0xf419,	// (0x000355b9) cell_vkb_keypad_number_pane_g1

0xf423,	// (0x000355c3) cell_vkb_keypad_number_pane_g2

0xf42c,	// (0x000355cc) cell_vkb_keypad_number_pane_g3

0x0002,

0x038c,	// (0x0002652c) cell_vkb_keypad_number_pane_g

0xf3ec,	// (0x0003558c) cell_vkb_keypad_number_pane_t1

0xf452,	// (0x000355f2) fep_vkb_candidate_pane_g1

0x0001,

0xf9a6,	// (0x00035b46) cell_hwr_side_pane_g

0xf46b,	// (0x0003560b) cell_hwr_side_pane_t1

0x2f97,	// (0x00029137) cell_hwr_side_pane_t1_copy1

0x2fa5,	// (0x00029145) cell_hwr_candidate_pane_g1

0x2fd4,	// (0x00029174) cell_hwr_candidate_pane_t1

0xefc9,	// (0x00035169) cell_vkb_candidate_pane_g2

0xf4af,	// (0x0003564f) cell_vkb_candidate_pane_t1

0x2c56,	// (0x00028df6) bg_popup_fep_shadow_pane_ParamLimits

0x2c56,	// (0x00028df6) bg_popup_fep_shadow_pane

0x2d0b,	// (0x00028eab) bg_fep_hwr_top_pane_g4

0xf03f,	// (0x000351df) bg_hwr_side_pane_g1_ParamLimits

0xf03f,	// (0x000351df) bg_hwr_side_pane_g1

0x8869,	// (0x0002ea09) cell_hwr_side_pane_ParamLimits

0x8869,	// (0x0002ea09) cell_hwr_side_pane

0x2db7,	// (0x00028f57) fep_hwr_write_pane_g1_ParamLimits

0x2db7,	// (0x00028f57) fep_hwr_write_pane_g1

0x2dc4,	// (0x00028f64) fep_hwr_write_pane_g2_ParamLimits

0x2dc4,	// (0x00028f64) fep_hwr_write_pane_g2

0x2dd1,	// (0x00028f71) fep_hwr_write_pane_g3_ParamLimits

0x2dd1,	// (0x00028f71) fep_hwr_write_pane_g3

0x8889,	// (0x0002ea29) fep_hwr_write_pane_g4_ParamLimits

0x8889,	// (0x0002ea29) fep_hwr_write_pane_g4

0x0005,

0xf973,	// (0x00035b13) fep_hwr_write_pane_g_ParamLimits

0xf973,	// (0x00035b13) fep_hwr_write_pane_g

0x2d0b,	// (0x00028eab) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2d0b,	// (0x00028eab) bg_fep_hwr_candidate_pane_g2

0x2df4,	// (0x00028f94) cell_hwr_candidate_pane_ParamLimits

0x2df4,	// (0x00028f94) cell_hwr_candidate_pane

0x2e36,	// (0x00028fd6) fep_hwr_candidate_pane_g1_ParamLimits

0xf09f,	// (0x0003523f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xf09f,	// (0x0003523f) bg_popup_fep_shadow_pane_cp2

0xf232,	// (0x000353d2) fep_vkb_top_pane_g4_ParamLimits

0xf232,	// (0x000353d2) fep_vkb_top_pane_g4

0xf251,	// (0x000353f1) fep_vkb_side_pane_g2_ParamLimits

0xf251,	// (0x000353f1) fep_vkb_side_pane_g2

0x913c,	// (0x0002f2dc) list_setting_pane_t4_ParamLimits

0x913c,	// (0x0002f2dc) list_setting_pane_t4

0x91d6,	// (0x0002f376) list_setting_number_pane_t5_ParamLimits

0x91d6,	// (0x0002f376) list_setting_number_pane_t5

0x94b8,	// (0x0002f658) list_double_heading_pane_cp2_ParamLimits

0x94b8,	// (0x0002f658) list_double_heading_pane_cp2

0xc1fc,	// (0x0003239c) list_double_heading_pane_g1_cp2_ParamLimits

0xc1fc,	// (0x0003239c) list_double_heading_pane_g1_cp2

0xc208,	// (0x000323a8) list_double_heading_pane_g2_cp2_ParamLimits

0xc208,	// (0x000323a8) list_double_heading_pane_g2_cp2

0xf4bd,	// (0x0003565d) list_double_heading_pane_t1_cp2_ParamLimits

0xf4bd,	// (0x0003565d) list_double_heading_pane_t1_cp2

0xf4d3,	// (0x00035673) list_double_heading_pane_t2_cp2_ParamLimits

0xf4d3,	// (0x00035673) list_double_heading_pane_t2_cp2

0xbb0a,	// (0x00031caa) aid_value_unit2

0x0a9b,	// (0x00026c3b) popup_preview_fixed_window

0xbcb5,	// (0x00031e55) bg_popup_preview_window_pane_cp02

0xf4e5,	// (0x00035685) list_preview_fixed_pane

0xf52b,	// (0x000356cb) list_empty_pane_fp_ParamLimits

0xf52b,	// (0x000356cb) list_empty_pane_fp

0xf52b,	// (0x000356cb) list_single_cale_day_pane_fp_ParamLimits

0xf52b,	// (0x000356cb) list_single_cale_day_pane_fp

0xf52b,	// (0x000356cb) list_single_graphic_heading_pane_fp_ParamLimits

0xf52b,	// (0x000356cb) list_single_graphic_heading_pane_fp

0xf52b,	// (0x000356cb) list_single_graphic_pane_fp_ParamLimits

0xf52b,	// (0x000356cb) list_single_graphic_pane_fp

0xf52b,	// (0x000356cb) list_single_heading_pane_fp_ParamLimits

0xf52b,	// (0x000356cb) list_single_heading_pane_fp

0xf52b,	// (0x000356cb) list_single_pane_fp_ParamLimits

0xf52b,	// (0x000356cb) list_single_pane_fp

0xf542,	// (0x000356e2) list_single_pane_fp_g1_ParamLimits

0xf542,	// (0x000356e2) list_single_pane_fp_g1

0x647d,	// (0x0002c61d) list_single_pane_fp_g2_ParamLimits

0x647d,	// (0x0002c61d) list_single_pane_fp_g2

0x6df5,	// (0x0002cf95) list_single_pane_fp_g3_ParamLimits

0x6df5,	// (0x0002cf95) list_single_pane_fp_g3

0xf54e,	// (0x000356ee) list_single_pane_fp_g4_ParamLimits

0xf54e,	// (0x000356ee) list_single_pane_fp_g4

0x0003,

0xf9b2,	// (0x00035b52) list_single_pane_fp_g_ParamLimits

0xf9b2,	// (0x00035b52) list_single_pane_fp_g

0x6e09,	// (0x0002cfa9) list_single_pane_fp_t1_ParamLimits

0x6e09,	// (0x0002cfa9) list_single_pane_fp_t1

0x6e20,	// (0x0002cfc0) list_single_graphic_pane_fp_g1_ParamLimits

0x6e20,	// (0x0002cfc0) list_single_graphic_pane_fp_g1

0xf542,	// (0x000356e2) list_single_graphic_pane_fp_g2_ParamLimits

0xf542,	// (0x000356e2) list_single_graphic_pane_fp_g2

0x647d,	// (0x0002c61d) list_single_graphic_pane_fp_g3_ParamLimits

0x647d,	// (0x0002c61d) list_single_graphic_pane_fp_g3

0x6df5,	// (0x0002cf95) list_single_graphic_pane_fp_g4_ParamLimits

0x6df5,	// (0x0002cf95) list_single_graphic_pane_fp_g4

0xf54e,	// (0x000356ee) list_single_graphic_pane_fp_g5_ParamLimits

0xf54e,	// (0x000356ee) list_single_graphic_pane_fp_g5

0x0004,

0xf9bb,	// (0x00035b5b) list_single_graphic_pane_fp_g_ParamLimits

0xf9bb,	// (0x00035b5b) list_single_graphic_pane_fp_g

0x6e2c,	// (0x0002cfcc) list_single_graphic_pane_fp_t1_ParamLimits

0x6e2c,	// (0x0002cfcc) list_single_graphic_pane_fp_t1

0x6e20,	// (0x0002cfc0) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6e20,	// (0x0002cfc0) list_single_graphic_heading_pane_fp_g1

0xf542,	// (0x000356e2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xf542,	// (0x000356e2) list_single_graphic_heading_pane_fp_g2

0x647d,	// (0x0002c61d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x647d,	// (0x0002c61d) list_single_graphic_heading_pane_fp_g3

0x6df5,	// (0x0002cf95) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6df5,	// (0x0002cf95) list_single_graphic_heading_pane_fp_g4

0xf54e,	// (0x000356ee) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xf54e,	// (0x000356ee) list_single_graphic_heading_pane_fp_g5

0x0004,

0xf9bb,	// (0x00035b5b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xf9bb,	// (0x00035b5b) list_single_graphic_heading_pane_fp_g

0x6e42,	// (0x0002cfe2) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6e42,	// (0x0002cfe2) list_single_graphic_heading_pane_fp_t1

0x6e58,	// (0x0002cff8) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6e58,	// (0x0002cff8) list_single_graphic_heading_pane_fp_t2

0x0001,

0xf9c6,	// (0x00035b66) list_single_graphic_heading_pane_fp_t_ParamLimits

0xf9c6,	// (0x00035b66) list_single_graphic_heading_pane_fp_t

0x6e6a,	// (0x0002d00a) list_single_cale_day_pane_fp_g1_ParamLimits

0x6e6a,	// (0x0002d00a) list_single_cale_day_pane_fp_g1

0xf55a,	// (0x000356fa) list_single_cale_day_pane_fp_g2_ParamLimits

0xf55a,	// (0x000356fa) list_single_cale_day_pane_fp_g2

0x6ea2,	// (0x0002d042) list_single_cale_day_pane_fp_g3_ParamLimits

0x6ea2,	// (0x0002d042) list_single_cale_day_pane_fp_g3

0x6eca,	// (0x0002d06a) list_single_cale_day_pane_fp_g4_ParamLimits

0x6eca,	// (0x0002d06a) list_single_cale_day_pane_fp_g4

0x6eee,	// (0x0002d08e) list_single_cale_day_pane_fp_g5_ParamLimits

0x6eee,	// (0x0002d08e) list_single_cale_day_pane_fp_g5

0x0004,

0xf9cb,	// (0x00035b6b) list_single_cale_day_pane_fp_g_ParamLimits

0xf9cb,	// (0x00035b6b) list_single_cale_day_pane_fp_g

0x6f12,	// (0x0002d0b2) list_single_cale_day_pane_fp_t1_ParamLimits

0x6f12,	// (0x0002d0b2) list_single_cale_day_pane_fp_t1

0x6f38,	// (0x0002d0d8) list_single_cale_day_pane_fp_t2_ParamLimits

0x6f38,	// (0x0002d0d8) list_single_cale_day_pane_fp_t2

0x6f51,	// (0x0002d0f1) list_single_cale_day_pane_fp_t3_ParamLimits

0x6f51,	// (0x0002d0f1) list_single_cale_day_pane_fp_t3

0x0002,

0xf9d6,	// (0x00035b76) list_single_cale_day_pane_fp_t_ParamLimits

0xf9d6,	// (0x00035b76) list_single_cale_day_pane_fp_t

0xf542,	// (0x000356e2) list_empty_pane_fp_g1_ParamLimits

0xf542,	// (0x000356e2) list_empty_pane_fp_g1

0x6f6a,	// (0x0002d10a) list_empty_pane_fp_t1

0x6f78,	// (0x0002d118) list_empty_pane_fp_t2

0x0001,

0xf9dd,	// (0x00035b7d) list_empty_pane_fp_t

0xf542,	// (0x000356e2) list_single_heading_pane_fp_g1_ParamLimits

0xf542,	// (0x000356e2) list_single_heading_pane_fp_g1

0x647d,	// (0x0002c61d) list_single_heading_pane_fp_g2_ParamLimits

0x647d,	// (0x0002c61d) list_single_heading_pane_fp_g2

0x6df5,	// (0x0002cf95) list_single_heading_pane_fp_g3_ParamLimits

0x6df5,	// (0x0002cf95) list_single_heading_pane_fp_g3

0x0002,

0xf9e2,	// (0x00035b82) list_single_heading_pane_fp_g_ParamLimits

0xf9e2,	// (0x00035b82) list_single_heading_pane_fp_g

0x6f86,	// (0x0002d126) list_single_heading_pane_fp_t1_ParamLimits

0x6f86,	// (0x0002d126) list_single_heading_pane_fp_t1

0x6f98,	// (0x0002d138) list_single_heading_pane_fp_t2_ParamLimits

0x6f98,	// (0x0002d138) list_single_heading_pane_fp_t2

0x0001,

0xf9e9,	// (0x00035b89) list_single_heading_pane_fp_t_ParamLimits

0xf9e9,	// (0x00035b89) list_single_heading_pane_fp_t

0xc345,	// (0x000324e5) aid_size_cell_fast

0xbc98,	// (0x00031e38) soft_indicator_pane_cp1_t1

0xc382,	// (0x00032522) cell_app_pane_cp2_ParamLimits

0xc382,	// (0x00032522) cell_app_pane_cp2

0x2c78,	// (0x00028e18) fep_hwr_candidate_drop_down_list_pane

0x2e50,	// (0x00028ff0) fep_hwr_candidate_pane_g3_ParamLimits

0x2e50,	// (0x00028ff0) fep_hwr_candidate_pane_g3

0xb5e1,	// (0x00031781) fep_hwr_candidate_pane_g4_ParamLimits

0xb5e1,	// (0x00031781) fep_hwr_candidate_pane_g4

0x0002,

0xf980,	// (0x00035b20) fep_hwr_candidate_pane_g_ParamLimits

0xf980,	// (0x00035b20) fep_hwr_candidate_pane_g

0xf119,	// (0x000352b9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xf119,	// (0x000352b9) fep_vkb_candidate_drop_down_list_pane

0xf45a,	// (0x000355fa) fep_vkb_candidate_pane_g3

0xf462,	// (0x00035602) fep_vkb_candidate_pane_g4

0x0002,

0x0393,	// (0x00026533) fep_vkb_candidate_pane_g

0x2fa5,	// (0x00029145) cell_hwr_candidate_pane_g1_ParamLimits

0x2fb3,	// (0x00029153) cell_hwr_candidate_pane_g3_ParamLimits

0x2fb3,	// (0x00029153) cell_hwr_candidate_pane_g3

0x4337,	// (0x0002a4d7) cell_hwr_candidate_pane_g4_ParamLimits

0x4337,	// (0x0002a4d7) cell_hwr_candidate_pane_g4

0x0002,

0xf9ab,	// (0x00035b4b) cell_hwr_candidate_pane_g_ParamLimits

0xf9ab,	// (0x00035b4b) cell_hwr_candidate_pane_g

0xf479,	// (0x00035619) cell_vkb_candidate_pane_g3_ParamLimits

0xf479,	// (0x00035619) cell_vkb_candidate_pane_g3

0xf494,	// (0x00035634) cell_vkb_candidate_pane_g4_ParamLimits

0xf494,	// (0x00035634) cell_vkb_candidate_pane_g4

0x2ff2,	// (0x00029192) cell_app_pane_cp2_g1_ParamLimits

0x2ff2,	// (0x00029192) cell_app_pane_cp2_g1

0x3010,	// (0x000291b0) cell_app_pane_cp2_g2_ParamLimits

0x3010,	// (0x000291b0) cell_app_pane_cp2_g2

0x0001,

0xf9ee,	// (0x00035b8e) cell_app_pane_cp2_g_ParamLimits

0xf9ee,	// (0x00035b8e) cell_app_pane_cp2_g

0x301c,	// (0x000291bc) cell_app_pane_cp2_t1_ParamLimits

0x301c,	// (0x000291bc) cell_app_pane_cp2_t1

0xc1e2,	// (0x00032382) grid_highlight_pane_cp1_ParamLimits

0xc1e2,	// (0x00032382) grid_highlight_pane_cp1

0x302e,	// (0x000291ce) cell_hwr_candidate_pane_cp1_ParamLimits

0x302e,	// (0x000291ce) cell_hwr_candidate_pane_cp1

0x2fa5,	// (0x00029145) fep_hwr_candidate_drop_down_list_pane_g1

0x304d,	// (0x000291ed) fep_hwr_candidate_drop_down_list_pane_g2

0x305a,	// (0x000291fa) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xf9f3,	// (0x00035b93) fep_hwr_candidate_drop_down_list_pane_g

0x3067,	// (0x00029207) fep_hwr_candidate_drop_down_list_scroll_pane

0x3070,	// (0x00029210) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x3070,	// (0x00029210) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x307d,	// (0x0002921d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x307d,	// (0x0002921d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x308a,	// (0x0002922a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x308a,	// (0x0002922a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x3097,	// (0x00029237) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x3097,	// (0x00029237) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x30b2,	// (0x00029252) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x30b2,	// (0x00029252) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x30cd,	// (0x0002926d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x30cd,	// (0x0002926d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x30e8,	// (0x00029288) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x30e8,	// (0x00029288) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x3103,	// (0x000292a3) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x3103,	// (0x000292a3) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xf9fa,	// (0x00035b9a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xf9fa,	// (0x00035b9a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x311e,	// (0x000292be) cell_vkb_candidate_pane_cp1_ParamLimits

0x311e,	// (0x000292be) cell_vkb_candidate_pane_cp1

0xf232,	// (0x000353d2) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xf232,	// (0x000353d2) fep_vkb_candidate_drop_down_list_pane_g1

0x313e,	// (0x000292de) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x313e,	// (0x000292de) fep_vkb_candidate_drop_down_list_pane_g2

0x314b,	// (0x000292eb) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x314b,	// (0x000292eb) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfa0b,	// (0x00035bab) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfa0b,	// (0x00035bab) fep_vkb_candidate_drop_down_list_pane_g

0x3158,	// (0x000292f8) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x3158,	// (0x000292f8) fep_vkb_candidate_drop_down_list_scroll_pane

0x3165,	// (0x00029305) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x3165,	// (0x00029305) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x3172,	// (0x00029312) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x3172,	// (0x00029312) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x317e,	// (0x0002931e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x317e,	// (0x0002931e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x318a,	// (0x0002932a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x318a,	// (0x0002932a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x31ab,	// (0x0002934b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x31ab,	// (0x0002934b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x31cc,	// (0x0002936c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x31cc,	// (0x0002936c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x31ed,	// (0x0002938d) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x31ed,	// (0x0002938d) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x320e,	// (0x000293ae) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x320e,	// (0x000293ae) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfa12,	// (0x00035bb2) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfa12,	// (0x00035bb2) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8d0e,	// (0x0002eeae) title_pane_g1_ParamLimits

0x8d21,	// (0x0002eec1) title_pane_g2_ParamLimits

0xf566,	// (0x00035706) title_pane_g_ParamLimits

0xc6f3,	// (0x00032893) aid_call2_pane

0xc6fb,	// (0x0003289b) aid_call_pane

0xc703,	// (0x000328a3) popup_clock_analogue_window_g1

0xc703,	// (0x000328a3) popup_clock_analogue_window_g2

0x121a,	// (0x000273ba) popup_clock_analogue_window_g3

0x1223,	// (0x000273c3) popup_clock_analogue_window_g4

0xbb1c,	// (0x00031cbc) popup_clock_analogue_window_g5

0x0004,

0xf710,	// (0x000358b0) popup_clock_analogue_window_g

0x122b,	// (0x000273cb) popup_clock_analogue_window_t1

0x1262,	// (0x00027402) clock_digital_number_pane_ParamLimits

0x1262,	// (0x00027402) clock_digital_number_pane

0x126e,	// (0x0002740e) clock_digital_number_pane_cp02_ParamLimits

0x126e,	// (0x0002740e) clock_digital_number_pane_cp02

0x127a,	// (0x0002741a) clock_digital_number_pane_cp03_ParamLimits

0x127a,	// (0x0002741a) clock_digital_number_pane_cp03

0x1286,	// (0x00027426) clock_digital_number_pane_cp04_ParamLimits

0x1286,	// (0x00027426) clock_digital_number_pane_cp04

0x1292,	// (0x00027432) clock_digital_separator_pane_ParamLimits

0x1292,	// (0x00027432) clock_digital_separator_pane

0x129e,	// (0x0002743e) popup_clock_digital_window_t1_ParamLimits

0x129e,	// (0x0002743e) popup_clock_digital_window_t1

0xbb1c,	// (0x00031cbc) clock_digital_number_pane_g1

0xbb1c,	// (0x00031cbc) clock_digital_number_pane_g2

0x0001,

0xf71b,	// (0x000358bb) clock_digital_number_pane_g

0xbb1c,	// (0x00031cbc) clock_digital_separator_pane_g1

0xbb1c,	// (0x00031cbc) clock_digital_separator_pane_g2

0x0001,

0xf71b,	// (0x000358bb) clock_digital_separator_pane_g

0x9f0a,	// (0x000300aa) aid_fill_nsta_ParamLimits

0xa040,	// (0x000301e0) indicator_nsta_pane_ParamLimits

0xd064,	// (0x00033204) popup_clock_analogue_window

0xd064,	// (0x00033204) popup_clock_digital_window

0xd04e,	// (0x000331ee) grid_indicator_nsta_pane_ParamLimits

0xec52,	// (0x00034df2) clock_nsta_pane_t2

0x0001,

0x02e6,	// (0x00026486) clock_nsta_pane_t

0x11de,	// (0x0002737e) aid_size_max_handle

0x8518,	// (0x0002e6b8) aid_size_min_handle

0xcc17,	// (0x00032db7) editor_scroll_pane

0x3229,	// (0x000293c9) ex_editor_pane

0xc301,	// (0x000324a1) scroll_pane_cp13

0xc181,	// (0x00032321) scroll_pane_cp14

0xc732,	// (0x000328d2) scroll_pane_cp36

0x94c9,	// (0x0002f669) list_single_graphic_hl_pane_cp2_ParamLimits

0x94c9,	// (0x0002f669) list_single_graphic_hl_pane_cp2

0xa6ff,	// (0x0003089f) list_single_graphic_hl_pane_ParamLimits

0xa6ff,	// (0x0003089f) list_single_graphic_hl_pane

0x6fae,	// (0x0002d14e) aid_size_min_hl_cp1

0x3231,	// (0x000293d1) list_highlight_pane_cp34_ParamLimits

0x3231,	// (0x000293d1) list_highlight_pane_cp34

0x3242,	// (0x000293e2) list_single_graphic_hl_pane_g1_ParamLimits

0x3242,	// (0x000293e2) list_single_graphic_hl_pane_g1

0x9582,	// (0x0002f722) list_single_graphic_hl_pane_g2_ParamLimits

0x9582,	// (0x0002f722) list_single_graphic_hl_pane_g2

0x9582,	// (0x0002f722) list_single_graphic_hl_pane_g3_ParamLimits

0x9582,	// (0x0002f722) list_single_graphic_hl_pane_g3

0x6fc3,	// (0x0002d163) list_single_graphic_hl_pane_g4_ParamLimits

0x6fc3,	// (0x0002d163) list_single_graphic_hl_pane_g4

0x6fcf,	// (0x0002d16f) list_single_graphic_hl_pane_g5_ParamLimits

0x6fcf,	// (0x0002d16f) list_single_graphic_hl_pane_g5

0x0004,

0xfa23,	// (0x00035bc3) list_single_graphic_hl_pane_g_ParamLimits

0xfa23,	// (0x00035bc3) list_single_graphic_hl_pane_g

0x6fe3,	// (0x0002d183) list_single_graphic_hl_pane_t1_ParamLimits

0x6fe3,	// (0x0002d183) list_single_graphic_hl_pane_t1

0x324f,	// (0x000293ef) aid_size_min_hl_cp2

0x3258,	// (0x000293f8) list_highlight_pane_cp34_cp2_ParamLimits

0x3258,	// (0x000293f8) list_highlight_pane_cp34_cp2

0x3242,	// (0x000293e2) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x3242,	// (0x000293e2) list_single_graphic_hl_pane_g1_cp2

0x3265,	// (0x00029405) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x3265,	// (0x00029405) list_single_graphic_hl_pane_g2_cp2

0x3271,	// (0x00029411) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x3271,	// (0x00029411) list_single_graphic_hl_pane_g3_cp2

0xcb4e,	// (0x00032cee) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcb4e,	// (0x00032cee) list_single_graphic_hl_pane_g4_cp2

0x327f,	// (0x0002941f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x327f,	// (0x0002941f) list_single_graphic_hl_pane_g5_cp2

0x856f,	// (0x0002e70f) control_pane_g4_ParamLimits

0x856f,	// (0x0002e70f) control_pane_g4

0xc339,	// (0x000324d9) bg_popup_sub_pane_cp10_ParamLimits

0xefd3,	// (0x00035173) list_choice_list_pane_ParamLimits

0xefe2,	// (0x00035182) scroll_pane_cp23

0xbcb5,	// (0x00031e55) bg_popup_preview_window_pane_cp02_ParamLimits

0xf4e5,	// (0x00035685) list_preview_fixed_pane_ParamLimits

0xf4fb,	// (0x0003569b) list_preview_fixed_pane_cp_ParamLimits

0xf4fb,	// (0x0003569b) list_preview_fixed_pane_cp

0xf507,	// (0x000356a7) popup_preview_fixed_window_g1_ParamLimits

0xf507,	// (0x000356a7) popup_preview_fixed_window_g1

0xf513,	// (0x000356b3) popup_preview_fixed_window_g2_ParamLimits

0xf513,	// (0x000356b3) popup_preview_fixed_window_g2

0x0002,

0x03b4,	// (0x00026554) popup_preview_fixed_window_g_ParamLimits

0x03b4,	// (0x00026554) popup_preview_fixed_window_g

0x10ba,	// (0x0002725a) aid_navi_side_left_pane_ParamLimits

0x10cf,	// (0x0002726f) aid_navi_side_right_pane_ParamLimits

0x10e7,	// (0x00027287) navi_icon_pane_stacon_ParamLimits

0x10fb,	// (0x0002729b) navi_navi_pane_stacon_ParamLimits

0x10e7,	// (0x00027287) navi_text_pane_stacon_ParamLimits

0xbb12,	// (0x00031cb2) main_text_info_pane

0x32a9,	// (0x00029449) listscroll_text_info_pane

0x32b1,	// (0x00029451) list_text_info_pane_ParamLimits

0x32b1,	// (0x00029451) list_text_info_pane

0x32c0,	// (0x00029460) scroll_pane_cp24_ParamLimits

0x32c0,	// (0x00029460) scroll_pane_cp24

0xaac8,	// (0x00030c68) list_text_info_pane_t1_ParamLimits

0xaac8,	// (0x00030c68) list_text_info_pane_t1

0x989a,	// (0x0002fa3a) popup_fast_swap2_window_ParamLimits

0x989a,	// (0x0002fa3a) popup_fast_swap2_window

0x3317,	// (0x000294b7) aid_size_cell_fast2

0xbb12,	// (0x00031cb2) bg_popup_window_pane_cp17

0xd508,	// (0x000336a8) heading_pane_cp2

0xbf06,	// (0x000320a6) listscroll_fast2_pane

0x3321,	// (0x000294c1) grid_fast2_pane

0x332b,	// (0x000294cb) listscroll_fast2_pane_g1

0x3333,	// (0x000294d3) listscroll_fast2_pane_g2

0x0001,

0xfa2e,	// (0x00035bce) listscroll_fast2_pane_g

0xc301,	// (0x000324a1) scroll_pane_cp26

0x333d,	// (0x000294dd) cell_fast2_pane_ParamLimits

0x333d,	// (0x000294dd) cell_fast2_pane

0x3352,	// (0x000294f2) cell_fast2_pane_g1

0x335b,	// (0x000294fb) cell_fast2_pane_g2

0x3364,	// (0x00029504) cell_fast2_pane_g3

0x0002,

0xfa33,	// (0x00035bd3) cell_fast2_pane_g

0xbf48,	// (0x000320e8) grid_highlight_pane_cp9

0xbf5d,	// (0x000320fd) main_eswt_pane_ParamLimits

0xbf5d,	// (0x000320fd) main_eswt_pane

0x32d5,	// (0x00029475) list_single_text_info_pane

0x336c,	// (0x0002950c) eswt_ctrl_button_pane

0x336c,	// (0x0002950c) eswt_ctrl_canvas_pane

0x3374,	// (0x00029514) eswt_ctrl_combo_pane

0x336c,	// (0x0002950c) eswt_ctrl_default_pane

0x336c,	// (0x0002950c) eswt_ctrl_label_pane

0x337c,	// (0x0002951c) eswt_ctrl_wait_pane

0x3384,	// (0x00029524) eswt_shell_pane

0xbb12,	// (0x00031cb2) listscroll_eswt_app_pane

0x33a4,	// (0x00029544) popup_eswt_tasktip_window_ParamLimits

0x33a4,	// (0x00029544) popup_eswt_tasktip_window

0xd261,	// (0x00033401) bg_popup_window_pane_cp18

0x33b5,	// (0x00029555) eswt_control_pane_g1_ParamLimits

0x33b5,	// (0x00029555) eswt_control_pane_g1

0x33c2,	// (0x00029562) eswt_control_pane_g2_ParamLimits

0x33c2,	// (0x00029562) eswt_control_pane_g2

0x33cf,	// (0x0002956f) eswt_control_pane_g3_ParamLimits

0x33cf,	// (0x0002956f) eswt_control_pane_g3

0x33dc,	// (0x0002957c) eswt_control_pane_g4_ParamLimits

0x33dc,	// (0x0002957c) eswt_control_pane_g4

0x0003,

0xfa3a,	// (0x00035bda) eswt_control_pane_g_ParamLimits

0xfa3a,	// (0x00035bda) eswt_control_pane_g

0xc1e2,	// (0x00032382) bg_button_pane_ParamLimits

0xc1e2,	// (0x00032382) bg_button_pane

0xbf5d,	// (0x000320fd) common_borders_pane_copy2_ParamLimits

0xbf5d,	// (0x000320fd) common_borders_pane_copy2

0x33e9,	// (0x00029589) control_button_pane_g1_ParamLimits

0x33e9,	// (0x00029589) control_button_pane_g1

0x33f5,	// (0x00029595) control_button_pane_g2_ParamLimits

0x33f5,	// (0x00029595) control_button_pane_g2

0x3401,	// (0x000295a1) control_button_pane_g3_ParamLimits

0x3401,	// (0x000295a1) control_button_pane_g3

0x0002,

0xfa43,	// (0x00035be3) control_button_pane_g_ParamLimits

0xfa43,	// (0x00035be3) control_button_pane_g

0x3415,	// (0x000295b5) control_button_pane_t1

0x3423,	// (0x000295c3) control_button_pane_t2

0x0001,

0xfa4a,	// (0x00035bea) control_button_pane_t

0xd171,	// (0x00033311) bg_button_pane_g1

0xd181,	// (0x00033321) bg_button_pane_g2

0xd179,	// (0x00033319) bg_button_pane_g3

0xd191,	// (0x00033331) bg_button_pane_g4

0xd189,	// (0x00033329) bg_button_pane_g5

0xd199,	// (0x00033339) bg_button_pane_g6

0xd1a1,	// (0x00033341) bg_button_pane_g7

0xd1b1,	// (0x00033351) bg_button_pane_g8

0xd1a9,	// (0x00033349) bg_button_pane_g9

0x0008,

0xf814,	// (0x000359b4) bg_button_pane_g

0xef8e,	// (0x0003512e) common_borders_pane_ParamLimits

0xef8e,	// (0x0003512e) common_borders_pane

0x33b5,	// (0x00029555) eswt_control_pane_g1_copy1_ParamLimits

0x33b5,	// (0x00029555) eswt_control_pane_g1_copy1

0x33c2,	// (0x00029562) eswt_control_pane_g2_copy1_ParamLimits

0x33c2,	// (0x00029562) eswt_control_pane_g2_copy1

0x33cf,	// (0x0002956f) eswt_control_pane_g3_copy1_ParamLimits

0x33cf,	// (0x0002956f) eswt_control_pane_g3_copy1

0x33dc,	// (0x0002957c) eswt_control_pane_g4_copy1_ParamLimits

0x33dc,	// (0x0002957c) eswt_control_pane_g4_copy1

0xefc9,	// (0x00035169) bg_eswt_ctrl_canvas_pane_g1

0xef8e,	// (0x0003512e) common_borders_pane_cp2_ParamLimits

0xef8e,	// (0x0003512e) common_borders_pane_cp2

0xef8e,	// (0x0003512e) common_borders_pane_cp3_ParamLimits

0xef8e,	// (0x0003512e) common_borders_pane_cp3

0x3431,	// (0x000295d1) separator_horizontal_pane

0x3439,	// (0x000295d9) separator_vertical_pane

0x33b5,	// (0x00029555) eswt_control_pane_g1_copy2_ParamLimits

0x33b5,	// (0x00029555) eswt_control_pane_g1_copy2

0x33c2,	// (0x00029562) eswt_control_pane_g2_copy2_ParamLimits

0x33c2,	// (0x00029562) eswt_control_pane_g2_copy2

0x33cf,	// (0x0002956f) eswt_control_pane_g3_copy2_ParamLimits

0x33cf,	// (0x0002956f) eswt_control_pane_g3_copy2

0x33dc,	// (0x0002957c) eswt_control_pane_g4_copy2_ParamLimits

0x33dc,	// (0x0002957c) eswt_control_pane_g4_copy2

0xbb12,	// (0x00031cb2) common_borders_pane_cp4

0x3442,	// (0x000295e2) separator_horizontal_pane_g1

0x344b,	// (0x000295eb) separator_horizontal_pane_g2

0x3454,	// (0x000295f4) separator_horizontal_pane_g3

0x0002,

0xfa4f,	// (0x00035bef) separator_horizontal_pane_g

0x33b5,	// (0x00029555) eswt_control_pane_g1_copy3_ParamLimits

0x33b5,	// (0x00029555) eswt_control_pane_g1_copy3

0x33c2,	// (0x00029562) eswt_control_pane_g2_copy3_ParamLimits

0x33c2,	// (0x00029562) eswt_control_pane_g2_copy3

0x33cf,	// (0x0002956f) eswt_control_pane_g3_copy3_ParamLimits

0x33cf,	// (0x0002956f) eswt_control_pane_g3_copy3

0x33dc,	// (0x0002957c) eswt_control_pane_g4_copy3_ParamLimits

0x33dc,	// (0x0002957c) eswt_control_pane_g4_copy3

0xbb12,	// (0x00031cb2) common_borders_pane_cp5

0x345d,	// (0x000295fd) separator_vertical_pane_g1

0x3466,	// (0x00029606) separator_vertical_pane_g2

0x346f,	// (0x0002960f) separator_vertical_pane_g3

0x0002,

0xfa56,	// (0x00035bf6) separator_vertical_pane_g

0x33b5,	// (0x00029555) eswt_control_pane_g1_copy4_ParamLimits

0x33b5,	// (0x00029555) eswt_control_pane_g1_copy4

0x33c2,	// (0x00029562) eswt_control_pane_g2_copy4_ParamLimits

0x33c2,	// (0x00029562) eswt_control_pane_g2_copy4

0x33cf,	// (0x0002956f) eswt_control_pane_g3_copy4_ParamLimits

0x33cf,	// (0x0002956f) eswt_control_pane_g3_copy4

0x33dc,	// (0x0002957c) eswt_control_pane_g4_copy4_ParamLimits

0x33dc,	// (0x0002957c) eswt_control_pane_g4_copy4

0xaae6,	// (0x00030c86) eswt_ctrl_combo_button_pane

0xaaee,	// (0x00030c8e) eswt_ctrl_input_pane

0xaaf6,	// (0x00030c96) popup_choice_list_window_cp70

0xaafe,	// (0x00030c9e) eswt_ctrl_input_pane_t1

0xbb12,	// (0x00031cb2) input_focus_pane_cp70

0xef8e,	// (0x0003512e) bg_button_pane_cp70_ParamLimits

0xef8e,	// (0x0003512e) bg_button_pane_cp70

0xab0c,	// (0x00030cac) eswt_ctrl_combo_button_pane_g1

0x34a6,	// (0x00029646) wait_bar_pane_cp70

0xd261,	// (0x00033401) bg_popup_window_pane_cp70_ParamLimits

0xd261,	// (0x00033401) bg_popup_window_pane_cp70

0x34ae,	// (0x0002964e) popup_eswt_tasktip_window_t1

0x34c4,	// (0x00029664) wait_bar_pane_cp71_ParamLimits

0x34c4,	// (0x00029664) wait_bar_pane_cp71

0x34d0,	// (0x00029670) grid_eswt_app_pane

0xc539,	// (0x000326d9) scroll_pane_cp70

0xab14,	// (0x00030cb4) cell_eswt_app_pane_ParamLimits

0xab14,	// (0x00030cb4) cell_eswt_app_pane

0xab3e,	// (0x00030cde) cell_eswt_app_pane_g1_ParamLimits

0xab3e,	// (0x00030cde) cell_eswt_app_pane_g1

0xab6d,	// (0x00030d0d) cell_eswt_app_pane_g2_ParamLimits

0xab6d,	// (0x00030d0d) cell_eswt_app_pane_g2

0x0001,

0xfa5d,	// (0x00035bfd) cell_eswt_app_pane_g_ParamLimits

0xfa5d,	// (0x00035bfd) cell_eswt_app_pane_g

0xab96,	// (0x00030d36) cell_eswt_app_pane_t1_ParamLimits

0xab96,	// (0x00030d36) cell_eswt_app_pane_t1

0x3597,	// (0x00029737) grid_highlight_pane_cp70_ParamLimits

0x3597,	// (0x00029737) grid_highlight_pane_cp70

0xcaea,	// (0x00032c8a) set_content_pane_g1

0xce00,	// (0x00032fa0) status_small_volume_pane

0x35a3,	// (0x00029743) status_small_volume_pane_g1

0x35ab,	// (0x0002974b) volume_small2_pane

0x35b4,	// (0x00029754) volume_small2_pane_g1

0x35bd,	// (0x0002975d) volume_small2_pane_g2

0x35c6,	// (0x00029766) volume_small2_pane_g3

0x35cf,	// (0x0002976f) volume_small2_pane_g4

0x35d8,	// (0x00029778) volume_small2_pane_g5

0x35e1,	// (0x00029781) volume_small2_pane_g6

0x35ea,	// (0x0002978a) volume_small2_pane_g7

0x35f3,	// (0x00029793) volume_small2_pane_g8

0x35fc,	// (0x0002979c) volume_small2_pane_g9

0x3605,	// (0x000297a5) volume_small2_pane_g10

0x0009,

0xfa62,	// (0x00035c02) volume_small2_pane_g

0xf33f,	// (0x000354df) fep_vkb_top_text_pane_g1_ParamLimits

0xaa70,	// (0x00030c10) fep_vkb_top_text_pane_t1_ParamLimits

0xf51f,	// (0x000356bf) popup_preview_fixed_window_g3_ParamLimits

0xf51f,	// (0x000356bf) popup_preview_fixed_window_g3

0x9e9d,	// (0x0003003d) popup_toolbar_trans_pane

0xa55c,	// (0x000306fc) aid_height_set_list_ParamLimits

0xda02,	// (0x00033ba2) aid_size_parent_ParamLimits

0xc339,	// (0x000324d9) list_highlight_pane_cp2_ParamLimits

0xcaea,	// (0x00032c8a) set_content_pane_g1_ParamLimits

0xa712,	// (0x000308b2) list_single_image_pane_ParamLimits

0xa712,	// (0x000308b2) list_single_image_pane

0xabc8,	// (0x00030d68) aid_size_cell_image_ParamLimits

0xabc8,	// (0x00030d68) aid_size_cell_image

0xabd5,	// (0x00030d75) grid_single_image_pane_ParamLimits

0xabd5,	// (0x00030d75) grid_single_image_pane

0xc1fc,	// (0x0003239c) list_single_image_pane_g1_ParamLimits

0xc1fc,	// (0x0003239c) list_single_image_pane_g1

0xc208,	// (0x000323a8) list_single_image_pane_g2_ParamLimits

0xc208,	// (0x000323a8) list_single_image_pane_g2

0x0001,

0x0479,	// (0x00026619) list_single_image_pane_g_ParamLimits

0x0479,	// (0x00026619) list_single_image_pane_g

0x3627,	// (0x000297c7) list_single_image_pane_t1_ParamLimits

0x3627,	// (0x000297c7) list_single_image_pane_t1

0xabe1,	// (0x00030d81) cell_image_list_pane_ParamLimits

0xabe1,	// (0x00030d81) cell_image_list_pane

0xabf5,	// (0x00030d95) cell_image_list_pane_g1

0xabfe,	// (0x00030d9e) cell_image_list_pane_g2

0x0001,

0xfa77,	// (0x00035c17) cell_image_list_pane_g

0x3663,	// (0x00029803) aid_size_cell_tb_trans_pane

0xc1e2,	// (0x00032382) bg_tb_trans_pane

0x3675,	// (0x00029815) grid_tb_trans_pane

0xd171,	// (0x00033311) bg_tb_trans_pane_g1

0xd181,	// (0x00033321) bg_tb_trans_pane_g2

0xd179,	// (0x00033319) bg_tb_trans_pane_g3

0xd191,	// (0x00033331) bg_tb_trans_pane_g4

0xd189,	// (0x00033329) bg_tb_trans_pane_g5

0xd1b1,	// (0x00033351) bg_tb_trans_pane_g6

0xd1a9,	// (0x00033349) bg_tb_trans_pane_g7

0xd199,	// (0x00033339) bg_tb_trans_pane_g8

0xd1a1,	// (0x00033341) bg_tb_trans_pane_g9

0x0008,

0xfa7c,	// (0x00035c1c) bg_tb_trans_pane_g

0x3689,	// (0x00029829) cell_toolbar_trans_pane_ParamLimits

0x3689,	// (0x00029829) cell_toolbar_trans_pane

0xefc9,	// (0x00035169) cell_toolbar_trans_pane_g1

0xa915,	// (0x00030ab5) list_form2_midp_pane_t1

0xa923,	// (0x00030ac3) list_form2_midp_pane_t2

0x0001,

0xf960,	// (0x00035b00) list_form2_midp_pane_t

0xed27,	// (0x00034ec7) scroll_pane_cp51_ParamLimits

0xee9d,	// (0x0003503d) form2_midp_wait_pane_g1

0xeea6,	// (0x00035046) form2_midp_wait_pane_g2

0xeeaf,	// (0x0003504f) form2_midp_wait_pane_g3

0x0002,

0x0341,	// (0x000264e1) form2_midp_wait_pane_g

0xbb82,	// (0x00031d22) list_highlight_pane_cp21_ParamLimits

0xeecf,	// (0x0003506f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xeede,	// (0x0003507e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe39c,	// (0x0003453c) list_single_2graphic_im_pane_ParamLimits

0xe39c,	// (0x0003453c) list_single_2graphic_im_pane

0xac07,	// (0x00030da7) list_single_2graphic_im_pane_g1_ParamLimits

0xac07,	// (0x00030da7) list_single_2graphic_im_pane_g1

0xac18,	// (0x00030db8) list_single_2graphic_im_pane_g2_ParamLimits

0xac18,	// (0x00030db8) list_single_2graphic_im_pane_g2

0xac24,	// (0x00030dc4) list_single_2graphic_im_pane_g3_ParamLimits

0xac24,	// (0x00030dc4) list_single_2graphic_im_pane_g3

0x0003,

0xfa8f,	// (0x00035c2f) list_single_2graphic_im_pane_g_ParamLimits

0xfa8f,	// (0x00035c2f) list_single_2graphic_im_pane_g

0xac38,	// (0x00030dd8) list_single_2graphic_im_pane_t1_ParamLimits

0xac38,	// (0x00030dd8) list_single_2graphic_im_pane_t1

0xf52b,	// (0x000356cb) list_single_graphic_2heading_pane_fp_ParamLimits

0xf52b,	// (0x000356cb) list_single_graphic_2heading_pane_fp

0x6e20,	// (0x0002cfc0) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6e20,	// (0x0002cfc0) list_single_graphic_2heading_pane_fp_g1

0xf542,	// (0x000356e2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xf542,	// (0x000356e2) list_single_graphic_2heading_pane_fp_g2

0x647d,	// (0x0002c61d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x647d,	// (0x0002c61d) list_single_graphic_2heading_pane_fp_g3

0x6df5,	// (0x0002cf95) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6df5,	// (0x0002cf95) list_single_graphic_2heading_pane_fp_g4

0xf54e,	// (0x000356ee) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xf54e,	// (0x000356ee) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xf9bb,	// (0x00035b5b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xf9bb,	// (0x00035b5b) list_single_graphic_2heading_pane_fp_g

0x6ff9,	// (0x0002d199) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6ff9,	// (0x0002d199) list_single_graphic_2heading_pane_fp_t1

0x6e58,	// (0x0002cff8) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6e58,	// (0x0002cff8) list_single_graphic_2heading_pane_fp_t2

0x700f,	// (0x0002d1af) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x700f,	// (0x0002d1af) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfa98,	// (0x00035c38) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfa98,	// (0x00035c38) list_single_graphic_2heading_pane_fp_t

0xf04b,	// (0x000351eb) fep_hwr_write_pane_g5_ParamLimits

0xf04b,	// (0x000351eb) fep_hwr_write_pane_g5

0xf057,	// (0x000351f7) fep_hwr_write_pane_g6_ParamLimits

0xf057,	// (0x000351f7) fep_hwr_write_pane_g6

0x3384,	// (0x00029524) eswt_shell_pane_ParamLimits

0xd261,	// (0x00033401) bg_popup_window_pane_cp18_ParamLimits

0xe2c1,	// (0x00034461) heading_pane_cp70

0x34ae,	// (0x0002964e) popup_eswt_tasktip_window_t1_ParamLimits

0x9f65,	// (0x00030105) aid_touch_tab_arrow_left

0x9f7b,	// (0x0003011b) aid_touch_tab_arrow_right

0x8d39,	// (0x0002eed9) title_pane_g3_ParamLimits

0x8d39,	// (0x0002eed9) title_pane_g3

0xc1a1,	// (0x00032341) set_value_pane_g1

0x9e9d,	// (0x0003003d) popup_toolbar_trans_pane_ParamLimits

0x3663,	// (0x00029803) aid_size_cell_tb_trans_pane_ParamLimits

0xc1e2,	// (0x00032382) bg_tb_trans_pane_ParamLimits

0x3675,	// (0x00029815) grid_tb_trans_pane_ParamLimits

0xbcb5,	// (0x00031e55) cont_note_pane_ParamLimits

0xbcb5,	// (0x00031e55) cont_note_pane

0xbf5d,	// (0x000320fd) cont_snote2_single_text_pane_ParamLimits

0xbf5d,	// (0x000320fd) cont_snote2_single_text_pane

0xbf5d,	// (0x000320fd) cont_snote2_single_graphic_pane_ParamLimits

0xbf5d,	// (0x000320fd) cont_snote2_single_graphic_pane

0xd71e,	// (0x000338be) cont_note_wait_pane_ParamLimits

0xd71e,	// (0x000338be) cont_note_wait_pane

0xd71e,	// (0x000338be) cont_note_image_pane_ParamLimits

0xd71e,	// (0x000338be) cont_note_image_pane

0x371d,	// (0x000298bd) popup_note2_window_g1_ParamLimits

0x371d,	// (0x000298bd) popup_note2_window_g1

0x374e,	// (0x000298ee) popup_note2_window_t1_ParamLimits

0x374e,	// (0x000298ee) popup_note2_window_t1

0x3793,	// (0x00029933) popup_note2_window_t2_ParamLimits

0x3793,	// (0x00029933) popup_note2_window_t2

0x37d8,	// (0x00029978) popup_note2_window_t3_ParamLimits

0x37d8,	// (0x00029978) popup_note2_window_t3

0x381d,	// (0x000299bd) popup_note2_window_t4_ParamLimits

0x381d,	// (0x000299bd) popup_note2_window_t4

0xbd98,	// (0x00031f38) popup_note2_window_t5_ParamLimits

0xbd98,	// (0x00031f38) popup_note2_window_t5

0x0004,

0xfaa4,	// (0x00035c44) popup_note2_window_t_ParamLimits

0xfaa4,	// (0x00035c44) popup_note2_window_t

0x384c,	// (0x000299ec) popup_note2_image_window_g1_ParamLimits

0x384c,	// (0x000299ec) popup_note2_image_window_g1

0x3858,	// (0x000299f8) popup_note2_image_window_g2_ParamLimits

0x3858,	// (0x000299f8) popup_note2_image_window_g2

0x0001,

0xfaaf,	// (0x00035c4f) popup_note2_image_window_g_ParamLimits

0xfaaf,	// (0x00035c4f) popup_note2_image_window_g

0x386a,	// (0x00029a0a) popup_note2_image_window_t1_ParamLimits

0x386a,	// (0x00029a0a) popup_note2_image_window_t1

0x3882,	// (0x00029a22) popup_note2_image_window_t2_ParamLimits

0x3882,	// (0x00029a22) popup_note2_image_window_t2

0x389a,	// (0x00029a3a) popup_note2_image_window_t3_ParamLimits

0x389a,	// (0x00029a3a) popup_note2_image_window_t3

0x0002,

0xfab4,	// (0x00035c54) popup_note2_image_window_t_ParamLimits

0xfab4,	// (0x00035c54) popup_note2_image_window_t

0xd72c,	// (0x000338cc) popup_note2_wait_window_g1_ParamLimits

0xd72c,	// (0x000338cc) popup_note2_wait_window_g1

0xd738,	// (0x000338d8) popup_note2_wait_window_g2_ParamLimits

0xd738,	// (0x000338d8) popup_note2_wait_window_g2

0xd744,	// (0x000338e4) popup_note2_wait_window_g3_ParamLimits

0xd744,	// (0x000338e4) popup_note2_wait_window_g3

0x0002,

0x0094,	// (0x00026234) popup_note2_wait_window_g_ParamLimits

0x0094,	// (0x00026234) popup_note2_wait_window_g

0x38b6,	// (0x00029a56) popup_note2_wait_window_t1_ParamLimits

0x38b6,	// (0x00029a56) popup_note2_wait_window_t1

0x38d4,	// (0x00029a74) popup_note2_wait_window_t2_ParamLimits

0x38d4,	// (0x00029a74) popup_note2_wait_window_t2

0x38f2,	// (0x00029a92) popup_note2_wait_window_t3_ParamLimits

0x38f2,	// (0x00029a92) popup_note2_wait_window_t3

0x3904,	// (0x00029aa4) popup_note2_wait_window_t4_ParamLimits

0x3904,	// (0x00029aa4) popup_note2_wait_window_t4

0x0003,

0xfabb,	// (0x00035c5b) popup_note2_wait_window_t_ParamLimits

0xfabb,	// (0x00035c5b) popup_note2_wait_window_t

0x3916,	// (0x00029ab6) wait_bar2_pane_ParamLimits

0x3916,	// (0x00029ab6) wait_bar2_pane

0x392e,	// (0x00029ace) popup_snote2_single_text_window_g1_ParamLimits

0x392e,	// (0x00029ace) popup_snote2_single_text_window_g1

0x3956,	// (0x00029af6) popup_snote2_single_text_window_t1_ParamLimits

0x3956,	// (0x00029af6) popup_snote2_single_text_window_t1

0x39a2,	// (0x00029b42) popup_snote2_single_text_window_t2_ParamLimits

0x39a2,	// (0x00029b42) popup_snote2_single_text_window_t2

0x39ee,	// (0x00029b8e) popup_snote2_single_text_window_t3_ParamLimits

0x39ee,	// (0x00029b8e) popup_snote2_single_text_window_t3

0x3a2f,	// (0x00029bcf) popup_snote2_single_text_window_t4_ParamLimits

0x3a2f,	// (0x00029bcf) popup_snote2_single_text_window_t4

0x4358,	// (0x0002a4f8) popup_snote2_single_text_window_t5_ParamLimits

0x4358,	// (0x0002a4f8) popup_snote2_single_text_window_t5

0x0004,

0xfac4,	// (0x00035c64) popup_snote2_single_text_window_t_ParamLimits

0xfac4,	// (0x00035c64) popup_snote2_single_text_window_t

0x4383,	// (0x0002a523) popup_snote2_single_graphic_window_g1_ParamLimits

0x4383,	// (0x0002a523) popup_snote2_single_graphic_window_g1

0x43ab,	// (0x0002a54b) popup_snote2_single_graphic_window_g2_ParamLimits

0x43ab,	// (0x0002a54b) popup_snote2_single_graphic_window_g2

0x0001,

0xfacf,	// (0x00035c6f) popup_snote2_single_graphic_window_g_ParamLimits

0xfacf,	// (0x00035c6f) popup_snote2_single_graphic_window_g

0x43d3,	// (0x0002a573) popup_snote2_single_graphic_window_t1_ParamLimits

0x43d3,	// (0x0002a573) popup_snote2_single_graphic_window_t1

0x441f,	// (0x0002a5bf) popup_snote2_single_graphic_window_t2_ParamLimits

0x441f,	// (0x0002a5bf) popup_snote2_single_graphic_window_t2

0x39ee,	// (0x00029b8e) popup_snote2_single_graphic_window_t3_ParamLimits

0x39ee,	// (0x00029b8e) popup_snote2_single_graphic_window_t3

0x3a2f,	// (0x00029bcf) popup_snote2_single_graphic_window_t4_ParamLimits

0x3a2f,	// (0x00029bcf) popup_snote2_single_graphic_window_t4

0x4358,	// (0x0002a4f8) popup_snote2_single_graphic_window_t5_ParamLimits

0x4358,	// (0x0002a4f8) popup_snote2_single_graphic_window_t5

0x0004,

0xfad4,	// (0x00035c74) popup_snote2_single_graphic_window_t_ParamLimits

0xfad4,	// (0x00035c74) popup_snote2_single_graphic_window_t

0xecb9,	// (0x00034e59) clock_nsta_pane_cp2_t1

0xecb9,	// (0x00034e59) clock_nsta_pane_cp2_t2

0x0001,

0x0302,	// (0x000264a2) clock_nsta_pane_cp2_t

0x67b0,	// (0x0002c950) form_field_data_wide_pane_g1_ParamLimits

0xc1fc,	// (0x0003239c) form_field_data_wide_pane_g2_ParamLimits

0xc1fc,	// (0x0003239c) form_field_data_wide_pane_g2

0xc208,	// (0x000323a8) form_field_data_wide_pane_g3_ParamLimits

0xc208,	// (0x000323a8) form_field_data_wide_pane_g3

0x0002,

0xf693,	// (0x00035833) form_field_data_wide_pane_g_ParamLimits

0xf693,	// (0x00035833) form_field_data_wide_pane_g

0xa849,	// (0x000309e9) grid_touch_3_pane_ParamLimits

0xa849,	// (0x000309e9) grid_touch_3_pane

0xac69,	// (0x00030e09) cell_touch_3_pane_ParamLimits

0xac69,	// (0x00030e09) cell_touch_3_pane

0xefc9,	// (0x00035169) cell_touch_3_pane_g1

0xefc9,	// (0x00035169) cell_touch_3_pane_g2

0x0001,

0x0387,	// (0x00026527) cell_touch_3_pane_g

0xbdca,	// (0x00031f6a) cont_query_data_pane

0xbdd2,	// (0x00031f72) cont_query_data_pane_cp1

0x449a,	// (0x0002a63a) button_value_adjust_pane_cp7

0x44a2,	// (0x0002a642) query_popup_pane_cp3

0xc764,	// (0x00032904) bg_popup_sub_pane_cp22_ParamLimits

0x131f,	// (0x000274bf) navi_navi_volume_pane_cp2

0x133a,	// (0x000274da) popup_side_volume_key_window_g2

0x1349,	// (0x000274e9) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x000358c9) popup_side_volume_key_window_g

0x1366,	// (0x00027506) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x000358d0) popup_side_volume_key_window_t

0xc9b4,	// (0x00032b54) popup_side_volume_key_window_ParamLimits

0x83e6,	// (0x0002e586) list_double_graphic_pane_g4_ParamLimits

0x83e6,	// (0x0002e586) list_double_graphic_pane_g4

0xa6ea,	// (0x0003088a) list_single_2heading_msg_pane_ParamLimits

0xa6ea,	// (0x0003088a) list_single_2heading_msg_pane

0x958e,	// (0x0002f72e) list_single_2heading_msg_pane_g1_ParamLimits

0x958e,	// (0x0002f72e) list_single_2heading_msg_pane_g1

0x959a,	// (0x0002f73a) list_single_2heading_msg_pane_g2_ParamLimits

0x959a,	// (0x0002f73a) list_single_2heading_msg_pane_g2

0x95ad,	// (0x0002f74d) list_single_2heading_msg_pane_g3_ParamLimits

0x95ad,	// (0x0002f74d) list_single_2heading_msg_pane_g3

0x703b,	// (0x0002d1db) list_single_2heading_msg_pane_g4_ParamLimits

0x703b,	// (0x0002d1db) list_single_2heading_msg_pane_g4

0x0003,

0xfadf,	// (0x00035c7f) list_single_2heading_msg_pane_g_ParamLimits

0xfadf,	// (0x00035c7f) list_single_2heading_msg_pane_g

0x7053,	// (0x0002d1f3) list_single_2heading_msg_pane_t1_ParamLimits

0x7053,	// (0x0002d1f3) list_single_2heading_msg_pane_t1

0x95b9,	// (0x0002f759) list_single_2heading_msg_pane_t2_ParamLimits

0x95b9,	// (0x0002f759) list_single_2heading_msg_pane_t2

0x9624,	// (0x0002f7c4) list_single_2heading_msg_pane_t3_ParamLimits

0x9624,	// (0x0002f7c4) list_single_2heading_msg_pane_t3

0x70e8,	// (0x0002d288) list_single_2heading_msg_pane_t4_ParamLimits

0x70e8,	// (0x0002d288) list_single_2heading_msg_pane_t4

0x0003,

0xfae8,	// (0x00035c88) list_single_2heading_msg_pane_t_ParamLimits

0xfae8,	// (0x00035c88) list_single_2heading_msg_pane_t

0xbb30,	// (0x00031cd0) title_pane_g4_ParamLimits

0xbb30,	// (0x00031cd0) title_pane_g4

0x100a,	// (0x000271aa) title_pane_stacon_g3_ParamLimits

0x100a,	// (0x000271aa) title_pane_stacon_g3

0x36e0,	// (0x00029880) list_single_2graphic_im_pane_g4_ParamLimits

0x36e0,	// (0x00029880) list_single_2graphic_im_pane_g4

0xe0cf,	// (0x0003426f) popup_side_volume_key_window_cp

0xe5e0,	// (0x00034780) main_idle_act2_pane_t1

0x1fbf,	// (0x0002815f) toolbar_button_pane_g10

0x90a8,	// (0x0002f248) popup_toolbar_window_cp1

0xecaa,	// (0x00034e4a) clock_nsta_pane_cp_t1

0xecaa,	// (0x00034e4a) clock_nsta_pane_cp_t2

0x0001,

0x02fd,	// (0x0002649d) clock_nsta_pane_cp_t

0x131f,	// (0x000274bf) navi_navi_volume_pane_cp2_ParamLimits

0x132e,	// (0x000274ce) popup_side_volume_key_window_g1_ParamLimits

0x133a,	// (0x000274da) popup_side_volume_key_window_g2_ParamLimits

0x1349,	// (0x000274e9) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x000358c9) popup_side_volume_key_window_g_ParamLimits

0x2c64,	// (0x00028e04) fep_hwr_aid_pane

0x2d0b,	// (0x00028eab) bg_fep_hwr_top_pane_g4_ParamLimits

0xf01b,	// (0x000351bb) fep_hwr_top_pane_g1_ParamLimits

0xf02d,	// (0x000351cd) fep_hwr_top_pane_g2_ParamLimits

0x2d2b,	// (0x00028ecb) fep_hwr_top_pane_g3_ParamLimits

0xf96c,	// (0x00035b0c) fep_hwr_top_pane_g_ParamLimits

0x2d40,	// (0x00028ee0) fep_hwr_top_text_pane_ParamLimits

0xde90,	// (0x00034030) aid_touch_tab_arrow_arrow_2

0xde99,	// (0x00034039) aid_touch_tab_arrow_left_2

0x2c78,	// (0x00028e18) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2caf,	// (0x00028e4f) fep_hwr_prediction_pane

0xf182,	// (0x00035322) fep_vkb_prediction_pane

0xaa50,	// (0x00030bf0) fep_vkb_side_pane_g3_ParamLimits

0xaa50,	// (0x00030bf0) fep_vkb_side_pane_g3

0x2fa5,	// (0x00029145) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x304d,	// (0x000291ed) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x305a,	// (0x000291fa) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xf9f3,	// (0x00035b93) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x3a65,	// (0x00029c05) fep_hwr_prediction_pane_g1

0x3a6f,	// (0x00029c0f) fep_hwr_prediction_pane_g2

0x3a77,	// (0x00029c17) fep_hwr_prediction_pane_g3

0x3a7f,	// (0x00029c1f) fep_hwr_prediction_pane_g4

0x0003,

0xfaf1,	// (0x00035c91) fep_hwr_prediction_pane_g

0x44c7,	// (0x0002a667) fep_vkb_prediction_pane_g1

0x44d1,	// (0x0002a671) fep_vkb_prediction_pane_g2

0x44d9,	// (0x0002a679) fep_vkb_prediction_pane_g3

0x44e1,	// (0x0002a681) fep_vkb_prediction_pane_g4

0x0003,

0xfafa,	// (0x00035c9a) fep_vkb_prediction_pane_g

0x2535,	// (0x000286d5) slider_set_pane_g3

0x2549,	// (0x000286e9) slider_set_pane_g4

0x2561,	// (0x00028701) slider_set_pane_g5

0x2535,	// (0x000286d5) slider_set_pane_g6

0x2577,	// (0x00028717) slider_set_pane_g7

0xe346,	// (0x000344e6) slider_form_pane_g3

0xe34f,	// (0x000344ef) slider_form_pane_g4

0xe357,	// (0x000344f7) slider_form_pane_g5

0xe346,	// (0x000344e6) slider_form_pane_g6

0xa6a3,	// (0x00030843) slider_form_pane_g7

0xe87e,	// (0x00034a1e) slider_set_pane_vc_g3

0xe887,	// (0x00034a27) slider_set_pane_vc_g4

0xe890,	// (0x00034a30) slider_set_pane_vc_g5

0xe87e,	// (0x00034a1e) slider_set_pane_vc_g6

0xe899,	// (0x00034a39) slider_set_pane_vc_g7

0xe87e,	// (0x00034a1e) slider_form_pane_vc_g1

0xe887,	// (0x00034a27) slider_form_pane_vc_g2

0xe890,	// (0x00034a30) slider_form_pane_vc_g3

0xe87e,	// (0x00034a1e) slider_form_pane_vc_g4

0xea22,	// (0x00034bc2) slider_form_pane_vc_g5

0x0004,

0x02d6,	// (0x00026476) slider_form_pane_vc_g

0xbb12,	// (0x00031cb2) main_idle_act3_pane

0x44e9,	// (0x0002a689) ai3_links_pane

0xacb3,	// (0x00030e53) popup_ai3_data_window_ParamLimits

0xacb3,	// (0x00030e53) popup_ai3_data_window

0xbb12,	// (0x00031cb2) grid_ai3_links_pane

0xaccb,	// (0x00030e6b) cell_ai3_links_pane_ParamLimits

0xaccb,	// (0x00030e6b) cell_ai3_links_pane

0x4522,	// (0x0002a6c2) bg_popup_sub_pane_cp11

0x452f,	// (0x0002a6cf) cell_ai3_links_pane_g1

0xbb12,	// (0x00031cb2) bg_popup_sub_pane_cp12

0x4554,	// (0x0002a6f4) heading_ai3_data_pane

0x455c,	// (0x0002a6fc) list_ai3_gene_pane

0x4568,	// (0x0002a708) popup_ai3_data_window_g1

0x4570,	// (0x0002a710) heading_ai3_data_pane_g1

0x4578,	// (0x0002a718) heading_ai3_data_pane_t1

0x4586,	// (0x0002a726) list_double_ai3_gene_pane_ParamLimits

0x4586,	// (0x0002a726) list_double_ai3_gene_pane

0x4593,	// (0x0002a733) list_single_ai3_gene_pane_ParamLimits

0x4593,	// (0x0002a733) list_single_ai3_gene_pane

0xef8e,	// (0x0003512e) list_highlight_pane_cp7_ParamLimits

0xef8e,	// (0x0003512e) list_highlight_pane_cp7

0x45a0,	// (0x0002a740) list_single_a13_gene_pane_t1_ParamLimits

0x45a0,	// (0x0002a740) list_single_a13_gene_pane_t1

0x45b7,	// (0x0002a757) list_single_ai3_gene_pane_g1

0x45c0,	// (0x0002a760) list_single_ai3_gene_pane_g2

0x0001,

0xfb03,	// (0x00035ca3) list_single_ai3_gene_pane_g

0x45c8,	// (0x0002a768) list_double_ai3_gene_pane_g1_ParamLimits

0x45c8,	// (0x0002a768) list_double_ai3_gene_pane_g1

0x45d4,	// (0x0002a774) list_double_ai3_gene_pane_t1_ParamLimits

0x45d4,	// (0x0002a774) list_double_ai3_gene_pane_t1

0x45f0,	// (0x0002a790) list_double_ai3_gene_pane_t2_ParamLimits

0x45f0,	// (0x0002a790) list_double_ai3_gene_pane_t2

0x4605,	// (0x0002a7a5) list_double_ai3_gene_pane_t3_ParamLimits

0x4605,	// (0x0002a7a5) list_double_ai3_gene_pane_t3

0x0002,

0xfb08,	// (0x00035ca8) list_double_ai3_gene_pane_t_ParamLimits

0xfb08,	// (0x00035ca8) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7025,	// (0x0002d1c5) aid_size_min_col_2

0xac9d,	// (0x00030e3d) aid_size_min_msg_ParamLimits

0xac9d,	// (0x00030e3d) aid_size_min_msg

0xaa64,	// (0x00030c04) fep_vkb_top_text_pane_g2_ParamLimits

0xaa64,	// (0x00030c04) fep_vkb_top_text_pane_g2

0x0001,

0xf98e,	// (0x00035b2e) fep_vkb_top_text_pane_g_ParamLimits

0xf98e,	// (0x00035b2e) fep_vkb_top_text_pane_g

0xbb12,	// (0x00031cb2) main_hc_apps_shell_pane

0x4622,	// (0x0002a7c2) grid_hc_apps_pane_ParamLimits

0x4622,	// (0x0002a7c2) grid_hc_apps_pane

0x4631,	// (0x0002a7d1) list_hc_apps_pane

0x4639,	// (0x0002a7d9) scroll_pane_cp37_ParamLimits

0x4639,	// (0x0002a7d9) scroll_pane_cp37

0xace5,	// (0x00030e85) cell_hc_apps_pane_ParamLimits

0xace5,	// (0x00030e85) cell_hc_apps_pane

0xada5,	// (0x00030f45) cell_hc_apps_pane_g1_ParamLimits

0xada5,	// (0x00030f45) cell_hc_apps_pane_g1

0x4726,	// (0x0002a8c6) cell_hc_apps_pane_g2_ParamLimits

0x4726,	// (0x0002a8c6) cell_hc_apps_pane_g2

0x4742,	// (0x0002a8e2) cell_hc_apps_pane_g3_ParamLimits

0x4742,	// (0x0002a8e2) cell_hc_apps_pane_g3

0x0002,

0xfb0f,	// (0x00035caf) cell_hc_apps_pane_g_ParamLimits

0xfb0f,	// (0x00035caf) cell_hc_apps_pane_g

0xadd2,	// (0x00030f72) cell_hc_apps_pane_t1_ParamLimits

0xadd2,	// (0x00030f72) cell_hc_apps_pane_t1

0xbcb5,	// (0x00031e55) grid_highlight_pane_cp10_ParamLimits

0xbcb5,	// (0x00031e55) grid_highlight_pane_cp10

0xae10,	// (0x00030fb0) list_single_hc_apps_pane_ParamLimits

0xae10,	// (0x00030fb0) list_single_hc_apps_pane

0xae43,	// (0x00030fe3) list_single_hc_apps_pane_g1

0x9692,	// (0x0002f832) list_single_hc_apps_pane_g2

0x0001,

0xfb16,	// (0x00035cb6) list_single_hc_apps_pane_g

0x96ab,	// (0x0002f84b) list_single_hc_apps_pane_g2_copy1

0x96c7,	// (0x0002f867) list_single_hc_apps_pane_t1

0xbb82,	// (0x00031d22) bg_set_opt_pane_cp_ParamLimits

0x0c73,	// (0x00026e13) setting_slider_pane_t1_ParamLimits

0x0c8c,	// (0x00026e2c) setting_slider_pane_t2_ParamLimits

0x0ca5,	// (0x00026e45) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x00035716) setting_slider_pane_t_ParamLimits

0x0cbc,	// (0x00026e5c) slider_set_pane_ParamLimits

0x16e1,	// (0x00027881) control_pane_g5_ParamLimits

0x16e1,	// (0x00027881) control_pane_g5

0xe308,	// (0x000344a8) slider_set_pane_g1_ParamLimits

0x2529,	// (0x000286c9) slider_set_pane_g2_ParamLimits

0x2535,	// (0x000286d5) slider_set_pane_g3_ParamLimits

0x2549,	// (0x000286e9) slider_set_pane_g4_ParamLimits

0x2561,	// (0x00028701) slider_set_pane_g5_ParamLimits

0x2535,	// (0x000286d5) slider_set_pane_g6_ParamLimits

0x2577,	// (0x00028717) slider_set_pane_g7_ParamLimits

0xf899,	// (0x00035a39) slider_set_pane_g_ParamLimits

0xca95,	// (0x00032c35) navi_icon_text_pane_ParamLimits

0x9f2e,	// (0x000300ce) aid_fill_nsta_2_ParamLimits

0x9f65,	// (0x00030105) aid_touch_tab_arrow_left_ParamLimits

0x9f7b,	// (0x0003011b) aid_touch_tab_arrow_right_ParamLimits

0xa016,	// (0x000301b6) clock_nsta_pane_ParamLimits

0xde72,	// (0x00034012) navi_icon_pane_g1_ParamLimits

0xde7e,	// (0x0003401e) navi_text_pane_t1_ParamLimits

0xed01,	// (0x00034ea1) navi_icon_text_pane_g1_ParamLimits

0xed0d,	// (0x00034ead) navi_icon_text_pane_t1_ParamLimits

0xae43,	// (0x00030fe3) list_single_hc_apps_pane_g1_ParamLimits

0x9692,	// (0x0002f832) list_single_hc_apps_pane_g2_ParamLimits

0xfb16,	// (0x00035cb6) list_single_hc_apps_pane_g_ParamLimits

0x96ab,	// (0x0002f84b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x96c7,	// (0x0002f867) list_single_hc_apps_pane_t1_ParamLimits

0x8288,	// (0x0002e428) popup_toolbar2_fixed_window_ParamLimits

0x8288,	// (0x0002e428) popup_toolbar2_fixed_window

0x9e93,	// (0x00030033) popup_toolbar2_float_window

0xbb12,	// (0x00031cb2) bg_popup_sub_pane_cp27

0x4830,	// (0x0002a9d0) grid_toolbar2_float_pane

0xbb12,	// (0x00031cb2) bg_popup_sub_pane_cp26

0x4830,	// (0x0002a9d0) grid_toolbar2_fixed_pane

0xae5c,	// (0x00030ffc) cell_toolbar2_fixed_pane_ParamLimits

0xae5c,	// (0x00030ffc) cell_toolbar2_fixed_pane

0xae76,	// (0x00031016) cell_toolbar2_fixed_pane_g1

0x4852,	// (0x0002a9f2) toolbar2_fixed_button_pane

0xd171,	// (0x00033311) toolbar2_fixed_button_pane_g1

0xd181,	// (0x00033321) toolbar2_fixed_button_pane_g2

0xd179,	// (0x00033319) toolbar2_fixed_button_pane_g3

0xd191,	// (0x00033331) toolbar2_fixed_button_pane_g4

0xd189,	// (0x00033329) toolbar2_fixed_button_pane_g5

0xd199,	// (0x00033339) toolbar2_fixed_button_pane_g6

0xd1a1,	// (0x00033341) toolbar2_fixed_button_pane_g7

0xd1b1,	// (0x00033351) toolbar2_fixed_button_pane_g8

0xd1a9,	// (0x00033349) toolbar2_fixed_button_pane_g9

0x0008,

0xf814,	// (0x000359b4) toolbar2_fixed_button_pane_g

0x485a,	// (0x0002a9fa) cell_toolbar2_float_pane_ParamLimits

0x485a,	// (0x0002a9fa) cell_toolbar2_float_pane

0x486b,	// (0x0002aa0b) cell_toolbar2_float_pane_g1

0x4852,	// (0x0002a9f2) toolbar2_fixed_button_pane_cp

0xaa17,	// (0x00030bb7) fep_vkb_accented_list_pane_ParamLimits

0xaa17,	// (0x00030bb7) fep_vkb_accented_list_pane

0x2f85,	// (0x00029125) bg_popup_fep_shadow_pane_g9

0xcc17,	// (0x00032db7) bg_popup_fep_shadow_pane_cp3

0xc2e8,	// (0x00032488) list_accented_list_pane

0x4874,	// (0x0002aa14) list_single_accented_list_pane_ParamLimits

0x4874,	// (0x0002aa14) list_single_accented_list_pane

0xcc17,	// (0x00032db7) list_highlight_pane_cp10

0x4885,	// (0x0002aa25) list_single_accented_list_pane_t1

0x9dbd,	// (0x0002ff5d) popup_slider_window_ParamLimits

0x9dbd,	// (0x0002ff5d) popup_slider_window

0x44aa,	// (0x0002a64a) aid_indentation_list_msg

0xaf6f,	// (0x0003110f) bg_popup_window_pane_cp19

0x49a9,	// (0x0002ab49) popup_slider_window_g1

0x49c5,	// (0x0002ab65) popup_slider_window_g2

0x49e1,	// (0x0002ab81) popup_slider_window_g3

0x0005,

0xfb1b,	// (0x00035cbb) popup_slider_window_g

0x4a3d,	// (0x0002abdd) popup_slider_window_t1

0x4ab1,	// (0x0002ac51) small_volume_slider_vertical_pane

0xefc9,	// (0x00035169) small_volume_slider_vertical_pane_g1

0xefc9,	// (0x00035169) small_volume_slider_vertical_pane_g2

0x4acd,	// (0x0002ac6d) small_volume_slider_vertical_pane_g3

0x0002,

0xfb2d,	// (0x00035ccd) small_volume_slider_vertical_pane_g

0x81f6,	// (0x0002e396) area_side_right_pane_ParamLimits

0x81f6,	// (0x0002e396) area_side_right_pane

0x889e,	// (0x0002ea3e) aid_size_side_button_ParamLimits

0x889e,	// (0x0002ea3e) aid_size_side_button

0x88b7,	// (0x0002ea57) grid_sctrl_middle_pane_ParamLimits

0x88b7,	// (0x0002ea57) grid_sctrl_middle_pane

0x3abb,	// (0x00029c5b) sctrl_sk_bottom_pane

0x3acc,	// (0x00029c6c) sctrl_sk_top_pane

0x3ade,	// (0x00029c7e) aid_touch_sctrl_top

0x3aeb,	// (0x00029c8b) bg_sctrl_sk_pane_ParamLimits

0x3aeb,	// (0x00029c8b) bg_sctrl_sk_pane

0x3af9,	// (0x00029c99) sctrl_sk_top_pane_g1

0x3b06,	// (0x00029ca6) sctrl_sk_top_pane_t1

0x3ade,	// (0x00029c7e) aid_touch_sctrl_bottom

0x3aeb,	// (0x00029c8b) bg_sctrl_sk_pane_cp_ParamLimits

0x3aeb,	// (0x00029c8b) bg_sctrl_sk_pane_cp

0x3b21,	// (0x00029cc1) sctrl_sk_bottom_pane_g1

0x3b06,	// (0x00029ca6) sctrl_sk_bottom_pane_t1

0x88d1,	// (0x0002ea71) cell_sctrl_middle_pane_ParamLimits

0x88d1,	// (0x0002ea71) cell_sctrl_middle_pane

0x88e2,	// (0x0002ea82) aid_touch_sctrl_middle_ParamLimits

0x88e2,	// (0x0002ea82) aid_touch_sctrl_middle

0x88ef,	// (0x0002ea8f) bg_sctrl_middle_pane_ParamLimits

0x88ef,	// (0x0002ea8f) bg_sctrl_middle_pane

0x418a,	// (0x0002a32a) cell_sctrl_middle_pane_g1_ParamLimits

0x418a,	// (0x0002a32a) cell_sctrl_middle_pane_g1

0x88fd,	// (0x0002ea9d) cell_sctrl_middle_pane_g2_ParamLimits

0x88fd,	// (0x0002ea9d) cell_sctrl_middle_pane_g2

0x0001,

0xfb39,	// (0x00035cd9) cell_sctrl_middle_pane_g_ParamLimits

0xfb39,	// (0x00035cd9) cell_sctrl_middle_pane_g

0xd171,	// (0x00033311) bg_sctrl_middle_pane_g1

0xd179,	// (0x00033319) bg_sctrl_middle_pane_g2

0xd181,	// (0x00033321) bg_sctrl_middle_pane_g3

0xd189,	// (0x00033329) bg_sctrl_middle_pane_g4

0xd191,	// (0x00033331) bg_sctrl_middle_pane_g5

0xd199,	// (0x00033339) bg_sctrl_middle_pane_g6

0xd1a1,	// (0x00033341) bg_sctrl_middle_pane_g7

0xd1a9,	// (0x00033349) bg_sctrl_middle_pane_g8

0x0007,

0x0545,	// (0x000266e5) bg_sctrl_middle_pane_g

0xd1b1,	// (0x00033351) bg_sctrl_middle_pane_g8_copy1

0xd171,	// (0x00033311) bg_sctrl_sk_pane_g1

0xd181,	// (0x00033321) bg_sctrl_sk_pane_g2

0xd179,	// (0x00033319) bg_sctrl_sk_pane_g3

0x0008,

0xf814,	// (0x000359b4) bg_sctrl_sk_pane_g

0xc11b,	// (0x000322bb) aid_size_touch_scroll_bar

0xd191,	// (0x00033331) bg_sctrl_sk_pane_g4

0xd189,	// (0x00033329) bg_sctrl_sk_pane_g5

0xd199,	// (0x00033339) bg_sctrl_sk_pane_g6

0xd1a1,	// (0x00033341) bg_sctrl_sk_pane_g7

0xd1b1,	// (0x00033351) bg_sctrl_sk_pane_g8

0xd1a9,	// (0x00033349) bg_sctrl_sk_pane_g9

0xcea5,	// (0x00033045) popup_fep_china_hwr2_fs_candidate_window

0x98f7,	// (0x0002fa97) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x98f7,	// (0x0002fa97) popup_fep_china_hwr2_fs_control_window

0x2fa5,	// (0x00029145) sctrl_sk_top_pane_g2

0x0001,

0xfb34,	// (0x00035cd4) sctrl_sk_top_pane_g

0xb027,	// (0x000311c7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xb027,	// (0x000311c7) aid_fep_china_hwr2_fs_cell

0xb03b,	// (0x000311db) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xb03b,	// (0x000311db) bg_popup_fep_shadow_pane_cp4

0xb052,	// (0x000311f2) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xb052,	// (0x000311f2) bg_popup_fep_shadow_pane_cp5

0xb064,	// (0x00031204) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xb064,	// (0x00031204) popup_fep_china_hwr2_fs_control_bar_grid

0xb078,	// (0x00031218) popup_fep_china_hwr2_fs_control_funtion_grid

0x4b29,	// (0x0002acc9) aid_fep_china_hwr2_fs_candi_cell

0xbb12,	// (0x00031cb2) bg_popup_fep_shadow_pane_cp6

0x4b33,	// (0x0002acd3) popup_fep_china_hwr2_fs_candidate_grid

0xb080,	// (0x00031220) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xb080,	// (0x00031220) cell_fep_china_hwr2_fs_funtion_grid

0xefc9,	// (0x00035169) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x4b55,	// (0x0002acf5) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x4b55,	// (0x0002acf5) cell_fep_china_hwr2_fs_funtion_grid_g1

0x4b63,	// (0x0002ad03) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x4b63,	// (0x0002ad03) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfb3e,	// (0x00035cde) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfb3e,	// (0x00035cde) cell_fep_china_hwr2_fs_funtion_grid_g

0xb098,	// (0x00031238) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xb098,	// (0x00031238) cell_fep_china_hwr2_fs_funtion_grid_t1

0xb0ad,	// (0x0003124d) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xb0ad,	// (0x0003124d) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfb43,	// (0x00035ce3) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfb43,	// (0x00035ce3) cell_fep_china_hwr2_fs_funtion_grid_t

0x4baa,	// (0x0002ad4a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x4bb2,	// (0x0002ad52) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x4bba,	// (0x0002ad5a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfb48,	// (0x00035ce8) popup_fep_china_hwr2_fs_control_bar_grid_g

0x4bc2,	// (0x0002ad62) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x4bc2,	// (0x0002ad62) cell_fep_china_hwr2_fs_candidate_grid

0x4bdb,	// (0x0002ad7b) popup_fep_china_hwr2_fs_candidate_grid_g20

0x4be3,	// (0x0002ad83) popup_fep_china_hwr2_fs_candidate_grid_g21

0xefc9,	// (0x00035169) cell_fep_china_hwr2_fs_candidate_grid_g1

0xefc9,	// (0x00035169) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0x0387,	// (0x00026527) cell_fep_china_hwr2_fs_candidate_grid_g

0x4beb,	// (0x0002ad8b) cell_fep_china_hwr2_fs_candidate_grid_t1

0xcfb2,	// (0x00033152) clock_nsta_pane_cp_24_ParamLimits

0xcfb2,	// (0x00033152) clock_nsta_pane_cp_24

0xd01a,	// (0x000331ba) indicator_nsta_pane_cp_24_ParamLimits

0xd01a,	// (0x000331ba) indicator_nsta_pane_cp_24

0xdd88,	// (0x00033f28) heading_pane_g1

0x0001,

0x0117,	// (0x000262b7) heading_pane_g

0xe46b,	// (0x0003460b) grid_sct_catagory_button_pane

0xe36e,	// (0x0003450e) scroll_pane_cp5_ParamLimits

0xed33,	// (0x00034ed3) button_value_adjust_pane_cp5_ParamLimits

0xed33,	// (0x00034ed3) button_value_adjust_pane_cp5

0xedf1,	// (0x00034f91) form2_midp_time_pane_ParamLimits

0x4bf9,	// (0x0002ad99) cell_sct_catagory_button_pane_ParamLimits

0x4bf9,	// (0x0002ad99) cell_sct_catagory_button_pane

0xef8e,	// (0x0003512e) bg_button_pane_cp01_ParamLimits

0xef8e,	// (0x0003512e) bg_button_pane_cp01

0xefc9,	// (0x00035169) cell_sct_catagory_button_pane_g1

0x9e36,	// (0x0002ffd6) popup_tb_extension_window

0xb0c9,	// (0x00031269) aid_size_cell_ext_ParamLimits

0xb0c9,	// (0x00031269) aid_size_cell_ext

0xbf5d,	// (0x000320fd) bg_tb_trans_pane_cp1_ParamLimits

0xbf5d,	// (0x000320fd) bg_tb_trans_pane_cp1

0xb0ef,	// (0x0003128f) grid_tb_ext_pane_ParamLimits

0xb0ef,	// (0x0003128f) grid_tb_ext_pane

0xb12c,	// (0x000312cc) cell_tb_ext_pane_ParamLimits

0xb12c,	// (0x000312cc) cell_tb_ext_pane

0xb154,	// (0x000312f4) cell_tb_ext_pane_g1_ParamLimits

0xb154,	// (0x000312f4) cell_tb_ext_pane_g1

0x4c8f,	// (0x0002ae2f) cell_tb_ext_pane_t1

0xbcb5,	// (0x00031e55) list_highlight_pane_cp11_ParamLimits

0xbcb5,	// (0x00031e55) list_highlight_pane_cp11

0x0ae6,	// (0x00026c86) popup_uni_indicator_window_ParamLimits

0x0ae6,	// (0x00026c86) popup_uni_indicator_window

0xc1e2,	// (0x00032382) bg_popup_sub_pane_cp14

0x4caa,	// (0x0002ae4a) list_uniindi_pane

0x4cb6,	// (0x0002ae56) uniindi_top_pane

0xbcb5,	// (0x00031e55) bg_uniindi_top_pane

0x4cd5,	// (0x0002ae75) uniindi_top_pane_g1

0x4ceb,	// (0x0002ae8b) uniindi_top_pane_g2

0x0003,

0xfb4f,	// (0x00035cef) uniindi_top_pane_g

0x4d15,	// (0x0002aeb5) uniindi_top_pane_t1

0x4d3f,	// (0x0002aedf) list_single_uniindi_pane_ParamLimits

0x4d3f,	// (0x0002aedf) list_single_uniindi_pane

0xefc9,	// (0x00035169) bg_uniindi_top_pane_g1

0x4d51,	// (0x0002aef1) list_single_uniindi_pane_g1

0x4d64,	// (0x0002af04) list_single_uniindi_pane_t1

0x096a,	// (0x00026b0a) control_bg_pane

0x4d89,	// (0x0002af29) bg_sctrl_sk_pane_cp1

0x4d92,	// (0x0002af32) bg_sctrl_sk_pane_cp2

0x4d9b,	// (0x0002af3b) control_bg_pane_g1

0x4da4,	// (0x0002af44) control_bg_pane_g2

0x0001,

0xfb58,	// (0x00035cf8) control_bg_pane_g

0xebec,	// (0x00034d8c) cell_indicator_nsta_pane_g1_ParamLimits

0xa87c,	// (0x00030a1c) cell_indicator_nsta_pane_g2_ParamLimits

0xf936,	// (0x00035ad6) cell_indicator_nsta_pane_g_ParamLimits

0x6de2,	// (0x0002cf82) form2_midp_time_pane_t1_ParamLimits

0x8684,	// (0x0002e824) main_idle_act4_pane_ParamLimits

0x8684,	// (0x0002e824) main_idle_act4_pane

0x9e36,	// (0x0002ffd6) popup_tb_extension_window_ParamLimits

0xb113,	// (0x000312b3) tb_ext_find_pane_ParamLimits

0xb113,	// (0x000312b3) tb_ext_find_pane

0x4dad,	// (0x0002af4d) ai_gene_pane_1_cp1

0xccab,	// (0x00032e4b) ai_gene_pane_2_cp1

0x4db5,	// (0x0002af55) list_single_idle_plugin_calendar_pane

0x4dbe,	// (0x0002af5e) list_single_idle_plugin_notification_pane

0x4dc7,	// (0x0002af67) list_single_idle_plugin_player_pane

0xb171,	// (0x00031311) list_single_idle_plugin_shortcut_pane_ParamLimits

0xb171,	// (0x00031311) list_single_idle_plugin_shortcut_pane

0xb199,	// (0x00031339) main_idle_act4_pane_t1

0xb1af,	// (0x0003134f) main_idle_act4_pane_t2

0x0001,

0xfb5d,	// (0x00035cfd) main_idle_act4_pane_t

0xb1c7,	// (0x00031367) middle_sk_idle_act4_pane_ParamLimits

0xb1c7,	// (0x00031367) middle_sk_idle_act4_pane

0xb1e3,	// (0x00031383) popup_clock_digital_analogue_window_cp2

0xb20a,	// (0x000313aa) shortcut_wheel_idle_act4_pane_ParamLimits

0xb20a,	// (0x000313aa) shortcut_wheel_idle_act4_pane

0xefc9,	// (0x00035169) shortcut_wheel_idle_act4_pane_g1

0xefc9,	// (0x00035169) shortcut_wheel_idle_act4_pane_g2

0xefc9,	// (0x00035169) shortcut_wheel_idle_act4_pane_g3

0xefc9,	// (0x00035169) shortcut_wheel_idle_act4_pane_g4

0xefc9,	// (0x00035169) shortcut_wheel_idle_act4_pane_g5

0x4e5a,	// (0x0002affa) shortcut_wheel_idle_act4_pane_g6

0x4e62,	// (0x0002b002) shortcut_wheel_idle_act4_pane_g7

0x4e6a,	// (0x0002b00a) shortcut_wheel_idle_act4_pane_g8

0x4e72,	// (0x0002b012) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfb62,	// (0x00035d02) shortcut_wheel_idle_act4_pane_g

0x8909,	// (0x0002eaa9) middle_sk_idle_act4_pane_g1_ParamLimits

0x8909,	// (0x0002eaa9) middle_sk_idle_act4_pane_g1

0xb287,	// (0x00031427) middle_sk_idle_act4_pane_g2_ParamLimits

0xb287,	// (0x00031427) middle_sk_idle_act4_pane_g2

0x0001,

0xfb85,	// (0x00035d25) middle_sk_idle_act4_pane_g_ParamLimits

0xfb85,	// (0x00035d25) middle_sk_idle_act4_pane_g

0xb29f,	// (0x0003143f) middle_sk_idle_act4_pane_t1_ParamLimits

0xb29f,	// (0x0003143f) middle_sk_idle_act4_pane_t1

0xb2ce,	// (0x0003146e) grid_ai_shortcut_pane_ParamLimits

0xb2ce,	// (0x0003146e) grid_ai_shortcut_pane

0xb2eb,	// (0x0003148b) list_highlight_pane_cp16_ParamLimits

0xb2eb,	// (0x0003148b) list_highlight_pane_cp16

0xb2f8,	// (0x00031498) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xb2f8,	// (0x00031498) list_single_idle_plugin_shortcut_pane_g1

0xb304,	// (0x000314a4) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xb304,	// (0x000314a4) list_single_idle_plugin_shortcut_pane_g2

0xb320,	// (0x000314c0) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xb320,	// (0x000314c0) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfb8a,	// (0x00035d2a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfb8a,	// (0x00035d2a) list_single_idle_plugin_shortcut_pane_g

0xb335,	// (0x000314d5) cell_ai_shortcut_pane_ParamLimits

0xb335,	// (0x000314d5) cell_ai_shortcut_pane

0xb34b,	// (0x000314eb) cell_ai_shortcut_pane_g1_ParamLimits

0xb34b,	// (0x000314eb) cell_ai_shortcut_pane_g1

0x4dad,	// (0x0002af4d) ai_gene_pane_1_cp2

0x4f9f,	// (0x0002b13f) ai_gene_pane_2_cp2

0x4fa7,	// (0x0002b147) list_highlight_pane_cp15

0x4fb0,	// (0x0002b150) list_single_idle_plugin_calendar_pane_g1

0x4fa7,	// (0x0002b147) list_highlight_pane_cp17

0x4fb8,	// (0x0002b158) list_single_idle_plugin_calendar_pane_g1_copy1

0x4fc0,	// (0x0002b160) list_single_idle_plugin_player_pane_g1

0xe680,	// (0x00034820) list_single_idle_plugin_player_pane_g2

0x0001,

0xfb91,	// (0x00035d31) list_single_idle_plugin_player_pane_g

0x4fc8,	// (0x0002b168) list_single_idle_plugin_player_pane_t1

0x4fd6,	// (0x0002b176) list_single_idle_plugin_player_pane_t2

0x4fe4,	// (0x0002b184) list_single_idle_plugin_player_pane_t3

0x4ff2,	// (0x0002b192) list_single_idle_plugin_player_pane_t4

0x0003,

0xfb96,	// (0x00035d36) list_single_idle_plugin_player_pane_t

0x5000,	// (0x0002b1a0) wait_bar_pane_cp15

0x5008,	// (0x0002b1a8) grid_ai_notification_pane

0xe680,	// (0x00034820) list_single_idle_plugin_notification_pane_g1

0xb36d,	// (0x0003150d) cell_ai_notification_pane_ParamLimits

0xb36d,	// (0x0003150d) cell_ai_notification_pane

0x501e,	// (0x0002b1be) cell_ai_notification_pane_g1

0x5026,	// (0x0002b1c6) cell_ai_notification_pane_t1

0xb37a,	// (0x0003151a) tb_ext_find_button_pane

0xb382,	// (0x00031522) tb_ext_find_pane_g1

0xb38a,	// (0x0003152a) tb_ext_find_pane_t1

0xc703,	// (0x000328a3) tb_ext_find_button_pane_g1

0x5052,	// (0x0002b1f2) tb_ext_find_button_pane_g2

0x0001,

0xfb9f,	// (0x00035d3f) tb_ext_find_button_pane_g

0xb199,	// (0x00031339) main_idle_act4_pane_t1_ParamLimits

0xb1af,	// (0x0003134f) main_idle_act4_pane_t2_ParamLimits

0xfb5d,	// (0x00035cfd) main_idle_act4_pane_t_ParamLimits

0xb1e3,	// (0x00031383) popup_clock_digital_analogue_window_cp2_ParamLimits

0xb1fa,	// (0x0003139a) sat_plugin_idle_act4_pane_ParamLimits

0xb1fa,	// (0x0003139a) sat_plugin_idle_act4_pane

0xb398,	// (0x00031538) sat_plugin_idle_act4_pane_t1_ParamLimits

0xb398,	// (0x00031538) sat_plugin_idle_act4_pane_t1

0xb3b0,	// (0x00031550) sat_plugin_idle_act4_pane_t2_ParamLimits

0xb3b0,	// (0x00031550) sat_plugin_idle_act4_pane_t2

0xb3c8,	// (0x00031568) sat_plugin_idle_act4_pane_t3_ParamLimits

0xb3c8,	// (0x00031568) sat_plugin_idle_act4_pane_t3

0xb3e0,	// (0x00031580) sat_plugin_idle_act4_pane_t4_ParamLimits

0xb3e0,	// (0x00031580) sat_plugin_idle_act4_pane_t4

0x0003,

0xfba4,	// (0x00035d44) sat_plugin_idle_act4_pane_t_ParamLimits

0xfba4,	// (0x00035d44) sat_plugin_idle_act4_pane_t

0x0a2f,	// (0x00026bcf) popup_battery_window_ParamLimits

0x0a2f,	// (0x00026bcf) popup_battery_window

0xbcb5,	// (0x00031e55) bg_popup_sub_pane_cp25_ParamLimits

0xbcb5,	// (0x00031e55) bg_popup_sub_pane_cp25

0x50a7,	// (0x0002b247) popup_battery_window_g1_ParamLimits

0x50a7,	// (0x0002b247) popup_battery_window_g1

0x50b3,	// (0x0002b253) popup_battery_window_t1_ParamLimits

0x50b3,	// (0x0002b253) popup_battery_window_t1

0x50c5,	// (0x0002b265) popup_battery_window_t2_ParamLimits

0x50c5,	// (0x0002b265) popup_battery_window_t2

0x0001,

0xfbad,	// (0x00035d4d) popup_battery_window_t_ParamLimits

0xfbad,	// (0x00035d4d) popup_battery_window_t

0x97a0,	// (0x0002f940) midp_canvas_pane_ParamLimits

0x97fd,	// (0x0002f99d) midp_keypad_pane_ParamLimits

0x97fd,	// (0x0002f99d) midp_keypad_pane

0xc339,	// (0x000324d9) main_midp_pane_ParamLimits

0xecc8,	// (0x00034e68) signal_pane_g2_cp_ParamLimits

0xb3f8,	// (0x00031598) aid_size_cell_midp_keypad_ParamLimits

0xb3f8,	// (0x00031598) aid_size_cell_midp_keypad

0xb416,	// (0x000315b6) midp_keyp_game_grid_pane_ParamLimits

0xb416,	// (0x000315b6) midp_keyp_game_grid_pane

0xb43d,	// (0x000315dd) midp_keyp_rocker_pane_ParamLimits

0xb43d,	// (0x000315dd) midp_keyp_rocker_pane

0xb47e,	// (0x0003161e) midp_keyp_sk_left_pane_ParamLimits

0xb47e,	// (0x0003161e) midp_keyp_sk_left_pane

0xb4d2,	// (0x00031672) midp_keyp_sk_right_pane_ParamLimits

0xb4d2,	// (0x00031672) midp_keyp_sk_right_pane

0xbb12,	// (0x00031cb2) bg_button_pane_cp03

0xb526,	// (0x000316c6) midp_keyp_sk_left_pane_g1

0xbb12,	// (0x00031cb2) bg_button_pane_cp04

0xb526,	// (0x000316c6) midp_keyp_sk_right_pane_g1

0xefc9,	// (0x00035169) midp_keyp_rocker_pane_g1

0xb52f,	// (0x000316cf) keyp_game_cell_pane_ParamLimits

0xb52f,	// (0x000316cf) keyp_game_cell_pane

0xbb12,	// (0x00031cb2) bg_button_pane_cp02

0xb553,	// (0x000316f3) keyp_game_cell_pane_g1

0x8238,	// (0x0002e3d8) popup_fep_vkb2_window_ParamLimits

0x8238,	// (0x0002e3d8) popup_fep_vkb2_window

0x8917,	// (0x0002eab7) aid_size_cell_vkb2_ParamLimits

0x8917,	// (0x0002eab7) aid_size_cell_vkb2

0x894d,	// (0x0002eaed) popup_fep_vkb2_window_g1_ParamLimits

0x894d,	// (0x0002eaed) popup_fep_vkb2_window_g1

0x8994,	// (0x0002eb34) vkb2_area_bottom_pane_ParamLimits

0x8994,	// (0x0002eb34) vkb2_area_bottom_pane

0x89e8,	// (0x0002eb88) vkb2_area_keypad_pane_ParamLimits

0x89e8,	// (0x0002eb88) vkb2_area_keypad_pane

0x8a30,	// (0x0002ebd0) vkb2_area_top_pane_ParamLimits

0x8a30,	// (0x0002ebd0) vkb2_area_top_pane

0x8ab6,	// (0x0002ec56) vkb2_top_entry_pane_ParamLimits

0x8ab6,	// (0x0002ec56) vkb2_top_entry_pane

0x8ae3,	// (0x0002ec83) vkb2_top_grid_left_pane_ParamLimits

0x8ae3,	// (0x0002ec83) vkb2_top_grid_left_pane

0x8b03,	// (0x0002eca3) vkb2_top_grid_right_pane_ParamLimits

0x8b03,	// (0x0002eca3) vkb2_top_grid_right_pane

0x3d85,	// (0x00029f25) vkb2_cell_keypad_pane_ParamLimits

0x3d85,	// (0x00029f25) vkb2_cell_keypad_pane

0x8b49,	// (0x0002ece9) vkb2_area_bottom_grid_pane_ParamLimits

0x8b49,	// (0x0002ece9) vkb2_area_bottom_grid_pane

0x8b73,	// (0x0002ed13) vkb2_area_bottom_pane_g1_ParamLimits

0x8b73,	// (0x0002ed13) vkb2_area_bottom_pane_g1

0x8b99,	// (0x0002ed39) vkb2_area_bottom_pane_g2_ParamLimits

0x8b99,	// (0x0002ed39) vkb2_area_bottom_pane_g2

0x8bca,	// (0x0002ed6a) vkb2_area_bottom_pane_g3_ParamLimits

0x8bca,	// (0x0002ed6a) vkb2_area_bottom_pane_g3

0x0002,

0xfbb2,	// (0x00035d52) vkb2_area_bottom_pane_g_ParamLimits

0xfbb2,	// (0x00035d52) vkb2_area_bottom_pane_g

0x3f2f,	// (0x0002a0cf) vkb2_top_cell_left_pane_ParamLimits

0x3f2f,	// (0x0002a0cf) vkb2_top_cell_left_pane

0xb55c,	// (0x000316fc) vkb2_top_entry_pane_g1_ParamLimits

0xb55c,	// (0x000316fc) vkb2_top_entry_pane_g1

0xb56a,	// (0x0003170a) vkb2_top_entry_pane_t1_ParamLimits

0xb56a,	// (0x0003170a) vkb2_top_entry_pane_t1

0x5228,	// (0x0002b3c8) vkb2_top_entry_pane_t2_ParamLimits

0x5228,	// (0x0002b3c8) vkb2_top_entry_pane_t2

0x525a,	// (0x0002b3fa) vkb2_top_entry_pane_t3_ParamLimits

0x525a,	// (0x0002b3fa) vkb2_top_entry_pane_t3

0x0002,

0xfbb9,	// (0x00035d59) vkb2_top_entry_pane_t_ParamLimits

0xfbb9,	// (0x00035d59) vkb2_top_entry_pane_t

0x8c34,	// (0x0002edd4) vkb2_top_grid_right_pane_g1_ParamLimits

0x8c34,	// (0x0002edd4) vkb2_top_grid_right_pane_g1

0x3f92,	// (0x0002a132) vkb2_top_grid_right_pane_g2_ParamLimits

0x3f92,	// (0x0002a132) vkb2_top_grid_right_pane_g2

0x3faa,	// (0x0002a14a) vkb2_top_grid_right_pane_g3_ParamLimits

0x3faa,	// (0x0002a14a) vkb2_top_grid_right_pane_g3

0x8c4a,	// (0x0002edea) vkb2_top_grid_right_pane_g4_ParamLimits

0x8c4a,	// (0x0002edea) vkb2_top_grid_right_pane_g4

0x0003,

0xfbc0,	// (0x00035d60) vkb2_top_grid_right_pane_g_ParamLimits

0xfbc0,	// (0x00035d60) vkb2_top_grid_right_pane_g

0x3fd8,	// (0x0002a178) vkb2_top_cell_left_pane_g1

0x3fef,	// (0x0002a18f) vkb2_cell_keypad_pane_g1_ParamLimits

0x3fef,	// (0x0002a18f) vkb2_cell_keypad_pane_g1

0x527e,	// (0x0002b41e) vkb2_cell_keypad_pane_t1_ParamLimits

0x527e,	// (0x0002b41e) vkb2_cell_keypad_pane_t1

0x3ffd,	// (0x0002a19d) vkb2_cell_bottom_grid_pane_ParamLimits

0x3ffd,	// (0x0002a19d) vkb2_cell_bottom_grid_pane

0x4036,	// (0x0002a1d6) vkb2_cell_bottom_grid_pane_g1

0xb22b,	// (0x000313cb) aid_call2_pane_cp02

0xb233,	// (0x000313d3) aid_call_pane_cp02

0xb23b,	// (0x000313db) clock_digital_number_pane_cp10

0xb243,	// (0x000313e3) clock_digital_number_pane_cp11

0xb24b,	// (0x000313eb) clock_digital_number_pane_cp12

0xb253,	// (0x000313f3) clock_digital_number_pane_cp13

0xb25b,	// (0x000313fb) clock_digital_separator_pane_cp10

0xc703,	// (0x000328a3) popup_clock_digital_analogue_window_cp2_g1

0xc703,	// (0x000328a3) popup_clock_digital_analogue_window_cp2_g2

0xb263,	// (0x00031403) popup_clock_digital_analogue_window_cp2_g3

0xc703,	// (0x000328a3) popup_clock_digital_analogue_window_cp2_g4

0xb263,	// (0x00031403) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfb75,	// (0x00035d15) popup_clock_digital_analogue_window_cp2_g

0xb26b,	// (0x0003140b) popup_clock_digital_analogue_window_cp2_t1

0xb279,	// (0x00031419) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfb80,	// (0x00035d20) popup_clock_digital_analogue_window_cp2_t

0xefc9,	// (0x00035169) clock_digital_number_pane_cp10_g1

0xefc9,	// (0x00035169) clock_digital_number_pane_cp10_g2

0x0001,

0x0387,	// (0x00026527) clock_digital_number_pane_cp10_g

0xefc9,	// (0x00035169) clock_digital_separator_pane_cp10_g1

0xefc9,	// (0x00035169) clock_digital_separator_pane_cp10_g2

0x0001,

0x0387,	// (0x00026527) clock_digital_separator_pane_cp10_g

0x4cf7,	// (0x0002ae97) uniindi_top_pane_g3

0x4d08,	// (0x0002aea8) uniindi_top_pane_g4

0x3e10,	// (0x00029fb0) vkb2_row_keypad_pane_ParamLimits

0x3e10,	// (0x00029fb0) vkb2_row_keypad_pane

0x4056,	// (0x0002a1f6) vkb2_cell_t_keypad_pane_ParamLimits

0x4056,	// (0x0002a1f6) vkb2_cell_t_keypad_pane

0x4066,	// (0x0002a206) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x4066,	// (0x0002a206) vkb2_cell_t_keypad_pane_cp08

0x4079,	// (0x0002a219) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x4079,	// (0x0002a219) vkb2_cell_t_keypad_pane_cp09

0x408d,	// (0x0002a22d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x408d,	// (0x0002a22d) vkb2_cell_t_keypad_pane_cp01

0x409e,	// (0x0002a23e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x409e,	// (0x0002a23e) vkb2_cell_t_keypad_pane_cp02

0x40af,	// (0x0002a24f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x40af,	// (0x0002a24f) vkb2_cell_t_keypad_pane_cp03

0x40c0,	// (0x0002a260) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x40c0,	// (0x0002a260) vkb2_cell_t_keypad_pane_cp04

0x40d1,	// (0x0002a271) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x40d1,	// (0x0002a271) vkb2_cell_t_keypad_pane_cp05

0x40e2,	// (0x0002a282) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x40e2,	// (0x0002a282) vkb2_cell_t_keypad_pane_cp06

0x40f3,	// (0x0002a293) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x40f3,	// (0x0002a293) vkb2_cell_t_keypad_pane_cp07

0x4104,	// (0x0002a2a4) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x4104,	// (0x0002a2a4) vkb2_cell_t_keypad_pane_cp10

0x2fa5,	// (0x00029145) vkb2_cell_t_keypad_pane_g1

0x5295,	// (0x0002b435) vkb2_cell_t_keypad_pane_t1

0x096a,	// (0x00026b0a) popup_grid_graphic2_window

0xb5a3,	// (0x00031743) aid_size_cell_graphic2_ParamLimits

0xb5a3,	// (0x00031743) aid_size_cell_graphic2

0xb5ee,	// (0x0003178e) bg_popup_window_pane_cp21_ParamLimits

0xb5ee,	// (0x0003178e) bg_popup_window_pane_cp21

0xb5fc,	// (0x0003179c) graphic2_pages_pane_ParamLimits

0xb5fc,	// (0x0003179c) graphic2_pages_pane

0xb652,	// (0x000317f2) grid_graphic2_control_pane_ParamLimits

0xb652,	// (0x000317f2) grid_graphic2_control_pane

0xb69a,	// (0x0003183a) grid_graphic2_pane_ParamLimits

0xb69a,	// (0x0003183a) grid_graphic2_pane

0xb721,	// (0x000318c1) cell_graphic2_pane

0xbb12,	// (0x00031cb2) main_comp_mode_pane

0x455c,	// (0x0002a6fc) list_ai3_gene_pane_ParamLimits

0xaf6f,	// (0x0003110f) bg_popup_window_pane_cp19_ParamLimits

0x494b,	// (0x0002aaeb) bg_touch_area_indi_pane_ParamLimits

0x494b,	// (0x0002aaeb) bg_touch_area_indi_pane

0x4961,	// (0x0002ab01) bg_touch_area_indi_pane_cp01_ParamLimits

0x4961,	// (0x0002ab01) bg_touch_area_indi_pane_cp01

0x4977,	// (0x0002ab17) bg_touch_area_indi_pane_cp02_ParamLimits

0x4977,	// (0x0002ab17) bg_touch_area_indi_pane_cp02

0x498f,	// (0x0002ab2f) bg_touch_area_indi_pane_cp03_ParamLimits

0x498f,	// (0x0002ab2f) bg_touch_area_indi_pane_cp03

0x49a9,	// (0x0002ab49) popup_slider_window_g1_ParamLimits

0x49c5,	// (0x0002ab65) popup_slider_window_g2_ParamLimits

0x49e1,	// (0x0002ab81) popup_slider_window_g3_ParamLimits

0xfb1b,	// (0x00035cbb) popup_slider_window_g_ParamLimits

0x4a3d,	// (0x0002abdd) popup_slider_window_t1_ParamLimits

0x4ab1,	// (0x0002ac51) small_volume_slider_vertical_pane_ParamLimits

0xb721,	// (0x000318c1) cell_graphic2_pane_ParamLimits

0xb77e,	// (0x0003191e) bg_button_pane_cp10_ParamLimits

0xb77e,	// (0x0003191e) bg_button_pane_cp10

0xb791,	// (0x00031931) bg_button_pane_cp11_ParamLimits

0xb791,	// (0x00031931) bg_button_pane_cp11

0xb7a4,	// (0x00031944) graphic2_pages_pane_g1_ParamLimits

0xb7a4,	// (0x00031944) graphic2_pages_pane_g1

0xb7bf,	// (0x0003195f) graphic2_pages_pane_g2_ParamLimits

0xb7bf,	// (0x0003195f) graphic2_pages_pane_g2

0x0001,

0xfbce,	// (0x00035d6e) graphic2_pages_pane_g_ParamLimits

0xfbce,	// (0x00035d6e) graphic2_pages_pane_g

0xb7d7,	// (0x00031977) graphic2_pages_pane_t1_ParamLimits

0xb7d7,	// (0x00031977) graphic2_pages_pane_t1

0xb7ef,	// (0x0003198f) cell_graphic2_control_pane_ParamLimits

0xb7ef,	// (0x0003198f) cell_graphic2_control_pane

0xb821,	// (0x000319c1) cell_graphic2_pane_g1_ParamLimits

0xb821,	// (0x000319c1) cell_graphic2_pane_g1

0x8c60,	// (0x0002ee00) cell_graphic2_pane_g2_ParamLimits

0x8c60,	// (0x0002ee00) cell_graphic2_pane_g2

0xb5e1,	// (0x00031781) cell_graphic2_pane_g3_ParamLimits

0xb5e1,	// (0x00031781) cell_graphic2_pane_g3

0x8c6d,	// (0x0002ee0d) cell_graphic2_pane_g4_ParamLimits

0x8c6d,	// (0x0002ee0d) cell_graphic2_pane_g4

0xb82e,	// (0x000319ce) cell_graphic2_pane_g5_ParamLimits

0xb82e,	// (0x000319ce) cell_graphic2_pane_g5

0x0004,

0xfbd3,	// (0x00035d73) cell_graphic2_pane_g_ParamLimits

0xfbd3,	// (0x00035d73) cell_graphic2_pane_g

0xb84e,	// (0x000319ee) cell_graphic2_pane_t1_ParamLimits

0xb84e,	// (0x000319ee) cell_graphic2_pane_t1

0xdd7c,	// (0x00033f1c) grid_highlight_pane_cp11_ParamLimits

0xdd7c,	// (0x00033f1c) grid_highlight_pane_cp11

0xbcb5,	// (0x00031e55) bg_button_pane_cp05

0xb883,	// (0x00031a23) cell_graphic2_control_pane_g1

0xefc9,	// (0x00035169) bg_touch_area_indi_pane_g1

0x52a7,	// (0x0002b447) aid_cmod_rocker_key_size

0x52b1,	// (0x0002b451) aid_cmode_itu_key_size

0x52bb,	// (0x0002b45b) main_cmode_video_pane

0x52c5,	// (0x0002b465) main_comp_mode_itu_pane

0x52d1,	// (0x0002b471) main_comp_mode_rocker_pane

0x52dd,	// (0x0002b47d) cell_cmode_rocker_pane_ParamLimits

0x52dd,	// (0x0002b47d) cell_cmode_rocker_pane

0x52ef,	// (0x0002b48f) cell_cmode_itu_pane_ParamLimits

0x52ef,	// (0x0002b48f) cell_cmode_itu_pane

0xc1e2,	// (0x00032382) bg_button_pane_cp06_ParamLimits

0xc1e2,	// (0x00032382) bg_button_pane_cp06

0xf232,	// (0x000353d2) cell_cmode_rocker_pane_g1_ParamLimits

0xf232,	// (0x000353d2) cell_cmode_rocker_pane_g1

0x4b55,	// (0x0002acf5) cell_cmode_rocker_pane_g2_ParamLimits

0x4b55,	// (0x0002acf5) cell_cmode_rocker_pane_g2

0x0001,

0xfbe3,	// (0x00035d83) cell_cmode_rocker_pane_g_ParamLimits

0xfbe3,	// (0x00035d83) cell_cmode_rocker_pane_g

0xbb12,	// (0x00031cb2) bg_button_pane_cp07

0x5304,	// (0x0002b4a4) cell_cmode_itu_pane_g1

0x530d,	// (0x0002b4ad) cell_cmode_itu_pane_t1

0x531b,	// (0x0002b4bb) cell_cmode_itu_pane_t2

0x0001,

0xfbe8,	// (0x00035d88) cell_cmode_itu_pane_t

0x4d79,	// (0x0002af19) aid_touch_ctrl_left

0x4d81,	// (0x0002af21) aid_touch_ctrl_right

0xbb12,	// (0x00031cb2) compa_mode_pane

0xb8a9,	// (0x00031a49) aid_cmod_rocker_key_size_cp

0xb8b3,	// (0x00031a53) aid_cmode_itu_key_size_cp

0x5329,	// (0x0002b4c9) compa_mode_pane_g1

0x5331,	// (0x0002b4d1) compa_mode_pane_g2

0x5339,	// (0x0002b4d9) compa_mode_pane_g3

0x0002,

0xfbed,	// (0x00035d8d) compa_mode_pane_g

0xb8bd,	// (0x00031a5d) main_comp_mode_itu_pane_cp

0xb8c5,	// (0x00031a65) main_comp_mode_rocker_pane_cp

0xb8cd,	// (0x00031a6d) cell_cmode_itu_pane_cp_ParamLimits

0xb8cd,	// (0x00031a6d) cell_cmode_itu_pane_cp

0xb8e2,	// (0x00031a82) cell_cmode_rocker_pane_cp_ParamLimits

0xb8e2,	// (0x00031a82) cell_cmode_rocker_pane_cp

0xc1e2,	// (0x00032382) bg_button_pane_cp06_cp_ParamLimits

0xc1e2,	// (0x00032382) bg_button_pane_cp06_cp

0xf232,	// (0x000353d2) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xf232,	// (0x000353d2) cell_cmode_rocker_pane_g1_cp

0xefc9,	// (0x00035169) cell_cmode_rocker_pane_g2_cp

0xbb12,	// (0x00031cb2) bg_button_pane_cp07_cp

0xb8f4,	// (0x00031a94) cell_cmode_itu_pane_g1_cp

0xb8fd,	// (0x00031a9d) cell_cmode_itu_pane_t1_cp

0xb8fd,	// (0x00031a9d) cell_cmode_itu_pane_t2_cp

0xa699,	// (0x00030839) settings_code_pane_cp2

0xbb82,	// (0x00031d22) bg_popup_window_pane_cp3_ParamLimits

0xbeee,	// (0x0003208e) heading_pane_cp3_ParamLimits

0xbefa,	// (0x0003209a) listscroll_popup_graphic_pane_ParamLimits

0x2c64,	// (0x00028e04) fep_hwr_aid_pane_ParamLimits

0x3ade,	// (0x00029c7e) aid_touch_sctrl_top_ParamLimits

0x3af9,	// (0x00029c99) sctrl_sk_top_pane_g1_ParamLimits

0x2fa5,	// (0x00029145) sctrl_sk_top_pane_g2_ParamLimits

0xfb34,	// (0x00035cd4) sctrl_sk_top_pane_g_ParamLimits

0x3b06,	// (0x00029ca6) sctrl_sk_top_pane_t1_ParamLimits

0x3ade,	// (0x00029c7e) aid_touch_sctrl_bottom_ParamLimits

0x3b06,	// (0x00029ca6) sctrl_sk_bottom_pane_t1_ParamLimits

0x4cc3,	// (0x0002ae63) aid_area_touch_clock

0x8a78,	// (0x0002ec18) aid_vkb2_area_top_pane_cell_ParamLimits

0x8a78,	// (0x0002ec18) aid_vkb2_area_top_pane_cell

0x8b23,	// (0x0002ecc3) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8b23,	// (0x0002ecc3) aid_vkb2_area_bottom_pane_cell

0x5220,	// (0x0002b3c0) popup_char_count_window

0x5341,	// (0x0002b4e1) popup_char_count_window_g1

0x534a,	// (0x0002b4ea) popup_char_count_window_g2

0x5353,	// (0x0002b4f3) popup_char_count_window_g3

0x0002,

0xfbf4,	// (0x00035d94) popup_char_count_window_g

0x535c,	// (0x0002b4fc) popup_char_count_window_t1

0x3bb5,	// (0x00029d55) popup_fep_char_preview_window_ParamLimits

0x3bb5,	// (0x00029d55) popup_fep_char_preview_window

0x8a98,	// (0x0002ec38) vkb2_top_candi_pane_ParamLimits

0x8a98,	// (0x0002ec38) vkb2_top_candi_pane

0xb90b,	// (0x00031aab) cell_vkb2_top_candi_pane_ParamLimits

0xb90b,	// (0x00031aab) cell_vkb2_top_candi_pane

0x4119,	// (0x0002a2b9) bg_popup_fep_char_preview_window_ParamLimits

0x4119,	// (0x0002a2b9) bg_popup_fep_char_preview_window

0x4127,	// (0x0002a2c7) popup_fep_char_preview_window_t1_ParamLimits

0x4127,	// (0x0002a2c7) popup_fep_char_preview_window_t1

0x536a,	// (0x0002b50a) bg_popup_fep_char_preview_window_g1

0x5372,	// (0x0002b512) bg_popup_fep_char_preview_window_g2

0x537a,	// (0x0002b51a) bg_popup_fep_char_preview_window_g3

0x5382,	// (0x0002b522) bg_popup_fep_char_preview_window_g4

0x538a,	// (0x0002b52a) bg_popup_fep_char_preview_window_g5

0x4161,	// (0x0002a301) bg_popup_fep_char_preview_window_g6

0x5392,	// (0x0002b532) bg_popup_fep_char_preview_window_g7

0x539a,	// (0x0002b53a) bg_popup_fep_char_preview_window_g8

0x53a2,	// (0x0002b542) bg_popup_fep_char_preview_window_g9

0x0008,

0xfbfb,	// (0x00035d9b) bg_popup_fep_char_preview_window_g

0x2fa5,	// (0x00029145) cell_vkb2_top_candi_pane_g1_ParamLimits

0x2fa5,	// (0x00029145) cell_vkb2_top_candi_pane_g1

0x2fb3,	// (0x00029153) cell_vkb2_top_candi_pane_g2_ParamLimits

0x2fb3,	// (0x00029153) cell_vkb2_top_candi_pane_g2

0x4337,	// (0x0002a4d7) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4337,	// (0x0002a4d7) cell_vkb2_top_candi_pane_g3

0x4169,	// (0x0002a309) cell_vkb2_top_candi_pane_g4_ParamLimits

0x4169,	// (0x0002a309) cell_vkb2_top_candi_pane_g4

0x31ab,	// (0x0002934b) cell_vkb2_top_candi_pane_g5_ParamLimits

0x31ab,	// (0x0002934b) cell_vkb2_top_candi_pane_g5

0x418a,	// (0x0002a32a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x418a,	// (0x0002a32a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfc0e,	// (0x00035dae) cell_vkb2_top_candi_pane_g_ParamLimits

0xfc0e,	// (0x00035dae) cell_vkb2_top_candi_pane_g

0x4198,	// (0x0002a338) cell_vkb2_top_candi_pane_t1

0x2515,	// (0x000286b5) aid_size_touch_slider_mark_ParamLimits

0x2515,	// (0x000286b5) aid_size_touch_slider_mark

0xb638,	// (0x000317d8) grid_graphic2_catg_pane_ParamLimits

0xb638,	// (0x000317d8) grid_graphic2_catg_pane

0xb6f4,	// (0x00031894) popup_grid_graphic2_window_t1_ParamLimits

0xb6f4,	// (0x00031894) popup_grid_graphic2_window_t1

0xb70a,	// (0x000318aa) popup_grid_graphic2_window_t2_ParamLimits

0xb70a,	// (0x000318aa) popup_grid_graphic2_window_t2

0x0001,

0xfbc9,	// (0x00035d69) popup_grid_graphic2_window_t_ParamLimits

0xfbc9,	// (0x00035d69) popup_grid_graphic2_window_t

0xbcb5,	// (0x00031e55) bg_button_pane_cp05_ParamLimits

0xb883,	// (0x00031a23) cell_graphic2_control_pane_g1_ParamLimits

0xb971,	// (0x00031b11) cell_graphic2_catg_pane_ParamLimits

0xb971,	// (0x00031b11) cell_graphic2_catg_pane

0xbb12,	// (0x00031cb2) bg_button_pane_cp12

0xb983,	// (0x00031b23) cell_graphic2_catg_pane_g1

0x4c8f,	// (0x0002ae2f) cell_tb_ext_pane_t1_ParamLimits

0x3f4f,	// (0x0002a0ef) vkb2_top_cell_right_narrow_pane_ParamLimits

0x3f4f,	// (0x0002a0ef) vkb2_top_cell_right_narrow_pane

0x3f67,	// (0x0002a107) vkb2_top_cell_right_wide_pane_ParamLimits

0x3f67,	// (0x0002a107) vkb2_top_cell_right_wide_pane

0x2c56,	// (0x00028df6) bg_vkb2_func_pane_ParamLimits

0x2c56,	// (0x00028df6) bg_vkb2_func_pane

0x3fd8,	// (0x0002a178) vkb2_top_cell_left_pane_g1_ParamLimits

0x2c56,	// (0x00028df6) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2c56,	// (0x00028df6) bg_vkb2_fuc_pane_cp03

0x4036,	// (0x0002a1d6) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xd179,	// (0x00033319) bg_vkb2_func_pane_g1

0xd181,	// (0x00033321) bg_vkb2_func_pane_g2

0xd191,	// (0x00033331) bg_vkb2_func_pane_g3

0xd189,	// (0x00033329) bg_vkb2_func_pane_g4

0xd199,	// (0x00033339) bg_vkb2_func_pane_g5

0xd1a1,	// (0x00033341) bg_vkb2_func_pane_g6

0xd1a9,	// (0x00033349) bg_vkb2_func_pane_g7

0xd1b1,	// (0x00033351) bg_vkb2_func_pane_g8

0xd171,	// (0x00033311) bg_vkb2_func_pane_g9

0x0008,

0x0633,	// (0x000267d3) bg_vkb2_func_pane_g

0x2c56,	// (0x00028df6) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2c56,	// (0x00028df6) bg_vkb2_fuc_pane_cp01

0x3fd8,	// (0x0002a178) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x3fd8,	// (0x0002a178) vkb2_top_cell_right_wide_pane_g1

0x2c56,	// (0x00028df6) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2c56,	// (0x00028df6) bg_vkb2_fuc_pane_cp02

0x4036,	// (0x0002a1d6) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x4036,	// (0x0002a1d6) vkb2_top_cell_right_narrow_pane_g1

0xaea9,	// (0x00031049) aid_touch_area_decrease_ParamLimits

0xaea9,	// (0x00031049) aid_touch_area_decrease

0xaee3,	// (0x00031083) aid_touch_area_increase_ParamLimits

0xaee3,	// (0x00031083) aid_touch_area_increase

0xaf0b,	// (0x000310ab) aid_touch_area_mute_ParamLimits

0xaf0b,	// (0x000310ab) aid_touch_area_mute

0xaf3b,	// (0x000310db) aid_touch_area_slider_ParamLimits

0xaf3b,	// (0x000310db) aid_touch_area_slider

0xaf7b,	// (0x0003111b) popup_slider_window_g4_ParamLimits

0xaf7b,	// (0x0003111b) popup_slider_window_g4

0xafa3,	// (0x00031143) popup_slider_window_g5_ParamLimits

0xafa3,	// (0x00031143) popup_slider_window_g5

0xafd7,	// (0x00031177) popup_slider_window_g6_ParamLimits

0xafd7,	// (0x00031177) popup_slider_window_g6

0x4a6b,	// (0x0002ac0b) popup_slider_window_t2_ParamLimits

0x4a6b,	// (0x0002ac0b) popup_slider_window_t2

0x0001,

0xfb28,	// (0x00035cc8) popup_slider_window_t_ParamLimits

0xfb28,	// (0x00035cc8) popup_slider_window_t

0xaff3,	// (0x00031193) slider_pane_ParamLimits

0xaff3,	// (0x00031193) slider_pane

0x53aa,	// (0x0002b54a) slider_pane_g1_ParamLimits

0x53aa,	// (0x0002b54a) slider_pane_g1

0x53be,	// (0x0002b55e) slider_pane_g2_ParamLimits

0x53be,	// (0x0002b55e) slider_pane_g2

0x53d4,	// (0x0002b574) slider_pane_g3_ParamLimits

0x53d4,	// (0x0002b574) slider_pane_g3

0x0003,

0xfc1b,	// (0x00035dbb) slider_pane_g_ParamLimits

0xfc1b,	// (0x00035dbb) slider_pane_g

0x9e7e,	// (0x0003001e) popup_tb_float_extension_window_ParamLimits

0x9e7e,	// (0x0003001e) popup_tb_float_extension_window

0x5400,	// (0x0002b5a0) aid_size_cell_tb_float_ext

0xbb12,	// (0x00031cb2) bg_popup_sub_window_cp28

0x540c,	// (0x0002b5ac) grid_tb_float_ext_pane

0x5416,	// (0x0002b5b6) cell_tb_float_ext_pane_ParamLimits

0x5416,	// (0x0002b5b6) cell_tb_float_ext_pane

0x5430,	// (0x0002b5d0) cell_tb_float_ext_pane_g1

0x5439,	// (0x0002b5d9) grid_highlight_pane_cp12

0x887c,	// (0x0002ea1c) cell_last_hwr_side_pane_ParamLimits

0x887c,	// (0x0002ea1c) cell_last_hwr_side_pane

0xefc9,	// (0x00035169) cell_last_hwr_side_pane_g1

0x5442,	// (0x0002b5e2) cell_last_hwr_side_pane_g2

0x0001,

0xfc24,	// (0x00035dc4) cell_last_hwr_side_pane_g

0x8bff,	// (0x0002ed9f) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8bff,	// (0x0002ed9f) vkb2_area_bottom_space_btn_pane

0x2fa5,	// (0x00029145) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5295,	// (0x0002b435) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x4198,	// (0x0002a338) cell_vkb2_top_candi_pane_t1_ParamLimits

0x41b7,	// (0x0002a357) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x41b7,	// (0x0002a357) vkb2_area_bottom_space_btn_pane_g1

0x41f1,	// (0x0002a391) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x41f1,	// (0x0002a391) vkb2_area_bottom_space_btn_pane_g2

0x4227,	// (0x0002a3c7) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x4227,	// (0x0002a3c7) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfc29,	// (0x00035dc9) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfc29,	// (0x00035dc9) vkb2_area_bottom_space_btn_pane_g

0x2d19,	// (0x00028eb9) cel_fep_hwr_func_pane_ParamLimits

0x2d19,	// (0x00028eb9) cel_fep_hwr_func_pane

0x8851,	// (0x0002e9f1) cell_hwr_side_button_pane_ParamLimits

0x8851,	// (0x0002e9f1) cell_hwr_side_button_pane

0x4cc3,	// (0x0002ae63) aid_area_touch_clock_ParamLimits

0xbcb5,	// (0x00031e55) bg_uniindi_top_pane_ParamLimits

0x4cd5,	// (0x0002ae75) uniindi_top_pane_g1_ParamLimits

0x4ceb,	// (0x0002ae8b) uniindi_top_pane_g2_ParamLimits

0x4cf7,	// (0x0002ae97) uniindi_top_pane_g3_ParamLimits

0x4d08,	// (0x0002aea8) uniindi_top_pane_g4_ParamLimits

0xfb4f,	// (0x00035cef) uniindi_top_pane_g_ParamLimits

0x4d15,	// (0x0002aeb5) uniindi_top_pane_t1_ParamLimits

0xbcb5,	// (0x00031e55) bg_vkb2_func_pane_cp01_ParamLimits

0xbcb5,	// (0x00031e55) bg_vkb2_func_pane_cp01

0x544b,	// (0x0002b5eb) cel_fep_hwr_func_pane_g1_ParamLimits

0x544b,	// (0x0002b5eb) cel_fep_hwr_func_pane_g1

0xbcb5,	// (0x00031e55) bg_vkb2_func_pane_cp02_ParamLimits

0xbcb5,	// (0x00031e55) bg_vkb2_func_pane_cp02

0x544b,	// (0x0002b5eb) cell_hwr_side_button_pane_g1_ParamLimits

0x544b,	// (0x0002b5eb) cell_hwr_side_button_pane_g1

0xd089,	// (0x00033229) status_pane_g4_ParamLimits

0xd089,	// (0x00033229) status_pane_g4

0xd0a1,	// (0x00033241) status_pane_t1

0xee59,	// (0x00034ff9) form2_midp_gauge_slider_cont_pane

0xee61,	// (0x00035001) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa952,	// (0x00030af2) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa966,	// (0x00030b06) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf965,	// (0x00035b05) form2_midp_gauge_slider_pane_t_ParamLimits

0xee73,	// (0x00035013) form2_midp_slider_pane_ParamLimits

0x3b75,	// (0x00029d15) aid_size_cell_func_vkb2_ParamLimits

0x3b75,	// (0x00029d15) aid_size_cell_func_vkb2

0x53ec,	// (0x0002b58c) slider_pane_g4_ParamLimits

0x53ec,	// (0x0002b58c) slider_pane_g4

0x8c7a,	// (0x0002ee1a) form2_midp_gauge_slider_pane_t2_cp01

0x8c8a,	// (0x0002ee2a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8c8a,	// (0x0002ee2a) form2_midp_gauge_slider_pane_t3_cp01

0x429c,	// (0x0002a43c) form2_midp_slider_pane_cp01

0xbb12,	// (0x00031cb2) navi_smil_pane

0x547b,	// (0x0002b61b) navi_smil_pane_g1

0x5483,	// (0x0002b623) navi_smil_pane_t1

0x5459,	// (0x0002b5f9) form2_midp_slider_pane_g1

0x5462,	// (0x0002b602) form2_midp_slider_pane_g2

0x546a,	// (0x0002b60a) form2_midp_slider_pane_g3

0x5459,	// (0x0002b5f9) form2_midp_slider_pane_g4

0xb98c,	// (0x00031b2c) form2_midp_slider_pane_g5

0x0004,

0xfc32,	// (0x00035dd2) form2_midp_slider_pane_g

0x4261,	// (0x0002a401) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x4261,	// (0x0002a401) vkb2_area_bottom_space_btn_pane_g4

0xa061,	// (0x00030201) lc0_navi_pane_ParamLimits

0xa061,	// (0x00030201) lc0_navi_pane

0xa0cb,	// (0x0003026b) lc0_stat_indi_pane_ParamLimits

0xa0cb,	// (0x0003026b) lc0_stat_indi_pane

0xa0e0,	// (0x00030280) ls0_title_pane_ParamLimits

0xa0e0,	// (0x00030280) ls0_title_pane

0xc1e2,	// (0x00032382) bg_popup_sub_pane_cp14_ParamLimits

0x4caa,	// (0x0002ae4a) list_uniindi_pane_ParamLimits

0x4cb6,	// (0x0002ae56) uniindi_top_pane_ParamLimits

0x4d51,	// (0x0002aef1) list_single_uniindi_pane_g1_ParamLimits

0x4d64,	// (0x0002af04) list_single_uniindi_pane_t1_ParamLimits

0x8ca9,	// (0x0002ee49) lc0_stat_clock_pane_ParamLimits

0x8ca9,	// (0x0002ee49) lc0_stat_clock_pane

0xb997,	// (0x00031b37) lc0_stat_indi_pane_g1_ParamLimits

0xb997,	// (0x00031b37) lc0_stat_indi_pane_g1

0xb9a4,	// (0x00031b44) lc0_stat_indi_pane_g2_ParamLimits

0xb9a4,	// (0x00031b44) lc0_stat_indi_pane_g2

0x0001,

0xfc3d,	// (0x00035ddd) lc0_stat_indi_pane_g_ParamLimits

0xfc3d,	// (0x00035ddd) lc0_stat_indi_pane_g

0x8cb6,	// (0x0002ee56) lc0_uni_indicator_pane_ParamLimits

0x8cb6,	// (0x0002ee56) lc0_uni_indicator_pane

0x5491,	// (0x0002b631) ls0_title_pane_g1_ParamLimits

0x5491,	// (0x0002b631) ls0_title_pane_g1

0xb9b1,	// (0x00031b51) ls0_title_pane_t1_ParamLimits

0xb9b1,	// (0x00031b51) ls0_title_pane_t1

0x8cc3,	// (0x0002ee63) lc0_uni_indicator_pane_g1_ParamLimits

0x8cc3,	// (0x0002ee63) lc0_uni_indicator_pane_g1

0x54a5,	// (0x0002b645) lc0_stat_clock_pane_t1

0xbb12,	// (0x00031cb2) main_ai5_pane

0x54b3,	// (0x0002b653) ai5_sk_pane_ParamLimits

0x54b3,	// (0x0002b653) ai5_sk_pane

0xb9df,	// (0x00031b7f) cell_ai5_widget_pane_ParamLimits

0xb9df,	// (0x00031b7f) cell_ai5_widget_pane

0x54c0,	// (0x0002b660) aid_size_cell_widget_grid

0x54d4,	// (0x0002b674) bg_ai5_widget_pane_ParamLimits

0x54d4,	// (0x0002b674) bg_ai5_widget_pane

0x551e,	// (0x0002b6be) cell_ai5_widget_pane_g2

0x552e,	// (0x0002b6ce) cell_ai5_widget_pane_g3

0x554d,	// (0x0002b6ed) cell_ai5_widget_pane_g4

0x5559,	// (0x0002b6f9) cell_ai5_widget_pane_g5

0x5565,	// (0x0002b705) cell_ai5_widget_pane_g6

0x5571,	// (0x0002b711) cell_ai5_widget_pane_g7

0x55b9,	// (0x0002b759) cell_ai5_widget_pane_t1_ParamLimits

0x55b9,	// (0x0002b759) cell_ai5_widget_pane_t1

0x55d6,	// (0x0002b776) cell_ai5_widget_pane_t2_ParamLimits

0x55d6,	// (0x0002b776) cell_ai5_widget_pane_t2

0x55ee,	// (0x0002b78e) cell_ai5_widget_pane_t3_ParamLimits

0x55ee,	// (0x0002b78e) cell_ai5_widget_pane_t3

0x5606,	// (0x0002b7a6) cell_ai5_widget_pane_t4_ParamLimits

0x5606,	// (0x0002b7a6) cell_ai5_widget_pane_t4

0x5620,	// (0x0002b7c0) cell_ai5_widget_pane_t5_ParamLimits

0x5620,	// (0x0002b7c0) cell_ai5_widget_pane_t5

0x563f,	// (0x0002b7df) cell_ai5_widget_pane_t6_ParamLimits

0x563f,	// (0x0002b7df) cell_ai5_widget_pane_t6

0x5651,	// (0x0002b7f1) cell_ai5_widget_pane_t7_ParamLimits

0x5651,	// (0x0002b7f1) cell_ai5_widget_pane_t7

0x566a,	// (0x0002b80a) cell_ai5_widget_pane_t8_ParamLimits

0x566a,	// (0x0002b80a) cell_ai5_widget_pane_t8

0x0009,

0xfc57,	// (0x00035df7) cell_ai5_widget_pane_t_ParamLimits

0xfc57,	// (0x00035df7) cell_ai5_widget_pane_t

0x56b6,	// (0x0002b856) grid_ai5_widget_pane

0xc1e2,	// (0x00032382) highlight_cell_ai5_widget_pane_ParamLimits

0xc1e2,	// (0x00032382) highlight_cell_ai5_widget_pane

0xba4a,	// (0x00031bea) ai5_sk_left_pane

0xba54,	// (0x00031bf4) ai5_sk_middle_pane

0xba5e,	// (0x00031bfe) ai5_sk_right_pane

0x56ca,	// (0x0002b86a) bg_ai5_widget_pane_g1_ParamLimits

0x56ca,	// (0x0002b86a) bg_ai5_widget_pane_g1

0x56d6,	// (0x0002b876) bg_ai5_widget_pane_g2_ParamLimits

0x56d6,	// (0x0002b876) bg_ai5_widget_pane_g2

0x56e2,	// (0x0002b882) bg_ai5_widget_pane_g3_ParamLimits

0x56e2,	// (0x0002b882) bg_ai5_widget_pane_g3

0x56ee,	// (0x0002b88e) bg_ai5_widget_pane_g4_ParamLimits

0x56ee,	// (0x0002b88e) bg_ai5_widget_pane_g4

0x56fa,	// (0x0002b89a) bg_ai5_widget_pane_g5_ParamLimits

0x56fa,	// (0x0002b89a) bg_ai5_widget_pane_g5

0x5706,	// (0x0002b8a6) bg_ai5_widget_pane_g6_ParamLimits

0x5706,	// (0x0002b8a6) bg_ai5_widget_pane_g6

0x5712,	// (0x0002b8b2) bg_ai5_widget_pane_g7_ParamLimits

0x5712,	// (0x0002b8b2) bg_ai5_widget_pane_g7

0x571e,	// (0x0002b8be) bg_ai5_widget_pane_g8_ParamLimits

0x571e,	// (0x0002b8be) bg_ai5_widget_pane_g8

0x572a,	// (0x0002b8ca) bg_ai5_widget_pane_g9_ParamLimits

0x572a,	// (0x0002b8ca) bg_ai5_widget_pane_g9

0x0008,

0xfc6c,	// (0x00035e0c) bg_ai5_widget_pane_g_ParamLimits

0xfc6c,	// (0x00035e0c) bg_ai5_widget_pane_g

0x575d,	// (0x0002b8fd) cell_shortcut_ai5_widget_pane_ParamLimits

0x575d,	// (0x0002b8fd) cell_shortcut_ai5_widget_pane

0xbbbe,	// (0x00031d5e) bg_cell_shortcut_ai5_widget_pane

0x576e,	// (0x0002b90e) cell_grid_ai5_widget_pane_g1

0x5777,	// (0x0002b917) highlight_cell_shortcut_ai5_widget_pane

0xd179,	// (0x00033319) ai5_sk_left_pane_g1

0x577f,	// (0x0002b91f) ai5_sk_left_pane_g2

0x5787,	// (0x0002b927) ai5_sk_left_pane_g3

0x578f,	// (0x0002b92f) ai5_sk_left_pane_g4

0x0003,

0xfc7f,	// (0x00035e1f) ai5_sk_left_pane_g

0x5797,	// (0x0002b937) ai5_sk_left_pane_t1

0xd181,	// (0x00033321) ai5_sk_right_pane_g1

0x57a5,	// (0x0002b945) ai5_sk_right_pane_g2

0x57ad,	// (0x0002b94d) ai5_sk_right_pane_g3

0x57b5,	// (0x0002b955) ai5_sk_right_pane_g4

0x0003,

0xfc88,	// (0x00035e28) ai5_sk_right_pane_g

0x57bd,	// (0x0002b95d) ai5_sk_right_pane_t1

0xd181,	// (0x00033321) ai5_sk_middle_pane_g1

0xd179,	// (0x00033319) ai5_sk_middle_pane_g2

0xd199,	// (0x00033339) ai5_sk_middle_pane_g3

0x57ad,	// (0x0002b94d) ai5_sk_middle_pane_g4

0x5787,	// (0x0002b927) ai5_sk_middle_pane_g5

0x57cb,	// (0x0002b96b) ai5_sk_middle_pane_g6

0xba68,	// (0x00031c08) ai5_sk_middle_pane_g7

0x0006,

0xfc91,	// (0x00035e31) ai5_sk_middle_pane_g

0x9f4d,	// (0x000300ed) aid_touch_area_size_lc0_ParamLimits

0x9f4d,	// (0x000300ed) aid_touch_area_size_lc0

0x2fd4,	// (0x00029174) cell_hwr_candidate_pane_t1_ParamLimits

0xcf9d,	// (0x0003313d) aid_touch_navi_pane

0xa1d3,	// (0x00030373) status_dt_navi_pane_ParamLimits

0xa1d3,	// (0x00030373) status_dt_navi_pane

0xa1eb,	// (0x0003038b) status_dt_sta_pane_ParamLimits

0xa1eb,	// (0x0003038b) status_dt_sta_pane

0xba70,	// (0x00031c10) dt_sta_controll_pane

0xba7d,	// (0x00031c1d) dt_sta_indi_pane

0xba8a,	// (0x00031c2a) dt_sta_title_pane

0xbcb5,	// (0x00031e55) bg_dt_sta_indi_pane_ParamLimits

0xbcb5,	// (0x00031e55) bg_dt_sta_indi_pane

0x57d3,	// (0x0002b973) dt_sta_battery_pane

0x57db,	// (0x0002b97b) dt_sta_indi_pane_g1

0x57e4,	// (0x0002b984) dt_sta_indi_pane_g2

0x57ed,	// (0x0002b98d) dt_sta_indi_pane_g3

0x0002,

0xfca0,	// (0x00035e40) dt_sta_indi_pane_g

0x57f6,	// (0x0002b996) dt_sta_signal_pane

0xc1e2,	// (0x00032382) bg_dt_sta_title_pane_ParamLimits

0xc1e2,	// (0x00032382) bg_dt_sta_title_pane

0xde42,	// (0x00033fe2) dt_sta_title_pane_g1

0x57ff,	// (0x0002b99f) dt_sta_title_pane_t1_ParamLimits

0x57ff,	// (0x0002b99f) dt_sta_title_pane_t1

0xbb12,	// (0x00031cb2) bg_dt_sta_control_pane

0x5814,	// (0x0002b9b4) dt_sta_controll_pane_g1

0x581d,	// (0x0002b9bd) bg_dt_sta_title_pane_g1

0x5826,	// (0x0002b9c6) bg_dt_sta_title_pane_g2

0x582f,	// (0x0002b9cf) bg_dt_sta_title_pane_g3

0x0002,

0xfca7,	// (0x00035e47) bg_dt_sta_title_pane_g

0xefc9,	// (0x00035169) bg_dt_sta_indi_pane_g1

0x5838,	// (0x0002b9d8) dt_sta_signal_pane_g1

0x5840,	// (0x0002b9e0) dt_sta_signal_pane_g2

0x0001,

0xfcae,	// (0x00035e4e) dt_sta_signal_pane_g

0x5848,	// (0x0002b9e8) dt_sta_battery_pane_g1

0x5851,	// (0x0002b9f1) dt_sta_battery_pane_t1

0xefc9,	// (0x00035169) bg_dt_sta_control_pane_g1

0xc786,	// (0x00032926) fep_china_uni_eep_pane

0xc78e,	// (0x0003292e) fep_china_uni_entry_pane_ParamLimits

0xc79e,	// (0x0003293e) popup_fep_china_uni_window_g1_ParamLimits

0xc7ae,	// (0x0003294e) popup_fep_china_uni_window_g2_ParamLimits

0xc7ae,	// (0x0003294e) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x000358d5) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x000358d5) popup_fep_china_uni_window_g

0x5860,	// (0x0002ba00) fep_china_uni_eep_pane_g1

0x5868,	// (0x0002ba08) fep_china_uni_eep_pane_t1

0x5472,	// (0x0002b612) aid_touch_area_size_smil_player

0xd05c,	// (0x000331fc) lc0_clock_pane

0xd095,	// (0x00033235) status_pane_g5_ParamLimits

0xd095,	// (0x00033235) status_pane_g5

0x9a12,	// (0x0002fbb2) popup_keymap_window

0xd075,	// (0x00033215) status_icon_pane

0x552e,	// (0x0002b6ce) cell_ai5_widget_pane_g3_ParamLimits

0x554d,	// (0x0002b6ed) cell_ai5_widget_pane_g4_ParamLimits

0x5559,	// (0x0002b6f9) cell_ai5_widget_pane_g5_ParamLimits

0x557d,	// (0x0002b71d) cell_ai5_widget_pane_g8_ParamLimits

0x557d,	// (0x0002b71d) cell_ai5_widget_pane_g8

0x5591,	// (0x0002b731) cell_ai5_widget_pane_g9_ParamLimits

0x5591,	// (0x0002b731) cell_ai5_widget_pane_g9

0x55a5,	// (0x0002b745) cell_ai5_widget_pane_g10_ParamLimits

0x55a5,	// (0x0002b745) cell_ai5_widget_pane_g10

0x5877,	// (0x0002ba17) status_icon_pane_g1

0xbb12,	// (0x00031cb2) bg_popup_sub_pane_cp13

0x587f,	// (0x0002ba1f) popup_keymap_window_t1

0x9845,	// (0x0002f9e5) control_pane_g6_ParamLimits

0x9845,	// (0x0002f9e5) control_pane_g6

0x9852,	// (0x0002f9f2) control_pane_g7_ParamLimits

0x9852,	// (0x0002f9f2) control_pane_g7

0x985f,	// (0x0002f9ff) control_pane_g8_ParamLimits

0x985f,	// (0x0002f9ff) control_pane_g8

0xba70,	// (0x00031c10) dt_sta_controll_pane_ParamLimits

0xba7d,	// (0x00031c1d) dt_sta_indi_pane_ParamLimits

0xba8a,	// (0x00031c2a) dt_sta_title_pane_ParamLimits

0xc124,	// (0x000322c4) aid_size_touch_scroll_bar_cale

0x0a43,	// (0x00026be3) popup_discreet_window_ParamLimits

0x0a43,	// (0x00026be3) popup_discreet_window

0x827e,	// (0x0002e41e) popup_sk_window

0xd71e,	// (0x000338be) bg_popup_sub_pane_cp28_ParamLimits

0xd71e,	// (0x000338be) bg_popup_sub_pane_cp28

0x588d,	// (0x0002ba2d) popup_discreet_window_g1_ParamLimits

0x588d,	// (0x0002ba2d) popup_discreet_window_g1

0x58ad,	// (0x0002ba4d) popup_discreet_window_t1_ParamLimits

0x58ad,	// (0x0002ba4d) popup_discreet_window_t1

0x58cb,	// (0x0002ba6b) popup_discreet_window_t2_ParamLimits

0x58cb,	// (0x0002ba6b) popup_discreet_window_t2

0x0002,

0xfcb3,	// (0x00035e53) popup_discreet_window_t_ParamLimits

0xfcb3,	// (0x00035e53) popup_discreet_window_t

0x42d5,	// (0x0002a475) popup_sk_window_g1

0x42df,	// (0x0002a47f) popup_sk_window_g2

0x0001,

0xfcba,	// (0x00035e5a) popup_sk_window_g

0x42e9,	// (0x0002a489) popup_sk_window_t1

0x42f7,	// (0x0002a497) popup_sk_window_t1_copy1

0x551e,	// (0x0002b6be) cell_ai5_widget_pane_g2_ParamLimits

0x567c,	// (0x0002b81c) cell_ai5_widget_pane_t9_ParamLimits

0x567c,	// (0x0002b81c) cell_ai5_widget_pane_t9

0xbb12,	// (0x00031cb2) main_fep_fshwr2_pane

0xba9c,	// (0x00031c3c) aid_fshwr2_btn_pane

0xbaa4,	// (0x00031c44) aid_fshwr2_syb_pane

0xbaac,	// (0x00031c4c) aid_fshwr2_txt_pane

0xbab4,	// (0x00031c54) fshwr2_func_candi_pane

0xbabe,	// (0x00031c5e) fshwr2_hwr_syb_pane

0xbacc,	// (0x00031c6c) fshwr2_icf_pane

0xbb12,	// (0x00031cb2) fshwr2_icf_bg_pane

0xbad6,	// (0x00031c76) fshwr2_icf_pane_t1_ParamLimits

0xbad6,	// (0x00031c76) fshwr2_icf_pane_t1

0xefc9,	// (0x00035169) fshwr2_func_candi_pane_g1

0x5931,	// (0x0002bad1) fshwr2_func_candi_row_pane_ParamLimits

0x5931,	// (0x0002bad1) fshwr2_func_candi_row_pane

0xbaf0,	// (0x00031c90) cell_fshwr2_syb_pane_ParamLimits

0xbaf0,	// (0x00031c90) cell_fshwr2_syb_pane

0xf232,	// (0x000353d2) fshwr2_hwr_syb_pane_g1_ParamLimits

0xf232,	// (0x000353d2) fshwr2_hwr_syb_pane_g1

0xbb12,	// (0x00031cb2) bg_popup_call_pane_cp01

0x5942,	// (0x0002bae2) fshwr2_func_candi_cell_pane_ParamLimits

0x5942,	// (0x0002bae2) fshwr2_func_candi_cell_pane

0x5973,	// (0x0002bb13) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x5973,	// (0x0002bb13) fshwr2_func_candi_cell_bg_pane

0x598d,	// (0x0002bb2d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x598d,	// (0x0002bb2d) fshwr2_func_candi_cell_pane_g1

0x59ad,	// (0x0002bb4d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x59ad,	// (0x0002bb4d) fshwr2_func_candi_cell_pane_t1

0xbb12,	// (0x00031cb2) bg_button_pane_cp08

0xcc17,	// (0x00032db7) cell_fshwr2_syb_bg_pane

0xbcf3,	// (0x00031e93) cell_fshwr2_syb_bg_pane_g1

0x59c0,	// (0x0002bb60) cell_fshwr2_syb_bg_pane_t1

0xc1e2,	// (0x00032382) main_tmo_pane

0xa4df,	// (0x0003067f) uni_indicator_pane_g1_ParamLimits

0xa4f4,	// (0x00030694) uni_indicator_pane_g2_ParamLimits

0xe158,	// (0x000342f8) uni_indicator_pane_g3_ParamLimits

0xe16e,	// (0x0003430e) uni_indicator_pane_g4_ParamLimits

0xe16e,	// (0x0003430e) uni_indicator_pane_g4

0xe182,	// (0x00034322) uni_indicator_pane_g5_ParamLimits

0xe182,	// (0x00034322) uni_indicator_pane_g5

0xe196,	// (0x00034336) uni_indicator_pane_g6_ParamLimits

0xe196,	// (0x00034336) uni_indicator_pane_g6

0xf872,	// (0x00035a12) uni_indicator_pane_g_ParamLimits

0xae8b,	// (0x0003102b) popup_tmo_note_window_ParamLimits

0xae8b,	// (0x0003102b) popup_tmo_note_window

0xbb12,	// (0x00031cb2) fshwr2_bg_pane

0x599e,	// (0x0002bb3e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x599e,	// (0x0002bb3e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfcbf,	// (0x00035e5f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfcbf,	// (0x00035e5f) fshwr2_func_candi_cell_pane_g

0xefc9,	// (0x00035169) bg_popup_window_pane_cp01

0x59cf,	// (0x0002bb6f) bg_popup_window_pane_g1_cp01

0x59d8,	// (0x0002bb78) bg_popup_window_pane_cp22_ParamLimits

0x59d8,	// (0x0002bb78) bg_popup_window_pane_cp22

0x59e6,	// (0x0002bb86) listscroll_tmo_link_pane_ParamLimits

0x59e6,	// (0x0002bb86) listscroll_tmo_link_pane

0x5a26,	// (0x0002bbc6) popup_tmo_note_window_g1_ParamLimits

0x5a26,	// (0x0002bbc6) popup_tmo_note_window_g1

0x5a33,	// (0x0002bbd3) tmo_note_info_pane_ParamLimits

0x5a33,	// (0x0002bbd3) tmo_note_info_pane

0xbcfb,	// (0x00031e9b) list_tmo_note_info_pane_g1_ParamLimits

0xbcfb,	// (0x00031e9b) list_tmo_note_info_pane_g1

0x5a4d,	// (0x0002bbed) list_tmo_note_info_pane_g2_ParamLimits

0x5a4d,	// (0x0002bbed) list_tmo_note_info_pane_g2

0x0001,

0xfcc4,	// (0x00035e64) list_tmo_note_info_pane_g_ParamLimits

0xfcc4,	// (0x00035e64) list_tmo_note_info_pane_g

0x5a69,	// (0x0002bc09) list_tmo_note_info_text_pane_ParamLimits

0x5a69,	// (0x0002bc09) list_tmo_note_info_text_pane

0x5aab,	// (0x0002bc4b) list_tmo_link_pane

0x5ab8,	// (0x0002bc58) scroll_pane_cp20

0x5ac5,	// (0x0002bc65) list_single_tmo_link_pane_ParamLimits

0x5ac5,	// (0x0002bc65) list_single_tmo_link_pane

0x5ad5,	// (0x0002bc75) list_single_tmo_link_pane_t1

0x5ae3,	// (0x0002bc83) list_tmo_note_info_text_pane_t1_ParamLimits

0x5ae3,	// (0x0002bc83) list_tmo_note_info_text_pane_t1

0x9351,	// (0x0002f4f1) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9351,	// (0x0002f4f1) aid_size_touch_scroll_bar_cp01

0x92ab,	// (0x0002f44b) aid_size_touch_slider_marker

0x826e,	// (0x0002e40e) popup_settings_window_ParamLimits

0x826e,	// (0x0002e40e) popup_settings_window

0x69dd,	// (0x0002cb7d) popup_candi_list_indi_window

0xcf9d,	// (0x0003313d) aid_touch_navi_pane_ParamLimits

0x3ab2,	// (0x00029c52) rs_clock_indi_pane

0x3abb,	// (0x00029c5b) sctrl_sk_bottom_pane_ParamLimits

0x3acc,	// (0x00029c6c) sctrl_sk_top_pane_ParamLimits

0x3bcf,	// (0x00029d6f) popup_fep_tooltip_window

0x54c0,	// (0x0002b660) aid_size_cell_widget_grid_ParamLimits

0x5512,	// (0x0002b6b2) cell_ai5_widget_pane_g1_ParamLimits

0x5512,	// (0x0002b6b2) cell_ai5_widget_pane_g1

0x5565,	// (0x0002b705) cell_ai5_widget_pane_g6_ParamLimits

0x5571,	// (0x0002b711) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfc42,	// (0x00035de2) cell_ai5_widget_pane_g_ParamLimits

0xfc42,	// (0x00035de2) cell_ai5_widget_pane_g

0x56a0,	// (0x0002b840) cell_ai5_widget_pane_t10_ParamLimits

0x56a0,	// (0x0002b840) cell_ai5_widget_pane_t10

0x56b6,	// (0x0002b856) grid_ai5_widget_pane_ParamLimits

0x5736,	// (0x0002b8d6) cell_contacts_ai5_widget_pane_ParamLimits

0x5736,	// (0x0002b8d6) cell_contacts_ai5_widget_pane

0x58e0,	// (0x0002ba80) popup_discreet_window_t3_ParamLimits

0x58e0,	// (0x0002ba80) popup_discreet_window_t3

0x591d,	// (0x0002babd) popup_fshwr2_char_preview_window_ParamLimits

0x591d,	// (0x0002babd) popup_fshwr2_char_preview_window

0xbd12,	// (0x00031eb2) tmo_note_info_pane_t1

0xbd27,	// (0x00031ec7) tmo_note_info_pane_t2

0xbd40,	// (0x00031ee0) tmo_note_info_pane_t3

0x5a87,	// (0x0002bc27) tmo_note_info_pane_t4

0x5a99,	// (0x0002bc39) tmo_note_info_pane_t5

0x0004,

0xfcc9,	// (0x00035e69) tmo_note_info_pane_t

0x5aab,	// (0x0002bc4b) list_tmo_link_pane_ParamLimits

0x5ab8,	// (0x0002bc58) scroll_pane_cp20_ParamLimits

0xbb12,	// (0x00031cb2) bg_popup_fep_char_preview_window_cp01

0x5afc,	// (0x0002bc9c) popup_fshwr2_char_preview_window_t1

0x5b0a,	// (0x0002bcaa) popup_candi_list_indi_window_g1

0x5b13,	// (0x0002bcb3) bg_cell_contacts_ai5_widget_pane

0x5b1f,	// (0x0002bcbf) cell_contacts_ai5_widget_pane_g1

0x5b32,	// (0x0002bcd2) cell_contacts_ai5_widget_pane_g2

0x5b3e,	// (0x0002bcde) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfcd4,	// (0x00035e74) cell_contacts_ai5_widget_pane_g

0x5b50,	// (0x0002bcf0) cell_contacts_ai5_widget_pane_t1

0xc1e2,	// (0x00032382) highlight_cell_shortcut_ai5_widget_pane_cp01

0x5bca,	// (0x0002bd6a) settings_container_pane

0xcc17,	// (0x00032db7) listscroll_set_pane_copy1

0xe9a2,	// (0x00034b42) scroll_pane_cp121_copy1

0x5bd6,	// (0x0002bd76) set_content_pane_copy1

0x5bde,	// (0x0002bd7e) aid_height_set_list_copy1_ParamLimits

0x5bde,	// (0x0002bd7e) aid_height_set_list_copy1

0xda02,	// (0x00033ba2) aid_size_parent_copy1_ParamLimits

0xda02,	// (0x00033ba2) aid_size_parent_copy1

0x5bea,	// (0x0002bd8a) button_value_adjust_pane_cp6_copy1_ParamLimits

0x5bea,	// (0x0002bd8a) button_value_adjust_pane_cp6_copy1

0xc339,	// (0x000324d9) list_highlight_pane_cp2_copy1_ParamLimits

0xc339,	// (0x000324d9) list_highlight_pane_cp2_copy1

0x5bfe,	// (0x0002bd9e) list_set_pane_copy1_ParamLimits

0x5bfe,	// (0x0002bd9e) list_set_pane_copy1

0x5b65,	// (0x0002bd05) main_pane_set_t1_copy1_ParamLimits

0x5b65,	// (0x0002bd05) main_pane_set_t1_copy1

0x5b9f,	// (0x0002bd3f) main_pane_set_t2_copy1_ParamLimits

0x5b9f,	// (0x0002bd3f) main_pane_set_t2_copy1

0x5cab,	// (0x0002be4b) main_pane_set_t3_copy1

0x5cb9,	// (0x0002be59) main_pane_set_t4_copy1

0x5bbe,	// (0x0002bd5e) set_content_pane_g1_copy1_ParamLimits

0x5bbe,	// (0x0002bd5e) set_content_pane_g1_copy1

0x5cc7,	// (0x0002be67) setting_code_pane_copy1

0x5cd1,	// (0x0002be71) setting_slider_graphic_pane_copy1

0x5cd1,	// (0x0002be71) setting_slider_pane_copy1

0x5cd1,	// (0x0002be71) setting_text_pane_copy1

0x5cdb,	// (0x0002be7b) setting_volume_pane_copy1

0x5ce4,	// (0x0002be84) settings_code_pane_cp2_copy1

0x5cec,	// (0x0002be8c) settings_code_pane_cp_copy1_ParamLimits

0x5cec,	// (0x0002be8c) settings_code_pane_cp_copy1

0x5d00,	// (0x0002bea0) volume_set_pane_copy1

0x5d08,	// (0x0002bea8) volume_set_pane_g10_copy1

0x5d10,	// (0x0002beb0) volume_set_pane_g1_copy1

0x5d18,	// (0x0002beb8) volume_set_pane_g2_copy1

0x5d20,	// (0x0002bec0) volume_set_pane_g3_copy1

0x5d28,	// (0x0002bec8) volume_set_pane_g4_copy1

0x5d30,	// (0x0002bed0) volume_set_pane_g5_copy1

0x5d38,	// (0x0002bed8) volume_set_pane_g6_copy1

0x5d40,	// (0x0002bee0) volume_set_pane_g7_copy1

0x5d48,	// (0x0002bee8) volume_set_pane_g8_copy1

0x5d50,	// (0x0002bef0) volume_set_pane_g9_copy1

0xbb82,	// (0x00031d22) bg_set_opt_pane_cp_copy1_ParamLimits

0xbb82,	// (0x00031d22) bg_set_opt_pane_cp_copy1

0x5d58,	// (0x0002bef8) setting_slider_pane_t1_copy1_ParamLimits

0x5d58,	// (0x0002bef8) setting_slider_pane_t1_copy1

0x5d76,	// (0x0002bf16) setting_slider_pane_t2_copy1_ParamLimits

0x5d76,	// (0x0002bf16) setting_slider_pane_t2_copy1

0x5d90,	// (0x0002bf30) setting_slider_pane_t3_copy1_ParamLimits

0x5d90,	// (0x0002bf30) setting_slider_pane_t3_copy1

0x5da8,	// (0x0002bf48) slider_set_pane_copy1_ParamLimits

0x5da8,	// (0x0002bf48) slider_set_pane_copy1

0xc249,	// (0x000323e9) set_opt_bg_pane_g1_copy2

0xc251,	// (0x000323f1) set_opt_bg_pane_g2_copy2

0x5dbe,	// (0x0002bf5e) set_opt_bg_pane_g3_copy2

0xc261,	// (0x00032401) set_opt_bg_pane_g4_copy2

0xc269,	// (0x00032409) set_opt_bg_pane_g5_copy2

0xc271,	// (0x00032411) set_opt_bg_pane_g6_copy2

0x5dc8,	// (0x0002bf68) set_opt_bg_pane_g7_copy2

0x5dd0,	// (0x0002bf70) set_opt_bg_pane_g8_copy2

0x5dda,	// (0x0002bf7a) set_opt_bg_pane_g9_copy2

0x4305,	// (0x0002a4a5) aid_size_touch_slider_mark_copy1_ParamLimits

0x4305,	// (0x0002a4a5) aid_size_touch_slider_mark_copy1

0x5de4,	// (0x0002bf84) slider_set_pane_g1_copy1

0x4319,	// (0x0002a4b9) slider_set_pane_g2_copy1

0x2535,	// (0x000286d5) slider_set_pane_g3_copy1_ParamLimits

0x2535,	// (0x000286d5) slider_set_pane_g3_copy1

0x2549,	// (0x000286e9) slider_set_pane_g4_copy1_ParamLimits

0x2549,	// (0x000286e9) slider_set_pane_g4_copy1

0x2561,	// (0x00028701) slider_set_pane_g5_copy1_ParamLimits

0x2561,	// (0x00028701) slider_set_pane_g5_copy1

0x2535,	// (0x000286d5) slider_set_pane_g6_copy1_ParamLimits

0x2535,	// (0x000286d5) slider_set_pane_g6_copy1

0x4321,	// (0x0002a4c1) slider_set_pane_g7_copy1_ParamLimits

0x4321,	// (0x0002a4c1) slider_set_pane_g7_copy1

0xbb26,	// (0x00031cc6) bg_set_opt_pane_cp2_copy1

0x5ded,	// (0x0002bf8d) setting_slider_graphic_pane_g1_copy1

0x5df6,	// (0x0002bf96) setting_slider_graphic_pane_t1_copy1

0x5e06,	// (0x0002bfa6) setting_slider_graphic_pane_t2_copy1

0x5e16,	// (0x0002bfb6) slider_set_pane_cp_copy1

0x5e26,	// (0x0002bfc6) input_focus_pane_cp1_copy1

0x5e2f,	// (0x0002bfcf) list_set_text_pane_copy1

0x5e37,	// (0x0002bfd7) setting_text_pane_g1_copy1

0x7170,	// (0x0002d310) set_text_pane_t1_copy1

0x5e26,	// (0x0002bfc6) input_focus_pane_cp2_copy1

0x5e37,	// (0x0002bfd7) setting_code_pane_g1_copy1

0x5e40,	// (0x0002bfe0) setting_code_pane_t1_copy1

0x5e4e,	// (0x0002bfee) list_set_graphic_pane_copy1

0xbb26,	// (0x00031cc6) bg_set_opt_pane_cp4_copy1

0xc919,	// (0x00032ab9) list_set_graphic_pane_g1_copy1_ParamLimits

0xc919,	// (0x00032ab9) list_set_graphic_pane_g1_copy1

0x5e62,	// (0x0002c002) list_set_graphic_pane_g2_copy1

0xc931,	// (0x00032ad1) list_set_graphic_pane_t1_copy1_ParamLimits

0xc931,	// (0x00032ad1) list_set_graphic_pane_t1_copy1

0xefc9,	// (0x00035169) rs_clock_indi_pane_g1

0x5e6a,	// (0x0002c00a) rs_clock_indi_pane_t1

0x5e78,	// (0x0002c018) rs_indi_pane

0x5e80,	// (0x0002c020) rs_indi_pane_g1

0x5e89,	// (0x0002c029) rs_indi_pane_g2

0x5e92,	// (0x0002c032) rs_indi_pane_g3

0x0002,

0xfcdb,	// (0x00035e7b) rs_indi_pane_g

0xcc17,	// (0x00032db7) bg_popup_preview_window_pane_cp03

0x5e9b,	// (0x0002c03b) popup_fep_tooltip_window_t1

0x3741,	// (0x000298e1) popup_note2_window_g2_ParamLimits

0x3741,	// (0x000298e1) popup_note2_window_g2

0x0001,

0xfa9f,	// (0x00035c3f) popup_note2_window_g_ParamLimits

0xfa9f,	// (0x00035c3f) popup_note2_window_g

0x4522,	// (0x0002a6c2) bg_popup_sub_pane_cp11_ParamLimits

0x452f,	// (0x0002a6cf) cell_ai3_links_pane_g1_ParamLimits

0x4546,	// (0x0002a6e6) cell_ai3_links_pane_t1

0x7170,	// (0x0002d310) set_text_pane_t1_copy1_ParamLimits

0xcb26,	// (0x00032cc6) cell_graphic_popup_pane_cp2_ParamLimits

0xcb26,	// (0x00032cc6) cell_graphic_popup_pane_cp2

0x5ea9,	// (0x0002c049) cell_graphic_popup_pane_g1_cp2

0xbf37,	// (0x000320d7) cell_graphic_popup_pane_g2_cp2

0x5eb1,	// (0x0002c051) cell_graphic_popup_pane_g3_cp2

0x5eb9,	// (0x0002c059) cell_graphic_popup_pane_t2_cp2

0xbf48,	// (0x000320e8) grid_highlight_pane_cp3_cp2

0xc4e3,	// (0x00032683) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc1e2,	// (0x00032382) main_tmo_pane_ParamLimits

0xae7f,	// (0x0003101f) popup_tmo_big_image_note_window

0x5502,	// (0x0002b6a2) cell_ai5_widget_list_pane

0x550a,	// (0x0002b6aa) cell_ai5_widget_lrg_icon_pane

0xbd12,	// (0x00031eb2) tmo_note_info_pane_t1_ParamLimits

0xbd27,	// (0x00031ec7) tmo_note_info_pane_t2_ParamLimits

0xbd40,	// (0x00031ee0) tmo_note_info_pane_t3_ParamLimits

0x5a87,	// (0x0002bc27) tmo_note_info_pane_t4_ParamLimits

0x5a99,	// (0x0002bc39) tmo_note_info_pane_t5_ParamLimits

0xfcc9,	// (0x00035e69) tmo_note_info_pane_t_ParamLimits

0x5bca,	// (0x0002bd6a) settings_container_pane_ParamLimits

0x5e1e,	// (0x0002bfbe) indicator_popup_pane_cp5

0x5e1e,	// (0x0002bfbe) indicator_popup_pane_cp6

0x5e4e,	// (0x0002bfee) list_set_graphic_pane_copy1_ParamLimits

0xbb12,	// (0x00031cb2) bg_popup_window_pane_cp23

0x5ec7,	// (0x0002c067) popup_tmo_big_image_note_window_g1

0x5ed2,	// (0x0002c072) popup_tmo_big_image_note_window_t1

0x5ee2,	// (0x0002c082) popup_tmo_big_image_note_window_t2

0x5ef2,	// (0x0002c092) popup_tmo_big_image_note_window_t3

0x0002,

0xfce2,	// (0x00035e82) popup_tmo_big_image_note_window_t

0x5f02,	// (0x0002c0a2) cell_ai5_widget_lrg_icon_pane_g1

0x5f0a,	// (0x0002c0aa) cell_ai5_widget_lrg_icon_pane_t1

0x5f18,	// (0x0002c0b8) cell_ai5_widget_list_row_pane_ParamLimits

0x5f18,	// (0x0002c0b8) cell_ai5_widget_list_row_pane

0x5f31,	// (0x0002c0d1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x5f31,	// (0x0002c0d1) cell_ai5_widget_list_row_pane_g1

0x5f3e,	// (0x0002c0de) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x5f3e,	// (0x0002c0de) cell_ai5_widget_list_row_pane_t1

0x5f56,	// (0x0002c0f6) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x5f56,	// (0x0002c0f6) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfce9,	// (0x00035e89) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfce9,	// (0x00035e89) cell_ai5_widget_list_row_pane_t

0x096a,	// (0x00026b0a) main_fep_vtchi_ss_pane

0x5f68,	// (0x0002c108) popup_fep_char_pre_window

0x5f70,	// (0x0002c110) popup_fep_ituss_window

0x5f8a,	// (0x0002c12a) popup_fep_vkbss_window

0x5fa8,	// (0x0002c148) grid_vkbss_keypad_pane_ParamLimits

0x5fa8,	// (0x0002c148) grid_vkbss_keypad_pane

0x5fb8,	// (0x0002c158) ituss_keypad_pane

0x5fce,	// (0x0002c16e) aid_vkbss_key_offset_ParamLimits

0x5fce,	// (0x0002c16e) aid_vkbss_key_offset

0x5fda,	// (0x0002c17a) cell_vkbss_key_pane_ParamLimits

0x5fda,	// (0x0002c17a) cell_vkbss_key_pane

0xdc4c,	// (0x00033dec) bg_cell_vkbss_key_g1_ParamLimits

0xdc4c,	// (0x00033dec) bg_cell_vkbss_key_g1

0x5ff0,	// (0x0002c190) cell_vkbss_key_3p_pane_ParamLimits

0x5ff0,	// (0x0002c190) cell_vkbss_key_3p_pane

0x600a,	// (0x0002c1aa) cell_vkbss_key_g1_ParamLimits

0x600a,	// (0x0002c1aa) cell_vkbss_key_g1

0x6024,	// (0x0002c1c4) cell_vkbss_key_t1_ParamLimits

0x6024,	// (0x0002c1c4) cell_vkbss_key_t1

0x604f,	// (0x0002c1ef) cell_ituss_key_pane_ParamLimits

0x604f,	// (0x0002c1ef) cell_ituss_key_pane

0x605f,	// (0x0002c1ff) bg_cell_ituss_key_g1_ParamLimits

0x605f,	// (0x0002c1ff) bg_cell_ituss_key_g1

0x606b,	// (0x0002c20b) cell_ituss_key_pane_g1_ParamLimits

0x606b,	// (0x0002c20b) cell_ituss_key_pane_g1

0x6077,	// (0x0002c217) cell_ituss_key_pane_g2_ParamLimits

0x6077,	// (0x0002c217) cell_ituss_key_pane_g2

0x0001,

0xfcee,	// (0x00035e8e) cell_ituss_key_pane_g_ParamLimits

0xfcee,	// (0x00035e8e) cell_ituss_key_pane_g

0x6090,	// (0x0002c230) cell_ituss_key_t1_ParamLimits

0x6090,	// (0x0002c230) cell_ituss_key_t1

0x60be,	// (0x0002c25e) cell_ituss_key_t2_ParamLimits

0x60be,	// (0x0002c25e) cell_ituss_key_t2

0x60ef,	// (0x0002c28f) cell_ituss_key_t3_ParamLimits

0x60ef,	// (0x0002c28f) cell_ituss_key_t3

0x6120,	// (0x0002c2c0) cell_ituss_key_t4_ParamLimits

0x6120,	// (0x0002c2c0) cell_ituss_key_t4

0x0003,

0xfcf3,	// (0x00035e93) cell_ituss_key_t_ParamLimits

0xfcf3,	// (0x00035e93) cell_ituss_key_t

0x6151,	// (0x0002c2f1) cell_vkbss_key_3p_pane_g1

0x6159,	// (0x0002c2f9) cell_vkbss_key_3p_pane_g2

0x6161,	// (0x0002c301) cell_vkbss_key_3p_pane_g3

0x0002,

0xfcfc,	// (0x00035e9c) cell_vkbss_key_3p_pane_g

0xbb12,	// (0x00031cb2) bg_popup_fep_char_preview_window_cp02

0x6169,	// (0x0002c309) popup_fep_char_pre_window_t1

0xba40,	// (0x00031be0) main_ai5_sk_pane

0x5b13,	// (0x0002bcb3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x5b1f,	// (0x0002bcbf) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x5b32,	// (0x0002bcd2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x5b3e,	// (0x0002bcde) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfcd4,	// (0x00035e74) cell_contacts_ai5_widget_pane_g_ParamLimits

0x5b50,	// (0x0002bcf0) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc1e2,	// (0x00032382) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xbd55,	// (0x00031ef5) main_ai5_sk_pane_g1

0xd55c,	// (0x000336fc) popup_query_code_window_g1

0x5f7f,	// (0x0002c11f) popup_fep_vkb_icf_pane

0x5f93,	// (0x0002c133) popup_fep_vtchi_icf_pane

0xc1e2,	// (0x00032382) bg_icf_pane

0x6187,	// (0x0002c327) list_vkb_icf_pane

0xc1e2,	// (0x00032382) bg_icf_pane_cp01

0x619f,	// (0x0002c33f) vtchi_icf_list_pane

0x61af,	// (0x0002c34f) list_vkb_icf_pane_t1_ParamLimits

0x61af,	// (0x0002c34f) list_vkb_icf_pane_t1

0x61c9,	// (0x0002c369) vtchi_icf_list_pane_t1_ParamLimits

0x61c9,	// (0x0002c369) vtchi_icf_list_pane_t1

0x5f70,	// (0x0002c110) popup_fep_ituss_window_ParamLimits

0x5f93,	// (0x0002c133) popup_fep_vtchi_icf_pane_ParamLimits

0x5fb8,	// (0x0002c158) ituss_keypad_pane_ParamLimits

0x5fc4,	// (0x0002c164) ituss_sks_pane

0xc1e2,	// (0x00032382) bg_icf_pane_ParamLimits

0x6178,	// (0x0002c318) icf_edit_indi_pane_ParamLimits

0x6178,	// (0x0002c318) icf_edit_indi_pane

0x6187,	// (0x0002c327) list_vkb_icf_pane_ParamLimits

0xc1e2,	// (0x00032382) bg_icf_pane_cp01_ParamLimits

0x6193,	// (0x0002c333) icf_edit_indi_pane_cp01_ParamLimits

0x6193,	// (0x0002c333) icf_edit_indi_pane_cp01

0x61a7,	// (0x0002c347) vtchi_query_pane

0xf232,	// (0x000353d2) icf_edit_indi_pane_g1_ParamLimits

0xf232,	// (0x000353d2) icf_edit_indi_pane_g1

0x61f0,	// (0x0002c390) icf_edit_indi_pane_g2_ParamLimits

0x61f0,	// (0x0002c390) icf_edit_indi_pane_g2

0x0001,

0xfd03,	// (0x00035ea3) icf_edit_indi_pane_g_ParamLimits

0xfd03,	// (0x00035ea3) icf_edit_indi_pane_g

0x61fc,	// (0x0002c39c) icf_edit_indi_pane_t1

0x620a,	// (0x0002c3aa) bg_input_focus_pane_cp042

0xc11b,	// (0x000322bb) vtchi_button_pane

0x6213,	// (0x0002c3b3) vtchi_query_pane_t1

0x6221,	// (0x0002c3c1) vtchi_query_pane_t2

0x622f,	// (0x0002c3cf) vtchi_query_pane_t3

0x0002,

0xfd08,	// (0x00035ea8) vtchi_query_pane_t

0xbb12,	// (0x00031cb2) bg_button_pane_cp13

0x623d,	// (0x0002c3dd) vtchi_button_pane_g1

0x6245,	// (0x0002c3e5) ituss_sks_pane_g1

0x6250,	// (0x0002c3f0) ituss_sks_pane_g2

0x0001,

0xfd0f,	// (0x00035eaf) ituss_sks_pane_g

0x6258,	// (0x0002c3f8) ituss_sks_pane_t1

0x6266,	// (0x0002c406) ituss_sks_pane_t2

0x0001,

0xfd14,	// (0x00035eb4) ituss_sks_pane_t

0xec79,	// (0x00034e19) indicator_nsta_pane_cp_g1

0xec82,	// (0x00034e22) indicator_nsta_pane_cp_g2

0xec8a,	// (0x00034e2a) indicator_nsta_pane_cp_g3

0xec92,	// (0x00034e32) indicator_nsta_pane_cp_g4

0xec9a,	// (0x00034e3a) indicator_nsta_pane_cp_g5

0xeca2,	// (0x00034e42) indicator_nsta_pane_cp_g6

0x0005,

0x02f0,	// (0x00026490) indicator_nsta_pane_cp_g

0xb865,	// (0x00031a05) cell_graphic2_pane_t2_ParamLimits

0xb865,	// (0x00031a05) cell_graphic2_pane_t2

0x0001,

0xfbde,	// (0x00035d7e) cell_graphic2_pane_t_ParamLimits

0xfbde,	// (0x00035d7e) cell_graphic2_pane_t

0xb89b,	// (0x00031a3b) cell_graphic2_control_pane_t1

0x972c,	// (0x0002f8cc) signal_pane_g3_ParamLimits

0x972c,	// (0x0002f8cc) signal_pane_g3

0x9740,	// (0x0002f8e0) signal_pane_g4_ParamLimits

0x9740,	// (0x0002f8e0) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small

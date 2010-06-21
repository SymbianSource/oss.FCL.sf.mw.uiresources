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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0003012c };

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
0x554c,	// (0x00035678) Screen

0x5558,	// (0x00035684) application_window_ParamLimits

0x5558,	// (0x00035684) application_window

0xf4ac,	// (0x0003f5d8) screen_g1

0x55b4,	// (0x000356e0) area_bottom_pane_ParamLimits

0x55b4,	// (0x000356e0) area_bottom_pane

0x5674,	// (0x000357a0) area_top_pane_ParamLimits

0x5674,	// (0x000357a0) area_top_pane

0x5712,	// (0x0003583e) main_pane_ParamLimits

0x5712,	// (0x0003583e) main_pane

0xf4b6,	// (0x0003f5e2) misc_graphics

0x91a4,	// (0x000392d0) battery_pane_ParamLimits

0x91a4,	// (0x000392d0) battery_pane

0x9e5e,	// (0x00039f8a) bg_status_flat_pane_g8

0x9e66,	// (0x00039f92) bg_status_flat_pane_g9

0x9266,	// (0x00039392) context_pane_ParamLimits

0x9266,	// (0x00039392) context_pane

0x938a,	// (0x000394b6) navi_pane_ParamLimits

0x938a,	// (0x000394b6) navi_pane

0x941a,	// (0x00039546) signal_pane_ParamLimits

0x941a,	// (0x00039546) signal_pane

0x0008,

0xf86f,	// (0x0003f99b) bg_status_flat_pane_g

0x9487,	// (0x000395b3) status_pane_g1_ParamLimits

0x9487,	// (0x000395b3) status_pane_g1

0x9493,	// (0x000395bf) status_pane_g2_ParamLimits

0x9493,	// (0x000395bf) status_pane_g2

0x949f,	// (0x000395cb) status_pane_g3_ParamLimits

0x949f,	// (0x000395cb) status_pane_g3

0x0004,

0xf796,	// (0x0003f8c2) status_pane_g_ParamLimits

0xf796,	// (0x0003f8c2) status_pane_g

0x94d3,	// (0x000395ff) title_pane_ParamLimits

0x94d3,	// (0x000395ff) title_pane

0x9512,	// (0x0003963e) uni_indicator_pane_ParamLimits

0x9512,	// (0x0003963e) uni_indicator_pane

0x90ce,	// (0x000391fa) bg_list_pane_ParamLimits

0x90ce,	// (0x000391fa) bg_list_pane

0x90ee,	// (0x0003921a) find_pane

0x90f6,	// (0x00039222) listscroll_app_pane_ParamLimits

0x90f6,	// (0x00039222) listscroll_app_pane

0x9102,	// (0x0003922e) listscroll_form_pane

0x6f93,	// (0x000370bf) listscroll_gen_pane_ParamLimits

0x6f93,	// (0x000370bf) listscroll_gen_pane

0x6fa7,	// (0x000370d3) listscroll_set_pane

0x6319,	// (0x00036445) main_idle_act_pane

0x8dc7,	// (0x00038ef3) main_idle_trad_pane

0x8dc7,	// (0x00038ef3) main_list_empty_pane

0x90f6,	// (0x00039222) main_midp_pane

0x911c,	// (0x00039248) main_pane_g1_ParamLimits

0x911c,	// (0x00039248) main_pane_g1

0x6fbd,	// (0x000370e9) popup_ai_message_window_ParamLimits

0x6fbd,	// (0x000370e9) popup_ai_message_window

0x7071,	// (0x0003719d) popup_fep_china_uni_window_ParamLimits

0x7071,	// (0x0003719d) popup_fep_china_uni_window

0x70d1,	// (0x000371fd) popup_fep_japan_candidate_window_ParamLimits

0x70d1,	// (0x000371fd) popup_fep_japan_candidate_window

0x70fb,	// (0x00037227) popup_fep_japan_predictive_window_ParamLimits

0x70fb,	// (0x00037227) popup_fep_japan_predictive_window

0x7131,	// (0x0003725d) popup_find_window

0x713e,	// (0x0003726a) popup_grid_graphic_window_ParamLimits

0x713e,	// (0x0003726a) popup_grid_graphic_window

0x716c,	// (0x00037298) popup_large_graphic_colour_window

0x7192,	// (0x000372be) popup_menu_window_ParamLimits

0x7192,	// (0x000372be) popup_menu_window

0x735c,	// (0x00037488) popup_note_image_window

0x7346,	// (0x00037472) popup_note_wait_window_ParamLimits

0x7346,	// (0x00037472) popup_note_wait_window

0x7346,	// (0x00037472) popup_note_window_ParamLimits

0x7346,	// (0x00037472) popup_note_window

0x73c2,	// (0x000374ee) popup_query_code_window_ParamLimits

0x73c2,	// (0x000374ee) popup_query_code_window

0x73d8,	// (0x00037504) popup_query_data_code_window_ParamLimits

0x73d8,	// (0x00037504) popup_query_data_code_window

0x73fb,	// (0x00037527) popup_query_data_window_ParamLimits

0x73fb,	// (0x00037527) popup_query_data_window

0x741d,	// (0x00037549) popup_query_sat_info_window_ParamLimits

0x741d,	// (0x00037549) popup_query_sat_info_window

0x745c,	// (0x00037588) popup_snote_single_graphic_window_ParamLimits

0x745c,	// (0x00037588) popup_snote_single_graphic_window

0x745c,	// (0x00037588) popup_snote_single_text_window_ParamLimits

0x745c,	// (0x00037588) popup_snote_single_text_window

0x7473,	// (0x0003759f) popup_sub_window_general

0x75b9,	// (0x000376e5) popup_window_general_ParamLimits

0x75b9,	// (0x000376e5) popup_window_general

0x912a,	// (0x00039256) power_save_pane

0x6e15,	// (0x00036f41) control_pane_g1_ParamLimits

0x6e15,	// (0x00036f41) control_pane_g1

0x6e3e,	// (0x00036f6a) control_pane_g2_ParamLimits

0x6e3e,	// (0x00036f6a) control_pane_g2

0x9091,	// (0x000391bd) control_pane_g3_ParamLimits

0x9091,	// (0x000391bd) control_pane_g3

0x0007,

0xf77e,	// (0x0003f8aa) control_pane_g_ParamLimits

0xf77e,	// (0x0003f8aa) control_pane_g

0x6e8a,	// (0x00036fb6) control_pane_t1_ParamLimits

0x6e8a,	// (0x00036fb6) control_pane_t1

0x6ee4,	// (0x00037010) control_pane_t2_ParamLimits

0x6ee4,	// (0x00037010) control_pane_t2

0x0002,

0xf78f,	// (0x0003f8bb) control_pane_t_ParamLimits

0xf78f,	// (0x0003f8bb) control_pane_t

0x8fb6,	// (0x000390e2) navi_navi_volume_pane_cp1

0x8fbe,	// (0x000390ea) status_small_icon_pane

0x8fc6,	// (0x000390f2) status_small_pane_g1_ParamLimits

0x8fc6,	// (0x000390f2) status_small_pane_g1

0x8ffa,	// (0x00039126) status_small_pane_g2_ParamLimits

0x8ffa,	// (0x00039126) status_small_pane_g2

0x9006,	// (0x00039132) status_small_pane_g3_ParamLimits

0x9006,	// (0x00039132) status_small_pane_g3

0x9012,	// (0x0003913e) status_small_pane_g4_ParamLimits

0x9012,	// (0x0003913e) status_small_pane_g4

0x901e,	// (0x0003914a) status_small_pane_g5_ParamLimits

0x901e,	// (0x0003914a) status_small_pane_g5

0x902c,	// (0x00039158) status_small_pane_g6_ParamLimits

0x902c,	// (0x00039158) status_small_pane_g6

0x0007,

0xf76d,	// (0x0003f899) status_small_pane_g_ParamLimits

0xf76d,	// (0x0003f899) status_small_pane_g

0x905b,	// (0x00039187) status_small_pane_t1

0x907d,	// (0x000391a9) status_small_wait_pane_ParamLimits

0x907d,	// (0x000391a9) status_small_wait_pane

0x670c,	// (0x00036838) aid_levels_signal_ParamLimits

0x670c,	// (0x00036838) aid_levels_signal

0x671b,	// (0x00036847) signal_pane_g1_ParamLimits

0x671b,	// (0x00036847) signal_pane_g1

0x6730,	// (0x0003685c) signal_pane_g2_ParamLimits

0x6730,	// (0x0003685c) signal_pane_g2

0x0003,

0xf6fe,	// (0x0003f82a) signal_pane_g_ParamLimits

0xf6fe,	// (0x0003f82a) signal_pane_g

0x6761,	// (0x0003688d) context_pane_g1

0x5971,	// (0x00035a9d) title_pane_g1

0x59a3,	// (0x00035acf) title_pane_t1

0xf4cc,	// (0x0003f5f8) title_pane_t2

0xf4f2,	// (0x0003f61e) title_pane_t3

0x0002,

0xf557,	// (0x0003f683) title_pane_t

0x952a,	// (0x00039656) aid_levels_battery_ParamLimits

0x952a,	// (0x00039656) aid_levels_battery

0x953b,	// (0x00039667) battery_pane_g1_ParamLimits

0x953b,	// (0x00039667) battery_pane_g1

0x9551,	// (0x0003967d) battery_pane_g2_ParamLimits

0x9551,	// (0x0003967d) battery_pane_g2

0x0001,

0xf7a1,	// (0x0003f8cd) battery_pane_g_ParamLimits

0xf7a1,	// (0x0003f8cd) battery_pane_g

0xa7a8,	// (0x0003a8d4) uni_indicator_pane_g1

0xa7bb,	// (0x0003a8e7) uni_indicator_pane_g2

0xa7cd,	// (0x0003a8f9) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x0003fa43) uni_indicator_pane_g

0x6d31,	// (0x00036e5d) navi_icon_pane_ParamLimits

0x6d31,	// (0x00036e5d) navi_icon_pane

0x6c6d,	// (0x00036d99) navi_midp_pane

0x6d4d,	// (0x00036e79) navi_navi_pane

0x6d57,	// (0x00036e83) navi_text_pane_ParamLimits

0x6d57,	// (0x00036e83) navi_text_pane

0xf4ac,	// (0x0003f5d8) status_small_wait_pane_g1

0x25aa,	// (0x000326d6) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x0003fa3e) status_small_wait_pane_g

0xa4bb,	// (0x0003a5e7) navi_navi_icon_text_pane

0xa4c3,	// (0x0003a5ef) navi_navi_pane_g1_ParamLimits

0xa4c3,	// (0x0003a5ef) navi_navi_pane_g1

0xa4d5,	// (0x0003a601) navi_navi_pane_g2_ParamLimits

0xa4d5,	// (0x0003a601) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x0003fa0c) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x0003fa0c) navi_navi_pane_g

0xa4e7,	// (0x0003a613) navi_navi_tabs_pane

0xa4f0,	// (0x0003a61c) navi_navi_text_pane

0xa4bb,	// (0x0003a5e7) navi_navi_volume_pane

0xa497,	// (0x0003a5c3) navi_text_pane_t1

0xa48b,	// (0x0003a5b7) navi_icon_pane_g1

0xa3de,	// (0x0003a50a) navi_navi_text_pane_t1

0x7896,	// (0x000379c2) navi_navi_volume_pane_g1

0x789e,	// (0x000379ca) volume_small_pane

0xa344,	// (0x0003a470) navi_navi_icon_text_pane_g1

0xa34c,	// (0x0003a478) navi_navi_icon_text_pane_t1

0x6d4d,	// (0x00036e79) navi_tabs_2_long_pane

0x6d4d,	// (0x00036e79) navi_tabs_2_pane

0x6d4d,	// (0x00036e79) navi_tabs_3_long_pane

0x6d4d,	// (0x00036e79) navi_tabs_3_pane

0x6d4d,	// (0x00036e79) navi_tabs_4_pane

0x7876,	// (0x000379a2) tabs_2_active_pane_ParamLimits

0x7876,	// (0x000379a2) tabs_2_active_pane

0x7886,	// (0x000379b2) tabs_2_passive_pane_ParamLimits

0x7886,	// (0x000379b2) tabs_2_passive_pane

0x7844,	// (0x00037970) tabs_3_active_pane_ParamLimits

0x7844,	// (0x00037970) tabs_3_active_pane

0x7854,	// (0x00037980) tabs_3_passive_pane_ParamLimits

0x7854,	// (0x00037980) tabs_3_passive_pane

0x7865,	// (0x00037991) tabs_3_passive_pane_cp_ParamLimits

0x7865,	// (0x00037991) tabs_3_passive_pane_cp

0x77f8,	// (0x00037924) tabs_4_active_pane_ParamLimits

0x77f8,	// (0x00037924) tabs_4_active_pane

0x780b,	// (0x00037937) tabs_4_passive_pane_ParamLimits

0x780b,	// (0x00037937) tabs_4_passive_pane

0x781c,	// (0x00037948) tabs_4_passive_pane_cp_ParamLimits

0x781c,	// (0x00037948) tabs_4_passive_pane_cp

0x782d,	// (0x00037959) tabs_4_passive_pane_cp2_ParamLimits

0x782d,	// (0x00037959) tabs_4_passive_pane_cp2

0x77d4,	// (0x00037900) tabs_2_long_active_pane_ParamLimits

0x77d4,	// (0x00037900) tabs_2_long_active_pane

0x77e6,	// (0x00037912) tabs_2_long_passive_pane_ParamLimits

0x77e6,	// (0x00037912) tabs_2_long_passive_pane

0x7795,	// (0x000378c1) tabs_3_long_active_pane_ParamLimits

0x7795,	// (0x000378c1) tabs_3_long_active_pane

0x77a8,	// (0x000378d4) tabs_3_long_passive_pane_ParamLimits

0x77a8,	// (0x000378d4) tabs_3_long_passive_pane

0x77c1,	// (0x000378ed) tabs_3_long_passive_pane_cp_ParamLimits

0x77c1,	// (0x000378ed) tabs_3_long_passive_pane_cp

0x773b,	// (0x00037867) volume_small_pane_g1

0x7744,	// (0x00037870) volume_small_pane_g2

0x774d,	// (0x00037879) volume_small_pane_g3

0x7756,	// (0x00037882) volume_small_pane_g4

0x775f,	// (0x0003788b) volume_small_pane_g5

0x7768,	// (0x00037894) volume_small_pane_g6

0x7771,	// (0x0003789d) volume_small_pane_g7

0x777a,	// (0x000378a6) volume_small_pane_g8

0x7783,	// (0x000378af) volume_small_pane_g9

0x778c,	// (0x000378b8) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x0003f9d8) volume_small_pane_g

0xf504,	// (0x0003f630) bg_active_tab_pane_cp2_ParamLimits

0xf504,	// (0x0003f630) bg_active_tab_pane_cp2

0x5a0b,	// (0x00035b37) tabs_3_active_pane_g1

0x5a13,	// (0x00035b3f) tabs_3_active_pane_t1

0xf504,	// (0x0003f630) bg_passive_tab_pane_cp2_ParamLimits

0xf504,	// (0x0003f630) bg_passive_tab_pane_cp2

0x5a0b,	// (0x00035b37) tabs_3_passive_pane_g1

0x5a13,	// (0x00035b3f) tabs_3_passive_pane_t1

0xf504,	// (0x0003f630) bg_active_tab_pane_cp3_ParamLimits

0xf504,	// (0x0003f630) bg_active_tab_pane_cp3

0x5a25,	// (0x00035b51) tabs_4_active_pane_g1

0x5a2d,	// (0x00035b59) tabs_4_active_pane_t1

0xf504,	// (0x0003f630) bg_passive_tab_pane_cp3_ParamLimits

0xf504,	// (0x0003f630) bg_passive_tab_pane_cp3

0x5a25,	// (0x00035b51) tabs_4_1_passive_pane_g1

0x5a2d,	// (0x00035b59) tabs_4_1_passive_pane_t1

0x90f6,	// (0x00039222) list_highlight_pane_cp2

0xaa16,	// (0x0003ab42) list_set_pane_ParamLimits

0xaa16,	// (0x0003ab42) list_set_pane

0xaad8,	// (0x0003ac04) main_pane_set_t1_ParamLimits

0xaad8,	// (0x0003ac04) main_pane_set_t1

0xaaf8,	// (0x0003ac24) main_pane_set_t2_ParamLimits

0xaaf8,	// (0x0003ac24) main_pane_set_t2

0xab0c,	// (0x0003ac38) main_pane_set_t3_ParamLimits

0xab0c,	// (0x0003ac38) main_pane_set_t3

0xab20,	// (0x0003ac4c) main_pane_set_t4_ParamLimits

0xab20,	// (0x0003ac4c) main_pane_set_t4

0x0003,

0xf97c,	// (0x0003faa8) main_pane_set_t_ParamLimits

0xf97c,	// (0x0003faa8) main_pane_set_t

0xab34,	// (0x0003ac60) setting_code_pane

0xab3e,	// (0x0003ac6a) setting_slider_graphic_pane

0xab3e,	// (0x0003ac6a) setting_slider_pane

0xab3e,	// (0x0003ac6a) setting_text_pane

0xab3e,	// (0x0003ac6a) setting_volume_pane

0x5a3f,	// (0x00035b6b) volume_set_pane

0xf504,	// (0x0003f630) bg_set_opt_pane_cp

0x5a49,	// (0x00035b75) setting_slider_pane_t1

0x5a62,	// (0x00035b8e) setting_slider_pane_t2

0x5a7c,	// (0x00035ba8) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003f68a) setting_slider_pane_t

0x5a94,	// (0x00035bc0) slider_set_pane

0xf4b6,	// (0x0003f5e2) bg_set_opt_pane_cp2

0xf512,	// (0x0003f63e) setting_slider_graphic_pane_g1

0x5aaa,	// (0x00035bd6) setting_slider_graphic_pane_t1

0x5aba,	// (0x00035be6) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003f691) setting_slider_graphic_pane_t

0x5aca,	// (0x00035bf6) slider_set_pane_cp

0xf4b6,	// (0x0003f5e2) input_focus_pane_cp1

0xa9d7,	// (0x0003ab03) list_set_text_pane

0xf4ac,	// (0x0003f5d8) setting_text_pane_g1

0xf4b6,	// (0x0003f5e2) input_focus_pane_cp2

0xf4ac,	// (0x0003f5d8) setting_code_pane_g1

0xf51b,	// (0x0003f647) setting_code_pane_t1

0x3fef,	// (0x0003411b) set_text_pane_t1_ParamLimits

0x3fef,	// (0x0003411b) set_text_pane_t1

0x293f,	// (0x00032a6b) set_opt_bg_pane_g1

0x2947,	// (0x00032a73) set_opt_bg_pane_g2

0xa9af,	// (0x0003aadb) set_opt_bg_pane_g3

0x2957,	// (0x00032a83) set_opt_bg_pane_g4

0x295f,	// (0x00032a8b) set_opt_bg_pane_g5

0x2967,	// (0x00032a93) set_opt_bg_pane_g6

0xa9b9,	// (0x0003aae5) set_opt_bg_pane_g7

0xa9c3,	// (0x0003aaef) set_opt_bg_pane_g8

0xa9cd,	// (0x0003aaf9) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x0003fa95) set_opt_bg_pane_g

0xa9a2,	// (0x0003aace) slider_set_pane_g1

0x7947,	// (0x00037a73) slider_set_pane_g2

0x0006,

0xf95a,	// (0x0003fa86) slider_set_pane_g

0x78a7,	// (0x000379d3) volume_set_pane_g1

0x78b1,	// (0x000379dd) volume_set_pane_g2

0x78bb,	// (0x000379e7) volume_set_pane_g3

0x78c5,	// (0x000379f1) volume_set_pane_g4

0x78cf,	// (0x000379fb) volume_set_pane_g5

0x78d9,	// (0x00037a05) volume_set_pane_g6

0x78e3,	// (0x00037a0f) volume_set_pane_g7

0x78ed,	// (0x00037a19) volume_set_pane_g8

0x78f7,	// (0x00037a23) volume_set_pane_g9

0x7901,	// (0x00037a2d) volume_set_pane_g10

0x0009,

0xf932,	// (0x0003fa5e) volume_set_pane_g

0x5ad2,	// (0x00035bfe) indicator_pane_ParamLimits

0x5ad2,	// (0x00035bfe) indicator_pane

0x5ade,	// (0x00035c0a) main_idle_pane_g2_ParamLimits

0x5ade,	// (0x00035c0a) main_idle_pane_g2

0x5b06,	// (0x00035c32) main_pane_idle_g1_ParamLimits

0x5b06,	// (0x00035c32) main_pane_idle_g1

0xf529,	// (0x0003f655) popup_clock_digital_analogue_window_ParamLimits

0xf529,	// (0x0003f655) popup_clock_digital_analogue_window

0x5b14,	// (0x00035c40) soft_indicator_pane_ParamLimits

0x5b14,	// (0x00035c40) soft_indicator_pane

0x5b22,	// (0x00035c4e) wallpaper_pane_ParamLimits

0x5b22,	// (0x00035c4e) wallpaper_pane

0xf4ac,	// (0x0003f5d8) wallpaper_pane_g1

0x5b2e,	// (0x00035c5a) indicator_pane_g1_ParamLimits

0x5b2e,	// (0x00035c5a) indicator_pane_g1

0xae2e,	// (0x0003af5a) navi_navi_icon_text_pane_srt_g1

0x22fc,	// (0x00032428) soft_indicator_pane_t1

0x2316,	// (0x00032442) aid_ps_area_pane

0x5b3a,	// (0x00035c66) aid_ps_clock_pane

0x2327,	// (0x00032453) aid_ps_indicator_pane

0x2333,	// (0x0003245f) indicator_ps_pane_ParamLimits

0x2333,	// (0x0003245f) indicator_ps_pane

0x2342,	// (0x0003246e) power_save_pane_g1_ParamLimits

0x2342,	// (0x0003246e) power_save_pane_g1

0x234e,	// (0x0003247a) power_save_pane_g2_ParamLimits

0x234e,	// (0x0003247a) power_save_pane_g2

0x5568,	// (0x00035694) aid_navinavi_width_pane

0x2316,	// (0x00032442) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003f696) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003f696) power_save_pane_g

0x235c,	// (0x00032488) power_save_pane_t1_ParamLimits

0x235c,	// (0x00032488) power_save_pane_t1

0x5b3a,	// (0x00035c66) aid_ps_clock_pane_ParamLimits

0x2327,	// (0x00032453) aid_ps_indicator_pane_ParamLimits

0x236e,	// (0x0003249a) power_save_pane_t4_ParamLimits

0x236e,	// (0x0003249a) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003f69b) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003f69b) power_save_pane_t

0x2398,	// (0x000324c4) power_save_t3_ParamLimits

0x2398,	// (0x000324c4) power_save_t3

0x2383,	// (0x000324af) power_save_t2_ParamLimits

0x2383,	// (0x000324af) power_save_t2

0x23ad,	// (0x000324d9) indicator_ps_pane_g1

0x5b48,	// (0x00035c74) ai_gene_pane_ParamLimits

0x5b48,	// (0x00035c74) ai_gene_pane

0x5b54,	// (0x00035c80) ai_links_pane_ParamLimits

0x5b54,	// (0x00035c80) ai_links_pane

0x5b60,	// (0x00035c8c) indicator_pane_cp1_ParamLimits

0x5b60,	// (0x00035c8c) indicator_pane_cp1

0x5b6c,	// (0x00035c98) main_pane_idle_g1_cp_ParamLimits

0x5b6c,	// (0x00035c98) main_pane_idle_g1_cp

0x23b6,	// (0x000324e2) popup_ai_links_title_window

0x5b78,	// (0x00035ca4) soft_indicator_pane_cp1_ParamLimits

0x5b78,	// (0x00035ca4) soft_indicator_pane_cp1

0xa796,	// (0x0003a8c2) ai_links_pane_g1

0xa79f,	// (0x0003a8cb) grid_ai_links_pane

0xa77b,	// (0x0003a8a7) ai_gene_pane_1

0xa784,	// (0x0003a8b0) ai_gene_pane_2

0xa78d,	// (0x0003a8b9) list_highlight_pane_cp4

0xa75b,	// (0x0003a887) cell_ai_link_pane_ParamLimits

0xa75b,	// (0x0003a887) cell_ai_link_pane

0xa753,	// (0x0003a87f) cell_ai_link_pane_g1

0x25aa,	// (0x000326d6) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x0003fa39) cell_ai_link_pane_g

0xf4b6,	// (0x0003f5e2) grid_highlight_cp2

0xf4b6,	// (0x0003f5e2) bg_popup_sub_pane_cp1

0x23cd,	// (0x000324f9) popup_ai_links_title_window_t1

0xa69f,	// (0x0003a7cb) ai_gene_pane_1_g1_ParamLimits

0xa69f,	// (0x0003a7cb) ai_gene_pane_1_g1

0xa6ab,	// (0x0003a7d7) ai_gene_pane_1_g2_ParamLimits

0xa6ab,	// (0x0003a7d7) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x0003fa2f) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x0003fa2f) ai_gene_pane_1_g

0xa6b8,	// (0x0003a7e4) ai_gene_pane_1_t1_ParamLimits

0xa6b8,	// (0x0003a7e4) ai_gene_pane_1_t1

0xa6ec,	// (0x0003a818) grid_ai_soft_ind_pane

0xa68a,	// (0x0003a7b6) ai_gene_pane_2_t1_ParamLimits

0xa68a,	// (0x0003a7b6) ai_gene_pane_2_t1

0x5b84,	// (0x00035cb0) main_pane_empty_t1_ParamLimits

0x5b84,	// (0x00035cb0) main_pane_empty_t1

0x5b9c,	// (0x00035cc8) main_pane_empty_t2_ParamLimits

0x5b9c,	// (0x00035cc8) main_pane_empty_t2

0x5bb1,	// (0x00035cdd) main_pane_empty_t3_ParamLimits

0x5bb1,	// (0x00035cdd) main_pane_empty_t3

0x5bc3,	// (0x00035cef) main_pane_empty_t4_ParamLimits

0x5bc3,	// (0x00035cef) main_pane_empty_t4

0x5bd5,	// (0x00035d01) main_pane_empty_t5_ParamLimits

0x5bd5,	// (0x00035d01) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003f6a0) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003f6a0) main_pane_empty_t

0x2990,	// (0x00032abc) bg_popup_window_pane_ParamLimits

0x2990,	// (0x00032abc) bg_popup_window_pane

0xa3ec,	// (0x0003a518) find_popup_pane_cp2_ParamLimits

0xa3ec,	// (0x0003a518) find_popup_pane_cp2

0xa3f8,	// (0x0003a524) heading_pane_ParamLimits

0xa3f8,	// (0x0003a524) heading_pane

0xf4b6,	// (0x0003f5e2) bg_popup_sub_pane

0xa366,	// (0x0003a492) bg_popup_window_pane_g1_ParamLimits

0xa366,	// (0x0003a492) bg_popup_window_pane_g1

0xa372,	// (0x0003a49e) bg_popup_window_pane_g2_ParamLimits

0xa372,	// (0x0003a49e) bg_popup_window_pane_g2

0xa37e,	// (0x0003a4aa) bg_popup_window_pane_g3_ParamLimits

0xa37e,	// (0x0003a4aa) bg_popup_window_pane_g3

0xa38a,	// (0x0003a4b6) bg_popup_window_pane_g4_ParamLimits

0xa38a,	// (0x0003a4b6) bg_popup_window_pane_g4

0xa396,	// (0x0003a4c2) bg_popup_window_pane_g5_ParamLimits

0xa396,	// (0x0003a4c2) bg_popup_window_pane_g5

0xa3a2,	// (0x0003a4ce) bg_popup_window_pane_g6_ParamLimits

0xa3a2,	// (0x0003a4ce) bg_popup_window_pane_g6

0xa3ae,	// (0x0003a4da) bg_popup_window_pane_g7_ParamLimits

0xa3ae,	// (0x0003a4da) bg_popup_window_pane_g7

0xa3ba,	// (0x0003a4e6) bg_popup_window_pane_g8_ParamLimits

0xa3ba,	// (0x0003a4e6) bg_popup_window_pane_g8

0xa3c6,	// (0x0003a4f2) bg_popup_window_pane_g9_ParamLimits

0xa3c6,	// (0x0003a4f2) bg_popup_window_pane_g9

0xa3d2,	// (0x0003a4fe) bg_popup_window_pane_g10_ParamLimits

0xa3d2,	// (0x0003a4fe) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x0003f9f7) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x0003f9f7) bg_popup_window_pane_g

0xa2fb,	// (0x0003a427) bg_popup_heading_pane_ParamLimits

0xa2fb,	// (0x0003a427) bg_popup_heading_pane

0x7a43,	// (0x00037b6f) tabs_4_passive_pane_cp_srt_ParamLimits

0x7a43,	// (0x00037b6f) tabs_4_passive_pane_cp_srt

0x7a55,	// (0x00037b81) tabs_4_passive_pane_srt_ParamLimits

0xa30f,	// (0x0003a43b) heading_pane_g2

0x7a55,	// (0x00037b81) tabs_4_passive_pane_srt

0x90f6,	// (0x00039222) bg_passive_tab_pane_cp3_srt_ParamLimits

0x90f6,	// (0x00039222) bg_passive_tab_pane_cp3_srt

0xa317,	// (0x0003a443) heading_pane_t1_ParamLimits

0xa317,	// (0x0003a443) heading_pane_t1

0xa32e,	// (0x0003a45a) heading_pane_t2_ParamLimits

0xa32e,	// (0x0003a45a) heading_pane_t2

0x0001,

0xf8c6,	// (0x0003f9f2) heading_pane_t_ParamLimits

0xf8c6,	// (0x0003f9f2) heading_pane_t

0x9e26,	// (0x00039f52) bg_popup_heading_pane_g1

0x9ed5,	// (0x0003a001) bg_popup_heading_pane_g2

0x9edf,	// (0x0003a00b) bg_popup_heading_pane_g3

0x9ee9,	// (0x0003a015) bg_popup_heading_pane_g4

0x9ef3,	// (0x0003a01f) bg_popup_heading_pane_g5

0x9efd,	// (0x0003a029) bg_popup_heading_pane_g6

0x9f05,	// (0x0003a031) bg_popup_heading_pane_g7

0x9f0d,	// (0x0003a039) bg_popup_heading_pane_g8

0x9f17,	// (0x0003a043) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x0003f9ae) bg_popup_heading_pane_g

0x9626,	// (0x00039752) bg_popup_sub_pane_g1

0x9636,	// (0x00039762) bg_popup_sub_pane_g2

0x962e,	// (0x0003975a) bg_popup_sub_pane_g3

0x9646,	// (0x00039772) bg_popup_sub_pane_g4

0x963e,	// (0x0003976a) bg_popup_sub_pane_g5

0x964e,	// (0x0003977a) bg_popup_sub_pane_g6

0x9656,	// (0x00039782) bg_popup_sub_pane_g7

0x9666,	// (0x00039792) bg_popup_sub_pane_g8

0x965e,	// (0x0003978a) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x0003f988) bg_popup_sub_pane_g

0xf540,	// (0x0003f66c) bg_popup_window_pane_cp5_ParamLimits

0xf540,	// (0x0003f66c) bg_popup_window_pane_cp5

0x23ea,	// (0x00032516) popup_note_window_g1_ParamLimits

0x23ea,	// (0x00032516) popup_note_window_g1

0x23f6,	// (0x00032522) popup_note_window_t1_ParamLimits

0x23f6,	// (0x00032522) popup_note_window_t1

0x240c,	// (0x00032538) popup_note_window_t2_ParamLimits

0x240c,	// (0x00032538) popup_note_window_t2

0x2422,	// (0x0003254e) popup_note_window_t3_ParamLimits

0x2422,	// (0x0003254e) popup_note_window_t3

0x2438,	// (0x00032564) popup_note_window_t4_ParamLimits

0x2438,	// (0x00032564) popup_note_window_t4

0x2460,	// (0x0003258c) popup_note_window_t5_ParamLimits

0x2460,	// (0x0003258c) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003f6ab) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003f6ab) popup_note_window_t

0x24aa,	// (0x000325d6) bg_popup_window_pane_cp6_ParamLimits

0x24aa,	// (0x000325d6) bg_popup_window_pane_cp6

0x9da2,	// (0x00039ece) popup_note_image_window_g1_ParamLimits

0x9da2,	// (0x00039ece) popup_note_image_window_g1

0x9dae,	// (0x00039eda) popup_note_image_window_g2_ParamLimits

0x9dae,	// (0x00039eda) popup_note_image_window_g2

0x0001,

0xf850,	// (0x0003f97c) popup_note_image_window_g_ParamLimits

0xf850,	// (0x0003f97c) popup_note_image_window_g

0x9dc7,	// (0x00039ef3) popup_note_image_window_t1_ParamLimits

0x9dc7,	// (0x00039ef3) popup_note_image_window_t1

0x9de0,	// (0x00039f0c) popup_note_image_window_t2_ParamLimits

0x9de0,	// (0x00039f0c) popup_note_image_window_t2

0x9df9,	// (0x00039f25) popup_note_image_window_t3_ParamLimits

0x9df9,	// (0x00039f25) popup_note_image_window_t3

0x0002,

0xf855,	// (0x0003f981) popup_note_image_window_t_ParamLimits

0xf855,	// (0x0003f981) popup_note_image_window_t

0x9c62,	// (0x00039d8e) bg_popup_window_pane_cp7_ParamLimits

0x9c62,	// (0x00039d8e) bg_popup_window_pane_cp7

0x9c92,	// (0x00039dbe) popup_note_wait_window_g1_ParamLimits

0x9c92,	// (0x00039dbe) popup_note_wait_window_g1

0x9c9e,	// (0x00039dca) popup_note_wait_window_g2_ParamLimits

0x9c9e,	// (0x00039dca) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x0003f96a) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x0003f96a) popup_note_wait_window_g

0x9cb6,	// (0x00039de2) popup_note_wait_window_t1_ParamLimits

0x9cb6,	// (0x00039de2) popup_note_wait_window_t1

0x9cdd,	// (0x00039e09) popup_note_wait_window_t2_ParamLimits

0x9cdd,	// (0x00039e09) popup_note_wait_window_t2

0x9cfb,	// (0x00039e27) popup_note_wait_window_t3_ParamLimits

0x9cfb,	// (0x00039e27) popup_note_wait_window_t3

0x9d0e,	// (0x00039e3a) popup_note_wait_window_t4_ParamLimits

0x9d0e,	// (0x00039e3a) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x0003f971) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x0003f971) popup_note_wait_window_t

0x9d33,	// (0x00039e5f) wait_bar_pane_ParamLimits

0x9d33,	// (0x00039e5f) wait_bar_pane

0xf4b6,	// (0x0003f5e2) wait_anim_pane

0xf4b6,	// (0x0003f5e2) wait_border_pane

0xf4ac,	// (0x0003f5d8) wait_anim_pane_g1

0xf4ac,	// (0x0003f5d8) wait_anim_pane_g2

0x0001,

0xf6f9,	// (0x0003f825) wait_anim_pane_g

0x9c06,	// (0x00039d32) wait_border_pane_g1

0x9c11,	// (0x00039d3d) wait_border_pane_g2

0x9c1a,	// (0x00039d46) wait_border_pane_g3

0x0002,

0xf837,	// (0x0003f963) wait_border_pane_g

0x9a70,	// (0x00039b9c) bg_popup_window_pane_cp16_ParamLimits

0x9a70,	// (0x00039b9c) bg_popup_window_pane_cp16

0x9b70,	// (0x00039c9c) indicator_popup_pane_cp4_ParamLimits

0x9b70,	// (0x00039c9c) indicator_popup_pane_cp4

0x9b84,	// (0x00039cb0) popup_query_data_window_t1_ParamLimits

0x9b84,	// (0x00039cb0) popup_query_data_window_t1

0x9b96,	// (0x00039cc2) popup_query_data_window_t2_ParamLimits

0x9b96,	// (0x00039cc2) popup_query_data_window_t2

0x9baf,	// (0x00039cdb) popup_query_data_window_t3_ParamLimits

0x9baf,	// (0x00039cdb) popup_query_data_window_t3

0x0002,

0xf830,	// (0x0003f95c) popup_query_data_window_t_ParamLimits

0xf830,	// (0x0003f95c) popup_query_data_window_t

0x9bc9,	// (0x00039cf5) query_popup_data_pane_ParamLimits

0x9bc9,	// (0x00039cf5) query_popup_data_pane

0x9bdd,	// (0x00039d09) query_popup_data_pane_cp1_ParamLimits

0x9bdd,	// (0x00039d09) query_popup_data_pane_cp1

0x9a70,	// (0x00039b9c) bg_popup_window_pane_cp10_ParamLimits

0x9a70,	// (0x00039b9c) bg_popup_window_pane_cp10

0x9aa2,	// (0x00039bce) indicator_popup_pane_ParamLimits

0x9aa2,	// (0x00039bce) indicator_popup_pane

0x9ac4,	// (0x00039bf0) popup_query_code_window_t1_ParamLimits

0x9ac4,	// (0x00039bf0) popup_query_code_window_t1

0x9ade,	// (0x00039c0a) popup_query_code_window_t2_ParamLimits

0x9ade,	// (0x00039c0a) popup_query_code_window_t2

0x9b27,	// (0x00039c53) popup_query_code_window_t3_ParamLimits

0x9b27,	// (0x00039c53) popup_query_code_window_t3

0x0002,

0xf829,	// (0x0003f955) popup_query_code_window_t_ParamLimits

0xf829,	// (0x0003f955) popup_query_code_window_t

0x9b56,	// (0x00039c82) query_popup_pane_ParamLimits

0x9b56,	// (0x00039c82) query_popup_pane

0x24aa,	// (0x000325d6) bg_popup_window_pane_cp15_ParamLimits

0x24aa,	// (0x000325d6) bg_popup_window_pane_cp15

0x24ca,	// (0x000325f6) indicator_popup_pane_cp1_ParamLimits

0x24ca,	// (0x000325f6) indicator_popup_pane_cp1

0x24dd,	// (0x00032609) indicator_popup_pane_cp2_ParamLimits

0x24dd,	// (0x00032609) indicator_popup_pane_cp2

0x24f8,	// (0x00032624) popup_query_data_code_window_g1_ParamLimits

0x24f8,	// (0x00032624) popup_query_data_code_window_g1

0x250b,	// (0x00032637) popup_query_data_code_window_t1_ParamLimits

0x250b,	// (0x00032637) popup_query_data_code_window_t1

0x251d,	// (0x00032649) popup_query_data_code_window_t2_ParamLimits

0x251d,	// (0x00032649) popup_query_data_code_window_t2

0x252f,	// (0x0003265b) popup_query_data_code_window_t3_ParamLimits

0x252f,	// (0x0003265b) popup_query_data_code_window_t3

0x2545,	// (0x00032671) popup_query_data_code_window_t4_ParamLimits

0x2545,	// (0x00032671) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003f6b6) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003f6b6) popup_query_data_code_window_t

0x7627,	// (0x00037753) list_single_midp_graphic_pane_g3

0x255f,	// (0x0003268b) query_popup_data_pane_cp2_ParamLimits

0x2572,	// (0x0003269e) query_popup_pane_cp2_ParamLimits

0x2572,	// (0x0003269e) query_popup_pane_cp2

0xf4b6,	// (0x0003f5e2) bg_popup_window_pane_cp11

0x9a5c,	// (0x00039b88) heading_pane_cp5

0x260b,	// (0x00032737) listscroll_popup_info_pane

0xf4b6,	// (0x0003f5e2) input_focus_pane_cp3

0x258d,	// (0x000326b9) query_popup_pane_t1

0x259b,	// (0x000326c7) list_popup_info_pane_ParamLimits

0x259b,	// (0x000326c7) list_popup_info_pane

0x25aa,	// (0x000326d6) listscroll_popup_info_pane_g1

0x25b2,	// (0x000326de) scroll_pane_cp7

0x25bc,	// (0x000326e8) popup_info_list_pane_t1_ParamLimits

0x25bc,	// (0x000326e8) popup_info_list_pane_t1

0x25d6,	// (0x00032702) popup_info_list_pane_t2_ParamLimits

0x25d6,	// (0x00032702) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003f6bf) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003f6bf) popup_info_list_pane_t

0xf4b6,	// (0x0003f5e2) bg_popup_window_pane_cp12

0xae48,	// (0x0003af74) find_popup_pane

0xf504,	// (0x0003f630) bg_popup_window_pane_cp3

0x25f0,	// (0x0003271c) heading_pane_cp3

0x25fc,	// (0x00032728) listscroll_popup_graphic_pane

0xf4b6,	// (0x0003f5e2) bg_popup_window_pane_cp4

0x5c37,	// (0x00035d63) heading_pane_cp4

0x260b,	// (0x00032737) listscroll_popup_colour_pane

0x5c41,	// (0x00035d6d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x5c41,	// (0x00035d6d) cell_large_graphic_colour_none_popup_pane

0x5c55,	// (0x00035d81) grid_large_graphic_colour_popup_pane_ParamLimits

0x5c55,	// (0x00035d81) grid_large_graphic_colour_popup_pane

0x5c81,	// (0x00035dad) listscroll_popup_colour_pane_g1_ParamLimits

0x5c81,	// (0x00035dad) listscroll_popup_colour_pane_g1

0x5c98,	// (0x00035dc4) listscroll_popup_colour_pane_g2_ParamLimits

0x5c98,	// (0x00035dc4) listscroll_popup_colour_pane_g2

0x5caf,	// (0x00035ddb) listscroll_popup_colour_pane_g3_ParamLimits

0x5caf,	// (0x00035ddb) listscroll_popup_colour_pane_g3

0x5cbf,	// (0x00035deb) listscroll_popup_colour_pane_g4_ParamLimits

0x5cbf,	// (0x00035deb) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003f6c4) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003f6c4) listscroll_popup_colour_pane_g

0x2613,	// (0x0003273f) scroll_pane_cp6_ParamLimits

0x2613,	// (0x0003273f) scroll_pane_cp6

0x5cd3,	// (0x00035dff) cell_large_graphic_colour_popup_pane_ParamLimits

0x5cd3,	// (0x00035dff) cell_large_graphic_colour_popup_pane

0x2625,	// (0x00032751) cell_large_graphic_colour_none_popup_pane_t1

0xf4b6,	// (0x0003f5e2) grid_highlight_pane_cp5

0x2634,	// (0x00032760) cell_large_graphic_colour_popup_pane_g1

0x263c,	// (0x00032768) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003f6cd) cell_large_graphic_colour_popup_pane_g

0x2644,	// (0x00032770) cell_large_graphic_colour_popup_pane_g2_copy1

0x264d,	// (0x00032779) grid_highlight_pane_cp4

0x2655,	// (0x00032781) bg_popup_window_pane_cp8_ParamLimits

0x2655,	// (0x00032781) bg_popup_window_pane_cp8

0x2670,	// (0x0003279c) popup_snote_single_text_window_g1_ParamLimits

0x2670,	// (0x0003279c) popup_snote_single_text_window_g1

0x2682,	// (0x000327ae) popup_snote_single_text_window_t1_ParamLimits

0x2682,	// (0x000327ae) popup_snote_single_text_window_t1

0x2695,	// (0x000327c1) popup_snote_single_text_window_t2_ParamLimits

0x2695,	// (0x000327c1) popup_snote_single_text_window_t2

0x26a8,	// (0x000327d4) popup_snote_single_text_window_t3_ParamLimits

0x26a8,	// (0x000327d4) popup_snote_single_text_window_t3

0x26e1,	// (0x0003280d) popup_snote_single_text_window_t4_ParamLimits

0x26e1,	// (0x0003280d) popup_snote_single_text_window_t4

0x2715,	// (0x00032841) popup_snote_single_text_window_t5_ParamLimits

0x2715,	// (0x00032841) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003f6d2) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003f6d2) popup_snote_single_text_window_t

0x2744,	// (0x00032870) bg_popup_window_pane_cp9_ParamLimits

0x2744,	// (0x00032870) bg_popup_window_pane_cp9

0x2670,	// (0x0003279c) popup_snote_single_graphic_window_g1_ParamLimits

0x2670,	// (0x0003279c) popup_snote_single_graphic_window_g1

0x2752,	// (0x0003287e) popup_snote_single_graphic_window_g2_ParamLimits

0x2752,	// (0x0003287e) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003f6dd) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003f6dd) popup_snote_single_graphic_window_g

0x275e,	// (0x0003288a) popup_snote_single_graphic_window_t1_ParamLimits

0x275e,	// (0x0003288a) popup_snote_single_graphic_window_t1

0x2771,	// (0x0003289d) popup_snote_single_graphic_window_t2_ParamLimits

0x2771,	// (0x0003289d) popup_snote_single_graphic_window_t2

0x2784,	// (0x000328b0) popup_snote_single_graphic_window_t3_ParamLimits

0x2784,	// (0x000328b0) popup_snote_single_graphic_window_t3

0x27bd,	// (0x000328e9) popup_snote_single_graphic_window_t4_ParamLimits

0x27bd,	// (0x000328e9) popup_snote_single_graphic_window_t4

0x27f1,	// (0x0003291d) popup_snote_single_graphic_window_t5_ParamLimits

0x27f1,	// (0x0003291d) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003f6e2) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003f6e2) popup_snote_single_graphic_window_t

0xad86,	// (0x0003aeb2) grid_graphic_popup_pane_ParamLimits

0xad86,	// (0x0003aeb2) grid_graphic_popup_pane

0xadb4,	// (0x0003aee0) listscroll_popup_graphic_pane_g1_ParamLimits

0xadb4,	// (0x0003aee0) listscroll_popup_graphic_pane_g1

0xadc8,	// (0x0003aef4) listscroll_popup_graphic_pane_g2_ParamLimits

0xadc8,	// (0x0003aef4) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x0003fad2) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x0003fad2) listscroll_popup_graphic_pane_g

0xaddc,	// (0x0003af08) scroll_pane_cp5

0xad1b,	// (0x0003ae47) cell_graphic_popup_pane_ParamLimits

0xad1b,	// (0x0003ae47) cell_graphic_popup_pane

0xacfc,	// (0x0003ae28) cell_graphic_popup_pane_g1

0xad04,	// (0x0003ae30) cell_graphic_popup_pane_g2

0x2644,	// (0x00032770) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x0003facb) cell_graphic_popup_pane_g

0xad0d,	// (0x0003ae39) cell_graphic_popup_pane_t2

0x264d,	// (0x00032779) grid_highlight_pane_cp3

0x2832,	// (0x0003295e) list_gen_pane_ParamLimits

0x2832,	// (0x0003295e) list_gen_pane

0x285a,	// (0x00032986) scroll_pane

0xac54,	// (0x0003ad80) bg_list_pane_g1_ParamLimits

0xac54,	// (0x0003ad80) bg_list_pane_g1

0xac71,	// (0x0003ad9d) bg_list_pane_g2_ParamLimits

0xac71,	// (0x0003ad9d) bg_list_pane_g2

0xac86,	// (0x0003adb2) bg_list_pane_g3_ParamLimits

0xac86,	// (0x0003adb2) bg_list_pane_g3

0xac9a,	// (0x0003adc6) bg_list_pane_g4_ParamLimits

0xac9a,	// (0x0003adc6) bg_list_pane_g4

0xacae,	// (0x0003adda) bg_list_pane_g5_ParamLimits

0xacae,	// (0x0003adda) bg_list_pane_g5

0x0004,

0xf994,	// (0x0003fac0) bg_list_pane_g_ParamLimits

0xf994,	// (0x0003fac0) bg_list_pane_g

0xabc2,	// (0x0003acee) list_double2_graphic_large_graphic_pane_ParamLimits

0xabc2,	// (0x0003acee) list_double2_graphic_large_graphic_pane

0xabc2,	// (0x0003acee) list_double2_graphic_pane_ParamLimits

0xabc2,	// (0x0003acee) list_double2_graphic_pane

0xabc2,	// (0x0003acee) list_double2_large_graphic_pane_ParamLimits

0xabc2,	// (0x0003acee) list_double2_large_graphic_pane

0xabc2,	// (0x0003acee) list_double2_pane_ParamLimits

0xabc2,	// (0x0003acee) list_double2_pane

0xabc2,	// (0x0003acee) list_double_graphic_heading_pane_ParamLimits

0xabc2,	// (0x0003acee) list_double_graphic_heading_pane

0xabc2,	// (0x0003acee) list_double_graphic_pane_ParamLimits

0xabc2,	// (0x0003acee) list_double_graphic_pane

0xabc2,	// (0x0003acee) list_double_heading_pane_ParamLimits

0xabc2,	// (0x0003acee) list_double_heading_pane

0xabc2,	// (0x0003acee) list_double_large_graphic_pane_ParamLimits

0xabc2,	// (0x0003acee) list_double_large_graphic_pane

0xabc2,	// (0x0003acee) list_double_number_pane_ParamLimits

0xabc2,	// (0x0003acee) list_double_number_pane

0xabc2,	// (0x0003acee) list_double_pane_ParamLimits

0xabc2,	// (0x0003acee) list_double_pane

0xabc2,	// (0x0003acee) list_double_time_pane_ParamLimits

0xabc2,	// (0x0003acee) list_double_time_pane

0xabc2,	// (0x0003acee) list_setting_number_pane_ParamLimits

0xabc2,	// (0x0003acee) list_setting_number_pane

0xabc2,	// (0x0003acee) list_setting_pane_ParamLimits

0xabc2,	// (0x0003acee) list_setting_pane

0xac24,	// (0x0003ad50) list_single_2graphic_pane_ParamLimits

0xac24,	// (0x0003ad50) list_single_2graphic_pane

0xac24,	// (0x0003ad50) list_single_graphic_heading_pane_ParamLimits

0xac24,	// (0x0003ad50) list_single_graphic_heading_pane

0xac24,	// (0x0003ad50) list_single_graphic_pane_ParamLimits

0xac24,	// (0x0003ad50) list_single_graphic_pane

0xac24,	// (0x0003ad50) list_single_heading_pane_ParamLimits

0xac24,	// (0x0003ad50) list_single_heading_pane

0x7a04,	// (0x00037b30) list_single_large_graphic_pane_ParamLimits

0x7a04,	// (0x00037b30) list_single_large_graphic_pane

0xac24,	// (0x0003ad50) list_single_number_heading_pane_ParamLimits

0xac24,	// (0x0003ad50) list_single_number_heading_pane

0xac24,	// (0x0003ad50) list_single_number_pane_ParamLimits

0xac24,	// (0x0003ad50) list_single_number_pane

0xac24,	// (0x0003ad50) list_single_pane_ParamLimits

0xac24,	// (0x0003ad50) list_single_pane

0xf4b6,	// (0x0003f5e2) list_highlight_pane_cp1

0x46a6,	// (0x000347d2) list_single_pane_g1_ParamLimits

0x46a6,	// (0x000347d2) list_single_pane_g1

0x5d0e,	// (0x00035e3a) list_single_pane_g2_ParamLimits

0x5d0e,	// (0x00035e3a) list_single_pane_g2

0x0001,

0xf5c3,	// (0x0003f6ef) list_single_pane_g_ParamLimits

0xf5c3,	// (0x0003f6ef) list_single_pane_g

0x79d9,	// (0x00037b05) list_single_pane_t1_ParamLimits

0x79d9,	// (0x00037b05) list_single_pane_t1

0x46a6,	// (0x000347d2) list_single_number_pane_g1_ParamLimits

0x46a6,	// (0x000347d2) list_single_number_pane_g1

0x5d0e,	// (0x00035e3a) list_single_number_pane_g2_ParamLimits

0x5d0e,	// (0x00035e3a) list_single_number_pane_g2

0x0001,

0xf5c3,	// (0x0003f6ef) list_single_number_pane_g_ParamLimits

0xf5c3,	// (0x0003f6ef) list_single_number_pane_g

0x790b,	// (0x00037a37) list_single_number_pane_t1_ParamLimits

0x790b,	// (0x00037a37) list_single_number_pane_t1

0x7921,	// (0x00037a4d) list_single_number_pane_t2_ParamLimits

0x7921,	// (0x00037a4d) list_single_number_pane_t2

0x0001,

0xf955,	// (0x0003fa81) list_single_number_pane_t_ParamLimits

0xf955,	// (0x0003fa81) list_single_number_pane_t

0x5d02,	// (0x00035e2e) list_single_graphic_pane_g1_ParamLimits

0x5d02,	// (0x00035e2e) list_single_graphic_pane_g1

0x46a6,	// (0x000347d2) list_single_graphic_pane_g2_ParamLimits

0x46a6,	// (0x000347d2) list_single_graphic_pane_g2

0x5d0e,	// (0x00035e3a) list_single_graphic_pane_g3_ParamLimits

0x5d0e,	// (0x00035e3a) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003f6ed) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003f6ed) list_single_graphic_pane_g

0x5d1a,	// (0x00035e46) list_single_graphic_pane_t1_ParamLimits

0x5d1a,	// (0x00035e46) list_single_graphic_pane_t1

0x46a6,	// (0x000347d2) list_single_heading_pane_g1_ParamLimits

0x46a6,	// (0x000347d2) list_single_heading_pane_g1

0x5d0e,	// (0x00035e3a) list_single_heading_pane_g2_ParamLimits

0x5d0e,	// (0x00035e3a) list_single_heading_pane_g2

0x0001,

0xf5c3,	// (0x0003f6ef) list_single_heading_pane_g_ParamLimits

0xf5c3,	// (0x0003f6ef) list_single_heading_pane_g

0x5d30,	// (0x00035e5c) list_single_heading_pane_t1_ParamLimits

0x5d30,	// (0x00035e5c) list_single_heading_pane_t1

0x5d46,	// (0x00035e72) list_single_heading_pane_t2_ParamLimits

0x5d46,	// (0x00035e72) list_single_heading_pane_t2

0x0001,

0xf5c8,	// (0x0003f6f4) list_single_heading_pane_t_ParamLimits

0xf5c8,	// (0x0003f6f4) list_single_heading_pane_t

0x46a6,	// (0x000347d2) list_single_number_heading_pane_g1_ParamLimits

0x46a6,	// (0x000347d2) list_single_number_heading_pane_g1

0x5d0e,	// (0x00035e3a) list_single_number_heading_pane_g2_ParamLimits

0x5d0e,	// (0x00035e3a) list_single_number_heading_pane_g2

0x0001,

0xf5c3,	// (0x0003f6ef) list_single_number_heading_pane_g_ParamLimits

0xf5c3,	// (0x0003f6ef) list_single_number_heading_pane_g

0x5d30,	// (0x00035e5c) list_single_number_heading_pane_t1_ParamLimits

0x5d30,	// (0x00035e5c) list_single_number_heading_pane_t1

0x5d58,	// (0x00035e84) list_single_number_heading_pane_t2_ParamLimits

0x5d58,	// (0x00035e84) list_single_number_heading_pane_t2

0x5d6a,	// (0x00035e96) list_single_number_heading_pane_t3_ParamLimits

0x5d6a,	// (0x00035e96) list_single_number_heading_pane_t3

0x0002,

0xf5cd,	// (0x0003f6f9) list_single_number_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003f6f9) list_single_number_heading_pane_t

0x5d7c,	// (0x00035ea8) list_single_graphic_heading_pane_g1_ParamLimits

0x5d7c,	// (0x00035ea8) list_single_graphic_heading_pane_g1

0x5d88,	// (0x00035eb4) list_single_graphic_heading_pane_g4_ParamLimits

0x5d88,	// (0x00035eb4) list_single_graphic_heading_pane_g4

0x5d0e,	// (0x00035e3a) list_single_graphic_heading_pane_g5_ParamLimits

0x5d0e,	// (0x00035e3a) list_single_graphic_heading_pane_g5

0x0002,

0xf5d4,	// (0x0003f700) list_single_graphic_heading_pane_g_ParamLimits

0xf5d4,	// (0x0003f700) list_single_graphic_heading_pane_g

0x5d30,	// (0x00035e5c) list_single_graphic_heading_pane_t1_ParamLimits

0x5d30,	// (0x00035e5c) list_single_graphic_heading_pane_t1

0x5d99,	// (0x00035ec5) list_single_graphic_heading_pane_t2_ParamLimits

0x5d99,	// (0x00035ec5) list_single_graphic_heading_pane_t2

0x0001,

0xf5db,	// (0x0003f707) list_single_graphic_heading_pane_t_ParamLimits

0xf5db,	// (0x0003f707) list_single_graphic_heading_pane_t

0x5dab,	// (0x00035ed7) list_single_large_graphic_pane_g1_ParamLimits

0x5dab,	// (0x00035ed7) list_single_large_graphic_pane_g1

0x46a6,	// (0x000347d2) list_single_large_graphic_pane_g2_ParamLimits

0x46a6,	// (0x000347d2) list_single_large_graphic_pane_g2

0x5d0e,	// (0x00035e3a) list_single_large_graphic_pane_g3_ParamLimits

0x5d0e,	// (0x00035e3a) list_single_large_graphic_pane_g3

0x0002,

0xf5e0,	// (0x0003f70c) list_single_large_graphic_pane_g_ParamLimits

0xf5e0,	// (0x0003f70c) list_single_large_graphic_pane_g

0x9c11,	// (0x00039d3d) wait_border_pane_g2_copy1

0x5db7,	// (0x00035ee3) list_single_large_graphic_pane_g4_cp2

0x5dbf,	// (0x00035eeb) list_single_large_graphic_pane_t1_ParamLimits

0x5dbf,	// (0x00035eeb) list_single_large_graphic_pane_t1

0x5dd5,	// (0x00035f01) list_double_pane_g1_ParamLimits

0x5dd5,	// (0x00035f01) list_double_pane_g1

0x5de1,	// (0x00035f0d) list_double_pane_g2_ParamLimits

0x5de1,	// (0x00035f0d) list_double_pane_g2

0x0001,

0xf5e7,	// (0x0003f713) list_double_pane_g_ParamLimits

0xf5e7,	// (0x0003f713) list_double_pane_g

0x5ded,	// (0x00035f19) list_double_pane_t1_ParamLimits

0x5ded,	// (0x00035f19) list_double_pane_t1

0x5e03,	// (0x00035f2f) list_double_pane_t2_ParamLimits

0x5e03,	// (0x00035f2f) list_double_pane_t2

0x0001,

0xf5ec,	// (0x0003f718) list_double_pane_t_ParamLimits

0xf5ec,	// (0x0003f718) list_double_pane_t

0x5e15,	// (0x00035f41) list_double2_pane_g1_ParamLimits

0x5e15,	// (0x00035f41) list_double2_pane_g1

0x5de1,	// (0x00035f0d) list_double2_pane_g2_ParamLimits

0x5de1,	// (0x00035f0d) list_double2_pane_g2

0x0001,

0xf5f1,	// (0x0003f71d) list_double2_pane_g_ParamLimits

0xf5f1,	// (0x0003f71d) list_double2_pane_g

0x5ded,	// (0x00035f19) list_double2_pane_t1_ParamLimits

0x5ded,	// (0x00035f19) list_double2_pane_t1

0x5e26,	// (0x00035f52) list_double2_pane_t2_ParamLimits

0x5e26,	// (0x00035f52) list_double2_pane_t2

0x0001,

0xf5f6,	// (0x0003f722) list_double2_pane_t_ParamLimits

0xf5f6,	// (0x0003f722) list_double2_pane_t

0x5dd5,	// (0x00035f01) list_double_number_pane_g1_ParamLimits

0x5dd5,	// (0x00035f01) list_double_number_pane_g1

0x5de1,	// (0x00035f0d) list_double_number_pane_g2_ParamLimits

0x5de1,	// (0x00035f0d) list_double_number_pane_g2

0x0001,

0xf5e7,	// (0x0003f713) list_double_number_pane_g_ParamLimits

0xf5e7,	// (0x0003f713) list_double_number_pane_g

0x5e38,	// (0x00035f64) list_double_number_pane_t1_ParamLimits

0x5e38,	// (0x00035f64) list_double_number_pane_t1

0x5e4a,	// (0x00035f76) list_double_number_pane_t2_ParamLimits

0x5e4a,	// (0x00035f76) list_double_number_pane_t2

0x5e60,	// (0x00035f8c) list_double_number_pane_t3_ParamLimits

0x5e60,	// (0x00035f8c) list_double_number_pane_t3

0x0002,

0xf5fb,	// (0x0003f727) list_double_number_pane_t_ParamLimits

0xf5fb,	// (0x0003f727) list_double_number_pane_t

0x40c5,	// (0x000341f1) list_double_graphic_pane_g1_ParamLimits

0x40c5,	// (0x000341f1) list_double_graphic_pane_g1

0x5e72,	// (0x00035f9e) list_double_graphic_pane_g2_ParamLimits

0x5e72,	// (0x00035f9e) list_double_graphic_pane_g2

0x5e81,	// (0x00035fad) list_double_graphic_pane_g3_ParamLimits

0x5e81,	// (0x00035fad) list_double_graphic_pane_g3

0x0003,

0xf602,	// (0x0003f72e) list_double_graphic_pane_g_ParamLimits

0xf602,	// (0x0003f72e) list_double_graphic_pane_g

0x5e99,	// (0x00035fc5) list_double_graphic_pane_t1_ParamLimits

0x5e99,	// (0x00035fc5) list_double_graphic_pane_t1

0x5eaf,	// (0x00035fdb) list_double_graphic_pane_t2_ParamLimits

0x5eaf,	// (0x00035fdb) list_double_graphic_pane_t2

0x0001,

0xf60b,	// (0x0003f737) list_double_graphic_pane_t_ParamLimits

0xf60b,	// (0x0003f737) list_double_graphic_pane_t

0x40c5,	// (0x000341f1) list_double2_graphic_pane_g1_ParamLimits

0x40c5,	// (0x000341f1) list_double2_graphic_pane_g1

0x5ec1,	// (0x00035fed) list_double2_graphic_pane_g2_ParamLimits

0x5ec1,	// (0x00035fed) list_double2_graphic_pane_g2

0x5ecd,	// (0x00035ff9) list_double2_graphic_pane_g3_ParamLimits

0x5ecd,	// (0x00035ff9) list_double2_graphic_pane_g3

0x0002,

0xf610,	// (0x0003f73c) list_double2_graphic_pane_g_ParamLimits

0xf610,	// (0x0003f73c) list_double2_graphic_pane_g

0x5e4a,	// (0x00035f76) list_double2_graphic_pane_t1_ParamLimits

0x5e4a,	// (0x00035f76) list_double2_graphic_pane_t1

0x5ed9,	// (0x00036005) list_double2_graphic_pane_t2_ParamLimits

0x5ed9,	// (0x00036005) list_double2_graphic_pane_t2

0x0001,

0xf617,	// (0x0003f743) list_double2_graphic_pane_t_ParamLimits

0xf617,	// (0x0003f743) list_double2_graphic_pane_t

0x5eeb,	// (0x00036017) list_double_large_graphic_pane_g1_ParamLimits

0x5eeb,	// (0x00036017) list_double_large_graphic_pane_g1

0x5e15,	// (0x00035f41) list_double_large_graphic_pane_g2_ParamLimits

0x5e15,	// (0x00035f41) list_double_large_graphic_pane_g2

0x5de1,	// (0x00035f0d) list_double_large_graphic_pane_g3_ParamLimits

0x5de1,	// (0x00035f0d) list_double_large_graphic_pane_g3

0x5f0a,	// (0x00036036) list_double_large_graphic_pane_g4_ParamLimits

0x5f0a,	// (0x00036036) list_double_large_graphic_pane_g4

0x0004,

0xf61c,	// (0x0003f748) list_double_large_graphic_pane_g_ParamLimits

0xf61c,	// (0x0003f748) list_double_large_graphic_pane_g

0x5f1d,	// (0x00036049) list_double_large_graphic_pane_t1_ParamLimits

0x5f1d,	// (0x00036049) list_double_large_graphic_pane_t1

0x5f36,	// (0x00036062) list_double_large_graphic_pane_t2_ParamLimits

0x5f36,	// (0x00036062) list_double_large_graphic_pane_t2

0x0001,

0xf627,	// (0x0003f753) list_double_large_graphic_pane_t_ParamLimits

0xf627,	// (0x0003f753) list_double_large_graphic_pane_t

0x5f48,	// (0x00036074) list_double2_large_graphic_pane_g1_ParamLimits

0x5f48,	// (0x00036074) list_double2_large_graphic_pane_g1

0x5e15,	// (0x00035f41) list_double2_large_graphic_pane_g2_ParamLimits

0x5e15,	// (0x00035f41) list_double2_large_graphic_pane_g2

0x5de1,	// (0x00035f0d) list_double2_large_graphic_pane_g3_ParamLimits

0x5de1,	// (0x00035f0d) list_double2_large_graphic_pane_g3

0x0002,

0xf62c,	// (0x0003f758) list_double2_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0003f758) list_double2_large_graphic_pane_g

0x5f54,	// (0x00036080) list_double2_large_graphic_pane_t1_ParamLimits

0x5f54,	// (0x00036080) list_double2_large_graphic_pane_t1

0x5f6a,	// (0x00036096) list_double2_large_graphic_pane_t2_ParamLimits

0x5f6a,	// (0x00036096) list_double2_large_graphic_pane_t2

0x0001,

0xf633,	// (0x0003f75f) list_double2_large_graphic_pane_t_ParamLimits

0xf633,	// (0x0003f75f) list_double2_large_graphic_pane_t

0x5f7c,	// (0x000360a8) list_double_heading_pane_g1_ParamLimits

0x5f7c,	// (0x000360a8) list_double_heading_pane_g1

0x408c,	// (0x000341b8) list_double_heading_pane_g2_ParamLimits

0x408c,	// (0x000341b8) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x0003f764) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x0003f764) list_double_heading_pane_g

0x5f8d,	// (0x000360b9) list_double_heading_pane_t1_ParamLimits

0x5f8d,	// (0x000360b9) list_double_heading_pane_t1

0x5fa3,	// (0x000360cf) list_double_heading_pane_t2_ParamLimits

0x5fa3,	// (0x000360cf) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x0003f769) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x0003f769) list_double_heading_pane_t

0x5fb5,	// (0x000360e1) list_double_graphic_heading_pane_g1_ParamLimits

0x5fb5,	// (0x000360e1) list_double_graphic_heading_pane_g1

0x5f7c,	// (0x000360a8) list_double_graphic_heading_pane_g2_ParamLimits

0x5f7c,	// (0x000360a8) list_double_graphic_heading_pane_g2

0x408c,	// (0x000341b8) list_double_graphic_heading_pane_g3_ParamLimits

0x408c,	// (0x000341b8) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x0003f76e) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x0003f76e) list_double_graphic_heading_pane_g

0x5fc1,	// (0x000360ed) list_double_graphic_heading_pane_t1_ParamLimits

0x5fc1,	// (0x000360ed) list_double_graphic_heading_pane_t1

0x5fd7,	// (0x00036103) list_double_graphic_heading_pane_t2_ParamLimits

0x5fd7,	// (0x00036103) list_double_graphic_heading_pane_t2

0x0001,

0xf649,	// (0x0003f775) list_double_graphic_heading_pane_t_ParamLimits

0xf649,	// (0x0003f775) list_double_graphic_heading_pane_t

0x5e15,	// (0x00035f41) list_double_time_pane_g1_ParamLimits

0x5e15,	// (0x00035f41) list_double_time_pane_g1

0x5de1,	// (0x00035f0d) list_double_time_pane_g2_ParamLimits

0x5de1,	// (0x00035f0d) list_double_time_pane_g2

0x0001,

0xf5f1,	// (0x0003f71d) list_double_time_pane_g_ParamLimits

0xf5f1,	// (0x0003f71d) list_double_time_pane_g

0x5fe9,	// (0x00036115) list_double_time_pane_t1_ParamLimits

0x5fe9,	// (0x00036115) list_double_time_pane_t1

0x5fff,	// (0x0003612b) list_double_time_pane_t2_ParamLimits

0x5fff,	// (0x0003612b) list_double_time_pane_t2

0x6011,	// (0x0003613d) list_double_time_pane_t3_ParamLimits

0x6011,	// (0x0003613d) list_double_time_pane_t3

0x6023,	// (0x0003614f) list_double_time_pane_t4_ParamLimits

0x6023,	// (0x0003614f) list_double_time_pane_t4

0x0003,

0xf64e,	// (0x0003f77a) list_double_time_pane_t_ParamLimits

0xf64e,	// (0x0003f77a) list_double_time_pane_t

0x4098,	// (0x000341c4) list_setting_pane_g1_ParamLimits

0x4098,	// (0x000341c4) list_setting_pane_g1

0x40a4,	// (0x000341d0) list_setting_pane_g2_ParamLimits

0x40a4,	// (0x000341d0) list_setting_pane_g2

0x0001,

0xf657,	// (0x0003f783) list_setting_pane_g_ParamLimits

0xf657,	// (0x0003f783) list_setting_pane_g

0x6035,	// (0x00036161) list_setting_pane_t1_ParamLimits

0x6035,	// (0x00036161) list_setting_pane_t1

0x604f,	// (0x0003617b) list_setting_pane_t2_ParamLimits

0x604f,	// (0x0003617b) list_setting_pane_t2

0x0002,

0xf65c,	// (0x0003f788) list_setting_pane_t_ParamLimits

0xf65c,	// (0x0003f788) list_setting_pane_t

0x608e,	// (0x000361ba) set_value_pane_cp_ParamLimits

0x608e,	// (0x000361ba) set_value_pane_cp

0x609c,	// (0x000361c8) list_setting_number_pane_g1_ParamLimits

0x609c,	// (0x000361c8) list_setting_number_pane_g1

0x60a8,	// (0x000361d4) list_setting_number_pane_g2_ParamLimits

0x60a8,	// (0x000361d4) list_setting_number_pane_g2

0x0001,

0xf663,	// (0x0003f78f) list_setting_number_pane_g_ParamLimits

0xf663,	// (0x0003f78f) list_setting_number_pane_g

0x60b4,	// (0x000361e0) list_setting_number_pane_t1_ParamLimits

0x60b4,	// (0x000361e0) list_setting_number_pane_t1

0x60cd,	// (0x000361f9) list_setting_number_pane_t2_ParamLimits

0x60cd,	// (0x000361f9) list_setting_number_pane_t2

0x60e7,	// (0x00036213) list_setting_number_pane_t3_ParamLimits

0x60e7,	// (0x00036213) list_setting_number_pane_t3

0x0003,

0xf668,	// (0x0003f794) list_setting_number_pane_t_ParamLimits

0xf668,	// (0x0003f794) list_setting_number_pane_t

0x608e,	// (0x000361ba) set_value_pane_ParamLimits

0x608e,	// (0x000361ba) set_value_pane

0x288e,	// (0x000329ba) bg_set_opt_pane_ParamLimits

0x288e,	// (0x000329ba) bg_set_opt_pane

0x40d1,	// (0x000341fd) set_value_pane_t1

0x28af,	// (0x000329db) slider_set_pane_cp3

0x28b8,	// (0x000329e4) volume_small_pane_cp

0x28c1,	// (0x000329ed) list_form_gen_pane

0x28ca,	// (0x000329f6) scroll_pane_cp8

0x612a,	// (0x00036256) form_field_data_pane_ParamLimits

0x612a,	// (0x00036256) form_field_data_pane

0x6148,	// (0x00036274) form_field_data_wide_pane_ParamLimits

0x6148,	// (0x00036274) form_field_data_wide_pane

0x40ef,	// (0x0003421b) form_field_popup_pane_ParamLimits

0x40ef,	// (0x0003421b) form_field_popup_pane

0x616d,	// (0x00036299) form_field_popup_wide_pane_ParamLimits

0x616d,	// (0x00036299) form_field_popup_wide_pane

0x4111,	// (0x0003423d) form_field_slider_pane_ParamLimits

0x4111,	// (0x0003423d) form_field_slider_pane

0x4124,	// (0x00034250) form_field_slider_wide_pane_ParamLimits

0x4124,	// (0x00034250) form_field_slider_wide_pane

0x28db,	// (0x00032a07) data_form_pane

0x6198,	// (0x000362c4) form_field_data_pane_t1

0x28e7,	// (0x00032a13) input_focus_pane

0x4137,	// (0x00034263) data_form_wide_pane

0x4154,	// (0x00034280) form_field_data_wide_pane_t1

0x2662,	// (0x0003278e) input_focus_pane_cp6

0x61b2,	// (0x000362de) form_field_popup_pane_t1

0x28e7,	// (0x00032a13) input_focus_pane_cp7

0x2915,	// (0x00032a41) list_form_pane

0x417e,	// (0x000342aa) form_field_popup_wide_pane_t1

0x28e7,	// (0x00032a13) input_focus_pane_cp8

0x2921,	// (0x00032a4d) list_form_wide_pane

0x61d4,	// (0x00036300) form_field_slider_pane_t1_ParamLimits

0x61d4,	// (0x00036300) form_field_slider_pane_t1

0x61ec,	// (0x00036318) form_field_slider_pane_t2_ParamLimits

0x61ec,	// (0x00036318) form_field_slider_pane_t2

0x0001,

0xf678,	// (0x0003f7a4) form_field_slider_pane_t_ParamLimits

0xf678,	// (0x0003f7a4) form_field_slider_pane_t

0xf540,	// (0x0003f66c) input_focus_pane_cp9_ParamLimits

0xf540,	// (0x0003f66c) input_focus_pane_cp9

0x6201,	// (0x0003632d) slider_cont_pane_ParamLimits

0x6201,	// (0x0003632d) slider_cont_pane

0x292d,	// (0x00032a59) form_field_slider_wide_pane_t1_ParamLimits

0x292d,	// (0x00032a59) form_field_slider_wide_pane_t1

0x4193,	// (0x000342bf) form_field_slider_wide_pane_t2_ParamLimits

0x4193,	// (0x000342bf) form_field_slider_wide_pane_t2

0x0001,

0xf67d,	// (0x0003f7a9) form_field_slider_wide_pane_t_ParamLimits

0xf67d,	// (0x0003f7a9) form_field_slider_wide_pane_t

0xf540,	// (0x0003f66c) input_focus_pane_cp10_ParamLimits

0xf540,	// (0x0003f66c) input_focus_pane_cp10

0x6215,	// (0x00036341) slider_cont_pane_cp1_ParamLimits

0x6215,	// (0x00036341) slider_cont_pane_cp1

0x6229,	// (0x00036355) slider_form_pane_cp

0x293f,	// (0x00032a6b) input_focus_pane_g1

0x2947,	// (0x00032a73) input_focus_pane_g2

0x294f,	// (0x00032a7b) input_focus_pane_g3

0x2957,	// (0x00032a83) input_focus_pane_g4

0x295f,	// (0x00032a8b) input_focus_pane_g5

0x2967,	// (0x00032a93) input_focus_pane_g6

0x296f,	// (0x00032a9b) input_focus_pane_g7

0x2977,	// (0x00032aa3) input_focus_pane_g8

0x297f,	// (0x00032aab) input_focus_pane_g9

0xf4ac,	// (0x0003f5d8) input_focus_pane_g10

0x0009,

0xf682,	// (0x0003f7ae) input_focus_pane_g

0x9c1a,	// (0x00039d46) wait_border_pane_g3_copy1

0x6231,	// (0x0003635d) data_form_pane_t1

0xf4ac,	// (0x0003f5d8) wait_anim_pane_g1_copy1

0x79ab,	// (0x00037ad7) data_form_wide_pane_t1

0x624e,	// (0x0003637a) list_form_graphic_pane_cp_ParamLimits

0x624e,	// (0x0003637a) list_form_graphic_pane_cp

0xab66,	// (0x0003ac92) slider_form_pane_g1

0xab6f,	// (0x0003ac9b) slider_form_pane_g2

0x0006,

0xf985,	// (0x0003fab1) slider_form_pane_g

0x41a5,	// (0x000342d1) list_form_graphic_pane_ParamLimits

0x41a5,	// (0x000342d1) list_form_graphic_pane

0x41b7,	// (0x000342e3) list_form_graphic_pane_g1

0x41bf,	// (0x000342eb) list_form_graphic_pane_t1_ParamLimits

0x41bf,	// (0x000342eb) list_form_graphic_pane_t1

0xf504,	// (0x0003f630) list_highlight_pane_cp5_ParamLimits

0xf504,	// (0x0003f630) list_highlight_pane_cp5

0x6263,	// (0x0003638f) find_pane_g1

0x2987,	// (0x00032ab3) input_find_pane

0x626c,	// (0x00036398) input_find_pane_g1_ParamLimits

0x626c,	// (0x00036398) input_find_pane_g1

0x6278,	// (0x000363a4) input_find_pane_t1_ParamLimits

0x6278,	// (0x000363a4) input_find_pane_t1

0x628d,	// (0x000363b9) input_find_pane_t2_ParamLimits

0x628d,	// (0x000363b9) input_find_pane_t2

0x0001,

0xf697,	// (0x0003f7c3) input_find_pane_t_ParamLimits

0xf697,	// (0x0003f7c3) input_find_pane_t

0x2990,	// (0x00032abc) input_focus_pane_cp5_ParamLimits

0x2990,	// (0x00032abc) input_focus_pane_cp5

0x299e,	// (0x00032aca) bg_popup_window_pane_cp2_ParamLimits

0x299e,	// (0x00032aca) bg_popup_window_pane_cp2

0x29ab,	// (0x00032ad7) listscroll_menu_pane_ParamLimits

0x29ab,	// (0x00032ad7) listscroll_menu_pane

0x62ae,	// (0x000363da) popup_submenu_window_ParamLimits

0x62ae,	// (0x000363da) popup_submenu_window

0x29b7,	// (0x00032ae3) find_popup_pane_g1

0x29bf,	// (0x00032aeb) input_popup_find_pane_cp

0x2990,	// (0x00032abc) input_focus_pane_cp4_ParamLimits

0x2990,	// (0x00032abc) input_focus_pane_cp4

0x29c9,	// (0x00032af5) input_popup_find_pane_t1_ParamLimits

0x29c9,	// (0x00032af5) input_popup_find_pane_t1

0xf4b6,	// (0x0003f5e2) bg_popup_sub_pane_cp

0x29f7,	// (0x00032b23) listscroll_popup_sub_pane

0x29ff,	// (0x00032b2b) list_submenu_pane_ParamLimits

0x29ff,	// (0x00032b2b) list_submenu_pane

0x2a10,	// (0x00032b3c) scroll_pane_cp4

0x2a18,	// (0x00032b44) list_single_popup_submenu_pane_ParamLimits

0x2a18,	// (0x00032b44) list_single_popup_submenu_pane

0x2a2d,	// (0x00032b59) list_single_popup_submenu_pane_g1

0x2a35,	// (0x00032b61) list_single_popup_submenu_pane_t1_ParamLimits

0x2a35,	// (0x00032b61) list_single_popup_submenu_pane_t1

0xf504,	// (0x0003f630) bg_active_tab_pane_cp1_ParamLimits

0xf504,	// (0x0003f630) bg_active_tab_pane_cp1

0x62ec,	// (0x00036418) tabs_2_active_pane_g1

0x62f4,	// (0x00036420) tabs_2_active_pane_t1

0xf504,	// (0x0003f630) bg_passive_tab_pane_cp1_ParamLimits

0xf504,	// (0x0003f630) bg_passive_tab_pane_cp1

0x62ec,	// (0x00036418) tabs_2_passive_pane_g1

0x62f4,	// (0x00036420) tabs_2_passive_pane_t1

0x2dab,	// (0x00032ed7) bg_active_tab_pane_cp4

0x6306,	// (0x00036432) tabs_2_long_active_pane_t1

0x6319,	// (0x00036445) bg_passive_tab_pane_cp4

0x762f,	// (0x0003775b) list_single_midp_graphic_pane_g4_ParamLimits

0x2dab,	// (0x00032ed7) bg_active_tab_pane_cp5

0x6325,	// (0x00036451) tabs_3_long_active_pane_t1

0x6319,	// (0x00036445) bg_passive_tab_pane_cp5

0x762f,	// (0x0003775b) list_single_midp_graphic_pane_g4

0xf504,	// (0x0003f630) bg_popup_window_pane_cp13_ParamLimits

0xf504,	// (0x0003f630) bg_popup_window_pane_cp13

0x2a53,	// (0x00032b7f) listscroll_popup_fast_pane_ParamLimits

0x2a53,	// (0x00032b7f) listscroll_popup_fast_pane

0x2a62,	// (0x00032b8e) grid_popup_fast_pane_ParamLimits

0x2a62,	// (0x00032b8e) grid_popup_fast_pane

0x2a74,	// (0x00032ba0) scroll_pane_cp9_ParamLimits

0x2a74,	// (0x00032ba0) scroll_pane_cp9

0xc4ab,	// (0x0003c5d7) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc4ab,	// (0x0003c5d7) list_single_graphic_hl_pane_t1_cp2

0x2a98,	// (0x00032bc4) input_focus_pane_cp20_ParamLimits

0x2a98,	// (0x00032bc4) input_focus_pane_cp20

0x2aa6,	// (0x00032bd2) query_popup_data_pane_t1_ParamLimits

0x2aa6,	// (0x00032bd2) query_popup_data_pane_t1

0x2ab9,	// (0x00032be5) query_popup_data_pane_t2_ParamLimits

0x2ab9,	// (0x00032be5) query_popup_data_pane_t2

0x2aff,	// (0x00032c2b) query_popup_data_pane_t3_ParamLimits

0x2aff,	// (0x00032c2b) query_popup_data_pane_t3

0x2b40,	// (0x00032c6c) query_popup_data_pane_t4_ParamLimits

0x2b40,	// (0x00032c6c) query_popup_data_pane_t4

0x2b7c,	// (0x00032ca8) query_popup_data_pane_t5_ParamLimits

0x2b7c,	// (0x00032ca8) query_popup_data_pane_t5

0x0004,

0xf69c,	// (0x0003f7c8) query_popup_data_pane_t_ParamLimits

0xf69c,	// (0x0003f7c8) query_popup_data_pane_t

0x293f,	// (0x00032a6b) bg_set_opt_pane_g1

0x2947,	// (0x00032a73) bg_set_opt_pane_g2

0x294f,	// (0x00032a7b) bg_set_opt_pane_g3

0x2957,	// (0x00032a83) bg_set_opt_pane_g4

0x295f,	// (0x00032a8b) bg_set_opt_pane_g5

0x2967,	// (0x00032a93) bg_set_opt_pane_g6

0x296f,	// (0x00032a9b) bg_set_opt_pane_g7

0x2977,	// (0x00032aa3) bg_set_opt_pane_g8

0x297f,	// (0x00032aab) bg_set_opt_pane_g9

0x0008,

0xf6a7,	// (0x0003f7d3) bg_set_opt_pane_g

0x6a0e,	// (0x00036b3a) control_top_pane_stacon_ParamLimits

0x6a0e,	// (0x00036b3a) control_top_pane_stacon

0x6a61,	// (0x00036b8d) signal_pane_stacon_ParamLimits

0x6a61,	// (0x00036b8d) signal_pane_stacon

0x6a86,	// (0x00036bb2) stacon_top_pane_g1_ParamLimits

0x6a86,	// (0x00036bb2) stacon_top_pane_g1

0x6aa8,	// (0x00036bd4) title_pane_stacon_ParamLimits

0x6aa8,	// (0x00036bd4) title_pane_stacon

0x6ad2,	// (0x00036bfe) uni_indicator_pane_stacon_ParamLimits

0x6ad2,	// (0x00036bfe) uni_indicator_pane_stacon

0x6ae7,	// (0x00036c13) battery_pane_stacon_ParamLimits

0x6ae7,	// (0x00036c13) battery_pane_stacon

0x6b2b,	// (0x00036c57) control_bottom_pane_stacon_ParamLimits

0x6b2b,	// (0x00036c57) control_bottom_pane_stacon

0x6b4e,	// (0x00036c7a) navi_pane_stacon_ParamLimits

0x6b4e,	// (0x00036c7a) navi_pane_stacon

0x6b71,	// (0x00036c9d) stacon_bottom_pane_g1_ParamLimits

0x6b71,	// (0x00036c9d) stacon_bottom_pane_g1

0x6337,	// (0x00036463) aid_levels_signal_lsc_ParamLimits

0x6337,	// (0x00036463) aid_levels_signal_lsc

0x634e,	// (0x0003647a) signal_pane_stacon_g1_ParamLimits

0x634e,	// (0x0003647a) signal_pane_stacon_g1

0x6362,	// (0x0003648e) signal_pane_stacon_g2_ParamLimits

0x6362,	// (0x0003648e) signal_pane_stacon_g2

0x0001,

0xf6ba,	// (0x0003f7e6) signal_pane_stacon_g_ParamLimits

0xf6ba,	// (0x0003f7e6) signal_pane_stacon_g

0x6397,	// (0x000364c3) title_pane_stacon_t1_ParamLimits

0x6397,	// (0x000364c3) title_pane_stacon_t1

0x2bd4,	// (0x00032d00) uni_indicator_pane_stacon_g1

0x2bde,	// (0x00032d0a) uni_indicator_pane_stacon_g2

0x2bc0,	// (0x00032cec) uni_indicator_pane_stacon_g3

0x2bca,	// (0x00032cf6) uni_indicator_pane_stacon_g4

0x0003,

0xf6c6,	// (0x0003f7f2) uni_indicator_pane_stacon_g

0x63bc,	// (0x000364e8) control_top_pane_stacon_g1

0x63c4,	// (0x000364f0) control_top_pane_stacon_t1_ParamLimits

0x63c4,	// (0x000364f0) control_top_pane_stacon_t1

0x63fb,	// (0x00036527) aid_levels_battery_lsc_ParamLimits

0x63fb,	// (0x00036527) aid_levels_battery_lsc

0x6413,	// (0x0003653f) battery_pane_stacon_g1_ParamLimits

0x6413,	// (0x0003653f) battery_pane_stacon_g1

0x6426,	// (0x00036552) battery_pane_stacon_g2_ParamLimits

0x6426,	// (0x00036552) battery_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0003f7fb) battery_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0003f7fb) battery_pane_stacon_g

0x6464,	// (0x00036590) navi_icon_pane_stacon

0x6478,	// (0x000365a4) navi_navi_pane_stacon

0x6464,	// (0x00036590) navi_text_pane_stacon

0x63bc,	// (0x000364e8) control_bottom_pane_stacon_g1

0x648e,	// (0x000365ba) control_bottom_pane_stacon_t1_ParamLimits

0x648e,	// (0x000365ba) control_bottom_pane_stacon_t1

0x64c5,	// (0x000365f1) grid_app_pane_ParamLimits

0x64c5,	// (0x000365f1) grid_app_pane

0x64e7,	// (0x00036613) scroll_pane_cp15_ParamLimits

0x64e7,	// (0x00036613) scroll_pane_cp15

0x64fa,	// (0x00036626) cell_app_pane_ParamLimits

0x64fa,	// (0x00036626) cell_app_pane

0x6526,	// (0x00036652) cell_app_pane_g1_ParamLimits

0x6526,	// (0x00036652) cell_app_pane_g1

0x2c02,	// (0x00032d2e) cell_app_pane_g2_ParamLimits

0x2c02,	// (0x00032d2e) cell_app_pane_g2

0x0001,

0xf6d4,	// (0x0003f800) cell_app_pane_g_ParamLimits

0xf6d4,	// (0x0003f800) cell_app_pane_g

0x654a,	// (0x00036676) cell_app_pane_t1_ParamLimits

0x654a,	// (0x00036676) cell_app_pane_t1

0x2c0e,	// (0x00032d3a) grid_highlight_pane_ParamLimits

0x2c0e,	// (0x00032d3a) grid_highlight_pane

0x293f,	// (0x00032a6b) cell_highlight_pane_g1

0x2947,	// (0x00032a73) cell_highlight_pane_g2

0x294f,	// (0x00032a7b) cell_highlight_pane_g3

0x2957,	// (0x00032a83) cell_highlight_pane_g4

0x295f,	// (0x00032a8b) cell_highlight_pane_g5

0x2967,	// (0x00032a93) cell_highlight_pane_g6

0x296f,	// (0x00032a9b) cell_highlight_pane_g7

0x2977,	// (0x00032aa3) cell_highlight_pane_g8

0x297f,	// (0x00032aab) cell_highlight_pane_g9

0xf4ac,	// (0x0003f5d8) cell_highlight_pane_g10

0x0009,

0xf682,	// (0x0003f7ae) cell_highlight_pane_g

0x2c1f,	// (0x00032d4b) bg_scroll_pane

0x6574,	// (0x000366a0) scroll_handle_pane

0x2c66,	// (0x00032d92) scroll_bg_pane_g1

0x2c7b,	// (0x00032da7) scroll_bg_pane_g2

0x2c93,	// (0x00032dbf) scroll_bg_pane_g3

0x0002,

0xf6d9,	// (0x0003f805) scroll_bg_pane_g

0x2ca8,	// (0x00032dd4) scroll_handle_focus_pane_ParamLimits

0x2ca8,	// (0x00032dd4) scroll_handle_focus_pane

0x2c66,	// (0x00032d92) scroll_handle_pane_g1

0x2cb5,	// (0x00032de1) scroll_handle_pane_g2

0x2c93,	// (0x00032dbf) scroll_handle_pane_g3

0x0002,

0xf6e0,	// (0x0003f80c) scroll_handle_pane_g

0x2990,	// (0x00032abc) bg_popup_sub_pane_cp21_ParamLimits

0x2990,	// (0x00032abc) bg_popup_sub_pane_cp21

0x2cc9,	// (0x00032df5) popup_fep_japan_predictive_window_t1_ParamLimits

0x2cc9,	// (0x00032df5) popup_fep_japan_predictive_window_t1

0x2ce0,	// (0x00032e0c) popup_fep_japan_predictive_window_t2_ParamLimits

0x2ce0,	// (0x00032e0c) popup_fep_japan_predictive_window_t2

0x2d13,	// (0x00032e3f) popup_fep_japan_predictive_window_t3_ParamLimits

0x2d13,	// (0x00032e3f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e7,	// (0x0003f813) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e7,	// (0x0003f813) popup_fep_japan_predictive_window_t

0xf4b6,	// (0x0003f5e2) bg_popup_sub_pane_cp23

0x2d4a,	// (0x00032e76) listscroll_japin_cand_pane

0x2d52,	// (0x00032e7e) popup_fep_japan_candidate_window_t1

0x2d60,	// (0x00032e8c) candidate_pane_ParamLimits

0x2d60,	// (0x00032e8c) candidate_pane

0x2d72,	// (0x00032e9e) scroll_pane_cp30

0x2d7c,	// (0x00032ea8) list_single_popup_jap_candidate_pane_ParamLimits

0x2d7c,	// (0x00032ea8) list_single_popup_jap_candidate_pane

0xf4b6,	// (0x0003f5e2) list_highlight_pane_cp30

0x2d90,	// (0x00032ebc) list_single_popup_jap_candidate_pane_t1

0x659d,	// (0x000366c9) level_1_signal

0x65aa,	// (0x000366d6) level_2_signal

0x65b7,	// (0x000366e3) level_3_signal

0x65c4,	// (0x000366f0) level_4_signal

0x65d1,	// (0x000366fd) level_5_signal

0x65de,	// (0x0003670a) level_6_signal

0x65eb,	// (0x00036717) level_7_signal

0x659d,	// (0x000366c9) level_1_battery

0x65aa,	// (0x000366d6) level_2_battery

0x65b7,	// (0x000366e3) level_3_battery

0x65c4,	// (0x000366f0) level_4_battery

0x65d1,	// (0x000366fd) level_5_battery

0x65de,	// (0x0003670a) level_6_battery

0x65eb,	// (0x00036717) level_7_battery

0x662f,	// (0x0003675b) list_menu_pane_ParamLimits

0x662f,	// (0x0003675b) list_menu_pane

0x6645,	// (0x00036771) scroll_pane_cp25_ParamLimits

0x6645,	// (0x00036771) scroll_pane_cp25

0x665e,	// (0x0003678a) list_double2_graphic_pane_cp2_ParamLimits

0x665e,	// (0x0003678a) list_double2_graphic_pane_cp2

0x665e,	// (0x0003678a) list_double2_large_graphic_pane_cp2_ParamLimits

0x665e,	// (0x0003678a) list_double2_large_graphic_pane_cp2

0x665e,	// (0x0003678a) list_double2_pane_cp2_ParamLimits

0x665e,	// (0x0003678a) list_double2_pane_cp2

0x665e,	// (0x0003678a) list_double_graphic_pane_cp2_ParamLimits

0x665e,	// (0x0003678a) list_double_graphic_pane_cp2

0x665e,	// (0x0003678a) list_double_large_graphic_pane_cp2_ParamLimits

0x665e,	// (0x0003678a) list_double_large_graphic_pane_cp2

0x665e,	// (0x0003678a) list_double_number_pane_cp2_ParamLimits

0x665e,	// (0x0003678a) list_double_number_pane_cp2

0x665e,	// (0x0003678a) list_double_pane_cp2_ParamLimits

0x665e,	// (0x0003678a) list_double_pane_cp2

0x6684,	// (0x000367b0) list_single_2graphic_pane_cp2_ParamLimits

0x6684,	// (0x000367b0) list_single_2graphic_pane_cp2

0x6684,	// (0x000367b0) list_single_graphic_heading_pane_cp2_ParamLimits

0x6684,	// (0x000367b0) list_single_graphic_heading_pane_cp2

0x6684,	// (0x000367b0) list_single_graphic_pane_cp2_ParamLimits

0x6684,	// (0x000367b0) list_single_graphic_pane_cp2

0x6684,	// (0x000367b0) list_single_heading_pane_cp2_ParamLimits

0x6684,	// (0x000367b0) list_single_heading_pane_cp2

0x66a1,	// (0x000367cd) list_single_large_graphic_pane_cp2_ParamLimits

0x66a1,	// (0x000367cd) list_single_large_graphic_pane_cp2

0x6684,	// (0x000367b0) list_single_number_heading_pane_cp2_ParamLimits

0x6684,	// (0x000367b0) list_single_number_heading_pane_cp2

0x6684,	// (0x000367b0) list_single_number_pane_cp2_ParamLimits

0x6684,	// (0x000367b0) list_single_number_pane_cp2

0x6684,	// (0x000367b0) list_single_pane_cp2_ParamLimits

0x6684,	// (0x000367b0) list_single_pane_cp2

0x676a,	// (0x00036896) bg_popup_sub_pane_cp22

0x678f,	// (0x000368bb) popup_side_volume_key_window_g1

0x67b9,	// (0x000368e5) popup_side_volume_key_window_t1

0x67d7,	// (0x00036903) volume_small_pane_cp1

0xf540,	// (0x0003f66c) bg_popup_sub_pane_cp24_ParamLimits

0xf540,	// (0x0003f66c) bg_popup_sub_pane_cp24

0x67df,	// (0x0003690b) fep_china_uni_candidate_pane_ParamLimits

0x67df,	// (0x0003690b) fep_china_uni_candidate_pane

0x67f3,	// (0x0003691f) fep_china_uni_entry_pane

0x6803,	// (0x0003692f) popup_fep_china_uni_window_g1

0x681f,	// (0x0003694b) fep_china_uni_entry_pane_g1

0x6829,	// (0x00036955) fep_china_uni_entry_pane_g2

0x0001,

0xf718,	// (0x0003f844) fep_china_uni_entry_pane_g

0x6833,	// (0x0003695f) fep_entry_item_pane

0x683d,	// (0x00036969) fep_candidate_item_pane

0x6845,	// (0x00036971) fep_china_uni_candidate_pane_g1

0x684f,	// (0x0003697b) fep_china_uni_candidate_pane_g2

0x6857,	// (0x00036983) fep_china_uni_candidate_pane_g3

0x685f,	// (0x0003698b) fep_china_uni_candidate_pane_g4

0x0003,

0xf71d,	// (0x0003f849) fep_china_uni_candidate_pane_g

0xf4ac,	// (0x0003f5d8) fep_entry_item_pane_g1

0x6869,	// (0x00036995) fep_entry_item_pane_t1_ParamLimits

0x6869,	// (0x00036995) fep_entry_item_pane_t1

0x687f,	// (0x000369ab) fep_candidate_item_pane_t1_ParamLimits

0x687f,	// (0x000369ab) fep_candidate_item_pane_t1

0x6894,	// (0x000369c0) fep_candidate_item_pane_t2_ParamLimits

0x6894,	// (0x000369c0) fep_candidate_item_pane_t2

0x0001,

0xf726,	// (0x0003f852) fep_candidate_item_pane_t_ParamLimits

0xf726,	// (0x0003f852) fep_candidate_item_pane_t

0xf504,	// (0x0003f630) list_highlight_pane_cp31_ParamLimits

0xf504,	// (0x0003f630) list_highlight_pane_cp31

0x68a6,	// (0x000369d2) level_1_signal_lsc

0x68af,	// (0x000369db) level_2_signal_lsc

0x68b8,	// (0x000369e4) level_3_signal_lsc

0x68c1,	// (0x000369ed) level_4_signal_lsc

0x68ca,	// (0x000369f6) level_5_signal_lsc

0x68d3,	// (0x000369ff) level_6_signal_lsc

0x68dc,	// (0x00036a08) level_7_signal_lsc

0x68dc,	// (0x00036a08) level_1_battery_lsc

0x68e5,	// (0x00036a11) level_2_battery_lsc

0x68ee,	// (0x00036a1a) level_3_battery_lsc

0x68f7,	// (0x00036a23) level_4_battery_lsc

0x6900,	// (0x00036a2c) level_5_battery_lsc

0x6909,	// (0x00036a35) level_6_battery_lsc

0x68a6,	// (0x000369d2) level_7_battery_lsc

0x6912,	// (0x00036a3e) scroll_handle_focus_pane_g1

0x691b,	// (0x00036a47) scroll_handle_focus_pane_g2

0x6924,	// (0x00036a50) scroll_handle_focus_pane_g3

0x0002,

0xf72b,	// (0x0003f857) scroll_handle_focus_pane_g

0x692d,	// (0x00036a59) list_single_2graphic_pane_g1_ParamLimits

0x692d,	// (0x00036a59) list_single_2graphic_pane_g1

0x5d88,	// (0x00035eb4) list_single_2graphic_pane_g2_ParamLimits

0x5d88,	// (0x00035eb4) list_single_2graphic_pane_g2

0x5d0e,	// (0x00035e3a) list_single_2graphic_pane_g3_ParamLimits

0x5d0e,	// (0x00035e3a) list_single_2graphic_pane_g3

0x6939,	// (0x00036a65) list_single_2graphic_pane_g4_ParamLimits

0x6939,	// (0x00036a65) list_single_2graphic_pane_g4

0x0003,

0xf732,	// (0x0003f85e) list_single_2graphic_pane_g_ParamLimits

0xf732,	// (0x0003f85e) list_single_2graphic_pane_g

0x6945,	// (0x00036a71) list_single_2graphic_pane_t1_ParamLimits

0x6945,	// (0x00036a71) list_single_2graphic_pane_t1

0x6973,	// (0x00036a9f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6973,	// (0x00036a9f) list_double2_graphic_large_graphic_pane_g1

0x5e15,	// (0x00035f41) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5e15,	// (0x00035f41) list_double2_graphic_large_graphic_pane_g2

0x5de1,	// (0x00035f0d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5de1,	// (0x00035f0d) list_double2_graphic_large_graphic_pane_g3

0x6985,	// (0x00036ab1) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6985,	// (0x00036ab1) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf73b,	// (0x0003f867) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf73b,	// (0x0003f867) list_double2_graphic_large_graphic_pane_g

0x6991,	// (0x00036abd) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x6991,	// (0x00036abd) list_double2_graphic_large_graphic_pane_t1

0x69a7,	// (0x00036ad3) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x69a7,	// (0x00036ad3) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf744,	// (0x0003f870) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf744,	// (0x0003f870) list_double2_graphic_large_graphic_pane_t

0x6c31,	// (0x00036d5d) popup_fast_swap_window_ParamLimits

0x6c31,	// (0x00036d5d) popup_fast_swap_window

0x6c4f,	// (0x00036d7b) popup_side_volume_key_window

0x6c6d,	// (0x00036d99) stacon_top_pane

0x6c77,	// (0x00036da3) status_pane_ParamLimits

0x6c77,	// (0x00036da3) status_pane

0x6c85,	// (0x00036db1) status_small_pane

0xf4b6,	// (0x0003f5e2) control_pane

0xf4b6,	// (0x0003f5e2) stacon_bottom_pane

0x28ca,	// (0x000329f6) scroll_pane_cp121

0x28c1,	// (0x000329ed) set_content_pane

0x69b9,	// (0x00036ae5) bg_active_tab_pane_g1_cp1

0x69c2,	// (0x00036aee) bg_active_tab_pane_g2_cp1

0x69cb,	// (0x00036af7) bg_active_tab_pane_g3_cp1

0x69b9,	// (0x00036ae5) bg_passive_tab_pane_g1_cp1

0x69c2,	// (0x00036aee) bg_passive_tab_pane_g2_cp1

0x69cb,	// (0x00036af7) bg_passive_tab_pane_g3_cp1

0x69d4,	// (0x00036b00) bg_active_tab_pane_g1_cp2

0x69c2,	// (0x00036aee) bg_active_tab_pane_g2_cp2

0x69dd,	// (0x00036b09) bg_active_tab_pane_g3_cp2

0x69d4,	// (0x00036b00) bg_passive_tab_pane_g1_cp2

0x69c2,	// (0x00036aee) bg_passive_tab_pane_g2_cp2

0x69dd,	// (0x00036b09) bg_passive_tab_pane_g3_cp2

0x69e6,	// (0x00036b12) bg_active_tab_pane_g1_cp3

0x69c2,	// (0x00036aee) bg_active_tab_pane_g2_cp3

0x69ef,	// (0x00036b1b) bg_active_tab_pane_g3_cp3

0x69e6,	// (0x00036b12) bg_passive_tab_pane_g1_cp3

0x69c2,	// (0x00036aee) bg_passive_tab_pane_g2_cp3

0x69ef,	// (0x00036b1b) bg_passive_tab_pane_g3_cp3

0x69f8,	// (0x00036b24) bg_active_tab_pane_g1_cp4

0x69c2,	// (0x00036aee) bg_active_tab_pane_g2_cp4

0x6a03,	// (0x00036b2f) bg_active_tab_pane_g3_cp4

0x69f8,	// (0x00036b24) bg_passive_tab_pane_g1_cp4

0x69c2,	// (0x00036aee) bg_passive_tab_pane_g2_cp4

0x6a03,	// (0x00036b2f) bg_passive_tab_pane_g3_cp4

0x6b8d,	// (0x00036cb9) bg_active_tab_pane_g1_cp5

0x69c2,	// (0x00036aee) bg_active_tab_pane_g2_cp5

0x6b96,	// (0x00036cc2) bg_active_tab_pane_g3_cp5

0x6b8d,	// (0x00036cb9) bg_passive_tab_pane_g1_cp5

0x69c2,	// (0x00036aee) bg_passive_tab_pane_g2_cp5

0x6b96,	// (0x00036cc2) bg_passive_tab_pane_g3_cp5

0x6b9f,	// (0x00036ccb) list_set_graphic_pane_ParamLimits

0x6b9f,	// (0x00036ccb) list_set_graphic_pane

0xf4b6,	// (0x0003f5e2) bg_set_opt_pane_cp4

0x6bb2,	// (0x00036cde) list_set_graphic_pane_g1_ParamLimits

0x6bb2,	// (0x00036cde) list_set_graphic_pane_g1

0x6bbe,	// (0x00036cea) list_set_graphic_pane_g2_ParamLimits

0x6bbe,	// (0x00036cea) list_set_graphic_pane_g2

0x0001,

0xf749,	// (0x0003f875) list_set_graphic_pane_g_ParamLimits

0xf749,	// (0x0003f875) list_set_graphic_pane_g

0x0009,

0xfac5,	// (0x0003fbf1) volume_small_pane_cp_g

0x6be2,	// (0x00036d0e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6be2,	// (0x00036d0e) list_double2_large_graphic_pane_g1_cp2

0x6bf0,	// (0x00036d1c) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x6bf0,	// (0x00036d1c) list_double2_large_graphic_pane_g2_cp2

0x6c01,	// (0x00036d2d) list_double2_large_graphic_pane_g3_cp2

0x6c09,	// (0x00036d35) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x6c09,	// (0x00036d35) list_double2_large_graphic_pane_t1_cp2

0x6c1f,	// (0x00036d4b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x6c1f,	// (0x00036d4b) list_double2_large_graphic_pane_t2_cp2

0xa6fe,	// (0x0003a82a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa6fe,	// (0x0003a82a) list_double_large_graphic_pane_g1_cp2

0xa711,	// (0x0003a83d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa711,	// (0x0003a83d) list_double_large_graphic_pane_g2_cp2

0x8cb0,	// (0x00038ddc) list_double_large_graphic_pane_g3_cp2

0xa722,	// (0x0003a84e) list_double_large_graphic_pane_g4_cp

0xa72a,	// (0x0003a856) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa72a,	// (0x0003a856) list_double_large_graphic_pane_t1_cp2

0xa741,	// (0x0003a86d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa741,	// (0x0003a86d) list_double_large_graphic_pane_t2_cp2

0x6c90,	// (0x00036dbc) list_double2_graphic_pane_g1_cp2_ParamLimits

0x6c90,	// (0x00036dbc) list_double2_graphic_pane_g1_cp2

0x6c9e,	// (0x00036dca) list_double2_graphic_pane_g2_cp2_ParamLimits

0x6c9e,	// (0x00036dca) list_double2_graphic_pane_g2_cp2

0x6caf,	// (0x00036ddb) list_double2_graphic_pane_g3_cp2

0x6cb9,	// (0x00036de5) list_double2_graphic_pane_t1_cp2_ParamLimits

0x6cb9,	// (0x00036de5) list_double2_graphic_pane_t1_cp2

0x6ccf,	// (0x00036dfb) list_double2_graphic_pane_t2_cp2_ParamLimits

0x6ccf,	// (0x00036dfb) list_double2_graphic_pane_t2_cp2

0x6ce1,	// (0x00036e0d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x6ce1,	// (0x00036e0d) list_single_number_heading_pane_g1_cp2

0x6ced,	// (0x00036e19) list_single_number_heading_pane_g2_cp2

0x6cf5,	// (0x00036e21) list_single_number_heading_pane_t1_cp2_ParamLimits

0x6cf5,	// (0x00036e21) list_single_number_heading_pane_t1_cp2

0x6d0b,	// (0x00036e37) list_single_number_heading_pane_t2_cp2_ParamLimits

0x6d0b,	// (0x00036e37) list_single_number_heading_pane_t2_cp2

0x6d1f,	// (0x00036e4b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x6d1f,	// (0x00036e4b) list_single_number_heading_pane_t3_cp2

0x6ce1,	// (0x00036e0d) list_single_heading_pane_g1_cp2_ParamLimits

0x6ce1,	// (0x00036e0d) list_single_heading_pane_g1_cp2

0x6ced,	// (0x00036e19) list_single_heading_pane_g2_cp2

0x6cf5,	// (0x00036e21) list_single_heading_pane_t1_cp2_ParamLimits

0x6cf5,	// (0x00036e21) list_single_heading_pane_t1_cp2

0xa4f8,	// (0x0003a624) list_single_heading_pane_t2_cp2_ParamLimits

0xa4f8,	// (0x0003a624) list_single_heading_pane_t2_cp2

0xa440,	// (0x0003a56c) list_double_graphic_pane_g1_cp2_ParamLimits

0xa440,	// (0x0003a56c) list_double_graphic_pane_g1_cp2

0xa44c,	// (0x0003a578) list_double_graphic_pane_g2_cp2_ParamLimits

0xa44c,	// (0x0003a578) list_double_graphic_pane_g2_cp2

0xa45b,	// (0x0003a587) list_double_graphic_pane_g3_cp2

0xa463,	// (0x0003a58f) list_double_graphic_pane_t1_cp2_ParamLimits

0xa463,	// (0x0003a58f) list_double_graphic_pane_t1_cp2

0xa479,	// (0x0003a5a5) list_double_graphic_pane_t2_cp2_ParamLimits

0xa479,	// (0x0003a5a5) list_double_graphic_pane_t2_cp2

0x8ca4,	// (0x00038dd0) list_double_number_pane_g1_cp2_ParamLimits

0x8ca4,	// (0x00038dd0) list_double_number_pane_g1_cp2

0x8cb0,	// (0x00038ddc) list_double_number_pane_g2_cp2

0xa404,	// (0x0003a530) list_double_number_pane_t1_cp2_ParamLimits

0xa404,	// (0x0003a530) list_double_number_pane_t1_cp2

0xa418,	// (0x0003a544) list_double_number_pane_t2_cp2_ParamLimits

0xa418,	// (0x0003a544) list_double_number_pane_t2_cp2

0xa42e,	// (0x0003a55a) list_double_number_pane_t3_cp2_ParamLimits

0xa42e,	// (0x0003a55a) list_double_number_pane_t3_cp2

0xa2ed,	// (0x0003a419) list_single_graphic_pane_g1_cp2_ParamLimits

0xa2ed,	// (0x0003a419) list_single_graphic_pane_g1_cp2

0x2d9f,	// (0x00032ecb) list_single_graphic_pane_g2_cp2_ParamLimits

0x2d9f,	// (0x00032ecb) list_single_graphic_pane_g2_cp2

0x8d0a,	// (0x00038e36) list_single_graphic_pane_g3_cp2

0xa2c3,	// (0x0003a3ef) list_single_graphic_pane_t1_cp2_ParamLimits

0xa2c3,	// (0x0003a3ef) list_single_graphic_pane_t1_cp2

0x2d9f,	// (0x00032ecb) list_single_number_pane_g1_cp2_ParamLimits

0x2d9f,	// (0x00032ecb) list_single_number_pane_g1_cp2

0x8d0a,	// (0x00038e36) list_single_number_pane_g2_cp2

0xa2c3,	// (0x0003a3ef) list_single_number_pane_t1_cp2_ParamLimits

0xa2c3,	// (0x0003a3ef) list_single_number_pane_t1_cp2

0xa2d9,	// (0x0003a405) list_single_number_pane_t2_cp2_ParamLimits

0xa2d9,	// (0x0003a405) list_single_number_pane_t2_cp2

0x6bf0,	// (0x00036d1c) list_double2_pane_g1_cp2_ParamLimits

0x6bf0,	// (0x00036d1c) list_double2_pane_g1_cp2

0x6c01,	// (0x00036d2d) list_double2_pane_g2_cp2

0x8c7c,	// (0x00038da8) list_double2_pane_t1_cp2_ParamLimits

0x8c7c,	// (0x00038da8) list_double2_pane_t1_cp2

0x8c92,	// (0x00038dbe) list_double2_pane_t2_cp2_ParamLimits

0x8c92,	// (0x00038dbe) list_double2_pane_t2_cp2

0x8ca4,	// (0x00038dd0) list_double_pane_g1_cp2_ParamLimits

0x8ca4,	// (0x00038dd0) list_double_pane_g1_cp2

0x8cb0,	// (0x00038ddc) list_double_pane_g2_cp2

0x8cb8,	// (0x00038de4) list_double_pane_t1_cp2_ParamLimits

0x8cb8,	// (0x00038de4) list_double_pane_t1_cp2

0x8cce,	// (0x00038dfa) list_double_pane_t2_cp2_ParamLimits

0x8cce,	// (0x00038dfa) list_double_pane_t2_cp2

0x8cfa,	// (0x00038e26) list_single_pane_cp2_g3

0x2d9f,	// (0x00032ecb) list_single_pane_g1_cp2_ParamLimits

0x2d9f,	// (0x00032ecb) list_single_pane_g1_cp2

0x8d0a,	// (0x00038e36) list_single_pane_g2_cp2

0x8d12,	// (0x00038e3e) list_single_pane_t1_cp2_ParamLimits

0x8d12,	// (0x00038e3e) list_single_pane_t1_cp2

0x8d2a,	// (0x00038e56) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8d2a,	// (0x00038e56) list_single_large_graphic_pane_g1_cp2

0x8d38,	// (0x00038e64) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8d38,	// (0x00038e64) list_single_large_graphic_pane_g2_cp2

0x8d44,	// (0x00038e70) list_single_large_graphic_pane_g3_cp2

0x8d4c,	// (0x00038e78) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8d4c,	// (0x00038e78) list_single_large_graphic_pane_g4_cp1

0x8d66,	// (0x00038e92) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8d66,	// (0x00038e92) list_single_large_graphic_pane_t1_cp2

0xa28d,	// (0x0003a3b9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa28d,	// (0x0003a3b9) list_single_graphic_heading_pane_g1_cp2

0xa25a,	// (0x0003a386) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa25a,	// (0x0003a386) list_single_graphic_heading_pane_g4_cp2

0x8d0a,	// (0x00038e36) list_single_graphic_heading_pane_g5_cp2

0xa299,	// (0x0003a3c5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa299,	// (0x0003a3c5) list_single_graphic_heading_pane_t1_cp2

0xa2af,	// (0x0003a3db) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa2af,	// (0x0003a3db) list_single_graphic_heading_pane_t2_cp2

0xa24e,	// (0x0003a37a) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa24e,	// (0x0003a37a) list_single_2graphic_pane_g1_cp2

0xa25a,	// (0x0003a386) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa25a,	// (0x0003a386) list_single_2graphic_pane_g2_cp2

0x8d0a,	// (0x00038e36) list_single_2graphic_pane_g3_cp2

0xa26b,	// (0x0003a397) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa26b,	// (0x0003a397) list_single_2graphic_pane_g4_cp2

0xa277,	// (0x0003a3a3) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa277,	// (0x0003a3a3) list_single_2graphic_pane_t1_cp2

0xf4ac,	// (0x0003f5d8) list_highlight_pane_g10_cp1

0x9e26,	// (0x00039f52) list_highlight_pane_g1_cp1

0x9e2e,	// (0x00039f5a) list_highlight_pane_g2_cp1

0x9e36,	// (0x00039f62) list_highlight_pane_g3_cp1

0x9e3e,	// (0x00039f6a) list_highlight_pane_g4_cp1

0x9e46,	// (0x00039f72) list_highlight_pane_g5_cp1

0x9e4e,	// (0x00039f7a) list_highlight_pane_g6_cp1

0x9e56,	// (0x00039f82) list_highlight_pane_g7_cp1

0x9e5e,	// (0x00039f8a) list_highlight_pane_g8_cp1

0x9e66,	// (0x00039f92) list_highlight_pane_g9_cp1

0x9d46,	// (0x00039e72) form_field_slider_pane_t3

0x9d54,	// (0x00039e80) form_field_slider_pane_t4

0x9d62,	// (0x00039e8e) slider_form_pane_ParamLimits

0x9d62,	// (0x00039e8e) slider_form_pane

0xf4b6,	// (0x0003f5e2) control_abbreviations

0xf4b6,	// (0x0003f5e2) control_conventions

0xf4b6,	// (0x0003f5e2) control_definitions

0xf4b6,	// (0x0003f5e2) format_table_attribute

0xa54e,	// (0x0003a67a) bg_popup_preview_window_pane_g9

0xf4b6,	// (0x0003f5e2) format_table_data2

0xf4b6,	// (0x0003f5e2) format_table_data3

0xf4b6,	// (0x0003f5e2) format_table_data_example

0x0008,

0xf4b6,	// (0x0003f5e2) intro_purpose

0xf8e5,	// (0x0003fa11) bg_popup_preview_window_pane_g

0xf4b6,	// (0x0003f5e2) texts_category

0xf4b6,	// (0x0003f5e2) texts_graphics

0x8d7c,	// (0x00038ea8) text_digital

0x8d8b,	// (0x00038eb7) text_primary

0x8d9a,	// (0x00038ec6) text_primary_small

0x8da9,	// (0x00038ed5) text_secondary

0x8db8,	// (0x00038ee4) text_title

0xacd0,	// (0x0003adfc) bg_passive_tab_pane_g1_cp3_srt

0x69c2,	// (0x00036aee) bg_passive_tab_pane_g2_cp3_srt

0xacd9,	// (0x0003ae05) bg_passive_tab_pane_g3_cp3_srt

0xf504,	// (0x0003f630) bg_active_tab_pane_cp3_srt_ParamLimits

0xf504,	// (0x0003f630) bg_active_tab_pane_cp3_srt

0xace2,	// (0x0003ae0e) tabs_4_active_pane_srt_g1

0xacea,	// (0x0003ae16) tabs_4_active_pane_srt_t1_ParamLimits

0xacea,	// (0x0003ae16) tabs_4_active_pane_srt_t1

0xacd0,	// (0x0003adfc) bg_active_tab_pane_g1_cp3_copy1

0x69c2,	// (0x00036aee) bg_active_tab_pane_g2_cp3_copy1

0xacd9,	// (0x0003ae05) bg_active_tab_pane_g3_cp3_copy1

0xf504,	// (0x0003f630) tabs_2_long_active_pane_srt_ParamLimits

0xf504,	// (0x0003f630) tabs_2_long_active_pane_srt

0xf504,	// (0x0003f630) tabs_2_long_passive_pane_srt_ParamLimits

0xf504,	// (0x0003f630) tabs_2_long_passive_pane_srt

0x6319,	// (0x00036445) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6319,	// (0x00036445) bg_passive_tab_pane_cp4_srt

0xa97d,	// (0x0003aaa9) bg_passive_tab_pane_g1_cp4_srt

0x69c2,	// (0x00036aee) bg_passive_tab_pane_g2_cp4_srt

0xa986,	// (0x0003aab2) bg_passive_tab_pane_g3_cp4_srt

0x2dab,	// (0x00032ed7) bg_active_tab_pane_cp4_srt_ParamLimits

0x2dab,	// (0x00032ed7) bg_active_tab_pane_cp4_srt

0xa98f,	// (0x0003aabb) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa98f,	// (0x0003aabb) tabs_2_long_active_pane_srt_t1

0xa97d,	// (0x0003aaa9) bg_active_tab_pane_g1_cp4_srt

0x69c2,	// (0x00036aee) bg_active_tab_pane_g2_cp4_srt

0xa986,	// (0x0003aab2) bg_active_tab_pane_g3_cp4_srt

0xf540,	// (0x0003f66c) tabs_3_long_active_pane_srt_ParamLimits

0xf540,	// (0x0003f66c) tabs_3_long_active_pane_srt

0xf540,	// (0x0003f66c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xf540,	// (0x0003f66c) tabs_3_long_passive_pane_cp_srt

0xf540,	// (0x0003f66c) tabs_3_long_passive_pane_srt_ParamLimits

0xf540,	// (0x0003f66c) tabs_3_long_passive_pane_srt

0x6319,	// (0x00036445) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6319,	// (0x00036445) bg_passive_tab_pane_cp5_srt

0x6b8d,	// (0x00036cb9) bg_passive_tab_pane_g1_cp5_srt

0x69c2,	// (0x00036aee) bg_passive_tab_pane_g2_cp5_srt

0x6b96,	// (0x00036cc2) bg_passive_tab_pane_g3_cp5_srt

0x2dab,	// (0x00032ed7) bg_active_tab_pane_cp5_srt_ParamLimits

0x2dab,	// (0x00032ed7) bg_active_tab_pane_cp5_srt

0xa96b,	// (0x0003aa97) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa96b,	// (0x0003aa97) tabs_3_long_active_pane_srt_t1

0x6b8d,	// (0x00036cb9) bg_active_tab_pane_g1_cp5_srt

0x69c2,	// (0x00036aee) bg_active_tab_pane_g2_cp5_srt

0x6b96,	// (0x00036cc2) bg_active_tab_pane_g3_cp5_srt

0xa95d,	// (0x0003aa89) navi_text_pane_srt_t1

0xa955,	// (0x0003aa81) navi_icon_pane_srt_g1

0x8f90,	// (0x000390bc) midp_editing_number_pane_srt

0x8dc7,	// (0x00038ef3) midp_ticker_pane_srt

0x8f98,	// (0x000390c4) midp_ticker_pane_srt_g1

0x8fa0,	// (0x000390cc) midp_ticker_pane_srt_g2

0x0001,

0xf768,	// (0x0003f894) midp_ticker_pane_srt_g

0x8fa8,	// (0x000390d4) midp_ticker_pane_srt_t1

0xa946,	// (0x0003aa72) midp_editing_number_pane_t1_copy1

0x8dcf,	// (0x00038efb) listscroll_midp_pane

0x8dcf,	// (0x00038efb) midp_form_pane

0x8e3e,	// (0x00038f6a) midp_info_popup_window_ParamLimits

0x8e3e,	// (0x00038f6a) midp_info_popup_window

0x2990,	// (0x00032abc) bg_popup_sub_pane_cp50_ParamLimits

0x2990,	// (0x00032abc) bg_popup_sub_pane_cp50

0x9a50,	// (0x00039b7c) listscroll_midp_info_pane_ParamLimits

0x9a50,	// (0x00039b7c) listscroll_midp_info_pane

0x9a30,	// (0x00039b5c) listscroll_form_midp_pane_ParamLimits

0x9a30,	// (0x00039b5c) listscroll_form_midp_pane

0x9a3c,	// (0x00039b68) scroll_bar_cp050

0x9a10,	// (0x00039b3c) list_midp_pane

0xb748,	// (0x0003b874) signal_pane_g2_cp

0x994a,	// (0x00039a76) listscroll_midp_info_pane_t1_ParamLimits

0x994a,	// (0x00039a76) listscroll_midp_info_pane_t1

0x9962,	// (0x00039a8e) listscroll_midp_info_pane_t2_ParamLimits

0x9962,	// (0x00039a8e) listscroll_midp_info_pane_t2

0x99a0,	// (0x00039acc) listscroll_midp_info_pane_t3_ParamLimits

0x99a0,	// (0x00039acc) listscroll_midp_info_pane_t3

0x99da,	// (0x00039b06) listscroll_midp_info_pane_t4_ParamLimits

0x99da,	// (0x00039b06) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x0003f94c) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x0003f94c) listscroll_midp_info_pane_t

0x2a10,	// (0x00032b3c) scroll_pane_cp21

0x98e4,	// (0x00039a10) form_midp_field_choice_group_pane

0x98ed,	// (0x00039a19) form_midp_field_text_pane

0x9930,	// (0x00039a5c) form_midp_field_time_pane

0x9938,	// (0x00039a64) form_midp_gauge_slider_pane

0x9941,	// (0x00039a6d) form_midp_gauge_wait_pane

0xf4b6,	// (0x0003f5e2) form_midp_image_pane

0x771b,	// (0x00037847) list_single_midp_pane_ParamLimits

0x771b,	// (0x00037847) list_single_midp_pane

0x98a8,	// (0x000399d4) form_midp_field_text_pane_t1

0x969a,	// (0x000397c6) input_focus_pane_cp050

0x98d3,	// (0x000399ff) list_midp_form_text_pane

0x9877,	// (0x000399a3) form_midp_field_choice_group_pane_t1

0x9885,	// (0x000399b1) input_focus_pane_cp051

0x9899,	// (0x000399c5) list_midp_choice_pane

0xf4b6,	// (0x0003f5e2) status_idle_pane

0x985b,	// (0x00039987) form_midp_field_time_pane_t1

0xf4ac,	// (0x0003f5d8) wait_anim_pane_g2_copy1

0x9869,	// (0x00039995) form_midp_field_time_pane_t2

0x0001,

0x8eee,	// (0x0003901a) aid_navinavi_width_2_pane

0xf81b,	// (0x0003f947) form_midp_field_time_pane_t

0xf4b6,	// (0x0003f5e2) input_focus_pane_cp052

0xf4b6,	// (0x0003f5e2) bg_input_focus_pane_cp040

0x981b,	// (0x00039947) form_midp_gauge_slider_pane_t1

0x9829,	// (0x00039955) form_midp_gauge_slider_pane_t2

0x9837,	// (0x00039963) form_midp_gauge_slider_pane_t3

0x9845,	// (0x00039971) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x0003f93e) form_midp_gauge_slider_pane_t

0x9853,	// (0x0003997f) form_midp_slider_pane

0xf504,	// (0x0003f630) bg_input_focus_pane_cp041_ParamLimits

0xf504,	// (0x0003f630) bg_input_focus_pane_cp041

0x97e8,	// (0x00039914) form_midp_gauge_wait_pane_t1_ParamLimits

0x97e8,	// (0x00039914) form_midp_gauge_wait_pane_t1

0x97fa,	// (0x00039926) form_midp_gauge_wait_pane_t2_ParamLimits

0x97fa,	// (0x00039926) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x0003f939) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x0003f939) form_midp_gauge_wait_pane_t

0x980c,	// (0x00039938) form_midp_wait_pane_ParamLimits

0x980c,	// (0x00039938) form_midp_wait_pane

0x97b0,	// (0x000398dc) form_midp_image_pane_g1

0x97b9,	// (0x000398e5) form_midp_image_pane_t1

0x97c8,	// (0x000398f4) form_midp_image_pane_t2

0x97d7,	// (0x00039903) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x0003f932) form_midp_image_pane_t

0x97a7,	// (0x000398d3) list_single_midp_pane_g1

0x4316,	// (0x00034442) list_single_midp_pane_t1

0x978d,	// (0x000398b9) list_midp_form_item_pane_ParamLimits

0x978d,	// (0x000398b9) list_midp_form_item_pane

0x8e96,	// (0x00038fc2) list_midp_form_item_pane_t1

0x8ea5,	// (0x00038fd1) midp_ticker_pane_g1

0x8eb1,	// (0x00038fdd) midp_ticker_pane_g2

0x0001,

0xf74e,	// (0x0003f87a) midp_ticker_pane_g

0x8ebd,	// (0x00038fe9) midp_ticker_pane_t1

0xabb3,	// (0x0003acdf) midp_editing_number_pane_t1

0xab91,	// (0x0003acbd) midp_editing_number_pane

0xaba0,	// (0x0003accc) midp_ticker_pane

0xa936,	// (0x0003aa62) ai_message_heading_pane

0xf4b6,	// (0x0003f5e2) bg_popup_window_pane_cp14

0xa93e,	// (0x0003aa6a) listscroll_ai_message_pane

0xa8bc,	// (0x0003a9e8) ai_message_heading_pane_g1_ParamLimits

0xa8bc,	// (0x0003a9e8) ai_message_heading_pane_g1

0xa8c8,	// (0x0003a9f4) ai_message_heading_pane_g2_ParamLimits

0xa8c8,	// (0x0003a9f4) ai_message_heading_pane_g2

0xa8d6,	// (0x0003aa02) ai_message_heading_pane_g3_ParamLimits

0xa8d6,	// (0x0003aa02) ai_message_heading_pane_g3

0xa8e2,	// (0x0003aa0e) ai_message_heading_pane_g4_ParamLimits

0xa8e2,	// (0x0003aa0e) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x0003fa73) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x0003fa73) ai_message_heading_pane_g

0xa8ee,	// (0x0003aa1a) ai_message_heading_pane_t1_ParamLimits

0xa8ee,	// (0x0003aa1a) ai_message_heading_pane_t1

0xa908,	// (0x0003aa34) ai_message_heading_pane_t2_ParamLimits

0xa908,	// (0x0003aa34) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x0003fa7c) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x0003fa7c) ai_message_heading_pane_t

0xa91c,	// (0x0003aa48) bg_popup_heading_pane_cp1_ParamLimits

0xa91c,	// (0x0003aa48) bg_popup_heading_pane_cp1

0xa8aa,	// (0x0003a9d6) list_ai_message_pane_ParamLimits

0xa8aa,	// (0x0003a9d6) list_ai_message_pane

0x2a10,	// (0x00032b3c) scroll_pane_cp10

0xa846,	// (0x0003a972) list_ai_message_pane_g1

0xa84e,	// (0x0003a97a) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x0003fa50) list_ai_message_pane_g

0xa856,	// (0x0003a982) list_ai_message_pane_t1_ParamLimits

0xa856,	// (0x0003a982) list_ai_message_pane_t1

0xa86b,	// (0x0003a997) list_ai_message_pane_t2_ParamLimits

0xa86b,	// (0x0003a997) list_ai_message_pane_t2

0xa880,	// (0x0003a9ac) list_ai_message_pane_t3_ParamLimits

0xa880,	// (0x0003a9ac) list_ai_message_pane_t3

0xa895,	// (0x0003a9c1) list_ai_message_pane_t4_ParamLimits

0xa895,	// (0x0003a9c1) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x0003fa55) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x0003fa55) list_ai_message_pane_t

0xa82f,	// (0x0003a95b) cell_ai_soft_ind_pane_ParamLimits

0xa82f,	// (0x0003a95b) cell_ai_soft_ind_pane

0x8ecf,	// (0x00038ffb) cell_ai_soft_ind_pane_g1_ParamLimits

0x8ecf,	// (0x00038ffb) cell_ai_soft_ind_pane_g1

0xf4b6,	// (0x0003f5e2) grid_highlight_cp1

0x8edc,	// (0x00039008) text_secondary_cp56_ParamLimits

0x8edc,	// (0x00039008) text_secondary_cp56

0xa804,	// (0x0003a930) example_general_pane_ParamLimits

0xa804,	// (0x0003a930) example_general_pane

0xa810,	// (0x0003a93c) example_parent_pane_g1_ParamLimits

0xa810,	// (0x0003a93c) example_parent_pane_g1

0xa81c,	// (0x0003a948) example_parent_pane_t1_ParamLimits

0xa81c,	// (0x0003a948) example_parent_pane_t1

0x736a,	// (0x00037496) popup_preview_text_window_ParamLimits

0x736a,	// (0x00037496) popup_preview_text_window

0x8d02,	// (0x00038e2e) list_single_pane_cp2_g4

0x24aa,	// (0x000325d6) bg_popup_preview_window_pane_ParamLimits

0x24aa,	// (0x000325d6) bg_popup_preview_window_pane

0xa558,	// (0x0003a684) popup_preview_text_window_t1_ParamLimits

0xa558,	// (0x0003a684) popup_preview_text_window_t1

0xa576,	// (0x0003a6a2) popup_preview_text_window_t2_ParamLimits

0xa576,	// (0x0003a6a2) popup_preview_text_window_t2

0xa5bf,	// (0x0003a6eb) popup_preview_text_window_t3_ParamLimits

0xa5bf,	// (0x0003a6eb) popup_preview_text_window_t3

0xa604,	// (0x0003a730) popup_preview_text_window_t4_ParamLimits

0xa604,	// (0x0003a730) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x0003fa24) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x0003fa24) popup_preview_text_window_t

0xa682,	// (0x0003a7ae) scroll_pane_cp11

0x9626,	// (0x00039752) bg_popup_preview_window_pane_g1

0xa50c,	// (0x0003a638) bg_popup_preview_window_pane_g2

0xa516,	// (0x0003a642) bg_popup_preview_window_pane_g3

0xa520,	// (0x0003a64c) bg_popup_preview_window_pane_g4

0xa52a,	// (0x0003a656) bg_popup_preview_window_pane_g5

0xa534,	// (0x0003a660) bg_popup_preview_window_pane_g6

0xa53c,	// (0x0003a668) bg_popup_preview_window_pane_g7

0xa544,	// (0x0003a670) bg_popup_preview_window_pane_g8

0x5574,	// (0x000356a0) aid_popup_width_pane

0x7346,	// (0x00037472) popup_midp_note_alarm_window_ParamLimits

0x7346,	// (0x00037472) popup_midp_note_alarm_window

0x28db,	// (0x00032a07) data_form_pane_ParamLimits

0x618e,	// (0x000362ba) form_field_data_pane_g1

0x6198,	// (0x000362c4) form_field_data_pane_t1_ParamLimits

0x28e7,	// (0x00032a13) input_focus_pane_ParamLimits

0x4137,	// (0x00034263) data_form_wide_pane_ParamLimits

0x4148,	// (0x00034274) form_field_data_wide_pane_g1

0x4154,	// (0x00034280) form_field_data_wide_pane_t1_ParamLimits

0x2662,	// (0x0003278e) input_focus_pane_cp6_ParamLimits

0x62de,	// (0x0003640a) input_popup_find_pane_g1_ParamLimits

0x62de,	// (0x0003640a) input_popup_find_pane_g1

0x6437,	// (0x00036563) aid_navi_side_left_pane

0x644c,	// (0x00036578) aid_navi_side_right_pane

0x9f21,	// (0x0003a04d) bg_popup_window_pane_cp30_ParamLimits

0x9f21,	// (0x0003a04d) bg_popup_window_pane_cp30

0x9f9b,	// (0x0003a0c7) popup_midp_note_alarm_window_g1_ParamLimits

0x9f9b,	// (0x0003a0c7) popup_midp_note_alarm_window_g1

0x9fcb,	// (0x0003a0f7) popup_midp_note_alarm_window_t1_ParamLimits

0x9fcb,	// (0x0003a0f7) popup_midp_note_alarm_window_t1

0xa06c,	// (0x0003a198) popup_midp_note_alarm_window_t2_ParamLimits

0xa06c,	// (0x0003a198) popup_midp_note_alarm_window_t2

0xa11a,	// (0x0003a246) popup_midp_note_alarm_window_t3_ParamLimits

0xa11a,	// (0x0003a246) popup_midp_note_alarm_window_t3

0xa14c,	// (0x0003a278) popup_midp_note_alarm_window_t4_ParamLimits

0xa14c,	// (0x0003a278) popup_midp_note_alarm_window_t4

0xa172,	// (0x0003a29e) popup_midp_note_alarm_window_t5_ParamLimits

0xa172,	// (0x0003a29e) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x0003f9c1) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x0003f9c1) popup_midp_note_alarm_window_t

0xa21e,	// (0x0003a34a) wait_bar_pane_cp1_ParamLimits

0xa21e,	// (0x0003a34a) wait_bar_pane_cp1

0xf4b6,	// (0x0003f5e2) wait_anim_pane_copy1

0xf4b6,	// (0x0003f5e2) wait_border_pane_copy1

0x9c06,	// (0x00039d32) wait_border_pane_g1_copy1

0x416e,	// (0x0003429a) form_field_popup_pane_g1

0x61b2,	// (0x000362de) form_field_popup_pane_t1_ParamLimits

0x28e7,	// (0x00032a13) input_focus_pane_cp7_ParamLimits

0x2915,	// (0x00032a41) list_form_pane_ParamLimits

0x4176,	// (0x000342a2) form_field_popup_wide_pane_g1

0x417e,	// (0x000342aa) form_field_popup_wide_pane_t1_ParamLimits

0x28e7,	// (0x00032a13) input_focus_pane_cp8_ParamLimits

0x2921,	// (0x00032a4d) list_form_wide_pane_ParamLimits

0xad6e,	// (0x0003ae9a) aid_size_cell_graphic_pane

0x6231,	// (0x0003635d) data_form_pane_t1_ParamLimits

0x79ab,	// (0x00037ad7) data_form_wide_pane_t1_ParamLimits

0x91e5,	// (0x00039311) bg_status_flat_pane

0x59a3,	// (0x00035acf) title_pane_t1_ParamLimits

0xf4cc,	// (0x0003f5f8) title_pane_t2_ParamLimits

0xf4f2,	// (0x0003f61e) title_pane_t3_ParamLimits

0xf557,	// (0x0003f683) title_pane_t_ParamLimits

0x659d,	// (0x000366c9) level_1_signal_ParamLimits

0x65aa,	// (0x000366d6) level_2_signal_ParamLimits

0x65b7,	// (0x000366e3) level_3_signal_ParamLimits

0x65c4,	// (0x000366f0) level_4_signal_ParamLimits

0x65d1,	// (0x000366fd) level_5_signal_ParamLimits

0x65de,	// (0x0003670a) level_6_signal_ParamLimits

0x65eb,	// (0x00036717) level_7_signal_ParamLimits

0x659d,	// (0x000366c9) level_1_battery_ParamLimits

0x65aa,	// (0x000366d6) level_2_battery_ParamLimits

0x65b7,	// (0x000366e3) level_3_battery_ParamLimits

0x65c4,	// (0x000366f0) level_4_battery_ParamLimits

0x65d1,	// (0x000366fd) level_5_battery_ParamLimits

0x65de,	// (0x0003670a) level_6_battery_ParamLimits

0x65eb,	// (0x00036717) level_7_battery_ParamLimits

0x9e26,	// (0x00039f52) bg_status_flat_pane_g1

0x9e2e,	// (0x00039f5a) bg_status_flat_pane_g2

0x9e36,	// (0x00039f62) bg_status_flat_pane_g3

0x9e3e,	// (0x00039f6a) bg_status_flat_pane_g4

0x9e46,	// (0x00039f72) bg_status_flat_pane_g5

0x9e4e,	// (0x00039f7a) bg_status_flat_pane_g6

0x9e56,	// (0x00039f82) bg_status_flat_pane_g7

0x5a13,	// (0x00035b3f) tabs_3_active_pane_t1_ParamLimits

0x5a13,	// (0x00035b3f) tabs_3_passive_pane_t1_ParamLimits

0x5a2d,	// (0x00035b59) tabs_4_active_pane_t1_ParamLimits

0x5a2d,	// (0x00035b59) tabs_4_1_passive_pane_t1_ParamLimits

0x62f4,	// (0x00036420) tabs_2_active_pane_t1_ParamLimits

0x62f4,	// (0x00036420) tabs_2_passive_pane_t1_ParamLimits

0x2dab,	// (0x00032ed7) bg_active_tab_pane_cp4_ParamLimits

0x6306,	// (0x00036432) tabs_2_long_active_pane_t1_ParamLimits

0x6319,	// (0x00036445) bg_passive_tab_pane_cp4_ParamLimits

0x7662,	// (0x0003778e) list_single_midp_graphic_pane_t1_ParamLimits

0x2dab,	// (0x00032ed7) bg_active_tab_pane_cp5_ParamLimits

0x6325,	// (0x00036451) tabs_3_long_active_pane_t1_ParamLimits

0x6319,	// (0x00036445) bg_passive_tab_pane_cp5_ParamLimits

0x7662,	// (0x0003778e) list_single_midp_graphic_pane_t1

0x91e5,	// (0x00039311) bg_status_flat_pane_ParamLimits

0x92aa,	// (0x000393d6) indicator_pane_cp2_ParamLimits

0x92aa,	// (0x000393d6) indicator_pane_cp2

0x93ed,	// (0x00039519) navi_pane_srt_ParamLimits

0x93ed,	// (0x00039519) navi_pane_srt

0x9411,	// (0x0003953d) popup_clock_digital_analogue_window_cp1

0x22ed,	// (0x00032419) indicator_pane_t1

0x8dc7,	// (0x00038ef3) copy_highlight_pane

0x8dc7,	// (0x00038ef3) cursor_graphics_pane

0x8dc7,	// (0x00038ef3) graphic_within_text_pane

0x8dc7,	// (0x00038ef3) link_highlight_pane

0xa645,	// (0x0003a771) popup_preview_text_window_t5_ParamLimits

0xa645,	// (0x0003a771) popup_preview_text_window_t5

0x8ef8,	// (0x00039024) cursor_digital_pane

0x8ef8,	// (0x00039024) cursor_primary_pane

0x8f09,	// (0x00039035) cursor_primary_small_pane

0x8f11,	// (0x0003903d) cursor_secondary_pane

0x8f19,	// (0x00039045) cursor_title_pane

0x8ef8,	// (0x00039024) link_highlight_digital_pane

0x8f00,	// (0x0003902c) link_highlight_primary_pane

0x8f09,	// (0x00039035) link_highlight_primary_small_pane

0x8f11,	// (0x0003903d) link_highlight_secondary_pane

0x8f19,	// (0x00039045) link_highlight_title_pane

0x8ef8,	// (0x00039024) copy_highlight_digital_pane

0x8ef8,	// (0x00039024) copy_highlight_primary_pane

0x8f09,	// (0x00039035) copy_highlight_primary_small_pane

0x8f11,	// (0x0003903d) copy_highlight_secondary_pane

0x8f19,	// (0x00039045) copy_highlight_title_pane

0x8f11,	// (0x0003903d) graphic_text_digital_pane

0x9ec4,	// (0x00039ff0) graphic_text_primary_pane

0x9ecd,	// (0x00039ff9) graphic_text_primary_small_pane

0x8f09,	// (0x00039035) graphic_text_secondary_pane

0x8ef8,	// (0x00039024) graphic_text_title_pane

0x8f21,	// (0x0003904d) cursor_primary_pane_g1

0x9eb6,	// (0x00039fe2) cursor_text_primary_t1

0x9e9e,	// (0x00039fca) cursor_primary_small_pane_g1

0x9ea8,	// (0x00039fd4) cursor_text_primary_small_t1

0x9e86,	// (0x00039fb2) cursor_primary_small_pane_g1_copy1

0x9e90,	// (0x00039fbc) cursor_text_primary_small_t1_copy1

0x9e6e,	// (0x00039f9a) cursor_text_title_t1

0x9e7c,	// (0x00039fa8) cursor_title_pane_g1

0x8f21,	// (0x0003904d) cursor_digital_pane_g1

0x8f2b,	// (0x00039057) cursor_text_digital_t1

0x8f39,	// (0x00039065) link_highlight_primary_pane_g1

0x9e17,	// (0x00039f43) link_highlight_primary_pane_t1

0x8f39,	// (0x00039065) link_highlight_primary_small_pane_g1

0x8f41,	// (0x0003906d) link_highlight_primary_small_pane_t1

0x8f50,	// (0x0003907c) link_highlight_secondary_pane_g1

0x8f58,	// (0x00039084) link_highlight_secondary_pane_t1

0x9d8b,	// (0x00039eb7) link_highlight_title_pane_g1

0x9d93,	// (0x00039ebf) link_highlight_title_pane_t1

0x9d74,	// (0x00039ea0) link_highlight_digital_pane_g1

0x9d7c,	// (0x00039ea8) link_highlight_digital_pane_t1

0x9c3c,	// (0x00039d68) copy_highlight_primary_pane_g1

0x9c53,	// (0x00039d7f) copy_highlight_primary_pane_t1

0x9c3c,	// (0x00039d68) copy_highlight_primary_small_pane_g1

0x9c44,	// (0x00039d70) copy_highlight_primary_small_pane_t1

0x8f67,	// (0x00039093) copy_highlight_secondary_pane_g1

0x8f6f,	// (0x0003909b) copy_highlight_secondary_pane_t1

0x9c25,	// (0x00039d51) copy_highlight_title_pane_g1

0x9c2d,	// (0x00039d59) copy_highlight_title_pane_t1

0x9c3c,	// (0x00039d68) copy_highlight_digital_pane_g1

0xaf40,	// (0x0003b06c) copy_highlight_digital_pane_t1

0xae94,	// (0x0003afc0) graphic_text_primary_pane_g1

0xaf24,	// (0x0003b050) graphic_text_primary_pane_t1

0xaf32,	// (0x0003b05e) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x0003faf0) graphic_text_primary_pane_t

0xaf00,	// (0x0003b02c) graphic_text_primary_small_pane_g1

0xaf08,	// (0x0003b034) graphic_text_primary_small_pane_t1

0xaf16,	// (0x0003b042) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x0003faeb) graphic_text_primary_small_pane_t

0xaedc,	// (0x0003b008) graphic_text_secondary_pane_g1

0xaee4,	// (0x0003b010) graphic_text_secondary_pane_t1

0xaef2,	// (0x0003b01e) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x0003fae6) graphic_text_secondary_pane_t

0xaeb8,	// (0x0003afe4) graphic_text_title_pane_g1

0xaec0,	// (0x0003afec) graphic_text_title_pane_t1

0xaece,	// (0x0003affa) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x0003fae1) graphic_text_title_pane_t

0xae94,	// (0x0003afc0) graphic_text_digital_pane_g1

0xae9c,	// (0x0003afc8) graphic_text_digital_pane_t1

0xaeaa,	// (0x0003afd6) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x0003fadc) graphic_text_digital_pane_t

0xf504,	// (0x0003f630) navi_icon_pane_srt_ParamLimits

0xf504,	// (0x0003f630) navi_icon_pane_srt

0xf4b6,	// (0x0003f5e2) navi_midp_pane_srt

0xf4b6,	// (0x0003f5e2) navi_navi_pane_srt

0xf504,	// (0x0003f630) navi_text_pane_srt_ParamLimits

0xf504,	// (0x0003f630) navi_text_pane_srt

0xae5f,	// (0x0003af8b) navi_navi_icon_text_pane_srt

0xae67,	// (0x0003af93) navi_navi_pane_srt_g1_ParamLimits

0xae67,	// (0x0003af93) navi_navi_pane_srt_g1

0xae79,	// (0x0003afa5) navi_navi_pane_srt_g2_ParamLimits

0xae79,	// (0x0003afa5) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x0003fad7) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x0003fad7) navi_navi_pane_srt_g

0xae8b,	// (0x0003afb7) navi_navi_tabs_pane_srt

0xae5f,	// (0x0003af8b) navi_navi_text_pane_srt

0xae5f,	// (0x0003af8b) navi_navi_volume_pane_srt

0xae50,	// (0x0003af7c) navi_navi_text_pane_srt_t1

0x7aba,	// (0x00037be6) navi_navi_volume_pane_srt_g1

0x7ac2,	// (0x00037bee) volume_small_pane_srt_ParamLimits

0x7ac2,	// (0x00037bee) volume_small_pane_srt

0x6d6c,	// (0x00036e98) volume_small_pane_srt_g1_ParamLimits

0x6d6c,	// (0x00036e98) volume_small_pane_srt_g1

0x6d7c,	// (0x00036ea8) volume_small_pane_srt_g2_ParamLimits

0x6d7c,	// (0x00036ea8) volume_small_pane_srt_g2

0x6d8d,	// (0x00036eb9) volume_small_pane_srt_g3_ParamLimits

0x6d8d,	// (0x00036eb9) volume_small_pane_srt_g3

0x6d9e,	// (0x00036eca) volume_small_pane_srt_g4_ParamLimits

0x6d9e,	// (0x00036eca) volume_small_pane_srt_g4

0x6daf,	// (0x00036edb) volume_small_pane_srt_g5_ParamLimits

0x6daf,	// (0x00036edb) volume_small_pane_srt_g5

0x6dc0,	// (0x00036eec) volume_small_pane_srt_g6_ParamLimits

0x6dc0,	// (0x00036eec) volume_small_pane_srt_g6

0x6dd1,	// (0x00036efd) volume_small_pane_srt_g7_ParamLimits

0x6dd1,	// (0x00036efd) volume_small_pane_srt_g7

0x6de2,	// (0x00036f0e) volume_small_pane_srt_g8_ParamLimits

0x6de2,	// (0x00036f0e) volume_small_pane_srt_g8

0x6df3,	// (0x00036f1f) volume_small_pane_srt_g9_ParamLimits

0x6df3,	// (0x00036f1f) volume_small_pane_srt_g9

0x6e04,	// (0x00036f30) volume_small_pane_srt_g10_ParamLimits

0x6e04,	// (0x00036f30) volume_small_pane_srt_g10

0x0009,

0xf753,	// (0x0003f87f) volume_small_pane_srt_g_ParamLimits

0xf753,	// (0x0003f87f) volume_small_pane_srt_g

0x255f,	// (0x0003268b) query_popup_data_pane_cp2

0xae36,	// (0x0003af62) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xae36,	// (0x0003af62) navi_navi_icon_text_pane_srt_t1

0x9ec4,	// (0x00039ff0) navi_tabs_2_long_pane_srt

0x9ec4,	// (0x00039ff0) navi_tabs_2_pane_srt

0x9ec4,	// (0x00039ff0) navi_tabs_3_long_pane_srt

0x9ec4,	// (0x00039ff0) navi_tabs_3_pane_srt

0x9ec4,	// (0x00039ff0) navi_tabs_4_pane_srt

0x7a9a,	// (0x00037bc6) tabs_2_active_pane_srt_ParamLimits

0x7a9a,	// (0x00037bc6) tabs_2_active_pane_srt

0x7aaa,	// (0x00037bd6) tabs_2_passive_pane_srt_ParamLimits

0x7aaa,	// (0x00037bd6) tabs_2_passive_pane_srt

0x90f6,	// (0x00039222) bg_passive_tab_pane_cp1_srt_ParamLimits

0x90f6,	// (0x00039222) bg_passive_tab_pane_cp1_srt

0xae02,	// (0x0003af2e) bg_passive_tab_pane_g1_cp1_srt

0x69c2,	// (0x00036aee) bg_passive_tab_pane_g2_cp1_srt

0xae0b,	// (0x0003af37) bg_passive_tab_pane_g3_cp1_srt

0xf504,	// (0x0003f630) bg_active_tab_pane_cp1_srt_ParamLimits

0xf504,	// (0x0003f630) bg_active_tab_pane_cp1_srt

0xae14,	// (0x0003af40) tabs_2_active_pane_srt_g1

0xae1c,	// (0x0003af48) tabs_2_active_pane_srt_t1_ParamLimits

0xae1c,	// (0x0003af48) tabs_2_active_pane_srt_t1

0xae02,	// (0x0003af2e) bg_active_tab_pane_g1_cp1_srt

0x69c2,	// (0x00036aee) bg_active_tab_pane_g2_cp1_srt

0xae0b,	// (0x0003af37) bg_active_tab_pane_g3_cp1_srt

0x7a67,	// (0x00037b93) tabs_3_active_pane_srt_ParamLimits

0x7a67,	// (0x00037b93) tabs_3_active_pane_srt

0x7a78,	// (0x00037ba4) tabs_3_passive_pane_cp_srt_ParamLimits

0x7a78,	// (0x00037ba4) tabs_3_passive_pane_cp_srt

0x7a89,	// (0x00037bb5) tabs_3_passive_pane_srt_ParamLimits

0x7a89,	// (0x00037bb5) tabs_3_passive_pane_srt

0x90f6,	// (0x00039222) bg_passive_tab_pane_cp2_srt_ParamLimits

0x90f6,	// (0x00039222) bg_passive_tab_pane_cp2_srt

0x8f7e,	// (0x000390aa) bg_passive_tab_pane_g1_cp2_srt

0x69c2,	// (0x00036aee) bg_passive_tab_pane_g2_cp2_srt

0x8f87,	// (0x000390b3) bg_passive_tab_pane_g3_cp2_srt

0xf504,	// (0x0003f630) bg_active_tab_pane_cp2_srt_ParamLimits

0xf504,	// (0x0003f630) bg_active_tab_pane_cp2_srt

0xade8,	// (0x0003af14) tabs_3_active_pane_srt_g1

0xadf0,	// (0x0003af1c) tabs_3_active_pane_srt_t1_ParamLimits

0xadf0,	// (0x0003af1c) tabs_3_active_pane_srt_t1

0x8f7e,	// (0x000390aa) bg_active_tab_pane_g1_cp2_srt

0x69c2,	// (0x00036aee) bg_active_tab_pane_g2_cp2_srt

0x8f87,	// (0x000390b3) bg_active_tab_pane_g3_cp2_srt

0x7a1f,	// (0x00037b4b) tabs_4_active_pane_srt_ParamLimits

0x7a1f,	// (0x00037b4b) tabs_4_active_pane_srt

0x7a31,	// (0x00037b5d) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7a31,	// (0x00037b5d) tabs_4_passive_pane_cp2_srt

0x6f83,	// (0x000370af) aid_size_cell_toolbar

0x6319,	// (0x00036445) main_idle_act_pane_ParamLimits

0x716c,	// (0x00037298) popup_large_graphic_colour_window_ParamLimits

0x7513,	// (0x0003763f) popup_toolbar_window_ParamLimits

0x7513,	// (0x0003763f) popup_toolbar_window

0x433b,	// (0x00034467) list_single_graphic_2heading_pane_ParamLimits

0x433b,	// (0x00034467) list_single_graphic_2heading_pane

0x2be8,	// (0x00032d14) aid_size_cell_apps_grid_lsc_pane

0x2bfa,	// (0x00032d26) aid_size_cell_apps_grid_prt_pane

0x90f6,	// (0x00039222) bg_wml_button_pane_cp1_ParamLimits

0x90f6,	// (0x00039222) bg_wml_button_pane_cp1

0x98a8,	// (0x000399d4) form_midp_field_text_pane_t1_ParamLimits

0x969a,	// (0x000397c6) input_focus_pane_cp050_ParamLimits

0x98d3,	// (0x000399ff) list_midp_form_text_pane_ParamLimits

0x9885,	// (0x000399b1) input_focus_pane_cp051_ParamLimits

0x9899,	// (0x000399c5) list_midp_choice_pane_ParamLimits

0x9753,	// (0x0003987f) list_single_2graphic_pane_cp3_ParamLimits

0x9753,	// (0x0003987f) list_single_2graphic_pane_cp3

0x9769,	// (0x00039895) list_single_midp_graphic_pane_ParamLimits

0x9769,	// (0x00039895) list_single_midp_graphic_pane

0x54e0,	// (0x0003560c) list_single_graphic_2heading_pane_g1_ParamLimits

0x54e0,	// (0x0003560c) list_single_graphic_2heading_pane_g1

0x54ec,	// (0x00035618) list_single_graphic_2heading_pane_g4_ParamLimits

0x54ec,	// (0x00035618) list_single_graphic_2heading_pane_g4

0x54f8,	// (0x00035624) list_single_graphic_2heading_pane_g5_ParamLimits

0x54f8,	// (0x00035624) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a6,	// (0x0003f8d2) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a6,	// (0x0003f8d2) list_single_graphic_2heading_pane_g

0x5504,	// (0x00035630) list_single_graphic_2heading_pane_t1_ParamLimits

0x5504,	// (0x00035630) list_single_graphic_2heading_pane_t1

0x5518,	// (0x00035644) list_single_graphic_2heading_pane_t2_ParamLimits

0x5518,	// (0x00035644) list_single_graphic_2heading_pane_t2

0x5534,	// (0x00035660) list_single_graphic_2heading_pane_t3_ParamLimits

0x5534,	// (0x00035660) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ad,	// (0x0003f8d9) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ad,	// (0x0003f8d9) list_single_graphic_2heading_pane_t

0x9564,	// (0x00039690) bg_popup_sub_pane_cp2

0x958e,	// (0x000396ba) grid_toobar_pane

0x75d2,	// (0x000376fe) cell_toolbar_pane_ParamLimits

0x75d2,	// (0x000376fe) cell_toolbar_pane

0x95ca,	// (0x000396f6) cell_toolbar_pane_g1_ParamLimits

0x95ca,	// (0x000396f6) cell_toolbar_pane_g1

0x95de,	// (0x0003970a) cell_toolbar_pane_g2_ParamLimits

0x95de,	// (0x0003970a) cell_toolbar_pane_g2

0x0001,

0xf7bb,	// (0x0003f8e7) cell_toolbar_pane_g_ParamLimits

0xf7bb,	// (0x0003f8e7) cell_toolbar_pane_g

0x9600,	// (0x0003972c) grid_highlight_pane_cp2_ParamLimits

0x9600,	// (0x0003972c) grid_highlight_pane_cp2

0x961a,	// (0x00039746) toolbar_button_pane

0x9626,	// (0x00039752) toolbar_button_pane_g1

0x962e,	// (0x0003975a) toolbar_button_pane_g2

0x9636,	// (0x00039762) toolbar_button_pane_g3

0x963e,	// (0x0003976a) toolbar_button_pane_g4

0x9646,	// (0x00039772) toolbar_button_pane_g5

0x964e,	// (0x0003977a) toolbar_button_pane_g6

0x9656,	// (0x00039782) toolbar_button_pane_g7

0x965e,	// (0x0003978a) toolbar_button_pane_g8

0x9666,	// (0x00039792) toolbar_button_pane_g9

0x0009,

0xf7c0,	// (0x0003f8ec) toolbar_button_pane_g

0x760a,	// (0x00037736) list_single_2graphic_pane_g1_cp3_ParamLimits

0x760a,	// (0x00037736) list_single_2graphic_pane_g1_cp3

0x7616,	// (0x00037742) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7616,	// (0x00037742) list_single_2graphic_pane_g2_cp3

0x7627,	// (0x00037753) list_single_2graphic_pane_g3_cp3

0x762f,	// (0x0003775b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x762f,	// (0x0003775b) list_single_2graphic_pane_g4_cp3

0x763b,	// (0x00037767) list_single_2graphic_pane_t1_cp3_ParamLimits

0x763b,	// (0x00037767) list_single_2graphic_pane_t1_cp3

0x7656,	// (0x00037782) list_single_midp_graphic_pane_g2_ParamLimits

0x7656,	// (0x00037782) list_single_midp_graphic_pane_g2

0x6f8b,	// (0x000370b7) aid_zoom_text_primary

0x54d8,	// (0x00035604) aid_zoom_text_secondary

0x9038,	// (0x00039164) status_small_pane_g7_ParamLimits

0x9038,	// (0x00039164) status_small_pane_g7

0x905b,	// (0x00039187) status_small_pane_t1_ParamLimits

0x597e,	// (0x00035aaa) title_pane_g2

0x0003,

0xf54e,	// (0x0003f67a) title_pane_g

0x5be7,	// (0x00035d13) aid_size_cell_colour_1_pane_ParamLimits

0x5be7,	// (0x00035d13) aid_size_cell_colour_1_pane

0x5bfb,	// (0x00035d27) aid_size_cell_colour_2_pane_ParamLimits

0x5bfb,	// (0x00035d27) aid_size_cell_colour_2_pane

0x5c0f,	// (0x00035d3b) aid_size_cell_colour_3_pane_ParamLimits

0x5c0f,	// (0x00035d3b) aid_size_cell_colour_3_pane

0x5c23,	// (0x00035d4f) aid_size_cell_colour_4_pane_ParamLimits

0x5c23,	// (0x00035d4f) aid_size_cell_colour_4_pane

0x6373,	// (0x0003649f) title_pane_stacon_g1_ParamLimits

0x6373,	// (0x0003649f) title_pane_stacon_g1

0x9caa,	// (0x00039dd6) popup_note_wait_window_g3_ParamLimits

0x9caa,	// (0x00039dd6) popup_note_wait_window_g3

0x9d21,	// (0x00039e4d) popup_note_wait_window_t5_ParamLimits

0x9d21,	// (0x00039e4d) popup_note_wait_window_t5

0xf4b6,	// (0x0003f5e2) main_feb_china_hwr_fs_writing_pane

0x7033,	// (0x0003715f) popup_feb_china_hwr_fs_window_ParamLimits

0x7033,	// (0x0003715f) popup_feb_china_hwr_fs_window

0x7678,	// (0x000377a4) aid_size_cell_hwr_fs_ParamLimits

0x7678,	// (0x000377a4) aid_size_cell_hwr_fs

0x969a,	// (0x000397c6) bg_popup_sub_pane_cp3_ParamLimits

0x969a,	// (0x000397c6) bg_popup_sub_pane_cp3

0x768d,	// (0x000377b9) grid_hwr_fs_pane_ParamLimits

0x768d,	// (0x000377b9) grid_hwr_fs_pane

0x76a5,	// (0x000377d1) linegrid_hwr_fs_pane_ParamLimits

0x76a5,	// (0x000377d1) linegrid_hwr_fs_pane

0x76b5,	// (0x000377e1) cell_hwr_fs_pane_ParamLimits

0x76b5,	// (0x000377e1) cell_hwr_fs_pane

0x96a6,	// (0x000397d2) linegrid_hwr_fs_pane_g1_ParamLimits

0x96a6,	// (0x000397d2) linegrid_hwr_fs_pane_g1

0x96b2,	// (0x000397de) linegrid_hwr_fs_pane_g2_ParamLimits

0x96b2,	// (0x000397de) linegrid_hwr_fs_pane_g2

0x96c4,	// (0x000397f0) linegrid_hwr_fs_pane_g3_ParamLimits

0x96c4,	// (0x000397f0) linegrid_hwr_fs_pane_g3

0x76d9,	// (0x00037805) linegrid_hwr_fs_pane_g4_ParamLimits

0x76d9,	// (0x00037805) linegrid_hwr_fs_pane_g4

0x76f7,	// (0x00037823) linegrid_hwr_fs_pane_g5_ParamLimits

0x76f7,	// (0x00037823) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x0003f917) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x0003f917) linegrid_hwr_fs_pane_g

0x96d0,	// (0x000397fc) cell_hwr_fs_pane_g1_ParamLimits

0x96d0,	// (0x000397fc) cell_hwr_fs_pane_g1

0x949f,	// (0x000395cb) cell_hwr_fs_pane_g2_ParamLimits

0x949f,	// (0x000395cb) cell_hwr_fs_pane_g2

0x96e6,	// (0x00039812) cell_hwr_fs_pane_g3_ParamLimits

0x96e6,	// (0x00039812) cell_hwr_fs_pane_g3

0x96f3,	// (0x0003981f) cell_hwr_fs_pane_g4_ParamLimits

0x96f3,	// (0x0003981f) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x0003f922) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0003f922) cell_hwr_fs_pane_g

0x770d,	// (0x00037839) cell_hwr_fs_pane_t1

0xf4b6,	// (0x0003f5e2) grid_highlight_pane_cp6

0xf4b6,	// (0x0003f5e2) main_idle_act2_pane

0x29f7,	// (0x00032b23) aid_inside_area_popup_secondary

0xa35a,	// (0x0003a486) aid_inside_area_window_primary_ParamLimits

0xa35a,	// (0x0003a486) aid_inside_area_window_primary

0xaf4f,	// (0x0003b07b) ai2_news_ticker_pane

0xaf57,	// (0x0003b083) aid_size_cell_ai1_link_ParamLimits

0xaf57,	// (0x0003b083) aid_size_cell_ai1_link

0xaf71,	// (0x0003b09d) popup_ai2_data_window_ParamLimits

0xaf71,	// (0x0003b09d) popup_ai2_data_window

0xaf8f,	// (0x0003b0bb) popup_ai2_link_window_ParamLimits

0xaf8f,	// (0x0003b0bb) popup_ai2_link_window

0x969a,	// (0x000397c6) bg_popup_sub_pane_cp4_ParamLimits

0x969a,	// (0x000397c6) bg_popup_sub_pane_cp4

0xafa5,	// (0x0003b0d1) grid_ai2_link_pane_ParamLimits

0xafa5,	// (0x0003b0d1) grid_ai2_link_pane

0xafbc,	// (0x0003b0e8) popup_ai2_link_window_g1_ParamLimits

0xafbc,	// (0x0003b0e8) popup_ai2_link_window_g1

0xafc8,	// (0x0003b0f4) popup_ai2_link_window_g2_ParamLimits

0xafc8,	// (0x0003b0f4) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x0003faf5) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x0003faf5) popup_ai2_link_window_g

0xafd9,	// (0x0003b105) ai2_mp_button_pane

0xafe1,	// (0x0003b10d) ai2_mp_volume_pane

0x9885,	// (0x000399b1) bg_popup_sub_pane_cp5_ParamLimits

0x9885,	// (0x000399b1) bg_popup_sub_pane_cp5

0xafe9,	// (0x0003b115) heading_ai2_gene_pane_ParamLimits

0xafe9,	// (0x0003b115) heading_ai2_gene_pane

0xaff5,	// (0x0003b121) list_ai2_gene_pane_ParamLimits

0xaff5,	// (0x0003b121) list_ai2_gene_pane

0xb03d,	// (0x0003b169) cell_ai2_link_pane_ParamLimits

0xb03d,	// (0x0003b169) cell_ai2_link_pane

0xb053,	// (0x0003b17f) cell_ai2_link_pane_g1

0xf4b6,	// (0x0003f5e2) grid_highlight_pane_cp7

0x7ad7,	// (0x00037c03) ai2_mp_volume_pane_g1

0xb126,	// (0x0003b252) ai2_mp_volume_pane_g2

0xb09b,	// (0x0003b1c7) list_ai2_gene_pane_t1

0xb12e,	// (0x0003b25a) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x0003fb0e) ai2_mp_volume_pane_g

0x7adf,	// (0x00037c0b) volume_small_pane_cp3

0xb136,	// (0x0003b262) aid_size_cell_ai2_button

0xb13e,	// (0x0003b26a) grid_ai2_button_pane

0xb147,	// (0x0003b273) cell_ai2_button_pane_ParamLimits

0xb147,	// (0x0003b273) cell_ai2_button_pane

0xf4ac,	// (0x0003f5d8) cell_ai2_button_pane_g1

0xf4b6,	// (0x0003f5e2) grid_highlight_pane_cp8

0xb0e6,	// (0x0003b212) ai2_gene_pane_t1_ParamLimits

0xb0e6,	// (0x0003b212) ai2_gene_pane_t1

0x6f79,	// (0x000370a5) aid_height_parent_landscape

0xa9df,	// (0x0003ab0b) aid_height_set_list

0xa9f0,	// (0x0003ab1c) aid_size_parent

0xad6e,	// (0x0003ae9a) aid_size_cell_graphic_pane_ParamLimits

0xb005,	// (0x0003b131) popup_ai2_data_window_g1_ParamLimits

0xb005,	// (0x0003b131) popup_ai2_data_window_g1

0xb011,	// (0x0003b13d) ai2_news_ticker_pane_g1

0xb019,	// (0x0003b145) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x0003fafa) ai2_news_ticker_pane_g

0xb021,	// (0x0003b14d) ai2_news_ticker_pane_t1

0xb02f,	// (0x0003b15b) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x0003faff) ai2_news_ticker_pane_t

0xb05c,	// (0x0003b188) heading_ai2_gene_pane_g1

0xb064,	// (0x0003b190) heading_ai2_gene_pane_t1_ParamLimits

0xb064,	// (0x0003b190) heading_ai2_gene_pane_t1

0xb079,	// (0x0003b1a5) list_highlight_pane_cp6

0xb081,	// (0x0003b1ad) ai2_gene_pane_ParamLimits

0xb081,	// (0x0003b1ad) ai2_gene_pane

0xb0a9,	// (0x0003b1d5) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x0003fb04) list_ai2_gene_pane_t

0xb0b7,	// (0x0003b1e3) list_highlight_pane_cp8_ParamLimits

0xb0b7,	// (0x0003b1e3) list_highlight_pane_cp8

0xb0c8,	// (0x0003b1f4) ai2_gene_pane_g1_ParamLimits

0xb0c8,	// (0x0003b1f4) ai2_gene_pane_g1

0xb0da,	// (0x0003b206) ai2_gene_pane_g2_ParamLimits

0xb0da,	// (0x0003b206) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x0003fb09) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x0003fb09) ai2_gene_pane_g

0x287d,	// (0x000329a9) scroll_pane_cp12

0x6f36,	// (0x00037062) control_pane_t3_ParamLimits

0x6f36,	// (0x00037062) control_pane_t3

0x904c,	// (0x00039178) status_small_pane_g8_ParamLimits

0x904c,	// (0x00039178) status_small_pane_g8

0x7131,	// (0x0003725d) popup_find_window_ParamLimits

0x735c,	// (0x00037488) popup_note_image_window_ParamLimits

0x4046,	// (0x00034172) list_double2_graphic_pane_vc_g1_ParamLimits

0x4046,	// (0x00034172) list_double2_graphic_pane_vc_g1

0x4238,	// (0x00034364) list_double2_graphic_pane_vc_g2_ParamLimits

0x4238,	// (0x00034364) list_double2_graphic_pane_vc_g2

0x4244,	// (0x00034370) list_double2_graphic_pane_vc_g3_ParamLimits

0x4244,	// (0x00034370) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b4,	// (0x0003f8e0) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b4,	// (0x0003f8e0) list_double2_graphic_pane_vc_g

0x4250,	// (0x0003437c) list_double2_graphic_pane_vc_t1_ParamLimits

0x4250,	// (0x0003437c) list_double2_graphic_pane_vc_t1

0x400a,	// (0x00034136) list_single_heading_pane_vc_g1_ParamLimits

0x400a,	// (0x00034136) list_single_heading_pane_vc_g1

0x4016,	// (0x00034142) list_single_heading_pane_vc_g2_ParamLimits

0x4016,	// (0x00034142) list_single_heading_pane_vc_g2

0x0001,

0xf7d5,	// (0x0003f901) list_single_heading_pane_vc_g_ParamLimits

0xf7d5,	// (0x0003f901) list_single_heading_pane_vc_g

0x4266,	// (0x00034392) list_single_heading_pane_vc_t1_ParamLimits

0x4266,	// (0x00034392) list_single_heading_pane_vc_t1

0x427c,	// (0x000343a8) list_single_heading_pane_vc_t2_ParamLimits

0x427c,	// (0x000343a8) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x0003f906) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x0003f906) list_single_heading_pane_vc_t

0x428e,	// (0x000343ba) list_setting_number_pane_vc_g1_ParamLimits

0x428e,	// (0x000343ba) list_setting_number_pane_vc_g1

0x429a,	// (0x000343c6) list_setting_number_pane_vc_g2_ParamLimits

0x429a,	// (0x000343c6) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x0003f90b) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x0003f90b) list_setting_number_pane_vc_g

0x42a6,	// (0x000343d2) list_setting_number_pane_vc_t1_ParamLimits

0x42a6,	// (0x000343d2) list_setting_number_pane_vc_t1

0x42ba,	// (0x000343e6) list_setting_number_pane_vc_t2_ParamLimits

0x42ba,	// (0x000343e6) list_setting_number_pane_vc_t2

0x42d6,	// (0x00034402) list_setting_number_pane_vc_t3_ParamLimits

0x42d6,	// (0x00034402) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x0003f910) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x0003f910) list_setting_number_pane_vc_t

0x4304,	// (0x00034430) set_value_pane_vc_ParamLimits

0x4304,	// (0x00034430) set_value_pane_vc

0x433b,	// (0x00034467) list_double2_graphic_pane_vc_ParamLimits

0x433b,	// (0x00034467) list_double2_graphic_pane_vc

0xabd7,	// (0x0003ad03) list_double2_large_graphic_pane_vc_ParamLimits

0xabd7,	// (0x0003ad03) list_double2_large_graphic_pane_vc

0x433b,	// (0x00034467) list_double2_pane_vc_ParamLimits

0x433b,	// (0x00034467) list_double2_pane_vc

0x433b,	// (0x00034467) list_double_graphic_heading_pane_vc_ParamLimits

0x433b,	// (0x00034467) list_double_graphic_heading_pane_vc

0x433b,	// (0x00034467) list_double_graphic_pane_vc_ParamLimits

0x433b,	// (0x00034467) list_double_graphic_pane_vc

0x433b,	// (0x00034467) list_double_heading_pane_vc_ParamLimits

0x433b,	// (0x00034467) list_double_heading_pane_vc

0xabeb,	// (0x0003ad17) list_double_large_graphic_pane_vc_ParamLimits

0xabeb,	// (0x0003ad17) list_double_large_graphic_pane_vc

0x433b,	// (0x00034467) list_double_number_pane_vc_ParamLimits

0x433b,	// (0x00034467) list_double_number_pane_vc

0x433b,	// (0x00034467) list_double_pane_vc_ParamLimits

0x433b,	// (0x00034467) list_double_pane_vc

0x433b,	// (0x00034467) list_double_time_pane_vc_ParamLimits

0x433b,	// (0x00034467) list_double_time_pane_vc

0x433b,	// (0x00034467) list_setting_number_pane_vc_ParamLimits

0x433b,	// (0x00034467) list_setting_number_pane_vc

0x433b,	// (0x00034467) list_setting_pane_vc_ParamLimits

0x433b,	// (0x00034467) list_setting_pane_vc

0x433b,	// (0x00034467) list_single_graphic_heading_pane_vc_ParamLimits

0x433b,	// (0x00034467) list_single_graphic_heading_pane_vc

0x433b,	// (0x00034467) list_single_heading_pane_vc_ParamLimits

0x433b,	// (0x00034467) list_single_heading_pane_vc

0xac0d,	// (0x0003ad39) list_single_number_heading_pane_vc_ParamLimits

0xac0d,	// (0x0003ad39) list_single_number_heading_pane_vc

0x4046,	// (0x00034172) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4046,	// (0x00034172) list_double_graphic_heading_pane_vc_g1

0x400a,	// (0x00034136) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x400a,	// (0x00034136) list_double_graphic_heading_pane_vc_g2

0x4016,	// (0x00034142) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4016,	// (0x00034142) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e9,	// (0x0003fb15) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e9,	// (0x0003fb15) list_double_graphic_heading_pane_vc_g

0x4350,	// (0x0003447c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4350,	// (0x0003447c) list_double_graphic_heading_pane_vc_t1

0x4366,	// (0x00034492) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4366,	// (0x00034492) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f0,	// (0x0003fb1c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f0,	// (0x0003fb1c) list_double_graphic_heading_pane_vc_t

0x428e,	// (0x000343ba) list_setting_pane_vc_g1_ParamLimits

0x428e,	// (0x000343ba) list_setting_pane_vc_g1

0x429a,	// (0x000343c6) list_setting_pane_vc_g2_ParamLimits

0x429a,	// (0x000343c6) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x0003f90b) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x0003f90b) list_setting_pane_vc_g

0x4384,	// (0x000344b0) list_setting_pane_vc_t1_ParamLimits

0x4384,	// (0x000344b0) list_setting_pane_vc_t1

0x43a0,	// (0x000344cc) list_setting_pane_vc_t2_ParamLimits

0x43a0,	// (0x000344cc) list_setting_pane_vc_t2

0x0001,

0xfa1e,	// (0x0003fb4a) list_setting_pane_vc_t_ParamLimits

0xfa1e,	// (0x0003fb4a) list_setting_pane_vc_t

0x4304,	// (0x00034430) set_value_pane_cp_vc_ParamLimits

0x4304,	// (0x00034430) set_value_pane_cp_vc

0x400a,	// (0x00034136) list_single_number_heading_pane_vc_g1_ParamLimits

0x400a,	// (0x00034136) list_single_number_heading_pane_vc_g1

0x4016,	// (0x00034142) list_single_number_heading_pane_vc_g2_ParamLimits

0x4016,	// (0x00034142) list_single_number_heading_pane_vc_g2

0x0001,

0xf7d5,	// (0x0003f901) list_single_number_heading_pane_vc_g_ParamLimits

0xf7d5,	// (0x0003f901) list_single_number_heading_pane_vc_g

0x43bc,	// (0x000344e8) list_single_number_heading_pane_vc_t1_ParamLimits

0x43bc,	// (0x000344e8) list_single_number_heading_pane_vc_t1

0x4022,	// (0x0003414e) list_single_number_heading_pane_vc_t2_ParamLimits

0x4022,	// (0x0003414e) list_single_number_heading_pane_vc_t2

0x4034,	// (0x00034160) list_single_number_heading_pane_vc_t3_ParamLimits

0x4034,	// (0x00034160) list_single_number_heading_pane_vc_t3

0x0002,

0xfa23,	// (0x0003fb4f) list_single_number_heading_pane_vc_t_ParamLimits

0xfa23,	// (0x0003fb4f) list_single_number_heading_pane_vc_t

0x4046,	// (0x00034172) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4046,	// (0x00034172) list_single_graphic_heading_pane_vc_g1

0x400a,	// (0x00034136) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x400a,	// (0x00034136) list_single_graphic_heading_pane_vc_g4

0x4016,	// (0x00034142) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4016,	// (0x00034142) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9e9,	// (0x0003fb15) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9e9,	// (0x0003fb15) list_single_graphic_heading_pane_vc_g

0x43bc,	// (0x000344e8) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x43bc,	// (0x000344e8) list_single_graphic_heading_pane_vc_t1

0x43d2,	// (0x000344fe) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x43d2,	// (0x000344fe) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2a,	// (0x0003fb56) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2a,	// (0x0003fb56) list_single_graphic_heading_pane_vc_t

0x400a,	// (0x00034136) list_double2_pane_vc_g1_ParamLimits

0x400a,	// (0x00034136) list_double2_pane_vc_g1

0x4016,	// (0x00034142) list_double2_pane_vc_g2_ParamLimits

0x4016,	// (0x00034142) list_double2_pane_vc_g2

0x0001,

0xf7d5,	// (0x0003f901) list_double2_pane_vc_g_ParamLimits

0xf7d5,	// (0x0003f901) list_double2_pane_vc_g

0x4325,	// (0x00034451) list_double2_pane_vc_t1_ParamLimits

0x4325,	// (0x00034451) list_double2_pane_vc_t1

0x4052,	// (0x0003417e) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x4052,	// (0x0003417e) list_double2_large_graphic_pane_vc_g1

0x405e,	// (0x0003418a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x405e,	// (0x0003418a) list_double2_large_graphic_pane_vc_g2

0x406a,	// (0x00034196) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x406a,	// (0x00034196) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa2f,	// (0x0003fb5b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa2f,	// (0x0003fb5b) list_double2_large_graphic_pane_vc_g

0x4076,	// (0x000341a2) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x4076,	// (0x000341a2) list_double2_large_graphic_pane_vc_t1

0x43e4,	// (0x00034510) list_double_time_pane_vc_g1_ParamLimits

0x43e4,	// (0x00034510) list_double_time_pane_vc_g1

0x43f0,	// (0x0003451c) list_double_time_pane_vc_g2_ParamLimits

0x43f0,	// (0x0003451c) list_double_time_pane_vc_g2

0x0001,

0xfa36,	// (0x0003fb62) list_double_time_pane_vc_g_ParamLimits

0xfa36,	// (0x0003fb62) list_double_time_pane_vc_g

0x43fc,	// (0x00034528) list_double_time_pane_vc_t1_ParamLimits

0x43fc,	// (0x00034528) list_double_time_pane_vc_t1

0x4426,	// (0x00034552) list_double_time_pane_vc_t2_ParamLimits

0x4426,	// (0x00034552) list_double_time_pane_vc_t2

0x446f,	// (0x0003459b) list_double_time_pane_vc_t3_ParamLimits

0x446f,	// (0x0003459b) list_double_time_pane_vc_t3

0x4481,	// (0x000345ad) list_double_time_pane_vc_t4_ParamLimits

0x4481,	// (0x000345ad) list_double_time_pane_vc_t4

0x0003,

0xfa3b,	// (0x0003fb67) list_double_time_pane_vc_t_ParamLimits

0xfa3b,	// (0x0003fb67) list_double_time_pane_vc_t

0x400a,	// (0x00034136) list_double_pane_vc_g1_ParamLimits

0x400a,	// (0x00034136) list_double_pane_vc_g1

0x4016,	// (0x00034142) list_double_pane_vc_g2_ParamLimits

0x4016,	// (0x00034142) list_double_pane_vc_g2

0x0001,

0xf7d5,	// (0x0003f901) list_double_pane_vc_g_ParamLimits

0xf7d5,	// (0x0003f901) list_double_pane_vc_g

0x4495,	// (0x000345c1) list_double_pane_vc_t1_ParamLimits

0x4495,	// (0x000345c1) list_double_pane_vc_t1

0x44a9,	// (0x000345d5) list_double_pane_vc_t2_ParamLimits

0x44a9,	// (0x000345d5) list_double_pane_vc_t2

0x0001,

0xfa44,	// (0x0003fb70) list_double_pane_vc_t_ParamLimits

0xfa44,	// (0x0003fb70) list_double_pane_vc_t

0x400a,	// (0x00034136) list_double_number_pane_vc_g1_ParamLimits

0x400a,	// (0x00034136) list_double_number_pane_vc_g1

0x4016,	// (0x00034142) list_double_number_pane_vc_g2_ParamLimits

0x4016,	// (0x00034142) list_double_number_pane_vc_g2

0x0001,

0xf7d5,	// (0x0003f901) list_double_number_pane_vc_g_ParamLimits

0xf7d5,	// (0x0003f901) list_double_number_pane_vc_g

0x44bf,	// (0x000345eb) list_double_number_pane_vc_t1_ParamLimits

0x44bf,	// (0x000345eb) list_double_number_pane_vc_t1

0x44d1,	// (0x000345fd) list_double_number_pane_vc_t2_ParamLimits

0x44d1,	// (0x000345fd) list_double_number_pane_vc_t2

0x44a9,	// (0x000345d5) list_double_number_pane_vc_t3_ParamLimits

0x44a9,	// (0x000345d5) list_double_number_pane_vc_t3

0x0002,

0xfa49,	// (0x0003fb75) list_double_number_pane_vc_t_ParamLimits

0xfa49,	// (0x0003fb75) list_double_number_pane_vc_t

0x44e5,	// (0x00034611) list_double_large_graphic_pane_vc_g1_ParamLimits

0x44e5,	// (0x00034611) list_double_large_graphic_pane_vc_g1

0x4507,	// (0x00034633) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4507,	// (0x00034633) list_double_large_graphic_pane_vc_g2

0x451b,	// (0x00034647) list_double_large_graphic_pane_vc_g3_ParamLimits

0x451b,	// (0x00034647) list_double_large_graphic_pane_vc_g3

0x452a,	// (0x00034656) list_double_large_graphic_pane_vc_g4_ParamLimits

0x452a,	// (0x00034656) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa50,	// (0x0003fb7c) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa50,	// (0x0003fb7c) list_double_large_graphic_pane_vc_g

0x4539,	// (0x00034665) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4539,	// (0x00034665) list_double_large_graphic_pane_vc_t1

0x4555,	// (0x00034681) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4555,	// (0x00034681) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa59,	// (0x0003fb85) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa59,	// (0x0003fb85) list_double_large_graphic_pane_vc_t

0x400a,	// (0x00034136) list_double_heading_pane_vc_g1_ParamLimits

0x400a,	// (0x00034136) list_double_heading_pane_vc_g1

0x4016,	// (0x00034142) list_double_heading_pane_vc_g2_ParamLimits

0x4016,	// (0x00034142) list_double_heading_pane_vc_g2

0x0001,

0xf7d5,	// (0x0003f901) list_double_heading_pane_vc_g_ParamLimits

0xf7d5,	// (0x0003f901) list_double_heading_pane_vc_g

0x4575,	// (0x000346a1) list_double_heading_pane_vc_t1_ParamLimits

0x4575,	// (0x000346a1) list_double_heading_pane_vc_t1

0x4587,	// (0x000346b3) list_double_heading_pane_vc_t2_ParamLimits

0x4587,	// (0x000346b3) list_double_heading_pane_vc_t2

0x0001,

0xfa5e,	// (0x0003fb8a) list_double_heading_pane_vc_t_ParamLimits

0xfa5e,	// (0x0003fb8a) list_double_heading_pane_vc_t

0x459f,	// (0x000346cb) list_double_graphic_pane_vc_g1_ParamLimits

0x459f,	// (0x000346cb) list_double_graphic_pane_vc_g1

0x45b2,	// (0x000346de) list_double_graphic_pane_vc_g2_ParamLimits

0x45b2,	// (0x000346de) list_double_graphic_pane_vc_g2

0x400a,	// (0x00034136) list_double_graphic_pane_vc_g3_ParamLimits

0x400a,	// (0x00034136) list_double_graphic_pane_vc_g3

0x0003,

0xfa63,	// (0x0003fb8f) list_double_graphic_pane_vc_g_ParamLimits

0xfa63,	// (0x0003fb8f) list_double_graphic_pane_vc_g

0x45cf,	// (0x000346fb) list_double_graphic_pane_vc_t1_ParamLimits

0x45cf,	// (0x000346fb) list_double_graphic_pane_vc_t1

0x45f9,	// (0x00034725) list_double_graphic_pane_vc_t2_ParamLimits

0x45f9,	// (0x00034725) list_double_graphic_pane_vc_t2

0x0001,

0xfa6c,	// (0x0003fb98) list_double_graphic_pane_vc_t_ParamLimits

0xfa6c,	// (0x0003fb98) list_double_graphic_pane_vc_t

0x5580,	// (0x000356ac) aid_size_cell_fastswap

0x5588,	// (0x000356b4) aid_size_cell_touch_ParamLimits

0x5588,	// (0x000356b4) aid_size_cell_touch

0x57f3,	// (0x0003591f) popup_fast_swap_wide_window_ParamLimits

0x57f3,	// (0x0003591f) popup_fast_swap_wide_window

0x5911,	// (0x00035a3d) touch_pane_ParamLimits

0x5911,	// (0x00035a3d) touch_pane

0x28d3,	// (0x000329ff) button_value_adjust_pane_cp2

0x40df,	// (0x0003420b) button_value_adjust_pane_cp4

0x40e7,	// (0x00034213) form_field_data_pane_cp2

0x6163,	// (0x0003628f) form_field_data_wide_pane_cp2

0x2c1f,	// (0x00032d4b) bg_scroll_pane_ParamLimits

0x6574,	// (0x000366a0) scroll_handle_pane_ParamLimits

0x6588,	// (0x000366b4) scroll_sc2_down_pane_ParamLimits

0x6588,	// (0x000366b4) scroll_sc2_down_pane

0x2c50,	// (0x00032d7c) scroll_sc2_up_pane_ParamLimits

0x2c50,	// (0x00032d7c) scroll_sc2_up_pane

0xb830,	// (0x0003b95c) grid_wheel_folder_pane_g1_ParamLimits

0xb830,	// (0x0003b95c) grid_wheel_folder_pane_g1

0x6b09,	// (0x00036c35) clock_nsta_pane_cp2_ParamLimits

0x6b09,	// (0x00036c35) clock_nsta_pane_cp2

0x8dcf,	// (0x00038efb) listscroll_midp_pane_ParamLimits

0x8ddb,	// (0x00038f07) midp_canvas_pane

0x90c6,	// (0x000391f2) nsta_clock_indic_pane

0x9102,	// (0x0003922e) listscroll_form_pane_vc

0x910a,	// (0x00039236) listscroll_set_pane_vc_ParamLimits

0x910a,	// (0x00039236) listscroll_set_pane_vc

0x9201,	// (0x0003932d) clock_nsta_pane

0x9278,	// (0x000393a4) indicator_nsta_pane

0x9564,	// (0x00039690) bg_popup_sub_pane_cp2_ParamLimits

0x9578,	// (0x000396a4) find_pane_cp2_ParamLimits

0x9578,	// (0x000396a4) find_pane_cp2

0x958e,	// (0x000396ba) grid_toobar_pane_ParamLimits

0x966e,	// (0x0003979a) list_form_gen_pane_vc_ParamLimits

0x966e,	// (0x0003979a) list_form_gen_pane_vc

0x9684,	// (0x000397b0) scroll_pane_cp8_vc_ParamLimits

0x9684,	// (0x000397b0) scroll_pane_cp8_vc

0x9700,	// (0x0003982c) data_form_wide_pane_vc_ParamLimits

0x9700,	// (0x0003982c) data_form_wide_pane_vc

0x970c,	// (0x00039838) form_field_data_wide_pane_vc_g1

0x9714,	// (0x00039840) form_field_data_wide_pane_vc_t1_ParamLimits

0x9714,	// (0x00039840) form_field_data_wide_pane_vc_t1

0x28e7,	// (0x00032a13) input_focus_pane_cp6_vc_ParamLimits

0x28e7,	// (0x00032a13) input_focus_pane_cp6_vc

0x9a10,	// (0x00039b3c) list_midp_pane_ParamLimits

0x9a1c,	// (0x00039b48) scroll_pane_cp16_ParamLimits

0x9a1c,	// (0x00039b48) scroll_pane_cp16

0x9a7e,	// (0x00039baa) button_value_adjust_pane_ParamLimits

0x9a7e,	// (0x00039baa) button_value_adjust_pane

0xaa02,	// (0x0003ab2e) button_value_adjust_pane_cp6_ParamLimits

0xaa02,	// (0x0003ab2e) button_value_adjust_pane_cp6

0xab4a,	// (0x0003ac76) settings_code_pane_cp_ParamLimits

0xab4a,	// (0x0003ac76) settings_code_pane_cp

0xf4ac,	// (0x0003f5d8) cell_touch_pane_g1

0xf4ac,	// (0x0003f5d8) cell_touch_pane_g2

0x0001,

0xf6f9,	// (0x0003f825) cell_touch_pane_g

0xb159,	// (0x0003b285) cell_touch_pane_cp_ParamLimits

0xb159,	// (0x0003b285) cell_touch_pane_cp

0xb169,	// (0x0003b295) cell_touch_pane_ParamLimits

0xb169,	// (0x0003b295) cell_touch_pane

0xf4ac,	// (0x0003f5d8) scroll_sc2_down_pane_g1

0xf4ac,	// (0x0003f5d8) scroll_sc2_up_pane_g1

0xf4b6,	// (0x0003f5e2) bg_set_opt_pane_cp4_vc

0xb17a,	// (0x0003b2a6) list_set_graphic_pane_vc_g1_ParamLimits

0xb17a,	// (0x0003b2a6) list_set_graphic_pane_vc_g1

0xb186,	// (0x0003b2b2) list_set_graphic_pane_vc_g2_ParamLimits

0xb186,	// (0x0003b2b2) list_set_graphic_pane_vc_g2

0x0001,

0xf9f5,	// (0x0003fb21) list_set_graphic_pane_vc_g_ParamLimits

0xf9f5,	// (0x0003fb21) list_set_graphic_pane_vc_g

0xb192,	// (0x0003b2be) text_primary_small_cp13_vc_ParamLimits

0xb192,	// (0x0003b2be) text_primary_small_cp13_vc

0x6b9f,	// (0x00036ccb) list_set_graphic_pane_vc_ParamLimits

0x6b9f,	// (0x00036ccb) list_set_graphic_pane_vc

0xf4b6,	// (0x0003f5e2) input_focus_pane_cp2_vc

0xf4ac,	// (0x0003f5d8) setting_code_pane_vc_g1

0xf51b,	// (0x0003f647) setting_code_pane_vc_t1

0xb1aa,	// (0x0003b2d6) set_text_pane_vc_t1_ParamLimits

0xb1aa,	// (0x0003b2d6) set_text_pane_vc_t1

0xf4b6,	// (0x0003f5e2) input_focus_pane_cp1_vc

0xb1c8,	// (0x0003b2f4) list_set_text_pane_vc

0xf4ac,	// (0x0003f5d8) setting_text_pane_vc_g1

0xf4b6,	// (0x0003f5e2) bg_set_opt_pane_cp2_vc

0xf512,	// (0x0003f63e) setting_slider_graphic_pane_vc_g1

0xb1d2,	// (0x0003b2fe) setting_slider_graphic_pane_vc_t1

0xb1e4,	// (0x0003b310) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fa,	// (0x0003fb26) setting_slider_graphic_pane_vc_t

0xb1f6,	// (0x0003b322) slider_set_pane_cp_vc

0xb200,	// (0x0003b32c) slider_set_pane_vc_g1

0xb209,	// (0x0003b335) slider_set_pane_vc_g2

0x0006,

0xf9ff,	// (0x0003fb2b) slider_set_pane_vc_g

0x293f,	// (0x00032a6b) set_opt_bg_pane_g1_copy1

0x2947,	// (0x00032a73) set_opt_bg_pane_g2_copy1

0xb235,	// (0x0003b361) set_opt_bg_pane_g3_copy1

0x2957,	// (0x00032a83) set_opt_bg_pane_g4_copy1

0x295f,	// (0x00032a8b) set_opt_bg_pane_g5_copy1

0x2967,	// (0x00032a93) set_opt_bg_pane_g6_copy1

0xb23f,	// (0x0003b36b) set_opt_bg_pane_g7_copy1

0xb249,	// (0x0003b375) set_opt_bg_pane_g8_copy1

0xb253,	// (0x0003b37f) set_opt_bg_pane_g9_copy1

0xf4b6,	// (0x0003f5e2) bg_set_opt_pane_cp_vc

0xb25d,	// (0x0003b389) setting_slider_pane_vc_t1

0xb26c,	// (0x0003b398) setting_slider_pane_vc_t2

0xb27e,	// (0x0003b3aa) setting_slider_pane_vc_t3

0x0002,

0xfa0e,	// (0x0003fb3a) setting_slider_pane_vc_t

0xb290,	// (0x0003b3bc) slider_set_pane_vc

0x773b,	// (0x00037867) volume_set_pane_vc_g1

0x7744,	// (0x00037870) volume_set_pane_vc_g2

0x774d,	// (0x00037879) volume_set_pane_vc_g3

0x7756,	// (0x00037882) volume_set_pane_vc_g4

0x775f,	// (0x0003788b) volume_set_pane_vc_g5

0x7768,	// (0x00037894) volume_set_pane_vc_g6

0x7771,	// (0x0003789d) volume_set_pane_vc_g7

0x777a,	// (0x000378a6) volume_set_pane_vc_g8

0x7783,	// (0x000378af) volume_set_pane_vc_g9

0x778c,	// (0x000378b8) volume_set_pane_vc_g10

0x0009,

0xf8ac,	// (0x0003f9d8) volume_set_pane_vc_g

0xb298,	// (0x0003b3c4) volume_set_pane_vc

0xb2a2,	// (0x0003b3ce) button_value_adjust_pane_cp1_vc

0xb2ac,	// (0x0003b3d8) list_highlight_pane_cp2_vc

0xb2b5,	// (0x0003b3e1) list_set_pane_vc_ParamLimits

0xb2b5,	// (0x0003b3e1) list_set_pane_vc

0xb323,	// (0x0003b44f) main_pane_set_vc_t1_ParamLimits

0xb323,	// (0x0003b44f) main_pane_set_vc_t1

0xb338,	// (0x0003b464) main_pane_set_vc_t2_ParamLimits

0xb338,	// (0x0003b464) main_pane_set_vc_t2

0xb34a,	// (0x0003b476) main_pane_set_vc_t3_ParamLimits

0xb34a,	// (0x0003b476) main_pane_set_vc_t3

0xb35e,	// (0x0003b48a) main_pane_set_vc_t4_ParamLimits

0xb35e,	// (0x0003b48a) main_pane_set_vc_t4

0x0003,

0xfa15,	// (0x0003fb41) main_pane_set_vc_t_ParamLimits

0xfa15,	// (0x0003fb41) main_pane_set_vc_t

0xb372,	// (0x0003b49e) setting_code_pane_vc_ParamLimits

0xb372,	// (0x0003b49e) setting_code_pane_vc

0xb383,	// (0x0003b4af) setting_slider_graphic_pane_vc

0xb383,	// (0x0003b4af) setting_slider_pane_vc

0xb383,	// (0x0003b4af) setting_text_pane_vc

0xb383,	// (0x0003b4af) setting_volume_pane_vc

0xb38d,	// (0x0003b4b9) scroll_pane_cp121_vc

0x28c1,	// (0x000329ed) set_content_pane_vc

0xb395,	// (0x0003b4c1) button_value_adjust_pane_g1

0xb39e,	// (0x0003b4ca) button_value_adjust_pane_g2

0x0001,

0xfa71,	// (0x0003fb9d) button_value_adjust_pane_g

0xb3a7,	// (0x0003b4d3) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb3a7,	// (0x0003b4d3) form_field_slider_wide_pane_vc_t1

0xb3b9,	// (0x0003b4e5) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb3b9,	// (0x0003b4e5) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa76,	// (0x0003fba2) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa76,	// (0x0003fba2) form_field_slider_wide_pane_vc_t

0xf540,	// (0x0003f66c) input_focus_pane_cp10_vc_ParamLimits

0xf540,	// (0x0003f66c) input_focus_pane_cp10_vc

0xb3e5,	// (0x0003b511) slider_cont_pane_cp1_vc_ParamLimits

0xb3e5,	// (0x0003b511) slider_cont_pane_cp1_vc

0xb3f7,	// (0x0003b523) slider_form_pane_g1_cp2

0xb209,	// (0x0003b335) slider_form_pane_g2_cp2

0xb424,	// (0x0003b550) form_field_slider_pane_vc_t3

0xb432,	// (0x0003b55e) form_field_slider_pane_vc_t4

0xb440,	// (0x0003b56c) slider_form_pane_vc_ParamLimits

0xb440,	// (0x0003b56c) slider_form_pane_vc

0xb44d,	// (0x0003b579) form_field_slider_pane_vc_t1_ParamLimits

0xb44d,	// (0x0003b579) form_field_slider_pane_vc_t1

0xb3b9,	// (0x0003b4e5) form_field_slider_pane_vc_t2_ParamLimits

0xb3b9,	// (0x0003b4e5) form_field_slider_pane_vc_t2

0x0001,

0xfa88,	// (0x0003fbb4) form_field_slider_pane_vc_t_ParamLimits

0xfa88,	// (0x0003fbb4) form_field_slider_pane_vc_t

0xf540,	// (0x0003f66c) input_focus_pane_cp9_vc_ParamLimits

0xf540,	// (0x0003f66c) input_focus_pane_cp9_vc

0xb463,	// (0x0003b58f) slider_cont_pane_vc_ParamLimits

0xb463,	// (0x0003b58f) slider_cont_pane_vc

0xb477,	// (0x0003b5a3) list_form_graphic_pane_cp_vc_ParamLimits

0xb477,	// (0x0003b5a3) list_form_graphic_pane_cp_vc

0x970c,	// (0x00039838) form_field_popup_wide_pane_vc_g1

0xb48c,	// (0x0003b5b8) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb48c,	// (0x0003b5b8) form_field_popup_wide_pane_vc_t1

0x28e7,	// (0x00032a13) input_focus_pane_cp8_vc_ParamLimits

0x28e7,	// (0x00032a13) input_focus_pane_cp8_vc

0xb4d1,	// (0x0003b5fd) list_form_wide_pane_vc_ParamLimits

0xb4d1,	// (0x0003b5fd) list_form_wide_pane_vc

0xb4dd,	// (0x0003b609) list_form_graphic_pane_vc_g1

0xb4e5,	// (0x0003b611) list_form_graphic_pane_vc_t1_ParamLimits

0xb4e5,	// (0x0003b611) list_form_graphic_pane_vc_t1

0xf504,	// (0x0003f630) list_highlight_pane_cp5_vc_ParamLimits

0xf504,	// (0x0003f630) list_highlight_pane_cp5_vc

0xb501,	// (0x0003b62d) list_form_graphic_pane_vc_ParamLimits

0xb501,	// (0x0003b62d) list_form_graphic_pane_vc

0x970c,	// (0x00039838) form_field_popup_pane_vc_g1

0xb517,	// (0x0003b643) form_field_popup_pane_vc_t1_ParamLimits

0xb517,	// (0x0003b643) form_field_popup_pane_vc_t1

0x28e7,	// (0x00032a13) input_focus_pane_cp7_vc_ParamLimits

0x28e7,	// (0x00032a13) input_focus_pane_cp7_vc

0xb52e,	// (0x0003b65a) list_form_pane_vc_ParamLimits

0xb52e,	// (0x0003b65a) list_form_pane_vc

0xb53a,	// (0x0003b666) data_form_pane_vc_t1_ParamLimits

0xb53a,	// (0x0003b666) data_form_pane_vc_t1

0x293f,	// (0x00032a6b) input_focus_pane_vc_g1

0x2947,	// (0x00032a73) input_focus_pane_vc_g2

0x294f,	// (0x00032a7b) input_focus_pane_vc_g3

0x2957,	// (0x00032a83) input_focus_pane_vc_g4

0x295f,	// (0x00032a8b) input_focus_pane_vc_g5

0x2967,	// (0x00032a93) input_focus_pane_vc_g6

0x296f,	// (0x00032a9b) input_focus_pane_vc_g7

0x2977,	// (0x00032aa3) input_focus_pane_vc_g8

0x297f,	// (0x00032aab) input_focus_pane_vc_g9

0xf4ac,	// (0x0003f5d8) input_focus_pane_vc_g10

0x0009,

0xf682,	// (0x0003f7ae) input_focus_pane_vc_g

0x9700,	// (0x0003982c) data_form_pane_vc_ParamLimits

0x9700,	// (0x0003982c) data_form_pane_vc

0x970c,	// (0x00039838) form_field_data_pane_vc_g1

0xb557,	// (0x0003b683) form_field_data_pane_vc_t1_ParamLimits

0xb557,	// (0x0003b683) form_field_data_pane_vc_t1

0x28e7,	// (0x00032a13) input_focus_pane_vc_ParamLimits

0x28e7,	// (0x00032a13) input_focus_pane_vc

0xb571,	// (0x0003b69d) button_value_adjust_pane_cp3_vc

0xb579,	// (0x0003b6a5) button_value_adjust_pane_cp5_vc

0xb581,	// (0x0003b6ad) form_field_data_pane_vc_ParamLimits

0xb581,	// (0x0003b6ad) form_field_data_pane_vc

0xb59c,	// (0x0003b6c8) form_field_data_pane_vc_cp2

0xb5a4,	// (0x0003b6d0) form_field_data_wide_pane_vc_ParamLimits

0xb5a4,	// (0x0003b6d0) form_field_data_wide_pane_vc

0xb5be,	// (0x0003b6ea) form_field_data_wide_pane_vc_cp2

0xb5c6,	// (0x0003b6f2) form_field_popup_pane_vc_ParamLimits

0xb5c6,	// (0x0003b6f2) form_field_popup_pane_vc

0xb5e1,	// (0x0003b70d) form_field_popup_wide_pane_vc_ParamLimits

0xb5e1,	// (0x0003b70d) form_field_popup_wide_pane_vc

0xb5fb,	// (0x0003b727) form_field_slider_pane_vc_ParamLimits

0xb5fb,	// (0x0003b727) form_field_slider_pane_vc

0xb60e,	// (0x0003b73a) form_field_slider_wide_pane_vc_ParamLimits

0xb60e,	// (0x0003b73a) form_field_slider_wide_pane_vc

0xb621,	// (0x0003b74d) grid_touch_1_pane_ParamLimits

0xb621,	// (0x0003b74d) grid_touch_1_pane

0xb62d,	// (0x0003b759) grid_touch_2_pane_ParamLimits

0xb62d,	// (0x0003b759) grid_touch_2_pane

0x9091,	// (0x000391bd) touch_pane_g1_ParamLimits

0x9091,	// (0x000391bd) touch_pane_g1

0xb647,	// (0x0003b773) cell_app_pane_cp_wide_ParamLimits

0xb647,	// (0x0003b773) cell_app_pane_cp_wide

0xb658,	// (0x0003b784) grid_popup_fast_wide_pane_ParamLimits

0xb658,	// (0x0003b784) grid_popup_fast_wide_pane

0xb66c,	// (0x0003b798) scroll_pane_cp19_ParamLimits

0xb66c,	// (0x0003b798) scroll_pane_cp19

0xf4b6,	// (0x0003f5e2) bg_popup_window_pane_cp20

0xb680,	// (0x0003b7ac) listscroll_popup_fast_wide_pane

0xf504,	// (0x0003f630) grid_indicator_nsta_pane

0xb688,	// (0x0003b7b4) clock_nsta_pane_g1

0xb691,	// (0x0003b7bd) clock_nsta_pane_t1

0xb6ad,	// (0x0003b7d9) cell_indicator_nsta_pane_ParamLimits

0xb6ad,	// (0x0003b7d9) cell_indicator_nsta_pane

0xb6de,	// (0x0003b80a) cell_indicator_nsta_pane_g1

0xb6ec,	// (0x0003b818) cell_indicator_nsta_pane_g2

0x0001,

0xfa99,	// (0x0003fbc5) cell_indicator_nsta_pane_g

0xb6f9,	// (0x0003b825) clock_nsta_pane_cp

0xb702,	// (0x0003b82e) indicator_nsta_pane_cp

0xb70a,	// (0x0003b836) nsta_clock_indic_pane_g1

0x22e5,	// (0x00032411) grid_indicator_pane

0x2d42,	// (0x00032e6e) scroll_pane_cp29

0x6a36,	// (0x00036b62) indicator_nsta_pane_cp2_ParamLimits

0x6a36,	// (0x00036b62) indicator_nsta_pane_cp2

0xf504,	// (0x0003f630) main_apps_wheel_pane

0x98ed,	// (0x00039a19) form_midp_field_text_pane_ParamLimits

0x9a3c,	// (0x00039b68) scroll_bar_cp050_ParamLimits

0xb75a,	// (0x0003b886) cell_indicator_pane_ParamLimits

0xb75a,	// (0x0003b886) cell_indicator_pane

0xb772,	// (0x0003b89e) cell_indicator_pane_g1

0xb77c,	// (0x0003b8a8) grid_wheel_folder_pane_ParamLimits

0xb77c,	// (0x0003b8a8) grid_wheel_folder_pane

0xb790,	// (0x0003b8bc) list_wheel_apps_pane_ParamLimits

0xb790,	// (0x0003b8bc) list_wheel_apps_pane

0xb7a3,	// (0x0003b8cf) main_apps_wheel_pane_g1_ParamLimits

0xb7a3,	// (0x0003b8cf) main_apps_wheel_pane_g1

0xb7bf,	// (0x0003b8eb) main_apps_wheel_pane_g2_ParamLimits

0xb7bf,	// (0x0003b8eb) main_apps_wheel_pane_g2

0x0001,

0xfab5,	// (0x0003fbe1) main_apps_wheel_pane_g_ParamLimits

0xfab5,	// (0x0003fbe1) main_apps_wheel_pane_g

0xb7db,	// (0x0003b907) main_apps_wheel_pane_t1_ParamLimits

0xb7db,	// (0x0003b907) main_apps_wheel_pane_t1

0xb804,	// (0x0003b930) list_wheel_apps_pane_g1

0xb80c,	// (0x0003b938) list_wheel_apps_pane_g2

0xb814,	// (0x0003b940) list_wheel_apps_pane_g3

0xb81c,	// (0x0003b948) list_wheel_apps_pane_g4

0xb826,	// (0x0003b952) list_wheel_apps_pane_g5

0x0004,

0xfaba,	// (0x0003fbe6) list_wheel_apps_pane_g

0x6d3f,	// (0x00036e6b) navi_icon_text_pane

0x9132,	// (0x0003925e) aid_fill_nsta

0xb847,	// (0x0003b973) navi_icon_text_pane_g1

0xb853,	// (0x0003b97f) navi_icon_text_pane_t1

0x6bca,	// (0x00036cf6) list_set_graphic_pane_t1_ParamLimits

0x6bca,	// (0x00036cf6) list_set_graphic_pane_t1

0xa1a1,	// (0x0003a2cd) popup_midp_note_alarm_window_t6_ParamLimits

0xa1a1,	// (0x0003a2cd) popup_midp_note_alarm_window_t6

0xa1b3,	// (0x0003a2df) popup_midp_note_alarm_window_t7_ParamLimits

0xa1b3,	// (0x0003a2df) popup_midp_note_alarm_window_t7

0xa1c5,	// (0x0003a2f1) popup_midp_note_alarm_window_t8_ParamLimits

0xa1c5,	// (0x0003a2f1) popup_midp_note_alarm_window_t8

0xa1d7,	// (0x0003a303) popup_midp_note_alarm_window_t9_ParamLimits

0xa1d7,	// (0x0003a303) popup_midp_note_alarm_window_t9

0xa1e9,	// (0x0003a315) popup_midp_note_alarm_window_t10_ParamLimits

0xa1e9,	// (0x0003a315) popup_midp_note_alarm_window_t10

0xa1fb,	// (0x0003a327) popup_midp_note_alarm_window_t11_ParamLimits

0xa1fb,	// (0x0003a327) popup_midp_note_alarm_window_t11

0xa20d,	// (0x0003a339) scroll_pane_cp17_ParamLimits

0xa20d,	// (0x0003a339) scroll_pane_cp17

0x773b,	// (0x00037867) volume_small_pane_cp_g1

0x7ae8,	// (0x00037c14) volume_small_pane_cp_g2

0x7af1,	// (0x00037c1d) volume_small_pane_cp_g3

0x7afa,	// (0x00037c26) volume_small_pane_cp_g4

0x7b03,	// (0x00037c2f) volume_small_pane_cp_g5

0x7b0c,	// (0x00037c38) volume_small_pane_cp_g6

0x7b15,	// (0x00037c41) volume_small_pane_cp_g7

0x7b1e,	// (0x00037c4a) volume_small_pane_cp_g8

0x7b27,	// (0x00037c53) volume_small_pane_cp_g9

0x7b30,	// (0x00037c5c) volume_small_pane_cp_g10

0x8ea5,	// (0x00038fd1) midp_ticker_pane_g1_ParamLimits

0x8eb1,	// (0x00038fdd) midp_ticker_pane_g2_ParamLimits

0xf74e,	// (0x0003f87a) midp_ticker_pane_g_ParamLimits

0x8ebd,	// (0x00038fe9) midp_ticker_pane_t1_ParamLimits

0x9148,	// (0x00039274) aid_fill_nsta_2

0x9a28,	// (0x00039b54) list_form2_midp_pane

0xab91,	// (0x0003acbd) midp_editing_number_pane_ParamLimits

0xaba0,	// (0x0003accc) midp_ticker_pane_ParamLimits

0xb865,	// (0x0003b991) form2_midp_field_pane

0xb889,	// (0x0003b9b5) scroll_pane_cp51

0xb8a9,	// (0x0003b9d5) form2_midp_button_pane_ParamLimits

0xb8a9,	// (0x0003b9d5) form2_midp_button_pane

0xb8bb,	// (0x0003b9e7) form2_midp_content_pane_ParamLimits

0xb8bb,	// (0x0003b9e7) form2_midp_content_pane

0xb8d5,	// (0x0003ba01) form2_midp_field_choice_group_pane

0xb8dd,	// (0x0003ba09) form2_midp_field_pane_g1

0xb8e5,	// (0x0003ba11) form2_midp_field_pane_g2

0xb8ed,	// (0x0003ba19) form2_midp_field_pane_g3

0xb8f5,	// (0x0003ba21) form2_midp_field_pane_g4

0x0003,

0xfadf,	// (0x0003fc0b) form2_midp_field_pane_g

0xb8fd,	// (0x0003ba29) form2_midp_gauge_slider_pane

0xb905,	// (0x0003ba31) form2_midp_gauge_wait_pane

0xb90d,	// (0x0003ba39) form2_midp_image_pane_ParamLimits

0xb90d,	// (0x0003ba39) form2_midp_image_pane

0xb928,	// (0x0003ba54) form2_midp_label_pane_ParamLimits

0xb928,	// (0x0003ba54) form2_midp_label_pane

0xb947,	// (0x0003ba73) form2_midp_label_pane_cp_ParamLimits

0xb947,	// (0x0003ba73) form2_midp_label_pane_cp

0xb968,	// (0x0003ba94) form2_midp_string_pane_ParamLimits

0xb968,	// (0x0003ba94) form2_midp_string_pane

0x4617,	// (0x00034743) form2_midp_text_pane_ParamLimits

0x4617,	// (0x00034743) form2_midp_text_pane

0xb97a,	// (0x0003baa6) form2_midp_time_pane

0xb98a,	// (0x0003bab6) input_focus_pane_cp51_ParamLimits

0xb98a,	// (0x0003bab6) input_focus_pane_cp51

0xb9a2,	// (0x0003bace) form2_midp_label_pane_t1_ParamLimits

0xb9a2,	// (0x0003bace) form2_midp_label_pane_t1

0x4638,	// (0x00034764) form2_mdip_text_pane_t1_ParamLimits

0x4638,	// (0x00034764) form2_mdip_text_pane_t1

0x465c,	// (0x00034788) form2_midp_time_pane_t1

0xb9f0,	// (0x0003bb1c) form2_midp_gauge_slider_pane_t1

0xba02,	// (0x0003bb2e) form2_midp_gauge_slider_pane_t2

0xba14,	// (0x0003bb40) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae8,	// (0x0003fc14) form2_midp_gauge_slider_pane_t

0xba26,	// (0x0003bb52) form2_midp_slider_pane

0xba32,	// (0x0003bb5e) form2_midp_gauge_wait_pane_t1

0xba40,	// (0x0003bb6c) form2_midp_wait_pane_ParamLimits

0xba40,	// (0x0003bb6c) form2_midp_wait_pane

0xba6b,	// (0x0003bb97) list_single_2graphic_pane_cp4_ParamLimits

0xba6b,	// (0x0003bb97) list_single_2graphic_pane_cp4

0x9769,	// (0x00039895) list_single_midp_graphic_pane_cp_ParamLimits

0x9769,	// (0x00039895) list_single_midp_graphic_pane_cp

0xf4b6,	// (0x0003f5e2) list_highlight_pane_cp20

0xba84,	// (0x0003bbb0) list_single_2graphic_pane_g1_cp4

0xb05c,	// (0x0003b188) list_single_2graphic_pane_g2_cp4

0xba8c,	// (0x0003bbb8) list_single_2graphic_pane_t1_cp4

0xf504,	// (0x0003f630) list_highlight_pane_cp21

0xba9b,	// (0x0003bbc7) list_single_midp_graphic_pane_g4_cp

0xbaaa,	// (0x0003bbd6) list_single_midp_graphic_pane_t1_cp

0xbabf,	// (0x0003bbeb) form2_mdip_string_pane_t1_ParamLimits

0xbabf,	// (0x0003bbeb) form2_mdip_string_pane_t1

0xf4b6,	// (0x0003f5e2) bg_wml_button_pane_cp2

0xf4ac,	// (0x0003f5d8) form2_midp_image_pane_g1

0x40b0,	// (0x000341dc) list_double_large_graphic_pane_g5_ParamLimits

0x40b0,	// (0x000341dc) list_double_large_graphic_pane_g5

0x8dcf,	// (0x00038efb) midp_form_pane_ParamLimits

0xf504,	// (0x0003f630) main_apps_wheel_pane_ParamLimits

0x7384,	// (0x000374b0) popup_preview_window_ParamLimits

0x7384,	// (0x000374b0) popup_preview_window

0x756b,	// (0x00037697) popup_touch_info_window_ParamLimits

0x756b,	// (0x00037697) popup_touch_info_window

0x758d,	// (0x000376b9) popup_touch_menu_window_ParamLimits

0x758d,	// (0x000376b9) popup_touch_menu_window

0xf4a2,	// (0x0003f5ce) bg_popup_sub_pane_cp6

0xbb5b,	// (0x0003bc87) list_touch_menu_pane

0xbb63,	// (0x0003bc8f) list_single_touch_menu_pane_ParamLimits

0xbb63,	// (0x0003bc8f) list_single_touch_menu_pane

0xbb7b,	// (0x0003bca7) list_single_touch_menu_pane_t1

0xf504,	// (0x0003f630) bg_popup_sub_pane_cp7_ParamLimits

0xf504,	// (0x0003f630) bg_popup_sub_pane_cp7

0xbb89,	// (0x0003bcb5) heading_sub_pane

0xbb91,	// (0x0003bcbd) list_touch_info_pane_ParamLimits

0xbb91,	// (0x0003bcbd) list_touch_info_pane

0xbba0,	// (0x0003bccc) list_single_touch_info_pane_ParamLimits

0xbba0,	// (0x0003bccc) list_single_touch_info_pane

0xbbb2,	// (0x0003bcde) list_single_touch_info_pane_t1

0xbbc0,	// (0x0003bcec) list_single_touch_info_pane_t2

0x0001,

0xfaf6,	// (0x0003fc22) list_single_touch_info_pane_t

0x8dc7,	// (0x00038ef3) bg_popup_heading_pane_cp

0xbbce,	// (0x0003bcfa) heading_sub_pane_t1

0x969a,	// (0x000397c6) bg_popup_preview_window_pane_cp_ParamLimits

0x969a,	// (0x000397c6) bg_popup_preview_window_pane_cp

0xbb89,	// (0x0003bcb5) heading_preview_pane

0xbb91,	// (0x0003bcbd) list_preview_pane_ParamLimits

0xbb91,	// (0x0003bcbd) list_preview_pane

0xbbdc,	// (0x0003bd08) popup_preview_window_g1

0xbba0,	// (0x0003bccc) list_single_preview_pane_ParamLimits

0xbba0,	// (0x0003bccc) list_single_preview_pane

0xbbe4,	// (0x0003bd10) list_single_preview_pane_g1

0xbbec,	// (0x0003bd18) list_single_preview_pane_t1

0xbbb2,	// (0x0003bcde) list_single_preview_pane_t2

0x0001,

0xfafb,	// (0x0003fc27) list_single_preview_pane_t

0xbbfa,	// (0x0003bd26) bg_popup_heading_pane_cp2_ParamLimits

0xbbfa,	// (0x0003bd26) bg_popup_heading_pane_cp2

0xbc10,	// (0x0003bd3c) heading_preview_pane_g1

0xbc18,	// (0x0003bd44) heading_preview_pane_t1_ParamLimits

0xbc18,	// (0x0003bd44) heading_preview_pane_t1

0x22fc,	// (0x00032428) soft_indicator_pane_t1_ParamLimits

0x285a,	// (0x00032986) scroll_pane_ParamLimits

0x2c47,	// (0x00032d73) scroll_sc2_left_pane

0x2c3e,	// (0x00032d6a) scroll_sc2_right_pane

0x2c66,	// (0x00032d92) scroll_bg_pane_g1_ParamLimits

0x2c7b,	// (0x00032da7) scroll_bg_pane_g2_ParamLimits

0x2c93,	// (0x00032dbf) scroll_bg_pane_g3_ParamLimits

0xf6d9,	// (0x0003f805) scroll_bg_pane_g_ParamLimits

0x2c66,	// (0x00032d92) scroll_handle_pane_g1_ParamLimits

0x2cb5,	// (0x00032de1) scroll_handle_pane_g2_ParamLimits

0x2c93,	// (0x00032dbf) scroll_handle_pane_g3_ParamLimits

0xf6e0,	// (0x0003f80c) scroll_handle_pane_g_ParamLimits

0x6fcb,	// (0x000370f7) popup_choice_list_window_ParamLimits

0x6fcb,	// (0x000370f7) popup_choice_list_window

0x9570,	// (0x0003969c) choice_list_pane

0x95f2,	// (0x0003971e) cell_toolbar_pane_t1

0x961a,	// (0x00039746) toolbar_button_pane_ParamLimits

0xa6d7,	// (0x0003a803) ai_gene_pane_1_t2_ParamLimits

0xa6d7,	// (0x0003a803) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x0003fa34) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x0003fa34) ai_gene_pane_1_t

0xbc35,	// (0x0003bd61) scroll_sc2_left_pane_g1

0xbc35,	// (0x0003bd61) scroll_sc2_right_pane_g1

0x90f6,	// (0x00039222) bg_popup_sub_pane_cp10

0xbc3f,	// (0x0003bd6b) list_choice_list_pane

0xac3c,	// (0x0003ad68) list_single_choice_list_pane_ParamLimits

0xac3c,	// (0x0003ad68) list_single_choice_list_pane

0xbc58,	// (0x0003bd84) list_single_choice_list_pane_g1

0x2a35,	// (0x00032b61) list_single_choice_list_pane_t1_ParamLimits

0x2a35,	// (0x00032b61) list_single_choice_list_pane_t1

0xbc60,	// (0x0003bd8c) choice_list_pane_g1

0xbc68,	// (0x0003bd94) choice_list_pane_t1

0xf4a2,	// (0x0003f5ce) input_focus_pane_cp11

0x2bb3,	// (0x00032cdf) title_pane_stacon_g2_ParamLimits

0x2bb3,	// (0x00032cdf) title_pane_stacon_g2

0x0002,

0xf6bf,	// (0x0003f7eb) title_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0003f7eb) title_pane_stacon_g

0x8dc7,	// (0x00038ef3) cursor_press_pane

0x7085,	// (0x000371b1) popup_fep_hwr_window_ParamLimits

0x7085,	// (0x000371b1) popup_fep_hwr_window

0x710f,	// (0x0003723b) popup_fep_vkb_window_ParamLimits

0x710f,	// (0x0003723b) popup_fep_vkb_window

0xbc76,	// (0x0003bda2) cursor_press_pane_g1

0x0002,

0xfb24,	// (0x0003fc50) fep_vkb_side_pane_g_ParamLimits

0x7b72,	// (0x00037c9e) fep_hwr_candidate_pane_ParamLimits

0x7b72,	// (0x00037c9e) fep_hwr_candidate_pane

0x7b9c,	// (0x00037cc8) fep_hwr_side_pane_ParamLimits

0x7b9c,	// (0x00037cc8) fep_hwr_side_pane

0x7bbe,	// (0x00037cea) fep_hwr_top_pane_ParamLimits

0x7bbe,	// (0x00037cea) fep_hwr_top_pane

0x7bd6,	// (0x00037d02) fep_hwr_write_pane_ParamLimits

0x7bd6,	// (0x00037d02) fep_hwr_write_pane

0xfb24,	// (0x0003fc50) fep_vkb_side_pane_g

0xbc7e,	// (0x0003bdaa) fep_hwr_top_pane_g1

0xbc90,	// (0x0003bdbc) fep_hwr_top_pane_g2

0x7c10,	// (0x00037d3c) fep_hwr_top_pane_g3

0x0002,

0xfb00,	// (0x0003fc2c) fep_hwr_top_pane_g

0x7c25,	// (0x00037d51) fep_hwr_top_text_pane

0x6608,	// (0x00036734) fep_hwr_top_text_pane_g1

0xbcc6,	// (0x0003bdf2) fep_hwr_top_text_pane_t1

0x7d2f,	// (0x00037e5b) fep_hwr_candidate_pane_g1

0xbf11,	// (0x0003c03d) fep_vkb_keypad_pane_g3_ParamLimits

0xbf11,	// (0x0003c03d) fep_vkb_keypad_pane_g3

0xbf3d,	// (0x0003c069) fep_vkb_keypad_pane_g4_ParamLimits

0xbf3d,	// (0x0003c069) fep_vkb_keypad_pane_g4

0xbfb4,	// (0x0003c0e0) fep_vkb_bottom_pane_g2_ParamLimits

0xbfb4,	// (0x0003c0e0) fep_vkb_bottom_pane_g2

0x0001,

0xfb2b,	// (0x0003fc57) fep_vkb_bottom_pane_g_ParamLimits

0xfb2b,	// (0x0003fc57) fep_vkb_bottom_pane_g

0xbc35,	// (0x0003bd61) cell_vkb_side_pane_g2

0x0001,

0xfb35,	// (0x0003fc61) cell_vkb_side_pane_g

0xc03f,	// (0x0003c16b) cell_vkb_side_pane_t1

0xc04d,	// (0x0003c179) cell_vkb_side_pane_t1_copy1

0xbc35,	// (0x0003bd61) bg_fep_vkb_candidate_pane_g2

0xc191,	// (0x0003c2bd) cell_vkb_candidate_pane_ParamLimits

0xbcd4,	// (0x0003be00) aid_size_cell_vkb_ParamLimits

0xbcd4,	// (0x0003be00) aid_size_cell_vkb

0xc191,	// (0x0003c2bd) cell_vkb_candidate_pane

0x7d56,	// (0x00037e82) bg_popup_fep_shadow_pane_g1

0xbd66,	// (0x0003be92) fep_vkb_bottom_pane_ParamLimits

0xbd66,	// (0x0003be92) fep_vkb_bottom_pane

0xbda3,	// (0x0003becf) fep_vkb_candidate_pane_ParamLimits

0xbda3,	// (0x0003becf) fep_vkb_candidate_pane

0xbdbf,	// (0x0003beeb) fep_vkb_keypad_pane_ParamLimits

0xbdbf,	// (0x0003beeb) fep_vkb_keypad_pane

0xbdf2,	// (0x0003bf1e) fep_vkb_side_pane_ParamLimits

0xbdf2,	// (0x0003bf1e) fep_vkb_side_pane

0xbe2e,	// (0x0003bf5a) fep_vkb_top_pane_ParamLimits

0xbe2e,	// (0x0003bf5a) fep_vkb_top_pane

0xbe6a,	// (0x0003bf96) fep_vkb_top_pane_g1_ParamLimits

0xbe6a,	// (0x0003bf96) fep_vkb_top_pane_g1

0xbe79,	// (0x0003bfa5) fep_vkb_top_pane_g2_ParamLimits

0xbe79,	// (0x0003bfa5) fep_vkb_top_pane_g2

0xbe88,	// (0x0003bfb4) fep_vkb_top_pane_g3_ParamLimits

0xbe88,	// (0x0003bfb4) fep_vkb_top_pane_g3

0x0003,

0xfb1b,	// (0x0003fc47) fep_vkb_top_pane_g_ParamLimits

0xfb1b,	// (0x0003fc47) fep_vkb_top_pane_g

0xbea6,	// (0x0003bfd2) fep_vkb_top_text_pane_ParamLimits

0xbea6,	// (0x0003bfd2) fep_vkb_top_text_pane

0xbeb7,	// (0x0003bfe3) fep_vkb_side_pane_g1_ParamLimits

0xbeb7,	// (0x0003bfe3) fep_vkb_side_pane_g1

0xbf00,	// (0x0003c02c) grid_vkb_side_pane_ParamLimits

0xbf00,	// (0x0003c02c) grid_vkb_side_pane

0x7d5e,	// (0x00037e8a) bg_popup_fep_shadow_pane_g2

0x7d67,	// (0x00037e93) bg_popup_fep_shadow_pane_g3

0x7d6f,	// (0x00037e9b) bg_popup_fep_shadow_pane_g4

0x7d78,	// (0x00037ea4) bg_popup_fep_shadow_pane_g5

0x7d82,	// (0x00037eae) bg_popup_fep_shadow_pane_g6

0x7d8a,	// (0x00037eb6) bg_popup_fep_shadow_pane_g7

0x2957,	// (0x00032a83) bg_popup_fep_shadow_pane_g8

0xbf5f,	// (0x0003c08b) grid_vkb_keypad_number_pane_ParamLimits

0xbf5f,	// (0x0003c08b) grid_vkb_keypad_number_pane

0xbf73,	// (0x0003c09f) grid_vkb_keypad_pane_ParamLimits

0xbf73,	// (0x0003c09f) grid_vkb_keypad_pane

0xbf99,	// (0x0003c0c5) fep_vkb_bottom_pane_g1_ParamLimits

0xbf99,	// (0x0003c0c5) fep_vkb_bottom_pane_g1

0xbfc2,	// (0x0003c0ee) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbfc2,	// (0x0003c0ee) grid_vkb_keypad_bottom_left_pane

0xbfd7,	// (0x0003c103) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbfd7,	// (0x0003c103) grid_vkb_keypad_bottom_right_pane

0xbfec,	// (0x0003c118) fep_vkb_top_text_pane_g1

0xc007,	// (0x0003c133) fep_vkb_top_text_pane_t1

0xc01c,	// (0x0003c148) cell_vkb_side_pane_ParamLimits

0xc01c,	// (0x0003c148) cell_vkb_side_pane

0xbc35,	// (0x0003bd61) cell_vkb_side_pane_g1

0xc05b,	// (0x0003c187) cell_vkb_keypad_pane_ParamLimits

0xc05b,	// (0x0003c187) cell_vkb_keypad_pane

0xc0e8,	// (0x0003c214) cell_vkb_keypad_pane_g1

0x0008,

0xfb48,	// (0x0003fc74) bg_popup_fep_shadow_pane_g

0x7d9c,	// (0x00037ec8) cell_hwr_side_pane_g1

0x7d9c,	// (0x00037ec8) cell_hwr_side_pane_g2

0xc0f2,	// (0x0003c21e) cell_vkb_keypad_pane_t1

0xc100,	// (0x0003c22c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc100,	// (0x0003c22c) cell_vkb_keypad_bottom_left_pane

0xc11d,	// (0x0003c249) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc11d,	// (0x0003c249) cell_vkb_keypad_bottom_right_pane

0xbc35,	// (0x0003bd61) cell_vkb_keypad_bottom_left_pane_g1

0xbc35,	// (0x0003bd61) cell_vkb_keypad_bottom_right_pane_g1

0xc156,	// (0x0003c282) cell_vkb_keypad_number_pane_ParamLimits

0xc156,	// (0x0003c282) cell_vkb_keypad_number_pane

0xc175,	// (0x0003c2a1) cell_vkb_keypad_number_pane_g1

0xc17f,	// (0x0003c2ab) cell_vkb_keypad_number_pane_g2

0xc188,	// (0x0003c2b4) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3a,	// (0x0003fc66) cell_vkb_keypad_number_pane_g

0xc0f2,	// (0x0003c21e) cell_vkb_keypad_number_pane_t1

0xc1b2,	// (0x0003c2de) fep_vkb_candidate_pane_g1

0x0001,

0xfb5b,	// (0x0003fc87) cell_hwr_side_pane_g

0xc1cb,	// (0x0003c2f7) cell_hwr_side_pane_t1

0x7da6,	// (0x00037ed2) cell_hwr_side_pane_t1_copy1

0x7db4,	// (0x00037ee0) cell_hwr_candidate_pane_g1

0x7de3,	// (0x00037f0f) cell_hwr_candidate_pane_t1

0xbc35,	// (0x0003bd61) cell_vkb_candidate_pane_g2

0xc20f,	// (0x0003c33b) cell_vkb_candidate_pane_t1

0x7b39,	// (0x00037c65) bg_popup_fep_shadow_pane_ParamLimits

0x7b39,	// (0x00037c65) bg_popup_fep_shadow_pane

0x7bf0,	// (0x00037d1c) bg_fep_hwr_top_pane_g4

0xbca2,	// (0x0003bdce) bg_hwr_side_pane_g1_ParamLimits

0xbca2,	// (0x0003bdce) bg_hwr_side_pane_g1

0x7c63,	// (0x00037d8f) cell_hwr_side_pane_ParamLimits

0x7c63,	// (0x00037d8f) cell_hwr_side_pane

0x7ca0,	// (0x00037dcc) fep_hwr_write_pane_g1_ParamLimits

0x7ca0,	// (0x00037dcc) fep_hwr_write_pane_g1

0x7cad,	// (0x00037dd9) fep_hwr_write_pane_g2_ParamLimits

0x7cad,	// (0x00037dd9) fep_hwr_write_pane_g2

0x7cba,	// (0x00037de6) fep_hwr_write_pane_g3_ParamLimits

0x7cba,	// (0x00037de6) fep_hwr_write_pane_g3

0x7cc8,	// (0x00037df4) fep_hwr_write_pane_g4_ParamLimits

0x7cc8,	// (0x00037df4) fep_hwr_write_pane_g4

0x0005,

0xfb07,	// (0x0003fc33) fep_hwr_write_pane_g_ParamLimits

0xfb07,	// (0x0003fc33) fep_hwr_write_pane_g

0x7bf0,	// (0x00037d1c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7bf0,	// (0x00037d1c) bg_fep_hwr_candidate_pane_g2

0x7cdd,	// (0x00037e09) cell_hwr_candidate_pane_ParamLimits

0x7cdd,	// (0x00037e09) cell_hwr_candidate_pane

0x7d2f,	// (0x00037e5b) fep_hwr_candidate_pane_g1_ParamLimits

0xbd02,	// (0x0003be2e) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbd02,	// (0x0003be2e) bg_popup_fep_shadow_pane_cp2

0xbe98,	// (0x0003bfc4) fep_vkb_top_pane_g4_ParamLimits

0xbe98,	// (0x0003bfc4) fep_vkb_top_pane_g4

0xbede,	// (0x0003c00a) fep_vkb_side_pane_g2_ParamLimits

0xbede,	// (0x0003c00a) fep_vkb_side_pane_g2

0x6063,	// (0x0003618f) list_setting_pane_t4_ParamLimits

0x6063,	// (0x0003618f) list_setting_pane_t4

0x60ff,	// (0x0003622b) list_setting_number_pane_t5_ParamLimits

0x60ff,	// (0x0003622b) list_setting_number_pane_t5

0x666e,	// (0x0003679a) list_double_heading_pane_cp2_ParamLimits

0x666e,	// (0x0003679a) list_double_heading_pane_cp2

0xc21d,	// (0x0003c349) list_double_heading_pane_g1_cp2_ParamLimits

0xc21d,	// (0x0003c349) list_double_heading_pane_g1_cp2

0xc229,	// (0x0003c355) list_double_heading_pane_g2_cp2_ParamLimits

0xc229,	// (0x0003c355) list_double_heading_pane_g2_cp2

0xc23d,	// (0x0003c369) list_double_heading_pane_t1_cp2_ParamLimits

0xc23d,	// (0x0003c369) list_double_heading_pane_t1_cp2

0xc253,	// (0x0003c37f) list_double_heading_pane_t2_cp2_ParamLimits

0xc253,	// (0x0003c37f) list_double_heading_pane_t2_cp2

0xf49a,	// (0x0003f5c6) aid_value_unit2

0x5851,	// (0x0003597d) popup_preview_fixed_window

0x23dc,	// (0x00032508) bg_popup_preview_window_pane_cp02

0xc265,	// (0x0003c391) list_preview_fixed_pane

0xc2ab,	// (0x0003c3d7) list_empty_pane_fp_ParamLimits

0xc2ab,	// (0x0003c3d7) list_empty_pane_fp

0xc2ab,	// (0x0003c3d7) list_single_cale_day_pane_fp_ParamLimits

0xc2ab,	// (0x0003c3d7) list_single_cale_day_pane_fp

0xc2ab,	// (0x0003c3d7) list_single_graphic_heading_pane_fp_ParamLimits

0xc2ab,	// (0x0003c3d7) list_single_graphic_heading_pane_fp

0xc2ab,	// (0x0003c3d7) list_single_graphic_pane_fp_ParamLimits

0xc2ab,	// (0x0003c3d7) list_single_graphic_pane_fp

0xc2ab,	// (0x0003c3d7) list_single_heading_pane_fp_ParamLimits

0xc2ab,	// (0x0003c3d7) list_single_heading_pane_fp

0xc2ab,	// (0x0003c3d7) list_single_pane_fp_ParamLimits

0xc2ab,	// (0x0003c3d7) list_single_pane_fp

0xc2c4,	// (0x0003c3f0) list_single_pane_fp_g1_ParamLimits

0xc2c4,	// (0x0003c3f0) list_single_pane_fp_g1

0x466f,	// (0x0003479b) list_single_pane_fp_g2_ParamLimits

0x466f,	// (0x0003479b) list_single_pane_fp_g2

0x467b,	// (0x000347a7) list_single_pane_fp_g3_ParamLimits

0x467b,	// (0x000347a7) list_single_pane_fp_g3

0xc2d0,	// (0x0003c3fc) list_single_pane_fp_g4_ParamLimits

0xc2d0,	// (0x0003c3fc) list_single_pane_fp_g4

0x0003,

0xfb6e,	// (0x0003fc9a) list_single_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003fc9a) list_single_pane_fp_g

0x468f,	// (0x000347bb) list_single_pane_fp_t1_ParamLimits

0x468f,	// (0x000347bb) list_single_pane_fp_t1

0x4875,	// (0x000349a1) list_single_graphic_pane_fp_g1_ParamLimits

0x4875,	// (0x000349a1) list_single_graphic_pane_fp_g1

0xc2c4,	// (0x0003c3f0) list_single_graphic_pane_fp_g2_ParamLimits

0xc2c4,	// (0x0003c3f0) list_single_graphic_pane_fp_g2

0x466f,	// (0x0003479b) list_single_graphic_pane_fp_g3_ParamLimits

0x466f,	// (0x0003479b) list_single_graphic_pane_fp_g3

0x467b,	// (0x000347a7) list_single_graphic_pane_fp_g4_ParamLimits

0x467b,	// (0x000347a7) list_single_graphic_pane_fp_g4

0xc2d0,	// (0x0003c3fc) list_single_graphic_pane_fp_g5_ParamLimits

0xc2d0,	// (0x0003c3fc) list_single_graphic_pane_fp_g5

0x0004,

0xfb77,	// (0x0003fca3) list_single_graphic_pane_fp_g_ParamLimits

0xfb77,	// (0x0003fca3) list_single_graphic_pane_fp_g

0x4881,	// (0x000349ad) list_single_graphic_pane_fp_t1_ParamLimits

0x4881,	// (0x000349ad) list_single_graphic_pane_fp_t1

0x4875,	// (0x000349a1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4875,	// (0x000349a1) list_single_graphic_heading_pane_fp_g1

0xc2c4,	// (0x0003c3f0) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc2c4,	// (0x0003c3f0) list_single_graphic_heading_pane_fp_g2

0x466f,	// (0x0003479b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x466f,	// (0x0003479b) list_single_graphic_heading_pane_fp_g3

0x467b,	// (0x000347a7) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x467b,	// (0x000347a7) list_single_graphic_heading_pane_fp_g4

0xc2d0,	// (0x0003c3fc) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc2d0,	// (0x0003c3fc) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb77,	// (0x0003fca3) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb77,	// (0x0003fca3) list_single_graphic_heading_pane_fp_g

0x4897,	// (0x000349c3) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4897,	// (0x000349c3) list_single_graphic_heading_pane_fp_t1

0x48ad,	// (0x000349d9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x48ad,	// (0x000349d9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb82,	// (0x0003fcae) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb82,	// (0x0003fcae) list_single_graphic_heading_pane_fp_t

0x48bf,	// (0x000349eb) list_single_cale_day_pane_fp_g1_ParamLimits

0x48bf,	// (0x000349eb) list_single_cale_day_pane_fp_g1

0xc2dc,	// (0x0003c408) list_single_cale_day_pane_fp_g2_ParamLimits

0xc2dc,	// (0x0003c408) list_single_cale_day_pane_fp_g2

0x48f7,	// (0x00034a23) list_single_cale_day_pane_fp_g3_ParamLimits

0x48f7,	// (0x00034a23) list_single_cale_day_pane_fp_g3

0x491f,	// (0x00034a4b) list_single_cale_day_pane_fp_g4_ParamLimits

0x491f,	// (0x00034a4b) list_single_cale_day_pane_fp_g4

0x4943,	// (0x00034a6f) list_single_cale_day_pane_fp_g5_ParamLimits

0x4943,	// (0x00034a6f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb87,	// (0x0003fcb3) list_single_cale_day_pane_fp_g_ParamLimits

0xfb87,	// (0x0003fcb3) list_single_cale_day_pane_fp_g

0x4967,	// (0x00034a93) list_single_cale_day_pane_fp_t1_ParamLimits

0x4967,	// (0x00034a93) list_single_cale_day_pane_fp_t1

0x498d,	// (0x00034ab9) list_single_cale_day_pane_fp_t2_ParamLimits

0x498d,	// (0x00034ab9) list_single_cale_day_pane_fp_t2

0x49a6,	// (0x00034ad2) list_single_cale_day_pane_fp_t3_ParamLimits

0x49a6,	// (0x00034ad2) list_single_cale_day_pane_fp_t3

0x0002,

0xfb92,	// (0x0003fcbe) list_single_cale_day_pane_fp_t_ParamLimits

0xfb92,	// (0x0003fcbe) list_single_cale_day_pane_fp_t

0xc2c4,	// (0x0003c3f0) list_empty_pane_fp_g1_ParamLimits

0xc2c4,	// (0x0003c3f0) list_empty_pane_fp_g1

0x49bf,	// (0x00034aeb) list_empty_pane_fp_t1

0x49cd,	// (0x00034af9) list_empty_pane_fp_t2

0x0001,

0xfb99,	// (0x0003fcc5) list_empty_pane_fp_t

0xc2c4,	// (0x0003c3f0) list_single_heading_pane_fp_g1_ParamLimits

0xc2c4,	// (0x0003c3f0) list_single_heading_pane_fp_g1

0x466f,	// (0x0003479b) list_single_heading_pane_fp_g2_ParamLimits

0x466f,	// (0x0003479b) list_single_heading_pane_fp_g2

0x467b,	// (0x000347a7) list_single_heading_pane_fp_g3_ParamLimits

0x467b,	// (0x000347a7) list_single_heading_pane_fp_g3

0x0002,

0xfb9e,	// (0x0003fcca) list_single_heading_pane_fp_g_ParamLimits

0xfb9e,	// (0x0003fcca) list_single_heading_pane_fp_g

0x49db,	// (0x00034b07) list_single_heading_pane_fp_t1_ParamLimits

0x49db,	// (0x00034b07) list_single_heading_pane_fp_t1

0x49ed,	// (0x00034b19) list_single_heading_pane_fp_t2_ParamLimits

0x49ed,	// (0x00034b19) list_single_heading_pane_fp_t2

0x0001,

0xfba5,	// (0x0003fcd1) list_single_heading_pane_fp_t_ParamLimits

0xfba5,	// (0x0003fcd1) list_single_heading_pane_fp_t

0x2a4a,	// (0x00032b76) aid_size_cell_fast

0x23bf,	// (0x000324eb) soft_indicator_pane_cp1_t1

0x2a87,	// (0x00032bb3) cell_app_pane_cp2_ParamLimits

0x2a87,	// (0x00032bb3) cell_app_pane_cp2

0x7b5b,	// (0x00037c87) fep_hwr_candidate_drop_down_list_pane

0x7d49,	// (0x00037e75) fep_hwr_candidate_pane_g3_ParamLimits

0x7d49,	// (0x00037e75) fep_hwr_candidate_pane_g3

0x3692,	// (0x000337be) fep_hwr_candidate_pane_g4_ParamLimits

0x3692,	// (0x000337be) fep_hwr_candidate_pane_g4

0x0002,

0xfb14,	// (0x0003fc40) fep_hwr_candidate_pane_g_ParamLimits

0xfb14,	// (0x0003fc40) fep_hwr_candidate_pane_g

0xbd92,	// (0x0003bebe) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbd92,	// (0x0003bebe) fep_vkb_candidate_drop_down_list_pane

0xc1ba,	// (0x0003c2e6) fep_vkb_candidate_pane_g3

0xc1c2,	// (0x0003c2ee) fep_vkb_candidate_pane_g4

0x0002,

0xfb41,	// (0x0003fc6d) fep_vkb_candidate_pane_g

0x7db4,	// (0x00037ee0) cell_hwr_candidate_pane_g1_ParamLimits

0x7dc2,	// (0x00037eee) cell_hwr_candidate_pane_g3_ParamLimits

0x7dc2,	// (0x00037eee) cell_hwr_candidate_pane_g3

0xde53,	// (0x0003df7f) cell_hwr_candidate_pane_g4_ParamLimits

0xde53,	// (0x0003df7f) cell_hwr_candidate_pane_g4

0x0002,

0xfb60,	// (0x0003fc8c) cell_hwr_candidate_pane_g_ParamLimits

0xfb60,	// (0x0003fc8c) cell_hwr_candidate_pane_g

0xc1d9,	// (0x0003c305) cell_vkb_candidate_pane_g3_ParamLimits

0xc1d9,	// (0x0003c305) cell_vkb_candidate_pane_g3

0xc1f4,	// (0x0003c320) cell_vkb_candidate_pane_g4_ParamLimits

0xc1f4,	// (0x0003c320) cell_vkb_candidate_pane_g4

0xc309,	// (0x0003c435) cell_app_pane_cp2_g1_ParamLimits

0xc309,	// (0x0003c435) cell_app_pane_cp2_g1

0xc327,	// (0x0003c453) cell_app_pane_cp2_g2_ParamLimits

0xc327,	// (0x0003c453) cell_app_pane_cp2_g2

0x0001,

0xfbaa,	// (0x0003fcd6) cell_app_pane_cp2_g_ParamLimits

0xfbaa,	// (0x0003fcd6) cell_app_pane_cp2_g

0xc333,	// (0x0003c45f) cell_app_pane_cp2_t1_ParamLimits

0xc333,	// (0x0003c45f) cell_app_pane_cp2_t1

0x28e7,	// (0x00032a13) grid_highlight_pane_cp1_ParamLimits

0x28e7,	// (0x00032a13) grid_highlight_pane_cp1

0x7e01,	// (0x00037f2d) cell_hwr_candidate_pane_cp1_ParamLimits

0x7e01,	// (0x00037f2d) cell_hwr_candidate_pane_cp1

0x7db4,	// (0x00037ee0) fep_hwr_candidate_drop_down_list_pane_g1

0x7e25,	// (0x00037f51) fep_hwr_candidate_drop_down_list_pane_g2

0x7e32,	// (0x00037f5e) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbaf,	// (0x0003fcdb) fep_hwr_candidate_drop_down_list_pane_g

0x7e3f,	// (0x00037f6b) fep_hwr_candidate_drop_down_list_scroll_pane

0x7e48,	// (0x00037f74) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7e48,	// (0x00037f74) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7e55,	// (0x00037f81) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7e55,	// (0x00037f81) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7e62,	// (0x00037f8e) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7e62,	// (0x00037f8e) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7e6f,	// (0x00037f9b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7e6f,	// (0x00037f9b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7e8a,	// (0x00037fb6) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7e8a,	// (0x00037fb6) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7ea5,	// (0x00037fd1) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7ea5,	// (0x00037fd1) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7ec0,	// (0x00037fec) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7ec0,	// (0x00037fec) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7edb,	// (0x00038007) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7edb,	// (0x00038007) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb6,	// (0x0003fce2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb6,	// (0x0003fce2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc345,	// (0x0003c471) cell_vkb_candidate_pane_cp1_ParamLimits

0xc345,	// (0x0003c471) cell_vkb_candidate_pane_cp1

0xbe98,	// (0x0003bfc4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbe98,	// (0x0003bfc4) fep_vkb_candidate_drop_down_list_pane_g1

0xc36b,	// (0x0003c497) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc36b,	// (0x0003c497) fep_vkb_candidate_drop_down_list_pane_g2

0xc378,	// (0x0003c4a4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc378,	// (0x0003c4a4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc7,	// (0x0003fcf3) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc7,	// (0x0003fcf3) fep_vkb_candidate_drop_down_list_pane_g

0xc385,	// (0x0003c4b1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc385,	// (0x0003c4b1) fep_vkb_candidate_drop_down_list_scroll_pane

0xc392,	// (0x0003c4be) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc392,	// (0x0003c4be) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc39f,	// (0x0003c4cb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc39f,	// (0x0003c4cb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc3ab,	// (0x0003c4d7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc3ab,	// (0x0003c4d7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc2e8,	// (0x0003c414) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc2e8,	// (0x0003c414) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc3b7,	// (0x0003c4e3) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc3b7,	// (0x0003c4e3) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc3d8,	// (0x0003c504) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc3d8,	// (0x0003c504) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc3f9,	// (0x0003c525) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc3f9,	// (0x0003c525) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc41a,	// (0x0003c546) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc41a,	// (0x0003c546) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x0003fcfa) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x0003fcfa) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x5971,	// (0x00035a9d) title_pane_g1_ParamLimits

0x597e,	// (0x00035aaa) title_pane_g2_ParamLimits

0xf54e,	// (0x0003f67a) title_pane_g_ParamLimits

0x65f8,	// (0x00036724) aid_call2_pane

0x6600,	// (0x0003672c) aid_call_pane

0x6608,	// (0x00036734) popup_clock_analogue_window_g1

0x6608,	// (0x00036734) popup_clock_analogue_window_g2

0x6610,	// (0x0003673c) popup_clock_analogue_window_g3

0x6619,	// (0x00036745) popup_clock_analogue_window_g4

0xf4ac,	// (0x0003f5d8) popup_clock_analogue_window_g5

0x0004,

0xf6ee,	// (0x0003f81a) popup_clock_analogue_window_g

0x6621,	// (0x0003674d) popup_clock_analogue_window_t1

0x66b1,	// (0x000367dd) clock_digital_number_pane_ParamLimits

0x66b1,	// (0x000367dd) clock_digital_number_pane

0x66bd,	// (0x000367e9) clock_digital_number_pane_cp02_ParamLimits

0x66bd,	// (0x000367e9) clock_digital_number_pane_cp02

0x66c9,	// (0x000367f5) clock_digital_number_pane_cp03_ParamLimits

0x66c9,	// (0x000367f5) clock_digital_number_pane_cp03

0x66d5,	// (0x00036801) clock_digital_number_pane_cp04_ParamLimits

0x66d5,	// (0x00036801) clock_digital_number_pane_cp04

0x66e1,	// (0x0003680d) clock_digital_separator_pane_ParamLimits

0x66e1,	// (0x0003680d) clock_digital_separator_pane

0x66ed,	// (0x00036819) popup_clock_digital_window_t1_ParamLimits

0x66ed,	// (0x00036819) popup_clock_digital_window_t1

0xf4ac,	// (0x0003f5d8) clock_digital_number_pane_g1

0xf4ac,	// (0x0003f5d8) clock_digital_number_pane_g2

0x0001,

0xf6f9,	// (0x0003f825) clock_digital_number_pane_g

0xf4ac,	// (0x0003f5d8) clock_digital_separator_pane_g1

0xf4ac,	// (0x0003f5d8) clock_digital_separator_pane_g2

0x0001,

0xf6f9,	// (0x0003f825) clock_digital_separator_pane_g

0x9132,	// (0x0003925e) aid_fill_nsta_ParamLimits

0x9278,	// (0x000393a4) indicator_nsta_pane_ParamLimits

0x9409,	// (0x00039535) popup_clock_analogue_window

0x9409,	// (0x00039535) popup_clock_digital_window

0xf504,	// (0x0003f630) grid_indicator_nsta_pane_ParamLimits

0xb69f,	// (0x0003b7cb) clock_nsta_pane_t2

0x0001,

0xfa94,	// (0x0003fbc0) clock_nsta_pane_t

0x6561,	// (0x0003668d) aid_size_max_handle

0x656b,	// (0x00036697) aid_size_min_handle

0x8dc7,	// (0x00038ef3) editor_scroll_pane

0xc435,	// (0x0003c561) ex_editor_pane

0x2a10,	// (0x00032b3c) scroll_pane_cp13

0x2886,	// (0x000329b2) scroll_pane_cp14

0x6656,	// (0x00036782) scroll_pane_cp36

0x6684,	// (0x000367b0) list_single_graphic_hl_pane_cp2_ParamLimits

0x6684,	// (0x000367b0) list_single_graphic_hl_pane_cp2

0x433b,	// (0x00034467) list_single_graphic_hl_pane_ParamLimits

0x433b,	// (0x00034467) list_single_graphic_hl_pane

0x4a03,	// (0x00034b2f) aid_size_min_hl_cp1

0xc43d,	// (0x0003c569) list_highlight_pane_cp34_ParamLimits

0xc43d,	// (0x0003c569) list_highlight_pane_cp34

0xc44e,	// (0x0003c57a) list_single_graphic_hl_pane_g1_ParamLimits

0xc44e,	// (0x0003c57a) list_single_graphic_hl_pane_g1

0x7ef6,	// (0x00038022) list_single_graphic_hl_pane_g2_ParamLimits

0x7ef6,	// (0x00038022) list_single_graphic_hl_pane_g2

0x7ef6,	// (0x00038022) list_single_graphic_hl_pane_g3_ParamLimits

0x7ef6,	// (0x00038022) list_single_graphic_hl_pane_g3

0x400a,	// (0x00034136) list_single_graphic_hl_pane_g4_ParamLimits

0x400a,	// (0x00034136) list_single_graphic_hl_pane_g4

0x7f02,	// (0x0003802e) list_single_graphic_hl_pane_g5_ParamLimits

0x7f02,	// (0x0003802e) list_single_graphic_hl_pane_g5

0x0004,

0xfbdf,	// (0x0003fd0b) list_single_graphic_hl_pane_g_ParamLimits

0xfbdf,	// (0x0003fd0b) list_single_graphic_hl_pane_g

0x7f16,	// (0x00038042) list_single_graphic_hl_pane_t1_ParamLimits

0x7f16,	// (0x00038042) list_single_graphic_hl_pane_t1

0xc45b,	// (0x0003c587) aid_size_min_hl_cp2

0xc464,	// (0x0003c590) list_highlight_pane_cp34_cp2_ParamLimits

0xc464,	// (0x0003c590) list_highlight_pane_cp34_cp2

0xc44e,	// (0x0003c57a) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc44e,	// (0x0003c57a) list_single_graphic_hl_pane_g1_cp2

0xc471,	// (0x0003c59d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc471,	// (0x0003c59d) list_single_graphic_hl_pane_g2_cp2

0xc47d,	// (0x0003c5a9) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc47d,	// (0x0003c5a9) list_single_graphic_hl_pane_g3_cp2

0xc48b,	// (0x0003c5b7) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc48b,	// (0x0003c5b7) list_single_graphic_hl_pane_g4_cp2

0xc497,	// (0x0003c5c3) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc497,	// (0x0003c5c3) list_single_graphic_hl_pane_g5_cp2

0x6e67,	// (0x00036f93) control_pane_g4_ParamLimits

0x6e67,	// (0x00036f93) control_pane_g4

0x90f6,	// (0x00039222) bg_popup_sub_pane_cp10_ParamLimits

0xbc3f,	// (0x0003bd6b) list_choice_list_pane_ParamLimits

0xbc4e,	// (0x0003bd7a) scroll_pane_cp23

0x23dc,	// (0x00032508) bg_popup_preview_window_pane_cp02_ParamLimits

0xc265,	// (0x0003c391) list_preview_fixed_pane_ParamLimits

0xc27b,	// (0x0003c3a7) list_preview_fixed_pane_cp_ParamLimits

0xc27b,	// (0x0003c3a7) list_preview_fixed_pane_cp

0xc287,	// (0x0003c3b3) popup_preview_fixed_window_g1_ParamLimits

0xc287,	// (0x0003c3b3) popup_preview_fixed_window_g1

0xc293,	// (0x0003c3bf) popup_preview_fixed_window_g2_ParamLimits

0xc293,	// (0x0003c3bf) popup_preview_fixed_window_g2

0x0002,

0xfb67,	// (0x0003fc93) popup_preview_fixed_window_g_ParamLimits

0xfb67,	// (0x0003fc93) popup_preview_fixed_window_g

0x6437,	// (0x00036563) aid_navi_side_left_pane_ParamLimits

0x644c,	// (0x00036578) aid_navi_side_right_pane_ParamLimits

0x6464,	// (0x00036590) navi_icon_pane_stacon_ParamLimits

0x6478,	// (0x000365a4) navi_navi_pane_stacon_ParamLimits

0x6464,	// (0x00036590) navi_text_pane_stacon_ParamLimits

0x5708,	// (0x00035834) main_text_info_pane

0xc4c1,	// (0x0003c5ed) listscroll_text_info_pane

0xc4c9,	// (0x0003c5f5) list_text_info_pane_ParamLimits

0xc4c9,	// (0x0003c5f5) list_text_info_pane

0xc4d8,	// (0x0003c604) scroll_pane_cp24_ParamLimits

0xc4d8,	// (0x0003c604) scroll_pane_cp24

0xc4f6,	// (0x0003c622) list_text_info_pane_t1_ParamLimits

0xc4f6,	// (0x0003c622) list_text_info_pane_t1

0x6fed,	// (0x00037119) popup_fast_swap2_window_ParamLimits

0x6fed,	// (0x00037119) popup_fast_swap2_window

0xc51b,	// (0x0003c647) aid_size_cell_fast2

0xf4a2,	// (0x0003f5ce) bg_popup_window_pane_cp17

0x9a5c,	// (0x00039b88) heading_pane_cp2

0x260b,	// (0x00032737) listscroll_fast2_pane

0xc525,	// (0x0003c651) grid_fast2_pane

0xc52f,	// (0x0003c65b) listscroll_fast2_pane_g1

0xc539,	// (0x0003c665) listscroll_fast2_pane_g2

0x0001,

0xfbea,	// (0x0003fd16) listscroll_fast2_pane_g

0x2a10,	// (0x00032b3c) scroll_pane_cp26

0xc543,	// (0x0003c66f) cell_fast2_pane_ParamLimits

0xc543,	// (0x0003c66f) cell_fast2_pane

0xc55a,	// (0x0003c686) cell_fast2_pane_g1

0xc563,	// (0x0003c68f) cell_fast2_pane_g2

0xc56c,	// (0x0003c698) cell_fast2_pane_g3

0x0002,

0xfbef,	// (0x0003fd1b) cell_fast2_pane_g

0x264d,	// (0x00032779) grid_highlight_pane_cp9

0x6faf,	// (0x000370db) main_eswt_pane_ParamLimits

0x6faf,	// (0x000370db) main_eswt_pane

0xc4ed,	// (0x0003c619) list_single_text_info_pane

0xc574,	// (0x0003c6a0) eswt_ctrl_button_pane

0xc574,	// (0x0003c6a0) eswt_ctrl_canvas_pane

0xc57c,	// (0x0003c6a8) eswt_ctrl_combo_pane

0xc574,	// (0x0003c6a0) eswt_ctrl_default_pane

0xc574,	// (0x0003c6a0) eswt_ctrl_label_pane

0xc584,	// (0x0003c6b0) eswt_ctrl_wait_pane

0xc58c,	// (0x0003c6b8) eswt_shell_pane

0xf4a2,	// (0x0003f5ce) listscroll_eswt_app_pane

0xc5ac,	// (0x0003c6d8) popup_eswt_tasktip_window_ParamLimits

0xc5ac,	// (0x0003c6d8) popup_eswt_tasktip_window

0x969a,	// (0x000397c6) bg_popup_window_pane_cp18

0xc5bd,	// (0x0003c6e9) eswt_control_pane_g1_ParamLimits

0xc5bd,	// (0x0003c6e9) eswt_control_pane_g1

0xc5ca,	// (0x0003c6f6) eswt_control_pane_g2_ParamLimits

0xc5ca,	// (0x0003c6f6) eswt_control_pane_g2

0xc5d7,	// (0x0003c703) eswt_control_pane_g3_ParamLimits

0xc5d7,	// (0x0003c703) eswt_control_pane_g3

0xc5e4,	// (0x0003c710) eswt_control_pane_g4_ParamLimits

0xc5e4,	// (0x0003c710) eswt_control_pane_g4

0x0003,

0xfbf6,	// (0x0003fd22) eswt_control_pane_g_ParamLimits

0xfbf6,	// (0x0003fd22) eswt_control_pane_g

0x28e7,	// (0x00032a13) bg_button_pane_ParamLimits

0x28e7,	// (0x00032a13) bg_button_pane

0x2662,	// (0x0003278e) common_borders_pane_copy2_ParamLimits

0x2662,	// (0x0003278e) common_borders_pane_copy2

0xc5f1,	// (0x0003c71d) control_button_pane_g1_ParamLimits

0xc5f1,	// (0x0003c71d) control_button_pane_g1

0xc5fd,	// (0x0003c729) control_button_pane_g2_ParamLimits

0xc5fd,	// (0x0003c729) control_button_pane_g2

0xc609,	// (0x0003c735) control_button_pane_g3_ParamLimits

0xc609,	// (0x0003c735) control_button_pane_g3

0x0002,

0xfbff,	// (0x0003fd2b) control_button_pane_g_ParamLimits

0xfbff,	// (0x0003fd2b) control_button_pane_g

0xc61d,	// (0x0003c749) control_button_pane_t1

0xc62b,	// (0x0003c757) control_button_pane_t2

0x0001,

0xfc06,	// (0x0003fd32) control_button_pane_t

0x9626,	// (0x00039752) bg_button_pane_g1

0x9636,	// (0x00039762) bg_button_pane_g2

0x962e,	// (0x0003975a) bg_button_pane_g3

0x9646,	// (0x00039772) bg_button_pane_g4

0x963e,	// (0x0003976a) bg_button_pane_g5

0x964e,	// (0x0003977a) bg_button_pane_g6

0x9656,	// (0x00039782) bg_button_pane_g7

0x9666,	// (0x00039792) bg_button_pane_g8

0x965e,	// (0x0003978a) bg_button_pane_g9

0x0008,

0xf85c,	// (0x0003f988) bg_button_pane_g

0xbbfa,	// (0x0003bd26) common_borders_pane_ParamLimits

0xbbfa,	// (0x0003bd26) common_borders_pane

0xc5bd,	// (0x0003c6e9) eswt_control_pane_g1_copy1_ParamLimits

0xc5bd,	// (0x0003c6e9) eswt_control_pane_g1_copy1

0xc5ca,	// (0x0003c6f6) eswt_control_pane_g2_copy1_ParamLimits

0xc5ca,	// (0x0003c6f6) eswt_control_pane_g2_copy1

0xc5d7,	// (0x0003c703) eswt_control_pane_g3_copy1_ParamLimits

0xc5d7,	// (0x0003c703) eswt_control_pane_g3_copy1

0xc5e4,	// (0x0003c710) eswt_control_pane_g4_copy1_ParamLimits

0xc5e4,	// (0x0003c710) eswt_control_pane_g4_copy1

0xbc35,	// (0x0003bd61) bg_eswt_ctrl_canvas_pane_g1

0xbbfa,	// (0x0003bd26) common_borders_pane_cp2_ParamLimits

0xbbfa,	// (0x0003bd26) common_borders_pane_cp2

0xbbfa,	// (0x0003bd26) common_borders_pane_cp3_ParamLimits

0xbbfa,	// (0x0003bd26) common_borders_pane_cp3

0xc639,	// (0x0003c765) separator_horizontal_pane

0xc641,	// (0x0003c76d) separator_vertical_pane

0xc5bd,	// (0x0003c6e9) eswt_control_pane_g1_copy2_ParamLimits

0xc5bd,	// (0x0003c6e9) eswt_control_pane_g1_copy2

0xc5ca,	// (0x0003c6f6) eswt_control_pane_g2_copy2_ParamLimits

0xc5ca,	// (0x0003c6f6) eswt_control_pane_g2_copy2

0xc5d7,	// (0x0003c703) eswt_control_pane_g3_copy2_ParamLimits

0xc5d7,	// (0x0003c703) eswt_control_pane_g3_copy2

0xc5e4,	// (0x0003c710) eswt_control_pane_g4_copy2_ParamLimits

0xc5e4,	// (0x0003c710) eswt_control_pane_g4_copy2

0xf4a2,	// (0x0003f5ce) common_borders_pane_cp4

0xc64a,	// (0x0003c776) separator_horizontal_pane_g1

0xc653,	// (0x0003c77f) separator_horizontal_pane_g2

0xc65c,	// (0x0003c788) separator_horizontal_pane_g3

0x0002,

0xfc0b,	// (0x0003fd37) separator_horizontal_pane_g

0xc5bd,	// (0x0003c6e9) eswt_control_pane_g1_copy3_ParamLimits

0xc5bd,	// (0x0003c6e9) eswt_control_pane_g1_copy3

0xc5ca,	// (0x0003c6f6) eswt_control_pane_g2_copy3_ParamLimits

0xc5ca,	// (0x0003c6f6) eswt_control_pane_g2_copy3

0xc5d7,	// (0x0003c703) eswt_control_pane_g3_copy3_ParamLimits

0xc5d7,	// (0x0003c703) eswt_control_pane_g3_copy3

0xc5e4,	// (0x0003c710) eswt_control_pane_g4_copy3_ParamLimits

0xc5e4,	// (0x0003c710) eswt_control_pane_g4_copy3

0xf4a2,	// (0x0003f5ce) common_borders_pane_cp5

0xc665,	// (0x0003c791) separator_vertical_pane_g1

0xc66e,	// (0x0003c79a) separator_vertical_pane_g2

0xc677,	// (0x0003c7a3) separator_vertical_pane_g3

0x0002,

0xfc12,	// (0x0003fd3e) separator_vertical_pane_g

0xc5bd,	// (0x0003c6e9) eswt_control_pane_g1_copy4_ParamLimits

0xc5bd,	// (0x0003c6e9) eswt_control_pane_g1_copy4

0xc5ca,	// (0x0003c6f6) eswt_control_pane_g2_copy4_ParamLimits

0xc5ca,	// (0x0003c6f6) eswt_control_pane_g2_copy4

0xc5d7,	// (0x0003c703) eswt_control_pane_g3_copy4_ParamLimits

0xc5d7,	// (0x0003c703) eswt_control_pane_g3_copy4

0xc5e4,	// (0x0003c710) eswt_control_pane_g4_copy4_ParamLimits

0xc5e4,	// (0x0003c710) eswt_control_pane_g4_copy4

0xc680,	// (0x0003c7ac) eswt_ctrl_combo_button_pane

0xc688,	// (0x0003c7b4) eswt_ctrl_input_pane

0xc690,	// (0x0003c7bc) popup_choice_list_window_cp70

0xc698,	// (0x0003c7c4) eswt_ctrl_input_pane_t1

0xf4a2,	// (0x0003f5ce) input_focus_pane_cp70

0xbbfa,	// (0x0003bd26) bg_button_pane_cp70_ParamLimits

0xbbfa,	// (0x0003bd26) bg_button_pane_cp70

0xc6a6,	// (0x0003c7d2) eswt_ctrl_combo_button_pane_g1

0xc6ae,	// (0x0003c7da) wait_bar_pane_cp70

0x969a,	// (0x000397c6) bg_popup_window_pane_cp70_ParamLimits

0x969a,	// (0x000397c6) bg_popup_window_pane_cp70

0xc6b6,	// (0x0003c7e2) popup_eswt_tasktip_window_t1

0xc6cc,	// (0x0003c7f8) wait_bar_pane_cp71_ParamLimits

0xc6cc,	// (0x0003c7f8) wait_bar_pane_cp71

0xc6d8,	// (0x0003c804) grid_eswt_app_pane

0x2c47,	// (0x00032d73) scroll_pane_cp70

0xc6e1,	// (0x0003c80d) cell_eswt_app_pane_ParamLimits

0xc6e1,	// (0x0003c80d) cell_eswt_app_pane

0xc713,	// (0x0003c83f) cell_eswt_app_pane_g1_ParamLimits

0xc713,	// (0x0003c83f) cell_eswt_app_pane_g1

0xc742,	// (0x0003c86e) cell_eswt_app_pane_g2_ParamLimits

0xc742,	// (0x0003c86e) cell_eswt_app_pane_g2

0x0001,

0xfc19,	// (0x0003fd45) cell_eswt_app_pane_g_ParamLimits

0xfc19,	// (0x0003fd45) cell_eswt_app_pane_g

0xc76b,	// (0x0003c897) cell_eswt_app_pane_t1_ParamLimits

0xc76b,	// (0x0003c897) cell_eswt_app_pane_t1

0xc79d,	// (0x0003c8c9) grid_highlight_pane_cp70_ParamLimits

0xc79d,	// (0x0003c8c9) grid_highlight_pane_cp70

0x8ca4,	// (0x00038dd0) set_content_pane_g1

0x9075,	// (0x000391a1) status_small_volume_pane

0x7f2c,	// (0x00038058) status_small_volume_pane_g1

0x7f34,	// (0x00038060) volume_small2_pane

0x7f3d,	// (0x00038069) volume_small2_pane_g1

0x7f46,	// (0x00038072) volume_small2_pane_g2

0x7f4f,	// (0x0003807b) volume_small2_pane_g3

0x7f58,	// (0x00038084) volume_small2_pane_g4

0x7f61,	// (0x0003808d) volume_small2_pane_g5

0x7f6a,	// (0x00038096) volume_small2_pane_g6

0x7f73,	// (0x0003809f) volume_small2_pane_g7

0x7f7c,	// (0x000380a8) volume_small2_pane_g8

0x7f85,	// (0x000380b1) volume_small2_pane_g9

0x7f8e,	// (0x000380ba) volume_small2_pane_g10

0x0009,

0xfc1e,	// (0x0003fd4a) volume_small2_pane_g

0xbfec,	// (0x0003c118) fep_vkb_top_text_pane_g1_ParamLimits

0xc007,	// (0x0003c133) fep_vkb_top_text_pane_t1_ParamLimits

0xc29f,	// (0x0003c3cb) popup_preview_fixed_window_g3_ParamLimits

0xc29f,	// (0x0003c3cb) popup_preview_fixed_window_g3

0x74fe,	// (0x0003762a) popup_toolbar_trans_pane

0xa9df,	// (0x0003ab0b) aid_height_set_list_ParamLimits

0xa9f0,	// (0x0003ab1c) aid_size_parent_ParamLimits

0x90f6,	// (0x00039222) list_highlight_pane_cp2_ParamLimits

0x8ca4,	// (0x00038dd0) set_content_pane_g1_ParamLimits

0x79ef,	// (0x00037b1b) list_single_image_pane_ParamLimits

0x79ef,	// (0x00037b1b) list_single_image_pane

0xc7a9,	// (0x0003c8d5) aid_size_cell_image_ParamLimits

0xc7a9,	// (0x0003c8d5) aid_size_cell_image

0xc7b6,	// (0x0003c8e2) grid_single_image_pane_ParamLimits

0xc7b6,	// (0x0003c8e2) grid_single_image_pane

0x28f5,	// (0x00032a21) list_single_image_pane_g1_ParamLimits

0x28f5,	// (0x00032a21) list_single_image_pane_g1

0x2901,	// (0x00032a2d) list_single_image_pane_g2_ParamLimits

0x2901,	// (0x00032a2d) list_single_image_pane_g2

0x0001,

0xfc33,	// (0x0003fd5f) list_single_image_pane_g_ParamLimits

0xfc33,	// (0x0003fd5f) list_single_image_pane_g

0xc7c4,	// (0x0003c8f0) list_single_image_pane_t1_ParamLimits

0xc7c4,	// (0x0003c8f0) list_single_image_pane_t1

0xc7da,	// (0x0003c906) cell_image_list_pane_ParamLimits

0xc7da,	// (0x0003c906) cell_image_list_pane

0xc7f0,	// (0x0003c91c) cell_image_list_pane_g1

0xc7f9,	// (0x0003c925) cell_image_list_pane_g2

0x0001,

0xfc38,	// (0x0003fd64) cell_image_list_pane_g

0xc802,	// (0x0003c92e) aid_size_cell_tb_trans_pane

0x28e7,	// (0x00032a13) bg_tb_trans_pane

0xc814,	// (0x0003c940) grid_tb_trans_pane

0x9626,	// (0x00039752) bg_tb_trans_pane_g1

0x9636,	// (0x00039762) bg_tb_trans_pane_g2

0x962e,	// (0x0003975a) bg_tb_trans_pane_g3

0x9646,	// (0x00039772) bg_tb_trans_pane_g4

0x963e,	// (0x0003976a) bg_tb_trans_pane_g5

0x9666,	// (0x00039792) bg_tb_trans_pane_g6

0x965e,	// (0x0003978a) bg_tb_trans_pane_g7

0x964e,	// (0x0003977a) bg_tb_trans_pane_g8

0x9656,	// (0x00039782) bg_tb_trans_pane_g9

0x0008,

0xfc3d,	// (0x0003fd69) bg_tb_trans_pane_g

0xc828,	// (0x0003c954) cell_toolbar_trans_pane_ParamLimits

0xc828,	// (0x0003c954) cell_toolbar_trans_pane

0xbc35,	// (0x0003bd61) cell_toolbar_trans_pane_g1

0xb86d,	// (0x0003b999) list_form2_midp_pane_t1

0xb87b,	// (0x0003b9a7) list_form2_midp_pane_t2

0x0001,

0xfada,	// (0x0003fc06) list_form2_midp_pane_t

0xb889,	// (0x0003b9b5) scroll_pane_cp51_ParamLimits

0xba50,	// (0x0003bb7c) form2_midp_wait_pane_g1

0xba59,	// (0x0003bb85) form2_midp_wait_pane_g2

0xba62,	// (0x0003bb8e) form2_midp_wait_pane_g3

0x0002,

0xfaef,	// (0x0003fc1b) form2_midp_wait_pane_g

0xf504,	// (0x0003f630) list_highlight_pane_cp21_ParamLimits

0xba9b,	// (0x0003bbc7) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbaaa,	// (0x0003bbd6) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xac0d,	// (0x0003ad39) list_single_2graphic_im_pane_ParamLimits

0xac0d,	// (0x0003ad39) list_single_2graphic_im_pane

0xc84e,	// (0x0003c97a) list_single_2graphic_im_pane_g1_ParamLimits

0xc84e,	// (0x0003c97a) list_single_2graphic_im_pane_g1

0xc85f,	// (0x0003c98b) list_single_2graphic_im_pane_g2_ParamLimits

0xc85f,	// (0x0003c98b) list_single_2graphic_im_pane_g2

0xc86b,	// (0x0003c997) list_single_2graphic_im_pane_g3_ParamLimits

0xc86b,	// (0x0003c997) list_single_2graphic_im_pane_g3

0x0003,

0xfc50,	// (0x0003fd7c) list_single_2graphic_im_pane_g_ParamLimits

0xfc50,	// (0x0003fd7c) list_single_2graphic_im_pane_g

0xc88b,	// (0x0003c9b7) list_single_2graphic_im_pane_t1_ParamLimits

0xc88b,	// (0x0003c9b7) list_single_2graphic_im_pane_t1

0xc2ab,	// (0x0003c3d7) list_single_graphic_2heading_pane_fp_ParamLimits

0xc2ab,	// (0x0003c3d7) list_single_graphic_2heading_pane_fp

0x4875,	// (0x000349a1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4875,	// (0x000349a1) list_single_graphic_2heading_pane_fp_g1

0xc2c4,	// (0x0003c3f0) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc2c4,	// (0x0003c3f0) list_single_graphic_2heading_pane_fp_g2

0x466f,	// (0x0003479b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x466f,	// (0x0003479b) list_single_graphic_2heading_pane_fp_g3

0x467b,	// (0x000347a7) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x467b,	// (0x000347a7) list_single_graphic_2heading_pane_fp_g4

0xc2d0,	// (0x0003c3fc) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc2d0,	// (0x0003c3fc) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb77,	// (0x0003fca3) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb77,	// (0x0003fca3) list_single_graphic_2heading_pane_fp_g

0x4a0c,	// (0x00034b38) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4a0c,	// (0x00034b38) list_single_graphic_2heading_pane_fp_t1

0x48ad,	// (0x000349d9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x48ad,	// (0x000349d9) list_single_graphic_2heading_pane_fp_t2

0x4a22,	// (0x00034b4e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4a22,	// (0x00034b4e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc59,	// (0x0003fd85) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc59,	// (0x0003fd85) list_single_graphic_2heading_pane_fp_t

0xbcae,	// (0x0003bdda) fep_hwr_write_pane_g5_ParamLimits

0xbcae,	// (0x0003bdda) fep_hwr_write_pane_g5

0xbcba,	// (0x0003bde6) fep_hwr_write_pane_g6_ParamLimits

0xbcba,	// (0x0003bde6) fep_hwr_write_pane_g6

0xc58c,	// (0x0003c6b8) eswt_shell_pane_ParamLimits

0x969a,	// (0x000397c6) bg_popup_window_pane_cp18_ParamLimits

0xa936,	// (0x0003aa62) heading_pane_cp70

0xc6b6,	// (0x0003c7e2) popup_eswt_tasktip_window_t1_ParamLimits

0x9189,	// (0x000392b5) aid_touch_tab_arrow_left

0x9195,	// (0x000392c1) aid_touch_tab_arrow_right

0x5997,	// (0x00035ac3) title_pane_g3_ParamLimits

0x5997,	// (0x00035ac3) title_pane_g3

0x28a6,	// (0x000329d2) set_value_pane_g1

0x74fe,	// (0x0003762a) popup_toolbar_trans_pane_ParamLimits

0xc802,	// (0x0003c92e) aid_size_cell_tb_trans_pane_ParamLimits

0x28e7,	// (0x00032a13) bg_tb_trans_pane_ParamLimits

0xc814,	// (0x0003c940) grid_tb_trans_pane_ParamLimits

0x23dc,	// (0x00032508) cont_note_pane_ParamLimits

0x23dc,	// (0x00032508) cont_note_pane

0x2662,	// (0x0003278e) cont_snote2_single_text_pane_ParamLimits

0x2662,	// (0x0003278e) cont_snote2_single_text_pane

0x2662,	// (0x0003278e) cont_snote2_single_graphic_pane_ParamLimits

0x2662,	// (0x0003278e) cont_snote2_single_graphic_pane

0x9c84,	// (0x00039db0) cont_note_wait_pane_ParamLimits

0x9c84,	// (0x00039db0) cont_note_wait_pane

0x9c84,	// (0x00039db0) cont_note_image_pane_ParamLimits

0x9c84,	// (0x00039db0) cont_note_image_pane

0xc8bc,	// (0x0003c9e8) popup_note2_window_g1_ParamLimits

0xc8bc,	// (0x0003c9e8) popup_note2_window_g1

0xc8ed,	// (0x0003ca19) popup_note2_window_t1_ParamLimits

0xc8ed,	// (0x0003ca19) popup_note2_window_t1

0xc932,	// (0x0003ca5e) popup_note2_window_t2_ParamLimits

0xc932,	// (0x0003ca5e) popup_note2_window_t2

0xc977,	// (0x0003caa3) popup_note2_window_t3_ParamLimits

0xc977,	// (0x0003caa3) popup_note2_window_t3

0xc9bc,	// (0x0003cae8) popup_note2_window_t4_ParamLimits

0xc9bc,	// (0x0003cae8) popup_note2_window_t4

0x2460,	// (0x0003258c) popup_note2_window_t5_ParamLimits

0x2460,	// (0x0003258c) popup_note2_window_t5

0x0004,

0xfc65,	// (0x0003fd91) popup_note2_window_t_ParamLimits

0xfc65,	// (0x0003fd91) popup_note2_window_t

0xc9eb,	// (0x0003cb17) popup_note2_image_window_g1_ParamLimits

0xc9eb,	// (0x0003cb17) popup_note2_image_window_g1

0xc9f7,	// (0x0003cb23) popup_note2_image_window_g2_ParamLimits

0xc9f7,	// (0x0003cb23) popup_note2_image_window_g2

0x0001,

0xfc70,	// (0x0003fd9c) popup_note2_image_window_g_ParamLimits

0xfc70,	// (0x0003fd9c) popup_note2_image_window_g

0xca09,	// (0x0003cb35) popup_note2_image_window_t1_ParamLimits

0xca09,	// (0x0003cb35) popup_note2_image_window_t1

0xca21,	// (0x0003cb4d) popup_note2_image_window_t2_ParamLimits

0xca21,	// (0x0003cb4d) popup_note2_image_window_t2

0xca39,	// (0x0003cb65) popup_note2_image_window_t3_ParamLimits

0xca39,	// (0x0003cb65) popup_note2_image_window_t3

0x0002,

0xfc75,	// (0x0003fda1) popup_note2_image_window_t_ParamLimits

0xfc75,	// (0x0003fda1) popup_note2_image_window_t

0x9c92,	// (0x00039dbe) popup_note2_wait_window_g1_ParamLimits

0x9c92,	// (0x00039dbe) popup_note2_wait_window_g1

0xca55,	// (0x0003cb81) popup_note2_wait_window_g2_ParamLimits

0xca55,	// (0x0003cb81) popup_note2_wait_window_g2

0x9caa,	// (0x00039dd6) popup_note2_wait_window_g3_ParamLimits

0x9caa,	// (0x00039dd6) popup_note2_wait_window_g3

0x0002,

0xfc7c,	// (0x0003fda8) popup_note2_wait_window_g_ParamLimits

0xfc7c,	// (0x0003fda8) popup_note2_wait_window_g

0xca61,	// (0x0003cb8d) popup_note2_wait_window_t1_ParamLimits

0xca61,	// (0x0003cb8d) popup_note2_wait_window_t1

0xca7f,	// (0x0003cbab) popup_note2_wait_window_t2_ParamLimits

0xca7f,	// (0x0003cbab) popup_note2_wait_window_t2

0xca9d,	// (0x0003cbc9) popup_note2_wait_window_t3_ParamLimits

0xca9d,	// (0x0003cbc9) popup_note2_wait_window_t3

0xcaaf,	// (0x0003cbdb) popup_note2_wait_window_t4_ParamLimits

0xcaaf,	// (0x0003cbdb) popup_note2_wait_window_t4

0x0003,

0xfc83,	// (0x0003fdaf) popup_note2_wait_window_t_ParamLimits

0xfc83,	// (0x0003fdaf) popup_note2_wait_window_t

0xcac1,	// (0x0003cbed) wait_bar2_pane_ParamLimits

0xcac1,	// (0x0003cbed) wait_bar2_pane

0xcad9,	// (0x0003cc05) popup_snote2_single_text_window_g1_ParamLimits

0xcad9,	// (0x0003cc05) popup_snote2_single_text_window_g1

0xcb01,	// (0x0003cc2d) popup_snote2_single_text_window_t1_ParamLimits

0xcb01,	// (0x0003cc2d) popup_snote2_single_text_window_t1

0xcb4d,	// (0x0003cc79) popup_snote2_single_text_window_t2_ParamLimits

0xcb4d,	// (0x0003cc79) popup_snote2_single_text_window_t2

0xcb99,	// (0x0003ccc5) popup_snote2_single_text_window_t3_ParamLimits

0xcb99,	// (0x0003ccc5) popup_snote2_single_text_window_t3

0xcbda,	// (0x0003cd06) popup_snote2_single_text_window_t4_ParamLimits

0xcbda,	// (0x0003cd06) popup_snote2_single_text_window_t4

0xcc10,	// (0x0003cd3c) popup_snote2_single_text_window_t5_ParamLimits

0xcc10,	// (0x0003cd3c) popup_snote2_single_text_window_t5

0x0004,

0xfc8c,	// (0x0003fdb8) popup_snote2_single_text_window_t_ParamLimits

0xfc8c,	// (0x0003fdb8) popup_snote2_single_text_window_t

0xcc3b,	// (0x0003cd67) popup_snote2_single_graphic_window_g1_ParamLimits

0xcc3b,	// (0x0003cd67) popup_snote2_single_graphic_window_g1

0xcc63,	// (0x0003cd8f) popup_snote2_single_graphic_window_g2_ParamLimits

0xcc63,	// (0x0003cd8f) popup_snote2_single_graphic_window_g2

0x0001,

0xfc97,	// (0x0003fdc3) popup_snote2_single_graphic_window_g_ParamLimits

0xfc97,	// (0x0003fdc3) popup_snote2_single_graphic_window_g

0xcc8b,	// (0x0003cdb7) popup_snote2_single_graphic_window_t1_ParamLimits

0xcc8b,	// (0x0003cdb7) popup_snote2_single_graphic_window_t1

0xccd7,	// (0x0003ce03) popup_snote2_single_graphic_window_t2_ParamLimits

0xccd7,	// (0x0003ce03) popup_snote2_single_graphic_window_t2

0xcb99,	// (0x0003ccc5) popup_snote2_single_graphic_window_t3_ParamLimits

0xcb99,	// (0x0003ccc5) popup_snote2_single_graphic_window_t3

0xcbda,	// (0x0003cd06) popup_snote2_single_graphic_window_t4_ParamLimits

0xcbda,	// (0x0003cd06) popup_snote2_single_graphic_window_t4

0xcc10,	// (0x0003cd3c) popup_snote2_single_graphic_window_t5_ParamLimits

0xcc10,	// (0x0003cd3c) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9c,	// (0x0003fdc8) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9c,	// (0x0003fdc8) popup_snote2_single_graphic_window_t

0xb739,	// (0x0003b865) clock_nsta_pane_cp2_t1

0xb739,	// (0x0003b865) clock_nsta_pane_cp2_t2

0x0001,

0xfab0,	// (0x0003fbdc) clock_nsta_pane_cp2_t

0x4148,	// (0x00034274) form_field_data_wide_pane_g1_ParamLimits

0x28f5,	// (0x00032a21) form_field_data_wide_pane_g2_ParamLimits

0x28f5,	// (0x00032a21) form_field_data_wide_pane_g2

0x2901,	// (0x00032a2d) form_field_data_wide_pane_g3_ParamLimits

0x2901,	// (0x00032a2d) form_field_data_wide_pane_g3

0x0002,

0xf671,	// (0x0003f79d) form_field_data_wide_pane_g_ParamLimits

0xf671,	// (0x0003f79d) form_field_data_wide_pane_g

0xb63b,	// (0x0003b767) grid_touch_3_pane_ParamLimits

0xb63b,	// (0x0003b767) grid_touch_3_pane

0xcd23,	// (0x0003ce4f) cell_touch_3_pane_ParamLimits

0xcd23,	// (0x0003ce4f) cell_touch_3_pane

0xbc35,	// (0x0003bd61) cell_touch_3_pane_g1

0xbc35,	// (0x0003bd61) cell_touch_3_pane_g2

0x0001,

0xfb35,	// (0x0003fc61) cell_touch_3_pane_g

0x24b8,	// (0x000325e4) cont_query_data_pane

0x24c0,	// (0x000325ec) cont_query_data_pane_cp1

0xcd56,	// (0x0003ce82) button_value_adjust_pane_cp7

0xcd5e,	// (0x0003ce8a) query_popup_pane_cp3

0x676a,	// (0x00036896) bg_popup_sub_pane_cp22_ParamLimits

0x6780,	// (0x000368ac) navi_navi_volume_pane_cp2

0x679b,	// (0x000368c7) popup_side_volume_key_window_g2

0x67aa,	// (0x000368d6) popup_side_volume_key_window_g3

0x0002,

0xf707,	// (0x0003f833) popup_side_volume_key_window_g

0x67c7,	// (0x000368f3) popup_side_volume_key_window_t2

0x0001,

0xf70e,	// (0x0003f83a) popup_side_volume_key_window_t

0x6c4f,	// (0x00036d7b) popup_side_volume_key_window_ParamLimits

0x5e8d,	// (0x00035fb9) list_double_graphic_pane_g4_ParamLimits

0x5e8d,	// (0x00035fb9) list_double_graphic_pane_g4

0xac3c,	// (0x0003ad68) list_single_2heading_msg_pane_ParamLimits

0xac3c,	// (0x0003ad68) list_single_2heading_msg_pane

0x7f97,	// (0x000380c3) list_single_2heading_msg_pane_g1_ParamLimits

0x7f97,	// (0x000380c3) list_single_2heading_msg_pane_g1

0x46a6,	// (0x000347d2) list_single_2heading_msg_pane_g2_ParamLimits

0x46a6,	// (0x000347d2) list_single_2heading_msg_pane_g2

0x7fa3,	// (0x000380cf) list_single_2heading_msg_pane_g3_ParamLimits

0x7fa3,	// (0x000380cf) list_single_2heading_msg_pane_g3

0x7faf,	// (0x000380db) list_single_2heading_msg_pane_g4_ParamLimits

0x7faf,	// (0x000380db) list_single_2heading_msg_pane_g4

0x0003,

0xfca7,	// (0x0003fdd3) list_single_2heading_msg_pane_g_ParamLimits

0xfca7,	// (0x0003fdd3) list_single_2heading_msg_pane_g

0x7fc7,	// (0x000380f3) list_single_2heading_msg_pane_t1_ParamLimits

0x7fc7,	// (0x000380f3) list_single_2heading_msg_pane_t1

0x7fef,	// (0x0003811b) list_single_2heading_msg_pane_t2_ParamLimits

0x7fef,	// (0x0003811b) list_single_2heading_msg_pane_t2

0x8023,	// (0x0003814f) list_single_2heading_msg_pane_t3_ParamLimits

0x8023,	// (0x0003814f) list_single_2heading_msg_pane_t3

0x4a42,	// (0x00034b6e) list_single_2heading_msg_pane_t4_ParamLimits

0x4a42,	// (0x00034b6e) list_single_2heading_msg_pane_t4

0x0003,

0xfcb0,	// (0x0003fddc) list_single_2heading_msg_pane_t_ParamLimits

0xfcb0,	// (0x0003fddc) list_single_2heading_msg_pane_t

0xf4c0,	// (0x0003f5ec) title_pane_g4_ParamLimits

0xf4c0,	// (0x0003f5ec) title_pane_g4

0x6387,	// (0x000364b3) title_pane_stacon_g3_ParamLimits

0x6387,	// (0x000364b3) title_pane_stacon_g3

0xc87f,	// (0x0003c9ab) list_single_2graphic_im_pane_g4_ParamLimits

0xc87f,	// (0x0003c9ab) list_single_2graphic_im_pane_g4

0xa6f4,	// (0x0003a820) popup_side_volume_key_window_cp

0xaf63,	// (0x0003b08f) main_idle_act2_pane_t1

0x7602,	// (0x0003772e) toolbar_button_pane_g10

0x5cf8,	// (0x00035e24) popup_toolbar_window_cp1

0xb72a,	// (0x0003b856) clock_nsta_pane_cp_t1

0xb72a,	// (0x0003b856) clock_nsta_pane_cp_t2

0x0001,

0xfaab,	// (0x0003fbd7) clock_nsta_pane_cp_t

0x6780,	// (0x000368ac) navi_navi_volume_pane_cp2_ParamLimits

0x678f,	// (0x000368bb) popup_side_volume_key_window_g1_ParamLimits

0x679b,	// (0x000368c7) popup_side_volume_key_window_g2_ParamLimits

0x67aa,	// (0x000368d6) popup_side_volume_key_window_g3_ParamLimits

0xf707,	// (0x0003f833) popup_side_volume_key_window_g_ParamLimits

0x7b47,	// (0x00037c73) fep_hwr_aid_pane

0x7bf0,	// (0x00037d1c) bg_fep_hwr_top_pane_g4_ParamLimits

0xbc7e,	// (0x0003bdaa) fep_hwr_top_pane_g1_ParamLimits

0xbc90,	// (0x0003bdbc) fep_hwr_top_pane_g2_ParamLimits

0x7c10,	// (0x00037d3c) fep_hwr_top_pane_g3_ParamLimits

0xfb00,	// (0x0003fc2c) fep_hwr_top_pane_g_ParamLimits

0x7c25,	// (0x00037d51) fep_hwr_top_text_pane_ParamLimits

0xa4a9,	// (0x0003a5d5) aid_touch_tab_arrow_arrow_2

0xa4b2,	// (0x0003a5de) aid_touch_tab_arrow_left_2

0x7b5b,	// (0x00037c87) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7b92,	// (0x00037cbe) fep_hwr_prediction_pane

0xbde6,	// (0x0003bf12) fep_vkb_prediction_pane

0xbeec,	// (0x0003c018) fep_vkb_side_pane_g3_ParamLimits

0xbeec,	// (0x0003c018) fep_vkb_side_pane_g3

0x7db4,	// (0x00037ee0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7e25,	// (0x00037f51) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7e32,	// (0x00037f5e) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbaf,	// (0x0003fcdb) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x805c,	// (0x00038188) fep_hwr_prediction_pane_g1

0x8066,	// (0x00038192) fep_hwr_prediction_pane_g2

0x806e,	// (0x0003819a) fep_hwr_prediction_pane_g3

0x8076,	// (0x000381a2) fep_hwr_prediction_pane_g4

0x0003,

0xfcb9,	// (0x0003fde5) fep_hwr_prediction_pane_g

0xcd85,	// (0x0003ceb1) fep_vkb_prediction_pane_g1

0xcd8f,	// (0x0003cebb) fep_vkb_prediction_pane_g2

0xcd97,	// (0x0003cec3) fep_vkb_prediction_pane_g3

0xcd9f,	// (0x0003cecb) fep_vkb_prediction_pane_g4

0x0003,

0xfcc2,	// (0x0003fdee) fep_vkb_prediction_pane_g

0x7953,	// (0x00037a7f) slider_set_pane_g3

0x7967,	// (0x00037a93) slider_set_pane_g4

0x797f,	// (0x00037aab) slider_set_pane_g5

0x7953,	// (0x00037a7f) slider_set_pane_g6

0x7995,	// (0x00037ac1) slider_set_pane_g7

0xab6f,	// (0x0003ac9b) slider_form_pane_g3

0xab78,	// (0x0003aca4) slider_form_pane_g4

0xab80,	// (0x0003acac) slider_form_pane_g5

0xab6f,	// (0x0003ac9b) slider_form_pane_g6

0xab88,	// (0x0003acb4) slider_form_pane_g7

0xb211,	// (0x0003b33d) slider_set_pane_vc_g3

0xb21a,	// (0x0003b346) slider_set_pane_vc_g4

0xb223,	// (0x0003b34f) slider_set_pane_vc_g5

0xb211,	// (0x0003b33d) slider_set_pane_vc_g6

0xb22c,	// (0x0003b358) slider_set_pane_vc_g7

0xb400,	// (0x0003b52c) slider_form_pane_vc_g1

0xb409,	// (0x0003b535) slider_form_pane_vc_g2

0xb412,	// (0x0003b53e) slider_form_pane_vc_g3

0xb400,	// (0x0003b52c) slider_form_pane_vc_g4

0xb41b,	// (0x0003b547) slider_form_pane_vc_g5

0x0004,

0xfa7d,	// (0x0003fba9) slider_form_pane_vc_g

0x5708,	// (0x00035834) main_idle_act3_pane

0xcda7,	// (0x0003ced3) ai3_links_pane

0xcdb0,	// (0x0003cedc) popup_ai3_data_window_ParamLimits

0xcdb0,	// (0x0003cedc) popup_ai3_data_window

0xf4a2,	// (0x0003f5ce) grid_ai3_links_pane

0xcdce,	// (0x0003cefa) cell_ai3_links_pane_ParamLimits

0xcdce,	// (0x0003cefa) cell_ai3_links_pane

0xcde8,	// (0x0003cf14) bg_popup_sub_pane_cp11

0xcdf5,	// (0x0003cf21) cell_ai3_links_pane_g1

0xf4a2,	// (0x0003f5ce) bg_popup_sub_pane_cp12

0xce1a,	// (0x0003cf46) heading_ai3_data_pane

0xce22,	// (0x0003cf4e) list_ai3_gene_pane

0xce2e,	// (0x0003cf5a) popup_ai3_data_window_g1

0xce36,	// (0x0003cf62) heading_ai3_data_pane_g1

0xce3e,	// (0x0003cf6a) heading_ai3_data_pane_t1

0xce4c,	// (0x0003cf78) list_double_ai3_gene_pane_ParamLimits

0xce4c,	// (0x0003cf78) list_double_ai3_gene_pane

0xce59,	// (0x0003cf85) list_single_ai3_gene_pane_ParamLimits

0xce59,	// (0x0003cf85) list_single_ai3_gene_pane

0xbbfa,	// (0x0003bd26) list_highlight_pane_cp7_ParamLimits

0xbbfa,	// (0x0003bd26) list_highlight_pane_cp7

0xce66,	// (0x0003cf92) list_single_a13_gene_pane_t1_ParamLimits

0xce66,	// (0x0003cf92) list_single_a13_gene_pane_t1

0xce7d,	// (0x0003cfa9) list_single_ai3_gene_pane_g1

0xce86,	// (0x0003cfb2) list_single_ai3_gene_pane_g2

0x0001,

0xfccb,	// (0x0003fdf7) list_single_ai3_gene_pane_g

0xce8e,	// (0x0003cfba) list_double_ai3_gene_pane_g1_ParamLimits

0xce8e,	// (0x0003cfba) list_double_ai3_gene_pane_g1

0xce9a,	// (0x0003cfc6) list_double_ai3_gene_pane_t1_ParamLimits

0xce9a,	// (0x0003cfc6) list_double_ai3_gene_pane_t1

0xceb6,	// (0x0003cfe2) list_double_ai3_gene_pane_t2_ParamLimits

0xceb6,	// (0x0003cfe2) list_double_ai3_gene_pane_t2

0xcecb,	// (0x0003cff7) list_double_ai3_gene_pane_t3_ParamLimits

0xcecb,	// (0x0003cff7) list_double_ai3_gene_pane_t3

0x0002,

0xfcd0,	// (0x0003fdfc) list_double_ai3_gene_pane_t_ParamLimits

0xfcd0,	// (0x0003fdfc) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4a38,	// (0x00034b64) aid_size_min_col_2

0xcd6f,	// (0x0003ce9b) aid_size_min_msg_ParamLimits

0xcd6f,	// (0x0003ce9b) aid_size_min_msg

0xbff8,	// (0x0003c124) fep_vkb_top_text_pane_g2_ParamLimits

0xbff8,	// (0x0003c124) fep_vkb_top_text_pane_g2

0x0001,

0xfb30,	// (0x0003fc5c) fep_vkb_top_text_pane_g_ParamLimits

0xfb30,	// (0x0003fc5c) fep_vkb_top_text_pane_g

0x5708,	// (0x00035834) main_hc_apps_shell_pane

0xcee8,	// (0x0003d014) grid_hc_apps_pane_ParamLimits

0xcee8,	// (0x0003d014) grid_hc_apps_pane

0xcef7,	// (0x0003d023) list_hc_apps_pane

0xceff,	// (0x0003d02b) scroll_pane_cp37_ParamLimits

0xceff,	// (0x0003d02b) scroll_pane_cp37

0xcf0b,	// (0x0003d037) cell_hc_apps_pane_ParamLimits

0xcf0b,	// (0x0003d037) cell_hc_apps_pane

0xcfc3,	// (0x0003d0ef) cell_hc_apps_pane_g1_ParamLimits

0xcfc3,	// (0x0003d0ef) cell_hc_apps_pane_g1

0xcff4,	// (0x0003d120) cell_hc_apps_pane_g2_ParamLimits

0xcff4,	// (0x0003d120) cell_hc_apps_pane_g2

0xd010,	// (0x0003d13c) cell_hc_apps_pane_g3_ParamLimits

0xd010,	// (0x0003d13c) cell_hc_apps_pane_g3

0x0002,

0xfcd7,	// (0x0003fe03) cell_hc_apps_pane_g_ParamLimits

0xfcd7,	// (0x0003fe03) cell_hc_apps_pane_g

0xd032,	// (0x0003d15e) cell_hc_apps_pane_t1_ParamLimits

0xd032,	// (0x0003d15e) cell_hc_apps_pane_t1

0x23dc,	// (0x00032508) grid_highlight_pane_cp10_ParamLimits

0x23dc,	// (0x00032508) grid_highlight_pane_cp10

0xd072,	// (0x0003d19e) list_single_hc_apps_pane_ParamLimits

0xd072,	// (0x0003d19e) list_single_hc_apps_pane

0xd0b1,	// (0x0003d1dd) list_single_hc_apps_pane_g1

0x807e,	// (0x000381aa) list_single_hc_apps_pane_g2

0x0001,

0xfcde,	// (0x0003fe0a) list_single_hc_apps_pane_g

0x8097,	// (0x000381c3) list_single_hc_apps_pane_g2_copy1

0x80b3,	// (0x000381df) list_single_hc_apps_pane_t1

0xf504,	// (0x0003f630) bg_set_opt_pane_cp_ParamLimits

0x5a49,	// (0x00035b75) setting_slider_pane_t1_ParamLimits

0x5a62,	// (0x00035b8e) setting_slider_pane_t2_ParamLimits

0x5a7c,	// (0x00035ba8) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003f68a) setting_slider_pane_t_ParamLimits

0x5a94,	// (0x00035bc0) slider_set_pane_ParamLimits

0x6e7b,	// (0x00036fa7) control_pane_g5_ParamLimits

0x6e7b,	// (0x00036fa7) control_pane_g5

0xa9a2,	// (0x0003aace) slider_set_pane_g1_ParamLimits

0x7947,	// (0x00037a73) slider_set_pane_g2_ParamLimits

0x7953,	// (0x00037a7f) slider_set_pane_g3_ParamLimits

0x7967,	// (0x00037a93) slider_set_pane_g4_ParamLimits

0x797f,	// (0x00037aab) slider_set_pane_g5_ParamLimits

0x7953,	// (0x00037a7f) slider_set_pane_g6_ParamLimits

0x7995,	// (0x00037ac1) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x0003fa86) slider_set_pane_g_ParamLimits

0x6d3f,	// (0x00036e6b) navi_icon_text_pane_ParamLimits

0x9148,	// (0x00039274) aid_fill_nsta_2_ParamLimits

0x9189,	// (0x000392b5) aid_touch_tab_arrow_left_ParamLimits

0x9195,	// (0x000392c1) aid_touch_tab_arrow_right_ParamLimits

0x9201,	// (0x0003932d) clock_nsta_pane_ParamLimits

0xa48b,	// (0x0003a5b7) navi_icon_pane_g1_ParamLimits

0xa497,	// (0x0003a5c3) navi_text_pane_t1_ParamLimits

0xb847,	// (0x0003b973) navi_icon_text_pane_g1_ParamLimits

0xb853,	// (0x0003b97f) navi_icon_text_pane_t1_ParamLimits

0xd0b1,	// (0x0003d1dd) list_single_hc_apps_pane_g1_ParamLimits

0x807e,	// (0x000381aa) list_single_hc_apps_pane_g2_ParamLimits

0xfcde,	// (0x0003fe0a) list_single_hc_apps_pane_g_ParamLimits

0x8097,	// (0x000381c3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x80b3,	// (0x000381df) list_single_hc_apps_pane_t1_ParamLimits

0x587d,	// (0x000359a9) popup_toolbar2_fixed_window_ParamLimits

0x587d,	// (0x000359a9) popup_toolbar2_fixed_window

0x74f4,	// (0x00037620) popup_toolbar2_float_window

0xf4a2,	// (0x0003f5ce) bg_popup_sub_pane_cp27

0xd0ca,	// (0x0003d1f6) grid_toolbar2_float_pane

0xf4a2,	// (0x0003f5ce) bg_popup_sub_pane_cp26

0xd0ca,	// (0x0003d1f6) grid_toolbar2_fixed_pane

0xd0d2,	// (0x0003d1fe) cell_toolbar2_fixed_pane_ParamLimits

0xd0d2,	// (0x0003d1fe) cell_toolbar2_fixed_pane

0xd0e2,	// (0x0003d20e) cell_toolbar2_fixed_pane_g1

0xd0eb,	// (0x0003d217) toolbar2_fixed_button_pane

0x9626,	// (0x00039752) toolbar2_fixed_button_pane_g1

0x9636,	// (0x00039762) toolbar2_fixed_button_pane_g2

0x962e,	// (0x0003975a) toolbar2_fixed_button_pane_g3

0x9646,	// (0x00039772) toolbar2_fixed_button_pane_g4

0x963e,	// (0x0003976a) toolbar2_fixed_button_pane_g5

0x964e,	// (0x0003977a) toolbar2_fixed_button_pane_g6

0x9656,	// (0x00039782) toolbar2_fixed_button_pane_g7

0x9666,	// (0x00039792) toolbar2_fixed_button_pane_g8

0x965e,	// (0x0003978a) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x0003f988) toolbar2_fixed_button_pane_g

0xd0f3,	// (0x0003d21f) cell_toolbar2_float_pane_ParamLimits

0xd0f3,	// (0x0003d21f) cell_toolbar2_float_pane

0xd104,	// (0x0003d230) cell_toolbar2_float_pane_g1

0xd0eb,	// (0x0003d217) toolbar2_fixed_button_pane_cp

0xbd54,	// (0x0003be80) fep_vkb_accented_list_pane_ParamLimits

0xbd54,	// (0x0003be80) fep_vkb_accented_list_pane

0x7d94,	// (0x00037ec0) bg_popup_fep_shadow_pane_g9

0x8dc7,	// (0x00038ef3) bg_popup_fep_shadow_pane_cp3

0x29f7,	// (0x00032b23) list_accented_list_pane

0xd10d,	// (0x0003d239) list_single_accented_list_pane_ParamLimits

0xd10d,	// (0x0003d239) list_single_accented_list_pane

0x8dc7,	// (0x00038ef3) list_highlight_pane_cp10

0xd11e,	// (0x0003d24a) list_single_accented_list_pane_t1

0x743a,	// (0x00037566) popup_slider_window_ParamLimits

0x743a,	// (0x00037566) popup_slider_window

0xcd66,	// (0x0003ce92) aid_indentation_list_msg

0xd1ee,	// (0x0003d31a) bg_popup_window_pane_cp19

0xd25a,	// (0x0003d386) popup_slider_window_g1

0xd276,	// (0x0003d3a2) popup_slider_window_g2

0xd292,	// (0x0003d3be) popup_slider_window_g3

0x0005,

0xfce3,	// (0x0003fe0f) popup_slider_window_g

0xd2f8,	// (0x0003d424) popup_slider_window_t1

0xd36c,	// (0x0003d498) small_volume_slider_vertical_pane

0xbc35,	// (0x0003bd61) small_volume_slider_vertical_pane_g1

0xbc35,	// (0x0003bd61) small_volume_slider_vertical_pane_g2

0xd388,	// (0x0003d4b4) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf5,	// (0x0003fe21) small_volume_slider_vertical_pane_g

0x562b,	// (0x00035757) area_side_right_pane_ParamLimits

0x562b,	// (0x00035757) area_side_right_pane

0x80e1,	// (0x0003820d) aid_size_side_button_ParamLimits

0x80e1,	// (0x0003820d) aid_size_side_button

0x80f5,	// (0x00038221) grid_sctrl_middle_pane_ParamLimits

0x80f5,	// (0x00038221) grid_sctrl_middle_pane

0x8114,	// (0x00038240) sctrl_sk_bottom_pane

0x8125,	// (0x00038251) sctrl_sk_top_pane

0x8137,	// (0x00038263) aid_touch_sctrl_top

0x8144,	// (0x00038270) bg_sctrl_sk_pane_ParamLimits

0x8144,	// (0x00038270) bg_sctrl_sk_pane

0x8152,	// (0x0003827e) sctrl_sk_top_pane_g1

0x815f,	// (0x0003828b) sctrl_sk_top_pane_t1

0x8137,	// (0x00038263) aid_touch_sctrl_bottom

0x8144,	// (0x00038270) bg_sctrl_sk_pane_cp_ParamLimits

0x8144,	// (0x00038270) bg_sctrl_sk_pane_cp

0x817a,	// (0x000382a6) sctrl_sk_bottom_pane_g1

0x815f,	// (0x0003828b) sctrl_sk_bottom_pane_t1

0x8183,	// (0x000382af) cell_sctrl_middle_pane_ParamLimits

0x8183,	// (0x000382af) cell_sctrl_middle_pane

0x81a0,	// (0x000382cc) aid_touch_sctrl_middle_ParamLimits

0x81a0,	// (0x000382cc) aid_touch_sctrl_middle

0x81b2,	// (0x000382de) bg_sctrl_middle_pane_ParamLimits

0x81b2,	// (0x000382de) bg_sctrl_middle_pane

0x7db4,	// (0x00037ee0) cell_sctrl_middle_pane_g1_ParamLimits

0x7db4,	// (0x00037ee0) cell_sctrl_middle_pane_g1

0x81c0,	// (0x000382ec) cell_sctrl_middle_pane_g2_ParamLimits

0x81c0,	// (0x000382ec) cell_sctrl_middle_pane_g2

0x0001,

0xfd01,	// (0x0003fe2d) cell_sctrl_middle_pane_g_ParamLimits

0xfd01,	// (0x0003fe2d) cell_sctrl_middle_pane_g

0x9626,	// (0x00039752) bg_sctrl_middle_pane_g1

0x962e,	// (0x0003975a) bg_sctrl_middle_pane_g2

0x9636,	// (0x00039762) bg_sctrl_middle_pane_g3

0x963e,	// (0x0003976a) bg_sctrl_middle_pane_g4

0x9646,	// (0x00039772) bg_sctrl_middle_pane_g5

0x964e,	// (0x0003977a) bg_sctrl_middle_pane_g6

0x9656,	// (0x00039782) bg_sctrl_middle_pane_g7

0x965e,	// (0x0003978a) bg_sctrl_middle_pane_g8

0x0007,

0xfd06,	// (0x0003fe32) bg_sctrl_middle_pane_g

0x9666,	// (0x00039792) bg_sctrl_middle_pane_g8_copy1

0x9626,	// (0x00039752) bg_sctrl_sk_pane_g1

0x9636,	// (0x00039762) bg_sctrl_sk_pane_g2

0x962e,	// (0x0003975a) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x0003f988) bg_sctrl_sk_pane_g

0x2820,	// (0x0003294c) aid_size_touch_scroll_bar

0x9646,	// (0x00039772) bg_sctrl_sk_pane_g4

0x963e,	// (0x0003976a) bg_sctrl_sk_pane_g5

0x964e,	// (0x0003977a) bg_sctrl_sk_pane_g6

0x9656,	// (0x00039782) bg_sctrl_sk_pane_g7

0x9666,	// (0x00039792) bg_sctrl_sk_pane_g8

0x965e,	// (0x0003978a) bg_sctrl_sk_pane_g9

0x7051,	// (0x0003717d) popup_fep_china_hwr2_fs_candidate_window

0x705b,	// (0x00037187) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x705b,	// (0x00037187) popup_fep_china_hwr2_fs_control_window

0x7db4,	// (0x00037ee0) sctrl_sk_top_pane_g2

0x0001,

0xfcfc,	// (0x0003fe28) sctrl_sk_top_pane_g

0xd391,	// (0x0003d4bd) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd391,	// (0x0003d4bd) aid_fep_china_hwr2_fs_cell

0xd3a4,	// (0x0003d4d0) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd3a4,	// (0x0003d4d0) bg_popup_fep_shadow_pane_cp4

0xd3bd,	// (0x0003d4e9) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd3bd,	// (0x0003d4e9) bg_popup_fep_shadow_pane_cp5

0xd3cf,	// (0x0003d4fb) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd3cf,	// (0x0003d4fb) popup_fep_china_hwr2_fs_control_bar_grid

0xd3df,	// (0x0003d50b) popup_fep_china_hwr2_fs_control_funtion_grid

0xd3e7,	// (0x0003d513) aid_fep_china_hwr2_fs_candi_cell

0xf4a2,	// (0x0003f5ce) bg_popup_fep_shadow_pane_cp6

0xd3f1,	// (0x0003d51d) popup_fep_china_hwr2_fs_candidate_grid

0xd3fb,	// (0x0003d527) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd3fb,	// (0x0003d527) cell_fep_china_hwr2_fs_funtion_grid

0xbc35,	// (0x0003bd61) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd413,	// (0x0003d53f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd413,	// (0x0003d53f) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd421,	// (0x0003d54d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd421,	// (0x0003d54d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd17,	// (0x0003fe43) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd17,	// (0x0003fe43) cell_fep_china_hwr2_fs_funtion_grid_g

0xd437,	// (0x0003d563) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd437,	// (0x0003d563) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd44c,	// (0x0003d578) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd44c,	// (0x0003d578) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1c,	// (0x0003fe48) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1c,	// (0x0003fe48) cell_fep_china_hwr2_fs_funtion_grid_t

0xd468,	// (0x0003d594) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd470,	// (0x0003d59c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd478,	// (0x0003d5a4) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd21,	// (0x0003fe4d) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd480,	// (0x0003d5ac) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd480,	// (0x0003d5ac) cell_fep_china_hwr2_fs_candidate_grid

0xd49f,	// (0x0003d5cb) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd4a7,	// (0x0003d5d3) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbc35,	// (0x0003bd61) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbc35,	// (0x0003bd61) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb35,	// (0x0003fc61) cell_fep_china_hwr2_fs_candidate_grid_g

0xd4af,	// (0x0003d5db) cell_fep_china_hwr2_fs_candidate_grid_t1

0x920e,	// (0x0003933a) clock_nsta_pane_cp_24_ParamLimits

0x920e,	// (0x0003933a) clock_nsta_pane_cp_24

0x928e,	// (0x000393ba) indicator_nsta_pane_cp_24_ParamLimits

0x928e,	// (0x000393ba) indicator_nsta_pane_cp_24

0xa307,	// (0x0003a433) heading_pane_g1

0x0001,

0xf8c1,	// (0x0003f9ed) heading_pane_g

0xadaa,	// (0x0003aed6) grid_sct_catagory_button_pane

0xaddc,	// (0x0003af08) scroll_pane_cp5_ParamLimits

0xb895,	// (0x0003b9c1) button_value_adjust_pane_cp5_ParamLimits

0xb895,	// (0x0003b9c1) button_value_adjust_pane_cp5

0xb97a,	// (0x0003baa6) form2_midp_time_pane_ParamLimits

0xd4bd,	// (0x0003d5e9) cell_sct_catagory_button_pane_ParamLimits

0xd4bd,	// (0x0003d5e9) cell_sct_catagory_button_pane

0xbbfa,	// (0x0003bd26) bg_button_pane_cp01_ParamLimits

0xbbfa,	// (0x0003bd26) bg_button_pane_cp01

0xbc35,	// (0x0003bd61) cell_sct_catagory_button_pane_g1

0x747b,	// (0x000375a7) popup_tb_extension_window

0xd4cf,	// (0x0003d5fb) aid_size_cell_ext_ParamLimits

0xd4cf,	// (0x0003d5fb) aid_size_cell_ext

0x23dc,	// (0x00032508) bg_tb_trans_pane_cp1_ParamLimits

0x23dc,	// (0x00032508) bg_tb_trans_pane_cp1

0xd4ef,	// (0x0003d61b) grid_tb_ext_pane_ParamLimits

0xd4ef,	// (0x0003d61b) grid_tb_ext_pane

0xd51d,	// (0x0003d649) cell_tb_ext_pane_ParamLimits

0xd51d,	// (0x0003d649) cell_tb_ext_pane

0xd534,	// (0x0003d660) cell_tb_ext_pane_g1_ParamLimits

0xd534,	// (0x0003d660) cell_tb_ext_pane_g1

0xd551,	// (0x0003d67d) cell_tb_ext_pane_t1

0x23dc,	// (0x00032508) list_highlight_pane_cp11_ParamLimits

0x23dc,	// (0x00032508) list_highlight_pane_cp11

0x589c,	// (0x000359c8) popup_uni_indicator_window_ParamLimits

0x589c,	// (0x000359c8) popup_uni_indicator_window

0x28e7,	// (0x00032a13) bg_popup_sub_pane_cp14

0xd56c,	// (0x0003d698) list_uniindi_pane

0xd578,	// (0x0003d6a4) uniindi_top_pane

0x23dc,	// (0x00032508) bg_uniindi_top_pane

0xd599,	// (0x0003d6c5) uniindi_top_pane_g1

0xd5af,	// (0x0003d6db) uniindi_top_pane_g2

0x0003,

0xfd28,	// (0x0003fe54) uniindi_top_pane_g

0xd5d9,	// (0x0003d705) uniindi_top_pane_t1

0xd605,	// (0x0003d731) list_single_uniindi_pane_ParamLimits

0xd605,	// (0x0003d731) list_single_uniindi_pane

0xbc35,	// (0x0003bd61) bg_uniindi_top_pane_g1

0xd617,	// (0x0003d743) list_single_uniindi_pane_g1

0xd62a,	// (0x0003d756) list_single_uniindi_pane_t1

0x5708,	// (0x00035834) control_bg_pane

0xd64f,	// (0x0003d77b) bg_sctrl_sk_pane_cp1

0xd658,	// (0x0003d784) bg_sctrl_sk_pane_cp2

0xd661,	// (0x0003d78d) control_bg_pane_g1

0xd66a,	// (0x0003d796) control_bg_pane_g2

0x0001,

0xfd31,	// (0x0003fe5d) control_bg_pane_g

0xb6de,	// (0x0003b80a) cell_indicator_nsta_pane_g1_ParamLimits

0xb6ec,	// (0x0003b818) cell_indicator_nsta_pane_g2_ParamLimits

0xfa99,	// (0x0003fbc5) cell_indicator_nsta_pane_g_ParamLimits

0x465c,	// (0x00034788) form2_midp_time_pane_t1_ParamLimits

0x6faf,	// (0x000370db) main_idle_act4_pane_ParamLimits

0x6faf,	// (0x000370db) main_idle_act4_pane

0x747b,	// (0x000375a7) popup_tb_extension_window_ParamLimits

0xd50f,	// (0x0003d63b) tb_ext_find_pane_ParamLimits

0xd50f,	// (0x0003d63b) tb_ext_find_pane

0xd673,	// (0x0003d79f) ai_gene_pane_1_cp1

0x8f11,	// (0x0003903d) ai_gene_pane_2_cp1

0xd67b,	// (0x0003d7a7) list_single_idle_plugin_calendar_pane

0xd684,	// (0x0003d7b0) list_single_idle_plugin_notification_pane

0xd68d,	// (0x0003d7b9) list_single_idle_plugin_player_pane

0xd696,	// (0x0003d7c2) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd696,	// (0x0003d7c2) list_single_idle_plugin_shortcut_pane

0xd6b8,	// (0x0003d7e4) main_idle_act4_pane_t1

0xd6ca,	// (0x0003d7f6) main_idle_act4_pane_t2

0x0001,

0xfd36,	// (0x0003fe62) main_idle_act4_pane_t

0xd6dc,	// (0x0003d808) middle_sk_idle_act4_pane_ParamLimits

0xd6dc,	// (0x0003d808) middle_sk_idle_act4_pane

0xd6f2,	// (0x0003d81e) popup_clock_digital_analogue_window_cp2

0xd70c,	// (0x0003d838) shortcut_wheel_idle_act4_pane_ParamLimits

0xd70c,	// (0x0003d838) shortcut_wheel_idle_act4_pane

0xbc35,	// (0x0003bd61) shortcut_wheel_idle_act4_pane_g1

0xbc35,	// (0x0003bd61) shortcut_wheel_idle_act4_pane_g2

0xbc35,	// (0x0003bd61) shortcut_wheel_idle_act4_pane_g3

0xbc35,	// (0x0003bd61) shortcut_wheel_idle_act4_pane_g4

0xbc35,	// (0x0003bd61) shortcut_wheel_idle_act4_pane_g5

0xd720,	// (0x0003d84c) shortcut_wheel_idle_act4_pane_g6

0xd728,	// (0x0003d854) shortcut_wheel_idle_act4_pane_g7

0xd730,	// (0x0003d85c) shortcut_wheel_idle_act4_pane_g8

0xd738,	// (0x0003d864) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3b,	// (0x0003fe67) shortcut_wheel_idle_act4_pane_g

0xbe98,	// (0x0003bfc4) middle_sk_idle_act4_pane_g1_ParamLimits

0xbe98,	// (0x0003bfc4) middle_sk_idle_act4_pane_g1

0xd79c,	// (0x0003d8c8) middle_sk_idle_act4_pane_g2_ParamLimits

0xd79c,	// (0x0003d8c8) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5e,	// (0x0003fe8a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5e,	// (0x0003fe8a) middle_sk_idle_act4_pane_g

0xd7a8,	// (0x0003d8d4) middle_sk_idle_act4_pane_t1_ParamLimits

0xd7a8,	// (0x0003d8d4) middle_sk_idle_act4_pane_t1

0xd7c5,	// (0x0003d8f1) grid_ai_shortcut_pane_ParamLimits

0xd7c5,	// (0x0003d8f1) grid_ai_shortcut_pane

0xd7de,	// (0x0003d90a) list_highlight_pane_cp16_ParamLimits

0xd7de,	// (0x0003d90a) list_highlight_pane_cp16

0xd7eb,	// (0x0003d917) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd7eb,	// (0x0003d917) list_single_idle_plugin_shortcut_pane_g1

0xd7f7,	// (0x0003d923) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd7f7,	// (0x0003d923) list_single_idle_plugin_shortcut_pane_g2

0xd811,	// (0x0003d93d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd811,	// (0x0003d93d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd63,	// (0x0003fe8f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd63,	// (0x0003fe8f) list_single_idle_plugin_shortcut_pane_g

0xd824,	// (0x0003d950) cell_ai_shortcut_pane_ParamLimits

0xd824,	// (0x0003d950) cell_ai_shortcut_pane

0xd847,	// (0x0003d973) cell_ai_shortcut_pane_g1_ParamLimits

0xd847,	// (0x0003d973) cell_ai_shortcut_pane_g1

0xd673,	// (0x0003d79f) ai_gene_pane_1_cp2

0xd869,	// (0x0003d995) ai_gene_pane_2_cp2

0xd871,	// (0x0003d99d) list_highlight_pane_cp15

0xd87a,	// (0x0003d9a6) list_single_idle_plugin_calendar_pane_g1

0xd871,	// (0x0003d99d) list_highlight_pane_cp17

0xd882,	// (0x0003d9ae) list_single_idle_plugin_calendar_pane_g1_copy1

0xd88a,	// (0x0003d9b6) list_single_idle_plugin_player_pane_g1

0xb011,	// (0x0003b13d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6a,	// (0x0003fe96) list_single_idle_plugin_player_pane_g

0xd892,	// (0x0003d9be) list_single_idle_plugin_player_pane_t1

0xd8a0,	// (0x0003d9cc) list_single_idle_plugin_player_pane_t2

0xd8ae,	// (0x0003d9da) list_single_idle_plugin_player_pane_t3

0xd8bc,	// (0x0003d9e8) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6f,	// (0x0003fe9b) list_single_idle_plugin_player_pane_t

0xd8ca,	// (0x0003d9f6) wait_bar_pane_cp15

0xd8d2,	// (0x0003d9fe) grid_ai_notification_pane

0xb011,	// (0x0003b13d) list_single_idle_plugin_notification_pane_g1

0xd8db,	// (0x0003da07) cell_ai_notification_pane_ParamLimits

0xd8db,	// (0x0003da07) cell_ai_notification_pane

0xd8e8,	// (0x0003da14) cell_ai_notification_pane_g1

0xd8f0,	// (0x0003da1c) cell_ai_notification_pane_t1

0xd8fe,	// (0x0003da2a) tb_ext_find_button_pane

0xd906,	// (0x0003da32) tb_ext_find_pane_g1

0xd90e,	// (0x0003da3a) tb_ext_find_pane_t1

0x6608,	// (0x00036734) tb_ext_find_button_pane_g1

0xd91c,	// (0x0003da48) tb_ext_find_button_pane_g2

0x0001,

0xfd78,	// (0x0003fea4) tb_ext_find_button_pane_g

0xd6b8,	// (0x0003d7e4) main_idle_act4_pane_t1_ParamLimits

0xd6ca,	// (0x0003d7f6) main_idle_act4_pane_t2_ParamLimits

0xfd36,	// (0x0003fe62) main_idle_act4_pane_t_ParamLimits

0xd6f2,	// (0x0003d81e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd700,	// (0x0003d82c) sat_plugin_idle_act4_pane_ParamLimits

0xd700,	// (0x0003d82c) sat_plugin_idle_act4_pane

0xd925,	// (0x0003da51) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd925,	// (0x0003da51) sat_plugin_idle_act4_pane_t1

0xd938,	// (0x0003da64) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd938,	// (0x0003da64) sat_plugin_idle_act4_pane_t2

0xd94b,	// (0x0003da77) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd94b,	// (0x0003da77) sat_plugin_idle_act4_pane_t3

0xd95e,	// (0x0003da8a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd95e,	// (0x0003da8a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7d,	// (0x0003fea9) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7d,	// (0x0003fea9) sat_plugin_idle_act4_pane_t

0x57cd,	// (0x000358f9) popup_battery_window_ParamLimits

0x57cd,	// (0x000358f9) popup_battery_window

0x23dc,	// (0x00032508) bg_popup_sub_pane_cp25_ParamLimits

0x23dc,	// (0x00032508) bg_popup_sub_pane_cp25

0xd971,	// (0x0003da9d) popup_battery_window_g1_ParamLimits

0xd971,	// (0x0003da9d) popup_battery_window_g1

0xd97d,	// (0x0003daa9) popup_battery_window_t1_ParamLimits

0xd97d,	// (0x0003daa9) popup_battery_window_t1

0xd98f,	// (0x0003dabb) popup_battery_window_t2_ParamLimits

0xd98f,	// (0x0003dabb) popup_battery_window_t2

0x0001,

0xfd86,	// (0x0003feb2) popup_battery_window_t_ParamLimits

0xfd86,	// (0x0003feb2) popup_battery_window_t

0x8ddb,	// (0x00038f07) midp_canvas_pane_ParamLimits

0x8e53,	// (0x00038f7f) midp_keypad_pane_ParamLimits

0x8e53,	// (0x00038f7f) midp_keypad_pane

0x90f6,	// (0x00039222) main_midp_pane_ParamLimits

0xb748,	// (0x0003b874) signal_pane_g2_cp_ParamLimits

0xd9ac,	// (0x0003dad8) aid_size_cell_midp_keypad_ParamLimits

0xd9ac,	// (0x0003dad8) aid_size_cell_midp_keypad

0xd9c6,	// (0x0003daf2) midp_keyp_game_grid_pane_ParamLimits

0xd9c6,	// (0x0003daf2) midp_keyp_game_grid_pane

0xd9e6,	// (0x0003db12) midp_keyp_rocker_pane_ParamLimits

0xd9e6,	// (0x0003db12) midp_keyp_rocker_pane

0xda15,	// (0x0003db41) midp_keyp_sk_left_pane_ParamLimits

0xda15,	// (0x0003db41) midp_keyp_sk_left_pane

0xda71,	// (0x0003db9d) midp_keyp_sk_right_pane_ParamLimits

0xda71,	// (0x0003db9d) midp_keyp_sk_right_pane

0xf4a2,	// (0x0003f5ce) bg_button_pane_cp03

0xdacd,	// (0x0003dbf9) midp_keyp_sk_left_pane_g1

0xf4a2,	// (0x0003f5ce) bg_button_pane_cp04

0xdacd,	// (0x0003dbf9) midp_keyp_sk_right_pane_g1

0xbc35,	// (0x0003bd61) midp_keyp_rocker_pane_g1

0xdad5,	// (0x0003dc01) keyp_game_cell_pane_ParamLimits

0xdad5,	// (0x0003dc01) keyp_game_cell_pane

0xf4a2,	// (0x0003f5ce) bg_button_pane_cp02

0xdae8,	// (0x0003dc14) keyp_game_cell_pane_g1

0x5817,	// (0x00035943) popup_fep_vkb2_window_ParamLimits

0x5817,	// (0x00035943) popup_fep_vkb2_window

0x81de,	// (0x0003830a) aid_size_cell_vkb2_ParamLimits

0x81de,	// (0x0003830a) aid_size_cell_vkb2

0x8232,	// (0x0003835e) popup_fep_vkb2_window_g1_ParamLimits

0x8232,	// (0x0003835e) popup_fep_vkb2_window_g1

0x827a,	// (0x000383a6) vkb2_area_bottom_pane_ParamLimits

0x827a,	// (0x000383a6) vkb2_area_bottom_pane

0x82ce,	// (0x000383fa) vkb2_area_keypad_pane_ParamLimits

0x82ce,	// (0x000383fa) vkb2_area_keypad_pane

0x8314,	// (0x00038440) vkb2_area_top_pane_ParamLimits

0x8314,	// (0x00038440) vkb2_area_top_pane

0x838e,	// (0x000384ba) vkb2_top_entry_pane_ParamLimits

0x838e,	// (0x000384ba) vkb2_top_entry_pane

0x83b8,	// (0x000384e4) vkb2_top_grid_left_pane_ParamLimits

0x83b8,	// (0x000384e4) vkb2_top_grid_left_pane

0x83d6,	// (0x00038502) vkb2_top_grid_right_pane_ParamLimits

0x83d6,	// (0x00038502) vkb2_top_grid_right_pane

0x83f4,	// (0x00038520) vkb2_cell_keypad_pane_ParamLimits

0x83f4,	// (0x00038520) vkb2_cell_keypad_pane

0x84c5,	// (0x000385f1) vkb2_area_bottom_grid_pane_ParamLimits

0x84c5,	// (0x000385f1) vkb2_area_bottom_grid_pane

0x84eb,	// (0x00038617) vkb2_area_bottom_pane_g1_ParamLimits

0x84eb,	// (0x00038617) vkb2_area_bottom_pane_g1

0x850f,	// (0x0003863b) vkb2_area_bottom_pane_g2_ParamLimits

0x850f,	// (0x0003863b) vkb2_area_bottom_pane_g2

0x853d,	// (0x00038669) vkb2_area_bottom_pane_g3_ParamLimits

0x853d,	// (0x00038669) vkb2_area_bottom_pane_g3

0x0002,

0xfd8b,	// (0x0003feb7) vkb2_area_bottom_pane_g_ParamLimits

0xfd8b,	// (0x0003feb7) vkb2_area_bottom_pane_g

0x859e,	// (0x000386ca) vkb2_top_cell_left_pane_ParamLimits

0x859e,	// (0x000386ca) vkb2_top_cell_left_pane

0xdaf9,	// (0x0003dc25) vkb2_top_entry_pane_g1_ParamLimits

0xdaf9,	// (0x0003dc25) vkb2_top_entry_pane_g1

0xdb07,	// (0x0003dc33) vkb2_top_entry_pane_t1_ParamLimits

0xdb07,	// (0x0003dc33) vkb2_top_entry_pane_t1

0xdb39,	// (0x0003dc65) vkb2_top_entry_pane_t2_ParamLimits

0xdb39,	// (0x0003dc65) vkb2_top_entry_pane_t2

0xdb6b,	// (0x0003dc97) vkb2_top_entry_pane_t3_ParamLimits

0xdb6b,	// (0x0003dc97) vkb2_top_entry_pane_t3

0x0002,

0xfd92,	// (0x0003febe) vkb2_top_entry_pane_t_ParamLimits

0xfd92,	// (0x0003febe) vkb2_top_entry_pane_t

0x85eb,	// (0x00038717) vkb2_top_grid_right_pane_g1_ParamLimits

0x85eb,	// (0x00038717) vkb2_top_grid_right_pane_g1

0x8601,	// (0x0003872d) vkb2_top_grid_right_pane_g2_ParamLimits

0x8601,	// (0x0003872d) vkb2_top_grid_right_pane_g2

0x8619,	// (0x00038745) vkb2_top_grid_right_pane_g3_ParamLimits

0x8619,	// (0x00038745) vkb2_top_grid_right_pane_g3

0x8631,	// (0x0003875d) vkb2_top_grid_right_pane_g4_ParamLimits

0x8631,	// (0x0003875d) vkb2_top_grid_right_pane_g4

0x0003,

0xfd99,	// (0x0003fec5) vkb2_top_grid_right_pane_g_ParamLimits

0xfd99,	// (0x0003fec5) vkb2_top_grid_right_pane_g

0x8647,	// (0x00038773) vkb2_top_cell_left_pane_g1

0x865e,	// (0x0003878a) vkb2_cell_keypad_pane_g1_ParamLimits

0x865e,	// (0x0003878a) vkb2_cell_keypad_pane_g1

0xdb8f,	// (0x0003dcbb) vkb2_cell_keypad_pane_t1_ParamLimits

0xdb8f,	// (0x0003dcbb) vkb2_cell_keypad_pane_t1

0x866c,	// (0x00038798) vkb2_cell_bottom_grid_pane_ParamLimits

0x866c,	// (0x00038798) vkb2_cell_bottom_grid_pane

0x86a5,	// (0x000387d1) vkb2_cell_bottom_grid_pane_g1

0xd740,	// (0x0003d86c) aid_call2_pane_cp02

0xd748,	// (0x0003d874) aid_call_pane_cp02

0xd750,	// (0x0003d87c) clock_digital_number_pane_cp10

0xd758,	// (0x0003d884) clock_digital_number_pane_cp11

0xd760,	// (0x0003d88c) clock_digital_number_pane_cp12

0xd768,	// (0x0003d894) clock_digital_number_pane_cp13

0xd770,	// (0x0003d89c) clock_digital_separator_pane_cp10

0x6608,	// (0x00036734) popup_clock_digital_analogue_window_cp2_g1

0x6608,	// (0x00036734) popup_clock_digital_analogue_window_cp2_g2

0xd778,	// (0x0003d8a4) popup_clock_digital_analogue_window_cp2_g3

0x6608,	// (0x00036734) popup_clock_digital_analogue_window_cp2_g4

0xd778,	// (0x0003d8a4) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4e,	// (0x0003fe7a) popup_clock_digital_analogue_window_cp2_g

0xd780,	// (0x0003d8ac) popup_clock_digital_analogue_window_cp2_t1

0xd78e,	// (0x0003d8ba) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd59,	// (0x0003fe85) popup_clock_digital_analogue_window_cp2_t

0xbc35,	// (0x0003bd61) clock_digital_number_pane_cp10_g1

0xbc35,	// (0x0003bd61) clock_digital_number_pane_cp10_g2

0x0001,

0xfb35,	// (0x0003fc61) clock_digital_number_pane_cp10_g

0xbc35,	// (0x0003bd61) clock_digital_separator_pane_cp10_g1

0xbc35,	// (0x0003bd61) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb35,	// (0x0003fc61) clock_digital_separator_pane_cp10_g

0xd5bb,	// (0x0003d6e7) uniindi_top_pane_g3

0xd5cc,	// (0x0003d6f8) uniindi_top_pane_g4

0x847f,	// (0x000385ab) vkb2_row_keypad_pane_ParamLimits

0x847f,	// (0x000385ab) vkb2_row_keypad_pane

0x86c1,	// (0x000387ed) vkb2_cell_t_keypad_pane_ParamLimits

0x86c1,	// (0x000387ed) vkb2_cell_t_keypad_pane

0x86d1,	// (0x000387fd) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x86d1,	// (0x000387fd) vkb2_cell_t_keypad_pane_cp08

0x86e6,	// (0x00038812) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x86e6,	// (0x00038812) vkb2_cell_t_keypad_pane_cp09

0x86fa,	// (0x00038826) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x86fa,	// (0x00038826) vkb2_cell_t_keypad_pane_cp01

0x870b,	// (0x00038837) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x870b,	// (0x00038837) vkb2_cell_t_keypad_pane_cp02

0x871c,	// (0x00038848) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x871c,	// (0x00038848) vkb2_cell_t_keypad_pane_cp03

0x872d,	// (0x00038859) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x872d,	// (0x00038859) vkb2_cell_t_keypad_pane_cp04

0x873e,	// (0x0003886a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x873e,	// (0x0003886a) vkb2_cell_t_keypad_pane_cp05

0x874f,	// (0x0003887b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x874f,	// (0x0003887b) vkb2_cell_t_keypad_pane_cp06

0x8762,	// (0x0003888e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8762,	// (0x0003888e) vkb2_cell_t_keypad_pane_cp07

0x8777,	// (0x000388a3) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8777,	// (0x000388a3) vkb2_cell_t_keypad_pane_cp10

0x7db4,	// (0x00037ee0) vkb2_cell_t_keypad_pane_g1

0xdba6,	// (0x0003dcd2) vkb2_cell_t_keypad_pane_t1

0x5708,	// (0x00035834) popup_grid_graphic2_window

0xdbb8,	// (0x0003dce4) aid_size_cell_graphic2_ParamLimits

0xdbb8,	// (0x0003dce4) aid_size_cell_graphic2

0xdbf0,	// (0x0003dd1c) bg_popup_window_pane_cp21_ParamLimits

0xdbf0,	// (0x0003dd1c) bg_popup_window_pane_cp21

0xdbfe,	// (0x0003dd2a) graphic2_pages_pane_ParamLimits

0xdbfe,	// (0x0003dd2a) graphic2_pages_pane

0xdc44,	// (0x0003dd70) grid_graphic2_control_pane_ParamLimits

0xdc44,	// (0x0003dd70) grid_graphic2_control_pane

0xdc82,	// (0x0003ddae) grid_graphic2_pane_ParamLimits

0xdc82,	// (0x0003ddae) grid_graphic2_pane

0xdcf8,	// (0x0003de24) cell_graphic2_pane

0x5708,	// (0x00035834) main_comp_mode_pane

0xce22,	// (0x0003cf4e) list_ai3_gene_pane_ParamLimits

0xd1ee,	// (0x0003d31a) bg_popup_window_pane_cp19_ParamLimits

0xd1fa,	// (0x0003d326) bg_touch_area_indi_pane_ParamLimits

0xd1fa,	// (0x0003d326) bg_touch_area_indi_pane

0xd210,	// (0x0003d33c) bg_touch_area_indi_pane_cp01_ParamLimits

0xd210,	// (0x0003d33c) bg_touch_area_indi_pane_cp01

0xd226,	// (0x0003d352) bg_touch_area_indi_pane_cp02_ParamLimits

0xd226,	// (0x0003d352) bg_touch_area_indi_pane_cp02

0xd240,	// (0x0003d36c) bg_touch_area_indi_pane_cp03_ParamLimits

0xd240,	// (0x0003d36c) bg_touch_area_indi_pane_cp03

0xd25a,	// (0x0003d386) popup_slider_window_g1_ParamLimits

0xd276,	// (0x0003d3a2) popup_slider_window_g2_ParamLimits

0xd292,	// (0x0003d3be) popup_slider_window_g3_ParamLimits

0xfce3,	// (0x0003fe0f) popup_slider_window_g_ParamLimits

0xd2f8,	// (0x0003d424) popup_slider_window_t1_ParamLimits

0xd36c,	// (0x0003d498) small_volume_slider_vertical_pane_ParamLimits

0xdcf8,	// (0x0003de24) cell_graphic2_pane_ParamLimits

0xdd4d,	// (0x0003de79) bg_button_pane_cp10_ParamLimits

0xdd4d,	// (0x0003de79) bg_button_pane_cp10

0xdd62,	// (0x0003de8e) bg_button_pane_cp11_ParamLimits

0xdd62,	// (0x0003de8e) bg_button_pane_cp11

0xdd77,	// (0x0003dea3) graphic2_pages_pane_g1_ParamLimits

0xdd77,	// (0x0003dea3) graphic2_pages_pane_g1

0xdd92,	// (0x0003debe) graphic2_pages_pane_g2_ParamLimits

0xdd92,	// (0x0003debe) graphic2_pages_pane_g2

0x0001,

0xfda7,	// (0x0003fed3) graphic2_pages_pane_g_ParamLimits

0xfda7,	// (0x0003fed3) graphic2_pages_pane_g

0xddaa,	// (0x0003ded6) graphic2_pages_pane_t1_ParamLimits

0xddaa,	// (0x0003ded6) graphic2_pages_pane_t1

0xddc0,	// (0x0003deec) cell_graphic2_control_pane_ParamLimits

0xddc0,	// (0x0003deec) cell_graphic2_control_pane

0xdde0,	// (0x0003df0c) cell_graphic2_pane_g1_ParamLimits

0xdde0,	// (0x0003df0c) cell_graphic2_pane_g1

0xdded,	// (0x0003df19) cell_graphic2_pane_g2_ParamLimits

0xdded,	// (0x0003df19) cell_graphic2_pane_g2

0xddfa,	// (0x0003df26) cell_graphic2_pane_g3_ParamLimits

0xddfa,	// (0x0003df26) cell_graphic2_pane_g3

0xde07,	// (0x0003df33) cell_graphic2_pane_g4_ParamLimits

0xde07,	// (0x0003df33) cell_graphic2_pane_g4

0xde14,	// (0x0003df40) cell_graphic2_pane_g5_ParamLimits

0xde14,	// (0x0003df40) cell_graphic2_pane_g5

0x0004,

0xfdac,	// (0x0003fed8) cell_graphic2_pane_g_ParamLimits

0xfdac,	// (0x0003fed8) cell_graphic2_pane_g

0xde2f,	// (0x0003df5b) cell_graphic2_pane_t1_ParamLimits

0xde2f,	// (0x0003df5b) cell_graphic2_pane_t1

0x969a,	// (0x000397c6) grid_highlight_pane_cp11_ParamLimits

0x969a,	// (0x000397c6) grid_highlight_pane_cp11

0x23dc,	// (0x00032508) bg_button_pane_cp05

0xde87,	// (0x0003dfb3) cell_graphic2_control_pane_g1

0xbc35,	// (0x0003bd61) bg_touch_area_indi_pane_g1

0xdeaf,	// (0x0003dfdb) aid_cmod_rocker_key_size

0xdeb9,	// (0x0003dfe5) aid_cmode_itu_key_size

0xdec3,	// (0x0003dfef) main_cmode_video_pane

0xdecd,	// (0x0003dff9) main_comp_mode_itu_pane

0xded9,	// (0x0003e005) main_comp_mode_rocker_pane

0xdee5,	// (0x0003e011) cell_cmode_rocker_pane_ParamLimits

0xdee5,	// (0x0003e011) cell_cmode_rocker_pane

0xdef9,	// (0x0003e025) cell_cmode_itu_pane_ParamLimits

0xdef9,	// (0x0003e025) cell_cmode_itu_pane

0x28e7,	// (0x00032a13) bg_button_pane_cp06_ParamLimits

0x28e7,	// (0x00032a13) bg_button_pane_cp06

0xbe98,	// (0x0003bfc4) cell_cmode_rocker_pane_g1_ParamLimits

0xbe98,	// (0x0003bfc4) cell_cmode_rocker_pane_g1

0xd413,	// (0x0003d53f) cell_cmode_rocker_pane_g2_ParamLimits

0xd413,	// (0x0003d53f) cell_cmode_rocker_pane_g2

0x0001,

0xfdbc,	// (0x0003fee8) cell_cmode_rocker_pane_g_ParamLimits

0xfdbc,	// (0x0003fee8) cell_cmode_rocker_pane_g

0xf4a2,	// (0x0003f5ce) bg_button_pane_cp07

0xdf10,	// (0x0003e03c) cell_cmode_itu_pane_g1

0xdf19,	// (0x0003e045) cell_cmode_itu_pane_t1

0xdf27,	// (0x0003e053) cell_cmode_itu_pane_t2

0x0001,

0xfdc1,	// (0x0003feed) cell_cmode_itu_pane_t

0xd63f,	// (0x0003d76b) aid_touch_ctrl_left

0xd647,	// (0x0003d773) aid_touch_ctrl_right

0xf4a2,	// (0x0003f5ce) compa_mode_pane

0xdf35,	// (0x0003e061) aid_cmod_rocker_key_size_cp

0xdf3f,	// (0x0003e06b) aid_cmode_itu_key_size_cp

0xdf49,	// (0x0003e075) compa_mode_pane_g1

0xdf51,	// (0x0003e07d) compa_mode_pane_g2

0xdf59,	// (0x0003e085) compa_mode_pane_g3

0x0002,

0xfdc6,	// (0x0003fef2) compa_mode_pane_g

0xdf61,	// (0x0003e08d) main_comp_mode_itu_pane_cp

0xdf69,	// (0x0003e095) main_comp_mode_rocker_pane_cp

0xdf71,	// (0x0003e09d) cell_cmode_itu_pane_cp_ParamLimits

0xdf71,	// (0x0003e09d) cell_cmode_itu_pane_cp

0xdf86,	// (0x0003e0b2) cell_cmode_rocker_pane_cp_ParamLimits

0xdf86,	// (0x0003e0b2) cell_cmode_rocker_pane_cp

0x28e7,	// (0x00032a13) bg_button_pane_cp06_cp_ParamLimits

0x28e7,	// (0x00032a13) bg_button_pane_cp06_cp

0xbe98,	// (0x0003bfc4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbe98,	// (0x0003bfc4) cell_cmode_rocker_pane_g1_cp

0xbc35,	// (0x0003bd61) cell_cmode_rocker_pane_g2_cp

0xf4a2,	// (0x0003f5ce) bg_button_pane_cp07_cp

0xdf98,	// (0x0003e0c4) cell_cmode_itu_pane_g1_cp

0xdfa1,	// (0x0003e0cd) cell_cmode_itu_pane_t1_cp

0xdfa1,	// (0x0003e0cd) cell_cmode_itu_pane_t2_cp

0xab5e,	// (0x0003ac8a) settings_code_pane_cp2

0xf504,	// (0x0003f630) bg_popup_window_pane_cp3_ParamLimits

0x25f0,	// (0x0003271c) heading_pane_cp3_ParamLimits

0x25fc,	// (0x00032728) listscroll_popup_graphic_pane_ParamLimits

0x7b47,	// (0x00037c73) fep_hwr_aid_pane_ParamLimits

0x8137,	// (0x00038263) aid_touch_sctrl_top_ParamLimits

0x8152,	// (0x0003827e) sctrl_sk_top_pane_g1_ParamLimits

0x7db4,	// (0x00037ee0) sctrl_sk_top_pane_g2_ParamLimits

0xfcfc,	// (0x0003fe28) sctrl_sk_top_pane_g_ParamLimits

0x815f,	// (0x0003828b) sctrl_sk_top_pane_t1_ParamLimits

0x8137,	// (0x00038263) aid_touch_sctrl_bottom_ParamLimits

0x815f,	// (0x0003828b) sctrl_sk_bottom_pane_t1_ParamLimits

0xd585,	// (0x0003d6b1) aid_area_touch_clock

0x8356,	// (0x00038482) aid_vkb2_area_top_pane_cell_ParamLimits

0x8356,	// (0x00038482) aid_vkb2_area_top_pane_cell

0x84a1,	// (0x000385cd) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x84a1,	// (0x000385cd) aid_vkb2_area_bottom_pane_cell

0xdaf1,	// (0x0003dc1d) popup_char_count_window

0xdfaf,	// (0x0003e0db) popup_char_count_window_g1

0xdfb8,	// (0x0003e0e4) popup_char_count_window_g2

0xdfc1,	// (0x0003e0ed) popup_char_count_window_g3

0x0002,

0xfdcd,	// (0x0003fef9) popup_char_count_window_g

0xdfca,	// (0x0003e0f6) popup_char_count_window_t1

0x8210,	// (0x0003833c) popup_fep_char_preview_window_ParamLimits

0x8210,	// (0x0003833c) popup_fep_char_preview_window

0x8374,	// (0x000384a0) vkb2_top_candi_pane_ParamLimits

0x8374,	// (0x000384a0) vkb2_top_candi_pane

0xdfd8,	// (0x0003e104) cell_vkb2_top_candi_pane_ParamLimits

0xdfd8,	// (0x0003e104) cell_vkb2_top_candi_pane

0x878c,	// (0x000388b8) bg_popup_fep_char_preview_window_ParamLimits

0x878c,	// (0x000388b8) bg_popup_fep_char_preview_window

0x879a,	// (0x000388c6) popup_fep_char_preview_window_t1_ParamLimits

0x879a,	// (0x000388c6) popup_fep_char_preview_window_t1

0xe029,	// (0x0003e155) bg_popup_fep_char_preview_window_g1

0xe031,	// (0x0003e15d) bg_popup_fep_char_preview_window_g2

0xe039,	// (0x0003e165) bg_popup_fep_char_preview_window_g3

0xe041,	// (0x0003e16d) bg_popup_fep_char_preview_window_g4

0xe049,	// (0x0003e175) bg_popup_fep_char_preview_window_g5

0x87d4,	// (0x00038900) bg_popup_fep_char_preview_window_g6

0xe051,	// (0x0003e17d) bg_popup_fep_char_preview_window_g7

0xe059,	// (0x0003e185) bg_popup_fep_char_preview_window_g8

0xe061,	// (0x0003e18d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd4,	// (0x0003ff00) bg_popup_fep_char_preview_window_g

0x7db4,	// (0x00037ee0) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7db4,	// (0x00037ee0) cell_vkb2_top_candi_pane_g1

0x7dc2,	// (0x00037eee) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7dc2,	// (0x00037eee) cell_vkb2_top_candi_pane_g2

0xde53,	// (0x0003df7f) cell_vkb2_top_candi_pane_g3_ParamLimits

0xde53,	// (0x0003df7f) cell_vkb2_top_candi_pane_g3

0x87dc,	// (0x00038908) cell_vkb2_top_candi_pane_g4_ParamLimits

0x87dc,	// (0x00038908) cell_vkb2_top_candi_pane_g4

0xc3b7,	// (0x0003c4e3) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc3b7,	// (0x0003c4e3) cell_vkb2_top_candi_pane_g5

0x87fd,	// (0x00038929) cell_vkb2_top_candi_pane_g6_ParamLimits

0x87fd,	// (0x00038929) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde7,	// (0x0003ff13) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde7,	// (0x0003ff13) cell_vkb2_top_candi_pane_g

0x880b,	// (0x00038937) cell_vkb2_top_candi_pane_t1

0x7933,	// (0x00037a5f) aid_size_touch_slider_mark_ParamLimits

0x7933,	// (0x00037a5f) aid_size_touch_slider_mark

0xdc34,	// (0x0003dd60) grid_graphic2_catg_pane_ParamLimits

0xdc34,	// (0x0003dd60) grid_graphic2_catg_pane

0xdcd2,	// (0x0003ddfe) popup_grid_graphic2_window_t1_ParamLimits

0xdcd2,	// (0x0003ddfe) popup_grid_graphic2_window_t1

0xdce4,	// (0x0003de10) popup_grid_graphic2_window_t2_ParamLimits

0xdce4,	// (0x0003de10) popup_grid_graphic2_window_t2

0x0001,

0xfda2,	// (0x0003fece) popup_grid_graphic2_window_t_ParamLimits

0xfda2,	// (0x0003fece) popup_grid_graphic2_window_t

0x23dc,	// (0x00032508) bg_button_pane_cp05_ParamLimits

0xde87,	// (0x0003dfb3) cell_graphic2_control_pane_g1_ParamLimits

0xe069,	// (0x0003e195) cell_graphic2_catg_pane_ParamLimits

0xe069,	// (0x0003e195) cell_graphic2_catg_pane

0xf4a2,	// (0x0003f5ce) bg_button_pane_cp12

0xe07b,	// (0x0003e1a7) cell_graphic2_catg_pane_g1

0xd551,	// (0x0003d67d) cell_tb_ext_pane_t1_ParamLimits

0x85be,	// (0x000386ea) vkb2_top_cell_right_narrow_pane_ParamLimits

0x85be,	// (0x000386ea) vkb2_top_cell_right_narrow_pane

0x85d6,	// (0x00038702) vkb2_top_cell_right_wide_pane_ParamLimits

0x85d6,	// (0x00038702) vkb2_top_cell_right_wide_pane

0x7b39,	// (0x00037c65) bg_vkb2_func_pane_ParamLimits

0x7b39,	// (0x00037c65) bg_vkb2_func_pane

0x8647,	// (0x00038773) vkb2_top_cell_left_pane_g1_ParamLimits

0x7b39,	// (0x00037c65) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7b39,	// (0x00037c65) bg_vkb2_fuc_pane_cp03

0x86a5,	// (0x000387d1) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x962e,	// (0x0003975a) bg_vkb2_func_pane_g1

0x9636,	// (0x00039762) bg_vkb2_func_pane_g2

0x9646,	// (0x00039772) bg_vkb2_func_pane_g3

0x963e,	// (0x0003976a) bg_vkb2_func_pane_g4

0x964e,	// (0x0003977a) bg_vkb2_func_pane_g5

0x9656,	// (0x00039782) bg_vkb2_func_pane_g6

0x965e,	// (0x0003978a) bg_vkb2_func_pane_g7

0x9666,	// (0x00039792) bg_vkb2_func_pane_g8

0x9626,	// (0x00039752) bg_vkb2_func_pane_g9

0x0008,

0xfdf4,	// (0x0003ff20) bg_vkb2_func_pane_g

0x7b39,	// (0x00037c65) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7b39,	// (0x00037c65) bg_vkb2_fuc_pane_cp01

0x8647,	// (0x00038773) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8647,	// (0x00038773) vkb2_top_cell_right_wide_pane_g1

0x7b39,	// (0x00037c65) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7b39,	// (0x00037c65) bg_vkb2_fuc_pane_cp02

0x86a5,	// (0x000387d1) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x86a5,	// (0x000387d1) vkb2_top_cell_right_narrow_pane_g1

0xd168,	// (0x0003d294) aid_touch_area_decrease_ParamLimits

0xd168,	// (0x0003d294) aid_touch_area_decrease

0xd18c,	// (0x0003d2b8) aid_touch_area_increase_ParamLimits

0xd18c,	// (0x0003d2b8) aid_touch_area_increase

0xd1a4,	// (0x0003d2d0) aid_touch_area_mute_ParamLimits

0xd1a4,	// (0x0003d2d0) aid_touch_area_mute

0xd1c0,	// (0x0003d2ec) aid_touch_area_slider_ParamLimits

0xd1c0,	// (0x0003d2ec) aid_touch_area_slider

0xd2ae,	// (0x0003d3da) popup_slider_window_g4_ParamLimits

0xd2ae,	// (0x0003d3da) popup_slider_window_g4

0xd2c6,	// (0x0003d3f2) popup_slider_window_g5_ParamLimits

0xd2c6,	// (0x0003d3f2) popup_slider_window_g5

0xd2e8,	// (0x0003d414) popup_slider_window_g6_ParamLimits

0xd2e8,	// (0x0003d414) popup_slider_window_g6

0xd326,	// (0x0003d452) popup_slider_window_t2_ParamLimits

0xd326,	// (0x0003d452) popup_slider_window_t2

0x0001,

0xfcf0,	// (0x0003fe1c) popup_slider_window_t_ParamLimits

0xfcf0,	// (0x0003fe1c) popup_slider_window_t

0xd33e,	// (0x0003d46a) slider_pane_ParamLimits

0xd33e,	// (0x0003d46a) slider_pane

0xe084,	// (0x0003e1b0) slider_pane_g1_ParamLimits

0xe084,	// (0x0003e1b0) slider_pane_g1

0xe098,	// (0x0003e1c4) slider_pane_g2_ParamLimits

0xe098,	// (0x0003e1c4) slider_pane_g2

0xe0ae,	// (0x0003e1da) slider_pane_g3_ParamLimits

0xe0ae,	// (0x0003e1da) slider_pane_g3

0x0003,

0xfe07,	// (0x0003ff33) slider_pane_g_ParamLimits

0xfe07,	// (0x0003ff33) slider_pane_g

0x74dd,	// (0x00037609) popup_tb_float_extension_window_ParamLimits

0x74dd,	// (0x00037609) popup_tb_float_extension_window

0xe0da,	// (0x0003e206) aid_size_cell_tb_float_ext

0xf4a2,	// (0x0003f5ce) bg_popup_sub_window_cp28

0xe0e6,	// (0x0003e212) grid_tb_float_ext_pane

0xe0f2,	// (0x0003e21e) cell_tb_float_ext_pane_ParamLimits

0xe0f2,	// (0x0003e21e) cell_tb_float_ext_pane

0xe10e,	// (0x0003e23a) cell_tb_float_ext_pane_g1

0xe117,	// (0x0003e243) grid_highlight_pane_cp12

0x7c8e,	// (0x00037dba) cell_last_hwr_side_pane_ParamLimits

0x7c8e,	// (0x00037dba) cell_last_hwr_side_pane

0xbc35,	// (0x0003bd61) cell_last_hwr_side_pane_g1

0xe120,	// (0x0003e24c) cell_last_hwr_side_pane_g2

0x0001,

0xfe10,	// (0x0003ff3c) cell_last_hwr_side_pane_g

0x856d,	// (0x00038699) vkb2_area_bottom_space_btn_pane_ParamLimits

0x856d,	// (0x00038699) vkb2_area_bottom_space_btn_pane

0x7db4,	// (0x00037ee0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdba6,	// (0x0003dcd2) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x880b,	// (0x00038937) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8829,	// (0x00038955) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8829,	// (0x00038955) vkb2_area_bottom_space_btn_pane_g1

0x8863,	// (0x0003898f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8863,	// (0x0003898f) vkb2_area_bottom_space_btn_pane_g2

0x8899,	// (0x000389c5) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8899,	// (0x000389c5) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe15,	// (0x0003ff41) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe15,	// (0x0003ff41) vkb2_area_bottom_space_btn_pane_g

0x7bfe,	// (0x00037d2a) cel_fep_hwr_func_pane_ParamLimits

0x7bfe,	// (0x00037d2a) cel_fep_hwr_func_pane

0x7c3a,	// (0x00037d66) cell_hwr_side_button_pane_ParamLimits

0x7c3a,	// (0x00037d66) cell_hwr_side_button_pane

0xd585,	// (0x0003d6b1) aid_area_touch_clock_ParamLimits

0x23dc,	// (0x00032508) bg_uniindi_top_pane_ParamLimits

0xd599,	// (0x0003d6c5) uniindi_top_pane_g1_ParamLimits

0xd5af,	// (0x0003d6db) uniindi_top_pane_g2_ParamLimits

0xd5bb,	// (0x0003d6e7) uniindi_top_pane_g3_ParamLimits

0xd5cc,	// (0x0003d6f8) uniindi_top_pane_g4_ParamLimits

0xfd28,	// (0x0003fe54) uniindi_top_pane_g_ParamLimits

0xd5d9,	// (0x0003d705) uniindi_top_pane_t1_ParamLimits

0x23dc,	// (0x00032508) bg_vkb2_func_pane_cp01_ParamLimits

0x23dc,	// (0x00032508) bg_vkb2_func_pane_cp01

0xe129,	// (0x0003e255) cel_fep_hwr_func_pane_g1_ParamLimits

0xe129,	// (0x0003e255) cel_fep_hwr_func_pane_g1

0x23dc,	// (0x00032508) bg_vkb2_func_pane_cp02_ParamLimits

0x23dc,	// (0x00032508) bg_vkb2_func_pane_cp02

0xe129,	// (0x0003e255) cell_hwr_side_button_pane_g1_ParamLimits

0xe129,	// (0x0003e255) cell_hwr_side_button_pane_g1

0x94ab,	// (0x000395d7) status_pane_g4_ParamLimits

0x94ab,	// (0x000395d7) status_pane_g4

0x94c5,	// (0x000395f1) status_pane_t1

0xb9e8,	// (0x0003bb14) form2_midp_gauge_slider_cont_pane

0xb9f0,	// (0x0003bb1c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba02,	// (0x0003bb2e) form2_midp_gauge_slider_pane_t2_ParamLimits

0xba14,	// (0x0003bb40) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae8,	// (0x0003fc14) form2_midp_gauge_slider_pane_t_ParamLimits

0xba26,	// (0x0003bb52) form2_midp_slider_pane_ParamLimits

0x81d0,	// (0x000382fc) aid_size_cell_func_vkb2_ParamLimits

0x81d0,	// (0x000382fc) aid_size_cell_func_vkb2

0xe0c6,	// (0x0003e1f2) slider_pane_g4_ParamLimits

0xe0c6,	// (0x0003e1f2) slider_pane_g4

0x88e3,	// (0x00038a0f) form2_midp_gauge_slider_pane_t2_cp01

0x88f1,	// (0x00038a1d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x88f1,	// (0x00038a1d) form2_midp_gauge_slider_pane_t3_cp01

0x890e,	// (0x00038a3a) form2_midp_slider_pane_cp01

0xf4a2,	// (0x0003f5ce) navi_smil_pane

0xe162,	// (0x0003e28e) navi_smil_pane_g1

0xe16a,	// (0x0003e296) navi_smil_pane_t1

0xe137,	// (0x0003e263) form2_midp_slider_pane_g1

0xe140,	// (0x0003e26c) form2_midp_slider_pane_g2

0xe148,	// (0x0003e274) form2_midp_slider_pane_g3

0xe137,	// (0x0003e263) form2_midp_slider_pane_g4

0xe150,	// (0x0003e27c) form2_midp_slider_pane_g5

0x0004,

0xfe1e,	// (0x0003ff4a) form2_midp_slider_pane_g

0x88d3,	// (0x000389ff) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x88d3,	// (0x000389ff) vkb2_area_bottom_space_btn_pane_g4

0x92ca,	// (0x000393f6) lc0_navi_pane_ParamLimits

0x92ca,	// (0x000393f6) lc0_navi_pane

0x9346,	// (0x00039472) lc0_stat_indi_pane_ParamLimits

0x9346,	// (0x00039472) lc0_stat_indi_pane

0x935d,	// (0x00039489) ls0_title_pane_ParamLimits

0x935d,	// (0x00039489) ls0_title_pane

0x28e7,	// (0x00032a13) bg_popup_sub_pane_cp14_ParamLimits

0xd56c,	// (0x0003d698) list_uniindi_pane_ParamLimits

0xd578,	// (0x0003d6a4) uniindi_top_pane_ParamLimits

0xd617,	// (0x0003d743) list_single_uniindi_pane_g1_ParamLimits

0xd62a,	// (0x0003d756) list_single_uniindi_pane_t1_ParamLimits

0x8917,	// (0x00038a43) lc0_stat_clock_pane_ParamLimits

0x8917,	// (0x00038a43) lc0_stat_clock_pane

0xe178,	// (0x0003e2a4) lc0_stat_indi_pane_g1_ParamLimits

0xe178,	// (0x0003e2a4) lc0_stat_indi_pane_g1

0xe185,	// (0x0003e2b1) lc0_stat_indi_pane_g2_ParamLimits

0xe185,	// (0x0003e2b1) lc0_stat_indi_pane_g2

0x0001,

0xfe29,	// (0x0003ff55) lc0_stat_indi_pane_g_ParamLimits

0xfe29,	// (0x0003ff55) lc0_stat_indi_pane_g

0x8924,	// (0x00038a50) lc0_uni_indicator_pane_ParamLimits

0x8924,	// (0x00038a50) lc0_uni_indicator_pane

0xe192,	// (0x0003e2be) ls0_title_pane_g1_ParamLimits

0xe192,	// (0x0003e2be) ls0_title_pane_g1

0xe1a6,	// (0x0003e2d2) ls0_title_pane_t1_ParamLimits

0xe1a6,	// (0x0003e2d2) ls0_title_pane_t1

0x8931,	// (0x00038a5d) lc0_uni_indicator_pane_g1_ParamLimits

0x8931,	// (0x00038a5d) lc0_uni_indicator_pane_g1

0xe1dc,	// (0x0003e308) lc0_stat_clock_pane_t1

0x5708,	// (0x00035834) main_ai5_pane

0xe1ea,	// (0x0003e316) ai5_sk_pane_ParamLimits

0xe1ea,	// (0x0003e316) ai5_sk_pane

0xe1f7,	// (0x0003e323) cell_ai5_widget_pane_ParamLimits

0xe1f7,	// (0x0003e323) cell_ai5_widget_pane

0xe799,	// (0x0003e8c5) aid_size_cell_widget_grid

0xe7a7,	// (0x0003e8d3) bg_ai5_widget_pane_ParamLimits

0xe7a7,	// (0x0003e8d3) bg_ai5_widget_pane

0xe81f,	// (0x0003e94b) cell_ai5_widget_pane_g2

0xe833,	// (0x0003e95f) cell_ai5_widget_pane_g3

0xe84d,	// (0x0003e979) cell_ai5_widget_pane_g4

0xe85d,	// (0x0003e989) cell_ai5_widget_pane_g5

0xe86d,	// (0x0003e999) cell_ai5_widget_pane_g6

0xe879,	// (0x0003e9a5) cell_ai5_widget_pane_g7

0xe8c1,	// (0x0003e9ed) cell_ai5_widget_pane_t1_ParamLimits

0xe8c1,	// (0x0003e9ed) cell_ai5_widget_pane_t1

0xe8de,	// (0x0003ea0a) cell_ai5_widget_pane_t2_ParamLimits

0xe8de,	// (0x0003ea0a) cell_ai5_widget_pane_t2

0xe8f6,	// (0x0003ea22) cell_ai5_widget_pane_t3_ParamLimits

0xe8f6,	// (0x0003ea22) cell_ai5_widget_pane_t3

0xe90e,	// (0x0003ea3a) cell_ai5_widget_pane_t4_ParamLimits

0xe90e,	// (0x0003ea3a) cell_ai5_widget_pane_t4

0xe934,	// (0x0003ea60) cell_ai5_widget_pane_t5_ParamLimits

0xe934,	// (0x0003ea60) cell_ai5_widget_pane_t5

0xe954,	// (0x0003ea80) cell_ai5_widget_pane_t6_ParamLimits

0xe954,	// (0x0003ea80) cell_ai5_widget_pane_t6

0xe966,	// (0x0003ea92) cell_ai5_widget_pane_t7_ParamLimits

0xe966,	// (0x0003ea92) cell_ai5_widget_pane_t7

0xe97f,	// (0x0003eaab) cell_ai5_widget_pane_t8_ParamLimits

0xe97f,	// (0x0003eaab) cell_ai5_widget_pane_t8

0x0009,

0xfe43,	// (0x0003ff6f) cell_ai5_widget_pane_t_ParamLimits

0xfe43,	// (0x0003ff6f) cell_ai5_widget_pane_t

0xe9de,	// (0x0003eb0a) grid_ai5_widget_pane

0x28e7,	// (0x00032a13) highlight_cell_ai5_widget_pane_ParamLimits

0x28e7,	// (0x00032a13) highlight_cell_ai5_widget_pane

0xe9ec,	// (0x0003eb18) ai5_sk_left_pane

0xe9f6,	// (0x0003eb22) ai5_sk_middle_pane

0xea00,	// (0x0003eb2c) ai5_sk_right_pane

0xea0a,	// (0x0003eb36) bg_ai5_widget_pane_g1_ParamLimits

0xea0a,	// (0x0003eb36) bg_ai5_widget_pane_g1

0xea16,	// (0x0003eb42) bg_ai5_widget_pane_g2_ParamLimits

0xea16,	// (0x0003eb42) bg_ai5_widget_pane_g2

0xea22,	// (0x0003eb4e) bg_ai5_widget_pane_g3_ParamLimits

0xea22,	// (0x0003eb4e) bg_ai5_widget_pane_g3

0xea2e,	// (0x0003eb5a) bg_ai5_widget_pane_g4_ParamLimits

0xea2e,	// (0x0003eb5a) bg_ai5_widget_pane_g4

0xea3a,	// (0x0003eb66) bg_ai5_widget_pane_g5_ParamLimits

0xea3a,	// (0x0003eb66) bg_ai5_widget_pane_g5

0xea46,	// (0x0003eb72) bg_ai5_widget_pane_g6_ParamLimits

0xea46,	// (0x0003eb72) bg_ai5_widget_pane_g6

0xea52,	// (0x0003eb7e) bg_ai5_widget_pane_g7_ParamLimits

0xea52,	// (0x0003eb7e) bg_ai5_widget_pane_g7

0xea5e,	// (0x0003eb8a) bg_ai5_widget_pane_g8_ParamLimits

0xea5e,	// (0x0003eb8a) bg_ai5_widget_pane_g8

0xea6a,	// (0x0003eb96) bg_ai5_widget_pane_g9_ParamLimits

0xea6a,	// (0x0003eb96) bg_ai5_widget_pane_g9

0x0008,

0xfe58,	// (0x0003ff84) bg_ai5_widget_pane_g_ParamLimits

0xfe58,	// (0x0003ff84) bg_ai5_widget_pane_g

0xeaa2,	// (0x0003ebce) cell_shortcut_ai5_widget_pane_ParamLimits

0xeaa2,	// (0x0003ebce) cell_shortcut_ai5_widget_pane

0x8dc7,	// (0x00038ef3) bg_cell_shortcut_ai5_widget_pane

0xeab5,	// (0x0003ebe1) cell_grid_ai5_widget_pane_g1

0x8dc7,	// (0x00038ef3) highlight_cell_shortcut_ai5_widget_pane

0x962e,	// (0x0003975a) ai5_sk_left_pane_g1

0xeabe,	// (0x0003ebea) ai5_sk_left_pane_g2

0xeac6,	// (0x0003ebf2) ai5_sk_left_pane_g3

0xeace,	// (0x0003ebfa) ai5_sk_left_pane_g4

0x0003,

0xfe6b,	// (0x0003ff97) ai5_sk_left_pane_g

0xead6,	// (0x0003ec02) ai5_sk_left_pane_t1

0x9636,	// (0x00039762) ai5_sk_right_pane_g1

0xeae4,	// (0x0003ec10) ai5_sk_right_pane_g2

0xeaec,	// (0x0003ec18) ai5_sk_right_pane_g3

0xeaf4,	// (0x0003ec20) ai5_sk_right_pane_g4

0x0003,

0xfe74,	// (0x0003ffa0) ai5_sk_right_pane_g

0xeafc,	// (0x0003ec28) ai5_sk_right_pane_t1

0x9636,	// (0x00039762) ai5_sk_middle_pane_g1

0x962e,	// (0x0003975a) ai5_sk_middle_pane_g2

0x964e,	// (0x0003977a) ai5_sk_middle_pane_g3

0xeaec,	// (0x0003ec18) ai5_sk_middle_pane_g4

0xeac6,	// (0x0003ebf2) ai5_sk_middle_pane_g5

0xeb0a,	// (0x0003ec36) ai5_sk_middle_pane_g6

0xeb12,	// (0x0003ec3e) ai5_sk_middle_pane_g7

0x0006,

0xfe7d,	// (0x0003ffa9) ai5_sk_middle_pane_g

0x9156,	// (0x00039282) aid_touch_area_size_lc0_ParamLimits

0x9156,	// (0x00039282) aid_touch_area_size_lc0

0x7de3,	// (0x00037f0f) cell_hwr_candidate_pane_t1_ParamLimits

0x9174,	// (0x000392a0) aid_touch_navi_pane

0x945d,	// (0x00039589) status_dt_navi_pane_ParamLimits

0x945d,	// (0x00039589) status_dt_navi_pane

0x946a,	// (0x00039596) status_dt_sta_pane_ParamLimits

0x946a,	// (0x00039596) status_dt_sta_pane

0xeb1a,	// (0x0003ec46) dt_sta_controll_pane

0xeb27,	// (0x0003ec53) dt_sta_indi_pane

0xeb38,	// (0x0003ec64) dt_sta_title_pane

0x23dc,	// (0x00032508) bg_dt_sta_indi_pane_ParamLimits

0x23dc,	// (0x00032508) bg_dt_sta_indi_pane

0xeb4b,	// (0x0003ec77) dt_sta_battery_pane

0xeb53,	// (0x0003ec7f) dt_sta_indi_pane_g1

0xeb5c,	// (0x0003ec88) dt_sta_indi_pane_g2

0xeb65,	// (0x0003ec91) dt_sta_indi_pane_g3

0x0002,

0xfe8c,	// (0x0003ffb8) dt_sta_indi_pane_g

0xeb6e,	// (0x0003ec9a) dt_sta_signal_pane

0x28e7,	// (0x00032a13) bg_dt_sta_title_pane_ParamLimits

0x28e7,	// (0x00032a13) bg_dt_sta_title_pane

0xeb77,	// (0x0003eca3) dt_sta_title_pane_g1

0xeb7f,	// (0x0003ecab) dt_sta_title_pane_t1_ParamLimits

0xeb7f,	// (0x0003ecab) dt_sta_title_pane_t1

0xf4a2,	// (0x0003f5ce) bg_dt_sta_control_pane

0xeb94,	// (0x0003ecc0) dt_sta_controll_pane_g1

0xeb9d,	// (0x0003ecc9) bg_dt_sta_title_pane_g1

0xeba6,	// (0x0003ecd2) bg_dt_sta_title_pane_g2

0xebaf,	// (0x0003ecdb) bg_dt_sta_title_pane_g3

0x0002,

0xfe93,	// (0x0003ffbf) bg_dt_sta_title_pane_g

0xbc35,	// (0x0003bd61) bg_dt_sta_indi_pane_g1

0xebb8,	// (0x0003ece4) dt_sta_signal_pane_g1

0xebc0,	// (0x0003ecec) dt_sta_signal_pane_g2

0x0001,

0xfe9a,	// (0x0003ffc6) dt_sta_signal_pane_g

0xebc8,	// (0x0003ecf4) dt_sta_battery_pane_g1

0xebd1,	// (0x0003ecfd) dt_sta_battery_pane_t1

0xbc35,	// (0x0003bd61) bg_dt_sta_control_pane_g1

0x67eb,	// (0x00036917) fep_china_uni_eep_pane

0x67f3,	// (0x0003691f) fep_china_uni_entry_pane_ParamLimits

0x6803,	// (0x0003692f) popup_fep_china_uni_window_g1_ParamLimits

0x6813,	// (0x0003693f) popup_fep_china_uni_window_g2_ParamLimits

0x6813,	// (0x0003693f) popup_fep_china_uni_window_g2

0x0001,

0xf713,	// (0x0003f83f) popup_fep_china_uni_window_g_ParamLimits

0xf713,	// (0x0003f83f) popup_fep_china_uni_window_g

0xebe0,	// (0x0003ed0c) fep_china_uni_eep_pane_g1

0xebe8,	// (0x0003ed14) fep_china_uni_eep_pane_t1

0xe159,	// (0x0003e285) aid_touch_area_size_smil_player

0x92c2,	// (0x000393ee) lc0_clock_pane

0x94b9,	// (0x000395e5) status_pane_g5_ParamLimits

0x94b9,	// (0x000395e5) status_pane_g5

0x7162,	// (0x0003728e) popup_keymap_window

0x947f,	// (0x000395ab) status_icon_pane

0xe833,	// (0x0003e95f) cell_ai5_widget_pane_g3_ParamLimits

0xe84d,	// (0x0003e979) cell_ai5_widget_pane_g4_ParamLimits

0xe85d,	// (0x0003e989) cell_ai5_widget_pane_g5_ParamLimits

0xe885,	// (0x0003e9b1) cell_ai5_widget_pane_g8_ParamLimits

0xe885,	// (0x0003e9b1) cell_ai5_widget_pane_g8

0xe899,	// (0x0003e9c5) cell_ai5_widget_pane_g9_ParamLimits

0xe899,	// (0x0003e9c5) cell_ai5_widget_pane_g9

0xe8ad,	// (0x0003e9d9) cell_ai5_widget_pane_g10_ParamLimits

0xe8ad,	// (0x0003e9d9) cell_ai5_widget_pane_g10

0xebf7,	// (0x0003ed23) status_icon_pane_g1

0xf4a2,	// (0x0003f5ce) bg_popup_sub_pane_cp13

0xebff,	// (0x0003ed2b) popup_keymap_window_t1

0x909f,	// (0x000391cb) control_pane_g6_ParamLimits

0x909f,	// (0x000391cb) control_pane_g6

0x90ac,	// (0x000391d8) control_pane_g7_ParamLimits

0x90ac,	// (0x000391d8) control_pane_g7

0x90b9,	// (0x000391e5) control_pane_g8_ParamLimits

0x90b9,	// (0x000391e5) control_pane_g8

0xeb1a,	// (0x0003ec46) dt_sta_controll_pane_ParamLimits

0xeb27,	// (0x0003ec53) dt_sta_indi_pane_ParamLimits

0xeb38,	// (0x0003ec64) dt_sta_title_pane_ParamLimits

0x2829,	// (0x00032955) aid_size_touch_scroll_bar_cale

0x57e5,	// (0x00035911) popup_discreet_window_ParamLimits

0x57e5,	// (0x00035911) popup_discreet_window

0x5873,	// (0x0003599f) popup_sk_window

0x9c84,	// (0x00039db0) bg_popup_sub_pane_cp28_ParamLimits

0x9c84,	// (0x00039db0) bg_popup_sub_pane_cp28

0xec0d,	// (0x0003ed39) popup_discreet_window_g1_ParamLimits

0xec0d,	// (0x0003ed39) popup_discreet_window_g1

0xec2d,	// (0x0003ed59) popup_discreet_window_t1_ParamLimits

0xec2d,	// (0x0003ed59) popup_discreet_window_t1

0xec4b,	// (0x0003ed77) popup_discreet_window_t2_ParamLimits

0xec4b,	// (0x0003ed77) popup_discreet_window_t2

0x0002,

0xfe9f,	// (0x0003ffcb) popup_discreet_window_t_ParamLimits

0xfe9f,	// (0x0003ffcb) popup_discreet_window_t

0x8944,	// (0x00038a70) popup_sk_window_g1

0x894e,	// (0x00038a7a) popup_sk_window_g2

0x0001,

0xfea6,	// (0x0003ffd2) popup_sk_window_g

0x8956,	// (0x00038a82) popup_sk_window_t1

0x8964,	// (0x00038a90) popup_sk_window_t1_copy1

0xe81f,	// (0x0003e94b) cell_ai5_widget_pane_g2_ParamLimits

0xe991,	// (0x0003eabd) cell_ai5_widget_pane_t9_ParamLimits

0xe991,	// (0x0003eabd) cell_ai5_widget_pane_t9

0xf4a2,	// (0x0003f5ce) main_fep_fshwr2_pane

0x8972,	// (0x00038a9e) aid_fshwr2_btn_pane

0x897e,	// (0x00038aaa) aid_fshwr2_syb_pane

0x897e,	// (0x00038aaa) aid_fshwr2_txt_pane

0x898a,	// (0x00038ab6) fshwr2_func_candi_pane

0x899d,	// (0x00038ac9) fshwr2_hwr_syb_pane

0x89ab,	// (0x00038ad7) fshwr2_icf_pane

0x5708,	// (0x00035834) fshwr2_icf_bg_pane

0x89da,	// (0x00038b06) fshwr2_icf_pane_t1_ParamLimits

0x89da,	// (0x00038b06) fshwr2_icf_pane_t1

0x6608,	// (0x00036734) fshwr2_func_candi_pane_g1

0xec9d,	// (0x0003edc9) fshwr2_func_candi_row_pane_ParamLimits

0xec9d,	// (0x0003edc9) fshwr2_func_candi_row_pane

0x89f2,	// (0x00038b1e) cell_fshwr2_syb_pane_ParamLimits

0x89f2,	// (0x00038b1e) cell_fshwr2_syb_pane

0x7db4,	// (0x00037ee0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7db4,	// (0x00037ee0) fshwr2_hwr_syb_pane_g1

0x5708,	// (0x00035834) bg_popup_call_pane_cp01

0x8a08,	// (0x00038b34) fshwr2_func_candi_cell_pane_ParamLimits

0x8a08,	// (0x00038b34) fshwr2_func_candi_cell_pane

0xecad,	// (0x0003edd9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xecad,	// (0x0003edd9) fshwr2_func_candi_cell_bg_pane

0x8a59,	// (0x00038b85) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8a59,	// (0x00038b85) fshwr2_func_candi_cell_pane_g1

0x8a79,	// (0x00038ba5) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8a79,	// (0x00038ba5) fshwr2_func_candi_cell_pane_t1

0x5708,	// (0x00035834) bg_button_pane_cp08

0xecb9,	// (0x0003ede5) cell_fshwr2_syb_bg_pane

0x8a8c,	// (0x00038bb8) cell_fshwr2_syb_bg_pane_g1

0x8a94,	// (0x00038bc0) cell_fshwr2_syb_bg_pane_t1

0x28e7,	// (0x00032a13) main_tmo_pane

0xa7a8,	// (0x0003a8d4) uni_indicator_pane_g1_ParamLimits

0xa7bb,	// (0x0003a8e7) uni_indicator_pane_g2_ParamLimits

0xa7cd,	// (0x0003a8f9) uni_indicator_pane_g3_ParamLimits

0xa7dc,	// (0x0003a908) uni_indicator_pane_g4_ParamLimits

0xa7dc,	// (0x0003a908) uni_indicator_pane_g4

0xa7f0,	// (0x0003a91c) uni_indicator_pane_g5_ParamLimits

0xa7f0,	// (0x0003a91c) uni_indicator_pane_g5

0xa7f0,	// (0x0003a91c) uni_indicator_pane_g6_ParamLimits

0xa7f0,	// (0x0003a91c) uni_indicator_pane_g6

0xf917,	// (0x0003fa43) uni_indicator_pane_g_ParamLimits

0xd138,	// (0x0003d264) popup_tmo_note_window_ParamLimits

0xd138,	// (0x0003d264) popup_tmo_note_window

0x81b2,	// (0x000382de) fshwr2_bg_pane

0x8a6a,	// (0x00038b96) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8a6a,	// (0x00038b96) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeab,	// (0x0003ffd7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeab,	// (0x0003ffd7) fshwr2_func_candi_cell_pane_g

0x7d9c,	// (0x00037ec8) bg_popup_window_pane_cp01

0x8aa3,	// (0x00038bcf) bg_popup_window_pane_g1_cp01

0xecc1,	// (0x0003eded) bg_popup_window_pane_cp22_ParamLimits

0xecc1,	// (0x0003eded) bg_popup_window_pane_cp22

0xeccf,	// (0x0003edfb) listscroll_tmo_link_pane_ParamLimits

0xeccf,	// (0x0003edfb) listscroll_tmo_link_pane

0xed0f,	// (0x0003ee3b) popup_tmo_note_window_g1_ParamLimits

0xed0f,	// (0x0003ee3b) popup_tmo_note_window_g1

0xed1c,	// (0x0003ee48) tmo_note_info_pane_ParamLimits

0xed1c,	// (0x0003ee48) tmo_note_info_pane

0xed36,	// (0x0003ee62) list_tmo_note_info_pane_g1_ParamLimits

0xed36,	// (0x0003ee62) list_tmo_note_info_pane_g1

0xed4d,	// (0x0003ee79) list_tmo_note_info_pane_g2_ParamLimits

0xed4d,	// (0x0003ee79) list_tmo_note_info_pane_g2

0x0001,

0xfeb0,	// (0x0003ffdc) list_tmo_note_info_pane_g_ParamLimits

0xfeb0,	// (0x0003ffdc) list_tmo_note_info_pane_g

0xed69,	// (0x0003ee95) list_tmo_note_info_text_pane_ParamLimits

0xed69,	// (0x0003ee95) list_tmo_note_info_text_pane

0xedee,	// (0x0003ef1a) list_tmo_link_pane

0xedfb,	// (0x0003ef27) scroll_pane_cp20

0xee08,	// (0x0003ef34) list_single_tmo_link_pane_ParamLimits

0xee08,	// (0x0003ef34) list_single_tmo_link_pane

0xee18,	// (0x0003ef44) list_single_tmo_link_pane_t1

0xee26,	// (0x0003ef52) list_tmo_note_info_text_pane_t1_ParamLimits

0xee26,	// (0x0003ef52) list_tmo_note_info_text_pane_t1

0x62a2,	// (0x000363ce) aid_size_touch_scroll_bar_cp01_ParamLimits

0x62a2,	// (0x000363ce) aid_size_touch_scroll_bar_cp01

0x61cc,	// (0x000362f8) aid_size_touch_slider_marker

0x585b,	// (0x00035987) popup_settings_window_ParamLimits

0x585b,	// (0x00035987) popup_settings_window

0x41dc,	// (0x00034308) popup_candi_list_indi_window

0x9174,	// (0x000392a0) aid_touch_navi_pane_ParamLimits

0x810b,	// (0x00038237) rs_clock_indi_pane

0x8114,	// (0x00038240) sctrl_sk_bottom_pane_ParamLimits

0x8125,	// (0x00038251) sctrl_sk_top_pane_ParamLimits

0x822a,	// (0x00038356) popup_fep_tooltip_window

0xe799,	// (0x0003e8c5) aid_size_cell_widget_grid_ParamLimits

0xe80a,	// (0x0003e936) cell_ai5_widget_pane_g1_ParamLimits

0xe80a,	// (0x0003e936) cell_ai5_widget_pane_g1

0xe86d,	// (0x0003e999) cell_ai5_widget_pane_g6_ParamLimits

0xe879,	// (0x0003e9a5) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2e,	// (0x0003ff5a) cell_ai5_widget_pane_g_ParamLimits

0xfe2e,	// (0x0003ff5a) cell_ai5_widget_pane_g

0xe9c0,	// (0x0003eaec) cell_ai5_widget_pane_t10_ParamLimits

0xe9c0,	// (0x0003eaec) cell_ai5_widget_pane_t10

0xe9de,	// (0x0003eb0a) grid_ai5_widget_pane_ParamLimits

0xea76,	// (0x0003eba2) cell_contacts_ai5_widget_pane_ParamLimits

0xea76,	// (0x0003eba2) cell_contacts_ai5_widget_pane

0xec60,	// (0x0003ed8c) popup_discreet_window_t3_ParamLimits

0xec60,	// (0x0003ed8c) popup_discreet_window_t3

0x89c2,	// (0x00038aee) popup_fshwr2_char_preview_window_ParamLimits

0x89c2,	// (0x00038aee) popup_fshwr2_char_preview_window

0xed87,	// (0x0003eeb3) tmo_note_info_pane_t1

0xed9c,	// (0x0003eec8) tmo_note_info_pane_t2

0xedb5,	// (0x0003eee1) tmo_note_info_pane_t3

0xedca,	// (0x0003eef6) tmo_note_info_pane_t4

0xeddc,	// (0x0003ef08) tmo_note_info_pane_t5

0x0004,

0xfeb5,	// (0x0003ffe1) tmo_note_info_pane_t

0xedee,	// (0x0003ef1a) list_tmo_link_pane_ParamLimits

0xedfb,	// (0x0003ef27) scroll_pane_cp20_ParamLimits

0x5708,	// (0x00035834) bg_popup_fep_char_preview_window_cp01

0xee3f,	// (0x0003ef6b) popup_fshwr2_char_preview_window_t1

0xee4d,	// (0x0003ef79) popup_candi_list_indi_window_g1

0xee56,	// (0x0003ef82) bg_cell_contacts_ai5_widget_pane

0xee62,	// (0x0003ef8e) cell_contacts_ai5_widget_pane_g1

0xee77,	// (0x0003efa3) cell_contacts_ai5_widget_pane_g2

0xee83,	// (0x0003efaf) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec0,	// (0x0003ffec) cell_contacts_ai5_widget_pane_g

0xee8f,	// (0x0003efbb) cell_contacts_ai5_widget_pane_t1

0x28e7,	// (0x00032a13) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef06,	// (0x0003f032) settings_container_pane

0x8dc7,	// (0x00038ef3) listscroll_set_pane_copy1

0xb38d,	// (0x0003b4b9) scroll_pane_cp121_copy1

0xef12,	// (0x0003f03e) set_content_pane_copy1

0xef1a,	// (0x0003f046) aid_height_set_list_copy1_ParamLimits

0xef1a,	// (0x0003f046) aid_height_set_list_copy1

0xa9f0,	// (0x0003ab1c) aid_size_parent_copy1_ParamLimits

0xa9f0,	// (0x0003ab1c) aid_size_parent_copy1

0xef26,	// (0x0003f052) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef26,	// (0x0003f052) button_value_adjust_pane_cp6_copy1

0x90f6,	// (0x00039222) list_highlight_pane_cp2_copy1_ParamLimits

0x90f6,	// (0x00039222) list_highlight_pane_cp2_copy1

0xef3a,	// (0x0003f066) list_set_pane_copy1_ParamLimits

0xef3a,	// (0x0003f066) list_set_pane_copy1

0xeea1,	// (0x0003efcd) main_pane_set_t1_copy1_ParamLimits

0xeea1,	// (0x0003efcd) main_pane_set_t1_copy1

0xeedb,	// (0x0003f007) main_pane_set_t2_copy1_ParamLimits

0xeedb,	// (0x0003f007) main_pane_set_t2_copy1

0xeffb,	// (0x0003f127) main_pane_set_t3_copy1

0xf009,	// (0x0003f135) main_pane_set_t4_copy1

0xeefa,	// (0x0003f026) set_content_pane_g1_copy1_ParamLimits

0xeefa,	// (0x0003f026) set_content_pane_g1_copy1

0xf017,	// (0x0003f143) setting_code_pane_copy1

0xf01f,	// (0x0003f14b) setting_slider_graphic_pane_copy1

0xf01f,	// (0x0003f14b) setting_slider_pane_copy1

0xf01f,	// (0x0003f14b) setting_text_pane_copy1

0xf01f,	// (0x0003f14b) setting_volume_pane_copy1

0xf017,	// (0x0003f143) settings_code_pane_cp2_copy1

0xf027,	// (0x0003f153) settings_code_pane_cp_copy1_ParamLimits

0xf027,	// (0x0003f153) settings_code_pane_cp_copy1

0x8aac,	// (0x00038bd8) volume_set_pane_copy1

0xf03b,	// (0x0003f167) volume_set_pane_g10_copy1

0xf047,	// (0x0003f173) volume_set_pane_g1_copy1

0xf051,	// (0x0003f17d) volume_set_pane_g2_copy1

0xf05b,	// (0x0003f187) volume_set_pane_g3_copy1

0xf065,	// (0x0003f191) volume_set_pane_g4_copy1

0xf06f,	// (0x0003f19b) volume_set_pane_g5_copy1

0xf079,	// (0x0003f1a5) volume_set_pane_g6_copy1

0xf083,	// (0x0003f1af) volume_set_pane_g7_copy1

0xf08d,	// (0x0003f1b9) volume_set_pane_g8_copy1

0xf097,	// (0x0003f1c3) volume_set_pane_g9_copy1

0xf504,	// (0x0003f630) bg_set_opt_pane_cp_copy1_ParamLimits

0xf504,	// (0x0003f630) bg_set_opt_pane_cp_copy1

0x8ab8,	// (0x00038be4) setting_slider_pane_t1_copy1_ParamLimits

0x8ab8,	// (0x00038be4) setting_slider_pane_t1_copy1

0x8ad6,	// (0x00038c02) setting_slider_pane_t2_copy1_ParamLimits

0x8ad6,	// (0x00038c02) setting_slider_pane_t2_copy1

0x8af0,	// (0x00038c1c) setting_slider_pane_t3_copy1_ParamLimits

0x8af0,	// (0x00038c1c) setting_slider_pane_t3_copy1

0x8b08,	// (0x00038c34) slider_set_pane_copy1_ParamLimits

0x8b08,	// (0x00038c34) slider_set_pane_copy1

0x293f,	// (0x00032a6b) set_opt_bg_pane_g1_copy2

0x2947,	// (0x00032a73) set_opt_bg_pane_g2_copy2

0xf0a1,	// (0x0003f1cd) set_opt_bg_pane_g3_copy2

0x2957,	// (0x00032a83) set_opt_bg_pane_g4_copy2

0x295f,	// (0x00032a8b) set_opt_bg_pane_g5_copy2

0x2967,	// (0x00032a93) set_opt_bg_pane_g6_copy2

0xf0ab,	// (0x0003f1d7) set_opt_bg_pane_g7_copy2

0xf0b5,	// (0x0003f1e1) set_opt_bg_pane_g8_copy2

0xf0bf,	// (0x0003f1eb) set_opt_bg_pane_g9_copy2

0x8b1e,	// (0x00038c4a) aid_size_touch_slider_mark_copy1_ParamLimits

0x8b1e,	// (0x00038c4a) aid_size_touch_slider_mark_copy1

0xf0c9,	// (0x0003f1f5) slider_set_pane_g1_copy1

0x8b32,	// (0x00038c5e) slider_set_pane_g2_copy1

0x7953,	// (0x00037a7f) slider_set_pane_g3_copy1_ParamLimits

0x7953,	// (0x00037a7f) slider_set_pane_g3_copy1

0x7967,	// (0x00037a93) slider_set_pane_g4_copy1_ParamLimits

0x7967,	// (0x00037a93) slider_set_pane_g4_copy1

0x797f,	// (0x00037aab) slider_set_pane_g5_copy1_ParamLimits

0x797f,	// (0x00037aab) slider_set_pane_g5_copy1

0x7953,	// (0x00037a7f) slider_set_pane_g6_copy1_ParamLimits

0x7953,	// (0x00037a7f) slider_set_pane_g6_copy1

0x8b3a,	// (0x00038c66) slider_set_pane_g7_copy1_ParamLimits

0x8b3a,	// (0x00038c66) slider_set_pane_g7_copy1

0xf4b6,	// (0x0003f5e2) bg_set_opt_pane_cp2_copy1

0xf0d2,	// (0x0003f1fe) setting_slider_graphic_pane_g1_copy1

0xf0db,	// (0x0003f207) setting_slider_graphic_pane_t1_copy1

0xf0eb,	// (0x0003f217) setting_slider_graphic_pane_t2_copy1

0xf0fb,	// (0x0003f227) slider_set_pane_cp_copy1

0xf10b,	// (0x0003f237) input_focus_pane_cp1_copy1

0xf114,	// (0x0003f240) list_set_text_pane_copy1

0xf11c,	// (0x0003f248) setting_text_pane_g1_copy1

0x4a67,	// (0x00034b93) set_text_pane_t1_copy1

0xf10b,	// (0x0003f237) input_focus_pane_cp2_copy1

0xf11c,	// (0x0003f248) setting_code_pane_g1_copy1

0xf125,	// (0x0003f251) setting_code_pane_t1_copy1

0x6b9f,	// (0x00036ccb) list_set_graphic_pane_copy1

0xf4b6,	// (0x0003f5e2) bg_set_opt_pane_cp4_copy1

0x6bb2,	// (0x00036cde) list_set_graphic_pane_g1_copy1_ParamLimits

0x6bb2,	// (0x00036cde) list_set_graphic_pane_g1_copy1

0xf133,	// (0x0003f25f) list_set_graphic_pane_g2_copy1

0x6bca,	// (0x00036cf6) list_set_graphic_pane_t1_copy1_ParamLimits

0x6bca,	// (0x00036cf6) list_set_graphic_pane_t1_copy1

0xbc35,	// (0x0003bd61) rs_clock_indi_pane_g1

0xf13b,	// (0x0003f267) rs_clock_indi_pane_t1

0xf149,	// (0x0003f275) rs_indi_pane

0xf151,	// (0x0003f27d) rs_indi_pane_g1

0xf15a,	// (0x0003f286) rs_indi_pane_g2

0xf163,	// (0x0003f28f) rs_indi_pane_g3

0x0002,

0xfec7,	// (0x0003fff3) rs_indi_pane_g

0x8dc7,	// (0x00038ef3) bg_popup_preview_window_pane_cp03

0xf16c,	// (0x0003f298) popup_fep_tooltip_window_t1

0xc8e0,	// (0x0003ca0c) popup_note2_window_g2_ParamLimits

0xc8e0,	// (0x0003ca0c) popup_note2_window_g2

0x0001,

0xfc60,	// (0x0003fd8c) popup_note2_window_g_ParamLimits

0xfc60,	// (0x0003fd8c) popup_note2_window_g

0xcde8,	// (0x0003cf14) bg_popup_sub_pane_cp11_ParamLimits

0xcdf5,	// (0x0003cf21) cell_ai3_links_pane_g1_ParamLimits

0xce0c,	// (0x0003cf38) cell_ai3_links_pane_t1

0x4a67,	// (0x00034b93) set_text_pane_t1_copy1_ParamLimits

0x8ce0,	// (0x00038e0c) cell_graphic_popup_pane_cp2_ParamLimits

0x8ce0,	// (0x00038e0c) cell_graphic_popup_pane_cp2

0xf17a,	// (0x0003f2a6) cell_graphic_popup_pane_g1_cp2

0x263c,	// (0x00032768) cell_graphic_popup_pane_g2_cp2

0xf182,	// (0x0003f2ae) cell_graphic_popup_pane_g3_cp2

0xf18a,	// (0x0003f2b6) cell_graphic_popup_pane_t2_cp2

0x264d,	// (0x00032779) grid_highlight_pane_cp3_cp2

0x2be8,	// (0x00032d14) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x28e7,	// (0x00032a13) main_tmo_pane_ParamLimits

0xd12c,	// (0x0003d258) popup_tmo_big_image_note_window

0xe7f9,	// (0x0003e925) cell_ai5_widget_list_pane

0xe801,	// (0x0003e92d) cell_ai5_widget_lrg_icon_pane

0xed87,	// (0x0003eeb3) tmo_note_info_pane_t1_ParamLimits

0xed9c,	// (0x0003eec8) tmo_note_info_pane_t2_ParamLimits

0xedb5,	// (0x0003eee1) tmo_note_info_pane_t3_ParamLimits

0xedca,	// (0x0003eef6) tmo_note_info_pane_t4_ParamLimits

0xeddc,	// (0x0003ef08) tmo_note_info_pane_t5_ParamLimits

0xfeb5,	// (0x0003ffe1) tmo_note_info_pane_t_ParamLimits

0xef06,	// (0x0003f032) settings_container_pane_ParamLimits

0xf103,	// (0x0003f22f) indicator_popup_pane_cp5

0xf103,	// (0x0003f22f) indicator_popup_pane_cp6

0x6b9f,	// (0x00036ccb) list_set_graphic_pane_copy1_ParamLimits

0xf4a2,	// (0x0003f5ce) bg_popup_window_pane_cp23

0xf198,	// (0x0003f2c4) popup_tmo_big_image_note_window_g1

0xf1a4,	// (0x0003f2d0) popup_tmo_big_image_note_window_t1

0xf1b4,	// (0x0003f2e0) popup_tmo_big_image_note_window_t2

0xf1c4,	// (0x0003f2f0) popup_tmo_big_image_note_window_t3

0x0002,

0xfece,	// (0x0003fffa) popup_tmo_big_image_note_window_t

0xbc35,	// (0x0003bd61) cell_ai5_widget_lrg_icon_pane_g1

0xf1d4,	// (0x0003f300) cell_ai5_widget_lrg_icon_pane_t1

0xf1e2,	// (0x0003f30e) cell_ai5_widget_list_row_pane_ParamLimits

0xf1e2,	// (0x0003f30e) cell_ai5_widget_list_row_pane

0xf1fa,	// (0x0003f326) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf1fa,	// (0x0003f326) cell_ai5_widget_list_row_pane_g1

0xf207,	// (0x0003f333) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf207,	// (0x0003f333) cell_ai5_widget_list_row_pane_t1

0xf232,	// (0x0003f35e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf232,	// (0x0003f35e) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed5,	// (0x00040001) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed5,	// (0x00040001) cell_ai5_widget_list_row_pane_t

0x5708,	// (0x00035834) main_fep_vtchi_ss_pane

0xf27a,	// (0x0003f3a6) popup_fep_char_pre_window

0xf282,	// (0x0003f3ae) popup_fep_ituss_window

0xf2a3,	// (0x0003f3cf) popup_fep_vkbss_window

0xf2cf,	// (0x0003f3fb) grid_vkbss_keypad_pane_ParamLimits

0xf2cf,	// (0x0003f3fb) grid_vkbss_keypad_pane

0xf2df,	// (0x0003f40b) ituss_keypad_pane

0x8b5c,	// (0x00038c88) aid_vkbss_key_offset_ParamLimits

0x8b5c,	// (0x00038c88) aid_vkbss_key_offset

0x8b68,	// (0x00038c94) cell_vkbss_key_pane_ParamLimits

0x8b68,	// (0x00038c94) cell_vkbss_key_pane

0xf2ee,	// (0x0003f41a) bg_cell_vkbss_key_g1_ParamLimits

0xf2ee,	// (0x0003f41a) bg_cell_vkbss_key_g1

0xf2fa,	// (0x0003f426) cell_vkbss_key_3p_pane_ParamLimits

0xf2fa,	// (0x0003f426) cell_vkbss_key_3p_pane

0xf30e,	// (0x0003f43a) cell_vkbss_key_g1_ParamLimits

0xf30e,	// (0x0003f43a) cell_vkbss_key_g1

0xf322,	// (0x0003f44e) cell_vkbss_key_t1_ParamLimits

0xf322,	// (0x0003f44e) cell_vkbss_key_t1

0x8b7e,	// (0x00038caa) cell_ituss_key_pane_ParamLimits

0x8b7e,	// (0x00038caa) cell_ituss_key_pane

0xf34d,	// (0x0003f479) bg_cell_ituss_key_g1_ParamLimits

0xf34d,	// (0x0003f479) bg_cell_ituss_key_g1

0xf359,	// (0x0003f485) cell_ituss_key_pane_g1_ParamLimits

0xf359,	// (0x0003f485) cell_ituss_key_pane_g1

0x8b8f,	// (0x00038cbb) cell_ituss_key_pane_g2_ParamLimits

0x8b8f,	// (0x00038cbb) cell_ituss_key_pane_g2

0x0002,

0xfedc,	// (0x00040008) cell_ituss_key_pane_g_ParamLimits

0xfedc,	// (0x00040008) cell_ituss_key_pane_g

0x8bbb,	// (0x00038ce7) cell_ituss_key_t1_ParamLimits

0x8bbb,	// (0x00038ce7) cell_ituss_key_t1

0x8bf5,	// (0x00038d21) cell_ituss_key_t2_ParamLimits

0x8bf5,	// (0x00038d21) cell_ituss_key_t2

0x8c26,	// (0x00038d52) cell_ituss_key_t3_ParamLimits

0x8c26,	// (0x00038d52) cell_ituss_key_t3

0x8bf5,	// (0x00038d21) cell_ituss_key_t4_ParamLimits

0x8bf5,	// (0x00038d21) cell_ituss_key_t4

0x0004,

0xfee3,	// (0x0004000f) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x0004000f) cell_ituss_key_t

0xf37f,	// (0x0003f4ab) cell_vkbss_key_3p_pane_g1

0xf387,	// (0x0003f4b3) cell_vkbss_key_3p_pane_g2

0xf38f,	// (0x0003f4bb) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x0004001a) cell_vkbss_key_3p_pane_g

0x8dc7,	// (0x00038ef3) bg_popup_fep_char_preview_window_cp02

0xf397,	// (0x0003f4c3) popup_fep_char_pre_window_t1

0xe786,	// (0x0003e8b2) main_ai5_sk_pane

0xee56,	// (0x0003ef82) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee62,	// (0x0003ef8e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xee77,	// (0x0003efa3) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee83,	// (0x0003efaf) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec0,	// (0x0003ffec) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee8f,	// (0x0003efbb) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x28e7,	// (0x00032a13) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf3a5,	// (0x0003f4d1) main_ai5_sk_pane_g1

0x9abc,	// (0x00039be8) popup_query_code_window_g1

0xf298,	// (0x0003f3c4) popup_fep_vkb_icf_pane

0xf2b9,	// (0x0003f3e5) popup_fep_vtchi_icf_pane

0xf3ae,	// (0x0003f4da) bg_icf_pane

0xf3ba,	// (0x0003f4e6) list_vkb_icf_pane

0xf3c9,	// (0x0003f4f5) bg_icf_pane_cp01

0xf3dc,	// (0x0003f508) vtchi_icf_list_pane

0xf3ec,	// (0x0003f518) list_vkb_icf_pane_t1_ParamLimits

0xf3ec,	// (0x0003f518) list_vkb_icf_pane_t1

0xf402,	// (0x0003f52e) vtchi_icf_list_pane_t1_ParamLimits

0xf402,	// (0x0003f52e) vtchi_icf_list_pane_t1

0xf282,	// (0x0003f3ae) popup_fep_ituss_window_ParamLimits

0xf2b9,	// (0x0003f3e5) popup_fep_vtchi_icf_pane_ParamLimits

0xf2df,	// (0x0003f40b) ituss_keypad_pane_ParamLimits

0x8b50,	// (0x00038c7c) ituss_sks_pane

0xf3ae,	// (0x0003f4da) bg_icf_pane_ParamLimits

0xf25a,	// (0x0003f386) icf_edit_indi_pane_ParamLimits

0xf25a,	// (0x0003f386) icf_edit_indi_pane

0xf3ba,	// (0x0003f4e6) list_vkb_icf_pane_ParamLimits

0xf3c9,	// (0x0003f4f5) bg_icf_pane_cp01_ParamLimits

0xf26d,	// (0x0003f399) icf_edit_indi_pane_cp01_ParamLimits

0xf26d,	// (0x0003f399) icf_edit_indi_pane_cp01

0xf3e4,	// (0x0003f510) vtchi_query_pane

0xe129,	// (0x0003e255) icf_edit_indi_pane_g1_ParamLimits

0xe129,	// (0x0003e255) icf_edit_indi_pane_g1

0xf471,	// (0x0003f59d) icf_edit_indi_pane_g2_ParamLimits

0xf471,	// (0x0003f59d) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x00040032) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x00040032) icf_edit_indi_pane_g

0xf483,	// (0x0003f5af) icf_edit_indi_pane_t1

0xf41a,	// (0x0003f546) bg_input_focus_pane_cp042

0x2820,	// (0x0003294c) vtchi_button_pane

0xf423,	// (0x0003f54f) vtchi_query_pane_t1

0xf431,	// (0x0003f55d) vtchi_query_pane_t2

0xf43f,	// (0x0003f56b) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x00040021) vtchi_query_pane_t

0x5708,	// (0x00035834) bg_button_pane_cp13

0xf44d,	// (0x0003f579) vtchi_button_pane_g1

0x8c69,	// (0x00038d95) ituss_sks_pane_g1

0x8c74,	// (0x00038da0) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x00040028) ituss_sks_pane_g

0xf455,	// (0x0003f581) ituss_sks_pane_t1

0xf463,	// (0x0003f58f) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x0004002d) ituss_sks_pane_t

0xb712,	// (0x0003b83e) indicator_nsta_pane_cp_g1

0xb71a,	// (0x0003b846) indicator_nsta_pane_cp_g2

0xb722,	// (0x0003b84e) indicator_nsta_pane_cp_g3

0xb712,	// (0x0003b83e) indicator_nsta_pane_cp_g4

0xb71a,	// (0x0003b846) indicator_nsta_pane_cp_g5

0xb722,	// (0x0003b84e) indicator_nsta_pane_cp_g6

0x0005,

0xfa9e,	// (0x0003fbca) indicator_nsta_pane_cp_g

0xde74,	// (0x0003dfa0) cell_graphic2_pane_t2_ParamLimits

0xde74,	// (0x0003dfa0) cell_graphic2_pane_t2

0x0001,

0xfdb7,	// (0x0003fee3) cell_graphic2_pane_t_ParamLimits

0xfdb7,	// (0x0003fee3) cell_graphic2_pane_t

0xdea1,	// (0x0003dfcd) cell_graphic2_control_pane_t1

0x6742,	// (0x0003686e) signal_pane_g3_ParamLimits

0x6742,	// (0x0003686e) signal_pane_g3

0x6751,	// (0x0003687d) signal_pane_g4_ParamLimits

0x6751,	// (0x0003687d) signal_pane_g4

0xf244,	// (0x0003f370) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf244,	// (0x0003f370) cell_ai5_widget_list_row_pane_t3

0xf36d,	// (0x0003f499) cell_ituss_key_pane_t1_ParamLimits

0xf36d,	// (0x0003f499) cell_ituss_key_pane_t1

0x972b,	// (0x00039857) form_field_data_wide_pane_vc_t2_ParamLimits

0x972b,	// (0x00039857) form_field_data_wide_pane_vc_t2

0x973f,	// (0x0003986b) form_field_data_wide_pane_vc_t3_ParamLimits

0x973f,	// (0x0003986b) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x0003f92b) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x0003f92b) form_field_data_wide_pane_vc_t

0xb3cd,	// (0x0003b4f9) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb3cd,	// (0x0003b4f9) form_field_slider_wide_pane_vc_t3

0xb4a3,	// (0x0003b5cf) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb4a3,	// (0x0003b5cf) form_field_popup_wide_pane_vc_t2

0xb4ba,	// (0x0003b5e6) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb4ba,	// (0x0003b5e6) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa8d,	// (0x0003fbb9) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0003fbb9) form_field_popup_wide_pane_vc_t

0x8972,	// (0x00038a9e) aid_fshwr2_btn_pane_ParamLimits

0x897e,	// (0x00038aaa) aid_fshwr2_syb_pane_ParamLimits

0x897e,	// (0x00038aaa) aid_fshwr2_txt_pane_ParamLimits

0x81b2,	// (0x000382de) fshwr2_bg_pane_ParamLimits

0x898a,	// (0x00038ab6) fshwr2_func_candi_pane_ParamLimits

0x899d,	// (0x00038ac9) fshwr2_hwr_syb_pane_ParamLimits

0x89ab,	// (0x00038ad7) fshwr2_icf_pane_ParamLimits

0x45c3,	// (0x000346ef) list_double_graphic_pane_vc_g4_ParamLimits

0x45c3,	// (0x000346ef) list_double_graphic_pane_vc_g4

0x8baf,	// (0x00038cdb) cell_ituss_key_pane_g3_ParamLimits

0x8baf,	// (0x00038cdb) cell_ituss_key_pane_g3

0x8c57,	// (0x00038d83) cell_ituss_key_t5_ParamLimits

0x8c57,	// (0x00038d83) cell_ituss_key_t5

0xf2a3,	// (0x0003f3cf) popup_fep_vkbss_window_ParamLimits

0xe790,	// (0x0003e8bc) aid_cell_ai5_quarter

0xf483,	// (0x0003f5af) icf_edit_indi_pane_t1_ParamLimits

0x2484,	// (0x000325b0) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x2484,	// (0x000325b0) aid_tch_indicator_popup_pane_cp2

0x2497,	// (0x000325c3) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x2497,	// (0x000325c3) aid_tch_query_popup_data_pane_cp2

0x9a64,	// (0x00039b90) aid_tch_query_popup_pane_ParamLimits

0x9a64,	// (0x00039b90) aid_tch_query_popup_pane

0x9a64,	// (0x00039b90) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9a64,	// (0x00039b90) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small

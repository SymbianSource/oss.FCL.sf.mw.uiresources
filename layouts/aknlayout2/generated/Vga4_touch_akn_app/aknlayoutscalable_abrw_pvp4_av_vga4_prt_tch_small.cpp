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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000305da };

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
0x5764,	// (0x00035d3e) Screen

0x5770,	// (0x00035d4a) application_window_ParamLimits

0x5770,	// (0x00035d4a) application_window

0x2256,	// (0x00032830) screen_g1

0x57cc,	// (0x00035da6) area_bottom_pane_ParamLimits

0x57cc,	// (0x00035da6) area_bottom_pane

0x588c,	// (0x00035e66) area_top_pane_ParamLimits

0x588c,	// (0x00035e66) area_top_pane

0x592a,	// (0x00035f04) main_pane_ParamLimits

0x592a,	// (0x00035f04) main_pane

0x2260,	// (0x0003283a) misc_graphics

0x9234,	// (0x0003980e) battery_pane_ParamLimits

0x9234,	// (0x0003980e) battery_pane

0x9eee,	// (0x0003a4c8) bg_status_flat_pane_g8

0x9ef6,	// (0x0003a4d0) bg_status_flat_pane_g9

0x92f6,	// (0x000398d0) context_pane_ParamLimits

0x92f6,	// (0x000398d0) context_pane

0x941a,	// (0x000399f4) navi_pane_ParamLimits

0x941a,	// (0x000399f4) navi_pane

0x94aa,	// (0x00039a84) signal_pane_ParamLimits

0x94aa,	// (0x00039a84) signal_pane

0x0008,

0xf874,	// (0x0003fe4e) bg_status_flat_pane_g

0x9517,	// (0x00039af1) status_pane_g1_ParamLimits

0x9517,	// (0x00039af1) status_pane_g1

0x9523,	// (0x00039afd) status_pane_g2_ParamLimits

0x9523,	// (0x00039afd) status_pane_g2

0x952f,	// (0x00039b09) status_pane_g3_ParamLimits

0x952f,	// (0x00039b09) status_pane_g3

0x0004,

0xf79b,	// (0x0003fd75) status_pane_g_ParamLimits

0xf79b,	// (0x0003fd75) status_pane_g

0x9563,	// (0x00039b3d) title_pane_ParamLimits

0x9563,	// (0x00039b3d) title_pane

0x95a2,	// (0x00039b7c) uni_indicator_pane_ParamLimits

0x95a2,	// (0x00039b7c) uni_indicator_pane

0x915e,	// (0x00039738) bg_list_pane_ParamLimits

0x915e,	// (0x00039738) bg_list_pane

0x917e,	// (0x00039758) find_pane

0x9186,	// (0x00039760) listscroll_app_pane_ParamLimits

0x9186,	// (0x00039760) listscroll_app_pane

0x9192,	// (0x0003976c) listscroll_form_pane

0x7355,	// (0x0003792f) listscroll_gen_pane_ParamLimits

0x7355,	// (0x0003792f) listscroll_gen_pane

0x7369,	// (0x00037943) listscroll_set_pane

0x6531,	// (0x00036b0b) main_idle_act_pane

0x6efb,	// (0x000374d5) main_idle_trad_pane

0x6efb,	// (0x000374d5) main_list_empty_pane

0x9186,	// (0x00039760) main_midp_pane

0x91ac,	// (0x00039786) main_pane_g1_ParamLimits

0x91ac,	// (0x00039786) main_pane_g1

0x737f,	// (0x00037959) popup_ai_message_window_ParamLimits

0x737f,	// (0x00037959) popup_ai_message_window

0x7433,	// (0x00037a0d) popup_fep_china_uni_window_ParamLimits

0x7433,	// (0x00037a0d) popup_fep_china_uni_window

0x7493,	// (0x00037a6d) popup_fep_japan_candidate_window_ParamLimits

0x7493,	// (0x00037a6d) popup_fep_japan_candidate_window

0x74bd,	// (0x00037a97) popup_fep_japan_predictive_window_ParamLimits

0x74bd,	// (0x00037a97) popup_fep_japan_predictive_window

0x74f3,	// (0x00037acd) popup_find_window

0x7500,	// (0x00037ada) popup_grid_graphic_window_ParamLimits

0x7500,	// (0x00037ada) popup_grid_graphic_window

0x752e,	// (0x00037b08) popup_large_graphic_colour_window

0x7554,	// (0x00037b2e) popup_menu_window_ParamLimits

0x7554,	// (0x00037b2e) popup_menu_window

0x771e,	// (0x00037cf8) popup_note_image_window

0x7708,	// (0x00037ce2) popup_note_wait_window_ParamLimits

0x7708,	// (0x00037ce2) popup_note_wait_window

0x7708,	// (0x00037ce2) popup_note_window_ParamLimits

0x7708,	// (0x00037ce2) popup_note_window

0x7784,	// (0x00037d5e) popup_query_code_window_ParamLimits

0x7784,	// (0x00037d5e) popup_query_code_window

0x779a,	// (0x00037d74) popup_query_data_code_window_ParamLimits

0x779a,	// (0x00037d74) popup_query_data_code_window

0x77bd,	// (0x00037d97) popup_query_data_window_ParamLimits

0x77bd,	// (0x00037d97) popup_query_data_window

0x77df,	// (0x00037db9) popup_query_sat_info_window_ParamLimits

0x77df,	// (0x00037db9) popup_query_sat_info_window

0x781e,	// (0x00037df8) popup_snote_single_graphic_window_ParamLimits

0x781e,	// (0x00037df8) popup_snote_single_graphic_window

0x781e,	// (0x00037df8) popup_snote_single_text_window_ParamLimits

0x781e,	// (0x00037df8) popup_snote_single_text_window

0x7835,	// (0x00037e0f) popup_sub_window_general

0x797b,	// (0x00037f55) popup_window_general_ParamLimits

0x797b,	// (0x00037f55) popup_window_general

0x91ba,	// (0x00039794) power_save_pane

0x71d7,	// (0x000377b1) control_pane_g1_ParamLimits

0x71d7,	// (0x000377b1) control_pane_g1

0x7200,	// (0x000377da) control_pane_g2_ParamLimits

0x7200,	// (0x000377da) control_pane_g2

0x9121,	// (0x000396fb) control_pane_g3_ParamLimits

0x9121,	// (0x000396fb) control_pane_g3

0x0007,

0xf783,	// (0x0003fd5d) control_pane_g_ParamLimits

0xf783,	// (0x0003fd5d) control_pane_g

0x724c,	// (0x00037826) control_pane_t1_ParamLimits

0x724c,	// (0x00037826) control_pane_t1

0x72a6,	// (0x00037880) control_pane_t2_ParamLimits

0x72a6,	// (0x00037880) control_pane_t2

0x0002,

0xf794,	// (0x0003fd6e) control_pane_t_ParamLimits

0xf794,	// (0x0003fd6e) control_pane_t

0x7193,	// (0x0003776d) navi_navi_volume_pane_cp1

0x719b,	// (0x00037775) status_small_icon_pane

0x71a3,	// (0x0003777d) status_small_pane_g1_ParamLimits

0x71a3,	// (0x0003777d) status_small_pane_g1

0x908a,	// (0x00039664) status_small_pane_g2_ParamLimits

0x908a,	// (0x00039664) status_small_pane_g2

0x9096,	// (0x00039670) status_small_pane_g3_ParamLimits

0x9096,	// (0x00039670) status_small_pane_g3

0x90a2,	// (0x0003967c) status_small_pane_g4_ParamLimits

0x90a2,	// (0x0003967c) status_small_pane_g4

0x90ae,	// (0x00039688) status_small_pane_g5_ParamLimits

0x90ae,	// (0x00039688) status_small_pane_g5

0x90bc,	// (0x00039696) status_small_pane_g6_ParamLimits

0x90bc,	// (0x00039696) status_small_pane_g6

0x0007,

0xf772,	// (0x0003fd4c) status_small_pane_g_ParamLimits

0xf772,	// (0x0003fd4c) status_small_pane_g

0x90eb,	// (0x000396c5) status_small_pane_t1

0x910d,	// (0x000396e7) status_small_wait_pane_ParamLimits

0x910d,	// (0x000396e7) status_small_wait_pane

0x68bd,	// (0x00036e97) aid_levels_signal_ParamLimits

0x68bd,	// (0x00036e97) aid_levels_signal

0x68cc,	// (0x00036ea6) signal_pane_g1_ParamLimits

0x68cc,	// (0x00036ea6) signal_pane_g1

0x68e1,	// (0x00036ebb) signal_pane_g2_ParamLimits

0x68e1,	// (0x00036ebb) signal_pane_g2

0x0003,

0xf703,	// (0x0003fcdd) signal_pane_g_ParamLimits

0xf703,	// (0x0003fcdd) signal_pane_g

0x2e19,	// (0x000333f3) context_pane_g1

0x5b89,	// (0x00036163) title_pane_g1

0x5bbb,	// (0x00036195) title_pane_t1

0x2276,	// (0x00032850) title_pane_t2

0x229c,	// (0x00032876) title_pane_t3

0x0002,

0xf557,	// (0x0003fb31) title_pane_t

0x95ba,	// (0x00039b94) aid_levels_battery_ParamLimits

0x95ba,	// (0x00039b94) aid_levels_battery

0x95cb,	// (0x00039ba5) battery_pane_g1_ParamLimits

0x95cb,	// (0x00039ba5) battery_pane_g1

0x95e1,	// (0x00039bbb) battery_pane_g2_ParamLimits

0x95e1,	// (0x00039bbb) battery_pane_g2

0x0001,

0xf7a6,	// (0x0003fd80) battery_pane_g_ParamLimits

0xf7a6,	// (0x0003fd80) battery_pane_g

0xa838,	// (0x0003ae12) uni_indicator_pane_g1

0xa84b,	// (0x0003ae25) uni_indicator_pane_g2

0xa85d,	// (0x0003ae37) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0003fef6) uni_indicator_pane_g

0x6d75,	// (0x0003734f) navi_icon_pane_ParamLimits

0x6d75,	// (0x0003734f) navi_icon_pane

0x6cb1,	// (0x0003728b) navi_midp_pane

0x6d91,	// (0x0003736b) navi_navi_pane

0x6d9b,	// (0x00037375) navi_text_pane_ParamLimits

0x6d9b,	// (0x00037375) navi_text_pane

0x2256,	// (0x00032830) status_small_wait_pane_g1

0x25bd,	// (0x00032b97) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0003fef1) status_small_wait_pane_g

0xa54b,	// (0x0003ab25) navi_navi_icon_text_pane

0xa553,	// (0x0003ab2d) navi_navi_pane_g1_ParamLimits

0xa553,	// (0x0003ab2d) navi_navi_pane_g1

0xa565,	// (0x0003ab3f) navi_navi_pane_g2_ParamLimits

0xa565,	// (0x0003ab3f) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0003febf) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0003febf) navi_navi_pane_g

0xa577,	// (0x0003ab51) navi_navi_tabs_pane

0xa580,	// (0x0003ab5a) navi_navi_text_pane

0xa54b,	// (0x0003ab25) navi_navi_volume_pane

0xa527,	// (0x0003ab01) navi_text_pane_t1

0xa51b,	// (0x0003aaf5) navi_icon_pane_g1

0xa46e,	// (0x0003aa48) navi_navi_text_pane_t1

0x7c58,	// (0x00038232) navi_navi_volume_pane_g1

0x7c60,	// (0x0003823a) volume_small_pane

0xa3d4,	// (0x0003a9ae) navi_navi_icon_text_pane_g1

0xa3dc,	// (0x0003a9b6) navi_navi_icon_text_pane_t1

0x6d91,	// (0x0003736b) navi_tabs_2_long_pane

0x6d91,	// (0x0003736b) navi_tabs_2_pane

0x6d91,	// (0x0003736b) navi_tabs_3_long_pane

0x6d91,	// (0x0003736b) navi_tabs_3_pane

0x6d91,	// (0x0003736b) navi_tabs_4_pane

0x7c38,	// (0x00038212) tabs_2_active_pane_ParamLimits

0x7c38,	// (0x00038212) tabs_2_active_pane

0x7c48,	// (0x00038222) tabs_2_passive_pane_ParamLimits

0x7c48,	// (0x00038222) tabs_2_passive_pane

0x7c06,	// (0x000381e0) tabs_3_active_pane_ParamLimits

0x7c06,	// (0x000381e0) tabs_3_active_pane

0x7c16,	// (0x000381f0) tabs_3_passive_pane_ParamLimits

0x7c16,	// (0x000381f0) tabs_3_passive_pane

0x7c27,	// (0x00038201) tabs_3_passive_pane_cp_ParamLimits

0x7c27,	// (0x00038201) tabs_3_passive_pane_cp

0x7bba,	// (0x00038194) tabs_4_active_pane_ParamLimits

0x7bba,	// (0x00038194) tabs_4_active_pane

0x7bcd,	// (0x000381a7) tabs_4_passive_pane_ParamLimits

0x7bcd,	// (0x000381a7) tabs_4_passive_pane

0x7bde,	// (0x000381b8) tabs_4_passive_pane_cp_ParamLimits

0x7bde,	// (0x000381b8) tabs_4_passive_pane_cp

0x7bef,	// (0x000381c9) tabs_4_passive_pane_cp2_ParamLimits

0x7bef,	// (0x000381c9) tabs_4_passive_pane_cp2

0x7b96,	// (0x00038170) tabs_2_long_active_pane_ParamLimits

0x7b96,	// (0x00038170) tabs_2_long_active_pane

0x7ba8,	// (0x00038182) tabs_2_long_passive_pane_ParamLimits

0x7ba8,	// (0x00038182) tabs_2_long_passive_pane

0x7b57,	// (0x00038131) tabs_3_long_active_pane_ParamLimits

0x7b57,	// (0x00038131) tabs_3_long_active_pane

0x7b6a,	// (0x00038144) tabs_3_long_passive_pane_ParamLimits

0x7b6a,	// (0x00038144) tabs_3_long_passive_pane

0x7b83,	// (0x0003815d) tabs_3_long_passive_pane_cp_ParamLimits

0x7b83,	// (0x0003815d) tabs_3_long_passive_pane_cp

0x7afd,	// (0x000380d7) volume_small_pane_g1

0x7b06,	// (0x000380e0) volume_small_pane_g2

0x7b0f,	// (0x000380e9) volume_small_pane_g3

0x7b18,	// (0x000380f2) volume_small_pane_g4

0x7b21,	// (0x000380fb) volume_small_pane_g5

0x7b2a,	// (0x00038104) volume_small_pane_g6

0x7b33,	// (0x0003810d) volume_small_pane_g7

0x7b3c,	// (0x00038116) volume_small_pane_g8

0x7b45,	// (0x0003811f) volume_small_pane_g9

0x7b4e,	// (0x00038128) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0003fe8b) volume_small_pane_g

0x22bc,	// (0x00032896) bg_active_tab_pane_cp2_ParamLimits

0x22bc,	// (0x00032896) bg_active_tab_pane_cp2

0x5c23,	// (0x000361fd) tabs_3_active_pane_g1

0x5c2b,	// (0x00036205) tabs_3_active_pane_t1

0x22bc,	// (0x00032896) bg_passive_tab_pane_cp2_ParamLimits

0x22bc,	// (0x00032896) bg_passive_tab_pane_cp2

0x5c23,	// (0x000361fd) tabs_3_passive_pane_g1

0x5c2b,	// (0x00036205) tabs_3_passive_pane_t1

0x22bc,	// (0x00032896) bg_active_tab_pane_cp3_ParamLimits

0x22bc,	// (0x00032896) bg_active_tab_pane_cp3

0x5c3d,	// (0x00036217) tabs_4_active_pane_g1

0x5c45,	// (0x0003621f) tabs_4_active_pane_t1

0x22bc,	// (0x00032896) bg_passive_tab_pane_cp3_ParamLimits

0x22bc,	// (0x00032896) bg_passive_tab_pane_cp3

0x5c3d,	// (0x00036217) tabs_4_1_passive_pane_g1

0x5c45,	// (0x0003621f) tabs_4_1_passive_pane_t1

0x9186,	// (0x00039760) list_highlight_pane_cp2

0xaaa6,	// (0x0003b080) list_set_pane_ParamLimits

0xaaa6,	// (0x0003b080) list_set_pane

0xab68,	// (0x0003b142) main_pane_set_t1_ParamLimits

0xab68,	// (0x0003b142) main_pane_set_t1

0xab88,	// (0x0003b162) main_pane_set_t2_ParamLimits

0xab88,	// (0x0003b162) main_pane_set_t2

0xab9c,	// (0x0003b176) main_pane_set_t3_ParamLimits

0xab9c,	// (0x0003b176) main_pane_set_t3

0xabb0,	// (0x0003b18a) main_pane_set_t4_ParamLimits

0xabb0,	// (0x0003b18a) main_pane_set_t4

0x0003,

0xf981,	// (0x0003ff5b) main_pane_set_t_ParamLimits

0xf981,	// (0x0003ff5b) main_pane_set_t

0xabc4,	// (0x0003b19e) setting_code_pane

0xabce,	// (0x0003b1a8) setting_slider_graphic_pane

0xabce,	// (0x0003b1a8) setting_slider_pane

0xabce,	// (0x0003b1a8) setting_text_pane

0xabce,	// (0x0003b1a8) setting_volume_pane

0x5c57,	// (0x00036231) volume_set_pane

0x22bc,	// (0x00032896) bg_set_opt_pane_cp

0x5c61,	// (0x0003623b) setting_slider_pane_t1

0x5c7a,	// (0x00036254) setting_slider_pane_t2

0x5c94,	// (0x0003626e) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003fb38) setting_slider_pane_t

0x5cac,	// (0x00036286) slider_set_pane

0x2260,	// (0x0003283a) bg_set_opt_pane_cp2

0x22ca,	// (0x000328a4) setting_slider_graphic_pane_g1

0x5cc2,	// (0x0003629c) setting_slider_graphic_pane_t1

0x5cd2,	// (0x000362ac) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003fb3f) setting_slider_graphic_pane_t

0x5ce2,	// (0x000362bc) slider_set_pane_cp

0x2260,	// (0x0003283a) input_focus_pane_cp1

0xaa67,	// (0x0003b041) list_set_text_pane

0x2256,	// (0x00032830) setting_text_pane_g1

0x2260,	// (0x0003283a) input_focus_pane_cp2

0x2256,	// (0x00032830) setting_code_pane_g1

0x22d3,	// (0x000328ad) setting_code_pane_t1

0x4079,	// (0x00034653) set_text_pane_t1_ParamLimits

0x4079,	// (0x00034653) set_text_pane_t1

0x2952,	// (0x00032f2c) set_opt_bg_pane_g1

0x295a,	// (0x00032f34) set_opt_bg_pane_g2

0xaa3f,	// (0x0003b019) set_opt_bg_pane_g3

0x296a,	// (0x00032f44) set_opt_bg_pane_g4

0x2972,	// (0x00032f4c) set_opt_bg_pane_g5

0x297a,	// (0x00032f54) set_opt_bg_pane_g6

0xaa49,	// (0x0003b023) set_opt_bg_pane_g7

0xaa53,	// (0x0003b02d) set_opt_bg_pane_g8

0xaa5d,	// (0x0003b037) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0003ff48) set_opt_bg_pane_g

0xaa32,	// (0x0003b00c) slider_set_pane_g1

0x7d09,	// (0x000382e3) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0003ff39) slider_set_pane_g

0x7c69,	// (0x00038243) volume_set_pane_g1

0x7c73,	// (0x0003824d) volume_set_pane_g2

0x7c7d,	// (0x00038257) volume_set_pane_g3

0x7c87,	// (0x00038261) volume_set_pane_g4

0x7c91,	// (0x0003826b) volume_set_pane_g5

0x7c9b,	// (0x00038275) volume_set_pane_g6

0x7ca5,	// (0x0003827f) volume_set_pane_g7

0x7caf,	// (0x00038289) volume_set_pane_g8

0x7cb9,	// (0x00038293) volume_set_pane_g9

0x7cc3,	// (0x0003829d) volume_set_pane_g10

0x0009,

0xf937,	// (0x0003ff11) volume_set_pane_g

0x5cea,	// (0x000362c4) indicator_pane_ParamLimits

0x5cea,	// (0x000362c4) indicator_pane

0x5cf6,	// (0x000362d0) main_idle_pane_g2_ParamLimits

0x5cf6,	// (0x000362d0) main_idle_pane_g2

0x5d1e,	// (0x000362f8) main_pane_idle_g1_ParamLimits

0x5d1e,	// (0x000362f8) main_pane_idle_g1

0x22e1,	// (0x000328bb) popup_clock_digital_analogue_window_ParamLimits

0x22e1,	// (0x000328bb) popup_clock_digital_analogue_window

0x5d2c,	// (0x00036306) soft_indicator_pane_ParamLimits

0x5d2c,	// (0x00036306) soft_indicator_pane

0x5d3a,	// (0x00036314) wallpaper_pane_ParamLimits

0x5d3a,	// (0x00036314) wallpaper_pane

0x2256,	// (0x00032830) wallpaper_pane_g1

0x5d46,	// (0x00036320) indicator_pane_g1_ParamLimits

0x5d46,	// (0x00036320) indicator_pane_g1

0xaebe,	// (0x0003b498) navi_navi_icon_text_pane_srt_g1

0x230f,	// (0x000328e9) soft_indicator_pane_t1

0x2329,	// (0x00032903) aid_ps_area_pane

0x5d52,	// (0x0003632c) aid_ps_clock_pane

0x233a,	// (0x00032914) aid_ps_indicator_pane

0x2346,	// (0x00032920) indicator_ps_pane_ParamLimits

0x2346,	// (0x00032920) indicator_ps_pane

0x2355,	// (0x0003292f) power_save_pane_g1_ParamLimits

0x2355,	// (0x0003292f) power_save_pane_g1

0x2361,	// (0x0003293b) power_save_pane_g2_ParamLimits

0x2361,	// (0x0003293b) power_save_pane_g2

0x5780,	// (0x00035d5a) aid_navinavi_width_pane

0x2329,	// (0x00032903) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003fb44) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003fb44) power_save_pane_g

0x236f,	// (0x00032949) power_save_pane_t1_ParamLimits

0x236f,	// (0x00032949) power_save_pane_t1

0x5d52,	// (0x0003632c) aid_ps_clock_pane_ParamLimits

0x233a,	// (0x00032914) aid_ps_indicator_pane_ParamLimits

0x2381,	// (0x0003295b) power_save_pane_t4_ParamLimits

0x2381,	// (0x0003295b) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003fb49) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003fb49) power_save_pane_t

0x23ab,	// (0x00032985) power_save_t3_ParamLimits

0x23ab,	// (0x00032985) power_save_t3

0x2396,	// (0x00032970) power_save_t2_ParamLimits

0x2396,	// (0x00032970) power_save_t2

0x23c0,	// (0x0003299a) indicator_ps_pane_g1

0x5d60,	// (0x0003633a) ai_gene_pane_ParamLimits

0x5d60,	// (0x0003633a) ai_gene_pane

0x5d6c,	// (0x00036346) ai_links_pane_ParamLimits

0x5d6c,	// (0x00036346) ai_links_pane

0x5d78,	// (0x00036352) indicator_pane_cp1_ParamLimits

0x5d78,	// (0x00036352) indicator_pane_cp1

0x5d84,	// (0x0003635e) main_pane_idle_g1_cp_ParamLimits

0x5d84,	// (0x0003635e) main_pane_idle_g1_cp

0x23c9,	// (0x000329a3) popup_ai_links_title_window

0x5d90,	// (0x0003636a) soft_indicator_pane_cp1_ParamLimits

0x5d90,	// (0x0003636a) soft_indicator_pane_cp1

0xa826,	// (0x0003ae00) ai_links_pane_g1

0xa82f,	// (0x0003ae09) grid_ai_links_pane

0xa80b,	// (0x0003ade5) ai_gene_pane_1

0xa814,	// (0x0003adee) ai_gene_pane_2

0xa81d,	// (0x0003adf7) list_highlight_pane_cp4

0xa7eb,	// (0x0003adc5) cell_ai_link_pane_ParamLimits

0xa7eb,	// (0x0003adc5) cell_ai_link_pane

0xa7e3,	// (0x0003adbd) cell_ai_link_pane_g1

0x25bd,	// (0x00032b97) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0003feec) cell_ai_link_pane_g

0x2260,	// (0x0003283a) grid_highlight_cp2

0x2260,	// (0x0003283a) bg_popup_sub_pane_cp1

0x23e0,	// (0x000329ba) popup_ai_links_title_window_t1

0xa72f,	// (0x0003ad09) ai_gene_pane_1_g1_ParamLimits

0xa72f,	// (0x0003ad09) ai_gene_pane_1_g1

0xa73b,	// (0x0003ad15) ai_gene_pane_1_g2_ParamLimits

0xa73b,	// (0x0003ad15) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0003fee2) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0003fee2) ai_gene_pane_1_g

0xa748,	// (0x0003ad22) ai_gene_pane_1_t1_ParamLimits

0xa748,	// (0x0003ad22) ai_gene_pane_1_t1

0xa77c,	// (0x0003ad56) grid_ai_soft_ind_pane

0xa71a,	// (0x0003acf4) ai_gene_pane_2_t1_ParamLimits

0xa71a,	// (0x0003acf4) ai_gene_pane_2_t1

0x5d9c,	// (0x00036376) main_pane_empty_t1_ParamLimits

0x5d9c,	// (0x00036376) main_pane_empty_t1

0x5db4,	// (0x0003638e) main_pane_empty_t2_ParamLimits

0x5db4,	// (0x0003638e) main_pane_empty_t2

0x5dc9,	// (0x000363a3) main_pane_empty_t3_ParamLimits

0x5dc9,	// (0x000363a3) main_pane_empty_t3

0x5ddb,	// (0x000363b5) main_pane_empty_t4_ParamLimits

0x5ddb,	// (0x000363b5) main_pane_empty_t4

0x5ded,	// (0x000363c7) main_pane_empty_t5_ParamLimits

0x5ded,	// (0x000363c7) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003fb4e) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003fb4e) main_pane_empty_t

0x29a3,	// (0x00032f7d) bg_popup_window_pane_ParamLimits

0x29a3,	// (0x00032f7d) bg_popup_window_pane

0xa47c,	// (0x0003aa56) find_popup_pane_cp2_ParamLimits

0xa47c,	// (0x0003aa56) find_popup_pane_cp2

0xa488,	// (0x0003aa62) heading_pane_ParamLimits

0xa488,	// (0x0003aa62) heading_pane

0x2260,	// (0x0003283a) bg_popup_sub_pane

0xa3f6,	// (0x0003a9d0) bg_popup_window_pane_g1_ParamLimits

0xa3f6,	// (0x0003a9d0) bg_popup_window_pane_g1

0xa402,	// (0x0003a9dc) bg_popup_window_pane_g2_ParamLimits

0xa402,	// (0x0003a9dc) bg_popup_window_pane_g2

0xa40e,	// (0x0003a9e8) bg_popup_window_pane_g3_ParamLimits

0xa40e,	// (0x0003a9e8) bg_popup_window_pane_g3

0xa41a,	// (0x0003a9f4) bg_popup_window_pane_g4_ParamLimits

0xa41a,	// (0x0003a9f4) bg_popup_window_pane_g4

0xa426,	// (0x0003aa00) bg_popup_window_pane_g5_ParamLimits

0xa426,	// (0x0003aa00) bg_popup_window_pane_g5

0xa432,	// (0x0003aa0c) bg_popup_window_pane_g6_ParamLimits

0xa432,	// (0x0003aa0c) bg_popup_window_pane_g6

0xa43e,	// (0x0003aa18) bg_popup_window_pane_g7_ParamLimits

0xa43e,	// (0x0003aa18) bg_popup_window_pane_g7

0xa44a,	// (0x0003aa24) bg_popup_window_pane_g8_ParamLimits

0xa44a,	// (0x0003aa24) bg_popup_window_pane_g8

0xa456,	// (0x0003aa30) bg_popup_window_pane_g9_ParamLimits

0xa456,	// (0x0003aa30) bg_popup_window_pane_g9

0xa462,	// (0x0003aa3c) bg_popup_window_pane_g10_ParamLimits

0xa462,	// (0x0003aa3c) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0003feaa) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0003feaa) bg_popup_window_pane_g

0xa38b,	// (0x0003a965) bg_popup_heading_pane_ParamLimits

0xa38b,	// (0x0003a965) bg_popup_heading_pane

0x7e05,	// (0x000383df) tabs_4_passive_pane_cp_srt_ParamLimits

0x7e05,	// (0x000383df) tabs_4_passive_pane_cp_srt

0x7e17,	// (0x000383f1) tabs_4_passive_pane_srt_ParamLimits

0xa39f,	// (0x0003a979) heading_pane_g2

0x7e17,	// (0x000383f1) tabs_4_passive_pane_srt

0x9186,	// (0x00039760) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9186,	// (0x00039760) bg_passive_tab_pane_cp3_srt

0xa3a7,	// (0x0003a981) heading_pane_t1_ParamLimits

0xa3a7,	// (0x0003a981) heading_pane_t1

0xa3be,	// (0x0003a998) heading_pane_t2_ParamLimits

0xa3be,	// (0x0003a998) heading_pane_t2

0x0001,

0xf8cb,	// (0x0003fea5) heading_pane_t_ParamLimits

0xf8cb,	// (0x0003fea5) heading_pane_t

0x9eb6,	// (0x0003a490) bg_popup_heading_pane_g1

0x9f65,	// (0x0003a53f) bg_popup_heading_pane_g2

0x9f6f,	// (0x0003a549) bg_popup_heading_pane_g3

0x9f79,	// (0x0003a553) bg_popup_heading_pane_g4

0x9f83,	// (0x0003a55d) bg_popup_heading_pane_g5

0x9f8d,	// (0x0003a567) bg_popup_heading_pane_g6

0x9f95,	// (0x0003a56f) bg_popup_heading_pane_g7

0x9f9d,	// (0x0003a577) bg_popup_heading_pane_g8

0x9fa7,	// (0x0003a581) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0003fe61) bg_popup_heading_pane_g

0x96b6,	// (0x00039c90) bg_popup_sub_pane_g1

0x96c6,	// (0x00039ca0) bg_popup_sub_pane_g2

0x96be,	// (0x00039c98) bg_popup_sub_pane_g3

0x96d6,	// (0x00039cb0) bg_popup_sub_pane_g4

0x96ce,	// (0x00039ca8) bg_popup_sub_pane_g5

0x96de,	// (0x00039cb8) bg_popup_sub_pane_g6

0x96e6,	// (0x00039cc0) bg_popup_sub_pane_g7

0x96f6,	// (0x00039cd0) bg_popup_sub_pane_g8

0x96ee,	// (0x00039cc8) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0003fe3b) bg_popup_sub_pane_g

0x22ae,	// (0x00032888) bg_popup_window_pane_cp5_ParamLimits

0x22ae,	// (0x00032888) bg_popup_window_pane_cp5

0x23fd,	// (0x000329d7) popup_note_window_g1_ParamLimits

0x23fd,	// (0x000329d7) popup_note_window_g1

0x2409,	// (0x000329e3) popup_note_window_t1_ParamLimits

0x2409,	// (0x000329e3) popup_note_window_t1

0x241f,	// (0x000329f9) popup_note_window_t2_ParamLimits

0x241f,	// (0x000329f9) popup_note_window_t2

0x2435,	// (0x00032a0f) popup_note_window_t3_ParamLimits

0x2435,	// (0x00032a0f) popup_note_window_t3

0x244b,	// (0x00032a25) popup_note_window_t4_ParamLimits

0x244b,	// (0x00032a25) popup_note_window_t4

0x2473,	// (0x00032a4d) popup_note_window_t5_ParamLimits

0x2473,	// (0x00032a4d) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003fb59) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003fb59) popup_note_window_t

0x24bd,	// (0x00032a97) bg_popup_window_pane_cp6_ParamLimits

0x24bd,	// (0x00032a97) bg_popup_window_pane_cp6

0x9e32,	// (0x0003a40c) popup_note_image_window_g1_ParamLimits

0x9e32,	// (0x0003a40c) popup_note_image_window_g1

0x9e3e,	// (0x0003a418) popup_note_image_window_g2_ParamLimits

0x9e3e,	// (0x0003a418) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0003fe2f) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0003fe2f) popup_note_image_window_g

0x9e57,	// (0x0003a431) popup_note_image_window_t1_ParamLimits

0x9e57,	// (0x0003a431) popup_note_image_window_t1

0x9e70,	// (0x0003a44a) popup_note_image_window_t2_ParamLimits

0x9e70,	// (0x0003a44a) popup_note_image_window_t2

0x9e89,	// (0x0003a463) popup_note_image_window_t3_ParamLimits

0x9e89,	// (0x0003a463) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0003fe34) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0003fe34) popup_note_image_window_t

0x9cf2,	// (0x0003a2cc) bg_popup_window_pane_cp7_ParamLimits

0x9cf2,	// (0x0003a2cc) bg_popup_window_pane_cp7

0x9d22,	// (0x0003a2fc) popup_note_wait_window_g1_ParamLimits

0x9d22,	// (0x0003a2fc) popup_note_wait_window_g1

0x9d2e,	// (0x0003a308) popup_note_wait_window_g2_ParamLimits

0x9d2e,	// (0x0003a308) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0003fe1d) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0003fe1d) popup_note_wait_window_g

0x9d46,	// (0x0003a320) popup_note_wait_window_t1_ParamLimits

0x9d46,	// (0x0003a320) popup_note_wait_window_t1

0x9d6d,	// (0x0003a347) popup_note_wait_window_t2_ParamLimits

0x9d6d,	// (0x0003a347) popup_note_wait_window_t2

0x9d8b,	// (0x0003a365) popup_note_wait_window_t3_ParamLimits

0x9d8b,	// (0x0003a365) popup_note_wait_window_t3

0x9d9e,	// (0x0003a378) popup_note_wait_window_t4_ParamLimits

0x9d9e,	// (0x0003a378) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0003fe24) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0003fe24) popup_note_wait_window_t

0x9dc3,	// (0x0003a39d) wait_bar_pane_ParamLimits

0x9dc3,	// (0x0003a39d) wait_bar_pane

0x2260,	// (0x0003283a) wait_anim_pane

0x2260,	// (0x0003283a) wait_border_pane

0x2256,	// (0x00032830) wait_anim_pane_g1

0x2256,	// (0x00032830) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0003fcd8) wait_anim_pane_g

0x9c96,	// (0x0003a270) wait_border_pane_g1

0x9ca1,	// (0x0003a27b) wait_border_pane_g2

0x9caa,	// (0x0003a284) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0003fe16) wait_border_pane_g

0x9b00,	// (0x0003a0da) bg_popup_window_pane_cp16_ParamLimits

0x9b00,	// (0x0003a0da) bg_popup_window_pane_cp16

0x9c00,	// (0x0003a1da) indicator_popup_pane_cp4_ParamLimits

0x9c00,	// (0x0003a1da) indicator_popup_pane_cp4

0x9c14,	// (0x0003a1ee) popup_query_data_window_t1_ParamLimits

0x9c14,	// (0x0003a1ee) popup_query_data_window_t1

0x9c26,	// (0x0003a200) popup_query_data_window_t2_ParamLimits

0x9c26,	// (0x0003a200) popup_query_data_window_t2

0x9c3f,	// (0x0003a219) popup_query_data_window_t3_ParamLimits

0x9c3f,	// (0x0003a219) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0003fe0f) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0003fe0f) popup_query_data_window_t

0x9c59,	// (0x0003a233) query_popup_data_pane_ParamLimits

0x9c59,	// (0x0003a233) query_popup_data_pane

0x9c6d,	// (0x0003a247) query_popup_data_pane_cp1_ParamLimits

0x9c6d,	// (0x0003a247) query_popup_data_pane_cp1

0x9b00,	// (0x0003a0da) bg_popup_window_pane_cp10_ParamLimits

0x9b00,	// (0x0003a0da) bg_popup_window_pane_cp10

0x9b32,	// (0x0003a10c) indicator_popup_pane_ParamLimits

0x9b32,	// (0x0003a10c) indicator_popup_pane

0x9b54,	// (0x0003a12e) popup_query_code_window_t1_ParamLimits

0x9b54,	// (0x0003a12e) popup_query_code_window_t1

0x9b6e,	// (0x0003a148) popup_query_code_window_t2_ParamLimits

0x9b6e,	// (0x0003a148) popup_query_code_window_t2

0x9bb7,	// (0x0003a191) popup_query_code_window_t3_ParamLimits

0x9bb7,	// (0x0003a191) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0003fe08) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0003fe08) popup_query_code_window_t

0x9be6,	// (0x0003a1c0) query_popup_pane_ParamLimits

0x9be6,	// (0x0003a1c0) query_popup_pane

0x24bd,	// (0x00032a97) bg_popup_window_pane_cp15_ParamLimits

0x24bd,	// (0x00032a97) bg_popup_window_pane_cp15

0x24dd,	// (0x00032ab7) indicator_popup_pane_cp1_ParamLimits

0x24dd,	// (0x00032ab7) indicator_popup_pane_cp1

0x24f0,	// (0x00032aca) indicator_popup_pane_cp2_ParamLimits

0x24f0,	// (0x00032aca) indicator_popup_pane_cp2

0x250b,	// (0x00032ae5) popup_query_data_code_window_g1_ParamLimits

0x250b,	// (0x00032ae5) popup_query_data_code_window_g1

0x251e,	// (0x00032af8) popup_query_data_code_window_t1_ParamLimits

0x251e,	// (0x00032af8) popup_query_data_code_window_t1

0x2530,	// (0x00032b0a) popup_query_data_code_window_t2_ParamLimits

0x2530,	// (0x00032b0a) popup_query_data_code_window_t2

0x2542,	// (0x00032b1c) popup_query_data_code_window_t3_ParamLimits

0x2542,	// (0x00032b1c) popup_query_data_code_window_t3

0x2558,	// (0x00032b32) popup_query_data_code_window_t4_ParamLimits

0x2558,	// (0x00032b32) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003fb64) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003fb64) popup_query_data_code_window_t

0x79e9,	// (0x00037fc3) list_single_midp_graphic_pane_g3

0x2572,	// (0x00032b4c) query_popup_data_pane_cp2_ParamLimits

0x2585,	// (0x00032b5f) query_popup_pane_cp2_ParamLimits

0x2585,	// (0x00032b5f) query_popup_pane_cp2

0x2260,	// (0x0003283a) bg_popup_window_pane_cp11

0x9aec,	// (0x0003a0c6) heading_pane_cp5

0x261e,	// (0x00032bf8) listscroll_popup_info_pane

0x2260,	// (0x0003283a) input_focus_pane_cp3

0x25a0,	// (0x00032b7a) query_popup_pane_t1

0x25ae,	// (0x00032b88) list_popup_info_pane_ParamLimits

0x25ae,	// (0x00032b88) list_popup_info_pane

0x25bd,	// (0x00032b97) listscroll_popup_info_pane_g1

0x25c5,	// (0x00032b9f) scroll_pane_cp7

0x25cf,	// (0x00032ba9) popup_info_list_pane_t1_ParamLimits

0x25cf,	// (0x00032ba9) popup_info_list_pane_t1

0x25e9,	// (0x00032bc3) popup_info_list_pane_t2_ParamLimits

0x25e9,	// (0x00032bc3) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003fb6d) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003fb6d) popup_info_list_pane_t

0x2260,	// (0x0003283a) bg_popup_window_pane_cp12

0xaed8,	// (0x0003b4b2) find_popup_pane

0x22bc,	// (0x00032896) bg_popup_window_pane_cp3

0x2603,	// (0x00032bdd) heading_pane_cp3

0x260f,	// (0x00032be9) listscroll_popup_graphic_pane

0x2260,	// (0x0003283a) bg_popup_window_pane_cp4

0x5e4f,	// (0x00036429) heading_pane_cp4

0x261e,	// (0x00032bf8) listscroll_popup_colour_pane

0x5e59,	// (0x00036433) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x5e59,	// (0x00036433) cell_large_graphic_colour_none_popup_pane

0x5e6d,	// (0x00036447) grid_large_graphic_colour_popup_pane_ParamLimits

0x5e6d,	// (0x00036447) grid_large_graphic_colour_popup_pane

0x5e99,	// (0x00036473) listscroll_popup_colour_pane_g1_ParamLimits

0x5e99,	// (0x00036473) listscroll_popup_colour_pane_g1

0x5eb0,	// (0x0003648a) listscroll_popup_colour_pane_g2_ParamLimits

0x5eb0,	// (0x0003648a) listscroll_popup_colour_pane_g2

0x5ec7,	// (0x000364a1) listscroll_popup_colour_pane_g3_ParamLimits

0x5ec7,	// (0x000364a1) listscroll_popup_colour_pane_g3

0x5ed7,	// (0x000364b1) listscroll_popup_colour_pane_g4_ParamLimits

0x5ed7,	// (0x000364b1) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003fb72) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003fb72) listscroll_popup_colour_pane_g

0x2626,	// (0x00032c00) scroll_pane_cp6_ParamLimits

0x2626,	// (0x00032c00) scroll_pane_cp6

0x5eeb,	// (0x000364c5) cell_large_graphic_colour_popup_pane_ParamLimits

0x5eeb,	// (0x000364c5) cell_large_graphic_colour_popup_pane

0x2638,	// (0x00032c12) cell_large_graphic_colour_none_popup_pane_t1

0x2260,	// (0x0003283a) grid_highlight_pane_cp5

0x2647,	// (0x00032c21) cell_large_graphic_colour_popup_pane_g1

0x264f,	// (0x00032c29) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003fb7b) cell_large_graphic_colour_popup_pane_g

0x2657,	// (0x00032c31) cell_large_graphic_colour_popup_pane_g2_copy1

0x2660,	// (0x00032c3a) grid_highlight_pane_cp4

0x2668,	// (0x00032c42) bg_popup_window_pane_cp8_ParamLimits

0x2668,	// (0x00032c42) bg_popup_window_pane_cp8

0x2683,	// (0x00032c5d) popup_snote_single_text_window_g1_ParamLimits

0x2683,	// (0x00032c5d) popup_snote_single_text_window_g1

0x2695,	// (0x00032c6f) popup_snote_single_text_window_t1_ParamLimits

0x2695,	// (0x00032c6f) popup_snote_single_text_window_t1

0x26a8,	// (0x00032c82) popup_snote_single_text_window_t2_ParamLimits

0x26a8,	// (0x00032c82) popup_snote_single_text_window_t2

0x26bb,	// (0x00032c95) popup_snote_single_text_window_t3_ParamLimits

0x26bb,	// (0x00032c95) popup_snote_single_text_window_t3

0x26f4,	// (0x00032cce) popup_snote_single_text_window_t4_ParamLimits

0x26f4,	// (0x00032cce) popup_snote_single_text_window_t4

0x2728,	// (0x00032d02) popup_snote_single_text_window_t5_ParamLimits

0x2728,	// (0x00032d02) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003fb80) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003fb80) popup_snote_single_text_window_t

0x2757,	// (0x00032d31) bg_popup_window_pane_cp9_ParamLimits

0x2757,	// (0x00032d31) bg_popup_window_pane_cp9

0x2683,	// (0x00032c5d) popup_snote_single_graphic_window_g1_ParamLimits

0x2683,	// (0x00032c5d) popup_snote_single_graphic_window_g1

0x2765,	// (0x00032d3f) popup_snote_single_graphic_window_g2_ParamLimits

0x2765,	// (0x00032d3f) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003fb8b) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003fb8b) popup_snote_single_graphic_window_g

0x2771,	// (0x00032d4b) popup_snote_single_graphic_window_t1_ParamLimits

0x2771,	// (0x00032d4b) popup_snote_single_graphic_window_t1

0x2784,	// (0x00032d5e) popup_snote_single_graphic_window_t2_ParamLimits

0x2784,	// (0x00032d5e) popup_snote_single_graphic_window_t2

0x2797,	// (0x00032d71) popup_snote_single_graphic_window_t3_ParamLimits

0x2797,	// (0x00032d71) popup_snote_single_graphic_window_t3

0x27d0,	// (0x00032daa) popup_snote_single_graphic_window_t4_ParamLimits

0x27d0,	// (0x00032daa) popup_snote_single_graphic_window_t4

0x2804,	// (0x00032dde) popup_snote_single_graphic_window_t5_ParamLimits

0x2804,	// (0x00032dde) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003fb90) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003fb90) popup_snote_single_graphic_window_t

0xae16,	// (0x0003b3f0) grid_graphic_popup_pane_ParamLimits

0xae16,	// (0x0003b3f0) grid_graphic_popup_pane

0xae44,	// (0x0003b41e) listscroll_popup_graphic_pane_g1_ParamLimits

0xae44,	// (0x0003b41e) listscroll_popup_graphic_pane_g1

0xae58,	// (0x0003b432) listscroll_popup_graphic_pane_g2_ParamLimits

0xae58,	// (0x0003b432) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0003ff85) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0003ff85) listscroll_popup_graphic_pane_g

0xae6c,	// (0x0003b446) scroll_pane_cp5

0xadab,	// (0x0003b385) cell_graphic_popup_pane_ParamLimits

0xadab,	// (0x0003b385) cell_graphic_popup_pane

0xad8c,	// (0x0003b366) cell_graphic_popup_pane_g1

0xad94,	// (0x0003b36e) cell_graphic_popup_pane_g2

0x2657,	// (0x00032c31) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0003ff7e) cell_graphic_popup_pane_g

0xad9d,	// (0x0003b377) cell_graphic_popup_pane_t2

0x2660,	// (0x00032c3a) grid_highlight_pane_cp3

0x2845,	// (0x00032e1f) list_gen_pane_ParamLimits

0x2845,	// (0x00032e1f) list_gen_pane

0x286d,	// (0x00032e47) scroll_pane

0xace4,	// (0x0003b2be) bg_list_pane_g1_ParamLimits

0xace4,	// (0x0003b2be) bg_list_pane_g1

0xad01,	// (0x0003b2db) bg_list_pane_g2_ParamLimits

0xad01,	// (0x0003b2db) bg_list_pane_g2

0xad16,	// (0x0003b2f0) bg_list_pane_g3_ParamLimits

0xad16,	// (0x0003b2f0) bg_list_pane_g3

0xad2a,	// (0x0003b304) bg_list_pane_g4_ParamLimits

0xad2a,	// (0x0003b304) bg_list_pane_g4

0xad3e,	// (0x0003b318) bg_list_pane_g5_ParamLimits

0xad3e,	// (0x0003b318) bg_list_pane_g5

0x0004,

0xf999,	// (0x0003ff73) bg_list_pane_g_ParamLimits

0xf999,	// (0x0003ff73) bg_list_pane_g

0xac52,	// (0x0003b22c) list_double2_graphic_large_graphic_pane_ParamLimits

0xac52,	// (0x0003b22c) list_double2_graphic_large_graphic_pane

0xac52,	// (0x0003b22c) list_double2_graphic_pane_ParamLimits

0xac52,	// (0x0003b22c) list_double2_graphic_pane

0xac52,	// (0x0003b22c) list_double2_large_graphic_pane_ParamLimits

0xac52,	// (0x0003b22c) list_double2_large_graphic_pane

0xac52,	// (0x0003b22c) list_double2_pane_ParamLimits

0xac52,	// (0x0003b22c) list_double2_pane

0xac52,	// (0x0003b22c) list_double_graphic_heading_pane_ParamLimits

0xac52,	// (0x0003b22c) list_double_graphic_heading_pane

0xac52,	// (0x0003b22c) list_double_graphic_pane_ParamLimits

0xac52,	// (0x0003b22c) list_double_graphic_pane

0xac52,	// (0x0003b22c) list_double_heading_pane_ParamLimits

0xac52,	// (0x0003b22c) list_double_heading_pane

0xac52,	// (0x0003b22c) list_double_large_graphic_pane_ParamLimits

0xac52,	// (0x0003b22c) list_double_large_graphic_pane

0xac52,	// (0x0003b22c) list_double_number_pane_ParamLimits

0xac52,	// (0x0003b22c) list_double_number_pane

0xac52,	// (0x0003b22c) list_double_pane_ParamLimits

0xac52,	// (0x0003b22c) list_double_pane

0xac52,	// (0x0003b22c) list_double_time_pane_ParamLimits

0xac52,	// (0x0003b22c) list_double_time_pane

0xac52,	// (0x0003b22c) list_setting_number_pane_ParamLimits

0xac52,	// (0x0003b22c) list_setting_number_pane

0xac52,	// (0x0003b22c) list_setting_pane_ParamLimits

0xac52,	// (0x0003b22c) list_setting_pane

0xacb4,	// (0x0003b28e) list_single_2graphic_pane_ParamLimits

0xacb4,	// (0x0003b28e) list_single_2graphic_pane

0xacb4,	// (0x0003b28e) list_single_graphic_heading_pane_ParamLimits

0xacb4,	// (0x0003b28e) list_single_graphic_heading_pane

0xacb4,	// (0x0003b28e) list_single_graphic_pane_ParamLimits

0xacb4,	// (0x0003b28e) list_single_graphic_pane

0xacb4,	// (0x0003b28e) list_single_heading_pane_ParamLimits

0xacb4,	// (0x0003b28e) list_single_heading_pane

0x7dc6,	// (0x000383a0) list_single_large_graphic_pane_ParamLimits

0x7dc6,	// (0x000383a0) list_single_large_graphic_pane

0xacb4,	// (0x0003b28e) list_single_number_heading_pane_ParamLimits

0xacb4,	// (0x0003b28e) list_single_number_heading_pane

0xacb4,	// (0x0003b28e) list_single_number_pane_ParamLimits

0xacb4,	// (0x0003b28e) list_single_number_pane

0xacb4,	// (0x0003b28e) list_single_pane_ParamLimits

0xacb4,	// (0x0003b28e) list_single_pane

0x2260,	// (0x0003283a) list_highlight_pane_cp1

0x47da,	// (0x00034db4) list_single_pane_g1_ParamLimits

0x47da,	// (0x00034db4) list_single_pane_g1

0x5f26,	// (0x00036500) list_single_pane_g2_ParamLimits

0x5f26,	// (0x00036500) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0003fba2) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0003fba2) list_single_pane_g

0x7d9b,	// (0x00038375) list_single_pane_t1_ParamLimits

0x7d9b,	// (0x00038375) list_single_pane_t1

0x47da,	// (0x00034db4) list_single_number_pane_g1_ParamLimits

0x47da,	// (0x00034db4) list_single_number_pane_g1

0x5f26,	// (0x00036500) list_single_number_pane_g2_ParamLimits

0x5f26,	// (0x00036500) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0003fba2) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0003fba2) list_single_number_pane_g

0x7ccd,	// (0x000382a7) list_single_number_pane_t1_ParamLimits

0x7ccd,	// (0x000382a7) list_single_number_pane_t1

0x7ce3,	// (0x000382bd) list_single_number_pane_t2_ParamLimits

0x7ce3,	// (0x000382bd) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0003ff34) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0003ff34) list_single_number_pane_t

0x5f1a,	// (0x000364f4) list_single_graphic_pane_g1_ParamLimits

0x5f1a,	// (0x000364f4) list_single_graphic_pane_g1

0x47da,	// (0x00034db4) list_single_graphic_pane_g2_ParamLimits

0x47da,	// (0x00034db4) list_single_graphic_pane_g2

0x5f26,	// (0x00036500) list_single_graphic_pane_g3_ParamLimits

0x5f26,	// (0x00036500) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003fb9b) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003fb9b) list_single_graphic_pane_g

0x5f32,	// (0x0003650c) list_single_graphic_pane_t1_ParamLimits

0x5f32,	// (0x0003650c) list_single_graphic_pane_t1

0x47da,	// (0x00034db4) list_single_heading_pane_g1_ParamLimits

0x47da,	// (0x00034db4) list_single_heading_pane_g1

0x5f26,	// (0x00036500) list_single_heading_pane_g2_ParamLimits

0x5f26,	// (0x00036500) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003fba2) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003fba2) list_single_heading_pane_g

0x5f48,	// (0x00036522) list_single_heading_pane_t1_ParamLimits

0x5f48,	// (0x00036522) list_single_heading_pane_t1

0x5f5e,	// (0x00036538) list_single_heading_pane_t2_ParamLimits

0x5f5e,	// (0x00036538) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003fba7) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003fba7) list_single_heading_pane_t

0x47da,	// (0x00034db4) list_single_number_heading_pane_g1_ParamLimits

0x47da,	// (0x00034db4) list_single_number_heading_pane_g1

0x5f26,	// (0x00036500) list_single_number_heading_pane_g2_ParamLimits

0x5f26,	// (0x00036500) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003fba2) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003fba2) list_single_number_heading_pane_g

0x5f48,	// (0x00036522) list_single_number_heading_pane_t1_ParamLimits

0x5f48,	// (0x00036522) list_single_number_heading_pane_t1

0x5f70,	// (0x0003654a) list_single_number_heading_pane_t2_ParamLimits

0x5f70,	// (0x0003654a) list_single_number_heading_pane_t2

0x5f82,	// (0x0003655c) list_single_number_heading_pane_t3_ParamLimits

0x5f82,	// (0x0003655c) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0003fbac) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0003fbac) list_single_number_heading_pane_t

0x5f94,	// (0x0003656e) list_single_graphic_heading_pane_g1_ParamLimits

0x5f94,	// (0x0003656e) list_single_graphic_heading_pane_g1

0x5fa0,	// (0x0003657a) list_single_graphic_heading_pane_g4_ParamLimits

0x5fa0,	// (0x0003657a) list_single_graphic_heading_pane_g4

0x5f26,	// (0x00036500) list_single_graphic_heading_pane_g5_ParamLimits

0x5f26,	// (0x00036500) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0003fbb3) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0003fbb3) list_single_graphic_heading_pane_g

0x5f48,	// (0x00036522) list_single_graphic_heading_pane_t1_ParamLimits

0x5f48,	// (0x00036522) list_single_graphic_heading_pane_t1

0x5fb1,	// (0x0003658b) list_single_graphic_heading_pane_t2_ParamLimits

0x5fb1,	// (0x0003658b) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0003fbba) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0003fbba) list_single_graphic_heading_pane_t

0x5fc3,	// (0x0003659d) list_single_large_graphic_pane_g1_ParamLimits

0x5fc3,	// (0x0003659d) list_single_large_graphic_pane_g1

0x47da,	// (0x00034db4) list_single_large_graphic_pane_g2_ParamLimits

0x47da,	// (0x00034db4) list_single_large_graphic_pane_g2

0x5f26,	// (0x00036500) list_single_large_graphic_pane_g3_ParamLimits

0x5f26,	// (0x00036500) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0003fbbf) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0003fbbf) list_single_large_graphic_pane_g

0x9ca1,	// (0x0003a27b) wait_border_pane_g2_copy1

0x5fcf,	// (0x000365a9) list_single_large_graphic_pane_g4_cp2

0x5fd7,	// (0x000365b1) list_single_large_graphic_pane_t1_ParamLimits

0x5fd7,	// (0x000365b1) list_single_large_graphic_pane_t1

0x5fed,	// (0x000365c7) list_double_pane_g1_ParamLimits

0x5fed,	// (0x000365c7) list_double_pane_g1

0x5ff9,	// (0x000365d3) list_double_pane_g2_ParamLimits

0x5ff9,	// (0x000365d3) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0003fbc6) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0003fbc6) list_double_pane_g

0x6005,	// (0x000365df) list_double_pane_t1_ParamLimits

0x6005,	// (0x000365df) list_double_pane_t1

0x601b,	// (0x000365f5) list_double_pane_t2_ParamLimits

0x601b,	// (0x000365f5) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0003fbcb) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0003fbcb) list_double_pane_t

0x602d,	// (0x00036607) list_double2_pane_g1_ParamLimits

0x602d,	// (0x00036607) list_double2_pane_g1

0x5ff9,	// (0x000365d3) list_double2_pane_g2_ParamLimits

0x5ff9,	// (0x000365d3) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0003fbd0) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0003fbd0) list_double2_pane_g

0x6005,	// (0x000365df) list_double2_pane_t1_ParamLimits

0x6005,	// (0x000365df) list_double2_pane_t1

0x603e,	// (0x00036618) list_double2_pane_t2_ParamLimits

0x603e,	// (0x00036618) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0003fbd5) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0003fbd5) list_double2_pane_t

0x5fed,	// (0x000365c7) list_double_number_pane_g1_ParamLimits

0x5fed,	// (0x000365c7) list_double_number_pane_g1

0x5ff9,	// (0x000365d3) list_double_number_pane_g2_ParamLimits

0x5ff9,	// (0x000365d3) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0003fbc6) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0003fbc6) list_double_number_pane_g

0x6050,	// (0x0003662a) list_double_number_pane_t1_ParamLimits

0x6050,	// (0x0003662a) list_double_number_pane_t1

0x6062,	// (0x0003663c) list_double_number_pane_t2_ParamLimits

0x6062,	// (0x0003663c) list_double_number_pane_t2

0x6078,	// (0x00036652) list_double_number_pane_t3_ParamLimits

0x6078,	// (0x00036652) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0003fbda) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0003fbda) list_double_number_pane_t

0x414f,	// (0x00034729) list_double_graphic_pane_g1_ParamLimits

0x414f,	// (0x00034729) list_double_graphic_pane_g1

0x608a,	// (0x00036664) list_double_graphic_pane_g2_ParamLimits

0x608a,	// (0x00036664) list_double_graphic_pane_g2

0x6099,	// (0x00036673) list_double_graphic_pane_g3_ParamLimits

0x6099,	// (0x00036673) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0003fbe1) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0003fbe1) list_double_graphic_pane_g

0x60b1,	// (0x0003668b) list_double_graphic_pane_t1_ParamLimits

0x60b1,	// (0x0003668b) list_double_graphic_pane_t1

0x60c7,	// (0x000366a1) list_double_graphic_pane_t2_ParamLimits

0x60c7,	// (0x000366a1) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0003fbea) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0003fbea) list_double_graphic_pane_t

0x414f,	// (0x00034729) list_double2_graphic_pane_g1_ParamLimits

0x414f,	// (0x00034729) list_double2_graphic_pane_g1

0x60d9,	// (0x000366b3) list_double2_graphic_pane_g2_ParamLimits

0x60d9,	// (0x000366b3) list_double2_graphic_pane_g2

0x60e5,	// (0x000366bf) list_double2_graphic_pane_g3_ParamLimits

0x60e5,	// (0x000366bf) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0003fbef) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0003fbef) list_double2_graphic_pane_g

0x6062,	// (0x0003663c) list_double2_graphic_pane_t1_ParamLimits

0x6062,	// (0x0003663c) list_double2_graphic_pane_t1

0x60f1,	// (0x000366cb) list_double2_graphic_pane_t2_ParamLimits

0x60f1,	// (0x000366cb) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003fbf6) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003fbf6) list_double2_graphic_pane_t

0x6103,	// (0x000366dd) list_double_large_graphic_pane_g1_ParamLimits

0x6103,	// (0x000366dd) list_double_large_graphic_pane_g1

0x602d,	// (0x00036607) list_double_large_graphic_pane_g2_ParamLimits

0x602d,	// (0x00036607) list_double_large_graphic_pane_g2

0x5ff9,	// (0x000365d3) list_double_large_graphic_pane_g3_ParamLimits

0x5ff9,	// (0x000365d3) list_double_large_graphic_pane_g3

0x6122,	// (0x000366fc) list_double_large_graphic_pane_g4_ParamLimits

0x6122,	// (0x000366fc) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0003fbfb) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0003fbfb) list_double_large_graphic_pane_g

0x6135,	// (0x0003670f) list_double_large_graphic_pane_t1_ParamLimits

0x6135,	// (0x0003670f) list_double_large_graphic_pane_t1

0x614e,	// (0x00036728) list_double_large_graphic_pane_t2_ParamLimits

0x614e,	// (0x00036728) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003fc06) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003fc06) list_double_large_graphic_pane_t

0x6160,	// (0x0003673a) list_double2_large_graphic_pane_g1_ParamLimits

0x6160,	// (0x0003673a) list_double2_large_graphic_pane_g1

0x602d,	// (0x00036607) list_double2_large_graphic_pane_g2_ParamLimits

0x602d,	// (0x00036607) list_double2_large_graphic_pane_g2

0x5ff9,	// (0x000365d3) list_double2_large_graphic_pane_g3_ParamLimits

0x5ff9,	// (0x000365d3) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0003fc0b) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0003fc0b) list_double2_large_graphic_pane_g

0x616c,	// (0x00036746) list_double2_large_graphic_pane_t1_ParamLimits

0x616c,	// (0x00036746) list_double2_large_graphic_pane_t1

0x6182,	// (0x0003675c) list_double2_large_graphic_pane_t2_ParamLimits

0x6182,	// (0x0003675c) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0003fc12) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0003fc12) list_double2_large_graphic_pane_t

0x6194,	// (0x0003676e) list_double_heading_pane_g1_ParamLimits

0x6194,	// (0x0003676e) list_double_heading_pane_g1

0x4116,	// (0x000346f0) list_double_heading_pane_g2_ParamLimits

0x4116,	// (0x000346f0) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0003fc17) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0003fc17) list_double_heading_pane_g

0x61a5,	// (0x0003677f) list_double_heading_pane_t1_ParamLimits

0x61a5,	// (0x0003677f) list_double_heading_pane_t1

0x61bb,	// (0x00036795) list_double_heading_pane_t2_ParamLimits

0x61bb,	// (0x00036795) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0003fc1c) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0003fc1c) list_double_heading_pane_t

0x61cd,	// (0x000367a7) list_double_graphic_heading_pane_g1_ParamLimits

0x61cd,	// (0x000367a7) list_double_graphic_heading_pane_g1

0x6194,	// (0x0003676e) list_double_graphic_heading_pane_g2_ParamLimits

0x6194,	// (0x0003676e) list_double_graphic_heading_pane_g2

0x4116,	// (0x000346f0) list_double_graphic_heading_pane_g3_ParamLimits

0x4116,	// (0x000346f0) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0003fc21) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0003fc21) list_double_graphic_heading_pane_g

0x61d9,	// (0x000367b3) list_double_graphic_heading_pane_t1_ParamLimits

0x61d9,	// (0x000367b3) list_double_graphic_heading_pane_t1

0x61ef,	// (0x000367c9) list_double_graphic_heading_pane_t2_ParamLimits

0x61ef,	// (0x000367c9) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0003fc28) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0003fc28) list_double_graphic_heading_pane_t

0x602d,	// (0x00036607) list_double_time_pane_g1_ParamLimits

0x602d,	// (0x00036607) list_double_time_pane_g1

0x5ff9,	// (0x000365d3) list_double_time_pane_g2_ParamLimits

0x5ff9,	// (0x000365d3) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x0003fbd0) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x0003fbd0) list_double_time_pane_g

0x6201,	// (0x000367db) list_double_time_pane_t1_ParamLimits

0x6201,	// (0x000367db) list_double_time_pane_t1

0x6217,	// (0x000367f1) list_double_time_pane_t2_ParamLimits

0x6217,	// (0x000367f1) list_double_time_pane_t2

0x6229,	// (0x00036803) list_double_time_pane_t3_ParamLimits

0x6229,	// (0x00036803) list_double_time_pane_t3

0x623b,	// (0x00036815) list_double_time_pane_t4_ParamLimits

0x623b,	// (0x00036815) list_double_time_pane_t4

0x0003,

0xf653,	// (0x0003fc2d) list_double_time_pane_t_ParamLimits

0xf653,	// (0x0003fc2d) list_double_time_pane_t

0x4122,	// (0x000346fc) list_setting_pane_g1_ParamLimits

0x4122,	// (0x000346fc) list_setting_pane_g1

0x412e,	// (0x00034708) list_setting_pane_g2_ParamLimits

0x412e,	// (0x00034708) list_setting_pane_g2

0x0001,

0xf65c,	// (0x0003fc36) list_setting_pane_g_ParamLimits

0xf65c,	// (0x0003fc36) list_setting_pane_g

0x624d,	// (0x00036827) list_setting_pane_t1_ParamLimits

0x624d,	// (0x00036827) list_setting_pane_t1

0x6267,	// (0x00036841) list_setting_pane_t2_ParamLimits

0x6267,	// (0x00036841) list_setting_pane_t2

0x0002,

0xf661,	// (0x0003fc3b) list_setting_pane_t_ParamLimits

0xf661,	// (0x0003fc3b) list_setting_pane_t

0x62a6,	// (0x00036880) set_value_pane_cp_ParamLimits

0x62a6,	// (0x00036880) set_value_pane_cp

0x62b4,	// (0x0003688e) list_setting_number_pane_g1_ParamLimits

0x62b4,	// (0x0003688e) list_setting_number_pane_g1

0x62c0,	// (0x0003689a) list_setting_number_pane_g2_ParamLimits

0x62c0,	// (0x0003689a) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x0003fc42) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x0003fc42) list_setting_number_pane_g

0x62cc,	// (0x000368a6) list_setting_number_pane_t1_ParamLimits

0x62cc,	// (0x000368a6) list_setting_number_pane_t1

0x62e5,	// (0x000368bf) list_setting_number_pane_t2_ParamLimits

0x62e5,	// (0x000368bf) list_setting_number_pane_t2

0x62ff,	// (0x000368d9) list_setting_number_pane_t3_ParamLimits

0x62ff,	// (0x000368d9) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0003fc47) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0003fc47) list_setting_number_pane_t

0x62a6,	// (0x00036880) set_value_pane_ParamLimits

0x62a6,	// (0x00036880) set_value_pane

0x28a1,	// (0x00032e7b) bg_set_opt_pane_ParamLimits

0x28a1,	// (0x00032e7b) bg_set_opt_pane

0x415b,	// (0x00034735) set_value_pane_t1

0x28c2,	// (0x00032e9c) slider_set_pane_cp3

0x28cb,	// (0x00032ea5) volume_small_pane_cp

0x28d4,	// (0x00032eae) list_form_gen_pane

0x28dd,	// (0x00032eb7) scroll_pane_cp8

0x6342,	// (0x0003691c) form_field_data_pane_ParamLimits

0x6342,	// (0x0003691c) form_field_data_pane

0x6360,	// (0x0003693a) form_field_data_wide_pane_ParamLimits

0x6360,	// (0x0003693a) form_field_data_wide_pane

0x4179,	// (0x00034753) form_field_popup_pane_ParamLimits

0x4179,	// (0x00034753) form_field_popup_pane

0x6385,	// (0x0003695f) form_field_popup_wide_pane_ParamLimits

0x6385,	// (0x0003695f) form_field_popup_wide_pane

0x419b,	// (0x00034775) form_field_slider_pane_ParamLimits

0x419b,	// (0x00034775) form_field_slider_pane

0x41ae,	// (0x00034788) form_field_slider_wide_pane_ParamLimits

0x41ae,	// (0x00034788) form_field_slider_wide_pane

0x28ee,	// (0x00032ec8) data_form_pane

0x63b0,	// (0x0003698a) form_field_data_pane_t1

0x28fa,	// (0x00032ed4) input_focus_pane

0x41c1,	// (0x0003479b) data_form_wide_pane

0x41de,	// (0x000347b8) form_field_data_wide_pane_t1

0x2675,	// (0x00032c4f) input_focus_pane_cp6

0x63ca,	// (0x000369a4) form_field_popup_pane_t1

0x28fa,	// (0x00032ed4) input_focus_pane_cp7

0x2928,	// (0x00032f02) list_form_pane

0x4208,	// (0x000347e2) form_field_popup_wide_pane_t1

0x28fa,	// (0x00032ed4) input_focus_pane_cp8

0x2934,	// (0x00032f0e) list_form_wide_pane

0x63ec,	// (0x000369c6) form_field_slider_pane_t1_ParamLimits

0x63ec,	// (0x000369c6) form_field_slider_pane_t1

0x6404,	// (0x000369de) form_field_slider_pane_t2_ParamLimits

0x6404,	// (0x000369de) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0003fc57) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0003fc57) form_field_slider_pane_t

0x22ae,	// (0x00032888) input_focus_pane_cp9_ParamLimits

0x22ae,	// (0x00032888) input_focus_pane_cp9

0x6419,	// (0x000369f3) slider_cont_pane_ParamLimits

0x6419,	// (0x000369f3) slider_cont_pane

0x2940,	// (0x00032f1a) form_field_slider_wide_pane_t1_ParamLimits

0x2940,	// (0x00032f1a) form_field_slider_wide_pane_t1

0x421d,	// (0x000347f7) form_field_slider_wide_pane_t2_ParamLimits

0x421d,	// (0x000347f7) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0003fc5c) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0003fc5c) form_field_slider_wide_pane_t

0x22ae,	// (0x00032888) input_focus_pane_cp10_ParamLimits

0x22ae,	// (0x00032888) input_focus_pane_cp10

0x642d,	// (0x00036a07) slider_cont_pane_cp1_ParamLimits

0x642d,	// (0x00036a07) slider_cont_pane_cp1

0x6441,	// (0x00036a1b) slider_form_pane_cp

0x2952,	// (0x00032f2c) input_focus_pane_g1

0x295a,	// (0x00032f34) input_focus_pane_g2

0x2962,	// (0x00032f3c) input_focus_pane_g3

0x296a,	// (0x00032f44) input_focus_pane_g4

0x2972,	// (0x00032f4c) input_focus_pane_g5

0x297a,	// (0x00032f54) input_focus_pane_g6

0x2982,	// (0x00032f5c) input_focus_pane_g7

0x298a,	// (0x00032f64) input_focus_pane_g8

0x2992,	// (0x00032f6c) input_focus_pane_g9

0x2256,	// (0x00032830) input_focus_pane_g10

0x0009,

0xf687,	// (0x0003fc61) input_focus_pane_g

0x9caa,	// (0x0003a284) wait_border_pane_g3_copy1

0x6449,	// (0x00036a23) data_form_pane_t1

0x2256,	// (0x00032830) wait_anim_pane_g1_copy1

0x7d6d,	// (0x00038347) data_form_wide_pane_t1

0x6466,	// (0x00036a40) list_form_graphic_pane_cp_ParamLimits

0x6466,	// (0x00036a40) list_form_graphic_pane_cp

0xabf6,	// (0x0003b1d0) slider_form_pane_g1

0xabff,	// (0x0003b1d9) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0003ff64) slider_form_pane_g

0x422f,	// (0x00034809) list_form_graphic_pane_ParamLimits

0x422f,	// (0x00034809) list_form_graphic_pane

0x4241,	// (0x0003481b) list_form_graphic_pane_g1

0x4249,	// (0x00034823) list_form_graphic_pane_t1_ParamLimits

0x4249,	// (0x00034823) list_form_graphic_pane_t1

0x22bc,	// (0x00032896) list_highlight_pane_cp5_ParamLimits

0x22bc,	// (0x00032896) list_highlight_pane_cp5

0x647b,	// (0x00036a55) find_pane_g1

0x299a,	// (0x00032f74) input_find_pane

0x6484,	// (0x00036a5e) input_find_pane_g1_ParamLimits

0x6484,	// (0x00036a5e) input_find_pane_g1

0x6490,	// (0x00036a6a) input_find_pane_t1_ParamLimits

0x6490,	// (0x00036a6a) input_find_pane_t1

0x64a5,	// (0x00036a7f) input_find_pane_t2_ParamLimits

0x64a5,	// (0x00036a7f) input_find_pane_t2

0x0001,

0xf69c,	// (0x0003fc76) input_find_pane_t_ParamLimits

0xf69c,	// (0x0003fc76) input_find_pane_t

0x29a3,	// (0x00032f7d) input_focus_pane_cp5_ParamLimits

0x29a3,	// (0x00032f7d) input_focus_pane_cp5

0x29b1,	// (0x00032f8b) bg_popup_window_pane_cp2_ParamLimits

0x29b1,	// (0x00032f8b) bg_popup_window_pane_cp2

0x29be,	// (0x00032f98) listscroll_menu_pane_ParamLimits

0x29be,	// (0x00032f98) listscroll_menu_pane

0x64c6,	// (0x00036aa0) popup_submenu_window_ParamLimits

0x64c6,	// (0x00036aa0) popup_submenu_window

0x29ca,	// (0x00032fa4) find_popup_pane_g1

0x29d2,	// (0x00032fac) input_popup_find_pane_cp

0x29a3,	// (0x00032f7d) input_focus_pane_cp4_ParamLimits

0x29a3,	// (0x00032f7d) input_focus_pane_cp4

0x29dc,	// (0x00032fb6) input_popup_find_pane_t1_ParamLimits

0x29dc,	// (0x00032fb6) input_popup_find_pane_t1

0x2260,	// (0x0003283a) bg_popup_sub_pane_cp

0x2a0a,	// (0x00032fe4) listscroll_popup_sub_pane

0x2a12,	// (0x00032fec) list_submenu_pane_ParamLimits

0x2a12,	// (0x00032fec) list_submenu_pane

0x2a23,	// (0x00032ffd) scroll_pane_cp4

0x2a2b,	// (0x00033005) list_single_popup_submenu_pane_ParamLimits

0x2a2b,	// (0x00033005) list_single_popup_submenu_pane

0x2a40,	// (0x0003301a) list_single_popup_submenu_pane_g1

0x2a48,	// (0x00033022) list_single_popup_submenu_pane_t1_ParamLimits

0x2a48,	// (0x00033022) list_single_popup_submenu_pane_t1

0x22bc,	// (0x00032896) bg_active_tab_pane_cp1_ParamLimits

0x22bc,	// (0x00032896) bg_active_tab_pane_cp1

0x6504,	// (0x00036ade) tabs_2_active_pane_g1

0x650c,	// (0x00036ae6) tabs_2_active_pane_t1

0x22bc,	// (0x00032896) bg_passive_tab_pane_cp1_ParamLimits

0x22bc,	// (0x00032896) bg_passive_tab_pane_cp1

0x6504,	// (0x00036ade) tabs_2_passive_pane_g1

0x650c,	// (0x00036ae6) tabs_2_passive_pane_t1

0x2f92,	// (0x0003356c) bg_active_tab_pane_cp4

0x651e,	// (0x00036af8) tabs_2_long_active_pane_t1

0x6531,	// (0x00036b0b) bg_passive_tab_pane_cp4

0x79f1,	// (0x00037fcb) list_single_midp_graphic_pane_g4_ParamLimits

0x2f92,	// (0x0003356c) bg_active_tab_pane_cp5

0x653d,	// (0x00036b17) tabs_3_long_active_pane_t1

0x6531,	// (0x00036b0b) bg_passive_tab_pane_cp5

0x79f1,	// (0x00037fcb) list_single_midp_graphic_pane_g4

0x22bc,	// (0x00032896) bg_popup_window_pane_cp13_ParamLimits

0x22bc,	// (0x00032896) bg_popup_window_pane_cp13

0x2a66,	// (0x00033040) listscroll_popup_fast_pane_ParamLimits

0x2a66,	// (0x00033040) listscroll_popup_fast_pane

0x2a75,	// (0x0003304f) grid_popup_fast_pane_ParamLimits

0x2a75,	// (0x0003304f) grid_popup_fast_pane

0x2a87,	// (0x00033061) scroll_pane_cp9_ParamLimits

0x2a87,	// (0x00033061) scroll_pane_cp9

0xc53b,	// (0x0003cb15) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc53b,	// (0x0003cb15) list_single_graphic_hl_pane_t1_cp2

0x2aab,	// (0x00033085) input_focus_pane_cp20_ParamLimits

0x2aab,	// (0x00033085) input_focus_pane_cp20

0x2ab9,	// (0x00033093) query_popup_data_pane_t1_ParamLimits

0x2ab9,	// (0x00033093) query_popup_data_pane_t1

0x2acc,	// (0x000330a6) query_popup_data_pane_t2_ParamLimits

0x2acc,	// (0x000330a6) query_popup_data_pane_t2

0x2b12,	// (0x000330ec) query_popup_data_pane_t3_ParamLimits

0x2b12,	// (0x000330ec) query_popup_data_pane_t3

0x2b53,	// (0x0003312d) query_popup_data_pane_t4_ParamLimits

0x2b53,	// (0x0003312d) query_popup_data_pane_t4

0x2b8f,	// (0x00033169) query_popup_data_pane_t5_ParamLimits

0x2b8f,	// (0x00033169) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0003fc7b) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0003fc7b) query_popup_data_pane_t

0x2952,	// (0x00032f2c) bg_set_opt_pane_g1

0x295a,	// (0x00032f34) bg_set_opt_pane_g2

0x2962,	// (0x00032f3c) bg_set_opt_pane_g3

0x296a,	// (0x00032f44) bg_set_opt_pane_g4

0x2972,	// (0x00032f4c) bg_set_opt_pane_g5

0x297a,	// (0x00032f54) bg_set_opt_pane_g6

0x2982,	// (0x00032f5c) bg_set_opt_pane_g7

0x298a,	// (0x00032f64) bg_set_opt_pane_g8

0x2992,	// (0x00032f6c) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0003fc86) bg_set_opt_pane_g

0x6a52,	// (0x0003702c) control_top_pane_stacon_ParamLimits

0x6a52,	// (0x0003702c) control_top_pane_stacon

0x6aa5,	// (0x0003707f) signal_pane_stacon_ParamLimits

0x6aa5,	// (0x0003707f) signal_pane_stacon

0x6aca,	// (0x000370a4) stacon_top_pane_g1_ParamLimits

0x6aca,	// (0x000370a4) stacon_top_pane_g1

0x6aec,	// (0x000370c6) title_pane_stacon_ParamLimits

0x6aec,	// (0x000370c6) title_pane_stacon

0x6b16,	// (0x000370f0) uni_indicator_pane_stacon_ParamLimits

0x6b16,	// (0x000370f0) uni_indicator_pane_stacon

0x6b2b,	// (0x00037105) battery_pane_stacon_ParamLimits

0x6b2b,	// (0x00037105) battery_pane_stacon

0x6b6f,	// (0x00037149) control_bottom_pane_stacon_ParamLimits

0x6b6f,	// (0x00037149) control_bottom_pane_stacon

0x6b92,	// (0x0003716c) navi_pane_stacon_ParamLimits

0x6b92,	// (0x0003716c) navi_pane_stacon

0x6bb5,	// (0x0003718f) stacon_bottom_pane_g1_ParamLimits

0x6bb5,	// (0x0003718f) stacon_bottom_pane_g1

0x654f,	// (0x00036b29) aid_levels_signal_lsc_ParamLimits

0x654f,	// (0x00036b29) aid_levels_signal_lsc

0x6566,	// (0x00036b40) signal_pane_stacon_g1_ParamLimits

0x6566,	// (0x00036b40) signal_pane_stacon_g1

0x657a,	// (0x00036b54) signal_pane_stacon_g2_ParamLimits

0x657a,	// (0x00036b54) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0003fc99) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0003fc99) signal_pane_stacon_g

0x65af,	// (0x00036b89) title_pane_stacon_t1_ParamLimits

0x65af,	// (0x00036b89) title_pane_stacon_t1

0x2be7,	// (0x000331c1) uni_indicator_pane_stacon_g1

0x2bf1,	// (0x000331cb) uni_indicator_pane_stacon_g2

0x2bd3,	// (0x000331ad) uni_indicator_pane_stacon_g3

0x2bdd,	// (0x000331b7) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0003fca5) uni_indicator_pane_stacon_g

0x65d4,	// (0x00036bae) control_top_pane_stacon_g1

0x65dc,	// (0x00036bb6) control_top_pane_stacon_t1_ParamLimits

0x65dc,	// (0x00036bb6) control_top_pane_stacon_t1

0x6613,	// (0x00036bed) aid_levels_battery_lsc_ParamLimits

0x6613,	// (0x00036bed) aid_levels_battery_lsc

0x662b,	// (0x00036c05) battery_pane_stacon_g1_ParamLimits

0x662b,	// (0x00036c05) battery_pane_stacon_g1

0x663e,	// (0x00036c18) battery_pane_stacon_g2_ParamLimits

0x663e,	// (0x00036c18) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0003fcae) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0003fcae) battery_pane_stacon_g

0x667c,	// (0x00036c56) navi_icon_pane_stacon

0x6690,	// (0x00036c6a) navi_navi_pane_stacon

0x667c,	// (0x00036c56) navi_text_pane_stacon

0x65d4,	// (0x00036bae) control_bottom_pane_stacon_g1

0x66a6,	// (0x00036c80) control_bottom_pane_stacon_t1_ParamLimits

0x66a6,	// (0x00036c80) control_bottom_pane_stacon_t1

0x66dd,	// (0x00036cb7) grid_app_pane_ParamLimits

0x66dd,	// (0x00036cb7) grid_app_pane

0x66ff,	// (0x00036cd9) scroll_pane_cp15_ParamLimits

0x66ff,	// (0x00036cd9) scroll_pane_cp15

0x6712,	// (0x00036cec) cell_app_pane_ParamLimits

0x6712,	// (0x00036cec) cell_app_pane

0x673e,	// (0x00036d18) cell_app_pane_g1_ParamLimits

0x673e,	// (0x00036d18) cell_app_pane_g1

0x2c15,	// (0x000331ef) cell_app_pane_g2_ParamLimits

0x2c15,	// (0x000331ef) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0003fcb3) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0003fcb3) cell_app_pane_g

0x6762,	// (0x00036d3c) cell_app_pane_t1_ParamLimits

0x6762,	// (0x00036d3c) cell_app_pane_t1

0x2c21,	// (0x000331fb) grid_highlight_pane_ParamLimits

0x2c21,	// (0x000331fb) grid_highlight_pane

0x2952,	// (0x00032f2c) cell_highlight_pane_g1

0x295a,	// (0x00032f34) cell_highlight_pane_g2

0x2962,	// (0x00032f3c) cell_highlight_pane_g3

0x296a,	// (0x00032f44) cell_highlight_pane_g4

0x2972,	// (0x00032f4c) cell_highlight_pane_g5

0x297a,	// (0x00032f54) cell_highlight_pane_g6

0x2982,	// (0x00032f5c) cell_highlight_pane_g7

0x298a,	// (0x00032f64) cell_highlight_pane_g8

0x2992,	// (0x00032f6c) cell_highlight_pane_g9

0x2256,	// (0x00032830) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0003fc61) cell_highlight_pane_g

0x2c32,	// (0x0003320c) bg_scroll_pane

0x678c,	// (0x00036d66) scroll_handle_pane

0x2c79,	// (0x00033253) scroll_bg_pane_g1

0x2c8e,	// (0x00033268) scroll_bg_pane_g2

0x2ca6,	// (0x00033280) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0003fcb8) scroll_bg_pane_g

0x2cbb,	// (0x00033295) scroll_handle_focus_pane_ParamLimits

0x2cbb,	// (0x00033295) scroll_handle_focus_pane

0x2c79,	// (0x00033253) scroll_handle_pane_g1

0x2cc8,	// (0x000332a2) scroll_handle_pane_g2

0x2ca6,	// (0x00033280) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0003fcbf) scroll_handle_pane_g

0x29a3,	// (0x00032f7d) bg_popup_sub_pane_cp21_ParamLimits

0x29a3,	// (0x00032f7d) bg_popup_sub_pane_cp21

0x2cdc,	// (0x000332b6) popup_fep_japan_predictive_window_t1_ParamLimits

0x2cdc,	// (0x000332b6) popup_fep_japan_predictive_window_t1

0x2cf3,	// (0x000332cd) popup_fep_japan_predictive_window_t2_ParamLimits

0x2cf3,	// (0x000332cd) popup_fep_japan_predictive_window_t2

0x2d26,	// (0x00033300) popup_fep_japan_predictive_window_t3_ParamLimits

0x2d26,	// (0x00033300) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0003fcc6) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0003fcc6) popup_fep_japan_predictive_window_t

0x2260,	// (0x0003283a) bg_popup_sub_pane_cp23

0x2d5d,	// (0x00033337) listscroll_japin_cand_pane

0x2d65,	// (0x0003333f) popup_fep_japan_candidate_window_t1

0x2d73,	// (0x0003334d) candidate_pane_ParamLimits

0x2d73,	// (0x0003334d) candidate_pane

0x2d85,	// (0x0003335f) scroll_pane_cp30

0x2d8f,	// (0x00033369) list_single_popup_jap_candidate_pane_ParamLimits

0x2d8f,	// (0x00033369) list_single_popup_jap_candidate_pane

0x2260,	// (0x0003283a) list_highlight_pane_cp30

0x2da3,	// (0x0003337d) list_single_popup_jap_candidate_pane_t1

0x67b5,	// (0x00036d8f) level_1_signal

0x67c2,	// (0x00036d9c) level_2_signal

0x67cf,	// (0x00036da9) level_3_signal

0x67dc,	// (0x00036db6) level_4_signal

0x67e9,	// (0x00036dc3) level_5_signal

0x67f6,	// (0x00036dd0) level_6_signal

0x6803,	// (0x00036ddd) level_7_signal

0x67b5,	// (0x00036d8f) level_1_battery

0x67c2,	// (0x00036d9c) level_2_battery

0x67cf,	// (0x00036da9) level_3_battery

0x67dc,	// (0x00036db6) level_4_battery

0x67e9,	// (0x00036dc3) level_5_battery

0x67f6,	// (0x00036dd0) level_6_battery

0x6803,	// (0x00036ddd) level_7_battery

0x2dca,	// (0x000333a4) list_menu_pane_ParamLimits

0x2dca,	// (0x000333a4) list_menu_pane

0x2de0,	// (0x000333ba) scroll_pane_cp25_ParamLimits

0x2de0,	// (0x000333ba) scroll_pane_cp25

0x2df9,	// (0x000333d3) list_double2_graphic_pane_cp2_ParamLimits

0x2df9,	// (0x000333d3) list_double2_graphic_pane_cp2

0x2df9,	// (0x000333d3) list_double2_large_graphic_pane_cp2_ParamLimits

0x2df9,	// (0x000333d3) list_double2_large_graphic_pane_cp2

0x2df9,	// (0x000333d3) list_double2_pane_cp2_ParamLimits

0x2df9,	// (0x000333d3) list_double2_pane_cp2

0x2df9,	// (0x000333d3) list_double_graphic_pane_cp2_ParamLimits

0x2df9,	// (0x000333d3) list_double_graphic_pane_cp2

0x2df9,	// (0x000333d3) list_double_large_graphic_pane_cp2_ParamLimits

0x2df9,	// (0x000333d3) list_double_large_graphic_pane_cp2

0x2df9,	// (0x000333d3) list_double_number_pane_cp2_ParamLimits

0x2df9,	// (0x000333d3) list_double_number_pane_cp2

0x2df9,	// (0x000333d3) list_double_pane_cp2_ParamLimits

0x2df9,	// (0x000333d3) list_double_pane_cp2

0x6845,	// (0x00036e1f) list_single_2graphic_pane_cp2_ParamLimits

0x6845,	// (0x00036e1f) list_single_2graphic_pane_cp2

0x6845,	// (0x00036e1f) list_single_graphic_heading_pane_cp2_ParamLimits

0x6845,	// (0x00036e1f) list_single_graphic_heading_pane_cp2

0x6845,	// (0x00036e1f) list_single_graphic_pane_cp2_ParamLimits

0x6845,	// (0x00036e1f) list_single_graphic_pane_cp2

0x6845,	// (0x00036e1f) list_single_heading_pane_cp2_ParamLimits

0x6845,	// (0x00036e1f) list_single_heading_pane_cp2

0x2e09,	// (0x000333e3) list_single_large_graphic_pane_cp2_ParamLimits

0x2e09,	// (0x000333e3) list_single_large_graphic_pane_cp2

0x6845,	// (0x00036e1f) list_single_number_heading_pane_cp2_ParamLimits

0x6845,	// (0x00036e1f) list_single_number_heading_pane_cp2

0x6845,	// (0x00036e1f) list_single_number_pane_cp2_ParamLimits

0x6845,	// (0x00036e1f) list_single_number_pane_cp2

0x6845,	// (0x00036e1f) list_single_pane_cp2_ParamLimits

0x6845,	// (0x00036e1f) list_single_pane_cp2

0x2e22,	// (0x000333fc) bg_popup_sub_pane_cp22

0x6921,	// (0x00036efb) popup_side_volume_key_window_g1

0x694b,	// (0x00036f25) popup_side_volume_key_window_t1

0x6969,	// (0x00036f43) volume_small_pane_cp1

0x22ae,	// (0x00032888) bg_popup_sub_pane_cp24_ParamLimits

0x22ae,	// (0x00032888) bg_popup_sub_pane_cp24

0x2e38,	// (0x00033412) fep_china_uni_candidate_pane_ParamLimits

0x2e38,	// (0x00033412) fep_china_uni_candidate_pane

0x2e4c,	// (0x00033426) fep_china_uni_entry_pane

0x2e5c,	// (0x00033436) popup_fep_china_uni_window_g1

0x2e78,	// (0x00033452) fep_china_uni_entry_pane_g1

0x2e82,	// (0x0003345c) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0003fcf7) fep_china_uni_entry_pane_g

0x2e8c,	// (0x00033466) fep_entry_item_pane

0x2e96,	// (0x00033470) fep_candidate_item_pane

0x2e9e,	// (0x00033478) fep_china_uni_candidate_pane_g1

0x2ea8,	// (0x00033482) fep_china_uni_candidate_pane_g2

0x2eb0,	// (0x0003348a) fep_china_uni_candidate_pane_g3

0x2eb8,	// (0x00033492) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0003fcfc) fep_china_uni_candidate_pane_g

0x2256,	// (0x00032830) fep_entry_item_pane_g1

0x2ec2,	// (0x0003349c) fep_entry_item_pane_t1_ParamLimits

0x2ec2,	// (0x0003349c) fep_entry_item_pane_t1

0x2ed8,	// (0x000334b2) fep_candidate_item_pane_t1_ParamLimits

0x2ed8,	// (0x000334b2) fep_candidate_item_pane_t1

0x2eed,	// (0x000334c7) fep_candidate_item_pane_t2_ParamLimits

0x2eed,	// (0x000334c7) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0003fd05) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0003fd05) fep_candidate_item_pane_t

0x22bc,	// (0x00032896) list_highlight_pane_cp31_ParamLimits

0x22bc,	// (0x00032896) list_highlight_pane_cp31

0x2eff,	// (0x000334d9) level_1_signal_lsc

0x2f08,	// (0x000334e2) level_2_signal_lsc

0x2f11,	// (0x000334eb) level_3_signal_lsc

0x2f1a,	// (0x000334f4) level_4_signal_lsc

0x2f23,	// (0x000334fd) level_5_signal_lsc

0x2f2c,	// (0x00033506) level_6_signal_lsc

0x2f35,	// (0x0003350f) level_7_signal_lsc

0x2f35,	// (0x0003350f) level_1_battery_lsc

0x2f3e,	// (0x00033518) level_2_battery_lsc

0x2f47,	// (0x00033521) level_3_battery_lsc

0x2f50,	// (0x0003352a) level_4_battery_lsc

0x2f59,	// (0x00033533) level_5_battery_lsc

0x2f62,	// (0x0003353c) level_6_battery_lsc

0x2eff,	// (0x000334d9) level_7_battery_lsc

0x2f6b,	// (0x00033545) scroll_handle_focus_pane_g1

0x2f74,	// (0x0003354e) scroll_handle_focus_pane_g2

0x2f7d,	// (0x00033557) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0003fd0a) scroll_handle_focus_pane_g

0x6971,	// (0x00036f4b) list_single_2graphic_pane_g1_ParamLimits

0x6971,	// (0x00036f4b) list_single_2graphic_pane_g1

0x5fa0,	// (0x0003657a) list_single_2graphic_pane_g2_ParamLimits

0x5fa0,	// (0x0003657a) list_single_2graphic_pane_g2

0x5f26,	// (0x00036500) list_single_2graphic_pane_g3_ParamLimits

0x5f26,	// (0x00036500) list_single_2graphic_pane_g3

0x697d,	// (0x00036f57) list_single_2graphic_pane_g4_ParamLimits

0x697d,	// (0x00036f57) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0003fd11) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0003fd11) list_single_2graphic_pane_g

0x6989,	// (0x00036f63) list_single_2graphic_pane_t1_ParamLimits

0x6989,	// (0x00036f63) list_single_2graphic_pane_t1

0x69b7,	// (0x00036f91) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x69b7,	// (0x00036f91) list_double2_graphic_large_graphic_pane_g1

0x602d,	// (0x00036607) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x602d,	// (0x00036607) list_double2_graphic_large_graphic_pane_g2

0x5ff9,	// (0x000365d3) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5ff9,	// (0x000365d3) list_double2_graphic_large_graphic_pane_g3

0x69c9,	// (0x00036fa3) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x69c9,	// (0x00036fa3) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0003fd1a) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0003fd1a) list_double2_graphic_large_graphic_pane_g

0x69d5,	// (0x00036faf) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x69d5,	// (0x00036faf) list_double2_graphic_large_graphic_pane_t1

0x69eb,	// (0x00036fc5) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x69eb,	// (0x00036fc5) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0003fd23) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0003fd23) list_double2_graphic_large_graphic_pane_t

0x6c75,	// (0x0003724f) popup_fast_swap_window_ParamLimits

0x6c75,	// (0x0003724f) popup_fast_swap_window

0x6c93,	// (0x0003726d) popup_side_volume_key_window

0x6cb1,	// (0x0003728b) stacon_top_pane

0x6cbb,	// (0x00037295) status_pane_ParamLimits

0x6cbb,	// (0x00037295) status_pane

0x6cc9,	// (0x000372a3) status_small_pane

0x2260,	// (0x0003283a) control_pane

0x2260,	// (0x0003283a) stacon_bottom_pane

0x28dd,	// (0x00032eb7) scroll_pane_cp121

0x28d4,	// (0x00032eae) set_content_pane

0x69fd,	// (0x00036fd7) bg_active_tab_pane_g1_cp1

0x6a06,	// (0x00036fe0) bg_active_tab_pane_g2_cp1

0x6a0f,	// (0x00036fe9) bg_active_tab_pane_g3_cp1

0x69fd,	// (0x00036fd7) bg_passive_tab_pane_g1_cp1

0x6a06,	// (0x00036fe0) bg_passive_tab_pane_g2_cp1

0x6a0f,	// (0x00036fe9) bg_passive_tab_pane_g3_cp1

0x6a18,	// (0x00036ff2) bg_active_tab_pane_g1_cp2

0x6a06,	// (0x00036fe0) bg_active_tab_pane_g2_cp2

0x6a21,	// (0x00036ffb) bg_active_tab_pane_g3_cp2

0x6a18,	// (0x00036ff2) bg_passive_tab_pane_g1_cp2

0x6a06,	// (0x00036fe0) bg_passive_tab_pane_g2_cp2

0x6a21,	// (0x00036ffb) bg_passive_tab_pane_g3_cp2

0x6a2a,	// (0x00037004) bg_active_tab_pane_g1_cp3

0x6a06,	// (0x00036fe0) bg_active_tab_pane_g2_cp3

0x6a33,	// (0x0003700d) bg_active_tab_pane_g3_cp3

0x6a2a,	// (0x00037004) bg_passive_tab_pane_g1_cp3

0x6a06,	// (0x00036fe0) bg_passive_tab_pane_g2_cp3

0x6a33,	// (0x0003700d) bg_passive_tab_pane_g3_cp3

0x6a3c,	// (0x00037016) bg_active_tab_pane_g1_cp4

0x6a06,	// (0x00036fe0) bg_active_tab_pane_g2_cp4

0x6a47,	// (0x00037021) bg_active_tab_pane_g3_cp4

0x6a3c,	// (0x00037016) bg_passive_tab_pane_g1_cp4

0x6a06,	// (0x00036fe0) bg_passive_tab_pane_g2_cp4

0x6a47,	// (0x00037021) bg_passive_tab_pane_g3_cp4

0x6bd1,	// (0x000371ab) bg_active_tab_pane_g1_cp5

0x6a06,	// (0x00036fe0) bg_active_tab_pane_g2_cp5

0x6bda,	// (0x000371b4) bg_active_tab_pane_g3_cp5

0x6bd1,	// (0x000371ab) bg_passive_tab_pane_g1_cp5

0x6a06,	// (0x00036fe0) bg_passive_tab_pane_g2_cp5

0x6bda,	// (0x000371b4) bg_passive_tab_pane_g3_cp5

0x6be3,	// (0x000371bd) list_set_graphic_pane_ParamLimits

0x6be3,	// (0x000371bd) list_set_graphic_pane

0x2260,	// (0x0003283a) bg_set_opt_pane_cp4

0x6bf6,	// (0x000371d0) list_set_graphic_pane_g1_ParamLimits

0x6bf6,	// (0x000371d0) list_set_graphic_pane_g1

0x6c02,	// (0x000371dc) list_set_graphic_pane_g2_ParamLimits

0x6c02,	// (0x000371dc) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0003fd28) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0003fd28) list_set_graphic_pane_g

0x0009,

0xfaca,	// (0x000400a4) volume_small_pane_cp_g

0x6c26,	// (0x00037200) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6c26,	// (0x00037200) list_double2_large_graphic_pane_g1_cp2

0x6c34,	// (0x0003720e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x6c34,	// (0x0003720e) list_double2_large_graphic_pane_g2_cp2

0x6c45,	// (0x0003721f) list_double2_large_graphic_pane_g3_cp2

0x6c4d,	// (0x00037227) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x6c4d,	// (0x00037227) list_double2_large_graphic_pane_t1_cp2

0x6c63,	// (0x0003723d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x6c63,	// (0x0003723d) list_double2_large_graphic_pane_t2_cp2

0xa78e,	// (0x0003ad68) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa78e,	// (0x0003ad68) list_double_large_graphic_pane_g1_cp2

0xa7a1,	// (0x0003ad7b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa7a1,	// (0x0003ad7b) list_double_large_graphic_pane_g2_cp2

0x6de4,	// (0x000373be) list_double_large_graphic_pane_g3_cp2

0xa7b2,	// (0x0003ad8c) list_double_large_graphic_pane_g4_cp

0xa7ba,	// (0x0003ad94) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa7ba,	// (0x0003ad94) list_double_large_graphic_pane_t1_cp2

0xa7d1,	// (0x0003adab) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa7d1,	// (0x0003adab) list_double_large_graphic_pane_t2_cp2

0x6cd4,	// (0x000372ae) list_double2_graphic_pane_g1_cp2_ParamLimits

0x6cd4,	// (0x000372ae) list_double2_graphic_pane_g1_cp2

0x6ce2,	// (0x000372bc) list_double2_graphic_pane_g2_cp2_ParamLimits

0x6ce2,	// (0x000372bc) list_double2_graphic_pane_g2_cp2

0x6cf3,	// (0x000372cd) list_double2_graphic_pane_g3_cp2

0x6cfd,	// (0x000372d7) list_double2_graphic_pane_t1_cp2_ParamLimits

0x6cfd,	// (0x000372d7) list_double2_graphic_pane_t1_cp2

0x6d13,	// (0x000372ed) list_double2_graphic_pane_t2_cp2_ParamLimits

0x6d13,	// (0x000372ed) list_double2_graphic_pane_t2_cp2

0x6d25,	// (0x000372ff) list_single_number_heading_pane_g1_cp2_ParamLimits

0x6d25,	// (0x000372ff) list_single_number_heading_pane_g1_cp2

0x6d31,	// (0x0003730b) list_single_number_heading_pane_g2_cp2

0x6d39,	// (0x00037313) list_single_number_heading_pane_t1_cp2_ParamLimits

0x6d39,	// (0x00037313) list_single_number_heading_pane_t1_cp2

0x6d4f,	// (0x00037329) list_single_number_heading_pane_t2_cp2_ParamLimits

0x6d4f,	// (0x00037329) list_single_number_heading_pane_t2_cp2

0x6d63,	// (0x0003733d) list_single_number_heading_pane_t3_cp2_ParamLimits

0x6d63,	// (0x0003733d) list_single_number_heading_pane_t3_cp2

0x6d25,	// (0x000372ff) list_single_heading_pane_g1_cp2_ParamLimits

0x6d25,	// (0x000372ff) list_single_heading_pane_g1_cp2

0x6d31,	// (0x0003730b) list_single_heading_pane_g2_cp2

0x6d39,	// (0x00037313) list_single_heading_pane_t1_cp2_ParamLimits

0x6d39,	// (0x00037313) list_single_heading_pane_t1_cp2

0xa588,	// (0x0003ab62) list_single_heading_pane_t2_cp2_ParamLimits

0xa588,	// (0x0003ab62) list_single_heading_pane_t2_cp2

0xa4d0,	// (0x0003aaaa) list_double_graphic_pane_g1_cp2_ParamLimits

0xa4d0,	// (0x0003aaaa) list_double_graphic_pane_g1_cp2

0xa4dc,	// (0x0003aab6) list_double_graphic_pane_g2_cp2_ParamLimits

0xa4dc,	// (0x0003aab6) list_double_graphic_pane_g2_cp2

0xa4eb,	// (0x0003aac5) list_double_graphic_pane_g3_cp2

0xa4f3,	// (0x0003aacd) list_double_graphic_pane_t1_cp2_ParamLimits

0xa4f3,	// (0x0003aacd) list_double_graphic_pane_t1_cp2

0xa509,	// (0x0003aae3) list_double_graphic_pane_t2_cp2_ParamLimits

0xa509,	// (0x0003aae3) list_double_graphic_pane_t2_cp2

0x6dd8,	// (0x000373b2) list_double_number_pane_g1_cp2_ParamLimits

0x6dd8,	// (0x000373b2) list_double_number_pane_g1_cp2

0x6de4,	// (0x000373be) list_double_number_pane_g2_cp2

0xa494,	// (0x0003aa6e) list_double_number_pane_t1_cp2_ParamLimits

0xa494,	// (0x0003aa6e) list_double_number_pane_t1_cp2

0xa4a8,	// (0x0003aa82) list_double_number_pane_t2_cp2_ParamLimits

0xa4a8,	// (0x0003aa82) list_double_number_pane_t2_cp2

0xa4be,	// (0x0003aa98) list_double_number_pane_t3_cp2_ParamLimits

0xa4be,	// (0x0003aa98) list_double_number_pane_t3_cp2

0xa37d,	// (0x0003a957) list_single_graphic_pane_g1_cp2_ParamLimits

0xa37d,	// (0x0003a957) list_single_graphic_pane_g1_cp2

0x2f86,	// (0x00033560) list_single_graphic_pane_g2_cp2_ParamLimits

0x2f86,	// (0x00033560) list_single_graphic_pane_g2_cp2

0x6e3e,	// (0x00037418) list_single_graphic_pane_g3_cp2

0xa353,	// (0x0003a92d) list_single_graphic_pane_t1_cp2_ParamLimits

0xa353,	// (0x0003a92d) list_single_graphic_pane_t1_cp2

0x2f86,	// (0x00033560) list_single_number_pane_g1_cp2_ParamLimits

0x2f86,	// (0x00033560) list_single_number_pane_g1_cp2

0x6e3e,	// (0x00037418) list_single_number_pane_g2_cp2

0xa353,	// (0x0003a92d) list_single_number_pane_t1_cp2_ParamLimits

0xa353,	// (0x0003a92d) list_single_number_pane_t1_cp2

0xa369,	// (0x0003a943) list_single_number_pane_t2_cp2_ParamLimits

0xa369,	// (0x0003a943) list_single_number_pane_t2_cp2

0x6c34,	// (0x0003720e) list_double2_pane_g1_cp2_ParamLimits

0x6c34,	// (0x0003720e) list_double2_pane_g1_cp2

0x6c45,	// (0x0003721f) list_double2_pane_g2_cp2

0x6db0,	// (0x0003738a) list_double2_pane_t1_cp2_ParamLimits

0x6db0,	// (0x0003738a) list_double2_pane_t1_cp2

0x6dc6,	// (0x000373a0) list_double2_pane_t2_cp2_ParamLimits

0x6dc6,	// (0x000373a0) list_double2_pane_t2_cp2

0x6dd8,	// (0x000373b2) list_double_pane_g1_cp2_ParamLimits

0x6dd8,	// (0x000373b2) list_double_pane_g1_cp2

0x6de4,	// (0x000373be) list_double_pane_g2_cp2

0x6dec,	// (0x000373c6) list_double_pane_t1_cp2_ParamLimits

0x6dec,	// (0x000373c6) list_double_pane_t1_cp2

0x6e02,	// (0x000373dc) list_double_pane_t2_cp2_ParamLimits

0x6e02,	// (0x000373dc) list_double_pane_t2_cp2

0x6e2e,	// (0x00037408) list_single_pane_cp2_g3

0x2f86,	// (0x00033560) list_single_pane_g1_cp2_ParamLimits

0x2f86,	// (0x00033560) list_single_pane_g1_cp2

0x6e3e,	// (0x00037418) list_single_pane_g2_cp2

0x6e46,	// (0x00037420) list_single_pane_t1_cp2_ParamLimits

0x6e46,	// (0x00037420) list_single_pane_t1_cp2

0x6e5e,	// (0x00037438) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x6e5e,	// (0x00037438) list_single_large_graphic_pane_g1_cp2

0x6e6c,	// (0x00037446) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x6e6c,	// (0x00037446) list_single_large_graphic_pane_g2_cp2

0x6e78,	// (0x00037452) list_single_large_graphic_pane_g3_cp2

0x6e80,	// (0x0003745a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x6e80,	// (0x0003745a) list_single_large_graphic_pane_g4_cp1

0x6e9a,	// (0x00037474) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x6e9a,	// (0x00037474) list_single_large_graphic_pane_t1_cp2

0xa31d,	// (0x0003a8f7) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa31d,	// (0x0003a8f7) list_single_graphic_heading_pane_g1_cp2

0xa2ea,	// (0x0003a8c4) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa2ea,	// (0x0003a8c4) list_single_graphic_heading_pane_g4_cp2

0x6e3e,	// (0x00037418) list_single_graphic_heading_pane_g5_cp2

0xa329,	// (0x0003a903) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa329,	// (0x0003a903) list_single_graphic_heading_pane_t1_cp2

0xa33f,	// (0x0003a919) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa33f,	// (0x0003a919) list_single_graphic_heading_pane_t2_cp2

0xa2de,	// (0x0003a8b8) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa2de,	// (0x0003a8b8) list_single_2graphic_pane_g1_cp2

0xa2ea,	// (0x0003a8c4) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa2ea,	// (0x0003a8c4) list_single_2graphic_pane_g2_cp2

0x6e3e,	// (0x00037418) list_single_2graphic_pane_g3_cp2

0xa2fb,	// (0x0003a8d5) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa2fb,	// (0x0003a8d5) list_single_2graphic_pane_g4_cp2

0xa307,	// (0x0003a8e1) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa307,	// (0x0003a8e1) list_single_2graphic_pane_t1_cp2

0x2256,	// (0x00032830) list_highlight_pane_g10_cp1

0x9eb6,	// (0x0003a490) list_highlight_pane_g1_cp1

0x9ebe,	// (0x0003a498) list_highlight_pane_g2_cp1

0x9ec6,	// (0x0003a4a0) list_highlight_pane_g3_cp1

0x9ece,	// (0x0003a4a8) list_highlight_pane_g4_cp1

0x9ed6,	// (0x0003a4b0) list_highlight_pane_g5_cp1

0x9ede,	// (0x0003a4b8) list_highlight_pane_g6_cp1

0x9ee6,	// (0x0003a4c0) list_highlight_pane_g7_cp1

0x9eee,	// (0x0003a4c8) list_highlight_pane_g8_cp1

0x9ef6,	// (0x0003a4d0) list_highlight_pane_g9_cp1

0x9dd6,	// (0x0003a3b0) form_field_slider_pane_t3

0x9de4,	// (0x0003a3be) form_field_slider_pane_t4

0x9df2,	// (0x0003a3cc) slider_form_pane_ParamLimits

0x9df2,	// (0x0003a3cc) slider_form_pane

0x2260,	// (0x0003283a) control_abbreviations

0x2260,	// (0x0003283a) control_conventions

0x2260,	// (0x0003283a) control_definitions

0x2260,	// (0x0003283a) format_table_attribute

0xa5de,	// (0x0003abb8) bg_popup_preview_window_pane_g9

0x2260,	// (0x0003283a) format_table_data2

0x2260,	// (0x0003283a) format_table_data3

0x2260,	// (0x0003283a) format_table_data_example

0x0008,

0x2260,	// (0x0003283a) intro_purpose

0xf8ea,	// (0x0003fec4) bg_popup_preview_window_pane_g

0x2260,	// (0x0003283a) texts_category

0x2260,	// (0x0003283a) texts_graphics

0x6eb0,	// (0x0003748a) text_digital

0x6ebf,	// (0x00037499) text_primary

0x6ece,	// (0x000374a8) text_primary_small

0x6edd,	// (0x000374b7) text_secondary

0x6eec,	// (0x000374c6) text_title

0xad60,	// (0x0003b33a) bg_passive_tab_pane_g1_cp3_srt

0x6a06,	// (0x00036fe0) bg_passive_tab_pane_g2_cp3_srt

0xad69,	// (0x0003b343) bg_passive_tab_pane_g3_cp3_srt

0x22bc,	// (0x00032896) bg_active_tab_pane_cp3_srt_ParamLimits

0x22bc,	// (0x00032896) bg_active_tab_pane_cp3_srt

0xad72,	// (0x0003b34c) tabs_4_active_pane_srt_g1

0xad7a,	// (0x0003b354) tabs_4_active_pane_srt_t1_ParamLimits

0xad7a,	// (0x0003b354) tabs_4_active_pane_srt_t1

0xad60,	// (0x0003b33a) bg_active_tab_pane_g1_cp3_copy1

0x6a06,	// (0x00036fe0) bg_active_tab_pane_g2_cp3_copy1

0xad69,	// (0x0003b343) bg_active_tab_pane_g3_cp3_copy1

0x22bc,	// (0x00032896) tabs_2_long_active_pane_srt_ParamLimits

0x22bc,	// (0x00032896) tabs_2_long_active_pane_srt

0x22bc,	// (0x00032896) tabs_2_long_passive_pane_srt_ParamLimits

0x22bc,	// (0x00032896) tabs_2_long_passive_pane_srt

0x6531,	// (0x00036b0b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6531,	// (0x00036b0b) bg_passive_tab_pane_cp4_srt

0xaa0d,	// (0x0003afe7) bg_passive_tab_pane_g1_cp4_srt

0x6a06,	// (0x00036fe0) bg_passive_tab_pane_g2_cp4_srt

0xaa16,	// (0x0003aff0) bg_passive_tab_pane_g3_cp4_srt

0x2f92,	// (0x0003356c) bg_active_tab_pane_cp4_srt_ParamLimits

0x2f92,	// (0x0003356c) bg_active_tab_pane_cp4_srt

0xaa1f,	// (0x0003aff9) tabs_2_long_active_pane_srt_t1_ParamLimits

0xaa1f,	// (0x0003aff9) tabs_2_long_active_pane_srt_t1

0xaa0d,	// (0x0003afe7) bg_active_tab_pane_g1_cp4_srt

0x6a06,	// (0x00036fe0) bg_active_tab_pane_g2_cp4_srt

0xaa16,	// (0x0003aff0) bg_active_tab_pane_g3_cp4_srt

0x22ae,	// (0x00032888) tabs_3_long_active_pane_srt_ParamLimits

0x22ae,	// (0x00032888) tabs_3_long_active_pane_srt

0x22ae,	// (0x00032888) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x22ae,	// (0x00032888) tabs_3_long_passive_pane_cp_srt

0x22ae,	// (0x00032888) tabs_3_long_passive_pane_srt_ParamLimits

0x22ae,	// (0x00032888) tabs_3_long_passive_pane_srt

0x6531,	// (0x00036b0b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6531,	// (0x00036b0b) bg_passive_tab_pane_cp5_srt

0x6bd1,	// (0x000371ab) bg_passive_tab_pane_g1_cp5_srt

0x6a06,	// (0x00036fe0) bg_passive_tab_pane_g2_cp5_srt

0x6bda,	// (0x000371b4) bg_passive_tab_pane_g3_cp5_srt

0x2f92,	// (0x0003356c) bg_active_tab_pane_cp5_srt_ParamLimits

0x2f92,	// (0x0003356c) bg_active_tab_pane_cp5_srt

0xa9fb,	// (0x0003afd5) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa9fb,	// (0x0003afd5) tabs_3_long_active_pane_srt_t1

0x6bd1,	// (0x000371ab) bg_active_tab_pane_g1_cp5_srt

0x6a06,	// (0x00036fe0) bg_active_tab_pane_g2_cp5_srt

0x6bda,	// (0x000371b4) bg_active_tab_pane_g3_cp5_srt

0xa9ed,	// (0x0003afc7) navi_text_pane_srt_t1

0xa9e5,	// (0x0003afbf) navi_icon_pane_srt_g1

0x716d,	// (0x00037747) midp_editing_number_pane_srt

0x6efb,	// (0x000374d5) midp_ticker_pane_srt

0x7175,	// (0x0003774f) midp_ticker_pane_srt_g1

0x717d,	// (0x00037757) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0003fd47) midp_ticker_pane_srt_g

0x7185,	// (0x0003775f) midp_ticker_pane_srt_t1

0xa9d6,	// (0x0003afb0) midp_editing_number_pane_t1_copy1

0x6f03,	// (0x000374dd) listscroll_midp_pane

0x6f03,	// (0x000374dd) midp_form_pane

0x6f72,	// (0x0003754c) midp_info_popup_window_ParamLimits

0x6f72,	// (0x0003754c) midp_info_popup_window

0x29a3,	// (0x00032f7d) bg_popup_sub_pane_cp50_ParamLimits

0x29a3,	// (0x00032f7d) bg_popup_sub_pane_cp50

0x9ae0,	// (0x0003a0ba) listscroll_midp_info_pane_ParamLimits

0x9ae0,	// (0x0003a0ba) listscroll_midp_info_pane

0x9ac0,	// (0x0003a09a) listscroll_form_midp_pane_ParamLimits

0x9ac0,	// (0x0003a09a) listscroll_form_midp_pane

0x9acc,	// (0x0003a0a6) scroll_bar_cp050

0x9aa0,	// (0x0003a07a) list_midp_pane

0xb7d8,	// (0x0003bdb2) signal_pane_g2_cp

0x99da,	// (0x00039fb4) listscroll_midp_info_pane_t1_ParamLimits

0x99da,	// (0x00039fb4) listscroll_midp_info_pane_t1

0x99f2,	// (0x00039fcc) listscroll_midp_info_pane_t2_ParamLimits

0x99f2,	// (0x00039fcc) listscroll_midp_info_pane_t2

0x9a30,	// (0x0003a00a) listscroll_midp_info_pane_t3_ParamLimits

0x9a30,	// (0x0003a00a) listscroll_midp_info_pane_t3

0x9a6a,	// (0x0003a044) listscroll_midp_info_pane_t4_ParamLimits

0x9a6a,	// (0x0003a044) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0003fdff) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0003fdff) listscroll_midp_info_pane_t

0x2a23,	// (0x00032ffd) scroll_pane_cp21

0x9974,	// (0x00039f4e) form_midp_field_choice_group_pane

0x997d,	// (0x00039f57) form_midp_field_text_pane

0x99c0,	// (0x00039f9a) form_midp_field_time_pane

0x99c8,	// (0x00039fa2) form_midp_gauge_slider_pane

0x99d1,	// (0x00039fab) form_midp_gauge_wait_pane

0x2260,	// (0x0003283a) form_midp_image_pane

0x7add,	// (0x000380b7) list_single_midp_pane_ParamLimits

0x7add,	// (0x000380b7) list_single_midp_pane

0x9938,	// (0x00039f12) form_midp_field_text_pane_t1

0x972a,	// (0x00039d04) input_focus_pane_cp050

0x9963,	// (0x00039f3d) list_midp_form_text_pane

0x9907,	// (0x00039ee1) form_midp_field_choice_group_pane_t1

0x9915,	// (0x00039eef) input_focus_pane_cp051

0x9929,	// (0x00039f03) list_midp_choice_pane

0x2260,	// (0x0003283a) status_idle_pane

0x98eb,	// (0x00039ec5) form_midp_field_time_pane_t1

0x2256,	// (0x00032830) wait_anim_pane_g2_copy1

0x98f9,	// (0x00039ed3) form_midp_field_time_pane_t2

0x0001,

0x7022,	// (0x000375fc) aid_navinavi_width_2_pane

0xf820,	// (0x0003fdfa) form_midp_field_time_pane_t

0x2260,	// (0x0003283a) input_focus_pane_cp052

0x2260,	// (0x0003283a) bg_input_focus_pane_cp040

0x98ab,	// (0x00039e85) form_midp_gauge_slider_pane_t1

0x98b9,	// (0x00039e93) form_midp_gauge_slider_pane_t2

0x98c7,	// (0x00039ea1) form_midp_gauge_slider_pane_t3

0x98d5,	// (0x00039eaf) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0003fdf1) form_midp_gauge_slider_pane_t

0x98e3,	// (0x00039ebd) form_midp_slider_pane

0x22bc,	// (0x00032896) bg_input_focus_pane_cp041_ParamLimits

0x22bc,	// (0x00032896) bg_input_focus_pane_cp041

0x9878,	// (0x00039e52) form_midp_gauge_wait_pane_t1_ParamLimits

0x9878,	// (0x00039e52) form_midp_gauge_wait_pane_t1

0x988a,	// (0x00039e64) form_midp_gauge_wait_pane_t2_ParamLimits

0x988a,	// (0x00039e64) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0003fdec) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0003fdec) form_midp_gauge_wait_pane_t

0x989c,	// (0x00039e76) form_midp_wait_pane_ParamLimits

0x989c,	// (0x00039e76) form_midp_wait_pane

0x9840,	// (0x00039e1a) form_midp_image_pane_g1

0x9849,	// (0x00039e23) form_midp_image_pane_t1

0x9858,	// (0x00039e32) form_midp_image_pane_t2

0x9867,	// (0x00039e41) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0003fde5) form_midp_image_pane_t

0x9837,	// (0x00039e11) list_single_midp_pane_g1

0x43a0,	// (0x0003497a) list_single_midp_pane_t1

0x981d,	// (0x00039df7) list_midp_form_item_pane_ParamLimits

0x981d,	// (0x00039df7) list_midp_form_item_pane

0x6fca,	// (0x000375a4) list_midp_form_item_pane_t1

0x6fd9,	// (0x000375b3) midp_ticker_pane_g1

0x6fe5,	// (0x000375bf) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0003fd2d) midp_ticker_pane_g

0x6ff1,	// (0x000375cb) midp_ticker_pane_t1

0xac43,	// (0x0003b21d) midp_editing_number_pane_t1

0xac21,	// (0x0003b1fb) midp_editing_number_pane

0xac30,	// (0x0003b20a) midp_ticker_pane

0xa9c6,	// (0x0003afa0) ai_message_heading_pane

0x2260,	// (0x0003283a) bg_popup_window_pane_cp14

0xa9ce,	// (0x0003afa8) listscroll_ai_message_pane

0xa94c,	// (0x0003af26) ai_message_heading_pane_g1_ParamLimits

0xa94c,	// (0x0003af26) ai_message_heading_pane_g1

0xa958,	// (0x0003af32) ai_message_heading_pane_g2_ParamLimits

0xa958,	// (0x0003af32) ai_message_heading_pane_g2

0xa966,	// (0x0003af40) ai_message_heading_pane_g3_ParamLimits

0xa966,	// (0x0003af40) ai_message_heading_pane_g3

0xa972,	// (0x0003af4c) ai_message_heading_pane_g4_ParamLimits

0xa972,	// (0x0003af4c) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0003ff26) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0003ff26) ai_message_heading_pane_g

0xa97e,	// (0x0003af58) ai_message_heading_pane_t1_ParamLimits

0xa97e,	// (0x0003af58) ai_message_heading_pane_t1

0xa998,	// (0x0003af72) ai_message_heading_pane_t2_ParamLimits

0xa998,	// (0x0003af72) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0003ff2f) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0003ff2f) ai_message_heading_pane_t

0xa9ac,	// (0x0003af86) bg_popup_heading_pane_cp1_ParamLimits

0xa9ac,	// (0x0003af86) bg_popup_heading_pane_cp1

0xa93a,	// (0x0003af14) list_ai_message_pane_ParamLimits

0xa93a,	// (0x0003af14) list_ai_message_pane

0x2a23,	// (0x00032ffd) scroll_pane_cp10

0xa8d6,	// (0x0003aeb0) list_ai_message_pane_g1

0xa8de,	// (0x0003aeb8) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0003ff03) list_ai_message_pane_g

0xa8e6,	// (0x0003aec0) list_ai_message_pane_t1_ParamLimits

0xa8e6,	// (0x0003aec0) list_ai_message_pane_t1

0xa8fb,	// (0x0003aed5) list_ai_message_pane_t2_ParamLimits

0xa8fb,	// (0x0003aed5) list_ai_message_pane_t2

0xa910,	// (0x0003aeea) list_ai_message_pane_t3_ParamLimits

0xa910,	// (0x0003aeea) list_ai_message_pane_t3

0xa925,	// (0x0003aeff) list_ai_message_pane_t4_ParamLimits

0xa925,	// (0x0003aeff) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0003ff08) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0003ff08) list_ai_message_pane_t

0xa8bf,	// (0x0003ae99) cell_ai_soft_ind_pane_ParamLimits

0xa8bf,	// (0x0003ae99) cell_ai_soft_ind_pane

0x7003,	// (0x000375dd) cell_ai_soft_ind_pane_g1_ParamLimits

0x7003,	// (0x000375dd) cell_ai_soft_ind_pane_g1

0x2260,	// (0x0003283a) grid_highlight_cp1

0x7010,	// (0x000375ea) text_secondary_cp56_ParamLimits

0x7010,	// (0x000375ea) text_secondary_cp56

0xa894,	// (0x0003ae6e) example_general_pane_ParamLimits

0xa894,	// (0x0003ae6e) example_general_pane

0xa8a0,	// (0x0003ae7a) example_parent_pane_g1_ParamLimits

0xa8a0,	// (0x0003ae7a) example_parent_pane_g1

0xa8ac,	// (0x0003ae86) example_parent_pane_t1_ParamLimits

0xa8ac,	// (0x0003ae86) example_parent_pane_t1

0x772c,	// (0x00037d06) popup_preview_text_window_ParamLimits

0x772c,	// (0x00037d06) popup_preview_text_window

0x6e36,	// (0x00037410) list_single_pane_cp2_g4

0x24bd,	// (0x00032a97) bg_popup_preview_window_pane_ParamLimits

0x24bd,	// (0x00032a97) bg_popup_preview_window_pane

0xa5e8,	// (0x0003abc2) popup_preview_text_window_t1_ParamLimits

0xa5e8,	// (0x0003abc2) popup_preview_text_window_t1

0xa606,	// (0x0003abe0) popup_preview_text_window_t2_ParamLimits

0xa606,	// (0x0003abe0) popup_preview_text_window_t2

0xa64f,	// (0x0003ac29) popup_preview_text_window_t3_ParamLimits

0xa64f,	// (0x0003ac29) popup_preview_text_window_t3

0xa694,	// (0x0003ac6e) popup_preview_text_window_t4_ParamLimits

0xa694,	// (0x0003ac6e) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0003fed7) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0003fed7) popup_preview_text_window_t

0xa712,	// (0x0003acec) scroll_pane_cp11

0x96b6,	// (0x00039c90) bg_popup_preview_window_pane_g1

0xa59c,	// (0x0003ab76) bg_popup_preview_window_pane_g2

0xa5a6,	// (0x0003ab80) bg_popup_preview_window_pane_g3

0xa5b0,	// (0x0003ab8a) bg_popup_preview_window_pane_g4

0xa5ba,	// (0x0003ab94) bg_popup_preview_window_pane_g5

0xa5c4,	// (0x0003ab9e) bg_popup_preview_window_pane_g6

0xa5cc,	// (0x0003aba6) bg_popup_preview_window_pane_g7

0xa5d4,	// (0x0003abae) bg_popup_preview_window_pane_g8

0x578c,	// (0x00035d66) aid_popup_width_pane

0x7708,	// (0x00037ce2) popup_midp_note_alarm_window_ParamLimits

0x7708,	// (0x00037ce2) popup_midp_note_alarm_window

0x28ee,	// (0x00032ec8) data_form_pane_ParamLimits

0x63a6,	// (0x00036980) form_field_data_pane_g1

0x63b0,	// (0x0003698a) form_field_data_pane_t1_ParamLimits

0x28fa,	// (0x00032ed4) input_focus_pane_ParamLimits

0x41c1,	// (0x0003479b) data_form_wide_pane_ParamLimits

0x41d2,	// (0x000347ac) form_field_data_wide_pane_g1

0x41de,	// (0x000347b8) form_field_data_wide_pane_t1_ParamLimits

0x2675,	// (0x00032c4f) input_focus_pane_cp6_ParamLimits

0x64f6,	// (0x00036ad0) input_popup_find_pane_g1_ParamLimits

0x64f6,	// (0x00036ad0) input_popup_find_pane_g1

0x664f,	// (0x00036c29) aid_navi_side_left_pane

0x6664,	// (0x00036c3e) aid_navi_side_right_pane

0x9fb1,	// (0x0003a58b) bg_popup_window_pane_cp30_ParamLimits

0x9fb1,	// (0x0003a58b) bg_popup_window_pane_cp30

0xa02b,	// (0x0003a605) popup_midp_note_alarm_window_g1_ParamLimits

0xa02b,	// (0x0003a605) popup_midp_note_alarm_window_g1

0xa05b,	// (0x0003a635) popup_midp_note_alarm_window_t1_ParamLimits

0xa05b,	// (0x0003a635) popup_midp_note_alarm_window_t1

0xa0fc,	// (0x0003a6d6) popup_midp_note_alarm_window_t2_ParamLimits

0xa0fc,	// (0x0003a6d6) popup_midp_note_alarm_window_t2

0xa1aa,	// (0x0003a784) popup_midp_note_alarm_window_t3_ParamLimits

0xa1aa,	// (0x0003a784) popup_midp_note_alarm_window_t3

0xa1dc,	// (0x0003a7b6) popup_midp_note_alarm_window_t4_ParamLimits

0xa1dc,	// (0x0003a7b6) popup_midp_note_alarm_window_t4

0xa202,	// (0x0003a7dc) popup_midp_note_alarm_window_t5_ParamLimits

0xa202,	// (0x0003a7dc) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0003fe74) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0003fe74) popup_midp_note_alarm_window_t

0xa2ae,	// (0x0003a888) wait_bar_pane_cp1_ParamLimits

0xa2ae,	// (0x0003a888) wait_bar_pane_cp1

0x2260,	// (0x0003283a) wait_anim_pane_copy1

0x2260,	// (0x0003283a) wait_border_pane_copy1

0x9c96,	// (0x0003a270) wait_border_pane_g1_copy1

0x41f8,	// (0x000347d2) form_field_popup_pane_g1

0x63ca,	// (0x000369a4) form_field_popup_pane_t1_ParamLimits

0x28fa,	// (0x00032ed4) input_focus_pane_cp7_ParamLimits

0x2928,	// (0x00032f02) list_form_pane_ParamLimits

0x4200,	// (0x000347da) form_field_popup_wide_pane_g1

0x4208,	// (0x000347e2) form_field_popup_wide_pane_t1_ParamLimits

0x28fa,	// (0x00032ed4) input_focus_pane_cp8_ParamLimits

0x2934,	// (0x00032f0e) list_form_wide_pane_ParamLimits

0xadfe,	// (0x0003b3d8) aid_size_cell_graphic_pane

0x6449,	// (0x00036a23) data_form_pane_t1_ParamLimits

0x7d6d,	// (0x00038347) data_form_wide_pane_t1_ParamLimits

0x9275,	// (0x0003984f) bg_status_flat_pane

0x5bbb,	// (0x00036195) title_pane_t1_ParamLimits

0x2276,	// (0x00032850) title_pane_t2_ParamLimits

0x229c,	// (0x00032876) title_pane_t3_ParamLimits

0xf557,	// (0x0003fb31) title_pane_t_ParamLimits

0x67b5,	// (0x00036d8f) level_1_signal_ParamLimits

0x67c2,	// (0x00036d9c) level_2_signal_ParamLimits

0x67cf,	// (0x00036da9) level_3_signal_ParamLimits

0x67dc,	// (0x00036db6) level_4_signal_ParamLimits

0x67e9,	// (0x00036dc3) level_5_signal_ParamLimits

0x67f6,	// (0x00036dd0) level_6_signal_ParamLimits

0x6803,	// (0x00036ddd) level_7_signal_ParamLimits

0x67b5,	// (0x00036d8f) level_1_battery_ParamLimits

0x67c2,	// (0x00036d9c) level_2_battery_ParamLimits

0x67cf,	// (0x00036da9) level_3_battery_ParamLimits

0x67dc,	// (0x00036db6) level_4_battery_ParamLimits

0x67e9,	// (0x00036dc3) level_5_battery_ParamLimits

0x67f6,	// (0x00036dd0) level_6_battery_ParamLimits

0x6803,	// (0x00036ddd) level_7_battery_ParamLimits

0x9eb6,	// (0x0003a490) bg_status_flat_pane_g1

0x9ebe,	// (0x0003a498) bg_status_flat_pane_g2

0x9ec6,	// (0x0003a4a0) bg_status_flat_pane_g3

0x9ece,	// (0x0003a4a8) bg_status_flat_pane_g4

0x9ed6,	// (0x0003a4b0) bg_status_flat_pane_g5

0x9ede,	// (0x0003a4b8) bg_status_flat_pane_g6

0x9ee6,	// (0x0003a4c0) bg_status_flat_pane_g7

0x5c2b,	// (0x00036205) tabs_3_active_pane_t1_ParamLimits

0x5c2b,	// (0x00036205) tabs_3_passive_pane_t1_ParamLimits

0x5c45,	// (0x0003621f) tabs_4_active_pane_t1_ParamLimits

0x5c45,	// (0x0003621f) tabs_4_1_passive_pane_t1_ParamLimits

0x650c,	// (0x00036ae6) tabs_2_active_pane_t1_ParamLimits

0x650c,	// (0x00036ae6) tabs_2_passive_pane_t1_ParamLimits

0x2f92,	// (0x0003356c) bg_active_tab_pane_cp4_ParamLimits

0x651e,	// (0x00036af8) tabs_2_long_active_pane_t1_ParamLimits

0x6531,	// (0x00036b0b) bg_passive_tab_pane_cp4_ParamLimits

0x7a24,	// (0x00037ffe) list_single_midp_graphic_pane_t1_ParamLimits

0x2f92,	// (0x0003356c) bg_active_tab_pane_cp5_ParamLimits

0x653d,	// (0x00036b17) tabs_3_long_active_pane_t1_ParamLimits

0x6531,	// (0x00036b0b) bg_passive_tab_pane_cp5_ParamLimits

0x7a24,	// (0x00037ffe) list_single_midp_graphic_pane_t1

0x9275,	// (0x0003984f) bg_status_flat_pane_ParamLimits

0x933a,	// (0x00039914) indicator_pane_cp2_ParamLimits

0x933a,	// (0x00039914) indicator_pane_cp2

0x947d,	// (0x00039a57) navi_pane_srt_ParamLimits

0x947d,	// (0x00039a57) navi_pane_srt

0x94a1,	// (0x00039a7b) popup_clock_digital_analogue_window_cp1

0x2300,	// (0x000328da) indicator_pane_t1

0x6efb,	// (0x000374d5) copy_highlight_pane

0x6efb,	// (0x000374d5) cursor_graphics_pane

0x6efb,	// (0x000374d5) graphic_within_text_pane

0x6efb,	// (0x000374d5) link_highlight_pane

0xa6d5,	// (0x0003acaf) popup_preview_text_window_t5_ParamLimits

0xa6d5,	// (0x0003acaf) popup_preview_text_window_t5

0x702c,	// (0x00037606) cursor_digital_pane

0x702c,	// (0x00037606) cursor_primary_pane

0x703d,	// (0x00037617) cursor_primary_small_pane

0x7045,	// (0x0003761f) cursor_secondary_pane

0x704d,	// (0x00037627) cursor_title_pane

0x702c,	// (0x00037606) link_highlight_digital_pane

0x7034,	// (0x0003760e) link_highlight_primary_pane

0x703d,	// (0x00037617) link_highlight_primary_small_pane

0x7045,	// (0x0003761f) link_highlight_secondary_pane

0x704d,	// (0x00037627) link_highlight_title_pane

0x702c,	// (0x00037606) copy_highlight_digital_pane

0x702c,	// (0x00037606) copy_highlight_primary_pane

0x703d,	// (0x00037617) copy_highlight_primary_small_pane

0x7045,	// (0x0003761f) copy_highlight_secondary_pane

0x704d,	// (0x00037627) copy_highlight_title_pane

0x7045,	// (0x0003761f) graphic_text_digital_pane

0x9f54,	// (0x0003a52e) graphic_text_primary_pane

0x9f5d,	// (0x0003a537) graphic_text_primary_small_pane

0x703d,	// (0x00037617) graphic_text_secondary_pane

0x702c,	// (0x00037606) graphic_text_title_pane

0x7055,	// (0x0003762f) cursor_primary_pane_g1

0x9f46,	// (0x0003a520) cursor_text_primary_t1

0x9f2e,	// (0x0003a508) cursor_primary_small_pane_g1

0x9f38,	// (0x0003a512) cursor_text_primary_small_t1

0x9f16,	// (0x0003a4f0) cursor_primary_small_pane_g1_copy1

0x9f20,	// (0x0003a4fa) cursor_text_primary_small_t1_copy1

0x9efe,	// (0x0003a4d8) cursor_text_title_t1

0x9f0c,	// (0x0003a4e6) cursor_title_pane_g1

0x7055,	// (0x0003762f) cursor_digital_pane_g1

0x705f,	// (0x00037639) cursor_text_digital_t1

0x706d,	// (0x00037647) link_highlight_primary_pane_g1

0x9ea7,	// (0x0003a481) link_highlight_primary_pane_t1

0x706d,	// (0x00037647) link_highlight_primary_small_pane_g1

0x7075,	// (0x0003764f) link_highlight_primary_small_pane_t1

0x7084,	// (0x0003765e) link_highlight_secondary_pane_g1

0x708c,	// (0x00037666) link_highlight_secondary_pane_t1

0x9e1b,	// (0x0003a3f5) link_highlight_title_pane_g1

0x9e23,	// (0x0003a3fd) link_highlight_title_pane_t1

0x9e04,	// (0x0003a3de) link_highlight_digital_pane_g1

0x9e0c,	// (0x0003a3e6) link_highlight_digital_pane_t1

0x9ccc,	// (0x0003a2a6) copy_highlight_primary_pane_g1

0x9ce3,	// (0x0003a2bd) copy_highlight_primary_pane_t1

0x9ccc,	// (0x0003a2a6) copy_highlight_primary_small_pane_g1

0x9cd4,	// (0x0003a2ae) copy_highlight_primary_small_pane_t1

0x709b,	// (0x00037675) copy_highlight_secondary_pane_g1

0x70a3,	// (0x0003767d) copy_highlight_secondary_pane_t1

0x9cb5,	// (0x0003a28f) copy_highlight_title_pane_g1

0x9cbd,	// (0x0003a297) copy_highlight_title_pane_t1

0x9ccc,	// (0x0003a2a6) copy_highlight_digital_pane_g1

0xafd0,	// (0x0003b5aa) copy_highlight_digital_pane_t1

0xaf24,	// (0x0003b4fe) graphic_text_primary_pane_g1

0xafb4,	// (0x0003b58e) graphic_text_primary_pane_t1

0xafc2,	// (0x0003b59c) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0003ffa3) graphic_text_primary_pane_t

0xaf90,	// (0x0003b56a) graphic_text_primary_small_pane_g1

0xaf98,	// (0x0003b572) graphic_text_primary_small_pane_t1

0xafa6,	// (0x0003b580) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0003ff9e) graphic_text_primary_small_pane_t

0xaf6c,	// (0x0003b546) graphic_text_secondary_pane_g1

0xaf74,	// (0x0003b54e) graphic_text_secondary_pane_t1

0xaf82,	// (0x0003b55c) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0003ff99) graphic_text_secondary_pane_t

0xaf48,	// (0x0003b522) graphic_text_title_pane_g1

0xaf50,	// (0x0003b52a) graphic_text_title_pane_t1

0xaf5e,	// (0x0003b538) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0003ff94) graphic_text_title_pane_t

0xaf24,	// (0x0003b4fe) graphic_text_digital_pane_g1

0xaf2c,	// (0x0003b506) graphic_text_digital_pane_t1

0xaf3a,	// (0x0003b514) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0003ff8f) graphic_text_digital_pane_t

0x22bc,	// (0x00032896) navi_icon_pane_srt_ParamLimits

0x22bc,	// (0x00032896) navi_icon_pane_srt

0x2260,	// (0x0003283a) navi_midp_pane_srt

0x2260,	// (0x0003283a) navi_navi_pane_srt

0x22bc,	// (0x00032896) navi_text_pane_srt_ParamLimits

0x22bc,	// (0x00032896) navi_text_pane_srt

0xaeef,	// (0x0003b4c9) navi_navi_icon_text_pane_srt

0xaef7,	// (0x0003b4d1) navi_navi_pane_srt_g1_ParamLimits

0xaef7,	// (0x0003b4d1) navi_navi_pane_srt_g1

0xaf09,	// (0x0003b4e3) navi_navi_pane_srt_g2_ParamLimits

0xaf09,	// (0x0003b4e3) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0003ff8a) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0003ff8a) navi_navi_pane_srt_g

0xaf1b,	// (0x0003b4f5) navi_navi_tabs_pane_srt

0xaeef,	// (0x0003b4c9) navi_navi_text_pane_srt

0xaeef,	// (0x0003b4c9) navi_navi_volume_pane_srt

0xaee0,	// (0x0003b4ba) navi_navi_text_pane_srt_t1

0x7e7c,	// (0x00038456) navi_navi_volume_pane_srt_g1

0x7e84,	// (0x0003845e) volume_small_pane_srt_ParamLimits

0x7e84,	// (0x0003845e) volume_small_pane_srt

0x70b2,	// (0x0003768c) volume_small_pane_srt_g1_ParamLimits

0x70b2,	// (0x0003768c) volume_small_pane_srt_g1

0x70c2,	// (0x0003769c) volume_small_pane_srt_g2_ParamLimits

0x70c2,	// (0x0003769c) volume_small_pane_srt_g2

0x70d3,	// (0x000376ad) volume_small_pane_srt_g3_ParamLimits

0x70d3,	// (0x000376ad) volume_small_pane_srt_g3

0x70e4,	// (0x000376be) volume_small_pane_srt_g4_ParamLimits

0x70e4,	// (0x000376be) volume_small_pane_srt_g4

0x70f5,	// (0x000376cf) volume_small_pane_srt_g5_ParamLimits

0x70f5,	// (0x000376cf) volume_small_pane_srt_g5

0x7106,	// (0x000376e0) volume_small_pane_srt_g6_ParamLimits

0x7106,	// (0x000376e0) volume_small_pane_srt_g6

0x7117,	// (0x000376f1) volume_small_pane_srt_g7_ParamLimits

0x7117,	// (0x000376f1) volume_small_pane_srt_g7

0x7128,	// (0x00037702) volume_small_pane_srt_g8_ParamLimits

0x7128,	// (0x00037702) volume_small_pane_srt_g8

0x7139,	// (0x00037713) volume_small_pane_srt_g9_ParamLimits

0x7139,	// (0x00037713) volume_small_pane_srt_g9

0x714a,	// (0x00037724) volume_small_pane_srt_g10_ParamLimits

0x714a,	// (0x00037724) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0003fd32) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0003fd32) volume_small_pane_srt_g

0x2572,	// (0x00032b4c) query_popup_data_pane_cp2

0xaec6,	// (0x0003b4a0) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xaec6,	// (0x0003b4a0) navi_navi_icon_text_pane_srt_t1

0x9f54,	// (0x0003a52e) navi_tabs_2_long_pane_srt

0x9f54,	// (0x0003a52e) navi_tabs_2_pane_srt

0x9f54,	// (0x0003a52e) navi_tabs_3_long_pane_srt

0x9f54,	// (0x0003a52e) navi_tabs_3_pane_srt

0x9f54,	// (0x0003a52e) navi_tabs_4_pane_srt

0x7e5c,	// (0x00038436) tabs_2_active_pane_srt_ParamLimits

0x7e5c,	// (0x00038436) tabs_2_active_pane_srt

0x7e6c,	// (0x00038446) tabs_2_passive_pane_srt_ParamLimits

0x7e6c,	// (0x00038446) tabs_2_passive_pane_srt

0x9186,	// (0x00039760) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9186,	// (0x00039760) bg_passive_tab_pane_cp1_srt

0xae92,	// (0x0003b46c) bg_passive_tab_pane_g1_cp1_srt

0x6a06,	// (0x00036fe0) bg_passive_tab_pane_g2_cp1_srt

0xae9b,	// (0x0003b475) bg_passive_tab_pane_g3_cp1_srt

0x22bc,	// (0x00032896) bg_active_tab_pane_cp1_srt_ParamLimits

0x22bc,	// (0x00032896) bg_active_tab_pane_cp1_srt

0xaea4,	// (0x0003b47e) tabs_2_active_pane_srt_g1

0xaeac,	// (0x0003b486) tabs_2_active_pane_srt_t1_ParamLimits

0xaeac,	// (0x0003b486) tabs_2_active_pane_srt_t1

0xae92,	// (0x0003b46c) bg_active_tab_pane_g1_cp1_srt

0x6a06,	// (0x00036fe0) bg_active_tab_pane_g2_cp1_srt

0xae9b,	// (0x0003b475) bg_active_tab_pane_g3_cp1_srt

0x7e29,	// (0x00038403) tabs_3_active_pane_srt_ParamLimits

0x7e29,	// (0x00038403) tabs_3_active_pane_srt

0x7e3a,	// (0x00038414) tabs_3_passive_pane_cp_srt_ParamLimits

0x7e3a,	// (0x00038414) tabs_3_passive_pane_cp_srt

0x7e4b,	// (0x00038425) tabs_3_passive_pane_srt_ParamLimits

0x7e4b,	// (0x00038425) tabs_3_passive_pane_srt

0x9186,	// (0x00039760) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9186,	// (0x00039760) bg_passive_tab_pane_cp2_srt

0x715b,	// (0x00037735) bg_passive_tab_pane_g1_cp2_srt

0x6a06,	// (0x00036fe0) bg_passive_tab_pane_g2_cp2_srt

0x7164,	// (0x0003773e) bg_passive_tab_pane_g3_cp2_srt

0x22bc,	// (0x00032896) bg_active_tab_pane_cp2_srt_ParamLimits

0x22bc,	// (0x00032896) bg_active_tab_pane_cp2_srt

0xae78,	// (0x0003b452) tabs_3_active_pane_srt_g1

0xae80,	// (0x0003b45a) tabs_3_active_pane_srt_t1_ParamLimits

0xae80,	// (0x0003b45a) tabs_3_active_pane_srt_t1

0x715b,	// (0x00037735) bg_active_tab_pane_g1_cp2_srt

0x6a06,	// (0x00036fe0) bg_active_tab_pane_g2_cp2_srt

0x7164,	// (0x0003773e) bg_active_tab_pane_g3_cp2_srt

0x7de1,	// (0x000383bb) tabs_4_active_pane_srt_ParamLimits

0x7de1,	// (0x000383bb) tabs_4_active_pane_srt

0x7df3,	// (0x000383cd) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7df3,	// (0x000383cd) tabs_4_passive_pane_cp2_srt

0x7345,	// (0x0003791f) aid_size_cell_toolbar

0x6531,	// (0x00036b0b) main_idle_act_pane_ParamLimits

0x752e,	// (0x00037b08) popup_large_graphic_colour_window_ParamLimits

0x78d5,	// (0x00037eaf) popup_toolbar_window_ParamLimits

0x78d5,	// (0x00037eaf) popup_toolbar_window

0x43c5,	// (0x0003499f) list_single_graphic_2heading_pane_ParamLimits

0x43c5,	// (0x0003499f) list_single_graphic_2heading_pane

0x2bfb,	// (0x000331d5) aid_size_cell_apps_grid_lsc_pane

0x2c0d,	// (0x000331e7) aid_size_cell_apps_grid_prt_pane

0x9186,	// (0x00039760) bg_wml_button_pane_cp1_ParamLimits

0x9186,	// (0x00039760) bg_wml_button_pane_cp1

0x9938,	// (0x00039f12) form_midp_field_text_pane_t1_ParamLimits

0x972a,	// (0x00039d04) input_focus_pane_cp050_ParamLimits

0x9963,	// (0x00039f3d) list_midp_form_text_pane_ParamLimits

0x9915,	// (0x00039eef) input_focus_pane_cp051_ParamLimits

0x9929,	// (0x00039f03) list_midp_choice_pane_ParamLimits

0x97e3,	// (0x00039dbd) list_single_2graphic_pane_cp3_ParamLimits

0x97e3,	// (0x00039dbd) list_single_2graphic_pane_cp3

0x97f9,	// (0x00039dd3) list_single_midp_graphic_pane_ParamLimits

0x97f9,	// (0x00039dd3) list_single_midp_graphic_pane

0x56f8,	// (0x00035cd2) list_single_graphic_2heading_pane_g1_ParamLimits

0x56f8,	// (0x00035cd2) list_single_graphic_2heading_pane_g1

0x5704,	// (0x00035cde) list_single_graphic_2heading_pane_g4_ParamLimits

0x5704,	// (0x00035cde) list_single_graphic_2heading_pane_g4

0x5710,	// (0x00035cea) list_single_graphic_2heading_pane_g5_ParamLimits

0x5710,	// (0x00035cea) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0003fd85) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0003fd85) list_single_graphic_2heading_pane_g

0x571c,	// (0x00035cf6) list_single_graphic_2heading_pane_t1_ParamLimits

0x571c,	// (0x00035cf6) list_single_graphic_2heading_pane_t1

0x5730,	// (0x00035d0a) list_single_graphic_2heading_pane_t2_ParamLimits

0x5730,	// (0x00035d0a) list_single_graphic_2heading_pane_t2

0x574c,	// (0x00035d26) list_single_graphic_2heading_pane_t3_ParamLimits

0x574c,	// (0x00035d26) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0003fd8c) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0003fd8c) list_single_graphic_2heading_pane_t

0x95f4,	// (0x00039bce) bg_popup_sub_pane_cp2

0x961e,	// (0x00039bf8) grid_toobar_pane

0x7994,	// (0x00037f6e) cell_toolbar_pane_ParamLimits

0x7994,	// (0x00037f6e) cell_toolbar_pane

0x965a,	// (0x00039c34) cell_toolbar_pane_g1_ParamLimits

0x965a,	// (0x00039c34) cell_toolbar_pane_g1

0x966e,	// (0x00039c48) cell_toolbar_pane_g2_ParamLimits

0x966e,	// (0x00039c48) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0003fd9a) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0003fd9a) cell_toolbar_pane_g

0x9690,	// (0x00039c6a) grid_highlight_pane_cp2_ParamLimits

0x9690,	// (0x00039c6a) grid_highlight_pane_cp2

0x96aa,	// (0x00039c84) toolbar_button_pane

0x96b6,	// (0x00039c90) toolbar_button_pane_g1

0x96be,	// (0x00039c98) toolbar_button_pane_g2

0x96c6,	// (0x00039ca0) toolbar_button_pane_g3

0x96ce,	// (0x00039ca8) toolbar_button_pane_g4

0x96d6,	// (0x00039cb0) toolbar_button_pane_g5

0x96de,	// (0x00039cb8) toolbar_button_pane_g6

0x96e6,	// (0x00039cc0) toolbar_button_pane_g7

0x96ee,	// (0x00039cc8) toolbar_button_pane_g8

0x96f6,	// (0x00039cd0) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0003fd9f) toolbar_button_pane_g

0x79cc,	// (0x00037fa6) list_single_2graphic_pane_g1_cp3_ParamLimits

0x79cc,	// (0x00037fa6) list_single_2graphic_pane_g1_cp3

0x79d8,	// (0x00037fb2) list_single_2graphic_pane_g2_cp3_ParamLimits

0x79d8,	// (0x00037fb2) list_single_2graphic_pane_g2_cp3

0x79e9,	// (0x00037fc3) list_single_2graphic_pane_g3_cp3

0x79f1,	// (0x00037fcb) list_single_2graphic_pane_g4_cp3_ParamLimits

0x79f1,	// (0x00037fcb) list_single_2graphic_pane_g4_cp3

0x79fd,	// (0x00037fd7) list_single_2graphic_pane_t1_cp3_ParamLimits

0x79fd,	// (0x00037fd7) list_single_2graphic_pane_t1_cp3

0x7a18,	// (0x00037ff2) list_single_midp_graphic_pane_g2_ParamLimits

0x7a18,	// (0x00037ff2) list_single_midp_graphic_pane_g2

0x734d,	// (0x00037927) aid_zoom_text_primary

0x56f0,	// (0x00035cca) aid_zoom_text_secondary

0x90c8,	// (0x000396a2) status_small_pane_g7_ParamLimits

0x90c8,	// (0x000396a2) status_small_pane_g7

0x90eb,	// (0x000396c5) status_small_pane_t1_ParamLimits

0x5b96,	// (0x00036170) title_pane_g2

0x0003,

0xf54e,	// (0x0003fb28) title_pane_g

0x5dff,	// (0x000363d9) aid_size_cell_colour_1_pane_ParamLimits

0x5dff,	// (0x000363d9) aid_size_cell_colour_1_pane

0x5e13,	// (0x000363ed) aid_size_cell_colour_2_pane_ParamLimits

0x5e13,	// (0x000363ed) aid_size_cell_colour_2_pane

0x5e27,	// (0x00036401) aid_size_cell_colour_3_pane_ParamLimits

0x5e27,	// (0x00036401) aid_size_cell_colour_3_pane

0x5e3b,	// (0x00036415) aid_size_cell_colour_4_pane_ParamLimits

0x5e3b,	// (0x00036415) aid_size_cell_colour_4_pane

0x658b,	// (0x00036b65) title_pane_stacon_g1_ParamLimits

0x658b,	// (0x00036b65) title_pane_stacon_g1

0x9d3a,	// (0x0003a314) popup_note_wait_window_g3_ParamLimits

0x9d3a,	// (0x0003a314) popup_note_wait_window_g3

0x9db1,	// (0x0003a38b) popup_note_wait_window_t5_ParamLimits

0x9db1,	// (0x0003a38b) popup_note_wait_window_t5

0x2260,	// (0x0003283a) main_feb_china_hwr_fs_writing_pane

0x73f5,	// (0x000379cf) popup_feb_china_hwr_fs_window_ParamLimits

0x73f5,	// (0x000379cf) popup_feb_china_hwr_fs_window

0x7a3a,	// (0x00038014) aid_size_cell_hwr_fs_ParamLimits

0x7a3a,	// (0x00038014) aid_size_cell_hwr_fs

0x972a,	// (0x00039d04) bg_popup_sub_pane_cp3_ParamLimits

0x972a,	// (0x00039d04) bg_popup_sub_pane_cp3

0x7a4f,	// (0x00038029) grid_hwr_fs_pane_ParamLimits

0x7a4f,	// (0x00038029) grid_hwr_fs_pane

0x7a67,	// (0x00038041) linegrid_hwr_fs_pane_ParamLimits

0x7a67,	// (0x00038041) linegrid_hwr_fs_pane

0x7a77,	// (0x00038051) cell_hwr_fs_pane_ParamLimits

0x7a77,	// (0x00038051) cell_hwr_fs_pane

0x9736,	// (0x00039d10) linegrid_hwr_fs_pane_g1_ParamLimits

0x9736,	// (0x00039d10) linegrid_hwr_fs_pane_g1

0x9742,	// (0x00039d1c) linegrid_hwr_fs_pane_g2_ParamLimits

0x9742,	// (0x00039d1c) linegrid_hwr_fs_pane_g2

0x9754,	// (0x00039d2e) linegrid_hwr_fs_pane_g3_ParamLimits

0x9754,	// (0x00039d2e) linegrid_hwr_fs_pane_g3

0x7a9b,	// (0x00038075) linegrid_hwr_fs_pane_g4_ParamLimits

0x7a9b,	// (0x00038075) linegrid_hwr_fs_pane_g4

0x7ab9,	// (0x00038093) linegrid_hwr_fs_pane_g5_ParamLimits

0x7ab9,	// (0x00038093) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0003fdca) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0003fdca) linegrid_hwr_fs_pane_g

0x9760,	// (0x00039d3a) cell_hwr_fs_pane_g1_ParamLimits

0x9760,	// (0x00039d3a) cell_hwr_fs_pane_g1

0x952f,	// (0x00039b09) cell_hwr_fs_pane_g2_ParamLimits

0x952f,	// (0x00039b09) cell_hwr_fs_pane_g2

0x9776,	// (0x00039d50) cell_hwr_fs_pane_g3_ParamLimits

0x9776,	// (0x00039d50) cell_hwr_fs_pane_g3

0x9783,	// (0x00039d5d) cell_hwr_fs_pane_g4_ParamLimits

0x9783,	// (0x00039d5d) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0003fdd5) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0003fdd5) cell_hwr_fs_pane_g

0x7acf,	// (0x000380a9) cell_hwr_fs_pane_t1

0x2260,	// (0x0003283a) grid_highlight_pane_cp6

0x2260,	// (0x0003283a) main_idle_act2_pane

0x2a0a,	// (0x00032fe4) aid_inside_area_popup_secondary

0xa3ea,	// (0x0003a9c4) aid_inside_area_window_primary_ParamLimits

0xa3ea,	// (0x0003a9c4) aid_inside_area_window_primary

0xafdf,	// (0x0003b5b9) ai2_news_ticker_pane

0xafe7,	// (0x0003b5c1) aid_size_cell_ai1_link_ParamLimits

0xafe7,	// (0x0003b5c1) aid_size_cell_ai1_link

0xb001,	// (0x0003b5db) popup_ai2_data_window_ParamLimits

0xb001,	// (0x0003b5db) popup_ai2_data_window

0xb01f,	// (0x0003b5f9) popup_ai2_link_window_ParamLimits

0xb01f,	// (0x0003b5f9) popup_ai2_link_window

0x972a,	// (0x00039d04) bg_popup_sub_pane_cp4_ParamLimits

0x972a,	// (0x00039d04) bg_popup_sub_pane_cp4

0xb035,	// (0x0003b60f) grid_ai2_link_pane_ParamLimits

0xb035,	// (0x0003b60f) grid_ai2_link_pane

0xb04c,	// (0x0003b626) popup_ai2_link_window_g1_ParamLimits

0xb04c,	// (0x0003b626) popup_ai2_link_window_g1

0xb058,	// (0x0003b632) popup_ai2_link_window_g2_ParamLimits

0xb058,	// (0x0003b632) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0003ffa8) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0003ffa8) popup_ai2_link_window_g

0xb069,	// (0x0003b643) ai2_mp_button_pane

0xb071,	// (0x0003b64b) ai2_mp_volume_pane

0x9915,	// (0x00039eef) bg_popup_sub_pane_cp5_ParamLimits

0x9915,	// (0x00039eef) bg_popup_sub_pane_cp5

0xb079,	// (0x0003b653) heading_ai2_gene_pane_ParamLimits

0xb079,	// (0x0003b653) heading_ai2_gene_pane

0xb085,	// (0x0003b65f) list_ai2_gene_pane_ParamLimits

0xb085,	// (0x0003b65f) list_ai2_gene_pane

0xb0cd,	// (0x0003b6a7) cell_ai2_link_pane_ParamLimits

0xb0cd,	// (0x0003b6a7) cell_ai2_link_pane

0xb0e3,	// (0x0003b6bd) cell_ai2_link_pane_g1

0x2260,	// (0x0003283a) grid_highlight_pane_cp7

0x7e99,	// (0x00038473) ai2_mp_volume_pane_g1

0xb1b6,	// (0x0003b790) ai2_mp_volume_pane_g2

0xb12b,	// (0x0003b705) list_ai2_gene_pane_t1

0xb1be,	// (0x0003b798) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0003ffc1) ai2_mp_volume_pane_g

0x7ea1,	// (0x0003847b) volume_small_pane_cp3

0xb1c6,	// (0x0003b7a0) aid_size_cell_ai2_button

0xb1ce,	// (0x0003b7a8) grid_ai2_button_pane

0xb1d7,	// (0x0003b7b1) cell_ai2_button_pane_ParamLimits

0xb1d7,	// (0x0003b7b1) cell_ai2_button_pane

0x2256,	// (0x00032830) cell_ai2_button_pane_g1

0x2260,	// (0x0003283a) grid_highlight_pane_cp8

0xb176,	// (0x0003b750) ai2_gene_pane_t1_ParamLimits

0xb176,	// (0x0003b750) ai2_gene_pane_t1

0x733b,	// (0x00037915) aid_height_parent_landscape

0xaa6f,	// (0x0003b049) aid_height_set_list

0xaa80,	// (0x0003b05a) aid_size_parent

0xadfe,	// (0x0003b3d8) aid_size_cell_graphic_pane_ParamLimits

0xb095,	// (0x0003b66f) popup_ai2_data_window_g1_ParamLimits

0xb095,	// (0x0003b66f) popup_ai2_data_window_g1

0xb0a1,	// (0x0003b67b) ai2_news_ticker_pane_g1

0xb0a9,	// (0x0003b683) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0003ffad) ai2_news_ticker_pane_g

0xb0b1,	// (0x0003b68b) ai2_news_ticker_pane_t1

0xb0bf,	// (0x0003b699) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0003ffb2) ai2_news_ticker_pane_t

0xb0ec,	// (0x0003b6c6) heading_ai2_gene_pane_g1

0xb0f4,	// (0x0003b6ce) heading_ai2_gene_pane_t1_ParamLimits

0xb0f4,	// (0x0003b6ce) heading_ai2_gene_pane_t1

0xb109,	// (0x0003b6e3) list_highlight_pane_cp6

0xb111,	// (0x0003b6eb) ai2_gene_pane_ParamLimits

0xb111,	// (0x0003b6eb) ai2_gene_pane

0xb139,	// (0x0003b713) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0003ffb7) list_ai2_gene_pane_t

0xb147,	// (0x0003b721) list_highlight_pane_cp8_ParamLimits

0xb147,	// (0x0003b721) list_highlight_pane_cp8

0xb158,	// (0x0003b732) ai2_gene_pane_g1_ParamLimits

0xb158,	// (0x0003b732) ai2_gene_pane_g1

0xb16a,	// (0x0003b744) ai2_gene_pane_g2_ParamLimits

0xb16a,	// (0x0003b744) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0003ffbc) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0003ffbc) ai2_gene_pane_g

0x2890,	// (0x00032e6a) scroll_pane_cp12

0x72f8,	// (0x000378d2) control_pane_t3_ParamLimits

0x72f8,	// (0x000378d2) control_pane_t3

0x90dc,	// (0x000396b6) status_small_pane_g8_ParamLimits

0x90dc,	// (0x000396b6) status_small_pane_g8

0x74f3,	// (0x00037acd) popup_find_window_ParamLimits

0x771e,	// (0x00037cf8) popup_note_image_window_ParamLimits

0x40d0,	// (0x000346aa) list_double2_graphic_pane_vc_g1_ParamLimits

0x40d0,	// (0x000346aa) list_double2_graphic_pane_vc_g1

0x42c2,	// (0x0003489c) list_double2_graphic_pane_vc_g2_ParamLimits

0x42c2,	// (0x0003489c) list_double2_graphic_pane_vc_g2

0x42ce,	// (0x000348a8) list_double2_graphic_pane_vc_g3_ParamLimits

0x42ce,	// (0x000348a8) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0003fd93) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0003fd93) list_double2_graphic_pane_vc_g

0x42da,	// (0x000348b4) list_double2_graphic_pane_vc_t1_ParamLimits

0x42da,	// (0x000348b4) list_double2_graphic_pane_vc_t1

0x4094,	// (0x0003466e) list_single_heading_pane_vc_g1_ParamLimits

0x4094,	// (0x0003466e) list_single_heading_pane_vc_g1

0x40a0,	// (0x0003467a) list_single_heading_pane_vc_g2_ParamLimits

0x40a0,	// (0x0003467a) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0003fdb4) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0003fdb4) list_single_heading_pane_vc_g

0x42f0,	// (0x000348ca) list_single_heading_pane_vc_t1_ParamLimits

0x42f0,	// (0x000348ca) list_single_heading_pane_vc_t1

0x4306,	// (0x000348e0) list_single_heading_pane_vc_t2_ParamLimits

0x4306,	// (0x000348e0) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0003fdb9) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0003fdb9) list_single_heading_pane_vc_t

0x4318,	// (0x000348f2) list_setting_number_pane_vc_g1_ParamLimits

0x4318,	// (0x000348f2) list_setting_number_pane_vc_g1

0x4324,	// (0x000348fe) list_setting_number_pane_vc_g2_ParamLimits

0x4324,	// (0x000348fe) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003fdbe) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003fdbe) list_setting_number_pane_vc_g

0x4330,	// (0x0003490a) list_setting_number_pane_vc_t1_ParamLimits

0x4330,	// (0x0003490a) list_setting_number_pane_vc_t1

0x4344,	// (0x0003491e) list_setting_number_pane_vc_t2_ParamLimits

0x4344,	// (0x0003491e) list_setting_number_pane_vc_t2

0x4360,	// (0x0003493a) list_setting_number_pane_vc_t3_ParamLimits

0x4360,	// (0x0003493a) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0003fdc3) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0003fdc3) list_setting_number_pane_vc_t

0x438e,	// (0x00034968) set_value_pane_vc_ParamLimits

0x438e,	// (0x00034968) set_value_pane_vc

0x43c5,	// (0x0003499f) list_double2_graphic_pane_vc_ParamLimits

0x43c5,	// (0x0003499f) list_double2_graphic_pane_vc

0xac67,	// (0x0003b241) list_double2_large_graphic_pane_vc_ParamLimits

0xac67,	// (0x0003b241) list_double2_large_graphic_pane_vc

0x43c5,	// (0x0003499f) list_double2_pane_vc_ParamLimits

0x43c5,	// (0x0003499f) list_double2_pane_vc

0x43c5,	// (0x0003499f) list_double_graphic_heading_pane_vc_ParamLimits

0x43c5,	// (0x0003499f) list_double_graphic_heading_pane_vc

0x43c5,	// (0x0003499f) list_double_graphic_pane_vc_ParamLimits

0x43c5,	// (0x0003499f) list_double_graphic_pane_vc

0x43c5,	// (0x0003499f) list_double_heading_pane_vc_ParamLimits

0x43c5,	// (0x0003499f) list_double_heading_pane_vc

0xac7b,	// (0x0003b255) list_double_large_graphic_pane_vc_ParamLimits

0xac7b,	// (0x0003b255) list_double_large_graphic_pane_vc

0x43c5,	// (0x0003499f) list_double_number_pane_vc_ParamLimits

0x43c5,	// (0x0003499f) list_double_number_pane_vc

0x43c5,	// (0x0003499f) list_double_pane_vc_ParamLimits

0x43c5,	// (0x0003499f) list_double_pane_vc

0x43c5,	// (0x0003499f) list_double_time_pane_vc_ParamLimits

0x43c5,	// (0x0003499f) list_double_time_pane_vc

0x43c5,	// (0x0003499f) list_setting_number_pane_vc_ParamLimits

0x43c5,	// (0x0003499f) list_setting_number_pane_vc

0x43c5,	// (0x0003499f) list_setting_pane_vc_ParamLimits

0x43c5,	// (0x0003499f) list_setting_pane_vc

0x43c5,	// (0x0003499f) list_single_graphic_heading_pane_vc_ParamLimits

0x43c5,	// (0x0003499f) list_single_graphic_heading_pane_vc

0x43c5,	// (0x0003499f) list_single_heading_pane_vc_ParamLimits

0x43c5,	// (0x0003499f) list_single_heading_pane_vc

0xac9d,	// (0x0003b277) list_single_number_heading_pane_vc_ParamLimits

0xac9d,	// (0x0003b277) list_single_number_heading_pane_vc

0x40d0,	// (0x000346aa) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x40d0,	// (0x000346aa) list_double_graphic_heading_pane_vc_g1

0x4094,	// (0x0003466e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4094,	// (0x0003466e) list_double_graphic_heading_pane_vc_g2

0x40a0,	// (0x0003467a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x40a0,	// (0x0003467a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0003ffc8) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0003ffc8) list_double_graphic_heading_pane_vc_g

0x43da,	// (0x000349b4) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x43da,	// (0x000349b4) list_double_graphic_heading_pane_vc_t1

0x43f0,	// (0x000349ca) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x43f0,	// (0x000349ca) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x0003ffcf) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x0003ffcf) list_double_graphic_heading_pane_vc_t

0x4318,	// (0x000348f2) list_setting_pane_vc_g1_ParamLimits

0x4318,	// (0x000348f2) list_setting_pane_vc_g1

0x4324,	// (0x000348fe) list_setting_pane_vc_g2_ParamLimits

0x4324,	// (0x000348fe) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003fdbe) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003fdbe) list_setting_pane_vc_g

0x440e,	// (0x000349e8) list_setting_pane_vc_t1_ParamLimits

0x440e,	// (0x000349e8) list_setting_pane_vc_t1

0x442a,	// (0x00034a04) list_setting_pane_vc_t2_ParamLimits

0x442a,	// (0x00034a04) list_setting_pane_vc_t2

0x0001,

0xfa23,	// (0x0003fffd) list_setting_pane_vc_t_ParamLimits

0xfa23,	// (0x0003fffd) list_setting_pane_vc_t

0x438e,	// (0x00034968) set_value_pane_cp_vc_ParamLimits

0x438e,	// (0x00034968) set_value_pane_cp_vc

0x4094,	// (0x0003466e) list_single_number_heading_pane_vc_g1_ParamLimits

0x4094,	// (0x0003466e) list_single_number_heading_pane_vc_g1

0x40a0,	// (0x0003467a) list_single_number_heading_pane_vc_g2_ParamLimits

0x40a0,	// (0x0003467a) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0003fdb4) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0003fdb4) list_single_number_heading_pane_vc_g

0x4446,	// (0x00034a20) list_single_number_heading_pane_vc_t1_ParamLimits

0x4446,	// (0x00034a20) list_single_number_heading_pane_vc_t1

0x40ac,	// (0x00034686) list_single_number_heading_pane_vc_t2_ParamLimits

0x40ac,	// (0x00034686) list_single_number_heading_pane_vc_t2

0x40be,	// (0x00034698) list_single_number_heading_pane_vc_t3_ParamLimits

0x40be,	// (0x00034698) list_single_number_heading_pane_vc_t3

0x0002,

0xfa28,	// (0x00040002) list_single_number_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x00040002) list_single_number_heading_pane_vc_t

0x40d0,	// (0x000346aa) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x40d0,	// (0x000346aa) list_single_graphic_heading_pane_vc_g1

0x4094,	// (0x0003466e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4094,	// (0x0003466e) list_single_graphic_heading_pane_vc_g4

0x40a0,	// (0x0003467a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x40a0,	// (0x0003467a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ee,	// (0x0003ffc8) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0003ffc8) list_single_graphic_heading_pane_vc_g

0x4446,	// (0x00034a20) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4446,	// (0x00034a20) list_single_graphic_heading_pane_vc_t1

0x445c,	// (0x00034a36) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x445c,	// (0x00034a36) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2f,	// (0x00040009) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x00040009) list_single_graphic_heading_pane_vc_t

0x4094,	// (0x0003466e) list_double2_pane_vc_g1_ParamLimits

0x4094,	// (0x0003466e) list_double2_pane_vc_g1

0x40a0,	// (0x0003467a) list_double2_pane_vc_g2_ParamLimits

0x40a0,	// (0x0003467a) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x0003fdb4) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x0003fdb4) list_double2_pane_vc_g

0x43af,	// (0x00034989) list_double2_pane_vc_t1_ParamLimits

0x43af,	// (0x00034989) list_double2_pane_vc_t1

0x40dc,	// (0x000346b6) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x40dc,	// (0x000346b6) list_double2_large_graphic_pane_vc_g1

0x40e8,	// (0x000346c2) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x40e8,	// (0x000346c2) list_double2_large_graphic_pane_vc_g2

0x40f4,	// (0x000346ce) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x40f4,	// (0x000346ce) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa34,	// (0x0004000e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0004000e) list_double2_large_graphic_pane_vc_g

0x4100,	// (0x000346da) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x4100,	// (0x000346da) list_double2_large_graphic_pane_vc_t1

0x446e,	// (0x00034a48) list_double_time_pane_vc_g1_ParamLimits

0x446e,	// (0x00034a48) list_double_time_pane_vc_g1

0x447a,	// (0x00034a54) list_double_time_pane_vc_g2_ParamLimits

0x447a,	// (0x00034a54) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x00040015) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x00040015) list_double_time_pane_vc_g

0x4486,	// (0x00034a60) list_double_time_pane_vc_t1_ParamLimits

0x4486,	// (0x00034a60) list_double_time_pane_vc_t1

0x44b0,	// (0x00034a8a) list_double_time_pane_vc_t2_ParamLimits

0x44b0,	// (0x00034a8a) list_double_time_pane_vc_t2

0x44f9,	// (0x00034ad3) list_double_time_pane_vc_t3_ParamLimits

0x44f9,	// (0x00034ad3) list_double_time_pane_vc_t3

0x450b,	// (0x00034ae5) list_double_time_pane_vc_t4_ParamLimits

0x450b,	// (0x00034ae5) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x0004001a) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x0004001a) list_double_time_pane_vc_t

0x4094,	// (0x0003466e) list_double_pane_vc_g1_ParamLimits

0x4094,	// (0x0003466e) list_double_pane_vc_g1

0x40a0,	// (0x0003467a) list_double_pane_vc_g2_ParamLimits

0x40a0,	// (0x0003467a) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x0003fdb4) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x0003fdb4) list_double_pane_vc_g

0x451f,	// (0x00034af9) list_double_pane_vc_t1_ParamLimits

0x451f,	// (0x00034af9) list_double_pane_vc_t1

0x4533,	// (0x00034b0d) list_double_pane_vc_t2_ParamLimits

0x4533,	// (0x00034b0d) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x00040023) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x00040023) list_double_pane_vc_t

0x4094,	// (0x0003466e) list_double_number_pane_vc_g1_ParamLimits

0x4094,	// (0x0003466e) list_double_number_pane_vc_g1

0x40a0,	// (0x0003467a) list_double_number_pane_vc_g2_ParamLimits

0x40a0,	// (0x0003467a) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0003fdb4) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0003fdb4) list_double_number_pane_vc_g

0x4549,	// (0x00034b23) list_double_number_pane_vc_t1_ParamLimits

0x4549,	// (0x00034b23) list_double_number_pane_vc_t1

0x455b,	// (0x00034b35) list_double_number_pane_vc_t2_ParamLimits

0x455b,	// (0x00034b35) list_double_number_pane_vc_t2

0x4533,	// (0x00034b0d) list_double_number_pane_vc_t3_ParamLimits

0x4533,	// (0x00034b0d) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x00040028) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x00040028) list_double_number_pane_vc_t

0x456f,	// (0x00034b49) list_double_large_graphic_pane_vc_g1_ParamLimits

0x456f,	// (0x00034b49) list_double_large_graphic_pane_vc_g1

0x4591,	// (0x00034b6b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4591,	// (0x00034b6b) list_double_large_graphic_pane_vc_g2

0x45a5,	// (0x00034b7f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x45a5,	// (0x00034b7f) list_double_large_graphic_pane_vc_g3

0x45b4,	// (0x00034b8e) list_double_large_graphic_pane_vc_g4_ParamLimits

0x45b4,	// (0x00034b8e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x0004002f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0004002f) list_double_large_graphic_pane_vc_g

0x45c3,	// (0x00034b9d) list_double_large_graphic_pane_vc_t1_ParamLimits

0x45c3,	// (0x00034b9d) list_double_large_graphic_pane_vc_t1

0x45df,	// (0x00034bb9) list_double_large_graphic_pane_vc_t2_ParamLimits

0x45df,	// (0x00034bb9) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x00040038) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x00040038) list_double_large_graphic_pane_vc_t

0x4094,	// (0x0003466e) list_double_heading_pane_vc_g1_ParamLimits

0x4094,	// (0x0003466e) list_double_heading_pane_vc_g1

0x40a0,	// (0x0003467a) list_double_heading_pane_vc_g2_ParamLimits

0x40a0,	// (0x0003467a) list_double_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0003fdb4) list_double_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0003fdb4) list_double_heading_pane_vc_g

0x45ff,	// (0x00034bd9) list_double_heading_pane_vc_t1_ParamLimits

0x45ff,	// (0x00034bd9) list_double_heading_pane_vc_t1

0x4611,	// (0x00034beb) list_double_heading_pane_vc_t2_ParamLimits

0x4611,	// (0x00034beb) list_double_heading_pane_vc_t2

0x0001,

0xfa63,	// (0x0004003d) list_double_heading_pane_vc_t_ParamLimits

0xfa63,	// (0x0004003d) list_double_heading_pane_vc_t

0x4629,	// (0x00034c03) list_double_graphic_pane_vc_g1_ParamLimits

0x4629,	// (0x00034c03) list_double_graphic_pane_vc_g1

0x463c,	// (0x00034c16) list_double_graphic_pane_vc_g2_ParamLimits

0x463c,	// (0x00034c16) list_double_graphic_pane_vc_g2

0x4094,	// (0x0003466e) list_double_graphic_pane_vc_g3_ParamLimits

0x4094,	// (0x0003466e) list_double_graphic_pane_vc_g3

0x0003,

0xfa68,	// (0x00040042) list_double_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x00040042) list_double_graphic_pane_vc_g

0x4659,	// (0x00034c33) list_double_graphic_pane_vc_t1_ParamLimits

0x4659,	// (0x00034c33) list_double_graphic_pane_vc_t1

0x4683,	// (0x00034c5d) list_double_graphic_pane_vc_t2_ParamLimits

0x4683,	// (0x00034c5d) list_double_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0004004b) list_double_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0004004b) list_double_graphic_pane_vc_t

0x5798,	// (0x00035d72) aid_size_cell_fastswap

0x57a0,	// (0x00035d7a) aid_size_cell_touch_ParamLimits

0x57a0,	// (0x00035d7a) aid_size_cell_touch

0x5a0b,	// (0x00035fe5) popup_fast_swap_wide_window_ParamLimits

0x5a0b,	// (0x00035fe5) popup_fast_swap_wide_window

0x5b29,	// (0x00036103) touch_pane_ParamLimits

0x5b29,	// (0x00036103) touch_pane

0x28e6,	// (0x00032ec0) button_value_adjust_pane_cp2

0x4169,	// (0x00034743) button_value_adjust_pane_cp4

0x4171,	// (0x0003474b) form_field_data_pane_cp2

0x637b,	// (0x00036955) form_field_data_wide_pane_cp2

0x2c32,	// (0x0003320c) bg_scroll_pane_ParamLimits

0x678c,	// (0x00036d66) scroll_handle_pane_ParamLimits

0x67a0,	// (0x00036d7a) scroll_sc2_down_pane_ParamLimits

0x67a0,	// (0x00036d7a) scroll_sc2_down_pane

0x2c63,	// (0x0003323d) scroll_sc2_up_pane_ParamLimits

0x2c63,	// (0x0003323d) scroll_sc2_up_pane

0xb8c0,	// (0x0003be9a) grid_wheel_folder_pane_g1_ParamLimits

0xb8c0,	// (0x0003be9a) grid_wheel_folder_pane_g1

0x6b4d,	// (0x00037127) clock_nsta_pane_cp2_ParamLimits

0x6b4d,	// (0x00037127) clock_nsta_pane_cp2

0x6f03,	// (0x000374dd) listscroll_midp_pane_ParamLimits

0x6f0f,	// (0x000374e9) midp_canvas_pane

0x9156,	// (0x00039730) nsta_clock_indic_pane

0x9192,	// (0x0003976c) listscroll_form_pane_vc

0x919a,	// (0x00039774) listscroll_set_pane_vc_ParamLimits

0x919a,	// (0x00039774) listscroll_set_pane_vc

0x9291,	// (0x0003986b) clock_nsta_pane

0x9308,	// (0x000398e2) indicator_nsta_pane

0x95f4,	// (0x00039bce) bg_popup_sub_pane_cp2_ParamLimits

0x9608,	// (0x00039be2) find_pane_cp2_ParamLimits

0x9608,	// (0x00039be2) find_pane_cp2

0x961e,	// (0x00039bf8) grid_toobar_pane_ParamLimits

0x96fe,	// (0x00039cd8) list_form_gen_pane_vc_ParamLimits

0x96fe,	// (0x00039cd8) list_form_gen_pane_vc

0x9714,	// (0x00039cee) scroll_pane_cp8_vc_ParamLimits

0x9714,	// (0x00039cee) scroll_pane_cp8_vc

0x9790,	// (0x00039d6a) data_form_wide_pane_vc_ParamLimits

0x9790,	// (0x00039d6a) data_form_wide_pane_vc

0x979c,	// (0x00039d76) form_field_data_wide_pane_vc_g1

0x97a4,	// (0x00039d7e) form_field_data_wide_pane_vc_t1_ParamLimits

0x97a4,	// (0x00039d7e) form_field_data_wide_pane_vc_t1

0x28fa,	// (0x00032ed4) input_focus_pane_cp6_vc_ParamLimits

0x28fa,	// (0x00032ed4) input_focus_pane_cp6_vc

0x9aa0,	// (0x0003a07a) list_midp_pane_ParamLimits

0x9aac,	// (0x0003a086) scroll_pane_cp16_ParamLimits

0x9aac,	// (0x0003a086) scroll_pane_cp16

0x9b0e,	// (0x0003a0e8) button_value_adjust_pane_ParamLimits

0x9b0e,	// (0x0003a0e8) button_value_adjust_pane

0xaa92,	// (0x0003b06c) button_value_adjust_pane_cp6_ParamLimits

0xaa92,	// (0x0003b06c) button_value_adjust_pane_cp6

0xabda,	// (0x0003b1b4) settings_code_pane_cp_ParamLimits

0xabda,	// (0x0003b1b4) settings_code_pane_cp

0x2256,	// (0x00032830) cell_touch_pane_g1

0x2256,	// (0x00032830) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0003fcd8) cell_touch_pane_g

0xb1e9,	// (0x0003b7c3) cell_touch_pane_cp_ParamLimits

0xb1e9,	// (0x0003b7c3) cell_touch_pane_cp

0xb1f9,	// (0x0003b7d3) cell_touch_pane_ParamLimits

0xb1f9,	// (0x0003b7d3) cell_touch_pane

0x2256,	// (0x00032830) scroll_sc2_down_pane_g1

0x2256,	// (0x00032830) scroll_sc2_up_pane_g1

0x2260,	// (0x0003283a) bg_set_opt_pane_cp4_vc

0xb20a,	// (0x0003b7e4) list_set_graphic_pane_vc_g1_ParamLimits

0xb20a,	// (0x0003b7e4) list_set_graphic_pane_vc_g1

0xb216,	// (0x0003b7f0) list_set_graphic_pane_vc_g2_ParamLimits

0xb216,	// (0x0003b7f0) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0003ffd4) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0003ffd4) list_set_graphic_pane_vc_g

0xb222,	// (0x0003b7fc) text_primary_small_cp13_vc_ParamLimits

0xb222,	// (0x0003b7fc) text_primary_small_cp13_vc

0x6be3,	// (0x000371bd) list_set_graphic_pane_vc_ParamLimits

0x6be3,	// (0x000371bd) list_set_graphic_pane_vc

0x2260,	// (0x0003283a) input_focus_pane_cp2_vc

0x2256,	// (0x00032830) setting_code_pane_vc_g1

0x22d3,	// (0x000328ad) setting_code_pane_vc_t1

0xb23a,	// (0x0003b814) set_text_pane_vc_t1_ParamLimits

0xb23a,	// (0x0003b814) set_text_pane_vc_t1

0x2260,	// (0x0003283a) input_focus_pane_cp1_vc

0xb258,	// (0x0003b832) list_set_text_pane_vc

0x2256,	// (0x00032830) setting_text_pane_vc_g1

0x2260,	// (0x0003283a) bg_set_opt_pane_cp2_vc

0x22ca,	// (0x000328a4) setting_slider_graphic_pane_vc_g1

0xb262,	// (0x0003b83c) setting_slider_graphic_pane_vc_t1

0xb274,	// (0x0003b84e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0003ffd9) setting_slider_graphic_pane_vc_t

0xb286,	// (0x0003b860) slider_set_pane_cp_vc

0xb290,	// (0x0003b86a) slider_set_pane_vc_g1

0xb299,	// (0x0003b873) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0003ffde) slider_set_pane_vc_g

0x2952,	// (0x00032f2c) set_opt_bg_pane_g1_copy1

0x295a,	// (0x00032f34) set_opt_bg_pane_g2_copy1

0xb2c5,	// (0x0003b89f) set_opt_bg_pane_g3_copy1

0x296a,	// (0x00032f44) set_opt_bg_pane_g4_copy1

0x2972,	// (0x00032f4c) set_opt_bg_pane_g5_copy1

0x297a,	// (0x00032f54) set_opt_bg_pane_g6_copy1

0xb2cf,	// (0x0003b8a9) set_opt_bg_pane_g7_copy1

0xb2d9,	// (0x0003b8b3) set_opt_bg_pane_g8_copy1

0xb2e3,	// (0x0003b8bd) set_opt_bg_pane_g9_copy1

0x2260,	// (0x0003283a) bg_set_opt_pane_cp_vc

0xb2ed,	// (0x0003b8c7) setting_slider_pane_vc_t1

0xb2fc,	// (0x0003b8d6) setting_slider_pane_vc_t2

0xb30e,	// (0x0003b8e8) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0003ffed) setting_slider_pane_vc_t

0xb320,	// (0x0003b8fa) slider_set_pane_vc

0x7afd,	// (0x000380d7) volume_set_pane_vc_g1

0x7b06,	// (0x000380e0) volume_set_pane_vc_g2

0x7b0f,	// (0x000380e9) volume_set_pane_vc_g3

0x7b18,	// (0x000380f2) volume_set_pane_vc_g4

0x7b21,	// (0x000380fb) volume_set_pane_vc_g5

0x7b2a,	// (0x00038104) volume_set_pane_vc_g6

0x7b33,	// (0x0003810d) volume_set_pane_vc_g7

0x7b3c,	// (0x00038116) volume_set_pane_vc_g8

0x7b45,	// (0x0003811f) volume_set_pane_vc_g9

0x7b4e,	// (0x00038128) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0003fe8b) volume_set_pane_vc_g

0xb328,	// (0x0003b902) volume_set_pane_vc

0xb332,	// (0x0003b90c) button_value_adjust_pane_cp1_vc

0xb33c,	// (0x0003b916) list_highlight_pane_cp2_vc

0xb345,	// (0x0003b91f) list_set_pane_vc_ParamLimits

0xb345,	// (0x0003b91f) list_set_pane_vc

0xb3b3,	// (0x0003b98d) main_pane_set_vc_t1_ParamLimits

0xb3b3,	// (0x0003b98d) main_pane_set_vc_t1

0xb3c8,	// (0x0003b9a2) main_pane_set_vc_t2_ParamLimits

0xb3c8,	// (0x0003b9a2) main_pane_set_vc_t2

0xb3da,	// (0x0003b9b4) main_pane_set_vc_t3_ParamLimits

0xb3da,	// (0x0003b9b4) main_pane_set_vc_t3

0xb3ee,	// (0x0003b9c8) main_pane_set_vc_t4_ParamLimits

0xb3ee,	// (0x0003b9c8) main_pane_set_vc_t4

0x0003,

0xfa1a,	// (0x0003fff4) main_pane_set_vc_t_ParamLimits

0xfa1a,	// (0x0003fff4) main_pane_set_vc_t

0xb402,	// (0x0003b9dc) setting_code_pane_vc_ParamLimits

0xb402,	// (0x0003b9dc) setting_code_pane_vc

0xb413,	// (0x0003b9ed) setting_slider_graphic_pane_vc

0xb413,	// (0x0003b9ed) setting_slider_pane_vc

0xb413,	// (0x0003b9ed) setting_text_pane_vc

0xb413,	// (0x0003b9ed) setting_volume_pane_vc

0xb41d,	// (0x0003b9f7) scroll_pane_cp121_vc

0x28d4,	// (0x00032eae) set_content_pane_vc

0xb425,	// (0x0003b9ff) button_value_adjust_pane_g1

0xb42e,	// (0x0003ba08) button_value_adjust_pane_g2

0x0001,

0xfa76,	// (0x00040050) button_value_adjust_pane_g

0xb437,	// (0x0003ba11) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb437,	// (0x0003ba11) form_field_slider_wide_pane_vc_t1

0xb449,	// (0x0003ba23) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb449,	// (0x0003ba23) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7b,	// (0x00040055) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x00040055) form_field_slider_wide_pane_vc_t

0x22ae,	// (0x00032888) input_focus_pane_cp10_vc_ParamLimits

0x22ae,	// (0x00032888) input_focus_pane_cp10_vc

0xb475,	// (0x0003ba4f) slider_cont_pane_cp1_vc_ParamLimits

0xb475,	// (0x0003ba4f) slider_cont_pane_cp1_vc

0xb487,	// (0x0003ba61) slider_form_pane_g1_cp2

0xb299,	// (0x0003b873) slider_form_pane_g2_cp2

0xb4b4,	// (0x0003ba8e) form_field_slider_pane_vc_t3

0xb4c2,	// (0x0003ba9c) form_field_slider_pane_vc_t4

0xb4d0,	// (0x0003baaa) slider_form_pane_vc_ParamLimits

0xb4d0,	// (0x0003baaa) slider_form_pane_vc

0xb4dd,	// (0x0003bab7) form_field_slider_pane_vc_t1_ParamLimits

0xb4dd,	// (0x0003bab7) form_field_slider_pane_vc_t1

0xb449,	// (0x0003ba23) form_field_slider_pane_vc_t2_ParamLimits

0xb449,	// (0x0003ba23) form_field_slider_pane_vc_t2

0x0001,

0xfa8d,	// (0x00040067) form_field_slider_pane_vc_t_ParamLimits

0xfa8d,	// (0x00040067) form_field_slider_pane_vc_t

0x22ae,	// (0x00032888) input_focus_pane_cp9_vc_ParamLimits

0x22ae,	// (0x00032888) input_focus_pane_cp9_vc

0xb4f3,	// (0x0003bacd) slider_cont_pane_vc_ParamLimits

0xb4f3,	// (0x0003bacd) slider_cont_pane_vc

0xb507,	// (0x0003bae1) list_form_graphic_pane_cp_vc_ParamLimits

0xb507,	// (0x0003bae1) list_form_graphic_pane_cp_vc

0x979c,	// (0x00039d76) form_field_popup_wide_pane_vc_g1

0xb51c,	// (0x0003baf6) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb51c,	// (0x0003baf6) form_field_popup_wide_pane_vc_t1

0x28fa,	// (0x00032ed4) input_focus_pane_cp8_vc_ParamLimits

0x28fa,	// (0x00032ed4) input_focus_pane_cp8_vc

0xb561,	// (0x0003bb3b) list_form_wide_pane_vc_ParamLimits

0xb561,	// (0x0003bb3b) list_form_wide_pane_vc

0xb56d,	// (0x0003bb47) list_form_graphic_pane_vc_g1

0xb575,	// (0x0003bb4f) list_form_graphic_pane_vc_t1_ParamLimits

0xb575,	// (0x0003bb4f) list_form_graphic_pane_vc_t1

0x22bc,	// (0x00032896) list_highlight_pane_cp5_vc_ParamLimits

0x22bc,	// (0x00032896) list_highlight_pane_cp5_vc

0xb591,	// (0x0003bb6b) list_form_graphic_pane_vc_ParamLimits

0xb591,	// (0x0003bb6b) list_form_graphic_pane_vc

0x979c,	// (0x00039d76) form_field_popup_pane_vc_g1

0xb5a7,	// (0x0003bb81) form_field_popup_pane_vc_t1_ParamLimits

0xb5a7,	// (0x0003bb81) form_field_popup_pane_vc_t1

0x28fa,	// (0x00032ed4) input_focus_pane_cp7_vc_ParamLimits

0x28fa,	// (0x00032ed4) input_focus_pane_cp7_vc

0xb5be,	// (0x0003bb98) list_form_pane_vc_ParamLimits

0xb5be,	// (0x0003bb98) list_form_pane_vc

0xb5ca,	// (0x0003bba4) data_form_pane_vc_t1_ParamLimits

0xb5ca,	// (0x0003bba4) data_form_pane_vc_t1

0x2952,	// (0x00032f2c) input_focus_pane_vc_g1

0x295a,	// (0x00032f34) input_focus_pane_vc_g2

0x2962,	// (0x00032f3c) input_focus_pane_vc_g3

0x296a,	// (0x00032f44) input_focus_pane_vc_g4

0x2972,	// (0x00032f4c) input_focus_pane_vc_g5

0x297a,	// (0x00032f54) input_focus_pane_vc_g6

0x2982,	// (0x00032f5c) input_focus_pane_vc_g7

0x298a,	// (0x00032f64) input_focus_pane_vc_g8

0x2992,	// (0x00032f6c) input_focus_pane_vc_g9

0x2256,	// (0x00032830) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0003fc61) input_focus_pane_vc_g

0x9790,	// (0x00039d6a) data_form_pane_vc_ParamLimits

0x9790,	// (0x00039d6a) data_form_pane_vc

0x979c,	// (0x00039d76) form_field_data_pane_vc_g1

0xb5e7,	// (0x0003bbc1) form_field_data_pane_vc_t1_ParamLimits

0xb5e7,	// (0x0003bbc1) form_field_data_pane_vc_t1

0x28fa,	// (0x00032ed4) input_focus_pane_vc_ParamLimits

0x28fa,	// (0x00032ed4) input_focus_pane_vc

0xb601,	// (0x0003bbdb) button_value_adjust_pane_cp3_vc

0xb609,	// (0x0003bbe3) button_value_adjust_pane_cp5_vc

0xb611,	// (0x0003bbeb) form_field_data_pane_vc_ParamLimits

0xb611,	// (0x0003bbeb) form_field_data_pane_vc

0xb62c,	// (0x0003bc06) form_field_data_pane_vc_cp2

0xb634,	// (0x0003bc0e) form_field_data_wide_pane_vc_ParamLimits

0xb634,	// (0x0003bc0e) form_field_data_wide_pane_vc

0xb64e,	// (0x0003bc28) form_field_data_wide_pane_vc_cp2

0xb656,	// (0x0003bc30) form_field_popup_pane_vc_ParamLimits

0xb656,	// (0x0003bc30) form_field_popup_pane_vc

0xb671,	// (0x0003bc4b) form_field_popup_wide_pane_vc_ParamLimits

0xb671,	// (0x0003bc4b) form_field_popup_wide_pane_vc

0xb68b,	// (0x0003bc65) form_field_slider_pane_vc_ParamLimits

0xb68b,	// (0x0003bc65) form_field_slider_pane_vc

0xb69e,	// (0x0003bc78) form_field_slider_wide_pane_vc_ParamLimits

0xb69e,	// (0x0003bc78) form_field_slider_wide_pane_vc

0xb6b1,	// (0x0003bc8b) grid_touch_1_pane_ParamLimits

0xb6b1,	// (0x0003bc8b) grid_touch_1_pane

0xb6bd,	// (0x0003bc97) grid_touch_2_pane_ParamLimits

0xb6bd,	// (0x0003bc97) grid_touch_2_pane

0x9121,	// (0x000396fb) touch_pane_g1_ParamLimits

0x9121,	// (0x000396fb) touch_pane_g1

0xb6d7,	// (0x0003bcb1) cell_app_pane_cp_wide_ParamLimits

0xb6d7,	// (0x0003bcb1) cell_app_pane_cp_wide

0xb6e8,	// (0x0003bcc2) grid_popup_fast_wide_pane_ParamLimits

0xb6e8,	// (0x0003bcc2) grid_popup_fast_wide_pane

0xb6fc,	// (0x0003bcd6) scroll_pane_cp19_ParamLimits

0xb6fc,	// (0x0003bcd6) scroll_pane_cp19

0x2260,	// (0x0003283a) bg_popup_window_pane_cp20

0xb710,	// (0x0003bcea) listscroll_popup_fast_wide_pane

0x22bc,	// (0x00032896) grid_indicator_nsta_pane

0xb718,	// (0x0003bcf2) clock_nsta_pane_g1

0xb721,	// (0x0003bcfb) clock_nsta_pane_t1

0xb73d,	// (0x0003bd17) cell_indicator_nsta_pane_ParamLimits

0xb73d,	// (0x0003bd17) cell_indicator_nsta_pane

0xb76e,	// (0x0003bd48) cell_indicator_nsta_pane_g1

0xb77c,	// (0x0003bd56) cell_indicator_nsta_pane_g2

0x0001,

0xfa9e,	// (0x00040078) cell_indicator_nsta_pane_g

0xb789,	// (0x0003bd63) clock_nsta_pane_cp

0xb792,	// (0x0003bd6c) indicator_nsta_pane_cp

0xb79a,	// (0x0003bd74) nsta_clock_indic_pane_g1

0x22f8,	// (0x000328d2) grid_indicator_pane

0x2d55,	// (0x0003332f) scroll_pane_cp29

0x6a7a,	// (0x00037054) indicator_nsta_pane_cp2_ParamLimits

0x6a7a,	// (0x00037054) indicator_nsta_pane_cp2

0x22bc,	// (0x00032896) main_apps_wheel_pane

0x997d,	// (0x00039f57) form_midp_field_text_pane_ParamLimits

0x9acc,	// (0x0003a0a6) scroll_bar_cp050_ParamLimits

0xb7ea,	// (0x0003bdc4) cell_indicator_pane_ParamLimits

0xb7ea,	// (0x0003bdc4) cell_indicator_pane

0xb802,	// (0x0003bddc) cell_indicator_pane_g1

0xb80c,	// (0x0003bde6) grid_wheel_folder_pane_ParamLimits

0xb80c,	// (0x0003bde6) grid_wheel_folder_pane

0xb820,	// (0x0003bdfa) list_wheel_apps_pane_ParamLimits

0xb820,	// (0x0003bdfa) list_wheel_apps_pane

0xb833,	// (0x0003be0d) main_apps_wheel_pane_g1_ParamLimits

0xb833,	// (0x0003be0d) main_apps_wheel_pane_g1

0xb84f,	// (0x0003be29) main_apps_wheel_pane_g2_ParamLimits

0xb84f,	// (0x0003be29) main_apps_wheel_pane_g2

0x0001,

0xfaba,	// (0x00040094) main_apps_wheel_pane_g_ParamLimits

0xfaba,	// (0x00040094) main_apps_wheel_pane_g

0xb86b,	// (0x0003be45) main_apps_wheel_pane_t1_ParamLimits

0xb86b,	// (0x0003be45) main_apps_wheel_pane_t1

0xb894,	// (0x0003be6e) list_wheel_apps_pane_g1

0xb89c,	// (0x0003be76) list_wheel_apps_pane_g2

0xb8a4,	// (0x0003be7e) list_wheel_apps_pane_g3

0xb8ac,	// (0x0003be86) list_wheel_apps_pane_g4

0xb8b6,	// (0x0003be90) list_wheel_apps_pane_g5

0x0004,

0xfabf,	// (0x00040099) list_wheel_apps_pane_g

0x6d83,	// (0x0003735d) navi_icon_text_pane

0x91c2,	// (0x0003979c) aid_fill_nsta

0xb8d7,	// (0x0003beb1) navi_icon_text_pane_g1

0xb8e3,	// (0x0003bebd) navi_icon_text_pane_t1

0x6c0e,	// (0x000371e8) list_set_graphic_pane_t1_ParamLimits

0x6c0e,	// (0x000371e8) list_set_graphic_pane_t1

0xa231,	// (0x0003a80b) popup_midp_note_alarm_window_t6_ParamLimits

0xa231,	// (0x0003a80b) popup_midp_note_alarm_window_t6

0xa243,	// (0x0003a81d) popup_midp_note_alarm_window_t7_ParamLimits

0xa243,	// (0x0003a81d) popup_midp_note_alarm_window_t7

0xa255,	// (0x0003a82f) popup_midp_note_alarm_window_t8_ParamLimits

0xa255,	// (0x0003a82f) popup_midp_note_alarm_window_t8

0xa267,	// (0x0003a841) popup_midp_note_alarm_window_t9_ParamLimits

0xa267,	// (0x0003a841) popup_midp_note_alarm_window_t9

0xa279,	// (0x0003a853) popup_midp_note_alarm_window_t10_ParamLimits

0xa279,	// (0x0003a853) popup_midp_note_alarm_window_t10

0xa28b,	// (0x0003a865) popup_midp_note_alarm_window_t11_ParamLimits

0xa28b,	// (0x0003a865) popup_midp_note_alarm_window_t11

0xa29d,	// (0x0003a877) scroll_pane_cp17_ParamLimits

0xa29d,	// (0x0003a877) scroll_pane_cp17

0x7afd,	// (0x000380d7) volume_small_pane_cp_g1

0x7eaa,	// (0x00038484) volume_small_pane_cp_g2

0x7eb3,	// (0x0003848d) volume_small_pane_cp_g3

0x7ebc,	// (0x00038496) volume_small_pane_cp_g4

0x7ec5,	// (0x0003849f) volume_small_pane_cp_g5

0x7ece,	// (0x000384a8) volume_small_pane_cp_g6

0x7ed7,	// (0x000384b1) volume_small_pane_cp_g7

0x7ee0,	// (0x000384ba) volume_small_pane_cp_g8

0x7ee9,	// (0x000384c3) volume_small_pane_cp_g9

0x7ef2,	// (0x000384cc) volume_small_pane_cp_g10

0x6fd9,	// (0x000375b3) midp_ticker_pane_g1_ParamLimits

0x6fe5,	// (0x000375bf) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0003fd2d) midp_ticker_pane_g_ParamLimits

0x6ff1,	// (0x000375cb) midp_ticker_pane_t1_ParamLimits

0x91d8,	// (0x000397b2) aid_fill_nsta_2

0x9ab8,	// (0x0003a092) list_form2_midp_pane

0xac21,	// (0x0003b1fb) midp_editing_number_pane_ParamLimits

0xac30,	// (0x0003b20a) midp_ticker_pane_ParamLimits

0xb8f5,	// (0x0003becf) form2_midp_field_pane

0xb919,	// (0x0003bef3) scroll_pane_cp51

0xb939,	// (0x0003bf13) form2_midp_button_pane_ParamLimits

0xb939,	// (0x0003bf13) form2_midp_button_pane

0xb94b,	// (0x0003bf25) form2_midp_content_pane_ParamLimits

0xb94b,	// (0x0003bf25) form2_midp_content_pane

0xb965,	// (0x0003bf3f) form2_midp_field_choice_group_pane

0xb96d,	// (0x0003bf47) form2_midp_field_pane_g1

0xb975,	// (0x0003bf4f) form2_midp_field_pane_g2

0xb97d,	// (0x0003bf57) form2_midp_field_pane_g3

0xb985,	// (0x0003bf5f) form2_midp_field_pane_g4

0x0003,

0xfae4,	// (0x000400be) form2_midp_field_pane_g

0xb98d,	// (0x0003bf67) form2_midp_gauge_slider_pane

0xb995,	// (0x0003bf6f) form2_midp_gauge_wait_pane

0xb99d,	// (0x0003bf77) form2_midp_image_pane_ParamLimits

0xb99d,	// (0x0003bf77) form2_midp_image_pane

0xb9b8,	// (0x0003bf92) form2_midp_label_pane_ParamLimits

0xb9b8,	// (0x0003bf92) form2_midp_label_pane

0xb9d7,	// (0x0003bfb1) form2_midp_label_pane_cp_ParamLimits

0xb9d7,	// (0x0003bfb1) form2_midp_label_pane_cp

0xb9f8,	// (0x0003bfd2) form2_midp_string_pane_ParamLimits

0xb9f8,	// (0x0003bfd2) form2_midp_string_pane

0x46a1,	// (0x00034c7b) form2_midp_text_pane_ParamLimits

0x46a1,	// (0x00034c7b) form2_midp_text_pane

0xba0a,	// (0x0003bfe4) form2_midp_time_pane

0xba1a,	// (0x0003bff4) input_focus_pane_cp51_ParamLimits

0xba1a,	// (0x0003bff4) input_focus_pane_cp51

0xba32,	// (0x0003c00c) form2_midp_label_pane_t1_ParamLimits

0xba32,	// (0x0003c00c) form2_midp_label_pane_t1

0x46c2,	// (0x00034c9c) form2_mdip_text_pane_t1_ParamLimits

0x46c2,	// (0x00034c9c) form2_mdip_text_pane_t1

0x46e6,	// (0x00034cc0) form2_midp_time_pane_t1

0xba80,	// (0x0003c05a) form2_midp_gauge_slider_pane_t1

0xba92,	// (0x0003c06c) form2_midp_gauge_slider_pane_t2

0xbaa4,	// (0x0003c07e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaed,	// (0x000400c7) form2_midp_gauge_slider_pane_t

0xbab6,	// (0x0003c090) form2_midp_slider_pane

0xbac2,	// (0x0003c09c) form2_midp_gauge_wait_pane_t1

0xbad0,	// (0x0003c0aa) form2_midp_wait_pane_ParamLimits

0xbad0,	// (0x0003c0aa) form2_midp_wait_pane

0xbafb,	// (0x0003c0d5) list_single_2graphic_pane_cp4_ParamLimits

0xbafb,	// (0x0003c0d5) list_single_2graphic_pane_cp4

0x97f9,	// (0x00039dd3) list_single_midp_graphic_pane_cp_ParamLimits

0x97f9,	// (0x00039dd3) list_single_midp_graphic_pane_cp

0x2260,	// (0x0003283a) list_highlight_pane_cp20

0xbb14,	// (0x0003c0ee) list_single_2graphic_pane_g1_cp4

0xb0ec,	// (0x0003b6c6) list_single_2graphic_pane_g2_cp4

0xbb1c,	// (0x0003c0f6) list_single_2graphic_pane_t1_cp4

0x22bc,	// (0x00032896) list_highlight_pane_cp21

0xbb2b,	// (0x0003c105) list_single_midp_graphic_pane_g4_cp

0xbb3a,	// (0x0003c114) list_single_midp_graphic_pane_t1_cp

0xbb4f,	// (0x0003c129) form2_mdip_string_pane_t1_ParamLimits

0xbb4f,	// (0x0003c129) form2_mdip_string_pane_t1

0x2260,	// (0x0003283a) bg_wml_button_pane_cp2

0x2256,	// (0x00032830) form2_midp_image_pane_g1

0x413a,	// (0x00034714) list_double_large_graphic_pane_g5_ParamLimits

0x413a,	// (0x00034714) list_double_large_graphic_pane_g5

0x6f03,	// (0x000374dd) midp_form_pane_ParamLimits

0x22bc,	// (0x00032896) main_apps_wheel_pane_ParamLimits

0x7746,	// (0x00037d20) popup_preview_window_ParamLimits

0x7746,	// (0x00037d20) popup_preview_window

0x792d,	// (0x00037f07) popup_touch_info_window_ParamLimits

0x792d,	// (0x00037f07) popup_touch_info_window

0x794f,	// (0x00037f29) popup_touch_menu_window_ParamLimits

0x794f,	// (0x00037f29) popup_touch_menu_window

0x224c,	// (0x00032826) bg_popup_sub_pane_cp6

0xbbeb,	// (0x0003c1c5) list_touch_menu_pane

0xbbf3,	// (0x0003c1cd) list_single_touch_menu_pane_ParamLimits

0xbbf3,	// (0x0003c1cd) list_single_touch_menu_pane

0xbc0b,	// (0x0003c1e5) list_single_touch_menu_pane_t1

0x22bc,	// (0x00032896) bg_popup_sub_pane_cp7_ParamLimits

0x22bc,	// (0x00032896) bg_popup_sub_pane_cp7

0xbc19,	// (0x0003c1f3) heading_sub_pane

0xbc21,	// (0x0003c1fb) list_touch_info_pane_ParamLimits

0xbc21,	// (0x0003c1fb) list_touch_info_pane

0xbc30,	// (0x0003c20a) list_single_touch_info_pane_ParamLimits

0xbc30,	// (0x0003c20a) list_single_touch_info_pane

0xbc42,	// (0x0003c21c) list_single_touch_info_pane_t1

0xbc50,	// (0x0003c22a) list_single_touch_info_pane_t2

0x0001,

0xfafb,	// (0x000400d5) list_single_touch_info_pane_t

0x6efb,	// (0x000374d5) bg_popup_heading_pane_cp

0xbc5e,	// (0x0003c238) heading_sub_pane_t1

0x972a,	// (0x00039d04) bg_popup_preview_window_pane_cp_ParamLimits

0x972a,	// (0x00039d04) bg_popup_preview_window_pane_cp

0xbc19,	// (0x0003c1f3) heading_preview_pane

0xbc21,	// (0x0003c1fb) list_preview_pane_ParamLimits

0xbc21,	// (0x0003c1fb) list_preview_pane

0xbc6c,	// (0x0003c246) popup_preview_window_g1

0xbc30,	// (0x0003c20a) list_single_preview_pane_ParamLimits

0xbc30,	// (0x0003c20a) list_single_preview_pane

0xbc74,	// (0x0003c24e) list_single_preview_pane_g1

0xbc7c,	// (0x0003c256) list_single_preview_pane_t1

0xbc42,	// (0x0003c21c) list_single_preview_pane_t2

0x0001,

0xfb00,	// (0x000400da) list_single_preview_pane_t

0xbc8a,	// (0x0003c264) bg_popup_heading_pane_cp2_ParamLimits

0xbc8a,	// (0x0003c264) bg_popup_heading_pane_cp2

0xbca0,	// (0x0003c27a) heading_preview_pane_g1

0xbca8,	// (0x0003c282) heading_preview_pane_t1_ParamLimits

0xbca8,	// (0x0003c282) heading_preview_pane_t1

0x230f,	// (0x000328e9) soft_indicator_pane_t1_ParamLimits

0x286d,	// (0x00032e47) scroll_pane_ParamLimits

0x2c5a,	// (0x00033234) scroll_sc2_left_pane

0x2c51,	// (0x0003322b) scroll_sc2_right_pane

0x2c79,	// (0x00033253) scroll_bg_pane_g1_ParamLimits

0x2c8e,	// (0x00033268) scroll_bg_pane_g2_ParamLimits

0x2ca6,	// (0x00033280) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0003fcb8) scroll_bg_pane_g_ParamLimits

0x2c79,	// (0x00033253) scroll_handle_pane_g1_ParamLimits

0x2cc8,	// (0x000332a2) scroll_handle_pane_g2_ParamLimits

0x2ca6,	// (0x00033280) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0003fcbf) scroll_handle_pane_g_ParamLimits

0x738d,	// (0x00037967) popup_choice_list_window_ParamLimits

0x738d,	// (0x00037967) popup_choice_list_window

0x9600,	// (0x00039bda) choice_list_pane

0x9682,	// (0x00039c5c) cell_toolbar_pane_t1

0x96aa,	// (0x00039c84) toolbar_button_pane_ParamLimits

0xa767,	// (0x0003ad41) ai_gene_pane_1_t2_ParamLimits

0xa767,	// (0x0003ad41) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0003fee7) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0003fee7) ai_gene_pane_1_t

0xbcc5,	// (0x0003c29f) scroll_sc2_left_pane_g1

0xbcc5,	// (0x0003c29f) scroll_sc2_right_pane_g1

0x9186,	// (0x00039760) bg_popup_sub_pane_cp10

0xbccf,	// (0x0003c2a9) list_choice_list_pane

0xaccc,	// (0x0003b2a6) list_single_choice_list_pane_ParamLimits

0xaccc,	// (0x0003b2a6) list_single_choice_list_pane

0xbce8,	// (0x0003c2c2) list_single_choice_list_pane_g1

0x2a48,	// (0x00033022) list_single_choice_list_pane_t1_ParamLimits

0x2a48,	// (0x00033022) list_single_choice_list_pane_t1

0xbcf0,	// (0x0003c2ca) choice_list_pane_g1

0xbcf8,	// (0x0003c2d2) choice_list_pane_t1

0x224c,	// (0x00032826) input_focus_pane_cp11

0x2bc6,	// (0x000331a0) title_pane_stacon_g2_ParamLimits

0x2bc6,	// (0x000331a0) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0003fc9e) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0003fc9e) title_pane_stacon_g

0x6efb,	// (0x000374d5) cursor_press_pane

0x7447,	// (0x00037a21) popup_fep_hwr_window_ParamLimits

0x7447,	// (0x00037a21) popup_fep_hwr_window

0x74d1,	// (0x00037aab) popup_fep_vkb_window_ParamLimits

0x74d1,	// (0x00037aab) popup_fep_vkb_window

0xbd06,	// (0x0003c2e0) cursor_press_pane_g1

0x0002,

0xfb29,	// (0x00040103) fep_vkb_side_pane_g_ParamLimits

0x7f34,	// (0x0003850e) fep_hwr_candidate_pane_ParamLimits

0x7f34,	// (0x0003850e) fep_hwr_candidate_pane

0x7f5e,	// (0x00038538) fep_hwr_side_pane_ParamLimits

0x7f5e,	// (0x00038538) fep_hwr_side_pane

0x7f80,	// (0x0003855a) fep_hwr_top_pane_ParamLimits

0x7f80,	// (0x0003855a) fep_hwr_top_pane

0x7f98,	// (0x00038572) fep_hwr_write_pane_ParamLimits

0x7f98,	// (0x00038572) fep_hwr_write_pane

0xfb29,	// (0x00040103) fep_vkb_side_pane_g

0xbd0e,	// (0x0003c2e8) fep_hwr_top_pane_g1

0xbd20,	// (0x0003c2fa) fep_hwr_top_pane_g2

0x7fd2,	// (0x000385ac) fep_hwr_top_pane_g3

0x0002,

0xfb05,	// (0x000400df) fep_hwr_top_pane_g

0x7fe7,	// (0x000385c1) fep_hwr_top_text_pane

0x2dc2,	// (0x0003339c) fep_hwr_top_text_pane_g1

0xbd56,	// (0x0003c330) fep_hwr_top_text_pane_t1

0x80f1,	// (0x000386cb) fep_hwr_candidate_pane_g1

0xbfa1,	// (0x0003c57b) fep_vkb_keypad_pane_g3_ParamLimits

0xbfa1,	// (0x0003c57b) fep_vkb_keypad_pane_g3

0xbfcd,	// (0x0003c5a7) fep_vkb_keypad_pane_g4_ParamLimits

0xbfcd,	// (0x0003c5a7) fep_vkb_keypad_pane_g4

0xc044,	// (0x0003c61e) fep_vkb_bottom_pane_g2_ParamLimits

0xc044,	// (0x0003c61e) fep_vkb_bottom_pane_g2

0x0001,

0xfb30,	// (0x0004010a) fep_vkb_bottom_pane_g_ParamLimits

0xfb30,	// (0x0004010a) fep_vkb_bottom_pane_g

0xbcc5,	// (0x0003c29f) cell_vkb_side_pane_g2

0x0001,

0xfb3a,	// (0x00040114) cell_vkb_side_pane_g

0xc0cf,	// (0x0003c6a9) cell_vkb_side_pane_t1

0xc0dd,	// (0x0003c6b7) cell_vkb_side_pane_t1_copy1

0xbcc5,	// (0x0003c29f) bg_fep_vkb_candidate_pane_g2

0xc221,	// (0x0003c7fb) cell_vkb_candidate_pane_ParamLimits

0xbd64,	// (0x0003c33e) aid_size_cell_vkb_ParamLimits

0xbd64,	// (0x0003c33e) aid_size_cell_vkb

0xc221,	// (0x0003c7fb) cell_vkb_candidate_pane

0x8118,	// (0x000386f2) bg_popup_fep_shadow_pane_g1

0xbdf6,	// (0x0003c3d0) fep_vkb_bottom_pane_ParamLimits

0xbdf6,	// (0x0003c3d0) fep_vkb_bottom_pane

0xbe33,	// (0x0003c40d) fep_vkb_candidate_pane_ParamLimits

0xbe33,	// (0x0003c40d) fep_vkb_candidate_pane

0xbe4f,	// (0x0003c429) fep_vkb_keypad_pane_ParamLimits

0xbe4f,	// (0x0003c429) fep_vkb_keypad_pane

0xbe82,	// (0x0003c45c) fep_vkb_side_pane_ParamLimits

0xbe82,	// (0x0003c45c) fep_vkb_side_pane

0xbebe,	// (0x0003c498) fep_vkb_top_pane_ParamLimits

0xbebe,	// (0x0003c498) fep_vkb_top_pane

0xbefa,	// (0x0003c4d4) fep_vkb_top_pane_g1_ParamLimits

0xbefa,	// (0x0003c4d4) fep_vkb_top_pane_g1

0xbf09,	// (0x0003c4e3) fep_vkb_top_pane_g2_ParamLimits

0xbf09,	// (0x0003c4e3) fep_vkb_top_pane_g2

0xbf18,	// (0x0003c4f2) fep_vkb_top_pane_g3_ParamLimits

0xbf18,	// (0x0003c4f2) fep_vkb_top_pane_g3

0x0003,

0xfb20,	// (0x000400fa) fep_vkb_top_pane_g_ParamLimits

0xfb20,	// (0x000400fa) fep_vkb_top_pane_g

0xbf36,	// (0x0003c510) fep_vkb_top_text_pane_ParamLimits

0xbf36,	// (0x0003c510) fep_vkb_top_text_pane

0xbf47,	// (0x0003c521) fep_vkb_side_pane_g1_ParamLimits

0xbf47,	// (0x0003c521) fep_vkb_side_pane_g1

0xbf90,	// (0x0003c56a) grid_vkb_side_pane_ParamLimits

0xbf90,	// (0x0003c56a) grid_vkb_side_pane

0x8120,	// (0x000386fa) bg_popup_fep_shadow_pane_g2

0x8129,	// (0x00038703) bg_popup_fep_shadow_pane_g3

0x8131,	// (0x0003870b) bg_popup_fep_shadow_pane_g4

0x813a,	// (0x00038714) bg_popup_fep_shadow_pane_g5

0x8144,	// (0x0003871e) bg_popup_fep_shadow_pane_g6

0x814c,	// (0x00038726) bg_popup_fep_shadow_pane_g7

0x296a,	// (0x00032f44) bg_popup_fep_shadow_pane_g8

0xbfef,	// (0x0003c5c9) grid_vkb_keypad_number_pane_ParamLimits

0xbfef,	// (0x0003c5c9) grid_vkb_keypad_number_pane

0xc003,	// (0x0003c5dd) grid_vkb_keypad_pane_ParamLimits

0xc003,	// (0x0003c5dd) grid_vkb_keypad_pane

0xc029,	// (0x0003c603) fep_vkb_bottom_pane_g1_ParamLimits

0xc029,	// (0x0003c603) fep_vkb_bottom_pane_g1

0xc052,	// (0x0003c62c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc052,	// (0x0003c62c) grid_vkb_keypad_bottom_left_pane

0xc067,	// (0x0003c641) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc067,	// (0x0003c641) grid_vkb_keypad_bottom_right_pane

0xc07c,	// (0x0003c656) fep_vkb_top_text_pane_g1

0xc097,	// (0x0003c671) fep_vkb_top_text_pane_t1

0xc0ac,	// (0x0003c686) cell_vkb_side_pane_ParamLimits

0xc0ac,	// (0x0003c686) cell_vkb_side_pane

0xbcc5,	// (0x0003c29f) cell_vkb_side_pane_g1

0xc0eb,	// (0x0003c6c5) cell_vkb_keypad_pane_ParamLimits

0xc0eb,	// (0x0003c6c5) cell_vkb_keypad_pane

0xc178,	// (0x0003c752) cell_vkb_keypad_pane_g1

0x0008,

0xfb4d,	// (0x00040127) bg_popup_fep_shadow_pane_g

0x815e,	// (0x00038738) cell_hwr_side_pane_g1

0x815e,	// (0x00038738) cell_hwr_side_pane_g2

0xc182,	// (0x0003c75c) cell_vkb_keypad_pane_t1

0xc190,	// (0x0003c76a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc190,	// (0x0003c76a) cell_vkb_keypad_bottom_left_pane

0xc1ad,	// (0x0003c787) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc1ad,	// (0x0003c787) cell_vkb_keypad_bottom_right_pane

0xbcc5,	// (0x0003c29f) cell_vkb_keypad_bottom_left_pane_g1

0xbcc5,	// (0x0003c29f) cell_vkb_keypad_bottom_right_pane_g1

0xc1e6,	// (0x0003c7c0) cell_vkb_keypad_number_pane_ParamLimits

0xc1e6,	// (0x0003c7c0) cell_vkb_keypad_number_pane

0xc205,	// (0x0003c7df) cell_vkb_keypad_number_pane_g1

0xc20f,	// (0x0003c7e9) cell_vkb_keypad_number_pane_g2

0xc218,	// (0x0003c7f2) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3f,	// (0x00040119) cell_vkb_keypad_number_pane_g

0xc182,	// (0x0003c75c) cell_vkb_keypad_number_pane_t1

0xc242,	// (0x0003c81c) fep_vkb_candidate_pane_g1

0x0001,

0xfb60,	// (0x0004013a) cell_hwr_side_pane_g

0xc25b,	// (0x0003c835) cell_hwr_side_pane_t1

0x8168,	// (0x00038742) cell_hwr_side_pane_t1_copy1

0x8176,	// (0x00038750) cell_hwr_candidate_pane_g1

0x81a5,	// (0x0003877f) cell_hwr_candidate_pane_t1

0xbcc5,	// (0x0003c29f) cell_vkb_candidate_pane_g2

0xc29f,	// (0x0003c879) cell_vkb_candidate_pane_t1

0x7efb,	// (0x000384d5) bg_popup_fep_shadow_pane_ParamLimits

0x7efb,	// (0x000384d5) bg_popup_fep_shadow_pane

0x7fb2,	// (0x0003858c) bg_fep_hwr_top_pane_g4

0xbd32,	// (0x0003c30c) bg_hwr_side_pane_g1_ParamLimits

0xbd32,	// (0x0003c30c) bg_hwr_side_pane_g1

0x8025,	// (0x000385ff) cell_hwr_side_pane_ParamLimits

0x8025,	// (0x000385ff) cell_hwr_side_pane

0x8062,	// (0x0003863c) fep_hwr_write_pane_g1_ParamLimits

0x8062,	// (0x0003863c) fep_hwr_write_pane_g1

0x806f,	// (0x00038649) fep_hwr_write_pane_g2_ParamLimits

0x806f,	// (0x00038649) fep_hwr_write_pane_g2

0x807c,	// (0x00038656) fep_hwr_write_pane_g3_ParamLimits

0x807c,	// (0x00038656) fep_hwr_write_pane_g3

0x808a,	// (0x00038664) fep_hwr_write_pane_g4_ParamLimits

0x808a,	// (0x00038664) fep_hwr_write_pane_g4

0x0005,

0xfb0c,	// (0x000400e6) fep_hwr_write_pane_g_ParamLimits

0xfb0c,	// (0x000400e6) fep_hwr_write_pane_g

0x7fb2,	// (0x0003858c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7fb2,	// (0x0003858c) bg_fep_hwr_candidate_pane_g2

0x809f,	// (0x00038679) cell_hwr_candidate_pane_ParamLimits

0x809f,	// (0x00038679) cell_hwr_candidate_pane

0x80f1,	// (0x000386cb) fep_hwr_candidate_pane_g1_ParamLimits

0xbd92,	// (0x0003c36c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbd92,	// (0x0003c36c) bg_popup_fep_shadow_pane_cp2

0xbf28,	// (0x0003c502) fep_vkb_top_pane_g4_ParamLimits

0xbf28,	// (0x0003c502) fep_vkb_top_pane_g4

0xbf6e,	// (0x0003c548) fep_vkb_side_pane_g2_ParamLimits

0xbf6e,	// (0x0003c548) fep_vkb_side_pane_g2

0x627b,	// (0x00036855) list_setting_pane_t4_ParamLimits

0x627b,	// (0x00036855) list_setting_pane_t4

0x6317,	// (0x000368f1) list_setting_number_pane_t5_ParamLimits

0x6317,	// (0x000368f1) list_setting_number_pane_t5

0x682f,	// (0x00036e09) list_double_heading_pane_cp2_ParamLimits

0x682f,	// (0x00036e09) list_double_heading_pane_cp2

0xc2ad,	// (0x0003c887) list_double_heading_pane_g1_cp2_ParamLimits

0xc2ad,	// (0x0003c887) list_double_heading_pane_g1_cp2

0xc2b9,	// (0x0003c893) list_double_heading_pane_g2_cp2_ParamLimits

0xc2b9,	// (0x0003c893) list_double_heading_pane_g2_cp2

0xc2cd,	// (0x0003c8a7) list_double_heading_pane_t1_cp2_ParamLimits

0xc2cd,	// (0x0003c8a7) list_double_heading_pane_t1_cp2

0xc2e3,	// (0x0003c8bd) list_double_heading_pane_t2_cp2_ParamLimits

0xc2e3,	// (0x0003c8bd) list_double_heading_pane_t2_cp2

0xf546,	// (0x0003fb20) aid_value_unit2

0x5a69,	// (0x00036043) popup_preview_fixed_window

0x23ef,	// (0x000329c9) bg_popup_preview_window_pane_cp02

0xc2f5,	// (0x0003c8cf) list_preview_fixed_pane

0xc33b,	// (0x0003c915) list_empty_pane_fp_ParamLimits

0xc33b,	// (0x0003c915) list_empty_pane_fp

0xc33b,	// (0x0003c915) list_single_cale_day_pane_fp_ParamLimits

0xc33b,	// (0x0003c915) list_single_cale_day_pane_fp

0xc33b,	// (0x0003c915) list_single_graphic_heading_pane_fp_ParamLimits

0xc33b,	// (0x0003c915) list_single_graphic_heading_pane_fp

0xc33b,	// (0x0003c915) list_single_graphic_pane_fp_ParamLimits

0xc33b,	// (0x0003c915) list_single_graphic_pane_fp

0xc33b,	// (0x0003c915) list_single_heading_pane_fp_ParamLimits

0xc33b,	// (0x0003c915) list_single_heading_pane_fp

0xc33b,	// (0x0003c915) list_single_pane_fp_ParamLimits

0xc33b,	// (0x0003c915) list_single_pane_fp

0xc354,	// (0x0003c92e) list_single_pane_fp_g1_ParamLimits

0xc354,	// (0x0003c92e) list_single_pane_fp_g1

0x46f9,	// (0x00034cd3) list_single_pane_fp_g2_ParamLimits

0x46f9,	// (0x00034cd3) list_single_pane_fp_g2

0x4705,	// (0x00034cdf) list_single_pane_fp_g3_ParamLimits

0x4705,	// (0x00034cdf) list_single_pane_fp_g3

0xc360,	// (0x0003c93a) list_single_pane_fp_g4_ParamLimits

0xc360,	// (0x0003c93a) list_single_pane_fp_g4

0x0003,

0xfb73,	// (0x0004014d) list_single_pane_fp_g_ParamLimits

0xfb73,	// (0x0004014d) list_single_pane_fp_g

0x4719,	// (0x00034cf3) list_single_pane_fp_t1_ParamLimits

0x4719,	// (0x00034cf3) list_single_pane_fp_t1

0x4730,	// (0x00034d0a) list_single_graphic_pane_fp_g1_ParamLimits

0x4730,	// (0x00034d0a) list_single_graphic_pane_fp_g1

0xc354,	// (0x0003c92e) list_single_graphic_pane_fp_g2_ParamLimits

0xc354,	// (0x0003c92e) list_single_graphic_pane_fp_g2

0x46f9,	// (0x00034cd3) list_single_graphic_pane_fp_g3_ParamLimits

0x46f9,	// (0x00034cd3) list_single_graphic_pane_fp_g3

0x4705,	// (0x00034cdf) list_single_graphic_pane_fp_g4_ParamLimits

0x4705,	// (0x00034cdf) list_single_graphic_pane_fp_g4

0xc360,	// (0x0003c93a) list_single_graphic_pane_fp_g5_ParamLimits

0xc360,	// (0x0003c93a) list_single_graphic_pane_fp_g5

0x0004,

0xfb7c,	// (0x00040156) list_single_graphic_pane_fp_g_ParamLimits

0xfb7c,	// (0x00040156) list_single_graphic_pane_fp_g

0x473c,	// (0x00034d16) list_single_graphic_pane_fp_t1_ParamLimits

0x473c,	// (0x00034d16) list_single_graphic_pane_fp_t1

0x4730,	// (0x00034d0a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4730,	// (0x00034d0a) list_single_graphic_heading_pane_fp_g1

0xc354,	// (0x0003c92e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc354,	// (0x0003c92e) list_single_graphic_heading_pane_fp_g2

0x46f9,	// (0x00034cd3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x46f9,	// (0x00034cd3) list_single_graphic_heading_pane_fp_g3

0x4705,	// (0x00034cdf) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4705,	// (0x00034cdf) list_single_graphic_heading_pane_fp_g4

0xc360,	// (0x0003c93a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc360,	// (0x0003c93a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7c,	// (0x00040156) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7c,	// (0x00040156) list_single_graphic_heading_pane_fp_g

0x4752,	// (0x00034d2c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4752,	// (0x00034d2c) list_single_graphic_heading_pane_fp_t1

0x4768,	// (0x00034d42) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4768,	// (0x00034d42) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb87,	// (0x00040161) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb87,	// (0x00040161) list_single_graphic_heading_pane_fp_t

0x477a,	// (0x00034d54) list_single_cale_day_pane_fp_g1_ParamLimits

0x477a,	// (0x00034d54) list_single_cale_day_pane_fp_g1

0xc36c,	// (0x0003c946) list_single_cale_day_pane_fp_g2_ParamLimits

0xc36c,	// (0x0003c946) list_single_cale_day_pane_fp_g2

0x47b2,	// (0x00034d8c) list_single_cale_day_pane_fp_g3_ParamLimits

0x47b2,	// (0x00034d8c) list_single_cale_day_pane_fp_g3

0x49a9,	// (0x00034f83) list_single_cale_day_pane_fp_g4_ParamLimits

0x49a9,	// (0x00034f83) list_single_cale_day_pane_fp_g4

0x49cd,	// (0x00034fa7) list_single_cale_day_pane_fp_g5_ParamLimits

0x49cd,	// (0x00034fa7) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8c,	// (0x00040166) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8c,	// (0x00040166) list_single_cale_day_pane_fp_g

0x49f1,	// (0x00034fcb) list_single_cale_day_pane_fp_t1_ParamLimits

0x49f1,	// (0x00034fcb) list_single_cale_day_pane_fp_t1

0x4a17,	// (0x00034ff1) list_single_cale_day_pane_fp_t2_ParamLimits

0x4a17,	// (0x00034ff1) list_single_cale_day_pane_fp_t2

0x4a30,	// (0x0003500a) list_single_cale_day_pane_fp_t3_ParamLimits

0x4a30,	// (0x0003500a) list_single_cale_day_pane_fp_t3

0x0002,

0xfb97,	// (0x00040171) list_single_cale_day_pane_fp_t_ParamLimits

0xfb97,	// (0x00040171) list_single_cale_day_pane_fp_t

0xc354,	// (0x0003c92e) list_empty_pane_fp_g1_ParamLimits

0xc354,	// (0x0003c92e) list_empty_pane_fp_g1

0x4a49,	// (0x00035023) list_empty_pane_fp_t1

0x4a57,	// (0x00035031) list_empty_pane_fp_t2

0x0001,

0xfb9e,	// (0x00040178) list_empty_pane_fp_t

0xc354,	// (0x0003c92e) list_single_heading_pane_fp_g1_ParamLimits

0xc354,	// (0x0003c92e) list_single_heading_pane_fp_g1

0x46f9,	// (0x00034cd3) list_single_heading_pane_fp_g2_ParamLimits

0x46f9,	// (0x00034cd3) list_single_heading_pane_fp_g2

0x4705,	// (0x00034cdf) list_single_heading_pane_fp_g3_ParamLimits

0x4705,	// (0x00034cdf) list_single_heading_pane_fp_g3

0x0002,

0xfba3,	// (0x0004017d) list_single_heading_pane_fp_g_ParamLimits

0xfba3,	// (0x0004017d) list_single_heading_pane_fp_g

0x4a65,	// (0x0003503f) list_single_heading_pane_fp_t1_ParamLimits

0x4a65,	// (0x0003503f) list_single_heading_pane_fp_t1

0x4a77,	// (0x00035051) list_single_heading_pane_fp_t2_ParamLimits

0x4a77,	// (0x00035051) list_single_heading_pane_fp_t2

0x0001,

0xfbaa,	// (0x00040184) list_single_heading_pane_fp_t_ParamLimits

0xfbaa,	// (0x00040184) list_single_heading_pane_fp_t

0x2a5d,	// (0x00033037) aid_size_cell_fast

0x23d2,	// (0x000329ac) soft_indicator_pane_cp1_t1

0x2a9a,	// (0x00033074) cell_app_pane_cp2_ParamLimits

0x2a9a,	// (0x00033074) cell_app_pane_cp2

0x7f1d,	// (0x000384f7) fep_hwr_candidate_drop_down_list_pane

0x810b,	// (0x000386e5) fep_hwr_candidate_pane_g3_ParamLimits

0x810b,	// (0x000386e5) fep_hwr_candidate_pane_g3

0x36f7,	// (0x00033cd1) fep_hwr_candidate_pane_g4_ParamLimits

0x36f7,	// (0x00033cd1) fep_hwr_candidate_pane_g4

0x0002,

0xfb19,	// (0x000400f3) fep_hwr_candidate_pane_g_ParamLimits

0xfb19,	// (0x000400f3) fep_hwr_candidate_pane_g

0xbe22,	// (0x0003c3fc) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbe22,	// (0x0003c3fc) fep_vkb_candidate_drop_down_list_pane

0xc24a,	// (0x0003c824) fep_vkb_candidate_pane_g3

0xc252,	// (0x0003c82c) fep_vkb_candidate_pane_g4

0x0002,

0xfb46,	// (0x00040120) fep_vkb_candidate_pane_g

0x8176,	// (0x00038750) cell_hwr_candidate_pane_g1_ParamLimits

0x8184,	// (0x0003875e) cell_hwr_candidate_pane_g3_ParamLimits

0x8184,	// (0x0003875e) cell_hwr_candidate_pane_g3

0xcbdd,	// (0x0003d1b7) cell_hwr_candidate_pane_g4_ParamLimits

0xcbdd,	// (0x0003d1b7) cell_hwr_candidate_pane_g4

0x0002,

0xfb65,	// (0x0004013f) cell_hwr_candidate_pane_g_ParamLimits

0xfb65,	// (0x0004013f) cell_hwr_candidate_pane_g

0xc269,	// (0x0003c843) cell_vkb_candidate_pane_g3_ParamLimits

0xc269,	// (0x0003c843) cell_vkb_candidate_pane_g3

0xc284,	// (0x0003c85e) cell_vkb_candidate_pane_g4_ParamLimits

0xc284,	// (0x0003c85e) cell_vkb_candidate_pane_g4

0xc378,	// (0x0003c952) cell_app_pane_cp2_g1_ParamLimits

0xc378,	// (0x0003c952) cell_app_pane_cp2_g1

0xc396,	// (0x0003c970) cell_app_pane_cp2_g2_ParamLimits

0xc396,	// (0x0003c970) cell_app_pane_cp2_g2

0x0001,

0xfbaf,	// (0x00040189) cell_app_pane_cp2_g_ParamLimits

0xfbaf,	// (0x00040189) cell_app_pane_cp2_g

0xc3a2,	// (0x0003c97c) cell_app_pane_cp2_t1_ParamLimits

0xc3a2,	// (0x0003c97c) cell_app_pane_cp2_t1

0x28fa,	// (0x00032ed4) grid_highlight_pane_cp1_ParamLimits

0x28fa,	// (0x00032ed4) grid_highlight_pane_cp1

0x81c3,	// (0x0003879d) cell_hwr_candidate_pane_cp1_ParamLimits

0x81c3,	// (0x0003879d) cell_hwr_candidate_pane_cp1

0x8176,	// (0x00038750) fep_hwr_candidate_drop_down_list_pane_g1

0x81e7,	// (0x000387c1) fep_hwr_candidate_drop_down_list_pane_g2

0x81f4,	// (0x000387ce) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb4,	// (0x0004018e) fep_hwr_candidate_drop_down_list_pane_g

0x8201,	// (0x000387db) fep_hwr_candidate_drop_down_list_scroll_pane

0x820a,	// (0x000387e4) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x820a,	// (0x000387e4) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8217,	// (0x000387f1) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8217,	// (0x000387f1) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8224,	// (0x000387fe) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8224,	// (0x000387fe) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x8231,	// (0x0003880b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8231,	// (0x0003880b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x824c,	// (0x00038826) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x824c,	// (0x00038826) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8267,	// (0x00038841) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8267,	// (0x00038841) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8282,	// (0x0003885c) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8282,	// (0x0003885c) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x829d,	// (0x00038877) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x829d,	// (0x00038877) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbb,	// (0x00040195) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbb,	// (0x00040195) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc3b4,	// (0x0003c98e) cell_vkb_candidate_pane_cp1_ParamLimits

0xc3b4,	// (0x0003c98e) cell_vkb_candidate_pane_cp1

0xbf28,	// (0x0003c502) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbf28,	// (0x0003c502) fep_vkb_candidate_drop_down_list_pane_g1

0xc3da,	// (0x0003c9b4) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc3da,	// (0x0003c9b4) fep_vkb_candidate_drop_down_list_pane_g2

0xc3e7,	// (0x0003c9c1) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc3e7,	// (0x0003c9c1) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcc,	// (0x000401a6) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcc,	// (0x000401a6) fep_vkb_candidate_drop_down_list_pane_g

0xc3f4,	// (0x0003c9ce) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc3f4,	// (0x0003c9ce) fep_vkb_candidate_drop_down_list_scroll_pane

0xc401,	// (0x0003c9db) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc401,	// (0x0003c9db) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc40e,	// (0x0003c9e8) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc40e,	// (0x0003c9e8) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc41a,	// (0x0003c9f4) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc41a,	// (0x0003c9f4) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc426,	// (0x0003ca00) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc426,	// (0x0003ca00) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc447,	// (0x0003ca21) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc447,	// (0x0003ca21) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc468,	// (0x0003ca42) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc468,	// (0x0003ca42) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc489,	// (0x0003ca63) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc489,	// (0x0003ca63) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc4aa,	// (0x0003ca84) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc4aa,	// (0x0003ca84) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd3,	// (0x000401ad) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd3,	// (0x000401ad) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x5b89,	// (0x00036163) title_pane_g1_ParamLimits

0x5b96,	// (0x00036170) title_pane_g2_ParamLimits

0xf54e,	// (0x0003fb28) title_pane_g_ParamLimits

0x2dba,	// (0x00033394) aid_call2_pane

0x2db2,	// (0x0003338c) aid_call_pane

0x2dc2,	// (0x0003339c) popup_clock_analogue_window_g1

0x2dc2,	// (0x0003339c) popup_clock_analogue_window_g2

0x6810,	// (0x00036dea) popup_clock_analogue_window_g3

0x6819,	// (0x00036df3) popup_clock_analogue_window_g4

0x2256,	// (0x00032830) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0003fccd) popup_clock_analogue_window_g

0x6821,	// (0x00036dfb) popup_clock_analogue_window_t1

0x6862,	// (0x00036e3c) clock_digital_number_pane_ParamLimits

0x6862,	// (0x00036e3c) clock_digital_number_pane

0x686e,	// (0x00036e48) clock_digital_number_pane_cp02_ParamLimits

0x686e,	// (0x00036e48) clock_digital_number_pane_cp02

0x687a,	// (0x00036e54) clock_digital_number_pane_cp03_ParamLimits

0x687a,	// (0x00036e54) clock_digital_number_pane_cp03

0x6886,	// (0x00036e60) clock_digital_number_pane_cp04_ParamLimits

0x6886,	// (0x00036e60) clock_digital_number_pane_cp04

0x6892,	// (0x00036e6c) clock_digital_separator_pane_ParamLimits

0x6892,	// (0x00036e6c) clock_digital_separator_pane

0x689e,	// (0x00036e78) popup_clock_digital_window_t1_ParamLimits

0x689e,	// (0x00036e78) popup_clock_digital_window_t1

0x2256,	// (0x00032830) clock_digital_number_pane_g1

0x2256,	// (0x00032830) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0003fcd8) clock_digital_number_pane_g

0x2256,	// (0x00032830) clock_digital_separator_pane_g1

0x2256,	// (0x00032830) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0003fcd8) clock_digital_separator_pane_g

0x91c2,	// (0x0003979c) aid_fill_nsta_ParamLimits

0x9308,	// (0x000398e2) indicator_nsta_pane_ParamLimits

0x9499,	// (0x00039a73) popup_clock_analogue_window

0x9499,	// (0x00039a73) popup_clock_digital_window

0x22bc,	// (0x00032896) grid_indicator_nsta_pane_ParamLimits

0xb72f,	// (0x0003bd09) clock_nsta_pane_t2

0x0001,

0xfa99,	// (0x00040073) clock_nsta_pane_t

0x6779,	// (0x00036d53) aid_size_max_handle

0x6783,	// (0x00036d5d) aid_size_min_handle

0x6efb,	// (0x000374d5) editor_scroll_pane

0xc4c5,	// (0x0003ca9f) ex_editor_pane

0x2a23,	// (0x00032ffd) scroll_pane_cp13

0x2899,	// (0x00032e73) scroll_pane_cp14

0x2df1,	// (0x000333cb) scroll_pane_cp36

0x6845,	// (0x00036e1f) list_single_graphic_hl_pane_cp2_ParamLimits

0x6845,	// (0x00036e1f) list_single_graphic_hl_pane_cp2

0x43c5,	// (0x0003499f) list_single_graphic_hl_pane_ParamLimits

0x43c5,	// (0x0003499f) list_single_graphic_hl_pane

0x4a8d,	// (0x00035067) aid_size_min_hl_cp1

0xc4cd,	// (0x0003caa7) list_highlight_pane_cp34_ParamLimits

0xc4cd,	// (0x0003caa7) list_highlight_pane_cp34

0xc4de,	// (0x0003cab8) list_single_graphic_hl_pane_g1_ParamLimits

0xc4de,	// (0x0003cab8) list_single_graphic_hl_pane_g1

0x82b8,	// (0x00038892) list_single_graphic_hl_pane_g2_ParamLimits

0x82b8,	// (0x00038892) list_single_graphic_hl_pane_g2

0x82b8,	// (0x00038892) list_single_graphic_hl_pane_g3_ParamLimits

0x82b8,	// (0x00038892) list_single_graphic_hl_pane_g3

0x4094,	// (0x0003466e) list_single_graphic_hl_pane_g4_ParamLimits

0x4094,	// (0x0003466e) list_single_graphic_hl_pane_g4

0x82c4,	// (0x0003889e) list_single_graphic_hl_pane_g5_ParamLimits

0x82c4,	// (0x0003889e) list_single_graphic_hl_pane_g5

0x0004,

0xfbe4,	// (0x000401be) list_single_graphic_hl_pane_g_ParamLimits

0xfbe4,	// (0x000401be) list_single_graphic_hl_pane_g

0x82d8,	// (0x000388b2) list_single_graphic_hl_pane_t1_ParamLimits

0x82d8,	// (0x000388b2) list_single_graphic_hl_pane_t1

0xc4eb,	// (0x0003cac5) aid_size_min_hl_cp2

0xc4f4,	// (0x0003cace) list_highlight_pane_cp34_cp2_ParamLimits

0xc4f4,	// (0x0003cace) list_highlight_pane_cp34_cp2

0xc4de,	// (0x0003cab8) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc4de,	// (0x0003cab8) list_single_graphic_hl_pane_g1_cp2

0xc501,	// (0x0003cadb) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc501,	// (0x0003cadb) list_single_graphic_hl_pane_g2_cp2

0xc50d,	// (0x0003cae7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc50d,	// (0x0003cae7) list_single_graphic_hl_pane_g3_cp2

0xc51b,	// (0x0003caf5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc51b,	// (0x0003caf5) list_single_graphic_hl_pane_g4_cp2

0xc527,	// (0x0003cb01) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc527,	// (0x0003cb01) list_single_graphic_hl_pane_g5_cp2

0x7229,	// (0x00037803) control_pane_g4_ParamLimits

0x7229,	// (0x00037803) control_pane_g4

0x9186,	// (0x00039760) bg_popup_sub_pane_cp10_ParamLimits

0xbccf,	// (0x0003c2a9) list_choice_list_pane_ParamLimits

0xbcde,	// (0x0003c2b8) scroll_pane_cp23

0x23ef,	// (0x000329c9) bg_popup_preview_window_pane_cp02_ParamLimits

0xc2f5,	// (0x0003c8cf) list_preview_fixed_pane_ParamLimits

0xc30b,	// (0x0003c8e5) list_preview_fixed_pane_cp_ParamLimits

0xc30b,	// (0x0003c8e5) list_preview_fixed_pane_cp

0xc317,	// (0x0003c8f1) popup_preview_fixed_window_g1_ParamLimits

0xc317,	// (0x0003c8f1) popup_preview_fixed_window_g1

0xc323,	// (0x0003c8fd) popup_preview_fixed_window_g2_ParamLimits

0xc323,	// (0x0003c8fd) popup_preview_fixed_window_g2

0x0002,

0xfb6c,	// (0x00040146) popup_preview_fixed_window_g_ParamLimits

0xfb6c,	// (0x00040146) popup_preview_fixed_window_g

0x664f,	// (0x00036c29) aid_navi_side_left_pane_ParamLimits

0x6664,	// (0x00036c3e) aid_navi_side_right_pane_ParamLimits

0x667c,	// (0x00036c56) navi_icon_pane_stacon_ParamLimits

0x6690,	// (0x00036c6a) navi_navi_pane_stacon_ParamLimits

0x667c,	// (0x00036c56) navi_text_pane_stacon_ParamLimits

0x5920,	// (0x00035efa) main_text_info_pane

0xc551,	// (0x0003cb2b) listscroll_text_info_pane

0xc559,	// (0x0003cb33) list_text_info_pane_ParamLimits

0xc559,	// (0x0003cb33) list_text_info_pane

0xc568,	// (0x0003cb42) scroll_pane_cp24_ParamLimits

0xc568,	// (0x0003cb42) scroll_pane_cp24

0xc586,	// (0x0003cb60) list_text_info_pane_t1_ParamLimits

0xc586,	// (0x0003cb60) list_text_info_pane_t1

0x73af,	// (0x00037989) popup_fast_swap2_window_ParamLimits

0x73af,	// (0x00037989) popup_fast_swap2_window

0xc5ab,	// (0x0003cb85) aid_size_cell_fast2

0x224c,	// (0x00032826) bg_popup_window_pane_cp17

0x9aec,	// (0x0003a0c6) heading_pane_cp2

0x261e,	// (0x00032bf8) listscroll_fast2_pane

0xc5b5,	// (0x0003cb8f) grid_fast2_pane

0xc5bf,	// (0x0003cb99) listscroll_fast2_pane_g1

0xc5c9,	// (0x0003cba3) listscroll_fast2_pane_g2

0x0001,

0xfbef,	// (0x000401c9) listscroll_fast2_pane_g

0x2a23,	// (0x00032ffd) scroll_pane_cp26

0xc5d3,	// (0x0003cbad) cell_fast2_pane_ParamLimits

0xc5d3,	// (0x0003cbad) cell_fast2_pane

0xc5ea,	// (0x0003cbc4) cell_fast2_pane_g1

0xc5f3,	// (0x0003cbcd) cell_fast2_pane_g2

0xc5fc,	// (0x0003cbd6) cell_fast2_pane_g3

0x0002,

0xfbf4,	// (0x000401ce) cell_fast2_pane_g

0x2660,	// (0x00032c3a) grid_highlight_pane_cp9

0x7371,	// (0x0003794b) main_eswt_pane_ParamLimits

0x7371,	// (0x0003794b) main_eswt_pane

0xc57d,	// (0x0003cb57) list_single_text_info_pane

0xc604,	// (0x0003cbde) eswt_ctrl_button_pane

0xc604,	// (0x0003cbde) eswt_ctrl_canvas_pane

0xc60c,	// (0x0003cbe6) eswt_ctrl_combo_pane

0xc604,	// (0x0003cbde) eswt_ctrl_default_pane

0xc604,	// (0x0003cbde) eswt_ctrl_label_pane

0xc614,	// (0x0003cbee) eswt_ctrl_wait_pane

0xc61c,	// (0x0003cbf6) eswt_shell_pane

0x224c,	// (0x00032826) listscroll_eswt_app_pane

0xc63c,	// (0x0003cc16) popup_eswt_tasktip_window_ParamLimits

0xc63c,	// (0x0003cc16) popup_eswt_tasktip_window

0x972a,	// (0x00039d04) bg_popup_window_pane_cp18

0xc64d,	// (0x0003cc27) eswt_control_pane_g1_ParamLimits

0xc64d,	// (0x0003cc27) eswt_control_pane_g1

0xc65a,	// (0x0003cc34) eswt_control_pane_g2_ParamLimits

0xc65a,	// (0x0003cc34) eswt_control_pane_g2

0xc667,	// (0x0003cc41) eswt_control_pane_g3_ParamLimits

0xc667,	// (0x0003cc41) eswt_control_pane_g3

0xc674,	// (0x0003cc4e) eswt_control_pane_g4_ParamLimits

0xc674,	// (0x0003cc4e) eswt_control_pane_g4

0x0003,

0xfbfb,	// (0x000401d5) eswt_control_pane_g_ParamLimits

0xfbfb,	// (0x000401d5) eswt_control_pane_g

0x28fa,	// (0x00032ed4) bg_button_pane_ParamLimits

0x28fa,	// (0x00032ed4) bg_button_pane

0x2675,	// (0x00032c4f) common_borders_pane_copy2_ParamLimits

0x2675,	// (0x00032c4f) common_borders_pane_copy2

0xc681,	// (0x0003cc5b) control_button_pane_g1_ParamLimits

0xc681,	// (0x0003cc5b) control_button_pane_g1

0xc68d,	// (0x0003cc67) control_button_pane_g2_ParamLimits

0xc68d,	// (0x0003cc67) control_button_pane_g2

0xc699,	// (0x0003cc73) control_button_pane_g3_ParamLimits

0xc699,	// (0x0003cc73) control_button_pane_g3

0x0002,

0xfc04,	// (0x000401de) control_button_pane_g_ParamLimits

0xfc04,	// (0x000401de) control_button_pane_g

0xc6ad,	// (0x0003cc87) control_button_pane_t1

0xc6bb,	// (0x0003cc95) control_button_pane_t2

0x0001,

0xfc0b,	// (0x000401e5) control_button_pane_t

0x96b6,	// (0x00039c90) bg_button_pane_g1

0x96c6,	// (0x00039ca0) bg_button_pane_g2

0x96be,	// (0x00039c98) bg_button_pane_g3

0x96d6,	// (0x00039cb0) bg_button_pane_g4

0x96ce,	// (0x00039ca8) bg_button_pane_g5

0x96de,	// (0x00039cb8) bg_button_pane_g6

0x96e6,	// (0x00039cc0) bg_button_pane_g7

0x96f6,	// (0x00039cd0) bg_button_pane_g8

0x96ee,	// (0x00039cc8) bg_button_pane_g9

0x0008,

0xf861,	// (0x0003fe3b) bg_button_pane_g

0xbc8a,	// (0x0003c264) common_borders_pane_ParamLimits

0xbc8a,	// (0x0003c264) common_borders_pane

0xc64d,	// (0x0003cc27) eswt_control_pane_g1_copy1_ParamLimits

0xc64d,	// (0x0003cc27) eswt_control_pane_g1_copy1

0xc65a,	// (0x0003cc34) eswt_control_pane_g2_copy1_ParamLimits

0xc65a,	// (0x0003cc34) eswt_control_pane_g2_copy1

0xc667,	// (0x0003cc41) eswt_control_pane_g3_copy1_ParamLimits

0xc667,	// (0x0003cc41) eswt_control_pane_g3_copy1

0xc674,	// (0x0003cc4e) eswt_control_pane_g4_copy1_ParamLimits

0xc674,	// (0x0003cc4e) eswt_control_pane_g4_copy1

0xbcc5,	// (0x0003c29f) bg_eswt_ctrl_canvas_pane_g1

0xbc8a,	// (0x0003c264) common_borders_pane_cp2_ParamLimits

0xbc8a,	// (0x0003c264) common_borders_pane_cp2

0xbc8a,	// (0x0003c264) common_borders_pane_cp3_ParamLimits

0xbc8a,	// (0x0003c264) common_borders_pane_cp3

0xc6c9,	// (0x0003cca3) separator_horizontal_pane

0xc6d1,	// (0x0003ccab) separator_vertical_pane

0xc64d,	// (0x0003cc27) eswt_control_pane_g1_copy2_ParamLimits

0xc64d,	// (0x0003cc27) eswt_control_pane_g1_copy2

0xc65a,	// (0x0003cc34) eswt_control_pane_g2_copy2_ParamLimits

0xc65a,	// (0x0003cc34) eswt_control_pane_g2_copy2

0xc667,	// (0x0003cc41) eswt_control_pane_g3_copy2_ParamLimits

0xc667,	// (0x0003cc41) eswt_control_pane_g3_copy2

0xc674,	// (0x0003cc4e) eswt_control_pane_g4_copy2_ParamLimits

0xc674,	// (0x0003cc4e) eswt_control_pane_g4_copy2

0x224c,	// (0x00032826) common_borders_pane_cp4

0xc6da,	// (0x0003ccb4) separator_horizontal_pane_g1

0xc6e3,	// (0x0003ccbd) separator_horizontal_pane_g2

0xc6ec,	// (0x0003ccc6) separator_horizontal_pane_g3

0x0002,

0xfc10,	// (0x000401ea) separator_horizontal_pane_g

0xc64d,	// (0x0003cc27) eswt_control_pane_g1_copy3_ParamLimits

0xc64d,	// (0x0003cc27) eswt_control_pane_g1_copy3

0xc65a,	// (0x0003cc34) eswt_control_pane_g2_copy3_ParamLimits

0xc65a,	// (0x0003cc34) eswt_control_pane_g2_copy3

0xc667,	// (0x0003cc41) eswt_control_pane_g3_copy3_ParamLimits

0xc667,	// (0x0003cc41) eswt_control_pane_g3_copy3

0xc674,	// (0x0003cc4e) eswt_control_pane_g4_copy3_ParamLimits

0xc674,	// (0x0003cc4e) eswt_control_pane_g4_copy3

0x224c,	// (0x00032826) common_borders_pane_cp5

0xc6f5,	// (0x0003cccf) separator_vertical_pane_g1

0xc6fe,	// (0x0003ccd8) separator_vertical_pane_g2

0xc707,	// (0x0003cce1) separator_vertical_pane_g3

0x0002,

0xfc17,	// (0x000401f1) separator_vertical_pane_g

0xc64d,	// (0x0003cc27) eswt_control_pane_g1_copy4_ParamLimits

0xc64d,	// (0x0003cc27) eswt_control_pane_g1_copy4

0xc65a,	// (0x0003cc34) eswt_control_pane_g2_copy4_ParamLimits

0xc65a,	// (0x0003cc34) eswt_control_pane_g2_copy4

0xc667,	// (0x0003cc41) eswt_control_pane_g3_copy4_ParamLimits

0xc667,	// (0x0003cc41) eswt_control_pane_g3_copy4

0xc674,	// (0x0003cc4e) eswt_control_pane_g4_copy4_ParamLimits

0xc674,	// (0x0003cc4e) eswt_control_pane_g4_copy4

0xc710,	// (0x0003ccea) eswt_ctrl_combo_button_pane

0xc718,	// (0x0003ccf2) eswt_ctrl_input_pane

0xc720,	// (0x0003ccfa) popup_choice_list_window_cp70

0xc728,	// (0x0003cd02) eswt_ctrl_input_pane_t1

0x224c,	// (0x00032826) input_focus_pane_cp70

0xbc8a,	// (0x0003c264) bg_button_pane_cp70_ParamLimits

0xbc8a,	// (0x0003c264) bg_button_pane_cp70

0xc736,	// (0x0003cd10) eswt_ctrl_combo_button_pane_g1

0xc73e,	// (0x0003cd18) wait_bar_pane_cp70

0x972a,	// (0x00039d04) bg_popup_window_pane_cp70_ParamLimits

0x972a,	// (0x00039d04) bg_popup_window_pane_cp70

0xc746,	// (0x0003cd20) popup_eswt_tasktip_window_t1

0xc75c,	// (0x0003cd36) wait_bar_pane_cp71_ParamLimits

0xc75c,	// (0x0003cd36) wait_bar_pane_cp71

0xc768,	// (0x0003cd42) grid_eswt_app_pane

0x2c5a,	// (0x00033234) scroll_pane_cp70

0xc771,	// (0x0003cd4b) cell_eswt_app_pane_ParamLimits

0xc771,	// (0x0003cd4b) cell_eswt_app_pane

0xc7a3,	// (0x0003cd7d) cell_eswt_app_pane_g1_ParamLimits

0xc7a3,	// (0x0003cd7d) cell_eswt_app_pane_g1

0xc7d2,	// (0x0003cdac) cell_eswt_app_pane_g2_ParamLimits

0xc7d2,	// (0x0003cdac) cell_eswt_app_pane_g2

0x0001,

0xfc1e,	// (0x000401f8) cell_eswt_app_pane_g_ParamLimits

0xfc1e,	// (0x000401f8) cell_eswt_app_pane_g

0xc7fb,	// (0x0003cdd5) cell_eswt_app_pane_t1_ParamLimits

0xc7fb,	// (0x0003cdd5) cell_eswt_app_pane_t1

0xc82d,	// (0x0003ce07) grid_highlight_pane_cp70_ParamLimits

0xc82d,	// (0x0003ce07) grid_highlight_pane_cp70

0x6dd8,	// (0x000373b2) set_content_pane_g1

0x9105,	// (0x000396df) status_small_volume_pane

0x82ee,	// (0x000388c8) status_small_volume_pane_g1

0x82f6,	// (0x000388d0) volume_small2_pane

0x82ff,	// (0x000388d9) volume_small2_pane_g1

0x8308,	// (0x000388e2) volume_small2_pane_g2

0x8311,	// (0x000388eb) volume_small2_pane_g3

0x831a,	// (0x000388f4) volume_small2_pane_g4

0x8323,	// (0x000388fd) volume_small2_pane_g5

0x832c,	// (0x00038906) volume_small2_pane_g6

0x8335,	// (0x0003890f) volume_small2_pane_g7

0x833e,	// (0x00038918) volume_small2_pane_g8

0x8347,	// (0x00038921) volume_small2_pane_g9

0x8350,	// (0x0003892a) volume_small2_pane_g10

0x0009,

0xfc23,	// (0x000401fd) volume_small2_pane_g

0xc07c,	// (0x0003c656) fep_vkb_top_text_pane_g1_ParamLimits

0xc097,	// (0x0003c671) fep_vkb_top_text_pane_t1_ParamLimits

0xc32f,	// (0x0003c909) popup_preview_fixed_window_g3_ParamLimits

0xc32f,	// (0x0003c909) popup_preview_fixed_window_g3

0x78c0,	// (0x00037e9a) popup_toolbar_trans_pane

0xaa6f,	// (0x0003b049) aid_height_set_list_ParamLimits

0xaa80,	// (0x0003b05a) aid_size_parent_ParamLimits

0x9186,	// (0x00039760) list_highlight_pane_cp2_ParamLimits

0x6dd8,	// (0x000373b2) set_content_pane_g1_ParamLimits

0x7db1,	// (0x0003838b) list_single_image_pane_ParamLimits

0x7db1,	// (0x0003838b) list_single_image_pane

0xc839,	// (0x0003ce13) aid_size_cell_image_ParamLimits

0xc839,	// (0x0003ce13) aid_size_cell_image

0xc846,	// (0x0003ce20) grid_single_image_pane_ParamLimits

0xc846,	// (0x0003ce20) grid_single_image_pane

0x2908,	// (0x00032ee2) list_single_image_pane_g1_ParamLimits

0x2908,	// (0x00032ee2) list_single_image_pane_g1

0x2914,	// (0x00032eee) list_single_image_pane_g2_ParamLimits

0x2914,	// (0x00032eee) list_single_image_pane_g2

0x0001,

0xfc38,	// (0x00040212) list_single_image_pane_g_ParamLimits

0xfc38,	// (0x00040212) list_single_image_pane_g

0xc854,	// (0x0003ce2e) list_single_image_pane_t1_ParamLimits

0xc854,	// (0x0003ce2e) list_single_image_pane_t1

0xc86a,	// (0x0003ce44) cell_image_list_pane_ParamLimits

0xc86a,	// (0x0003ce44) cell_image_list_pane

0xc880,	// (0x0003ce5a) cell_image_list_pane_g1

0xc889,	// (0x0003ce63) cell_image_list_pane_g2

0x0001,

0xfc3d,	// (0x00040217) cell_image_list_pane_g

0xc892,	// (0x0003ce6c) aid_size_cell_tb_trans_pane

0x28fa,	// (0x00032ed4) bg_tb_trans_pane

0xc8a4,	// (0x0003ce7e) grid_tb_trans_pane

0x96b6,	// (0x00039c90) bg_tb_trans_pane_g1

0x96c6,	// (0x00039ca0) bg_tb_trans_pane_g2

0x96be,	// (0x00039c98) bg_tb_trans_pane_g3

0x96d6,	// (0x00039cb0) bg_tb_trans_pane_g4

0x96ce,	// (0x00039ca8) bg_tb_trans_pane_g5

0x96f6,	// (0x00039cd0) bg_tb_trans_pane_g6

0x96ee,	// (0x00039cc8) bg_tb_trans_pane_g7

0x96de,	// (0x00039cb8) bg_tb_trans_pane_g8

0x96e6,	// (0x00039cc0) bg_tb_trans_pane_g9

0x0008,

0xfc42,	// (0x0004021c) bg_tb_trans_pane_g

0xc8b8,	// (0x0003ce92) cell_toolbar_trans_pane_ParamLimits

0xc8b8,	// (0x0003ce92) cell_toolbar_trans_pane

0xbcc5,	// (0x0003c29f) cell_toolbar_trans_pane_g1

0xb8fd,	// (0x0003bed7) list_form2_midp_pane_t1

0xb90b,	// (0x0003bee5) list_form2_midp_pane_t2

0x0001,

0xfadf,	// (0x000400b9) list_form2_midp_pane_t

0xb919,	// (0x0003bef3) scroll_pane_cp51_ParamLimits

0xbae0,	// (0x0003c0ba) form2_midp_wait_pane_g1

0xbae9,	// (0x0003c0c3) form2_midp_wait_pane_g2

0xbaf2,	// (0x0003c0cc) form2_midp_wait_pane_g3

0x0002,

0xfaf4,	// (0x000400ce) form2_midp_wait_pane_g

0x22bc,	// (0x00032896) list_highlight_pane_cp21_ParamLimits

0xbb2b,	// (0x0003c105) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbb3a,	// (0x0003c114) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xac9d,	// (0x0003b277) list_single_2graphic_im_pane_ParamLimits

0xac9d,	// (0x0003b277) list_single_2graphic_im_pane

0xc8de,	// (0x0003ceb8) list_single_2graphic_im_pane_g1_ParamLimits

0xc8de,	// (0x0003ceb8) list_single_2graphic_im_pane_g1

0xc8ef,	// (0x0003cec9) list_single_2graphic_im_pane_g2_ParamLimits

0xc8ef,	// (0x0003cec9) list_single_2graphic_im_pane_g2

0xc8fb,	// (0x0003ced5) list_single_2graphic_im_pane_g3_ParamLimits

0xc8fb,	// (0x0003ced5) list_single_2graphic_im_pane_g3

0x0003,

0xfc55,	// (0x0004022f) list_single_2graphic_im_pane_g_ParamLimits

0xfc55,	// (0x0004022f) list_single_2graphic_im_pane_g

0xc91b,	// (0x0003cef5) list_single_2graphic_im_pane_t1_ParamLimits

0xc91b,	// (0x0003cef5) list_single_2graphic_im_pane_t1

0xc33b,	// (0x0003c915) list_single_graphic_2heading_pane_fp_ParamLimits

0xc33b,	// (0x0003c915) list_single_graphic_2heading_pane_fp

0x4730,	// (0x00034d0a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4730,	// (0x00034d0a) list_single_graphic_2heading_pane_fp_g1

0xc354,	// (0x0003c92e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc354,	// (0x0003c92e) list_single_graphic_2heading_pane_fp_g2

0x46f9,	// (0x00034cd3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x46f9,	// (0x00034cd3) list_single_graphic_2heading_pane_fp_g3

0x4705,	// (0x00034cdf) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4705,	// (0x00034cdf) list_single_graphic_2heading_pane_fp_g4

0xc360,	// (0x0003c93a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc360,	// (0x0003c93a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7c,	// (0x00040156) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7c,	// (0x00040156) list_single_graphic_2heading_pane_fp_g

0x4a96,	// (0x00035070) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4a96,	// (0x00035070) list_single_graphic_2heading_pane_fp_t1

0x4768,	// (0x00034d42) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4768,	// (0x00034d42) list_single_graphic_2heading_pane_fp_t2

0x4aac,	// (0x00035086) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4aac,	// (0x00035086) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5e,	// (0x00040238) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5e,	// (0x00040238) list_single_graphic_2heading_pane_fp_t

0xbd3e,	// (0x0003c318) fep_hwr_write_pane_g5_ParamLimits

0xbd3e,	// (0x0003c318) fep_hwr_write_pane_g5

0xbd4a,	// (0x0003c324) fep_hwr_write_pane_g6_ParamLimits

0xbd4a,	// (0x0003c324) fep_hwr_write_pane_g6

0xc61c,	// (0x0003cbf6) eswt_shell_pane_ParamLimits

0x972a,	// (0x00039d04) bg_popup_window_pane_cp18_ParamLimits

0xa9c6,	// (0x0003afa0) heading_pane_cp70

0xc746,	// (0x0003cd20) popup_eswt_tasktip_window_t1_ParamLimits

0x9219,	// (0x000397f3) aid_touch_tab_arrow_left

0x9225,	// (0x000397ff) aid_touch_tab_arrow_right

0x5baf,	// (0x00036189) title_pane_g3_ParamLimits

0x5baf,	// (0x00036189) title_pane_g3

0x28b9,	// (0x00032e93) set_value_pane_g1

0x78c0,	// (0x00037e9a) popup_toolbar_trans_pane_ParamLimits

0xc892,	// (0x0003ce6c) aid_size_cell_tb_trans_pane_ParamLimits

0x28fa,	// (0x00032ed4) bg_tb_trans_pane_ParamLimits

0xc8a4,	// (0x0003ce7e) grid_tb_trans_pane_ParamLimits

0x23ef,	// (0x000329c9) cont_note_pane_ParamLimits

0x23ef,	// (0x000329c9) cont_note_pane

0x2675,	// (0x00032c4f) cont_snote2_single_text_pane_ParamLimits

0x2675,	// (0x00032c4f) cont_snote2_single_text_pane

0x2675,	// (0x00032c4f) cont_snote2_single_graphic_pane_ParamLimits

0x2675,	// (0x00032c4f) cont_snote2_single_graphic_pane

0x9d14,	// (0x0003a2ee) cont_note_wait_pane_ParamLimits

0x9d14,	// (0x0003a2ee) cont_note_wait_pane

0x9d14,	// (0x0003a2ee) cont_note_image_pane_ParamLimits

0x9d14,	// (0x0003a2ee) cont_note_image_pane

0xc94c,	// (0x0003cf26) popup_note2_window_g1_ParamLimits

0xc94c,	// (0x0003cf26) popup_note2_window_g1

0xc97d,	// (0x0003cf57) popup_note2_window_t1_ParamLimits

0xc97d,	// (0x0003cf57) popup_note2_window_t1

0xc9c2,	// (0x0003cf9c) popup_note2_window_t2_ParamLimits

0xc9c2,	// (0x0003cf9c) popup_note2_window_t2

0xca07,	// (0x0003cfe1) popup_note2_window_t3_ParamLimits

0xca07,	// (0x0003cfe1) popup_note2_window_t3

0xca4c,	// (0x0003d026) popup_note2_window_t4_ParamLimits

0xca4c,	// (0x0003d026) popup_note2_window_t4

0x2473,	// (0x00032a4d) popup_note2_window_t5_ParamLimits

0x2473,	// (0x00032a4d) popup_note2_window_t5

0x0004,

0xfc6a,	// (0x00040244) popup_note2_window_t_ParamLimits

0xfc6a,	// (0x00040244) popup_note2_window_t

0xca7b,	// (0x0003d055) popup_note2_image_window_g1_ParamLimits

0xca7b,	// (0x0003d055) popup_note2_image_window_g1

0xca87,	// (0x0003d061) popup_note2_image_window_g2_ParamLimits

0xca87,	// (0x0003d061) popup_note2_image_window_g2

0x0001,

0xfc75,	// (0x0004024f) popup_note2_image_window_g_ParamLimits

0xfc75,	// (0x0004024f) popup_note2_image_window_g

0xca99,	// (0x0003d073) popup_note2_image_window_t1_ParamLimits

0xca99,	// (0x0003d073) popup_note2_image_window_t1

0xcab1,	// (0x0003d08b) popup_note2_image_window_t2_ParamLimits

0xcab1,	// (0x0003d08b) popup_note2_image_window_t2

0xcac9,	// (0x0003d0a3) popup_note2_image_window_t3_ParamLimits

0xcac9,	// (0x0003d0a3) popup_note2_image_window_t3

0x0002,

0xfc7a,	// (0x00040254) popup_note2_image_window_t_ParamLimits

0xfc7a,	// (0x00040254) popup_note2_image_window_t

0x9d22,	// (0x0003a2fc) popup_note2_wait_window_g1_ParamLimits

0x9d22,	// (0x0003a2fc) popup_note2_wait_window_g1

0xcae5,	// (0x0003d0bf) popup_note2_wait_window_g2_ParamLimits

0xcae5,	// (0x0003d0bf) popup_note2_wait_window_g2

0x9d3a,	// (0x0003a314) popup_note2_wait_window_g3_ParamLimits

0x9d3a,	// (0x0003a314) popup_note2_wait_window_g3

0x0002,

0xfc81,	// (0x0004025b) popup_note2_wait_window_g_ParamLimits

0xfc81,	// (0x0004025b) popup_note2_wait_window_g

0xcaf1,	// (0x0003d0cb) popup_note2_wait_window_t1_ParamLimits

0xcaf1,	// (0x0003d0cb) popup_note2_wait_window_t1

0xcb0f,	// (0x0003d0e9) popup_note2_wait_window_t2_ParamLimits

0xcb0f,	// (0x0003d0e9) popup_note2_wait_window_t2

0xcb2d,	// (0x0003d107) popup_note2_wait_window_t3_ParamLimits

0xcb2d,	// (0x0003d107) popup_note2_wait_window_t3

0xcb3f,	// (0x0003d119) popup_note2_wait_window_t4_ParamLimits

0xcb3f,	// (0x0003d119) popup_note2_wait_window_t4

0x0003,

0xfc88,	// (0x00040262) popup_note2_wait_window_t_ParamLimits

0xfc88,	// (0x00040262) popup_note2_wait_window_t

0xcb51,	// (0x0003d12b) wait_bar2_pane_ParamLimits

0xcb51,	// (0x0003d12b) wait_bar2_pane

0xcb69,	// (0x0003d143) popup_snote2_single_text_window_g1_ParamLimits

0xcb69,	// (0x0003d143) popup_snote2_single_text_window_g1

0xcb91,	// (0x0003d16b) popup_snote2_single_text_window_t1_ParamLimits

0xcb91,	// (0x0003d16b) popup_snote2_single_text_window_t1

0xcbfe,	// (0x0003d1d8) popup_snote2_single_text_window_t2_ParamLimits

0xcbfe,	// (0x0003d1d8) popup_snote2_single_text_window_t2

0xcc4a,	// (0x0003d224) popup_snote2_single_text_window_t3_ParamLimits

0xcc4a,	// (0x0003d224) popup_snote2_single_text_window_t3

0xcc8b,	// (0x0003d265) popup_snote2_single_text_window_t4_ParamLimits

0xcc8b,	// (0x0003d265) popup_snote2_single_text_window_t4

0xccc1,	// (0x0003d29b) popup_snote2_single_text_window_t5_ParamLimits

0xccc1,	// (0x0003d29b) popup_snote2_single_text_window_t5

0x0004,

0xfc91,	// (0x0004026b) popup_snote2_single_text_window_t_ParamLimits

0xfc91,	// (0x0004026b) popup_snote2_single_text_window_t

0xccec,	// (0x0003d2c6) popup_snote2_single_graphic_window_g1_ParamLimits

0xccec,	// (0x0003d2c6) popup_snote2_single_graphic_window_g1

0xcd14,	// (0x0003d2ee) popup_snote2_single_graphic_window_g2_ParamLimits

0xcd14,	// (0x0003d2ee) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9c,	// (0x00040276) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9c,	// (0x00040276) popup_snote2_single_graphic_window_g

0xcd3c,	// (0x0003d316) popup_snote2_single_graphic_window_t1_ParamLimits

0xcd3c,	// (0x0003d316) popup_snote2_single_graphic_window_t1

0xcd88,	// (0x0003d362) popup_snote2_single_graphic_window_t2_ParamLimits

0xcd88,	// (0x0003d362) popup_snote2_single_graphic_window_t2

0xcc4a,	// (0x0003d224) popup_snote2_single_graphic_window_t3_ParamLimits

0xcc4a,	// (0x0003d224) popup_snote2_single_graphic_window_t3

0xcc8b,	// (0x0003d265) popup_snote2_single_graphic_window_t4_ParamLimits

0xcc8b,	// (0x0003d265) popup_snote2_single_graphic_window_t4

0xccc1,	// (0x0003d29b) popup_snote2_single_graphic_window_t5_ParamLimits

0xccc1,	// (0x0003d29b) popup_snote2_single_graphic_window_t5

0x0004,

0xfca1,	// (0x0004027b) popup_snote2_single_graphic_window_t_ParamLimits

0xfca1,	// (0x0004027b) popup_snote2_single_graphic_window_t

0xb7c9,	// (0x0003bda3) clock_nsta_pane_cp2_t1

0xb7c9,	// (0x0003bda3) clock_nsta_pane_cp2_t2

0x0001,

0xfab5,	// (0x0004008f) clock_nsta_pane_cp2_t

0x41d2,	// (0x000347ac) form_field_data_wide_pane_g1_ParamLimits

0x2908,	// (0x00032ee2) form_field_data_wide_pane_g2_ParamLimits

0x2908,	// (0x00032ee2) form_field_data_wide_pane_g2

0x2914,	// (0x00032eee) form_field_data_wide_pane_g3_ParamLimits

0x2914,	// (0x00032eee) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0003fc50) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0003fc50) form_field_data_wide_pane_g

0xb6cb,	// (0x0003bca5) grid_touch_3_pane_ParamLimits

0xb6cb,	// (0x0003bca5) grid_touch_3_pane

0xcdd4,	// (0x0003d3ae) cell_touch_3_pane_ParamLimits

0xcdd4,	// (0x0003d3ae) cell_touch_3_pane

0xbcc5,	// (0x0003c29f) cell_touch_3_pane_g1

0xbcc5,	// (0x0003c29f) cell_touch_3_pane_g2

0x0001,

0xfb3a,	// (0x00040114) cell_touch_3_pane_g

0x24cb,	// (0x00032aa5) cont_query_data_pane

0x24d3,	// (0x00032aad) cont_query_data_pane_cp1

0xce07,	// (0x0003d3e1) button_value_adjust_pane_cp7

0xce0f,	// (0x0003d3e9) query_popup_pane_cp3

0x2e22,	// (0x000333fc) bg_popup_sub_pane_cp22_ParamLimits

0x6912,	// (0x00036eec) navi_navi_volume_pane_cp2

0x692d,	// (0x00036f07) popup_side_volume_key_window_g2

0x693c,	// (0x00036f16) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0003fce6) popup_side_volume_key_window_g

0x6959,	// (0x00036f33) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0003fced) popup_side_volume_key_window_t

0x6c93,	// (0x0003726d) popup_side_volume_key_window_ParamLimits

0x60a5,	// (0x0003667f) list_double_graphic_pane_g4_ParamLimits

0x60a5,	// (0x0003667f) list_double_graphic_pane_g4

0xaccc,	// (0x0003b2a6) list_single_2heading_msg_pane_ParamLimits

0xaccc,	// (0x0003b2a6) list_single_2heading_msg_pane

0x8359,	// (0x00038933) list_single_2heading_msg_pane_g1_ParamLimits

0x8359,	// (0x00038933) list_single_2heading_msg_pane_g1

0x47da,	// (0x00034db4) list_single_2heading_msg_pane_g2_ParamLimits

0x47da,	// (0x00034db4) list_single_2heading_msg_pane_g2

0x8365,	// (0x0003893f) list_single_2heading_msg_pane_g3_ParamLimits

0x8365,	// (0x0003893f) list_single_2heading_msg_pane_g3

0x8371,	// (0x0003894b) list_single_2heading_msg_pane_g4_ParamLimits

0x8371,	// (0x0003894b) list_single_2heading_msg_pane_g4

0x0003,

0xfcac,	// (0x00040286) list_single_2heading_msg_pane_g_ParamLimits

0xfcac,	// (0x00040286) list_single_2heading_msg_pane_g

0x8389,	// (0x00038963) list_single_2heading_msg_pane_t1_ParamLimits

0x8389,	// (0x00038963) list_single_2heading_msg_pane_t1

0x83b1,	// (0x0003898b) list_single_2heading_msg_pane_t2_ParamLimits

0x83b1,	// (0x0003898b) list_single_2heading_msg_pane_t2

0x83e5,	// (0x000389bf) list_single_2heading_msg_pane_t3_ParamLimits

0x83e5,	// (0x000389bf) list_single_2heading_msg_pane_t3

0x4acc,	// (0x000350a6) list_single_2heading_msg_pane_t4_ParamLimits

0x4acc,	// (0x000350a6) list_single_2heading_msg_pane_t4

0x0003,

0xfcb5,	// (0x0004028f) list_single_2heading_msg_pane_t_ParamLimits

0xfcb5,	// (0x0004028f) list_single_2heading_msg_pane_t

0x226a,	// (0x00032844) title_pane_g4_ParamLimits

0x226a,	// (0x00032844) title_pane_g4

0x659f,	// (0x00036b79) title_pane_stacon_g3_ParamLimits

0x659f,	// (0x00036b79) title_pane_stacon_g3

0xc90f,	// (0x0003cee9) list_single_2graphic_im_pane_g4_ParamLimits

0xc90f,	// (0x0003cee9) list_single_2graphic_im_pane_g4

0xa784,	// (0x0003ad5e) popup_side_volume_key_window_cp

0xaff3,	// (0x0003b5cd) main_idle_act2_pane_t1

0x79c4,	// (0x00037f9e) toolbar_button_pane_g10

0x5f10,	// (0x000364ea) popup_toolbar_window_cp1

0xb7ba,	// (0x0003bd94) clock_nsta_pane_cp_t1

0xb7ba,	// (0x0003bd94) clock_nsta_pane_cp_t2

0x0001,

0xfab0,	// (0x0004008a) clock_nsta_pane_cp_t

0x6912,	// (0x00036eec) navi_navi_volume_pane_cp2_ParamLimits

0x6921,	// (0x00036efb) popup_side_volume_key_window_g1_ParamLimits

0x692d,	// (0x00036f07) popup_side_volume_key_window_g2_ParamLimits

0x693c,	// (0x00036f16) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0003fce6) popup_side_volume_key_window_g_ParamLimits

0x7f09,	// (0x000384e3) fep_hwr_aid_pane

0x7fb2,	// (0x0003858c) bg_fep_hwr_top_pane_g4_ParamLimits

0xbd0e,	// (0x0003c2e8) fep_hwr_top_pane_g1_ParamLimits

0xbd20,	// (0x0003c2fa) fep_hwr_top_pane_g2_ParamLimits

0x7fd2,	// (0x000385ac) fep_hwr_top_pane_g3_ParamLimits

0xfb05,	// (0x000400df) fep_hwr_top_pane_g_ParamLimits

0x7fe7,	// (0x000385c1) fep_hwr_top_text_pane_ParamLimits

0xa539,	// (0x0003ab13) aid_touch_tab_arrow_arrow_2

0xa542,	// (0x0003ab1c) aid_touch_tab_arrow_left_2

0x7f1d,	// (0x000384f7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7f54,	// (0x0003852e) fep_hwr_prediction_pane

0xbe76,	// (0x0003c450) fep_vkb_prediction_pane

0xbf7c,	// (0x0003c556) fep_vkb_side_pane_g3_ParamLimits

0xbf7c,	// (0x0003c556) fep_vkb_side_pane_g3

0x8176,	// (0x00038750) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x81e7,	// (0x000387c1) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x81f4,	// (0x000387ce) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb4,	// (0x0004018e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x841e,	// (0x000389f8) fep_hwr_prediction_pane_g1

0x8428,	// (0x00038a02) fep_hwr_prediction_pane_g2

0x8430,	// (0x00038a0a) fep_hwr_prediction_pane_g3

0x8438,	// (0x00038a12) fep_hwr_prediction_pane_g4

0x0003,

0xfcbe,	// (0x00040298) fep_hwr_prediction_pane_g

0xce36,	// (0x0003d410) fep_vkb_prediction_pane_g1

0xce40,	// (0x0003d41a) fep_vkb_prediction_pane_g2

0xce48,	// (0x0003d422) fep_vkb_prediction_pane_g3

0xce50,	// (0x0003d42a) fep_vkb_prediction_pane_g4

0x0003,

0xfcc7,	// (0x000402a1) fep_vkb_prediction_pane_g

0x7d15,	// (0x000382ef) slider_set_pane_g3

0x7d29,	// (0x00038303) slider_set_pane_g4

0x7d41,	// (0x0003831b) slider_set_pane_g5

0x7d15,	// (0x000382ef) slider_set_pane_g6

0x7d57,	// (0x00038331) slider_set_pane_g7

0xabff,	// (0x0003b1d9) slider_form_pane_g3

0xac08,	// (0x0003b1e2) slider_form_pane_g4

0xac10,	// (0x0003b1ea) slider_form_pane_g5

0xabff,	// (0x0003b1d9) slider_form_pane_g6

0xac18,	// (0x0003b1f2) slider_form_pane_g7

0xb2a1,	// (0x0003b87b) slider_set_pane_vc_g3

0xb2aa,	// (0x0003b884) slider_set_pane_vc_g4

0xb2b3,	// (0x0003b88d) slider_set_pane_vc_g5

0xb2a1,	// (0x0003b87b) slider_set_pane_vc_g6

0xb2bc,	// (0x0003b896) slider_set_pane_vc_g7

0xb490,	// (0x0003ba6a) slider_form_pane_vc_g1

0xb499,	// (0x0003ba73) slider_form_pane_vc_g2

0xb4a2,	// (0x0003ba7c) slider_form_pane_vc_g3

0xb490,	// (0x0003ba6a) slider_form_pane_vc_g4

0xb4ab,	// (0x0003ba85) slider_form_pane_vc_g5

0x0004,

0xfa82,	// (0x0004005c) slider_form_pane_vc_g

0x5920,	// (0x00035efa) main_idle_act3_pane

0xce58,	// (0x0003d432) ai3_links_pane

0xce61,	// (0x0003d43b) popup_ai3_data_window_ParamLimits

0xce61,	// (0x0003d43b) popup_ai3_data_window

0x224c,	// (0x00032826) grid_ai3_links_pane

0xce7f,	// (0x0003d459) cell_ai3_links_pane_ParamLimits

0xce7f,	// (0x0003d459) cell_ai3_links_pane

0xce99,	// (0x0003d473) bg_popup_sub_pane_cp11

0xcea6,	// (0x0003d480) cell_ai3_links_pane_g1

0x224c,	// (0x00032826) bg_popup_sub_pane_cp12

0xcecb,	// (0x0003d4a5) heading_ai3_data_pane

0xced3,	// (0x0003d4ad) list_ai3_gene_pane

0xcedf,	// (0x0003d4b9) popup_ai3_data_window_g1

0xcee7,	// (0x0003d4c1) heading_ai3_data_pane_g1

0xceef,	// (0x0003d4c9) heading_ai3_data_pane_t1

0xcefd,	// (0x0003d4d7) list_double_ai3_gene_pane_ParamLimits

0xcefd,	// (0x0003d4d7) list_double_ai3_gene_pane

0xcf0a,	// (0x0003d4e4) list_single_ai3_gene_pane_ParamLimits

0xcf0a,	// (0x0003d4e4) list_single_ai3_gene_pane

0xbc8a,	// (0x0003c264) list_highlight_pane_cp7_ParamLimits

0xbc8a,	// (0x0003c264) list_highlight_pane_cp7

0xcf17,	// (0x0003d4f1) list_single_a13_gene_pane_t1_ParamLimits

0xcf17,	// (0x0003d4f1) list_single_a13_gene_pane_t1

0xcf2e,	// (0x0003d508) list_single_ai3_gene_pane_g1

0xcf37,	// (0x0003d511) list_single_ai3_gene_pane_g2

0x0001,

0xfcd0,	// (0x000402aa) list_single_ai3_gene_pane_g

0xcf3f,	// (0x0003d519) list_double_ai3_gene_pane_g1_ParamLimits

0xcf3f,	// (0x0003d519) list_double_ai3_gene_pane_g1

0xcf4b,	// (0x0003d525) list_double_ai3_gene_pane_t1_ParamLimits

0xcf4b,	// (0x0003d525) list_double_ai3_gene_pane_t1

0xcf67,	// (0x0003d541) list_double_ai3_gene_pane_t2_ParamLimits

0xcf67,	// (0x0003d541) list_double_ai3_gene_pane_t2

0xcf7c,	// (0x0003d556) list_double_ai3_gene_pane_t3_ParamLimits

0xcf7c,	// (0x0003d556) list_double_ai3_gene_pane_t3

0x0002,

0xfcd5,	// (0x000402af) list_double_ai3_gene_pane_t_ParamLimits

0xfcd5,	// (0x000402af) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4ac2,	// (0x0003509c) aid_size_min_col_2

0xce20,	// (0x0003d3fa) aid_size_min_msg_ParamLimits

0xce20,	// (0x0003d3fa) aid_size_min_msg

0xc088,	// (0x0003c662) fep_vkb_top_text_pane_g2_ParamLimits

0xc088,	// (0x0003c662) fep_vkb_top_text_pane_g2

0x0001,

0xfb35,	// (0x0004010f) fep_vkb_top_text_pane_g_ParamLimits

0xfb35,	// (0x0004010f) fep_vkb_top_text_pane_g

0x5920,	// (0x00035efa) main_hc_apps_shell_pane

0xcf99,	// (0x0003d573) grid_hc_apps_pane_ParamLimits

0xcf99,	// (0x0003d573) grid_hc_apps_pane

0xcfa8,	// (0x0003d582) list_hc_apps_pane

0xcfb0,	// (0x0003d58a) scroll_pane_cp37_ParamLimits

0xcfb0,	// (0x0003d58a) scroll_pane_cp37

0xcfbc,	// (0x0003d596) cell_hc_apps_pane_ParamLimits

0xcfbc,	// (0x0003d596) cell_hc_apps_pane

0xd074,	// (0x0003d64e) cell_hc_apps_pane_g1_ParamLimits

0xd074,	// (0x0003d64e) cell_hc_apps_pane_g1

0xd0a5,	// (0x0003d67f) cell_hc_apps_pane_g2_ParamLimits

0xd0a5,	// (0x0003d67f) cell_hc_apps_pane_g2

0xd0c1,	// (0x0003d69b) cell_hc_apps_pane_g3_ParamLimits

0xd0c1,	// (0x0003d69b) cell_hc_apps_pane_g3

0x0002,

0xfcdc,	// (0x000402b6) cell_hc_apps_pane_g_ParamLimits

0xfcdc,	// (0x000402b6) cell_hc_apps_pane_g

0xd0e3,	// (0x0003d6bd) cell_hc_apps_pane_t1_ParamLimits

0xd0e3,	// (0x0003d6bd) cell_hc_apps_pane_t1

0x23ef,	// (0x000329c9) grid_highlight_pane_cp10_ParamLimits

0x23ef,	// (0x000329c9) grid_highlight_pane_cp10

0xd123,	// (0x0003d6fd) list_single_hc_apps_pane_ParamLimits

0xd123,	// (0x0003d6fd) list_single_hc_apps_pane

0xd162,	// (0x0003d73c) list_single_hc_apps_pane_g1

0x8440,	// (0x00038a1a) list_single_hc_apps_pane_g2

0x0001,

0xfce3,	// (0x000402bd) list_single_hc_apps_pane_g

0x8459,	// (0x00038a33) list_single_hc_apps_pane_g2_copy1

0x8475,	// (0x00038a4f) list_single_hc_apps_pane_t1

0x22bc,	// (0x00032896) bg_set_opt_pane_cp_ParamLimits

0x5c61,	// (0x0003623b) setting_slider_pane_t1_ParamLimits

0x5c7a,	// (0x00036254) setting_slider_pane_t2_ParamLimits

0x5c94,	// (0x0003626e) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003fb38) setting_slider_pane_t_ParamLimits

0x5cac,	// (0x00036286) slider_set_pane_ParamLimits

0x723d,	// (0x00037817) control_pane_g5_ParamLimits

0x723d,	// (0x00037817) control_pane_g5

0xaa32,	// (0x0003b00c) slider_set_pane_g1_ParamLimits

0x7d09,	// (0x000382e3) slider_set_pane_g2_ParamLimits

0x7d15,	// (0x000382ef) slider_set_pane_g3_ParamLimits

0x7d29,	// (0x00038303) slider_set_pane_g4_ParamLimits

0x7d41,	// (0x0003831b) slider_set_pane_g5_ParamLimits

0x7d15,	// (0x000382ef) slider_set_pane_g6_ParamLimits

0x7d57,	// (0x00038331) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0003ff39) slider_set_pane_g_ParamLimits

0x6d83,	// (0x0003735d) navi_icon_text_pane_ParamLimits

0x91d8,	// (0x000397b2) aid_fill_nsta_2_ParamLimits

0x9219,	// (0x000397f3) aid_touch_tab_arrow_left_ParamLimits

0x9225,	// (0x000397ff) aid_touch_tab_arrow_right_ParamLimits

0x9291,	// (0x0003986b) clock_nsta_pane_ParamLimits

0xa51b,	// (0x0003aaf5) navi_icon_pane_g1_ParamLimits

0xa527,	// (0x0003ab01) navi_text_pane_t1_ParamLimits

0xb8d7,	// (0x0003beb1) navi_icon_text_pane_g1_ParamLimits

0xb8e3,	// (0x0003bebd) navi_icon_text_pane_t1_ParamLimits

0xd162,	// (0x0003d73c) list_single_hc_apps_pane_g1_ParamLimits

0x8440,	// (0x00038a1a) list_single_hc_apps_pane_g2_ParamLimits

0xfce3,	// (0x000402bd) list_single_hc_apps_pane_g_ParamLimits

0x8459,	// (0x00038a33) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8475,	// (0x00038a4f) list_single_hc_apps_pane_t1_ParamLimits

0x5a95,	// (0x0003606f) popup_toolbar2_fixed_window_ParamLimits

0x5a95,	// (0x0003606f) popup_toolbar2_fixed_window

0x78b6,	// (0x00037e90) popup_toolbar2_float_window

0x224c,	// (0x00032826) bg_popup_sub_pane_cp27

0xd17b,	// (0x0003d755) grid_toolbar2_float_pane

0x224c,	// (0x00032826) bg_popup_sub_pane_cp26

0xd17b,	// (0x0003d755) grid_toolbar2_fixed_pane

0xd183,	// (0x0003d75d) cell_toolbar2_fixed_pane_ParamLimits

0xd183,	// (0x0003d75d) cell_toolbar2_fixed_pane

0xd193,	// (0x0003d76d) cell_toolbar2_fixed_pane_g1

0xd19c,	// (0x0003d776) toolbar2_fixed_button_pane

0x96b6,	// (0x00039c90) toolbar2_fixed_button_pane_g1

0x96c6,	// (0x00039ca0) toolbar2_fixed_button_pane_g2

0x96be,	// (0x00039c98) toolbar2_fixed_button_pane_g3

0x96d6,	// (0x00039cb0) toolbar2_fixed_button_pane_g4

0x96ce,	// (0x00039ca8) toolbar2_fixed_button_pane_g5

0x96de,	// (0x00039cb8) toolbar2_fixed_button_pane_g6

0x96e6,	// (0x00039cc0) toolbar2_fixed_button_pane_g7

0x96f6,	// (0x00039cd0) toolbar2_fixed_button_pane_g8

0x96ee,	// (0x00039cc8) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0003fe3b) toolbar2_fixed_button_pane_g

0xd1a4,	// (0x0003d77e) cell_toolbar2_float_pane_ParamLimits

0xd1a4,	// (0x0003d77e) cell_toolbar2_float_pane

0xd1b5,	// (0x0003d78f) cell_toolbar2_float_pane_g1

0xd19c,	// (0x0003d776) toolbar2_fixed_button_pane_cp

0xbde4,	// (0x0003c3be) fep_vkb_accented_list_pane_ParamLimits

0xbde4,	// (0x0003c3be) fep_vkb_accented_list_pane

0x8156,	// (0x00038730) bg_popup_fep_shadow_pane_g9

0x6efb,	// (0x000374d5) bg_popup_fep_shadow_pane_cp3

0x2a0a,	// (0x00032fe4) list_accented_list_pane

0xd1be,	// (0x0003d798) list_single_accented_list_pane_ParamLimits

0xd1be,	// (0x0003d798) list_single_accented_list_pane

0x6efb,	// (0x000374d5) list_highlight_pane_cp10

0xd1cf,	// (0x0003d7a9) list_single_accented_list_pane_t1

0x77fc,	// (0x00037dd6) popup_slider_window_ParamLimits

0x77fc,	// (0x00037dd6) popup_slider_window

0xce17,	// (0x0003d3f1) aid_indentation_list_msg

0xd29f,	// (0x0003d879) bg_popup_window_pane_cp19

0xd30b,	// (0x0003d8e5) popup_slider_window_g1

0xd327,	// (0x0003d901) popup_slider_window_g2

0xd343,	// (0x0003d91d) popup_slider_window_g3

0x0005,

0xfce8,	// (0x000402c2) popup_slider_window_g

0xd3a9,	// (0x0003d983) popup_slider_window_t1

0xd41d,	// (0x0003d9f7) small_volume_slider_vertical_pane

0xbcc5,	// (0x0003c29f) small_volume_slider_vertical_pane_g1

0xbcc5,	// (0x0003c29f) small_volume_slider_vertical_pane_g2

0xd439,	// (0x0003da13) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfa,	// (0x000402d4) small_volume_slider_vertical_pane_g

0x5843,	// (0x00035e1d) area_side_right_pane_ParamLimits

0x5843,	// (0x00035e1d) area_side_right_pane

0x84a3,	// (0x00038a7d) aid_size_side_button_ParamLimits

0x84a3,	// (0x00038a7d) aid_size_side_button

0x84b7,	// (0x00038a91) grid_sctrl_middle_pane_ParamLimits

0x84b7,	// (0x00038a91) grid_sctrl_middle_pane

0x84d6,	// (0x00038ab0) sctrl_sk_bottom_pane

0x84e7,	// (0x00038ac1) sctrl_sk_top_pane

0x84f9,	// (0x00038ad3) aid_touch_sctrl_top

0x8506,	// (0x00038ae0) bg_sctrl_sk_pane_ParamLimits

0x8506,	// (0x00038ae0) bg_sctrl_sk_pane

0x8514,	// (0x00038aee) sctrl_sk_top_pane_g1

0x8521,	// (0x00038afb) sctrl_sk_top_pane_t1

0x84f9,	// (0x00038ad3) aid_touch_sctrl_bottom

0x8506,	// (0x00038ae0) bg_sctrl_sk_pane_cp_ParamLimits

0x8506,	// (0x00038ae0) bg_sctrl_sk_pane_cp

0x853c,	// (0x00038b16) sctrl_sk_bottom_pane_g1

0x8521,	// (0x00038afb) sctrl_sk_bottom_pane_t1

0x8545,	// (0x00038b1f) cell_sctrl_middle_pane_ParamLimits

0x8545,	// (0x00038b1f) cell_sctrl_middle_pane

0x8562,	// (0x00038b3c) aid_touch_sctrl_middle_ParamLimits

0x8562,	// (0x00038b3c) aid_touch_sctrl_middle

0x8574,	// (0x00038b4e) bg_sctrl_middle_pane_ParamLimits

0x8574,	// (0x00038b4e) bg_sctrl_middle_pane

0x8176,	// (0x00038750) cell_sctrl_middle_pane_g1_ParamLimits

0x8176,	// (0x00038750) cell_sctrl_middle_pane_g1

0x8582,	// (0x00038b5c) cell_sctrl_middle_pane_g2_ParamLimits

0x8582,	// (0x00038b5c) cell_sctrl_middle_pane_g2

0x0001,

0xfd06,	// (0x000402e0) cell_sctrl_middle_pane_g_ParamLimits

0xfd06,	// (0x000402e0) cell_sctrl_middle_pane_g

0x96b6,	// (0x00039c90) bg_sctrl_middle_pane_g1

0x96be,	// (0x00039c98) bg_sctrl_middle_pane_g2

0x96c6,	// (0x00039ca0) bg_sctrl_middle_pane_g3

0x96ce,	// (0x00039ca8) bg_sctrl_middle_pane_g4

0x96d6,	// (0x00039cb0) bg_sctrl_middle_pane_g5

0x96de,	// (0x00039cb8) bg_sctrl_middle_pane_g6

0x96e6,	// (0x00039cc0) bg_sctrl_middle_pane_g7

0x96ee,	// (0x00039cc8) bg_sctrl_middle_pane_g8

0x0007,

0xfd0b,	// (0x000402e5) bg_sctrl_middle_pane_g

0x96f6,	// (0x00039cd0) bg_sctrl_middle_pane_g8_copy1

0x96b6,	// (0x00039c90) bg_sctrl_sk_pane_g1

0x96c6,	// (0x00039ca0) bg_sctrl_sk_pane_g2

0x96be,	// (0x00039c98) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0003fe3b) bg_sctrl_sk_pane_g

0x2833,	// (0x00032e0d) aid_size_touch_scroll_bar

0x96d6,	// (0x00039cb0) bg_sctrl_sk_pane_g4

0x96ce,	// (0x00039ca8) bg_sctrl_sk_pane_g5

0x96de,	// (0x00039cb8) bg_sctrl_sk_pane_g6

0x96e6,	// (0x00039cc0) bg_sctrl_sk_pane_g7

0x96f6,	// (0x00039cd0) bg_sctrl_sk_pane_g8

0x96ee,	// (0x00039cc8) bg_sctrl_sk_pane_g9

0x7413,	// (0x000379ed) popup_fep_china_hwr2_fs_candidate_window

0x741d,	// (0x000379f7) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x741d,	// (0x000379f7) popup_fep_china_hwr2_fs_control_window

0x8176,	// (0x00038750) sctrl_sk_top_pane_g2

0x0001,

0xfd01,	// (0x000402db) sctrl_sk_top_pane_g

0xd442,	// (0x0003da1c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd442,	// (0x0003da1c) aid_fep_china_hwr2_fs_cell

0xd455,	// (0x0003da2f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd455,	// (0x0003da2f) bg_popup_fep_shadow_pane_cp4

0xd46e,	// (0x0003da48) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd46e,	// (0x0003da48) bg_popup_fep_shadow_pane_cp5

0xd480,	// (0x0003da5a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd480,	// (0x0003da5a) popup_fep_china_hwr2_fs_control_bar_grid

0xd490,	// (0x0003da6a) popup_fep_china_hwr2_fs_control_funtion_grid

0xd498,	// (0x0003da72) aid_fep_china_hwr2_fs_candi_cell

0x224c,	// (0x00032826) bg_popup_fep_shadow_pane_cp6

0xd4a2,	// (0x0003da7c) popup_fep_china_hwr2_fs_candidate_grid

0xd4ac,	// (0x0003da86) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd4ac,	// (0x0003da86) cell_fep_china_hwr2_fs_funtion_grid

0xbcc5,	// (0x0003c29f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd4c4,	// (0x0003da9e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd4c4,	// (0x0003da9e) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd4d2,	// (0x0003daac) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd4d2,	// (0x0003daac) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1c,	// (0x000402f6) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1c,	// (0x000402f6) cell_fep_china_hwr2_fs_funtion_grid_g

0xd4e8,	// (0x0003dac2) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd4e8,	// (0x0003dac2) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd4fd,	// (0x0003dad7) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd4fd,	// (0x0003dad7) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd21,	// (0x000402fb) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd21,	// (0x000402fb) cell_fep_china_hwr2_fs_funtion_grid_t

0xd519,	// (0x0003daf3) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd521,	// (0x0003dafb) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd529,	// (0x0003db03) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd26,	// (0x00040300) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd531,	// (0x0003db0b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd531,	// (0x0003db0b) cell_fep_china_hwr2_fs_candidate_grid

0xd550,	// (0x0003db2a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd558,	// (0x0003db32) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbcc5,	// (0x0003c29f) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbcc5,	// (0x0003c29f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3a,	// (0x00040114) cell_fep_china_hwr2_fs_candidate_grid_g

0xd560,	// (0x0003db3a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x929e,	// (0x00039878) clock_nsta_pane_cp_24_ParamLimits

0x929e,	// (0x00039878) clock_nsta_pane_cp_24

0x931e,	// (0x000398f8) indicator_nsta_pane_cp_24_ParamLimits

0x931e,	// (0x000398f8) indicator_nsta_pane_cp_24

0xa397,	// (0x0003a971) heading_pane_g1

0x0001,

0xf8c6,	// (0x0003fea0) heading_pane_g

0xae3a,	// (0x0003b414) grid_sct_catagory_button_pane

0xae6c,	// (0x0003b446) scroll_pane_cp5_ParamLimits

0xb925,	// (0x0003beff) button_value_adjust_pane_cp5_ParamLimits

0xb925,	// (0x0003beff) button_value_adjust_pane_cp5

0xba0a,	// (0x0003bfe4) form2_midp_time_pane_ParamLimits

0xd56e,	// (0x0003db48) cell_sct_catagory_button_pane_ParamLimits

0xd56e,	// (0x0003db48) cell_sct_catagory_button_pane

0xbc8a,	// (0x0003c264) bg_button_pane_cp01_ParamLimits

0xbc8a,	// (0x0003c264) bg_button_pane_cp01

0xbcc5,	// (0x0003c29f) cell_sct_catagory_button_pane_g1

0x783d,	// (0x00037e17) popup_tb_extension_window

0xd580,	// (0x0003db5a) aid_size_cell_ext_ParamLimits

0xd580,	// (0x0003db5a) aid_size_cell_ext

0x23ef,	// (0x000329c9) bg_tb_trans_pane_cp1_ParamLimits

0x23ef,	// (0x000329c9) bg_tb_trans_pane_cp1

0xd5a0,	// (0x0003db7a) grid_tb_ext_pane_ParamLimits

0xd5a0,	// (0x0003db7a) grid_tb_ext_pane

0xd5ce,	// (0x0003dba8) cell_tb_ext_pane_ParamLimits

0xd5ce,	// (0x0003dba8) cell_tb_ext_pane

0xd5e5,	// (0x0003dbbf) cell_tb_ext_pane_g1_ParamLimits

0xd5e5,	// (0x0003dbbf) cell_tb_ext_pane_g1

0xd602,	// (0x0003dbdc) cell_tb_ext_pane_t1

0x23ef,	// (0x000329c9) list_highlight_pane_cp11_ParamLimits

0x23ef,	// (0x000329c9) list_highlight_pane_cp11

0x5ab4,	// (0x0003608e) popup_uni_indicator_window_ParamLimits

0x5ab4,	// (0x0003608e) popup_uni_indicator_window

0x28fa,	// (0x00032ed4) bg_popup_sub_pane_cp14

0xd61d,	// (0x0003dbf7) list_uniindi_pane

0xd629,	// (0x0003dc03) uniindi_top_pane

0x23ef,	// (0x000329c9) bg_uniindi_top_pane

0xd64a,	// (0x0003dc24) uniindi_top_pane_g1

0xd660,	// (0x0003dc3a) uniindi_top_pane_g2

0x0003,

0xfd2d,	// (0x00040307) uniindi_top_pane_g

0xd68a,	// (0x0003dc64) uniindi_top_pane_t1

0xd6b6,	// (0x0003dc90) list_single_uniindi_pane_ParamLimits

0xd6b6,	// (0x0003dc90) list_single_uniindi_pane

0xbcc5,	// (0x0003c29f) bg_uniindi_top_pane_g1

0xd6c8,	// (0x0003dca2) list_single_uniindi_pane_g1

0xd6db,	// (0x0003dcb5) list_single_uniindi_pane_t1

0x5920,	// (0x00035efa) control_bg_pane

0xd700,	// (0x0003dcda) bg_sctrl_sk_pane_cp1

0xd709,	// (0x0003dce3) bg_sctrl_sk_pane_cp2

0xd712,	// (0x0003dcec) control_bg_pane_g1

0xd71b,	// (0x0003dcf5) control_bg_pane_g2

0x0001,

0xfd36,	// (0x00040310) control_bg_pane_g

0xb76e,	// (0x0003bd48) cell_indicator_nsta_pane_g1_ParamLimits

0xb77c,	// (0x0003bd56) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9e,	// (0x00040078) cell_indicator_nsta_pane_g_ParamLimits

0x46e6,	// (0x00034cc0) form2_midp_time_pane_t1_ParamLimits

0x7371,	// (0x0003794b) main_idle_act4_pane_ParamLimits

0x7371,	// (0x0003794b) main_idle_act4_pane

0x783d,	// (0x00037e17) popup_tb_extension_window_ParamLimits

0xd5c0,	// (0x0003db9a) tb_ext_find_pane_ParamLimits

0xd5c0,	// (0x0003db9a) tb_ext_find_pane

0xd724,	// (0x0003dcfe) ai_gene_pane_1_cp1

0x7045,	// (0x0003761f) ai_gene_pane_2_cp1

0xd72c,	// (0x0003dd06) list_single_idle_plugin_calendar_pane

0xd735,	// (0x0003dd0f) list_single_idle_plugin_notification_pane

0xd73e,	// (0x0003dd18) list_single_idle_plugin_player_pane

0xd747,	// (0x0003dd21) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd747,	// (0x0003dd21) list_single_idle_plugin_shortcut_pane

0xd769,	// (0x0003dd43) main_idle_act4_pane_t1

0xd77b,	// (0x0003dd55) main_idle_act4_pane_t2

0x0001,

0xfd3b,	// (0x00040315) main_idle_act4_pane_t

0xd78d,	// (0x0003dd67) middle_sk_idle_act4_pane_ParamLimits

0xd78d,	// (0x0003dd67) middle_sk_idle_act4_pane

0xd7a3,	// (0x0003dd7d) popup_clock_digital_analogue_window_cp2

0xd7bd,	// (0x0003dd97) shortcut_wheel_idle_act4_pane_ParamLimits

0xd7bd,	// (0x0003dd97) shortcut_wheel_idle_act4_pane

0xbcc5,	// (0x0003c29f) shortcut_wheel_idle_act4_pane_g1

0xbcc5,	// (0x0003c29f) shortcut_wheel_idle_act4_pane_g2

0xbcc5,	// (0x0003c29f) shortcut_wheel_idle_act4_pane_g3

0xbcc5,	// (0x0003c29f) shortcut_wheel_idle_act4_pane_g4

0xbcc5,	// (0x0003c29f) shortcut_wheel_idle_act4_pane_g5

0xd7d1,	// (0x0003ddab) shortcut_wheel_idle_act4_pane_g6

0xd7d9,	// (0x0003ddb3) shortcut_wheel_idle_act4_pane_g7

0xd7e1,	// (0x0003ddbb) shortcut_wheel_idle_act4_pane_g8

0xd7e9,	// (0x0003ddc3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd40,	// (0x0004031a) shortcut_wheel_idle_act4_pane_g

0xbf28,	// (0x0003c502) middle_sk_idle_act4_pane_g1_ParamLimits

0xbf28,	// (0x0003c502) middle_sk_idle_act4_pane_g1

0xd84d,	// (0x0003de27) middle_sk_idle_act4_pane_g2_ParamLimits

0xd84d,	// (0x0003de27) middle_sk_idle_act4_pane_g2

0x0001,

0xfd63,	// (0x0004033d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd63,	// (0x0004033d) middle_sk_idle_act4_pane_g

0xd859,	// (0x0003de33) middle_sk_idle_act4_pane_t1_ParamLimits

0xd859,	// (0x0003de33) middle_sk_idle_act4_pane_t1

0xd876,	// (0x0003de50) grid_ai_shortcut_pane_ParamLimits

0xd876,	// (0x0003de50) grid_ai_shortcut_pane

0xd88f,	// (0x0003de69) list_highlight_pane_cp16_ParamLimits

0xd88f,	// (0x0003de69) list_highlight_pane_cp16

0xd89c,	// (0x0003de76) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd89c,	// (0x0003de76) list_single_idle_plugin_shortcut_pane_g1

0xd8a8,	// (0x0003de82) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd8a8,	// (0x0003de82) list_single_idle_plugin_shortcut_pane_g2

0xd8c2,	// (0x0003de9c) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd8c2,	// (0x0003de9c) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd68,	// (0x00040342) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd68,	// (0x00040342) list_single_idle_plugin_shortcut_pane_g

0xd8d5,	// (0x0003deaf) cell_ai_shortcut_pane_ParamLimits

0xd8d5,	// (0x0003deaf) cell_ai_shortcut_pane

0xd8f8,	// (0x0003ded2) cell_ai_shortcut_pane_g1_ParamLimits

0xd8f8,	// (0x0003ded2) cell_ai_shortcut_pane_g1

0xd724,	// (0x0003dcfe) ai_gene_pane_1_cp2

0xd91a,	// (0x0003def4) ai_gene_pane_2_cp2

0xd922,	// (0x0003defc) list_highlight_pane_cp15

0xd92b,	// (0x0003df05) list_single_idle_plugin_calendar_pane_g1

0xd922,	// (0x0003defc) list_highlight_pane_cp17

0xd933,	// (0x0003df0d) list_single_idle_plugin_calendar_pane_g1_copy1

0xd93b,	// (0x0003df15) list_single_idle_plugin_player_pane_g1

0xb0a1,	// (0x0003b67b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6f,	// (0x00040349) list_single_idle_plugin_player_pane_g

0xd943,	// (0x0003df1d) list_single_idle_plugin_player_pane_t1

0xd951,	// (0x0003df2b) list_single_idle_plugin_player_pane_t2

0xd95f,	// (0x0003df39) list_single_idle_plugin_player_pane_t3

0xd96d,	// (0x0003df47) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd74,	// (0x0004034e) list_single_idle_plugin_player_pane_t

0xd97b,	// (0x0003df55) wait_bar_pane_cp15

0xd983,	// (0x0003df5d) grid_ai_notification_pane

0xb0a1,	// (0x0003b67b) list_single_idle_plugin_notification_pane_g1

0xd98c,	// (0x0003df66) cell_ai_notification_pane_ParamLimits

0xd98c,	// (0x0003df66) cell_ai_notification_pane

0xd999,	// (0x0003df73) cell_ai_notification_pane_g1

0xd9a1,	// (0x0003df7b) cell_ai_notification_pane_t1

0xd9af,	// (0x0003df89) tb_ext_find_button_pane

0xd9b7,	// (0x0003df91) tb_ext_find_pane_g1

0xd9bf,	// (0x0003df99) tb_ext_find_pane_t1

0x2dc2,	// (0x0003339c) tb_ext_find_button_pane_g1

0xd9cd,	// (0x0003dfa7) tb_ext_find_button_pane_g2

0x0001,

0xfd7d,	// (0x00040357) tb_ext_find_button_pane_g

0xd769,	// (0x0003dd43) main_idle_act4_pane_t1_ParamLimits

0xd77b,	// (0x0003dd55) main_idle_act4_pane_t2_ParamLimits

0xfd3b,	// (0x00040315) main_idle_act4_pane_t_ParamLimits

0xd7a3,	// (0x0003dd7d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd7b1,	// (0x0003dd8b) sat_plugin_idle_act4_pane_ParamLimits

0xd7b1,	// (0x0003dd8b) sat_plugin_idle_act4_pane

0xd9d6,	// (0x0003dfb0) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd9d6,	// (0x0003dfb0) sat_plugin_idle_act4_pane_t1

0xd9e9,	// (0x0003dfc3) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd9e9,	// (0x0003dfc3) sat_plugin_idle_act4_pane_t2

0xd9fc,	// (0x0003dfd6) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd9fc,	// (0x0003dfd6) sat_plugin_idle_act4_pane_t3

0xda0f,	// (0x0003dfe9) sat_plugin_idle_act4_pane_t4_ParamLimits

0xda0f,	// (0x0003dfe9) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd82,	// (0x0004035c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd82,	// (0x0004035c) sat_plugin_idle_act4_pane_t

0x59e5,	// (0x00035fbf) popup_battery_window_ParamLimits

0x59e5,	// (0x00035fbf) popup_battery_window

0x23ef,	// (0x000329c9) bg_popup_sub_pane_cp25_ParamLimits

0x23ef,	// (0x000329c9) bg_popup_sub_pane_cp25

0xda22,	// (0x0003dffc) popup_battery_window_g1_ParamLimits

0xda22,	// (0x0003dffc) popup_battery_window_g1

0xda2e,	// (0x0003e008) popup_battery_window_t1_ParamLimits

0xda2e,	// (0x0003e008) popup_battery_window_t1

0xda40,	// (0x0003e01a) popup_battery_window_t2_ParamLimits

0xda40,	// (0x0003e01a) popup_battery_window_t2

0x0001,

0xfd8b,	// (0x00040365) popup_battery_window_t_ParamLimits

0xfd8b,	// (0x00040365) popup_battery_window_t

0x6f0f,	// (0x000374e9) midp_canvas_pane_ParamLimits

0x6f87,	// (0x00037561) midp_keypad_pane_ParamLimits

0x6f87,	// (0x00037561) midp_keypad_pane

0x9186,	// (0x00039760) main_midp_pane_ParamLimits

0xb7d8,	// (0x0003bdb2) signal_pane_g2_cp_ParamLimits

0xda5d,	// (0x0003e037) aid_size_cell_midp_keypad_ParamLimits

0xda5d,	// (0x0003e037) aid_size_cell_midp_keypad

0xda77,	// (0x0003e051) midp_keyp_game_grid_pane_ParamLimits

0xda77,	// (0x0003e051) midp_keyp_game_grid_pane

0xda97,	// (0x0003e071) midp_keyp_rocker_pane_ParamLimits

0xda97,	// (0x0003e071) midp_keyp_rocker_pane

0xdac6,	// (0x0003e0a0) midp_keyp_sk_left_pane_ParamLimits

0xdac6,	// (0x0003e0a0) midp_keyp_sk_left_pane

0xdb22,	// (0x0003e0fc) midp_keyp_sk_right_pane_ParamLimits

0xdb22,	// (0x0003e0fc) midp_keyp_sk_right_pane

0x224c,	// (0x00032826) bg_button_pane_cp03

0xdb7e,	// (0x0003e158) midp_keyp_sk_left_pane_g1

0x224c,	// (0x00032826) bg_button_pane_cp04

0xdb7e,	// (0x0003e158) midp_keyp_sk_right_pane_g1

0xbcc5,	// (0x0003c29f) midp_keyp_rocker_pane_g1

0xdb86,	// (0x0003e160) keyp_game_cell_pane_ParamLimits

0xdb86,	// (0x0003e160) keyp_game_cell_pane

0x224c,	// (0x00032826) bg_button_pane_cp02

0xdb99,	// (0x0003e173) keyp_game_cell_pane_g1

0x5a2f,	// (0x00036009) popup_fep_vkb2_window_ParamLimits

0x5a2f,	// (0x00036009) popup_fep_vkb2_window

0x85a0,	// (0x00038b7a) aid_size_cell_vkb2_ParamLimits

0x85a0,	// (0x00038b7a) aid_size_cell_vkb2

0x85f4,	// (0x00038bce) popup_fep_vkb2_window_g1_ParamLimits

0x85f4,	// (0x00038bce) popup_fep_vkb2_window_g1

0x863c,	// (0x00038c16) vkb2_area_bottom_pane_ParamLimits

0x863c,	// (0x00038c16) vkb2_area_bottom_pane

0x8690,	// (0x00038c6a) vkb2_area_keypad_pane_ParamLimits

0x8690,	// (0x00038c6a) vkb2_area_keypad_pane

0x86d6,	// (0x00038cb0) vkb2_area_top_pane_ParamLimits

0x86d6,	// (0x00038cb0) vkb2_area_top_pane

0x8750,	// (0x00038d2a) vkb2_top_entry_pane_ParamLimits

0x8750,	// (0x00038d2a) vkb2_top_entry_pane

0x877a,	// (0x00038d54) vkb2_top_grid_left_pane_ParamLimits

0x877a,	// (0x00038d54) vkb2_top_grid_left_pane

0x8798,	// (0x00038d72) vkb2_top_grid_right_pane_ParamLimits

0x8798,	// (0x00038d72) vkb2_top_grid_right_pane

0x87b6,	// (0x00038d90) vkb2_cell_keypad_pane_ParamLimits

0x87b6,	// (0x00038d90) vkb2_cell_keypad_pane

0x8887,	// (0x00038e61) vkb2_area_bottom_grid_pane_ParamLimits

0x8887,	// (0x00038e61) vkb2_area_bottom_grid_pane

0x88ad,	// (0x00038e87) vkb2_area_bottom_pane_g1_ParamLimits

0x88ad,	// (0x00038e87) vkb2_area_bottom_pane_g1

0x88d1,	// (0x00038eab) vkb2_area_bottom_pane_g2_ParamLimits

0x88d1,	// (0x00038eab) vkb2_area_bottom_pane_g2

0x88ff,	// (0x00038ed9) vkb2_area_bottom_pane_g3_ParamLimits

0x88ff,	// (0x00038ed9) vkb2_area_bottom_pane_g3

0x0002,

0xfd90,	// (0x0004036a) vkb2_area_bottom_pane_g_ParamLimits

0xfd90,	// (0x0004036a) vkb2_area_bottom_pane_g

0x8960,	// (0x00038f3a) vkb2_top_cell_left_pane_ParamLimits

0x8960,	// (0x00038f3a) vkb2_top_cell_left_pane

0xdbaa,	// (0x0003e184) vkb2_top_entry_pane_g1_ParamLimits

0xdbaa,	// (0x0003e184) vkb2_top_entry_pane_g1

0xdbb8,	// (0x0003e192) vkb2_top_entry_pane_t1_ParamLimits

0xdbb8,	// (0x0003e192) vkb2_top_entry_pane_t1

0xdbea,	// (0x0003e1c4) vkb2_top_entry_pane_t2_ParamLimits

0xdbea,	// (0x0003e1c4) vkb2_top_entry_pane_t2

0xdc1c,	// (0x0003e1f6) vkb2_top_entry_pane_t3_ParamLimits

0xdc1c,	// (0x0003e1f6) vkb2_top_entry_pane_t3

0x0002,

0xfd97,	// (0x00040371) vkb2_top_entry_pane_t_ParamLimits

0xfd97,	// (0x00040371) vkb2_top_entry_pane_t

0x89ad,	// (0x00038f87) vkb2_top_grid_right_pane_g1_ParamLimits

0x89ad,	// (0x00038f87) vkb2_top_grid_right_pane_g1

0x89c3,	// (0x00038f9d) vkb2_top_grid_right_pane_g2_ParamLimits

0x89c3,	// (0x00038f9d) vkb2_top_grid_right_pane_g2

0x89db,	// (0x00038fb5) vkb2_top_grid_right_pane_g3_ParamLimits

0x89db,	// (0x00038fb5) vkb2_top_grid_right_pane_g3

0x89f3,	// (0x00038fcd) vkb2_top_grid_right_pane_g4_ParamLimits

0x89f3,	// (0x00038fcd) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9e,	// (0x00040378) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9e,	// (0x00040378) vkb2_top_grid_right_pane_g

0x8a09,	// (0x00038fe3) vkb2_top_cell_left_pane_g1

0x8a20,	// (0x00038ffa) vkb2_cell_keypad_pane_g1_ParamLimits

0x8a20,	// (0x00038ffa) vkb2_cell_keypad_pane_g1

0xdc40,	// (0x0003e21a) vkb2_cell_keypad_pane_t1_ParamLimits

0xdc40,	// (0x0003e21a) vkb2_cell_keypad_pane_t1

0x8a2e,	// (0x00039008) vkb2_cell_bottom_grid_pane_ParamLimits

0x8a2e,	// (0x00039008) vkb2_cell_bottom_grid_pane

0x8a67,	// (0x00039041) vkb2_cell_bottom_grid_pane_g1

0xd7f1,	// (0x0003ddcb) aid_call2_pane_cp02

0xd7f9,	// (0x0003ddd3) aid_call_pane_cp02

0xd801,	// (0x0003dddb) clock_digital_number_pane_cp10

0xd809,	// (0x0003dde3) clock_digital_number_pane_cp11

0xd811,	// (0x0003ddeb) clock_digital_number_pane_cp12

0xd819,	// (0x0003ddf3) clock_digital_number_pane_cp13

0xd821,	// (0x0003ddfb) clock_digital_separator_pane_cp10

0x2dc2,	// (0x0003339c) popup_clock_digital_analogue_window_cp2_g1

0x2dc2,	// (0x0003339c) popup_clock_digital_analogue_window_cp2_g2

0xd829,	// (0x0003de03) popup_clock_digital_analogue_window_cp2_g3

0x2dc2,	// (0x0003339c) popup_clock_digital_analogue_window_cp2_g4

0xd829,	// (0x0003de03) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd53,	// (0x0004032d) popup_clock_digital_analogue_window_cp2_g

0xd831,	// (0x0003de0b) popup_clock_digital_analogue_window_cp2_t1

0xd83f,	// (0x0003de19) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5e,	// (0x00040338) popup_clock_digital_analogue_window_cp2_t

0xbcc5,	// (0x0003c29f) clock_digital_number_pane_cp10_g1

0xbcc5,	// (0x0003c29f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3a,	// (0x00040114) clock_digital_number_pane_cp10_g

0xbcc5,	// (0x0003c29f) clock_digital_separator_pane_cp10_g1

0xbcc5,	// (0x0003c29f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3a,	// (0x00040114) clock_digital_separator_pane_cp10_g

0xd66c,	// (0x0003dc46) uniindi_top_pane_g3

0xd67d,	// (0x0003dc57) uniindi_top_pane_g4

0x8841,	// (0x00038e1b) vkb2_row_keypad_pane_ParamLimits

0x8841,	// (0x00038e1b) vkb2_row_keypad_pane

0x8a83,	// (0x0003905d) vkb2_cell_t_keypad_pane_ParamLimits

0x8a83,	// (0x0003905d) vkb2_cell_t_keypad_pane

0x8a93,	// (0x0003906d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8a93,	// (0x0003906d) vkb2_cell_t_keypad_pane_cp08

0x8aa8,	// (0x00039082) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8aa8,	// (0x00039082) vkb2_cell_t_keypad_pane_cp09

0x8abc,	// (0x00039096) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8abc,	// (0x00039096) vkb2_cell_t_keypad_pane_cp01

0x8acd,	// (0x000390a7) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8acd,	// (0x000390a7) vkb2_cell_t_keypad_pane_cp02

0x8ade,	// (0x000390b8) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8ade,	// (0x000390b8) vkb2_cell_t_keypad_pane_cp03

0x8aef,	// (0x000390c9) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8aef,	// (0x000390c9) vkb2_cell_t_keypad_pane_cp04

0x8b00,	// (0x000390da) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8b00,	// (0x000390da) vkb2_cell_t_keypad_pane_cp05

0x8b11,	// (0x000390eb) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8b11,	// (0x000390eb) vkb2_cell_t_keypad_pane_cp06

0x8b24,	// (0x000390fe) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8b24,	// (0x000390fe) vkb2_cell_t_keypad_pane_cp07

0x8b39,	// (0x00039113) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8b39,	// (0x00039113) vkb2_cell_t_keypad_pane_cp10

0x8176,	// (0x00038750) vkb2_cell_t_keypad_pane_g1

0xdc57,	// (0x0003e231) vkb2_cell_t_keypad_pane_t1

0x5920,	// (0x00035efa) popup_grid_graphic2_window

0xdc69,	// (0x0003e243) aid_size_cell_graphic2_ParamLimits

0xdc69,	// (0x0003e243) aid_size_cell_graphic2

0xdca1,	// (0x0003e27b) bg_popup_window_pane_cp21_ParamLimits

0xdca1,	// (0x0003e27b) bg_popup_window_pane_cp21

0xdcaf,	// (0x0003e289) graphic2_pages_pane_ParamLimits

0xdcaf,	// (0x0003e289) graphic2_pages_pane

0xdcf5,	// (0x0003e2cf) grid_graphic2_control_pane_ParamLimits

0xdcf5,	// (0x0003e2cf) grid_graphic2_control_pane

0xdd33,	// (0x0003e30d) grid_graphic2_pane_ParamLimits

0xdd33,	// (0x0003e30d) grid_graphic2_pane

0xdda9,	// (0x0003e383) cell_graphic2_pane

0x5920,	// (0x00035efa) main_comp_mode_pane

0xced3,	// (0x0003d4ad) list_ai3_gene_pane_ParamLimits

0xd29f,	// (0x0003d879) bg_popup_window_pane_cp19_ParamLimits

0xd2ab,	// (0x0003d885) bg_touch_area_indi_pane_ParamLimits

0xd2ab,	// (0x0003d885) bg_touch_area_indi_pane

0xd2c1,	// (0x0003d89b) bg_touch_area_indi_pane_cp01_ParamLimits

0xd2c1,	// (0x0003d89b) bg_touch_area_indi_pane_cp01

0xd2d7,	// (0x0003d8b1) bg_touch_area_indi_pane_cp02_ParamLimits

0xd2d7,	// (0x0003d8b1) bg_touch_area_indi_pane_cp02

0xd2f1,	// (0x0003d8cb) bg_touch_area_indi_pane_cp03_ParamLimits

0xd2f1,	// (0x0003d8cb) bg_touch_area_indi_pane_cp03

0xd30b,	// (0x0003d8e5) popup_slider_window_g1_ParamLimits

0xd327,	// (0x0003d901) popup_slider_window_g2_ParamLimits

0xd343,	// (0x0003d91d) popup_slider_window_g3_ParamLimits

0xfce8,	// (0x000402c2) popup_slider_window_g_ParamLimits

0xd3a9,	// (0x0003d983) popup_slider_window_t1_ParamLimits

0xd41d,	// (0x0003d9f7) small_volume_slider_vertical_pane_ParamLimits

0xdda9,	// (0x0003e383) cell_graphic2_pane_ParamLimits

0xddfe,	// (0x0003e3d8) bg_button_pane_cp10_ParamLimits

0xddfe,	// (0x0003e3d8) bg_button_pane_cp10

0xde13,	// (0x0003e3ed) bg_button_pane_cp11_ParamLimits

0xde13,	// (0x0003e3ed) bg_button_pane_cp11

0xde28,	// (0x0003e402) graphic2_pages_pane_g1_ParamLimits

0xde28,	// (0x0003e402) graphic2_pages_pane_g1

0xde43,	// (0x0003e41d) graphic2_pages_pane_g2_ParamLimits

0xde43,	// (0x0003e41d) graphic2_pages_pane_g2

0x0001,

0xfdac,	// (0x00040386) graphic2_pages_pane_g_ParamLimits

0xfdac,	// (0x00040386) graphic2_pages_pane_g

0xde5b,	// (0x0003e435) graphic2_pages_pane_t1_ParamLimits

0xde5b,	// (0x0003e435) graphic2_pages_pane_t1

0xde71,	// (0x0003e44b) cell_graphic2_control_pane_ParamLimits

0xde71,	// (0x0003e44b) cell_graphic2_control_pane

0xde91,	// (0x0003e46b) cell_graphic2_pane_g1_ParamLimits

0xde91,	// (0x0003e46b) cell_graphic2_pane_g1

0xde9e,	// (0x0003e478) cell_graphic2_pane_g2_ParamLimits

0xde9e,	// (0x0003e478) cell_graphic2_pane_g2

0xdeab,	// (0x0003e485) cell_graphic2_pane_g3_ParamLimits

0xdeab,	// (0x0003e485) cell_graphic2_pane_g3

0xdeb8,	// (0x0003e492) cell_graphic2_pane_g4_ParamLimits

0xdeb8,	// (0x0003e492) cell_graphic2_pane_g4

0xdec5,	// (0x0003e49f) cell_graphic2_pane_g5_ParamLimits

0xdec5,	// (0x0003e49f) cell_graphic2_pane_g5

0x0004,

0xfdb1,	// (0x0004038b) cell_graphic2_pane_g_ParamLimits

0xfdb1,	// (0x0004038b) cell_graphic2_pane_g

0xdee0,	// (0x0003e4ba) cell_graphic2_pane_t1_ParamLimits

0xdee0,	// (0x0003e4ba) cell_graphic2_pane_t1

0x972a,	// (0x00039d04) grid_highlight_pane_cp11_ParamLimits

0x972a,	// (0x00039d04) grid_highlight_pane_cp11

0x23ef,	// (0x000329c9) bg_button_pane_cp05

0xdf17,	// (0x0003e4f1) cell_graphic2_control_pane_g1

0xbcc5,	// (0x0003c29f) bg_touch_area_indi_pane_g1

0xdf3f,	// (0x0003e519) aid_cmod_rocker_key_size

0xdf49,	// (0x0003e523) aid_cmode_itu_key_size

0xdf53,	// (0x0003e52d) main_cmode_video_pane

0xdf5d,	// (0x0003e537) main_comp_mode_itu_pane

0xdf69,	// (0x0003e543) main_comp_mode_rocker_pane

0xdf75,	// (0x0003e54f) cell_cmode_rocker_pane_ParamLimits

0xdf75,	// (0x0003e54f) cell_cmode_rocker_pane

0xdf89,	// (0x0003e563) cell_cmode_itu_pane_ParamLimits

0xdf89,	// (0x0003e563) cell_cmode_itu_pane

0x28fa,	// (0x00032ed4) bg_button_pane_cp06_ParamLimits

0x28fa,	// (0x00032ed4) bg_button_pane_cp06

0xbf28,	// (0x0003c502) cell_cmode_rocker_pane_g1_ParamLimits

0xbf28,	// (0x0003c502) cell_cmode_rocker_pane_g1

0xd4c4,	// (0x0003da9e) cell_cmode_rocker_pane_g2_ParamLimits

0xd4c4,	// (0x0003da9e) cell_cmode_rocker_pane_g2

0x0001,

0xfdc1,	// (0x0004039b) cell_cmode_rocker_pane_g_ParamLimits

0xfdc1,	// (0x0004039b) cell_cmode_rocker_pane_g

0x224c,	// (0x00032826) bg_button_pane_cp07

0xdfa0,	// (0x0003e57a) cell_cmode_itu_pane_g1

0xdfa9,	// (0x0003e583) cell_cmode_itu_pane_t1

0xdfb7,	// (0x0003e591) cell_cmode_itu_pane_t2

0x0001,

0xfdc6,	// (0x000403a0) cell_cmode_itu_pane_t

0xd6f0,	// (0x0003dcca) aid_touch_ctrl_left

0xd6f8,	// (0x0003dcd2) aid_touch_ctrl_right

0x224c,	// (0x00032826) compa_mode_pane

0xdfc5,	// (0x0003e59f) aid_cmod_rocker_key_size_cp

0xdfcf,	// (0x0003e5a9) aid_cmode_itu_key_size_cp

0xdfd9,	// (0x0003e5b3) compa_mode_pane_g1

0xdfe1,	// (0x0003e5bb) compa_mode_pane_g2

0xdfe9,	// (0x0003e5c3) compa_mode_pane_g3

0x0002,

0xfdcb,	// (0x000403a5) compa_mode_pane_g

0xdff1,	// (0x0003e5cb) main_comp_mode_itu_pane_cp

0xdff9,	// (0x0003e5d3) main_comp_mode_rocker_pane_cp

0xe001,	// (0x0003e5db) cell_cmode_itu_pane_cp_ParamLimits

0xe001,	// (0x0003e5db) cell_cmode_itu_pane_cp

0xe016,	// (0x0003e5f0) cell_cmode_rocker_pane_cp_ParamLimits

0xe016,	// (0x0003e5f0) cell_cmode_rocker_pane_cp

0x28fa,	// (0x00032ed4) bg_button_pane_cp06_cp_ParamLimits

0x28fa,	// (0x00032ed4) bg_button_pane_cp06_cp

0xbf28,	// (0x0003c502) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbf28,	// (0x0003c502) cell_cmode_rocker_pane_g1_cp

0xbcc5,	// (0x0003c29f) cell_cmode_rocker_pane_g2_cp

0x224c,	// (0x00032826) bg_button_pane_cp07_cp

0xe028,	// (0x0003e602) cell_cmode_itu_pane_g1_cp

0xe031,	// (0x0003e60b) cell_cmode_itu_pane_t1_cp

0xe031,	// (0x0003e60b) cell_cmode_itu_pane_t2_cp

0xabee,	// (0x0003b1c8) settings_code_pane_cp2

0x22bc,	// (0x00032896) bg_popup_window_pane_cp3_ParamLimits

0x2603,	// (0x00032bdd) heading_pane_cp3_ParamLimits

0x260f,	// (0x00032be9) listscroll_popup_graphic_pane_ParamLimits

0x7f09,	// (0x000384e3) fep_hwr_aid_pane_ParamLimits

0x84f9,	// (0x00038ad3) aid_touch_sctrl_top_ParamLimits

0x8514,	// (0x00038aee) sctrl_sk_top_pane_g1_ParamLimits

0x8176,	// (0x00038750) sctrl_sk_top_pane_g2_ParamLimits

0xfd01,	// (0x000402db) sctrl_sk_top_pane_g_ParamLimits

0x8521,	// (0x00038afb) sctrl_sk_top_pane_t1_ParamLimits

0x84f9,	// (0x00038ad3) aid_touch_sctrl_bottom_ParamLimits

0x8521,	// (0x00038afb) sctrl_sk_bottom_pane_t1_ParamLimits

0xd636,	// (0x0003dc10) aid_area_touch_clock

0x8718,	// (0x00038cf2) aid_vkb2_area_top_pane_cell_ParamLimits

0x8718,	// (0x00038cf2) aid_vkb2_area_top_pane_cell

0x8863,	// (0x00038e3d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8863,	// (0x00038e3d) aid_vkb2_area_bottom_pane_cell

0xdba2,	// (0x0003e17c) popup_char_count_window

0xe03f,	// (0x0003e619) popup_char_count_window_g1

0xe048,	// (0x0003e622) popup_char_count_window_g2

0xe051,	// (0x0003e62b) popup_char_count_window_g3

0x0002,

0xfdd2,	// (0x000403ac) popup_char_count_window_g

0xe05a,	// (0x0003e634) popup_char_count_window_t1

0x85d2,	// (0x00038bac) popup_fep_char_preview_window_ParamLimits

0x85d2,	// (0x00038bac) popup_fep_char_preview_window

0x8736,	// (0x00038d10) vkb2_top_candi_pane_ParamLimits

0x8736,	// (0x00038d10) vkb2_top_candi_pane

0xe068,	// (0x0003e642) cell_vkb2_top_candi_pane_ParamLimits

0xe068,	// (0x0003e642) cell_vkb2_top_candi_pane

0x8b4e,	// (0x00039128) bg_popup_fep_char_preview_window_ParamLimits

0x8b4e,	// (0x00039128) bg_popup_fep_char_preview_window

0x8b5c,	// (0x00039136) popup_fep_char_preview_window_t1_ParamLimits

0x8b5c,	// (0x00039136) popup_fep_char_preview_window_t1

0xe0b9,	// (0x0003e693) bg_popup_fep_char_preview_window_g1

0xe0c1,	// (0x0003e69b) bg_popup_fep_char_preview_window_g2

0xe0c9,	// (0x0003e6a3) bg_popup_fep_char_preview_window_g3

0xe0d1,	// (0x0003e6ab) bg_popup_fep_char_preview_window_g4

0xe0d9,	// (0x0003e6b3) bg_popup_fep_char_preview_window_g5

0x8b96,	// (0x00039170) bg_popup_fep_char_preview_window_g6

0xe0e1,	// (0x0003e6bb) bg_popup_fep_char_preview_window_g7

0xe0e9,	// (0x0003e6c3) bg_popup_fep_char_preview_window_g8

0xe0f1,	// (0x0003e6cb) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd9,	// (0x000403b3) bg_popup_fep_char_preview_window_g

0x8176,	// (0x00038750) cell_vkb2_top_candi_pane_g1_ParamLimits

0x8176,	// (0x00038750) cell_vkb2_top_candi_pane_g1

0x8184,	// (0x0003875e) cell_vkb2_top_candi_pane_g2_ParamLimits

0x8184,	// (0x0003875e) cell_vkb2_top_candi_pane_g2

0xcbdd,	// (0x0003d1b7) cell_vkb2_top_candi_pane_g3_ParamLimits

0xcbdd,	// (0x0003d1b7) cell_vkb2_top_candi_pane_g3

0x8b9e,	// (0x00039178) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8b9e,	// (0x00039178) cell_vkb2_top_candi_pane_g4

0xc447,	// (0x0003ca21) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc447,	// (0x0003ca21) cell_vkb2_top_candi_pane_g5

0x8bbf,	// (0x00039199) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8bbf,	// (0x00039199) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdec,	// (0x000403c6) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdec,	// (0x000403c6) cell_vkb2_top_candi_pane_g

0x8bcd,	// (0x000391a7) cell_vkb2_top_candi_pane_t1

0x7cf5,	// (0x000382cf) aid_size_touch_slider_mark_ParamLimits

0x7cf5,	// (0x000382cf) aid_size_touch_slider_mark

0xdce5,	// (0x0003e2bf) grid_graphic2_catg_pane_ParamLimits

0xdce5,	// (0x0003e2bf) grid_graphic2_catg_pane

0xdd83,	// (0x0003e35d) popup_grid_graphic2_window_t1_ParamLimits

0xdd83,	// (0x0003e35d) popup_grid_graphic2_window_t1

0xdd95,	// (0x0003e36f) popup_grid_graphic2_window_t2_ParamLimits

0xdd95,	// (0x0003e36f) popup_grid_graphic2_window_t2

0x0001,

0xfda7,	// (0x00040381) popup_grid_graphic2_window_t_ParamLimits

0xfda7,	// (0x00040381) popup_grid_graphic2_window_t

0x23ef,	// (0x000329c9) bg_button_pane_cp05_ParamLimits

0xdf17,	// (0x0003e4f1) cell_graphic2_control_pane_g1_ParamLimits

0xe0f9,	// (0x0003e6d3) cell_graphic2_catg_pane_ParamLimits

0xe0f9,	// (0x0003e6d3) cell_graphic2_catg_pane

0x224c,	// (0x00032826) bg_button_pane_cp12

0xe10b,	// (0x0003e6e5) cell_graphic2_catg_pane_g1

0xd602,	// (0x0003dbdc) cell_tb_ext_pane_t1_ParamLimits

0x8980,	// (0x00038f5a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8980,	// (0x00038f5a) vkb2_top_cell_right_narrow_pane

0x8998,	// (0x00038f72) vkb2_top_cell_right_wide_pane_ParamLimits

0x8998,	// (0x00038f72) vkb2_top_cell_right_wide_pane

0x7efb,	// (0x000384d5) bg_vkb2_func_pane_ParamLimits

0x7efb,	// (0x000384d5) bg_vkb2_func_pane

0x8a09,	// (0x00038fe3) vkb2_top_cell_left_pane_g1_ParamLimits

0x7efb,	// (0x000384d5) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7efb,	// (0x000384d5) bg_vkb2_fuc_pane_cp03

0x8a67,	// (0x00039041) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x96be,	// (0x00039c98) bg_vkb2_func_pane_g1

0x96c6,	// (0x00039ca0) bg_vkb2_func_pane_g2

0x96d6,	// (0x00039cb0) bg_vkb2_func_pane_g3

0x96ce,	// (0x00039ca8) bg_vkb2_func_pane_g4

0x96de,	// (0x00039cb8) bg_vkb2_func_pane_g5

0x96e6,	// (0x00039cc0) bg_vkb2_func_pane_g6

0x96ee,	// (0x00039cc8) bg_vkb2_func_pane_g7

0x96f6,	// (0x00039cd0) bg_vkb2_func_pane_g8

0x96b6,	// (0x00039c90) bg_vkb2_func_pane_g9

0x0008,

0xfdf9,	// (0x000403d3) bg_vkb2_func_pane_g

0x7efb,	// (0x000384d5) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7efb,	// (0x000384d5) bg_vkb2_fuc_pane_cp01

0x8a09,	// (0x00038fe3) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8a09,	// (0x00038fe3) vkb2_top_cell_right_wide_pane_g1

0x7efb,	// (0x000384d5) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7efb,	// (0x000384d5) bg_vkb2_fuc_pane_cp02

0x8a67,	// (0x00039041) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8a67,	// (0x00039041) vkb2_top_cell_right_narrow_pane_g1

0xd219,	// (0x0003d7f3) aid_touch_area_decrease_ParamLimits

0xd219,	// (0x0003d7f3) aid_touch_area_decrease

0xd23d,	// (0x0003d817) aid_touch_area_increase_ParamLimits

0xd23d,	// (0x0003d817) aid_touch_area_increase

0xd255,	// (0x0003d82f) aid_touch_area_mute_ParamLimits

0xd255,	// (0x0003d82f) aid_touch_area_mute

0xd271,	// (0x0003d84b) aid_touch_area_slider_ParamLimits

0xd271,	// (0x0003d84b) aid_touch_area_slider

0xd35f,	// (0x0003d939) popup_slider_window_g4_ParamLimits

0xd35f,	// (0x0003d939) popup_slider_window_g4

0xd377,	// (0x0003d951) popup_slider_window_g5_ParamLimits

0xd377,	// (0x0003d951) popup_slider_window_g5

0xd399,	// (0x0003d973) popup_slider_window_g6_ParamLimits

0xd399,	// (0x0003d973) popup_slider_window_g6

0xd3d7,	// (0x0003d9b1) popup_slider_window_t2_ParamLimits

0xd3d7,	// (0x0003d9b1) popup_slider_window_t2

0x0001,

0xfcf5,	// (0x000402cf) popup_slider_window_t_ParamLimits

0xfcf5,	// (0x000402cf) popup_slider_window_t

0xd3ef,	// (0x0003d9c9) slider_pane_ParamLimits

0xd3ef,	// (0x0003d9c9) slider_pane

0xe114,	// (0x0003e6ee) slider_pane_g1_ParamLimits

0xe114,	// (0x0003e6ee) slider_pane_g1

0xe128,	// (0x0003e702) slider_pane_g2_ParamLimits

0xe128,	// (0x0003e702) slider_pane_g2

0xe13e,	// (0x0003e718) slider_pane_g3_ParamLimits

0xe13e,	// (0x0003e718) slider_pane_g3

0x0003,

0xfe0c,	// (0x000403e6) slider_pane_g_ParamLimits

0xfe0c,	// (0x000403e6) slider_pane_g

0x789f,	// (0x00037e79) popup_tb_float_extension_window_ParamLimits

0x789f,	// (0x00037e79) popup_tb_float_extension_window

0xe16a,	// (0x0003e744) aid_size_cell_tb_float_ext

0x224c,	// (0x00032826) bg_popup_sub_window_cp28

0xe176,	// (0x0003e750) grid_tb_float_ext_pane

0xe182,	// (0x0003e75c) cell_tb_float_ext_pane_ParamLimits

0xe182,	// (0x0003e75c) cell_tb_float_ext_pane

0xe19e,	// (0x0003e778) cell_tb_float_ext_pane_g1

0xe1a7,	// (0x0003e781) grid_highlight_pane_cp12

0x8050,	// (0x0003862a) cell_last_hwr_side_pane_ParamLimits

0x8050,	// (0x0003862a) cell_last_hwr_side_pane

0xbcc5,	// (0x0003c29f) cell_last_hwr_side_pane_g1

0xe1b0,	// (0x0003e78a) cell_last_hwr_side_pane_g2

0x0001,

0xfe15,	// (0x000403ef) cell_last_hwr_side_pane_g

0x892f,	// (0x00038f09) vkb2_area_bottom_space_btn_pane_ParamLimits

0x892f,	// (0x00038f09) vkb2_area_bottom_space_btn_pane

0x8176,	// (0x00038750) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdc57,	// (0x0003e231) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8bcd,	// (0x000391a7) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8beb,	// (0x000391c5) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8beb,	// (0x000391c5) vkb2_area_bottom_space_btn_pane_g1

0x8c25,	// (0x000391ff) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8c25,	// (0x000391ff) vkb2_area_bottom_space_btn_pane_g2

0x8c5b,	// (0x00039235) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8c5b,	// (0x00039235) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1a,	// (0x000403f4) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1a,	// (0x000403f4) vkb2_area_bottom_space_btn_pane_g

0x7fc0,	// (0x0003859a) cel_fep_hwr_func_pane_ParamLimits

0x7fc0,	// (0x0003859a) cel_fep_hwr_func_pane

0x7ffc,	// (0x000385d6) cell_hwr_side_button_pane_ParamLimits

0x7ffc,	// (0x000385d6) cell_hwr_side_button_pane

0xd636,	// (0x0003dc10) aid_area_touch_clock_ParamLimits

0x23ef,	// (0x000329c9) bg_uniindi_top_pane_ParamLimits

0xd64a,	// (0x0003dc24) uniindi_top_pane_g1_ParamLimits

0xd660,	// (0x0003dc3a) uniindi_top_pane_g2_ParamLimits

0xd66c,	// (0x0003dc46) uniindi_top_pane_g3_ParamLimits

0xd67d,	// (0x0003dc57) uniindi_top_pane_g4_ParamLimits

0xfd2d,	// (0x00040307) uniindi_top_pane_g_ParamLimits

0xd68a,	// (0x0003dc64) uniindi_top_pane_t1_ParamLimits

0x23ef,	// (0x000329c9) bg_vkb2_func_pane_cp01_ParamLimits

0x23ef,	// (0x000329c9) bg_vkb2_func_pane_cp01

0xe1b9,	// (0x0003e793) cel_fep_hwr_func_pane_g1_ParamLimits

0xe1b9,	// (0x0003e793) cel_fep_hwr_func_pane_g1

0x23ef,	// (0x000329c9) bg_vkb2_func_pane_cp02_ParamLimits

0x23ef,	// (0x000329c9) bg_vkb2_func_pane_cp02

0xe1b9,	// (0x0003e793) cell_hwr_side_button_pane_g1_ParamLimits

0xe1b9,	// (0x0003e793) cell_hwr_side_button_pane_g1

0x953b,	// (0x00039b15) status_pane_g4_ParamLimits

0x953b,	// (0x00039b15) status_pane_g4

0x9555,	// (0x00039b2f) status_pane_t1

0xba78,	// (0x0003c052) form2_midp_gauge_slider_cont_pane

0xba80,	// (0x0003c05a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba92,	// (0x0003c06c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbaa4,	// (0x0003c07e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaed,	// (0x000400c7) form2_midp_gauge_slider_pane_t_ParamLimits

0xbab6,	// (0x0003c090) form2_midp_slider_pane_ParamLimits

0x8592,	// (0x00038b6c) aid_size_cell_func_vkb2_ParamLimits

0x8592,	// (0x00038b6c) aid_size_cell_func_vkb2

0xe156,	// (0x0003e730) slider_pane_g4_ParamLimits

0xe156,	// (0x0003e730) slider_pane_g4

0x8ca5,	// (0x0003927f) form2_midp_gauge_slider_pane_t2_cp01

0x8cb3,	// (0x0003928d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8cb3,	// (0x0003928d) form2_midp_gauge_slider_pane_t3_cp01

0x8cd0,	// (0x000392aa) form2_midp_slider_pane_cp01

0x224c,	// (0x00032826) navi_smil_pane

0xe1f2,	// (0x0003e7cc) navi_smil_pane_g1

0xe1fa,	// (0x0003e7d4) navi_smil_pane_t1

0xe1c7,	// (0x0003e7a1) form2_midp_slider_pane_g1

0xe1d0,	// (0x0003e7aa) form2_midp_slider_pane_g2

0xe1d8,	// (0x0003e7b2) form2_midp_slider_pane_g3

0xe1c7,	// (0x0003e7a1) form2_midp_slider_pane_g4

0xe1e0,	// (0x0003e7ba) form2_midp_slider_pane_g5

0x0004,

0xfe23,	// (0x000403fd) form2_midp_slider_pane_g

0x8c95,	// (0x0003926f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8c95,	// (0x0003926f) vkb2_area_bottom_space_btn_pane_g4

0x935a,	// (0x00039934) lc0_navi_pane_ParamLimits

0x935a,	// (0x00039934) lc0_navi_pane

0x93d6,	// (0x000399b0) lc0_stat_indi_pane_ParamLimits

0x93d6,	// (0x000399b0) lc0_stat_indi_pane

0x93ed,	// (0x000399c7) ls0_title_pane_ParamLimits

0x93ed,	// (0x000399c7) ls0_title_pane

0x28fa,	// (0x00032ed4) bg_popup_sub_pane_cp14_ParamLimits

0xd61d,	// (0x0003dbf7) list_uniindi_pane_ParamLimits

0xd629,	// (0x0003dc03) uniindi_top_pane_ParamLimits

0xd6c8,	// (0x0003dca2) list_single_uniindi_pane_g1_ParamLimits

0xd6db,	// (0x0003dcb5) list_single_uniindi_pane_t1_ParamLimits

0x8cd9,	// (0x000392b3) lc0_stat_clock_pane_ParamLimits

0x8cd9,	// (0x000392b3) lc0_stat_clock_pane

0xe208,	// (0x0003e7e2) lc0_stat_indi_pane_g1_ParamLimits

0xe208,	// (0x0003e7e2) lc0_stat_indi_pane_g1

0xe215,	// (0x0003e7ef) lc0_stat_indi_pane_g2_ParamLimits

0xe215,	// (0x0003e7ef) lc0_stat_indi_pane_g2

0x0001,

0xfe2e,	// (0x00040408) lc0_stat_indi_pane_g_ParamLimits

0xfe2e,	// (0x00040408) lc0_stat_indi_pane_g

0x8ce6,	// (0x000392c0) lc0_uni_indicator_pane_ParamLimits

0x8ce6,	// (0x000392c0) lc0_uni_indicator_pane

0xe222,	// (0x0003e7fc) ls0_title_pane_g1_ParamLimits

0xe222,	// (0x0003e7fc) ls0_title_pane_g1

0xe236,	// (0x0003e810) ls0_title_pane_t1_ParamLimits

0xe236,	// (0x0003e810) ls0_title_pane_t1

0x8cf3,	// (0x000392cd) lc0_uni_indicator_pane_g1_ParamLimits

0x8cf3,	// (0x000392cd) lc0_uni_indicator_pane_g1

0xe26c,	// (0x0003e846) lc0_stat_clock_pane_t1

0x5920,	// (0x00035efa) main_ai5_pane

0xe27a,	// (0x0003e854) ai5_sk_pane_ParamLimits

0xe27a,	// (0x0003e854) ai5_sk_pane

0xe287,	// (0x0003e861) cell_ai5_widget_pane_ParamLimits

0xe287,	// (0x0003e861) cell_ai5_widget_pane

0xe829,	// (0x0003ee03) aid_size_cell_widget_grid

0xe837,	// (0x0003ee11) bg_ai5_widget_pane_ParamLimits

0xe837,	// (0x0003ee11) bg_ai5_widget_pane

0xe8af,	// (0x0003ee89) cell_ai5_widget_pane_g2

0xe8c3,	// (0x0003ee9d) cell_ai5_widget_pane_g3

0xe8dd,	// (0x0003eeb7) cell_ai5_widget_pane_g4

0xe8ed,	// (0x0003eec7) cell_ai5_widget_pane_g5

0xe8fd,	// (0x0003eed7) cell_ai5_widget_pane_g6

0xe909,	// (0x0003eee3) cell_ai5_widget_pane_g7

0xe951,	// (0x0003ef2b) cell_ai5_widget_pane_t1_ParamLimits

0xe951,	// (0x0003ef2b) cell_ai5_widget_pane_t1

0xe96e,	// (0x0003ef48) cell_ai5_widget_pane_t2_ParamLimits

0xe96e,	// (0x0003ef48) cell_ai5_widget_pane_t2

0xe986,	// (0x0003ef60) cell_ai5_widget_pane_t3_ParamLimits

0xe986,	// (0x0003ef60) cell_ai5_widget_pane_t3

0xe99e,	// (0x0003ef78) cell_ai5_widget_pane_t4_ParamLimits

0xe99e,	// (0x0003ef78) cell_ai5_widget_pane_t4

0xe9c4,	// (0x0003ef9e) cell_ai5_widget_pane_t5_ParamLimits

0xe9c4,	// (0x0003ef9e) cell_ai5_widget_pane_t5

0xe9e4,	// (0x0003efbe) cell_ai5_widget_pane_t6_ParamLimits

0xe9e4,	// (0x0003efbe) cell_ai5_widget_pane_t6

0xe9f6,	// (0x0003efd0) cell_ai5_widget_pane_t7_ParamLimits

0xe9f6,	// (0x0003efd0) cell_ai5_widget_pane_t7

0xea0f,	// (0x0003efe9) cell_ai5_widget_pane_t8_ParamLimits

0xea0f,	// (0x0003efe9) cell_ai5_widget_pane_t8

0x0009,

0xfe48,	// (0x00040422) cell_ai5_widget_pane_t_ParamLimits

0xfe48,	// (0x00040422) cell_ai5_widget_pane_t

0xea6e,	// (0x0003f048) grid_ai5_widget_pane

0x28fa,	// (0x00032ed4) highlight_cell_ai5_widget_pane_ParamLimits

0x28fa,	// (0x00032ed4) highlight_cell_ai5_widget_pane

0xea7c,	// (0x0003f056) ai5_sk_left_pane

0xea86,	// (0x0003f060) ai5_sk_middle_pane

0xea90,	// (0x0003f06a) ai5_sk_right_pane

0xea9a,	// (0x0003f074) bg_ai5_widget_pane_g1_ParamLimits

0xea9a,	// (0x0003f074) bg_ai5_widget_pane_g1

0xeaa6,	// (0x0003f080) bg_ai5_widget_pane_g2_ParamLimits

0xeaa6,	// (0x0003f080) bg_ai5_widget_pane_g2

0xeab2,	// (0x0003f08c) bg_ai5_widget_pane_g3_ParamLimits

0xeab2,	// (0x0003f08c) bg_ai5_widget_pane_g3

0xeabe,	// (0x0003f098) bg_ai5_widget_pane_g4_ParamLimits

0xeabe,	// (0x0003f098) bg_ai5_widget_pane_g4

0xeaca,	// (0x0003f0a4) bg_ai5_widget_pane_g5_ParamLimits

0xeaca,	// (0x0003f0a4) bg_ai5_widget_pane_g5

0xead6,	// (0x0003f0b0) bg_ai5_widget_pane_g6_ParamLimits

0xead6,	// (0x0003f0b0) bg_ai5_widget_pane_g6

0xeae2,	// (0x0003f0bc) bg_ai5_widget_pane_g7_ParamLimits

0xeae2,	// (0x0003f0bc) bg_ai5_widget_pane_g7

0xeaee,	// (0x0003f0c8) bg_ai5_widget_pane_g8_ParamLimits

0xeaee,	// (0x0003f0c8) bg_ai5_widget_pane_g8

0xeafa,	// (0x0003f0d4) bg_ai5_widget_pane_g9_ParamLimits

0xeafa,	// (0x0003f0d4) bg_ai5_widget_pane_g9

0x0008,

0xfe5d,	// (0x00040437) bg_ai5_widget_pane_g_ParamLimits

0xfe5d,	// (0x00040437) bg_ai5_widget_pane_g

0xeb32,	// (0x0003f10c) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb32,	// (0x0003f10c) cell_shortcut_ai5_widget_pane

0x6efb,	// (0x000374d5) bg_cell_shortcut_ai5_widget_pane

0xeb45,	// (0x0003f11f) cell_grid_ai5_widget_pane_g1

0x6efb,	// (0x000374d5) highlight_cell_shortcut_ai5_widget_pane

0x96be,	// (0x00039c98) ai5_sk_left_pane_g1

0xeb4e,	// (0x0003f128) ai5_sk_left_pane_g2

0xeb56,	// (0x0003f130) ai5_sk_left_pane_g3

0xeb5e,	// (0x0003f138) ai5_sk_left_pane_g4

0x0003,

0xfe70,	// (0x0004044a) ai5_sk_left_pane_g

0xeb66,	// (0x0003f140) ai5_sk_left_pane_t1

0x96c6,	// (0x00039ca0) ai5_sk_right_pane_g1

0xeb74,	// (0x0003f14e) ai5_sk_right_pane_g2

0xeb7c,	// (0x0003f156) ai5_sk_right_pane_g3

0xeb84,	// (0x0003f15e) ai5_sk_right_pane_g4

0x0003,

0xfe79,	// (0x00040453) ai5_sk_right_pane_g

0xeb8c,	// (0x0003f166) ai5_sk_right_pane_t1

0x96c6,	// (0x00039ca0) ai5_sk_middle_pane_g1

0x96be,	// (0x00039c98) ai5_sk_middle_pane_g2

0x96de,	// (0x00039cb8) ai5_sk_middle_pane_g3

0xeb7c,	// (0x0003f156) ai5_sk_middle_pane_g4

0xeb56,	// (0x0003f130) ai5_sk_middle_pane_g5

0xeb9a,	// (0x0003f174) ai5_sk_middle_pane_g6

0xeba2,	// (0x0003f17c) ai5_sk_middle_pane_g7

0x0006,

0xfe82,	// (0x0004045c) ai5_sk_middle_pane_g

0x91e6,	// (0x000397c0) aid_touch_area_size_lc0_ParamLimits

0x91e6,	// (0x000397c0) aid_touch_area_size_lc0

0x81a5,	// (0x0003877f) cell_hwr_candidate_pane_t1_ParamLimits

0x9204,	// (0x000397de) aid_touch_navi_pane

0x94ed,	// (0x00039ac7) status_dt_navi_pane_ParamLimits

0x94ed,	// (0x00039ac7) status_dt_navi_pane

0x94fa,	// (0x00039ad4) status_dt_sta_pane_ParamLimits

0x94fa,	// (0x00039ad4) status_dt_sta_pane

0xebaa,	// (0x0003f184) dt_sta_controll_pane

0xebb7,	// (0x0003f191) dt_sta_indi_pane

0xebc8,	// (0x0003f1a2) dt_sta_title_pane

0x23ef,	// (0x000329c9) bg_dt_sta_indi_pane_ParamLimits

0x23ef,	// (0x000329c9) bg_dt_sta_indi_pane

0xebdb,	// (0x0003f1b5) dt_sta_battery_pane

0xebe3,	// (0x0003f1bd) dt_sta_indi_pane_g1

0xebec,	// (0x0003f1c6) dt_sta_indi_pane_g2

0xebf5,	// (0x0003f1cf) dt_sta_indi_pane_g3

0x0002,

0xfe91,	// (0x0004046b) dt_sta_indi_pane_g

0xebfe,	// (0x0003f1d8) dt_sta_signal_pane

0x28fa,	// (0x00032ed4) bg_dt_sta_title_pane_ParamLimits

0x28fa,	// (0x00032ed4) bg_dt_sta_title_pane

0xec07,	// (0x0003f1e1) dt_sta_title_pane_g1

0xec0f,	// (0x0003f1e9) dt_sta_title_pane_t1_ParamLimits

0xec0f,	// (0x0003f1e9) dt_sta_title_pane_t1

0x224c,	// (0x00032826) bg_dt_sta_control_pane

0xec24,	// (0x0003f1fe) dt_sta_controll_pane_g1

0xec2d,	// (0x0003f207) bg_dt_sta_title_pane_g1

0xec36,	// (0x0003f210) bg_dt_sta_title_pane_g2

0xec3f,	// (0x0003f219) bg_dt_sta_title_pane_g3

0x0002,

0xfe98,	// (0x00040472) bg_dt_sta_title_pane_g

0xbcc5,	// (0x0003c29f) bg_dt_sta_indi_pane_g1

0xec48,	// (0x0003f222) dt_sta_signal_pane_g1

0xec50,	// (0x0003f22a) dt_sta_signal_pane_g2

0x0001,

0xfe9f,	// (0x00040479) dt_sta_signal_pane_g

0xec58,	// (0x0003f232) dt_sta_battery_pane_g1

0xec61,	// (0x0003f23b) dt_sta_battery_pane_t1

0xbcc5,	// (0x0003c29f) bg_dt_sta_control_pane_g1

0x2e44,	// (0x0003341e) fep_china_uni_eep_pane

0x2e4c,	// (0x00033426) fep_china_uni_entry_pane_ParamLimits

0x2e5c,	// (0x00033436) popup_fep_china_uni_window_g1_ParamLimits

0x2e6c,	// (0x00033446) popup_fep_china_uni_window_g2_ParamLimits

0x2e6c,	// (0x00033446) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0003fcf2) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0003fcf2) popup_fep_china_uni_window_g

0xec70,	// (0x0003f24a) fep_china_uni_eep_pane_g1

0xec78,	// (0x0003f252) fep_china_uni_eep_pane_t1

0xe1e9,	// (0x0003e7c3) aid_touch_area_size_smil_player

0x9352,	// (0x0003992c) lc0_clock_pane

0x9549,	// (0x00039b23) status_pane_g5_ParamLimits

0x9549,	// (0x00039b23) status_pane_g5

0x7524,	// (0x00037afe) popup_keymap_window

0x950f,	// (0x00039ae9) status_icon_pane

0xe8c3,	// (0x0003ee9d) cell_ai5_widget_pane_g3_ParamLimits

0xe8dd,	// (0x0003eeb7) cell_ai5_widget_pane_g4_ParamLimits

0xe8ed,	// (0x0003eec7) cell_ai5_widget_pane_g5_ParamLimits

0xe915,	// (0x0003eeef) cell_ai5_widget_pane_g8_ParamLimits

0xe915,	// (0x0003eeef) cell_ai5_widget_pane_g8

0xe929,	// (0x0003ef03) cell_ai5_widget_pane_g9_ParamLimits

0xe929,	// (0x0003ef03) cell_ai5_widget_pane_g9

0xe93d,	// (0x0003ef17) cell_ai5_widget_pane_g10_ParamLimits

0xe93d,	// (0x0003ef17) cell_ai5_widget_pane_g10

0xec87,	// (0x0003f261) status_icon_pane_g1

0x224c,	// (0x00032826) bg_popup_sub_pane_cp13

0xec8f,	// (0x0003f269) popup_keymap_window_t1

0x912f,	// (0x00039709) control_pane_g6_ParamLimits

0x912f,	// (0x00039709) control_pane_g6

0x913c,	// (0x00039716) control_pane_g7_ParamLimits

0x913c,	// (0x00039716) control_pane_g7

0x9149,	// (0x00039723) control_pane_g8_ParamLimits

0x9149,	// (0x00039723) control_pane_g8

0xebaa,	// (0x0003f184) dt_sta_controll_pane_ParamLimits

0xebb7,	// (0x0003f191) dt_sta_indi_pane_ParamLimits

0xebc8,	// (0x0003f1a2) dt_sta_title_pane_ParamLimits

0x283c,	// (0x00032e16) aid_size_touch_scroll_bar_cale

0x59fd,	// (0x00035fd7) popup_discreet_window_ParamLimits

0x59fd,	// (0x00035fd7) popup_discreet_window

0x5a8b,	// (0x00036065) popup_sk_window

0x9d14,	// (0x0003a2ee) bg_popup_sub_pane_cp28_ParamLimits

0x9d14,	// (0x0003a2ee) bg_popup_sub_pane_cp28

0xec9d,	// (0x0003f277) popup_discreet_window_g1_ParamLimits

0xec9d,	// (0x0003f277) popup_discreet_window_g1

0xecbd,	// (0x0003f297) popup_discreet_window_t1_ParamLimits

0xecbd,	// (0x0003f297) popup_discreet_window_t1

0xecdb,	// (0x0003f2b5) popup_discreet_window_t2_ParamLimits

0xecdb,	// (0x0003f2b5) popup_discreet_window_t2

0x0002,

0xfea4,	// (0x0004047e) popup_discreet_window_t_ParamLimits

0xfea4,	// (0x0004047e) popup_discreet_window_t

0x8d06,	// (0x000392e0) popup_sk_window_g1

0x8d10,	// (0x000392ea) popup_sk_window_g2

0x0001,

0xfeab,	// (0x00040485) popup_sk_window_g

0x8d18,	// (0x000392f2) popup_sk_window_t1

0x8d26,	// (0x00039300) popup_sk_window_t1_copy1

0xe8af,	// (0x0003ee89) cell_ai5_widget_pane_g2_ParamLimits

0xea21,	// (0x0003effb) cell_ai5_widget_pane_t9_ParamLimits

0xea21,	// (0x0003effb) cell_ai5_widget_pane_t9

0x224c,	// (0x00032826) main_fep_fshwr2_pane

0x8d34,	// (0x0003930e) aid_fshwr2_btn_pane

0x8d40,	// (0x0003931a) aid_fshwr2_syb_pane

0x8d52,	// (0x0003932c) aid_fshwr2_txt_pane

0x8d5e,	// (0x00039338) fshwr2_func_candi_pane

0x8d74,	// (0x0003934e) fshwr2_hwr_syb_pane

0x8d88,	// (0x00039362) fshwr2_icf_pane

0x5920,	// (0x00035efa) fshwr2_icf_bg_pane

0x8dbc,	// (0x00039396) fshwr2_icf_pane_t1_ParamLimits

0x8dbc,	// (0x00039396) fshwr2_icf_pane_t1

0x2dc2,	// (0x0003339c) fshwr2_func_candi_pane_g1

0xed2d,	// (0x0003f307) fshwr2_func_candi_row_pane_ParamLimits

0xed2d,	// (0x0003f307) fshwr2_func_candi_row_pane

0x8dd4,	// (0x000393ae) cell_fshwr2_syb_pane_ParamLimits

0x8dd4,	// (0x000393ae) cell_fshwr2_syb_pane

0x8df5,	// (0x000393cf) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8df5,	// (0x000393cf) fshwr2_hwr_syb_pane_g1

0x5920,	// (0x00035efa) bg_popup_call_pane_cp01

0x8e03,	// (0x000393dd) fshwr2_func_candi_cell_pane_ParamLimits

0x8e03,	// (0x000393dd) fshwr2_func_candi_cell_pane

0xed50,	// (0x0003f32a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed50,	// (0x0003f32a) fshwr2_func_candi_cell_bg_pane

0x8e54,	// (0x0003942e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8e54,	// (0x0003942e) fshwr2_func_candi_cell_pane_g1

0x8e74,	// (0x0003944e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8e74,	// (0x0003944e) fshwr2_func_candi_cell_pane_t1

0x5920,	// (0x00035efa) bg_button_pane_cp08

0xed5c,	// (0x0003f336) cell_fshwr2_syb_bg_pane

0x8e87,	// (0x00039461) cell_fshwr2_syb_bg_pane_g1

0x8e9b,	// (0x00039475) cell_fshwr2_syb_bg_pane_t1

0x28fa,	// (0x00032ed4) main_tmo_pane

0xa838,	// (0x0003ae12) uni_indicator_pane_g1_ParamLimits

0xa84b,	// (0x0003ae25) uni_indicator_pane_g2_ParamLimits

0xa85d,	// (0x0003ae37) uni_indicator_pane_g3_ParamLimits

0xa86c,	// (0x0003ae46) uni_indicator_pane_g4_ParamLimits

0xa86c,	// (0x0003ae46) uni_indicator_pane_g4

0xa880,	// (0x0003ae5a) uni_indicator_pane_g5_ParamLimits

0xa880,	// (0x0003ae5a) uni_indicator_pane_g5

0xa880,	// (0x0003ae5a) uni_indicator_pane_g6_ParamLimits

0xa880,	// (0x0003ae5a) uni_indicator_pane_g6

0xf91c,	// (0x0003fef6) uni_indicator_pane_g_ParamLimits

0xd1e9,	// (0x0003d7c3) popup_tmo_note_window_ParamLimits

0xd1e9,	// (0x0003d7c3) popup_tmo_note_window

0x8574,	// (0x00038b4e) fshwr2_bg_pane

0x8e65,	// (0x0003943f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8e65,	// (0x0003943f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb0,	// (0x0004048a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb0,	// (0x0004048a) fshwr2_func_candi_cell_pane_g

0x815e,	// (0x00038738) bg_popup_window_pane_cp01

0x8eb1,	// (0x0003948b) bg_popup_window_pane_g1_cp01

0xed68,	// (0x0003f342) bg_popup_window_pane_cp22_ParamLimits

0xed68,	// (0x0003f342) bg_popup_window_pane_cp22

0xed76,	// (0x0003f350) listscroll_tmo_link_pane_ParamLimits

0xed76,	// (0x0003f350) listscroll_tmo_link_pane

0xedb6,	// (0x0003f390) popup_tmo_note_window_g1_ParamLimits

0xedb6,	// (0x0003f390) popup_tmo_note_window_g1

0xedc3,	// (0x0003f39d) tmo_note_info_pane_ParamLimits

0xedc3,	// (0x0003f39d) tmo_note_info_pane

0xeddd,	// (0x0003f3b7) list_tmo_note_info_pane_g1_ParamLimits

0xeddd,	// (0x0003f3b7) list_tmo_note_info_pane_g1

0xedf4,	// (0x0003f3ce) list_tmo_note_info_pane_g2_ParamLimits

0xedf4,	// (0x0003f3ce) list_tmo_note_info_pane_g2

0x0001,

0xfeb5,	// (0x0004048f) list_tmo_note_info_pane_g_ParamLimits

0xfeb5,	// (0x0004048f) list_tmo_note_info_pane_g

0xee10,	// (0x0003f3ea) list_tmo_note_info_text_pane_ParamLimits

0xee10,	// (0x0003f3ea) list_tmo_note_info_text_pane

0xee95,	// (0x0003f46f) list_tmo_link_pane

0xeea2,	// (0x0003f47c) scroll_pane_cp20

0xeeaf,	// (0x0003f489) list_single_tmo_link_pane_ParamLimits

0xeeaf,	// (0x0003f489) list_single_tmo_link_pane

0xeebf,	// (0x0003f499) list_single_tmo_link_pane_t1

0xeecd,	// (0x0003f4a7) list_tmo_note_info_text_pane_t1_ParamLimits

0xeecd,	// (0x0003f4a7) list_tmo_note_info_text_pane_t1

0x64ba,	// (0x00036a94) aid_size_touch_scroll_bar_cp01_ParamLimits

0x64ba,	// (0x00036a94) aid_size_touch_scroll_bar_cp01

0x63e4,	// (0x000369be) aid_size_touch_slider_marker

0x5a73,	// (0x0003604d) popup_settings_window_ParamLimits

0x5a73,	// (0x0003604d) popup_settings_window

0x4266,	// (0x00034840) popup_candi_list_indi_window

0x9204,	// (0x000397de) aid_touch_navi_pane_ParamLimits

0x84cd,	// (0x00038aa7) rs_clock_indi_pane

0x84d6,	// (0x00038ab0) sctrl_sk_bottom_pane_ParamLimits

0x84e7,	// (0x00038ac1) sctrl_sk_top_pane_ParamLimits

0x85ec,	// (0x00038bc6) popup_fep_tooltip_window

0xe829,	// (0x0003ee03) aid_size_cell_widget_grid_ParamLimits

0xe89a,	// (0x0003ee74) cell_ai5_widget_pane_g1_ParamLimits

0xe89a,	// (0x0003ee74) cell_ai5_widget_pane_g1

0xe8fd,	// (0x0003eed7) cell_ai5_widget_pane_g6_ParamLimits

0xe909,	// (0x0003eee3) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe33,	// (0x0004040d) cell_ai5_widget_pane_g_ParamLimits

0xfe33,	// (0x0004040d) cell_ai5_widget_pane_g

0xea50,	// (0x0003f02a) cell_ai5_widget_pane_t10_ParamLimits

0xea50,	// (0x0003f02a) cell_ai5_widget_pane_t10

0xea6e,	// (0x0003f048) grid_ai5_widget_pane_ParamLimits

0xeb06,	// (0x0003f0e0) cell_contacts_ai5_widget_pane_ParamLimits

0xeb06,	// (0x0003f0e0) cell_contacts_ai5_widget_pane

0xecf0,	// (0x0003f2ca) popup_discreet_window_t3_ParamLimits

0xecf0,	// (0x0003f2ca) popup_discreet_window_t3

0x8da4,	// (0x0003937e) popup_fshwr2_char_preview_window_ParamLimits

0x8da4,	// (0x0003937e) popup_fshwr2_char_preview_window

0xee2e,	// (0x0003f408) tmo_note_info_pane_t1

0xee43,	// (0x0003f41d) tmo_note_info_pane_t2

0xee5c,	// (0x0003f436) tmo_note_info_pane_t3

0xee71,	// (0x0003f44b) tmo_note_info_pane_t4

0xee83,	// (0x0003f45d) tmo_note_info_pane_t5

0x0004,

0xfeba,	// (0x00040494) tmo_note_info_pane_t

0xee95,	// (0x0003f46f) list_tmo_link_pane_ParamLimits

0xeea2,	// (0x0003f47c) scroll_pane_cp20_ParamLimits

0x5920,	// (0x00035efa) bg_popup_fep_char_preview_window_cp01

0xeee6,	// (0x0003f4c0) popup_fshwr2_char_preview_window_t1

0xeef4,	// (0x0003f4ce) popup_candi_list_indi_window_g1

0xeefd,	// (0x0003f4d7) bg_cell_contacts_ai5_widget_pane

0xef09,	// (0x0003f4e3) cell_contacts_ai5_widget_pane_g1

0xef1e,	// (0x0003f4f8) cell_contacts_ai5_widget_pane_g2

0xef2a,	// (0x0003f504) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec5,	// (0x0004049f) cell_contacts_ai5_widget_pane_g

0xef36,	// (0x0003f510) cell_contacts_ai5_widget_pane_t1

0x28fa,	// (0x00032ed4) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefad,	// (0x0003f587) settings_container_pane

0x6efb,	// (0x000374d5) listscroll_set_pane_copy1

0xb41d,	// (0x0003b9f7) scroll_pane_cp121_copy1

0xefb9,	// (0x0003f593) set_content_pane_copy1

0xefc1,	// (0x0003f59b) aid_height_set_list_copy1_ParamLimits

0xefc1,	// (0x0003f59b) aid_height_set_list_copy1

0xaa80,	// (0x0003b05a) aid_size_parent_copy1_ParamLimits

0xaa80,	// (0x0003b05a) aid_size_parent_copy1

0xefcd,	// (0x0003f5a7) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefcd,	// (0x0003f5a7) button_value_adjust_pane_cp6_copy1

0x9186,	// (0x00039760) list_highlight_pane_cp2_copy1_ParamLimits

0x9186,	// (0x00039760) list_highlight_pane_cp2_copy1

0xefe1,	// (0x0003f5bb) list_set_pane_copy1_ParamLimits

0xefe1,	// (0x0003f5bb) list_set_pane_copy1

0xef48,	// (0x0003f522) main_pane_set_t1_copy1_ParamLimits

0xef48,	// (0x0003f522) main_pane_set_t1_copy1

0xef82,	// (0x0003f55c) main_pane_set_t2_copy1_ParamLimits

0xef82,	// (0x0003f55c) main_pane_set_t2_copy1

0xf0a2,	// (0x0003f67c) main_pane_set_t3_copy1

0xf0b0,	// (0x0003f68a) main_pane_set_t4_copy1

0xefa1,	// (0x0003f57b) set_content_pane_g1_copy1_ParamLimits

0xefa1,	// (0x0003f57b) set_content_pane_g1_copy1

0xf0be,	// (0x0003f698) setting_code_pane_copy1

0xf0c6,	// (0x0003f6a0) setting_slider_graphic_pane_copy1

0xf0c6,	// (0x0003f6a0) setting_slider_pane_copy1

0xf0c6,	// (0x0003f6a0) setting_text_pane_copy1

0xf0c6,	// (0x0003f6a0) setting_volume_pane_copy1

0xf0be,	// (0x0003f698) settings_code_pane_cp2_copy1

0xf0ce,	// (0x0003f6a8) settings_code_pane_cp_copy1_ParamLimits

0xf0ce,	// (0x0003f6a8) settings_code_pane_cp_copy1

0x8eba,	// (0x00039494) volume_set_pane_copy1

0xf0e2,	// (0x0003f6bc) volume_set_pane_g10_copy1

0xf0ee,	// (0x0003f6c8) volume_set_pane_g1_copy1

0xf0f8,	// (0x0003f6d2) volume_set_pane_g2_copy1

0xf102,	// (0x0003f6dc) volume_set_pane_g3_copy1

0xf10c,	// (0x0003f6e6) volume_set_pane_g4_copy1

0xf116,	// (0x0003f6f0) volume_set_pane_g5_copy1

0xf120,	// (0x0003f6fa) volume_set_pane_g6_copy1

0xf12a,	// (0x0003f704) volume_set_pane_g7_copy1

0xf134,	// (0x0003f70e) volume_set_pane_g8_copy1

0xf13e,	// (0x0003f718) volume_set_pane_g9_copy1

0x22bc,	// (0x00032896) bg_set_opt_pane_cp_copy1_ParamLimits

0x22bc,	// (0x00032896) bg_set_opt_pane_cp_copy1

0x8ec6,	// (0x000394a0) setting_slider_pane_t1_copy1_ParamLimits

0x8ec6,	// (0x000394a0) setting_slider_pane_t1_copy1

0x8ee4,	// (0x000394be) setting_slider_pane_t2_copy1_ParamLimits

0x8ee4,	// (0x000394be) setting_slider_pane_t2_copy1

0x8efe,	// (0x000394d8) setting_slider_pane_t3_copy1_ParamLimits

0x8efe,	// (0x000394d8) setting_slider_pane_t3_copy1

0x8f16,	// (0x000394f0) slider_set_pane_copy1_ParamLimits

0x8f16,	// (0x000394f0) slider_set_pane_copy1

0x2952,	// (0x00032f2c) set_opt_bg_pane_g1_copy2

0x295a,	// (0x00032f34) set_opt_bg_pane_g2_copy2

0xf148,	// (0x0003f722) set_opt_bg_pane_g3_copy2

0x296a,	// (0x00032f44) set_opt_bg_pane_g4_copy2

0x2972,	// (0x00032f4c) set_opt_bg_pane_g5_copy2

0x297a,	// (0x00032f54) set_opt_bg_pane_g6_copy2

0xf152,	// (0x0003f72c) set_opt_bg_pane_g7_copy2

0xf15c,	// (0x0003f736) set_opt_bg_pane_g8_copy2

0xf166,	// (0x0003f740) set_opt_bg_pane_g9_copy2

0x8f2c,	// (0x00039506) aid_size_touch_slider_mark_copy1_ParamLimits

0x8f2c,	// (0x00039506) aid_size_touch_slider_mark_copy1

0xf170,	// (0x0003f74a) slider_set_pane_g1_copy1

0x8f40,	// (0x0003951a) slider_set_pane_g2_copy1

0x7d15,	// (0x000382ef) slider_set_pane_g3_copy1_ParamLimits

0x7d15,	// (0x000382ef) slider_set_pane_g3_copy1

0x7d29,	// (0x00038303) slider_set_pane_g4_copy1_ParamLimits

0x7d29,	// (0x00038303) slider_set_pane_g4_copy1

0x7d41,	// (0x0003831b) slider_set_pane_g5_copy1_ParamLimits

0x7d41,	// (0x0003831b) slider_set_pane_g5_copy1

0x7d15,	// (0x000382ef) slider_set_pane_g6_copy1_ParamLimits

0x7d15,	// (0x000382ef) slider_set_pane_g6_copy1

0x8f48,	// (0x00039522) slider_set_pane_g7_copy1_ParamLimits

0x8f48,	// (0x00039522) slider_set_pane_g7_copy1

0x2260,	// (0x0003283a) bg_set_opt_pane_cp2_copy1

0xf179,	// (0x0003f753) setting_slider_graphic_pane_g1_copy1

0xf182,	// (0x0003f75c) setting_slider_graphic_pane_t1_copy1

0xf192,	// (0x0003f76c) setting_slider_graphic_pane_t2_copy1

0xf1a2,	// (0x0003f77c) slider_set_pane_cp_copy1

0xf1b2,	// (0x0003f78c) input_focus_pane_cp1_copy1

0xf1bb,	// (0x0003f795) list_set_text_pane_copy1

0xf1c3,	// (0x0003f79d) setting_text_pane_g1_copy1

0x4af1,	// (0x000350cb) set_text_pane_t1_copy1

0xf1b2,	// (0x0003f78c) input_focus_pane_cp2_copy1

0xf1c3,	// (0x0003f79d) setting_code_pane_g1_copy1

0xf1cc,	// (0x0003f7a6) setting_code_pane_t1_copy1

0x6be3,	// (0x000371bd) list_set_graphic_pane_copy1

0x2260,	// (0x0003283a) bg_set_opt_pane_cp4_copy1

0x6bf6,	// (0x000371d0) list_set_graphic_pane_g1_copy1_ParamLimits

0x6bf6,	// (0x000371d0) list_set_graphic_pane_g1_copy1

0xf1da,	// (0x0003f7b4) list_set_graphic_pane_g2_copy1

0x6c0e,	// (0x000371e8) list_set_graphic_pane_t1_copy1_ParamLimits

0x6c0e,	// (0x000371e8) list_set_graphic_pane_t1_copy1

0xbcc5,	// (0x0003c29f) rs_clock_indi_pane_g1

0xf1e2,	// (0x0003f7bc) rs_clock_indi_pane_t1

0xf1f0,	// (0x0003f7ca) rs_indi_pane

0xf1f8,	// (0x0003f7d2) rs_indi_pane_g1

0xf201,	// (0x0003f7db) rs_indi_pane_g2

0xf20a,	// (0x0003f7e4) rs_indi_pane_g3

0x0002,

0xfecc,	// (0x000404a6) rs_indi_pane_g

0x6efb,	// (0x000374d5) bg_popup_preview_window_pane_cp03

0xf213,	// (0x0003f7ed) popup_fep_tooltip_window_t1

0xc970,	// (0x0003cf4a) popup_note2_window_g2_ParamLimits

0xc970,	// (0x0003cf4a) popup_note2_window_g2

0x0001,

0xfc65,	// (0x0004023f) popup_note2_window_g_ParamLimits

0xfc65,	// (0x0004023f) popup_note2_window_g

0xce99,	// (0x0003d473) bg_popup_sub_pane_cp11_ParamLimits

0xcea6,	// (0x0003d480) cell_ai3_links_pane_g1_ParamLimits

0xcebd,	// (0x0003d497) cell_ai3_links_pane_t1

0x4af1,	// (0x000350cb) set_text_pane_t1_copy1_ParamLimits

0x6e14,	// (0x000373ee) cell_graphic_popup_pane_cp2_ParamLimits

0x6e14,	// (0x000373ee) cell_graphic_popup_pane_cp2

0xf221,	// (0x0003f7fb) cell_graphic_popup_pane_g1_cp2

0x264f,	// (0x00032c29) cell_graphic_popup_pane_g2_cp2

0xf229,	// (0x0003f803) cell_graphic_popup_pane_g3_cp2

0xf231,	// (0x0003f80b) cell_graphic_popup_pane_t2_cp2

0x2660,	// (0x00032c3a) grid_highlight_pane_cp3_cp2

0x2bfb,	// (0x000331d5) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x28fa,	// (0x00032ed4) main_tmo_pane_ParamLimits

0xd1dd,	// (0x0003d7b7) popup_tmo_big_image_note_window

0xe889,	// (0x0003ee63) cell_ai5_widget_list_pane

0xe891,	// (0x0003ee6b) cell_ai5_widget_lrg_icon_pane

0xee2e,	// (0x0003f408) tmo_note_info_pane_t1_ParamLimits

0xee43,	// (0x0003f41d) tmo_note_info_pane_t2_ParamLimits

0xee5c,	// (0x0003f436) tmo_note_info_pane_t3_ParamLimits

0xee71,	// (0x0003f44b) tmo_note_info_pane_t4_ParamLimits

0xee83,	// (0x0003f45d) tmo_note_info_pane_t5_ParamLimits

0xfeba,	// (0x00040494) tmo_note_info_pane_t_ParamLimits

0xefad,	// (0x0003f587) settings_container_pane_ParamLimits

0xf1aa,	// (0x0003f784) indicator_popup_pane_cp5

0xf1aa,	// (0x0003f784) indicator_popup_pane_cp6

0x6be3,	// (0x000371bd) list_set_graphic_pane_copy1_ParamLimits

0x224c,	// (0x00032826) bg_popup_window_pane_cp23

0xf23f,	// (0x0003f819) popup_tmo_big_image_note_window_g1

0xf24b,	// (0x0003f825) popup_tmo_big_image_note_window_t1

0xf25b,	// (0x0003f835) popup_tmo_big_image_note_window_t2

0xf26b,	// (0x0003f845) popup_tmo_big_image_note_window_t3

0x0002,

0xfed3,	// (0x000404ad) popup_tmo_big_image_note_window_t

0xbcc5,	// (0x0003c29f) cell_ai5_widget_lrg_icon_pane_g1

0xf27b,	// (0x0003f855) cell_ai5_widget_lrg_icon_pane_t1

0xf289,	// (0x0003f863) cell_ai5_widget_list_row_pane_ParamLimits

0xf289,	// (0x0003f863) cell_ai5_widget_list_row_pane

0xf2a1,	// (0x0003f87b) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2a1,	// (0x0003f87b) cell_ai5_widget_list_row_pane_g1

0xf2ae,	// (0x0003f888) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2ae,	// (0x0003f888) cell_ai5_widget_list_row_pane_t1

0xf2d9,	// (0x0003f8b3) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2d9,	// (0x0003f8b3) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeda,	// (0x000404b4) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeda,	// (0x000404b4) cell_ai5_widget_list_row_pane_t

0x5920,	// (0x00035efa) main_fep_vtchi_ss_pane

0xf321,	// (0x0003f8fb) popup_fep_char_pre_window

0xf329,	// (0x0003f903) popup_fep_ituss_window

0xf34e,	// (0x0003f928) popup_fep_vkbss_window

0xf373,	// (0x0003f94d) grid_vkbss_keypad_pane_ParamLimits

0xf373,	// (0x0003f94d) grid_vkbss_keypad_pane

0xf383,	// (0x0003f95d) ituss_keypad_pane

0x8f6a,	// (0x00039544) aid_vkbss_key_offset_ParamLimits

0x8f6a,	// (0x00039544) aid_vkbss_key_offset

0x8f76,	// (0x00039550) cell_vkbss_key_pane_ParamLimits

0x8f76,	// (0x00039550) cell_vkbss_key_pane

0xf392,	// (0x0003f96c) bg_cell_vkbss_key_g1_ParamLimits

0xf392,	// (0x0003f96c) bg_cell_vkbss_key_g1

0xf39e,	// (0x0003f978) cell_vkbss_key_3p_pane_ParamLimits

0xf39e,	// (0x0003f978) cell_vkbss_key_3p_pane

0xf3b2,	// (0x0003f98c) cell_vkbss_key_g1_ParamLimits

0xf3b2,	// (0x0003f98c) cell_vkbss_key_g1

0xf3c6,	// (0x0003f9a0) cell_vkbss_key_t1_ParamLimits

0xf3c6,	// (0x0003f9a0) cell_vkbss_key_t1

0x8f8c,	// (0x00039566) cell_ituss_key_pane_ParamLimits

0x8f8c,	// (0x00039566) cell_ituss_key_pane

0xf3f1,	// (0x0003f9cb) bg_cell_ituss_key_g1_ParamLimits

0xf3f1,	// (0x0003f9cb) bg_cell_ituss_key_g1

0xf3fd,	// (0x0003f9d7) cell_ituss_key_pane_g1_ParamLimits

0xf3fd,	// (0x0003f9d7) cell_ituss_key_pane_g1

0x8f9d,	// (0x00039577) cell_ituss_key_pane_g2_ParamLimits

0x8f9d,	// (0x00039577) cell_ituss_key_pane_g2

0x0002,

0xfee1,	// (0x000404bb) cell_ituss_key_pane_g_ParamLimits

0xfee1,	// (0x000404bb) cell_ituss_key_pane_g

0x8fc9,	// (0x000395a3) cell_ituss_key_t1_ParamLimits

0x8fc9,	// (0x000395a3) cell_ituss_key_t1

0x9003,	// (0x000395dd) cell_ituss_key_t2_ParamLimits

0x9003,	// (0x000395dd) cell_ituss_key_t2

0x9034,	// (0x0003960e) cell_ituss_key_t3_ParamLimits

0x9034,	// (0x0003960e) cell_ituss_key_t3

0x9003,	// (0x000395dd) cell_ituss_key_t4_ParamLimits

0x9003,	// (0x000395dd) cell_ituss_key_t4

0x0004,

0xfee8,	// (0x000404c2) cell_ituss_key_t_ParamLimits

0xfee8,	// (0x000404c2) cell_ituss_key_t

0xf423,	// (0x0003f9fd) cell_vkbss_key_3p_pane_g1

0xf42b,	// (0x0003fa05) cell_vkbss_key_3p_pane_g2

0xf433,	// (0x0003fa0d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x000404cd) cell_vkbss_key_3p_pane_g

0x6efb,	// (0x000374d5) bg_popup_fep_char_preview_window_cp02

0xf43b,	// (0x0003fa15) popup_fep_char_pre_window_t1

0xe816,	// (0x0003edf0) main_ai5_sk_pane

0xeefd,	// (0x0003f4d7) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef09,	// (0x0003f4e3) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef1e,	// (0x0003f4f8) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef2a,	// (0x0003f504) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec5,	// (0x0004049f) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef36,	// (0x0003f510) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x28fa,	// (0x00032ed4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf449,	// (0x0003fa23) main_ai5_sk_pane_g1

0x9b4c,	// (0x0003a126) popup_query_code_window_g1

0xf33f,	// (0x0003f919) popup_fep_vkb_icf_pane

0xf35d,	// (0x0003f937) popup_fep_vtchi_icf_pane

0xf452,	// (0x0003fa2c) bg_icf_pane

0xf45e,	// (0x0003fa38) list_vkb_icf_pane

0xf46d,	// (0x0003fa47) bg_icf_pane_cp01

0xf480,	// (0x0003fa5a) vtchi_icf_list_pane

0xf490,	// (0x0003fa6a) list_vkb_icf_pane_t1_ParamLimits

0xf490,	// (0x0003fa6a) list_vkb_icf_pane_t1

0xf4ae,	// (0x0003fa88) vtchi_icf_list_pane_t1_ParamLimits

0xf4ae,	// (0x0003fa88) vtchi_icf_list_pane_t1

0xf329,	// (0x0003f903) popup_fep_ituss_window_ParamLimits

0xf35d,	// (0x0003f937) popup_fep_vtchi_icf_pane_ParamLimits

0xf383,	// (0x0003f95d) ituss_keypad_pane_ParamLimits

0x8f5e,	// (0x00039538) ituss_sks_pane

0xf452,	// (0x0003fa2c) bg_icf_pane_ParamLimits

0xf301,	// (0x0003f8db) icf_edit_indi_pane_ParamLimits

0xf301,	// (0x0003f8db) icf_edit_indi_pane

0xf45e,	// (0x0003fa38) list_vkb_icf_pane_ParamLimits

0xf46d,	// (0x0003fa47) bg_icf_pane_cp01_ParamLimits

0xf314,	// (0x0003f8ee) icf_edit_indi_pane_cp01_ParamLimits

0xf314,	// (0x0003f8ee) icf_edit_indi_pane_cp01

0xf488,	// (0x0003fa62) vtchi_query_pane

0xe1b9,	// (0x0003e793) icf_edit_indi_pane_g1_ParamLimits

0xe1b9,	// (0x0003e793) icf_edit_indi_pane_g1

0xf51d,	// (0x0003faf7) icf_edit_indi_pane_g2_ParamLimits

0xf51d,	// (0x0003faf7) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x000404e5) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x000404e5) icf_edit_indi_pane_g

0xf52f,	// (0x0003fb09) icf_edit_indi_pane_t1

0xf4c6,	// (0x0003faa0) bg_input_focus_pane_cp042

0x2833,	// (0x00032e0d) vtchi_button_pane

0xf4cf,	// (0x0003faa9) vtchi_query_pane_t1

0xf4dd,	// (0x0003fab7) vtchi_query_pane_t2

0xf4eb,	// (0x0003fac5) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x000404d4) vtchi_query_pane_t

0x5920,	// (0x00035efa) bg_button_pane_cp13

0xf4f9,	// (0x0003fad3) vtchi_button_pane_g1

0x9077,	// (0x00039651) ituss_sks_pane_g1

0x9082,	// (0x0003965c) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x000404db) ituss_sks_pane_g

0xf501,	// (0x0003fadb) ituss_sks_pane_t1

0xf50f,	// (0x0003fae9) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x000404e0) ituss_sks_pane_t

0xb7a2,	// (0x0003bd7c) indicator_nsta_pane_cp_g1

0xb7aa,	// (0x0003bd84) indicator_nsta_pane_cp_g2

0xb7b2,	// (0x0003bd8c) indicator_nsta_pane_cp_g3

0xb7a2,	// (0x0003bd7c) indicator_nsta_pane_cp_g4

0xb7aa,	// (0x0003bd84) indicator_nsta_pane_cp_g5

0xb7b2,	// (0x0003bd8c) indicator_nsta_pane_cp_g6

0x0005,

0xfaa3,	// (0x0004007d) indicator_nsta_pane_cp_g

0xdf04,	// (0x0003e4de) cell_graphic2_pane_t2_ParamLimits

0xdf04,	// (0x0003e4de) cell_graphic2_pane_t2

0x0001,

0xfdbc,	// (0x00040396) cell_graphic2_pane_t_ParamLimits

0xfdbc,	// (0x00040396) cell_graphic2_pane_t

0xdf31,	// (0x0003e50b) cell_graphic2_control_pane_t1

0x68f3,	// (0x00036ecd) signal_pane_g3_ParamLimits

0x68f3,	// (0x00036ecd) signal_pane_g3

0x6902,	// (0x00036edc) signal_pane_g4_ParamLimits

0x6902,	// (0x00036edc) signal_pane_g4

0xf2eb,	// (0x0003f8c5) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2eb,	// (0x0003f8c5) cell_ai5_widget_list_row_pane_t3

0xf411,	// (0x0003f9eb) cell_ituss_key_pane_t1_ParamLimits

0xf411,	// (0x0003f9eb) cell_ituss_key_pane_t1

0x97bb,	// (0x00039d95) form_field_data_wide_pane_vc_t2_ParamLimits

0x97bb,	// (0x00039d95) form_field_data_wide_pane_vc_t2

0x97cf,	// (0x00039da9) form_field_data_wide_pane_vc_t3_ParamLimits

0x97cf,	// (0x00039da9) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0003fdde) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0003fdde) form_field_data_wide_pane_vc_t

0xb45d,	// (0x0003ba37) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb45d,	// (0x0003ba37) form_field_slider_wide_pane_vc_t3

0xb533,	// (0x0003bb0d) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb533,	// (0x0003bb0d) form_field_popup_wide_pane_vc_t2

0xb54a,	// (0x0003bb24) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb54a,	// (0x0003bb24) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa92,	// (0x0004006c) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa92,	// (0x0004006c) form_field_popup_wide_pane_vc_t

0x8d34,	// (0x0003930e) aid_fshwr2_btn_pane_ParamLimits

0x8d40,	// (0x0003931a) aid_fshwr2_syb_pane_ParamLimits

0x8d52,	// (0x0003932c) aid_fshwr2_txt_pane_ParamLimits

0x8574,	// (0x00038b4e) fshwr2_bg_pane_ParamLimits

0x8d5e,	// (0x00039338) fshwr2_func_candi_pane_ParamLimits

0x8d74,	// (0x0003934e) fshwr2_hwr_syb_pane_ParamLimits

0x8d88,	// (0x00039362) fshwr2_icf_pane_ParamLimits

0x464d,	// (0x00034c27) list_double_graphic_pane_vc_g4_ParamLimits

0x464d,	// (0x00034c27) list_double_graphic_pane_vc_g4

0x8fbd,	// (0x00039597) cell_ituss_key_pane_g3_ParamLimits

0x8fbd,	// (0x00039597) cell_ituss_key_pane_g3

0x9065,	// (0x0003963f) cell_ituss_key_t5_ParamLimits

0x9065,	// (0x0003963f) cell_ituss_key_t5

0xf34e,	// (0x0003f928) popup_fep_vkbss_window_ParamLimits

0xe820,	// (0x0003edfa) aid_cell_ai5_quarter

0xf52f,	// (0x0003fb09) icf_edit_indi_pane_t1_ParamLimits

0x2497,	// (0x00032a71) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x2497,	// (0x00032a71) aid_tch_indicator_popup_pane_cp2

0x24aa,	// (0x00032a84) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x24aa,	// (0x00032a84) aid_tch_query_popup_data_pane_cp2

0x9af4,	// (0x0003a0ce) aid_tch_query_popup_pane_ParamLimits

0x9af4,	// (0x0003a0ce) aid_tch_query_popup_pane

0x9af4,	// (0x0003a0ce) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9af4,	// (0x0003a0ce) aid_tch_query_popup_data_pane_cp1

0xed5c,	// (0x0003f336) cell_fshwr2_syb_bg_pane_ParamLimits

0x8e87,	// (0x00039461) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x8e9b,	// (0x00039475) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf33f,	// (0x0003f919) popup_fep_vkb_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small

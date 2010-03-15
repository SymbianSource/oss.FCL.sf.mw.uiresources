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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0003017e };

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
0x55cd,	// (0x0003574b) Screen

0x55d9,	// (0x00035757) application_window_ParamLimits

0x55d9,	// (0x00035757) application_window

0xf443,	// (0x0003f5c1) screen_g1

0x5635,	// (0x000357b3) area_bottom_pane_ParamLimits

0x5635,	// (0x000357b3) area_bottom_pane

0x56f5,	// (0x00035873) area_top_pane_ParamLimits

0x56f5,	// (0x00035873) area_top_pane

0x5793,	// (0x00035911) main_pane_ParamLimits

0x5793,	// (0x00035911) main_pane

0xf44d,	// (0x0003f5cb) misc_graphics

0x901c,	// (0x0003919a) battery_pane_ParamLimits

0x901c,	// (0x0003919a) battery_pane

0x9cda,	// (0x00039e58) bg_status_flat_pane_g8

0x9ce2,	// (0x00039e60) bg_status_flat_pane_g9

0x90e4,	// (0x00039262) context_pane_ParamLimits

0x90e4,	// (0x00039262) context_pane

0x9208,	// (0x00039386) navi_pane_ParamLimits

0x9208,	// (0x00039386) navi_pane

0x9298,	// (0x00039416) signal_pane_ParamLimits

0x9298,	// (0x00039416) signal_pane

0x0008,

0xf87a,	// (0x0003f9f8) bg_status_flat_pane_g

0x9305,	// (0x00039483) status_pane_g1_ParamLimits

0x9305,	// (0x00039483) status_pane_g1

0x9319,	// (0x00039497) status_pane_g2_ParamLimits

0x9319,	// (0x00039497) status_pane_g2

0x9325,	// (0x000394a3) status_pane_g3_ParamLimits

0x9325,	// (0x000394a3) status_pane_g3

0x0004,

0xf7a1,	// (0x0003f91f) status_pane_g_ParamLimits

0xf7a1,	// (0x0003f91f) status_pane_g

0x9359,	// (0x000394d7) title_pane_ParamLimits

0x9359,	// (0x000394d7) title_pane

0x9396,	// (0x00039514) uni_indicator_pane_ParamLimits

0x9396,	// (0x00039514) uni_indicator_pane

0x890d,	// (0x00038a8b) bg_list_pane_ParamLimits

0x890d,	// (0x00038a8b) bg_list_pane

0x892d,	// (0x00038aab) find_pane

0x8935,	// (0x00038ab3) listscroll_app_pane_ParamLimits

0x8935,	// (0x00038ab3) listscroll_app_pane

0x8941,	// (0x00038abf) listscroll_form_pane

0x8949,	// (0x00038ac7) listscroll_gen_pane_ParamLimits

0x8949,	// (0x00038ac7) listscroll_gen_pane

0x8941,	// (0x00038abf) listscroll_set_pane

0x638e,	// (0x0003650c) main_idle_act_pane

0x85f5,	// (0x00038773) main_idle_trad_pane

0x85f5,	// (0x00038773) main_list_empty_pane

0x896f,	// (0x00038aed) main_midp_pane

0x897b,	// (0x00038af9) main_pane_g1_ParamLimits

0x897b,	// (0x00038af9) main_pane_g1

0x8989,	// (0x00038b07) popup_ai_message_window_ParamLimits

0x8989,	// (0x00038b07) popup_ai_message_window

0x8a3d,	// (0x00038bbb) popup_fep_china_uni_window_ParamLimits

0x8a3d,	// (0x00038bbb) popup_fep_china_uni_window

0x8a9d,	// (0x00038c1b) popup_fep_japan_candidate_window_ParamLimits

0x8a9d,	// (0x00038c1b) popup_fep_japan_candidate_window

0x8ac7,	// (0x00038c45) popup_fep_japan_predictive_window_ParamLimits

0x8ac7,	// (0x00038c45) popup_fep_japan_predictive_window

0x8afd,	// (0x00038c7b) popup_find_window

0x8b0a,	// (0x00038c88) popup_grid_graphic_window_ParamLimits

0x8b0a,	// (0x00038c88) popup_grid_graphic_window

0x8b38,	// (0x00038cb6) popup_large_graphic_colour_window

0x8b5e,	// (0x00038cdc) popup_menu_window_ParamLimits

0x8b5e,	// (0x00038cdc) popup_menu_window

0x8d28,	// (0x00038ea6) popup_note_image_window

0x8d12,	// (0x00038e90) popup_note_wait_window_ParamLimits

0x8d12,	// (0x00038e90) popup_note_wait_window

0x8d12,	// (0x00038e90) popup_note_window_ParamLimits

0x8d12,	// (0x00038e90) popup_note_window

0x8d8e,	// (0x00038f0c) popup_query_code_window_ParamLimits

0x8d8e,	// (0x00038f0c) popup_query_code_window

0x8da4,	// (0x00038f22) popup_query_data_code_window_ParamLimits

0x8da4,	// (0x00038f22) popup_query_data_code_window

0x8dc7,	// (0x00038f45) popup_query_data_window_ParamLimits

0x8dc7,	// (0x00038f45) popup_query_data_window

0x8de9,	// (0x00038f67) popup_query_sat_info_window_ParamLimits

0x8de9,	// (0x00038f67) popup_query_sat_info_window

0x8e28,	// (0x00038fa6) popup_snote_single_graphic_window_ParamLimits

0x8e28,	// (0x00038fa6) popup_snote_single_graphic_window

0x8e28,	// (0x00038fa6) popup_snote_single_text_window_ParamLimits

0x8e28,	// (0x00038fa6) popup_snote_single_text_window

0x8e3f,	// (0x00038fbd) popup_sub_window_general

0x8f85,	// (0x00039103) popup_window_general_ParamLimits

0x8f85,	// (0x00039103) popup_window_general

0x8f9e,	// (0x0003911c) power_save_pane

0x6ead,	// (0x0003702b) control_pane_g1_ParamLimits

0x6ead,	// (0x0003702b) control_pane_g1

0x6ed6,	// (0x00037054) control_pane_g2_ParamLimits

0x6ed6,	// (0x00037054) control_pane_g2

0x88b6,	// (0x00038a34) control_pane_g3_ParamLimits

0x88b6,	// (0x00038a34) control_pane_g3

0x0007,

0xf789,	// (0x0003f907) control_pane_g_ParamLimits

0xf789,	// (0x0003f907) control_pane_g

0x6f1e,	// (0x0003709c) control_pane_t1_ParamLimits

0x6f1e,	// (0x0003709c) control_pane_t1

0x6f6a,	// (0x000370e8) control_pane_t2_ParamLimits

0x6f6a,	// (0x000370e8) control_pane_t2

0x0002,

0xf79a,	// (0x0003f918) control_pane_t_ParamLimits

0xf79a,	// (0x0003f918) control_pane_t

0x87d7,	// (0x00038955) navi_navi_volume_pane_cp1

0x87e0,	// (0x0003895e) status_small_icon_pane

0x87e8,	// (0x00038966) status_small_pane_g1_ParamLimits

0x87e8,	// (0x00038966) status_small_pane_g1

0x881c,	// (0x0003899a) status_small_pane_g2_ParamLimits

0x881c,	// (0x0003899a) status_small_pane_g2

0x8828,	// (0x000389a6) status_small_pane_g3_ParamLimits

0x8828,	// (0x000389a6) status_small_pane_g3

0x8834,	// (0x000389b2) status_small_pane_g4_ParamLimits

0x8834,	// (0x000389b2) status_small_pane_g4

0x8840,	// (0x000389be) status_small_pane_g5_ParamLimits

0x8840,	// (0x000389be) status_small_pane_g5

0x884f,	// (0x000389cd) status_small_pane_g6_ParamLimits

0x884f,	// (0x000389cd) status_small_pane_g6

0x0007,

0xf778,	// (0x0003f8f6) status_small_pane_g_ParamLimits

0xf778,	// (0x0003f8f6) status_small_pane_g

0x887f,	// (0x000389fd) status_small_pane_t1

0x88a2,	// (0x00038a20) status_small_wait_pane_ParamLimits

0x88a2,	// (0x00038a20) status_small_wait_pane

0x6703,	// (0x00036881) aid_levels_signal_ParamLimits

0x6703,	// (0x00036881) aid_levels_signal

0x6715,	// (0x00036893) signal_pane_g1_ParamLimits

0x6715,	// (0x00036893) signal_pane_g1

0x672a,	// (0x000368a8) signal_pane_g2_ParamLimits

0x672a,	// (0x000368a8) signal_pane_g2

0x0003,

0xf709,	// (0x0003f887) signal_pane_g_ParamLimits

0xf709,	// (0x0003f887) signal_pane_g

0x6765,	// (0x000368e3) context_pane_g1

0x59ea,	// (0x00035b68) title_pane_g1

0x5a08,	// (0x00035b86) title_pane_t1

0xf46f,	// (0x0003f5ed) title_pane_t2

0xf495,	// (0x0003f613) title_pane_t3

0x0002,

0xf55d,	// (0x0003f6db) title_pane_t

0x93ae,	// (0x0003952c) aid_levels_battery_ParamLimits

0x93ae,	// (0x0003952c) aid_levels_battery

0x93c2,	// (0x00039540) battery_pane_g1_ParamLimits

0x93c2,	// (0x00039540) battery_pane_g1

0x93d8,	// (0x00039556) battery_pane_g2_ParamLimits

0x93d8,	// (0x00039556) battery_pane_g2

0x0001,

0xf7ac,	// (0x0003f92a) battery_pane_g_ParamLimits

0xf7ac,	// (0x0003f92a) battery_pane_g

0xa624,	// (0x0003a7a2) uni_indicator_pane_g1

0xa639,	// (0x0003a7b7) uni_indicator_pane_g2

0xa64f,	// (0x0003a7cd) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x0003faa0) uni_indicator_pane_g

0x6d2f,	// (0x00036ead) navi_icon_pane_ParamLimits

0x6d2f,	// (0x00036ead) navi_icon_pane

0x6c76,	// (0x00036df4) navi_midp_pane

0x6d4b,	// (0x00036ec9) navi_navi_pane

0x6d55,	// (0x00036ed3) navi_text_pane_ParamLimits

0x6d55,	// (0x00036ed3) navi_text_pane

0xf443,	// (0x0003f5c1) status_small_wait_pane_g1

0x262b,	// (0x000327a9) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x0003fa9b) status_small_wait_pane_g

0xa337,	// (0x0003a4b5) navi_navi_icon_text_pane

0xa33f,	// (0x0003a4bd) navi_navi_pane_g1_ParamLimits

0xa33f,	// (0x0003a4bd) navi_navi_pane_g1

0xa351,	// (0x0003a4cf) navi_navi_pane_g2_ParamLimits

0xa351,	// (0x0003a4cf) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x0003fa69) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x0003fa69) navi_navi_pane_g

0xa363,	// (0x0003a4e1) navi_navi_tabs_pane

0xa36c,	// (0x0003a4ea) navi_navi_text_pane

0xa337,	// (0x0003a4b5) navi_navi_volume_pane

0xa313,	// (0x0003a491) navi_text_pane_t1

0xa307,	// (0x0003a485) navi_icon_pane_g1

0xa25a,	// (0x0003a3d8) navi_navi_text_pane_t1

0x72be,	// (0x0003743c) navi_navi_volume_pane_g1

0x72c6,	// (0x00037444) volume_small_pane

0xa1c0,	// (0x0003a33e) navi_navi_icon_text_pane_g1

0xa1c8,	// (0x0003a346) navi_navi_icon_text_pane_t1

0x6d4b,	// (0x00036ec9) navi_tabs_2_long_pane

0x6d4b,	// (0x00036ec9) navi_tabs_2_pane

0x6d4b,	// (0x00036ec9) navi_tabs_3_long_pane

0x6d4b,	// (0x00036ec9) navi_tabs_3_pane

0x6d4b,	// (0x00036ec9) navi_tabs_4_pane

0x729e,	// (0x0003741c) tabs_2_active_pane_ParamLimits

0x729e,	// (0x0003741c) tabs_2_active_pane

0x72ae,	// (0x0003742c) tabs_2_passive_pane_ParamLimits

0x72ae,	// (0x0003742c) tabs_2_passive_pane

0x726c,	// (0x000373ea) tabs_3_active_pane_ParamLimits

0x726c,	// (0x000373ea) tabs_3_active_pane

0x727c,	// (0x000373fa) tabs_3_passive_pane_ParamLimits

0x727c,	// (0x000373fa) tabs_3_passive_pane

0x728d,	// (0x0003740b) tabs_3_passive_pane_cp_ParamLimits

0x728d,	// (0x0003740b) tabs_3_passive_pane_cp

0x7220,	// (0x0003739e) tabs_4_active_pane_ParamLimits

0x7220,	// (0x0003739e) tabs_4_active_pane

0x7233,	// (0x000373b1) tabs_4_passive_pane_ParamLimits

0x7233,	// (0x000373b1) tabs_4_passive_pane

0x7244,	// (0x000373c2) tabs_4_passive_pane_cp_ParamLimits

0x7244,	// (0x000373c2) tabs_4_passive_pane_cp

0x7255,	// (0x000373d3) tabs_4_passive_pane_cp2_ParamLimits

0x7255,	// (0x000373d3) tabs_4_passive_pane_cp2

0x71fc,	// (0x0003737a) tabs_2_long_active_pane_ParamLimits

0x71fc,	// (0x0003737a) tabs_2_long_active_pane

0x720e,	// (0x0003738c) tabs_2_long_passive_pane_ParamLimits

0x720e,	// (0x0003738c) tabs_2_long_passive_pane

0x71bd,	// (0x0003733b) tabs_3_long_active_pane_ParamLimits

0x71bd,	// (0x0003733b) tabs_3_long_active_pane

0x71d0,	// (0x0003734e) tabs_3_long_passive_pane_ParamLimits

0x71d0,	// (0x0003734e) tabs_3_long_passive_pane

0x71e9,	// (0x00037367) tabs_3_long_passive_pane_cp_ParamLimits

0x71e9,	// (0x00037367) tabs_3_long_passive_pane_cp

0x7163,	// (0x000372e1) volume_small_pane_g1

0x716c,	// (0x000372ea) volume_small_pane_g2

0x7175,	// (0x000372f3) volume_small_pane_g3

0x717e,	// (0x000372fc) volume_small_pane_g4

0x7187,	// (0x00037305) volume_small_pane_g5

0x7190,	// (0x0003730e) volume_small_pane_g6

0x7199,	// (0x00037317) volume_small_pane_g7

0x71a2,	// (0x00037320) volume_small_pane_g8

0x71ab,	// (0x00037329) volume_small_pane_g9

0x71b4,	// (0x00037332) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x0003fa35) volume_small_pane_g

0x2350,	// (0x000324ce) bg_active_tab_pane_cp2_ParamLimits

0x2350,	// (0x000324ce) bg_active_tab_pane_cp2

0x5a70,	// (0x00035bee) tabs_3_active_pane_g1

0x5a78,	// (0x00035bf6) tabs_3_active_pane_t1

0x2350,	// (0x000324ce) bg_passive_tab_pane_cp2_ParamLimits

0x2350,	// (0x000324ce) bg_passive_tab_pane_cp2

0x5a70,	// (0x00035bee) tabs_3_passive_pane_g1

0x5a78,	// (0x00035bf6) tabs_3_passive_pane_t1

0x2350,	// (0x000324ce) bg_active_tab_pane_cp3_ParamLimits

0x2350,	// (0x000324ce) bg_active_tab_pane_cp3

0x5a8a,	// (0x00035c08) tabs_4_active_pane_g1

0x5a92,	// (0x00035c10) tabs_4_active_pane_t1

0x2350,	// (0x000324ce) bg_passive_tab_pane_cp3_ParamLimits

0x2350,	// (0x000324ce) bg_passive_tab_pane_cp3

0x5a8a,	// (0x00035c08) tabs_4_1_passive_pane_g1

0x5a92,	// (0x00035c10) tabs_4_1_passive_pane_t1

0x896f,	// (0x00038aed) list_highlight_pane_cp2

0xa8b3,	// (0x0003aa31) list_set_pane_ParamLimits

0xa8b3,	// (0x0003aa31) list_set_pane

0xa97b,	// (0x0003aaf9) main_pane_set_t1_ParamLimits

0xa97b,	// (0x0003aaf9) main_pane_set_t1

0xa99b,	// (0x0003ab19) main_pane_set_t2_ParamLimits

0xa99b,	// (0x0003ab19) main_pane_set_t2

0xa9af,	// (0x0003ab2d) main_pane_set_t3_ParamLimits

0xa9af,	// (0x0003ab2d) main_pane_set_t3

0xa9c3,	// (0x0003ab41) main_pane_set_t4_ParamLimits

0xa9c3,	// (0x0003ab41) main_pane_set_t4

0x0003,

0xf987,	// (0x0003fb05) main_pane_set_t_ParamLimits

0xf987,	// (0x0003fb05) main_pane_set_t

0xa9d7,	// (0x0003ab55) setting_code_pane

0xa9e1,	// (0x0003ab5f) setting_slider_graphic_pane

0xa9e1,	// (0x0003ab5f) setting_slider_pane

0xa9e1,	// (0x0003ab5f) setting_text_pane

0xa9e1,	// (0x0003ab5f) setting_volume_pane

0x5aa4,	// (0x00035c22) volume_set_pane

0x2350,	// (0x000324ce) bg_set_opt_pane_cp

0x5aae,	// (0x00035c2c) setting_slider_pane_t1

0x5ac7,	// (0x00035c45) setting_slider_pane_t2

0x5ae1,	// (0x00035c5f) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0003f6e2) setting_slider_pane_t

0x5af9,	// (0x00035c77) slider_set_pane

0xf44d,	// (0x0003f5cb) bg_set_opt_pane_cp2

0x235e,	// (0x000324dc) setting_slider_graphic_pane_g1

0x5b0f,	// (0x00035c8d) setting_slider_graphic_pane_t1

0x5b1f,	// (0x00035c9d) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0003f6e9) setting_slider_graphic_pane_t

0x5b2f,	// (0x00035cad) slider_set_pane_cp

0xf44d,	// (0x0003f5cb) input_focus_pane_cp1

0xa874,	// (0x0003a9f2) list_set_text_pane

0xf443,	// (0x0003f5c1) setting_text_pane_g1

0xf44d,	// (0x0003f5cb) input_focus_pane_cp2

0xf443,	// (0x0003f5c1) setting_code_pane_g1

0x2367,	// (0x000324e5) setting_code_pane_t1

0x409b,	// (0x00034219) set_text_pane_t1_ParamLimits

0x409b,	// (0x00034219) set_text_pane_t1

0x29c0,	// (0x00032b3e) set_opt_bg_pane_g1

0x29c8,	// (0x00032b46) set_opt_bg_pane_g2

0xa84c,	// (0x0003a9ca) set_opt_bg_pane_g3

0x29d8,	// (0x00032b56) set_opt_bg_pane_g4

0x29e0,	// (0x00032b5e) set_opt_bg_pane_g5

0x29e8,	// (0x00032b66) set_opt_bg_pane_g6

0xa856,	// (0x0003a9d4) set_opt_bg_pane_g7

0xa860,	// (0x0003a9de) set_opt_bg_pane_g8

0xa86a,	// (0x0003a9e8) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x0003faf2) set_opt_bg_pane_g

0xa83f,	// (0x0003a9bd) slider_set_pane_g1

0x736f,	// (0x000374ed) slider_set_pane_g2

0x0006,

0xf965,	// (0x0003fae3) slider_set_pane_g

0x72cf,	// (0x0003744d) volume_set_pane_g1

0x72d9,	// (0x00037457) volume_set_pane_g2

0x72e3,	// (0x00037461) volume_set_pane_g3

0x72ed,	// (0x0003746b) volume_set_pane_g4

0x72f7,	// (0x00037475) volume_set_pane_g5

0x7301,	// (0x0003747f) volume_set_pane_g6

0x730b,	// (0x00037489) volume_set_pane_g7

0x7315,	// (0x00037493) volume_set_pane_g8

0x731f,	// (0x0003749d) volume_set_pane_g9

0x7329,	// (0x000374a7) volume_set_pane_g10

0x0009,

0xf93d,	// (0x0003fabb) volume_set_pane_g

0x5b37,	// (0x00035cb5) indicator_pane_ParamLimits

0x5b37,	// (0x00035cb5) indicator_pane

0x5b43,	// (0x00035cc1) main_idle_pane_g2_ParamLimits

0x5b43,	// (0x00035cc1) main_idle_pane_g2

0x5b6b,	// (0x00035ce9) main_pane_idle_g1_ParamLimits

0x5b6b,	// (0x00035ce9) main_pane_idle_g1

0x2375,	// (0x000324f3) popup_clock_digital_analogue_window_ParamLimits

0x2375,	// (0x000324f3) popup_clock_digital_analogue_window

0x5b79,	// (0x00035cf7) soft_indicator_pane_ParamLimits

0x5b79,	// (0x00035cf7) soft_indicator_pane

0x5b87,	// (0x00035d05) wallpaper_pane_ParamLimits

0x5b87,	// (0x00035d05) wallpaper_pane

0xf443,	// (0x0003f5c1) wallpaper_pane_g1

0x5b93,	// (0x00035d11) indicator_pane_g1_ParamLimits

0x5b93,	// (0x00035d11) indicator_pane_g1

0xac9b,	// (0x0003ae19) navi_navi_icon_text_pane_srt_g1

0x23a3,	// (0x00032521) soft_indicator_pane_t1

0x23bd,	// (0x0003253b) aid_ps_area_pane

0x5b9f,	// (0x00035d1d) aid_ps_clock_pane

0x23ce,	// (0x0003254c) aid_ps_indicator_pane

0x23da,	// (0x00032558) indicator_ps_pane_ParamLimits

0x23da,	// (0x00032558) indicator_ps_pane

0x23e9,	// (0x00032567) power_save_pane_g1_ParamLimits

0x23e9,	// (0x00032567) power_save_pane_g1

0x23f5,	// (0x00032573) power_save_pane_g2_ParamLimits

0x23f5,	// (0x00032573) power_save_pane_g2

0x55e9,	// (0x00035767) aid_navinavi_width_pane

0x23bd,	// (0x0003253b) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0003f6ee) power_save_pane_g_ParamLimits

0xf570,	// (0x0003f6ee) power_save_pane_g

0x2403,	// (0x00032581) power_save_pane_t1_ParamLimits

0x2403,	// (0x00032581) power_save_pane_t1

0x5b9f,	// (0x00035d1d) aid_ps_clock_pane_ParamLimits

0x23ce,	// (0x0003254c) aid_ps_indicator_pane_ParamLimits

0x2415,	// (0x00032593) power_save_pane_t4_ParamLimits

0x2415,	// (0x00032593) power_save_pane_t4

0x0001,

0xf575,	// (0x0003f6f3) power_save_pane_t_ParamLimits

0xf575,	// (0x0003f6f3) power_save_pane_t

0x243f,	// (0x000325bd) power_save_t3_ParamLimits

0x243f,	// (0x000325bd) power_save_t3

0x242a,	// (0x000325a8) power_save_t2_ParamLimits

0x242a,	// (0x000325a8) power_save_t2

0x2454,	// (0x000325d2) indicator_ps_pane_g1

0x5bad,	// (0x00035d2b) ai_gene_pane_ParamLimits

0x5bad,	// (0x00035d2b) ai_gene_pane

0x5bb9,	// (0x00035d37) ai_links_pane_ParamLimits

0x5bb9,	// (0x00035d37) ai_links_pane

0x5bc5,	// (0x00035d43) indicator_pane_cp1_ParamLimits

0x5bc5,	// (0x00035d43) indicator_pane_cp1

0x5bd1,	// (0x00035d4f) main_pane_idle_g1_cp_ParamLimits

0x5bd1,	// (0x00035d4f) main_pane_idle_g1_cp

0x245d,	// (0x000325db) popup_ai_links_title_window

0x5bdd,	// (0x00035d5b) soft_indicator_pane_cp1_ParamLimits

0x5bdd,	// (0x00035d5b) soft_indicator_pane_cp1

0xa612,	// (0x0003a790) ai_links_pane_g1

0xa61b,	// (0x0003a799) grid_ai_links_pane

0xa5f7,	// (0x0003a775) ai_gene_pane_1

0xa600,	// (0x0003a77e) ai_gene_pane_2

0xa609,	// (0x0003a787) list_highlight_pane_cp4

0xa5d7,	// (0x0003a755) cell_ai_link_pane_ParamLimits

0xa5d7,	// (0x0003a755) cell_ai_link_pane

0xa5cf,	// (0x0003a74d) cell_ai_link_pane_g1

0x262b,	// (0x000327a9) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x0003fa96) cell_ai_link_pane_g

0xf44d,	// (0x0003f5cb) grid_highlight_cp2

0xf44d,	// (0x0003f5cb) bg_popup_sub_pane_cp1

0x2474,	// (0x000325f2) popup_ai_links_title_window_t1

0xa51b,	// (0x0003a699) ai_gene_pane_1_g1_ParamLimits

0xa51b,	// (0x0003a699) ai_gene_pane_1_g1

0xa527,	// (0x0003a6a5) ai_gene_pane_1_g2_ParamLimits

0xa527,	// (0x0003a6a5) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x0003fa8c) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x0003fa8c) ai_gene_pane_1_g

0xa534,	// (0x0003a6b2) ai_gene_pane_1_t1_ParamLimits

0xa534,	// (0x0003a6b2) ai_gene_pane_1_t1

0xa568,	// (0x0003a6e6) grid_ai_soft_ind_pane

0xa506,	// (0x0003a684) ai_gene_pane_2_t1_ParamLimits

0xa506,	// (0x0003a684) ai_gene_pane_2_t1

0x5be9,	// (0x00035d67) main_pane_empty_t1_ParamLimits

0x5be9,	// (0x00035d67) main_pane_empty_t1

0x5c01,	// (0x00035d7f) main_pane_empty_t2_ParamLimits

0x5c01,	// (0x00035d7f) main_pane_empty_t2

0x5c16,	// (0x00035d94) main_pane_empty_t3_ParamLimits

0x5c16,	// (0x00035d94) main_pane_empty_t3

0x5c28,	// (0x00035da6) main_pane_empty_t4_ParamLimits

0x5c28,	// (0x00035da6) main_pane_empty_t4

0x5c3a,	// (0x00035db8) main_pane_empty_t5_ParamLimits

0x5c3a,	// (0x00035db8) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0003f6f8) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0003f6f8) main_pane_empty_t

0x2a11,	// (0x00032b8f) bg_popup_window_pane_ParamLimits

0x2a11,	// (0x00032b8f) bg_popup_window_pane

0xa268,	// (0x0003a3e6) find_popup_pane_cp2_ParamLimits

0xa268,	// (0x0003a3e6) find_popup_pane_cp2

0xa274,	// (0x0003a3f2) heading_pane_ParamLimits

0xa274,	// (0x0003a3f2) heading_pane

0xf44d,	// (0x0003f5cb) bg_popup_sub_pane

0xa1e2,	// (0x0003a360) bg_popup_window_pane_g1_ParamLimits

0xa1e2,	// (0x0003a360) bg_popup_window_pane_g1

0xa1ee,	// (0x0003a36c) bg_popup_window_pane_g2_ParamLimits

0xa1ee,	// (0x0003a36c) bg_popup_window_pane_g2

0xa1fa,	// (0x0003a378) bg_popup_window_pane_g3_ParamLimits

0xa1fa,	// (0x0003a378) bg_popup_window_pane_g3

0xa206,	// (0x0003a384) bg_popup_window_pane_g4_ParamLimits

0xa206,	// (0x0003a384) bg_popup_window_pane_g4

0xa212,	// (0x0003a390) bg_popup_window_pane_g5_ParamLimits

0xa212,	// (0x0003a390) bg_popup_window_pane_g5

0xa21e,	// (0x0003a39c) bg_popup_window_pane_g6_ParamLimits

0xa21e,	// (0x0003a39c) bg_popup_window_pane_g6

0xa22a,	// (0x0003a3a8) bg_popup_window_pane_g7_ParamLimits

0xa22a,	// (0x0003a3a8) bg_popup_window_pane_g7

0xa236,	// (0x0003a3b4) bg_popup_window_pane_g8_ParamLimits

0xa236,	// (0x0003a3b4) bg_popup_window_pane_g8

0xa242,	// (0x0003a3c0) bg_popup_window_pane_g9_ParamLimits

0xa242,	// (0x0003a3c0) bg_popup_window_pane_g9

0xa24e,	// (0x0003a3cc) bg_popup_window_pane_g10_ParamLimits

0xa24e,	// (0x0003a3cc) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x0003fa54) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x0003fa54) bg_popup_window_pane_g

0xa177,	// (0x0003a2f5) bg_popup_heading_pane_ParamLimits

0xa177,	// (0x0003a2f5) bg_popup_heading_pane

0x7480,	// (0x000375fe) tabs_4_passive_pane_cp_srt_ParamLimits

0x7480,	// (0x000375fe) tabs_4_passive_pane_cp_srt

0x7492,	// (0x00037610) tabs_4_passive_pane_srt_ParamLimits

0xa18b,	// (0x0003a309) heading_pane_g2

0x7492,	// (0x00037610) tabs_4_passive_pane_srt

0x896f,	// (0x00038aed) bg_passive_tab_pane_cp3_srt_ParamLimits

0x896f,	// (0x00038aed) bg_passive_tab_pane_cp3_srt

0xa193,	// (0x0003a311) heading_pane_t1_ParamLimits

0xa193,	// (0x0003a311) heading_pane_t1

0xa1aa,	// (0x0003a328) heading_pane_t2_ParamLimits

0xa1aa,	// (0x0003a328) heading_pane_t2

0x0001,

0xf8d1,	// (0x0003fa4f) heading_pane_t_ParamLimits

0xf8d1,	// (0x0003fa4f) heading_pane_t

0x9ca2,	// (0x00039e20) bg_popup_heading_pane_g1

0x9d51,	// (0x00039ecf) bg_popup_heading_pane_g2

0x9d5b,	// (0x00039ed9) bg_popup_heading_pane_g3

0x9d65,	// (0x00039ee3) bg_popup_heading_pane_g4

0x9d6f,	// (0x00039eed) bg_popup_heading_pane_g5

0x9d79,	// (0x00039ef7) bg_popup_heading_pane_g6

0x9d81,	// (0x00039eff) bg_popup_heading_pane_g7

0x9d89,	// (0x00039f07) bg_popup_heading_pane_g8

0x9d93,	// (0x00039f11) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x0003fa0b) bg_popup_heading_pane_g

0x94b0,	// (0x0003962e) bg_popup_sub_pane_g1

0x94c0,	// (0x0003963e) bg_popup_sub_pane_g2

0x94b8,	// (0x00039636) bg_popup_sub_pane_g3

0x94d0,	// (0x0003964e) bg_popup_sub_pane_g4

0x94c8,	// (0x00039646) bg_popup_sub_pane_g5

0x94d8,	// (0x00039656) bg_popup_sub_pane_g6

0x94e0,	// (0x0003965e) bg_popup_sub_pane_g7

0x94f0,	// (0x0003966e) bg_popup_sub_pane_g8

0x94e8,	// (0x00039666) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x0003f9e5) bg_popup_sub_pane_g

0xf4a7,	// (0x0003f625) bg_popup_window_pane_cp5_ParamLimits

0xf4a7,	// (0x0003f625) bg_popup_window_pane_cp5

0x2491,	// (0x0003260f) popup_note_window_g1_ParamLimits

0x2491,	// (0x0003260f) popup_note_window_g1

0x249d,	// (0x0003261b) popup_note_window_t1_ParamLimits

0x249d,	// (0x0003261b) popup_note_window_t1

0x24b3,	// (0x00032631) popup_note_window_t2_ParamLimits

0x24b3,	// (0x00032631) popup_note_window_t2

0x24c9,	// (0x00032647) popup_note_window_t3_ParamLimits

0x24c9,	// (0x00032647) popup_note_window_t3

0x24df,	// (0x0003265d) popup_note_window_t4_ParamLimits

0x24df,	// (0x0003265d) popup_note_window_t4

0x2507,	// (0x00032685) popup_note_window_t5_ParamLimits

0x2507,	// (0x00032685) popup_note_window_t5

0x0004,

0xf585,	// (0x0003f703) popup_note_window_t_ParamLimits

0xf585,	// (0x0003f703) popup_note_window_t

0x252b,	// (0x000326a9) bg_popup_window_pane_cp6_ParamLimits

0x252b,	// (0x000326a9) bg_popup_window_pane_cp6

0x9c1e,	// (0x00039d9c) popup_note_image_window_g1_ParamLimits

0x9c1e,	// (0x00039d9c) popup_note_image_window_g1

0x9c2a,	// (0x00039da8) popup_note_image_window_g2_ParamLimits

0x9c2a,	// (0x00039da8) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x0003f9d9) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x0003f9d9) popup_note_image_window_g

0x9c43,	// (0x00039dc1) popup_note_image_window_t1_ParamLimits

0x9c43,	// (0x00039dc1) popup_note_image_window_t1

0x9c5c,	// (0x00039dda) popup_note_image_window_t2_ParamLimits

0x9c5c,	// (0x00039dda) popup_note_image_window_t2

0x9c75,	// (0x00039df3) popup_note_image_window_t3_ParamLimits

0x9c75,	// (0x00039df3) popup_note_image_window_t3

0x0002,

0xf860,	// (0x0003f9de) popup_note_image_window_t_ParamLimits

0xf860,	// (0x0003f9de) popup_note_image_window_t

0x9ade,	// (0x00039c5c) bg_popup_window_pane_cp7_ParamLimits

0x9ade,	// (0x00039c5c) bg_popup_window_pane_cp7

0x9b0e,	// (0x00039c8c) popup_note_wait_window_g1_ParamLimits

0x9b0e,	// (0x00039c8c) popup_note_wait_window_g1

0x9b1a,	// (0x00039c98) popup_note_wait_window_g2_ParamLimits

0x9b1a,	// (0x00039c98) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x0003f9c7) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x0003f9c7) popup_note_wait_window_g

0x9b32,	// (0x00039cb0) popup_note_wait_window_t1_ParamLimits

0x9b32,	// (0x00039cb0) popup_note_wait_window_t1

0x9b59,	// (0x00039cd7) popup_note_wait_window_t2_ParamLimits

0x9b59,	// (0x00039cd7) popup_note_wait_window_t2

0x9b77,	// (0x00039cf5) popup_note_wait_window_t3_ParamLimits

0x9b77,	// (0x00039cf5) popup_note_wait_window_t3

0x9b8a,	// (0x00039d08) popup_note_wait_window_t4_ParamLimits

0x9b8a,	// (0x00039d08) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x0003f9ce) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x0003f9ce) popup_note_wait_window_t

0x9baf,	// (0x00039d2d) wait_bar_pane_ParamLimits

0x9baf,	// (0x00039d2d) wait_bar_pane

0xf44d,	// (0x0003f5cb) wait_anim_pane

0xf44d,	// (0x0003f5cb) wait_border_pane

0xf443,	// (0x0003f5c1) wait_anim_pane_g1

0xf443,	// (0x0003f5c1) wait_anim_pane_g2

0x0001,

0xf704,	// (0x0003f882) wait_anim_pane_g

0x9a82,	// (0x00039c00) wait_border_pane_g1

0x9a8d,	// (0x00039c0b) wait_border_pane_g2

0x9a96,	// (0x00039c14) wait_border_pane_g3

0x0002,

0xf842,	// (0x0003f9c0) wait_border_pane_g

0x98ec,	// (0x00039a6a) bg_popup_window_pane_cp16_ParamLimits

0x98ec,	// (0x00039a6a) bg_popup_window_pane_cp16

0x99ec,	// (0x00039b6a) indicator_popup_pane_cp4_ParamLimits

0x99ec,	// (0x00039b6a) indicator_popup_pane_cp4

0x9a00,	// (0x00039b7e) popup_query_data_window_t1_ParamLimits

0x9a00,	// (0x00039b7e) popup_query_data_window_t1

0x9a12,	// (0x00039b90) popup_query_data_window_t2_ParamLimits

0x9a12,	// (0x00039b90) popup_query_data_window_t2

0x9a2b,	// (0x00039ba9) popup_query_data_window_t3_ParamLimits

0x9a2b,	// (0x00039ba9) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x0003f9b9) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x0003f9b9) popup_query_data_window_t

0x9a45,	// (0x00039bc3) query_popup_data_pane_ParamLimits

0x9a45,	// (0x00039bc3) query_popup_data_pane

0x9a59,	// (0x00039bd7) query_popup_data_pane_cp1_ParamLimits

0x9a59,	// (0x00039bd7) query_popup_data_pane_cp1

0x98ec,	// (0x00039a6a) bg_popup_window_pane_cp10_ParamLimits

0x98ec,	// (0x00039a6a) bg_popup_window_pane_cp10

0x991e,	// (0x00039a9c) indicator_popup_pane_ParamLimits

0x991e,	// (0x00039a9c) indicator_popup_pane

0x9940,	// (0x00039abe) popup_query_code_window_t1_ParamLimits

0x9940,	// (0x00039abe) popup_query_code_window_t1

0x995a,	// (0x00039ad8) popup_query_code_window_t2_ParamLimits

0x995a,	// (0x00039ad8) popup_query_code_window_t2

0x99a3,	// (0x00039b21) popup_query_code_window_t3_ParamLimits

0x99a3,	// (0x00039b21) popup_query_code_window_t3

0x0002,

0xf834,	// (0x0003f9b2) popup_query_code_window_t_ParamLimits

0xf834,	// (0x0003f9b2) popup_query_code_window_t

0x99d2,	// (0x00039b50) query_popup_pane_ParamLimits

0x99d2,	// (0x00039b50) query_popup_pane

0x252b,	// (0x000326a9) bg_popup_window_pane_cp15_ParamLimits

0x252b,	// (0x000326a9) bg_popup_window_pane_cp15

0x254b,	// (0x000326c9) indicator_popup_pane_cp1_ParamLimits

0x254b,	// (0x000326c9) indicator_popup_pane_cp1

0x255e,	// (0x000326dc) indicator_popup_pane_cp2_ParamLimits

0x255e,	// (0x000326dc) indicator_popup_pane_cp2

0x2579,	// (0x000326f7) popup_query_data_code_window_g1_ParamLimits

0x2579,	// (0x000326f7) popup_query_data_code_window_g1

0x258c,	// (0x0003270a) popup_query_data_code_window_t1_ParamLimits

0x258c,	// (0x0003270a) popup_query_data_code_window_t1

0x259e,	// (0x0003271c) popup_query_data_code_window_t2_ParamLimits

0x259e,	// (0x0003271c) popup_query_data_code_window_t2

0x25b0,	// (0x0003272e) popup_query_data_code_window_t3_ParamLimits

0x25b0,	// (0x0003272e) popup_query_data_code_window_t3

0x25c6,	// (0x00032744) popup_query_data_code_window_t4_ParamLimits

0x25c6,	// (0x00032744) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0003f70e) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0003f70e) popup_query_data_code_window_t

0x704c,	// (0x000371ca) list_single_midp_graphic_pane_g3

0x25e0,	// (0x0003275e) query_popup_data_pane_cp2_ParamLimits

0x25f3,	// (0x00032771) query_popup_pane_cp2_ParamLimits

0x25f3,	// (0x00032771) query_popup_pane_cp2

0xf44d,	// (0x0003f5cb) bg_popup_window_pane_cp11

0x98e4,	// (0x00039a62) heading_pane_cp5

0x2689,	// (0x00032807) listscroll_popup_info_pane

0xf44d,	// (0x0003f5cb) input_focus_pane_cp3

0x260e,	// (0x0003278c) query_popup_pane_t1

0x261c,	// (0x0003279a) list_popup_info_pane_ParamLimits

0x261c,	// (0x0003279a) list_popup_info_pane

0x262b,	// (0x000327a9) listscroll_popup_info_pane_g1

0x2633,	// (0x000327b1) scroll_pane_cp7

0x263d,	// (0x000327bb) popup_info_list_pane_t1_ParamLimits

0x263d,	// (0x000327bb) popup_info_list_pane_t1

0x2657,	// (0x000327d5) popup_info_list_pane_t2_ParamLimits

0x2657,	// (0x000327d5) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0003f717) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0003f717) popup_info_list_pane_t

0xf44d,	// (0x0003f5cb) bg_popup_window_pane_cp12

0xacb5,	// (0x0003ae33) find_popup_pane

0x2350,	// (0x000324ce) bg_popup_window_pane_cp3

0x2671,	// (0x000327ef) heading_pane_cp3

0x267d,	// (0x000327fb) listscroll_popup_graphic_pane

0xf44d,	// (0x0003f5cb) bg_popup_window_pane_cp4

0x5c9c,	// (0x00035e1a) heading_pane_cp4

0x2689,	// (0x00032807) listscroll_popup_colour_pane

0x5ca6,	// (0x00035e24) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x5ca6,	// (0x00035e24) cell_large_graphic_colour_none_popup_pane

0x5cba,	// (0x00035e38) grid_large_graphic_colour_popup_pane_ParamLimits

0x5cba,	// (0x00035e38) grid_large_graphic_colour_popup_pane

0x5ce6,	// (0x00035e64) listscroll_popup_colour_pane_g1_ParamLimits

0x5ce6,	// (0x00035e64) listscroll_popup_colour_pane_g1

0x5cfd,	// (0x00035e7b) listscroll_popup_colour_pane_g2_ParamLimits

0x5cfd,	// (0x00035e7b) listscroll_popup_colour_pane_g2

0x5d14,	// (0x00035e92) listscroll_popup_colour_pane_g3_ParamLimits

0x5d14,	// (0x00035e92) listscroll_popup_colour_pane_g3

0x5d24,	// (0x00035ea2) listscroll_popup_colour_pane_g4_ParamLimits

0x5d24,	// (0x00035ea2) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0003f71c) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0003f71c) listscroll_popup_colour_pane_g

0x2691,	// (0x0003280f) scroll_pane_cp6_ParamLimits

0x2691,	// (0x0003280f) scroll_pane_cp6

0x5d38,	// (0x00035eb6) cell_large_graphic_colour_popup_pane_ParamLimits

0x5d38,	// (0x00035eb6) cell_large_graphic_colour_popup_pane

0x26a3,	// (0x00032821) cell_large_graphic_colour_none_popup_pane_t1

0xf44d,	// (0x0003f5cb) grid_highlight_pane_cp5

0x26b2,	// (0x00032830) cell_large_graphic_colour_popup_pane_g1

0x26ba,	// (0x00032838) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0003f725) cell_large_graphic_colour_popup_pane_g

0x26c2,	// (0x00032840) cell_large_graphic_colour_popup_pane_g2_copy1

0x26cb,	// (0x00032849) grid_highlight_pane_cp4

0x26d3,	// (0x00032851) bg_popup_window_pane_cp8_ParamLimits

0x26d3,	// (0x00032851) bg_popup_window_pane_cp8

0x26ee,	// (0x0003286c) popup_snote_single_text_window_g1_ParamLimits

0x26ee,	// (0x0003286c) popup_snote_single_text_window_g1

0x2700,	// (0x0003287e) popup_snote_single_text_window_t1_ParamLimits

0x2700,	// (0x0003287e) popup_snote_single_text_window_t1

0x2713,	// (0x00032891) popup_snote_single_text_window_t2_ParamLimits

0x2713,	// (0x00032891) popup_snote_single_text_window_t2

0x2726,	// (0x000328a4) popup_snote_single_text_window_t3_ParamLimits

0x2726,	// (0x000328a4) popup_snote_single_text_window_t3

0x275f,	// (0x000328dd) popup_snote_single_text_window_t4_ParamLimits

0x275f,	// (0x000328dd) popup_snote_single_text_window_t4

0x2793,	// (0x00032911) popup_snote_single_text_window_t5_ParamLimits

0x2793,	// (0x00032911) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0003f72a) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0003f72a) popup_snote_single_text_window_t

0x27c2,	// (0x00032940) bg_popup_window_pane_cp9_ParamLimits

0x27c2,	// (0x00032940) bg_popup_window_pane_cp9

0x26ee,	// (0x0003286c) popup_snote_single_graphic_window_g1_ParamLimits

0x26ee,	// (0x0003286c) popup_snote_single_graphic_window_g1

0x27d0,	// (0x0003294e) popup_snote_single_graphic_window_g2_ParamLimits

0x27d0,	// (0x0003294e) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0003f735) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0003f735) popup_snote_single_graphic_window_g

0x27dc,	// (0x0003295a) popup_snote_single_graphic_window_t1_ParamLimits

0x27dc,	// (0x0003295a) popup_snote_single_graphic_window_t1

0x27ef,	// (0x0003296d) popup_snote_single_graphic_window_t2_ParamLimits

0x27ef,	// (0x0003296d) popup_snote_single_graphic_window_t2

0x2802,	// (0x00032980) popup_snote_single_graphic_window_t3_ParamLimits

0x2802,	// (0x00032980) popup_snote_single_graphic_window_t3

0x283b,	// (0x000329b9) popup_snote_single_graphic_window_t4_ParamLimits

0x283b,	// (0x000329b9) popup_snote_single_graphic_window_t4

0x286f,	// (0x000329ed) popup_snote_single_graphic_window_t5_ParamLimits

0x286f,	// (0x000329ed) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0003f73a) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0003f73a) popup_snote_single_graphic_window_t

0xabf3,	// (0x0003ad71) grid_graphic_popup_pane_ParamLimits

0xabf3,	// (0x0003ad71) grid_graphic_popup_pane

0xac21,	// (0x0003ad9f) listscroll_popup_graphic_pane_g1_ParamLimits

0xac21,	// (0x0003ad9f) listscroll_popup_graphic_pane_g1

0xac35,	// (0x0003adb3) listscroll_popup_graphic_pane_g2_ParamLimits

0xac35,	// (0x0003adb3) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x0003fb2f) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x0003fb2f) listscroll_popup_graphic_pane_g

0xac49,	// (0x0003adc7) scroll_pane_cp5

0xab9b,	// (0x0003ad19) cell_graphic_popup_pane_ParamLimits

0xab9b,	// (0x0003ad19) cell_graphic_popup_pane

0xab7c,	// (0x0003acfa) cell_graphic_popup_pane_g1

0xab84,	// (0x0003ad02) cell_graphic_popup_pane_g2

0x26c2,	// (0x00032840) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x0003fb28) cell_graphic_popup_pane_g

0xab8d,	// (0x0003ad0b) cell_graphic_popup_pane_t2

0x26cb,	// (0x00032849) grid_highlight_pane_cp3

0x28b0,	// (0x00032a2e) list_gen_pane_ParamLimits

0x28b0,	// (0x00032a2e) list_gen_pane

0x28d8,	// (0x00032a56) scroll_pane

0xaad4,	// (0x0003ac52) bg_list_pane_g1_ParamLimits

0xaad4,	// (0x0003ac52) bg_list_pane_g1

0xaaf1,	// (0x0003ac6f) bg_list_pane_g2_ParamLimits

0xaaf1,	// (0x0003ac6f) bg_list_pane_g2

0xab06,	// (0x0003ac84) bg_list_pane_g3_ParamLimits

0xab06,	// (0x0003ac84) bg_list_pane_g3

0xab1a,	// (0x0003ac98) bg_list_pane_g4_ParamLimits

0xab1a,	// (0x0003ac98) bg_list_pane_g4

0xab2e,	// (0x0003acac) bg_list_pane_g5_ParamLimits

0xab2e,	// (0x0003acac) bg_list_pane_g5

0x0004,

0xf99f,	// (0x0003fb1d) bg_list_pane_g_ParamLimits

0xf99f,	// (0x0003fb1d) bg_list_pane_g

0x7417,	// (0x00037595) list_double2_graphic_large_graphic_pane_ParamLimits

0x7417,	// (0x00037595) list_double2_graphic_large_graphic_pane

0x7417,	// (0x00037595) list_double2_graphic_pane_ParamLimits

0x7417,	// (0x00037595) list_double2_graphic_pane

0x7417,	// (0x00037595) list_double2_large_graphic_pane_ParamLimits

0x7417,	// (0x00037595) list_double2_large_graphic_pane

0x7417,	// (0x00037595) list_double2_pane_ParamLimits

0x7417,	// (0x00037595) list_double2_pane

0x7417,	// (0x00037595) list_double_graphic_heading_pane_ParamLimits

0x7417,	// (0x00037595) list_double_graphic_heading_pane

0x7417,	// (0x00037595) list_double_graphic_pane_ParamLimits

0x7417,	// (0x00037595) list_double_graphic_pane

0x7417,	// (0x00037595) list_double_heading_pane_ParamLimits

0x7417,	// (0x00037595) list_double_heading_pane

0x7417,	// (0x00037595) list_double_large_graphic_pane_ParamLimits

0x7417,	// (0x00037595) list_double_large_graphic_pane

0x7417,	// (0x00037595) list_double_number_pane_ParamLimits

0x7417,	// (0x00037595) list_double_number_pane

0x7417,	// (0x00037595) list_double_pane_ParamLimits

0x7417,	// (0x00037595) list_double_pane

0x7417,	// (0x00037595) list_double_time_pane_ParamLimits

0x7417,	// (0x00037595) list_double_time_pane

0x7417,	// (0x00037595) list_setting_number_pane_ParamLimits

0x7417,	// (0x00037595) list_setting_number_pane

0x7417,	// (0x00037595) list_setting_pane_ParamLimits

0x7417,	// (0x00037595) list_setting_pane

0xaa90,	// (0x0003ac0e) list_single_2graphic_pane_ParamLimits

0xaa90,	// (0x0003ac0e) list_single_2graphic_pane

0xaa90,	// (0x0003ac0e) list_single_graphic_heading_pane_ParamLimits

0xaa90,	// (0x0003ac0e) list_single_graphic_heading_pane

0xaa90,	// (0x0003ac0e) list_single_graphic_pane_ParamLimits

0xaa90,	// (0x0003ac0e) list_single_graphic_pane

0xaa90,	// (0x0003ac0e) list_single_heading_pane_ParamLimits

0xaa90,	// (0x0003ac0e) list_single_heading_pane

0x7441,	// (0x000375bf) list_single_large_graphic_pane_ParamLimits

0x7441,	// (0x000375bf) list_single_large_graphic_pane

0xaa90,	// (0x0003ac0e) list_single_number_heading_pane_ParamLimits

0xaa90,	// (0x0003ac0e) list_single_number_heading_pane

0xaa90,	// (0x0003ac0e) list_single_number_pane_ParamLimits

0xaa90,	// (0x0003ac0e) list_single_number_pane

0xaa90,	// (0x0003ac0e) list_single_pane_ParamLimits

0xaa90,	// (0x0003ac0e) list_single_pane

0xf44d,	// (0x0003f5cb) list_highlight_pane_cp1

0x4700,	// (0x0003487e) list_single_pane_g1_ParamLimits

0x4700,	// (0x0003487e) list_single_pane_g1

0x5d73,	// (0x00035ef1) list_single_pane_g2_ParamLimits

0x5d73,	// (0x00035ef1) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0003f74c) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0003f74c) list_single_pane_g

0x7401,	// (0x0003757f) list_single_pane_t1_ParamLimits

0x7401,	// (0x0003757f) list_single_pane_t1

0x4700,	// (0x0003487e) list_single_number_pane_g1_ParamLimits

0x4700,	// (0x0003487e) list_single_number_pane_g1

0x5d73,	// (0x00035ef1) list_single_number_pane_g2_ParamLimits

0x5d73,	// (0x00035ef1) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0003f74c) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0003f74c) list_single_number_pane_g

0x7333,	// (0x000374b1) list_single_number_pane_t1_ParamLimits

0x7333,	// (0x000374b1) list_single_number_pane_t1

0x7349,	// (0x000374c7) list_single_number_pane_t2_ParamLimits

0x7349,	// (0x000374c7) list_single_number_pane_t2

0x0001,

0xf960,	// (0x0003fade) list_single_number_pane_t_ParamLimits

0xf960,	// (0x0003fade) list_single_number_pane_t

0x5d67,	// (0x00035ee5) list_single_graphic_pane_g1_ParamLimits

0x5d67,	// (0x00035ee5) list_single_graphic_pane_g1

0x4700,	// (0x0003487e) list_single_graphic_pane_g2_ParamLimits

0x4700,	// (0x0003487e) list_single_graphic_pane_g2

0x5d73,	// (0x00035ef1) list_single_graphic_pane_g3_ParamLimits

0x5d73,	// (0x00035ef1) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0003f745) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0003f745) list_single_graphic_pane_g

0x5d7f,	// (0x00035efd) list_single_graphic_pane_t1_ParamLimits

0x5d7f,	// (0x00035efd) list_single_graphic_pane_t1

0x4700,	// (0x0003487e) list_single_heading_pane_g1_ParamLimits

0x4700,	// (0x0003487e) list_single_heading_pane_g1

0x5d73,	// (0x00035ef1) list_single_heading_pane_g2_ParamLimits

0x5d73,	// (0x00035ef1) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0003f74c) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0003f74c) list_single_heading_pane_g

0x5d95,	// (0x00035f13) list_single_heading_pane_t1_ParamLimits

0x5d95,	// (0x00035f13) list_single_heading_pane_t1

0x5dab,	// (0x00035f29) list_single_heading_pane_t2_ParamLimits

0x5dab,	// (0x00035f29) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0003f751) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0003f751) list_single_heading_pane_t

0x4700,	// (0x0003487e) list_single_number_heading_pane_g1_ParamLimits

0x4700,	// (0x0003487e) list_single_number_heading_pane_g1

0x5d73,	// (0x00035ef1) list_single_number_heading_pane_g2_ParamLimits

0x5d73,	// (0x00035ef1) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0003f74c) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0003f74c) list_single_number_heading_pane_g

0x5d95,	// (0x00035f13) list_single_number_heading_pane_t1_ParamLimits

0x5d95,	// (0x00035f13) list_single_number_heading_pane_t1

0x5dbd,	// (0x00035f3b) list_single_number_heading_pane_t2_ParamLimits

0x5dbd,	// (0x00035f3b) list_single_number_heading_pane_t2

0x5dcf,	// (0x00035f4d) list_single_number_heading_pane_t3_ParamLimits

0x5dcf,	// (0x00035f4d) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0003f756) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0003f756) list_single_number_heading_pane_t

0x5de1,	// (0x00035f5f) list_single_graphic_heading_pane_g1_ParamLimits

0x5de1,	// (0x00035f5f) list_single_graphic_heading_pane_g1

0x5ded,	// (0x00035f6b) list_single_graphic_heading_pane_g4_ParamLimits

0x5ded,	// (0x00035f6b) list_single_graphic_heading_pane_g4

0x5d73,	// (0x00035ef1) list_single_graphic_heading_pane_g5_ParamLimits

0x5d73,	// (0x00035ef1) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0003f75d) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0003f75d) list_single_graphic_heading_pane_g

0x5d95,	// (0x00035f13) list_single_graphic_heading_pane_t1_ParamLimits

0x5d95,	// (0x00035f13) list_single_graphic_heading_pane_t1

0x5dfe,	// (0x00035f7c) list_single_graphic_heading_pane_t2_ParamLimits

0x5dfe,	// (0x00035f7c) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0003f764) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0003f764) list_single_graphic_heading_pane_t

0x5e10,	// (0x00035f8e) list_single_large_graphic_pane_g1_ParamLimits

0x5e10,	// (0x00035f8e) list_single_large_graphic_pane_g1

0x4700,	// (0x0003487e) list_single_large_graphic_pane_g2_ParamLimits

0x4700,	// (0x0003487e) list_single_large_graphic_pane_g2

0x5d73,	// (0x00035ef1) list_single_large_graphic_pane_g3_ParamLimits

0x5d73,	// (0x00035ef1) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0003f769) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0003f769) list_single_large_graphic_pane_g

0x9a8d,	// (0x00039c0b) wait_border_pane_g2_copy1

0x5e1c,	// (0x00035f9a) list_single_large_graphic_pane_g4_cp2

0x5d95,	// (0x00035f13) list_single_large_graphic_pane_t1_ParamLimits

0x5d95,	// (0x00035f13) list_single_large_graphic_pane_t1

0x5e24,	// (0x00035fa2) list_double_pane_g1_ParamLimits

0x5e24,	// (0x00035fa2) list_double_pane_g1

0x5e30,	// (0x00035fae) list_double_pane_g2_ParamLimits

0x5e30,	// (0x00035fae) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0003f770) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0003f770) list_double_pane_g

0x5e3c,	// (0x00035fba) list_double_pane_t1_ParamLimits

0x5e3c,	// (0x00035fba) list_double_pane_t1

0x5e52,	// (0x00035fd0) list_double_pane_t2_ParamLimits

0x5e52,	// (0x00035fd0) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0003f775) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0003f775) list_double_pane_t

0x5e64,	// (0x00035fe2) list_double2_pane_g1_ParamLimits

0x5e64,	// (0x00035fe2) list_double2_pane_g1

0x5e30,	// (0x00035fae) list_double2_pane_g2_ParamLimits

0x5e30,	// (0x00035fae) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0003f77a) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0003f77a) list_double2_pane_g

0x5e3c,	// (0x00035fba) list_double2_pane_t1_ParamLimits

0x5e3c,	// (0x00035fba) list_double2_pane_t1

0x5e75,	// (0x00035ff3) list_double2_pane_t2_ParamLimits

0x5e75,	// (0x00035ff3) list_double2_pane_t2

0x0001,

0xf601,	// (0x0003f77f) list_double2_pane_t_ParamLimits

0xf601,	// (0x0003f77f) list_double2_pane_t

0x5e24,	// (0x00035fa2) list_double_number_pane_g1_ParamLimits

0x5e24,	// (0x00035fa2) list_double_number_pane_g1

0x5e30,	// (0x00035fae) list_double_number_pane_g2_ParamLimits

0x5e30,	// (0x00035fae) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0003f770) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0003f770) list_double_number_pane_g

0x5e87,	// (0x00036005) list_double_number_pane_t1_ParamLimits

0x5e87,	// (0x00036005) list_double_number_pane_t1

0x5e99,	// (0x00036017) list_double_number_pane_t2_ParamLimits

0x5e99,	// (0x00036017) list_double_number_pane_t2

0x5eaf,	// (0x0003602d) list_double_number_pane_t3_ParamLimits

0x5eaf,	// (0x0003602d) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0003f784) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0003f784) list_double_number_pane_t

0x5ec1,	// (0x0003603f) list_double_graphic_pane_g1_ParamLimits

0x5ec1,	// (0x0003603f) list_double_graphic_pane_g1

0x5ecd,	// (0x0003604b) list_double_graphic_pane_g2_ParamLimits

0x5ecd,	// (0x0003604b) list_double_graphic_pane_g2

0x5edc,	// (0x0003605a) list_double_graphic_pane_g3_ParamLimits

0x5edc,	// (0x0003605a) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0003f78b) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0003f78b) list_double_graphic_pane_g

0x5ef4,	// (0x00036072) list_double_graphic_pane_t1_ParamLimits

0x5ef4,	// (0x00036072) list_double_graphic_pane_t1

0x5f0a,	// (0x00036088) list_double_graphic_pane_t2_ParamLimits

0x5f0a,	// (0x00036088) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0003f794) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0003f794) list_double_graphic_pane_t

0x5ec1,	// (0x0003603f) list_double2_graphic_pane_g1_ParamLimits

0x5ec1,	// (0x0003603f) list_double2_graphic_pane_g1

0x5f1c,	// (0x0003609a) list_double2_graphic_pane_g2_ParamLimits

0x5f1c,	// (0x0003609a) list_double2_graphic_pane_g2

0x5f28,	// (0x000360a6) list_double2_graphic_pane_g3_ParamLimits

0x5f28,	// (0x000360a6) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0003f799) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0003f799) list_double2_graphic_pane_g

0x5e99,	// (0x00036017) list_double2_graphic_pane_t1_ParamLimits

0x5e99,	// (0x00036017) list_double2_graphic_pane_t1

0x5f34,	// (0x000360b2) list_double2_graphic_pane_t2_ParamLimits

0x5f34,	// (0x000360b2) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0003f7a0) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0003f7a0) list_double2_graphic_pane_t

0x5f46,	// (0x000360c4) list_double_large_graphic_pane_g1_ParamLimits

0x5f46,	// (0x000360c4) list_double_large_graphic_pane_g1

0x5e64,	// (0x00035fe2) list_double_large_graphic_pane_g2_ParamLimits

0x5e64,	// (0x00035fe2) list_double_large_graphic_pane_g2

0x5e30,	// (0x00035fae) list_double_large_graphic_pane_g3_ParamLimits

0x5e30,	// (0x00035fae) list_double_large_graphic_pane_g3

0x5f71,	// (0x000360ef) list_double_large_graphic_pane_g4_ParamLimits

0x5f71,	// (0x000360ef) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0003f7a5) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0003f7a5) list_double_large_graphic_pane_g

0x5f84,	// (0x00036102) list_double_large_graphic_pane_t1_ParamLimits

0x5f84,	// (0x00036102) list_double_large_graphic_pane_t1

0x5f9d,	// (0x0003611b) list_double_large_graphic_pane_t2_ParamLimits

0x5f9d,	// (0x0003611b) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0003f7b0) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0003f7b0) list_double_large_graphic_pane_t

0x5faf,	// (0x0003612d) list_double2_large_graphic_pane_g1_ParamLimits

0x5faf,	// (0x0003612d) list_double2_large_graphic_pane_g1

0x5e64,	// (0x00035fe2) list_double2_large_graphic_pane_g2_ParamLimits

0x5e64,	// (0x00035fe2) list_double2_large_graphic_pane_g2

0x5e30,	// (0x00035fae) list_double2_large_graphic_pane_g3_ParamLimits

0x5e30,	// (0x00035fae) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0003f7b5) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0003f7b5) list_double2_large_graphic_pane_g

0x5fbb,	// (0x00036139) list_double2_large_graphic_pane_t1_ParamLimits

0x5fbb,	// (0x00036139) list_double2_large_graphic_pane_t1

0x5fd1,	// (0x0003614f) list_double2_large_graphic_pane_t2_ParamLimits

0x5fd1,	// (0x0003614f) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0003f7bc) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0003f7bc) list_double2_large_graphic_pane_t

0x5fe3,	// (0x00036161) list_double_heading_pane_g1_ParamLimits

0x5fe3,	// (0x00036161) list_double_heading_pane_g1

0x5ff4,	// (0x00036172) list_double_heading_pane_g2_ParamLimits

0x5ff4,	// (0x00036172) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0003f7c1) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0003f7c1) list_double_heading_pane_g

0x6000,	// (0x0003617e) list_double_heading_pane_t1_ParamLimits

0x6000,	// (0x0003617e) list_double_heading_pane_t1

0x6016,	// (0x00036194) list_double_heading_pane_t2_ParamLimits

0x6016,	// (0x00036194) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0003f7c6) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0003f7c6) list_double_heading_pane_t

0x6028,	// (0x000361a6) list_double_graphic_heading_pane_g1_ParamLimits

0x6028,	// (0x000361a6) list_double_graphic_heading_pane_g1

0x5fe3,	// (0x00036161) list_double_graphic_heading_pane_g2_ParamLimits

0x5fe3,	// (0x00036161) list_double_graphic_heading_pane_g2

0x5ff4,	// (0x00036172) list_double_graphic_heading_pane_g3_ParamLimits

0x5ff4,	// (0x00036172) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0003f7cb) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0003f7cb) list_double_graphic_heading_pane_g

0x6034,	// (0x000361b2) list_double_graphic_heading_pane_t1_ParamLimits

0x6034,	// (0x000361b2) list_double_graphic_heading_pane_t1

0x604a,	// (0x000361c8) list_double_graphic_heading_pane_t2_ParamLimits

0x604a,	// (0x000361c8) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0003f7d2) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0003f7d2) list_double_graphic_heading_pane_t

0x5e64,	// (0x00035fe2) list_double_time_pane_g1_ParamLimits

0x5e64,	// (0x00035fe2) list_double_time_pane_g1

0x5e30,	// (0x00035fae) list_double_time_pane_g2_ParamLimits

0x5e30,	// (0x00035fae) list_double_time_pane_g2

0x0001,

0xf5fc,	// (0x0003f77a) list_double_time_pane_g_ParamLimits

0xf5fc,	// (0x0003f77a) list_double_time_pane_g

0x5fbb,	// (0x00036139) list_double_time_pane_t1_ParamLimits

0x5fbb,	// (0x00036139) list_double_time_pane_t1

0x605c,	// (0x000361da) list_double_time_pane_t2_ParamLimits

0x605c,	// (0x000361da) list_double_time_pane_t2

0x606e,	// (0x000361ec) list_double_time_pane_t3_ParamLimits

0x606e,	// (0x000361ec) list_double_time_pane_t3

0x6080,	// (0x000361fe) list_double_time_pane_t4_ParamLimits

0x6080,	// (0x000361fe) list_double_time_pane_t4

0x0003,

0xf659,	// (0x0003f7d7) list_double_time_pane_t_ParamLimits

0xf659,	// (0x0003f7d7) list_double_time_pane_t

0x6092,	// (0x00036210) list_setting_pane_g1_ParamLimits

0x6092,	// (0x00036210) list_setting_pane_g1

0x609e,	// (0x0003621c) list_setting_pane_g2_ParamLimits

0x609e,	// (0x0003621c) list_setting_pane_g2

0x0001,

0xf662,	// (0x0003f7e0) list_setting_pane_g_ParamLimits

0xf662,	// (0x0003f7e0) list_setting_pane_g

0x60aa,	// (0x00036228) list_setting_pane_t1_ParamLimits

0x60aa,	// (0x00036228) list_setting_pane_t1

0x60c4,	// (0x00036242) list_setting_pane_t2_ParamLimits

0x60c4,	// (0x00036242) list_setting_pane_t2

0x0002,

0xf667,	// (0x0003f7e5) list_setting_pane_t_ParamLimits

0xf667,	// (0x0003f7e5) list_setting_pane_t

0x6103,	// (0x00036281) set_value_pane_cp_ParamLimits

0x6103,	// (0x00036281) set_value_pane_cp

0x6111,	// (0x0003628f) list_setting_number_pane_g1_ParamLimits

0x6111,	// (0x0003628f) list_setting_number_pane_g1

0x611d,	// (0x0003629b) list_setting_number_pane_g2_ParamLimits

0x611d,	// (0x0003629b) list_setting_number_pane_g2

0x0001,

0xf66e,	// (0x0003f7ec) list_setting_number_pane_g_ParamLimits

0xf66e,	// (0x0003f7ec) list_setting_number_pane_g

0x6129,	// (0x000362a7) list_setting_number_pane_t1_ParamLimits

0x6129,	// (0x000362a7) list_setting_number_pane_t1

0x6142,	// (0x000362c0) list_setting_number_pane_t2_ParamLimits

0x6142,	// (0x000362c0) list_setting_number_pane_t2

0x615c,	// (0x000362da) list_setting_number_pane_t3_ParamLimits

0x615c,	// (0x000362da) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x0003f7f1) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x0003f7f1) list_setting_number_pane_t

0x6103,	// (0x00036281) set_value_pane_ParamLimits

0x6103,	// (0x00036281) set_value_pane

0x290c,	// (0x00032a8a) bg_set_opt_pane_ParamLimits

0x290c,	// (0x00032a8a) bg_set_opt_pane

0x413b,	// (0x000342b9) set_value_pane_t1

0x292d,	// (0x00032aab) slider_set_pane_cp3

0x2936,	// (0x00032ab4) volume_small_pane_cp

0x293f,	// (0x00032abd) list_form_gen_pane

0x2948,	// (0x00032ac6) scroll_pane_cp8

0x619f,	// (0x0003631d) form_field_data_pane_ParamLimits

0x619f,	// (0x0003631d) form_field_data_pane

0x61bd,	// (0x0003633b) form_field_data_wide_pane_ParamLimits

0x61bd,	// (0x0003633b) form_field_data_wide_pane

0x4159,	// (0x000342d7) form_field_popup_pane_ParamLimits

0x4159,	// (0x000342d7) form_field_popup_pane

0x61e2,	// (0x00036360) form_field_popup_wide_pane_ParamLimits

0x61e2,	// (0x00036360) form_field_popup_wide_pane

0x417b,	// (0x000342f9) form_field_slider_pane_ParamLimits

0x417b,	// (0x000342f9) form_field_slider_pane

0x418e,	// (0x0003430c) form_field_slider_wide_pane_ParamLimits

0x418e,	// (0x0003430c) form_field_slider_wide_pane

0x2959,	// (0x00032ad7) data_form_pane

0x620d,	// (0x0003638b) form_field_data_pane_t1

0x2965,	// (0x00032ae3) input_focus_pane

0x41a1,	// (0x0003431f) data_form_wide_pane

0x41be,	// (0x0003433c) form_field_data_wide_pane_t1

0x26e0,	// (0x0003285e) input_focus_pane_cp6

0x6227,	// (0x000363a5) form_field_popup_pane_t1

0x2965,	// (0x00032ae3) input_focus_pane_cp7

0x2993,	// (0x00032b11) list_form_pane

0x41e8,	// (0x00034366) form_field_popup_wide_pane_t1

0x2965,	// (0x00032ae3) input_focus_pane_cp8

0x299f,	// (0x00032b1d) list_form_wide_pane

0x6249,	// (0x000363c7) form_field_slider_pane_t1_ParamLimits

0x6249,	// (0x000363c7) form_field_slider_pane_t1

0x6261,	// (0x000363df) form_field_slider_pane_t2_ParamLimits

0x6261,	// (0x000363df) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x0003f801) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x0003f801) form_field_slider_pane_t

0xf4a7,	// (0x0003f625) input_focus_pane_cp9_ParamLimits

0xf4a7,	// (0x0003f625) input_focus_pane_cp9

0x6276,	// (0x000363f4) slider_cont_pane_ParamLimits

0x6276,	// (0x000363f4) slider_cont_pane

0x29ae,	// (0x00032b2c) form_field_slider_wide_pane_t1_ParamLimits

0x29ae,	// (0x00032b2c) form_field_slider_wide_pane_t1

0x41fd,	// (0x0003437b) form_field_slider_wide_pane_t2_ParamLimits

0x41fd,	// (0x0003437b) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x0003f806) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x0003f806) form_field_slider_wide_pane_t

0xf4a7,	// (0x0003f625) input_focus_pane_cp10_ParamLimits

0xf4a7,	// (0x0003f625) input_focus_pane_cp10

0x628a,	// (0x00036408) slider_cont_pane_cp1_ParamLimits

0x628a,	// (0x00036408) slider_cont_pane_cp1

0x629e,	// (0x0003641c) slider_form_pane_cp

0x29c0,	// (0x00032b3e) input_focus_pane_g1

0x29c8,	// (0x00032b46) input_focus_pane_g2

0x29d0,	// (0x00032b4e) input_focus_pane_g3

0x29d8,	// (0x00032b56) input_focus_pane_g4

0x29e0,	// (0x00032b5e) input_focus_pane_g5

0x29e8,	// (0x00032b66) input_focus_pane_g6

0x29f0,	// (0x00032b6e) input_focus_pane_g7

0x29f8,	// (0x00032b76) input_focus_pane_g8

0x2a00,	// (0x00032b7e) input_focus_pane_g9

0xf443,	// (0x0003f5c1) input_focus_pane_g10

0x0009,

0xf68d,	// (0x0003f80b) input_focus_pane_g

0x9a96,	// (0x00039c14) wait_border_pane_g3_copy1

0x62a6,	// (0x00036424) data_form_pane_t1

0xf443,	// (0x0003f5c1) wait_anim_pane_g1_copy1

0x73d3,	// (0x00037551) data_form_wide_pane_t1

0x62c3,	// (0x00036441) list_form_graphic_pane_cp_ParamLimits

0x62c3,	// (0x00036441) list_form_graphic_pane_cp

0xaa09,	// (0x0003ab87) slider_form_pane_g1

0xaa12,	// (0x0003ab90) slider_form_pane_g2

0x0006,

0xf990,	// (0x0003fb0e) slider_form_pane_g

0x420f,	// (0x0003438d) list_form_graphic_pane_ParamLimits

0x420f,	// (0x0003438d) list_form_graphic_pane

0x4221,	// (0x0003439f) list_form_graphic_pane_g1

0x4229,	// (0x000343a7) list_form_graphic_pane_t1_ParamLimits

0x4229,	// (0x000343a7) list_form_graphic_pane_t1

0x2350,	// (0x000324ce) list_highlight_pane_cp5_ParamLimits

0x2350,	// (0x000324ce) list_highlight_pane_cp5

0x62d8,	// (0x00036456) find_pane_g1

0x2a08,	// (0x00032b86) input_find_pane

0x62e1,	// (0x0003645f) input_find_pane_g1_ParamLimits

0x62e1,	// (0x0003645f) input_find_pane_g1

0x62ed,	// (0x0003646b) input_find_pane_t1_ParamLimits

0x62ed,	// (0x0003646b) input_find_pane_t1

0x6302,	// (0x00036480) input_find_pane_t2_ParamLimits

0x6302,	// (0x00036480) input_find_pane_t2

0x0001,

0xf6a2,	// (0x0003f820) input_find_pane_t_ParamLimits

0xf6a2,	// (0x0003f820) input_find_pane_t

0x2a11,	// (0x00032b8f) input_focus_pane_cp5_ParamLimits

0x2a11,	// (0x00032b8f) input_focus_pane_cp5

0x2a1f,	// (0x00032b9d) bg_popup_window_pane_cp2_ParamLimits

0x2a1f,	// (0x00032b9d) bg_popup_window_pane_cp2

0x2a2c,	// (0x00032baa) listscroll_menu_pane_ParamLimits

0x2a2c,	// (0x00032baa) listscroll_menu_pane

0x6323,	// (0x000364a1) popup_submenu_window_ParamLimits

0x6323,	// (0x000364a1) popup_submenu_window

0x2a38,	// (0x00032bb6) find_popup_pane_g1

0x2a40,	// (0x00032bbe) input_popup_find_pane_cp

0x2a11,	// (0x00032b8f) input_focus_pane_cp4_ParamLimits

0x2a11,	// (0x00032b8f) input_focus_pane_cp4

0x2a4a,	// (0x00032bc8) input_popup_find_pane_t1_ParamLimits

0x2a4a,	// (0x00032bc8) input_popup_find_pane_t1

0xf44d,	// (0x0003f5cb) bg_popup_sub_pane_cp

0x2a78,	// (0x00032bf6) listscroll_popup_sub_pane

0x2a80,	// (0x00032bfe) list_submenu_pane_ParamLimits

0x2a80,	// (0x00032bfe) list_submenu_pane

0x2a91,	// (0x00032c0f) scroll_pane_cp4

0x2a99,	// (0x00032c17) list_single_popup_submenu_pane_ParamLimits

0x2a99,	// (0x00032c17) list_single_popup_submenu_pane

0x2aae,	// (0x00032c2c) list_single_popup_submenu_pane_g1

0x2ab6,	// (0x00032c34) list_single_popup_submenu_pane_t1_ParamLimits

0x2ab6,	// (0x00032c34) list_single_popup_submenu_pane_t1

0x2350,	// (0x000324ce) bg_active_tab_pane_cp1_ParamLimits

0x2350,	// (0x000324ce) bg_active_tab_pane_cp1

0x6361,	// (0x000364df) tabs_2_active_pane_g1

0x6369,	// (0x000364e7) tabs_2_active_pane_t1

0x2350,	// (0x000324ce) bg_passive_tab_pane_cp1_ParamLimits

0x2350,	// (0x000324ce) bg_passive_tab_pane_cp1

0x6361,	// (0x000364df) tabs_2_passive_pane_g1

0x6369,	// (0x000364e7) tabs_2_passive_pane_t1

0x2eaa,	// (0x00033028) bg_active_tab_pane_cp4

0x637b,	// (0x000364f9) tabs_2_long_active_pane_t1

0x638e,	// (0x0003650c) bg_passive_tab_pane_cp4

0x7054,	// (0x000371d2) list_single_midp_graphic_pane_g4_ParamLimits

0x2eaa,	// (0x00033028) bg_active_tab_pane_cp5

0x639a,	// (0x00036518) tabs_3_long_active_pane_t1

0x638e,	// (0x0003650c) bg_passive_tab_pane_cp5

0x7054,	// (0x000371d2) list_single_midp_graphic_pane_g4

0x2350,	// (0x000324ce) bg_popup_window_pane_cp13_ParamLimits

0x2350,	// (0x000324ce) bg_popup_window_pane_cp13

0x2ad4,	// (0x00032c52) listscroll_popup_fast_pane_ParamLimits

0x2ad4,	// (0x00032c52) listscroll_popup_fast_pane

0x2ae3,	// (0x00032c61) grid_popup_fast_pane_ParamLimits

0x2ae3,	// (0x00032c61) grid_popup_fast_pane

0x2af5,	// (0x00032c73) scroll_pane_cp9_ParamLimits

0x2af5,	// (0x00032c73) scroll_pane_cp9

0xc39a,	// (0x0003c518) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc39a,	// (0x0003c518) list_single_graphic_hl_pane_t1_cp2

0x2b19,	// (0x00032c97) input_focus_pane_cp20_ParamLimits

0x2b19,	// (0x00032c97) input_focus_pane_cp20

0x2b27,	// (0x00032ca5) query_popup_data_pane_t1_ParamLimits

0x2b27,	// (0x00032ca5) query_popup_data_pane_t1

0x2b3a,	// (0x00032cb8) query_popup_data_pane_t2_ParamLimits

0x2b3a,	// (0x00032cb8) query_popup_data_pane_t2

0x2b80,	// (0x00032cfe) query_popup_data_pane_t3_ParamLimits

0x2b80,	// (0x00032cfe) query_popup_data_pane_t3

0x2bc1,	// (0x00032d3f) query_popup_data_pane_t4_ParamLimits

0x2bc1,	// (0x00032d3f) query_popup_data_pane_t4

0x2bfd,	// (0x00032d7b) query_popup_data_pane_t5_ParamLimits

0x2bfd,	// (0x00032d7b) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x0003f825) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x0003f825) query_popup_data_pane_t

0x29c0,	// (0x00032b3e) bg_set_opt_pane_g1

0x29c8,	// (0x00032b46) bg_set_opt_pane_g2

0x29d0,	// (0x00032b4e) bg_set_opt_pane_g3

0x29d8,	// (0x00032b56) bg_set_opt_pane_g4

0x29e0,	// (0x00032b5e) bg_set_opt_pane_g5

0x29e8,	// (0x00032b66) bg_set_opt_pane_g6

0x29f0,	// (0x00032b6e) bg_set_opt_pane_g7

0x29f8,	// (0x00032b76) bg_set_opt_pane_g8

0x2a00,	// (0x00032b7e) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x0003f830) bg_set_opt_pane_g

0x6a12,	// (0x00036b90) control_top_pane_stacon_ParamLimits

0x6a12,	// (0x00036b90) control_top_pane_stacon

0x6a65,	// (0x00036be3) signal_pane_stacon_ParamLimits

0x6a65,	// (0x00036be3) signal_pane_stacon

0x6a8a,	// (0x00036c08) stacon_top_pane_g1_ParamLimits

0x6a8a,	// (0x00036c08) stacon_top_pane_g1

0x6aac,	// (0x00036c2a) title_pane_stacon_ParamLimits

0x6aac,	// (0x00036c2a) title_pane_stacon

0x6ad6,	// (0x00036c54) uni_indicator_pane_stacon_ParamLimits

0x6ad6,	// (0x00036c54) uni_indicator_pane_stacon

0x6aee,	// (0x00036c6c) battery_pane_stacon_ParamLimits

0x6aee,	// (0x00036c6c) battery_pane_stacon

0x6b32,	// (0x00036cb0) control_bottom_pane_stacon_ParamLimits

0x6b32,	// (0x00036cb0) control_bottom_pane_stacon

0x6b55,	// (0x00036cd3) navi_pane_stacon_ParamLimits

0x6b55,	// (0x00036cd3) navi_pane_stacon

0x6b78,	// (0x00036cf6) stacon_bottom_pane_g1_ParamLimits

0x6b78,	// (0x00036cf6) stacon_bottom_pane_g1

0x63ac,	// (0x0003652a) aid_levels_signal_lsc_ParamLimits

0x63ac,	// (0x0003652a) aid_levels_signal_lsc

0x63c3,	// (0x00036541) signal_pane_stacon_g1_ParamLimits

0x63c3,	// (0x00036541) signal_pane_stacon_g1

0x63d7,	// (0x00036555) signal_pane_stacon_g2_ParamLimits

0x63d7,	// (0x00036555) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x0003f843) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x0003f843) signal_pane_stacon_g

0x640c,	// (0x0003658a) title_pane_stacon_t1_ParamLimits

0x640c,	// (0x0003658a) title_pane_stacon_t1

0x2c55,	// (0x00032dd3) uni_indicator_pane_stacon_g1

0x2c5f,	// (0x00032ddd) uni_indicator_pane_stacon_g2

0x2c41,	// (0x00032dbf) uni_indicator_pane_stacon_g3

0x2c4b,	// (0x00032dc9) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x0003f84f) uni_indicator_pane_stacon_g

0x6431,	// (0x000365af) control_top_pane_stacon_g1

0x6439,	// (0x000365b7) control_top_pane_stacon_t1_ParamLimits

0x6439,	// (0x000365b7) control_top_pane_stacon_t1

0x6470,	// (0x000365ee) aid_levels_battery_lsc_ParamLimits

0x6470,	// (0x000365ee) aid_levels_battery_lsc

0x6488,	// (0x00036606) battery_pane_stacon_g1_ParamLimits

0x6488,	// (0x00036606) battery_pane_stacon_g1

0x649b,	// (0x00036619) battery_pane_stacon_g2_ParamLimits

0x649b,	// (0x00036619) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x0003f858) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x0003f858) battery_pane_stacon_g

0x64d9,	// (0x00036657) navi_icon_pane_stacon

0x64ed,	// (0x0003666b) navi_navi_pane_stacon

0x64d9,	// (0x00036657) navi_text_pane_stacon

0x6431,	// (0x000365af) control_bottom_pane_stacon_g1

0x6503,	// (0x00036681) control_bottom_pane_stacon_t1_ParamLimits

0x6503,	// (0x00036681) control_bottom_pane_stacon_t1

0x653a,	// (0x000366b8) grid_app_pane_ParamLimits

0x653a,	// (0x000366b8) grid_app_pane

0x655e,	// (0x000366dc) scroll_pane_cp15_ParamLimits

0x655e,	// (0x000366dc) scroll_pane_cp15

0x6573,	// (0x000366f1) cell_app_pane_ParamLimits

0x6573,	// (0x000366f1) cell_app_pane

0x659f,	// (0x0003671d) cell_app_pane_g1_ParamLimits

0x659f,	// (0x0003671d) cell_app_pane_g1

0x2c83,	// (0x00032e01) cell_app_pane_g2_ParamLimits

0x2c83,	// (0x00032e01) cell_app_pane_g2

0x0001,

0xf6df,	// (0x0003f85d) cell_app_pane_g_ParamLimits

0xf6df,	// (0x0003f85d) cell_app_pane_g

0x2c8f,	// (0x00032e0d) cell_app_pane_t1_ParamLimits

0x2c8f,	// (0x00032e0d) cell_app_pane_t1

0x2ca6,	// (0x00032e24) grid_highlight_pane_ParamLimits

0x2ca6,	// (0x00032e24) grid_highlight_pane

0x29c0,	// (0x00032b3e) cell_highlight_pane_g1

0x29c8,	// (0x00032b46) cell_highlight_pane_g2

0x29d0,	// (0x00032b4e) cell_highlight_pane_g3

0x29d8,	// (0x00032b56) cell_highlight_pane_g4

0x29e0,	// (0x00032b5e) cell_highlight_pane_g5

0x29e8,	// (0x00032b66) cell_highlight_pane_g6

0x29f0,	// (0x00032b6e) cell_highlight_pane_g7

0x29f8,	// (0x00032b76) cell_highlight_pane_g8

0x2a00,	// (0x00032b7e) cell_highlight_pane_g9

0xf443,	// (0x0003f5c1) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x0003f80b) cell_highlight_pane_g

0x2cb7,	// (0x00032e35) bg_scroll_pane

0x65d2,	// (0x00036750) scroll_handle_pane

0x2cfe,	// (0x00032e7c) scroll_bg_pane_g1

0x2d13,	// (0x00032e91) scroll_bg_pane_g2

0x2d2b,	// (0x00032ea9) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x0003f862) scroll_bg_pane_g

0x2d40,	// (0x00032ebe) scroll_handle_focus_pane_ParamLimits

0x2d40,	// (0x00032ebe) scroll_handle_focus_pane

0x2cfe,	// (0x00032e7c) scroll_handle_pane_g1

0x2d4d,	// (0x00032ecb) scroll_handle_pane_g2

0x2d2b,	// (0x00032ea9) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x0003f869) scroll_handle_pane_g

0x2a11,	// (0x00032b8f) bg_popup_sub_pane_cp21_ParamLimits

0x2a11,	// (0x00032b8f) bg_popup_sub_pane_cp21

0x2d61,	// (0x00032edf) popup_fep_japan_predictive_window_t1_ParamLimits

0x2d61,	// (0x00032edf) popup_fep_japan_predictive_window_t1

0x2d78,	// (0x00032ef6) popup_fep_japan_predictive_window_t2_ParamLimits

0x2d78,	// (0x00032ef6) popup_fep_japan_predictive_window_t2

0x2dab,	// (0x00032f29) popup_fep_japan_predictive_window_t3_ParamLimits

0x2dab,	// (0x00032f29) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x0003f870) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x0003f870) popup_fep_japan_predictive_window_t

0xf44d,	// (0x0003f5cb) bg_popup_sub_pane_cp23

0x2de2,	// (0x00032f60) listscroll_japin_cand_pane

0x2dea,	// (0x00032f68) popup_fep_japan_candidate_window_t1

0x2df8,	// (0x00032f76) candidate_pane_ParamLimits

0x2df8,	// (0x00032f76) candidate_pane

0x2e0a,	// (0x00032f88) scroll_pane_cp30

0x2e14,	// (0x00032f92) list_single_popup_jap_candidate_pane_ParamLimits

0x2e14,	// (0x00032f92) list_single_popup_jap_candidate_pane

0xf44d,	// (0x0003f5cb) list_highlight_pane_cp30

0x2e28,	// (0x00032fa6) list_single_popup_jap_candidate_pane_t1

0x65fb,	// (0x00036779) level_1_signal

0x6608,	// (0x00036786) level_2_signal

0x6615,	// (0x00036793) level_3_signal

0x6622,	// (0x000367a0) level_4_signal

0x662f,	// (0x000367ad) level_5_signal

0x663c,	// (0x000367ba) level_6_signal

0x6649,	// (0x000367c7) level_7_signal

0x65fb,	// (0x00036779) level_1_battery

0x6608,	// (0x00036786) level_2_battery

0x6615,	// (0x00036793) level_3_battery

0x6622,	// (0x000367a0) level_4_battery

0x662f,	// (0x000367ad) level_5_battery

0x663c,	// (0x000367ba) level_6_battery

0x6649,	// (0x000367c7) level_7_battery

0x2e4f,	// (0x00032fcd) list_menu_pane_ParamLimits

0x2e4f,	// (0x00032fcd) list_menu_pane

0x2e65,	// (0x00032fe3) scroll_pane_cp25_ParamLimits

0x2e65,	// (0x00032fe3) scroll_pane_cp25

0x2e7e,	// (0x00032ffc) list_double2_graphic_pane_cp2_ParamLimits

0x2e7e,	// (0x00032ffc) list_double2_graphic_pane_cp2

0x2e7e,	// (0x00032ffc) list_double2_large_graphic_pane_cp2_ParamLimits

0x2e7e,	// (0x00032ffc) list_double2_large_graphic_pane_cp2

0x2e7e,	// (0x00032ffc) list_double2_pane_cp2_ParamLimits

0x2e7e,	// (0x00032ffc) list_double2_pane_cp2

0x2e7e,	// (0x00032ffc) list_double_graphic_pane_cp2_ParamLimits

0x2e7e,	// (0x00032ffc) list_double_graphic_pane_cp2

0x2e7e,	// (0x00032ffc) list_double_large_graphic_pane_cp2_ParamLimits

0x2e7e,	// (0x00032ffc) list_double_large_graphic_pane_cp2

0x2e7e,	// (0x00032ffc) list_double_number_pane_cp2_ParamLimits

0x2e7e,	// (0x00032ffc) list_double_number_pane_cp2

0x2e7e,	// (0x00032ffc) list_double_pane_cp2_ParamLimits

0x2e7e,	// (0x00032ffc) list_double_pane_cp2

0x668b,	// (0x00036809) list_single_2graphic_pane_cp2_ParamLimits

0x668b,	// (0x00036809) list_single_2graphic_pane_cp2

0x668b,	// (0x00036809) list_single_graphic_heading_pane_cp2_ParamLimits

0x668b,	// (0x00036809) list_single_graphic_heading_pane_cp2

0x668b,	// (0x00036809) list_single_graphic_pane_cp2_ParamLimits

0x668b,	// (0x00036809) list_single_graphic_pane_cp2

0x668b,	// (0x00036809) list_single_heading_pane_cp2_ParamLimits

0x668b,	// (0x00036809) list_single_heading_pane_cp2

0x2e8e,	// (0x0003300c) list_single_large_graphic_pane_cp2_ParamLimits

0x2e8e,	// (0x0003300c) list_single_large_graphic_pane_cp2

0x668b,	// (0x00036809) list_single_number_heading_pane_cp2_ParamLimits

0x668b,	// (0x00036809) list_single_number_heading_pane_cp2

0x668b,	// (0x00036809) list_single_number_pane_cp2_ParamLimits

0x668b,	// (0x00036809) list_single_number_pane_cp2

0x668b,	// (0x00036809) list_single_pane_cp2_ParamLimits

0x668b,	// (0x00036809) list_single_pane_cp2

0x676e,	// (0x000368ec) bg_popup_sub_pane_cp22

0x6793,	// (0x00036911) popup_side_volume_key_window_g1

0x67bd,	// (0x0003693b) popup_side_volume_key_window_t1

0x67db,	// (0x00036959) volume_small_pane_cp1

0xf4a7,	// (0x0003f625) bg_popup_sub_pane_cp24_ParamLimits

0xf4a7,	// (0x0003f625) bg_popup_sub_pane_cp24

0x67e3,	// (0x00036961) fep_china_uni_candidate_pane_ParamLimits

0x67e3,	// (0x00036961) fep_china_uni_candidate_pane

0x67f7,	// (0x00036975) fep_china_uni_entry_pane

0x6807,	// (0x00036985) popup_fep_china_uni_window_g1

0x6823,	// (0x000369a1) fep_china_uni_entry_pane_g1

0x682d,	// (0x000369ab) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x0003f8a1) fep_china_uni_entry_pane_g

0x6837,	// (0x000369b5) fep_entry_item_pane

0x6841,	// (0x000369bf) fep_candidate_item_pane

0x6849,	// (0x000369c7) fep_china_uni_candidate_pane_g1

0x6853,	// (0x000369d1) fep_china_uni_candidate_pane_g2

0x685b,	// (0x000369d9) fep_china_uni_candidate_pane_g3

0x6863,	// (0x000369e1) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x0003f8a6) fep_china_uni_candidate_pane_g

0xf443,	// (0x0003f5c1) fep_entry_item_pane_g1

0x686d,	// (0x000369eb) fep_entry_item_pane_t1_ParamLimits

0x686d,	// (0x000369eb) fep_entry_item_pane_t1

0x6883,	// (0x00036a01) fep_candidate_item_pane_t1_ParamLimits

0x6883,	// (0x00036a01) fep_candidate_item_pane_t1

0x6898,	// (0x00036a16) fep_candidate_item_pane_t2_ParamLimits

0x6898,	// (0x00036a16) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x0003f8af) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x0003f8af) fep_candidate_item_pane_t

0x2350,	// (0x000324ce) list_highlight_pane_cp31_ParamLimits

0x2350,	// (0x000324ce) list_highlight_pane_cp31

0x68aa,	// (0x00036a28) level_1_signal_lsc

0x68b3,	// (0x00036a31) level_2_signal_lsc

0x68bc,	// (0x00036a3a) level_3_signal_lsc

0x68c5,	// (0x00036a43) level_4_signal_lsc

0x68ce,	// (0x00036a4c) level_5_signal_lsc

0x68d7,	// (0x00036a55) level_6_signal_lsc

0x68e0,	// (0x00036a5e) level_7_signal_lsc

0x68e0,	// (0x00036a5e) level_1_battery_lsc

0x68e9,	// (0x00036a67) level_2_battery_lsc

0x68f2,	// (0x00036a70) level_3_battery_lsc

0x68fb,	// (0x00036a79) level_4_battery_lsc

0x6904,	// (0x00036a82) level_5_battery_lsc

0x690d,	// (0x00036a8b) level_6_battery_lsc

0x68aa,	// (0x00036a28) level_7_battery_lsc

0x6916,	// (0x00036a94) scroll_handle_focus_pane_g1

0x691f,	// (0x00036a9d) scroll_handle_focus_pane_g2

0x6928,	// (0x00036aa6) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x0003f8b4) scroll_handle_focus_pane_g

0x6931,	// (0x00036aaf) list_single_2graphic_pane_g1_ParamLimits

0x6931,	// (0x00036aaf) list_single_2graphic_pane_g1

0x5ded,	// (0x00035f6b) list_single_2graphic_pane_g2_ParamLimits

0x5ded,	// (0x00035f6b) list_single_2graphic_pane_g2

0x5d73,	// (0x00035ef1) list_single_2graphic_pane_g3_ParamLimits

0x5d73,	// (0x00035ef1) list_single_2graphic_pane_g3

0x693d,	// (0x00036abb) list_single_2graphic_pane_g4_ParamLimits

0x693d,	// (0x00036abb) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x0003f8bb) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x0003f8bb) list_single_2graphic_pane_g

0x6949,	// (0x00036ac7) list_single_2graphic_pane_t1_ParamLimits

0x6949,	// (0x00036ac7) list_single_2graphic_pane_t1

0x6977,	// (0x00036af5) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6977,	// (0x00036af5) list_double2_graphic_large_graphic_pane_g1

0x5e64,	// (0x00035fe2) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5e64,	// (0x00035fe2) list_double2_graphic_large_graphic_pane_g2

0x5e30,	// (0x00035fae) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5e30,	// (0x00035fae) list_double2_graphic_large_graphic_pane_g3

0x6989,	// (0x00036b07) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6989,	// (0x00036b07) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x0003f8c4) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x0003f8c4) list_double2_graphic_large_graphic_pane_g

0x6995,	// (0x00036b13) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x6995,	// (0x00036b13) list_double2_graphic_large_graphic_pane_t1

0x69ab,	// (0x00036b29) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x69ab,	// (0x00036b29) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x0003f8cd) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x0003f8cd) list_double2_graphic_large_graphic_pane_t

0x6c3a,	// (0x00036db8) popup_fast_swap_window_ParamLimits

0x6c3a,	// (0x00036db8) popup_fast_swap_window

0x6c58,	// (0x00036dd6) popup_side_volume_key_window

0x6c76,	// (0x00036df4) stacon_top_pane

0x6c80,	// (0x00036dfe) status_pane_ParamLimits

0x6c80,	// (0x00036dfe) status_pane

0x6c76,	// (0x00036df4) status_small_pane

0xf44d,	// (0x0003f5cb) control_pane

0xf44d,	// (0x0003f5cb) stacon_bottom_pane

0x2948,	// (0x00032ac6) scroll_pane_cp121

0x293f,	// (0x00032abd) set_content_pane

0x69bd,	// (0x00036b3b) bg_active_tab_pane_g1_cp1

0x69c6,	// (0x00036b44) bg_active_tab_pane_g2_cp1

0x69cf,	// (0x00036b4d) bg_active_tab_pane_g3_cp1

0x69bd,	// (0x00036b3b) bg_passive_tab_pane_g1_cp1

0x69c6,	// (0x00036b44) bg_passive_tab_pane_g2_cp1

0x69cf,	// (0x00036b4d) bg_passive_tab_pane_g3_cp1

0x69d8,	// (0x00036b56) bg_active_tab_pane_g1_cp2

0x69c6,	// (0x00036b44) bg_active_tab_pane_g2_cp2

0x69e1,	// (0x00036b5f) bg_active_tab_pane_g3_cp2

0x69d8,	// (0x00036b56) bg_passive_tab_pane_g1_cp2

0x69c6,	// (0x00036b44) bg_passive_tab_pane_g2_cp2

0x69e1,	// (0x00036b5f) bg_passive_tab_pane_g3_cp2

0x69ea,	// (0x00036b68) bg_active_tab_pane_g1_cp3

0x69c6,	// (0x00036b44) bg_active_tab_pane_g2_cp3

0x69f3,	// (0x00036b71) bg_active_tab_pane_g3_cp3

0x69ea,	// (0x00036b68) bg_passive_tab_pane_g1_cp3

0x69c6,	// (0x00036b44) bg_passive_tab_pane_g2_cp3

0x69f3,	// (0x00036b71) bg_passive_tab_pane_g3_cp3

0x69fc,	// (0x00036b7a) bg_active_tab_pane_g1_cp4

0x69c6,	// (0x00036b44) bg_active_tab_pane_g2_cp4

0x6a07,	// (0x00036b85) bg_active_tab_pane_g3_cp4

0x69fc,	// (0x00036b7a) bg_passive_tab_pane_g1_cp4

0x69c6,	// (0x00036b44) bg_passive_tab_pane_g2_cp4

0x6a07,	// (0x00036b85) bg_passive_tab_pane_g3_cp4

0x6b94,	// (0x00036d12) bg_active_tab_pane_g1_cp5

0x69c6,	// (0x00036b44) bg_active_tab_pane_g2_cp5

0x6b9d,	// (0x00036d1b) bg_active_tab_pane_g3_cp5

0x6b94,	// (0x00036d12) bg_passive_tab_pane_g1_cp5

0x69c6,	// (0x00036b44) bg_passive_tab_pane_g2_cp5

0x6b9d,	// (0x00036d1b) bg_passive_tab_pane_g3_cp5

0x6ba6,	// (0x00036d24) list_set_graphic_pane_ParamLimits

0x6ba6,	// (0x00036d24) list_set_graphic_pane

0xf44d,	// (0x0003f5cb) bg_set_opt_pane_cp4

0x6bbb,	// (0x00036d39) list_set_graphic_pane_g1_ParamLimits

0x6bbb,	// (0x00036d39) list_set_graphic_pane_g1

0x6bc7,	// (0x00036d45) list_set_graphic_pane_g2_ParamLimits

0x6bc7,	// (0x00036d45) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x0003f8d2) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x0003f8d2) list_set_graphic_pane_g

0x0009,

0xface,	// (0x0003fc4c) volume_small_pane_cp_g

0x6beb,	// (0x00036d69) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6beb,	// (0x00036d69) list_double2_large_graphic_pane_g1_cp2

0x6bf9,	// (0x00036d77) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x6bf9,	// (0x00036d77) list_double2_large_graphic_pane_g2_cp2

0x6c0a,	// (0x00036d88) list_double2_large_graphic_pane_g3_cp2

0x6c12,	// (0x00036d90) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x6c12,	// (0x00036d90) list_double2_large_graphic_pane_t1_cp2

0x6c28,	// (0x00036da6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x6c28,	// (0x00036da6) list_double2_large_graphic_pane_t2_cp2

0xa57a,	// (0x0003a6f8) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa57a,	// (0x0003a6f8) list_double_large_graphic_pane_g1_cp2

0xa58d,	// (0x0003a70b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa58d,	// (0x0003a70b) list_double_large_graphic_pane_g2_cp2

0x6d9e,	// (0x00036f1c) list_double_large_graphic_pane_g3_cp2

0xa59e,	// (0x0003a71c) list_double_large_graphic_pane_g4_cp

0xa5a6,	// (0x0003a724) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa5a6,	// (0x0003a724) list_double_large_graphic_pane_t1_cp2

0xa5bd,	// (0x0003a73b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa5bd,	// (0x0003a73b) list_double_large_graphic_pane_t2_cp2

0x6c8e,	// (0x00036e0c) list_double2_graphic_pane_g1_cp2_ParamLimits

0x6c8e,	// (0x00036e0c) list_double2_graphic_pane_g1_cp2

0x6c9c,	// (0x00036e1a) list_double2_graphic_pane_g2_cp2_ParamLimits

0x6c9c,	// (0x00036e1a) list_double2_graphic_pane_g2_cp2

0x6cad,	// (0x00036e2b) list_double2_graphic_pane_g3_cp2

0x6cb7,	// (0x00036e35) list_double2_graphic_pane_t1_cp2_ParamLimits

0x6cb7,	// (0x00036e35) list_double2_graphic_pane_t1_cp2

0x6ccd,	// (0x00036e4b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x6ccd,	// (0x00036e4b) list_double2_graphic_pane_t2_cp2

0x6cdf,	// (0x00036e5d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x6cdf,	// (0x00036e5d) list_single_number_heading_pane_g1_cp2

0x6ceb,	// (0x00036e69) list_single_number_heading_pane_g2_cp2

0x6cf3,	// (0x00036e71) list_single_number_heading_pane_t1_cp2_ParamLimits

0x6cf3,	// (0x00036e71) list_single_number_heading_pane_t1_cp2

0x6d09,	// (0x00036e87) list_single_number_heading_pane_t2_cp2_ParamLimits

0x6d09,	// (0x00036e87) list_single_number_heading_pane_t2_cp2

0x6d1d,	// (0x00036e9b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x6d1d,	// (0x00036e9b) list_single_number_heading_pane_t3_cp2

0x6cdf,	// (0x00036e5d) list_single_heading_pane_g1_cp2_ParamLimits

0x6cdf,	// (0x00036e5d) list_single_heading_pane_g1_cp2

0x6ceb,	// (0x00036e69) list_single_heading_pane_g2_cp2

0x6cf3,	// (0x00036e71) list_single_heading_pane_t1_cp2_ParamLimits

0x6cf3,	// (0x00036e71) list_single_heading_pane_t1_cp2

0xa374,	// (0x0003a4f2) list_single_heading_pane_t2_cp2_ParamLimits

0xa374,	// (0x0003a4f2) list_single_heading_pane_t2_cp2

0xa2bc,	// (0x0003a43a) list_double_graphic_pane_g1_cp2_ParamLimits

0xa2bc,	// (0x0003a43a) list_double_graphic_pane_g1_cp2

0xa2c8,	// (0x0003a446) list_double_graphic_pane_g2_cp2_ParamLimits

0xa2c8,	// (0x0003a446) list_double_graphic_pane_g2_cp2

0xa2d7,	// (0x0003a455) list_double_graphic_pane_g3_cp2

0xa2df,	// (0x0003a45d) list_double_graphic_pane_t1_cp2_ParamLimits

0xa2df,	// (0x0003a45d) list_double_graphic_pane_t1_cp2

0xa2f5,	// (0x0003a473) list_double_graphic_pane_t2_cp2_ParamLimits

0xa2f5,	// (0x0003a473) list_double_graphic_pane_t2_cp2

0x6d92,	// (0x00036f10) list_double_number_pane_g1_cp2_ParamLimits

0x6d92,	// (0x00036f10) list_double_number_pane_g1_cp2

0x6d9e,	// (0x00036f1c) list_double_number_pane_g2_cp2

0xa280,	// (0x0003a3fe) list_double_number_pane_t1_cp2_ParamLimits

0xa280,	// (0x0003a3fe) list_double_number_pane_t1_cp2

0xa294,	// (0x0003a412) list_double_number_pane_t2_cp2_ParamLimits

0xa294,	// (0x0003a412) list_double_number_pane_t2_cp2

0xa2aa,	// (0x0003a428) list_double_number_pane_t3_cp2_ParamLimits

0xa2aa,	// (0x0003a428) list_double_number_pane_t3_cp2

0xa169,	// (0x0003a2e7) list_single_graphic_pane_g1_cp2_ParamLimits

0xa169,	// (0x0003a2e7) list_single_graphic_pane_g1_cp2

0x6df8,	// (0x00036f76) list_single_graphic_pane_g2_cp2_ParamLimits

0x6df8,	// (0x00036f76) list_single_graphic_pane_g2_cp2

0x8538,	// (0x000386b6) list_single_graphic_pane_g3_cp2

0xa13f,	// (0x0003a2bd) list_single_graphic_pane_t1_cp2_ParamLimits

0xa13f,	// (0x0003a2bd) list_single_graphic_pane_t1_cp2

0x6df8,	// (0x00036f76) list_single_number_pane_g1_cp2_ParamLimits

0x6df8,	// (0x00036f76) list_single_number_pane_g1_cp2

0x8538,	// (0x000386b6) list_single_number_pane_g2_cp2

0xa13f,	// (0x0003a2bd) list_single_number_pane_t1_cp2_ParamLimits

0xa13f,	// (0x0003a2bd) list_single_number_pane_t1_cp2

0xa155,	// (0x0003a2d3) list_single_number_pane_t2_cp2_ParamLimits

0xa155,	// (0x0003a2d3) list_single_number_pane_t2_cp2

0x6bf9,	// (0x00036d77) list_double2_pane_g1_cp2_ParamLimits

0x6bf9,	// (0x00036d77) list_double2_pane_g1_cp2

0x6c0a,	// (0x00036d88) list_double2_pane_g2_cp2

0x6d6a,	// (0x00036ee8) list_double2_pane_t1_cp2_ParamLimits

0x6d6a,	// (0x00036ee8) list_double2_pane_t1_cp2

0x6d80,	// (0x00036efe) list_double2_pane_t2_cp2_ParamLimits

0x6d80,	// (0x00036efe) list_double2_pane_t2_cp2

0x6d92,	// (0x00036f10) list_double_pane_g1_cp2_ParamLimits

0x6d92,	// (0x00036f10) list_double_pane_g1_cp2

0x6d9e,	// (0x00036f1c) list_double_pane_g2_cp2

0x6da6,	// (0x00036f24) list_double_pane_t1_cp2_ParamLimits

0x6da6,	// (0x00036f24) list_double_pane_t1_cp2

0x6dbc,	// (0x00036f3a) list_double_pane_t2_cp2_ParamLimits

0x6dbc,	// (0x00036f3a) list_double_pane_t2_cp2

0x6de8,	// (0x00036f66) list_single_pane_cp2_g3

0x6df8,	// (0x00036f76) list_single_pane_g1_cp2_ParamLimits

0x6df8,	// (0x00036f76) list_single_pane_g1_cp2

0x8538,	// (0x000386b6) list_single_pane_g2_cp2

0x8540,	// (0x000386be) list_single_pane_t1_cp2_ParamLimits

0x8540,	// (0x000386be) list_single_pane_t1_cp2

0x8558,	// (0x000386d6) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8558,	// (0x000386d6) list_single_large_graphic_pane_g1_cp2

0x8566,	// (0x000386e4) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8566,	// (0x000386e4) list_single_large_graphic_pane_g2_cp2

0x8572,	// (0x000386f0) list_single_large_graphic_pane_g3_cp2

0x857a,	// (0x000386f8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x857a,	// (0x000386f8) list_single_large_graphic_pane_g4_cp1

0x8594,	// (0x00038712) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8594,	// (0x00038712) list_single_large_graphic_pane_t1_cp2

0xa109,	// (0x0003a287) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa109,	// (0x0003a287) list_single_graphic_heading_pane_g1_cp2

0xa0d6,	// (0x0003a254) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa0d6,	// (0x0003a254) list_single_graphic_heading_pane_g4_cp2

0x8538,	// (0x000386b6) list_single_graphic_heading_pane_g5_cp2

0xa115,	// (0x0003a293) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa115,	// (0x0003a293) list_single_graphic_heading_pane_t1_cp2

0xa12b,	// (0x0003a2a9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa12b,	// (0x0003a2a9) list_single_graphic_heading_pane_t2_cp2

0xa0ca,	// (0x0003a248) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa0ca,	// (0x0003a248) list_single_2graphic_pane_g1_cp2

0xa0d6,	// (0x0003a254) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa0d6,	// (0x0003a254) list_single_2graphic_pane_g2_cp2

0x8538,	// (0x000386b6) list_single_2graphic_pane_g3_cp2

0xa0e7,	// (0x0003a265) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa0e7,	// (0x0003a265) list_single_2graphic_pane_g4_cp2

0xa0f3,	// (0x0003a271) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa0f3,	// (0x0003a271) list_single_2graphic_pane_t1_cp2

0xf443,	// (0x0003f5c1) list_highlight_pane_g10_cp1

0x9ca2,	// (0x00039e20) list_highlight_pane_g1_cp1

0x9caa,	// (0x00039e28) list_highlight_pane_g2_cp1

0x9cb2,	// (0x00039e30) list_highlight_pane_g3_cp1

0x9cba,	// (0x00039e38) list_highlight_pane_g4_cp1

0x9cc2,	// (0x00039e40) list_highlight_pane_g5_cp1

0x9cca,	// (0x00039e48) list_highlight_pane_g6_cp1

0x9cd2,	// (0x00039e50) list_highlight_pane_g7_cp1

0x9cda,	// (0x00039e58) list_highlight_pane_g8_cp1

0x9ce2,	// (0x00039e60) list_highlight_pane_g9_cp1

0x9bc2,	// (0x00039d40) form_field_slider_pane_t3

0x9bd0,	// (0x00039d4e) form_field_slider_pane_t4

0x9bde,	// (0x00039d5c) slider_form_pane_ParamLimits

0x9bde,	// (0x00039d5c) slider_form_pane

0xf44d,	// (0x0003f5cb) control_abbreviations

0xf44d,	// (0x0003f5cb) control_conventions

0xf44d,	// (0x0003f5cb) control_definitions

0xf44d,	// (0x0003f5cb) format_table_attribute

0xa3ca,	// (0x0003a548) bg_popup_preview_window_pane_g9

0xf44d,	// (0x0003f5cb) format_table_data2

0xf44d,	// (0x0003f5cb) format_table_data3

0xf44d,	// (0x0003f5cb) format_table_data_example

0x0008,

0xf44d,	// (0x0003f5cb) intro_purpose

0xf8f0,	// (0x0003fa6e) bg_popup_preview_window_pane_g

0xf44d,	// (0x0003f5cb) texts_category

0xf44d,	// (0x0003f5cb) texts_graphics

0x85aa,	// (0x00038728) text_digital

0x85b9,	// (0x00038737) text_primary

0x85c8,	// (0x00038746) text_primary_small

0x85d7,	// (0x00038755) text_secondary

0x85e6,	// (0x00038764) text_title

0xab50,	// (0x0003acce) bg_passive_tab_pane_g1_cp3_srt

0x69c6,	// (0x00036b44) bg_passive_tab_pane_g2_cp3_srt

0xab59,	// (0x0003acd7) bg_passive_tab_pane_g3_cp3_srt

0x2350,	// (0x000324ce) bg_active_tab_pane_cp3_srt_ParamLimits

0x2350,	// (0x000324ce) bg_active_tab_pane_cp3_srt

0xab62,	// (0x0003ace0) tabs_4_active_pane_srt_g1

0xab6a,	// (0x0003ace8) tabs_4_active_pane_srt_t1_ParamLimits

0xab6a,	// (0x0003ace8) tabs_4_active_pane_srt_t1

0xab50,	// (0x0003acce) bg_active_tab_pane_g1_cp3_copy1

0x69c6,	// (0x00036b44) bg_active_tab_pane_g2_cp3_copy1

0xab59,	// (0x0003acd7) bg_active_tab_pane_g3_cp3_copy1

0x2350,	// (0x000324ce) tabs_2_long_active_pane_srt_ParamLimits

0x2350,	// (0x000324ce) tabs_2_long_active_pane_srt

0x2350,	// (0x000324ce) tabs_2_long_passive_pane_srt_ParamLimits

0x2350,	// (0x000324ce) tabs_2_long_passive_pane_srt

0x638e,	// (0x0003650c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x638e,	// (0x0003650c) bg_passive_tab_pane_cp4_srt

0xa81a,	// (0x0003a998) bg_passive_tab_pane_g1_cp4_srt

0x69c6,	// (0x00036b44) bg_passive_tab_pane_g2_cp4_srt

0xa823,	// (0x0003a9a1) bg_passive_tab_pane_g3_cp4_srt

0x2eaa,	// (0x00033028) bg_active_tab_pane_cp4_srt_ParamLimits

0x2eaa,	// (0x00033028) bg_active_tab_pane_cp4_srt

0xa82c,	// (0x0003a9aa) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa82c,	// (0x0003a9aa) tabs_2_long_active_pane_srt_t1

0xa81a,	// (0x0003a998) bg_active_tab_pane_g1_cp4_srt

0x69c6,	// (0x00036b44) bg_active_tab_pane_g2_cp4_srt

0xa823,	// (0x0003a9a1) bg_active_tab_pane_g3_cp4_srt

0xf4a7,	// (0x0003f625) tabs_3_long_active_pane_srt_ParamLimits

0xf4a7,	// (0x0003f625) tabs_3_long_active_pane_srt

0xf4a7,	// (0x0003f625) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xf4a7,	// (0x0003f625) tabs_3_long_passive_pane_cp_srt

0xf4a7,	// (0x0003f625) tabs_3_long_passive_pane_srt_ParamLimits

0xf4a7,	// (0x0003f625) tabs_3_long_passive_pane_srt

0x638e,	// (0x0003650c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x638e,	// (0x0003650c) bg_passive_tab_pane_cp5_srt

0x6b94,	// (0x00036d12) bg_passive_tab_pane_g1_cp5_srt

0x69c6,	// (0x00036b44) bg_passive_tab_pane_g2_cp5_srt

0x6b9d,	// (0x00036d1b) bg_passive_tab_pane_g3_cp5_srt

0x2eaa,	// (0x00033028) bg_active_tab_pane_cp5_srt_ParamLimits

0x2eaa,	// (0x00033028) bg_active_tab_pane_cp5_srt

0xa808,	// (0x0003a986) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa808,	// (0x0003a986) tabs_3_long_active_pane_srt_t1

0x6b94,	// (0x00036d12) bg_active_tab_pane_g1_cp5_srt

0x69c6,	// (0x00036b44) bg_active_tab_pane_g2_cp5_srt

0x6b9d,	// (0x00036d1b) bg_active_tab_pane_g3_cp5_srt

0xa7fa,	// (0x0003a978) navi_text_pane_srt_t1

0xa7f2,	// (0x0003a970) navi_icon_pane_srt_g1

0x87b1,	// (0x0003892f) midp_editing_number_pane_srt

0x85f5,	// (0x00038773) midp_ticker_pane_srt

0x87b9,	// (0x00038937) midp_ticker_pane_srt_g1

0x87c1,	// (0x0003893f) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x0003f8f1) midp_ticker_pane_srt_g

0x87c9,	// (0x00038947) midp_ticker_pane_srt_t1

0xa7e3,	// (0x0003a961) midp_editing_number_pane_t1_copy1

0x638e,	// (0x0003650c) listscroll_midp_pane

0x638e,	// (0x0003650c) midp_form_pane

0x865f,	// (0x000387dd) midp_info_popup_window_ParamLimits

0x865f,	// (0x000387dd) midp_info_popup_window

0x2a11,	// (0x00032b8f) bg_popup_sub_pane_cp50_ParamLimits

0x2a11,	// (0x00032b8f) bg_popup_sub_pane_cp50

0x98d8,	// (0x00039a56) listscroll_midp_info_pane_ParamLimits

0x98d8,	// (0x00039a56) listscroll_midp_info_pane

0x98c0,	// (0x00039a3e) listscroll_form_midp_pane_ParamLimits

0x98c0,	// (0x00039a3e) listscroll_form_midp_pane

0x98cc,	// (0x00039a4a) scroll_bar_cp050

0x98a0,	// (0x00039a1e) list_midp_pane

0xb5eb,	// (0x0003b769) signal_pane_g2_cp

0x97da,	// (0x00039958) listscroll_midp_info_pane_t1_ParamLimits

0x97da,	// (0x00039958) listscroll_midp_info_pane_t1

0x97f2,	// (0x00039970) listscroll_midp_info_pane_t2_ParamLimits

0x97f2,	// (0x00039970) listscroll_midp_info_pane_t2

0x9830,	// (0x000399ae) listscroll_midp_info_pane_t3_ParamLimits

0x9830,	// (0x000399ae) listscroll_midp_info_pane_t3

0x986a,	// (0x000399e8) listscroll_midp_info_pane_t4_ParamLimits

0x986a,	// (0x000399e8) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x0003f9a9) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x0003f9a9) listscroll_midp_info_pane_t

0x2a91,	// (0x00032c0f) scroll_pane_cp21

0x9774,	// (0x000398f2) form_midp_field_choice_group_pane

0x977d,	// (0x000398fb) form_midp_field_text_pane

0x97c0,	// (0x0003993e) form_midp_field_time_pane

0x97c8,	// (0x00039946) form_midp_gauge_slider_pane

0x97d1,	// (0x0003994f) form_midp_gauge_wait_pane

0xf44d,	// (0x0003f5cb) form_midp_image_pane

0x7140,	// (0x000372be) list_single_midp_pane_ParamLimits

0x7140,	// (0x000372be) list_single_midp_pane

0x9738,	// (0x000398b6) form_midp_field_text_pane_t1

0x9524,	// (0x000396a2) input_focus_pane_cp050

0x9763,	// (0x000398e1) list_midp_form_text_pane

0x9707,	// (0x00039885) form_midp_field_choice_group_pane_t1

0x9715,	// (0x00039893) input_focus_pane_cp051

0x9729,	// (0x000398a7) list_midp_choice_pane

0xf44d,	// (0x0003f5cb) status_idle_pane

0x96eb,	// (0x00039869) form_midp_field_time_pane_t1

0xf443,	// (0x0003f5c1) wait_anim_pane_g2_copy1

0x96f9,	// (0x00039877) form_midp_field_time_pane_t2

0x0001,

0x870f,	// (0x0003888d) aid_navinavi_width_2_pane

0xf826,	// (0x0003f9a4) form_midp_field_time_pane_t

0xf44d,	// (0x0003f5cb) input_focus_pane_cp052

0xf44d,	// (0x0003f5cb) bg_input_focus_pane_cp040

0x96ab,	// (0x00039829) form_midp_gauge_slider_pane_t1

0x96b9,	// (0x00039837) form_midp_gauge_slider_pane_t2

0x96c7,	// (0x00039845) form_midp_gauge_slider_pane_t3

0x96d5,	// (0x00039853) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x0003f99b) form_midp_gauge_slider_pane_t

0x96e3,	// (0x00039861) form_midp_slider_pane

0x2350,	// (0x000324ce) bg_input_focus_pane_cp041_ParamLimits

0x2350,	// (0x000324ce) bg_input_focus_pane_cp041

0x9678,	// (0x000397f6) form_midp_gauge_wait_pane_t1_ParamLimits

0x9678,	// (0x000397f6) form_midp_gauge_wait_pane_t1

0x968a,	// (0x00039808) form_midp_gauge_wait_pane_t2_ParamLimits

0x968a,	// (0x00039808) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x0003f996) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x0003f996) form_midp_gauge_wait_pane_t

0x969c,	// (0x0003981a) form_midp_wait_pane_ParamLimits

0x969c,	// (0x0003981a) form_midp_wait_pane

0x9640,	// (0x000397be) form_midp_image_pane_g1

0x9649,	// (0x000397c7) form_midp_image_pane_t1

0x9658,	// (0x000397d6) form_midp_image_pane_t2

0x9667,	// (0x000397e5) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x0003f98f) form_midp_image_pane_t

0x9637,	// (0x000397b5) list_single_midp_pane_g1

0x4382,	// (0x00034500) list_single_midp_pane_t1

0x961d,	// (0x0003979b) list_midp_form_item_pane_ParamLimits

0x961d,	// (0x0003979b) list_midp_form_item_pane

0x86b7,	// (0x00038835) list_midp_form_item_pane_t1

0x86c6,	// (0x00038844) midp_ticker_pane_g1

0x86d2,	// (0x00038850) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x0003f8d7) midp_ticker_pane_g

0x86de,	// (0x0003885c) midp_ticker_pane_t1

0xaa56,	// (0x0003abd4) midp_editing_number_pane_t1

0xaa34,	// (0x0003abb2) midp_editing_number_pane

0xaa43,	// (0x0003abc1) midp_ticker_pane

0xa7d3,	// (0x0003a951) ai_message_heading_pane

0xf44d,	// (0x0003f5cb) bg_popup_window_pane_cp14

0xa7db,	// (0x0003a959) listscroll_ai_message_pane

0xa759,	// (0x0003a8d7) ai_message_heading_pane_g1_ParamLimits

0xa759,	// (0x0003a8d7) ai_message_heading_pane_g1

0xa765,	// (0x0003a8e3) ai_message_heading_pane_g2_ParamLimits

0xa765,	// (0x0003a8e3) ai_message_heading_pane_g2

0xa773,	// (0x0003a8f1) ai_message_heading_pane_g3_ParamLimits

0xa773,	// (0x0003a8f1) ai_message_heading_pane_g3

0xa77f,	// (0x0003a8fd) ai_message_heading_pane_g4_ParamLimits

0xa77f,	// (0x0003a8fd) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x0003fad0) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x0003fad0) ai_message_heading_pane_g

0xa78b,	// (0x0003a909) ai_message_heading_pane_t1_ParamLimits

0xa78b,	// (0x0003a909) ai_message_heading_pane_t1

0xa7a5,	// (0x0003a923) ai_message_heading_pane_t2_ParamLimits

0xa7a5,	// (0x0003a923) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x0003fad9) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x0003fad9) ai_message_heading_pane_t

0xa7b9,	// (0x0003a937) bg_popup_heading_pane_cp1_ParamLimits

0xa7b9,	// (0x0003a937) bg_popup_heading_pane_cp1

0xa747,	// (0x0003a8c5) list_ai_message_pane_ParamLimits

0xa747,	// (0x0003a8c5) list_ai_message_pane

0x2a91,	// (0x00032c0f) scroll_pane_cp10

0xa6e3,	// (0x0003a861) list_ai_message_pane_g1

0xa6eb,	// (0x0003a869) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x0003faad) list_ai_message_pane_g

0xa6f3,	// (0x0003a871) list_ai_message_pane_t1_ParamLimits

0xa6f3,	// (0x0003a871) list_ai_message_pane_t1

0xa708,	// (0x0003a886) list_ai_message_pane_t2_ParamLimits

0xa708,	// (0x0003a886) list_ai_message_pane_t2

0xa71d,	// (0x0003a89b) list_ai_message_pane_t3_ParamLimits

0xa71d,	// (0x0003a89b) list_ai_message_pane_t3

0xa732,	// (0x0003a8b0) list_ai_message_pane_t4_ParamLimits

0xa732,	// (0x0003a8b0) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x0003fab2) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x0003fab2) list_ai_message_pane_t

0xa6cc,	// (0x0003a84a) cell_ai_soft_ind_pane_ParamLimits

0xa6cc,	// (0x0003a84a) cell_ai_soft_ind_pane

0x86f0,	// (0x0003886e) cell_ai_soft_ind_pane_g1_ParamLimits

0x86f0,	// (0x0003886e) cell_ai_soft_ind_pane_g1

0xf44d,	// (0x0003f5cb) grid_highlight_cp1

0x86fd,	// (0x0003887b) text_secondary_cp56_ParamLimits

0x86fd,	// (0x0003887b) text_secondary_cp56

0xa6a1,	// (0x0003a81f) example_general_pane_ParamLimits

0xa6a1,	// (0x0003a81f) example_general_pane

0xa6ad,	// (0x0003a82b) example_parent_pane_g1_ParamLimits

0xa6ad,	// (0x0003a82b) example_parent_pane_g1

0xa6b9,	// (0x0003a837) example_parent_pane_t1_ParamLimits

0xa6b9,	// (0x0003a837) example_parent_pane_t1

0x8d36,	// (0x00038eb4) popup_preview_text_window_ParamLimits

0x8d36,	// (0x00038eb4) popup_preview_text_window

0x6df0,	// (0x00036f6e) list_single_pane_cp2_g4

0x252b,	// (0x000326a9) bg_popup_preview_window_pane_ParamLimits

0x252b,	// (0x000326a9) bg_popup_preview_window_pane

0xa3d4,	// (0x0003a552) popup_preview_text_window_t1_ParamLimits

0xa3d4,	// (0x0003a552) popup_preview_text_window_t1

0xa3f2,	// (0x0003a570) popup_preview_text_window_t2_ParamLimits

0xa3f2,	// (0x0003a570) popup_preview_text_window_t2

0xa43b,	// (0x0003a5b9) popup_preview_text_window_t3_ParamLimits

0xa43b,	// (0x0003a5b9) popup_preview_text_window_t3

0xa480,	// (0x0003a5fe) popup_preview_text_window_t4_ParamLimits

0xa480,	// (0x0003a5fe) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x0003fa81) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x0003fa81) popup_preview_text_window_t

0xa4fe,	// (0x0003a67c) scroll_pane_cp11

0x94b0,	// (0x0003962e) bg_popup_preview_window_pane_g1

0xa388,	// (0x0003a506) bg_popup_preview_window_pane_g2

0xa392,	// (0x0003a510) bg_popup_preview_window_pane_g3

0xa39c,	// (0x0003a51a) bg_popup_preview_window_pane_g4

0xa3a6,	// (0x0003a524) bg_popup_preview_window_pane_g5

0xa3b0,	// (0x0003a52e) bg_popup_preview_window_pane_g6

0xa3b8,	// (0x0003a536) bg_popup_preview_window_pane_g7

0xa3c0,	// (0x0003a53e) bg_popup_preview_window_pane_g8

0x55f5,	// (0x00035773) aid_popup_width_pane

0x8d12,	// (0x00038e90) popup_midp_note_alarm_window_ParamLimits

0x8d12,	// (0x00038e90) popup_midp_note_alarm_window

0x2959,	// (0x00032ad7) data_form_pane_ParamLimits

0x6203,	// (0x00036381) form_field_data_pane_g1

0x620d,	// (0x0003638b) form_field_data_pane_t1_ParamLimits

0x2965,	// (0x00032ae3) input_focus_pane_ParamLimits

0x41a1,	// (0x0003431f) data_form_wide_pane_ParamLimits

0x41b2,	// (0x00034330) form_field_data_wide_pane_g1

0x41be,	// (0x0003433c) form_field_data_wide_pane_t1_ParamLimits

0x26e0,	// (0x0003285e) input_focus_pane_cp6_ParamLimits

0x6353,	// (0x000364d1) input_popup_find_pane_g1_ParamLimits

0x6353,	// (0x000364d1) input_popup_find_pane_g1

0x64ac,	// (0x0003662a) aid_navi_side_left_pane

0x64c1,	// (0x0003663f) aid_navi_side_right_pane

0x9d9d,	// (0x00039f1b) bg_popup_window_pane_cp30_ParamLimits

0x9d9d,	// (0x00039f1b) bg_popup_window_pane_cp30

0x9e17,	// (0x00039f95) popup_midp_note_alarm_window_g1_ParamLimits

0x9e17,	// (0x00039f95) popup_midp_note_alarm_window_g1

0x9e47,	// (0x00039fc5) popup_midp_note_alarm_window_t1_ParamLimits

0x9e47,	// (0x00039fc5) popup_midp_note_alarm_window_t1

0x9ee8,	// (0x0003a066) popup_midp_note_alarm_window_t2_ParamLimits

0x9ee8,	// (0x0003a066) popup_midp_note_alarm_window_t2

0x9f96,	// (0x0003a114) popup_midp_note_alarm_window_t3_ParamLimits

0x9f96,	// (0x0003a114) popup_midp_note_alarm_window_t3

0x9fc8,	// (0x0003a146) popup_midp_note_alarm_window_t4_ParamLimits

0x9fc8,	// (0x0003a146) popup_midp_note_alarm_window_t4

0x9fee,	// (0x0003a16c) popup_midp_note_alarm_window_t5_ParamLimits

0x9fee,	// (0x0003a16c) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x0003fa1e) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x0003fa1e) popup_midp_note_alarm_window_t

0xa09a,	// (0x0003a218) wait_bar_pane_cp1_ParamLimits

0xa09a,	// (0x0003a218) wait_bar_pane_cp1

0xf44d,	// (0x0003f5cb) wait_anim_pane_copy1

0xf44d,	// (0x0003f5cb) wait_border_pane_copy1

0x9a82,	// (0x00039c00) wait_border_pane_g1_copy1

0x41d8,	// (0x00034356) form_field_popup_pane_g1

0x6227,	// (0x000363a5) form_field_popup_pane_t1_ParamLimits

0x2965,	// (0x00032ae3) input_focus_pane_cp7_ParamLimits

0x2993,	// (0x00032b11) list_form_pane_ParamLimits

0x41e0,	// (0x0003435e) form_field_popup_wide_pane_g1

0x41e8,	// (0x00034366) form_field_popup_wide_pane_t1_ParamLimits

0x2965,	// (0x00032ae3) input_focus_pane_cp8_ParamLimits

0x299f,	// (0x00032b1d) list_form_wide_pane_ParamLimits

0xabdd,	// (0x0003ad5b) aid_size_cell_graphic_pane

0x62a6,	// (0x00036424) data_form_pane_t1_ParamLimits

0x73d3,	// (0x00037551) data_form_wide_pane_t1_ParamLimits

0x905d,	// (0x000391db) bg_status_flat_pane

0x5a08,	// (0x00035b86) title_pane_t1_ParamLimits

0xf46f,	// (0x0003f5ed) title_pane_t2_ParamLimits

0xf495,	// (0x0003f613) title_pane_t3_ParamLimits

0xf55d,	// (0x0003f6db) title_pane_t_ParamLimits

0x65fb,	// (0x00036779) level_1_signal_ParamLimits

0x6608,	// (0x00036786) level_2_signal_ParamLimits

0x6615,	// (0x00036793) level_3_signal_ParamLimits

0x6622,	// (0x000367a0) level_4_signal_ParamLimits

0x662f,	// (0x000367ad) level_5_signal_ParamLimits

0x663c,	// (0x000367ba) level_6_signal_ParamLimits

0x6649,	// (0x000367c7) level_7_signal_ParamLimits

0x65fb,	// (0x00036779) level_1_battery_ParamLimits

0x6608,	// (0x00036786) level_2_battery_ParamLimits

0x6615,	// (0x00036793) level_3_battery_ParamLimits

0x6622,	// (0x000367a0) level_4_battery_ParamLimits

0x662f,	// (0x000367ad) level_5_battery_ParamLimits

0x663c,	// (0x000367ba) level_6_battery_ParamLimits

0x6649,	// (0x000367c7) level_7_battery_ParamLimits

0x9ca2,	// (0x00039e20) bg_status_flat_pane_g1

0x9caa,	// (0x00039e28) bg_status_flat_pane_g2

0x9cb2,	// (0x00039e30) bg_status_flat_pane_g3

0x9cba,	// (0x00039e38) bg_status_flat_pane_g4

0x9cc2,	// (0x00039e40) bg_status_flat_pane_g5

0x9cca,	// (0x00039e48) bg_status_flat_pane_g6

0x9cd2,	// (0x00039e50) bg_status_flat_pane_g7

0x5a78,	// (0x00035bf6) tabs_3_active_pane_t1_ParamLimits

0x5a78,	// (0x00035bf6) tabs_3_passive_pane_t1_ParamLimits

0x5a92,	// (0x00035c10) tabs_4_active_pane_t1_ParamLimits

0x5a92,	// (0x00035c10) tabs_4_1_passive_pane_t1_ParamLimits

0x6369,	// (0x000364e7) tabs_2_active_pane_t1_ParamLimits

0x6369,	// (0x000364e7) tabs_2_passive_pane_t1_ParamLimits

0x2eaa,	// (0x00033028) bg_active_tab_pane_cp4_ParamLimits

0x637b,	// (0x000364f9) tabs_2_long_active_pane_t1_ParamLimits

0x638e,	// (0x0003650c) bg_passive_tab_pane_cp4_ParamLimits

0x7087,	// (0x00037205) list_single_midp_graphic_pane_t1_ParamLimits

0x2eaa,	// (0x00033028) bg_active_tab_pane_cp5_ParamLimits

0x639a,	// (0x00036518) tabs_3_long_active_pane_t1_ParamLimits

0x638e,	// (0x0003650c) bg_passive_tab_pane_cp5_ParamLimits

0x7087,	// (0x00037205) list_single_midp_graphic_pane_t1

0x905d,	// (0x000391db) bg_status_flat_pane_ParamLimits

0x9128,	// (0x000392a6) indicator_pane_cp2_ParamLimits

0x9128,	// (0x000392a6) indicator_pane_cp2

0x926b,	// (0x000393e9) navi_pane_srt_ParamLimits

0x926b,	// (0x000393e9) navi_pane_srt

0x928f,	// (0x0003940d) popup_clock_digital_analogue_window_cp1

0x2394,	// (0x00032512) indicator_pane_t1

0x85f5,	// (0x00038773) copy_highlight_pane

0x85f5,	// (0x00038773) cursor_graphics_pane

0x85f5,	// (0x00038773) graphic_within_text_pane

0x85f5,	// (0x00038773) link_highlight_pane

0xa4c1,	// (0x0003a63f) popup_preview_text_window_t5_ParamLimits

0xa4c1,	// (0x0003a63f) popup_preview_text_window_t5

0x8719,	// (0x00038897) cursor_digital_pane

0x8719,	// (0x00038897) cursor_primary_pane

0x872a,	// (0x000388a8) cursor_primary_small_pane

0x8732,	// (0x000388b0) cursor_secondary_pane

0x873a,	// (0x000388b8) cursor_title_pane

0x8719,	// (0x00038897) link_highlight_digital_pane

0x8721,	// (0x0003889f) link_highlight_primary_pane

0x872a,	// (0x000388a8) link_highlight_primary_small_pane

0x8732,	// (0x000388b0) link_highlight_secondary_pane

0x873a,	// (0x000388b8) link_highlight_title_pane

0x8719,	// (0x00038897) copy_highlight_digital_pane

0x8719,	// (0x00038897) copy_highlight_primary_pane

0x872a,	// (0x000388a8) copy_highlight_primary_small_pane

0x8732,	// (0x000388b0) copy_highlight_secondary_pane

0x873a,	// (0x000388b8) copy_highlight_title_pane

0x8732,	// (0x000388b0) graphic_text_digital_pane

0x9d40,	// (0x00039ebe) graphic_text_primary_pane

0x9d49,	// (0x00039ec7) graphic_text_primary_small_pane

0x872a,	// (0x000388a8) graphic_text_secondary_pane

0x8719,	// (0x00038897) graphic_text_title_pane

0x8742,	// (0x000388c0) cursor_primary_pane_g1

0x9d32,	// (0x00039eb0) cursor_text_primary_t1

0x9d1a,	// (0x00039e98) cursor_primary_small_pane_g1

0x9d24,	// (0x00039ea2) cursor_text_primary_small_t1

0x9d02,	// (0x00039e80) cursor_primary_small_pane_g1_copy1

0x9d0c,	// (0x00039e8a) cursor_text_primary_small_t1_copy1

0x9cea,	// (0x00039e68) cursor_text_title_t1

0x9cf8,	// (0x00039e76) cursor_title_pane_g1

0x8742,	// (0x000388c0) cursor_digital_pane_g1

0x874c,	// (0x000388ca) cursor_text_digital_t1

0x875a,	// (0x000388d8) link_highlight_primary_pane_g1

0x9c93,	// (0x00039e11) link_highlight_primary_pane_t1

0x875a,	// (0x000388d8) link_highlight_primary_small_pane_g1

0x8762,	// (0x000388e0) link_highlight_primary_small_pane_t1

0x8771,	// (0x000388ef) link_highlight_secondary_pane_g1

0x8779,	// (0x000388f7) link_highlight_secondary_pane_t1

0x9c07,	// (0x00039d85) link_highlight_title_pane_g1

0x9c0f,	// (0x00039d8d) link_highlight_title_pane_t1

0x9bf0,	// (0x00039d6e) link_highlight_digital_pane_g1

0x9bf8,	// (0x00039d76) link_highlight_digital_pane_t1

0x9ab8,	// (0x00039c36) copy_highlight_primary_pane_g1

0x9acf,	// (0x00039c4d) copy_highlight_primary_pane_t1

0x9ab8,	// (0x00039c36) copy_highlight_primary_small_pane_g1

0x9ac0,	// (0x00039c3e) copy_highlight_primary_small_pane_t1

0x8788,	// (0x00038906) copy_highlight_secondary_pane_g1

0x8790,	// (0x0003890e) copy_highlight_secondary_pane_t1

0x9aa1,	// (0x00039c1f) copy_highlight_title_pane_g1

0x9aa9,	// (0x00039c27) copy_highlight_title_pane_t1

0x9ab8,	// (0x00039c36) copy_highlight_digital_pane_g1

0xadad,	// (0x0003af2b) copy_highlight_digital_pane_t1

0xad01,	// (0x0003ae7f) graphic_text_primary_pane_g1

0xad91,	// (0x0003af0f) graphic_text_primary_pane_t1

0xad9f,	// (0x0003af1d) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x0003fb4d) graphic_text_primary_pane_t

0xad6d,	// (0x0003aeeb) graphic_text_primary_small_pane_g1

0xad75,	// (0x0003aef3) graphic_text_primary_small_pane_t1

0xad83,	// (0x0003af01) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x0003fb48) graphic_text_primary_small_pane_t

0xad49,	// (0x0003aec7) graphic_text_secondary_pane_g1

0xad51,	// (0x0003aecf) graphic_text_secondary_pane_t1

0xad5f,	// (0x0003aedd) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x0003fb43) graphic_text_secondary_pane_t

0xad25,	// (0x0003aea3) graphic_text_title_pane_g1

0xad2d,	// (0x0003aeab) graphic_text_title_pane_t1

0xad3b,	// (0x0003aeb9) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x0003fb3e) graphic_text_title_pane_t

0xad01,	// (0x0003ae7f) graphic_text_digital_pane_g1

0xad09,	// (0x0003ae87) graphic_text_digital_pane_t1

0xad17,	// (0x0003ae95) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x0003fb39) graphic_text_digital_pane_t

0x2350,	// (0x000324ce) navi_icon_pane_srt_ParamLimits

0x2350,	// (0x000324ce) navi_icon_pane_srt

0xf44d,	// (0x0003f5cb) navi_midp_pane_srt

0xf44d,	// (0x0003f5cb) navi_navi_pane_srt

0x2350,	// (0x000324ce) navi_text_pane_srt_ParamLimits

0x2350,	// (0x000324ce) navi_text_pane_srt

0xaccc,	// (0x0003ae4a) navi_navi_icon_text_pane_srt

0xacd4,	// (0x0003ae52) navi_navi_pane_srt_g1_ParamLimits

0xacd4,	// (0x0003ae52) navi_navi_pane_srt_g1

0xace6,	// (0x0003ae64) navi_navi_pane_srt_g2_ParamLimits

0xace6,	// (0x0003ae64) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x0003fb34) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x0003fb34) navi_navi_pane_srt_g

0xacf8,	// (0x0003ae76) navi_navi_tabs_pane_srt

0xaccc,	// (0x0003ae4a) navi_navi_text_pane_srt

0xaccc,	// (0x0003ae4a) navi_navi_volume_pane_srt

0xacbd,	// (0x0003ae3b) navi_navi_text_pane_srt_t1

0x74f7,	// (0x00037675) navi_navi_volume_pane_srt_g1

0x74ff,	// (0x0003767d) volume_small_pane_srt_ParamLimits

0x74ff,	// (0x0003767d) volume_small_pane_srt

0x6e04,	// (0x00036f82) volume_small_pane_srt_g1_ParamLimits

0x6e04,	// (0x00036f82) volume_small_pane_srt_g1

0x6e14,	// (0x00036f92) volume_small_pane_srt_g2_ParamLimits

0x6e14,	// (0x00036f92) volume_small_pane_srt_g2

0x6e25,	// (0x00036fa3) volume_small_pane_srt_g3_ParamLimits

0x6e25,	// (0x00036fa3) volume_small_pane_srt_g3

0x6e36,	// (0x00036fb4) volume_small_pane_srt_g4_ParamLimits

0x6e36,	// (0x00036fb4) volume_small_pane_srt_g4

0x6e47,	// (0x00036fc5) volume_small_pane_srt_g5_ParamLimits

0x6e47,	// (0x00036fc5) volume_small_pane_srt_g5

0x6e58,	// (0x00036fd6) volume_small_pane_srt_g6_ParamLimits

0x6e58,	// (0x00036fd6) volume_small_pane_srt_g6

0x6e69,	// (0x00036fe7) volume_small_pane_srt_g7_ParamLimits

0x6e69,	// (0x00036fe7) volume_small_pane_srt_g7

0x6e7a,	// (0x00036ff8) volume_small_pane_srt_g8_ParamLimits

0x6e7a,	// (0x00036ff8) volume_small_pane_srt_g8

0x6e8b,	// (0x00037009) volume_small_pane_srt_g9_ParamLimits

0x6e8b,	// (0x00037009) volume_small_pane_srt_g9

0x6e9c,	// (0x0003701a) volume_small_pane_srt_g10_ParamLimits

0x6e9c,	// (0x0003701a) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x0003f8dc) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x0003f8dc) volume_small_pane_srt_g

0x25e0,	// (0x0003275e) query_popup_data_pane_cp2

0xaca3,	// (0x0003ae21) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xaca3,	// (0x0003ae21) navi_navi_icon_text_pane_srt_t1

0x9d40,	// (0x00039ebe) navi_tabs_2_long_pane_srt

0x9d40,	// (0x00039ebe) navi_tabs_2_pane_srt

0x9d40,	// (0x00039ebe) navi_tabs_3_long_pane_srt

0x9d40,	// (0x00039ebe) navi_tabs_3_pane_srt

0x9d40,	// (0x00039ebe) navi_tabs_4_pane_srt

0x74d7,	// (0x00037655) tabs_2_active_pane_srt_ParamLimits

0x74d7,	// (0x00037655) tabs_2_active_pane_srt

0x74e7,	// (0x00037665) tabs_2_passive_pane_srt_ParamLimits

0x74e7,	// (0x00037665) tabs_2_passive_pane_srt

0x896f,	// (0x00038aed) bg_passive_tab_pane_cp1_srt_ParamLimits

0x896f,	// (0x00038aed) bg_passive_tab_pane_cp1_srt

0xac6f,	// (0x0003aded) bg_passive_tab_pane_g1_cp1_srt

0x69c6,	// (0x00036b44) bg_passive_tab_pane_g2_cp1_srt

0xac78,	// (0x0003adf6) bg_passive_tab_pane_g3_cp1_srt

0x2350,	// (0x000324ce) bg_active_tab_pane_cp1_srt_ParamLimits

0x2350,	// (0x000324ce) bg_active_tab_pane_cp1_srt

0xac81,	// (0x0003adff) tabs_2_active_pane_srt_g1

0xac89,	// (0x0003ae07) tabs_2_active_pane_srt_t1_ParamLimits

0xac89,	// (0x0003ae07) tabs_2_active_pane_srt_t1

0xac6f,	// (0x0003aded) bg_active_tab_pane_g1_cp1_srt

0x69c6,	// (0x00036b44) bg_active_tab_pane_g2_cp1_srt

0xac78,	// (0x0003adf6) bg_active_tab_pane_g3_cp1_srt

0x74a4,	// (0x00037622) tabs_3_active_pane_srt_ParamLimits

0x74a4,	// (0x00037622) tabs_3_active_pane_srt

0x74b5,	// (0x00037633) tabs_3_passive_pane_cp_srt_ParamLimits

0x74b5,	// (0x00037633) tabs_3_passive_pane_cp_srt

0x74c6,	// (0x00037644) tabs_3_passive_pane_srt_ParamLimits

0x74c6,	// (0x00037644) tabs_3_passive_pane_srt

0x896f,	// (0x00038aed) bg_passive_tab_pane_cp2_srt_ParamLimits

0x896f,	// (0x00038aed) bg_passive_tab_pane_cp2_srt

0x879f,	// (0x0003891d) bg_passive_tab_pane_g1_cp2_srt

0x69c6,	// (0x00036b44) bg_passive_tab_pane_g2_cp2_srt

0x87a8,	// (0x00038926) bg_passive_tab_pane_g3_cp2_srt

0x2350,	// (0x000324ce) bg_active_tab_pane_cp2_srt_ParamLimits

0x2350,	// (0x000324ce) bg_active_tab_pane_cp2_srt

0xac55,	// (0x0003add3) tabs_3_active_pane_srt_g1

0xac5d,	// (0x0003addb) tabs_3_active_pane_srt_t1_ParamLimits

0xac5d,	// (0x0003addb) tabs_3_active_pane_srt_t1

0x879f,	// (0x0003891d) bg_active_tab_pane_g1_cp2_srt

0x69c6,	// (0x00036b44) bg_active_tab_pane_g2_cp2_srt

0x87a8,	// (0x00038926) bg_active_tab_pane_g3_cp2_srt

0x745c,	// (0x000375da) tabs_4_active_pane_srt_ParamLimits

0x745c,	// (0x000375da) tabs_4_active_pane_srt

0x746e,	// (0x000375ec) tabs_4_passive_pane_cp2_srt_ParamLimits

0x746e,	// (0x000375ec) tabs_4_passive_pane_cp2_srt

0x88fd,	// (0x00038a7b) aid_size_cell_toolbar

0x638e,	// (0x0003650c) main_idle_act_pane_ParamLimits

0x8b38,	// (0x00038cb6) popup_large_graphic_colour_window_ParamLimits

0x8edf,	// (0x0003905d) popup_toolbar_window_ParamLimits

0x8edf,	// (0x0003905d) popup_toolbar_window

0x43a7,	// (0x00034525) list_single_graphic_2heading_pane_ParamLimits

0x43a7,	// (0x00034525) list_single_graphic_2heading_pane

0x2c69,	// (0x00032de7) aid_size_cell_apps_grid_lsc_pane

0x2c7b,	// (0x00032df9) aid_size_cell_apps_grid_prt_pane

0x896f,	// (0x00038aed) bg_wml_button_pane_cp1_ParamLimits

0x896f,	// (0x00038aed) bg_wml_button_pane_cp1

0x9738,	// (0x000398b6) form_midp_field_text_pane_t1_ParamLimits

0x9524,	// (0x000396a2) input_focus_pane_cp050_ParamLimits

0x9763,	// (0x000398e1) list_midp_form_text_pane_ParamLimits

0x9715,	// (0x00039893) input_focus_pane_cp051_ParamLimits

0x9729,	// (0x000398a7) list_midp_choice_pane_ParamLimits

0x95dd,	// (0x0003975b) list_single_2graphic_pane_cp3_ParamLimits

0x95dd,	// (0x0003975b) list_single_2graphic_pane_cp3

0x95f6,	// (0x00039774) list_single_midp_graphic_pane_ParamLimits

0x95f6,	// (0x00039774) list_single_midp_graphic_pane

0x5561,	// (0x000356df) list_single_graphic_2heading_pane_g1_ParamLimits

0x5561,	// (0x000356df) list_single_graphic_2heading_pane_g1

0x556d,	// (0x000356eb) list_single_graphic_2heading_pane_g4_ParamLimits

0x556d,	// (0x000356eb) list_single_graphic_2heading_pane_g4

0x5579,	// (0x000356f7) list_single_graphic_2heading_pane_g5_ParamLimits

0x5579,	// (0x000356f7) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x0003f92f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x0003f92f) list_single_graphic_2heading_pane_g

0x5585,	// (0x00035703) list_single_graphic_2heading_pane_t1_ParamLimits

0x5585,	// (0x00035703) list_single_graphic_2heading_pane_t1

0x5599,	// (0x00035717) list_single_graphic_2heading_pane_t2_ParamLimits

0x5599,	// (0x00035717) list_single_graphic_2heading_pane_t2

0x55b5,	// (0x00035733) list_single_graphic_2heading_pane_t3_ParamLimits

0x55b5,	// (0x00035733) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x0003f936) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x0003f936) list_single_graphic_2heading_pane_t

0x93ee,	// (0x0003956c) bg_popup_sub_pane_cp2

0x9418,	// (0x00039596) grid_toobar_pane

0x6ff7,	// (0x00037175) cell_toolbar_pane_ParamLimits

0x6ff7,	// (0x00037175) cell_toolbar_pane

0x9454,	// (0x000395d2) cell_toolbar_pane_g1_ParamLimits

0x9454,	// (0x000395d2) cell_toolbar_pane_g1

0x9468,	// (0x000395e6) cell_toolbar_pane_g2_ParamLimits

0x9468,	// (0x000395e6) cell_toolbar_pane_g2

0x0001,

0xf7c6,	// (0x0003f944) cell_toolbar_pane_g_ParamLimits

0xf7c6,	// (0x0003f944) cell_toolbar_pane_g

0x948a,	// (0x00039608) grid_highlight_pane_cp2_ParamLimits

0x948a,	// (0x00039608) grid_highlight_pane_cp2

0x94a4,	// (0x00039622) toolbar_button_pane

0x94b0,	// (0x0003962e) toolbar_button_pane_g1

0x94b8,	// (0x00039636) toolbar_button_pane_g2

0x94c0,	// (0x0003963e) toolbar_button_pane_g3

0x94c8,	// (0x00039646) toolbar_button_pane_g4

0x94d0,	// (0x0003964e) toolbar_button_pane_g5

0x94d8,	// (0x00039656) toolbar_button_pane_g6

0x94e0,	// (0x0003965e) toolbar_button_pane_g7

0x94e8,	// (0x00039666) toolbar_button_pane_g8

0x94f0,	// (0x0003966e) toolbar_button_pane_g9

0x0009,

0xf7cb,	// (0x0003f949) toolbar_button_pane_g

0x702f,	// (0x000371ad) list_single_2graphic_pane_g1_cp3_ParamLimits

0x702f,	// (0x000371ad) list_single_2graphic_pane_g1_cp3

0x703b,	// (0x000371b9) list_single_2graphic_pane_g2_cp3_ParamLimits

0x703b,	// (0x000371b9) list_single_2graphic_pane_g2_cp3

0x704c,	// (0x000371ca) list_single_2graphic_pane_g3_cp3

0x7054,	// (0x000371d2) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7054,	// (0x000371d2) list_single_2graphic_pane_g4_cp3

0x7060,	// (0x000371de) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7060,	// (0x000371de) list_single_2graphic_pane_t1_cp3

0x707b,	// (0x000371f9) list_single_midp_graphic_pane_g2_ParamLimits

0x707b,	// (0x000371f9) list_single_midp_graphic_pane_g2

0x8905,	// (0x00038a83) aid_zoom_text_primary

0x423e,	// (0x000343bc) aid_zoom_text_secondary

0x885c,	// (0x000389da) status_small_pane_g7_ParamLimits

0x885c,	// (0x000389da) status_small_pane_g7

0x887f,	// (0x000389fd) status_small_pane_t1_ParamLimits

0x59f7,	// (0x00035b75) title_pane_g2

0x0003,

0xf554,	// (0x0003f6d2) title_pane_g

0x5c4c,	// (0x00035dca) aid_size_cell_colour_1_pane_ParamLimits

0x5c4c,	// (0x00035dca) aid_size_cell_colour_1_pane

0x5c60,	// (0x00035dde) aid_size_cell_colour_2_pane_ParamLimits

0x5c60,	// (0x00035dde) aid_size_cell_colour_2_pane

0x5c74,	// (0x00035df2) aid_size_cell_colour_3_pane_ParamLimits

0x5c74,	// (0x00035df2) aid_size_cell_colour_3_pane

0x5c88,	// (0x00035e06) aid_size_cell_colour_4_pane_ParamLimits

0x5c88,	// (0x00035e06) aid_size_cell_colour_4_pane

0x63e8,	// (0x00036566) title_pane_stacon_g1_ParamLimits

0x63e8,	// (0x00036566) title_pane_stacon_g1

0x9b26,	// (0x00039ca4) popup_note_wait_window_g3_ParamLimits

0x9b26,	// (0x00039ca4) popup_note_wait_window_g3

0x9b9d,	// (0x00039d1b) popup_note_wait_window_t5_ParamLimits

0x9b9d,	// (0x00039d1b) popup_note_wait_window_t5

0xf44d,	// (0x0003f5cb) main_feb_china_hwr_fs_writing_pane

0x89ff,	// (0x00038b7d) popup_feb_china_hwr_fs_window_ParamLimits

0x89ff,	// (0x00038b7d) popup_feb_china_hwr_fs_window

0x709d,	// (0x0003721b) aid_size_cell_hwr_fs_ParamLimits

0x709d,	// (0x0003721b) aid_size_cell_hwr_fs

0x9524,	// (0x000396a2) bg_popup_sub_pane_cp3_ParamLimits

0x9524,	// (0x000396a2) bg_popup_sub_pane_cp3

0x70b2,	// (0x00037230) grid_hwr_fs_pane_ParamLimits

0x70b2,	// (0x00037230) grid_hwr_fs_pane

0x70ca,	// (0x00037248) linegrid_hwr_fs_pane_ParamLimits

0x70ca,	// (0x00037248) linegrid_hwr_fs_pane

0x70da,	// (0x00037258) cell_hwr_fs_pane_ParamLimits

0x70da,	// (0x00037258) cell_hwr_fs_pane

0x9530,	// (0x000396ae) linegrid_hwr_fs_pane_g1_ParamLimits

0x9530,	// (0x000396ae) linegrid_hwr_fs_pane_g1

0x953c,	// (0x000396ba) linegrid_hwr_fs_pane_g2_ParamLimits

0x953c,	// (0x000396ba) linegrid_hwr_fs_pane_g2

0x954e,	// (0x000396cc) linegrid_hwr_fs_pane_g3_ParamLimits

0x954e,	// (0x000396cc) linegrid_hwr_fs_pane_g3

0x70fe,	// (0x0003727c) linegrid_hwr_fs_pane_g4_ParamLimits

0x70fe,	// (0x0003727c) linegrid_hwr_fs_pane_g4

0x711c,	// (0x0003729a) linegrid_hwr_fs_pane_g5_ParamLimits

0x711c,	// (0x0003729a) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x0003f974) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0003f974) linegrid_hwr_fs_pane_g

0x955a,	// (0x000396d8) cell_hwr_fs_pane_g1_ParamLimits

0x955a,	// (0x000396d8) cell_hwr_fs_pane_g1

0x9325,	// (0x000394a3) cell_hwr_fs_pane_g2_ParamLimits

0x9325,	// (0x000394a3) cell_hwr_fs_pane_g2

0x9570,	// (0x000396ee) cell_hwr_fs_pane_g3_ParamLimits

0x9570,	// (0x000396ee) cell_hwr_fs_pane_g3

0x957d,	// (0x000396fb) cell_hwr_fs_pane_g4_ParamLimits

0x957d,	// (0x000396fb) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x0003f97f) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x0003f97f) cell_hwr_fs_pane_g

0x7132,	// (0x000372b0) cell_hwr_fs_pane_t1

0xf44d,	// (0x0003f5cb) grid_highlight_pane_cp6

0xf44d,	// (0x0003f5cb) main_idle_act2_pane

0x2a78,	// (0x00032bf6) aid_inside_area_popup_secondary

0xa1d6,	// (0x0003a354) aid_inside_area_window_primary_ParamLimits

0xa1d6,	// (0x0003a354) aid_inside_area_window_primary

0xadbc,	// (0x0003af3a) ai2_news_ticker_pane

0xadc4,	// (0x0003af42) aid_size_cell_ai1_link_ParamLimits

0xadc4,	// (0x0003af42) aid_size_cell_ai1_link

0xadde,	// (0x0003af5c) popup_ai2_data_window_ParamLimits

0xadde,	// (0x0003af5c) popup_ai2_data_window

0xadfc,	// (0x0003af7a) popup_ai2_link_window_ParamLimits

0xadfc,	// (0x0003af7a) popup_ai2_link_window

0x9524,	// (0x000396a2) bg_popup_sub_pane_cp4_ParamLimits

0x9524,	// (0x000396a2) bg_popup_sub_pane_cp4

0xae12,	// (0x0003af90) grid_ai2_link_pane_ParamLimits

0xae12,	// (0x0003af90) grid_ai2_link_pane

0xae29,	// (0x0003afa7) popup_ai2_link_window_g1_ParamLimits

0xae29,	// (0x0003afa7) popup_ai2_link_window_g1

0xae35,	// (0x0003afb3) popup_ai2_link_window_g2_ParamLimits

0xae35,	// (0x0003afb3) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x0003fb52) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x0003fb52) popup_ai2_link_window_g

0xae46,	// (0x0003afc4) ai2_mp_button_pane

0xae4e,	// (0x0003afcc) ai2_mp_volume_pane

0x9715,	// (0x00039893) bg_popup_sub_pane_cp5_ParamLimits

0x9715,	// (0x00039893) bg_popup_sub_pane_cp5

0xae56,	// (0x0003afd4) heading_ai2_gene_pane_ParamLimits

0xae56,	// (0x0003afd4) heading_ai2_gene_pane

0xae62,	// (0x0003afe0) list_ai2_gene_pane_ParamLimits

0xae62,	// (0x0003afe0) list_ai2_gene_pane

0xaeaa,	// (0x0003b028) cell_ai2_link_pane_ParamLimits

0xaeaa,	// (0x0003b028) cell_ai2_link_pane

0xaec0,	// (0x0003b03e) cell_ai2_link_pane_g1

0xf44d,	// (0x0003f5cb) grid_highlight_pane_cp7

0x7514,	// (0x00037692) ai2_mp_volume_pane_g1

0xaf93,	// (0x0003b111) ai2_mp_volume_pane_g2

0xaf08,	// (0x0003b086) list_ai2_gene_pane_t1

0xaf9b,	// (0x0003b119) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x0003fb6b) ai2_mp_volume_pane_g

0x751c,	// (0x0003769a) volume_small_pane_cp3

0xafa3,	// (0x0003b121) aid_size_cell_ai2_button

0xafab,	// (0x0003b129) grid_ai2_button_pane

0xafb4,	// (0x0003b132) cell_ai2_button_pane_ParamLimits

0xafb4,	// (0x0003b132) cell_ai2_button_pane

0xf443,	// (0x0003f5c1) cell_ai2_button_pane_g1

0xf44d,	// (0x0003f5cb) grid_highlight_pane_cp8

0xaf53,	// (0x0003b0d1) ai2_gene_pane_t1_ParamLimits

0xaf53,	// (0x0003b0d1) ai2_gene_pane_t1

0x88f3,	// (0x00038a71) aid_height_parent_landscape

0xa87c,	// (0x0003a9fa) aid_height_set_list

0xa88d,	// (0x0003aa0b) aid_size_parent

0xabdd,	// (0x0003ad5b) aid_size_cell_graphic_pane_ParamLimits

0xae72,	// (0x0003aff0) popup_ai2_data_window_g1_ParamLimits

0xae72,	// (0x0003aff0) popup_ai2_data_window_g1

0xae7e,	// (0x0003affc) ai2_news_ticker_pane_g1

0xae86,	// (0x0003b004) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x0003fb57) ai2_news_ticker_pane_g

0xae8e,	// (0x0003b00c) ai2_news_ticker_pane_t1

0xae9c,	// (0x0003b01a) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x0003fb5c) ai2_news_ticker_pane_t

0xaec9,	// (0x0003b047) heading_ai2_gene_pane_g1

0xaed1,	// (0x0003b04f) heading_ai2_gene_pane_t1_ParamLimits

0xaed1,	// (0x0003b04f) heading_ai2_gene_pane_t1

0xaee6,	// (0x0003b064) list_highlight_pane_cp6

0xaeee,	// (0x0003b06c) ai2_gene_pane_ParamLimits

0xaeee,	// (0x0003b06c) ai2_gene_pane

0xaf16,	// (0x0003b094) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x0003fb61) list_ai2_gene_pane_t

0xaf24,	// (0x0003b0a2) list_highlight_pane_cp8_ParamLimits

0xaf24,	// (0x0003b0a2) list_highlight_pane_cp8

0xaf35,	// (0x0003b0b3) ai2_gene_pane_g1_ParamLimits

0xaf35,	// (0x0003b0b3) ai2_gene_pane_g1

0xaf47,	// (0x0003b0c5) ai2_gene_pane_g2_ParamLimits

0xaf47,	// (0x0003b0c5) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x0003fb66) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x0003fb66) ai2_gene_pane_g

0x28fb,	// (0x00032a79) scroll_pane_cp12

0x6fb6,	// (0x00037134) control_pane_t3_ParamLimits

0x6fb6,	// (0x00037134) control_pane_t3

0x8870,	// (0x000389ee) status_small_pane_g8_ParamLimits

0x8870,	// (0x000389ee) status_small_pane_g8

0x8afd,	// (0x00038c7b) popup_find_window_ParamLimits

0x8d28,	// (0x00038ea6) popup_note_image_window_ParamLimits

0x40e0,	// (0x0003425e) list_double2_graphic_pane_vc_g1_ParamLimits

0x40e0,	// (0x0003425e) list_double2_graphic_pane_vc_g1

0x42a2,	// (0x00034420) list_double2_graphic_pane_vc_g2_ParamLimits

0x42a2,	// (0x00034420) list_double2_graphic_pane_vc_g2

0x42ae,	// (0x0003442c) list_double2_graphic_pane_vc_g3_ParamLimits

0x42ae,	// (0x0003442c) list_double2_graphic_pane_vc_g3

0x0002,

0xf7bf,	// (0x0003f93d) list_double2_graphic_pane_vc_g_ParamLimits

0xf7bf,	// (0x0003f93d) list_double2_graphic_pane_vc_g

0x42ba,	// (0x00034438) list_double2_graphic_pane_vc_t1_ParamLimits

0x42ba,	// (0x00034438) list_double2_graphic_pane_vc_t1

0x40b6,	// (0x00034234) list_single_heading_pane_vc_g1_ParamLimits

0x40b6,	// (0x00034234) list_single_heading_pane_vc_g1

0x40c2,	// (0x00034240) list_single_heading_pane_vc_g2_ParamLimits

0x40c2,	// (0x00034240) list_single_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0003f95e) list_single_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0003f95e) list_single_heading_pane_vc_g

0x42d0,	// (0x0003444e) list_single_heading_pane_vc_t1_ParamLimits

0x42d0,	// (0x0003444e) list_single_heading_pane_vc_t1

0x42e8,	// (0x00034466) list_single_heading_pane_vc_t2_ParamLimits

0x42e8,	// (0x00034466) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x0003f963) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x0003f963) list_single_heading_pane_vc_t

0x42fa,	// (0x00034478) list_setting_number_pane_vc_g1_ParamLimits

0x42fa,	// (0x00034478) list_setting_number_pane_vc_g1

0x4306,	// (0x00034484) list_setting_number_pane_vc_g2_ParamLimits

0x4306,	// (0x00034484) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0003f968) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0003f968) list_setting_number_pane_vc_g

0x4312,	// (0x00034490) list_setting_number_pane_vc_t1_ParamLimits

0x4312,	// (0x00034490) list_setting_number_pane_vc_t1

0x4326,	// (0x000344a4) list_setting_number_pane_vc_t2_ParamLimits

0x4326,	// (0x000344a4) list_setting_number_pane_vc_t2

0x4342,	// (0x000344c0) list_setting_number_pane_vc_t3_ParamLimits

0x4342,	// (0x000344c0) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x0003f96d) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x0003f96d) list_setting_number_pane_vc_t

0x4370,	// (0x000344ee) set_value_pane_vc_ParamLimits

0x4370,	// (0x000344ee) set_value_pane_vc

0x43a7,	// (0x00034525) list_double2_graphic_pane_vc_ParamLimits

0x43a7,	// (0x00034525) list_double2_graphic_pane_vc

0xaa65,	// (0x0003abe3) list_double2_large_graphic_pane_vc_ParamLimits

0xaa65,	// (0x0003abe3) list_double2_large_graphic_pane_vc

0x43a7,	// (0x00034525) list_double2_pane_vc_ParamLimits

0x43a7,	// (0x00034525) list_double2_pane_vc

0x43a7,	// (0x00034525) list_double_graphic_heading_pane_vc_ParamLimits

0x43a7,	// (0x00034525) list_double_graphic_heading_pane_vc

0x43a7,	// (0x00034525) list_double_graphic_pane_vc_ParamLimits

0x43a7,	// (0x00034525) list_double_graphic_pane_vc

0x43a7,	// (0x00034525) list_double_heading_pane_vc_ParamLimits

0x43a7,	// (0x00034525) list_double_heading_pane_vc

0xaa65,	// (0x0003abe3) list_double_large_graphic_pane_vc_ParamLimits

0xaa65,	// (0x0003abe3) list_double_large_graphic_pane_vc

0x43a7,	// (0x00034525) list_double_number_pane_vc_ParamLimits

0x43a7,	// (0x00034525) list_double_number_pane_vc

0x43a7,	// (0x00034525) list_double_pane_vc_ParamLimits

0x43a7,	// (0x00034525) list_double_pane_vc

0x43a7,	// (0x00034525) list_double_time_pane_vc_ParamLimits

0x43a7,	// (0x00034525) list_double_time_pane_vc

0x43a7,	// (0x00034525) list_setting_number_pane_vc_ParamLimits

0x43a7,	// (0x00034525) list_setting_number_pane_vc

0x43a7,	// (0x00034525) list_setting_pane_vc_ParamLimits

0x43a7,	// (0x00034525) list_setting_pane_vc

0x43a7,	// (0x00034525) list_single_graphic_heading_pane_vc_ParamLimits

0x43a7,	// (0x00034525) list_single_graphic_heading_pane_vc

0x43a7,	// (0x00034525) list_single_heading_pane_vc_ParamLimits

0x43a7,	// (0x00034525) list_single_heading_pane_vc

0xaa79,	// (0x0003abf7) list_single_number_heading_pane_vc_ParamLimits

0xaa79,	// (0x0003abf7) list_single_number_heading_pane_vc

0x40e0,	// (0x0003425e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x40e0,	// (0x0003425e) list_double_graphic_heading_pane_vc_g1

0x40b6,	// (0x00034234) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x40b6,	// (0x00034234) list_double_graphic_heading_pane_vc_g2

0x40c2,	// (0x00034240) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x40c2,	// (0x00034240) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f4,	// (0x0003fb72) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x0003fb72) list_double_graphic_heading_pane_vc_g

0x43bc,	// (0x0003453a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x43bc,	// (0x0003453a) list_double_graphic_heading_pane_vc_t1

0x43d2,	// (0x00034550) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x43d2,	// (0x00034550) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fb,	// (0x0003fb79) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fb,	// (0x0003fb79) list_double_graphic_heading_pane_vc_t

0x42fa,	// (0x00034478) list_setting_pane_vc_g1_ParamLimits

0x42fa,	// (0x00034478) list_setting_pane_vc_g1

0x4306,	// (0x00034484) list_setting_pane_vc_g2_ParamLimits

0x4306,	// (0x00034484) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x0003f968) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x0003f968) list_setting_pane_vc_g

0x43f0,	// (0x0003456e) list_setting_pane_vc_t1_ParamLimits

0x43f0,	// (0x0003456e) list_setting_pane_vc_t1

0x440c,	// (0x0003458a) list_setting_pane_vc_t2_ParamLimits

0x440c,	// (0x0003458a) list_setting_pane_vc_t2

0x0001,

0xfa29,	// (0x0003fba7) list_setting_pane_vc_t_ParamLimits

0xfa29,	// (0x0003fba7) list_setting_pane_vc_t

0x4370,	// (0x000344ee) set_value_pane_cp_vc_ParamLimits

0x4370,	// (0x000344ee) set_value_pane_cp_vc

0x40b6,	// (0x00034234) list_single_number_heading_pane_vc_g1_ParamLimits

0x40b6,	// (0x00034234) list_single_number_heading_pane_vc_g1

0x40c2,	// (0x00034240) list_single_number_heading_pane_vc_g2_ParamLimits

0x40c2,	// (0x00034240) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0003f95e) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0003f95e) list_single_number_heading_pane_vc_g

0x42d0,	// (0x0003444e) list_single_number_heading_pane_vc_t1_ParamLimits

0x42d0,	// (0x0003444e) list_single_number_heading_pane_vc_t1

0x4428,	// (0x000345a6) list_single_number_heading_pane_vc_t2_ParamLimits

0x4428,	// (0x000345a6) list_single_number_heading_pane_vc_t2

0x40ce,	// (0x0003424c) list_single_number_heading_pane_vc_t3_ParamLimits

0x40ce,	// (0x0003424c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2e,	// (0x0003fbac) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2e,	// (0x0003fbac) list_single_number_heading_pane_vc_t

0x40e0,	// (0x0003425e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x40e0,	// (0x0003425e) list_single_graphic_heading_pane_vc_g1

0x40b6,	// (0x00034234) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x40b6,	// (0x00034234) list_single_graphic_heading_pane_vc_g4

0x40c2,	// (0x00034240) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x40c2,	// (0x00034240) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9f4,	// (0x0003fb72) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x0003fb72) list_single_graphic_heading_pane_vc_g

0x42d0,	// (0x0003444e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x42d0,	// (0x0003444e) list_single_graphic_heading_pane_vc_t1

0x443a,	// (0x000345b8) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x443a,	// (0x000345b8) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x0003fbb3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x0003fbb3) list_single_graphic_heading_pane_vc_t

0x40b6,	// (0x00034234) list_double2_pane_vc_g1_ParamLimits

0x40b6,	// (0x00034234) list_double2_pane_vc_g1

0x40c2,	// (0x00034240) list_double2_pane_vc_g2_ParamLimits

0x40c2,	// (0x00034240) list_double2_pane_vc_g2

0x0001,

0xf7e0,	// (0x0003f95e) list_double2_pane_vc_g_ParamLimits

0xf7e0,	// (0x0003f95e) list_double2_pane_vc_g

0x4391,	// (0x0003450f) list_double2_pane_vc_t1_ParamLimits

0x4391,	// (0x0003450f) list_double2_pane_vc_t1

0x40ec,	// (0x0003426a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x40ec,	// (0x0003426a) list_double2_large_graphic_pane_vc_g1

0x40f8,	// (0x00034276) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x40f8,	// (0x00034276) list_double2_large_graphic_pane_vc_g2

0x4104,	// (0x00034282) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4104,	// (0x00034282) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3a,	// (0x0003fbb8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x0003fbb8) list_double2_large_graphic_pane_vc_g

0x4110,	// (0x0003428e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x4110,	// (0x0003428e) list_double2_large_graphic_pane_vc_t1

0x444c,	// (0x000345ca) list_double_time_pane_vc_g1_ParamLimits

0x444c,	// (0x000345ca) list_double_time_pane_vc_g1

0x4458,	// (0x000345d6) list_double_time_pane_vc_g2_ParamLimits

0x4458,	// (0x000345d6) list_double_time_pane_vc_g2

0x0001,

0xfa41,	// (0x0003fbbf) list_double_time_pane_vc_g_ParamLimits

0xfa41,	// (0x0003fbbf) list_double_time_pane_vc_g

0x4464,	// (0x000345e2) list_double_time_pane_vc_t1_ParamLimits

0x4464,	// (0x000345e2) list_double_time_pane_vc_t1

0x448e,	// (0x0003460c) list_double_time_pane_vc_t2_ParamLimits

0x448e,	// (0x0003460c) list_double_time_pane_vc_t2

0x44d7,	// (0x00034655) list_double_time_pane_vc_t3_ParamLimits

0x44d7,	// (0x00034655) list_double_time_pane_vc_t3

0x44e9,	// (0x00034667) list_double_time_pane_vc_t4_ParamLimits

0x44e9,	// (0x00034667) list_double_time_pane_vc_t4

0x0003,

0xfa46,	// (0x0003fbc4) list_double_time_pane_vc_t_ParamLimits

0xfa46,	// (0x0003fbc4) list_double_time_pane_vc_t

0x40b6,	// (0x00034234) list_double_pane_vc_g1_ParamLimits

0x40b6,	// (0x00034234) list_double_pane_vc_g1

0x40c2,	// (0x00034240) list_double_pane_vc_g2_ParamLimits

0x40c2,	// (0x00034240) list_double_pane_vc_g2

0x0001,

0xf7e0,	// (0x0003f95e) list_double_pane_vc_g_ParamLimits

0xf7e0,	// (0x0003f95e) list_double_pane_vc_g

0x450e,	// (0x0003468c) list_double_pane_vc_t1_ParamLimits

0x450e,	// (0x0003468c) list_double_pane_vc_t1

0x4522,	// (0x000346a0) list_double_pane_vc_t2_ParamLimits

0x4522,	// (0x000346a0) list_double_pane_vc_t2

0x0001,

0xfa4f,	// (0x0003fbcd) list_double_pane_vc_t_ParamLimits

0xfa4f,	// (0x0003fbcd) list_double_pane_vc_t

0x40b6,	// (0x00034234) list_double_number_pane_vc_g1_ParamLimits

0x40b6,	// (0x00034234) list_double_number_pane_vc_g1

0x40c2,	// (0x00034240) list_double_number_pane_vc_g2_ParamLimits

0x40c2,	// (0x00034240) list_double_number_pane_vc_g2

0x0001,

0xf7e0,	// (0x0003f95e) list_double_number_pane_vc_g_ParamLimits

0xf7e0,	// (0x0003f95e) list_double_number_pane_vc_g

0x4538,	// (0x000346b6) list_double_number_pane_vc_t1_ParamLimits

0x4538,	// (0x000346b6) list_double_number_pane_vc_t1

0x454c,	// (0x000346ca) list_double_number_pane_vc_t2_ParamLimits

0x454c,	// (0x000346ca) list_double_number_pane_vc_t2

0x4560,	// (0x000346de) list_double_number_pane_vc_t3_ParamLimits

0x4560,	// (0x000346de) list_double_number_pane_vc_t3

0x0002,

0xfa54,	// (0x0003fbd2) list_double_number_pane_vc_t_ParamLimits

0xfa54,	// (0x0003fbd2) list_double_number_pane_vc_t

0x4576,	// (0x000346f4) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4576,	// (0x000346f4) list_double_large_graphic_pane_vc_g1

0x4587,	// (0x00034705) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4587,	// (0x00034705) list_double_large_graphic_pane_vc_g2

0x4104,	// (0x00034282) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4104,	// (0x00034282) list_double_large_graphic_pane_vc_g3

0x4596,	// (0x00034714) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4596,	// (0x00034714) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5b,	// (0x0003fbd9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5b,	// (0x0003fbd9) list_double_large_graphic_pane_vc_g

0x45a2,	// (0x00034720) list_double_large_graphic_pane_vc_t1_ParamLimits

0x45a2,	// (0x00034720) list_double_large_graphic_pane_vc_t1

0x45bb,	// (0x00034739) list_double_large_graphic_pane_vc_t2_ParamLimits

0x45bb,	// (0x00034739) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa64,	// (0x0003fbe2) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa64,	// (0x0003fbe2) list_double_large_graphic_pane_vc_t

0x40b6,	// (0x00034234) list_double_heading_pane_vc_g1_ParamLimits

0x40b6,	// (0x00034234) list_double_heading_pane_vc_g1

0x40c2,	// (0x00034240) list_double_heading_pane_vc_g2_ParamLimits

0x40c2,	// (0x00034240) list_double_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0003f95e) list_double_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0003f95e) list_double_heading_pane_vc_g

0x45d2,	// (0x00034750) list_double_heading_pane_vc_t1_ParamLimits

0x45d2,	// (0x00034750) list_double_heading_pane_vc_t1

0x42d0,	// (0x0003444e) list_double_heading_pane_vc_t2_ParamLimits

0x42d0,	// (0x0003444e) list_double_heading_pane_vc_t2

0x0001,

0xfa69,	// (0x0003fbe7) list_double_heading_pane_vc_t_ParamLimits

0xfa69,	// (0x0003fbe7) list_double_heading_pane_vc_t

0x45e4,	// (0x00034762) list_double_graphic_pane_vc_g1_ParamLimits

0x45e4,	// (0x00034762) list_double_graphic_pane_vc_g1

0x45f4,	// (0x00034772) list_double_graphic_pane_vc_g2_ParamLimits

0x45f4,	// (0x00034772) list_double_graphic_pane_vc_g2

0x4603,	// (0x00034781) list_double_graphic_pane_vc_g3_ParamLimits

0x4603,	// (0x00034781) list_double_graphic_pane_vc_g3

0x0002,

0xfa6e,	// (0x0003fbec) list_double_graphic_pane_vc_g_ParamLimits

0xfa6e,	// (0x0003fbec) list_double_graphic_pane_vc_g

0x460f,	// (0x0003478d) list_double_graphic_pane_vc_t1_ParamLimits

0x460f,	// (0x0003478d) list_double_graphic_pane_vc_t1

0x4623,	// (0x000347a1) list_double_graphic_pane_vc_t2_ParamLimits

0x4623,	// (0x000347a1) list_double_graphic_pane_vc_t2

0x0001,

0xfa75,	// (0x0003fbf3) list_double_graphic_pane_vc_t_ParamLimits

0xfa75,	// (0x0003fbf3) list_double_graphic_pane_vc_t

0x5601,	// (0x0003577f) aid_size_cell_fastswap

0x5609,	// (0x00035787) aid_size_cell_touch_ParamLimits

0x5609,	// (0x00035787) aid_size_cell_touch

0x5874,	// (0x000359f2) popup_fast_swap_wide_window_ParamLimits

0x5874,	// (0x000359f2) popup_fast_swap_wide_window

0x598a,	// (0x00035b08) touch_pane_ParamLimits

0x598a,	// (0x00035b08) touch_pane

0x2951,	// (0x00032acf) button_value_adjust_pane_cp2

0x4149,	// (0x000342c7) button_value_adjust_pane_cp4

0x4151,	// (0x000342cf) form_field_data_pane_cp2

0x61d8,	// (0x00036356) form_field_data_wide_pane_cp2

0x2cb7,	// (0x00032e35) bg_scroll_pane_ParamLimits

0x65d2,	// (0x00036750) scroll_handle_pane_ParamLimits

0x65e6,	// (0x00036764) scroll_sc2_down_pane_ParamLimits

0x65e6,	// (0x00036764) scroll_sc2_down_pane

0x2ce8,	// (0x00032e66) scroll_sc2_up_pane_ParamLimits

0x2ce8,	// (0x00032e66) scroll_sc2_up_pane

0xb6d3,	// (0x0003b851) grid_wheel_folder_pane_g1_ParamLimits

0xb6d3,	// (0x0003b851) grid_wheel_folder_pane_g1

0x6b10,	// (0x00036c8e) clock_nsta_pane_cp2_ParamLimits

0x6b10,	// (0x00036c8e) clock_nsta_pane_cp2

0x638e,	// (0x0003650c) listscroll_midp_pane_ParamLimits

0x85fd,	// (0x0003877b) midp_canvas_pane

0x88eb,	// (0x00038a69) nsta_clock_indic_pane

0x8941,	// (0x00038abf) listscroll_form_pane_vc

0x895d,	// (0x00038adb) listscroll_set_pane_vc_ParamLimits

0x895d,	// (0x00038adb) listscroll_set_pane_vc

0x9079,	// (0x000391f7) clock_nsta_pane

0x90f6,	// (0x00039274) indicator_nsta_pane

0x93ee,	// (0x0003956c) bg_popup_sub_pane_cp2_ParamLimits

0x9402,	// (0x00039580) find_pane_cp2_ParamLimits

0x9402,	// (0x00039580) find_pane_cp2

0x9418,	// (0x00039596) grid_toobar_pane_ParamLimits

0x94f8,	// (0x00039676) list_form_gen_pane_vc_ParamLimits

0x94f8,	// (0x00039676) list_form_gen_pane_vc

0x950e,	// (0x0003968c) scroll_pane_cp8_vc_ParamLimits

0x950e,	// (0x0003968c) scroll_pane_cp8_vc

0x958a,	// (0x00039708) data_form_wide_pane_vc_ParamLimits

0x958a,	// (0x00039708) data_form_wide_pane_vc

0x9596,	// (0x00039714) form_field_data_wide_pane_vc_g1

0x959e,	// (0x0003971c) form_field_data_wide_pane_vc_t1_ParamLimits

0x959e,	// (0x0003971c) form_field_data_wide_pane_vc_t1

0x2965,	// (0x00032ae3) input_focus_pane_cp6_vc_ParamLimits

0x2965,	// (0x00032ae3) input_focus_pane_cp6_vc

0x98a0,	// (0x00039a1e) list_midp_pane_ParamLimits

0x98ac,	// (0x00039a2a) scroll_pane_cp16_ParamLimits

0x98ac,	// (0x00039a2a) scroll_pane_cp16

0x98fa,	// (0x00039a78) button_value_adjust_pane_ParamLimits

0x98fa,	// (0x00039a78) button_value_adjust_pane

0xa89f,	// (0x0003aa1d) button_value_adjust_pane_cp6_ParamLimits

0xa89f,	// (0x0003aa1d) button_value_adjust_pane_cp6

0xa9ed,	// (0x0003ab6b) settings_code_pane_cp_ParamLimits

0xa9ed,	// (0x0003ab6b) settings_code_pane_cp

0xf443,	// (0x0003f5c1) cell_touch_pane_g1

0xf443,	// (0x0003f5c1) cell_touch_pane_g2

0x0001,

0xf704,	// (0x0003f882) cell_touch_pane_g

0xafc6,	// (0x0003b144) cell_touch_pane_cp_ParamLimits

0xafc6,	// (0x0003b144) cell_touch_pane_cp

0xafd6,	// (0x0003b154) cell_touch_pane_ParamLimits

0xafd6,	// (0x0003b154) cell_touch_pane

0xf443,	// (0x0003f5c1) scroll_sc2_down_pane_g1

0xf443,	// (0x0003f5c1) scroll_sc2_up_pane_g1

0xf44d,	// (0x0003f5cb) bg_set_opt_pane_cp4_vc

0xafe7,	// (0x0003b165) list_set_graphic_pane_vc_g1_ParamLimits

0xafe7,	// (0x0003b165) list_set_graphic_pane_vc_g1

0x2e9e,	// (0x0003301c) list_set_graphic_pane_vc_g2_ParamLimits

0x2e9e,	// (0x0003301c) list_set_graphic_pane_vc_g2

0x0001,

0xfa00,	// (0x0003fb7e) list_set_graphic_pane_vc_g_ParamLimits

0xfa00,	// (0x0003fb7e) list_set_graphic_pane_vc_g

0xaff3,	// (0x0003b171) text_primary_small_cp13_vc_ParamLimits

0xaff3,	// (0x0003b171) text_primary_small_cp13_vc

0xb00b,	// (0x0003b189) list_set_graphic_pane_vc_ParamLimits

0xb00b,	// (0x0003b189) list_set_graphic_pane_vc

0xf44d,	// (0x0003f5cb) input_focus_pane_cp2_vc

0xf443,	// (0x0003f5c1) setting_code_pane_vc_g1

0x2367,	// (0x000324e5) setting_code_pane_vc_t1

0xb020,	// (0x0003b19e) set_text_pane_vc_t1_ParamLimits

0xb020,	// (0x0003b19e) set_text_pane_vc_t1

0xf44d,	// (0x0003f5cb) input_focus_pane_cp1_vc

0xb03e,	// (0x0003b1bc) list_set_text_pane_vc

0xf443,	// (0x0003f5c1) setting_text_pane_vc_g1

0xf44d,	// (0x0003f5cb) bg_set_opt_pane_cp2_vc

0x235e,	// (0x000324dc) setting_slider_graphic_pane_vc_g1

0xb048,	// (0x0003b1c6) setting_slider_graphic_pane_vc_t1

0xb05a,	// (0x0003b1d8) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa05,	// (0x0003fb83) setting_slider_graphic_pane_vc_t

0xb06c,	// (0x0003b1ea) slider_set_pane_cp_vc

0xb076,	// (0x0003b1f4) slider_set_pane_vc_g1

0xb07f,	// (0x0003b1fd) slider_set_pane_vc_g2

0x0006,

0xfa0a,	// (0x0003fb88) slider_set_pane_vc_g

0x29c0,	// (0x00032b3e) set_opt_bg_pane_g1_copy1

0x29c8,	// (0x00032b46) set_opt_bg_pane_g2_copy1

0xb0ab,	// (0x0003b229) set_opt_bg_pane_g3_copy1

0x29d8,	// (0x00032b56) set_opt_bg_pane_g4_copy1

0x29e0,	// (0x00032b5e) set_opt_bg_pane_g5_copy1

0x29e8,	// (0x00032b66) set_opt_bg_pane_g6_copy1

0xb0b5,	// (0x0003b233) set_opt_bg_pane_g7_copy1

0xb0bf,	// (0x0003b23d) set_opt_bg_pane_g8_copy1

0xb0c9,	// (0x0003b247) set_opt_bg_pane_g9_copy1

0xf44d,	// (0x0003f5cb) bg_set_opt_pane_cp_vc

0xb0d3,	// (0x0003b251) setting_slider_pane_vc_t1

0xb0e2,	// (0x0003b260) setting_slider_pane_vc_t2

0xb0f4,	// (0x0003b272) setting_slider_pane_vc_t3

0x0002,

0xfa19,	// (0x0003fb97) setting_slider_pane_vc_t

0xb106,	// (0x0003b284) slider_set_pane_vc

0x7163,	// (0x000372e1) volume_set_pane_vc_g1

0x716c,	// (0x000372ea) volume_set_pane_vc_g2

0x7175,	// (0x000372f3) volume_set_pane_vc_g3

0x717e,	// (0x000372fc) volume_set_pane_vc_g4

0x7187,	// (0x00037305) volume_set_pane_vc_g5

0x7190,	// (0x0003730e) volume_set_pane_vc_g6

0x7199,	// (0x00037317) volume_set_pane_vc_g7

0x71a2,	// (0x00037320) volume_set_pane_vc_g8

0x71ab,	// (0x00037329) volume_set_pane_vc_g9

0x71b4,	// (0x00037332) volume_set_pane_vc_g10

0x0009,

0xf8b7,	// (0x0003fa35) volume_set_pane_vc_g

0xb110,	// (0x0003b28e) volume_set_pane_vc

0xb11a,	// (0x0003b298) button_value_adjust_pane_cp1_vc

0xb124,	// (0x0003b2a2) list_highlight_pane_cp2_vc

0xb12d,	// (0x0003b2ab) list_set_pane_vc_ParamLimits

0xb12d,	// (0x0003b2ab) list_set_pane_vc

0xb19d,	// (0x0003b31b) main_pane_set_vc_t1_ParamLimits

0xb19d,	// (0x0003b31b) main_pane_set_vc_t1

0xb1b2,	// (0x0003b330) main_pane_set_vc_t2_ParamLimits

0xb1b2,	// (0x0003b330) main_pane_set_vc_t2

0xb1c4,	// (0x0003b342) main_pane_set_vc_t3_ParamLimits

0xb1c4,	// (0x0003b342) main_pane_set_vc_t3

0xb1d8,	// (0x0003b356) main_pane_set_vc_t4_ParamLimits

0xb1d8,	// (0x0003b356) main_pane_set_vc_t4

0x0003,

0xfa20,	// (0x0003fb9e) main_pane_set_vc_t_ParamLimits

0xfa20,	// (0x0003fb9e) main_pane_set_vc_t

0xb1ec,	// (0x0003b36a) setting_code_pane_vc_ParamLimits

0xb1ec,	// (0x0003b36a) setting_code_pane_vc

0xb1fd,	// (0x0003b37b) setting_slider_graphic_pane_vc

0xb1fd,	// (0x0003b37b) setting_slider_pane_vc

0xb1fd,	// (0x0003b37b) setting_text_pane_vc

0xb1fd,	// (0x0003b37b) setting_volume_pane_vc

0xb207,	// (0x0003b385) scroll_pane_cp121_vc

0x293f,	// (0x00032abd) set_content_pane_vc

0xb20f,	// (0x0003b38d) button_value_adjust_pane_g1

0xb218,	// (0x0003b396) button_value_adjust_pane_g2

0x0001,

0xfa7a,	// (0x0003fbf8) button_value_adjust_pane_g

0xb221,	// (0x0003b39f) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb221,	// (0x0003b39f) form_field_slider_wide_pane_vc_t1

0xb233,	// (0x0003b3b1) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb233,	// (0x0003b3b1) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7f,	// (0x0003fbfd) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x0003fbfd) form_field_slider_wide_pane_vc_t

0xf4a7,	// (0x0003f625) input_focus_pane_cp10_vc_ParamLimits

0xf4a7,	// (0x0003f625) input_focus_pane_cp10_vc

0xb25f,	// (0x0003b3dd) slider_cont_pane_cp1_vc_ParamLimits

0xb25f,	// (0x0003b3dd) slider_cont_pane_cp1_vc

0xb271,	// (0x0003b3ef) slider_form_pane_g1_cp2

0xb07f,	// (0x0003b1fd) slider_form_pane_g2_cp2

0xb29e,	// (0x0003b41c) form_field_slider_pane_vc_t3

0xb2ac,	// (0x0003b42a) form_field_slider_pane_vc_t4

0xb2ba,	// (0x0003b438) slider_form_pane_vc_ParamLimits

0xb2ba,	// (0x0003b438) slider_form_pane_vc

0xb2c7,	// (0x0003b445) form_field_slider_pane_vc_t1_ParamLimits

0xb2c7,	// (0x0003b445) form_field_slider_pane_vc_t1

0xb233,	// (0x0003b3b1) form_field_slider_pane_vc_t2_ParamLimits

0xb233,	// (0x0003b3b1) form_field_slider_pane_vc_t2

0x0001,

0xfa91,	// (0x0003fc0f) form_field_slider_pane_vc_t_ParamLimits

0xfa91,	// (0x0003fc0f) form_field_slider_pane_vc_t

0xf4a7,	// (0x0003f625) input_focus_pane_cp9_vc_ParamLimits

0xf4a7,	// (0x0003f625) input_focus_pane_cp9_vc

0xb2dd,	// (0x0003b45b) slider_cont_pane_vc_ParamLimits

0xb2dd,	// (0x0003b45b) slider_cont_pane_vc

0xb2f1,	// (0x0003b46f) list_form_graphic_pane_cp_vc_ParamLimits

0xb2f1,	// (0x0003b46f) list_form_graphic_pane_cp_vc

0x9596,	// (0x00039714) form_field_popup_wide_pane_vc_g1

0xb306,	// (0x0003b484) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb306,	// (0x0003b484) form_field_popup_wide_pane_vc_t1

0x2965,	// (0x00032ae3) input_focus_pane_cp8_vc_ParamLimits

0x2965,	// (0x00032ae3) input_focus_pane_cp8_vc

0xb34b,	// (0x0003b4c9) list_form_wide_pane_vc_ParamLimits

0xb34b,	// (0x0003b4c9) list_form_wide_pane_vc

0xb357,	// (0x0003b4d5) list_form_graphic_pane_vc_g1

0xb35f,	// (0x0003b4dd) list_form_graphic_pane_vc_t1_ParamLimits

0xb35f,	// (0x0003b4dd) list_form_graphic_pane_vc_t1

0x2350,	// (0x000324ce) list_highlight_pane_cp5_vc_ParamLimits

0x2350,	// (0x000324ce) list_highlight_pane_cp5_vc

0xb37b,	// (0x0003b4f9) list_form_graphic_pane_vc_ParamLimits

0xb37b,	// (0x0003b4f9) list_form_graphic_pane_vc

0x9596,	// (0x00039714) form_field_popup_pane_vc_g1

0xb391,	// (0x0003b50f) form_field_popup_pane_vc_t1_ParamLimits

0xb391,	// (0x0003b50f) form_field_popup_pane_vc_t1

0x2965,	// (0x00032ae3) input_focus_pane_cp7_vc_ParamLimits

0x2965,	// (0x00032ae3) input_focus_pane_cp7_vc

0xb3a8,	// (0x0003b526) list_form_pane_vc_ParamLimits

0xb3a8,	// (0x0003b526) list_form_pane_vc

0xb3b4,	// (0x0003b532) data_form_pane_vc_t1_ParamLimits

0xb3b4,	// (0x0003b532) data_form_pane_vc_t1

0x29c0,	// (0x00032b3e) input_focus_pane_vc_g1

0x29c8,	// (0x00032b46) input_focus_pane_vc_g2

0x29d0,	// (0x00032b4e) input_focus_pane_vc_g3

0x29d8,	// (0x00032b56) input_focus_pane_vc_g4

0x29e0,	// (0x00032b5e) input_focus_pane_vc_g5

0x29e8,	// (0x00032b66) input_focus_pane_vc_g6

0x29f0,	// (0x00032b6e) input_focus_pane_vc_g7

0x29f8,	// (0x00032b76) input_focus_pane_vc_g8

0x2a00,	// (0x00032b7e) input_focus_pane_vc_g9

0xf443,	// (0x0003f5c1) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x0003f80b) input_focus_pane_vc_g

0x958a,	// (0x00039708) data_form_pane_vc_ParamLimits

0x958a,	// (0x00039708) data_form_pane_vc

0x9596,	// (0x00039714) form_field_data_pane_vc_g1

0xb3d1,	// (0x0003b54f) form_field_data_pane_vc_t1_ParamLimits

0xb3d1,	// (0x0003b54f) form_field_data_pane_vc_t1

0x2965,	// (0x00032ae3) input_focus_pane_vc_ParamLimits

0x2965,	// (0x00032ae3) input_focus_pane_vc

0xb3eb,	// (0x0003b569) button_value_adjust_pane_cp3_vc

0xb3f3,	// (0x0003b571) button_value_adjust_pane_cp5_vc

0xb3fb,	// (0x0003b579) form_field_data_pane_vc_ParamLimits

0xb3fb,	// (0x0003b579) form_field_data_pane_vc

0xb416,	// (0x0003b594) form_field_data_pane_vc_cp2

0xb41e,	// (0x0003b59c) form_field_data_wide_pane_vc_ParamLimits

0xb41e,	// (0x0003b59c) form_field_data_wide_pane_vc

0xb438,	// (0x0003b5b6) form_field_data_wide_pane_vc_cp2

0xb440,	// (0x0003b5be) form_field_popup_pane_vc_ParamLimits

0xb440,	// (0x0003b5be) form_field_popup_pane_vc

0xb45b,	// (0x0003b5d9) form_field_popup_wide_pane_vc_ParamLimits

0xb45b,	// (0x0003b5d9) form_field_popup_wide_pane_vc

0xb475,	// (0x0003b5f3) form_field_slider_pane_vc_ParamLimits

0xb475,	// (0x0003b5f3) form_field_slider_pane_vc

0xb488,	// (0x0003b606) form_field_slider_wide_pane_vc_ParamLimits

0xb488,	// (0x0003b606) form_field_slider_wide_pane_vc

0xb49b,	// (0x0003b619) grid_touch_1_pane_ParamLimits

0xb49b,	// (0x0003b619) grid_touch_1_pane

0xb4a7,	// (0x0003b625) grid_touch_2_pane_ParamLimits

0xb4a7,	// (0x0003b625) grid_touch_2_pane

0x88b6,	// (0x00038a34) touch_pane_g1_ParamLimits

0x88b6,	// (0x00038a34) touch_pane_g1

0xb4c1,	// (0x0003b63f) cell_app_pane_cp_wide_ParamLimits

0xb4c1,	// (0x0003b63f) cell_app_pane_cp_wide

0xb4d2,	// (0x0003b650) grid_popup_fast_wide_pane_ParamLimits

0xb4d2,	// (0x0003b650) grid_popup_fast_wide_pane

0xb4e6,	// (0x0003b664) scroll_pane_cp19_ParamLimits

0xb4e6,	// (0x0003b664) scroll_pane_cp19

0xf44d,	// (0x0003f5cb) bg_popup_window_pane_cp20

0xb4fa,	// (0x0003b678) listscroll_popup_fast_wide_pane

0x2350,	// (0x000324ce) grid_indicator_nsta_pane

0xb502,	// (0x0003b680) clock_nsta_pane_g1

0xb50b,	// (0x0003b689) clock_nsta_pane_t1

0xb527,	// (0x0003b6a5) cell_indicator_nsta_pane_ParamLimits

0xb527,	// (0x0003b6a5) cell_indicator_nsta_pane

0xb55f,	// (0x0003b6dd) cell_indicator_nsta_pane_g1

0xb56d,	// (0x0003b6eb) cell_indicator_nsta_pane_g2

0x0001,

0xfaa2,	// (0x0003fc20) cell_indicator_nsta_pane_g

0xb583,	// (0x0003b701) clock_nsta_pane_cp

0xb58b,	// (0x0003b709) indicator_nsta_pane_cp

0xb594,	// (0x0003b712) nsta_clock_indic_pane_g1

0x238c,	// (0x0003250a) grid_indicator_pane

0x2dda,	// (0x00032f58) scroll_pane_cp29

0x6a3a,	// (0x00036bb8) indicator_nsta_pane_cp2_ParamLimits

0x6a3a,	// (0x00036bb8) indicator_nsta_pane_cp2

0x2350,	// (0x000324ce) main_apps_wheel_pane

0x977d,	// (0x000398fb) form_midp_field_text_pane_ParamLimits

0x98cc,	// (0x00039a4a) scroll_bar_cp050_ParamLimits

0xb5fd,	// (0x0003b77b) cell_indicator_pane_ParamLimits

0xb5fd,	// (0x0003b77b) cell_indicator_pane

0xb615,	// (0x0003b793) cell_indicator_pane_g1

0xb61f,	// (0x0003b79d) grid_wheel_folder_pane_ParamLimits

0xb61f,	// (0x0003b79d) grid_wheel_folder_pane

0xb633,	// (0x0003b7b1) list_wheel_apps_pane_ParamLimits

0xb633,	// (0x0003b7b1) list_wheel_apps_pane

0xb646,	// (0x0003b7c4) main_apps_wheel_pane_g1_ParamLimits

0xb646,	// (0x0003b7c4) main_apps_wheel_pane_g1

0xb662,	// (0x0003b7e0) main_apps_wheel_pane_g2_ParamLimits

0xb662,	// (0x0003b7e0) main_apps_wheel_pane_g2

0x0001,

0xfabe,	// (0x0003fc3c) main_apps_wheel_pane_g_ParamLimits

0xfabe,	// (0x0003fc3c) main_apps_wheel_pane_g

0xb67e,	// (0x0003b7fc) main_apps_wheel_pane_t1_ParamLimits

0xb67e,	// (0x0003b7fc) main_apps_wheel_pane_t1

0xb6a7,	// (0x0003b825) list_wheel_apps_pane_g1

0xb6af,	// (0x0003b82d) list_wheel_apps_pane_g2

0xb6b7,	// (0x0003b835) list_wheel_apps_pane_g3

0xb6bf,	// (0x0003b83d) list_wheel_apps_pane_g4

0xb6c9,	// (0x0003b847) list_wheel_apps_pane_g5

0x0004,

0xfac3,	// (0x0003fc41) list_wheel_apps_pane_g

0x6d3d,	// (0x00036ebb) navi_icon_text_pane

0x8fa6,	// (0x00039124) aid_fill_nsta

0xb6ea,	// (0x0003b868) navi_icon_text_pane_g1

0xb6f6,	// (0x0003b874) navi_icon_text_pane_t1

0x6bd3,	// (0x00036d51) list_set_graphic_pane_t1_ParamLimits

0x6bd3,	// (0x00036d51) list_set_graphic_pane_t1

0xa01d,	// (0x0003a19b) popup_midp_note_alarm_window_t6_ParamLimits

0xa01d,	// (0x0003a19b) popup_midp_note_alarm_window_t6

0xa02f,	// (0x0003a1ad) popup_midp_note_alarm_window_t7_ParamLimits

0xa02f,	// (0x0003a1ad) popup_midp_note_alarm_window_t7

0xa041,	// (0x0003a1bf) popup_midp_note_alarm_window_t8_ParamLimits

0xa041,	// (0x0003a1bf) popup_midp_note_alarm_window_t8

0xa053,	// (0x0003a1d1) popup_midp_note_alarm_window_t9_ParamLimits

0xa053,	// (0x0003a1d1) popup_midp_note_alarm_window_t9

0xa065,	// (0x0003a1e3) popup_midp_note_alarm_window_t10_ParamLimits

0xa065,	// (0x0003a1e3) popup_midp_note_alarm_window_t10

0xa077,	// (0x0003a1f5) popup_midp_note_alarm_window_t11_ParamLimits

0xa077,	// (0x0003a1f5) popup_midp_note_alarm_window_t11

0xa089,	// (0x0003a207) scroll_pane_cp17_ParamLimits

0xa089,	// (0x0003a207) scroll_pane_cp17

0x7163,	// (0x000372e1) volume_small_pane_cp_g1

0x7525,	// (0x000376a3) volume_small_pane_cp_g2

0x752e,	// (0x000376ac) volume_small_pane_cp_g3

0x7537,	// (0x000376b5) volume_small_pane_cp_g4

0x7540,	// (0x000376be) volume_small_pane_cp_g5

0x7549,	// (0x000376c7) volume_small_pane_cp_g6

0x7552,	// (0x000376d0) volume_small_pane_cp_g7

0x755b,	// (0x000376d9) volume_small_pane_cp_g8

0x7564,	// (0x000376e2) volume_small_pane_cp_g9

0x756d,	// (0x000376eb) volume_small_pane_cp_g10

0x86c6,	// (0x00038844) midp_ticker_pane_g1_ParamLimits

0x86d2,	// (0x00038850) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x0003f8d7) midp_ticker_pane_g_ParamLimits

0x86de,	// (0x0003885c) midp_ticker_pane_t1_ParamLimits

0x8fbc,	// (0x0003913a) aid_fill_nsta_2

0x98b8,	// (0x00039a36) list_form2_midp_pane

0xaa34,	// (0x0003abb2) midp_editing_number_pane_ParamLimits

0xaa43,	// (0x0003abc1) midp_ticker_pane_ParamLimits

0xb708,	// (0x0003b886) form2_midp_field_pane

0xb72c,	// (0x0003b8aa) scroll_pane_cp51

0xb74c,	// (0x0003b8ca) form2_midp_button_pane_ParamLimits

0xb74c,	// (0x0003b8ca) form2_midp_button_pane

0xb75e,	// (0x0003b8dc) form2_midp_content_pane_ParamLimits

0xb75e,	// (0x0003b8dc) form2_midp_content_pane

0xb778,	// (0x0003b8f6) form2_midp_field_choice_group_pane

0xb780,	// (0x0003b8fe) form2_midp_field_pane_g1

0xb788,	// (0x0003b906) form2_midp_field_pane_g2

0xb790,	// (0x0003b90e) form2_midp_field_pane_g3

0xb798,	// (0x0003b916) form2_midp_field_pane_g4

0x0003,

0xfae8,	// (0x0003fc66) form2_midp_field_pane_g

0xb7a0,	// (0x0003b91e) form2_midp_gauge_slider_pane

0xb7a8,	// (0x0003b926) form2_midp_gauge_wait_pane

0xb7b0,	// (0x0003b92e) form2_midp_image_pane_ParamLimits

0xb7b0,	// (0x0003b92e) form2_midp_image_pane

0xb7cb,	// (0x0003b949) form2_midp_label_pane_ParamLimits

0xb7cb,	// (0x0003b949) form2_midp_label_pane

0xb7ea,	// (0x0003b968) form2_midp_label_pane_cp_ParamLimits

0xb7ea,	// (0x0003b968) form2_midp_label_pane_cp

0xb80b,	// (0x0003b989) form2_midp_string_pane_ParamLimits

0xb80b,	// (0x0003b989) form2_midp_string_pane

0x4639,	// (0x000347b7) form2_midp_text_pane_ParamLimits

0x4639,	// (0x000347b7) form2_midp_text_pane

0xb81d,	// (0x0003b99b) form2_midp_time_pane

0xb82d,	// (0x0003b9ab) input_focus_pane_cp51_ParamLimits

0xb82d,	// (0x0003b9ab) input_focus_pane_cp51

0xb845,	// (0x0003b9c3) form2_midp_label_pane_t1_ParamLimits

0xb845,	// (0x0003b9c3) form2_midp_label_pane_t1

0x465a,	// (0x000347d8) form2_mdip_text_pane_t1_ParamLimits

0x465a,	// (0x000347d8) form2_mdip_text_pane_t1

0x467e,	// (0x000347fc) form2_midp_time_pane_t1

0xb893,	// (0x0003ba11) form2_midp_gauge_slider_pane_t1

0xb8a5,	// (0x0003ba23) form2_midp_gauge_slider_pane_t2

0xb8b7,	// (0x0003ba35) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf1,	// (0x0003fc6f) form2_midp_gauge_slider_pane_t

0xb8c9,	// (0x0003ba47) form2_midp_slider_pane

0xb8d5,	// (0x0003ba53) form2_midp_gauge_wait_pane_t1

0xb8e3,	// (0x0003ba61) form2_midp_wait_pane_ParamLimits

0xb8e3,	// (0x0003ba61) form2_midp_wait_pane

0x95dd,	// (0x0003975b) list_single_2graphic_pane_cp4_ParamLimits

0x95dd,	// (0x0003975b) list_single_2graphic_pane_cp4

0xb90e,	// (0x0003ba8c) list_single_midp_graphic_pane_cp_ParamLimits

0xb90e,	// (0x0003ba8c) list_single_midp_graphic_pane_cp

0xf44d,	// (0x0003f5cb) list_highlight_pane_cp20

0xb932,	// (0x0003bab0) list_single_2graphic_pane_g1_cp4

0xaec9,	// (0x0003b047) list_single_2graphic_pane_g2_cp4

0xb93a,	// (0x0003bab8) list_single_2graphic_pane_t1_cp4

0x2350,	// (0x000324ce) list_highlight_pane_cp21

0xb949,	// (0x0003bac7) list_single_midp_graphic_pane_g4_cp

0xb958,	// (0x0003bad6) list_single_midp_graphic_pane_t1_cp

0xb96d,	// (0x0003baeb) form2_mdip_string_pane_t1_ParamLimits

0xb96d,	// (0x0003baeb) form2_mdip_string_pane_t1

0xf44d,	// (0x0003f5cb) bg_wml_button_pane_cp2

0xf443,	// (0x0003f5c1) form2_midp_image_pane_g1

0x4126,	// (0x000342a4) list_double_large_graphic_pane_g5_ParamLimits

0x4126,	// (0x000342a4) list_double_large_graphic_pane_g5

0x638e,	// (0x0003650c) midp_form_pane_ParamLimits

0x2350,	// (0x000324ce) main_apps_wheel_pane_ParamLimits

0x8d50,	// (0x00038ece) popup_preview_window_ParamLimits

0x8d50,	// (0x00038ece) popup_preview_window

0x8f37,	// (0x000390b5) popup_touch_info_window_ParamLimits

0x8f37,	// (0x000390b5) popup_touch_info_window

0x8f59,	// (0x000390d7) popup_touch_menu_window_ParamLimits

0x8f59,	// (0x000390d7) popup_touch_menu_window

0xf439,	// (0x0003f5b7) bg_popup_sub_pane_cp6

0xba12,	// (0x0003bb90) list_touch_menu_pane

0xba1a,	// (0x0003bb98) list_single_touch_menu_pane_ParamLimits

0xba1a,	// (0x0003bb98) list_single_touch_menu_pane

0xba32,	// (0x0003bbb0) list_single_touch_menu_pane_t1

0x2350,	// (0x000324ce) bg_popup_sub_pane_cp7_ParamLimits

0x2350,	// (0x000324ce) bg_popup_sub_pane_cp7

0xba40,	// (0x0003bbbe) heading_sub_pane

0xba48,	// (0x0003bbc6) list_touch_info_pane_ParamLimits

0xba48,	// (0x0003bbc6) list_touch_info_pane

0xba57,	// (0x0003bbd5) list_single_touch_info_pane_ParamLimits

0xba57,	// (0x0003bbd5) list_single_touch_info_pane

0xba69,	// (0x0003bbe7) list_single_touch_info_pane_t1

0xba77,	// (0x0003bbf5) list_single_touch_info_pane_t2

0x0001,

0xfaff,	// (0x0003fc7d) list_single_touch_info_pane_t

0x85f5,	// (0x00038773) bg_popup_heading_pane_cp

0xba85,	// (0x0003bc03) heading_sub_pane_t1

0x9524,	// (0x000396a2) bg_popup_preview_window_pane_cp_ParamLimits

0x9524,	// (0x000396a2) bg_popup_preview_window_pane_cp

0xba40,	// (0x0003bbbe) heading_preview_pane

0xba48,	// (0x0003bbc6) list_preview_pane_ParamLimits

0xba48,	// (0x0003bbc6) list_preview_pane

0xba93,	// (0x0003bc11) popup_preview_window_g1

0xba57,	// (0x0003bbd5) list_single_preview_pane_ParamLimits

0xba57,	// (0x0003bbd5) list_single_preview_pane

0xba9b,	// (0x0003bc19) list_single_preview_pane_g1

0xbaa3,	// (0x0003bc21) list_single_preview_pane_t1

0xba69,	// (0x0003bbe7) list_single_preview_pane_t2

0x0001,

0xfb04,	// (0x0003fc82) list_single_preview_pane_t

0xbab1,	// (0x0003bc2f) bg_popup_heading_pane_cp2_ParamLimits

0xbab1,	// (0x0003bc2f) bg_popup_heading_pane_cp2

0xbac7,	// (0x0003bc45) heading_preview_pane_g1

0xbacf,	// (0x0003bc4d) heading_preview_pane_t1_ParamLimits

0xbacf,	// (0x0003bc4d) heading_preview_pane_t1

0x23a3,	// (0x00032521) soft_indicator_pane_t1_ParamLimits

0x28d8,	// (0x00032a56) scroll_pane_ParamLimits

0x2cdf,	// (0x00032e5d) scroll_sc2_left_pane

0x2cd6,	// (0x00032e54) scroll_sc2_right_pane

0x2cfe,	// (0x00032e7c) scroll_bg_pane_g1_ParamLimits

0x2d13,	// (0x00032e91) scroll_bg_pane_g2_ParamLimits

0x2d2b,	// (0x00032ea9) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x0003f862) scroll_bg_pane_g_ParamLimits

0x2cfe,	// (0x00032e7c) scroll_handle_pane_g1_ParamLimits

0x2d4d,	// (0x00032ecb) scroll_handle_pane_g2_ParamLimits

0x2d2b,	// (0x00032ea9) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x0003f869) scroll_handle_pane_g_ParamLimits

0x8997,	// (0x00038b15) popup_choice_list_window_ParamLimits

0x8997,	// (0x00038b15) popup_choice_list_window

0x93fa,	// (0x00039578) choice_list_pane

0x947c,	// (0x000395fa) cell_toolbar_pane_t1

0x94a4,	// (0x00039622) toolbar_button_pane_ParamLimits

0xa553,	// (0x0003a6d1) ai_gene_pane_1_t2_ParamLimits

0xa553,	// (0x0003a6d1) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x0003fa91) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x0003fa91) ai_gene_pane_1_t

0xbaec,	// (0x0003bc6a) scroll_sc2_left_pane_g1

0xbaec,	// (0x0003bc6a) scroll_sc2_right_pane_g1

0x896f,	// (0x00038aed) bg_popup_sub_pane_cp10

0xbaf6,	// (0x0003bc74) list_choice_list_pane

0xbb0f,	// (0x0003bc8d) list_single_choice_list_pane_ParamLimits

0xbb0f,	// (0x0003bc8d) list_single_choice_list_pane

0xbb27,	// (0x0003bca5) list_single_choice_list_pane_g1

0x2ab6,	// (0x00032c34) list_single_choice_list_pane_t1_ParamLimits

0x2ab6,	// (0x00032c34) list_single_choice_list_pane_t1

0xbb2f,	// (0x0003bcad) choice_list_pane_g1

0xbb37,	// (0x0003bcb5) choice_list_pane_t1

0xf439,	// (0x0003f5b7) input_focus_pane_cp11

0x2c34,	// (0x00032db2) title_pane_stacon_g2_ParamLimits

0x2c34,	// (0x00032db2) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x0003f848) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0003f848) title_pane_stacon_g

0x85f5,	// (0x00038773) cursor_press_pane

0x8a51,	// (0x00038bcf) popup_fep_hwr_window_ParamLimits

0x8a51,	// (0x00038bcf) popup_fep_hwr_window

0x8adb,	// (0x00038c59) popup_fep_vkb_window_ParamLimits

0x8adb,	// (0x00038c59) popup_fep_vkb_window

0xbb45,	// (0x0003bcc3) cursor_press_pane_g1

0x0002,

0xfb2d,	// (0x0003fcab) fep_vkb_side_pane_g_ParamLimits

0x75af,	// (0x0003772d) fep_hwr_candidate_pane_ParamLimits

0x75af,	// (0x0003772d) fep_hwr_candidate_pane

0x75d9,	// (0x00037757) fep_hwr_side_pane_ParamLimits

0x75d9,	// (0x00037757) fep_hwr_side_pane

0x75fb,	// (0x00037779) fep_hwr_top_pane_ParamLimits

0x75fb,	// (0x00037779) fep_hwr_top_pane

0x7613,	// (0x00037791) fep_hwr_write_pane_ParamLimits

0x7613,	// (0x00037791) fep_hwr_write_pane

0xfb2d,	// (0x0003fcab) fep_vkb_side_pane_g

0xbb4d,	// (0x0003bccb) fep_hwr_top_pane_g1

0xbb5f,	// (0x0003bcdd) fep_hwr_top_pane_g2

0x764d,	// (0x000377cb) fep_hwr_top_pane_g3

0x0002,

0xfb09,	// (0x0003fc87) fep_hwr_top_pane_g

0x7662,	// (0x000377e0) fep_hwr_top_text_pane

0x2e47,	// (0x00032fc5) fep_hwr_top_text_pane_g1

0xbb95,	// (0x0003bd13) fep_hwr_top_text_pane_t1

0x776c,	// (0x000378ea) fep_hwr_candidate_pane_g1

0xbe0c,	// (0x0003bf8a) fep_vkb_keypad_pane_g3_ParamLimits

0xbe0c,	// (0x0003bf8a) fep_vkb_keypad_pane_g3

0xbe38,	// (0x0003bfb6) fep_vkb_keypad_pane_g4_ParamLimits

0xbe38,	// (0x0003bfb6) fep_vkb_keypad_pane_g4

0xbeaf,	// (0x0003c02d) fep_vkb_bottom_pane_g2_ParamLimits

0xbeaf,	// (0x0003c02d) fep_vkb_bottom_pane_g2

0x0001,

0xfb34,	// (0x0003fcb2) fep_vkb_bottom_pane_g_ParamLimits

0xfb34,	// (0x0003fcb2) fep_vkb_bottom_pane_g

0xbaec,	// (0x0003bc6a) cell_vkb_side_pane_g2

0x0001,

0xfb3e,	// (0x0003fcbc) cell_vkb_side_pane_g

0xbf3a,	// (0x0003c0b8) cell_vkb_side_pane_t1

0xbf48,	// (0x0003c0c6) cell_vkb_side_pane_t1_copy1

0xbaec,	// (0x0003bc6a) bg_fep_vkb_candidate_pane_g2

0xc08c,	// (0x0003c20a) cell_vkb_candidate_pane_ParamLimits

0xbba3,	// (0x0003bd21) aid_size_cell_vkb_ParamLimits

0xbba3,	// (0x0003bd21) aid_size_cell_vkb

0xc08c,	// (0x0003c20a) cell_vkb_candidate_pane

0x7793,	// (0x00037911) bg_popup_fep_shadow_pane_g1

0xbc35,	// (0x0003bdb3) fep_vkb_bottom_pane_ParamLimits

0xbc35,	// (0x0003bdb3) fep_vkb_bottom_pane

0xbc72,	// (0x0003bdf0) fep_vkb_candidate_pane_ParamLimits

0xbc72,	// (0x0003bdf0) fep_vkb_candidate_pane

0xbcba,	// (0x0003be38) fep_vkb_keypad_pane_ParamLimits

0xbcba,	// (0x0003be38) fep_vkb_keypad_pane

0xbced,	// (0x0003be6b) fep_vkb_side_pane_ParamLimits

0xbced,	// (0x0003be6b) fep_vkb_side_pane

0xbd29,	// (0x0003bea7) fep_vkb_top_pane_ParamLimits

0xbd29,	// (0x0003bea7) fep_vkb_top_pane

0xbd65,	// (0x0003bee3) fep_vkb_top_pane_g1_ParamLimits

0xbd65,	// (0x0003bee3) fep_vkb_top_pane_g1

0xbd74,	// (0x0003bef2) fep_vkb_top_pane_g2_ParamLimits

0xbd74,	// (0x0003bef2) fep_vkb_top_pane_g2

0xbd83,	// (0x0003bf01) fep_vkb_top_pane_g3_ParamLimits

0xbd83,	// (0x0003bf01) fep_vkb_top_pane_g3

0x0003,

0xfb24,	// (0x0003fca2) fep_vkb_top_pane_g_ParamLimits

0xfb24,	// (0x0003fca2) fep_vkb_top_pane_g

0xbda1,	// (0x0003bf1f) fep_vkb_top_text_pane_ParamLimits

0xbda1,	// (0x0003bf1f) fep_vkb_top_text_pane

0xbdb2,	// (0x0003bf30) fep_vkb_side_pane_g1_ParamLimits

0xbdb2,	// (0x0003bf30) fep_vkb_side_pane_g1

0xbdfb,	// (0x0003bf79) grid_vkb_side_pane_ParamLimits

0xbdfb,	// (0x0003bf79) grid_vkb_side_pane

0x779b,	// (0x00037919) bg_popup_fep_shadow_pane_g2

0x77a4,	// (0x00037922) bg_popup_fep_shadow_pane_g3

0x77ac,	// (0x0003792a) bg_popup_fep_shadow_pane_g4

0x77b5,	// (0x00037933) bg_popup_fep_shadow_pane_g5

0x77bf,	// (0x0003793d) bg_popup_fep_shadow_pane_g6

0x77c7,	// (0x00037945) bg_popup_fep_shadow_pane_g7

0x29d8,	// (0x00032b56) bg_popup_fep_shadow_pane_g8

0xbe5a,	// (0x0003bfd8) grid_vkb_keypad_number_pane_ParamLimits

0xbe5a,	// (0x0003bfd8) grid_vkb_keypad_number_pane

0xbe6e,	// (0x0003bfec) grid_vkb_keypad_pane_ParamLimits

0xbe6e,	// (0x0003bfec) grid_vkb_keypad_pane

0xbe94,	// (0x0003c012) fep_vkb_bottom_pane_g1_ParamLimits

0xbe94,	// (0x0003c012) fep_vkb_bottom_pane_g1

0xbebd,	// (0x0003c03b) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbebd,	// (0x0003c03b) grid_vkb_keypad_bottom_left_pane

0xbed2,	// (0x0003c050) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbed2,	// (0x0003c050) grid_vkb_keypad_bottom_right_pane

0xbee7,	// (0x0003c065) fep_vkb_top_text_pane_g1

0xbf02,	// (0x0003c080) fep_vkb_top_text_pane_t1

0xbf17,	// (0x0003c095) cell_vkb_side_pane_ParamLimits

0xbf17,	// (0x0003c095) cell_vkb_side_pane

0xbaec,	// (0x0003bc6a) cell_vkb_side_pane_g1

0xbf56,	// (0x0003c0d4) cell_vkb_keypad_pane_ParamLimits

0xbf56,	// (0x0003c0d4) cell_vkb_keypad_pane

0xbfe3,	// (0x0003c161) cell_vkb_keypad_pane_g1

0x0008,

0xfb51,	// (0x0003fccf) bg_popup_fep_shadow_pane_g

0x77d9,	// (0x00037957) cell_hwr_side_pane_g1

0x77d9,	// (0x00037957) cell_hwr_side_pane_g2

0xbfed,	// (0x0003c16b) cell_vkb_keypad_pane_t1

0xbffb,	// (0x0003c179) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbffb,	// (0x0003c179) cell_vkb_keypad_bottom_left_pane

0xc018,	// (0x0003c196) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc018,	// (0x0003c196) cell_vkb_keypad_bottom_right_pane

0xbaec,	// (0x0003bc6a) cell_vkb_keypad_bottom_left_pane_g1

0xbaec,	// (0x0003bc6a) cell_vkb_keypad_bottom_right_pane_g1

0xc051,	// (0x0003c1cf) cell_vkb_keypad_number_pane_ParamLimits

0xc051,	// (0x0003c1cf) cell_vkb_keypad_number_pane

0xc070,	// (0x0003c1ee) cell_vkb_keypad_number_pane_g1

0xc07a,	// (0x0003c1f8) cell_vkb_keypad_number_pane_g2

0xc083,	// (0x0003c201) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb43,	// (0x0003fcc1) cell_vkb_keypad_number_pane_g

0xbfed,	// (0x0003c16b) cell_vkb_keypad_number_pane_t1

0xc0ad,	// (0x0003c22b) fep_vkb_candidate_pane_g1

0x0001,

0xfb64,	// (0x0003fce2) cell_hwr_side_pane_g

0xc0c6,	// (0x0003c244) cell_hwr_side_pane_t1

0x77e3,	// (0x00037961) cell_hwr_side_pane_t1_copy1

0x77f1,	// (0x0003796f) cell_hwr_candidate_pane_g1

0x7820,	// (0x0003799e) cell_hwr_candidate_pane_t1

0xbaec,	// (0x0003bc6a) cell_vkb_candidate_pane_g2

0xc10a,	// (0x0003c288) cell_vkb_candidate_pane_t1

0x7576,	// (0x000376f4) bg_popup_fep_shadow_pane_ParamLimits

0x7576,	// (0x000376f4) bg_popup_fep_shadow_pane

0x762d,	// (0x000377ab) bg_fep_hwr_top_pane_g4

0xbb71,	// (0x0003bcef) bg_hwr_side_pane_g1_ParamLimits

0xbb71,	// (0x0003bcef) bg_hwr_side_pane_g1

0x76a0,	// (0x0003781e) cell_hwr_side_pane_ParamLimits

0x76a0,	// (0x0003781e) cell_hwr_side_pane

0x76dd,	// (0x0003785b) fep_hwr_write_pane_g1_ParamLimits

0x76dd,	// (0x0003785b) fep_hwr_write_pane_g1

0x76ea,	// (0x00037868) fep_hwr_write_pane_g2_ParamLimits

0x76ea,	// (0x00037868) fep_hwr_write_pane_g2

0x76f7,	// (0x00037875) fep_hwr_write_pane_g3_ParamLimits

0x76f7,	// (0x00037875) fep_hwr_write_pane_g3

0x7705,	// (0x00037883) fep_hwr_write_pane_g4_ParamLimits

0x7705,	// (0x00037883) fep_hwr_write_pane_g4

0x0005,

0xfb10,	// (0x0003fc8e) fep_hwr_write_pane_g_ParamLimits

0xfb10,	// (0x0003fc8e) fep_hwr_write_pane_g

0x762d,	// (0x000377ab) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x762d,	// (0x000377ab) bg_fep_hwr_candidate_pane_g2

0x771a,	// (0x00037898) cell_hwr_candidate_pane_ParamLimits

0x771a,	// (0x00037898) cell_hwr_candidate_pane

0x776c,	// (0x000378ea) fep_hwr_candidate_pane_g1_ParamLimits

0xbbd1,	// (0x0003bd4f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbbd1,	// (0x0003bd4f) bg_popup_fep_shadow_pane_cp2

0xbd93,	// (0x0003bf11) fep_vkb_top_pane_g4_ParamLimits

0xbd93,	// (0x0003bf11) fep_vkb_top_pane_g4

0xbdd9,	// (0x0003bf57) fep_vkb_side_pane_g2_ParamLimits

0xbdd9,	// (0x0003bf57) fep_vkb_side_pane_g2

0x60d8,	// (0x00036256) list_setting_pane_t4_ParamLimits

0x60d8,	// (0x00036256) list_setting_pane_t4

0x6174,	// (0x000362f2) list_setting_number_pane_t5_ParamLimits

0x6174,	// (0x000362f2) list_setting_number_pane_t5

0x6675,	// (0x000367f3) list_double_heading_pane_cp2_ParamLimits

0x6675,	// (0x000367f3) list_double_heading_pane_cp2

0xc118,	// (0x0003c296) list_double_heading_pane_g1_cp2_ParamLimits

0xc118,	// (0x0003c296) list_double_heading_pane_g1_cp2

0xc124,	// (0x0003c2a2) list_double_heading_pane_g2_cp2_ParamLimits

0xc124,	// (0x0003c2a2) list_double_heading_pane_g2_cp2

0xc138,	// (0x0003c2b6) list_double_heading_pane_t1_cp2_ParamLimits

0xc138,	// (0x0003c2b6) list_double_heading_pane_t1_cp2

0xc14e,	// (0x0003c2cc) list_double_heading_pane_t2_cp2_ParamLimits

0xc14e,	// (0x0003c2cc) list_double_heading_pane_t2_cp2

0xf431,	// (0x0003f5af) aid_value_unit2

0x58d2,	// (0x00035a50) popup_preview_fixed_window

0x2483,	// (0x00032601) bg_popup_preview_window_pane_cp02

0xc160,	// (0x0003c2de) list_preview_fixed_pane

0xc1a6,	// (0x0003c324) list_empty_pane_fp_ParamLimits

0xc1a6,	// (0x0003c324) list_empty_pane_fp

0xc1a6,	// (0x0003c324) list_single_cale_day_pane_fp_ParamLimits

0xc1a6,	// (0x0003c324) list_single_cale_day_pane_fp

0xc1a6,	// (0x0003c324) list_single_graphic_heading_pane_fp_ParamLimits

0xc1a6,	// (0x0003c324) list_single_graphic_heading_pane_fp

0xc1a6,	// (0x0003c324) list_single_graphic_pane_fp_ParamLimits

0xc1a6,	// (0x0003c324) list_single_graphic_pane_fp

0xc1a6,	// (0x0003c324) list_single_heading_pane_fp_ParamLimits

0xc1a6,	// (0x0003c324) list_single_heading_pane_fp

0xc1a6,	// (0x0003c324) list_single_pane_fp_ParamLimits

0xc1a6,	// (0x0003c324) list_single_pane_fp

0xc1bf,	// (0x0003c33d) list_single_pane_fp_g1_ParamLimits

0xc1bf,	// (0x0003c33d) list_single_pane_fp_g1

0x4691,	// (0x0003480f) list_single_pane_fp_g2_ParamLimits

0x4691,	// (0x0003480f) list_single_pane_fp_g2

0x469d,	// (0x0003481b) list_single_pane_fp_g3_ParamLimits

0x469d,	// (0x0003481b) list_single_pane_fp_g3

0xc1cb,	// (0x0003c349) list_single_pane_fp_g4_ParamLimits

0xc1cb,	// (0x0003c349) list_single_pane_fp_g4

0x0003,

0xfb77,	// (0x0003fcf5) list_single_pane_fp_g_ParamLimits

0xfb77,	// (0x0003fcf5) list_single_pane_fp_g

0x46b1,	// (0x0003482f) list_single_pane_fp_t1_ParamLimits

0x46b1,	// (0x0003482f) list_single_pane_fp_t1

0x46c8,	// (0x00034846) list_single_graphic_pane_fp_g1_ParamLimits

0x46c8,	// (0x00034846) list_single_graphic_pane_fp_g1

0xc1bf,	// (0x0003c33d) list_single_graphic_pane_fp_g2_ParamLimits

0xc1bf,	// (0x0003c33d) list_single_graphic_pane_fp_g2

0x4691,	// (0x0003480f) list_single_graphic_pane_fp_g3_ParamLimits

0x4691,	// (0x0003480f) list_single_graphic_pane_fp_g3

0x469d,	// (0x0003481b) list_single_graphic_pane_fp_g4_ParamLimits

0x469d,	// (0x0003481b) list_single_graphic_pane_fp_g4

0xc1cb,	// (0x0003c349) list_single_graphic_pane_fp_g5_ParamLimits

0xc1cb,	// (0x0003c349) list_single_graphic_pane_fp_g5

0x0004,

0xfb80,	// (0x0003fcfe) list_single_graphic_pane_fp_g_ParamLimits

0xfb80,	// (0x0003fcfe) list_single_graphic_pane_fp_g

0x46d4,	// (0x00034852) list_single_graphic_pane_fp_t1_ParamLimits

0x46d4,	// (0x00034852) list_single_graphic_pane_fp_t1

0x46c8,	// (0x00034846) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x46c8,	// (0x00034846) list_single_graphic_heading_pane_fp_g1

0xc1bf,	// (0x0003c33d) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc1bf,	// (0x0003c33d) list_single_graphic_heading_pane_fp_g2

0x4691,	// (0x0003480f) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4691,	// (0x0003480f) list_single_graphic_heading_pane_fp_g3

0x469d,	// (0x0003481b) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x469d,	// (0x0003481b) list_single_graphic_heading_pane_fp_g4

0xc1cb,	// (0x0003c349) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc1cb,	// (0x0003c349) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0003fcfe) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0003fcfe) list_single_graphic_heading_pane_fp_g

0x46ea,	// (0x00034868) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x46ea,	// (0x00034868) list_single_graphic_heading_pane_fp_t1

0x48cf,	// (0x00034a4d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x48cf,	// (0x00034a4d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8b,	// (0x0003fd09) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8b,	// (0x0003fd09) list_single_graphic_heading_pane_fp_t

0x48e1,	// (0x00034a5f) list_single_cale_day_pane_fp_g1_ParamLimits

0x48e1,	// (0x00034a5f) list_single_cale_day_pane_fp_g1

0xc1d7,	// (0x0003c355) list_single_cale_day_pane_fp_g2_ParamLimits

0xc1d7,	// (0x0003c355) list_single_cale_day_pane_fp_g2

0x4919,	// (0x00034a97) list_single_cale_day_pane_fp_g3_ParamLimits

0x4919,	// (0x00034a97) list_single_cale_day_pane_fp_g3

0x4941,	// (0x00034abf) list_single_cale_day_pane_fp_g4_ParamLimits

0x4941,	// (0x00034abf) list_single_cale_day_pane_fp_g4

0x4965,	// (0x00034ae3) list_single_cale_day_pane_fp_g5_ParamLimits

0x4965,	// (0x00034ae3) list_single_cale_day_pane_fp_g5

0x0004,

0xfb90,	// (0x0003fd0e) list_single_cale_day_pane_fp_g_ParamLimits

0xfb90,	// (0x0003fd0e) list_single_cale_day_pane_fp_g

0x4989,	// (0x00034b07) list_single_cale_day_pane_fp_t1_ParamLimits

0x4989,	// (0x00034b07) list_single_cale_day_pane_fp_t1

0x49af,	// (0x00034b2d) list_single_cale_day_pane_fp_t2_ParamLimits

0x49af,	// (0x00034b2d) list_single_cale_day_pane_fp_t2

0x49c8,	// (0x00034b46) list_single_cale_day_pane_fp_t3_ParamLimits

0x49c8,	// (0x00034b46) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9b,	// (0x0003fd19) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9b,	// (0x0003fd19) list_single_cale_day_pane_fp_t

0xc1bf,	// (0x0003c33d) list_empty_pane_fp_g1_ParamLimits

0xc1bf,	// (0x0003c33d) list_empty_pane_fp_g1

0x49e1,	// (0x00034b5f) list_empty_pane_fp_t1

0x49ef,	// (0x00034b6d) list_empty_pane_fp_t2

0x0001,

0xfba2,	// (0x0003fd20) list_empty_pane_fp_t

0xc1bf,	// (0x0003c33d) list_single_heading_pane_fp_g1_ParamLimits

0xc1bf,	// (0x0003c33d) list_single_heading_pane_fp_g1

0x4691,	// (0x0003480f) list_single_heading_pane_fp_g2_ParamLimits

0x4691,	// (0x0003480f) list_single_heading_pane_fp_g2

0x469d,	// (0x0003481b) list_single_heading_pane_fp_g3_ParamLimits

0x469d,	// (0x0003481b) list_single_heading_pane_fp_g3

0x0002,

0xfba7,	// (0x0003fd25) list_single_heading_pane_fp_g_ParamLimits

0xfba7,	// (0x0003fd25) list_single_heading_pane_fp_g

0x49fd,	// (0x00034b7b) list_single_heading_pane_fp_t1_ParamLimits

0x49fd,	// (0x00034b7b) list_single_heading_pane_fp_t1

0x4a0f,	// (0x00034b8d) list_single_heading_pane_fp_t2_ParamLimits

0x4a0f,	// (0x00034b8d) list_single_heading_pane_fp_t2

0x0001,

0xfbae,	// (0x0003fd2c) list_single_heading_pane_fp_t_ParamLimits

0xfbae,	// (0x0003fd2c) list_single_heading_pane_fp_t

0x2acb,	// (0x00032c49) aid_size_cell_fast

0x2466,	// (0x000325e4) soft_indicator_pane_cp1_t1

0x2b08,	// (0x00032c86) cell_app_pane_cp2_ParamLimits

0x2b08,	// (0x00032c86) cell_app_pane_cp2

0x7598,	// (0x00037716) fep_hwr_candidate_drop_down_list_pane

0x7786,	// (0x00037904) fep_hwr_candidate_pane_g3_ParamLimits

0x7786,	// (0x00037904) fep_hwr_candidate_pane_g3

0x2219,	// (0x00032397) fep_hwr_candidate_pane_g4_ParamLimits

0x2219,	// (0x00032397) fep_hwr_candidate_pane_g4

0x0002,

0xfb1d,	// (0x0003fc9b) fep_hwr_candidate_pane_g_ParamLimits

0xfb1d,	// (0x0003fc9b) fep_hwr_candidate_pane_g

0xbc61,	// (0x0003bddf) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbc61,	// (0x0003bddf) fep_vkb_candidate_drop_down_list_pane

0xc0b5,	// (0x0003c233) fep_vkb_candidate_pane_g3

0xc0bd,	// (0x0003c23b) fep_vkb_candidate_pane_g4

0x0002,

0xfb4a,	// (0x0003fcc8) fep_vkb_candidate_pane_g

0x77f1,	// (0x0003796f) cell_hwr_candidate_pane_g1_ParamLimits

0x77ff,	// (0x0003797d) cell_hwr_candidate_pane_g3_ParamLimits

0x77ff,	// (0x0003797d) cell_hwr_candidate_pane_g3

0xd878,	// (0x0003d9f6) cell_hwr_candidate_pane_g4_ParamLimits

0xd878,	// (0x0003d9f6) cell_hwr_candidate_pane_g4

0x0002,

0xfb69,	// (0x0003fce7) cell_hwr_candidate_pane_g_ParamLimits

0xfb69,	// (0x0003fce7) cell_hwr_candidate_pane_g

0xc0d4,	// (0x0003c252) cell_vkb_candidate_pane_g3_ParamLimits

0xc0d4,	// (0x0003c252) cell_vkb_candidate_pane_g3

0xc0ef,	// (0x0003c26d) cell_vkb_candidate_pane_g4_ParamLimits

0xc0ef,	// (0x0003c26d) cell_vkb_candidate_pane_g4

0xc1e3,	// (0x0003c361) cell_app_pane_cp2_g1_ParamLimits

0xc1e3,	// (0x0003c361) cell_app_pane_cp2_g1

0xc201,	// (0x0003c37f) cell_app_pane_cp2_g2_ParamLimits

0xc201,	// (0x0003c37f) cell_app_pane_cp2_g2

0x0001,

0xfbb3,	// (0x0003fd31) cell_app_pane_cp2_g_ParamLimits

0xfbb3,	// (0x0003fd31) cell_app_pane_cp2_g

0xc20d,	// (0x0003c38b) cell_app_pane_cp2_t1_ParamLimits

0xc20d,	// (0x0003c38b) cell_app_pane_cp2_t1

0x2965,	// (0x00032ae3) grid_highlight_pane_cp1_ParamLimits

0x2965,	// (0x00032ae3) grid_highlight_pane_cp1

0x783e,	// (0x000379bc) cell_hwr_candidate_pane_cp1_ParamLimits

0x783e,	// (0x000379bc) cell_hwr_candidate_pane_cp1

0x77f1,	// (0x0003796f) fep_hwr_candidate_drop_down_list_pane_g1

0x7862,	// (0x000379e0) fep_hwr_candidate_drop_down_list_pane_g2

0x786f,	// (0x000379ed) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x0003fd36) fep_hwr_candidate_drop_down_list_pane_g

0x787c,	// (0x000379fa) fep_hwr_candidate_drop_down_list_scroll_pane

0x7885,	// (0x00037a03) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7885,	// (0x00037a03) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7892,	// (0x00037a10) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7892,	// (0x00037a10) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x789f,	// (0x00037a1d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x789f,	// (0x00037a1d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x78ac,	// (0x00037a2a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x78ac,	// (0x00037a2a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x78c7,	// (0x00037a45) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x78c7,	// (0x00037a45) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x78e2,	// (0x00037a60) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x78e2,	// (0x00037a60) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x78fd,	// (0x00037a7b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x78fd,	// (0x00037a7b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7918,	// (0x00037a96) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7918,	// (0x00037a96) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbf,	// (0x0003fd3d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbf,	// (0x0003fd3d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc21f,	// (0x0003c39d) cell_vkb_candidate_pane_cp1_ParamLimits

0xc21f,	// (0x0003c39d) cell_vkb_candidate_pane_cp1

0xbd93,	// (0x0003bf11) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbd93,	// (0x0003bf11) fep_vkb_candidate_drop_down_list_pane_g1

0xc245,	// (0x0003c3c3) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc245,	// (0x0003c3c3) fep_vkb_candidate_drop_down_list_pane_g2

0xc252,	// (0x0003c3d0) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc252,	// (0x0003c3d0) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x0003fd4e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd0,	// (0x0003fd4e) fep_vkb_candidate_drop_down_list_pane_g

0xc25f,	// (0x0003c3dd) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc25f,	// (0x0003c3dd) fep_vkb_candidate_drop_down_list_scroll_pane

0xc26c,	// (0x0003c3ea) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc26c,	// (0x0003c3ea) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc279,	// (0x0003c3f7) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc279,	// (0x0003c3f7) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc285,	// (0x0003c403) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc285,	// (0x0003c403) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc291,	// (0x0003c40f) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc291,	// (0x0003c40f) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc2b2,	// (0x0003c430) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc2b2,	// (0x0003c430) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc2d3,	// (0x0003c451) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc2d3,	// (0x0003c451) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc2f4,	// (0x0003c472) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc2f4,	// (0x0003c472) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc315,	// (0x0003c493) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc315,	// (0x0003c493) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd7,	// (0x0003fd55) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd7,	// (0x0003fd55) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x59ea,	// (0x00035b68) title_pane_g1_ParamLimits

0x59f7,	// (0x00035b75) title_pane_g2_ParamLimits

0xf554,	// (0x0003f6d2) title_pane_g_ParamLimits

0x2e3f,	// (0x00032fbd) aid_call2_pane

0x2e37,	// (0x00032fb5) aid_call_pane

0x2e47,	// (0x00032fc5) popup_clock_analogue_window_g1

0x2e47,	// (0x00032fc5) popup_clock_analogue_window_g2

0x6656,	// (0x000367d4) popup_clock_analogue_window_g3

0x665f,	// (0x000367dd) popup_clock_analogue_window_g4

0xf443,	// (0x0003f5c1) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x0003f877) popup_clock_analogue_window_g

0x6667,	// (0x000367e5) popup_clock_analogue_window_t1

0x66a8,	// (0x00036826) clock_digital_number_pane_ParamLimits

0x66a8,	// (0x00036826) clock_digital_number_pane

0x66b4,	// (0x00036832) clock_digital_number_pane_cp02_ParamLimits

0x66b4,	// (0x00036832) clock_digital_number_pane_cp02

0x66c0,	// (0x0003683e) clock_digital_number_pane_cp03_ParamLimits

0x66c0,	// (0x0003683e) clock_digital_number_pane_cp03

0x66cc,	// (0x0003684a) clock_digital_number_pane_cp04_ParamLimits

0x66cc,	// (0x0003684a) clock_digital_number_pane_cp04

0x66d8,	// (0x00036856) clock_digital_separator_pane_ParamLimits

0x66d8,	// (0x00036856) clock_digital_separator_pane

0x66e4,	// (0x00036862) popup_clock_digital_window_t1_ParamLimits

0x66e4,	// (0x00036862) popup_clock_digital_window_t1

0xf443,	// (0x0003f5c1) clock_digital_number_pane_g1

0xf443,	// (0x0003f5c1) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x0003f882) clock_digital_number_pane_g

0xf443,	// (0x0003f5c1) clock_digital_separator_pane_g1

0xf443,	// (0x0003f5c1) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x0003f882) clock_digital_separator_pane_g

0x8fa6,	// (0x00039124) aid_fill_nsta_ParamLimits

0x90f6,	// (0x00039274) indicator_nsta_pane_ParamLimits

0x9287,	// (0x00039405) popup_clock_analogue_window

0x9287,	// (0x00039405) popup_clock_digital_window

0x2350,	// (0x000324ce) grid_indicator_nsta_pane_ParamLimits

0xb519,	// (0x0003b697) clock_nsta_pane_t2

0x0001,

0xfa9d,	// (0x0003fc1b) clock_nsta_pane_t

0x65bf,	// (0x0003673d) aid_size_max_handle

0x65c9,	// (0x00036747) aid_size_min_handle

0x85f5,	// (0x00038773) editor_scroll_pane

0xc330,	// (0x0003c4ae) ex_editor_pane

0x2a91,	// (0x00032c0f) scroll_pane_cp13

0x2904,	// (0x00032a82) scroll_pane_cp14

0x2e76,	// (0x00032ff4) scroll_pane_cp36

0x668b,	// (0x00036809) list_single_graphic_hl_pane_cp2_ParamLimits

0x668b,	// (0x00036809) list_single_graphic_hl_pane_cp2

0x742c,	// (0x000375aa) list_single_graphic_hl_pane_ParamLimits

0x742c,	// (0x000375aa) list_single_graphic_hl_pane

0x4a25,	// (0x00034ba3) aid_size_min_hl_cp1

0xc338,	// (0x0003c4b6) list_highlight_pane_cp34_ParamLimits

0xc338,	// (0x0003c4b6) list_highlight_pane_cp34

0xc349,	// (0x0003c4c7) list_single_graphic_hl_pane_g1_ParamLimits

0xc349,	// (0x0003c4c7) list_single_graphic_hl_pane_g1

0x7933,	// (0x00037ab1) list_single_graphic_hl_pane_g2_ParamLimits

0x7933,	// (0x00037ab1) list_single_graphic_hl_pane_g2

0x7933,	// (0x00037ab1) list_single_graphic_hl_pane_g3_ParamLimits

0x7933,	// (0x00037ab1) list_single_graphic_hl_pane_g3

0x40b6,	// (0x00034234) list_single_graphic_hl_pane_g4_ParamLimits

0x40b6,	// (0x00034234) list_single_graphic_hl_pane_g4

0x793f,	// (0x00037abd) list_single_graphic_hl_pane_g5_ParamLimits

0x793f,	// (0x00037abd) list_single_graphic_hl_pane_g5

0x0004,

0xfbe8,	// (0x0003fd66) list_single_graphic_hl_pane_g_ParamLimits

0xfbe8,	// (0x0003fd66) list_single_graphic_hl_pane_g

0x7953,	// (0x00037ad1) list_single_graphic_hl_pane_t1_ParamLimits

0x7953,	// (0x00037ad1) list_single_graphic_hl_pane_t1

0xc356,	// (0x0003c4d4) aid_size_min_hl_cp2

0xc35f,	// (0x0003c4dd) list_highlight_pane_cp34_cp2_ParamLimits

0xc35f,	// (0x0003c4dd) list_highlight_pane_cp34_cp2

0xc349,	// (0x0003c4c7) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc349,	// (0x0003c4c7) list_single_graphic_hl_pane_g1_cp2

0xc36c,	// (0x0003c4ea) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc36c,	// (0x0003c4ea) list_single_graphic_hl_pane_g2_cp2

0xc378,	// (0x0003c4f6) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc378,	// (0x0003c4f6) list_single_graphic_hl_pane_g3_cp2

0x2eb8,	// (0x00033036) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2eb8,	// (0x00033036) list_single_graphic_hl_pane_g4_cp2

0xc386,	// (0x0003c504) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc386,	// (0x0003c504) list_single_graphic_hl_pane_g5_cp2

0x6efb,	// (0x00037079) control_pane_g4_ParamLimits

0x6efb,	// (0x00037079) control_pane_g4

0x896f,	// (0x00038aed) bg_popup_sub_pane_cp10_ParamLimits

0xbaf6,	// (0x0003bc74) list_choice_list_pane_ParamLimits

0xbb05,	// (0x0003bc83) scroll_pane_cp23

0x2483,	// (0x00032601) bg_popup_preview_window_pane_cp02_ParamLimits

0xc160,	// (0x0003c2de) list_preview_fixed_pane_ParamLimits

0xc176,	// (0x0003c2f4) list_preview_fixed_pane_cp_ParamLimits

0xc176,	// (0x0003c2f4) list_preview_fixed_pane_cp

0xc182,	// (0x0003c300) popup_preview_fixed_window_g1_ParamLimits

0xc182,	// (0x0003c300) popup_preview_fixed_window_g1

0xc18e,	// (0x0003c30c) popup_preview_fixed_window_g2_ParamLimits

0xc18e,	// (0x0003c30c) popup_preview_fixed_window_g2

0x0002,

0xfb70,	// (0x0003fcee) popup_preview_fixed_window_g_ParamLimits

0xfb70,	// (0x0003fcee) popup_preview_fixed_window_g

0x64ac,	// (0x0003662a) aid_navi_side_left_pane_ParamLimits

0x64c1,	// (0x0003663f) aid_navi_side_right_pane_ParamLimits

0x64d9,	// (0x00036657) navi_icon_pane_stacon_ParamLimits

0x64ed,	// (0x0003666b) navi_navi_pane_stacon_ParamLimits

0x64d9,	// (0x00036657) navi_text_pane_stacon_ParamLimits

0xf439,	// (0x0003f5b7) main_text_info_pane

0xc3b0,	// (0x0003c52e) listscroll_text_info_pane

0xc3b8,	// (0x0003c536) list_text_info_pane_ParamLimits

0xc3b8,	// (0x0003c536) list_text_info_pane

0xc3c7,	// (0x0003c545) scroll_pane_cp24_ParamLimits

0xc3c7,	// (0x0003c545) scroll_pane_cp24

0xc3e5,	// (0x0003c563) list_text_info_pane_t1_ParamLimits

0xc3e5,	// (0x0003c563) list_text_info_pane_t1

0x89b9,	// (0x00038b37) popup_fast_swap2_window_ParamLimits

0x89b9,	// (0x00038b37) popup_fast_swap2_window

0xc40a,	// (0x0003c588) aid_size_cell_fast2

0xf439,	// (0x0003f5b7) bg_popup_window_pane_cp17

0x98e4,	// (0x00039a62) heading_pane_cp2

0x2689,	// (0x00032807) listscroll_fast2_pane

0xc414,	// (0x0003c592) grid_fast2_pane

0xc41e,	// (0x0003c59c) listscroll_fast2_pane_g1

0xc428,	// (0x0003c5a6) listscroll_fast2_pane_g2

0x0001,

0xfbf3,	// (0x0003fd71) listscroll_fast2_pane_g

0x2a91,	// (0x00032c0f) scroll_pane_cp26

0xc432,	// (0x0003c5b0) cell_fast2_pane_ParamLimits

0xc432,	// (0x0003c5b0) cell_fast2_pane

0xc449,	// (0x0003c5c7) cell_fast2_pane_g1

0xc452,	// (0x0003c5d0) cell_fast2_pane_g2

0xc45b,	// (0x0003c5d9) cell_fast2_pane_g3

0x0002,

0xfbf8,	// (0x0003fd76) cell_fast2_pane_g

0x26cb,	// (0x00032849) grid_highlight_pane_cp9

0x26e0,	// (0x0003285e) main_eswt_pane_ParamLimits

0x26e0,	// (0x0003285e) main_eswt_pane

0xc3dc,	// (0x0003c55a) list_single_text_info_pane

0xc463,	// (0x0003c5e1) eswt_ctrl_button_pane

0xc463,	// (0x0003c5e1) eswt_ctrl_canvas_pane

0xc46b,	// (0x0003c5e9) eswt_ctrl_combo_pane

0xc463,	// (0x0003c5e1) eswt_ctrl_default_pane

0xc463,	// (0x0003c5e1) eswt_ctrl_label_pane

0xc473,	// (0x0003c5f1) eswt_ctrl_wait_pane

0xc47b,	// (0x0003c5f9) eswt_shell_pane

0xf439,	// (0x0003f5b7) listscroll_eswt_app_pane

0xc49b,	// (0x0003c619) popup_eswt_tasktip_window_ParamLimits

0xc49b,	// (0x0003c619) popup_eswt_tasktip_window

0x9524,	// (0x000396a2) bg_popup_window_pane_cp18

0xc4ac,	// (0x0003c62a) eswt_control_pane_g1_ParamLimits

0xc4ac,	// (0x0003c62a) eswt_control_pane_g1

0xc4b9,	// (0x0003c637) eswt_control_pane_g2_ParamLimits

0xc4b9,	// (0x0003c637) eswt_control_pane_g2

0xc4c6,	// (0x0003c644) eswt_control_pane_g3_ParamLimits

0xc4c6,	// (0x0003c644) eswt_control_pane_g3

0xc4d3,	// (0x0003c651) eswt_control_pane_g4_ParamLimits

0xc4d3,	// (0x0003c651) eswt_control_pane_g4

0x0003,

0xfbff,	// (0x0003fd7d) eswt_control_pane_g_ParamLimits

0xfbff,	// (0x0003fd7d) eswt_control_pane_g

0x2965,	// (0x00032ae3) bg_button_pane_ParamLimits

0x2965,	// (0x00032ae3) bg_button_pane

0x26e0,	// (0x0003285e) common_borders_pane_copy2_ParamLimits

0x26e0,	// (0x0003285e) common_borders_pane_copy2

0xc4e0,	// (0x0003c65e) control_button_pane_g1_ParamLimits

0xc4e0,	// (0x0003c65e) control_button_pane_g1

0xc4ec,	// (0x0003c66a) control_button_pane_g2_ParamLimits

0xc4ec,	// (0x0003c66a) control_button_pane_g2

0xc4f8,	// (0x0003c676) control_button_pane_g3_ParamLimits

0xc4f8,	// (0x0003c676) control_button_pane_g3

0x0002,

0xfc08,	// (0x0003fd86) control_button_pane_g_ParamLimits

0xfc08,	// (0x0003fd86) control_button_pane_g

0xc50c,	// (0x0003c68a) control_button_pane_t1

0xc51a,	// (0x0003c698) control_button_pane_t2

0x0001,

0xfc0f,	// (0x0003fd8d) control_button_pane_t

0x94b0,	// (0x0003962e) bg_button_pane_g1

0x94c0,	// (0x0003963e) bg_button_pane_g2

0x94b8,	// (0x00039636) bg_button_pane_g3

0x94d0,	// (0x0003964e) bg_button_pane_g4

0x94c8,	// (0x00039646) bg_button_pane_g5

0x94d8,	// (0x00039656) bg_button_pane_g6

0x94e0,	// (0x0003965e) bg_button_pane_g7

0x94f0,	// (0x0003966e) bg_button_pane_g8

0x94e8,	// (0x00039666) bg_button_pane_g9

0x0008,

0xf867,	// (0x0003f9e5) bg_button_pane_g

0xbab1,	// (0x0003bc2f) common_borders_pane_ParamLimits

0xbab1,	// (0x0003bc2f) common_borders_pane

0xc4ac,	// (0x0003c62a) eswt_control_pane_g1_copy1_ParamLimits

0xc4ac,	// (0x0003c62a) eswt_control_pane_g1_copy1

0xc4b9,	// (0x0003c637) eswt_control_pane_g2_copy1_ParamLimits

0xc4b9,	// (0x0003c637) eswt_control_pane_g2_copy1

0xc4c6,	// (0x0003c644) eswt_control_pane_g3_copy1_ParamLimits

0xc4c6,	// (0x0003c644) eswt_control_pane_g3_copy1

0xc4d3,	// (0x0003c651) eswt_control_pane_g4_copy1_ParamLimits

0xc4d3,	// (0x0003c651) eswt_control_pane_g4_copy1

0xbaec,	// (0x0003bc6a) bg_eswt_ctrl_canvas_pane_g1

0xbab1,	// (0x0003bc2f) common_borders_pane_cp2_ParamLimits

0xbab1,	// (0x0003bc2f) common_borders_pane_cp2

0xbab1,	// (0x0003bc2f) common_borders_pane_cp3_ParamLimits

0xbab1,	// (0x0003bc2f) common_borders_pane_cp3

0xc528,	// (0x0003c6a6) separator_horizontal_pane

0xc530,	// (0x0003c6ae) separator_vertical_pane

0xc4ac,	// (0x0003c62a) eswt_control_pane_g1_copy2_ParamLimits

0xc4ac,	// (0x0003c62a) eswt_control_pane_g1_copy2

0xc4b9,	// (0x0003c637) eswt_control_pane_g2_copy2_ParamLimits

0xc4b9,	// (0x0003c637) eswt_control_pane_g2_copy2

0xc4c6,	// (0x0003c644) eswt_control_pane_g3_copy2_ParamLimits

0xc4c6,	// (0x0003c644) eswt_control_pane_g3_copy2

0xc4d3,	// (0x0003c651) eswt_control_pane_g4_copy2_ParamLimits

0xc4d3,	// (0x0003c651) eswt_control_pane_g4_copy2

0xf439,	// (0x0003f5b7) common_borders_pane_cp4

0xc539,	// (0x0003c6b7) separator_horizontal_pane_g1

0xc542,	// (0x0003c6c0) separator_horizontal_pane_g2

0xc54b,	// (0x0003c6c9) separator_horizontal_pane_g3

0x0002,

0xfc14,	// (0x0003fd92) separator_horizontal_pane_g

0xc4ac,	// (0x0003c62a) eswt_control_pane_g1_copy3_ParamLimits

0xc4ac,	// (0x0003c62a) eswt_control_pane_g1_copy3

0xc4b9,	// (0x0003c637) eswt_control_pane_g2_copy3_ParamLimits

0xc4b9,	// (0x0003c637) eswt_control_pane_g2_copy3

0xc4c6,	// (0x0003c644) eswt_control_pane_g3_copy3_ParamLimits

0xc4c6,	// (0x0003c644) eswt_control_pane_g3_copy3

0xc4d3,	// (0x0003c651) eswt_control_pane_g4_copy3_ParamLimits

0xc4d3,	// (0x0003c651) eswt_control_pane_g4_copy3

0xf439,	// (0x0003f5b7) common_borders_pane_cp5

0xc554,	// (0x0003c6d2) separator_vertical_pane_g1

0xc55d,	// (0x0003c6db) separator_vertical_pane_g2

0xc566,	// (0x0003c6e4) separator_vertical_pane_g3

0x0002,

0xfc1b,	// (0x0003fd99) separator_vertical_pane_g

0xc4ac,	// (0x0003c62a) eswt_control_pane_g1_copy4_ParamLimits

0xc4ac,	// (0x0003c62a) eswt_control_pane_g1_copy4

0xc4b9,	// (0x0003c637) eswt_control_pane_g2_copy4_ParamLimits

0xc4b9,	// (0x0003c637) eswt_control_pane_g2_copy4

0xc4c6,	// (0x0003c644) eswt_control_pane_g3_copy4_ParamLimits

0xc4c6,	// (0x0003c644) eswt_control_pane_g3_copy4

0xc4d3,	// (0x0003c651) eswt_control_pane_g4_copy4_ParamLimits

0xc4d3,	// (0x0003c651) eswt_control_pane_g4_copy4

0xc56f,	// (0x0003c6ed) eswt_ctrl_combo_button_pane

0xc577,	// (0x0003c6f5) eswt_ctrl_input_pane

0xc57f,	// (0x0003c6fd) popup_choice_list_window_cp70

0xc587,	// (0x0003c705) eswt_ctrl_input_pane_t1

0xf439,	// (0x0003f5b7) input_focus_pane_cp70

0xbab1,	// (0x0003bc2f) bg_button_pane_cp70_ParamLimits

0xbab1,	// (0x0003bc2f) bg_button_pane_cp70

0xc595,	// (0x0003c713) eswt_ctrl_combo_button_pane_g1

0xc59d,	// (0x0003c71b) wait_bar_pane_cp70

0x9524,	// (0x000396a2) bg_popup_window_pane_cp70_ParamLimits

0x9524,	// (0x000396a2) bg_popup_window_pane_cp70

0xc5a5,	// (0x0003c723) popup_eswt_tasktip_window_t1

0xc5bb,	// (0x0003c739) wait_bar_pane_cp71_ParamLimits

0xc5bb,	// (0x0003c739) wait_bar_pane_cp71

0xc5c7,	// (0x0003c745) grid_eswt_app_pane

0x2cdf,	// (0x00032e5d) scroll_pane_cp70

0xc5d0,	// (0x0003c74e) cell_eswt_app_pane_ParamLimits

0xc5d0,	// (0x0003c74e) cell_eswt_app_pane

0xc602,	// (0x0003c780) cell_eswt_app_pane_g1_ParamLimits

0xc602,	// (0x0003c780) cell_eswt_app_pane_g1

0xc631,	// (0x0003c7af) cell_eswt_app_pane_g2_ParamLimits

0xc631,	// (0x0003c7af) cell_eswt_app_pane_g2

0x0001,

0xfc22,	// (0x0003fda0) cell_eswt_app_pane_g_ParamLimits

0xfc22,	// (0x0003fda0) cell_eswt_app_pane_g

0xc65a,	// (0x0003c7d8) cell_eswt_app_pane_t1_ParamLimits

0xc65a,	// (0x0003c7d8) cell_eswt_app_pane_t1

0xc68c,	// (0x0003c80a) grid_highlight_pane_cp70_ParamLimits

0xc68c,	// (0x0003c80a) grid_highlight_pane_cp70

0x6d92,	// (0x00036f10) set_content_pane_g1

0x8899,	// (0x00038a17) status_small_volume_pane

0x7969,	// (0x00037ae7) status_small_volume_pane_g1

0x7971,	// (0x00037aef) volume_small2_pane

0x797a,	// (0x00037af8) volume_small2_pane_g1

0x7983,	// (0x00037b01) volume_small2_pane_g2

0x798c,	// (0x00037b0a) volume_small2_pane_g3

0x7995,	// (0x00037b13) volume_small2_pane_g4

0x799e,	// (0x00037b1c) volume_small2_pane_g5

0x79a7,	// (0x00037b25) volume_small2_pane_g6

0x79b0,	// (0x00037b2e) volume_small2_pane_g7

0x79b9,	// (0x00037b37) volume_small2_pane_g8

0x79c2,	// (0x00037b40) volume_small2_pane_g9

0x79cb,	// (0x00037b49) volume_small2_pane_g10

0x0009,

0xfc27,	// (0x0003fda5) volume_small2_pane_g

0xbee7,	// (0x0003c065) fep_vkb_top_text_pane_g1_ParamLimits

0xbf02,	// (0x0003c080) fep_vkb_top_text_pane_t1_ParamLimits

0xc19a,	// (0x0003c318) popup_preview_fixed_window_g3_ParamLimits

0xc19a,	// (0x0003c318) popup_preview_fixed_window_g3

0x8eca,	// (0x00039048) popup_toolbar_trans_pane

0xa87c,	// (0x0003a9fa) aid_height_set_list_ParamLimits

0xa88d,	// (0x0003aa0b) aid_size_parent_ParamLimits

0x896f,	// (0x00038aed) list_highlight_pane_cp2_ParamLimits

0x6d92,	// (0x00036f10) set_content_pane_g1_ParamLimits

0xaac0,	// (0x0003ac3e) list_single_image_pane_ParamLimits

0xaac0,	// (0x0003ac3e) list_single_image_pane

0xc698,	// (0x0003c816) aid_size_cell_image_ParamLimits

0xc698,	// (0x0003c816) aid_size_cell_image

0xc6a5,	// (0x0003c823) grid_single_image_pane_ParamLimits

0xc6a5,	// (0x0003c823) grid_single_image_pane

0x2973,	// (0x00032af1) list_single_image_pane_g1_ParamLimits

0x2973,	// (0x00032af1) list_single_image_pane_g1

0x297f,	// (0x00032afd) list_single_image_pane_g2_ParamLimits

0x297f,	// (0x00032afd) list_single_image_pane_g2

0x0001,

0xfc3c,	// (0x0003fdba) list_single_image_pane_g_ParamLimits

0xfc3c,	// (0x0003fdba) list_single_image_pane_g

0xc6b3,	// (0x0003c831) list_single_image_pane_t1_ParamLimits

0xc6b3,	// (0x0003c831) list_single_image_pane_t1

0xc6c9,	// (0x0003c847) cell_image_list_pane_ParamLimits

0xc6c9,	// (0x0003c847) cell_image_list_pane

0xc6df,	// (0x0003c85d) cell_image_list_pane_g1

0xc6e8,	// (0x0003c866) cell_image_list_pane_g2

0x0001,

0xfc41,	// (0x0003fdbf) cell_image_list_pane_g

0xc6f1,	// (0x0003c86f) aid_size_cell_tb_trans_pane

0x2965,	// (0x00032ae3) bg_tb_trans_pane

0xc703,	// (0x0003c881) grid_tb_trans_pane

0x94b0,	// (0x0003962e) bg_tb_trans_pane_g1

0x94c0,	// (0x0003963e) bg_tb_trans_pane_g2

0x94b8,	// (0x00039636) bg_tb_trans_pane_g3

0x94d0,	// (0x0003964e) bg_tb_trans_pane_g4

0x94c8,	// (0x00039646) bg_tb_trans_pane_g5

0x94f0,	// (0x0003966e) bg_tb_trans_pane_g6

0x94e8,	// (0x00039666) bg_tb_trans_pane_g7

0x94d8,	// (0x00039656) bg_tb_trans_pane_g8

0x94e0,	// (0x0003965e) bg_tb_trans_pane_g9

0x0008,

0xfc46,	// (0x0003fdc4) bg_tb_trans_pane_g

0xc717,	// (0x0003c895) cell_toolbar_trans_pane_ParamLimits

0xc717,	// (0x0003c895) cell_toolbar_trans_pane

0xbaec,	// (0x0003bc6a) cell_toolbar_trans_pane_g1

0xb710,	// (0x0003b88e) list_form2_midp_pane_t1

0xb71e,	// (0x0003b89c) list_form2_midp_pane_t2

0x0001,

0xfae3,	// (0x0003fc61) list_form2_midp_pane_t

0xb72c,	// (0x0003b8aa) scroll_pane_cp51_ParamLimits

0xb8f3,	// (0x0003ba71) form2_midp_wait_pane_g1

0xb8fc,	// (0x0003ba7a) form2_midp_wait_pane_g2

0xb905,	// (0x0003ba83) form2_midp_wait_pane_g3

0x0002,

0xfaf8,	// (0x0003fc76) form2_midp_wait_pane_g

0x2350,	// (0x000324ce) list_highlight_pane_cp21_ParamLimits

0xb949,	// (0x0003bac7) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb958,	// (0x0003bad6) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xaa79,	// (0x0003abf7) list_single_2graphic_im_pane_ParamLimits

0xaa79,	// (0x0003abf7) list_single_2graphic_im_pane

0xc73d,	// (0x0003c8bb) list_single_2graphic_im_pane_g1_ParamLimits

0xc73d,	// (0x0003c8bb) list_single_2graphic_im_pane_g1

0xc74e,	// (0x0003c8cc) list_single_2graphic_im_pane_g2_ParamLimits

0xc74e,	// (0x0003c8cc) list_single_2graphic_im_pane_g2

0xc75a,	// (0x0003c8d8) list_single_2graphic_im_pane_g3_ParamLimits

0xc75a,	// (0x0003c8d8) list_single_2graphic_im_pane_g3

0x0003,

0xfc59,	// (0x0003fdd7) list_single_2graphic_im_pane_g_ParamLimits

0xfc59,	// (0x0003fdd7) list_single_2graphic_im_pane_g

0xc77a,	// (0x0003c8f8) list_single_2graphic_im_pane_t1_ParamLimits

0xc77a,	// (0x0003c8f8) list_single_2graphic_im_pane_t1

0xc1a6,	// (0x0003c324) list_single_graphic_2heading_pane_fp_ParamLimits

0xc1a6,	// (0x0003c324) list_single_graphic_2heading_pane_fp

0x46c8,	// (0x00034846) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x46c8,	// (0x00034846) list_single_graphic_2heading_pane_fp_g1

0xc1bf,	// (0x0003c33d) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc1bf,	// (0x0003c33d) list_single_graphic_2heading_pane_fp_g2

0x4691,	// (0x0003480f) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4691,	// (0x0003480f) list_single_graphic_2heading_pane_fp_g3

0x469d,	// (0x0003481b) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x469d,	// (0x0003481b) list_single_graphic_2heading_pane_fp_g4

0xc1cb,	// (0x0003c349) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc1cb,	// (0x0003c349) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0003fcfe) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0003fcfe) list_single_graphic_2heading_pane_fp_g

0x4a2e,	// (0x00034bac) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4a2e,	// (0x00034bac) list_single_graphic_2heading_pane_fp_t1

0x48cf,	// (0x00034a4d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x48cf,	// (0x00034a4d) list_single_graphic_2heading_pane_fp_t2

0x4a44,	// (0x00034bc2) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4a44,	// (0x00034bc2) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc62,	// (0x0003fde0) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc62,	// (0x0003fde0) list_single_graphic_2heading_pane_fp_t

0xbb7d,	// (0x0003bcfb) fep_hwr_write_pane_g5_ParamLimits

0xbb7d,	// (0x0003bcfb) fep_hwr_write_pane_g5

0xbb89,	// (0x0003bd07) fep_hwr_write_pane_g6_ParamLimits

0xbb89,	// (0x0003bd07) fep_hwr_write_pane_g6

0xc47b,	// (0x0003c5f9) eswt_shell_pane_ParamLimits

0x9524,	// (0x000396a2) bg_popup_window_pane_cp18_ParamLimits

0xa7d3,	// (0x0003a951) heading_pane_cp70

0xc5a5,	// (0x0003c723) popup_eswt_tasktip_window_t1_ParamLimits

0x8ffd,	// (0x0003917b) aid_touch_tab_arrow_left

0x900c,	// (0x0003918a) aid_touch_tab_arrow_right

0xf457,	// (0x0003f5d5) title_pane_g3_ParamLimits

0xf457,	// (0x0003f5d5) title_pane_g3

0x2924,	// (0x00032aa2) set_value_pane_g1

0x8eca,	// (0x00039048) popup_toolbar_trans_pane_ParamLimits

0xc6f1,	// (0x0003c86f) aid_size_cell_tb_trans_pane_ParamLimits

0x2965,	// (0x00032ae3) bg_tb_trans_pane_ParamLimits

0xc703,	// (0x0003c881) grid_tb_trans_pane_ParamLimits

0x2483,	// (0x00032601) cont_note_pane_ParamLimits

0x2483,	// (0x00032601) cont_note_pane

0x26e0,	// (0x0003285e) cont_snote2_single_text_pane_ParamLimits

0x26e0,	// (0x0003285e) cont_snote2_single_text_pane

0x26e0,	// (0x0003285e) cont_snote2_single_graphic_pane_ParamLimits

0x26e0,	// (0x0003285e) cont_snote2_single_graphic_pane

0x9b00,	// (0x00039c7e) cont_note_wait_pane_ParamLimits

0x9b00,	// (0x00039c7e) cont_note_wait_pane

0x9b00,	// (0x00039c7e) cont_note_image_pane_ParamLimits

0x9b00,	// (0x00039c7e) cont_note_image_pane

0xc7ab,	// (0x0003c929) popup_note2_window_g1_ParamLimits

0xc7ab,	// (0x0003c929) popup_note2_window_g1

0xc7dc,	// (0x0003c95a) popup_note2_window_t1_ParamLimits

0xc7dc,	// (0x0003c95a) popup_note2_window_t1

0xc821,	// (0x0003c99f) popup_note2_window_t2_ParamLimits

0xc821,	// (0x0003c99f) popup_note2_window_t2

0xc866,	// (0x0003c9e4) popup_note2_window_t3_ParamLimits

0xc866,	// (0x0003c9e4) popup_note2_window_t3

0xc8ab,	// (0x0003ca29) popup_note2_window_t4_ParamLimits

0xc8ab,	// (0x0003ca29) popup_note2_window_t4

0x2507,	// (0x00032685) popup_note2_window_t5_ParamLimits

0x2507,	// (0x00032685) popup_note2_window_t5

0x0004,

0xfc6e,	// (0x0003fdec) popup_note2_window_t_ParamLimits

0xfc6e,	// (0x0003fdec) popup_note2_window_t

0xc8da,	// (0x0003ca58) popup_note2_image_window_g1_ParamLimits

0xc8da,	// (0x0003ca58) popup_note2_image_window_g1

0xc8e6,	// (0x0003ca64) popup_note2_image_window_g2_ParamLimits

0xc8e6,	// (0x0003ca64) popup_note2_image_window_g2

0x0001,

0xfc79,	// (0x0003fdf7) popup_note2_image_window_g_ParamLimits

0xfc79,	// (0x0003fdf7) popup_note2_image_window_g

0xc8f8,	// (0x0003ca76) popup_note2_image_window_t1_ParamLimits

0xc8f8,	// (0x0003ca76) popup_note2_image_window_t1

0xc910,	// (0x0003ca8e) popup_note2_image_window_t2_ParamLimits

0xc910,	// (0x0003ca8e) popup_note2_image_window_t2

0xc928,	// (0x0003caa6) popup_note2_image_window_t3_ParamLimits

0xc928,	// (0x0003caa6) popup_note2_image_window_t3

0x0002,

0xfc7e,	// (0x0003fdfc) popup_note2_image_window_t_ParamLimits

0xfc7e,	// (0x0003fdfc) popup_note2_image_window_t

0x9b0e,	// (0x00039c8c) popup_note2_wait_window_g1_ParamLimits

0x9b0e,	// (0x00039c8c) popup_note2_wait_window_g1

0xc944,	// (0x0003cac2) popup_note2_wait_window_g2_ParamLimits

0xc944,	// (0x0003cac2) popup_note2_wait_window_g2

0x9b26,	// (0x00039ca4) popup_note2_wait_window_g3_ParamLimits

0x9b26,	// (0x00039ca4) popup_note2_wait_window_g3

0x0002,

0xfc85,	// (0x0003fe03) popup_note2_wait_window_g_ParamLimits

0xfc85,	// (0x0003fe03) popup_note2_wait_window_g

0xc950,	// (0x0003cace) popup_note2_wait_window_t1_ParamLimits

0xc950,	// (0x0003cace) popup_note2_wait_window_t1

0xc96e,	// (0x0003caec) popup_note2_wait_window_t2_ParamLimits

0xc96e,	// (0x0003caec) popup_note2_wait_window_t2

0xc98c,	// (0x0003cb0a) popup_note2_wait_window_t3_ParamLimits

0xc98c,	// (0x0003cb0a) popup_note2_wait_window_t3

0xc99e,	// (0x0003cb1c) popup_note2_wait_window_t4_ParamLimits

0xc99e,	// (0x0003cb1c) popup_note2_wait_window_t4

0x0003,

0xfc8c,	// (0x0003fe0a) popup_note2_wait_window_t_ParamLimits

0xfc8c,	// (0x0003fe0a) popup_note2_wait_window_t

0xc9b0,	// (0x0003cb2e) wait_bar2_pane_ParamLimits

0xc9b0,	// (0x0003cb2e) wait_bar2_pane

0xc9c8,	// (0x0003cb46) popup_snote2_single_text_window_g1_ParamLimits

0xc9c8,	// (0x0003cb46) popup_snote2_single_text_window_g1

0xc9f0,	// (0x0003cb6e) popup_snote2_single_text_window_t1_ParamLimits

0xc9f0,	// (0x0003cb6e) popup_snote2_single_text_window_t1

0xca3c,	// (0x0003cbba) popup_snote2_single_text_window_t2_ParamLimits

0xca3c,	// (0x0003cbba) popup_snote2_single_text_window_t2

0xca88,	// (0x0003cc06) popup_snote2_single_text_window_t3_ParamLimits

0xca88,	// (0x0003cc06) popup_snote2_single_text_window_t3

0xcac9,	// (0x0003cc47) popup_snote2_single_text_window_t4_ParamLimits

0xcac9,	// (0x0003cc47) popup_snote2_single_text_window_t4

0xcaff,	// (0x0003cc7d) popup_snote2_single_text_window_t5_ParamLimits

0xcaff,	// (0x0003cc7d) popup_snote2_single_text_window_t5

0x0004,

0xfc95,	// (0x0003fe13) popup_snote2_single_text_window_t_ParamLimits

0xfc95,	// (0x0003fe13) popup_snote2_single_text_window_t

0xcb2a,	// (0x0003cca8) popup_snote2_single_graphic_window_g1_ParamLimits

0xcb2a,	// (0x0003cca8) popup_snote2_single_graphic_window_g1

0xcb52,	// (0x0003ccd0) popup_snote2_single_graphic_window_g2_ParamLimits

0xcb52,	// (0x0003ccd0) popup_snote2_single_graphic_window_g2

0x0001,

0xfca0,	// (0x0003fe1e) popup_snote2_single_graphic_window_g_ParamLimits

0xfca0,	// (0x0003fe1e) popup_snote2_single_graphic_window_g

0xcb7a,	// (0x0003ccf8) popup_snote2_single_graphic_window_t1_ParamLimits

0xcb7a,	// (0x0003ccf8) popup_snote2_single_graphic_window_t1

0xcbc6,	// (0x0003cd44) popup_snote2_single_graphic_window_t2_ParamLimits

0xcbc6,	// (0x0003cd44) popup_snote2_single_graphic_window_t2

0xca88,	// (0x0003cc06) popup_snote2_single_graphic_window_t3_ParamLimits

0xca88,	// (0x0003cc06) popup_snote2_single_graphic_window_t3

0xcac9,	// (0x0003cc47) popup_snote2_single_graphic_window_t4_ParamLimits

0xcac9,	// (0x0003cc47) popup_snote2_single_graphic_window_t4

0xcaff,	// (0x0003cc7d) popup_snote2_single_graphic_window_t5_ParamLimits

0xcaff,	// (0x0003cc7d) popup_snote2_single_graphic_window_t5

0x0004,

0xfca5,	// (0x0003fe23) popup_snote2_single_graphic_window_t_ParamLimits

0xfca5,	// (0x0003fe23) popup_snote2_single_graphic_window_t

0xb5dc,	// (0x0003b75a) clock_nsta_pane_cp2_t1

0xb5dc,	// (0x0003b75a) clock_nsta_pane_cp2_t2

0x0001,

0xfab9,	// (0x0003fc37) clock_nsta_pane_cp2_t

0x41b2,	// (0x00034330) form_field_data_wide_pane_g1_ParamLimits

0x2973,	// (0x00032af1) form_field_data_wide_pane_g2_ParamLimits

0x2973,	// (0x00032af1) form_field_data_wide_pane_g2

0x297f,	// (0x00032afd) form_field_data_wide_pane_g3_ParamLimits

0x297f,	// (0x00032afd) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x0003f7fa) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x0003f7fa) form_field_data_wide_pane_g

0xb4b5,	// (0x0003b633) grid_touch_3_pane_ParamLimits

0xb4b5,	// (0x0003b633) grid_touch_3_pane

0xcc12,	// (0x0003cd90) cell_touch_3_pane_ParamLimits

0xcc12,	// (0x0003cd90) cell_touch_3_pane

0xbaec,	// (0x0003bc6a) cell_touch_3_pane_g1

0xbaec,	// (0x0003bc6a) cell_touch_3_pane_g2

0x0001,

0xfb3e,	// (0x0003fcbc) cell_touch_3_pane_g

0x2539,	// (0x000326b7) cont_query_data_pane

0x2541,	// (0x000326bf) cont_query_data_pane_cp1

0xcc45,	// (0x0003cdc3) button_value_adjust_pane_cp7

0xcc4d,	// (0x0003cdcb) query_popup_pane_cp3

0x676e,	// (0x000368ec) bg_popup_sub_pane_cp22_ParamLimits

0x6784,	// (0x00036902) navi_navi_volume_pane_cp2

0x679f,	// (0x0003691d) popup_side_volume_key_window_g2

0x67ae,	// (0x0003692c) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x0003f890) popup_side_volume_key_window_g

0x67cb,	// (0x00036949) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x0003f897) popup_side_volume_key_window_t

0x6c58,	// (0x00036dd6) popup_side_volume_key_window_ParamLimits

0x5ee8,	// (0x00036066) list_double_graphic_pane_g4_ParamLimits

0x5ee8,	// (0x00036066) list_double_graphic_pane_g4

0xaaa8,	// (0x0003ac26) list_single_2heading_msg_pane_ParamLimits

0xaaa8,	// (0x0003ac26) list_single_2heading_msg_pane

0x79d4,	// (0x00037b52) list_single_2heading_msg_pane_g1_ParamLimits

0x79d4,	// (0x00037b52) list_single_2heading_msg_pane_g1

0x4700,	// (0x0003487e) list_single_2heading_msg_pane_g2_ParamLimits

0x4700,	// (0x0003487e) list_single_2heading_msg_pane_g2

0x79e0,	// (0x00037b5e) list_single_2heading_msg_pane_g3_ParamLimits

0x79e0,	// (0x00037b5e) list_single_2heading_msg_pane_g3

0x79ec,	// (0x00037b6a) list_single_2heading_msg_pane_g4_ParamLimits

0x79ec,	// (0x00037b6a) list_single_2heading_msg_pane_g4

0x0003,

0xfcb0,	// (0x0003fe2e) list_single_2heading_msg_pane_g_ParamLimits

0xfcb0,	// (0x0003fe2e) list_single_2heading_msg_pane_g

0x7a04,	// (0x00037b82) list_single_2heading_msg_pane_t1_ParamLimits

0x7a04,	// (0x00037b82) list_single_2heading_msg_pane_t1

0x7a2c,	// (0x00037baa) list_single_2heading_msg_pane_t2_ParamLimits

0x7a2c,	// (0x00037baa) list_single_2heading_msg_pane_t2

0x7a60,	// (0x00037bde) list_single_2heading_msg_pane_t3_ParamLimits

0x7a60,	// (0x00037bde) list_single_2heading_msg_pane_t3

0x4a64,	// (0x00034be2) list_single_2heading_msg_pane_t4_ParamLimits

0x4a64,	// (0x00034be2) list_single_2heading_msg_pane_t4

0x0003,

0xfcb9,	// (0x0003fe37) list_single_2heading_msg_pane_t_ParamLimits

0xfcb9,	// (0x0003fe37) list_single_2heading_msg_pane_t

0xf463,	// (0x0003f5e1) title_pane_g4_ParamLimits

0xf463,	// (0x0003f5e1) title_pane_g4

0x63fc,	// (0x0003657a) title_pane_stacon_g3_ParamLimits

0x63fc,	// (0x0003657a) title_pane_stacon_g3

0xc76e,	// (0x0003c8ec) list_single_2graphic_im_pane_g4_ParamLimits

0xc76e,	// (0x0003c8ec) list_single_2graphic_im_pane_g4

0xa570,	// (0x0003a6ee) popup_side_volume_key_window_cp

0xadd0,	// (0x0003af4e) main_idle_act2_pane_t1

0x7027,	// (0x000371a5) toolbar_button_pane_g10

0x5d5d,	// (0x00035edb) popup_toolbar_window_cp1

0xb5cd,	// (0x0003b74b) clock_nsta_pane_cp_t1

0xb5cd,	// (0x0003b74b) clock_nsta_pane_cp_t2

0x0001,

0xfab4,	// (0x0003fc32) clock_nsta_pane_cp_t

0x6784,	// (0x00036902) navi_navi_volume_pane_cp2_ParamLimits

0x6793,	// (0x00036911) popup_side_volume_key_window_g1_ParamLimits

0x679f,	// (0x0003691d) popup_side_volume_key_window_g2_ParamLimits

0x67ae,	// (0x0003692c) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x0003f890) popup_side_volume_key_window_g_ParamLimits

0x7584,	// (0x00037702) fep_hwr_aid_pane

0x762d,	// (0x000377ab) bg_fep_hwr_top_pane_g4_ParamLimits

0xbb4d,	// (0x0003bccb) fep_hwr_top_pane_g1_ParamLimits

0xbb5f,	// (0x0003bcdd) fep_hwr_top_pane_g2_ParamLimits

0x764d,	// (0x000377cb) fep_hwr_top_pane_g3_ParamLimits

0xfb09,	// (0x0003fc87) fep_hwr_top_pane_g_ParamLimits

0x7662,	// (0x000377e0) fep_hwr_top_text_pane_ParamLimits

0xa325,	// (0x0003a4a3) aid_touch_tab_arrow_arrow_2

0xa32e,	// (0x0003a4ac) aid_touch_tab_arrow_left_2

0x7598,	// (0x00037716) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x75cf,	// (0x0003774d) fep_hwr_prediction_pane

0xbce1,	// (0x0003be5f) fep_vkb_prediction_pane

0xbde7,	// (0x0003bf65) fep_vkb_side_pane_g3_ParamLimits

0xbde7,	// (0x0003bf65) fep_vkb_side_pane_g3

0x77f1,	// (0x0003796f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7862,	// (0x000379e0) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x786f,	// (0x000379ed) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb8,	// (0x0003fd36) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7a99,	// (0x00037c17) fep_hwr_prediction_pane_g1

0x7aa3,	// (0x00037c21) fep_hwr_prediction_pane_g2

0x7aab,	// (0x00037c29) fep_hwr_prediction_pane_g3

0x7ab3,	// (0x00037c31) fep_hwr_prediction_pane_g4

0x0003,

0xfcc2,	// (0x0003fe40) fep_hwr_prediction_pane_g

0xcc74,	// (0x0003cdf2) fep_vkb_prediction_pane_g1

0xcc7e,	// (0x0003cdfc) fep_vkb_prediction_pane_g2

0xcc86,	// (0x0003ce04) fep_vkb_prediction_pane_g3

0xcc8e,	// (0x0003ce0c) fep_vkb_prediction_pane_g4

0x0003,

0xfccb,	// (0x0003fe49) fep_vkb_prediction_pane_g

0x737b,	// (0x000374f9) slider_set_pane_g3

0x738f,	// (0x0003750d) slider_set_pane_g4

0x73a7,	// (0x00037525) slider_set_pane_g5

0x737b,	// (0x000374f9) slider_set_pane_g6

0x73bd,	// (0x0003753b) slider_set_pane_g7

0xaa12,	// (0x0003ab90) slider_form_pane_g3

0xaa1b,	// (0x0003ab99) slider_form_pane_g4

0xaa23,	// (0x0003aba1) slider_form_pane_g5

0xaa12,	// (0x0003ab90) slider_form_pane_g6

0xaa2b,	// (0x0003aba9) slider_form_pane_g7

0xb087,	// (0x0003b205) slider_set_pane_vc_g3

0xb090,	// (0x0003b20e) slider_set_pane_vc_g4

0xb099,	// (0x0003b217) slider_set_pane_vc_g5

0xb087,	// (0x0003b205) slider_set_pane_vc_g6

0xb0a2,	// (0x0003b220) slider_set_pane_vc_g7

0xb27a,	// (0x0003b3f8) slider_form_pane_vc_g1

0xb283,	// (0x0003b401) slider_form_pane_vc_g2

0xb28c,	// (0x0003b40a) slider_form_pane_vc_g3

0xb27a,	// (0x0003b3f8) slider_form_pane_vc_g4

0xb295,	// (0x0003b413) slider_form_pane_vc_g5

0x0004,

0xfa86,	// (0x0003fc04) slider_form_pane_vc_g

0xf439,	// (0x0003f5b7) main_idle_act3_pane

0xcc96,	// (0x0003ce14) ai3_links_pane

0xcc9f,	// (0x0003ce1d) popup_ai3_data_window_ParamLimits

0xcc9f,	// (0x0003ce1d) popup_ai3_data_window

0xf439,	// (0x0003f5b7) grid_ai3_links_pane

0xccbd,	// (0x0003ce3b) cell_ai3_links_pane_ParamLimits

0xccbd,	// (0x0003ce3b) cell_ai3_links_pane

0xccd7,	// (0x0003ce55) bg_popup_sub_pane_cp11

0xcce4,	// (0x0003ce62) cell_ai3_links_pane_g1

0xf439,	// (0x0003f5b7) bg_popup_sub_pane_cp12

0xcd09,	// (0x0003ce87) heading_ai3_data_pane

0xcd11,	// (0x0003ce8f) list_ai3_gene_pane

0xcd1d,	// (0x0003ce9b) popup_ai3_data_window_g1

0xcd25,	// (0x0003cea3) heading_ai3_data_pane_g1

0xcd2d,	// (0x0003ceab) heading_ai3_data_pane_t1

0xcd3b,	// (0x0003ceb9) list_double_ai3_gene_pane_ParamLimits

0xcd3b,	// (0x0003ceb9) list_double_ai3_gene_pane

0xcd48,	// (0x0003cec6) list_single_ai3_gene_pane_ParamLimits

0xcd48,	// (0x0003cec6) list_single_ai3_gene_pane

0xbab1,	// (0x0003bc2f) list_highlight_pane_cp7_ParamLimits

0xbab1,	// (0x0003bc2f) list_highlight_pane_cp7

0xcd55,	// (0x0003ced3) list_single_a13_gene_pane_t1_ParamLimits

0xcd55,	// (0x0003ced3) list_single_a13_gene_pane_t1

0xcd6c,	// (0x0003ceea) list_single_ai3_gene_pane_g1

0xcd75,	// (0x0003cef3) list_single_ai3_gene_pane_g2

0x0001,

0xfcd4,	// (0x0003fe52) list_single_ai3_gene_pane_g

0xcd7d,	// (0x0003cefb) list_double_ai3_gene_pane_g1_ParamLimits

0xcd7d,	// (0x0003cefb) list_double_ai3_gene_pane_g1

0xcd89,	// (0x0003cf07) list_double_ai3_gene_pane_t1_ParamLimits

0xcd89,	// (0x0003cf07) list_double_ai3_gene_pane_t1

0xcda5,	// (0x0003cf23) list_double_ai3_gene_pane_t2_ParamLimits

0xcda5,	// (0x0003cf23) list_double_ai3_gene_pane_t2

0xcdba,	// (0x0003cf38) list_double_ai3_gene_pane_t3_ParamLimits

0xcdba,	// (0x0003cf38) list_double_ai3_gene_pane_t3

0x0002,

0xfcd9,	// (0x0003fe57) list_double_ai3_gene_pane_t_ParamLimits

0xfcd9,	// (0x0003fe57) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4a5a,	// (0x00034bd8) aid_size_min_col_2

0xcc5e,	// (0x0003cddc) aid_size_min_msg_ParamLimits

0xcc5e,	// (0x0003cddc) aid_size_min_msg

0xbef3,	// (0x0003c071) fep_vkb_top_text_pane_g2_ParamLimits

0xbef3,	// (0x0003c071) fep_vkb_top_text_pane_g2

0x0001,

0xfb39,	// (0x0003fcb7) fep_vkb_top_text_pane_g_ParamLimits

0xfb39,	// (0x0003fcb7) fep_vkb_top_text_pane_g

0xf439,	// (0x0003f5b7) main_hc_apps_shell_pane

0xcdd7,	// (0x0003cf55) grid_hc_apps_pane_ParamLimits

0xcdd7,	// (0x0003cf55) grid_hc_apps_pane

0xcde6,	// (0x0003cf64) list_hc_apps_pane

0xcdee,	// (0x0003cf6c) scroll_pane_cp37_ParamLimits

0xcdee,	// (0x0003cf6c) scroll_pane_cp37

0xcdfa,	// (0x0003cf78) cell_hc_apps_pane_ParamLimits

0xcdfa,	// (0x0003cf78) cell_hc_apps_pane

0xceb2,	// (0x0003d030) cell_hc_apps_pane_g1_ParamLimits

0xceb2,	// (0x0003d030) cell_hc_apps_pane_g1

0xcee3,	// (0x0003d061) cell_hc_apps_pane_g2_ParamLimits

0xcee3,	// (0x0003d061) cell_hc_apps_pane_g2

0xceff,	// (0x0003d07d) cell_hc_apps_pane_g3_ParamLimits

0xceff,	// (0x0003d07d) cell_hc_apps_pane_g3

0x0002,

0xfce0,	// (0x0003fe5e) cell_hc_apps_pane_g_ParamLimits

0xfce0,	// (0x0003fe5e) cell_hc_apps_pane_g

0xcf21,	// (0x0003d09f) cell_hc_apps_pane_t1_ParamLimits

0xcf21,	// (0x0003d09f) cell_hc_apps_pane_t1

0x2483,	// (0x00032601) grid_highlight_pane_cp10_ParamLimits

0x2483,	// (0x00032601) grid_highlight_pane_cp10

0xcf61,	// (0x0003d0df) list_single_hc_apps_pane_ParamLimits

0xcf61,	// (0x0003d0df) list_single_hc_apps_pane

0xcfa0,	// (0x0003d11e) list_single_hc_apps_pane_g1

0x7abb,	// (0x00037c39) list_single_hc_apps_pane_g2

0x0001,

0xfce7,	// (0x0003fe65) list_single_hc_apps_pane_g

0x7ad4,	// (0x00037c52) list_single_hc_apps_pane_g2_copy1

0x7af0,	// (0x00037c6e) list_single_hc_apps_pane_t1

0x2350,	// (0x000324ce) bg_set_opt_pane_cp_ParamLimits

0x5aae,	// (0x00035c2c) setting_slider_pane_t1_ParamLimits

0x5ac7,	// (0x00035c45) setting_slider_pane_t2_ParamLimits

0x5ae1,	// (0x00035c5f) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0003f6e2) setting_slider_pane_t_ParamLimits

0x5af9,	// (0x00035c77) slider_set_pane_ParamLimits

0x6f0f,	// (0x0003708d) control_pane_g5_ParamLimits

0x6f0f,	// (0x0003708d) control_pane_g5

0xa83f,	// (0x0003a9bd) slider_set_pane_g1_ParamLimits

0x736f,	// (0x000374ed) slider_set_pane_g2_ParamLimits

0x737b,	// (0x000374f9) slider_set_pane_g3_ParamLimits

0x738f,	// (0x0003750d) slider_set_pane_g4_ParamLimits

0x73a7,	// (0x00037525) slider_set_pane_g5_ParamLimits

0x737b,	// (0x000374f9) slider_set_pane_g6_ParamLimits

0x73bd,	// (0x0003753b) slider_set_pane_g7_ParamLimits

0xf965,	// (0x0003fae3) slider_set_pane_g_ParamLimits

0x6d3d,	// (0x00036ebb) navi_icon_text_pane_ParamLimits

0x8fbc,	// (0x0003913a) aid_fill_nsta_2_ParamLimits

0x8ffd,	// (0x0003917b) aid_touch_tab_arrow_left_ParamLimits

0x900c,	// (0x0003918a) aid_touch_tab_arrow_right_ParamLimits

0x9079,	// (0x000391f7) clock_nsta_pane_ParamLimits

0xa307,	// (0x0003a485) navi_icon_pane_g1_ParamLimits

0xa313,	// (0x0003a491) navi_text_pane_t1_ParamLimits

0xb6ea,	// (0x0003b868) navi_icon_text_pane_g1_ParamLimits

0xb6f6,	// (0x0003b874) navi_icon_text_pane_t1_ParamLimits

0xcfa0,	// (0x0003d11e) list_single_hc_apps_pane_g1_ParamLimits

0x7abb,	// (0x00037c39) list_single_hc_apps_pane_g2_ParamLimits

0xfce7,	// (0x0003fe65) list_single_hc_apps_pane_g_ParamLimits

0x7ad4,	// (0x00037c52) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7af0,	// (0x00037c6e) list_single_hc_apps_pane_t1_ParamLimits

0x58fe,	// (0x00035a7c) popup_toolbar2_fixed_window_ParamLimits

0x58fe,	// (0x00035a7c) popup_toolbar2_fixed_window

0x8ec0,	// (0x0003903e) popup_toolbar2_float_window

0xf439,	// (0x0003f5b7) bg_popup_sub_pane_cp27

0xcfb9,	// (0x0003d137) grid_toolbar2_float_pane

0xf439,	// (0x0003f5b7) bg_popup_sub_pane_cp26

0xcfb9,	// (0x0003d137) grid_toolbar2_fixed_pane

0xcfc1,	// (0x0003d13f) cell_toolbar2_fixed_pane_ParamLimits

0xcfc1,	// (0x0003d13f) cell_toolbar2_fixed_pane

0xcfd1,	// (0x0003d14f) cell_toolbar2_fixed_pane_g1

0xcfda,	// (0x0003d158) toolbar2_fixed_button_pane

0x94b0,	// (0x0003962e) toolbar2_fixed_button_pane_g1

0x94c0,	// (0x0003963e) toolbar2_fixed_button_pane_g2

0x94b8,	// (0x00039636) toolbar2_fixed_button_pane_g3

0x94d0,	// (0x0003964e) toolbar2_fixed_button_pane_g4

0x94c8,	// (0x00039646) toolbar2_fixed_button_pane_g5

0x94d8,	// (0x00039656) toolbar2_fixed_button_pane_g6

0x94e0,	// (0x0003965e) toolbar2_fixed_button_pane_g7

0x94f0,	// (0x0003966e) toolbar2_fixed_button_pane_g8

0x94e8,	// (0x00039666) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x0003f9e5) toolbar2_fixed_button_pane_g

0xcfe2,	// (0x0003d160) cell_toolbar2_float_pane_ParamLimits

0xcfe2,	// (0x0003d160) cell_toolbar2_float_pane

0xcff3,	// (0x0003d171) cell_toolbar2_float_pane_g1

0xcfda,	// (0x0003d158) toolbar2_fixed_button_pane_cp

0xbc23,	// (0x0003bda1) fep_vkb_accented_list_pane_ParamLimits

0xbc23,	// (0x0003bda1) fep_vkb_accented_list_pane

0x77d1,	// (0x0003794f) bg_popup_fep_shadow_pane_g9

0x85f5,	// (0x00038773) bg_popup_fep_shadow_pane_cp3

0x2a78,	// (0x00032bf6) list_accented_list_pane

0xcffc,	// (0x0003d17a) list_single_accented_list_pane_ParamLimits

0xcffc,	// (0x0003d17a) list_single_accented_list_pane

0x85f5,	// (0x00038773) list_highlight_pane_cp10

0xd00d,	// (0x0003d18b) list_single_accented_list_pane_t1

0x8e06,	// (0x00038f84) popup_slider_window_ParamLimits

0x8e06,	// (0x00038f84) popup_slider_window

0xcc55,	// (0x0003cdd3) aid_indentation_list_msg

0xd0d9,	// (0x0003d257) bg_popup_window_pane_cp19

0xd147,	// (0x0003d2c5) popup_slider_window_g1

0xd163,	// (0x0003d2e1) popup_slider_window_g2

0xd17f,	// (0x0003d2fd) popup_slider_window_g3

0x0005,

0xfcec,	// (0x0003fe6a) popup_slider_window_g

0xd1db,	// (0x0003d359) popup_slider_window_t1

0xd24f,	// (0x0003d3cd) small_volume_slider_vertical_pane

0xbaec,	// (0x0003bc6a) small_volume_slider_vertical_pane_g1

0xbaec,	// (0x0003bc6a) small_volume_slider_vertical_pane_g2

0xd26b,	// (0x0003d3e9) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfe,	// (0x0003fe7c) small_volume_slider_vertical_pane_g

0x56ac,	// (0x0003582a) area_side_right_pane_ParamLimits

0x56ac,	// (0x0003582a) area_side_right_pane

0x7b1e,	// (0x00037c9c) aid_size_side_button_ParamLimits

0x7b1e,	// (0x00037c9c) aid_size_side_button

0x7b32,	// (0x00037cb0) grid_sctrl_middle_pane_ParamLimits

0x7b32,	// (0x00037cb0) grid_sctrl_middle_pane

0x7b52,	// (0x00037cd0) sctrl_sk_bottom_pane

0x7b63,	// (0x00037ce1) sctrl_sk_top_pane

0x7b75,	// (0x00037cf3) aid_touch_sctrl_top

0x7b82,	// (0x00037d00) bg_sctrl_sk_pane_ParamLimits

0x7b82,	// (0x00037d00) bg_sctrl_sk_pane

0x7b90,	// (0x00037d0e) sctrl_sk_top_pane_g1

0x7b9d,	// (0x00037d1b) sctrl_sk_top_pane_t1

0x7b75,	// (0x00037cf3) aid_touch_sctrl_bottom

0x7b82,	// (0x00037d00) bg_sctrl_sk_pane_cp_ParamLimits

0x7b82,	// (0x00037d00) bg_sctrl_sk_pane_cp

0x7bb8,	// (0x00037d36) sctrl_sk_bottom_pane_g1

0x7b9d,	// (0x00037d1b) sctrl_sk_bottom_pane_t1

0x7bc1,	// (0x00037d3f) cell_sctrl_middle_pane_ParamLimits

0x7bc1,	// (0x00037d3f) cell_sctrl_middle_pane

0x7bde,	// (0x00037d5c) aid_touch_sctrl_middle_ParamLimits

0x7bde,	// (0x00037d5c) aid_touch_sctrl_middle

0x7bf0,	// (0x00037d6e) bg_sctrl_middle_pane_ParamLimits

0x7bf0,	// (0x00037d6e) bg_sctrl_middle_pane

0x77f1,	// (0x0003796f) cell_sctrl_middle_pane_g1_ParamLimits

0x77f1,	// (0x0003796f) cell_sctrl_middle_pane_g1

0x7bfe,	// (0x00037d7c) cell_sctrl_middle_pane_g2_ParamLimits

0x7bfe,	// (0x00037d7c) cell_sctrl_middle_pane_g2

0x0001,

0xfd0a,	// (0x0003fe88) cell_sctrl_middle_pane_g_ParamLimits

0xfd0a,	// (0x0003fe88) cell_sctrl_middle_pane_g

0x94b0,	// (0x0003962e) bg_sctrl_middle_pane_g1

0x94b8,	// (0x00039636) bg_sctrl_middle_pane_g2

0x94c0,	// (0x0003963e) bg_sctrl_middle_pane_g3

0x94c8,	// (0x00039646) bg_sctrl_middle_pane_g4

0x94d0,	// (0x0003964e) bg_sctrl_middle_pane_g5

0x94d8,	// (0x00039656) bg_sctrl_middle_pane_g6

0x94e0,	// (0x0003965e) bg_sctrl_middle_pane_g7

0x94e8,	// (0x00039666) bg_sctrl_middle_pane_g8

0x0007,

0xfd0f,	// (0x0003fe8d) bg_sctrl_middle_pane_g

0x94f0,	// (0x0003966e) bg_sctrl_middle_pane_g8_copy1

0x94b0,	// (0x0003962e) bg_sctrl_sk_pane_g1

0x94c0,	// (0x0003963e) bg_sctrl_sk_pane_g2

0x94b8,	// (0x00039636) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x0003f9e5) bg_sctrl_sk_pane_g

0x289e,	// (0x00032a1c) aid_size_touch_scroll_bar

0x94d0,	// (0x0003964e) bg_sctrl_sk_pane_g4

0x94c8,	// (0x00039646) bg_sctrl_sk_pane_g5

0x94d8,	// (0x00039656) bg_sctrl_sk_pane_g6

0x94e0,	// (0x0003965e) bg_sctrl_sk_pane_g7

0x94f0,	// (0x0003966e) bg_sctrl_sk_pane_g8

0x94e8,	// (0x00039666) bg_sctrl_sk_pane_g9

0x8a1d,	// (0x00038b9b) popup_fep_china_hwr2_fs_candidate_window

0x8a27,	// (0x00038ba5) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8a27,	// (0x00038ba5) popup_fep_china_hwr2_fs_control_window

0x77f1,	// (0x0003796f) sctrl_sk_top_pane_g2

0x0001,

0xfd05,	// (0x0003fe83) sctrl_sk_top_pane_g

0xd274,	// (0x0003d3f2) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd274,	// (0x0003d3f2) aid_fep_china_hwr2_fs_cell

0xd287,	// (0x0003d405) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd287,	// (0x0003d405) bg_popup_fep_shadow_pane_cp4

0xd2a0,	// (0x0003d41e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd2a0,	// (0x0003d41e) bg_popup_fep_shadow_pane_cp5

0xd2b2,	// (0x0003d430) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd2b2,	// (0x0003d430) popup_fep_china_hwr2_fs_control_bar_grid

0xd2c2,	// (0x0003d440) popup_fep_china_hwr2_fs_control_funtion_grid

0xd2ca,	// (0x0003d448) aid_fep_china_hwr2_fs_candi_cell

0xf439,	// (0x0003f5b7) bg_popup_fep_shadow_pane_cp6

0xd2d4,	// (0x0003d452) popup_fep_china_hwr2_fs_candidate_grid

0xd2de,	// (0x0003d45c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd2de,	// (0x0003d45c) cell_fep_china_hwr2_fs_funtion_grid

0xbaec,	// (0x0003bc6a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd2f6,	// (0x0003d474) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd2f6,	// (0x0003d474) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd304,	// (0x0003d482) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd304,	// (0x0003d482) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd20,	// (0x0003fe9e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd20,	// (0x0003fe9e) cell_fep_china_hwr2_fs_funtion_grid_g

0xd31a,	// (0x0003d498) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd31a,	// (0x0003d498) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd32f,	// (0x0003d4ad) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd32f,	// (0x0003d4ad) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd25,	// (0x0003fea3) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd25,	// (0x0003fea3) cell_fep_china_hwr2_fs_funtion_grid_t

0xd34b,	// (0x0003d4c9) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd353,	// (0x0003d4d1) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd35b,	// (0x0003d4d9) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2a,	// (0x0003fea8) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd363,	// (0x0003d4e1) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd363,	// (0x0003d4e1) cell_fep_china_hwr2_fs_candidate_grid

0xd382,	// (0x0003d500) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd38a,	// (0x0003d508) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbaec,	// (0x0003bc6a) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbaec,	// (0x0003bc6a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3e,	// (0x0003fcbc) cell_fep_china_hwr2_fs_candidate_grid_g

0xd392,	// (0x0003d510) cell_fep_china_hwr2_fs_candidate_grid_t1

0x908c,	// (0x0003920a) clock_nsta_pane_cp_24_ParamLimits

0x908c,	// (0x0003920a) clock_nsta_pane_cp_24

0x910c,	// (0x0003928a) indicator_nsta_pane_cp_24_ParamLimits

0x910c,	// (0x0003928a) indicator_nsta_pane_cp_24

0xa183,	// (0x0003a301) heading_pane_g1

0x0001,

0xf8cc,	// (0x0003fa4a) heading_pane_g

0xac17,	// (0x0003ad95) grid_sct_catagory_button_pane

0xac49,	// (0x0003adc7) scroll_pane_cp5_ParamLimits

0xb738,	// (0x0003b8b6) button_value_adjust_pane_cp5_ParamLimits

0xb738,	// (0x0003b8b6) button_value_adjust_pane_cp5

0xb81d,	// (0x0003b99b) form2_midp_time_pane_ParamLimits

0xd3a0,	// (0x0003d51e) cell_sct_catagory_button_pane_ParamLimits

0xd3a0,	// (0x0003d51e) cell_sct_catagory_button_pane

0xbab1,	// (0x0003bc2f) bg_button_pane_cp01_ParamLimits

0xbab1,	// (0x0003bc2f) bg_button_pane_cp01

0xbaec,	// (0x0003bc6a) cell_sct_catagory_button_pane_g1

0x8e47,	// (0x00038fc5) popup_tb_extension_window

0xd3b2,	// (0x0003d530) aid_size_cell_ext_ParamLimits

0xd3b2,	// (0x0003d530) aid_size_cell_ext

0x2483,	// (0x00032601) bg_tb_trans_pane_cp1_ParamLimits

0x2483,	// (0x00032601) bg_tb_trans_pane_cp1

0xd3d2,	// (0x0003d550) grid_tb_ext_pane_ParamLimits

0xd3d2,	// (0x0003d550) grid_tb_ext_pane

0xd402,	// (0x0003d580) cell_tb_ext_pane_ParamLimits

0xd402,	// (0x0003d580) cell_tb_ext_pane

0xd419,	// (0x0003d597) cell_tb_ext_pane_g1_ParamLimits

0xd419,	// (0x0003d597) cell_tb_ext_pane_g1

0xd436,	// (0x0003d5b4) cell_tb_ext_pane_t1

0x2483,	// (0x00032601) list_highlight_pane_cp11_ParamLimits

0x2483,	// (0x00032601) list_highlight_pane_cp11

0x591d,	// (0x00035a9b) popup_uni_indicator_window_ParamLimits

0x591d,	// (0x00035a9b) popup_uni_indicator_window

0x2965,	// (0x00032ae3) bg_popup_sub_pane_cp14

0xd451,	// (0x0003d5cf) list_uniindi_pane

0xd45d,	// (0x0003d5db) uniindi_top_pane

0x2483,	// (0x00032601) bg_uniindi_top_pane

0xd47e,	// (0x0003d5fc) uniindi_top_pane_g1

0xd494,	// (0x0003d612) uniindi_top_pane_g2

0x0003,

0xfd31,	// (0x0003feaf) uniindi_top_pane_g

0xd4be,	// (0x0003d63c) uniindi_top_pane_t1

0xd4ea,	// (0x0003d668) list_single_uniindi_pane_ParamLimits

0xd4ea,	// (0x0003d668) list_single_uniindi_pane

0xbaec,	// (0x0003bc6a) bg_uniindi_top_pane_g1

0xd4fc,	// (0x0003d67a) list_single_uniindi_pane_g1

0xd50f,	// (0x0003d68d) list_single_uniindi_pane_t1

0x5789,	// (0x00035907) control_bg_pane

0xd534,	// (0x0003d6b2) bg_sctrl_sk_pane_cp1

0xd53d,	// (0x0003d6bb) bg_sctrl_sk_pane_cp2

0xd546,	// (0x0003d6c4) control_bg_pane_g1

0xd54f,	// (0x0003d6cd) control_bg_pane_g2

0x0001,

0xfd3a,	// (0x0003feb8) control_bg_pane_g

0xb55f,	// (0x0003b6dd) cell_indicator_nsta_pane_g1_ParamLimits

0xb56d,	// (0x0003b6eb) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa2,	// (0x0003fc20) cell_indicator_nsta_pane_g_ParamLimits

0x467e,	// (0x000347fc) form2_midp_time_pane_t1_ParamLimits

0x26e0,	// (0x0003285e) main_idle_act4_pane_ParamLimits

0x26e0,	// (0x0003285e) main_idle_act4_pane

0x8e47,	// (0x00038fc5) popup_tb_extension_window_ParamLimits

0xd3f4,	// (0x0003d572) tb_ext_find_pane_ParamLimits

0xd3f4,	// (0x0003d572) tb_ext_find_pane

0xd558,	// (0x0003d6d6) ai_gene_pane_1_cp1

0x8732,	// (0x000388b0) ai_gene_pane_2_cp1

0xd560,	// (0x0003d6de) list_single_idle_plugin_calendar_pane

0xd569,	// (0x0003d6e7) list_single_idle_plugin_notification_pane

0xd572,	// (0x0003d6f0) list_single_idle_plugin_player_pane

0xd57b,	// (0x0003d6f9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd57b,	// (0x0003d6f9) list_single_idle_plugin_shortcut_pane

0xd59d,	// (0x0003d71b) main_idle_act4_pane_t1

0xd5af,	// (0x0003d72d) main_idle_act4_pane_t2

0x0001,

0xfd3f,	// (0x0003febd) main_idle_act4_pane_t

0xd5c1,	// (0x0003d73f) middle_sk_idle_act4_pane_ParamLimits

0xd5c1,	// (0x0003d73f) middle_sk_idle_act4_pane

0xd5d7,	// (0x0003d755) popup_clock_digital_analogue_window_cp2

0xd5f1,	// (0x0003d76f) shortcut_wheel_idle_act4_pane_ParamLimits

0xd5f1,	// (0x0003d76f) shortcut_wheel_idle_act4_pane

0xbaec,	// (0x0003bc6a) shortcut_wheel_idle_act4_pane_g1

0xbaec,	// (0x0003bc6a) shortcut_wheel_idle_act4_pane_g2

0xbaec,	// (0x0003bc6a) shortcut_wheel_idle_act4_pane_g3

0xbaec,	// (0x0003bc6a) shortcut_wheel_idle_act4_pane_g4

0xbaec,	// (0x0003bc6a) shortcut_wheel_idle_act4_pane_g5

0xd605,	// (0x0003d783) shortcut_wheel_idle_act4_pane_g6

0xd60d,	// (0x0003d78b) shortcut_wheel_idle_act4_pane_g7

0xd615,	// (0x0003d793) shortcut_wheel_idle_act4_pane_g8

0xd61d,	// (0x0003d79b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd44,	// (0x0003fec2) shortcut_wheel_idle_act4_pane_g

0xbd93,	// (0x0003bf11) middle_sk_idle_act4_pane_g1_ParamLimits

0xbd93,	// (0x0003bf11) middle_sk_idle_act4_pane_g1

0xd681,	// (0x0003d7ff) middle_sk_idle_act4_pane_g2_ParamLimits

0xd681,	// (0x0003d7ff) middle_sk_idle_act4_pane_g2

0x0001,

0xfd67,	// (0x0003fee5) middle_sk_idle_act4_pane_g_ParamLimits

0xfd67,	// (0x0003fee5) middle_sk_idle_act4_pane_g

0xd68d,	// (0x0003d80b) middle_sk_idle_act4_pane_t1_ParamLimits

0xd68d,	// (0x0003d80b) middle_sk_idle_act4_pane_t1

0xd6aa,	// (0x0003d828) grid_ai_shortcut_pane_ParamLimits

0xd6aa,	// (0x0003d828) grid_ai_shortcut_pane

0xd6c3,	// (0x0003d841) list_highlight_pane_cp16_ParamLimits

0xd6c3,	// (0x0003d841) list_highlight_pane_cp16

0xd6d0,	// (0x0003d84e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd6d0,	// (0x0003d84e) list_single_idle_plugin_shortcut_pane_g1

0xd6dc,	// (0x0003d85a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd6dc,	// (0x0003d85a) list_single_idle_plugin_shortcut_pane_g2

0xd6f6,	// (0x0003d874) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd6f6,	// (0x0003d874) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6c,	// (0x0003feea) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6c,	// (0x0003feea) list_single_idle_plugin_shortcut_pane_g

0xd709,	// (0x0003d887) cell_ai_shortcut_pane_ParamLimits

0xd709,	// (0x0003d887) cell_ai_shortcut_pane

0xd72c,	// (0x0003d8aa) cell_ai_shortcut_pane_g1_ParamLimits

0xd72c,	// (0x0003d8aa) cell_ai_shortcut_pane_g1

0xd558,	// (0x0003d6d6) ai_gene_pane_1_cp2

0xd74e,	// (0x0003d8cc) ai_gene_pane_2_cp2

0xd756,	// (0x0003d8d4) list_highlight_pane_cp15

0xd75f,	// (0x0003d8dd) list_single_idle_plugin_calendar_pane_g1

0xd756,	// (0x0003d8d4) list_highlight_pane_cp17

0xd767,	// (0x0003d8e5) list_single_idle_plugin_calendar_pane_g1_copy1

0xd76f,	// (0x0003d8ed) list_single_idle_plugin_player_pane_g1

0xae7e,	// (0x0003affc) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd73,	// (0x0003fef1) list_single_idle_plugin_player_pane_g

0xd777,	// (0x0003d8f5) list_single_idle_plugin_player_pane_t1

0xd785,	// (0x0003d903) list_single_idle_plugin_player_pane_t2

0xd793,	// (0x0003d911) list_single_idle_plugin_player_pane_t3

0xd7a1,	// (0x0003d91f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd78,	// (0x0003fef6) list_single_idle_plugin_player_pane_t

0xd7af,	// (0x0003d92d) wait_bar_pane_cp15

0xd7b7,	// (0x0003d935) grid_ai_notification_pane

0xae7e,	// (0x0003affc) list_single_idle_plugin_notification_pane_g1

0xd7c0,	// (0x0003d93e) cell_ai_notification_pane_ParamLimits

0xd7c0,	// (0x0003d93e) cell_ai_notification_pane

0xd7cd,	// (0x0003d94b) cell_ai_notification_pane_g1

0xd7d5,	// (0x0003d953) cell_ai_notification_pane_t1

0xd7e3,	// (0x0003d961) tb_ext_find_button_pane

0xd7eb,	// (0x0003d969) tb_ext_find_pane_g1

0xd7f3,	// (0x0003d971) tb_ext_find_pane_t1

0x2e47,	// (0x00032fc5) tb_ext_find_button_pane_g1

0xd801,	// (0x0003d97f) tb_ext_find_button_pane_g2

0x0001,

0xfd81,	// (0x0003feff) tb_ext_find_button_pane_g

0xd59d,	// (0x0003d71b) main_idle_act4_pane_t1_ParamLimits

0xd5af,	// (0x0003d72d) main_idle_act4_pane_t2_ParamLimits

0xfd3f,	// (0x0003febd) main_idle_act4_pane_t_ParamLimits

0xd5d7,	// (0x0003d755) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd5e5,	// (0x0003d763) sat_plugin_idle_act4_pane_ParamLimits

0xd5e5,	// (0x0003d763) sat_plugin_idle_act4_pane

0xd80a,	// (0x0003d988) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd80a,	// (0x0003d988) sat_plugin_idle_act4_pane_t1

0xd81d,	// (0x0003d99b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd81d,	// (0x0003d99b) sat_plugin_idle_act4_pane_t2

0xd830,	// (0x0003d9ae) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd830,	// (0x0003d9ae) sat_plugin_idle_act4_pane_t3

0xd843,	// (0x0003d9c1) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd843,	// (0x0003d9c1) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd86,	// (0x0003ff04) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd86,	// (0x0003ff04) sat_plugin_idle_act4_pane_t

0x584e,	// (0x000359cc) popup_battery_window_ParamLimits

0x584e,	// (0x000359cc) popup_battery_window

0x2483,	// (0x00032601) bg_popup_sub_pane_cp25_ParamLimits

0x2483,	// (0x00032601) bg_popup_sub_pane_cp25

0xd856,	// (0x0003d9d4) popup_battery_window_g1_ParamLimits

0xd856,	// (0x0003d9d4) popup_battery_window_g1

0xd899,	// (0x0003da17) popup_battery_window_t1_ParamLimits

0xd899,	// (0x0003da17) popup_battery_window_t1

0xd8ab,	// (0x0003da29) popup_battery_window_t2_ParamLimits

0xd8ab,	// (0x0003da29) popup_battery_window_t2

0x0001,

0xfd8f,	// (0x0003ff0d) popup_battery_window_t_ParamLimits

0xfd8f,	// (0x0003ff0d) popup_battery_window_t

0x85fd,	// (0x0003877b) midp_canvas_pane_ParamLimits

0x8674,	// (0x000387f2) midp_keypad_pane_ParamLimits

0x8674,	// (0x000387f2) midp_keypad_pane

0x896f,	// (0x00038aed) main_midp_pane_ParamLimits

0xb5eb,	// (0x0003b769) signal_pane_g2_cp_ParamLimits

0xd8c8,	// (0x0003da46) aid_size_cell_midp_keypad_ParamLimits

0xd8c8,	// (0x0003da46) aid_size_cell_midp_keypad

0xd8e2,	// (0x0003da60) midp_keyp_game_grid_pane_ParamLimits

0xd8e2,	// (0x0003da60) midp_keyp_game_grid_pane

0xd902,	// (0x0003da80) midp_keyp_rocker_pane_ParamLimits

0xd902,	// (0x0003da80) midp_keyp_rocker_pane

0xd92d,	// (0x0003daab) midp_keyp_sk_left_pane_ParamLimits

0xd92d,	// (0x0003daab) midp_keyp_sk_left_pane

0xd987,	// (0x0003db05) midp_keyp_sk_right_pane_ParamLimits

0xd987,	// (0x0003db05) midp_keyp_sk_right_pane

0xf439,	// (0x0003f5b7) bg_button_pane_cp03

0xd9e1,	// (0x0003db5f) midp_keyp_sk_left_pane_g1

0xf439,	// (0x0003f5b7) bg_button_pane_cp04

0xd9e1,	// (0x0003db5f) midp_keyp_sk_right_pane_g1

0xbaec,	// (0x0003bc6a) midp_keyp_rocker_pane_g1

0xd9ea,	// (0x0003db68) keyp_game_cell_pane_ParamLimits

0xd9ea,	// (0x0003db68) keyp_game_cell_pane

0xf439,	// (0x0003f5b7) bg_button_pane_cp02

0xd9fd,	// (0x0003db7b) keyp_game_cell_pane_g1

0x5898,	// (0x00035a16) popup_fep_vkb2_window_ParamLimits

0x5898,	// (0x00035a16) popup_fep_vkb2_window

0x7c1c,	// (0x00037d9a) aid_size_cell_vkb2_ParamLimits

0x7c1c,	// (0x00037d9a) aid_size_cell_vkb2

0x7c70,	// (0x00037dee) popup_fep_vkb2_window_g1_ParamLimits

0x7c70,	// (0x00037dee) popup_fep_vkb2_window_g1

0x7cb8,	// (0x00037e36) vkb2_area_bottom_pane_ParamLimits

0x7cb8,	// (0x00037e36) vkb2_area_bottom_pane

0x7d0c,	// (0x00037e8a) vkb2_area_keypad_pane_ParamLimits

0x7d0c,	// (0x00037e8a) vkb2_area_keypad_pane

0x7d52,	// (0x00037ed0) vkb2_area_top_pane_ParamLimits

0x7d52,	// (0x00037ed0) vkb2_area_top_pane

0x7dcc,	// (0x00037f4a) vkb2_top_entry_pane_ParamLimits

0x7dcc,	// (0x00037f4a) vkb2_top_entry_pane

0x7df6,	// (0x00037f74) vkb2_top_grid_left_pane_ParamLimits

0x7df6,	// (0x00037f74) vkb2_top_grid_left_pane

0x7e14,	// (0x00037f92) vkb2_top_grid_right_pane_ParamLimits

0x7e14,	// (0x00037f92) vkb2_top_grid_right_pane

0x7e32,	// (0x00037fb0) vkb2_cell_keypad_pane_ParamLimits

0x7e32,	// (0x00037fb0) vkb2_cell_keypad_pane

0x7f03,	// (0x00038081) vkb2_area_bottom_grid_pane_ParamLimits

0x7f03,	// (0x00038081) vkb2_area_bottom_grid_pane

0x7f29,	// (0x000380a7) vkb2_area_bottom_pane_g1_ParamLimits

0x7f29,	// (0x000380a7) vkb2_area_bottom_pane_g1

0x7f4d,	// (0x000380cb) vkb2_area_bottom_pane_g2_ParamLimits

0x7f4d,	// (0x000380cb) vkb2_area_bottom_pane_g2

0x7f7b,	// (0x000380f9) vkb2_area_bottom_pane_g3_ParamLimits

0x7f7b,	// (0x000380f9) vkb2_area_bottom_pane_g3

0x0002,

0xfd94,	// (0x0003ff12) vkb2_area_bottom_pane_g_ParamLimits

0xfd94,	// (0x0003ff12) vkb2_area_bottom_pane_g

0x7fdc,	// (0x0003815a) vkb2_top_cell_left_pane_ParamLimits

0x7fdc,	// (0x0003815a) vkb2_top_cell_left_pane

0xda0e,	// (0x0003db8c) vkb2_top_entry_pane_g1_ParamLimits

0xda0e,	// (0x0003db8c) vkb2_top_entry_pane_g1

0xda1c,	// (0x0003db9a) vkb2_top_entry_pane_t1_ParamLimits

0xda1c,	// (0x0003db9a) vkb2_top_entry_pane_t1

0xda4e,	// (0x0003dbcc) vkb2_top_entry_pane_t2_ParamLimits

0xda4e,	// (0x0003dbcc) vkb2_top_entry_pane_t2

0xda80,	// (0x0003dbfe) vkb2_top_entry_pane_t3_ParamLimits

0xda80,	// (0x0003dbfe) vkb2_top_entry_pane_t3

0x0002,

0xfd9b,	// (0x0003ff19) vkb2_top_entry_pane_t_ParamLimits

0xfd9b,	// (0x0003ff19) vkb2_top_entry_pane_t

0x8029,	// (0x000381a7) vkb2_top_grid_right_pane_g1_ParamLimits

0x8029,	// (0x000381a7) vkb2_top_grid_right_pane_g1

0x803f,	// (0x000381bd) vkb2_top_grid_right_pane_g2_ParamLimits

0x803f,	// (0x000381bd) vkb2_top_grid_right_pane_g2

0x8057,	// (0x000381d5) vkb2_top_grid_right_pane_g3_ParamLimits

0x8057,	// (0x000381d5) vkb2_top_grid_right_pane_g3

0x806f,	// (0x000381ed) vkb2_top_grid_right_pane_g4_ParamLimits

0x806f,	// (0x000381ed) vkb2_top_grid_right_pane_g4

0x0003,

0xfda2,	// (0x0003ff20) vkb2_top_grid_right_pane_g_ParamLimits

0xfda2,	// (0x0003ff20) vkb2_top_grid_right_pane_g

0x8085,	// (0x00038203) vkb2_top_cell_left_pane_g1

0x809c,	// (0x0003821a) vkb2_cell_keypad_pane_g1_ParamLimits

0x809c,	// (0x0003821a) vkb2_cell_keypad_pane_g1

0xdaa4,	// (0x0003dc22) vkb2_cell_keypad_pane_t1_ParamLimits

0xdaa4,	// (0x0003dc22) vkb2_cell_keypad_pane_t1

0x80aa,	// (0x00038228) vkb2_cell_bottom_grid_pane_ParamLimits

0x80aa,	// (0x00038228) vkb2_cell_bottom_grid_pane

0x80e3,	// (0x00038261) vkb2_cell_bottom_grid_pane_g1

0xd625,	// (0x0003d7a3) aid_call2_pane_cp02

0xd62d,	// (0x0003d7ab) aid_call_pane_cp02

0xd635,	// (0x0003d7b3) clock_digital_number_pane_cp10

0xd63d,	// (0x0003d7bb) clock_digital_number_pane_cp11

0xd645,	// (0x0003d7c3) clock_digital_number_pane_cp12

0xd64d,	// (0x0003d7cb) clock_digital_number_pane_cp13

0xd655,	// (0x0003d7d3) clock_digital_separator_pane_cp10

0x2e47,	// (0x00032fc5) popup_clock_digital_analogue_window_cp2_g1

0x2e47,	// (0x00032fc5) popup_clock_digital_analogue_window_cp2_g2

0xd65d,	// (0x0003d7db) popup_clock_digital_analogue_window_cp2_g3

0x2e47,	// (0x00032fc5) popup_clock_digital_analogue_window_cp2_g4

0xd65d,	// (0x0003d7db) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd57,	// (0x0003fed5) popup_clock_digital_analogue_window_cp2_g

0xd665,	// (0x0003d7e3) popup_clock_digital_analogue_window_cp2_t1

0xd673,	// (0x0003d7f1) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd62,	// (0x0003fee0) popup_clock_digital_analogue_window_cp2_t

0xbaec,	// (0x0003bc6a) clock_digital_number_pane_cp10_g1

0xbaec,	// (0x0003bc6a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3e,	// (0x0003fcbc) clock_digital_number_pane_cp10_g

0xbaec,	// (0x0003bc6a) clock_digital_separator_pane_cp10_g1

0xbaec,	// (0x0003bc6a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3e,	// (0x0003fcbc) clock_digital_separator_pane_cp10_g

0xd4a0,	// (0x0003d61e) uniindi_top_pane_g3

0xd4b1,	// (0x0003d62f) uniindi_top_pane_g4

0x7ebd,	// (0x0003803b) vkb2_row_keypad_pane_ParamLimits

0x7ebd,	// (0x0003803b) vkb2_row_keypad_pane

0x80ff,	// (0x0003827d) vkb2_cell_t_keypad_pane_ParamLimits

0x80ff,	// (0x0003827d) vkb2_cell_t_keypad_pane

0x810f,	// (0x0003828d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x810f,	// (0x0003828d) vkb2_cell_t_keypad_pane_cp08

0x8124,	// (0x000382a2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8124,	// (0x000382a2) vkb2_cell_t_keypad_pane_cp09

0x8138,	// (0x000382b6) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8138,	// (0x000382b6) vkb2_cell_t_keypad_pane_cp01

0x8149,	// (0x000382c7) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8149,	// (0x000382c7) vkb2_cell_t_keypad_pane_cp02

0x815a,	// (0x000382d8) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x815a,	// (0x000382d8) vkb2_cell_t_keypad_pane_cp03

0x816b,	// (0x000382e9) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x816b,	// (0x000382e9) vkb2_cell_t_keypad_pane_cp04

0x817c,	// (0x000382fa) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x817c,	// (0x000382fa) vkb2_cell_t_keypad_pane_cp05

0x818d,	// (0x0003830b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x818d,	// (0x0003830b) vkb2_cell_t_keypad_pane_cp06

0x81a0,	// (0x0003831e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x81a0,	// (0x0003831e) vkb2_cell_t_keypad_pane_cp07

0x81b5,	// (0x00038333) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x81b5,	// (0x00038333) vkb2_cell_t_keypad_pane_cp10

0x77f1,	// (0x0003796f) vkb2_cell_t_keypad_pane_g1

0xdabb,	// (0x0003dc39) vkb2_cell_t_keypad_pane_t1

0x5789,	// (0x00035907) popup_grid_graphic2_window

0xdacd,	// (0x0003dc4b) aid_size_cell_graphic2_ParamLimits

0xdacd,	// (0x0003dc4b) aid_size_cell_graphic2

0xdb05,	// (0x0003dc83) bg_popup_window_pane_cp21_ParamLimits

0xdb05,	// (0x0003dc83) bg_popup_window_pane_cp21

0xdb13,	// (0x0003dc91) graphic2_pages_pane_ParamLimits

0xdb13,	// (0x0003dc91) graphic2_pages_pane

0xdb59,	// (0x0003dcd7) grid_graphic2_control_pane_ParamLimits

0xdb59,	// (0x0003dcd7) grid_graphic2_control_pane

0xdb97,	// (0x0003dd15) grid_graphic2_pane_ParamLimits

0xdb97,	// (0x0003dd15) grid_graphic2_pane

0xdc0d,	// (0x0003dd8b) cell_graphic2_pane

0xf439,	// (0x0003f5b7) main_comp_mode_pane

0xcd11,	// (0x0003ce8f) list_ai3_gene_pane_ParamLimits

0xd0d9,	// (0x0003d257) bg_popup_window_pane_cp19_ParamLimits

0xd0e5,	// (0x0003d263) bg_touch_area_indi_pane_ParamLimits

0xd0e5,	// (0x0003d263) bg_touch_area_indi_pane

0xd0fb,	// (0x0003d279) bg_touch_area_indi_pane_cp01_ParamLimits

0xd0fb,	// (0x0003d279) bg_touch_area_indi_pane_cp01

0xd113,	// (0x0003d291) bg_touch_area_indi_pane_cp02_ParamLimits

0xd113,	// (0x0003d291) bg_touch_area_indi_pane_cp02

0xd12d,	// (0x0003d2ab) bg_touch_area_indi_pane_cp03_ParamLimits

0xd12d,	// (0x0003d2ab) bg_touch_area_indi_pane_cp03

0xd147,	// (0x0003d2c5) popup_slider_window_g1_ParamLimits

0xd163,	// (0x0003d2e1) popup_slider_window_g2_ParamLimits

0xd17f,	// (0x0003d2fd) popup_slider_window_g3_ParamLimits

0xfcec,	// (0x0003fe6a) popup_slider_window_g_ParamLimits

0xd1db,	// (0x0003d359) popup_slider_window_t1_ParamLimits

0xd24f,	// (0x0003d3cd) small_volume_slider_vertical_pane_ParamLimits

0xdc0d,	// (0x0003dd8b) cell_graphic2_pane_ParamLimits

0xdc5f,	// (0x0003dddd) bg_button_pane_cp10_ParamLimits

0xdc5f,	// (0x0003dddd) bg_button_pane_cp10

0xdc74,	// (0x0003ddf2) bg_button_pane_cp11_ParamLimits

0xdc74,	// (0x0003ddf2) bg_button_pane_cp11

0xdc89,	// (0x0003de07) graphic2_pages_pane_g1_ParamLimits

0xdc89,	// (0x0003de07) graphic2_pages_pane_g1

0xdca4,	// (0x0003de22) graphic2_pages_pane_g2_ParamLimits

0xdca4,	// (0x0003de22) graphic2_pages_pane_g2

0x0001,

0xfdb0,	// (0x0003ff2e) graphic2_pages_pane_g_ParamLimits

0xfdb0,	// (0x0003ff2e) graphic2_pages_pane_g

0xdcbc,	// (0x0003de3a) graphic2_pages_pane_t1_ParamLimits

0xdcbc,	// (0x0003de3a) graphic2_pages_pane_t1

0xdcd2,	// (0x0003de50) cell_graphic2_control_pane_ParamLimits

0xdcd2,	// (0x0003de50) cell_graphic2_control_pane

0xdcf5,	// (0x0003de73) cell_graphic2_pane_g1_ParamLimits

0xdcf5,	// (0x0003de73) cell_graphic2_pane_g1

0xdd02,	// (0x0003de80) cell_graphic2_pane_g2_ParamLimits

0xdd02,	// (0x0003de80) cell_graphic2_pane_g2

0xdd0f,	// (0x0003de8d) cell_graphic2_pane_g3_ParamLimits

0xdd0f,	// (0x0003de8d) cell_graphic2_pane_g3

0xdd1c,	// (0x0003de9a) cell_graphic2_pane_g4_ParamLimits

0xdd1c,	// (0x0003de9a) cell_graphic2_pane_g4

0xdd29,	// (0x0003dea7) cell_graphic2_pane_g5_ParamLimits

0xdd29,	// (0x0003dea7) cell_graphic2_pane_g5

0x0004,

0xfdb5,	// (0x0003ff33) cell_graphic2_pane_g_ParamLimits

0xfdb5,	// (0x0003ff33) cell_graphic2_pane_g

0xdd44,	// (0x0003dec2) cell_graphic2_pane_t1_ParamLimits

0xdd44,	// (0x0003dec2) cell_graphic2_pane_t1

0x9524,	// (0x000396a2) grid_highlight_pane_cp11_ParamLimits

0x9524,	// (0x000396a2) grid_highlight_pane_cp11

0x2483,	// (0x00032601) bg_button_pane_cp05

0xdd6d,	// (0x0003deeb) cell_graphic2_control_pane_g1

0xbaec,	// (0x0003bc6a) bg_touch_area_indi_pane_g1

0xdd95,	// (0x0003df13) aid_cmod_rocker_key_size

0xdd9f,	// (0x0003df1d) aid_cmode_itu_key_size

0xdda9,	// (0x0003df27) main_cmode_video_pane

0xddb3,	// (0x0003df31) main_comp_mode_itu_pane

0xddbf,	// (0x0003df3d) main_comp_mode_rocker_pane

0xddcb,	// (0x0003df49) cell_cmode_rocker_pane_ParamLimits

0xddcb,	// (0x0003df49) cell_cmode_rocker_pane

0xdddf,	// (0x0003df5d) cell_cmode_itu_pane_ParamLimits

0xdddf,	// (0x0003df5d) cell_cmode_itu_pane

0x2965,	// (0x00032ae3) bg_button_pane_cp06_ParamLimits

0x2965,	// (0x00032ae3) bg_button_pane_cp06

0xbd93,	// (0x0003bf11) cell_cmode_rocker_pane_g1_ParamLimits

0xbd93,	// (0x0003bf11) cell_cmode_rocker_pane_g1

0xd2f6,	// (0x0003d474) cell_cmode_rocker_pane_g2_ParamLimits

0xd2f6,	// (0x0003d474) cell_cmode_rocker_pane_g2

0x0001,

0xfdc5,	// (0x0003ff43) cell_cmode_rocker_pane_g_ParamLimits

0xfdc5,	// (0x0003ff43) cell_cmode_rocker_pane_g

0xf439,	// (0x0003f5b7) bg_button_pane_cp07

0xddf6,	// (0x0003df74) cell_cmode_itu_pane_g1

0xddff,	// (0x0003df7d) cell_cmode_itu_pane_t1

0xde0d,	// (0x0003df8b) cell_cmode_itu_pane_t2

0x0001,

0xfdca,	// (0x0003ff48) cell_cmode_itu_pane_t

0xd524,	// (0x0003d6a2) aid_touch_ctrl_left

0xd52c,	// (0x0003d6aa) aid_touch_ctrl_right

0xf439,	// (0x0003f5b7) compa_mode_pane

0xde1b,	// (0x0003df99) aid_cmod_rocker_key_size_cp

0xde25,	// (0x0003dfa3) aid_cmode_itu_key_size_cp

0xde2f,	// (0x0003dfad) compa_mode_pane_g1

0xde37,	// (0x0003dfb5) compa_mode_pane_g2

0xde3f,	// (0x0003dfbd) compa_mode_pane_g3

0x0002,

0xfdcf,	// (0x0003ff4d) compa_mode_pane_g

0xde47,	// (0x0003dfc5) main_comp_mode_itu_pane_cp

0xde4f,	// (0x0003dfcd) main_comp_mode_rocker_pane_cp

0xde57,	// (0x0003dfd5) cell_cmode_itu_pane_cp_ParamLimits

0xde57,	// (0x0003dfd5) cell_cmode_itu_pane_cp

0xde6c,	// (0x0003dfea) cell_cmode_rocker_pane_cp_ParamLimits

0xde6c,	// (0x0003dfea) cell_cmode_rocker_pane_cp

0x2965,	// (0x00032ae3) bg_button_pane_cp06_cp_ParamLimits

0x2965,	// (0x00032ae3) bg_button_pane_cp06_cp

0xbd93,	// (0x0003bf11) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbd93,	// (0x0003bf11) cell_cmode_rocker_pane_g1_cp

0xbaec,	// (0x0003bc6a) cell_cmode_rocker_pane_g2_cp

0xf439,	// (0x0003f5b7) bg_button_pane_cp07_cp

0xde7e,	// (0x0003dffc) cell_cmode_itu_pane_g1_cp

0xde87,	// (0x0003e005) cell_cmode_itu_pane_t1_cp

0xde87,	// (0x0003e005) cell_cmode_itu_pane_t2_cp

0xaa01,	// (0x0003ab7f) settings_code_pane_cp2

0x2350,	// (0x000324ce) bg_popup_window_pane_cp3_ParamLimits

0x2671,	// (0x000327ef) heading_pane_cp3_ParamLimits

0x267d,	// (0x000327fb) listscroll_popup_graphic_pane_ParamLimits

0x7584,	// (0x00037702) fep_hwr_aid_pane_ParamLimits

0x7b75,	// (0x00037cf3) aid_touch_sctrl_top_ParamLimits

0x7b90,	// (0x00037d0e) sctrl_sk_top_pane_g1_ParamLimits

0x77f1,	// (0x0003796f) sctrl_sk_top_pane_g2_ParamLimits

0xfd05,	// (0x0003fe83) sctrl_sk_top_pane_g_ParamLimits

0x7b9d,	// (0x00037d1b) sctrl_sk_top_pane_t1_ParamLimits

0x7b75,	// (0x00037cf3) aid_touch_sctrl_bottom_ParamLimits

0x7b9d,	// (0x00037d1b) sctrl_sk_bottom_pane_t1_ParamLimits

0xd46a,	// (0x0003d5e8) aid_area_touch_clock

0x7d94,	// (0x00037f12) aid_vkb2_area_top_pane_cell_ParamLimits

0x7d94,	// (0x00037f12) aid_vkb2_area_top_pane_cell

0x7edf,	// (0x0003805d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7edf,	// (0x0003805d) aid_vkb2_area_bottom_pane_cell

0xda06,	// (0x0003db84) popup_char_count_window

0xde95,	// (0x0003e013) popup_char_count_window_g1

0xde9e,	// (0x0003e01c) popup_char_count_window_g2

0xdea7,	// (0x0003e025) popup_char_count_window_g3

0x0002,

0xfdd6,	// (0x0003ff54) popup_char_count_window_g

0xdeb0,	// (0x0003e02e) popup_char_count_window_t1

0x7c4e,	// (0x00037dcc) popup_fep_char_preview_window_ParamLimits

0x7c4e,	// (0x00037dcc) popup_fep_char_preview_window

0x7db2,	// (0x00037f30) vkb2_top_candi_pane_ParamLimits

0x7db2,	// (0x00037f30) vkb2_top_candi_pane

0xdebe,	// (0x0003e03c) cell_vkb2_top_candi_pane_ParamLimits

0xdebe,	// (0x0003e03c) cell_vkb2_top_candi_pane

0x81ca,	// (0x00038348) bg_popup_fep_char_preview_window_ParamLimits

0x81ca,	// (0x00038348) bg_popup_fep_char_preview_window

0x81d8,	// (0x00038356) popup_fep_char_preview_window_t1_ParamLimits

0x81d8,	// (0x00038356) popup_fep_char_preview_window_t1

0xdf0f,	// (0x0003e08d) bg_popup_fep_char_preview_window_g1

0xdf17,	// (0x0003e095) bg_popup_fep_char_preview_window_g2

0xdf1f,	// (0x0003e09d) bg_popup_fep_char_preview_window_g3

0xdf27,	// (0x0003e0a5) bg_popup_fep_char_preview_window_g4

0xdf2f,	// (0x0003e0ad) bg_popup_fep_char_preview_window_g5

0x8212,	// (0x00038390) bg_popup_fep_char_preview_window_g6

0xdf37,	// (0x0003e0b5) bg_popup_fep_char_preview_window_g7

0xdf3f,	// (0x0003e0bd) bg_popup_fep_char_preview_window_g8

0xdf47,	// (0x0003e0c5) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddd,	// (0x0003ff5b) bg_popup_fep_char_preview_window_g

0x77f1,	// (0x0003796f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x77f1,	// (0x0003796f) cell_vkb2_top_candi_pane_g1

0x77ff,	// (0x0003797d) cell_vkb2_top_candi_pane_g2_ParamLimits

0x77ff,	// (0x0003797d) cell_vkb2_top_candi_pane_g2

0xd878,	// (0x0003d9f6) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd878,	// (0x0003d9f6) cell_vkb2_top_candi_pane_g3

0x821a,	// (0x00038398) cell_vkb2_top_candi_pane_g4_ParamLimits

0x821a,	// (0x00038398) cell_vkb2_top_candi_pane_g4

0xc2b2,	// (0x0003c430) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc2b2,	// (0x0003c430) cell_vkb2_top_candi_pane_g5

0x823b,	// (0x000383b9) cell_vkb2_top_candi_pane_g6_ParamLimits

0x823b,	// (0x000383b9) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf0,	// (0x0003ff6e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf0,	// (0x0003ff6e) cell_vkb2_top_candi_pane_g

0x8249,	// (0x000383c7) cell_vkb2_top_candi_pane_t1

0x735b,	// (0x000374d9) aid_size_touch_slider_mark_ParamLimits

0x735b,	// (0x000374d9) aid_size_touch_slider_mark

0xdb49,	// (0x0003dcc7) grid_graphic2_catg_pane_ParamLimits

0xdb49,	// (0x0003dcc7) grid_graphic2_catg_pane

0xdbe7,	// (0x0003dd65) popup_grid_graphic2_window_t1_ParamLimits

0xdbe7,	// (0x0003dd65) popup_grid_graphic2_window_t1

0xdbf9,	// (0x0003dd77) popup_grid_graphic2_window_t2_ParamLimits

0xdbf9,	// (0x0003dd77) popup_grid_graphic2_window_t2

0x0001,

0xfdab,	// (0x0003ff29) popup_grid_graphic2_window_t_ParamLimits

0xfdab,	// (0x0003ff29) popup_grid_graphic2_window_t

0x2483,	// (0x00032601) bg_button_pane_cp05_ParamLimits

0xdd6d,	// (0x0003deeb) cell_graphic2_control_pane_g1_ParamLimits

0xdf4f,	// (0x0003e0cd) cell_graphic2_catg_pane_ParamLimits

0xdf4f,	// (0x0003e0cd) cell_graphic2_catg_pane

0xf439,	// (0x0003f5b7) bg_button_pane_cp12

0xdf61,	// (0x0003e0df) cell_graphic2_catg_pane_g1

0xd436,	// (0x0003d5b4) cell_tb_ext_pane_t1_ParamLimits

0x7ffc,	// (0x0003817a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7ffc,	// (0x0003817a) vkb2_top_cell_right_narrow_pane

0x8014,	// (0x00038192) vkb2_top_cell_right_wide_pane_ParamLimits

0x8014,	// (0x00038192) vkb2_top_cell_right_wide_pane

0x7576,	// (0x000376f4) bg_vkb2_func_pane_ParamLimits

0x7576,	// (0x000376f4) bg_vkb2_func_pane

0x8085,	// (0x00038203) vkb2_top_cell_left_pane_g1_ParamLimits

0x7576,	// (0x000376f4) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7576,	// (0x000376f4) bg_vkb2_fuc_pane_cp03

0x80e3,	// (0x00038261) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x94b8,	// (0x00039636) bg_vkb2_func_pane_g1

0x94c0,	// (0x0003963e) bg_vkb2_func_pane_g2

0x94d0,	// (0x0003964e) bg_vkb2_func_pane_g3

0x94c8,	// (0x00039646) bg_vkb2_func_pane_g4

0x94d8,	// (0x00039656) bg_vkb2_func_pane_g5

0x94e0,	// (0x0003965e) bg_vkb2_func_pane_g6

0x94e8,	// (0x00039666) bg_vkb2_func_pane_g7

0x94f0,	// (0x0003966e) bg_vkb2_func_pane_g8

0x94b0,	// (0x0003962e) bg_vkb2_func_pane_g9

0x0008,

0xfdfd,	// (0x0003ff7b) bg_vkb2_func_pane_g

0x7576,	// (0x000376f4) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7576,	// (0x000376f4) bg_vkb2_fuc_pane_cp01

0x8085,	// (0x00038203) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8085,	// (0x00038203) vkb2_top_cell_right_wide_pane_g1

0x7576,	// (0x000376f4) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7576,	// (0x000376f4) bg_vkb2_fuc_pane_cp02

0x80e3,	// (0x00038261) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x80e3,	// (0x00038261) vkb2_top_cell_right_narrow_pane_g1

0xd057,	// (0x0003d1d5) aid_touch_area_decrease_ParamLimits

0xd057,	// (0x0003d1d5) aid_touch_area_decrease

0xd07b,	// (0x0003d1f9) aid_touch_area_increase_ParamLimits

0xd07b,	// (0x0003d1f9) aid_touch_area_increase

0xd087,	// (0x0003d205) aid_touch_area_mute_ParamLimits

0xd087,	// (0x0003d205) aid_touch_area_mute

0xd0ab,	// (0x0003d229) aid_touch_area_slider_ParamLimits

0xd0ab,	// (0x0003d229) aid_touch_area_slider

0xd19b,	// (0x0003d319) popup_slider_window_g4_ParamLimits

0xd19b,	// (0x0003d319) popup_slider_window_g4

0xd1a7,	// (0x0003d325) popup_slider_window_g5_ParamLimits

0xd1a7,	// (0x0003d325) popup_slider_window_g5

0xd1c9,	// (0x0003d347) popup_slider_window_g6_ParamLimits

0xd1c9,	// (0x0003d347) popup_slider_window_g6

0xd209,	// (0x0003d387) popup_slider_window_t2_ParamLimits

0xd209,	// (0x0003d387) popup_slider_window_t2

0x0001,

0xfcf9,	// (0x0003fe77) popup_slider_window_t_ParamLimits

0xfcf9,	// (0x0003fe77) popup_slider_window_t

0xd221,	// (0x0003d39f) slider_pane_ParamLimits

0xd221,	// (0x0003d39f) slider_pane

0xdf6a,	// (0x0003e0e8) slider_pane_g1_ParamLimits

0xdf6a,	// (0x0003e0e8) slider_pane_g1

0xdf7e,	// (0x0003e0fc) slider_pane_g2_ParamLimits

0xdf7e,	// (0x0003e0fc) slider_pane_g2

0xdf94,	// (0x0003e112) slider_pane_g3_ParamLimits

0xdf94,	// (0x0003e112) slider_pane_g3

0x0003,

0xfe10,	// (0x0003ff8e) slider_pane_g_ParamLimits

0xfe10,	// (0x0003ff8e) slider_pane_g

0x8ea9,	// (0x00039027) popup_tb_float_extension_window_ParamLimits

0x8ea9,	// (0x00039027) popup_tb_float_extension_window

0xdfc0,	// (0x0003e13e) aid_size_cell_tb_float_ext

0xf439,	// (0x0003f5b7) bg_popup_sub_window_cp28

0xdfcc,	// (0x0003e14a) grid_tb_float_ext_pane

0xdfd8,	// (0x0003e156) cell_tb_float_ext_pane_ParamLimits

0xdfd8,	// (0x0003e156) cell_tb_float_ext_pane

0xdff4,	// (0x0003e172) cell_tb_float_ext_pane_g1

0xdffd,	// (0x0003e17b) grid_highlight_pane_cp12

0x76cb,	// (0x00037849) cell_last_hwr_side_pane_ParamLimits

0x76cb,	// (0x00037849) cell_last_hwr_side_pane

0xbaec,	// (0x0003bc6a) cell_last_hwr_side_pane_g1

0xe006,	// (0x0003e184) cell_last_hwr_side_pane_g2

0x0001,

0xfe19,	// (0x0003ff97) cell_last_hwr_side_pane_g

0x7fab,	// (0x00038129) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7fab,	// (0x00038129) vkb2_area_bottom_space_btn_pane

0x77f1,	// (0x0003796f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdabb,	// (0x0003dc39) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8249,	// (0x000383c7) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8267,	// (0x000383e5) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8267,	// (0x000383e5) vkb2_area_bottom_space_btn_pane_g1

0x82a1,	// (0x0003841f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x82a1,	// (0x0003841f) vkb2_area_bottom_space_btn_pane_g2

0x82d7,	// (0x00038455) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x82d7,	// (0x00038455) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1e,	// (0x0003ff9c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1e,	// (0x0003ff9c) vkb2_area_bottom_space_btn_pane_g

0x763b,	// (0x000377b9) cel_fep_hwr_func_pane_ParamLimits

0x763b,	// (0x000377b9) cel_fep_hwr_func_pane

0x7677,	// (0x000377f5) cell_hwr_side_button_pane_ParamLimits

0x7677,	// (0x000377f5) cell_hwr_side_button_pane

0xd46a,	// (0x0003d5e8) aid_area_touch_clock_ParamLimits

0x2483,	// (0x00032601) bg_uniindi_top_pane_ParamLimits

0xd47e,	// (0x0003d5fc) uniindi_top_pane_g1_ParamLimits

0xd494,	// (0x0003d612) uniindi_top_pane_g2_ParamLimits

0xd4a0,	// (0x0003d61e) uniindi_top_pane_g3_ParamLimits

0xd4b1,	// (0x0003d62f) uniindi_top_pane_g4_ParamLimits

0xfd31,	// (0x0003feaf) uniindi_top_pane_g_ParamLimits

0xd4be,	// (0x0003d63c) uniindi_top_pane_t1_ParamLimits

0x2483,	// (0x00032601) bg_vkb2_func_pane_cp01_ParamLimits

0x2483,	// (0x00032601) bg_vkb2_func_pane_cp01

0xe00f,	// (0x0003e18d) cel_fep_hwr_func_pane_g1_ParamLimits

0xe00f,	// (0x0003e18d) cel_fep_hwr_func_pane_g1

0x2483,	// (0x00032601) bg_vkb2_func_pane_cp02_ParamLimits

0x2483,	// (0x00032601) bg_vkb2_func_pane_cp02

0xe00f,	// (0x0003e18d) cell_hwr_side_button_pane_g1_ParamLimits

0xe00f,	// (0x0003e18d) cell_hwr_side_button_pane_g1

0x9331,	// (0x000394af) status_pane_g4_ParamLimits

0x9331,	// (0x000394af) status_pane_g4

0x934b,	// (0x000394c9) status_pane_t1

0xb88b,	// (0x0003ba09) form2_midp_gauge_slider_cont_pane

0xb893,	// (0x0003ba11) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb8a5,	// (0x0003ba23) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb8b7,	// (0x0003ba35) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf1,	// (0x0003fc6f) form2_midp_gauge_slider_pane_t_ParamLimits

0xb8c9,	// (0x0003ba47) form2_midp_slider_pane_ParamLimits

0x7c0e,	// (0x00037d8c) aid_size_cell_func_vkb2_ParamLimits

0x7c0e,	// (0x00037d8c) aid_size_cell_func_vkb2

0xdfac,	// (0x0003e12a) slider_pane_g4_ParamLimits

0xdfac,	// (0x0003e12a) slider_pane_g4

0x8321,	// (0x0003849f) form2_midp_gauge_slider_pane_t2_cp01

0x832f,	// (0x000384ad) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x832f,	// (0x000384ad) form2_midp_gauge_slider_pane_t3_cp01

0x834c,	// (0x000384ca) form2_midp_slider_pane_cp01

0xf439,	// (0x0003f5b7) navi_smil_pane

0xe048,	// (0x0003e1c6) navi_smil_pane_g1

0xe050,	// (0x0003e1ce) navi_smil_pane_t1

0xe01d,	// (0x0003e19b) form2_midp_slider_pane_g1

0xe026,	// (0x0003e1a4) form2_midp_slider_pane_g2

0xe02e,	// (0x0003e1ac) form2_midp_slider_pane_g3

0xe01d,	// (0x0003e19b) form2_midp_slider_pane_g4

0xe036,	// (0x0003e1b4) form2_midp_slider_pane_g5

0x0004,

0xfe27,	// (0x0003ffa5) form2_midp_slider_pane_g

0x8311,	// (0x0003848f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8311,	// (0x0003848f) vkb2_area_bottom_space_btn_pane_g4

0x9148,	// (0x000392c6) lc0_navi_pane_ParamLimits

0x9148,	// (0x000392c6) lc0_navi_pane

0x91c4,	// (0x00039342) lc0_stat_indi_pane_ParamLimits

0x91c4,	// (0x00039342) lc0_stat_indi_pane

0x91db,	// (0x00039359) ls0_title_pane_ParamLimits

0x91db,	// (0x00039359) ls0_title_pane

0x2965,	// (0x00032ae3) bg_popup_sub_pane_cp14_ParamLimits

0xd451,	// (0x0003d5cf) list_uniindi_pane_ParamLimits

0xd45d,	// (0x0003d5db) uniindi_top_pane_ParamLimits

0xd4fc,	// (0x0003d67a) list_single_uniindi_pane_g1_ParamLimits

0xd50f,	// (0x0003d68d) list_single_uniindi_pane_t1_ParamLimits

0x8355,	// (0x000384d3) lc0_stat_clock_pane_ParamLimits

0x8355,	// (0x000384d3) lc0_stat_clock_pane

0xe05e,	// (0x0003e1dc) lc0_stat_indi_pane_g1_ParamLimits

0xe05e,	// (0x0003e1dc) lc0_stat_indi_pane_g1

0xe06b,	// (0x0003e1e9) lc0_stat_indi_pane_g2_ParamLimits

0xe06b,	// (0x0003e1e9) lc0_stat_indi_pane_g2

0x0001,

0xfe32,	// (0x0003ffb0) lc0_stat_indi_pane_g_ParamLimits

0xfe32,	// (0x0003ffb0) lc0_stat_indi_pane_g

0x8362,	// (0x000384e0) lc0_uni_indicator_pane_ParamLimits

0x8362,	// (0x000384e0) lc0_uni_indicator_pane

0xe078,	// (0x0003e1f6) ls0_title_pane_g1_ParamLimits

0xe078,	// (0x0003e1f6) ls0_title_pane_g1

0xe08c,	// (0x0003e20a) ls0_title_pane_t1_ParamLimits

0xe08c,	// (0x0003e20a) ls0_title_pane_t1

0x836f,	// (0x000384ed) lc0_uni_indicator_pane_g1_ParamLimits

0x836f,	// (0x000384ed) lc0_uni_indicator_pane_g1

0xe0c2,	// (0x0003e240) lc0_stat_clock_pane_t1

0xf439,	// (0x0003f5b7) main_ai5_pane

0xe0d0,	// (0x0003e24e) ai5_sk_pane_ParamLimits

0xe0d0,	// (0x0003e24e) ai5_sk_pane

0xe0dd,	// (0x0003e25b) cell_ai5_widget_pane_ParamLimits

0xe0dd,	// (0x0003e25b) cell_ai5_widget_pane

0xe679,	// (0x0003e7f7) aid_size_cell_widget_grid

0xe68f,	// (0x0003e80d) bg_ai5_widget_pane_ParamLimits

0xe68f,	// (0x0003e80d) bg_ai5_widget_pane

0xe6f9,	// (0x0003e877) cell_ai5_widget_pane_g2

0xe709,	// (0x0003e887) cell_ai5_widget_pane_g3

0xe728,	// (0x0003e8a6) cell_ai5_widget_pane_g4

0xe734,	// (0x0003e8b2) cell_ai5_widget_pane_g5

0xe740,	// (0x0003e8be) cell_ai5_widget_pane_g6

0xe74c,	// (0x0003e8ca) cell_ai5_widget_pane_g7

0xe794,	// (0x0003e912) cell_ai5_widget_pane_t1_ParamLimits

0xe794,	// (0x0003e912) cell_ai5_widget_pane_t1

0xe7b1,	// (0x0003e92f) cell_ai5_widget_pane_t2_ParamLimits

0xe7b1,	// (0x0003e92f) cell_ai5_widget_pane_t2

0xe7c9,	// (0x0003e947) cell_ai5_widget_pane_t3_ParamLimits

0xe7c9,	// (0x0003e947) cell_ai5_widget_pane_t3

0xe7e1,	// (0x0003e95f) cell_ai5_widget_pane_t4_ParamLimits

0xe7e1,	// (0x0003e95f) cell_ai5_widget_pane_t4

0xe7fb,	// (0x0003e979) cell_ai5_widget_pane_t5_ParamLimits

0xe7fb,	// (0x0003e979) cell_ai5_widget_pane_t5

0xe81a,	// (0x0003e998) cell_ai5_widget_pane_t6_ParamLimits

0xe81a,	// (0x0003e998) cell_ai5_widget_pane_t6

0xe82c,	// (0x0003e9aa) cell_ai5_widget_pane_t7_ParamLimits

0xe82c,	// (0x0003e9aa) cell_ai5_widget_pane_t7

0xe845,	// (0x0003e9c3) cell_ai5_widget_pane_t8_ParamLimits

0xe845,	// (0x0003e9c3) cell_ai5_widget_pane_t8

0x0009,

0xfe4c,	// (0x0003ffca) cell_ai5_widget_pane_t_ParamLimits

0xfe4c,	// (0x0003ffca) cell_ai5_widget_pane_t

0xe891,	// (0x0003ea0f) grid_ai5_widget_pane

0x2965,	// (0x00032ae3) highlight_cell_ai5_widget_pane_ParamLimits

0x2965,	// (0x00032ae3) highlight_cell_ai5_widget_pane

0xe8a9,	// (0x0003ea27) ai5_sk_left_pane

0xe8b3,	// (0x0003ea31) ai5_sk_middle_pane

0xe8bd,	// (0x0003ea3b) ai5_sk_right_pane

0xe8c7,	// (0x0003ea45) bg_ai5_widget_pane_g1_ParamLimits

0xe8c7,	// (0x0003ea45) bg_ai5_widget_pane_g1

0xe8d3,	// (0x0003ea51) bg_ai5_widget_pane_g2_ParamLimits

0xe8d3,	// (0x0003ea51) bg_ai5_widget_pane_g2

0xe8df,	// (0x0003ea5d) bg_ai5_widget_pane_g3_ParamLimits

0xe8df,	// (0x0003ea5d) bg_ai5_widget_pane_g3

0xe8eb,	// (0x0003ea69) bg_ai5_widget_pane_g4_ParamLimits

0xe8eb,	// (0x0003ea69) bg_ai5_widget_pane_g4

0xe8f7,	// (0x0003ea75) bg_ai5_widget_pane_g5_ParamLimits

0xe8f7,	// (0x0003ea75) bg_ai5_widget_pane_g5

0xe903,	// (0x0003ea81) bg_ai5_widget_pane_g6_ParamLimits

0xe903,	// (0x0003ea81) bg_ai5_widget_pane_g6

0xe90f,	// (0x0003ea8d) bg_ai5_widget_pane_g7_ParamLimits

0xe90f,	// (0x0003ea8d) bg_ai5_widget_pane_g7

0xe91b,	// (0x0003ea99) bg_ai5_widget_pane_g8_ParamLimits

0xe91b,	// (0x0003ea99) bg_ai5_widget_pane_g8

0xe927,	// (0x0003eaa5) bg_ai5_widget_pane_g9_ParamLimits

0xe927,	// (0x0003eaa5) bg_ai5_widget_pane_g9

0x0008,

0xfe61,	// (0x0003ffdf) bg_ai5_widget_pane_g_ParamLimits

0xfe61,	// (0x0003ffdf) bg_ai5_widget_pane_g

0xe960,	// (0x0003eade) cell_shortcut_ai5_widget_pane_ParamLimits

0xe960,	// (0x0003eade) cell_shortcut_ai5_widget_pane

0x85f5,	// (0x00038773) bg_cell_shortcut_ai5_widget_pane

0xe973,	// (0x0003eaf1) cell_grid_ai5_widget_pane_g1

0xe97c,	// (0x0003eafa) highlight_cell_shortcut_ai5_widget_pane

0x94b8,	// (0x00039636) ai5_sk_left_pane_g1

0xe984,	// (0x0003eb02) ai5_sk_left_pane_g2

0xe98c,	// (0x0003eb0a) ai5_sk_left_pane_g3

0xe994,	// (0x0003eb12) ai5_sk_left_pane_g4

0x0003,

0xfe74,	// (0x0003fff2) ai5_sk_left_pane_g

0xe99c,	// (0x0003eb1a) ai5_sk_left_pane_t1

0x94c0,	// (0x0003963e) ai5_sk_right_pane_g1

0xe9aa,	// (0x0003eb28) ai5_sk_right_pane_g2

0xe9b2,	// (0x0003eb30) ai5_sk_right_pane_g3

0xe9ba,	// (0x0003eb38) ai5_sk_right_pane_g4

0x0003,

0xfe7d,	// (0x0003fffb) ai5_sk_right_pane_g

0xe9c2,	// (0x0003eb40) ai5_sk_right_pane_t1

0x94c0,	// (0x0003963e) ai5_sk_middle_pane_g1

0x94b8,	// (0x00039636) ai5_sk_middle_pane_g2

0x94d8,	// (0x00039656) ai5_sk_middle_pane_g3

0xe9b2,	// (0x0003eb30) ai5_sk_middle_pane_g4

0xe98c,	// (0x0003eb0a) ai5_sk_middle_pane_g5

0xe9d0,	// (0x0003eb4e) ai5_sk_middle_pane_g6

0xe9d8,	// (0x0003eb56) ai5_sk_middle_pane_g7

0x0006,

0xfe86,	// (0x00040004) ai5_sk_middle_pane_g

0x8fca,	// (0x00039148) aid_touch_area_size_lc0_ParamLimits

0x8fca,	// (0x00039148) aid_touch_area_size_lc0

0x7820,	// (0x0003799e) cell_hwr_candidate_pane_t1_ParamLimits

0x8fe8,	// (0x00039166) aid_touch_navi_pane

0x92db,	// (0x00039459) status_dt_navi_pane_ParamLimits

0x92db,	// (0x00039459) status_dt_navi_pane

0x92e8,	// (0x00039466) status_dt_sta_pane_ParamLimits

0x92e8,	// (0x00039466) status_dt_sta_pane

0xe9e0,	// (0x0003eb5e) dt_sta_controll_pane

0xe9ed,	// (0x0003eb6b) dt_sta_indi_pane

0xe9fe,	// (0x0003eb7c) dt_sta_title_pane

0x2483,	// (0x00032601) bg_dt_sta_indi_pane_ParamLimits

0x2483,	// (0x00032601) bg_dt_sta_indi_pane

0xea11,	// (0x0003eb8f) dt_sta_battery_pane

0xea19,	// (0x0003eb97) dt_sta_indi_pane_g1

0xea22,	// (0x0003eba0) dt_sta_indi_pane_g2

0xea2b,	// (0x0003eba9) dt_sta_indi_pane_g3

0x0002,

0xfe95,	// (0x00040013) dt_sta_indi_pane_g

0xea34,	// (0x0003ebb2) dt_sta_signal_pane

0x2965,	// (0x00032ae3) bg_dt_sta_title_pane_ParamLimits

0x2965,	// (0x00032ae3) bg_dt_sta_title_pane

0xea3d,	// (0x0003ebbb) dt_sta_title_pane_g1

0xea45,	// (0x0003ebc3) dt_sta_title_pane_t1_ParamLimits

0xea45,	// (0x0003ebc3) dt_sta_title_pane_t1

0xf439,	// (0x0003f5b7) bg_dt_sta_control_pane

0xea5a,	// (0x0003ebd8) dt_sta_controll_pane_g1

0xea63,	// (0x0003ebe1) bg_dt_sta_title_pane_g1

0xea6c,	// (0x0003ebea) bg_dt_sta_title_pane_g2

0xea75,	// (0x0003ebf3) bg_dt_sta_title_pane_g3

0x0002,

0xfe9c,	// (0x0004001a) bg_dt_sta_title_pane_g

0xbaec,	// (0x0003bc6a) bg_dt_sta_indi_pane_g1

0xea7e,	// (0x0003ebfc) dt_sta_signal_pane_g1

0xea86,	// (0x0003ec04) dt_sta_signal_pane_g2

0x0001,

0xfea3,	// (0x00040021) dt_sta_signal_pane_g

0xea8e,	// (0x0003ec0c) dt_sta_battery_pane_g1

0xea97,	// (0x0003ec15) dt_sta_battery_pane_t1

0xbaec,	// (0x0003bc6a) bg_dt_sta_control_pane_g1

0x67ef,	// (0x0003696d) fep_china_uni_eep_pane

0x67f7,	// (0x00036975) fep_china_uni_entry_pane_ParamLimits

0x6807,	// (0x00036985) popup_fep_china_uni_window_g1_ParamLimits

0x6817,	// (0x00036995) popup_fep_china_uni_window_g2_ParamLimits

0x6817,	// (0x00036995) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x0003f89c) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x0003f89c) popup_fep_china_uni_window_g

0xeaa6,	// (0x0003ec24) fep_china_uni_eep_pane_g1

0xeaae,	// (0x0003ec2c) fep_china_uni_eep_pane_t1

0xe03f,	// (0x0003e1bd) aid_touch_area_size_smil_player

0x9140,	// (0x000392be) lc0_clock_pane

0x933f,	// (0x000394bd) status_pane_g5_ParamLimits

0x933f,	// (0x000394bd) status_pane_g5

0x8b2e,	// (0x00038cac) popup_keymap_window

0x92fd,	// (0x0003947b) status_icon_pane

0xe709,	// (0x0003e887) cell_ai5_widget_pane_g3_ParamLimits

0xe728,	// (0x0003e8a6) cell_ai5_widget_pane_g4_ParamLimits

0xe734,	// (0x0003e8b2) cell_ai5_widget_pane_g5_ParamLimits

0xe758,	// (0x0003e8d6) cell_ai5_widget_pane_g8_ParamLimits

0xe758,	// (0x0003e8d6) cell_ai5_widget_pane_g8

0xe76c,	// (0x0003e8ea) cell_ai5_widget_pane_g9_ParamLimits

0xe76c,	// (0x0003e8ea) cell_ai5_widget_pane_g9

0xe780,	// (0x0003e8fe) cell_ai5_widget_pane_g10_ParamLimits

0xe780,	// (0x0003e8fe) cell_ai5_widget_pane_g10

0xeabd,	// (0x0003ec3b) status_icon_pane_g1

0xf439,	// (0x0003f5b7) bg_popup_sub_pane_cp13

0xeac5,	// (0x0003ec43) popup_keymap_window_t1

0x88c4,	// (0x00038a42) control_pane_g6_ParamLimits

0x88c4,	// (0x00038a42) control_pane_g6

0x88d1,	// (0x00038a4f) control_pane_g7_ParamLimits

0x88d1,	// (0x00038a4f) control_pane_g7

0x88de,	// (0x00038a5c) control_pane_g8_ParamLimits

0x88de,	// (0x00038a5c) control_pane_g8

0xe9e0,	// (0x0003eb5e) dt_sta_controll_pane_ParamLimits

0xe9ed,	// (0x0003eb6b) dt_sta_indi_pane_ParamLimits

0xe9fe,	// (0x0003eb7c) dt_sta_title_pane_ParamLimits

0x28a7,	// (0x00032a25) aid_size_touch_scroll_bar_cale

0x5866,	// (0x000359e4) popup_discreet_window_ParamLimits

0x5866,	// (0x000359e4) popup_discreet_window

0x58f4,	// (0x00035a72) popup_sk_window

0x9b00,	// (0x00039c7e) bg_popup_sub_pane_cp28_ParamLimits

0x9b00,	// (0x00039c7e) bg_popup_sub_pane_cp28

0xead3,	// (0x0003ec51) popup_discreet_window_g1_ParamLimits

0xead3,	// (0x0003ec51) popup_discreet_window_g1

0xeaf3,	// (0x0003ec71) popup_discreet_window_t1_ParamLimits

0xeaf3,	// (0x0003ec71) popup_discreet_window_t1

0xeb11,	// (0x0003ec8f) popup_discreet_window_t2_ParamLimits

0xeb11,	// (0x0003ec8f) popup_discreet_window_t2

0x0002,

0xfea8,	// (0x00040026) popup_discreet_window_t_ParamLimits

0xfea8,	// (0x00040026) popup_discreet_window_t

0x8382,	// (0x00038500) popup_sk_window_g1

0x838c,	// (0x0003850a) popup_sk_window_g2

0x0001,

0xfeaf,	// (0x0004002d) popup_sk_window_g

0x8396,	// (0x00038514) popup_sk_window_t1

0x83a6,	// (0x00038524) popup_sk_window_t1_copy1

0xe6f9,	// (0x0003e877) cell_ai5_widget_pane_g2_ParamLimits

0xe857,	// (0x0003e9d5) cell_ai5_widget_pane_t9_ParamLimits

0xe857,	// (0x0003e9d5) cell_ai5_widget_pane_t9

0xf439,	// (0x0003f5b7) main_fep_fshwr2_pane

0x83b4,	// (0x00038532) aid_fshwr2_btn_pane

0x83c0,	// (0x0003853e) aid_fshwr2_syb_pane

0x83d1,	// (0x0003854f) aid_fshwr2_txt_pane

0x83dd,	// (0x0003855b) fshwr2_func_candi_pane

0x83ee,	// (0x0003856c) fshwr2_hwr_syb_pane

0x8401,	// (0x0003857f) fshwr2_icf_pane

0xf439,	// (0x0003f5b7) fshwr2_icf_bg_pane

0xeb63,	// (0x0003ece1) fshwr2_icf_pane_t1_ParamLimits

0xeb63,	// (0x0003ece1) fshwr2_icf_pane_t1

0xbaec,	// (0x0003bc6a) fshwr2_func_candi_pane_g1

0xeb7a,	// (0x0003ecf8) fshwr2_func_candi_row_pane_ParamLimits

0xeb7a,	// (0x0003ecf8) fshwr2_func_candi_row_pane

0xeb8b,	// (0x0003ed09) cell_fshwr2_syb_pane_ParamLimits

0xeb8b,	// (0x0003ed09) cell_fshwr2_syb_pane

0xbd93,	// (0x0003bf11) fshwr2_hwr_syb_pane_g1_ParamLimits

0xbd93,	// (0x0003bf11) fshwr2_hwr_syb_pane_g1

0xf439,	// (0x0003f5b7) bg_popup_call_pane_cp01

0xeba5,	// (0x0003ed23) fshwr2_func_candi_cell_pane_ParamLimits

0xeba5,	// (0x0003ed23) fshwr2_func_candi_cell_pane

0xebd7,	// (0x0003ed55) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xebd7,	// (0x0003ed55) fshwr2_func_candi_cell_bg_pane

0xebf1,	// (0x0003ed6f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xebf1,	// (0x0003ed6f) fshwr2_func_candi_cell_pane_g1

0xec11,	// (0x0003ed8f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xec11,	// (0x0003ed8f) fshwr2_func_candi_cell_pane_t1

0xf439,	// (0x0003f5b7) bg_button_pane_cp08

0x85f5,	// (0x00038773) cell_fshwr2_syb_bg_pane

0xec24,	// (0x0003eda2) cell_fshwr2_syb_bg_pane_g1

0xec2c,	// (0x0003edaa) cell_fshwr2_syb_bg_pane_t1

0x2965,	// (0x00032ae3) main_tmo_pane

0xa624,	// (0x0003a7a2) uni_indicator_pane_g1_ParamLimits

0xa639,	// (0x0003a7b7) uni_indicator_pane_g2_ParamLimits

0xa64f,	// (0x0003a7cd) uni_indicator_pane_g3_ParamLimits

0xa665,	// (0x0003a7e3) uni_indicator_pane_g4_ParamLimits

0xa665,	// (0x0003a7e3) uni_indicator_pane_g4

0xa679,	// (0x0003a7f7) uni_indicator_pane_g5_ParamLimits

0xa679,	// (0x0003a7f7) uni_indicator_pane_g5

0xa68d,	// (0x0003a80b) uni_indicator_pane_g6_ParamLimits

0xa68d,	// (0x0003a80b) uni_indicator_pane_g6

0xf922,	// (0x0003faa0) uni_indicator_pane_g_ParamLimits

0xd027,	// (0x0003d1a5) popup_tmo_note_window_ParamLimits

0xd027,	// (0x0003d1a5) popup_tmo_note_window

0x7bf0,	// (0x00037d6e) fshwr2_bg_pane

0xec02,	// (0x0003ed80) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xec02,	// (0x0003ed80) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb4,	// (0x00040032) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb4,	// (0x00040032) fshwr2_func_candi_cell_pane_g

0xbaec,	// (0x0003bc6a) bg_popup_window_pane_cp01

0xec3b,	// (0x0003edb9) bg_popup_window_pane_g1_cp01

0xec44,	// (0x0003edc2) bg_popup_window_pane_cp22_ParamLimits

0xec44,	// (0x0003edc2) bg_popup_window_pane_cp22

0xec52,	// (0x0003edd0) listscroll_tmo_link_pane_ParamLimits

0xec52,	// (0x0003edd0) listscroll_tmo_link_pane

0xec92,	// (0x0003ee10) popup_tmo_note_window_g1_ParamLimits

0xec92,	// (0x0003ee10) popup_tmo_note_window_g1

0xec9f,	// (0x0003ee1d) tmo_note_info_pane_ParamLimits

0xec9f,	// (0x0003ee1d) tmo_note_info_pane

0xecb9,	// (0x0003ee37) list_tmo_note_info_pane_g1_ParamLimits

0xecb9,	// (0x0003ee37) list_tmo_note_info_pane_g1

0xecd0,	// (0x0003ee4e) list_tmo_note_info_pane_g2_ParamLimits

0xecd0,	// (0x0003ee4e) list_tmo_note_info_pane_g2

0x0001,

0xfeb9,	// (0x00040037) list_tmo_note_info_pane_g_ParamLimits

0xfeb9,	// (0x00040037) list_tmo_note_info_pane_g

0xecec,	// (0x0003ee6a) list_tmo_note_info_text_pane_ParamLimits

0xecec,	// (0x0003ee6a) list_tmo_note_info_text_pane

0xed71,	// (0x0003eeef) list_tmo_link_pane

0xed7e,	// (0x0003eefc) scroll_pane_cp20

0xed8b,	// (0x0003ef09) list_single_tmo_link_pane_ParamLimits

0xed8b,	// (0x0003ef09) list_single_tmo_link_pane

0xed9b,	// (0x0003ef19) list_single_tmo_link_pane_t1

0xeda9,	// (0x0003ef27) list_tmo_note_info_text_pane_t1_ParamLimits

0xeda9,	// (0x0003ef27) list_tmo_note_info_text_pane_t1

0x6317,	// (0x00036495) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6317,	// (0x00036495) aid_size_touch_scroll_bar_cp01

0x6241,	// (0x000363bf) aid_size_touch_slider_marker

0x58dc,	// (0x00035a5a) popup_settings_window_ParamLimits

0x58dc,	// (0x00035a5a) popup_settings_window

0x4246,	// (0x000343c4) popup_candi_list_indi_window

0x8fe8,	// (0x00039166) aid_touch_navi_pane_ParamLimits

0x7b49,	// (0x00037cc7) rs_clock_indi_pane

0x7b52,	// (0x00037cd0) sctrl_sk_bottom_pane_ParamLimits

0x7b63,	// (0x00037ce1) sctrl_sk_top_pane_ParamLimits

0x7c68,	// (0x00037de6) popup_fep_tooltip_window

0xe679,	// (0x0003e7f7) aid_size_cell_widget_grid_ParamLimits

0xe6ed,	// (0x0003e86b) cell_ai5_widget_pane_g1_ParamLimits

0xe6ed,	// (0x0003e86b) cell_ai5_widget_pane_g1

0xe740,	// (0x0003e8be) cell_ai5_widget_pane_g6_ParamLimits

0xe74c,	// (0x0003e8ca) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe37,	// (0x0003ffb5) cell_ai5_widget_pane_g_ParamLimits

0xfe37,	// (0x0003ffb5) cell_ai5_widget_pane_g

0xe87b,	// (0x0003e9f9) cell_ai5_widget_pane_t10_ParamLimits

0xe87b,	// (0x0003e9f9) cell_ai5_widget_pane_t10

0xe891,	// (0x0003ea0f) grid_ai5_widget_pane_ParamLimits

0xe933,	// (0x0003eab1) cell_contacts_ai5_widget_pane_ParamLimits

0xe933,	// (0x0003eab1) cell_contacts_ai5_widget_pane

0xeb26,	// (0x0003eca4) popup_discreet_window_t3_ParamLimits

0xeb26,	// (0x0003eca4) popup_discreet_window_t3

0x8416,	// (0x00038594) popup_fshwr2_char_preview_window_ParamLimits

0x8416,	// (0x00038594) popup_fshwr2_char_preview_window

0xed0a,	// (0x0003ee88) tmo_note_info_pane_t1

0xed1f,	// (0x0003ee9d) tmo_note_info_pane_t2

0xed38,	// (0x0003eeb6) tmo_note_info_pane_t3

0xed4d,	// (0x0003eecb) tmo_note_info_pane_t4

0xed5f,	// (0x0003eedd) tmo_note_info_pane_t5

0x0004,

0xfebe,	// (0x0004003c) tmo_note_info_pane_t

0xed71,	// (0x0003eeef) list_tmo_link_pane_ParamLimits

0xed7e,	// (0x0003eefc) scroll_pane_cp20_ParamLimits

0xf439,	// (0x0003f5b7) bg_popup_fep_char_preview_window_cp01

0xedc2,	// (0x0003ef40) popup_fshwr2_char_preview_window_t1

0xedd0,	// (0x0003ef4e) popup_candi_list_indi_window_g1

0xedd9,	// (0x0003ef57) bg_cell_contacts_ai5_widget_pane

0xede5,	// (0x0003ef63) cell_contacts_ai5_widget_pane_g1

0xedf8,	// (0x0003ef76) cell_contacts_ai5_widget_pane_g2

0xee04,	// (0x0003ef82) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec9,	// (0x00040047) cell_contacts_ai5_widget_pane_g

0xee16,	// (0x0003ef94) cell_contacts_ai5_widget_pane_t1

0x2965,	// (0x00032ae3) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee90,	// (0x0003f00e) settings_container_pane

0x85f5,	// (0x00038773) listscroll_set_pane_copy1

0xb207,	// (0x0003b385) scroll_pane_cp121_copy1

0xee9c,	// (0x0003f01a) set_content_pane_copy1

0xeea4,	// (0x0003f022) aid_height_set_list_copy1_ParamLimits

0xeea4,	// (0x0003f022) aid_height_set_list_copy1

0xa88d,	// (0x0003aa0b) aid_size_parent_copy1_ParamLimits

0xa88d,	// (0x0003aa0b) aid_size_parent_copy1

0xeeb0,	// (0x0003f02e) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeeb0,	// (0x0003f02e) button_value_adjust_pane_cp6_copy1

0x896f,	// (0x00038aed) list_highlight_pane_cp2_copy1_ParamLimits

0x896f,	// (0x00038aed) list_highlight_pane_cp2_copy1

0xeec4,	// (0x0003f042) list_set_pane_copy1_ParamLimits

0xeec4,	// (0x0003f042) list_set_pane_copy1

0xee2b,	// (0x0003efa9) main_pane_set_t1_copy1_ParamLimits

0xee2b,	// (0x0003efa9) main_pane_set_t1_copy1

0xee65,	// (0x0003efe3) main_pane_set_t2_copy1_ParamLimits

0xee65,	// (0x0003efe3) main_pane_set_t2_copy1

0xef8b,	// (0x0003f109) main_pane_set_t3_copy1

0xef99,	// (0x0003f117) main_pane_set_t4_copy1

0xee84,	// (0x0003f002) set_content_pane_g1_copy1_ParamLimits

0xee84,	// (0x0003f002) set_content_pane_g1_copy1

0xefa7,	// (0x0003f125) setting_code_pane_copy1

0xefaf,	// (0x0003f12d) setting_slider_graphic_pane_copy1

0xefaf,	// (0x0003f12d) setting_slider_pane_copy1

0xefaf,	// (0x0003f12d) setting_text_pane_copy1

0xefaf,	// (0x0003f12d) setting_volume_pane_copy1

0xefa7,	// (0x0003f125) settings_code_pane_cp2_copy1

0xefb7,	// (0x0003f135) settings_code_pane_cp_copy1_ParamLimits

0xefb7,	// (0x0003f135) settings_code_pane_cp_copy1

0x842e,	// (0x000385ac) volume_set_pane_copy1

0xefcb,	// (0x0003f149) volume_set_pane_g10_copy1

0xefd7,	// (0x0003f155) volume_set_pane_g1_copy1

0xefe1,	// (0x0003f15f) volume_set_pane_g2_copy1

0xefeb,	// (0x0003f169) volume_set_pane_g3_copy1

0xeff5,	// (0x0003f173) volume_set_pane_g4_copy1

0xefff,	// (0x0003f17d) volume_set_pane_g5_copy1

0xf009,	// (0x0003f187) volume_set_pane_g6_copy1

0xf013,	// (0x0003f191) volume_set_pane_g7_copy1

0xf01d,	// (0x0003f19b) volume_set_pane_g8_copy1

0xf027,	// (0x0003f1a5) volume_set_pane_g9_copy1

0x2350,	// (0x000324ce) bg_set_opt_pane_cp_copy1_ParamLimits

0x2350,	// (0x000324ce) bg_set_opt_pane_cp_copy1

0x843a,	// (0x000385b8) setting_slider_pane_t1_copy1_ParamLimits

0x843a,	// (0x000385b8) setting_slider_pane_t1_copy1

0x8458,	// (0x000385d6) setting_slider_pane_t2_copy1_ParamLimits

0x8458,	// (0x000385d6) setting_slider_pane_t2_copy1

0x8472,	// (0x000385f0) setting_slider_pane_t3_copy1_ParamLimits

0x8472,	// (0x000385f0) setting_slider_pane_t3_copy1

0x848a,	// (0x00038608) slider_set_pane_copy1_ParamLimits

0x848a,	// (0x00038608) slider_set_pane_copy1

0x29c0,	// (0x00032b3e) set_opt_bg_pane_g1_copy2

0x29c8,	// (0x00032b46) set_opt_bg_pane_g2_copy2

0xf031,	// (0x0003f1af) set_opt_bg_pane_g3_copy2

0x29d8,	// (0x00032b56) set_opt_bg_pane_g4_copy2

0x29e0,	// (0x00032b5e) set_opt_bg_pane_g5_copy2

0x29e8,	// (0x00032b66) set_opt_bg_pane_g6_copy2

0xf03b,	// (0x0003f1b9) set_opt_bg_pane_g7_copy2

0xf045,	// (0x0003f1c3) set_opt_bg_pane_g8_copy2

0xf04f,	// (0x0003f1cd) set_opt_bg_pane_g9_copy2

0xf059,	// (0x0003f1d7) aid_size_touch_slider_mark_copy1_ParamLimits

0xf059,	// (0x0003f1d7) aid_size_touch_slider_mark_copy1

0xf06d,	// (0x0003f1eb) slider_set_pane_g1_copy1

0xf076,	// (0x0003f1f4) slider_set_pane_g2_copy1

0xbc8e,	// (0x0003be0c) slider_set_pane_g3_copy1_ParamLimits

0xbc8e,	// (0x0003be0c) slider_set_pane_g3_copy1

0xbca2,	// (0x0003be20) slider_set_pane_g4_copy1_ParamLimits

0xbca2,	// (0x0003be20) slider_set_pane_g4_copy1

0xd862,	// (0x0003d9e0) slider_set_pane_g5_copy1_ParamLimits

0xd862,	// (0x0003d9e0) slider_set_pane_g5_copy1

0xbc8e,	// (0x0003be0c) slider_set_pane_g6_copy1_ParamLimits

0xbc8e,	// (0x0003be0c) slider_set_pane_g6_copy1

0xf07e,	// (0x0003f1fc) slider_set_pane_g7_copy1_ParamLimits

0xf07e,	// (0x0003f1fc) slider_set_pane_g7_copy1

0xf44d,	// (0x0003f5cb) bg_set_opt_pane_cp2_copy1

0xf094,	// (0x0003f212) setting_slider_graphic_pane_g1_copy1

0xf09d,	// (0x0003f21b) setting_slider_graphic_pane_t1_copy1

0xf0ad,	// (0x0003f22b) setting_slider_graphic_pane_t2_copy1

0xf0bd,	// (0x0003f23b) slider_set_pane_cp_copy1

0xf0cd,	// (0x0003f24b) input_focus_pane_cp1_copy1

0xf0d6,	// (0x0003f254) list_set_text_pane_copy1

0xf0de,	// (0x0003f25c) setting_text_pane_g1_copy1

0x4a89,	// (0x00034c07) set_text_pane_t1_copy1

0xf0cd,	// (0x0003f24b) input_focus_pane_cp2_copy1

0xf0de,	// (0x0003f25c) setting_code_pane_g1_copy1

0xf0e7,	// (0x0003f265) setting_code_pane_t1_copy1

0xf0f5,	// (0x0003f273) list_set_graphic_pane_copy1

0xf44d,	// (0x0003f5cb) bg_set_opt_pane_cp4_copy1

0x6bbb,	// (0x00036d39) list_set_graphic_pane_g1_copy1_ParamLimits

0x6bbb,	// (0x00036d39) list_set_graphic_pane_g1_copy1

0xf107,	// (0x0003f285) list_set_graphic_pane_g2_copy1

0x6bd3,	// (0x00036d51) list_set_graphic_pane_t1_copy1_ParamLimits

0x6bd3,	// (0x00036d51) list_set_graphic_pane_t1_copy1

0xbaec,	// (0x0003bc6a) rs_clock_indi_pane_g1

0xf10f,	// (0x0003f28d) rs_clock_indi_pane_t1

0xf11d,	// (0x0003f29b) rs_indi_pane

0xf125,	// (0x0003f2a3) rs_indi_pane_g1

0xf12e,	// (0x0003f2ac) rs_indi_pane_g2

0xf137,	// (0x0003f2b5) rs_indi_pane_g3

0x0002,

0xfed0,	// (0x0004004e) rs_indi_pane_g

0x85f5,	// (0x00038773) bg_popup_preview_window_pane_cp03

0xf140,	// (0x0003f2be) popup_fep_tooltip_window_t1

0xc7cf,	// (0x0003c94d) popup_note2_window_g2_ParamLimits

0xc7cf,	// (0x0003c94d) popup_note2_window_g2

0x0001,

0xfc69,	// (0x0003fde7) popup_note2_window_g_ParamLimits

0xfc69,	// (0x0003fde7) popup_note2_window_g

0xccd7,	// (0x0003ce55) bg_popup_sub_pane_cp11_ParamLimits

0xcce4,	// (0x0003ce62) cell_ai3_links_pane_g1_ParamLimits

0xccfb,	// (0x0003ce79) cell_ai3_links_pane_t1

0x4a89,	// (0x00034c07) set_text_pane_t1_copy1_ParamLimits

0x6dce,	// (0x00036f4c) cell_graphic_popup_pane_cp2_ParamLimits

0x6dce,	// (0x00036f4c) cell_graphic_popup_pane_cp2

0xf14e,	// (0x0003f2cc) cell_graphic_popup_pane_g1_cp2

0x26ba,	// (0x00032838) cell_graphic_popup_pane_g2_cp2

0xf156,	// (0x0003f2d4) cell_graphic_popup_pane_g3_cp2

0xf15e,	// (0x0003f2dc) cell_graphic_popup_pane_t2_cp2

0x26cb,	// (0x00032849) grid_highlight_pane_cp3_cp2

0x2c69,	// (0x00032de7) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2965,	// (0x00032ae3) main_tmo_pane_ParamLimits

0xd01b,	// (0x0003d199) popup_tmo_big_image_note_window

0xe6dd,	// (0x0003e85b) cell_ai5_widget_list_pane

0xe6e5,	// (0x0003e863) cell_ai5_widget_lrg_icon_pane

0xed0a,	// (0x0003ee88) tmo_note_info_pane_t1_ParamLimits

0xed1f,	// (0x0003ee9d) tmo_note_info_pane_t2_ParamLimits

0xed38,	// (0x0003eeb6) tmo_note_info_pane_t3_ParamLimits

0xed4d,	// (0x0003eecb) tmo_note_info_pane_t4_ParamLimits

0xed5f,	// (0x0003eedd) tmo_note_info_pane_t5_ParamLimits

0xfebe,	// (0x0004003c) tmo_note_info_pane_t_ParamLimits

0xee90,	// (0x0003f00e) settings_container_pane_ParamLimits

0xf0c5,	// (0x0003f243) indicator_popup_pane_cp5

0xf0c5,	// (0x0003f243) indicator_popup_pane_cp6

0xf0f5,	// (0x0003f273) list_set_graphic_pane_copy1_ParamLimits

0xf439,	// (0x0003f5b7) bg_popup_window_pane_cp23

0xf16c,	// (0x0003f2ea) popup_tmo_big_image_note_window_g1

0xf178,	// (0x0003f2f6) popup_tmo_big_image_note_window_t1

0xf188,	// (0x0003f306) popup_tmo_big_image_note_window_t2

0xf198,	// (0x0003f316) popup_tmo_big_image_note_window_t3

0x0002,

0xfed7,	// (0x00040055) popup_tmo_big_image_note_window_t

0xf1a8,	// (0x0003f326) cell_ai5_widget_lrg_icon_pane_g1

0xf1b0,	// (0x0003f32e) cell_ai5_widget_lrg_icon_pane_t1

0xf1be,	// (0x0003f33c) cell_ai5_widget_list_row_pane_ParamLimits

0xf1be,	// (0x0003f33c) cell_ai5_widget_list_row_pane

0xf1d7,	// (0x0003f355) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf1d7,	// (0x0003f355) cell_ai5_widget_list_row_pane_g1

0xf1e4,	// (0x0003f362) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf1e4,	// (0x0003f362) cell_ai5_widget_list_row_pane_t1

0xf1fc,	// (0x0003f37a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf1fc,	// (0x0003f37a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfede,	// (0x0004005c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfede,	// (0x0004005c) cell_ai5_widget_list_row_pane_t

0x5789,	// (0x00035907) main_fep_vtchi_ss_pane

0x84af,	// (0x0003862d) popup_fep_char_pre_window

0x84b7,	// (0x00038635) popup_fep_ituss_window

0x84d8,	// (0x00038656) popup_fep_vkbss_window

0xf224,	// (0x0003f3a2) grid_vkbss_keypad_pane_ParamLimits

0xf224,	// (0x0003f3a2) grid_vkbss_keypad_pane

0xf234,	// (0x0003f3b2) ituss_keypad_pane

0x8505,	// (0x00038683) aid_vkbss_key_offset_ParamLimits

0x8505,	// (0x00038683) aid_vkbss_key_offset

0x8511,	// (0x0003868f) cell_vkbss_key_pane_ParamLimits

0x8511,	// (0x0003868f) cell_vkbss_key_pane

0xf244,	// (0x0003f3c2) bg_cell_vkbss_key_g1_ParamLimits

0xf244,	// (0x0003f3c2) bg_cell_vkbss_key_g1

0xf250,	// (0x0003f3ce) cell_vkbss_key_3p_pane_ParamLimits

0xf250,	// (0x0003f3ce) cell_vkbss_key_3p_pane

0xf26a,	// (0x0003f3e8) cell_vkbss_key_g1_ParamLimits

0xf26a,	// (0x0003f3e8) cell_vkbss_key_g1

0xf284,	// (0x0003f402) cell_vkbss_key_t1_ParamLimits

0xf284,	// (0x0003f402) cell_vkbss_key_t1

0x8527,	// (0x000386a5) cell_ituss_key_pane_ParamLimits

0x8527,	// (0x000386a5) cell_ituss_key_pane

0xf2af,	// (0x0003f42d) bg_cell_ituss_key_g1_ParamLimits

0xf2af,	// (0x0003f42d) bg_cell_ituss_key_g1

0xf2bb,	// (0x0003f439) cell_ituss_key_pane_g1_ParamLimits

0xf2bb,	// (0x0003f439) cell_ituss_key_pane_g1

0xf2cf,	// (0x0003f44d) cell_ituss_key_pane_g2_ParamLimits

0xf2cf,	// (0x0003f44d) cell_ituss_key_pane_g2

0x0001,

0xfee5,	// (0x00040063) cell_ituss_key_pane_g_ParamLimits

0xfee5,	// (0x00040063) cell_ituss_key_pane_g

0xf301,	// (0x0003f47f) cell_ituss_key_t1_ParamLimits

0xf301,	// (0x0003f47f) cell_ituss_key_t1

0xf33b,	// (0x0003f4b9) cell_ituss_key_t2_ParamLimits

0xf33b,	// (0x0003f4b9) cell_ituss_key_t2

0xf36c,	// (0x0003f4ea) cell_ituss_key_t3_ParamLimits

0xf36c,	// (0x0003f4ea) cell_ituss_key_t3

0xf39d,	// (0x0003f51b) cell_ituss_key_t4_ParamLimits

0xf39d,	// (0x0003f51b) cell_ituss_key_t4

0x0003,

0xfeea,	// (0x00040068) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x00040068) cell_ituss_key_t

0xf3ce,	// (0x0003f54c) cell_vkbss_key_3p_pane_g1

0xf3d6,	// (0x0003f554) cell_vkbss_key_3p_pane_g2

0xf3de,	// (0x0003f55c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x00040071) cell_vkbss_key_3p_pane_g

0xf439,	// (0x0003f5b7) bg_popup_fep_char_preview_window_cp02

0xf3e6,	// (0x0003f564) popup_fep_char_pre_window_t1

0xe66f,	// (0x0003e7ed) main_ai5_sk_pane

0xedd9,	// (0x0003ef57) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xede5,	// (0x0003ef63) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xedf8,	// (0x0003ef76) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee04,	// (0x0003ef82) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec9,	// (0x00040047) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee16,	// (0x0003ef94) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2965,	// (0x00032ae3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf3f5,	// (0x0003f573) main_ai5_sk_pane_g1

0x9938,	// (0x00039ab6) popup_query_code_window_g1

0x84cd,	// (0x0003864b) popup_fep_vkb_icf_pane

0x84e3,	// (0x00038661) popup_fep_vtchi_icf_pane

0x2965,	// (0x00032ae3) bg_icf_pane

0xf3fe,	// (0x0003f57c) list_vkb_icf_pane

0x2965,	// (0x00032ae3) bg_icf_pane_cp01

0xf40a,	// (0x0003f588) vtchi_icf_list_pane

0xf41b,	// (0x0003f599) list_vkb_icf_pane_t1_ParamLimits

0xf41b,	// (0x0003f599) list_vkb_icf_pane_t1

0xf4b5,	// (0x0003f633) vtchi_icf_list_pane_t1_ParamLimits

0xf4b5,	// (0x0003f633) vtchi_icf_list_pane_t1

0x84b7,	// (0x00038635) popup_fep_ituss_window_ParamLimits

0x84e3,	// (0x00038661) popup_fep_vtchi_icf_pane_ParamLimits

0xf234,	// (0x0003f3b2) ituss_keypad_pane_ParamLimits

0x84f9,	// (0x00038677) ituss_sks_pane

0x2965,	// (0x00032ae3) bg_icf_pane_ParamLimits

0x84a0,	// (0x0003861e) icf_edit_indi_pane_ParamLimits

0x84a0,	// (0x0003861e) icf_edit_indi_pane

0xf3fe,	// (0x0003f57c) list_vkb_icf_pane_ParamLimits

0x2965,	// (0x00032ae3) bg_icf_pane_cp01_ParamLimits

0x84a0,	// (0x0003861e) icf_edit_indi_pane_cp01_ParamLimits

0x84a0,	// (0x0003861e) icf_edit_indi_pane_cp01

0xf412,	// (0x0003f590) vtchi_query_pane

0xbd93,	// (0x0003bf11) icf_edit_indi_pane_g1_ParamLimits

0xbd93,	// (0x0003bf11) icf_edit_indi_pane_g1

0xf537,	// (0x0003f6b5) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x0003f6b5) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x00040089) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x00040089) icf_edit_indi_pane_g

0xf546,	// (0x0003f6c4) icf_edit_indi_pane_t1

0xf4cd,	// (0x0003f64b) bg_input_focus_pane_cp042

0x289e,	// (0x00032a1c) vtchi_button_pane

0xf4d6,	// (0x0003f654) vtchi_query_pane_t1

0xf4e4,	// (0x0003f662) vtchi_query_pane_t2

0xf4f2,	// (0x0003f670) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x00040078) vtchi_query_pane_t

0xf439,	// (0x0003f5b7) bg_button_pane_cp13

0xf500,	// (0x0003f67e) vtchi_button_pane_g1

0xf508,	// (0x0003f686) ituss_sks_pane_g1

0xf513,	// (0x0003f691) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x0004007f) ituss_sks_pane_g

0xf51b,	// (0x0003f699) ituss_sks_pane_t1

0xf529,	// (0x0003f6a7) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x00040084) ituss_sks_pane_t

0xb59c,	// (0x0003b71a) indicator_nsta_pane_cp_g1

0xb5a5,	// (0x0003b723) indicator_nsta_pane_cp_g2

0xb5ad,	// (0x0003b72b) indicator_nsta_pane_cp_g3

0xb5b5,	// (0x0003b733) indicator_nsta_pane_cp_g4

0xb5bd,	// (0x0003b73b) indicator_nsta_pane_cp_g5

0xb5c5,	// (0x0003b743) indicator_nsta_pane_cp_g6

0x0005,

0xfaa7,	// (0x0003fc25) indicator_nsta_pane_cp_g

0xdd5a,	// (0x0003ded8) cell_graphic2_pane_t2_ParamLimits

0xdd5a,	// (0x0003ded8) cell_graphic2_pane_t2

0x0001,

0xfdc0,	// (0x0003ff3e) cell_graphic2_pane_t_ParamLimits

0xfdc0,	// (0x0003ff3e) cell_graphic2_pane_t

0xdd87,	// (0x0003df05) cell_graphic2_control_pane_t1

0x673f,	// (0x000368bd) signal_pane_g3_ParamLimits

0x673f,	// (0x000368bd) signal_pane_g3

0x6751,	// (0x000368cf) signal_pane_g4_ParamLimits

0x6751,	// (0x000368cf) signal_pane_g4

0xf20e,	// (0x0003f38c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf20e,	// (0x0003f38c) cell_ai5_widget_list_row_pane_t3

0xf2ef,	// (0x0003f46d) cell_ituss_key_pane_t1_ParamLimits

0xf2ef,	// (0x0003f46d) cell_ituss_key_pane_t1

0x95b5,	// (0x00039733) form_field_data_wide_pane_vc_t2_ParamLimits

0x95b5,	// (0x00039733) form_field_data_wide_pane_vc_t2

0x95c9,	// (0x00039747) form_field_data_wide_pane_vc_t3_ParamLimits

0x95c9,	// (0x00039747) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x0003f988) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x0003f988) form_field_data_wide_pane_vc_t

0xb247,	// (0x0003b3c5) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb247,	// (0x0003b3c5) form_field_slider_wide_pane_vc_t3

0xb31d,	// (0x0003b49b) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb31d,	// (0x0003b49b) form_field_popup_wide_pane_vc_t2

0xb334,	// (0x0003b4b2) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb334,	// (0x0003b4b2) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa96,	// (0x0003fc14) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa96,	// (0x0003fc14) form_field_popup_wide_pane_vc_t

0x83b4,	// (0x00038532) aid_fshwr2_btn_pane_ParamLimits

0x83c0,	// (0x0003853e) aid_fshwr2_syb_pane_ParamLimits

0x83d1,	// (0x0003854f) aid_fshwr2_txt_pane_ParamLimits

0x7bf0,	// (0x00037d6e) fshwr2_bg_pane_ParamLimits

0x83dd,	// (0x0003855b) fshwr2_func_candi_pane_ParamLimits

0x83ee,	// (0x0003856c) fshwr2_hwr_syb_pane_ParamLimits

0x8401,	// (0x0003857f) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small

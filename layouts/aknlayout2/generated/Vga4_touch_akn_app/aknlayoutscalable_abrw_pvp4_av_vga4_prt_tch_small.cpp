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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0002f6e6 };

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
0x50fd,	// (0x000347e3) Screen

0x5109,	// (0x000347ef) application_window_ParamLimits

0x5109,	// (0x000347ef) application_window

0xf01d,	// (0x0003e703) screen_g1

0x5165,	// (0x0003484b) area_bottom_pane_ParamLimits

0x5165,	// (0x0003484b) area_bottom_pane

0x522b,	// (0x00034911) area_top_pane_ParamLimits

0x522b,	// (0x00034911) area_top_pane

0x52c9,	// (0x000349af) main_pane_ParamLimits

0x52c9,	// (0x000349af) main_pane

0xf027,	// (0x0003e70d) misc_graphics

0x943b,	// (0x00038b21) battery_pane_ParamLimits

0x943b,	// (0x00038b21) battery_pane

0xa0ff,	// (0x000397e5) bg_status_flat_pane_g8

0xa107,	// (0x000397ed) bg_status_flat_pane_g9

0x9503,	// (0x00038be9) context_pane_ParamLimits

0x9503,	// (0x00038be9) context_pane

0x9627,	// (0x00038d0d) navi_pane_ParamLimits

0x9627,	// (0x00038d0d) navi_pane

0x96b5,	// (0x00038d9b) signal_pane_ParamLimits

0x96b5,	// (0x00038d9b) signal_pane

0x0008,

0xf852,	// (0x0003ef38) bg_status_flat_pane_g

0x9722,	// (0x00038e08) status_pane_g1_ParamLimits

0x9722,	// (0x00038e08) status_pane_g1

0x972e,	// (0x00038e14) status_pane_g2_ParamLimits

0x972e,	// (0x00038e14) status_pane_g2

0x973a,	// (0x00038e20) status_pane_g3_ParamLimits

0x973a,	// (0x00038e20) status_pane_g3

0x0004,

0xf779,	// (0x0003ee5f) status_pane_g_ParamLimits

0xf779,	// (0x0003ee5f) status_pane_g

0x976e,	// (0x00038e54) title_pane_ParamLimits

0x976e,	// (0x00038e54) title_pane

0x97ab,	// (0x00038e91) uni_indicator_pane_ParamLimits

0x97ab,	// (0x00038e91) uni_indicator_pane

0x9367,	// (0x00038a4d) bg_list_pane_ParamLimits

0x9367,	// (0x00038a4d) bg_list_pane

0x9387,	// (0x00038a6d) find_pane

0x938f,	// (0x00038a75) listscroll_app_pane_ParamLimits

0x938f,	// (0x00038a75) listscroll_app_pane

0x939b,	// (0x00038a81) listscroll_form_pane

0x6ad4,	// (0x000361ba) listscroll_gen_pane_ParamLimits

0x6ad4,	// (0x000361ba) listscroll_gen_pane

0x6ae8,	// (0x000361ce) listscroll_set_pane

0x6006,	// (0x000356ec) main_idle_act_pane

0x9060,	// (0x00038746) main_idle_trad_pane

0x9060,	// (0x00038746) main_list_empty_pane

0x938f,	// (0x00038a75) main_midp_pane

0x93b5,	// (0x00038a9b) main_pane_g1_ParamLimits

0x93b5,	// (0x00038a9b) main_pane_g1

0x6afe,	// (0x000361e4) popup_ai_message_window_ParamLimits

0x6afe,	// (0x000361e4) popup_ai_message_window

0x6bb2,	// (0x00036298) popup_fep_china_uni_window_ParamLimits

0x6bb2,	// (0x00036298) popup_fep_china_uni_window

0x6c12,	// (0x000362f8) popup_fep_japan_candidate_window_ParamLimits

0x6c12,	// (0x000362f8) popup_fep_japan_candidate_window

0x6c3c,	// (0x00036322) popup_fep_japan_predictive_window_ParamLimits

0x6c3c,	// (0x00036322) popup_fep_japan_predictive_window

0x6c72,	// (0x00036358) popup_find_window

0x6c7f,	// (0x00036365) popup_grid_graphic_window_ParamLimits

0x6c7f,	// (0x00036365) popup_grid_graphic_window

0x6caf,	// (0x00036395) popup_large_graphic_colour_window

0x6cd5,	// (0x000363bb) popup_menu_window_ParamLimits

0x6cd5,	// (0x000363bb) popup_menu_window

0x6e9f,	// (0x00036585) popup_note_image_window

0x6e89,	// (0x0003656f) popup_note_wait_window_ParamLimits

0x6e89,	// (0x0003656f) popup_note_wait_window

0x6e89,	// (0x0003656f) popup_note_window_ParamLimits

0x6e89,	// (0x0003656f) popup_note_window

0x6f05,	// (0x000365eb) popup_query_code_window_ParamLimits

0x6f05,	// (0x000365eb) popup_query_code_window

0x6f1b,	// (0x00036601) popup_query_data_code_window_ParamLimits

0x6f1b,	// (0x00036601) popup_query_data_code_window

0x6f3e,	// (0x00036624) popup_query_data_window_ParamLimits

0x6f3e,	// (0x00036624) popup_query_data_window

0x6f60,	// (0x00036646) popup_query_sat_info_window_ParamLimits

0x6f60,	// (0x00036646) popup_query_sat_info_window

0x6f9f,	// (0x00036685) popup_snote_single_graphic_window_ParamLimits

0x6f9f,	// (0x00036685) popup_snote_single_graphic_window

0x6f9f,	// (0x00036685) popup_snote_single_text_window_ParamLimits

0x6f9f,	// (0x00036685) popup_snote_single_text_window

0x6fb6,	// (0x0003669c) popup_sub_window_general

0x70fc,	// (0x000367e2) popup_window_general_ParamLimits

0x70fc,	// (0x000367e2) popup_window_general

0x93c3,	// (0x00038aa9) power_save_pane

0x6983,	// (0x00036069) control_pane_g1_ParamLimits

0x6983,	// (0x00036069) control_pane_g1

0x69a6,	// (0x0003608c) control_pane_g2_ParamLimits

0x69a6,	// (0x0003608c) control_pane_g2

0x932a,	// (0x00038a10) control_pane_g3_ParamLimits

0x932a,	// (0x00038a10) control_pane_g3

0x0007,

0xf761,	// (0x0003ee47) control_pane_g_ParamLimits

0xf761,	// (0x0003ee47) control_pane_g

0x69eb,	// (0x000360d1) control_pane_t1_ParamLimits

0x69eb,	// (0x000360d1) control_pane_t1

0x6a33,	// (0x00036119) control_pane_t2_ParamLimits

0x6a33,	// (0x00036119) control_pane_t2

0x0002,

0xf772,	// (0x0003ee58) control_pane_t_ParamLimits

0xf772,	// (0x0003ee58) control_pane_t

0x924f,	// (0x00038935) navi_navi_volume_pane_cp1

0x9257,	// (0x0003893d) status_small_icon_pane

0x925f,	// (0x00038945) status_small_pane_g1_ParamLimits

0x925f,	// (0x00038945) status_small_pane_g1

0x9293,	// (0x00038979) status_small_pane_g2_ParamLimits

0x9293,	// (0x00038979) status_small_pane_g2

0x929f,	// (0x00038985) status_small_pane_g3_ParamLimits

0x929f,	// (0x00038985) status_small_pane_g3

0x92ab,	// (0x00038991) status_small_pane_g4_ParamLimits

0x92ab,	// (0x00038991) status_small_pane_g4

0x92b7,	// (0x0003899d) status_small_pane_g5_ParamLimits

0x92b7,	// (0x0003899d) status_small_pane_g5

0x92c5,	// (0x000389ab) status_small_pane_g6_ParamLimits

0x92c5,	// (0x000389ab) status_small_pane_g6

0x0007,

0xf750,	// (0x0003ee36) status_small_pane_g_ParamLimits

0xf750,	// (0x0003ee36) status_small_pane_g

0x92f4,	// (0x000389da) status_small_pane_t1

0x9316,	// (0x000389fc) status_small_wait_pane_ParamLimits

0x9316,	// (0x000389fc) status_small_wait_pane

0x8ace,	// (0x000381b4) aid_levels_signal_ParamLimits

0x8ace,	// (0x000381b4) aid_levels_signal

0x8add,	// (0x000381c3) signal_pane_g1_ParamLimits

0x8add,	// (0x000381c3) signal_pane_g1

0x8af2,	// (0x000381d8) signal_pane_g2_ParamLimits

0x8af2,	// (0x000381d8) signal_pane_g2

0x0003,

0xf6e1,	// (0x0003edc7) signal_pane_g_ParamLimits

0xf6e1,	// (0x0003edc7) signal_pane_g

0x8b23,	// (0x00038209) context_pane_g1

0x5528,	// (0x00034c0e) title_pane_g1

0x555a,	// (0x00034c40) title_pane_t1

0xf4a5,	// (0x0003eb8b) title_pane_t2

0xf4cb,	// (0x0003ebb1) title_pane_t3

0x0002,

0xf530,	// (0x0003ec16) title_pane_t

0x97c3,	// (0x00038ea9) aid_levels_battery_ParamLimits

0x97c3,	// (0x00038ea9) aid_levels_battery

0x97d4,	// (0x00038eba) battery_pane_g1_ParamLimits

0x97d4,	// (0x00038eba) battery_pane_g1

0x97ea,	// (0x00038ed0) battery_pane_g2_ParamLimits

0x97ea,	// (0x00038ed0) battery_pane_g2

0x0001,

0xf784,	// (0x0003ee6a) battery_pane_g_ParamLimits

0xf784,	// (0x0003ee6a) battery_pane_g

0xaa49,	// (0x0003a12f) uni_indicator_pane_g1

0xaa5f,	// (0x0003a145) uni_indicator_pane_g2

0xaa75,	// (0x0003a15b) uni_indicator_pane_g3

0x0005,

0xf8fa,	// (0x0003efe0) uni_indicator_pane_g

0x8ebf,	// (0x000385a5) navi_icon_pane_ParamLimits

0x8ebf,	// (0x000385a5) navi_icon_pane

0x8e06,	// (0x000384ec) navi_midp_pane

0x8edb,	// (0x000385c1) navi_navi_pane

0x8ee5,	// (0x000385cb) navi_text_pane_ParamLimits

0x8ee5,	// (0x000385cb) navi_text_pane

0xf01d,	// (0x0003e703) status_small_wait_pane_g1

0x24ed,	// (0x00031bd3) status_small_wait_pane_g2

0x0001,

0xf8f5,	// (0x0003efdb) status_small_wait_pane_g

0xa75c,	// (0x00039e42) navi_navi_icon_text_pane

0xa764,	// (0x00039e4a) navi_navi_pane_g1_ParamLimits

0xa764,	// (0x00039e4a) navi_navi_pane_g1

0xa776,	// (0x00039e5c) navi_navi_pane_g2_ParamLimits

0xa776,	// (0x00039e5c) navi_navi_pane_g2

0x0001,

0xf8c3,	// (0x0003efa9) navi_navi_pane_g_ParamLimits

0xf8c3,	// (0x0003efa9) navi_navi_pane_g

0xa788,	// (0x00039e6e) navi_navi_tabs_pane

0xa791,	// (0x00039e77) navi_navi_text_pane

0xa75c,	// (0x00039e42) navi_navi_volume_pane

0xa738,	// (0x00039e1e) navi_text_pane_t1

0xa72c,	// (0x00039e12) navi_icon_pane_g1

0xa67f,	// (0x00039d65) navi_navi_text_pane_t1

0x73d9,	// (0x00036abf) navi_navi_volume_pane_g1

0x73e1,	// (0x00036ac7) volume_small_pane

0xa5e5,	// (0x00039ccb) navi_navi_icon_text_pane_g1

0xa5ed,	// (0x00039cd3) navi_navi_icon_text_pane_t1

0x8edb,	// (0x000385c1) navi_tabs_2_long_pane

0x8edb,	// (0x000385c1) navi_tabs_2_pane

0x8edb,	// (0x000385c1) navi_tabs_3_long_pane

0x8edb,	// (0x000385c1) navi_tabs_3_pane

0x8edb,	// (0x000385c1) navi_tabs_4_pane

0x73b9,	// (0x00036a9f) tabs_2_active_pane_ParamLimits

0x73b9,	// (0x00036a9f) tabs_2_active_pane

0x73c9,	// (0x00036aaf) tabs_2_passive_pane_ParamLimits

0x73c9,	// (0x00036aaf) tabs_2_passive_pane

0x7387,	// (0x00036a6d) tabs_3_active_pane_ParamLimits

0x7387,	// (0x00036a6d) tabs_3_active_pane

0x7397,	// (0x00036a7d) tabs_3_passive_pane_ParamLimits

0x7397,	// (0x00036a7d) tabs_3_passive_pane

0x73a8,	// (0x00036a8e) tabs_3_passive_pane_cp_ParamLimits

0x73a8,	// (0x00036a8e) tabs_3_passive_pane_cp

0x733b,	// (0x00036a21) tabs_4_active_pane_ParamLimits

0x733b,	// (0x00036a21) tabs_4_active_pane

0x734e,	// (0x00036a34) tabs_4_passive_pane_ParamLimits

0x734e,	// (0x00036a34) tabs_4_passive_pane

0x735f,	// (0x00036a45) tabs_4_passive_pane_cp_ParamLimits

0x735f,	// (0x00036a45) tabs_4_passive_pane_cp

0x7370,	// (0x00036a56) tabs_4_passive_pane_cp2_ParamLimits

0x7370,	// (0x00036a56) tabs_4_passive_pane_cp2

0x7317,	// (0x000369fd) tabs_2_long_active_pane_ParamLimits

0x7317,	// (0x000369fd) tabs_2_long_active_pane

0x7329,	// (0x00036a0f) tabs_2_long_passive_pane_ParamLimits

0x7329,	// (0x00036a0f) tabs_2_long_passive_pane

0x72d8,	// (0x000369be) tabs_3_long_active_pane_ParamLimits

0x72d8,	// (0x000369be) tabs_3_long_active_pane

0x72eb,	// (0x000369d1) tabs_3_long_passive_pane_ParamLimits

0x72eb,	// (0x000369d1) tabs_3_long_passive_pane

0x7304,	// (0x000369ea) tabs_3_long_passive_pane_cp_ParamLimits

0x7304,	// (0x000369ea) tabs_3_long_passive_pane_cp

0x727e,	// (0x00036964) volume_small_pane_g1

0x7287,	// (0x0003696d) volume_small_pane_g2

0x7290,	// (0x00036976) volume_small_pane_g3

0x7299,	// (0x0003697f) volume_small_pane_g4

0x72a2,	// (0x00036988) volume_small_pane_g5

0x72ab,	// (0x00036991) volume_small_pane_g6

0x72b4,	// (0x0003699a) volume_small_pane_g7

0x72bd,	// (0x000369a3) volume_small_pane_g8

0x72c6,	// (0x000369ac) volume_small_pane_g9

0x72cf,	// (0x000369b5) volume_small_pane_g10

0x0009,

0xf88f,	// (0x0003ef75) volume_small_pane_g

0xf4dd,	// (0x0003ebc3) bg_active_tab_pane_cp2_ParamLimits

0xf4dd,	// (0x0003ebc3) bg_active_tab_pane_cp2

0x55c2,	// (0x00034ca8) tabs_3_active_pane_g1

0x55ca,	// (0x00034cb0) tabs_3_active_pane_t1

0xf4dd,	// (0x0003ebc3) bg_passive_tab_pane_cp2_ParamLimits

0xf4dd,	// (0x0003ebc3) bg_passive_tab_pane_cp2

0x55c2,	// (0x00034ca8) tabs_3_passive_pane_g1

0x55ca,	// (0x00034cb0) tabs_3_passive_pane_t1

0xf4dd,	// (0x0003ebc3) bg_active_tab_pane_cp3_ParamLimits

0xf4dd,	// (0x0003ebc3) bg_active_tab_pane_cp3

0x55dc,	// (0x00034cc2) tabs_4_active_pane_g1

0x55e4,	// (0x00034cca) tabs_4_active_pane_t1

0xf4dd,	// (0x0003ebc3) bg_passive_tab_pane_cp3_ParamLimits

0xf4dd,	// (0x0003ebc3) bg_passive_tab_pane_cp3

0x55dc,	// (0x00034cc2) tabs_4_1_passive_pane_g1

0x55e4,	// (0x00034cca) tabs_4_1_passive_pane_t1

0x938f,	// (0x00038a75) list_highlight_pane_cp2

0xacb2,	// (0x0003a398) list_set_pane_ParamLimits

0xacb2,	// (0x0003a398) list_set_pane

0xad74,	// (0x0003a45a) main_pane_set_t1_ParamLimits

0xad74,	// (0x0003a45a) main_pane_set_t1

0xad94,	// (0x0003a47a) main_pane_set_t2_ParamLimits

0xad94,	// (0x0003a47a) main_pane_set_t2

0xada8,	// (0x0003a48e) main_pane_set_t3_ParamLimits

0xada8,	// (0x0003a48e) main_pane_set_t3

0xadbc,	// (0x0003a4a2) main_pane_set_t4_ParamLimits

0xadbc,	// (0x0003a4a2) main_pane_set_t4

0x0003,

0xf95f,	// (0x0003f045) main_pane_set_t_ParamLimits

0xf95f,	// (0x0003f045) main_pane_set_t

0xadd0,	// (0x0003a4b6) setting_code_pane

0xadda,	// (0x0003a4c0) setting_slider_graphic_pane

0xadda,	// (0x0003a4c0) setting_slider_pane

0xadda,	// (0x0003a4c0) setting_text_pane

0xadda,	// (0x0003a4c0) setting_volume_pane

0x55f6,	// (0x00034cdc) volume_set_pane

0xf4dd,	// (0x0003ebc3) bg_set_opt_pane_cp

0x5600,	// (0x00034ce6) setting_slider_pane_t1

0x5619,	// (0x00034cff) setting_slider_pane_t2

0x5633,	// (0x00034d19) setting_slider_pane_t3

0x0002,

0xf537,	// (0x0003ec1d) setting_slider_pane_t

0x564b,	// (0x00034d31) slider_set_pane

0xf027,	// (0x0003e70d) bg_set_opt_pane_cp2

0xf4eb,	// (0x0003ebd1) setting_slider_graphic_pane_g1

0x5661,	// (0x00034d47) setting_slider_graphic_pane_t1

0x5671,	// (0x00034d57) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x0003ec24) setting_slider_graphic_pane_t

0x5681,	// (0x00034d67) slider_set_pane_cp

0xf027,	// (0x0003e70d) input_focus_pane_cp1

0xac73,	// (0x0003a359) list_set_text_pane

0xf01d,	// (0x0003e703) setting_text_pane_g1

0xf027,	// (0x0003e70d) input_focus_pane_cp2

0xf01d,	// (0x0003e703) setting_code_pane_g1

0xf4f4,	// (0x0003ebda) setting_code_pane_t1

0x3c02,	// (0x000332e8) set_text_pane_t1_ParamLimits

0x3c02,	// (0x000332e8) set_text_pane_t1

0x2886,	// (0x00031f6c) set_opt_bg_pane_g1

0x288e,	// (0x00031f74) set_opt_bg_pane_g2

0xac4b,	// (0x0003a331) set_opt_bg_pane_g3

0x289e,	// (0x00031f84) set_opt_bg_pane_g4

0x28a6,	// (0x00031f8c) set_opt_bg_pane_g5

0x28ae,	// (0x00031f94) set_opt_bg_pane_g6

0xac55,	// (0x0003a33b) set_opt_bg_pane_g7

0xac5f,	// (0x0003a345) set_opt_bg_pane_g8

0xac69,	// (0x0003a34f) set_opt_bg_pane_g9

0x0008,

0xf94c,	// (0x0003f032) set_opt_bg_pane_g

0xac3e,	// (0x0003a324) slider_set_pane_g1

0x748a,	// (0x00036b70) slider_set_pane_g2

0x0006,

0xf93d,	// (0x0003f023) slider_set_pane_g

0x73ea,	// (0x00036ad0) volume_set_pane_g1

0x73f4,	// (0x00036ada) volume_set_pane_g2

0x73fe,	// (0x00036ae4) volume_set_pane_g3

0x7408,	// (0x00036aee) volume_set_pane_g4

0x7412,	// (0x00036af8) volume_set_pane_g5

0x741c,	// (0x00036b02) volume_set_pane_g6

0x7426,	// (0x00036b0c) volume_set_pane_g7

0x7430,	// (0x00036b16) volume_set_pane_g8

0x743a,	// (0x00036b20) volume_set_pane_g9

0x7444,	// (0x00036b2a) volume_set_pane_g10

0x0009,

0xf915,	// (0x0003effb) volume_set_pane_g

0x5689,	// (0x00034d6f) indicator_pane_ParamLimits

0x5689,	// (0x00034d6f) indicator_pane

0x5695,	// (0x00034d7b) main_idle_pane_g2_ParamLimits

0x5695,	// (0x00034d7b) main_idle_pane_g2

0x56bd,	// (0x00034da3) main_pane_idle_g1_ParamLimits

0x56bd,	// (0x00034da3) main_pane_idle_g1

0xf502,	// (0x0003ebe8) popup_clock_digital_analogue_window_ParamLimits

0xf502,	// (0x0003ebe8) popup_clock_digital_analogue_window

0x56cb,	// (0x00034db1) soft_indicator_pane_ParamLimits

0x56cb,	// (0x00034db1) soft_indicator_pane

0x56d9,	// (0x00034dbf) wallpaper_pane_ParamLimits

0x56d9,	// (0x00034dbf) wallpaper_pane

0xf01d,	// (0x0003e703) wallpaper_pane_g1

0x56e5,	// (0x00034dcb) indicator_pane_g1_ParamLimits

0x56e5,	// (0x00034dcb) indicator_pane_g1

0xb0bd,	// (0x0003a7a3) navi_navi_icon_text_pane_srt_g1

0x223f,	// (0x00031925) soft_indicator_pane_t1

0x2259,	// (0x0003193f) aid_ps_area_pane

0x56f1,	// (0x00034dd7) aid_ps_clock_pane

0x226a,	// (0x00031950) aid_ps_indicator_pane

0x2276,	// (0x0003195c) indicator_ps_pane_ParamLimits

0x2276,	// (0x0003195c) indicator_ps_pane

0x2285,	// (0x0003196b) power_save_pane_g1_ParamLimits

0x2285,	// (0x0003196b) power_save_pane_g1

0x2291,	// (0x00031977) power_save_pane_g2_ParamLimits

0x2291,	// (0x00031977) power_save_pane_g2

0x5119,	// (0x000347ff) aid_navinavi_width_pane

0x2259,	// (0x0003193f) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x0003ec29) power_save_pane_g_ParamLimits

0xf543,	// (0x0003ec29) power_save_pane_g

0x229f,	// (0x00031985) power_save_pane_t1_ParamLimits

0x229f,	// (0x00031985) power_save_pane_t1

0x56f1,	// (0x00034dd7) aid_ps_clock_pane_ParamLimits

0x226a,	// (0x00031950) aid_ps_indicator_pane_ParamLimits

0x22b1,	// (0x00031997) power_save_pane_t4_ParamLimits

0x22b1,	// (0x00031997) power_save_pane_t4

0x0001,

0xf548,	// (0x0003ec2e) power_save_pane_t_ParamLimits

0xf548,	// (0x0003ec2e) power_save_pane_t

0x22db,	// (0x000319c1) power_save_t3_ParamLimits

0x22db,	// (0x000319c1) power_save_t3

0x22c6,	// (0x000319ac) power_save_t2_ParamLimits

0x22c6,	// (0x000319ac) power_save_t2

0x22f0,	// (0x000319d6) indicator_ps_pane_g1

0x56ff,	// (0x00034de5) ai_gene_pane_ParamLimits

0x56ff,	// (0x00034de5) ai_gene_pane

0x570b,	// (0x00034df1) ai_links_pane_ParamLimits

0x570b,	// (0x00034df1) ai_links_pane

0x5717,	// (0x00034dfd) indicator_pane_cp1_ParamLimits

0x5717,	// (0x00034dfd) indicator_pane_cp1

0x5723,	// (0x00034e09) main_pane_idle_g1_cp_ParamLimits

0x5723,	// (0x00034e09) main_pane_idle_g1_cp

0x22f9,	// (0x000319df) popup_ai_links_title_window

0x572f,	// (0x00034e15) soft_indicator_pane_cp1_ParamLimits

0x572f,	// (0x00034e15) soft_indicator_pane_cp1

0xaa37,	// (0x0003a11d) ai_links_pane_g1

0xaa40,	// (0x0003a126) grid_ai_links_pane

0xaa1c,	// (0x0003a102) ai_gene_pane_1

0xaa25,	// (0x0003a10b) ai_gene_pane_2

0xaa2e,	// (0x0003a114) list_highlight_pane_cp4

0xa9fc,	// (0x0003a0e2) cell_ai_link_pane_ParamLimits

0xa9fc,	// (0x0003a0e2) cell_ai_link_pane

0xa9f4,	// (0x0003a0da) cell_ai_link_pane_g1

0x24ed,	// (0x00031bd3) cell_ai_link_pane_g2

0x0001,

0xf8f0,	// (0x0003efd6) cell_ai_link_pane_g

0xf027,	// (0x0003e70d) grid_highlight_cp2

0xf027,	// (0x0003e70d) bg_popup_sub_pane_cp1

0x2310,	// (0x000319f6) popup_ai_links_title_window_t1

0xa940,	// (0x0003a026) ai_gene_pane_1_g1_ParamLimits

0xa940,	// (0x0003a026) ai_gene_pane_1_g1

0xa94c,	// (0x0003a032) ai_gene_pane_1_g2_ParamLimits

0xa94c,	// (0x0003a032) ai_gene_pane_1_g2

0x0001,

0xf8e6,	// (0x0003efcc) ai_gene_pane_1_g_ParamLimits

0xf8e6,	// (0x0003efcc) ai_gene_pane_1_g

0xa959,	// (0x0003a03f) ai_gene_pane_1_t1_ParamLimits

0xa959,	// (0x0003a03f) ai_gene_pane_1_t1

0xa98d,	// (0x0003a073) grid_ai_soft_ind_pane

0xa92b,	// (0x0003a011) ai_gene_pane_2_t1_ParamLimits

0xa92b,	// (0x0003a011) ai_gene_pane_2_t1

0x573b,	// (0x00034e21) main_pane_empty_t1_ParamLimits

0x573b,	// (0x00034e21) main_pane_empty_t1

0x5753,	// (0x00034e39) main_pane_empty_t2_ParamLimits

0x5753,	// (0x00034e39) main_pane_empty_t2

0x5768,	// (0x00034e4e) main_pane_empty_t3_ParamLimits

0x5768,	// (0x00034e4e) main_pane_empty_t3

0x577a,	// (0x00034e60) main_pane_empty_t4_ParamLimits

0x577a,	// (0x00034e60) main_pane_empty_t4

0x578c,	// (0x00034e72) main_pane_empty_t5_ParamLimits

0x578c,	// (0x00034e72) main_pane_empty_t5

0x0004,

0xf54d,	// (0x0003ec33) main_pane_empty_t_ParamLimits

0xf54d,	// (0x0003ec33) main_pane_empty_t

0x5f2e,	// (0x00035614) bg_popup_window_pane_ParamLimits

0x5f2e,	// (0x00035614) bg_popup_window_pane

0xa68d,	// (0x00039d73) find_popup_pane_cp2_ParamLimits

0xa68d,	// (0x00039d73) find_popup_pane_cp2

0xa699,	// (0x00039d7f) heading_pane_ParamLimits

0xa699,	// (0x00039d7f) heading_pane

0xf027,	// (0x0003e70d) bg_popup_sub_pane

0xa607,	// (0x00039ced) bg_popup_window_pane_g1_ParamLimits

0xa607,	// (0x00039ced) bg_popup_window_pane_g1

0xa613,	// (0x00039cf9) bg_popup_window_pane_g2_ParamLimits

0xa613,	// (0x00039cf9) bg_popup_window_pane_g2

0xa61f,	// (0x00039d05) bg_popup_window_pane_g3_ParamLimits

0xa61f,	// (0x00039d05) bg_popup_window_pane_g3

0xa62b,	// (0x00039d11) bg_popup_window_pane_g4_ParamLimits

0xa62b,	// (0x00039d11) bg_popup_window_pane_g4

0xa637,	// (0x00039d1d) bg_popup_window_pane_g5_ParamLimits

0xa637,	// (0x00039d1d) bg_popup_window_pane_g5

0xa643,	// (0x00039d29) bg_popup_window_pane_g6_ParamLimits

0xa643,	// (0x00039d29) bg_popup_window_pane_g6

0xa64f,	// (0x00039d35) bg_popup_window_pane_g7_ParamLimits

0xa64f,	// (0x00039d35) bg_popup_window_pane_g7

0xa65b,	// (0x00039d41) bg_popup_window_pane_g8_ParamLimits

0xa65b,	// (0x00039d41) bg_popup_window_pane_g8

0xa667,	// (0x00039d4d) bg_popup_window_pane_g9_ParamLimits

0xa667,	// (0x00039d4d) bg_popup_window_pane_g9

0xa673,	// (0x00039d59) bg_popup_window_pane_g10_ParamLimits

0xa673,	// (0x00039d59) bg_popup_window_pane_g10

0x0009,

0xf8ae,	// (0x0003ef94) bg_popup_window_pane_g_ParamLimits

0xf8ae,	// (0x0003ef94) bg_popup_window_pane_g

0xa59c,	// (0x00039c82) bg_popup_heading_pane_ParamLimits

0xa59c,	// (0x00039c82) bg_popup_heading_pane

0x75b5,	// (0x00036c9b) tabs_4_passive_pane_cp_srt_ParamLimits

0x75b5,	// (0x00036c9b) tabs_4_passive_pane_cp_srt

0x75c7,	// (0x00036cad) tabs_4_passive_pane_srt_ParamLimits

0xa5b0,	// (0x00039c96) heading_pane_g2

0x75c7,	// (0x00036cad) tabs_4_passive_pane_srt

0x938f,	// (0x00038a75) bg_passive_tab_pane_cp3_srt_ParamLimits

0x938f,	// (0x00038a75) bg_passive_tab_pane_cp3_srt

0xa5b8,	// (0x00039c9e) heading_pane_t1_ParamLimits

0xa5b8,	// (0x00039c9e) heading_pane_t1

0xa5cf,	// (0x00039cb5) heading_pane_t2_ParamLimits

0xa5cf,	// (0x00039cb5) heading_pane_t2

0x0001,

0xf8a9,	// (0x0003ef8f) heading_pane_t_ParamLimits

0xf8a9,	// (0x0003ef8f) heading_pane_t

0xa0c7,	// (0x000397ad) bg_popup_heading_pane_g1

0xa176,	// (0x0003985c) bg_popup_heading_pane_g2

0xa180,	// (0x00039866) bg_popup_heading_pane_g3

0xa18a,	// (0x00039870) bg_popup_heading_pane_g4

0xa194,	// (0x0003987a) bg_popup_heading_pane_g5

0xa19e,	// (0x00039884) bg_popup_heading_pane_g6

0xa1a6,	// (0x0003988c) bg_popup_heading_pane_g7

0xa1ae,	// (0x00039894) bg_popup_heading_pane_g8

0xa1b8,	// (0x0003989e) bg_popup_heading_pane_g9

0x0008,

0xf865,	// (0x0003ef4b) bg_popup_heading_pane_g

0x98bf,	// (0x00038fa5) bg_popup_sub_pane_g1

0x98cf,	// (0x00038fb5) bg_popup_sub_pane_g2

0x98c7,	// (0x00038fad) bg_popup_sub_pane_g3

0x98df,	// (0x00038fc5) bg_popup_sub_pane_g4

0x98d7,	// (0x00038fbd) bg_popup_sub_pane_g5

0x98e7,	// (0x00038fcd) bg_popup_sub_pane_g6

0x98ef,	// (0x00038fd5) bg_popup_sub_pane_g7

0x98ff,	// (0x00038fe5) bg_popup_sub_pane_g8

0x98f7,	// (0x00038fdd) bg_popup_sub_pane_g9

0x0008,

0xf83f,	// (0x0003ef25) bg_popup_sub_pane_g

0xf519,	// (0x0003ebff) bg_popup_window_pane_cp5_ParamLimits

0xf519,	// (0x0003ebff) bg_popup_window_pane_cp5

0x232d,	// (0x00031a13) popup_note_window_g1_ParamLimits

0x232d,	// (0x00031a13) popup_note_window_g1

0x2339,	// (0x00031a1f) popup_note_window_t1_ParamLimits

0x2339,	// (0x00031a1f) popup_note_window_t1

0x234f,	// (0x00031a35) popup_note_window_t2_ParamLimits

0x234f,	// (0x00031a35) popup_note_window_t2

0x2365,	// (0x00031a4b) popup_note_window_t3_ParamLimits

0x2365,	// (0x00031a4b) popup_note_window_t3

0x237b,	// (0x00031a61) popup_note_window_t4_ParamLimits

0x237b,	// (0x00031a61) popup_note_window_t4

0x23a3,	// (0x00031a89) popup_note_window_t5_ParamLimits

0x23a3,	// (0x00031a89) popup_note_window_t5

0x0004,

0xf558,	// (0x0003ec3e) popup_note_window_t_ParamLimits

0xf558,	// (0x0003ec3e) popup_note_window_t

0x23ed,	// (0x00031ad3) bg_popup_window_pane_cp6_ParamLimits

0x23ed,	// (0x00031ad3) bg_popup_window_pane_cp6

0xa043,	// (0x00039729) popup_note_image_window_g1_ParamLimits

0xa043,	// (0x00039729) popup_note_image_window_g1

0xa04f,	// (0x00039735) popup_note_image_window_g2_ParamLimits

0xa04f,	// (0x00039735) popup_note_image_window_g2

0x0001,

0xf833,	// (0x0003ef19) popup_note_image_window_g_ParamLimits

0xf833,	// (0x0003ef19) popup_note_image_window_g

0xa068,	// (0x0003974e) popup_note_image_window_t1_ParamLimits

0xa068,	// (0x0003974e) popup_note_image_window_t1

0xa081,	// (0x00039767) popup_note_image_window_t2_ParamLimits

0xa081,	// (0x00039767) popup_note_image_window_t2

0xa09a,	// (0x00039780) popup_note_image_window_t3_ParamLimits

0xa09a,	// (0x00039780) popup_note_image_window_t3

0x0002,

0xf838,	// (0x0003ef1e) popup_note_image_window_t_ParamLimits

0xf838,	// (0x0003ef1e) popup_note_image_window_t

0x9f03,	// (0x000395e9) bg_popup_window_pane_cp7_ParamLimits

0x9f03,	// (0x000395e9) bg_popup_window_pane_cp7

0x9f33,	// (0x00039619) popup_note_wait_window_g1_ParamLimits

0x9f33,	// (0x00039619) popup_note_wait_window_g1

0x9f3f,	// (0x00039625) popup_note_wait_window_g2_ParamLimits

0x9f3f,	// (0x00039625) popup_note_wait_window_g2

0x0002,

0xf821,	// (0x0003ef07) popup_note_wait_window_g_ParamLimits

0xf821,	// (0x0003ef07) popup_note_wait_window_g

0x9f57,	// (0x0003963d) popup_note_wait_window_t1_ParamLimits

0x9f57,	// (0x0003963d) popup_note_wait_window_t1

0x9f7e,	// (0x00039664) popup_note_wait_window_t2_ParamLimits

0x9f7e,	// (0x00039664) popup_note_wait_window_t2

0x9f9c,	// (0x00039682) popup_note_wait_window_t3_ParamLimits

0x9f9c,	// (0x00039682) popup_note_wait_window_t3

0x9faf,	// (0x00039695) popup_note_wait_window_t4_ParamLimits

0x9faf,	// (0x00039695) popup_note_wait_window_t4

0x0004,

0xf828,	// (0x0003ef0e) popup_note_wait_window_t_ParamLimits

0xf828,	// (0x0003ef0e) popup_note_wait_window_t

0x9fd4,	// (0x000396ba) wait_bar_pane_ParamLimits

0x9fd4,	// (0x000396ba) wait_bar_pane

0xf027,	// (0x0003e70d) wait_anim_pane

0xf027,	// (0x0003e70d) wait_border_pane

0xf01d,	// (0x0003e703) wait_anim_pane_g1

0xf01d,	// (0x0003e703) wait_anim_pane_g2

0x0001,

0xf6dc,	// (0x0003edc2) wait_anim_pane_g

0x9ea7,	// (0x0003958d) wait_border_pane_g1

0x9eb2,	// (0x00039598) wait_border_pane_g2

0x9ebb,	// (0x000395a1) wait_border_pane_g3

0x0002,

0xf81a,	// (0x0003ef00) wait_border_pane_g

0x9d11,	// (0x000393f7) bg_popup_window_pane_cp16_ParamLimits

0x9d11,	// (0x000393f7) bg_popup_window_pane_cp16

0x9e11,	// (0x000394f7) indicator_popup_pane_cp4_ParamLimits

0x9e11,	// (0x000394f7) indicator_popup_pane_cp4

0x9e25,	// (0x0003950b) popup_query_data_window_t1_ParamLimits

0x9e25,	// (0x0003950b) popup_query_data_window_t1

0x9e37,	// (0x0003951d) popup_query_data_window_t2_ParamLimits

0x9e37,	// (0x0003951d) popup_query_data_window_t2

0x9e50,	// (0x00039536) popup_query_data_window_t3_ParamLimits

0x9e50,	// (0x00039536) popup_query_data_window_t3

0x0002,

0xf813,	// (0x0003eef9) popup_query_data_window_t_ParamLimits

0xf813,	// (0x0003eef9) popup_query_data_window_t

0x9e6a,	// (0x00039550) query_popup_data_pane_ParamLimits

0x9e6a,	// (0x00039550) query_popup_data_pane

0x9e7e,	// (0x00039564) query_popup_data_pane_cp1_ParamLimits

0x9e7e,	// (0x00039564) query_popup_data_pane_cp1

0x9d11,	// (0x000393f7) bg_popup_window_pane_cp10_ParamLimits

0x9d11,	// (0x000393f7) bg_popup_window_pane_cp10

0x9d43,	// (0x00039429) indicator_popup_pane_ParamLimits

0x9d43,	// (0x00039429) indicator_popup_pane

0x9d65,	// (0x0003944b) popup_query_code_window_t1_ParamLimits

0x9d65,	// (0x0003944b) popup_query_code_window_t1

0x9d7f,	// (0x00039465) popup_query_code_window_t2_ParamLimits

0x9d7f,	// (0x00039465) popup_query_code_window_t2

0x9dc8,	// (0x000394ae) popup_query_code_window_t3_ParamLimits

0x9dc8,	// (0x000394ae) popup_query_code_window_t3

0x0002,

0xf80c,	// (0x0003eef2) popup_query_code_window_t_ParamLimits

0xf80c,	// (0x0003eef2) popup_query_code_window_t

0x9df7,	// (0x000394dd) query_popup_pane_ParamLimits

0x9df7,	// (0x000394dd) query_popup_pane

0x23ed,	// (0x00031ad3) bg_popup_window_pane_cp15_ParamLimits

0x23ed,	// (0x00031ad3) bg_popup_window_pane_cp15

0x240d,	// (0x00031af3) indicator_popup_pane_cp1_ParamLimits

0x240d,	// (0x00031af3) indicator_popup_pane_cp1

0x2420,	// (0x00031b06) indicator_popup_pane_cp2_ParamLimits

0x2420,	// (0x00031b06) indicator_popup_pane_cp2

0x243b,	// (0x00031b21) popup_query_data_code_window_g1_ParamLimits

0x243b,	// (0x00031b21) popup_query_data_code_window_g1

0x244e,	// (0x00031b34) popup_query_data_code_window_t1_ParamLimits

0x244e,	// (0x00031b34) popup_query_data_code_window_t1

0x2460,	// (0x00031b46) popup_query_data_code_window_t2_ParamLimits

0x2460,	// (0x00031b46) popup_query_data_code_window_t2

0x2472,	// (0x00031b58) popup_query_data_code_window_t3_ParamLimits

0x2472,	// (0x00031b58) popup_query_data_code_window_t3

0x2488,	// (0x00031b6e) popup_query_data_code_window_t4_ParamLimits

0x2488,	// (0x00031b6e) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x0003ec49) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x0003ec49) popup_query_data_code_window_t

0x716a,	// (0x00036850) list_single_midp_graphic_pane_g3

0x24a2,	// (0x00031b88) query_popup_data_pane_cp2_ParamLimits

0x24b5,	// (0x00031b9b) query_popup_pane_cp2_ParamLimits

0x24b5,	// (0x00031b9b) query_popup_pane_cp2

0xf027,	// (0x0003e70d) bg_popup_window_pane_cp11

0x9cf5,	// (0x000393db) heading_pane_cp5

0x9cfd,	// (0x000393e3) listscroll_popup_info_pane

0xf027,	// (0x0003e70d) input_focus_pane_cp3

0x24d0,	// (0x00031bb6) query_popup_pane_t1

0x24de,	// (0x00031bc4) list_popup_info_pane_ParamLimits

0x24de,	// (0x00031bc4) list_popup_info_pane

0x24ed,	// (0x00031bd3) listscroll_popup_info_pane_g1

0x24f5,	// (0x00031bdb) scroll_pane_cp7

0x24ff,	// (0x00031be5) popup_info_list_pane_t1_ParamLimits

0x24ff,	// (0x00031be5) popup_info_list_pane_t1

0x2519,	// (0x00031bff) popup_info_list_pane_t2_ParamLimits

0x2519,	// (0x00031bff) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x0003ec52) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x0003ec52) popup_info_list_pane_t

0xf027,	// (0x0003e70d) bg_popup_window_pane_cp12

0xb0d7,	// (0x0003a7bd) find_popup_pane

0xf4dd,	// (0x0003ebc3) bg_popup_window_pane_cp3

0x2533,	// (0x00031c19) heading_pane_cp3

0x2542,	// (0x00031c28) listscroll_popup_graphic_pane

0xf027,	// (0x0003e70d) bg_popup_window_pane_cp4

0x57ee,	// (0x00034ed4) heading_pane_cp4

0x2552,	// (0x00031c38) listscroll_popup_colour_pane

0x57f8,	// (0x00034ede) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x57f8,	// (0x00034ede) cell_large_graphic_colour_none_popup_pane

0x580c,	// (0x00034ef2) grid_large_graphic_colour_popup_pane_ParamLimits

0x580c,	// (0x00034ef2) grid_large_graphic_colour_popup_pane

0x5838,	// (0x00034f1e) listscroll_popup_colour_pane_g1_ParamLimits

0x5838,	// (0x00034f1e) listscroll_popup_colour_pane_g1

0x584f,	// (0x00034f35) listscroll_popup_colour_pane_g2_ParamLimits

0x584f,	// (0x00034f35) listscroll_popup_colour_pane_g2

0x5866,	// (0x00034f4c) listscroll_popup_colour_pane_g3_ParamLimits

0x5866,	// (0x00034f4c) listscroll_popup_colour_pane_g3

0x5876,	// (0x00034f5c) listscroll_popup_colour_pane_g4_ParamLimits

0x5876,	// (0x00034f5c) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x0003ec57) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x0003ec57) listscroll_popup_colour_pane_g

0x255a,	// (0x00031c40) scroll_pane_cp6_ParamLimits

0x255a,	// (0x00031c40) scroll_pane_cp6

0x588a,	// (0x00034f70) cell_large_graphic_colour_popup_pane_ParamLimits

0x588a,	// (0x00034f70) cell_large_graphic_colour_popup_pane

0x256c,	// (0x00031c52) cell_large_graphic_colour_none_popup_pane_t1

0xf027,	// (0x0003e70d) grid_highlight_pane_cp5

0x257b,	// (0x00031c61) cell_large_graphic_colour_popup_pane_g1

0x2583,	// (0x00031c69) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x0003ec60) cell_large_graphic_colour_popup_pane_g

0x258b,	// (0x00031c71) cell_large_graphic_colour_popup_pane_g2_copy1

0x2594,	// (0x00031c7a) grid_highlight_pane_cp4

0x259c,	// (0x00031c82) bg_popup_window_pane_cp8_ParamLimits

0x259c,	// (0x00031c82) bg_popup_window_pane_cp8

0x25b7,	// (0x00031c9d) popup_snote_single_text_window_g1_ParamLimits

0x25b7,	// (0x00031c9d) popup_snote_single_text_window_g1

0x25c9,	// (0x00031caf) popup_snote_single_text_window_t1_ParamLimits

0x25c9,	// (0x00031caf) popup_snote_single_text_window_t1

0x25dc,	// (0x00031cc2) popup_snote_single_text_window_t2_ParamLimits

0x25dc,	// (0x00031cc2) popup_snote_single_text_window_t2

0x25ef,	// (0x00031cd5) popup_snote_single_text_window_t3_ParamLimits

0x25ef,	// (0x00031cd5) popup_snote_single_text_window_t3

0x2628,	// (0x00031d0e) popup_snote_single_text_window_t4_ParamLimits

0x2628,	// (0x00031d0e) popup_snote_single_text_window_t4

0x265c,	// (0x00031d42) popup_snote_single_text_window_t5_ParamLimits

0x265c,	// (0x00031d42) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x0003ec65) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x0003ec65) popup_snote_single_text_window_t

0x268b,	// (0x00031d71) bg_popup_window_pane_cp9_ParamLimits

0x268b,	// (0x00031d71) bg_popup_window_pane_cp9

0x25b7,	// (0x00031c9d) popup_snote_single_graphic_window_g1_ParamLimits

0x25b7,	// (0x00031c9d) popup_snote_single_graphic_window_g1

0x2699,	// (0x00031d7f) popup_snote_single_graphic_window_g2_ParamLimits

0x2699,	// (0x00031d7f) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x0003ec70) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x0003ec70) popup_snote_single_graphic_window_g

0x26a5,	// (0x00031d8b) popup_snote_single_graphic_window_t1_ParamLimits

0x26a5,	// (0x00031d8b) popup_snote_single_graphic_window_t1

0x26b8,	// (0x00031d9e) popup_snote_single_graphic_window_t2_ParamLimits

0x26b8,	// (0x00031d9e) popup_snote_single_graphic_window_t2

0x26cb,	// (0x00031db1) popup_snote_single_graphic_window_t3_ParamLimits

0x26cb,	// (0x00031db1) popup_snote_single_graphic_window_t3

0x2704,	// (0x00031dea) popup_snote_single_graphic_window_t4_ParamLimits

0x2704,	// (0x00031dea) popup_snote_single_graphic_window_t4

0x2738,	// (0x00031e1e) popup_snote_single_graphic_window_t5_ParamLimits

0x2738,	// (0x00031e1e) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x0003ec75) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x0003ec75) popup_snote_single_graphic_window_t

0xb015,	// (0x0003a6fb) grid_graphic_popup_pane_ParamLimits

0xb015,	// (0x0003a6fb) grid_graphic_popup_pane

0xb043,	// (0x0003a729) listscroll_popup_graphic_pane_g1_ParamLimits

0xb043,	// (0x0003a729) listscroll_popup_graphic_pane_g1

0xb057,	// (0x0003a73d) listscroll_popup_graphic_pane_g2_ParamLimits

0xb057,	// (0x0003a73d) listscroll_popup_graphic_pane_g2

0x0001,

0xf989,	// (0x0003f06f) listscroll_popup_graphic_pane_g_ParamLimits

0xf989,	// (0x0003f06f) listscroll_popup_graphic_pane_g

0xb06b,	// (0x0003a751) scroll_pane_cp5

0xafa4,	// (0x0003a68a) cell_graphic_popup_pane_ParamLimits

0xafa4,	// (0x0003a68a) cell_graphic_popup_pane

0xaf85,	// (0x0003a66b) cell_graphic_popup_pane_g1

0xaf8d,	// (0x0003a673) cell_graphic_popup_pane_g2

0x258b,	// (0x00031c71) cell_graphic_popup_pane_g3

0x0002,

0xf982,	// (0x0003f068) cell_graphic_popup_pane_g

0xaf96,	// (0x0003a67c) cell_graphic_popup_pane_t2

0x2594,	// (0x00031c7a) grid_highlight_pane_cp3

0x2779,	// (0x00031e5f) list_gen_pane_ParamLimits

0x2779,	// (0x00031e5f) list_gen_pane

0x27a1,	// (0x00031e87) scroll_pane

0xaedd,	// (0x0003a5c3) bg_list_pane_g1_ParamLimits

0xaedd,	// (0x0003a5c3) bg_list_pane_g1

0xaefa,	// (0x0003a5e0) bg_list_pane_g2_ParamLimits

0xaefa,	// (0x0003a5e0) bg_list_pane_g2

0xaf0f,	// (0x0003a5f5) bg_list_pane_g3_ParamLimits

0xaf0f,	// (0x0003a5f5) bg_list_pane_g3

0xaf23,	// (0x0003a609) bg_list_pane_g4_ParamLimits

0xaf23,	// (0x0003a609) bg_list_pane_g4

0xaf37,	// (0x0003a61d) bg_list_pane_g5_ParamLimits

0xaf37,	// (0x0003a61d) bg_list_pane_g5

0x0004,

0xf977,	// (0x0003f05d) bg_list_pane_g_ParamLimits

0xf977,	// (0x0003f05d) bg_list_pane_g

0xae5e,	// (0x0003a544) list_double2_graphic_large_graphic_pane_ParamLimits

0xae5e,	// (0x0003a544) list_double2_graphic_large_graphic_pane

0xae5e,	// (0x0003a544) list_double2_graphic_pane_ParamLimits

0xae5e,	// (0x0003a544) list_double2_graphic_pane

0xae5e,	// (0x0003a544) list_double2_large_graphic_pane_ParamLimits

0xae5e,	// (0x0003a544) list_double2_large_graphic_pane

0xae5e,	// (0x0003a544) list_double2_pane_ParamLimits

0xae5e,	// (0x0003a544) list_double2_pane

0xae5e,	// (0x0003a544) list_double_graphic_heading_pane_ParamLimits

0xae5e,	// (0x0003a544) list_double_graphic_heading_pane

0xae5e,	// (0x0003a544) list_double_graphic_pane_ParamLimits

0xae5e,	// (0x0003a544) list_double_graphic_pane

0xae5e,	// (0x0003a544) list_double_heading_pane_ParamLimits

0xae5e,	// (0x0003a544) list_double_heading_pane

0xae5e,	// (0x0003a544) list_double_large_graphic_pane_ParamLimits

0xae5e,	// (0x0003a544) list_double_large_graphic_pane

0xae5e,	// (0x0003a544) list_double_number_pane_ParamLimits

0xae5e,	// (0x0003a544) list_double_number_pane

0xae5e,	// (0x0003a544) list_double_pane_ParamLimits

0xae5e,	// (0x0003a544) list_double_pane

0xae5e,	// (0x0003a544) list_double_time_pane_ParamLimits

0xae5e,	// (0x0003a544) list_double_time_pane

0xae5e,	// (0x0003a544) list_setting_number_pane_ParamLimits

0xae5e,	// (0x0003a544) list_setting_number_pane

0xae5e,	// (0x0003a544) list_setting_pane_ParamLimits

0xae5e,	// (0x0003a544) list_setting_pane

0x754a,	// (0x00036c30) list_single_2graphic_pane_ParamLimits

0x754a,	// (0x00036c30) list_single_2graphic_pane

0x754a,	// (0x00036c30) list_single_graphic_heading_pane_ParamLimits

0x754a,	// (0x00036c30) list_single_graphic_heading_pane

0x754a,	// (0x00036c30) list_single_graphic_pane_ParamLimits

0x754a,	// (0x00036c30) list_single_graphic_pane

0x754a,	// (0x00036c30) list_single_heading_pane_ParamLimits

0x754a,	// (0x00036c30) list_single_heading_pane

0xaec2,	// (0x0003a5a8) list_single_large_graphic_pane_ParamLimits

0xaec2,	// (0x0003a5a8) list_single_large_graphic_pane

0x754a,	// (0x00036c30) list_single_number_heading_pane_ParamLimits

0x754a,	// (0x00036c30) list_single_number_heading_pane

0x754a,	// (0x00036c30) list_single_number_pane_ParamLimits

0x754a,	// (0x00036c30) list_single_number_pane

0x754a,	// (0x00036c30) list_single_pane_ParamLimits

0x754a,	// (0x00036c30) list_single_pane

0xf027,	// (0x0003e70d) list_highlight_pane_cp1

0x58c1,	// (0x00034fa7) list_single_pane_g1_ParamLimits

0x58c1,	// (0x00034fa7) list_single_pane_g1

0x58cd,	// (0x00034fb3) list_single_pane_g2_ParamLimits

0x58cd,	// (0x00034fb3) list_single_pane_g2

0x0001,

0xf5a1,	// (0x0003ec87) list_single_pane_g_ParamLimits

0xf5a1,	// (0x0003ec87) list_single_pane_g

0x751c,	// (0x00036c02) list_single_pane_t1_ParamLimits

0x751c,	// (0x00036c02) list_single_pane_t1

0x58c1,	// (0x00034fa7) list_single_number_pane_g1_ParamLimits

0x58c1,	// (0x00034fa7) list_single_number_pane_g1

0x58cd,	// (0x00034fb3) list_single_number_pane_g2_ParamLimits

0x58cd,	// (0x00034fb3) list_single_number_pane_g2

0x0001,

0xf5a1,	// (0x0003ec87) list_single_number_pane_g_ParamLimits

0xf5a1,	// (0x0003ec87) list_single_number_pane_g

0x744e,	// (0x00036b34) list_single_number_pane_t1_ParamLimits

0x744e,	// (0x00036b34) list_single_number_pane_t1

0x7464,	// (0x00036b4a) list_single_number_pane_t2_ParamLimits

0x7464,	// (0x00036b4a) list_single_number_pane_t2

0x0001,

0xf938,	// (0x0003f01e) list_single_number_pane_t_ParamLimits

0xf938,	// (0x0003f01e) list_single_number_pane_t

0x58b5,	// (0x00034f9b) list_single_graphic_pane_g1_ParamLimits

0x58b5,	// (0x00034f9b) list_single_graphic_pane_g1

0x58c1,	// (0x00034fa7) list_single_graphic_pane_g2_ParamLimits

0x58c1,	// (0x00034fa7) list_single_graphic_pane_g2

0x58cd,	// (0x00034fb3) list_single_graphic_pane_g3_ParamLimits

0x58cd,	// (0x00034fb3) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x0003ec80) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x0003ec80) list_single_graphic_pane_g

0x58d9,	// (0x00034fbf) list_single_graphic_pane_t1_ParamLimits

0x58d9,	// (0x00034fbf) list_single_graphic_pane_t1

0x58c1,	// (0x00034fa7) list_single_heading_pane_g1_ParamLimits

0x58c1,	// (0x00034fa7) list_single_heading_pane_g1

0x58cd,	// (0x00034fb3) list_single_heading_pane_g2_ParamLimits

0x58cd,	// (0x00034fb3) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x0003ec87) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x0003ec87) list_single_heading_pane_g

0x58ef,	// (0x00034fd5) list_single_heading_pane_t1_ParamLimits

0x58ef,	// (0x00034fd5) list_single_heading_pane_t1

0x5905,	// (0x00034feb) list_single_heading_pane_t2_ParamLimits

0x5905,	// (0x00034feb) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x0003ec8c) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x0003ec8c) list_single_heading_pane_t

0x58c1,	// (0x00034fa7) list_single_number_heading_pane_g1_ParamLimits

0x58c1,	// (0x00034fa7) list_single_number_heading_pane_g1

0x58cd,	// (0x00034fb3) list_single_number_heading_pane_g2_ParamLimits

0x58cd,	// (0x00034fb3) list_single_number_heading_pane_g2

0x0001,

0xf5a1,	// (0x0003ec87) list_single_number_heading_pane_g_ParamLimits

0xf5a1,	// (0x0003ec87) list_single_number_heading_pane_g

0x58ef,	// (0x00034fd5) list_single_number_heading_pane_t1_ParamLimits

0x58ef,	// (0x00034fd5) list_single_number_heading_pane_t1

0x5917,	// (0x00034ffd) list_single_number_heading_pane_t2_ParamLimits

0x5917,	// (0x00034ffd) list_single_number_heading_pane_t2

0x5929,	// (0x0003500f) list_single_number_heading_pane_t3_ParamLimits

0x5929,	// (0x0003500f) list_single_number_heading_pane_t3

0x0002,

0xf5ab,	// (0x0003ec91) list_single_number_heading_pane_t_ParamLimits

0xf5ab,	// (0x0003ec91) list_single_number_heading_pane_t

0x593b,	// (0x00035021) list_single_graphic_heading_pane_g1_ParamLimits

0x593b,	// (0x00035021) list_single_graphic_heading_pane_g1

0x5947,	// (0x0003502d) list_single_graphic_heading_pane_g4_ParamLimits

0x5947,	// (0x0003502d) list_single_graphic_heading_pane_g4

0x58cd,	// (0x00034fb3) list_single_graphic_heading_pane_g5_ParamLimits

0x58cd,	// (0x00034fb3) list_single_graphic_heading_pane_g5

0x0002,

0xf5b2,	// (0x0003ec98) list_single_graphic_heading_pane_g_ParamLimits

0xf5b2,	// (0x0003ec98) list_single_graphic_heading_pane_g

0x58ef,	// (0x00034fd5) list_single_graphic_heading_pane_t1_ParamLimits

0x58ef,	// (0x00034fd5) list_single_graphic_heading_pane_t1

0x5958,	// (0x0003503e) list_single_graphic_heading_pane_t2_ParamLimits

0x5958,	// (0x0003503e) list_single_graphic_heading_pane_t2

0x0001,

0xf5b9,	// (0x0003ec9f) list_single_graphic_heading_pane_t_ParamLimits

0xf5b9,	// (0x0003ec9f) list_single_graphic_heading_pane_t

0x596a,	// (0x00035050) list_single_large_graphic_pane_g1_ParamLimits

0x596a,	// (0x00035050) list_single_large_graphic_pane_g1

0x5976,	// (0x0003505c) list_single_large_graphic_pane_g2_ParamLimits

0x5976,	// (0x0003505c) list_single_large_graphic_pane_g2

0x5982,	// (0x00035068) list_single_large_graphic_pane_g3_ParamLimits

0x5982,	// (0x00035068) list_single_large_graphic_pane_g3

0x0002,

0xf5be,	// (0x0003eca4) list_single_large_graphic_pane_g_ParamLimits

0xf5be,	// (0x0003eca4) list_single_large_graphic_pane_g

0x9eb2,	// (0x00039598) wait_border_pane_g2_copy1

0x598e,	// (0x00035074) list_single_large_graphic_pane_g4_cp2

0x5996,	// (0x0003507c) list_single_large_graphic_pane_t1_ParamLimits

0x5996,	// (0x0003507c) list_single_large_graphic_pane_t1

0x4068,	// (0x0003374e) list_double_pane_g1_ParamLimits

0x4068,	// (0x0003374e) list_double_pane_g1

0x59ac,	// (0x00035092) list_double_pane_g2_ParamLimits

0x59ac,	// (0x00035092) list_double_pane_g2

0x0001,

0xf5c5,	// (0x0003ecab) list_double_pane_g_ParamLimits

0xf5c5,	// (0x0003ecab) list_double_pane_g

0x59b8,	// (0x0003509e) list_double_pane_t1_ParamLimits

0x59b8,	// (0x0003509e) list_double_pane_t1

0x59ce,	// (0x000350b4) list_double_pane_t2_ParamLimits

0x59ce,	// (0x000350b4) list_double_pane_t2

0x0001,

0xf5ca,	// (0x0003ecb0) list_double_pane_t_ParamLimits

0xf5ca,	// (0x0003ecb0) list_double_pane_t

0x59e0,	// (0x000350c6) list_double2_pane_g1_ParamLimits

0x59e0,	// (0x000350c6) list_double2_pane_g1

0x59f1,	// (0x000350d7) list_double2_pane_g2_ParamLimits

0x59f1,	// (0x000350d7) list_double2_pane_g2

0x0001,

0xf5cf,	// (0x0003ecb5) list_double2_pane_g_ParamLimits

0xf5cf,	// (0x0003ecb5) list_double2_pane_g

0x59fd,	// (0x000350e3) list_double2_pane_t1_ParamLimits

0x59fd,	// (0x000350e3) list_double2_pane_t1

0x5a13,	// (0x000350f9) list_double2_pane_t2_ParamLimits

0x5a13,	// (0x000350f9) list_double2_pane_t2

0x0001,

0xf5d4,	// (0x0003ecba) list_double2_pane_t_ParamLimits

0xf5d4,	// (0x0003ecba) list_double2_pane_t

0x4068,	// (0x0003374e) list_double_number_pane_g1_ParamLimits

0x4068,	// (0x0003374e) list_double_number_pane_g1

0x59ac,	// (0x00035092) list_double_number_pane_g2_ParamLimits

0x59ac,	// (0x00035092) list_double_number_pane_g2

0x0001,

0xf5c5,	// (0x0003ecab) list_double_number_pane_g_ParamLimits

0xf5c5,	// (0x0003ecab) list_double_number_pane_g

0x5a25,	// (0x0003510b) list_double_number_pane_t1_ParamLimits

0x5a25,	// (0x0003510b) list_double_number_pane_t1

0x5a37,	// (0x0003511d) list_double_number_pane_t2_ParamLimits

0x5a37,	// (0x0003511d) list_double_number_pane_t2

0x5a4d,	// (0x00035133) list_double_number_pane_t3_ParamLimits

0x5a4d,	// (0x00035133) list_double_number_pane_t3

0x0002,

0xf5d9,	// (0x0003ecbf) list_double_number_pane_t_ParamLimits

0xf5d9,	// (0x0003ecbf) list_double_number_pane_t

0x5a5f,	// (0x00035145) list_double_graphic_pane_g1_ParamLimits

0x5a5f,	// (0x00035145) list_double_graphic_pane_g1

0x5a6b,	// (0x00035151) list_double_graphic_pane_g2_ParamLimits

0x5a6b,	// (0x00035151) list_double_graphic_pane_g2

0x5a7a,	// (0x00035160) list_double_graphic_pane_g3_ParamLimits

0x5a7a,	// (0x00035160) list_double_graphic_pane_g3

0x0003,

0xf5e0,	// (0x0003ecc6) list_double_graphic_pane_g_ParamLimits

0xf5e0,	// (0x0003ecc6) list_double_graphic_pane_g

0x5a92,	// (0x00035178) list_double_graphic_pane_t1_ParamLimits

0x5a92,	// (0x00035178) list_double_graphic_pane_t1

0x5aa8,	// (0x0003518e) list_double_graphic_pane_t2_ParamLimits

0x5aa8,	// (0x0003518e) list_double_graphic_pane_t2

0x0001,

0xf5e9,	// (0x0003eccf) list_double_graphic_pane_t_ParamLimits

0xf5e9,	// (0x0003eccf) list_double_graphic_pane_t

0x5aba,	// (0x000351a0) list_double2_graphic_pane_g1_ParamLimits

0x5aba,	// (0x000351a0) list_double2_graphic_pane_g1

0x5ac6,	// (0x000351ac) list_double2_graphic_pane_g2_ParamLimits

0x5ac6,	// (0x000351ac) list_double2_graphic_pane_g2

0x5ad2,	// (0x000351b8) list_double2_graphic_pane_g3_ParamLimits

0x5ad2,	// (0x000351b8) list_double2_graphic_pane_g3

0x0002,

0xf5ee,	// (0x0003ecd4) list_double2_graphic_pane_g_ParamLimits

0xf5ee,	// (0x0003ecd4) list_double2_graphic_pane_g

0x5ade,	// (0x000351c4) list_double2_graphic_pane_t1_ParamLimits

0x5ade,	// (0x000351c4) list_double2_graphic_pane_t1

0x5af4,	// (0x000351da) list_double2_graphic_pane_t2_ParamLimits

0x5af4,	// (0x000351da) list_double2_graphic_pane_t2

0x0001,

0xf5f5,	// (0x0003ecdb) list_double2_graphic_pane_t_ParamLimits

0xf5f5,	// (0x0003ecdb) list_double2_graphic_pane_t

0x5b06,	// (0x000351ec) list_double_large_graphic_pane_g1_ParamLimits

0x5b06,	// (0x000351ec) list_double_large_graphic_pane_g1

0x5b25,	// (0x0003520b) list_double_large_graphic_pane_g2_ParamLimits

0x5b25,	// (0x0003520b) list_double_large_graphic_pane_g2

0x59ac,	// (0x00035092) list_double_large_graphic_pane_g3_ParamLimits

0x59ac,	// (0x00035092) list_double_large_graphic_pane_g3

0x5b36,	// (0x0003521c) list_double_large_graphic_pane_g4_ParamLimits

0x5b36,	// (0x0003521c) list_double_large_graphic_pane_g4

0x0004,

0xf5fa,	// (0x0003ece0) list_double_large_graphic_pane_g_ParamLimits

0xf5fa,	// (0x0003ece0) list_double_large_graphic_pane_g

0x5b49,	// (0x0003522f) list_double_large_graphic_pane_t1_ParamLimits

0x5b49,	// (0x0003522f) list_double_large_graphic_pane_t1

0x5b62,	// (0x00035248) list_double_large_graphic_pane_t2_ParamLimits

0x5b62,	// (0x00035248) list_double_large_graphic_pane_t2

0x0001,

0xf605,	// (0x0003eceb) list_double_large_graphic_pane_t_ParamLimits

0xf605,	// (0x0003eceb) list_double_large_graphic_pane_t

0x5b74,	// (0x0003525a) list_double2_large_graphic_pane_g1_ParamLimits

0x5b74,	// (0x0003525a) list_double2_large_graphic_pane_g1

0x59e0,	// (0x000350c6) list_double2_large_graphic_pane_g2_ParamLimits

0x59e0,	// (0x000350c6) list_double2_large_graphic_pane_g2

0x59f1,	// (0x000350d7) list_double2_large_graphic_pane_g3_ParamLimits

0x59f1,	// (0x000350d7) list_double2_large_graphic_pane_g3

0x0002,

0xf60a,	// (0x0003ecf0) list_double2_large_graphic_pane_g_ParamLimits

0xf60a,	// (0x0003ecf0) list_double2_large_graphic_pane_g

0x5b80,	// (0x00035266) list_double2_large_graphic_pane_t1_ParamLimits

0x5b80,	// (0x00035266) list_double2_large_graphic_pane_t1

0x5b96,	// (0x0003527c) list_double2_large_graphic_pane_t2_ParamLimits

0x5b96,	// (0x0003527c) list_double2_large_graphic_pane_t2

0x0001,

0xf611,	// (0x0003ecf7) list_double2_large_graphic_pane_t_ParamLimits

0xf611,	// (0x0003ecf7) list_double2_large_graphic_pane_t

0x5ba8,	// (0x0003528e) list_double_heading_pane_g1_ParamLimits

0x5ba8,	// (0x0003528e) list_double_heading_pane_g1

0x5bb9,	// (0x0003529f) list_double_heading_pane_g2_ParamLimits

0x5bb9,	// (0x0003529f) list_double_heading_pane_g2

0x0001,

0xf616,	// (0x0003ecfc) list_double_heading_pane_g_ParamLimits

0xf616,	// (0x0003ecfc) list_double_heading_pane_g

0x5bc5,	// (0x000352ab) list_double_heading_pane_t1_ParamLimits

0x5bc5,	// (0x000352ab) list_double_heading_pane_t1

0x5a13,	// (0x000350f9) list_double_heading_pane_t2_ParamLimits

0x5a13,	// (0x000350f9) list_double_heading_pane_t2

0x0001,

0xf61b,	// (0x0003ed01) list_double_heading_pane_t_ParamLimits

0xf61b,	// (0x0003ed01) list_double_heading_pane_t

0x5aba,	// (0x000351a0) list_double_graphic_heading_pane_g1_ParamLimits

0x5aba,	// (0x000351a0) list_double_graphic_heading_pane_g1

0x5ba8,	// (0x0003528e) list_double_graphic_heading_pane_g2_ParamLimits

0x5ba8,	// (0x0003528e) list_double_graphic_heading_pane_g2

0x5bb9,	// (0x0003529f) list_double_graphic_heading_pane_g3_ParamLimits

0x5bb9,	// (0x0003529f) list_double_graphic_heading_pane_g3

0x0002,

0xf620,	// (0x0003ed06) list_double_graphic_heading_pane_g_ParamLimits

0xf620,	// (0x0003ed06) list_double_graphic_heading_pane_g

0x5bdb,	// (0x000352c1) list_double_graphic_heading_pane_t1_ParamLimits

0x5bdb,	// (0x000352c1) list_double_graphic_heading_pane_t1

0x5af4,	// (0x000351da) list_double_graphic_heading_pane_t2_ParamLimits

0x5af4,	// (0x000351da) list_double_graphic_heading_pane_t2

0x0001,

0xf627,	// (0x0003ed0d) list_double_graphic_heading_pane_t_ParamLimits

0xf627,	// (0x0003ed0d) list_double_graphic_heading_pane_t

0x5b25,	// (0x0003520b) list_double_time_pane_g1_ParamLimits

0x5b25,	// (0x0003520b) list_double_time_pane_g1

0x59ac,	// (0x00035092) list_double_time_pane_g2_ParamLimits

0x59ac,	// (0x00035092) list_double_time_pane_g2

0x0001,

0xf62c,	// (0x0003ed12) list_double_time_pane_g_ParamLimits

0xf62c,	// (0x0003ed12) list_double_time_pane_g

0x5bf1,	// (0x000352d7) list_double_time_pane_t1_ParamLimits

0x5bf1,	// (0x000352d7) list_double_time_pane_t1

0x5c07,	// (0x000352ed) list_double_time_pane_t2_ParamLimits

0x5c07,	// (0x000352ed) list_double_time_pane_t2

0x5c19,	// (0x000352ff) list_double_time_pane_t3_ParamLimits

0x5c19,	// (0x000352ff) list_double_time_pane_t3

0x5c2b,	// (0x00035311) list_double_time_pane_t4_ParamLimits

0x5c2b,	// (0x00035311) list_double_time_pane_t4

0x0003,

0xf631,	// (0x0003ed17) list_double_time_pane_t_ParamLimits

0xf631,	// (0x0003ed17) list_double_time_pane_t

0x5c3d,	// (0x00035323) list_setting_pane_g1_ParamLimits

0x5c3d,	// (0x00035323) list_setting_pane_g1

0x5bb9,	// (0x0003529f) list_setting_pane_g2_ParamLimits

0x5bb9,	// (0x0003529f) list_setting_pane_g2

0x0001,

0xf63a,	// (0x0003ed20) list_setting_pane_g_ParamLimits

0xf63a,	// (0x0003ed20) list_setting_pane_g

0x5c49,	// (0x0003532f) list_setting_pane_t1_ParamLimits

0x5c49,	// (0x0003532f) list_setting_pane_t1

0x5c60,	// (0x00035346) list_setting_pane_t2_ParamLimits

0x5c60,	// (0x00035346) list_setting_pane_t2

0x0002,

0xf63f,	// (0x0003ed25) list_setting_pane_t_ParamLimits

0xf63f,	// (0x0003ed25) list_setting_pane_t

0x5c9f,	// (0x00035385) set_value_pane_cp_ParamLimits

0x5c9f,	// (0x00035385) set_value_pane_cp

0x5cad,	// (0x00035393) list_setting_number_pane_g1_ParamLimits

0x5cad,	// (0x00035393) list_setting_number_pane_g1

0x5cb9,	// (0x0003539f) list_setting_number_pane_g2_ParamLimits

0x5cb9,	// (0x0003539f) list_setting_number_pane_g2

0x0001,

0xf646,	// (0x0003ed2c) list_setting_number_pane_g_ParamLimits

0xf646,	// (0x0003ed2c) list_setting_number_pane_g

0x5cc5,	// (0x000353ab) list_setting_number_pane_t1_ParamLimits

0x5cc5,	// (0x000353ab) list_setting_number_pane_t1

0x5cd9,	// (0x000353bf) list_setting_number_pane_t2_ParamLimits

0x5cd9,	// (0x000353bf) list_setting_number_pane_t2

0x5cf0,	// (0x000353d6) list_setting_number_pane_t3_ParamLimits

0x5cf0,	// (0x000353d6) list_setting_number_pane_t3

0x0003,

0xf64b,	// (0x0003ed31) list_setting_number_pane_t_ParamLimits

0xf64b,	// (0x0003ed31) list_setting_number_pane_t

0x5c9f,	// (0x00035385) set_value_pane_ParamLimits

0x5c9f,	// (0x00035385) set_value_pane

0x27d5,	// (0x00031ebb) bg_set_opt_pane_ParamLimits

0x27d5,	// (0x00031ebb) bg_set_opt_pane

0x3ca6,	// (0x0003338c) set_value_pane_t1

0x27f6,	// (0x00031edc) slider_set_pane_cp3

0x27ff,	// (0x00031ee5) volume_small_pane_cp

0x2808,	// (0x00031eee) list_form_gen_pane

0x2811,	// (0x00031ef7) scroll_pane_cp8

0x5d33,	// (0x00035419) form_field_data_pane_ParamLimits

0x5d33,	// (0x00035419) form_field_data_pane

0x5d51,	// (0x00035437) form_field_data_wide_pane_ParamLimits

0x5d51,	// (0x00035437) form_field_data_wide_pane

0x3cc4,	// (0x000333aa) form_field_popup_pane_ParamLimits

0x3cc4,	// (0x000333aa) form_field_popup_pane

0x5d76,	// (0x0003545c) form_field_popup_wide_pane_ParamLimits

0x5d76,	// (0x0003545c) form_field_popup_wide_pane

0x3ce6,	// (0x000333cc) form_field_slider_pane_ParamLimits

0x3ce6,	// (0x000333cc) form_field_slider_pane

0x3cf9,	// (0x000333df) form_field_slider_wide_pane_ParamLimits

0x3cf9,	// (0x000333df) form_field_slider_wide_pane

0x2822,	// (0x00031f08) data_form_pane

0x5da1,	// (0x00035487) form_field_data_pane_t1

0x282e,	// (0x00031f14) input_focus_pane

0x3d0c,	// (0x000333f2) data_form_wide_pane

0x3d29,	// (0x0003340f) form_field_data_wide_pane_t1

0x25a9,	// (0x00031c8f) input_focus_pane_cp6

0x5dbb,	// (0x000354a1) form_field_popup_pane_t1

0x282e,	// (0x00031f14) input_focus_pane_cp7

0x285c,	// (0x00031f42) list_form_pane

0x3d53,	// (0x00033439) form_field_popup_wide_pane_t1

0x282e,	// (0x00031f14) input_focus_pane_cp8

0x2868,	// (0x00031f4e) list_form_wide_pane

0x5ddd,	// (0x000354c3) form_field_slider_pane_t1_ParamLimits

0x5ddd,	// (0x000354c3) form_field_slider_pane_t1

0x5df5,	// (0x000354db) form_field_slider_pane_t2_ParamLimits

0x5df5,	// (0x000354db) form_field_slider_pane_t2

0x0001,

0xf65b,	// (0x0003ed41) form_field_slider_pane_t_ParamLimits

0xf65b,	// (0x0003ed41) form_field_slider_pane_t

0xf519,	// (0x0003ebff) input_focus_pane_cp9_ParamLimits

0xf519,	// (0x0003ebff) input_focus_pane_cp9

0x5e0a,	// (0x000354f0) slider_cont_pane_ParamLimits

0x5e0a,	// (0x000354f0) slider_cont_pane

0x2874,	// (0x00031f5a) form_field_slider_wide_pane_t1_ParamLimits

0x2874,	// (0x00031f5a) form_field_slider_wide_pane_t1

0x3d68,	// (0x0003344e) form_field_slider_wide_pane_t2_ParamLimits

0x3d68,	// (0x0003344e) form_field_slider_wide_pane_t2

0x0001,

0xf660,	// (0x0003ed46) form_field_slider_wide_pane_t_ParamLimits

0xf660,	// (0x0003ed46) form_field_slider_wide_pane_t

0xf519,	// (0x0003ebff) input_focus_pane_cp10_ParamLimits

0xf519,	// (0x0003ebff) input_focus_pane_cp10

0x5e1e,	// (0x00035504) slider_cont_pane_cp1_ParamLimits

0x5e1e,	// (0x00035504) slider_cont_pane_cp1

0x5e32,	// (0x00035518) slider_form_pane_cp

0x2886,	// (0x00031f6c) input_focus_pane_g1

0x288e,	// (0x00031f74) input_focus_pane_g2

0x2896,	// (0x00031f7c) input_focus_pane_g3

0x289e,	// (0x00031f84) input_focus_pane_g4

0x28a6,	// (0x00031f8c) input_focus_pane_g5

0x28ae,	// (0x00031f94) input_focus_pane_g6

0x28b6,	// (0x00031f9c) input_focus_pane_g7

0x28be,	// (0x00031fa4) input_focus_pane_g8

0x28c6,	// (0x00031fac) input_focus_pane_g9

0xf01d,	// (0x0003e703) input_focus_pane_g10

0x0009,

0xf665,	// (0x0003ed4b) input_focus_pane_g

0x9ebb,	// (0x000395a1) wait_border_pane_g3_copy1

0x5e3a,	// (0x00035520) data_form_pane_t1

0xf01d,	// (0x0003e703) wait_anim_pane_g1_copy1

0x74ee,	// (0x00036bd4) data_form_wide_pane_t1

0x5e57,	// (0x0003553d) list_form_graphic_pane_cp_ParamLimits

0x5e57,	// (0x0003553d) list_form_graphic_pane_cp

0xae02,	// (0x0003a4e8) slider_form_pane_g1

0xae0b,	// (0x0003a4f1) slider_form_pane_g2

0x0006,

0xf968,	// (0x0003f04e) slider_form_pane_g

0x3d7a,	// (0x00033460) list_form_graphic_pane_ParamLimits

0x3d7a,	// (0x00033460) list_form_graphic_pane

0x3d8c,	// (0x00033472) list_form_graphic_pane_g1

0x3d94,	// (0x0003347a) list_form_graphic_pane_t1_ParamLimits

0x3d94,	// (0x0003347a) list_form_graphic_pane_t1

0xf4dd,	// (0x0003ebc3) list_highlight_pane_cp5_ParamLimits

0xf4dd,	// (0x0003ebc3) list_highlight_pane_cp5

0x5e6c,	// (0x00035552) find_pane_g1

0x5e75,	// (0x0003555b) input_find_pane

0x5e7e,	// (0x00035564) input_find_pane_g1_ParamLimits

0x5e7e,	// (0x00035564) input_find_pane_g1

0x5e8a,	// (0x00035570) input_find_pane_t1_ParamLimits

0x5e8a,	// (0x00035570) input_find_pane_t1

0x5e9f,	// (0x00035585) input_find_pane_t2_ParamLimits

0x5e9f,	// (0x00035585) input_find_pane_t2

0x0001,

0xf67a,	// (0x0003ed60) input_find_pane_t_ParamLimits

0xf67a,	// (0x0003ed60) input_find_pane_t

0x5eb4,	// (0x0003559a) input_focus_pane_cp5_ParamLimits

0x5eb4,	// (0x0003559a) input_focus_pane_cp5

0x5ed3,	// (0x000355b9) bg_popup_window_pane_cp2_ParamLimits

0x5ed3,	// (0x000355b9) bg_popup_window_pane_cp2

0x5ee0,	// (0x000355c6) listscroll_menu_pane_ParamLimits

0x5ee0,	// (0x000355c6) listscroll_menu_pane

0x5eec,	// (0x000355d2) popup_submenu_window_ParamLimits

0x5eec,	// (0x000355d2) popup_submenu_window

0x5f1c,	// (0x00035602) find_popup_pane_g1

0x5f24,	// (0x0003560a) input_popup_find_pane_cp

0x5f2e,	// (0x00035614) input_focus_pane_cp4_ParamLimits

0x5f2e,	// (0x00035614) input_focus_pane_cp4

0x5f4a,	// (0x00035630) input_popup_find_pane_t1_ParamLimits

0x5f4a,	// (0x00035630) input_popup_find_pane_t1

0xf027,	// (0x0003e70d) bg_popup_sub_pane_cp

0x5f78,	// (0x0003565e) listscroll_popup_sub_pane

0x5f80,	// (0x00035666) list_submenu_pane_ParamLimits

0x5f80,	// (0x00035666) list_submenu_pane

0x5f91,	// (0x00035677) scroll_pane_cp4

0x5f99,	// (0x0003567f) list_single_popup_submenu_pane_ParamLimits

0x5f99,	// (0x0003567f) list_single_popup_submenu_pane

0x5fae,	// (0x00035694) list_single_popup_submenu_pane_g1

0x5fb6,	// (0x0003569c) list_single_popup_submenu_pane_t1_ParamLimits

0x5fb6,	// (0x0003569c) list_single_popup_submenu_pane_t1

0xf4dd,	// (0x0003ebc3) bg_active_tab_pane_cp1_ParamLimits

0xf4dd,	// (0x0003ebc3) bg_active_tab_pane_cp1

0x5fcb,	// (0x000356b1) tabs_2_active_pane_g1

0x5fd3,	// (0x000356b9) tabs_2_active_pane_t1

0xf4dd,	// (0x0003ebc3) bg_passive_tab_pane_cp1_ParamLimits

0xf4dd,	// (0x0003ebc3) bg_passive_tab_pane_cp1

0x5fcb,	// (0x000356b1) tabs_2_passive_pane_g1

0x5fd3,	// (0x000356b9) tabs_2_passive_pane_t1

0x5fe5,	// (0x000356cb) bg_active_tab_pane_cp4

0x5ff3,	// (0x000356d9) tabs_2_long_active_pane_t1

0x6006,	// (0x000356ec) bg_passive_tab_pane_cp4

0x7172,	// (0x00036858) list_single_midp_graphic_pane_g4_ParamLimits

0x5fe5,	// (0x000356cb) bg_active_tab_pane_cp5

0x6012,	// (0x000356f8) tabs_3_long_active_pane_t1

0x6006,	// (0x000356ec) bg_passive_tab_pane_cp5

0x7172,	// (0x00036858) list_single_midp_graphic_pane_g4

0xf4dd,	// (0x0003ebc3) bg_popup_window_pane_cp13_ParamLimits

0xf4dd,	// (0x0003ebc3) bg_popup_window_pane_cp13

0x602d,	// (0x00035713) listscroll_popup_fast_pane_ParamLimits

0x602d,	// (0x00035713) listscroll_popup_fast_pane

0x603c,	// (0x00035722) grid_popup_fast_pane_ParamLimits

0x603c,	// (0x00035722) grid_popup_fast_pane

0x604e,	// (0x00035734) scroll_pane_cp9_ParamLimits

0x604e,	// (0x00035734) scroll_pane_cp9

0xc78a,	// (0x0003be70) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc78a,	// (0x0003be70) list_single_graphic_hl_pane_t1_cp2

0x6072,	// (0x00035758) input_focus_pane_cp20_ParamLimits

0x6072,	// (0x00035758) input_focus_pane_cp20

0x6080,	// (0x00035766) query_popup_data_pane_t1_ParamLimits

0x6080,	// (0x00035766) query_popup_data_pane_t1

0x6093,	// (0x00035779) query_popup_data_pane_t2_ParamLimits

0x6093,	// (0x00035779) query_popup_data_pane_t2

0x60d9,	// (0x000357bf) query_popup_data_pane_t3_ParamLimits

0x60d9,	// (0x000357bf) query_popup_data_pane_t3

0x611a,	// (0x00035800) query_popup_data_pane_t4_ParamLimits

0x611a,	// (0x00035800) query_popup_data_pane_t4

0x6156,	// (0x0003583c) query_popup_data_pane_t5_ParamLimits

0x6156,	// (0x0003583c) query_popup_data_pane_t5

0x0004,

0xf67f,	// (0x0003ed65) query_popup_data_pane_t_ParamLimits

0xf67f,	// (0x0003ed65) query_popup_data_pane_t

0x2886,	// (0x00031f6c) bg_set_opt_pane_g1

0x288e,	// (0x00031f74) bg_set_opt_pane_g2

0x2896,	// (0x00031f7c) bg_set_opt_pane_g3

0x289e,	// (0x00031f84) bg_set_opt_pane_g4

0x28a6,	// (0x00031f8c) bg_set_opt_pane_g5

0x28ae,	// (0x00031f94) bg_set_opt_pane_g6

0x28b6,	// (0x00031f9c) bg_set_opt_pane_g7

0x28be,	// (0x00031fa4) bg_set_opt_pane_g8

0x28c6,	// (0x00031fac) bg_set_opt_pane_g9

0x0008,

0xf68a,	// (0x0003ed70) bg_set_opt_pane_g

0x6799,	// (0x00035e7f) control_top_pane_stacon_ParamLimits

0x6799,	// (0x00035e7f) control_top_pane_stacon

0x67ec,	// (0x00035ed2) signal_pane_stacon_ParamLimits

0x67ec,	// (0x00035ed2) signal_pane_stacon

0x8ce5,	// (0x000383cb) stacon_top_pane_g1_ParamLimits

0x8ce5,	// (0x000383cb) stacon_top_pane_g1

0x6811,	// (0x00035ef7) title_pane_stacon_ParamLimits

0x6811,	// (0x00035ef7) title_pane_stacon

0x683b,	// (0x00035f21) uni_indicator_pane_stacon_ParamLimits

0x683b,	// (0x00035f21) uni_indicator_pane_stacon

0x6850,	// (0x00035f36) battery_pane_stacon_ParamLimits

0x6850,	// (0x00035f36) battery_pane_stacon

0x6894,	// (0x00035f7a) control_bottom_pane_stacon_ParamLimits

0x6894,	// (0x00035f7a) control_bottom_pane_stacon

0x68b7,	// (0x00035f9d) navi_pane_stacon_ParamLimits

0x68b7,	// (0x00035f9d) navi_pane_stacon

0x8d07,	// (0x000383ed) stacon_bottom_pane_g1_ParamLimits

0x8d07,	// (0x000383ed) stacon_bottom_pane_g1

0x618d,	// (0x00035873) aid_levels_signal_lsc_ParamLimits

0x618d,	// (0x00035873) aid_levels_signal_lsc

0x61a4,	// (0x0003588a) signal_pane_stacon_g1_ParamLimits

0x61a4,	// (0x0003588a) signal_pane_stacon_g1

0x61b8,	// (0x0003589e) signal_pane_stacon_g2_ParamLimits

0x61b8,	// (0x0003589e) signal_pane_stacon_g2

0x0001,

0xf69d,	// (0x0003ed83) signal_pane_stacon_g_ParamLimits

0xf69d,	// (0x0003ed83) signal_pane_stacon_g

0x61fa,	// (0x000358e0) title_pane_stacon_t1_ParamLimits

0x61fa,	// (0x000358e0) title_pane_stacon_t1

0x621f,	// (0x00035905) uni_indicator_pane_stacon_g1

0x6229,	// (0x0003590f) uni_indicator_pane_stacon_g2

0x6233,	// (0x00035919) uni_indicator_pane_stacon_g3

0x623d,	// (0x00035923) uni_indicator_pane_stacon_g4

0x0003,

0xf6a9,	// (0x0003ed8f) uni_indicator_pane_stacon_g

0x6247,	// (0x0003592d) control_top_pane_stacon_g1

0x624f,	// (0x00035935) control_top_pane_stacon_t1_ParamLimits

0x624f,	// (0x00035935) control_top_pane_stacon_t1

0x6286,	// (0x0003596c) aid_levels_battery_lsc_ParamLimits

0x6286,	// (0x0003596c) aid_levels_battery_lsc

0x629e,	// (0x00035984) battery_pane_stacon_g1_ParamLimits

0x629e,	// (0x00035984) battery_pane_stacon_g1

0x62b0,	// (0x00035996) battery_pane_stacon_g2_ParamLimits

0x62b0,	// (0x00035996) battery_pane_stacon_g2

0x0001,

0xf6b2,	// (0x0003ed98) battery_pane_stacon_g_ParamLimits

0xf6b2,	// (0x0003ed98) battery_pane_stacon_g

0x62ee,	// (0x000359d4) navi_icon_pane_stacon

0x6302,	// (0x000359e8) navi_navi_pane_stacon

0x62ee,	// (0x000359d4) navi_text_pane_stacon

0x6318,	// (0x000359fe) control_bottom_pane_stacon_g1

0x6320,	// (0x00035a06) control_bottom_pane_stacon_t1_ParamLimits

0x6320,	// (0x00035a06) control_bottom_pane_stacon_t1

0x6371,	// (0x00035a57) grid_app_pane_ParamLimits

0x6371,	// (0x00035a57) grid_app_pane

0x6393,	// (0x00035a79) scroll_pane_cp15_ParamLimits

0x6393,	// (0x00035a79) scroll_pane_cp15

0x63a6,	// (0x00035a8c) cell_app_pane_ParamLimits

0x63a6,	// (0x00035a8c) cell_app_pane

0x63d2,	// (0x00035ab8) cell_app_pane_g1_ParamLimits

0x63d2,	// (0x00035ab8) cell_app_pane_g1

0x63f6,	// (0x00035adc) cell_app_pane_g2_ParamLimits

0x63f6,	// (0x00035adc) cell_app_pane_g2

0x0001,

0xf6b7,	// (0x0003ed9d) cell_app_pane_g_ParamLimits

0xf6b7,	// (0x0003ed9d) cell_app_pane_g

0x6402,	// (0x00035ae8) cell_app_pane_t1_ParamLimits

0x6402,	// (0x00035ae8) cell_app_pane_t1

0x6433,	// (0x00035b19) grid_highlight_pane_ParamLimits

0x6433,	// (0x00035b19) grid_highlight_pane

0x2886,	// (0x00031f6c) cell_highlight_pane_g1

0x288e,	// (0x00031f74) cell_highlight_pane_g2

0x2896,	// (0x00031f7c) cell_highlight_pane_g3

0x289e,	// (0x00031f84) cell_highlight_pane_g4

0x28a6,	// (0x00031f8c) cell_highlight_pane_g5

0x28ae,	// (0x00031f94) cell_highlight_pane_g6

0x28b6,	// (0x00031f9c) cell_highlight_pane_g7

0x28be,	// (0x00031fa4) cell_highlight_pane_g8

0x28c6,	// (0x00031fac) cell_highlight_pane_g9

0xf01d,	// (0x0003e703) cell_highlight_pane_g10

0x0009,

0xf665,	// (0x0003ed4b) cell_highlight_pane_g

0x6457,	// (0x00035b3d) bg_scroll_pane

0x6476,	// (0x00035b5c) scroll_handle_pane

0x64c7,	// (0x00035bad) scroll_bg_pane_g1

0x64dc,	// (0x00035bc2) scroll_bg_pane_g2

0x64f4,	// (0x00035bda) scroll_bg_pane_g3

0x0002,

0xf6bc,	// (0x0003eda2) scroll_bg_pane_g

0x6509,	// (0x00035bef) scroll_handle_focus_pane_ParamLimits

0x6509,	// (0x00035bef) scroll_handle_focus_pane

0x64c7,	// (0x00035bad) scroll_handle_pane_g1

0x6516,	// (0x00035bfc) scroll_handle_pane_g2

0x64f4,	// (0x00035bda) scroll_handle_pane_g3

0x0002,

0xf6c3,	// (0x0003eda9) scroll_handle_pane_g

0x5f2e,	// (0x00035614) bg_popup_sub_pane_cp21_ParamLimits

0x5f2e,	// (0x00035614) bg_popup_sub_pane_cp21

0x652a,	// (0x00035c10) popup_fep_japan_predictive_window_t1_ParamLimits

0x652a,	// (0x00035c10) popup_fep_japan_predictive_window_t1

0x6541,	// (0x00035c27) popup_fep_japan_predictive_window_t2_ParamLimits

0x6541,	// (0x00035c27) popup_fep_japan_predictive_window_t2

0x6574,	// (0x00035c5a) popup_fep_japan_predictive_window_t3_ParamLimits

0x6574,	// (0x00035c5a) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ca,	// (0x0003edb0) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ca,	// (0x0003edb0) popup_fep_japan_predictive_window_t

0xf027,	// (0x0003e70d) bg_popup_sub_pane_cp23

0x65ab,	// (0x00035c91) listscroll_japin_cand_pane

0x65b3,	// (0x00035c99) popup_fep_japan_candidate_window_t1

0x65c1,	// (0x00035ca7) candidate_pane_ParamLimits

0x65c1,	// (0x00035ca7) candidate_pane

0x65d3,	// (0x00035cb9) scroll_pane_cp30

0x65dd,	// (0x00035cc3) list_single_popup_jap_candidate_pane_ParamLimits

0x65dd,	// (0x00035cc3) list_single_popup_jap_candidate_pane

0xf027,	// (0x0003e70d) list_highlight_pane_cp30

0x65f1,	// (0x00035cd7) list_single_popup_jap_candidate_pane_t1

0x6600,	// (0x00035ce6) level_1_signal

0x660d,	// (0x00035cf3) level_2_signal

0x661a,	// (0x00035d00) level_3_signal

0x6627,	// (0x00035d0d) level_4_signal

0x89f0,	// (0x000380d6) level_5_signal

0x89fd,	// (0x000380e3) level_6_signal

0x8a0a,	// (0x000380f0) level_7_signal

0x6600,	// (0x00035ce6) level_1_battery

0x660d,	// (0x00035cf3) level_2_battery

0x661a,	// (0x00035d00) level_3_battery

0x6627,	// (0x00035d0d) level_4_battery

0x89f0,	// (0x000380d6) level_5_battery

0x89fd,	// (0x000380e3) level_6_battery

0x8a0a,	// (0x000380f0) level_7_battery

0x8a2f,	// (0x00038115) list_menu_pane_ParamLimits

0x8a2f,	// (0x00038115) list_menu_pane

0x8a45,	// (0x0003812b) scroll_pane_cp25_ParamLimits

0x8a45,	// (0x0003812b) scroll_pane_cp25

0x8a5e,	// (0x00038144) list_double2_graphic_pane_cp2_ParamLimits

0x8a5e,	// (0x00038144) list_double2_graphic_pane_cp2

0x8a5e,	// (0x00038144) list_double2_large_graphic_pane_cp2_ParamLimits

0x8a5e,	// (0x00038144) list_double2_large_graphic_pane_cp2

0x8a5e,	// (0x00038144) list_double2_pane_cp2_ParamLimits

0x8a5e,	// (0x00038144) list_double2_pane_cp2

0x8a5e,	// (0x00038144) list_double_graphic_pane_cp2_ParamLimits

0x8a5e,	// (0x00038144) list_double_graphic_pane_cp2

0x8a5e,	// (0x00038144) list_double_large_graphic_pane_cp2_ParamLimits

0x8a5e,	// (0x00038144) list_double_large_graphic_pane_cp2

0x8a5e,	// (0x00038144) list_double_number_pane_cp2_ParamLimits

0x8a5e,	// (0x00038144) list_double_number_pane_cp2

0x8a5e,	// (0x00038144) list_double_pane_cp2_ParamLimits

0x8a5e,	// (0x00038144) list_double_pane_cp2

0x8a84,	// (0x0003816a) list_single_2graphic_pane_cp2_ParamLimits

0x8a84,	// (0x0003816a) list_single_2graphic_pane_cp2

0x8a84,	// (0x0003816a) list_single_graphic_heading_pane_cp2_ParamLimits

0x8a84,	// (0x0003816a) list_single_graphic_heading_pane_cp2

0x8a84,	// (0x0003816a) list_single_graphic_pane_cp2_ParamLimits

0x8a84,	// (0x0003816a) list_single_graphic_pane_cp2

0x8a84,	// (0x0003816a) list_single_heading_pane_cp2_ParamLimits

0x8a84,	// (0x0003816a) list_single_heading_pane_cp2

0x8aa1,	// (0x00038187) list_single_large_graphic_pane_cp2_ParamLimits

0x8aa1,	// (0x00038187) list_single_large_graphic_pane_cp2

0x8a84,	// (0x0003816a) list_single_number_heading_pane_cp2_ParamLimits

0x8a84,	// (0x0003816a) list_single_number_heading_pane_cp2

0x8a84,	// (0x0003816a) list_single_number_pane_cp2_ParamLimits

0x8a84,	// (0x0003816a) list_single_number_pane_cp2

0x8ab1,	// (0x00038197) list_single_pane_cp2_ParamLimits

0x8ab1,	// (0x00038197) list_single_pane_cp2

0x8b2c,	// (0x00038212) bg_popup_sub_pane_cp22

0x66bd,	// (0x00035da3) popup_side_volume_key_window_g1

0x66e7,	// (0x00035dcd) popup_side_volume_key_window_t1

0x6705,	// (0x00035deb) volume_small_pane_cp1

0xf519,	// (0x0003ebff) bg_popup_sub_pane_cp24_ParamLimits

0xf519,	// (0x0003ebff) bg_popup_sub_pane_cp24

0x8b42,	// (0x00038228) fep_china_uni_candidate_pane_ParamLimits

0x8b42,	// (0x00038228) fep_china_uni_candidate_pane

0x8b56,	// (0x0003823c) fep_china_uni_entry_pane

0x8b66,	// (0x0003824c) popup_fep_china_uni_window_g1

0x8b82,	// (0x00038268) fep_china_uni_entry_pane_g1

0x8b8c,	// (0x00038272) fep_china_uni_entry_pane_g2

0x0001,

0xf6fb,	// (0x0003ede1) fep_china_uni_entry_pane_g

0x8b96,	// (0x0003827c) fep_entry_item_pane

0x8ba0,	// (0x00038286) fep_candidate_item_pane

0x8ba8,	// (0x0003828e) fep_china_uni_candidate_pane_g1

0x8bb2,	// (0x00038298) fep_china_uni_candidate_pane_g2

0x8bba,	// (0x000382a0) fep_china_uni_candidate_pane_g3

0x8bc2,	// (0x000382a8) fep_china_uni_candidate_pane_g4

0x0003,

0xf700,	// (0x0003ede6) fep_china_uni_candidate_pane_g

0xf01d,	// (0x0003e703) fep_entry_item_pane_g1

0x8bcc,	// (0x000382b2) fep_entry_item_pane_t1_ParamLimits

0x8bcc,	// (0x000382b2) fep_entry_item_pane_t1

0x8be2,	// (0x000382c8) fep_candidate_item_pane_t1_ParamLimits

0x8be2,	// (0x000382c8) fep_candidate_item_pane_t1

0x8bf7,	// (0x000382dd) fep_candidate_item_pane_t2_ParamLimits

0x8bf7,	// (0x000382dd) fep_candidate_item_pane_t2

0x0001,

0xf709,	// (0x0003edef) fep_candidate_item_pane_t_ParamLimits

0xf709,	// (0x0003edef) fep_candidate_item_pane_t

0xf4dd,	// (0x0003ebc3) list_highlight_pane_cp31_ParamLimits

0xf4dd,	// (0x0003ebc3) list_highlight_pane_cp31

0x8c09,	// (0x000382ef) level_1_signal_lsc

0x8c12,	// (0x000382f8) level_2_signal_lsc

0x8c1b,	// (0x00038301) level_3_signal_lsc

0x8c24,	// (0x0003830a) level_4_signal_lsc

0x8c2d,	// (0x00038313) level_5_signal_lsc

0x8c36,	// (0x0003831c) level_6_signal_lsc

0x8c3f,	// (0x00038325) level_7_signal_lsc

0x8c3f,	// (0x00038325) level_1_battery_lsc

0x8c48,	// (0x0003832e) level_2_battery_lsc

0x8c51,	// (0x00038337) level_3_battery_lsc

0x8c5a,	// (0x00038340) level_4_battery_lsc

0x8c63,	// (0x00038349) level_5_battery_lsc

0x8c6c,	// (0x00038352) level_6_battery_lsc

0x8c09,	// (0x000382ef) level_7_battery_lsc

0x8c75,	// (0x0003835b) scroll_handle_focus_pane_g1

0x8c7e,	// (0x00038364) scroll_handle_focus_pane_g2

0x8c87,	// (0x0003836d) scroll_handle_focus_pane_g3

0x0002,

0xf70e,	// (0x0003edf4) scroll_handle_focus_pane_g

0x670d,	// (0x00035df3) list_single_2graphic_pane_g1_ParamLimits

0x670d,	// (0x00035df3) list_single_2graphic_pane_g1

0x5947,	// (0x0003502d) list_single_2graphic_pane_g2_ParamLimits

0x5947,	// (0x0003502d) list_single_2graphic_pane_g2

0x58cd,	// (0x00034fb3) list_single_2graphic_pane_g3_ParamLimits

0x58cd,	// (0x00034fb3) list_single_2graphic_pane_g3

0x6719,	// (0x00035dff) list_single_2graphic_pane_g4_ParamLimits

0x6719,	// (0x00035dff) list_single_2graphic_pane_g4

0x0003,

0xf715,	// (0x0003edfb) list_single_2graphic_pane_g_ParamLimits

0xf715,	// (0x0003edfb) list_single_2graphic_pane_g

0x6725,	// (0x00035e0b) list_single_2graphic_pane_t1_ParamLimits

0x6725,	// (0x00035e0b) list_single_2graphic_pane_t1

0x6753,	// (0x00035e39) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6753,	// (0x00035e39) list_double2_graphic_large_graphic_pane_g1

0x59e0,	// (0x000350c6) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x59e0,	// (0x000350c6) list_double2_graphic_large_graphic_pane_g2

0x59f1,	// (0x000350d7) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x59f1,	// (0x000350d7) list_double2_graphic_large_graphic_pane_g3

0x6765,	// (0x00035e4b) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6765,	// (0x00035e4b) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71e,	// (0x0003ee04) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71e,	// (0x0003ee04) list_double2_graphic_large_graphic_pane_g

0x6771,	// (0x00035e57) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x6771,	// (0x00035e57) list_double2_graphic_large_graphic_pane_t1

0x6787,	// (0x00035e6d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x6787,	// (0x00035e6d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf727,	// (0x0003ee0d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf727,	// (0x0003ee0d) list_double2_graphic_large_graphic_pane_t

0x8dca,	// (0x000384b0) popup_fast_swap_window_ParamLimits

0x8dca,	// (0x000384b0) popup_fast_swap_window

0x8de8,	// (0x000384ce) popup_side_volume_key_window

0x8e06,	// (0x000384ec) stacon_top_pane

0x8e10,	// (0x000384f6) status_pane_ParamLimits

0x8e10,	// (0x000384f6) status_pane

0xf013,	// (0x0003e6f9) status_small_pane

0xf027,	// (0x0003e70d) control_pane

0xf027,	// (0x0003e70d) stacon_bottom_pane

0x2811,	// (0x00031ef7) scroll_pane_cp121

0x2808,	// (0x00031eee) set_content_pane

0x8c90,	// (0x00038376) bg_active_tab_pane_g1_cp1

0x8c99,	// (0x0003837f) bg_active_tab_pane_g2_cp1

0x8ca2,	// (0x00038388) bg_active_tab_pane_g3_cp1

0x8c90,	// (0x00038376) bg_passive_tab_pane_g1_cp1

0x8c99,	// (0x0003837f) bg_passive_tab_pane_g2_cp1

0x8ca2,	// (0x00038388) bg_passive_tab_pane_g3_cp1

0x8cab,	// (0x00038391) bg_active_tab_pane_g1_cp2

0x8c99,	// (0x0003837f) bg_active_tab_pane_g2_cp2

0x8cb4,	// (0x0003839a) bg_active_tab_pane_g3_cp2

0x8cab,	// (0x00038391) bg_passive_tab_pane_g1_cp2

0x8c99,	// (0x0003837f) bg_passive_tab_pane_g2_cp2

0x8cb4,	// (0x0003839a) bg_passive_tab_pane_g3_cp2

0x8cbd,	// (0x000383a3) bg_active_tab_pane_g1_cp3

0x8c99,	// (0x0003837f) bg_active_tab_pane_g2_cp3

0x8cc6,	// (0x000383ac) bg_active_tab_pane_g3_cp3

0x8cbd,	// (0x000383a3) bg_passive_tab_pane_g1_cp3

0x8c99,	// (0x0003837f) bg_passive_tab_pane_g2_cp3

0x8cc6,	// (0x000383ac) bg_passive_tab_pane_g3_cp3

0x8ccf,	// (0x000383b5) bg_active_tab_pane_g1_cp4

0x8c99,	// (0x0003837f) bg_active_tab_pane_g2_cp4

0x8cda,	// (0x000383c0) bg_active_tab_pane_g3_cp4

0x8ccf,	// (0x000383b5) bg_passive_tab_pane_g1_cp4

0x8c99,	// (0x0003837f) bg_passive_tab_pane_g2_cp4

0x8cda,	// (0x000383c0) bg_passive_tab_pane_g3_cp4

0x8d23,	// (0x00038409) bg_active_tab_pane_g1_cp5

0x8c99,	// (0x0003837f) bg_active_tab_pane_g2_cp5

0x8d2c,	// (0x00038412) bg_active_tab_pane_g3_cp5

0x8d23,	// (0x00038409) bg_passive_tab_pane_g1_cp5

0x8c99,	// (0x0003837f) bg_passive_tab_pane_g2_cp5

0x8d2c,	// (0x00038412) bg_passive_tab_pane_g3_cp5

0x8d35,	// (0x0003841b) list_set_graphic_pane_ParamLimits

0x8d35,	// (0x0003841b) list_set_graphic_pane

0xf027,	// (0x0003e70d) bg_set_opt_pane_cp4

0x8d4b,	// (0x00038431) list_set_graphic_pane_g1_ParamLimits

0x8d4b,	// (0x00038431) list_set_graphic_pane_g1

0x8d57,	// (0x0003843d) list_set_graphic_pane_g2_ParamLimits

0x8d57,	// (0x0003843d) list_set_graphic_pane_g2

0x0001,

0xf72c,	// (0x0003ee12) list_set_graphic_pane_g_ParamLimits

0xf72c,	// (0x0003ee12) list_set_graphic_pane_g

0x0009,

0xfab4,	// (0x0003f19a) volume_small_pane_cp_g

0x8d7b,	// (0x00038461) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8d7b,	// (0x00038461) list_double2_large_graphic_pane_g1_cp2

0x8d89,	// (0x0003846f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8d89,	// (0x0003846f) list_double2_large_graphic_pane_g2_cp2

0x8d9a,	// (0x00038480) list_double2_large_graphic_pane_g3_cp2

0x8da2,	// (0x00038488) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8da2,	// (0x00038488) list_double2_large_graphic_pane_t1_cp2

0x8db8,	// (0x0003849e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8db8,	// (0x0003849e) list_double2_large_graphic_pane_t2_cp2

0xa99f,	// (0x0003a085) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa99f,	// (0x0003a085) list_double_large_graphic_pane_g1_cp2

0xa9b2,	// (0x0003a098) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa9b2,	// (0x0003a098) list_double_large_graphic_pane_g2_cp2

0x8f2e,	// (0x00038614) list_double_large_graphic_pane_g3_cp2

0xa9c3,	// (0x0003a0a9) list_double_large_graphic_pane_g4_cp

0xa9cb,	// (0x0003a0b1) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa9cb,	// (0x0003a0b1) list_double_large_graphic_pane_t1_cp2

0xa9e2,	// (0x0003a0c8) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa9e2,	// (0x0003a0c8) list_double_large_graphic_pane_t2_cp2

0x8e1e,	// (0x00038504) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8e1e,	// (0x00038504) list_double2_graphic_pane_g1_cp2

0x8e2c,	// (0x00038512) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8e2c,	// (0x00038512) list_double2_graphic_pane_g2_cp2

0x8e3d,	// (0x00038523) list_double2_graphic_pane_g3_cp2

0x8e47,	// (0x0003852d) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8e47,	// (0x0003852d) list_double2_graphic_pane_t1_cp2

0x8e5d,	// (0x00038543) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8e5d,	// (0x00038543) list_double2_graphic_pane_t2_cp2

0x8e6f,	// (0x00038555) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8e6f,	// (0x00038555) list_single_number_heading_pane_g1_cp2

0x8e7b,	// (0x00038561) list_single_number_heading_pane_g2_cp2

0x8e83,	// (0x00038569) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8e83,	// (0x00038569) list_single_number_heading_pane_t1_cp2

0x8e99,	// (0x0003857f) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8e99,	// (0x0003857f) list_single_number_heading_pane_t2_cp2

0x8ead,	// (0x00038593) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8ead,	// (0x00038593) list_single_number_heading_pane_t3_cp2

0x8e6f,	// (0x00038555) list_single_heading_pane_g1_cp2_ParamLimits

0x8e6f,	// (0x00038555) list_single_heading_pane_g1_cp2

0x8e7b,	// (0x00038561) list_single_heading_pane_g2_cp2

0x8e83,	// (0x00038569) list_single_heading_pane_t1_cp2_ParamLimits

0x8e83,	// (0x00038569) list_single_heading_pane_t1_cp2

0xa799,	// (0x00039e7f) list_single_heading_pane_t2_cp2_ParamLimits

0xa799,	// (0x00039e7f) list_single_heading_pane_t2_cp2

0xa6e1,	// (0x00039dc7) list_double_graphic_pane_g1_cp2_ParamLimits

0xa6e1,	// (0x00039dc7) list_double_graphic_pane_g1_cp2

0xa6ed,	// (0x00039dd3) list_double_graphic_pane_g2_cp2_ParamLimits

0xa6ed,	// (0x00039dd3) list_double_graphic_pane_g2_cp2

0xa6fc,	// (0x00039de2) list_double_graphic_pane_g3_cp2

0xa704,	// (0x00039dea) list_double_graphic_pane_t1_cp2_ParamLimits

0xa704,	// (0x00039dea) list_double_graphic_pane_t1_cp2

0xa71a,	// (0x00039e00) list_double_graphic_pane_t2_cp2_ParamLimits

0xa71a,	// (0x00039e00) list_double_graphic_pane_t2_cp2

0x8f22,	// (0x00038608) list_double_number_pane_g1_cp2_ParamLimits

0x8f22,	// (0x00038608) list_double_number_pane_g1_cp2

0x8f2e,	// (0x00038614) list_double_number_pane_g2_cp2

0xa6a5,	// (0x00039d8b) list_double_number_pane_t1_cp2_ParamLimits

0xa6a5,	// (0x00039d8b) list_double_number_pane_t1_cp2

0xa6b9,	// (0x00039d9f) list_double_number_pane_t2_cp2_ParamLimits

0xa6b9,	// (0x00039d9f) list_double_number_pane_t2_cp2

0xa6cf,	// (0x00039db5) list_double_number_pane_t3_cp2_ParamLimits

0xa6cf,	// (0x00039db5) list_double_number_pane_t3_cp2

0xa58e,	// (0x00039c74) list_single_graphic_pane_g1_cp2_ParamLimits

0xa58e,	// (0x00039c74) list_single_graphic_pane_g1_cp2

0x8f97,	// (0x0003867d) list_single_graphic_pane_g2_cp2_ParamLimits

0x8f97,	// (0x0003867d) list_single_graphic_pane_g2_cp2

0x8fa3,	// (0x00038689) list_single_graphic_pane_g3_cp2

0xa564,	// (0x00039c4a) list_single_graphic_pane_t1_cp2_ParamLimits

0xa564,	// (0x00039c4a) list_single_graphic_pane_t1_cp2

0x8f97,	// (0x0003867d) list_single_number_pane_g1_cp2_ParamLimits

0x8f97,	// (0x0003867d) list_single_number_pane_g1_cp2

0x8fa3,	// (0x00038689) list_single_number_pane_g2_cp2

0xa564,	// (0x00039c4a) list_single_number_pane_t1_cp2_ParamLimits

0xa564,	// (0x00039c4a) list_single_number_pane_t1_cp2

0xa57a,	// (0x00039c60) list_single_number_pane_t2_cp2_ParamLimits

0xa57a,	// (0x00039c60) list_single_number_pane_t2_cp2

0x8d89,	// (0x0003846f) list_double2_pane_g1_cp2_ParamLimits

0x8d89,	// (0x0003846f) list_double2_pane_g1_cp2

0x8d9a,	// (0x00038480) list_double2_pane_g2_cp2

0x8efa,	// (0x000385e0) list_double2_pane_t1_cp2_ParamLimits

0x8efa,	// (0x000385e0) list_double2_pane_t1_cp2

0x8f10,	// (0x000385f6) list_double2_pane_t2_cp2_ParamLimits

0x8f10,	// (0x000385f6) list_double2_pane_t2_cp2

0x8f22,	// (0x00038608) list_double_pane_g1_cp2_ParamLimits

0x8f22,	// (0x00038608) list_double_pane_g1_cp2

0x8f2e,	// (0x00038614) list_double_pane_g2_cp2

0x8f36,	// (0x0003861c) list_double_pane_t1_cp2_ParamLimits

0x8f36,	// (0x0003861c) list_double_pane_t1_cp2

0x8f4c,	// (0x00038632) list_double_pane_t2_cp2_ParamLimits

0x8f4c,	// (0x00038632) list_double_pane_t2_cp2

0x8f87,	// (0x0003866d) list_single_pane_cp2_g3

0x8f97,	// (0x0003867d) list_single_pane_g1_cp2_ParamLimits

0x8f97,	// (0x0003867d) list_single_pane_g1_cp2

0x8fa3,	// (0x00038689) list_single_pane_g2_cp2

0x8fab,	// (0x00038691) list_single_pane_t1_cp2_ParamLimits

0x8fab,	// (0x00038691) list_single_pane_t1_cp2

0x8fc3,	// (0x000386a9) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8fc3,	// (0x000386a9) list_single_large_graphic_pane_g1_cp2

0x8fd1,	// (0x000386b7) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8fd1,	// (0x000386b7) list_single_large_graphic_pane_g2_cp2

0x8fdd,	// (0x000386c3) list_single_large_graphic_pane_g3_cp2

0x8fe5,	// (0x000386cb) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8fe5,	// (0x000386cb) list_single_large_graphic_pane_g4_cp1

0x8fff,	// (0x000386e5) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8fff,	// (0x000386e5) list_single_large_graphic_pane_t1_cp2

0xa52e,	// (0x00039c14) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa52e,	// (0x00039c14) list_single_graphic_heading_pane_g1_cp2

0xa4fb,	// (0x00039be1) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa4fb,	// (0x00039be1) list_single_graphic_heading_pane_g4_cp2

0x8fa3,	// (0x00038689) list_single_graphic_heading_pane_g5_cp2

0xa53a,	// (0x00039c20) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa53a,	// (0x00039c20) list_single_graphic_heading_pane_t1_cp2

0xa550,	// (0x00039c36) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa550,	// (0x00039c36) list_single_graphic_heading_pane_t2_cp2

0xa4ef,	// (0x00039bd5) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa4ef,	// (0x00039bd5) list_single_2graphic_pane_g1_cp2

0xa4fb,	// (0x00039be1) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa4fb,	// (0x00039be1) list_single_2graphic_pane_g2_cp2

0x8fa3,	// (0x00038689) list_single_2graphic_pane_g3_cp2

0xa50c,	// (0x00039bf2) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa50c,	// (0x00039bf2) list_single_2graphic_pane_g4_cp2

0xa518,	// (0x00039bfe) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa518,	// (0x00039bfe) list_single_2graphic_pane_t1_cp2

0xf01d,	// (0x0003e703) list_highlight_pane_g10_cp1

0xa0c7,	// (0x000397ad) list_highlight_pane_g1_cp1

0xa0cf,	// (0x000397b5) list_highlight_pane_g2_cp1

0xa0d7,	// (0x000397bd) list_highlight_pane_g3_cp1

0xa0df,	// (0x000397c5) list_highlight_pane_g4_cp1

0xa0e7,	// (0x000397cd) list_highlight_pane_g5_cp1

0xa0ef,	// (0x000397d5) list_highlight_pane_g6_cp1

0xa0f7,	// (0x000397dd) list_highlight_pane_g7_cp1

0xa0ff,	// (0x000397e5) list_highlight_pane_g8_cp1

0xa107,	// (0x000397ed) list_highlight_pane_g9_cp1

0x9fe7,	// (0x000396cd) form_field_slider_pane_t3

0x9ff5,	// (0x000396db) form_field_slider_pane_t4

0xa003,	// (0x000396e9) slider_form_pane_ParamLimits

0xa003,	// (0x000396e9) slider_form_pane

0xf027,	// (0x0003e70d) control_abbreviations

0xf027,	// (0x0003e70d) control_conventions

0xf027,	// (0x0003e70d) control_definitions

0xf027,	// (0x0003e70d) format_table_attribute

0xa7ef,	// (0x00039ed5) bg_popup_preview_window_pane_g9

0xf027,	// (0x0003e70d) format_table_data2

0xf027,	// (0x0003e70d) format_table_data3

0xf027,	// (0x0003e70d) format_table_data_example

0x0008,

0xf027,	// (0x0003e70d) intro_purpose

0xf8c8,	// (0x0003efae) bg_popup_preview_window_pane_g

0xf027,	// (0x0003e70d) texts_category

0xf027,	// (0x0003e70d) texts_graphics

0x9015,	// (0x000386fb) text_digital

0x9024,	// (0x0003870a) text_primary

0x9033,	// (0x00038719) text_primary_small

0x9042,	// (0x00038728) text_secondary

0x9051,	// (0x00038737) text_title

0xaf59,	// (0x0003a63f) bg_passive_tab_pane_g1_cp3_srt

0x8c99,	// (0x0003837f) bg_passive_tab_pane_g2_cp3_srt

0xaf62,	// (0x0003a648) bg_passive_tab_pane_g3_cp3_srt

0xf4dd,	// (0x0003ebc3) bg_active_tab_pane_cp3_srt_ParamLimits

0xf4dd,	// (0x0003ebc3) bg_active_tab_pane_cp3_srt

0xaf6b,	// (0x0003a651) tabs_4_active_pane_srt_g1

0xaf73,	// (0x0003a659) tabs_4_active_pane_srt_t1_ParamLimits

0xaf73,	// (0x0003a659) tabs_4_active_pane_srt_t1

0xaf59,	// (0x0003a63f) bg_active_tab_pane_g1_cp3_copy1

0x8c99,	// (0x0003837f) bg_active_tab_pane_g2_cp3_copy1

0xaf62,	// (0x0003a648) bg_active_tab_pane_g3_cp3_copy1

0xf4dd,	// (0x0003ebc3) tabs_2_long_active_pane_srt_ParamLimits

0xf4dd,	// (0x0003ebc3) tabs_2_long_active_pane_srt

0xf4dd,	// (0x0003ebc3) tabs_2_long_passive_pane_srt_ParamLimits

0xf4dd,	// (0x0003ebc3) tabs_2_long_passive_pane_srt

0x6006,	// (0x000356ec) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6006,	// (0x000356ec) bg_passive_tab_pane_cp4_srt

0xac19,	// (0x0003a2ff) bg_passive_tab_pane_g1_cp4_srt

0x8c99,	// (0x0003837f) bg_passive_tab_pane_g2_cp4_srt

0xac22,	// (0x0003a308) bg_passive_tab_pane_g3_cp4_srt

0x5fe5,	// (0x000356cb) bg_active_tab_pane_cp4_srt_ParamLimits

0x5fe5,	// (0x000356cb) bg_active_tab_pane_cp4_srt

0xac2b,	// (0x0003a311) tabs_2_long_active_pane_srt_t1_ParamLimits

0xac2b,	// (0x0003a311) tabs_2_long_active_pane_srt_t1

0xac19,	// (0x0003a2ff) bg_active_tab_pane_g1_cp4_srt

0x8c99,	// (0x0003837f) bg_active_tab_pane_g2_cp4_srt

0xac22,	// (0x0003a308) bg_active_tab_pane_g3_cp4_srt

0xf519,	// (0x0003ebff) tabs_3_long_active_pane_srt_ParamLimits

0xf519,	// (0x0003ebff) tabs_3_long_active_pane_srt

0xf519,	// (0x0003ebff) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xf519,	// (0x0003ebff) tabs_3_long_passive_pane_cp_srt

0xf519,	// (0x0003ebff) tabs_3_long_passive_pane_srt_ParamLimits

0xf519,	// (0x0003ebff) tabs_3_long_passive_pane_srt

0x6006,	// (0x000356ec) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6006,	// (0x000356ec) bg_passive_tab_pane_cp5_srt

0x8d23,	// (0x00038409) bg_passive_tab_pane_g1_cp5_srt

0x8c99,	// (0x0003837f) bg_passive_tab_pane_g2_cp5_srt

0x8d2c,	// (0x00038412) bg_passive_tab_pane_g3_cp5_srt

0x5fe5,	// (0x000356cb) bg_active_tab_pane_cp5_srt_ParamLimits

0x5fe5,	// (0x000356cb) bg_active_tab_pane_cp5_srt

0xac07,	// (0x0003a2ed) tabs_3_long_active_pane_srt_t1_ParamLimits

0xac07,	// (0x0003a2ed) tabs_3_long_active_pane_srt_t1

0x8d23,	// (0x00038409) bg_active_tab_pane_g1_cp5_srt

0x8c99,	// (0x0003837f) bg_active_tab_pane_g2_cp5_srt

0x8d2c,	// (0x00038412) bg_active_tab_pane_g3_cp5_srt

0xabf9,	// (0x0003a2df) navi_text_pane_srt_t1

0xabf1,	// (0x0003a2d7) navi_icon_pane_srt_g1

0x9229,	// (0x0003890f) midp_editing_number_pane_srt

0x9060,	// (0x00038746) midp_ticker_pane_srt

0x9231,	// (0x00038917) midp_ticker_pane_srt_g1

0x9239,	// (0x0003891f) midp_ticker_pane_srt_g2

0x0001,

0xf74b,	// (0x0003ee31) midp_ticker_pane_srt_g

0x9241,	// (0x00038927) midp_ticker_pane_srt_t1

0xabe2,	// (0x0003a2c8) midp_editing_number_pane_t1_copy1

0x9068,	// (0x0003874e) listscroll_midp_pane

0x9068,	// (0x0003874e) midp_form_pane

0x90d7,	// (0x000387bd) midp_info_popup_window_ParamLimits

0x90d7,	// (0x000387bd) midp_info_popup_window

0x5f2e,	// (0x00035614) bg_popup_sub_pane_cp50_ParamLimits

0x5f2e,	// (0x00035614) bg_popup_sub_pane_cp50

0x9ce9,	// (0x000393cf) listscroll_midp_info_pane_ParamLimits

0x9ce9,	// (0x000393cf) listscroll_midp_info_pane

0x9cc9,	// (0x000393af) listscroll_form_midp_pane_ParamLimits

0x9cc9,	// (0x000393af) listscroll_form_midp_pane

0x9cd5,	// (0x000393bb) scroll_bar_cp050

0x9ca9,	// (0x0003938f) list_midp_pane

0xba16,	// (0x0003b0fc) signal_pane_g2_cp

0x9be3,	// (0x000392c9) listscroll_midp_info_pane_t1_ParamLimits

0x9be3,	// (0x000392c9) listscroll_midp_info_pane_t1

0x9bfb,	// (0x000392e1) listscroll_midp_info_pane_t2_ParamLimits

0x9bfb,	// (0x000392e1) listscroll_midp_info_pane_t2

0x9c39,	// (0x0003931f) listscroll_midp_info_pane_t3_ParamLimits

0x9c39,	// (0x0003931f) listscroll_midp_info_pane_t3

0x9c73,	// (0x00039359) listscroll_midp_info_pane_t4_ParamLimits

0x9c73,	// (0x00039359) listscroll_midp_info_pane_t4

0x0003,

0xf803,	// (0x0003eee9) listscroll_midp_info_pane_t_ParamLimits

0xf803,	// (0x0003eee9) listscroll_midp_info_pane_t

0x5f91,	// (0x00035677) scroll_pane_cp21

0x9b7d,	// (0x00039263) form_midp_field_choice_group_pane

0x9b86,	// (0x0003926c) form_midp_field_text_pane

0x9bc9,	// (0x000392af) form_midp_field_time_pane

0x9bd1,	// (0x000392b7) form_midp_gauge_slider_pane

0x9bda,	// (0x000392c0) form_midp_gauge_wait_pane

0xf027,	// (0x0003e70d) form_midp_image_pane

0x725e,	// (0x00036944) list_single_midp_pane_ParamLimits

0x725e,	// (0x00036944) list_single_midp_pane

0x9b41,	// (0x00039227) form_midp_field_text_pane_t1

0x9933,	// (0x00039019) input_focus_pane_cp050

0x9b6c,	// (0x00039252) list_midp_form_text_pane

0x9b10,	// (0x000391f6) form_midp_field_choice_group_pane_t1

0x9b1e,	// (0x00039204) input_focus_pane_cp051

0x9b32,	// (0x00039218) list_midp_choice_pane

0xf027,	// (0x0003e70d) status_idle_pane

0x9af4,	// (0x000391da) form_midp_field_time_pane_t1

0xf01d,	// (0x0003e703) wait_anim_pane_g2_copy1

0x9b02,	// (0x000391e8) form_midp_field_time_pane_t2

0x0001,

0x9187,	// (0x0003886d) aid_navinavi_width_2_pane

0xf7fe,	// (0x0003eee4) form_midp_field_time_pane_t

0xf027,	// (0x0003e70d) input_focus_pane_cp052

0xf027,	// (0x0003e70d) bg_input_focus_pane_cp040

0x9ab4,	// (0x0003919a) form_midp_gauge_slider_pane_t1

0x9ac2,	// (0x000391a8) form_midp_gauge_slider_pane_t2

0x9ad0,	// (0x000391b6) form_midp_gauge_slider_pane_t3

0x9ade,	// (0x000391c4) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f5,	// (0x0003eedb) form_midp_gauge_slider_pane_t

0x9aec,	// (0x000391d2) form_midp_slider_pane

0xf4dd,	// (0x0003ebc3) bg_input_focus_pane_cp041_ParamLimits

0xf4dd,	// (0x0003ebc3) bg_input_focus_pane_cp041

0x9a81,	// (0x00039167) form_midp_gauge_wait_pane_t1_ParamLimits

0x9a81,	// (0x00039167) form_midp_gauge_wait_pane_t1

0x9a93,	// (0x00039179) form_midp_gauge_wait_pane_t2_ParamLimits

0x9a93,	// (0x00039179) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f0,	// (0x0003eed6) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f0,	// (0x0003eed6) form_midp_gauge_wait_pane_t

0x9aa5,	// (0x0003918b) form_midp_wait_pane_ParamLimits

0x9aa5,	// (0x0003918b) form_midp_wait_pane

0x9a49,	// (0x0003912f) form_midp_image_pane_g1

0x9a52,	// (0x00039138) form_midp_image_pane_t1

0x9a61,	// (0x00039147) form_midp_image_pane_t2

0x9a70,	// (0x00039156) form_midp_image_pane_t3

0x0002,

0xf7e9,	// (0x0003eecf) form_midp_image_pane_t

0x9a40,	// (0x00039126) list_single_midp_pane_g1

0x3eef,	// (0x000335d5) list_single_midp_pane_t1

0x9a26,	// (0x0003910c) list_midp_form_item_pane_ParamLimits

0x9a26,	// (0x0003910c) list_midp_form_item_pane

0x912f,	// (0x00038815) list_midp_form_item_pane_t1

0x913e,	// (0x00038824) midp_ticker_pane_g1

0x914a,	// (0x00038830) midp_ticker_pane_g2

0x0001,

0xf731,	// (0x0003ee17) midp_ticker_pane_g

0x9156,	// (0x0003883c) midp_ticker_pane_t1

0xae4f,	// (0x0003a535) midp_editing_number_pane_t1

0xae2d,	// (0x0003a513) midp_editing_number_pane

0xae3c,	// (0x0003a522) midp_ticker_pane

0x9cf5,	// (0x000393db) ai_message_heading_pane

0xf027,	// (0x0003e70d) bg_popup_window_pane_cp14

0x9cfd,	// (0x000393e3) listscroll_ai_message_pane

0xab68,	// (0x0003a24e) ai_message_heading_pane_g1_ParamLimits

0xab68,	// (0x0003a24e) ai_message_heading_pane_g1

0xab74,	// (0x0003a25a) ai_message_heading_pane_g2_ParamLimits

0xab74,	// (0x0003a25a) ai_message_heading_pane_g2

0xab82,	// (0x0003a268) ai_message_heading_pane_g3_ParamLimits

0xab82,	// (0x0003a268) ai_message_heading_pane_g3

0xab8e,	// (0x0003a274) ai_message_heading_pane_g4_ParamLimits

0xab8e,	// (0x0003a274) ai_message_heading_pane_g4

0x0003,

0xf92a,	// (0x0003f010) ai_message_heading_pane_g_ParamLimits

0xf92a,	// (0x0003f010) ai_message_heading_pane_g

0xab9a,	// (0x0003a280) ai_message_heading_pane_t1_ParamLimits

0xab9a,	// (0x0003a280) ai_message_heading_pane_t1

0xabb4,	// (0x0003a29a) ai_message_heading_pane_t2_ParamLimits

0xabb4,	// (0x0003a29a) ai_message_heading_pane_t2

0x0001,

0xf933,	// (0x0003f019) ai_message_heading_pane_t_ParamLimits

0xf933,	// (0x0003f019) ai_message_heading_pane_t

0xabc8,	// (0x0003a2ae) bg_popup_heading_pane_cp1_ParamLimits

0xabc8,	// (0x0003a2ae) bg_popup_heading_pane_cp1

0xab56,	// (0x0003a23c) list_ai_message_pane_ParamLimits

0xab56,	// (0x0003a23c) list_ai_message_pane

0x5f91,	// (0x00035677) scroll_pane_cp10

0xaaf2,	// (0x0003a1d8) list_ai_message_pane_g1

0xaafa,	// (0x0003a1e0) list_ai_message_pane_g2

0x0001,

0xf907,	// (0x0003efed) list_ai_message_pane_g

0xab02,	// (0x0003a1e8) list_ai_message_pane_t1_ParamLimits

0xab02,	// (0x0003a1e8) list_ai_message_pane_t1

0xab17,	// (0x0003a1fd) list_ai_message_pane_t2_ParamLimits

0xab17,	// (0x0003a1fd) list_ai_message_pane_t2

0xab2c,	// (0x0003a212) list_ai_message_pane_t3_ParamLimits

0xab2c,	// (0x0003a212) list_ai_message_pane_t3

0xab41,	// (0x0003a227) list_ai_message_pane_t4_ParamLimits

0xab41,	// (0x0003a227) list_ai_message_pane_t4

0x0003,

0xf90c,	// (0x0003eff2) list_ai_message_pane_t_ParamLimits

0xf90c,	// (0x0003eff2) list_ai_message_pane_t

0xaadb,	// (0x0003a1c1) cell_ai_soft_ind_pane_ParamLimits

0xaadb,	// (0x0003a1c1) cell_ai_soft_ind_pane

0x9168,	// (0x0003884e) cell_ai_soft_ind_pane_g1_ParamLimits

0x9168,	// (0x0003884e) cell_ai_soft_ind_pane_g1

0xf027,	// (0x0003e70d) grid_highlight_cp1

0x9175,	// (0x0003885b) text_secondary_cp56_ParamLimits

0x9175,	// (0x0003885b) text_secondary_cp56

0xaab0,	// (0x0003a196) example_general_pane_ParamLimits

0xaab0,	// (0x0003a196) example_general_pane

0xaabc,	// (0x0003a1a2) example_parent_pane_g1_ParamLimits

0xaabc,	// (0x0003a1a2) example_parent_pane_g1

0xaac8,	// (0x0003a1ae) example_parent_pane_t1_ParamLimits

0xaac8,	// (0x0003a1ae) example_parent_pane_t1

0x6ead,	// (0x00036593) popup_preview_text_window_ParamLimits

0x6ead,	// (0x00036593) popup_preview_text_window

0x8f8f,	// (0x00038675) list_single_pane_cp2_g4

0x23ed,	// (0x00031ad3) bg_popup_preview_window_pane_ParamLimits

0x23ed,	// (0x00031ad3) bg_popup_preview_window_pane

0xa7f9,	// (0x00039edf) popup_preview_text_window_t1_ParamLimits

0xa7f9,	// (0x00039edf) popup_preview_text_window_t1

0xa817,	// (0x00039efd) popup_preview_text_window_t2_ParamLimits

0xa817,	// (0x00039efd) popup_preview_text_window_t2

0xa860,	// (0x00039f46) popup_preview_text_window_t3_ParamLimits

0xa860,	// (0x00039f46) popup_preview_text_window_t3

0xa8a5,	// (0x00039f8b) popup_preview_text_window_t4_ParamLimits

0xa8a5,	// (0x00039f8b) popup_preview_text_window_t4

0x0004,

0xf8db,	// (0x0003efc1) popup_preview_text_window_t_ParamLimits

0xf8db,	// (0x0003efc1) popup_preview_text_window_t

0xa923,	// (0x0003a009) scroll_pane_cp11

0x98bf,	// (0x00038fa5) bg_popup_preview_window_pane_g1

0xa7ad,	// (0x00039e93) bg_popup_preview_window_pane_g2

0xa7b7,	// (0x00039e9d) bg_popup_preview_window_pane_g3

0xa7c1,	// (0x00039ea7) bg_popup_preview_window_pane_g4

0xa7cb,	// (0x00039eb1) bg_popup_preview_window_pane_g5

0xa7d5,	// (0x00039ebb) bg_popup_preview_window_pane_g6

0xa7dd,	// (0x00039ec3) bg_popup_preview_window_pane_g7

0xa7e5,	// (0x00039ecb) bg_popup_preview_window_pane_g8

0x5125,	// (0x0003480b) aid_popup_width_pane

0x6e89,	// (0x0003656f) popup_midp_note_alarm_window_ParamLimits

0x6e89,	// (0x0003656f) popup_midp_note_alarm_window

0x2822,	// (0x00031f08) data_form_pane_ParamLimits

0x5d97,	// (0x0003547d) form_field_data_pane_g1

0x5da1,	// (0x00035487) form_field_data_pane_t1_ParamLimits

0x282e,	// (0x00031f14) input_focus_pane_ParamLimits

0x3d0c,	// (0x000333f2) data_form_wide_pane_ParamLimits

0x3d1d,	// (0x00033403) form_field_data_wide_pane_g1

0x3d29,	// (0x0003340f) form_field_data_wide_pane_t1_ParamLimits

0x25a9,	// (0x00031c8f) input_focus_pane_cp6_ParamLimits

0x5f3c,	// (0x00035622) input_popup_find_pane_g1_ParamLimits

0x5f3c,	// (0x00035622) input_popup_find_pane_g1

0x62c1,	// (0x000359a7) aid_navi_side_left_pane

0x62d6,	// (0x000359bc) aid_navi_side_right_pane

0xa1c2,	// (0x000398a8) bg_popup_window_pane_cp30_ParamLimits

0xa1c2,	// (0x000398a8) bg_popup_window_pane_cp30

0xa23c,	// (0x00039922) popup_midp_note_alarm_window_g1_ParamLimits

0xa23c,	// (0x00039922) popup_midp_note_alarm_window_g1

0xa26c,	// (0x00039952) popup_midp_note_alarm_window_t1_ParamLimits

0xa26c,	// (0x00039952) popup_midp_note_alarm_window_t1

0xa30d,	// (0x000399f3) popup_midp_note_alarm_window_t2_ParamLimits

0xa30d,	// (0x000399f3) popup_midp_note_alarm_window_t2

0xa3bb,	// (0x00039aa1) popup_midp_note_alarm_window_t3_ParamLimits

0xa3bb,	// (0x00039aa1) popup_midp_note_alarm_window_t3

0xa3ed,	// (0x00039ad3) popup_midp_note_alarm_window_t4_ParamLimits

0xa3ed,	// (0x00039ad3) popup_midp_note_alarm_window_t4

0xa413,	// (0x00039af9) popup_midp_note_alarm_window_t5_ParamLimits

0xa413,	// (0x00039af9) popup_midp_note_alarm_window_t5

0x000a,

0xf878,	// (0x0003ef5e) popup_midp_note_alarm_window_t_ParamLimits

0xf878,	// (0x0003ef5e) popup_midp_note_alarm_window_t

0xa4bf,	// (0x00039ba5) wait_bar_pane_cp1_ParamLimits

0xa4bf,	// (0x00039ba5) wait_bar_pane_cp1

0xf027,	// (0x0003e70d) wait_anim_pane_copy1

0xf027,	// (0x0003e70d) wait_border_pane_copy1

0x9ea7,	// (0x0003958d) wait_border_pane_g1_copy1

0x3d43,	// (0x00033429) form_field_popup_pane_g1

0x5dbb,	// (0x000354a1) form_field_popup_pane_t1_ParamLimits

0x282e,	// (0x00031f14) input_focus_pane_cp7_ParamLimits

0x285c,	// (0x00031f42) list_form_pane_ParamLimits

0x3d4b,	// (0x00033431) form_field_popup_wide_pane_g1

0x3d53,	// (0x00033439) form_field_popup_wide_pane_t1_ParamLimits

0x282e,	// (0x00031f14) input_focus_pane_cp8_ParamLimits

0x2868,	// (0x00031f4e) list_form_wide_pane_ParamLimits

0xaffd,	// (0x0003a6e3) aid_size_cell_graphic_pane

0x5e3a,	// (0x00035520) data_form_pane_t1_ParamLimits

0x74ee,	// (0x00036bd4) data_form_wide_pane_t1_ParamLimits

0x947c,	// (0x00038b62) bg_status_flat_pane

0x555a,	// (0x00034c40) title_pane_t1_ParamLimits

0xf4a5,	// (0x0003eb8b) title_pane_t2_ParamLimits

0xf4cb,	// (0x0003ebb1) title_pane_t3_ParamLimits

0xf530,	// (0x0003ec16) title_pane_t_ParamLimits

0x6600,	// (0x00035ce6) level_1_signal_ParamLimits

0x660d,	// (0x00035cf3) level_2_signal_ParamLimits

0x661a,	// (0x00035d00) level_3_signal_ParamLimits

0x6627,	// (0x00035d0d) level_4_signal_ParamLimits

0x89f0,	// (0x000380d6) level_5_signal_ParamLimits

0x89fd,	// (0x000380e3) level_6_signal_ParamLimits

0x8a0a,	// (0x000380f0) level_7_signal_ParamLimits

0x6600,	// (0x00035ce6) level_1_battery_ParamLimits

0x660d,	// (0x00035cf3) level_2_battery_ParamLimits

0x661a,	// (0x00035d00) level_3_battery_ParamLimits

0x6627,	// (0x00035d0d) level_4_battery_ParamLimits

0x89f0,	// (0x000380d6) level_5_battery_ParamLimits

0x89fd,	// (0x000380e3) level_6_battery_ParamLimits

0x8a0a,	// (0x000380f0) level_7_battery_ParamLimits

0xa0c7,	// (0x000397ad) bg_status_flat_pane_g1

0xa0cf,	// (0x000397b5) bg_status_flat_pane_g2

0xa0d7,	// (0x000397bd) bg_status_flat_pane_g3

0xa0df,	// (0x000397c5) bg_status_flat_pane_g4

0xa0e7,	// (0x000397cd) bg_status_flat_pane_g5

0xa0ef,	// (0x000397d5) bg_status_flat_pane_g6

0xa0f7,	// (0x000397dd) bg_status_flat_pane_g7

0x55ca,	// (0x00034cb0) tabs_3_active_pane_t1_ParamLimits

0x55ca,	// (0x00034cb0) tabs_3_passive_pane_t1_ParamLimits

0x55e4,	// (0x00034cca) tabs_4_active_pane_t1_ParamLimits

0x55e4,	// (0x00034cca) tabs_4_1_passive_pane_t1_ParamLimits

0x5fd3,	// (0x000356b9) tabs_2_active_pane_t1_ParamLimits

0x5fd3,	// (0x000356b9) tabs_2_passive_pane_t1_ParamLimits

0x5fe5,	// (0x000356cb) bg_active_tab_pane_cp4_ParamLimits

0x5ff3,	// (0x000356d9) tabs_2_long_active_pane_t1_ParamLimits

0x6006,	// (0x000356ec) bg_passive_tab_pane_cp4_ParamLimits

0x71a5,	// (0x0003688b) list_single_midp_graphic_pane_t1_ParamLimits

0x5fe5,	// (0x000356cb) bg_active_tab_pane_cp5_ParamLimits

0x6012,	// (0x000356f8) tabs_3_long_active_pane_t1_ParamLimits

0x6006,	// (0x000356ec) bg_passive_tab_pane_cp5_ParamLimits

0x71a5,	// (0x0003688b) list_single_midp_graphic_pane_t1

0x947c,	// (0x00038b62) bg_status_flat_pane_ParamLimits

0x9547,	// (0x00038c2d) indicator_pane_cp2_ParamLimits

0x9547,	// (0x00038c2d) indicator_pane_cp2

0x9688,	// (0x00038d6e) navi_pane_srt_ParamLimits

0x9688,	// (0x00038d6e) navi_pane_srt

0x96ac,	// (0x00038d92) popup_clock_digital_analogue_window_cp1

0x2230,	// (0x00031916) indicator_pane_t1

0x9060,	// (0x00038746) copy_highlight_pane

0x9060,	// (0x00038746) cursor_graphics_pane

0x9060,	// (0x00038746) graphic_within_text_pane

0x9060,	// (0x00038746) link_highlight_pane

0xa8e6,	// (0x00039fcc) popup_preview_text_window_t5_ParamLimits

0xa8e6,	// (0x00039fcc) popup_preview_text_window_t5

0x9191,	// (0x00038877) cursor_digital_pane

0x9191,	// (0x00038877) cursor_primary_pane

0x91a2,	// (0x00038888) cursor_primary_small_pane

0x91aa,	// (0x00038890) cursor_secondary_pane

0x91b2,	// (0x00038898) cursor_title_pane

0x9191,	// (0x00038877) link_highlight_digital_pane

0x9199,	// (0x0003887f) link_highlight_primary_pane

0x91a2,	// (0x00038888) link_highlight_primary_small_pane

0x91aa,	// (0x00038890) link_highlight_secondary_pane

0x91b2,	// (0x00038898) link_highlight_title_pane

0x9191,	// (0x00038877) copy_highlight_digital_pane

0x9191,	// (0x00038877) copy_highlight_primary_pane

0x91a2,	// (0x00038888) copy_highlight_primary_small_pane

0x91aa,	// (0x00038890) copy_highlight_secondary_pane

0x91b2,	// (0x00038898) copy_highlight_title_pane

0x91aa,	// (0x00038890) graphic_text_digital_pane

0xa165,	// (0x0003984b) graphic_text_primary_pane

0xa16e,	// (0x00039854) graphic_text_primary_small_pane

0x91a2,	// (0x00038888) graphic_text_secondary_pane

0x9191,	// (0x00038877) graphic_text_title_pane

0x91ba,	// (0x000388a0) cursor_primary_pane_g1

0xa157,	// (0x0003983d) cursor_text_primary_t1

0xa13f,	// (0x00039825) cursor_primary_small_pane_g1

0xa149,	// (0x0003982f) cursor_text_primary_small_t1

0xa127,	// (0x0003980d) cursor_primary_small_pane_g1_copy1

0xa131,	// (0x00039817) cursor_text_primary_small_t1_copy1

0xa10f,	// (0x000397f5) cursor_text_title_t1

0xa11d,	// (0x00039803) cursor_title_pane_g1

0x91ba,	// (0x000388a0) cursor_digital_pane_g1

0x91c4,	// (0x000388aa) cursor_text_digital_t1

0x91d2,	// (0x000388b8) link_highlight_primary_pane_g1

0xa0b8,	// (0x0003979e) link_highlight_primary_pane_t1

0x91d2,	// (0x000388b8) link_highlight_primary_small_pane_g1

0x91da,	// (0x000388c0) link_highlight_primary_small_pane_t1

0x91e9,	// (0x000388cf) link_highlight_secondary_pane_g1

0x91f1,	// (0x000388d7) link_highlight_secondary_pane_t1

0xa02c,	// (0x00039712) link_highlight_title_pane_g1

0xa034,	// (0x0003971a) link_highlight_title_pane_t1

0xa015,	// (0x000396fb) link_highlight_digital_pane_g1

0xa01d,	// (0x00039703) link_highlight_digital_pane_t1

0x9edd,	// (0x000395c3) copy_highlight_primary_pane_g1

0x9ef4,	// (0x000395da) copy_highlight_primary_pane_t1

0x9edd,	// (0x000395c3) copy_highlight_primary_small_pane_g1

0x9ee5,	// (0x000395cb) copy_highlight_primary_small_pane_t1

0x9200,	// (0x000388e6) copy_highlight_secondary_pane_g1

0x9208,	// (0x000388ee) copy_highlight_secondary_pane_t1

0x9ec6,	// (0x000395ac) copy_highlight_title_pane_g1

0x9ece,	// (0x000395b4) copy_highlight_title_pane_t1

0x9edd,	// (0x000395c3) copy_highlight_digital_pane_g1

0xb1cf,	// (0x0003a8b5) copy_highlight_digital_pane_t1

0xb123,	// (0x0003a809) graphic_text_primary_pane_g1

0xb1b3,	// (0x0003a899) graphic_text_primary_pane_t1

0xb1c1,	// (0x0003a8a7) graphic_text_primary_pane_t2

0x0001,

0xf9a7,	// (0x0003f08d) graphic_text_primary_pane_t

0xb18f,	// (0x0003a875) graphic_text_primary_small_pane_g1

0xb197,	// (0x0003a87d) graphic_text_primary_small_pane_t1

0xb1a5,	// (0x0003a88b) graphic_text_primary_small_pane_t2

0x0001,

0xf9a2,	// (0x0003f088) graphic_text_primary_small_pane_t

0xb16b,	// (0x0003a851) graphic_text_secondary_pane_g1

0xb173,	// (0x0003a859) graphic_text_secondary_pane_t1

0xb181,	// (0x0003a867) graphic_text_secondary_pane_t2

0x0001,

0xf99d,	// (0x0003f083) graphic_text_secondary_pane_t

0xb147,	// (0x0003a82d) graphic_text_title_pane_g1

0xb14f,	// (0x0003a835) graphic_text_title_pane_t1

0xb15d,	// (0x0003a843) graphic_text_title_pane_t2

0x0001,

0xf998,	// (0x0003f07e) graphic_text_title_pane_t

0xb123,	// (0x0003a809) graphic_text_digital_pane_g1

0xb12b,	// (0x0003a811) graphic_text_digital_pane_t1

0xb139,	// (0x0003a81f) graphic_text_digital_pane_t2

0x0001,

0xf993,	// (0x0003f079) graphic_text_digital_pane_t

0xf4dd,	// (0x0003ebc3) navi_icon_pane_srt_ParamLimits

0xf4dd,	// (0x0003ebc3) navi_icon_pane_srt

0xf027,	// (0x0003e70d) navi_midp_pane_srt

0xf027,	// (0x0003e70d) navi_navi_pane_srt

0xf4dd,	// (0x0003ebc3) navi_text_pane_srt_ParamLimits

0xf4dd,	// (0x0003ebc3) navi_text_pane_srt

0xb0ee,	// (0x0003a7d4) navi_navi_icon_text_pane_srt

0xb0f6,	// (0x0003a7dc) navi_navi_pane_srt_g1_ParamLimits

0xb0f6,	// (0x0003a7dc) navi_navi_pane_srt_g1

0xb108,	// (0x0003a7ee) navi_navi_pane_srt_g2_ParamLimits

0xb108,	// (0x0003a7ee) navi_navi_pane_srt_g2

0x0001,

0xf98e,	// (0x0003f074) navi_navi_pane_srt_g_ParamLimits

0xf98e,	// (0x0003f074) navi_navi_pane_srt_g

0xb11a,	// (0x0003a800) navi_navi_tabs_pane_srt

0xb0ee,	// (0x0003a7d4) navi_navi_text_pane_srt

0xb0ee,	// (0x0003a7d4) navi_navi_volume_pane_srt

0xb0df,	// (0x0003a7c5) navi_navi_text_pane_srt_t1

0x762c,	// (0x00036d12) navi_navi_volume_pane_srt_g1

0x7634,	// (0x00036d1a) volume_small_pane_srt_ParamLimits

0x7634,	// (0x00036d1a) volume_small_pane_srt

0x68da,	// (0x00035fc0) volume_small_pane_srt_g1_ParamLimits

0x68da,	// (0x00035fc0) volume_small_pane_srt_g1

0x68ea,	// (0x00035fd0) volume_small_pane_srt_g2_ParamLimits

0x68ea,	// (0x00035fd0) volume_small_pane_srt_g2

0x68fb,	// (0x00035fe1) volume_small_pane_srt_g3_ParamLimits

0x68fb,	// (0x00035fe1) volume_small_pane_srt_g3

0x690c,	// (0x00035ff2) volume_small_pane_srt_g4_ParamLimits

0x690c,	// (0x00035ff2) volume_small_pane_srt_g4

0x691d,	// (0x00036003) volume_small_pane_srt_g5_ParamLimits

0x691d,	// (0x00036003) volume_small_pane_srt_g5

0x692e,	// (0x00036014) volume_small_pane_srt_g6_ParamLimits

0x692e,	// (0x00036014) volume_small_pane_srt_g6

0x693f,	// (0x00036025) volume_small_pane_srt_g7_ParamLimits

0x693f,	// (0x00036025) volume_small_pane_srt_g7

0x6950,	// (0x00036036) volume_small_pane_srt_g8_ParamLimits

0x6950,	// (0x00036036) volume_small_pane_srt_g8

0x6961,	// (0x00036047) volume_small_pane_srt_g9_ParamLimits

0x6961,	// (0x00036047) volume_small_pane_srt_g9

0x6972,	// (0x00036058) volume_small_pane_srt_g10_ParamLimits

0x6972,	// (0x00036058) volume_small_pane_srt_g10

0x0009,

0xf736,	// (0x0003ee1c) volume_small_pane_srt_g_ParamLimits

0xf736,	// (0x0003ee1c) volume_small_pane_srt_g

0x24a2,	// (0x00031b88) query_popup_data_pane_cp2

0xb0c5,	// (0x0003a7ab) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb0c5,	// (0x0003a7ab) navi_navi_icon_text_pane_srt_t1

0xa165,	// (0x0003984b) navi_tabs_2_long_pane_srt

0xa165,	// (0x0003984b) navi_tabs_2_pane_srt

0xa165,	// (0x0003984b) navi_tabs_3_long_pane_srt

0xa165,	// (0x0003984b) navi_tabs_3_pane_srt

0xa165,	// (0x0003984b) navi_tabs_4_pane_srt

0x760c,	// (0x00036cf2) tabs_2_active_pane_srt_ParamLimits

0x760c,	// (0x00036cf2) tabs_2_active_pane_srt

0x761c,	// (0x00036d02) tabs_2_passive_pane_srt_ParamLimits

0x761c,	// (0x00036d02) tabs_2_passive_pane_srt

0x938f,	// (0x00038a75) bg_passive_tab_pane_cp1_srt_ParamLimits

0x938f,	// (0x00038a75) bg_passive_tab_pane_cp1_srt

0xb091,	// (0x0003a777) bg_passive_tab_pane_g1_cp1_srt

0x8c99,	// (0x0003837f) bg_passive_tab_pane_g2_cp1_srt

0xb09a,	// (0x0003a780) bg_passive_tab_pane_g3_cp1_srt

0xf4dd,	// (0x0003ebc3) bg_active_tab_pane_cp1_srt_ParamLimits

0xf4dd,	// (0x0003ebc3) bg_active_tab_pane_cp1_srt

0xb0a3,	// (0x0003a789) tabs_2_active_pane_srt_g1

0xb0ab,	// (0x0003a791) tabs_2_active_pane_srt_t1_ParamLimits

0xb0ab,	// (0x0003a791) tabs_2_active_pane_srt_t1

0xb091,	// (0x0003a777) bg_active_tab_pane_g1_cp1_srt

0x8c99,	// (0x0003837f) bg_active_tab_pane_g2_cp1_srt

0xb09a,	// (0x0003a780) bg_active_tab_pane_g3_cp1_srt

0x75d9,	// (0x00036cbf) tabs_3_active_pane_srt_ParamLimits

0x75d9,	// (0x00036cbf) tabs_3_active_pane_srt

0x75ea,	// (0x00036cd0) tabs_3_passive_pane_cp_srt_ParamLimits

0x75ea,	// (0x00036cd0) tabs_3_passive_pane_cp_srt

0x75fb,	// (0x00036ce1) tabs_3_passive_pane_srt_ParamLimits

0x75fb,	// (0x00036ce1) tabs_3_passive_pane_srt

0x938f,	// (0x00038a75) bg_passive_tab_pane_cp2_srt_ParamLimits

0x938f,	// (0x00038a75) bg_passive_tab_pane_cp2_srt

0x9217,	// (0x000388fd) bg_passive_tab_pane_g1_cp2_srt

0x8c99,	// (0x0003837f) bg_passive_tab_pane_g2_cp2_srt

0x9220,	// (0x00038906) bg_passive_tab_pane_g3_cp2_srt

0xf4dd,	// (0x0003ebc3) bg_active_tab_pane_cp2_srt_ParamLimits

0xf4dd,	// (0x0003ebc3) bg_active_tab_pane_cp2_srt

0xb077,	// (0x0003a75d) tabs_3_active_pane_srt_g1

0xb07f,	// (0x0003a765) tabs_3_active_pane_srt_t1_ParamLimits

0xb07f,	// (0x0003a765) tabs_3_active_pane_srt_t1

0x9217,	// (0x000388fd) bg_active_tab_pane_g1_cp2_srt

0x8c99,	// (0x0003837f) bg_active_tab_pane_g2_cp2_srt

0x9220,	// (0x00038906) bg_active_tab_pane_g3_cp2_srt

0x7591,	// (0x00036c77) tabs_4_active_pane_srt_ParamLimits

0x7591,	// (0x00036c77) tabs_4_active_pane_srt

0x75a3,	// (0x00036c89) tabs_4_passive_pane_cp2_srt_ParamLimits

0x75a3,	// (0x00036c89) tabs_4_passive_pane_cp2_srt

0x6ac4,	// (0x000361aa) aid_size_cell_toolbar

0x6006,	// (0x000356ec) main_idle_act_pane_ParamLimits

0x6caf,	// (0x00036395) popup_large_graphic_colour_window_ParamLimits

0x7056,	// (0x0003673c) popup_toolbar_window_ParamLimits

0x7056,	// (0x0003673c) popup_toolbar_window

0x3f14,	// (0x000335fa) list_single_graphic_2heading_pane_ParamLimits

0x3f14,	// (0x000335fa) list_single_graphic_2heading_pane

0x6357,	// (0x00035a3d) aid_size_cell_apps_grid_lsc_pane

0x6369,	// (0x00035a4f) aid_size_cell_apps_grid_prt_pane

0x938f,	// (0x00038a75) bg_wml_button_pane_cp1_ParamLimits

0x938f,	// (0x00038a75) bg_wml_button_pane_cp1

0x9b41,	// (0x00039227) form_midp_field_text_pane_t1_ParamLimits

0x9933,	// (0x00039019) input_focus_pane_cp050_ParamLimits

0x9b6c,	// (0x00039252) list_midp_form_text_pane_ParamLimits

0x9b1e,	// (0x00039204) input_focus_pane_cp051_ParamLimits

0x9b32,	// (0x00039218) list_midp_choice_pane_ParamLimits

0x99ec,	// (0x000390d2) list_single_2graphic_pane_cp3_ParamLimits

0x99ec,	// (0x000390d2) list_single_2graphic_pane_cp3

0x9a02,	// (0x000390e8) list_single_midp_graphic_pane_ParamLimits

0x9a02,	// (0x000390e8) list_single_midp_graphic_pane

0x5091,	// (0x00034777) list_single_graphic_2heading_pane_g1_ParamLimits

0x5091,	// (0x00034777) list_single_graphic_2heading_pane_g1

0x509d,	// (0x00034783) list_single_graphic_2heading_pane_g4_ParamLimits

0x509d,	// (0x00034783) list_single_graphic_2heading_pane_g4

0x50a9,	// (0x0003478f) list_single_graphic_2heading_pane_g5_ParamLimits

0x50a9,	// (0x0003478f) list_single_graphic_2heading_pane_g5

0x0002,

0xf789,	// (0x0003ee6f) list_single_graphic_2heading_pane_g_ParamLimits

0xf789,	// (0x0003ee6f) list_single_graphic_2heading_pane_g

0x50b5,	// (0x0003479b) list_single_graphic_2heading_pane_t1_ParamLimits

0x50b5,	// (0x0003479b) list_single_graphic_2heading_pane_t1

0x50c9,	// (0x000347af) list_single_graphic_2heading_pane_t2_ParamLimits

0x50c9,	// (0x000347af) list_single_graphic_2heading_pane_t2

0x50e5,	// (0x000347cb) list_single_graphic_2heading_pane_t3_ParamLimits

0x50e5,	// (0x000347cb) list_single_graphic_2heading_pane_t3

0x0002,

0xf790,	// (0x0003ee76) list_single_graphic_2heading_pane_t_ParamLimits

0xf790,	// (0x0003ee76) list_single_graphic_2heading_pane_t

0x97fd,	// (0x00038ee3) bg_popup_sub_pane_cp2

0x9827,	// (0x00038f0d) grid_toobar_pane

0x7115,	// (0x000367fb) cell_toolbar_pane_ParamLimits

0x7115,	// (0x000367fb) cell_toolbar_pane

0x9863,	// (0x00038f49) cell_toolbar_pane_g1_ParamLimits

0x9863,	// (0x00038f49) cell_toolbar_pane_g1

0x9877,	// (0x00038f5d) cell_toolbar_pane_g2_ParamLimits

0x9877,	// (0x00038f5d) cell_toolbar_pane_g2

0x0001,

0xf79e,	// (0x0003ee84) cell_toolbar_pane_g_ParamLimits

0xf79e,	// (0x0003ee84) cell_toolbar_pane_g

0x9899,	// (0x00038f7f) grid_highlight_pane_cp2_ParamLimits

0x9899,	// (0x00038f7f) grid_highlight_pane_cp2

0x98b3,	// (0x00038f99) toolbar_button_pane

0x98bf,	// (0x00038fa5) toolbar_button_pane_g1

0x98c7,	// (0x00038fad) toolbar_button_pane_g2

0x98cf,	// (0x00038fb5) toolbar_button_pane_g3

0x98d7,	// (0x00038fbd) toolbar_button_pane_g4

0x98df,	// (0x00038fc5) toolbar_button_pane_g5

0x98e7,	// (0x00038fcd) toolbar_button_pane_g6

0x98ef,	// (0x00038fd5) toolbar_button_pane_g7

0x98f7,	// (0x00038fdd) toolbar_button_pane_g8

0x98ff,	// (0x00038fe5) toolbar_button_pane_g9

0x0009,

0xf7a3,	// (0x0003ee89) toolbar_button_pane_g

0x714d,	// (0x00036833) list_single_2graphic_pane_g1_cp3_ParamLimits

0x714d,	// (0x00036833) list_single_2graphic_pane_g1_cp3

0x7159,	// (0x0003683f) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7159,	// (0x0003683f) list_single_2graphic_pane_g2_cp3

0x716a,	// (0x00036850) list_single_2graphic_pane_g3_cp3

0x7172,	// (0x00036858) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7172,	// (0x00036858) list_single_2graphic_pane_g4_cp3

0x717e,	// (0x00036864) list_single_2graphic_pane_t1_cp3_ParamLimits

0x717e,	// (0x00036864) list_single_2graphic_pane_t1_cp3

0x7199,	// (0x0003687f) list_single_midp_graphic_pane_g2_ParamLimits

0x7199,	// (0x0003687f) list_single_midp_graphic_pane_g2

0x6acc,	// (0x000361b2) aid_zoom_text_primary

0x5089,	// (0x0003476f) aid_zoom_text_secondary

0x92d1,	// (0x000389b7) status_small_pane_g7_ParamLimits

0x92d1,	// (0x000389b7) status_small_pane_g7

0x92f4,	// (0x000389da) status_small_pane_t1_ParamLimits

0x5535,	// (0x00034c1b) title_pane_g2

0x0003,

0xf527,	// (0x0003ec0d) title_pane_g

0x579e,	// (0x00034e84) aid_size_cell_colour_1_pane_ParamLimits

0x579e,	// (0x00034e84) aid_size_cell_colour_1_pane

0x57b2,	// (0x00034e98) aid_size_cell_colour_2_pane_ParamLimits

0x57b2,	// (0x00034e98) aid_size_cell_colour_2_pane

0x57c6,	// (0x00034eac) aid_size_cell_colour_3_pane_ParamLimits

0x57c6,	// (0x00034eac) aid_size_cell_colour_3_pane

0x57da,	// (0x00034ec0) aid_size_cell_colour_4_pane_ParamLimits

0x57da,	// (0x00034ec0) aid_size_cell_colour_4_pane

0x61c9,	// (0x000358af) title_pane_stacon_g1_ParamLimits

0x61c9,	// (0x000358af) title_pane_stacon_g1

0x9f4b,	// (0x00039631) popup_note_wait_window_g3_ParamLimits

0x9f4b,	// (0x00039631) popup_note_wait_window_g3

0x9fc2,	// (0x000396a8) popup_note_wait_window_t5_ParamLimits

0x9fc2,	// (0x000396a8) popup_note_wait_window_t5

0xf027,	// (0x0003e70d) main_feb_china_hwr_fs_writing_pane

0x6b74,	// (0x0003625a) popup_feb_china_hwr_fs_window_ParamLimits

0x6b74,	// (0x0003625a) popup_feb_china_hwr_fs_window

0x71bb,	// (0x000368a1) aid_size_cell_hwr_fs_ParamLimits

0x71bb,	// (0x000368a1) aid_size_cell_hwr_fs

0x9933,	// (0x00039019) bg_popup_sub_pane_cp3_ParamLimits

0x9933,	// (0x00039019) bg_popup_sub_pane_cp3

0x71d0,	// (0x000368b6) grid_hwr_fs_pane_ParamLimits

0x71d0,	// (0x000368b6) grid_hwr_fs_pane

0x71e8,	// (0x000368ce) linegrid_hwr_fs_pane_ParamLimits

0x71e8,	// (0x000368ce) linegrid_hwr_fs_pane

0x71f8,	// (0x000368de) cell_hwr_fs_pane_ParamLimits

0x71f8,	// (0x000368de) cell_hwr_fs_pane

0x993f,	// (0x00039025) linegrid_hwr_fs_pane_g1_ParamLimits

0x993f,	// (0x00039025) linegrid_hwr_fs_pane_g1

0x994b,	// (0x00039031) linegrid_hwr_fs_pane_g2_ParamLimits

0x994b,	// (0x00039031) linegrid_hwr_fs_pane_g2

0x995d,	// (0x00039043) linegrid_hwr_fs_pane_g3_ParamLimits

0x995d,	// (0x00039043) linegrid_hwr_fs_pane_g3

0x721c,	// (0x00036902) linegrid_hwr_fs_pane_g4_ParamLimits

0x721c,	// (0x00036902) linegrid_hwr_fs_pane_g4

0x723a,	// (0x00036920) linegrid_hwr_fs_pane_g5_ParamLimits

0x723a,	// (0x00036920) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ce,	// (0x0003eeb4) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ce,	// (0x0003eeb4) linegrid_hwr_fs_pane_g

0x9969,	// (0x0003904f) cell_hwr_fs_pane_g1_ParamLimits

0x9969,	// (0x0003904f) cell_hwr_fs_pane_g1

0x973a,	// (0x00038e20) cell_hwr_fs_pane_g2_ParamLimits

0x973a,	// (0x00038e20) cell_hwr_fs_pane_g2

0x997f,	// (0x00039065) cell_hwr_fs_pane_g3_ParamLimits

0x997f,	// (0x00039065) cell_hwr_fs_pane_g3

0x998c,	// (0x00039072) cell_hwr_fs_pane_g4_ParamLimits

0x998c,	// (0x00039072) cell_hwr_fs_pane_g4

0x0003,

0xf7d9,	// (0x0003eebf) cell_hwr_fs_pane_g_ParamLimits

0xf7d9,	// (0x0003eebf) cell_hwr_fs_pane_g

0x7250,	// (0x00036936) cell_hwr_fs_pane_t1

0xf027,	// (0x0003e70d) grid_highlight_pane_cp6

0xf027,	// (0x0003e70d) main_idle_act2_pane

0x5f78,	// (0x0003565e) aid_inside_area_popup_secondary

0xa5fb,	// (0x00039ce1) aid_inside_area_window_primary_ParamLimits

0xa5fb,	// (0x00039ce1) aid_inside_area_window_primary

0xb1de,	// (0x0003a8c4) ai2_news_ticker_pane

0xb1e6,	// (0x0003a8cc) aid_size_cell_ai1_link_ParamLimits

0xb1e6,	// (0x0003a8cc) aid_size_cell_ai1_link

0xb200,	// (0x0003a8e6) popup_ai2_data_window_ParamLimits

0xb200,	// (0x0003a8e6) popup_ai2_data_window

0xb21e,	// (0x0003a904) popup_ai2_link_window_ParamLimits

0xb21e,	// (0x0003a904) popup_ai2_link_window

0x9933,	// (0x00039019) bg_popup_sub_pane_cp4_ParamLimits

0x9933,	// (0x00039019) bg_popup_sub_pane_cp4

0xb234,	// (0x0003a91a) grid_ai2_link_pane_ParamLimits

0xb234,	// (0x0003a91a) grid_ai2_link_pane

0xb24b,	// (0x0003a931) popup_ai2_link_window_g1_ParamLimits

0xb24b,	// (0x0003a931) popup_ai2_link_window_g1

0xb257,	// (0x0003a93d) popup_ai2_link_window_g2_ParamLimits

0xb257,	// (0x0003a93d) popup_ai2_link_window_g2

0x0001,

0xf9ac,	// (0x0003f092) popup_ai2_link_window_g_ParamLimits

0xf9ac,	// (0x0003f092) popup_ai2_link_window_g

0xb268,	// (0x0003a94e) ai2_mp_button_pane

0xb270,	// (0x0003a956) ai2_mp_volume_pane

0x9b1e,	// (0x00039204) bg_popup_sub_pane_cp5_ParamLimits

0x9b1e,	// (0x00039204) bg_popup_sub_pane_cp5

0xb278,	// (0x0003a95e) heading_ai2_gene_pane_ParamLimits

0xb278,	// (0x0003a95e) heading_ai2_gene_pane

0xb284,	// (0x0003a96a) list_ai2_gene_pane_ParamLimits

0xb284,	// (0x0003a96a) list_ai2_gene_pane

0xb2cc,	// (0x0003a9b2) cell_ai2_link_pane_ParamLimits

0xb2cc,	// (0x0003a9b2) cell_ai2_link_pane

0xb2e2,	// (0x0003a9c8) cell_ai2_link_pane_g1

0xf027,	// (0x0003e70d) grid_highlight_pane_cp7

0x7649,	// (0x00036d2f) ai2_mp_volume_pane_g1

0xb3b5,	// (0x0003aa9b) ai2_mp_volume_pane_g2

0xb32a,	// (0x0003aa10) list_ai2_gene_pane_t1

0xb3bd,	// (0x0003aaa3) ai2_mp_volume_pane_g3

0x0002,

0xf9c5,	// (0x0003f0ab) ai2_mp_volume_pane_g

0x7651,	// (0x00036d37) volume_small_pane_cp3

0xb3c5,	// (0x0003aaab) aid_size_cell_ai2_button

0xb3cd,	// (0x0003aab3) grid_ai2_button_pane

0xb3d6,	// (0x0003aabc) cell_ai2_button_pane_ParamLimits

0xb3d6,	// (0x0003aabc) cell_ai2_button_pane

0xf01d,	// (0x0003e703) cell_ai2_button_pane_g1

0xf027,	// (0x0003e70d) grid_highlight_pane_cp8

0xb375,	// (0x0003aa5b) ai2_gene_pane_t1_ParamLimits

0xb375,	// (0x0003aa5b) ai2_gene_pane_t1

0x6aba,	// (0x000361a0) aid_height_parent_landscape

0xac7b,	// (0x0003a361) aid_height_set_list

0xac8c,	// (0x0003a372) aid_size_parent

0xaffd,	// (0x0003a6e3) aid_size_cell_graphic_pane_ParamLimits

0xb294,	// (0x0003a97a) popup_ai2_data_window_g1_ParamLimits

0xb294,	// (0x0003a97a) popup_ai2_data_window_g1

0xb2a0,	// (0x0003a986) ai2_news_ticker_pane_g1

0xb2a8,	// (0x0003a98e) ai2_news_ticker_pane_g2

0x0001,

0xf9b1,	// (0x0003f097) ai2_news_ticker_pane_g

0xb2b0,	// (0x0003a996) ai2_news_ticker_pane_t1

0xb2be,	// (0x0003a9a4) ai2_news_ticker_pane_t2

0x0001,

0xf9b6,	// (0x0003f09c) ai2_news_ticker_pane_t

0xb2eb,	// (0x0003a9d1) heading_ai2_gene_pane_g1

0xb2f3,	// (0x0003a9d9) heading_ai2_gene_pane_t1_ParamLimits

0xb2f3,	// (0x0003a9d9) heading_ai2_gene_pane_t1

0xb308,	// (0x0003a9ee) list_highlight_pane_cp6

0xb310,	// (0x0003a9f6) ai2_gene_pane_ParamLimits

0xb310,	// (0x0003a9f6) ai2_gene_pane

0xb338,	// (0x0003aa1e) list_ai2_gene_pane_t2

0x0001,

0xf9bb,	// (0x0003f0a1) list_ai2_gene_pane_t

0xb346,	// (0x0003aa2c) list_highlight_pane_cp8_ParamLimits

0xb346,	// (0x0003aa2c) list_highlight_pane_cp8

0xb357,	// (0x0003aa3d) ai2_gene_pane_g1_ParamLimits

0xb357,	// (0x0003aa3d) ai2_gene_pane_g1

0xb369,	// (0x0003aa4f) ai2_gene_pane_g2_ParamLimits

0xb369,	// (0x0003aa4f) ai2_gene_pane_g2

0x0001,

0xf9c0,	// (0x0003f0a6) ai2_gene_pane_g_ParamLimits

0xf9c0,	// (0x0003f0a6) ai2_gene_pane_g

0x27c4,	// (0x00031eaa) scroll_pane_cp12

0x6a79,	// (0x0003615f) control_pane_t3_ParamLimits

0x6a79,	// (0x0003615f) control_pane_t3

0x92e5,	// (0x000389cb) status_small_pane_g8_ParamLimits

0x92e5,	// (0x000389cb) status_small_pane_g8

0x6c72,	// (0x00036358) popup_find_window_ParamLimits

0x6e9f,	// (0x00036585) popup_note_image_window_ParamLimits

0x3c4b,	// (0x00033331) list_double2_graphic_pane_vc_g1_ParamLimits

0x3c4b,	// (0x00033331) list_double2_graphic_pane_vc_g1

0x3e0d,	// (0x000334f3) list_double2_graphic_pane_vc_g2_ParamLimits

0x3e0d,	// (0x000334f3) list_double2_graphic_pane_vc_g2

0x3e19,	// (0x000334ff) list_double2_graphic_pane_vc_g3_ParamLimits

0x3e19,	// (0x000334ff) list_double2_graphic_pane_vc_g3

0x0002,

0xf797,	// (0x0003ee7d) list_double2_graphic_pane_vc_g_ParamLimits

0xf797,	// (0x0003ee7d) list_double2_graphic_pane_vc_g

0x3e25,	// (0x0003350b) list_double2_graphic_pane_vc_t1_ParamLimits

0x3e25,	// (0x0003350b) list_double2_graphic_pane_vc_t1

0x3c1d,	// (0x00033303) list_single_heading_pane_vc_g1_ParamLimits

0x3c1d,	// (0x00033303) list_single_heading_pane_vc_g1

0x3c29,	// (0x0003330f) list_single_heading_pane_vc_g2_ParamLimits

0x3c29,	// (0x0003330f) list_single_heading_pane_vc_g2

0x0001,

0xf7b8,	// (0x0003ee9e) list_single_heading_pane_vc_g_ParamLimits

0xf7b8,	// (0x0003ee9e) list_single_heading_pane_vc_g

0x3e3b,	// (0x00033521) list_single_heading_pane_vc_t1_ParamLimits

0x3e3b,	// (0x00033521) list_single_heading_pane_vc_t1

0x3e51,	// (0x00033537) list_single_heading_pane_vc_t2_ParamLimits

0x3e51,	// (0x00033537) list_single_heading_pane_vc_t2

0x0001,

0xf7bd,	// (0x0003eea3) list_single_heading_pane_vc_t_ParamLimits

0xf7bd,	// (0x0003eea3) list_single_heading_pane_vc_t

0x3e67,	// (0x0003354d) list_setting_number_pane_vc_g1_ParamLimits

0x3e67,	// (0x0003354d) list_setting_number_pane_vc_g1

0x3e73,	// (0x00033559) list_setting_number_pane_vc_g2_ParamLimits

0x3e73,	// (0x00033559) list_setting_number_pane_vc_g2

0x0001,

0xf7c2,	// (0x0003eea8) list_setting_number_pane_vc_g_ParamLimits

0xf7c2,	// (0x0003eea8) list_setting_number_pane_vc_g

0x3e7f,	// (0x00033565) list_setting_number_pane_vc_t1_ParamLimits

0x3e7f,	// (0x00033565) list_setting_number_pane_vc_t1

0x3e93,	// (0x00033579) list_setting_number_pane_vc_t2_ParamLimits

0x3e93,	// (0x00033579) list_setting_number_pane_vc_t2

0x3eaf,	// (0x00033595) list_setting_number_pane_vc_t3_ParamLimits

0x3eaf,	// (0x00033595) list_setting_number_pane_vc_t3

0x0002,

0xf7c7,	// (0x0003eead) list_setting_number_pane_vc_t_ParamLimits

0xf7c7,	// (0x0003eead) list_setting_number_pane_vc_t

0x3edd,	// (0x000335c3) set_value_pane_vc_ParamLimits

0x3edd,	// (0x000335c3) set_value_pane_vc

0x3f14,	// (0x000335fa) list_double2_graphic_pane_vc_ParamLimits

0x3f14,	// (0x000335fa) list_double2_graphic_pane_vc

0xae75,	// (0x0003a55b) list_double2_large_graphic_pane_vc_ParamLimits

0xae75,	// (0x0003a55b) list_double2_large_graphic_pane_vc

0x3f14,	// (0x000335fa) list_double2_pane_vc_ParamLimits

0x3f14,	// (0x000335fa) list_double2_pane_vc

0x3f14,	// (0x000335fa) list_double_graphic_heading_pane_vc_ParamLimits

0x3f14,	// (0x000335fa) list_double_graphic_heading_pane_vc

0x3f14,	// (0x000335fa) list_double_graphic_pane_vc_ParamLimits

0x3f14,	// (0x000335fa) list_double_graphic_pane_vc

0x3f14,	// (0x000335fa) list_double_heading_pane_vc_ParamLimits

0x3f14,	// (0x000335fa) list_double_heading_pane_vc

0xae89,	// (0x0003a56f) list_double_large_graphic_pane_vc_ParamLimits

0xae89,	// (0x0003a56f) list_double_large_graphic_pane_vc

0x3f14,	// (0x000335fa) list_double_number_pane_vc_ParamLimits

0x3f14,	// (0x000335fa) list_double_number_pane_vc

0x3f14,	// (0x000335fa) list_double_pane_vc_ParamLimits

0x3f14,	// (0x000335fa) list_double_pane_vc

0x3f14,	// (0x000335fa) list_double_time_pane_vc_ParamLimits

0x3f14,	// (0x000335fa) list_double_time_pane_vc

0x3f14,	// (0x000335fa) list_setting_number_pane_vc_ParamLimits

0x3f14,	// (0x000335fa) list_setting_number_pane_vc

0x3f14,	// (0x000335fa) list_setting_pane_vc_ParamLimits

0x3f14,	// (0x000335fa) list_setting_pane_vc

0x3f14,	// (0x000335fa) list_single_graphic_heading_pane_vc_ParamLimits

0x3f14,	// (0x000335fa) list_single_graphic_heading_pane_vc

0x3f14,	// (0x000335fa) list_single_heading_pane_vc_ParamLimits

0x3f14,	// (0x000335fa) list_single_heading_pane_vc

0x7532,	// (0x00036c18) list_single_number_heading_pane_vc_ParamLimits

0x7532,	// (0x00036c18) list_single_number_heading_pane_vc

0x3f2b,	// (0x00033611) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3f2b,	// (0x00033611) list_double_graphic_heading_pane_vc_g1

0x3e0d,	// (0x000334f3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3e0d,	// (0x000334f3) list_double_graphic_heading_pane_vc_g2

0x3e19,	// (0x000334ff) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3e19,	// (0x000334ff) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9cc,	// (0x0003f0b2) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9cc,	// (0x0003f0b2) list_double_graphic_heading_pane_vc_g

0x3f37,	// (0x0003361d) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3f37,	// (0x0003361d) list_double_graphic_heading_pane_vc_t1

0x3f4d,	// (0x00033633) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3f4d,	// (0x00033633) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d3,	// (0x0003f0b9) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d3,	// (0x0003f0b9) list_double_graphic_heading_pane_vc_t

0x3e67,	// (0x0003354d) list_setting_pane_vc_g1_ParamLimits

0x3e67,	// (0x0003354d) list_setting_pane_vc_g1

0x3e73,	// (0x00033559) list_setting_pane_vc_g2_ParamLimits

0x3e73,	// (0x00033559) list_setting_pane_vc_g2

0x0001,

0xf7c2,	// (0x0003eea8) list_setting_pane_vc_g_ParamLimits

0xf7c2,	// (0x0003eea8) list_setting_pane_vc_g

0x3f6b,	// (0x00033651) list_setting_pane_vc_t1_ParamLimits

0x3f6b,	// (0x00033651) list_setting_pane_vc_t1

0x3f87,	// (0x0003366d) list_setting_pane_vc_t2_ParamLimits

0x3f87,	// (0x0003366d) list_setting_pane_vc_t2

0x0001,

0xfa01,	// (0x0003f0e7) list_setting_pane_vc_t_ParamLimits

0xfa01,	// (0x0003f0e7) list_setting_pane_vc_t

0x3edd,	// (0x000335c3) set_value_pane_cp_vc_ParamLimits

0x3edd,	// (0x000335c3) set_value_pane_cp_vc

0x3c1d,	// (0x00033303) list_single_number_heading_pane_vc_g1_ParamLimits

0x3c1d,	// (0x00033303) list_single_number_heading_pane_vc_g1

0x3c29,	// (0x0003330f) list_single_number_heading_pane_vc_g2_ParamLimits

0x3c29,	// (0x0003330f) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b8,	// (0x0003ee9e) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b8,	// (0x0003ee9e) list_single_number_heading_pane_vc_g

0x3c35,	// (0x0003331b) list_single_number_heading_pane_vc_t1_ParamLimits

0x3c35,	// (0x0003331b) list_single_number_heading_pane_vc_t1

0x3fa3,	// (0x00033689) list_single_number_heading_pane_vc_t2_ParamLimits

0x3fa3,	// (0x00033689) list_single_number_heading_pane_vc_t2

0x3fb9,	// (0x0003369f) list_single_number_heading_pane_vc_t3_ParamLimits

0x3fb9,	// (0x0003369f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa06,	// (0x0003f0ec) list_single_number_heading_pane_vc_t_ParamLimits

0xfa06,	// (0x0003f0ec) list_single_number_heading_pane_vc_t

0x3c4b,	// (0x00033331) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3c4b,	// (0x00033331) list_single_graphic_heading_pane_vc_g1

0x3c1d,	// (0x00033303) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3c1d,	// (0x00033303) list_single_graphic_heading_pane_vc_g4

0x3c29,	// (0x0003330f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3c29,	// (0x0003330f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa0d,	// (0x0003f0f3) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa0d,	// (0x0003f0f3) list_single_graphic_heading_pane_vc_g

0x3c35,	// (0x0003331b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3c35,	// (0x0003331b) list_single_graphic_heading_pane_vc_t1

0x3fcb,	// (0x000336b1) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3fcb,	// (0x000336b1) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa14,	// (0x0003f0fa) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa14,	// (0x0003f0fa) list_single_graphic_heading_pane_vc_t

0x3c1d,	// (0x00033303) list_double2_pane_vc_g1_ParamLimits

0x3c1d,	// (0x00033303) list_double2_pane_vc_g1

0x3c29,	// (0x0003330f) list_double2_pane_vc_g2_ParamLimits

0x3c29,	// (0x0003330f) list_double2_pane_vc_g2

0x0001,

0xf7b8,	// (0x0003ee9e) list_double2_pane_vc_g_ParamLimits

0xf7b8,	// (0x0003ee9e) list_double2_pane_vc_g

0x3efe,	// (0x000335e4) list_double2_pane_vc_t1_ParamLimits

0x3efe,	// (0x000335e4) list_double2_pane_vc_t1

0x3c57,	// (0x0003333d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3c57,	// (0x0003333d) list_double2_large_graphic_pane_vc_g1

0x3c63,	// (0x00033349) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3c63,	// (0x00033349) list_double2_large_graphic_pane_vc_g2

0x3c6f,	// (0x00033355) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3c6f,	// (0x00033355) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa19,	// (0x0003f0ff) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa19,	// (0x0003f0ff) list_double2_large_graphic_pane_vc_g

0x3c7b,	// (0x00033361) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3c7b,	// (0x00033361) list_double2_large_graphic_pane_vc_t1

0x3fdd,	// (0x000336c3) list_double_time_pane_vc_g1_ParamLimits

0x3fdd,	// (0x000336c3) list_double_time_pane_vc_g1

0x3fe9,	// (0x000336cf) list_double_time_pane_vc_g2_ParamLimits

0x3fe9,	// (0x000336cf) list_double_time_pane_vc_g2

0x0001,

0xfa20,	// (0x0003f106) list_double_time_pane_vc_g_ParamLimits

0xfa20,	// (0x0003f106) list_double_time_pane_vc_g

0x3ff5,	// (0x000336db) list_double_time_pane_vc_t1_ParamLimits

0x3ff5,	// (0x000336db) list_double_time_pane_vc_t1

0x401f,	// (0x00033705) list_double_time_pane_vc_t2_ParamLimits

0x401f,	// (0x00033705) list_double_time_pane_vc_t2

0x4074,	// (0x0003375a) list_double_time_pane_vc_t3_ParamLimits

0x4074,	// (0x0003375a) list_double_time_pane_vc_t3

0x4086,	// (0x0003376c) list_double_time_pane_vc_t4_ParamLimits

0x4086,	// (0x0003376c) list_double_time_pane_vc_t4

0x0003,

0xfa25,	// (0x0003f10b) list_double_time_pane_vc_t_ParamLimits

0xfa25,	// (0x0003f10b) list_double_time_pane_vc_t

0x3c1d,	// (0x00033303) list_double_pane_vc_g1_ParamLimits

0x3c1d,	// (0x00033303) list_double_pane_vc_g1

0x3c29,	// (0x0003330f) list_double_pane_vc_g2_ParamLimits

0x3c29,	// (0x0003330f) list_double_pane_vc_g2

0x0001,

0xf7b8,	// (0x0003ee9e) list_double_pane_vc_g_ParamLimits

0xf7b8,	// (0x0003ee9e) list_double_pane_vc_g

0x409a,	// (0x00033780) list_double_pane_vc_t1_ParamLimits

0x409a,	// (0x00033780) list_double_pane_vc_t1

0x40ae,	// (0x00033794) list_double_pane_vc_t2_ParamLimits

0x40ae,	// (0x00033794) list_double_pane_vc_t2

0x0001,

0xfa2e,	// (0x0003f114) list_double_pane_vc_t_ParamLimits

0xfa2e,	// (0x0003f114) list_double_pane_vc_t

0x3c1d,	// (0x00033303) list_double_number_pane_vc_g1_ParamLimits

0x3c1d,	// (0x00033303) list_double_number_pane_vc_g1

0x3c29,	// (0x0003330f) list_double_number_pane_vc_g2_ParamLimits

0x3c29,	// (0x0003330f) list_double_number_pane_vc_g2

0x0001,

0xf7b8,	// (0x0003ee9e) list_double_number_pane_vc_g_ParamLimits

0xf7b8,	// (0x0003ee9e) list_double_number_pane_vc_g

0x40c4,	// (0x000337aa) list_double_number_pane_vc_t1_ParamLimits

0x40c4,	// (0x000337aa) list_double_number_pane_vc_t1

0x40d6,	// (0x000337bc) list_double_number_pane_vc_t2_ParamLimits

0x40d6,	// (0x000337bc) list_double_number_pane_vc_t2

0x40ea,	// (0x000337d0) list_double_number_pane_vc_t3_ParamLimits

0x40ea,	// (0x000337d0) list_double_number_pane_vc_t3

0x0002,

0xfa33,	// (0x0003f119) list_double_number_pane_vc_t_ParamLimits

0xfa33,	// (0x0003f119) list_double_number_pane_vc_t

0x4102,	// (0x000337e8) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4102,	// (0x000337e8) list_double_large_graphic_pane_vc_g1

0x4124,	// (0x0003380a) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4124,	// (0x0003380a) list_double_large_graphic_pane_vc_g2

0x4138,	// (0x0003381e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4138,	// (0x0003381e) list_double_large_graphic_pane_vc_g3

0x4147,	// (0x0003382d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4147,	// (0x0003382d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3a,	// (0x0003f120) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x0003f120) list_double_large_graphic_pane_vc_g

0x4153,	// (0x00033839) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4153,	// (0x00033839) list_double_large_graphic_pane_vc_t1

0x416f,	// (0x00033855) list_double_large_graphic_pane_vc_t2_ParamLimits

0x416f,	// (0x00033855) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa43,	// (0x0003f129) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa43,	// (0x0003f129) list_double_large_graphic_pane_vc_t

0x3e0d,	// (0x000334f3) list_double_heading_pane_vc_g1_ParamLimits

0x3e0d,	// (0x000334f3) list_double_heading_pane_vc_g1

0x3e19,	// (0x000334ff) list_double_heading_pane_vc_g2_ParamLimits

0x3e19,	// (0x000334ff) list_double_heading_pane_vc_g2

0x0001,

0xfa48,	// (0x0003f12e) list_double_heading_pane_vc_g_ParamLimits

0xfa48,	// (0x0003f12e) list_double_heading_pane_vc_g

0x418f,	// (0x00033875) list_double_heading_pane_vc_t1_ParamLimits

0x418f,	// (0x00033875) list_double_heading_pane_vc_t1

0x41a1,	// (0x00033887) list_double_heading_pane_vc_t2_ParamLimits

0x41a1,	// (0x00033887) list_double_heading_pane_vc_t2

0x0001,

0xfa4d,	// (0x0003f133) list_double_heading_pane_vc_t_ParamLimits

0xfa4d,	// (0x0003f133) list_double_heading_pane_vc_t

0x41b9,	// (0x0003389f) list_double_graphic_pane_vc_g1_ParamLimits

0x41b9,	// (0x0003389f) list_double_graphic_pane_vc_g1

0x41cc,	// (0x000338b2) list_double_graphic_pane_vc_g2_ParamLimits

0x41cc,	// (0x000338b2) list_double_graphic_pane_vc_g2

0x3c1d,	// (0x00033303) list_double_graphic_pane_vc_g3_ParamLimits

0x3c1d,	// (0x00033303) list_double_graphic_pane_vc_g3

0x0003,

0xfa52,	// (0x0003f138) list_double_graphic_pane_vc_g_ParamLimits

0xfa52,	// (0x0003f138) list_double_graphic_pane_vc_g

0x41e9,	// (0x000338cf) list_double_graphic_pane_vc_t1_ParamLimits

0x41e9,	// (0x000338cf) list_double_graphic_pane_vc_t1

0x4213,	// (0x000338f9) list_double_graphic_pane_vc_t2_ParamLimits

0x4213,	// (0x000338f9) list_double_graphic_pane_vc_t2

0x0001,

0xfa5b,	// (0x0003f141) list_double_graphic_pane_vc_t_ParamLimits

0xfa5b,	// (0x0003f141) list_double_graphic_pane_vc_t

0x5131,	// (0x00034817) aid_size_cell_fastswap

0x5139,	// (0x0003481f) aid_size_cell_touch_ParamLimits

0x5139,	// (0x0003481f) aid_size_cell_touch

0x53aa,	// (0x00034a90) popup_fast_swap_wide_window_ParamLimits

0x53aa,	// (0x00034a90) popup_fast_swap_wide_window

0x54c8,	// (0x00034bae) touch_pane_ParamLimits

0x54c8,	// (0x00034bae) touch_pane

0x281a,	// (0x00031f00) button_value_adjust_pane_cp2

0x3cb4,	// (0x0003339a) button_value_adjust_pane_cp4

0x3cbc,	// (0x000333a2) form_field_data_pane_cp2

0x5d6c,	// (0x00035452) form_field_data_wide_pane_cp2

0x6457,	// (0x00035b3d) bg_scroll_pane_ParamLimits

0x6476,	// (0x00035b5c) scroll_handle_pane_ParamLimits

0x648a,	// (0x00035b70) scroll_sc2_down_pane_ParamLimits

0x648a,	// (0x00035b70) scroll_sc2_down_pane

0x64b1,	// (0x00035b97) scroll_sc2_up_pane_ParamLimits

0x64b1,	// (0x00035b97) scroll_sc2_up_pane

0xbafe,	// (0x0003b1e4) grid_wheel_folder_pane_g1_ParamLimits

0xbafe,	// (0x0003b1e4) grid_wheel_folder_pane_g1

0x6872,	// (0x00035f58) clock_nsta_pane_cp2_ParamLimits

0x6872,	// (0x00035f58) clock_nsta_pane_cp2

0x9068,	// (0x0003874e) listscroll_midp_pane_ParamLimits

0x9074,	// (0x0003875a) midp_canvas_pane

0x935f,	// (0x00038a45) nsta_clock_indic_pane

0x939b,	// (0x00038a81) listscroll_form_pane_vc

0x93a3,	// (0x00038a89) listscroll_set_pane_vc_ParamLimits

0x93a3,	// (0x00038a89) listscroll_set_pane_vc

0x9498,	// (0x00038b7e) clock_nsta_pane

0x9515,	// (0x00038bfb) indicator_nsta_pane

0x97fd,	// (0x00038ee3) bg_popup_sub_pane_cp2_ParamLimits

0x9811,	// (0x00038ef7) find_pane_cp2_ParamLimits

0x9811,	// (0x00038ef7) find_pane_cp2

0x9827,	// (0x00038f0d) grid_toobar_pane_ParamLimits

0x9907,	// (0x00038fed) list_form_gen_pane_vc_ParamLimits

0x9907,	// (0x00038fed) list_form_gen_pane_vc

0x991d,	// (0x00039003) scroll_pane_cp8_vc_ParamLimits

0x991d,	// (0x00039003) scroll_pane_cp8_vc

0x9999,	// (0x0003907f) data_form_wide_pane_vc_ParamLimits

0x9999,	// (0x0003907f) data_form_wide_pane_vc

0x99a5,	// (0x0003908b) form_field_data_wide_pane_vc_g1

0x99ad,	// (0x00039093) form_field_data_wide_pane_vc_t1_ParamLimits

0x99ad,	// (0x00039093) form_field_data_wide_pane_vc_t1

0x282e,	// (0x00031f14) input_focus_pane_cp6_vc_ParamLimits

0x282e,	// (0x00031f14) input_focus_pane_cp6_vc

0x9ca9,	// (0x0003938f) list_midp_pane_ParamLimits

0x9cb5,	// (0x0003939b) scroll_pane_cp16_ParamLimits

0x9cb5,	// (0x0003939b) scroll_pane_cp16

0x9d1f,	// (0x00039405) button_value_adjust_pane_ParamLimits

0x9d1f,	// (0x00039405) button_value_adjust_pane

0xac9e,	// (0x0003a384) button_value_adjust_pane_cp6_ParamLimits

0xac9e,	// (0x0003a384) button_value_adjust_pane_cp6

0xade6,	// (0x0003a4cc) settings_code_pane_cp_ParamLimits

0xade6,	// (0x0003a4cc) settings_code_pane_cp

0xf01d,	// (0x0003e703) cell_touch_pane_g1

0xf01d,	// (0x0003e703) cell_touch_pane_g2

0x0001,

0xf6dc,	// (0x0003edc2) cell_touch_pane_g

0xb3e8,	// (0x0003aace) cell_touch_pane_cp_ParamLimits

0xb3e8,	// (0x0003aace) cell_touch_pane_cp

0xb3f8,	// (0x0003aade) cell_touch_pane_ParamLimits

0xb3f8,	// (0x0003aade) cell_touch_pane

0xf01d,	// (0x0003e703) scroll_sc2_down_pane_g1

0xf01d,	// (0x0003e703) scroll_sc2_up_pane_g1

0xf027,	// (0x0003e70d) bg_set_opt_pane_cp4_vc

0xb409,	// (0x0003aaef) list_set_graphic_pane_vc_g1_ParamLimits

0xb409,	// (0x0003aaef) list_set_graphic_pane_vc_g1

0xb415,	// (0x0003aafb) list_set_graphic_pane_vc_g2_ParamLimits

0xb415,	// (0x0003aafb) list_set_graphic_pane_vc_g2

0x0001,

0xf9d8,	// (0x0003f0be) list_set_graphic_pane_vc_g_ParamLimits

0xf9d8,	// (0x0003f0be) list_set_graphic_pane_vc_g

0xb421,	// (0x0003ab07) text_primary_small_cp13_vc_ParamLimits

0xb421,	// (0x0003ab07) text_primary_small_cp13_vc

0xb439,	// (0x0003ab1f) list_set_graphic_pane_vc_ParamLimits

0xb439,	// (0x0003ab1f) list_set_graphic_pane_vc

0xf027,	// (0x0003e70d) input_focus_pane_cp2_vc

0xf01d,	// (0x0003e703) setting_code_pane_vc_g1

0xf4f4,	// (0x0003ebda) setting_code_pane_vc_t1

0xb44c,	// (0x0003ab32) set_text_pane_vc_t1_ParamLimits

0xb44c,	// (0x0003ab32) set_text_pane_vc_t1

0xf027,	// (0x0003e70d) input_focus_pane_cp1_vc

0xb46d,	// (0x0003ab53) list_set_text_pane_vc

0xf01d,	// (0x0003e703) setting_text_pane_vc_g1

0xf027,	// (0x0003e70d) bg_set_opt_pane_cp2_vc

0xf4eb,	// (0x0003ebd1) setting_slider_graphic_pane_vc_g1

0xb477,	// (0x0003ab5d) setting_slider_graphic_pane_vc_t1

0xb489,	// (0x0003ab6f) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9dd,	// (0x0003f0c3) setting_slider_graphic_pane_vc_t

0xb49b,	// (0x0003ab81) slider_set_pane_cp_vc

0xb4a5,	// (0x0003ab8b) slider_set_pane_vc_g1

0xb4ae,	// (0x0003ab94) slider_set_pane_vc_g2

0x0006,

0xf9e2,	// (0x0003f0c8) slider_set_pane_vc_g

0x2886,	// (0x00031f6c) set_opt_bg_pane_g1_copy1

0x288e,	// (0x00031f74) set_opt_bg_pane_g2_copy1

0xb4da,	// (0x0003abc0) set_opt_bg_pane_g3_copy1

0x289e,	// (0x00031f84) set_opt_bg_pane_g4_copy1

0x28a6,	// (0x00031f8c) set_opt_bg_pane_g5_copy1

0x28ae,	// (0x00031f94) set_opt_bg_pane_g6_copy1

0xb4e4,	// (0x0003abca) set_opt_bg_pane_g7_copy1

0xb4ee,	// (0x0003abd4) set_opt_bg_pane_g8_copy1

0xb4f8,	// (0x0003abde) set_opt_bg_pane_g9_copy1

0xf027,	// (0x0003e70d) bg_set_opt_pane_cp_vc

0xb502,	// (0x0003abe8) setting_slider_pane_vc_t1

0xb511,	// (0x0003abf7) setting_slider_pane_vc_t2

0xb523,	// (0x0003ac09) setting_slider_pane_vc_t3

0x0002,

0xf9f1,	// (0x0003f0d7) setting_slider_pane_vc_t

0xb535,	// (0x0003ac1b) slider_set_pane_vc

0x727e,	// (0x00036964) volume_set_pane_vc_g1

0x7287,	// (0x0003696d) volume_set_pane_vc_g2

0x7290,	// (0x00036976) volume_set_pane_vc_g3

0x7299,	// (0x0003697f) volume_set_pane_vc_g4

0x72a2,	// (0x00036988) volume_set_pane_vc_g5

0x72ab,	// (0x00036991) volume_set_pane_vc_g6

0x72b4,	// (0x0003699a) volume_set_pane_vc_g7

0x72bd,	// (0x000369a3) volume_set_pane_vc_g8

0x72c6,	// (0x000369ac) volume_set_pane_vc_g9

0x72cf,	// (0x000369b5) volume_set_pane_vc_g10

0x0009,

0xf88f,	// (0x0003ef75) volume_set_pane_vc_g

0xb53f,	// (0x0003ac25) volume_set_pane_vc

0xb549,	// (0x0003ac2f) button_value_adjust_pane_cp1_vc

0xb553,	// (0x0003ac39) list_highlight_pane_cp2_vc

0xb55c,	// (0x0003ac42) list_set_pane_vc_ParamLimits

0xb55c,	// (0x0003ac42) list_set_pane_vc

0xb5ca,	// (0x0003acb0) main_pane_set_vc_t1_ParamLimits

0xb5ca,	// (0x0003acb0) main_pane_set_vc_t1

0xb5df,	// (0x0003acc5) main_pane_set_vc_t2_ParamLimits

0xb5df,	// (0x0003acc5) main_pane_set_vc_t2

0xb5f1,	// (0x0003acd7) main_pane_set_vc_t3_ParamLimits

0xb5f1,	// (0x0003acd7) main_pane_set_vc_t3

0xb605,	// (0x0003aceb) main_pane_set_vc_t4_ParamLimits

0xb605,	// (0x0003aceb) main_pane_set_vc_t4

0x0003,

0xf9f8,	// (0x0003f0de) main_pane_set_vc_t_ParamLimits

0xf9f8,	// (0x0003f0de) main_pane_set_vc_t

0xb619,	// (0x0003acff) setting_code_pane_vc_ParamLimits

0xb619,	// (0x0003acff) setting_code_pane_vc

0xb62a,	// (0x0003ad10) setting_slider_graphic_pane_vc

0xb62a,	// (0x0003ad10) setting_slider_pane_vc

0xb62a,	// (0x0003ad10) setting_text_pane_vc

0xb62a,	// (0x0003ad10) setting_volume_pane_vc

0xb634,	// (0x0003ad1a) scroll_pane_cp121_vc

0x2808,	// (0x00031eee) set_content_pane_vc

0xb63c,	// (0x0003ad22) button_value_adjust_pane_g1

0xb645,	// (0x0003ad2b) button_value_adjust_pane_g2

0x0001,

0xfa60,	// (0x0003f146) button_value_adjust_pane_g

0xb64e,	// (0x0003ad34) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb64e,	// (0x0003ad34) form_field_slider_wide_pane_vc_t1

0xb660,	// (0x0003ad46) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb660,	// (0x0003ad46) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa65,	// (0x0003f14b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa65,	// (0x0003f14b) form_field_slider_wide_pane_vc_t

0xf519,	// (0x0003ebff) input_focus_pane_cp10_vc_ParamLimits

0xf519,	// (0x0003ebff) input_focus_pane_cp10_vc

0xb68c,	// (0x0003ad72) slider_cont_pane_cp1_vc_ParamLimits

0xb68c,	// (0x0003ad72) slider_cont_pane_cp1_vc

0xb69e,	// (0x0003ad84) slider_form_pane_g1_cp2

0xb4ae,	// (0x0003ab94) slider_form_pane_g2_cp2

0xb6cb,	// (0x0003adb1) form_field_slider_pane_vc_t3

0xb6d9,	// (0x0003adbf) form_field_slider_pane_vc_t4

0xb6e7,	// (0x0003adcd) slider_form_pane_vc_ParamLimits

0xb6e7,	// (0x0003adcd) slider_form_pane_vc

0xb6f4,	// (0x0003adda) form_field_slider_pane_vc_t1_ParamLimits

0xb6f4,	// (0x0003adda) form_field_slider_pane_vc_t1

0xb660,	// (0x0003ad46) form_field_slider_pane_vc_t2_ParamLimits

0xb660,	// (0x0003ad46) form_field_slider_pane_vc_t2

0x0001,

0xfa77,	// (0x0003f15d) form_field_slider_pane_vc_t_ParamLimits

0xfa77,	// (0x0003f15d) form_field_slider_pane_vc_t

0xf519,	// (0x0003ebff) input_focus_pane_cp9_vc_ParamLimits

0xf519,	// (0x0003ebff) input_focus_pane_cp9_vc

0xb70a,	// (0x0003adf0) slider_cont_pane_vc_ParamLimits

0xb70a,	// (0x0003adf0) slider_cont_pane_vc

0xb71e,	// (0x0003ae04) list_form_graphic_pane_cp_vc_ParamLimits

0xb71e,	// (0x0003ae04) list_form_graphic_pane_cp_vc

0x99a5,	// (0x0003908b) form_field_popup_wide_pane_vc_g1

0xb733,	// (0x0003ae19) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb733,	// (0x0003ae19) form_field_popup_wide_pane_vc_t1

0x282e,	// (0x00031f14) input_focus_pane_cp8_vc_ParamLimits

0x282e,	// (0x00031f14) input_focus_pane_cp8_vc

0xb778,	// (0x0003ae5e) list_form_wide_pane_vc_ParamLimits

0xb778,	// (0x0003ae5e) list_form_wide_pane_vc

0xb784,	// (0x0003ae6a) list_form_graphic_pane_vc_g1

0xb78c,	// (0x0003ae72) list_form_graphic_pane_vc_t1_ParamLimits

0xb78c,	// (0x0003ae72) list_form_graphic_pane_vc_t1

0xf4dd,	// (0x0003ebc3) list_highlight_pane_cp5_vc_ParamLimits

0xf4dd,	// (0x0003ebc3) list_highlight_pane_cp5_vc

0xb7a8,	// (0x0003ae8e) list_form_graphic_pane_vc_ParamLimits

0xb7a8,	// (0x0003ae8e) list_form_graphic_pane_vc

0x99a5,	// (0x0003908b) form_field_popup_pane_vc_g1

0xb7be,	// (0x0003aea4) form_field_popup_pane_vc_t1_ParamLimits

0xb7be,	// (0x0003aea4) form_field_popup_pane_vc_t1

0x282e,	// (0x00031f14) input_focus_pane_cp7_vc_ParamLimits

0x282e,	// (0x00031f14) input_focus_pane_cp7_vc

0xb7d5,	// (0x0003aebb) list_form_pane_vc_ParamLimits

0xb7d5,	// (0x0003aebb) list_form_pane_vc

0xb7e1,	// (0x0003aec7) data_form_pane_vc_t1_ParamLimits

0xb7e1,	// (0x0003aec7) data_form_pane_vc_t1

0x2886,	// (0x00031f6c) input_focus_pane_vc_g1

0x288e,	// (0x00031f74) input_focus_pane_vc_g2

0x2896,	// (0x00031f7c) input_focus_pane_vc_g3

0x289e,	// (0x00031f84) input_focus_pane_vc_g4

0x28a6,	// (0x00031f8c) input_focus_pane_vc_g5

0x28ae,	// (0x00031f94) input_focus_pane_vc_g6

0x28b6,	// (0x00031f9c) input_focus_pane_vc_g7

0x28be,	// (0x00031fa4) input_focus_pane_vc_g8

0x28c6,	// (0x00031fac) input_focus_pane_vc_g9

0xf01d,	// (0x0003e703) input_focus_pane_vc_g10

0x0009,

0xf665,	// (0x0003ed4b) input_focus_pane_vc_g

0x9999,	// (0x0003907f) data_form_pane_vc_ParamLimits

0x9999,	// (0x0003907f) data_form_pane_vc

0x99a5,	// (0x0003908b) form_field_data_pane_vc_g1

0xb7fe,	// (0x0003aee4) form_field_data_pane_vc_t1_ParamLimits

0xb7fe,	// (0x0003aee4) form_field_data_pane_vc_t1

0x282e,	// (0x00031f14) input_focus_pane_vc_ParamLimits

0x282e,	// (0x00031f14) input_focus_pane_vc

0xb818,	// (0x0003aefe) button_value_adjust_pane_cp3_vc

0xb820,	// (0x0003af06) button_value_adjust_pane_cp5_vc

0xb828,	// (0x0003af0e) form_field_data_pane_vc_ParamLimits

0xb828,	// (0x0003af0e) form_field_data_pane_vc

0xb843,	// (0x0003af29) form_field_data_pane_vc_cp2

0xb84b,	// (0x0003af31) form_field_data_wide_pane_vc_ParamLimits

0xb84b,	// (0x0003af31) form_field_data_wide_pane_vc

0xb865,	// (0x0003af4b) form_field_data_wide_pane_vc_cp2

0xb86d,	// (0x0003af53) form_field_popup_pane_vc_ParamLimits

0xb86d,	// (0x0003af53) form_field_popup_pane_vc

0xb888,	// (0x0003af6e) form_field_popup_wide_pane_vc_ParamLimits

0xb888,	// (0x0003af6e) form_field_popup_wide_pane_vc

0xb8a2,	// (0x0003af88) form_field_slider_pane_vc_ParamLimits

0xb8a2,	// (0x0003af88) form_field_slider_pane_vc

0xb8b5,	// (0x0003af9b) form_field_slider_wide_pane_vc_ParamLimits

0xb8b5,	// (0x0003af9b) form_field_slider_wide_pane_vc

0xb8c8,	// (0x0003afae) grid_touch_1_pane_ParamLimits

0xb8c8,	// (0x0003afae) grid_touch_1_pane

0xb8d4,	// (0x0003afba) grid_touch_2_pane_ParamLimits

0xb8d4,	// (0x0003afba) grid_touch_2_pane

0x932a,	// (0x00038a10) touch_pane_g1_ParamLimits

0x932a,	// (0x00038a10) touch_pane_g1

0xb8ee,	// (0x0003afd4) cell_app_pane_cp_wide_ParamLimits

0xb8ee,	// (0x0003afd4) cell_app_pane_cp_wide

0xb8ff,	// (0x0003afe5) grid_popup_fast_wide_pane_ParamLimits

0xb8ff,	// (0x0003afe5) grid_popup_fast_wide_pane

0xb913,	// (0x0003aff9) scroll_pane_cp19_ParamLimits

0xb913,	// (0x0003aff9) scroll_pane_cp19

0xf027,	// (0x0003e70d) bg_popup_window_pane_cp20

0xb927,	// (0x0003b00d) listscroll_popup_fast_wide_pane

0xb92f,	// (0x0003b015) grid_indicator_nsta_pane

0xb941,	// (0x0003b027) clock_nsta_pane_g1

0xb94a,	// (0x0003b030) clock_nsta_pane_t1

0xb966,	// (0x0003b04c) cell_indicator_nsta_pane_ParamLimits

0xb966,	// (0x0003b04c) cell_indicator_nsta_pane

0xb99b,	// (0x0003b081) cell_indicator_nsta_pane_g1

0xb9a9,	// (0x0003b08f) cell_indicator_nsta_pane_g2

0x0001,

0xfa88,	// (0x0003f16e) cell_indicator_nsta_pane_g

0xb9bc,	// (0x0003b0a2) clock_nsta_pane_cp

0xb9c5,	// (0x0003b0ab) indicator_nsta_pane_cp

0xb9cf,	// (0x0003b0b5) nsta_clock_indic_pane_g1

0x2228,	// (0x0003190e) grid_indicator_pane

0x65a3,	// (0x00035c89) scroll_pane_cp29

0x67c1,	// (0x00035ea7) indicator_nsta_pane_cp2_ParamLimits

0x67c1,	// (0x00035ea7) indicator_nsta_pane_cp2

0xf4dd,	// (0x0003ebc3) main_apps_wheel_pane

0x9b86,	// (0x0003926c) form_midp_field_text_pane_ParamLimits

0x9cd5,	// (0x000393bb) scroll_bar_cp050_ParamLimits

0xba28,	// (0x0003b10e) cell_indicator_pane_ParamLimits

0xba28,	// (0x0003b10e) cell_indicator_pane

0xba40,	// (0x0003b126) cell_indicator_pane_g1

0xba4a,	// (0x0003b130) grid_wheel_folder_pane_ParamLimits

0xba4a,	// (0x0003b130) grid_wheel_folder_pane

0xba5e,	// (0x0003b144) list_wheel_apps_pane_ParamLimits

0xba5e,	// (0x0003b144) list_wheel_apps_pane

0xba71,	// (0x0003b157) main_apps_wheel_pane_g1_ParamLimits

0xba71,	// (0x0003b157) main_apps_wheel_pane_g1

0xba8d,	// (0x0003b173) main_apps_wheel_pane_g2_ParamLimits

0xba8d,	// (0x0003b173) main_apps_wheel_pane_g2

0x0001,

0xfaa4,	// (0x0003f18a) main_apps_wheel_pane_g_ParamLimits

0xfaa4,	// (0x0003f18a) main_apps_wheel_pane_g

0xbaa9,	// (0x0003b18f) main_apps_wheel_pane_t1_ParamLimits

0xbaa9,	// (0x0003b18f) main_apps_wheel_pane_t1

0xbad2,	// (0x0003b1b8) list_wheel_apps_pane_g1

0xbada,	// (0x0003b1c0) list_wheel_apps_pane_g2

0xbae2,	// (0x0003b1c8) list_wheel_apps_pane_g3

0xbaea,	// (0x0003b1d0) list_wheel_apps_pane_g4

0xbaf4,	// (0x0003b1da) list_wheel_apps_pane_g5

0x0004,

0xfaa9,	// (0x0003f18f) list_wheel_apps_pane_g

0x8ecd,	// (0x000385b3) navi_icon_text_pane

0x93cb,	// (0x00038ab1) aid_fill_nsta

0xbb15,	// (0x0003b1fb) navi_icon_text_pane_g1

0xbb21,	// (0x0003b207) navi_icon_text_pane_t1

0x8d63,	// (0x00038449) list_set_graphic_pane_t1_ParamLimits

0x8d63,	// (0x00038449) list_set_graphic_pane_t1

0xa442,	// (0x00039b28) popup_midp_note_alarm_window_t6_ParamLimits

0xa442,	// (0x00039b28) popup_midp_note_alarm_window_t6

0xa454,	// (0x00039b3a) popup_midp_note_alarm_window_t7_ParamLimits

0xa454,	// (0x00039b3a) popup_midp_note_alarm_window_t7

0xa466,	// (0x00039b4c) popup_midp_note_alarm_window_t8_ParamLimits

0xa466,	// (0x00039b4c) popup_midp_note_alarm_window_t8

0xa478,	// (0x00039b5e) popup_midp_note_alarm_window_t9_ParamLimits

0xa478,	// (0x00039b5e) popup_midp_note_alarm_window_t9

0xa48a,	// (0x00039b70) popup_midp_note_alarm_window_t10_ParamLimits

0xa48a,	// (0x00039b70) popup_midp_note_alarm_window_t10

0xa49c,	// (0x00039b82) popup_midp_note_alarm_window_t11_ParamLimits

0xa49c,	// (0x00039b82) popup_midp_note_alarm_window_t11

0xa4ae,	// (0x00039b94) scroll_pane_cp17_ParamLimits

0xa4ae,	// (0x00039b94) scroll_pane_cp17

0x727e,	// (0x00036964) volume_small_pane_cp_g1

0x765a,	// (0x00036d40) volume_small_pane_cp_g2

0x7663,	// (0x00036d49) volume_small_pane_cp_g3

0x766c,	// (0x00036d52) volume_small_pane_cp_g4

0x7675,	// (0x00036d5b) volume_small_pane_cp_g5

0x767e,	// (0x00036d64) volume_small_pane_cp_g6

0x7687,	// (0x00036d6d) volume_small_pane_cp_g7

0x7690,	// (0x00036d76) volume_small_pane_cp_g8

0x7699,	// (0x00036d7f) volume_small_pane_cp_g9

0x76a2,	// (0x00036d88) volume_small_pane_cp_g10

0x913e,	// (0x00038824) midp_ticker_pane_g1_ParamLimits

0x914a,	// (0x00038830) midp_ticker_pane_g2_ParamLimits

0xf731,	// (0x0003ee17) midp_ticker_pane_g_ParamLimits

0x9156,	// (0x0003883c) midp_ticker_pane_t1_ParamLimits

0x93e1,	// (0x00038ac7) aid_fill_nsta_2

0x9cc1,	// (0x000393a7) list_form2_midp_pane

0xae2d,	// (0x0003a513) midp_editing_number_pane_ParamLimits

0xae3c,	// (0x0003a522) midp_ticker_pane_ParamLimits

0xbb33,	// (0x0003b219) form2_midp_field_pane

0xbb57,	// (0x0003b23d) scroll_pane_cp51

0xbb77,	// (0x0003b25d) form2_midp_button_pane_ParamLimits

0xbb77,	// (0x0003b25d) form2_midp_button_pane

0xbb89,	// (0x0003b26f) form2_midp_content_pane_ParamLimits

0xbb89,	// (0x0003b26f) form2_midp_content_pane

0xbba3,	// (0x0003b289) form2_midp_field_choice_group_pane

0xbbab,	// (0x0003b291) form2_midp_field_pane_g1

0xbbb3,	// (0x0003b299) form2_midp_field_pane_g2

0xbbbb,	// (0x0003b2a1) form2_midp_field_pane_g3

0xbbc3,	// (0x0003b2a9) form2_midp_field_pane_g4

0x0003,

0xface,	// (0x0003f1b4) form2_midp_field_pane_g

0xbbcb,	// (0x0003b2b1) form2_midp_gauge_slider_pane

0xbbd3,	// (0x0003b2b9) form2_midp_gauge_wait_pane

0xbbdb,	// (0x0003b2c1) form2_midp_image_pane_ParamLimits

0xbbdb,	// (0x0003b2c1) form2_midp_image_pane

0xbbf6,	// (0x0003b2dc) form2_midp_label_pane_ParamLimits

0xbbf6,	// (0x0003b2dc) form2_midp_label_pane

0xbc15,	// (0x0003b2fb) form2_midp_label_pane_cp_ParamLimits

0xbc15,	// (0x0003b2fb) form2_midp_label_pane_cp

0xbc36,	// (0x0003b31c) form2_midp_string_pane_ParamLimits

0xbc36,	// (0x0003b31c) form2_midp_string_pane

0x76ab,	// (0x00036d91) form2_midp_text_pane_ParamLimits

0x76ab,	// (0x00036d91) form2_midp_text_pane

0xbc48,	// (0x0003b32e) form2_midp_time_pane

0xbc58,	// (0x0003b33e) input_focus_pane_cp51_ParamLimits

0xbc58,	// (0x0003b33e) input_focus_pane_cp51

0xbc70,	// (0x0003b356) form2_midp_label_pane_t1_ParamLimits

0xbc70,	// (0x0003b356) form2_midp_label_pane_t1

0x76cc,	// (0x00036db2) form2_mdip_text_pane_t1_ParamLimits

0x76cc,	// (0x00036db2) form2_mdip_text_pane_t1

0x4236,	// (0x0003391c) form2_midp_time_pane_t1

0xbcbe,	// (0x0003b3a4) form2_midp_gauge_slider_pane_t1

0xbcd0,	// (0x0003b3b6) form2_midp_gauge_slider_pane_t2

0xbce2,	// (0x0003b3c8) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad7,	// (0x0003f1bd) form2_midp_gauge_slider_pane_t

0xbcf4,	// (0x0003b3da) form2_midp_slider_pane

0xbd00,	// (0x0003b3e6) form2_midp_gauge_wait_pane_t1

0xbd0e,	// (0x0003b3f4) form2_midp_wait_pane_ParamLimits

0xbd0e,	// (0x0003b3f4) form2_midp_wait_pane

0xbd39,	// (0x0003b41f) list_single_2graphic_pane_cp4_ParamLimits

0xbd39,	// (0x0003b41f) list_single_2graphic_pane_cp4

0x9a02,	// (0x000390e8) list_single_midp_graphic_pane_cp_ParamLimits

0x9a02,	// (0x000390e8) list_single_midp_graphic_pane_cp

0xf027,	// (0x0003e70d) list_highlight_pane_cp20

0xbd52,	// (0x0003b438) list_single_2graphic_pane_g1_cp4

0xb2eb,	// (0x0003a9d1) list_single_2graphic_pane_g2_cp4

0xbd5a,	// (0x0003b440) list_single_2graphic_pane_t1_cp4

0xf4dd,	// (0x0003ebc3) list_highlight_pane_cp21

0xbd69,	// (0x0003b44f) list_single_midp_graphic_pane_g4_cp

0xbd78,	// (0x0003b45e) list_single_midp_graphic_pane_t1_cp

0xbd8d,	// (0x0003b473) form2_mdip_string_pane_t1_ParamLimits

0xbd8d,	// (0x0003b473) form2_mdip_string_pane_t1

0xf027,	// (0x0003e70d) bg_wml_button_pane_cp2

0xf01d,	// (0x0003e703) form2_midp_image_pane_g1

0x3c91,	// (0x00033377) list_double_large_graphic_pane_g5_ParamLimits

0x3c91,	// (0x00033377) list_double_large_graphic_pane_g5

0x9068,	// (0x0003874e) midp_form_pane_ParamLimits

0xf4dd,	// (0x0003ebc3) main_apps_wheel_pane_ParamLimits

0x6ec7,	// (0x000365ad) popup_preview_window_ParamLimits

0x6ec7,	// (0x000365ad) popup_preview_window

0x70ae,	// (0x00036794) popup_touch_info_window_ParamLimits

0x70ae,	// (0x00036794) popup_touch_info_window

0x70d0,	// (0x000367b6) popup_touch_menu_window_ParamLimits

0x70d0,	// (0x000367b6) popup_touch_menu_window

0xf013,	// (0x0003e6f9) bg_popup_sub_pane_cp6

0xbe29,	// (0x0003b50f) list_touch_menu_pane

0xbe31,	// (0x0003b517) list_single_touch_menu_pane_ParamLimits

0xbe31,	// (0x0003b517) list_single_touch_menu_pane

0xbe49,	// (0x0003b52f) list_single_touch_menu_pane_t1

0xf4dd,	// (0x0003ebc3) bg_popup_sub_pane_cp7_ParamLimits

0xf4dd,	// (0x0003ebc3) bg_popup_sub_pane_cp7

0x9cf5,	// (0x000393db) heading_sub_pane

0xbe57,	// (0x0003b53d) list_touch_info_pane_ParamLimits

0xbe57,	// (0x0003b53d) list_touch_info_pane

0xbe67,	// (0x0003b54d) list_single_touch_info_pane_ParamLimits

0xbe67,	// (0x0003b54d) list_single_touch_info_pane

0xbe79,	// (0x0003b55f) list_single_touch_info_pane_t1

0xbe87,	// (0x0003b56d) list_single_touch_info_pane_t2

0x0001,

0xfae5,	// (0x0003f1cb) list_single_touch_info_pane_t

0x9060,	// (0x00038746) bg_popup_heading_pane_cp

0xbe95,	// (0x0003b57b) heading_sub_pane_t1

0x9933,	// (0x00039019) bg_popup_preview_window_pane_cp_ParamLimits

0x9933,	// (0x00039019) bg_popup_preview_window_pane_cp

0x9cf5,	// (0x000393db) heading_preview_pane

0xbe57,	// (0x0003b53d) list_preview_pane_ParamLimits

0xbe57,	// (0x0003b53d) list_preview_pane

0xbea3,	// (0x0003b589) popup_preview_window_g1

0xbe67,	// (0x0003b54d) list_single_preview_pane_ParamLimits

0xbe67,	// (0x0003b54d) list_single_preview_pane

0xbeab,	// (0x0003b591) list_single_preview_pane_g1

0xbeb3,	// (0x0003b599) list_single_preview_pane_t1

0xbe79,	// (0x0003b55f) list_single_preview_pane_t2

0x0001,

0xfaea,	// (0x0003f1d0) list_single_preview_pane_t

0xbec1,	// (0x0003b5a7) bg_popup_heading_pane_cp2_ParamLimits

0xbec1,	// (0x0003b5a7) bg_popup_heading_pane_cp2

0xbed7,	// (0x0003b5bd) heading_preview_pane_g1

0xbedf,	// (0x0003b5c5) heading_preview_pane_t1_ParamLimits

0xbedf,	// (0x0003b5c5) heading_preview_pane_t1

0x223f,	// (0x00031925) soft_indicator_pane_t1_ParamLimits

0x27a1,	// (0x00031e87) scroll_pane_ParamLimits

0x649f,	// (0x00035b85) scroll_sc2_left_pane

0x64a8,	// (0x00035b8e) scroll_sc2_right_pane

0x64c7,	// (0x00035bad) scroll_bg_pane_g1_ParamLimits

0x64dc,	// (0x00035bc2) scroll_bg_pane_g2_ParamLimits

0x64f4,	// (0x00035bda) scroll_bg_pane_g3_ParamLimits

0xf6bc,	// (0x0003eda2) scroll_bg_pane_g_ParamLimits

0x64c7,	// (0x00035bad) scroll_handle_pane_g1_ParamLimits

0x6516,	// (0x00035bfc) scroll_handle_pane_g2_ParamLimits

0x64f4,	// (0x00035bda) scroll_handle_pane_g3_ParamLimits

0xf6c3,	// (0x0003eda9) scroll_handle_pane_g_ParamLimits

0x6b0c,	// (0x000361f2) popup_choice_list_window_ParamLimits

0x6b0c,	// (0x000361f2) popup_choice_list_window

0x9809,	// (0x00038eef) choice_list_pane

0x988b,	// (0x00038f71) cell_toolbar_pane_t1

0x98b3,	// (0x00038f99) toolbar_button_pane_ParamLimits

0xa978,	// (0x0003a05e) ai_gene_pane_1_t2_ParamLimits

0xa978,	// (0x0003a05e) ai_gene_pane_1_t2

0x0001,

0xf8eb,	// (0x0003efd1) ai_gene_pane_1_t_ParamLimits

0xf8eb,	// (0x0003efd1) ai_gene_pane_1_t

0xbefc,	// (0x0003b5e2) scroll_sc2_left_pane_g1

0xbefc,	// (0x0003b5e2) scroll_sc2_right_pane_g1

0x938f,	// (0x00038a75) bg_popup_sub_pane_cp10

0xbf06,	// (0x0003b5ec) list_choice_list_pane

0xbf1f,	// (0x0003b605) list_single_choice_list_pane_ParamLimits

0xbf1f,	// (0x0003b605) list_single_choice_list_pane

0xbf37,	// (0x0003b61d) list_single_choice_list_pane_g1

0x5fb6,	// (0x0003569c) list_single_choice_list_pane_t1_ParamLimits

0x5fb6,	// (0x0003569c) list_single_choice_list_pane_t1

0xbf3f,	// (0x0003b625) choice_list_pane_g1

0xbf47,	// (0x0003b62d) choice_list_pane_t1

0xf013,	// (0x0003e6f9) input_focus_pane_cp11

0x61dd,	// (0x000358c3) title_pane_stacon_g2_ParamLimits

0x61dd,	// (0x000358c3) title_pane_stacon_g2

0x0002,

0xf6a2,	// (0x0003ed88) title_pane_stacon_g_ParamLimits

0xf6a2,	// (0x0003ed88) title_pane_stacon_g

0x9060,	// (0x00038746) cursor_press_pane

0x6bc6,	// (0x000362ac) popup_fep_hwr_window_ParamLimits

0x6bc6,	// (0x000362ac) popup_fep_hwr_window

0x6c50,	// (0x00036336) popup_fep_vkb_window_ParamLimits

0x6c50,	// (0x00036336) popup_fep_vkb_window

0xbf55,	// (0x0003b63b) cursor_press_pane_g1

0x0002,

0xfb13,	// (0x0003f1f9) fep_vkb_side_pane_g_ParamLimits

0x7729,	// (0x00036e0f) fep_hwr_candidate_pane_ParamLimits

0x7729,	// (0x00036e0f) fep_hwr_candidate_pane

0x7753,	// (0x00036e39) fep_hwr_side_pane_ParamLimits

0x7753,	// (0x00036e39) fep_hwr_side_pane

0x7775,	// (0x00036e5b) fep_hwr_top_pane_ParamLimits

0x7775,	// (0x00036e5b) fep_hwr_top_pane

0x778d,	// (0x00036e73) fep_hwr_write_pane_ParamLimits

0x778d,	// (0x00036e73) fep_hwr_write_pane

0xfb13,	// (0x0003f1f9) fep_vkb_side_pane_g

0xbf5d,	// (0x0003b643) fep_hwr_top_pane_g1

0xbf6f,	// (0x0003b655) fep_hwr_top_pane_g2

0x77c7,	// (0x00036ead) fep_hwr_top_pane_g3

0x0002,

0xfaef,	// (0x0003f1d5) fep_hwr_top_pane_g

0x77dc,	// (0x00036ec2) fep_hwr_top_text_pane

0x8a27,	// (0x0003810d) fep_hwr_top_text_pane_g1

0xbfa5,	// (0x0003b68b) fep_hwr_top_text_pane_t1

0x78e6,	// (0x00036fcc) fep_hwr_candidate_pane_g1

0xc1f0,	// (0x0003b8d6) fep_vkb_keypad_pane_g3_ParamLimits

0xc1f0,	// (0x0003b8d6) fep_vkb_keypad_pane_g3

0xc21c,	// (0x0003b902) fep_vkb_keypad_pane_g4_ParamLimits

0xc21c,	// (0x0003b902) fep_vkb_keypad_pane_g4

0xc293,	// (0x0003b979) fep_vkb_bottom_pane_g2_ParamLimits

0xc293,	// (0x0003b979) fep_vkb_bottom_pane_g2

0x0001,

0xfb1a,	// (0x0003f200) fep_vkb_bottom_pane_g_ParamLimits

0xfb1a,	// (0x0003f200) fep_vkb_bottom_pane_g

0xbefc,	// (0x0003b5e2) cell_vkb_side_pane_g2

0x0001,

0xfb24,	// (0x0003f20a) cell_vkb_side_pane_g

0xc31e,	// (0x0003ba04) cell_vkb_side_pane_t1

0xc32c,	// (0x0003ba12) cell_vkb_side_pane_t1_copy1

0xbefc,	// (0x0003b5e2) bg_fep_vkb_candidate_pane_g2

0xc470,	// (0x0003bb56) cell_vkb_candidate_pane_ParamLimits

0xbfb3,	// (0x0003b699) aid_size_cell_vkb_ParamLimits

0xbfb3,	// (0x0003b699) aid_size_cell_vkb

0xc470,	// (0x0003bb56) cell_vkb_candidate_pane

0x790d,	// (0x00036ff3) bg_popup_fep_shadow_pane_g1

0xc045,	// (0x0003b72b) fep_vkb_bottom_pane_ParamLimits

0xc045,	// (0x0003b72b) fep_vkb_bottom_pane

0xc082,	// (0x0003b768) fep_vkb_candidate_pane_ParamLimits

0xc082,	// (0x0003b768) fep_vkb_candidate_pane

0xc09e,	// (0x0003b784) fep_vkb_keypad_pane_ParamLimits

0xc09e,	// (0x0003b784) fep_vkb_keypad_pane

0xc0d1,	// (0x0003b7b7) fep_vkb_side_pane_ParamLimits

0xc0d1,	// (0x0003b7b7) fep_vkb_side_pane

0xc10d,	// (0x0003b7f3) fep_vkb_top_pane_ParamLimits

0xc10d,	// (0x0003b7f3) fep_vkb_top_pane

0xc149,	// (0x0003b82f) fep_vkb_top_pane_g1_ParamLimits

0xc149,	// (0x0003b82f) fep_vkb_top_pane_g1

0xc158,	// (0x0003b83e) fep_vkb_top_pane_g2_ParamLimits

0xc158,	// (0x0003b83e) fep_vkb_top_pane_g2

0xc167,	// (0x0003b84d) fep_vkb_top_pane_g3_ParamLimits

0xc167,	// (0x0003b84d) fep_vkb_top_pane_g3

0x0003,

0xfb0a,	// (0x0003f1f0) fep_vkb_top_pane_g_ParamLimits

0xfb0a,	// (0x0003f1f0) fep_vkb_top_pane_g

0xc185,	// (0x0003b86b) fep_vkb_top_text_pane_ParamLimits

0xc185,	// (0x0003b86b) fep_vkb_top_text_pane

0xc196,	// (0x0003b87c) fep_vkb_side_pane_g1_ParamLimits

0xc196,	// (0x0003b87c) fep_vkb_side_pane_g1

0xc1df,	// (0x0003b8c5) grid_vkb_side_pane_ParamLimits

0xc1df,	// (0x0003b8c5) grid_vkb_side_pane

0x7915,	// (0x00036ffb) bg_popup_fep_shadow_pane_g2

0x791e,	// (0x00037004) bg_popup_fep_shadow_pane_g3

0x7926,	// (0x0003700c) bg_popup_fep_shadow_pane_g4

0x792f,	// (0x00037015) bg_popup_fep_shadow_pane_g5

0x7939,	// (0x0003701f) bg_popup_fep_shadow_pane_g6

0x7941,	// (0x00037027) bg_popup_fep_shadow_pane_g7

0x289e,	// (0x00031f84) bg_popup_fep_shadow_pane_g8

0xc23e,	// (0x0003b924) grid_vkb_keypad_number_pane_ParamLimits

0xc23e,	// (0x0003b924) grid_vkb_keypad_number_pane

0xc252,	// (0x0003b938) grid_vkb_keypad_pane_ParamLimits

0xc252,	// (0x0003b938) grid_vkb_keypad_pane

0xc278,	// (0x0003b95e) fep_vkb_bottom_pane_g1_ParamLimits

0xc278,	// (0x0003b95e) fep_vkb_bottom_pane_g1

0xc2a1,	// (0x0003b987) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc2a1,	// (0x0003b987) grid_vkb_keypad_bottom_left_pane

0xc2b6,	// (0x0003b99c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc2b6,	// (0x0003b99c) grid_vkb_keypad_bottom_right_pane

0xc2cb,	// (0x0003b9b1) fep_vkb_top_text_pane_g1

0xc2e6,	// (0x0003b9cc) fep_vkb_top_text_pane_t1

0xc2fb,	// (0x0003b9e1) cell_vkb_side_pane_ParamLimits

0xc2fb,	// (0x0003b9e1) cell_vkb_side_pane

0xbefc,	// (0x0003b5e2) cell_vkb_side_pane_g1

0xc33a,	// (0x0003ba20) cell_vkb_keypad_pane_ParamLimits

0xc33a,	// (0x0003ba20) cell_vkb_keypad_pane

0xc3c7,	// (0x0003baad) cell_vkb_keypad_pane_g1

0x0008,

0xfb37,	// (0x0003f21d) bg_popup_fep_shadow_pane_g

0x7953,	// (0x00037039) cell_hwr_side_pane_g1

0x7953,	// (0x00037039) cell_hwr_side_pane_g2

0xc3d1,	// (0x0003bab7) cell_vkb_keypad_pane_t1

0xc3df,	// (0x0003bac5) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc3df,	// (0x0003bac5) cell_vkb_keypad_bottom_left_pane

0xc3fc,	// (0x0003bae2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc3fc,	// (0x0003bae2) cell_vkb_keypad_bottom_right_pane

0xbefc,	// (0x0003b5e2) cell_vkb_keypad_bottom_left_pane_g1

0xbefc,	// (0x0003b5e2) cell_vkb_keypad_bottom_right_pane_g1

0xc435,	// (0x0003bb1b) cell_vkb_keypad_number_pane_ParamLimits

0xc435,	// (0x0003bb1b) cell_vkb_keypad_number_pane

0xc454,	// (0x0003bb3a) cell_vkb_keypad_number_pane_g1

0xc45e,	// (0x0003bb44) cell_vkb_keypad_number_pane_g2

0xc467,	// (0x0003bb4d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb29,	// (0x0003f20f) cell_vkb_keypad_number_pane_g

0xc3d1,	// (0x0003bab7) cell_vkb_keypad_number_pane_t1

0xc491,	// (0x0003bb77) fep_vkb_candidate_pane_g1

0x0001,

0xfb4a,	// (0x0003f230) cell_hwr_side_pane_g

0xc4aa,	// (0x0003bb90) cell_hwr_side_pane_t1

0x795d,	// (0x00037043) cell_hwr_side_pane_t1_copy1

0x796b,	// (0x00037051) cell_hwr_candidate_pane_g1

0x799a,	// (0x00037080) cell_hwr_candidate_pane_t1

0xbefc,	// (0x0003b5e2) cell_vkb_candidate_pane_g2

0xc4ee,	// (0x0003bbd4) cell_vkb_candidate_pane_t1

0x76f0,	// (0x00036dd6) bg_popup_fep_shadow_pane_ParamLimits

0x76f0,	// (0x00036dd6) bg_popup_fep_shadow_pane

0x77a7,	// (0x00036e8d) bg_fep_hwr_top_pane_g4

0xbf81,	// (0x0003b667) bg_hwr_side_pane_g1_ParamLimits

0xbf81,	// (0x0003b667) bg_hwr_side_pane_g1

0x781a,	// (0x00036f00) cell_hwr_side_pane_ParamLimits

0x781a,	// (0x00036f00) cell_hwr_side_pane

0x7857,	// (0x00036f3d) fep_hwr_write_pane_g1_ParamLimits

0x7857,	// (0x00036f3d) fep_hwr_write_pane_g1

0x7864,	// (0x00036f4a) fep_hwr_write_pane_g2_ParamLimits

0x7864,	// (0x00036f4a) fep_hwr_write_pane_g2

0x7871,	// (0x00036f57) fep_hwr_write_pane_g3_ParamLimits

0x7871,	// (0x00036f57) fep_hwr_write_pane_g3

0x787f,	// (0x00036f65) fep_hwr_write_pane_g4_ParamLimits

0x787f,	// (0x00036f65) fep_hwr_write_pane_g4

0x0005,

0xfaf6,	// (0x0003f1dc) fep_hwr_write_pane_g_ParamLimits

0xfaf6,	// (0x0003f1dc) fep_hwr_write_pane_g

0x77a7,	// (0x00036e8d) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x77a7,	// (0x00036e8d) bg_fep_hwr_candidate_pane_g2

0x7894,	// (0x00036f7a) cell_hwr_candidate_pane_ParamLimits

0x7894,	// (0x00036f7a) cell_hwr_candidate_pane

0x78e6,	// (0x00036fcc) fep_hwr_candidate_pane_g1_ParamLimits

0xbfe1,	// (0x0003b6c7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbfe1,	// (0x0003b6c7) bg_popup_fep_shadow_pane_cp2

0xc177,	// (0x0003b85d) fep_vkb_top_pane_g4_ParamLimits

0xc177,	// (0x0003b85d) fep_vkb_top_pane_g4

0xc1bd,	// (0x0003b8a3) fep_vkb_side_pane_g2_ParamLimits

0xc1bd,	// (0x0003b8a3) fep_vkb_side_pane_g2

0x5c74,	// (0x0003535a) list_setting_pane_t4_ParamLimits

0x5c74,	// (0x0003535a) list_setting_pane_t4

0x5d08,	// (0x000353ee) list_setting_number_pane_t5_ParamLimits

0x5d08,	// (0x000353ee) list_setting_number_pane_t5

0x8a6e,	// (0x00038154) list_double_heading_pane_cp2_ParamLimits

0x8a6e,	// (0x00038154) list_double_heading_pane_cp2

0xc4fc,	// (0x0003bbe2) list_double_heading_pane_g1_cp2_ParamLimits

0xc4fc,	// (0x0003bbe2) list_double_heading_pane_g1_cp2

0xc508,	// (0x0003bbee) list_double_heading_pane_g2_cp2_ParamLimits

0xc508,	// (0x0003bbee) list_double_heading_pane_g2_cp2

0xc51c,	// (0x0003bc02) list_double_heading_pane_t1_cp2_ParamLimits

0xc51c,	// (0x0003bc02) list_double_heading_pane_t1_cp2

0xc532,	// (0x0003bc18) list_double_heading_pane_t2_cp2_ParamLimits

0xc532,	// (0x0003bc18) list_double_heading_pane_t2_cp2

0xf00b,	// (0x0003e6f1) aid_value_unit2

0x5408,	// (0x00034aee) popup_preview_fixed_window

0x231f,	// (0x00031a05) bg_popup_preview_window_pane_cp02

0xc544,	// (0x0003bc2a) list_preview_fixed_pane

0xc58a,	// (0x0003bc70) list_empty_pane_fp_ParamLimits

0xc58a,	// (0x0003bc70) list_empty_pane_fp

0xc58a,	// (0x0003bc70) list_single_cale_day_pane_fp_ParamLimits

0xc58a,	// (0x0003bc70) list_single_cale_day_pane_fp

0xc58a,	// (0x0003bc70) list_single_graphic_heading_pane_fp_ParamLimits

0xc58a,	// (0x0003bc70) list_single_graphic_heading_pane_fp

0xc58a,	// (0x0003bc70) list_single_graphic_pane_fp_ParamLimits

0xc58a,	// (0x0003bc70) list_single_graphic_pane_fp

0xc58a,	// (0x0003bc70) list_single_heading_pane_fp_ParamLimits

0xc58a,	// (0x0003bc70) list_single_heading_pane_fp

0xc58a,	// (0x0003bc70) list_single_pane_fp_ParamLimits

0xc58a,	// (0x0003bc70) list_single_pane_fp

0xc5a3,	// (0x0003bc89) list_single_pane_fp_g1_ParamLimits

0xc5a3,	// (0x0003bc89) list_single_pane_fp_g1

0x4068,	// (0x0003374e) list_single_pane_fp_g2_ParamLimits

0x4068,	// (0x0003374e) list_single_pane_fp_g2

0x4249,	// (0x0003392f) list_single_pane_fp_g3_ParamLimits

0x4249,	// (0x0003392f) list_single_pane_fp_g3

0xc5af,	// (0x0003bc95) list_single_pane_fp_g4_ParamLimits

0xc5af,	// (0x0003bc95) list_single_pane_fp_g4

0x0003,

0xfb5d,	// (0x0003f243) list_single_pane_fp_g_ParamLimits

0xfb5d,	// (0x0003f243) list_single_pane_fp_g

0x425d,	// (0x00033943) list_single_pane_fp_t1_ParamLimits

0x425d,	// (0x00033943) list_single_pane_fp_t1

0x4274,	// (0x0003395a) list_single_graphic_pane_fp_g1_ParamLimits

0x4274,	// (0x0003395a) list_single_graphic_pane_fp_g1

0xc5a3,	// (0x0003bc89) list_single_graphic_pane_fp_g2_ParamLimits

0xc5a3,	// (0x0003bc89) list_single_graphic_pane_fp_g2

0x4068,	// (0x0003374e) list_single_graphic_pane_fp_g3_ParamLimits

0x4068,	// (0x0003374e) list_single_graphic_pane_fp_g3

0x4249,	// (0x0003392f) list_single_graphic_pane_fp_g4_ParamLimits

0x4249,	// (0x0003392f) list_single_graphic_pane_fp_g4

0xc5af,	// (0x0003bc95) list_single_graphic_pane_fp_g5_ParamLimits

0xc5af,	// (0x0003bc95) list_single_graphic_pane_fp_g5

0x0004,

0xfb66,	// (0x0003f24c) list_single_graphic_pane_fp_g_ParamLimits

0xfb66,	// (0x0003f24c) list_single_graphic_pane_fp_g

0x4280,	// (0x00033966) list_single_graphic_pane_fp_t1_ParamLimits

0x4280,	// (0x00033966) list_single_graphic_pane_fp_t1

0x4274,	// (0x0003395a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4274,	// (0x0003395a) list_single_graphic_heading_pane_fp_g1

0xc5a3,	// (0x0003bc89) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc5a3,	// (0x0003bc89) list_single_graphic_heading_pane_fp_g2

0x4068,	// (0x0003374e) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4068,	// (0x0003374e) list_single_graphic_heading_pane_fp_g3

0x4249,	// (0x0003392f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4249,	// (0x0003392f) list_single_graphic_heading_pane_fp_g4

0xc5af,	// (0x0003bc95) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc5af,	// (0x0003bc95) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb66,	// (0x0003f24c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb66,	// (0x0003f24c) list_single_graphic_heading_pane_fp_g

0x4296,	// (0x0003397c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4296,	// (0x0003397c) list_single_graphic_heading_pane_fp_t1

0x42ac,	// (0x00033992) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x42ac,	// (0x00033992) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb71,	// (0x0003f257) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb71,	// (0x0003f257) list_single_graphic_heading_pane_fp_t

0x42be,	// (0x000339a4) list_single_cale_day_pane_fp_g1_ParamLimits

0x42be,	// (0x000339a4) list_single_cale_day_pane_fp_g1

0xc5bb,	// (0x0003bca1) list_single_cale_day_pane_fp_g2_ParamLimits

0xc5bb,	// (0x0003bca1) list_single_cale_day_pane_fp_g2

0x42f6,	// (0x000339dc) list_single_cale_day_pane_fp_g3_ParamLimits

0x42f6,	// (0x000339dc) list_single_cale_day_pane_fp_g3

0x431e,	// (0x00033a04) list_single_cale_day_pane_fp_g4_ParamLimits

0x431e,	// (0x00033a04) list_single_cale_day_pane_fp_g4

0x4342,	// (0x00033a28) list_single_cale_day_pane_fp_g5_ParamLimits

0x4342,	// (0x00033a28) list_single_cale_day_pane_fp_g5

0x0004,

0xfb76,	// (0x0003f25c) list_single_cale_day_pane_fp_g_ParamLimits

0xfb76,	// (0x0003f25c) list_single_cale_day_pane_fp_g

0x4366,	// (0x00033a4c) list_single_cale_day_pane_fp_t1_ParamLimits

0x4366,	// (0x00033a4c) list_single_cale_day_pane_fp_t1

0x438c,	// (0x00033a72) list_single_cale_day_pane_fp_t2_ParamLimits

0x438c,	// (0x00033a72) list_single_cale_day_pane_fp_t2

0x43a5,	// (0x00033a8b) list_single_cale_day_pane_fp_t3_ParamLimits

0x43a5,	// (0x00033a8b) list_single_cale_day_pane_fp_t3

0x0002,

0xfb81,	// (0x0003f267) list_single_cale_day_pane_fp_t_ParamLimits

0xfb81,	// (0x0003f267) list_single_cale_day_pane_fp_t

0xc5a3,	// (0x0003bc89) list_empty_pane_fp_g1_ParamLimits

0xc5a3,	// (0x0003bc89) list_empty_pane_fp_g1

0x43be,	// (0x00033aa4) list_empty_pane_fp_t1

0x43cc,	// (0x00033ab2) list_empty_pane_fp_t2

0x0001,

0xfb88,	// (0x0003f26e) list_empty_pane_fp_t

0xc5a3,	// (0x0003bc89) list_single_heading_pane_fp_g1_ParamLimits

0xc5a3,	// (0x0003bc89) list_single_heading_pane_fp_g1

0x4068,	// (0x0003374e) list_single_heading_pane_fp_g2_ParamLimits

0x4068,	// (0x0003374e) list_single_heading_pane_fp_g2

0x4249,	// (0x0003392f) list_single_heading_pane_fp_g3_ParamLimits

0x4249,	// (0x0003392f) list_single_heading_pane_fp_g3

0x0002,

0xfb8d,	// (0x0003f273) list_single_heading_pane_fp_g_ParamLimits

0xfb8d,	// (0x0003f273) list_single_heading_pane_fp_g

0x43da,	// (0x00033ac0) list_single_heading_pane_fp_t1_ParamLimits

0x43da,	// (0x00033ac0) list_single_heading_pane_fp_t1

0x43ec,	// (0x00033ad2) list_single_heading_pane_fp_t2_ParamLimits

0x43ec,	// (0x00033ad2) list_single_heading_pane_fp_t2

0x0001,

0xfb94,	// (0x0003f27a) list_single_heading_pane_fp_t_ParamLimits

0xfb94,	// (0x0003f27a) list_single_heading_pane_fp_t

0x6024,	// (0x0003570a) aid_size_cell_fast

0x2302,	// (0x000319e8) soft_indicator_pane_cp1_t1

0x6061,	// (0x00035747) cell_app_pane_cp2_ParamLimits

0x6061,	// (0x00035747) cell_app_pane_cp2

0x7712,	// (0x00036df8) fep_hwr_candidate_drop_down_list_pane

0x7900,	// (0x00036fe6) fep_hwr_candidate_pane_g3_ParamLimits

0x7900,	// (0x00036fe6) fep_hwr_candidate_pane_g3

0x3459,	// (0x00032b3f) fep_hwr_candidate_pane_g4_ParamLimits

0x3459,	// (0x00032b3f) fep_hwr_candidate_pane_g4

0x0002,

0xfb03,	// (0x0003f1e9) fep_hwr_candidate_pane_g_ParamLimits

0xfb03,	// (0x0003f1e9) fep_hwr_candidate_pane_g

0xc071,	// (0x0003b757) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc071,	// (0x0003b757) fep_vkb_candidate_drop_down_list_pane

0xc499,	// (0x0003bb7f) fep_vkb_candidate_pane_g3

0xc4a1,	// (0x0003bb87) fep_vkb_candidate_pane_g4

0x0002,

0xfb30,	// (0x0003f216) fep_vkb_candidate_pane_g

0x796b,	// (0x00037051) cell_hwr_candidate_pane_g1_ParamLimits

0x7979,	// (0x0003705f) cell_hwr_candidate_pane_g3_ParamLimits

0x7979,	// (0x0003705f) cell_hwr_candidate_pane_g3

0xd6a0,	// (0x0003cd86) cell_hwr_candidate_pane_g4_ParamLimits

0xd6a0,	// (0x0003cd86) cell_hwr_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0003f235) cell_hwr_candidate_pane_g_ParamLimits

0xfb4f,	// (0x0003f235) cell_hwr_candidate_pane_g

0xc4b8,	// (0x0003bb9e) cell_vkb_candidate_pane_g3_ParamLimits

0xc4b8,	// (0x0003bb9e) cell_vkb_candidate_pane_g3

0xc4d3,	// (0x0003bbb9) cell_vkb_candidate_pane_g4_ParamLimits

0xc4d3,	// (0x0003bbb9) cell_vkb_candidate_pane_g4

0xc5c7,	// (0x0003bcad) cell_app_pane_cp2_g1_ParamLimits

0xc5c7,	// (0x0003bcad) cell_app_pane_cp2_g1

0xc5e5,	// (0x0003bccb) cell_app_pane_cp2_g2_ParamLimits

0xc5e5,	// (0x0003bccb) cell_app_pane_cp2_g2

0x0001,

0xfb99,	// (0x0003f27f) cell_app_pane_cp2_g_ParamLimits

0xfb99,	// (0x0003f27f) cell_app_pane_cp2_g

0xc5f1,	// (0x0003bcd7) cell_app_pane_cp2_t1_ParamLimits

0xc5f1,	// (0x0003bcd7) cell_app_pane_cp2_t1

0x282e,	// (0x00031f14) grid_highlight_pane_cp1_ParamLimits

0x282e,	// (0x00031f14) grid_highlight_pane_cp1

0x79b8,	// (0x0003709e) cell_hwr_candidate_pane_cp1_ParamLimits

0x79b8,	// (0x0003709e) cell_hwr_candidate_pane_cp1

0x796b,	// (0x00037051) fep_hwr_candidate_drop_down_list_pane_g1

0x79dc,	// (0x000370c2) fep_hwr_candidate_drop_down_list_pane_g2

0x79e9,	// (0x000370cf) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9e,	// (0x0003f284) fep_hwr_candidate_drop_down_list_pane_g

0x79f6,	// (0x000370dc) fep_hwr_candidate_drop_down_list_scroll_pane

0x79ff,	// (0x000370e5) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x79ff,	// (0x000370e5) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7a0c,	// (0x000370f2) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7a0c,	// (0x000370f2) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7a19,	// (0x000370ff) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7a19,	// (0x000370ff) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7a26,	// (0x0003710c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7a26,	// (0x0003710c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7a41,	// (0x00037127) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7a41,	// (0x00037127) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7a5c,	// (0x00037142) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7a5c,	// (0x00037142) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7a77,	// (0x0003715d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7a77,	// (0x0003715d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7a92,	// (0x00037178) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7a92,	// (0x00037178) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba5,	// (0x0003f28b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba5,	// (0x0003f28b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc603,	// (0x0003bce9) cell_vkb_candidate_pane_cp1_ParamLimits

0xc603,	// (0x0003bce9) cell_vkb_candidate_pane_cp1

0xc177,	// (0x0003b85d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc177,	// (0x0003b85d) fep_vkb_candidate_drop_down_list_pane_g1

0xc629,	// (0x0003bd0f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc629,	// (0x0003bd0f) fep_vkb_candidate_drop_down_list_pane_g2

0xc636,	// (0x0003bd1c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc636,	// (0x0003bd1c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x0003f29c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb6,	// (0x0003f29c) fep_vkb_candidate_drop_down_list_pane_g

0xc643,	// (0x0003bd29) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc643,	// (0x0003bd29) fep_vkb_candidate_drop_down_list_scroll_pane

0xc650,	// (0x0003bd36) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc650,	// (0x0003bd36) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc65d,	// (0x0003bd43) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc65d,	// (0x0003bd43) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc669,	// (0x0003bd4f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc669,	// (0x0003bd4f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc675,	// (0x0003bd5b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc675,	// (0x0003bd5b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc696,	// (0x0003bd7c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc696,	// (0x0003bd7c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc6b7,	// (0x0003bd9d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc6b7,	// (0x0003bd9d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc6d8,	// (0x0003bdbe) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc6d8,	// (0x0003bdbe) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc6f9,	// (0x0003bddf) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc6f9,	// (0x0003bddf) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x0003f2a3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x0003f2a3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x5528,	// (0x00034c0e) title_pane_g1_ParamLimits

0x5535,	// (0x00034c1b) title_pane_g2_ParamLimits

0xf527,	// (0x0003ec0d) title_pane_g_ParamLimits

0x8a17,	// (0x000380fd) aid_call2_pane

0x8a1f,	// (0x00038105) aid_call_pane

0x8a27,	// (0x0003810d) popup_clock_analogue_window_g1

0x8a27,	// (0x0003810d) popup_clock_analogue_window_g2

0x6634,	// (0x00035d1a) popup_clock_analogue_window_g3

0x663d,	// (0x00035d23) popup_clock_analogue_window_g4

0xf01d,	// (0x0003e703) popup_clock_analogue_window_g5

0x0004,

0xf6d1,	// (0x0003edb7) popup_clock_analogue_window_g

0x6645,	// (0x00035d2b) popup_clock_analogue_window_t1

0x6653,	// (0x00035d39) clock_digital_number_pane_ParamLimits

0x6653,	// (0x00035d39) clock_digital_number_pane

0x665f,	// (0x00035d45) clock_digital_number_pane_cp02_ParamLimits

0x665f,	// (0x00035d45) clock_digital_number_pane_cp02

0x666b,	// (0x00035d51) clock_digital_number_pane_cp03_ParamLimits

0x666b,	// (0x00035d51) clock_digital_number_pane_cp03

0x6677,	// (0x00035d5d) clock_digital_number_pane_cp04_ParamLimits

0x6677,	// (0x00035d5d) clock_digital_number_pane_cp04

0x6683,	// (0x00035d69) clock_digital_separator_pane_ParamLimits

0x6683,	// (0x00035d69) clock_digital_separator_pane

0x668f,	// (0x00035d75) popup_clock_digital_window_t1_ParamLimits

0x668f,	// (0x00035d75) popup_clock_digital_window_t1

0xf01d,	// (0x0003e703) clock_digital_number_pane_g1

0xf01d,	// (0x0003e703) clock_digital_number_pane_g2

0x0001,

0xf6dc,	// (0x0003edc2) clock_digital_number_pane_g

0xf01d,	// (0x0003e703) clock_digital_separator_pane_g1

0xf01d,	// (0x0003e703) clock_digital_separator_pane_g2

0x0001,

0xf6dc,	// (0x0003edc2) clock_digital_separator_pane_g

0x93cb,	// (0x00038ab1) aid_fill_nsta_ParamLimits

0x9515,	// (0x00038bfb) indicator_nsta_pane_ParamLimits

0x96a4,	// (0x00038d8a) popup_clock_analogue_window

0x96a4,	// (0x00038d8a) popup_clock_digital_window

0xb92f,	// (0x0003b015) grid_indicator_nsta_pane_ParamLimits

0xb958,	// (0x0003b03e) clock_nsta_pane_t2

0x0001,

0xfa83,	// (0x0003f169) clock_nsta_pane_t

0x6444,	// (0x00035b2a) aid_size_max_handle

0x644e,	// (0x00035b34) aid_size_min_handle

0x9060,	// (0x00038746) editor_scroll_pane

0xc714,	// (0x0003bdfa) ex_editor_pane

0x5f91,	// (0x00035677) scroll_pane_cp13

0x27cd,	// (0x00031eb3) scroll_pane_cp14

0x8a56,	// (0x0003813c) scroll_pane_cp36

0x8a84,	// (0x0003816a) list_single_graphic_hl_pane_cp2_ParamLimits

0x8a84,	// (0x0003816a) list_single_graphic_hl_pane_cp2

0xaeab,	// (0x0003a591) list_single_graphic_hl_pane_ParamLimits

0xaeab,	// (0x0003a591) list_single_graphic_hl_pane

0x4402,	// (0x00033ae8) aid_size_min_hl_cp1

0xc71c,	// (0x0003be02) list_highlight_pane_cp34_ParamLimits

0xc71c,	// (0x0003be02) list_highlight_pane_cp34

0xc72d,	// (0x0003be13) list_single_graphic_hl_pane_g1_ParamLimits

0xc72d,	// (0x0003be13) list_single_graphic_hl_pane_g1

0x7aad,	// (0x00037193) list_single_graphic_hl_pane_g2_ParamLimits

0x7aad,	// (0x00037193) list_single_graphic_hl_pane_g2

0x7aad,	// (0x00037193) list_single_graphic_hl_pane_g3_ParamLimits

0x7aad,	// (0x00037193) list_single_graphic_hl_pane_g3

0x3e0d,	// (0x000334f3) list_single_graphic_hl_pane_g4_ParamLimits

0x3e0d,	// (0x000334f3) list_single_graphic_hl_pane_g4

0x7ab9,	// (0x0003719f) list_single_graphic_hl_pane_g5_ParamLimits

0x7ab9,	// (0x0003719f) list_single_graphic_hl_pane_g5

0x0004,

0xfbce,	// (0x0003f2b4) list_single_graphic_hl_pane_g_ParamLimits

0xfbce,	// (0x0003f2b4) list_single_graphic_hl_pane_g

0x7acd,	// (0x000371b3) list_single_graphic_hl_pane_t1_ParamLimits

0x7acd,	// (0x000371b3) list_single_graphic_hl_pane_t1

0xc73a,	// (0x0003be20) aid_size_min_hl_cp2

0xc743,	// (0x0003be29) list_highlight_pane_cp34_cp2_ParamLimits

0xc743,	// (0x0003be29) list_highlight_pane_cp34_cp2

0xc72d,	// (0x0003be13) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc72d,	// (0x0003be13) list_single_graphic_hl_pane_g1_cp2

0xc750,	// (0x0003be36) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc750,	// (0x0003be36) list_single_graphic_hl_pane_g2_cp2

0xc75c,	// (0x0003be42) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc75c,	// (0x0003be42) list_single_graphic_hl_pane_g3_cp2

0xc76a,	// (0x0003be50) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc76a,	// (0x0003be50) list_single_graphic_hl_pane_g4_cp2

0xc776,	// (0x0003be5c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc776,	// (0x0003be5c) list_single_graphic_hl_pane_g5_cp2

0x69c8,	// (0x000360ae) control_pane_g4_ParamLimits

0x69c8,	// (0x000360ae) control_pane_g4

0x938f,	// (0x00038a75) bg_popup_sub_pane_cp10_ParamLimits

0xbf06,	// (0x0003b5ec) list_choice_list_pane_ParamLimits

0xbf15,	// (0x0003b5fb) scroll_pane_cp23

0x231f,	// (0x00031a05) bg_popup_preview_window_pane_cp02_ParamLimits

0xc544,	// (0x0003bc2a) list_preview_fixed_pane_ParamLimits

0xc55a,	// (0x0003bc40) list_preview_fixed_pane_cp_ParamLimits

0xc55a,	// (0x0003bc40) list_preview_fixed_pane_cp

0xc566,	// (0x0003bc4c) popup_preview_fixed_window_g1_ParamLimits

0xc566,	// (0x0003bc4c) popup_preview_fixed_window_g1

0xc572,	// (0x0003bc58) popup_preview_fixed_window_g2_ParamLimits

0xc572,	// (0x0003bc58) popup_preview_fixed_window_g2

0x0002,

0xfb56,	// (0x0003f23c) popup_preview_fixed_window_g_ParamLimits

0xfb56,	// (0x0003f23c) popup_preview_fixed_window_g

0x62c1,	// (0x000359a7) aid_navi_side_left_pane_ParamLimits

0x62d6,	// (0x000359bc) aid_navi_side_right_pane_ParamLimits

0x62ee,	// (0x000359d4) navi_icon_pane_stacon_ParamLimits

0x6302,	// (0x000359e8) navi_navi_pane_stacon_ParamLimits

0x62ee,	// (0x000359d4) navi_text_pane_stacon_ParamLimits

0x52bf,	// (0x000349a5) main_text_info_pane

0xc7a0,	// (0x0003be86) listscroll_text_info_pane

0xc7a8,	// (0x0003be8e) list_text_info_pane_ParamLimits

0xc7a8,	// (0x0003be8e) list_text_info_pane

0xc7b7,	// (0x0003be9d) scroll_pane_cp24_ParamLimits

0xc7b7,	// (0x0003be9d) scroll_pane_cp24

0xc7d5,	// (0x0003bebb) list_text_info_pane_t1_ParamLimits

0xc7d5,	// (0x0003bebb) list_text_info_pane_t1

0x6b2e,	// (0x00036214) popup_fast_swap2_window_ParamLimits

0x6b2e,	// (0x00036214) popup_fast_swap2_window

0xc7fa,	// (0x0003bee0) aid_size_cell_fast2

0xf013,	// (0x0003e6f9) bg_popup_window_pane_cp17

0x9cf5,	// (0x000393db) heading_pane_cp2

0xc804,	// (0x0003beea) listscroll_fast2_pane

0xc80c,	// (0x0003bef2) grid_fast2_pane

0xc816,	// (0x0003befc) listscroll_fast2_pane_g1

0xc820,	// (0x0003bf06) listscroll_fast2_pane_g2

0x0001,

0xfbd9,	// (0x0003f2bf) listscroll_fast2_pane_g

0x5f91,	// (0x00035677) scroll_pane_cp26

0xc82a,	// (0x0003bf10) cell_fast2_pane_ParamLimits

0xc82a,	// (0x0003bf10) cell_fast2_pane

0xc841,	// (0x0003bf27) cell_fast2_pane_g1

0xc84a,	// (0x0003bf30) cell_fast2_pane_g2

0xc853,	// (0x0003bf39) cell_fast2_pane_g3

0x0002,

0xfbde,	// (0x0003f2c4) cell_fast2_pane_g

0x2594,	// (0x00031c7a) grid_highlight_pane_cp9

0x6af0,	// (0x000361d6) main_eswt_pane_ParamLimits

0x6af0,	// (0x000361d6) main_eswt_pane

0xc7cc,	// (0x0003beb2) list_single_text_info_pane

0xc85b,	// (0x0003bf41) eswt_ctrl_button_pane

0xc85b,	// (0x0003bf41) eswt_ctrl_canvas_pane

0xc863,	// (0x0003bf49) eswt_ctrl_combo_pane

0xc85b,	// (0x0003bf41) eswt_ctrl_default_pane

0xc85b,	// (0x0003bf41) eswt_ctrl_label_pane

0xc86b,	// (0x0003bf51) eswt_ctrl_wait_pane

0xc873,	// (0x0003bf59) eswt_shell_pane

0xf013,	// (0x0003e6f9) listscroll_eswt_app_pane

0xc893,	// (0x0003bf79) popup_eswt_tasktip_window_ParamLimits

0xc893,	// (0x0003bf79) popup_eswt_tasktip_window

0x9933,	// (0x00039019) bg_popup_window_pane_cp18

0xc8a4,	// (0x0003bf8a) eswt_control_pane_g1_ParamLimits

0xc8a4,	// (0x0003bf8a) eswt_control_pane_g1

0xc8b1,	// (0x0003bf97) eswt_control_pane_g2_ParamLimits

0xc8b1,	// (0x0003bf97) eswt_control_pane_g2

0xc8be,	// (0x0003bfa4) eswt_control_pane_g3_ParamLimits

0xc8be,	// (0x0003bfa4) eswt_control_pane_g3

0xc8cb,	// (0x0003bfb1) eswt_control_pane_g4_ParamLimits

0xc8cb,	// (0x0003bfb1) eswt_control_pane_g4

0x0003,

0xfbe5,	// (0x0003f2cb) eswt_control_pane_g_ParamLimits

0xfbe5,	// (0x0003f2cb) eswt_control_pane_g

0x282e,	// (0x00031f14) bg_button_pane_ParamLimits

0x282e,	// (0x00031f14) bg_button_pane

0x25a9,	// (0x00031c8f) common_borders_pane_copy2_ParamLimits

0x25a9,	// (0x00031c8f) common_borders_pane_copy2

0xc8d8,	// (0x0003bfbe) control_button_pane_g1_ParamLimits

0xc8d8,	// (0x0003bfbe) control_button_pane_g1

0xc8e4,	// (0x0003bfca) control_button_pane_g2_ParamLimits

0xc8e4,	// (0x0003bfca) control_button_pane_g2

0xc8f0,	// (0x0003bfd6) control_button_pane_g3_ParamLimits

0xc8f0,	// (0x0003bfd6) control_button_pane_g3

0x0002,

0xfbee,	// (0x0003f2d4) control_button_pane_g_ParamLimits

0xfbee,	// (0x0003f2d4) control_button_pane_g

0xc904,	// (0x0003bfea) control_button_pane_t1

0xc912,	// (0x0003bff8) control_button_pane_t2

0x0001,

0xfbf5,	// (0x0003f2db) control_button_pane_t

0x98bf,	// (0x00038fa5) bg_button_pane_g1

0x98cf,	// (0x00038fb5) bg_button_pane_g2

0x98c7,	// (0x00038fad) bg_button_pane_g3

0x98df,	// (0x00038fc5) bg_button_pane_g4

0x98d7,	// (0x00038fbd) bg_button_pane_g5

0x98e7,	// (0x00038fcd) bg_button_pane_g6

0x98ef,	// (0x00038fd5) bg_button_pane_g7

0x98ff,	// (0x00038fe5) bg_button_pane_g8

0x98f7,	// (0x00038fdd) bg_button_pane_g9

0x0008,

0xf83f,	// (0x0003ef25) bg_button_pane_g

0xbec1,	// (0x0003b5a7) common_borders_pane_ParamLimits

0xbec1,	// (0x0003b5a7) common_borders_pane

0xc8a4,	// (0x0003bf8a) eswt_control_pane_g1_copy1_ParamLimits

0xc8a4,	// (0x0003bf8a) eswt_control_pane_g1_copy1

0xc8b1,	// (0x0003bf97) eswt_control_pane_g2_copy1_ParamLimits

0xc8b1,	// (0x0003bf97) eswt_control_pane_g2_copy1

0xc8be,	// (0x0003bfa4) eswt_control_pane_g3_copy1_ParamLimits

0xc8be,	// (0x0003bfa4) eswt_control_pane_g3_copy1

0xc8cb,	// (0x0003bfb1) eswt_control_pane_g4_copy1_ParamLimits

0xc8cb,	// (0x0003bfb1) eswt_control_pane_g4_copy1

0xbefc,	// (0x0003b5e2) bg_eswt_ctrl_canvas_pane_g1

0xbec1,	// (0x0003b5a7) common_borders_pane_cp2_ParamLimits

0xbec1,	// (0x0003b5a7) common_borders_pane_cp2

0xbec1,	// (0x0003b5a7) common_borders_pane_cp3_ParamLimits

0xbec1,	// (0x0003b5a7) common_borders_pane_cp3

0xc920,	// (0x0003c006) separator_horizontal_pane

0xc928,	// (0x0003c00e) separator_vertical_pane

0xc8a4,	// (0x0003bf8a) eswt_control_pane_g1_copy2_ParamLimits

0xc8a4,	// (0x0003bf8a) eswt_control_pane_g1_copy2

0xc8b1,	// (0x0003bf97) eswt_control_pane_g2_copy2_ParamLimits

0xc8b1,	// (0x0003bf97) eswt_control_pane_g2_copy2

0xc8be,	// (0x0003bfa4) eswt_control_pane_g3_copy2_ParamLimits

0xc8be,	// (0x0003bfa4) eswt_control_pane_g3_copy2

0xc8cb,	// (0x0003bfb1) eswt_control_pane_g4_copy2_ParamLimits

0xc8cb,	// (0x0003bfb1) eswt_control_pane_g4_copy2

0xf013,	// (0x0003e6f9) common_borders_pane_cp4

0xc931,	// (0x0003c017) separator_horizontal_pane_g1

0xc93a,	// (0x0003c020) separator_horizontal_pane_g2

0xc943,	// (0x0003c029) separator_horizontal_pane_g3

0x0002,

0xfbfa,	// (0x0003f2e0) separator_horizontal_pane_g

0xc8a4,	// (0x0003bf8a) eswt_control_pane_g1_copy3_ParamLimits

0xc8a4,	// (0x0003bf8a) eswt_control_pane_g1_copy3

0xc8b1,	// (0x0003bf97) eswt_control_pane_g2_copy3_ParamLimits

0xc8b1,	// (0x0003bf97) eswt_control_pane_g2_copy3

0xc8be,	// (0x0003bfa4) eswt_control_pane_g3_copy3_ParamLimits

0xc8be,	// (0x0003bfa4) eswt_control_pane_g3_copy3

0xc8cb,	// (0x0003bfb1) eswt_control_pane_g4_copy3_ParamLimits

0xc8cb,	// (0x0003bfb1) eswt_control_pane_g4_copy3

0xf013,	// (0x0003e6f9) common_borders_pane_cp5

0xc94c,	// (0x0003c032) separator_vertical_pane_g1

0xc955,	// (0x0003c03b) separator_vertical_pane_g2

0xc95e,	// (0x0003c044) separator_vertical_pane_g3

0x0002,

0xfc01,	// (0x0003f2e7) separator_vertical_pane_g

0xc8a4,	// (0x0003bf8a) eswt_control_pane_g1_copy4_ParamLimits

0xc8a4,	// (0x0003bf8a) eswt_control_pane_g1_copy4

0xc8b1,	// (0x0003bf97) eswt_control_pane_g2_copy4_ParamLimits

0xc8b1,	// (0x0003bf97) eswt_control_pane_g2_copy4

0xc8be,	// (0x0003bfa4) eswt_control_pane_g3_copy4_ParamLimits

0xc8be,	// (0x0003bfa4) eswt_control_pane_g3_copy4

0xc8cb,	// (0x0003bfb1) eswt_control_pane_g4_copy4_ParamLimits

0xc8cb,	// (0x0003bfb1) eswt_control_pane_g4_copy4

0xc967,	// (0x0003c04d) eswt_ctrl_combo_button_pane

0xc96f,	// (0x0003c055) eswt_ctrl_input_pane

0xc977,	// (0x0003c05d) popup_choice_list_window_cp70

0xc97f,	// (0x0003c065) eswt_ctrl_input_pane_t1

0xf013,	// (0x0003e6f9) input_focus_pane_cp70

0xbec1,	// (0x0003b5a7) bg_button_pane_cp70_ParamLimits

0xbec1,	// (0x0003b5a7) bg_button_pane_cp70

0xc98d,	// (0x0003c073) eswt_ctrl_combo_button_pane_g1

0xc995,	// (0x0003c07b) wait_bar_pane_cp70

0x9933,	// (0x00039019) bg_popup_window_pane_cp70_ParamLimits

0x9933,	// (0x00039019) bg_popup_window_pane_cp70

0xc99d,	// (0x0003c083) popup_eswt_tasktip_window_t1

0xc9b3,	// (0x0003c099) wait_bar_pane_cp71_ParamLimits

0xc9b3,	// (0x0003c099) wait_bar_pane_cp71

0xc9bf,	// (0x0003c0a5) grid_eswt_app_pane

0x649f,	// (0x00035b85) scroll_pane_cp70

0xc9c8,	// (0x0003c0ae) cell_eswt_app_pane_ParamLimits

0xc9c8,	// (0x0003c0ae) cell_eswt_app_pane

0xc9fa,	// (0x0003c0e0) cell_eswt_app_pane_g1_ParamLimits

0xc9fa,	// (0x0003c0e0) cell_eswt_app_pane_g1

0xca29,	// (0x0003c10f) cell_eswt_app_pane_g2_ParamLimits

0xca29,	// (0x0003c10f) cell_eswt_app_pane_g2

0x0001,

0xfc08,	// (0x0003f2ee) cell_eswt_app_pane_g_ParamLimits

0xfc08,	// (0x0003f2ee) cell_eswt_app_pane_g

0xca52,	// (0x0003c138) cell_eswt_app_pane_t1_ParamLimits

0xca52,	// (0x0003c138) cell_eswt_app_pane_t1

0xca84,	// (0x0003c16a) grid_highlight_pane_cp70_ParamLimits

0xca84,	// (0x0003c16a) grid_highlight_pane_cp70

0x8f22,	// (0x00038608) set_content_pane_g1

0x930e,	// (0x000389f4) status_small_volume_pane

0x7ae3,	// (0x000371c9) status_small_volume_pane_g1

0x7aeb,	// (0x000371d1) volume_small2_pane

0x7af4,	// (0x000371da) volume_small2_pane_g1

0x7afd,	// (0x000371e3) volume_small2_pane_g2

0x7b06,	// (0x000371ec) volume_small2_pane_g3

0x7b0f,	// (0x000371f5) volume_small2_pane_g4

0x7b18,	// (0x000371fe) volume_small2_pane_g5

0x7b21,	// (0x00037207) volume_small2_pane_g6

0x7b2a,	// (0x00037210) volume_small2_pane_g7

0x7b33,	// (0x00037219) volume_small2_pane_g8

0x7b3c,	// (0x00037222) volume_small2_pane_g9

0x7b45,	// (0x0003722b) volume_small2_pane_g10

0x0009,

0xfc0d,	// (0x0003f2f3) volume_small2_pane_g

0xc2cb,	// (0x0003b9b1) fep_vkb_top_text_pane_g1_ParamLimits

0xc2e6,	// (0x0003b9cc) fep_vkb_top_text_pane_t1_ParamLimits

0xc57e,	// (0x0003bc64) popup_preview_fixed_window_g3_ParamLimits

0xc57e,	// (0x0003bc64) popup_preview_fixed_window_g3

0x7041,	// (0x00036727) popup_toolbar_trans_pane

0xac7b,	// (0x0003a361) aid_height_set_list_ParamLimits

0xac8c,	// (0x0003a372) aid_size_parent_ParamLimits

0x938f,	// (0x00038a75) list_highlight_pane_cp2_ParamLimits

0x8f22,	// (0x00038608) set_content_pane_g1_ParamLimits

0x757c,	// (0x00036c62) list_single_image_pane_ParamLimits

0x757c,	// (0x00036c62) list_single_image_pane

0xca90,	// (0x0003c176) aid_size_cell_image_ParamLimits

0xca90,	// (0x0003c176) aid_size_cell_image

0xca9d,	// (0x0003c183) grid_single_image_pane_ParamLimits

0xca9d,	// (0x0003c183) grid_single_image_pane

0x283c,	// (0x00031f22) list_single_image_pane_g1_ParamLimits

0x283c,	// (0x00031f22) list_single_image_pane_g1

0x2848,	// (0x00031f2e) list_single_image_pane_g2_ParamLimits

0x2848,	// (0x00031f2e) list_single_image_pane_g2

0x0001,

0xfc22,	// (0x0003f308) list_single_image_pane_g_ParamLimits

0xfc22,	// (0x0003f308) list_single_image_pane_g

0xcaab,	// (0x0003c191) list_single_image_pane_t1_ParamLimits

0xcaab,	// (0x0003c191) list_single_image_pane_t1

0xcac1,	// (0x0003c1a7) cell_image_list_pane_ParamLimits

0xcac1,	// (0x0003c1a7) cell_image_list_pane

0xcad9,	// (0x0003c1bf) cell_image_list_pane_g1

0xcae2,	// (0x0003c1c8) cell_image_list_pane_g2

0x0001,

0xfc27,	// (0x0003f30d) cell_image_list_pane_g

0xcaeb,	// (0x0003c1d1) aid_size_cell_tb_trans_pane

0x282e,	// (0x00031f14) bg_tb_trans_pane

0xcafd,	// (0x0003c1e3) grid_tb_trans_pane

0x98bf,	// (0x00038fa5) bg_tb_trans_pane_g1

0x98cf,	// (0x00038fb5) bg_tb_trans_pane_g2

0x98c7,	// (0x00038fad) bg_tb_trans_pane_g3

0x98df,	// (0x00038fc5) bg_tb_trans_pane_g4

0x98d7,	// (0x00038fbd) bg_tb_trans_pane_g5

0x98ff,	// (0x00038fe5) bg_tb_trans_pane_g6

0x98f7,	// (0x00038fdd) bg_tb_trans_pane_g7

0x98e7,	// (0x00038fcd) bg_tb_trans_pane_g8

0x98ef,	// (0x00038fd5) bg_tb_trans_pane_g9

0x0008,

0xfc2c,	// (0x0003f312) bg_tb_trans_pane_g

0xcb11,	// (0x0003c1f7) cell_toolbar_trans_pane_ParamLimits

0xcb11,	// (0x0003c1f7) cell_toolbar_trans_pane

0xbefc,	// (0x0003b5e2) cell_toolbar_trans_pane_g1

0xbb3b,	// (0x0003b221) list_form2_midp_pane_t1

0xbb49,	// (0x0003b22f) list_form2_midp_pane_t2

0x0001,

0xfac9,	// (0x0003f1af) list_form2_midp_pane_t

0xbb57,	// (0x0003b23d) scroll_pane_cp51_ParamLimits

0xbd1e,	// (0x0003b404) form2_midp_wait_pane_g1

0xbd27,	// (0x0003b40d) form2_midp_wait_pane_g2

0xbd30,	// (0x0003b416) form2_midp_wait_pane_g3

0x0002,

0xfade,	// (0x0003f1c4) form2_midp_wait_pane_g

0xf4dd,	// (0x0003ebc3) list_highlight_pane_cp21_ParamLimits

0xbd69,	// (0x0003b44f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbd78,	// (0x0003b45e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x7532,	// (0x00036c18) list_single_2graphic_im_pane_ParamLimits

0x7532,	// (0x00036c18) list_single_2graphic_im_pane

0xcb37,	// (0x0003c21d) list_single_2graphic_im_pane_g1_ParamLimits

0xcb37,	// (0x0003c21d) list_single_2graphic_im_pane_g1

0xcb48,	// (0x0003c22e) list_single_2graphic_im_pane_g2_ParamLimits

0xcb48,	// (0x0003c22e) list_single_2graphic_im_pane_g2

0xcb54,	// (0x0003c23a) list_single_2graphic_im_pane_g3_ParamLimits

0xcb54,	// (0x0003c23a) list_single_2graphic_im_pane_g3

0x0003,

0xfc3f,	// (0x0003f325) list_single_2graphic_im_pane_g_ParamLimits

0xfc3f,	// (0x0003f325) list_single_2graphic_im_pane_g

0xcb74,	// (0x0003c25a) list_single_2graphic_im_pane_t1_ParamLimits

0xcb74,	// (0x0003c25a) list_single_2graphic_im_pane_t1

0xc58a,	// (0x0003bc70) list_single_graphic_2heading_pane_fp_ParamLimits

0xc58a,	// (0x0003bc70) list_single_graphic_2heading_pane_fp

0x4274,	// (0x0003395a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4274,	// (0x0003395a) list_single_graphic_2heading_pane_fp_g1

0xc5a3,	// (0x0003bc89) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc5a3,	// (0x0003bc89) list_single_graphic_2heading_pane_fp_g2

0x4068,	// (0x0003374e) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4068,	// (0x0003374e) list_single_graphic_2heading_pane_fp_g3

0x4249,	// (0x0003392f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4249,	// (0x0003392f) list_single_graphic_2heading_pane_fp_g4

0xc5af,	// (0x0003bc95) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc5af,	// (0x0003bc95) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb66,	// (0x0003f24c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb66,	// (0x0003f24c) list_single_graphic_2heading_pane_fp_g

0x440b,	// (0x00033af1) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x440b,	// (0x00033af1) list_single_graphic_2heading_pane_fp_t1

0x42ac,	// (0x00033992) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x42ac,	// (0x00033992) list_single_graphic_2heading_pane_fp_t2

0x4421,	// (0x00033b07) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4421,	// (0x00033b07) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc48,	// (0x0003f32e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc48,	// (0x0003f32e) list_single_graphic_2heading_pane_fp_t

0xbf8d,	// (0x0003b673) fep_hwr_write_pane_g5_ParamLimits

0xbf8d,	// (0x0003b673) fep_hwr_write_pane_g5

0xbf99,	// (0x0003b67f) fep_hwr_write_pane_g6_ParamLimits

0xbf99,	// (0x0003b67f) fep_hwr_write_pane_g6

0xc873,	// (0x0003bf59) eswt_shell_pane_ParamLimits

0x9933,	// (0x00039019) bg_popup_window_pane_cp18_ParamLimits

0x9cf5,	// (0x000393db) heading_pane_cp70

0xc99d,	// (0x0003c083) popup_eswt_tasktip_window_t1_ParamLimits

0x9420,	// (0x00038b06) aid_touch_tab_arrow_left

0x942c,	// (0x00038b12) aid_touch_tab_arrow_right

0x554e,	// (0x00034c34) title_pane_g3_ParamLimits

0x554e,	// (0x00034c34) title_pane_g3

0x27ed,	// (0x00031ed3) set_value_pane_g1

0x7041,	// (0x00036727) popup_toolbar_trans_pane_ParamLimits

0xcaeb,	// (0x0003c1d1) aid_size_cell_tb_trans_pane_ParamLimits

0x282e,	// (0x00031f14) bg_tb_trans_pane_ParamLimits

0xcafd,	// (0x0003c1e3) grid_tb_trans_pane_ParamLimits

0x231f,	// (0x00031a05) cont_note_pane_ParamLimits

0x231f,	// (0x00031a05) cont_note_pane

0x25a9,	// (0x00031c8f) cont_snote2_single_text_pane_ParamLimits

0x25a9,	// (0x00031c8f) cont_snote2_single_text_pane

0x25a9,	// (0x00031c8f) cont_snote2_single_graphic_pane_ParamLimits

0x25a9,	// (0x00031c8f) cont_snote2_single_graphic_pane

0x9f25,	// (0x0003960b) cont_note_wait_pane_ParamLimits

0x9f25,	// (0x0003960b) cont_note_wait_pane

0x9f25,	// (0x0003960b) cont_note_image_pane_ParamLimits

0x9f25,	// (0x0003960b) cont_note_image_pane

0xcba5,	// (0x0003c28b) popup_note2_window_g1_ParamLimits

0xcba5,	// (0x0003c28b) popup_note2_window_g1

0xcbd6,	// (0x0003c2bc) popup_note2_window_t1_ParamLimits

0xcbd6,	// (0x0003c2bc) popup_note2_window_t1

0xcc1b,	// (0x0003c301) popup_note2_window_t2_ParamLimits

0xcc1b,	// (0x0003c301) popup_note2_window_t2

0xcc60,	// (0x0003c346) popup_note2_window_t3_ParamLimits

0xcc60,	// (0x0003c346) popup_note2_window_t3

0xcca5,	// (0x0003c38b) popup_note2_window_t4_ParamLimits

0xcca5,	// (0x0003c38b) popup_note2_window_t4

0x23a3,	// (0x00031a89) popup_note2_window_t5_ParamLimits

0x23a3,	// (0x00031a89) popup_note2_window_t5

0x0004,

0xfc54,	// (0x0003f33a) popup_note2_window_t_ParamLimits

0xfc54,	// (0x0003f33a) popup_note2_window_t

0xccd4,	// (0x0003c3ba) popup_note2_image_window_g1_ParamLimits

0xccd4,	// (0x0003c3ba) popup_note2_image_window_g1

0xcce0,	// (0x0003c3c6) popup_note2_image_window_g2_ParamLimits

0xcce0,	// (0x0003c3c6) popup_note2_image_window_g2

0x0001,

0xfc5f,	// (0x0003f345) popup_note2_image_window_g_ParamLimits

0xfc5f,	// (0x0003f345) popup_note2_image_window_g

0xccf2,	// (0x0003c3d8) popup_note2_image_window_t1_ParamLimits

0xccf2,	// (0x0003c3d8) popup_note2_image_window_t1

0xcd0a,	// (0x0003c3f0) popup_note2_image_window_t2_ParamLimits

0xcd0a,	// (0x0003c3f0) popup_note2_image_window_t2

0xcd22,	// (0x0003c408) popup_note2_image_window_t3_ParamLimits

0xcd22,	// (0x0003c408) popup_note2_image_window_t3

0x0002,

0xfc64,	// (0x0003f34a) popup_note2_image_window_t_ParamLimits

0xfc64,	// (0x0003f34a) popup_note2_image_window_t

0x9f33,	// (0x00039619) popup_note2_wait_window_g1_ParamLimits

0x9f33,	// (0x00039619) popup_note2_wait_window_g1

0xcd3e,	// (0x0003c424) popup_note2_wait_window_g2_ParamLimits

0xcd3e,	// (0x0003c424) popup_note2_wait_window_g2

0x9f4b,	// (0x00039631) popup_note2_wait_window_g3_ParamLimits

0x9f4b,	// (0x00039631) popup_note2_wait_window_g3

0x0002,

0xfc6b,	// (0x0003f351) popup_note2_wait_window_g_ParamLimits

0xfc6b,	// (0x0003f351) popup_note2_wait_window_g

0xcd4a,	// (0x0003c430) popup_note2_wait_window_t1_ParamLimits

0xcd4a,	// (0x0003c430) popup_note2_wait_window_t1

0xcd68,	// (0x0003c44e) popup_note2_wait_window_t2_ParamLimits

0xcd68,	// (0x0003c44e) popup_note2_wait_window_t2

0xcd86,	// (0x0003c46c) popup_note2_wait_window_t3_ParamLimits

0xcd86,	// (0x0003c46c) popup_note2_wait_window_t3

0xcd98,	// (0x0003c47e) popup_note2_wait_window_t4_ParamLimits

0xcd98,	// (0x0003c47e) popup_note2_wait_window_t4

0x0003,

0xfc72,	// (0x0003f358) popup_note2_wait_window_t_ParamLimits

0xfc72,	// (0x0003f358) popup_note2_wait_window_t

0xcdaa,	// (0x0003c490) wait_bar2_pane_ParamLimits

0xcdaa,	// (0x0003c490) wait_bar2_pane

0xcdc2,	// (0x0003c4a8) popup_snote2_single_text_window_g1_ParamLimits

0xcdc2,	// (0x0003c4a8) popup_snote2_single_text_window_g1

0xcdea,	// (0x0003c4d0) popup_snote2_single_text_window_t1_ParamLimits

0xcdea,	// (0x0003c4d0) popup_snote2_single_text_window_t1

0xce36,	// (0x0003c51c) popup_snote2_single_text_window_t2_ParamLimits

0xce36,	// (0x0003c51c) popup_snote2_single_text_window_t2

0xce82,	// (0x0003c568) popup_snote2_single_text_window_t3_ParamLimits

0xce82,	// (0x0003c568) popup_snote2_single_text_window_t3

0xcec3,	// (0x0003c5a9) popup_snote2_single_text_window_t4_ParamLimits

0xcec3,	// (0x0003c5a9) popup_snote2_single_text_window_t4

0xcef9,	// (0x0003c5df) popup_snote2_single_text_window_t5_ParamLimits

0xcef9,	// (0x0003c5df) popup_snote2_single_text_window_t5

0x0004,

0xfc7b,	// (0x0003f361) popup_snote2_single_text_window_t_ParamLimits

0xfc7b,	// (0x0003f361) popup_snote2_single_text_window_t

0xcf24,	// (0x0003c60a) popup_snote2_single_graphic_window_g1_ParamLimits

0xcf24,	// (0x0003c60a) popup_snote2_single_graphic_window_g1

0xcf4c,	// (0x0003c632) popup_snote2_single_graphic_window_g2_ParamLimits

0xcf4c,	// (0x0003c632) popup_snote2_single_graphic_window_g2

0x0001,

0xfc86,	// (0x0003f36c) popup_snote2_single_graphic_window_g_ParamLimits

0xfc86,	// (0x0003f36c) popup_snote2_single_graphic_window_g

0xcf74,	// (0x0003c65a) popup_snote2_single_graphic_window_t1_ParamLimits

0xcf74,	// (0x0003c65a) popup_snote2_single_graphic_window_t1

0xcfc0,	// (0x0003c6a6) popup_snote2_single_graphic_window_t2_ParamLimits

0xcfc0,	// (0x0003c6a6) popup_snote2_single_graphic_window_t2

0xce82,	// (0x0003c568) popup_snote2_single_graphic_window_t3_ParamLimits

0xce82,	// (0x0003c568) popup_snote2_single_graphic_window_t3

0xcec3,	// (0x0003c5a9) popup_snote2_single_graphic_window_t4_ParamLimits

0xcec3,	// (0x0003c5a9) popup_snote2_single_graphic_window_t4

0xcef9,	// (0x0003c5df) popup_snote2_single_graphic_window_t5_ParamLimits

0xcef9,	// (0x0003c5df) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8b,	// (0x0003f371) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8b,	// (0x0003f371) popup_snote2_single_graphic_window_t

0xba07,	// (0x0003b0ed) clock_nsta_pane_cp2_t1

0xba07,	// (0x0003b0ed) clock_nsta_pane_cp2_t2

0x0001,

0xfa9f,	// (0x0003f185) clock_nsta_pane_cp2_t

0x3d1d,	// (0x00033403) form_field_data_wide_pane_g1_ParamLimits

0x283c,	// (0x00031f22) form_field_data_wide_pane_g2_ParamLimits

0x283c,	// (0x00031f22) form_field_data_wide_pane_g2

0x2848,	// (0x00031f2e) form_field_data_wide_pane_g3_ParamLimits

0x2848,	// (0x00031f2e) form_field_data_wide_pane_g3

0x0002,

0xf654,	// (0x0003ed3a) form_field_data_wide_pane_g_ParamLimits

0xf654,	// (0x0003ed3a) form_field_data_wide_pane_g

0xb8e2,	// (0x0003afc8) grid_touch_3_pane_ParamLimits

0xb8e2,	// (0x0003afc8) grid_touch_3_pane

0xd00c,	// (0x0003c6f2) cell_touch_3_pane_ParamLimits

0xd00c,	// (0x0003c6f2) cell_touch_3_pane

0xbefc,	// (0x0003b5e2) cell_touch_3_pane_g1

0xbefc,	// (0x0003b5e2) cell_touch_3_pane_g2

0x0001,

0xfb24,	// (0x0003f20a) cell_touch_3_pane_g

0x23fb,	// (0x00031ae1) cont_query_data_pane

0x2403,	// (0x00031ae9) cont_query_data_pane_cp1

0xd03f,	// (0x0003c725) button_value_adjust_pane_cp7

0xd047,	// (0x0003c72d) query_popup_pane_cp3

0x8b2c,	// (0x00038212) bg_popup_sub_pane_cp22_ParamLimits

0x66ae,	// (0x00035d94) navi_navi_volume_pane_cp2

0x66c9,	// (0x00035daf) popup_side_volume_key_window_g2

0x66d8,	// (0x00035dbe) popup_side_volume_key_window_g3

0x0002,

0xf6ea,	// (0x0003edd0) popup_side_volume_key_window_g

0x66f5,	// (0x00035ddb) popup_side_volume_key_window_t2

0x0001,

0xf6f1,	// (0x0003edd7) popup_side_volume_key_window_t

0x8de8,	// (0x000384ce) popup_side_volume_key_window_ParamLimits

0x5a86,	// (0x0003516c) list_double_graphic_pane_g4_ParamLimits

0x5a86,	// (0x0003516c) list_double_graphic_pane_g4

0x7563,	// (0x00036c49) list_single_2heading_msg_pane_ParamLimits

0x7563,	// (0x00036c49) list_single_2heading_msg_pane

0x7b4e,	// (0x00037234) list_single_2heading_msg_pane_g1_ParamLimits

0x7b4e,	// (0x00037234) list_single_2heading_msg_pane_g1

0x58c1,	// (0x00034fa7) list_single_2heading_msg_pane_g2_ParamLimits

0x58c1,	// (0x00034fa7) list_single_2heading_msg_pane_g2

0x7b5a,	// (0x00037240) list_single_2heading_msg_pane_g3_ParamLimits

0x7b5a,	// (0x00037240) list_single_2heading_msg_pane_g3

0x7b66,	// (0x0003724c) list_single_2heading_msg_pane_g4_ParamLimits

0x7b66,	// (0x0003724c) list_single_2heading_msg_pane_g4

0x0003,

0xfc96,	// (0x0003f37c) list_single_2heading_msg_pane_g_ParamLimits

0xfc96,	// (0x0003f37c) list_single_2heading_msg_pane_g

0x7b7e,	// (0x00037264) list_single_2heading_msg_pane_t1_ParamLimits

0x7b7e,	// (0x00037264) list_single_2heading_msg_pane_t1

0x7ba6,	// (0x0003728c) list_single_2heading_msg_pane_t2_ParamLimits

0x7ba6,	// (0x0003728c) list_single_2heading_msg_pane_t2

0x7bda,	// (0x000372c0) list_single_2heading_msg_pane_t3_ParamLimits

0x7bda,	// (0x000372c0) list_single_2heading_msg_pane_t3

0x45ff,	// (0x00033ce5) list_single_2heading_msg_pane_t4_ParamLimits

0x45ff,	// (0x00033ce5) list_single_2heading_msg_pane_t4

0x0003,

0xfc9f,	// (0x0003f385) list_single_2heading_msg_pane_t_ParamLimits

0xfc9f,	// (0x0003f385) list_single_2heading_msg_pane_t

0xf499,	// (0x0003eb7f) title_pane_g4_ParamLimits

0xf499,	// (0x0003eb7f) title_pane_g4

0x61ea,	// (0x000358d0) title_pane_stacon_g3_ParamLimits

0x61ea,	// (0x000358d0) title_pane_stacon_g3

0xcb68,	// (0x0003c24e) list_single_2graphic_im_pane_g4_ParamLimits

0xcb68,	// (0x0003c24e) list_single_2graphic_im_pane_g4

0xa995,	// (0x0003a07b) popup_side_volume_key_window_cp

0xb1f2,	// (0x0003a8d8) main_idle_act2_pane_t1

0x7145,	// (0x0003682b) toolbar_button_pane_g10

0x58ab,	// (0x00034f91) popup_toolbar_window_cp1

0xb9f8,	// (0x0003b0de) clock_nsta_pane_cp_t1

0xb9f8,	// (0x0003b0de) clock_nsta_pane_cp_t2

0x0001,

0xfa9a,	// (0x0003f180) clock_nsta_pane_cp_t

0x66ae,	// (0x00035d94) navi_navi_volume_pane_cp2_ParamLimits

0x66bd,	// (0x00035da3) popup_side_volume_key_window_g1_ParamLimits

0x66c9,	// (0x00035daf) popup_side_volume_key_window_g2_ParamLimits

0x66d8,	// (0x00035dbe) popup_side_volume_key_window_g3_ParamLimits

0xf6ea,	// (0x0003edd0) popup_side_volume_key_window_g_ParamLimits

0x76fe,	// (0x00036de4) fep_hwr_aid_pane

0x77a7,	// (0x00036e8d) bg_fep_hwr_top_pane_g4_ParamLimits

0xbf5d,	// (0x0003b643) fep_hwr_top_pane_g1_ParamLimits

0xbf6f,	// (0x0003b655) fep_hwr_top_pane_g2_ParamLimits

0x77c7,	// (0x00036ead) fep_hwr_top_pane_g3_ParamLimits

0xfaef,	// (0x0003f1d5) fep_hwr_top_pane_g_ParamLimits

0x77dc,	// (0x00036ec2) fep_hwr_top_text_pane_ParamLimits

0xa74a,	// (0x00039e30) aid_touch_tab_arrow_arrow_2

0xa753,	// (0x00039e39) aid_touch_tab_arrow_left_2

0x7712,	// (0x00036df8) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7749,	// (0x00036e2f) fep_hwr_prediction_pane

0xc0c5,	// (0x0003b7ab) fep_vkb_prediction_pane

0xc1cb,	// (0x0003b8b1) fep_vkb_side_pane_g3_ParamLimits

0xc1cb,	// (0x0003b8b1) fep_vkb_side_pane_g3

0x796b,	// (0x00037051) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x79dc,	// (0x000370c2) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x79e9,	// (0x000370cf) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9e,	// (0x0003f284) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7c13,	// (0x000372f9) fep_hwr_prediction_pane_g1

0x7c1d,	// (0x00037303) fep_hwr_prediction_pane_g2

0x7c25,	// (0x0003730b) fep_hwr_prediction_pane_g3

0x7c2d,	// (0x00037313) fep_hwr_prediction_pane_g4

0x0003,

0xfca8,	// (0x0003f38e) fep_hwr_prediction_pane_g

0xd06e,	// (0x0003c754) fep_vkb_prediction_pane_g1

0xd078,	// (0x0003c75e) fep_vkb_prediction_pane_g2

0xd080,	// (0x0003c766) fep_vkb_prediction_pane_g3

0xd088,	// (0x0003c76e) fep_vkb_prediction_pane_g4

0x0003,

0xfcb1,	// (0x0003f397) fep_vkb_prediction_pane_g

0x7496,	// (0x00036b7c) slider_set_pane_g3

0x74aa,	// (0x00036b90) slider_set_pane_g4

0x74c2,	// (0x00036ba8) slider_set_pane_g5

0x7496,	// (0x00036b7c) slider_set_pane_g6

0x74d8,	// (0x00036bbe) slider_set_pane_g7

0xae0b,	// (0x0003a4f1) slider_form_pane_g3

0xae14,	// (0x0003a4fa) slider_form_pane_g4

0xae1c,	// (0x0003a502) slider_form_pane_g5

0xae0b,	// (0x0003a4f1) slider_form_pane_g6

0xae24,	// (0x0003a50a) slider_form_pane_g7

0xb4b6,	// (0x0003ab9c) slider_set_pane_vc_g3

0xb4bf,	// (0x0003aba5) slider_set_pane_vc_g4

0xb4c8,	// (0x0003abae) slider_set_pane_vc_g5

0xb4b6,	// (0x0003ab9c) slider_set_pane_vc_g6

0xb4d1,	// (0x0003abb7) slider_set_pane_vc_g7

0xb6a7,	// (0x0003ad8d) slider_form_pane_vc_g1

0xb6b0,	// (0x0003ad96) slider_form_pane_vc_g2

0xb6b9,	// (0x0003ad9f) slider_form_pane_vc_g3

0xb6a7,	// (0x0003ad8d) slider_form_pane_vc_g4

0xb6c2,	// (0x0003ada8) slider_form_pane_vc_g5

0x0004,

0xfa6c,	// (0x0003f152) slider_form_pane_vc_g

0x52bf,	// (0x000349a5) main_idle_act3_pane

0xd090,	// (0x0003c776) ai3_links_pane

0xd099,	// (0x0003c77f) popup_ai3_data_window_ParamLimits

0xd099,	// (0x0003c77f) popup_ai3_data_window

0xf013,	// (0x0003e6f9) grid_ai3_links_pane

0xd0b7,	// (0x0003c79d) cell_ai3_links_pane_ParamLimits

0xd0b7,	// (0x0003c79d) cell_ai3_links_pane

0xd0d1,	// (0x0003c7b7) bg_popup_sub_pane_cp11

0xd0de,	// (0x0003c7c4) cell_ai3_links_pane_g1

0xf013,	// (0x0003e6f9) bg_popup_sub_pane_cp12

0xd103,	// (0x0003c7e9) heading_ai3_data_pane

0xd10b,	// (0x0003c7f1) list_ai3_gene_pane

0xd117,	// (0x0003c7fd) popup_ai3_data_window_g1

0xd11f,	// (0x0003c805) heading_ai3_data_pane_g1

0xd127,	// (0x0003c80d) heading_ai3_data_pane_t1

0xd135,	// (0x0003c81b) list_double_ai3_gene_pane_ParamLimits

0xd135,	// (0x0003c81b) list_double_ai3_gene_pane

0xd142,	// (0x0003c828) list_single_ai3_gene_pane_ParamLimits

0xd142,	// (0x0003c828) list_single_ai3_gene_pane

0xbec1,	// (0x0003b5a7) list_highlight_pane_cp7_ParamLimits

0xbec1,	// (0x0003b5a7) list_highlight_pane_cp7

0xd14f,	// (0x0003c835) list_single_a13_gene_pane_t1_ParamLimits

0xd14f,	// (0x0003c835) list_single_a13_gene_pane_t1

0xd166,	// (0x0003c84c) list_single_ai3_gene_pane_g1

0xd16f,	// (0x0003c855) list_single_ai3_gene_pane_g2

0x0001,

0xfcba,	// (0x0003f3a0) list_single_ai3_gene_pane_g

0xd177,	// (0x0003c85d) list_double_ai3_gene_pane_g1_ParamLimits

0xd177,	// (0x0003c85d) list_double_ai3_gene_pane_g1

0xd183,	// (0x0003c869) list_double_ai3_gene_pane_t1_ParamLimits

0xd183,	// (0x0003c869) list_double_ai3_gene_pane_t1

0xd19f,	// (0x0003c885) list_double_ai3_gene_pane_t2_ParamLimits

0xd19f,	// (0x0003c885) list_double_ai3_gene_pane_t2

0xd1b4,	// (0x0003c89a) list_double_ai3_gene_pane_t3_ParamLimits

0xd1b4,	// (0x0003c89a) list_double_ai3_gene_pane_t3

0x0002,

0xfcbf,	// (0x0003f3a5) list_double_ai3_gene_pane_t_ParamLimits

0xfcbf,	// (0x0003f3a5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4437,	// (0x00033b1d) aid_size_min_col_2

0xd058,	// (0x0003c73e) aid_size_min_msg_ParamLimits

0xd058,	// (0x0003c73e) aid_size_min_msg

0xc2d7,	// (0x0003b9bd) fep_vkb_top_text_pane_g2_ParamLimits

0xc2d7,	// (0x0003b9bd) fep_vkb_top_text_pane_g2

0x0001,

0xfb1f,	// (0x0003f205) fep_vkb_top_text_pane_g_ParamLimits

0xfb1f,	// (0x0003f205) fep_vkb_top_text_pane_g

0x52bf,	// (0x000349a5) main_hc_apps_shell_pane

0xd1d1,	// (0x0003c8b7) grid_hc_apps_pane_ParamLimits

0xd1d1,	// (0x0003c8b7) grid_hc_apps_pane

0xd1e3,	// (0x0003c8c9) list_hc_apps_pane

0xd1eb,	// (0x0003c8d1) scroll_pane_cp37_ParamLimits

0xd1eb,	// (0x0003c8d1) scroll_pane_cp37

0xd1f7,	// (0x0003c8dd) cell_hc_apps_pane_ParamLimits

0xd1f7,	// (0x0003c8dd) cell_hc_apps_pane

0xd2ab,	// (0x0003c991) cell_hc_apps_pane_g1_ParamLimits

0xd2ab,	// (0x0003c991) cell_hc_apps_pane_g1

0xd2d7,	// (0x0003c9bd) cell_hc_apps_pane_g2_ParamLimits

0xd2d7,	// (0x0003c9bd) cell_hc_apps_pane_g2

0xd2f3,	// (0x0003c9d9) cell_hc_apps_pane_g3_ParamLimits

0xd2f3,	// (0x0003c9d9) cell_hc_apps_pane_g3

0x0002,

0xfcc6,	// (0x0003f3ac) cell_hc_apps_pane_g_ParamLimits

0xfcc6,	// (0x0003f3ac) cell_hc_apps_pane_g

0xd315,	// (0x0003c9fb) cell_hc_apps_pane_t1_ParamLimits

0xd315,	// (0x0003c9fb) cell_hc_apps_pane_t1

0x231f,	// (0x00031a05) grid_highlight_pane_cp10_ParamLimits

0x231f,	// (0x00031a05) grid_highlight_pane_cp10

0xd355,	// (0x0003ca3b) list_single_hc_apps_pane_ParamLimits

0xd355,	// (0x0003ca3b) list_single_hc_apps_pane

0xd394,	// (0x0003ca7a) list_single_hc_apps_pane_g1

0x7c35,	// (0x0003731b) list_single_hc_apps_pane_g2

0x0001,

0xfccd,	// (0x0003f3b3) list_single_hc_apps_pane_g

0x7c4e,	// (0x00037334) list_single_hc_apps_pane_g2_copy1

0x7c6a,	// (0x00037350) list_single_hc_apps_pane_t1

0xf4dd,	// (0x0003ebc3) bg_set_opt_pane_cp_ParamLimits

0x5600,	// (0x00034ce6) setting_slider_pane_t1_ParamLimits

0x5619,	// (0x00034cff) setting_slider_pane_t2_ParamLimits

0x5633,	// (0x00034d19) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x0003ec1d) setting_slider_pane_t_ParamLimits

0x564b,	// (0x00034d31) slider_set_pane_ParamLimits

0x69dc,	// (0x000360c2) control_pane_g5_ParamLimits

0x69dc,	// (0x000360c2) control_pane_g5

0xac3e,	// (0x0003a324) slider_set_pane_g1_ParamLimits

0x748a,	// (0x00036b70) slider_set_pane_g2_ParamLimits

0x7496,	// (0x00036b7c) slider_set_pane_g3_ParamLimits

0x74aa,	// (0x00036b90) slider_set_pane_g4_ParamLimits

0x74c2,	// (0x00036ba8) slider_set_pane_g5_ParamLimits

0x7496,	// (0x00036b7c) slider_set_pane_g6_ParamLimits

0x74d8,	// (0x00036bbe) slider_set_pane_g7_ParamLimits

0xf93d,	// (0x0003f023) slider_set_pane_g_ParamLimits

0x8ecd,	// (0x000385b3) navi_icon_text_pane_ParamLimits

0x93e1,	// (0x00038ac7) aid_fill_nsta_2_ParamLimits

0x9420,	// (0x00038b06) aid_touch_tab_arrow_left_ParamLimits

0x942c,	// (0x00038b12) aid_touch_tab_arrow_right_ParamLimits

0x9498,	// (0x00038b7e) clock_nsta_pane_ParamLimits

0xa72c,	// (0x00039e12) navi_icon_pane_g1_ParamLimits

0xa738,	// (0x00039e1e) navi_text_pane_t1_ParamLimits

0xbb15,	// (0x0003b1fb) navi_icon_text_pane_g1_ParamLimits

0xbb21,	// (0x0003b207) navi_icon_text_pane_t1_ParamLimits

0xd394,	// (0x0003ca7a) list_single_hc_apps_pane_g1_ParamLimits

0x7c35,	// (0x0003731b) list_single_hc_apps_pane_g2_ParamLimits

0xfccd,	// (0x0003f3b3) list_single_hc_apps_pane_g_ParamLimits

0x7c4e,	// (0x00037334) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7c6a,	// (0x00037350) list_single_hc_apps_pane_t1_ParamLimits

0x5434,	// (0x00034b1a) popup_toolbar2_fixed_window_ParamLimits

0x5434,	// (0x00034b1a) popup_toolbar2_fixed_window

0x7037,	// (0x0003671d) popup_toolbar2_float_window

0xf013,	// (0x0003e6f9) bg_popup_sub_pane_cp27

0xd3ad,	// (0x0003ca93) grid_toolbar2_float_pane

0xf013,	// (0x0003e6f9) bg_popup_sub_pane_cp26

0xd3ad,	// (0x0003ca93) grid_toolbar2_fixed_pane

0xd3b5,	// (0x0003ca9b) cell_toolbar2_fixed_pane_ParamLimits

0xd3b5,	// (0x0003ca9b) cell_toolbar2_fixed_pane

0xd3c5,	// (0x0003caab) cell_toolbar2_fixed_pane_g1

0xd3ce,	// (0x0003cab4) toolbar2_fixed_button_pane

0x98bf,	// (0x00038fa5) toolbar2_fixed_button_pane_g1

0x98cf,	// (0x00038fb5) toolbar2_fixed_button_pane_g2

0x98c7,	// (0x00038fad) toolbar2_fixed_button_pane_g3

0x98df,	// (0x00038fc5) toolbar2_fixed_button_pane_g4

0x98d7,	// (0x00038fbd) toolbar2_fixed_button_pane_g5

0x98e7,	// (0x00038fcd) toolbar2_fixed_button_pane_g6

0x98ef,	// (0x00038fd5) toolbar2_fixed_button_pane_g7

0x98ff,	// (0x00038fe5) toolbar2_fixed_button_pane_g8

0x98f7,	// (0x00038fdd) toolbar2_fixed_button_pane_g9

0x0008,

0xf83f,	// (0x0003ef25) toolbar2_fixed_button_pane_g

0xd3d6,	// (0x0003cabc) cell_toolbar2_float_pane_ParamLimits

0xd3d6,	// (0x0003cabc) cell_toolbar2_float_pane

0xd3e7,	// (0x0003cacd) cell_toolbar2_float_pane_g1

0xd3ce,	// (0x0003cab4) toolbar2_fixed_button_pane_cp

0xc033,	// (0x0003b719) fep_vkb_accented_list_pane_ParamLimits

0xc033,	// (0x0003b719) fep_vkb_accented_list_pane

0x794b,	// (0x00037031) bg_popup_fep_shadow_pane_g9

0x9060,	// (0x00038746) bg_popup_fep_shadow_pane_cp3

0x5f78,	// (0x0003565e) list_accented_list_pane

0xd3f0,	// (0x0003cad6) list_single_accented_list_pane_ParamLimits

0xd3f0,	// (0x0003cad6) list_single_accented_list_pane

0x9060,	// (0x00038746) list_highlight_pane_cp10

0xd401,	// (0x0003cae7) list_single_accented_list_pane_t1

0x6f7d,	// (0x00036663) popup_slider_window_ParamLimits

0x6f7d,	// (0x00036663) popup_slider_window

0xd04f,	// (0x0003c735) aid_indentation_list_msg

0xd4d1,	// (0x0003cbb7) bg_popup_window_pane_cp19

0xd53d,	// (0x0003cc23) popup_slider_window_g1

0xd559,	// (0x0003cc3f) popup_slider_window_g2

0xd575,	// (0x0003cc5b) popup_slider_window_g3

0x0005,

0xfcd2,	// (0x0003f3b8) popup_slider_window_g

0xd5db,	// (0x0003ccc1) popup_slider_window_t1

0xd64f,	// (0x0003cd35) small_volume_slider_vertical_pane

0xbefc,	// (0x0003b5e2) small_volume_slider_vertical_pane_g1

0xbefc,	// (0x0003b5e2) small_volume_slider_vertical_pane_g2

0xd66b,	// (0x0003cd51) small_volume_slider_vertical_pane_g3

0x0002,

0xfce4,	// (0x0003f3ca) small_volume_slider_vertical_pane_g

0x51dc,	// (0x000348c2) area_side_right_pane_ParamLimits

0x51dc,	// (0x000348c2) area_side_right_pane

0x7c98,	// (0x0003737e) aid_size_side_button_ParamLimits

0x7c98,	// (0x0003737e) aid_size_side_button

0x7cac,	// (0x00037392) grid_sctrl_middle_pane_ParamLimits

0x7cac,	// (0x00037392) grid_sctrl_middle_pane

0x7ccb,	// (0x000373b1) sctrl_sk_bottom_pane

0x7cdc,	// (0x000373c2) sctrl_sk_top_pane

0x7cee,	// (0x000373d4) aid_touch_sctrl_top

0x7cfb,	// (0x000373e1) bg_sctrl_sk_pane_ParamLimits

0x7cfb,	// (0x000373e1) bg_sctrl_sk_pane

0x7d09,	// (0x000373ef) sctrl_sk_top_pane_g1

0x7d16,	// (0x000373fc) sctrl_sk_top_pane_t1

0x7cee,	// (0x000373d4) aid_touch_sctrl_bottom

0x7cfb,	// (0x000373e1) bg_sctrl_sk_pane_cp_ParamLimits

0x7cfb,	// (0x000373e1) bg_sctrl_sk_pane_cp

0x7d31,	// (0x00037417) sctrl_sk_bottom_pane_g1

0x7d16,	// (0x000373fc) sctrl_sk_bottom_pane_t1

0x7d3a,	// (0x00037420) cell_sctrl_middle_pane_ParamLimits

0x7d3a,	// (0x00037420) cell_sctrl_middle_pane

0x7d57,	// (0x0003743d) aid_touch_sctrl_middle_ParamLimits

0x7d57,	// (0x0003743d) aid_touch_sctrl_middle

0x7d69,	// (0x0003744f) bg_sctrl_middle_pane_ParamLimits

0x7d69,	// (0x0003744f) bg_sctrl_middle_pane

0x796b,	// (0x00037051) cell_sctrl_middle_pane_g1_ParamLimits

0x796b,	// (0x00037051) cell_sctrl_middle_pane_g1

0x7d77,	// (0x0003745d) cell_sctrl_middle_pane_g2_ParamLimits

0x7d77,	// (0x0003745d) cell_sctrl_middle_pane_g2

0x0001,

0xfcf0,	// (0x0003f3d6) cell_sctrl_middle_pane_g_ParamLimits

0xfcf0,	// (0x0003f3d6) cell_sctrl_middle_pane_g

0x98bf,	// (0x00038fa5) bg_sctrl_middle_pane_g1

0x98c7,	// (0x00038fad) bg_sctrl_middle_pane_g2

0x98cf,	// (0x00038fb5) bg_sctrl_middle_pane_g3

0x98d7,	// (0x00038fbd) bg_sctrl_middle_pane_g4

0x98df,	// (0x00038fc5) bg_sctrl_middle_pane_g5

0x98e7,	// (0x00038fcd) bg_sctrl_middle_pane_g6

0x98ef,	// (0x00038fd5) bg_sctrl_middle_pane_g7

0x98f7,	// (0x00038fdd) bg_sctrl_middle_pane_g8

0x0007,

0xfcf5,	// (0x0003f3db) bg_sctrl_middle_pane_g

0x98ff,	// (0x00038fe5) bg_sctrl_middle_pane_g8_copy1

0x98bf,	// (0x00038fa5) bg_sctrl_sk_pane_g1

0x98cf,	// (0x00038fb5) bg_sctrl_sk_pane_g2

0x98c7,	// (0x00038fad) bg_sctrl_sk_pane_g3

0x0008,

0xf83f,	// (0x0003ef25) bg_sctrl_sk_pane_g

0x2767,	// (0x00031e4d) aid_size_touch_scroll_bar

0x98df,	// (0x00038fc5) bg_sctrl_sk_pane_g4

0x98d7,	// (0x00038fbd) bg_sctrl_sk_pane_g5

0x98e7,	// (0x00038fcd) bg_sctrl_sk_pane_g6

0x98ef,	// (0x00038fd5) bg_sctrl_sk_pane_g7

0x98ff,	// (0x00038fe5) bg_sctrl_sk_pane_g8

0x98f7,	// (0x00038fdd) bg_sctrl_sk_pane_g9

0x6b92,	// (0x00036278) popup_fep_china_hwr2_fs_candidate_window

0x6b9c,	// (0x00036282) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6b9c,	// (0x00036282) popup_fep_china_hwr2_fs_control_window

0x796b,	// (0x00037051) sctrl_sk_top_pane_g2

0x0001,

0xfceb,	// (0x0003f3d1) sctrl_sk_top_pane_g

0xd674,	// (0x0003cd5a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd674,	// (0x0003cd5a) aid_fep_china_hwr2_fs_cell

0xd687,	// (0x0003cd6d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd687,	// (0x0003cd6d) bg_popup_fep_shadow_pane_cp4

0xd6c1,	// (0x0003cda7) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd6c1,	// (0x0003cda7) bg_popup_fep_shadow_pane_cp5

0xd6d3,	// (0x0003cdb9) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd6d3,	// (0x0003cdb9) popup_fep_china_hwr2_fs_control_bar_grid

0xd6e3,	// (0x0003cdc9) popup_fep_china_hwr2_fs_control_funtion_grid

0xd6eb,	// (0x0003cdd1) aid_fep_china_hwr2_fs_candi_cell

0xf013,	// (0x0003e6f9) bg_popup_fep_shadow_pane_cp6

0xd6f5,	// (0x0003cddb) popup_fep_china_hwr2_fs_candidate_grid

0xd6ff,	// (0x0003cde5) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd6ff,	// (0x0003cde5) cell_fep_china_hwr2_fs_funtion_grid

0xbefc,	// (0x0003b5e2) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd717,	// (0x0003cdfd) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd717,	// (0x0003cdfd) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd725,	// (0x0003ce0b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd725,	// (0x0003ce0b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd06,	// (0x0003f3ec) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd06,	// (0x0003f3ec) cell_fep_china_hwr2_fs_funtion_grid_g

0xd73b,	// (0x0003ce21) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd73b,	// (0x0003ce21) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd750,	// (0x0003ce36) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd750,	// (0x0003ce36) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0b,	// (0x0003f3f1) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0b,	// (0x0003f3f1) cell_fep_china_hwr2_fs_funtion_grid_t

0xd76c,	// (0x0003ce52) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd774,	// (0x0003ce5a) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd77c,	// (0x0003ce62) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd10,	// (0x0003f3f6) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd784,	// (0x0003ce6a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd784,	// (0x0003ce6a) cell_fep_china_hwr2_fs_candidate_grid

0xd7a3,	// (0x0003ce89) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd7ab,	// (0x0003ce91) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbefc,	// (0x0003b5e2) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbefc,	// (0x0003b5e2) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb24,	// (0x0003f20a) cell_fep_china_hwr2_fs_candidate_grid_g

0xd7b3,	// (0x0003ce99) cell_fep_china_hwr2_fs_candidate_grid_t1

0x94ab,	// (0x00038b91) clock_nsta_pane_cp_24_ParamLimits

0x94ab,	// (0x00038b91) clock_nsta_pane_cp_24

0x952b,	// (0x00038c11) indicator_nsta_pane_cp_24_ParamLimits

0x952b,	// (0x00038c11) indicator_nsta_pane_cp_24

0xa5a8,	// (0x00039c8e) heading_pane_g1

0x0001,

0xf8a4,	// (0x0003ef8a) heading_pane_g

0xb039,	// (0x0003a71f) grid_sct_catagory_button_pane

0xb06b,	// (0x0003a751) scroll_pane_cp5_ParamLimits

0xbb63,	// (0x0003b249) button_value_adjust_pane_cp5_ParamLimits

0xbb63,	// (0x0003b249) button_value_adjust_pane_cp5

0xbc48,	// (0x0003b32e) form2_midp_time_pane_ParamLimits

0xd7c1,	// (0x0003cea7) cell_sct_catagory_button_pane_ParamLimits

0xd7c1,	// (0x0003cea7) cell_sct_catagory_button_pane

0xbec1,	// (0x0003b5a7) bg_button_pane_cp01_ParamLimits

0xbec1,	// (0x0003b5a7) bg_button_pane_cp01

0xbefc,	// (0x0003b5e2) cell_sct_catagory_button_pane_g1

0x6fbe,	// (0x000366a4) popup_tb_extension_window

0xd7d3,	// (0x0003ceb9) aid_size_cell_ext_ParamLimits

0xd7d3,	// (0x0003ceb9) aid_size_cell_ext

0x231f,	// (0x00031a05) bg_tb_trans_pane_cp1_ParamLimits

0x231f,	// (0x00031a05) bg_tb_trans_pane_cp1

0xd7f3,	// (0x0003ced9) grid_tb_ext_pane_ParamLimits

0xd7f3,	// (0x0003ced9) grid_tb_ext_pane

0xd821,	// (0x0003cf07) cell_tb_ext_pane_ParamLimits

0xd821,	// (0x0003cf07) cell_tb_ext_pane

0xd838,	// (0x0003cf1e) cell_tb_ext_pane_g1_ParamLimits

0xd838,	// (0x0003cf1e) cell_tb_ext_pane_g1

0xd855,	// (0x0003cf3b) cell_tb_ext_pane_t1

0x231f,	// (0x00031a05) list_highlight_pane_cp11_ParamLimits

0x231f,	// (0x00031a05) list_highlight_pane_cp11

0x5453,	// (0x00034b39) popup_uni_indicator_window_ParamLimits

0x5453,	// (0x00034b39) popup_uni_indicator_window

0x282e,	// (0x00031f14) bg_popup_sub_pane_cp14

0xd872,	// (0x0003cf58) list_uniindi_pane

0xd87e,	// (0x0003cf64) uniindi_top_pane

0x231f,	// (0x00031a05) bg_uniindi_top_pane

0xd89f,	// (0x0003cf85) uniindi_top_pane_g1

0xd8b5,	// (0x0003cf9b) uniindi_top_pane_g2

0x0003,

0xfd17,	// (0x0003f3fd) uniindi_top_pane_g

0xd8df,	// (0x0003cfc5) uniindi_top_pane_t1

0xd90b,	// (0x0003cff1) list_single_uniindi_pane_ParamLimits

0xd90b,	// (0x0003cff1) list_single_uniindi_pane

0xbefc,	// (0x0003b5e2) bg_uniindi_top_pane_g1

0xd91e,	// (0x0003d004) list_single_uniindi_pane_g1

0xd931,	// (0x0003d017) list_single_uniindi_pane_t1

0x52bf,	// (0x000349a5) control_bg_pane

0xd956,	// (0x0003d03c) bg_sctrl_sk_pane_cp1

0xd95f,	// (0x0003d045) bg_sctrl_sk_pane_cp2

0xd968,	// (0x0003d04e) control_bg_pane_g1

0xd971,	// (0x0003d057) control_bg_pane_g2

0x0001,

0xfd20,	// (0x0003f406) control_bg_pane_g

0xb99b,	// (0x0003b081) cell_indicator_nsta_pane_g1_ParamLimits

0xb9a9,	// (0x0003b08f) cell_indicator_nsta_pane_g2_ParamLimits

0xfa88,	// (0x0003f16e) cell_indicator_nsta_pane_g_ParamLimits

0x4236,	// (0x0003391c) form2_midp_time_pane_t1_ParamLimits

0x6af0,	// (0x000361d6) main_idle_act4_pane_ParamLimits

0x6af0,	// (0x000361d6) main_idle_act4_pane

0x6fbe,	// (0x000366a4) popup_tb_extension_window_ParamLimits

0xd813,	// (0x0003cef9) tb_ext_find_pane_ParamLimits

0xd813,	// (0x0003cef9) tb_ext_find_pane

0xd97a,	// (0x0003d060) ai_gene_pane_1_cp1

0x91aa,	// (0x00038890) ai_gene_pane_2_cp1

0xd982,	// (0x0003d068) list_single_idle_plugin_calendar_pane

0xd98b,	// (0x0003d071) list_single_idle_plugin_notification_pane

0xd994,	// (0x0003d07a) list_single_idle_plugin_player_pane

0xd99d,	// (0x0003d083) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd99d,	// (0x0003d083) list_single_idle_plugin_shortcut_pane

0xd9bf,	// (0x0003d0a5) main_idle_act4_pane_t1

0xd9d1,	// (0x0003d0b7) main_idle_act4_pane_t2

0x0001,

0xfd25,	// (0x0003f40b) main_idle_act4_pane_t

0xd9e3,	// (0x0003d0c9) middle_sk_idle_act4_pane_ParamLimits

0xd9e3,	// (0x0003d0c9) middle_sk_idle_act4_pane

0xd9f9,	// (0x0003d0df) popup_clock_digital_analogue_window_cp2

0xda13,	// (0x0003d0f9) shortcut_wheel_idle_act4_pane_ParamLimits

0xda13,	// (0x0003d0f9) shortcut_wheel_idle_act4_pane

0xbefc,	// (0x0003b5e2) shortcut_wheel_idle_act4_pane_g1

0xbefc,	// (0x0003b5e2) shortcut_wheel_idle_act4_pane_g2

0xbefc,	// (0x0003b5e2) shortcut_wheel_idle_act4_pane_g3

0xbefc,	// (0x0003b5e2) shortcut_wheel_idle_act4_pane_g4

0xbefc,	// (0x0003b5e2) shortcut_wheel_idle_act4_pane_g5

0xda27,	// (0x0003d10d) shortcut_wheel_idle_act4_pane_g6

0xda2f,	// (0x0003d115) shortcut_wheel_idle_act4_pane_g7

0xda37,	// (0x0003d11d) shortcut_wheel_idle_act4_pane_g8

0xda3f,	// (0x0003d125) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2a,	// (0x0003f410) shortcut_wheel_idle_act4_pane_g

0xc177,	// (0x0003b85d) middle_sk_idle_act4_pane_g1_ParamLimits

0xc177,	// (0x0003b85d) middle_sk_idle_act4_pane_g1

0xdaa3,	// (0x0003d189) middle_sk_idle_act4_pane_g2_ParamLimits

0xdaa3,	// (0x0003d189) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4d,	// (0x0003f433) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4d,	// (0x0003f433) middle_sk_idle_act4_pane_g

0xdaaf,	// (0x0003d195) middle_sk_idle_act4_pane_t1_ParamLimits

0xdaaf,	// (0x0003d195) middle_sk_idle_act4_pane_t1

0xdacc,	// (0x0003d1b2) grid_ai_shortcut_pane_ParamLimits

0xdacc,	// (0x0003d1b2) grid_ai_shortcut_pane

0xdae5,	// (0x0003d1cb) list_highlight_pane_cp16_ParamLimits

0xdae5,	// (0x0003d1cb) list_highlight_pane_cp16

0xdaf2,	// (0x0003d1d8) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdaf2,	// (0x0003d1d8) list_single_idle_plugin_shortcut_pane_g1

0xdafe,	// (0x0003d1e4) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdafe,	// (0x0003d1e4) list_single_idle_plugin_shortcut_pane_g2

0xdb18,	// (0x0003d1fe) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdb18,	// (0x0003d1fe) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd52,	// (0x0003f438) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd52,	// (0x0003f438) list_single_idle_plugin_shortcut_pane_g

0xdb2b,	// (0x0003d211) cell_ai_shortcut_pane_ParamLimits

0xdb2b,	// (0x0003d211) cell_ai_shortcut_pane

0xdb4e,	// (0x0003d234) cell_ai_shortcut_pane_g1_ParamLimits

0xdb4e,	// (0x0003d234) cell_ai_shortcut_pane_g1

0xd97a,	// (0x0003d060) ai_gene_pane_1_cp2

0xdb70,	// (0x0003d256) ai_gene_pane_2_cp2

0xdb78,	// (0x0003d25e) list_highlight_pane_cp15

0xdb81,	// (0x0003d267) list_single_idle_plugin_calendar_pane_g1

0xdb78,	// (0x0003d25e) list_highlight_pane_cp17

0xdb89,	// (0x0003d26f) list_single_idle_plugin_calendar_pane_g1_copy1

0xdb91,	// (0x0003d277) list_single_idle_plugin_player_pane_g1

0xb2a0,	// (0x0003a986) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd59,	// (0x0003f43f) list_single_idle_plugin_player_pane_g

0xdb99,	// (0x0003d27f) list_single_idle_plugin_player_pane_t1

0xdba7,	// (0x0003d28d) list_single_idle_plugin_player_pane_t2

0xdbb5,	// (0x0003d29b) list_single_idle_plugin_player_pane_t3

0xdbc3,	// (0x0003d2a9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5e,	// (0x0003f444) list_single_idle_plugin_player_pane_t

0xdbd1,	// (0x0003d2b7) wait_bar_pane_cp15

0xdbd9,	// (0x0003d2bf) grid_ai_notification_pane

0xb2a0,	// (0x0003a986) list_single_idle_plugin_notification_pane_g1

0xdbe2,	// (0x0003d2c8) cell_ai_notification_pane_ParamLimits

0xdbe2,	// (0x0003d2c8) cell_ai_notification_pane

0xdbef,	// (0x0003d2d5) cell_ai_notification_pane_g1

0xdbf7,	// (0x0003d2dd) cell_ai_notification_pane_t1

0xdc05,	// (0x0003d2eb) tb_ext_find_button_pane

0xdc0d,	// (0x0003d2f3) tb_ext_find_pane_g1

0xdc15,	// (0x0003d2fb) tb_ext_find_pane_t1

0x8a27,	// (0x0003810d) tb_ext_find_button_pane_g1

0xdc23,	// (0x0003d309) tb_ext_find_button_pane_g2

0x0001,

0xfd67,	// (0x0003f44d) tb_ext_find_button_pane_g

0xd9bf,	// (0x0003d0a5) main_idle_act4_pane_t1_ParamLimits

0xd9d1,	// (0x0003d0b7) main_idle_act4_pane_t2_ParamLimits

0xfd25,	// (0x0003f40b) main_idle_act4_pane_t_ParamLimits

0xd9f9,	// (0x0003d0df) popup_clock_digital_analogue_window_cp2_ParamLimits

0xda07,	// (0x0003d0ed) sat_plugin_idle_act4_pane_ParamLimits

0xda07,	// (0x0003d0ed) sat_plugin_idle_act4_pane

0xdc2c,	// (0x0003d312) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdc2c,	// (0x0003d312) sat_plugin_idle_act4_pane_t1

0xdc3f,	// (0x0003d325) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdc3f,	// (0x0003d325) sat_plugin_idle_act4_pane_t2

0xdc52,	// (0x0003d338) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdc52,	// (0x0003d338) sat_plugin_idle_act4_pane_t3

0xdc65,	// (0x0003d34b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdc65,	// (0x0003d34b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6c,	// (0x0003f452) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6c,	// (0x0003f452) sat_plugin_idle_act4_pane_t

0x5384,	// (0x00034a6a) popup_battery_window_ParamLimits

0x5384,	// (0x00034a6a) popup_battery_window

0x231f,	// (0x00031a05) bg_popup_sub_pane_cp25_ParamLimits

0x231f,	// (0x00031a05) bg_popup_sub_pane_cp25

0xdc78,	// (0x0003d35e) popup_battery_window_g1_ParamLimits

0xdc78,	// (0x0003d35e) popup_battery_window_g1

0xdc84,	// (0x0003d36a) popup_battery_window_t1_ParamLimits

0xdc84,	// (0x0003d36a) popup_battery_window_t1

0xdc96,	// (0x0003d37c) popup_battery_window_t2_ParamLimits

0xdc96,	// (0x0003d37c) popup_battery_window_t2

0x0001,

0xfd75,	// (0x0003f45b) popup_battery_window_t_ParamLimits

0xfd75,	// (0x0003f45b) popup_battery_window_t

0x9074,	// (0x0003875a) midp_canvas_pane_ParamLimits

0x90ec,	// (0x000387d2) midp_keypad_pane_ParamLimits

0x90ec,	// (0x000387d2) midp_keypad_pane

0x938f,	// (0x00038a75) main_midp_pane_ParamLimits

0xba16,	// (0x0003b0fc) signal_pane_g2_cp_ParamLimits

0xdcb3,	// (0x0003d399) aid_size_cell_midp_keypad_ParamLimits

0xdcb3,	// (0x0003d399) aid_size_cell_midp_keypad

0xdccd,	// (0x0003d3b3) midp_keyp_game_grid_pane_ParamLimits

0xdccd,	// (0x0003d3b3) midp_keyp_game_grid_pane

0xdced,	// (0x0003d3d3) midp_keyp_rocker_pane_ParamLimits

0xdced,	// (0x0003d3d3) midp_keyp_rocker_pane

0xdd1c,	// (0x0003d402) midp_keyp_sk_left_pane_ParamLimits

0xdd1c,	// (0x0003d402) midp_keyp_sk_left_pane

0xdd78,	// (0x0003d45e) midp_keyp_sk_right_pane_ParamLimits

0xdd78,	// (0x0003d45e) midp_keyp_sk_right_pane

0xf013,	// (0x0003e6f9) bg_button_pane_cp03

0xddd4,	// (0x0003d4ba) midp_keyp_sk_left_pane_g1

0xf013,	// (0x0003e6f9) bg_button_pane_cp04

0xddd4,	// (0x0003d4ba) midp_keyp_sk_right_pane_g1

0xbefc,	// (0x0003b5e2) midp_keyp_rocker_pane_g1

0xdddc,	// (0x0003d4c2) keyp_game_cell_pane_ParamLimits

0xdddc,	// (0x0003d4c2) keyp_game_cell_pane

0xf013,	// (0x0003e6f9) bg_button_pane_cp02

0xddef,	// (0x0003d4d5) keyp_game_cell_pane_g1

0x53ce,	// (0x00034ab4) popup_fep_vkb2_window_ParamLimits

0x53ce,	// (0x00034ab4) popup_fep_vkb2_window

0x7d95,	// (0x0003747b) aid_size_cell_vkb2_ParamLimits

0x7d95,	// (0x0003747b) aid_size_cell_vkb2

0x7de1,	// (0x000374c7) popup_fep_vkb2_window_g1_ParamLimits

0x7de1,	// (0x000374c7) popup_fep_vkb2_window_g1

0x7e29,	// (0x0003750f) vkb2_area_bottom_pane_ParamLimits

0x7e29,	// (0x0003750f) vkb2_area_bottom_pane

0x7e7d,	// (0x00037563) vkb2_area_keypad_pane_ParamLimits

0x7e7d,	// (0x00037563) vkb2_area_keypad_pane

0x7ec3,	// (0x000375a9) vkb2_area_top_pane_ParamLimits

0x7ec3,	// (0x000375a9) vkb2_area_top_pane

0x7f43,	// (0x00037629) vkb2_top_entry_pane_ParamLimits

0x7f43,	// (0x00037629) vkb2_top_entry_pane

0x7f6d,	// (0x00037653) vkb2_top_grid_left_pane_ParamLimits

0x7f6d,	// (0x00037653) vkb2_top_grid_left_pane

0x7f8c,	// (0x00037672) vkb2_top_grid_right_pane_ParamLimits

0x7f8c,	// (0x00037672) vkb2_top_grid_right_pane

0x7fab,	// (0x00037691) vkb2_cell_keypad_pane_ParamLimits

0x7fab,	// (0x00037691) vkb2_cell_keypad_pane

0x807c,	// (0x00037762) vkb2_area_bottom_grid_pane_ParamLimits

0x807c,	// (0x00037762) vkb2_area_bottom_grid_pane

0x80a2,	// (0x00037788) vkb2_area_bottom_pane_g1_ParamLimits

0x80a2,	// (0x00037788) vkb2_area_bottom_pane_g1

0x80c6,	// (0x000377ac) vkb2_area_bottom_pane_g2_ParamLimits

0x80c6,	// (0x000377ac) vkb2_area_bottom_pane_g2

0x80f4,	// (0x000377da) vkb2_area_bottom_pane_g3_ParamLimits

0x80f4,	// (0x000377da) vkb2_area_bottom_pane_g3

0x0002,

0xfd7a,	// (0x0003f460) vkb2_area_bottom_pane_g_ParamLimits

0xfd7a,	// (0x0003f460) vkb2_area_bottom_pane_g

0x8155,	// (0x0003783b) vkb2_top_cell_left_pane_ParamLimits

0x8155,	// (0x0003783b) vkb2_top_cell_left_pane

0xde00,	// (0x0003d4e6) vkb2_top_entry_pane_g1_ParamLimits

0xde00,	// (0x0003d4e6) vkb2_top_entry_pane_g1

0xde0e,	// (0x0003d4f4) vkb2_top_entry_pane_t1_ParamLimits

0xde0e,	// (0x0003d4f4) vkb2_top_entry_pane_t1

0xde40,	// (0x0003d526) vkb2_top_entry_pane_t2_ParamLimits

0xde40,	// (0x0003d526) vkb2_top_entry_pane_t2

0xde72,	// (0x0003d558) vkb2_top_entry_pane_t3_ParamLimits

0xde72,	// (0x0003d558) vkb2_top_entry_pane_t3

0x0002,

0xfd81,	// (0x0003f467) vkb2_top_entry_pane_t_ParamLimits

0xfd81,	// (0x0003f467) vkb2_top_entry_pane_t

0x81a2,	// (0x00037888) vkb2_top_grid_right_pane_g1_ParamLimits

0x81a2,	// (0x00037888) vkb2_top_grid_right_pane_g1

0x81b8,	// (0x0003789e) vkb2_top_grid_right_pane_g2_ParamLimits

0x81b8,	// (0x0003789e) vkb2_top_grid_right_pane_g2

0x81d0,	// (0x000378b6) vkb2_top_grid_right_pane_g3_ParamLimits

0x81d0,	// (0x000378b6) vkb2_top_grid_right_pane_g3

0x81e8,	// (0x000378ce) vkb2_top_grid_right_pane_g4_ParamLimits

0x81e8,	// (0x000378ce) vkb2_top_grid_right_pane_g4

0x0003,

0xfd88,	// (0x0003f46e) vkb2_top_grid_right_pane_g_ParamLimits

0xfd88,	// (0x0003f46e) vkb2_top_grid_right_pane_g

0x81fe,	// (0x000378e4) vkb2_top_cell_left_pane_g1

0x8215,	// (0x000378fb) vkb2_cell_keypad_pane_g1_ParamLimits

0x8215,	// (0x000378fb) vkb2_cell_keypad_pane_g1

0xde96,	// (0x0003d57c) vkb2_cell_keypad_pane_t1_ParamLimits

0xde96,	// (0x0003d57c) vkb2_cell_keypad_pane_t1

0x8223,	// (0x00037909) vkb2_cell_bottom_grid_pane_ParamLimits

0x8223,	// (0x00037909) vkb2_cell_bottom_grid_pane

0x825c,	// (0x00037942) vkb2_cell_bottom_grid_pane_g1

0xda47,	// (0x0003d12d) aid_call2_pane_cp02

0xda4f,	// (0x0003d135) aid_call_pane_cp02

0xda57,	// (0x0003d13d) clock_digital_number_pane_cp10

0xda5f,	// (0x0003d145) clock_digital_number_pane_cp11

0xda67,	// (0x0003d14d) clock_digital_number_pane_cp12

0xda6f,	// (0x0003d155) clock_digital_number_pane_cp13

0xda77,	// (0x0003d15d) clock_digital_separator_pane_cp10

0x8a27,	// (0x0003810d) popup_clock_digital_analogue_window_cp2_g1

0x8a27,	// (0x0003810d) popup_clock_digital_analogue_window_cp2_g2

0xda7f,	// (0x0003d165) popup_clock_digital_analogue_window_cp2_g3

0x8a27,	// (0x0003810d) popup_clock_digital_analogue_window_cp2_g4

0xda7f,	// (0x0003d165) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3d,	// (0x0003f423) popup_clock_digital_analogue_window_cp2_g

0xda87,	// (0x0003d16d) popup_clock_digital_analogue_window_cp2_t1

0xda95,	// (0x0003d17b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd48,	// (0x0003f42e) popup_clock_digital_analogue_window_cp2_t

0xbefc,	// (0x0003b5e2) clock_digital_number_pane_cp10_g1

0xbefc,	// (0x0003b5e2) clock_digital_number_pane_cp10_g2

0x0001,

0xfb24,	// (0x0003f20a) clock_digital_number_pane_cp10_g

0xbefc,	// (0x0003b5e2) clock_digital_separator_pane_cp10_g1

0xbefc,	// (0x0003b5e2) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb24,	// (0x0003f20a) clock_digital_separator_pane_cp10_g

0xd8c1,	// (0x0003cfa7) uniindi_top_pane_g3

0xd8d2,	// (0x0003cfb8) uniindi_top_pane_g4

0x8036,	// (0x0003771c) vkb2_row_keypad_pane_ParamLimits

0x8036,	// (0x0003771c) vkb2_row_keypad_pane

0x8278,	// (0x0003795e) vkb2_cell_t_keypad_pane_ParamLimits

0x8278,	// (0x0003795e) vkb2_cell_t_keypad_pane

0x8288,	// (0x0003796e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8288,	// (0x0003796e) vkb2_cell_t_keypad_pane_cp08

0x829d,	// (0x00037983) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x829d,	// (0x00037983) vkb2_cell_t_keypad_pane_cp09

0x82b1,	// (0x00037997) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x82b1,	// (0x00037997) vkb2_cell_t_keypad_pane_cp01

0x82c2,	// (0x000379a8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x82c2,	// (0x000379a8) vkb2_cell_t_keypad_pane_cp02

0x82d3,	// (0x000379b9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x82d3,	// (0x000379b9) vkb2_cell_t_keypad_pane_cp03

0x82e4,	// (0x000379ca) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x82e4,	// (0x000379ca) vkb2_cell_t_keypad_pane_cp04

0x82f5,	// (0x000379db) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x82f5,	// (0x000379db) vkb2_cell_t_keypad_pane_cp05

0x8306,	// (0x000379ec) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8306,	// (0x000379ec) vkb2_cell_t_keypad_pane_cp06

0x8319,	// (0x000379ff) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8319,	// (0x000379ff) vkb2_cell_t_keypad_pane_cp07

0x832e,	// (0x00037a14) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x832e,	// (0x00037a14) vkb2_cell_t_keypad_pane_cp10

0x796b,	// (0x00037051) vkb2_cell_t_keypad_pane_g1

0xdead,	// (0x0003d593) vkb2_cell_t_keypad_pane_t1

0x52bf,	// (0x000349a5) popup_grid_graphic2_window

0xdebf,	// (0x0003d5a5) aid_size_cell_graphic2_ParamLimits

0xdebf,	// (0x0003d5a5) aid_size_cell_graphic2

0xdef7,	// (0x0003d5dd) bg_popup_window_pane_cp21_ParamLimits

0xdef7,	// (0x0003d5dd) bg_popup_window_pane_cp21

0xdf05,	// (0x0003d5eb) graphic2_pages_pane_ParamLimits

0xdf05,	// (0x0003d5eb) graphic2_pages_pane

0xdf4b,	// (0x0003d631) grid_graphic2_control_pane_ParamLimits

0xdf4b,	// (0x0003d631) grid_graphic2_control_pane

0xdf89,	// (0x0003d66f) grid_graphic2_pane_ParamLimits

0xdf89,	// (0x0003d66f) grid_graphic2_pane

0xdfff,	// (0x0003d6e5) cell_graphic2_pane

0x52bf,	// (0x000349a5) main_comp_mode_pane

0xd10b,	// (0x0003c7f1) list_ai3_gene_pane_ParamLimits

0xd4d1,	// (0x0003cbb7) bg_popup_window_pane_cp19_ParamLimits

0xd4dd,	// (0x0003cbc3) bg_touch_area_indi_pane_ParamLimits

0xd4dd,	// (0x0003cbc3) bg_touch_area_indi_pane

0xd4f3,	// (0x0003cbd9) bg_touch_area_indi_pane_cp01_ParamLimits

0xd4f3,	// (0x0003cbd9) bg_touch_area_indi_pane_cp01

0xd509,	// (0x0003cbef) bg_touch_area_indi_pane_cp02_ParamLimits

0xd509,	// (0x0003cbef) bg_touch_area_indi_pane_cp02

0xd523,	// (0x0003cc09) bg_touch_area_indi_pane_cp03_ParamLimits

0xd523,	// (0x0003cc09) bg_touch_area_indi_pane_cp03

0xd53d,	// (0x0003cc23) popup_slider_window_g1_ParamLimits

0xd559,	// (0x0003cc3f) popup_slider_window_g2_ParamLimits

0xd575,	// (0x0003cc5b) popup_slider_window_g3_ParamLimits

0xfcd2,	// (0x0003f3b8) popup_slider_window_g_ParamLimits

0xd5db,	// (0x0003ccc1) popup_slider_window_t1_ParamLimits

0xd64f,	// (0x0003cd35) small_volume_slider_vertical_pane_ParamLimits

0xdfff,	// (0x0003d6e5) cell_graphic2_pane_ParamLimits

0xe053,	// (0x0003d739) bg_button_pane_cp10_ParamLimits

0xe053,	// (0x0003d739) bg_button_pane_cp10

0xe068,	// (0x0003d74e) bg_button_pane_cp11_ParamLimits

0xe068,	// (0x0003d74e) bg_button_pane_cp11

0xe07d,	// (0x0003d763) graphic2_pages_pane_g1_ParamLimits

0xe07d,	// (0x0003d763) graphic2_pages_pane_g1

0xe098,	// (0x0003d77e) graphic2_pages_pane_g2_ParamLimits

0xe098,	// (0x0003d77e) graphic2_pages_pane_g2

0x0001,

0xfd96,	// (0x0003f47c) graphic2_pages_pane_g_ParamLimits

0xfd96,	// (0x0003f47c) graphic2_pages_pane_g

0xe0b0,	// (0x0003d796) graphic2_pages_pane_t1_ParamLimits

0xe0b0,	// (0x0003d796) graphic2_pages_pane_t1

0xe0c6,	// (0x0003d7ac) cell_graphic2_control_pane_ParamLimits

0xe0c6,	// (0x0003d7ac) cell_graphic2_control_pane

0xe0e6,	// (0x0003d7cc) cell_graphic2_pane_g1_ParamLimits

0xe0e6,	// (0x0003d7cc) cell_graphic2_pane_g1

0xe0f3,	// (0x0003d7d9) cell_graphic2_pane_g2_ParamLimits

0xe0f3,	// (0x0003d7d9) cell_graphic2_pane_g2

0xe100,	// (0x0003d7e6) cell_graphic2_pane_g3_ParamLimits

0xe100,	// (0x0003d7e6) cell_graphic2_pane_g3

0xe10d,	// (0x0003d7f3) cell_graphic2_pane_g4_ParamLimits

0xe10d,	// (0x0003d7f3) cell_graphic2_pane_g4

0xe11a,	// (0x0003d800) cell_graphic2_pane_g5_ParamLimits

0xe11a,	// (0x0003d800) cell_graphic2_pane_g5

0x0004,

0xfd9b,	// (0x0003f481) cell_graphic2_pane_g_ParamLimits

0xfd9b,	// (0x0003f481) cell_graphic2_pane_g

0xe132,	// (0x0003d818) cell_graphic2_pane_t1_ParamLimits

0xe132,	// (0x0003d818) cell_graphic2_pane_t1

0x9933,	// (0x00039019) grid_highlight_pane_cp11_ParamLimits

0x9933,	// (0x00039019) grid_highlight_pane_cp11

0x231f,	// (0x00031a05) bg_button_pane_cp05

0xe168,	// (0x0003d84e) cell_graphic2_control_pane_g1

0xbefc,	// (0x0003b5e2) bg_touch_area_indi_pane_g1

0xe190,	// (0x0003d876) aid_cmod_rocker_key_size

0xe19a,	// (0x0003d880) aid_cmode_itu_key_size

0xe1a4,	// (0x0003d88a) main_cmode_video_pane

0xe1ae,	// (0x0003d894) main_comp_mode_itu_pane

0xe1ba,	// (0x0003d8a0) main_comp_mode_rocker_pane

0xe1c6,	// (0x0003d8ac) cell_cmode_rocker_pane_ParamLimits

0xe1c6,	// (0x0003d8ac) cell_cmode_rocker_pane

0xe1da,	// (0x0003d8c0) cell_cmode_itu_pane_ParamLimits

0xe1da,	// (0x0003d8c0) cell_cmode_itu_pane

0x282e,	// (0x00031f14) bg_button_pane_cp06_ParamLimits

0x282e,	// (0x00031f14) bg_button_pane_cp06

0xc177,	// (0x0003b85d) cell_cmode_rocker_pane_g1_ParamLimits

0xc177,	// (0x0003b85d) cell_cmode_rocker_pane_g1

0xd717,	// (0x0003cdfd) cell_cmode_rocker_pane_g2_ParamLimits

0xd717,	// (0x0003cdfd) cell_cmode_rocker_pane_g2

0x0001,

0xfdab,	// (0x0003f491) cell_cmode_rocker_pane_g_ParamLimits

0xfdab,	// (0x0003f491) cell_cmode_rocker_pane_g

0xf013,	// (0x0003e6f9) bg_button_pane_cp07

0xe1f1,	// (0x0003d8d7) cell_cmode_itu_pane_g1

0xe1fa,	// (0x0003d8e0) cell_cmode_itu_pane_t1

0xe208,	// (0x0003d8ee) cell_cmode_itu_pane_t2

0x0001,

0xfdb0,	// (0x0003f496) cell_cmode_itu_pane_t

0xd946,	// (0x0003d02c) aid_touch_ctrl_left

0xd94e,	// (0x0003d034) aid_touch_ctrl_right

0xf013,	// (0x0003e6f9) compa_mode_pane

0xe216,	// (0x0003d8fc) aid_cmod_rocker_key_size_cp

0xe220,	// (0x0003d906) aid_cmode_itu_key_size_cp

0xe22a,	// (0x0003d910) compa_mode_pane_g1

0xe232,	// (0x0003d918) compa_mode_pane_g2

0xe23a,	// (0x0003d920) compa_mode_pane_g3

0x0002,

0xfdb5,	// (0x0003f49b) compa_mode_pane_g

0xe242,	// (0x0003d928) main_comp_mode_itu_pane_cp

0xe24a,	// (0x0003d930) main_comp_mode_rocker_pane_cp

0xe252,	// (0x0003d938) cell_cmode_itu_pane_cp_ParamLimits

0xe252,	// (0x0003d938) cell_cmode_itu_pane_cp

0xe267,	// (0x0003d94d) cell_cmode_rocker_pane_cp_ParamLimits

0xe267,	// (0x0003d94d) cell_cmode_rocker_pane_cp

0x282e,	// (0x00031f14) bg_button_pane_cp06_cp_ParamLimits

0x282e,	// (0x00031f14) bg_button_pane_cp06_cp

0xc177,	// (0x0003b85d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc177,	// (0x0003b85d) cell_cmode_rocker_pane_g1_cp

0xbefc,	// (0x0003b5e2) cell_cmode_rocker_pane_g2_cp

0xf013,	// (0x0003e6f9) bg_button_pane_cp07_cp

0xe279,	// (0x0003d95f) cell_cmode_itu_pane_g1_cp

0xe282,	// (0x0003d968) cell_cmode_itu_pane_t1_cp

0xe282,	// (0x0003d968) cell_cmode_itu_pane_t2_cp

0xadfa,	// (0x0003a4e0) settings_code_pane_cp2

0xf4dd,	// (0x0003ebc3) bg_popup_window_pane_cp3_ParamLimits

0x2533,	// (0x00031c19) heading_pane_cp3_ParamLimits

0x2542,	// (0x00031c28) listscroll_popup_graphic_pane_ParamLimits

0x76fe,	// (0x00036de4) fep_hwr_aid_pane_ParamLimits

0x7cee,	// (0x000373d4) aid_touch_sctrl_top_ParamLimits

0x7d09,	// (0x000373ef) sctrl_sk_top_pane_g1_ParamLimits

0x796b,	// (0x00037051) sctrl_sk_top_pane_g2_ParamLimits

0xfceb,	// (0x0003f3d1) sctrl_sk_top_pane_g_ParamLimits

0x7d16,	// (0x000373fc) sctrl_sk_top_pane_t1_ParamLimits

0x7cee,	// (0x000373d4) aid_touch_sctrl_bottom_ParamLimits

0x7d16,	// (0x000373fc) sctrl_sk_bottom_pane_t1_ParamLimits

0xd88b,	// (0x0003cf71) aid_area_touch_clock

0x7f09,	// (0x000375ef) aid_vkb2_area_top_pane_cell_ParamLimits

0x7f09,	// (0x000375ef) aid_vkb2_area_top_pane_cell

0x8058,	// (0x0003773e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8058,	// (0x0003773e) aid_vkb2_area_bottom_pane_cell

0xddf8,	// (0x0003d4de) popup_char_count_window

0xe290,	// (0x0003d976) popup_char_count_window_g1

0xe299,	// (0x0003d97f) popup_char_count_window_g2

0xe2a2,	// (0x0003d988) popup_char_count_window_g3

0x0002,

0xfdbc,	// (0x0003f4a2) popup_char_count_window_g

0xe2ab,	// (0x0003d991) popup_char_count_window_t1

0x7dbf,	// (0x000374a5) popup_fep_char_preview_window_ParamLimits

0x7dbf,	// (0x000374a5) popup_fep_char_preview_window

0x7f27,	// (0x0003760d) vkb2_top_candi_pane_ParamLimits

0x7f27,	// (0x0003760d) vkb2_top_candi_pane

0xe2b9,	// (0x0003d99f) cell_vkb2_top_candi_pane_ParamLimits

0xe2b9,	// (0x0003d99f) cell_vkb2_top_candi_pane

0x8343,	// (0x00037a29) bg_popup_fep_char_preview_window_ParamLimits

0x8343,	// (0x00037a29) bg_popup_fep_char_preview_window

0x8351,	// (0x00037a37) popup_fep_char_preview_window_t1_ParamLimits

0x8351,	// (0x00037a37) popup_fep_char_preview_window_t1

0xe307,	// (0x0003d9ed) bg_popup_fep_char_preview_window_g1

0xe30f,	// (0x0003d9f5) bg_popup_fep_char_preview_window_g2

0xe317,	// (0x0003d9fd) bg_popup_fep_char_preview_window_g3

0xe31f,	// (0x0003da05) bg_popup_fep_char_preview_window_g4

0xe327,	// (0x0003da0d) bg_popup_fep_char_preview_window_g5

0xe32f,	// (0x0003da15) bg_popup_fep_char_preview_window_g6

0xe337,	// (0x0003da1d) bg_popup_fep_char_preview_window_g7

0xe33f,	// (0x0003da25) bg_popup_fep_char_preview_window_g8

0xe347,	// (0x0003da2d) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc3,	// (0x0003f4a9) bg_popup_fep_char_preview_window_g

0x796b,	// (0x00037051) cell_vkb2_top_candi_pane_g1_ParamLimits

0x796b,	// (0x00037051) cell_vkb2_top_candi_pane_g1

0x7979,	// (0x0003705f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7979,	// (0x0003705f) cell_vkb2_top_candi_pane_g2

0xd6a0,	// (0x0003cd86) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd6a0,	// (0x0003cd86) cell_vkb2_top_candi_pane_g3

0x8393,	// (0x00037a79) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8393,	// (0x00037a79) cell_vkb2_top_candi_pane_g4

0xc696,	// (0x0003bd7c) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc696,	// (0x0003bd7c) cell_vkb2_top_candi_pane_g5

0x83b4,	// (0x00037a9a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x83b4,	// (0x00037a9a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd8,	// (0x0003f4be) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd8,	// (0x0003f4be) cell_vkb2_top_candi_pane_g

0x83c2,	// (0x00037aa8) cell_vkb2_top_candi_pane_t1

0x7476,	// (0x00036b5c) aid_size_touch_slider_mark_ParamLimits

0x7476,	// (0x00036b5c) aid_size_touch_slider_mark

0xdf3b,	// (0x0003d621) grid_graphic2_catg_pane_ParamLimits

0xdf3b,	// (0x0003d621) grid_graphic2_catg_pane

0xdfd9,	// (0x0003d6bf) popup_grid_graphic2_window_t1_ParamLimits

0xdfd9,	// (0x0003d6bf) popup_grid_graphic2_window_t1

0xdfeb,	// (0x0003d6d1) popup_grid_graphic2_window_t2_ParamLimits

0xdfeb,	// (0x0003d6d1) popup_grid_graphic2_window_t2

0x0001,

0xfd91,	// (0x0003f477) popup_grid_graphic2_window_t_ParamLimits

0xfd91,	// (0x0003f477) popup_grid_graphic2_window_t

0x231f,	// (0x00031a05) bg_button_pane_cp05_ParamLimits

0xe168,	// (0x0003d84e) cell_graphic2_control_pane_g1_ParamLimits

0xe34f,	// (0x0003da35) cell_graphic2_catg_pane_ParamLimits

0xe34f,	// (0x0003da35) cell_graphic2_catg_pane

0xf013,	// (0x0003e6f9) bg_button_pane_cp12

0xe361,	// (0x0003da47) cell_graphic2_catg_pane_g1

0xd855,	// (0x0003cf3b) cell_tb_ext_pane_t1_ParamLimits

0x8175,	// (0x0003785b) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8175,	// (0x0003785b) vkb2_top_cell_right_narrow_pane

0x818d,	// (0x00037873) vkb2_top_cell_right_wide_pane_ParamLimits

0x818d,	// (0x00037873) vkb2_top_cell_right_wide_pane

0x76f0,	// (0x00036dd6) bg_vkb2_func_pane_ParamLimits

0x76f0,	// (0x00036dd6) bg_vkb2_func_pane

0x81fe,	// (0x000378e4) vkb2_top_cell_left_pane_g1_ParamLimits

0x76f0,	// (0x00036dd6) bg_vkb2_fuc_pane_cp03_ParamLimits

0x76f0,	// (0x00036dd6) bg_vkb2_fuc_pane_cp03

0x825c,	// (0x00037942) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x98c7,	// (0x00038fad) bg_vkb2_func_pane_g1

0x98cf,	// (0x00038fb5) bg_vkb2_func_pane_g2

0x98df,	// (0x00038fc5) bg_vkb2_func_pane_g3

0x98d7,	// (0x00038fbd) bg_vkb2_func_pane_g4

0x98e7,	// (0x00038fcd) bg_vkb2_func_pane_g5

0x98ef,	// (0x00038fd5) bg_vkb2_func_pane_g6

0x98f7,	// (0x00038fdd) bg_vkb2_func_pane_g7

0x98ff,	// (0x00038fe5) bg_vkb2_func_pane_g8

0x98bf,	// (0x00038fa5) bg_vkb2_func_pane_g9

0x0008,

0xfde5,	// (0x0003f4cb) bg_vkb2_func_pane_g

0x76f0,	// (0x00036dd6) bg_vkb2_fuc_pane_cp01_ParamLimits

0x76f0,	// (0x00036dd6) bg_vkb2_fuc_pane_cp01

0x81fe,	// (0x000378e4) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x81fe,	// (0x000378e4) vkb2_top_cell_right_wide_pane_g1

0x76f0,	// (0x00036dd6) bg_vkb2_fuc_pane_cp02_ParamLimits

0x76f0,	// (0x00036dd6) bg_vkb2_fuc_pane_cp02

0x83e0,	// (0x00037ac6) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x83e0,	// (0x00037ac6) vkb2_top_cell_right_narrow_pane_g1

0xd44b,	// (0x0003cb31) aid_touch_area_decrease_ParamLimits

0xd44b,	// (0x0003cb31) aid_touch_area_decrease

0xd46f,	// (0x0003cb55) aid_touch_area_increase_ParamLimits

0xd46f,	// (0x0003cb55) aid_touch_area_increase

0xd487,	// (0x0003cb6d) aid_touch_area_mute_ParamLimits

0xd487,	// (0x0003cb6d) aid_touch_area_mute

0xd4a3,	// (0x0003cb89) aid_touch_area_slider_ParamLimits

0xd4a3,	// (0x0003cb89) aid_touch_area_slider

0xd591,	// (0x0003cc77) popup_slider_window_g4_ParamLimits

0xd591,	// (0x0003cc77) popup_slider_window_g4

0xd5a9,	// (0x0003cc8f) popup_slider_window_g5_ParamLimits

0xd5a9,	// (0x0003cc8f) popup_slider_window_g5

0xd5cb,	// (0x0003ccb1) popup_slider_window_g6_ParamLimits

0xd5cb,	// (0x0003ccb1) popup_slider_window_g6

0xd609,	// (0x0003ccef) popup_slider_window_t2_ParamLimits

0xd609,	// (0x0003ccef) popup_slider_window_t2

0x0001,

0xfcdf,	// (0x0003f3c5) popup_slider_window_t_ParamLimits

0xfcdf,	// (0x0003f3c5) popup_slider_window_t

0xd621,	// (0x0003cd07) slider_pane_ParamLimits

0xd621,	// (0x0003cd07) slider_pane

0xe36a,	// (0x0003da50) slider_pane_g1_ParamLimits

0xe36a,	// (0x0003da50) slider_pane_g1

0xe37e,	// (0x0003da64) slider_pane_g2_ParamLimits

0xe37e,	// (0x0003da64) slider_pane_g2

0xe394,	// (0x0003da7a) slider_pane_g3_ParamLimits

0xe394,	// (0x0003da7a) slider_pane_g3

0x0003,

0xfdf8,	// (0x0003f4de) slider_pane_g_ParamLimits

0xfdf8,	// (0x0003f4de) slider_pane_g

0x7020,	// (0x00036706) popup_tb_float_extension_window_ParamLimits

0x7020,	// (0x00036706) popup_tb_float_extension_window

0xe3c0,	// (0x0003daa6) aid_size_cell_tb_float_ext

0xf013,	// (0x0003e6f9) bg_popup_sub_window_cp28

0xe3cc,	// (0x0003dab2) grid_tb_float_ext_pane

0xe3d8,	// (0x0003dabe) cell_tb_float_ext_pane_ParamLimits

0xe3d8,	// (0x0003dabe) cell_tb_float_ext_pane

0xe3f4,	// (0x0003dada) cell_tb_float_ext_pane_g1

0xe3fd,	// (0x0003dae3) grid_highlight_pane_cp12

0x7845,	// (0x00036f2b) cell_last_hwr_side_pane_ParamLimits

0x7845,	// (0x00036f2b) cell_last_hwr_side_pane

0xbefc,	// (0x0003b5e2) cell_last_hwr_side_pane_g1

0xe406,	// (0x0003daec) cell_last_hwr_side_pane_g2

0x0001,

0xfe01,	// (0x0003f4e7) cell_last_hwr_side_pane_g

0x8124,	// (0x0003780a) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8124,	// (0x0003780a) vkb2_area_bottom_space_btn_pane

0x796b,	// (0x00037051) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdead,	// (0x0003d593) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x83c2,	// (0x00037aa8) cell_vkb2_top_candi_pane_t1_ParamLimits

0x83fc,	// (0x00037ae2) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x83fc,	// (0x00037ae2) vkb2_area_bottom_space_btn_pane_g1

0x8436,	// (0x00037b1c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8436,	// (0x00037b1c) vkb2_area_bottom_space_btn_pane_g2

0x846c,	// (0x00037b52) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x846c,	// (0x00037b52) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe06,	// (0x0003f4ec) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe06,	// (0x0003f4ec) vkb2_area_bottom_space_btn_pane_g

0x77b5,	// (0x00036e9b) cel_fep_hwr_func_pane_ParamLimits

0x77b5,	// (0x00036e9b) cel_fep_hwr_func_pane

0x77f1,	// (0x00036ed7) cell_hwr_side_button_pane_ParamLimits

0x77f1,	// (0x00036ed7) cell_hwr_side_button_pane

0xd88b,	// (0x0003cf71) aid_area_touch_clock_ParamLimits

0x231f,	// (0x00031a05) bg_uniindi_top_pane_ParamLimits

0xd89f,	// (0x0003cf85) uniindi_top_pane_g1_ParamLimits

0xd8b5,	// (0x0003cf9b) uniindi_top_pane_g2_ParamLimits

0xd8c1,	// (0x0003cfa7) uniindi_top_pane_g3_ParamLimits

0xd8d2,	// (0x0003cfb8) uniindi_top_pane_g4_ParamLimits

0xfd17,	// (0x0003f3fd) uniindi_top_pane_g_ParamLimits

0xd8df,	// (0x0003cfc5) uniindi_top_pane_t1_ParamLimits

0x231f,	// (0x00031a05) bg_vkb2_func_pane_cp01_ParamLimits

0x231f,	// (0x00031a05) bg_vkb2_func_pane_cp01

0xe40f,	// (0x0003daf5) cel_fep_hwr_func_pane_g1_ParamLimits

0xe40f,	// (0x0003daf5) cel_fep_hwr_func_pane_g1

0x231f,	// (0x00031a05) bg_vkb2_func_pane_cp02_ParamLimits

0x231f,	// (0x00031a05) bg_vkb2_func_pane_cp02

0xe40f,	// (0x0003daf5) cell_hwr_side_button_pane_g1_ParamLimits

0xe40f,	// (0x0003daf5) cell_hwr_side_button_pane_g1

0x9746,	// (0x00038e2c) status_pane_g4_ParamLimits

0x9746,	// (0x00038e2c) status_pane_g4

0x9760,	// (0x00038e46) status_pane_t1

0xbcb6,	// (0x0003b39c) form2_midp_gauge_slider_cont_pane

0xbcbe,	// (0x0003b3a4) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbcd0,	// (0x0003b3b6) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbce2,	// (0x0003b3c8) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad7,	// (0x0003f1bd) form2_midp_gauge_slider_pane_t_ParamLimits

0xbcf4,	// (0x0003b3da) form2_midp_slider_pane_ParamLimits

0x7d87,	// (0x0003746d) aid_size_cell_func_vkb2_ParamLimits

0x7d87,	// (0x0003746d) aid_size_cell_func_vkb2

0xe3ac,	// (0x0003da92) slider_pane_g4_ParamLimits

0xe3ac,	// (0x0003da92) slider_pane_g4

0x84b6,	// (0x00037b9c) form2_midp_gauge_slider_pane_t2_cp01

0x84c4,	// (0x00037baa) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x84c4,	// (0x00037baa) form2_midp_gauge_slider_pane_t3_cp01

0x84e1,	// (0x00037bc7) form2_midp_slider_pane_cp01

0xf013,	// (0x0003e6f9) navi_smil_pane

0xe448,	// (0x0003db2e) navi_smil_pane_g1

0xe450,	// (0x0003db36) navi_smil_pane_t1

0xe41d,	// (0x0003db03) form2_midp_slider_pane_g1

0xe426,	// (0x0003db0c) form2_midp_slider_pane_g2

0xe42e,	// (0x0003db14) form2_midp_slider_pane_g3

0xe41d,	// (0x0003db03) form2_midp_slider_pane_g4

0xe436,	// (0x0003db1c) form2_midp_slider_pane_g5

0x0004,

0xfe0f,	// (0x0003f4f5) form2_midp_slider_pane_g

0x84a6,	// (0x00037b8c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x84a6,	// (0x00037b8c) vkb2_area_bottom_space_btn_pane_g4

0x9567,	// (0x00038c4d) lc0_navi_pane_ParamLimits

0x9567,	// (0x00038c4d) lc0_navi_pane

0x95e3,	// (0x00038cc9) lc0_stat_indi_pane_ParamLimits

0x95e3,	// (0x00038cc9) lc0_stat_indi_pane

0x95fa,	// (0x00038ce0) ls0_title_pane_ParamLimits

0x95fa,	// (0x00038ce0) ls0_title_pane

0x282e,	// (0x00031f14) bg_popup_sub_pane_cp14_ParamLimits

0xd872,	// (0x0003cf58) list_uniindi_pane_ParamLimits

0xd87e,	// (0x0003cf64) uniindi_top_pane_ParamLimits

0xd91e,	// (0x0003d004) list_single_uniindi_pane_g1_ParamLimits

0xd931,	// (0x0003d017) list_single_uniindi_pane_t1_ParamLimits

0x84ea,	// (0x00037bd0) lc0_stat_clock_pane_ParamLimits

0x84ea,	// (0x00037bd0) lc0_stat_clock_pane

0xe45e,	// (0x0003db44) lc0_stat_indi_pane_g1_ParamLimits

0xe45e,	// (0x0003db44) lc0_stat_indi_pane_g1

0xe46b,	// (0x0003db51) lc0_stat_indi_pane_g2_ParamLimits

0xe46b,	// (0x0003db51) lc0_stat_indi_pane_g2

0x0001,

0xfe1a,	// (0x0003f500) lc0_stat_indi_pane_g_ParamLimits

0xfe1a,	// (0x0003f500) lc0_stat_indi_pane_g

0x84f7,	// (0x00037bdd) lc0_uni_indicator_pane_ParamLimits

0x84f7,	// (0x00037bdd) lc0_uni_indicator_pane

0xe478,	// (0x0003db5e) ls0_title_pane_g1_ParamLimits

0xe478,	// (0x0003db5e) ls0_title_pane_g1

0xe48c,	// (0x0003db72) ls0_title_pane_t1_ParamLimits

0xe48c,	// (0x0003db72) ls0_title_pane_t1

0x8504,	// (0x00037bea) lc0_uni_indicator_pane_g1_ParamLimits

0x8504,	// (0x00037bea) lc0_uni_indicator_pane_g1

0xe4c2,	// (0x0003dba8) lc0_stat_clock_pane_t1

0x52bf,	// (0x000349a5) main_ai5_pane

0xe4d8,	// (0x0003dbbe) ai5_sk_pane_ParamLimits

0xe4d8,	// (0x0003dbbe) ai5_sk_pane

0xe4e5,	// (0x0003dbcb) cell_ai5_widget_pane_ParamLimits

0xe4e5,	// (0x0003dbcb) cell_ai5_widget_pane

0xe584,	// (0x0003dc6a) aid_size_cell_widget_grid

0xe592,	// (0x0003dc78) bg_ai5_widget_pane_ParamLimits

0xe592,	// (0x0003dc78) bg_ai5_widget_pane

0xe610,	// (0x0003dcf6) cell_ai5_widget_pane_g2

0xe624,	// (0x0003dd0a) cell_ai5_widget_pane_g3

0xe63e,	// (0x0003dd24) cell_ai5_widget_pane_g4

0xe64e,	// (0x0003dd34) cell_ai5_widget_pane_g5

0xe65e,	// (0x0003dd44) cell_ai5_widget_pane_g6

0xe66b,	// (0x0003dd51) cell_ai5_widget_pane_g7

0xe6d7,	// (0x0003ddbd) cell_ai5_widget_pane_t1_ParamLimits

0xe6d7,	// (0x0003ddbd) cell_ai5_widget_pane_t1

0xe6f4,	// (0x0003ddda) cell_ai5_widget_pane_t2_ParamLimits

0xe6f4,	// (0x0003ddda) cell_ai5_widget_pane_t2

0xe70c,	// (0x0003ddf2) cell_ai5_widget_pane_t3_ParamLimits

0xe70c,	// (0x0003ddf2) cell_ai5_widget_pane_t3

0xe724,	// (0x0003de0a) cell_ai5_widget_pane_t4_ParamLimits

0xe724,	// (0x0003de0a) cell_ai5_widget_pane_t4

0xe74a,	// (0x0003de30) cell_ai5_widget_pane_t5_ParamLimits

0xe74a,	// (0x0003de30) cell_ai5_widget_pane_t5

0xe76a,	// (0x0003de50) cell_ai5_widget_pane_t6_ParamLimits

0xe76a,	// (0x0003de50) cell_ai5_widget_pane_t6

0xe77c,	// (0x0003de62) cell_ai5_widget_pane_t7_ParamLimits

0xe77c,	// (0x0003de62) cell_ai5_widget_pane_t7

0xe79b,	// (0x0003de81) cell_ai5_widget_pane_t8_ParamLimits

0xe79b,	// (0x0003de81) cell_ai5_widget_pane_t8

0x000b,

0xfe3a,	// (0x0003f520) cell_ai5_widget_pane_t_ParamLimits

0xfe3a,	// (0x0003f520) cell_ai5_widget_pane_t

0xe81f,	// (0x0003df05) grid_ai5_widget_pane

0x282e,	// (0x00031f14) highlight_cell_ai5_widget_pane_ParamLimits

0x282e,	// (0x00031f14) highlight_cell_ai5_widget_pane

0xe833,	// (0x0003df19) ai5_sk_left_pane

0xe83d,	// (0x0003df23) ai5_sk_middle_pane

0xe847,	// (0x0003df2d) ai5_sk_right_pane

0xe851,	// (0x0003df37) bg_ai5_widget_pane_g1_ParamLimits

0xe851,	// (0x0003df37) bg_ai5_widget_pane_g1

0xe85d,	// (0x0003df43) bg_ai5_widget_pane_g2_ParamLimits

0xe85d,	// (0x0003df43) bg_ai5_widget_pane_g2

0xe869,	// (0x0003df4f) bg_ai5_widget_pane_g3_ParamLimits

0xe869,	// (0x0003df4f) bg_ai5_widget_pane_g3

0xe875,	// (0x0003df5b) bg_ai5_widget_pane_g4_ParamLimits

0xe875,	// (0x0003df5b) bg_ai5_widget_pane_g4

0xe881,	// (0x0003df67) bg_ai5_widget_pane_g5_ParamLimits

0xe881,	// (0x0003df67) bg_ai5_widget_pane_g5

0xe88d,	// (0x0003df73) bg_ai5_widget_pane_g6_ParamLimits

0xe88d,	// (0x0003df73) bg_ai5_widget_pane_g6

0xe899,	// (0x0003df7f) bg_ai5_widget_pane_g7_ParamLimits

0xe899,	// (0x0003df7f) bg_ai5_widget_pane_g7

0xe8a5,	// (0x0003df8b) bg_ai5_widget_pane_g8_ParamLimits

0xe8a5,	// (0x0003df8b) bg_ai5_widget_pane_g8

0xe8b1,	// (0x0003df97) bg_ai5_widget_pane_g9_ParamLimits

0xe8b1,	// (0x0003df97) bg_ai5_widget_pane_g9

0x0008,

0xfe53,	// (0x0003f539) bg_ai5_widget_pane_g_ParamLimits

0xfe53,	// (0x0003f539) bg_ai5_widget_pane_g

0xe8e9,	// (0x0003dfcf) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8e9,	// (0x0003dfcf) cell_shortcut_ai5_widget_pane

0x9060,	// (0x00038746) bg_cell_shortcut_ai5_widget_pane

0xe8fc,	// (0x0003dfe2) cell_grid_ai5_widget_pane_g1

0x9060,	// (0x00038746) highlight_cell_shortcut_ai5_widget_pane

0x98c7,	// (0x00038fad) ai5_sk_left_pane_g1

0xe905,	// (0x0003dfeb) ai5_sk_left_pane_g2

0xe90d,	// (0x0003dff3) ai5_sk_left_pane_g3

0xe915,	// (0x0003dffb) ai5_sk_left_pane_g4

0x0003,

0xfe66,	// (0x0003f54c) ai5_sk_left_pane_g

0xe91d,	// (0x0003e003) ai5_sk_left_pane_t1

0x98cf,	// (0x00038fb5) ai5_sk_right_pane_g1

0xe92b,	// (0x0003e011) ai5_sk_right_pane_g2

0xe933,	// (0x0003e019) ai5_sk_right_pane_g3

0xe93b,	// (0x0003e021) ai5_sk_right_pane_g4

0x0003,

0xfe6f,	// (0x0003f555) ai5_sk_right_pane_g

0xe943,	// (0x0003e029) ai5_sk_right_pane_t1

0x98cf,	// (0x00038fb5) ai5_sk_middle_pane_g1

0x98c7,	// (0x00038fad) ai5_sk_middle_pane_g2

0x98e7,	// (0x00038fcd) ai5_sk_middle_pane_g3

0xe933,	// (0x0003e019) ai5_sk_middle_pane_g4

0xe90d,	// (0x0003dff3) ai5_sk_middle_pane_g5

0xe951,	// (0x0003e037) ai5_sk_middle_pane_g6

0xe959,	// (0x0003e03f) ai5_sk_middle_pane_g7

0x0006,

0xfe78,	// (0x0003f55e) ai5_sk_middle_pane_g

0x93ef,	// (0x00038ad5) aid_touch_area_size_lc0_ParamLimits

0x93ef,	// (0x00038ad5) aid_touch_area_size_lc0

0x799a,	// (0x00037080) cell_hwr_candidate_pane_t1_ParamLimits

0x940d,	// (0x00038af3) aid_touch_navi_pane

0x96f8,	// (0x00038dde) status_dt_navi_pane_ParamLimits

0x96f8,	// (0x00038dde) status_dt_navi_pane

0x9705,	// (0x00038deb) status_dt_sta_pane_ParamLimits

0x9705,	// (0x00038deb) status_dt_sta_pane

0xe961,	// (0x0003e047) dt_sta_controll_pane

0xe96e,	// (0x0003e054) dt_sta_indi_pane

0xe97f,	// (0x0003e065) dt_sta_title_pane

0x231f,	// (0x00031a05) bg_dt_sta_indi_pane_ParamLimits

0x231f,	// (0x00031a05) bg_dt_sta_indi_pane

0xe992,	// (0x0003e078) dt_sta_battery_pane

0xe99a,	// (0x0003e080) dt_sta_indi_pane_g1

0xe9a3,	// (0x0003e089) dt_sta_indi_pane_g2

0xe9ac,	// (0x0003e092) dt_sta_indi_pane_g3

0x0002,

0xfe87,	// (0x0003f56d) dt_sta_indi_pane_g

0xe9b5,	// (0x0003e09b) dt_sta_signal_pane

0x282e,	// (0x00031f14) bg_dt_sta_title_pane_ParamLimits

0x282e,	// (0x00031f14) bg_dt_sta_title_pane

0xe9be,	// (0x0003e0a4) dt_sta_title_pane_g1

0xe9c6,	// (0x0003e0ac) dt_sta_title_pane_t1_ParamLimits

0xe9c6,	// (0x0003e0ac) dt_sta_title_pane_t1

0xf013,	// (0x0003e6f9) bg_dt_sta_control_pane

0xe9db,	// (0x0003e0c1) dt_sta_controll_pane_g1

0xe9e4,	// (0x0003e0ca) bg_dt_sta_title_pane_g1

0xe9ed,	// (0x0003e0d3) bg_dt_sta_title_pane_g2

0xe9f6,	// (0x0003e0dc) bg_dt_sta_title_pane_g3

0x0002,

0xfe8e,	// (0x0003f574) bg_dt_sta_title_pane_g

0xbefc,	// (0x0003b5e2) bg_dt_sta_indi_pane_g1

0xe9ff,	// (0x0003e0e5) dt_sta_signal_pane_g1

0xea07,	// (0x0003e0ed) dt_sta_signal_pane_g2

0x0001,

0xfe95,	// (0x0003f57b) dt_sta_signal_pane_g

0xea0f,	// (0x0003e0f5) dt_sta_battery_pane_g1

0xea18,	// (0x0003e0fe) dt_sta_battery_pane_t1

0xbefc,	// (0x0003b5e2) bg_dt_sta_control_pane_g1

0x8b4e,	// (0x00038234) fep_china_uni_eep_pane

0x8b56,	// (0x0003823c) fep_china_uni_entry_pane_ParamLimits

0x8b66,	// (0x0003824c) popup_fep_china_uni_window_g1_ParamLimits

0x8b76,	// (0x0003825c) popup_fep_china_uni_window_g2_ParamLimits

0x8b76,	// (0x0003825c) popup_fep_china_uni_window_g2

0x0001,

0xf6f6,	// (0x0003eddc) popup_fep_china_uni_window_g_ParamLimits

0xf6f6,	// (0x0003eddc) popup_fep_china_uni_window_g

0xea27,	// (0x0003e10d) fep_china_uni_eep_pane_g1

0xea2f,	// (0x0003e115) fep_china_uni_eep_pane_t1

0xe43f,	// (0x0003db25) aid_touch_area_size_smil_player

0x955f,	// (0x00038c45) lc0_clock_pane

0x9754,	// (0x00038e3a) status_pane_g5_ParamLimits

0x9754,	// (0x00038e3a) status_pane_g5

0x6ca5,	// (0x0003638b) popup_keymap_window

0x971a,	// (0x00038e00) status_icon_pane

0xe624,	// (0x0003dd0a) cell_ai5_widget_pane_g3_ParamLimits

0xe63e,	// (0x0003dd24) cell_ai5_widget_pane_g4_ParamLimits

0xe64e,	// (0x0003dd34) cell_ai5_widget_pane_g5_ParamLimits

0xe677,	// (0x0003dd5d) cell_ai5_widget_pane_g8_ParamLimits

0xe677,	// (0x0003dd5d) cell_ai5_widget_pane_g8

0xe68b,	// (0x0003dd71) cell_ai5_widget_pane_g9_ParamLimits

0xe68b,	// (0x0003dd71) cell_ai5_widget_pane_g9

0xe69f,	// (0x0003dd85) cell_ai5_widget_pane_g10_ParamLimits

0xe69f,	// (0x0003dd85) cell_ai5_widget_pane_g10

0xea3e,	// (0x0003e124) status_icon_pane_g1

0xf013,	// (0x0003e6f9) bg_popup_sub_pane_cp13

0xea46,	// (0x0003e12c) popup_keymap_window_t1

0x9338,	// (0x00038a1e) control_pane_g6_ParamLimits

0x9338,	// (0x00038a1e) control_pane_g6

0x9345,	// (0x00038a2b) control_pane_g7_ParamLimits

0x9345,	// (0x00038a2b) control_pane_g7

0x9352,	// (0x00038a38) control_pane_g8_ParamLimits

0x9352,	// (0x00038a38) control_pane_g8

0xe961,	// (0x0003e047) dt_sta_controll_pane_ParamLimits

0xe96e,	// (0x0003e054) dt_sta_indi_pane_ParamLimits

0xe97f,	// (0x0003e065) dt_sta_title_pane_ParamLimits

0x2770,	// (0x00031e56) aid_size_touch_scroll_bar_cale

0x539c,	// (0x00034a82) popup_discreet_window_ParamLimits

0x539c,	// (0x00034a82) popup_discreet_window

0x542a,	// (0x00034b10) popup_sk_window

0x9f25,	// (0x0003960b) bg_popup_sub_pane_cp28_ParamLimits

0x9f25,	// (0x0003960b) bg_popup_sub_pane_cp28

0xea54,	// (0x0003e13a) popup_discreet_window_g1_ParamLimits

0xea54,	// (0x0003e13a) popup_discreet_window_g1

0xea74,	// (0x0003e15a) popup_discreet_window_t1_ParamLimits

0xea74,	// (0x0003e15a) popup_discreet_window_t1

0xea92,	// (0x0003e178) popup_discreet_window_t2_ParamLimits

0xea92,	// (0x0003e178) popup_discreet_window_t2

0x0002,

0xfe9a,	// (0x0003f580) popup_discreet_window_t_ParamLimits

0xfe9a,	// (0x0003f580) popup_discreet_window_t

0x8517,	// (0x00037bfd) popup_sk_window_g1

0x8521,	// (0x00037c07) popup_sk_window_g2

0x0001,

0xfea1,	// (0x0003f587) popup_sk_window_g

0x8529,	// (0x00037c0f) popup_sk_window_t1

0x8537,	// (0x00037c1d) popup_sk_window_t1_copy1

0xe610,	// (0x0003dcf6) cell_ai5_widget_pane_g2_ParamLimits

0xe7ad,	// (0x0003de93) cell_ai5_widget_pane_t9_ParamLimits

0xe7ad,	// (0x0003de93) cell_ai5_widget_pane_t9

0xf013,	// (0x0003e6f9) main_fep_fshwr2_pane

0x8545,	// (0x00037c2b) aid_fshwr2_btn_pane

0x8555,	// (0x00037c3b) aid_fshwr2_syb_pane

0x8569,	// (0x00037c4f) aid_fshwr2_txt_pane

0x8579,	// (0x00037c5f) fshwr2_func_candi_pane

0x8599,	// (0x00037c7f) fshwr2_hwr_syb_pane

0x85af,	// (0x00037c95) fshwr2_icf_pane

0x52bf,	// (0x000349a5) fshwr2_icf_bg_pane

0x85e3,	// (0x00037cc9) fshwr2_icf_pane_t1_ParamLimits

0x85e3,	// (0x00037cc9) fshwr2_icf_pane_t1

0x8a27,	// (0x0003810d) fshwr2_func_candi_pane_g1

0xeae4,	// (0x0003e1ca) fshwr2_func_candi_row_pane_ParamLimits

0xeae4,	// (0x0003e1ca) fshwr2_func_candi_row_pane

0x85fb,	// (0x00037ce1) cell_fshwr2_syb_pane_ParamLimits

0x85fb,	// (0x00037ce1) cell_fshwr2_syb_pane

0x861c,	// (0x00037d02) fshwr2_hwr_syb_pane_g1_ParamLimits

0x861c,	// (0x00037d02) fshwr2_hwr_syb_pane_g1

0x52bf,	// (0x000349a5) bg_popup_call_pane_cp01

0x862a,	// (0x00037d10) fshwr2_func_candi_cell_pane_ParamLimits

0x862a,	// (0x00037d10) fshwr2_func_candi_cell_pane

0xa59c,	// (0x00039c82) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa59c,	// (0x00039c82) fshwr2_func_candi_cell_bg_pane

0x867b,	// (0x00037d61) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x867b,	// (0x00037d61) fshwr2_func_candi_cell_pane_g1

0x86a6,	// (0x00037d8c) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x86a6,	// (0x00037d8c) fshwr2_func_candi_cell_pane_t1

0x52bf,	// (0x000349a5) bg_button_pane_cp08

0x938f,	// (0x00038a75) cell_fshwr2_syb_bg_pane

0x86b9,	// (0x00037d9f) cell_fshwr2_syb_bg_pane_g1

0x86cd,	// (0x00037db3) cell_fshwr2_syb_bg_pane_t1

0x282e,	// (0x00031f14) main_tmo_pane

0xaa49,	// (0x0003a12f) uni_indicator_pane_g1_ParamLimits

0xaa5f,	// (0x0003a145) uni_indicator_pane_g2_ParamLimits

0xaa75,	// (0x0003a15b) uni_indicator_pane_g3_ParamLimits

0xaa88,	// (0x0003a16e) uni_indicator_pane_g4_ParamLimits

0xaa88,	// (0x0003a16e) uni_indicator_pane_g4

0xaa9c,	// (0x0003a182) uni_indicator_pane_g5_ParamLimits

0xaa9c,	// (0x0003a182) uni_indicator_pane_g5

0xaa9c,	// (0x0003a182) uni_indicator_pane_g6_ParamLimits

0xaa9c,	// (0x0003a182) uni_indicator_pane_g6

0xf8fa,	// (0x0003efe0) uni_indicator_pane_g_ParamLimits

0xd41b,	// (0x0003cb01) popup_tmo_note_window_ParamLimits

0xd41b,	// (0x0003cb01) popup_tmo_note_window

0x7d69,	// (0x0003744f) fshwr2_bg_pane

0x8697,	// (0x00037d7d) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8697,	// (0x00037d7d) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea6,	// (0x0003f58c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea6,	// (0x0003f58c) fshwr2_func_candi_cell_pane_g

0x7953,	// (0x00037039) bg_popup_window_pane_cp01

0x86e3,	// (0x00037dc9) bg_popup_window_pane_g1_cp01

0xeb07,	// (0x0003e1ed) bg_popup_window_pane_cp22_ParamLimits

0xeb07,	// (0x0003e1ed) bg_popup_window_pane_cp22

0xeb15,	// (0x0003e1fb) listscroll_tmo_link_pane_ParamLimits

0xeb15,	// (0x0003e1fb) listscroll_tmo_link_pane

0xeb55,	// (0x0003e23b) popup_tmo_note_window_g1_ParamLimits

0xeb55,	// (0x0003e23b) popup_tmo_note_window_g1

0xeb62,	// (0x0003e248) tmo_note_info_pane_ParamLimits

0xeb62,	// (0x0003e248) tmo_note_info_pane

0xeb7c,	// (0x0003e262) list_tmo_note_info_pane_g1_ParamLimits

0xeb7c,	// (0x0003e262) list_tmo_note_info_pane_g1

0xeb93,	// (0x0003e279) list_tmo_note_info_pane_g2_ParamLimits

0xeb93,	// (0x0003e279) list_tmo_note_info_pane_g2

0x0001,

0xfeab,	// (0x0003f591) list_tmo_note_info_pane_g_ParamLimits

0xfeab,	// (0x0003f591) list_tmo_note_info_pane_g

0xebaf,	// (0x0003e295) list_tmo_note_info_text_pane_ParamLimits

0xebaf,	// (0x0003e295) list_tmo_note_info_text_pane

0xec34,	// (0x0003e31a) list_tmo_link_pane

0xec41,	// (0x0003e327) scroll_pane_cp20

0xec4e,	// (0x0003e334) list_single_tmo_link_pane_ParamLimits

0xec4e,	// (0x0003e334) list_single_tmo_link_pane

0xec5e,	// (0x0003e344) list_single_tmo_link_pane_t1

0xec6c,	// (0x0003e352) list_tmo_note_info_text_pane_t1_ParamLimits

0xec6c,	// (0x0003e352) list_tmo_note_info_text_pane_t1

0x5ec7,	// (0x000355ad) aid_size_touch_scroll_bar_cp01_ParamLimits

0x5ec7,	// (0x000355ad) aid_size_touch_scroll_bar_cp01

0x5dd5,	// (0x000354bb) aid_size_touch_slider_marker

0x5412,	// (0x00034af8) popup_settings_window_ParamLimits

0x5412,	// (0x00034af8) popup_settings_window

0x3db1,	// (0x00033497) popup_candi_list_indi_window

0x940d,	// (0x00038af3) aid_touch_navi_pane_ParamLimits

0x7cc2,	// (0x000373a8) rs_clock_indi_pane

0x7ccb,	// (0x000373b1) sctrl_sk_bottom_pane_ParamLimits

0x7cdc,	// (0x000373c2) sctrl_sk_top_pane_ParamLimits

0x7dd9,	// (0x000374bf) popup_fep_tooltip_window

0xe584,	// (0x0003dc6a) aid_size_cell_widget_grid_ParamLimits

0xe5f9,	// (0x0003dcdf) cell_ai5_widget_pane_g1_ParamLimits

0xe5f9,	// (0x0003dcdf) cell_ai5_widget_pane_g1

0xe65e,	// (0x0003dd44) cell_ai5_widget_pane_g6_ParamLimits

0xe66b,	// (0x0003dd51) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1f,	// (0x0003f505) cell_ai5_widget_pane_g_ParamLimits

0xfe1f,	// (0x0003f505) cell_ai5_widget_pane_g

0xe7dc,	// (0x0003dec2) cell_ai5_widget_pane_t10_ParamLimits

0xe7dc,	// (0x0003dec2) cell_ai5_widget_pane_t10

0xe81f,	// (0x0003df05) grid_ai5_widget_pane_ParamLimits

0xe8bd,	// (0x0003dfa3) cell_contacts_ai5_widget_pane_ParamLimits

0xe8bd,	// (0x0003dfa3) cell_contacts_ai5_widget_pane

0xeaa7,	// (0x0003e18d) popup_discreet_window_t3_ParamLimits

0xeaa7,	// (0x0003e18d) popup_discreet_window_t3

0x85cb,	// (0x00037cb1) popup_fshwr2_char_preview_window_ParamLimits

0x85cb,	// (0x00037cb1) popup_fshwr2_char_preview_window

0xebcd,	// (0x0003e2b3) tmo_note_info_pane_t1

0xebe2,	// (0x0003e2c8) tmo_note_info_pane_t2

0xebfb,	// (0x0003e2e1) tmo_note_info_pane_t3

0xec10,	// (0x0003e2f6) tmo_note_info_pane_t4

0xec22,	// (0x0003e308) tmo_note_info_pane_t5

0x0004,

0xfeb0,	// (0x0003f596) tmo_note_info_pane_t

0xec34,	// (0x0003e31a) list_tmo_link_pane_ParamLimits

0xec41,	// (0x0003e327) scroll_pane_cp20_ParamLimits

0x52bf,	// (0x000349a5) bg_popup_fep_char_preview_window_cp01

0xec85,	// (0x0003e36b) popup_fshwr2_char_preview_window_t1

0xec93,	// (0x0003e379) popup_candi_list_indi_window_g1

0xec9c,	// (0x0003e382) bg_cell_contacts_ai5_widget_pane

0xeca8,	// (0x0003e38e) cell_contacts_ai5_widget_pane_g1

0xecbd,	// (0x0003e3a3) cell_contacts_ai5_widget_pane_g2

0xecc9,	// (0x0003e3af) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebb,	// (0x0003f5a1) cell_contacts_ai5_widget_pane_g

0xecd5,	// (0x0003e3bb) cell_contacts_ai5_widget_pane_t1

0x282e,	// (0x00031f14) highlight_cell_shortcut_ai5_widget_pane_cp01

0xed4c,	// (0x0003e432) settings_container_pane

0x9060,	// (0x00038746) listscroll_set_pane_copy1

0xb634,	// (0x0003ad1a) scroll_pane_cp121_copy1

0xed58,	// (0x0003e43e) set_content_pane_copy1

0xed60,	// (0x0003e446) aid_height_set_list_copy1_ParamLimits

0xed60,	// (0x0003e446) aid_height_set_list_copy1

0xac8c,	// (0x0003a372) aid_size_parent_copy1_ParamLimits

0xac8c,	// (0x0003a372) aid_size_parent_copy1

0xed6c,	// (0x0003e452) button_value_adjust_pane_cp6_copy1_ParamLimits

0xed6c,	// (0x0003e452) button_value_adjust_pane_cp6_copy1

0x938f,	// (0x00038a75) list_highlight_pane_cp2_copy1_ParamLimits

0x938f,	// (0x00038a75) list_highlight_pane_cp2_copy1

0xed80,	// (0x0003e466) list_set_pane_copy1_ParamLimits

0xed80,	// (0x0003e466) list_set_pane_copy1

0xece7,	// (0x0003e3cd) main_pane_set_t1_copy1_ParamLimits

0xece7,	// (0x0003e3cd) main_pane_set_t1_copy1

0xed21,	// (0x0003e407) main_pane_set_t2_copy1_ParamLimits

0xed21,	// (0x0003e407) main_pane_set_t2_copy1

0xee41,	// (0x0003e527) main_pane_set_t3_copy1

0xee4f,	// (0x0003e535) main_pane_set_t4_copy1

0xed40,	// (0x0003e426) set_content_pane_g1_copy1_ParamLimits

0xed40,	// (0x0003e426) set_content_pane_g1_copy1

0xee5d,	// (0x0003e543) setting_code_pane_copy1

0xee65,	// (0x0003e54b) setting_slider_graphic_pane_copy1

0xee65,	// (0x0003e54b) setting_slider_pane_copy1

0xee6d,	// (0x0003e553) setting_text_pane_copy1

0xee6d,	// (0x0003e553) setting_volume_pane_copy1

0xee5d,	// (0x0003e543) settings_code_pane_cp2_copy1

0xee75,	// (0x0003e55b) settings_code_pane_cp_copy1_ParamLimits

0xee75,	// (0x0003e55b) settings_code_pane_cp_copy1

0x86ec,	// (0x00037dd2) volume_set_pane_copy1

0xee89,	// (0x0003e56f) volume_set_pane_g10_copy1

0xee95,	// (0x0003e57b) volume_set_pane_g1_copy1

0xee9f,	// (0x0003e585) volume_set_pane_g2_copy1

0xeea9,	// (0x0003e58f) volume_set_pane_g3_copy1

0xeeb3,	// (0x0003e599) volume_set_pane_g4_copy1

0xeebd,	// (0x0003e5a3) volume_set_pane_g5_copy1

0xeec7,	// (0x0003e5ad) volume_set_pane_g6_copy1

0xeed1,	// (0x0003e5b7) volume_set_pane_g7_copy1

0xeedb,	// (0x0003e5c1) volume_set_pane_g8_copy1

0xeee5,	// (0x0003e5cb) volume_set_pane_g9_copy1

0xf4dd,	// (0x0003ebc3) bg_set_opt_pane_cp_copy1_ParamLimits

0xf4dd,	// (0x0003ebc3) bg_set_opt_pane_cp_copy1

0x86f8,	// (0x00037dde) setting_slider_pane_t1_copy1_ParamLimits

0x86f8,	// (0x00037dde) setting_slider_pane_t1_copy1

0x8717,	// (0x00037dfd) setting_slider_pane_t2_copy1_ParamLimits

0x8717,	// (0x00037dfd) setting_slider_pane_t2_copy1

0x8731,	// (0x00037e17) setting_slider_pane_t3_copy1_ParamLimits

0x8731,	// (0x00037e17) setting_slider_pane_t3_copy1

0x8749,	// (0x00037e2f) slider_set_pane_copy1_ParamLimits

0x8749,	// (0x00037e2f) slider_set_pane_copy1

0x2886,	// (0x00031f6c) set_opt_bg_pane_g1_copy2

0x288e,	// (0x00031f74) set_opt_bg_pane_g2_copy2

0xeef1,	// (0x0003e5d7) set_opt_bg_pane_g3_copy2

0x289e,	// (0x00031f84) set_opt_bg_pane_g4_copy2

0x28a6,	// (0x00031f8c) set_opt_bg_pane_g5_copy2

0x28ae,	// (0x00031f94) set_opt_bg_pane_g6_copy2

0xeefb,	// (0x0003e5e1) set_opt_bg_pane_g7_copy2

0xef05,	// (0x0003e5eb) set_opt_bg_pane_g8_copy2

0xef0f,	// (0x0003e5f5) set_opt_bg_pane_g9_copy2

0x875f,	// (0x00037e45) aid_size_touch_slider_mark_copy1_ParamLimits

0x875f,	// (0x00037e45) aid_size_touch_slider_mark_copy1

0xef19,	// (0x0003e5ff) slider_set_pane_g1_copy1

0x8773,	// (0x00037e59) slider_set_pane_g2_copy1

0x7496,	// (0x00036b7c) slider_set_pane_g3_copy1_ParamLimits

0x7496,	// (0x00036b7c) slider_set_pane_g3_copy1

0x74aa,	// (0x00036b90) slider_set_pane_g4_copy1_ParamLimits

0x74aa,	// (0x00036b90) slider_set_pane_g4_copy1

0x74c2,	// (0x00036ba8) slider_set_pane_g5_copy1_ParamLimits

0x74c2,	// (0x00036ba8) slider_set_pane_g5_copy1

0x7496,	// (0x00036b7c) slider_set_pane_g6_copy1_ParamLimits

0x7496,	// (0x00036b7c) slider_set_pane_g6_copy1

0x877b,	// (0x00037e61) slider_set_pane_g7_copy1_ParamLimits

0x877b,	// (0x00037e61) slider_set_pane_g7_copy1

0xf027,	// (0x0003e70d) bg_set_opt_pane_cp2_copy1

0xef22,	// (0x0003e608) setting_slider_graphic_pane_g1_copy1

0xef2b,	// (0x0003e611) setting_slider_graphic_pane_t1_copy1

0xef3b,	// (0x0003e621) setting_slider_graphic_pane_t2_copy1

0xef4b,	// (0x0003e631) slider_set_pane_cp_copy1

0xef5b,	// (0x0003e641) input_focus_pane_cp1_copy1

0xef64,	// (0x0003e64a) list_set_text_pane_copy1

0xef6c,	// (0x0003e652) setting_text_pane_g1_copy1

0x4624,	// (0x00033d0a) set_text_pane_t1_copy1

0xef5b,	// (0x0003e641) input_focus_pane_cp2_copy1

0xef6c,	// (0x0003e652) setting_code_pane_g1_copy1

0xef75,	// (0x0003e65b) setting_code_pane_t1_copy1

0xb439,	// (0x0003ab1f) list_set_graphic_pane_copy1

0xf027,	// (0x0003e70d) bg_set_opt_pane_cp4_copy1

0x8d4b,	// (0x00038431) list_set_graphic_pane_g1_copy1_ParamLimits

0x8d4b,	// (0x00038431) list_set_graphic_pane_g1_copy1

0xef83,	// (0x0003e669) list_set_graphic_pane_g2_copy1

0x8d63,	// (0x00038449) list_set_graphic_pane_t1_copy1_ParamLimits

0x8d63,	// (0x00038449) list_set_graphic_pane_t1_copy1

0xbefc,	// (0x0003b5e2) rs_clock_indi_pane_g1

0xef8b,	// (0x0003e671) rs_clock_indi_pane_t1

0xef99,	// (0x0003e67f) rs_indi_pane

0xefa1,	// (0x0003e687) rs_indi_pane_g1

0xefaa,	// (0x0003e690) rs_indi_pane_g2

0xec93,	// (0x0003e379) rs_indi_pane_g3

0x0002,

0xfec2,	// (0x0003f5a8) rs_indi_pane_g

0x9060,	// (0x00038746) bg_popup_preview_window_pane_cp03

0xefb3,	// (0x0003e699) popup_fep_tooltip_window_t1

0xcbc9,	// (0x0003c2af) popup_note2_window_g2_ParamLimits

0xcbc9,	// (0x0003c2af) popup_note2_window_g2

0x0001,

0xfc4f,	// (0x0003f335) popup_note2_window_g_ParamLimits

0xfc4f,	// (0x0003f335) popup_note2_window_g

0xd0d1,	// (0x0003c7b7) bg_popup_sub_pane_cp11_ParamLimits

0xd0de,	// (0x0003c7c4) cell_ai3_links_pane_g1_ParamLimits

0xd0f5,	// (0x0003c7db) cell_ai3_links_pane_t1

0x4624,	// (0x00033d0a) set_text_pane_t1_copy1_ParamLimits

0x8f5e,	// (0x00038644) cell_graphic_popup_pane_cp2_ParamLimits

0x8f5e,	// (0x00038644) cell_graphic_popup_pane_cp2

0xefc1,	// (0x0003e6a7) cell_graphic_popup_pane_g1_cp2

0x2583,	// (0x00031c69) cell_graphic_popup_pane_g2_cp2

0xefc9,	// (0x0003e6af) cell_graphic_popup_pane_g3_cp2

0xefd1,	// (0x0003e6b7) cell_graphic_popup_pane_t2_cp2

0x2594,	// (0x00031c7a) grid_highlight_pane_cp3_cp2

0x6357,	// (0x00035a3d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x282e,	// (0x00031f14) main_tmo_pane_ParamLimits

0xd40f,	// (0x0003caf5) popup_tmo_big_image_note_window

0xe5e8,	// (0x0003dcce) cell_ai5_widget_list_pane

0xe5f0,	// (0x0003dcd6) cell_ai5_widget_lrg_icon_pane

0xebcd,	// (0x0003e2b3) tmo_note_info_pane_t1_ParamLimits

0xebe2,	// (0x0003e2c8) tmo_note_info_pane_t2_ParamLimits

0xebfb,	// (0x0003e2e1) tmo_note_info_pane_t3_ParamLimits

0xec10,	// (0x0003e2f6) tmo_note_info_pane_t4_ParamLimits

0xec22,	// (0x0003e308) tmo_note_info_pane_t5_ParamLimits

0xfeb0,	// (0x0003f596) tmo_note_info_pane_t_ParamLimits

0xed4c,	// (0x0003e432) settings_container_pane_ParamLimits

0xef53,	// (0x0003e639) indicator_popup_pane_cp5

0xef53,	// (0x0003e639) indicator_popup_pane_cp6

0xb439,	// (0x0003ab1f) list_set_graphic_pane_copy1_ParamLimits

0xf013,	// (0x0003e6f9) bg_popup_window_pane_cp23

0xefdf,	// (0x0003e6c5) popup_tmo_big_image_note_window_g1

0xefeb,	// (0x0003e6d1) popup_tmo_big_image_note_window_t1

0xeffb,	// (0x0003e6e1) popup_tmo_big_image_note_window_t2

0xf031,	// (0x0003e717) popup_tmo_big_image_note_window_t3

0x0002,

0xfec9,	// (0x0003f5af) popup_tmo_big_image_note_window_t

0xbefc,	// (0x0003b5e2) cell_ai5_widget_lrg_icon_pane_g1

0xf041,	// (0x0003e727) cell_ai5_widget_lrg_icon_pane_t1

0xf04f,	// (0x0003e735) cell_ai5_widget_list_row_pane_ParamLimits

0xf04f,	// (0x0003e735) cell_ai5_widget_list_row_pane

0xf067,	// (0x0003e74d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf067,	// (0x0003e74d) cell_ai5_widget_list_row_pane_g1

0xf074,	// (0x0003e75a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf074,	// (0x0003e75a) cell_ai5_widget_list_row_pane_t1

0xf09f,	// (0x0003e785) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf09f,	// (0x0003e785) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed0,	// (0x0003f5b6) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed0,	// (0x0003f5b6) cell_ai5_widget_list_row_pane_t

0x52bf,	// (0x000349a5) main_fep_vtchi_ss_pane

0xf0ef,	// (0x0003e7d5) popup_fep_char_pre_window

0xf0f7,	// (0x0003e7dd) popup_fep_ituss_window

0xf129,	// (0x0003e80f) popup_fep_vkbss_window

0x938f,	// (0x00038a75) grid_vkbss_keypad_pane_ParamLimits

0x938f,	// (0x00038a75) grid_vkbss_keypad_pane

0xf171,	// (0x0003e857) ituss_keypad_pane

0x87bc,	// (0x00037ea2) aid_vkbss_key_offset_ParamLimits

0x87bc,	// (0x00037ea2) aid_vkbss_key_offset

0x87c8,	// (0x00037eae) cell_vkbss_key_pane_ParamLimits

0x87c8,	// (0x00037eae) cell_vkbss_key_pane

0xf17d,	// (0x0003e863) bg_cell_vkbss_key_g1_ParamLimits

0xf17d,	// (0x0003e863) bg_cell_vkbss_key_g1

0xf189,	// (0x0003e86f) cell_vkbss_key_3p_pane_ParamLimits

0xf189,	// (0x0003e86f) cell_vkbss_key_3p_pane

0xf1bf,	// (0x0003e8a5) cell_vkbss_key_g1_ParamLimits

0xf1bf,	// (0x0003e8a5) cell_vkbss_key_g1

0xf1f5,	// (0x0003e8db) cell_vkbss_key_t1_ParamLimits

0xf1f5,	// (0x0003e8db) cell_vkbss_key_t1

0x882a,	// (0x00037f10) cell_ituss_key_pane_ParamLimits

0x882a,	// (0x00037f10) cell_ituss_key_pane

0xf251,	// (0x0003e937) bg_cell_ituss_key_g1_ParamLimits

0xf251,	// (0x0003e937) bg_cell_ituss_key_g1

0xf25d,	// (0x0003e943) cell_ituss_key_pane_g1_ParamLimits

0xf25d,	// (0x0003e943) cell_ituss_key_pane_g1

0x883b,	// (0x00037f21) cell_ituss_key_pane_g2_ParamLimits

0x883b,	// (0x00037f21) cell_ituss_key_pane_g2

0x0005,

0xfed7,	// (0x0003f5bd) cell_ituss_key_pane_g_ParamLimits

0xfed7,	// (0x0003f5bd) cell_ituss_key_pane_g

0x88bf,	// (0x00037fa5) cell_ituss_key_t1_ParamLimits

0x88bf,	// (0x00037fa5) cell_ituss_key_t1

0x88f9,	// (0x00037fdf) cell_ituss_key_t2_ParamLimits

0x88f9,	// (0x00037fdf) cell_ituss_key_t2

0x892b,	// (0x00038011) cell_ituss_key_t3_ParamLimits

0x892b,	// (0x00038011) cell_ituss_key_t3

0x895c,	// (0x00038042) cell_ituss_key_t4_ParamLimits

0x895c,	// (0x00038042) cell_ituss_key_t4

0x0005,

0xfee4,	// (0x0003f5ca) cell_ituss_key_t_ParamLimits

0xfee4,	// (0x0003f5ca) cell_ituss_key_t

0xf283,	// (0x0003e969) cell_vkbss_key_3p_pane_g1

0xf28b,	// (0x0003e971) cell_vkbss_key_3p_pane_g2

0xf293,	// (0x0003e979) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef1,	// (0x0003f5d7) cell_vkbss_key_3p_pane_g

0x9060,	// (0x00038746) bg_popup_fep_char_preview_window_cp02

0xf29b,	// (0x0003e981) popup_fep_char_pre_window_t1

0xe571,	// (0x0003dc57) main_ai5_sk_pane

0xec9c,	// (0x0003e382) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeca8,	// (0x0003e38e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xecbd,	// (0x0003e3a3) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xecc9,	// (0x0003e3af) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebb,	// (0x0003f5a1) cell_contacts_ai5_widget_pane_g_ParamLimits

0xecd5,	// (0x0003e3bb) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x282e,	// (0x00031f14) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf2a9,	// (0x0003e98f) main_ai5_sk_pane_g1

0x9d5d,	// (0x00039443) popup_query_code_window_g1

0xf110,	// (0x0003e7f6) popup_fep_vkb_icf_pane

0xf145,	// (0x0003e82b) popup_fep_vtchi_icf_pane

0xf2b2,	// (0x0003e998) bg_icf_pane

0xf2b2,	// (0x0003e998) list_vkb_icf_pane

0xf2be,	// (0x0003e9a4) bg_icf_pane_cp01

0xf2d1,	// (0x0003e9b7) vtchi_icf_list_pane

0xf331,	// (0x0003ea17) list_vkb_icf_pane_t1_ParamLimits

0xf331,	// (0x0003ea17) list_vkb_icf_pane_t1

0xf34a,	// (0x0003ea30) vtchi_icf_list_pane_t1_ParamLimits

0xf34a,	// (0x0003ea30) vtchi_icf_list_pane_t1

0xf0f7,	// (0x0003e7dd) popup_fep_ituss_window_ParamLimits

0xf145,	// (0x0003e82b) popup_fep_vtchi_icf_pane_ParamLimits

0xf171,	// (0x0003e857) ituss_keypad_pane_ParamLimits

0x87b2,	// (0x00037e98) ituss_sks_pane

0xf2b2,	// (0x0003e998) bg_icf_pane_ParamLimits

0xf0c7,	// (0x0003e7ad) icf_edit_indi_pane_ParamLimits

0xf0c7,	// (0x0003e7ad) icf_edit_indi_pane

0xf2b2,	// (0x0003e998) list_vkb_icf_pane_ParamLimits

0xf2be,	// (0x0003e9a4) bg_icf_pane_cp01_ParamLimits

0xf0e2,	// (0x0003e7c8) icf_edit_indi_pane_cp01_ParamLimits

0xf0e2,	// (0x0003e7c8) icf_edit_indi_pane_cp01

0xf2d1,	// (0x0003e9b7) vtchi_query_pane

0xe40f,	// (0x0003daf5) icf_edit_indi_pane_g1_ParamLimits

0xe40f,	// (0x0003daf5) icf_edit_indi_pane_g1

0xf3ba,	// (0x0003eaa0) icf_edit_indi_pane_g2_ParamLimits

0xf3ba,	// (0x0003eaa0) icf_edit_indi_pane_g2

0x0001,

0xff1c,	// (0x0003f602) icf_edit_indi_pane_g_ParamLimits

0xff1c,	// (0x0003f602) icf_edit_indi_pane_g

0xf3ce,	// (0x0003eab4) icf_edit_indi_pane_t1

0xf363,	// (0x0003ea49) bg_input_focus_pane_cp042

0x2767,	// (0x00031e4d) vtchi_button_pane

0xf36c,	// (0x0003ea52) vtchi_query_pane_t1

0xf37a,	// (0x0003ea60) vtchi_query_pane_t2

0xf388,	// (0x0003ea6e) vtchi_query_pane_t3

0x0002,

0xff0b,	// (0x0003f5f1) vtchi_query_pane_t

0x52bf,	// (0x000349a5) bg_button_pane_cp13

0xf396,	// (0x0003ea7c) vtchi_button_pane_g1

0x89dd,	// (0x000380c3) ituss_sks_pane_g1

0x89e8,	// (0x000380ce) ituss_sks_pane_g2

0x0001,

0xff12,	// (0x0003f5f8) ituss_sks_pane_g

0xf39e,	// (0x0003ea84) ituss_sks_pane_t1

0xf3ac,	// (0x0003ea92) ituss_sks_pane_t2

0x0001,

0xff17,	// (0x0003f5fd) ituss_sks_pane_t

0xb9d7,	// (0x0003b0bd) indicator_nsta_pane_cp_g1

0xb9e0,	// (0x0003b0c6) indicator_nsta_pane_cp_g2

0xb9e8,	// (0x0003b0ce) indicator_nsta_pane_cp_g3

0xb9f0,	// (0x0003b0d6) indicator_nsta_pane_cp_g4

0xb9e0,	// (0x0003b0c6) indicator_nsta_pane_cp_g5

0xb9e8,	// (0x0003b0ce) indicator_nsta_pane_cp_g6

0x0005,

0xfa8d,	// (0x0003f173) indicator_nsta_pane_cp_g

0xe156,	// (0x0003d83c) cell_graphic2_pane_t2_ParamLimits

0xe156,	// (0x0003d83c) cell_graphic2_pane_t2

0x0001,

0xfda6,	// (0x0003f48c) cell_graphic2_pane_t_ParamLimits

0xfda6,	// (0x0003f48c) cell_graphic2_pane_t

0xe182,	// (0x0003d868) cell_graphic2_control_pane_t1

0x8b04,	// (0x000381ea) signal_pane_g3_ParamLimits

0x8b04,	// (0x000381ea) signal_pane_g3

0x8b13,	// (0x000381f9) signal_pane_g4_ParamLimits

0x8b13,	// (0x000381f9) signal_pane_g4

0xf0b1,	// (0x0003e797) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf0b1,	// (0x0003e797) cell_ai5_widget_list_row_pane_t3

0xf271,	// (0x0003e957) cell_ituss_key_pane_t1_ParamLimits

0xf271,	// (0x0003e957) cell_ituss_key_pane_t1

0x99c4,	// (0x000390aa) form_field_data_wide_pane_vc_t2_ParamLimits

0x99c4,	// (0x000390aa) form_field_data_wide_pane_vc_t2

0x99d8,	// (0x000390be) form_field_data_wide_pane_vc_t3_ParamLimits

0x99d8,	// (0x000390be) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e2,	// (0x0003eec8) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e2,	// (0x0003eec8) form_field_data_wide_pane_vc_t

0xb674,	// (0x0003ad5a) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb674,	// (0x0003ad5a) form_field_slider_wide_pane_vc_t3

0xb74a,	// (0x0003ae30) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb74a,	// (0x0003ae30) form_field_popup_wide_pane_vc_t2

0xb761,	// (0x0003ae47) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb761,	// (0x0003ae47) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7c,	// (0x0003f162) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7c,	// (0x0003f162) form_field_popup_wide_pane_vc_t

0x8545,	// (0x00037c2b) aid_fshwr2_btn_pane_ParamLimits

0x8555,	// (0x00037c3b) aid_fshwr2_syb_pane_ParamLimits

0x8569,	// (0x00037c4f) aid_fshwr2_txt_pane_ParamLimits

0x7d69,	// (0x0003744f) fshwr2_bg_pane_ParamLimits

0x8579,	// (0x00037c5f) fshwr2_func_candi_pane_ParamLimits

0x8599,	// (0x00037c7f) fshwr2_hwr_syb_pane_ParamLimits

0x85af,	// (0x00037c95) fshwr2_icf_pane_ParamLimits

0x41dd,	// (0x000338c3) list_double_graphic_pane_vc_g4_ParamLimits

0x41dd,	// (0x000338c3) list_double_graphic_pane_vc_g4

0x885b,	// (0x00037f41) cell_ituss_key_pane_g3_ParamLimits

0x885b,	// (0x00037f41) cell_ituss_key_pane_g3

0x898d,	// (0x00038073) cell_ituss_key_t5_ParamLimits

0x898d,	// (0x00038073) cell_ituss_key_t5

0xf129,	// (0x0003e80f) popup_fep_vkbss_window_ParamLimits

0xe57b,	// (0x0003dc61) aid_cell_ai5_quarter

0xf3ce,	// (0x0003eab4) icf_edit_indi_pane_t1_ParamLimits

0x23c7,	// (0x00031aad) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x23c7,	// (0x00031aad) aid_tch_indicator_popup_pane_cp2

0x23da,	// (0x00031ac0) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x23da,	// (0x00031ac0) aid_tch_query_popup_data_pane_cp2

0x9d05,	// (0x000393eb) aid_tch_query_popup_pane_ParamLimits

0x9d05,	// (0x000393eb) aid_tch_query_popup_pane

0x9d05,	// (0x000393eb) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9d05,	// (0x000393eb) aid_tch_query_popup_data_pane_cp1

0x938f,	// (0x00038a75) cell_fshwr2_syb_bg_pane_ParamLimits

0x86b9,	// (0x00037d9f) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x86cd,	// (0x00037db3) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf110,	// (0x0003e7f6) popup_fep_vkb_icf_pane_ParamLimits

0x838b,	// (0x00037a71) bg_popup_fep_char_preview_window_g10

0xe6b3,	// (0x0003dd99) cell_ai5_widget_pane_g11_ParamLimits

0xe6b3,	// (0x0003dd99) cell_ai5_widget_pane_g11

0xe6bf,	// (0x0003dda5) cell_ai5_widget_pane_g12_ParamLimits

0xe6bf,	// (0x0003dda5) cell_ai5_widget_pane_g12

0xe6cb,	// (0x0003ddb1) cell_ai5_widget_pane_g13_ParamLimits

0xe6cb,	// (0x0003ddb1) cell_ai5_widget_pane_g13

0xe7fb,	// (0x0003dee1) cell_ai5_widget_pane_t11_ParamLimits

0xe7fb,	// (0x0003dee1) cell_ai5_widget_pane_t11

0xe80d,	// (0x0003def3) cell_ai5_widget_pane_t12_ParamLimits

0xe80d,	// (0x0003def3) cell_ai5_widget_pane_t12

0x8867,	// (0x00037f4d) cell_ituss_key_pane_g4_ParamLimits

0x8867,	// (0x00037f4d) cell_ituss_key_pane_g4

0x8883,	// (0x00037f69) cell_ituss_key_pane_g5_ParamLimits

0x8883,	// (0x00037f69) cell_ituss_key_pane_g5

0x889f,	// (0x00037f85) cell_ituss_key_pane_g6_ParamLimits

0x889f,	// (0x00037f85) cell_ituss_key_pane_g6

0x98bf,	// (0x00038fa5) bg_icf_pane_g1

0xf2d9,	// (0x0003e9bf) bg_icf_pane_g2

0xf2e5,	// (0x0003e9cb) bg_icf_pane_g3

0xf2ef,	// (0x0003e9d5) bg_icf_pane_g4

0xf2fb,	// (0x0003e9e1) bg_icf_pane_g5

0xf305,	// (0x0003e9eb) bg_icf_pane_g6

0xf311,	// (0x0003e9f7) bg_icf_pane_g7

0xf31b,	// (0x0003ea01) bg_icf_pane_g8

0xf327,	// (0x0003ea0d) bg_icf_pane_g9

0x0008,

0xfef8,	// (0x0003f5de) bg_icf_pane_g

0xf15e,	// (0x0003e844) popup_hyb_candi_window_ParamLimits

0xf15e,	// (0x0003e844) popup_hyb_candi_window

0x9933,	// (0x00039019) bg_popup_sub_pane_cp01_ParamLimits

0x9933,	// (0x00039019) bg_popup_sub_pane_cp01

0xf3e7,	// (0x0003eacd) entry_hyb_candi_pane_ParamLimits

0xf3e7,	// (0x0003eacd) entry_hyb_candi_pane

0xf3f6,	// (0x0003eadc) grid_hyb_candi_pane_ParamLimits

0xf3f6,	// (0x0003eadc) grid_hyb_candi_pane

0xf40b,	// (0x0003eaf1) grid_hyb_phrase_pane_ParamLimits

0xf40b,	// (0x0003eaf1) grid_hyb_phrase_pane

0xf41a,	// (0x0003eb00) cell_hyb_candi_pane_ParamLimits

0xf41a,	// (0x0003eb00) cell_hyb_candi_pane

0x2770,	// (0x00031e56) cell_hyb_candi_scroll_pane

0x8a27,	// (0x0003810d) cell_hyb_candi_pane_g1

0xf436,	// (0x0003eb1c) cell_hyb_candi_pane_t1

0xf444,	// (0x0003eb2a) cell_hyb_phrase_pane

0x8a27,	// (0x0003810d) cell_hyb_phrase_pane_g1

0xf44d,	// (0x0003eb33) cell_hyb_phrase_pane_t1

0xf45b,	// (0x0003eb41) entry_hyb_candi_pane_t1

0x9060,	// (0x00038746) input_focus_pane_cp06

0xf469,	// (0x0003eb4f) cell_hyb_candi_scroll_pane_g1

0xf471,	// (0x0003eb57) cell_hyb_candi_scroll_pane_g1_aid

0xf479,	// (0x0003eb5f) cell_hyb_candi_scroll_pane_g2

0xf481,	// (0x0003eb67) cell_hyb_candi_scroll_pane_g2_aid

0xf489,	// (0x0003eb6f) cell_hyb_candi_scroll_pane_g3

0xf491,	// (0x0003eb77) cell_hyb_candi_scroll_pane_g4

0xe4d0,	// (0x0003dbb6) ai5_page_g1

0x899f,	// (0x00038085) cell_ituss_key_t6_ParamLimits

0x899f,	// (0x00038085) cell_ituss_key_t6

0x8791,	// (0x00037e77) icf_edit_indi_pane_cp02_ParamLimits

0x8791,	// (0x00037e77) icf_edit_indi_pane_cp02

0x87a5,	// (0x00037e8b) icf_edit_indi_pane_cp03_ParamLimits

0x87a5,	// (0x00037e8b) icf_edit_indi_pane_cp03
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small

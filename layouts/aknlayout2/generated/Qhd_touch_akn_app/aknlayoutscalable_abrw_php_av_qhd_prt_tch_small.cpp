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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002abe0 };

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
0x7501,	// (0x000320e1) Screen

0x7515,	// (0x000320f5) application_window_ParamLimits

0x7515,	// (0x000320f5) application_window

0x752f,	// (0x0003210f) screen_g1

0x4800,	// (0x0002f3e0) area_bottom_pane_ParamLimits

0x4800,	// (0x0002f3e0) area_bottom_pane

0x48c0,	// (0x0002f4a0) area_top_pane_ParamLimits

0x48c0,	// (0x0002f4a0) area_top_pane

0x495e,	// (0x0002f53e) main_pane_ParamLimits

0x495e,	// (0x0002f53e) main_pane

0x7539,	// (0x00032119) misc_graphics

0x979f,	// (0x0003437f) battery_pane_ParamLimits

0x979f,	// (0x0003437f) battery_pane

0xa473,	// (0x00035053) bg_status_flat_pane_g8

0xa47b,	// (0x0003505b) bg_status_flat_pane_g9

0x9861,	// (0x00034441) context_pane_ParamLimits

0x9861,	// (0x00034441) context_pane

0x9977,	// (0x00034557) navi_pane_ParamLimits

0x9977,	// (0x00034557) navi_pane

0x99fb,	// (0x000345db) signal_pane_ParamLimits

0x99fb,	// (0x000345db) signal_pane

0x0008,

0xf879,	// (0x0003a459) bg_status_flat_pane_g

0x9a68,	// (0x00034648) status_pane_g1_ParamLimits

0x9a68,	// (0x00034648) status_pane_g1

0x9a7c,	// (0x0003465c) status_pane_g2_ParamLimits

0x9a7c,	// (0x0003465c) status_pane_g2

0x9a88,	// (0x00034668) status_pane_g3_ParamLimits

0x9a88,	// (0x00034668) status_pane_g3

0x0004,

0xf7a0,	// (0x0003a380) status_pane_g_ParamLimits

0xf7a0,	// (0x0003a380) status_pane_g

0x9abc,	// (0x0003469c) title_pane_ParamLimits

0x9abc,	// (0x0003469c) title_pane

0x9af9,	// (0x000346d9) uni_indicator_pane_ParamLimits

0x9af9,	// (0x000346d9) uni_indicator_pane

0x96cf,	// (0x000342af) bg_list_pane_ParamLimits

0x96cf,	// (0x000342af) bg_list_pane

0x59d8,	// (0x000305b8) find_pane

0x96ef,	// (0x000342cf) listscroll_app_pane_ParamLimits

0x96ef,	// (0x000342cf) listscroll_app_pane

0x96fb,	// (0x000342db) listscroll_form_pane

0x4736,	// (0x0002f316) listscroll_gen_pane_ParamLimits

0x4736,	// (0x0002f316) listscroll_gen_pane

0x59e0,	// (0x000305c0) listscroll_set_pane

0x8917,	// (0x000334f7) main_idle_act_pane

0x93cb,	// (0x00033fab) main_idle_trad_pane

0x93cb,	// (0x00033fab) main_list_empty_pane

0x96ef,	// (0x000342cf) main_midp_pane

0x9715,	// (0x000342f5) main_pane_g1_ParamLimits

0x9715,	// (0x000342f5) main_pane_g1

0x59f6,	// (0x000305d6) popup_ai_message_window_ParamLimits

0x59f6,	// (0x000305d6) popup_ai_message_window

0x5aa4,	// (0x00030684) popup_fep_china_uni_window_ParamLimits

0x5aa4,	// (0x00030684) popup_fep_china_uni_window

0x5b00,	// (0x000306e0) popup_fep_japan_candidate_window_ParamLimits

0x5b00,	// (0x000306e0) popup_fep_japan_candidate_window

0x5b20,	// (0x00030700) popup_fep_japan_predictive_window_ParamLimits

0x5b20,	// (0x00030700) popup_fep_japan_predictive_window

0x5b50,	// (0x00030730) popup_find_window

0x5b5d,	// (0x0003073d) popup_grid_graphic_window_ParamLimits

0x5b5d,	// (0x0003073d) popup_grid_graphic_window

0x5b87,	// (0x00030767) popup_large_graphic_colour_window

0x5bad,	// (0x0003078d) popup_menu_window_ParamLimits

0x5bad,	// (0x0003078d) popup_menu_window

0x5d65,	// (0x00030945) popup_note_image_window

0x5d51,	// (0x00030931) popup_note_wait_window_ParamLimits

0x5d51,	// (0x00030931) popup_note_wait_window

0x5d51,	// (0x00030931) popup_note_window_ParamLimits

0x5d51,	// (0x00030931) popup_note_window

0x5dbb,	// (0x0003099b) popup_query_code_window_ParamLimits

0x5dbb,	// (0x0003099b) popup_query_code_window

0x5dcf,	// (0x000309af) popup_query_data_code_window_ParamLimits

0x5dcf,	// (0x000309af) popup_query_data_code_window

0x5dec,	// (0x000309cc) popup_query_data_window_ParamLimits

0x5dec,	// (0x000309cc) popup_query_data_window

0x5e08,	// (0x000309e8) popup_query_sat_info_window_ParamLimits

0x5e08,	// (0x000309e8) popup_query_sat_info_window

0x5e41,	// (0x00030a21) popup_snote_single_graphic_window_ParamLimits

0x5e41,	// (0x00030a21) popup_snote_single_graphic_window

0x5e41,	// (0x00030a21) popup_snote_single_text_window_ParamLimits

0x5e41,	// (0x00030a21) popup_snote_single_text_window

0x5e56,	// (0x00030a36) popup_sub_window_general

0x5f86,	// (0x00030b66) popup_window_general_ParamLimits

0x5f86,	// (0x00030b66) popup_window_general

0x9723,	// (0x00034303) power_save_pane

0x586a,	// (0x0003044a) control_pane_g1_ParamLimits

0x586a,	// (0x0003044a) control_pane_g1

0x5891,	// (0x00030471) control_pane_g2_ParamLimits

0x5891,	// (0x00030471) control_pane_g2

0x9692,	// (0x00034272) control_pane_g3_ParamLimits

0x9692,	// (0x00034272) control_pane_g3

0x0007,

0xf788,	// (0x0003a368) control_pane_g_ParamLimits

0xf788,	// (0x0003a368) control_pane_g

0x58db,	// (0x000304bb) control_pane_t1_ParamLimits

0x58db,	// (0x000304bb) control_pane_t1

0x592f,	// (0x0003050f) control_pane_t2_ParamLimits

0x592f,	// (0x0003050f) control_pane_t2

0x0002,

0xf799,	// (0x0003a379) control_pane_t_ParamLimits

0xf799,	// (0x0003a379) control_pane_t

0x95b7,	// (0x00034197) navi_navi_volume_pane_cp1

0x95bf,	// (0x0003419f) status_small_icon_pane

0x95c7,	// (0x000341a7) status_small_pane_g1_ParamLimits

0x95c7,	// (0x000341a7) status_small_pane_g1

0x95fb,	// (0x000341db) status_small_pane_g2_ParamLimits

0x95fb,	// (0x000341db) status_small_pane_g2

0x9607,	// (0x000341e7) status_small_pane_g3_ParamLimits

0x9607,	// (0x000341e7) status_small_pane_g3

0x9613,	// (0x000341f3) status_small_pane_g4_ParamLimits

0x9613,	// (0x000341f3) status_small_pane_g4

0x961f,	// (0x000341ff) status_small_pane_g5_ParamLimits

0x961f,	// (0x000341ff) status_small_pane_g5

0x962d,	// (0x0003420d) status_small_pane_g6_ParamLimits

0x962d,	// (0x0003420d) status_small_pane_g6

0x0007,

0xf777,	// (0x0003a357) status_small_pane_g_ParamLimits

0xf777,	// (0x0003a357) status_small_pane_g

0x965c,	// (0x0003423c) status_small_pane_t1

0x967e,	// (0x0003425e) status_small_wait_pane_ParamLimits

0x967e,	// (0x0003425e) status_small_wait_pane

0x8e3d,	// (0x00033a1d) aid_levels_signal_ParamLimits

0x8e3d,	// (0x00033a1d) aid_levels_signal

0x8e4f,	// (0x00033a2f) signal_pane_g1_ParamLimits

0x8e4f,	// (0x00033a2f) signal_pane_g1

0x8e64,	// (0x00033a44) signal_pane_g2_ParamLimits

0x8e64,	// (0x00033a44) signal_pane_g2

0x0003,

0xf708,	// (0x0003a2e8) signal_pane_g_ParamLimits

0xf708,	// (0x0003a2e8) signal_pane_g

0x8e9f,	// (0x00033a7f) context_pane_g1

0x7543,	// (0x00032123) title_pane_g1

0x7579,	// (0x00032159) title_pane_t1

0x75e1,	// (0x000321c1) title_pane_t2

0x7607,	// (0x000321e7) title_pane_t3

0x0002,

0xf557,	// (0x0003a137) title_pane_t

0x9b11,	// (0x000346f1) aid_levels_battery_ParamLimits

0x9b11,	// (0x000346f1) aid_levels_battery

0x9b25,	// (0x00034705) battery_pane_g1_ParamLimits

0x9b25,	// (0x00034705) battery_pane_g1

0x9b3b,	// (0x0003471b) battery_pane_g2_ParamLimits

0x9b3b,	// (0x0003471b) battery_pane_g2

0x0001,

0xf7ab,	// (0x0003a38b) battery_pane_g_ParamLimits

0xf7ab,	// (0x0003a38b) battery_pane_g

0xadb5,	// (0x00035995) uni_indicator_pane_g1

0xadc8,	// (0x000359a8) uni_indicator_pane_g2

0xadda,	// (0x000359ba) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0003a501) uni_indicator_pane_g

0x923d,	// (0x00033e1d) navi_icon_pane_ParamLimits

0x923d,	// (0x00033e1d) navi_icon_pane

0x917b,	// (0x00033d5b) navi_midp_pane

0x9259,	// (0x00033e39) navi_navi_pane

0x9263,	// (0x00033e43) navi_text_pane_ParamLimits

0x9263,	// (0x00033e43) navi_text_pane

0x752f,	// (0x0003210f) status_small_wait_pane_g1

0x82e4,	// (0x00032ec4) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0003a4fc) status_small_wait_pane_g

0xaada,	// (0x000356ba) navi_navi_icon_text_pane

0xaae2,	// (0x000356c2) navi_navi_pane_g1_ParamLimits

0xaae2,	// (0x000356c2) navi_navi_pane_g1

0xaaf4,	// (0x000356d4) navi_navi_pane_g2_ParamLimits

0xaaf4,	// (0x000356d4) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0003a4ca) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0003a4ca) navi_navi_pane_g

0xab06,	// (0x000356e6) navi_navi_tabs_pane

0xab0f,	// (0x000356ef) navi_navi_text_pane

0xaada,	// (0x000356ba) navi_navi_volume_pane

0xaab6,	// (0x00035696) navi_text_pane_t1

0xaaaa,	// (0x0003568a) navi_icon_pane_g1

0xa9fd,	// (0x000355dd) navi_navi_text_pane_t1

0x630a,	// (0x00030eea) navi_navi_volume_pane_g1

0x6312,	// (0x00030ef2) volume_small_pane

0xa963,	// (0x00035543) navi_navi_icon_text_pane_g1

0xa96b,	// (0x0003554b) navi_navi_icon_text_pane_t1

0x9259,	// (0x00033e39) navi_tabs_2_long_pane

0x9259,	// (0x00033e39) navi_tabs_2_pane

0x9259,	// (0x00033e39) navi_tabs_3_long_pane

0x9259,	// (0x00033e39) navi_tabs_3_pane

0x9259,	// (0x00033e39) navi_tabs_4_pane

0x62ea,	// (0x00030eca) tabs_2_active_pane_ParamLimits

0x62ea,	// (0x00030eca) tabs_2_active_pane

0x62fa,	// (0x00030eda) tabs_2_passive_pane_ParamLimits

0x62fa,	// (0x00030eda) tabs_2_passive_pane

0x62b8,	// (0x00030e98) tabs_3_active_pane_ParamLimits

0x62b8,	// (0x00030e98) tabs_3_active_pane

0x62c8,	// (0x00030ea8) tabs_3_passive_pane_ParamLimits

0x62c8,	// (0x00030ea8) tabs_3_passive_pane

0x62d9,	// (0x00030eb9) tabs_3_passive_pane_cp_ParamLimits

0x62d9,	// (0x00030eb9) tabs_3_passive_pane_cp

0x6274,	// (0x00030e54) tabs_4_active_pane_ParamLimits

0x6274,	// (0x00030e54) tabs_4_active_pane

0x6285,	// (0x00030e65) tabs_4_passive_pane_ParamLimits

0x6285,	// (0x00030e65) tabs_4_passive_pane

0x6296,	// (0x00030e76) tabs_4_passive_pane_cp_ParamLimits

0x6296,	// (0x00030e76) tabs_4_passive_pane_cp

0x62a7,	// (0x00030e87) tabs_4_passive_pane_cp2_ParamLimits

0x62a7,	// (0x00030e87) tabs_4_passive_pane_cp2

0x6250,	// (0x00030e30) tabs_2_long_active_pane_ParamLimits

0x6250,	// (0x00030e30) tabs_2_long_active_pane

0x6262,	// (0x00030e42) tabs_2_long_passive_pane_ParamLimits

0x6262,	// (0x00030e42) tabs_2_long_passive_pane

0x6211,	// (0x00030df1) tabs_3_long_active_pane_ParamLimits

0x6211,	// (0x00030df1) tabs_3_long_active_pane

0x6224,	// (0x00030e04) tabs_3_long_passive_pane_ParamLimits

0x6224,	// (0x00030e04) tabs_3_long_passive_pane

0x623d,	// (0x00030e1d) tabs_3_long_passive_pane_cp_ParamLimits

0x623d,	// (0x00030e1d) tabs_3_long_passive_pane_cp

0x61b7,	// (0x00030d97) volume_small_pane_g1

0x61c0,	// (0x00030da0) volume_small_pane_g2

0x61c9,	// (0x00030da9) volume_small_pane_g3

0x61d2,	// (0x00030db2) volume_small_pane_g4

0x61db,	// (0x00030dbb) volume_small_pane_g5

0x61e4,	// (0x00030dc4) volume_small_pane_g6

0x61ed,	// (0x00030dcd) volume_small_pane_g7

0x61f6,	// (0x00030dd6) volume_small_pane_g8

0x61ff,	// (0x00030ddf) volume_small_pane_g9

0x6208,	// (0x00030de8) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0003a496) volume_small_pane_g

0x7619,	// (0x000321f9) bg_active_tab_pane_cp2_ParamLimits

0x7619,	// (0x000321f9) bg_active_tab_pane_cp2

0x7eaf,	// (0x00032a8f) tabs_3_active_pane_g1

0x7eb7,	// (0x00032a97) tabs_3_active_pane_t1

0x7619,	// (0x000321f9) bg_passive_tab_pane_cp2_ParamLimits

0x7619,	// (0x000321f9) bg_passive_tab_pane_cp2

0x7eaf,	// (0x00032a8f) tabs_3_passive_pane_g1

0x7eb7,	// (0x00032a97) tabs_3_passive_pane_t1

0x7619,	// (0x000321f9) bg_active_tab_pane_cp3_ParamLimits

0x7619,	// (0x000321f9) bg_active_tab_pane_cp3

0x7ec9,	// (0x00032aa9) tabs_4_active_pane_g1

0x7ed1,	// (0x00032ab1) tabs_4_active_pane_t1

0x7619,	// (0x000321f9) bg_passive_tab_pane_cp3_ParamLimits

0x7619,	// (0x000321f9) bg_passive_tab_pane_cp3

0x7ec9,	// (0x00032aa9) tabs_4_1_passive_pane_g1

0x7ed1,	// (0x00032ab1) tabs_4_1_passive_pane_t1

0x96ef,	// (0x000342cf) list_highlight_pane_cp2

0xb01d,	// (0x00035bfd) list_set_pane_ParamLimits

0xb01d,	// (0x00035bfd) list_set_pane

0xb0c3,	// (0x00035ca3) main_pane_set_t1_ParamLimits

0xb0c3,	// (0x00035ca3) main_pane_set_t1

0xb0e3,	// (0x00035cc3) main_pane_set_t2_ParamLimits

0xb0e3,	// (0x00035cc3) main_pane_set_t2

0xb0f7,	// (0x00035cd7) main_pane_set_t3_ParamLimits

0xb0f7,	// (0x00035cd7) main_pane_set_t3

0xb109,	// (0x00035ce9) main_pane_set_t4_ParamLimits

0xb109,	// (0x00035ce9) main_pane_set_t4

0x0003,

0xf986,	// (0x0003a566) main_pane_set_t_ParamLimits

0xf986,	// (0x0003a566) main_pane_set_t

0xb11b,	// (0x00035cfb) setting_code_pane

0xb127,	// (0x00035d07) setting_slider_graphic_pane

0xb127,	// (0x00035d07) setting_slider_pane

0xb127,	// (0x00035d07) setting_text_pane

0xb127,	// (0x00035d07) setting_volume_pane

0x4bad,	// (0x0002f78d) volume_set_pane

0x7619,	// (0x000321f9) bg_set_opt_pane_cp

0x4bb5,	// (0x0002f795) setting_slider_pane_t1

0x4bce,	// (0x0002f7ae) setting_slider_pane_t2

0x4be8,	// (0x0002f7c8) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003a13e) setting_slider_pane_t

0x4c00,	// (0x0002f7e0) slider_set_pane

0x7539,	// (0x00032119) bg_set_opt_pane_cp2

0x7ee3,	// (0x00032ac3) setting_slider_graphic_pane_g1

0x4c16,	// (0x0002f7f6) setting_slider_graphic_pane_t1

0x4c26,	// (0x0002f806) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003a145) setting_slider_graphic_pane_t

0x4c36,	// (0x0002f816) slider_set_pane_cp

0x7539,	// (0x00032119) input_focus_pane_cp1

0xafdc,	// (0x00035bbc) list_set_text_pane

0x752f,	// (0x0003210f) setting_text_pane_g1

0x7539,	// (0x00032119) input_focus_pane_cp2

0x752f,	// (0x0003210f) setting_code_pane_g1

0x7eec,	// (0x00032acc) setting_code_pane_t1

0x4c3e,	// (0x0002f81e) set_text_pane_t1_ParamLimits

0x4c3e,	// (0x0002f81e) set_text_pane_t1

0x878e,	// (0x0003336e) set_opt_bg_pane_g1

0x8796,	// (0x00033376) set_opt_bg_pane_g2

0xafb6,	// (0x00035b96) set_opt_bg_pane_g3

0x87a6,	// (0x00033386) set_opt_bg_pane_g4

0x87ae,	// (0x0003338e) set_opt_bg_pane_g5

0x87b6,	// (0x00033396) set_opt_bg_pane_g6

0xafc0,	// (0x00035ba0) set_opt_bg_pane_g7

0xafc8,	// (0x00035ba8) set_opt_bg_pane_g8

0xafd2,	// (0x00035bb2) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0003a553) set_opt_bg_pane_g

0xafa9,	// (0x00035b89) slider_set_pane_g1

0x637f,	// (0x00030f5f) slider_set_pane_g2

0x0006,

0xf964,	// (0x0003a544) slider_set_pane_g

0x631b,	// (0x00030efb) volume_set_pane_g1

0x6323,	// (0x00030f03) volume_set_pane_g2

0x632b,	// (0x00030f0b) volume_set_pane_g3

0x6333,	// (0x00030f13) volume_set_pane_g4

0x633b,	// (0x00030f1b) volume_set_pane_g5

0x6343,	// (0x00030f23) volume_set_pane_g6

0x634b,	// (0x00030f2b) volume_set_pane_g7

0x6353,	// (0x00030f33) volume_set_pane_g8

0x635b,	// (0x00030f3b) volume_set_pane_g9

0x6363,	// (0x00030f43) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0003a51c) volume_set_pane_g

0x7efa,	// (0x00032ada) indicator_pane_ParamLimits

0x7efa,	// (0x00032ada) indicator_pane

0x7f06,	// (0x00032ae6) main_idle_pane_g2_ParamLimits

0x7f06,	// (0x00032ae6) main_idle_pane_g2

0x7f2e,	// (0x00032b0e) main_pane_idle_g1_ParamLimits

0x7f2e,	// (0x00032b0e) main_pane_idle_g1

0x7f3b,	// (0x00032b1b) popup_clock_digital_analogue_window_ParamLimits

0x7f3b,	// (0x00032b1b) popup_clock_digital_analogue_window

0x7f52,	// (0x00032b32) soft_indicator_pane_ParamLimits

0x7f52,	// (0x00032b32) soft_indicator_pane

0x7f5e,	// (0x00032b3e) wallpaper_pane_ParamLimits

0x7f5e,	// (0x00032b3e) wallpaper_pane

0x752f,	// (0x0003210f) wallpaper_pane_g1

0x7f72,	// (0x00032b52) indicator_pane_g1_ParamLimits

0x7f72,	// (0x00032b52) indicator_pane_g1

0xb3e0,	// (0x00035fc0) navi_navi_icon_text_pane_srt_g1

0x7f8d,	// (0x00032b6d) soft_indicator_pane_t1

0x7fa7,	// (0x00032b87) aid_ps_area_pane

0x7fb8,	// (0x00032b98) aid_ps_clock_pane

0x7fc6,	// (0x00032ba6) aid_ps_indicator_pane

0x7fd2,	// (0x00032bb2) indicator_ps_pane_ParamLimits

0x7fd2,	// (0x00032bb2) indicator_ps_pane

0x7fe1,	// (0x00032bc1) power_save_pane_g1_ParamLimits

0x7fe1,	// (0x00032bc1) power_save_pane_g1

0x7fed,	// (0x00032bcd) power_save_pane_g2_ParamLimits

0x7fed,	// (0x00032bcd) power_save_pane_g2

0x47b4,	// (0x0002f394) aid_navinavi_width_pane

0x7fa7,	// (0x00032b87) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003a14a) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003a14a) power_save_pane_g

0x7ffb,	// (0x00032bdb) power_save_pane_t1_ParamLimits

0x7ffb,	// (0x00032bdb) power_save_pane_t1

0x7fb8,	// (0x00032b98) aid_ps_clock_pane_ParamLimits

0x7fc6,	// (0x00032ba6) aid_ps_indicator_pane_ParamLimits

0x800d,	// (0x00032bed) power_save_pane_t4_ParamLimits

0x800d,	// (0x00032bed) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003a14f) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003a14f) power_save_pane_t

0x8037,	// (0x00032c17) power_save_t3_ParamLimits

0x8037,	// (0x00032c17) power_save_t3

0x8022,	// (0x00032c02) power_save_t2_ParamLimits

0x8022,	// (0x00032c02) power_save_t2

0x804c,	// (0x00032c2c) indicator_ps_pane_g1

0x8055,	// (0x00032c35) ai_gene_pane_ParamLimits

0x8055,	// (0x00032c35) ai_gene_pane

0x8061,	// (0x00032c41) ai_links_pane_ParamLimits

0x8061,	// (0x00032c41) ai_links_pane

0x806d,	// (0x00032c4d) indicator_pane_cp1_ParamLimits

0x806d,	// (0x00032c4d) indicator_pane_cp1

0x8079,	// (0x00032c59) main_pane_idle_g1_cp_ParamLimits

0x8079,	// (0x00032c59) main_pane_idle_g1_cp

0x8085,	// (0x00032c65) popup_ai_links_title_window

0x808e,	// (0x00032c6e) soft_indicator_pane_cp1_ParamLimits

0x808e,	// (0x00032c6e) soft_indicator_pane_cp1

0xada3,	// (0x00035983) ai_links_pane_g1

0xadac,	// (0x0003598c) grid_ai_links_pane

0xad86,	// (0x00035966) ai_gene_pane_1

0xad91,	// (0x00035971) ai_gene_pane_2

0xad9a,	// (0x0003597a) list_highlight_pane_cp4

0xad6a,	// (0x0003594a) cell_ai_link_pane_ParamLimits

0xad6a,	// (0x0003594a) cell_ai_link_pane

0xad62,	// (0x00035942) cell_ai_link_pane_g1

0x82e4,	// (0x00032ec4) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0003a4f7) cell_ai_link_pane_g

0x7539,	// (0x00032119) grid_highlight_cp2

0x7539,	// (0x00032119) bg_popup_sub_pane_cp1

0x80a8,	// (0x00032c88) popup_ai_links_title_window_t1

0xacb0,	// (0x00035890) ai_gene_pane_1_g1_ParamLimits

0xacb0,	// (0x00035890) ai_gene_pane_1_g1

0xacbc,	// (0x0003589c) ai_gene_pane_1_g2_ParamLimits

0xacbc,	// (0x0003589c) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0003a4ed) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0003a4ed) ai_gene_pane_1_g

0xacc9,	// (0x000358a9) ai_gene_pane_1_t1_ParamLimits

0xacc9,	// (0x000358a9) ai_gene_pane_1_t1

0xacfd,	// (0x000358dd) grid_ai_soft_ind_pane

0xac9b,	// (0x0003587b) ai_gene_pane_2_t1_ParamLimits

0xac9b,	// (0x0003587b) ai_gene_pane_2_t1

0x80b7,	// (0x00032c97) main_pane_empty_t1_ParamLimits

0x80b7,	// (0x00032c97) main_pane_empty_t1

0x80cf,	// (0x00032caf) main_pane_empty_t2_ParamLimits

0x80cf,	// (0x00032caf) main_pane_empty_t2

0x80e4,	// (0x00032cc4) main_pane_empty_t3_ParamLimits

0x80e4,	// (0x00032cc4) main_pane_empty_t3

0x80f6,	// (0x00032cd6) main_pane_empty_t4_ParamLimits

0x80f6,	// (0x00032cd6) main_pane_empty_t4

0x8108,	// (0x00032ce8) main_pane_empty_t5_ParamLimits

0x8108,	// (0x00032ce8) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003a154) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003a154) main_pane_empty_t

0x87df,	// (0x000333bf) bg_popup_window_pane_ParamLimits

0x87df,	// (0x000333bf) bg_popup_window_pane

0xaa0b,	// (0x000355eb) find_popup_pane_cp2_ParamLimits

0xaa0b,	// (0x000355eb) find_popup_pane_cp2

0xaa17,	// (0x000355f7) heading_pane_ParamLimits

0xaa17,	// (0x000355f7) heading_pane

0x7539,	// (0x00032119) bg_popup_sub_pane

0xa985,	// (0x00035565) bg_popup_window_pane_g1_ParamLimits

0xa985,	// (0x00035565) bg_popup_window_pane_g1

0xa991,	// (0x00035571) bg_popup_window_pane_g2_ParamLimits

0xa991,	// (0x00035571) bg_popup_window_pane_g2

0xa99d,	// (0x0003557d) bg_popup_window_pane_g3_ParamLimits

0xa99d,	// (0x0003557d) bg_popup_window_pane_g3

0xa9a9,	// (0x00035589) bg_popup_window_pane_g4_ParamLimits

0xa9a9,	// (0x00035589) bg_popup_window_pane_g4

0xa9b5,	// (0x00035595) bg_popup_window_pane_g5_ParamLimits

0xa9b5,	// (0x00035595) bg_popup_window_pane_g5

0xa9c1,	// (0x000355a1) bg_popup_window_pane_g6_ParamLimits

0xa9c1,	// (0x000355a1) bg_popup_window_pane_g6

0xa9cd,	// (0x000355ad) bg_popup_window_pane_g7_ParamLimits

0xa9cd,	// (0x000355ad) bg_popup_window_pane_g7

0xa9d9,	// (0x000355b9) bg_popup_window_pane_g8_ParamLimits

0xa9d9,	// (0x000355b9) bg_popup_window_pane_g8

0xa9e5,	// (0x000355c5) bg_popup_window_pane_g9_ParamLimits

0xa9e5,	// (0x000355c5) bg_popup_window_pane_g9

0xa9f1,	// (0x000355d1) bg_popup_window_pane_g10_ParamLimits

0xa9f1,	// (0x000355d1) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0003a4b5) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0003a4b5) bg_popup_window_pane_g

0xa91a,	// (0x000354fa) bg_popup_heading_pane_ParamLimits

0xa91a,	// (0x000354fa) bg_popup_heading_pane

0x6407,	// (0x00030fe7) tabs_4_passive_pane_cp_srt_ParamLimits

0x6407,	// (0x00030fe7) tabs_4_passive_pane_cp_srt

0x6419,	// (0x00030ff9) tabs_4_passive_pane_srt_ParamLimits

0xa92e,	// (0x0003550e) heading_pane_g2

0x6419,	// (0x00030ff9) tabs_4_passive_pane_srt

0x96ef,	// (0x000342cf) bg_passive_tab_pane_cp3_srt_ParamLimits

0x96ef,	// (0x000342cf) bg_passive_tab_pane_cp3_srt

0xa936,	// (0x00035516) heading_pane_t1_ParamLimits

0xa936,	// (0x00035516) heading_pane_t1

0xa94d,	// (0x0003552d) heading_pane_t2_ParamLimits

0xa94d,	// (0x0003552d) heading_pane_t2

0x0001,

0xf8d0,	// (0x0003a4b0) heading_pane_t_ParamLimits

0xf8d0,	// (0x0003a4b0) heading_pane_t

0xa43b,	// (0x0003501b) bg_popup_heading_pane_g1

0xa4ea,	// (0x000350ca) bg_popup_heading_pane_g2

0xa4f4,	// (0x000350d4) bg_popup_heading_pane_g3

0xa4fe,	// (0x000350de) bg_popup_heading_pane_g4

0xa508,	// (0x000350e8) bg_popup_heading_pane_g5

0xa512,	// (0x000350f2) bg_popup_heading_pane_g6

0xa51a,	// (0x000350fa) bg_popup_heading_pane_g7

0xa522,	// (0x00035102) bg_popup_heading_pane_g8

0xa52c,	// (0x0003510c) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0003a46c) bg_popup_heading_pane_g

0x9c13,	// (0x000347f3) bg_popup_sub_pane_g1

0x9c23,	// (0x00034803) bg_popup_sub_pane_g2

0x9c1b,	// (0x000347fb) bg_popup_sub_pane_g3

0x9c33,	// (0x00034813) bg_popup_sub_pane_g4

0x9c2b,	// (0x0003480b) bg_popup_sub_pane_g5

0x9c3b,	// (0x0003481b) bg_popup_sub_pane_g6

0x9c43,	// (0x00034823) bg_popup_sub_pane_g7

0x9c53,	// (0x00034833) bg_popup_sub_pane_g8

0x9c4b,	// (0x0003482b) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0003a446) bg_popup_sub_pane_g

0x811c,	// (0x00032cfc) bg_popup_window_pane_cp5_ParamLimits

0x811c,	// (0x00032cfc) bg_popup_window_pane_cp5

0x8138,	// (0x00032d18) popup_note_window_g1_ParamLimits

0x8138,	// (0x00032d18) popup_note_window_g1

0x8144,	// (0x00032d24) popup_note_window_t1_ParamLimits

0x8144,	// (0x00032d24) popup_note_window_t1

0x815a,	// (0x00032d3a) popup_note_window_t2_ParamLimits

0x815a,	// (0x00032d3a) popup_note_window_t2

0x8170,	// (0x00032d50) popup_note_window_t3_ParamLimits

0x8170,	// (0x00032d50) popup_note_window_t3

0x8186,	// (0x00032d66) popup_note_window_t4_ParamLimits

0x8186,	// (0x00032d66) popup_note_window_t4

0x81ae,	// (0x00032d8e) popup_note_window_t5_ParamLimits

0x81ae,	// (0x00032d8e) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003a15f) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003a15f) popup_note_window_t

0x81f8,	// (0x00032dd8) bg_popup_window_pane_cp6_ParamLimits

0x81f8,	// (0x00032dd8) bg_popup_window_pane_cp6

0xa3b7,	// (0x00034f97) popup_note_image_window_g1_ParamLimits

0xa3b7,	// (0x00034f97) popup_note_image_window_g1

0xa3c3,	// (0x00034fa3) popup_note_image_window_g2_ParamLimits

0xa3c3,	// (0x00034fa3) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0003a43a) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0003a43a) popup_note_image_window_g

0xa3dc,	// (0x00034fbc) popup_note_image_window_t1_ParamLimits

0xa3dc,	// (0x00034fbc) popup_note_image_window_t1

0xa3f5,	// (0x00034fd5) popup_note_image_window_t2_ParamLimits

0xa3f5,	// (0x00034fd5) popup_note_image_window_t2

0xa40e,	// (0x00034fee) popup_note_image_window_t3_ParamLimits

0xa40e,	// (0x00034fee) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0003a43f) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0003a43f) popup_note_image_window_t

0xa278,	// (0x00034e58) bg_popup_window_pane_cp7_ParamLimits

0xa278,	// (0x00034e58) bg_popup_window_pane_cp7

0xa2a8,	// (0x00034e88) popup_note_wait_window_g1_ParamLimits

0xa2a8,	// (0x00034e88) popup_note_wait_window_g1

0xa2b4,	// (0x00034e94) popup_note_wait_window_g2_ParamLimits

0xa2b4,	// (0x00034e94) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0003a428) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0003a428) popup_note_wait_window_g

0xa2cc,	// (0x00034eac) popup_note_wait_window_t1_ParamLimits

0xa2cc,	// (0x00034eac) popup_note_wait_window_t1

0xa2f3,	// (0x00034ed3) popup_note_wait_window_t2_ParamLimits

0xa2f3,	// (0x00034ed3) popup_note_wait_window_t2

0xa310,	// (0x00034ef0) popup_note_wait_window_t3_ParamLimits

0xa310,	// (0x00034ef0) popup_note_wait_window_t3

0xa323,	// (0x00034f03) popup_note_wait_window_t4_ParamLimits

0xa323,	// (0x00034f03) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0003a42f) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0003a42f) popup_note_wait_window_t

0xa348,	// (0x00034f28) wait_bar_pane_ParamLimits

0xa348,	// (0x00034f28) wait_bar_pane

0x7539,	// (0x00032119) wait_anim_pane

0x7539,	// (0x00032119) wait_border_pane

0x752f,	// (0x0003210f) wait_anim_pane_g1

0x752f,	// (0x0003210f) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0003a2e3) wait_anim_pane_g

0xa21c,	// (0x00034dfc) wait_border_pane_g1

0xa227,	// (0x00034e07) wait_border_pane_g2

0xa230,	// (0x00034e10) wait_border_pane_g3

0x0002,

0xf841,	// (0x0003a421) wait_border_pane_g

0xa087,	// (0x00034c67) bg_popup_window_pane_cp16_ParamLimits

0xa087,	// (0x00034c67) bg_popup_window_pane_cp16

0xa187,	// (0x00034d67) indicator_popup_pane_cp4_ParamLimits

0xa187,	// (0x00034d67) indicator_popup_pane_cp4

0xa19b,	// (0x00034d7b) popup_query_data_window_t1_ParamLimits

0xa19b,	// (0x00034d7b) popup_query_data_window_t1

0xa1ad,	// (0x00034d8d) popup_query_data_window_t2_ParamLimits

0xa1ad,	// (0x00034d8d) popup_query_data_window_t2

0xa1c6,	// (0x00034da6) popup_query_data_window_t3_ParamLimits

0xa1c6,	// (0x00034da6) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0003a41a) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0003a41a) popup_query_data_window_t

0xa1e0,	// (0x00034dc0) query_popup_data_pane_ParamLimits

0xa1e0,	// (0x00034dc0) query_popup_data_pane

0xa1f4,	// (0x00034dd4) query_popup_data_pane_cp1_ParamLimits

0xa1f4,	// (0x00034dd4) query_popup_data_pane_cp1

0xa087,	// (0x00034c67) bg_popup_window_pane_cp10_ParamLimits

0xa087,	// (0x00034c67) bg_popup_window_pane_cp10

0xa0b9,	// (0x00034c99) indicator_popup_pane_ParamLimits

0xa0b9,	// (0x00034c99) indicator_popup_pane

0xa0db,	// (0x00034cbb) popup_query_code_window_t1_ParamLimits

0xa0db,	// (0x00034cbb) popup_query_code_window_t1

0xa0f5,	// (0x00034cd5) popup_query_code_window_t2_ParamLimits

0xa0f5,	// (0x00034cd5) popup_query_code_window_t2

0xa13e,	// (0x00034d1e) popup_query_code_window_t3_ParamLimits

0xa13e,	// (0x00034d1e) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0003a413) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0003a413) popup_query_code_window_t

0xa16d,	// (0x00034d4d) query_popup_pane_ParamLimits

0xa16d,	// (0x00034d4d) query_popup_pane

0x81f8,	// (0x00032dd8) bg_popup_window_pane_cp15_ParamLimits

0x81f8,	// (0x00032dd8) bg_popup_window_pane_cp15

0x8216,	// (0x00032df6) indicator_popup_pane_cp1_ParamLimits

0x8216,	// (0x00032df6) indicator_popup_pane_cp1

0x8229,	// (0x00032e09) indicator_popup_pane_cp2_ParamLimits

0x8229,	// (0x00032e09) indicator_popup_pane_cp2

0x823c,	// (0x00032e1c) popup_query_data_code_window_g1_ParamLimits

0x823c,	// (0x00032e1c) popup_query_data_code_window_g1

0x824f,	// (0x00032e2f) popup_query_data_code_window_t1_ParamLimits

0x824f,	// (0x00032e2f) popup_query_data_code_window_t1

0x8261,	// (0x00032e41) popup_query_data_code_window_t2_ParamLimits

0x8261,	// (0x00032e41) popup_query_data_code_window_t2

0x8273,	// (0x00032e53) popup_query_data_code_window_t3_ParamLimits

0x8273,	// (0x00032e53) popup_query_data_code_window_t3

0x8289,	// (0x00032e69) popup_query_data_code_window_t4_ParamLimits

0x8289,	// (0x00032e69) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003a16a) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003a16a) popup_query_data_code_window_t

0x602a,	// (0x00030c0a) list_single_midp_graphic_pane_g3

0x82a1,	// (0x00032e81) query_popup_data_pane_cp2_ParamLimits

0x82b4,	// (0x00032e94) query_popup_pane_cp2_ParamLimits

0x82b4,	// (0x00032e94) query_popup_pane_cp2

0x7539,	// (0x00032119) bg_popup_window_pane_cp11

0xa073,	// (0x00034c53) heading_pane_cp5

0x839f,	// (0x00032f7f) listscroll_popup_info_pane

0x7539,	// (0x00032119) input_focus_pane_cp3

0x82c7,	// (0x00032ea7) query_popup_pane_t1

0x82d5,	// (0x00032eb5) list_popup_info_pane_ParamLimits

0x82d5,	// (0x00032eb5) list_popup_info_pane

0x82e4,	// (0x00032ec4) listscroll_popup_info_pane_g1

0x82ec,	// (0x00032ecc) scroll_pane_cp7

0x82f6,	// (0x00032ed6) popup_info_list_pane_t1_ParamLimits

0x82f6,	// (0x00032ed6) popup_info_list_pane_t1

0x8310,	// (0x00032ef0) popup_info_list_pane_t2_ParamLimits

0x8310,	// (0x00032ef0) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003a173) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003a173) popup_info_list_pane_t

0x7539,	// (0x00032119) bg_popup_window_pane_cp12

0xb3fa,	// (0x00035fda) find_popup_pane

0x7619,	// (0x000321f9) bg_popup_window_pane_cp3

0x832a,	// (0x00032f0a) heading_pane_cp3

0x8336,	// (0x00032f16) listscroll_popup_graphic_pane

0x7539,	// (0x00032119) bg_popup_window_pane_cp4

0x8395,	// (0x00032f75) heading_pane_cp4

0x839f,	// (0x00032f7f) listscroll_popup_colour_pane

0x83a7,	// (0x00032f87) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x83a7,	// (0x00032f87) cell_large_graphic_colour_none_popup_pane

0x83bb,	// (0x00032f9b) grid_large_graphic_colour_popup_pane_ParamLimits

0x83bb,	// (0x00032f9b) grid_large_graphic_colour_popup_pane

0x83e7,	// (0x00032fc7) listscroll_popup_colour_pane_g1_ParamLimits

0x83e7,	// (0x00032fc7) listscroll_popup_colour_pane_g1

0x83fe,	// (0x00032fde) listscroll_popup_colour_pane_g2_ParamLimits

0x83fe,	// (0x00032fde) listscroll_popup_colour_pane_g2

0x8415,	// (0x00032ff5) listscroll_popup_colour_pane_g3_ParamLimits

0x8415,	// (0x00032ff5) listscroll_popup_colour_pane_g3

0x8425,	// (0x00033005) listscroll_popup_colour_pane_g4_ParamLimits

0x8425,	// (0x00033005) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003a178) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003a178) listscroll_popup_colour_pane_g

0x8439,	// (0x00033019) scroll_pane_cp6_ParamLimits

0x8439,	// (0x00033019) scroll_pane_cp6

0x844b,	// (0x0003302b) cell_large_graphic_colour_popup_pane_ParamLimits

0x844b,	// (0x0003302b) cell_large_graphic_colour_popup_pane

0x846a,	// (0x0003304a) cell_large_graphic_colour_none_popup_pane_t1

0x7539,	// (0x00032119) grid_highlight_pane_cp5

0x8479,	// (0x00033059) cell_large_graphic_colour_popup_pane_g1

0x8481,	// (0x00033061) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003a181) cell_large_graphic_colour_popup_pane_g

0x8489,	// (0x00033069) cell_large_graphic_colour_popup_pane_g2_copy1

0x8492,	// (0x00033072) grid_highlight_pane_cp4

0x849a,	// (0x0003307a) bg_popup_window_pane_cp8_ParamLimits

0x849a,	// (0x0003307a) bg_popup_window_pane_cp8

0x84b5,	// (0x00033095) popup_snote_single_text_window_g1_ParamLimits

0x84b5,	// (0x00033095) popup_snote_single_text_window_g1

0x84c7,	// (0x000330a7) popup_snote_single_text_window_t1_ParamLimits

0x84c7,	// (0x000330a7) popup_snote_single_text_window_t1

0x84da,	// (0x000330ba) popup_snote_single_text_window_t2_ParamLimits

0x84da,	// (0x000330ba) popup_snote_single_text_window_t2

0x84ed,	// (0x000330cd) popup_snote_single_text_window_t3_ParamLimits

0x84ed,	// (0x000330cd) popup_snote_single_text_window_t3

0x8526,	// (0x00033106) popup_snote_single_text_window_t4_ParamLimits

0x8526,	// (0x00033106) popup_snote_single_text_window_t4

0x855a,	// (0x0003313a) popup_snote_single_text_window_t5_ParamLimits

0x855a,	// (0x0003313a) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003a186) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003a186) popup_snote_single_text_window_t

0x8589,	// (0x00033169) bg_popup_window_pane_cp9_ParamLimits

0x8589,	// (0x00033169) bg_popup_window_pane_cp9

0x84b5,	// (0x00033095) popup_snote_single_graphic_window_g1_ParamLimits

0x84b5,	// (0x00033095) popup_snote_single_graphic_window_g1

0x8597,	// (0x00033177) popup_snote_single_graphic_window_g2_ParamLimits

0x8597,	// (0x00033177) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003a191) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003a191) popup_snote_single_graphic_window_g

0x85a3,	// (0x00033183) popup_snote_single_graphic_window_t1_ParamLimits

0x85a3,	// (0x00033183) popup_snote_single_graphic_window_t1

0x85b6,	// (0x00033196) popup_snote_single_graphic_window_t2_ParamLimits

0x85b6,	// (0x00033196) popup_snote_single_graphic_window_t2

0x85c9,	// (0x000331a9) popup_snote_single_graphic_window_t3_ParamLimits

0x85c9,	// (0x000331a9) popup_snote_single_graphic_window_t3

0x8602,	// (0x000331e2) popup_snote_single_graphic_window_t4_ParamLimits

0x8602,	// (0x000331e2) popup_snote_single_graphic_window_t4

0x8636,	// (0x00033216) popup_snote_single_graphic_window_t5_ParamLimits

0x8636,	// (0x00033216) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003a196) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003a196) popup_snote_single_graphic_window_t

0xb33c,	// (0x00035f1c) grid_graphic_popup_pane_ParamLimits

0xb33c,	// (0x00035f1c) grid_graphic_popup_pane

0xb366,	// (0x00035f46) listscroll_popup_graphic_pane_g1_ParamLimits

0xb366,	// (0x00035f46) listscroll_popup_graphic_pane_g1

0xb37a,	// (0x00035f5a) listscroll_popup_graphic_pane_g2_ParamLimits

0xb37a,	// (0x00035f5a) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0003a590) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0003a590) listscroll_popup_graphic_pane_g

0xb38e,	// (0x00035f6e) scroll_pane_cp5

0xb2db,	// (0x00035ebb) cell_graphic_popup_pane_ParamLimits

0xb2db,	// (0x00035ebb) cell_graphic_popup_pane

0xb2bc,	// (0x00035e9c) cell_graphic_popup_pane_g1

0xb2c4,	// (0x00035ea4) cell_graphic_popup_pane_g2

0x8489,	// (0x00033069) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0003a589) cell_graphic_popup_pane_g

0xb2cd,	// (0x00035ead) cell_graphic_popup_pane_t2

0x8492,	// (0x00033072) grid_highlight_pane_cp3

0x8677,	// (0x00033257) list_gen_pane_ParamLimits

0x8677,	// (0x00033257) list_gen_pane

0x86a9,	// (0x00033289) scroll_pane

0xb214,	// (0x00035df4) bg_list_pane_g1_ParamLimits

0xb214,	// (0x00035df4) bg_list_pane_g1

0xb231,	// (0x00035e11) bg_list_pane_g2_ParamLimits

0xb231,	// (0x00035e11) bg_list_pane_g2

0xb246,	// (0x00035e26) bg_list_pane_g3_ParamLimits

0xb246,	// (0x00035e26) bg_list_pane_g3

0xb25a,	// (0x00035e3a) bg_list_pane_g4_ParamLimits

0xb25a,	// (0x00035e3a) bg_list_pane_g4

0xb26e,	// (0x00035e4e) bg_list_pane_g5_ParamLimits

0xb26e,	// (0x00035e4e) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0003a57e) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0003a57e) bg_list_pane_g

0x76d4,	// (0x000322b4) list_double2_graphic_large_graphic_pane_ParamLimits

0x76d4,	// (0x000322b4) list_double2_graphic_large_graphic_pane

0x76d4,	// (0x000322b4) list_double2_graphic_pane_ParamLimits

0x76d4,	// (0x000322b4) list_double2_graphic_pane

0x76d4,	// (0x000322b4) list_double2_large_graphic_pane_ParamLimits

0x76d4,	// (0x000322b4) list_double2_large_graphic_pane

0x76d4,	// (0x000322b4) list_double2_pane_ParamLimits

0x76d4,	// (0x000322b4) list_double2_pane

0x76d4,	// (0x000322b4) list_double_graphic_heading_pane_ParamLimits

0x76d4,	// (0x000322b4) list_double_graphic_heading_pane

0x76d4,	// (0x000322b4) list_double_graphic_pane_ParamLimits

0x76d4,	// (0x000322b4) list_double_graphic_pane

0x76d4,	// (0x000322b4) list_double_heading_pane_ParamLimits

0x76d4,	// (0x000322b4) list_double_heading_pane

0x76d4,	// (0x000322b4) list_double_large_graphic_pane_ParamLimits

0x76d4,	// (0x000322b4) list_double_large_graphic_pane

0x76d4,	// (0x000322b4) list_double_number_pane_ParamLimits

0x76d4,	// (0x000322b4) list_double_number_pane

0x76d4,	// (0x000322b4) list_double_pane_ParamLimits

0x76d4,	// (0x000322b4) list_double_pane

0x76d4,	// (0x000322b4) list_double_time_pane_ParamLimits

0x76d4,	// (0x000322b4) list_double_time_pane

0x76d4,	// (0x000322b4) list_setting_number_pane_ParamLimits

0x76d4,	// (0x000322b4) list_setting_number_pane

0x76d4,	// (0x000322b4) list_setting_pane_ParamLimits

0x76d4,	// (0x000322b4) list_setting_pane

0x770f,	// (0x000322ef) list_single_2graphic_pane_ParamLimits

0x770f,	// (0x000322ef) list_single_2graphic_pane

0x770f,	// (0x000322ef) list_single_graphic_heading_pane_ParamLimits

0x770f,	// (0x000322ef) list_single_graphic_heading_pane

0x770f,	// (0x000322ef) list_single_graphic_pane_ParamLimits

0x770f,	// (0x000322ef) list_single_graphic_pane

0x770f,	// (0x000322ef) list_single_heading_pane_ParamLimits

0x770f,	// (0x000322ef) list_single_heading_pane

0x774f,	// (0x0003232f) list_single_large_graphic_pane_ParamLimits

0x774f,	// (0x0003232f) list_single_large_graphic_pane

0x770f,	// (0x000322ef) list_single_number_heading_pane_ParamLimits

0x770f,	// (0x000322ef) list_single_number_heading_pane

0x770f,	// (0x000322ef) list_single_number_pane_ParamLimits

0x770f,	// (0x000322ef) list_single_number_pane

0x770f,	// (0x000322ef) list_single_pane_ParamLimits

0x770f,	// (0x000322ef) list_single_pane

0x7539,	// (0x00032119) list_highlight_pane_cp1

0x4c65,	// (0x0002f845) list_single_pane_g1_ParamLimits

0x4c65,	// (0x0002f845) list_single_pane_g1

0x4c71,	// (0x0002f851) list_single_pane_g2_ParamLimits

0x4c71,	// (0x0002f851) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0003a1a8) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0003a1a8) list_single_pane_g

0x76be,	// (0x0003229e) list_single_pane_t1_ParamLimits

0x76be,	// (0x0003229e) list_single_pane_t1

0x4c65,	// (0x0002f845) list_single_number_pane_g1_ParamLimits

0x4c65,	// (0x0002f845) list_single_number_pane_g1

0x4c71,	// (0x0002f851) list_single_number_pane_g2_ParamLimits

0x4c71,	// (0x0002f851) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0003a1a8) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0003a1a8) list_single_number_pane_g

0x7668,	// (0x00032248) list_single_number_pane_t1_ParamLimits

0x7668,	// (0x00032248) list_single_number_pane_t1

0x767e,	// (0x0003225e) list_single_number_pane_t2_ParamLimits

0x767e,	// (0x0003225e) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0003a53f) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0003a53f) list_single_number_pane_t

0x4c59,	// (0x0002f839) list_single_graphic_pane_g1_ParamLimits

0x4c59,	// (0x0002f839) list_single_graphic_pane_g1

0x4c65,	// (0x0002f845) list_single_graphic_pane_g2_ParamLimits

0x4c65,	// (0x0002f845) list_single_graphic_pane_g2

0x4c71,	// (0x0002f851) list_single_graphic_pane_g3_ParamLimits

0x4c71,	// (0x0002f851) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003a1a1) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003a1a1) list_single_graphic_pane_g

0x4c7d,	// (0x0002f85d) list_single_graphic_pane_t1_ParamLimits

0x4c7d,	// (0x0002f85d) list_single_graphic_pane_t1

0x4c65,	// (0x0002f845) list_single_heading_pane_g1_ParamLimits

0x4c65,	// (0x0002f845) list_single_heading_pane_g1

0x4c71,	// (0x0002f851) list_single_heading_pane_g2_ParamLimits

0x4c71,	// (0x0002f851) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003a1a8) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003a1a8) list_single_heading_pane_g

0x4c93,	// (0x0002f873) list_single_heading_pane_t1_ParamLimits

0x4c93,	// (0x0002f873) list_single_heading_pane_t1

0x4ca9,	// (0x0002f889) list_single_heading_pane_t2_ParamLimits

0x4ca9,	// (0x0002f889) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003a1ad) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003a1ad) list_single_heading_pane_t

0x4c65,	// (0x0002f845) list_single_number_heading_pane_g1_ParamLimits

0x4c65,	// (0x0002f845) list_single_number_heading_pane_g1

0x4c71,	// (0x0002f851) list_single_number_heading_pane_g2_ParamLimits

0x4c71,	// (0x0002f851) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003a1a8) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003a1a8) list_single_number_heading_pane_g

0x4c93,	// (0x0002f873) list_single_number_heading_pane_t1_ParamLimits

0x4c93,	// (0x0002f873) list_single_number_heading_pane_t1

0x4cbb,	// (0x0002f89b) list_single_number_heading_pane_t2_ParamLimits

0x4cbb,	// (0x0002f89b) list_single_number_heading_pane_t2

0x4ccd,	// (0x0002f8ad) list_single_number_heading_pane_t3_ParamLimits

0x4ccd,	// (0x0002f8ad) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0003a1b2) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0003a1b2) list_single_number_heading_pane_t

0x4cdf,	// (0x0002f8bf) list_single_graphic_heading_pane_g1_ParamLimits

0x4cdf,	// (0x0002f8bf) list_single_graphic_heading_pane_g1

0x4ceb,	// (0x0002f8cb) list_single_graphic_heading_pane_g4_ParamLimits

0x4ceb,	// (0x0002f8cb) list_single_graphic_heading_pane_g4

0x4c71,	// (0x0002f851) list_single_graphic_heading_pane_g5_ParamLimits

0x4c71,	// (0x0002f851) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0003a1b9) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0003a1b9) list_single_graphic_heading_pane_g

0x4c93,	// (0x0002f873) list_single_graphic_heading_pane_t1_ParamLimits

0x4c93,	// (0x0002f873) list_single_graphic_heading_pane_t1

0x4cfc,	// (0x0002f8dc) list_single_graphic_heading_pane_t2_ParamLimits

0x4cfc,	// (0x0002f8dc) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0003a1c0) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0003a1c0) list_single_graphic_heading_pane_t

0x4d0e,	// (0x0002f8ee) list_single_large_graphic_pane_g1_ParamLimits

0x4d0e,	// (0x0002f8ee) list_single_large_graphic_pane_g1

0x4d1a,	// (0x0002f8fa) list_single_large_graphic_pane_g2_ParamLimits

0x4d1a,	// (0x0002f8fa) list_single_large_graphic_pane_g2

0x4d26,	// (0x0002f906) list_single_large_graphic_pane_g3_ParamLimits

0x4d26,	// (0x0002f906) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0003a1c5) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0003a1c5) list_single_large_graphic_pane_g

0xa227,	// (0x00034e07) wait_border_pane_g2_copy1

0x4d32,	// (0x0002f912) list_single_large_graphic_pane_g4_cp2

0x4d3a,	// (0x0002f91a) list_single_large_graphic_pane_t1_ParamLimits

0x4d3a,	// (0x0002f91a) list_single_large_graphic_pane_t1

0x4d50,	// (0x0002f930) list_double_pane_g1_ParamLimits

0x4d50,	// (0x0002f930) list_double_pane_g1

0x4d5c,	// (0x0002f93c) list_double_pane_g2_ParamLimits

0x4d5c,	// (0x0002f93c) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0003a1cc) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0003a1cc) list_double_pane_g

0x4d68,	// (0x0002f948) list_double_pane_t1_ParamLimits

0x4d68,	// (0x0002f948) list_double_pane_t1

0x4d7e,	// (0x0002f95e) list_double_pane_t2_ParamLimits

0x4d7e,	// (0x0002f95e) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0003a1d1) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0003a1d1) list_double_pane_t

0x4d90,	// (0x0002f970) list_double2_pane_g1_ParamLimits

0x4d90,	// (0x0002f970) list_double2_pane_g1

0x4da1,	// (0x0002f981) list_double2_pane_g2_ParamLimits

0x4da1,	// (0x0002f981) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0003a1d6) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0003a1d6) list_double2_pane_g

0x4dad,	// (0x0002f98d) list_double2_pane_t1_ParamLimits

0x4dad,	// (0x0002f98d) list_double2_pane_t1

0x4dc3,	// (0x0002f9a3) list_double2_pane_t2_ParamLimits

0x4dc3,	// (0x0002f9a3) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0003a1db) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0003a1db) list_double2_pane_t

0x4d50,	// (0x0002f930) list_double_number_pane_g1_ParamLimits

0x4d50,	// (0x0002f930) list_double_number_pane_g1

0x4d5c,	// (0x0002f93c) list_double_number_pane_g2_ParamLimits

0x4d5c,	// (0x0002f93c) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0003a1cc) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0003a1cc) list_double_number_pane_g

0x4dd5,	// (0x0002f9b5) list_double_number_pane_t1_ParamLimits

0x4dd5,	// (0x0002f9b5) list_double_number_pane_t1

0x4de7,	// (0x0002f9c7) list_double_number_pane_t2_ParamLimits

0x4de7,	// (0x0002f9c7) list_double_number_pane_t2

0x4dfd,	// (0x0002f9dd) list_double_number_pane_t3_ParamLimits

0x4dfd,	// (0x0002f9dd) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0003a1e0) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0003a1e0) list_double_number_pane_t

0x4e0f,	// (0x0002f9ef) list_double_graphic_pane_g1_ParamLimits

0x4e0f,	// (0x0002f9ef) list_double_graphic_pane_g1

0x4e1b,	// (0x0002f9fb) list_double_graphic_pane_g2_ParamLimits

0x4e1b,	// (0x0002f9fb) list_double_graphic_pane_g2

0x4e2a,	// (0x0002fa0a) list_double_graphic_pane_g3_ParamLimits

0x4e2a,	// (0x0002fa0a) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0003a1e7) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0003a1e7) list_double_graphic_pane_g

0x4e42,	// (0x0002fa22) list_double_graphic_pane_t1_ParamLimits

0x4e42,	// (0x0002fa22) list_double_graphic_pane_t1

0x4e58,	// (0x0002fa38) list_double_graphic_pane_t2_ParamLimits

0x4e58,	// (0x0002fa38) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0003a1f0) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0003a1f0) list_double_graphic_pane_t

0x4e6a,	// (0x0002fa4a) list_double2_graphic_pane_g1_ParamLimits

0x4e6a,	// (0x0002fa4a) list_double2_graphic_pane_g1

0x4e76,	// (0x0002fa56) list_double2_graphic_pane_g2_ParamLimits

0x4e76,	// (0x0002fa56) list_double2_graphic_pane_g2

0x4da1,	// (0x0002f981) list_double2_graphic_pane_g3_ParamLimits

0x4da1,	// (0x0002f981) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0003a1f5) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0003a1f5) list_double2_graphic_pane_g

0x4e82,	// (0x0002fa62) list_double2_graphic_pane_t1_ParamLimits

0x4e82,	// (0x0002fa62) list_double2_graphic_pane_t1

0x4e98,	// (0x0002fa78) list_double2_graphic_pane_t2_ParamLimits

0x4e98,	// (0x0002fa78) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003a1fc) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003a1fc) list_double2_graphic_pane_t

0x4eaa,	// (0x0002fa8a) list_double_large_graphic_pane_g1_ParamLimits

0x4eaa,	// (0x0002fa8a) list_double_large_graphic_pane_g1

0x4ebd,	// (0x0002fa9d) list_double_large_graphic_pane_g2_ParamLimits

0x4ebd,	// (0x0002fa9d) list_double_large_graphic_pane_g2

0x4d5c,	// (0x0002f93c) list_double_large_graphic_pane_g3_ParamLimits

0x4d5c,	// (0x0002f93c) list_double_large_graphic_pane_g3

0x4ece,	// (0x0002faae) list_double_large_graphic_pane_g4_ParamLimits

0x4ece,	// (0x0002faae) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0003a201) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0003a201) list_double_large_graphic_pane_g

0x4ef5,	// (0x0002fad5) list_double_large_graphic_pane_t1_ParamLimits

0x4ef5,	// (0x0002fad5) list_double_large_graphic_pane_t1

0x4f0e,	// (0x0002faee) list_double_large_graphic_pane_t2_ParamLimits

0x4f0e,	// (0x0002faee) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003a20c) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003a20c) list_double_large_graphic_pane_t

0x4f20,	// (0x0002fb00) list_double2_large_graphic_pane_g1_ParamLimits

0x4f20,	// (0x0002fb00) list_double2_large_graphic_pane_g1

0x4d90,	// (0x0002f970) list_double2_large_graphic_pane_g2_ParamLimits

0x4d90,	// (0x0002f970) list_double2_large_graphic_pane_g2

0x4da1,	// (0x0002f981) list_double2_large_graphic_pane_g3_ParamLimits

0x4da1,	// (0x0002f981) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0003a211) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0003a211) list_double2_large_graphic_pane_g

0x4f2c,	// (0x0002fb0c) list_double2_large_graphic_pane_t1_ParamLimits

0x4f2c,	// (0x0002fb0c) list_double2_large_graphic_pane_t1

0x4f42,	// (0x0002fb22) list_double2_large_graphic_pane_t2_ParamLimits

0x4f42,	// (0x0002fb22) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0003a218) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0003a218) list_double2_large_graphic_pane_t

0x4f54,	// (0x0002fb34) list_double_heading_pane_g1_ParamLimits

0x4f54,	// (0x0002fb34) list_double_heading_pane_g1

0x4f65,	// (0x0002fb45) list_double_heading_pane_g2_ParamLimits

0x4f65,	// (0x0002fb45) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0003a21d) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0003a21d) list_double_heading_pane_g

0x4f71,	// (0x0002fb51) list_double_heading_pane_t1_ParamLimits

0x4f71,	// (0x0002fb51) list_double_heading_pane_t1

0x4dc3,	// (0x0002f9a3) list_double_heading_pane_t2_ParamLimits

0x4dc3,	// (0x0002f9a3) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0003a222) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0003a222) list_double_heading_pane_t

0x4f87,	// (0x0002fb67) list_double_graphic_heading_pane_g1_ParamLimits

0x4f87,	// (0x0002fb67) list_double_graphic_heading_pane_g1

0x4f54,	// (0x0002fb34) list_double_graphic_heading_pane_g2_ParamLimits

0x4f54,	// (0x0002fb34) list_double_graphic_heading_pane_g2

0x4f65,	// (0x0002fb45) list_double_graphic_heading_pane_g3_ParamLimits

0x4f65,	// (0x0002fb45) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0003a227) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0003a227) list_double_graphic_heading_pane_g

0x4f93,	// (0x0002fb73) list_double_graphic_heading_pane_t1_ParamLimits

0x4f93,	// (0x0002fb73) list_double_graphic_heading_pane_t1

0x4e98,	// (0x0002fa78) list_double_graphic_heading_pane_t2_ParamLimits

0x4e98,	// (0x0002fa78) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0003a22e) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0003a22e) list_double_graphic_heading_pane_t

0x4ebd,	// (0x0002fa9d) list_double_time_pane_g1_ParamLimits

0x4ebd,	// (0x0002fa9d) list_double_time_pane_g1

0x4d5c,	// (0x0002f93c) list_double_time_pane_g2_ParamLimits

0x4d5c,	// (0x0002f93c) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0003a233) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0003a233) list_double_time_pane_g

0x4fa9,	// (0x0002fb89) list_double_time_pane_t1_ParamLimits

0x4fa9,	// (0x0002fb89) list_double_time_pane_t1

0x4fbf,	// (0x0002fb9f) list_double_time_pane_t2_ParamLimits

0x4fbf,	// (0x0002fb9f) list_double_time_pane_t2

0x4fd1,	// (0x0002fbb1) list_double_time_pane_t3_ParamLimits

0x4fd1,	// (0x0002fbb1) list_double_time_pane_t3

0x4fe3,	// (0x0002fbc3) list_double_time_pane_t4_ParamLimits

0x4fe3,	// (0x0002fbc3) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0003a238) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0003a238) list_double_time_pane_t

0x4e76,	// (0x0002fa56) list_setting_pane_g1_ParamLimits

0x4e76,	// (0x0002fa56) list_setting_pane_g1

0x4da1,	// (0x0002f981) list_setting_pane_g2_ParamLimits

0x4da1,	// (0x0002f981) list_setting_pane_g2

0x0001,

0xf661,	// (0x0003a241) list_setting_pane_g_ParamLimits

0xf661,	// (0x0003a241) list_setting_pane_g

0x4ff5,	// (0x0002fbd5) list_setting_pane_t1_ParamLimits

0x4ff5,	// (0x0002fbd5) list_setting_pane_t1

0x500f,	// (0x0002fbef) list_setting_pane_t2_ParamLimits

0x500f,	// (0x0002fbef) list_setting_pane_t2

0x0002,

0xf666,	// (0x0003a246) list_setting_pane_t_ParamLimits

0xf666,	// (0x0003a246) list_setting_pane_t

0x504e,	// (0x0002fc2e) set_value_pane_cp_ParamLimits

0x504e,	// (0x0002fc2e) set_value_pane_cp

0x505a,	// (0x0002fc3a) list_setting_number_pane_g1_ParamLimits

0x505a,	// (0x0002fc3a) list_setting_number_pane_g1

0x5066,	// (0x0002fc46) list_setting_number_pane_g2_ParamLimits

0x5066,	// (0x0002fc46) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0003a24d) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0003a24d) list_setting_number_pane_g

0x5072,	// (0x0002fc52) list_setting_number_pane_t1_ParamLimits

0x5072,	// (0x0002fc52) list_setting_number_pane_t1

0x508b,	// (0x0002fc6b) list_setting_number_pane_t2_ParamLimits

0x508b,	// (0x0002fc6b) list_setting_number_pane_t2

0x50a5,	// (0x0002fc85) list_setting_number_pane_t3_ParamLimits

0x50a5,	// (0x0002fc85) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0003a252) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0003a252) list_setting_number_pane_t

0x504e,	// (0x0002fc2e) set_value_pane_ParamLimits

0x504e,	// (0x0002fc2e) set_value_pane

0x86dd,	// (0x000332bd) bg_set_opt_pane_ParamLimits

0x86dd,	// (0x000332bd) bg_set_opt_pane

0x50e8,	// (0x0002fcc8) set_value_pane_t1

0x86fe,	// (0x000332de) slider_set_pane_cp3

0x8707,	// (0x000332e7) volume_small_pane_cp

0x8710,	// (0x000332f0) list_form_gen_pane

0x8719,	// (0x000332f9) scroll_pane_cp8

0x50fe,	// (0x0002fcde) form_field_data_pane_ParamLimits

0x50fe,	// (0x0002fcde) form_field_data_pane

0x511e,	// (0x0002fcfe) form_field_data_wide_pane_ParamLimits

0x511e,	// (0x0002fcfe) form_field_data_wide_pane

0x513f,	// (0x0002fd1f) form_field_popup_pane_ParamLimits

0x513f,	// (0x0002fd1f) form_field_popup_pane

0x515f,	// (0x0002fd3f) form_field_popup_wide_pane_ParamLimits

0x515f,	// (0x0002fd3f) form_field_popup_wide_pane

0x517c,	// (0x0002fd5c) form_field_slider_pane_ParamLimits

0x517c,	// (0x0002fd5c) form_field_slider_pane

0x518f,	// (0x0002fd6f) form_field_slider_wide_pane_ParamLimits

0x518f,	// (0x0002fd6f) form_field_slider_wide_pane

0x872a,	// (0x0003330a) data_form_pane

0x51ac,	// (0x0002fd8c) form_field_data_pane_t1

0x8736,	// (0x00033316) input_focus_pane

0x51c4,	// (0x0002fda4) data_form_wide_pane

0x51e1,	// (0x0002fdc1) form_field_data_wide_pane_t1

0x84a7,	// (0x00033087) input_focus_pane_cp6

0x5203,	// (0x0002fde3) form_field_popup_pane_t1

0x8736,	// (0x00033316) input_focus_pane_cp7

0x8764,	// (0x00033344) list_form_pane

0x5223,	// (0x0002fe03) form_field_popup_wide_pane_t1

0x8736,	// (0x00033316) input_focus_pane_cp8

0x8770,	// (0x00033350) list_form_wide_pane

0x5240,	// (0x0002fe20) form_field_slider_pane_t1_ParamLimits

0x5240,	// (0x0002fe20) form_field_slider_pane_t1

0x5256,	// (0x0002fe36) form_field_slider_pane_t2_ParamLimits

0x5256,	// (0x0002fe36) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0003a262) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0003a262) form_field_slider_pane_t

0x811c,	// (0x00032cfc) input_focus_pane_cp9_ParamLimits

0x811c,	// (0x00032cfc) input_focus_pane_cp9

0x526b,	// (0x0002fe4b) slider_cont_pane_ParamLimits

0x526b,	// (0x0002fe4b) slider_cont_pane

0x877c,	// (0x0003335c) form_field_slider_wide_pane_t1_ParamLimits

0x877c,	// (0x0003335c) form_field_slider_wide_pane_t1

0x527f,	// (0x0002fe5f) form_field_slider_wide_pane_t2_ParamLimits

0x527f,	// (0x0002fe5f) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0003a267) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0003a267) form_field_slider_wide_pane_t

0x811c,	// (0x00032cfc) input_focus_pane_cp10_ParamLimits

0x811c,	// (0x00032cfc) input_focus_pane_cp10

0x5291,	// (0x0002fe71) slider_cont_pane_cp1_ParamLimits

0x5291,	// (0x0002fe71) slider_cont_pane_cp1

0x52a5,	// (0x0002fe85) slider_form_pane_cp

0x878e,	// (0x0003336e) input_focus_pane_g1

0x8796,	// (0x00033376) input_focus_pane_g2

0x879e,	// (0x0003337e) input_focus_pane_g3

0x87a6,	// (0x00033386) input_focus_pane_g4

0x87ae,	// (0x0003338e) input_focus_pane_g5

0x87b6,	// (0x00033396) input_focus_pane_g6

0x87be,	// (0x0003339e) input_focus_pane_g7

0x87c6,	// (0x000333a6) input_focus_pane_g8

0x87ce,	// (0x000333ae) input_focus_pane_g9

0x752f,	// (0x0003210f) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0003a26c) input_focus_pane_g

0xa230,	// (0x00034e10) wait_border_pane_g3_copy1

0x52ad,	// (0x0002fe8d) data_form_pane_t1

0x752f,	// (0x0003210f) wait_anim_pane_g1_copy1

0x7690,	// (0x00032270) data_form_wide_pane_t1

0x52c8,	// (0x0002fea8) list_form_graphic_pane_cp_ParamLimits

0x52c8,	// (0x0002fea8) list_form_graphic_pane_cp

0xb151,	// (0x00035d31) slider_form_pane_g1

0xb15a,	// (0x00035d3a) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0003a56f) slider_form_pane_g

0x52e1,	// (0x0002fec1) list_form_graphic_pane_ParamLimits

0x52e1,	// (0x0002fec1) list_form_graphic_pane

0x52fd,	// (0x0002fedd) list_form_graphic_pane_g1

0x5305,	// (0x0002fee5) list_form_graphic_pane_t1_ParamLimits

0x5305,	// (0x0002fee5) list_form_graphic_pane_t1

0x7619,	// (0x000321f9) list_highlight_pane_cp5_ParamLimits

0x7619,	// (0x000321f9) list_highlight_pane_cp5

0x531a,	// (0x0002fefa) find_pane_g1

0x87d6,	// (0x000333b6) input_find_pane

0x5323,	// (0x0002ff03) input_find_pane_g1_ParamLimits

0x5323,	// (0x0002ff03) input_find_pane_g1

0x532f,	// (0x0002ff0f) input_find_pane_t1_ParamLimits

0x532f,	// (0x0002ff0f) input_find_pane_t1

0x5344,	// (0x0002ff24) input_find_pane_t2_ParamLimits

0x5344,	// (0x0002ff24) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0003a281) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0003a281) input_find_pane_t

0x87df,	// (0x000333bf) input_focus_pane_cp5_ParamLimits

0x87df,	// (0x000333bf) input_focus_pane_cp5

0x87f9,	// (0x000333d9) bg_popup_window_pane_cp2_ParamLimits

0x87f9,	// (0x000333d9) bg_popup_window_pane_cp2

0x8806,	// (0x000333e6) listscroll_menu_pane_ParamLimits

0x8806,	// (0x000333e6) listscroll_menu_pane

0x8812,	// (0x000333f2) popup_submenu_window_ParamLimits

0x8812,	// (0x000333f2) popup_submenu_window

0x883e,	// (0x0003341e) find_popup_pane_g1

0x8846,	// (0x00033426) input_popup_find_pane_cp

0x87df,	// (0x000333bf) input_focus_pane_cp4_ParamLimits

0x87df,	// (0x000333bf) input_focus_pane_cp4

0x885c,	// (0x0003343c) input_popup_find_pane_t1_ParamLimits

0x885c,	// (0x0003343c) input_popup_find_pane_t1

0x7539,	// (0x00032119) bg_popup_sub_pane_cp

0x888a,	// (0x0003346a) listscroll_popup_sub_pane

0x8892,	// (0x00033472) list_submenu_pane_ParamLimits

0x8892,	// (0x00033472) list_submenu_pane

0x88a3,	// (0x00033483) scroll_pane_cp4

0x88ab,	// (0x0003348b) list_single_popup_submenu_pane_ParamLimits

0x88ab,	// (0x0003348b) list_single_popup_submenu_pane

0x88bf,	// (0x0003349f) list_single_popup_submenu_pane_g1

0x88c7,	// (0x000334a7) list_single_popup_submenu_pane_t1_ParamLimits

0x88c7,	// (0x000334a7) list_single_popup_submenu_pane_t1

0x7619,	// (0x000321f9) bg_active_tab_pane_cp1_ParamLimits

0x7619,	// (0x000321f9) bg_active_tab_pane_cp1

0x88dc,	// (0x000334bc) tabs_2_active_pane_g1

0x88e4,	// (0x000334c4) tabs_2_active_pane_t1

0x7619,	// (0x000321f9) bg_passive_tab_pane_cp1_ParamLimits

0x7619,	// (0x000321f9) bg_passive_tab_pane_cp1

0x88dc,	// (0x000334bc) tabs_2_passive_pane_g1

0x88e4,	// (0x000334c4) tabs_2_passive_pane_t1

0x88f6,	// (0x000334d6) bg_active_tab_pane_cp4

0x8904,	// (0x000334e4) tabs_2_long_active_pane_t1

0x8917,	// (0x000334f7) bg_passive_tab_pane_cp4

0x6032,	// (0x00030c12) list_single_midp_graphic_pane_g4_ParamLimits

0x88f6,	// (0x000334d6) bg_active_tab_pane_cp5

0x8923,	// (0x00033503) tabs_3_long_active_pane_t1

0x8917,	// (0x000334f7) bg_passive_tab_pane_cp5

0x6032,	// (0x00030c12) list_single_midp_graphic_pane_g4

0x7619,	// (0x000321f9) bg_popup_window_pane_cp13_ParamLimits

0x7619,	// (0x000321f9) bg_popup_window_pane_cp13

0x893e,	// (0x0003351e) listscroll_popup_fast_pane_ParamLimits

0x893e,	// (0x0003351e) listscroll_popup_fast_pane

0x894d,	// (0x0003352d) grid_popup_fast_pane_ParamLimits

0x894d,	// (0x0003352d) grid_popup_fast_pane

0x895f,	// (0x0003353f) scroll_pane_cp9_ParamLimits

0x895f,	// (0x0003353f) scroll_pane_cp9

0xca50,	// (0x00037630) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xca50,	// (0x00037630) list_single_graphic_hl_pane_t1_cp2

0x8983,	// (0x00033563) input_focus_pane_cp20_ParamLimits

0x8983,	// (0x00033563) input_focus_pane_cp20

0x8991,	// (0x00033571) query_popup_data_pane_t1_ParamLimits

0x8991,	// (0x00033571) query_popup_data_pane_t1

0x89a4,	// (0x00033584) query_popup_data_pane_t2_ParamLimits

0x89a4,	// (0x00033584) query_popup_data_pane_t2

0x89ea,	// (0x000335ca) query_popup_data_pane_t3_ParamLimits

0x89ea,	// (0x000335ca) query_popup_data_pane_t3

0x8a2b,	// (0x0003360b) query_popup_data_pane_t4_ParamLimits

0x8a2b,	// (0x0003360b) query_popup_data_pane_t4

0x8a67,	// (0x00033647) query_popup_data_pane_t5_ParamLimits

0x8a67,	// (0x00033647) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0003a286) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0003a286) query_popup_data_pane_t

0x878e,	// (0x0003336e) bg_set_opt_pane_g1

0x8796,	// (0x00033376) bg_set_opt_pane_g2

0x879e,	// (0x0003337e) bg_set_opt_pane_g3

0x87a6,	// (0x00033386) bg_set_opt_pane_g4

0x87ae,	// (0x0003338e) bg_set_opt_pane_g5

0x87b6,	// (0x00033396) bg_set_opt_pane_g6

0x87be,	// (0x0003339e) bg_set_opt_pane_g7

0x87c6,	// (0x000333a6) bg_set_opt_pane_g8

0x87ce,	// (0x000333ae) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0003a291) bg_set_opt_pane_g

0x5680,	// (0x00030260) control_top_pane_stacon_ParamLimits

0x5680,	// (0x00030260) control_top_pane_stacon

0x56d3,	// (0x000302b3) signal_pane_stacon_ParamLimits

0x56d3,	// (0x000302b3) signal_pane_stacon

0x9059,	// (0x00033c39) stacon_top_pane_g1_ParamLimits

0x9059,	// (0x00033c39) stacon_top_pane_g1

0x56f8,	// (0x000302d8) title_pane_stacon_ParamLimits

0x56f8,	// (0x000302d8) title_pane_stacon

0x5722,	// (0x00030302) uni_indicator_pane_stacon_ParamLimits

0x5722,	// (0x00030302) uni_indicator_pane_stacon

0x5737,	// (0x00030317) battery_pane_stacon_ParamLimits

0x5737,	// (0x00030317) battery_pane_stacon

0x577b,	// (0x0003035b) control_bottom_pane_stacon_ParamLimits

0x577b,	// (0x0003035b) control_bottom_pane_stacon

0x579e,	// (0x0003037e) navi_pane_stacon_ParamLimits

0x579e,	// (0x0003037e) navi_pane_stacon

0x907b,	// (0x00033c5b) stacon_bottom_pane_g1_ParamLimits

0x907b,	// (0x00033c5b) stacon_bottom_pane_g1

0x5359,	// (0x0002ff39) aid_levels_signal_lsc_ParamLimits

0x5359,	// (0x0002ff39) aid_levels_signal_lsc

0x536f,	// (0x0002ff4f) signal_pane_stacon_g1_ParamLimits

0x536f,	// (0x0002ff4f) signal_pane_stacon_g1

0x5383,	// (0x0002ff63) signal_pane_stacon_g2_ParamLimits

0x5383,	// (0x0002ff63) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0003a2a4) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0003a2a4) signal_pane_stacon_g

0x53b8,	// (0x0002ff98) title_pane_stacon_t1_ParamLimits

0x53b8,	// (0x0002ff98) title_pane_stacon_t1

0x8aab,	// (0x0003368b) uni_indicator_pane_stacon_g1

0x8ab5,	// (0x00033695) uni_indicator_pane_stacon_g2

0x8abf,	// (0x0003369f) uni_indicator_pane_stacon_g3

0x8ac9,	// (0x000336a9) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0003a2b0) uni_indicator_pane_stacon_g

0x53dd,	// (0x0002ffbd) control_top_pane_stacon_g1

0x53e5,	// (0x0002ffc5) control_top_pane_stacon_t1_ParamLimits

0x53e5,	// (0x0002ffc5) control_top_pane_stacon_t1

0x541c,	// (0x0002fffc) aid_levels_battery_lsc_ParamLimits

0x541c,	// (0x0002fffc) aid_levels_battery_lsc

0x5433,	// (0x00030013) battery_pane_stacon_g1_ParamLimits

0x5433,	// (0x00030013) battery_pane_stacon_g1

0x5446,	// (0x00030026) battery_pane_stacon_g2_ParamLimits

0x5446,	// (0x00030026) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0003a2b9) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0003a2b9) battery_pane_stacon_g

0x5484,	// (0x00030064) navi_icon_pane_stacon

0x5498,	// (0x00030078) navi_navi_pane_stacon

0x5484,	// (0x00030064) navi_text_pane_stacon

0x53dd,	// (0x0002ffbd) control_bottom_pane_stacon_g1

0x54ac,	// (0x0003008c) control_bottom_pane_stacon_t1_ParamLimits

0x54ac,	// (0x0003008c) control_bottom_pane_stacon_t1

0x8aed,	// (0x000336cd) grid_app_pane_ParamLimits

0x8aed,	// (0x000336cd) grid_app_pane

0x8b0f,	// (0x000336ef) scroll_pane_cp15_ParamLimits

0x8b0f,	// (0x000336ef) scroll_pane_cp15

0x8b22,	// (0x00033702) cell_app_pane_ParamLimits

0x8b22,	// (0x00033702) cell_app_pane

0x8b4a,	// (0x0003372a) cell_app_pane_g1_ParamLimits

0x8b4a,	// (0x0003372a) cell_app_pane_g1

0x8b6e,	// (0x0003374e) cell_app_pane_g2_ParamLimits

0x8b6e,	// (0x0003374e) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0003a2be) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0003a2be) cell_app_pane_g

0x8b7a,	// (0x0003375a) cell_app_pane_t1_ParamLimits

0x8b7a,	// (0x0003375a) cell_app_pane_t1

0x8b91,	// (0x00033771) grid_highlight_pane_ParamLimits

0x8b91,	// (0x00033771) grid_highlight_pane

0x878e,	// (0x0003336e) cell_highlight_pane_g1

0x8796,	// (0x00033376) cell_highlight_pane_g2

0x879e,	// (0x0003337e) cell_highlight_pane_g3

0x87a6,	// (0x00033386) cell_highlight_pane_g4

0x87ae,	// (0x0003338e) cell_highlight_pane_g5

0x87b6,	// (0x00033396) cell_highlight_pane_g6

0x87be,	// (0x0003339e) cell_highlight_pane_g7

0x87c6,	// (0x000333a6) cell_highlight_pane_g8

0x87ce,	// (0x000333ae) cell_highlight_pane_g9

0x752f,	// (0x0003210f) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0003a26c) cell_highlight_pane_g

0x8ba2,	// (0x00033782) bg_scroll_pane

0x54f6,	// (0x000300d6) scroll_handle_pane

0x8be9,	// (0x000337c9) scroll_bg_pane_g1

0x8bfe,	// (0x000337de) scroll_bg_pane_g2

0x8c16,	// (0x000337f6) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0003a2c3) scroll_bg_pane_g

0x8c2b,	// (0x0003380b) scroll_handle_focus_pane_ParamLimits

0x8c2b,	// (0x0003380b) scroll_handle_focus_pane

0x8be9,	// (0x000337c9) scroll_handle_pane_g1

0x8c38,	// (0x00033818) scroll_handle_pane_g2

0x8c16,	// (0x000337f6) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0003a2ca) scroll_handle_pane_g

0x87df,	// (0x000333bf) bg_popup_sub_pane_cp21_ParamLimits

0x87df,	// (0x000333bf) bg_popup_sub_pane_cp21

0x8c4c,	// (0x0003382c) popup_fep_japan_predictive_window_t1_ParamLimits

0x8c4c,	// (0x0003382c) popup_fep_japan_predictive_window_t1

0x8c66,	// (0x00033846) popup_fep_japan_predictive_window_t2_ParamLimits

0x8c66,	// (0x00033846) popup_fep_japan_predictive_window_t2

0x8c99,	// (0x00033879) popup_fep_japan_predictive_window_t3_ParamLimits

0x8c99,	// (0x00033879) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0003a2d1) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0003a2d1) popup_fep_japan_predictive_window_t

0x7539,	// (0x00032119) bg_popup_sub_pane_cp23

0x8cd0,	// (0x000338b0) listscroll_japin_cand_pane

0x8cd8,	// (0x000338b8) popup_fep_japan_candidate_window_t1

0x8ce6,	// (0x000338c6) candidate_pane_ParamLimits

0x8ce6,	// (0x000338c6) candidate_pane

0x8cf8,	// (0x000338d8) scroll_pane_cp30

0x8d00,	// (0x000338e0) list_single_popup_jap_candidate_pane_ParamLimits

0x8d00,	// (0x000338e0) list_single_popup_jap_candidate_pane

0x7539,	// (0x00032119) list_highlight_pane_cp30

0x8d15,	// (0x000338f5) list_single_popup_jap_candidate_pane_t1

0x8d24,	// (0x00033904) level_1_signal

0x8d36,	// (0x00033916) level_2_signal

0x8d49,	// (0x00033929) level_3_signal

0x8d5c,	// (0x0003393c) level_4_signal

0x8d6f,	// (0x0003394f) level_5_signal

0x8d82,	// (0x00033962) level_6_signal

0x8d95,	// (0x00033975) level_7_signal

0x8d24,	// (0x00033904) level_1_battery

0x8d36,	// (0x00033916) level_2_battery

0x8d49,	// (0x00033929) level_3_battery

0x8d5c,	// (0x0003393c) level_4_battery

0x8d6f,	// (0x0003394f) level_5_battery

0x8d82,	// (0x00033962) level_6_battery

0x8d95,	// (0x00033975) level_7_battery

0x8dc0,	// (0x000339a0) list_menu_pane_ParamLimits

0x8dc0,	// (0x000339a0) list_menu_pane

0x8dd6,	// (0x000339b6) scroll_pane_cp25_ParamLimits

0x8dd6,	// (0x000339b6) scroll_pane_cp25

0x8def,	// (0x000339cf) list_double2_graphic_pane_cp2_ParamLimits

0x8def,	// (0x000339cf) list_double2_graphic_pane_cp2

0x8def,	// (0x000339cf) list_double2_large_graphic_pane_cp2_ParamLimits

0x8def,	// (0x000339cf) list_double2_large_graphic_pane_cp2

0x8def,	// (0x000339cf) list_double2_pane_cp2_ParamLimits

0x8def,	// (0x000339cf) list_double2_pane_cp2

0x8def,	// (0x000339cf) list_double_graphic_pane_cp2_ParamLimits

0x8def,	// (0x000339cf) list_double_graphic_pane_cp2

0x8def,	// (0x000339cf) list_double_large_graphic_pane_cp2_ParamLimits

0x8def,	// (0x000339cf) list_double_large_graphic_pane_cp2

0x8def,	// (0x000339cf) list_double_number_pane_cp2_ParamLimits

0x8def,	// (0x000339cf) list_double_number_pane_cp2

0x8def,	// (0x000339cf) list_double_pane_cp2_ParamLimits

0x8def,	// (0x000339cf) list_double_pane_cp2

0x8e13,	// (0x000339f3) list_single_2graphic_pane_cp2_ParamLimits

0x8e13,	// (0x000339f3) list_single_2graphic_pane_cp2

0x8e13,	// (0x000339f3) list_single_graphic_heading_pane_cp2_ParamLimits

0x8e13,	// (0x000339f3) list_single_graphic_heading_pane_cp2

0x8e13,	// (0x000339f3) list_single_graphic_pane_cp2_ParamLimits

0x8e13,	// (0x000339f3) list_single_graphic_pane_cp2

0x8e13,	// (0x000339f3) list_single_heading_pane_cp2_ParamLimits

0x8e13,	// (0x000339f3) list_single_heading_pane_cp2

0x8e2c,	// (0x00033a0c) list_single_large_graphic_pane_cp2_ParamLimits

0x8e2c,	// (0x00033a0c) list_single_large_graphic_pane_cp2

0x8e13,	// (0x000339f3) list_single_number_heading_pane_cp2_ParamLimits

0x8e13,	// (0x000339f3) list_single_number_heading_pane_cp2

0x8e13,	// (0x000339f3) list_single_number_pane_cp2_ParamLimits

0x8e13,	// (0x000339f3) list_single_number_pane_cp2

0x8e13,	// (0x000339f3) list_single_pane_cp2_ParamLimits

0x8e13,	// (0x000339f3) list_single_pane_cp2

0x8ea8,	// (0x00033a88) bg_popup_sub_pane_cp22

0x55a8,	// (0x00030188) popup_side_volume_key_window_g1

0x55d2,	// (0x000301b2) popup_side_volume_key_window_t1

0x55ee,	// (0x000301ce) volume_small_pane_cp1

0x811c,	// (0x00032cfc) bg_popup_sub_pane_cp24_ParamLimits

0x811c,	// (0x00032cfc) bg_popup_sub_pane_cp24

0x8ebe,	// (0x00033a9e) fep_china_uni_candidate_pane_ParamLimits

0x8ebe,	// (0x00033a9e) fep_china_uni_candidate_pane

0x8ed2,	// (0x00033ab2) fep_china_uni_entry_pane

0x8ee2,	// (0x00033ac2) popup_fep_china_uni_window_g1

0x8efe,	// (0x00033ade) fep_china_uni_entry_pane_g1

0x8f06,	// (0x00033ae6) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0003a302) fep_china_uni_entry_pane_g

0x8f0e,	// (0x00033aee) fep_entry_item_pane

0x8f18,	// (0x00033af8) fep_candidate_item_pane

0x8f20,	// (0x00033b00) fep_china_uni_candidate_pane_g1

0x8f28,	// (0x00033b08) fep_china_uni_candidate_pane_g2

0x8f30,	// (0x00033b10) fep_china_uni_candidate_pane_g3

0x8f38,	// (0x00033b18) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0003a307) fep_china_uni_candidate_pane_g

0x752f,	// (0x0003210f) fep_entry_item_pane_g1

0x8f40,	// (0x00033b20) fep_entry_item_pane_t1_ParamLimits

0x8f40,	// (0x00033b20) fep_entry_item_pane_t1

0x8f56,	// (0x00033b36) fep_candidate_item_pane_t1_ParamLimits

0x8f56,	// (0x00033b36) fep_candidate_item_pane_t1

0x8f6b,	// (0x00033b4b) fep_candidate_item_pane_t2_ParamLimits

0x8f6b,	// (0x00033b4b) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0003a310) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0003a310) fep_candidate_item_pane_t

0x7619,	// (0x000321f9) list_highlight_pane_cp31_ParamLimits

0x7619,	// (0x000321f9) list_highlight_pane_cp31

0x8f7d,	// (0x00033b5d) level_1_signal_lsc

0x8f86,	// (0x00033b66) level_2_signal_lsc

0x8f8f,	// (0x00033b6f) level_3_signal_lsc

0x8f98,	// (0x00033b78) level_4_signal_lsc

0x8fa1,	// (0x00033b81) level_5_signal_lsc

0x8faa,	// (0x00033b8a) level_6_signal_lsc

0x8fb3,	// (0x00033b93) level_7_signal_lsc

0x8fb3,	// (0x00033b93) level_1_battery_lsc

0x8fbc,	// (0x00033b9c) level_2_battery_lsc

0x8fc5,	// (0x00033ba5) level_3_battery_lsc

0x8fce,	// (0x00033bae) level_4_battery_lsc

0x8fd7,	// (0x00033bb7) level_5_battery_lsc

0x8fe0,	// (0x00033bc0) level_6_battery_lsc

0x8f7d,	// (0x00033b5d) level_7_battery_lsc

0x8fe9,	// (0x00033bc9) scroll_handle_focus_pane_g1

0x8ff2,	// (0x00033bd2) scroll_handle_focus_pane_g2

0x8ffb,	// (0x00033bdb) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0003a315) scroll_handle_focus_pane_g

0x55f6,	// (0x000301d6) list_single_2graphic_pane_g1_ParamLimits

0x55f6,	// (0x000301d6) list_single_2graphic_pane_g1

0x4ceb,	// (0x0002f8cb) list_single_2graphic_pane_g2_ParamLimits

0x4ceb,	// (0x0002f8cb) list_single_2graphic_pane_g2

0x4c71,	// (0x0002f851) list_single_2graphic_pane_g3_ParamLimits

0x4c71,	// (0x0002f851) list_single_2graphic_pane_g3

0x5602,	// (0x000301e2) list_single_2graphic_pane_g4_ParamLimits

0x5602,	// (0x000301e2) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0003a31c) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0003a31c) list_single_2graphic_pane_g

0x560e,	// (0x000301ee) list_single_2graphic_pane_t1_ParamLimits

0x560e,	// (0x000301ee) list_single_2graphic_pane_t1

0x563c,	// (0x0003021c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x563c,	// (0x0003021c) list_double2_graphic_large_graphic_pane_g1

0x4d90,	// (0x0002f970) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4d90,	// (0x0002f970) list_double2_graphic_large_graphic_pane_g2

0x4da1,	// (0x0002f981) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4da1,	// (0x0002f981) list_double2_graphic_large_graphic_pane_g3

0x564c,	// (0x0003022c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x564c,	// (0x0003022c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0003a325) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0003a325) list_double2_graphic_large_graphic_pane_g

0x5658,	// (0x00030238) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5658,	// (0x00030238) list_double2_graphic_large_graphic_pane_t1

0x566e,	// (0x0003024e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x566e,	// (0x0003024e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0003a32e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0003a32e) list_double2_graphic_large_graphic_pane_t

0x9143,	// (0x00033d23) popup_fast_swap_window_ParamLimits

0x9143,	// (0x00033d23) popup_fast_swap_window

0x915f,	// (0x00033d3f) popup_side_volume_key_window

0x917b,	// (0x00033d5b) stacon_top_pane

0x9185,	// (0x00033d65) status_pane_ParamLimits

0x9185,	// (0x00033d65) status_pane

0x9193,	// (0x00033d73) status_small_pane

0x7539,	// (0x00032119) control_pane

0x7539,	// (0x00032119) stacon_bottom_pane

0x8719,	// (0x000332f9) scroll_pane_cp121

0x8710,	// (0x000332f0) set_content_pane

0x9004,	// (0x00033be4) bg_active_tab_pane_g1_cp1

0x900d,	// (0x00033bed) bg_active_tab_pane_g2_cp1

0x9016,	// (0x00033bf6) bg_active_tab_pane_g3_cp1

0x9004,	// (0x00033be4) bg_passive_tab_pane_g1_cp1

0x900d,	// (0x00033bed) bg_passive_tab_pane_g2_cp1

0x9016,	// (0x00033bf6) bg_passive_tab_pane_g3_cp1

0x901f,	// (0x00033bff) bg_active_tab_pane_g1_cp2

0x900d,	// (0x00033bed) bg_active_tab_pane_g2_cp2

0x9028,	// (0x00033c08) bg_active_tab_pane_g3_cp2

0x901f,	// (0x00033bff) bg_passive_tab_pane_g1_cp2

0x900d,	// (0x00033bed) bg_passive_tab_pane_g2_cp2

0x9028,	// (0x00033c08) bg_passive_tab_pane_g3_cp2

0x9031,	// (0x00033c11) bg_active_tab_pane_g1_cp3

0x900d,	// (0x00033bed) bg_active_tab_pane_g2_cp3

0x903a,	// (0x00033c1a) bg_active_tab_pane_g3_cp3

0x9031,	// (0x00033c11) bg_passive_tab_pane_g1_cp3

0x900d,	// (0x00033bed) bg_passive_tab_pane_g2_cp3

0x903a,	// (0x00033c1a) bg_passive_tab_pane_g3_cp3

0x9043,	// (0x00033c23) bg_active_tab_pane_g1_cp4

0x900d,	// (0x00033bed) bg_active_tab_pane_g2_cp4

0x904e,	// (0x00033c2e) bg_active_tab_pane_g3_cp4

0x9043,	// (0x00033c23) bg_passive_tab_pane_g1_cp4

0x900d,	// (0x00033bed) bg_passive_tab_pane_g2_cp4

0x904e,	// (0x00033c2e) bg_passive_tab_pane_g3_cp4

0x9097,	// (0x00033c77) bg_active_tab_pane_g1_cp5

0x900d,	// (0x00033bed) bg_active_tab_pane_g2_cp5

0x90a0,	// (0x00033c80) bg_active_tab_pane_g3_cp5

0x9097,	// (0x00033c77) bg_passive_tab_pane_g1_cp5

0x900d,	// (0x00033bed) bg_passive_tab_pane_g2_cp5

0x90a0,	// (0x00033c80) bg_passive_tab_pane_g3_cp5

0x90a9,	// (0x00033c89) list_set_graphic_pane_ParamLimits

0x90a9,	// (0x00033c89) list_set_graphic_pane

0x7539,	// (0x00032119) bg_set_opt_pane_cp4

0x90c6,	// (0x00033ca6) list_set_graphic_pane_g1_ParamLimits

0x90c6,	// (0x00033ca6) list_set_graphic_pane_g1

0x90d2,	// (0x00033cb2) list_set_graphic_pane_g2_ParamLimits

0x90d2,	// (0x00033cb2) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0003a333) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0003a333) list_set_graphic_pane_g

0x0009,

0xfac8,	// (0x0003a6a8) volume_small_pane_cp_g

0x90f6,	// (0x00033cd6) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x90f6,	// (0x00033cd6) list_double2_large_graphic_pane_g1_cp2

0x9102,	// (0x00033ce2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9102,	// (0x00033ce2) list_double2_large_graphic_pane_g2_cp2

0x9113,	// (0x00033cf3) list_double2_large_graphic_pane_g3_cp2

0x911b,	// (0x00033cfb) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x911b,	// (0x00033cfb) list_double2_large_graphic_pane_t1_cp2

0x9131,	// (0x00033d11) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9131,	// (0x00033d11) list_double2_large_graphic_pane_t2_cp2

0xad0f,	// (0x000358ef) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xad0f,	// (0x000358ef) list_double_large_graphic_pane_g1_cp2

0xad20,	// (0x00035900) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad20,	// (0x00035900) list_double_large_graphic_pane_g2_cp2

0x92ac,	// (0x00033e8c) list_double_large_graphic_pane_g3_cp2

0xad31,	// (0x00035911) list_double_large_graphic_pane_g4_cp

0xad39,	// (0x00035919) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xad39,	// (0x00035919) list_double_large_graphic_pane_t1_cp2

0xad50,	// (0x00035930) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xad50,	// (0x00035930) list_double_large_graphic_pane_t2_cp2

0x919e,	// (0x00033d7e) list_double2_graphic_pane_g1_cp2_ParamLimits

0x919e,	// (0x00033d7e) list_double2_graphic_pane_g1_cp2

0x91ac,	// (0x00033d8c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x91ac,	// (0x00033d8c) list_double2_graphic_pane_g2_cp2

0x91bd,	// (0x00033d9d) list_double2_graphic_pane_g3_cp2

0x91c7,	// (0x00033da7) list_double2_graphic_pane_t1_cp2_ParamLimits

0x91c7,	// (0x00033da7) list_double2_graphic_pane_t1_cp2

0x91dd,	// (0x00033dbd) list_double2_graphic_pane_t2_cp2_ParamLimits

0x91dd,	// (0x00033dbd) list_double2_graphic_pane_t2_cp2

0x91ef,	// (0x00033dcf) list_single_number_heading_pane_g1_cp2_ParamLimits

0x91ef,	// (0x00033dcf) list_single_number_heading_pane_g1_cp2

0x91fb,	// (0x00033ddb) list_single_number_heading_pane_g2_cp2

0x9203,	// (0x00033de3) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9203,	// (0x00033de3) list_single_number_heading_pane_t1_cp2

0x9219,	// (0x00033df9) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9219,	// (0x00033df9) list_single_number_heading_pane_t2_cp2

0x922b,	// (0x00033e0b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x922b,	// (0x00033e0b) list_single_number_heading_pane_t3_cp2

0x91ef,	// (0x00033dcf) list_single_heading_pane_g1_cp2_ParamLimits

0x91ef,	// (0x00033dcf) list_single_heading_pane_g1_cp2

0x91fb,	// (0x00033ddb) list_single_heading_pane_g2_cp2

0x9203,	// (0x00033de3) list_single_heading_pane_t1_cp2_ParamLimits

0x9203,	// (0x00033de3) list_single_heading_pane_t1_cp2

0xab17,	// (0x000356f7) list_single_heading_pane_t2_cp2_ParamLimits

0xab17,	// (0x000356f7) list_single_heading_pane_t2_cp2

0xaa5f,	// (0x0003563f) list_double_graphic_pane_g1_cp2_ParamLimits

0xaa5f,	// (0x0003563f) list_double_graphic_pane_g1_cp2

0xaa6b,	// (0x0003564b) list_double_graphic_pane_g2_cp2_ParamLimits

0xaa6b,	// (0x0003564b) list_double_graphic_pane_g2_cp2

0xaa7a,	// (0x0003565a) list_double_graphic_pane_g3_cp2

0xaa82,	// (0x00035662) list_double_graphic_pane_t1_cp2_ParamLimits

0xaa82,	// (0x00035662) list_double_graphic_pane_t1_cp2

0xaa98,	// (0x00035678) list_double_graphic_pane_t2_cp2_ParamLimits

0xaa98,	// (0x00035678) list_double_graphic_pane_t2_cp2

0x92a0,	// (0x00033e80) list_double_number_pane_g1_cp2_ParamLimits

0x92a0,	// (0x00033e80) list_double_number_pane_g1_cp2

0x92ac,	// (0x00033e8c) list_double_number_pane_g2_cp2

0xaa23,	// (0x00035603) list_double_number_pane_t1_cp2_ParamLimits

0xaa23,	// (0x00035603) list_double_number_pane_t1_cp2

0xaa37,	// (0x00035617) list_double_number_pane_t2_cp2_ParamLimits

0xaa37,	// (0x00035617) list_double_number_pane_t2_cp2

0xaa4d,	// (0x0003562d) list_double_number_pane_t3_cp2_ParamLimits

0xaa4d,	// (0x0003562d) list_double_number_pane_t3_cp2

0xa90c,	// (0x000354ec) list_single_graphic_pane_g1_cp2_ParamLimits

0xa90c,	// (0x000354ec) list_single_graphic_pane_g1_cp2

0x9304,	// (0x00033ee4) list_single_graphic_pane_g2_cp2_ParamLimits

0x9304,	// (0x00033ee4) list_single_graphic_pane_g2_cp2

0x9310,	// (0x00033ef0) list_single_graphic_pane_g3_cp2

0xa8e2,	// (0x000354c2) list_single_graphic_pane_t1_cp2_ParamLimits

0xa8e2,	// (0x000354c2) list_single_graphic_pane_t1_cp2

0x9304,	// (0x00033ee4) list_single_number_pane_g1_cp2_ParamLimits

0x9304,	// (0x00033ee4) list_single_number_pane_g1_cp2

0x9310,	// (0x00033ef0) list_single_number_pane_g2_cp2

0xa8e2,	// (0x000354c2) list_single_number_pane_t1_cp2_ParamLimits

0xa8e2,	// (0x000354c2) list_single_number_pane_t1_cp2

0xa8f8,	// (0x000354d8) list_single_number_pane_t2_cp2_ParamLimits

0xa8f8,	// (0x000354d8) list_single_number_pane_t2_cp2

0x9102,	// (0x00033ce2) list_double2_pane_g1_cp2_ParamLimits

0x9102,	// (0x00033ce2) list_double2_pane_g1_cp2

0x9113,	// (0x00033cf3) list_double2_pane_g2_cp2

0x9278,	// (0x00033e58) list_double2_pane_t1_cp2_ParamLimits

0x9278,	// (0x00033e58) list_double2_pane_t1_cp2

0x928e,	// (0x00033e6e) list_double2_pane_t2_cp2_ParamLimits

0x928e,	// (0x00033e6e) list_double2_pane_t2_cp2

0x92a0,	// (0x00033e80) list_double_pane_g1_cp2_ParamLimits

0x92a0,	// (0x00033e80) list_double_pane_g1_cp2

0x92ac,	// (0x00033e8c) list_double_pane_g2_cp2

0x92b4,	// (0x00033e94) list_double_pane_t1_cp2_ParamLimits

0x92b4,	// (0x00033e94) list_double_pane_t1_cp2

0x92ca,	// (0x00033eaa) list_double_pane_t2_cp2_ParamLimits

0x92ca,	// (0x00033eaa) list_double_pane_t2_cp2

0x92f4,	// (0x00033ed4) list_single_pane_cp2_g3

0x9304,	// (0x00033ee4) list_single_pane_g1_cp2_ParamLimits

0x9304,	// (0x00033ee4) list_single_pane_g1_cp2

0x9310,	// (0x00033ef0) list_single_pane_g2_cp2

0x9318,	// (0x00033ef8) list_single_pane_t1_cp2_ParamLimits

0x9318,	// (0x00033ef8) list_single_pane_t1_cp2

0x9330,	// (0x00033f10) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9330,	// (0x00033f10) list_single_large_graphic_pane_g1_cp2

0x933c,	// (0x00033f1c) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x933c,	// (0x00033f1c) list_single_large_graphic_pane_g2_cp2

0x9348,	// (0x00033f28) list_single_large_graphic_pane_g3_cp2

0x9350,	// (0x00033f30) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9350,	// (0x00033f30) list_single_large_graphic_pane_g4_cp1

0x936a,	// (0x00033f4a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x936a,	// (0x00033f4a) list_single_large_graphic_pane_t1_cp2

0xa8ae,	// (0x0003548e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa8ae,	// (0x0003548e) list_single_graphic_heading_pane_g1_cp2

0xa87b,	// (0x0003545b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa87b,	// (0x0003545b) list_single_graphic_heading_pane_g4_cp2

0x9310,	// (0x00033ef0) list_single_graphic_heading_pane_g5_cp2

0xa8ba,	// (0x0003549a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa8ba,	// (0x0003549a) list_single_graphic_heading_pane_t1_cp2

0xa8d0,	// (0x000354b0) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa8d0,	// (0x000354b0) list_single_graphic_heading_pane_t2_cp2

0xa86f,	// (0x0003544f) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa86f,	// (0x0003544f) list_single_2graphic_pane_g1_cp2

0xa87b,	// (0x0003545b) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa87b,	// (0x0003545b) list_single_2graphic_pane_g2_cp2

0x9310,	// (0x00033ef0) list_single_2graphic_pane_g3_cp2

0xa88c,	// (0x0003546c) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa88c,	// (0x0003546c) list_single_2graphic_pane_g4_cp2

0xa898,	// (0x00035478) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa898,	// (0x00035478) list_single_2graphic_pane_t1_cp2

0x752f,	// (0x0003210f) list_highlight_pane_g10_cp1

0xa43b,	// (0x0003501b) list_highlight_pane_g1_cp1

0xa443,	// (0x00035023) list_highlight_pane_g2_cp1

0xa44b,	// (0x0003502b) list_highlight_pane_g3_cp1

0xa453,	// (0x00035033) list_highlight_pane_g4_cp1

0xa45b,	// (0x0003503b) list_highlight_pane_g5_cp1

0xa463,	// (0x00035043) list_highlight_pane_g6_cp1

0xa46b,	// (0x0003504b) list_highlight_pane_g7_cp1

0xa473,	// (0x00035053) list_highlight_pane_g8_cp1

0xa47b,	// (0x0003505b) list_highlight_pane_g9_cp1

0xa35b,	// (0x00034f3b) form_field_slider_pane_t3

0xa369,	// (0x00034f49) form_field_slider_pane_t4

0xa377,	// (0x00034f57) slider_form_pane_ParamLimits

0xa377,	// (0x00034f57) slider_form_pane

0x7539,	// (0x00032119) control_abbreviations

0x7539,	// (0x00032119) control_conventions

0x7539,	// (0x00032119) control_definitions

0x7539,	// (0x00032119) format_table_attribute

0xab61,	// (0x00035741) bg_popup_preview_window_pane_g9

0x7539,	// (0x00032119) format_table_data2

0x7539,	// (0x00032119) format_table_data3

0x7539,	// (0x00032119) format_table_data_example

0x0008,

0x7539,	// (0x00032119) intro_purpose

0xf8ef,	// (0x0003a4cf) bg_popup_preview_window_pane_g

0x7539,	// (0x00032119) texts_category

0x7539,	// (0x00032119) texts_graphics

0x9380,	// (0x00033f60) text_digital

0x938f,	// (0x00033f6f) text_primary

0x939e,	// (0x00033f7e) text_primary_small

0x93ad,	// (0x00033f8d) text_secondary

0x93bc,	// (0x00033f9c) text_title

0xb290,	// (0x00035e70) bg_passive_tab_pane_g1_cp3_srt

0x900d,	// (0x00033bed) bg_passive_tab_pane_g2_cp3_srt

0xb299,	// (0x00035e79) bg_passive_tab_pane_g3_cp3_srt

0x7619,	// (0x000321f9) bg_active_tab_pane_cp3_srt_ParamLimits

0x7619,	// (0x000321f9) bg_active_tab_pane_cp3_srt

0xb2a2,	// (0x00035e82) tabs_4_active_pane_srt_g1

0xb2aa,	// (0x00035e8a) tabs_4_active_pane_srt_t1_ParamLimits

0xb2aa,	// (0x00035e8a) tabs_4_active_pane_srt_t1

0xb290,	// (0x00035e70) bg_active_tab_pane_g1_cp3_copy1

0x900d,	// (0x00033bed) bg_active_tab_pane_g2_cp3_copy1

0xb299,	// (0x00035e79) bg_active_tab_pane_g3_cp3_copy1

0x7619,	// (0x000321f9) tabs_2_long_active_pane_srt_ParamLimits

0x7619,	// (0x000321f9) tabs_2_long_active_pane_srt

0x7619,	// (0x000321f9) tabs_2_long_passive_pane_srt_ParamLimits

0x7619,	// (0x000321f9) tabs_2_long_passive_pane_srt

0x8917,	// (0x000334f7) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8917,	// (0x000334f7) bg_passive_tab_pane_cp4_srt

0xaf84,	// (0x00035b64) bg_passive_tab_pane_g1_cp4_srt

0x900d,	// (0x00033bed) bg_passive_tab_pane_g2_cp4_srt

0xaf8d,	// (0x00035b6d) bg_passive_tab_pane_g3_cp4_srt

0x88f6,	// (0x000334d6) bg_active_tab_pane_cp4_srt_ParamLimits

0x88f6,	// (0x000334d6) bg_active_tab_pane_cp4_srt

0xaf96,	// (0x00035b76) tabs_2_long_active_pane_srt_t1_ParamLimits

0xaf96,	// (0x00035b76) tabs_2_long_active_pane_srt_t1

0xaf84,	// (0x00035b64) bg_active_tab_pane_g1_cp4_srt

0x900d,	// (0x00033bed) bg_active_tab_pane_g2_cp4_srt

0xaf8d,	// (0x00035b6d) bg_active_tab_pane_g3_cp4_srt

0x811c,	// (0x00032cfc) tabs_3_long_active_pane_srt_ParamLimits

0x811c,	// (0x00032cfc) tabs_3_long_active_pane_srt

0x811c,	// (0x00032cfc) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x811c,	// (0x00032cfc) tabs_3_long_passive_pane_cp_srt

0x811c,	// (0x00032cfc) tabs_3_long_passive_pane_srt_ParamLimits

0x811c,	// (0x00032cfc) tabs_3_long_passive_pane_srt

0x8917,	// (0x000334f7) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8917,	// (0x000334f7) bg_passive_tab_pane_cp5_srt

0x9097,	// (0x00033c77) bg_passive_tab_pane_g1_cp5_srt

0x900d,	// (0x00033bed) bg_passive_tab_pane_g2_cp5_srt

0x90a0,	// (0x00033c80) bg_passive_tab_pane_g3_cp5_srt

0x88f6,	// (0x000334d6) bg_active_tab_pane_cp5_srt_ParamLimits

0x88f6,	// (0x000334d6) bg_active_tab_pane_cp5_srt

0xaf72,	// (0x00035b52) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaf72,	// (0x00035b52) tabs_3_long_active_pane_srt_t1

0x9097,	// (0x00033c77) bg_active_tab_pane_g1_cp5_srt

0x900d,	// (0x00033bed) bg_active_tab_pane_g2_cp5_srt

0x90a0,	// (0x00033c80) bg_active_tab_pane_g3_cp5_srt

0xaf64,	// (0x00035b44) navi_text_pane_srt_t1

0xaf5c,	// (0x00035b3c) navi_icon_pane_srt_g1

0x9591,	// (0x00034171) midp_editing_number_pane_srt

0x93cb,	// (0x00033fab) midp_ticker_pane_srt

0x9599,	// (0x00034179) midp_ticker_pane_srt_g1

0x95a1,	// (0x00034181) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0003a352) midp_ticker_pane_srt_g

0x95a9,	// (0x00034189) midp_ticker_pane_srt_t1

0xaf4d,	// (0x00035b2d) midp_editing_number_pane_t1_copy1

0x93d3,	// (0x00033fb3) listscroll_midp_pane

0x93d3,	// (0x00033fb3) midp_form_pane

0x9443,	// (0x00034023) midp_info_popup_window_ParamLimits

0x9443,	// (0x00034023) midp_info_popup_window

0x87df,	// (0x000333bf) bg_popup_sub_pane_cp50_ParamLimits

0x87df,	// (0x000333bf) bg_popup_sub_pane_cp50

0xa067,	// (0x00034c47) listscroll_midp_info_pane_ParamLimits

0xa067,	// (0x00034c47) listscroll_midp_info_pane

0xa047,	// (0x00034c27) listscroll_form_midp_pane_ParamLimits

0xa047,	// (0x00034c27) listscroll_form_midp_pane

0xa053,	// (0x00034c33) scroll_bar_cp050

0xa027,	// (0x00034c07) list_midp_pane

0xbcd4,	// (0x000368b4) signal_pane_g2_cp

0x9f61,	// (0x00034b41) listscroll_midp_info_pane_t1_ParamLimits

0x9f61,	// (0x00034b41) listscroll_midp_info_pane_t1

0x9f79,	// (0x00034b59) listscroll_midp_info_pane_t2_ParamLimits

0x9f79,	// (0x00034b59) listscroll_midp_info_pane_t2

0x9fb7,	// (0x00034b97) listscroll_midp_info_pane_t3_ParamLimits

0x9fb7,	// (0x00034b97) listscroll_midp_info_pane_t3

0x9ff1,	// (0x00034bd1) listscroll_midp_info_pane_t4_ParamLimits

0x9ff1,	// (0x00034bd1) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0003a40a) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0003a40a) listscroll_midp_info_pane_t

0x88a3,	// (0x00033483) scroll_pane_cp21

0x9eff,	// (0x00034adf) form_midp_field_choice_group_pane

0x9f08,	// (0x00034ae8) form_midp_field_text_pane

0x9f47,	// (0x00034b27) form_midp_field_time_pane

0x9f4f,	// (0x00034b2f) form_midp_gauge_slider_pane

0x9f58,	// (0x00034b38) form_midp_gauge_wait_pane

0x7539,	// (0x00032119) form_midp_image_pane

0x7636,	// (0x00032216) list_single_midp_pane_ParamLimits

0x7636,	// (0x00032216) list_single_midp_pane

0x9eb7,	// (0x00034a97) form_midp_field_text_pane_t1

0x9c87,	// (0x00034867) input_focus_pane_cp050

0x9eee,	// (0x00034ace) list_midp_form_text_pane

0x9e86,	// (0x00034a66) form_midp_field_choice_group_pane_t1

0x9e94,	// (0x00034a74) input_focus_pane_cp051

0x9ea8,	// (0x00034a88) list_midp_choice_pane

0x7539,	// (0x00032119) status_idle_pane

0x9e6a,	// (0x00034a4a) form_midp_field_time_pane_t1

0x752f,	// (0x0003210f) wait_anim_pane_g2_copy1

0x9e78,	// (0x00034a58) form_midp_field_time_pane_t2

0x0001,

0x94f1,	// (0x000340d1) aid_navinavi_width_2_pane

0xf825,	// (0x0003a405) form_midp_field_time_pane_t

0x7539,	// (0x00032119) input_focus_pane_cp052

0x7539,	// (0x00032119) bg_input_focus_pane_cp040

0x9e2a,	// (0x00034a0a) form_midp_gauge_slider_pane_t1

0x9e38,	// (0x00034a18) form_midp_gauge_slider_pane_t2

0x9e46,	// (0x00034a26) form_midp_gauge_slider_pane_t3

0x9e54,	// (0x00034a34) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0003a3fc) form_midp_gauge_slider_pane_t

0x9e62,	// (0x00034a42) form_midp_slider_pane

0x7619,	// (0x000321f9) bg_input_focus_pane_cp041_ParamLimits

0x7619,	// (0x000321f9) bg_input_focus_pane_cp041

0x9df7,	// (0x000349d7) form_midp_gauge_wait_pane_t1_ParamLimits

0x9df7,	// (0x000349d7) form_midp_gauge_wait_pane_t1

0x9e09,	// (0x000349e9) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e09,	// (0x000349e9) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0003a3f7) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0003a3f7) form_midp_gauge_wait_pane_t

0x9e1b,	// (0x000349fb) form_midp_wait_pane_ParamLimits

0x9e1b,	// (0x000349fb) form_midp_wait_pane

0x9dc1,	// (0x000349a1) form_midp_image_pane_g1

0x9dca,	// (0x000349aa) form_midp_image_pane_t1

0x9dd9,	// (0x000349b9) form_midp_image_pane_t2

0x9de8,	// (0x000349c8) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0003a3f0) form_midp_image_pane_t

0x9db8,	// (0x00034998) list_single_midp_pane_g1

0x7627,	// (0x00032207) list_single_midp_pane_t1

0x9d90,	// (0x00034970) list_midp_form_item_pane_ParamLimits

0x9d90,	// (0x00034970) list_midp_form_item_pane

0x9499,	// (0x00034079) list_midp_form_item_pane_t1

0x94a8,	// (0x00034088) midp_ticker_pane_g1

0x94b4,	// (0x00034094) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0003a338) midp_ticker_pane_g

0x94c0,	// (0x000340a0) midp_ticker_pane_t1

0xb19e,	// (0x00035d7e) midp_editing_number_pane_t1

0xb17c,	// (0x00035d5c) midp_editing_number_pane

0xb18b,	// (0x00035d6b) midp_ticker_pane

0xaf3d,	// (0x00035b1d) ai_message_heading_pane

0x7539,	// (0x00032119) bg_popup_window_pane_cp14

0xaf45,	// (0x00035b25) listscroll_ai_message_pane

0xaec7,	// (0x00035aa7) ai_message_heading_pane_g1_ParamLimits

0xaec7,	// (0x00035aa7) ai_message_heading_pane_g1

0xaed3,	// (0x00035ab3) ai_message_heading_pane_g2_ParamLimits

0xaed3,	// (0x00035ab3) ai_message_heading_pane_g2

0xaedf,	// (0x00035abf) ai_message_heading_pane_g3_ParamLimits

0xaedf,	// (0x00035abf) ai_message_heading_pane_g3

0xaeeb,	// (0x00035acb) ai_message_heading_pane_g4_ParamLimits

0xaeeb,	// (0x00035acb) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0003a531) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0003a531) ai_message_heading_pane_g

0xaef7,	// (0x00035ad7) ai_message_heading_pane_t1_ParamLimits

0xaef7,	// (0x00035ad7) ai_message_heading_pane_t1

0xaf11,	// (0x00035af1) ai_message_heading_pane_t2_ParamLimits

0xaf11,	// (0x00035af1) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0003a53a) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0003a53a) ai_message_heading_pane_t

0xaf23,	// (0x00035b03) bg_popup_heading_pane_cp1_ParamLimits

0xaf23,	// (0x00035b03) bg_popup_heading_pane_cp1

0xaeb5,	// (0x00035a95) list_ai_message_pane_ParamLimits

0xaeb5,	// (0x00035a95) list_ai_message_pane

0x88a3,	// (0x00033483) scroll_pane_cp10

0xae51,	// (0x00035a31) list_ai_message_pane_g1

0xae59,	// (0x00035a39) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0003a50e) list_ai_message_pane_g

0xae61,	// (0x00035a41) list_ai_message_pane_t1_ParamLimits

0xae61,	// (0x00035a41) list_ai_message_pane_t1

0xae76,	// (0x00035a56) list_ai_message_pane_t2_ParamLimits

0xae76,	// (0x00035a56) list_ai_message_pane_t2

0xae8b,	// (0x00035a6b) list_ai_message_pane_t3_ParamLimits

0xae8b,	// (0x00035a6b) list_ai_message_pane_t3

0xaea0,	// (0x00035a80) list_ai_message_pane_t4_ParamLimits

0xaea0,	// (0x00035a80) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0003a513) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0003a513) list_ai_message_pane_t

0xae3c,	// (0x00035a1c) cell_ai_soft_ind_pane_ParamLimits

0xae3c,	// (0x00035a1c) cell_ai_soft_ind_pane

0x94d2,	// (0x000340b2) cell_ai_soft_ind_pane_g1_ParamLimits

0x94d2,	// (0x000340b2) cell_ai_soft_ind_pane_g1

0x7539,	// (0x00032119) grid_highlight_cp1

0x94df,	// (0x000340bf) text_secondary_cp56_ParamLimits

0x94df,	// (0x000340bf) text_secondary_cp56

0xae11,	// (0x000359f1) example_general_pane_ParamLimits

0xae11,	// (0x000359f1) example_general_pane

0xae1d,	// (0x000359fd) example_parent_pane_g1_ParamLimits

0xae1d,	// (0x000359fd) example_parent_pane_g1

0xae29,	// (0x00035a09) example_parent_pane_t1_ParamLimits

0xae29,	// (0x00035a09) example_parent_pane_t1

0x5d73,	// (0x00030953) popup_preview_text_window_ParamLimits

0x5d73,	// (0x00030953) popup_preview_text_window

0x92fc,	// (0x00033edc) list_single_pane_cp2_g4

0x81f8,	// (0x00032dd8) bg_popup_preview_window_pane_ParamLimits

0x81f8,	// (0x00032dd8) bg_popup_preview_window_pane

0xab69,	// (0x00035749) popup_preview_text_window_t1_ParamLimits

0xab69,	// (0x00035749) popup_preview_text_window_t1

0xab87,	// (0x00035767) popup_preview_text_window_t2_ParamLimits

0xab87,	// (0x00035767) popup_preview_text_window_t2

0xabd0,	// (0x000357b0) popup_preview_text_window_t3_ParamLimits

0xabd0,	// (0x000357b0) popup_preview_text_window_t3

0xac15,	// (0x000357f5) popup_preview_text_window_t4_ParamLimits

0xac15,	// (0x000357f5) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0003a4e2) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0003a4e2) popup_preview_text_window_t

0xac93,	// (0x00035873) scroll_pane_cp11

0x9c13,	// (0x000347f3) bg_popup_preview_window_pane_g1

0xab29,	// (0x00035709) bg_popup_preview_window_pane_g2

0xab31,	// (0x00035711) bg_popup_preview_window_pane_g3

0xab39,	// (0x00035719) bg_popup_preview_window_pane_g4

0xab41,	// (0x00035721) bg_popup_preview_window_pane_g5

0xab49,	// (0x00035729) bg_popup_preview_window_pane_g6

0xab51,	// (0x00035731) bg_popup_preview_window_pane_g7

0xab59,	// (0x00035739) bg_popup_preview_window_pane_g8

0x47c0,	// (0x0002f3a0) aid_popup_width_pane

0x5d51,	// (0x00030931) popup_midp_note_alarm_window_ParamLimits

0x5d51,	// (0x00030931) popup_midp_note_alarm_window

0x872a,	// (0x0003330a) data_form_pane_ParamLimits

0x51a2,	// (0x0002fd82) form_field_data_pane_g1

0x51ac,	// (0x0002fd8c) form_field_data_pane_t1_ParamLimits

0x8736,	// (0x00033316) input_focus_pane_ParamLimits

0x51c4,	// (0x0002fda4) data_form_wide_pane_ParamLimits

0x51d5,	// (0x0002fdb5) form_field_data_wide_pane_g1

0x51e1,	// (0x0002fdc1) form_field_data_wide_pane_t1_ParamLimits

0x84a7,	// (0x00033087) input_focus_pane_cp6_ParamLimits

0x8850,	// (0x00033430) input_popup_find_pane_g1_ParamLimits

0x8850,	// (0x00033430) input_popup_find_pane_g1

0x5457,	// (0x00030037) aid_navi_side_left_pane

0x546c,	// (0x0003004c) aid_navi_side_right_pane

0xa536,	// (0x00035116) bg_popup_window_pane_cp30_ParamLimits

0xa536,	// (0x00035116) bg_popup_window_pane_cp30

0xa5bc,	// (0x0003519c) popup_midp_note_alarm_window_g1_ParamLimits

0xa5bc,	// (0x0003519c) popup_midp_note_alarm_window_g1

0xa5ec,	// (0x000351cc) popup_midp_note_alarm_window_t1_ParamLimits

0xa5ec,	// (0x000351cc) popup_midp_note_alarm_window_t1

0xa68d,	// (0x0003526d) popup_midp_note_alarm_window_t2_ParamLimits

0xa68d,	// (0x0003526d) popup_midp_note_alarm_window_t2

0xa73b,	// (0x0003531b) popup_midp_note_alarm_window_t3_ParamLimits

0xa73b,	// (0x0003531b) popup_midp_note_alarm_window_t3

0xa76d,	// (0x0003534d) popup_midp_note_alarm_window_t4_ParamLimits

0xa76d,	// (0x0003534d) popup_midp_note_alarm_window_t4

0xa793,	// (0x00035373) popup_midp_note_alarm_window_t5_ParamLimits

0xa793,	// (0x00035373) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0003a47f) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0003a47f) popup_midp_note_alarm_window_t

0xa83f,	// (0x0003541f) wait_bar_pane_cp1_ParamLimits

0xa83f,	// (0x0003541f) wait_bar_pane_cp1

0x7539,	// (0x00032119) wait_anim_pane_copy1

0x7539,	// (0x00032119) wait_border_pane_copy1

0xa21c,	// (0x00034dfc) wait_border_pane_g1_copy1

0x51fb,	// (0x0002fddb) form_field_popup_pane_g1

0x5203,	// (0x0002fde3) form_field_popup_pane_t1_ParamLimits

0x8736,	// (0x00033316) input_focus_pane_cp7_ParamLimits

0x8764,	// (0x00033344) list_form_pane_ParamLimits

0x521b,	// (0x0002fdfb) form_field_popup_wide_pane_g1

0x5223,	// (0x0002fe03) form_field_popup_wide_pane_t1_ParamLimits

0x8736,	// (0x00033316) input_focus_pane_cp8_ParamLimits

0x8770,	// (0x00033350) list_form_wide_pane_ParamLimits

0xb324,	// (0x00035f04) aid_size_cell_graphic_pane

0x52ad,	// (0x0002fe8d) data_form_pane_t1_ParamLimits

0x7690,	// (0x00032270) data_form_wide_pane_t1_ParamLimits

0x97e0,	// (0x000343c0) bg_status_flat_pane

0x7579,	// (0x00032159) title_pane_t1_ParamLimits

0x75e1,	// (0x000321c1) title_pane_t2_ParamLimits

0x7607,	// (0x000321e7) title_pane_t3_ParamLimits

0xf557,	// (0x0003a137) title_pane_t_ParamLimits

0x8d24,	// (0x00033904) level_1_signal_ParamLimits

0x8d36,	// (0x00033916) level_2_signal_ParamLimits

0x8d49,	// (0x00033929) level_3_signal_ParamLimits

0x8d5c,	// (0x0003393c) level_4_signal_ParamLimits

0x8d6f,	// (0x0003394f) level_5_signal_ParamLimits

0x8d82,	// (0x00033962) level_6_signal_ParamLimits

0x8d95,	// (0x00033975) level_7_signal_ParamLimits

0x8d24,	// (0x00033904) level_1_battery_ParamLimits

0x8d36,	// (0x00033916) level_2_battery_ParamLimits

0x8d49,	// (0x00033929) level_3_battery_ParamLimits

0x8d5c,	// (0x0003393c) level_4_battery_ParamLimits

0x8d6f,	// (0x0003394f) level_5_battery_ParamLimits

0x8d82,	// (0x00033962) level_6_battery_ParamLimits

0x8d95,	// (0x00033975) level_7_battery_ParamLimits

0xa43b,	// (0x0003501b) bg_status_flat_pane_g1

0xa443,	// (0x00035023) bg_status_flat_pane_g2

0xa44b,	// (0x0003502b) bg_status_flat_pane_g3

0xa453,	// (0x00035033) bg_status_flat_pane_g4

0xa45b,	// (0x0003503b) bg_status_flat_pane_g5

0xa463,	// (0x00035043) bg_status_flat_pane_g6

0xa46b,	// (0x0003504b) bg_status_flat_pane_g7

0x7eb7,	// (0x00032a97) tabs_3_active_pane_t1_ParamLimits

0x7eb7,	// (0x00032a97) tabs_3_passive_pane_t1_ParamLimits

0x7ed1,	// (0x00032ab1) tabs_4_active_pane_t1_ParamLimits

0x7ed1,	// (0x00032ab1) tabs_4_1_passive_pane_t1_ParamLimits

0x88e4,	// (0x000334c4) tabs_2_active_pane_t1_ParamLimits

0x88e4,	// (0x000334c4) tabs_2_passive_pane_t1_ParamLimits

0x88f6,	// (0x000334d6) bg_active_tab_pane_cp4_ParamLimits

0x8904,	// (0x000334e4) tabs_2_long_active_pane_t1_ParamLimits

0x8917,	// (0x000334f7) bg_passive_tab_pane_cp4_ParamLimits

0x608e,	// (0x00030c6e) list_single_midp_graphic_pane_t1_ParamLimits

0x88f6,	// (0x000334d6) bg_active_tab_pane_cp5_ParamLimits

0x8923,	// (0x00033503) tabs_3_long_active_pane_t1_ParamLimits

0x8917,	// (0x000334f7) bg_passive_tab_pane_cp5_ParamLimits

0x608e,	// (0x00030c6e) list_single_midp_graphic_pane_t1

0x97e0,	// (0x000343c0) bg_status_flat_pane_ParamLimits

0x98a3,	// (0x00034483) indicator_pane_cp2_ParamLimits

0x98a3,	// (0x00034483) indicator_pane_cp2

0x99ce,	// (0x000345ae) navi_pane_srt_ParamLimits

0x99ce,	// (0x000345ae) navi_pane_srt

0x99f2,	// (0x000345d2) popup_clock_digital_analogue_window_cp1

0x7f7e,	// (0x00032b5e) indicator_pane_t1

0x93cb,	// (0x00033fab) copy_highlight_pane

0x93cb,	// (0x00033fab) cursor_graphics_pane

0x93cb,	// (0x00033fab) graphic_within_text_pane

0x93cb,	// (0x00033fab) link_highlight_pane

0xac56,	// (0x00035836) popup_preview_text_window_t5_ParamLimits

0xac56,	// (0x00035836) popup_preview_text_window_t5

0x94f9,	// (0x000340d9) cursor_digital_pane

0x94f9,	// (0x000340d9) cursor_primary_pane

0x950a,	// (0x000340ea) cursor_primary_small_pane

0x9512,	// (0x000340f2) cursor_secondary_pane

0x951a,	// (0x000340fa) cursor_title_pane

0x94f9,	// (0x000340d9) link_highlight_digital_pane

0x9501,	// (0x000340e1) link_highlight_primary_pane

0x950a,	// (0x000340ea) link_highlight_primary_small_pane

0x9512,	// (0x000340f2) link_highlight_secondary_pane

0x951a,	// (0x000340fa) link_highlight_title_pane

0x94f9,	// (0x000340d9) copy_highlight_digital_pane

0x94f9,	// (0x000340d9) copy_highlight_primary_pane

0x950a,	// (0x000340ea) copy_highlight_primary_small_pane

0x9512,	// (0x000340f2) copy_highlight_secondary_pane

0x951a,	// (0x000340fa) copy_highlight_title_pane

0x9512,	// (0x000340f2) graphic_text_digital_pane

0xa4d9,	// (0x000350b9) graphic_text_primary_pane

0xa4e2,	// (0x000350c2) graphic_text_primary_small_pane

0x950a,	// (0x000340ea) graphic_text_secondary_pane

0x94f9,	// (0x000340d9) graphic_text_title_pane

0x9522,	// (0x00034102) cursor_primary_pane_g1

0xa4cb,	// (0x000350ab) cursor_text_primary_t1

0xa4b3,	// (0x00035093) cursor_primary_small_pane_g1

0xa4bd,	// (0x0003509d) cursor_text_primary_small_t1

0xa49b,	// (0x0003507b) cursor_primary_small_pane_g1_copy1

0xa4a5,	// (0x00035085) cursor_text_primary_small_t1_copy1

0xa483,	// (0x00035063) cursor_text_title_t1

0xa491,	// (0x00035071) cursor_title_pane_g1

0x9522,	// (0x00034102) cursor_digital_pane_g1

0x952c,	// (0x0003410c) cursor_text_digital_t1

0x9551,	// (0x00034131) link_highlight_primary_pane_g1

0xa42c,	// (0x0003500c) link_highlight_primary_pane_t1

0x953a,	// (0x0003411a) link_highlight_primary_small_pane_g1

0x9542,	// (0x00034122) link_highlight_primary_small_pane_t1

0x9551,	// (0x00034131) link_highlight_secondary_pane_g1

0x9559,	// (0x00034139) link_highlight_secondary_pane_t1

0xa3a0,	// (0x00034f80) link_highlight_title_pane_g1

0xa3a8,	// (0x00034f88) link_highlight_title_pane_t1

0xa389,	// (0x00034f69) link_highlight_digital_pane_g1

0xa391,	// (0x00034f71) link_highlight_digital_pane_t1

0xa261,	// (0x00034e41) copy_highlight_primary_pane_g1

0xa269,	// (0x00034e49) copy_highlight_primary_pane_t1

0xa23b,	// (0x00034e1b) copy_highlight_primary_small_pane_g1

0xa252,	// (0x00034e32) copy_highlight_primary_small_pane_t1

0x9568,	// (0x00034148) copy_highlight_secondary_pane_g1

0x9570,	// (0x00034150) copy_highlight_secondary_pane_t1

0xa23b,	// (0x00034e1b) copy_highlight_title_pane_g1

0xa243,	// (0x00034e23) copy_highlight_title_pane_t1

0xa261,	// (0x00034e41) copy_highlight_digital_pane_g1

0xb4f2,	// (0x000360d2) copy_highlight_digital_pane_t1

0xb446,	// (0x00036026) graphic_text_primary_pane_g1

0xb4d6,	// (0x000360b6) graphic_text_primary_pane_t1

0xb4e4,	// (0x000360c4) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0003a5ae) graphic_text_primary_pane_t

0xb4b2,	// (0x00036092) graphic_text_primary_small_pane_g1

0xb4ba,	// (0x0003609a) graphic_text_primary_small_pane_t1

0xb4c8,	// (0x000360a8) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0003a5a9) graphic_text_primary_small_pane_t

0xb48e,	// (0x0003606e) graphic_text_secondary_pane_g1

0xb496,	// (0x00036076) graphic_text_secondary_pane_t1

0xb4a4,	// (0x00036084) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0003a5a4) graphic_text_secondary_pane_t

0xb46a,	// (0x0003604a) graphic_text_title_pane_g1

0xb472,	// (0x00036052) graphic_text_title_pane_t1

0xb480,	// (0x00036060) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0003a59f) graphic_text_title_pane_t

0xb446,	// (0x00036026) graphic_text_digital_pane_g1

0xb44e,	// (0x0003602e) graphic_text_digital_pane_t1

0xb45c,	// (0x0003603c) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0003a59a) graphic_text_digital_pane_t

0x7619,	// (0x000321f9) navi_icon_pane_srt_ParamLimits

0x7619,	// (0x000321f9) navi_icon_pane_srt

0x7539,	// (0x00032119) navi_midp_pane_srt

0x7539,	// (0x00032119) navi_navi_pane_srt

0x7619,	// (0x000321f9) navi_text_pane_srt_ParamLimits

0x7619,	// (0x000321f9) navi_text_pane_srt

0xb411,	// (0x00035ff1) navi_navi_icon_text_pane_srt

0xb419,	// (0x00035ff9) navi_navi_pane_srt_g1_ParamLimits

0xb419,	// (0x00035ff9) navi_navi_pane_srt_g1

0xb42b,	// (0x0003600b) navi_navi_pane_srt_g2_ParamLimits

0xb42b,	// (0x0003600b) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0003a595) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0003a595) navi_navi_pane_srt_g

0xb43d,	// (0x0003601d) navi_navi_tabs_pane_srt

0xb411,	// (0x00035ff1) navi_navi_text_pane_srt

0xb411,	// (0x00035ff1) navi_navi_volume_pane_srt

0xb402,	// (0x00035fe2) navi_navi_text_pane_srt_t1

0x647e,	// (0x0003105e) navi_navi_volume_pane_srt_g1

0x6486,	// (0x00031066) volume_small_pane_srt_ParamLimits

0x6486,	// (0x00031066) volume_small_pane_srt

0x57c1,	// (0x000303a1) volume_small_pane_srt_g1_ParamLimits

0x57c1,	// (0x000303a1) volume_small_pane_srt_g1

0x57d1,	// (0x000303b1) volume_small_pane_srt_g2_ParamLimits

0x57d1,	// (0x000303b1) volume_small_pane_srt_g2

0x57e2,	// (0x000303c2) volume_small_pane_srt_g3_ParamLimits

0x57e2,	// (0x000303c2) volume_small_pane_srt_g3

0x57f3,	// (0x000303d3) volume_small_pane_srt_g4_ParamLimits

0x57f3,	// (0x000303d3) volume_small_pane_srt_g4

0x5804,	// (0x000303e4) volume_small_pane_srt_g5_ParamLimits

0x5804,	// (0x000303e4) volume_small_pane_srt_g5

0x5815,	// (0x000303f5) volume_small_pane_srt_g6_ParamLimits

0x5815,	// (0x000303f5) volume_small_pane_srt_g6

0x5826,	// (0x00030406) volume_small_pane_srt_g7_ParamLimits

0x5826,	// (0x00030406) volume_small_pane_srt_g7

0x5837,	// (0x00030417) volume_small_pane_srt_g8_ParamLimits

0x5837,	// (0x00030417) volume_small_pane_srt_g8

0x5848,	// (0x00030428) volume_small_pane_srt_g9_ParamLimits

0x5848,	// (0x00030428) volume_small_pane_srt_g9

0x5859,	// (0x00030439) volume_small_pane_srt_g10_ParamLimits

0x5859,	// (0x00030439) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0003a33d) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0003a33d) volume_small_pane_srt_g

0x82a1,	// (0x00032e81) query_popup_data_pane_cp2

0xb3e8,	// (0x00035fc8) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb3e8,	// (0x00035fc8) navi_navi_icon_text_pane_srt_t1

0xa4d9,	// (0x000350b9) navi_tabs_2_long_pane_srt

0xa4d9,	// (0x000350b9) navi_tabs_2_pane_srt

0xa4d9,	// (0x000350b9) navi_tabs_3_long_pane_srt

0xa4d9,	// (0x000350b9) navi_tabs_3_pane_srt

0xa4d9,	// (0x000350b9) navi_tabs_4_pane_srt

0x645e,	// (0x0003103e) tabs_2_active_pane_srt_ParamLimits

0x645e,	// (0x0003103e) tabs_2_active_pane_srt

0x646e,	// (0x0003104e) tabs_2_passive_pane_srt_ParamLimits

0x646e,	// (0x0003104e) tabs_2_passive_pane_srt

0x96ef,	// (0x000342cf) bg_passive_tab_pane_cp1_srt_ParamLimits

0x96ef,	// (0x000342cf) bg_passive_tab_pane_cp1_srt

0xb3b4,	// (0x00035f94) bg_passive_tab_pane_g1_cp1_srt

0x900d,	// (0x00033bed) bg_passive_tab_pane_g2_cp1_srt

0xb3bd,	// (0x00035f9d) bg_passive_tab_pane_g3_cp1_srt

0x7619,	// (0x000321f9) bg_active_tab_pane_cp1_srt_ParamLimits

0x7619,	// (0x000321f9) bg_active_tab_pane_cp1_srt

0xb3c6,	// (0x00035fa6) tabs_2_active_pane_srt_g1

0xb3ce,	// (0x00035fae) tabs_2_active_pane_srt_t1_ParamLimits

0xb3ce,	// (0x00035fae) tabs_2_active_pane_srt_t1

0xb3b4,	// (0x00035f94) bg_active_tab_pane_g1_cp1_srt

0x900d,	// (0x00033bed) bg_active_tab_pane_g2_cp1_srt

0xb3bd,	// (0x00035f9d) bg_active_tab_pane_g3_cp1_srt

0x642b,	// (0x0003100b) tabs_3_active_pane_srt_ParamLimits

0x642b,	// (0x0003100b) tabs_3_active_pane_srt

0x643c,	// (0x0003101c) tabs_3_passive_pane_cp_srt_ParamLimits

0x643c,	// (0x0003101c) tabs_3_passive_pane_cp_srt

0x644d,	// (0x0003102d) tabs_3_passive_pane_srt_ParamLimits

0x644d,	// (0x0003102d) tabs_3_passive_pane_srt

0x96ef,	// (0x000342cf) bg_passive_tab_pane_cp2_srt_ParamLimits

0x96ef,	// (0x000342cf) bg_passive_tab_pane_cp2_srt

0x957f,	// (0x0003415f) bg_passive_tab_pane_g1_cp2_srt

0x900d,	// (0x00033bed) bg_passive_tab_pane_g2_cp2_srt

0x9588,	// (0x00034168) bg_passive_tab_pane_g3_cp2_srt

0x7619,	// (0x000321f9) bg_active_tab_pane_cp2_srt_ParamLimits

0x7619,	// (0x000321f9) bg_active_tab_pane_cp2_srt

0xb39a,	// (0x00035f7a) tabs_3_active_pane_srt_g1

0xb3a2,	// (0x00035f82) tabs_3_active_pane_srt_t1_ParamLimits

0xb3a2,	// (0x00035f82) tabs_3_active_pane_srt_t1

0x957f,	// (0x0003415f) bg_active_tab_pane_g1_cp2_srt

0x900d,	// (0x00033bed) bg_active_tab_pane_g2_cp2_srt

0x9588,	// (0x00034168) bg_active_tab_pane_g3_cp2_srt

0x63e3,	// (0x00030fc3) tabs_4_active_pane_srt_ParamLimits

0x63e3,	// (0x00030fc3) tabs_4_active_pane_srt

0x63f5,	// (0x00030fd5) tabs_4_passive_pane_cp2_srt_ParamLimits

0x63f5,	// (0x00030fd5) tabs_4_passive_pane_cp2_srt

0x59c8,	// (0x000305a8) aid_size_cell_toolbar

0x8917,	// (0x000334f7) main_idle_act_pane_ParamLimits

0x5b87,	// (0x00030767) popup_large_graphic_colour_window_ParamLimits

0x5eee,	// (0x00030ace) popup_toolbar_window_ParamLimits

0x5eee,	// (0x00030ace) popup_toolbar_window

0xb1ad,	// (0x00035d8d) list_single_graphic_2heading_pane_ParamLimits

0xb1ad,	// (0x00035d8d) list_single_graphic_2heading_pane

0x8ad3,	// (0x000336b3) aid_size_cell_apps_grid_lsc_pane

0x8ae5,	// (0x000336c5) aid_size_cell_apps_grid_prt_pane

0x96ef,	// (0x000342cf) bg_wml_button_pane_cp1_ParamLimits

0x96ef,	// (0x000342cf) bg_wml_button_pane_cp1

0x9eb7,	// (0x00034a97) form_midp_field_text_pane_t1_ParamLimits

0x9c87,	// (0x00034867) input_focus_pane_cp050_ParamLimits

0x9eee,	// (0x00034ace) list_midp_form_text_pane_ParamLimits

0x9e94,	// (0x00034a74) input_focus_pane_cp051_ParamLimits

0x9ea8,	// (0x00034a88) list_midp_choice_pane_ParamLimits

0x9d40,	// (0x00034920) list_single_2graphic_pane_cp3_ParamLimits

0x9d40,	// (0x00034920) list_single_2graphic_pane_cp3

0x9d61,	// (0x00034941) list_single_midp_graphic_pane_ParamLimits

0x9d61,	// (0x00034941) list_single_midp_graphic_pane

0x474a,	// (0x0002f32a) list_single_graphic_2heading_pane_g1_ParamLimits

0x474a,	// (0x0002f32a) list_single_graphic_2heading_pane_g1

0x4756,	// (0x0002f336) list_single_graphic_2heading_pane_g4_ParamLimits

0x4756,	// (0x0002f336) list_single_graphic_2heading_pane_g4

0x4762,	// (0x0002f342) list_single_graphic_2heading_pane_g5_ParamLimits

0x4762,	// (0x0002f342) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0003a390) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0003a390) list_single_graphic_2heading_pane_g

0x476e,	// (0x0002f34e) list_single_graphic_2heading_pane_t1_ParamLimits

0x476e,	// (0x0002f34e) list_single_graphic_2heading_pane_t1

0x4782,	// (0x0002f362) list_single_graphic_2heading_pane_t2_ParamLimits

0x4782,	// (0x0002f362) list_single_graphic_2heading_pane_t2

0x479c,	// (0x0002f37c) list_single_graphic_2heading_pane_t3_ParamLimits

0x479c,	// (0x0002f37c) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0003a397) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0003a397) list_single_graphic_2heading_pane_t

0x9b51,	// (0x00034731) bg_popup_sub_pane_cp2

0x9b7b,	// (0x0003475b) grid_toobar_pane

0x5f9b,	// (0x00030b7b) cell_toolbar_pane_ParamLimits

0x5f9b,	// (0x00030b7b) cell_toolbar_pane

0x9bb7,	// (0x00034797) cell_toolbar_pane_g1_ParamLimits

0x9bb7,	// (0x00034797) cell_toolbar_pane_g1

0x9bcb,	// (0x000347ab) cell_toolbar_pane_g2_ParamLimits

0x9bcb,	// (0x000347ab) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0003a3a5) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0003a3a5) cell_toolbar_pane_g

0x9bed,	// (0x000347cd) grid_highlight_pane_cp2_ParamLimits

0x9bed,	// (0x000347cd) grid_highlight_pane_cp2

0x9c07,	// (0x000347e7) toolbar_button_pane

0x9c13,	// (0x000347f3) toolbar_button_pane_g1

0x9c1b,	// (0x000347fb) toolbar_button_pane_g2

0x9c23,	// (0x00034803) toolbar_button_pane_g3

0x9c2b,	// (0x0003480b) toolbar_button_pane_g4

0x9c33,	// (0x00034813) toolbar_button_pane_g5

0x9c3b,	// (0x0003481b) toolbar_button_pane_g6

0x9c43,	// (0x00034823) toolbar_button_pane_g7

0x9c4b,	// (0x0003482b) toolbar_button_pane_g8

0x9c53,	// (0x00034833) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0003a3aa) toolbar_button_pane_g

0x600d,	// (0x00030bed) list_single_2graphic_pane_g1_cp3_ParamLimits

0x600d,	// (0x00030bed) list_single_2graphic_pane_g1_cp3

0x6019,	// (0x00030bf9) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6019,	// (0x00030bf9) list_single_2graphic_pane_g2_cp3

0x602a,	// (0x00030c0a) list_single_2graphic_pane_g3_cp3

0x6032,	// (0x00030c12) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6032,	// (0x00030c12) list_single_2graphic_pane_g4_cp3

0x603e,	// (0x00030c1e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x603e,	// (0x00030c1e) list_single_2graphic_pane_t1_cp3

0x6082,	// (0x00030c62) list_single_midp_graphic_pane_g2_ParamLimits

0x6082,	// (0x00030c62) list_single_midp_graphic_pane_g2

0x59d0,	// (0x000305b0) aid_zoom_text_primary

0x472e,	// (0x0002f30e) aid_zoom_text_secondary

0x9639,	// (0x00034219) status_small_pane_g7_ParamLimits

0x9639,	// (0x00034219) status_small_pane_g7

0x965c,	// (0x0003423c) status_small_pane_t1_ParamLimits

0x7550,	// (0x00032130) title_pane_g2

0x0003,

0xf54e,	// (0x0003a12e) title_pane_g

0x8345,	// (0x00032f25) aid_size_cell_colour_1_pane_ParamLimits

0x8345,	// (0x00032f25) aid_size_cell_colour_1_pane

0x8359,	// (0x00032f39) aid_size_cell_colour_2_pane_ParamLimits

0x8359,	// (0x00032f39) aid_size_cell_colour_2_pane

0x836d,	// (0x00032f4d) aid_size_cell_colour_3_pane_ParamLimits

0x836d,	// (0x00032f4d) aid_size_cell_colour_3_pane

0x8381,	// (0x00032f61) aid_size_cell_colour_4_pane_ParamLimits

0x8381,	// (0x00032f61) aid_size_cell_colour_4_pane

0x5394,	// (0x0002ff74) title_pane_stacon_g1_ParamLimits

0x5394,	// (0x0002ff74) title_pane_stacon_g1

0xa2c0,	// (0x00034ea0) popup_note_wait_window_g3_ParamLimits

0xa2c0,	// (0x00034ea0) popup_note_wait_window_g3

0xa336,	// (0x00034f16) popup_note_wait_window_t5_ParamLimits

0xa336,	// (0x00034f16) popup_note_wait_window_t5

0x7539,	// (0x00032119) main_feb_china_hwr_fs_writing_pane

0x5a6a,	// (0x0003064a) popup_feb_china_hwr_fs_window_ParamLimits

0x5a6a,	// (0x0003064a) popup_feb_china_hwr_fs_window

0x611a,	// (0x00030cfa) aid_size_cell_hwr_fs_ParamLimits

0x611a,	// (0x00030cfa) aid_size_cell_hwr_fs

0x9c87,	// (0x00034867) bg_popup_sub_pane_cp3_ParamLimits

0x9c87,	// (0x00034867) bg_popup_sub_pane_cp3

0x612f,	// (0x00030d0f) grid_hwr_fs_pane_ParamLimits

0x612f,	// (0x00030d0f) grid_hwr_fs_pane

0x6147,	// (0x00030d27) linegrid_hwr_fs_pane_ParamLimits

0x6147,	// (0x00030d27) linegrid_hwr_fs_pane

0x6157,	// (0x00030d37) cell_hwr_fs_pane_ParamLimits

0x6157,	// (0x00030d37) cell_hwr_fs_pane

0x9c93,	// (0x00034873) linegrid_hwr_fs_pane_g1_ParamLimits

0x9c93,	// (0x00034873) linegrid_hwr_fs_pane_g1

0x9c9f,	// (0x0003487f) linegrid_hwr_fs_pane_g2_ParamLimits

0x9c9f,	// (0x0003487f) linegrid_hwr_fs_pane_g2

0x9cb1,	// (0x00034891) linegrid_hwr_fs_pane_g3_ParamLimits

0x9cb1,	// (0x00034891) linegrid_hwr_fs_pane_g3

0x6179,	// (0x00030d59) linegrid_hwr_fs_pane_g4_ParamLimits

0x6179,	// (0x00030d59) linegrid_hwr_fs_pane_g4

0x6193,	// (0x00030d73) linegrid_hwr_fs_pane_g5_ParamLimits

0x6193,	// (0x00030d73) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0003a3d5) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0003a3d5) linegrid_hwr_fs_pane_g

0x9cbd,	// (0x0003489d) cell_hwr_fs_pane_g1_ParamLimits

0x9cbd,	// (0x0003489d) cell_hwr_fs_pane_g1

0x9a88,	// (0x00034668) cell_hwr_fs_pane_g2_ParamLimits

0x9a88,	// (0x00034668) cell_hwr_fs_pane_g2

0x9cd3,	// (0x000348b3) cell_hwr_fs_pane_g3_ParamLimits

0x9cd3,	// (0x000348b3) cell_hwr_fs_pane_g3

0x9ce0,	// (0x000348c0) cell_hwr_fs_pane_g4_ParamLimits

0x9ce0,	// (0x000348c0) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0003a3e0) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0003a3e0) cell_hwr_fs_pane_g

0x61a9,	// (0x00030d89) cell_hwr_fs_pane_t1

0x7539,	// (0x00032119) grid_highlight_pane_cp6

0x7539,	// (0x00032119) main_idle_act2_pane

0x888a,	// (0x0003346a) aid_inside_area_popup_secondary

0xa979,	// (0x00035559) aid_inside_area_window_primary_ParamLimits

0xa979,	// (0x00035559) aid_inside_area_window_primary

0xb501,	// (0x000360e1) ai2_news_ticker_pane

0xb509,	// (0x000360e9) aid_size_cell_ai1_link_ParamLimits

0xb509,	// (0x000360e9) aid_size_cell_ai1_link

0xb523,	// (0x00036103) popup_ai2_data_window_ParamLimits

0xb523,	// (0x00036103) popup_ai2_data_window

0xb539,	// (0x00036119) popup_ai2_link_window_ParamLimits

0xb539,	// (0x00036119) popup_ai2_link_window

0x9c87,	// (0x00034867) bg_popup_sub_pane_cp4_ParamLimits

0x9c87,	// (0x00034867) bg_popup_sub_pane_cp4

0xb54d,	// (0x0003612d) grid_ai2_link_pane_ParamLimits

0xb54d,	// (0x0003612d) grid_ai2_link_pane

0xb564,	// (0x00036144) popup_ai2_link_window_g1_ParamLimits

0xb564,	// (0x00036144) popup_ai2_link_window_g1

0xb570,	// (0x00036150) popup_ai2_link_window_g2_ParamLimits

0xb570,	// (0x00036150) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0003a5b3) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0003a5b3) popup_ai2_link_window_g

0xb57f,	// (0x0003615f) ai2_mp_button_pane

0xb587,	// (0x00036167) ai2_mp_volume_pane

0x9e94,	// (0x00034a74) bg_popup_sub_pane_cp5_ParamLimits

0x9e94,	// (0x00034a74) bg_popup_sub_pane_cp5

0xb58f,	// (0x0003616f) heading_ai2_gene_pane_ParamLimits

0xb58f,	// (0x0003616f) heading_ai2_gene_pane

0xb59b,	// (0x0003617b) list_ai2_gene_pane_ParamLimits

0xb59b,	// (0x0003617b) list_ai2_gene_pane

0xb5e3,	// (0x000361c3) cell_ai2_link_pane_ParamLimits

0xb5e3,	// (0x000361c3) cell_ai2_link_pane

0xb5f9,	// (0x000361d9) cell_ai2_link_pane_g1

0x7539,	// (0x00032119) grid_highlight_pane_cp7

0x649b,	// (0x0003107b) ai2_mp_volume_pane_g1

0xb6c9,	// (0x000362a9) ai2_mp_volume_pane_g2

0xb63e,	// (0x0003621e) list_ai2_gene_pane_t1

0xb6d1,	// (0x000362b1) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0003a5cc) ai2_mp_volume_pane_g

0x64a3,	// (0x00031083) volume_small_pane_cp3

0xb6d9,	// (0x000362b9) aid_size_cell_ai2_button

0xb6e1,	// (0x000362c1) grid_ai2_button_pane

0xb6ea,	// (0x000362ca) cell_ai2_button_pane_ParamLimits

0xb6ea,	// (0x000362ca) cell_ai2_button_pane

0x752f,	// (0x0003210f) cell_ai2_button_pane_g1

0x7539,	// (0x00032119) grid_highlight_pane_cp8

0xb689,	// (0x00036269) ai2_gene_pane_t1_ParamLimits

0xb689,	// (0x00036269) ai2_gene_pane_t1

0x59be,	// (0x0003059e) aid_height_parent_landscape

0xafe4,	// (0x00035bc4) aid_height_set_list

0xaff5,	// (0x00035bd5) aid_size_parent

0xb324,	// (0x00035f04) aid_size_cell_graphic_pane_ParamLimits

0xb5ab,	// (0x0003618b) popup_ai2_data_window_g1_ParamLimits

0xb5ab,	// (0x0003618b) popup_ai2_data_window_g1

0xb5b7,	// (0x00036197) ai2_news_ticker_pane_g1

0xb5bf,	// (0x0003619f) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0003a5b8) ai2_news_ticker_pane_g

0xb5c7,	// (0x000361a7) ai2_news_ticker_pane_t1

0xb5d5,	// (0x000361b5) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0003a5bd) ai2_news_ticker_pane_t

0xb602,	// (0x000361e2) heading_ai2_gene_pane_g1

0xb60a,	// (0x000361ea) heading_ai2_gene_pane_t1_ParamLimits

0xb60a,	// (0x000361ea) heading_ai2_gene_pane_t1

0xb61f,	// (0x000361ff) list_highlight_pane_cp6

0xb627,	// (0x00036207) ai2_gene_pane_ParamLimits

0xb627,	// (0x00036207) ai2_gene_pane

0xb64c,	// (0x0003622c) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0003a5c2) list_ai2_gene_pane_t

0xb65a,	// (0x0003623a) list_highlight_pane_cp8_ParamLimits

0xb65a,	// (0x0003623a) list_highlight_pane_cp8

0xb66b,	// (0x0003624b) ai2_gene_pane_g1_ParamLimits

0xb66b,	// (0x0003624b) ai2_gene_pane_g1

0xb67d,	// (0x0003625d) ai2_gene_pane_g2_ParamLimits

0xb67d,	// (0x0003625d) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0003a5c7) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0003a5c7) ai2_gene_pane_g

0x86cc,	// (0x000332ac) scroll_pane_cp12

0x597b,	// (0x0003055b) control_pane_t3_ParamLimits

0x597b,	// (0x0003055b) control_pane_t3

0x964d,	// (0x0003422d) status_small_pane_g8_ParamLimits

0x964d,	// (0x0003422d) status_small_pane_g8

0x5b50,	// (0x00030730) popup_find_window_ParamLimits

0x5d65,	// (0x00030945) popup_note_image_window_ParamLimits

0x5fcb,	// (0x00030bab) list_double2_graphic_pane_vc_g1_ParamLimits

0x5fcb,	// (0x00030bab) list_double2_graphic_pane_vc_g1

0x5fd7,	// (0x00030bb7) list_double2_graphic_pane_vc_g2_ParamLimits

0x5fd7,	// (0x00030bb7) list_double2_graphic_pane_vc_g2

0x5fe3,	// (0x00030bc3) list_double2_graphic_pane_vc_g3_ParamLimits

0x5fe3,	// (0x00030bc3) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0003a39e) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0003a39e) list_double2_graphic_pane_vc_g

0x5fef,	// (0x00030bcf) list_double2_graphic_pane_vc_t1_ParamLimits

0x5fef,	// (0x00030bcf) list_double2_graphic_pane_vc_t1

0x5fd7,	// (0x00030bb7) list_single_heading_pane_vc_g1_ParamLimits

0x5fd7,	// (0x00030bb7) list_single_heading_pane_vc_g1

0x5fe3,	// (0x00030bc3) list_single_heading_pane_vc_g2_ParamLimits

0x5fe3,	// (0x00030bc3) list_single_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a3bf) list_single_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a3bf) list_single_heading_pane_vc_g

0x605a,	// (0x00030c3a) list_single_heading_pane_vc_t1_ParamLimits

0x605a,	// (0x00030c3a) list_single_heading_pane_vc_t1

0x6070,	// (0x00030c50) list_single_heading_pane_vc_t2_ParamLimits

0x6070,	// (0x00030c50) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0003a3c4) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0003a3c4) list_single_heading_pane_vc_t

0x60a4,	// (0x00030c84) list_setting_number_pane_vc_g1_ParamLimits

0x60a4,	// (0x00030c84) list_setting_number_pane_vc_g1

0x60b0,	// (0x00030c90) list_setting_number_pane_vc_g2_ParamLimits

0x60b0,	// (0x00030c90) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0003a3c9) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0003a3c9) list_setting_number_pane_vc_g

0x60bc,	// (0x00030c9c) list_setting_number_pane_vc_t1_ParamLimits

0x60bc,	// (0x00030c9c) list_setting_number_pane_vc_t1

0x60d0,	// (0x00030cb0) list_setting_number_pane_vc_t2_ParamLimits

0x60d0,	// (0x00030cb0) list_setting_number_pane_vc_t2

0x60ec,	// (0x00030ccc) list_setting_number_pane_vc_t3_ParamLimits

0x60ec,	// (0x00030ccc) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0003a3ce) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0003a3ce) list_setting_number_pane_vc_t

0x610a,	// (0x00030cea) set_value_pane_vc_ParamLimits

0x610a,	// (0x00030cea) set_value_pane_vc

0xb1ad,	// (0x00035d8d) list_double2_graphic_pane_vc_ParamLimits

0xb1ad,	// (0x00035d8d) list_double2_graphic_pane_vc

0xb1ad,	// (0x00035d8d) list_double2_large_graphic_pane_vc_ParamLimits

0xb1ad,	// (0x00035d8d) list_double2_large_graphic_pane_vc

0xb1ad,	// (0x00035d8d) list_double2_pane_vc_ParamLimits

0xb1ad,	// (0x00035d8d) list_double2_pane_vc

0xb1ad,	// (0x00035d8d) list_double_graphic_heading_pane_vc_ParamLimits

0xb1ad,	// (0x00035d8d) list_double_graphic_heading_pane_vc

0xb1ad,	// (0x00035d8d) list_double_graphic_pane_vc_ParamLimits

0xb1ad,	// (0x00035d8d) list_double_graphic_pane_vc

0xb1ad,	// (0x00035d8d) list_double_heading_pane_vc_ParamLimits

0xb1ad,	// (0x00035d8d) list_double_heading_pane_vc

0xb1bf,	// (0x00035d9f) list_double_large_graphic_pane_vc_ParamLimits

0xb1bf,	// (0x00035d9f) list_double_large_graphic_pane_vc

0xb1ad,	// (0x00035d8d) list_double_number_pane_vc_ParamLimits

0xb1ad,	// (0x00035d8d) list_double_number_pane_vc

0xb1ad,	// (0x00035d8d) list_double_pane_vc_ParamLimits

0xb1ad,	// (0x00035d8d) list_double_pane_vc

0xb1ad,	// (0x00035d8d) list_double_time_pane_vc_ParamLimits

0xb1ad,	// (0x00035d8d) list_double_time_pane_vc

0xb1ad,	// (0x00035d8d) list_setting_number_pane_vc_ParamLimits

0xb1ad,	// (0x00035d8d) list_setting_number_pane_vc

0xb1ad,	// (0x00035d8d) list_setting_pane_vc_ParamLimits

0xb1ad,	// (0x00035d8d) list_setting_pane_vc

0xb1ad,	// (0x00035d8d) list_single_graphic_heading_pane_vc_ParamLimits

0xb1ad,	// (0x00035d8d) list_single_graphic_heading_pane_vc

0xb1ad,	// (0x00035d8d) list_single_heading_pane_vc_ParamLimits

0xb1ad,	// (0x00035d8d) list_single_heading_pane_vc

0x76f0,	// (0x000322d0) list_single_number_heading_pane_vc_ParamLimits

0x76f0,	// (0x000322d0) list_single_number_heading_pane_vc

0x5fcb,	// (0x00030bab) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5fcb,	// (0x00030bab) list_double_graphic_heading_pane_vc_g1

0x5fd7,	// (0x00030bb7) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5fd7,	// (0x00030bb7) list_double_graphic_heading_pane_vc_g2

0x5fe3,	// (0x00030bc3) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5fe3,	// (0x00030bc3) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7be,	// (0x0003a39e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003a39e) list_double_graphic_heading_pane_vc_g

0x7771,	// (0x00032351) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x7771,	// (0x00032351) list_double_graphic_heading_pane_vc_t1

0x778d,	// (0x0003236d) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x778d,	// (0x0003236d) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0003a5d3) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0003a5d3) list_double_graphic_heading_pane_vc_t

0x60a4,	// (0x00030c84) list_setting_pane_vc_g1_ParamLimits

0x60a4,	// (0x00030c84) list_setting_pane_vc_g1

0x60b0,	// (0x00030c90) list_setting_pane_vc_g2_ParamLimits

0x60b0,	// (0x00030c90) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0003a3c9) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0003a3c9) list_setting_pane_vc_g

0x77ab,	// (0x0003238b) list_setting_pane_vc_t1_ParamLimits

0x77ab,	// (0x0003238b) list_setting_pane_vc_t1

0x77c7,	// (0x000323a7) list_setting_pane_vc_t2_ParamLimits

0x77c7,	// (0x000323a7) list_setting_pane_vc_t2

0x0001,

0xfa21,	// (0x0003a601) list_setting_pane_vc_t_ParamLimits

0xfa21,	// (0x0003a601) list_setting_pane_vc_t

0x610a,	// (0x00030cea) set_value_pane_cp_vc_ParamLimits

0x610a,	// (0x00030cea) set_value_pane_cp_vc

0x5fd7,	// (0x00030bb7) list_single_number_heading_pane_vc_g1_ParamLimits

0x5fd7,	// (0x00030bb7) list_single_number_heading_pane_vc_g1

0x5fe3,	// (0x00030bc3) list_single_number_heading_pane_vc_g2_ParamLimits

0x5fe3,	// (0x00030bc3) list_single_number_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a3bf) list_single_number_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a3bf) list_single_number_heading_pane_vc_g

0x77e3,	// (0x000323c3) list_single_number_heading_pane_vc_t1_ParamLimits

0x77e3,	// (0x000323c3) list_single_number_heading_pane_vc_t1

0x77f9,	// (0x000323d9) list_single_number_heading_pane_vc_t2_ParamLimits

0x77f9,	// (0x000323d9) list_single_number_heading_pane_vc_t2

0x780b,	// (0x000323eb) list_single_number_heading_pane_vc_t3_ParamLimits

0x780b,	// (0x000323eb) list_single_number_heading_pane_vc_t3

0x0002,

0xfa26,	// (0x0003a606) list_single_number_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0003a606) list_single_number_heading_pane_vc_t

0x5fcb,	// (0x00030bab) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5fcb,	// (0x00030bab) list_single_graphic_heading_pane_vc_g1

0x5fd7,	// (0x00030bb7) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5fd7,	// (0x00030bb7) list_single_graphic_heading_pane_vc_g4

0x5fe3,	// (0x00030bc3) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5fe3,	// (0x00030bc3) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x0003a39e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003a39e) list_single_graphic_heading_pane_vc_g

0x781d,	// (0x000323fd) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x781d,	// (0x000323fd) list_single_graphic_heading_pane_vc_t1

0x7833,	// (0x00032413) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x7833,	// (0x00032413) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2d,	// (0x0003a60d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2d,	// (0x0003a60d) list_single_graphic_heading_pane_vc_t

0x5fd7,	// (0x00030bb7) list_double2_pane_vc_g1_ParamLimits

0x5fd7,	// (0x00030bb7) list_double2_pane_vc_g1

0x5fe3,	// (0x00030bc3) list_double2_pane_vc_g2_ParamLimits

0x5fe3,	// (0x00030bc3) list_double2_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a3bf) list_double2_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a3bf) list_double2_pane_vc_g

0x7845,	// (0x00032425) list_double2_pane_vc_t1_ParamLimits

0x7845,	// (0x00032425) list_double2_pane_vc_t1

0x785b,	// (0x0003243b) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x785b,	// (0x0003243b) list_double2_large_graphic_pane_vc_g1

0x5fd7,	// (0x00030bb7) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5fd7,	// (0x00030bb7) list_double2_large_graphic_pane_vc_g2

0x5fe3,	// (0x00030bc3) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5fe3,	// (0x00030bc3) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa32,	// (0x0003a612) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa32,	// (0x0003a612) list_double2_large_graphic_pane_vc_g

0x7867,	// (0x00032447) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x7867,	// (0x00032447) list_double2_large_graphic_pane_vc_t1

0x787d,	// (0x0003245d) list_double_time_pane_vc_g1_ParamLimits

0x787d,	// (0x0003245d) list_double_time_pane_vc_g1

0x7889,	// (0x00032469) list_double_time_pane_vc_g2_ParamLimits

0x7889,	// (0x00032469) list_double_time_pane_vc_g2

0x0001,

0xfa39,	// (0x0003a619) list_double_time_pane_vc_g_ParamLimits

0xfa39,	// (0x0003a619) list_double_time_pane_vc_g

0x7895,	// (0x00032475) list_double_time_pane_vc_t1_ParamLimits

0x7895,	// (0x00032475) list_double_time_pane_vc_t1

0x78b9,	// (0x00032499) list_double_time_pane_vc_t2_ParamLimits

0x78b9,	// (0x00032499) list_double_time_pane_vc_t2

0x7908,	// (0x000324e8) list_double_time_pane_vc_t3_ParamLimits

0x7908,	// (0x000324e8) list_double_time_pane_vc_t3

0x791a,	// (0x000324fa) list_double_time_pane_vc_t4_ParamLimits

0x791a,	// (0x000324fa) list_double_time_pane_vc_t4

0x0003,

0xfa3e,	// (0x0003a61e) list_double_time_pane_vc_t_ParamLimits

0xfa3e,	// (0x0003a61e) list_double_time_pane_vc_t

0x5fd7,	// (0x00030bb7) list_double_pane_vc_g1_ParamLimits

0x5fd7,	// (0x00030bb7) list_double_pane_vc_g1

0x5fe3,	// (0x00030bc3) list_double_pane_vc_g2_ParamLimits

0x5fe3,	// (0x00030bc3) list_double_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a3bf) list_double_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a3bf) list_double_pane_vc_g

0x792e,	// (0x0003250e) list_double_pane_vc_t1_ParamLimits

0x792e,	// (0x0003250e) list_double_pane_vc_t1

0x7942,	// (0x00032522) list_double_pane_vc_t2_ParamLimits

0x7942,	// (0x00032522) list_double_pane_vc_t2

0x0001,

0xfa47,	// (0x0003a627) list_double_pane_vc_t_ParamLimits

0xfa47,	// (0x0003a627) list_double_pane_vc_t

0x5fd7,	// (0x00030bb7) list_double_number_pane_vc_g1_ParamLimits

0x5fd7,	// (0x00030bb7) list_double_number_pane_vc_g1

0x5fe3,	// (0x00030bc3) list_double_number_pane_vc_g2_ParamLimits

0x5fe3,	// (0x00030bc3) list_double_number_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a3bf) list_double_number_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a3bf) list_double_number_pane_vc_g

0x795a,	// (0x0003253a) list_double_number_pane_vc_t1_ParamLimits

0x795a,	// (0x0003253a) list_double_number_pane_vc_t1

0x796c,	// (0x0003254c) list_double_number_pane_vc_t2_ParamLimits

0x796c,	// (0x0003254c) list_double_number_pane_vc_t2

0x7980,	// (0x00032560) list_double_number_pane_vc_t3_ParamLimits

0x7980,	// (0x00032560) list_double_number_pane_vc_t3

0x0002,

0xfa4c,	// (0x0003a62c) list_double_number_pane_vc_t_ParamLimits

0xfa4c,	// (0x0003a62c) list_double_number_pane_vc_t

0x7998,	// (0x00032578) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7998,	// (0x00032578) list_double_large_graphic_pane_vc_g1

0x79ba,	// (0x0003259a) list_double_large_graphic_pane_vc_g2_ParamLimits

0x79ba,	// (0x0003259a) list_double_large_graphic_pane_vc_g2

0x79ce,	// (0x000325ae) list_double_large_graphic_pane_vc_g3_ParamLimits

0x79ce,	// (0x000325ae) list_double_large_graphic_pane_vc_g3

0x79dd,	// (0x000325bd) list_double_large_graphic_pane_vc_g4_ParamLimits

0x79dd,	// (0x000325bd) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa53,	// (0x0003a633) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa53,	// (0x0003a633) list_double_large_graphic_pane_vc_g

0x79e9,	// (0x000325c9) list_double_large_graphic_pane_vc_t1_ParamLimits

0x79e9,	// (0x000325c9) list_double_large_graphic_pane_vc_t1

0x7a05,	// (0x000325e5) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7a05,	// (0x000325e5) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5c,	// (0x0003a63c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5c,	// (0x0003a63c) list_double_large_graphic_pane_vc_t

0x5fd7,	// (0x00030bb7) list_double_heading_pane_vc_g1_ParamLimits

0x5fd7,	// (0x00030bb7) list_double_heading_pane_vc_g1

0x5fe3,	// (0x00030bc3) list_double_heading_pane_vc_g2_ParamLimits

0x5fe3,	// (0x00030bc3) list_double_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a3bf) list_double_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a3bf) list_double_heading_pane_vc_g

0x7a27,	// (0x00032607) list_double_heading_pane_vc_t1_ParamLimits

0x7a27,	// (0x00032607) list_double_heading_pane_vc_t1

0x7a3b,	// (0x0003261b) list_double_heading_pane_vc_t2_ParamLimits

0x7a3b,	// (0x0003261b) list_double_heading_pane_vc_t2

0x0001,

0xfa61,	// (0x0003a641) list_double_heading_pane_vc_t_ParamLimits

0xfa61,	// (0x0003a641) list_double_heading_pane_vc_t

0x7a53,	// (0x00032633) list_double_graphic_pane_vc_g1_ParamLimits

0x7a53,	// (0x00032633) list_double_graphic_pane_vc_g1

0x7a5f,	// (0x0003263f) list_double_graphic_pane_vc_g2_ParamLimits

0x7a5f,	// (0x0003263f) list_double_graphic_pane_vc_g2

0x5fd7,	// (0x00030bb7) list_double_graphic_pane_vc_g3_ParamLimits

0x5fd7,	// (0x00030bb7) list_double_graphic_pane_vc_g3

0x0003,

0xfa66,	// (0x0003a646) list_double_graphic_pane_vc_g_ParamLimits

0xfa66,	// (0x0003a646) list_double_graphic_pane_vc_g

0x7a7c,	// (0x0003265c) list_double_graphic_pane_vc_t1_ParamLimits

0x7a7c,	// (0x0003265c) list_double_graphic_pane_vc_t1

0x7aa6,	// (0x00032686) list_double_graphic_pane_vc_t2_ParamLimits

0x7aa6,	// (0x00032686) list_double_graphic_pane_vc_t2

0x0001,

0xfa6f,	// (0x0003a64f) list_double_graphic_pane_vc_t_ParamLimits

0xfa6f,	// (0x0003a64f) list_double_graphic_pane_vc_t

0x47cc,	// (0x0002f3ac) aid_size_cell_fastswap

0x47d4,	// (0x0002f3b4) aid_size_cell_touch_ParamLimits

0x47d4,	// (0x0002f3b4) aid_size_cell_touch

0x4a39,	// (0x0002f619) popup_fast_swap_wide_window_ParamLimits

0x4a39,	// (0x0002f619) popup_fast_swap_wide_window

0x4b4d,	// (0x0002f72d) touch_pane_ParamLimits

0x4b4d,	// (0x0002f72d) touch_pane

0x8722,	// (0x00033302) button_value_adjust_pane_cp2

0x50f6,	// (0x0002fcd6) button_value_adjust_pane_cp4

0x5116,	// (0x0002fcf6) form_field_data_pane_cp2

0x5135,	// (0x0002fd15) form_field_data_wide_pane_cp2

0x8ba2,	// (0x00033782) bg_scroll_pane_ParamLimits

0x54f6,	// (0x000300d6) scroll_handle_pane_ParamLimits

0x550a,	// (0x000300ea) scroll_sc2_down_pane_ParamLimits

0x550a,	// (0x000300ea) scroll_sc2_down_pane

0x8bd3,	// (0x000337b3) scroll_sc2_up_pane_ParamLimits

0x8bd3,	// (0x000337b3) scroll_sc2_up_pane

0xbda9,	// (0x00036989) grid_wheel_folder_pane_g1_ParamLimits

0xbda9,	// (0x00036989) grid_wheel_folder_pane_g1

0x5759,	// (0x00030339) clock_nsta_pane_cp2_ParamLimits

0x5759,	// (0x00030339) clock_nsta_pane_cp2

0x93d3,	// (0x00033fb3) listscroll_midp_pane_ParamLimits

0x93df,	// (0x00033fbf) midp_canvas_pane

0x96c7,	// (0x000342a7) nsta_clock_indic_pane

0x96fb,	// (0x000342db) listscroll_form_pane_vc

0x9703,	// (0x000342e3) listscroll_set_pane_vc_ParamLimits

0x9703,	// (0x000342e3) listscroll_set_pane_vc

0x97fc,	// (0x000343dc) clock_nsta_pane

0x9871,	// (0x00034451) indicator_nsta_pane

0x9b51,	// (0x00034731) bg_popup_sub_pane_cp2_ParamLimits

0x9b65,	// (0x00034745) find_pane_cp2_ParamLimits

0x9b65,	// (0x00034745) find_pane_cp2

0x9b7b,	// (0x0003475b) grid_toobar_pane_ParamLimits

0x9c5b,	// (0x0003483b) list_form_gen_pane_vc_ParamLimits

0x9c5b,	// (0x0003483b) list_form_gen_pane_vc

0x9c71,	// (0x00034851) scroll_pane_cp8_vc_ParamLimits

0x9c71,	// (0x00034851) scroll_pane_cp8_vc

0x9ced,	// (0x000348cd) data_form_wide_pane_vc_ParamLimits

0x9ced,	// (0x000348cd) data_form_wide_pane_vc

0x9cf9,	// (0x000348d9) form_field_data_wide_pane_vc_g1

0x9d01,	// (0x000348e1) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d01,	// (0x000348e1) form_field_data_wide_pane_vc_t1

0x8736,	// (0x00033316) input_focus_pane_cp6_vc_ParamLimits

0x8736,	// (0x00033316) input_focus_pane_cp6_vc

0xa027,	// (0x00034c07) list_midp_pane_ParamLimits

0xa033,	// (0x00034c13) scroll_pane_cp16_ParamLimits

0xa033,	// (0x00034c13) scroll_pane_cp16

0xa095,	// (0x00034c75) button_value_adjust_pane_ParamLimits

0xa095,	// (0x00034c75) button_value_adjust_pane

0xb007,	// (0x00035be7) button_value_adjust_pane_cp6_ParamLimits

0xb007,	// (0x00035be7) button_value_adjust_pane_cp6

0xb131,	// (0x00035d11) settings_code_pane_cp_ParamLimits

0xb131,	// (0x00035d11) settings_code_pane_cp

0x752f,	// (0x0003210f) cell_touch_pane_g1

0x752f,	// (0x0003210f) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0003a2e3) cell_touch_pane_g

0xb6fc,	// (0x000362dc) cell_touch_pane_cp_ParamLimits

0xb6fc,	// (0x000362dc) cell_touch_pane_cp

0xb70c,	// (0x000362ec) cell_touch_pane_ParamLimits

0xb70c,	// (0x000362ec) cell_touch_pane

0x752f,	// (0x0003210f) scroll_sc2_down_pane_g1

0x752f,	// (0x0003210f) scroll_sc2_up_pane_g1

0x7539,	// (0x00032119) bg_set_opt_pane_cp4_vc

0xb71e,	// (0x000362fe) list_set_graphic_pane_vc_g1_ParamLimits

0xb71e,	// (0x000362fe) list_set_graphic_pane_vc_g1

0xb72a,	// (0x0003630a) list_set_graphic_pane_vc_g2_ParamLimits

0xb72a,	// (0x0003630a) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0003a5d8) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0003a5d8) list_set_graphic_pane_vc_g

0xb736,	// (0x00036316) text_primary_small_cp13_vc_ParamLimits

0xb736,	// (0x00036316) text_primary_small_cp13_vc

0xb74e,	// (0x0003632e) list_set_graphic_pane_vc_ParamLimits

0xb74e,	// (0x0003632e) list_set_graphic_pane_vc

0x7539,	// (0x00032119) input_focus_pane_cp2_vc

0x752f,	// (0x0003210f) setting_code_pane_vc_g1

0x7eec,	// (0x00032acc) setting_code_pane_vc_t1

0xb760,	// (0x00036340) set_text_pane_vc_t1_ParamLimits

0xb760,	// (0x00036340) set_text_pane_vc_t1

0x7539,	// (0x00032119) input_focus_pane_cp1_vc

0xb77c,	// (0x0003635c) list_set_text_pane_vc

0x752f,	// (0x0003210f) setting_text_pane_vc_g1

0x7539,	// (0x00032119) bg_set_opt_pane_cp2_vc

0x7ee3,	// (0x00032ac3) setting_slider_graphic_pane_vc_g1

0xb786,	// (0x00036366) setting_slider_graphic_pane_vc_t1

0xb796,	// (0x00036376) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0003a5dd) setting_slider_graphic_pane_vc_t

0xb7a6,	// (0x00036386) slider_set_pane_cp_vc

0xb7ae,	// (0x0003638e) slider_set_pane_vc_g1

0xb7b7,	// (0x00036397) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0003a5e2) slider_set_pane_vc_g

0x878e,	// (0x0003336e) set_opt_bg_pane_g1_copy1

0x8796,	// (0x00033376) set_opt_bg_pane_g2_copy1

0xb7e3,	// (0x000363c3) set_opt_bg_pane_g3_copy1

0x87a6,	// (0x00033386) set_opt_bg_pane_g4_copy1

0x87ae,	// (0x0003338e) set_opt_bg_pane_g5_copy1

0x87b6,	// (0x00033396) set_opt_bg_pane_g6_copy1

0xb7ed,	// (0x000363cd) set_opt_bg_pane_g7_copy1

0xb7f5,	// (0x000363d5) set_opt_bg_pane_g8_copy1

0xb7ff,	// (0x000363df) set_opt_bg_pane_g9_copy1

0x7539,	// (0x00032119) bg_set_opt_pane_cp_vc

0xb809,	// (0x000363e9) setting_slider_pane_vc_t1

0xb818,	// (0x000363f8) setting_slider_pane_vc_t2

0xb828,	// (0x00036408) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0003a5f1) setting_slider_pane_vc_t

0xb838,	// (0x00036418) slider_set_pane_vc

0x61b7,	// (0x00030d97) volume_set_pane_vc_g1

0x61c0,	// (0x00030da0) volume_set_pane_vc_g2

0x61c9,	// (0x00030da9) volume_set_pane_vc_g3

0x61d2,	// (0x00030db2) volume_set_pane_vc_g4

0x61db,	// (0x00030dbb) volume_set_pane_vc_g5

0x61e4,	// (0x00030dc4) volume_set_pane_vc_g6

0x61ed,	// (0x00030dcd) volume_set_pane_vc_g7

0x61f6,	// (0x00030dd6) volume_set_pane_vc_g8

0x61ff,	// (0x00030ddf) volume_set_pane_vc_g9

0x6208,	// (0x00030de8) volume_set_pane_vc_g10

0x0009,

0xf8b6,	// (0x0003a496) volume_set_pane_vc_g

0xb840,	// (0x00036420) volume_set_pane_vc

0xb848,	// (0x00036428) button_value_adjust_pane_cp1_vc

0xb852,	// (0x00036432) list_highlight_pane_cp2_vc

0xb85b,	// (0x0003643b) list_set_pane_vc_ParamLimits

0xb85b,	// (0x0003643b) list_set_pane_vc

0xb8b9,	// (0x00036499) main_pane_set_vc_t1_ParamLimits

0xb8b9,	// (0x00036499) main_pane_set_vc_t1

0xb8ce,	// (0x000364ae) main_pane_set_vc_t2_ParamLimits

0xb8ce,	// (0x000364ae) main_pane_set_vc_t2

0xb8e0,	// (0x000364c0) main_pane_set_vc_t3_ParamLimits

0xb8e0,	// (0x000364c0) main_pane_set_vc_t3

0xb8f4,	// (0x000364d4) main_pane_set_vc_t4_ParamLimits

0xb8f4,	// (0x000364d4) main_pane_set_vc_t4

0x0003,

0xfa18,	// (0x0003a5f8) main_pane_set_vc_t_ParamLimits

0xfa18,	// (0x0003a5f8) main_pane_set_vc_t

0xb908,	// (0x000364e8) setting_code_pane_vc_ParamLimits

0xb908,	// (0x000364e8) setting_code_pane_vc

0xb919,	// (0x000364f9) setting_slider_graphic_pane_vc

0xb919,	// (0x000364f9) setting_slider_pane_vc

0xb919,	// (0x000364f9) setting_text_pane_vc

0xb919,	// (0x000364f9) setting_volume_pane_vc

0xb923,	// (0x00036503) scroll_pane_cp121_vc

0x8710,	// (0x000332f0) set_content_pane_vc

0xb92b,	// (0x0003650b) button_value_adjust_pane_g1

0xb934,	// (0x00036514) button_value_adjust_pane_g2

0x0001,

0xfa74,	// (0x0003a654) button_value_adjust_pane_g

0xb93d,	// (0x0003651d) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb93d,	// (0x0003651d) form_field_slider_wide_pane_vc_t1

0xb951,	// (0x00036531) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb951,	// (0x00036531) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa79,	// (0x0003a659) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa79,	// (0x0003a659) form_field_slider_wide_pane_vc_t

0x811c,	// (0x00032cfc) input_focus_pane_cp10_vc_ParamLimits

0x811c,	// (0x00032cfc) input_focus_pane_cp10_vc

0xb97f,	// (0x0003655f) slider_cont_pane_cp1_vc_ParamLimits

0xb97f,	// (0x0003655f) slider_cont_pane_cp1_vc

0xb991,	// (0x00036571) slider_form_pane_g1_cp2

0xb7b7,	// (0x00036397) slider_form_pane_g2_cp2

0xb9be,	// (0x0003659e) form_field_slider_pane_vc_t3

0xb9cc,	// (0x000365ac) form_field_slider_pane_vc_t4

0xb9da,	// (0x000365ba) slider_form_pane_vc_ParamLimits

0xb9da,	// (0x000365ba) slider_form_pane_vc

0xb9e7,	// (0x000365c7) form_field_slider_pane_vc_t1_ParamLimits

0xb9e7,	// (0x000365c7) form_field_slider_pane_vc_t1

0xb951,	// (0x00036531) form_field_slider_pane_vc_t2_ParamLimits

0xb951,	// (0x00036531) form_field_slider_pane_vc_t2

0x0001,

0xfa8b,	// (0x0003a66b) form_field_slider_pane_vc_t_ParamLimits

0xfa8b,	// (0x0003a66b) form_field_slider_pane_vc_t

0x811c,	// (0x00032cfc) input_focus_pane_cp9_vc_ParamLimits

0x811c,	// (0x00032cfc) input_focus_pane_cp9_vc

0xba03,	// (0x000365e3) slider_cont_pane_vc_ParamLimits

0xba03,	// (0x000365e3) slider_cont_pane_vc

0xba17,	// (0x000365f7) list_form_graphic_pane_cp_vc_ParamLimits

0xba17,	// (0x000365f7) list_form_graphic_pane_cp_vc

0x9cf9,	// (0x000348d9) form_field_popup_wide_pane_vc_g1

0xba2c,	// (0x0003660c) form_field_popup_wide_pane_vc_t1_ParamLimits

0xba2c,	// (0x0003660c) form_field_popup_wide_pane_vc_t1

0x8736,	// (0x00033316) input_focus_pane_cp8_vc_ParamLimits

0x8736,	// (0x00033316) input_focus_pane_cp8_vc

0xba71,	// (0x00036651) list_form_wide_pane_vc_ParamLimits

0xba71,	// (0x00036651) list_form_wide_pane_vc

0xba7d,	// (0x0003665d) list_form_graphic_pane_vc_g1

0xba85,	// (0x00036665) list_form_graphic_pane_vc_t1_ParamLimits

0xba85,	// (0x00036665) list_form_graphic_pane_vc_t1

0x7619,	// (0x000321f9) list_highlight_pane_cp5_vc_ParamLimits

0x7619,	// (0x000321f9) list_highlight_pane_cp5_vc

0xbaa1,	// (0x00036681) list_form_graphic_pane_vc_ParamLimits

0xbaa1,	// (0x00036681) list_form_graphic_pane_vc

0x9cf9,	// (0x000348d9) form_field_popup_pane_vc_g1

0xbab7,	// (0x00036697) form_field_popup_pane_vc_t1_ParamLimits

0xbab7,	// (0x00036697) form_field_popup_pane_vc_t1

0x8736,	// (0x00033316) input_focus_pane_cp7_vc_ParamLimits

0x8736,	// (0x00033316) input_focus_pane_cp7_vc

0xbace,	// (0x000366ae) list_form_pane_vc_ParamLimits

0xbace,	// (0x000366ae) list_form_pane_vc

0xbada,	// (0x000366ba) data_form_pane_vc_t1_ParamLimits

0xbada,	// (0x000366ba) data_form_pane_vc_t1

0x878e,	// (0x0003336e) input_focus_pane_vc_g1

0x8796,	// (0x00033376) input_focus_pane_vc_g2

0x879e,	// (0x0003337e) input_focus_pane_vc_g3

0x87a6,	// (0x00033386) input_focus_pane_vc_g4

0x87ae,	// (0x0003338e) input_focus_pane_vc_g5

0x87b6,	// (0x00033396) input_focus_pane_vc_g6

0x87be,	// (0x0003339e) input_focus_pane_vc_g7

0x87c6,	// (0x000333a6) input_focus_pane_vc_g8

0x87ce,	// (0x000333ae) input_focus_pane_vc_g9

0x752f,	// (0x0003210f) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0003a26c) input_focus_pane_vc_g

0x9ced,	// (0x000348cd) data_form_pane_vc_ParamLimits

0x9ced,	// (0x000348cd) data_form_pane_vc

0x9cf9,	// (0x000348d9) form_field_data_pane_vc_g1

0xbaf5,	// (0x000366d5) form_field_data_pane_vc_t1_ParamLimits

0xbaf5,	// (0x000366d5) form_field_data_pane_vc_t1

0x8736,	// (0x00033316) input_focus_pane_vc_ParamLimits

0x8736,	// (0x00033316) input_focus_pane_vc

0xbb0f,	// (0x000366ef) button_value_adjust_pane_cp3_vc

0xbb17,	// (0x000366f7) button_value_adjust_pane_cp5_vc

0xbb1f,	// (0x000366ff) form_field_data_pane_vc_ParamLimits

0xbb1f,	// (0x000366ff) form_field_data_pane_vc

0xbb36,	// (0x00036716) form_field_data_pane_vc_cp2

0xbb3e,	// (0x0003671e) form_field_data_wide_pane_vc_ParamLimits

0xbb3e,	// (0x0003671e) form_field_data_wide_pane_vc

0xbb54,	// (0x00036734) form_field_data_wide_pane_vc_cp2

0xbb5c,	// (0x0003673c) form_field_popup_pane_vc_ParamLimits

0xbb5c,	// (0x0003673c) form_field_popup_pane_vc

0xbb73,	// (0x00036753) form_field_popup_wide_pane_vc_ParamLimits

0xbb73,	// (0x00036753) form_field_popup_wide_pane_vc

0xbb89,	// (0x00036769) form_field_slider_pane_vc_ParamLimits

0xbb89,	// (0x00036769) form_field_slider_pane_vc

0xbb9c,	// (0x0003677c) form_field_slider_wide_pane_vc_ParamLimits

0xbb9c,	// (0x0003677c) form_field_slider_wide_pane_vc

0xbbaf,	// (0x0003678f) grid_touch_1_pane_ParamLimits

0xbbaf,	// (0x0003678f) grid_touch_1_pane

0xbbbb,	// (0x0003679b) grid_touch_2_pane_ParamLimits

0xbbbb,	// (0x0003679b) grid_touch_2_pane

0x9692,	// (0x00034272) touch_pane_g1_ParamLimits

0x9692,	// (0x00034272) touch_pane_g1

0xbbd3,	// (0x000367b3) cell_app_pane_cp_wide_ParamLimits

0xbbd3,	// (0x000367b3) cell_app_pane_cp_wide

0xbbe4,	// (0x000367c4) grid_popup_fast_wide_pane_ParamLimits

0xbbe4,	// (0x000367c4) grid_popup_fast_wide_pane

0xbbf8,	// (0x000367d8) scroll_pane_cp19_ParamLimits

0xbbf8,	// (0x000367d8) scroll_pane_cp19

0x7539,	// (0x00032119) bg_popup_window_pane_cp20

0xbc0c,	// (0x000367ec) listscroll_popup_fast_wide_pane

0x7619,	// (0x000321f9) grid_indicator_nsta_pane

0xbc14,	// (0x000367f4) clock_nsta_pane_g1

0xbc1d,	// (0x000367fd) clock_nsta_pane_t1

0xbc39,	// (0x00036819) cell_indicator_nsta_pane_ParamLimits

0xbc39,	// (0x00036819) cell_indicator_nsta_pane

0xbc6a,	// (0x0003684a) cell_indicator_nsta_pane_g1

0xbc78,	// (0x00036858) cell_indicator_nsta_pane_g2

0x0001,

0xfa9c,	// (0x0003a67c) cell_indicator_nsta_pane_g

0xbc85,	// (0x00036865) clock_nsta_pane_cp

0xbc8e,	// (0x0003686e) indicator_nsta_pane_cp

0xbc96,	// (0x00036876) nsta_clock_indic_pane_g1

0x7f6a,	// (0x00032b4a) grid_indicator_pane

0x8cc8,	// (0x000338a8) scroll_pane_cp29

0x56a8,	// (0x00030288) indicator_nsta_pane_cp2_ParamLimits

0x56a8,	// (0x00030288) indicator_nsta_pane_cp2

0x7619,	// (0x000321f9) main_apps_wheel_pane

0x9f08,	// (0x00034ae8) form_midp_field_text_pane_ParamLimits

0xa053,	// (0x00034c33) scroll_bar_cp050_ParamLimits

0xbce6,	// (0x000368c6) cell_indicator_pane_ParamLimits

0xbce6,	// (0x000368c6) cell_indicator_pane

0xbcfd,	// (0x000368dd) cell_indicator_pane_g1

0xbd07,	// (0x000368e7) grid_wheel_folder_pane_ParamLimits

0xbd07,	// (0x000368e7) grid_wheel_folder_pane

0xbd1d,	// (0x000368fd) list_wheel_apps_pane_ParamLimits

0xbd1d,	// (0x000368fd) list_wheel_apps_pane

0xbd2e,	// (0x0003690e) main_apps_wheel_pane_g1_ParamLimits

0xbd2e,	// (0x0003690e) main_apps_wheel_pane_g1

0xbd42,	// (0x00036922) main_apps_wheel_pane_g2_ParamLimits

0xbd42,	// (0x00036922) main_apps_wheel_pane_g2

0x0001,

0xfab8,	// (0x0003a698) main_apps_wheel_pane_g_ParamLimits

0xfab8,	// (0x0003a698) main_apps_wheel_pane_g

0xbd5a,	// (0x0003693a) main_apps_wheel_pane_t1_ParamLimits

0xbd5a,	// (0x0003693a) main_apps_wheel_pane_t1

0xbd7d,	// (0x0003695d) list_wheel_apps_pane_g1

0xbd85,	// (0x00036965) list_wheel_apps_pane_g2

0xbd8d,	// (0x0003696d) list_wheel_apps_pane_g3

0xbd95,	// (0x00036975) list_wheel_apps_pane_g4

0xbd9f,	// (0x0003697f) list_wheel_apps_pane_g5

0x0004,

0xfabd,	// (0x0003a69d) list_wheel_apps_pane_g

0x924b,	// (0x00033e2b) navi_icon_text_pane

0x972b,	// (0x0003430b) aid_fill_nsta

0xbdc2,	// (0x000369a2) navi_icon_text_pane_g1

0xbdce,	// (0x000369ae) navi_icon_text_pane_t1

0x90de,	// (0x00033cbe) list_set_graphic_pane_t1_ParamLimits

0x90de,	// (0x00033cbe) list_set_graphic_pane_t1

0xa7c2,	// (0x000353a2) popup_midp_note_alarm_window_t6_ParamLimits

0xa7c2,	// (0x000353a2) popup_midp_note_alarm_window_t6

0xa7d4,	// (0x000353b4) popup_midp_note_alarm_window_t7_ParamLimits

0xa7d4,	// (0x000353b4) popup_midp_note_alarm_window_t7

0xa7e6,	// (0x000353c6) popup_midp_note_alarm_window_t8_ParamLimits

0xa7e6,	// (0x000353c6) popup_midp_note_alarm_window_t8

0xa7f8,	// (0x000353d8) popup_midp_note_alarm_window_t9_ParamLimits

0xa7f8,	// (0x000353d8) popup_midp_note_alarm_window_t9

0xa80a,	// (0x000353ea) popup_midp_note_alarm_window_t10_ParamLimits

0xa80a,	// (0x000353ea) popup_midp_note_alarm_window_t10

0xa81c,	// (0x000353fc) popup_midp_note_alarm_window_t11_ParamLimits

0xa81c,	// (0x000353fc) popup_midp_note_alarm_window_t11

0xa82e,	// (0x0003540e) scroll_pane_cp17_ParamLimits

0xa82e,	// (0x0003540e) scroll_pane_cp17

0x61b7,	// (0x00030d97) volume_small_pane_cp_g1

0x64ac,	// (0x0003108c) volume_small_pane_cp_g2

0x64b5,	// (0x00031095) volume_small_pane_cp_g3

0x64be,	// (0x0003109e) volume_small_pane_cp_g4

0x64c7,	// (0x000310a7) volume_small_pane_cp_g5

0x64d0,	// (0x000310b0) volume_small_pane_cp_g6

0x64d9,	// (0x000310b9) volume_small_pane_cp_g7

0x64e2,	// (0x000310c2) volume_small_pane_cp_g8

0x64eb,	// (0x000310cb) volume_small_pane_cp_g9

0x64f4,	// (0x000310d4) volume_small_pane_cp_g10

0x94a8,	// (0x00034088) midp_ticker_pane_g1_ParamLimits

0x94b4,	// (0x00034094) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0003a338) midp_ticker_pane_g_ParamLimits

0x94c0,	// (0x000340a0) midp_ticker_pane_t1_ParamLimits

0x9741,	// (0x00034321) aid_fill_nsta_2

0xa03f,	// (0x00034c1f) list_form2_midp_pane

0xb17c,	// (0x00035d5c) midp_editing_number_pane_ParamLimits

0xb18b,	// (0x00035d6b) midp_ticker_pane_ParamLimits

0xbde0,	// (0x000369c0) form2_midp_field_pane

0xbe04,	// (0x000369e4) scroll_pane_cp51

0xbe24,	// (0x00036a04) form2_midp_button_pane_ParamLimits

0xbe24,	// (0x00036a04) form2_midp_button_pane

0xbe36,	// (0x00036a16) form2_midp_content_pane_ParamLimits

0xbe36,	// (0x00036a16) form2_midp_content_pane

0xbe50,	// (0x00036a30) form2_midp_field_choice_group_pane

0xbe58,	// (0x00036a38) form2_midp_field_pane_g1

0xbe60,	// (0x00036a40) form2_midp_field_pane_g2

0xbe68,	// (0x00036a48) form2_midp_field_pane_g3

0xbe70,	// (0x00036a50) form2_midp_field_pane_g4

0x0003,

0xfae2,	// (0x0003a6c2) form2_midp_field_pane_g

0xbe78,	// (0x00036a58) form2_midp_gauge_slider_pane

0xbe80,	// (0x00036a60) form2_midp_gauge_wait_pane

0xbe88,	// (0x00036a68) form2_midp_image_pane_ParamLimits

0xbe88,	// (0x00036a68) form2_midp_image_pane

0xbea3,	// (0x00036a83) form2_midp_label_pane_ParamLimits

0xbea3,	// (0x00036a83) form2_midp_label_pane

0xbebc,	// (0x00036a9c) form2_midp_label_pane_cp_ParamLimits

0xbebc,	// (0x00036a9c) form2_midp_label_pane_cp

0xbedd,	// (0x00036abd) form2_midp_string_pane_ParamLimits

0xbedd,	// (0x00036abd) form2_midp_string_pane

0x7ad0,	// (0x000326b0) form2_midp_text_pane_ParamLimits

0x7ad0,	// (0x000326b0) form2_midp_text_pane

0xbeef,	// (0x00036acf) form2_midp_time_pane

0xbeff,	// (0x00036adf) input_focus_pane_cp51_ParamLimits

0xbeff,	// (0x00036adf) input_focus_pane_cp51

0xbf17,	// (0x00036af7) form2_midp_label_pane_t1_ParamLimits

0xbf17,	// (0x00036af7) form2_midp_label_pane_t1

0x7aeb,	// (0x000326cb) form2_mdip_text_pane_t1_ParamLimits

0x7aeb,	// (0x000326cb) form2_mdip_text_pane_t1

0x7b09,	// (0x000326e9) form2_midp_time_pane_t1

0xbf60,	// (0x00036b40) form2_midp_gauge_slider_pane_t1

0xbf72,	// (0x00036b52) form2_midp_gauge_slider_pane_t2

0xbf84,	// (0x00036b64) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaeb,	// (0x0003a6cb) form2_midp_gauge_slider_pane_t

0xbf96,	// (0x00036b76) form2_midp_slider_pane

0xbfa2,	// (0x00036b82) form2_midp_gauge_wait_pane_t1

0xbfb0,	// (0x00036b90) form2_midp_wait_pane_ParamLimits

0xbfb0,	// (0x00036b90) form2_midp_wait_pane

0xbfdb,	// (0x00036bbb) list_single_2graphic_pane_cp4_ParamLimits

0xbfdb,	// (0x00036bbb) list_single_2graphic_pane_cp4

0x9d61,	// (0x00034941) list_single_midp_graphic_pane_cp_ParamLimits

0x9d61,	// (0x00034941) list_single_midp_graphic_pane_cp

0x7539,	// (0x00032119) list_highlight_pane_cp20

0xbfff,	// (0x00036bdf) list_single_2graphic_pane_g1_cp4

0xc007,	// (0x00036be7) list_single_2graphic_pane_g2_cp4

0xc00f,	// (0x00036bef) list_single_2graphic_pane_t1_cp4

0x7619,	// (0x000321f9) list_highlight_pane_cp21

0xc01e,	// (0x00036bfe) list_single_midp_graphic_pane_g4_cp

0xc02d,	// (0x00036c0d) list_single_midp_graphic_pane_t1_cp

0xc042,	// (0x00036c22) form2_mdip_string_pane_t1_ParamLimits

0xc042,	// (0x00036c22) form2_mdip_string_pane_t1

0x7539,	// (0x00032119) bg_wml_button_pane_cp2

0x752f,	// (0x0003210f) form2_midp_image_pane_g1

0x4ee0,	// (0x0002fac0) list_double_large_graphic_pane_g5_ParamLimits

0x4ee0,	// (0x0002fac0) list_double_large_graphic_pane_g5

0x93d3,	// (0x00033fb3) midp_form_pane_ParamLimits

0x7619,	// (0x000321f9) main_apps_wheel_pane_ParamLimits

0x5d8b,	// (0x0003096b) popup_preview_window_ParamLimits

0x5d8b,	// (0x0003096b) popup_preview_window

0x5f46,	// (0x00030b26) popup_touch_info_window_ParamLimits

0x5f46,	// (0x00030b26) popup_touch_info_window

0x5f64,	// (0x00030b44) popup_touch_menu_window_ParamLimits

0x5f64,	// (0x00030b44) popup_touch_menu_window

0x7525,	// (0x00032105) bg_popup_sub_pane_cp6

0xc13b,	// (0x00036d1b) list_touch_menu_pane

0xc143,	// (0x00036d23) list_single_touch_menu_pane_ParamLimits

0xc143,	// (0x00036d23) list_single_touch_menu_pane

0xc159,	// (0x00036d39) list_single_touch_menu_pane_t1

0x7619,	// (0x000321f9) bg_popup_sub_pane_cp7_ParamLimits

0x7619,	// (0x000321f9) bg_popup_sub_pane_cp7

0xc167,	// (0x00036d47) heading_sub_pane

0xc16f,	// (0x00036d4f) list_touch_info_pane_ParamLimits

0xc16f,	// (0x00036d4f) list_touch_info_pane

0xc17e,	// (0x00036d5e) list_single_touch_info_pane_ParamLimits

0xc17e,	// (0x00036d5e) list_single_touch_info_pane

0xc190,	// (0x00036d70) list_single_touch_info_pane_t1

0xc19e,	// (0x00036d7e) list_single_touch_info_pane_t2

0x0001,

0xfaf9,	// (0x0003a6d9) list_single_touch_info_pane_t

0x93cb,	// (0x00033fab) bg_popup_heading_pane_cp

0xc1ac,	// (0x00036d8c) heading_sub_pane_t1

0x9c87,	// (0x00034867) bg_popup_preview_window_pane_cp_ParamLimits

0x9c87,	// (0x00034867) bg_popup_preview_window_pane_cp

0xc167,	// (0x00036d47) heading_preview_pane

0xc16f,	// (0x00036d4f) list_preview_pane_ParamLimits

0xc16f,	// (0x00036d4f) list_preview_pane

0xc1ba,	// (0x00036d9a) popup_preview_window_g1

0xc17e,	// (0x00036d5e) list_single_preview_pane_ParamLimits

0xc17e,	// (0x00036d5e) list_single_preview_pane

0xc1c2,	// (0x00036da2) list_single_preview_pane_g1

0xc1ca,	// (0x00036daa) list_single_preview_pane_t1

0xc190,	// (0x00036d70) list_single_preview_pane_t2

0x0001,

0xfafe,	// (0x0003a6de) list_single_preview_pane_t

0xc1d8,	// (0x00036db8) bg_popup_heading_pane_cp2_ParamLimits

0xc1d8,	// (0x00036db8) bg_popup_heading_pane_cp2

0xc1ee,	// (0x00036dce) heading_preview_pane_g1

0xc1f6,	// (0x00036dd6) heading_preview_pane_t1_ParamLimits

0xc1f6,	// (0x00036dd6) heading_preview_pane_t1

0x7f8d,	// (0x00032b6d) soft_indicator_pane_t1_ParamLimits

0x86a9,	// (0x00033289) scroll_pane_ParamLimits

0x8bc1,	// (0x000337a1) scroll_sc2_left_pane

0x8bca,	// (0x000337aa) scroll_sc2_right_pane

0x8be9,	// (0x000337c9) scroll_bg_pane_g1_ParamLimits

0x8bfe,	// (0x000337de) scroll_bg_pane_g2_ParamLimits

0x8c16,	// (0x000337f6) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0003a2c3) scroll_bg_pane_g_ParamLimits

0x8be9,	// (0x000337c9) scroll_handle_pane_g1_ParamLimits

0x8c38,	// (0x00033818) scroll_handle_pane_g2_ParamLimits

0x8c16,	// (0x000337f6) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0003a2ca) scroll_handle_pane_g_ParamLimits

0x5a0c,	// (0x000305ec) popup_choice_list_window_ParamLimits

0x5a0c,	// (0x000305ec) popup_choice_list_window

0x9b5d,	// (0x0003473d) choice_list_pane

0x9bdf,	// (0x000347bf) cell_toolbar_pane_t1

0x9c07,	// (0x000347e7) toolbar_button_pane_ParamLimits

0xace8,	// (0x000358c8) ai_gene_pane_1_t2_ParamLimits

0xace8,	// (0x000358c8) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0003a4f2) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0003a4f2) ai_gene_pane_1_t

0xc213,	// (0x00036df3) scroll_sc2_left_pane_g1

0xc213,	// (0x00036df3) scroll_sc2_right_pane_g1

0x96ef,	// (0x000342cf) bg_popup_sub_pane_cp10

0xc21d,	// (0x00036dfd) list_choice_list_pane

0xc236,	// (0x00036e16) list_single_choice_list_pane_ParamLimits

0xc236,	// (0x00036e16) list_single_choice_list_pane

0xc249,	// (0x00036e29) list_single_choice_list_pane_g1

0x88c7,	// (0x000334a7) list_single_choice_list_pane_t1_ParamLimits

0x88c7,	// (0x000334a7) list_single_choice_list_pane_t1

0xc251,	// (0x00036e31) choice_list_pane_g1

0xc259,	// (0x00036e39) choice_list_pane_t1

0x7525,	// (0x00032105) input_focus_pane_cp11

0x8a9e,	// (0x0003367e) title_pane_stacon_g2_ParamLimits

0x8a9e,	// (0x0003367e) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0003a2a9) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0003a2a9) title_pane_stacon_g

0x93cb,	// (0x00033fab) cursor_press_pane

0x5ab8,	// (0x00030698) popup_fep_hwr_window_ParamLimits

0x5ab8,	// (0x00030698) popup_fep_hwr_window

0x5b32,	// (0x00030712) popup_fep_vkb_window_ParamLimits

0x5b32,	// (0x00030712) popup_fep_vkb_window

0xc267,	// (0x00036e47) cursor_press_pane_g1

0x0002,

0xfb27,	// (0x0003a707) fep_vkb_side_pane_g_ParamLimits

0x6536,	// (0x00031116) fep_hwr_candidate_pane_ParamLimits

0x6536,	// (0x00031116) fep_hwr_candidate_pane

0x6560,	// (0x00031140) fep_hwr_side_pane_ParamLimits

0x6560,	// (0x00031140) fep_hwr_side_pane

0x6580,	// (0x00031160) fep_hwr_top_pane_ParamLimits

0x6580,	// (0x00031160) fep_hwr_top_pane

0x6598,	// (0x00031178) fep_hwr_write_pane_ParamLimits

0x6598,	// (0x00031178) fep_hwr_write_pane

0xfb27,	// (0x0003a707) fep_vkb_side_pane_g

0xc26f,	// (0x00036e4f) fep_hwr_top_pane_g1

0xc281,	// (0x00036e61) fep_hwr_top_pane_g2

0x65d2,	// (0x000311b2) fep_hwr_top_pane_g3

0x0002,

0xfb03,	// (0x0003a6e3) fep_hwr_top_pane_g

0x65e7,	// (0x000311c7) fep_hwr_top_text_pane

0x8db8,	// (0x00033998) fep_hwr_top_text_pane_g1

0xc2b7,	// (0x00036e97) fep_hwr_top_text_pane_t1

0x66dd,	// (0x000312bd) fep_hwr_candidate_pane_g1

0xc516,	// (0x000370f6) fep_vkb_keypad_pane_g3_ParamLimits

0xc516,	// (0x000370f6) fep_vkb_keypad_pane_g3

0xc53e,	// (0x0003711e) fep_vkb_keypad_pane_g4_ParamLimits

0xc53e,	// (0x0003711e) fep_vkb_keypad_pane_g4

0xc5ad,	// (0x0003718d) fep_vkb_bottom_pane_g2_ParamLimits

0xc5ad,	// (0x0003718d) fep_vkb_bottom_pane_g2

0x0001,

0xfb2e,	// (0x0003a70e) fep_vkb_bottom_pane_g_ParamLimits

0xfb2e,	// (0x0003a70e) fep_vkb_bottom_pane_g

0xc213,	// (0x00036df3) cell_vkb_side_pane_g2

0x0001,

0xfb38,	// (0x0003a718) cell_vkb_side_pane_g

0xc638,	// (0x00037218) cell_vkb_side_pane_t1

0xc646,	// (0x00037226) cell_vkb_side_pane_t1_copy1

0xc213,	// (0x00036df3) bg_fep_vkb_candidate_pane_g2

0xc772,	// (0x00037352) cell_vkb_candidate_pane_ParamLimits

0xc2d1,	// (0x00036eb1) aid_size_cell_vkb_ParamLimits

0xc2d1,	// (0x00036eb1) aid_size_cell_vkb

0xc772,	// (0x00037352) cell_vkb_candidate_pane

0x6704,	// (0x000312e4) bg_popup_fep_shadow_pane_g1

0xc35f,	// (0x00036f3f) fep_vkb_bottom_pane_ParamLimits

0xc35f,	// (0x00036f3f) fep_vkb_bottom_pane

0xc395,	// (0x00036f75) fep_vkb_candidate_pane_ParamLimits

0xc395,	// (0x00036f75) fep_vkb_candidate_pane

0xc3b1,	// (0x00036f91) fep_vkb_keypad_pane_ParamLimits

0xc3b1,	// (0x00036f91) fep_vkb_keypad_pane

0xc3f7,	// (0x00036fd7) fep_vkb_side_pane_ParamLimits

0xc3f7,	// (0x00036fd7) fep_vkb_side_pane

0xc433,	// (0x00037013) fep_vkb_top_pane_ParamLimits

0xc433,	// (0x00037013) fep_vkb_top_pane

0xc46f,	// (0x0003704f) fep_vkb_top_pane_g1_ParamLimits

0xc46f,	// (0x0003704f) fep_vkb_top_pane_g1

0xc47e,	// (0x0003705e) fep_vkb_top_pane_g2_ParamLimits

0xc47e,	// (0x0003705e) fep_vkb_top_pane_g2

0xc48d,	// (0x0003706d) fep_vkb_top_pane_g3_ParamLimits

0xc48d,	// (0x0003706d) fep_vkb_top_pane_g3

0x0003,

0xfb1e,	// (0x0003a6fe) fep_vkb_top_pane_g_ParamLimits

0xfb1e,	// (0x0003a6fe) fep_vkb_top_pane_g

0xc4ab,	// (0x0003708b) fep_vkb_top_text_pane_ParamLimits

0xc4ab,	// (0x0003708b) fep_vkb_top_text_pane

0xc4bc,	// (0x0003709c) fep_vkb_side_pane_g1_ParamLimits

0xc4bc,	// (0x0003709c) fep_vkb_side_pane_g1

0xc505,	// (0x000370e5) grid_vkb_side_pane_ParamLimits

0xc505,	// (0x000370e5) grid_vkb_side_pane

0x670c,	// (0x000312ec) bg_popup_fep_shadow_pane_g2

0x6715,	// (0x000312f5) bg_popup_fep_shadow_pane_g3

0x671d,	// (0x000312fd) bg_popup_fep_shadow_pane_g4

0x6726,	// (0x00031306) bg_popup_fep_shadow_pane_g5

0x6730,	// (0x00031310) bg_popup_fep_shadow_pane_g6

0x6738,	// (0x00031318) bg_popup_fep_shadow_pane_g7

0x87a6,	// (0x00033386) bg_popup_fep_shadow_pane_g8

0xc55c,	// (0x0003713c) grid_vkb_keypad_number_pane_ParamLimits

0xc55c,	// (0x0003713c) grid_vkb_keypad_number_pane

0xc56c,	// (0x0003714c) grid_vkb_keypad_pane_ParamLimits

0xc56c,	// (0x0003714c) grid_vkb_keypad_pane

0xc592,	// (0x00037172) fep_vkb_bottom_pane_g1_ParamLimits

0xc592,	// (0x00037172) fep_vkb_bottom_pane_g1

0xc5bb,	// (0x0003719b) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc5bb,	// (0x0003719b) grid_vkb_keypad_bottom_left_pane

0xc5d0,	// (0x000371b0) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc5d0,	// (0x000371b0) grid_vkb_keypad_bottom_right_pane

0xc5e5,	// (0x000371c5) fep_vkb_top_text_pane_g1

0xc600,	// (0x000371e0) fep_vkb_top_text_pane_t1

0xc615,	// (0x000371f5) cell_vkb_side_pane_ParamLimits

0xc615,	// (0x000371f5) cell_vkb_side_pane

0xc213,	// (0x00036df3) cell_vkb_side_pane_g1

0xc654,	// (0x00037234) cell_vkb_keypad_pane_ParamLimits

0xc654,	// (0x00037234) cell_vkb_keypad_pane

0xc6c9,	// (0x000372a9) cell_vkb_keypad_pane_g1

0x0008,

0xfb4b,	// (0x0003a72b) bg_popup_fep_shadow_pane_g

0x674a,	// (0x0003132a) cell_hwr_side_pane_g1

0x674a,	// (0x0003132a) cell_hwr_side_pane_g2

0xc6d3,	// (0x000372b3) cell_vkb_keypad_pane_t1

0xc6e1,	// (0x000372c1) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc6e1,	// (0x000372c1) cell_vkb_keypad_bottom_left_pane

0xc6fe,	// (0x000372de) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc6fe,	// (0x000372de) cell_vkb_keypad_bottom_right_pane

0xc213,	// (0x00036df3) cell_vkb_keypad_bottom_left_pane_g1

0xc213,	// (0x00036df3) cell_vkb_keypad_bottom_right_pane_g1

0xc737,	// (0x00037317) cell_vkb_keypad_number_pane_ParamLimits

0xc737,	// (0x00037317) cell_vkb_keypad_number_pane

0xc756,	// (0x00037336) cell_vkb_keypad_number_pane_g1

0xc760,	// (0x00037340) cell_vkb_keypad_number_pane_g2

0xc769,	// (0x00037349) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3d,	// (0x0003a71d) cell_vkb_keypad_number_pane_g

0xc6d3,	// (0x000372b3) cell_vkb_keypad_number_pane_t1

0xc78d,	// (0x0003736d) fep_vkb_candidate_pane_g1

0x0001,

0xfb5e,	// (0x0003a73e) cell_hwr_side_pane_g

0xc7a6,	// (0x00037386) cell_hwr_side_pane_t1

0x6754,	// (0x00031334) cell_hwr_side_pane_t1_copy1

0x6762,	// (0x00031342) cell_hwr_candidate_pane_g1

0x6791,	// (0x00031371) cell_hwr_candidate_pane_t1

0xc213,	// (0x00036df3) cell_vkb_candidate_pane_g2

0xc7ea,	// (0x000373ca) cell_vkb_candidate_pane_t1

0x64fd,	// (0x000310dd) bg_popup_fep_shadow_pane_ParamLimits

0x64fd,	// (0x000310dd) bg_popup_fep_shadow_pane

0x65b2,	// (0x00031192) bg_fep_hwr_top_pane_g4

0xc293,	// (0x00036e73) bg_hwr_side_pane_g1_ParamLimits

0xc293,	// (0x00036e73) bg_hwr_side_pane_g1

0x6623,	// (0x00031203) cell_hwr_side_pane_ParamLimits

0x6623,	// (0x00031203) cell_hwr_side_pane

0x665e,	// (0x0003123e) fep_hwr_write_pane_g1_ParamLimits

0x665e,	// (0x0003123e) fep_hwr_write_pane_g1

0x666b,	// (0x0003124b) fep_hwr_write_pane_g2_ParamLimits

0x666b,	// (0x0003124b) fep_hwr_write_pane_g2

0x6678,	// (0x00031258) fep_hwr_write_pane_g3_ParamLimits

0x6678,	// (0x00031258) fep_hwr_write_pane_g3

0x6686,	// (0x00031266) fep_hwr_write_pane_g4_ParamLimits

0x6686,	// (0x00031266) fep_hwr_write_pane_g4

0x0005,

0xfb0a,	// (0x0003a6ea) fep_hwr_write_pane_g_ParamLimits

0xfb0a,	// (0x0003a6ea) fep_hwr_write_pane_g

0x65b2,	// (0x00031192) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x65b2,	// (0x00031192) bg_fep_hwr_candidate_pane_g2

0x669b,	// (0x0003127b) cell_hwr_candidate_pane_ParamLimits

0x669b,	// (0x0003127b) cell_hwr_candidate_pane

0x66dd,	// (0x000312bd) fep_hwr_candidate_pane_g1_ParamLimits

0xc2ff,	// (0x00036edf) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc2ff,	// (0x00036edf) bg_popup_fep_shadow_pane_cp2

0xc49d,	// (0x0003707d) fep_vkb_top_pane_g4_ParamLimits

0xc49d,	// (0x0003707d) fep_vkb_top_pane_g4

0xc4e3,	// (0x000370c3) fep_vkb_side_pane_g2_ParamLimits

0xc4e3,	// (0x000370c3) fep_vkb_side_pane_g2

0x5023,	// (0x0002fc03) list_setting_pane_t4_ParamLimits

0x5023,	// (0x0002fc03) list_setting_pane_t4

0x50bd,	// (0x0002fc9d) list_setting_number_pane_t5_ParamLimits

0x50bd,	// (0x0002fc9d) list_setting_number_pane_t5

0x8dff,	// (0x000339df) list_double_heading_pane_cp2_ParamLimits

0x8dff,	// (0x000339df) list_double_heading_pane_cp2

0x8744,	// (0x00033324) list_double_heading_pane_g1_cp2_ParamLimits

0x8744,	// (0x00033324) list_double_heading_pane_g1_cp2

0x8750,	// (0x00033330) list_double_heading_pane_g2_cp2_ParamLimits

0x8750,	// (0x00033330) list_double_heading_pane_g2_cp2

0xc7f8,	// (0x000373d8) list_double_heading_pane_t1_cp2_ParamLimits

0xc7f8,	// (0x000373d8) list_double_heading_pane_t1_cp2

0xc80e,	// (0x000373ee) list_double_heading_pane_t2_cp2_ParamLimits

0xc80e,	// (0x000373ee) list_double_heading_pane_t2_cp2

0x750d,	// (0x000320ed) aid_value_unit2

0x4a93,	// (0x0002f673) popup_preview_fixed_window

0x812a,	// (0x00032d0a) bg_popup_preview_window_pane_cp02

0xc820,	// (0x00037400) list_preview_fixed_pane

0xc866,	// (0x00037446) list_empty_pane_fp_ParamLimits

0xc866,	// (0x00037446) list_empty_pane_fp

0xc866,	// (0x00037446) list_single_cale_day_pane_fp_ParamLimits

0xc866,	// (0x00037446) list_single_cale_day_pane_fp

0xc866,	// (0x00037446) list_single_graphic_heading_pane_fp_ParamLimits

0xc866,	// (0x00037446) list_single_graphic_heading_pane_fp

0xc866,	// (0x00037446) list_single_graphic_pane_fp_ParamLimits

0xc866,	// (0x00037446) list_single_graphic_pane_fp

0xc866,	// (0x00037446) list_single_heading_pane_fp_ParamLimits

0xc866,	// (0x00037446) list_single_heading_pane_fp

0xc866,	// (0x00037446) list_single_pane_fp_ParamLimits

0xc866,	// (0x00037446) list_single_pane_fp

0xc87b,	// (0x0003745b) list_single_pane_fp_g1_ParamLimits

0xc87b,	// (0x0003745b) list_single_pane_fp_g1

0x7b1c,	// (0x000326fc) list_single_pane_fp_g2_ParamLimits

0x7b1c,	// (0x000326fc) list_single_pane_fp_g2

0x7b28,	// (0x00032708) list_single_pane_fp_g3_ParamLimits

0x7b28,	// (0x00032708) list_single_pane_fp_g3

0xc887,	// (0x00037467) list_single_pane_fp_g4_ParamLimits

0xc887,	// (0x00037467) list_single_pane_fp_g4

0x0003,

0xfb71,	// (0x0003a751) list_single_pane_fp_g_ParamLimits

0xfb71,	// (0x0003a751) list_single_pane_fp_g

0x7b3c,	// (0x0003271c) list_single_pane_fp_t1_ParamLimits

0x7b3c,	// (0x0003271c) list_single_pane_fp_t1

0x7b53,	// (0x00032733) list_single_graphic_pane_fp_g1_ParamLimits

0x7b53,	// (0x00032733) list_single_graphic_pane_fp_g1

0xc87b,	// (0x0003745b) list_single_graphic_pane_fp_g2_ParamLimits

0xc87b,	// (0x0003745b) list_single_graphic_pane_fp_g2

0x7b1c,	// (0x000326fc) list_single_graphic_pane_fp_g3_ParamLimits

0x7b1c,	// (0x000326fc) list_single_graphic_pane_fp_g3

0x7b28,	// (0x00032708) list_single_graphic_pane_fp_g4_ParamLimits

0x7b28,	// (0x00032708) list_single_graphic_pane_fp_g4

0xc887,	// (0x00037467) list_single_graphic_pane_fp_g5_ParamLimits

0xc887,	// (0x00037467) list_single_graphic_pane_fp_g5

0x0004,

0xfb7a,	// (0x0003a75a) list_single_graphic_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003a75a) list_single_graphic_pane_fp_g

0x7b5f,	// (0x0003273f) list_single_graphic_pane_fp_t1_ParamLimits

0x7b5f,	// (0x0003273f) list_single_graphic_pane_fp_t1

0x7b53,	// (0x00032733) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7b53,	// (0x00032733) list_single_graphic_heading_pane_fp_g1

0xc87b,	// (0x0003745b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc87b,	// (0x0003745b) list_single_graphic_heading_pane_fp_g2

0x7b1c,	// (0x000326fc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7b1c,	// (0x000326fc) list_single_graphic_heading_pane_fp_g3

0x7b28,	// (0x00032708) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7b28,	// (0x00032708) list_single_graphic_heading_pane_fp_g4

0xc887,	// (0x00037467) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc887,	// (0x00037467) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0003a75a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003a75a) list_single_graphic_heading_pane_fp_g

0x7b75,	// (0x00032755) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7b75,	// (0x00032755) list_single_graphic_heading_pane_fp_t1

0x7b8b,	// (0x0003276b) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7b8b,	// (0x0003276b) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0003a765) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0003a765) list_single_graphic_heading_pane_fp_t

0x7b9d,	// (0x0003277d) list_single_cale_day_pane_fp_g1_ParamLimits

0x7b9d,	// (0x0003277d) list_single_cale_day_pane_fp_g1

0xc893,	// (0x00037473) list_single_cale_day_pane_fp_g2_ParamLimits

0xc893,	// (0x00037473) list_single_cale_day_pane_fp_g2

0x7bd5,	// (0x000327b5) list_single_cale_day_pane_fp_g3_ParamLimits

0x7bd5,	// (0x000327b5) list_single_cale_day_pane_fp_g3

0x7bfd,	// (0x000327dd) list_single_cale_day_pane_fp_g4_ParamLimits

0x7bfd,	// (0x000327dd) list_single_cale_day_pane_fp_g4

0x7c21,	// (0x00032801) list_single_cale_day_pane_fp_g5_ParamLimits

0x7c21,	// (0x00032801) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8a,	// (0x0003a76a) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8a,	// (0x0003a76a) list_single_cale_day_pane_fp_g

0x7c45,	// (0x00032825) list_single_cale_day_pane_fp_t1_ParamLimits

0x7c45,	// (0x00032825) list_single_cale_day_pane_fp_t1

0x7c6b,	// (0x0003284b) list_single_cale_day_pane_fp_t2_ParamLimits

0x7c6b,	// (0x0003284b) list_single_cale_day_pane_fp_t2

0x7c84,	// (0x00032864) list_single_cale_day_pane_fp_t3_ParamLimits

0x7c84,	// (0x00032864) list_single_cale_day_pane_fp_t3

0x0002,

0xfb95,	// (0x0003a775) list_single_cale_day_pane_fp_t_ParamLimits

0xfb95,	// (0x0003a775) list_single_cale_day_pane_fp_t

0xc87b,	// (0x0003745b) list_empty_pane_fp_g1_ParamLimits

0xc87b,	// (0x0003745b) list_empty_pane_fp_g1

0x7c9d,	// (0x0003287d) list_empty_pane_fp_t1

0x7cab,	// (0x0003288b) list_empty_pane_fp_t2

0x0001,

0xfb9c,	// (0x0003a77c) list_empty_pane_fp_t

0xc87b,	// (0x0003745b) list_single_heading_pane_fp_g1_ParamLimits

0xc87b,	// (0x0003745b) list_single_heading_pane_fp_g1

0x7b1c,	// (0x000326fc) list_single_heading_pane_fp_g2_ParamLimits

0x7b1c,	// (0x000326fc) list_single_heading_pane_fp_g2

0x7b28,	// (0x00032708) list_single_heading_pane_fp_g3_ParamLimits

0x7b28,	// (0x00032708) list_single_heading_pane_fp_g3

0x0002,

0xfba1,	// (0x0003a781) list_single_heading_pane_fp_g_ParamLimits

0xfba1,	// (0x0003a781) list_single_heading_pane_fp_g

0x7cb9,	// (0x00032899) list_single_heading_pane_fp_t1_ParamLimits

0x7cb9,	// (0x00032899) list_single_heading_pane_fp_t1

0x7ccb,	// (0x000328ab) list_single_heading_pane_fp_t2_ParamLimits

0x7ccb,	// (0x000328ab) list_single_heading_pane_fp_t2

0x0001,

0xfba8,	// (0x0003a788) list_single_heading_pane_fp_t_ParamLimits

0xfba8,	// (0x0003a788) list_single_heading_pane_fp_t

0x8935,	// (0x00033515) aid_size_cell_fast

0x809a,	// (0x00032c7a) soft_indicator_pane_cp1_t1

0x8972,	// (0x00033552) cell_app_pane_cp2_ParamLimits

0x8972,	// (0x00033552) cell_app_pane_cp2

0x651f,	// (0x000310ff) fep_hwr_candidate_drop_down_list_pane

0x66f7,	// (0x000312d7) fep_hwr_candidate_pane_g3_ParamLimits

0x66f7,	// (0x000312d7) fep_hwr_candidate_pane_g3

0x3982,	// (0x0002e562) fep_hwr_candidate_pane_g4_ParamLimits

0x3982,	// (0x0002e562) fep_hwr_candidate_pane_g4

0x0002,

0xfb17,	// (0x0003a6f7) fep_hwr_candidate_pane_g_ParamLimits

0xfb17,	// (0x0003a6f7) fep_hwr_candidate_pane_g

0xc384,	// (0x00036f64) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc384,	// (0x00036f64) fep_vkb_candidate_drop_down_list_pane

0xc795,	// (0x00037375) fep_vkb_candidate_pane_g3

0xc79d,	// (0x0003737d) fep_vkb_candidate_pane_g4

0x0002,

0xfb44,	// (0x0003a724) fep_vkb_candidate_pane_g

0x6762,	// (0x00031342) cell_hwr_candidate_pane_g1_ParamLimits

0x6770,	// (0x00031350) cell_hwr_candidate_pane_g3_ParamLimits

0x6770,	// (0x00031350) cell_hwr_candidate_pane_g3

0xe078,	// (0x00038c58) cell_hwr_candidate_pane_g4_ParamLimits

0xe078,	// (0x00038c58) cell_hwr_candidate_pane_g4

0x0002,

0xfb63,	// (0x0003a743) cell_hwr_candidate_pane_g_ParamLimits

0xfb63,	// (0x0003a743) cell_hwr_candidate_pane_g

0xc7b4,	// (0x00037394) cell_vkb_candidate_pane_g3_ParamLimits

0xc7b4,	// (0x00037394) cell_vkb_candidate_pane_g3

0xc7cf,	// (0x000373af) cell_vkb_candidate_pane_g4_ParamLimits

0xc7cf,	// (0x000373af) cell_vkb_candidate_pane_g4

0xc89f,	// (0x0003747f) cell_app_pane_cp2_g1_ParamLimits

0xc89f,	// (0x0003747f) cell_app_pane_cp2_g1

0xc8bd,	// (0x0003749d) cell_app_pane_cp2_g2_ParamLimits

0xc8bd,	// (0x0003749d) cell_app_pane_cp2_g2

0x0001,

0xfbad,	// (0x0003a78d) cell_app_pane_cp2_g_ParamLimits

0xfbad,	// (0x0003a78d) cell_app_pane_cp2_g

0xc8c9,	// (0x000374a9) cell_app_pane_cp2_t1_ParamLimits

0xc8c9,	// (0x000374a9) cell_app_pane_cp2_t1

0x8736,	// (0x00033316) grid_highlight_pane_cp1_ParamLimits

0x8736,	// (0x00033316) grid_highlight_pane_cp1

0x67af,	// (0x0003138f) cell_hwr_candidate_pane_cp1_ParamLimits

0x67af,	// (0x0003138f) cell_hwr_candidate_pane_cp1

0x6762,	// (0x00031342) fep_hwr_candidate_drop_down_list_pane_g1

0x67ce,	// (0x000313ae) fep_hwr_candidate_drop_down_list_pane_g2

0x67db,	// (0x000313bb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x0003a792) fep_hwr_candidate_drop_down_list_pane_g

0x67e8,	// (0x000313c8) fep_hwr_candidate_drop_down_list_scroll_pane

0x67f1,	// (0x000313d1) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x67f1,	// (0x000313d1) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x67fe,	// (0x000313de) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x67fe,	// (0x000313de) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x680b,	// (0x000313eb) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x680b,	// (0x000313eb) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6818,	// (0x000313f8) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6818,	// (0x000313f8) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6833,	// (0x00031413) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6833,	// (0x00031413) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x684e,	// (0x0003142e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x684e,	// (0x0003142e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6869,	// (0x00031449) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6869,	// (0x00031449) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6884,	// (0x00031464) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6884,	// (0x00031464) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb9,	// (0x0003a799) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb9,	// (0x0003a799) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc8db,	// (0x000374bb) cell_vkb_candidate_pane_cp1_ParamLimits

0xc8db,	// (0x000374bb) cell_vkb_candidate_pane_cp1

0xc49d,	// (0x0003707d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc49d,	// (0x0003707d) fep_vkb_candidate_drop_down_list_pane_g1

0xc8fb,	// (0x000374db) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc8fb,	// (0x000374db) fep_vkb_candidate_drop_down_list_pane_g2

0xc908,	// (0x000374e8) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc908,	// (0x000374e8) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbca,	// (0x0003a7aa) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbca,	// (0x0003a7aa) fep_vkb_candidate_drop_down_list_pane_g

0xc915,	// (0x000374f5) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc915,	// (0x000374f5) fep_vkb_candidate_drop_down_list_scroll_pane

0xc922,	// (0x00037502) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc922,	// (0x00037502) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc92f,	// (0x0003750f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc92f,	// (0x0003750f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc93b,	// (0x0003751b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc93b,	// (0x0003751b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc947,	// (0x00037527) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc947,	// (0x00037527) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc968,	// (0x00037548) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc968,	// (0x00037548) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc989,	// (0x00037569) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc989,	// (0x00037569) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc9aa,	// (0x0003758a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc9aa,	// (0x0003758a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc9cb,	// (0x000375ab) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc9cb,	// (0x000375ab) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd1,	// (0x0003a7b1) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd1,	// (0x0003a7b1) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7543,	// (0x00032123) title_pane_g1_ParamLimits

0x7550,	// (0x00032130) title_pane_g2_ParamLimits

0xf54e,	// (0x0003a12e) title_pane_g_ParamLimits

0x8da8,	// (0x00033988) aid_call2_pane

0x8db0,	// (0x00033990) aid_call_pane

0x8db8,	// (0x00033998) popup_clock_analogue_window_g1

0x8db8,	// (0x00033998) popup_clock_analogue_window_g2

0x551f,	// (0x000300ff) popup_clock_analogue_window_g3

0x5528,	// (0x00030108) popup_clock_analogue_window_g4

0x752f,	// (0x0003210f) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0003a2d8) popup_clock_analogue_window_g

0x5530,	// (0x00030110) popup_clock_analogue_window_t1

0x553e,	// (0x0003011e) clock_digital_number_pane_ParamLimits

0x553e,	// (0x0003011e) clock_digital_number_pane

0x554a,	// (0x0003012a) clock_digital_number_pane_cp02_ParamLimits

0x554a,	// (0x0003012a) clock_digital_number_pane_cp02

0x5556,	// (0x00030136) clock_digital_number_pane_cp03_ParamLimits

0x5556,	// (0x00030136) clock_digital_number_pane_cp03

0x5562,	// (0x00030142) clock_digital_number_pane_cp04_ParamLimits

0x5562,	// (0x00030142) clock_digital_number_pane_cp04

0x556e,	// (0x0003014e) clock_digital_separator_pane_ParamLimits

0x556e,	// (0x0003014e) clock_digital_separator_pane

0x557a,	// (0x0003015a) popup_clock_digital_window_t1_ParamLimits

0x557a,	// (0x0003015a) popup_clock_digital_window_t1

0x752f,	// (0x0003210f) clock_digital_number_pane_g1

0x752f,	// (0x0003210f) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0003a2e3) clock_digital_number_pane_g

0x752f,	// (0x0003210f) clock_digital_separator_pane_g1

0x752f,	// (0x0003210f) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0003a2e3) clock_digital_separator_pane_g

0x972b,	// (0x0003430b) aid_fill_nsta_ParamLimits

0x9871,	// (0x00034451) indicator_nsta_pane_ParamLimits

0x99ea,	// (0x000345ca) popup_clock_analogue_window

0x99ea,	// (0x000345ca) popup_clock_digital_window

0x7619,	// (0x000321f9) grid_indicator_nsta_pane_ParamLimits

0xbc2b,	// (0x0003680b) clock_nsta_pane_t2

0x0001,

0xfa97,	// (0x0003a677) clock_nsta_pane_t

0x54e3,	// (0x000300c3) aid_size_max_handle

0x54ed,	// (0x000300cd) aid_size_min_handle

0x93cb,	// (0x00033fab) editor_scroll_pane

0xc9e6,	// (0x000375c6) ex_editor_pane

0x88a3,	// (0x00033483) scroll_pane_cp13

0x86d5,	// (0x000332b5) scroll_pane_cp14

0x8de7,	// (0x000339c7) scroll_pane_cp36

0x8e13,	// (0x000339f3) list_single_graphic_hl_pane_cp2_ParamLimits

0x8e13,	// (0x000339f3) list_single_graphic_hl_pane_cp2

0xb1dd,	// (0x00035dbd) list_single_graphic_hl_pane_ParamLimits

0xb1dd,	// (0x00035dbd) list_single_graphic_hl_pane

0x7ce1,	// (0x000328c1) aid_size_min_hl_cp1

0xc9ee,	// (0x000375ce) list_highlight_pane_cp34_ParamLimits

0xc9ee,	// (0x000375ce) list_highlight_pane_cp34

0xc9ff,	// (0x000375df) list_single_graphic_hl_pane_g1_ParamLimits

0xc9ff,	// (0x000375df) list_single_graphic_hl_pane_g1

0x7cea,	// (0x000328ca) list_single_graphic_hl_pane_g2_ParamLimits

0x7cea,	// (0x000328ca) list_single_graphic_hl_pane_g2

0x7cea,	// (0x000328ca) list_single_graphic_hl_pane_g3_ParamLimits

0x7cea,	// (0x000328ca) list_single_graphic_hl_pane_g3

0x7cf6,	// (0x000328d6) list_single_graphic_hl_pane_g4_ParamLimits

0x7cf6,	// (0x000328d6) list_single_graphic_hl_pane_g4

0x7d02,	// (0x000328e2) list_single_graphic_hl_pane_g5_ParamLimits

0x7d02,	// (0x000328e2) list_single_graphic_hl_pane_g5

0x0004,

0xfbe2,	// (0x0003a7c2) list_single_graphic_hl_pane_g_ParamLimits

0xfbe2,	// (0x0003a7c2) list_single_graphic_hl_pane_g

0x7d16,	// (0x000328f6) list_single_graphic_hl_pane_t1_ParamLimits

0x7d16,	// (0x000328f6) list_single_graphic_hl_pane_t1

0xca0c,	// (0x000375ec) aid_size_min_hl_cp2

0xca15,	// (0x000375f5) list_highlight_pane_cp34_cp2_ParamLimits

0xca15,	// (0x000375f5) list_highlight_pane_cp34_cp2

0xc9ff,	// (0x000375df) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc9ff,	// (0x000375df) list_single_graphic_hl_pane_g1_cp2

0xca22,	// (0x00037602) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca22,	// (0x00037602) list_single_graphic_hl_pane_g2_cp2

0xca2e,	// (0x0003760e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xca2e,	// (0x0003760e) list_single_graphic_hl_pane_g3_cp2

0xc2c5,	// (0x00036ea5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc2c5,	// (0x00036ea5) list_single_graphic_hl_pane_g4_cp2

0xca3c,	// (0x0003761c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xca3c,	// (0x0003761c) list_single_graphic_hl_pane_g5_cp2

0x58b8,	// (0x00030498) control_pane_g4_ParamLimits

0x58b8,	// (0x00030498) control_pane_g4

0x96ef,	// (0x000342cf) bg_popup_sub_pane_cp10_ParamLimits

0xc21d,	// (0x00036dfd) list_choice_list_pane_ParamLimits

0xc22c,	// (0x00036e0c) scroll_pane_cp23

0x812a,	// (0x00032d0a) bg_popup_preview_window_pane_cp02_ParamLimits

0xc820,	// (0x00037400) list_preview_fixed_pane_ParamLimits

0xc836,	// (0x00037416) list_preview_fixed_pane_cp_ParamLimits

0xc836,	// (0x00037416) list_preview_fixed_pane_cp

0xc842,	// (0x00037422) popup_preview_fixed_window_g1_ParamLimits

0xc842,	// (0x00037422) popup_preview_fixed_window_g1

0xc84e,	// (0x0003742e) popup_preview_fixed_window_g2_ParamLimits

0xc84e,	// (0x0003742e) popup_preview_fixed_window_g2

0x0002,

0xfb6a,	// (0x0003a74a) popup_preview_fixed_window_g_ParamLimits

0xfb6a,	// (0x0003a74a) popup_preview_fixed_window_g

0x5457,	// (0x00030037) aid_navi_side_left_pane_ParamLimits

0x546c,	// (0x0003004c) aid_navi_side_right_pane_ParamLimits

0x5484,	// (0x00030064) navi_icon_pane_stacon_ParamLimits

0x5498,	// (0x00030078) navi_navi_pane_stacon_ParamLimits

0x5484,	// (0x00030064) navi_text_pane_stacon_ParamLimits

0x4954,	// (0x0002f534) main_text_info_pane

0xca66,	// (0x00037646) listscroll_text_info_pane

0xca6e,	// (0x0003764e) list_text_info_pane_ParamLimits

0xca6e,	// (0x0003764e) list_text_info_pane

0xca7d,	// (0x0003765d) scroll_pane_cp24_ParamLimits

0xca7d,	// (0x0003765d) scroll_pane_cp24

0xca9b,	// (0x0003767b) list_text_info_pane_t1_ParamLimits

0xca9b,	// (0x0003767b) list_text_info_pane_t1

0x5a2a,	// (0x0003060a) popup_fast_swap2_window_ParamLimits

0x5a2a,	// (0x0003060a) popup_fast_swap2_window

0xcacc,	// (0x000376ac) aid_size_cell_fast2

0x7525,	// (0x00032105) bg_popup_window_pane_cp17

0xa073,	// (0x00034c53) heading_pane_cp2

0x839f,	// (0x00032f7f) listscroll_fast2_pane

0xcad6,	// (0x000376b6) grid_fast2_pane

0xcae0,	// (0x000376c0) listscroll_fast2_pane_g1

0xcae8,	// (0x000376c8) listscroll_fast2_pane_g2

0x0001,

0xfbed,	// (0x0003a7cd) listscroll_fast2_pane_g

0x88a3,	// (0x00033483) scroll_pane_cp26

0xcaf2,	// (0x000376d2) cell_fast2_pane_ParamLimits

0xcaf2,	// (0x000376d2) cell_fast2_pane

0xcb07,	// (0x000376e7) cell_fast2_pane_g1

0xcb10,	// (0x000376f0) cell_fast2_pane_g2

0xcb19,	// (0x000376f9) cell_fast2_pane_g3

0x0002,

0xfbf2,	// (0x0003a7d2) cell_fast2_pane_g

0x8492,	// (0x00033072) grid_highlight_pane_cp9

0x59e8,	// (0x000305c8) main_eswt_pane_ParamLimits

0x59e8,	// (0x000305c8) main_eswt_pane

0xca92,	// (0x00037672) list_single_text_info_pane

0xcb21,	// (0x00037701) eswt_ctrl_button_pane

0xcb21,	// (0x00037701) eswt_ctrl_canvas_pane

0xcb29,	// (0x00037709) eswt_ctrl_combo_pane

0xcb21,	// (0x00037701) eswt_ctrl_default_pane

0xcb21,	// (0x00037701) eswt_ctrl_label_pane

0xcb31,	// (0x00037711) eswt_ctrl_wait_pane

0xcb39,	// (0x00037719) eswt_shell_pane

0x7525,	// (0x00032105) listscroll_eswt_app_pane

0xcb59,	// (0x00037739) popup_eswt_tasktip_window_ParamLimits

0xcb59,	// (0x00037739) popup_eswt_tasktip_window

0x9c87,	// (0x00034867) bg_popup_window_pane_cp18

0xcb6a,	// (0x0003774a) eswt_control_pane_g1_ParamLimits

0xcb6a,	// (0x0003774a) eswt_control_pane_g1

0xcb77,	// (0x00037757) eswt_control_pane_g2_ParamLimits

0xcb77,	// (0x00037757) eswt_control_pane_g2

0xcb84,	// (0x00037764) eswt_control_pane_g3_ParamLimits

0xcb84,	// (0x00037764) eswt_control_pane_g3

0xcb91,	// (0x00037771) eswt_control_pane_g4_ParamLimits

0xcb91,	// (0x00037771) eswt_control_pane_g4

0x0003,

0xfbf9,	// (0x0003a7d9) eswt_control_pane_g_ParamLimits

0xfbf9,	// (0x0003a7d9) eswt_control_pane_g

0x8736,	// (0x00033316) bg_button_pane_ParamLimits

0x8736,	// (0x00033316) bg_button_pane

0x84a7,	// (0x00033087) common_borders_pane_copy2_ParamLimits

0x84a7,	// (0x00033087) common_borders_pane_copy2

0xcb9e,	// (0x0003777e) control_button_pane_g1_ParamLimits

0xcb9e,	// (0x0003777e) control_button_pane_g1

0xcbaa,	// (0x0003778a) control_button_pane_g2_ParamLimits

0xcbaa,	// (0x0003778a) control_button_pane_g2

0xcbb6,	// (0x00037796) control_button_pane_g3_ParamLimits

0xcbb6,	// (0x00037796) control_button_pane_g3

0x0002,

0xfc02,	// (0x0003a7e2) control_button_pane_g_ParamLimits

0xfc02,	// (0x0003a7e2) control_button_pane_g

0xcbca,	// (0x000377aa) control_button_pane_t1

0xcbd8,	// (0x000377b8) control_button_pane_t2

0x0001,

0xfc09,	// (0x0003a7e9) control_button_pane_t

0x9c13,	// (0x000347f3) bg_button_pane_g1

0x9c23,	// (0x00034803) bg_button_pane_g2

0x9c1b,	// (0x000347fb) bg_button_pane_g3

0x9c33,	// (0x00034813) bg_button_pane_g4

0x9c2b,	// (0x0003480b) bg_button_pane_g5

0x9c3b,	// (0x0003481b) bg_button_pane_g6

0x9c43,	// (0x00034823) bg_button_pane_g7

0x9c53,	// (0x00034833) bg_button_pane_g8

0x9c4b,	// (0x0003482b) bg_button_pane_g9

0x0008,

0xf866,	// (0x0003a446) bg_button_pane_g

0xc1d8,	// (0x00036db8) common_borders_pane_ParamLimits

0xc1d8,	// (0x00036db8) common_borders_pane

0xcb6a,	// (0x0003774a) eswt_control_pane_g1_copy1_ParamLimits

0xcb6a,	// (0x0003774a) eswt_control_pane_g1_copy1

0xcb77,	// (0x00037757) eswt_control_pane_g2_copy1_ParamLimits

0xcb77,	// (0x00037757) eswt_control_pane_g2_copy1

0xcb84,	// (0x00037764) eswt_control_pane_g3_copy1_ParamLimits

0xcb84,	// (0x00037764) eswt_control_pane_g3_copy1

0xcb91,	// (0x00037771) eswt_control_pane_g4_copy1_ParamLimits

0xcb91,	// (0x00037771) eswt_control_pane_g4_copy1

0xc213,	// (0x00036df3) bg_eswt_ctrl_canvas_pane_g1

0xc1d8,	// (0x00036db8) common_borders_pane_cp2_ParamLimits

0xc1d8,	// (0x00036db8) common_borders_pane_cp2

0xc1d8,	// (0x00036db8) common_borders_pane_cp3_ParamLimits

0xc1d8,	// (0x00036db8) common_borders_pane_cp3

0xcbe6,	// (0x000377c6) separator_horizontal_pane

0xcbee,	// (0x000377ce) separator_vertical_pane

0xcb6a,	// (0x0003774a) eswt_control_pane_g1_copy2_ParamLimits

0xcb6a,	// (0x0003774a) eswt_control_pane_g1_copy2

0xcb77,	// (0x00037757) eswt_control_pane_g2_copy2_ParamLimits

0xcb77,	// (0x00037757) eswt_control_pane_g2_copy2

0xcb84,	// (0x00037764) eswt_control_pane_g3_copy2_ParamLimits

0xcb84,	// (0x00037764) eswt_control_pane_g3_copy2

0xcb91,	// (0x00037771) eswt_control_pane_g4_copy2_ParamLimits

0xcb91,	// (0x00037771) eswt_control_pane_g4_copy2

0x7525,	// (0x00032105) common_borders_pane_cp4

0xcbf7,	// (0x000377d7) separator_horizontal_pane_g1

0xcc00,	// (0x000377e0) separator_horizontal_pane_g2

0xcc09,	// (0x000377e9) separator_horizontal_pane_g3

0x0002,

0xfc0e,	// (0x0003a7ee) separator_horizontal_pane_g

0xcb6a,	// (0x0003774a) eswt_control_pane_g1_copy3_ParamLimits

0xcb6a,	// (0x0003774a) eswt_control_pane_g1_copy3

0xcb77,	// (0x00037757) eswt_control_pane_g2_copy3_ParamLimits

0xcb77,	// (0x00037757) eswt_control_pane_g2_copy3

0xcb84,	// (0x00037764) eswt_control_pane_g3_copy3_ParamLimits

0xcb84,	// (0x00037764) eswt_control_pane_g3_copy3

0xcb91,	// (0x00037771) eswt_control_pane_g4_copy3_ParamLimits

0xcb91,	// (0x00037771) eswt_control_pane_g4_copy3

0x7525,	// (0x00032105) common_borders_pane_cp5

0xcc12,	// (0x000377f2) separator_vertical_pane_g1

0xcc1b,	// (0x000377fb) separator_vertical_pane_g2

0xcc24,	// (0x00037804) separator_vertical_pane_g3

0x0002,

0xfc15,	// (0x0003a7f5) separator_vertical_pane_g

0xcb6a,	// (0x0003774a) eswt_control_pane_g1_copy4_ParamLimits

0xcb6a,	// (0x0003774a) eswt_control_pane_g1_copy4

0xcb77,	// (0x00037757) eswt_control_pane_g2_copy4_ParamLimits

0xcb77,	// (0x00037757) eswt_control_pane_g2_copy4

0xcb84,	// (0x00037764) eswt_control_pane_g3_copy4_ParamLimits

0xcb84,	// (0x00037764) eswt_control_pane_g3_copy4

0xcb91,	// (0x00037771) eswt_control_pane_g4_copy4_ParamLimits

0xcb91,	// (0x00037771) eswt_control_pane_g4_copy4

0xcc2d,	// (0x0003780d) eswt_ctrl_combo_button_pane

0xcc35,	// (0x00037815) eswt_ctrl_input_pane

0xcc3d,	// (0x0003781d) popup_choice_list_window_cp70

0xcc45,	// (0x00037825) eswt_ctrl_input_pane_t1

0x7525,	// (0x00032105) input_focus_pane_cp70

0xc1d8,	// (0x00036db8) bg_button_pane_cp70_ParamLimits

0xc1d8,	// (0x00036db8) bg_button_pane_cp70

0xcc53,	// (0x00037833) eswt_ctrl_combo_button_pane_g1

0xcc5b,	// (0x0003783b) wait_bar_pane_cp70

0x9c87,	// (0x00034867) bg_popup_window_pane_cp70_ParamLimits

0x9c87,	// (0x00034867) bg_popup_window_pane_cp70

0xcc63,	// (0x00037843) popup_eswt_tasktip_window_t1

0xcc79,	// (0x00037859) wait_bar_pane_cp71_ParamLimits

0xcc79,	// (0x00037859) wait_bar_pane_cp71

0xcc85,	// (0x00037865) grid_eswt_app_pane

0x8bc1,	// (0x000337a1) scroll_pane_cp70

0xcc8e,	// (0x0003786e) cell_eswt_app_pane_ParamLimits

0xcc8e,	// (0x0003786e) cell_eswt_app_pane

0xccbe,	// (0x0003789e) cell_eswt_app_pane_g1_ParamLimits

0xccbe,	// (0x0003789e) cell_eswt_app_pane_g1

0xcced,	// (0x000378cd) cell_eswt_app_pane_g2_ParamLimits

0xcced,	// (0x000378cd) cell_eswt_app_pane_g2

0x0001,

0xfc1c,	// (0x0003a7fc) cell_eswt_app_pane_g_ParamLimits

0xfc1c,	// (0x0003a7fc) cell_eswt_app_pane_g

0xcd16,	// (0x000378f6) cell_eswt_app_pane_t1_ParamLimits

0xcd16,	// (0x000378f6) cell_eswt_app_pane_t1

0xcd48,	// (0x00037928) grid_highlight_pane_cp70_ParamLimits

0xcd48,	// (0x00037928) grid_highlight_pane_cp70

0x92a0,	// (0x00033e80) set_content_pane_g1

0x9676,	// (0x00034256) status_small_volume_pane

0x689f,	// (0x0003147f) status_small_volume_pane_g1

0x68a7,	// (0x00031487) volume_small2_pane

0x68b0,	// (0x00031490) volume_small2_pane_g1

0x68b9,	// (0x00031499) volume_small2_pane_g2

0x68c2,	// (0x000314a2) volume_small2_pane_g3

0x68cb,	// (0x000314ab) volume_small2_pane_g4

0x68d4,	// (0x000314b4) volume_small2_pane_g5

0x68dd,	// (0x000314bd) volume_small2_pane_g6

0x68e6,	// (0x000314c6) volume_small2_pane_g7

0x68ef,	// (0x000314cf) volume_small2_pane_g8

0x68f8,	// (0x000314d8) volume_small2_pane_g9

0x6901,	// (0x000314e1) volume_small2_pane_g10

0x0009,

0xfc21,	// (0x0003a801) volume_small2_pane_g

0xc5e5,	// (0x000371c5) fep_vkb_top_text_pane_g1_ParamLimits

0xc600,	// (0x000371e0) fep_vkb_top_text_pane_t1_ParamLimits

0xc85a,	// (0x0003743a) popup_preview_fixed_window_g3_ParamLimits

0xc85a,	// (0x0003743a) popup_preview_fixed_window_g3

0x5ed9,	// (0x00030ab9) popup_toolbar_trans_pane

0xafe4,	// (0x00035bc4) aid_height_set_list_ParamLimits

0xaff5,	// (0x00035bd5) aid_size_parent_ParamLimits

0x96ef,	// (0x000342cf) list_highlight_pane_cp2_ParamLimits

0x92a0,	// (0x00033e80) set_content_pane_g1_ParamLimits

0xb1f9,	// (0x00035dd9) list_single_image_pane_ParamLimits

0xb1f9,	// (0x00035dd9) list_single_image_pane

0xcd54,	// (0x00037934) aid_size_cell_image_ParamLimits

0xcd54,	// (0x00037934) aid_size_cell_image

0xcd61,	// (0x00037941) grid_single_image_pane_ParamLimits

0xcd61,	// (0x00037941) grid_single_image_pane

0xa5b0,	// (0x00035190) list_single_image_pane_g1_ParamLimits

0xa5b0,	// (0x00035190) list_single_image_pane_g1

0xcd6d,	// (0x0003794d) list_single_image_pane_g2_ParamLimits

0xcd6d,	// (0x0003794d) list_single_image_pane_g2

0x0001,

0xfc36,	// (0x0003a816) list_single_image_pane_g_ParamLimits

0xfc36,	// (0x0003a816) list_single_image_pane_g

0xcd81,	// (0x00037961) list_single_image_pane_t1_ParamLimits

0xcd81,	// (0x00037961) list_single_image_pane_t1

0xcd97,	// (0x00037977) cell_image_list_pane_ParamLimits

0xcd97,	// (0x00037977) cell_image_list_pane

0xcdab,	// (0x0003798b) cell_image_list_pane_g1

0xcdb4,	// (0x00037994) cell_image_list_pane_g2

0x0001,

0xfc3b,	// (0x0003a81b) cell_image_list_pane_g

0xcdbd,	// (0x0003799d) aid_size_cell_tb_trans_pane

0x8736,	// (0x00033316) bg_tb_trans_pane

0xcdcf,	// (0x000379af) grid_tb_trans_pane

0x9c13,	// (0x000347f3) bg_tb_trans_pane_g1

0x9c23,	// (0x00034803) bg_tb_trans_pane_g2

0x9c1b,	// (0x000347fb) bg_tb_trans_pane_g3

0x9c33,	// (0x00034813) bg_tb_trans_pane_g4

0x9c2b,	// (0x0003480b) bg_tb_trans_pane_g5

0x9c53,	// (0x00034833) bg_tb_trans_pane_g6

0x9c4b,	// (0x0003482b) bg_tb_trans_pane_g7

0x9c3b,	// (0x0003481b) bg_tb_trans_pane_g8

0x9c43,	// (0x00034823) bg_tb_trans_pane_g9

0x0008,

0xfc40,	// (0x0003a820) bg_tb_trans_pane_g

0xcde3,	// (0x000379c3) cell_toolbar_trans_pane_ParamLimits

0xcde3,	// (0x000379c3) cell_toolbar_trans_pane

0xc213,	// (0x00036df3) cell_toolbar_trans_pane_g1

0xbde8,	// (0x000369c8) list_form2_midp_pane_t1

0xbdf6,	// (0x000369d6) list_form2_midp_pane_t2

0x0001,

0xfadd,	// (0x0003a6bd) list_form2_midp_pane_t

0xbe04,	// (0x000369e4) scroll_pane_cp51_ParamLimits

0xbfc0,	// (0x00036ba0) form2_midp_wait_pane_g1

0xbfc9,	// (0x00036ba9) form2_midp_wait_pane_g2

0xbfd2,	// (0x00036bb2) form2_midp_wait_pane_g3

0x0002,

0xfaf2,	// (0x0003a6d2) form2_midp_wait_pane_g

0x7619,	// (0x000321f9) list_highlight_pane_cp21_ParamLimits

0xc01e,	// (0x00036bfe) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc02d,	// (0x00036c0d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x76f0,	// (0x000322d0) list_single_2graphic_im_pane_ParamLimits

0x76f0,	// (0x000322d0) list_single_2graphic_im_pane

0xce09,	// (0x000379e9) list_single_2graphic_im_pane_g1_ParamLimits

0xce09,	// (0x000379e9) list_single_2graphic_im_pane_g1

0xce1a,	// (0x000379fa) list_single_2graphic_im_pane_g2_ParamLimits

0xce1a,	// (0x000379fa) list_single_2graphic_im_pane_g2

0xce26,	// (0x00037a06) list_single_2graphic_im_pane_g3_ParamLimits

0xce26,	// (0x00037a06) list_single_2graphic_im_pane_g3

0x0003,

0xfc53,	// (0x0003a833) list_single_2graphic_im_pane_g_ParamLimits

0xfc53,	// (0x0003a833) list_single_2graphic_im_pane_g

0xce46,	// (0x00037a26) list_single_2graphic_im_pane_t1_ParamLimits

0xce46,	// (0x00037a26) list_single_2graphic_im_pane_t1

0xc866,	// (0x00037446) list_single_graphic_2heading_pane_fp_ParamLimits

0xc866,	// (0x00037446) list_single_graphic_2heading_pane_fp

0x7b53,	// (0x00032733) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7b53,	// (0x00032733) list_single_graphic_2heading_pane_fp_g1

0xc87b,	// (0x0003745b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc87b,	// (0x0003745b) list_single_graphic_2heading_pane_fp_g2

0x7b1c,	// (0x000326fc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7b1c,	// (0x000326fc) list_single_graphic_2heading_pane_fp_g3

0x7b28,	// (0x00032708) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7b28,	// (0x00032708) list_single_graphic_2heading_pane_fp_g4

0xc887,	// (0x00037467) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc887,	// (0x00037467) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0003a75a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003a75a) list_single_graphic_2heading_pane_fp_g

0x7d2c,	// (0x0003290c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7d2c,	// (0x0003290c) list_single_graphic_2heading_pane_fp_t1

0x7b8b,	// (0x0003276b) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7b8b,	// (0x0003276b) list_single_graphic_2heading_pane_fp_t2

0x7d42,	// (0x00032922) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7d42,	// (0x00032922) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5c,	// (0x0003a83c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5c,	// (0x0003a83c) list_single_graphic_2heading_pane_fp_t

0xc29f,	// (0x00036e7f) fep_hwr_write_pane_g5_ParamLimits

0xc29f,	// (0x00036e7f) fep_hwr_write_pane_g5

0xc2ab,	// (0x00036e8b) fep_hwr_write_pane_g6_ParamLimits

0xc2ab,	// (0x00036e8b) fep_hwr_write_pane_g6

0xcb39,	// (0x00037719) eswt_shell_pane_ParamLimits

0x9c87,	// (0x00034867) bg_popup_window_pane_cp18_ParamLimits

0xaf3d,	// (0x00035b1d) heading_pane_cp70

0xcc63,	// (0x00037843) popup_eswt_tasktip_window_t1_ParamLimits

0x9780,	// (0x00034360) aid_touch_tab_arrow_left

0x978f,	// (0x0003436f) aid_touch_tab_arrow_right

0x7561,	// (0x00032141) title_pane_g3_ParamLimits

0x7561,	// (0x00032141) title_pane_g3

0x86f5,	// (0x000332d5) set_value_pane_g1

0x5ed9,	// (0x00030ab9) popup_toolbar_trans_pane_ParamLimits

0xcdbd,	// (0x0003799d) aid_size_cell_tb_trans_pane_ParamLimits

0x8736,	// (0x00033316) bg_tb_trans_pane_ParamLimits

0xcdcf,	// (0x000379af) grid_tb_trans_pane_ParamLimits

0x812a,	// (0x00032d0a) cont_note_pane_ParamLimits

0x812a,	// (0x00032d0a) cont_note_pane

0x84a7,	// (0x00033087) cont_snote2_single_text_pane_ParamLimits

0x84a7,	// (0x00033087) cont_snote2_single_text_pane

0x84a7,	// (0x00033087) cont_snote2_single_graphic_pane_ParamLimits

0x84a7,	// (0x00033087) cont_snote2_single_graphic_pane

0xa29a,	// (0x00034e7a) cont_note_wait_pane_ParamLimits

0xa29a,	// (0x00034e7a) cont_note_wait_pane

0xa29a,	// (0x00034e7a) cont_note_image_pane_ParamLimits

0xa29a,	// (0x00034e7a) cont_note_image_pane

0xce77,	// (0x00037a57) popup_note2_window_g1_ParamLimits

0xce77,	// (0x00037a57) popup_note2_window_g1

0xcea8,	// (0x00037a88) popup_note2_window_t1_ParamLimits

0xcea8,	// (0x00037a88) popup_note2_window_t1

0xceed,	// (0x00037acd) popup_note2_window_t2_ParamLimits

0xceed,	// (0x00037acd) popup_note2_window_t2

0xcf32,	// (0x00037b12) popup_note2_window_t3_ParamLimits

0xcf32,	// (0x00037b12) popup_note2_window_t3

0xcf77,	// (0x00037b57) popup_note2_window_t4_ParamLimits

0xcf77,	// (0x00037b57) popup_note2_window_t4

0x81ae,	// (0x00032d8e) popup_note2_window_t5_ParamLimits

0x81ae,	// (0x00032d8e) popup_note2_window_t5

0x0004,

0xfc68,	// (0x0003a848) popup_note2_window_t_ParamLimits

0xfc68,	// (0x0003a848) popup_note2_window_t

0xcfa6,	// (0x00037b86) popup_note2_image_window_g1_ParamLimits

0xcfa6,	// (0x00037b86) popup_note2_image_window_g1

0xcfb2,	// (0x00037b92) popup_note2_image_window_g2_ParamLimits

0xcfb2,	// (0x00037b92) popup_note2_image_window_g2

0x0001,

0xfc73,	// (0x0003a853) popup_note2_image_window_g_ParamLimits

0xfc73,	// (0x0003a853) popup_note2_image_window_g

0xcfc4,	// (0x00037ba4) popup_note2_image_window_t1_ParamLimits

0xcfc4,	// (0x00037ba4) popup_note2_image_window_t1

0xcfdc,	// (0x00037bbc) popup_note2_image_window_t2_ParamLimits

0xcfdc,	// (0x00037bbc) popup_note2_image_window_t2

0xcff4,	// (0x00037bd4) popup_note2_image_window_t3_ParamLimits

0xcff4,	// (0x00037bd4) popup_note2_image_window_t3

0x0002,

0xfc78,	// (0x0003a858) popup_note2_image_window_t_ParamLimits

0xfc78,	// (0x0003a858) popup_note2_image_window_t

0xa2a8,	// (0x00034e88) popup_note2_wait_window_g1_ParamLimits

0xa2a8,	// (0x00034e88) popup_note2_wait_window_g1

0xd010,	// (0x00037bf0) popup_note2_wait_window_g2_ParamLimits

0xd010,	// (0x00037bf0) popup_note2_wait_window_g2

0xa2c0,	// (0x00034ea0) popup_note2_wait_window_g3_ParamLimits

0xa2c0,	// (0x00034ea0) popup_note2_wait_window_g3

0x0002,

0xfc7f,	// (0x0003a85f) popup_note2_wait_window_g_ParamLimits

0xfc7f,	// (0x0003a85f) popup_note2_wait_window_g

0xd01c,	// (0x00037bfc) popup_note2_wait_window_t1_ParamLimits

0xd01c,	// (0x00037bfc) popup_note2_wait_window_t1

0xd03a,	// (0x00037c1a) popup_note2_wait_window_t2_ParamLimits

0xd03a,	// (0x00037c1a) popup_note2_wait_window_t2

0xd058,	// (0x00037c38) popup_note2_wait_window_t3_ParamLimits

0xd058,	// (0x00037c38) popup_note2_wait_window_t3

0xd06a,	// (0x00037c4a) popup_note2_wait_window_t4_ParamLimits

0xd06a,	// (0x00037c4a) popup_note2_wait_window_t4

0x0003,

0xfc86,	// (0x0003a866) popup_note2_wait_window_t_ParamLimits

0xfc86,	// (0x0003a866) popup_note2_wait_window_t

0xd07c,	// (0x00037c5c) wait_bar2_pane_ParamLimits

0xd07c,	// (0x00037c5c) wait_bar2_pane

0xd094,	// (0x00037c74) popup_snote2_single_text_window_g1_ParamLimits

0xd094,	// (0x00037c74) popup_snote2_single_text_window_g1

0xd0bc,	// (0x00037c9c) popup_snote2_single_text_window_t1_ParamLimits

0xd0bc,	// (0x00037c9c) popup_snote2_single_text_window_t1

0xd108,	// (0x00037ce8) popup_snote2_single_text_window_t2_ParamLimits

0xd108,	// (0x00037ce8) popup_snote2_single_text_window_t2

0xd154,	// (0x00037d34) popup_snote2_single_text_window_t3_ParamLimits

0xd154,	// (0x00037d34) popup_snote2_single_text_window_t3

0xd195,	// (0x00037d75) popup_snote2_single_text_window_t4_ParamLimits

0xd195,	// (0x00037d75) popup_snote2_single_text_window_t4

0xd1cb,	// (0x00037dab) popup_snote2_single_text_window_t5_ParamLimits

0xd1cb,	// (0x00037dab) popup_snote2_single_text_window_t5

0x0004,

0xfc8f,	// (0x0003a86f) popup_snote2_single_text_window_t_ParamLimits

0xfc8f,	// (0x0003a86f) popup_snote2_single_text_window_t

0xd1f6,	// (0x00037dd6) popup_snote2_single_graphic_window_g1_ParamLimits

0xd1f6,	// (0x00037dd6) popup_snote2_single_graphic_window_g1

0xd21e,	// (0x00037dfe) popup_snote2_single_graphic_window_g2_ParamLimits

0xd21e,	// (0x00037dfe) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9a,	// (0x0003a87a) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9a,	// (0x0003a87a) popup_snote2_single_graphic_window_g

0xd246,	// (0x00037e26) popup_snote2_single_graphic_window_t1_ParamLimits

0xd246,	// (0x00037e26) popup_snote2_single_graphic_window_t1

0xd292,	// (0x00037e72) popup_snote2_single_graphic_window_t2_ParamLimits

0xd292,	// (0x00037e72) popup_snote2_single_graphic_window_t2

0xd154,	// (0x00037d34) popup_snote2_single_graphic_window_t3_ParamLimits

0xd154,	// (0x00037d34) popup_snote2_single_graphic_window_t3

0xd195,	// (0x00037d75) popup_snote2_single_graphic_window_t4_ParamLimits

0xd195,	// (0x00037d75) popup_snote2_single_graphic_window_t4

0xd1cb,	// (0x00037dab) popup_snote2_single_graphic_window_t5_ParamLimits

0xd1cb,	// (0x00037dab) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9f,	// (0x0003a87f) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9f,	// (0x0003a87f) popup_snote2_single_graphic_window_t

0xbcc5,	// (0x000368a5) clock_nsta_pane_cp2_t1

0xbcc5,	// (0x000368a5) clock_nsta_pane_cp2_t2

0x0001,

0xfab3,	// (0x0003a693) clock_nsta_pane_cp2_t

0x51d5,	// (0x0002fdb5) form_field_data_wide_pane_g1_ParamLimits

0x8744,	// (0x00033324) form_field_data_wide_pane_g2_ParamLimits

0x8744,	// (0x00033324) form_field_data_wide_pane_g2

0x8750,	// (0x00033330) form_field_data_wide_pane_g3_ParamLimits

0x8750,	// (0x00033330) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0003a25b) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0003a25b) form_field_data_wide_pane_g

0xbbc7,	// (0x000367a7) grid_touch_3_pane_ParamLimits

0xbbc7,	// (0x000367a7) grid_touch_3_pane

0xd2de,	// (0x00037ebe) cell_touch_3_pane_ParamLimits

0xd2de,	// (0x00037ebe) cell_touch_3_pane

0xc213,	// (0x00036df3) cell_touch_3_pane_g1

0xc213,	// (0x00036df3) cell_touch_3_pane_g2

0x0001,

0xfb38,	// (0x0003a718) cell_touch_3_pane_g

0x8206,	// (0x00032de6) cont_query_data_pane

0x820e,	// (0x00032dee) cont_query_data_pane_cp1

0xd30c,	// (0x00037eec) button_value_adjust_pane_cp7

0xd314,	// (0x00037ef4) query_popup_pane_cp3

0x8ea8,	// (0x00033a88) bg_popup_sub_pane_cp22_ParamLimits

0x5599,	// (0x00030179) navi_navi_volume_pane_cp2

0x55b4,	// (0x00030194) popup_side_volume_key_window_g2

0x55c3,	// (0x000301a3) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0003a2f1) popup_side_volume_key_window_g

0x55e0,	// (0x000301c0) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0003a2f8) popup_side_volume_key_window_t

0x915f,	// (0x00033d3f) popup_side_volume_key_window_ParamLimits

0x4e36,	// (0x0002fa16) list_double_graphic_pane_g4_ParamLimits

0x4e36,	// (0x0002fa16) list_double_graphic_pane_g4

0x772f,	// (0x0003230f) list_single_2heading_msg_pane_ParamLimits

0x772f,	// (0x0003230f) list_single_2heading_msg_pane

0x7d62,	// (0x00032942) list_single_2heading_msg_pane_g1_ParamLimits

0x7d62,	// (0x00032942) list_single_2heading_msg_pane_g1

0x4c65,	// (0x0002f845) list_single_2heading_msg_pane_g2_ParamLimits

0x4c65,	// (0x0002f845) list_single_2heading_msg_pane_g2

0x7d6e,	// (0x0003294e) list_single_2heading_msg_pane_g3_ParamLimits

0x7d6e,	// (0x0003294e) list_single_2heading_msg_pane_g3

0x7d7a,	// (0x0003295a) list_single_2heading_msg_pane_g4_ParamLimits

0x7d7a,	// (0x0003295a) list_single_2heading_msg_pane_g4

0x0003,

0xfcaa,	// (0x0003a88a) list_single_2heading_msg_pane_g_ParamLimits

0xfcaa,	// (0x0003a88a) list_single_2heading_msg_pane_g

0x7d92,	// (0x00032972) list_single_2heading_msg_pane_t1_ParamLimits

0x7d92,	// (0x00032972) list_single_2heading_msg_pane_t1

0x7dba,	// (0x0003299a) list_single_2heading_msg_pane_t2_ParamLimits

0x7dba,	// (0x0003299a) list_single_2heading_msg_pane_t2

0x7dee,	// (0x000329ce) list_single_2heading_msg_pane_t3_ParamLimits

0x7dee,	// (0x000329ce) list_single_2heading_msg_pane_t3

0x7e27,	// (0x00032a07) list_single_2heading_msg_pane_t4_ParamLimits

0x7e27,	// (0x00032a07) list_single_2heading_msg_pane_t4

0x0003,

0xfcb3,	// (0x0003a893) list_single_2heading_msg_pane_t_ParamLimits

0xfcb3,	// (0x0003a893) list_single_2heading_msg_pane_t

0x756d,	// (0x0003214d) title_pane_g4_ParamLimits

0x756d,	// (0x0003214d) title_pane_g4

0x53a8,	// (0x0002ff88) title_pane_stacon_g3_ParamLimits

0x53a8,	// (0x0002ff88) title_pane_stacon_g3

0xce3a,	// (0x00037a1a) list_single_2graphic_im_pane_g4_ParamLimits

0xce3a,	// (0x00037a1a) list_single_2graphic_im_pane_g4

0xad05,	// (0x000358e5) popup_side_volume_key_window_cp

0xb515,	// (0x000360f5) main_idle_act2_pane_t1

0x6005,	// (0x00030be5) toolbar_button_pane_g10

0x869f,	// (0x0003327f) popup_toolbar_window_cp1

0xbcb6,	// (0x00036896) clock_nsta_pane_cp_t1

0xbcb6,	// (0x00036896) clock_nsta_pane_cp_t2

0x0001,

0xfaae,	// (0x0003a68e) clock_nsta_pane_cp_t

0x5599,	// (0x00030179) navi_navi_volume_pane_cp2_ParamLimits

0x55a8,	// (0x00030188) popup_side_volume_key_window_g1_ParamLimits

0x55b4,	// (0x00030194) popup_side_volume_key_window_g2_ParamLimits

0x55c3,	// (0x000301a3) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0003a2f1) popup_side_volume_key_window_g_ParamLimits

0x650b,	// (0x000310eb) fep_hwr_aid_pane

0x65b2,	// (0x00031192) bg_fep_hwr_top_pane_g4_ParamLimits

0xc26f,	// (0x00036e4f) fep_hwr_top_pane_g1_ParamLimits

0xc281,	// (0x00036e61) fep_hwr_top_pane_g2_ParamLimits

0x65d2,	// (0x000311b2) fep_hwr_top_pane_g3_ParamLimits

0xfb03,	// (0x0003a6e3) fep_hwr_top_pane_g_ParamLimits

0x65e7,	// (0x000311c7) fep_hwr_top_text_pane_ParamLimits

0xaac8,	// (0x000356a8) aid_touch_tab_arrow_arrow_2

0xaad1,	// (0x000356b1) aid_touch_tab_arrow_left_2

0x651f,	// (0x000310ff) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6556,	// (0x00031136) fep_hwr_prediction_pane

0xc3ed,	// (0x00036fcd) fep_vkb_prediction_pane

0xc4f1,	// (0x000370d1) fep_vkb_side_pane_g3_ParamLimits

0xc4f1,	// (0x000370d1) fep_vkb_side_pane_g3

0x6762,	// (0x00031342) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x67ce,	// (0x000313ae) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x67db,	// (0x000313bb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb2,	// (0x0003a792) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x690a,	// (0x000314ea) fep_hwr_prediction_pane_g1

0x6914,	// (0x000314f4) fep_hwr_prediction_pane_g2

0x691c,	// (0x000314fc) fep_hwr_prediction_pane_g3

0x6924,	// (0x00031504) fep_hwr_prediction_pane_g4

0x0003,

0xfcbc,	// (0x0003a89c) fep_hwr_prediction_pane_g

0xd339,	// (0x00037f19) fep_vkb_prediction_pane_g1

0xd343,	// (0x00037f23) fep_vkb_prediction_pane_g2

0xd34b,	// (0x00037f2b) fep_vkb_prediction_pane_g3

0xd353,	// (0x00037f33) fep_vkb_prediction_pane_g4

0x0003,

0xfcc5,	// (0x0003a8a5) fep_vkb_prediction_pane_g

0x638b,	// (0x00030f6b) slider_set_pane_g3

0x639f,	// (0x00030f7f) slider_set_pane_g4

0x63b7,	// (0x00030f97) slider_set_pane_g5

0x638b,	// (0x00030f6b) slider_set_pane_g6

0x63cd,	// (0x00030fad) slider_set_pane_g7

0xb15a,	// (0x00035d3a) slider_form_pane_g3

0xb163,	// (0x00035d43) slider_form_pane_g4

0xb16b,	// (0x00035d4b) slider_form_pane_g5

0xb15a,	// (0x00035d3a) slider_form_pane_g6

0xb173,	// (0x00035d53) slider_form_pane_g7

0xb7bf,	// (0x0003639f) slider_set_pane_vc_g3

0xb7c8,	// (0x000363a8) slider_set_pane_vc_g4

0xb7d1,	// (0x000363b1) slider_set_pane_vc_g5

0xb7bf,	// (0x0003639f) slider_set_pane_vc_g6

0xb7da,	// (0x000363ba) slider_set_pane_vc_g7

0xb99a,	// (0x0003657a) slider_form_pane_vc_g1

0xb9a3,	// (0x00036583) slider_form_pane_vc_g2

0xb9ac,	// (0x0003658c) slider_form_pane_vc_g3

0xb99a,	// (0x0003657a) slider_form_pane_vc_g4

0xb9b5,	// (0x00036595) slider_form_pane_vc_g5

0x0004,

0xfa80,	// (0x0003a660) slider_form_pane_vc_g

0x4954,	// (0x0002f534) main_idle_act3_pane

0xd35b,	// (0x00037f3b) ai3_links_pane

0xd364,	// (0x00037f44) popup_ai3_data_window_ParamLimits

0xd364,	// (0x00037f44) popup_ai3_data_window

0x7525,	// (0x00032105) grid_ai3_links_pane

0xd37e,	// (0x00037f5e) cell_ai3_links_pane_ParamLimits

0xd37e,	// (0x00037f5e) cell_ai3_links_pane

0xd396,	// (0x00037f76) bg_popup_sub_pane_cp11

0xd3a3,	// (0x00037f83) cell_ai3_links_pane_g1

0x7525,	// (0x00032105) bg_popup_sub_pane_cp12

0xd3c8,	// (0x00037fa8) heading_ai3_data_pane

0xd3d0,	// (0x00037fb0) list_ai3_gene_pane

0xd3dc,	// (0x00037fbc) popup_ai3_data_window_g1

0xd3e4,	// (0x00037fc4) heading_ai3_data_pane_g1

0xd3ec,	// (0x00037fcc) heading_ai3_data_pane_t1

0xd3fa,	// (0x00037fda) list_double_ai3_gene_pane_ParamLimits

0xd3fa,	// (0x00037fda) list_double_ai3_gene_pane

0xd407,	// (0x00037fe7) list_single_ai3_gene_pane_ParamLimits

0xd407,	// (0x00037fe7) list_single_ai3_gene_pane

0xc1d8,	// (0x00036db8) list_highlight_pane_cp7_ParamLimits

0xc1d8,	// (0x00036db8) list_highlight_pane_cp7

0xd414,	// (0x00037ff4) list_single_a13_gene_pane_t1_ParamLimits

0xd414,	// (0x00037ff4) list_single_a13_gene_pane_t1

0xd42b,	// (0x0003800b) list_single_ai3_gene_pane_g1

0xd434,	// (0x00038014) list_single_ai3_gene_pane_g2

0x0001,

0xfcce,	// (0x0003a8ae) list_single_ai3_gene_pane_g

0xd43c,	// (0x0003801c) list_double_ai3_gene_pane_g1_ParamLimits

0xd43c,	// (0x0003801c) list_double_ai3_gene_pane_g1

0xd448,	// (0x00038028) list_double_ai3_gene_pane_t1_ParamLimits

0xd448,	// (0x00038028) list_double_ai3_gene_pane_t1

0xd464,	// (0x00038044) list_double_ai3_gene_pane_t2_ParamLimits

0xd464,	// (0x00038044) list_double_ai3_gene_pane_t2

0xd47a,	// (0x0003805a) list_double_ai3_gene_pane_t3_ParamLimits

0xd47a,	// (0x0003805a) list_double_ai3_gene_pane_t3

0x0002,

0xfcd3,	// (0x0003a8b3) list_double_ai3_gene_pane_t_ParamLimits

0xfcd3,	// (0x0003a8b3) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7d58,	// (0x00032938) aid_size_min_col_2

0xd325,	// (0x00037f05) aid_size_min_msg_ParamLimits

0xd325,	// (0x00037f05) aid_size_min_msg

0xc5f1,	// (0x000371d1) fep_vkb_top_text_pane_g2_ParamLimits

0xc5f1,	// (0x000371d1) fep_vkb_top_text_pane_g2

0x0001,

0xfb33,	// (0x0003a713) fep_vkb_top_text_pane_g_ParamLimits

0xfb33,	// (0x0003a713) fep_vkb_top_text_pane_g

0x4954,	// (0x0002f534) main_hc_apps_shell_pane

0xd497,	// (0x00038077) grid_hc_apps_pane_ParamLimits

0xd497,	// (0x00038077) grid_hc_apps_pane

0xd4a6,	// (0x00038086) list_hc_apps_pane

0xd4ae,	// (0x0003808e) scroll_pane_cp37_ParamLimits

0xd4ae,	// (0x0003808e) scroll_pane_cp37

0xd4ba,	// (0x0003809a) cell_hc_apps_pane_ParamLimits

0xd4ba,	// (0x0003809a) cell_hc_apps_pane

0xd568,	// (0x00038148) cell_hc_apps_pane_g1_ParamLimits

0xd568,	// (0x00038148) cell_hc_apps_pane_g1

0xd599,	// (0x00038179) cell_hc_apps_pane_g2_ParamLimits

0xd599,	// (0x00038179) cell_hc_apps_pane_g2

0xd5b5,	// (0x00038195) cell_hc_apps_pane_g3_ParamLimits

0xd5b5,	// (0x00038195) cell_hc_apps_pane_g3

0x0002,

0xfcda,	// (0x0003a8ba) cell_hc_apps_pane_g_ParamLimits

0xfcda,	// (0x0003a8ba) cell_hc_apps_pane_g

0xd5d7,	// (0x000381b7) cell_hc_apps_pane_t1_ParamLimits

0xd5d7,	// (0x000381b7) cell_hc_apps_pane_t1

0x812a,	// (0x00032d0a) grid_highlight_pane_cp10_ParamLimits

0x812a,	// (0x00032d0a) grid_highlight_pane_cp10

0xd617,	// (0x000381f7) list_single_hc_apps_pane_ParamLimits

0xd617,	// (0x000381f7) list_single_hc_apps_pane

0xd673,	// (0x00038253) list_single_hc_apps_pane_g1

0x7e4c,	// (0x00032a2c) list_single_hc_apps_pane_g2

0x0001,

0xfce1,	// (0x0003a8c1) list_single_hc_apps_pane_g

0x7e65,	// (0x00032a45) list_single_hc_apps_pane_g2_copy1

0x7e81,	// (0x00032a61) list_single_hc_apps_pane_t1

0x7619,	// (0x000321f9) bg_set_opt_pane_cp_ParamLimits

0x4bb5,	// (0x0002f795) setting_slider_pane_t1_ParamLimits

0x4bce,	// (0x0002f7ae) setting_slider_pane_t2_ParamLimits

0x4be8,	// (0x0002f7c8) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003a13e) setting_slider_pane_t_ParamLimits

0x4c00,	// (0x0002f7e0) slider_set_pane_ParamLimits

0x58cc,	// (0x000304ac) control_pane_g5_ParamLimits

0x58cc,	// (0x000304ac) control_pane_g5

0xafa9,	// (0x00035b89) slider_set_pane_g1_ParamLimits

0x637f,	// (0x00030f5f) slider_set_pane_g2_ParamLimits

0x638b,	// (0x00030f6b) slider_set_pane_g3_ParamLimits

0x639f,	// (0x00030f7f) slider_set_pane_g4_ParamLimits

0x63b7,	// (0x00030f97) slider_set_pane_g5_ParamLimits

0x638b,	// (0x00030f6b) slider_set_pane_g6_ParamLimits

0x63cd,	// (0x00030fad) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0003a544) slider_set_pane_g_ParamLimits

0x924b,	// (0x00033e2b) navi_icon_text_pane_ParamLimits

0x9741,	// (0x00034321) aid_fill_nsta_2_ParamLimits

0x9780,	// (0x00034360) aid_touch_tab_arrow_left_ParamLimits

0x978f,	// (0x0003436f) aid_touch_tab_arrow_right_ParamLimits

0x97fc,	// (0x000343dc) clock_nsta_pane_ParamLimits

0xaaaa,	// (0x0003568a) navi_icon_pane_g1_ParamLimits

0xaab6,	// (0x00035696) navi_text_pane_t1_ParamLimits

0xbdc2,	// (0x000369a2) navi_icon_text_pane_g1_ParamLimits

0xbdce,	// (0x000369ae) navi_icon_text_pane_t1_ParamLimits

0xd673,	// (0x00038253) list_single_hc_apps_pane_g1_ParamLimits

0x7e4c,	// (0x00032a2c) list_single_hc_apps_pane_g2_ParamLimits

0xfce1,	// (0x0003a8c1) list_single_hc_apps_pane_g_ParamLimits

0x7e65,	// (0x00032a45) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7e81,	// (0x00032a61) list_single_hc_apps_pane_t1_ParamLimits

0x4abf,	// (0x0002f69f) popup_toolbar2_fixed_window_ParamLimits

0x4abf,	// (0x0002f69f) popup_toolbar2_fixed_window

0x5ecf,	// (0x00030aaf) popup_toolbar2_float_window

0x7525,	// (0x00032105) bg_popup_sub_pane_cp27

0xd68c,	// (0x0003826c) grid_toolbar2_float_pane

0x7525,	// (0x00032105) bg_popup_sub_pane_cp26

0xd68c,	// (0x0003826c) grid_toolbar2_fixed_pane

0xd694,	// (0x00038274) cell_toolbar2_fixed_pane_ParamLimits

0xd694,	// (0x00038274) cell_toolbar2_fixed_pane

0xd6a4,	// (0x00038284) cell_toolbar2_fixed_pane_g1

0xd6ad,	// (0x0003828d) toolbar2_fixed_button_pane

0x9c13,	// (0x000347f3) toolbar2_fixed_button_pane_g1

0x9c23,	// (0x00034803) toolbar2_fixed_button_pane_g2

0x9c1b,	// (0x000347fb) toolbar2_fixed_button_pane_g3

0x9c33,	// (0x00034813) toolbar2_fixed_button_pane_g4

0x9c2b,	// (0x0003480b) toolbar2_fixed_button_pane_g5

0x9c3b,	// (0x0003481b) toolbar2_fixed_button_pane_g6

0x9c43,	// (0x00034823) toolbar2_fixed_button_pane_g7

0x9c53,	// (0x00034833) toolbar2_fixed_button_pane_g8

0x9c4b,	// (0x0003482b) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0003a446) toolbar2_fixed_button_pane_g

0xd6b5,	// (0x00038295) cell_toolbar2_float_pane_ParamLimits

0xd6b5,	// (0x00038295) cell_toolbar2_float_pane

0xd6c6,	// (0x000382a6) cell_toolbar2_float_pane_g1

0xd6ad,	// (0x0003828d) toolbar2_fixed_button_pane_cp

0xc34d,	// (0x00036f2d) fep_vkb_accented_list_pane_ParamLimits

0xc34d,	// (0x00036f2d) fep_vkb_accented_list_pane

0x6742,	// (0x00031322) bg_popup_fep_shadow_pane_g9

0x93cb,	// (0x00033fab) bg_popup_fep_shadow_pane_cp3

0x888a,	// (0x0003346a) list_accented_list_pane

0xd6cf,	// (0x000382af) list_single_accented_list_pane_ParamLimits

0xd6cf,	// (0x000382af) list_single_accented_list_pane

0x93cb,	// (0x00033fab) list_highlight_pane_cp10

0xd6e0,	// (0x000382c0) list_single_accented_list_pane_t1

0x5e1f,	// (0x000309ff) popup_slider_window_ParamLimits

0x5e1f,	// (0x000309ff) popup_slider_window

0xd31c,	// (0x00037efc) aid_indentation_list_msg

0xd7a4,	// (0x00038384) bg_popup_window_pane_cp19

0xd80c,	// (0x000383ec) popup_slider_window_g1

0xd828,	// (0x00038408) popup_slider_window_g2

0xd844,	// (0x00038424) popup_slider_window_g3

0x0005,

0xfce6,	// (0x0003a8c6) popup_slider_window_g

0xd8aa,	// (0x0003848a) popup_slider_window_t1

0xd91e,	// (0x000384fe) small_volume_slider_vertical_pane

0xc213,	// (0x00036df3) small_volume_slider_vertical_pane_g1

0xc213,	// (0x00036df3) small_volume_slider_vertical_pane_g2

0xd93a,	// (0x0003851a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf8,	// (0x0003a8d8) small_volume_slider_vertical_pane_g

0x4877,	// (0x0002f457) area_side_right_pane_ParamLimits

0x4877,	// (0x0002f457) area_side_right_pane

0x692c,	// (0x0003150c) aid_size_side_button_ParamLimits

0x692c,	// (0x0003150c) aid_size_side_button

0x6940,	// (0x00031520) grid_sctrl_middle_pane_ParamLimits

0x6940,	// (0x00031520) grid_sctrl_middle_pane

0x695f,	// (0x0003153f) sctrl_sk_bottom_pane

0x6970,	// (0x00031550) sctrl_sk_top_pane

0x6982,	// (0x00031562) aid_touch_sctrl_top

0x698f,	// (0x0003156f) bg_sctrl_sk_pane_ParamLimits

0x698f,	// (0x0003156f) bg_sctrl_sk_pane

0x699d,	// (0x0003157d) sctrl_sk_top_pane_g1

0x69aa,	// (0x0003158a) sctrl_sk_top_pane_t1

0x6982,	// (0x00031562) aid_touch_sctrl_bottom

0x698f,	// (0x0003156f) bg_sctrl_sk_pane_cp_ParamLimits

0x698f,	// (0x0003156f) bg_sctrl_sk_pane_cp

0x69c5,	// (0x000315a5) sctrl_sk_bottom_pane_g1

0x69aa,	// (0x0003158a) sctrl_sk_bottom_pane_t1

0x69ce,	// (0x000315ae) cell_sctrl_middle_pane_ParamLimits

0x69ce,	// (0x000315ae) cell_sctrl_middle_pane

0x69e9,	// (0x000315c9) aid_touch_sctrl_middle_ParamLimits

0x69e9,	// (0x000315c9) aid_touch_sctrl_middle

0x69fb,	// (0x000315db) bg_sctrl_middle_pane_ParamLimits

0x69fb,	// (0x000315db) bg_sctrl_middle_pane

0x6762,	// (0x00031342) cell_sctrl_middle_pane_g1_ParamLimits

0x6762,	// (0x00031342) cell_sctrl_middle_pane_g1

0x6a09,	// (0x000315e9) cell_sctrl_middle_pane_g2_ParamLimits

0x6a09,	// (0x000315e9) cell_sctrl_middle_pane_g2

0x0001,

0xfd04,	// (0x0003a8e4) cell_sctrl_middle_pane_g_ParamLimits

0xfd04,	// (0x0003a8e4) cell_sctrl_middle_pane_g

0x9c13,	// (0x000347f3) bg_sctrl_middle_pane_g1

0x9c1b,	// (0x000347fb) bg_sctrl_middle_pane_g2

0x9c23,	// (0x00034803) bg_sctrl_middle_pane_g3

0x9c2b,	// (0x0003480b) bg_sctrl_middle_pane_g4

0x9c33,	// (0x00034813) bg_sctrl_middle_pane_g5

0x9c3b,	// (0x0003481b) bg_sctrl_middle_pane_g6

0x9c43,	// (0x00034823) bg_sctrl_middle_pane_g7

0x9c4b,	// (0x0003482b) bg_sctrl_middle_pane_g8

0x0007,

0xfd09,	// (0x0003a8e9) bg_sctrl_middle_pane_g

0x9c53,	// (0x00034833) bg_sctrl_middle_pane_g8_copy1

0x9c13,	// (0x000347f3) bg_sctrl_sk_pane_g1

0x9c23,	// (0x00034803) bg_sctrl_sk_pane_g2

0x9c1b,	// (0x000347fb) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0003a446) bg_sctrl_sk_pane_g

0x8665,	// (0x00033245) aid_size_touch_scroll_bar

0x9c33,	// (0x00034813) bg_sctrl_sk_pane_g4

0x9c2b,	// (0x0003480b) bg_sctrl_sk_pane_g5

0x9c3b,	// (0x0003481b) bg_sctrl_sk_pane_g6

0x9c43,	// (0x00034823) bg_sctrl_sk_pane_g7

0x9c53,	// (0x00034833) bg_sctrl_sk_pane_g8

0x9c4b,	// (0x0003482b) bg_sctrl_sk_pane_g9

0x5a88,	// (0x00030668) popup_fep_china_hwr2_fs_candidate_window

0x5a92,	// (0x00030672) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5a92,	// (0x00030672) popup_fep_china_hwr2_fs_control_window

0x6762,	// (0x00031342) sctrl_sk_top_pane_g2

0x0001,

0xfcff,	// (0x0003a8df) sctrl_sk_top_pane_g

0xd943,	// (0x00038523) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd943,	// (0x00038523) aid_fep_china_hwr2_fs_cell

0xd955,	// (0x00038535) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd955,	// (0x00038535) bg_popup_fep_shadow_pane_cp4

0xd96c,	// (0x0003854c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd96c,	// (0x0003854c) bg_popup_fep_shadow_pane_cp5

0xd97e,	// (0x0003855e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd97e,	// (0x0003855e) popup_fep_china_hwr2_fs_control_bar_grid

0xd98e,	// (0x0003856e) popup_fep_china_hwr2_fs_control_funtion_grid

0xd996,	// (0x00038576) aid_fep_china_hwr2_fs_candi_cell

0x7525,	// (0x00032105) bg_popup_fep_shadow_pane_cp6

0xd9a0,	// (0x00038580) popup_fep_china_hwr2_fs_candidate_grid

0xd9aa,	// (0x0003858a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd9aa,	// (0x0003858a) cell_fep_china_hwr2_fs_funtion_grid

0xc213,	// (0x00036df3) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd9c2,	// (0x000385a2) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd9c2,	// (0x000385a2) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd9d0,	// (0x000385b0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd9d0,	// (0x000385b0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1a,	// (0x0003a8fa) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1a,	// (0x0003a8fa) cell_fep_china_hwr2_fs_funtion_grid_g

0xd9e6,	// (0x000385c6) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd9e6,	// (0x000385c6) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd9fb,	// (0x000385db) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd9fb,	// (0x000385db) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1f,	// (0x0003a8ff) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1f,	// (0x0003a8ff) cell_fep_china_hwr2_fs_funtion_grid_t

0xda17,	// (0x000385f7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda1f,	// (0x000385ff) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda27,	// (0x00038607) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd24,	// (0x0003a904) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda2f,	// (0x0003860f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda2f,	// (0x0003860f) cell_fep_china_hwr2_fs_candidate_grid

0xda48,	// (0x00038628) popup_fep_china_hwr2_fs_candidate_grid_g20

0xda50,	// (0x00038630) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc213,	// (0x00036df3) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc213,	// (0x00036df3) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb38,	// (0x0003a718) cell_fep_china_hwr2_fs_candidate_grid_g

0xda58,	// (0x00038638) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9809,	// (0x000343e9) clock_nsta_pane_cp_24_ParamLimits

0x9809,	// (0x000343e9) clock_nsta_pane_cp_24

0x9887,	// (0x00034467) indicator_nsta_pane_cp_24_ParamLimits

0x9887,	// (0x00034467) indicator_nsta_pane_cp_24

0xa926,	// (0x00035506) heading_pane_g1

0x0001,

0xf8cb,	// (0x0003a4ab) heading_pane_g

0xb35e,	// (0x00035f3e) grid_sct_catagory_button_pane

0xb38e,	// (0x00035f6e) scroll_pane_cp5_ParamLimits

0xbe10,	// (0x000369f0) button_value_adjust_pane_cp5_ParamLimits

0xbe10,	// (0x000369f0) button_value_adjust_pane_cp5

0xbeef,	// (0x00036acf) form2_midp_time_pane_ParamLimits

0xda66,	// (0x00038646) cell_sct_catagory_button_pane_ParamLimits

0xda66,	// (0x00038646) cell_sct_catagory_button_pane

0xc1d8,	// (0x00036db8) bg_button_pane_cp01_ParamLimits

0xc1d8,	// (0x00036db8) bg_button_pane_cp01

0xc213,	// (0x00036df3) cell_sct_catagory_button_pane_g1

0x5e5e,	// (0x00030a3e) popup_tb_extension_window

0xda78,	// (0x00038658) aid_size_cell_ext_ParamLimits

0xda78,	// (0x00038658) aid_size_cell_ext

0x812a,	// (0x00032d0a) bg_tb_trans_pane_cp1_ParamLimits

0x812a,	// (0x00032d0a) bg_tb_trans_pane_cp1

0xda98,	// (0x00038678) grid_tb_ext_pane_ParamLimits

0xda98,	// (0x00038678) grid_tb_ext_pane

0xdac6,	// (0x000386a6) cell_tb_ext_pane_ParamLimits

0xdac6,	// (0x000386a6) cell_tb_ext_pane

0xdadd,	// (0x000386bd) cell_tb_ext_pane_g1_ParamLimits

0xdadd,	// (0x000386bd) cell_tb_ext_pane_g1

0xdafa,	// (0x000386da) cell_tb_ext_pane_t1

0x812a,	// (0x00032d0a) list_highlight_pane_cp11_ParamLimits

0x812a,	// (0x00032d0a) list_highlight_pane_cp11

0x4ade,	// (0x0002f6be) popup_uni_indicator_window_ParamLimits

0x4ade,	// (0x0002f6be) popup_uni_indicator_window

0x8736,	// (0x00033316) bg_popup_sub_pane_cp14

0xdb15,	// (0x000386f5) list_uniindi_pane

0xdb21,	// (0x00038701) uniindi_top_pane

0x812a,	// (0x00032d0a) bg_uniindi_top_pane

0xdb40,	// (0x00038720) uniindi_top_pane_g1

0xdb56,	// (0x00038736) uniindi_top_pane_g2

0x0003,

0xfd2b,	// (0x0003a90b) uniindi_top_pane_g

0xdb80,	// (0x00038760) uniindi_top_pane_t1

0xdbaa,	// (0x0003878a) list_single_uniindi_pane_ParamLimits

0xdbaa,	// (0x0003878a) list_single_uniindi_pane

0xc213,	// (0x00036df3) bg_uniindi_top_pane_g1

0xdbbd,	// (0x0003879d) list_single_uniindi_pane_g1

0xdbd0,	// (0x000387b0) list_single_uniindi_pane_t1

0x4954,	// (0x0002f534) control_bg_pane

0xdbf5,	// (0x000387d5) bg_sctrl_sk_pane_cp1

0xdbfe,	// (0x000387de) bg_sctrl_sk_pane_cp2

0xdc07,	// (0x000387e7) control_bg_pane_g1

0xdc10,	// (0x000387f0) control_bg_pane_g2

0x0001,

0xfd34,	// (0x0003a914) control_bg_pane_g

0xbc6a,	// (0x0003684a) cell_indicator_nsta_pane_g1_ParamLimits

0xbc78,	// (0x00036858) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9c,	// (0x0003a67c) cell_indicator_nsta_pane_g_ParamLimits

0x7b09,	// (0x000326e9) form2_midp_time_pane_t1_ParamLimits

0x59e8,	// (0x000305c8) main_idle_act4_pane_ParamLimits

0x59e8,	// (0x000305c8) main_idle_act4_pane

0x5e5e,	// (0x00030a3e) popup_tb_extension_window_ParamLimits

0xdab6,	// (0x00038696) tb_ext_find_pane_ParamLimits

0xdab6,	// (0x00038696) tb_ext_find_pane

0xdc19,	// (0x000387f9) ai_gene_pane_1_cp1

0x9512,	// (0x000340f2) ai_gene_pane_2_cp1

0xdc21,	// (0x00038801) list_single_idle_plugin_calendar_pane

0xdc2a,	// (0x0003880a) list_single_idle_plugin_notification_pane

0xdc33,	// (0x00038813) list_single_idle_plugin_player_pane

0xdc3c,	// (0x0003881c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc3c,	// (0x0003881c) list_single_idle_plugin_shortcut_pane

0xdc5e,	// (0x0003883e) main_idle_act4_pane_t1

0xdc70,	// (0x00038850) main_idle_act4_pane_t2

0x0001,

0xfd39,	// (0x0003a919) main_idle_act4_pane_t

0xdc82,	// (0x00038862) middle_sk_idle_act4_pane_ParamLimits

0xdc82,	// (0x00038862) middle_sk_idle_act4_pane

0xdc98,	// (0x00038878) popup_clock_digital_analogue_window_cp2

0xdcb2,	// (0x00038892) shortcut_wheel_idle_act4_pane_ParamLimits

0xdcb2,	// (0x00038892) shortcut_wheel_idle_act4_pane

0xc213,	// (0x00036df3) shortcut_wheel_idle_act4_pane_g1

0xc213,	// (0x00036df3) shortcut_wheel_idle_act4_pane_g2

0xc213,	// (0x00036df3) shortcut_wheel_idle_act4_pane_g3

0xc213,	// (0x00036df3) shortcut_wheel_idle_act4_pane_g4

0xc213,	// (0x00036df3) shortcut_wheel_idle_act4_pane_g5

0xdcc6,	// (0x000388a6) shortcut_wheel_idle_act4_pane_g6

0xdcce,	// (0x000388ae) shortcut_wheel_idle_act4_pane_g7

0xdcd6,	// (0x000388b6) shortcut_wheel_idle_act4_pane_g8

0xdcde,	// (0x000388be) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3e,	// (0x0003a91e) shortcut_wheel_idle_act4_pane_g

0xc49d,	// (0x0003707d) middle_sk_idle_act4_pane_g1_ParamLimits

0xc49d,	// (0x0003707d) middle_sk_idle_act4_pane_g1

0xdd42,	// (0x00038922) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd42,	// (0x00038922) middle_sk_idle_act4_pane_g2

0x0001,

0xfd61,	// (0x0003a941) middle_sk_idle_act4_pane_g_ParamLimits

0xfd61,	// (0x0003a941) middle_sk_idle_act4_pane_g

0xdd4e,	// (0x0003892e) middle_sk_idle_act4_pane_t1_ParamLimits

0xdd4e,	// (0x0003892e) middle_sk_idle_act4_pane_t1

0xdd6b,	// (0x0003894b) grid_ai_shortcut_pane_ParamLimits

0xdd6b,	// (0x0003894b) grid_ai_shortcut_pane

0xdd84,	// (0x00038964) list_highlight_pane_cp16_ParamLimits

0xdd84,	// (0x00038964) list_highlight_pane_cp16

0xdd91,	// (0x00038971) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdd91,	// (0x00038971) list_single_idle_plugin_shortcut_pane_g1

0xdd9d,	// (0x0003897d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdd9d,	// (0x0003897d) list_single_idle_plugin_shortcut_pane_g2

0xddb5,	// (0x00038995) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xddb5,	// (0x00038995) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd66,	// (0x0003a946) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd66,	// (0x0003a946) list_single_idle_plugin_shortcut_pane_g

0xddc8,	// (0x000389a8) cell_ai_shortcut_pane_ParamLimits

0xddc8,	// (0x000389a8) cell_ai_shortcut_pane

0xddec,	// (0x000389cc) cell_ai_shortcut_pane_g1_ParamLimits

0xddec,	// (0x000389cc) cell_ai_shortcut_pane_g1

0xdc19,	// (0x000387f9) ai_gene_pane_1_cp2

0xde0e,	// (0x000389ee) ai_gene_pane_2_cp2

0xde16,	// (0x000389f6) list_highlight_pane_cp15

0xde1f,	// (0x000389ff) list_single_idle_plugin_calendar_pane_g1

0xde16,	// (0x000389f6) list_highlight_pane_cp17

0xde27,	// (0x00038a07) list_single_idle_plugin_calendar_pane_g1_copy1

0xde2f,	// (0x00038a0f) list_single_idle_plugin_player_pane_g1

0xb5b7,	// (0x00036197) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6d,	// (0x0003a94d) list_single_idle_plugin_player_pane_g

0xde37,	// (0x00038a17) list_single_idle_plugin_player_pane_t1

0xde45,	// (0x00038a25) list_single_idle_plugin_player_pane_t2

0xde53,	// (0x00038a33) list_single_idle_plugin_player_pane_t3

0xde61,	// (0x00038a41) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd72,	// (0x0003a952) list_single_idle_plugin_player_pane_t

0xde6f,	// (0x00038a4f) wait_bar_pane_cp15

0xde77,	// (0x00038a57) grid_ai_notification_pane

0xb5b7,	// (0x00036197) list_single_idle_plugin_notification_pane_g1

0xde80,	// (0x00038a60) cell_ai_notification_pane_ParamLimits

0xde80,	// (0x00038a60) cell_ai_notification_pane

0xde8d,	// (0x00038a6d) cell_ai_notification_pane_g1

0xde95,	// (0x00038a75) cell_ai_notification_pane_t1

0xdea3,	// (0x00038a83) tb_ext_find_button_pane

0xdeab,	// (0x00038a8b) tb_ext_find_pane_g1

0xdeb3,	// (0x00038a93) tb_ext_find_pane_t1

0x8db8,	// (0x00033998) tb_ext_find_button_pane_g1

0xdec1,	// (0x00038aa1) tb_ext_find_button_pane_g2

0x0001,

0xfd7b,	// (0x0003a95b) tb_ext_find_button_pane_g

0xdc5e,	// (0x0003883e) main_idle_act4_pane_t1_ParamLimits

0xdc70,	// (0x00038850) main_idle_act4_pane_t2_ParamLimits

0xfd39,	// (0x0003a919) main_idle_act4_pane_t_ParamLimits

0xdc98,	// (0x00038878) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdca6,	// (0x00038886) sat_plugin_idle_act4_pane_ParamLimits

0xdca6,	// (0x00038886) sat_plugin_idle_act4_pane

0xdeca,	// (0x00038aaa) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdeca,	// (0x00038aaa) sat_plugin_idle_act4_pane_t1

0xdedd,	// (0x00038abd) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdedd,	// (0x00038abd) sat_plugin_idle_act4_pane_t2

0xdef0,	// (0x00038ad0) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdef0,	// (0x00038ad0) sat_plugin_idle_act4_pane_t3

0xdf03,	// (0x00038ae3) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf03,	// (0x00038ae3) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd80,	// (0x0003a960) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd80,	// (0x0003a960) sat_plugin_idle_act4_pane_t

0x4a19,	// (0x0002f5f9) popup_battery_window_ParamLimits

0x4a19,	// (0x0002f5f9) popup_battery_window

0x812a,	// (0x00032d0a) bg_popup_sub_pane_cp25_ParamLimits

0x812a,	// (0x00032d0a) bg_popup_sub_pane_cp25

0xdf16,	// (0x00038af6) popup_battery_window_g1_ParamLimits

0xdf16,	// (0x00038af6) popup_battery_window_g1

0xdf22,	// (0x00038b02) popup_battery_window_t1_ParamLimits

0xdf22,	// (0x00038b02) popup_battery_window_t1

0xdf34,	// (0x00038b14) popup_battery_window_t2_ParamLimits

0xdf34,	// (0x00038b14) popup_battery_window_t2

0x0001,

0xfd89,	// (0x0003a969) popup_battery_window_t_ParamLimits

0xfd89,	// (0x0003a969) popup_battery_window_t

0x93df,	// (0x00033fbf) midp_canvas_pane_ParamLimits

0x9456,	// (0x00034036) midp_keypad_pane_ParamLimits

0x9456,	// (0x00034036) midp_keypad_pane

0x96ef,	// (0x000342cf) main_midp_pane_ParamLimits

0xbcd4,	// (0x000368b4) signal_pane_g2_cp_ParamLimits

0xdf51,	// (0x00038b31) aid_size_cell_midp_keypad_ParamLimits

0xdf51,	// (0x00038b31) aid_size_cell_midp_keypad

0xdf6b,	// (0x00038b4b) midp_keyp_game_grid_pane_ParamLimits

0xdf6b,	// (0x00038b4b) midp_keyp_game_grid_pane

0xdf8b,	// (0x00038b6b) midp_keyp_rocker_pane_ParamLimits

0xdf8b,	// (0x00038b6b) midp_keyp_rocker_pane

0xdfc4,	// (0x00038ba4) midp_keyp_sk_left_pane_ParamLimits

0xdfc4,	// (0x00038ba4) midp_keyp_sk_left_pane

0xe01e,	// (0x00038bfe) midp_keyp_sk_right_pane_ParamLimits

0xe01e,	// (0x00038bfe) midp_keyp_sk_right_pane

0x7525,	// (0x00032105) bg_button_pane_cp03

0xe099,	// (0x00038c79) midp_keyp_sk_left_pane_g1

0x7525,	// (0x00032105) bg_button_pane_cp04

0xe099,	// (0x00038c79) midp_keyp_sk_right_pane_g1

0xc213,	// (0x00036df3) midp_keyp_rocker_pane_g1

0xe0a2,	// (0x00038c82) keyp_game_cell_pane_ParamLimits

0xe0a2,	// (0x00038c82) keyp_game_cell_pane

0x7525,	// (0x00032105) bg_button_pane_cp02

0xe0b5,	// (0x00038c95) keyp_game_cell_pane_g1

0x4a5d,	// (0x0002f63d) popup_fep_vkb2_window_ParamLimits

0x4a5d,	// (0x0002f63d) popup_fep_vkb2_window

0x6a27,	// (0x00031607) aid_size_cell_vkb2_ParamLimits

0x6a27,	// (0x00031607) aid_size_cell_vkb2

0x6a7b,	// (0x0003165b) popup_fep_vkb2_window_g1_ParamLimits

0x6a7b,	// (0x0003165b) popup_fep_vkb2_window_g1

0x6ac3,	// (0x000316a3) vkb2_area_bottom_pane_ParamLimits

0x6ac3,	// (0x000316a3) vkb2_area_bottom_pane

0x6b0f,	// (0x000316ef) vkb2_area_keypad_pane_ParamLimits

0x6b0f,	// (0x000316ef) vkb2_area_keypad_pane

0x6b51,	// (0x00031731) vkb2_area_top_pane_ParamLimits

0x6b51,	// (0x00031731) vkb2_area_top_pane

0x6bcb,	// (0x000317ab) vkb2_top_entry_pane_ParamLimits

0x6bcb,	// (0x000317ab) vkb2_top_entry_pane

0x6bf5,	// (0x000317d5) vkb2_top_grid_left_pane_ParamLimits

0x6bf5,	// (0x000317d5) vkb2_top_grid_left_pane

0x6c13,	// (0x000317f3) vkb2_top_grid_right_pane_ParamLimits

0x6c13,	// (0x000317f3) vkb2_top_grid_right_pane

0x6c31,	// (0x00031811) vkb2_cell_keypad_pane_ParamLimits

0x6c31,	// (0x00031811) vkb2_cell_keypad_pane

0x6d02,	// (0x000318e2) vkb2_area_bottom_grid_pane_ParamLimits

0x6d02,	// (0x000318e2) vkb2_area_bottom_grid_pane

0x6d28,	// (0x00031908) vkb2_area_bottom_pane_g1_ParamLimits

0x6d28,	// (0x00031908) vkb2_area_bottom_pane_g1

0x6d4c,	// (0x0003192c) vkb2_area_bottom_pane_g2_ParamLimits

0x6d4c,	// (0x0003192c) vkb2_area_bottom_pane_g2

0x6d7a,	// (0x0003195a) vkb2_area_bottom_pane_g3_ParamLimits

0x6d7a,	// (0x0003195a) vkb2_area_bottom_pane_g3

0x0002,

0xfd8e,	// (0x0003a96e) vkb2_area_bottom_pane_g_ParamLimits

0xfd8e,	// (0x0003a96e) vkb2_area_bottom_pane_g

0x6ddb,	// (0x000319bb) vkb2_top_cell_left_pane_ParamLimits

0x6ddb,	// (0x000319bb) vkb2_top_cell_left_pane

0xe0c6,	// (0x00038ca6) vkb2_top_entry_pane_g1_ParamLimits

0xe0c6,	// (0x00038ca6) vkb2_top_entry_pane_g1

0xe0d4,	// (0x00038cb4) vkb2_top_entry_pane_t1_ParamLimits

0xe0d4,	// (0x00038cb4) vkb2_top_entry_pane_t1

0xe106,	// (0x00038ce6) vkb2_top_entry_pane_t2_ParamLimits

0xe106,	// (0x00038ce6) vkb2_top_entry_pane_t2

0xe138,	// (0x00038d18) vkb2_top_entry_pane_t3_ParamLimits

0xe138,	// (0x00038d18) vkb2_top_entry_pane_t3

0x0002,

0xfd95,	// (0x0003a975) vkb2_top_entry_pane_t_ParamLimits

0xfd95,	// (0x0003a975) vkb2_top_entry_pane_t

0x6e28,	// (0x00031a08) vkb2_top_grid_right_pane_g1_ParamLimits

0x6e28,	// (0x00031a08) vkb2_top_grid_right_pane_g1

0x6e3e,	// (0x00031a1e) vkb2_top_grid_right_pane_g2_ParamLimits

0x6e3e,	// (0x00031a1e) vkb2_top_grid_right_pane_g2

0x6e56,	// (0x00031a36) vkb2_top_grid_right_pane_g3_ParamLimits

0x6e56,	// (0x00031a36) vkb2_top_grid_right_pane_g3

0x6e6e,	// (0x00031a4e) vkb2_top_grid_right_pane_g4_ParamLimits

0x6e6e,	// (0x00031a4e) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9c,	// (0x0003a97c) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9c,	// (0x0003a97c) vkb2_top_grid_right_pane_g

0x6e84,	// (0x00031a64) vkb2_top_cell_left_pane_g1

0x6e9b,	// (0x00031a7b) vkb2_cell_keypad_pane_g1_ParamLimits

0x6e9b,	// (0x00031a7b) vkb2_cell_keypad_pane_g1

0xe15c,	// (0x00038d3c) vkb2_cell_keypad_pane_t1_ParamLimits

0xe15c,	// (0x00038d3c) vkb2_cell_keypad_pane_t1

0x6ea9,	// (0x00031a89) vkb2_cell_bottom_grid_pane_ParamLimits

0x6ea9,	// (0x00031a89) vkb2_cell_bottom_grid_pane

0x6ee2,	// (0x00031ac2) vkb2_cell_bottom_grid_pane_g1

0xdce6,	// (0x000388c6) aid_call2_pane_cp02

0xdcee,	// (0x000388ce) aid_call_pane_cp02

0xdcf6,	// (0x000388d6) clock_digital_number_pane_cp10

0xdcfe,	// (0x000388de) clock_digital_number_pane_cp11

0xdd06,	// (0x000388e6) clock_digital_number_pane_cp12

0xdd0e,	// (0x000388ee) clock_digital_number_pane_cp13

0xdd16,	// (0x000388f6) clock_digital_separator_pane_cp10

0x8db8,	// (0x00033998) popup_clock_digital_analogue_window_cp2_g1

0x8db8,	// (0x00033998) popup_clock_digital_analogue_window_cp2_g2

0xdd1e,	// (0x000388fe) popup_clock_digital_analogue_window_cp2_g3

0x8db8,	// (0x00033998) popup_clock_digital_analogue_window_cp2_g4

0xdd1e,	// (0x000388fe) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd51,	// (0x0003a931) popup_clock_digital_analogue_window_cp2_g

0xdd26,	// (0x00038906) popup_clock_digital_analogue_window_cp2_t1

0xdd34,	// (0x00038914) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5c,	// (0x0003a93c) popup_clock_digital_analogue_window_cp2_t

0xc213,	// (0x00036df3) clock_digital_number_pane_cp10_g1

0xc213,	// (0x00036df3) clock_digital_number_pane_cp10_g2

0x0001,

0xfb38,	// (0x0003a718) clock_digital_number_pane_cp10_g

0xc213,	// (0x00036df3) clock_digital_separator_pane_cp10_g1

0xc213,	// (0x00036df3) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb38,	// (0x0003a718) clock_digital_separator_pane_cp10_g

0xdb62,	// (0x00038742) uniindi_top_pane_g3

0xdb73,	// (0x00038753) uniindi_top_pane_g4

0x6cbc,	// (0x0003189c) vkb2_row_keypad_pane_ParamLimits

0x6cbc,	// (0x0003189c) vkb2_row_keypad_pane

0x6efe,	// (0x00031ade) vkb2_cell_t_keypad_pane_ParamLimits

0x6efe,	// (0x00031ade) vkb2_cell_t_keypad_pane

0x6f0e,	// (0x00031aee) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6f0e,	// (0x00031aee) vkb2_cell_t_keypad_pane_cp08

0x6f21,	// (0x00031b01) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6f21,	// (0x00031b01) vkb2_cell_t_keypad_pane_cp09

0x6f35,	// (0x00031b15) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6f35,	// (0x00031b15) vkb2_cell_t_keypad_pane_cp01

0x6f46,	// (0x00031b26) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6f46,	// (0x00031b26) vkb2_cell_t_keypad_pane_cp02

0x6f57,	// (0x00031b37) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6f57,	// (0x00031b37) vkb2_cell_t_keypad_pane_cp03

0x6f68,	// (0x00031b48) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6f68,	// (0x00031b48) vkb2_cell_t_keypad_pane_cp04

0x6f79,	// (0x00031b59) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6f79,	// (0x00031b59) vkb2_cell_t_keypad_pane_cp05

0x6f8a,	// (0x00031b6a) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6f8a,	// (0x00031b6a) vkb2_cell_t_keypad_pane_cp06

0x6f9b,	// (0x00031b7b) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6f9b,	// (0x00031b7b) vkb2_cell_t_keypad_pane_cp07

0x6fac,	// (0x00031b8c) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6fac,	// (0x00031b8c) vkb2_cell_t_keypad_pane_cp10

0x6762,	// (0x00031342) vkb2_cell_t_keypad_pane_g1

0xe173,	// (0x00038d53) vkb2_cell_t_keypad_pane_t1

0x4954,	// (0x0002f534) popup_grid_graphic2_window

0xe185,	// (0x00038d65) aid_size_cell_graphic2_ParamLimits

0xe185,	// (0x00038d65) aid_size_cell_graphic2

0xe1bd,	// (0x00038d9d) bg_popup_window_pane_cp21_ParamLimits

0xe1bd,	// (0x00038d9d) bg_popup_window_pane_cp21

0xe1cb,	// (0x00038dab) graphic2_pages_pane_ParamLimits

0xe1cb,	// (0x00038dab) graphic2_pages_pane

0xe211,	// (0x00038df1) grid_graphic2_control_pane_ParamLimits

0xe211,	// (0x00038df1) grid_graphic2_control_pane

0xe24f,	// (0x00038e2f) grid_graphic2_pane_ParamLimits

0xe24f,	// (0x00038e2f) grid_graphic2_pane

0xe2c3,	// (0x00038ea3) cell_graphic2_pane

0x4954,	// (0x0002f534) main_comp_mode_pane

0xd3d0,	// (0x00037fb0) list_ai3_gene_pane_ParamLimits

0xd7a4,	// (0x00038384) bg_popup_window_pane_cp19_ParamLimits

0xd7b0,	// (0x00038390) bg_touch_area_indi_pane_ParamLimits

0xd7b0,	// (0x00038390) bg_touch_area_indi_pane

0xd7c6,	// (0x000383a6) bg_touch_area_indi_pane_cp01_ParamLimits

0xd7c6,	// (0x000383a6) bg_touch_area_indi_pane_cp01

0xd7dc,	// (0x000383bc) bg_touch_area_indi_pane_cp02_ParamLimits

0xd7dc,	// (0x000383bc) bg_touch_area_indi_pane_cp02

0xd7f2,	// (0x000383d2) bg_touch_area_indi_pane_cp03_ParamLimits

0xd7f2,	// (0x000383d2) bg_touch_area_indi_pane_cp03

0xd80c,	// (0x000383ec) popup_slider_window_g1_ParamLimits

0xd828,	// (0x00038408) popup_slider_window_g2_ParamLimits

0xd844,	// (0x00038424) popup_slider_window_g3_ParamLimits

0xfce6,	// (0x0003a8c6) popup_slider_window_g_ParamLimits

0xd8aa,	// (0x0003848a) popup_slider_window_t1_ParamLimits

0xd91e,	// (0x000384fe) small_volume_slider_vertical_pane_ParamLimits

0xe2c3,	// (0x00038ea3) cell_graphic2_pane_ParamLimits

0xe312,	// (0x00038ef2) bg_button_pane_cp10_ParamLimits

0xe312,	// (0x00038ef2) bg_button_pane_cp10

0xe325,	// (0x00038f05) bg_button_pane_cp11_ParamLimits

0xe325,	// (0x00038f05) bg_button_pane_cp11

0xe338,	// (0x00038f18) graphic2_pages_pane_g1_ParamLimits

0xe338,	// (0x00038f18) graphic2_pages_pane_g1

0xe353,	// (0x00038f33) graphic2_pages_pane_g2_ParamLimits

0xe353,	// (0x00038f33) graphic2_pages_pane_g2

0x0001,

0xfdaa,	// (0x0003a98a) graphic2_pages_pane_g_ParamLimits

0xfdaa,	// (0x0003a98a) graphic2_pages_pane_g

0xe36b,	// (0x00038f4b) graphic2_pages_pane_t1_ParamLimits

0xe36b,	// (0x00038f4b) graphic2_pages_pane_t1

0xe383,	// (0x00038f63) cell_graphic2_control_pane_ParamLimits

0xe383,	// (0x00038f63) cell_graphic2_control_pane

0xe3a1,	// (0x00038f81) cell_graphic2_pane_g1_ParamLimits

0xe3a1,	// (0x00038f81) cell_graphic2_pane_g1

0xe3ae,	// (0x00038f8e) cell_graphic2_pane_g2_ParamLimits

0xe3ae,	// (0x00038f8e) cell_graphic2_pane_g2

0xe3bb,	// (0x00038f9b) cell_graphic2_pane_g3_ParamLimits

0xe3bb,	// (0x00038f9b) cell_graphic2_pane_g3

0xe3c8,	// (0x00038fa8) cell_graphic2_pane_g4_ParamLimits

0xe3c8,	// (0x00038fa8) cell_graphic2_pane_g4

0xe3d5,	// (0x00038fb5) cell_graphic2_pane_g5_ParamLimits

0xe3d5,	// (0x00038fb5) cell_graphic2_pane_g5

0x0004,

0xfdaf,	// (0x0003a98f) cell_graphic2_pane_g_ParamLimits

0xfdaf,	// (0x0003a98f) cell_graphic2_pane_g

0xe3f0,	// (0x00038fd0) cell_graphic2_pane_t1_ParamLimits

0xe3f0,	// (0x00038fd0) cell_graphic2_pane_t1

0x9c87,	// (0x00034867) grid_highlight_pane_cp11_ParamLimits

0x9c87,	// (0x00034867) grid_highlight_pane_cp11

0x812a,	// (0x00032d0a) bg_button_pane_cp05

0xe427,	// (0x00039007) cell_graphic2_control_pane_g1

0xc213,	// (0x00036df3) bg_touch_area_indi_pane_g1

0xe44f,	// (0x0003902f) aid_cmod_rocker_key_size

0xe459,	// (0x00039039) aid_cmode_itu_key_size

0xe463,	// (0x00039043) main_cmode_video_pane

0xe46d,	// (0x0003904d) main_comp_mode_itu_pane

0xe479,	// (0x00039059) main_comp_mode_rocker_pane

0xe485,	// (0x00039065) cell_cmode_rocker_pane_ParamLimits

0xe485,	// (0x00039065) cell_cmode_rocker_pane

0xe497,	// (0x00039077) cell_cmode_itu_pane_ParamLimits

0xe497,	// (0x00039077) cell_cmode_itu_pane

0x8736,	// (0x00033316) bg_button_pane_cp06_ParamLimits

0x8736,	// (0x00033316) bg_button_pane_cp06

0xc49d,	// (0x0003707d) cell_cmode_rocker_pane_g1_ParamLimits

0xc49d,	// (0x0003707d) cell_cmode_rocker_pane_g1

0xd9c2,	// (0x000385a2) cell_cmode_rocker_pane_g2_ParamLimits

0xd9c2,	// (0x000385a2) cell_cmode_rocker_pane_g2

0x0001,

0xfdbf,	// (0x0003a99f) cell_cmode_rocker_pane_g_ParamLimits

0xfdbf,	// (0x0003a99f) cell_cmode_rocker_pane_g

0x7525,	// (0x00032105) bg_button_pane_cp07

0xe4ac,	// (0x0003908c) cell_cmode_itu_pane_g1

0xe4b5,	// (0x00039095) cell_cmode_itu_pane_t1

0xe4c3,	// (0x000390a3) cell_cmode_itu_pane_t2

0x0001,

0xfdc4,	// (0x0003a9a4) cell_cmode_itu_pane_t

0xdbe5,	// (0x000387c5) aid_touch_ctrl_left

0xdbed,	// (0x000387cd) aid_touch_ctrl_right

0x7525,	// (0x00032105) compa_mode_pane

0xe4d1,	// (0x000390b1) aid_cmod_rocker_key_size_cp

0xe4db,	// (0x000390bb) aid_cmode_itu_key_size_cp

0xe4e5,	// (0x000390c5) compa_mode_pane_g1

0xe4ed,	// (0x000390cd) compa_mode_pane_g2

0xe4f5,	// (0x000390d5) compa_mode_pane_g3

0x0002,

0xfdc9,	// (0x0003a9a9) compa_mode_pane_g

0xe4fd,	// (0x000390dd) main_comp_mode_itu_pane_cp

0xe505,	// (0x000390e5) main_comp_mode_rocker_pane_cp

0xe50d,	// (0x000390ed) cell_cmode_itu_pane_cp_ParamLimits

0xe50d,	// (0x000390ed) cell_cmode_itu_pane_cp

0xe522,	// (0x00039102) cell_cmode_rocker_pane_cp_ParamLimits

0xe522,	// (0x00039102) cell_cmode_rocker_pane_cp

0x8736,	// (0x00033316) bg_button_pane_cp06_cp_ParamLimits

0x8736,	// (0x00033316) bg_button_pane_cp06_cp

0xc49d,	// (0x0003707d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc49d,	// (0x0003707d) cell_cmode_rocker_pane_g1_cp

0xc213,	// (0x00036df3) cell_cmode_rocker_pane_g2_cp

0x7525,	// (0x00032105) bg_button_pane_cp07_cp

0xb15a,	// (0x00035d3a) cell_cmode_itu_pane_g1_cp

0xe534,	// (0x00039114) cell_cmode_itu_pane_t1_cp

0xe534,	// (0x00039114) cell_cmode_itu_pane_t2_cp

0xb147,	// (0x00035d27) settings_code_pane_cp2

0x7619,	// (0x000321f9) bg_popup_window_pane_cp3_ParamLimits

0x832a,	// (0x00032f0a) heading_pane_cp3_ParamLimits

0x8336,	// (0x00032f16) listscroll_popup_graphic_pane_ParamLimits

0x650b,	// (0x000310eb) fep_hwr_aid_pane_ParamLimits

0x6982,	// (0x00031562) aid_touch_sctrl_top_ParamLimits

0x699d,	// (0x0003157d) sctrl_sk_top_pane_g1_ParamLimits

0x6762,	// (0x00031342) sctrl_sk_top_pane_g2_ParamLimits

0xfcff,	// (0x0003a8df) sctrl_sk_top_pane_g_ParamLimits

0x69aa,	// (0x0003158a) sctrl_sk_top_pane_t1_ParamLimits

0x6982,	// (0x00031562) aid_touch_sctrl_bottom_ParamLimits

0x69aa,	// (0x0003158a) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb2e,	// (0x0003870e) aid_area_touch_clock

0x6b93,	// (0x00031773) aid_vkb2_area_top_pane_cell_ParamLimits

0x6b93,	// (0x00031773) aid_vkb2_area_top_pane_cell

0x6cde,	// (0x000318be) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6cde,	// (0x000318be) aid_vkb2_area_bottom_pane_cell

0xe0be,	// (0x00038c9e) popup_char_count_window

0xe542,	// (0x00039122) popup_char_count_window_g1

0xe54b,	// (0x0003912b) popup_char_count_window_g2

0xe554,	// (0x00039134) popup_char_count_window_g3

0x0002,

0xfdd0,	// (0x0003a9b0) popup_char_count_window_g

0xe55d,	// (0x0003913d) popup_char_count_window_t1

0x6a59,	// (0x00031639) popup_fep_char_preview_window_ParamLimits

0x6a59,	// (0x00031639) popup_fep_char_preview_window

0x6bb1,	// (0x00031791) vkb2_top_candi_pane_ParamLimits

0x6bb1,	// (0x00031791) vkb2_top_candi_pane

0xe56b,	// (0x0003914b) cell_vkb2_top_candi_pane_ParamLimits

0xe56b,	// (0x0003914b) cell_vkb2_top_candi_pane

0x6fc1,	// (0x00031ba1) bg_popup_fep_char_preview_window_ParamLimits

0x6fc1,	// (0x00031ba1) bg_popup_fep_char_preview_window

0x6fcf,	// (0x00031baf) popup_fep_char_preview_window_t1_ParamLimits

0x6fcf,	// (0x00031baf) popup_fep_char_preview_window_t1

0xe5b8,	// (0x00039198) bg_popup_fep_char_preview_window_g1

0xe5c0,	// (0x000391a0) bg_popup_fep_char_preview_window_g2

0xe5c8,	// (0x000391a8) bg_popup_fep_char_preview_window_g3

0xe5d0,	// (0x000391b0) bg_popup_fep_char_preview_window_g4

0xe5d8,	// (0x000391b8) bg_popup_fep_char_preview_window_g5

0x7009,	// (0x00031be9) bg_popup_fep_char_preview_window_g6

0xe5e0,	// (0x000391c0) bg_popup_fep_char_preview_window_g7

0xe5e8,	// (0x000391c8) bg_popup_fep_char_preview_window_g8

0xe5f0,	// (0x000391d0) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd7,	// (0x0003a9b7) bg_popup_fep_char_preview_window_g

0x6762,	// (0x00031342) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6762,	// (0x00031342) cell_vkb2_top_candi_pane_g1

0x6770,	// (0x00031350) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6770,	// (0x00031350) cell_vkb2_top_candi_pane_g2

0xe078,	// (0x00038c58) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe078,	// (0x00038c58) cell_vkb2_top_candi_pane_g3

0x7011,	// (0x00031bf1) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7011,	// (0x00031bf1) cell_vkb2_top_candi_pane_g4

0xc968,	// (0x00037548) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc968,	// (0x00037548) cell_vkb2_top_candi_pane_g5

0x7032,	// (0x00031c12) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7032,	// (0x00031c12) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdea,	// (0x0003a9ca) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdea,	// (0x0003a9ca) cell_vkb2_top_candi_pane_g

0x7040,	// (0x00031c20) cell_vkb2_top_candi_pane_t1

0x636b,	// (0x00030f4b) aid_size_touch_slider_mark_ParamLimits

0x636b,	// (0x00030f4b) aid_size_touch_slider_mark

0xe201,	// (0x00038de1) grid_graphic2_catg_pane_ParamLimits

0xe201,	// (0x00038de1) grid_graphic2_catg_pane

0xe29f,	// (0x00038e7f) popup_grid_graphic2_window_t1_ParamLimits

0xe29f,	// (0x00038e7f) popup_grid_graphic2_window_t1

0xe2b1,	// (0x00038e91) popup_grid_graphic2_window_t2_ParamLimits

0xe2b1,	// (0x00038e91) popup_grid_graphic2_window_t2

0x0001,

0xfda5,	// (0x0003a985) popup_grid_graphic2_window_t_ParamLimits

0xfda5,	// (0x0003a985) popup_grid_graphic2_window_t

0x812a,	// (0x00032d0a) bg_button_pane_cp05_ParamLimits

0xe427,	// (0x00039007) cell_graphic2_control_pane_g1_ParamLimits

0xe5f8,	// (0x000391d8) cell_graphic2_catg_pane_ParamLimits

0xe5f8,	// (0x000391d8) cell_graphic2_catg_pane

0x7525,	// (0x00032105) bg_button_pane_cp12

0xe60a,	// (0x000391ea) cell_graphic2_catg_pane_g1

0xdafa,	// (0x000386da) cell_tb_ext_pane_t1_ParamLimits

0x6dfb,	// (0x000319db) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6dfb,	// (0x000319db) vkb2_top_cell_right_narrow_pane

0x6e13,	// (0x000319f3) vkb2_top_cell_right_wide_pane_ParamLimits

0x6e13,	// (0x000319f3) vkb2_top_cell_right_wide_pane

0x64fd,	// (0x000310dd) bg_vkb2_func_pane_ParamLimits

0x64fd,	// (0x000310dd) bg_vkb2_func_pane

0x6e84,	// (0x00031a64) vkb2_top_cell_left_pane_g1_ParamLimits

0x64fd,	// (0x000310dd) bg_vkb2_fuc_pane_cp03_ParamLimits

0x64fd,	// (0x000310dd) bg_vkb2_fuc_pane_cp03

0x6ee2,	// (0x00031ac2) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9c1b,	// (0x000347fb) bg_vkb2_func_pane_g1

0x9c23,	// (0x00034803) bg_vkb2_func_pane_g2

0x9c33,	// (0x00034813) bg_vkb2_func_pane_g3

0x9c2b,	// (0x0003480b) bg_vkb2_func_pane_g4

0x9c3b,	// (0x0003481b) bg_vkb2_func_pane_g5

0x9c43,	// (0x00034823) bg_vkb2_func_pane_g6

0x9c4b,	// (0x0003482b) bg_vkb2_func_pane_g7

0x9c53,	// (0x00034833) bg_vkb2_func_pane_g8

0x9c13,	// (0x000347f3) bg_vkb2_func_pane_g9

0x0008,

0xfdf7,	// (0x0003a9d7) bg_vkb2_func_pane_g

0x64fd,	// (0x000310dd) bg_vkb2_fuc_pane_cp01_ParamLimits

0x64fd,	// (0x000310dd) bg_vkb2_fuc_pane_cp01

0x6e84,	// (0x00031a64) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6e84,	// (0x00031a64) vkb2_top_cell_right_wide_pane_g1

0x64fd,	// (0x000310dd) bg_vkb2_fuc_pane_cp02_ParamLimits

0x64fd,	// (0x000310dd) bg_vkb2_fuc_pane_cp02

0x6ee2,	// (0x00031ac2) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6ee2,	// (0x00031ac2) vkb2_top_cell_right_narrow_pane_g1

0xd71e,	// (0x000382fe) aid_touch_area_decrease_ParamLimits

0xd71e,	// (0x000382fe) aid_touch_area_decrease

0xd742,	// (0x00038322) aid_touch_area_increase_ParamLimits

0xd742,	// (0x00038322) aid_touch_area_increase

0xd75a,	// (0x0003833a) aid_touch_area_mute_ParamLimits

0xd75a,	// (0x0003833a) aid_touch_area_mute

0xd776,	// (0x00038356) aid_touch_area_slider_ParamLimits

0xd776,	// (0x00038356) aid_touch_area_slider

0xd860,	// (0x00038440) popup_slider_window_g4_ParamLimits

0xd860,	// (0x00038440) popup_slider_window_g4

0xd878,	// (0x00038458) popup_slider_window_g5_ParamLimits

0xd878,	// (0x00038458) popup_slider_window_g5

0xd89a,	// (0x0003847a) popup_slider_window_g6_ParamLimits

0xd89a,	// (0x0003847a) popup_slider_window_g6

0xd8d8,	// (0x000384b8) popup_slider_window_t2_ParamLimits

0xd8d8,	// (0x000384b8) popup_slider_window_t2

0x0001,

0xfcf3,	// (0x0003a8d3) popup_slider_window_t_ParamLimits

0xfcf3,	// (0x0003a8d3) popup_slider_window_t

0xd8f0,	// (0x000384d0) slider_pane_ParamLimits

0xd8f0,	// (0x000384d0) slider_pane

0xe613,	// (0x000391f3) slider_pane_g1_ParamLimits

0xe613,	// (0x000391f3) slider_pane_g1

0xe627,	// (0x00039207) slider_pane_g2_ParamLimits

0xe627,	// (0x00039207) slider_pane_g2

0xe63d,	// (0x0003921d) slider_pane_g3_ParamLimits

0xe63d,	// (0x0003921d) slider_pane_g3

0x0003,

0xfe0a,	// (0x0003a9ea) slider_pane_g_ParamLimits

0xfe0a,	// (0x0003a9ea) slider_pane_g

0x5eba,	// (0x00030a9a) popup_tb_float_extension_window_ParamLimits

0x5eba,	// (0x00030a9a) popup_tb_float_extension_window

0xe669,	// (0x00039249) aid_size_cell_tb_float_ext

0x7525,	// (0x00032105) bg_popup_sub_window_cp28

0xe675,	// (0x00039255) grid_tb_float_ext_pane

0xe67f,	// (0x0003925f) cell_tb_float_ext_pane_ParamLimits

0xe67f,	// (0x0003925f) cell_tb_float_ext_pane

0xe699,	// (0x00039279) cell_tb_float_ext_pane_g1

0xe6a2,	// (0x00039282) grid_highlight_pane_cp12

0x664c,	// (0x0003122c) cell_last_hwr_side_pane_ParamLimits

0x664c,	// (0x0003122c) cell_last_hwr_side_pane

0xc213,	// (0x00036df3) cell_last_hwr_side_pane_g1

0xe6ab,	// (0x0003928b) cell_last_hwr_side_pane_g2

0x0001,

0xfe13,	// (0x0003a9f3) cell_last_hwr_side_pane_g

0x6daa,	// (0x0003198a) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6daa,	// (0x0003198a) vkb2_area_bottom_space_btn_pane

0x6762,	// (0x00031342) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe173,	// (0x00038d53) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7040,	// (0x00031c20) cell_vkb2_top_candi_pane_t1_ParamLimits

0x705f,	// (0x00031c3f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x705f,	// (0x00031c3f) vkb2_area_bottom_space_btn_pane_g1

0x7099,	// (0x00031c79) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7099,	// (0x00031c79) vkb2_area_bottom_space_btn_pane_g2

0x70cf,	// (0x00031caf) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x70cf,	// (0x00031caf) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe18,	// (0x0003a9f8) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe18,	// (0x0003a9f8) vkb2_area_bottom_space_btn_pane_g

0x65c0,	// (0x000311a0) cel_fep_hwr_func_pane_ParamLimits

0x65c0,	// (0x000311a0) cel_fep_hwr_func_pane

0x65fc,	// (0x000311dc) cell_hwr_side_button_pane_ParamLimits

0x65fc,	// (0x000311dc) cell_hwr_side_button_pane

0xdb2e,	// (0x0003870e) aid_area_touch_clock_ParamLimits

0x812a,	// (0x00032d0a) bg_uniindi_top_pane_ParamLimits

0xdb40,	// (0x00038720) uniindi_top_pane_g1_ParamLimits

0xdb56,	// (0x00038736) uniindi_top_pane_g2_ParamLimits

0xdb62,	// (0x00038742) uniindi_top_pane_g3_ParamLimits

0xdb73,	// (0x00038753) uniindi_top_pane_g4_ParamLimits

0xfd2b,	// (0x0003a90b) uniindi_top_pane_g_ParamLimits

0xdb80,	// (0x00038760) uniindi_top_pane_t1_ParamLimits

0x812a,	// (0x00032d0a) bg_vkb2_func_pane_cp01_ParamLimits

0x812a,	// (0x00032d0a) bg_vkb2_func_pane_cp01

0xe6b4,	// (0x00039294) cel_fep_hwr_func_pane_g1_ParamLimits

0xe6b4,	// (0x00039294) cel_fep_hwr_func_pane_g1

0x812a,	// (0x00032d0a) bg_vkb2_func_pane_cp02_ParamLimits

0x812a,	// (0x00032d0a) bg_vkb2_func_pane_cp02

0xe6b4,	// (0x00039294) cell_hwr_side_button_pane_g1_ParamLimits

0xe6b4,	// (0x00039294) cell_hwr_side_button_pane_g1

0x9a94,	// (0x00034674) status_pane_g4_ParamLimits

0x9a94,	// (0x00034674) status_pane_g4

0x9aae,	// (0x0003468e) status_pane_t1

0xbf58,	// (0x00036b38) form2_midp_gauge_slider_cont_pane

0xbf60,	// (0x00036b40) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbf72,	// (0x00036b52) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbf84,	// (0x00036b64) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaeb,	// (0x0003a6cb) form2_midp_gauge_slider_pane_t_ParamLimits

0xbf96,	// (0x00036b76) form2_midp_slider_pane_ParamLimits

0x6a19,	// (0x000315f9) aid_size_cell_func_vkb2_ParamLimits

0x6a19,	// (0x000315f9) aid_size_cell_func_vkb2

0xe655,	// (0x00039235) slider_pane_g4_ParamLimits

0xe655,	// (0x00039235) slider_pane_g4

0x7119,	// (0x00031cf9) form2_midp_gauge_slider_pane_t2_cp01

0x7127,	// (0x00031d07) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7127,	// (0x00031d07) form2_midp_gauge_slider_pane_t3_cp01

0x7144,	// (0x00031d24) form2_midp_slider_pane_cp01

0x7525,	// (0x00032105) navi_smil_pane

0xe6ed,	// (0x000392cd) navi_smil_pane_g1

0xe6f5,	// (0x000392d5) navi_smil_pane_t1

0xe6c2,	// (0x000392a2) form2_midp_slider_pane_g1

0xe6cb,	// (0x000392ab) form2_midp_slider_pane_g2

0xe6d3,	// (0x000392b3) form2_midp_slider_pane_g3

0xe6c2,	// (0x000392a2) form2_midp_slider_pane_g4

0xe6db,	// (0x000392bb) form2_midp_slider_pane_g5

0x0004,

0xfe21,	// (0x0003aa01) form2_midp_slider_pane_g

0x7109,	// (0x00031ce9) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7109,	// (0x00031ce9) vkb2_area_bottom_space_btn_pane_g4

0x98c3,	// (0x000344a3) lc0_navi_pane_ParamLimits

0x98c3,	// (0x000344a3) lc0_navi_pane

0x9939,	// (0x00034519) lc0_stat_indi_pane_ParamLimits

0x9939,	// (0x00034519) lc0_stat_indi_pane

0x9950,	// (0x00034530) ls0_title_pane_ParamLimits

0x9950,	// (0x00034530) ls0_title_pane

0x8736,	// (0x00033316) bg_popup_sub_pane_cp14_ParamLimits

0xdb15,	// (0x000386f5) list_uniindi_pane_ParamLimits

0xdb21,	// (0x00038701) uniindi_top_pane_ParamLimits

0xdbbd,	// (0x0003879d) list_single_uniindi_pane_g1_ParamLimits

0xdbd0,	// (0x000387b0) list_single_uniindi_pane_t1_ParamLimits

0x714d,	// (0x00031d2d) lc0_stat_clock_pane_ParamLimits

0x714d,	// (0x00031d2d) lc0_stat_clock_pane

0xe703,	// (0x000392e3) lc0_stat_indi_pane_g1_ParamLimits

0xe703,	// (0x000392e3) lc0_stat_indi_pane_g1

0xe710,	// (0x000392f0) lc0_stat_indi_pane_g2_ParamLimits

0xe710,	// (0x000392f0) lc0_stat_indi_pane_g2

0x0001,

0xfe2c,	// (0x0003aa0c) lc0_stat_indi_pane_g_ParamLimits

0xfe2c,	// (0x0003aa0c) lc0_stat_indi_pane_g

0x715a,	// (0x00031d3a) lc0_uni_indicator_pane_ParamLimits

0x715a,	// (0x00031d3a) lc0_uni_indicator_pane

0xe71d,	// (0x000392fd) ls0_title_pane_g1_ParamLimits

0xe71d,	// (0x000392fd) ls0_title_pane_g1

0xe731,	// (0x00039311) ls0_title_pane_t1_ParamLimits

0xe731,	// (0x00039311) ls0_title_pane_t1

0x7167,	// (0x00031d47) lc0_uni_indicator_pane_g1_ParamLimits

0x7167,	// (0x00031d47) lc0_uni_indicator_pane_g1

0xe767,	// (0x00039347) lc0_stat_clock_pane_t1

0x4954,	// (0x0002f534) main_ai5_pane

0xe775,	// (0x00039355) ai5_sk_pane_ParamLimits

0xe775,	// (0x00039355) ai5_sk_pane

0xe782,	// (0x00039362) cell_ai5_widget_pane_ParamLimits

0xe782,	// (0x00039362) cell_ai5_widget_pane

0xe83d,	// (0x0003941d) aid_size_cell_widget_grid

0xe853,	// (0x00039433) bg_ai5_widget_pane_ParamLimits

0xe853,	// (0x00039433) bg_ai5_widget_pane

0xe8cb,	// (0x000394ab) cell_ai5_widget_pane_g2

0xe8df,	// (0x000394bf) cell_ai5_widget_pane_g3

0xe8f9,	// (0x000394d9) cell_ai5_widget_pane_g4

0xe909,	// (0x000394e9) cell_ai5_widget_pane_g5

0xe919,	// (0x000394f9) cell_ai5_widget_pane_g6

0xe925,	// (0x00039505) cell_ai5_widget_pane_g7

0xe96d,	// (0x0003954d) cell_ai5_widget_pane_t1_ParamLimits

0xe96d,	// (0x0003954d) cell_ai5_widget_pane_t1

0xe98a,	// (0x0003956a) cell_ai5_widget_pane_t2_ParamLimits

0xe98a,	// (0x0003956a) cell_ai5_widget_pane_t2

0xe9a2,	// (0x00039582) cell_ai5_widget_pane_t3_ParamLimits

0xe9a2,	// (0x00039582) cell_ai5_widget_pane_t3

0xe9ba,	// (0x0003959a) cell_ai5_widget_pane_t4_ParamLimits

0xe9ba,	// (0x0003959a) cell_ai5_widget_pane_t4

0xe9e0,	// (0x000395c0) cell_ai5_widget_pane_t5_ParamLimits

0xe9e0,	// (0x000395c0) cell_ai5_widget_pane_t5

0xea00,	// (0x000395e0) cell_ai5_widget_pane_t6_ParamLimits

0xea00,	// (0x000395e0) cell_ai5_widget_pane_t6

0xea12,	// (0x000395f2) cell_ai5_widget_pane_t7_ParamLimits

0xea12,	// (0x000395f2) cell_ai5_widget_pane_t7

0xea2b,	// (0x0003960b) cell_ai5_widget_pane_t8_ParamLimits

0xea2b,	// (0x0003960b) cell_ai5_widget_pane_t8

0x0009,

0xfe46,	// (0x0003aa26) cell_ai5_widget_pane_t_ParamLimits

0xfe46,	// (0x0003aa26) cell_ai5_widget_pane_t

0xea8a,	// (0x0003966a) grid_ai5_widget_pane

0x8736,	// (0x00033316) highlight_cell_ai5_widget_pane_ParamLimits

0x8736,	// (0x00033316) highlight_cell_ai5_widget_pane

0xeaa1,	// (0x00039681) ai5_sk_left_pane

0xeaab,	// (0x0003968b) ai5_sk_middle_pane

0xeab5,	// (0x00039695) ai5_sk_right_pane

0xeabf,	// (0x0003969f) bg_ai5_widget_pane_g1_ParamLimits

0xeabf,	// (0x0003969f) bg_ai5_widget_pane_g1

0xeacb,	// (0x000396ab) bg_ai5_widget_pane_g2_ParamLimits

0xeacb,	// (0x000396ab) bg_ai5_widget_pane_g2

0xead7,	// (0x000396b7) bg_ai5_widget_pane_g3_ParamLimits

0xead7,	// (0x000396b7) bg_ai5_widget_pane_g3

0xeae3,	// (0x000396c3) bg_ai5_widget_pane_g4_ParamLimits

0xeae3,	// (0x000396c3) bg_ai5_widget_pane_g4

0xeaef,	// (0x000396cf) bg_ai5_widget_pane_g5_ParamLimits

0xeaef,	// (0x000396cf) bg_ai5_widget_pane_g5

0xeafb,	// (0x000396db) bg_ai5_widget_pane_g6_ParamLimits

0xeafb,	// (0x000396db) bg_ai5_widget_pane_g6

0xeb07,	// (0x000396e7) bg_ai5_widget_pane_g7_ParamLimits

0xeb07,	// (0x000396e7) bg_ai5_widget_pane_g7

0xeb13,	// (0x000396f3) bg_ai5_widget_pane_g8_ParamLimits

0xeb13,	// (0x000396f3) bg_ai5_widget_pane_g8

0xeb1f,	// (0x000396ff) bg_ai5_widget_pane_g9_ParamLimits

0xeb1f,	// (0x000396ff) bg_ai5_widget_pane_g9

0x0008,

0xfe5b,	// (0x0003aa3b) bg_ai5_widget_pane_g_ParamLimits

0xfe5b,	// (0x0003aa3b) bg_ai5_widget_pane_g

0xeb51,	// (0x00039731) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb51,	// (0x00039731) cell_shortcut_ai5_widget_pane

0x93cb,	// (0x00033fab) bg_cell_shortcut_ai5_widget_pane

0xeb62,	// (0x00039742) cell_grid_ai5_widget_pane_g1

0x93cb,	// (0x00033fab) highlight_cell_shortcut_ai5_widget_pane

0x9c1b,	// (0x000347fb) ai5_sk_left_pane_g1

0xeb6b,	// (0x0003974b) ai5_sk_left_pane_g2

0xeb73,	// (0x00039753) ai5_sk_left_pane_g3

0xeb7b,	// (0x0003975b) ai5_sk_left_pane_g4

0x0003,

0xfe6e,	// (0x0003aa4e) ai5_sk_left_pane_g

0xeb83,	// (0x00039763) ai5_sk_left_pane_t1

0x9c23,	// (0x00034803) ai5_sk_right_pane_g1

0xeb91,	// (0x00039771) ai5_sk_right_pane_g2

0xeb99,	// (0x00039779) ai5_sk_right_pane_g3

0xeba1,	// (0x00039781) ai5_sk_right_pane_g4

0x0003,

0xfe77,	// (0x0003aa57) ai5_sk_right_pane_g

0xeba9,	// (0x00039789) ai5_sk_right_pane_t1

0x9c23,	// (0x00034803) ai5_sk_middle_pane_g1

0x9c1b,	// (0x000347fb) ai5_sk_middle_pane_g2

0x9c3b,	// (0x0003481b) ai5_sk_middle_pane_g3

0xeb99,	// (0x00039779) ai5_sk_middle_pane_g4

0xeb73,	// (0x00039753) ai5_sk_middle_pane_g5

0xebb7,	// (0x00039797) ai5_sk_middle_pane_g6

0xebbf,	// (0x0003979f) ai5_sk_middle_pane_g7

0x0006,

0xfe80,	// (0x0003aa60) ai5_sk_middle_pane_g

0x974f,	// (0x0003432f) aid_touch_area_size_lc0_ParamLimits

0x974f,	// (0x0003432f) aid_touch_area_size_lc0

0x6791,	// (0x00031371) cell_hwr_candidate_pane_t1_ParamLimits

0x976b,	// (0x0003434b) aid_touch_navi_pane

0x9a3e,	// (0x0003461e) status_dt_navi_pane_ParamLimits

0x9a3e,	// (0x0003461e) status_dt_navi_pane

0x9a4b,	// (0x0003462b) status_dt_sta_pane_ParamLimits

0x9a4b,	// (0x0003462b) status_dt_sta_pane

0xebc7,	// (0x000397a7) dt_sta_controll_pane

0xebd4,	// (0x000397b4) dt_sta_indi_pane

0xebe5,	// (0x000397c5) dt_sta_title_pane

0x812a,	// (0x00032d0a) bg_dt_sta_indi_pane_ParamLimits

0x812a,	// (0x00032d0a) bg_dt_sta_indi_pane

0xebf8,	// (0x000397d8) dt_sta_battery_pane

0xec00,	// (0x000397e0) dt_sta_indi_pane_g1

0xec09,	// (0x000397e9) dt_sta_indi_pane_g2

0xec12,	// (0x000397f2) dt_sta_indi_pane_g3

0x0002,

0xfe8f,	// (0x0003aa6f) dt_sta_indi_pane_g

0xec1b,	// (0x000397fb) dt_sta_signal_pane

0x8736,	// (0x00033316) bg_dt_sta_title_pane_ParamLimits

0x8736,	// (0x00033316) bg_dt_sta_title_pane

0xec24,	// (0x00039804) dt_sta_title_pane_g1

0xec2c,	// (0x0003980c) dt_sta_title_pane_t1_ParamLimits

0xec2c,	// (0x0003980c) dt_sta_title_pane_t1

0x7525,	// (0x00032105) bg_dt_sta_control_pane

0xec41,	// (0x00039821) dt_sta_controll_pane_g1

0xec4a,	// (0x0003982a) bg_dt_sta_title_pane_g1

0xec53,	// (0x00039833) bg_dt_sta_title_pane_g2

0xec5c,	// (0x0003983c) bg_dt_sta_title_pane_g3

0x0002,

0xfe96,	// (0x0003aa76) bg_dt_sta_title_pane_g

0xc213,	// (0x00036df3) bg_dt_sta_indi_pane_g1

0xec65,	// (0x00039845) dt_sta_signal_pane_g1

0xec6d,	// (0x0003984d) dt_sta_signal_pane_g2

0x0001,

0xfe9d,	// (0x0003aa7d) dt_sta_signal_pane_g

0xec75,	// (0x00039855) dt_sta_battery_pane_g1

0xec7e,	// (0x0003985e) dt_sta_battery_pane_t1

0xc213,	// (0x00036df3) bg_dt_sta_control_pane_g1

0x8eca,	// (0x00033aaa) fep_china_uni_eep_pane

0x8ed2,	// (0x00033ab2) fep_china_uni_entry_pane_ParamLimits

0x8ee2,	// (0x00033ac2) popup_fep_china_uni_window_g1_ParamLimits

0x8ef2,	// (0x00033ad2) popup_fep_china_uni_window_g2_ParamLimits

0x8ef2,	// (0x00033ad2) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0003a2fd) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0003a2fd) popup_fep_china_uni_window_g

0xec8d,	// (0x0003986d) fep_china_uni_eep_pane_g1

0xec95,	// (0x00039875) fep_china_uni_eep_pane_t1

0xe6e4,	// (0x000392c4) aid_touch_area_size_smil_player

0x98bb,	// (0x0003449b) lc0_clock_pane

0x9aa2,	// (0x00034682) status_pane_g5_ParamLimits

0x9aa2,	// (0x00034682) status_pane_g5

0x5b7f,	// (0x0003075f) popup_keymap_window

0x9a60,	// (0x00034640) status_icon_pane

0xe8df,	// (0x000394bf) cell_ai5_widget_pane_g3_ParamLimits

0xe8f9,	// (0x000394d9) cell_ai5_widget_pane_g4_ParamLimits

0xe909,	// (0x000394e9) cell_ai5_widget_pane_g5_ParamLimits

0xe931,	// (0x00039511) cell_ai5_widget_pane_g8_ParamLimits

0xe931,	// (0x00039511) cell_ai5_widget_pane_g8

0xe945,	// (0x00039525) cell_ai5_widget_pane_g9_ParamLimits

0xe945,	// (0x00039525) cell_ai5_widget_pane_g9

0xe959,	// (0x00039539) cell_ai5_widget_pane_g10_ParamLimits

0xe959,	// (0x00039539) cell_ai5_widget_pane_g10

0xeca4,	// (0x00039884) status_icon_pane_g1

0x7525,	// (0x00032105) bg_popup_sub_pane_cp13

0xecac,	// (0x0003988c) popup_keymap_window_t1

0x96a0,	// (0x00034280) control_pane_g6_ParamLimits

0x96a0,	// (0x00034280) control_pane_g6

0x96ad,	// (0x0003428d) control_pane_g7_ParamLimits

0x96ad,	// (0x0003428d) control_pane_g7

0x96ba,	// (0x0003429a) control_pane_g8_ParamLimits

0x96ba,	// (0x0003429a) control_pane_g8

0xebc7,	// (0x000397a7) dt_sta_controll_pane_ParamLimits

0xebd4,	// (0x000397b4) dt_sta_indi_pane_ParamLimits

0xebe5,	// (0x000397c5) dt_sta_title_pane_ParamLimits

0x866e,	// (0x0003324e) aid_size_touch_scroll_bar_cale

0x4a2d,	// (0x0002f60d) popup_discreet_window_ParamLimits

0x4a2d,	// (0x0002f60d) popup_discreet_window

0x4ab5,	// (0x0002f695) popup_sk_window

0xa29a,	// (0x00034e7a) bg_popup_sub_pane_cp28_ParamLimits

0xa29a,	// (0x00034e7a) bg_popup_sub_pane_cp28

0xecba,	// (0x0003989a) popup_discreet_window_g1_ParamLimits

0xecba,	// (0x0003989a) popup_discreet_window_g1

0xecda,	// (0x000398ba) popup_discreet_window_t1_ParamLimits

0xecda,	// (0x000398ba) popup_discreet_window_t1

0xecf8,	// (0x000398d8) popup_discreet_window_t2_ParamLimits

0xecf8,	// (0x000398d8) popup_discreet_window_t2

0x0002,

0xfea2,	// (0x0003aa82) popup_discreet_window_t_ParamLimits

0xfea2,	// (0x0003aa82) popup_discreet_window_t

0x717b,	// (0x00031d5b) popup_sk_window_g1

0x7185,	// (0x00031d65) popup_sk_window_g2

0x0001,

0xfea9,	// (0x0003aa89) popup_sk_window_g

0x718d,	// (0x00031d6d) popup_sk_window_t1

0x719b,	// (0x00031d7b) popup_sk_window_t1_copy1

0xe8cb,	// (0x000394ab) cell_ai5_widget_pane_g2_ParamLimits

0xea3d,	// (0x0003961d) cell_ai5_widget_pane_t9_ParamLimits

0xea3d,	// (0x0003961d) cell_ai5_widget_pane_t9

0x7525,	// (0x00032105) main_fep_fshwr2_pane

0x71a9,	// (0x00031d89) aid_fshwr2_btn_pane

0x71b5,	// (0x00031d95) aid_fshwr2_syb_pane

0x71c7,	// (0x00031da7) aid_fshwr2_txt_pane

0x71d3,	// (0x00031db3) fshwr2_func_candi_pane

0x71ef,	// (0x00031dcf) fshwr2_hwr_syb_pane

0x7209,	// (0x00031de9) fshwr2_icf_pane

0x4954,	// (0x0002f534) fshwr2_icf_bg_pane

0x7235,	// (0x00031e15) fshwr2_icf_pane_t1_ParamLimits

0x7235,	// (0x00031e15) fshwr2_icf_pane_t1

0x8db8,	// (0x00033998) fshwr2_func_candi_pane_g1

0xed4a,	// (0x0003992a) fshwr2_func_candi_row_pane_ParamLimits

0xed4a,	// (0x0003992a) fshwr2_func_candi_row_pane

0x724d,	// (0x00031e2d) cell_fshwr2_syb_pane_ParamLimits

0x724d,	// (0x00031e2d) cell_fshwr2_syb_pane

0x726e,	// (0x00031e4e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x726e,	// (0x00031e4e) fshwr2_hwr_syb_pane_g1

0x4954,	// (0x0002f534) bg_popup_call_pane_cp01

0x727c,	// (0x00031e5c) fshwr2_func_candi_cell_pane_ParamLimits

0x727c,	// (0x00031e5c) fshwr2_func_candi_cell_pane

0xed6f,	// (0x0003994f) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed6f,	// (0x0003994f) fshwr2_func_candi_cell_bg_pane

0x72c7,	// (0x00031ea7) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x72c7,	// (0x00031ea7) fshwr2_func_candi_cell_pane_g1

0x72ef,	// (0x00031ecf) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x72ef,	// (0x00031ecf) fshwr2_func_candi_cell_pane_t1

0x4954,	// (0x0002f534) bg_button_pane_cp08

0xed7b,	// (0x0003995b) cell_fshwr2_syb_bg_pane

0x7302,	// (0x00031ee2) cell_fshwr2_syb_bg_pane_g1

0x7316,	// (0x00031ef6) cell_fshwr2_syb_bg_pane_t1

0x8736,	// (0x00033316) main_tmo_pane

0xadb5,	// (0x00035995) uni_indicator_pane_g1_ParamLimits

0xadc8,	// (0x000359a8) uni_indicator_pane_g2_ParamLimits

0xadda,	// (0x000359ba) uni_indicator_pane_g3_ParamLimits

0xade9,	// (0x000359c9) uni_indicator_pane_g4_ParamLimits

0xade9,	// (0x000359c9) uni_indicator_pane_g4

0xadfd,	// (0x000359dd) uni_indicator_pane_g5_ParamLimits

0xadfd,	// (0x000359dd) uni_indicator_pane_g5

0xadfd,	// (0x000359dd) uni_indicator_pane_g6_ParamLimits

0xadfd,	// (0x000359dd) uni_indicator_pane_g6

0xf921,	// (0x0003a501) uni_indicator_pane_g_ParamLimits

0xd6fa,	// (0x000382da) popup_tmo_note_window_ParamLimits

0xd6fa,	// (0x000382da) popup_tmo_note_window

0x69fb,	// (0x000315db) fshwr2_bg_pane

0x72e0,	// (0x00031ec0) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x72e0,	// (0x00031ec0) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeae,	// (0x0003aa8e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeae,	// (0x0003aa8e) fshwr2_func_candi_cell_pane_g

0x674a,	// (0x0003132a) bg_popup_window_pane_cp01

0x732c,	// (0x00031f0c) bg_popup_window_pane_g1_cp01

0xed87,	// (0x00039967) bg_popup_window_pane_cp22_ParamLimits

0xed87,	// (0x00039967) bg_popup_window_pane_cp22

0xed95,	// (0x00039975) listscroll_tmo_link_pane_ParamLimits

0xed95,	// (0x00039975) listscroll_tmo_link_pane

0xedd5,	// (0x000399b5) popup_tmo_note_window_g1_ParamLimits

0xedd5,	// (0x000399b5) popup_tmo_note_window_g1

0xede2,	// (0x000399c2) tmo_note_info_pane_ParamLimits

0xede2,	// (0x000399c2) tmo_note_info_pane

0xedfc,	// (0x000399dc) list_tmo_note_info_pane_g1_ParamLimits

0xedfc,	// (0x000399dc) list_tmo_note_info_pane_g1

0xee13,	// (0x000399f3) list_tmo_note_info_pane_g2_ParamLimits

0xee13,	// (0x000399f3) list_tmo_note_info_pane_g2

0x0001,

0xfeb3,	// (0x0003aa93) list_tmo_note_info_pane_g_ParamLimits

0xfeb3,	// (0x0003aa93) list_tmo_note_info_pane_g

0xee2f,	// (0x00039a0f) list_tmo_note_info_text_pane_ParamLimits

0xee2f,	// (0x00039a0f) list_tmo_note_info_text_pane

0xeeb0,	// (0x00039a90) list_tmo_link_pane

0xeebd,	// (0x00039a9d) scroll_pane_cp20

0xeeca,	// (0x00039aaa) list_single_tmo_link_pane_ParamLimits

0xeeca,	// (0x00039aaa) list_single_tmo_link_pane

0xeeda,	// (0x00039aba) list_single_tmo_link_pane_t1

0xeee8,	// (0x00039ac8) list_tmo_note_info_text_pane_t1_ParamLimits

0xeee8,	// (0x00039ac8) list_tmo_note_info_text_pane_t1

0x87ed,	// (0x000333cd) aid_size_touch_scroll_bar_cp01_ParamLimits

0x87ed,	// (0x000333cd) aid_size_touch_scroll_bar_cp01

0x5238,	// (0x0002fe18) aid_size_touch_slider_marker

0x4a9d,	// (0x0002f67d) popup_settings_window_ParamLimits

0x4a9d,	// (0x0002f67d) popup_settings_window

0x5a04,	// (0x000305e4) popup_candi_list_indi_window

0x976b,	// (0x0003434b) aid_touch_navi_pane_ParamLimits

0x6956,	// (0x00031536) rs_clock_indi_pane

0x695f,	// (0x0003153f) sctrl_sk_bottom_pane_ParamLimits

0x6970,	// (0x00031550) sctrl_sk_top_pane_ParamLimits

0x6a73,	// (0x00031653) popup_fep_tooltip_window

0xe83d,	// (0x0003941d) aid_size_cell_widget_grid_ParamLimits

0xe8b6,	// (0x00039496) cell_ai5_widget_pane_g1_ParamLimits

0xe8b6,	// (0x00039496) cell_ai5_widget_pane_g1

0xe919,	// (0x000394f9) cell_ai5_widget_pane_g6_ParamLimits

0xe925,	// (0x00039505) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe31,	// (0x0003aa11) cell_ai5_widget_pane_g_ParamLimits

0xfe31,	// (0x0003aa11) cell_ai5_widget_pane_g

0xea6c,	// (0x0003964c) cell_ai5_widget_pane_t10_ParamLimits

0xea6c,	// (0x0003964c) cell_ai5_widget_pane_t10

0xea8a,	// (0x0003966a) grid_ai5_widget_pane_ParamLimits

0xeb2b,	// (0x0003970b) cell_contacts_ai5_widget_pane_ParamLimits

0xeb2b,	// (0x0003970b) cell_contacts_ai5_widget_pane

0xed0d,	// (0x000398ed) popup_discreet_window_t3_ParamLimits

0xed0d,	// (0x000398ed) popup_discreet_window_t3

0x7221,	// (0x00031e01) popup_fshwr2_char_preview_window_ParamLimits

0x7221,	// (0x00031e01) popup_fshwr2_char_preview_window

0xee4d,	// (0x00039a2d) tmo_note_info_pane_t1

0xee62,	// (0x00039a42) tmo_note_info_pane_t2

0xee77,	// (0x00039a57) tmo_note_info_pane_t3

0xee8c,	// (0x00039a6c) tmo_note_info_pane_t4

0xee9e,	// (0x00039a7e) tmo_note_info_pane_t5

0x0004,

0xfeb8,	// (0x0003aa98) tmo_note_info_pane_t

0xeeb0,	// (0x00039a90) list_tmo_link_pane_ParamLimits

0xeebd,	// (0x00039a9d) scroll_pane_cp20_ParamLimits

0x4954,	// (0x0002f534) bg_popup_fep_char_preview_window_cp01

0xef01,	// (0x00039ae1) popup_fshwr2_char_preview_window_t1

0xef0f,	// (0x00039aef) popup_candi_list_indi_window_g1

0xef18,	// (0x00039af8) bg_cell_contacts_ai5_widget_pane

0xef24,	// (0x00039b04) cell_contacts_ai5_widget_pane_g1

0xc8bd,	// (0x0003749d) cell_contacts_ai5_widget_pane_g2

0xef39,	// (0x00039b19) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec3,	// (0x0003aaa3) cell_contacts_ai5_widget_pane_g

0xef45,	// (0x00039b25) cell_contacts_ai5_widget_pane_t1

0x8736,	// (0x00033316) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefbc,	// (0x00039b9c) settings_container_pane

0x93cb,	// (0x00033fab) listscroll_set_pane_copy1

0xb923,	// (0x00036503) scroll_pane_cp121_copy1

0xa03f,	// (0x00034c1f) set_content_pane_copy1

0xefc8,	// (0x00039ba8) aid_height_set_list_copy1_ParamLimits

0xefc8,	// (0x00039ba8) aid_height_set_list_copy1

0xaff5,	// (0x00035bd5) aid_size_parent_copy1_ParamLimits

0xaff5,	// (0x00035bd5) aid_size_parent_copy1

0xefd4,	// (0x00039bb4) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefd4,	// (0x00039bb4) button_value_adjust_pane_cp6_copy1

0x96ef,	// (0x000342cf) list_highlight_pane_cp2_copy1_ParamLimits

0x96ef,	// (0x000342cf) list_highlight_pane_cp2_copy1

0xefe8,	// (0x00039bc8) list_set_pane_copy1_ParamLimits

0xefe8,	// (0x00039bc8) list_set_pane_copy1

0xef57,	// (0x00039b37) main_pane_set_t1_copy1_ParamLimits

0xef57,	// (0x00039b37) main_pane_set_t1_copy1

0xef91,	// (0x00039b71) main_pane_set_t2_copy1_ParamLimits

0xef91,	// (0x00039b71) main_pane_set_t2_copy1

0xf095,	// (0x00039c75) main_pane_set_t3_copy1

0xf0a3,	// (0x00039c83) main_pane_set_t4_copy1

0xefb0,	// (0x00039b90) set_content_pane_g1_copy1_ParamLimits

0xefb0,	// (0x00039b90) set_content_pane_g1_copy1

0xf0b1,	// (0x00039c91) setting_code_pane_copy1

0xf0b9,	// (0x00039c99) setting_slider_graphic_pane_copy1

0xf0b9,	// (0x00039c99) setting_slider_pane_copy1

0xf0b9,	// (0x00039c99) setting_text_pane_copy1

0xf0b9,	// (0x00039c99) setting_volume_pane_copy1

0xf0b1,	// (0x00039c91) settings_code_pane_cp2_copy1

0xf0c1,	// (0x00039ca1) settings_code_pane_cp_copy1_ParamLimits

0xf0c1,	// (0x00039ca1) settings_code_pane_cp_copy1

0x7335,	// (0x00031f15) volume_set_pane_copy1

0xf0d5,	// (0x00039cb5) volume_set_pane_g10_copy1

0xf0dd,	// (0x00039cbd) volume_set_pane_g1_copy1

0xf0e5,	// (0x00039cc5) volume_set_pane_g2_copy1

0xf0ed,	// (0x00039ccd) volume_set_pane_g3_copy1

0xf0f5,	// (0x00039cd5) volume_set_pane_g4_copy1

0xf0fd,	// (0x00039cdd) volume_set_pane_g5_copy1

0xf105,	// (0x00039ce5) volume_set_pane_g6_copy1

0xf10d,	// (0x00039ced) volume_set_pane_g7_copy1

0xf115,	// (0x00039cf5) volume_set_pane_g8_copy1

0xf11d,	// (0x00039cfd) volume_set_pane_g9_copy1

0x7619,	// (0x000321f9) bg_set_opt_pane_cp_copy1_ParamLimits

0x7619,	// (0x000321f9) bg_set_opt_pane_cp_copy1

0x733d,	// (0x00031f1d) setting_slider_pane_t1_copy1_ParamLimits

0x733d,	// (0x00031f1d) setting_slider_pane_t1_copy1

0x735b,	// (0x00031f3b) setting_slider_pane_t2_copy1_ParamLimits

0x735b,	// (0x00031f3b) setting_slider_pane_t2_copy1

0x7375,	// (0x00031f55) setting_slider_pane_t3_copy1_ParamLimits

0x7375,	// (0x00031f55) setting_slider_pane_t3_copy1

0x738d,	// (0x00031f6d) slider_set_pane_copy1_ParamLimits

0x738d,	// (0x00031f6d) slider_set_pane_copy1

0x878e,	// (0x0003336e) set_opt_bg_pane_g1_copy2

0x8796,	// (0x00033376) set_opt_bg_pane_g2_copy2

0xf125,	// (0x00039d05) set_opt_bg_pane_g3_copy2

0x87a6,	// (0x00033386) set_opt_bg_pane_g4_copy2

0x87ae,	// (0x0003338e) set_opt_bg_pane_g5_copy2

0x87b6,	// (0x00033396) set_opt_bg_pane_g6_copy2

0xf12f,	// (0x00039d0f) set_opt_bg_pane_g7_copy2

0xf137,	// (0x00039d17) set_opt_bg_pane_g8_copy2

0xf141,	// (0x00039d21) set_opt_bg_pane_g9_copy2

0x73a3,	// (0x00031f83) aid_size_touch_slider_mark_copy1_ParamLimits

0x73a3,	// (0x00031f83) aid_size_touch_slider_mark_copy1

0xf14b,	// (0x00039d2b) slider_set_pane_g1_copy1

0x73b7,	// (0x00031f97) slider_set_pane_g2_copy1

0x638b,	// (0x00030f6b) slider_set_pane_g3_copy1_ParamLimits

0x638b,	// (0x00030f6b) slider_set_pane_g3_copy1

0x639f,	// (0x00030f7f) slider_set_pane_g4_copy1_ParamLimits

0x639f,	// (0x00030f7f) slider_set_pane_g4_copy1

0x63b7,	// (0x00030f97) slider_set_pane_g5_copy1_ParamLimits

0x63b7,	// (0x00030f97) slider_set_pane_g5_copy1

0x638b,	// (0x00030f6b) slider_set_pane_g6_copy1_ParamLimits

0x638b,	// (0x00030f6b) slider_set_pane_g6_copy1

0x73bf,	// (0x00031f9f) slider_set_pane_g7_copy1_ParamLimits

0x73bf,	// (0x00031f9f) slider_set_pane_g7_copy1

0x7539,	// (0x00032119) bg_set_opt_pane_cp2_copy1

0xf154,	// (0x00039d34) setting_slider_graphic_pane_g1_copy1

0xf15d,	// (0x00039d3d) setting_slider_graphic_pane_t1_copy1

0xf16d,	// (0x00039d4d) setting_slider_graphic_pane_t2_copy1

0xf17d,	// (0x00039d5d) slider_set_pane_cp_copy1

0xf18d,	// (0x00039d6d) input_focus_pane_cp1_copy1

0xf196,	// (0x00039d76) list_set_text_pane_copy1

0xf19e,	// (0x00039d7e) setting_text_pane_g1_copy1

0x4c3e,	// (0x0002f81e) set_text_pane_t1_copy1

0xf18d,	// (0x00039d6d) input_focus_pane_cp2_copy1

0xf19e,	// (0x00039d7e) setting_code_pane_g1_copy1

0xf1a7,	// (0x00039d87) setting_code_pane_t1_copy1

0xf1b5,	// (0x00039d95) list_set_graphic_pane_copy1

0x7539,	// (0x00032119) bg_set_opt_pane_cp4_copy1

0x90c6,	// (0x00033ca6) list_set_graphic_pane_g1_copy1_ParamLimits

0x90c6,	// (0x00033ca6) list_set_graphic_pane_g1_copy1

0xf1c8,	// (0x00039da8) list_set_graphic_pane_g2_copy1

0x90de,	// (0x00033cbe) list_set_graphic_pane_t1_copy1_ParamLimits

0x90de,	// (0x00033cbe) list_set_graphic_pane_t1_copy1

0xc213,	// (0x00036df3) rs_clock_indi_pane_g1

0xf1d0,	// (0x00039db0) rs_clock_indi_pane_t1

0xf1de,	// (0x00039dbe) rs_indi_pane

0xf1e6,	// (0x00039dc6) rs_indi_pane_g1

0xf1ef,	// (0x00039dcf) rs_indi_pane_g2

0xf1f8,	// (0x00039dd8) rs_indi_pane_g3

0x0002,

0xfeca,	// (0x0003aaaa) rs_indi_pane_g

0x93cb,	// (0x00033fab) bg_popup_preview_window_pane_cp03

0xf201,	// (0x00039de1) popup_fep_tooltip_window_t1

0xce9b,	// (0x00037a7b) popup_note2_window_g2_ParamLimits

0xce9b,	// (0x00037a7b) popup_note2_window_g2

0x0001,

0xfc63,	// (0x0003a843) popup_note2_window_g_ParamLimits

0xfc63,	// (0x0003a843) popup_note2_window_g

0xd396,	// (0x00037f76) bg_popup_sub_pane_cp11_ParamLimits

0xd3a3,	// (0x00037f83) cell_ai3_links_pane_g1_ParamLimits

0xd3ba,	// (0x00037f9a) cell_ai3_links_pane_t1

0x4c3e,	// (0x0002f81e) set_text_pane_t1_copy1_ParamLimits

0x92dc,	// (0x00033ebc) cell_graphic_popup_pane_cp2_ParamLimits

0x92dc,	// (0x00033ebc) cell_graphic_popup_pane_cp2

0xf20f,	// (0x00039def) cell_graphic_popup_pane_g1_cp2

0x8481,	// (0x00033061) cell_graphic_popup_pane_g2_cp2

0xf217,	// (0x00039df7) cell_graphic_popup_pane_g3_cp2

0xf21f,	// (0x00039dff) cell_graphic_popup_pane_t2_cp2

0x8492,	// (0x00033072) grid_highlight_pane_cp3_cp2

0x8ad3,	// (0x000336b3) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8736,	// (0x00033316) main_tmo_pane_ParamLimits

0xd6ee,	// (0x000382ce) popup_tmo_big_image_note_window

0xe8a5,	// (0x00039485) cell_ai5_widget_list_pane

0xe8ad,	// (0x0003948d) cell_ai5_widget_lrg_icon_pane

0xee4d,	// (0x00039a2d) tmo_note_info_pane_t1_ParamLimits

0xee62,	// (0x00039a42) tmo_note_info_pane_t2_ParamLimits

0xee77,	// (0x00039a57) tmo_note_info_pane_t3_ParamLimits

0xee8c,	// (0x00039a6c) tmo_note_info_pane_t4_ParamLimits

0xee9e,	// (0x00039a7e) tmo_note_info_pane_t5_ParamLimits

0xfeb8,	// (0x0003aa98) tmo_note_info_pane_t_ParamLimits

0xefbc,	// (0x00039b9c) settings_container_pane_ParamLimits

0xf185,	// (0x00039d65) indicator_popup_pane_cp5

0xf185,	// (0x00039d65) indicator_popup_pane_cp6

0xf1b5,	// (0x00039d95) list_set_graphic_pane_copy1_ParamLimits

0x7525,	// (0x00032105) bg_popup_window_pane_cp23

0xf22d,	// (0x00039e0d) popup_tmo_big_image_note_window_g1

0xf237,	// (0x00039e17) popup_tmo_big_image_note_window_t1

0xf247,	// (0x00039e27) popup_tmo_big_image_note_window_t2

0xf257,	// (0x00039e37) popup_tmo_big_image_note_window_t3

0x0002,

0xfed1,	// (0x0003aab1) popup_tmo_big_image_note_window_t

0xc213,	// (0x00036df3) cell_ai5_widget_lrg_icon_pane_g1

0xf267,	// (0x00039e47) cell_ai5_widget_lrg_icon_pane_t1

0xf275,	// (0x00039e55) cell_ai5_widget_list_row_pane_ParamLimits

0xf275,	// (0x00039e55) cell_ai5_widget_list_row_pane

0xf28c,	// (0x00039e6c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf28c,	// (0x00039e6c) cell_ai5_widget_list_row_pane_g1

0xf299,	// (0x00039e79) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf299,	// (0x00039e79) cell_ai5_widget_list_row_pane_t1

0xf2ca,	// (0x00039eaa) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2ca,	// (0x00039eaa) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed8,	// (0x0003aab8) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed8,	// (0x0003aab8) cell_ai5_widget_list_row_pane_t

0x4954,	// (0x0002f534) main_fep_vtchi_ss_pane

0xf312,	// (0x00039ef2) popup_fep_char_pre_window

0xf31a,	// (0x00039efa) popup_fep_ituss_window

0xf346,	// (0x00039f26) popup_fep_vkbss_window

0xf370,	// (0x00039f50) grid_vkbss_keypad_pane_ParamLimits

0xf370,	// (0x00039f50) grid_vkbss_keypad_pane

0xf380,	// (0x00039f60) ituss_keypad_pane

0x73e1,	// (0x00031fc1) aid_vkbss_key_offset_ParamLimits

0x73e1,	// (0x00031fc1) aid_vkbss_key_offset

0x73ed,	// (0x00031fcd) cell_vkbss_key_pane_ParamLimits

0x73ed,	// (0x00031fcd) cell_vkbss_key_pane

0xf38f,	// (0x00039f6f) bg_cell_vkbss_key_g1_ParamLimits

0xf38f,	// (0x00039f6f) bg_cell_vkbss_key_g1

0xf39b,	// (0x00039f7b) cell_vkbss_key_3p_pane_ParamLimits

0xf39b,	// (0x00039f7b) cell_vkbss_key_3p_pane

0xf3af,	// (0x00039f8f) cell_vkbss_key_g1_ParamLimits

0xf3af,	// (0x00039f8f) cell_vkbss_key_g1

0xf3c3,	// (0x00039fa3) cell_vkbss_key_t1_ParamLimits

0xf3c3,	// (0x00039fa3) cell_vkbss_key_t1

0x7403,	// (0x00031fe3) cell_ituss_key_pane_ParamLimits

0x7403,	// (0x00031fe3) cell_ituss_key_pane

0xf3ee,	// (0x00039fce) bg_cell_ituss_key_g1_ParamLimits

0xf3ee,	// (0x00039fce) bg_cell_ituss_key_g1

0xf3fa,	// (0x00039fda) cell_ituss_key_pane_g1_ParamLimits

0xf3fa,	// (0x00039fda) cell_ituss_key_pane_g1

0x7414,	// (0x00031ff4) cell_ituss_key_pane_g2_ParamLimits

0x7414,	// (0x00031ff4) cell_ituss_key_pane_g2

0x0002,

0xfedf,	// (0x0003aabf) cell_ituss_key_pane_g_ParamLimits

0xfedf,	// (0x0003aabf) cell_ituss_key_pane_g

0x7440,	// (0x00032020) cell_ituss_key_t1_ParamLimits

0x7440,	// (0x00032020) cell_ituss_key_t1

0x747a,	// (0x0003205a) cell_ituss_key_t2_ParamLimits

0x747a,	// (0x0003205a) cell_ituss_key_t2

0x74ab,	// (0x0003208b) cell_ituss_key_t3_ParamLimits

0x74ab,	// (0x0003208b) cell_ituss_key_t3

0x747a,	// (0x0003205a) cell_ituss_key_t4_ParamLimits

0x747a,	// (0x0003205a) cell_ituss_key_t4

0x0004,

0xfee6,	// (0x0003aac6) cell_ituss_key_t_ParamLimits

0xfee6,	// (0x0003aac6) cell_ituss_key_t

0xf426,	// (0x0003a006) cell_vkbss_key_3p_pane_g1

0xf42e,	// (0x0003a00e) cell_vkbss_key_3p_pane_g2

0xf436,	// (0x0003a016) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef1,	// (0x0003aad1) cell_vkbss_key_3p_pane_g

0x93cb,	// (0x00033fab) bg_popup_fep_char_preview_window_cp02

0xf43e,	// (0x0003a01e) popup_fep_char_pre_window_t1

0xe82a,	// (0x0003940a) main_ai5_sk_pane

0xef18,	// (0x00039af8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef24,	// (0x00039b04) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc8bd,	// (0x0003749d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef39,	// (0x00039b19) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec3,	// (0x0003aaa3) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef45,	// (0x00039b25) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8736,	// (0x00033316) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf44c,	// (0x0003a02c) main_ai5_sk_pane_g1

0xa0d3,	// (0x00034cb3) popup_query_code_window_g1

0xf330,	// (0x00039f10) popup_fep_vkb_icf_pane

0xf35a,	// (0x00039f3a) popup_fep_vtchi_icf_pane

0xf455,	// (0x0003a035) bg_icf_pane

0xf461,	// (0x0003a041) list_vkb_icf_pane

0xf470,	// (0x0003a050) bg_icf_pane_cp01

0xf483,	// (0x0003a063) vtchi_icf_list_pane

0xf493,	// (0x0003a073) list_vkb_icf_pane_t1_ParamLimits

0xf493,	// (0x0003a073) list_vkb_icf_pane_t1

0xf4b4,	// (0x0003a094) vtchi_icf_list_pane_t1_ParamLimits

0xf4b4,	// (0x0003a094) vtchi_icf_list_pane_t1

0xf31a,	// (0x00039efa) popup_fep_ituss_window_ParamLimits

0xf35a,	// (0x00039f3a) popup_fep_vtchi_icf_pane_ParamLimits

0xf380,	// (0x00039f60) ituss_keypad_pane_ParamLimits

0x73d5,	// (0x00031fb5) ituss_sks_pane

0xf455,	// (0x0003a035) bg_icf_pane_ParamLimits

0xf2f2,	// (0x00039ed2) icf_edit_indi_pane_ParamLimits

0xf2f2,	// (0x00039ed2) icf_edit_indi_pane

0xf461,	// (0x0003a041) list_vkb_icf_pane_ParamLimits

0xf470,	// (0x0003a050) bg_icf_pane_cp01_ParamLimits

0xf305,	// (0x00039ee5) icf_edit_indi_pane_cp01_ParamLimits

0xf305,	// (0x00039ee5) icf_edit_indi_pane_cp01

0xf48b,	// (0x0003a06b) vtchi_query_pane

0xe6b4,	// (0x00039294) icf_edit_indi_pane_g1_ParamLimits

0xe6b4,	// (0x00039294) icf_edit_indi_pane_g1

0xf525,	// (0x0003a105) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0003a105) icf_edit_indi_pane_g2

0x0001,

0xff09,	// (0x0003aae9) icf_edit_indi_pane_g_ParamLimits

0xff09,	// (0x0003aae9) icf_edit_indi_pane_g

0xf537,	// (0x0003a117) icf_edit_indi_pane_t1

0xf4ce,	// (0x0003a0ae) bg_input_focus_pane_cp042

0x8665,	// (0x00033245) vtchi_button_pane

0xf4d7,	// (0x0003a0b7) vtchi_query_pane_t1

0xf4e5,	// (0x0003a0c5) vtchi_query_pane_t2

0xf4f3,	// (0x0003a0d3) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x0003aad8) vtchi_query_pane_t

0x4954,	// (0x0002f534) bg_button_pane_cp13

0xf501,	// (0x0003a0e1) vtchi_button_pane_g1

0x74ee,	// (0x000320ce) ituss_sks_pane_g1

0x74f9,	// (0x000320d9) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x0003aadf) ituss_sks_pane_g

0xf509,	// (0x0003a0e9) ituss_sks_pane_t1

0xf517,	// (0x0003a0f7) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x0003aae4) ituss_sks_pane_t

0xbc9e,	// (0x0003687e) indicator_nsta_pane_cp_g1

0xbca6,	// (0x00036886) indicator_nsta_pane_cp_g2

0xbcae,	// (0x0003688e) indicator_nsta_pane_cp_g3

0xbc9e,	// (0x0003687e) indicator_nsta_pane_cp_g4

0xbca6,	// (0x00036886) indicator_nsta_pane_cp_g5

0xbcae,	// (0x0003688e) indicator_nsta_pane_cp_g6

0x0005,

0xfaa1,	// (0x0003a681) indicator_nsta_pane_cp_g

0xe414,	// (0x00038ff4) cell_graphic2_pane_t2_ParamLimits

0xe414,	// (0x00038ff4) cell_graphic2_pane_t2

0x0001,

0xfdba,	// (0x0003a99a) cell_graphic2_pane_t_ParamLimits

0xfdba,	// (0x0003a99a) cell_graphic2_pane_t

0xe441,	// (0x00039021) cell_graphic2_control_pane_t1

0x8e79,	// (0x00033a59) signal_pane_g3_ParamLimits

0x8e79,	// (0x00033a59) signal_pane_g3

0x8e8b,	// (0x00033a6b) signal_pane_g4_ParamLimits

0x8e8b,	// (0x00033a6b) signal_pane_g4

0xf2dc,	// (0x00039ebc) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2dc,	// (0x00039ebc) cell_ai5_widget_list_row_pane_t3

0xf414,	// (0x00039ff4) cell_ituss_key_pane_t1_ParamLimits

0xf414,	// (0x00039ff4) cell_ituss_key_pane_t1

0x9d18,	// (0x000348f8) form_field_data_wide_pane_vc_t2_ParamLimits

0x9d18,	// (0x000348f8) form_field_data_wide_pane_vc_t2

0x9d2c,	// (0x0003490c) form_field_data_wide_pane_vc_t3_ParamLimits

0x9d2c,	// (0x0003490c) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0003a3e9) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0003a3e9) form_field_data_wide_pane_vc_t

0xb965,	// (0x00036545) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb965,	// (0x00036545) form_field_slider_wide_pane_vc_t3

0xba43,	// (0x00036623) form_field_popup_wide_pane_vc_t2_ParamLimits

0xba43,	// (0x00036623) form_field_popup_wide_pane_vc_t2

0xba5a,	// (0x0003663a) form_field_popup_wide_pane_vc_t3_ParamLimits

0xba5a,	// (0x0003663a) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa90,	// (0x0003a670) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa90,	// (0x0003a670) form_field_popup_wide_pane_vc_t

0x71a9,	// (0x00031d89) aid_fshwr2_btn_pane_ParamLimits

0x71b5,	// (0x00031d95) aid_fshwr2_syb_pane_ParamLimits

0x71c7,	// (0x00031da7) aid_fshwr2_txt_pane_ParamLimits

0x69fb,	// (0x000315db) fshwr2_bg_pane_ParamLimits

0x71d3,	// (0x00031db3) fshwr2_func_candi_pane_ParamLimits

0x71ef,	// (0x00031dcf) fshwr2_hwr_syb_pane_ParamLimits

0x7209,	// (0x00031de9) fshwr2_icf_pane_ParamLimits

0x7a70,	// (0x00032650) list_double_graphic_pane_vc_g4_ParamLimits

0x7a70,	// (0x00032650) list_double_graphic_pane_vc_g4

0x7434,	// (0x00032014) cell_ituss_key_pane_g3_ParamLimits

0x7434,	// (0x00032014) cell_ituss_key_pane_g3

0x74dc,	// (0x000320bc) cell_ituss_key_t5_ParamLimits

0x74dc,	// (0x000320bc) cell_ituss_key_t5

0xf346,	// (0x00039f26) popup_fep_vkbss_window_ParamLimits

0xe834,	// (0x00039414) aid_cell_ai5_quarter

0xf537,	// (0x0003a117) icf_edit_indi_pane_t1_ParamLimits

0x81d2,	// (0x00032db2) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x81d2,	// (0x00032db2) aid_tch_indicator_popup_pane_cp2

0x81e5,	// (0x00032dc5) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x81e5,	// (0x00032dc5) aid_tch_query_popup_data_pane_cp2

0xa07b,	// (0x00034c5b) aid_tch_query_popup_pane_ParamLimits

0xa07b,	// (0x00034c5b) aid_tch_query_popup_pane

0xa07b,	// (0x00034c5b) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xa07b,	// (0x00034c5b) aid_tch_query_popup_data_pane_cp1

0xed7b,	// (0x0003995b) cell_fshwr2_syb_bg_pane_ParamLimits

0x7302,	// (0x00031ee2) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x7316,	// (0x00031ef6) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf330,	// (0x00039f10) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small

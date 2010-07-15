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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000f65d };

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
0xc86c,	// (0x0001bec9) Screen

0xc878,	// (0x0001bed5) application_window_ParamLimits

0xc878,	// (0x0001bed5) application_window

0x25a3,	// (0x00011c00) screen_g1

0xb7ba,	// (0x0001ae17) area_bottom_pane_ParamLimits

0xb7ba,	// (0x0001ae17) area_bottom_pane

0x0139,	// (0x0000f796) area_top_pane_ParamLimits

0x0139,	// (0x0000f796) area_top_pane

0x01d7,	// (0x0000f834) main_pane_ParamLimits

0x01d7,	// (0x0000f834) main_pane

0x25ad,	// (0x00011c0a) misc_graphics

0xd5ac,	// (0x0001cc09) battery_pane_ParamLimits

0xd5ac,	// (0x0001cc09) battery_pane

0x5523,	// (0x00014b80) bg_status_flat_pane_g8

0x552b,	// (0x00014b88) bg_status_flat_pane_g9

0x47f8,	// (0x00013e55) context_pane_ParamLimits

0x47f8,	// (0x00013e55) context_pane

0xd717,	// (0x0001cd74) navi_pane_ParamLimits

0xd717,	// (0x0001cd74) navi_pane

0xd795,	// (0x0001cdf2) signal_pane_ParamLimits

0xd795,	// (0x0001cdf2) signal_pane

0x0008,

0xf86f,	// (0x0001eecc) bg_status_flat_pane_g

0xd825,	// (0x0001ce82) status_pane_g1_ParamLimits

0xd825,	// (0x0001ce82) status_pane_g1

0xd83b,	// (0x0001ce98) status_pane_g2_ParamLimits

0xd83b,	// (0x0001ce98) status_pane_g2

0x4a1f,	// (0x0001407c) status_pane_g3_ParamLimits

0x4a1f,	// (0x0001407c) status_pane_g3

0x0004,

0xf79b,	// (0x0001edf8) status_pane_g_ParamLimits

0xf79b,	// (0x0001edf8) status_pane_g

0xd847,	// (0x0001cea4) title_pane_ParamLimits

0xd847,	// (0x0001cea4) title_pane

0xd8aa,	// (0x0001cf07) uni_indicator_pane_ParamLimits

0xd8aa,	// (0x0001cf07) uni_indicator_pane

0x4656,	// (0x00013cb3) bg_list_pane_ParamLimits

0x4656,	// (0x00013cb3) bg_list_pane

0xd4f7,	// (0x0001cb54) find_pane

0x4cfa,	// (0x00014357) listscroll_app_pane_ParamLimits

0x4cfa,	// (0x00014357) listscroll_app_pane

0x468a,	// (0x00013ce7) listscroll_form_pane

0xbb1c,	// (0x0001b179) listscroll_gen_pane_ParamLimits

0xbb1c,	// (0x0001b179) listscroll_gen_pane

0x0ac8,	// (0x00010125) listscroll_set_pane

0x60cd,	// (0x0001572a) main_idle_act_pane

0x4352,	// (0x000139af) main_idle_trad_pane

0x4352,	// (0x000139af) main_list_empty_pane

0x467e,	// (0x00013cdb) main_midp_pane

0x46a4,	// (0x00013d01) main_pane_g1_ParamLimits

0x46a4,	// (0x00013d01) main_pane_g1

0xbb30,	// (0x0001b18d) popup_ai_message_window_ParamLimits

0xbb30,	// (0x0001b18d) popup_ai_message_window

0xbbc1,	// (0x0001b21e) popup_fep_china_uni_window_ParamLimits

0xbbc1,	// (0x0001b21e) popup_fep_china_uni_window

0x0be0,	// (0x0001023d) popup_fep_japan_candidate_window_ParamLimits

0x0be0,	// (0x0001023d) popup_fep_japan_candidate_window

0x0c00,	// (0x0001025d) popup_fep_japan_predictive_window_ParamLimits

0x0c00,	// (0x0001025d) popup_fep_japan_predictive_window

0xbc1d,	// (0x0001b27a) popup_find_window

0xbc3a,	// (0x0001b297) popup_grid_graphic_window_ParamLimits

0xbc3a,	// (0x0001b297) popup_grid_graphic_window

0x0c67,	// (0x000102c4) popup_large_graphic_colour_window

0xbcd8,	// (0x0001b335) popup_menu_window_ParamLimits

0xbcd8,	// (0x0001b335) popup_menu_window

0xbeaa,	// (0x0001b507) popup_note_image_window

0xbe70,	// (0x0001b4cd) popup_note_wait_window_ParamLimits

0xbe70,	// (0x0001b4cd) popup_note_wait_window

0xbec2,	// (0x0001b51f) popup_note_window_ParamLimits

0xbec2,	// (0x0001b51f) popup_note_window

0xbf68,	// (0x0001b5c5) popup_query_code_window_ParamLimits

0xbf68,	// (0x0001b5c5) popup_query_code_window

0x0eaf,	// (0x0001050c) popup_query_data_code_window_ParamLimits

0x0eaf,	// (0x0001050c) popup_query_data_code_window

0xbfa2,	// (0x0001b5ff) popup_query_data_window_ParamLimits

0xbfa2,	// (0x0001b5ff) popup_query_data_window

0xc024,	// (0x0001b681) popup_query_sat_info_window_ParamLimits

0xc024,	// (0x0001b681) popup_query_sat_info_window

0xc0bb,	// (0x0001b718) popup_snote_single_graphic_window_ParamLimits

0xc0bb,	// (0x0001b718) popup_snote_single_graphic_window

0xc0bb,	// (0x0001b718) popup_snote_single_text_window_ParamLimits

0xc0bb,	// (0x0001b718) popup_snote_single_text_window

0x0f36,	// (0x00010593) popup_sub_window_general

0x1066,	// (0x000106c3) popup_window_general_ParamLimits

0x1066,	// (0x000106c3) popup_window_general

0x46ba,	// (0x00013d17) power_save_pane

0xb9a1,	// (0x0001affe) control_pane_g1_ParamLimits

0xb9a1,	// (0x0001affe) control_pane_g1

0xb9ca,	// (0x0001b027) control_pane_g2_ParamLimits

0xb9ca,	// (0x0001b027) control_pane_g2

0x4619,	// (0x00013c76) control_pane_g3_ParamLimits

0x4619,	// (0x00013c76) control_pane_g3

0x0007,

0xf783,	// (0x0001ede0) control_pane_g_ParamLimits

0xf783,	// (0x0001ede0) control_pane_g

0xba0b,	// (0x0001b068) control_pane_t1_ParamLimits

0xba0b,	// (0x0001b068) control_pane_t1

0xba71,	// (0x0001b0ce) control_pane_t2_ParamLimits

0xba71,	// (0x0001b0ce) control_pane_t2

0x0002,

0xf794,	// (0x0001edf1) control_pane_t_ParamLimits

0xf794,	// (0x0001edf1) control_pane_t

0xd429,	// (0x0001ca86) navi_navi_volume_pane_cp1

0xd431,	// (0x0001ca8e) status_small_icon_pane

0x454e,	// (0x00013bab) status_small_pane_g1_ParamLimits

0x454e,	// (0x00013bab) status_small_pane_g1

0xd439,	// (0x0001ca96) status_small_pane_g2_ParamLimits

0xd439,	// (0x0001ca96) status_small_pane_g2

0xd445,	// (0x0001caa2) status_small_pane_g3_ParamLimits

0xd445,	// (0x0001caa2) status_small_pane_g3

0xd451,	// (0x0001caae) status_small_pane_g4_ParamLimits

0xd451,	// (0x0001caae) status_small_pane_g4

0xd45d,	// (0x0001caba) status_small_pane_g5_ParamLimits

0xd45d,	// (0x0001caba) status_small_pane_g5

0xd46b,	// (0x0001cac8) status_small_pane_g6_ParamLimits

0xd46b,	// (0x0001cac8) status_small_pane_g6

0x0007,

0xf772,	// (0x0001edcf) status_small_pane_g_ParamLimits

0xf772,	// (0x0001edcf) status_small_pane_g

0xd49a,	// (0x0001caf7) status_small_pane_t1

0xd4bc,	// (0x0001cb19) status_small_wait_pane_ParamLimits

0xd4bc,	// (0x0001cb19) status_small_wait_pane

0xd263,	// (0x0001c8c0) aid_levels_signal_ParamLimits

0xd263,	// (0x0001c8c0) aid_levels_signal

0xd27b,	// (0x0001c8d8) signal_pane_g1_ParamLimits

0xd27b,	// (0x0001c8d8) signal_pane_g1

0xd296,	// (0x0001c8f3) signal_pane_g2_ParamLimits

0xd296,	// (0x0001c8f3) signal_pane_g2

0x0003,

0xf703,	// (0x0001ed60) signal_pane_g_ParamLimits

0xf703,	// (0x0001ed60) signal_pane_g

0x3d97,	// (0x000133f4) context_pane_g1

0xc888,	// (0x0001bee5) title_pane_g1

0xc8bf,	// (0x0001bf1c) title_pane_t1

0x2655,	// (0x00011cb2) title_pane_t2

0x267b,	// (0x00011cd8) title_pane_t3

0x0002,

0xf557,	// (0x0001ebb4) title_pane_t

0xd8d2,	// (0x0001cf2f) aid_levels_battery_ParamLimits

0xd8d2,	// (0x0001cf2f) aid_levels_battery

0xd8ee,	// (0x0001cf4b) battery_pane_g1_ParamLimits

0xd8ee,	// (0x0001cf4b) battery_pane_g1

0xd90b,	// (0x0001cf68) battery_pane_g2_ParamLimits

0xd90b,	// (0x0001cf68) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001ee03) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001ee03) battery_pane_g

0xdae2,	// (0x0001d13f) uni_indicator_pane_g1

0xdaf7,	// (0x0001d154) uni_indicator_pane_g2

0xdb0d,	// (0x0001d16a) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x0001ef74) uni_indicator_pane_g

0x41c4,	// (0x00013821) navi_icon_pane_ParamLimits

0x41c4,	// (0x00013821) navi_icon_pane

0x4102,	// (0x0001375f) navi_midp_pane

0x41e0,	// (0x0001383d) navi_navi_pane

0x41ea,	// (0x00013847) navi_text_pane_ParamLimits

0x41ea,	// (0x00013847) navi_text_pane

0x25a3,	// (0x00011c00) status_small_wait_pane_g1

0x2aea,	// (0x00012147) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x0001ef6f) status_small_wait_pane_g

0x5b8a,	// (0x000151e7) navi_navi_icon_text_pane

0x5b92,	// (0x000151ef) navi_navi_pane_g1_ParamLimits

0x5b92,	// (0x000151ef) navi_navi_pane_g1

0x5ba4,	// (0x00015201) navi_navi_pane_g2_ParamLimits

0x5ba4,	// (0x00015201) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x0001ef3d) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x0001ef3d) navi_navi_pane_g

0x5bb6,	// (0x00015213) navi_navi_tabs_pane

0x5bbf,	// (0x0001521c) navi_navi_text_pane

0x5b8a,	// (0x000151e7) navi_navi_volume_pane

0x5b66,	// (0x000151c3) navi_text_pane_t1

0x5b5a,	// (0x000151b7) navi_icon_pane_g1

0x5aad,	// (0x0001510a) navi_navi_text_pane_t1

0x137e,	// (0x000109db) navi_navi_volume_pane_g1

0x1386,	// (0x000109e3) volume_small_pane

0x5a13,	// (0x00015070) navi_navi_icon_text_pane_g1

0x5a1b,	// (0x00015078) navi_navi_icon_text_pane_t1

0x41e0,	// (0x0001383d) navi_tabs_2_long_pane

0x41e0,	// (0x0001383d) navi_tabs_2_pane

0x41e0,	// (0x0001383d) navi_tabs_3_long_pane

0x41e0,	// (0x0001383d) navi_tabs_3_pane

0x41e0,	// (0x0001383d) navi_tabs_4_pane

0x135e,	// (0x000109bb) tabs_2_active_pane_ParamLimits

0x135e,	// (0x000109bb) tabs_2_active_pane

0x136e,	// (0x000109cb) tabs_2_passive_pane_ParamLimits

0x136e,	// (0x000109cb) tabs_2_passive_pane

0x132c,	// (0x00010989) tabs_3_active_pane_ParamLimits

0x132c,	// (0x00010989) tabs_3_active_pane

0x133c,	// (0x00010999) tabs_3_passive_pane_ParamLimits

0x133c,	// (0x00010999) tabs_3_passive_pane

0x134d,	// (0x000109aa) tabs_3_passive_pane_cp_ParamLimits

0x134d,	// (0x000109aa) tabs_3_passive_pane_cp

0x12e8,	// (0x00010945) tabs_4_active_pane_ParamLimits

0x12e8,	// (0x00010945) tabs_4_active_pane

0x12f9,	// (0x00010956) tabs_4_passive_pane_ParamLimits

0x12f9,	// (0x00010956) tabs_4_passive_pane

0x130a,	// (0x00010967) tabs_4_passive_pane_cp_ParamLimits

0x130a,	// (0x00010967) tabs_4_passive_pane_cp

0x131b,	// (0x00010978) tabs_4_passive_pane_cp2_ParamLimits

0x131b,	// (0x00010978) tabs_4_passive_pane_cp2

0x12c4,	// (0x00010921) tabs_2_long_active_pane_ParamLimits

0x12c4,	// (0x00010921) tabs_2_long_active_pane

0x12d6,	// (0x00010933) tabs_2_long_passive_pane_ParamLimits

0x12d6,	// (0x00010933) tabs_2_long_passive_pane

0x1285,	// (0x000108e2) tabs_3_long_active_pane_ParamLimits

0x1285,	// (0x000108e2) tabs_3_long_active_pane

0x1298,	// (0x000108f5) tabs_3_long_passive_pane_ParamLimits

0x1298,	// (0x000108f5) tabs_3_long_passive_pane

0x12b1,	// (0x0001090e) tabs_3_long_passive_pane_cp_ParamLimits

0x12b1,	// (0x0001090e) tabs_3_long_passive_pane_cp

0x122b,	// (0x00010888) volume_small_pane_g1

0x1234,	// (0x00010891) volume_small_pane_g2

0x123d,	// (0x0001089a) volume_small_pane_g3

0x1246,	// (0x000108a3) volume_small_pane_g4

0x124f,	// (0x000108ac) volume_small_pane_g5

0x1258,	// (0x000108b5) volume_small_pane_g6

0x1261,	// (0x000108be) volume_small_pane_g7

0x126a,	// (0x000108c7) volume_small_pane_g8

0x1273,	// (0x000108d0) volume_small_pane_g9

0x127c,	// (0x000108d9) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x0001ef09) volume_small_pane_g

0x2922,	// (0x00011f7f) bg_active_tab_pane_cp2_ParamLimits

0x2922,	// (0x00011f7f) bg_active_tab_pane_cp2

0x269b,	// (0x00011cf8) tabs_3_active_pane_g1

0xc94b,	// (0x0001bfa8) tabs_3_active_pane_t1

0x2922,	// (0x00011f7f) bg_passive_tab_pane_cp2_ParamLimits

0x2922,	// (0x00011f7f) bg_passive_tab_pane_cp2

0x269b,	// (0x00011cf8) tabs_3_passive_pane_g1

0xc94b,	// (0x0001bfa8) tabs_3_passive_pane_t1

0x2922,	// (0x00011f7f) bg_active_tab_pane_cp3_ParamLimits

0x2922,	// (0x00011f7f) bg_active_tab_pane_cp3

0x26b5,	// (0x00011d12) tabs_4_active_pane_g1

0xc95d,	// (0x0001bfba) tabs_4_active_pane_t1

0x2922,	// (0x00011f7f) bg_passive_tab_pane_cp3_ParamLimits

0x2922,	// (0x00011f7f) bg_passive_tab_pane_cp3

0x26b5,	// (0x00011d12) tabs_4_1_passive_pane_g1

0xc95d,	// (0x0001bfba) tabs_4_1_passive_pane_t1

0x467e,	// (0x00013cdb) list_highlight_pane_cp2

0xdba5,	// (0x0001d202) list_set_pane_ParamLimits

0xdba5,	// (0x0001d202) list_set_pane

0xdc3f,	// (0x0001d29c) main_pane_set_t1_ParamLimits

0xdc3f,	// (0x0001d29c) main_pane_set_t1

0xdc5f,	// (0x0001d2bc) main_pane_set_t2_ParamLimits

0xdc5f,	// (0x0001d2bc) main_pane_set_t2

0xdc73,	// (0x0001d2d0) main_pane_set_t3_ParamLimits

0xdc73,	// (0x0001d2d0) main_pane_set_t3

0xdc85,	// (0x0001d2e2) main_pane_set_t4_ParamLimits

0xdc85,	// (0x0001d2e2) main_pane_set_t4

0x0003,

0xf97c,	// (0x0001efd9) main_pane_set_t_ParamLimits

0xf97c,	// (0x0001efd9) main_pane_set_t

0xdc97,	// (0x0001d2f4) setting_code_pane

0xdca1,	// (0x0001d2fe) setting_slider_graphic_pane

0xdca1,	// (0x0001d2fe) setting_slider_pane

0xdca1,	// (0x0001d2fe) setting_text_pane

0xdca1,	// (0x0001d2fe) setting_volume_pane

0x0426,	// (0x0000fa83) volume_set_pane

0x268d,	// (0x00011cea) bg_set_opt_pane_cp

0x042e,	// (0x0000fa8b) setting_slider_pane_t1

0x0447,	// (0x0000faa4) setting_slider_pane_t2

0x0461,	// (0x0000fabe) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001ebbb) setting_slider_pane_t

0x0479,	// (0x0000fad6) slider_set_pane

0x25ad,	// (0x00011c0a) bg_set_opt_pane_cp2

0x26cf,	// (0x00011d2c) setting_slider_graphic_pane_g1

0x048f,	// (0x0000faec) setting_slider_graphic_pane_t1

0x049f,	// (0x0000fafc) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001ebc2) setting_slider_graphic_pane_t

0x04af,	// (0x0000fb0c) slider_set_pane_cp

0x25ad,	// (0x00011c0a) input_focus_pane_cp1

0x60b4,	// (0x00015711) list_set_text_pane

0x25a3,	// (0x00011c00) setting_text_pane_g1

0x25ad,	// (0x00011c0a) input_focus_pane_cp2

0x25a3,	// (0x00011c00) setting_code_pane_g1

0x26d8,	// (0x00011d35) setting_code_pane_t1

0x26e6,	// (0x00011d43) set_text_pane_t1_ParamLimits

0x26e6,	// (0x00011d43) set_text_pane_t1

0x35da,	// (0x00012c37) set_opt_bg_pane_g1

0x35e2,	// (0x00012c3f) set_opt_bg_pane_g2

0x608e,	// (0x000156eb) set_opt_bg_pane_g3

0x35f2,	// (0x00012c4f) set_opt_bg_pane_g4

0x35fa,	// (0x00012c57) set_opt_bg_pane_g5

0x3602,	// (0x00012c5f) set_opt_bg_pane_g6

0x6098,	// (0x000156f5) set_opt_bg_pane_g7

0x60a0,	// (0x000156fd) set_opt_bg_pane_g8

0x60aa,	// (0x00015707) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x0001efc6) set_opt_bg_pane_g

0x6081,	// (0x000156de) slider_set_pane_g1

0x13f3,	// (0x00010a50) slider_set_pane_g2

0x0006,

0xf95a,	// (0x0001efb7) slider_set_pane_g

0x138f,	// (0x000109ec) volume_set_pane_g1

0x1397,	// (0x000109f4) volume_set_pane_g2

0x139f,	// (0x000109fc) volume_set_pane_g3

0x13a7,	// (0x00010a04) volume_set_pane_g4

0x13af,	// (0x00010a0c) volume_set_pane_g5

0x13b7,	// (0x00010a14) volume_set_pane_g6

0x13bf,	// (0x00010a1c) volume_set_pane_g7

0x13c7,	// (0x00010a24) volume_set_pane_g8

0x13cf,	// (0x00010a2c) volume_set_pane_g9

0x13d7,	// (0x00010a34) volume_set_pane_g10

0x0009,

0xf932,	// (0x0001ef8f) volume_set_pane_g

0xc96f,	// (0x0001bfcc) indicator_pane_ParamLimits

0xc96f,	// (0x0001bfcc) indicator_pane

0xc997,	// (0x0001bff4) main_idle_pane_g2_ParamLimits

0xc997,	// (0x0001bff4) main_idle_pane_g2

0xc9cf,	// (0x0001c02c) main_pane_idle_g1_ParamLimits

0xc9cf,	// (0x0001c02c) main_pane_idle_g1

0x2741,	// (0x00011d9e) popup_clock_digital_analogue_window_ParamLimits

0x2741,	// (0x00011d9e) popup_clock_digital_analogue_window

0xc9f6,	// (0x0001c053) soft_indicator_pane_ParamLimits

0xc9f6,	// (0x0001c053) soft_indicator_pane

0xca10,	// (0x0001c06d) wallpaper_pane_ParamLimits

0xca10,	// (0x0001c06d) wallpaper_pane

0x25a3,	// (0x00011c00) wallpaper_pane_g1

0xca22,	// (0x0001c07f) indicator_pane_g1_ParamLimits

0xca22,	// (0x0001c07f) indicator_pane_g1

0x6581,	// (0x00015bde) navi_navi_icon_text_pane_srt_g1

0x2793,	// (0x00011df0) soft_indicator_pane_t1

0x27ad,	// (0x00011e0a) aid_ps_area_pane

0xca38,	// (0x0001c095) aid_ps_clock_pane

0x27cc,	// (0x00011e29) aid_ps_indicator_pane

0x27d8,	// (0x00011e35) indicator_ps_pane_ParamLimits

0x27d8,	// (0x00011e35) indicator_ps_pane

0x27e7,	// (0x00011e44) power_save_pane_g1_ParamLimits

0x27e7,	// (0x00011e44) power_save_pane_g1

0x27f3,	// (0x00011e50) power_save_pane_g2_ParamLimits

0x27f3,	// (0x00011e50) power_save_pane_g2

0x002d,	// (0x0000f68a) aid_navinavi_width_pane

0x27ad,	// (0x00011e0a) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001ebc7) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001ebc7) power_save_pane_g

0x2801,	// (0x00011e5e) power_save_pane_t1_ParamLimits

0x2801,	// (0x00011e5e) power_save_pane_t1

0xca38,	// (0x0001c095) aid_ps_clock_pane_ParamLimits

0x27cc,	// (0x00011e29) aid_ps_indicator_pane_ParamLimits

0x2813,	// (0x00011e70) power_save_pane_t4_ParamLimits

0x2813,	// (0x00011e70) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001ebcc) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001ebcc) power_save_pane_t

0x283d,	// (0x00011e9a) power_save_t3_ParamLimits

0x283d,	// (0x00011e9a) power_save_t3

0x2828,	// (0x00011e85) power_save_t2_ParamLimits

0x2828,	// (0x00011e85) power_save_t2

0x2852,	// (0x00011eaf) indicator_ps_pane_g1

0xca46,	// (0x0001c0a3) ai_gene_pane_ParamLimits

0xca46,	// (0x0001c0a3) ai_gene_pane

0xca5d,	// (0x0001c0ba) ai_links_pane_ParamLimits

0xca5d,	// (0x0001c0ba) ai_links_pane

0xca75,	// (0x0001c0d2) indicator_pane_cp1_ParamLimits

0xca75,	// (0x0001c0d2) indicator_pane_cp1

0xca84,	// (0x0001c0e1) main_pane_idle_g1_cp_ParamLimits

0xca84,	// (0x0001c0e1) main_pane_idle_g1_cp

0x288b,	// (0x00011ee8) popup_ai_links_title_window

0xca9c,	// (0x0001c0f9) soft_indicator_pane_cp1_ParamLimits

0xca9c,	// (0x0001c0f9) soft_indicator_pane_cp1

0x5e53,	// (0x000154b0) ai_links_pane_g1

0x5e5c,	// (0x000154b9) grid_ai_links_pane

0xdad9,	// (0x0001d136) ai_gene_pane_1

0x5e41,	// (0x0001549e) ai_gene_pane_2

0x5e4a,	// (0x000154a7) list_highlight_pane_cp4

0xdab5,	// (0x0001d112) cell_ai_link_pane_ParamLimits

0xdab5,	// (0x0001d112) cell_ai_link_pane

0x5e12,	// (0x0001546f) cell_ai_link_pane_g1

0x2aea,	// (0x00012147) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x0001ef6a) cell_ai_link_pane_g

0x25ad,	// (0x00011c0a) grid_highlight_cp2

0x25ad,	// (0x00011c0a) bg_popup_sub_pane_cp1

0x28ae,	// (0x00011f0b) popup_ai_links_title_window_t1

0x5d60,	// (0x000153bd) ai_gene_pane_1_g1_ParamLimits

0x5d60,	// (0x000153bd) ai_gene_pane_1_g1

0x5d6c,	// (0x000153c9) ai_gene_pane_1_g2_ParamLimits

0x5d6c,	// (0x000153c9) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x0001ef60) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x0001ef60) ai_gene_pane_1_g

0x5d79,	// (0x000153d6) ai_gene_pane_1_t1_ParamLimits

0x5d79,	// (0x000153d6) ai_gene_pane_1_t1

0x5dad,	// (0x0001540a) grid_ai_soft_ind_pane

0x5d4b,	// (0x000153a8) ai_gene_pane_2_t1_ParamLimits

0x5d4b,	// (0x000153a8) ai_gene_pane_2_t1

0xcab0,	// (0x0001c10d) main_pane_empty_t1_ParamLimits

0xcab0,	// (0x0001c10d) main_pane_empty_t1

0xcac8,	// (0x0001c125) main_pane_empty_t2_ParamLimits

0xcac8,	// (0x0001c125) main_pane_empty_t2

0xcadd,	// (0x0001c13a) main_pane_empty_t3_ParamLimits

0xcadd,	// (0x0001c13a) main_pane_empty_t3

0xcaef,	// (0x0001c14c) main_pane_empty_t4_ParamLimits

0xcaef,	// (0x0001c14c) main_pane_empty_t4

0xcb01,	// (0x0001c15e) main_pane_empty_t5_ParamLimits

0xcb01,	// (0x0001c15e) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001ebd1) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001ebd1) main_pane_empty_t

0x36d7,	// (0x00012d34) bg_popup_window_pane_ParamLimits

0x36d7,	// (0x00012d34) bg_popup_window_pane

0x5abb,	// (0x00015118) find_popup_pane_cp2_ParamLimits

0x5abb,	// (0x00015118) find_popup_pane_cp2

0x5ac7,	// (0x00015124) heading_pane_ParamLimits

0x5ac7,	// (0x00015124) heading_pane

0x25ad,	// (0x00011c0a) bg_popup_sub_pane

0xda36,	// (0x0001d093) bg_popup_window_pane_g1_ParamLimits

0xda36,	// (0x0001d093) bg_popup_window_pane_g1

0xda45,	// (0x0001d0a2) bg_popup_window_pane_g2_ParamLimits

0xda45,	// (0x0001d0a2) bg_popup_window_pane_g2

0xda51,	// (0x0001d0ae) bg_popup_window_pane_g3_ParamLimits

0xda51,	// (0x0001d0ae) bg_popup_window_pane_g3

0xda5d,	// (0x0001d0ba) bg_popup_window_pane_g4_ParamLimits

0xda5d,	// (0x0001d0ba) bg_popup_window_pane_g4

0xda6c,	// (0x0001d0c9) bg_popup_window_pane_g5_ParamLimits

0xda6c,	// (0x0001d0c9) bg_popup_window_pane_g5

0xda7c,	// (0x0001d0d9) bg_popup_window_pane_g6_ParamLimits

0xda7c,	// (0x0001d0d9) bg_popup_window_pane_g6

0xda88,	// (0x0001d0e5) bg_popup_window_pane_g7_ParamLimits

0xda88,	// (0x0001d0e5) bg_popup_window_pane_g7

0xda97,	// (0x0001d0f4) bg_popup_window_pane_g8_ParamLimits

0xda97,	// (0x0001d0f4) bg_popup_window_pane_g8

0xdaa6,	// (0x0001d103) bg_popup_window_pane_g9_ParamLimits

0xdaa6,	// (0x0001d103) bg_popup_window_pane_g9

0x5aa1,	// (0x000150fe) bg_popup_window_pane_g10_ParamLimits

0x5aa1,	// (0x000150fe) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x0001ef28) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x0001ef28) bg_popup_window_pane_g

0x59ca,	// (0x00015027) bg_popup_heading_pane_ParamLimits

0x59ca,	// (0x00015027) bg_popup_heading_pane

0x147b,	// (0x00010ad8) tabs_4_passive_pane_cp_srt_ParamLimits

0x147b,	// (0x00010ad8) tabs_4_passive_pane_cp_srt

0x148d,	// (0x00010aea) tabs_4_passive_pane_srt_ParamLimits

0x59de,	// (0x0001503b) heading_pane_g2

0x148d,	// (0x00010aea) tabs_4_passive_pane_srt

0x4cfa,	// (0x00014357) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4cfa,	// (0x00014357) bg_passive_tab_pane_cp3_srt

0x59e6,	// (0x00015043) heading_pane_t1_ParamLimits

0x59e6,	// (0x00015043) heading_pane_t1

0x59fd,	// (0x0001505a) heading_pane_t2_ParamLimits

0x59fd,	// (0x0001505a) heading_pane_t2

0x0001,

0xf8c6,	// (0x0001ef23) heading_pane_t_ParamLimits

0xf8c6,	// (0x0001ef23) heading_pane_t

0x54eb,	// (0x00014b48) bg_popup_heading_pane_g1

0x559a,	// (0x00014bf7) bg_popup_heading_pane_g2

0x55a4,	// (0x00014c01) bg_popup_heading_pane_g3

0x55ae,	// (0x00014c0b) bg_popup_heading_pane_g4

0x55b8,	// (0x00014c15) bg_popup_heading_pane_g5

0x55c2,	// (0x00014c1f) bg_popup_heading_pane_g6

0x55ca,	// (0x00014c27) bg_popup_heading_pane_g7

0x55d2,	// (0x00014c2f) bg_popup_heading_pane_g8

0x55dc,	// (0x00014c39) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x0001eedf) bg_popup_heading_pane_g

0x4bd8,	// (0x00014235) bg_popup_sub_pane_g1

0x4be8,	// (0x00014245) bg_popup_sub_pane_g2

0x4be0,	// (0x0001423d) bg_popup_sub_pane_g3

0x4bf8,	// (0x00014255) bg_popup_sub_pane_g4

0x4bf0,	// (0x0001424d) bg_popup_sub_pane_g5

0x4c00,	// (0x0001425d) bg_popup_sub_pane_g6

0x4c08,	// (0x00014265) bg_popup_sub_pane_g7

0x4c18,	// (0x00014275) bg_popup_sub_pane_g8

0x4c10,	// (0x0001426d) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x0001eeb9) bg_popup_sub_pane_g

0x2922,	// (0x00011f7f) bg_popup_window_pane_cp5_ParamLimits

0x2922,	// (0x00011f7f) bg_popup_window_pane_cp5

0x293e,	// (0x00011f9b) popup_note_window_g1_ParamLimits

0x293e,	// (0x00011f9b) popup_note_window_g1

0x294a,	// (0x00011fa7) popup_note_window_t1_ParamLimits

0x294a,	// (0x00011fa7) popup_note_window_t1

0x2960,	// (0x00011fbd) popup_note_window_t2_ParamLimits

0x2960,	// (0x00011fbd) popup_note_window_t2

0x2976,	// (0x00011fd3) popup_note_window_t3_ParamLimits

0x2976,	// (0x00011fd3) popup_note_window_t3

0x298c,	// (0x00011fe9) popup_note_window_t4_ParamLimits

0x298c,	// (0x00011fe9) popup_note_window_t4

0x29b4,	// (0x00012011) popup_note_window_t5_ParamLimits

0x29b4,	// (0x00012011) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001ebdc) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001ebdc) popup_note_window_t

0x29fe,	// (0x0001205b) bg_popup_window_pane_cp6_ParamLimits

0x29fe,	// (0x0001205b) bg_popup_window_pane_cp6

0x5467,	// (0x00014ac4) popup_note_image_window_g1_ParamLimits

0x5467,	// (0x00014ac4) popup_note_image_window_g1

0x5473,	// (0x00014ad0) popup_note_image_window_g2_ParamLimits

0x5473,	// (0x00014ad0) popup_note_image_window_g2

0x0001,

0xf850,	// (0x0001eead) popup_note_image_window_g_ParamLimits

0xf850,	// (0x0001eead) popup_note_image_window_g

0x548c,	// (0x00014ae9) popup_note_image_window_t1_ParamLimits

0x548c,	// (0x00014ae9) popup_note_image_window_t1

0x54a5,	// (0x00014b02) popup_note_image_window_t2_ParamLimits

0x54a5,	// (0x00014b02) popup_note_image_window_t2

0x54be,	// (0x00014b1b) popup_note_image_window_t3_ParamLimits

0x54be,	// (0x00014b1b) popup_note_image_window_t3

0x0002,

0xf855,	// (0x0001eeb2) popup_note_image_window_t_ParamLimits

0xf855,	// (0x0001eeb2) popup_note_image_window_t

0x5328,	// (0x00014985) bg_popup_window_pane_cp7_ParamLimits

0x5328,	// (0x00014985) bg_popup_window_pane_cp7

0x5358,	// (0x000149b5) popup_note_wait_window_g1_ParamLimits

0x5358,	// (0x000149b5) popup_note_wait_window_g1

0x5364,	// (0x000149c1) popup_note_wait_window_g2_ParamLimits

0x5364,	// (0x000149c1) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x0001ee9b) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x0001ee9b) popup_note_wait_window_g

0x537c,	// (0x000149d9) popup_note_wait_window_t1_ParamLimits

0x537c,	// (0x000149d9) popup_note_wait_window_t1

0x53a3,	// (0x00014a00) popup_note_wait_window_t2_ParamLimits

0x53a3,	// (0x00014a00) popup_note_wait_window_t2

0x53c0,	// (0x00014a1d) popup_note_wait_window_t3_ParamLimits

0x53c0,	// (0x00014a1d) popup_note_wait_window_t3

0x53d3,	// (0x00014a30) popup_note_wait_window_t4_ParamLimits

0x53d3,	// (0x00014a30) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x0001eea2) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x0001eea2) popup_note_wait_window_t

0x53f8,	// (0x00014a55) wait_bar_pane_ParamLimits

0x53f8,	// (0x00014a55) wait_bar_pane

0x25ad,	// (0x00011c0a) wait_anim_pane

0x25ad,	// (0x00011c0a) wait_border_pane

0x25a3,	// (0x00011c00) wait_anim_pane_g1

0x25a3,	// (0x00011c00) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001ed5b) wait_anim_pane_g

0x52cc,	// (0x00014929) wait_border_pane_g1

0x52d7,	// (0x00014934) wait_border_pane_g2

0x52e0,	// (0x0001493d) wait_border_pane_g3

0x0002,

0xf837,	// (0x0001ee94) wait_border_pane_g

0x5137,	// (0x00014794) bg_popup_window_pane_cp16_ParamLimits

0x5137,	// (0x00014794) bg_popup_window_pane_cp16

0x5237,	// (0x00014894) indicator_popup_pane_cp4_ParamLimits

0x5237,	// (0x00014894) indicator_popup_pane_cp4

0x524b,	// (0x000148a8) popup_query_data_window_t1_ParamLimits

0x524b,	// (0x000148a8) popup_query_data_window_t1

0x525d,	// (0x000148ba) popup_query_data_window_t2_ParamLimits

0x525d,	// (0x000148ba) popup_query_data_window_t2

0x5276,	// (0x000148d3) popup_query_data_window_t3_ParamLimits

0x5276,	// (0x000148d3) popup_query_data_window_t3

0x0002,

0xf830,	// (0x0001ee8d) popup_query_data_window_t_ParamLimits

0xf830,	// (0x0001ee8d) popup_query_data_window_t

0x5290,	// (0x000148ed) query_popup_data_pane_ParamLimits

0x5290,	// (0x000148ed) query_popup_data_pane

0x52a4,	// (0x00014901) query_popup_data_pane_cp1_ParamLimits

0x52a4,	// (0x00014901) query_popup_data_pane_cp1

0x5137,	// (0x00014794) bg_popup_window_pane_cp10_ParamLimits

0x5137,	// (0x00014794) bg_popup_window_pane_cp10

0x5169,	// (0x000147c6) indicator_popup_pane_ParamLimits

0x5169,	// (0x000147c6) indicator_popup_pane

0x518b,	// (0x000147e8) popup_query_code_window_t1_ParamLimits

0x518b,	// (0x000147e8) popup_query_code_window_t1

0x51a5,	// (0x00014802) popup_query_code_window_t2_ParamLimits

0x51a5,	// (0x00014802) popup_query_code_window_t2

0x51ee,	// (0x0001484b) popup_query_code_window_t3_ParamLimits

0x51ee,	// (0x0001484b) popup_query_code_window_t3

0x0002,

0xf829,	// (0x0001ee86) popup_query_code_window_t_ParamLimits

0xf829,	// (0x0001ee86) popup_query_code_window_t

0x521d,	// (0x0001487a) query_popup_pane_ParamLimits

0x521d,	// (0x0001487a) query_popup_pane

0x29fe,	// (0x0001205b) bg_popup_window_pane_cp15_ParamLimits

0x29fe,	// (0x0001205b) bg_popup_window_pane_cp15

0x2a1c,	// (0x00012079) indicator_popup_pane_cp1_ParamLimits

0x2a1c,	// (0x00012079) indicator_popup_pane_cp1

0x2a2f,	// (0x0001208c) indicator_popup_pane_cp2_ParamLimits

0x2a2f,	// (0x0001208c) indicator_popup_pane_cp2

0x2a42,	// (0x0001209f) popup_query_data_code_window_g1_ParamLimits

0x2a42,	// (0x0001209f) popup_query_data_code_window_g1

0x2a55,	// (0x000120b2) popup_query_data_code_window_t1_ParamLimits

0x2a55,	// (0x000120b2) popup_query_data_code_window_t1

0x2a67,	// (0x000120c4) popup_query_data_code_window_t2_ParamLimits

0x2a67,	// (0x000120c4) popup_query_data_code_window_t2

0x2a79,	// (0x000120d6) popup_query_data_code_window_t3_ParamLimits

0x2a79,	// (0x000120d6) popup_query_data_code_window_t3

0x2a8f,	// (0x000120ec) popup_query_data_code_window_t4_ParamLimits

0x2a8f,	// (0x000120ec) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001ebe7) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001ebe7) popup_query_data_code_window_t

0x113c,	// (0x00010799) list_single_midp_graphic_pane_g3

0x2aa7,	// (0x00012104) query_popup_data_pane_cp2_ParamLimits

0x2aba,	// (0x00012117) query_popup_pane_cp2_ParamLimits

0x2aba,	// (0x00012117) query_popup_pane_cp2

0x25ad,	// (0x00011c0a) bg_popup_window_pane_cp11

0x5123,	// (0x00014780) heading_pane_cp5

0x2ba5,	// (0x00012202) listscroll_popup_info_pane

0x25ad,	// (0x00011c0a) input_focus_pane_cp3

0x2acd,	// (0x0001212a) query_popup_pane_t1

0x2adb,	// (0x00012138) list_popup_info_pane_ParamLimits

0x2adb,	// (0x00012138) list_popup_info_pane

0x2aea,	// (0x00012147) listscroll_popup_info_pane_g1

0x2af2,	// (0x0001214f) scroll_pane_cp7

0x2afc,	// (0x00012159) popup_info_list_pane_t1_ParamLimits

0x2afc,	// (0x00012159) popup_info_list_pane_t1

0x2b16,	// (0x00012173) popup_info_list_pane_t2_ParamLimits

0x2b16,	// (0x00012173) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001ebf0) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001ebf0) popup_info_list_pane_t

0x25ad,	// (0x00011c0a) bg_popup_window_pane_cp12

0x659b,	// (0x00015bf8) find_popup_pane

0x268d,	// (0x00011cea) bg_popup_window_pane_cp3

0x2b30,	// (0x0001218d) heading_pane_cp3

0x2b3c,	// (0x00012199) listscroll_popup_graphic_pane

0x25ad,	// (0x00011c0a) bg_popup_window_pane_cp4

0xcb63,	// (0x0001c1c0) heading_pane_cp4

0x2ba5,	// (0x00012202) listscroll_popup_colour_pane

0x2bad,	// (0x0001220a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x2bad,	// (0x0001220a) cell_large_graphic_colour_none_popup_pane

0xcb6b,	// (0x0001c1c8) grid_large_graphic_colour_popup_pane_ParamLimits

0xcb6b,	// (0x0001c1c8) grid_large_graphic_colour_popup_pane

0x2bed,	// (0x0001224a) listscroll_popup_colour_pane_g1_ParamLimits

0x2bed,	// (0x0001224a) listscroll_popup_colour_pane_g1

0x2c04,	// (0x00012261) listscroll_popup_colour_pane_g2_ParamLimits

0x2c04,	// (0x00012261) listscroll_popup_colour_pane_g2

0x2c1b,	// (0x00012278) listscroll_popup_colour_pane_g3_ParamLimits

0x2c1b,	// (0x00012278) listscroll_popup_colour_pane_g3

0xcb8f,	// (0x0001c1ec) listscroll_popup_colour_pane_g4_ParamLimits

0xcb8f,	// (0x0001c1ec) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001ebf5) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001ebf5) listscroll_popup_colour_pane_g

0x2c3f,	// (0x0001229c) scroll_pane_cp6_ParamLimits

0x2c3f,	// (0x0001229c) scroll_pane_cp6

0xcb9f,	// (0x0001c1fc) cell_large_graphic_colour_popup_pane_ParamLimits

0xcb9f,	// (0x0001c1fc) cell_large_graphic_colour_popup_pane

0x2c70,	// (0x000122cd) cell_large_graphic_colour_none_popup_pane_t1

0x25ad,	// (0x00011c0a) grid_highlight_pane_cp5

0x2c7f,	// (0x000122dc) cell_large_graphic_colour_popup_pane_g1

0x2c87,	// (0x000122e4) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001ebfe) cell_large_graphic_colour_popup_pane_g

0x2c8f,	// (0x000122ec) cell_large_graphic_colour_popup_pane_g2_copy1

0x2c98,	// (0x000122f5) grid_highlight_pane_cp4

0x2ca0,	// (0x000122fd) bg_popup_window_pane_cp8_ParamLimits

0x2ca0,	// (0x000122fd) bg_popup_window_pane_cp8

0x2cbb,	// (0x00012318) popup_snote_single_text_window_g1_ParamLimits

0x2cbb,	// (0x00012318) popup_snote_single_text_window_g1

0x2ccd,	// (0x0001232a) popup_snote_single_text_window_t1_ParamLimits

0x2ccd,	// (0x0001232a) popup_snote_single_text_window_t1

0x2ce0,	// (0x0001233d) popup_snote_single_text_window_t2_ParamLimits

0x2ce0,	// (0x0001233d) popup_snote_single_text_window_t2

0x2cf3,	// (0x00012350) popup_snote_single_text_window_t3_ParamLimits

0x2cf3,	// (0x00012350) popup_snote_single_text_window_t3

0x2d2c,	// (0x00012389) popup_snote_single_text_window_t4_ParamLimits

0x2d2c,	// (0x00012389) popup_snote_single_text_window_t4

0x2d60,	// (0x000123bd) popup_snote_single_text_window_t5_ParamLimits

0x2d60,	// (0x000123bd) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001ec03) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001ec03) popup_snote_single_text_window_t

0x2d8f,	// (0x000123ec) bg_popup_window_pane_cp9_ParamLimits

0x2d8f,	// (0x000123ec) bg_popup_window_pane_cp9

0x2cbb,	// (0x00012318) popup_snote_single_graphic_window_g1_ParamLimits

0x2cbb,	// (0x00012318) popup_snote_single_graphic_window_g1

0x2d9d,	// (0x000123fa) popup_snote_single_graphic_window_g2_ParamLimits

0x2d9d,	// (0x000123fa) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001ec0e) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001ec0e) popup_snote_single_graphic_window_g

0x2da9,	// (0x00012406) popup_snote_single_graphic_window_t1_ParamLimits

0x2da9,	// (0x00012406) popup_snote_single_graphic_window_t1

0x2dbc,	// (0x00012419) popup_snote_single_graphic_window_t2_ParamLimits

0x2dbc,	// (0x00012419) popup_snote_single_graphic_window_t2

0x2dcf,	// (0x0001242c) popup_snote_single_graphic_window_t3_ParamLimits

0x2dcf,	// (0x0001242c) popup_snote_single_graphic_window_t3

0x2e08,	// (0x00012465) popup_snote_single_graphic_window_t4_ParamLimits

0x2e08,	// (0x00012465) popup_snote_single_graphic_window_t4

0x2e3c,	// (0x00012499) popup_snote_single_graphic_window_t5_ParamLimits

0x2e3c,	// (0x00012499) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001ec13) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001ec13) popup_snote_single_graphic_window_t

0x64dd,	// (0x00015b3a) grid_graphic_popup_pane_ParamLimits

0x64dd,	// (0x00015b3a) grid_graphic_popup_pane

0x6507,	// (0x00015b64) listscroll_popup_graphic_pane_g1_ParamLimits

0x6507,	// (0x00015b64) listscroll_popup_graphic_pane_g1

0xddee,	// (0x0001d44b) listscroll_popup_graphic_pane_g2_ParamLimits

0xddee,	// (0x0001d44b) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x0001f003) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x0001f003) listscroll_popup_graphic_pane_g

0x652f,	// (0x00015b8c) scroll_pane_cp5

0xdd93,	// (0x0001d3f0) cell_graphic_popup_pane_ParamLimits

0xdd93,	// (0x0001d3f0) cell_graphic_popup_pane

0x645d,	// (0x00015aba) cell_graphic_popup_pane_g1

0x6465,	// (0x00015ac2) cell_graphic_popup_pane_g2

0x2c8f,	// (0x000122ec) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x0001effc) cell_graphic_popup_pane_g

0x646e,	// (0x00015acb) cell_graphic_popup_pane_t2

0x2c98,	// (0x000122f5) grid_highlight_pane_cp3

0x2e7d,	// (0x000124da) list_gen_pane_ParamLimits

0x2e7d,	// (0x000124da) list_gen_pane

0x2eaf,	// (0x0001250c) scroll_pane

0xdd4a,	// (0x0001d3a7) bg_list_pane_g1_ParamLimits

0xdd4a,	// (0x0001d3a7) bg_list_pane_g1

0x63d2,	// (0x00015a2f) bg_list_pane_g2_ParamLimits

0x63d2,	// (0x00015a2f) bg_list_pane_g2

0x63e7,	// (0x00015a44) bg_list_pane_g3_ParamLimits

0x63e7,	// (0x00015a44) bg_list_pane_g3

0x63fb,	// (0x00015a58) bg_list_pane_g4_ParamLimits

0x63fb,	// (0x00015a58) bg_list_pane_g4

0xdd67,	// (0x0001d3c4) bg_list_pane_g5_ParamLimits

0xdd67,	// (0x0001d3c4) bg_list_pane_g5

0x0004,

0xf994,	// (0x0001eff1) bg_list_pane_g_ParamLimits

0xf994,	// (0x0001eff1) bg_list_pane_g

0xdcf0,	// (0x0001d34d) list_double2_graphic_large_graphic_pane_ParamLimits

0xdcf0,	// (0x0001d34d) list_double2_graphic_large_graphic_pane

0xdcf0,	// (0x0001d34d) list_double2_graphic_pane_ParamLimits

0xdcf0,	// (0x0001d34d) list_double2_graphic_pane

0xdcf0,	// (0x0001d34d) list_double2_large_graphic_pane_ParamLimits

0xdcf0,	// (0x0001d34d) list_double2_large_graphic_pane

0xdcf0,	// (0x0001d34d) list_double2_pane_ParamLimits

0xdcf0,	// (0x0001d34d) list_double2_pane

0xdcf0,	// (0x0001d34d) list_double_graphic_heading_pane_ParamLimits

0xdcf0,	// (0x0001d34d) list_double_graphic_heading_pane

0xdcf0,	// (0x0001d34d) list_double_graphic_pane_ParamLimits

0xdcf0,	// (0x0001d34d) list_double_graphic_pane

0xdcf0,	// (0x0001d34d) list_double_heading_pane_ParamLimits

0xdcf0,	// (0x0001d34d) list_double_heading_pane

0xdcf0,	// (0x0001d34d) list_double_large_graphic_pane_ParamLimits

0xdcf0,	// (0x0001d34d) list_double_large_graphic_pane

0xdcf0,	// (0x0001d34d) list_double_number_pane_ParamLimits

0xdcf0,	// (0x0001d34d) list_double_number_pane

0xdcf0,	// (0x0001d34d) list_double_pane_ParamLimits

0xdcf0,	// (0x0001d34d) list_double_pane

0xdcf0,	// (0x0001d34d) list_double_time_pane_ParamLimits

0xdcf0,	// (0x0001d34d) list_double_time_pane

0xdcf0,	// (0x0001d34d) list_setting_number_pane_ParamLimits

0xdcf0,	// (0x0001d34d) list_setting_number_pane

0xdcf0,	// (0x0001d34d) list_setting_pane_ParamLimits

0xdcf0,	// (0x0001d34d) list_setting_pane

0xdd02,	// (0x0001d35f) list_single_2graphic_pane_ParamLimits

0xdd02,	// (0x0001d35f) list_single_2graphic_pane

0xdd02,	// (0x0001d35f) list_single_graphic_heading_pane_ParamLimits

0xdd02,	// (0x0001d35f) list_single_graphic_heading_pane

0xdd02,	// (0x0001d35f) list_single_graphic_pane_ParamLimits

0xdd02,	// (0x0001d35f) list_single_graphic_pane

0xdd02,	// (0x0001d35f) list_single_heading_pane_ParamLimits

0xdd02,	// (0x0001d35f) list_single_heading_pane

0xdd02,	// (0x0001d35f) list_single_large_graphic_pane_ParamLimits

0xdd02,	// (0x0001d35f) list_single_large_graphic_pane

0xdd02,	// (0x0001d35f) list_single_number_heading_pane_ParamLimits

0xdd02,	// (0x0001d35f) list_single_number_heading_pane

0xdd02,	// (0x0001d35f) list_single_number_pane_ParamLimits

0xdd02,	// (0x0001d35f) list_single_number_pane

0xdd02,	// (0x0001d35f) list_single_pane_ParamLimits

0xdd02,	// (0x0001d35f) list_single_pane

0x25ad,	// (0x00011c0a) list_highlight_pane_cp1

0x428b,	// (0x000138e8) list_single_pane_g1_ParamLimits

0x428b,	// (0x000138e8) list_single_pane_g1

0x4b5a,	// (0x000141b7) list_single_pane_g2_ParamLimits

0x4b5a,	// (0x000141b7) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001ec25) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001ec25) list_single_pane_g

0x6bb8,	// (0x00016215) list_single_pane_t1_ParamLimits

0x6bb8,	// (0x00016215) list_single_pane_t1

0x428b,	// (0x000138e8) list_single_number_pane_g1_ParamLimits

0x428b,	// (0x000138e8) list_single_number_pane_g1

0x4b5a,	// (0x000141b7) list_single_number_pane_g2_ParamLimits

0x4b5a,	// (0x000141b7) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001ec25) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001ec25) list_single_number_pane_g

0x4b66,	// (0x000141c3) list_single_number_pane_t1_ParamLimits

0x4b66,	// (0x000141c3) list_single_number_pane_t1

0xdb41,	// (0x0001d19e) list_single_number_pane_t2_ParamLimits

0xdb41,	// (0x0001d19e) list_single_number_pane_t2

0x0001,

0xf955,	// (0x0001efb2) list_single_number_pane_t_ParamLimits

0xf955,	// (0x0001efb2) list_single_number_pane_t

0xcbc8,	// (0x0001c225) list_single_graphic_pane_g1_ParamLimits

0xcbc8,	// (0x0001c225) list_single_graphic_pane_g1

0x428b,	// (0x000138e8) list_single_graphic_pane_g2_ParamLimits

0x428b,	// (0x000138e8) list_single_graphic_pane_g2

0x4b5a,	// (0x000141b7) list_single_graphic_pane_g3_ParamLimits

0x4b5a,	// (0x000141b7) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001ec1e) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001ec1e) list_single_graphic_pane_g

0xcbd4,	// (0x0001c231) list_single_graphic_pane_t1_ParamLimits

0xcbd4,	// (0x0001c231) list_single_graphic_pane_t1

0x428b,	// (0x000138e8) list_single_heading_pane_g1_ParamLimits

0x428b,	// (0x000138e8) list_single_heading_pane_g1

0x4b5a,	// (0x000141b7) list_single_heading_pane_g2_ParamLimits

0x4b5a,	// (0x000141b7) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001ec25) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001ec25) list_single_heading_pane_g

0xcbea,	// (0x0001c247) list_single_heading_pane_t1_ParamLimits

0xcbea,	// (0x0001c247) list_single_heading_pane_t1

0xcc00,	// (0x0001c25d) list_single_heading_pane_t2_ParamLimits

0xcc00,	// (0x0001c25d) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001ec2a) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001ec2a) list_single_heading_pane_t

0x428b,	// (0x000138e8) list_single_number_heading_pane_g1_ParamLimits

0x428b,	// (0x000138e8) list_single_number_heading_pane_g1

0x4b5a,	// (0x000141b7) list_single_number_heading_pane_g2_ParamLimits

0x4b5a,	// (0x000141b7) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001ec25) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001ec25) list_single_number_heading_pane_g

0xcbea,	// (0x0001c247) list_single_number_heading_pane_t1_ParamLimits

0xcbea,	// (0x0001c247) list_single_number_heading_pane_t1

0x6b6c,	// (0x000161c9) list_single_number_heading_pane_t2_ParamLimits

0x6b6c,	// (0x000161c9) list_single_number_heading_pane_t2

0x6b7e,	// (0x000161db) list_single_number_heading_pane_t3_ParamLimits

0x6b7e,	// (0x000161db) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001ec2f) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001ec2f) list_single_number_heading_pane_t

0x4b4e,	// (0x000141ab) list_single_graphic_heading_pane_g1_ParamLimits

0x4b4e,	// (0x000141ab) list_single_graphic_heading_pane_g1

0xcc12,	// (0x0001c26f) list_single_graphic_heading_pane_g4_ParamLimits

0xcc12,	// (0x0001c26f) list_single_graphic_heading_pane_g4

0x4b5a,	// (0x000141b7) list_single_graphic_heading_pane_g5_ParamLimits

0x4b5a,	// (0x000141b7) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001ec36) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001ec36) list_single_graphic_heading_pane_g

0xcbea,	// (0x0001c247) list_single_graphic_heading_pane_t1_ParamLimits

0xcbea,	// (0x0001c247) list_single_graphic_heading_pane_t1

0xcc23,	// (0x0001c280) list_single_graphic_heading_pane_t2_ParamLimits

0xcc23,	// (0x0001c280) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001ec3d) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001ec3d) list_single_graphic_heading_pane_t

0x6bce,	// (0x0001622b) list_single_large_graphic_pane_g1_ParamLimits

0x6bce,	// (0x0001622b) list_single_large_graphic_pane_g1

0x428b,	// (0x000138e8) list_single_large_graphic_pane_g2_ParamLimits

0x428b,	// (0x000138e8) list_single_large_graphic_pane_g2

0x4b5a,	// (0x000141b7) list_single_large_graphic_pane_g3_ParamLimits

0x4b5a,	// (0x000141b7) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001ec42) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001ec42) list_single_large_graphic_pane_g

0x52d7,	// (0x00014934) wait_border_pane_g2_copy1

0xcc35,	// (0x0001c292) list_single_large_graphic_pane_g4_cp2

0x6bda,	// (0x00016237) list_single_large_graphic_pane_t1_ParamLimits

0x6bda,	// (0x00016237) list_single_large_graphic_pane_t1

0x589c,	// (0x00014ef9) list_double_pane_g1_ParamLimits

0x589c,	// (0x00014ef9) list_double_pane_g1

0xcc3d,	// (0x0001c29a) list_double_pane_g2_ParamLimits

0xcc3d,	// (0x0001c29a) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001ec49) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001ec49) list_double_pane_g

0x848c,	// (0x00017ae9) list_double_pane_t1_ParamLimits

0x848c,	// (0x00017ae9) list_double_pane_t1

0xcc49,	// (0x0001c2a6) list_double_pane_t2_ParamLimits

0xcc49,	// (0x0001c2a6) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001ec4e) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001ec4e) list_double_pane_t

0xcc5b,	// (0x0001c2b8) list_double2_pane_g1_ParamLimits

0xcc5b,	// (0x0001c2b8) list_double2_pane_g1

0xcc6c,	// (0x0001c2c9) list_double2_pane_g2_ParamLimits

0xcc6c,	// (0x0001c2c9) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001ec53) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001ec53) list_double2_pane_g

0xcc78,	// (0x0001c2d5) list_double2_pane_t1_ParamLimits

0xcc78,	// (0x0001c2d5) list_double2_pane_t1

0xcc8e,	// (0x0001c2eb) list_double2_pane_t2_ParamLimits

0xcc8e,	// (0x0001c2eb) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001ec58) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001ec58) list_double2_pane_t

0x589c,	// (0x00014ef9) list_double_number_pane_g1_ParamLimits

0x589c,	// (0x00014ef9) list_double_number_pane_g1

0xcc3d,	// (0x0001c29a) list_double_number_pane_g2_ParamLimits

0xcc3d,	// (0x0001c29a) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001ec49) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001ec49) list_double_number_pane_g

0xcca0,	// (0x0001c2fd) list_double_number_pane_t1_ParamLimits

0xcca0,	// (0x0001c2fd) list_double_number_pane_t1

0xccb2,	// (0x0001c30f) list_double_number_pane_t2_ParamLimits

0xccb2,	// (0x0001c30f) list_double_number_pane_t2

0xccc8,	// (0x0001c325) list_double_number_pane_t3_ParamLimits

0xccc8,	// (0x0001c325) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001ec5d) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001ec5d) list_double_number_pane_t

0xccda,	// (0x0001c337) list_double_graphic_pane_g1_ParamLimits

0xccda,	// (0x0001c337) list_double_graphic_pane_g1

0xcce6,	// (0x0001c343) list_double_graphic_pane_g2_ParamLimits

0xcce6,	// (0x0001c343) list_double_graphic_pane_g2

0xccf5,	// (0x0001c352) list_double_graphic_pane_g3_ParamLimits

0xccf5,	// (0x0001c352) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001ec64) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001ec64) list_double_graphic_pane_g

0xcd0d,	// (0x0001c36a) list_double_graphic_pane_t1_ParamLimits

0xcd0d,	// (0x0001c36a) list_double_graphic_pane_t1

0xcd23,	// (0x0001c380) list_double_graphic_pane_t2_ParamLimits

0xcd23,	// (0x0001c380) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001ec6d) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001ec6d) list_double_graphic_pane_t

0xcd35,	// (0x0001c392) list_double2_graphic_pane_g1_ParamLimits

0xcd35,	// (0x0001c392) list_double2_graphic_pane_g1

0x4176,	// (0x000137d3) list_double2_graphic_pane_g2_ParamLimits

0x4176,	// (0x000137d3) list_double2_graphic_pane_g2

0xcc6c,	// (0x0001c2c9) list_double2_graphic_pane_g3_ParamLimits

0xcc6c,	// (0x0001c2c9) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001ec72) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001ec72) list_double2_graphic_pane_g

0xcd41,	// (0x0001c39e) list_double2_graphic_pane_t1_ParamLimits

0xcd41,	// (0x0001c39e) list_double2_graphic_pane_t1

0xcd57,	// (0x0001c3b4) list_double2_graphic_pane_t2_ParamLimits

0xcd57,	// (0x0001c3b4) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001ec79) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001ec79) list_double2_graphic_pane_t

0xcd69,	// (0x0001c3c6) list_double_large_graphic_pane_g1_ParamLimits

0xcd69,	// (0x0001c3c6) list_double_large_graphic_pane_g1

0xcd88,	// (0x0001c3e5) list_double_large_graphic_pane_g2_ParamLimits

0xcd88,	// (0x0001c3e5) list_double_large_graphic_pane_g2

0xcc3d,	// (0x0001c29a) list_double_large_graphic_pane_g3_ParamLimits

0xcc3d,	// (0x0001c29a) list_double_large_graphic_pane_g3

0xcd99,	// (0x0001c3f6) list_double_large_graphic_pane_g4_ParamLimits

0xcd99,	// (0x0001c3f6) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001ec7e) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001ec7e) list_double_large_graphic_pane_g

0xcdab,	// (0x0001c408) list_double_large_graphic_pane_t1_ParamLimits

0xcdab,	// (0x0001c408) list_double_large_graphic_pane_t1

0xcdc4,	// (0x0001c421) list_double_large_graphic_pane_t2_ParamLimits

0xcdc4,	// (0x0001c421) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001ec89) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001ec89) list_double_large_graphic_pane_t

0xcdd6,	// (0x0001c433) list_double2_large_graphic_pane_g1_ParamLimits

0xcdd6,	// (0x0001c433) list_double2_large_graphic_pane_g1

0xcc5b,	// (0x0001c2b8) list_double2_large_graphic_pane_g2_ParamLimits

0xcc5b,	// (0x0001c2b8) list_double2_large_graphic_pane_g2

0xcc6c,	// (0x0001c2c9) list_double2_large_graphic_pane_g3_ParamLimits

0xcc6c,	// (0x0001c2c9) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001ec8e) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001ec8e) list_double2_large_graphic_pane_g

0xcde2,	// (0x0001c43f) list_double2_large_graphic_pane_t1_ParamLimits

0xcde2,	// (0x0001c43f) list_double2_large_graphic_pane_t1

0xcdf8,	// (0x0001c455) list_double2_large_graphic_pane_t2_ParamLimits

0xcdf8,	// (0x0001c455) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001ec95) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001ec95) list_double2_large_graphic_pane_t

0xce0a,	// (0x0001c467) list_double_heading_pane_g1_ParamLimits

0xce0a,	// (0x0001c467) list_double_heading_pane_g1

0xce1b,	// (0x0001c478) list_double_heading_pane_g2_ParamLimits

0xce1b,	// (0x0001c478) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001ec9a) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001ec9a) list_double_heading_pane_g

0xce27,	// (0x0001c484) list_double_heading_pane_t1_ParamLimits

0xce27,	// (0x0001c484) list_double_heading_pane_t1

0xce3d,	// (0x0001c49a) list_double_heading_pane_t2_ParamLimits

0xce3d,	// (0x0001c49a) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001ec9f) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001ec9f) list_double_heading_pane_t

0x3099,	// (0x000126f6) list_double_graphic_heading_pane_g1_ParamLimits

0x3099,	// (0x000126f6) list_double_graphic_heading_pane_g1

0xce0a,	// (0x0001c467) list_double_graphic_heading_pane_g2_ParamLimits

0xce0a,	// (0x0001c467) list_double_graphic_heading_pane_g2

0xce1b,	// (0x0001c478) list_double_graphic_heading_pane_g3_ParamLimits

0xce1b,	// (0x0001c478) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001eca4) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001eca4) list_double_graphic_heading_pane_g

0xce4f,	// (0x0001c4ac) list_double_graphic_heading_pane_t1_ParamLimits

0xce4f,	// (0x0001c4ac) list_double_graphic_heading_pane_t1

0xce65,	// (0x0001c4c2) list_double_graphic_heading_pane_t2_ParamLimits

0xce65,	// (0x0001c4c2) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001ecab) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001ecab) list_double_graphic_heading_pane_t

0xcd88,	// (0x0001c3e5) list_double_time_pane_g1_ParamLimits

0xcd88,	// (0x0001c3e5) list_double_time_pane_g1

0xcc3d,	// (0x0001c29a) list_double_time_pane_g2_ParamLimits

0xcc3d,	// (0x0001c29a) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001ecb0) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001ecb0) list_double_time_pane_g

0xce77,	// (0x0001c4d4) list_double_time_pane_t1_ParamLimits

0xce77,	// (0x0001c4d4) list_double_time_pane_t1

0xce8d,	// (0x0001c4ea) list_double_time_pane_t2_ParamLimits

0xce8d,	// (0x0001c4ea) list_double_time_pane_t2

0xce9f,	// (0x0001c4fc) list_double_time_pane_t3_ParamLimits

0xce9f,	// (0x0001c4fc) list_double_time_pane_t3

0xceb1,	// (0x0001c50e) list_double_time_pane_t4_ParamLimits

0xceb1,	// (0x0001c50e) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001ecb5) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001ecb5) list_double_time_pane_t

0x4176,	// (0x000137d3) list_setting_pane_g1_ParamLimits

0x4176,	// (0x000137d3) list_setting_pane_g1

0xcc6c,	// (0x0001c2c9) list_setting_pane_g2_ParamLimits

0xcc6c,	// (0x0001c2c9) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001ecbe) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001ecbe) list_setting_pane_g

0xcec3,	// (0x0001c520) list_setting_pane_t1_ParamLimits

0xcec3,	// (0x0001c520) list_setting_pane_t1

0xceda,	// (0x0001c537) list_setting_pane_t2_ParamLimits

0xceda,	// (0x0001c537) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001ecc3) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001ecc3) list_setting_pane_t

0xcf19,	// (0x0001c576) set_value_pane_cp_ParamLimits

0xcf19,	// (0x0001c576) set_value_pane_cp

0x4176,	// (0x000137d3) list_setting_number_pane_g1_ParamLimits

0x4176,	// (0x000137d3) list_setting_number_pane_g1

0xcc6c,	// (0x0001c2c9) list_setting_number_pane_g2_ParamLimits

0xcc6c,	// (0x0001c2c9) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001ecbe) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001ecbe) list_setting_number_pane_g

0xcf25,	// (0x0001c582) list_setting_number_pane_t1_ParamLimits

0xcf25,	// (0x0001c582) list_setting_number_pane_t1

0xcf39,	// (0x0001c596) list_setting_number_pane_t2_ParamLimits

0xcf39,	// (0x0001c596) list_setting_number_pane_t2

0xcf50,	// (0x0001c5ad) list_setting_number_pane_t3_ParamLimits

0xcf50,	// (0x0001c5ad) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001ecca) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001ecca) list_setting_number_pane_t

0xcf19,	// (0x0001c576) set_value_pane_ParamLimits

0xcf19,	// (0x0001c576) set_value_pane

0x337e,	// (0x000129db) bg_set_opt_pane_ParamLimits

0x337e,	// (0x000129db) bg_set_opt_pane

0x339f,	// (0x000129fc) set_value_pane_t1

0x33ad,	// (0x00012a0a) slider_set_pane_cp3

0x33b6,	// (0x00012a13) volume_small_pane_cp

0x33bf,	// (0x00012a1c) list_form_gen_pane

0x33c8,	// (0x00012a25) scroll_pane_cp8

0xcf93,	// (0x0001c5f0) form_field_data_pane_ParamLimits

0xcf93,	// (0x0001c5f0) form_field_data_pane

0xcfaa,	// (0x0001c607) form_field_data_wide_pane_ParamLimits

0xcfaa,	// (0x0001c607) form_field_data_wide_pane

0xcfca,	// (0x0001c627) form_field_popup_pane_ParamLimits

0xcfca,	// (0x0001c627) form_field_popup_pane

0xcfe2,	// (0x0001c63f) form_field_popup_wide_pane_ParamLimits

0xcfe2,	// (0x0001c63f) form_field_popup_wide_pane

0x3463,	// (0x00012ac0) form_field_slider_pane_ParamLimits

0x3463,	// (0x00012ac0) form_field_slider_pane

0x3476,	// (0x00012ad3) form_field_slider_wide_pane_ParamLimits

0x3476,	// (0x00012ad3) form_field_slider_wide_pane

0x3489,	// (0x00012ae6) data_form_pane

0xd003,	// (0x0001c660) form_field_data_pane_t1

0x34b7,	// (0x00012b14) input_focus_pane

0x34c5,	// (0x00012b22) data_form_wide_pane

0x34f1,	// (0x00012b4e) form_field_data_wide_pane_t1

0x2cad,	// (0x0001230a) input_focus_pane_cp6

0xd01d,	// (0x0001c67a) form_field_popup_pane_t1

0x34b7,	// (0x00012b14) input_focus_pane_cp7

0x3528,	// (0x00012b85) list_form_pane

0x353c,	// (0x00012b99) form_field_popup_wide_pane_t1

0x34b7,	// (0x00012b14) input_focus_pane_cp8

0x354e,	// (0x00012bab) list_form_wide_pane

0xd03f,	// (0x0001c69c) form_field_slider_pane_t1_ParamLimits

0xd03f,	// (0x0001c69c) form_field_slider_pane_t1

0xd057,	// (0x0001c6b4) form_field_slider_pane_t2_ParamLimits

0xd057,	// (0x0001c6b4) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001ecda) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001ecda) form_field_slider_pane_t

0x2922,	// (0x00011f7f) input_focus_pane_cp9_ParamLimits

0x2922,	// (0x00011f7f) input_focus_pane_cp9

0xd06c,	// (0x0001c6c9) slider_cont_pane_ParamLimits

0xd06c,	// (0x0001c6c9) slider_cont_pane

0x359a,	// (0x00012bf7) form_field_slider_wide_pane_t1_ParamLimits

0x359a,	// (0x00012bf7) form_field_slider_wide_pane_t1

0x35ac,	// (0x00012c09) form_field_slider_wide_pane_t2_ParamLimits

0x35ac,	// (0x00012c09) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001ecdf) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001ecdf) form_field_slider_wide_pane_t

0x2922,	// (0x00011f7f) input_focus_pane_cp10_ParamLimits

0x2922,	// (0x00011f7f) input_focus_pane_cp10

0xd080,	// (0x0001c6dd) slider_cont_pane_cp1_ParamLimits

0xd080,	// (0x0001c6dd) slider_cont_pane_cp1

0xd094,	// (0x0001c6f1) slider_form_pane_cp

0x35da,	// (0x00012c37) input_focus_pane_g1

0x35e2,	// (0x00012c3f) input_focus_pane_g2

0x35ea,	// (0x00012c47) input_focus_pane_g3

0x35f2,	// (0x00012c4f) input_focus_pane_g4

0x35fa,	// (0x00012c57) input_focus_pane_g5

0x3602,	// (0x00012c5f) input_focus_pane_g6

0x360a,	// (0x00012c67) input_focus_pane_g7

0x3612,	// (0x00012c6f) input_focus_pane_g8

0x361a,	// (0x00012c77) input_focus_pane_g9

0x25a3,	// (0x00011c00) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001ece4) input_focus_pane_g

0x52e0,	// (0x0001493d) wait_border_pane_g3_copy1

0xd09c,	// (0x0001c6f9) data_form_pane_t1

0x25a3,	// (0x00011c00) wait_anim_pane_g1_copy1

0xdcd4,	// (0x0001d331) data_form_wide_pane_t1

0xd0b6,	// (0x0001c713) list_form_graphic_pane_cp_ParamLimits

0xd0b6,	// (0x0001c713) list_form_graphic_pane_cp

0x6229,	// (0x00015886) slider_form_pane_g1

0x6232,	// (0x0001588f) slider_form_pane_g2

0x0006,

0xf985,	// (0x0001efe2) slider_form_pane_g

0xd0b6,	// (0x0001c713) list_form_graphic_pane_ParamLimits

0xd0b6,	// (0x0001c713) list_form_graphic_pane

0x3672,	// (0x00012ccf) list_form_graphic_pane_g1

0x367a,	// (0x00012cd7) list_form_graphic_pane_t1_ParamLimits

0x367a,	// (0x00012cd7) list_form_graphic_pane_t1

0x268d,	// (0x00011cea) list_highlight_pane_cp5_ParamLimits

0x268d,	// (0x00011cea) list_highlight_pane_cp5

0xd0c8,	// (0x0001c725) find_pane_g1

0x3698,	// (0x00012cf5) input_find_pane

0xd0d1,	// (0x0001c72e) input_find_pane_g1_ParamLimits

0xd0d1,	// (0x0001c72e) input_find_pane_g1

0xd0dd,	// (0x0001c73a) input_find_pane_t1_ParamLimits

0xd0dd,	// (0x0001c73a) input_find_pane_t1

0xd0f2,	// (0x0001c74f) input_find_pane_t2_ParamLimits

0xd0f2,	// (0x0001c74f) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001ecf9) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001ecf9) input_find_pane_t

0x36d7,	// (0x00012d34) input_focus_pane_cp5_ParamLimits

0x36d7,	// (0x00012d34) input_focus_pane_cp5

0x36f1,	// (0x00012d4e) bg_popup_window_pane_cp2_ParamLimits

0x36f1,	// (0x00012d4e) bg_popup_window_pane_cp2

0x36fe,	// (0x00012d5b) listscroll_menu_pane_ParamLimits

0x36fe,	// (0x00012d5b) listscroll_menu_pane

0xd113,	// (0x0001c770) popup_submenu_window_ParamLimits

0xd113,	// (0x0001c770) popup_submenu_window

0x3736,	// (0x00012d93) find_popup_pane_g1

0x373e,	// (0x00012d9b) input_popup_find_pane_cp

0x36d7,	// (0x00012d34) input_focus_pane_cp4_ParamLimits

0x36d7,	// (0x00012d34) input_focus_pane_cp4

0x3754,	// (0x00012db1) input_popup_find_pane_t1_ParamLimits

0x3754,	// (0x00012db1) input_popup_find_pane_t1

0x25ad,	// (0x00011c0a) bg_popup_sub_pane_cp

0x3782,	// (0x00012ddf) listscroll_popup_sub_pane

0x378a,	// (0x00012de7) list_submenu_pane_ParamLimits

0x378a,	// (0x00012de7) list_submenu_pane

0x379b,	// (0x00012df8) scroll_pane_cp4

0x37a3,	// (0x00012e00) list_single_popup_submenu_pane_ParamLimits

0x37a3,	// (0x00012e00) list_single_popup_submenu_pane

0x37b7,	// (0x00012e14) list_single_popup_submenu_pane_g1

0x37bf,	// (0x00012e1c) list_single_popup_submenu_pane_t1_ParamLimits

0x37bf,	// (0x00012e1c) list_single_popup_submenu_pane_t1

0x2922,	// (0x00011f7f) bg_active_tab_pane_cp1_ParamLimits

0x2922,	// (0x00011f7f) bg_active_tab_pane_cp1

0x37d4,	// (0x00012e31) tabs_2_active_pane_g1

0xd14d,	// (0x0001c7aa) tabs_2_active_pane_t1

0x2922,	// (0x00011f7f) bg_passive_tab_pane_cp1_ParamLimits

0x2922,	// (0x00011f7f) bg_passive_tab_pane_cp1

0x37d4,	// (0x00012e31) tabs_2_passive_pane_g1

0xd14d,	// (0x0001c7aa) tabs_2_passive_pane_t1

0x268d,	// (0x00011cea) bg_active_tab_pane_cp4

0xd15f,	// (0x0001c7bc) tabs_2_long_active_pane_t1

0x467e,	// (0x00013cdb) bg_passive_tab_pane_cp4

0x1144,	// (0x000107a1) list_single_midp_graphic_pane_g4_ParamLimits

0x268d,	// (0x00011cea) bg_active_tab_pane_cp5

0xd172,	// (0x0001c7cf) tabs_3_long_active_pane_t1

0x467e,	// (0x00013cdb) bg_passive_tab_pane_cp5

0x1144,	// (0x000107a1) list_single_midp_graphic_pane_g4

0x268d,	// (0x00011cea) bg_popup_window_pane_cp13_ParamLimits

0x268d,	// (0x00011cea) bg_popup_window_pane_cp13

0x3836,	// (0x00012e93) listscroll_popup_fast_pane_ParamLimits

0x3836,	// (0x00012e93) listscroll_popup_fast_pane

0x3845,	// (0x00012ea2) grid_popup_fast_pane_ParamLimits

0x3845,	// (0x00012ea2) grid_popup_fast_pane

0x3857,	// (0x00012eb4) scroll_pane_cp9_ParamLimits

0x3857,	// (0x00012eb4) scroll_pane_cp9

0x815b,	// (0x000177b8) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x815b,	// (0x000177b8) list_single_graphic_hl_pane_t1_cp2

0x387b,	// (0x00012ed8) input_focus_pane_cp20_ParamLimits

0x387b,	// (0x00012ed8) input_focus_pane_cp20

0x3889,	// (0x00012ee6) query_popup_data_pane_t1_ParamLimits

0x3889,	// (0x00012ee6) query_popup_data_pane_t1

0x389c,	// (0x00012ef9) query_popup_data_pane_t2_ParamLimits

0x389c,	// (0x00012ef9) query_popup_data_pane_t2

0x38e2,	// (0x00012f3f) query_popup_data_pane_t3_ParamLimits

0x38e2,	// (0x00012f3f) query_popup_data_pane_t3

0x3923,	// (0x00012f80) query_popup_data_pane_t4_ParamLimits

0x3923,	// (0x00012f80) query_popup_data_pane_t4

0x395f,	// (0x00012fbc) query_popup_data_pane_t5_ParamLimits

0x395f,	// (0x00012fbc) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001ecfe) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001ecfe) query_popup_data_pane_t

0x35da,	// (0x00012c37) bg_set_opt_pane_g1

0x35e2,	// (0x00012c3f) bg_set_opt_pane_g2

0x35ea,	// (0x00012c47) bg_set_opt_pane_g3

0x35f2,	// (0x00012c4f) bg_set_opt_pane_g4

0x35fa,	// (0x00012c57) bg_set_opt_pane_g5

0x3602,	// (0x00012c5f) bg_set_opt_pane_g6

0x360a,	// (0x00012c67) bg_set_opt_pane_g7

0x3612,	// (0x00012c6f) bg_set_opt_pane_g8

0x361a,	// (0x00012c77) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001ed09) bg_set_opt_pane_g

0x0754,	// (0x0000fdb1) control_top_pane_stacon_ParamLimits

0x0754,	// (0x0000fdb1) control_top_pane_stacon

0x07a7,	// (0x0000fe04) signal_pane_stacon_ParamLimits

0x07a7,	// (0x0000fe04) signal_pane_stacon

0x3fe0,	// (0x0001363d) stacon_top_pane_g1_ParamLimits

0x3fe0,	// (0x0001363d) stacon_top_pane_g1

0x07cc,	// (0x0000fe29) title_pane_stacon_ParamLimits

0x07cc,	// (0x0000fe29) title_pane_stacon

0x07f6,	// (0x0000fe53) uni_indicator_pane_stacon_ParamLimits

0x07f6,	// (0x0000fe53) uni_indicator_pane_stacon

0x080b,	// (0x0000fe68) battery_pane_stacon_ParamLimits

0x080b,	// (0x0000fe68) battery_pane_stacon

0x084f,	// (0x0000feac) control_bottom_pane_stacon_ParamLimits

0x084f,	// (0x0000feac) control_bottom_pane_stacon

0x0872,	// (0x0000fecf) navi_pane_stacon_ParamLimits

0x0872,	// (0x0000fecf) navi_pane_stacon

0x4002,	// (0x0001365f) stacon_bottom_pane_g1_ParamLimits

0x4002,	// (0x0001365f) stacon_bottom_pane_g1

0x04b7,	// (0x0000fb14) aid_levels_signal_lsc_ParamLimits

0x04b7,	// (0x0000fb14) aid_levels_signal_lsc

0x04cd,	// (0x0000fb2a) signal_pane_stacon_g1_ParamLimits

0x04cd,	// (0x0000fb2a) signal_pane_stacon_g1

0x04e1,	// (0x0000fb3e) signal_pane_stacon_g2_ParamLimits

0x04e1,	// (0x0000fb3e) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001ed1c) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001ed1c) signal_pane_stacon_g

0x0516,	// (0x0000fb73) title_pane_stacon_t1_ParamLimits

0x0516,	// (0x0000fb73) title_pane_stacon_t1

0x39a3,	// (0x00013000) uni_indicator_pane_stacon_g1

0x39ad,	// (0x0001300a) uni_indicator_pane_stacon_g2

0x39b7,	// (0x00013014) uni_indicator_pane_stacon_g3

0x39c1,	// (0x0001301e) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001ed28) uni_indicator_pane_stacon_g

0x053b,	// (0x0000fb98) control_top_pane_stacon_g1

0x0543,	// (0x0000fba0) control_top_pane_stacon_t1_ParamLimits

0x0543,	// (0x0000fba0) control_top_pane_stacon_t1

0x057a,	// (0x0000fbd7) aid_levels_battery_lsc_ParamLimits

0x057a,	// (0x0000fbd7) aid_levels_battery_lsc

0x0591,	// (0x0000fbee) battery_pane_stacon_g1_ParamLimits

0x0591,	// (0x0000fbee) battery_pane_stacon_g1

0x05a4,	// (0x0000fc01) battery_pane_stacon_g2_ParamLimits

0x05a4,	// (0x0000fc01) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001ed31) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001ed31) battery_pane_stacon_g

0x05e2,	// (0x0000fc3f) navi_icon_pane_stacon

0x05f6,	// (0x0000fc53) navi_navi_pane_stacon

0x05e2,	// (0x0000fc3f) navi_text_pane_stacon

0x053b,	// (0x0000fb98) control_bottom_pane_stacon_g1

0x060a,	// (0x0000fc67) control_bottom_pane_stacon_t1_ParamLimits

0x060a,	// (0x0000fc67) control_bottom_pane_stacon_t1

0xd184,	// (0x0001c7e1) grid_app_pane_ParamLimits

0xd184,	// (0x0001c7e1) grid_app_pane

0xd1bc,	// (0x0001c819) scroll_pane_cp15_ParamLimits

0xd1bc,	// (0x0001c819) scroll_pane_cp15

0xd1d1,	// (0x0001c82e) cell_app_pane_ParamLimits

0xd1d1,	// (0x0001c82e) cell_app_pane

0xd216,	// (0x0001c873) cell_app_pane_g1_ParamLimits

0xd216,	// (0x0001c873) cell_app_pane_g1

0x3a66,	// (0x000130c3) cell_app_pane_g2_ParamLimits

0x3a66,	// (0x000130c3) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001ed36) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001ed36) cell_app_pane_g

0xd23a,	// (0x0001c897) cell_app_pane_t1_ParamLimits

0xd23a,	// (0x0001c897) cell_app_pane_t1

0x3a89,	// (0x000130e6) grid_highlight_pane_ParamLimits

0x3a89,	// (0x000130e6) grid_highlight_pane

0x35da,	// (0x00012c37) cell_highlight_pane_g1

0x35e2,	// (0x00012c3f) cell_highlight_pane_g2

0x35ea,	// (0x00012c47) cell_highlight_pane_g3

0x35f2,	// (0x00012c4f) cell_highlight_pane_g4

0x35fa,	// (0x00012c57) cell_highlight_pane_g5

0x3602,	// (0x00012c5f) cell_highlight_pane_g6

0x360a,	// (0x00012c67) cell_highlight_pane_g7

0x3612,	// (0x00012c6f) cell_highlight_pane_g8

0x361a,	// (0x00012c77) cell_highlight_pane_g9

0x25a3,	// (0x00011c00) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001ece4) cell_highlight_pane_g

0x3a9a,	// (0x000130f7) bg_scroll_pane

0x0654,	// (0x0000fcb1) scroll_handle_pane

0x3ae1,	// (0x0001313e) scroll_bg_pane_g1

0x3af6,	// (0x00013153) scroll_bg_pane_g2

0x3b0e,	// (0x0001316b) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001ed3b) scroll_bg_pane_g

0x3b23,	// (0x00013180) scroll_handle_focus_pane_ParamLimits

0x3b23,	// (0x00013180) scroll_handle_focus_pane

0x3ae1,	// (0x0001313e) scroll_handle_pane_g1

0x3b30,	// (0x0001318d) scroll_handle_pane_g2

0x3b0e,	// (0x0001316b) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001ed42) scroll_handle_pane_g

0x36d7,	// (0x00012d34) bg_popup_sub_pane_cp21_ParamLimits

0x36d7,	// (0x00012d34) bg_popup_sub_pane_cp21

0x3b44,	// (0x000131a1) popup_fep_japan_predictive_window_t1_ParamLimits

0x3b44,	// (0x000131a1) popup_fep_japan_predictive_window_t1

0x3b5e,	// (0x000131bb) popup_fep_japan_predictive_window_t2_ParamLimits

0x3b5e,	// (0x000131bb) popup_fep_japan_predictive_window_t2

0x3b91,	// (0x000131ee) popup_fep_japan_predictive_window_t3_ParamLimits

0x3b91,	// (0x000131ee) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001ed49) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001ed49) popup_fep_japan_predictive_window_t

0x25ad,	// (0x00011c0a) bg_popup_sub_pane_cp23

0x3bc8,	// (0x00013225) listscroll_japin_cand_pane

0x3bd0,	// (0x0001322d) popup_fep_japan_candidate_window_t1

0x3bde,	// (0x0001323b) candidate_pane_ParamLimits

0x3bde,	// (0x0001323b) candidate_pane

0x3bf0,	// (0x0001324d) scroll_pane_cp30

0x3bf8,	// (0x00013255) list_single_popup_jap_candidate_pane_ParamLimits

0x3bf8,	// (0x00013255) list_single_popup_jap_candidate_pane

0x25ad,	// (0x00011c0a) list_highlight_pane_cp30

0x3c0d,	// (0x0001326a) list_single_popup_jap_candidate_pane_t1

0x3c1c,	// (0x00013279) level_1_signal

0x3c2e,	// (0x0001328b) level_2_signal

0x3c41,	// (0x0001329e) level_3_signal

0x3c54,	// (0x000132b1) level_4_signal

0x3c67,	// (0x000132c4) level_5_signal

0x3c7a,	// (0x000132d7) level_6_signal

0x3c8d,	// (0x000132ea) level_7_signal

0x3c1c,	// (0x00013279) level_1_battery

0x3c2e,	// (0x0001328b) level_2_battery

0x3c41,	// (0x0001329e) level_3_battery

0x3c54,	// (0x000132b1) level_4_battery

0x3c67,	// (0x000132c4) level_5_battery

0x3c7a,	// (0x000132d7) level_6_battery

0x3c8d,	// (0x000132ea) level_7_battery

0x3cb8,	// (0x00013315) list_menu_pane_ParamLimits

0x3cb8,	// (0x00013315) list_menu_pane

0x3cce,	// (0x0001332b) scroll_pane_cp25_ParamLimits

0x3cce,	// (0x0001332b) scroll_pane_cp25

0x3ce7,	// (0x00013344) list_double2_graphic_pane_cp2_ParamLimits

0x3ce7,	// (0x00013344) list_double2_graphic_pane_cp2

0x3ce7,	// (0x00013344) list_double2_large_graphic_pane_cp2_ParamLimits

0x3ce7,	// (0x00013344) list_double2_large_graphic_pane_cp2

0x3ce7,	// (0x00013344) list_double2_pane_cp2_ParamLimits

0x3ce7,	// (0x00013344) list_double2_pane_cp2

0x3ce7,	// (0x00013344) list_double_graphic_pane_cp2_ParamLimits

0x3ce7,	// (0x00013344) list_double_graphic_pane_cp2

0x3ce7,	// (0x00013344) list_double_large_graphic_pane_cp2_ParamLimits

0x3ce7,	// (0x00013344) list_double_large_graphic_pane_cp2

0x3ce7,	// (0x00013344) list_double_number_pane_cp2_ParamLimits

0x3ce7,	// (0x00013344) list_double_number_pane_cp2

0x3ce7,	// (0x00013344) list_double_pane_cp2_ParamLimits

0x3ce7,	// (0x00013344) list_double_pane_cp2

0xd251,	// (0x0001c8ae) list_single_2graphic_pane_cp2_ParamLimits

0xd251,	// (0x0001c8ae) list_single_2graphic_pane_cp2

0xd251,	// (0x0001c8ae) list_single_graphic_heading_pane_cp2_ParamLimits

0xd251,	// (0x0001c8ae) list_single_graphic_heading_pane_cp2

0xd251,	// (0x0001c8ae) list_single_graphic_pane_cp2_ParamLimits

0xd251,	// (0x0001c8ae) list_single_graphic_pane_cp2

0xd251,	// (0x0001c8ae) list_single_heading_pane_cp2_ParamLimits

0xd251,	// (0x0001c8ae) list_single_heading_pane_cp2

0x3d24,	// (0x00013381) list_single_large_graphic_pane_cp2_ParamLimits

0x3d24,	// (0x00013381) list_single_large_graphic_pane_cp2

0xd251,	// (0x0001c8ae) list_single_number_heading_pane_cp2_ParamLimits

0xd251,	// (0x0001c8ae) list_single_number_heading_pane_cp2

0xd251,	// (0x0001c8ae) list_single_number_pane_cp2_ParamLimits

0xd251,	// (0x0001c8ae) list_single_number_pane_cp2

0xd251,	// (0x0001c8ae) list_single_pane_cp2_ParamLimits

0xd251,	// (0x0001c8ae) list_single_pane_cp2

0x3da0,	// (0x000133fd) bg_popup_sub_pane_cp22

0x0706,	// (0x0000fd63) popup_side_volume_key_window_g1

0x0730,	// (0x0000fd8d) popup_side_volume_key_window_t1

0x074c,	// (0x0000fda9) volume_small_pane_cp1

0x2922,	// (0x00011f7f) bg_popup_sub_pane_cp24_ParamLimits

0x2922,	// (0x00011f7f) bg_popup_sub_pane_cp24

0x3db6,	// (0x00013413) fep_china_uni_candidate_pane_ParamLimits

0x3db6,	// (0x00013413) fep_china_uni_candidate_pane

0x3dca,	// (0x00013427) fep_china_uni_entry_pane

0x3dda,	// (0x00013437) popup_fep_china_uni_window_g1

0x3df6,	// (0x00013453) fep_china_uni_entry_pane_g1

0x3dfe,	// (0x0001345b) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001ed7a) fep_china_uni_entry_pane_g

0x3e06,	// (0x00013463) fep_entry_item_pane

0x3e10,	// (0x0001346d) fep_candidate_item_pane

0x3e18,	// (0x00013475) fep_china_uni_candidate_pane_g1

0x3e20,	// (0x0001347d) fep_china_uni_candidate_pane_g2

0x3e28,	// (0x00013485) fep_china_uni_candidate_pane_g3

0x3e30,	// (0x0001348d) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001ed7f) fep_china_uni_candidate_pane_g

0x25a3,	// (0x00011c00) fep_entry_item_pane_g1

0x3e38,	// (0x00013495) fep_entry_item_pane_t1_ParamLimits

0x3e38,	// (0x00013495) fep_entry_item_pane_t1

0x3e4e,	// (0x000134ab) fep_candidate_item_pane_t1_ParamLimits

0x3e4e,	// (0x000134ab) fep_candidate_item_pane_t1

0x3e63,	// (0x000134c0) fep_candidate_item_pane_t2_ParamLimits

0x3e63,	// (0x000134c0) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001ed88) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001ed88) fep_candidate_item_pane_t

0x268d,	// (0x00011cea) list_highlight_pane_cp31_ParamLimits

0x268d,	// (0x00011cea) list_highlight_pane_cp31

0x3e75,	// (0x000134d2) level_1_signal_lsc

0x3e7e,	// (0x000134db) level_2_signal_lsc

0x3e87,	// (0x000134e4) level_3_signal_lsc

0x3e90,	// (0x000134ed) level_4_signal_lsc

0x3e99,	// (0x000134f6) level_5_signal_lsc

0x3ea2,	// (0x000134ff) level_6_signal_lsc

0x3eab,	// (0x00013508) level_7_signal_lsc

0x3eab,	// (0x00013508) level_1_battery_lsc

0x3eb4,	// (0x00013511) level_2_battery_lsc

0x3ebd,	// (0x0001351a) level_3_battery_lsc

0x3ec6,	// (0x00013523) level_4_battery_lsc

0x3ecf,	// (0x0001352c) level_5_battery_lsc

0x3ed8,	// (0x00013535) level_6_battery_lsc

0x3e75,	// (0x000134d2) level_7_battery_lsc

0x3ee1,	// (0x0001353e) scroll_handle_focus_pane_g1

0x3eea,	// (0x00013547) scroll_handle_focus_pane_g2

0x3ef3,	// (0x00013550) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001ed8d) scroll_handle_focus_pane_g

0xd2de,	// (0x0001c93b) list_single_2graphic_pane_g1_ParamLimits

0xd2de,	// (0x0001c93b) list_single_2graphic_pane_g1

0xcc12,	// (0x0001c26f) list_single_2graphic_pane_g2_ParamLimits

0xcc12,	// (0x0001c26f) list_single_2graphic_pane_g2

0x4b5a,	// (0x000141b7) list_single_2graphic_pane_g3_ParamLimits

0x4b5a,	// (0x000141b7) list_single_2graphic_pane_g3

0xd2ea,	// (0x0001c947) list_single_2graphic_pane_g4_ParamLimits

0xd2ea,	// (0x0001c947) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001ed94) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001ed94) list_single_2graphic_pane_g

0xd2fb,	// (0x0001c958) list_single_2graphic_pane_t1_ParamLimits

0xd2fb,	// (0x0001c958) list_single_2graphic_pane_t1

0xd329,	// (0x0001c986) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd329,	// (0x0001c986) list_double2_graphic_large_graphic_pane_g1

0xcc5b,	// (0x0001c2b8) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xcc5b,	// (0x0001c2b8) list_double2_graphic_large_graphic_pane_g2

0xcc6c,	// (0x0001c2c9) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xcc6c,	// (0x0001c2c9) list_double2_graphic_large_graphic_pane_g3

0xd33b,	// (0x0001c998) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd33b,	// (0x0001c998) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001ed9d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001ed9d) list_double2_graphic_large_graphic_pane_g

0xd347,	// (0x0001c9a4) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd347,	// (0x0001c9a4) list_double2_graphic_large_graphic_pane_t1

0xd35d,	// (0x0001c9ba) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd35d,	// (0x0001c9ba) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001eda6) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001eda6) list_double2_graphic_large_graphic_pane_t

0x40ca,	// (0x00013727) popup_fast_swap_window_ParamLimits

0x40ca,	// (0x00013727) popup_fast_swap_window

0x40e6,	// (0x00013743) popup_side_volume_key_window

0x4102,	// (0x0001375f) stacon_top_pane

0x410c,	// (0x00013769) status_pane_ParamLimits

0x410c,	// (0x00013769) status_pane

0xd36f,	// (0x0001c9cc) status_small_pane

0x25ad,	// (0x00011c0a) control_pane

0x25ad,	// (0x00011c0a) stacon_bottom_pane

0x33c8,	// (0x00012a25) scroll_pane_cp121

0x33bf,	// (0x00012a1c) set_content_pane

0x3f8b,	// (0x000135e8) bg_active_tab_pane_g1_cp1

0x3f94,	// (0x000135f1) bg_active_tab_pane_g2_cp1

0x3f9d,	// (0x000135fa) bg_active_tab_pane_g3_cp1

0x3f8b,	// (0x000135e8) bg_passive_tab_pane_g1_cp1

0x3f94,	// (0x000135f1) bg_passive_tab_pane_g2_cp1

0x3f9d,	// (0x000135fa) bg_passive_tab_pane_g3_cp1

0x3fa6,	// (0x00013603) bg_active_tab_pane_g1_cp2

0x3f94,	// (0x000135f1) bg_active_tab_pane_g2_cp2

0x3faf,	// (0x0001360c) bg_active_tab_pane_g3_cp2

0x3fa6,	// (0x00013603) bg_passive_tab_pane_g1_cp2

0x3f94,	// (0x000135f1) bg_passive_tab_pane_g2_cp2

0x3faf,	// (0x0001360c) bg_passive_tab_pane_g3_cp2

0x3fb8,	// (0x00013615) bg_active_tab_pane_g1_cp3

0x3f94,	// (0x000135f1) bg_active_tab_pane_g2_cp3

0x3fc1,	// (0x0001361e) bg_active_tab_pane_g3_cp3

0x3fb8,	// (0x00013615) bg_passive_tab_pane_g1_cp3

0x3f94,	// (0x000135f1) bg_passive_tab_pane_g2_cp3

0x3fc1,	// (0x0001361e) bg_passive_tab_pane_g3_cp3

0x3fca,	// (0x00013627) bg_active_tab_pane_g1_cp4

0x3f94,	// (0x000135f1) bg_active_tab_pane_g2_cp4

0x3fd5,	// (0x00013632) bg_active_tab_pane_g3_cp4

0x3fca,	// (0x00013627) bg_passive_tab_pane_g1_cp4

0x3f94,	// (0x000135f1) bg_passive_tab_pane_g2_cp4

0x3fd5,	// (0x00013632) bg_passive_tab_pane_g3_cp4

0x401e,	// (0x0001367b) bg_active_tab_pane_g1_cp5

0x3f94,	// (0x000135f1) bg_active_tab_pane_g2_cp5

0x4027,	// (0x00013684) bg_active_tab_pane_g3_cp5

0x401e,	// (0x0001367b) bg_passive_tab_pane_g1_cp5

0x3f94,	// (0x000135f1) bg_passive_tab_pane_g2_cp5

0x4027,	// (0x00013684) bg_passive_tab_pane_g3_cp5

0x6941,	// (0x00015f9e) list_set_graphic_pane_ParamLimits

0x6941,	// (0x00015f9e) list_set_graphic_pane

0x25ad,	// (0x00011c0a) bg_set_opt_pane_cp4

0x404d,	// (0x000136aa) list_set_graphic_pane_g1_ParamLimits

0x404d,	// (0x000136aa) list_set_graphic_pane_g1

0x4059,	// (0x000136b6) list_set_graphic_pane_g2_ParamLimits

0x4059,	// (0x000136b6) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001edab) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001edab) list_set_graphic_pane_g

0x0009,

0xfac3,	// (0x0001f120) volume_small_pane_cp_g

0x407d,	// (0x000136da) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x407d,	// (0x000136da) list_double2_large_graphic_pane_g1_cp2

0x4089,	// (0x000136e6) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4089,	// (0x000136e6) list_double2_large_graphic_pane_g2_cp2

0x409a,	// (0x000136f7) list_double2_large_graphic_pane_g3_cp2

0x40a2,	// (0x000136ff) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x40a2,	// (0x000136ff) list_double2_large_graphic_pane_t1_cp2

0x40b8,	// (0x00013715) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x40b8,	// (0x00013715) list_double2_large_graphic_pane_t2_cp2

0x5dbf,	// (0x0001541c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5dbf,	// (0x0001541c) list_double_large_graphic_pane_g1_cp2

0x5dd0,	// (0x0001542d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5dd0,	// (0x0001542d) list_double_large_graphic_pane_g2_cp2

0x4233,	// (0x00013890) list_double_large_graphic_pane_g3_cp2

0x5de1,	// (0x0001543e) list_double_large_graphic_pane_g4_cp

0x5de9,	// (0x00015446) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5de9,	// (0x00015446) list_double_large_graphic_pane_t1_cp2

0x5e00,	// (0x0001545d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5e00,	// (0x0001545d) list_double_large_graphic_pane_t2_cp2

0x4125,	// (0x00013782) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4125,	// (0x00013782) list_double2_graphic_pane_g1_cp2

0x4133,	// (0x00013790) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4133,	// (0x00013790) list_double2_graphic_pane_g2_cp2

0x4144,	// (0x000137a1) list_double2_graphic_pane_g3_cp2

0x414e,	// (0x000137ab) list_double2_graphic_pane_t1_cp2_ParamLimits

0x414e,	// (0x000137ab) list_double2_graphic_pane_t1_cp2

0x4164,	// (0x000137c1) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4164,	// (0x000137c1) list_double2_graphic_pane_t2_cp2

0x4176,	// (0x000137d3) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4176,	// (0x000137d3) list_single_number_heading_pane_g1_cp2

0x4182,	// (0x000137df) list_single_number_heading_pane_g2_cp2

0x418a,	// (0x000137e7) list_single_number_heading_pane_t1_cp2_ParamLimits

0x418a,	// (0x000137e7) list_single_number_heading_pane_t1_cp2

0x41a0,	// (0x000137fd) list_single_number_heading_pane_t2_cp2_ParamLimits

0x41a0,	// (0x000137fd) list_single_number_heading_pane_t2_cp2

0x41b2,	// (0x0001380f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x41b2,	// (0x0001380f) list_single_number_heading_pane_t3_cp2

0x4176,	// (0x000137d3) list_single_heading_pane_g1_cp2_ParamLimits

0x4176,	// (0x000137d3) list_single_heading_pane_g1_cp2

0x4182,	// (0x000137df) list_single_heading_pane_g2_cp2

0x418a,	// (0x000137e7) list_single_heading_pane_t1_cp2_ParamLimits

0x418a,	// (0x000137e7) list_single_heading_pane_t1_cp2

0x5bc7,	// (0x00015224) list_single_heading_pane_t2_cp2_ParamLimits

0x5bc7,	// (0x00015224) list_single_heading_pane_t2_cp2

0x5b0f,	// (0x0001516c) list_double_graphic_pane_g1_cp2_ParamLimits

0x5b0f,	// (0x0001516c) list_double_graphic_pane_g1_cp2

0x5b1b,	// (0x00015178) list_double_graphic_pane_g2_cp2_ParamLimits

0x5b1b,	// (0x00015178) list_double_graphic_pane_g2_cp2

0x5b2a,	// (0x00015187) list_double_graphic_pane_g3_cp2

0x5b32,	// (0x0001518f) list_double_graphic_pane_t1_cp2_ParamLimits

0x5b32,	// (0x0001518f) list_double_graphic_pane_t1_cp2

0x5b48,	// (0x000151a5) list_double_graphic_pane_t2_cp2_ParamLimits

0x5b48,	// (0x000151a5) list_double_graphic_pane_t2_cp2

0x4227,	// (0x00013884) list_double_number_pane_g1_cp2_ParamLimits

0x4227,	// (0x00013884) list_double_number_pane_g1_cp2

0x4233,	// (0x00013890) list_double_number_pane_g2_cp2

0x5ad3,	// (0x00015130) list_double_number_pane_t1_cp2_ParamLimits

0x5ad3,	// (0x00015130) list_double_number_pane_t1_cp2

0x5ae7,	// (0x00015144) list_double_number_pane_t2_cp2_ParamLimits

0x5ae7,	// (0x00015144) list_double_number_pane_t2_cp2

0x5afd,	// (0x0001515a) list_double_number_pane_t3_cp2_ParamLimits

0x5afd,	// (0x0001515a) list_double_number_pane_t3_cp2

0x59bc,	// (0x00015019) list_single_graphic_pane_g1_cp2_ParamLimits

0x59bc,	// (0x00015019) list_single_graphic_pane_g1_cp2

0x428b,	// (0x000138e8) list_single_graphic_pane_g2_cp2_ParamLimits

0x428b,	// (0x000138e8) list_single_graphic_pane_g2_cp2

0x4297,	// (0x000138f4) list_single_graphic_pane_g3_cp2

0x5992,	// (0x00014fef) list_single_graphic_pane_t1_cp2_ParamLimits

0x5992,	// (0x00014fef) list_single_graphic_pane_t1_cp2

0x428b,	// (0x000138e8) list_single_number_pane_g1_cp2_ParamLimits

0x428b,	// (0x000138e8) list_single_number_pane_g1_cp2

0x4297,	// (0x000138f4) list_single_number_pane_g2_cp2

0x5992,	// (0x00014fef) list_single_number_pane_t1_cp2_ParamLimits

0x5992,	// (0x00014fef) list_single_number_pane_t1_cp2

0x59a8,	// (0x00015005) list_single_number_pane_t2_cp2_ParamLimits

0x59a8,	// (0x00015005) list_single_number_pane_t2_cp2

0x4089,	// (0x000136e6) list_double2_pane_g1_cp2_ParamLimits

0x4089,	// (0x000136e6) list_double2_pane_g1_cp2

0x409a,	// (0x000136f7) list_double2_pane_g2_cp2

0x41ff,	// (0x0001385c) list_double2_pane_t1_cp2_ParamLimits

0x41ff,	// (0x0001385c) list_double2_pane_t1_cp2

0x4215,	// (0x00013872) list_double2_pane_t2_cp2_ParamLimits

0x4215,	// (0x00013872) list_double2_pane_t2_cp2

0x4227,	// (0x00013884) list_double_pane_g1_cp2_ParamLimits

0x4227,	// (0x00013884) list_double_pane_g1_cp2

0x4233,	// (0x00013890) list_double_pane_g2_cp2

0x423b,	// (0x00013898) list_double_pane_t1_cp2_ParamLimits

0x423b,	// (0x00013898) list_double_pane_t1_cp2

0x4251,	// (0x000138ae) list_double_pane_t2_cp2_ParamLimits

0x4251,	// (0x000138ae) list_double_pane_t2_cp2

0x427b,	// (0x000138d8) list_single_pane_cp2_g3

0x428b,	// (0x000138e8) list_single_pane_g1_cp2_ParamLimits

0x428b,	// (0x000138e8) list_single_pane_g1_cp2

0x4297,	// (0x000138f4) list_single_pane_g2_cp2

0x429f,	// (0x000138fc) list_single_pane_t1_cp2_ParamLimits

0x429f,	// (0x000138fc) list_single_pane_t1_cp2

0x42b7,	// (0x00013914) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x42b7,	// (0x00013914) list_single_large_graphic_pane_g1_cp2

0x42c3,	// (0x00013920) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x42c3,	// (0x00013920) list_single_large_graphic_pane_g2_cp2

0x42cf,	// (0x0001392c) list_single_large_graphic_pane_g3_cp2

0x42d7,	// (0x00013934) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x42d7,	// (0x00013934) list_single_large_graphic_pane_g4_cp1

0x42f1,	// (0x0001394e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x42f1,	// (0x0001394e) list_single_large_graphic_pane_t1_cp2

0x595e,	// (0x00014fbb) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x595e,	// (0x00014fbb) list_single_graphic_heading_pane_g1_cp2

0x592b,	// (0x00014f88) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x592b,	// (0x00014f88) list_single_graphic_heading_pane_g4_cp2

0x4297,	// (0x000138f4) list_single_graphic_heading_pane_g5_cp2

0x596a,	// (0x00014fc7) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x596a,	// (0x00014fc7) list_single_graphic_heading_pane_t1_cp2

0x5980,	// (0x00014fdd) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5980,	// (0x00014fdd) list_single_graphic_heading_pane_t2_cp2

0x591f,	// (0x00014f7c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x591f,	// (0x00014f7c) list_single_2graphic_pane_g1_cp2

0x592b,	// (0x00014f88) list_single_2graphic_pane_g2_cp2_ParamLimits

0x592b,	// (0x00014f88) list_single_2graphic_pane_g2_cp2

0x4297,	// (0x000138f4) list_single_2graphic_pane_g3_cp2

0x593c,	// (0x00014f99) list_single_2graphic_pane_g4_cp2_ParamLimits

0x593c,	// (0x00014f99) list_single_2graphic_pane_g4_cp2

0x5948,	// (0x00014fa5) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5948,	// (0x00014fa5) list_single_2graphic_pane_t1_cp2

0x25a3,	// (0x00011c00) list_highlight_pane_g10_cp1

0x54eb,	// (0x00014b48) list_highlight_pane_g1_cp1

0x54f3,	// (0x00014b50) list_highlight_pane_g2_cp1

0x54fb,	// (0x00014b58) list_highlight_pane_g3_cp1

0x5503,	// (0x00014b60) list_highlight_pane_g4_cp1

0x550b,	// (0x00014b68) list_highlight_pane_g5_cp1

0x5513,	// (0x00014b70) list_highlight_pane_g6_cp1

0x551b,	// (0x00014b78) list_highlight_pane_g7_cp1

0x5523,	// (0x00014b80) list_highlight_pane_g8_cp1

0x552b,	// (0x00014b88) list_highlight_pane_g9_cp1

0xd9ed,	// (0x0001d04a) form_field_slider_pane_t3

0xd9fb,	// (0x0001d058) form_field_slider_pane_t4

0x5427,	// (0x00014a84) slider_form_pane_ParamLimits

0x5427,	// (0x00014a84) slider_form_pane

0x25ad,	// (0x00011c0a) control_abbreviations

0x25ad,	// (0x00011c0a) control_conventions

0x25ad,	// (0x00011c0a) control_definitions

0x25ad,	// (0x00011c0a) format_table_attribute

0x5c11,	// (0x0001526e) bg_popup_preview_window_pane_g9

0x25ad,	// (0x00011c0a) format_table_data2

0x25ad,	// (0x00011c0a) format_table_data3

0x25ad,	// (0x00011c0a) format_table_data_example

0x0008,

0x25ad,	// (0x00011c0a) intro_purpose

0xf8e5,	// (0x0001ef42) bg_popup_preview_window_pane_g

0x25ad,	// (0x00011c0a) texts_category

0x25ad,	// (0x00011c0a) texts_graphics

0x4307,	// (0x00013964) text_digital

0x4316,	// (0x00013973) text_primary

0x4325,	// (0x00013982) text_primary_small

0x4334,	// (0x00013991) text_secondary

0x4343,	// (0x000139a0) text_title

0x6431,	// (0x00015a8e) bg_passive_tab_pane_g1_cp3_srt

0x3f94,	// (0x000135f1) bg_passive_tab_pane_g2_cp3_srt

0x643a,	// (0x00015a97) bg_passive_tab_pane_g3_cp3_srt

0x2922,	// (0x00011f7f) bg_active_tab_pane_cp3_srt_ParamLimits

0x2922,	// (0x00011f7f) bg_active_tab_pane_cp3_srt

0x6443,	// (0x00015aa0) tabs_4_active_pane_srt_g1

0xdd7d,	// (0x0001d3da) tabs_4_active_pane_srt_t1_ParamLimits

0xdd7d,	// (0x0001d3da) tabs_4_active_pane_srt_t1

0x6431,	// (0x00015a8e) bg_active_tab_pane_g1_cp3_copy1

0x3f94,	// (0x000135f1) bg_active_tab_pane_g2_cp3_copy1

0x643a,	// (0x00015a97) bg_active_tab_pane_g3_cp3_copy1

0x268d,	// (0x00011cea) tabs_2_long_active_pane_srt_ParamLimits

0x268d,	// (0x00011cea) tabs_2_long_active_pane_srt

0x268d,	// (0x00011cea) tabs_2_long_passive_pane_srt_ParamLimits

0x268d,	// (0x00011cea) tabs_2_long_passive_pane_srt

0x467e,	// (0x00013cdb) bg_passive_tab_pane_cp4_srt_ParamLimits

0x467e,	// (0x00013cdb) bg_passive_tab_pane_cp4_srt

0x605c,	// (0x000156b9) bg_passive_tab_pane_g1_cp4_srt

0x3f94,	// (0x000135f1) bg_passive_tab_pane_g2_cp4_srt

0x6065,	// (0x000156c2) bg_passive_tab_pane_g3_cp4_srt

0x268d,	// (0x00011cea) bg_active_tab_pane_cp4_srt_ParamLimits

0x268d,	// (0x00011cea) bg_active_tab_pane_cp4_srt

0xdb69,	// (0x0001d1c6) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdb69,	// (0x0001d1c6) tabs_2_long_active_pane_srt_t1

0x605c,	// (0x000156b9) bg_active_tab_pane_g1_cp4_srt

0x3f94,	// (0x000135f1) bg_active_tab_pane_g2_cp4_srt

0x6065,	// (0x000156c2) bg_active_tab_pane_g3_cp4_srt

0x2922,	// (0x00011f7f) tabs_3_long_active_pane_srt_ParamLimits

0x2922,	// (0x00011f7f) tabs_3_long_active_pane_srt

0x2922,	// (0x00011f7f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2922,	// (0x00011f7f) tabs_3_long_passive_pane_cp_srt

0x2922,	// (0x00011f7f) tabs_3_long_passive_pane_srt_ParamLimits

0x2922,	// (0x00011f7f) tabs_3_long_passive_pane_srt

0x467e,	// (0x00013cdb) bg_passive_tab_pane_cp5_srt_ParamLimits

0x467e,	// (0x00013cdb) bg_passive_tab_pane_cp5_srt

0x401e,	// (0x0001367b) bg_passive_tab_pane_g1_cp5_srt

0x3f94,	// (0x000135f1) bg_passive_tab_pane_g2_cp5_srt

0x4027,	// (0x00013684) bg_passive_tab_pane_g3_cp5_srt

0x268d,	// (0x00011cea) bg_active_tab_pane_cp5_srt_ParamLimits

0x268d,	// (0x00011cea) bg_active_tab_pane_cp5_srt

0xdb53,	// (0x0001d1b0) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdb53,	// (0x0001d1b0) tabs_3_long_active_pane_srt_t1

0x401e,	// (0x0001367b) bg_active_tab_pane_g1_cp5_srt

0x3f94,	// (0x000135f1) bg_active_tab_pane_g2_cp5_srt

0x4027,	// (0x00013684) bg_active_tab_pane_g3_cp5_srt

0x603c,	// (0x00015699) navi_text_pane_srt_t1

0x6034,	// (0x00015691) navi_icon_pane_srt_g1

0x4518,	// (0x00013b75) midp_editing_number_pane_srt

0x4352,	// (0x000139af) midp_ticker_pane_srt

0x4520,	// (0x00013b7d) midp_ticker_pane_srt_g1

0x4528,	// (0x00013b85) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001edca) midp_ticker_pane_srt_g

0x4530,	// (0x00013b8d) midp_ticker_pane_srt_t1

0x6025,	// (0x00015682) midp_editing_number_pane_t1_copy1

0xd37a,	// (0x0001c9d7) listscroll_midp_pane

0xd37a,	// (0x0001c9d7) midp_form_pane

0x43ca,	// (0x00013a27) midp_info_popup_window_ParamLimits

0x43ca,	// (0x00013a27) midp_info_popup_window

0x36d7,	// (0x00012d34) bg_popup_sub_pane_cp50_ParamLimits

0x36d7,	// (0x00012d34) bg_popup_sub_pane_cp50

0x5117,	// (0x00014774) listscroll_midp_info_pane_ParamLimits

0x5117,	// (0x00014774) listscroll_midp_info_pane

0x50f7,	// (0x00014754) listscroll_form_midp_pane_ParamLimits

0x50f7,	// (0x00014754) listscroll_form_midp_pane

0x5103,	// (0x00014760) scroll_bar_cp050

0x50f7,	// (0x00014754) list_midp_pane

0x71cc,	// (0x00016829) signal_pane_g2_cp

0x5011,	// (0x0001466e) listscroll_midp_info_pane_t1_ParamLimits

0x5011,	// (0x0001466e) listscroll_midp_info_pane_t1

0x5029,	// (0x00014686) listscroll_midp_info_pane_t2_ParamLimits

0x5029,	// (0x00014686) listscroll_midp_info_pane_t2

0x5067,	// (0x000146c4) listscroll_midp_info_pane_t3_ParamLimits

0x5067,	// (0x000146c4) listscroll_midp_info_pane_t3

0x50a1,	// (0x000146fe) listscroll_midp_info_pane_t4_ParamLimits

0x50a1,	// (0x000146fe) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x0001ee7d) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x0001ee7d) listscroll_midp_info_pane_t

0x379b,	// (0x00012df8) scroll_pane_cp21

0x4faf,	// (0x0001460c) form_midp_field_choice_group_pane

0x4fb8,	// (0x00014615) form_midp_field_text_pane

0x4ff7,	// (0x00014654) form_midp_field_time_pane

0x4fff,	// (0x0001465c) form_midp_gauge_slider_pane

0x5008,	// (0x00014665) form_midp_gauge_wait_pane

0x25ad,	// (0x00011c0a) form_midp_image_pane

0xd9d7,	// (0x0001d034) list_single_midp_pane_ParamLimits

0xd9d7,	// (0x0001d034) list_single_midp_pane

0xd9b6,	// (0x0001d013) form_midp_field_text_pane_t1

0x4cfa,	// (0x00014357) input_focus_pane_cp050

0x4f70,	// (0x000145cd) list_midp_form_text_pane

0x4f08,	// (0x00014565) form_midp_field_choice_group_pane_t1

0x4f16,	// (0x00014573) input_focus_pane_cp051

0x4f2a,	// (0x00014587) list_midp_choice_pane

0x25ad,	// (0x00011c0a) status_idle_pane

0x4eec,	// (0x00014549) form_midp_field_time_pane_t1

0x25a3,	// (0x00011c00) wait_anim_pane_g2_copy1

0x4efa,	// (0x00014557) form_midp_field_time_pane_t2

0x0001,

0x4478,	// (0x00013ad5) aid_navinavi_width_2_pane

0xf81b,	// (0x0001ee78) form_midp_field_time_pane_t

0x25ad,	// (0x00011c0a) input_focus_pane_cp052

0x25ad,	// (0x00011c0a) bg_input_focus_pane_cp040

0x4eac,	// (0x00014509) form_midp_gauge_slider_pane_t1

0x4eba,	// (0x00014517) form_midp_gauge_slider_pane_t2

0xd99a,	// (0x0001cff7) form_midp_gauge_slider_pane_t3

0xd9a8,	// (0x0001d005) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x0001ee6f) form_midp_gauge_slider_pane_t

0x4ee4,	// (0x00014541) form_midp_slider_pane

0x268d,	// (0x00011cea) bg_input_focus_pane_cp041_ParamLimits

0x268d,	// (0x00011cea) bg_input_focus_pane_cp041

0x4e79,	// (0x000144d6) form_midp_gauge_wait_pane_t1_ParamLimits

0x4e79,	// (0x000144d6) form_midp_gauge_wait_pane_t1

0x4e8b,	// (0x000144e8) form_midp_gauge_wait_pane_t2_ParamLimits

0x4e8b,	// (0x000144e8) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x0001ee6a) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x0001ee6a) form_midp_gauge_wait_pane_t

0x4e9d,	// (0x000144fa) form_midp_wait_pane_ParamLimits

0x4e9d,	// (0x000144fa) form_midp_wait_pane

0x4e43,	// (0x000144a0) form_midp_image_pane_g1

0x4e4c,	// (0x000144a9) form_midp_image_pane_t1

0x4e5b,	// (0x000144b8) form_midp_image_pane_t2

0x4e6a,	// (0x000144c7) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x0001ee63) form_midp_image_pane_t

0x4e2b,	// (0x00014488) list_single_midp_pane_g1

0x4e34,	// (0x00014491) list_single_midp_pane_t1

0xd986,	// (0x0001cfe3) list_midp_form_item_pane_ParamLimits

0xd986,	// (0x0001cfe3) list_midp_form_item_pane

0x4420,	// (0x00013a7d) list_midp_form_item_pane_t1

0x442f,	// (0x00013a8c) midp_ticker_pane_g1

0x443b,	// (0x00013a98) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001edb0) midp_ticker_pane_g

0x4447,	// (0x00013aa4) midp_ticker_pane_t1

0x62a9,	// (0x00015906) midp_editing_number_pane_t1

0x6287,	// (0x000158e4) midp_editing_number_pane

0x6296,	// (0x000158f3) midp_ticker_pane

0x5fed,	// (0x0001564a) ai_message_heading_pane

0x25ad,	// (0x00011c0a) bg_popup_window_pane_cp14

0x5ff5,	// (0x00015652) listscroll_ai_message_pane

0x5f77,	// (0x000155d4) ai_message_heading_pane_g1_ParamLimits

0x5f77,	// (0x000155d4) ai_message_heading_pane_g1

0x5f83,	// (0x000155e0) ai_message_heading_pane_g2_ParamLimits

0x5f83,	// (0x000155e0) ai_message_heading_pane_g2

0x5f8f,	// (0x000155ec) ai_message_heading_pane_g3_ParamLimits

0x5f8f,	// (0x000155ec) ai_message_heading_pane_g3

0x5f9b,	// (0x000155f8) ai_message_heading_pane_g4_ParamLimits

0x5f9b,	// (0x000155f8) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x0001efa4) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x0001efa4) ai_message_heading_pane_g

0x5fa7,	// (0x00015604) ai_message_heading_pane_t1_ParamLimits

0x5fa7,	// (0x00015604) ai_message_heading_pane_t1

0x5fc1,	// (0x0001561e) ai_message_heading_pane_t2_ParamLimits

0x5fc1,	// (0x0001561e) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x0001efad) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x0001efad) ai_message_heading_pane_t

0x5fd3,	// (0x00015630) bg_popup_heading_pane_cp1_ParamLimits

0x5fd3,	// (0x00015630) bg_popup_heading_pane_cp1

0x5f65,	// (0x000155c2) list_ai_message_pane_ParamLimits

0x5f65,	// (0x000155c2) list_ai_message_pane

0x379b,	// (0x00012df8) scroll_pane_cp10

0x5f01,	// (0x0001555e) list_ai_message_pane_g1

0x5f09,	// (0x00015566) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x0001ef81) list_ai_message_pane_g

0x5f11,	// (0x0001556e) list_ai_message_pane_t1_ParamLimits

0x5f11,	// (0x0001556e) list_ai_message_pane_t1

0x5f26,	// (0x00015583) list_ai_message_pane_t2_ParamLimits

0x5f26,	// (0x00015583) list_ai_message_pane_t2

0x5f3b,	// (0x00015598) list_ai_message_pane_t3_ParamLimits

0x5f3b,	// (0x00015598) list_ai_message_pane_t3

0x5f50,	// (0x000155ad) list_ai_message_pane_t4_ParamLimits

0x5f50,	// (0x000155ad) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x0001ef86) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x0001ef86) list_ai_message_pane_t

0xdb20,	// (0x0001d17d) cell_ai_soft_ind_pane_ParamLimits

0xdb20,	// (0x0001d17d) cell_ai_soft_ind_pane

0x4459,	// (0x00013ab6) cell_ai_soft_ind_pane_g1_ParamLimits

0x4459,	// (0x00013ab6) cell_ai_soft_ind_pane_g1

0x25ad,	// (0x00011c0a) grid_highlight_cp1

0x4466,	// (0x00013ac3) text_secondary_cp56_ParamLimits

0x4466,	// (0x00013ac3) text_secondary_cp56

0x5ec1,	// (0x0001551e) example_general_pane_ParamLimits

0x5ec1,	// (0x0001551e) example_general_pane

0x5ecd,	// (0x0001552a) example_parent_pane_g1_ParamLimits

0x5ecd,	// (0x0001552a) example_parent_pane_g1

0x5ed9,	// (0x00015536) example_parent_pane_t1_ParamLimits

0x5ed9,	// (0x00015536) example_parent_pane_t1

0xbef4,	// (0x0001b551) popup_preview_text_window_ParamLimits

0xbef4,	// (0x0001b551) popup_preview_text_window

0x4283,	// (0x000138e0) list_single_pane_cp2_g4

0x29fe,	// (0x0001205b) bg_popup_preview_window_pane_ParamLimits

0x29fe,	// (0x0001205b) bg_popup_preview_window_pane

0x5c19,	// (0x00015276) popup_preview_text_window_t1_ParamLimits

0x5c19,	// (0x00015276) popup_preview_text_window_t1

0x5c37,	// (0x00015294) popup_preview_text_window_t2_ParamLimits

0x5c37,	// (0x00015294) popup_preview_text_window_t2

0x5c80,	// (0x000152dd) popup_preview_text_window_t3_ParamLimits

0x5c80,	// (0x000152dd) popup_preview_text_window_t3

0x5cc5,	// (0x00015322) popup_preview_text_window_t4_ParamLimits

0x5cc5,	// (0x00015322) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x0001ef55) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x0001ef55) popup_preview_text_window_t

0x5d43,	// (0x000153a0) scroll_pane_cp11

0x4bd8,	// (0x00014235) bg_popup_preview_window_pane_g1

0x5bd9,	// (0x00015236) bg_popup_preview_window_pane_g2

0x5be1,	// (0x0001523e) bg_popup_preview_window_pane_g3

0x5be9,	// (0x00015246) bg_popup_preview_window_pane_g4

0x5bf1,	// (0x0001524e) bg_popup_preview_window_pane_g5

0x5bf9,	// (0x00015256) bg_popup_preview_window_pane_g6

0x5c01,	// (0x0001525e) bg_popup_preview_window_pane_g7

0x5c09,	// (0x00015266) bg_popup_preview_window_pane_g8

0x0039,	// (0x0000f696) aid_popup_width_pane

0xbe70,	// (0x0001b4cd) popup_midp_note_alarm_window_ParamLimits

0xbe70,	// (0x0001b4cd) popup_midp_note_alarm_window

0x3489,	// (0x00012ae6) data_form_pane_ParamLimits

0xcff9,	// (0x0001c656) form_field_data_pane_g1

0xd003,	// (0x0001c660) form_field_data_pane_t1_ParamLimits

0x34b7,	// (0x00012b14) input_focus_pane_ParamLimits

0x34c5,	// (0x00012b22) data_form_wide_pane_ParamLimits

0x34d1,	// (0x00012b2e) form_field_data_wide_pane_g1

0x34f1,	// (0x00012b4e) form_field_data_wide_pane_t1_ParamLimits

0x2cad,	// (0x0001230a) input_focus_pane_cp6_ParamLimits

0xd13f,	// (0x0001c79c) input_popup_find_pane_g1_ParamLimits

0xd13f,	// (0x0001c79c) input_popup_find_pane_g1

0x05b5,	// (0x0000fc12) aid_navi_side_left_pane

0x05ca,	// (0x0000fc27) aid_navi_side_right_pane

0x55e6,	// (0x00014c43) bg_popup_window_pane_cp30_ParamLimits

0x55e6,	// (0x00014c43) bg_popup_window_pane_cp30

0x5660,	// (0x00014cbd) popup_midp_note_alarm_window_g1_ParamLimits

0x5660,	// (0x00014cbd) popup_midp_note_alarm_window_g1

0x5690,	// (0x00014ced) popup_midp_note_alarm_window_t1_ParamLimits

0x5690,	// (0x00014ced) popup_midp_note_alarm_window_t1

0x5731,	// (0x00014d8e) popup_midp_note_alarm_window_t2_ParamLimits

0x5731,	// (0x00014d8e) popup_midp_note_alarm_window_t2

0x57df,	// (0x00014e3c) popup_midp_note_alarm_window_t3_ParamLimits

0x57df,	// (0x00014e3c) popup_midp_note_alarm_window_t3

0x5811,	// (0x00014e6e) popup_midp_note_alarm_window_t4_ParamLimits

0x5811,	// (0x00014e6e) popup_midp_note_alarm_window_t4

0x5837,	// (0x00014e94) popup_midp_note_alarm_window_t5_ParamLimits

0x5837,	// (0x00014e94) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x0001eef2) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x0001eef2) popup_midp_note_alarm_window_t

0x58ef,	// (0x00014f4c) wait_bar_pane_cp1_ParamLimits

0x58ef,	// (0x00014f4c) wait_bar_pane_cp1

0x25ad,	// (0x00011c0a) wait_anim_pane_copy1

0x25ad,	// (0x00011c0a) wait_border_pane_copy1

0x52cc,	// (0x00014929) wait_border_pane_g1_copy1

0x3508,	// (0x00012b65) form_field_popup_pane_g1

0xd01d,	// (0x0001c67a) form_field_popup_pane_t1_ParamLimits

0x34b7,	// (0x00012b14) input_focus_pane_cp7_ParamLimits

0x3528,	// (0x00012b85) list_form_pane_ParamLimits

0x3534,	// (0x00012b91) form_field_popup_wide_pane_g1

0x353c,	// (0x00012b99) form_field_popup_wide_pane_t1_ParamLimits

0x34b7,	// (0x00012b14) input_focus_pane_cp8_ParamLimits

0x354e,	// (0x00012bab) list_form_wide_pane_ParamLimits

0xddd6,	// (0x0001d433) aid_size_cell_graphic_pane

0xd09c,	// (0x0001c6f9) data_form_pane_t1_ParamLimits

0xdcd4,	// (0x0001d331) data_form_wide_pane_t1_ParamLimits

0xd60b,	// (0x0001cc68) bg_status_flat_pane

0xc8bf,	// (0x0001bf1c) title_pane_t1_ParamLimits

0x2655,	// (0x00011cb2) title_pane_t2_ParamLimits

0x267b,	// (0x00011cd8) title_pane_t3_ParamLimits

0xf557,	// (0x0001ebb4) title_pane_t_ParamLimits

0x3c1c,	// (0x00013279) level_1_signal_ParamLimits

0x3c2e,	// (0x0001328b) level_2_signal_ParamLimits

0x3c41,	// (0x0001329e) level_3_signal_ParamLimits

0x3c54,	// (0x000132b1) level_4_signal_ParamLimits

0x3c67,	// (0x000132c4) level_5_signal_ParamLimits

0x3c7a,	// (0x000132d7) level_6_signal_ParamLimits

0x3c8d,	// (0x000132ea) level_7_signal_ParamLimits

0x3c1c,	// (0x00013279) level_1_battery_ParamLimits

0x3c2e,	// (0x0001328b) level_2_battery_ParamLimits

0x3c41,	// (0x0001329e) level_3_battery_ParamLimits

0x3c54,	// (0x000132b1) level_4_battery_ParamLimits

0x3c67,	// (0x000132c4) level_5_battery_ParamLimits

0x3c7a,	// (0x000132d7) level_6_battery_ParamLimits

0x3c8d,	// (0x000132ea) level_7_battery_ParamLimits

0x54eb,	// (0x00014b48) bg_status_flat_pane_g1

0x54f3,	// (0x00014b50) bg_status_flat_pane_g2

0x54fb,	// (0x00014b58) bg_status_flat_pane_g3

0x5503,	// (0x00014b60) bg_status_flat_pane_g4

0x550b,	// (0x00014b68) bg_status_flat_pane_g5

0x5513,	// (0x00014b70) bg_status_flat_pane_g6

0x551b,	// (0x00014b78) bg_status_flat_pane_g7

0xc94b,	// (0x0001bfa8) tabs_3_active_pane_t1_ParamLimits

0xc94b,	// (0x0001bfa8) tabs_3_passive_pane_t1_ParamLimits

0xc95d,	// (0x0001bfba) tabs_4_active_pane_t1_ParamLimits

0xc95d,	// (0x0001bfba) tabs_4_1_passive_pane_t1_ParamLimits

0xd14d,	// (0x0001c7aa) tabs_2_active_pane_t1_ParamLimits

0xd14d,	// (0x0001c7aa) tabs_2_passive_pane_t1_ParamLimits

0x268d,	// (0x00011cea) bg_active_tab_pane_cp4_ParamLimits

0xd15f,	// (0x0001c7bc) tabs_2_long_active_pane_t1_ParamLimits

0x467e,	// (0x00013cdb) bg_passive_tab_pane_cp4_ParamLimits

0x1178,	// (0x000107d5) list_single_midp_graphic_pane_t1_ParamLimits

0x268d,	// (0x00011cea) bg_active_tab_pane_cp5_ParamLimits

0xd172,	// (0x0001c7cf) tabs_3_long_active_pane_t1_ParamLimits

0x467e,	// (0x00013cdb) bg_passive_tab_pane_cp5_ParamLimits

0x1178,	// (0x000107d5) list_single_midp_graphic_pane_t1

0xd60b,	// (0x0001cc68) bg_status_flat_pane_ParamLimits

0x483a,	// (0x00013e97) indicator_pane_cp2_ParamLimits

0x483a,	// (0x00013e97) indicator_pane_cp2

0xd789,	// (0x0001cde6) navi_pane_srt_ParamLimits

0xd789,	// (0x0001cde6) navi_pane_srt

0x4989,	// (0x00013fe6) popup_clock_digital_analogue_window_cp1

0x2784,	// (0x00011de1) indicator_pane_t1

0x4352,	// (0x000139af) copy_highlight_pane

0x4352,	// (0x000139af) cursor_graphics_pane

0x4352,	// (0x000139af) graphic_within_text_pane

0x4352,	// (0x000139af) link_highlight_pane

0x5d06,	// (0x00015363) popup_preview_text_window_t5_ParamLimits

0x5d06,	// (0x00015363) popup_preview_text_window_t5

0x4480,	// (0x00013add) cursor_digital_pane

0x4480,	// (0x00013add) cursor_primary_pane

0x4491,	// (0x00013aee) cursor_primary_small_pane

0x4499,	// (0x00013af6) cursor_secondary_pane

0x44a1,	// (0x00013afe) cursor_title_pane

0x4480,	// (0x00013add) link_highlight_digital_pane

0x4488,	// (0x00013ae5) link_highlight_primary_pane

0x4491,	// (0x00013aee) link_highlight_primary_small_pane

0x4499,	// (0x00013af6) link_highlight_secondary_pane

0x44a1,	// (0x00013afe) link_highlight_title_pane

0x4480,	// (0x00013add) copy_highlight_digital_pane

0x4480,	// (0x00013add) copy_highlight_primary_pane

0x4491,	// (0x00013aee) copy_highlight_primary_small_pane

0x4499,	// (0x00013af6) copy_highlight_secondary_pane

0x44a1,	// (0x00013afe) copy_highlight_title_pane

0x4499,	// (0x00013af6) graphic_text_digital_pane

0x5589,	// (0x00014be6) graphic_text_primary_pane

0x5592,	// (0x00014bef) graphic_text_primary_small_pane

0x4491,	// (0x00013aee) graphic_text_secondary_pane

0x4480,	// (0x00013add) graphic_text_title_pane

0xd41f,	// (0x0001ca7c) cursor_primary_pane_g1

0x557b,	// (0x00014bd8) cursor_text_primary_t1

0xda1d,	// (0x0001d07a) cursor_primary_small_pane_g1

0x556d,	// (0x00014bca) cursor_text_primary_small_t1

0xda13,	// (0x0001d070) cursor_primary_small_pane_g1_copy1

0x5555,	// (0x00014bb2) cursor_text_primary_small_t1_copy1

0x5533,	// (0x00014b90) cursor_text_title_t1

0xda09,	// (0x0001d066) cursor_title_pane_g1

0xd41f,	// (0x0001ca7c) cursor_digital_pane_g1

0x44b3,	// (0x00013b10) cursor_text_digital_t1

0x44d8,	// (0x00013b35) link_highlight_primary_pane_g1

0x54dc,	// (0x00014b39) link_highlight_primary_pane_t1

0x44c1,	// (0x00013b1e) link_highlight_primary_small_pane_g1

0x44c9,	// (0x00013b26) link_highlight_primary_small_pane_t1

0x44d8,	// (0x00013b35) link_highlight_secondary_pane_g1

0x44e0,	// (0x00013b3d) link_highlight_secondary_pane_t1

0x5450,	// (0x00014aad) link_highlight_title_pane_g1

0x5458,	// (0x00014ab5) link_highlight_title_pane_t1

0x5439,	// (0x00014a96) link_highlight_digital_pane_g1

0x5441,	// (0x00014a9e) link_highlight_digital_pane_t1

0x5311,	// (0x0001496e) copy_highlight_primary_pane_g1

0x5319,	// (0x00014976) copy_highlight_primary_pane_t1

0x52eb,	// (0x00014948) copy_highlight_primary_small_pane_g1

0x5302,	// (0x0001495f) copy_highlight_primary_small_pane_t1

0x44ef,	// (0x00013b4c) copy_highlight_secondary_pane_g1

0x44f7,	// (0x00013b54) copy_highlight_secondary_pane_t1

0x52eb,	// (0x00014948) copy_highlight_title_pane_g1

0x52f3,	// (0x00014950) copy_highlight_title_pane_t1

0x5311,	// (0x0001496e) copy_highlight_digital_pane_g1

0x6693,	// (0x00015cf0) copy_highlight_digital_pane_t1

0x65e7,	// (0x00015c44) graphic_text_primary_pane_g1

0x6677,	// (0x00015cd4) graphic_text_primary_pane_t1

0x6685,	// (0x00015ce2) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x0001f021) graphic_text_primary_pane_t

0x6653,	// (0x00015cb0) graphic_text_primary_small_pane_g1

0x665b,	// (0x00015cb8) graphic_text_primary_small_pane_t1

0x6669,	// (0x00015cc6) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x0001f01c) graphic_text_primary_small_pane_t

0x662f,	// (0x00015c8c) graphic_text_secondary_pane_g1

0x6637,	// (0x00015c94) graphic_text_secondary_pane_t1

0x6645,	// (0x00015ca2) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x0001f017) graphic_text_secondary_pane_t

0x660b,	// (0x00015c68) graphic_text_title_pane_g1

0x6613,	// (0x00015c70) graphic_text_title_pane_t1

0x6621,	// (0x00015c7e) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x0001f012) graphic_text_title_pane_t

0x65e7,	// (0x00015c44) graphic_text_digital_pane_g1

0x65ef,	// (0x00015c4c) graphic_text_digital_pane_t1

0x65fd,	// (0x00015c5a) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x0001f00d) graphic_text_digital_pane_t

0x268d,	// (0x00011cea) navi_icon_pane_srt_ParamLimits

0x268d,	// (0x00011cea) navi_icon_pane_srt

0x25ad,	// (0x00011c0a) navi_midp_pane_srt

0x25ad,	// (0x00011c0a) navi_navi_pane_srt

0x268d,	// (0x00011cea) navi_text_pane_srt_ParamLimits

0x268d,	// (0x00011cea) navi_text_pane_srt

0x65b2,	// (0x00015c0f) navi_navi_icon_text_pane_srt

0x65ba,	// (0x00015c17) navi_navi_pane_srt_g1_ParamLimits

0x65ba,	// (0x00015c17) navi_navi_pane_srt_g1

0x65cc,	// (0x00015c29) navi_navi_pane_srt_g2_ParamLimits

0x65cc,	// (0x00015c29) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x0001f008) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x0001f008) navi_navi_pane_srt_g

0x65de,	// (0x00015c3b) navi_navi_tabs_pane_srt

0x65b2,	// (0x00015c0f) navi_navi_text_pane_srt

0x65b2,	// (0x00015c0f) navi_navi_volume_pane_srt

0x65a3,	// (0x00015c00) navi_navi_text_pane_srt_t1

0x14f2,	// (0x00010b4f) navi_navi_volume_pane_srt_g1

0x14fa,	// (0x00010b57) volume_small_pane_srt_ParamLimits

0x14fa,	// (0x00010b57) volume_small_pane_srt

0x0895,	// (0x0000fef2) volume_small_pane_srt_g1_ParamLimits

0x0895,	// (0x0000fef2) volume_small_pane_srt_g1

0x08a5,	// (0x0000ff02) volume_small_pane_srt_g2_ParamLimits

0x08a5,	// (0x0000ff02) volume_small_pane_srt_g2

0x08b6,	// (0x0000ff13) volume_small_pane_srt_g3_ParamLimits

0x08b6,	// (0x0000ff13) volume_small_pane_srt_g3

0x08c7,	// (0x0000ff24) volume_small_pane_srt_g4_ParamLimits

0x08c7,	// (0x0000ff24) volume_small_pane_srt_g4

0x08d8,	// (0x0000ff35) volume_small_pane_srt_g5_ParamLimits

0x08d8,	// (0x0000ff35) volume_small_pane_srt_g5

0x08e9,	// (0x0000ff46) volume_small_pane_srt_g6_ParamLimits

0x08e9,	// (0x0000ff46) volume_small_pane_srt_g6

0x08fa,	// (0x0000ff57) volume_small_pane_srt_g7_ParamLimits

0x08fa,	// (0x0000ff57) volume_small_pane_srt_g7

0x090b,	// (0x0000ff68) volume_small_pane_srt_g8_ParamLimits

0x090b,	// (0x0000ff68) volume_small_pane_srt_g8

0x091c,	// (0x0000ff79) volume_small_pane_srt_g9_ParamLimits

0x091c,	// (0x0000ff79) volume_small_pane_srt_g9

0x092d,	// (0x0000ff8a) volume_small_pane_srt_g10_ParamLimits

0x092d,	// (0x0000ff8a) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001edb5) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001edb5) volume_small_pane_srt_g

0x2aa7,	// (0x00012104) query_popup_data_pane_cp2

0x6589,	// (0x00015be6) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6589,	// (0x00015be6) navi_navi_icon_text_pane_srt_t1

0x5589,	// (0x00014be6) navi_tabs_2_long_pane_srt

0x5589,	// (0x00014be6) navi_tabs_2_pane_srt

0x5589,	// (0x00014be6) navi_tabs_3_long_pane_srt

0x5589,	// (0x00014be6) navi_tabs_3_pane_srt

0x5589,	// (0x00014be6) navi_tabs_4_pane_srt

0x14d2,	// (0x00010b2f) tabs_2_active_pane_srt_ParamLimits

0x14d2,	// (0x00010b2f) tabs_2_active_pane_srt

0x14e2,	// (0x00010b3f) tabs_2_passive_pane_srt_ParamLimits

0x14e2,	// (0x00010b3f) tabs_2_passive_pane_srt

0x4cfa,	// (0x00014357) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4cfa,	// (0x00014357) bg_passive_tab_pane_cp1_srt

0x6555,	// (0x00015bb2) bg_passive_tab_pane_g1_cp1_srt

0x3f94,	// (0x000135f1) bg_passive_tab_pane_g2_cp1_srt

0x655e,	// (0x00015bbb) bg_passive_tab_pane_g3_cp1_srt

0x2922,	// (0x00011f7f) bg_active_tab_pane_cp1_srt_ParamLimits

0x2922,	// (0x00011f7f) bg_active_tab_pane_cp1_srt

0x6567,	// (0x00015bc4) tabs_2_active_pane_srt_g1

0xde18,	// (0x0001d475) tabs_2_active_pane_srt_t1_ParamLimits

0xde18,	// (0x0001d475) tabs_2_active_pane_srt_t1

0x6555,	// (0x00015bb2) bg_active_tab_pane_g1_cp1_srt

0x3f94,	// (0x000135f1) bg_active_tab_pane_g2_cp1_srt

0x655e,	// (0x00015bbb) bg_active_tab_pane_g3_cp1_srt

0x149f,	// (0x00010afc) tabs_3_active_pane_srt_ParamLimits

0x149f,	// (0x00010afc) tabs_3_active_pane_srt

0x14b0,	// (0x00010b0d) tabs_3_passive_pane_cp_srt_ParamLimits

0x14b0,	// (0x00010b0d) tabs_3_passive_pane_cp_srt

0x14c1,	// (0x00010b1e) tabs_3_passive_pane_srt_ParamLimits

0x14c1,	// (0x00010b1e) tabs_3_passive_pane_srt

0x4cfa,	// (0x00014357) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4cfa,	// (0x00014357) bg_passive_tab_pane_cp2_srt

0x4506,	// (0x00013b63) bg_passive_tab_pane_g1_cp2_srt

0x3f94,	// (0x000135f1) bg_passive_tab_pane_g2_cp2_srt

0x450f,	// (0x00013b6c) bg_passive_tab_pane_g3_cp2_srt

0x2922,	// (0x00011f7f) bg_active_tab_pane_cp2_srt_ParamLimits

0x2922,	// (0x00011f7f) bg_active_tab_pane_cp2_srt

0x653b,	// (0x00015b98) tabs_3_active_pane_srt_g1

0xde02,	// (0x0001d45f) tabs_3_active_pane_srt_t1_ParamLimits

0xde02,	// (0x0001d45f) tabs_3_active_pane_srt_t1

0x4506,	// (0x00013b63) bg_active_tab_pane_g1_cp2_srt

0x3f94,	// (0x000135f1) bg_active_tab_pane_g2_cp2_srt

0x450f,	// (0x00013b6c) bg_active_tab_pane_g3_cp2_srt

0x1457,	// (0x00010ab4) tabs_4_active_pane_srt_ParamLimits

0x1457,	// (0x00010ab4) tabs_4_active_pane_srt

0x1469,	// (0x00010ac6) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1469,	// (0x00010ac6) tabs_4_passive_pane_cp2_srt

0x0a9c,	// (0x000100f9) aid_size_cell_toolbar

0x60cd,	// (0x0001572a) main_idle_act_pane_ParamLimits

0x0c67,	// (0x000102c4) popup_large_graphic_colour_window_ParamLimits

0xc180,	// (0x0001b7dd) popup_toolbar_window_ParamLimits

0xc180,	// (0x0001b7dd) popup_toolbar_window

0x62d3,	// (0x00015930) list_single_graphic_2heading_pane_ParamLimits

0x62d3,	// (0x00015930) list_single_graphic_2heading_pane

0x39cb,	// (0x00013028) aid_size_cell_apps_grid_lsc_pane

0x39dd,	// (0x0001303a) aid_size_cell_apps_grid_prt_pane

0x467e,	// (0x00013cdb) bg_wml_button_pane_cp1_ParamLimits

0x467e,	// (0x00013cdb) bg_wml_button_pane_cp1

0xd9b6,	// (0x0001d013) form_midp_field_text_pane_t1_ParamLimits

0x4cfa,	// (0x00014357) input_focus_pane_cp050_ParamLimits

0x4f70,	// (0x000145cd) list_midp_form_text_pane_ParamLimits

0x4f16,	// (0x00014573) input_focus_pane_cp051_ParamLimits

0x4f2a,	// (0x00014587) list_midp_choice_pane_ParamLimits

0xd954,	// (0x0001cfb1) list_single_2graphic_pane_cp3_ParamLimits

0xd954,	// (0x0001cfb1) list_single_2graphic_pane_cp3

0xd967,	// (0x0001cfc4) list_single_midp_graphic_pane_ParamLimits

0xd967,	// (0x0001cfc4) list_single_midp_graphic_pane

0x107b,	// (0x000106d8) list_single_graphic_2heading_pane_g1_ParamLimits

0x107b,	// (0x000106d8) list_single_graphic_2heading_pane_g1

0x1087,	// (0x000106e4) list_single_graphic_2heading_pane_g4_ParamLimits

0x1087,	// (0x000106e4) list_single_graphic_2heading_pane_g4

0x1093,	// (0x000106f0) list_single_graphic_2heading_pane_g5_ParamLimits

0x1093,	// (0x000106f0) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001ee08) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001ee08) list_single_graphic_2heading_pane_g

0x109f,	// (0x000106fc) list_single_graphic_2heading_pane_t1_ParamLimits

0x109f,	// (0x000106fc) list_single_graphic_2heading_pane_t1

0x10b3,	// (0x00010710) list_single_graphic_2heading_pane_t2_ParamLimits

0x10b3,	// (0x00010710) list_single_graphic_2heading_pane_t2

0x10cf,	// (0x0001072c) list_single_graphic_2heading_pane_t3_ParamLimits

0x10cf,	// (0x0001072c) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001ee0f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001ee0f) list_single_graphic_2heading_pane_t

0x4ae8,	// (0x00014145) bg_popup_sub_pane_cp2

0x4b12,	// (0x0001416f) grid_toobar_pane

0x10e7,	// (0x00010744) cell_toolbar_pane_ParamLimits

0x10e7,	// (0x00010744) cell_toolbar_pane

0x4b7c,	// (0x000141d9) cell_toolbar_pane_g1_ParamLimits

0x4b7c,	// (0x000141d9) cell_toolbar_pane_g1

0x4b90,	// (0x000141ed) cell_toolbar_pane_g2_ParamLimits

0x4b90,	// (0x000141ed) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001ee1d) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001ee1d) cell_toolbar_pane_g

0x4bb2,	// (0x0001420f) grid_highlight_pane_cp2_ParamLimits

0x4bb2,	// (0x0001420f) grid_highlight_pane_cp2

0x4bcc,	// (0x00014229) toolbar_button_pane

0x4bd8,	// (0x00014235) toolbar_button_pane_g1

0x4be0,	// (0x0001423d) toolbar_button_pane_g2

0x4be8,	// (0x00014245) toolbar_button_pane_g3

0x4bf0,	// (0x0001424d) toolbar_button_pane_g4

0x4bf8,	// (0x00014255) toolbar_button_pane_g5

0x4c00,	// (0x0001425d) toolbar_button_pane_g6

0x4c08,	// (0x00014265) toolbar_button_pane_g7

0x4c10,	// (0x0001426d) toolbar_button_pane_g8

0x4c18,	// (0x00014275) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001ee22) toolbar_button_pane_g

0x111f,	// (0x0001077c) list_single_2graphic_pane_g1_cp3_ParamLimits

0x111f,	// (0x0001077c) list_single_2graphic_pane_g1_cp3

0xc1d8,	// (0x0001b835) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc1d8,	// (0x0001b835) list_single_2graphic_pane_g2_cp3

0x113c,	// (0x00010799) list_single_2graphic_pane_g3_cp3

0x1144,	// (0x000107a1) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1144,	// (0x000107a1) list_single_2graphic_pane_g4_cp3

0x1150,	// (0x000107ad) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1150,	// (0x000107ad) list_single_2graphic_pane_t1_cp3

0x116c,	// (0x000107c9) list_single_midp_graphic_pane_g2_ParamLimits

0x116c,	// (0x000107c9) list_single_midp_graphic_pane_g2

0x0aa4,	// (0x00010101) aid_zoom_text_primary

0x0aac,	// (0x00010109) aid_zoom_text_secondary

0xd477,	// (0x0001cad4) status_small_pane_g7_ParamLimits

0xd477,	// (0x0001cad4) status_small_pane_g7

0xd49a,	// (0x0001caf7) status_small_pane_t1_ParamLimits

0xc89b,	// (0x0001bef8) title_pane_g2

0x0003,

0xf54e,	// (0x0001ebab) title_pane_g

0xcb13,	// (0x0001c170) aid_size_cell_colour_1_pane_ParamLimits

0xcb13,	// (0x0001c170) aid_size_cell_colour_1_pane

0xcb27,	// (0x0001c184) aid_size_cell_colour_2_pane_ParamLimits

0xcb27,	// (0x0001c184) aid_size_cell_colour_2_pane

0xcb3b,	// (0x0001c198) aid_size_cell_colour_3_pane_ParamLimits

0xcb3b,	// (0x0001c198) aid_size_cell_colour_3_pane

0xcb4f,	// (0x0001c1ac) aid_size_cell_colour_4_pane_ParamLimits

0xcb4f,	// (0x0001c1ac) aid_size_cell_colour_4_pane

0x04f2,	// (0x0000fb4f) title_pane_stacon_g1_ParamLimits

0x04f2,	// (0x0000fb4f) title_pane_stacon_g1

0x5370,	// (0x000149cd) popup_note_wait_window_g3_ParamLimits

0x5370,	// (0x000149cd) popup_note_wait_window_g3

0x53e6,	// (0x00014a43) popup_note_wait_window_t5_ParamLimits

0x53e6,	// (0x00014a43) popup_note_wait_window_t5

0x25ad,	// (0x00011c0a) main_feb_china_hwr_fs_writing_pane

0xbb88,	// (0x0001b1e5) popup_feb_china_hwr_fs_window_ParamLimits

0xbb88,	// (0x0001b1e5) popup_feb_china_hwr_fs_window

0xc1e9,	// (0x0001b846) aid_size_cell_hwr_fs_ParamLimits

0xc1e9,	// (0x0001b846) aid_size_cell_hwr_fs

0x4cfa,	// (0x00014357) bg_popup_sub_pane_cp3_ParamLimits

0x4cfa,	// (0x00014357) bg_popup_sub_pane_cp3

0xc1fe,	// (0x0001b85b) grid_hwr_fs_pane_ParamLimits

0xc1fe,	// (0x0001b85b) grid_hwr_fs_pane

0x11bb,	// (0x00010818) linegrid_hwr_fs_pane_ParamLimits

0x11bb,	// (0x00010818) linegrid_hwr_fs_pane

0xc216,	// (0x0001b873) cell_hwr_fs_pane_ParamLimits

0xc216,	// (0x0001b873) cell_hwr_fs_pane

0x4d06,	// (0x00014363) linegrid_hwr_fs_pane_g1_ParamLimits

0x4d06,	// (0x00014363) linegrid_hwr_fs_pane_g1

0xd928,	// (0x0001cf85) linegrid_hwr_fs_pane_g2_ParamLimits

0xd928,	// (0x0001cf85) linegrid_hwr_fs_pane_g2

0x4d24,	// (0x00014381) linegrid_hwr_fs_pane_g3_ParamLimits

0x4d24,	// (0x00014381) linegrid_hwr_fs_pane_g3

0x11ed,	// (0x0001084a) linegrid_hwr_fs_pane_g4_ParamLimits

0x11ed,	// (0x0001084a) linegrid_hwr_fs_pane_g4

0x1207,	// (0x00010864) linegrid_hwr_fs_pane_g5_ParamLimits

0x1207,	// (0x00010864) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x0001ee48) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x0001ee48) linegrid_hwr_fs_pane_g

0x4d30,	// (0x0001438d) cell_hwr_fs_pane_g1_ParamLimits

0x4d30,	// (0x0001438d) cell_hwr_fs_pane_g1

0x4a1f,	// (0x0001407c) cell_hwr_fs_pane_g2_ParamLimits

0x4a1f,	// (0x0001407c) cell_hwr_fs_pane_g2

0xd93a,	// (0x0001cf97) cell_hwr_fs_pane_g3_ParamLimits

0xd93a,	// (0x0001cf97) cell_hwr_fs_pane_g3

0xd947,	// (0x0001cfa4) cell_hwr_fs_pane_g4_ParamLimits

0xd947,	// (0x0001cfa4) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x0001ee53) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0001ee53) cell_hwr_fs_pane_g

0xc23c,	// (0x0001b899) cell_hwr_fs_pane_t1

0x25ad,	// (0x00011c0a) grid_highlight_pane_cp6

0x25ad,	// (0x00011c0a) main_idle_act2_pane

0x3782,	// (0x00012ddf) aid_inside_area_popup_secondary

0xda27,	// (0x0001d084) aid_inside_area_window_primary_ParamLimits

0xda27,	// (0x0001d084) aid_inside_area_window_primary

0x66a2,	// (0x00015cff) ai2_news_ticker_pane

0x66aa,	// (0x00015d07) aid_size_cell_ai1_link_ParamLimits

0x66aa,	// (0x00015d07) aid_size_cell_ai1_link

0xde2e,	// (0x0001d48b) popup_ai2_data_window_ParamLimits

0xde2e,	// (0x0001d48b) popup_ai2_data_window

0x66da,	// (0x00015d37) popup_ai2_link_window_ParamLimits

0x66da,	// (0x00015d37) popup_ai2_link_window

0x4cfa,	// (0x00014357) bg_popup_sub_pane_cp4_ParamLimits

0x4cfa,	// (0x00014357) bg_popup_sub_pane_cp4

0x66ee,	// (0x00015d4b) grid_ai2_link_pane_ParamLimits

0x66ee,	// (0x00015d4b) grid_ai2_link_pane

0x6705,	// (0x00015d62) popup_ai2_link_window_g1_ParamLimits

0x6705,	// (0x00015d62) popup_ai2_link_window_g1

0x6711,	// (0x00015d6e) popup_ai2_link_window_g2_ParamLimits

0x6711,	// (0x00015d6e) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x0001f026) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x0001f026) popup_ai2_link_window_g

0x6720,	// (0x00015d7d) ai2_mp_button_pane

0x6728,	// (0x00015d85) ai2_mp_volume_pane

0x4f16,	// (0x00014573) bg_popup_sub_pane_cp5_ParamLimits

0x4f16,	// (0x00014573) bg_popup_sub_pane_cp5

0x6730,	// (0x00015d8d) heading_ai2_gene_pane_ParamLimits

0x6730,	// (0x00015d8d) heading_ai2_gene_pane

0x673c,	// (0x00015d99) list_ai2_gene_pane_ParamLimits

0x673c,	// (0x00015d99) list_ai2_gene_pane

0x6784,	// (0x00015de1) cell_ai2_link_pane_ParamLimits

0x6784,	// (0x00015de1) cell_ai2_link_pane

0x679a,	// (0x00015df7) cell_ai2_link_pane_g1

0x25ad,	// (0x00011c0a) grid_highlight_pane_cp7

0x150f,	// (0x00010b6c) ai2_mp_volume_pane_g1

0x686a,	// (0x00015ec7) ai2_mp_volume_pane_g2

0xde58,	// (0x0001d4b5) list_ai2_gene_pane_t1

0x6872,	// (0x00015ecf) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x0001f03f) ai2_mp_volume_pane_g

0x1517,	// (0x00010b74) volume_small_pane_cp3

0x687a,	// (0x00015ed7) aid_size_cell_ai2_button

0x6882,	// (0x00015edf) grid_ai2_button_pane

0x688b,	// (0x00015ee8) cell_ai2_button_pane_ParamLimits

0x688b,	// (0x00015ee8) cell_ai2_button_pane

0x25a3,	// (0x00011c00) cell_ai2_button_pane_g1

0x25ad,	// (0x00011c0a) grid_highlight_pane_cp8

0x682a,	// (0x00015e87) ai2_gene_pane_t1_ParamLimits

0x682a,	// (0x00015e87) ai2_gene_pane_t1

0xbb12,	// (0x0001b16f) aid_height_parent_landscape

0xdb80,	// (0x0001d1dd) aid_height_set_list

0x60cd,	// (0x0001572a) aid_size_parent

0xddd6,	// (0x0001d433) aid_size_cell_graphic_pane_ParamLimits

0x674c,	// (0x00015da9) popup_ai2_data_window_g1_ParamLimits

0x674c,	// (0x00015da9) popup_ai2_data_window_g1

0x6758,	// (0x00015db5) ai2_news_ticker_pane_g1

0x6760,	// (0x00015dbd) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x0001f02b) ai2_news_ticker_pane_g

0x6768,	// (0x00015dc5) ai2_news_ticker_pane_t1

0x6776,	// (0x00015dd3) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x0001f030) ai2_news_ticker_pane_t

0x67a3,	// (0x00015e00) heading_ai2_gene_pane_g1

0x67ab,	// (0x00015e08) heading_ai2_gene_pane_t1_ParamLimits

0x67ab,	// (0x00015e08) heading_ai2_gene_pane_t1

0x67c0,	// (0x00015e1d) list_highlight_pane_cp6

0xde42,	// (0x0001d49f) ai2_gene_pane_ParamLimits

0xde42,	// (0x0001d49f) ai2_gene_pane

0xde66,	// (0x0001d4c3) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x0001f035) list_ai2_gene_pane_t

0x67fb,	// (0x00015e58) list_highlight_pane_cp8_ParamLimits

0x67fb,	// (0x00015e58) list_highlight_pane_cp8

0x680c,	// (0x00015e69) ai2_gene_pane_g1_ParamLimits

0x680c,	// (0x00015e69) ai2_gene_pane_g1

0x681e,	// (0x00015e7b) ai2_gene_pane_g2_ParamLimits

0x681e,	// (0x00015e7b) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x0001f03a) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x0001f03a) ai2_gene_pane_g

0x2ed2,	// (0x0001252f) scroll_pane_cp12

0xbacf,	// (0x0001b12c) control_pane_t3_ParamLimits

0xbacf,	// (0x0001b12c) control_pane_t3

0xd48b,	// (0x0001cae8) status_small_pane_g8_ParamLimits

0xd48b,	// (0x0001cae8) status_small_pane_g8

0xbc1d,	// (0x0001b27a) popup_find_window_ParamLimits

0xbeaa,	// (0x0001b507) popup_note_image_window_ParamLimits

0x4b4e,	// (0x000141ab) list_double2_graphic_pane_vc_g1_ParamLimits

0x4b4e,	// (0x000141ab) list_double2_graphic_pane_vc_g1

0x428b,	// (0x000138e8) list_double2_graphic_pane_vc_g2_ParamLimits

0x428b,	// (0x000138e8) list_double2_graphic_pane_vc_g2

0x4b5a,	// (0x000141b7) list_double2_graphic_pane_vc_g3_ParamLimits

0x4b5a,	// (0x000141b7) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001ee16) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001ee16) list_double2_graphic_pane_vc_g

0x4b66,	// (0x000141c3) list_double2_graphic_pane_vc_t1_ParamLimits

0x4b66,	// (0x000141c3) list_double2_graphic_pane_vc_t1

0x428b,	// (0x000138e8) list_single_heading_pane_vc_g1_ParamLimits

0x428b,	// (0x000138e8) list_single_heading_pane_vc_g1

0x4b5a,	// (0x000141b7) list_single_heading_pane_vc_g2_ParamLimits

0x4b5a,	// (0x000141b7) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ec25) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ec25) list_single_heading_pane_vc_g

0x4c20,	// (0x0001427d) list_single_heading_pane_vc_t1_ParamLimits

0x4c20,	// (0x0001427d) list_single_heading_pane_vc_t1

0x4c36,	// (0x00014293) list_single_heading_pane_vc_t2_ParamLimits

0x4c36,	// (0x00014293) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x0001ee37) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x0001ee37) list_single_heading_pane_vc_t

0x4c48,	// (0x000142a5) list_setting_number_pane_vc_g1_ParamLimits

0x4c48,	// (0x000142a5) list_setting_number_pane_vc_g1

0x4c54,	// (0x000142b1) list_setting_number_pane_vc_g2_ParamLimits

0x4c54,	// (0x000142b1) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x0001ee3c) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x0001ee3c) list_setting_number_pane_vc_g

0x4c60,	// (0x000142bd) list_setting_number_pane_vc_t1_ParamLimits

0x4c60,	// (0x000142bd) list_setting_number_pane_vc_t1

0x4c74,	// (0x000142d1) list_setting_number_pane_vc_t2_ParamLimits

0x4c74,	// (0x000142d1) list_setting_number_pane_vc_t2

0x4c90,	// (0x000142ed) list_setting_number_pane_vc_t3_ParamLimits

0x4c90,	// (0x000142ed) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x0001ee41) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x0001ee41) list_setting_number_pane_vc_t

0x4cbe,	// (0x0001431b) set_value_pane_vc_ParamLimits

0x4cbe,	// (0x0001431b) set_value_pane_vc

0x62d3,	// (0x00015930) list_double2_graphic_pane_vc_ParamLimits

0x62d3,	// (0x00015930) list_double2_graphic_pane_vc

0x62d3,	// (0x00015930) list_double2_large_graphic_pane_vc_ParamLimits

0x62d3,	// (0x00015930) list_double2_large_graphic_pane_vc

0x62d3,	// (0x00015930) list_double2_pane_vc_ParamLimits

0x62d3,	// (0x00015930) list_double2_pane_vc

0x62d3,	// (0x00015930) list_double_graphic_heading_pane_vc_ParamLimits

0x62d3,	// (0x00015930) list_double_graphic_heading_pane_vc

0x62d3,	// (0x00015930) list_double_graphic_pane_vc_ParamLimits

0x62d3,	// (0x00015930) list_double_graphic_pane_vc

0x62d3,	// (0x00015930) list_double_heading_pane_vc_ParamLimits

0x62d3,	// (0x00015930) list_double_heading_pane_vc

0x62e5,	// (0x00015942) list_double_large_graphic_pane_vc_ParamLimits

0x62e5,	// (0x00015942) list_double_large_graphic_pane_vc

0x62d3,	// (0x00015930) list_double_number_pane_vc_ParamLimits

0x62d3,	// (0x00015930) list_double_number_pane_vc

0x62d3,	// (0x00015930) list_double_pane_vc_ParamLimits

0x62d3,	// (0x00015930) list_double_pane_vc

0x62d3,	// (0x00015930) list_double_time_pane_vc_ParamLimits

0x62d3,	// (0x00015930) list_double_time_pane_vc

0x62d3,	// (0x00015930) list_setting_number_pane_vc_ParamLimits

0x62d3,	// (0x00015930) list_setting_number_pane_vc

0x62d3,	// (0x00015930) list_setting_pane_vc_ParamLimits

0x62d3,	// (0x00015930) list_setting_pane_vc

0x62d3,	// (0x00015930) list_single_graphic_heading_pane_vc_ParamLimits

0x62d3,	// (0x00015930) list_single_graphic_heading_pane_vc

0x62d3,	// (0x00015930) list_single_heading_pane_vc_ParamLimits

0x62d3,	// (0x00015930) list_single_heading_pane_vc

0x62d3,	// (0x00015930) list_single_number_heading_pane_vc_ParamLimits

0x62d3,	// (0x00015930) list_single_number_heading_pane_vc

0x4b4e,	// (0x000141ab) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4b4e,	// (0x000141ab) list_double_graphic_heading_pane_vc_g1

0x68bf,	// (0x00015f1c) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x68bf,	// (0x00015f1c) list_double_graphic_heading_pane_vc_g2

0x68cb,	// (0x00015f28) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x68cb,	// (0x00015f28) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e9,	// (0x0001f046) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e9,	// (0x0001f046) list_double_graphic_heading_pane_vc_g

0x68d7,	// (0x00015f34) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x68d7,	// (0x00015f34) list_double_graphic_heading_pane_vc_t1

0x68f3,	// (0x00015f50) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x68f3,	// (0x00015f50) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f0,	// (0x0001f04d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f0,	// (0x0001f04d) list_double_graphic_heading_pane_vc_t

0x4c48,	// (0x000142a5) list_setting_pane_vc_g1_ParamLimits

0x4c48,	// (0x000142a5) list_setting_pane_vc_g1

0x4c54,	// (0x000142b1) list_setting_pane_vc_g2_ParamLimits

0x4c54,	// (0x000142b1) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x0001ee3c) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x0001ee3c) list_setting_pane_vc_g

0x6b1e,	// (0x0001617b) list_setting_pane_vc_t1_ParamLimits

0x6b1e,	// (0x0001617b) list_setting_pane_vc_t1

0x6b3a,	// (0x00016197) list_setting_pane_vc_t2_ParamLimits

0x6b3a,	// (0x00016197) list_setting_pane_vc_t2

0x0001,

0xfa1e,	// (0x0001f07b) list_setting_pane_vc_t_ParamLimits

0xfa1e,	// (0x0001f07b) list_setting_pane_vc_t

0x4cbe,	// (0x0001431b) set_value_pane_cp_vc_ParamLimits

0x4cbe,	// (0x0001431b) set_value_pane_cp_vc

0x428b,	// (0x000138e8) list_single_number_heading_pane_vc_g1_ParamLimits

0x428b,	// (0x000138e8) list_single_number_heading_pane_vc_g1

0x4b5a,	// (0x000141b7) list_single_number_heading_pane_vc_g2_ParamLimits

0x4b5a,	// (0x000141b7) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ec25) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ec25) list_single_number_heading_pane_vc_g

0x6b56,	// (0x000161b3) list_single_number_heading_pane_vc_t1_ParamLimits

0x6b56,	// (0x000161b3) list_single_number_heading_pane_vc_t1

0x6b6c,	// (0x000161c9) list_single_number_heading_pane_vc_t2_ParamLimits

0x6b6c,	// (0x000161c9) list_single_number_heading_pane_vc_t2

0x6b7e,	// (0x000161db) list_single_number_heading_pane_vc_t3_ParamLimits

0x6b7e,	// (0x000161db) list_single_number_heading_pane_vc_t3

0x0002,

0xfa23,	// (0x0001f080) list_single_number_heading_pane_vc_t_ParamLimits

0xfa23,	// (0x0001f080) list_single_number_heading_pane_vc_t

0x4b4e,	// (0x000141ab) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4b4e,	// (0x000141ab) list_single_graphic_heading_pane_vc_g1

0x428b,	// (0x000138e8) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x428b,	// (0x000138e8) list_single_graphic_heading_pane_vc_g4

0x4b5a,	// (0x000141b7) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4b5a,	// (0x000141b7) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001ee16) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001ee16) list_single_graphic_heading_pane_vc_g

0x6b90,	// (0x000161ed) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6b90,	// (0x000161ed) list_single_graphic_heading_pane_vc_t1

0x6ba6,	// (0x00016203) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6ba6,	// (0x00016203) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2a,	// (0x0001f087) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2a,	// (0x0001f087) list_single_graphic_heading_pane_vc_t

0x428b,	// (0x000138e8) list_double2_pane_vc_g1_ParamLimits

0x428b,	// (0x000138e8) list_double2_pane_vc_g1

0x4b5a,	// (0x000141b7) list_double2_pane_vc_g2_ParamLimits

0x4b5a,	// (0x000141b7) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ec25) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ec25) list_double2_pane_vc_g

0x6bb8,	// (0x00016215) list_double2_pane_vc_t1_ParamLimits

0x6bb8,	// (0x00016215) list_double2_pane_vc_t1

0x6bce,	// (0x0001622b) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6bce,	// (0x0001622b) list_double2_large_graphic_pane_vc_g1

0x428b,	// (0x000138e8) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x428b,	// (0x000138e8) list_double2_large_graphic_pane_vc_g2

0x4b5a,	// (0x000141b7) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4b5a,	// (0x000141b7) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0001ec42) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0001ec42) list_double2_large_graphic_pane_vc_g

0x6bda,	// (0x00016237) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6bda,	// (0x00016237) list_double2_large_graphic_pane_vc_t1

0x6bf0,	// (0x0001624d) list_double_time_pane_vc_g1_ParamLimits

0x6bf0,	// (0x0001624d) list_double_time_pane_vc_g1

0x6bfc,	// (0x00016259) list_double_time_pane_vc_g2_ParamLimits

0x6bfc,	// (0x00016259) list_double_time_pane_vc_g2

0x0001,

0xfa2f,	// (0x0001f08c) list_double_time_pane_vc_g_ParamLimits

0xfa2f,	// (0x0001f08c) list_double_time_pane_vc_g

0x6c08,	// (0x00016265) list_double_time_pane_vc_t1_ParamLimits

0x6c08,	// (0x00016265) list_double_time_pane_vc_t1

0x6c2c,	// (0x00016289) list_double_time_pane_vc_t2_ParamLimits

0x6c2c,	// (0x00016289) list_double_time_pane_vc_t2

0x6c5b,	// (0x000162b8) list_double_time_pane_vc_t3_ParamLimits

0x6c5b,	// (0x000162b8) list_double_time_pane_vc_t3

0x6c6d,	// (0x000162ca) list_double_time_pane_vc_t4_ParamLimits

0x6c6d,	// (0x000162ca) list_double_time_pane_vc_t4

0x0003,

0xfa34,	// (0x0001f091) list_double_time_pane_vc_t_ParamLimits

0xfa34,	// (0x0001f091) list_double_time_pane_vc_t

0x428b,	// (0x000138e8) list_double_pane_vc_g1_ParamLimits

0x428b,	// (0x000138e8) list_double_pane_vc_g1

0x4b5a,	// (0x000141b7) list_double_pane_vc_g2_ParamLimits

0x4b5a,	// (0x000141b7) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ec25) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ec25) list_double_pane_vc_g

0x6c81,	// (0x000162de) list_double_pane_vc_t1_ParamLimits

0x6c81,	// (0x000162de) list_double_pane_vc_t1

0x6c95,	// (0x000162f2) list_double_pane_vc_t2_ParamLimits

0x6c95,	// (0x000162f2) list_double_pane_vc_t2

0x0001,

0xfa3d,	// (0x0001f09a) list_double_pane_vc_t_ParamLimits

0xfa3d,	// (0x0001f09a) list_double_pane_vc_t

0x428b,	// (0x000138e8) list_double_number_pane_vc_g1_ParamLimits

0x428b,	// (0x000138e8) list_double_number_pane_vc_g1

0x4b5a,	// (0x000141b7) list_double_number_pane_vc_g2_ParamLimits

0x4b5a,	// (0x000141b7) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ec25) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ec25) list_double_number_pane_vc_g

0x6cad,	// (0x0001630a) list_double_number_pane_vc_t1_ParamLimits

0x6cad,	// (0x0001630a) list_double_number_pane_vc_t1

0x6cbf,	// (0x0001631c) list_double_number_pane_vc_t2_ParamLimits

0x6cbf,	// (0x0001631c) list_double_number_pane_vc_t2

0x6cd3,	// (0x00016330) list_double_number_pane_vc_t3_ParamLimits

0x6cd3,	// (0x00016330) list_double_number_pane_vc_t3

0x0002,

0xfa42,	// (0x0001f09f) list_double_number_pane_vc_t_ParamLimits

0xfa42,	// (0x0001f09f) list_double_number_pane_vc_t

0x6ceb,	// (0x00016348) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6ceb,	// (0x00016348) list_double_large_graphic_pane_vc_g1

0x6d0d,	// (0x0001636a) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6d0d,	// (0x0001636a) list_double_large_graphic_pane_vc_g2

0x6d21,	// (0x0001637e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6d21,	// (0x0001637e) list_double_large_graphic_pane_vc_g3

0x6d30,	// (0x0001638d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6d30,	// (0x0001638d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa49,	// (0x0001f0a6) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa49,	// (0x0001f0a6) list_double_large_graphic_pane_vc_g

0x6d3c,	// (0x00016399) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6d3c,	// (0x00016399) list_double_large_graphic_pane_vc_t1

0x6d58,	// (0x000163b5) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6d58,	// (0x000163b5) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa52,	// (0x0001f0af) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa52,	// (0x0001f0af) list_double_large_graphic_pane_vc_t

0x68bf,	// (0x00015f1c) list_double_heading_pane_vc_g1_ParamLimits

0x68bf,	// (0x00015f1c) list_double_heading_pane_vc_g1

0x68cb,	// (0x00015f28) list_double_heading_pane_vc_g2_ParamLimits

0x68cb,	// (0x00015f28) list_double_heading_pane_vc_g2

0x0001,

0xfa57,	// (0x0001f0b4) list_double_heading_pane_vc_g_ParamLimits

0xfa57,	// (0x0001f0b4) list_double_heading_pane_vc_g

0x6d7a,	// (0x000163d7) list_double_heading_pane_vc_t1_ParamLimits

0x6d7a,	// (0x000163d7) list_double_heading_pane_vc_t1

0x6d8e,	// (0x000163eb) list_double_heading_pane_vc_t2_ParamLimits

0x6d8e,	// (0x000163eb) list_double_heading_pane_vc_t2

0x0001,

0xfa5c,	// (0x0001f0b9) list_double_heading_pane_vc_t_ParamLimits

0xfa5c,	// (0x0001f0b9) list_double_heading_pane_vc_t

0x6da6,	// (0x00016403) list_double_graphic_pane_vc_g1_ParamLimits

0x6da6,	// (0x00016403) list_double_graphic_pane_vc_g1

0x6db2,	// (0x0001640f) list_double_graphic_pane_vc_g2_ParamLimits

0x6db2,	// (0x0001640f) list_double_graphic_pane_vc_g2

0x428b,	// (0x000138e8) list_double_graphic_pane_vc_g3_ParamLimits

0x428b,	// (0x000138e8) list_double_graphic_pane_vc_g3

0x0003,

0xfa61,	// (0x0001f0be) list_double_graphic_pane_vc_g_ParamLimits

0xfa61,	// (0x0001f0be) list_double_graphic_pane_vc_g

0x6dcf,	// (0x0001642c) list_double_graphic_pane_vc_t1_ParamLimits

0x6dcf,	// (0x0001642c) list_double_graphic_pane_vc_t1

0x6df9,	// (0x00016456) list_double_graphic_pane_vc_t2_ParamLimits

0x6df9,	// (0x00016456) list_double_graphic_pane_vc_t2

0x0001,

0xfa6a,	// (0x0001f0c7) list_double_graphic_pane_vc_t_ParamLimits

0xfa6a,	// (0x0001f0c7) list_double_graphic_pane_vc_t

0x0045,	// (0x0000f6a2) aid_size_cell_fastswap

0xb792,	// (0x0001adef) aid_size_cell_touch_ParamLimits

0xb792,	// (0x0001adef) aid_size_cell_touch

0x02b2,	// (0x0000f90f) popup_fast_swap_wide_window_ParamLimits

0x02b2,	// (0x0000f90f) popup_fast_swap_wide_window

0xb942,	// (0x0001af9f) touch_pane_ParamLimits

0xb942,	// (0x0001af9f) touch_pane

0x33d1,	// (0x00012a2e) button_value_adjust_pane_cp2

0x33d9,	// (0x00012a36) button_value_adjust_pane_cp4

0x33fb,	// (0x00012a58) form_field_data_pane_cp2

0xcfc0,	// (0x0001c61d) form_field_data_wide_pane_cp2

0x3a9a,	// (0x000130f7) bg_scroll_pane_ParamLimits

0x0654,	// (0x0000fcb1) scroll_handle_pane_ParamLimits

0x0668,	// (0x0000fcc5) scroll_sc2_down_pane_ParamLimits

0x0668,	// (0x0000fcc5) scroll_sc2_down_pane

0x3acb,	// (0x00013128) scroll_sc2_up_pane_ParamLimits

0x3acb,	// (0x00013128) scroll_sc2_up_pane

0xdf86,	// (0x0001d5e3) grid_wheel_folder_pane_g1_ParamLimits

0xdf86,	// (0x0001d5e3) grid_wheel_folder_pane_g1

0x082d,	// (0x0000fe8a) clock_nsta_pane_cp2_ParamLimits

0x082d,	// (0x0000fe8a) clock_nsta_pane_cp2

0xd37a,	// (0x0001c9d7) listscroll_midp_pane_ParamLimits

0xd386,	// (0x0001c9e3) midp_canvas_pane

0x464e,	// (0x00013cab) nsta_clock_indic_pane

0x468a,	// (0x00013ce7) listscroll_form_pane_vc

0x4692,	// (0x00013cef) listscroll_set_pane_vc_ParamLimits

0x4692,	// (0x00013cef) listscroll_set_pane_vc

0xd633,	// (0x0001cc90) clock_nsta_pane

0xd65d,	// (0x0001ccba) indicator_nsta_pane

0x4ae8,	// (0x00014145) bg_popup_sub_pane_cp2_ParamLimits

0x4afc,	// (0x00014159) find_pane_cp2_ParamLimits

0x4afc,	// (0x00014159) find_pane_cp2

0x4b12,	// (0x0001416f) grid_toobar_pane_ParamLimits

0x4cce,	// (0x0001432b) list_form_gen_pane_vc_ParamLimits

0x4cce,	// (0x0001432b) list_form_gen_pane_vc

0x4ce4,	// (0x00014341) scroll_pane_cp8_vc_ParamLimits

0x4ce4,	// (0x00014341) scroll_pane_cp8_vc

0x4d60,	// (0x000143bd) data_form_wide_pane_vc_ParamLimits

0x4d60,	// (0x000143bd) data_form_wide_pane_vc

0x4d6c,	// (0x000143c9) form_field_data_wide_pane_vc_g1

0x4d74,	// (0x000143d1) form_field_data_wide_pane_vc_t1_ParamLimits

0x4d74,	// (0x000143d1) form_field_data_wide_pane_vc_t1

0x34b7,	// (0x00012b14) input_focus_pane_cp6_vc_ParamLimits

0x34b7,	// (0x00012b14) input_focus_pane_cp6_vc

0x50f7,	// (0x00014754) list_midp_pane_ParamLimits

0x652f,	// (0x00015b8c) scroll_pane_cp16_ParamLimits

0x652f,	// (0x00015b8c) scroll_pane_cp16

0x5145,	// (0x000147a2) button_value_adjust_pane_ParamLimits

0x5145,	// (0x000147a2) button_value_adjust_pane

0xdb91,	// (0x0001d1ee) button_value_adjust_pane_cp6_ParamLimits

0xdb91,	// (0x0001d1ee) button_value_adjust_pane_cp6

0xdcab,	// (0x0001d308) settings_code_pane_cp_ParamLimits

0xdcab,	// (0x0001d308) settings_code_pane_cp

0x25a3,	// (0x00011c00) cell_touch_pane_g1

0x25a3,	// (0x00011c00) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001ed5b) cell_touch_pane_g

0xde74,	// (0x0001d4d1) cell_touch_pane_cp_ParamLimits

0xde74,	// (0x0001d4d1) cell_touch_pane_cp

0xde90,	// (0x0001d4ed) cell_touch_pane_ParamLimits

0xde90,	// (0x0001d4ed) cell_touch_pane

0x25a3,	// (0x00011c00) scroll_sc2_down_pane_g1

0x25a3,	// (0x00011c00) scroll_sc2_up_pane_g1

0x25ad,	// (0x00011c0a) bg_set_opt_pane_cp4_vc

0x6911,	// (0x00015f6e) list_set_graphic_pane_vc_g1_ParamLimits

0x6911,	// (0x00015f6e) list_set_graphic_pane_vc_g1

0x691d,	// (0x00015f7a) list_set_graphic_pane_vc_g2_ParamLimits

0x691d,	// (0x00015f7a) list_set_graphic_pane_vc_g2

0x0001,

0xf9f5,	// (0x0001f052) list_set_graphic_pane_vc_g_ParamLimits

0xf9f5,	// (0x0001f052) list_set_graphic_pane_vc_g

0x6929,	// (0x00015f86) text_primary_small_cp13_vc_ParamLimits

0x6929,	// (0x00015f86) text_primary_small_cp13_vc

0x6941,	// (0x00015f9e) list_set_graphic_pane_vc_ParamLimits

0x6941,	// (0x00015f9e) list_set_graphic_pane_vc

0x25ad,	// (0x00011c0a) input_focus_pane_cp2_vc

0x25a3,	// (0x00011c00) setting_code_pane_vc_g1

0x26d8,	// (0x00011d35) setting_code_pane_vc_t1

0x6953,	// (0x00015fb0) set_text_pane_vc_t1_ParamLimits

0x6953,	// (0x00015fb0) set_text_pane_vc_t1

0x25ad,	// (0x00011c0a) input_focus_pane_cp1_vc

0x696f,	// (0x00015fcc) list_set_text_pane_vc

0x25a3,	// (0x00011c00) setting_text_pane_vc_g1

0x25ad,	// (0x00011c0a) bg_set_opt_pane_cp2_vc

0x26cf,	// (0x00011d2c) setting_slider_graphic_pane_vc_g1

0x6979,	// (0x00015fd6) setting_slider_graphic_pane_vc_t1

0x6989,	// (0x00015fe6) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fa,	// (0x0001f057) setting_slider_graphic_pane_vc_t

0x6999,	// (0x00015ff6) slider_set_pane_cp_vc

0x69a1,	// (0x00015ffe) slider_set_pane_vc_g1

0x69aa,	// (0x00016007) slider_set_pane_vc_g2

0x0006,

0xf9ff,	// (0x0001f05c) slider_set_pane_vc_g

0x35da,	// (0x00012c37) set_opt_bg_pane_g1_copy1

0x35e2,	// (0x00012c3f) set_opt_bg_pane_g2_copy1

0x69d6,	// (0x00016033) set_opt_bg_pane_g3_copy1

0x35f2,	// (0x00012c4f) set_opt_bg_pane_g4_copy1

0x35fa,	// (0x00012c57) set_opt_bg_pane_g5_copy1

0x3602,	// (0x00012c5f) set_opt_bg_pane_g6_copy1

0x69e0,	// (0x0001603d) set_opt_bg_pane_g7_copy1

0x69e8,	// (0x00016045) set_opt_bg_pane_g8_copy1

0x69f2,	// (0x0001604f) set_opt_bg_pane_g9_copy1

0x25ad,	// (0x00011c0a) bg_set_opt_pane_cp_vc

0x69fc,	// (0x00016059) setting_slider_pane_vc_t1

0x6a0b,	// (0x00016068) setting_slider_pane_vc_t2

0x6a1b,	// (0x00016078) setting_slider_pane_vc_t3

0x0002,

0xfa0e,	// (0x0001f06b) setting_slider_pane_vc_t

0x6a2b,	// (0x00016088) slider_set_pane_vc

0x122b,	// (0x00010888) volume_set_pane_vc_g1

0x1234,	// (0x00010891) volume_set_pane_vc_g2

0x123d,	// (0x0001089a) volume_set_pane_vc_g3

0x1246,	// (0x000108a3) volume_set_pane_vc_g4

0x124f,	// (0x000108ac) volume_set_pane_vc_g5

0x1258,	// (0x000108b5) volume_set_pane_vc_g6

0x1261,	// (0x000108be) volume_set_pane_vc_g7

0x126a,	// (0x000108c7) volume_set_pane_vc_g8

0x1273,	// (0x000108d0) volume_set_pane_vc_g9

0x127c,	// (0x000108d9) volume_set_pane_vc_g10

0x0009,

0xf8ac,	// (0x0001ef09) volume_set_pane_vc_g

0x6a33,	// (0x00016090) volume_set_pane_vc

0x6a3b,	// (0x00016098) button_value_adjust_pane_cp1_vc

0x6a45,	// (0x000160a2) list_highlight_pane_cp2_vc

0x6a4e,	// (0x000160ab) list_set_pane_vc_ParamLimits

0x6a4e,	// (0x000160ab) list_set_pane_vc

0x6aac,	// (0x00016109) main_pane_set_vc_t1_ParamLimits

0x6aac,	// (0x00016109) main_pane_set_vc_t1

0x6ac1,	// (0x0001611e) main_pane_set_vc_t2_ParamLimits

0x6ac1,	// (0x0001611e) main_pane_set_vc_t2

0x6ad3,	// (0x00016130) main_pane_set_vc_t3_ParamLimits

0x6ad3,	// (0x00016130) main_pane_set_vc_t3

0x6ae7,	// (0x00016144) main_pane_set_vc_t4_ParamLimits

0x6ae7,	// (0x00016144) main_pane_set_vc_t4

0x0003,

0xfa15,	// (0x0001f072) main_pane_set_vc_t_ParamLimits

0xfa15,	// (0x0001f072) main_pane_set_vc_t

0x6afb,	// (0x00016158) setting_code_pane_vc_ParamLimits

0x6afb,	// (0x00016158) setting_code_pane_vc

0x6b0c,	// (0x00016169) setting_slider_graphic_pane_vc

0x6b0c,	// (0x00016169) setting_slider_pane_vc

0x6b0c,	// (0x00016169) setting_text_pane_vc

0x6b0c,	// (0x00016169) setting_volume_pane_vc

0x6b16,	// (0x00016173) scroll_pane_cp121_vc

0x33bf,	// (0x00012a1c) set_content_pane_vc

0x6e23,	// (0x00016480) button_value_adjust_pane_g1

0x6e2c,	// (0x00016489) button_value_adjust_pane_g2

0x0001,

0xfa6f,	// (0x0001f0cc) button_value_adjust_pane_g

0x6e35,	// (0x00016492) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6e35,	// (0x00016492) form_field_slider_wide_pane_vc_t1

0x6e49,	// (0x000164a6) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6e49,	// (0x000164a6) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa74,	// (0x0001f0d1) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa74,	// (0x0001f0d1) form_field_slider_wide_pane_vc_t

0x2922,	// (0x00011f7f) input_focus_pane_cp10_vc_ParamLimits

0x2922,	// (0x00011f7f) input_focus_pane_cp10_vc

0x6e77,	// (0x000164d4) slider_cont_pane_cp1_vc_ParamLimits

0x6e77,	// (0x000164d4) slider_cont_pane_cp1_vc

0x6e89,	// (0x000164e6) slider_form_pane_g1_cp2

0x69aa,	// (0x00016007) slider_form_pane_g2_cp2

0x6eb6,	// (0x00016513) form_field_slider_pane_vc_t3

0x6ec4,	// (0x00016521) form_field_slider_pane_vc_t4

0x6ed2,	// (0x0001652f) slider_form_pane_vc_ParamLimits

0x6ed2,	// (0x0001652f) slider_form_pane_vc

0x6edf,	// (0x0001653c) form_field_slider_pane_vc_t1_ParamLimits

0x6edf,	// (0x0001653c) form_field_slider_pane_vc_t1

0x6e49,	// (0x000164a6) form_field_slider_pane_vc_t2_ParamLimits

0x6e49,	// (0x000164a6) form_field_slider_pane_vc_t2

0x0001,

0xfa86,	// (0x0001f0e3) form_field_slider_pane_vc_t_ParamLimits

0xfa86,	// (0x0001f0e3) form_field_slider_pane_vc_t

0x2922,	// (0x00011f7f) input_focus_pane_cp9_vc_ParamLimits

0x2922,	// (0x00011f7f) input_focus_pane_cp9_vc

0x6efb,	// (0x00016558) slider_cont_pane_vc_ParamLimits

0x6efb,	// (0x00016558) slider_cont_pane_vc

0x6f0f,	// (0x0001656c) list_form_graphic_pane_cp_vc_ParamLimits

0x6f0f,	// (0x0001656c) list_form_graphic_pane_cp_vc

0x4d6c,	// (0x000143c9) form_field_popup_wide_pane_vc_g1

0x6f24,	// (0x00016581) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6f24,	// (0x00016581) form_field_popup_wide_pane_vc_t1

0x34b7,	// (0x00012b14) input_focus_pane_cp8_vc_ParamLimits

0x34b7,	// (0x00012b14) input_focus_pane_cp8_vc

0x6f69,	// (0x000165c6) list_form_wide_pane_vc_ParamLimits

0x6f69,	// (0x000165c6) list_form_wide_pane_vc

0x6f75,	// (0x000165d2) list_form_graphic_pane_vc_g1

0x6f7d,	// (0x000165da) list_form_graphic_pane_vc_t1_ParamLimits

0x6f7d,	// (0x000165da) list_form_graphic_pane_vc_t1

0x268d,	// (0x00011cea) list_highlight_pane_cp5_vc_ParamLimits

0x268d,	// (0x00011cea) list_highlight_pane_cp5_vc

0x6f99,	// (0x000165f6) list_form_graphic_pane_vc_ParamLimits

0x6f99,	// (0x000165f6) list_form_graphic_pane_vc

0x4d6c,	// (0x000143c9) form_field_popup_pane_vc_g1

0x6faf,	// (0x0001660c) form_field_popup_pane_vc_t1_ParamLimits

0x6faf,	// (0x0001660c) form_field_popup_pane_vc_t1

0x34b7,	// (0x00012b14) input_focus_pane_cp7_vc_ParamLimits

0x34b7,	// (0x00012b14) input_focus_pane_cp7_vc

0x6fc6,	// (0x00016623) list_form_pane_vc_ParamLimits

0x6fc6,	// (0x00016623) list_form_pane_vc

0x6fd2,	// (0x0001662f) data_form_pane_vc_t1_ParamLimits

0x6fd2,	// (0x0001662f) data_form_pane_vc_t1

0x35da,	// (0x00012c37) input_focus_pane_vc_g1

0x35e2,	// (0x00012c3f) input_focus_pane_vc_g2

0x35ea,	// (0x00012c47) input_focus_pane_vc_g3

0x35f2,	// (0x00012c4f) input_focus_pane_vc_g4

0x35fa,	// (0x00012c57) input_focus_pane_vc_g5

0x3602,	// (0x00012c5f) input_focus_pane_vc_g6

0x360a,	// (0x00012c67) input_focus_pane_vc_g7

0x3612,	// (0x00012c6f) input_focus_pane_vc_g8

0x361a,	// (0x00012c77) input_focus_pane_vc_g9

0x25a3,	// (0x00011c00) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001ece4) input_focus_pane_vc_g

0x4d60,	// (0x000143bd) data_form_pane_vc_ParamLimits

0x4d60,	// (0x000143bd) data_form_pane_vc

0x4d6c,	// (0x000143c9) form_field_data_pane_vc_g1

0x6fed,	// (0x0001664a) form_field_data_pane_vc_t1_ParamLimits

0x6fed,	// (0x0001664a) form_field_data_pane_vc_t1

0x34b7,	// (0x00012b14) input_focus_pane_vc_ParamLimits

0x34b7,	// (0x00012b14) input_focus_pane_vc

0x7007,	// (0x00016664) button_value_adjust_pane_cp3_vc

0x700f,	// (0x0001666c) button_value_adjust_pane_cp5_vc

0x7017,	// (0x00016674) form_field_data_pane_vc_ParamLimits

0x7017,	// (0x00016674) form_field_data_pane_vc

0x702e,	// (0x0001668b) form_field_data_pane_vc_cp2

0x7036,	// (0x00016693) form_field_data_wide_pane_vc_ParamLimits

0x7036,	// (0x00016693) form_field_data_wide_pane_vc

0x704c,	// (0x000166a9) form_field_data_wide_pane_vc_cp2

0x7054,	// (0x000166b1) form_field_popup_pane_vc_ParamLimits

0x7054,	// (0x000166b1) form_field_popup_pane_vc

0x706b,	// (0x000166c8) form_field_popup_wide_pane_vc_ParamLimits

0x706b,	// (0x000166c8) form_field_popup_wide_pane_vc

0x7081,	// (0x000166de) form_field_slider_pane_vc_ParamLimits

0x7081,	// (0x000166de) form_field_slider_pane_vc

0x7094,	// (0x000166f1) form_field_slider_wide_pane_vc_ParamLimits

0x7094,	// (0x000166f1) form_field_slider_wide_pane_vc

0xdeae,	// (0x0001d50b) grid_touch_1_pane_ParamLimits

0xdeae,	// (0x0001d50b) grid_touch_1_pane

0xdec2,	// (0x0001d51f) grid_touch_2_pane_ParamLimits

0xdec2,	// (0x0001d51f) grid_touch_2_pane

0x7162,	// (0x000167bf) touch_pane_g1_ParamLimits

0x7162,	// (0x000167bf) touch_pane_g1

0x70cb,	// (0x00016728) cell_app_pane_cp_wide_ParamLimits

0x70cb,	// (0x00016728) cell_app_pane_cp_wide

0x70dc,	// (0x00016739) grid_popup_fast_wide_pane_ParamLimits

0x70dc,	// (0x00016739) grid_popup_fast_wide_pane

0x70f0,	// (0x0001674d) scroll_pane_cp19_ParamLimits

0x70f0,	// (0x0001674d) scroll_pane_cp19

0x25ad,	// (0x00011c0a) bg_popup_window_pane_cp20

0x7104,	// (0x00016761) listscroll_popup_fast_wide_pane

0x37ee,	// (0x00012e4b) grid_indicator_nsta_pane

0x710c,	// (0x00016769) clock_nsta_pane_g1

0x7115,	// (0x00016772) clock_nsta_pane_t1

0xdeec,	// (0x0001d549) cell_indicator_nsta_pane_ParamLimits

0xdeec,	// (0x0001d549) cell_indicator_nsta_pane

0x7162,	// (0x000167bf) cell_indicator_nsta_pane_g1

0xdf03,	// (0x0001d560) cell_indicator_nsta_pane_g2

0x0001,

0xfa97,	// (0x0001f0f4) cell_indicator_nsta_pane_g

0x717d,	// (0x000167da) clock_nsta_pane_cp

0x7186,	// (0x000167e3) indicator_nsta_pane_cp

0x718e,	// (0x000167eb) nsta_clock_indic_pane_g1

0x2770,	// (0x00011dcd) grid_indicator_pane

0x3bc0,	// (0x0001321d) scroll_pane_cp29

0x077c,	// (0x0000fdd9) indicator_nsta_pane_cp2_ParamLimits

0x077c,	// (0x0000fdd9) indicator_nsta_pane_cp2

0x268d,	// (0x00011cea) main_apps_wheel_pane

0x4fb8,	// (0x00014615) form_midp_field_text_pane_ParamLimits

0x5103,	// (0x00014760) scroll_bar_cp050_ParamLimits

0x71de,	// (0x0001683b) cell_indicator_pane_ParamLimits

0x71de,	// (0x0001683b) cell_indicator_pane

0x71f5,	// (0x00016852) cell_indicator_pane_g1

0xdf10,	// (0x0001d56d) grid_wheel_folder_pane_ParamLimits

0xdf10,	// (0x0001d56d) grid_wheel_folder_pane

0xdf1e,	// (0x0001d57b) list_wheel_apps_pane_ParamLimits

0xdf1e,	// (0x0001d57b) list_wheel_apps_pane

0xdf2c,	// (0x0001d589) main_apps_wheel_pane_g1_ParamLimits

0xdf2c,	// (0x0001d589) main_apps_wheel_pane_g1

0xdf38,	// (0x0001d595) main_apps_wheel_pane_g2_ParamLimits

0xdf38,	// (0x0001d595) main_apps_wheel_pane_g2

0x0001,

0xfab3,	// (0x0001f110) main_apps_wheel_pane_g_ParamLimits

0xfab3,	// (0x0001f110) main_apps_wheel_pane_g

0xdf46,	// (0x0001d5a3) main_apps_wheel_pane_t1_ParamLimits

0xdf46,	// (0x0001d5a3) main_apps_wheel_pane_t1

0xdf5a,	// (0x0001d5b7) list_wheel_apps_pane_g1

0xdf62,	// (0x0001d5bf) list_wheel_apps_pane_g2

0xdf6a,	// (0x0001d5c7) list_wheel_apps_pane_g3

0xdf72,	// (0x0001d5cf) list_wheel_apps_pane_g4

0xdf7c,	// (0x0001d5d9) list_wheel_apps_pane_g5

0x0004,

0xfab8,	// (0x0001f115) list_wheel_apps_pane_g

0x41d2,	// (0x0001382f) navi_icon_text_pane

0xd527,	// (0x0001cb84) aid_fill_nsta

0x72ba,	// (0x00016917) navi_icon_text_pane_g1

0x72c6,	// (0x00016923) navi_icon_text_pane_t1

0x4065,	// (0x000136c2) list_set_graphic_pane_t1_ParamLimits

0x4065,	// (0x000136c2) list_set_graphic_pane_t1

0x5866,	// (0x00014ec3) popup_midp_note_alarm_window_t6_ParamLimits

0x5866,	// (0x00014ec3) popup_midp_note_alarm_window_t6

0x5878,	// (0x00014ed5) popup_midp_note_alarm_window_t7_ParamLimits

0x5878,	// (0x00014ed5) popup_midp_note_alarm_window_t7

0x588a,	// (0x00014ee7) popup_midp_note_alarm_window_t8_ParamLimits

0x588a,	// (0x00014ee7) popup_midp_note_alarm_window_t8

0x58a8,	// (0x00014f05) popup_midp_note_alarm_window_t9_ParamLimits

0x58a8,	// (0x00014f05) popup_midp_note_alarm_window_t9

0x58ba,	// (0x00014f17) popup_midp_note_alarm_window_t10_ParamLimits

0x58ba,	// (0x00014f17) popup_midp_note_alarm_window_t10

0x58cc,	// (0x00014f29) popup_midp_note_alarm_window_t11_ParamLimits

0x58cc,	// (0x00014f29) popup_midp_note_alarm_window_t11

0x58de,	// (0x00014f3b) scroll_pane_cp17_ParamLimits

0x58de,	// (0x00014f3b) scroll_pane_cp17

0x122b,	// (0x00010888) volume_small_pane_cp_g1

0x1520,	// (0x00010b7d) volume_small_pane_cp_g2

0x1529,	// (0x00010b86) volume_small_pane_cp_g3

0x1532,	// (0x00010b8f) volume_small_pane_cp_g4

0x153b,	// (0x00010b98) volume_small_pane_cp_g5

0x1544,	// (0x00010ba1) volume_small_pane_cp_g6

0x154d,	// (0x00010baa) volume_small_pane_cp_g7

0x1556,	// (0x00010bb3) volume_small_pane_cp_g8

0x155f,	// (0x00010bbc) volume_small_pane_cp_g9

0x1568,	// (0x00010bc5) volume_small_pane_cp_g10

0x442f,	// (0x00013a8c) midp_ticker_pane_g1_ParamLimits

0x443b,	// (0x00013a98) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001edb0) midp_ticker_pane_g_ParamLimits

0x4447,	// (0x00013aa4) midp_ticker_pane_t1_ParamLimits

0xd54b,	// (0x0001cba8) aid_fill_nsta_2

0x50ef,	// (0x0001474c) list_form2_midp_pane

0x6287,	// (0x000158e4) midp_editing_number_pane_ParamLimits

0x6296,	// (0x000158f3) midp_ticker_pane_ParamLimits

0x72d8,	// (0x00016935) form2_midp_field_pane

0x72fc,	// (0x00016959) scroll_pane_cp51

0x731c,	// (0x00016979) form2_midp_button_pane_ParamLimits

0x731c,	// (0x00016979) form2_midp_button_pane

0x732e,	// (0x0001698b) form2_midp_content_pane_ParamLimits

0x732e,	// (0x0001698b) form2_midp_content_pane

0x7348,	// (0x000169a5) form2_midp_field_choice_group_pane

0x7350,	// (0x000169ad) form2_midp_field_pane_g1

0x7358,	// (0x000169b5) form2_midp_field_pane_g2

0x7360,	// (0x000169bd) form2_midp_field_pane_g3

0x7368,	// (0x000169c5) form2_midp_field_pane_g4

0x0003,

0xfadd,	// (0x0001f13a) form2_midp_field_pane_g

0x7370,	// (0x000169cd) form2_midp_gauge_slider_pane

0x7378,	// (0x000169d5) form2_midp_gauge_wait_pane

0x7380,	// (0x000169dd) form2_midp_image_pane_ParamLimits

0x7380,	// (0x000169dd) form2_midp_image_pane

0x739b,	// (0x000169f8) form2_midp_label_pane_ParamLimits

0x739b,	// (0x000169f8) form2_midp_label_pane

0xdfaf,	// (0x0001d60c) form2_midp_label_pane_cp_ParamLimits

0xdfaf,	// (0x0001d60c) form2_midp_label_pane_cp

0x73d5,	// (0x00016a32) form2_midp_string_pane_ParamLimits

0x73d5,	// (0x00016a32) form2_midp_string_pane

0xdfce,	// (0x0001d62b) form2_midp_text_pane_ParamLimits

0xdfce,	// (0x0001d62b) form2_midp_text_pane

0x7404,	// (0x00016a61) form2_midp_time_pane

0x7414,	// (0x00016a71) input_focus_pane_cp51_ParamLimits

0x7414,	// (0x00016a71) input_focus_pane_cp51

0x742c,	// (0x00016a89) form2_midp_label_pane_t1_ParamLimits

0x742c,	// (0x00016a89) form2_midp_label_pane_t1

0xdfe7,	// (0x0001d644) form2_mdip_text_pane_t1_ParamLimits

0xdfe7,	// (0x0001d644) form2_mdip_text_pane_t1

0x748c,	// (0x00016ae9) form2_midp_time_pane_t1

0x74a7,	// (0x00016b04) form2_midp_gauge_slider_pane_t1

0xe002,	// (0x0001d65f) form2_midp_gauge_slider_pane_t2

0xe014,	// (0x0001d671) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae6,	// (0x0001f143) form2_midp_gauge_slider_pane_t

0x74dd,	// (0x00016b3a) form2_midp_slider_pane

0x74e9,	// (0x00016b46) form2_midp_gauge_wait_pane_t1

0x74f7,	// (0x00016b54) form2_midp_wait_pane_ParamLimits

0x74f7,	// (0x00016b54) form2_midp_wait_pane

0xe026,	// (0x0001d683) list_single_2graphic_pane_cp4_ParamLimits

0xe026,	// (0x0001d683) list_single_2graphic_pane_cp4

0xd967,	// (0x0001cfc4) list_single_midp_graphic_pane_cp_ParamLimits

0xd967,	// (0x0001cfc4) list_single_midp_graphic_pane_cp

0x25ad,	// (0x00011c0a) list_highlight_pane_cp20

0x7546,	// (0x00016ba3) list_single_2graphic_pane_g1_cp4

0x754e,	// (0x00016bab) list_single_2graphic_pane_g2_cp4

0x7556,	// (0x00016bb3) list_single_2graphic_pane_t1_cp4

0x268d,	// (0x00011cea) list_highlight_pane_cp21

0x7565,	// (0x00016bc2) list_single_midp_graphic_pane_g4_cp

0x7574,	// (0x00016bd1) list_single_midp_graphic_pane_t1_cp

0xe03a,	// (0x0001d697) form2_mdip_string_pane_t1_ParamLimits

0xe03a,	// (0x0001d697) form2_mdip_string_pane_t1

0x25ad,	// (0x00011c0a) bg_wml_button_pane_cp2

0x25a3,	// (0x00011c00) form2_midp_image_pane_g1

0x3175,	// (0x000127d2) list_double_large_graphic_pane_g5_ParamLimits

0x3175,	// (0x000127d2) list_double_large_graphic_pane_g5

0xd37a,	// (0x0001c9d7) midp_form_pane_ParamLimits

0x268d,	// (0x00011cea) main_apps_wheel_pane_ParamLimits

0xbf28,	// (0x0001b585) popup_preview_window_ParamLimits

0xbf28,	// (0x0001b585) popup_preview_window

0x1026,	// (0x00010683) popup_touch_info_window_ParamLimits

0x1026,	// (0x00010683) popup_touch_info_window

0x1044,	// (0x000106a1) popup_touch_menu_window_ParamLimits

0x1044,	// (0x000106a1) popup_touch_menu_window

0x2599,	// (0x00011bf6) bg_popup_sub_pane_cp6

0x7682,	// (0x00016cdf) list_touch_menu_pane

0x768a,	// (0x00016ce7) list_single_touch_menu_pane_ParamLimits

0x768a,	// (0x00016ce7) list_single_touch_menu_pane

0x76a0,	// (0x00016cfd) list_single_touch_menu_pane_t1

0x268d,	// (0x00011cea) bg_popup_sub_pane_cp7_ParamLimits

0x268d,	// (0x00011cea) bg_popup_sub_pane_cp7

0x76ae,	// (0x00016d0b) heading_sub_pane

0x76b6,	// (0x00016d13) list_touch_info_pane_ParamLimits

0x76b6,	// (0x00016d13) list_touch_info_pane

0x76c5,	// (0x00016d22) list_single_touch_info_pane_ParamLimits

0x76c5,	// (0x00016d22) list_single_touch_info_pane

0x76d7,	// (0x00016d34) list_single_touch_info_pane_t1

0x76e5,	// (0x00016d42) list_single_touch_info_pane_t2

0x0001,

0xfaf4,	// (0x0001f151) list_single_touch_info_pane_t

0x4352,	// (0x000139af) bg_popup_heading_pane_cp

0x76f3,	// (0x00016d50) heading_sub_pane_t1

0x4cfa,	// (0x00014357) bg_popup_preview_window_pane_cp_ParamLimits

0x4cfa,	// (0x00014357) bg_popup_preview_window_pane_cp

0x76ae,	// (0x00016d0b) heading_preview_pane

0x76b6,	// (0x00016d13) list_preview_pane_ParamLimits

0x76b6,	// (0x00016d13) list_preview_pane

0x7701,	// (0x00016d5e) popup_preview_window_g1

0x76c5,	// (0x00016d22) list_single_preview_pane_ParamLimits

0x76c5,	// (0x00016d22) list_single_preview_pane

0x7709,	// (0x00016d66) list_single_preview_pane_g1

0x7711,	// (0x00016d6e) list_single_preview_pane_t1

0x76d7,	// (0x00016d34) list_single_preview_pane_t2

0x0001,

0xfaf9,	// (0x0001f156) list_single_preview_pane_t

0x771f,	// (0x00016d7c) bg_popup_heading_pane_cp2_ParamLimits

0x771f,	// (0x00016d7c) bg_popup_heading_pane_cp2

0x7735,	// (0x00016d92) heading_preview_pane_g1

0x773d,	// (0x00016d9a) heading_preview_pane_t1_ParamLimits

0x773d,	// (0x00016d9a) heading_preview_pane_t1

0x2793,	// (0x00011df0) soft_indicator_pane_t1_ParamLimits

0x2eaf,	// (0x0001250c) scroll_pane_ParamLimits

0x3ab9,	// (0x00013116) scroll_sc2_left_pane

0x3ac2,	// (0x0001311f) scroll_sc2_right_pane

0x3ae1,	// (0x0001313e) scroll_bg_pane_g1_ParamLimits

0x3af6,	// (0x00013153) scroll_bg_pane_g2_ParamLimits

0x3b0e,	// (0x0001316b) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001ed3b) scroll_bg_pane_g_ParamLimits

0x3ae1,	// (0x0001313e) scroll_handle_pane_g1_ParamLimits

0x3b30,	// (0x0001318d) scroll_handle_pane_g2_ParamLimits

0x3b0e,	// (0x0001316b) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001ed42) scroll_handle_pane_g_ParamLimits

0x0aec,	// (0x00010149) popup_choice_list_window_ParamLimits

0x0aec,	// (0x00010149) popup_choice_list_window

0x4af4,	// (0x00014151) choice_list_pane

0x4ba4,	// (0x00014201) cell_toolbar_pane_t1

0x4bcc,	// (0x00014229) toolbar_button_pane_ParamLimits

0x5d98,	// (0x000153f5) ai_gene_pane_1_t2_ParamLimits

0x5d98,	// (0x000153f5) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x0001ef65) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x0001ef65) ai_gene_pane_1_t

0x775a,	// (0x00016db7) scroll_sc2_left_pane_g1

0x775a,	// (0x00016db7) scroll_sc2_right_pane_g1

0x467e,	// (0x00013cdb) bg_popup_sub_pane_cp10

0x7764,	// (0x00016dc1) list_choice_list_pane

0x777d,	// (0x00016dda) list_single_choice_list_pane_ParamLimits

0x777d,	// (0x00016dda) list_single_choice_list_pane

0x7790,	// (0x00016ded) list_single_choice_list_pane_g1

0x37bf,	// (0x00012e1c) list_single_choice_list_pane_t1_ParamLimits

0x37bf,	// (0x00012e1c) list_single_choice_list_pane_t1

0x7798,	// (0x00016df5) choice_list_pane_g1

0x77a0,	// (0x00016dfd) choice_list_pane_t1

0x2599,	// (0x00011bf6) input_focus_pane_cp11

0x3996,	// (0x00012ff3) title_pane_stacon_g2_ParamLimits

0x3996,	// (0x00012ff3) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001ed21) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001ed21) title_pane_stacon_g

0x4352,	// (0x000139af) cursor_press_pane

0xbbd5,	// (0x0001b232) popup_fep_hwr_window_ParamLimits

0xbbd5,	// (0x0001b232) popup_fep_hwr_window

0x0c12,	// (0x0001026f) popup_fep_vkb_window_ParamLimits

0x0c12,	// (0x0001026f) popup_fep_vkb_window

0x77ae,	// (0x00016e0b) cursor_press_pane_g1

0x0002,

0xfb22,	// (0x0001f17f) fep_vkb_side_pane_g_ParamLimits

0x15aa,	// (0x00010c07) fep_hwr_candidate_pane_ParamLimits

0x15aa,	// (0x00010c07) fep_hwr_candidate_pane

0x15d4,	// (0x00010c31) fep_hwr_side_pane_ParamLimits

0x15d4,	// (0x00010c31) fep_hwr_side_pane

0x15f4,	// (0x00010c51) fep_hwr_top_pane_ParamLimits

0x15f4,	// (0x00010c51) fep_hwr_top_pane

0x160c,	// (0x00010c69) fep_hwr_write_pane_ParamLimits

0x160c,	// (0x00010c69) fep_hwr_write_pane

0xfb22,	// (0x0001f17f) fep_vkb_side_pane_g

0x77b6,	// (0x00016e13) fep_hwr_top_pane_g1

0x77c8,	// (0x00016e25) fep_hwr_top_pane_g2

0x1646,	// (0x00010ca3) fep_hwr_top_pane_g3

0x0002,

0xfafe,	// (0x0001f15b) fep_hwr_top_pane_g

0x165b,	// (0x00010cb8) fep_hwr_top_text_pane

0x3cb0,	// (0x0001330d) fep_hwr_top_text_pane_g1

0x77fe,	// (0x00016e5b) fep_hwr_top_text_pane_t1

0x1751,	// (0x00010dae) fep_hwr_candidate_pane_g1

0x7a51,	// (0x000170ae) fep_vkb_keypad_pane_g3_ParamLimits

0x7a51,	// (0x000170ae) fep_vkb_keypad_pane_g3

0x7a79,	// (0x000170d6) fep_vkb_keypad_pane_g4_ParamLimits

0x7a79,	// (0x000170d6) fep_vkb_keypad_pane_g4

0x7ae8,	// (0x00017145) fep_vkb_bottom_pane_g2_ParamLimits

0x7ae8,	// (0x00017145) fep_vkb_bottom_pane_g2

0x0001,

0xfb29,	// (0x0001f186) fep_vkb_bottom_pane_g_ParamLimits

0xfb29,	// (0x0001f186) fep_vkb_bottom_pane_g

0x775a,	// (0x00016db7) cell_vkb_side_pane_g2

0x0001,

0xfb33,	// (0x0001f190) cell_vkb_side_pane_g

0x7b73,	// (0x000171d0) cell_vkb_side_pane_t1

0x7b81,	// (0x000171de) cell_vkb_side_pane_t1_copy1

0x775a,	// (0x00016db7) bg_fep_vkb_candidate_pane_g2

0x7cad,	// (0x0001730a) cell_vkb_candidate_pane_ParamLimits

0x780c,	// (0x00016e69) aid_size_cell_vkb_ParamLimits

0x780c,	// (0x00016e69) aid_size_cell_vkb

0x7cad,	// (0x0001730a) cell_vkb_candidate_pane

0x1778,	// (0x00010dd5) bg_popup_fep_shadow_pane_g1

0xe0bc,	// (0x0001d719) fep_vkb_bottom_pane_ParamLimits

0xe0bc,	// (0x0001d719) fep_vkb_bottom_pane

0x78d0,	// (0x00016f2d) fep_vkb_candidate_pane_ParamLimits

0x78d0,	// (0x00016f2d) fep_vkb_candidate_pane

0xe0e1,	// (0x0001d73e) fep_vkb_keypad_pane_ParamLimits

0xe0e1,	// (0x0001d73e) fep_vkb_keypad_pane

0xe11d,	// (0x0001d77a) fep_vkb_side_pane_ParamLimits

0xe11d,	// (0x0001d77a) fep_vkb_side_pane

0xe159,	// (0x0001d7b6) fep_vkb_top_pane_ParamLimits

0xe159,	// (0x0001d7b6) fep_vkb_top_pane

0x79aa,	// (0x00017007) fep_vkb_top_pane_g1_ParamLimits

0x79aa,	// (0x00017007) fep_vkb_top_pane_g1

0x79b9,	// (0x00017016) fep_vkb_top_pane_g2_ParamLimits

0x79b9,	// (0x00017016) fep_vkb_top_pane_g2

0x79c8,	// (0x00017025) fep_vkb_top_pane_g3_ParamLimits

0x79c8,	// (0x00017025) fep_vkb_top_pane_g3

0x0003,

0xfb19,	// (0x0001f176) fep_vkb_top_pane_g_ParamLimits

0xfb19,	// (0x0001f176) fep_vkb_top_pane_g

0x79e6,	// (0x00017043) fep_vkb_top_text_pane_ParamLimits

0x79e6,	// (0x00017043) fep_vkb_top_text_pane

0xe195,	// (0x0001d7f2) fep_vkb_side_pane_g1_ParamLimits

0xe195,	// (0x0001d7f2) fep_vkb_side_pane_g1

0x7a40,	// (0x0001709d) grid_vkb_side_pane_ParamLimits

0x7a40,	// (0x0001709d) grid_vkb_side_pane

0x1780,	// (0x00010ddd) bg_popup_fep_shadow_pane_g2

0x1789,	// (0x00010de6) bg_popup_fep_shadow_pane_g3

0x1791,	// (0x00010dee) bg_popup_fep_shadow_pane_g4

0x179a,	// (0x00010df7) bg_popup_fep_shadow_pane_g5

0x17a4,	// (0x00010e01) bg_popup_fep_shadow_pane_g6

0x17ac,	// (0x00010e09) bg_popup_fep_shadow_pane_g7

0x35f2,	// (0x00012c4f) bg_popup_fep_shadow_pane_g8

0x7a97,	// (0x000170f4) grid_vkb_keypad_number_pane_ParamLimits

0x7a97,	// (0x000170f4) grid_vkb_keypad_number_pane

0x7aa7,	// (0x00017104) grid_vkb_keypad_pane_ParamLimits

0x7aa7,	// (0x00017104) grid_vkb_keypad_pane

0x7acd,	// (0x0001712a) fep_vkb_bottom_pane_g1_ParamLimits

0x7acd,	// (0x0001712a) fep_vkb_bottom_pane_g1

0x7af6,	// (0x00017153) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7af6,	// (0x00017153) grid_vkb_keypad_bottom_left_pane

0x7b0b,	// (0x00017168) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7b0b,	// (0x00017168) grid_vkb_keypad_bottom_right_pane

0x7b20,	// (0x0001717d) fep_vkb_top_text_pane_g1

0xe1dc,	// (0x0001d839) fep_vkb_top_text_pane_t1

0xe1ee,	// (0x0001d84b) cell_vkb_side_pane_ParamLimits

0xe1ee,	// (0x0001d84b) cell_vkb_side_pane

0x775a,	// (0x00016db7) cell_vkb_side_pane_g1

0x7b8f,	// (0x000171ec) cell_vkb_keypad_pane_ParamLimits

0x7b8f,	// (0x000171ec) cell_vkb_keypad_pane

0x7c04,	// (0x00017261) cell_vkb_keypad_pane_g1

0x0008,

0xfb46,	// (0x0001f1a3) bg_popup_fep_shadow_pane_g

0x17be,	// (0x00010e1b) cell_hwr_side_pane_g1

0x17be,	// (0x00010e1b) cell_hwr_side_pane_g2

0x7c0e,	// (0x0001726b) cell_vkb_keypad_pane_t1

0xe204,	// (0x0001d861) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe204,	// (0x0001d861) cell_vkb_keypad_bottom_left_pane

0xe219,	// (0x0001d876) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe219,	// (0x0001d876) cell_vkb_keypad_bottom_right_pane

0x775a,	// (0x00016db7) cell_vkb_keypad_bottom_left_pane_g1

0x775a,	// (0x00016db7) cell_vkb_keypad_bottom_right_pane_g1

0x7c72,	// (0x000172cf) cell_vkb_keypad_number_pane_ParamLimits

0x7c72,	// (0x000172cf) cell_vkb_keypad_number_pane

0x7c91,	// (0x000172ee) cell_vkb_keypad_number_pane_g1

0x7c9b,	// (0x000172f8) cell_vkb_keypad_number_pane_g2

0x7ca4,	// (0x00017301) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb38,	// (0x0001f195) cell_vkb_keypad_number_pane_g

0x7c0e,	// (0x0001726b) cell_vkb_keypad_number_pane_t1

0x7cc8,	// (0x00017325) fep_vkb_candidate_pane_g1

0x0001,

0xfb59,	// (0x0001f1b6) cell_hwr_side_pane_g

0x7ce1,	// (0x0001733e) cell_hwr_side_pane_t1

0x17c8,	// (0x00010e25) cell_hwr_side_pane_t1_copy1

0x17d6,	// (0x00010e33) cell_hwr_candidate_pane_g1

0x1805,	// (0x00010e62) cell_hwr_candidate_pane_t1

0x775a,	// (0x00016db7) cell_vkb_candidate_pane_g2

0x7d25,	// (0x00017382) cell_vkb_candidate_pane_t1

0x1571,	// (0x00010bce) bg_popup_fep_shadow_pane_ParamLimits

0x1571,	// (0x00010bce) bg_popup_fep_shadow_pane

0x1626,	// (0x00010c83) bg_fep_hwr_top_pane_g4

0x77da,	// (0x00016e37) bg_hwr_side_pane_g1_ParamLimits

0x77da,	// (0x00016e37) bg_hwr_side_pane_g1

0xc262,	// (0x0001b8bf) cell_hwr_side_pane_ParamLimits

0xc262,	// (0x0001b8bf) cell_hwr_side_pane

0x16d2,	// (0x00010d2f) fep_hwr_write_pane_g1_ParamLimits

0x16d2,	// (0x00010d2f) fep_hwr_write_pane_g1

0x16df,	// (0x00010d3c) fep_hwr_write_pane_g2_ParamLimits

0x16df,	// (0x00010d3c) fep_hwr_write_pane_g2

0x16ec,	// (0x00010d49) fep_hwr_write_pane_g3_ParamLimits

0x16ec,	// (0x00010d49) fep_hwr_write_pane_g3

0xc282,	// (0x0001b8df) fep_hwr_write_pane_g4_ParamLimits

0xc282,	// (0x0001b8df) fep_hwr_write_pane_g4

0x0005,

0xfb05,	// (0x0001f162) fep_hwr_write_pane_g_ParamLimits

0xfb05,	// (0x0001f162) fep_hwr_write_pane_g

0x1626,	// (0x00010c83) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1626,	// (0x00010c83) bg_fep_hwr_candidate_pane_g2

0x170f,	// (0x00010d6c) cell_hwr_candidate_pane_ParamLimits

0x170f,	// (0x00010d6c) cell_hwr_candidate_pane

0x1751,	// (0x00010dae) fep_hwr_candidate_pane_g1_ParamLimits

0x783a,	// (0x00016e97) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x783a,	// (0x00016e97) bg_popup_fep_shadow_pane_cp2

0x79d8,	// (0x00017035) fep_vkb_top_pane_g4_ParamLimits

0x79d8,	// (0x00017035) fep_vkb_top_pane_g4

0x7a1e,	// (0x0001707b) fep_vkb_side_pane_g2_ParamLimits

0x7a1e,	// (0x0001707b) fep_vkb_side_pane_g2

0xceee,	// (0x0001c54b) list_setting_pane_t4_ParamLimits

0xceee,	// (0x0001c54b) list_setting_pane_t4

0xcf68,	// (0x0001c5c5) list_setting_number_pane_t5_ParamLimits

0xcf68,	// (0x0001c5c5) list_setting_number_pane_t5

0x3ce7,	// (0x00013344) list_double_heading_pane_cp2_ParamLimits

0x3ce7,	// (0x00013344) list_double_heading_pane_cp2

0x3100,	// (0x0001275d) list_double_heading_pane_g1_cp2_ParamLimits

0x3100,	// (0x0001275d) list_double_heading_pane_g1_cp2

0x34dd,	// (0x00012b3a) list_double_heading_pane_g2_cp2_ParamLimits

0x34dd,	// (0x00012b3a) list_double_heading_pane_g2_cp2

0x7d33,	// (0x00017390) list_double_heading_pane_t1_cp2_ParamLimits

0x7d33,	// (0x00017390) list_double_heading_pane_t1_cp2

0x7d49,	// (0x000173a6) list_double_heading_pane_t2_cp2_ParamLimits

0x7d49,	// (0x000173a6) list_double_heading_pane_t2_cp2

0x2581,	// (0x00011bde) aid_value_unit2

0x030c,	// (0x0000f969) popup_preview_fixed_window

0x2930,	// (0x00011f8d) bg_popup_preview_window_pane_cp02

0x7d5b,	// (0x000173b8) list_preview_fixed_pane

0x7da1,	// (0x000173fe) list_empty_pane_fp_ParamLimits

0x7da1,	// (0x000173fe) list_empty_pane_fp

0x7da1,	// (0x000173fe) list_single_cale_day_pane_fp_ParamLimits

0x7da1,	// (0x000173fe) list_single_cale_day_pane_fp

0x7da1,	// (0x000173fe) list_single_graphic_heading_pane_fp_ParamLimits

0x7da1,	// (0x000173fe) list_single_graphic_heading_pane_fp

0x7da1,	// (0x000173fe) list_single_graphic_pane_fp_ParamLimits

0x7da1,	// (0x000173fe) list_single_graphic_pane_fp

0x7da1,	// (0x000173fe) list_single_heading_pane_fp_ParamLimits

0x7da1,	// (0x000173fe) list_single_heading_pane_fp

0x7da1,	// (0x000173fe) list_single_pane_fp_ParamLimits

0x7da1,	// (0x000173fe) list_single_pane_fp

0x7db6,	// (0x00017413) list_single_pane_fp_g1_ParamLimits

0x7db6,	// (0x00017413) list_single_pane_fp_g1

0x3100,	// (0x0001275d) list_single_pane_fp_g2_ParamLimits

0x3100,	// (0x0001275d) list_single_pane_fp_g2

0x34dd,	// (0x00012b3a) list_single_pane_fp_g3_ParamLimits

0x34dd,	// (0x00012b3a) list_single_pane_fp_g3

0x7dc2,	// (0x0001741f) list_single_pane_fp_g4_ParamLimits

0x7dc2,	// (0x0001741f) list_single_pane_fp_g4

0x0003,

0xfb6c,	// (0x0001f1c9) list_single_pane_fp_g_ParamLimits

0xfb6c,	// (0x0001f1c9) list_single_pane_fp_g

0x7dce,	// (0x0001742b) list_single_pane_fp_t1_ParamLimits

0x7dce,	// (0x0001742b) list_single_pane_fp_t1

0x7de5,	// (0x00017442) list_single_graphic_pane_fp_g1_ParamLimits

0x7de5,	// (0x00017442) list_single_graphic_pane_fp_g1

0x7db6,	// (0x00017413) list_single_graphic_pane_fp_g2_ParamLimits

0x7db6,	// (0x00017413) list_single_graphic_pane_fp_g2

0x3100,	// (0x0001275d) list_single_graphic_pane_fp_g3_ParamLimits

0x3100,	// (0x0001275d) list_single_graphic_pane_fp_g3

0x34dd,	// (0x00012b3a) list_single_graphic_pane_fp_g4_ParamLimits

0x34dd,	// (0x00012b3a) list_single_graphic_pane_fp_g4

0x7dc2,	// (0x0001741f) list_single_graphic_pane_fp_g5_ParamLimits

0x7dc2,	// (0x0001741f) list_single_graphic_pane_fp_g5

0x0004,

0xfb75,	// (0x0001f1d2) list_single_graphic_pane_fp_g_ParamLimits

0xfb75,	// (0x0001f1d2) list_single_graphic_pane_fp_g

0x7df1,	// (0x0001744e) list_single_graphic_pane_fp_t1_ParamLimits

0x7df1,	// (0x0001744e) list_single_graphic_pane_fp_t1

0x7de5,	// (0x00017442) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7de5,	// (0x00017442) list_single_graphic_heading_pane_fp_g1

0x7db6,	// (0x00017413) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7db6,	// (0x00017413) list_single_graphic_heading_pane_fp_g2

0x3100,	// (0x0001275d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3100,	// (0x0001275d) list_single_graphic_heading_pane_fp_g3

0x34dd,	// (0x00012b3a) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x34dd,	// (0x00012b3a) list_single_graphic_heading_pane_fp_g4

0x7dc2,	// (0x0001741f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7dc2,	// (0x0001741f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb75,	// (0x0001f1d2) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb75,	// (0x0001f1d2) list_single_graphic_heading_pane_fp_g

0x7e07,	// (0x00017464) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7e07,	// (0x00017464) list_single_graphic_heading_pane_fp_t1

0x7e1d,	// (0x0001747a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7e1d,	// (0x0001747a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb80,	// (0x0001f1dd) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb80,	// (0x0001f1dd) list_single_graphic_heading_pane_fp_t

0x7e2f,	// (0x0001748c) list_single_cale_day_pane_fp_g1_ParamLimits

0x7e2f,	// (0x0001748c) list_single_cale_day_pane_fp_g1

0x7e67,	// (0x000174c4) list_single_cale_day_pane_fp_g2_ParamLimits

0x7e67,	// (0x000174c4) list_single_cale_day_pane_fp_g2

0x7e73,	// (0x000174d0) list_single_cale_day_pane_fp_g3_ParamLimits

0x7e73,	// (0x000174d0) list_single_cale_day_pane_fp_g3

0x7e9b,	// (0x000174f8) list_single_cale_day_pane_fp_g4_ParamLimits

0x7e9b,	// (0x000174f8) list_single_cale_day_pane_fp_g4

0x7ebf,	// (0x0001751c) list_single_cale_day_pane_fp_g5_ParamLimits

0x7ebf,	// (0x0001751c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb85,	// (0x0001f1e2) list_single_cale_day_pane_fp_g_ParamLimits

0xfb85,	// (0x0001f1e2) list_single_cale_day_pane_fp_g

0x7ee3,	// (0x00017540) list_single_cale_day_pane_fp_t1_ParamLimits

0x7ee3,	// (0x00017540) list_single_cale_day_pane_fp_t1

0x7f09,	// (0x00017566) list_single_cale_day_pane_fp_t2_ParamLimits

0x7f09,	// (0x00017566) list_single_cale_day_pane_fp_t2

0x7f22,	// (0x0001757f) list_single_cale_day_pane_fp_t3_ParamLimits

0x7f22,	// (0x0001757f) list_single_cale_day_pane_fp_t3

0x0002,

0xfb90,	// (0x0001f1ed) list_single_cale_day_pane_fp_t_ParamLimits

0xfb90,	// (0x0001f1ed) list_single_cale_day_pane_fp_t

0x7db6,	// (0x00017413) list_empty_pane_fp_g1_ParamLimits

0x7db6,	// (0x00017413) list_empty_pane_fp_g1

0x7f3b,	// (0x00017598) list_empty_pane_fp_t1

0x7f49,	// (0x000175a6) list_empty_pane_fp_t2

0x0001,

0xfb97,	// (0x0001f1f4) list_empty_pane_fp_t

0x7db6,	// (0x00017413) list_single_heading_pane_fp_g1_ParamLimits

0x7db6,	// (0x00017413) list_single_heading_pane_fp_g1

0x3100,	// (0x0001275d) list_single_heading_pane_fp_g2_ParamLimits

0x3100,	// (0x0001275d) list_single_heading_pane_fp_g2

0x34dd,	// (0x00012b3a) list_single_heading_pane_fp_g3_ParamLimits

0x34dd,	// (0x00012b3a) list_single_heading_pane_fp_g3

0x0002,

0xfb9c,	// (0x0001f1f9) list_single_heading_pane_fp_g_ParamLimits

0xfb9c,	// (0x0001f1f9) list_single_heading_pane_fp_g

0x7f57,	// (0x000175b4) list_single_heading_pane_fp_t1_ParamLimits

0x7f57,	// (0x000175b4) list_single_heading_pane_fp_t1

0x7f69,	// (0x000175c6) list_single_heading_pane_fp_t2_ParamLimits

0x7f69,	// (0x000175c6) list_single_heading_pane_fp_t2

0x0001,

0xfba3,	// (0x0001f200) list_single_heading_pane_fp_t_ParamLimits

0xfba3,	// (0x0001f200) list_single_heading_pane_fp_t

0x382d,	// (0x00012e8a) aid_size_cell_fast

0x28a0,	// (0x00011efd) soft_indicator_pane_cp1_t1

0x386a,	// (0x00012ec7) cell_app_pane_cp2_ParamLimits

0x386a,	// (0x00012ec7) cell_app_pane_cp2

0x1593,	// (0x00010bf0) fep_hwr_candidate_drop_down_list_pane

0x176b,	// (0x00010dc8) fep_hwr_candidate_pane_g3_ParamLimits

0x176b,	// (0x00010dc8) fep_hwr_candidate_pane_g3

0xee7b,	// (0x0001e4d8) fep_hwr_candidate_pane_g4_ParamLimits

0xee7b,	// (0x0001e4d8) fep_hwr_candidate_pane_g4

0x0002,

0xfb12,	// (0x0001f16f) fep_hwr_candidate_pane_g_ParamLimits

0xfb12,	// (0x0001f16f) fep_hwr_candidate_pane_g

0x78bf,	// (0x00016f1c) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x78bf,	// (0x00016f1c) fep_vkb_candidate_drop_down_list_pane

0x7cd0,	// (0x0001732d) fep_vkb_candidate_pane_g3

0x7cd8,	// (0x00017335) fep_vkb_candidate_pane_g4

0x0002,

0xfb3f,	// (0x0001f19c) fep_vkb_candidate_pane_g

0x17d6,	// (0x00010e33) cell_hwr_candidate_pane_g1_ParamLimits

0x17e4,	// (0x00010e41) cell_hwr_candidate_pane_g3_ParamLimits

0x17e4,	// (0x00010e41) cell_hwr_candidate_pane_g3

0x9cbf,	// (0x0001931c) cell_hwr_candidate_pane_g4_ParamLimits

0x9cbf,	// (0x0001931c) cell_hwr_candidate_pane_g4

0x0002,

0xfb5e,	// (0x0001f1bb) cell_hwr_candidate_pane_g_ParamLimits

0xfb5e,	// (0x0001f1bb) cell_hwr_candidate_pane_g

0x7cef,	// (0x0001734c) cell_vkb_candidate_pane_g3_ParamLimits

0x7cef,	// (0x0001734c) cell_vkb_candidate_pane_g3

0x7d0a,	// (0x00017367) cell_vkb_candidate_pane_g4_ParamLimits

0x7d0a,	// (0x00017367) cell_vkb_candidate_pane_g4

0x7f7f,	// (0x000175dc) cell_app_pane_cp2_g1_ParamLimits

0x7f7f,	// (0x000175dc) cell_app_pane_cp2_g1

0x7f9d,	// (0x000175fa) cell_app_pane_cp2_g2_ParamLimits

0x7f9d,	// (0x000175fa) cell_app_pane_cp2_g2

0x0001,

0xfba8,	// (0x0001f205) cell_app_pane_cp2_g_ParamLimits

0xfba8,	// (0x0001f205) cell_app_pane_cp2_g

0x7fa9,	// (0x00017606) cell_app_pane_cp2_t1_ParamLimits

0x7fa9,	// (0x00017606) cell_app_pane_cp2_t1

0x34b7,	// (0x00012b14) grid_highlight_pane_cp1_ParamLimits

0x34b7,	// (0x00012b14) grid_highlight_pane_cp1

0x1823,	// (0x00010e80) cell_hwr_candidate_pane_cp1_ParamLimits

0x1823,	// (0x00010e80) cell_hwr_candidate_pane_cp1

0x17d6,	// (0x00010e33) fep_hwr_candidate_drop_down_list_pane_g1

0x1842,	// (0x00010e9f) fep_hwr_candidate_drop_down_list_pane_g2

0x184f,	// (0x00010eac) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbad,	// (0x0001f20a) fep_hwr_candidate_drop_down_list_pane_g

0x185c,	// (0x00010eb9) fep_hwr_candidate_drop_down_list_scroll_pane

0x1865,	// (0x00010ec2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1865,	// (0x00010ec2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1872,	// (0x00010ecf) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1872,	// (0x00010ecf) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x187f,	// (0x00010edc) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x187f,	// (0x00010edc) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x188c,	// (0x00010ee9) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x188c,	// (0x00010ee9) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x18a7,	// (0x00010f04) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x18a7,	// (0x00010f04) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x18c2,	// (0x00010f1f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x18c2,	// (0x00010f1f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x18dd,	// (0x00010f3a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x18dd,	// (0x00010f3a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x18f8,	// (0x00010f55) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x18f8,	// (0x00010f55) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb4,	// (0x0001f211) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb4,	// (0x0001f211) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7fbb,	// (0x00017618) cell_vkb_candidate_pane_cp1_ParamLimits

0x7fbb,	// (0x00017618) cell_vkb_candidate_pane_cp1

0x79d8,	// (0x00017035) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x79d8,	// (0x00017035) fep_vkb_candidate_drop_down_list_pane_g1

0x7fdb,	// (0x00017638) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7fdb,	// (0x00017638) fep_vkb_candidate_drop_down_list_pane_g2

0x7fe8,	// (0x00017645) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7fe8,	// (0x00017645) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc5,	// (0x0001f222) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc5,	// (0x0001f222) fep_vkb_candidate_drop_down_list_pane_g

0x7ff5,	// (0x00017652) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7ff5,	// (0x00017652) fep_vkb_candidate_drop_down_list_scroll_pane

0x8002,	// (0x0001765f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8002,	// (0x0001765f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x800f,	// (0x0001766c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x800f,	// (0x0001766c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x801b,	// (0x00017678) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x801b,	// (0x00017678) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8027,	// (0x00017684) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8027,	// (0x00017684) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8048,	// (0x000176a5) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8048,	// (0x000176a5) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x8069,	// (0x000176c6) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8069,	// (0x000176c6) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x808a,	// (0x000176e7) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x808a,	// (0x000176e7) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x80ab,	// (0x00017708) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x80ab,	// (0x00017708) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcc,	// (0x0001f229) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcc,	// (0x0001f229) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc888,	// (0x0001bee5) title_pane_g1_ParamLimits

0xc89b,	// (0x0001bef8) title_pane_g2_ParamLimits

0xf54e,	// (0x0001ebab) title_pane_g_ParamLimits

0x3ca0,	// (0x000132fd) aid_call2_pane

0x3ca8,	// (0x00013305) aid_call_pane

0x3cb0,	// (0x0001330d) popup_clock_analogue_window_g1

0x3cb0,	// (0x0001330d) popup_clock_analogue_window_g2

0x067d,	// (0x0000fcda) popup_clock_analogue_window_g3

0x0686,	// (0x0000fce3) popup_clock_analogue_window_g4

0x25a3,	// (0x00011c00) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001ed50) popup_clock_analogue_window_g

0x068e,	// (0x0000fceb) popup_clock_analogue_window_t1

0x069c,	// (0x0000fcf9) clock_digital_number_pane_ParamLimits

0x069c,	// (0x0000fcf9) clock_digital_number_pane

0x06a8,	// (0x0000fd05) clock_digital_number_pane_cp02_ParamLimits

0x06a8,	// (0x0000fd05) clock_digital_number_pane_cp02

0x06b4,	// (0x0000fd11) clock_digital_number_pane_cp03_ParamLimits

0x06b4,	// (0x0000fd11) clock_digital_number_pane_cp03

0x06c0,	// (0x0000fd1d) clock_digital_number_pane_cp04_ParamLimits

0x06c0,	// (0x0000fd1d) clock_digital_number_pane_cp04

0x06cc,	// (0x0000fd29) clock_digital_separator_pane_ParamLimits

0x06cc,	// (0x0000fd29) clock_digital_separator_pane

0x06d8,	// (0x0000fd35) popup_clock_digital_window_t1_ParamLimits

0x06d8,	// (0x0000fd35) popup_clock_digital_window_t1

0x25a3,	// (0x00011c00) clock_digital_number_pane_g1

0x25a3,	// (0x00011c00) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001ed5b) clock_digital_number_pane_g

0x25a3,	// (0x00011c00) clock_digital_separator_pane_g1

0x25a3,	// (0x00011c00) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001ed5b) clock_digital_separator_pane_g

0xd527,	// (0x0001cb84) aid_fill_nsta_ParamLimits

0xd65d,	// (0x0001ccba) indicator_nsta_pane_ParamLimits

0x4981,	// (0x00013fde) popup_clock_analogue_window

0x4981,	// (0x00013fde) popup_clock_digital_window

0x37ee,	// (0x00012e4b) grid_indicator_nsta_pane_ParamLimits

0x7123,	// (0x00016780) clock_nsta_pane_t2

0x0001,

0xfa92,	// (0x0001f0ef) clock_nsta_pane_t

0x0641,	// (0x0000fc9e) aid_size_max_handle

0xb998,	// (0x0001aff5) aid_size_min_handle

0x4352,	// (0x000139af) editor_scroll_pane

0x80c6,	// (0x00017723) ex_editor_pane

0x379b,	// (0x00012df8) scroll_pane_cp13

0x2edb,	// (0x00012538) scroll_pane_cp14

0x3cdf,	// (0x0001333c) scroll_pane_cp36

0xd251,	// (0x0001c8ae) list_single_graphic_hl_pane_cp2_ParamLimits

0xd251,	// (0x0001c8ae) list_single_graphic_hl_pane_cp2

0xdd28,	// (0x0001d385) list_single_graphic_hl_pane_ParamLimits

0xdd28,	// (0x0001d385) list_single_graphic_hl_pane

0x80ce,	// (0x0001772b) aid_size_min_hl_cp1

0x80d7,	// (0x00017734) list_highlight_pane_cp34_ParamLimits

0x80d7,	// (0x00017734) list_highlight_pane_cp34

0x80e8,	// (0x00017745) list_single_graphic_hl_pane_g1_ParamLimits

0x80e8,	// (0x00017745) list_single_graphic_hl_pane_g1

0xe234,	// (0x0001d891) list_single_graphic_hl_pane_g2_ParamLimits

0xe234,	// (0x0001d891) list_single_graphic_hl_pane_g2

0xe234,	// (0x0001d891) list_single_graphic_hl_pane_g3_ParamLimits

0xe234,	// (0x0001d891) list_single_graphic_hl_pane_g3

0x42c3,	// (0x00013920) list_single_graphic_hl_pane_g4_ParamLimits

0x42c3,	// (0x00013920) list_single_graphic_hl_pane_g4

0xe240,	// (0x0001d89d) list_single_graphic_hl_pane_g5_ParamLimits

0xe240,	// (0x0001d89d) list_single_graphic_hl_pane_g5

0x0004,

0xfbdd,	// (0x0001f23a) list_single_graphic_hl_pane_g_ParamLimits

0xfbdd,	// (0x0001f23a) list_single_graphic_hl_pane_g

0xe254,	// (0x0001d8b1) list_single_graphic_hl_pane_t1_ParamLimits

0xe254,	// (0x0001d8b1) list_single_graphic_hl_pane_t1

0x812b,	// (0x00017788) aid_size_min_hl_cp2

0x8134,	// (0x00017791) list_highlight_pane_cp34_cp2_ParamLimits

0x8134,	// (0x00017791) list_highlight_pane_cp34_cp2

0x80e8,	// (0x00017745) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x80e8,	// (0x00017745) list_single_graphic_hl_pane_g1_cp2

0x8141,	// (0x0001779e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8141,	// (0x0001779e) list_single_graphic_hl_pane_g2_cp2

0x814d,	// (0x000177aa) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x814d,	// (0x000177aa) list_single_graphic_hl_pane_g3_cp2

0x68bf,	// (0x00015f1c) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x68bf,	// (0x00015f1c) list_single_graphic_hl_pane_g4_cp2

0x8101,	// (0x0001775e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8101,	// (0x0001775e) list_single_graphic_hl_pane_g5_cp2

0xb9f3,	// (0x0001b050) control_pane_g4_ParamLimits

0xb9f3,	// (0x0001b050) control_pane_g4

0x467e,	// (0x00013cdb) bg_popup_sub_pane_cp10_ParamLimits

0x7764,	// (0x00016dc1) list_choice_list_pane_ParamLimits

0x7773,	// (0x00016dd0) scroll_pane_cp23

0x2930,	// (0x00011f8d) bg_popup_preview_window_pane_cp02_ParamLimits

0x7d5b,	// (0x000173b8) list_preview_fixed_pane_ParamLimits

0x7d71,	// (0x000173ce) list_preview_fixed_pane_cp_ParamLimits

0x7d71,	// (0x000173ce) list_preview_fixed_pane_cp

0x7d7d,	// (0x000173da) popup_preview_fixed_window_g1_ParamLimits

0x7d7d,	// (0x000173da) popup_preview_fixed_window_g1

0x7d89,	// (0x000173e6) popup_preview_fixed_window_g2_ParamLimits

0x7d89,	// (0x000173e6) popup_preview_fixed_window_g2

0x0002,

0xfb65,	// (0x0001f1c2) popup_preview_fixed_window_g_ParamLimits

0xfb65,	// (0x0001f1c2) popup_preview_fixed_window_g

0x05b5,	// (0x0000fc12) aid_navi_side_left_pane_ParamLimits

0x05ca,	// (0x0000fc27) aid_navi_side_right_pane_ParamLimits

0x05e2,	// (0x0000fc3f) navi_icon_pane_stacon_ParamLimits

0x05f6,	// (0x0000fc53) navi_navi_pane_stacon_ParamLimits

0x05e2,	// (0x0000fc3f) navi_text_pane_stacon_ParamLimits

0x01cd,	// (0x0000f82a) main_text_info_pane

0x8171,	// (0x000177ce) listscroll_text_info_pane

0x8179,	// (0x000177d6) list_text_info_pane_ParamLimits

0x8179,	// (0x000177d6) list_text_info_pane

0x8188,	// (0x000177e5) scroll_pane_cp24_ParamLimits

0x8188,	// (0x000177e5) scroll_pane_cp24

0xe26a,	// (0x0001d8c7) list_text_info_pane_t1_ParamLimits

0xe26a,	// (0x0001d8c7) list_text_info_pane_t1

0xbb48,	// (0x0001b1a5) popup_fast_swap2_window_ParamLimits

0xbb48,	// (0x0001b1a5) popup_fast_swap2_window

0x81d7,	// (0x00017834) aid_size_cell_fast2

0x2599,	// (0x00011bf6) bg_popup_window_pane_cp17

0x5123,	// (0x00014780) heading_pane_cp2

0x2ba5,	// (0x00012202) listscroll_fast2_pane

0x81e1,	// (0x0001783e) grid_fast2_pane

0x81eb,	// (0x00017848) listscroll_fast2_pane_g1

0x81f3,	// (0x00017850) listscroll_fast2_pane_g2

0x0001,

0xfbe8,	// (0x0001f245) listscroll_fast2_pane_g

0x379b,	// (0x00012df8) scroll_pane_cp26

0x81fd,	// (0x0001785a) cell_fast2_pane_ParamLimits

0x81fd,	// (0x0001785a) cell_fast2_pane

0x8212,	// (0x0001786f) cell_fast2_pane_g1

0x821b,	// (0x00017878) cell_fast2_pane_g2

0x8224,	// (0x00017881) cell_fast2_pane_g3

0x0002,

0xfbed,	// (0x0001f24a) cell_fast2_pane_g

0x2c98,	// (0x000122f5) grid_highlight_pane_cp9

0x0ad0,	// (0x0001012d) main_eswt_pane_ParamLimits

0x0ad0,	// (0x0001012d) main_eswt_pane

0x819d,	// (0x000177fa) list_single_text_info_pane

0x822c,	// (0x00017889) eswt_ctrl_button_pane

0x822c,	// (0x00017889) eswt_ctrl_canvas_pane

0x8234,	// (0x00017891) eswt_ctrl_combo_pane

0x822c,	// (0x00017889) eswt_ctrl_default_pane

0x822c,	// (0x00017889) eswt_ctrl_label_pane

0x823c,	// (0x00017899) eswt_ctrl_wait_pane

0x8244,	// (0x000178a1) eswt_shell_pane

0x2599,	// (0x00011bf6) listscroll_eswt_app_pane

0x8264,	// (0x000178c1) popup_eswt_tasktip_window_ParamLimits

0x8264,	// (0x000178c1) popup_eswt_tasktip_window

0x4cfa,	// (0x00014357) bg_popup_window_pane_cp18

0x8275,	// (0x000178d2) eswt_control_pane_g1_ParamLimits

0x8275,	// (0x000178d2) eswt_control_pane_g1

0x8282,	// (0x000178df) eswt_control_pane_g2_ParamLimits

0x8282,	// (0x000178df) eswt_control_pane_g2

0x828f,	// (0x000178ec) eswt_control_pane_g3_ParamLimits

0x828f,	// (0x000178ec) eswt_control_pane_g3

0x829c,	// (0x000178f9) eswt_control_pane_g4_ParamLimits

0x829c,	// (0x000178f9) eswt_control_pane_g4

0x0003,

0xfbf4,	// (0x0001f251) eswt_control_pane_g_ParamLimits

0xfbf4,	// (0x0001f251) eswt_control_pane_g

0x34b7,	// (0x00012b14) bg_button_pane_ParamLimits

0x34b7,	// (0x00012b14) bg_button_pane

0x2cad,	// (0x0001230a) common_borders_pane_copy2_ParamLimits

0x2cad,	// (0x0001230a) common_borders_pane_copy2

0x82a9,	// (0x00017906) control_button_pane_g1_ParamLimits

0x82a9,	// (0x00017906) control_button_pane_g1

0x82b5,	// (0x00017912) control_button_pane_g2_ParamLimits

0x82b5,	// (0x00017912) control_button_pane_g2

0x82c1,	// (0x0001791e) control_button_pane_g3_ParamLimits

0x82c1,	// (0x0001791e) control_button_pane_g3

0x0002,

0xfbfd,	// (0x0001f25a) control_button_pane_g_ParamLimits

0xfbfd,	// (0x0001f25a) control_button_pane_g

0x82d5,	// (0x00017932) control_button_pane_t1

0x82e3,	// (0x00017940) control_button_pane_t2

0x0001,

0xfc04,	// (0x0001f261) control_button_pane_t

0x4bd8,	// (0x00014235) bg_button_pane_g1

0x4be8,	// (0x00014245) bg_button_pane_g2

0x4be0,	// (0x0001423d) bg_button_pane_g3

0x4bf8,	// (0x00014255) bg_button_pane_g4

0x4bf0,	// (0x0001424d) bg_button_pane_g5

0x4c00,	// (0x0001425d) bg_button_pane_g6

0x4c08,	// (0x00014265) bg_button_pane_g7

0x4c18,	// (0x00014275) bg_button_pane_g8

0x4c10,	// (0x0001426d) bg_button_pane_g9

0x0008,

0xf85c,	// (0x0001eeb9) bg_button_pane_g

0x771f,	// (0x00016d7c) common_borders_pane_ParamLimits

0x771f,	// (0x00016d7c) common_borders_pane

0x8275,	// (0x000178d2) eswt_control_pane_g1_copy1_ParamLimits

0x8275,	// (0x000178d2) eswt_control_pane_g1_copy1

0x8282,	// (0x000178df) eswt_control_pane_g2_copy1_ParamLimits

0x8282,	// (0x000178df) eswt_control_pane_g2_copy1

0x828f,	// (0x000178ec) eswt_control_pane_g3_copy1_ParamLimits

0x828f,	// (0x000178ec) eswt_control_pane_g3_copy1

0x829c,	// (0x000178f9) eswt_control_pane_g4_copy1_ParamLimits

0x829c,	// (0x000178f9) eswt_control_pane_g4_copy1

0x775a,	// (0x00016db7) bg_eswt_ctrl_canvas_pane_g1

0x771f,	// (0x00016d7c) common_borders_pane_cp2_ParamLimits

0x771f,	// (0x00016d7c) common_borders_pane_cp2

0x771f,	// (0x00016d7c) common_borders_pane_cp3_ParamLimits

0x771f,	// (0x00016d7c) common_borders_pane_cp3

0x82f1,	// (0x0001794e) separator_horizontal_pane

0x82f9,	// (0x00017956) separator_vertical_pane

0x8275,	// (0x000178d2) eswt_control_pane_g1_copy2_ParamLimits

0x8275,	// (0x000178d2) eswt_control_pane_g1_copy2

0x8282,	// (0x000178df) eswt_control_pane_g2_copy2_ParamLimits

0x8282,	// (0x000178df) eswt_control_pane_g2_copy2

0x828f,	// (0x000178ec) eswt_control_pane_g3_copy2_ParamLimits

0x828f,	// (0x000178ec) eswt_control_pane_g3_copy2

0x829c,	// (0x000178f9) eswt_control_pane_g4_copy2_ParamLimits

0x829c,	// (0x000178f9) eswt_control_pane_g4_copy2

0x2599,	// (0x00011bf6) common_borders_pane_cp4

0x8302,	// (0x0001795f) separator_horizontal_pane_g1

0x830b,	// (0x00017968) separator_horizontal_pane_g2

0x8314,	// (0x00017971) separator_horizontal_pane_g3

0x0002,

0xfc09,	// (0x0001f266) separator_horizontal_pane_g

0x8275,	// (0x000178d2) eswt_control_pane_g1_copy3_ParamLimits

0x8275,	// (0x000178d2) eswt_control_pane_g1_copy3

0x8282,	// (0x000178df) eswt_control_pane_g2_copy3_ParamLimits

0x8282,	// (0x000178df) eswt_control_pane_g2_copy3

0x828f,	// (0x000178ec) eswt_control_pane_g3_copy3_ParamLimits

0x828f,	// (0x000178ec) eswt_control_pane_g3_copy3

0x829c,	// (0x000178f9) eswt_control_pane_g4_copy3_ParamLimits

0x829c,	// (0x000178f9) eswt_control_pane_g4_copy3

0x2599,	// (0x00011bf6) common_borders_pane_cp5

0x831d,	// (0x0001797a) separator_vertical_pane_g1

0x8326,	// (0x00017983) separator_vertical_pane_g2

0x832f,	// (0x0001798c) separator_vertical_pane_g3

0x0002,

0xfc10,	// (0x0001f26d) separator_vertical_pane_g

0x8275,	// (0x000178d2) eswt_control_pane_g1_copy4_ParamLimits

0x8275,	// (0x000178d2) eswt_control_pane_g1_copy4

0x8282,	// (0x000178df) eswt_control_pane_g2_copy4_ParamLimits

0x8282,	// (0x000178df) eswt_control_pane_g2_copy4

0x828f,	// (0x000178ec) eswt_control_pane_g3_copy4_ParamLimits

0x828f,	// (0x000178ec) eswt_control_pane_g3_copy4

0x829c,	// (0x000178f9) eswt_control_pane_g4_copy4_ParamLimits

0x829c,	// (0x000178f9) eswt_control_pane_g4_copy4

0xe285,	// (0x0001d8e2) eswt_ctrl_combo_button_pane

0xe28d,	// (0x0001d8ea) eswt_ctrl_input_pane

0xe295,	// (0x0001d8f2) popup_choice_list_window_cp70

0xe29d,	// (0x0001d8fa) eswt_ctrl_input_pane_t1

0x2599,	// (0x00011bf6) input_focus_pane_cp70

0x771f,	// (0x00016d7c) bg_button_pane_cp70_ParamLimits

0x771f,	// (0x00016d7c) bg_button_pane_cp70

0xe2ab,	// (0x0001d908) eswt_ctrl_combo_button_pane_g1

0x8366,	// (0x000179c3) wait_bar_pane_cp70

0x4cfa,	// (0x00014357) bg_popup_window_pane_cp70_ParamLimits

0x4cfa,	// (0x00014357) bg_popup_window_pane_cp70

0x836e,	// (0x000179cb) popup_eswt_tasktip_window_t1

0x8384,	// (0x000179e1) wait_bar_pane_cp71_ParamLimits

0x8384,	// (0x000179e1) wait_bar_pane_cp71

0x8390,	// (0x000179ed) grid_eswt_app_pane

0x3ab9,	// (0x00013116) scroll_pane_cp70

0xe2b3,	// (0x0001d910) cell_eswt_app_pane_ParamLimits

0xe2b3,	// (0x0001d910) cell_eswt_app_pane

0xe2dd,	// (0x0001d93a) cell_eswt_app_pane_g1_ParamLimits

0xe2dd,	// (0x0001d93a) cell_eswt_app_pane_g1

0xe30c,	// (0x0001d969) cell_eswt_app_pane_g2_ParamLimits

0xe30c,	// (0x0001d969) cell_eswt_app_pane_g2

0x0001,

0xfc17,	// (0x0001f274) cell_eswt_app_pane_g_ParamLimits

0xfc17,	// (0x0001f274) cell_eswt_app_pane_g

0xe335,	// (0x0001d992) cell_eswt_app_pane_t1_ParamLimits

0xe335,	// (0x0001d992) cell_eswt_app_pane_t1

0x8453,	// (0x00017ab0) grid_highlight_pane_cp70_ParamLimits

0x8453,	// (0x00017ab0) grid_highlight_pane_cp70

0x4227,	// (0x00013884) set_content_pane_g1

0xd4b4,	// (0x0001cb11) status_small_volume_pane

0x1913,	// (0x00010f70) status_small_volume_pane_g1

0x191b,	// (0x00010f78) volume_small2_pane

0x1924,	// (0x00010f81) volume_small2_pane_g1

0x192d,	// (0x00010f8a) volume_small2_pane_g2

0x1936,	// (0x00010f93) volume_small2_pane_g3

0x193f,	// (0x00010f9c) volume_small2_pane_g4

0x1948,	// (0x00010fa5) volume_small2_pane_g5

0x1951,	// (0x00010fae) volume_small2_pane_g6

0x195a,	// (0x00010fb7) volume_small2_pane_g7

0x1963,	// (0x00010fc0) volume_small2_pane_g8

0x196c,	// (0x00010fc9) volume_small2_pane_g9

0x1975,	// (0x00010fd2) volume_small2_pane_g10

0x0009,

0xfc1c,	// (0x0001f279) volume_small2_pane_g

0x7b20,	// (0x0001717d) fep_vkb_top_text_pane_g1_ParamLimits

0xe1dc,	// (0x0001d839) fep_vkb_top_text_pane_t1_ParamLimits

0x7d95,	// (0x000173f2) popup_preview_fixed_window_g3_ParamLimits

0x7d95,	// (0x000173f2) popup_preview_fixed_window_g3

0xc16b,	// (0x0001b7c8) popup_toolbar_trans_pane

0xdb80,	// (0x0001d1dd) aid_height_set_list_ParamLimits

0x60cd,	// (0x0001572a) aid_size_parent_ParamLimits

0x467e,	// (0x00013cdb) list_highlight_pane_cp2_ParamLimits

0x4227,	// (0x00013884) set_content_pane_g1_ParamLimits

0xdd39,	// (0x0001d396) list_single_image_pane_ParamLimits

0xdd39,	// (0x0001d396) list_single_image_pane

0xe367,	// (0x0001d9c4) aid_size_cell_image_ParamLimits

0xe367,	// (0x0001d9c4) aid_size_cell_image

0xe374,	// (0x0001d9d1) grid_single_image_pane_ParamLimits

0xe374,	// (0x0001d9d1) grid_single_image_pane

0x589c,	// (0x00014ef9) list_single_image_pane_g1_ParamLimits

0x589c,	// (0x00014ef9) list_single_image_pane_g1

0x8478,	// (0x00017ad5) list_single_image_pane_g2_ParamLimits

0x8478,	// (0x00017ad5) list_single_image_pane_g2

0x0001,

0xfc31,	// (0x0001f28e) list_single_image_pane_g_ParamLimits

0xfc31,	// (0x0001f28e) list_single_image_pane_g

0x848c,	// (0x00017ae9) list_single_image_pane_t1_ParamLimits

0x848c,	// (0x00017ae9) list_single_image_pane_t1

0xe382,	// (0x0001d9df) cell_image_list_pane_ParamLimits

0xe382,	// (0x0001d9df) cell_image_list_pane

0xe398,	// (0x0001d9f5) cell_image_list_pane_g1

0xe3a1,	// (0x0001d9fe) cell_image_list_pane_g2

0x0001,

0xfc36,	// (0x0001f293) cell_image_list_pane_g

0x84c8,	// (0x00017b25) aid_size_cell_tb_trans_pane

0x34b7,	// (0x00012b14) bg_tb_trans_pane

0x84da,	// (0x00017b37) grid_tb_trans_pane

0x4bd8,	// (0x00014235) bg_tb_trans_pane_g1

0x4be8,	// (0x00014245) bg_tb_trans_pane_g2

0x4be0,	// (0x0001423d) bg_tb_trans_pane_g3

0x4bf8,	// (0x00014255) bg_tb_trans_pane_g4

0x4bf0,	// (0x0001424d) bg_tb_trans_pane_g5

0x4c18,	// (0x00014275) bg_tb_trans_pane_g6

0x4c10,	// (0x0001426d) bg_tb_trans_pane_g7

0x4c00,	// (0x0001425d) bg_tb_trans_pane_g8

0x4c08,	// (0x00014265) bg_tb_trans_pane_g9

0x0008,

0xfc3b,	// (0x0001f298) bg_tb_trans_pane_g

0x84ee,	// (0x00017b4b) cell_toolbar_trans_pane_ParamLimits

0x84ee,	// (0x00017b4b) cell_toolbar_trans_pane

0x775a,	// (0x00016db7) cell_toolbar_trans_pane_g1

0xdf93,	// (0x0001d5f0) list_form2_midp_pane_t1

0xdfa1,	// (0x0001d5fe) list_form2_midp_pane_t2

0x0001,

0xfad8,	// (0x0001f135) list_form2_midp_pane_t

0x72fc,	// (0x00016959) scroll_pane_cp51_ParamLimits

0x7507,	// (0x00016b64) form2_midp_wait_pane_g1

0x7510,	// (0x00016b6d) form2_midp_wait_pane_g2

0x7519,	// (0x00016b76) form2_midp_wait_pane_g3

0x0002,

0xfaed,	// (0x0001f14a) form2_midp_wait_pane_g

0x268d,	// (0x00011cea) list_highlight_pane_cp21_ParamLimits

0x7565,	// (0x00016bc2) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7574,	// (0x00016bd1) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x62d3,	// (0x00015930) list_single_2graphic_im_pane_ParamLimits

0x62d3,	// (0x00015930) list_single_2graphic_im_pane

0xe3aa,	// (0x0001da07) list_single_2graphic_im_pane_g1_ParamLimits

0xe3aa,	// (0x0001da07) list_single_2graphic_im_pane_g1

0xe3bb,	// (0x0001da18) list_single_2graphic_im_pane_g2_ParamLimits

0xe3bb,	// (0x0001da18) list_single_2graphic_im_pane_g2

0xe3c7,	// (0x0001da24) list_single_2graphic_im_pane_g3_ParamLimits

0xe3c7,	// (0x0001da24) list_single_2graphic_im_pane_g3

0x0003,

0xfc4e,	// (0x0001f2ab) list_single_2graphic_im_pane_g_ParamLimits

0xfc4e,	// (0x0001f2ab) list_single_2graphic_im_pane_g

0xe3db,	// (0x0001da38) list_single_2graphic_im_pane_t1_ParamLimits

0xe3db,	// (0x0001da38) list_single_2graphic_im_pane_t1

0x7da1,	// (0x000173fe) list_single_graphic_2heading_pane_fp_ParamLimits

0x7da1,	// (0x000173fe) list_single_graphic_2heading_pane_fp

0x7de5,	// (0x00017442) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7de5,	// (0x00017442) list_single_graphic_2heading_pane_fp_g1

0x7db6,	// (0x00017413) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7db6,	// (0x00017413) list_single_graphic_2heading_pane_fp_g2

0x3100,	// (0x0001275d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3100,	// (0x0001275d) list_single_graphic_2heading_pane_fp_g3

0x34dd,	// (0x00012b3a) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x34dd,	// (0x00012b3a) list_single_graphic_2heading_pane_fp_g4

0x7dc2,	// (0x0001741f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7dc2,	// (0x0001741f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb75,	// (0x0001f1d2) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb75,	// (0x0001f1d2) list_single_graphic_2heading_pane_fp_g

0x8582,	// (0x00017bdf) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x8582,	// (0x00017bdf) list_single_graphic_2heading_pane_fp_t1

0x7e1d,	// (0x0001747a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7e1d,	// (0x0001747a) list_single_graphic_2heading_pane_fp_t2

0x8598,	// (0x00017bf5) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x8598,	// (0x00017bf5) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc57,	// (0x0001f2b4) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc57,	// (0x0001f2b4) list_single_graphic_2heading_pane_fp_t

0x77e6,	// (0x00016e43) fep_hwr_write_pane_g5_ParamLimits

0x77e6,	// (0x00016e43) fep_hwr_write_pane_g5

0x77f2,	// (0x00016e4f) fep_hwr_write_pane_g6_ParamLimits

0x77f2,	// (0x00016e4f) fep_hwr_write_pane_g6

0x8244,	// (0x000178a1) eswt_shell_pane_ParamLimits

0x4cfa,	// (0x00014357) bg_popup_window_pane_cp18_ParamLimits

0x5fed,	// (0x0001564a) heading_pane_cp70

0x836e,	// (0x000179cb) popup_eswt_tasktip_window_t1_ParamLimits

0xd582,	// (0x0001cbdf) aid_touch_tab_arrow_left

0xd598,	// (0x0001cbf5) aid_touch_tab_arrow_right

0xc8b3,	// (0x0001bf10) title_pane_g3_ParamLimits

0xc8b3,	// (0x0001bf10) title_pane_g3

0x3396,	// (0x000129f3) set_value_pane_g1

0xc16b,	// (0x0001b7c8) popup_toolbar_trans_pane_ParamLimits

0x84c8,	// (0x00017b25) aid_size_cell_tb_trans_pane_ParamLimits

0x34b7,	// (0x00012b14) bg_tb_trans_pane_ParamLimits

0x84da,	// (0x00017b37) grid_tb_trans_pane_ParamLimits

0x2930,	// (0x00011f8d) cont_note_pane_ParamLimits

0x2930,	// (0x00011f8d) cont_note_pane

0x2cad,	// (0x0001230a) cont_snote2_single_text_pane_ParamLimits

0x2cad,	// (0x0001230a) cont_snote2_single_text_pane

0x2cad,	// (0x0001230a) cont_snote2_single_graphic_pane_ParamLimits

0x2cad,	// (0x0001230a) cont_snote2_single_graphic_pane

0x534a,	// (0x000149a7) cont_note_wait_pane_ParamLimits

0x534a,	// (0x000149a7) cont_note_wait_pane

0x534a,	// (0x000149a7) cont_note_image_pane_ParamLimits

0x534a,	// (0x000149a7) cont_note_image_pane

0x85ae,	// (0x00017c0b) popup_note2_window_g1_ParamLimits

0x85ae,	// (0x00017c0b) popup_note2_window_g1

0x85df,	// (0x00017c3c) popup_note2_window_t1_ParamLimits

0x85df,	// (0x00017c3c) popup_note2_window_t1

0x8624,	// (0x00017c81) popup_note2_window_t2_ParamLimits

0x8624,	// (0x00017c81) popup_note2_window_t2

0x8669,	// (0x00017cc6) popup_note2_window_t3_ParamLimits

0x8669,	// (0x00017cc6) popup_note2_window_t3

0x86ae,	// (0x00017d0b) popup_note2_window_t4_ParamLimits

0x86ae,	// (0x00017d0b) popup_note2_window_t4

0x29b4,	// (0x00012011) popup_note2_window_t5_ParamLimits

0x29b4,	// (0x00012011) popup_note2_window_t5

0x0004,

0xfc63,	// (0x0001f2c0) popup_note2_window_t_ParamLimits

0xfc63,	// (0x0001f2c0) popup_note2_window_t

0x86dd,	// (0x00017d3a) popup_note2_image_window_g1_ParamLimits

0x86dd,	// (0x00017d3a) popup_note2_image_window_g1

0x86e9,	// (0x00017d46) popup_note2_image_window_g2_ParamLimits

0x86e9,	// (0x00017d46) popup_note2_image_window_g2

0x0001,

0xfc6e,	// (0x0001f2cb) popup_note2_image_window_g_ParamLimits

0xfc6e,	// (0x0001f2cb) popup_note2_image_window_g

0x86fb,	// (0x00017d58) popup_note2_image_window_t1_ParamLimits

0x86fb,	// (0x00017d58) popup_note2_image_window_t1

0x8713,	// (0x00017d70) popup_note2_image_window_t2_ParamLimits

0x8713,	// (0x00017d70) popup_note2_image_window_t2

0x872b,	// (0x00017d88) popup_note2_image_window_t3_ParamLimits

0x872b,	// (0x00017d88) popup_note2_image_window_t3

0x0002,

0xfc73,	// (0x0001f2d0) popup_note2_image_window_t_ParamLimits

0xfc73,	// (0x0001f2d0) popup_note2_image_window_t

0x5358,	// (0x000149b5) popup_note2_wait_window_g1_ParamLimits

0x5358,	// (0x000149b5) popup_note2_wait_window_g1

0x8747,	// (0x00017da4) popup_note2_wait_window_g2_ParamLimits

0x8747,	// (0x00017da4) popup_note2_wait_window_g2

0x5370,	// (0x000149cd) popup_note2_wait_window_g3_ParamLimits

0x5370,	// (0x000149cd) popup_note2_wait_window_g3

0x0002,

0xfc7a,	// (0x0001f2d7) popup_note2_wait_window_g_ParamLimits

0xfc7a,	// (0x0001f2d7) popup_note2_wait_window_g

0x8753,	// (0x00017db0) popup_note2_wait_window_t1_ParamLimits

0x8753,	// (0x00017db0) popup_note2_wait_window_t1

0x8771,	// (0x00017dce) popup_note2_wait_window_t2_ParamLimits

0x8771,	// (0x00017dce) popup_note2_wait_window_t2

0x878f,	// (0x00017dec) popup_note2_wait_window_t3_ParamLimits

0x878f,	// (0x00017dec) popup_note2_wait_window_t3

0x87a1,	// (0x00017dfe) popup_note2_wait_window_t4_ParamLimits

0x87a1,	// (0x00017dfe) popup_note2_wait_window_t4

0x0003,

0xfc81,	// (0x0001f2de) popup_note2_wait_window_t_ParamLimits

0xfc81,	// (0x0001f2de) popup_note2_wait_window_t

0x87b3,	// (0x00017e10) wait_bar2_pane_ParamLimits

0x87b3,	// (0x00017e10) wait_bar2_pane

0x87cb,	// (0x00017e28) popup_snote2_single_text_window_g1_ParamLimits

0x87cb,	// (0x00017e28) popup_snote2_single_text_window_g1

0x87f3,	// (0x00017e50) popup_snote2_single_text_window_t1_ParamLimits

0x87f3,	// (0x00017e50) popup_snote2_single_text_window_t1

0x883f,	// (0x00017e9c) popup_snote2_single_text_window_t2_ParamLimits

0x883f,	// (0x00017e9c) popup_snote2_single_text_window_t2

0x888b,	// (0x00017ee8) popup_snote2_single_text_window_t3_ParamLimits

0x888b,	// (0x00017ee8) popup_snote2_single_text_window_t3

0x88cc,	// (0x00017f29) popup_snote2_single_text_window_t4_ParamLimits

0x88cc,	// (0x00017f29) popup_snote2_single_text_window_t4

0x8902,	// (0x00017f5f) popup_snote2_single_text_window_t5_ParamLimits

0x8902,	// (0x00017f5f) popup_snote2_single_text_window_t5

0x0004,

0xfc8a,	// (0x0001f2e7) popup_snote2_single_text_window_t_ParamLimits

0xfc8a,	// (0x0001f2e7) popup_snote2_single_text_window_t

0x892d,	// (0x00017f8a) popup_snote2_single_graphic_window_g1_ParamLimits

0x892d,	// (0x00017f8a) popup_snote2_single_graphic_window_g1

0x8955,	// (0x00017fb2) popup_snote2_single_graphic_window_g2_ParamLimits

0x8955,	// (0x00017fb2) popup_snote2_single_graphic_window_g2

0x0001,

0xfc95,	// (0x0001f2f2) popup_snote2_single_graphic_window_g_ParamLimits

0xfc95,	// (0x0001f2f2) popup_snote2_single_graphic_window_g

0x897d,	// (0x00017fda) popup_snote2_single_graphic_window_t1_ParamLimits

0x897d,	// (0x00017fda) popup_snote2_single_graphic_window_t1

0x89c9,	// (0x00018026) popup_snote2_single_graphic_window_t2_ParamLimits

0x89c9,	// (0x00018026) popup_snote2_single_graphic_window_t2

0x888b,	// (0x00017ee8) popup_snote2_single_graphic_window_t3_ParamLimits

0x888b,	// (0x00017ee8) popup_snote2_single_graphic_window_t3

0x88cc,	// (0x00017f29) popup_snote2_single_graphic_window_t4_ParamLimits

0x88cc,	// (0x00017f29) popup_snote2_single_graphic_window_t4

0x8902,	// (0x00017f5f) popup_snote2_single_graphic_window_t5_ParamLimits

0x8902,	// (0x00017f5f) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9a,	// (0x0001f2f7) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9a,	// (0x0001f2f7) popup_snote2_single_graphic_window_t

0x71bd,	// (0x0001681a) clock_nsta_pane_cp2_t1

0x71bd,	// (0x0001681a) clock_nsta_pane_cp2_t2

0x0001,

0xfaae,	// (0x0001f10b) clock_nsta_pane_cp2_t

0x34d1,	// (0x00012b2e) form_field_data_wide_pane_g1_ParamLimits

0x3100,	// (0x0001275d) form_field_data_wide_pane_g2_ParamLimits

0x3100,	// (0x0001275d) form_field_data_wide_pane_g2

0x34dd,	// (0x00012b3a) form_field_data_wide_pane_g3_ParamLimits

0x34dd,	// (0x00012b3a) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001ecd3) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001ecd3) form_field_data_wide_pane_g

0xded6,	// (0x0001d533) grid_touch_3_pane_ParamLimits

0xded6,	// (0x0001d533) grid_touch_3_pane

0xe40c,	// (0x0001da69) cell_touch_3_pane_ParamLimits

0xe40c,	// (0x0001da69) cell_touch_3_pane

0x775a,	// (0x00016db7) cell_touch_3_pane_g1

0x775a,	// (0x00016db7) cell_touch_3_pane_g2

0x0001,

0xfb33,	// (0x0001f190) cell_touch_3_pane_g

0x2a0c,	// (0x00012069) cont_query_data_pane

0x2a14,	// (0x00012071) cont_query_data_pane_cp1

0x8a43,	// (0x000180a0) button_value_adjust_pane_cp7

0x8a4b,	// (0x000180a8) query_popup_pane_cp3

0x3da0,	// (0x000133fd) bg_popup_sub_pane_cp22_ParamLimits

0x06f7,	// (0x0000fd54) navi_navi_volume_pane_cp2

0x0712,	// (0x0000fd6f) popup_side_volume_key_window_g2

0x0721,	// (0x0000fd7e) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001ed69) popup_side_volume_key_window_g

0x073e,	// (0x0000fd9b) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001ed70) popup_side_volume_key_window_t

0x40e6,	// (0x00013743) popup_side_volume_key_window_ParamLimits

0xcd01,	// (0x0001c35e) list_double_graphic_pane_g4_ParamLimits

0xcd01,	// (0x0001c35e) list_double_graphic_pane_g4

0xdd15,	// (0x0001d372) list_single_2heading_msg_pane_ParamLimits

0xdd15,	// (0x0001d372) list_single_2heading_msg_pane

0xe454,	// (0x0001dab1) list_single_2heading_msg_pane_g1_ParamLimits

0xe454,	// (0x0001dab1) list_single_2heading_msg_pane_g1

0xe460,	// (0x0001dabd) list_single_2heading_msg_pane_g2_ParamLimits

0xe460,	// (0x0001dabd) list_single_2heading_msg_pane_g2

0xe473,	// (0x0001dad0) list_single_2heading_msg_pane_g3_ParamLimits

0xe473,	// (0x0001dad0) list_single_2heading_msg_pane_g3

0xe47f,	// (0x0001dadc) list_single_2heading_msg_pane_g4_ParamLimits

0xe47f,	// (0x0001dadc) list_single_2heading_msg_pane_g4

0x0003,

0xfca5,	// (0x0001f302) list_single_2heading_msg_pane_g_ParamLimits

0xfca5,	// (0x0001f302) list_single_2heading_msg_pane_g

0xe497,	// (0x0001daf4) list_single_2heading_msg_pane_t1_ParamLimits

0xe497,	// (0x0001daf4) list_single_2heading_msg_pane_t1

0xe4bf,	// (0x0001db1c) list_single_2heading_msg_pane_t2_ParamLimits

0xe4bf,	// (0x0001db1c) list_single_2heading_msg_pane_t2

0xe52a,	// (0x0001db87) list_single_2heading_msg_pane_t3_ParamLimits

0xe52a,	// (0x0001db87) list_single_2heading_msg_pane_t3

0x8b2e,	// (0x0001818b) list_single_2heading_msg_pane_t4_ParamLimits

0x8b2e,	// (0x0001818b) list_single_2heading_msg_pane_t4

0x0003,

0xfcae,	// (0x0001f30b) list_single_2heading_msg_pane_t_ParamLimits

0xfcae,	// (0x0001f30b) list_single_2heading_msg_pane_t

0x25e1,	// (0x00011c3e) title_pane_g4_ParamLimits

0x25e1,	// (0x00011c3e) title_pane_g4

0x0506,	// (0x0000fb63) title_pane_stacon_g3_ParamLimits

0x0506,	// (0x0000fb63) title_pane_stacon_g3

0x8545,	// (0x00017ba2) list_single_2graphic_im_pane_g4_ParamLimits

0x8545,	// (0x00017ba2) list_single_2graphic_im_pane_g4

0x5db5,	// (0x00015412) popup_side_volume_key_window_cp

0x66b6,	// (0x00015d13) main_idle_act2_pane_t1

0x1117,	// (0x00010774) toolbar_button_pane_g10

0xcbbe,	// (0x0001c21b) popup_toolbar_window_cp1

0x71ae,	// (0x0001680b) clock_nsta_pane_cp_t1

0x71ae,	// (0x0001680b) clock_nsta_pane_cp_t2

0x0001,

0xfaa9,	// (0x0001f106) clock_nsta_pane_cp_t

0x06f7,	// (0x0000fd54) navi_navi_volume_pane_cp2_ParamLimits

0x0706,	// (0x0000fd63) popup_side_volume_key_window_g1_ParamLimits

0x0712,	// (0x0000fd6f) popup_side_volume_key_window_g2_ParamLimits

0x0721,	// (0x0000fd7e) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001ed69) popup_side_volume_key_window_g_ParamLimits

0x157f,	// (0x00010bdc) fep_hwr_aid_pane

0x1626,	// (0x00010c83) bg_fep_hwr_top_pane_g4_ParamLimits

0x77b6,	// (0x00016e13) fep_hwr_top_pane_g1_ParamLimits

0x77c8,	// (0x00016e25) fep_hwr_top_pane_g2_ParamLimits

0x1646,	// (0x00010ca3) fep_hwr_top_pane_g3_ParamLimits

0xfafe,	// (0x0001f15b) fep_hwr_top_pane_g_ParamLimits

0x165b,	// (0x00010cb8) fep_hwr_top_text_pane_ParamLimits

0x5b78,	// (0x000151d5) aid_touch_tab_arrow_arrow_2

0x5b81,	// (0x000151de) aid_touch_tab_arrow_left_2

0x1593,	// (0x00010bf0) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x15ca,	// (0x00010c27) fep_hwr_prediction_pane

0x7928,	// (0x00016f85) fep_vkb_prediction_pane

0xe1bc,	// (0x0001d819) fep_vkb_side_pane_g3_ParamLimits

0xe1bc,	// (0x0001d819) fep_vkb_side_pane_g3

0x17d6,	// (0x00010e33) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1842,	// (0x00010e9f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x184f,	// (0x00010eac) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbad,	// (0x0001f20a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x197e,	// (0x00010fdb) fep_hwr_prediction_pane_g1

0x1988,	// (0x00010fe5) fep_hwr_prediction_pane_g2

0x1990,	// (0x00010fed) fep_hwr_prediction_pane_g3

0x1998,	// (0x00010ff5) fep_hwr_prediction_pane_g4

0x0003,

0xfcb7,	// (0x0001f314) fep_hwr_prediction_pane_g

0x8b53,	// (0x000181b0) fep_vkb_prediction_pane_g1

0x8b5d,	// (0x000181ba) fep_vkb_prediction_pane_g2

0x8b65,	// (0x000181c2) fep_vkb_prediction_pane_g3

0x8b6d,	// (0x000181ca) fep_vkb_prediction_pane_g4

0x0003,

0xfcc0,	// (0x0001f31d) fep_vkb_prediction_pane_g

0x13ff,	// (0x00010a5c) slider_set_pane_g3

0x1413,	// (0x00010a70) slider_set_pane_g4

0x142b,	// (0x00010a88) slider_set_pane_g5

0x13ff,	// (0x00010a5c) slider_set_pane_g6

0x1441,	// (0x00010a9e) slider_set_pane_g7

0x6232,	// (0x0001588f) slider_form_pane_g3

0x623b,	// (0x00015898) slider_form_pane_g4

0x6243,	// (0x000158a0) slider_form_pane_g5

0x6232,	// (0x0001588f) slider_form_pane_g6

0xdccb,	// (0x0001d328) slider_form_pane_g7

0x69b2,	// (0x0001600f) slider_set_pane_vc_g3

0x69bb,	// (0x00016018) slider_set_pane_vc_g4

0x69c4,	// (0x00016021) slider_set_pane_vc_g5

0x69b2,	// (0x0001600f) slider_set_pane_vc_g6

0x69cd,	// (0x0001602a) slider_set_pane_vc_g7

0x6e92,	// (0x000164ef) slider_form_pane_vc_g1

0x6e9b,	// (0x000164f8) slider_form_pane_vc_g2

0x6ea4,	// (0x00016501) slider_form_pane_vc_g3

0x6e92,	// (0x000164ef) slider_form_pane_vc_g4

0x6ead,	// (0x0001650a) slider_form_pane_vc_g5

0x0004,

0xfa7b,	// (0x0001f0d8) slider_form_pane_vc_g

0x01cd,	// (0x0000f82a) main_idle_act3_pane

0x8b75,	// (0x000181d2) ai3_links_pane

0xe598,	// (0x0001dbf5) popup_ai3_data_window_ParamLimits

0xe598,	// (0x0001dbf5) popup_ai3_data_window

0x2599,	// (0x00011bf6) grid_ai3_links_pane

0xe5b2,	// (0x0001dc0f) cell_ai3_links_pane_ParamLimits

0xe5b2,	// (0x0001dc0f) cell_ai3_links_pane

0x8bb0,	// (0x0001820d) bg_popup_sub_pane_cp11

0x8bbd,	// (0x0001821a) cell_ai3_links_pane_g1

0x2599,	// (0x00011bf6) bg_popup_sub_pane_cp12

0x8be2,	// (0x0001823f) heading_ai3_data_pane

0x8bea,	// (0x00018247) list_ai3_gene_pane

0x8bf6,	// (0x00018253) popup_ai3_data_window_g1

0x8bfe,	// (0x0001825b) heading_ai3_data_pane_g1

0x8c06,	// (0x00018263) heading_ai3_data_pane_t1

0x8c14,	// (0x00018271) list_double_ai3_gene_pane_ParamLimits

0x8c14,	// (0x00018271) list_double_ai3_gene_pane

0x8c21,	// (0x0001827e) list_single_ai3_gene_pane_ParamLimits

0x8c21,	// (0x0001827e) list_single_ai3_gene_pane

0x771f,	// (0x00016d7c) list_highlight_pane_cp7_ParamLimits

0x771f,	// (0x00016d7c) list_highlight_pane_cp7

0x8c2e,	// (0x0001828b) list_single_a13_gene_pane_t1_ParamLimits

0x8c2e,	// (0x0001828b) list_single_a13_gene_pane_t1

0x8c45,	// (0x000182a2) list_single_ai3_gene_pane_g1

0x8c4e,	// (0x000182ab) list_single_ai3_gene_pane_g2

0x0001,

0xfcc9,	// (0x0001f326) list_single_ai3_gene_pane_g

0x8c56,	// (0x000182b3) list_double_ai3_gene_pane_g1_ParamLimits

0x8c56,	// (0x000182b3) list_double_ai3_gene_pane_g1

0x8c62,	// (0x000182bf) list_double_ai3_gene_pane_t1_ParamLimits

0x8c62,	// (0x000182bf) list_double_ai3_gene_pane_t1

0x8c7e,	// (0x000182db) list_double_ai3_gene_pane_t2_ParamLimits

0x8c7e,	// (0x000182db) list_double_ai3_gene_pane_t2

0x8c94,	// (0x000182f1) list_double_ai3_gene_pane_t3_ParamLimits

0x8c94,	// (0x000182f1) list_double_ai3_gene_pane_t3

0x0002,

0xfcce,	// (0x0001f32b) list_double_ai3_gene_pane_t_ParamLimits

0xfcce,	// (0x0001f32b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8a5c,	// (0x000180b9) aid_size_min_col_2

0xe43e,	// (0x0001da9b) aid_size_min_msg_ParamLimits

0xe43e,	// (0x0001da9b) aid_size_min_msg

0xe1d0,	// (0x0001d82d) fep_vkb_top_text_pane_g2_ParamLimits

0xe1d0,	// (0x0001d82d) fep_vkb_top_text_pane_g2

0x0001,

0xfb2e,	// (0x0001f18b) fep_vkb_top_text_pane_g_ParamLimits

0xfb2e,	// (0x0001f18b) fep_vkb_top_text_pane_g

0x01cd,	// (0x0000f82a) main_hc_apps_shell_pane

0x8cb1,	// (0x0001830e) grid_hc_apps_pane_ParamLimits

0x8cb1,	// (0x0001830e) grid_hc_apps_pane

0x8cc0,	// (0x0001831d) list_hc_apps_pane

0x8cc8,	// (0x00018325) scroll_pane_cp37_ParamLimits

0x8cc8,	// (0x00018325) scroll_pane_cp37

0xe5cc,	// (0x0001dc29) cell_hc_apps_pane_ParamLimits

0xe5cc,	// (0x0001dc29) cell_hc_apps_pane

0xe68a,	// (0x0001dce7) cell_hc_apps_pane_g1_ParamLimits

0xe68a,	// (0x0001dce7) cell_hc_apps_pane_g1

0x8db3,	// (0x00018410) cell_hc_apps_pane_g2_ParamLimits

0x8db3,	// (0x00018410) cell_hc_apps_pane_g2

0x8dcf,	// (0x0001842c) cell_hc_apps_pane_g3_ParamLimits

0x8dcf,	// (0x0001842c) cell_hc_apps_pane_g3

0x0002,

0xfcd5,	// (0x0001f332) cell_hc_apps_pane_g_ParamLimits

0xfcd5,	// (0x0001f332) cell_hc_apps_pane_g

0xe6b7,	// (0x0001dd14) cell_hc_apps_pane_t1_ParamLimits

0xe6b7,	// (0x0001dd14) cell_hc_apps_pane_t1

0x2930,	// (0x00011f8d) grid_highlight_pane_cp10_ParamLimits

0x2930,	// (0x00011f8d) grid_highlight_pane_cp10

0xe6f5,	// (0x0001dd52) list_single_hc_apps_pane_ParamLimits

0xe6f5,	// (0x0001dd52) list_single_hc_apps_pane

0xe722,	// (0x0001dd7f) list_single_hc_apps_pane_g1

0xe73b,	// (0x0001dd98) list_single_hc_apps_pane_g2

0x0001,

0xfcdc,	// (0x0001f339) list_single_hc_apps_pane_g

0xe754,	// (0x0001ddb1) list_single_hc_apps_pane_g2_copy1

0x8edb,	// (0x00018538) list_single_hc_apps_pane_t1

0x268d,	// (0x00011cea) bg_set_opt_pane_cp_ParamLimits

0x042e,	// (0x0000fa8b) setting_slider_pane_t1_ParamLimits

0x0447,	// (0x0000faa4) setting_slider_pane_t2_ParamLimits

0x0461,	// (0x0000fabe) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001ebbb) setting_slider_pane_t_ParamLimits

0x0479,	// (0x0000fad6) slider_set_pane_ParamLimits

0x09a0,	// (0x0000fffd) control_pane_g5_ParamLimits

0x09a0,	// (0x0000fffd) control_pane_g5

0x6081,	// (0x000156de) slider_set_pane_g1_ParamLimits

0x13f3,	// (0x00010a50) slider_set_pane_g2_ParamLimits

0x13ff,	// (0x00010a5c) slider_set_pane_g3_ParamLimits

0x1413,	// (0x00010a70) slider_set_pane_g4_ParamLimits

0x142b,	// (0x00010a88) slider_set_pane_g5_ParamLimits

0x13ff,	// (0x00010a5c) slider_set_pane_g6_ParamLimits

0x1441,	// (0x00010a9e) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x0001efb7) slider_set_pane_g_ParamLimits

0x41d2,	// (0x0001382f) navi_icon_text_pane_ParamLimits

0xd54b,	// (0x0001cba8) aid_fill_nsta_2_ParamLimits

0xd582,	// (0x0001cbdf) aid_touch_tab_arrow_left_ParamLimits

0xd598,	// (0x0001cbf5) aid_touch_tab_arrow_right_ParamLimits

0xd633,	// (0x0001cc90) clock_nsta_pane_ParamLimits

0x5b5a,	// (0x000151b7) navi_icon_pane_g1_ParamLimits

0x5b66,	// (0x000151c3) navi_text_pane_t1_ParamLimits

0x72ba,	// (0x00016917) navi_icon_text_pane_g1_ParamLimits

0x72c6,	// (0x00016923) navi_icon_text_pane_t1_ParamLimits

0xe722,	// (0x0001dd7f) list_single_hc_apps_pane_g1_ParamLimits

0xe73b,	// (0x0001dd98) list_single_hc_apps_pane_g2_ParamLimits

0xfcdc,	// (0x0001f339) list_single_hc_apps_pane_g_ParamLimits

0xe754,	// (0x0001ddb1) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8edb,	// (0x00018538) list_single_hc_apps_pane_t1_ParamLimits

0xb8c8,	// (0x0001af25) popup_toolbar2_fixed_window_ParamLimits

0xb8c8,	// (0x0001af25) popup_toolbar2_fixed_window

0xc161,	// (0x0001b7be) popup_toolbar2_float_window

0x2599,	// (0x00011bf6) bg_popup_sub_pane_cp27

0x8f09,	// (0x00018566) grid_toolbar2_float_pane

0x2599,	// (0x00011bf6) bg_popup_sub_pane_cp26

0x8f09,	// (0x00018566) grid_toolbar2_fixed_pane

0xe770,	// (0x0001ddcd) cell_toolbar2_fixed_pane_ParamLimits

0xe770,	// (0x0001ddcd) cell_toolbar2_fixed_pane

0xe78a,	// (0x0001dde7) cell_toolbar2_fixed_pane_g1

0x8f2a,	// (0x00018587) toolbar2_fixed_button_pane

0x4bd8,	// (0x00014235) toolbar2_fixed_button_pane_g1

0x4be8,	// (0x00014245) toolbar2_fixed_button_pane_g2

0x4be0,	// (0x0001423d) toolbar2_fixed_button_pane_g3

0x4bf8,	// (0x00014255) toolbar2_fixed_button_pane_g4

0x4bf0,	// (0x0001424d) toolbar2_fixed_button_pane_g5

0x4c00,	// (0x0001425d) toolbar2_fixed_button_pane_g6

0x4c08,	// (0x00014265) toolbar2_fixed_button_pane_g7

0x4c18,	// (0x00014275) toolbar2_fixed_button_pane_g8

0x4c10,	// (0x0001426d) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x0001eeb9) toolbar2_fixed_button_pane_g

0x8f32,	// (0x0001858f) cell_toolbar2_float_pane_ParamLimits

0x8f32,	// (0x0001858f) cell_toolbar2_float_pane

0x8f43,	// (0x000185a0) cell_toolbar2_float_pane_g1

0x8f2a,	// (0x00018587) toolbar2_fixed_button_pane_cp

0xe0aa,	// (0x0001d707) fep_vkb_accented_list_pane_ParamLimits

0xe0aa,	// (0x0001d707) fep_vkb_accented_list_pane

0x17b6,	// (0x00010e13) bg_popup_fep_shadow_pane_g9

0x4352,	// (0x000139af) bg_popup_fep_shadow_pane_cp3

0x3782,	// (0x00012ddf) list_accented_list_pane

0x8f4c,	// (0x000185a9) list_single_accented_list_pane_ParamLimits

0x8f4c,	// (0x000185a9) list_single_accented_list_pane

0x4352,	// (0x000139af) list_highlight_pane_cp10

0x8f5d,	// (0x000185ba) list_single_accented_list_pane_t1

0xc08b,	// (0x0001b6e8) popup_slider_window_ParamLimits

0xc08b,	// (0x0001b6e8) popup_slider_window

0x8a53,	// (0x000180b0) aid_indentation_list_msg

0xe881,	// (0x0001dede) bg_popup_window_pane_cp19

0x9089,	// (0x000186e6) popup_slider_window_g1

0x90a5,	// (0x00018702) popup_slider_window_g2

0x90c1,	// (0x0001871e) popup_slider_window_g3

0x0005,

0xfce1,	// (0x0001f33e) popup_slider_window_g

0x9127,	// (0x00018784) popup_slider_window_t1

0x919b,	// (0x000187f8) small_volume_slider_vertical_pane

0x775a,	// (0x00016db7) small_volume_slider_vertical_pane_g1

0x775a,	// (0x00016db7) small_volume_slider_vertical_pane_g2

0x91b7,	// (0x00018814) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf3,	// (0x0001f350) small_volume_slider_vertical_pane_g

0xb836,	// (0x0001ae93) area_side_right_pane_ParamLimits

0xb836,	// (0x0001ae93) area_side_right_pane

0xc297,	// (0x0001b8f4) aid_size_side_button_ParamLimits

0xc297,	// (0x0001b8f4) aid_size_side_button

0xc2b0,	// (0x0001b90d) grid_sctrl_middle_pane_ParamLimits

0xc2b0,	// (0x0001b90d) grid_sctrl_middle_pane

0x19d3,	// (0x00011030) sctrl_sk_bottom_pane

0x19e4,	// (0x00011041) sctrl_sk_top_pane

0x19f6,	// (0x00011053) aid_touch_sctrl_top

0x1a03,	// (0x00011060) bg_sctrl_sk_pane_ParamLimits

0x1a03,	// (0x00011060) bg_sctrl_sk_pane

0x1a11,	// (0x0001106e) sctrl_sk_top_pane_g1

0x1a1e,	// (0x0001107b) sctrl_sk_top_pane_t1

0x19f6,	// (0x00011053) aid_touch_sctrl_bottom

0x1a03,	// (0x00011060) bg_sctrl_sk_pane_cp_ParamLimits

0x1a03,	// (0x00011060) bg_sctrl_sk_pane_cp

0x1a39,	// (0x00011096) sctrl_sk_bottom_pane_g1

0x1a1e,	// (0x0001107b) sctrl_sk_bottom_pane_t1

0xc2ca,	// (0x0001b927) cell_sctrl_middle_pane_ParamLimits

0xc2ca,	// (0x0001b927) cell_sctrl_middle_pane

0xc2db,	// (0x0001b938) aid_touch_sctrl_middle_ParamLimits

0xc2db,	// (0x0001b938) aid_touch_sctrl_middle

0xc2e8,	// (0x0001b945) bg_sctrl_middle_pane_ParamLimits

0xc2e8,	// (0x0001b945) bg_sctrl_middle_pane

0x20a6,	// (0x00011703) cell_sctrl_middle_pane_g1_ParamLimits

0x20a6,	// (0x00011703) cell_sctrl_middle_pane_g1

0xc2f6,	// (0x0001b953) cell_sctrl_middle_pane_g2_ParamLimits

0xc2f6,	// (0x0001b953) cell_sctrl_middle_pane_g2

0x0001,

0xfcff,	// (0x0001f35c) cell_sctrl_middle_pane_g_ParamLimits

0xfcff,	// (0x0001f35c) cell_sctrl_middle_pane_g

0x4bd8,	// (0x00014235) bg_sctrl_middle_pane_g1

0x4be0,	// (0x0001423d) bg_sctrl_middle_pane_g2

0x4be8,	// (0x00014245) bg_sctrl_middle_pane_g3

0x4bf0,	// (0x0001424d) bg_sctrl_middle_pane_g4

0x4bf8,	// (0x00014255) bg_sctrl_middle_pane_g5

0x4c00,	// (0x0001425d) bg_sctrl_middle_pane_g6

0x4c08,	// (0x00014265) bg_sctrl_middle_pane_g7

0x4c10,	// (0x0001426d) bg_sctrl_middle_pane_g8

0x0007,

0xfd04,	// (0x0001f361) bg_sctrl_middle_pane_g

0x4c18,	// (0x00014275) bg_sctrl_middle_pane_g8_copy1

0x4bd8,	// (0x00014235) bg_sctrl_sk_pane_g1

0x4be8,	// (0x00014245) bg_sctrl_sk_pane_g2

0x4be0,	// (0x0001423d) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x0001eeb9) bg_sctrl_sk_pane_g

0x2e6b,	// (0x000124c8) aid_size_touch_scroll_bar

0x4bf8,	// (0x00014255) bg_sctrl_sk_pane_g4

0x4bf0,	// (0x0001424d) bg_sctrl_sk_pane_g5

0x4c00,	// (0x0001425d) bg_sctrl_sk_pane_g6

0x4c08,	// (0x00014265) bg_sctrl_sk_pane_g7

0x4c18,	// (0x00014275) bg_sctrl_sk_pane_g8

0x4c10,	// (0x0001426d) bg_sctrl_sk_pane_g9

0x0b68,	// (0x000101c5) popup_fep_china_hwr2_fs_candidate_window

0xbba5,	// (0x0001b202) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbba5,	// (0x0001b202) popup_fep_china_hwr2_fs_control_window

0x17d6,	// (0x00010e33) sctrl_sk_top_pane_g2

0x0001,

0xfcfa,	// (0x0001f357) sctrl_sk_top_pane_g

0xe939,	// (0x0001df96) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe939,	// (0x0001df96) aid_fep_china_hwr2_fs_cell

0xe94d,	// (0x0001dfaa) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe94d,	// (0x0001dfaa) bg_popup_fep_shadow_pane_cp4

0xe964,	// (0x0001dfc1) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe964,	// (0x0001dfc1) bg_popup_fep_shadow_pane_cp5

0xe976,	// (0x0001dfd3) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe976,	// (0x0001dfd3) popup_fep_china_hwr2_fs_control_bar_grid

0xe98a,	// (0x0001dfe7) popup_fep_china_hwr2_fs_control_funtion_grid

0x9213,	// (0x00018870) aid_fep_china_hwr2_fs_candi_cell

0x2599,	// (0x00011bf6) bg_popup_fep_shadow_pane_cp6

0x921d,	// (0x0001887a) popup_fep_china_hwr2_fs_candidate_grid

0xe992,	// (0x0001dfef) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe992,	// (0x0001dfef) cell_fep_china_hwr2_fs_funtion_grid

0x775a,	// (0x00016db7) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x923f,	// (0x0001889c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x923f,	// (0x0001889c) cell_fep_china_hwr2_fs_funtion_grid_g1

0x924d,	// (0x000188aa) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x924d,	// (0x000188aa) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd15,	// (0x0001f372) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd15,	// (0x0001f372) cell_fep_china_hwr2_fs_funtion_grid_g

0xe9aa,	// (0x0001e007) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe9aa,	// (0x0001e007) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe9bf,	// (0x0001e01c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe9bf,	// (0x0001e01c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1a,	// (0x0001f377) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1a,	// (0x0001f377) cell_fep_china_hwr2_fs_funtion_grid_t

0x9294,	// (0x000188f1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x929c,	// (0x000188f9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x92a4,	// (0x00018901) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1f,	// (0x0001f37c) popup_fep_china_hwr2_fs_control_bar_grid_g

0x92ac,	// (0x00018909) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x92ac,	// (0x00018909) cell_fep_china_hwr2_fs_candidate_grid

0x92c5,	// (0x00018922) popup_fep_china_hwr2_fs_candidate_grid_g20

0x92cd,	// (0x0001892a) popup_fep_china_hwr2_fs_candidate_grid_g21

0x775a,	// (0x00016db7) cell_fep_china_hwr2_fs_candidate_grid_g1

0x775a,	// (0x00016db7) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb33,	// (0x0001f190) cell_fep_china_hwr2_fs_candidate_grid_g

0x92d5,	// (0x00018932) cell_fep_china_hwr2_fs_candidate_grid_t1

0x47a0,	// (0x00013dfd) clock_nsta_pane_cp_24_ParamLimits

0x47a0,	// (0x00013dfd) clock_nsta_pane_cp_24

0x481e,	// (0x00013e7b) indicator_nsta_pane_cp_24_ParamLimits

0x481e,	// (0x00013e7b) indicator_nsta_pane_cp_24

0x59d6,	// (0x00015033) heading_pane_g1

0x0001,

0xf8c1,	// (0x0001ef1e) heading_pane_g

0x64ff,	// (0x00015b5c) grid_sct_catagory_button_pane

0x652f,	// (0x00015b8c) scroll_pane_cp5_ParamLimits

0x7308,	// (0x00016965) button_value_adjust_pane_cp5_ParamLimits

0x7308,	// (0x00016965) button_value_adjust_pane_cp5

0x7404,	// (0x00016a61) form2_midp_time_pane_ParamLimits

0x92e3,	// (0x00018940) cell_sct_catagory_button_pane_ParamLimits

0x92e3,	// (0x00018940) cell_sct_catagory_button_pane

0x771f,	// (0x00016d7c) bg_button_pane_cp01_ParamLimits

0x771f,	// (0x00016d7c) bg_button_pane_cp01

0x775a,	// (0x00016db7) cell_sct_catagory_button_pane_g1

0xc104,	// (0x0001b761) popup_tb_extension_window

0xe9db,	// (0x0001e038) aid_size_cell_ext_ParamLimits

0xe9db,	// (0x0001e038) aid_size_cell_ext

0x2cad,	// (0x0001230a) bg_tb_trans_pane_cp1_ParamLimits

0x2cad,	// (0x0001230a) bg_tb_trans_pane_cp1

0xea01,	// (0x0001e05e) grid_tb_ext_pane_ParamLimits

0xea01,	// (0x0001e05e) grid_tb_ext_pane

0xea3c,	// (0x0001e099) cell_tb_ext_pane_ParamLimits

0xea3c,	// (0x0001e099) cell_tb_ext_pane

0xea64,	// (0x0001e0c1) cell_tb_ext_pane_g1_ParamLimits

0xea64,	// (0x0001e0c1) cell_tb_ext_pane_g1

0x9377,	// (0x000189d4) cell_tb_ext_pane_t1

0x2930,	// (0x00011f8d) list_highlight_pane_cp11_ParamLimits

0x2930,	// (0x00011f8d) list_highlight_pane_cp11

0xb8dd,	// (0x0001af3a) popup_uni_indicator_window_ParamLimits

0xb8dd,	// (0x0001af3a) popup_uni_indicator_window

0x34b7,	// (0x00012b14) bg_popup_sub_pane_cp14

0x9392,	// (0x000189ef) list_uniindi_pane

0x939e,	// (0x000189fb) uniindi_top_pane

0x2930,	// (0x00011f8d) bg_uniindi_top_pane

0x93bd,	// (0x00018a1a) uniindi_top_pane_g1

0x93d3,	// (0x00018a30) uniindi_top_pane_g2

0x0003,

0xfd26,	// (0x0001f383) uniindi_top_pane_g

0x93fd,	// (0x00018a5a) uniindi_top_pane_t1

0x9427,	// (0x00018a84) list_single_uniindi_pane_ParamLimits

0x9427,	// (0x00018a84) list_single_uniindi_pane

0x775a,	// (0x00016db7) bg_uniindi_top_pane_g1

0x943a,	// (0x00018a97) list_single_uniindi_pane_g1

0x944d,	// (0x00018aaa) list_single_uniindi_pane_t1

0x01cd,	// (0x0000f82a) control_bg_pane

0x9472,	// (0x00018acf) bg_sctrl_sk_pane_cp1

0x947b,	// (0x00018ad8) bg_sctrl_sk_pane_cp2

0x9484,	// (0x00018ae1) control_bg_pane_g1

0x948d,	// (0x00018aea) control_bg_pane_g2

0x0001,

0xfd2f,	// (0x0001f38c) control_bg_pane_g

0x7162,	// (0x000167bf) cell_indicator_nsta_pane_g1_ParamLimits

0xdf03,	// (0x0001d560) cell_indicator_nsta_pane_g2_ParamLimits

0xfa97,	// (0x0001f0f4) cell_indicator_nsta_pane_g_ParamLimits

0x748c,	// (0x00016ae9) form2_midp_time_pane_t1_ParamLimits

0x1571,	// (0x00010bce) main_idle_act4_pane_ParamLimits

0x1571,	// (0x00010bce) main_idle_act4_pane

0xc104,	// (0x0001b761) popup_tb_extension_window_ParamLimits

0xea23,	// (0x0001e080) tb_ext_find_pane_ParamLimits

0xea23,	// (0x0001e080) tb_ext_find_pane

0x9496,	// (0x00018af3) ai_gene_pane_1_cp1

0x4499,	// (0x00013af6) ai_gene_pane_2_cp1

0x949e,	// (0x00018afb) list_single_idle_plugin_calendar_pane

0x94a7,	// (0x00018b04) list_single_idle_plugin_notification_pane

0x94b0,	// (0x00018b0d) list_single_idle_plugin_player_pane

0xea81,	// (0x0001e0de) list_single_idle_plugin_shortcut_pane_ParamLimits

0xea81,	// (0x0001e0de) list_single_idle_plugin_shortcut_pane

0xeaa9,	// (0x0001e106) main_idle_act4_pane_t1

0xeabf,	// (0x0001e11c) main_idle_act4_pane_t2

0x0001,

0xfd34,	// (0x0001f391) main_idle_act4_pane_t

0xead5,	// (0x0001e132) middle_sk_idle_act4_pane_ParamLimits

0xead5,	// (0x0001e132) middle_sk_idle_act4_pane

0xeaf1,	// (0x0001e14e) popup_clock_digital_analogue_window_cp2

0xeb19,	// (0x0001e176) shortcut_wheel_idle_act4_pane_ParamLimits

0xeb19,	// (0x0001e176) shortcut_wheel_idle_act4_pane

0x775a,	// (0x00016db7) shortcut_wheel_idle_act4_pane_g1

0x775a,	// (0x00016db7) shortcut_wheel_idle_act4_pane_g2

0x775a,	// (0x00016db7) shortcut_wheel_idle_act4_pane_g3

0x775a,	// (0x00016db7) shortcut_wheel_idle_act4_pane_g4

0x775a,	// (0x00016db7) shortcut_wheel_idle_act4_pane_g5

0x9543,	// (0x00018ba0) shortcut_wheel_idle_act4_pane_g6

0x954b,	// (0x00018ba8) shortcut_wheel_idle_act4_pane_g7

0x9553,	// (0x00018bb0) shortcut_wheel_idle_act4_pane_g8

0x955b,	// (0x00018bb8) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd39,	// (0x0001f396) shortcut_wheel_idle_act4_pane_g

0xd4ff,	// (0x0001cb5c) middle_sk_idle_act4_pane_g1_ParamLimits

0xd4ff,	// (0x0001cb5c) middle_sk_idle_act4_pane_g1

0xeb96,	// (0x0001e1f3) middle_sk_idle_act4_pane_g2_ParamLimits

0xeb96,	// (0x0001e1f3) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5c,	// (0x0001f3b9) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5c,	// (0x0001f3b9) middle_sk_idle_act4_pane_g

0xebae,	// (0x0001e20b) middle_sk_idle_act4_pane_t1_ParamLimits

0xebae,	// (0x0001e20b) middle_sk_idle_act4_pane_t1

0xebdd,	// (0x0001e23a) grid_ai_shortcut_pane_ParamLimits

0xebdd,	// (0x0001e23a) grid_ai_shortcut_pane

0xebfa,	// (0x0001e257) list_highlight_pane_cp16_ParamLimits

0xebfa,	// (0x0001e257) list_highlight_pane_cp16

0xec07,	// (0x0001e264) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xec07,	// (0x0001e264) list_single_idle_plugin_shortcut_pane_g1

0xec13,	// (0x0001e270) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xec13,	// (0x0001e270) list_single_idle_plugin_shortcut_pane_g2

0xec2f,	// (0x0001e28c) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xec2f,	// (0x0001e28c) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd61,	// (0x0001f3be) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd61,	// (0x0001f3be) list_single_idle_plugin_shortcut_pane_g

0xec44,	// (0x0001e2a1) cell_ai_shortcut_pane_ParamLimits

0xec44,	// (0x0001e2a1) cell_ai_shortcut_pane

0xec5a,	// (0x0001e2b7) cell_ai_shortcut_pane_g1_ParamLimits

0xec5a,	// (0x0001e2b7) cell_ai_shortcut_pane_g1

0x9496,	// (0x00018af3) ai_gene_pane_1_cp2

0x968b,	// (0x00018ce8) ai_gene_pane_2_cp2

0x9693,	// (0x00018cf0) list_highlight_pane_cp15

0x969c,	// (0x00018cf9) list_single_idle_plugin_calendar_pane_g1

0x9693,	// (0x00018cf0) list_highlight_pane_cp17

0x96a4,	// (0x00018d01) list_single_idle_plugin_calendar_pane_g1_copy1

0x96ac,	// (0x00018d09) list_single_idle_plugin_player_pane_g1

0x6758,	// (0x00015db5) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd68,	// (0x0001f3c5) list_single_idle_plugin_player_pane_g

0x96b4,	// (0x00018d11) list_single_idle_plugin_player_pane_t1

0x96c2,	// (0x00018d1f) list_single_idle_plugin_player_pane_t2

0x96d0,	// (0x00018d2d) list_single_idle_plugin_player_pane_t3

0x96de,	// (0x00018d3b) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6d,	// (0x0001f3ca) list_single_idle_plugin_player_pane_t

0x96ec,	// (0x00018d49) wait_bar_pane_cp15

0x96f4,	// (0x00018d51) grid_ai_notification_pane

0x6758,	// (0x00015db5) list_single_idle_plugin_notification_pane_g1

0xec7c,	// (0x0001e2d9) cell_ai_notification_pane_ParamLimits

0xec7c,	// (0x0001e2d9) cell_ai_notification_pane

0x970a,	// (0x00018d67) cell_ai_notification_pane_g1

0x9712,	// (0x00018d6f) cell_ai_notification_pane_t1

0xec89,	// (0x0001e2e6) tb_ext_find_button_pane

0xec91,	// (0x0001e2ee) tb_ext_find_pane_g1

0xec99,	// (0x0001e2f6) tb_ext_find_pane_t1

0x3cb0,	// (0x0001330d) tb_ext_find_button_pane_g1

0x973e,	// (0x00018d9b) tb_ext_find_button_pane_g2

0x0001,

0xfd76,	// (0x0001f3d3) tb_ext_find_button_pane_g

0xeaa9,	// (0x0001e106) main_idle_act4_pane_t1_ParamLimits

0xeabf,	// (0x0001e11c) main_idle_act4_pane_t2_ParamLimits

0xfd34,	// (0x0001f391) main_idle_act4_pane_t_ParamLimits

0xeaf1,	// (0x0001e14e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xeb09,	// (0x0001e166) sat_plugin_idle_act4_pane_ParamLimits

0xeb09,	// (0x0001e166) sat_plugin_idle_act4_pane

0xeca7,	// (0x0001e304) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeca7,	// (0x0001e304) sat_plugin_idle_act4_pane_t1

0xecbf,	// (0x0001e31c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xecbf,	// (0x0001e31c) sat_plugin_idle_act4_pane_t2

0xecd7,	// (0x0001e334) sat_plugin_idle_act4_pane_t3_ParamLimits

0xecd7,	// (0x0001e334) sat_plugin_idle_act4_pane_t3

0xecef,	// (0x0001e34c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xecef,	// (0x0001e34c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7b,	// (0x0001f3d8) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7b,	// (0x0001f3d8) sat_plugin_idle_act4_pane_t

0x0292,	// (0x0000f8ef) popup_battery_window_ParamLimits

0x0292,	// (0x0000f8ef) popup_battery_window

0x2930,	// (0x00011f8d) bg_popup_sub_pane_cp25_ParamLimits

0x2930,	// (0x00011f8d) bg_popup_sub_pane_cp25

0x9793,	// (0x00018df0) popup_battery_window_g1_ParamLimits

0x9793,	// (0x00018df0) popup_battery_window_g1

0x979f,	// (0x00018dfc) popup_battery_window_t1_ParamLimits

0x979f,	// (0x00018dfc) popup_battery_window_t1

0x97b1,	// (0x00018e0e) popup_battery_window_t2_ParamLimits

0x97b1,	// (0x00018e0e) popup_battery_window_t2

0x0001,

0xfd84,	// (0x0001f3e1) popup_battery_window_t_ParamLimits

0xfd84,	// (0x0001f3e1) popup_battery_window_t

0xd386,	// (0x0001c9e3) midp_canvas_pane_ParamLimits

0xd3e3,	// (0x0001ca40) midp_keypad_pane_ParamLimits

0xd3e3,	// (0x0001ca40) midp_keypad_pane

0x467e,	// (0x00013cdb) main_midp_pane_ParamLimits

0x71cc,	// (0x00016829) signal_pane_g2_cp_ParamLimits

0xed07,	// (0x0001e364) aid_size_cell_midp_keypad_ParamLimits

0xed07,	// (0x0001e364) aid_size_cell_midp_keypad

0xed25,	// (0x0001e382) midp_keyp_game_grid_pane_ParamLimits

0xed25,	// (0x0001e382) midp_keyp_game_grid_pane

0xed4c,	// (0x0001e3a9) midp_keyp_rocker_pane_ParamLimits

0xed4c,	// (0x0001e3a9) midp_keyp_rocker_pane

0xed9d,	// (0x0001e3fa) midp_keyp_sk_left_pane_ParamLimits

0xed9d,	// (0x0001e3fa) midp_keyp_sk_left_pane

0xedf1,	// (0x0001e44e) midp_keyp_sk_right_pane_ParamLimits

0xedf1,	// (0x0001e44e) midp_keyp_sk_right_pane

0x2599,	// (0x00011bf6) bg_button_pane_cp03

0xee45,	// (0x0001e4a2) midp_keyp_sk_left_pane_g1

0x2599,	// (0x00011bf6) bg_button_pane_cp04

0xee45,	// (0x0001e4a2) midp_keyp_sk_right_pane_g1

0x775a,	// (0x00016db7) midp_keyp_rocker_pane_g1

0xee4e,	// (0x0001e4ab) keyp_game_cell_pane_ParamLimits

0xee4e,	// (0x0001e4ab) keyp_game_cell_pane

0x2599,	// (0x00011bf6) bg_button_pane_cp02

0xee72,	// (0x0001e4cf) keyp_game_cell_pane_g1

0xb878,	// (0x0001aed5) popup_fep_vkb2_window_ParamLimits

0xb878,	// (0x0001aed5) popup_fep_vkb2_window

0xc302,	// (0x0001b95f) aid_size_cell_vkb2_ParamLimits

0xc302,	// (0x0001b95f) aid_size_cell_vkb2

0xc338,	// (0x0001b995) popup_fep_vkb2_window_g1_ParamLimits

0xc338,	// (0x0001b995) popup_fep_vkb2_window_g1

0xc388,	// (0x0001b9e5) vkb2_area_bottom_pane_ParamLimits

0xc388,	// (0x0001b9e5) vkb2_area_bottom_pane

0xc3dc,	// (0x0001ba39) vkb2_area_keypad_pane_ParamLimits

0xc3dc,	// (0x0001ba39) vkb2_area_keypad_pane

0xc424,	// (0x0001ba81) vkb2_area_top_pane_ParamLimits

0xc424,	// (0x0001ba81) vkb2_area_top_pane

0xc4aa,	// (0x0001bb07) vkb2_top_entry_pane_ParamLimits

0xc4aa,	// (0x0001bb07) vkb2_top_entry_pane

0xc4d7,	// (0x0001bb34) vkb2_top_grid_left_pane_ParamLimits

0xc4d7,	// (0x0001bb34) vkb2_top_grid_left_pane

0xc4f7,	// (0x0001bb54) vkb2_top_grid_right_pane_ParamLimits

0xc4f7,	// (0x0001bb54) vkb2_top_grid_right_pane

0x1ca5,	// (0x00011302) vkb2_cell_keypad_pane_ParamLimits

0x1ca5,	// (0x00011302) vkb2_cell_keypad_pane

0xc53d,	// (0x0001bb9a) vkb2_area_bottom_grid_pane_ParamLimits

0xc53d,	// (0x0001bb9a) vkb2_area_bottom_grid_pane

0xc567,	// (0x0001bbc4) vkb2_area_bottom_pane_g1_ParamLimits

0xc567,	// (0x0001bbc4) vkb2_area_bottom_pane_g1

0xc58d,	// (0x0001bbea) vkb2_area_bottom_pane_g2_ParamLimits

0xc58d,	// (0x0001bbea) vkb2_area_bottom_pane_g2

0xc5be,	// (0x0001bc1b) vkb2_area_bottom_pane_g3_ParamLimits

0xc5be,	// (0x0001bc1b) vkb2_area_bottom_pane_g3

0x0002,

0xfd89,	// (0x0001f3e6) vkb2_area_bottom_pane_g_ParamLimits

0xfd89,	// (0x0001f3e6) vkb2_area_bottom_pane_g

0x1e4f,	// (0x000114ac) vkb2_top_cell_left_pane_ParamLimits

0x1e4f,	// (0x000114ac) vkb2_top_cell_left_pane

0xee88,	// (0x0001e4e5) vkb2_top_entry_pane_g1_ParamLimits

0xee88,	// (0x0001e4e5) vkb2_top_entry_pane_g1

0xee96,	// (0x0001e4f3) vkb2_top_entry_pane_t1_ParamLimits

0xee96,	// (0x0001e4f3) vkb2_top_entry_pane_t1

0x9962,	// (0x00018fbf) vkb2_top_entry_pane_t2_ParamLimits

0x9962,	// (0x00018fbf) vkb2_top_entry_pane_t2

0x9994,	// (0x00018ff1) vkb2_top_entry_pane_t3_ParamLimits

0x9994,	// (0x00018ff1) vkb2_top_entry_pane_t3

0x0002,

0xfd90,	// (0x0001f3ed) vkb2_top_entry_pane_t_ParamLimits

0xfd90,	// (0x0001f3ed) vkb2_top_entry_pane_t

0xc628,	// (0x0001bc85) vkb2_top_grid_right_pane_g1_ParamLimits

0xc628,	// (0x0001bc85) vkb2_top_grid_right_pane_g1

0x1eb2,	// (0x0001150f) vkb2_top_grid_right_pane_g2_ParamLimits

0x1eb2,	// (0x0001150f) vkb2_top_grid_right_pane_g2

0x1eca,	// (0x00011527) vkb2_top_grid_right_pane_g3_ParamLimits

0x1eca,	// (0x00011527) vkb2_top_grid_right_pane_g3

0xc63e,	// (0x0001bc9b) vkb2_top_grid_right_pane_g4_ParamLimits

0xc63e,	// (0x0001bc9b) vkb2_top_grid_right_pane_g4

0x0003,

0xfd97,	// (0x0001f3f4) vkb2_top_grid_right_pane_g_ParamLimits

0xfd97,	// (0x0001f3f4) vkb2_top_grid_right_pane_g

0x1ef8,	// (0x00011555) vkb2_top_cell_left_pane_g1

0x1f0f,	// (0x0001156c) vkb2_cell_keypad_pane_g1_ParamLimits

0x1f0f,	// (0x0001156c) vkb2_cell_keypad_pane_g1

0x99b8,	// (0x00019015) vkb2_cell_keypad_pane_t1_ParamLimits

0x99b8,	// (0x00019015) vkb2_cell_keypad_pane_t1

0x1f1d,	// (0x0001157a) vkb2_cell_bottom_grid_pane_ParamLimits

0x1f1d,	// (0x0001157a) vkb2_cell_bottom_grid_pane

0x1f56,	// (0x000115b3) vkb2_cell_bottom_grid_pane_g1

0xeb3a,	// (0x0001e197) aid_call2_pane_cp02

0xeb42,	// (0x0001e19f) aid_call_pane_cp02

0xeb4a,	// (0x0001e1a7) clock_digital_number_pane_cp10

0xeb52,	// (0x0001e1af) clock_digital_number_pane_cp11

0xeb5a,	// (0x0001e1b7) clock_digital_number_pane_cp12

0xeb62,	// (0x0001e1bf) clock_digital_number_pane_cp13

0xeb6a,	// (0x0001e1c7) clock_digital_separator_pane_cp10

0x3cb0,	// (0x0001330d) popup_clock_digital_analogue_window_cp2_g1

0x3cb0,	// (0x0001330d) popup_clock_digital_analogue_window_cp2_g2

0xeb72,	// (0x0001e1cf) popup_clock_digital_analogue_window_cp2_g3

0x3cb0,	// (0x0001330d) popup_clock_digital_analogue_window_cp2_g4

0xeb72,	// (0x0001e1cf) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4c,	// (0x0001f3a9) popup_clock_digital_analogue_window_cp2_g

0xeb7a,	// (0x0001e1d7) popup_clock_digital_analogue_window_cp2_t1

0xeb88,	// (0x0001e1e5) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd57,	// (0x0001f3b4) popup_clock_digital_analogue_window_cp2_t

0x775a,	// (0x00016db7) clock_digital_number_pane_cp10_g1

0x775a,	// (0x00016db7) clock_digital_number_pane_cp10_g2

0x0001,

0xfb33,	// (0x0001f190) clock_digital_number_pane_cp10_g

0x775a,	// (0x00016db7) clock_digital_separator_pane_cp10_g1

0x775a,	// (0x00016db7) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb33,	// (0x0001f190) clock_digital_separator_pane_cp10_g

0x93df,	// (0x00018a3c) uniindi_top_pane_g3

0x93f0,	// (0x00018a4d) uniindi_top_pane_g4

0x1d30,	// (0x0001138d) vkb2_row_keypad_pane_ParamLimits

0x1d30,	// (0x0001138d) vkb2_row_keypad_pane

0x1f72,	// (0x000115cf) vkb2_cell_t_keypad_pane_ParamLimits

0x1f72,	// (0x000115cf) vkb2_cell_t_keypad_pane

0x1f82,	// (0x000115df) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1f82,	// (0x000115df) vkb2_cell_t_keypad_pane_cp08

0x1f95,	// (0x000115f2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1f95,	// (0x000115f2) vkb2_cell_t_keypad_pane_cp09

0x1fa9,	// (0x00011606) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1fa9,	// (0x00011606) vkb2_cell_t_keypad_pane_cp01

0x1fba,	// (0x00011617) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1fba,	// (0x00011617) vkb2_cell_t_keypad_pane_cp02

0x1fcb,	// (0x00011628) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1fcb,	// (0x00011628) vkb2_cell_t_keypad_pane_cp03

0x1fdc,	// (0x00011639) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1fdc,	// (0x00011639) vkb2_cell_t_keypad_pane_cp04

0x1fed,	// (0x0001164a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1fed,	// (0x0001164a) vkb2_cell_t_keypad_pane_cp05

0x1ffe,	// (0x0001165b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1ffe,	// (0x0001165b) vkb2_cell_t_keypad_pane_cp06

0x200f,	// (0x0001166c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x200f,	// (0x0001166c) vkb2_cell_t_keypad_pane_cp07

0x2020,	// (0x0001167d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2020,	// (0x0001167d) vkb2_cell_t_keypad_pane_cp10

0x17d6,	// (0x00010e33) vkb2_cell_t_keypad_pane_g1

0x99cf,	// (0x0001902c) vkb2_cell_t_keypad_pane_t1

0x01cd,	// (0x0000f82a) popup_grid_graphic2_window

0xeecf,	// (0x0001e52c) aid_size_cell_graphic2_ParamLimits

0xeecf,	// (0x0001e52c) aid_size_cell_graphic2

0xef0d,	// (0x0001e56a) bg_popup_window_pane_cp21_ParamLimits

0xef0d,	// (0x0001e56a) bg_popup_window_pane_cp21

0xef1b,	// (0x0001e578) graphic2_pages_pane_ParamLimits

0xef1b,	// (0x0001e578) graphic2_pages_pane

0xef71,	// (0x0001e5ce) grid_graphic2_control_pane_ParamLimits

0xef71,	// (0x0001e5ce) grid_graphic2_control_pane

0xefb9,	// (0x0001e616) grid_graphic2_pane_ParamLimits

0xefb9,	// (0x0001e616) grid_graphic2_pane

0xf040,	// (0x0001e69d) cell_graphic2_pane

0x01cd,	// (0x0000f82a) main_comp_mode_pane

0x8bea,	// (0x00018247) list_ai3_gene_pane_ParamLimits

0xe881,	// (0x0001dede) bg_popup_window_pane_cp19_ParamLimits

0x902d,	// (0x0001868a) bg_touch_area_indi_pane_ParamLimits

0x902d,	// (0x0001868a) bg_touch_area_indi_pane

0x9043,	// (0x000186a0) bg_touch_area_indi_pane_cp01_ParamLimits

0x9043,	// (0x000186a0) bg_touch_area_indi_pane_cp01

0x9059,	// (0x000186b6) bg_touch_area_indi_pane_cp02_ParamLimits

0x9059,	// (0x000186b6) bg_touch_area_indi_pane_cp02

0x906f,	// (0x000186cc) bg_touch_area_indi_pane_cp03_ParamLimits

0x906f,	// (0x000186cc) bg_touch_area_indi_pane_cp03

0x9089,	// (0x000186e6) popup_slider_window_g1_ParamLimits

0x90a5,	// (0x00018702) popup_slider_window_g2_ParamLimits

0x90c1,	// (0x0001871e) popup_slider_window_g3_ParamLimits

0xfce1,	// (0x0001f33e) popup_slider_window_g_ParamLimits

0x9127,	// (0x00018784) popup_slider_window_t1_ParamLimits

0x919b,	// (0x000187f8) small_volume_slider_vertical_pane_ParamLimits

0xf040,	// (0x0001e69d) cell_graphic2_pane_ParamLimits

0xf09b,	// (0x0001e6f8) bg_button_pane_cp10_ParamLimits

0xf09b,	// (0x0001e6f8) bg_button_pane_cp10

0xf0ae,	// (0x0001e70b) bg_button_pane_cp11_ParamLimits

0xf0ae,	// (0x0001e70b) bg_button_pane_cp11

0xf0c1,	// (0x0001e71e) graphic2_pages_pane_g1_ParamLimits

0xf0c1,	// (0x0001e71e) graphic2_pages_pane_g1

0xf0dc,	// (0x0001e739) graphic2_pages_pane_g2_ParamLimits

0xf0dc,	// (0x0001e739) graphic2_pages_pane_g2

0x0001,

0xfda5,	// (0x0001f402) graphic2_pages_pane_g_ParamLimits

0xfda5,	// (0x0001f402) graphic2_pages_pane_g

0xf0f4,	// (0x0001e751) graphic2_pages_pane_t1_ParamLimits

0xf0f4,	// (0x0001e751) graphic2_pages_pane_t1

0xf10c,	// (0x0001e769) cell_graphic2_control_pane_ParamLimits

0xf10c,	// (0x0001e769) cell_graphic2_control_pane

0xf13e,	// (0x0001e79b) cell_graphic2_pane_g1_ParamLimits

0xf13e,	// (0x0001e79b) cell_graphic2_pane_g1

0xd50d,	// (0x0001cb6a) cell_graphic2_pane_g2_ParamLimits

0xd50d,	// (0x0001cb6a) cell_graphic2_pane_g2

0xee7b,	// (0x0001e4d8) cell_graphic2_pane_g3_ParamLimits

0xee7b,	// (0x0001e4d8) cell_graphic2_pane_g3

0xd51a,	// (0x0001cb77) cell_graphic2_pane_g4_ParamLimits

0xd51a,	// (0x0001cb77) cell_graphic2_pane_g4

0xf14b,	// (0x0001e7a8) cell_graphic2_pane_g5_ParamLimits

0xf14b,	// (0x0001e7a8) cell_graphic2_pane_g5

0x0004,

0xfdaa,	// (0x0001f407) cell_graphic2_pane_g_ParamLimits

0xfdaa,	// (0x0001f407) cell_graphic2_pane_g

0xf16b,	// (0x0001e7c8) cell_graphic2_pane_t1_ParamLimits

0xf16b,	// (0x0001e7c8) cell_graphic2_pane_t1

0x59ca,	// (0x00015027) grid_highlight_pane_cp11_ParamLimits

0x59ca,	// (0x00015027) grid_highlight_pane_cp11

0x2930,	// (0x00011f8d) bg_button_pane_cp05

0xf1b4,	// (0x0001e811) cell_graphic2_control_pane_g1

0x775a,	// (0x00016db7) bg_touch_area_indi_pane_g1

0x9cab,	// (0x00019308) aid_cmod_rocker_key_size

0x9cb5,	// (0x00019312) aid_cmode_itu_key_size

0x9ce0,	// (0x0001933d) main_cmode_video_pane

0x9cea,	// (0x00019347) main_comp_mode_itu_pane

0x9cf6,	// (0x00019353) main_comp_mode_rocker_pane

0x9d02,	// (0x0001935f) cell_cmode_rocker_pane_ParamLimits

0x9d02,	// (0x0001935f) cell_cmode_rocker_pane

0x9d14,	// (0x00019371) cell_cmode_itu_pane_ParamLimits

0x9d14,	// (0x00019371) cell_cmode_itu_pane

0x34b7,	// (0x00012b14) bg_button_pane_cp06_ParamLimits

0x34b7,	// (0x00012b14) bg_button_pane_cp06

0x79d8,	// (0x00017035) cell_cmode_rocker_pane_g1_ParamLimits

0x79d8,	// (0x00017035) cell_cmode_rocker_pane_g1

0x923f,	// (0x0001889c) cell_cmode_rocker_pane_g2_ParamLimits

0x923f,	// (0x0001889c) cell_cmode_rocker_pane_g2

0x0001,

0xfdba,	// (0x0001f417) cell_cmode_rocker_pane_g_ParamLimits

0xfdba,	// (0x0001f417) cell_cmode_rocker_pane_g

0x2599,	// (0x00011bf6) bg_button_pane_cp07

0x9d29,	// (0x00019386) cell_cmode_itu_pane_g1

0x9d32,	// (0x0001938f) cell_cmode_itu_pane_t1

0x9d40,	// (0x0001939d) cell_cmode_itu_pane_t2

0x0001,

0xfdbf,	// (0x0001f41c) cell_cmode_itu_pane_t

0x9462,	// (0x00018abf) aid_touch_ctrl_left

0x946a,	// (0x00018ac7) aid_touch_ctrl_right

0x2599,	// (0x00011bf6) compa_mode_pane

0xf1d8,	// (0x0001e835) aid_cmod_rocker_key_size_cp

0xf1e2,	// (0x0001e83f) aid_cmode_itu_key_size_cp

0x9d62,	// (0x000193bf) compa_mode_pane_g1

0x9d6a,	// (0x000193c7) compa_mode_pane_g2

0x9d72,	// (0x000193cf) compa_mode_pane_g3

0x0002,

0xfdc4,	// (0x0001f421) compa_mode_pane_g

0xf1ec,	// (0x0001e849) main_comp_mode_itu_pane_cp

0xf1f4,	// (0x0001e851) main_comp_mode_rocker_pane_cp

0xf1fc,	// (0x0001e859) cell_cmode_itu_pane_cp_ParamLimits

0xf1fc,	// (0x0001e859) cell_cmode_itu_pane_cp

0xf211,	// (0x0001e86e) cell_cmode_rocker_pane_cp_ParamLimits

0xf211,	// (0x0001e86e) cell_cmode_rocker_pane_cp

0x34b7,	// (0x00012b14) bg_button_pane_cp06_cp_ParamLimits

0x34b7,	// (0x00012b14) bg_button_pane_cp06_cp

0x79d8,	// (0x00017035) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x79d8,	// (0x00017035) cell_cmode_rocker_pane_g1_cp

0x775a,	// (0x00016db7) cell_cmode_rocker_pane_g2_cp

0x2599,	// (0x00011bf6) bg_button_pane_cp07_cp

0xf223,	// (0x0001e880) cell_cmode_itu_pane_g1_cp

0xf22c,	// (0x0001e889) cell_cmode_itu_pane_t1_cp

0xf22c,	// (0x0001e889) cell_cmode_itu_pane_t2_cp

0xdcc1,	// (0x0001d31e) settings_code_pane_cp2

0x268d,	// (0x00011cea) bg_popup_window_pane_cp3_ParamLimits

0x2b30,	// (0x0001218d) heading_pane_cp3_ParamLimits

0x2b3c,	// (0x00012199) listscroll_popup_graphic_pane_ParamLimits

0x157f,	// (0x00010bdc) fep_hwr_aid_pane_ParamLimits

0x19f6,	// (0x00011053) aid_touch_sctrl_top_ParamLimits

0x1a11,	// (0x0001106e) sctrl_sk_top_pane_g1_ParamLimits

0x17d6,	// (0x00010e33) sctrl_sk_top_pane_g2_ParamLimits

0xfcfa,	// (0x0001f357) sctrl_sk_top_pane_g_ParamLimits

0x1a1e,	// (0x0001107b) sctrl_sk_top_pane_t1_ParamLimits

0x19f6,	// (0x00011053) aid_touch_sctrl_bottom_ParamLimits

0x1a1e,	// (0x0001107b) sctrl_sk_bottom_pane_t1_ParamLimits

0x93ab,	// (0x00018a08) aid_area_touch_clock

0xc46c,	// (0x0001bac9) aid_vkb2_area_top_pane_cell_ParamLimits

0xc46c,	// (0x0001bac9) aid_vkb2_area_top_pane_cell

0xc517,	// (0x0001bb74) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc517,	// (0x0001bb74) aid_vkb2_area_bottom_pane_cell

0x991a,	// (0x00018f77) popup_char_count_window

0x9dbf,	// (0x0001941c) popup_char_count_window_g1

0x9dc8,	// (0x00019425) popup_char_count_window_g2

0x9dd1,	// (0x0001942e) popup_char_count_window_g3

0x0002,

0xfdcb,	// (0x0001f428) popup_char_count_window_g

0x9dda,	// (0x00019437) popup_char_count_window_t1

0x1acd,	// (0x0001112a) popup_fep_char_preview_window_ParamLimits

0x1acd,	// (0x0001112a) popup_fep_char_preview_window

0xc48c,	// (0x0001bae9) vkb2_top_candi_pane_ParamLimits

0xc48c,	// (0x0001bae9) vkb2_top_candi_pane

0xf23a,	// (0x0001e897) cell_vkb2_top_candi_pane_ParamLimits

0xf23a,	// (0x0001e897) cell_vkb2_top_candi_pane

0x2035,	// (0x00011692) bg_popup_fep_char_preview_window_ParamLimits

0x2035,	// (0x00011692) bg_popup_fep_char_preview_window

0x2043,	// (0x000116a0) popup_fep_char_preview_window_t1_ParamLimits

0x2043,	// (0x000116a0) popup_fep_char_preview_window_t1

0x9e35,	// (0x00019492) bg_popup_fep_char_preview_window_g1

0x9e3d,	// (0x0001949a) bg_popup_fep_char_preview_window_g2

0x9e45,	// (0x000194a2) bg_popup_fep_char_preview_window_g3

0x9e4d,	// (0x000194aa) bg_popup_fep_char_preview_window_g4

0x9e55,	// (0x000194b2) bg_popup_fep_char_preview_window_g5

0x207d,	// (0x000116da) bg_popup_fep_char_preview_window_g6

0x9e5d,	// (0x000194ba) bg_popup_fep_char_preview_window_g7

0x9e65,	// (0x000194c2) bg_popup_fep_char_preview_window_g8

0x9e6d,	// (0x000194ca) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd2,	// (0x0001f42f) bg_popup_fep_char_preview_window_g

0x17d6,	// (0x00010e33) cell_vkb2_top_candi_pane_g1_ParamLimits

0x17d6,	// (0x00010e33) cell_vkb2_top_candi_pane_g1

0x17e4,	// (0x00010e41) cell_vkb2_top_candi_pane_g2_ParamLimits

0x17e4,	// (0x00010e41) cell_vkb2_top_candi_pane_g2

0x9cbf,	// (0x0001931c) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9cbf,	// (0x0001931c) cell_vkb2_top_candi_pane_g3

0x2085,	// (0x000116e2) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2085,	// (0x000116e2) cell_vkb2_top_candi_pane_g4

0x8048,	// (0x000176a5) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8048,	// (0x000176a5) cell_vkb2_top_candi_pane_g5

0x20a6,	// (0x00011703) cell_vkb2_top_candi_pane_g6_ParamLimits

0x20a6,	// (0x00011703) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde5,	// (0x0001f442) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde5,	// (0x0001f442) cell_vkb2_top_candi_pane_g

0x20b4,	// (0x00011711) cell_vkb2_top_candi_pane_t1

0x13df,	// (0x00010a3c) aid_size_touch_slider_mark_ParamLimits

0x13df,	// (0x00010a3c) aid_size_touch_slider_mark

0xef57,	// (0x0001e5b4) grid_graphic2_catg_pane_ParamLimits

0xef57,	// (0x0001e5b4) grid_graphic2_catg_pane

0xf013,	// (0x0001e670) popup_grid_graphic2_window_t1_ParamLimits

0xf013,	// (0x0001e670) popup_grid_graphic2_window_t1

0xf029,	// (0x0001e686) popup_grid_graphic2_window_t2_ParamLimits

0xf029,	// (0x0001e686) popup_grid_graphic2_window_t2

0x0001,

0xfda0,	// (0x0001f3fd) popup_grid_graphic2_window_t_ParamLimits

0xfda0,	// (0x0001f3fd) popup_grid_graphic2_window_t

0x2930,	// (0x00011f8d) bg_button_pane_cp05_ParamLimits

0xf1b4,	// (0x0001e811) cell_graphic2_control_pane_g1_ParamLimits

0xf2a0,	// (0x0001e8fd) cell_graphic2_catg_pane_ParamLimits

0xf2a0,	// (0x0001e8fd) cell_graphic2_catg_pane

0x2599,	// (0x00011bf6) bg_button_pane_cp12

0xf2b2,	// (0x0001e90f) cell_graphic2_catg_pane_g1

0x9377,	// (0x000189d4) cell_tb_ext_pane_t1_ParamLimits

0x1e6f,	// (0x000114cc) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1e6f,	// (0x000114cc) vkb2_top_cell_right_narrow_pane

0x1e87,	// (0x000114e4) vkb2_top_cell_right_wide_pane_ParamLimits

0x1e87,	// (0x000114e4) vkb2_top_cell_right_wide_pane

0x1571,	// (0x00010bce) bg_vkb2_func_pane_ParamLimits

0x1571,	// (0x00010bce) bg_vkb2_func_pane

0x1ef8,	// (0x00011555) vkb2_top_cell_left_pane_g1_ParamLimits

0x1571,	// (0x00010bce) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1571,	// (0x00010bce) bg_vkb2_fuc_pane_cp03

0x1f56,	// (0x000115b3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4be0,	// (0x0001423d) bg_vkb2_func_pane_g1

0x4be8,	// (0x00014245) bg_vkb2_func_pane_g2

0x4bf8,	// (0x00014255) bg_vkb2_func_pane_g3

0x4bf0,	// (0x0001424d) bg_vkb2_func_pane_g4

0x4c00,	// (0x0001425d) bg_vkb2_func_pane_g5

0x4c08,	// (0x00014265) bg_vkb2_func_pane_g6

0x4c10,	// (0x0001426d) bg_vkb2_func_pane_g7

0x4c18,	// (0x00014275) bg_vkb2_func_pane_g8

0x4bd8,	// (0x00014235) bg_vkb2_func_pane_g9

0x0008,

0xfdf2,	// (0x0001f44f) bg_vkb2_func_pane_g

0x1571,	// (0x00010bce) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1571,	// (0x00010bce) bg_vkb2_fuc_pane_cp01

0x1ef8,	// (0x00011555) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1ef8,	// (0x00011555) vkb2_top_cell_right_wide_pane_g1

0x1571,	// (0x00010bce) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1571,	// (0x00010bce) bg_vkb2_fuc_pane_cp02

0x1f56,	// (0x000115b3) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1f56,	// (0x000115b3) vkb2_top_cell_right_narrow_pane_g1

0xe7c3,	// (0x0001de20) aid_touch_area_decrease_ParamLimits

0xe7c3,	// (0x0001de20) aid_touch_area_decrease

0xe7fd,	// (0x0001de5a) aid_touch_area_increase_ParamLimits

0xe7fd,	// (0x0001de5a) aid_touch_area_increase

0xe825,	// (0x0001de82) aid_touch_area_mute_ParamLimits

0xe825,	// (0x0001de82) aid_touch_area_mute

0xe84d,	// (0x0001deaa) aid_touch_area_slider_ParamLimits

0xe84d,	// (0x0001deaa) aid_touch_area_slider

0xe88d,	// (0x0001deea) popup_slider_window_g4_ParamLimits

0xe88d,	// (0x0001deea) popup_slider_window_g4

0xe8b5,	// (0x0001df12) popup_slider_window_g5_ParamLimits

0xe8b5,	// (0x0001df12) popup_slider_window_g5

0xe8e9,	// (0x0001df46) popup_slider_window_g6_ParamLimits

0xe8e9,	// (0x0001df46) popup_slider_window_g6

0x9155,	// (0x000187b2) popup_slider_window_t2_ParamLimits

0x9155,	// (0x000187b2) popup_slider_window_t2

0x0001,

0xfcee,	// (0x0001f34b) popup_slider_window_t_ParamLimits

0xfcee,	// (0x0001f34b) popup_slider_window_t

0xe905,	// (0x0001df62) slider_pane_ParamLimits

0xe905,	// (0x0001df62) slider_pane

0x9e90,	// (0x000194ed) slider_pane_g1_ParamLimits

0x9e90,	// (0x000194ed) slider_pane_g1

0x9ea4,	// (0x00019501) slider_pane_g2_ParamLimits

0x9ea4,	// (0x00019501) slider_pane_g2

0x9eba,	// (0x00019517) slider_pane_g3_ParamLimits

0x9eba,	// (0x00019517) slider_pane_g3

0x0003,

0xfe05,	// (0x0001f462) slider_pane_g_ParamLimits

0xfe05,	// (0x0001f462) slider_pane_g

0xc14c,	// (0x0001b7a9) popup_tb_float_extension_window_ParamLimits

0xc14c,	// (0x0001b7a9) popup_tb_float_extension_window

0x9ee6,	// (0x00019543) aid_size_cell_tb_float_ext

0x2599,	// (0x00011bf6) bg_popup_sub_window_cp28

0x9ef2,	// (0x0001954f) grid_tb_float_ext_pane

0x9efc,	// (0x00019559) cell_tb_float_ext_pane_ParamLimits

0x9efc,	// (0x00019559) cell_tb_float_ext_pane

0x9f16,	// (0x00019573) cell_tb_float_ext_pane_g1

0x9f1f,	// (0x0001957c) grid_highlight_pane_cp12

0xc275,	// (0x0001b8d2) cell_last_hwr_side_pane_ParamLimits

0xc275,	// (0x0001b8d2) cell_last_hwr_side_pane

0x775a,	// (0x00016db7) cell_last_hwr_side_pane_g1

0x9f28,	// (0x00019585) cell_last_hwr_side_pane_g2

0x0001,

0xfe0e,	// (0x0001f46b) cell_last_hwr_side_pane_g

0xc5f3,	// (0x0001bc50) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc5f3,	// (0x0001bc50) vkb2_area_bottom_space_btn_pane

0x17d6,	// (0x00010e33) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x99cf,	// (0x0001902c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x20b4,	// (0x00011711) cell_vkb2_top_candi_pane_t1_ParamLimits

0x20d3,	// (0x00011730) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x20d3,	// (0x00011730) vkb2_area_bottom_space_btn_pane_g1

0x210d,	// (0x0001176a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x210d,	// (0x0001176a) vkb2_area_bottom_space_btn_pane_g2

0x2143,	// (0x000117a0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2143,	// (0x000117a0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe13,	// (0x0001f470) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe13,	// (0x0001f470) vkb2_area_bottom_space_btn_pane_g

0x1634,	// (0x00010c91) cel_fep_hwr_func_pane_ParamLimits

0x1634,	// (0x00010c91) cel_fep_hwr_func_pane

0xc24a,	// (0x0001b8a7) cell_hwr_side_button_pane_ParamLimits

0xc24a,	// (0x0001b8a7) cell_hwr_side_button_pane

0x93ab,	// (0x00018a08) aid_area_touch_clock_ParamLimits

0x2930,	// (0x00011f8d) bg_uniindi_top_pane_ParamLimits

0x93bd,	// (0x00018a1a) uniindi_top_pane_g1_ParamLimits

0x93d3,	// (0x00018a30) uniindi_top_pane_g2_ParamLimits

0x93df,	// (0x00018a3c) uniindi_top_pane_g3_ParamLimits

0x93f0,	// (0x00018a4d) uniindi_top_pane_g4_ParamLimits

0xfd26,	// (0x0001f383) uniindi_top_pane_g_ParamLimits

0x93fd,	// (0x00018a5a) uniindi_top_pane_t1_ParamLimits

0x2930,	// (0x00011f8d) bg_vkb2_func_pane_cp01_ParamLimits

0x2930,	// (0x00011f8d) bg_vkb2_func_pane_cp01

0x9f31,	// (0x0001958e) cel_fep_hwr_func_pane_g1_ParamLimits

0x9f31,	// (0x0001958e) cel_fep_hwr_func_pane_g1

0x2930,	// (0x00011f8d) bg_vkb2_func_pane_cp02_ParamLimits

0x2930,	// (0x00011f8d) bg_vkb2_func_pane_cp02

0x9f31,	// (0x0001958e) cell_hwr_side_button_pane_g1_ParamLimits

0x9f31,	// (0x0001958e) cell_hwr_side_button_pane_g1

0x4a2b,	// (0x00014088) status_pane_g4_ParamLimits

0x4a2b,	// (0x00014088) status_pane_g4

0x4a45,	// (0x000140a2) status_pane_t1

0x749f,	// (0x00016afc) form2_midp_gauge_slider_cont_pane

0x74a7,	// (0x00016b04) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe002,	// (0x0001d65f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe014,	// (0x0001d671) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae6,	// (0x0001f143) form2_midp_gauge_slider_pane_t_ParamLimits

0x74dd,	// (0x00016b3a) form2_midp_slider_pane_ParamLimits

0x1a8d,	// (0x000110ea) aid_size_cell_func_vkb2_ParamLimits

0x1a8d,	// (0x000110ea) aid_size_cell_func_vkb2

0x9ed2,	// (0x0001952f) slider_pane_g4_ParamLimits

0x9ed2,	// (0x0001952f) slider_pane_g4

0xc654,	// (0x0001bcb1) form2_midp_gauge_slider_pane_t2_cp01

0xc662,	// (0x0001bcbf) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc662,	// (0x0001bcbf) form2_midp_gauge_slider_pane_t3_cp01

0x21b8,	// (0x00011815) form2_midp_slider_pane_cp01

0x2599,	// (0x00011bf6) navi_smil_pane

0x9f6a,	// (0x000195c7) navi_smil_pane_g1

0x9f72,	// (0x000195cf) navi_smil_pane_t1

0x9f3f,	// (0x0001959c) form2_midp_slider_pane_g1

0x9f48,	// (0x000195a5) form2_midp_slider_pane_g2

0x9f50,	// (0x000195ad) form2_midp_slider_pane_g3

0x9f3f,	// (0x0001959c) form2_midp_slider_pane_g4

0xf2bb,	// (0x0001e918) form2_midp_slider_pane_g5

0x0004,

0xfe1c,	// (0x0001f479) form2_midp_slider_pane_g

0x217d,	// (0x000117da) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x217d,	// (0x000117da) vkb2_area_bottom_space_btn_pane_g4

0xd67e,	// (0x0001ccdb) lc0_navi_pane_ParamLimits

0xd67e,	// (0x0001ccdb) lc0_navi_pane

0xd6e8,	// (0x0001cd45) lc0_stat_indi_pane_ParamLimits

0xd6e8,	// (0x0001cd45) lc0_stat_indi_pane

0xd6fd,	// (0x0001cd5a) ls0_title_pane_ParamLimits

0xd6fd,	// (0x0001cd5a) ls0_title_pane

0x34b7,	// (0x00012b14) bg_popup_sub_pane_cp14_ParamLimits

0x9392,	// (0x000189ef) list_uniindi_pane_ParamLimits

0x939e,	// (0x000189fb) uniindi_top_pane_ParamLimits

0x943a,	// (0x00018a97) list_single_uniindi_pane_g1_ParamLimits

0x944d,	// (0x00018aaa) list_single_uniindi_pane_t1_ParamLimits

0xc67f,	// (0x0001bcdc) lc0_stat_clock_pane_ParamLimits

0xc67f,	// (0x0001bcdc) lc0_stat_clock_pane

0xf2c6,	// (0x0001e923) lc0_stat_indi_pane_g1_ParamLimits

0xf2c6,	// (0x0001e923) lc0_stat_indi_pane_g1

0xf2d3,	// (0x0001e930) lc0_stat_indi_pane_g2_ParamLimits

0xf2d3,	// (0x0001e930) lc0_stat_indi_pane_g2

0x0001,

0xfe27,	// (0x0001f484) lc0_stat_indi_pane_g_ParamLimits

0xfe27,	// (0x0001f484) lc0_stat_indi_pane_g

0xc68c,	// (0x0001bce9) lc0_uni_indicator_pane_ParamLimits

0xc68c,	// (0x0001bce9) lc0_uni_indicator_pane

0xf2e0,	// (0x0001e93d) ls0_title_pane_g1_ParamLimits

0xf2e0,	// (0x0001e93d) ls0_title_pane_g1

0xf2f4,	// (0x0001e951) ls0_title_pane_t1_ParamLimits

0xf2f4,	// (0x0001e951) ls0_title_pane_t1

0xc699,	// (0x0001bcf6) lc0_uni_indicator_pane_g1_ParamLimits

0xc699,	// (0x0001bcf6) lc0_uni_indicator_pane_g1

0x9fe4,	// (0x00019641) lc0_stat_clock_pane_t1

0x01cd,	// (0x0000f82a) main_ai5_pane

0x9ff2,	// (0x0001964f) ai5_sk_pane_ParamLimits

0x9ff2,	// (0x0001964f) ai5_sk_pane

0xf322,	// (0x0001e97f) cell_ai5_widget_pane_ParamLimits

0xf322,	// (0x0001e97f) cell_ai5_widget_pane

0xa0ba,	// (0x00019717) aid_size_cell_widget_grid

0xa0d0,	// (0x0001972d) bg_ai5_widget_pane_ParamLimits

0xa0d0,	// (0x0001972d) bg_ai5_widget_pane

0xa148,	// (0x000197a5) cell_ai5_widget_pane_g2

0xa15c,	// (0x000197b9) cell_ai5_widget_pane_g3

0xa176,	// (0x000197d3) cell_ai5_widget_pane_g4

0xa186,	// (0x000197e3) cell_ai5_widget_pane_g5

0xa196,	// (0x000197f3) cell_ai5_widget_pane_g6

0xa1a2,	// (0x000197ff) cell_ai5_widget_pane_g7

0xa1ea,	// (0x00019847) cell_ai5_widget_pane_t1_ParamLimits

0xa1ea,	// (0x00019847) cell_ai5_widget_pane_t1

0xa207,	// (0x00019864) cell_ai5_widget_pane_t2_ParamLimits

0xa207,	// (0x00019864) cell_ai5_widget_pane_t2

0xa21f,	// (0x0001987c) cell_ai5_widget_pane_t3_ParamLimits

0xa21f,	// (0x0001987c) cell_ai5_widget_pane_t3

0xa237,	// (0x00019894) cell_ai5_widget_pane_t4_ParamLimits

0xa237,	// (0x00019894) cell_ai5_widget_pane_t4

0xa25d,	// (0x000198ba) cell_ai5_widget_pane_t5_ParamLimits

0xa25d,	// (0x000198ba) cell_ai5_widget_pane_t5

0xa27d,	// (0x000198da) cell_ai5_widget_pane_t6_ParamLimits

0xa27d,	// (0x000198da) cell_ai5_widget_pane_t6

0xa28f,	// (0x000198ec) cell_ai5_widget_pane_t7_ParamLimits

0xa28f,	// (0x000198ec) cell_ai5_widget_pane_t7

0xa2a8,	// (0x00019905) cell_ai5_widget_pane_t8_ParamLimits

0xa2a8,	// (0x00019905) cell_ai5_widget_pane_t8

0x0009,

0xfe41,	// (0x0001f49e) cell_ai5_widget_pane_t_ParamLimits

0xfe41,	// (0x0001f49e) cell_ai5_widget_pane_t

0xa307,	// (0x00019964) grid_ai5_widget_pane

0x34b7,	// (0x00012b14) highlight_cell_ai5_widget_pane_ParamLimits

0x34b7,	// (0x00012b14) highlight_cell_ai5_widget_pane

0xf388,	// (0x0001e9e5) ai5_sk_left_pane

0xf392,	// (0x0001e9ef) ai5_sk_middle_pane

0xf39c,	// (0x0001e9f9) ai5_sk_right_pane

0xa33c,	// (0x00019999) bg_ai5_widget_pane_g1_ParamLimits

0xa33c,	// (0x00019999) bg_ai5_widget_pane_g1

0xa348,	// (0x000199a5) bg_ai5_widget_pane_g2_ParamLimits

0xa348,	// (0x000199a5) bg_ai5_widget_pane_g2

0xa354,	// (0x000199b1) bg_ai5_widget_pane_g3_ParamLimits

0xa354,	// (0x000199b1) bg_ai5_widget_pane_g3

0xa360,	// (0x000199bd) bg_ai5_widget_pane_g4_ParamLimits

0xa360,	// (0x000199bd) bg_ai5_widget_pane_g4

0xa36c,	// (0x000199c9) bg_ai5_widget_pane_g5_ParamLimits

0xa36c,	// (0x000199c9) bg_ai5_widget_pane_g5

0xa378,	// (0x000199d5) bg_ai5_widget_pane_g6_ParamLimits

0xa378,	// (0x000199d5) bg_ai5_widget_pane_g6

0xa384,	// (0x000199e1) bg_ai5_widget_pane_g7_ParamLimits

0xa384,	// (0x000199e1) bg_ai5_widget_pane_g7

0xa390,	// (0x000199ed) bg_ai5_widget_pane_g8_ParamLimits

0xa390,	// (0x000199ed) bg_ai5_widget_pane_g8

0xa39c,	// (0x000199f9) bg_ai5_widget_pane_g9_ParamLimits

0xa39c,	// (0x000199f9) bg_ai5_widget_pane_g9

0x0008,

0xfe56,	// (0x0001f4b3) bg_ai5_widget_pane_g_ParamLimits

0xfe56,	// (0x0001f4b3) bg_ai5_widget_pane_g

0xa3ce,	// (0x00019a2b) cell_shortcut_ai5_widget_pane_ParamLimits

0xa3ce,	// (0x00019a2b) cell_shortcut_ai5_widget_pane

0x4352,	// (0x000139af) bg_cell_shortcut_ai5_widget_pane

0xa3df,	// (0x00019a3c) cell_grid_ai5_widget_pane_g1

0x4352,	// (0x000139af) highlight_cell_shortcut_ai5_widget_pane

0x4be0,	// (0x0001423d) ai5_sk_left_pane_g1

0xa3e8,	// (0x00019a45) ai5_sk_left_pane_g2

0xa3f0,	// (0x00019a4d) ai5_sk_left_pane_g3

0xa3f8,	// (0x00019a55) ai5_sk_left_pane_g4

0x0003,

0xfe69,	// (0x0001f4c6) ai5_sk_left_pane_g

0xa400,	// (0x00019a5d) ai5_sk_left_pane_t1

0x4be8,	// (0x00014245) ai5_sk_right_pane_g1

0xa40e,	// (0x00019a6b) ai5_sk_right_pane_g2

0xa416,	// (0x00019a73) ai5_sk_right_pane_g3

0xa41e,	// (0x00019a7b) ai5_sk_right_pane_g4

0x0003,

0xfe72,	// (0x0001f4cf) ai5_sk_right_pane_g

0xa426,	// (0x00019a83) ai5_sk_right_pane_t1

0x4be8,	// (0x00014245) ai5_sk_middle_pane_g1

0x4be0,	// (0x0001423d) ai5_sk_middle_pane_g2

0x4c00,	// (0x0001425d) ai5_sk_middle_pane_g3

0xa416,	// (0x00019a73) ai5_sk_middle_pane_g4

0xa3f0,	// (0x00019a4d) ai5_sk_middle_pane_g5

0xa434,	// (0x00019a91) ai5_sk_middle_pane_g6

0xf3a6,	// (0x0001ea03) ai5_sk_middle_pane_g7

0x0006,

0xfe7b,	// (0x0001f4d8) ai5_sk_middle_pane_g

0xd56a,	// (0x0001cbc7) aid_touch_area_size_lc0_ParamLimits

0xd56a,	// (0x0001cbc7) aid_touch_area_size_lc0

0x1805,	// (0x00010e62) cell_hwr_candidate_pane_t1_ParamLimits

0x4702,	// (0x00013d5f) aid_touch_navi_pane

0xd7f6,	// (0x0001ce53) status_dt_navi_pane_ParamLimits

0xd7f6,	// (0x0001ce53) status_dt_navi_pane

0xd80e,	// (0x0001ce6b) status_dt_sta_pane_ParamLimits

0xd80e,	// (0x0001ce6b) status_dt_sta_pane

0xf3ae,	// (0x0001ea0b) dt_sta_controll_pane

0xf3bb,	// (0x0001ea18) dt_sta_indi_pane

0xf3c8,	// (0x0001ea25) dt_sta_title_pane

0x2930,	// (0x00011f8d) bg_dt_sta_indi_pane_ParamLimits

0x2930,	// (0x00011f8d) bg_dt_sta_indi_pane

0xf3da,	// (0x0001ea37) dt_sta_battery_pane

0xf3e2,	// (0x0001ea3f) dt_sta_indi_pane_g1

0xa486,	// (0x00019ae3) dt_sta_indi_pane_g2

0xa48f,	// (0x00019aec) dt_sta_indi_pane_g3

0x0002,

0xfe8a,	// (0x0001f4e7) dt_sta_indi_pane_g

0xa498,	// (0x00019af5) dt_sta_signal_pane

0x34b7,	// (0x00012b14) bg_dt_sta_title_pane_ParamLimits

0x34b7,	// (0x00012b14) bg_dt_sta_title_pane

0xa4a1,	// (0x00019afe) dt_sta_title_pane_g1

0xa4a9,	// (0x00019b06) dt_sta_title_pane_t1_ParamLimits

0xa4a9,	// (0x00019b06) dt_sta_title_pane_t1

0x2599,	// (0x00011bf6) bg_dt_sta_control_pane

0xf3eb,	// (0x0001ea48) dt_sta_controll_pane_g1

0xa4c7,	// (0x00019b24) bg_dt_sta_title_pane_g1

0xa4d0,	// (0x00019b2d) bg_dt_sta_title_pane_g2

0xa4d9,	// (0x00019b36) bg_dt_sta_title_pane_g3

0x0002,

0xfe91,	// (0x0001f4ee) bg_dt_sta_title_pane_g

0x775a,	// (0x00016db7) bg_dt_sta_indi_pane_g1

0xa4e2,	// (0x00019b3f) dt_sta_signal_pane_g1

0xa4ea,	// (0x00019b47) dt_sta_signal_pane_g2

0x0001,

0xfe98,	// (0x0001f4f5) dt_sta_signal_pane_g

0xa4f2,	// (0x00019b4f) dt_sta_battery_pane_g1

0xa4fb,	// (0x00019b58) dt_sta_battery_pane_t1

0x775a,	// (0x00016db7) bg_dt_sta_control_pane_g1

0x3dc2,	// (0x0001341f) fep_china_uni_eep_pane

0x3dca,	// (0x00013427) fep_china_uni_entry_pane_ParamLimits

0x3dda,	// (0x00013437) popup_fep_china_uni_window_g1_ParamLimits

0x3dea,	// (0x00013447) popup_fep_china_uni_window_g2_ParamLimits

0x3dea,	// (0x00013447) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001ed75) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001ed75) popup_fep_china_uni_window_g

0xa50a,	// (0x00019b67) fep_china_uni_eep_pane_g1

0xa512,	// (0x00019b6f) fep_china_uni_eep_pane_t1

0x9f61,	// (0x000195be) aid_touch_area_size_smil_player

0x4852,	// (0x00013eaf) lc0_clock_pane

0x4a39,	// (0x00014096) status_pane_g5_ParamLimits

0x4a39,	// (0x00014096) status_pane_g5

0xbcce,	// (0x0001b32b) popup_keymap_window

0x49f7,	// (0x00014054) status_icon_pane

0xa15c,	// (0x000197b9) cell_ai5_widget_pane_g3_ParamLimits

0xa176,	// (0x000197d3) cell_ai5_widget_pane_g4_ParamLimits

0xa186,	// (0x000197e3) cell_ai5_widget_pane_g5_ParamLimits

0xa1ae,	// (0x0001980b) cell_ai5_widget_pane_g8_ParamLimits

0xa1ae,	// (0x0001980b) cell_ai5_widget_pane_g8

0xa1c2,	// (0x0001981f) cell_ai5_widget_pane_g9_ParamLimits

0xa1c2,	// (0x0001981f) cell_ai5_widget_pane_g9

0xa1d6,	// (0x00019833) cell_ai5_widget_pane_g10_ParamLimits

0xa1d6,	// (0x00019833) cell_ai5_widget_pane_g10

0xa521,	// (0x00019b7e) status_icon_pane_g1

0x2599,	// (0x00011bf6) bg_popup_sub_pane_cp13

0xa529,	// (0x00019b86) popup_keymap_window_t1

0xd4d0,	// (0x0001cb2d) control_pane_g6_ParamLimits

0xd4d0,	// (0x0001cb2d) control_pane_g6

0xd4dd,	// (0x0001cb3a) control_pane_g7_ParamLimits

0xd4dd,	// (0x0001cb3a) control_pane_g7

0xd4ea,	// (0x0001cb47) control_pane_g8_ParamLimits

0xd4ea,	// (0x0001cb47) control_pane_g8

0xf3ae,	// (0x0001ea0b) dt_sta_controll_pane_ParamLimits

0xf3bb,	// (0x0001ea18) dt_sta_indi_pane_ParamLimits

0xf3c8,	// (0x0001ea25) dt_sta_title_pane_ParamLimits

0x2e74,	// (0x000124d1) aid_size_touch_scroll_bar_cale

0x02a6,	// (0x0000f903) popup_discreet_window_ParamLimits

0x02a6,	// (0x0000f903) popup_discreet_window

0xb8be,	// (0x0001af1b) popup_sk_window

0x534a,	// (0x000149a7) bg_popup_sub_pane_cp28_ParamLimits

0x534a,	// (0x000149a7) bg_popup_sub_pane_cp28

0xa537,	// (0x00019b94) popup_discreet_window_g1_ParamLimits

0xa537,	// (0x00019b94) popup_discreet_window_g1

0xa557,	// (0x00019bb4) popup_discreet_window_t1_ParamLimits

0xa557,	// (0x00019bb4) popup_discreet_window_t1

0xa575,	// (0x00019bd2) popup_discreet_window_t2_ParamLimits

0xa575,	// (0x00019bd2) popup_discreet_window_t2

0x0002,

0xfe9d,	// (0x0001f4fa) popup_discreet_window_t_ParamLimits

0xfe9d,	// (0x0001f4fa) popup_discreet_window_t

0x21ef,	// (0x0001184c) popup_sk_window_g1

0x21f9,	// (0x00011856) popup_sk_window_g2

0x0001,

0xfea4,	// (0x0001f501) popup_sk_window_g

0x2201,	// (0x0001185e) popup_sk_window_t1

0x220f,	// (0x0001186c) popup_sk_window_t1_copy1

0xa148,	// (0x000197a5) cell_ai5_widget_pane_g2_ParamLimits

0xa2ba,	// (0x00019917) cell_ai5_widget_pane_t9_ParamLimits

0xa2ba,	// (0x00019917) cell_ai5_widget_pane_t9

0x2599,	// (0x00011bf6) main_fep_fshwr2_pane

0xc6c0,	// (0x0001bd1d) aid_fshwr2_btn_pane

0xc6d4,	// (0x0001bd31) aid_fshwr2_syb_pane

0xc6e8,	// (0x0001bd45) aid_fshwr2_txt_pane

0xc6f8,	// (0x0001bd55) fshwr2_func_candi_pane

0xc718,	// (0x0001bd75) fshwr2_hwr_syb_pane

0xc73a,	// (0x0001bd97) fshwr2_icf_pane

0x01cd,	// (0x0000f82a) fshwr2_icf_bg_pane

0x22a9,	// (0x00011906) fshwr2_icf_pane_t1_ParamLimits

0x22a9,	// (0x00011906) fshwr2_icf_pane_t1

0x3cb0,	// (0x0001330d) fshwr2_func_candi_pane_g1

0xf3f4,	// (0x0001ea51) fshwr2_func_candi_row_pane_ParamLimits

0xf3f4,	// (0x0001ea51) fshwr2_func_candi_row_pane

0xc76a,	// (0x0001bdc7) cell_fshwr2_syb_pane_ParamLimits

0xc76a,	// (0x0001bdc7) cell_fshwr2_syb_pane

0x22e2,	// (0x0001193f) fshwr2_hwr_syb_pane_g1_ParamLimits

0x22e2,	// (0x0001193f) fshwr2_hwr_syb_pane_g1

0x01cd,	// (0x0000f82a) bg_popup_call_pane_cp01

0xc790,	// (0x0001bded) fshwr2_func_candi_cell_pane_ParamLimits

0xc790,	// (0x0001bded) fshwr2_func_candi_cell_pane

0xf417,	// (0x0001ea74) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf417,	// (0x0001ea74) fshwr2_func_candi_cell_bg_pane

0xc7db,	// (0x0001be38) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc7db,	// (0x0001be38) fshwr2_func_candi_cell_pane_g1

0xc812,	// (0x0001be6f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc812,	// (0x0001be6f) fshwr2_func_candi_cell_pane_t1

0x01cd,	// (0x0000f82a) bg_button_pane_cp08

0xa5f8,	// (0x00019c55) cell_fshwr2_syb_bg_pane

0xc82d,	// (0x0001be8a) cell_fshwr2_syb_bg_pane_g1

0xc840,	// (0x0001be9d) cell_fshwr2_syb_bg_pane_t1

0x34b7,	// (0x00012b14) main_tmo_pane

0xdae2,	// (0x0001d13f) uni_indicator_pane_g1_ParamLimits

0xdaf7,	// (0x0001d154) uni_indicator_pane_g2_ParamLimits

0xdb0d,	// (0x0001d16a) uni_indicator_pane_g3_ParamLimits

0x5e99,	// (0x000154f6) uni_indicator_pane_g4_ParamLimits

0x5e99,	// (0x000154f6) uni_indicator_pane_g4

0x5ead,	// (0x0001550a) uni_indicator_pane_g5_ParamLimits

0x5ead,	// (0x0001550a) uni_indicator_pane_g5

0x5ead,	// (0x0001550a) uni_indicator_pane_g6_ParamLimits

0x5ead,	// (0x0001550a) uni_indicator_pane_g6

0xf917,	// (0x0001ef74) uni_indicator_pane_g_ParamLimits

0xe79f,	// (0x0001ddfc) popup_tmo_note_window_ParamLimits

0xe79f,	// (0x0001ddfc) popup_tmo_note_window

0x1a6f,	// (0x000110cc) fshwr2_bg_pane

0xc803,	// (0x0001be60) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc803,	// (0x0001be60) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea9,	// (0x0001f506) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea9,	// (0x0001f506) fshwr2_func_candi_cell_pane_g

0x17be,	// (0x00010e1b) bg_popup_window_pane_cp01

0x23a0,	// (0x000119fd) bg_popup_window_pane_g1_cp01

0xa604,	// (0x00019c61) bg_popup_window_pane_cp22_ParamLimits

0xa604,	// (0x00019c61) bg_popup_window_pane_cp22

0xa612,	// (0x00019c6f) listscroll_tmo_link_pane_ParamLimits

0xa612,	// (0x00019c6f) listscroll_tmo_link_pane

0xa652,	// (0x00019caf) popup_tmo_note_window_g1_ParamLimits

0xa652,	// (0x00019caf) popup_tmo_note_window_g1

0xa65f,	// (0x00019cbc) tmo_note_info_pane_ParamLimits

0xa65f,	// (0x00019cbc) tmo_note_info_pane

0xf423,	// (0x0001ea80) list_tmo_note_info_pane_g1_ParamLimits

0xf423,	// (0x0001ea80) list_tmo_note_info_pane_g1

0xa690,	// (0x00019ced) list_tmo_note_info_pane_g2_ParamLimits

0xa690,	// (0x00019ced) list_tmo_note_info_pane_g2

0x0001,

0xfeae,	// (0x0001f50b) list_tmo_note_info_pane_g_ParamLimits

0xfeae,	// (0x0001f50b) list_tmo_note_info_pane_g

0xa6ac,	// (0x00019d09) list_tmo_note_info_text_pane_ParamLimits

0xa6ac,	// (0x00019d09) list_tmo_note_info_text_pane

0xa72d,	// (0x00019d8a) list_tmo_link_pane

0xa73a,	// (0x00019d97) scroll_pane_cp20

0xa747,	// (0x00019da4) list_single_tmo_link_pane_ParamLimits

0xa747,	// (0x00019da4) list_single_tmo_link_pane

0xa757,	// (0x00019db4) list_single_tmo_link_pane_t1

0xa765,	// (0x00019dc2) list_tmo_note_info_text_pane_t1_ParamLimits

0xa765,	// (0x00019dc2) list_tmo_note_info_text_pane_t1

0xd107,	// (0x0001c764) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd107,	// (0x0001c764) aid_size_touch_scroll_bar_cp01

0xd037,	// (0x0001c694) aid_size_touch_slider_marker

0xb8ae,	// (0x0001af0b) popup_settings_window_ParamLimits

0xb8ae,	// (0x0001af0b) popup_settings_window

0x46b2,	// (0x00013d0f) popup_candi_list_indi_window

0x4702,	// (0x00013d5f) aid_touch_navi_pane_ParamLimits

0x19ca,	// (0x00011027) rs_clock_indi_pane

0x19d3,	// (0x00011030) sctrl_sk_bottom_pane_ParamLimits

0x19e4,	// (0x00011041) sctrl_sk_top_pane_ParamLimits

0x1ae7,	// (0x00011144) popup_fep_tooltip_window

0xa0ba,	// (0x00019717) aid_size_cell_widget_grid_ParamLimits

0xa133,	// (0x00019790) cell_ai5_widget_pane_g1_ParamLimits

0xa133,	// (0x00019790) cell_ai5_widget_pane_g1

0xa196,	// (0x000197f3) cell_ai5_widget_pane_g6_ParamLimits

0xa1a2,	// (0x000197ff) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2c,	// (0x0001f489) cell_ai5_widget_pane_g_ParamLimits

0xfe2c,	// (0x0001f489) cell_ai5_widget_pane_g

0xa2e9,	// (0x00019946) cell_ai5_widget_pane_t10_ParamLimits

0xa2e9,	// (0x00019946) cell_ai5_widget_pane_t10

0xa307,	// (0x00019964) grid_ai5_widget_pane_ParamLimits

0xa3a8,	// (0x00019a05) cell_contacts_ai5_widget_pane_ParamLimits

0xa3a8,	// (0x00019a05) cell_contacts_ai5_widget_pane

0xa58a,	// (0x00019be7) popup_discreet_window_t3_ParamLimits

0xa58a,	// (0x00019be7) popup_discreet_window_t3

0xc756,	// (0x0001bdb3) popup_fshwr2_char_preview_window_ParamLimits

0xc756,	// (0x0001bdb3) popup_fshwr2_char_preview_window

0xf43a,	// (0x0001ea97) tmo_note_info_pane_t1

0xf44f,	// (0x0001eaac) tmo_note_info_pane_t2

0xf466,	// (0x0001eac3) tmo_note_info_pane_t3

0xa709,	// (0x00019d66) tmo_note_info_pane_t4

0xa71b,	// (0x00019d78) tmo_note_info_pane_t5

0x0004,

0xfeb3,	// (0x0001f510) tmo_note_info_pane_t

0xa72d,	// (0x00019d8a) list_tmo_link_pane_ParamLimits

0xa73a,	// (0x00019d97) scroll_pane_cp20_ParamLimits

0x01cd,	// (0x0000f82a) bg_popup_fep_char_preview_window_cp01

0xa77e,	// (0x00019ddb) popup_fshwr2_char_preview_window_t1

0xa78c,	// (0x00019de9) popup_candi_list_indi_window_g1

0xa795,	// (0x00019df2) bg_cell_contacts_ai5_widget_pane

0xa7a1,	// (0x00019dfe) cell_contacts_ai5_widget_pane_g1

0x7f9d,	// (0x000175fa) cell_contacts_ai5_widget_pane_g2

0xa7b6,	// (0x00019e13) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebe,	// (0x0001f51b) cell_contacts_ai5_widget_pane_g

0xa7c2,	// (0x00019e1f) cell_contacts_ai5_widget_pane_t1

0x34b7,	// (0x00012b14) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa839,	// (0x00019e96) settings_container_pane

0x4352,	// (0x000139af) listscroll_set_pane_copy1

0x6b16,	// (0x00016173) scroll_pane_cp121_copy1

0x50ef,	// (0x0001474c) set_content_pane_copy1

0xa845,	// (0x00019ea2) aid_height_set_list_copy1_ParamLimits

0xa845,	// (0x00019ea2) aid_height_set_list_copy1

0x60cd,	// (0x0001572a) aid_size_parent_copy1_ParamLimits

0x60cd,	// (0x0001572a) aid_size_parent_copy1

0xa851,	// (0x00019eae) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa851,	// (0x00019eae) button_value_adjust_pane_cp6_copy1

0x467e,	// (0x00013cdb) list_highlight_pane_cp2_copy1_ParamLimits

0x467e,	// (0x00013cdb) list_highlight_pane_cp2_copy1

0xa865,	// (0x00019ec2) list_set_pane_copy1_ParamLimits

0xa865,	// (0x00019ec2) list_set_pane_copy1

0xa7d4,	// (0x00019e31) main_pane_set_t1_copy1_ParamLimits

0xa7d4,	// (0x00019e31) main_pane_set_t1_copy1

0xa80e,	// (0x00019e6b) main_pane_set_t2_copy1_ParamLimits

0xa80e,	// (0x00019e6b) main_pane_set_t2_copy1

0xa912,	// (0x00019f6f) main_pane_set_t3_copy1

0xa920,	// (0x00019f7d) main_pane_set_t4_copy1

0xa82d,	// (0x00019e8a) set_content_pane_g1_copy1_ParamLimits

0xa82d,	// (0x00019e8a) set_content_pane_g1_copy1

0xa92e,	// (0x00019f8b) setting_code_pane_copy1

0xa936,	// (0x00019f93) setting_slider_graphic_pane_copy1

0xa936,	// (0x00019f93) setting_slider_pane_copy1

0xa936,	// (0x00019f93) setting_text_pane_copy1

0xa936,	// (0x00019f93) setting_volume_pane_copy1

0xa92e,	// (0x00019f8b) settings_code_pane_cp2_copy1

0xa93e,	// (0x00019f9b) settings_code_pane_cp_copy1_ParamLimits

0xa93e,	// (0x00019f9b) settings_code_pane_cp_copy1

0x23a9,	// (0x00011a06) volume_set_pane_copy1

0xa952,	// (0x00019faf) volume_set_pane_g10_copy1

0xa95a,	// (0x00019fb7) volume_set_pane_g1_copy1

0xa962,	// (0x00019fbf) volume_set_pane_g2_copy1

0xa96a,	// (0x00019fc7) volume_set_pane_g3_copy1

0xa972,	// (0x00019fcf) volume_set_pane_g4_copy1

0xa97a,	// (0x00019fd7) volume_set_pane_g5_copy1

0xa982,	// (0x00019fdf) volume_set_pane_g6_copy1

0xa98a,	// (0x00019fe7) volume_set_pane_g7_copy1

0xa992,	// (0x00019fef) volume_set_pane_g8_copy1

0xa99a,	// (0x00019ff7) volume_set_pane_g9_copy1

0x268d,	// (0x00011cea) bg_set_opt_pane_cp_copy1_ParamLimits

0x268d,	// (0x00011cea) bg_set_opt_pane_cp_copy1

0x23b1,	// (0x00011a0e) setting_slider_pane_t1_copy1_ParamLimits

0x23b1,	// (0x00011a0e) setting_slider_pane_t1_copy1

0x23cf,	// (0x00011a2c) setting_slider_pane_t2_copy1_ParamLimits

0x23cf,	// (0x00011a2c) setting_slider_pane_t2_copy1

0x23e9,	// (0x00011a46) setting_slider_pane_t3_copy1_ParamLimits

0x23e9,	// (0x00011a46) setting_slider_pane_t3_copy1

0x2401,	// (0x00011a5e) slider_set_pane_copy1_ParamLimits

0x2401,	// (0x00011a5e) slider_set_pane_copy1

0x35da,	// (0x00012c37) set_opt_bg_pane_g1_copy2

0x35e2,	// (0x00012c3f) set_opt_bg_pane_g2_copy2

0xa9a2,	// (0x00019fff) set_opt_bg_pane_g3_copy2

0x35f2,	// (0x00012c4f) set_opt_bg_pane_g4_copy2

0x35fa,	// (0x00012c57) set_opt_bg_pane_g5_copy2

0x3602,	// (0x00012c5f) set_opt_bg_pane_g6_copy2

0xa9ac,	// (0x0001a009) set_opt_bg_pane_g7_copy2

0xa9b4,	// (0x0001a011) set_opt_bg_pane_g8_copy2

0xa9be,	// (0x0001a01b) set_opt_bg_pane_g9_copy2

0x2417,	// (0x00011a74) aid_size_touch_slider_mark_copy1_ParamLimits

0x2417,	// (0x00011a74) aid_size_touch_slider_mark_copy1

0xa9c8,	// (0x0001a025) slider_set_pane_g1_copy1

0x242b,	// (0x00011a88) slider_set_pane_g2_copy1

0x13ff,	// (0x00010a5c) slider_set_pane_g3_copy1_ParamLimits

0x13ff,	// (0x00010a5c) slider_set_pane_g3_copy1

0x1413,	// (0x00010a70) slider_set_pane_g4_copy1_ParamLimits

0x1413,	// (0x00010a70) slider_set_pane_g4_copy1

0x142b,	// (0x00010a88) slider_set_pane_g5_copy1_ParamLimits

0x142b,	// (0x00010a88) slider_set_pane_g5_copy1

0x13ff,	// (0x00010a5c) slider_set_pane_g6_copy1_ParamLimits

0x13ff,	// (0x00010a5c) slider_set_pane_g6_copy1

0x2433,	// (0x00011a90) slider_set_pane_g7_copy1_ParamLimits

0x2433,	// (0x00011a90) slider_set_pane_g7_copy1

0x25ad,	// (0x00011c0a) bg_set_opt_pane_cp2_copy1

0xa9d1,	// (0x0001a02e) setting_slider_graphic_pane_g1_copy1

0xa9da,	// (0x0001a037) setting_slider_graphic_pane_t1_copy1

0xa9ea,	// (0x0001a047) setting_slider_graphic_pane_t2_copy1

0xa9fa,	// (0x0001a057) slider_set_pane_cp_copy1

0xaa0a,	// (0x0001a067) input_focus_pane_cp1_copy1

0xaa13,	// (0x0001a070) list_set_text_pane_copy1

0xaa1b,	// (0x0001a078) setting_text_pane_g1_copy1

0x26e6,	// (0x00011d43) set_text_pane_t1_copy1

0xaa0a,	// (0x0001a067) input_focus_pane_cp2_copy1

0xaa1b,	// (0x0001a078) setting_code_pane_g1_copy1

0xaa24,	// (0x0001a081) setting_code_pane_t1_copy1

0xaa32,	// (0x0001a08f) list_set_graphic_pane_copy1

0x25ad,	// (0x00011c0a) bg_set_opt_pane_cp4_copy1

0x404d,	// (0x000136aa) list_set_graphic_pane_g1_copy1_ParamLimits

0x404d,	// (0x000136aa) list_set_graphic_pane_g1_copy1

0xaa45,	// (0x0001a0a2) list_set_graphic_pane_g2_copy1

0x4065,	// (0x000136c2) list_set_graphic_pane_t1_copy1_ParamLimits

0x4065,	// (0x000136c2) list_set_graphic_pane_t1_copy1

0x775a,	// (0x00016db7) rs_clock_indi_pane_g1

0xaa4d,	// (0x0001a0aa) rs_clock_indi_pane_t1

0xaa5b,	// (0x0001a0b8) rs_indi_pane

0xaa63,	// (0x0001a0c0) rs_indi_pane_g1

0xaa6c,	// (0x0001a0c9) rs_indi_pane_g2

0xaa75,	// (0x0001a0d2) rs_indi_pane_g3

0x0002,

0xfec5,	// (0x0001f522) rs_indi_pane_g

0x4352,	// (0x000139af) bg_popup_preview_window_pane_cp03

0xaa7e,	// (0x0001a0db) popup_fep_tooltip_window_t1

0x85d2,	// (0x00017c2f) popup_note2_window_g2_ParamLimits

0x85d2,	// (0x00017c2f) popup_note2_window_g2

0x0001,

0xfc5e,	// (0x0001f2bb) popup_note2_window_g_ParamLimits

0xfc5e,	// (0x0001f2bb) popup_note2_window_g

0x8bb0,	// (0x0001820d) bg_popup_sub_pane_cp11_ParamLimits

0x8bbd,	// (0x0001821a) cell_ai3_links_pane_g1_ParamLimits

0x8bd4,	// (0x00018231) cell_ai3_links_pane_t1

0x26e6,	// (0x00011d43) set_text_pane_t1_copy1_ParamLimits

0x4263,	// (0x000138c0) cell_graphic_popup_pane_cp2_ParamLimits

0x4263,	// (0x000138c0) cell_graphic_popup_pane_cp2

0xaa8c,	// (0x0001a0e9) cell_graphic_popup_pane_g1_cp2

0x2c87,	// (0x000122e4) cell_graphic_popup_pane_g2_cp2

0xaa94,	// (0x0001a0f1) cell_graphic_popup_pane_g3_cp2

0xaa9c,	// (0x0001a0f9) cell_graphic_popup_pane_t2_cp2

0x2c98,	// (0x000122f5) grid_highlight_pane_cp3_cp2

0x39cb,	// (0x00013028) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x34b7,	// (0x00012b14) main_tmo_pane_ParamLimits

0xe793,	// (0x0001ddf0) popup_tmo_big_image_note_window

0xa122,	// (0x0001977f) cell_ai5_widget_list_pane

0xa12a,	// (0x00019787) cell_ai5_widget_lrg_icon_pane

0xf43a,	// (0x0001ea97) tmo_note_info_pane_t1_ParamLimits

0xf44f,	// (0x0001eaac) tmo_note_info_pane_t2_ParamLimits

0xf466,	// (0x0001eac3) tmo_note_info_pane_t3_ParamLimits

0xa709,	// (0x00019d66) tmo_note_info_pane_t4_ParamLimits

0xa71b,	// (0x00019d78) tmo_note_info_pane_t5_ParamLimits

0xfeb3,	// (0x0001f510) tmo_note_info_pane_t_ParamLimits

0xa839,	// (0x00019e96) settings_container_pane_ParamLimits

0xaa02,	// (0x0001a05f) indicator_popup_pane_cp5

0xaa02,	// (0x0001a05f) indicator_popup_pane_cp6

0xaa32,	// (0x0001a08f) list_set_graphic_pane_copy1_ParamLimits

0x2599,	// (0x00011bf6) bg_popup_window_pane_cp23

0xaaaa,	// (0x0001a107) popup_tmo_big_image_note_window_g1

0xaab4,	// (0x0001a111) popup_tmo_big_image_note_window_t1

0xaac4,	// (0x0001a121) popup_tmo_big_image_note_window_t2

0xaad4,	// (0x0001a131) popup_tmo_big_image_note_window_t3

0x0002,

0xfecc,	// (0x0001f529) popup_tmo_big_image_note_window_t

0x775a,	// (0x00016db7) cell_ai5_widget_lrg_icon_pane_g1

0xaae4,	// (0x0001a141) cell_ai5_widget_lrg_icon_pane_t1

0xaaf2,	// (0x0001a14f) cell_ai5_widget_list_row_pane_ParamLimits

0xaaf2,	// (0x0001a14f) cell_ai5_widget_list_row_pane

0xab09,	// (0x0001a166) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xab09,	// (0x0001a166) cell_ai5_widget_list_row_pane_g1

0xab16,	// (0x0001a173) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xab16,	// (0x0001a173) cell_ai5_widget_list_row_pane_t1

0xab47,	// (0x0001a1a4) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xab47,	// (0x0001a1a4) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed3,	// (0x0001f530) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed3,	// (0x0001f530) cell_ai5_widget_list_row_pane_t

0x01cd,	// (0x0000f82a) main_fep_vtchi_ss_pane

0xab8f,	// (0x0001a1ec) popup_fep_char_pre_window

0xab97,	// (0x0001a1f4) popup_fep_ituss_window

0xf48a,	// (0x0001eae7) popup_fep_vkbss_window

0xf497,	// (0x0001eaf4) grid_vkbss_keypad_pane_ParamLimits

0xf497,	// (0x0001eaf4) grid_vkbss_keypad_pane

0xabfd,	// (0x0001a25a) ituss_keypad_pane

0x2455,	// (0x00011ab2) aid_vkbss_key_offset_ParamLimits

0x2455,	// (0x00011ab2) aid_vkbss_key_offset

0xc856,	// (0x0001beb3) cell_vkbss_key_pane_ParamLimits

0xc856,	// (0x0001beb3) cell_vkbss_key_pane

0xac0c,	// (0x0001a269) bg_cell_vkbss_key_g1_ParamLimits

0xac0c,	// (0x0001a269) bg_cell_vkbss_key_g1

0xf4a7,	// (0x0001eb04) cell_vkbss_key_3p_pane_ParamLimits

0xf4a7,	// (0x0001eb04) cell_vkbss_key_3p_pane

0xf4c1,	// (0x0001eb1e) cell_vkbss_key_g1_ParamLimits

0xf4c1,	// (0x0001eb1e) cell_vkbss_key_g1

0xf4db,	// (0x0001eb38) cell_vkbss_key_t1_ParamLimits

0xf4db,	// (0x0001eb38) cell_vkbss_key_t1

0x2477,	// (0x00011ad4) cell_ituss_key_pane_ParamLimits

0x2477,	// (0x00011ad4) cell_ituss_key_pane

0xac6b,	// (0x0001a2c8) bg_cell_ituss_key_g1_ParamLimits

0xac6b,	// (0x0001a2c8) bg_cell_ituss_key_g1

0xac77,	// (0x0001a2d4) cell_ituss_key_pane_g1_ParamLimits

0xac77,	// (0x0001a2d4) cell_ituss_key_pane_g1

0x2488,	// (0x00011ae5) cell_ituss_key_pane_g2_ParamLimits

0x2488,	// (0x00011ae5) cell_ituss_key_pane_g2

0x0002,

0xfeda,	// (0x0001f537) cell_ituss_key_pane_g_ParamLimits

0xfeda,	// (0x0001f537) cell_ituss_key_pane_g

0x24b4,	// (0x00011b11) cell_ituss_key_t1_ParamLimits

0x24b4,	// (0x00011b11) cell_ituss_key_t1

0x24ee,	// (0x00011b4b) cell_ituss_key_t2_ParamLimits

0x24ee,	// (0x00011b4b) cell_ituss_key_t2

0x251f,	// (0x00011b7c) cell_ituss_key_t3_ParamLimits

0x251f,	// (0x00011b7c) cell_ituss_key_t3

0x24ee,	// (0x00011b4b) cell_ituss_key_t4_ParamLimits

0x24ee,	// (0x00011b4b) cell_ituss_key_t4

0x0004,

0xfee1,	// (0x0001f53e) cell_ituss_key_t_ParamLimits

0xfee1,	// (0x0001f53e) cell_ituss_key_t

0xaca3,	// (0x0001a300) cell_vkbss_key_3p_pane_g1

0xacab,	// (0x0001a308) cell_vkbss_key_3p_pane_g2

0xacb3,	// (0x0001a310) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x0001f549) cell_vkbss_key_3p_pane_g

0x4352,	// (0x000139af) bg_popup_fep_char_preview_window_cp02

0xacbb,	// (0x0001a318) popup_fep_char_pre_window_t1

0xf37e,	// (0x0001e9db) main_ai5_sk_pane

0xa795,	// (0x00019df2) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa7a1,	// (0x00019dfe) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7f9d,	// (0x000175fa) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa7b6,	// (0x00019e13) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebe,	// (0x0001f51b) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa7c2,	// (0x00019e1f) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x34b7,	// (0x00012b14) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf506,	// (0x0001eb63) main_ai5_sk_pane_g1

0x5183,	// (0x000147e0) popup_query_code_window_g1

0xf47b,	// (0x0001ead8) popup_fep_vkb_icf_pane

0xabd7,	// (0x0001a234) popup_fep_vtchi_icf_pane

0xacd2,	// (0x0001a32f) bg_icf_pane

0xacde,	// (0x0001a33b) list_vkb_icf_pane

0xaced,	// (0x0001a34a) bg_icf_pane_cp01

0xad00,	// (0x0001a35d) vtchi_icf_list_pane

0xf50f,	// (0x0001eb6c) list_vkb_icf_pane_t1_ParamLimits

0xf50f,	// (0x0001eb6c) list_vkb_icf_pane_t1

0xad31,	// (0x0001a38e) vtchi_icf_list_pane_t1_ParamLimits

0xad31,	// (0x0001a38e) vtchi_icf_list_pane_t1

0xab97,	// (0x0001a1f4) popup_fep_ituss_window_ParamLimits

0xabd7,	// (0x0001a234) popup_fep_vtchi_icf_pane_ParamLimits

0xabfd,	// (0x0001a25a) ituss_keypad_pane_ParamLimits

0x2449,	// (0x00011aa6) ituss_sks_pane

0xacd2,	// (0x0001a32f) bg_icf_pane_ParamLimits

0xab6f,	// (0x0001a1cc) icf_edit_indi_pane_ParamLimits

0xab6f,	// (0x0001a1cc) icf_edit_indi_pane

0xacde,	// (0x0001a33b) list_vkb_icf_pane_ParamLimits

0xaced,	// (0x0001a34a) bg_icf_pane_cp01_ParamLimits

0xab82,	// (0x0001a1df) icf_edit_indi_pane_cp01_ParamLimits

0xab82,	// (0x0001a1df) icf_edit_indi_pane_cp01

0xad08,	// (0x0001a365) vtchi_query_pane

0x9f31,	// (0x0001958e) icf_edit_indi_pane_g1_ParamLimits

0x9f31,	// (0x0001958e) icf_edit_indi_pane_g1

0xf525,	// (0x0001eb82) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0001eb82) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x0001f561) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x0001f561) icf_edit_indi_pane_g

0xf537,	// (0x0001eb94) icf_edit_indi_pane_t1

0xad4b,	// (0x0001a3a8) bg_input_focus_pane_cp042

0x2e6b,	// (0x000124c8) vtchi_button_pane

0xad54,	// (0x0001a3b1) vtchi_query_pane_t1

0xad62,	// (0x0001a3bf) vtchi_query_pane_t2

0xad70,	// (0x0001a3cd) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x0001f550) vtchi_query_pane_t

0x01cd,	// (0x0000f82a) bg_button_pane_cp13

0xad7e,	// (0x0001a3db) vtchi_button_pane_g1

0x2562,	// (0x00011bbf) ituss_sks_pane_g1

0x256d,	// (0x00011bca) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x0001f557) ituss_sks_pane_g

0xad86,	// (0x0001a3e3) ituss_sks_pane_t1

0xad94,	// (0x0001a3f1) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x0001f55c) ituss_sks_pane_t

0x7196,	// (0x000167f3) indicator_nsta_pane_cp_g1

0x719e,	// (0x000167fb) indicator_nsta_pane_cp_g2

0x71a6,	// (0x00016803) indicator_nsta_pane_cp_g3

0x7196,	// (0x000167f3) indicator_nsta_pane_cp_g4

0x719e,	// (0x000167fb) indicator_nsta_pane_cp_g5

0x71a6,	// (0x00016803) indicator_nsta_pane_cp_g6

0x0005,

0xfa9c,	// (0x0001f0f9) indicator_nsta_pane_cp_g

0xf196,	// (0x0001e7f3) cell_graphic2_pane_t2_ParamLimits

0xf196,	// (0x0001e7f3) cell_graphic2_pane_t2

0x0001,

0xfdb5,	// (0x0001f412) cell_graphic2_pane_t_ParamLimits

0xfdb5,	// (0x0001f412) cell_graphic2_pane_t

0xf1ca,	// (0x0001e827) cell_graphic2_control_pane_t1

0xd2b2,	// (0x0001c90f) signal_pane_g3_ParamLimits

0xd2b2,	// (0x0001c90f) signal_pane_g3

0xd2c6,	// (0x0001c923) signal_pane_g4_ParamLimits

0xd2c6,	// (0x0001c923) signal_pane_g4

0xab59,	// (0x0001a1b6) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xab59,	// (0x0001a1b6) cell_ai5_widget_list_row_pane_t3

0xac91,	// (0x0001a2ee) cell_ituss_key_pane_t1_ParamLimits

0xac91,	// (0x0001a2ee) cell_ituss_key_pane_t1

0x4d8b,	// (0x000143e8) form_field_data_wide_pane_vc_t2_ParamLimits

0x4d8b,	// (0x000143e8) form_field_data_wide_pane_vc_t2

0x4d9f,	// (0x000143fc) form_field_data_wide_pane_vc_t3_ParamLimits

0x4d9f,	// (0x000143fc) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x0001ee5c) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x0001ee5c) form_field_data_wide_pane_vc_t

0x6e5d,	// (0x000164ba) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6e5d,	// (0x000164ba) form_field_slider_wide_pane_vc_t3

0x6f3b,	// (0x00016598) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6f3b,	// (0x00016598) form_field_popup_wide_pane_vc_t2

0x6f52,	// (0x000165af) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6f52,	// (0x000165af) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa8b,	// (0x0001f0e8) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa8b,	// (0x0001f0e8) form_field_popup_wide_pane_vc_t

0xc6c0,	// (0x0001bd1d) aid_fshwr2_btn_pane_ParamLimits

0xc6d4,	// (0x0001bd31) aid_fshwr2_syb_pane_ParamLimits

0xc6e8,	// (0x0001bd45) aid_fshwr2_txt_pane_ParamLimits

0x1a6f,	// (0x000110cc) fshwr2_bg_pane_ParamLimits

0xc6f8,	// (0x0001bd55) fshwr2_func_candi_pane_ParamLimits

0xc718,	// (0x0001bd75) fshwr2_hwr_syb_pane_ParamLimits

0xc73a,	// (0x0001bd97) fshwr2_icf_pane_ParamLimits

0x6dc3,	// (0x00016420) list_double_graphic_pane_vc_g4_ParamLimits

0x6dc3,	// (0x00016420) list_double_graphic_pane_vc_g4

0x24a8,	// (0x00011b05) cell_ituss_key_pane_g3_ParamLimits

0x24a8,	// (0x00011b05) cell_ituss_key_pane_g3

0x2550,	// (0x00011bad) cell_ituss_key_t5_ParamLimits

0x2550,	// (0x00011bad) cell_ituss_key_t5

0xf48a,	// (0x0001eae7) popup_fep_vkbss_window_ParamLimits

0xa0b1,	// (0x0001970e) aid_cell_ai5_quarter

0xf537,	// (0x0001eb94) icf_edit_indi_pane_t1_ParamLimits

0x29d8,	// (0x00012035) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x29d8,	// (0x00012035) aid_tch_indicator_popup_pane_cp2

0x29eb,	// (0x00012048) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x29eb,	// (0x00012048) aid_tch_query_popup_data_pane_cp2

0x512b,	// (0x00014788) aid_tch_query_popup_pane_ParamLimits

0x512b,	// (0x00014788) aid_tch_query_popup_pane

0x512b,	// (0x00014788) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x512b,	// (0x00014788) aid_tch_query_popup_data_pane_cp1

0xa5f8,	// (0x00019c55) cell_fshwr2_syb_bg_pane_ParamLimits

0xc82d,	// (0x0001be8a) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xc840,	// (0x0001be9d) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf47b,	// (0x0001ead8) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal

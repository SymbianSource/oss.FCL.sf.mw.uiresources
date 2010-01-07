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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00026f3e };

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
0x782e,	// (0x0002e76c) Screen

0x783a,	// (0x0002e778) application_window_ParamLimits

0x783a,	// (0x0002e778) application_window

0xb905,	// (0x00032843) screen_g1

0x7872,	// (0x0002e7b0) area_bottom_pane_ParamLimits

0x7872,	// (0x0002e7b0) area_bottom_pane

0x046f,	// (0x000273ad) area_top_pane_ParamLimits

0x046f,	// (0x000273ad) area_top_pane

0x050d,	// (0x0002744b) main_pane_ParamLimits

0x050d,	// (0x0002744b) main_pane

0xb90f,	// (0x0003284d) misc_graphics

0x97cb,	// (0x00030709) battery_pane_ParamLimits

0x97cb,	// (0x00030709) battery_pane

0xd65c,	// (0x0003459a) bg_status_flat_pane_g8

0xd664,	// (0x000345a2) bg_status_flat_pane_g9

0xcd8d,	// (0x00033ccb) context_pane_ParamLimits

0xcd8d,	// (0x00033ccb) context_pane

0x9936,	// (0x00030874) navi_pane_ParamLimits

0x9936,	// (0x00030874) navi_pane

0x99ad,	// (0x000308eb) signal_pane_ParamLimits

0x99ad,	// (0x000308eb) signal_pane

0x0008,

0xf8ad,	// (0x000367eb) bg_status_flat_pane_g

0x9a3d,	// (0x0003097b) status_pane_g1_ParamLimits

0x9a3d,	// (0x0003097b) status_pane_g1

0x9a53,	// (0x00030991) status_pane_g2_ParamLimits

0x9a53,	// (0x00030991) status_pane_g2

0xcdf2,	// (0x00033d30) status_pane_g3_ParamLimits

0xcdf2,	// (0x00033d30) status_pane_g3

0x0004,

0xf7e0,	// (0x0003671e) status_pane_g_ParamLimits

0xf7e0,	// (0x0003671e) status_pane_g

0x9a5f,	// (0x0003099d) title_pane_ParamLimits

0x9a5f,	// (0x0003099d) title_pane

0x9ac0,	// (0x000309fe) uni_indicator_pane_ParamLimits

0x9ac0,	// (0x000309fe) uni_indicator_pane

0xcbbc,	// (0x00033afa) bg_list_pane_ParamLimits

0xcbbc,	// (0x00033afa) bg_list_pane

0x8eea,	// (0x0002fe28) find_pane

0x8ef2,	// (0x0002fe30) listscroll_app_pane_ParamLimits

0x8ef2,	// (0x0002fe30) listscroll_app_pane

0xcbdc,	// (0x00033b1a) listscroll_form_pane

0x8efe,	// (0x0002fe3c) listscroll_gen_pane_ParamLimits

0x8efe,	// (0x0002fe3c) listscroll_gen_pane

0xcbdc,	// (0x00033b1a) listscroll_set_pane

0xda79,	// (0x000349b7) main_idle_act_pane

0xc99a,	// (0x000338d8) main_idle_trad_pane

0xc99a,	// (0x000338d8) main_list_empty_pane

0xc0cd,	// (0x0003300b) main_midp_pane

0xcbf6,	// (0x00033b34) main_pane_g1_ParamLimits

0xcbf6,	// (0x00033b34) main_pane_g1

0x8f12,	// (0x0002fe50) popup_ai_message_window_ParamLimits

0x8f12,	// (0x0002fe50) popup_ai_message_window

0x8fa3,	// (0x0002fee1) popup_fep_china_uni_window_ParamLimits

0x8fa3,	// (0x0002fee1) popup_fep_china_uni_window

0xcc28,	// (0x00033b66) popup_fep_japan_candidate_window_ParamLimits

0xcc28,	// (0x00033b66) popup_fep_japan_candidate_window

0xcc48,	// (0x00033b86) popup_fep_japan_predictive_window_ParamLimits

0xcc48,	// (0x00033b86) popup_fep_japan_predictive_window

0x8fff,	// (0x0002ff3d) popup_find_window

0x901c,	// (0x0002ff5a) popup_grid_graphic_window_ParamLimits

0x901c,	// (0x0002ff5a) popup_grid_graphic_window

0xcc78,	// (0x00033bb6) popup_large_graphic_colour_window

0x90b4,	// (0x0002fff2) popup_menu_window_ParamLimits

0x90b4,	// (0x0002fff2) popup_menu_window

0x926e,	// (0x000301ac) popup_note_image_window

0x9234,	// (0x00030172) popup_note_wait_window_ParamLimits

0x9234,	// (0x00030172) popup_note_wait_window

0x9286,	// (0x000301c4) popup_note_window_ParamLimits

0x9286,	// (0x000301c4) popup_note_window

0x932c,	// (0x0003026a) popup_query_code_window_ParamLimits

0x932c,	// (0x0003026a) popup_query_code_window

0xcc9e,	// (0x00033bdc) popup_query_data_code_window_ParamLimits

0xcc9e,	// (0x00033bdc) popup_query_data_code_window

0x9523,	// (0x00030461) popup_query_data_window_ParamLimits

0x9523,	// (0x00030461) popup_query_data_window

0x9599,	// (0x000304d7) popup_query_sat_info_window_ParamLimits

0x9599,	// (0x000304d7) popup_query_sat_info_window

0x9630,	// (0x0003056e) popup_snote_single_graphic_window_ParamLimits

0x9630,	// (0x0003056e) popup_snote_single_graphic_window

0x9630,	// (0x0003056e) popup_snote_single_text_window_ParamLimits

0x9630,	// (0x0003056e) popup_snote_single_text_window

0xccbb,	// (0x00033bf9) popup_sub_window_general

0xcd03,	// (0x00033c41) popup_window_general_ParamLimits

0xcd03,	// (0x00033c41) popup_window_general

0xcd18,	// (0x00033c56) power_save_pane

0x7fcf,	// (0x0002ef0d) control_pane_g1_ParamLimits

0x7fcf,	// (0x0002ef0d) control_pane_g1

0x1268,	// (0x000281a6) control_pane_g2_ParamLimits

0x1268,	// (0x000281a6) control_pane_g2

0xcb96,	// (0x00033ad4) control_pane_g3_ParamLimits

0xcb96,	// (0x00033ad4) control_pane_g3

0x0007,

0xf7c8,	// (0x00036706) control_pane_g_ParamLimits

0xf7c8,	// (0x00036706) control_pane_g

0x800e,	// (0x0002ef4c) control_pane_t1_ParamLimits

0x800e,	// (0x0002ef4c) control_pane_t1

0x806c,	// (0x0002efaa) control_pane_t2_ParamLimits

0x806c,	// (0x0002efaa) control_pane_t2

0x0002,

0xf7d9,	// (0x00036717) control_pane_t_ParamLimits

0xf7d9,	// (0x00036717) control_pane_t

0xcab7,	// (0x000339f5) navi_navi_volume_pane_cp1

0xcac0,	// (0x000339fe) status_small_icon_pane

0xcac8,	// (0x00033a06) status_small_pane_g1_ParamLimits

0xcac8,	// (0x00033a06) status_small_pane_g1

0xcafc,	// (0x00033a3a) status_small_pane_g2_ParamLimits

0xcafc,	// (0x00033a3a) status_small_pane_g2

0xcb08,	// (0x00033a46) status_small_pane_g3_ParamLimits

0xcb08,	// (0x00033a46) status_small_pane_g3

0xcb14,	// (0x00033a52) status_small_pane_g4_ParamLimits

0xcb14,	// (0x00033a52) status_small_pane_g4

0xcb20,	// (0x00033a5e) status_small_pane_g5_ParamLimits

0xcb20,	// (0x00033a5e) status_small_pane_g5

0xcb2f,	// (0x00033a6d) status_small_pane_g6_ParamLimits

0xcb2f,	// (0x00033a6d) status_small_pane_g6

0x0007,

0xf7b7,	// (0x000366f5) status_small_pane_g_ParamLimits

0xf7b7,	// (0x000366f5) status_small_pane_g

0xcb5f,	// (0x00033a9d) status_small_pane_t1

0xcb82,	// (0x00033ac0) status_small_wait_pane_ParamLimits

0xcb82,	// (0x00033ac0) status_small_wait_pane

0x8d40,	// (0x0002fc7e) aid_levels_signal_ParamLimits

0x8d40,	// (0x0002fc7e) aid_levels_signal

0x8d58,	// (0x0002fc96) signal_pane_g1_ParamLimits

0x8d58,	// (0x0002fc96) signal_pane_g1

0x8d73,	// (0x0002fcb1) signal_pane_g2_ParamLimits

0x8d73,	// (0x0002fcb1) signal_pane_g2

0x0001,

0xf74c,	// (0x0003668a) signal_pane_g_ParamLimits

0xf74c,	// (0x0003668a) signal_pane_g

0xc500,	// (0x0003343e) context_pane_g1

0x8814,	// (0x0002f752) title_pane_g1

0x8849,	// (0x0002f787) title_pane_t1

0xb925,	// (0x00032863) title_pane_t2

0xb94b,	// (0x00032889) title_pane_t3

0x0002,

0xf59b,	// (0x000364d9) title_pane_t

0x9ae8,	// (0x00030a26) aid_levels_battery_ParamLimits

0x9ae8,	// (0x00030a26) aid_levels_battery

0x9b04,	// (0x00030a42) battery_pane_g1_ParamLimits

0x9b04,	// (0x00030a42) battery_pane_g1

0x9b21,	// (0x00030a5f) battery_pane_g2_ParamLimits

0x9b21,	// (0x00030a5f) battery_pane_g2

0x0001,

0xf7eb,	// (0x00036729) battery_pane_g_ParamLimits

0xf7eb,	// (0x00036729) battery_pane_g

0x9d26,	// (0x00030c64) uni_indicator_pane_g1

0x9d3b,	// (0x00030c79) uni_indicator_pane_g2

0x9d50,	// (0x00030c8e) uni_indicator_pane_g3

0x0005,

0xf955,	// (0x00036893) uni_indicator_pane_g

0xc80c,	// (0x0003374a) navi_icon_pane_ParamLimits

0xc80c,	// (0x0003374a) navi_icon_pane

0xc755,	// (0x00033693) navi_midp_pane

0xc828,	// (0x00033766) navi_navi_pane

0xc832,	// (0x00033770) navi_text_pane_ParamLimits

0xc832,	// (0x00033770) navi_text_pane

0xb905,	// (0x00032843) status_small_wait_pane_g1

0xbc32,	// (0x00032b70) status_small_wait_pane_g2

0x0001,

0xf950,	// (0x0003688e) status_small_wait_pane_g

0xdc0b,	// (0x00034b49) navi_navi_icon_text_pane

0xdc13,	// (0x00034b51) navi_navi_pane_g1_ParamLimits

0xdc13,	// (0x00034b51) navi_navi_pane_g1

0xdc25,	// (0x00034b63) navi_navi_pane_g2_ParamLimits

0xdc25,	// (0x00034b63) navi_navi_pane_g2

0x0001,

0xf91e,	// (0x0003685c) navi_navi_pane_g_ParamLimits

0xf91e,	// (0x0003685c) navi_navi_pane_g

0xdc37,	// (0x00034b75) navi_navi_tabs_pane

0xdc40,	// (0x00034b7e) navi_navi_text_pane

0xdc0b,	// (0x00034b49) navi_navi_volume_pane

0x9ce7,	// (0x00030c25) navi_text_pane_t1

0x9cdb,	// (0x00030c19) navi_icon_pane_g1

0xdb4c,	// (0x00034a8a) navi_navi_text_pane_t1

0x82d3,	// (0x0002f211) navi_navi_volume_pane_g1

0x82db,	// (0x0002f219) volume_small_pane

0x9c37,	// (0x00030b75) navi_navi_icon_text_pane_g1

0x9c3f,	// (0x00030b7d) navi_navi_icon_text_pane_t1

0xc828,	// (0x00033766) navi_tabs_2_long_pane

0xc828,	// (0x00033766) navi_tabs_2_pane

0xc828,	// (0x00033766) navi_tabs_3_long_pane

0xc828,	// (0x00033766) navi_tabs_3_pane

0xc828,	// (0x00033766) navi_tabs_4_pane

0x82b3,	// (0x0002f1f1) tabs_2_active_pane_ParamLimits

0x82b3,	// (0x0002f1f1) tabs_2_active_pane

0x82c3,	// (0x0002f201) tabs_2_passive_pane_ParamLimits

0x82c3,	// (0x0002f201) tabs_2_passive_pane

0x8281,	// (0x0002f1bf) tabs_3_active_pane_ParamLimits

0x8281,	// (0x0002f1bf) tabs_3_active_pane

0x8291,	// (0x0002f1cf) tabs_3_passive_pane_ParamLimits

0x8291,	// (0x0002f1cf) tabs_3_passive_pane

0x82a2,	// (0x0002f1e0) tabs_3_passive_pane_cp_ParamLimits

0x82a2,	// (0x0002f1e0) tabs_3_passive_pane_cp

0x823d,	// (0x0002f17b) tabs_4_active_pane_ParamLimits

0x823d,	// (0x0002f17b) tabs_4_active_pane

0x824e,	// (0x0002f18c) tabs_4_passive_pane_ParamLimits

0x824e,	// (0x0002f18c) tabs_4_passive_pane

0x825f,	// (0x0002f19d) tabs_4_passive_pane_cp_ParamLimits

0x825f,	// (0x0002f19d) tabs_4_passive_pane_cp

0x8270,	// (0x0002f1ae) tabs_4_passive_pane_cp2_ParamLimits

0x8270,	// (0x0002f1ae) tabs_4_passive_pane_cp2

0x821d,	// (0x0002f15b) tabs_2_long_active_pane_ParamLimits

0x821d,	// (0x0002f15b) tabs_2_long_active_pane

0x822d,	// (0x0002f16b) tabs_2_long_passive_pane_ParamLimits

0x822d,	// (0x0002f16b) tabs_2_long_passive_pane

0x81ea,	// (0x0002f128) tabs_3_long_active_pane_ParamLimits

0x81ea,	// (0x0002f128) tabs_3_long_active_pane

0x81fb,	// (0x0002f139) tabs_3_long_passive_pane_ParamLimits

0x81fb,	// (0x0002f139) tabs_3_long_passive_pane

0x820c,	// (0x0002f14a) tabs_3_long_passive_pane_cp_ParamLimits

0x820c,	// (0x0002f14a) tabs_3_long_passive_pane_cp

0x1dfc,	// (0x00028d3a) volume_small_pane_g1

0x8199,	// (0x0002f0d7) volume_small_pane_g2

0x81a2,	// (0x0002f0e0) volume_small_pane_g3

0x81ab,	// (0x0002f0e9) volume_small_pane_g4

0x81b4,	// (0x0002f0f2) volume_small_pane_g5

0x81bd,	// (0x0002f0fb) volume_small_pane_g6

0x81c6,	// (0x0002f104) volume_small_pane_g7

0x81cf,	// (0x0002f10d) volume_small_pane_g8

0x81d8,	// (0x0002f116) volume_small_pane_g9

0x81e1,	// (0x0002f11f) volume_small_pane_g10

0x0009,

0xf8ea,	// (0x00036828) volume_small_pane_g

0xb95d,	// (0x0003289b) bg_active_tab_pane_cp2_ParamLimits

0xb95d,	// (0x0003289b) bg_active_tab_pane_cp2

0x88d5,	// (0x0002f813) tabs_3_active_pane_g1

0x88dd,	// (0x0002f81b) tabs_3_active_pane_t1

0xb95d,	// (0x0003289b) bg_passive_tab_pane_cp2_ParamLimits

0xb95d,	// (0x0003289b) bg_passive_tab_pane_cp2

0x88d5,	// (0x0002f813) tabs_3_passive_pane_g1

0x88dd,	// (0x0002f81b) tabs_3_passive_pane_t1

0xb95d,	// (0x0003289b) bg_active_tab_pane_cp3_ParamLimits

0xb95d,	// (0x0003289b) bg_active_tab_pane_cp3

0x88ef,	// (0x0002f82d) tabs_4_active_pane_g1

0x88f7,	// (0x0002f835) tabs_4_active_pane_t1

0xb95d,	// (0x0003289b) bg_passive_tab_pane_cp3_ParamLimits

0xb95d,	// (0x0003289b) bg_passive_tab_pane_cp3

0x88ef,	// (0x0002f82d) tabs_4_1_passive_pane_g1

0x88f7,	// (0x0002f835) tabs_4_1_passive_pane_t1

0xc0cd,	// (0x0003300b) list_highlight_pane_cp2

0x9dd9,	// (0x00030d17) list_set_pane_ParamLimits

0x9dd9,	// (0x00030d17) list_set_pane

0x9e73,	// (0x00030db1) main_pane_set_t1_ParamLimits

0x9e73,	// (0x00030db1) main_pane_set_t1

0x9e93,	// (0x00030dd1) main_pane_set_t2_ParamLimits

0x9e93,	// (0x00030dd1) main_pane_set_t2

0x9ea7,	// (0x00030de5) main_pane_set_t3_ParamLimits

0x9ea7,	// (0x00030de5) main_pane_set_t3

0x9eb9,	// (0x00030df7) main_pane_set_t4_ParamLimits

0x9eb9,	// (0x00030df7) main_pane_set_t4

0x0003,

0xf9ba,	// (0x000368f8) main_pane_set_t_ParamLimits

0xf9ba,	// (0x000368f8) main_pane_set_t

0x9ecb,	// (0x00030e09) setting_code_pane

0x9ed5,	// (0x00030e13) setting_slider_graphic_pane

0x9ed5,	// (0x00030e13) setting_slider_pane

0x9ed5,	// (0x00030e13) setting_text_pane

0x9ed5,	// (0x00030e13) setting_volume_pane

0x0818,	// (0x00027756) volume_set_pane

0xb96b,	// (0x000328a9) bg_set_opt_pane_cp

0x0820,	// (0x0002775e) setting_slider_pane_t1

0x0839,	// (0x00027777) setting_slider_pane_t2

0x0853,	// (0x00027791) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x000364e0) setting_slider_pane_t

0x086b,	// (0x000277a9) slider_set_pane

0xb90f,	// (0x0003284d) bg_set_opt_pane_cp2

0xb979,	// (0x000328b7) setting_slider_graphic_pane_g1

0x0881,	// (0x000277bf) setting_slider_graphic_pane_t1

0x0891,	// (0x000277cf) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x000364e7) setting_slider_graphic_pane_t

0x08a1,	// (0x000277df) slider_set_pane_cp

0xb90f,	// (0x0003284d) input_focus_pane_cp1

0xe08c,	// (0x00034fca) list_set_text_pane

0xb905,	// (0x00032843) setting_text_pane_g1

0xb90f,	// (0x0003284d) input_focus_pane_cp2

0xb905,	// (0x00032843) setting_code_pane_g1

0xb982,	// (0x000328c0) setting_code_pane_t1

0x4117,	// (0x0002b055) set_text_pane_t1_ParamLimits

0x4117,	// (0x0002b055) set_text_pane_t1

0xbfdc,	// (0x00032f1a) set_opt_bg_pane_g1

0xbfe4,	// (0x00032f22) set_opt_bg_pane_g2

0xe066,	// (0x00034fa4) set_opt_bg_pane_g3

0xbff4,	// (0x00032f32) set_opt_bg_pane_g4

0xbffc,	// (0x00032f3a) set_opt_bg_pane_g5

0xc004,	// (0x00032f42) set_opt_bg_pane_g6

0xe070,	// (0x00034fae) set_opt_bg_pane_g7

0xe078,	// (0x00034fb6) set_opt_bg_pane_g8

0xe082,	// (0x00034fc0) set_opt_bg_pane_g9

0x0008,

0xf9a7,	// (0x000368e5) set_opt_bg_pane_g

0xe059,	// (0x00034f97) slider_set_pane_g1

0x2118,	// (0x00029056) slider_set_pane_g2

0x0006,

0xf998,	// (0x000368d6) slider_set_pane_g

0x208f,	// (0x00028fcd) volume_set_pane_g1

0x2097,	// (0x00028fd5) volume_set_pane_g2

0x209f,	// (0x00028fdd) volume_set_pane_g3

0x20a7,	// (0x00028fe5) volume_set_pane_g4

0x20af,	// (0x00028fed) volume_set_pane_g5

0x20b7,	// (0x00028ff5) volume_set_pane_g6

0x20bf,	// (0x00028ffd) volume_set_pane_g7

0x20c7,	// (0x00029005) volume_set_pane_g8

0x20cf,	// (0x0002900d) volume_set_pane_g9

0x20d7,	// (0x00029015) volume_set_pane_g10

0x0009,

0xf970,	// (0x000368ae) volume_set_pane_g

0x8909,	// (0x0002f847) indicator_pane_ParamLimits

0x8909,	// (0x0002f847) indicator_pane

0x8931,	// (0x0002f86f) main_idle_pane_g2_ParamLimits

0x8931,	// (0x0002f86f) main_idle_pane_g2

0x8969,	// (0x0002f8a7) main_pane_idle_g1_ParamLimits

0x8969,	// (0x0002f8a7) main_pane_idle_g1

0xb990,	// (0x000328ce) popup_clock_digital_analogue_window_ParamLimits

0xb990,	// (0x000328ce) popup_clock_digital_analogue_window

0x8990,	// (0x0002f8ce) soft_indicator_pane_ParamLimits

0x8990,	// (0x0002f8ce) soft_indicator_pane

0x89aa,	// (0x0002f8e8) wallpaper_pane_ParamLimits

0x89aa,	// (0x0002f8e8) wallpaper_pane

0xb905,	// (0x00032843) wallpaper_pane_g1

0x89bc,	// (0x0002f8fa) indicator_pane_g1_ParamLimits

0x89bc,	// (0x0002f8fa) indicator_pane_g1

0xe1da,	// (0x00035118) navi_navi_icon_text_pane_srt_g1

0xb9be,	// (0x000328fc) soft_indicator_pane_t1

0xb9d8,	// (0x00032916) aid_ps_area_pane

0x89d2,	// (0x0002f910) aid_ps_clock_pane

0xb9e9,	// (0x00032927) aid_ps_indicator_pane

0xb9f5,	// (0x00032933) indicator_ps_pane_ParamLimits

0xb9f5,	// (0x00032933) indicator_ps_pane

0xba04,	// (0x00032942) power_save_pane_g1_ParamLimits

0xba04,	// (0x00032942) power_save_pane_g1

0xba10,	// (0x0003294e) power_save_pane_g2_ParamLimits

0xba10,	// (0x0003294e) power_save_pane_g2

0x0363,	// (0x000272a1) aid_navinavi_width_pane

0xb9d8,	// (0x00032916) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x000364ec) power_save_pane_g_ParamLimits

0xf5ae,	// (0x000364ec) power_save_pane_g

0xba1e,	// (0x0003295c) power_save_pane_t1_ParamLimits

0xba1e,	// (0x0003295c) power_save_pane_t1

0x89d2,	// (0x0002f910) aid_ps_clock_pane_ParamLimits

0xb9e9,	// (0x00032927) aid_ps_indicator_pane_ParamLimits

0xba30,	// (0x0003296e) power_save_pane_t4_ParamLimits

0xba30,	// (0x0003296e) power_save_pane_t4

0x0001,

0xf5b3,	// (0x000364f1) power_save_pane_t_ParamLimits

0xf5b3,	// (0x000364f1) power_save_pane_t

0xba5a,	// (0x00032998) power_save_t3_ParamLimits

0xba5a,	// (0x00032998) power_save_t3

0xba45,	// (0x00032983) power_save_t2_ParamLimits

0xba45,	// (0x00032983) power_save_t2

0xba6f,	// (0x000329ad) indicator_ps_pane_g1

0x89e0,	// (0x0002f91e) ai_gene_pane_ParamLimits

0x89e0,	// (0x0002f91e) ai_gene_pane

0x89f7,	// (0x0002f935) ai_links_pane_ParamLimits

0x89f7,	// (0x0002f935) ai_links_pane

0x8a0f,	// (0x0002f94d) indicator_pane_cp1_ParamLimits

0x8a0f,	// (0x0002f94d) indicator_pane_cp1

0x8a1e,	// (0x0002f95c) main_pane_idle_g1_cp_ParamLimits

0x8a1e,	// (0x0002f95c) main_pane_idle_g1_cp

0xba78,	// (0x000329b6) popup_ai_links_title_window

0x8a36,	// (0x0002f974) soft_indicator_pane_cp1_ParamLimits

0x8a36,	// (0x0002f974) soft_indicator_pane_cp1

0xdead,	// (0x00034deb) ai_links_pane_g1

0xdeb6,	// (0x00034df4) grid_ai_links_pane

0x9d1d,	// (0x00030c5b) ai_gene_pane_1

0xde9b,	// (0x00034dd9) ai_gene_pane_2

0xdea4,	// (0x00034de2) list_highlight_pane_cp4

0x9cf9,	// (0x00030c37) cell_ai_link_pane_ParamLimits

0x9cf9,	// (0x00030c37) cell_ai_link_pane

0xde93,	// (0x00034dd1) cell_ai_link_pane_g1

0xbc32,	// (0x00032b70) cell_ai_link_pane_g2

0x0001,

0xf94b,	// (0x00036889) cell_ai_link_pane_g

0xb90f,	// (0x0003284d) grid_highlight_cp2

0xb90f,	// (0x0003284d) bg_popup_sub_pane_cp1

0xba8f,	// (0x000329cd) popup_ai_links_title_window_t1

0xdde1,	// (0x00034d1f) ai_gene_pane_1_g1_ParamLimits

0xdde1,	// (0x00034d1f) ai_gene_pane_1_g1

0xdded,	// (0x00034d2b) ai_gene_pane_1_g2_ParamLimits

0xdded,	// (0x00034d2b) ai_gene_pane_1_g2

0x0001,

0xf941,	// (0x0003687f) ai_gene_pane_1_g_ParamLimits

0xf941,	// (0x0003687f) ai_gene_pane_1_g

0xddfa,	// (0x00034d38) ai_gene_pane_1_t1_ParamLimits

0xddfa,	// (0x00034d38) ai_gene_pane_1_t1

0xde2e,	// (0x00034d6c) grid_ai_soft_ind_pane

0xddcc,	// (0x00034d0a) ai_gene_pane_2_t1_ParamLimits

0xddcc,	// (0x00034d0a) ai_gene_pane_2_t1

0x8a4a,	// (0x0002f988) main_pane_empty_t1_ParamLimits

0x8a4a,	// (0x0002f988) main_pane_empty_t1

0x8a62,	// (0x0002f9a0) main_pane_empty_t2_ParamLimits

0x8a62,	// (0x0002f9a0) main_pane_empty_t2

0x8a77,	// (0x0002f9b5) main_pane_empty_t3_ParamLimits

0x8a77,	// (0x0002f9b5) main_pane_empty_t3

0x8a89,	// (0x0002f9c7) main_pane_empty_t4_ParamLimits

0x8a89,	// (0x0002f9c7) main_pane_empty_t4

0x8a9b,	// (0x0002f9d9) main_pane_empty_t5_ParamLimits

0x8a9b,	// (0x0002f9d9) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x000364f6) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x000364f6) main_pane_empty_t

0xc02d,	// (0x00032f6b) bg_popup_window_pane_ParamLimits

0xc02d,	// (0x00032f6b) bg_popup_window_pane

0xdb5a,	// (0x00034a98) find_popup_pane_cp2_ParamLimits

0xdb5a,	// (0x00034a98) find_popup_pane_cp2

0xdb66,	// (0x00034aa4) heading_pane_ParamLimits

0xdb66,	// (0x00034aa4) heading_pane

0xb90f,	// (0x0003284d) bg_popup_sub_pane

0x9c5c,	// (0x00030b9a) bg_popup_window_pane_g1_ParamLimits

0x9c5c,	// (0x00030b9a) bg_popup_window_pane_g1

0x9c6b,	// (0x00030ba9) bg_popup_window_pane_g2_ParamLimits

0x9c6b,	// (0x00030ba9) bg_popup_window_pane_g2

0x9c77,	// (0x00030bb5) bg_popup_window_pane_g3_ParamLimits

0x9c77,	// (0x00030bb5) bg_popup_window_pane_g3

0x9c83,	// (0x00030bc1) bg_popup_window_pane_g4_ParamLimits

0x9c83,	// (0x00030bc1) bg_popup_window_pane_g4

0x9c92,	// (0x00030bd0) bg_popup_window_pane_g5_ParamLimits

0x9c92,	// (0x00030bd0) bg_popup_window_pane_g5

0x9ca2,	// (0x00030be0) bg_popup_window_pane_g6_ParamLimits

0x9ca2,	// (0x00030be0) bg_popup_window_pane_g6

0x9cae,	// (0x00030bec) bg_popup_window_pane_g7_ParamLimits

0x9cae,	// (0x00030bec) bg_popup_window_pane_g7

0x9cbd,	// (0x00030bfb) bg_popup_window_pane_g8_ParamLimits

0x9cbd,	// (0x00030bfb) bg_popup_window_pane_g8

0x9ccc,	// (0x00030c0a) bg_popup_window_pane_g9_ParamLimits

0x9ccc,	// (0x00030c0a) bg_popup_window_pane_g9

0xdb40,	// (0x00034a7e) bg_popup_window_pane_g10_ParamLimits

0xdb40,	// (0x00034a7e) bg_popup_window_pane_g10

0x0009,

0xf909,	// (0x00036847) bg_popup_window_pane_g_ParamLimits

0xf909,	// (0x00036847) bg_popup_window_pane_g

0xdaf7,	// (0x00034a35) bg_popup_heading_pane_ParamLimits

0xdaf7,	// (0x00034a35) bg_popup_heading_pane

0x23ec,	// (0x0002932a) tabs_4_passive_pane_cp_srt_ParamLimits

0x23ec,	// (0x0002932a) tabs_4_passive_pane_cp_srt

0x23fe,	// (0x0002933c) tabs_4_passive_pane_srt_ParamLimits

0xdb0b,	// (0x00034a49) heading_pane_g2

0x23fe,	// (0x0002933c) tabs_4_passive_pane_srt

0xcfd8,	// (0x00033f16) bg_passive_tab_pane_cp3_srt_ParamLimits

0xcfd8,	// (0x00033f16) bg_passive_tab_pane_cp3_srt

0xdb13,	// (0x00034a51) heading_pane_t1_ParamLimits

0xdb13,	// (0x00034a51) heading_pane_t1

0xdb2a,	// (0x00034a68) heading_pane_t2_ParamLimits

0xdb2a,	// (0x00034a68) heading_pane_t2

0x0001,

0xf904,	// (0x00036842) heading_pane_t_ParamLimits

0xf904,	// (0x00036842) heading_pane_t

0xd624,	// (0x00034562) bg_popup_heading_pane_g1

0xd6b5,	// (0x000345f3) bg_popup_heading_pane_g2

0xd6bf,	// (0x000345fd) bg_popup_heading_pane_g3

0xd6c9,	// (0x00034607) bg_popup_heading_pane_g4

0xd6d3,	// (0x00034611) bg_popup_heading_pane_g5

0xd6dd,	// (0x0003461b) bg_popup_heading_pane_g6

0xd6e5,	// (0x00034623) bg_popup_heading_pane_g7

0xd6ed,	// (0x0003462b) bg_popup_heading_pane_g8

0xd6f7,	// (0x00034635) bg_popup_heading_pane_g9

0x0008,

0xf8c0,	// (0x000367fe) bg_popup_heading_pane_g

0xcee8,	// (0x00033e26) bg_popup_sub_pane_g1

0xcef8,	// (0x00033e36) bg_popup_sub_pane_g2

0xcef0,	// (0x00033e2e) bg_popup_sub_pane_g3

0xcf08,	// (0x00033e46) bg_popup_sub_pane_g4

0xcf00,	// (0x00033e3e) bg_popup_sub_pane_g5

0xcf10,	// (0x00033e4e) bg_popup_sub_pane_g6

0xcf18,	// (0x00033e56) bg_popup_sub_pane_g7

0xcf28,	// (0x00033e66) bg_popup_sub_pane_g8

0xcf20,	// (0x00033e5e) bg_popup_sub_pane_g9

0x0008,

0xf89a,	// (0x000367d8) bg_popup_sub_pane_g

0xb95d,	// (0x0003289b) bg_popup_window_pane_cp5_ParamLimits

0xb95d,	// (0x0003289b) bg_popup_window_pane_cp5

0xbaac,	// (0x000329ea) popup_note_window_g1_ParamLimits

0xbaac,	// (0x000329ea) popup_note_window_g1

0xbab8,	// (0x000329f6) popup_note_window_t1_ParamLimits

0xbab8,	// (0x000329f6) popup_note_window_t1

0xbace,	// (0x00032a0c) popup_note_window_t2_ParamLimits

0xbace,	// (0x00032a0c) popup_note_window_t2

0xbae4,	// (0x00032a22) popup_note_window_t3_ParamLimits

0xbae4,	// (0x00032a22) popup_note_window_t3

0xbafa,	// (0x00032a38) popup_note_window_t4_ParamLimits

0xbafa,	// (0x00032a38) popup_note_window_t4

0xbb22,	// (0x00032a60) popup_note_window_t5_ParamLimits

0xbb22,	// (0x00032a60) popup_note_window_t5

0x0004,

0xf5c3,	// (0x00036501) popup_note_window_t_ParamLimits

0xf5c3,	// (0x00036501) popup_note_window_t

0xbb46,	// (0x00032a84) bg_popup_window_pane_cp6_ParamLimits

0xbb46,	// (0x00032a84) bg_popup_window_pane_cp6

0xd5a0,	// (0x000344de) popup_note_image_window_g1_ParamLimits

0xd5a0,	// (0x000344de) popup_note_image_window_g1

0xd5ac,	// (0x000344ea) popup_note_image_window_g2_ParamLimits

0xd5ac,	// (0x000344ea) popup_note_image_window_g2

0x0001,

0xf88e,	// (0x000367cc) popup_note_image_window_g_ParamLimits

0xf88e,	// (0x000367cc) popup_note_image_window_g

0xd5c5,	// (0x00034503) popup_note_image_window_t1_ParamLimits

0xd5c5,	// (0x00034503) popup_note_image_window_t1

0xd5de,	// (0x0003451c) popup_note_image_window_t2_ParamLimits

0xd5de,	// (0x0003451c) popup_note_image_window_t2

0xd5f7,	// (0x00034535) popup_note_image_window_t3_ParamLimits

0xd5f7,	// (0x00034535) popup_note_image_window_t3

0x0002,

0xf893,	// (0x000367d1) popup_note_image_window_t_ParamLimits

0xf893,	// (0x000367d1) popup_note_image_window_t

0xd47d,	// (0x000343bb) bg_popup_window_pane_cp7_ParamLimits

0xd47d,	// (0x000343bb) bg_popup_window_pane_cp7

0xd4ad,	// (0x000343eb) popup_note_wait_window_g1_ParamLimits

0xd4ad,	// (0x000343eb) popup_note_wait_window_g1

0xd4b9,	// (0x000343f7) popup_note_wait_window_g2_ParamLimits

0xd4b9,	// (0x000343f7) popup_note_wait_window_g2

0x0002,

0xf87c,	// (0x000367ba) popup_note_wait_window_g_ParamLimits

0xf87c,	// (0x000367ba) popup_note_wait_window_g

0xd4d1,	// (0x0003440f) popup_note_wait_window_t1_ParamLimits

0xd4d1,	// (0x0003440f) popup_note_wait_window_t1

0xd4f8,	// (0x00034436) popup_note_wait_window_t2_ParamLimits

0xd4f8,	// (0x00034436) popup_note_wait_window_t2

0xd515,	// (0x00034453) popup_note_wait_window_t3_ParamLimits

0xd515,	// (0x00034453) popup_note_wait_window_t3

0xd528,	// (0x00034466) popup_note_wait_window_t4_ParamLimits

0xd528,	// (0x00034466) popup_note_wait_window_t4

0x0004,

0xf883,	// (0x000367c1) popup_note_wait_window_t_ParamLimits

0xf883,	// (0x000367c1) popup_note_wait_window_t

0xd54d,	// (0x0003448b) wait_bar_pane_ParamLimits

0xd54d,	// (0x0003448b) wait_bar_pane

0xb90f,	// (0x0003284d) wait_anim_pane

0xb90f,	// (0x0003284d) wait_border_pane

0xb905,	// (0x00032843) wait_anim_pane_g1

0xb905,	// (0x00032843) wait_anim_pane_g2

0x0001,

0xf747,	// (0x00036685) wait_anim_pane_g

0xd421,	// (0x0003435f) wait_border_pane_g1

0xd42c,	// (0x0003436a) wait_border_pane_g2

0xd435,	// (0x00034373) wait_border_pane_g3

0x0002,

0xf875,	// (0x000367b3) wait_border_pane_g

0xd34e,	// (0x0003428c) bg_popup_window_pane_cp16_ParamLimits

0xd34e,	// (0x0003428c) bg_popup_window_pane_cp16

0xd35c,	// (0x0003429a) indicator_popup_pane_cp4_ParamLimits

0xd35c,	// (0x0003429a) indicator_popup_pane_cp4

0xd370,	// (0x000342ae) popup_query_data_window_t1_ParamLimits

0xd370,	// (0x000342ae) popup_query_data_window_t1

0xd382,	// (0x000342c0) popup_query_data_window_t2_ParamLimits

0xd382,	// (0x000342c0) popup_query_data_window_t2

0xd3cb,	// (0x00034309) popup_query_data_window_t3_ParamLimits

0xd3cb,	// (0x00034309) popup_query_data_window_t3

0x0002,

0xf86e,	// (0x000367ac) popup_query_data_window_t_ParamLimits

0xf86e,	// (0x000367ac) popup_query_data_window_t

0xd3e5,	// (0x00034323) query_popup_data_pane_ParamLimits

0xd3e5,	// (0x00034323) query_popup_data_pane

0xd3f9,	// (0x00034337) query_popup_data_pane_cp1_ParamLimits

0xd3f9,	// (0x00034337) query_popup_data_pane_cp1

0xbb46,	// (0x00032a84) bg_popup_window_pane_cp10_ParamLimits

0xbb46,	// (0x00032a84) bg_popup_window_pane_cp10

0xd2b1,	// (0x000341ef) indicator_popup_pane_ParamLimits

0xd2b1,	// (0x000341ef) indicator_popup_pane

0xbb9d,	// (0x00032adb) popup_query_code_window_t1_ParamLimits

0xbb9d,	// (0x00032adb) popup_query_code_window_t1

0xd2c9,	// (0x00034207) popup_query_code_window_t2_ParamLimits

0xd2c9,	// (0x00034207) popup_query_code_window_t2

0xd307,	// (0x00034245) popup_query_code_window_t3_ParamLimits

0xd307,	// (0x00034245) popup_query_code_window_t3

0x0002,

0xf867,	// (0x000367a5) popup_query_code_window_t_ParamLimits

0xf867,	// (0x000367a5) popup_query_code_window_t

0xd336,	// (0x00034274) query_popup_pane_ParamLimits

0xd336,	// (0x00034274) query_popup_pane

0xbb46,	// (0x00032a84) bg_popup_window_pane_cp15_ParamLimits

0xbb46,	// (0x00032a84) bg_popup_window_pane_cp15

0xbb64,	// (0x00032aa2) indicator_popup_pane_cp1_ParamLimits

0xbb64,	// (0x00032aa2) indicator_popup_pane_cp1

0xbb77,	// (0x00032ab5) indicator_popup_pane_cp2_ParamLimits

0xbb77,	// (0x00032ab5) indicator_popup_pane_cp2

0xbb8a,	// (0x00032ac8) popup_query_data_code_window_g1_ParamLimits

0xbb8a,	// (0x00032ac8) popup_query_data_code_window_g1

0xbb9d,	// (0x00032adb) popup_query_data_code_window_t1_ParamLimits

0xbb9d,	// (0x00032adb) popup_query_data_code_window_t1

0xbbaf,	// (0x00032aed) popup_query_data_code_window_t2_ParamLimits

0xbbaf,	// (0x00032aed) popup_query_data_code_window_t2

0xbbc1,	// (0x00032aff) popup_query_data_code_window_t3_ParamLimits

0xbbc1,	// (0x00032aff) popup_query_data_code_window_t3

0xbbd7,	// (0x00032b15) popup_query_data_code_window_t4_ParamLimits

0xbbd7,	// (0x00032b15) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0003650c) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0003650c) popup_query_data_code_window_t

0x1bbe,	// (0x00028afc) list_single_midp_graphic_pane_g3

0xbbef,	// (0x00032b2d) query_popup_data_pane_cp2_ParamLimits

0xbc02,	// (0x00032b40) query_popup_pane_cp2_ParamLimits

0xbc02,	// (0x00032b40) query_popup_pane_cp2

0xb90f,	// (0x0003284d) bg_popup_window_pane_cp11

0xd285,	// (0x000341c3) heading_pane_cp5

0xbc90,	// (0x00032bce) listscroll_popup_info_pane

0xb90f,	// (0x0003284d) input_focus_pane_cp3

0xbc15,	// (0x00032b53) query_popup_pane_t1

0xbc23,	// (0x00032b61) list_popup_info_pane_ParamLimits

0xbc23,	// (0x00032b61) list_popup_info_pane

0xbc32,	// (0x00032b70) listscroll_popup_info_pane_g1

0xbc3a,	// (0x00032b78) scroll_pane_cp7

0xbc44,	// (0x00032b82) popup_info_list_pane_t1_ParamLimits

0xbc44,	// (0x00032b82) popup_info_list_pane_t1

0xbc5e,	// (0x00032b9c) popup_info_list_pane_t2_ParamLimits

0xbc5e,	// (0x00032b9c) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x00036515) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x00036515) popup_info_list_pane_t

0xb90f,	// (0x0003284d) bg_popup_window_pane_cp12

0xe1f4,	// (0x00035132) find_popup_pane

0xb96b,	// (0x000328a9) bg_popup_window_pane_cp3

0xbc78,	// (0x00032bb6) heading_pane_cp3

0xbc84,	// (0x00032bc2) listscroll_popup_graphic_pane

0xb90f,	// (0x0003284d) bg_popup_window_pane_cp4

0x8afd,	// (0x0002fa3b) heading_pane_cp4

0xbc90,	// (0x00032bce) listscroll_popup_colour_pane

0x8b05,	// (0x0002fa43) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8b05,	// (0x0002fa43) cell_large_graphic_colour_none_popup_pane

0x8b19,	// (0x0002fa57) grid_large_graphic_colour_popup_pane_ParamLimits

0x8b19,	// (0x0002fa57) grid_large_graphic_colour_popup_pane

0x8b3d,	// (0x0002fa7b) listscroll_popup_colour_pane_g1_ParamLimits

0x8b3d,	// (0x0002fa7b) listscroll_popup_colour_pane_g1

0x8b54,	// (0x0002fa92) listscroll_popup_colour_pane_g2_ParamLimits

0x8b54,	// (0x0002fa92) listscroll_popup_colour_pane_g2

0x8b6b,	// (0x0002faa9) listscroll_popup_colour_pane_g3_ParamLimits

0x8b6b,	// (0x0002faa9) listscroll_popup_colour_pane_g3

0x8b7b,	// (0x0002fab9) listscroll_popup_colour_pane_g4_ParamLimits

0x8b7b,	// (0x0002fab9) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0003651a) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0003651a) listscroll_popup_colour_pane_g

0xbc98,	// (0x00032bd6) scroll_pane_cp6_ParamLimits

0xbc98,	// (0x00032bd6) scroll_pane_cp6

0x8b8b,	// (0x0002fac9) cell_large_graphic_colour_popup_pane_ParamLimits

0x8b8b,	// (0x0002fac9) cell_large_graphic_colour_popup_pane

0xbcaa,	// (0x00032be8) cell_large_graphic_colour_none_popup_pane_t1

0xb90f,	// (0x0003284d) grid_highlight_pane_cp5

0xbcb9,	// (0x00032bf7) cell_large_graphic_colour_popup_pane_g1

0xbcc1,	// (0x00032bff) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x00036523) cell_large_graphic_colour_popup_pane_g

0xbcc9,	// (0x00032c07) cell_large_graphic_colour_popup_pane_g2_copy1

0xbcd2,	// (0x00032c10) grid_highlight_pane_cp4

0xbcda,	// (0x00032c18) bg_popup_window_pane_cp8_ParamLimits

0xbcda,	// (0x00032c18) bg_popup_window_pane_cp8

0xbcf5,	// (0x00032c33) popup_snote_single_text_window_g1_ParamLimits

0xbcf5,	// (0x00032c33) popup_snote_single_text_window_g1

0xbd07,	// (0x00032c45) popup_snote_single_text_window_t1_ParamLimits

0xbd07,	// (0x00032c45) popup_snote_single_text_window_t1

0xbd1a,	// (0x00032c58) popup_snote_single_text_window_t2_ParamLimits

0xbd1a,	// (0x00032c58) popup_snote_single_text_window_t2

0xbd2d,	// (0x00032c6b) popup_snote_single_text_window_t3_ParamLimits

0xbd2d,	// (0x00032c6b) popup_snote_single_text_window_t3

0xbd66,	// (0x00032ca4) popup_snote_single_text_window_t4_ParamLimits

0xbd66,	// (0x00032ca4) popup_snote_single_text_window_t4

0xbd9a,	// (0x00032cd8) popup_snote_single_text_window_t5_ParamLimits

0xbd9a,	// (0x00032cd8) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x00036528) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x00036528) popup_snote_single_text_window_t

0xbdc9,	// (0x00032d07) bg_popup_window_pane_cp9_ParamLimits

0xbdc9,	// (0x00032d07) bg_popup_window_pane_cp9

0xbcf5,	// (0x00032c33) popup_snote_single_graphic_window_g1_ParamLimits

0xbcf5,	// (0x00032c33) popup_snote_single_graphic_window_g1

0xbdd7,	// (0x00032d15) popup_snote_single_graphic_window_g2_ParamLimits

0xbdd7,	// (0x00032d15) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x00036533) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x00036533) popup_snote_single_graphic_window_g

0xbde3,	// (0x00032d21) popup_snote_single_graphic_window_t1_ParamLimits

0xbde3,	// (0x00032d21) popup_snote_single_graphic_window_t1

0xbdf6,	// (0x00032d34) popup_snote_single_graphic_window_t2_ParamLimits

0xbdf6,	// (0x00032d34) popup_snote_single_graphic_window_t2

0xbe09,	// (0x00032d47) popup_snote_single_graphic_window_t3_ParamLimits

0xbe09,	// (0x00032d47) popup_snote_single_graphic_window_t3

0xbe42,	// (0x00032d80) popup_snote_single_graphic_window_t4_ParamLimits

0xbe42,	// (0x00032d80) popup_snote_single_graphic_window_t4

0xbe76,	// (0x00032db4) popup_snote_single_graphic_window_t5_ParamLimits

0xbe76,	// (0x00032db4) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x00036538) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x00036538) popup_snote_single_graphic_window_t

0xe17c,	// (0x000350ba) grid_graphic_popup_pane_ParamLimits

0xe17c,	// (0x000350ba) grid_graphic_popup_pane

0xe1a4,	// (0x000350e2) listscroll_popup_graphic_pane_g1_ParamLimits

0xe1a4,	// (0x000350e2) listscroll_popup_graphic_pane_g1

0x9fe1,	// (0x00030f1f) listscroll_popup_graphic_pane_g2_ParamLimits

0x9fe1,	// (0x00030f1f) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e4,	// (0x00036922) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e4,	// (0x00036922) listscroll_popup_graphic_pane_g

0xda8b,	// (0x000349c9) scroll_pane_cp5

0x9fa5,	// (0x00030ee3) cell_graphic_popup_pane_ParamLimits

0x9fa5,	// (0x00030ee3) cell_graphic_popup_pane

0xe147,	// (0x00035085) cell_graphic_popup_pane_g1

0xe14f,	// (0x0003508d) cell_graphic_popup_pane_g2

0xbcc9,	// (0x00032c07) cell_graphic_popup_pane_g3

0x0002,

0xf9dd,	// (0x0003691b) cell_graphic_popup_pane_g

0xe158,	// (0x00035096) cell_graphic_popup_pane_t2

0xbcd2,	// (0x00032c10) grid_highlight_pane_cp3

0xbeb7,	// (0x00032df5) list_gen_pane_ParamLimits

0xbeb7,	// (0x00032df5) list_gen_pane

0xbedf,	// (0x00032e1d) scroll_pane

0x9f60,	// (0x00030e9e) bg_list_pane_g1_ParamLimits

0x9f60,	// (0x00030e9e) bg_list_pane_g1

0xe0ea,	// (0x00035028) bg_list_pane_g2_ParamLimits

0xe0ea,	// (0x00035028) bg_list_pane_g2

0xe0fd,	// (0x0003503b) bg_list_pane_g3_ParamLimits

0xe0fd,	// (0x0003503b) bg_list_pane_g3

0xe10f,	// (0x0003504d) bg_list_pane_g4_ParamLimits

0xe10f,	// (0x0003504d) bg_list_pane_g4

0x9f7b,	// (0x00030eb9) bg_list_pane_g5_ParamLimits

0x9f7b,	// (0x00030eb9) bg_list_pane_g5

0x0004,

0xf9d2,	// (0x00036910) bg_list_pane_g_ParamLimits

0xf9d2,	// (0x00036910) bg_list_pane_g

0x9f17,	// (0x00030e55) list_double2_graphic_large_graphic_pane_ParamLimits

0x9f17,	// (0x00030e55) list_double2_graphic_large_graphic_pane

0x9f17,	// (0x00030e55) list_double2_graphic_pane_ParamLimits

0x9f17,	// (0x00030e55) list_double2_graphic_pane

0x9f17,	// (0x00030e55) list_double2_large_graphic_pane_ParamLimits

0x9f17,	// (0x00030e55) list_double2_large_graphic_pane

0x9f17,	// (0x00030e55) list_double2_pane_ParamLimits

0x9f17,	// (0x00030e55) list_double2_pane

0x9f17,	// (0x00030e55) list_double_graphic_heading_pane_ParamLimits

0x9f17,	// (0x00030e55) list_double_graphic_heading_pane

0x9f17,	// (0x00030e55) list_double_graphic_pane_ParamLimits

0x9f17,	// (0x00030e55) list_double_graphic_pane

0x9f17,	// (0x00030e55) list_double_heading_pane_ParamLimits

0x9f17,	// (0x00030e55) list_double_heading_pane

0x9f17,	// (0x00030e55) list_double_large_graphic_pane_ParamLimits

0x9f17,	// (0x00030e55) list_double_large_graphic_pane

0x9f17,	// (0x00030e55) list_double_number_pane_ParamLimits

0x9f17,	// (0x00030e55) list_double_number_pane

0x9f17,	// (0x00030e55) list_double_pane_ParamLimits

0x9f17,	// (0x00030e55) list_double_pane

0x9f17,	// (0x00030e55) list_double_time_pane_ParamLimits

0x9f17,	// (0x00030e55) list_double_time_pane

0x9f17,	// (0x00030e55) list_setting_number_pane_ParamLimits

0x9f17,	// (0x00030e55) list_setting_number_pane

0x9f17,	// (0x00030e55) list_setting_pane_ParamLimits

0x9f17,	// (0x00030e55) list_setting_pane

0x9f29,	// (0x00030e67) list_single_2graphic_pane_ParamLimits

0x9f29,	// (0x00030e67) list_single_2graphic_pane

0x9f29,	// (0x00030e67) list_single_graphic_heading_pane_ParamLimits

0x9f29,	// (0x00030e67) list_single_graphic_heading_pane

0x9f29,	// (0x00030e67) list_single_graphic_pane_ParamLimits

0x9f29,	// (0x00030e67) list_single_graphic_pane

0x9f29,	// (0x00030e67) list_single_heading_pane_ParamLimits

0x9f29,	// (0x00030e67) list_single_heading_pane

0x9f29,	// (0x00030e67) list_single_large_graphic_pane_ParamLimits

0x9f29,	// (0x00030e67) list_single_large_graphic_pane

0x9f29,	// (0x00030e67) list_single_number_heading_pane_ParamLimits

0x9f29,	// (0x00030e67) list_single_number_heading_pane

0x9f29,	// (0x00030e67) list_single_number_pane_ParamLimits

0x9f29,	// (0x00030e67) list_single_number_pane

0x9f29,	// (0x00030e67) list_single_pane_ParamLimits

0x9f29,	// (0x00030e67) list_single_pane

0xb90f,	// (0x0003284d) list_highlight_pane_cp1

0x4948,	// (0x0002b886) list_single_pane_g1_ParamLimits

0x4948,	// (0x0002b886) list_single_pane_g1

0x4954,	// (0x0002b892) list_single_pane_g2_ParamLimits

0x4954,	// (0x0002b892) list_single_pane_g2

0x0001,

0xf60c,	// (0x0003654a) list_single_pane_g_ParamLimits

0xf60c,	// (0x0003654a) list_single_pane_g

0x622b,	// (0x0002d169) list_single_pane_t1_ParamLimits

0x622b,	// (0x0002d169) list_single_pane_t1

0x4948,	// (0x0002b886) list_single_number_pane_g1_ParamLimits

0x4948,	// (0x0002b886) list_single_number_pane_g1

0x4954,	// (0x0002b892) list_single_number_pane_g2_ParamLimits

0x4954,	// (0x0002b892) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0003654a) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0003654a) list_single_number_pane_g

0x4932,	// (0x0002b870) list_single_number_pane_t1_ParamLimits

0x4932,	// (0x0002b870) list_single_number_pane_t1

0x82e4,	// (0x0002f222) list_single_number_pane_t2_ParamLimits

0x82e4,	// (0x0002f222) list_single_number_pane_t2

0x0001,

0xf993,	// (0x000368d1) list_single_number_pane_t_ParamLimits

0xf993,	// (0x000368d1) list_single_number_pane_t

0x6608,	// (0x0002d546) list_single_graphic_pane_g1_ParamLimits

0x6608,	// (0x0002d546) list_single_graphic_pane_g1

0x4948,	// (0x0002b886) list_single_graphic_pane_g2_ParamLimits

0x4948,	// (0x0002b886) list_single_graphic_pane_g2

0x4954,	// (0x0002b892) list_single_graphic_pane_g3_ParamLimits

0x4954,	// (0x0002b892) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x00036543) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x00036543) list_single_graphic_pane_g

0x79eb,	// (0x0002e929) list_single_graphic_pane_t1_ParamLimits

0x79eb,	// (0x0002e929) list_single_graphic_pane_t1

0x4948,	// (0x0002b886) list_single_heading_pane_g1_ParamLimits

0x4948,	// (0x0002b886) list_single_heading_pane_g1

0x4954,	// (0x0002b892) list_single_heading_pane_g2_ParamLimits

0x4954,	// (0x0002b892) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0003654a) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0003654a) list_single_heading_pane_g

0x624d,	// (0x0002d18b) list_single_heading_pane_t1_ParamLimits

0x624d,	// (0x0002d18b) list_single_heading_pane_t1

0x7a01,	// (0x0002e93f) list_single_heading_pane_t2_ParamLimits

0x7a01,	// (0x0002e93f) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0003654f) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0003654f) list_single_heading_pane_t

0x4948,	// (0x0002b886) list_single_number_heading_pane_g1_ParamLimits

0x4948,	// (0x0002b886) list_single_number_heading_pane_g1

0x4954,	// (0x0002b892) list_single_number_heading_pane_g2_ParamLimits

0x4954,	// (0x0002b892) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0003654a) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0003654a) list_single_number_heading_pane_g

0x624d,	// (0x0002d18b) list_single_number_heading_pane_t1_ParamLimits

0x624d,	// (0x0002d18b) list_single_number_heading_pane_t1

0x7a13,	// (0x0002e951) list_single_number_heading_pane_t2_ParamLimits

0x7a13,	// (0x0002e951) list_single_number_heading_pane_t2

0x4b23,	// (0x0002ba61) list_single_number_heading_pane_t3_ParamLimits

0x4b23,	// (0x0002ba61) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x00036554) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x00036554) list_single_number_heading_pane_t

0x490e,	// (0x0002b84c) list_single_graphic_heading_pane_g1_ParamLimits

0x490e,	// (0x0002b84c) list_single_graphic_heading_pane_g1

0x7a25,	// (0x0002e963) list_single_graphic_heading_pane_g4_ParamLimits

0x7a25,	// (0x0002e963) list_single_graphic_heading_pane_g4

0x4954,	// (0x0002b892) list_single_graphic_heading_pane_g5_ParamLimits

0x4954,	// (0x0002b892) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0003655b) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0003655b) list_single_graphic_heading_pane_g

0x624d,	// (0x0002d18b) list_single_graphic_heading_pane_t1_ParamLimits

0x624d,	// (0x0002d18b) list_single_graphic_heading_pane_t1

0x7a36,	// (0x0002e974) list_single_graphic_heading_pane_t2_ParamLimits

0x7a36,	// (0x0002e974) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x00036562) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x00036562) list_single_graphic_heading_pane_t

0x6241,	// (0x0002d17f) list_single_large_graphic_pane_g1_ParamLimits

0x6241,	// (0x0002d17f) list_single_large_graphic_pane_g1

0x4948,	// (0x0002b886) list_single_large_graphic_pane_g2_ParamLimits

0x4948,	// (0x0002b886) list_single_large_graphic_pane_g2

0x4954,	// (0x0002b892) list_single_large_graphic_pane_g3_ParamLimits

0x4954,	// (0x0002b892) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x00036567) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x00036567) list_single_large_graphic_pane_g

0xd42c,	// (0x0003436a) wait_border_pane_g2_copy1

0x7a48,	// (0x0002e986) list_single_large_graphic_pane_g4_cp2

0x624d,	// (0x0002d18b) list_single_large_graphic_pane_t1_ParamLimits

0x624d,	// (0x0002d18b) list_single_large_graphic_pane_t1

0x643a,	// (0x0002d378) list_double_pane_g1_ParamLimits

0x643a,	// (0x0002d378) list_double_pane_g1

0x7a50,	// (0x0002e98e) list_double_pane_g2_ParamLimits

0x7a50,	// (0x0002e98e) list_double_pane_g2

0x0001,

0xf630,	// (0x0003656e) list_double_pane_g_ParamLimits

0xf630,	// (0x0003656e) list_double_pane_g

0x7a5c,	// (0x0002e99a) list_double_pane_t1_ParamLimits

0x7a5c,	// (0x0002e99a) list_double_pane_t1

0x7a72,	// (0x0002e9b0) list_double_pane_t2_ParamLimits

0x7a72,	// (0x0002e9b0) list_double_pane_t2

0x0001,

0xf635,	// (0x00036573) list_double_pane_t_ParamLimits

0xf635,	// (0x00036573) list_double_pane_t

0x7a84,	// (0x0002e9c2) list_double2_pane_g1_ParamLimits

0x7a84,	// (0x0002e9c2) list_double2_pane_g1

0x446f,	// (0x0002b3ad) list_double2_pane_g2_ParamLimits

0x446f,	// (0x0002b3ad) list_double2_pane_g2

0x0001,

0xf63a,	// (0x00036578) list_double2_pane_g_ParamLimits

0xf63a,	// (0x00036578) list_double2_pane_g

0x7a95,	// (0x0002e9d3) list_double2_pane_t1_ParamLimits

0x7a95,	// (0x0002e9d3) list_double2_pane_t1

0x7aab,	// (0x0002e9e9) list_double2_pane_t2_ParamLimits

0x7aab,	// (0x0002e9e9) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0003657d) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0003657d) list_double2_pane_t

0x643a,	// (0x0002d378) list_double_number_pane_g1_ParamLimits

0x643a,	// (0x0002d378) list_double_number_pane_g1

0x7a50,	// (0x0002e98e) list_double_number_pane_g2_ParamLimits

0x7a50,	// (0x0002e98e) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0003656e) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0003656e) list_double_number_pane_g

0x7abd,	// (0x0002e9fb) list_double_number_pane_t1_ParamLimits

0x7abd,	// (0x0002e9fb) list_double_number_pane_t1

0x7acf,	// (0x0002ea0d) list_double_number_pane_t2_ParamLimits

0x7acf,	// (0x0002ea0d) list_double_number_pane_t2

0x7ae5,	// (0x0002ea23) list_double_number_pane_t3_ParamLimits

0x7ae5,	// (0x0002ea23) list_double_number_pane_t3

0x0002,

0xf644,	// (0x00036582) list_double_number_pane_t_ParamLimits

0xf644,	// (0x00036582) list_double_number_pane_t

0x7af7,	// (0x0002ea35) list_double_graphic_pane_g1_ParamLimits

0x7af7,	// (0x0002ea35) list_double_graphic_pane_g1

0x7b03,	// (0x0002ea41) list_double_graphic_pane_g2_ParamLimits

0x7b03,	// (0x0002ea41) list_double_graphic_pane_g2

0x7b12,	// (0x0002ea50) list_double_graphic_pane_g3_ParamLimits

0x7b12,	// (0x0002ea50) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x00036589) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x00036589) list_double_graphic_pane_g

0x7b2a,	// (0x0002ea68) list_double_graphic_pane_t1_ParamLimits

0x7b2a,	// (0x0002ea68) list_double_graphic_pane_t1

0x7b40,	// (0x0002ea7e) list_double_graphic_pane_t2_ParamLimits

0x7b40,	// (0x0002ea7e) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x00036592) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x00036592) list_double_graphic_pane_t

0x7b52,	// (0x0002ea90) list_double2_graphic_pane_g1_ParamLimits

0x7b52,	// (0x0002ea90) list_double2_graphic_pane_g1

0x7b5e,	// (0x0002ea9c) list_double2_graphic_pane_g2_ParamLimits

0x7b5e,	// (0x0002ea9c) list_double2_graphic_pane_g2

0x446f,	// (0x0002b3ad) list_double2_graphic_pane_g3_ParamLimits

0x446f,	// (0x0002b3ad) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x00036597) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x00036597) list_double2_graphic_pane_g

0x7b6a,	// (0x0002eaa8) list_double2_graphic_pane_t1_ParamLimits

0x7b6a,	// (0x0002eaa8) list_double2_graphic_pane_t1

0x7b80,	// (0x0002eabe) list_double2_graphic_pane_t2_ParamLimits

0x7b80,	// (0x0002eabe) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0003659e) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0003659e) list_double2_graphic_pane_t

0x7b92,	// (0x0002ead0) list_double_large_graphic_pane_g1_ParamLimits

0x7b92,	// (0x0002ead0) list_double_large_graphic_pane_g1

0x7bbd,	// (0x0002eafb) list_double_large_graphic_pane_g2_ParamLimits

0x7bbd,	// (0x0002eafb) list_double_large_graphic_pane_g2

0x7a50,	// (0x0002e98e) list_double_large_graphic_pane_g3_ParamLimits

0x7a50,	// (0x0002e98e) list_double_large_graphic_pane_g3

0x7bce,	// (0x0002eb0c) list_double_large_graphic_pane_g4_ParamLimits

0x7bce,	// (0x0002eb0c) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x000365a3) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x000365a3) list_double_large_graphic_pane_g

0x7be0,	// (0x0002eb1e) list_double_large_graphic_pane_t1_ParamLimits

0x7be0,	// (0x0002eb1e) list_double_large_graphic_pane_t1

0x7bf9,	// (0x0002eb37) list_double_large_graphic_pane_t2_ParamLimits

0x7bf9,	// (0x0002eb37) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x000365ae) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x000365ae) list_double_large_graphic_pane_t

0x7c0b,	// (0x0002eb49) list_double2_large_graphic_pane_g1_ParamLimits

0x7c0b,	// (0x0002eb49) list_double2_large_graphic_pane_g1

0x7a84,	// (0x0002e9c2) list_double2_large_graphic_pane_g2_ParamLimits

0x7a84,	// (0x0002e9c2) list_double2_large_graphic_pane_g2

0x446f,	// (0x0002b3ad) list_double2_large_graphic_pane_g3_ParamLimits

0x446f,	// (0x0002b3ad) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x000365b3) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x000365b3) list_double2_large_graphic_pane_g

0x7c17,	// (0x0002eb55) list_double2_large_graphic_pane_t1_ParamLimits

0x7c17,	// (0x0002eb55) list_double2_large_graphic_pane_t1

0x7c2d,	// (0x0002eb6b) list_double2_large_graphic_pane_t2_ParamLimits

0x7c2d,	// (0x0002eb6b) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x000365ba) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x000365ba) list_double2_large_graphic_pane_t

0x7c3f,	// (0x0002eb7d) list_double_heading_pane_g1_ParamLimits

0x7c3f,	// (0x0002eb7d) list_double_heading_pane_g1

0x427a,	// (0x0002b1b8) list_double_heading_pane_g2_ParamLimits

0x427a,	// (0x0002b1b8) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x000365bf) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x000365bf) list_double_heading_pane_g

0x7c50,	// (0x0002eb8e) list_double_heading_pane_t1_ParamLimits

0x7c50,	// (0x0002eb8e) list_double_heading_pane_t1

0x7aab,	// (0x0002e9e9) list_double_heading_pane_t2_ParamLimits

0x7aab,	// (0x0002e9e9) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x000365c4) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x000365c4) list_double_heading_pane_t

0x7af7,	// (0x0002ea35) list_double_graphic_heading_pane_g1_ParamLimits

0x7af7,	// (0x0002ea35) list_double_graphic_heading_pane_g1

0x7c3f,	// (0x0002eb7d) list_double_graphic_heading_pane_g2_ParamLimits

0x7c3f,	// (0x0002eb7d) list_double_graphic_heading_pane_g2

0x427a,	// (0x0002b1b8) list_double_graphic_heading_pane_g3_ParamLimits

0x427a,	// (0x0002b1b8) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x000365c9) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x000365c9) list_double_graphic_heading_pane_g

0x7c66,	// (0x0002eba4) list_double_graphic_heading_pane_t1_ParamLimits

0x7c66,	// (0x0002eba4) list_double_graphic_heading_pane_t1

0x7b80,	// (0x0002eabe) list_double_graphic_heading_pane_t2_ParamLimits

0x7b80,	// (0x0002eabe) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x000365d0) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x000365d0) list_double_graphic_heading_pane_t

0x7bbd,	// (0x0002eafb) list_double_time_pane_g1_ParamLimits

0x7bbd,	// (0x0002eafb) list_double_time_pane_g1

0x7a50,	// (0x0002e98e) list_double_time_pane_g2_ParamLimits

0x7a50,	// (0x0002e98e) list_double_time_pane_g2

0x0001,

0xf697,	// (0x000365d5) list_double_time_pane_g_ParamLimits

0xf697,	// (0x000365d5) list_double_time_pane_g

0x7c7c,	// (0x0002ebba) list_double_time_pane_t1_ParamLimits

0x7c7c,	// (0x0002ebba) list_double_time_pane_t1

0x7c92,	// (0x0002ebd0) list_double_time_pane_t2_ParamLimits

0x7c92,	// (0x0002ebd0) list_double_time_pane_t2

0x7ca4,	// (0x0002ebe2) list_double_time_pane_t3_ParamLimits

0x7ca4,	// (0x0002ebe2) list_double_time_pane_t3

0x7cb6,	// (0x0002ebf4) list_double_time_pane_t4_ParamLimits

0x7cb6,	// (0x0002ebf4) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x000365da) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x000365da) list_double_time_pane_t

0x7cc8,	// (0x0002ec06) list_setting_pane_g1_ParamLimits

0x7cc8,	// (0x0002ec06) list_setting_pane_g1

0x7cd4,	// (0x0002ec12) list_setting_pane_g2_ParamLimits

0x7cd4,	// (0x0002ec12) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x000365e3) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x000365e3) list_setting_pane_g

0x7ce0,	// (0x0002ec1e) list_setting_pane_t1_ParamLimits

0x7ce0,	// (0x0002ec1e) list_setting_pane_t1

0x7cfa,	// (0x0002ec38) list_setting_pane_t2_ParamLimits

0x7cfa,	// (0x0002ec38) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x000365e8) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x000365e8) list_setting_pane_t

0x7d39,	// (0x0002ec77) set_value_pane_cp_ParamLimits

0x7d39,	// (0x0002ec77) set_value_pane_cp

0x7d45,	// (0x0002ec83) list_setting_number_pane_g1_ParamLimits

0x7d45,	// (0x0002ec83) list_setting_number_pane_g1

0x7d51,	// (0x0002ec8f) list_setting_number_pane_g2_ParamLimits

0x7d51,	// (0x0002ec8f) list_setting_number_pane_g2

0x0001,

0xf6b1,	// (0x000365ef) list_setting_number_pane_g_ParamLimits

0xf6b1,	// (0x000365ef) list_setting_number_pane_g

0x7d5d,	// (0x0002ec9b) list_setting_number_pane_t1_ParamLimits

0x7d5d,	// (0x0002ec9b) list_setting_number_pane_t1

0x7d76,	// (0x0002ecb4) list_setting_number_pane_t2_ParamLimits

0x7d76,	// (0x0002ecb4) list_setting_number_pane_t2

0x7d90,	// (0x0002ecce) list_setting_number_pane_t3_ParamLimits

0x7d90,	// (0x0002ecce) list_setting_number_pane_t3

0x0003,

0xf6b6,	// (0x000365f4) list_setting_number_pane_t_ParamLimits

0xf6b6,	// (0x000365f4) list_setting_number_pane_t

0x7d39,	// (0x0002ec77) set_value_pane_ParamLimits

0x7d39,	// (0x0002ec77) set_value_pane

0xbf13,	// (0x00032e51) bg_set_opt_pane_ParamLimits

0xbf13,	// (0x00032e51) bg_set_opt_pane

0x45f8,	// (0x0002b536) set_value_pane_t1

0xbf34,	// (0x00032e72) slider_set_pane_cp3

0xbf3d,	// (0x00032e7b) volume_small_pane_cp

0xbf46,	// (0x00032e84) list_form_gen_pane

0xbf4f,	// (0x00032e8d) scroll_pane_cp8

0x7dd3,	// (0x0002ed11) form_field_data_pane_ParamLimits

0x7dd3,	// (0x0002ed11) form_field_data_pane

0x7dea,	// (0x0002ed28) form_field_data_wide_pane_ParamLimits

0x7dea,	// (0x0002ed28) form_field_data_wide_pane

0x7e0a,	// (0x0002ed48) form_field_popup_pane_ParamLimits

0x7e0a,	// (0x0002ed48) form_field_popup_pane

0x7e22,	// (0x0002ed60) form_field_popup_wide_pane_ParamLimits

0x7e22,	// (0x0002ed60) form_field_popup_wide_pane

0x468c,	// (0x0002b5ca) form_field_slider_pane_ParamLimits

0x468c,	// (0x0002b5ca) form_field_slider_pane

0x469f,	// (0x0002b5dd) form_field_slider_wide_pane_ParamLimits

0x469f,	// (0x0002b5dd) form_field_slider_wide_pane

0xbf60,	// (0x00032e9e) data_form_pane

0x7e43,	// (0x0002ed81) form_field_data_pane_t1

0xbf6c,	// (0x00032eaa) input_focus_pane

0xbf7a,	// (0x00032eb8) data_form_wide_pane

0x46e0,	// (0x0002b61e) form_field_data_wide_pane_t1

0xbce7,	// (0x00032c25) input_focus_pane_cp6

0x7e5d,	// (0x0002ed9b) form_field_popup_pane_t1

0xbf6c,	// (0x00032eaa) input_focus_pane_cp7

0xbfaf,	// (0x00032eed) list_form_pane

0x4722,	// (0x0002b660) form_field_popup_wide_pane_t1

0xbf6c,	// (0x00032eaa) input_focus_pane_cp8

0xbfbb,	// (0x00032ef9) list_form_wide_pane

0x7e7f,	// (0x0002edbd) form_field_slider_pane_t1_ParamLimits

0x7e7f,	// (0x0002edbd) form_field_slider_pane_t1

0x7e97,	// (0x0002edd5) form_field_slider_pane_t2_ParamLimits

0x7e97,	// (0x0002edd5) form_field_slider_pane_t2

0x0001,

0xf6c6,	// (0x00036604) form_field_slider_pane_t_ParamLimits

0xf6c6,	// (0x00036604) form_field_slider_pane_t

0xb95d,	// (0x0003289b) input_focus_pane_cp9_ParamLimits

0xb95d,	// (0x0003289b) input_focus_pane_cp9

0x7eac,	// (0x0002edea) slider_cont_pane_ParamLimits

0x7eac,	// (0x0002edea) slider_cont_pane

0xbfca,	// (0x00032f08) form_field_slider_wide_pane_t1_ParamLimits

0xbfca,	// (0x00032f08) form_field_slider_wide_pane_t1

0x477e,	// (0x0002b6bc) form_field_slider_wide_pane_t2_ParamLimits

0x477e,	// (0x0002b6bc) form_field_slider_wide_pane_t2

0x0001,

0xf6cb,	// (0x00036609) form_field_slider_wide_pane_t_ParamLimits

0xf6cb,	// (0x00036609) form_field_slider_wide_pane_t

0xb95d,	// (0x0003289b) input_focus_pane_cp10_ParamLimits

0xb95d,	// (0x0003289b) input_focus_pane_cp10

0x7ec0,	// (0x0002edfe) slider_cont_pane_cp1_ParamLimits

0x7ec0,	// (0x0002edfe) slider_cont_pane_cp1

0x7ed4,	// (0x0002ee12) slider_form_pane_cp

0xbfdc,	// (0x00032f1a) input_focus_pane_g1

0xbfe4,	// (0x00032f22) input_focus_pane_g2

0xbfec,	// (0x00032f2a) input_focus_pane_g3

0xbff4,	// (0x00032f32) input_focus_pane_g4

0xbffc,	// (0x00032f3a) input_focus_pane_g5

0xc004,	// (0x00032f42) input_focus_pane_g6

0xc00c,	// (0x00032f4a) input_focus_pane_g7

0xc014,	// (0x00032f52) input_focus_pane_g8

0xc01c,	// (0x00032f5a) input_focus_pane_g9

0xb905,	// (0x00032843) input_focus_pane_g10

0x0009,

0xf6d0,	// (0x0003660e) input_focus_pane_g

0xd435,	// (0x00034373) wait_border_pane_g3_copy1

0x7edc,	// (0x0002ee1a) data_form_pane_t1

0xb905,	// (0x00032843) wait_anim_pane_g1_copy1

0x82f6,	// (0x0002f234) data_form_wide_pane_t1

0x8bb4,	// (0x0002faf2) list_form_graphic_pane_cp_ParamLimits

0x8bb4,	// (0x0002faf2) list_form_graphic_pane_cp

0xe094,	// (0x00034fd2) slider_form_pane_g1

0xe09d,	// (0x00034fdb) slider_form_pane_g2

0x0006,

0xf9c3,	// (0x00036901) slider_form_pane_g

0x8bb4,	// (0x0002faf2) list_form_graphic_pane_ParamLimits

0x8bb4,	// (0x0002faf2) list_form_graphic_pane

0x47fc,	// (0x0002b73a) list_form_graphic_pane_g1

0x4804,	// (0x0002b742) list_form_graphic_pane_t1_ParamLimits

0x4804,	// (0x0002b742) list_form_graphic_pane_t1

0xb96b,	// (0x000328a9) list_highlight_pane_cp5_ParamLimits

0xb96b,	// (0x000328a9) list_highlight_pane_cp5

0x7ef6,	// (0x0002ee34) find_pane_g1

0xc024,	// (0x00032f62) input_find_pane

0x7eff,	// (0x0002ee3d) input_find_pane_g1_ParamLimits

0x7eff,	// (0x0002ee3d) input_find_pane_g1

0x7f0b,	// (0x0002ee49) input_find_pane_t1_ParamLimits

0x7f0b,	// (0x0002ee49) input_find_pane_t1

0x7f20,	// (0x0002ee5e) input_find_pane_t2_ParamLimits

0x7f20,	// (0x0002ee5e) input_find_pane_t2

0x0001,

0xf6e5,	// (0x00036623) input_find_pane_t_ParamLimits

0xf6e5,	// (0x00036623) input_find_pane_t

0xc02d,	// (0x00032f6b) input_focus_pane_cp5_ParamLimits

0xc02d,	// (0x00032f6b) input_focus_pane_cp5

0x8bd2,	// (0x0002fb10) bg_popup_window_pane_cp2_ParamLimits

0x8bd2,	// (0x0002fb10) bg_popup_window_pane_cp2

0x8bdf,	// (0x0002fb1d) listscroll_menu_pane_ParamLimits

0x8bdf,	// (0x0002fb1d) listscroll_menu_pane

0x8beb,	// (0x0002fb29) popup_submenu_window_ParamLimits

0x8beb,	// (0x0002fb29) popup_submenu_window

0xc03b,	// (0x00032f79) find_popup_pane_g1

0xc043,	// (0x00032f81) input_popup_find_pane_cp

0xc02d,	// (0x00032f6b) input_focus_pane_cp4_ParamLimits

0xc02d,	// (0x00032f6b) input_focus_pane_cp4

0xc04d,	// (0x00032f8b) input_popup_find_pane_t1_ParamLimits

0xc04d,	// (0x00032f8b) input_popup_find_pane_t1

0xb90f,	// (0x0003284d) bg_popup_sub_pane_cp

0xc07b,	// (0x00032fb9) listscroll_popup_sub_pane

0xc083,	// (0x00032fc1) list_submenu_pane_ParamLimits

0xc083,	// (0x00032fc1) list_submenu_pane

0xc094,	// (0x00032fd2) scroll_pane_cp4

0xc09c,	// (0x00032fda) list_single_popup_submenu_pane_ParamLimits

0xc09c,	// (0x00032fda) list_single_popup_submenu_pane

0xc0b0,	// (0x00032fee) list_single_popup_submenu_pane_g1

0xc0b8,	// (0x00032ff6) list_single_popup_submenu_pane_t1_ParamLimits

0xc0b8,	// (0x00032ff6) list_single_popup_submenu_pane_t1

0xb95d,	// (0x0003289b) bg_active_tab_pane_cp1_ParamLimits

0xb95d,	// (0x0003289b) bg_active_tab_pane_cp1

0x8c23,	// (0x0002fb61) tabs_2_active_pane_g1

0x8c2b,	// (0x0002fb69) tabs_2_active_pane_t1

0xb95d,	// (0x0003289b) bg_passive_tab_pane_cp1_ParamLimits

0xb95d,	// (0x0003289b) bg_passive_tab_pane_cp1

0x8c23,	// (0x0002fb61) tabs_2_passive_pane_g1

0x8c2b,	// (0x0002fb69) tabs_2_passive_pane_t1

0xb96b,	// (0x000328a9) bg_active_tab_pane_cp4

0x8c3d,	// (0x0002fb7b) tabs_2_long_active_pane_t1

0xc0cd,	// (0x0003300b) bg_passive_tab_pane_cp4

0x1bc6,	// (0x00028b04) list_single_midp_graphic_pane_g4_ParamLimits

0xb96b,	// (0x000328a9) bg_active_tab_pane_cp5

0x8c50,	// (0x0002fb8e) tabs_3_long_active_pane_t1

0xc0cd,	// (0x0003300b) bg_passive_tab_pane_cp5

0x1bc6,	// (0x00028b04) list_single_midp_graphic_pane_g4

0xb96b,	// (0x000328a9) bg_popup_window_pane_cp13_ParamLimits

0xb96b,	// (0x000328a9) bg_popup_window_pane_cp13

0xc0e2,	// (0x00033020) listscroll_popup_fast_pane_ParamLimits

0xc0e2,	// (0x00033020) listscroll_popup_fast_pane

0xc0f1,	// (0x0003302f) grid_popup_fast_pane_ParamLimits

0xc0f1,	// (0x0003302f) grid_popup_fast_pane

0xc103,	// (0x00033041) scroll_pane_cp9_ParamLimits

0xc103,	// (0x00033041) scroll_pane_cp9

0xf31c,	// (0x0003625a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xf31c,	// (0x0003625a) list_single_graphic_hl_pane_t1_cp2

0xc127,	// (0x00033065) input_focus_pane_cp20_ParamLimits

0xc127,	// (0x00033065) input_focus_pane_cp20

0xc135,	// (0x00033073) query_popup_data_pane_t1_ParamLimits

0xc135,	// (0x00033073) query_popup_data_pane_t1

0xc148,	// (0x00033086) query_popup_data_pane_t2_ParamLimits

0xc148,	// (0x00033086) query_popup_data_pane_t2

0xc18e,	// (0x000330cc) query_popup_data_pane_t3_ParamLimits

0xc18e,	// (0x000330cc) query_popup_data_pane_t3

0xc1cf,	// (0x0003310d) query_popup_data_pane_t4_ParamLimits

0xc1cf,	// (0x0003310d) query_popup_data_pane_t4

0xc20b,	// (0x00033149) query_popup_data_pane_t5_ParamLimits

0xc20b,	// (0x00033149) query_popup_data_pane_t5

0x0004,

0xf6ea,	// (0x00036628) query_popup_data_pane_t_ParamLimits

0xf6ea,	// (0x00036628) query_popup_data_pane_t

0xbfdc,	// (0x00032f1a) bg_set_opt_pane_g1

0xbfe4,	// (0x00032f22) bg_set_opt_pane_g2

0xbfec,	// (0x00032f2a) bg_set_opt_pane_g3

0xbff4,	// (0x00032f32) bg_set_opt_pane_g4

0xbffc,	// (0x00032f3a) bg_set_opt_pane_g5

0xc004,	// (0x00032f42) bg_set_opt_pane_g6

0xc00c,	// (0x00032f4a) bg_set_opt_pane_g7

0xc014,	// (0x00032f52) bg_set_opt_pane_g8

0xc01c,	// (0x00032f5a) bg_set_opt_pane_g9

0x0008,

0xf6f5,	// (0x00036633) bg_set_opt_pane_g

0x0f3b,	// (0x00027e79) control_top_pane_stacon_ParamLimits

0x0f3b,	// (0x00027e79) control_top_pane_stacon

0x0f8e,	// (0x00027ecc) signal_pane_stacon_ParamLimits

0x0f8e,	// (0x00027ecc) signal_pane_stacon

0xc680,	// (0x000335be) stacon_top_pane_g1_ParamLimits

0xc680,	// (0x000335be) stacon_top_pane_g1

0x0fb3,	// (0x00027ef1) title_pane_stacon_ParamLimits

0x0fb3,	// (0x00027ef1) title_pane_stacon

0x0fdd,	// (0x00027f1b) uni_indicator_pane_stacon_ParamLimits

0x0fdd,	// (0x00027f1b) uni_indicator_pane_stacon

0x0ff2,	// (0x00027f30) battery_pane_stacon_ParamLimits

0x0ff2,	// (0x00027f30) battery_pane_stacon

0x1036,	// (0x00027f74) control_bottom_pane_stacon_ParamLimits

0x1036,	// (0x00027f74) control_bottom_pane_stacon

0x1059,	// (0x00027f97) navi_pane_stacon_ParamLimits

0x1059,	// (0x00027f97) navi_pane_stacon

0xc6a2,	// (0x000335e0) stacon_bottom_pane_g1_ParamLimits

0xc6a2,	// (0x000335e0) stacon_bottom_pane_g1

0x0b78,	// (0x00027ab6) aid_levels_signal_lsc_ParamLimits

0x0b78,	// (0x00027ab6) aid_levels_signal_lsc

0x0b8f,	// (0x00027acd) signal_pane_stacon_g1_ParamLimits

0x0b8f,	// (0x00027acd) signal_pane_stacon_g1

0x0ba3,	// (0x00027ae1) signal_pane_stacon_g2_ParamLimits

0x0ba3,	// (0x00027ae1) signal_pane_stacon_g2

0x0001,

0xf708,	// (0x00036646) signal_pane_stacon_g_ParamLimits

0xf708,	// (0x00036646) signal_pane_stacon_g

0x0bd8,	// (0x00027b16) title_pane_stacon_t1_ParamLimits

0x0bd8,	// (0x00027b16) title_pane_stacon_t1

0xc24f,	// (0x0003318d) uni_indicator_pane_stacon_g1

0xc259,	// (0x00033197) uni_indicator_pane_stacon_g2

0xc263,	// (0x000331a1) uni_indicator_pane_stacon_g3

0xc26d,	// (0x000331ab) uni_indicator_pane_stacon_g4

0x0003,

0xf714,	// (0x00036652) uni_indicator_pane_stacon_g

0x0bfd,	// (0x00027b3b) control_top_pane_stacon_g1

0x0c05,	// (0x00027b43) control_top_pane_stacon_t1_ParamLimits

0x0c05,	// (0x00027b43) control_top_pane_stacon_t1

0x0c3c,	// (0x00027b7a) aid_levels_battery_lsc_ParamLimits

0x0c3c,	// (0x00027b7a) aid_levels_battery_lsc

0x0c54,	// (0x00027b92) battery_pane_stacon_g1_ParamLimits

0x0c54,	// (0x00027b92) battery_pane_stacon_g1

0x0c67,	// (0x00027ba5) battery_pane_stacon_g2_ParamLimits

0x0c67,	// (0x00027ba5) battery_pane_stacon_g2

0x0001,

0xf71d,	// (0x0003665b) battery_pane_stacon_g_ParamLimits

0xf71d,	// (0x0003665b) battery_pane_stacon_g

0x0ca5,	// (0x00027be3) navi_icon_pane_stacon

0x0cb9,	// (0x00027bf7) navi_navi_pane_stacon

0x0ca5,	// (0x00027be3) navi_text_pane_stacon

0x0bfd,	// (0x00027b3b) control_bottom_pane_stacon_g1

0x0ccd,	// (0x00027c0b) control_bottom_pane_stacon_t1_ParamLimits

0x0ccd,	// (0x00027c0b) control_bottom_pane_stacon_t1

0x8c62,	// (0x0002fba0) grid_app_pane_ParamLimits

0x8c62,	// (0x0002fba0) grid_app_pane

0x8c9a,	// (0x0002fbd8) scroll_pane_cp15_ParamLimits

0x8c9a,	// (0x0002fbd8) scroll_pane_cp15

0x8cb7,	// (0x0002fbf5) cell_app_pane_ParamLimits

0x8cb7,	// (0x0002fbf5) cell_app_pane

0x8cfc,	// (0x0002fc3a) cell_app_pane_g1_ParamLimits

0x8cfc,	// (0x0002fc3a) cell_app_pane_g1

0xc291,	// (0x000331cf) cell_app_pane_g2_ParamLimits

0xc291,	// (0x000331cf) cell_app_pane_g2

0x0001,

0xf722,	// (0x00036660) cell_app_pane_g_ParamLimits

0xf722,	// (0x00036660) cell_app_pane_g

0xc29d,	// (0x000331db) cell_app_pane_t1_ParamLimits

0xc29d,	// (0x000331db) cell_app_pane_t1

0xc2af,	// (0x000331ed) grid_highlight_pane_ParamLimits

0xc2af,	// (0x000331ed) grid_highlight_pane

0xbfdc,	// (0x00032f1a) cell_highlight_pane_g1

0xbfe4,	// (0x00032f22) cell_highlight_pane_g2

0xbfec,	// (0x00032f2a) cell_highlight_pane_g3

0xbff4,	// (0x00032f32) cell_highlight_pane_g4

0xbffc,	// (0x00032f3a) cell_highlight_pane_g5

0xc004,	// (0x00032f42) cell_highlight_pane_g6

0xc00c,	// (0x00032f4a) cell_highlight_pane_g7

0xc014,	// (0x00032f52) cell_highlight_pane_g8

0xc01c,	// (0x00032f5a) cell_highlight_pane_g9

0xb905,	// (0x00032843) cell_highlight_pane_g10

0x0009,

0xf6d0,	// (0x0003660e) cell_highlight_pane_g

0xc2c0,	// (0x000331fe) bg_scroll_pane

0x0d98,	// (0x00027cd6) scroll_handle_pane

0xc307,	// (0x00033245) scroll_bg_pane_g1

0xc31c,	// (0x0003325a) scroll_bg_pane_g2

0xc334,	// (0x00033272) scroll_bg_pane_g3

0x0002,

0xf727,	// (0x00036665) scroll_bg_pane_g

0xc349,	// (0x00033287) scroll_handle_focus_pane_ParamLimits

0xc349,	// (0x00033287) scroll_handle_focus_pane

0xc307,	// (0x00033245) scroll_handle_pane_g1

0xc356,	// (0x00033294) scroll_handle_pane_g2

0xc334,	// (0x00033272) scroll_handle_pane_g3

0x0002,

0xf72e,	// (0x0003666c) scroll_handle_pane_g

0xc02d,	// (0x00032f6b) bg_popup_sub_pane_cp21_ParamLimits

0xc02d,	// (0x00032f6b) bg_popup_sub_pane_cp21

0xc36a,	// (0x000332a8) popup_fep_japan_predictive_window_t1_ParamLimits

0xc36a,	// (0x000332a8) popup_fep_japan_predictive_window_t1

0xc384,	// (0x000332c2) popup_fep_japan_predictive_window_t2_ParamLimits

0xc384,	// (0x000332c2) popup_fep_japan_predictive_window_t2

0xc3b7,	// (0x000332f5) popup_fep_japan_predictive_window_t3_ParamLimits

0xc3b7,	// (0x000332f5) popup_fep_japan_predictive_window_t3

0x0002,

0xf735,	// (0x00036673) popup_fep_japan_predictive_window_t_ParamLimits

0xf735,	// (0x00036673) popup_fep_japan_predictive_window_t

0xb90f,	// (0x0003284d) bg_popup_sub_pane_cp23

0xc3ee,	// (0x0003332c) listscroll_japin_cand_pane

0xc3f6,	// (0x00033334) popup_fep_japan_candidate_window_t1

0xc404,	// (0x00033342) candidate_pane_ParamLimits

0xc404,	// (0x00033342) candidate_pane

0xc416,	// (0x00033354) scroll_pane_cp30

0xc41e,	// (0x0003335c) list_single_popup_jap_candidate_pane_ParamLimits

0xc41e,	// (0x0003335c) list_single_popup_jap_candidate_pane

0xb90f,	// (0x0003284d) list_highlight_pane_cp30

0xc433,	// (0x00033371) list_single_popup_jap_candidate_pane_t1

0xc442,	// (0x00033380) level_1_signal

0xc44f,	// (0x0003338d) level_2_signal

0xc45c,	// (0x0003339a) level_3_signal

0xc469,	// (0x000333a7) level_4_signal

0xc476,	// (0x000333b4) level_5_signal

0xc483,	// (0x000333c1) level_6_signal

0xc490,	// (0x000333ce) level_7_signal

0xc442,	// (0x00033380) level_1_battery

0xc44f,	// (0x0003338d) level_2_battery

0xc45c,	// (0x0003339a) level_3_battery

0xc469,	// (0x000333a7) level_4_battery

0xc476,	// (0x000333b4) level_5_battery

0xc483,	// (0x000333c1) level_6_battery

0xc490,	// (0x000333ce) level_7_battery

0xc4b5,	// (0x000333f3) list_menu_pane_ParamLimits

0xc4b5,	// (0x000333f3) list_menu_pane

0xc4c6,	// (0x00033404) scroll_pane_cp25_ParamLimits

0xc4c6,	// (0x00033404) scroll_pane_cp25

0xc4df,	// (0x0003341d) list_double2_graphic_pane_cp2_ParamLimits

0xc4df,	// (0x0003341d) list_double2_graphic_pane_cp2

0xc4df,	// (0x0003341d) list_double2_large_graphic_pane_cp2_ParamLimits

0xc4df,	// (0x0003341d) list_double2_large_graphic_pane_cp2

0xc4df,	// (0x0003341d) list_double2_pane_cp2_ParamLimits

0xc4df,	// (0x0003341d) list_double2_pane_cp2

0xc4df,	// (0x0003341d) list_double_graphic_pane_cp2_ParamLimits

0xc4df,	// (0x0003341d) list_double_graphic_pane_cp2

0xc4df,	// (0x0003341d) list_double_large_graphic_pane_cp2_ParamLimits

0xc4df,	// (0x0003341d) list_double_large_graphic_pane_cp2

0xc4df,	// (0x0003341d) list_double_number_pane_cp2_ParamLimits

0xc4df,	// (0x0003341d) list_double_number_pane_cp2

0xc4df,	// (0x0003341d) list_double_pane_cp2_ParamLimits

0xc4df,	// (0x0003341d) list_double_pane_cp2

0x8d2f,	// (0x0002fc6d) list_single_2graphic_pane_cp2_ParamLimits

0x8d2f,	// (0x0002fc6d) list_single_2graphic_pane_cp2

0x8d2f,	// (0x0002fc6d) list_single_graphic_heading_pane_cp2_ParamLimits

0x8d2f,	// (0x0002fc6d) list_single_graphic_heading_pane_cp2

0x8d2f,	// (0x0002fc6d) list_single_graphic_pane_cp2_ParamLimits

0x8d2f,	// (0x0002fc6d) list_single_graphic_pane_cp2

0x8d2f,	// (0x0002fc6d) list_single_heading_pane_cp2_ParamLimits

0x8d2f,	// (0x0002fc6d) list_single_heading_pane_cp2

0xc4ef,	// (0x0003342d) list_single_large_graphic_pane_cp2_ParamLimits

0xc4ef,	// (0x0003342d) list_single_large_graphic_pane_cp2

0x8d2f,	// (0x0002fc6d) list_single_number_heading_pane_cp2_ParamLimits

0x8d2f,	// (0x0002fc6d) list_single_number_heading_pane_cp2

0x8d2f,	// (0x0002fc6d) list_single_number_pane_cp2_ParamLimits

0x8d2f,	// (0x0002fc6d) list_single_number_pane_cp2

0x8d2f,	// (0x0002fc6d) list_single_pane_cp2_ParamLimits

0x8d2f,	// (0x0002fc6d) list_single_pane_cp2

0xc509,	// (0x00033447) bg_popup_sub_pane_cp22

0x0eb3,	// (0x00027df1) popup_side_volume_key_window_g1

0x0edd,	// (0x00027e1b) popup_side_volume_key_window_t1

0x0ef9,	// (0x00027e37) volume_small_pane_cp1

0xb95d,	// (0x0003289b) bg_popup_sub_pane_cp24_ParamLimits

0xb95d,	// (0x0003289b) bg_popup_sub_pane_cp24

0xc51f,	// (0x0003345d) fep_china_uni_candidate_pane_ParamLimits

0xc51f,	// (0x0003345d) fep_china_uni_candidate_pane

0xc533,	// (0x00033471) fep_china_uni_entry_pane

0xc543,	// (0x00033481) popup_fep_china_uni_window_g1

0xc55f,	// (0x0003349d) fep_china_uni_entry_pane_g1

0xc567,	// (0x000334a5) fep_china_uni_entry_pane_g2

0x0001,

0xf762,	// (0x000366a0) fep_china_uni_entry_pane_g

0xc56f,	// (0x000334ad) fep_entry_item_pane

0xc579,	// (0x000334b7) fep_candidate_item_pane

0xc581,	// (0x000334bf) fep_china_uni_candidate_pane_g1

0xc589,	// (0x000334c7) fep_china_uni_candidate_pane_g2

0xc591,	// (0x000334cf) fep_china_uni_candidate_pane_g3

0xc599,	// (0x000334d7) fep_china_uni_candidate_pane_g4

0x0003,

0xf767,	// (0x000366a5) fep_china_uni_candidate_pane_g

0xb905,	// (0x00032843) fep_entry_item_pane_g1

0xc5a1,	// (0x000334df) fep_entry_item_pane_t1_ParamLimits

0xc5a1,	// (0x000334df) fep_entry_item_pane_t1

0xc5b7,	// (0x000334f5) fep_candidate_item_pane_t1_ParamLimits

0xc5b7,	// (0x000334f5) fep_candidate_item_pane_t1

0xc5cc,	// (0x0003350a) fep_candidate_item_pane_t2_ParamLimits

0xc5cc,	// (0x0003350a) fep_candidate_item_pane_t2

0x0001,

0xf770,	// (0x000366ae) fep_candidate_item_pane_t_ParamLimits

0xf770,	// (0x000366ae) fep_candidate_item_pane_t

0xb96b,	// (0x000328a9) list_highlight_pane_cp31_ParamLimits

0xb96b,	// (0x000328a9) list_highlight_pane_cp31

0xc5de,	// (0x0003351c) level_1_signal_lsc

0xc5e7,	// (0x00033525) level_2_signal_lsc

0xc5f0,	// (0x0003352e) level_3_signal_lsc

0xc5f9,	// (0x00033537) level_4_signal_lsc

0xc602,	// (0x00033540) level_5_signal_lsc

0xc60b,	// (0x00033549) level_6_signal_lsc

0xc614,	// (0x00033552) level_7_signal_lsc

0xc614,	// (0x00033552) level_1_battery_lsc

0xc61d,	// (0x0003355b) level_2_battery_lsc

0xc626,	// (0x00033564) level_3_battery_lsc

0xc62f,	// (0x0003356d) level_4_battery_lsc

0xc638,	// (0x00033576) level_5_battery_lsc

0xc641,	// (0x0003357f) level_6_battery_lsc

0xc5de,	// (0x0003351c) level_7_battery_lsc

0xc64a,	// (0x00033588) scroll_handle_focus_pane_g1

0xc653,	// (0x00033591) scroll_handle_focus_pane_g2

0xc65c,	// (0x0003359a) scroll_handle_focus_pane_g3

0x0002,

0xf775,	// (0x000366b3) scroll_handle_focus_pane_g

0x7f3e,	// (0x0002ee7c) list_single_2graphic_pane_g1_ParamLimits

0x7f3e,	// (0x0002ee7c) list_single_2graphic_pane_g1

0x7a25,	// (0x0002e963) list_single_2graphic_pane_g2_ParamLimits

0x7a25,	// (0x0002e963) list_single_2graphic_pane_g2

0x4954,	// (0x0002b892) list_single_2graphic_pane_g3_ParamLimits

0x4954,	// (0x0002b892) list_single_2graphic_pane_g3

0x7f4a,	// (0x0002ee88) list_single_2graphic_pane_g4_ParamLimits

0x7f4a,	// (0x0002ee88) list_single_2graphic_pane_g4

0x0003,

0xf77c,	// (0x000366ba) list_single_2graphic_pane_g_ParamLimits

0xf77c,	// (0x000366ba) list_single_2graphic_pane_g

0x7f5b,	// (0x0002ee99) list_single_2graphic_pane_t1_ParamLimits

0x7f5b,	// (0x0002ee99) list_single_2graphic_pane_t1

0x7f89,	// (0x0002eec7) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7f89,	// (0x0002eec7) list_double2_graphic_large_graphic_pane_g1

0x7a84,	// (0x0002e9c2) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7a84,	// (0x0002e9c2) list_double2_graphic_large_graphic_pane_g2

0x446f,	// (0x0002b3ad) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x446f,	// (0x0002b3ad) list_double2_graphic_large_graphic_pane_g3

0x7f9b,	// (0x0002eed9) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7f9b,	// (0x0002eed9) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf785,	// (0x000366c3) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf785,	// (0x000366c3) list_double2_graphic_large_graphic_pane_g

0x7fa7,	// (0x0002eee5) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7fa7,	// (0x0002eee5) list_double2_graphic_large_graphic_pane_t1

0x7fbd,	// (0x0002eefb) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x7fbd,	// (0x0002eefb) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf78e,	// (0x000366cc) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf78e,	// (0x000366cc) list_double2_graphic_large_graphic_pane_t

0xc71d,	// (0x0003365b) popup_fast_swap_window_ParamLimits

0xc71d,	// (0x0003365b) popup_fast_swap_window

0xc739,	// (0x00033677) popup_side_volume_key_window

0xc755,	// (0x00033693) stacon_top_pane

0xc75f,	// (0x0003369d) status_pane_ParamLimits

0xc75f,	// (0x0003369d) status_pane

0xc755,	// (0x00033693) status_small_pane

0xb90f,	// (0x0003284d) control_pane

0xb90f,	// (0x0003284d) stacon_bottom_pane

0xbf4f,	// (0x00032e8d) scroll_pane_cp121

0xbf46,	// (0x00032e84) set_content_pane

0xc665,	// (0x000335a3) bg_active_tab_pane_g1_cp1

0xc66e,	// (0x000335ac) bg_active_tab_pane_g2_cp1

0xc677,	// (0x000335b5) bg_active_tab_pane_g3_cp1

0xc665,	// (0x000335a3) bg_passive_tab_pane_g1_cp1

0xc66e,	// (0x000335ac) bg_passive_tab_pane_g2_cp1

0xc677,	// (0x000335b5) bg_passive_tab_pane_g3_cp1

0x8d8f,	// (0x0002fccd) bg_active_tab_pane_g1_cp2

0xc66e,	// (0x000335ac) bg_active_tab_pane_g2_cp2

0x8d98,	// (0x0002fcd6) bg_active_tab_pane_g3_cp2

0x8d8f,	// (0x0002fccd) bg_passive_tab_pane_g1_cp2

0xc66e,	// (0x000335ac) bg_passive_tab_pane_g2_cp2

0x8d98,	// (0x0002fcd6) bg_passive_tab_pane_g3_cp2

0x8da1,	// (0x0002fcdf) bg_active_tab_pane_g1_cp3

0xc66e,	// (0x000335ac) bg_active_tab_pane_g2_cp3

0x8daa,	// (0x0002fce8) bg_active_tab_pane_g3_cp3

0x8da1,	// (0x0002fcdf) bg_passive_tab_pane_g1_cp3

0xc66e,	// (0x000335ac) bg_passive_tab_pane_g2_cp3

0x8daa,	// (0x0002fce8) bg_passive_tab_pane_g3_cp3

0x8db3,	// (0x0002fcf1) bg_active_tab_pane_g1_cp4

0xc66e,	// (0x000335ac) bg_active_tab_pane_g2_cp4

0x8dbc,	// (0x0002fcfa) bg_active_tab_pane_g3_cp4

0x8db3,	// (0x0002fcf1) bg_passive_tab_pane_g1_cp4

0xc66e,	// (0x000335ac) bg_passive_tab_pane_g2_cp4

0x8dbc,	// (0x0002fcfa) bg_passive_tab_pane_g3_cp4

0xc6be,	// (0x000335fc) bg_active_tab_pane_g1_cp5

0xc66e,	// (0x000335ac) bg_active_tab_pane_g2_cp5

0xc6c7,	// (0x00033605) bg_active_tab_pane_g3_cp5

0xc6be,	// (0x000335fc) bg_passive_tab_pane_g1_cp5

0xc66e,	// (0x000335ac) bg_passive_tab_pane_g2_cp5

0xc6c7,	// (0x00033605) bg_passive_tab_pane_g3_cp5

0x8bb4,	// (0x0002faf2) list_set_graphic_pane_ParamLimits

0x8bb4,	// (0x0002faf2) list_set_graphic_pane

0xb90f,	// (0x0003284d) bg_set_opt_pane_cp4

0x8dc5,	// (0x0002fd03) list_set_graphic_pane_g1_ParamLimits

0x8dc5,	// (0x0002fd03) list_set_graphic_pane_g1

0x8dd1,	// (0x0002fd0f) list_set_graphic_pane_g2_ParamLimits

0x8dd1,	// (0x0002fd0f) list_set_graphic_pane_g2

0x0001,

0xf793,	// (0x000366d1) list_set_graphic_pane_g_ParamLimits

0xf793,	// (0x000366d1) list_set_graphic_pane_g

0x0009,

0xfb00,	// (0x00036a3e) volume_small_pane_cp_g

0xc6d0,	// (0x0003360e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc6d0,	// (0x0003360e) list_double2_large_graphic_pane_g1_cp2

0xc6dc,	// (0x0003361a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc6dc,	// (0x0003361a) list_double2_large_graphic_pane_g2_cp2

0xc6ed,	// (0x0003362b) list_double2_large_graphic_pane_g3_cp2

0xc6f5,	// (0x00033633) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc6f5,	// (0x00033633) list_double2_large_graphic_pane_t1_cp2

0xc70b,	// (0x00033649) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc70b,	// (0x00033649) list_double2_large_graphic_pane_t2_cp2

0xde40,	// (0x00034d7e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xde40,	// (0x00034d7e) list_double_large_graphic_pane_g1_cp2

0xde51,	// (0x00034d8f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xde51,	// (0x00034d8f) list_double_large_graphic_pane_g2_cp2

0xc87b,	// (0x000337b9) list_double_large_graphic_pane_g3_cp2

0xde62,	// (0x00034da0) list_double_large_graphic_pane_g4_cp

0xde6a,	// (0x00034da8) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xde6a,	// (0x00034da8) list_double_large_graphic_pane_t1_cp2

0xde81,	// (0x00034dbf) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xde81,	// (0x00034dbf) list_double_large_graphic_pane_t2_cp2

0xc76d,	// (0x000336ab) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc76d,	// (0x000336ab) list_double2_graphic_pane_g1_cp2

0xc77b,	// (0x000336b9) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc77b,	// (0x000336b9) list_double2_graphic_pane_g2_cp2

0xc78c,	// (0x000336ca) list_double2_graphic_pane_g3_cp2

0xc796,	// (0x000336d4) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc796,	// (0x000336d4) list_double2_graphic_pane_t1_cp2

0xc7ac,	// (0x000336ea) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc7ac,	// (0x000336ea) list_double2_graphic_pane_t2_cp2

0xc7be,	// (0x000336fc) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc7be,	// (0x000336fc) list_single_number_heading_pane_g1_cp2

0xc7ca,	// (0x00033708) list_single_number_heading_pane_g2_cp2

0xc7d2,	// (0x00033710) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc7d2,	// (0x00033710) list_single_number_heading_pane_t1_cp2

0xc7e8,	// (0x00033726) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc7e8,	// (0x00033726) list_single_number_heading_pane_t2_cp2

0xc7fa,	// (0x00033738) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc7fa,	// (0x00033738) list_single_number_heading_pane_t3_cp2

0xc7be,	// (0x000336fc) list_single_heading_pane_g1_cp2_ParamLimits

0xc7be,	// (0x000336fc) list_single_heading_pane_g1_cp2

0xc7ca,	// (0x00033708) list_single_heading_pane_g2_cp2

0xc7d2,	// (0x00033710) list_single_heading_pane_t1_cp2_ParamLimits

0xc7d2,	// (0x00033710) list_single_heading_pane_t1_cp2

0xdc48,	// (0x00034b86) list_single_heading_pane_t2_cp2_ParamLimits

0xdc48,	// (0x00034b86) list_single_heading_pane_t2_cp2

0xdbae,	// (0x00034aec) list_double_graphic_pane_g1_cp2_ParamLimits

0xdbae,	// (0x00034aec) list_double_graphic_pane_g1_cp2

0xdbba,	// (0x00034af8) list_double_graphic_pane_g2_cp2_ParamLimits

0xdbba,	// (0x00034af8) list_double_graphic_pane_g2_cp2

0xdbc9,	// (0x00034b07) list_double_graphic_pane_g3_cp2

0xdbd1,	// (0x00034b0f) list_double_graphic_pane_t1_cp2_ParamLimits

0xdbd1,	// (0x00034b0f) list_double_graphic_pane_t1_cp2

0xdbe7,	// (0x00034b25) list_double_graphic_pane_t2_cp2_ParamLimits

0xdbe7,	// (0x00034b25) list_double_graphic_pane_t2_cp2

0xc86f,	// (0x000337ad) list_double_number_pane_g1_cp2_ParamLimits

0xc86f,	// (0x000337ad) list_double_number_pane_g1_cp2

0xc87b,	// (0x000337b9) list_double_number_pane_g2_cp2

0xdb72,	// (0x00034ab0) list_double_number_pane_t1_cp2_ParamLimits

0xdb72,	// (0x00034ab0) list_double_number_pane_t1_cp2

0xdb86,	// (0x00034ac4) list_double_number_pane_t2_cp2_ParamLimits

0xdb86,	// (0x00034ac4) list_double_number_pane_t2_cp2

0xdb9c,	// (0x00034ada) list_double_number_pane_t3_cp2_ParamLimits

0xdb9c,	// (0x00034ada) list_double_number_pane_t3_cp2

0xdae9,	// (0x00034a27) list_single_graphic_pane_g1_cp2_ParamLimits

0xdae9,	// (0x00034a27) list_single_graphic_pane_g1_cp2

0xc8d3,	// (0x00033811) list_single_graphic_pane_g2_cp2_ParamLimits

0xc8d3,	// (0x00033811) list_single_graphic_pane_g2_cp2

0xc8df,	// (0x0003381d) list_single_graphic_pane_g3_cp2

0xdabf,	// (0x000349fd) list_single_graphic_pane_t1_cp2_ParamLimits

0xdabf,	// (0x000349fd) list_single_graphic_pane_t1_cp2

0xc8d3,	// (0x00033811) list_single_number_pane_g1_cp2_ParamLimits

0xc8d3,	// (0x00033811) list_single_number_pane_g1_cp2

0xc8df,	// (0x0003381d) list_single_number_pane_g2_cp2

0xdabf,	// (0x000349fd) list_single_number_pane_t1_cp2_ParamLimits

0xdabf,	// (0x000349fd) list_single_number_pane_t1_cp2

0xdad5,	// (0x00034a13) list_single_number_pane_t2_cp2_ParamLimits

0xdad5,	// (0x00034a13) list_single_number_pane_t2_cp2

0xc6dc,	// (0x0003361a) list_double2_pane_g1_cp2_ParamLimits

0xc6dc,	// (0x0003361a) list_double2_pane_g1_cp2

0xc6ed,	// (0x0003362b) list_double2_pane_g2_cp2

0xc847,	// (0x00033785) list_double2_pane_t1_cp2_ParamLimits

0xc847,	// (0x00033785) list_double2_pane_t1_cp2

0xc85d,	// (0x0003379b) list_double2_pane_t2_cp2_ParamLimits

0xc85d,	// (0x0003379b) list_double2_pane_t2_cp2

0xc86f,	// (0x000337ad) list_double_pane_g1_cp2_ParamLimits

0xc86f,	// (0x000337ad) list_double_pane_g1_cp2

0xc87b,	// (0x000337b9) list_double_pane_g2_cp2

0xc883,	// (0x000337c1) list_double_pane_t1_cp2_ParamLimits

0xc883,	// (0x000337c1) list_double_pane_t1_cp2

0xc899,	// (0x000337d7) list_double_pane_t2_cp2_ParamLimits

0xc899,	// (0x000337d7) list_double_pane_t2_cp2

0xc8c3,	// (0x00033801) list_single_pane_cp2_g3

0xc8d3,	// (0x00033811) list_single_pane_g1_cp2_ParamLimits

0xc8d3,	// (0x00033811) list_single_pane_g1_cp2

0xc8df,	// (0x0003381d) list_single_pane_g2_cp2

0xc8e7,	// (0x00033825) list_single_pane_t1_cp2_ParamLimits

0xc8e7,	// (0x00033825) list_single_pane_t1_cp2

0xc8ff,	// (0x0003383d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc8ff,	// (0x0003383d) list_single_large_graphic_pane_g1_cp2

0xc90b,	// (0x00033849) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc90b,	// (0x00033849) list_single_large_graphic_pane_g2_cp2

0xc917,	// (0x00033855) list_single_large_graphic_pane_g3_cp2

0xc91f,	// (0x0003385d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc91f,	// (0x0003385d) list_single_large_graphic_pane_g4_cp1

0xc939,	// (0x00033877) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc939,	// (0x00033877) list_single_large_graphic_pane_t1_cp2

0xda6d,	// (0x000349ab) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xda6d,	// (0x000349ab) list_single_graphic_heading_pane_g1_cp2

0xda3a,	// (0x00034978) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xda3a,	// (0x00034978) list_single_graphic_heading_pane_g4_cp2

0xc8df,	// (0x0003381d) list_single_graphic_heading_pane_g5_cp2

0xda97,	// (0x000349d5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xda97,	// (0x000349d5) list_single_graphic_heading_pane_t1_cp2

0xdaad,	// (0x000349eb) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xdaad,	// (0x000349eb) list_single_graphic_heading_pane_t2_cp2

0xda2e,	// (0x0003496c) list_single_2graphic_pane_g1_cp2_ParamLimits

0xda2e,	// (0x0003496c) list_single_2graphic_pane_g1_cp2

0xda3a,	// (0x00034978) list_single_2graphic_pane_g2_cp2_ParamLimits

0xda3a,	// (0x00034978) list_single_2graphic_pane_g2_cp2

0xc8df,	// (0x0003381d) list_single_2graphic_pane_g3_cp2

0xda4b,	// (0x00034989) list_single_2graphic_pane_g4_cp2_ParamLimits

0xda4b,	// (0x00034989) list_single_2graphic_pane_g4_cp2

0xda57,	// (0x00034995) list_single_2graphic_pane_t1_cp2_ParamLimits

0xda57,	// (0x00034995) list_single_2graphic_pane_t1_cp2

0xb905,	// (0x00032843) list_highlight_pane_g10_cp1

0xd624,	// (0x00034562) list_highlight_pane_g1_cp1

0xd62c,	// (0x0003456a) list_highlight_pane_g2_cp1

0xd634,	// (0x00034572) list_highlight_pane_g3_cp1

0xd63c,	// (0x0003457a) list_highlight_pane_g4_cp1

0xd644,	// (0x00034582) list_highlight_pane_g5_cp1

0xd64c,	// (0x0003458a) list_highlight_pane_g6_cp1

0xd654,	// (0x00034592) list_highlight_pane_g7_cp1

0xd65c,	// (0x0003459a) list_highlight_pane_g8_cp1

0xd664,	// (0x000345a2) list_highlight_pane_g9_cp1

0x9bfd,	// (0x00030b3b) form_field_slider_pane_t3

0x9c0b,	// (0x00030b49) form_field_slider_pane_t4

0xd560,	// (0x0003449e) slider_form_pane_ParamLimits

0xd560,	// (0x0003449e) slider_form_pane

0xb90f,	// (0x0003284d) control_abbreviations

0xb90f,	// (0x0003284d) control_conventions

0xb90f,	// (0x0003284d) control_definitions

0xb90f,	// (0x0003284d) format_table_attribute

0xdc92,	// (0x00034bd0) bg_popup_preview_window_pane_g9

0xb90f,	// (0x0003284d) format_table_data2

0xb90f,	// (0x0003284d) format_table_data3

0xb90f,	// (0x0003284d) format_table_data_example

0x0008,

0xb90f,	// (0x0003284d) intro_purpose

0xf923,	// (0x00036861) bg_popup_preview_window_pane_g

0xb90f,	// (0x0003284d) texts_category

0xb90f,	// (0x0003284d) texts_graphics

0xc94f,	// (0x0003388d) text_digital

0xc95e,	// (0x0003389c) text_primary

0xc96d,	// (0x000338ab) text_primary_small

0xc97c,	// (0x000338ba) text_secondary

0xc98b,	// (0x000338c9) text_title

0xe12d,	// (0x0003506b) bg_passive_tab_pane_g1_cp3_srt

0xc66e,	// (0x000335ac) bg_passive_tab_pane_g2_cp3_srt

0xe136,	// (0x00035074) bg_passive_tab_pane_g3_cp3_srt

0xb95d,	// (0x0003289b) bg_active_tab_pane_cp3_srt_ParamLimits

0xb95d,	// (0x0003289b) bg_active_tab_pane_cp3_srt

0xe13f,	// (0x0003507d) tabs_4_active_pane_srt_g1

0x9f8f,	// (0x00030ecd) tabs_4_active_pane_srt_t1_ParamLimits

0x9f8f,	// (0x00030ecd) tabs_4_active_pane_srt_t1

0xe12d,	// (0x0003506b) bg_active_tab_pane_g1_cp3_copy1

0xc66e,	// (0x000335ac) bg_active_tab_pane_g2_cp3_copy1

0xe136,	// (0x00035074) bg_active_tab_pane_g3_cp3_copy1

0xb96b,	// (0x000328a9) tabs_2_long_active_pane_srt_ParamLimits

0xb96b,	// (0x000328a9) tabs_2_long_active_pane_srt

0xb96b,	// (0x000328a9) tabs_2_long_passive_pane_srt_ParamLimits

0xb96b,	// (0x000328a9) tabs_2_long_passive_pane_srt

0xc0cd,	// (0x0003300b) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc0cd,	// (0x0003300b) bg_passive_tab_pane_cp4_srt

0xe047,	// (0x00034f85) bg_passive_tab_pane_g1_cp4_srt

0xc66e,	// (0x000335ac) bg_passive_tab_pane_g2_cp4_srt

0xe050,	// (0x00034f8e) bg_passive_tab_pane_g3_cp4_srt

0xb96b,	// (0x000328a9) bg_active_tab_pane_cp4_srt_ParamLimits

0xb96b,	// (0x000328a9) bg_active_tab_pane_cp4_srt

0x9d9d,	// (0x00030cdb) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9d9d,	// (0x00030cdb) tabs_2_long_active_pane_srt_t1

0xe047,	// (0x00034f85) bg_active_tab_pane_g1_cp4_srt

0xc66e,	// (0x000335ac) bg_active_tab_pane_g2_cp4_srt

0xe050,	// (0x00034f8e) bg_active_tab_pane_g3_cp4_srt

0xb95d,	// (0x0003289b) tabs_3_long_active_pane_srt_ParamLimits

0xb95d,	// (0x0003289b) tabs_3_long_active_pane_srt

0xb95d,	// (0x0003289b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb95d,	// (0x0003289b) tabs_3_long_passive_pane_cp_srt

0xb95d,	// (0x0003289b) tabs_3_long_passive_pane_srt_ParamLimits

0xb95d,	// (0x0003289b) tabs_3_long_passive_pane_srt

0xc0cd,	// (0x0003300b) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc0cd,	// (0x0003300b) bg_passive_tab_pane_cp5_srt

0xc6be,	// (0x000335fc) bg_passive_tab_pane_g1_cp5_srt

0xc66e,	// (0x000335ac) bg_passive_tab_pane_g2_cp5_srt

0xc6c7,	// (0x00033605) bg_passive_tab_pane_g3_cp5_srt

0xb96b,	// (0x000328a9) bg_active_tab_pane_cp5_srt_ParamLimits

0xb96b,	// (0x000328a9) bg_active_tab_pane_cp5_srt

0x9d87,	// (0x00030cc5) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9d87,	// (0x00030cc5) tabs_3_long_active_pane_srt_t1

0xc6be,	// (0x000335fc) bg_active_tab_pane_g1_cp5_srt

0xc66e,	// (0x000335ac) bg_active_tab_pane_g2_cp5_srt

0xc6c7,	// (0x00033605) bg_active_tab_pane_g3_cp5_srt

0xe039,	// (0x00034f77) navi_text_pane_srt_t1

0xe031,	// (0x00034f6f) navi_icon_pane_srt_g1

0xca91,	// (0x000339cf) midp_editing_number_pane_srt

0xc99a,	// (0x000338d8) midp_ticker_pane_srt

0xca99,	// (0x000339d7) midp_ticker_pane_srt_g1

0xcaa1,	// (0x000339df) midp_ticker_pane_srt_g2

0x0001,

0xf7b2,	// (0x000366f0) midp_ticker_pane_srt_g

0xcaa9,	// (0x000339e7) midp_ticker_pane_srt_t1

0xe022,	// (0x00034f60) midp_editing_number_pane_t1_copy1

0x8df5,	// (0x0002fd33) listscroll_midp_pane

0x8df5,	// (0x0002fd33) midp_form_pane

0xc9a2,	// (0x000338e0) midp_info_popup_window_ParamLimits

0xc9a2,	// (0x000338e0) midp_info_popup_window

0xc02d,	// (0x00032f6b) bg_popup_sub_pane_cp50_ParamLimits

0xc02d,	// (0x00032f6b) bg_popup_sub_pane_cp50

0xd279,	// (0x000341b7) listscroll_midp_info_pane_ParamLimits

0xd279,	// (0x000341b7) listscroll_midp_info_pane

0xd261,	// (0x0003419f) listscroll_form_midp_pane_ParamLimits

0xd261,	// (0x0003419f) listscroll_form_midp_pane

0xd26d,	// (0x000341ab) scroll_bar_cp050

0x9bf1,	// (0x00030b2f) list_midp_pane

0xe9a3,	// (0x000358e1) signal_pane_g2_cp

0xd193,	// (0x000340d1) listscroll_midp_info_pane_t1_ParamLimits

0xd193,	// (0x000340d1) listscroll_midp_info_pane_t1

0xd1ab,	// (0x000340e9) listscroll_midp_info_pane_t2_ParamLimits

0xd1ab,	// (0x000340e9) listscroll_midp_info_pane_t2

0xd1e9,	// (0x00034127) listscroll_midp_info_pane_t3_ParamLimits

0xd1e9,	// (0x00034127) listscroll_midp_info_pane_t3

0xd223,	// (0x00034161) listscroll_midp_info_pane_t4_ParamLimits

0xd223,	// (0x00034161) listscroll_midp_info_pane_t4

0x0003,

0xf85e,	// (0x0003679c) listscroll_midp_info_pane_t_ParamLimits

0xf85e,	// (0x0003679c) listscroll_midp_info_pane_t

0xc094,	// (0x00032fd2) scroll_pane_cp21

0xd131,	// (0x0003406f) form_midp_field_choice_group_pane

0xd13a,	// (0x00034078) form_midp_field_text_pane

0xd179,	// (0x000340b7) form_midp_field_time_pane

0xd181,	// (0x000340bf) form_midp_gauge_slider_pane

0xd18a,	// (0x000340c8) form_midp_gauge_wait_pane

0xb90f,	// (0x0003284d) form_midp_image_pane

0x817f,	// (0x0002f0bd) list_single_midp_pane_ParamLimits

0x817f,	// (0x0002f0bd) list_single_midp_pane

0x9bcf,	// (0x00030b0d) form_midp_field_text_pane_t1

0xcfd8,	// (0x00033f16) input_focus_pane_cp050

0xd120,	// (0x0003405e) list_midp_form_text_pane

0xd0ef,	// (0x0003402d) form_midp_field_choice_group_pane_t1

0xd0fd,	// (0x0003403b) input_focus_pane_cp051

0xd111,	// (0x0003404f) list_midp_choice_pane

0xb90f,	// (0x0003284d) status_idle_pane

0xd0d3,	// (0x00034011) form_midp_field_time_pane_t1

0xb905,	// (0x00032843) wait_anim_pane_g2_copy1

0xd0e1,	// (0x0003401f) form_midp_field_time_pane_t2

0x0001,

0xc9fb,	// (0x00033939) aid_navinavi_width_2_pane

0xf859,	// (0x00036797) form_midp_field_time_pane_t

0xb90f,	// (0x0003284d) input_focus_pane_cp052

0xb90f,	// (0x0003284d) bg_input_focus_pane_cp040

0xd0af,	// (0x00033fed) form_midp_gauge_slider_pane_t1

0xd0bd,	// (0x00033ffb) form_midp_gauge_slider_pane_t2

0x9bb3,	// (0x00030af1) form_midp_gauge_slider_pane_t3

0x9bc1,	// (0x00030aff) form_midp_gauge_slider_pane_t4

0x0003,

0xf850,	// (0x0003678e) form_midp_gauge_slider_pane_t

0xd0cb,	// (0x00034009) form_midp_slider_pane

0xb96b,	// (0x000328a9) bg_input_focus_pane_cp041_ParamLimits

0xb96b,	// (0x000328a9) bg_input_focus_pane_cp041

0xd07c,	// (0x00033fba) form_midp_gauge_wait_pane_t1_ParamLimits

0xd07c,	// (0x00033fba) form_midp_gauge_wait_pane_t1

0xd08e,	// (0x00033fcc) form_midp_gauge_wait_pane_t2_ParamLimits

0xd08e,	// (0x00033fcc) form_midp_gauge_wait_pane_t2

0x0001,

0xf84b,	// (0x00036789) form_midp_gauge_wait_pane_t_ParamLimits

0xf84b,	// (0x00036789) form_midp_gauge_wait_pane_t

0xd0a0,	// (0x00033fde) form_midp_wait_pane_ParamLimits

0xd0a0,	// (0x00033fde) form_midp_wait_pane

0xd046,	// (0x00033f84) form_midp_image_pane_g1

0xd04f,	// (0x00033f8d) form_midp_image_pane_t1

0xd05e,	// (0x00033f9c) form_midp_image_pane_t2

0xd06d,	// (0x00033fab) form_midp_image_pane_t3

0x0002,

0xf844,	// (0x00036782) form_midp_image_pane_t

0xd03d,	// (0x00033f7b) list_single_midp_pane_g1

0x498a,	// (0x0002b8c8) list_single_midp_pane_t1

0x9b9e,	// (0x00030adc) list_midp_form_item_pane_ParamLimits

0x9b9e,	// (0x00030adc) list_midp_form_item_pane

0xc9b5,	// (0x000338f3) list_midp_form_item_pane_t1

0xc9c4,	// (0x00033902) midp_ticker_pane_g1

0xc9d0,	// (0x0003390e) midp_ticker_pane_g2

0x0001,

0xf798,	// (0x000366d6) midp_ticker_pane_g

0x8e9d,	// (0x0002fddb) midp_ticker_pane_t1

0x9f08,	// (0x00030e46) midp_editing_number_pane_t1

0xe0b6,	// (0x00034ff4) midp_editing_number_pane

0xe0c5,	// (0x00035003) midp_ticker_pane

0xe012,	// (0x00034f50) ai_message_heading_pane

0xb90f,	// (0x0003284d) bg_popup_window_pane_cp14

0xe01a,	// (0x00034f58) listscroll_ai_message_pane

0xdf9c,	// (0x00034eda) ai_message_heading_pane_g1_ParamLimits

0xdf9c,	// (0x00034eda) ai_message_heading_pane_g1

0xdfa8,	// (0x00034ee6) ai_message_heading_pane_g2_ParamLimits

0xdfa8,	// (0x00034ee6) ai_message_heading_pane_g2

0xdfb4,	// (0x00034ef2) ai_message_heading_pane_g3_ParamLimits

0xdfb4,	// (0x00034ef2) ai_message_heading_pane_g3

0xdfc0,	// (0x00034efe) ai_message_heading_pane_g4_ParamLimits

0xdfc0,	// (0x00034efe) ai_message_heading_pane_g4

0x0003,

0xf985,	// (0x000368c3) ai_message_heading_pane_g_ParamLimits

0xf985,	// (0x000368c3) ai_message_heading_pane_g

0xdfcc,	// (0x00034f0a) ai_message_heading_pane_t1_ParamLimits

0xdfcc,	// (0x00034f0a) ai_message_heading_pane_t1

0xdfe6,	// (0x00034f24) ai_message_heading_pane_t2_ParamLimits

0xdfe6,	// (0x00034f24) ai_message_heading_pane_t2

0x0001,

0xf98e,	// (0x000368cc) ai_message_heading_pane_t_ParamLimits

0xf98e,	// (0x000368cc) ai_message_heading_pane_t

0xdff8,	// (0x00034f36) bg_popup_heading_pane_cp1_ParamLimits

0xdff8,	// (0x00034f36) bg_popup_heading_pane_cp1

0xdf8a,	// (0x00034ec8) list_ai_message_pane_ParamLimits

0xdf8a,	// (0x00034ec8) list_ai_message_pane

0xc094,	// (0x00032fd2) scroll_pane_cp10

0xdf26,	// (0x00034e64) list_ai_message_pane_g1

0xdf2e,	// (0x00034e6c) list_ai_message_pane_g2

0x0001,

0xf962,	// (0x000368a0) list_ai_message_pane_g

0xdf36,	// (0x00034e74) list_ai_message_pane_t1_ParamLimits

0xdf36,	// (0x00034e74) list_ai_message_pane_t1

0xdf4b,	// (0x00034e89) list_ai_message_pane_t2_ParamLimits

0xdf4b,	// (0x00034e89) list_ai_message_pane_t2

0xdf60,	// (0x00034e9e) list_ai_message_pane_t3_ParamLimits

0xdf60,	// (0x00034e9e) list_ai_message_pane_t3

0xdf75,	// (0x00034eb3) list_ai_message_pane_t4_ParamLimits

0xdf75,	// (0x00034eb3) list_ai_message_pane_t4

0x0003,

0xf967,	// (0x000368a5) list_ai_message_pane_t_ParamLimits

0xf967,	// (0x000368a5) list_ai_message_pane_t

0x9d66,	// (0x00030ca4) cell_ai_soft_ind_pane_ParamLimits

0x9d66,	// (0x00030ca4) cell_ai_soft_ind_pane

0xc9dc,	// (0x0003391a) cell_ai_soft_ind_pane_g1_ParamLimits

0xc9dc,	// (0x0003391a) cell_ai_soft_ind_pane_g1

0xb90f,	// (0x0003284d) grid_highlight_cp1

0xc9e9,	// (0x00033927) text_secondary_cp56_ParamLimits

0xc9e9,	// (0x00033927) text_secondary_cp56

0xdefb,	// (0x00034e39) example_general_pane_ParamLimits

0xdefb,	// (0x00034e39) example_general_pane

0xdf07,	// (0x00034e45) example_parent_pane_g1_ParamLimits

0xdf07,	// (0x00034e45) example_parent_pane_g1

0xdf13,	// (0x00034e51) example_parent_pane_t1_ParamLimits

0xdf13,	// (0x00034e51) example_parent_pane_t1

0x92b8,	// (0x000301f6) popup_preview_text_window_ParamLimits

0x92b8,	// (0x000301f6) popup_preview_text_window

0xc8cb,	// (0x00033809) list_single_pane_cp2_g4

0xbb46,	// (0x00032a84) bg_popup_preview_window_pane_ParamLimits

0xbb46,	// (0x00032a84) bg_popup_preview_window_pane

0xdc9a,	// (0x00034bd8) popup_preview_text_window_t1_ParamLimits

0xdc9a,	// (0x00034bd8) popup_preview_text_window_t1

0xdcb8,	// (0x00034bf6) popup_preview_text_window_t2_ParamLimits

0xdcb8,	// (0x00034bf6) popup_preview_text_window_t2

0xdd01,	// (0x00034c3f) popup_preview_text_window_t3_ParamLimits

0xdd01,	// (0x00034c3f) popup_preview_text_window_t3

0xdd46,	// (0x00034c84) popup_preview_text_window_t4_ParamLimits

0xdd46,	// (0x00034c84) popup_preview_text_window_t4

0x0004,

0xf936,	// (0x00036874) popup_preview_text_window_t_ParamLimits

0xf936,	// (0x00036874) popup_preview_text_window_t

0xddc4,	// (0x00034d02) scroll_pane_cp11

0xcee8,	// (0x00033e26) bg_popup_preview_window_pane_g1

0xdc5a,	// (0x00034b98) bg_popup_preview_window_pane_g2

0xdc62,	// (0x00034ba0) bg_popup_preview_window_pane_g3

0xdc6a,	// (0x00034ba8) bg_popup_preview_window_pane_g4

0xdc72,	// (0x00034bb0) bg_popup_preview_window_pane_g5

0xdc7a,	// (0x00034bb8) bg_popup_preview_window_pane_g6

0xdc82,	// (0x00034bc0) bg_popup_preview_window_pane_g7

0xdc8a,	// (0x00034bc8) bg_popup_preview_window_pane_g8

0x036f,	// (0x000272ad) aid_popup_width_pane

0x9234,	// (0x00030172) popup_midp_note_alarm_window_ParamLimits

0x9234,	// (0x00030172) popup_midp_note_alarm_window

0xbf60,	// (0x00032e9e) data_form_pane_ParamLimits

0x7e39,	// (0x0002ed77) form_field_data_pane_g1

0x7e43,	// (0x0002ed81) form_field_data_pane_t1_ParamLimits

0xbf6c,	// (0x00032eaa) input_focus_pane_ParamLimits

0xbf7a,	// (0x00032eb8) data_form_wide_pane_ParamLimits

0x46d4,	// (0x0002b612) form_field_data_wide_pane_g1

0x46e0,	// (0x0002b61e) form_field_data_wide_pane_t1_ParamLimits

0xbce7,	// (0x00032c25) input_focus_pane_cp6_ParamLimits

0x8c15,	// (0x0002fb53) input_popup_find_pane_g1_ParamLimits

0x8c15,	// (0x0002fb53) input_popup_find_pane_g1

0x0c78,	// (0x00027bb6) aid_navi_side_left_pane

0x0c8d,	// (0x00027bcb) aid_navi_side_right_pane

0xd701,	// (0x0003463f) bg_popup_window_pane_cp30_ParamLimits

0xd701,	// (0x0003463f) bg_popup_window_pane_cp30

0xd77b,	// (0x000346b9) popup_midp_note_alarm_window_g1_ParamLimits

0xd77b,	// (0x000346b9) popup_midp_note_alarm_window_g1

0xd7ab,	// (0x000346e9) popup_midp_note_alarm_window_t1_ParamLimits

0xd7ab,	// (0x000346e9) popup_midp_note_alarm_window_t1

0xd84c,	// (0x0003478a) popup_midp_note_alarm_window_t2_ParamLimits

0xd84c,	// (0x0003478a) popup_midp_note_alarm_window_t2

0xd8fa,	// (0x00034838) popup_midp_note_alarm_window_t3_ParamLimits

0xd8fa,	// (0x00034838) popup_midp_note_alarm_window_t3

0xd92c,	// (0x0003486a) popup_midp_note_alarm_window_t4_ParamLimits

0xd92c,	// (0x0003486a) popup_midp_note_alarm_window_t4

0xd952,	// (0x00034890) popup_midp_note_alarm_window_t5_ParamLimits

0xd952,	// (0x00034890) popup_midp_note_alarm_window_t5

0x000a,

0xf8d3,	// (0x00036811) popup_midp_note_alarm_window_t_ParamLimits

0xf8d3,	// (0x00036811) popup_midp_note_alarm_window_t

0xd9fe,	// (0x0003493c) wait_bar_pane_cp1_ParamLimits

0xd9fe,	// (0x0003493c) wait_bar_pane_cp1

0xb90f,	// (0x0003284d) wait_anim_pane_copy1

0xb90f,	// (0x0003284d) wait_border_pane_copy1

0xd421,	// (0x0003435f) wait_border_pane_g1_copy1

0x46fa,	// (0x0002b638) form_field_popup_pane_g1

0x7e5d,	// (0x0002ed9b) form_field_popup_pane_t1_ParamLimits

0xbf6c,	// (0x00032eaa) input_focus_pane_cp7_ParamLimits

0xbfaf,	// (0x00032eed) list_form_pane_ParamLimits

0x471a,	// (0x0002b658) form_field_popup_wide_pane_g1

0x4722,	// (0x0002b660) form_field_popup_wide_pane_t1_ParamLimits

0xbf6c,	// (0x00032eaa) input_focus_pane_cp8_ParamLimits

0xbfbb,	// (0x00032ef9) list_form_wide_pane_ParamLimits

0xe166,	// (0x000350a4) aid_size_cell_graphic_pane

0x7edc,	// (0x0002ee1a) data_form_pane_t1_ParamLimits

0x82f6,	// (0x0002f234) data_form_wide_pane_t1_ParamLimits

0x982a,	// (0x00030768) bg_status_flat_pane

0x8849,	// (0x0002f787) title_pane_t1_ParamLimits

0xb925,	// (0x00032863) title_pane_t2_ParamLimits

0xb94b,	// (0x00032889) title_pane_t3_ParamLimits

0xf59b,	// (0x000364d9) title_pane_t_ParamLimits

0xc442,	// (0x00033380) level_1_signal_ParamLimits

0xc44f,	// (0x0003338d) level_2_signal_ParamLimits

0xc45c,	// (0x0003339a) level_3_signal_ParamLimits

0xc469,	// (0x000333a7) level_4_signal_ParamLimits

0xc476,	// (0x000333b4) level_5_signal_ParamLimits

0xc483,	// (0x000333c1) level_6_signal_ParamLimits

0xc490,	// (0x000333ce) level_7_signal_ParamLimits

0xc442,	// (0x00033380) level_1_battery_ParamLimits

0xc44f,	// (0x0003338d) level_2_battery_ParamLimits

0xc45c,	// (0x0003339a) level_3_battery_ParamLimits

0xc469,	// (0x000333a7) level_4_battery_ParamLimits

0xc476,	// (0x000333b4) level_5_battery_ParamLimits

0xc483,	// (0x000333c1) level_6_battery_ParamLimits

0xc490,	// (0x000333ce) level_7_battery_ParamLimits

0xd624,	// (0x00034562) bg_status_flat_pane_g1

0xd62c,	// (0x0003456a) bg_status_flat_pane_g2

0xd634,	// (0x00034572) bg_status_flat_pane_g3

0xd63c,	// (0x0003457a) bg_status_flat_pane_g4

0xd644,	// (0x00034582) bg_status_flat_pane_g5

0xd64c,	// (0x0003458a) bg_status_flat_pane_g6

0xd654,	// (0x00034592) bg_status_flat_pane_g7

0x88dd,	// (0x0002f81b) tabs_3_active_pane_t1_ParamLimits

0x88dd,	// (0x0002f81b) tabs_3_passive_pane_t1_ParamLimits

0x88f7,	// (0x0002f835) tabs_4_active_pane_t1_ParamLimits

0x88f7,	// (0x0002f835) tabs_4_1_passive_pane_t1_ParamLimits

0x8c2b,	// (0x0002fb69) tabs_2_active_pane_t1_ParamLimits

0x8c2b,	// (0x0002fb69) tabs_2_passive_pane_t1_ParamLimits

0xb96b,	// (0x000328a9) bg_active_tab_pane_cp4_ParamLimits

0x8c3d,	// (0x0002fb7b) tabs_2_long_active_pane_t1_ParamLimits

0xc0cd,	// (0x0003300b) bg_passive_tab_pane_cp4_ParamLimits

0x1bfa,	// (0x00028b38) list_single_midp_graphic_pane_t1_ParamLimits

0xb96b,	// (0x000328a9) bg_active_tab_pane_cp5_ParamLimits

0x8c50,	// (0x0002fb8e) tabs_3_long_active_pane_t1_ParamLimits

0xc0cd,	// (0x0003300b) bg_passive_tab_pane_cp5_ParamLimits

0x1bfa,	// (0x00028b38) list_single_midp_graphic_pane_t1

0x982a,	// (0x00030768) bg_status_flat_pane_ParamLimits

0xcdb9,	// (0x00033cf7) indicator_pane_cp2_ParamLimits

0xcdb9,	// (0x00033cf7) indicator_pane_cp2

0x99a1,	// (0x000308df) navi_pane_srt_ParamLimits

0x99a1,	// (0x000308df) navi_pane_srt

0xcde1,	// (0x00033d1f) popup_clock_digital_analogue_window_cp1

0xb9af,	// (0x000328ed) indicator_pane_t1

0xc99a,	// (0x000338d8) copy_highlight_pane

0xc99a,	// (0x000338d8) cursor_graphics_pane

0xc99a,	// (0x000338d8) graphic_within_text_pane

0xc99a,	// (0x000338d8) link_highlight_pane

0xdd87,	// (0x00034cc5) popup_preview_text_window_t5_ParamLimits

0xdd87,	// (0x00034cc5) popup_preview_text_window_t5

0xca03,	// (0x00033941) cursor_digital_pane

0xca03,	// (0x00033941) cursor_primary_pane

0xca14,	// (0x00033952) cursor_primary_small_pane

0xca1c,	// (0x0003395a) cursor_secondary_pane

0xca24,	// (0x00033962) cursor_title_pane

0xca03,	// (0x00033941) link_highlight_digital_pane

0xca0b,	// (0x00033949) link_highlight_primary_pane

0xca14,	// (0x00033952) link_highlight_primary_small_pane

0xca1c,	// (0x0003395a) link_highlight_secondary_pane

0xca24,	// (0x00033962) link_highlight_title_pane

0xca03,	// (0x00033941) copy_highlight_digital_pane

0xca03,	// (0x00033941) copy_highlight_primary_pane

0xca14,	// (0x00033952) copy_highlight_primary_small_pane

0xca1c,	// (0x0003395a) copy_highlight_secondary_pane

0xca24,	// (0x00033962) copy_highlight_title_pane

0xca1c,	// (0x0003395a) graphic_text_digital_pane

0xd6a4,	// (0x000345e2) graphic_text_primary_pane

0xd6ad,	// (0x000345eb) graphic_text_primary_small_pane

0xca14,	// (0x00033952) graphic_text_secondary_pane

0xca03,	// (0x00033941) graphic_text_title_pane

0x8eaf,	// (0x0002fded) cursor_primary_pane_g1

0xd696,	// (0x000345d4) cursor_text_primary_t1

0x9c2d,	// (0x00030b6b) cursor_primary_small_pane_g1

0xd688,	// (0x000345c6) cursor_text_primary_small_t1

0x9c23,	// (0x00030b61) cursor_primary_small_pane_g1_copy1

0xd67a,	// (0x000345b8) cursor_text_primary_small_t1_copy1

0xd66c,	// (0x000345aa) cursor_text_title_t1

0x9c19,	// (0x00030b57) cursor_title_pane_g1

0x8eaf,	// (0x0002fded) cursor_digital_pane_g1

0xca2c,	// (0x0003396a) cursor_text_digital_t1

0xca51,	// (0x0003398f) link_highlight_primary_pane_g1

0xd615,	// (0x00034553) link_highlight_primary_pane_t1

0xca3a,	// (0x00033978) link_highlight_primary_small_pane_g1

0xca42,	// (0x00033980) link_highlight_primary_small_pane_t1

0xca51,	// (0x0003398f) link_highlight_secondary_pane_g1

0xca59,	// (0x00033997) link_highlight_secondary_pane_t1

0xd589,	// (0x000344c7) link_highlight_title_pane_g1

0xd591,	// (0x000344cf) link_highlight_title_pane_t1

0xd572,	// (0x000344b0) link_highlight_digital_pane_g1

0xd57a,	// (0x000344b8) link_highlight_digital_pane_t1

0xd466,	// (0x000343a4) copy_highlight_primary_pane_g1

0xd46e,	// (0x000343ac) copy_highlight_primary_pane_t1

0xd440,	// (0x0003437e) copy_highlight_primary_small_pane_g1

0xd457,	// (0x00034395) copy_highlight_primary_small_pane_t1

0xca68,	// (0x000339a6) copy_highlight_secondary_pane_g1

0xca70,	// (0x000339ae) copy_highlight_secondary_pane_t1

0xd440,	// (0x0003437e) copy_highlight_title_pane_g1

0xd448,	// (0x00034386) copy_highlight_title_pane_t1

0xd466,	// (0x000343a4) copy_highlight_digital_pane_g1

0xe2ec,	// (0x0003522a) copy_highlight_digital_pane_t1

0xe240,	// (0x0003517e) graphic_text_primary_pane_g1

0xe2d0,	// (0x0003520e) graphic_text_primary_pane_t1

0xe2de,	// (0x0003521c) graphic_text_primary_pane_t2

0x0001,

0xfa02,	// (0x00036940) graphic_text_primary_pane_t

0xe2ac,	// (0x000351ea) graphic_text_primary_small_pane_g1

0xe2b4,	// (0x000351f2) graphic_text_primary_small_pane_t1

0xe2c2,	// (0x00035200) graphic_text_primary_small_pane_t2

0x0001,

0xf9fd,	// (0x0003693b) graphic_text_primary_small_pane_t

0xe288,	// (0x000351c6) graphic_text_secondary_pane_g1

0xe290,	// (0x000351ce) graphic_text_secondary_pane_t1

0xe29e,	// (0x000351dc) graphic_text_secondary_pane_t2

0x0001,

0xf9f8,	// (0x00036936) graphic_text_secondary_pane_t

0xe264,	// (0x000351a2) graphic_text_title_pane_g1

0xe26c,	// (0x000351aa) graphic_text_title_pane_t1

0xe27a,	// (0x000351b8) graphic_text_title_pane_t2

0x0001,

0xf9f3,	// (0x00036931) graphic_text_title_pane_t

0xe240,	// (0x0003517e) graphic_text_digital_pane_g1

0xe248,	// (0x00035186) graphic_text_digital_pane_t1

0xe256,	// (0x00035194) graphic_text_digital_pane_t2

0x0001,

0xf9ee,	// (0x0003692c) graphic_text_digital_pane_t

0xb96b,	// (0x000328a9) navi_icon_pane_srt_ParamLimits

0xb96b,	// (0x000328a9) navi_icon_pane_srt

0xb90f,	// (0x0003284d) navi_midp_pane_srt

0xb90f,	// (0x0003284d) navi_navi_pane_srt

0xb96b,	// (0x000328a9) navi_text_pane_srt_ParamLimits

0xb96b,	// (0x000328a9) navi_text_pane_srt

0xe20b,	// (0x00035149) navi_navi_icon_text_pane_srt

0xe213,	// (0x00035151) navi_navi_pane_srt_g1_ParamLimits

0xe213,	// (0x00035151) navi_navi_pane_srt_g1

0xe225,	// (0x00035163) navi_navi_pane_srt_g2_ParamLimits

0xe225,	// (0x00035163) navi_navi_pane_srt_g2

0x0001,

0xf9e9,	// (0x00036927) navi_navi_pane_srt_g_ParamLimits

0xf9e9,	// (0x00036927) navi_navi_pane_srt_g

0xe237,	// (0x00035175) navi_navi_tabs_pane_srt

0xe20b,	// (0x00035149) navi_navi_text_pane_srt

0xe20b,	// (0x00035149) navi_navi_volume_pane_srt

0xe1fc,	// (0x0003513a) navi_navi_text_pane_srt_t1

0x2487,	// (0x000293c5) navi_navi_volume_pane_srt_g1

0x248f,	// (0x000293cd) volume_small_pane_srt_ParamLimits

0x248f,	// (0x000293cd) volume_small_pane_srt

0x1196,	// (0x000280d4) volume_small_pane_srt_g1_ParamLimits

0x1196,	// (0x000280d4) volume_small_pane_srt_g1

0x11a6,	// (0x000280e4) volume_small_pane_srt_g2_ParamLimits

0x11a6,	// (0x000280e4) volume_small_pane_srt_g2

0x11b7,	// (0x000280f5) volume_small_pane_srt_g3_ParamLimits

0x11b7,	// (0x000280f5) volume_small_pane_srt_g3

0x11c8,	// (0x00028106) volume_small_pane_srt_g4_ParamLimits

0x11c8,	// (0x00028106) volume_small_pane_srt_g4

0x11d9,	// (0x00028117) volume_small_pane_srt_g5_ParamLimits

0x11d9,	// (0x00028117) volume_small_pane_srt_g5

0x11ea,	// (0x00028128) volume_small_pane_srt_g6_ParamLimits

0x11ea,	// (0x00028128) volume_small_pane_srt_g6

0x11fb,	// (0x00028139) volume_small_pane_srt_g7_ParamLimits

0x11fb,	// (0x00028139) volume_small_pane_srt_g7

0x120c,	// (0x0002814a) volume_small_pane_srt_g8_ParamLimits

0x120c,	// (0x0002814a) volume_small_pane_srt_g8

0x121d,	// (0x0002815b) volume_small_pane_srt_g9_ParamLimits

0x121d,	// (0x0002815b) volume_small_pane_srt_g9

0x122e,	// (0x0002816c) volume_small_pane_srt_g10_ParamLimits

0x122e,	// (0x0002816c) volume_small_pane_srt_g10

0x0009,

0xf79d,	// (0x000366db) volume_small_pane_srt_g_ParamLimits

0xf79d,	// (0x000366db) volume_small_pane_srt_g

0xbbef,	// (0x00032b2d) query_popup_data_pane_cp2

0xe1e2,	// (0x00035120) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xe1e2,	// (0x00035120) navi_navi_icon_text_pane_srt_t1

0xd6a4,	// (0x000345e2) navi_tabs_2_long_pane_srt

0xd6a4,	// (0x000345e2) navi_tabs_2_pane_srt

0xd6a4,	// (0x000345e2) navi_tabs_3_long_pane_srt

0xd6a4,	// (0x000345e2) navi_tabs_3_pane_srt

0xd6a4,	// (0x000345e2) navi_tabs_4_pane_srt

0x2467,	// (0x000293a5) tabs_2_active_pane_srt_ParamLimits

0x2467,	// (0x000293a5) tabs_2_active_pane_srt

0x2477,	// (0x000293b5) tabs_2_passive_pane_srt_ParamLimits

0x2477,	// (0x000293b5) tabs_2_passive_pane_srt

0xcfd8,	// (0x00033f16) bg_passive_tab_pane_cp1_srt_ParamLimits

0xcfd8,	// (0x00033f16) bg_passive_tab_pane_cp1_srt

0xe1c0,	// (0x000350fe) bg_passive_tab_pane_g1_cp1_srt

0xc66e,	// (0x000335ac) bg_passive_tab_pane_g2_cp1_srt

0xe1c9,	// (0x00035107) bg_passive_tab_pane_g3_cp1_srt

0xb95d,	// (0x0003289b) bg_active_tab_pane_cp1_srt_ParamLimits

0xb95d,	// (0x0003289b) bg_active_tab_pane_cp1_srt

0xe1d2,	// (0x00035110) tabs_2_active_pane_srt_g1

0xa00b,	// (0x00030f49) tabs_2_active_pane_srt_t1_ParamLimits

0xa00b,	// (0x00030f49) tabs_2_active_pane_srt_t1

0xe1c0,	// (0x000350fe) bg_active_tab_pane_g1_cp1_srt

0xc66e,	// (0x000335ac) bg_active_tab_pane_g2_cp1_srt

0xe1c9,	// (0x00035107) bg_active_tab_pane_g3_cp1_srt

0x2422,	// (0x00029360) tabs_3_active_pane_srt_ParamLimits

0x2422,	// (0x00029360) tabs_3_active_pane_srt

0x2433,	// (0x00029371) tabs_3_passive_pane_cp_srt_ParamLimits

0x2433,	// (0x00029371) tabs_3_passive_pane_cp_srt

0x2444,	// (0x00029382) tabs_3_passive_pane_srt_ParamLimits

0x2444,	// (0x00029382) tabs_3_passive_pane_srt

0xcfd8,	// (0x00033f16) bg_passive_tab_pane_cp2_srt_ParamLimits

0xcfd8,	// (0x00033f16) bg_passive_tab_pane_cp2_srt

0xca7f,	// (0x000339bd) bg_passive_tab_pane_g1_cp2_srt

0xc66e,	// (0x000335ac) bg_passive_tab_pane_g2_cp2_srt

0xca88,	// (0x000339c6) bg_passive_tab_pane_g3_cp2_srt

0xb95d,	// (0x0003289b) bg_active_tab_pane_cp2_srt_ParamLimits

0xb95d,	// (0x0003289b) bg_active_tab_pane_cp2_srt

0xe1b8,	// (0x000350f6) tabs_3_active_pane_srt_g1

0x9ff5,	// (0x00030f33) tabs_3_active_pane_srt_t1_ParamLimits

0x9ff5,	// (0x00030f33) tabs_3_active_pane_srt_t1

0xca7f,	// (0x000339bd) bg_active_tab_pane_g1_cp2_srt

0xc66e,	// (0x000335ac) bg_active_tab_pane_g2_cp2_srt

0xca88,	// (0x000339c6) bg_active_tab_pane_g3_cp2_srt

0x23c8,	// (0x00029306) tabs_4_active_pane_srt_ParamLimits

0x23c8,	// (0x00029306) tabs_4_active_pane_srt

0x23da,	// (0x00029318) tabs_4_passive_pane_cp2_srt_ParamLimits

0x23da,	// (0x00029318) tabs_4_passive_pane_cp2_srt

0xcbac,	// (0x00033aea) aid_size_cell_toolbar

0xda79,	// (0x000349b7) main_idle_act_pane_ParamLimits

0xcc78,	// (0x00033bb6) popup_large_graphic_colour_window_ParamLimits

0x96f5,	// (0x00030633) popup_toolbar_window_ParamLimits

0x96f5,	// (0x00030633) popup_toolbar_window

0xe0d8,	// (0x00035016) list_single_graphic_2heading_pane_ParamLimits

0xe0d8,	// (0x00035016) list_single_graphic_2heading_pane

0xc277,	// (0x000331b5) aid_size_cell_apps_grid_lsc_pane

0xc289,	// (0x000331c7) aid_size_cell_apps_grid_prt_pane

0xc0cd,	// (0x0003300b) bg_wml_button_pane_cp1_ParamLimits

0xc0cd,	// (0x0003300b) bg_wml_button_pane_cp1

0x9bcf,	// (0x00030b0d) form_midp_field_text_pane_t1_ParamLimits

0xcfd8,	// (0x00033f16) input_focus_pane_cp050_ParamLimits

0xd120,	// (0x0003405e) list_midp_form_text_pane_ParamLimits

0xd0fd,	// (0x0003403b) input_focus_pane_cp051_ParamLimits

0xd111,	// (0x0003404f) list_midp_choice_pane_ParamLimits

0x9b6a,	// (0x00030aa8) list_single_2graphic_pane_cp3_ParamLimits

0x9b6a,	// (0x00030aa8) list_single_2graphic_pane_cp3

0x9b7e,	// (0x00030abc) list_single_midp_graphic_pane_ParamLimits

0x9b7e,	// (0x00030abc) list_single_midp_graphic_pane

0x02db,	// (0x00027219) list_single_graphic_2heading_pane_g1_ParamLimits

0x02db,	// (0x00027219) list_single_graphic_2heading_pane_g1

0x02e7,	// (0x00027225) list_single_graphic_2heading_pane_g4_ParamLimits

0x02e7,	// (0x00027225) list_single_graphic_2heading_pane_g4

0x02f3,	// (0x00027231) list_single_graphic_2heading_pane_g5_ParamLimits

0x02f3,	// (0x00027231) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f0,	// (0x0003672e) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f0,	// (0x0003672e) list_single_graphic_2heading_pane_g

0x02ff,	// (0x0002723d) list_single_graphic_2heading_pane_t1_ParamLimits

0x02ff,	// (0x0002723d) list_single_graphic_2heading_pane_t1

0x0313,	// (0x00027251) list_single_graphic_2heading_pane_t2_ParamLimits

0x0313,	// (0x00027251) list_single_graphic_2heading_pane_t2

0x032f,	// (0x0002726d) list_single_graphic_2heading_pane_t3_ParamLimits

0x032f,	// (0x0002726d) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f7,	// (0x00036735) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f7,	// (0x00036735) list_single_graphic_2heading_pane_t

0xce26,	// (0x00033d64) bg_popup_sub_pane_cp2

0xce50,	// (0x00033d8e) grid_toobar_pane

0x1b69,	// (0x00028aa7) cell_toolbar_pane_ParamLimits

0x1b69,	// (0x00028aa7) cell_toolbar_pane

0xce8c,	// (0x00033dca) cell_toolbar_pane_g1_ParamLimits

0xce8c,	// (0x00033dca) cell_toolbar_pane_g1

0xcea0,	// (0x00033dde) cell_toolbar_pane_g2_ParamLimits

0xcea0,	// (0x00033dde) cell_toolbar_pane_g2

0x0001,

0xf805,	// (0x00036743) cell_toolbar_pane_g_ParamLimits

0xf805,	// (0x00036743) cell_toolbar_pane_g

0xcec2,	// (0x00033e00) grid_highlight_pane_cp2_ParamLimits

0xcec2,	// (0x00033e00) grid_highlight_pane_cp2

0xcedc,	// (0x00033e1a) toolbar_button_pane

0xcee8,	// (0x00033e26) toolbar_button_pane_g1

0xcef0,	// (0x00033e2e) toolbar_button_pane_g2

0xcef8,	// (0x00033e36) toolbar_button_pane_g3

0xcf00,	// (0x00033e3e) toolbar_button_pane_g4

0xcf08,	// (0x00033e46) toolbar_button_pane_g5

0xcf10,	// (0x00033e4e) toolbar_button_pane_g6

0xcf18,	// (0x00033e56) toolbar_button_pane_g7

0xcf20,	// (0x00033e5e) toolbar_button_pane_g8

0xcf28,	// (0x00033e66) toolbar_button_pane_g9

0x0009,

0xf80a,	// (0x00036748) toolbar_button_pane_g

0x1ba1,	// (0x00028adf) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1ba1,	// (0x00028adf) list_single_2graphic_pane_g1_cp3

0x810d,	// (0x0002f04b) list_single_2graphic_pane_g2_cp3_ParamLimits

0x810d,	// (0x0002f04b) list_single_2graphic_pane_g2_cp3

0x1bbe,	// (0x00028afc) list_single_2graphic_pane_g3_cp3

0x1bc6,	// (0x00028b04) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1bc6,	// (0x00028b04) list_single_2graphic_pane_g4_cp3

0x1bd2,	// (0x00028b10) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1bd2,	// (0x00028b10) list_single_2graphic_pane_t1_cp3

0x1bee,	// (0x00028b2c) list_single_midp_graphic_pane_g2_ParamLimits

0x1bee,	// (0x00028b2c) list_single_midp_graphic_pane_g2

0xcbb4,	// (0x00033af2) aid_zoom_text_primary

0x48e2,	// (0x0002b820) aid_zoom_text_secondary

0xcb3c,	// (0x00033a7a) status_small_pane_g7_ParamLimits

0xcb3c,	// (0x00033a7a) status_small_pane_g7

0xcb5f,	// (0x00033a9d) status_small_pane_t1_ParamLimits

0x8825,	// (0x0002f763) title_pane_g2

0x0003,

0xf592,	// (0x000364d0) title_pane_g

0x8aad,	// (0x0002f9eb) aid_size_cell_colour_1_pane_ParamLimits

0x8aad,	// (0x0002f9eb) aid_size_cell_colour_1_pane

0x8ac1,	// (0x0002f9ff) aid_size_cell_colour_2_pane_ParamLimits

0x8ac1,	// (0x0002f9ff) aid_size_cell_colour_2_pane

0x8ad5,	// (0x0002fa13) aid_size_cell_colour_3_pane_ParamLimits

0x8ad5,	// (0x0002fa13) aid_size_cell_colour_3_pane

0x8ae9,	// (0x0002fa27) aid_size_cell_colour_4_pane_ParamLimits

0x8ae9,	// (0x0002fa27) aid_size_cell_colour_4_pane

0x0bb4,	// (0x00027af2) title_pane_stacon_g1_ParamLimits

0x0bb4,	// (0x00027af2) title_pane_stacon_g1

0xd4c5,	// (0x00034403) popup_note_wait_window_g3_ParamLimits

0xd4c5,	// (0x00034403) popup_note_wait_window_g3

0xd53b,	// (0x00034479) popup_note_wait_window_t5_ParamLimits

0xd53b,	// (0x00034479) popup_note_wait_window_t5

0xb90f,	// (0x0003284d) main_feb_china_hwr_fs_writing_pane

0x8f6a,	// (0x0002fea8) popup_feb_china_hwr_fs_window_ParamLimits

0x8f6a,	// (0x0002fea8) popup_feb_china_hwr_fs_window

0x811e,	// (0x0002f05c) aid_size_cell_hwr_fs_ParamLimits

0x811e,	// (0x0002f05c) aid_size_cell_hwr_fs

0xcfd8,	// (0x00033f16) bg_popup_sub_pane_cp3_ParamLimits

0xcfd8,	// (0x00033f16) bg_popup_sub_pane_cp3

0x8133,	// (0x0002f071) grid_hwr_fs_pane_ParamLimits

0x8133,	// (0x0002f071) grid_hwr_fs_pane

0x1c3d,	// (0x00028b7b) linegrid_hwr_fs_pane_ParamLimits

0x1c3d,	// (0x00028b7b) linegrid_hwr_fs_pane

0x814b,	// (0x0002f089) cell_hwr_fs_pane_ParamLimits

0x814b,	// (0x0002f089) cell_hwr_fs_pane

0xcfe4,	// (0x00033f22) linegrid_hwr_fs_pane_g1_ParamLimits

0xcfe4,	// (0x00033f22) linegrid_hwr_fs_pane_g1

0x9b3e,	// (0x00030a7c) linegrid_hwr_fs_pane_g2_ParamLimits

0x9b3e,	// (0x00030a7c) linegrid_hwr_fs_pane_g2

0xcff0,	// (0x00033f2e) linegrid_hwr_fs_pane_g3_ParamLimits

0xcff0,	// (0x00033f2e) linegrid_hwr_fs_pane_g3

0x1c81,	// (0x00028bbf) linegrid_hwr_fs_pane_g4_ParamLimits

0x1c81,	// (0x00028bbf) linegrid_hwr_fs_pane_g4

0x1c9b,	// (0x00028bd9) linegrid_hwr_fs_pane_g5_ParamLimits

0x1c9b,	// (0x00028bd9) linegrid_hwr_fs_pane_g5

0x0004,

0xf830,	// (0x0003676e) linegrid_hwr_fs_pane_g_ParamLimits

0xf830,	// (0x0003676e) linegrid_hwr_fs_pane_g

0xcffc,	// (0x00033f3a) cell_hwr_fs_pane_g1_ParamLimits

0xcffc,	// (0x00033f3a) cell_hwr_fs_pane_g1

0xcdf2,	// (0x00033d30) cell_hwr_fs_pane_g2_ParamLimits

0xcdf2,	// (0x00033d30) cell_hwr_fs_pane_g2

0x9b50,	// (0x00030a8e) cell_hwr_fs_pane_g3_ParamLimits

0x9b50,	// (0x00030a8e) cell_hwr_fs_pane_g3

0x9b5d,	// (0x00030a9b) cell_hwr_fs_pane_g4_ParamLimits

0x9b5d,	// (0x00030a9b) cell_hwr_fs_pane_g4

0x0003,

0xf83b,	// (0x00036779) cell_hwr_fs_pane_g_ParamLimits

0xf83b,	// (0x00036779) cell_hwr_fs_pane_g

0x8171,	// (0x0002f0af) cell_hwr_fs_pane_t1

0xb90f,	// (0x0003284d) grid_highlight_pane_cp6

0xb90f,	// (0x0003284d) main_idle_act2_pane

0xc07b,	// (0x00032fb9) aid_inside_area_popup_secondary

0x9c4d,	// (0x00030b8b) aid_inside_area_window_primary_ParamLimits

0x9c4d,	// (0x00030b8b) aid_inside_area_window_primary

0xe2fb,	// (0x00035239) ai2_news_ticker_pane

0xe303,	// (0x00035241) aid_size_cell_ai1_link_ParamLimits

0xe303,	// (0x00035241) aid_size_cell_ai1_link

0xa021,	// (0x00030f5f) popup_ai2_data_window_ParamLimits

0xa021,	// (0x00030f5f) popup_ai2_data_window

0xe31d,	// (0x0003525b) popup_ai2_link_window_ParamLimits

0xe31d,	// (0x0003525b) popup_ai2_link_window

0xcfd8,	// (0x00033f16) bg_popup_sub_pane_cp4_ParamLimits

0xcfd8,	// (0x00033f16) bg_popup_sub_pane_cp4

0xe331,	// (0x0003526f) grid_ai2_link_pane_ParamLimits

0xe331,	// (0x0003526f) grid_ai2_link_pane

0xe348,	// (0x00035286) popup_ai2_link_window_g1_ParamLimits

0xe348,	// (0x00035286) popup_ai2_link_window_g1

0xe354,	// (0x00035292) popup_ai2_link_window_g2_ParamLimits

0xe354,	// (0x00035292) popup_ai2_link_window_g2

0x0001,

0xfa07,	// (0x00036945) popup_ai2_link_window_g_ParamLimits

0xfa07,	// (0x00036945) popup_ai2_link_window_g

0xe363,	// (0x000352a1) ai2_mp_button_pane

0xe36b,	// (0x000352a9) ai2_mp_volume_pane

0xd0fd,	// (0x0003403b) bg_popup_sub_pane_cp5_ParamLimits

0xd0fd,	// (0x0003403b) bg_popup_sub_pane_cp5

0xe373,	// (0x000352b1) heading_ai2_gene_pane_ParamLimits

0xe373,	// (0x000352b1) heading_ai2_gene_pane

0xe37f,	// (0x000352bd) list_ai2_gene_pane_ParamLimits

0xe37f,	// (0x000352bd) list_ai2_gene_pane

0xe3c7,	// (0x00035305) cell_ai2_link_pane_ParamLimits

0xe3c7,	// (0x00035305) cell_ai2_link_pane

0xe3dd,	// (0x0003531b) cell_ai2_link_pane_g1

0xb90f,	// (0x0003284d) grid_highlight_pane_cp7

0x24ed,	// (0x0002942b) ai2_mp_volume_pane_g1

0xe47a,	// (0x000353b8) ai2_mp_volume_pane_g2

0xa04b,	// (0x00030f89) list_ai2_gene_pane_t1

0xe482,	// (0x000353c0) ai2_mp_volume_pane_g3

0x0002,

0xfa20,	// (0x0003695e) ai2_mp_volume_pane_g

0x24f5,	// (0x00029433) volume_small_pane_cp3

0xe48a,	// (0x000353c8) aid_size_cell_ai2_button

0xe492,	// (0x000353d0) grid_ai2_button_pane

0xe49b,	// (0x000353d9) cell_ai2_button_pane_ParamLimits

0xe49b,	// (0x000353d9) cell_ai2_button_pane

0xb905,	// (0x00032843) cell_ai2_button_pane_g1

0xb90f,	// (0x0003284d) grid_highlight_pane_cp8

0xe43a,	// (0x00035378) ai2_gene_pane_t1_ParamLimits

0xe43a,	// (0x00035378) ai2_gene_pane_t1

0x8ee0,	// (0x0002fe1e) aid_height_parent_landscape

0x9db4,	// (0x00030cf2) aid_height_set_list

0xda79,	// (0x000349b7) aid_size_parent

0xe166,	// (0x000350a4) aid_size_cell_graphic_pane_ParamLimits

0xe38f,	// (0x000352cd) popup_ai2_data_window_g1_ParamLimits

0xe38f,	// (0x000352cd) popup_ai2_data_window_g1

0xe39b,	// (0x000352d9) ai2_news_ticker_pane_g1

0xe3a3,	// (0x000352e1) ai2_news_ticker_pane_g2

0x0001,

0xfa0c,	// (0x0003694a) ai2_news_ticker_pane_g

0xe3ab,	// (0x000352e9) ai2_news_ticker_pane_t1

0xe3b9,	// (0x000352f7) ai2_news_ticker_pane_t2

0x0001,

0xfa11,	// (0x0003694f) ai2_news_ticker_pane_t

0xe3e6,	// (0x00035324) heading_ai2_gene_pane_g1

0xe3ee,	// (0x0003532c) heading_ai2_gene_pane_t1_ParamLimits

0xe3ee,	// (0x0003532c) heading_ai2_gene_pane_t1

0xe403,	// (0x00035341) list_highlight_pane_cp6

0xa035,	// (0x00030f73) ai2_gene_pane_ParamLimits

0xa035,	// (0x00030f73) ai2_gene_pane

0xa059,	// (0x00030f97) list_ai2_gene_pane_t2

0x0001,

0xfa16,	// (0x00036954) list_ai2_gene_pane_t

0xe40b,	// (0x00035349) list_highlight_pane_cp8_ParamLimits

0xe40b,	// (0x00035349) list_highlight_pane_cp8

0xe41c,	// (0x0003535a) ai2_gene_pane_g1_ParamLimits

0xe41c,	// (0x0003535a) ai2_gene_pane_g1

0xe42e,	// (0x0003536c) ai2_gene_pane_g2_ParamLimits

0xe42e,	// (0x0003536c) ai2_gene_pane_g2

0x0001,

0xfa1b,	// (0x00036959) ai2_gene_pane_g_ParamLimits

0xfa1b,	// (0x00036959) ai2_gene_pane_g

0xbf02,	// (0x00032e40) scroll_pane_cp12

0x80ca,	// (0x0002f008) control_pane_t3_ParamLimits

0x80ca,	// (0x0002f008) control_pane_t3

0xcb50,	// (0x00033a8e) status_small_pane_g8_ParamLimits

0xcb50,	// (0x00033a8e) status_small_pane_g8

0x8fff,	// (0x0002ff3d) popup_find_window_ParamLimits

0x926e,	// (0x000301ac) popup_note_image_window_ParamLimits

0x490e,	// (0x0002b84c) list_double2_graphic_pane_vc_g1_ParamLimits

0x490e,	// (0x0002b84c) list_double2_graphic_pane_vc_g1

0x491a,	// (0x0002b858) list_double2_graphic_pane_vc_g2_ParamLimits

0x491a,	// (0x0002b858) list_double2_graphic_pane_vc_g2

0x4926,	// (0x0002b864) list_double2_graphic_pane_vc_g3_ParamLimits

0x4926,	// (0x0002b864) list_double2_graphic_pane_vc_g3

0x0002,

0xf7fe,	// (0x0003673c) list_double2_graphic_pane_vc_g_ParamLimits

0xf7fe,	// (0x0003673c) list_double2_graphic_pane_vc_g

0x4932,	// (0x0002b870) list_double2_graphic_pane_vc_t1_ParamLimits

0x4932,	// (0x0002b870) list_double2_graphic_pane_vc_t1

0x4948,	// (0x0002b886) list_single_heading_pane_vc_g1_ParamLimits

0x4948,	// (0x0002b886) list_single_heading_pane_vc_g1

0x4954,	// (0x0002b892) list_single_heading_pane_vc_g2_ParamLimits

0x4954,	// (0x0002b892) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0003654a) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0003654a) list_single_heading_pane_vc_g

0x4960,	// (0x0002b89e) list_single_heading_pane_vc_t1_ParamLimits

0x4960,	// (0x0002b89e) list_single_heading_pane_vc_t1

0x4976,	// (0x0002b8b4) list_single_heading_pane_vc_t2_ParamLimits

0x4976,	// (0x0002b8b4) list_single_heading_pane_vc_t2

0x0001,

0xf81f,	// (0x0003675d) list_single_heading_pane_vc_t_ParamLimits

0xf81f,	// (0x0003675d) list_single_heading_pane_vc_t

0xcf30,	// (0x00033e6e) list_setting_number_pane_vc_g1_ParamLimits

0xcf30,	// (0x00033e6e) list_setting_number_pane_vc_g1

0xcf3c,	// (0x00033e7a) list_setting_number_pane_vc_g2_ParamLimits

0xcf3c,	// (0x00033e7a) list_setting_number_pane_vc_g2

0x0001,

0xf824,	// (0x00036762) list_setting_number_pane_vc_g_ParamLimits

0xf824,	// (0x00036762) list_setting_number_pane_vc_g

0xcf48,	// (0x00033e86) list_setting_number_pane_vc_t1_ParamLimits

0xcf48,	// (0x00033e86) list_setting_number_pane_vc_t1

0xcf5c,	// (0x00033e9a) list_setting_number_pane_vc_t2_ParamLimits

0xcf5c,	// (0x00033e9a) list_setting_number_pane_vc_t2

0xcf78,	// (0x00033eb6) list_setting_number_pane_vc_t3_ParamLimits

0xcf78,	// (0x00033eb6) list_setting_number_pane_vc_t3

0x0002,

0xf829,	// (0x00036767) list_setting_number_pane_vc_t_ParamLimits

0xf829,	// (0x00036767) list_setting_number_pane_vc_t

0xcf9e,	// (0x00033edc) set_value_pane_vc_ParamLimits

0xcf9e,	// (0x00033edc) set_value_pane_vc

0xe0d8,	// (0x00035016) list_double2_graphic_pane_vc_ParamLimits

0xe0d8,	// (0x00035016) list_double2_graphic_pane_vc

0xe0d8,	// (0x00035016) list_double2_large_graphic_pane_vc_ParamLimits

0xe0d8,	// (0x00035016) list_double2_large_graphic_pane_vc

0xe0d8,	// (0x00035016) list_double2_pane_vc_ParamLimits

0xe0d8,	// (0x00035016) list_double2_pane_vc

0xe0d8,	// (0x00035016) list_double_graphic_heading_pane_vc_ParamLimits

0xe0d8,	// (0x00035016) list_double_graphic_heading_pane_vc

0xe0d8,	// (0x00035016) list_double_graphic_pane_vc_ParamLimits

0xe0d8,	// (0x00035016) list_double_graphic_pane_vc

0xe0d8,	// (0x00035016) list_double_heading_pane_vc_ParamLimits

0xe0d8,	// (0x00035016) list_double_heading_pane_vc

0xe0d8,	// (0x00035016) list_double_large_graphic_pane_vc_ParamLimits

0xe0d8,	// (0x00035016) list_double_large_graphic_pane_vc

0xe0d8,	// (0x00035016) list_double_number_pane_vc_ParamLimits

0xe0d8,	// (0x00035016) list_double_number_pane_vc

0xe0d8,	// (0x00035016) list_double_pane_vc_ParamLimits

0xe0d8,	// (0x00035016) list_double_pane_vc

0xe0d8,	// (0x00035016) list_double_time_pane_vc_ParamLimits

0xe0d8,	// (0x00035016) list_double_time_pane_vc

0xe0d8,	// (0x00035016) list_setting_number_pane_vc_ParamLimits

0xe0d8,	// (0x00035016) list_setting_number_pane_vc

0xe0d8,	// (0x00035016) list_setting_pane_vc_ParamLimits

0xe0d8,	// (0x00035016) list_setting_pane_vc

0xe0d8,	// (0x00035016) list_single_graphic_heading_pane_vc_ParamLimits

0xe0d8,	// (0x00035016) list_single_graphic_heading_pane_vc

0xe0d8,	// (0x00035016) list_single_heading_pane_vc_ParamLimits

0xe0d8,	// (0x00035016) list_single_heading_pane_vc

0xe0d8,	// (0x00035016) list_single_number_heading_pane_vc_ParamLimits

0xe0d8,	// (0x00035016) list_single_number_heading_pane_vc

0x4aef,	// (0x0002ba2d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4aef,	// (0x0002ba2d) list_double_graphic_heading_pane_vc_g1

0x4948,	// (0x0002b886) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4948,	// (0x0002b886) list_double_graphic_heading_pane_vc_g2

0x4954,	// (0x0002b892) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4954,	// (0x0002b892) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa27,	// (0x00036965) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa27,	// (0x00036965) list_double_graphic_heading_pane_vc_g

0x4afb,	// (0x0002ba39) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4afb,	// (0x0002ba39) list_double_graphic_heading_pane_vc_t1

0x4960,	// (0x0002b89e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4960,	// (0x0002b89e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa2e,	// (0x0003696c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa2e,	// (0x0003696c) list_double_graphic_heading_pane_vc_t

0xcf30,	// (0x00033e6e) list_setting_pane_vc_g1_ParamLimits

0xcf30,	// (0x00033e6e) list_setting_pane_vc_g1

0xcf3c,	// (0x00033e7a) list_setting_pane_vc_g2_ParamLimits

0xcf3c,	// (0x00033e7a) list_setting_pane_vc_g2

0x0001,

0xf824,	// (0x00036762) list_setting_pane_vc_g_ParamLimits

0xf824,	// (0x00036762) list_setting_pane_vc_g

0xe6b1,	// (0x000355ef) list_setting_pane_vc_t1_ParamLimits

0xe6b1,	// (0x000355ef) list_setting_pane_vc_t1

0xe6c5,	// (0x00035603) list_setting_pane_vc_t2_ParamLimits

0xe6c5,	// (0x00035603) list_setting_pane_vc_t2

0x0001,

0xfa71,	// (0x000369af) list_setting_pane_vc_t_ParamLimits

0xfa71,	// (0x000369af) list_setting_pane_vc_t

0xcf9e,	// (0x00033edc) set_value_pane_cp_vc_ParamLimits

0xcf9e,	// (0x00033edc) set_value_pane_cp_vc

0x4948,	// (0x0002b886) list_single_number_heading_pane_vc_g1_ParamLimits

0x4948,	// (0x0002b886) list_single_number_heading_pane_vc_g1

0x4954,	// (0x0002b892) list_single_number_heading_pane_vc_g2_ParamLimits

0x4954,	// (0x0002b892) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0003654a) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0003654a) list_single_number_heading_pane_vc_g

0x4960,	// (0x0002b89e) list_single_number_heading_pane_vc_t1_ParamLimits

0x4960,	// (0x0002b89e) list_single_number_heading_pane_vc_t1

0x4b0f,	// (0x0002ba4d) list_single_number_heading_pane_vc_t2_ParamLimits

0x4b0f,	// (0x0002ba4d) list_single_number_heading_pane_vc_t2

0x4b23,	// (0x0002ba61) list_single_number_heading_pane_vc_t3_ParamLimits

0x4b23,	// (0x0002ba61) list_single_number_heading_pane_vc_t3

0x0002,

0xfa76,	// (0x000369b4) list_single_number_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x000369b4) list_single_number_heading_pane_vc_t

0x490e,	// (0x0002b84c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x490e,	// (0x0002b84c) list_single_graphic_heading_pane_vc_g1

0x4948,	// (0x0002b886) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4948,	// (0x0002b886) list_single_graphic_heading_pane_vc_g4

0x4954,	// (0x0002b892) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4954,	// (0x0002b892) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa7d,	// (0x000369bb) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa7d,	// (0x000369bb) list_single_graphic_heading_pane_vc_g

0x4960,	// (0x0002b89e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4960,	// (0x0002b89e) list_single_graphic_heading_pane_vc_t1

0x6217,	// (0x0002d155) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6217,	// (0x0002d155) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa84,	// (0x000369c2) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa84,	// (0x000369c2) list_single_graphic_heading_pane_vc_t

0x4948,	// (0x0002b886) list_double2_pane_vc_g1_ParamLimits

0x4948,	// (0x0002b886) list_double2_pane_vc_g1

0x4954,	// (0x0002b892) list_double2_pane_vc_g2_ParamLimits

0x4954,	// (0x0002b892) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x0003654a) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x0003654a) list_double2_pane_vc_g

0x622b,	// (0x0002d169) list_double2_pane_vc_t1_ParamLimits

0x622b,	// (0x0002d169) list_double2_pane_vc_t1

0x6241,	// (0x0002d17f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6241,	// (0x0002d17f) list_double2_large_graphic_pane_vc_g1

0x4948,	// (0x0002b886) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4948,	// (0x0002b886) list_double2_large_graphic_pane_vc_g2

0x4954,	// (0x0002b892) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4954,	// (0x0002b892) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x00036567) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x00036567) list_double2_large_graphic_pane_vc_g

0x624d,	// (0x0002d18b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x624d,	// (0x0002d18b) list_double2_large_graphic_pane_vc_t1

0x6263,	// (0x0002d1a1) list_double_time_pane_vc_g1_ParamLimits

0x6263,	// (0x0002d1a1) list_double_time_pane_vc_g1

0x626f,	// (0x0002d1ad) list_double_time_pane_vc_g2_ParamLimits

0x626f,	// (0x0002d1ad) list_double_time_pane_vc_g2

0x0001,

0xfa89,	// (0x000369c7) list_double_time_pane_vc_g_ParamLimits

0xfa89,	// (0x000369c7) list_double_time_pane_vc_g

0x627b,	// (0x0002d1b9) list_double_time_pane_vc_t1_ParamLimits

0x627b,	// (0x0002d1b9) list_double_time_pane_vc_t1

0x6294,	// (0x0002d1d2) list_double_time_pane_vc_t2_ParamLimits

0x6294,	// (0x0002d1d2) list_double_time_pane_vc_t2

0x62cf,	// (0x0002d20d) list_double_time_pane_vc_t3_ParamLimits

0x62cf,	// (0x0002d20d) list_double_time_pane_vc_t3

0x62e7,	// (0x0002d225) list_double_time_pane_vc_t4_ParamLimits

0x62e7,	// (0x0002d225) list_double_time_pane_vc_t4

0x0003,

0xfa8e,	// (0x000369cc) list_double_time_pane_vc_t_ParamLimits

0xfa8e,	// (0x000369cc) list_double_time_pane_vc_t

0x4948,	// (0x0002b886) list_double_pane_vc_g1_ParamLimits

0x4948,	// (0x0002b886) list_double_pane_vc_g1

0x4954,	// (0x0002b892) list_double_pane_vc_g2_ParamLimits

0x4954,	// (0x0002b892) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x0003654a) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x0003654a) list_double_pane_vc_g

0x62fb,	// (0x0002d239) list_double_pane_vc_t1_ParamLimits

0x62fb,	// (0x0002d239) list_double_pane_vc_t1

0x630d,	// (0x0002d24b) list_double_pane_vc_t2_ParamLimits

0x630d,	// (0x0002d24b) list_double_pane_vc_t2

0x0001,

0xfa97,	// (0x000369d5) list_double_pane_vc_t_ParamLimits

0xfa97,	// (0x000369d5) list_double_pane_vc_t

0x4948,	// (0x0002b886) list_double_number_pane_vc_g1_ParamLimits

0x4948,	// (0x0002b886) list_double_number_pane_vc_g1

0x4954,	// (0x0002b892) list_double_number_pane_vc_g2_ParamLimits

0x4954,	// (0x0002b892) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x0003654a) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x0003654a) list_double_number_pane_vc_g

0x6325,	// (0x0002d263) list_double_number_pane_vc_t1_ParamLimits

0x6325,	// (0x0002d263) list_double_number_pane_vc_t1

0x6339,	// (0x0002d277) list_double_number_pane_vc_t2_ParamLimits

0x6339,	// (0x0002d277) list_double_number_pane_vc_t2

0x630d,	// (0x0002d24b) list_double_number_pane_vc_t3_ParamLimits

0x630d,	// (0x0002d24b) list_double_number_pane_vc_t3

0x0002,

0xfa9c,	// (0x000369da) list_double_number_pane_vc_t_ParamLimits

0xfa9c,	// (0x000369da) list_double_number_pane_vc_t

0x634b,	// (0x0002d289) list_double_large_graphic_pane_vc_g1_ParamLimits

0x634b,	// (0x0002d289) list_double_large_graphic_pane_vc_g1

0x6357,	// (0x0002d295) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6357,	// (0x0002d295) list_double_large_graphic_pane_vc_g2

0x4954,	// (0x0002b892) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4954,	// (0x0002b892) list_double_large_graphic_pane_vc_g3

0x6366,	// (0x0002d2a4) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6366,	// (0x0002d2a4) list_double_large_graphic_pane_vc_g4

0x0003,

0xfaa3,	// (0x000369e1) list_double_large_graphic_pane_vc_g_ParamLimits

0xfaa3,	// (0x000369e1) list_double_large_graphic_pane_vc_g

0x6372,	// (0x0002d2b0) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6372,	// (0x0002d2b0) list_double_large_graphic_pane_vc_t1

0x6384,	// (0x0002d2c2) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6384,	// (0x0002d2c2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaac,	// (0x000369ea) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaac,	// (0x000369ea) list_double_large_graphic_pane_vc_t

0x4948,	// (0x0002b886) list_double_heading_pane_vc_g1_ParamLimits

0x4948,	// (0x0002b886) list_double_heading_pane_vc_g1

0x4954,	// (0x0002b892) list_double_heading_pane_vc_g2_ParamLimits

0x4954,	// (0x0002b892) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0003654a) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0003654a) list_double_heading_pane_vc_g

0x639d,	// (0x0002d2db) list_double_heading_pane_vc_t1_ParamLimits

0x639d,	// (0x0002d2db) list_double_heading_pane_vc_t1

0x4960,	// (0x0002b89e) list_double_heading_pane_vc_t2_ParamLimits

0x4960,	// (0x0002b89e) list_double_heading_pane_vc_t2

0x0001,

0xfab1,	// (0x000369ef) list_double_heading_pane_vc_t_ParamLimits

0xfab1,	// (0x000369ef) list_double_heading_pane_vc_t

0x63b1,	// (0x0002d2ef) list_double_graphic_pane_vc_g1_ParamLimits

0x63b1,	// (0x0002d2ef) list_double_graphic_pane_vc_g1

0x63c1,	// (0x0002d2ff) list_double_graphic_pane_vc_g2_ParamLimits

0x63c1,	// (0x0002d2ff) list_double_graphic_pane_vc_g2

0x63d0,	// (0x0002d30e) list_double_graphic_pane_vc_g3_ParamLimits

0x63d0,	// (0x0002d30e) list_double_graphic_pane_vc_g3

0x0002,

0xfab6,	// (0x000369f4) list_double_graphic_pane_vc_g_ParamLimits

0xfab6,	// (0x000369f4) list_double_graphic_pane_vc_g

0x63dc,	// (0x0002d31a) list_double_graphic_pane_vc_t1_ParamLimits

0x63dc,	// (0x0002d31a) list_double_graphic_pane_vc_t1

0x630d,	// (0x0002d24b) list_double_graphic_pane_vc_t2_ParamLimits

0x630d,	// (0x0002d24b) list_double_graphic_pane_vc_t2

0x0001,

0xfabd,	// (0x000369fb) list_double_graphic_pane_vc_t_ParamLimits

0xfabd,	// (0x000369fb) list_double_graphic_pane_vc_t

0x037b,	// (0x000272b9) aid_size_cell_fastswap

0x784a,	// (0x0002e788) aid_size_cell_touch_ParamLimits

0x784a,	// (0x0002e788) aid_size_cell_touch

0x05e8,	// (0x00027526) popup_fast_swap_wide_window_ParamLimits

0x05e8,	// (0x00027526) popup_fast_swap_wide_window

0x7995,	// (0x0002e8d3) touch_pane_ParamLimits

0x7995,	// (0x0002e8d3) touch_pane

0xbf58,	// (0x00032e96) button_value_adjust_pane_cp2

0x4606,	// (0x0002b544) button_value_adjust_pane_cp4

0x4626,	// (0x0002b564) form_field_data_pane_cp2

0x7e00,	// (0x0002ed3e) form_field_data_wide_pane_cp2

0xc2c0,	// (0x000331fe) bg_scroll_pane_ParamLimits

0x0d98,	// (0x00027cd6) scroll_handle_pane_ParamLimits

0x0dac,	// (0x00027cea) scroll_sc2_down_pane_ParamLimits

0x0dac,	// (0x00027cea) scroll_sc2_down_pane

0xc2f1,	// (0x0003322f) scroll_sc2_up_pane_ParamLimits

0xc2f1,	// (0x0003322f) scroll_sc2_up_pane

0xa184,	// (0x000310c2) grid_wheel_folder_pane_g1_ParamLimits

0xa184,	// (0x000310c2) grid_wheel_folder_pane_g1

0x1014,	// (0x00027f52) clock_nsta_pane_cp2_ParamLimits

0x1014,	// (0x00027f52) clock_nsta_pane_cp2

0x8df5,	// (0x0002fd33) listscroll_midp_pane_ParamLimits

0x8e06,	// (0x0002fd44) midp_canvas_pane

0xcba4,	// (0x00033ae2) nsta_clock_indic_pane

0xcbdc,	// (0x00033b1a) listscroll_form_pane_vc

0xcbe4,	// (0x00033b22) listscroll_set_pane_vc_ParamLimits

0xcbe4,	// (0x00033b22) listscroll_set_pane_vc

0x9852,	// (0x00030790) clock_nsta_pane

0x987c,	// (0x000307ba) indicator_nsta_pane

0xce26,	// (0x00033d64) bg_popup_sub_pane_cp2_ParamLimits

0xce3a,	// (0x00033d78) find_pane_cp2_ParamLimits

0xce3a,	// (0x00033d78) find_pane_cp2

0xce50,	// (0x00033d8e) grid_toobar_pane_ParamLimits

0xcfac,	// (0x00033eea) list_form_gen_pane_vc_ParamLimits

0xcfac,	// (0x00033eea) list_form_gen_pane_vc

0xcfc2,	// (0x00033f00) scroll_pane_cp8_vc_ParamLimits

0xcfc2,	// (0x00033f00) scroll_pane_cp8_vc

0xd012,	// (0x00033f50) data_form_wide_pane_vc_ParamLimits

0xd012,	// (0x00033f50) data_form_wide_pane_vc

0xd01e,	// (0x00033f5c) form_field_data_wide_pane_vc_g1

0xd026,	// (0x00033f64) form_field_data_wide_pane_vc_t1_ParamLimits

0xd026,	// (0x00033f64) form_field_data_wide_pane_vc_t1

0xbf6c,	// (0x00032eaa) input_focus_pane_cp6_vc_ParamLimits

0xbf6c,	// (0x00032eaa) input_focus_pane_cp6_vc

0x9bf1,	// (0x00030b2f) list_midp_pane_ParamLimits

0xda8b,	// (0x000349c9) scroll_pane_cp16_ParamLimits

0xda8b,	// (0x000349c9) scroll_pane_cp16

0xd28d,	// (0x000341cb) button_value_adjust_pane_ParamLimits

0xd28d,	// (0x000341cb) button_value_adjust_pane

0x9dc5,	// (0x00030d03) button_value_adjust_pane_cp6_ParamLimits

0x9dc5,	// (0x00030d03) button_value_adjust_pane_cp6

0x9edf,	// (0x00030e1d) settings_code_pane_cp_ParamLimits

0x9edf,	// (0x00030e1d) settings_code_pane_cp

0xb905,	// (0x00032843) cell_touch_pane_g1

0xb905,	// (0x00032843) cell_touch_pane_g2

0x0001,

0xf747,	// (0x00036685) cell_touch_pane_g

0xa067,	// (0x00030fa5) cell_touch_pane_cp_ParamLimits

0xa067,	// (0x00030fa5) cell_touch_pane_cp

0xa083,	// (0x00030fc1) cell_touch_pane_ParamLimits

0xa083,	// (0x00030fc1) cell_touch_pane

0xb905,	// (0x00032843) scroll_sc2_down_pane_g1

0xb905,	// (0x00032843) scroll_sc2_up_pane_g1

0xb90f,	// (0x0003284d) bg_set_opt_pane_cp4_vc

0xe4ad,	// (0x000353eb) list_set_graphic_pane_vc_g1_ParamLimits

0xe4ad,	// (0x000353eb) list_set_graphic_pane_vc_g1

0xe4b9,	// (0x000353f7) list_set_graphic_pane_vc_g2_ParamLimits

0xe4b9,	// (0x000353f7) list_set_graphic_pane_vc_g2

0x0001,

0xfa33,	// (0x00036971) list_set_graphic_pane_vc_g_ParamLimits

0xfa33,	// (0x00036971) list_set_graphic_pane_vc_g

0xe4c5,	// (0x00035403) text_primary_small_cp13_vc_ParamLimits

0xe4c5,	// (0x00035403) text_primary_small_cp13_vc

0xe4dd,	// (0x0003541b) list_set_graphic_pane_vc_ParamLimits

0xe4dd,	// (0x0003541b) list_set_graphic_pane_vc

0xb90f,	// (0x0003284d) input_focus_pane_cp2_vc

0xb905,	// (0x00032843) setting_code_pane_vc_g1

0xe4f1,	// (0x0003542f) setting_code_pane_vc_t1

0xe4ff,	// (0x0003543d) set_text_pane_vc_t1_ParamLimits

0xe4ff,	// (0x0003543d) set_text_pane_vc_t1

0xb90f,	// (0x0003284d) input_focus_pane_cp1_vc

0xe51a,	// (0x00035458) list_set_text_pane_vc

0xb905,	// (0x00032843) setting_text_pane_vc_g1

0xb90f,	// (0x0003284d) bg_set_opt_pane_cp2_vc

0xe524,	// (0x00035462) setting_slider_graphic_pane_vc_g1

0xe52c,	// (0x0003546a) setting_slider_graphic_pane_vc_t1

0xe53a,	// (0x00035478) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa38,	// (0x00036976) setting_slider_graphic_pane_vc_t

0xe548,	// (0x00035486) slider_set_pane_cp_vc

0xe550,	// (0x0003548e) slider_set_pane_vc_g1

0xe559,	// (0x00035497) slider_set_pane_vc_g2

0x0006,

0xfa3d,	// (0x0003697b) slider_set_pane_vc_g

0xbfdc,	// (0x00032f1a) set_opt_bg_pane_g1_copy1

0xbfe4,	// (0x00032f22) set_opt_bg_pane_g2_copy1

0xe585,	// (0x000354c3) set_opt_bg_pane_g3_copy1

0xbff4,	// (0x00032f32) set_opt_bg_pane_g4_copy1

0xbffc,	// (0x00032f3a) set_opt_bg_pane_g5_copy1

0xc004,	// (0x00032f42) set_opt_bg_pane_g6_copy1

0xe58f,	// (0x000354cd) set_opt_bg_pane_g7_copy1

0xe597,	// (0x000354d5) set_opt_bg_pane_g8_copy1

0xe5a1,	// (0x000354df) set_opt_bg_pane_g9_copy1

0xb90f,	// (0x0003284d) bg_set_opt_pane_cp_vc

0xe5ab,	// (0x000354e9) setting_slider_pane_vc_t1

0xe52c,	// (0x0003546a) setting_slider_pane_vc_t2

0xe53a,	// (0x00035478) setting_slider_pane_vc_t3

0x0002,

0xfa4c,	// (0x0003698a) setting_slider_pane_vc_t

0xe548,	// (0x00035486) slider_set_pane_vc

0x1dfc,	// (0x00028d3a) volume_set_pane_vc_g1

0x1e05,	// (0x00028d43) volume_set_pane_vc_g2

0x1e0e,	// (0x00028d4c) volume_set_pane_vc_g3

0x1e17,	// (0x00028d55) volume_set_pane_vc_g4

0x1e20,	// (0x00028d5e) volume_set_pane_vc_g5

0x1e29,	// (0x00028d67) volume_set_pane_vc_g6

0x1e32,	// (0x00028d70) volume_set_pane_vc_g7

0x1e3b,	// (0x00028d79) volume_set_pane_vc_g8

0x1e44,	// (0x00028d82) volume_set_pane_vc_g9

0x1e4d,	// (0x00028d8b) volume_set_pane_vc_g10

0x0009,

0xfa53,	// (0x00036991) volume_set_pane_vc_g

0xe5ba,	// (0x000354f8) volume_set_pane_vc

0xe5c2,	// (0x00035500) button_value_adjust_pane_cp1_vc

0xe5cc,	// (0x0003550a) list_highlight_pane_cp2_vc

0xe5d5,	// (0x00035513) list_set_pane_vc_ParamLimits

0xe5d5,	// (0x00035513) list_set_pane_vc

0xe63f,	// (0x0003557d) main_pane_set_vc_t1_ParamLimits

0xe63f,	// (0x0003557d) main_pane_set_vc_t1

0xe654,	// (0x00035592) main_pane_set_vc_t2_ParamLimits

0xe654,	// (0x00035592) main_pane_set_vc_t2

0xe666,	// (0x000355a4) main_pane_set_vc_t3_ParamLimits

0xe666,	// (0x000355a4) main_pane_set_vc_t3

0xe67a,	// (0x000355b8) main_pane_set_vc_t4_ParamLimits

0xe67a,	// (0x000355b8) main_pane_set_vc_t4

0x0003,

0xfa68,	// (0x000369a6) main_pane_set_vc_t_ParamLimits

0xfa68,	// (0x000369a6) main_pane_set_vc_t

0xe68e,	// (0x000355cc) setting_code_pane_vc_ParamLimits

0xe68e,	// (0x000355cc) setting_code_pane_vc

0xe69f,	// (0x000355dd) setting_slider_graphic_pane_vc

0xe69f,	// (0x000355dd) setting_slider_pane_vc

0xe69f,	// (0x000355dd) setting_text_pane_vc

0xe69f,	// (0x000355dd) setting_volume_pane_vc

0xe6a9,	// (0x000355e7) scroll_pane_cp121_vc

0xbf46,	// (0x00032e84) set_content_pane_vc

0xe6e7,	// (0x00035625) button_value_adjust_pane_g1

0xe6f0,	// (0x0003562e) button_value_adjust_pane_g2

0x0001,

0xfac2,	// (0x00036a00) button_value_adjust_pane_g

0xe6f9,	// (0x00035637) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe6f9,	// (0x00035637) form_field_slider_wide_pane_vc_t1

0xe70d,	// (0x0003564b) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe70d,	// (0x0003564b) form_field_slider_wide_pane_vc_t2

0x0001,

0xfac7,	// (0x00036a05) form_field_slider_wide_pane_vc_t_ParamLimits

0xfac7,	// (0x00036a05) form_field_slider_wide_pane_vc_t

0xb95d,	// (0x0003289b) input_focus_pane_cp10_vc_ParamLimits

0xb95d,	// (0x0003289b) input_focus_pane_cp10_vc

0xe71f,	// (0x0003565d) slider_cont_pane_cp1_vc_ParamLimits

0xe71f,	// (0x0003565d) slider_cont_pane_cp1_vc

0xe550,	// (0x0003548e) slider_form_pane_g1_cp2

0xe559,	// (0x00035497) slider_form_pane_g2_cp2

0xe738,	// (0x00035676) form_field_slider_pane_vc_t3

0xe746,	// (0x00035684) form_field_slider_pane_vc_t4

0xe754,	// (0x00035692) slider_form_pane_vc_ParamLimits

0xe754,	// (0x00035692) slider_form_pane_vc

0xe761,	// (0x0003569f) form_field_slider_pane_vc_t1_ParamLimits

0xe761,	// (0x0003569f) form_field_slider_pane_vc_t1

0xe70d,	// (0x0003564b) form_field_slider_pane_vc_t2_ParamLimits

0xe70d,	// (0x0003564b) form_field_slider_pane_vc_t2

0x0001,

0xfad7,	// (0x00036a15) form_field_slider_pane_vc_t_ParamLimits

0xfad7,	// (0x00036a15) form_field_slider_pane_vc_t

0xb95d,	// (0x0003289b) input_focus_pane_cp9_vc_ParamLimits

0xb95d,	// (0x0003289b) input_focus_pane_cp9_vc

0xe77d,	// (0x000356bb) slider_cont_pane_vc_ParamLimits

0xe77d,	// (0x000356bb) slider_cont_pane_vc

0xe78f,	// (0x000356cd) list_form_graphic_pane_cp_vc_ParamLimits

0xe78f,	// (0x000356cd) list_form_graphic_pane_cp_vc

0xd01e,	// (0x00033f5c) form_field_popup_wide_pane_vc_g1

0xe7a4,	// (0x000356e2) form_field_popup_wide_pane_vc_t1_ParamLimits

0xe7a4,	// (0x000356e2) form_field_popup_wide_pane_vc_t1

0xbf6c,	// (0x00032eaa) input_focus_pane_cp8_vc_ParamLimits

0xbf6c,	// (0x00032eaa) input_focus_pane_cp8_vc

0xe7bb,	// (0x000356f9) list_form_wide_pane_vc_ParamLimits

0xe7bb,	// (0x000356f9) list_form_wide_pane_vc

0xe7c7,	// (0x00035705) list_form_graphic_pane_vc_g1

0xe7cf,	// (0x0003570d) list_form_graphic_pane_vc_t1_ParamLimits

0xe7cf,	// (0x0003570d) list_form_graphic_pane_vc_t1

0xb96b,	// (0x000328a9) list_highlight_pane_cp5_vc_ParamLimits

0xb96b,	// (0x000328a9) list_highlight_pane_cp5_vc

0xe7eb,	// (0x00035729) list_form_graphic_pane_vc_ParamLimits

0xe7eb,	// (0x00035729) list_form_graphic_pane_vc

0xd01e,	// (0x00033f5c) form_field_popup_pane_vc_g1

0xe801,	// (0x0003573f) form_field_popup_pane_vc_t1_ParamLimits

0xe801,	// (0x0003573f) form_field_popup_pane_vc_t1

0xbf6c,	// (0x00032eaa) input_focus_pane_cp7_vc_ParamLimits

0xbf6c,	// (0x00032eaa) input_focus_pane_cp7_vc

0xe818,	// (0x00035756) list_form_pane_vc_ParamLimits

0xe818,	// (0x00035756) list_form_pane_vc

0xe824,	// (0x00035762) data_form_pane_vc_t1_ParamLimits

0xe824,	// (0x00035762) data_form_pane_vc_t1

0xbfdc,	// (0x00032f1a) input_focus_pane_vc_g1

0xbfe4,	// (0x00032f22) input_focus_pane_vc_g2

0xbfec,	// (0x00032f2a) input_focus_pane_vc_g3

0xbff4,	// (0x00032f32) input_focus_pane_vc_g4

0xbffc,	// (0x00032f3a) input_focus_pane_vc_g5

0xc004,	// (0x00032f42) input_focus_pane_vc_g6

0xc00c,	// (0x00032f4a) input_focus_pane_vc_g7

0xc014,	// (0x00032f52) input_focus_pane_vc_g8

0xc01c,	// (0x00032f5a) input_focus_pane_vc_g9

0xb905,	// (0x00032843) input_focus_pane_vc_g10

0x0009,

0xf6d0,	// (0x0003660e) input_focus_pane_vc_g

0xd012,	// (0x00033f50) data_form_pane_vc_ParamLimits

0xd012,	// (0x00033f50) data_form_pane_vc

0xd01e,	// (0x00033f5c) form_field_data_pane_vc_g1

0xe83f,	// (0x0003577d) form_field_data_pane_vc_t1_ParamLimits

0xe83f,	// (0x0003577d) form_field_data_pane_vc_t1

0xbf6c,	// (0x00032eaa) input_focus_pane_vc_ParamLimits

0xbf6c,	// (0x00032eaa) input_focus_pane_vc

0xe859,	// (0x00035797) button_value_adjust_pane_cp3_vc

0xe861,	// (0x0003579f) button_value_adjust_pane_cp5_vc

0xe869,	// (0x000357a7) form_field_data_pane_vc_ParamLimits

0xe869,	// (0x000357a7) form_field_data_pane_vc

0xe880,	// (0x000357be) form_field_data_pane_vc_cp2

0xe888,	// (0x000357c6) form_field_data_wide_pane_vc_ParamLimits

0xe888,	// (0x000357c6) form_field_data_wide_pane_vc

0xe89e,	// (0x000357dc) form_field_data_wide_pane_vc_cp2

0xe8a6,	// (0x000357e4) form_field_popup_pane_vc_ParamLimits

0xe8a6,	// (0x000357e4) form_field_popup_pane_vc

0xe8bd,	// (0x000357fb) form_field_popup_wide_pane_vc_ParamLimits

0xe8bd,	// (0x000357fb) form_field_popup_wide_pane_vc

0xe8d3,	// (0x00035811) form_field_slider_pane_vc_ParamLimits

0xe8d3,	// (0x00035811) form_field_slider_pane_vc

0xe8e6,	// (0x00035824) form_field_slider_wide_pane_vc_ParamLimits

0xe8e6,	// (0x00035824) form_field_slider_wide_pane_vc

0xa0a1,	// (0x00030fdf) grid_touch_1_pane_ParamLimits

0xa0a1,	// (0x00030fdf) grid_touch_1_pane

0xa0b5,	// (0x00030ff3) grid_touch_2_pane_ParamLimits

0xa0b5,	// (0x00030ff3) grid_touch_2_pane

0xe8f9,	// (0x00035837) touch_pane_g1_ParamLimits

0xe8f9,	// (0x00035837) touch_pane_g1

0xe907,	// (0x00035845) cell_app_pane_cp_wide_ParamLimits

0xe907,	// (0x00035845) cell_app_pane_cp_wide

0xe918,	// (0x00035856) grid_popup_fast_wide_pane_ParamLimits

0xe918,	// (0x00035856) grid_popup_fast_wide_pane

0xe92c,	// (0x0003586a) scroll_pane_cp19_ParamLimits

0xe92c,	// (0x0003586a) scroll_pane_cp19

0xb90f,	// (0x0003284d) bg_popup_window_pane_cp20

0xe940,	// (0x0003587e) listscroll_popup_fast_wide_pane

0xd39b,	// (0x000342d9) grid_indicator_nsta_pane

0xe948,	// (0x00035886) clock_nsta_pane_g1

0xe951,	// (0x0003588f) clock_nsta_pane_t1

0xa0df,	// (0x0003101d) cell_indicator_nsta_pane_ParamLimits

0xa0df,	// (0x0003101d) cell_indicator_nsta_pane

0xe8f9,	// (0x00035837) cell_indicator_nsta_pane_g1

0xa0f8,	// (0x00031036) cell_indicator_nsta_pane_g2

0x0001,

0xfae1,	// (0x00036a1f) cell_indicator_nsta_pane_g

0xe96d,	// (0x000358ab) clock_nsta_pane_cp

0xe975,	// (0x000358b3) indicator_nsta_pane_cp

0xe97d,	// (0x000358bb) nsta_clock_indic_pane_g1

0xb9a7,	// (0x000328e5) grid_indicator_pane

0xc3e6,	// (0x00033324) scroll_pane_cp29

0x0f63,	// (0x00027ea1) indicator_nsta_pane_cp2_ParamLimits

0x0f63,	// (0x00027ea1) indicator_nsta_pane_cp2

0xb96b,	// (0x000328a9) main_apps_wheel_pane

0xd13a,	// (0x00034078) form_midp_field_text_pane_ParamLimits

0xd26d,	// (0x000341ab) scroll_bar_cp050_ParamLimits

0xe9b5,	// (0x000358f3) cell_indicator_pane_ParamLimits

0xe9b5,	// (0x000358f3) cell_indicator_pane

0xe9cc,	// (0x0003590a) cell_indicator_pane_g1

0xa10e,	// (0x0003104c) grid_wheel_folder_pane_ParamLimits

0xa10e,	// (0x0003104c) grid_wheel_folder_pane

0xa11c,	// (0x0003105a) list_wheel_apps_pane_ParamLimits

0xa11c,	// (0x0003105a) list_wheel_apps_pane

0xa12a,	// (0x00031068) main_apps_wheel_pane_g1_ParamLimits

0xa12a,	// (0x00031068) main_apps_wheel_pane_g1

0xa136,	// (0x00031074) main_apps_wheel_pane_g2_ParamLimits

0xa136,	// (0x00031074) main_apps_wheel_pane_g2

0x0001,

0xfaf0,	// (0x00036a2e) main_apps_wheel_pane_g_ParamLimits

0xfaf0,	// (0x00036a2e) main_apps_wheel_pane_g

0xa144,	// (0x00031082) main_apps_wheel_pane_t1_ParamLimits

0xa144,	// (0x00031082) main_apps_wheel_pane_t1

0xa158,	// (0x00031096) list_wheel_apps_pane_g1

0xa160,	// (0x0003109e) list_wheel_apps_pane_g2

0xa168,	// (0x000310a6) list_wheel_apps_pane_g3

0xa170,	// (0x000310ae) list_wheel_apps_pane_g4

0xa17a,	// (0x000310b8) list_wheel_apps_pane_g5

0x0004,

0xfaf5,	// (0x00036a33) list_wheel_apps_pane_g

0xc81a,	// (0x00033758) navi_icon_text_pane

0x974d,	// (0x0003068b) aid_fill_nsta

0xa191,	// (0x000310cf) navi_icon_text_pane_g1

0xa19d,	// (0x000310db) navi_icon_text_pane_t1

0x8ddd,	// (0x0002fd1b) list_set_graphic_pane_t1_ParamLimits

0x8ddd,	// (0x0002fd1b) list_set_graphic_pane_t1

0xd981,	// (0x000348bf) popup_midp_note_alarm_window_t6_ParamLimits

0xd981,	// (0x000348bf) popup_midp_note_alarm_window_t6

0xd993,	// (0x000348d1) popup_midp_note_alarm_window_t7_ParamLimits

0xd993,	// (0x000348d1) popup_midp_note_alarm_window_t7

0xd9a5,	// (0x000348e3) popup_midp_note_alarm_window_t8_ParamLimits

0xd9a5,	// (0x000348e3) popup_midp_note_alarm_window_t8

0xd9b7,	// (0x000348f5) popup_midp_note_alarm_window_t9_ParamLimits

0xd9b7,	// (0x000348f5) popup_midp_note_alarm_window_t9

0xd9c9,	// (0x00034907) popup_midp_note_alarm_window_t10_ParamLimits

0xd9c9,	// (0x00034907) popup_midp_note_alarm_window_t10

0xd9db,	// (0x00034919) popup_midp_note_alarm_window_t11_ParamLimits

0xd9db,	// (0x00034919) popup_midp_note_alarm_window_t11

0xd9ed,	// (0x0003492b) scroll_pane_cp17_ParamLimits

0xd9ed,	// (0x0003492b) scroll_pane_cp17

0x1dfc,	// (0x00028d3a) volume_small_pane_cp_g1

0x266f,	// (0x000295ad) volume_small_pane_cp_g2

0x2678,	// (0x000295b6) volume_small_pane_cp_g3

0x2681,	// (0x000295bf) volume_small_pane_cp_g4

0x268a,	// (0x000295c8) volume_small_pane_cp_g5

0x2693,	// (0x000295d1) volume_small_pane_cp_g6

0x269c,	// (0x000295da) volume_small_pane_cp_g7

0x26a5,	// (0x000295e3) volume_small_pane_cp_g8

0x26ae,	// (0x000295ec) volume_small_pane_cp_g9

0x26b7,	// (0x000295f5) volume_small_pane_cp_g10

0xc9c4,	// (0x00033902) midp_ticker_pane_g1_ParamLimits

0xc9d0,	// (0x0003390e) midp_ticker_pane_g2_ParamLimits

0xf798,	// (0x000366d6) midp_ticker_pane_g_ParamLimits

0x8e9d,	// (0x0002fddb) midp_ticker_pane_t1_ParamLimits

0x976d,	// (0x000306ab) aid_fill_nsta_2

0xd259,	// (0x00034197) list_form2_midp_pane

0xe0b6,	// (0x00034ff4) midp_editing_number_pane_ParamLimits

0xe0c5,	// (0x00035003) midp_ticker_pane_ParamLimits

0xe9d6,	// (0x00035914) form2_midp_field_pane

0xe9de,	// (0x0003591c) scroll_pane_cp51

0xe9fe,	// (0x0003593c) form2_midp_button_pane_ParamLimits

0xe9fe,	// (0x0003593c) form2_midp_button_pane

0xea10,	// (0x0003594e) form2_midp_content_pane_ParamLimits

0xea10,	// (0x0003594e) form2_midp_content_pane

0xea2a,	// (0x00035968) form2_midp_field_choice_group_pane

0xea32,	// (0x00035970) form2_midp_field_pane_g1

0xea3a,	// (0x00035978) form2_midp_field_pane_g2

0xea42,	// (0x00035980) form2_midp_field_pane_g3

0xea4a,	// (0x00035988) form2_midp_field_pane_g4

0x0003,

0xfb1a,	// (0x00036a58) form2_midp_field_pane_g

0xea52,	// (0x00035990) form2_midp_gauge_slider_pane

0xea5a,	// (0x00035998) form2_midp_gauge_wait_pane

0xea62,	// (0x000359a0) form2_midp_image_pane_ParamLimits

0xea62,	// (0x000359a0) form2_midp_image_pane

0xea7d,	// (0x000359bb) form2_midp_label_pane_ParamLimits

0xea7d,	// (0x000359bb) form2_midp_label_pane

0xa1cb,	// (0x00031109) form2_midp_label_pane_cp_ParamLimits

0xa1cb,	// (0x00031109) form2_midp_label_pane_cp

0xea96,	// (0x000359d4) form2_midp_string_pane_ParamLimits

0xea96,	// (0x000359d4) form2_midp_string_pane

0x63ee,	// (0x0002d32c) form2_midp_text_pane_ParamLimits

0x63ee,	// (0x0002d32c) form2_midp_text_pane

0xeaa8,	// (0x000359e6) form2_midp_time_pane

0xeab8,	// (0x000359f6) input_focus_pane_cp51_ParamLimits

0xeab8,	// (0x000359f6) input_focus_pane_cp51

0xead0,	// (0x00035a0e) form2_midp_label_pane_t1_ParamLimits

0xead0,	// (0x00035a0e) form2_midp_label_pane_t1

0x6409,	// (0x0002d347) form2_mdip_text_pane_t1_ParamLimits

0x6409,	// (0x0002d347) form2_mdip_text_pane_t1

0x6427,	// (0x0002d365) form2_midp_time_pane_t1

0xeb19,	// (0x00035a57) form2_midp_gauge_slider_pane_t1

0xa1ec,	// (0x0003112a) form2_midp_gauge_slider_pane_t2

0xa1fe,	// (0x0003113c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb23,	// (0x00036a61) form2_midp_gauge_slider_pane_t

0xeb2b,	// (0x00035a69) form2_midp_slider_pane

0xeb37,	// (0x00035a75) form2_midp_gauge_wait_pane_t1

0xeb45,	// (0x00035a83) form2_midp_wait_pane_ParamLimits

0xeb45,	// (0x00035a83) form2_midp_wait_pane

0xa210,	// (0x0003114e) list_single_2graphic_pane_cp4_ParamLimits

0xa210,	// (0x0003114e) list_single_2graphic_pane_cp4

0x9b7e,	// (0x00030abc) list_single_midp_graphic_pane_cp_ParamLimits

0x9b7e,	// (0x00030abc) list_single_midp_graphic_pane_cp

0xb90f,	// (0x0003284d) list_highlight_pane_cp20

0xeb70,	// (0x00035aae) list_single_2graphic_pane_g1_cp4

0xeb78,	// (0x00035ab6) list_single_2graphic_pane_g2_cp4

0xeb80,	// (0x00035abe) list_single_2graphic_pane_t1_cp4

0xb96b,	// (0x000328a9) list_highlight_pane_cp21

0xeb8f,	// (0x00035acd) list_single_midp_graphic_pane_g4_cp

0xeb9e,	// (0x00035adc) list_single_midp_graphic_pane_t1_cp

0xa225,	// (0x00031163) form2_mdip_string_pane_t1_ParamLimits

0xa225,	// (0x00031163) form2_mdip_string_pane_t1

0xb90f,	// (0x0003284d) bg_wml_button_pane_cp2

0xb905,	// (0x00032843) form2_midp_image_pane_g1

0x43d9,	// (0x0002b317) list_double_large_graphic_pane_g5_ParamLimits

0x43d9,	// (0x0002b317) list_double_large_graphic_pane_g5

0x8df5,	// (0x0002fd33) midp_form_pane_ParamLimits

0xb96b,	// (0x000328a9) main_apps_wheel_pane_ParamLimits

0x92ec,	// (0x0003022a) popup_preview_window_ParamLimits

0x92ec,	// (0x0003022a) popup_preview_window

0xccc3,	// (0x00033c01) popup_touch_info_window_ParamLimits

0xccc3,	// (0x00033c01) popup_touch_info_window

0xcce1,	// (0x00033c1f) popup_touch_menu_window_ParamLimits

0xcce1,	// (0x00033c1f) popup_touch_menu_window

0xb8fb,	// (0x00032839) bg_popup_sub_pane_cp6

0xebb3,	// (0x00035af1) list_touch_menu_pane

0xebbb,	// (0x00035af9) list_single_touch_menu_pane_ParamLimits

0xebbb,	// (0x00035af9) list_single_touch_menu_pane

0xebd2,	// (0x00035b10) list_single_touch_menu_pane_t1

0xb96b,	// (0x000328a9) bg_popup_sub_pane_cp7_ParamLimits

0xb96b,	// (0x000328a9) bg_popup_sub_pane_cp7

0xebe0,	// (0x00035b1e) heading_sub_pane

0xebe8,	// (0x00035b26) list_touch_info_pane_ParamLimits

0xebe8,	// (0x00035b26) list_touch_info_pane

0xebf7,	// (0x00035b35) list_single_touch_info_pane_ParamLimits

0xebf7,	// (0x00035b35) list_single_touch_info_pane

0xec09,	// (0x00035b47) list_single_touch_info_pane_t1

0xec17,	// (0x00035b55) list_single_touch_info_pane_t2

0x0001,

0xfb31,	// (0x00036a6f) list_single_touch_info_pane_t

0xc99a,	// (0x000338d8) bg_popup_heading_pane_cp

0xec25,	// (0x00035b63) heading_sub_pane_t1

0xcfd8,	// (0x00033f16) bg_popup_preview_window_pane_cp_ParamLimits

0xcfd8,	// (0x00033f16) bg_popup_preview_window_pane_cp

0xebe0,	// (0x00035b1e) heading_preview_pane

0xebe8,	// (0x00035b26) list_preview_pane_ParamLimits

0xebe8,	// (0x00035b26) list_preview_pane

0xec33,	// (0x00035b71) popup_preview_window_g1

0xebf7,	// (0x00035b35) list_single_preview_pane_ParamLimits

0xebf7,	// (0x00035b35) list_single_preview_pane

0xec3b,	// (0x00035b79) list_single_preview_pane_g1

0xec43,	// (0x00035b81) list_single_preview_pane_t1

0xec09,	// (0x00035b47) list_single_preview_pane_t2

0x0001,

0xfb36,	// (0x00036a74) list_single_preview_pane_t

0xec51,	// (0x00035b8f) bg_popup_heading_pane_cp2_ParamLimits

0xec51,	// (0x00035b8f) bg_popup_heading_pane_cp2

0xec67,	// (0x00035ba5) heading_preview_pane_g1

0xec6f,	// (0x00035bad) heading_preview_pane_t1_ParamLimits

0xec6f,	// (0x00035bad) heading_preview_pane_t1

0xb9be,	// (0x000328fc) soft_indicator_pane_t1_ParamLimits

0xbedf,	// (0x00032e1d) scroll_pane_ParamLimits

0xc2df,	// (0x0003321d) scroll_sc2_left_pane

0xc2e8,	// (0x00033226) scroll_sc2_right_pane

0xc307,	// (0x00033245) scroll_bg_pane_g1_ParamLimits

0xc31c,	// (0x0003325a) scroll_bg_pane_g2_ParamLimits

0xc334,	// (0x00033272) scroll_bg_pane_g3_ParamLimits

0xf727,	// (0x00036665) scroll_bg_pane_g_ParamLimits

0xc307,	// (0x00033245) scroll_handle_pane_g1_ParamLimits

0xc356,	// (0x00033294) scroll_handle_pane_g2_ParamLimits

0xc334,	// (0x00033272) scroll_handle_pane_g3_ParamLimits

0xf72e,	// (0x0003666c) scroll_handle_pane_g_ParamLimits

0xcc04,	// (0x00033b42) popup_choice_list_window_ParamLimits

0xcc04,	// (0x00033b42) popup_choice_list_window

0xce32,	// (0x00033d70) choice_list_pane

0xceb4,	// (0x00033df2) cell_toolbar_pane_t1

0xcedc,	// (0x00033e1a) toolbar_button_pane_ParamLimits

0xde19,	// (0x00034d57) ai_gene_pane_1_t2_ParamLimits

0xde19,	// (0x00034d57) ai_gene_pane_1_t2

0x0001,

0xf946,	// (0x00036884) ai_gene_pane_1_t_ParamLimits

0xf946,	// (0x00036884) ai_gene_pane_1_t

0xec8c,	// (0x00035bca) scroll_sc2_left_pane_g1

0xec8c,	// (0x00035bca) scroll_sc2_right_pane_g1

0xc0cd,	// (0x0003300b) bg_popup_sub_pane_cp10

0xec96,	// (0x00035bd4) list_choice_list_pane

0xecad,	// (0x00035beb) list_single_choice_list_pane_ParamLimits

0xecad,	// (0x00035beb) list_single_choice_list_pane

0xecc1,	// (0x00035bff) list_single_choice_list_pane_g1

0xecc9,	// (0x00035c07) list_single_choice_list_pane_t1_ParamLimits

0xecc9,	// (0x00035c07) list_single_choice_list_pane_t1

0xecde,	// (0x00035c1c) choice_list_pane_g1

0xece6,	// (0x00035c24) choice_list_pane_t1

0xb8fb,	// (0x00032839) input_focus_pane_cp11

0xc242,	// (0x00033180) title_pane_stacon_g2_ParamLimits

0xc242,	// (0x00033180) title_pane_stacon_g2

0x0002,

0xf70d,	// (0x0003664b) title_pane_stacon_g_ParamLimits

0xf70d,	// (0x0003664b) title_pane_stacon_g

0xc99a,	// (0x000338d8) cursor_press_pane

0x8fb7,	// (0x0002fef5) popup_fep_hwr_window_ParamLimits

0x8fb7,	// (0x0002fef5) popup_fep_hwr_window

0xcc5a,	// (0x00033b98) popup_fep_vkb_window_ParamLimits

0xcc5a,	// (0x00033b98) popup_fep_vkb_window

0xecf4,	// (0x00035c32) cursor_press_pane_g1

0x0002,

0xfb5f,	// (0x00036a9d) fep_vkb_side_pane_g_ParamLimits

0x2882,	// (0x000297c0) fep_hwr_candidate_pane_ParamLimits

0x2882,	// (0x000297c0) fep_hwr_candidate_pane

0x28ac,	// (0x000297ea) fep_hwr_side_pane_ParamLimits

0x28ac,	// (0x000297ea) fep_hwr_side_pane

0x28cc,	// (0x0002980a) fep_hwr_top_pane_ParamLimits

0x28cc,	// (0x0002980a) fep_hwr_top_pane

0x28e4,	// (0x00029822) fep_hwr_write_pane_ParamLimits

0x28e4,	// (0x00029822) fep_hwr_write_pane

0xfb5f,	// (0x00036a9d) fep_vkb_side_pane_g

0xecfc,	// (0x00035c3a) fep_hwr_top_pane_g1

0xed0e,	// (0x00035c4c) fep_hwr_top_pane_g2

0x291e,	// (0x0002985c) fep_hwr_top_pane_g3

0x0002,

0xfb3b,	// (0x00036a79) fep_hwr_top_pane_g

0x2933,	// (0x00029871) fep_hwr_top_text_pane

0xc4ad,	// (0x000333eb) fep_hwr_top_text_pane_g1

0xed44,	// (0x00035c82) fep_hwr_top_text_pane_t1

0x2a29,	// (0x00029967) fep_hwr_candidate_pane_g1

0xee71,	// (0x00035daf) fep_vkb_keypad_pane_g3_ParamLimits

0xee71,	// (0x00035daf) fep_vkb_keypad_pane_g3

0xeea7,	// (0x00035de5) fep_vkb_keypad_pane_g4_ParamLimits

0xeea7,	// (0x00035de5) fep_vkb_keypad_pane_g4

0xef16,	// (0x00035e54) fep_vkb_bottom_pane_g2_ParamLimits

0xef16,	// (0x00035e54) fep_vkb_bottom_pane_g2

0x0001,

0xfb66,	// (0x00036aa4) fep_vkb_bottom_pane_g_ParamLimits

0xfb66,	// (0x00036aa4) fep_vkb_bottom_pane_g

0xec8c,	// (0x00035bca) cell_vkb_side_pane_g2

0x0001,

0xfb70,	// (0x00036aae) cell_vkb_side_pane_g

0xef5a,	// (0x00035e98) cell_vkb_side_pane_t1

0xef68,	// (0x00035ea6) cell_vkb_side_pane_t1_copy1

0xec8c,	// (0x00035bca) bg_fep_vkb_candidate_pane_g2

0xf03e,	// (0x00035f7c) cell_vkb_candidate_pane_ParamLimits

0xed52,	// (0x00035c90) aid_size_cell_vkb_ParamLimits

0xed52,	// (0x00035c90) aid_size_cell_vkb

0xf03e,	// (0x00035f7c) cell_vkb_candidate_pane

0x2c13,	// (0x00029b51) bg_popup_fep_shadow_pane_g1

0xa2b3,	// (0x000311f1) fep_vkb_bottom_pane_ParamLimits

0xa2b3,	// (0x000311f1) fep_vkb_bottom_pane

0xeddf,	// (0x00035d1d) fep_vkb_candidate_pane_ParamLimits

0xeddf,	// (0x00035d1d) fep_vkb_candidate_pane

0xa2d8,	// (0x00031216) fep_vkb_keypad_pane_ParamLimits

0xa2d8,	// (0x00031216) fep_vkb_keypad_pane

0xa314,	// (0x00031252) fep_vkb_side_pane_ParamLimits

0xa314,	// (0x00031252) fep_vkb_side_pane

0xa350,	// (0x0003128e) fep_vkb_top_pane_ParamLimits

0xa350,	// (0x0003128e) fep_vkb_top_pane

0xee05,	// (0x00035d43) fep_vkb_top_pane_g1_ParamLimits

0xee05,	// (0x00035d43) fep_vkb_top_pane_g1

0xee14,	// (0x00035d52) fep_vkb_top_pane_g2_ParamLimits

0xee14,	// (0x00035d52) fep_vkb_top_pane_g2

0xee23,	// (0x00035d61) fep_vkb_top_pane_g3_ParamLimits

0xee23,	// (0x00035d61) fep_vkb_top_pane_g3

0x0003,

0xfb56,	// (0x00036a94) fep_vkb_top_pane_g_ParamLimits

0xfb56,	// (0x00036a94) fep_vkb_top_pane_g

0xee41,	// (0x00035d7f) fep_vkb_top_text_pane_ParamLimits

0xee41,	// (0x00035d7f) fep_vkb_top_text_pane

0xa38c,	// (0x000312ca) fep_vkb_side_pane_g1_ParamLimits

0xa38c,	// (0x000312ca) fep_vkb_side_pane_g1

0xee60,	// (0x00035d9e) grid_vkb_side_pane_ParamLimits

0xee60,	// (0x00035d9e) grid_vkb_side_pane

0x2c1b,	// (0x00029b59) bg_popup_fep_shadow_pane_g2

0x2c24,	// (0x00029b62) bg_popup_fep_shadow_pane_g3

0x2c2c,	// (0x00029b6a) bg_popup_fep_shadow_pane_g4

0x2c35,	// (0x00029b73) bg_popup_fep_shadow_pane_g5

0x2c3f,	// (0x00029b7d) bg_popup_fep_shadow_pane_g6

0x2c47,	// (0x00029b85) bg_popup_fep_shadow_pane_g7

0xbff4,	// (0x00032f32) bg_popup_fep_shadow_pane_g8

0xeec5,	// (0x00035e03) grid_vkb_keypad_number_pane_ParamLimits

0xeec5,	// (0x00035e03) grid_vkb_keypad_number_pane

0xeed5,	// (0x00035e13) grid_vkb_keypad_pane_ParamLimits

0xeed5,	// (0x00035e13) grid_vkb_keypad_pane

0xeefb,	// (0x00035e39) fep_vkb_bottom_pane_g1_ParamLimits

0xeefb,	// (0x00035e39) fep_vkb_bottom_pane_g1

0xef24,	// (0x00035e62) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xef24,	// (0x00035e62) grid_vkb_keypad_bottom_left_pane

0xef39,	// (0x00035e77) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xef39,	// (0x00035e77) grid_vkb_keypad_bottom_right_pane

0xef4e,	// (0x00035e8c) fep_vkb_top_text_pane_g1

0xa3d3,	// (0x00031311) fep_vkb_top_text_pane_t1

0xa3e5,	// (0x00031323) cell_vkb_side_pane_ParamLimits

0xa3e5,	// (0x00031323) cell_vkb_side_pane

0xec8c,	// (0x00035bca) cell_vkb_side_pane_g1

0xef76,	// (0x00035eb4) cell_vkb_keypad_pane_ParamLimits

0xef76,	// (0x00035eb4) cell_vkb_keypad_pane

0xefeb,	// (0x00035f29) cell_vkb_keypad_pane_g1

0x0008,

0xfb83,	// (0x00036ac1) bg_popup_fep_shadow_pane_g

0x2c59,	// (0x00029b97) cell_hwr_side_pane_g1

0x2c59,	// (0x00029b97) cell_hwr_side_pane_g2

0xeff5,	// (0x00035f33) cell_vkb_keypad_pane_t1

0xa3fb,	// (0x00031339) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa3fb,	// (0x00031339) cell_vkb_keypad_bottom_left_pane

0xa410,	// (0x0003134e) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa410,	// (0x0003134e) cell_vkb_keypad_bottom_right_pane

0xec8c,	// (0x00035bca) cell_vkb_keypad_bottom_left_pane_g1

0xec8c,	// (0x00035bca) cell_vkb_keypad_bottom_right_pane_g1

0xf003,	// (0x00035f41) cell_vkb_keypad_number_pane_ParamLimits

0xf003,	// (0x00035f41) cell_vkb_keypad_number_pane

0xf022,	// (0x00035f60) cell_vkb_keypad_number_pane_g1

0xf02c,	// (0x00035f6a) cell_vkb_keypad_number_pane_g2

0xf035,	// (0x00035f73) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb75,	// (0x00036ab3) cell_vkb_keypad_number_pane_g

0xeff5,	// (0x00035f33) cell_vkb_keypad_number_pane_t1

0xf059,	// (0x00035f97) fep_vkb_candidate_pane_g1

0x0001,

0xfb96,	// (0x00036ad4) cell_hwr_side_pane_g

0xf072,	// (0x00035fb0) cell_hwr_side_pane_t1

0x2c63,	// (0x00029ba1) cell_hwr_side_pane_t1_copy1

0x2c71,	// (0x00029baf) cell_hwr_candidate_pane_g1

0x2ca0,	// (0x00029bde) cell_hwr_candidate_pane_t1

0xec8c,	// (0x00035bca) cell_vkb_candidate_pane_g2

0xf0b6,	// (0x00035ff4) cell_vkb_candidate_pane_t1

0x2849,	// (0x00029787) bg_popup_fep_shadow_pane_ParamLimits

0x2849,	// (0x00029787) bg_popup_fep_shadow_pane

0x28fe,	// (0x0002983c) bg_fep_hwr_top_pane_g4

0xed20,	// (0x00035c5e) bg_hwr_side_pane_g1_ParamLimits

0xed20,	// (0x00035c5e) bg_hwr_side_pane_g1

0x834c,	// (0x0002f28a) cell_hwr_side_pane_ParamLimits

0x834c,	// (0x0002f28a) cell_hwr_side_pane

0x29aa,	// (0x000298e8) fep_hwr_write_pane_g1_ParamLimits

0x29aa,	// (0x000298e8) fep_hwr_write_pane_g1

0x29b7,	// (0x000298f5) fep_hwr_write_pane_g2_ParamLimits

0x29b7,	// (0x000298f5) fep_hwr_write_pane_g2

0x29c4,	// (0x00029902) fep_hwr_write_pane_g3_ParamLimits

0x29c4,	// (0x00029902) fep_hwr_write_pane_g3

0x836c,	// (0x0002f2aa) fep_hwr_write_pane_g4_ParamLimits

0x836c,	// (0x0002f2aa) fep_hwr_write_pane_g4

0x0005,

0xfb42,	// (0x00036a80) fep_hwr_write_pane_g_ParamLimits

0xfb42,	// (0x00036a80) fep_hwr_write_pane_g

0x28fe,	// (0x0002983c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x28fe,	// (0x0002983c) bg_fep_hwr_candidate_pane_g2

0x29e7,	// (0x00029925) cell_hwr_candidate_pane_ParamLimits

0x29e7,	// (0x00029925) cell_hwr_candidate_pane

0x2a29,	// (0x00029967) fep_hwr_candidate_pane_g1_ParamLimits

0xed80,	// (0x00035cbe) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xed80,	// (0x00035cbe) bg_popup_fep_shadow_pane_cp2

0xee33,	// (0x00035d71) fep_vkb_top_pane_g4_ParamLimits

0xee33,	// (0x00035d71) fep_vkb_top_pane_g4

0xee52,	// (0x00035d90) fep_vkb_side_pane_g2_ParamLimits

0xee52,	// (0x00035d90) fep_vkb_side_pane_g2

0x7d0e,	// (0x0002ec4c) list_setting_pane_t4_ParamLimits

0x7d0e,	// (0x0002ec4c) list_setting_pane_t4

0x7da8,	// (0x0002ece6) list_setting_number_pane_t5_ParamLimits

0x7da8,	// (0x0002ece6) list_setting_number_pane_t5

0x8d20,	// (0x0002fc5e) list_double_heading_pane_cp2_ParamLimits

0x8d20,	// (0x0002fc5e) list_double_heading_pane_cp2

0xbf86,	// (0x00032ec4) list_double_heading_pane_g1_cp2_ParamLimits

0xbf86,	// (0x00032ec4) list_double_heading_pane_g1_cp2

0xbf92,	// (0x00032ed0) list_double_heading_pane_g2_cp2_ParamLimits

0xbf92,	// (0x00032ed0) list_double_heading_pane_g2_cp2

0xf0c4,	// (0x00036002) list_double_heading_pane_t1_cp2_ParamLimits

0xf0c4,	// (0x00036002) list_double_heading_pane_t1_cp2

0xf0da,	// (0x00036018) list_double_heading_pane_t2_cp2_ParamLimits

0xf0da,	// (0x00036018) list_double_heading_pane_t2_cp2

0xb8f3,	// (0x00032831) aid_value_unit2

0x0642,	// (0x00027580) popup_preview_fixed_window

0xba9e,	// (0x000329dc) bg_popup_preview_window_pane_cp02

0xf0ec,	// (0x0003602a) list_preview_fixed_pane

0xf132,	// (0x00036070) list_empty_pane_fp_ParamLimits

0xf132,	// (0x00036070) list_empty_pane_fp

0xf132,	// (0x00036070) list_single_cale_day_pane_fp_ParamLimits

0xf132,	// (0x00036070) list_single_cale_day_pane_fp

0xf132,	// (0x00036070) list_single_graphic_heading_pane_fp_ParamLimits

0xf132,	// (0x00036070) list_single_graphic_heading_pane_fp

0xf132,	// (0x00036070) list_single_graphic_pane_fp_ParamLimits

0xf132,	// (0x00036070) list_single_graphic_pane_fp

0xf132,	// (0x00036070) list_single_heading_pane_fp_ParamLimits

0xf132,	// (0x00036070) list_single_heading_pane_fp

0xf132,	// (0x00036070) list_single_pane_fp_ParamLimits

0xf132,	// (0x00036070) list_single_pane_fp

0xf147,	// (0x00036085) list_single_pane_fp_g1_ParamLimits

0xf147,	// (0x00036085) list_single_pane_fp_g1

0x643a,	// (0x0002d378) list_single_pane_fp_g2_ParamLimits

0x643a,	// (0x0002d378) list_single_pane_fp_g2

0x6446,	// (0x0002d384) list_single_pane_fp_g3_ParamLimits

0x6446,	// (0x0002d384) list_single_pane_fp_g3

0xf153,	// (0x00036091) list_single_pane_fp_g4_ParamLimits

0xf153,	// (0x00036091) list_single_pane_fp_g4

0x0003,

0xfba9,	// (0x00036ae7) list_single_pane_fp_g_ParamLimits

0xfba9,	// (0x00036ae7) list_single_pane_fp_g

0x645a,	// (0x0002d398) list_single_pane_fp_t1_ParamLimits

0x645a,	// (0x0002d398) list_single_pane_fp_t1

0x6471,	// (0x0002d3af) list_single_graphic_pane_fp_g1_ParamLimits

0x6471,	// (0x0002d3af) list_single_graphic_pane_fp_g1

0xf147,	// (0x00036085) list_single_graphic_pane_fp_g2_ParamLimits

0xf147,	// (0x00036085) list_single_graphic_pane_fp_g2

0x643a,	// (0x0002d378) list_single_graphic_pane_fp_g3_ParamLimits

0x643a,	// (0x0002d378) list_single_graphic_pane_fp_g3

0x6446,	// (0x0002d384) list_single_graphic_pane_fp_g4_ParamLimits

0x6446,	// (0x0002d384) list_single_graphic_pane_fp_g4

0xf153,	// (0x00036091) list_single_graphic_pane_fp_g5_ParamLimits

0xf153,	// (0x00036091) list_single_graphic_pane_fp_g5

0x0004,

0xfbb2,	// (0x00036af0) list_single_graphic_pane_fp_g_ParamLimits

0xfbb2,	// (0x00036af0) list_single_graphic_pane_fp_g

0x647d,	// (0x0002d3bb) list_single_graphic_pane_fp_t1_ParamLimits

0x647d,	// (0x0002d3bb) list_single_graphic_pane_fp_t1

0x6471,	// (0x0002d3af) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6471,	// (0x0002d3af) list_single_graphic_heading_pane_fp_g1

0xf147,	// (0x00036085) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xf147,	// (0x00036085) list_single_graphic_heading_pane_fp_g2

0x643a,	// (0x0002d378) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x643a,	// (0x0002d378) list_single_graphic_heading_pane_fp_g3

0x6446,	// (0x0002d384) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6446,	// (0x0002d384) list_single_graphic_heading_pane_fp_g4

0xf153,	// (0x00036091) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xf153,	// (0x00036091) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfbb2,	// (0x00036af0) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfbb2,	// (0x00036af0) list_single_graphic_heading_pane_fp_g

0x6493,	// (0x0002d3d1) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6493,	// (0x0002d3d1) list_single_graphic_heading_pane_fp_t1

0x64a9,	// (0x0002d3e7) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x64a9,	// (0x0002d3e7) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbbd,	// (0x00036afb) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbbd,	// (0x00036afb) list_single_graphic_heading_pane_fp_t

0x64bb,	// (0x0002d3f9) list_single_cale_day_pane_fp_g1_ParamLimits

0x64bb,	// (0x0002d3f9) list_single_cale_day_pane_fp_g1

0xf15f,	// (0x0003609d) list_single_cale_day_pane_fp_g2_ParamLimits

0xf15f,	// (0x0003609d) list_single_cale_day_pane_fp_g2

0x64f3,	// (0x0002d431) list_single_cale_day_pane_fp_g3_ParamLimits

0x64f3,	// (0x0002d431) list_single_cale_day_pane_fp_g3

0x651b,	// (0x0002d459) list_single_cale_day_pane_fp_g4_ParamLimits

0x651b,	// (0x0002d459) list_single_cale_day_pane_fp_g4

0x653f,	// (0x0002d47d) list_single_cale_day_pane_fp_g5_ParamLimits

0x653f,	// (0x0002d47d) list_single_cale_day_pane_fp_g5

0x0004,

0xfbc2,	// (0x00036b00) list_single_cale_day_pane_fp_g_ParamLimits

0xfbc2,	// (0x00036b00) list_single_cale_day_pane_fp_g

0x6563,	// (0x0002d4a1) list_single_cale_day_pane_fp_t1_ParamLimits

0x6563,	// (0x0002d4a1) list_single_cale_day_pane_fp_t1

0x6589,	// (0x0002d4c7) list_single_cale_day_pane_fp_t2_ParamLimits

0x6589,	// (0x0002d4c7) list_single_cale_day_pane_fp_t2

0x65a2,	// (0x0002d4e0) list_single_cale_day_pane_fp_t3_ParamLimits

0x65a2,	// (0x0002d4e0) list_single_cale_day_pane_fp_t3

0x0002,

0xfbcd,	// (0x00036b0b) list_single_cale_day_pane_fp_t_ParamLimits

0xfbcd,	// (0x00036b0b) list_single_cale_day_pane_fp_t

0xf147,	// (0x00036085) list_empty_pane_fp_g1_ParamLimits

0xf147,	// (0x00036085) list_empty_pane_fp_g1

0x65bb,	// (0x0002d4f9) list_empty_pane_fp_t1

0x65c9,	// (0x0002d507) list_empty_pane_fp_t2

0x0001,

0xfbd4,	// (0x00036b12) list_empty_pane_fp_t

0xf147,	// (0x00036085) list_single_heading_pane_fp_g1_ParamLimits

0xf147,	// (0x00036085) list_single_heading_pane_fp_g1

0x643a,	// (0x0002d378) list_single_heading_pane_fp_g2_ParamLimits

0x643a,	// (0x0002d378) list_single_heading_pane_fp_g2

0x6446,	// (0x0002d384) list_single_heading_pane_fp_g3_ParamLimits

0x6446,	// (0x0002d384) list_single_heading_pane_fp_g3

0x0002,

0xfbd9,	// (0x00036b17) list_single_heading_pane_fp_g_ParamLimits

0xfbd9,	// (0x00036b17) list_single_heading_pane_fp_g

0x65d7,	// (0x0002d515) list_single_heading_pane_fp_t1_ParamLimits

0x65d7,	// (0x0002d515) list_single_heading_pane_fp_t1

0x65e9,	// (0x0002d527) list_single_heading_pane_fp_t2_ParamLimits

0x65e9,	// (0x0002d527) list_single_heading_pane_fp_t2

0x0001,

0xfbe0,	// (0x00036b1e) list_single_heading_pane_fp_t_ParamLimits

0xfbe0,	// (0x00036b1e) list_single_heading_pane_fp_t

0xc0d9,	// (0x00033017) aid_size_cell_fast

0xba81,	// (0x000329bf) soft_indicator_pane_cp1_t1

0xc116,	// (0x00033054) cell_app_pane_cp2_ParamLimits

0xc116,	// (0x00033054) cell_app_pane_cp2

0x286b,	// (0x000297a9) fep_hwr_candidate_drop_down_list_pane

0x2a43,	// (0x00029981) fep_hwr_candidate_pane_g3_ParamLimits

0x2a43,	// (0x00029981) fep_hwr_candidate_pane_g3

0xaaec,	// (0x00031a2a) fep_hwr_candidate_pane_g4_ParamLimits

0xaaec,	// (0x00031a2a) fep_hwr_candidate_pane_g4

0x0002,

0xfb4f,	// (0x00036a8d) fep_hwr_candidate_pane_g_ParamLimits

0xfb4f,	// (0x00036a8d) fep_hwr_candidate_pane_g

0xedce,	// (0x00035d0c) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xedce,	// (0x00035d0c) fep_vkb_candidate_drop_down_list_pane

0xf061,	// (0x00035f9f) fep_vkb_candidate_pane_g3

0xf069,	// (0x00035fa7) fep_vkb_candidate_pane_g4

0x0002,

0xfb7c,	// (0x00036aba) fep_vkb_candidate_pane_g

0x2c71,	// (0x00029baf) cell_hwr_candidate_pane_g1_ParamLimits

0x2c7f,	// (0x00029bbd) cell_hwr_candidate_pane_g3_ParamLimits

0x2c7f,	// (0x00029bbd) cell_hwr_candidate_pane_g3

0x4b35,	// (0x0002ba73) cell_hwr_candidate_pane_g4_ParamLimits

0x4b35,	// (0x0002ba73) cell_hwr_candidate_pane_g4

0x0002,

0xfb9b,	// (0x00036ad9) cell_hwr_candidate_pane_g_ParamLimits

0xfb9b,	// (0x00036ad9) cell_hwr_candidate_pane_g

0xf080,	// (0x00035fbe) cell_vkb_candidate_pane_g3_ParamLimits

0xf080,	// (0x00035fbe) cell_vkb_candidate_pane_g3

0xf09b,	// (0x00035fd9) cell_vkb_candidate_pane_g4_ParamLimits

0xf09b,	// (0x00035fd9) cell_vkb_candidate_pane_g4

0xf16b,	// (0x000360a9) cell_app_pane_cp2_g1_ParamLimits

0xf16b,	// (0x000360a9) cell_app_pane_cp2_g1

0xf189,	// (0x000360c7) cell_app_pane_cp2_g2_ParamLimits

0xf189,	// (0x000360c7) cell_app_pane_cp2_g2

0x0001,

0xfbe5,	// (0x00036b23) cell_app_pane_cp2_g_ParamLimits

0xfbe5,	// (0x00036b23) cell_app_pane_cp2_g

0xf195,	// (0x000360d3) cell_app_pane_cp2_t1_ParamLimits

0xf195,	// (0x000360d3) cell_app_pane_cp2_t1

0xbf6c,	// (0x00032eaa) grid_highlight_pane_cp1_ParamLimits

0xbf6c,	// (0x00032eaa) grid_highlight_pane_cp1

0x2cbe,	// (0x00029bfc) cell_hwr_candidate_pane_cp1_ParamLimits

0x2cbe,	// (0x00029bfc) cell_hwr_candidate_pane_cp1

0x2c71,	// (0x00029baf) fep_hwr_candidate_drop_down_list_pane_g1

0x2cdd,	// (0x00029c1b) fep_hwr_candidate_drop_down_list_pane_g2

0x2cea,	// (0x00029c28) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbea,	// (0x00036b28) fep_hwr_candidate_drop_down_list_pane_g

0x2cf7,	// (0x00029c35) fep_hwr_candidate_drop_down_list_scroll_pane

0x2d00,	// (0x00029c3e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2d00,	// (0x00029c3e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2d0d,	// (0x00029c4b) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2d0d,	// (0x00029c4b) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2d1a,	// (0x00029c58) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2d1a,	// (0x00029c58) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x2d27,	// (0x00029c65) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x2d27,	// (0x00029c65) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x2d42,	// (0x00029c80) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x2d42,	// (0x00029c80) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2d5d,	// (0x00029c9b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2d5d,	// (0x00029c9b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2d78,	// (0x00029cb6) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2d78,	// (0x00029cb6) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2d93,	// (0x00029cd1) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2d93,	// (0x00029cd1) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf1,	// (0x00036b2f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf1,	// (0x00036b2f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xf1a7,	// (0x000360e5) cell_vkb_candidate_pane_cp1_ParamLimits

0xf1a7,	// (0x000360e5) cell_vkb_candidate_pane_cp1

0xee33,	// (0x00035d71) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xee33,	// (0x00035d71) fep_vkb_candidate_drop_down_list_pane_g1

0xf1c7,	// (0x00036105) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xf1c7,	// (0x00036105) fep_vkb_candidate_drop_down_list_pane_g2

0xf1d4,	// (0x00036112) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xf1d4,	// (0x00036112) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfc02,	// (0x00036b40) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfc02,	// (0x00036b40) fep_vkb_candidate_drop_down_list_pane_g

0xf1e1,	// (0x0003611f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xf1e1,	// (0x0003611f) fep_vkb_candidate_drop_down_list_scroll_pane

0xf1ee,	// (0x0003612c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xf1ee,	// (0x0003612c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xf1fb,	// (0x00036139) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xf1fb,	// (0x00036139) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xf207,	// (0x00036145) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xf207,	// (0x00036145) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xf213,	// (0x00036151) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf213,	// (0x00036151) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xf234,	// (0x00036172) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf234,	// (0x00036172) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xf255,	// (0x00036193) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xf255,	// (0x00036193) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xf276,	// (0x000361b4) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf276,	// (0x000361b4) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xf297,	// (0x000361d5) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf297,	// (0x000361d5) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfc09,	// (0x00036b47) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfc09,	// (0x00036b47) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8814,	// (0x0002f752) title_pane_g1_ParamLimits

0x8825,	// (0x0002f763) title_pane_g2_ParamLimits

0xf592,	// (0x000364d0) title_pane_g_ParamLimits

0xc49d,	// (0x000333db) aid_call2_pane

0xc4a5,	// (0x000333e3) aid_call_pane

0xc4ad,	// (0x000333eb) popup_clock_analogue_window_g1

0xc4ad,	// (0x000333eb) popup_clock_analogue_window_g2

0x0dc1,	// (0x00027cff) popup_clock_analogue_window_g3

0x0dca,	// (0x00027d08) popup_clock_analogue_window_g4

0xb905,	// (0x00032843) popup_clock_analogue_window_g5

0x0004,

0xf73c,	// (0x0003667a) popup_clock_analogue_window_g

0x0dd2,	// (0x00027d10) popup_clock_analogue_window_t1

0x0e0d,	// (0x00027d4b) clock_digital_number_pane_ParamLimits

0x0e0d,	// (0x00027d4b) clock_digital_number_pane

0x0e19,	// (0x00027d57) clock_digital_number_pane_cp02_ParamLimits

0x0e19,	// (0x00027d57) clock_digital_number_pane_cp02

0x0e25,	// (0x00027d63) clock_digital_number_pane_cp03_ParamLimits

0x0e25,	// (0x00027d63) clock_digital_number_pane_cp03

0x0e31,	// (0x00027d6f) clock_digital_number_pane_cp04_ParamLimits

0x0e31,	// (0x00027d6f) clock_digital_number_pane_cp04

0x0e3d,	// (0x00027d7b) clock_digital_separator_pane_ParamLimits

0x0e3d,	// (0x00027d7b) clock_digital_separator_pane

0x0e49,	// (0x00027d87) popup_clock_digital_window_t1_ParamLimits

0x0e49,	// (0x00027d87) popup_clock_digital_window_t1

0xb905,	// (0x00032843) clock_digital_number_pane_g1

0xb905,	// (0x00032843) clock_digital_number_pane_g2

0x0001,

0xf747,	// (0x00036685) clock_digital_number_pane_g

0xb905,	// (0x00032843) clock_digital_separator_pane_g1

0xb905,	// (0x00032843) clock_digital_separator_pane_g2

0x0001,

0xf747,	// (0x00036685) clock_digital_separator_pane_g

0x974d,	// (0x0003068b) aid_fill_nsta_ParamLimits

0x987c,	// (0x000307ba) indicator_nsta_pane_ParamLimits

0xcdd9,	// (0x00033d17) popup_clock_analogue_window

0xcdd9,	// (0x00033d17) popup_clock_digital_window

0xd39b,	// (0x000342d9) grid_indicator_nsta_pane_ParamLimits

0xe95f,	// (0x0003589d) clock_nsta_pane_t2

0x0001,

0xfadc,	// (0x00036a1a) clock_nsta_pane_t

0x0d85,	// (0x00027cc3) aid_size_max_handle

0x7f35,	// (0x0002ee73) aid_size_min_handle

0xc99a,	// (0x000338d8) editor_scroll_pane

0xf2b2,	// (0x000361f0) ex_editor_pane

0xc094,	// (0x00032fd2) scroll_pane_cp13

0xbf0b,	// (0x00032e49) scroll_pane_cp14

0xc4d7,	// (0x00033415) scroll_pane_cp36

0x8d2f,	// (0x0002fc6d) list_single_graphic_hl_pane_cp2_ParamLimits

0x8d2f,	// (0x0002fc6d) list_single_graphic_hl_pane_cp2

0x8322,	// (0x0002f260) list_single_graphic_hl_pane_ParamLimits

0x8322,	// (0x0002f260) list_single_graphic_hl_pane

0x65ff,	// (0x0002d53d) aid_size_min_hl_cp1

0xf2ba,	// (0x000361f8) list_highlight_pane_cp34_ParamLimits

0xf2ba,	// (0x000361f8) list_highlight_pane_cp34

0xf2cb,	// (0x00036209) list_single_graphic_hl_pane_g1_ParamLimits

0xf2cb,	// (0x00036209) list_single_graphic_hl_pane_g1

0x8381,	// (0x0002f2bf) list_single_graphic_hl_pane_g2_ParamLimits

0x8381,	// (0x0002f2bf) list_single_graphic_hl_pane_g2

0x8381,	// (0x0002f2bf) list_single_graphic_hl_pane_g3_ParamLimits

0x8381,	// (0x0002f2bf) list_single_graphic_hl_pane_g3

0x838d,	// (0x0002f2cb) list_single_graphic_hl_pane_g4_ParamLimits

0x838d,	// (0x0002f2cb) list_single_graphic_hl_pane_g4

0x8399,	// (0x0002f2d7) list_single_graphic_hl_pane_g5_ParamLimits

0x8399,	// (0x0002f2d7) list_single_graphic_hl_pane_g5

0x0004,

0xfc1a,	// (0x00036b58) list_single_graphic_hl_pane_g_ParamLimits

0xfc1a,	// (0x00036b58) list_single_graphic_hl_pane_g

0x9366,	// (0x000302a4) list_single_graphic_hl_pane_t1_ParamLimits

0x9366,	// (0x000302a4) list_single_graphic_hl_pane_t1

0xf2d8,	// (0x00036216) aid_size_min_hl_cp2

0xf2e1,	// (0x0003621f) list_highlight_pane_cp34_cp2_ParamLimits

0xf2e1,	// (0x0003621f) list_highlight_pane_cp34_cp2

0xf2cb,	// (0x00036209) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xf2cb,	// (0x00036209) list_single_graphic_hl_pane_g1_cp2

0xf2ee,	// (0x0003622c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xf2ee,	// (0x0003622c) list_single_graphic_hl_pane_g2_cp2

0xf2fa,	// (0x00036238) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xf2fa,	// (0x00036238) list_single_graphic_hl_pane_g3_cp2

0xe121,	// (0x0003505f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xe121,	// (0x0003505f) list_single_graphic_hl_pane_g4_cp2

0xf308,	// (0x00036246) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xf308,	// (0x00036246) list_single_graphic_hl_pane_g5_cp2

0x7ff8,	// (0x0002ef36) control_pane_g4_ParamLimits

0x7ff8,	// (0x0002ef36) control_pane_g4

0xc0cd,	// (0x0003300b) bg_popup_sub_pane_cp10_ParamLimits

0xec96,	// (0x00035bd4) list_choice_list_pane_ParamLimits

0xeca5,	// (0x00035be3) scroll_pane_cp23

0xba9e,	// (0x000329dc) bg_popup_preview_window_pane_cp02_ParamLimits

0xf0ec,	// (0x0003602a) list_preview_fixed_pane_ParamLimits

0xf102,	// (0x00036040) list_preview_fixed_pane_cp_ParamLimits

0xf102,	// (0x00036040) list_preview_fixed_pane_cp

0xf10e,	// (0x0003604c) popup_preview_fixed_window_g1_ParamLimits

0xf10e,	// (0x0003604c) popup_preview_fixed_window_g1

0xf11a,	// (0x00036058) popup_preview_fixed_window_g2_ParamLimits

0xf11a,	// (0x00036058) popup_preview_fixed_window_g2

0x0002,

0xfba2,	// (0x00036ae0) popup_preview_fixed_window_g_ParamLimits

0xfba2,	// (0x00036ae0) popup_preview_fixed_window_g

0x0c78,	// (0x00027bb6) aid_navi_side_left_pane_ParamLimits

0x0c8d,	// (0x00027bcb) aid_navi_side_right_pane_ParamLimits

0x0ca5,	// (0x00027be3) navi_icon_pane_stacon_ParamLimits

0x0cb9,	// (0x00027bf7) navi_navi_pane_stacon_ParamLimits

0x0ca5,	// (0x00027be3) navi_text_pane_stacon_ParamLimits

0xb8fb,	// (0x00032839) main_text_info_pane

0xf332,	// (0x00036270) listscroll_text_info_pane

0xf33a,	// (0x00036278) list_text_info_pane_ParamLimits

0xf33a,	// (0x00036278) list_text_info_pane

0xf349,	// (0x00036287) scroll_pane_cp24_ParamLimits

0xf349,	// (0x00036287) scroll_pane_cp24

0xa42b,	// (0x00031369) list_text_info_pane_t1_ParamLimits

0xa42b,	// (0x00031369) list_text_info_pane_t1

0x8f2a,	// (0x0002fe68) popup_fast_swap2_window_ParamLimits

0x8f2a,	// (0x0002fe68) popup_fast_swap2_window

0xf367,	// (0x000362a5) aid_size_cell_fast2

0xb8fb,	// (0x00032839) bg_popup_window_pane_cp17

0xd285,	// (0x000341c3) heading_pane_cp2

0xbc90,	// (0x00032bce) listscroll_fast2_pane

0xf371,	// (0x000362af) grid_fast2_pane

0xf37b,	// (0x000362b9) listscroll_fast2_pane_g1

0xf383,	// (0x000362c1) listscroll_fast2_pane_g2

0x0001,

0xfc25,	// (0x00036b63) listscroll_fast2_pane_g

0xc094,	// (0x00032fd2) scroll_pane_cp26

0xf38d,	// (0x000362cb) cell_fast2_pane_ParamLimits

0xf38d,	// (0x000362cb) cell_fast2_pane

0xf3a2,	// (0x000362e0) cell_fast2_pane_g1

0xf3ab,	// (0x000362e9) cell_fast2_pane_g2

0xf3b4,	// (0x000362f2) cell_fast2_pane_g3

0x0002,

0xfc2a,	// (0x00036b68) cell_fast2_pane_g

0xbcd2,	// (0x00032c10) grid_highlight_pane_cp9

0xbce7,	// (0x00032c25) main_eswt_pane_ParamLimits

0xbce7,	// (0x00032c25) main_eswt_pane

0xf35e,	// (0x0003629c) list_single_text_info_pane

0xf3bc,	// (0x000362fa) eswt_ctrl_button_pane

0xf3bc,	// (0x000362fa) eswt_ctrl_canvas_pane

0xf3c4,	// (0x00036302) eswt_ctrl_combo_pane

0xf3bc,	// (0x000362fa) eswt_ctrl_default_pane

0xf3bc,	// (0x000362fa) eswt_ctrl_label_pane

0xf3cc,	// (0x0003630a) eswt_ctrl_wait_pane

0xf3d4,	// (0x00036312) eswt_shell_pane

0xb8fb,	// (0x00032839) listscroll_eswt_app_pane

0xf3f4,	// (0x00036332) popup_eswt_tasktip_window_ParamLimits

0xf3f4,	// (0x00036332) popup_eswt_tasktip_window

0xcfd8,	// (0x00033f16) bg_popup_window_pane_cp18

0xf405,	// (0x00036343) eswt_control_pane_g1_ParamLimits

0xf405,	// (0x00036343) eswt_control_pane_g1

0xf412,	// (0x00036350) eswt_control_pane_g2_ParamLimits

0xf412,	// (0x00036350) eswt_control_pane_g2

0xf41f,	// (0x0003635d) eswt_control_pane_g3_ParamLimits

0xf41f,	// (0x0003635d) eswt_control_pane_g3

0xf42c,	// (0x0003636a) eswt_control_pane_g4_ParamLimits

0xf42c,	// (0x0003636a) eswt_control_pane_g4

0x0003,

0xfc31,	// (0x00036b6f) eswt_control_pane_g_ParamLimits

0xfc31,	// (0x00036b6f) eswt_control_pane_g

0xbf6c,	// (0x00032eaa) bg_button_pane_ParamLimits

0xbf6c,	// (0x00032eaa) bg_button_pane

0xbce7,	// (0x00032c25) common_borders_pane_copy2_ParamLimits

0xbce7,	// (0x00032c25) common_borders_pane_copy2

0xf439,	// (0x00036377) control_button_pane_g1_ParamLimits

0xf439,	// (0x00036377) control_button_pane_g1

0xf445,	// (0x00036383) control_button_pane_g2_ParamLimits

0xf445,	// (0x00036383) control_button_pane_g2

0xf451,	// (0x0003638f) control_button_pane_g3_ParamLimits

0xf451,	// (0x0003638f) control_button_pane_g3

0x0002,

0xfc3a,	// (0x00036b78) control_button_pane_g_ParamLimits

0xfc3a,	// (0x00036b78) control_button_pane_g

0xf465,	// (0x000363a3) control_button_pane_t1

0xf473,	// (0x000363b1) control_button_pane_t2

0x0001,

0xfc41,	// (0x00036b7f) control_button_pane_t

0xcee8,	// (0x00033e26) bg_button_pane_g1

0xcef8,	// (0x00033e36) bg_button_pane_g2

0xcef0,	// (0x00033e2e) bg_button_pane_g3

0xcf08,	// (0x00033e46) bg_button_pane_g4

0xcf00,	// (0x00033e3e) bg_button_pane_g5

0xcf10,	// (0x00033e4e) bg_button_pane_g6

0xcf18,	// (0x00033e56) bg_button_pane_g7

0xcf28,	// (0x00033e66) bg_button_pane_g8

0xcf20,	// (0x00033e5e) bg_button_pane_g9

0x0008,

0xf89a,	// (0x000367d8) bg_button_pane_g

0xec51,	// (0x00035b8f) common_borders_pane_ParamLimits

0xec51,	// (0x00035b8f) common_borders_pane

0xf405,	// (0x00036343) eswt_control_pane_g1_copy1_ParamLimits

0xf405,	// (0x00036343) eswt_control_pane_g1_copy1

0xf412,	// (0x00036350) eswt_control_pane_g2_copy1_ParamLimits

0xf412,	// (0x00036350) eswt_control_pane_g2_copy1

0xf41f,	// (0x0003635d) eswt_control_pane_g3_copy1_ParamLimits

0xf41f,	// (0x0003635d) eswt_control_pane_g3_copy1

0xf42c,	// (0x0003636a) eswt_control_pane_g4_copy1_ParamLimits

0xf42c,	// (0x0003636a) eswt_control_pane_g4_copy1

0xec8c,	// (0x00035bca) bg_eswt_ctrl_canvas_pane_g1

0xec51,	// (0x00035b8f) common_borders_pane_cp2_ParamLimits

0xec51,	// (0x00035b8f) common_borders_pane_cp2

0xec51,	// (0x00035b8f) common_borders_pane_cp3_ParamLimits

0xec51,	// (0x00035b8f) common_borders_pane_cp3

0xf481,	// (0x000363bf) separator_horizontal_pane

0xf489,	// (0x000363c7) separator_vertical_pane

0xf405,	// (0x00036343) eswt_control_pane_g1_copy2_ParamLimits

0xf405,	// (0x00036343) eswt_control_pane_g1_copy2

0xf412,	// (0x00036350) eswt_control_pane_g2_copy2_ParamLimits

0xf412,	// (0x00036350) eswt_control_pane_g2_copy2

0xf41f,	// (0x0003635d) eswt_control_pane_g3_copy2_ParamLimits

0xf41f,	// (0x0003635d) eswt_control_pane_g3_copy2

0xf42c,	// (0x0003636a) eswt_control_pane_g4_copy2_ParamLimits

0xf42c,	// (0x0003636a) eswt_control_pane_g4_copy2

0xb8fb,	// (0x00032839) common_borders_pane_cp4

0xf492,	// (0x000363d0) separator_horizontal_pane_g1

0xf49b,	// (0x000363d9) separator_horizontal_pane_g2

0xf4a4,	// (0x000363e2) separator_horizontal_pane_g3

0x0002,

0xfc46,	// (0x00036b84) separator_horizontal_pane_g

0xf405,	// (0x00036343) eswt_control_pane_g1_copy3_ParamLimits

0xf405,	// (0x00036343) eswt_control_pane_g1_copy3

0xf412,	// (0x00036350) eswt_control_pane_g2_copy3_ParamLimits

0xf412,	// (0x00036350) eswt_control_pane_g2_copy3

0xf41f,	// (0x0003635d) eswt_control_pane_g3_copy3_ParamLimits

0xf41f,	// (0x0003635d) eswt_control_pane_g3_copy3

0xf42c,	// (0x0003636a) eswt_control_pane_g4_copy3_ParamLimits

0xf42c,	// (0x0003636a) eswt_control_pane_g4_copy3

0xb8fb,	// (0x00032839) common_borders_pane_cp5

0xf4ad,	// (0x000363eb) separator_vertical_pane_g1

0xf4b6,	// (0x000363f4) separator_vertical_pane_g2

0xf4bf,	// (0x000363fd) separator_vertical_pane_g3

0x0002,

0xfc4d,	// (0x00036b8b) separator_vertical_pane_g

0xf405,	// (0x00036343) eswt_control_pane_g1_copy4_ParamLimits

0xf405,	// (0x00036343) eswt_control_pane_g1_copy4

0xf412,	// (0x00036350) eswt_control_pane_g2_copy4_ParamLimits

0xf412,	// (0x00036350) eswt_control_pane_g2_copy4

0xf41f,	// (0x0003635d) eswt_control_pane_g3_copy4_ParamLimits

0xf41f,	// (0x0003635d) eswt_control_pane_g3_copy4

0xf42c,	// (0x0003636a) eswt_control_pane_g4_copy4_ParamLimits

0xf42c,	// (0x0003636a) eswt_control_pane_g4_copy4

0xa446,	// (0x00031384) eswt_ctrl_combo_button_pane

0xa44e,	// (0x0003138c) eswt_ctrl_input_pane

0xa456,	// (0x00031394) popup_choice_list_window_cp70

0xa45e,	// (0x0003139c) eswt_ctrl_input_pane_t1

0xb8fb,	// (0x00032839) input_focus_pane_cp70

0xec51,	// (0x00035b8f) bg_button_pane_cp70_ParamLimits

0xec51,	// (0x00035b8f) bg_button_pane_cp70

0xa46c,	// (0x000313aa) eswt_ctrl_combo_button_pane_g1

0xf4c8,	// (0x00036406) wait_bar_pane_cp70

0xcfd8,	// (0x00033f16) bg_popup_window_pane_cp70_ParamLimits

0xcfd8,	// (0x00033f16) bg_popup_window_pane_cp70

0xf4d0,	// (0x0003640e) popup_eswt_tasktip_window_t1

0xf4e6,	// (0x00036424) wait_bar_pane_cp71_ParamLimits

0xf4e6,	// (0x00036424) wait_bar_pane_cp71

0xf4f2,	// (0x00036430) grid_eswt_app_pane

0xc2df,	// (0x0003321d) scroll_pane_cp70

0xa474,	// (0x000313b2) cell_eswt_app_pane_ParamLimits

0xa474,	// (0x000313b2) cell_eswt_app_pane

0xa49e,	// (0x000313dc) cell_eswt_app_pane_g1_ParamLimits

0xa49e,	// (0x000313dc) cell_eswt_app_pane_g1

0xa4cd,	// (0x0003140b) cell_eswt_app_pane_g2_ParamLimits

0xa4cd,	// (0x0003140b) cell_eswt_app_pane_g2

0x0001,

0xfc54,	// (0x00036b92) cell_eswt_app_pane_g_ParamLimits

0xfc54,	// (0x00036b92) cell_eswt_app_pane_g

0xa4f6,	// (0x00031434) cell_eswt_app_pane_t1_ParamLimits

0xa4f6,	// (0x00031434) cell_eswt_app_pane_t1

0xf4fb,	// (0x00036439) grid_highlight_pane_cp70_ParamLimits

0xf4fb,	// (0x00036439) grid_highlight_pane_cp70

0xc86f,	// (0x000337ad) set_content_pane_g1

0xcb79,	// (0x00033ab7) status_small_volume_pane

0x2ec7,	// (0x00029e05) status_small_volume_pane_g1

0x2ecf,	// (0x00029e0d) volume_small2_pane

0x2ed8,	// (0x00029e16) volume_small2_pane_g1

0x2ee1,	// (0x00029e1f) volume_small2_pane_g2

0x2eea,	// (0x00029e28) volume_small2_pane_g3

0x2ef3,	// (0x00029e31) volume_small2_pane_g4

0x2efc,	// (0x00029e3a) volume_small2_pane_g5

0x2f05,	// (0x00029e43) volume_small2_pane_g6

0x2f0e,	// (0x00029e4c) volume_small2_pane_g7

0x2f17,	// (0x00029e55) volume_small2_pane_g8

0x2f20,	// (0x00029e5e) volume_small2_pane_g9

0x2f29,	// (0x00029e67) volume_small2_pane_g10

0x0009,

0xfc59,	// (0x00036b97) volume_small2_pane_g

0xef4e,	// (0x00035e8c) fep_vkb_top_text_pane_g1_ParamLimits

0xa3d3,	// (0x00031311) fep_vkb_top_text_pane_t1_ParamLimits

0xf126,	// (0x00036064) popup_preview_fixed_window_g3_ParamLimits

0xf126,	// (0x00036064) popup_preview_fixed_window_g3

0x96e0,	// (0x0003061e) popup_toolbar_trans_pane

0x9db4,	// (0x00030cf2) aid_height_set_list_ParamLimits

0xda79,	// (0x000349b7) aid_size_parent_ParamLimits

0xc0cd,	// (0x0003300b) list_highlight_pane_cp2_ParamLimits

0xc86f,	// (0x000337ad) set_content_pane_g1_ParamLimits

0x9f4f,	// (0x00030e8d) list_single_image_pane_ParamLimits

0x9f4f,	// (0x00030e8d) list_single_image_pane

0xf507,	// (0x00036445) aid_size_cell_image_ParamLimits

0xf507,	// (0x00036445) aid_size_cell_image

0xa528,	// (0x00031466) grid_single_image_pane_ParamLimits

0xa528,	// (0x00031466) grid_single_image_pane

0xd3a9,	// (0x000342e7) list_single_image_pane_g1_ParamLimits

0xd3a9,	// (0x000342e7) list_single_image_pane_g1

0xf514,	// (0x00036452) list_single_image_pane_g2_ParamLimits

0xf514,	// (0x00036452) list_single_image_pane_g2

0x0001,

0xfc6e,	// (0x00036bac) list_single_image_pane_g_ParamLimits

0xfc6e,	// (0x00036bac) list_single_image_pane_g

0xd3b5,	// (0x000342f3) list_single_image_pane_t1_ParamLimits

0xd3b5,	// (0x000342f3) list_single_image_pane_t1

0xa536,	// (0x00031474) cell_image_list_pane_ParamLimits

0xa536,	// (0x00031474) cell_image_list_pane

0xf528,	// (0x00036466) cell_image_list_pane_g1

0xf531,	// (0x0003646f) cell_image_list_pane_g2

0x0001,

0x0029,	// (0x00026f67) cell_image_list_pane_g

0xf53a,	// (0x00036478) aid_size_cell_tb_trans_pane

0xbf6c,	// (0x00032eaa) bg_tb_trans_pane

0xf54c,	// (0x0003648a) grid_tb_trans_pane

0xcee8,	// (0x00033e26) bg_tb_trans_pane_g1

0xcef8,	// (0x00033e36) bg_tb_trans_pane_g2

0xcef0,	// (0x00033e2e) bg_tb_trans_pane_g3

0xcf08,	// (0x00033e46) bg_tb_trans_pane_g4

0xcf00,	// (0x00033e3e) bg_tb_trans_pane_g5

0xcf28,	// (0x00033e66) bg_tb_trans_pane_g6

0xcf20,	// (0x00033e5e) bg_tb_trans_pane_g7

0xcf10,	// (0x00033e4e) bg_tb_trans_pane_g8

0xcf18,	// (0x00033e56) bg_tb_trans_pane_g9

0x0008,

0xfc73,	// (0x00036bb1) bg_tb_trans_pane_g

0xf560,	// (0x0003649e) cell_toolbar_trans_pane_ParamLimits

0xf560,	// (0x0003649e) cell_toolbar_trans_pane

0xec8c,	// (0x00035bca) cell_toolbar_trans_pane_g1

0xa1af,	// (0x000310ed) list_form2_midp_pane_t1

0xa1bd,	// (0x000310fb) list_form2_midp_pane_t2

0x0001,

0xfb15,	// (0x00036a53) list_form2_midp_pane_t

0xe9de,	// (0x0003591c) scroll_pane_cp51_ParamLimits

0xeb55,	// (0x00035a93) form2_midp_wait_pane_g1

0xeb5e,	// (0x00035a9c) form2_midp_wait_pane_g2

0xeb67,	// (0x00035aa5) form2_midp_wait_pane_g3

0x0002,

0xfb2a,	// (0x00036a68) form2_midp_wait_pane_g

0xb96b,	// (0x000328a9) list_highlight_pane_cp21_ParamLimits

0xeb8f,	// (0x00035acd) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xeb9e,	// (0x00035adc) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe0d8,	// (0x00035016) list_single_2graphic_im_pane_ParamLimits

0xe0d8,	// (0x00035016) list_single_2graphic_im_pane

0xa54c,	// (0x0003148a) list_single_2graphic_im_pane_g1_ParamLimits

0xa54c,	// (0x0003148a) list_single_2graphic_im_pane_g1

0xa55d,	// (0x0003149b) list_single_2graphic_im_pane_g2_ParamLimits

0xa55d,	// (0x0003149b) list_single_2graphic_im_pane_g2

0xa569,	// (0x000314a7) list_single_2graphic_im_pane_g3_ParamLimits

0xa569,	// (0x000314a7) list_single_2graphic_im_pane_g3

0x0003,

0xfc86,	// (0x00036bc4) list_single_2graphic_im_pane_g_ParamLimits

0xfc86,	// (0x00036bc4) list_single_2graphic_im_pane_g

0xa57d,	// (0x000314bb) list_single_2graphic_im_pane_t1_ParamLimits

0xa57d,	// (0x000314bb) list_single_2graphic_im_pane_t1

0xf132,	// (0x00036070) list_single_graphic_2heading_pane_fp_ParamLimits

0xf132,	// (0x00036070) list_single_graphic_2heading_pane_fp

0x6471,	// (0x0002d3af) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6471,	// (0x0002d3af) list_single_graphic_2heading_pane_fp_g1

0xf147,	// (0x00036085) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xf147,	// (0x00036085) list_single_graphic_2heading_pane_fp_g2

0x643a,	// (0x0002d378) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x643a,	// (0x0002d378) list_single_graphic_2heading_pane_fp_g3

0x6446,	// (0x0002d384) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6446,	// (0x0002d384) list_single_graphic_2heading_pane_fp_g4

0xf153,	// (0x00036091) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xf153,	// (0x00036091) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfbb2,	// (0x00036af0) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfbb2,	// (0x00036af0) list_single_graphic_2heading_pane_fp_g

0x663e,	// (0x0002d57c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x663e,	// (0x0002d57c) list_single_graphic_2heading_pane_fp_t1

0x64a9,	// (0x0002d3e7) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x64a9,	// (0x0002d3e7) list_single_graphic_2heading_pane_fp_t2

0x6654,	// (0x0002d592) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x6654,	// (0x0002d592) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc8f,	// (0x00036bcd) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc8f,	// (0x00036bcd) list_single_graphic_2heading_pane_fp_t

0xed2c,	// (0x00035c6a) fep_hwr_write_pane_g5_ParamLimits

0xed2c,	// (0x00035c6a) fep_hwr_write_pane_g5

0xed38,	// (0x00035c76) fep_hwr_write_pane_g6_ParamLimits

0xed38,	// (0x00035c76) fep_hwr_write_pane_g6

0xf3d4,	// (0x00036312) eswt_shell_pane_ParamLimits

0xcfd8,	// (0x00033f16) bg_popup_window_pane_cp18_ParamLimits

0xe012,	// (0x00034f50) heading_pane_cp70

0xf4d0,	// (0x0003640e) popup_eswt_tasktip_window_t1_ParamLimits

0x97a1,	// (0x000306df) aid_touch_tab_arrow_left

0x97b7,	// (0x000306f5) aid_touch_tab_arrow_right

0x883d,	// (0x0002f77b) title_pane_g3_ParamLimits

0x883d,	// (0x0002f77b) title_pane_g3

0xbf2b,	// (0x00032e69) set_value_pane_g1

0x96e0,	// (0x0003061e) popup_toolbar_trans_pane_ParamLimits

0xf53a,	// (0x00036478) aid_size_cell_tb_trans_pane_ParamLimits

0xbf6c,	// (0x00032eaa) bg_tb_trans_pane_ParamLimits

0xf54c,	// (0x0003648a) grid_tb_trans_pane_ParamLimits

0xba9e,	// (0x000329dc) cont_note_pane_ParamLimits

0xba9e,	// (0x000329dc) cont_note_pane

0xbce7,	// (0x00032c25) cont_snote2_single_text_pane_ParamLimits

0xbce7,	// (0x00032c25) cont_snote2_single_text_pane

0xbce7,	// (0x00032c25) cont_snote2_single_graphic_pane_ParamLimits

0xbce7,	// (0x00032c25) cont_snote2_single_graphic_pane

0xd49f,	// (0x000343dd) cont_note_wait_pane_ParamLimits

0xd49f,	// (0x000343dd) cont_note_wait_pane

0xd49f,	// (0x000343dd) cont_note_image_pane_ParamLimits

0xd49f,	// (0x000343dd) cont_note_image_pane

0x2fb5,	// (0x00029ef3) popup_note2_window_g1_ParamLimits

0x2fb5,	// (0x00029ef3) popup_note2_window_g1

0x2fe6,	// (0x00029f24) popup_note2_window_t1_ParamLimits

0x2fe6,	// (0x00029f24) popup_note2_window_t1

0x302b,	// (0x00029f69) popup_note2_window_t2_ParamLimits

0x302b,	// (0x00029f69) popup_note2_window_t2

0x3070,	// (0x00029fae) popup_note2_window_t3_ParamLimits

0x3070,	// (0x00029fae) popup_note2_window_t3

0x30b5,	// (0x00029ff3) popup_note2_window_t4_ParamLimits

0x30b5,	// (0x00029ff3) popup_note2_window_t4

0xbb22,	// (0x00032a60) popup_note2_window_t5_ParamLimits

0xbb22,	// (0x00032a60) popup_note2_window_t5

0x0004,

0xfc9b,	// (0x00036bd9) popup_note2_window_t_ParamLimits

0xfc9b,	// (0x00036bd9) popup_note2_window_t

0x30e4,	// (0x0002a022) popup_note2_image_window_g1_ParamLimits

0x30e4,	// (0x0002a022) popup_note2_image_window_g1

0x30f0,	// (0x0002a02e) popup_note2_image_window_g2_ParamLimits

0x30f0,	// (0x0002a02e) popup_note2_image_window_g2

0x0001,

0xfca6,	// (0x00036be4) popup_note2_image_window_g_ParamLimits

0xfca6,	// (0x00036be4) popup_note2_image_window_g

0x3102,	// (0x0002a040) popup_note2_image_window_t1_ParamLimits

0x3102,	// (0x0002a040) popup_note2_image_window_t1

0x311a,	// (0x0002a058) popup_note2_image_window_t2_ParamLimits

0x311a,	// (0x0002a058) popup_note2_image_window_t2

0x3132,	// (0x0002a070) popup_note2_image_window_t3_ParamLimits

0x3132,	// (0x0002a070) popup_note2_image_window_t3

0x0002,

0xfcab,	// (0x00036be9) popup_note2_image_window_t_ParamLimits

0xfcab,	// (0x00036be9) popup_note2_image_window_t

0xd4ad,	// (0x000343eb) popup_note2_wait_window_g1_ParamLimits

0xd4ad,	// (0x000343eb) popup_note2_wait_window_g1

0x314e,	// (0x0002a08c) popup_note2_wait_window_g2_ParamLimits

0x314e,	// (0x0002a08c) popup_note2_wait_window_g2

0xd4c5,	// (0x00034403) popup_note2_wait_window_g3_ParamLimits

0xd4c5,	// (0x00034403) popup_note2_wait_window_g3

0x0002,

0xfcb2,	// (0x00036bf0) popup_note2_wait_window_g_ParamLimits

0xfcb2,	// (0x00036bf0) popup_note2_wait_window_g

0x315a,	// (0x0002a098) popup_note2_wait_window_t1_ParamLimits

0x315a,	// (0x0002a098) popup_note2_wait_window_t1

0x3178,	// (0x0002a0b6) popup_note2_wait_window_t2_ParamLimits

0x3178,	// (0x0002a0b6) popup_note2_wait_window_t2

0x3196,	// (0x0002a0d4) popup_note2_wait_window_t3_ParamLimits

0x3196,	// (0x0002a0d4) popup_note2_wait_window_t3

0x31a8,	// (0x0002a0e6) popup_note2_wait_window_t4_ParamLimits

0x31a8,	// (0x0002a0e6) popup_note2_wait_window_t4

0x0003,

0xfcb9,	// (0x00036bf7) popup_note2_wait_window_t_ParamLimits

0xfcb9,	// (0x00036bf7) popup_note2_wait_window_t

0x31ba,	// (0x0002a0f8) wait_bar2_pane_ParamLimits

0x31ba,	// (0x0002a0f8) wait_bar2_pane

0x31d2,	// (0x0002a110) popup_snote2_single_text_window_g1_ParamLimits

0x31d2,	// (0x0002a110) popup_snote2_single_text_window_g1

0x31fa,	// (0x0002a138) popup_snote2_single_text_window_t1_ParamLimits

0x31fa,	// (0x0002a138) popup_snote2_single_text_window_t1

0x3246,	// (0x0002a184) popup_snote2_single_text_window_t2_ParamLimits

0x3246,	// (0x0002a184) popup_snote2_single_text_window_t2

0x3292,	// (0x0002a1d0) popup_snote2_single_text_window_t3_ParamLimits

0x3292,	// (0x0002a1d0) popup_snote2_single_text_window_t3

0x32d3,	// (0x0002a211) popup_snote2_single_text_window_t4_ParamLimits

0x32d3,	// (0x0002a211) popup_snote2_single_text_window_t4

0x3309,	// (0x0002a247) popup_snote2_single_text_window_t5_ParamLimits

0x3309,	// (0x0002a247) popup_snote2_single_text_window_t5

0x0004,

0xfcc2,	// (0x00036c00) popup_snote2_single_text_window_t_ParamLimits

0xfcc2,	// (0x00036c00) popup_snote2_single_text_window_t

0x3334,	// (0x0002a272) popup_snote2_single_graphic_window_g1_ParamLimits

0x3334,	// (0x0002a272) popup_snote2_single_graphic_window_g1

0x335c,	// (0x0002a29a) popup_snote2_single_graphic_window_g2_ParamLimits

0x335c,	// (0x0002a29a) popup_snote2_single_graphic_window_g2

0x0001,

0xfccd,	// (0x00036c0b) popup_snote2_single_graphic_window_g_ParamLimits

0xfccd,	// (0x00036c0b) popup_snote2_single_graphic_window_g

0x3384,	// (0x0002a2c2) popup_snote2_single_graphic_window_t1_ParamLimits

0x3384,	// (0x0002a2c2) popup_snote2_single_graphic_window_t1

0x33d0,	// (0x0002a30e) popup_snote2_single_graphic_window_t2_ParamLimits

0x33d0,	// (0x0002a30e) popup_snote2_single_graphic_window_t2

0x3292,	// (0x0002a1d0) popup_snote2_single_graphic_window_t3_ParamLimits

0x3292,	// (0x0002a1d0) popup_snote2_single_graphic_window_t3

0x32d3,	// (0x0002a211) popup_snote2_single_graphic_window_t4_ParamLimits

0x32d3,	// (0x0002a211) popup_snote2_single_graphic_window_t4

0x3309,	// (0x0002a247) popup_snote2_single_graphic_window_t5_ParamLimits

0x3309,	// (0x0002a247) popup_snote2_single_graphic_window_t5

0x0004,

0xfcd2,	// (0x00036c10) popup_snote2_single_graphic_window_t_ParamLimits

0xfcd2,	// (0x00036c10) popup_snote2_single_graphic_window_t

0xe994,	// (0x000358d2) clock_nsta_pane_cp2_t1

0xe994,	// (0x000358d2) clock_nsta_pane_cp2_t2

0x0001,

0xfaeb,	// (0x00036a29) clock_nsta_pane_cp2_t

0x46d4,	// (0x0002b612) form_field_data_wide_pane_g1_ParamLimits

0xbf86,	// (0x00032ec4) form_field_data_wide_pane_g2_ParamLimits

0xbf86,	// (0x00032ec4) form_field_data_wide_pane_g2

0xbf92,	// (0x00032ed0) form_field_data_wide_pane_g3_ParamLimits

0xbf92,	// (0x00032ed0) form_field_data_wide_pane_g3

0x0002,

0xf6bf,	// (0x000365fd) form_field_data_wide_pane_g_ParamLimits

0xf6bf,	// (0x000365fd) form_field_data_wide_pane_g

0xa0c9,	// (0x00031007) grid_touch_3_pane_ParamLimits

0xa0c9,	// (0x00031007) grid_touch_3_pane

0xa5ae,	// (0x000314ec) cell_touch_3_pane_ParamLimits

0xa5ae,	// (0x000314ec) cell_touch_3_pane

0xec8c,	// (0x00035bca) cell_touch_3_pane_g1

0xec8c,	// (0x00035bca) cell_touch_3_pane_g2

0x0001,

0xfb70,	// (0x00036aae) cell_touch_3_pane_g

0xbb54,	// (0x00032a92) cont_query_data_pane

0xbb5c,	// (0x00032a9a) cont_query_data_pane_cp1

0x344a,	// (0x0002a388) button_value_adjust_pane_cp7

0x3452,	// (0x0002a390) query_popup_pane_cp3

0xc509,	// (0x00033447) bg_popup_sub_pane_cp22_ParamLimits

0x0ea4,	// (0x00027de2) navi_navi_volume_pane_cp2

0x0ebf,	// (0x00027dfd) popup_side_volume_key_window_g2

0x0ece,	// (0x00027e0c) popup_side_volume_key_window_g3

0x0002,

0xf751,	// (0x0003668f) popup_side_volume_key_window_g

0x0eeb,	// (0x00027e29) popup_side_volume_key_window_t2

0x0001,

0xf758,	// (0x00036696) popup_side_volume_key_window_t

0xc739,	// (0x00033677) popup_side_volume_key_window_ParamLimits

0x7b1e,	// (0x0002ea5c) list_double_graphic_pane_g4_ParamLimits

0x7b1e,	// (0x0002ea5c) list_double_graphic_pane_g4

0x9f3c,	// (0x00030e7a) list_single_2heading_msg_pane_ParamLimits

0x9f3c,	// (0x00030e7a) list_single_2heading_msg_pane

0x937c,	// (0x000302ba) list_single_2heading_msg_pane_g1_ParamLimits

0x937c,	// (0x000302ba) list_single_2heading_msg_pane_g1

0x9388,	// (0x000302c6) list_single_2heading_msg_pane_g2_ParamLimits

0x9388,	// (0x000302c6) list_single_2heading_msg_pane_g2

0x939b,	// (0x000302d9) list_single_2heading_msg_pane_g3_ParamLimits

0x939b,	// (0x000302d9) list_single_2heading_msg_pane_g3

0x93a7,	// (0x000302e5) list_single_2heading_msg_pane_g4_ParamLimits

0x93a7,	// (0x000302e5) list_single_2heading_msg_pane_g4

0x0003,

0xfcdd,	// (0x00036c1b) list_single_2heading_msg_pane_g_ParamLimits

0xfcdd,	// (0x00036c1b) list_single_2heading_msg_pane_g

0x93bf,	// (0x000302fd) list_single_2heading_msg_pane_t1_ParamLimits

0x93bf,	// (0x000302fd) list_single_2heading_msg_pane_t1

0x93e7,	// (0x00030325) list_single_2heading_msg_pane_t2_ParamLimits

0x93e7,	// (0x00030325) list_single_2heading_msg_pane_t2

0x9452,	// (0x00030390) list_single_2heading_msg_pane_t3_ParamLimits

0x9452,	// (0x00030390) list_single_2heading_msg_pane_t3

0x6739,	// (0x0002d677) list_single_2heading_msg_pane_t4_ParamLimits

0x6739,	// (0x0002d677) list_single_2heading_msg_pane_t4

0x0003,

0xfce6,	// (0x00036c24) list_single_2heading_msg_pane_t_ParamLimits

0xfce6,	// (0x00036c24) list_single_2heading_msg_pane_t

0xb919,	// (0x00032857) title_pane_g4_ParamLimits

0xb919,	// (0x00032857) title_pane_g4

0x0bc8,	// (0x00027b06) title_pane_stacon_g3_ParamLimits

0x0bc8,	// (0x00027b06) title_pane_stacon_g3

0xf586,	// (0x000364c4) list_single_2graphic_im_pane_g4_ParamLimits

0xf586,	// (0x000364c4) list_single_2graphic_im_pane_g4

0xde36,	// (0x00034d74) popup_side_volume_key_window_cp

0xe30f,	// (0x0003524d) main_idle_act2_pane_t1

0x1b99,	// (0x00028ad7) toolbar_button_pane_g10

0x8baa,	// (0x0002fae8) popup_toolbar_window_cp1

0xe985,	// (0x000358c3) clock_nsta_pane_cp_t1

0xe985,	// (0x000358c3) clock_nsta_pane_cp_t2

0x0001,

0xfae6,	// (0x00036a24) clock_nsta_pane_cp_t

0x0ea4,	// (0x00027de2) navi_navi_volume_pane_cp2_ParamLimits

0x0eb3,	// (0x00027df1) popup_side_volume_key_window_g1_ParamLimits

0x0ebf,	// (0x00027dfd) popup_side_volume_key_window_g2_ParamLimits

0x0ece,	// (0x00027e0c) popup_side_volume_key_window_g3_ParamLimits

0xf751,	// (0x0003668f) popup_side_volume_key_window_g_ParamLimits

0x2857,	// (0x00029795) fep_hwr_aid_pane

0x28fe,	// (0x0002983c) bg_fep_hwr_top_pane_g4_ParamLimits

0xecfc,	// (0x00035c3a) fep_hwr_top_pane_g1_ParamLimits

0xed0e,	// (0x00035c4c) fep_hwr_top_pane_g2_ParamLimits

0x291e,	// (0x0002985c) fep_hwr_top_pane_g3_ParamLimits

0xfb3b,	// (0x00036a79) fep_hwr_top_pane_g_ParamLimits

0x2933,	// (0x00029871) fep_hwr_top_text_pane_ParamLimits

0xdbf9,	// (0x00034b37) aid_touch_tab_arrow_arrow_2

0xdc02,	// (0x00034b40) aid_touch_tab_arrow_left_2

0x286b,	// (0x000297a9) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x28a2,	// (0x000297e0) fep_hwr_prediction_pane

0xedfb,	// (0x00035d39) fep_vkb_prediction_pane

0xa3b3,	// (0x000312f1) fep_vkb_side_pane_g3_ParamLimits

0xa3b3,	// (0x000312f1) fep_vkb_side_pane_g3

0x2c71,	// (0x00029baf) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x2cdd,	// (0x00029c1b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x2cea,	// (0x00029c28) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbea,	// (0x00036b28) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x3477,	// (0x0002a3b5) fep_hwr_prediction_pane_g1

0x3481,	// (0x0002a3bf) fep_hwr_prediction_pane_g2

0x3489,	// (0x0002a3c7) fep_hwr_prediction_pane_g3

0x3491,	// (0x0002a3cf) fep_hwr_prediction_pane_g4

0x0003,

0xfcef,	// (0x00036c2d) fep_hwr_prediction_pane_g

0x3499,	// (0x0002a3d7) fep_vkb_prediction_pane_g1

0x34a3,	// (0x0002a3e1) fep_vkb_prediction_pane_g2

0x34ab,	// (0x0002a3e9) fep_vkb_prediction_pane_g3

0x34b3,	// (0x0002a3f1) fep_vkb_prediction_pane_g4

0x0003,

0xfcf8,	// (0x00036c36) fep_vkb_prediction_pane_g

0x2124,	// (0x00029062) slider_set_pane_g3

0x2138,	// (0x00029076) slider_set_pane_g4

0x2150,	// (0x0002908e) slider_set_pane_g5

0x2124,	// (0x00029062) slider_set_pane_g6

0x2166,	// (0x000290a4) slider_set_pane_g7

0xe09d,	// (0x00034fdb) slider_form_pane_g3

0xe0a6,	// (0x00034fe4) slider_form_pane_g4

0xe0ae,	// (0x00034fec) slider_form_pane_g5

0xe09d,	// (0x00034fdb) slider_form_pane_g6

0x9eff,	// (0x00030e3d) slider_form_pane_g7

0xe561,	// (0x0003549f) slider_set_pane_vc_g3

0xe56a,	// (0x000354a8) slider_set_pane_vc_g4

0xe573,	// (0x000354b1) slider_set_pane_vc_g5

0xe561,	// (0x0003549f) slider_set_pane_vc_g6

0xe57c,	// (0x000354ba) slider_set_pane_vc_g7

0xe561,	// (0x0003549f) slider_form_pane_vc_g1

0xe56a,	// (0x000354a8) slider_form_pane_vc_g2

0xe573,	// (0x000354b1) slider_form_pane_vc_g3

0xe561,	// (0x0003549f) slider_form_pane_vc_g4

0xe72f,	// (0x0003566d) slider_form_pane_vc_g5

0x0004,

0xfacc,	// (0x00036a0a) slider_form_pane_vc_g

0xb8fb,	// (0x00032839) main_idle_act3_pane

0x34bb,	// (0x0002a3f9) ai3_links_pane

0xa5f7,	// (0x00031535) popup_ai3_data_window_ParamLimits

0xa5f7,	// (0x00031535) popup_ai3_data_window

0xb8fb,	// (0x00032839) grid_ai3_links_pane

0xa611,	// (0x0003154f) cell_ai3_links_pane_ParamLimits

0xa611,	// (0x0003154f) cell_ai3_links_pane

0x34f6,	// (0x0002a434) bg_popup_sub_pane_cp11

0x3503,	// (0x0002a441) cell_ai3_links_pane_g1

0xb8fb,	// (0x00032839) bg_popup_sub_pane_cp12

0x3528,	// (0x0002a466) heading_ai3_data_pane

0x3530,	// (0x0002a46e) list_ai3_gene_pane

0x353c,	// (0x0002a47a) popup_ai3_data_window_g1

0x3544,	// (0x0002a482) heading_ai3_data_pane_g1

0x354c,	// (0x0002a48a) heading_ai3_data_pane_t1

0x355a,	// (0x0002a498) list_double_ai3_gene_pane_ParamLimits

0x355a,	// (0x0002a498) list_double_ai3_gene_pane

0x3567,	// (0x0002a4a5) list_single_ai3_gene_pane_ParamLimits

0x3567,	// (0x0002a4a5) list_single_ai3_gene_pane

0xec51,	// (0x00035b8f) list_highlight_pane_cp7_ParamLimits

0xec51,	// (0x00035b8f) list_highlight_pane_cp7

0x3574,	// (0x0002a4b2) list_single_a13_gene_pane_t1_ParamLimits

0x3574,	// (0x0002a4b2) list_single_a13_gene_pane_t1

0x358b,	// (0x0002a4c9) list_single_ai3_gene_pane_g1

0x3594,	// (0x0002a4d2) list_single_ai3_gene_pane_g2

0x0001,

0xfd01,	// (0x00036c3f) list_single_ai3_gene_pane_g

0x359c,	// (0x0002a4da) list_double_ai3_gene_pane_g1_ParamLimits

0x359c,	// (0x0002a4da) list_double_ai3_gene_pane_g1

0x35a8,	// (0x0002a4e6) list_double_ai3_gene_pane_t1_ParamLimits

0x35a8,	// (0x0002a4e6) list_double_ai3_gene_pane_t1

0x35c4,	// (0x0002a502) list_double_ai3_gene_pane_t2_ParamLimits

0x35c4,	// (0x0002a502) list_double_ai3_gene_pane_t2

0x35da,	// (0x0002a518) list_double_ai3_gene_pane_t3_ParamLimits

0x35da,	// (0x0002a518) list_double_ai3_gene_pane_t3

0x0002,

0xfd06,	// (0x00036c44) list_double_ai3_gene_pane_t_ParamLimits

0xfd06,	// (0x00036c44) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x666a,	// (0x0002d5a8) aid_size_min_col_2

0xa5e1,	// (0x0003151f) aid_size_min_msg_ParamLimits

0xa5e1,	// (0x0003151f) aid_size_min_msg

0xa3c7,	// (0x00031305) fep_vkb_top_text_pane_g2_ParamLimits

0xa3c7,	// (0x00031305) fep_vkb_top_text_pane_g2

0x0001,

0xfb6b,	// (0x00036aa9) fep_vkb_top_text_pane_g_ParamLimits

0xfb6b,	// (0x00036aa9) fep_vkb_top_text_pane_g

0xb8fb,	// (0x00032839) main_hc_apps_shell_pane

0x35f7,	// (0x0002a535) grid_hc_apps_pane_ParamLimits

0x35f7,	// (0x0002a535) grid_hc_apps_pane

0x3606,	// (0x0002a544) list_hc_apps_pane

0x360e,	// (0x0002a54c) scroll_pane_cp37_ParamLimits

0x360e,	// (0x0002a54c) scroll_pane_cp37

0xa62b,	// (0x00031569) cell_hc_apps_pane_ParamLimits

0xa62b,	// (0x00031569) cell_hc_apps_pane

0xa6e9,	// (0x00031627) cell_hc_apps_pane_g1_ParamLimits

0xa6e9,	// (0x00031627) cell_hc_apps_pane_g1

0x36f9,	// (0x0002a637) cell_hc_apps_pane_g2_ParamLimits

0x36f9,	// (0x0002a637) cell_hc_apps_pane_g2

0x3715,	// (0x0002a653) cell_hc_apps_pane_g3_ParamLimits

0x3715,	// (0x0002a653) cell_hc_apps_pane_g3

0x0002,

0xfd0d,	// (0x00036c4b) cell_hc_apps_pane_g_ParamLimits

0xfd0d,	// (0x00036c4b) cell_hc_apps_pane_g

0xa716,	// (0x00031654) cell_hc_apps_pane_t1_ParamLimits

0xa716,	// (0x00031654) cell_hc_apps_pane_t1

0xba9e,	// (0x000329dc) grid_highlight_pane_cp10_ParamLimits

0xba9e,	// (0x000329dc) grid_highlight_pane_cp10

0xa754,	// (0x00031692) list_single_hc_apps_pane_ParamLimits

0xa754,	// (0x00031692) list_single_hc_apps_pane

0xa781,	// (0x000316bf) list_single_hc_apps_pane_g1

0x94c0,	// (0x000303fe) list_single_hc_apps_pane_g2

0x0001,

0xfd14,	// (0x00036c52) list_single_hc_apps_pane_g

0x94d9,	// (0x00030417) list_single_hc_apps_pane_g2_copy1

0x94f5,	// (0x00030433) list_single_hc_apps_pane_t1

0xb96b,	// (0x000328a9) bg_set_opt_pane_cp_ParamLimits

0x0820,	// (0x0002775e) setting_slider_pane_t1_ParamLimits

0x0839,	// (0x00027777) setting_slider_pane_t2_ParamLimits

0x0853,	// (0x00027791) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x000364e0) setting_slider_pane_t_ParamLimits

0x086b,	// (0x000277a9) slider_set_pane_ParamLimits

0x12a0,	// (0x000281de) control_pane_g5_ParamLimits

0x12a0,	// (0x000281de) control_pane_g5

0xe059,	// (0x00034f97) slider_set_pane_g1_ParamLimits

0x2118,	// (0x00029056) slider_set_pane_g2_ParamLimits

0x2124,	// (0x00029062) slider_set_pane_g3_ParamLimits

0x2138,	// (0x00029076) slider_set_pane_g4_ParamLimits

0x2150,	// (0x0002908e) slider_set_pane_g5_ParamLimits

0x2124,	// (0x00029062) slider_set_pane_g6_ParamLimits

0x2166,	// (0x000290a4) slider_set_pane_g7_ParamLimits

0xf998,	// (0x000368d6) slider_set_pane_g_ParamLimits

0xc81a,	// (0x00033758) navi_icon_text_pane_ParamLimits

0x976d,	// (0x000306ab) aid_fill_nsta_2_ParamLimits

0x97a1,	// (0x000306df) aid_touch_tab_arrow_left_ParamLimits

0x97b7,	// (0x000306f5) aid_touch_tab_arrow_right_ParamLimits

0x9852,	// (0x00030790) clock_nsta_pane_ParamLimits

0x9cdb,	// (0x00030c19) navi_icon_pane_g1_ParamLimits

0x9ce7,	// (0x00030c25) navi_text_pane_t1_ParamLimits

0xa191,	// (0x000310cf) navi_icon_text_pane_g1_ParamLimits

0xa19d,	// (0x000310db) navi_icon_text_pane_t1_ParamLimits

0xa781,	// (0x000316bf) list_single_hc_apps_pane_g1_ParamLimits

0x94c0,	// (0x000303fe) list_single_hc_apps_pane_g2_ParamLimits

0xfd14,	// (0x00036c52) list_single_hc_apps_pane_g_ParamLimits

0x94d9,	// (0x00030417) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x94f5,	// (0x00030433) list_single_hc_apps_pane_t1_ParamLimits

0x7980,	// (0x0002e8be) popup_toolbar2_fixed_window_ParamLimits

0x7980,	// (0x0002e8be) popup_toolbar2_fixed_window

0x96d6,	// (0x00030614) popup_toolbar2_float_window

0xb8fb,	// (0x00032839) bg_popup_sub_pane_cp27

0x37ec,	// (0x0002a72a) grid_toolbar2_float_pane

0xb8fb,	// (0x00032839) bg_popup_sub_pane_cp26

0x37ec,	// (0x0002a72a) grid_toolbar2_fixed_pane

0xa79a,	// (0x000316d8) cell_toolbar2_fixed_pane_ParamLimits

0xa79a,	// (0x000316d8) cell_toolbar2_fixed_pane

0xa7b5,	// (0x000316f3) cell_toolbar2_fixed_pane_g1

0x380d,	// (0x0002a74b) toolbar2_fixed_button_pane

0xcee8,	// (0x00033e26) toolbar2_fixed_button_pane_g1

0xcef8,	// (0x00033e36) toolbar2_fixed_button_pane_g2

0xcef0,	// (0x00033e2e) toolbar2_fixed_button_pane_g3

0xcf08,	// (0x00033e46) toolbar2_fixed_button_pane_g4

0xcf00,	// (0x00033e3e) toolbar2_fixed_button_pane_g5

0xcf10,	// (0x00033e4e) toolbar2_fixed_button_pane_g6

0xcf18,	// (0x00033e56) toolbar2_fixed_button_pane_g7

0xcf28,	// (0x00033e66) toolbar2_fixed_button_pane_g8

0xcf20,	// (0x00033e5e) toolbar2_fixed_button_pane_g9

0x0008,

0xf89a,	// (0x000367d8) toolbar2_fixed_button_pane_g

0x3815,	// (0x0002a753) cell_toolbar2_float_pane_ParamLimits

0x3815,	// (0x0002a753) cell_toolbar2_float_pane

0x3826,	// (0x0002a764) cell_toolbar2_float_pane_g1

0x380d,	// (0x0002a74b) toolbar2_fixed_button_pane_cp

0xa2a1,	// (0x000311df) fep_vkb_accented_list_pane_ParamLimits

0xa2a1,	// (0x000311df) fep_vkb_accented_list_pane

0x2c51,	// (0x00029b8f) bg_popup_fep_shadow_pane_g9

0xc99a,	// (0x000338d8) bg_popup_fep_shadow_pane_cp3

0xc07b,	// (0x00032fb9) list_accented_list_pane

0x382f,	// (0x0002a76d) list_single_accented_list_pane_ParamLimits

0x382f,	// (0x0002a76d) list_single_accented_list_pane

0xc99a,	// (0x000338d8) list_highlight_pane_cp10

0x3840,	// (0x0002a77e) list_single_accented_list_pane_t1

0x9600,	// (0x0003053e) popup_slider_window_ParamLimits

0x9600,	// (0x0003053e) popup_slider_window

0x345a,	// (0x0002a398) aid_indentation_list_msg

0xa8ae,	// (0x000317ec) bg_popup_window_pane_cp19

0x4c3c,	// (0x0002bb7a) popup_slider_window_g1

0x4c58,	// (0x0002bb96) popup_slider_window_g2

0x4c74,	// (0x0002bbb2) popup_slider_window_g3

0x0005,

0xfd19,	// (0x00036c57) popup_slider_window_g

0x4cd0,	// (0x0002bc0e) popup_slider_window_t1

0x4d44,	// (0x0002bc82) small_volume_slider_vertical_pane

0xec8c,	// (0x00035bca) small_volume_slider_vertical_pane_g1

0xec8c,	// (0x00035bca) small_volume_slider_vertical_pane_g2

0x4d60,	// (0x0002bc9e) small_volume_slider_vertical_pane_g3

0x0002,

0xfd2b,	// (0x00036c69) small_volume_slider_vertical_pane_g

0x78ee,	// (0x0002e82c) area_side_right_pane_ParamLimits

0x78ee,	// (0x0002e82c) area_side_right_pane

0x83ad,	// (0x0002f2eb) aid_size_side_button_ParamLimits

0x83ad,	// (0x0002f2eb) aid_size_side_button

0x83c6,	// (0x0002f304) grid_sctrl_middle_pane_ParamLimits

0x83c6,	// (0x0002f304) grid_sctrl_middle_pane

0x38b2,	// (0x0002a7f0) sctrl_sk_bottom_pane

0x38c3,	// (0x0002a801) sctrl_sk_top_pane

0x38d5,	// (0x0002a813) aid_touch_sctrl_top

0x38e2,	// (0x0002a820) bg_sctrl_sk_pane_ParamLimits

0x38e2,	// (0x0002a820) bg_sctrl_sk_pane

0x38f0,	// (0x0002a82e) sctrl_sk_top_pane_g1

0x38fd,	// (0x0002a83b) sctrl_sk_top_pane_t1

0x38d5,	// (0x0002a813) aid_touch_sctrl_bottom

0x38e2,	// (0x0002a820) bg_sctrl_sk_pane_cp_ParamLimits

0x38e2,	// (0x0002a820) bg_sctrl_sk_pane_cp

0x3918,	// (0x0002a856) sctrl_sk_bottom_pane_g1

0x38fd,	// (0x0002a83b) sctrl_sk_bottom_pane_t1

0x83e0,	// (0x0002f31e) cell_sctrl_middle_pane_ParamLimits

0x83e0,	// (0x0002f31e) cell_sctrl_middle_pane

0x83f1,	// (0x0002f32f) aid_touch_sctrl_middle_ParamLimits

0x83f1,	// (0x0002f32f) aid_touch_sctrl_middle

0x83fe,	// (0x0002f33c) bg_sctrl_middle_pane_ParamLimits

0x83fe,	// (0x0002f33c) bg_sctrl_middle_pane

0x3f88,	// (0x0002aec6) cell_sctrl_middle_pane_g1_ParamLimits

0x3f88,	// (0x0002aec6) cell_sctrl_middle_pane_g1

0x840c,	// (0x0002f34a) cell_sctrl_middle_pane_g2_ParamLimits

0x840c,	// (0x0002f34a) cell_sctrl_middle_pane_g2

0x0001,

0xfd37,	// (0x00036c75) cell_sctrl_middle_pane_g_ParamLimits

0xfd37,	// (0x00036c75) cell_sctrl_middle_pane_g

0xcee8,	// (0x00033e26) bg_sctrl_middle_pane_g1

0xcef0,	// (0x00033e2e) bg_sctrl_middle_pane_g2

0xcef8,	// (0x00033e36) bg_sctrl_middle_pane_g3

0xcf00,	// (0x00033e3e) bg_sctrl_middle_pane_g4

0xcf08,	// (0x00033e46) bg_sctrl_middle_pane_g5

0xcf10,	// (0x00033e4e) bg_sctrl_middle_pane_g6

0xcf18,	// (0x00033e56) bg_sctrl_middle_pane_g7

0xcf20,	// (0x00033e5e) bg_sctrl_middle_pane_g8

0x0007,

0xfd3c,	// (0x00036c7a) bg_sctrl_middle_pane_g

0xcf28,	// (0x00033e66) bg_sctrl_middle_pane_g8_copy1

0xcee8,	// (0x00033e26) bg_sctrl_sk_pane_g1

0xcef8,	// (0x00033e36) bg_sctrl_sk_pane_g2

0xcef0,	// (0x00033e2e) bg_sctrl_sk_pane_g3

0x0008,

0xf89a,	// (0x000367d8) bg_sctrl_sk_pane_g

0xbea5,	// (0x00032de3) aid_size_touch_scroll_bar

0xcf08,	// (0x00033e46) bg_sctrl_sk_pane_g4

0xcf00,	// (0x00033e3e) bg_sctrl_sk_pane_g5

0xcf10,	// (0x00033e4e) bg_sctrl_sk_pane_g6

0xcf18,	// (0x00033e56) bg_sctrl_sk_pane_g7

0xcf28,	// (0x00033e66) bg_sctrl_sk_pane_g8

0xcf20,	// (0x00033e5e) bg_sctrl_sk_pane_g9

0xcc1e,	// (0x00033b5c) popup_fep_china_hwr2_fs_candidate_window

0x8f87,	// (0x0002fec5) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8f87,	// (0x0002fec5) popup_fep_china_hwr2_fs_control_window

0x2c71,	// (0x00029baf) sctrl_sk_top_pane_g2

0x0001,

0xfd32,	// (0x00036c70) sctrl_sk_top_pane_g

0xa966,	// (0x000318a4) aid_fep_china_hwr2_fs_cell_ParamLimits

0xa966,	// (0x000318a4) aid_fep_china_hwr2_fs_cell

0xa97a,	// (0x000318b8) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xa97a,	// (0x000318b8) bg_popup_fep_shadow_pane_cp4

0xa991,	// (0x000318cf) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xa991,	// (0x000318cf) bg_popup_fep_shadow_pane_cp5

0xa9a3,	// (0x000318e1) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xa9a3,	// (0x000318e1) popup_fep_china_hwr2_fs_control_bar_grid

0xa9b7,	// (0x000318f5) popup_fep_china_hwr2_fs_control_funtion_grid

0x4dbc,	// (0x0002bcfa) aid_fep_china_hwr2_fs_candi_cell

0xb8fb,	// (0x00032839) bg_popup_fep_shadow_pane_cp6

0x4dc6,	// (0x0002bd04) popup_fep_china_hwr2_fs_candidate_grid

0xa9bf,	// (0x000318fd) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xa9bf,	// (0x000318fd) cell_fep_china_hwr2_fs_funtion_grid

0xec8c,	// (0x00035bca) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x4de8,	// (0x0002bd26) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x4de8,	// (0x0002bd26) cell_fep_china_hwr2_fs_funtion_grid_g1

0x4df6,	// (0x0002bd34) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x4df6,	// (0x0002bd34) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd4d,	// (0x00036c8b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd4d,	// (0x00036c8b) cell_fep_china_hwr2_fs_funtion_grid_g

0xa9d7,	// (0x00031915) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xa9d7,	// (0x00031915) cell_fep_china_hwr2_fs_funtion_grid_t1

0xa9ec,	// (0x0003192a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xa9ec,	// (0x0003192a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd52,	// (0x00036c90) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd52,	// (0x00036c90) cell_fep_china_hwr2_fs_funtion_grid_t

0x4e3d,	// (0x0002bd7b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x4e45,	// (0x0002bd83) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x4e4d,	// (0x0002bd8b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd57,	// (0x00036c95) popup_fep_china_hwr2_fs_control_bar_grid_g

0x4e55,	// (0x0002bd93) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x4e55,	// (0x0002bd93) cell_fep_china_hwr2_fs_candidate_grid

0x4e6e,	// (0x0002bdac) popup_fep_china_hwr2_fs_candidate_grid_g20

0x4e76,	// (0x0002bdb4) popup_fep_china_hwr2_fs_candidate_grid_g21

0xec8c,	// (0x00035bca) cell_fep_china_hwr2_fs_candidate_grid_g1

0xec8c,	// (0x00035bca) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb70,	// (0x00036aae) cell_fep_china_hwr2_fs_candidate_grid_g

0x4e7e,	// (0x0002bdbc) cell_fep_china_hwr2_fs_candidate_grid_t1

0xcd35,	// (0x00033c73) clock_nsta_pane_cp_24_ParamLimits

0xcd35,	// (0x00033c73) clock_nsta_pane_cp_24

0xcd9d,	// (0x00033cdb) indicator_nsta_pane_cp_24_ParamLimits

0xcd9d,	// (0x00033cdb) indicator_nsta_pane_cp_24

0xdb03,	// (0x00034a41) heading_pane_g1

0x0001,

0xf8ff,	// (0x0003683d) heading_pane_g

0xe19c,	// (0x000350da) grid_sct_catagory_button_pane

0xda8b,	// (0x000349c9) scroll_pane_cp5_ParamLimits

0xe9ea,	// (0x00035928) button_value_adjust_pane_cp5_ParamLimits

0xe9ea,	// (0x00035928) button_value_adjust_pane_cp5

0xeaa8,	// (0x000359e6) form2_midp_time_pane_ParamLimits

0x4e8c,	// (0x0002bdca) cell_sct_catagory_button_pane_ParamLimits

0x4e8c,	// (0x0002bdca) cell_sct_catagory_button_pane

0xec51,	// (0x00035b8f) bg_button_pane_cp01_ParamLimits

0xec51,	// (0x00035b8f) bg_button_pane_cp01

0xec8c,	// (0x00035bca) cell_sct_catagory_button_pane_g1

0x9679,	// (0x000305b7) popup_tb_extension_window

0xaa08,	// (0x00031946) aid_size_cell_ext_ParamLimits

0xaa08,	// (0x00031946) aid_size_cell_ext

0xbce7,	// (0x00032c25) bg_tb_trans_pane_cp1_ParamLimits

0xbce7,	// (0x00032c25) bg_tb_trans_pane_cp1

0xaa2e,	// (0x0003196c) grid_tb_ext_pane_ParamLimits

0xaa2e,	// (0x0003196c) grid_tb_ext_pane

0xaa69,	// (0x000319a7) cell_tb_ext_pane_ParamLimits

0xaa69,	// (0x000319a7) cell_tb_ext_pane

0xaa91,	// (0x000319cf) cell_tb_ext_pane_g1_ParamLimits

0xaa91,	// (0x000319cf) cell_tb_ext_pane_g1

0x4f20,	// (0x0002be5e) cell_tb_ext_pane_t1

0xba9e,	// (0x000329dc) list_highlight_pane_cp11_ParamLimits

0xba9e,	// (0x000329dc) list_highlight_pane_cp11

0x068d,	// (0x000275cb) popup_uni_indicator_window_ParamLimits

0x068d,	// (0x000275cb) popup_uni_indicator_window

0xbf6c,	// (0x00032eaa) bg_popup_sub_pane_cp14

0x4f3b,	// (0x0002be79) list_uniindi_pane

0x4f47,	// (0x0002be85) uniindi_top_pane

0xba9e,	// (0x000329dc) bg_uniindi_top_pane

0x4f66,	// (0x0002bea4) uniindi_top_pane_g1

0x4f7c,	// (0x0002beba) uniindi_top_pane_g2

0x0003,

0xfd5e,	// (0x00036c9c) uniindi_top_pane_g

0x4fa6,	// (0x0002bee4) uniindi_top_pane_t1

0x4fd0,	// (0x0002bf0e) list_single_uniindi_pane_ParamLimits

0x4fd0,	// (0x0002bf0e) list_single_uniindi_pane

0xec8c,	// (0x00035bca) bg_uniindi_top_pane_g1

0x4fe3,	// (0x0002bf21) list_single_uniindi_pane_g1

0x4ff6,	// (0x0002bf34) list_single_uniindi_pane_t1

0x0503,	// (0x00027441) control_bg_pane

0x501b,	// (0x0002bf59) bg_sctrl_sk_pane_cp1

0x5024,	// (0x0002bf62) bg_sctrl_sk_pane_cp2

0x502d,	// (0x0002bf6b) control_bg_pane_g1

0x5036,	// (0x0002bf74) control_bg_pane_g2

0x0001,

0xfd67,	// (0x00036ca5) control_bg_pane_g

0xe8f9,	// (0x00035837) cell_indicator_nsta_pane_g1_ParamLimits

0xa0f8,	// (0x00031036) cell_indicator_nsta_pane_g2_ParamLimits

0xfae1,	// (0x00036a1f) cell_indicator_nsta_pane_g_ParamLimits

0x6427,	// (0x0002d365) form2_midp_time_pane_t1_ParamLimits

0xee99,	// (0x00035dd7) main_idle_act4_pane_ParamLimits

0xee99,	// (0x00035dd7) main_idle_act4_pane

0x9679,	// (0x000305b7) popup_tb_extension_window_ParamLimits

0xaa50,	// (0x0003198e) tb_ext_find_pane_ParamLimits

0xaa50,	// (0x0003198e) tb_ext_find_pane

0x503f,	// (0x0002bf7d) ai_gene_pane_1_cp1

0xca1c,	// (0x0003395a) ai_gene_pane_2_cp1

0x5047,	// (0x0002bf85) list_single_idle_plugin_calendar_pane

0x5050,	// (0x0002bf8e) list_single_idle_plugin_notification_pane

0x5059,	// (0x0002bf97) list_single_idle_plugin_player_pane

0xaaae,	// (0x000319ec) list_single_idle_plugin_shortcut_pane_ParamLimits

0xaaae,	// (0x000319ec) list_single_idle_plugin_shortcut_pane

0xaad6,	// (0x00031a14) main_idle_act4_pane_t1

0xaaf9,	// (0x00031a37) main_idle_act4_pane_t2

0x0001,

0xfd6c,	// (0x00036caa) main_idle_act4_pane_t

0xab0f,	// (0x00031a4d) middle_sk_idle_act4_pane_ParamLimits

0xab0f,	// (0x00031a4d) middle_sk_idle_act4_pane

0xab2b,	// (0x00031a69) popup_clock_digital_analogue_window_cp2

0xab53,	// (0x00031a91) shortcut_wheel_idle_act4_pane_ParamLimits

0xab53,	// (0x00031a91) shortcut_wheel_idle_act4_pane

0xec8c,	// (0x00035bca) shortcut_wheel_idle_act4_pane_g1

0xec8c,	// (0x00035bca) shortcut_wheel_idle_act4_pane_g2

0xec8c,	// (0x00035bca) shortcut_wheel_idle_act4_pane_g3

0xec8c,	// (0x00035bca) shortcut_wheel_idle_act4_pane_g4

0xec8c,	// (0x00035bca) shortcut_wheel_idle_act4_pane_g5

0x50ec,	// (0x0002c02a) shortcut_wheel_idle_act4_pane_g6

0x50f4,	// (0x0002c032) shortcut_wheel_idle_act4_pane_g7

0x50fc,	// (0x0002c03a) shortcut_wheel_idle_act4_pane_g8

0x5104,	// (0x0002c042) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd71,	// (0x00036caf) shortcut_wheel_idle_act4_pane_g

0x8418,	// (0x0002f356) middle_sk_idle_act4_pane_g1_ParamLimits

0x8418,	// (0x0002f356) middle_sk_idle_act4_pane_g1

0xabd0,	// (0x00031b0e) middle_sk_idle_act4_pane_g2_ParamLimits

0xabd0,	// (0x00031b0e) middle_sk_idle_act4_pane_g2

0x0001,

0xfd94,	// (0x00036cd2) middle_sk_idle_act4_pane_g_ParamLimits

0xfd94,	// (0x00036cd2) middle_sk_idle_act4_pane_g

0xabe8,	// (0x00031b26) middle_sk_idle_act4_pane_t1_ParamLimits

0xabe8,	// (0x00031b26) middle_sk_idle_act4_pane_t1

0xac17,	// (0x00031b55) grid_ai_shortcut_pane_ParamLimits

0xac17,	// (0x00031b55) grid_ai_shortcut_pane

0xac34,	// (0x00031b72) list_highlight_pane_cp16_ParamLimits

0xac34,	// (0x00031b72) list_highlight_pane_cp16

0xac41,	// (0x00031b7f) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xac41,	// (0x00031b7f) list_single_idle_plugin_shortcut_pane_g1

0xac4d,	// (0x00031b8b) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xac4d,	// (0x00031b8b) list_single_idle_plugin_shortcut_pane_g2

0xac69,	// (0x00031ba7) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xac69,	// (0x00031ba7) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd99,	// (0x00036cd7) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd99,	// (0x00036cd7) list_single_idle_plugin_shortcut_pane_g

0xac7e,	// (0x00031bbc) cell_ai_shortcut_pane_ParamLimits

0xac7e,	// (0x00031bbc) cell_ai_shortcut_pane

0xac94,	// (0x00031bd2) cell_ai_shortcut_pane_g1_ParamLimits

0xac94,	// (0x00031bd2) cell_ai_shortcut_pane_g1

0x503f,	// (0x0002bf7d) ai_gene_pane_1_cp2

0x5234,	// (0x0002c172) ai_gene_pane_2_cp2

0x523c,	// (0x0002c17a) list_highlight_pane_cp15

0x5245,	// (0x0002c183) list_single_idle_plugin_calendar_pane_g1

0x523c,	// (0x0002c17a) list_highlight_pane_cp17

0x524d,	// (0x0002c18b) list_single_idle_plugin_calendar_pane_g1_copy1

0x5255,	// (0x0002c193) list_single_idle_plugin_player_pane_g1

0xe39b,	// (0x000352d9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfda0,	// (0x00036cde) list_single_idle_plugin_player_pane_g

0x525d,	// (0x0002c19b) list_single_idle_plugin_player_pane_t1

0x526b,	// (0x0002c1a9) list_single_idle_plugin_player_pane_t2

0x5279,	// (0x0002c1b7) list_single_idle_plugin_player_pane_t3

0x5287,	// (0x0002c1c5) list_single_idle_plugin_player_pane_t4

0x0003,

0xfda5,	// (0x00036ce3) list_single_idle_plugin_player_pane_t

0x5295,	// (0x0002c1d3) wait_bar_pane_cp15

0x529d,	// (0x0002c1db) grid_ai_notification_pane

0xe39b,	// (0x000352d9) list_single_idle_plugin_notification_pane_g1

0xacb6,	// (0x00031bf4) cell_ai_notification_pane_ParamLimits

0xacb6,	// (0x00031bf4) cell_ai_notification_pane

0x52b3,	// (0x0002c1f1) cell_ai_notification_pane_g1

0x52bb,	// (0x0002c1f9) cell_ai_notification_pane_t1

0xacc3,	// (0x00031c01) tb_ext_find_button_pane

0xaccb,	// (0x00031c09) tb_ext_find_pane_g1

0xacd3,	// (0x00031c11) tb_ext_find_pane_t1

0xc4ad,	// (0x000333eb) tb_ext_find_button_pane_g1

0x52e7,	// (0x0002c225) tb_ext_find_button_pane_g2

0x0001,

0xfdae,	// (0x00036cec) tb_ext_find_button_pane_g

0xaad6,	// (0x00031a14) main_idle_act4_pane_t1_ParamLimits

0xaaf9,	// (0x00031a37) main_idle_act4_pane_t2_ParamLimits

0xfd6c,	// (0x00036caa) main_idle_act4_pane_t_ParamLimits

0xab2b,	// (0x00031a69) popup_clock_digital_analogue_window_cp2_ParamLimits

0xab43,	// (0x00031a81) sat_plugin_idle_act4_pane_ParamLimits

0xab43,	// (0x00031a81) sat_plugin_idle_act4_pane

0xace1,	// (0x00031c1f) sat_plugin_idle_act4_pane_t1_ParamLimits

0xace1,	// (0x00031c1f) sat_plugin_idle_act4_pane_t1

0xacf9,	// (0x00031c37) sat_plugin_idle_act4_pane_t2_ParamLimits

0xacf9,	// (0x00031c37) sat_plugin_idle_act4_pane_t2

0xad11,	// (0x00031c4f) sat_plugin_idle_act4_pane_t3_ParamLimits

0xad11,	// (0x00031c4f) sat_plugin_idle_act4_pane_t3

0xad29,	// (0x00031c67) sat_plugin_idle_act4_pane_t4_ParamLimits

0xad29,	// (0x00031c67) sat_plugin_idle_act4_pane_t4

0x0003,

0xfdb3,	// (0x00036cf1) sat_plugin_idle_act4_pane_t_ParamLimits

0xfdb3,	// (0x00036cf1) sat_plugin_idle_act4_pane_t

0x05c8,	// (0x00027506) popup_battery_window_ParamLimits

0x05c8,	// (0x00027506) popup_battery_window

0xba9e,	// (0x000329dc) bg_popup_sub_pane_cp25_ParamLimits

0xba9e,	// (0x000329dc) bg_popup_sub_pane_cp25

0x533c,	// (0x0002c27a) popup_battery_window_g1_ParamLimits

0x533c,	// (0x0002c27a) popup_battery_window_g1

0x5348,	// (0x0002c286) popup_battery_window_t1_ParamLimits

0x5348,	// (0x0002c286) popup_battery_window_t1

0x535a,	// (0x0002c298) popup_battery_window_t2_ParamLimits

0x535a,	// (0x0002c298) popup_battery_window_t2

0x0001,

0xfdbc,	// (0x00036cfa) popup_battery_window_t_ParamLimits

0xfdbc,	// (0x00036cfa) popup_battery_window_t

0x8e06,	// (0x0002fd44) midp_canvas_pane_ParamLimits

0x8e61,	// (0x0002fd9f) midp_keypad_pane_ParamLimits

0x8e61,	// (0x0002fd9f) midp_keypad_pane

0xc0cd,	// (0x0003300b) main_midp_pane_ParamLimits

0xe9a3,	// (0x000358e1) signal_pane_g2_cp_ParamLimits

0xad41,	// (0x00031c7f) aid_size_cell_midp_keypad_ParamLimits

0xad41,	// (0x00031c7f) aid_size_cell_midp_keypad

0xad5f,	// (0x00031c9d) midp_keyp_game_grid_pane_ParamLimits

0xad5f,	// (0x00031c9d) midp_keyp_game_grid_pane

0xad86,	// (0x00031cc4) midp_keyp_rocker_pane_ParamLimits

0xad86,	// (0x00031cc4) midp_keyp_rocker_pane

0xaddf,	// (0x00031d1d) midp_keyp_sk_left_pane_ParamLimits

0xaddf,	// (0x00031d1d) midp_keyp_sk_left_pane

0xae33,	// (0x00031d71) midp_keyp_sk_right_pane_ParamLimits

0xae33,	// (0x00031d71) midp_keyp_sk_right_pane

0xb8fb,	// (0x00032839) bg_button_pane_cp03

0xae87,	// (0x00031dc5) midp_keyp_sk_left_pane_g1

0xb8fb,	// (0x00032839) bg_button_pane_cp04

0xae87,	// (0x00031dc5) midp_keyp_sk_right_pane_g1

0xec8c,	// (0x00035bca) midp_keyp_rocker_pane_g1

0xae90,	// (0x00031dce) keyp_game_cell_pane_ParamLimits

0xae90,	// (0x00031dce) keyp_game_cell_pane

0xb8fb,	// (0x00032839) bg_button_pane_cp02

0xaeb4,	// (0x00031df2) keyp_game_cell_pane_g1

0x7930,	// (0x0002e86e) popup_fep_vkb2_window_ParamLimits

0x7930,	// (0x0002e86e) popup_fep_vkb2_window

0x8426,	// (0x0002f364) aid_size_cell_vkb2_ParamLimits

0x8426,	// (0x0002f364) aid_size_cell_vkb2

0x845c,	// (0x0002f39a) popup_fep_vkb2_window_g1_ParamLimits

0x845c,	// (0x0002f39a) popup_fep_vkb2_window_g1

0x84ac,	// (0x0002f3ea) vkb2_area_bottom_pane_ParamLimits

0x84ac,	// (0x0002f3ea) vkb2_area_bottom_pane

0x8500,	// (0x0002f43e) vkb2_area_keypad_pane_ParamLimits

0x8500,	// (0x0002f43e) vkb2_area_keypad_pane

0x8548,	// (0x0002f486) vkb2_area_top_pane_ParamLimits

0x8548,	// (0x0002f486) vkb2_area_top_pane

0x85ce,	// (0x0002f50c) vkb2_top_entry_pane_ParamLimits

0x85ce,	// (0x0002f50c) vkb2_top_entry_pane

0x85fb,	// (0x0002f539) vkb2_top_grid_left_pane_ParamLimits

0x85fb,	// (0x0002f539) vkb2_top_grid_left_pane

0x861b,	// (0x0002f559) vkb2_top_grid_right_pane_ParamLimits

0x861b,	// (0x0002f559) vkb2_top_grid_right_pane

0x3b87,	// (0x0002aac5) vkb2_cell_keypad_pane_ParamLimits

0x3b87,	// (0x0002aac5) vkb2_cell_keypad_pane

0x8661,	// (0x0002f59f) vkb2_area_bottom_grid_pane_ParamLimits

0x8661,	// (0x0002f59f) vkb2_area_bottom_grid_pane

0x868b,	// (0x0002f5c9) vkb2_area_bottom_pane_g1_ParamLimits

0x868b,	// (0x0002f5c9) vkb2_area_bottom_pane_g1

0x86b1,	// (0x0002f5ef) vkb2_area_bottom_pane_g2_ParamLimits

0x86b1,	// (0x0002f5ef) vkb2_area_bottom_pane_g2

0x86e2,	// (0x0002f620) vkb2_area_bottom_pane_g3_ParamLimits

0x86e2,	// (0x0002f620) vkb2_area_bottom_pane_g3

0x0002,

0xfdc1,	// (0x00036cff) vkb2_area_bottom_pane_g_ParamLimits

0xfdc1,	// (0x00036cff) vkb2_area_bottom_pane_g

0x3d31,	// (0x0002ac6f) vkb2_top_cell_left_pane_ParamLimits

0x3d31,	// (0x0002ac6f) vkb2_top_cell_left_pane

0xaebd,	// (0x00031dfb) vkb2_top_entry_pane_g1_ParamLimits

0xaebd,	// (0x00031dfb) vkb2_top_entry_pane_g1

0xaecb,	// (0x00031e09) vkb2_top_entry_pane_t1_ParamLimits

0xaecb,	// (0x00031e09) vkb2_top_entry_pane_t1

0x550b,	// (0x0002c449) vkb2_top_entry_pane_t2_ParamLimits

0x550b,	// (0x0002c449) vkb2_top_entry_pane_t2

0x553d,	// (0x0002c47b) vkb2_top_entry_pane_t3_ParamLimits

0x553d,	// (0x0002c47b) vkb2_top_entry_pane_t3

0x0002,

0xfdc8,	// (0x00036d06) vkb2_top_entry_pane_t_ParamLimits

0xfdc8,	// (0x00036d06) vkb2_top_entry_pane_t

0x874c,	// (0x0002f68a) vkb2_top_grid_right_pane_g1_ParamLimits

0x874c,	// (0x0002f68a) vkb2_top_grid_right_pane_g1

0x3d94,	// (0x0002acd2) vkb2_top_grid_right_pane_g2_ParamLimits

0x3d94,	// (0x0002acd2) vkb2_top_grid_right_pane_g2

0x3dac,	// (0x0002acea) vkb2_top_grid_right_pane_g3_ParamLimits

0x3dac,	// (0x0002acea) vkb2_top_grid_right_pane_g3

0x8762,	// (0x0002f6a0) vkb2_top_grid_right_pane_g4_ParamLimits

0x8762,	// (0x0002f6a0) vkb2_top_grid_right_pane_g4

0x0003,

0xfdcf,	// (0x00036d0d) vkb2_top_grid_right_pane_g_ParamLimits

0xfdcf,	// (0x00036d0d) vkb2_top_grid_right_pane_g

0x3dda,	// (0x0002ad18) vkb2_top_cell_left_pane_g1

0x3df1,	// (0x0002ad2f) vkb2_cell_keypad_pane_g1_ParamLimits

0x3df1,	// (0x0002ad2f) vkb2_cell_keypad_pane_g1

0x5561,	// (0x0002c49f) vkb2_cell_keypad_pane_t1_ParamLimits

0x5561,	// (0x0002c49f) vkb2_cell_keypad_pane_t1

0x3dff,	// (0x0002ad3d) vkb2_cell_bottom_grid_pane_ParamLimits

0x3dff,	// (0x0002ad3d) vkb2_cell_bottom_grid_pane

0x3e38,	// (0x0002ad76) vkb2_cell_bottom_grid_pane_g1

0xab74,	// (0x00031ab2) aid_call2_pane_cp02

0xab7c,	// (0x00031aba) aid_call_pane_cp02

0xab84,	// (0x00031ac2) clock_digital_number_pane_cp10

0xab8c,	// (0x00031aca) clock_digital_number_pane_cp11

0xab94,	// (0x00031ad2) clock_digital_number_pane_cp12

0xab9c,	// (0x00031ada) clock_digital_number_pane_cp13

0xaba4,	// (0x00031ae2) clock_digital_separator_pane_cp10

0xc4ad,	// (0x000333eb) popup_clock_digital_analogue_window_cp2_g1

0xc4ad,	// (0x000333eb) popup_clock_digital_analogue_window_cp2_g2

0xabac,	// (0x00031aea) popup_clock_digital_analogue_window_cp2_g3

0xc4ad,	// (0x000333eb) popup_clock_digital_analogue_window_cp2_g4

0xabac,	// (0x00031aea) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd84,	// (0x00036cc2) popup_clock_digital_analogue_window_cp2_g

0xabb4,	// (0x00031af2) popup_clock_digital_analogue_window_cp2_t1

0xabc2,	// (0x00031b00) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd8f,	// (0x00036ccd) popup_clock_digital_analogue_window_cp2_t

0xec8c,	// (0x00035bca) clock_digital_number_pane_cp10_g1

0xec8c,	// (0x00035bca) clock_digital_number_pane_cp10_g2

0x0001,

0xfb70,	// (0x00036aae) clock_digital_number_pane_cp10_g

0xec8c,	// (0x00035bca) clock_digital_separator_pane_cp10_g1

0xec8c,	// (0x00035bca) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb70,	// (0x00036aae) clock_digital_separator_pane_cp10_g

0x4f88,	// (0x0002bec6) uniindi_top_pane_g3

0x4f99,	// (0x0002bed7) uniindi_top_pane_g4

0x3c12,	// (0x0002ab50) vkb2_row_keypad_pane_ParamLimits

0x3c12,	// (0x0002ab50) vkb2_row_keypad_pane

0x3e54,	// (0x0002ad92) vkb2_cell_t_keypad_pane_ParamLimits

0x3e54,	// (0x0002ad92) vkb2_cell_t_keypad_pane

0x3e64,	// (0x0002ada2) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x3e64,	// (0x0002ada2) vkb2_cell_t_keypad_pane_cp08

0x3e77,	// (0x0002adb5) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x3e77,	// (0x0002adb5) vkb2_cell_t_keypad_pane_cp09

0x3e8b,	// (0x0002adc9) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x3e8b,	// (0x0002adc9) vkb2_cell_t_keypad_pane_cp01

0x3e9c,	// (0x0002adda) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x3e9c,	// (0x0002adda) vkb2_cell_t_keypad_pane_cp02

0x3ead,	// (0x0002adeb) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x3ead,	// (0x0002adeb) vkb2_cell_t_keypad_pane_cp03

0x3ebe,	// (0x0002adfc) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x3ebe,	// (0x0002adfc) vkb2_cell_t_keypad_pane_cp04

0x3ecf,	// (0x0002ae0d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x3ecf,	// (0x0002ae0d) vkb2_cell_t_keypad_pane_cp05

0x3ee0,	// (0x0002ae1e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x3ee0,	// (0x0002ae1e) vkb2_cell_t_keypad_pane_cp06

0x3ef1,	// (0x0002ae2f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x3ef1,	// (0x0002ae2f) vkb2_cell_t_keypad_pane_cp07

0x3f02,	// (0x0002ae40) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x3f02,	// (0x0002ae40) vkb2_cell_t_keypad_pane_cp10

0x2c71,	// (0x00029baf) vkb2_cell_t_keypad_pane_g1

0x5578,	// (0x0002c4b6) vkb2_cell_t_keypad_pane_t1

0x0503,	// (0x00027441) popup_grid_graphic2_window

0xaf04,	// (0x00031e42) aid_size_cell_graphic2_ParamLimits

0xaf04,	// (0x00031e42) aid_size_cell_graphic2

0xd49f,	// (0x000343dd) bg_popup_window_pane_cp21_ParamLimits

0xd49f,	// (0x000343dd) bg_popup_window_pane_cp21

0xaf36,	// (0x00031e74) graphic2_pages_pane_ParamLimits

0xaf36,	// (0x00031e74) graphic2_pages_pane

0xaf8c,	// (0x00031eca) grid_graphic2_control_pane_ParamLimits

0xaf8c,	// (0x00031eca) grid_graphic2_control_pane

0xafc0,	// (0x00031efe) grid_graphic2_pane_ParamLimits

0xafc0,	// (0x00031efe) grid_graphic2_pane

0xb033,	// (0x00031f71) cell_graphic2_pane

0xb8fb,	// (0x00032839) main_comp_mode_pane

0x3530,	// (0x0002a46e) list_ai3_gene_pane_ParamLimits

0xa8ae,	// (0x000317ec) bg_popup_window_pane_cp19_ParamLimits

0x4bde,	// (0x0002bb1c) bg_touch_area_indi_pane_ParamLimits

0x4bde,	// (0x0002bb1c) bg_touch_area_indi_pane

0x4bf4,	// (0x0002bb32) bg_touch_area_indi_pane_cp01_ParamLimits

0x4bf4,	// (0x0002bb32) bg_touch_area_indi_pane_cp01

0x4c0a,	// (0x0002bb48) bg_touch_area_indi_pane_cp02_ParamLimits

0x4c0a,	// (0x0002bb48) bg_touch_area_indi_pane_cp02

0x4c22,	// (0x0002bb60) bg_touch_area_indi_pane_cp03_ParamLimits

0x4c22,	// (0x0002bb60) bg_touch_area_indi_pane_cp03

0x4c3c,	// (0x0002bb7a) popup_slider_window_g1_ParamLimits

0x4c58,	// (0x0002bb96) popup_slider_window_g2_ParamLimits

0x4c74,	// (0x0002bbb2) popup_slider_window_g3_ParamLimits

0xfd19,	// (0x00036c57) popup_slider_window_g_ParamLimits

0x4cd0,	// (0x0002bc0e) popup_slider_window_t1_ParamLimits

0x4d44,	// (0x0002bc82) small_volume_slider_vertical_pane_ParamLimits

0xb033,	// (0x00031f71) cell_graphic2_pane_ParamLimits

0xb08e,	// (0x00031fcc) bg_button_pane_cp10_ParamLimits

0xb08e,	// (0x00031fcc) bg_button_pane_cp10

0xb0a1,	// (0x00031fdf) bg_button_pane_cp11_ParamLimits

0xb0a1,	// (0x00031fdf) bg_button_pane_cp11

0xb0b4,	// (0x00031ff2) graphic2_pages_pane_g1_ParamLimits

0xb0b4,	// (0x00031ff2) graphic2_pages_pane_g1

0xb0cf,	// (0x0003200d) graphic2_pages_pane_g2_ParamLimits

0xb0cf,	// (0x0003200d) graphic2_pages_pane_g2

0x0001,

0xfddd,	// (0x00036d1b) graphic2_pages_pane_g_ParamLimits

0xfddd,	// (0x00036d1b) graphic2_pages_pane_g

0xb0e7,	// (0x00032025) graphic2_pages_pane_t1_ParamLimits

0xb0e7,	// (0x00032025) graphic2_pages_pane_t1

0xb0ff,	// (0x0003203d) cell_graphic2_control_pane_ParamLimits

0xb0ff,	// (0x0003203d) cell_graphic2_control_pane

0xb119,	// (0x00032057) cell_graphic2_pane_g1_ParamLimits

0xb119,	// (0x00032057) cell_graphic2_pane_g1

0x8778,	// (0x0002f6b6) cell_graphic2_pane_g2_ParamLimits

0x8778,	// (0x0002f6b6) cell_graphic2_pane_g2

0xaaec,	// (0x00031a2a) cell_graphic2_pane_g3_ParamLimits

0xaaec,	// (0x00031a2a) cell_graphic2_pane_g3

0x8785,	// (0x0002f6c3) cell_graphic2_pane_g4_ParamLimits

0x8785,	// (0x0002f6c3) cell_graphic2_pane_g4

0xb126,	// (0x00032064) cell_graphic2_pane_g5_ParamLimits

0xb126,	// (0x00032064) cell_graphic2_pane_g5

0x0004,

0xfde2,	// (0x00036d20) cell_graphic2_pane_g_ParamLimits

0xfde2,	// (0x00036d20) cell_graphic2_pane_g

0xb146,	// (0x00032084) cell_graphic2_pane_t1_ParamLimits

0xb146,	// (0x00032084) cell_graphic2_pane_t1

0xdaf7,	// (0x00034a35) grid_highlight_pane_cp11_ParamLimits

0xdaf7,	// (0x00034a35) grid_highlight_pane_cp11

0xbf6c,	// (0x00032eaa) bg_button_pane_cp05

0xb15d,	// (0x0003209b) cell_graphic2_control_pane_g1

0xec8c,	// (0x00035bca) bg_touch_area_indi_pane_g1

0x57d6,	// (0x0002c714) aid_cmod_rocker_key_size

0x57e0,	// (0x0002c71e) aid_cmode_itu_key_size

0x57ea,	// (0x0002c728) main_cmode_video_pane

0x57f4,	// (0x0002c732) main_comp_mode_itu_pane

0x5800,	// (0x0002c73e) main_comp_mode_rocker_pane

0x580c,	// (0x0002c74a) cell_cmode_rocker_pane_ParamLimits

0x580c,	// (0x0002c74a) cell_cmode_rocker_pane

0x581e,	// (0x0002c75c) cell_cmode_itu_pane_ParamLimits

0x581e,	// (0x0002c75c) cell_cmode_itu_pane

0xbf6c,	// (0x00032eaa) bg_button_pane_cp06_ParamLimits

0xbf6c,	// (0x00032eaa) bg_button_pane_cp06

0xee33,	// (0x00035d71) cell_cmode_rocker_pane_g1_ParamLimits

0xee33,	// (0x00035d71) cell_cmode_rocker_pane_g1

0x4de8,	// (0x0002bd26) cell_cmode_rocker_pane_g2_ParamLimits

0x4de8,	// (0x0002bd26) cell_cmode_rocker_pane_g2

0x0001,

0xfded,	// (0x00036d2b) cell_cmode_rocker_pane_g_ParamLimits

0xfded,	// (0x00036d2b) cell_cmode_rocker_pane_g

0xb8fb,	// (0x00032839) bg_button_pane_cp07

0x5833,	// (0x0002c771) cell_cmode_itu_pane_g1

0x583c,	// (0x0002c77a) cell_cmode_itu_pane_t1

0x584a,	// (0x0002c788) cell_cmode_itu_pane_t2

0x0001,

0xfdf2,	// (0x00036d30) cell_cmode_itu_pane_t

0x500b,	// (0x0002bf49) aid_touch_ctrl_left

0x5013,	// (0x0002bf51) aid_touch_ctrl_right

0xb8fb,	// (0x00032839) compa_mode_pane

0xb16a,	// (0x000320a8) aid_cmod_rocker_key_size_cp

0xb174,	// (0x000320b2) aid_cmode_itu_key_size_cp

0x586c,	// (0x0002c7aa) compa_mode_pane_g1

0x5874,	// (0x0002c7b2) compa_mode_pane_g2

0x587c,	// (0x0002c7ba) compa_mode_pane_g3

0x0002,

0xfdf7,	// (0x00036d35) compa_mode_pane_g

0xb17e,	// (0x000320bc) main_comp_mode_itu_pane_cp

0xb186,	// (0x000320c4) main_comp_mode_rocker_pane_cp

0xb18e,	// (0x000320cc) cell_cmode_itu_pane_cp_ParamLimits

0xb18e,	// (0x000320cc) cell_cmode_itu_pane_cp

0xb1a3,	// (0x000320e1) cell_cmode_rocker_pane_cp_ParamLimits

0xb1a3,	// (0x000320e1) cell_cmode_rocker_pane_cp

0xbf6c,	// (0x00032eaa) bg_button_pane_cp06_cp_ParamLimits

0xbf6c,	// (0x00032eaa) bg_button_pane_cp06_cp

0xee33,	// (0x00035d71) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xee33,	// (0x00035d71) cell_cmode_rocker_pane_g1_cp

0xec8c,	// (0x00035bca) cell_cmode_rocker_pane_g2_cp

0xb8fb,	// (0x00032839) bg_button_pane_cp07_cp

0xb1b5,	// (0x000320f3) cell_cmode_itu_pane_g1_cp

0xb1be,	// (0x000320fc) cell_cmode_itu_pane_t1_cp

0xb1be,	// (0x000320fc) cell_cmode_itu_pane_t2_cp

0x9ef5,	// (0x00030e33) settings_code_pane_cp2

0xb96b,	// (0x000328a9) bg_popup_window_pane_cp3_ParamLimits

0xbc78,	// (0x00032bb6) heading_pane_cp3_ParamLimits

0xbc84,	// (0x00032bc2) listscroll_popup_graphic_pane_ParamLimits

0x2857,	// (0x00029795) fep_hwr_aid_pane_ParamLimits

0x38d5,	// (0x0002a813) aid_touch_sctrl_top_ParamLimits

0x38f0,	// (0x0002a82e) sctrl_sk_top_pane_g1_ParamLimits

0x2c71,	// (0x00029baf) sctrl_sk_top_pane_g2_ParamLimits

0xfd32,	// (0x00036c70) sctrl_sk_top_pane_g_ParamLimits

0x38fd,	// (0x0002a83b) sctrl_sk_top_pane_t1_ParamLimits

0x38d5,	// (0x0002a813) aid_touch_sctrl_bottom_ParamLimits

0x38fd,	// (0x0002a83b) sctrl_sk_bottom_pane_t1_ParamLimits

0x4f54,	// (0x0002be92) aid_area_touch_clock

0x8590,	// (0x0002f4ce) aid_vkb2_area_top_pane_cell_ParamLimits

0x8590,	// (0x0002f4ce) aid_vkb2_area_top_pane_cell

0x863b,	// (0x0002f579) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x863b,	// (0x0002f579) aid_vkb2_area_bottom_pane_cell

0x54c3,	// (0x0002c401) popup_char_count_window

0x58c9,	// (0x0002c807) popup_char_count_window_g1

0x58d2,	// (0x0002c810) popup_char_count_window_g2

0x58db,	// (0x0002c819) popup_char_count_window_g3

0x0002,

0xfdfe,	// (0x00036d3c) popup_char_count_window_g

0x58e4,	// (0x0002c822) popup_char_count_window_t1

0x39af,	// (0x0002a8ed) popup_fep_char_preview_window_ParamLimits

0x39af,	// (0x0002a8ed) popup_fep_char_preview_window

0x85b0,	// (0x0002f4ee) vkb2_top_candi_pane_ParamLimits

0x85b0,	// (0x0002f4ee) vkb2_top_candi_pane

0xb1cc,	// (0x0003210a) cell_vkb2_top_candi_pane_ParamLimits

0xb1cc,	// (0x0003210a) cell_vkb2_top_candi_pane

0x3f17,	// (0x0002ae55) bg_popup_fep_char_preview_window_ParamLimits

0x3f17,	// (0x0002ae55) bg_popup_fep_char_preview_window

0x3f25,	// (0x0002ae63) popup_fep_char_preview_window_t1_ParamLimits

0x3f25,	// (0x0002ae63) popup_fep_char_preview_window_t1

0x593f,	// (0x0002c87d) bg_popup_fep_char_preview_window_g1

0x5947,	// (0x0002c885) bg_popup_fep_char_preview_window_g2

0x594f,	// (0x0002c88d) bg_popup_fep_char_preview_window_g3

0x5957,	// (0x0002c895) bg_popup_fep_char_preview_window_g4

0x595f,	// (0x0002c89d) bg_popup_fep_char_preview_window_g5

0x3f5f,	// (0x0002ae9d) bg_popup_fep_char_preview_window_g6

0x5967,	// (0x0002c8a5) bg_popup_fep_char_preview_window_g7

0x596f,	// (0x0002c8ad) bg_popup_fep_char_preview_window_g8

0x5977,	// (0x0002c8b5) bg_popup_fep_char_preview_window_g9

0x0008,

0xfe05,	// (0x00036d43) bg_popup_fep_char_preview_window_g

0x2c71,	// (0x00029baf) cell_vkb2_top_candi_pane_g1_ParamLimits

0x2c71,	// (0x00029baf) cell_vkb2_top_candi_pane_g1

0x2c7f,	// (0x00029bbd) cell_vkb2_top_candi_pane_g2_ParamLimits

0x2c7f,	// (0x00029bbd) cell_vkb2_top_candi_pane_g2

0x4b35,	// (0x0002ba73) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4b35,	// (0x0002ba73) cell_vkb2_top_candi_pane_g3

0x3f67,	// (0x0002aea5) cell_vkb2_top_candi_pane_g4_ParamLimits

0x3f67,	// (0x0002aea5) cell_vkb2_top_candi_pane_g4

0xf234,	// (0x00036172) cell_vkb2_top_candi_pane_g5_ParamLimits

0xf234,	// (0x00036172) cell_vkb2_top_candi_pane_g5

0x3f88,	// (0x0002aec6) cell_vkb2_top_candi_pane_g6_ParamLimits

0x3f88,	// (0x0002aec6) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe18,	// (0x00036d56) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe18,	// (0x00036d56) cell_vkb2_top_candi_pane_g

0x3f96,	// (0x0002aed4) cell_vkb2_top_candi_pane_t1

0x2104,	// (0x00029042) aid_size_touch_slider_mark_ParamLimits

0x2104,	// (0x00029042) aid_size_touch_slider_mark

0xaf72,	// (0x00031eb0) grid_graphic2_catg_pane_ParamLimits

0xaf72,	// (0x00031eb0) grid_graphic2_catg_pane

0xb006,	// (0x00031f44) popup_grid_graphic2_window_t1_ParamLimits

0xb006,	// (0x00031f44) popup_grid_graphic2_window_t1

0xb01c,	// (0x00031f5a) popup_grid_graphic2_window_t2_ParamLimits

0xb01c,	// (0x00031f5a) popup_grid_graphic2_window_t2

0x0001,

0xfdd8,	// (0x00036d16) popup_grid_graphic2_window_t_ParamLimits

0xfdd8,	// (0x00036d16) popup_grid_graphic2_window_t

0xbf6c,	// (0x00032eaa) bg_button_pane_cp05_ParamLimits

0xb15d,	// (0x0003209b) cell_graphic2_control_pane_g1_ParamLimits

0xb232,	// (0x00032170) cell_graphic2_catg_pane_ParamLimits

0xb232,	// (0x00032170) cell_graphic2_catg_pane

0xb8fb,	// (0x00032839) bg_button_pane_cp12

0xb244,	// (0x00032182) cell_graphic2_catg_pane_g1

0x4f20,	// (0x0002be5e) cell_tb_ext_pane_t1_ParamLimits

0x3d51,	// (0x0002ac8f) vkb2_top_cell_right_narrow_pane_ParamLimits

0x3d51,	// (0x0002ac8f) vkb2_top_cell_right_narrow_pane

0x3d69,	// (0x0002aca7) vkb2_top_cell_right_wide_pane_ParamLimits

0x3d69,	// (0x0002aca7) vkb2_top_cell_right_wide_pane

0x2849,	// (0x00029787) bg_vkb2_func_pane_ParamLimits

0x2849,	// (0x00029787) bg_vkb2_func_pane

0x3dda,	// (0x0002ad18) vkb2_top_cell_left_pane_g1_ParamLimits

0x2849,	// (0x00029787) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2849,	// (0x00029787) bg_vkb2_fuc_pane_cp03

0x3e38,	// (0x0002ad76) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xcef0,	// (0x00033e2e) bg_vkb2_func_pane_g1

0xcef8,	// (0x00033e36) bg_vkb2_func_pane_g2

0xcf08,	// (0x00033e46) bg_vkb2_func_pane_g3

0xcf00,	// (0x00033e3e) bg_vkb2_func_pane_g4

0xcf10,	// (0x00033e4e) bg_vkb2_func_pane_g5

0xcf18,	// (0x00033e56) bg_vkb2_func_pane_g6

0xcf20,	// (0x00033e5e) bg_vkb2_func_pane_g7

0xcf28,	// (0x00033e66) bg_vkb2_func_pane_g8

0xcee8,	// (0x00033e26) bg_vkb2_func_pane_g9

0x0008,

0xfe25,	// (0x00036d63) bg_vkb2_func_pane_g

0x2849,	// (0x00029787) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2849,	// (0x00029787) bg_vkb2_fuc_pane_cp01

0x3dda,	// (0x0002ad18) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x3dda,	// (0x0002ad18) vkb2_top_cell_right_wide_pane_g1

0x2849,	// (0x00029787) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2849,	// (0x00029787) bg_vkb2_fuc_pane_cp02

0x3e38,	// (0x0002ad76) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x3e38,	// (0x0002ad76) vkb2_top_cell_right_narrow_pane_g1

0xa7ee,	// (0x0003172c) aid_touch_area_decrease_ParamLimits

0xa7ee,	// (0x0003172c) aid_touch_area_decrease

0xa822,	// (0x00031760) aid_touch_area_increase_ParamLimits

0xa822,	// (0x00031760) aid_touch_area_increase

0xa84a,	// (0x00031788) aid_touch_area_mute_ParamLimits

0xa84a,	// (0x00031788) aid_touch_area_mute

0xa87a,	// (0x000317b8) aid_touch_area_slider_ParamLimits

0xa87a,	// (0x000317b8) aid_touch_area_slider

0xa8ba,	// (0x000317f8) popup_slider_window_g4_ParamLimits

0xa8ba,	// (0x000317f8) popup_slider_window_g4

0xa8e2,	// (0x00031820) popup_slider_window_g5_ParamLimits

0xa8e2,	// (0x00031820) popup_slider_window_g5

0xa916,	// (0x00031854) popup_slider_window_g6_ParamLimits

0xa916,	// (0x00031854) popup_slider_window_g6

0x4cfe,	// (0x0002bc3c) popup_slider_window_t2_ParamLimits

0x4cfe,	// (0x0002bc3c) popup_slider_window_t2

0x0001,

0xfd26,	// (0x00036c64) popup_slider_window_t_ParamLimits

0xfd26,	// (0x00036c64) popup_slider_window_t

0xa932,	// (0x00031870) slider_pane_ParamLimits

0xa932,	// (0x00031870) slider_pane

0x599a,	// (0x0002c8d8) slider_pane_g1_ParamLimits

0x599a,	// (0x0002c8d8) slider_pane_g1

0x59ae,	// (0x0002c8ec) slider_pane_g2_ParamLimits

0x59ae,	// (0x0002c8ec) slider_pane_g2

0x59c4,	// (0x0002c902) slider_pane_g3_ParamLimits

0x59c4,	// (0x0002c902) slider_pane_g3

0x0003,

0xfe38,	// (0x00036d76) slider_pane_g_ParamLimits

0xfe38,	// (0x00036d76) slider_pane_g

0x96c1,	// (0x000305ff) popup_tb_float_extension_window_ParamLimits

0x96c1,	// (0x000305ff) popup_tb_float_extension_window

0x59f0,	// (0x0002c92e) aid_size_cell_tb_float_ext

0xb8fb,	// (0x00032839) bg_popup_sub_window_cp28

0x59fc,	// (0x0002c93a) grid_tb_float_ext_pane

0x5a06,	// (0x0002c944) cell_tb_float_ext_pane_ParamLimits

0x5a06,	// (0x0002c944) cell_tb_float_ext_pane

0x5a20,	// (0x0002c95e) cell_tb_float_ext_pane_g1

0x5a29,	// (0x0002c967) grid_highlight_pane_cp12

0x835f,	// (0x0002f29d) cell_last_hwr_side_pane_ParamLimits

0x835f,	// (0x0002f29d) cell_last_hwr_side_pane

0xec8c,	// (0x00035bca) cell_last_hwr_side_pane_g1

0x5a32,	// (0x0002c970) cell_last_hwr_side_pane_g2

0x0001,

0xfe41,	// (0x00036d7f) cell_last_hwr_side_pane_g

0x8717,	// (0x0002f655) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8717,	// (0x0002f655) vkb2_area_bottom_space_btn_pane

0x2c71,	// (0x00029baf) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5578,	// (0x0002c4b6) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x3f96,	// (0x0002aed4) cell_vkb2_top_candi_pane_t1_ParamLimits

0x3fb5,	// (0x0002aef3) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x3fb5,	// (0x0002aef3) vkb2_area_bottom_space_btn_pane_g1

0x3fef,	// (0x0002af2d) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x3fef,	// (0x0002af2d) vkb2_area_bottom_space_btn_pane_g2

0x4025,	// (0x0002af63) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x4025,	// (0x0002af63) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe46,	// (0x00036d84) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe46,	// (0x00036d84) vkb2_area_bottom_space_btn_pane_g

0x290c,	// (0x0002984a) cel_fep_hwr_func_pane_ParamLimits

0x290c,	// (0x0002984a) cel_fep_hwr_func_pane

0x8334,	// (0x0002f272) cell_hwr_side_button_pane_ParamLimits

0x8334,	// (0x0002f272) cell_hwr_side_button_pane

0x4f54,	// (0x0002be92) aid_area_touch_clock_ParamLimits

0xba9e,	// (0x000329dc) bg_uniindi_top_pane_ParamLimits

0x4f66,	// (0x0002bea4) uniindi_top_pane_g1_ParamLimits

0x4f7c,	// (0x0002beba) uniindi_top_pane_g2_ParamLimits

0x4f88,	// (0x0002bec6) uniindi_top_pane_g3_ParamLimits

0x4f99,	// (0x0002bed7) uniindi_top_pane_g4_ParamLimits

0xfd5e,	// (0x00036c9c) uniindi_top_pane_g_ParamLimits

0x4fa6,	// (0x0002bee4) uniindi_top_pane_t1_ParamLimits

0xba9e,	// (0x000329dc) bg_vkb2_func_pane_cp01_ParamLimits

0xba9e,	// (0x000329dc) bg_vkb2_func_pane_cp01

0x5a3b,	// (0x0002c979) cel_fep_hwr_func_pane_g1_ParamLimits

0x5a3b,	// (0x0002c979) cel_fep_hwr_func_pane_g1

0xba9e,	// (0x000329dc) bg_vkb2_func_pane_cp02_ParamLimits

0xba9e,	// (0x000329dc) bg_vkb2_func_pane_cp02

0x5a3b,	// (0x0002c979) cell_hwr_side_button_pane_g1_ParamLimits

0x5a3b,	// (0x0002c979) cell_hwr_side_button_pane_g1

0xcdfe,	// (0x00033d3c) status_pane_g4_ParamLimits

0xcdfe,	// (0x00033d3c) status_pane_g4

0xce18,	// (0x00033d56) status_pane_t1

0xeb11,	// (0x00035a4f) form2_midp_gauge_slider_cont_pane

0xeb19,	// (0x00035a57) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa1ec,	// (0x0003112a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa1fe,	// (0x0003113c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb23,	// (0x00036a61) form2_midp_gauge_slider_pane_t_ParamLimits

0xeb2b,	// (0x00035a69) form2_midp_slider_pane_ParamLimits

0x396f,	// (0x0002a8ad) aid_size_cell_func_vkb2_ParamLimits

0x396f,	// (0x0002a8ad) aid_size_cell_func_vkb2

0x59dc,	// (0x0002c91a) slider_pane_g4_ParamLimits

0x59dc,	// (0x0002c91a) slider_pane_g4

0x8792,	// (0x0002f6d0) form2_midp_gauge_slider_pane_t2_cp01

0x87a0,	// (0x0002f6de) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x87a0,	// (0x0002f6de) form2_midp_gauge_slider_pane_t3_cp01

0x409a,	// (0x0002afd8) form2_midp_slider_pane_cp01

0xb8fb,	// (0x00032839) navi_smil_pane

0x5a6b,	// (0x0002c9a9) navi_smil_pane_g1

0x5a73,	// (0x0002c9b1) navi_smil_pane_t1

0x5a49,	// (0x0002c987) form2_midp_slider_pane_g1

0x5a52,	// (0x0002c990) form2_midp_slider_pane_g2

0x5a5a,	// (0x0002c998) form2_midp_slider_pane_g3

0x5a49,	// (0x0002c987) form2_midp_slider_pane_g4

0xb24d,	// (0x0003218b) form2_midp_slider_pane_g5

0x0004,

0xfe4f,	// (0x00036d8d) form2_midp_slider_pane_g

0x405f,	// (0x0002af9d) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x405f,	// (0x0002af9d) vkb2_area_bottom_space_btn_pane_g4

0x989d,	// (0x000307db) lc0_navi_pane_ParamLimits

0x989d,	// (0x000307db) lc0_navi_pane

0x9907,	// (0x00030845) lc0_stat_indi_pane_ParamLimits

0x9907,	// (0x00030845) lc0_stat_indi_pane

0x991c,	// (0x0003085a) ls0_title_pane_ParamLimits

0x991c,	// (0x0003085a) ls0_title_pane

0xbf6c,	// (0x00032eaa) bg_popup_sub_pane_cp14_ParamLimits

0x4f3b,	// (0x0002be79) list_uniindi_pane_ParamLimits

0x4f47,	// (0x0002be85) uniindi_top_pane_ParamLimits

0x4fe3,	// (0x0002bf21) list_single_uniindi_pane_g1_ParamLimits

0x4ff6,	// (0x0002bf34) list_single_uniindi_pane_t1_ParamLimits

0x87bd,	// (0x0002f6fb) lc0_stat_clock_pane_ParamLimits

0x87bd,	// (0x0002f6fb) lc0_stat_clock_pane

0xb256,	// (0x00032194) lc0_stat_indi_pane_g1_ParamLimits

0xb256,	// (0x00032194) lc0_stat_indi_pane_g1

0xb263,	// (0x000321a1) lc0_stat_indi_pane_g2_ParamLimits

0xb263,	// (0x000321a1) lc0_stat_indi_pane_g2

0x0001,

0xfe5a,	// (0x00036d98) lc0_stat_indi_pane_g_ParamLimits

0xfe5a,	// (0x00036d98) lc0_stat_indi_pane_g

0x87ca,	// (0x0002f708) lc0_uni_indicator_pane_ParamLimits

0x87ca,	// (0x0002f708) lc0_uni_indicator_pane

0x5a81,	// (0x0002c9bf) ls0_title_pane_g1_ParamLimits

0x5a81,	// (0x0002c9bf) ls0_title_pane_g1

0xb270,	// (0x000321ae) ls0_title_pane_t1_ParamLimits

0xb270,	// (0x000321ae) ls0_title_pane_t1

0x87d7,	// (0x0002f715) lc0_uni_indicator_pane_g1_ParamLimits

0x87d7,	// (0x0002f715) lc0_uni_indicator_pane_g1

0x5a95,	// (0x0002c9d3) lc0_stat_clock_pane_t1

0xb8fb,	// (0x00032839) main_ai5_pane

0x5aa3,	// (0x0002c9e1) ai5_sk_pane_ParamLimits

0x5aa3,	// (0x0002c9e1) ai5_sk_pane

0xb29e,	// (0x000321dc) cell_ai5_widget_pane_ParamLimits

0xb29e,	// (0x000321dc) cell_ai5_widget_pane

0x5ab0,	// (0x0002c9ee) aid_size_cell_widget_grid

0x5ac4,	// (0x0002ca02) bg_ai5_widget_pane_ParamLimits

0x5ac4,	// (0x0002ca02) bg_ai5_widget_pane

0xb327,	// (0x00032265) cell_ai5_widget_pane_g2

0xb337,	// (0x00032275) cell_ai5_widget_pane_g3

0xb34b,	// (0x00032289) cell_ai5_widget_pane_g4

0xb357,	// (0x00032295) cell_ai5_widget_pane_g5

0xb363,	// (0x000322a1) cell_ai5_widget_pane_g6

0xb36f,	// (0x000322ad) cell_ai5_widget_pane_g7

0xb3b7,	// (0x000322f5) cell_ai5_widget_pane_t1_ParamLimits

0xb3b7,	// (0x000322f5) cell_ai5_widget_pane_t1

0xb3d4,	// (0x00032312) cell_ai5_widget_pane_t2_ParamLimits

0xb3d4,	// (0x00032312) cell_ai5_widget_pane_t2

0xb3ec,	// (0x0003232a) cell_ai5_widget_pane_t3_ParamLimits

0xb3ec,	// (0x0003232a) cell_ai5_widget_pane_t3

0xb404,	// (0x00032342) cell_ai5_widget_pane_t4_ParamLimits

0xb404,	// (0x00032342) cell_ai5_widget_pane_t4

0xb41e,	// (0x0003235c) cell_ai5_widget_pane_t5_ParamLimits

0xb41e,	// (0x0003235c) cell_ai5_widget_pane_t5

0x5ad0,	// (0x0002ca0e) cell_ai5_widget_pane_t6_ParamLimits

0x5ad0,	// (0x0002ca0e) cell_ai5_widget_pane_t6

0x5ae2,	// (0x0002ca20) cell_ai5_widget_pane_t7_ParamLimits

0x5ae2,	// (0x0002ca20) cell_ai5_widget_pane_t7

0xb43d,	// (0x0003237b) cell_ai5_widget_pane_t8_ParamLimits

0xb43d,	// (0x0003237b) cell_ai5_widget_pane_t8

0x0009,

0xfe74,	// (0x00036db2) cell_ai5_widget_pane_t_ParamLimits

0xfe74,	// (0x00036db2) cell_ai5_widget_pane_t

0xb485,	// (0x000323c3) grid_ai5_widget_pane

0xbf6c,	// (0x00032eaa) highlight_cell_ai5_widget_pane_ParamLimits

0xbf6c,	// (0x00032eaa) highlight_cell_ai5_widget_pane

0xb49d,	// (0x000323db) ai5_sk_left_pane

0xb4a7,	// (0x000323e5) ai5_sk_middle_pane

0xb4b1,	// (0x000323ef) ai5_sk_right_pane

0x5afb,	// (0x0002ca39) bg_ai5_widget_pane_g1_ParamLimits

0x5afb,	// (0x0002ca39) bg_ai5_widget_pane_g1

0x5b07,	// (0x0002ca45) bg_ai5_widget_pane_g2_ParamLimits

0x5b07,	// (0x0002ca45) bg_ai5_widget_pane_g2

0x5b13,	// (0x0002ca51) bg_ai5_widget_pane_g3_ParamLimits

0x5b13,	// (0x0002ca51) bg_ai5_widget_pane_g3

0x5b1f,	// (0x0002ca5d) bg_ai5_widget_pane_g4_ParamLimits

0x5b1f,	// (0x0002ca5d) bg_ai5_widget_pane_g4

0x5b2b,	// (0x0002ca69) bg_ai5_widget_pane_g5_ParamLimits

0x5b2b,	// (0x0002ca69) bg_ai5_widget_pane_g5

0x5b37,	// (0x0002ca75) bg_ai5_widget_pane_g6_ParamLimits

0x5b37,	// (0x0002ca75) bg_ai5_widget_pane_g6

0x5b43,	// (0x0002ca81) bg_ai5_widget_pane_g7_ParamLimits

0x5b43,	// (0x0002ca81) bg_ai5_widget_pane_g7

0x5b4f,	// (0x0002ca8d) bg_ai5_widget_pane_g8_ParamLimits

0x5b4f,	// (0x0002ca8d) bg_ai5_widget_pane_g8

0x5b5b,	// (0x0002ca99) bg_ai5_widget_pane_g9_ParamLimits

0x5b5b,	// (0x0002ca99) bg_ai5_widget_pane_g9

0x0008,

0xfe89,	// (0x00036dc7) bg_ai5_widget_pane_g_ParamLimits

0xfe89,	// (0x00036dc7) bg_ai5_widget_pane_g

0x5b8e,	// (0x0002cacc) cell_shortcut_ai5_widget_pane_ParamLimits

0x5b8e,	// (0x0002cacc) cell_shortcut_ai5_widget_pane

0xb9a7,	// (0x000328e5) bg_cell_shortcut_ai5_widget_pane

0x5b9f,	// (0x0002cadd) cell_grid_ai5_widget_pane_g1

0x5ba8,	// (0x0002cae6) highlight_cell_shortcut_ai5_widget_pane

0xcef0,	// (0x00033e2e) ai5_sk_left_pane_g1

0x5bb0,	// (0x0002caee) ai5_sk_left_pane_g2

0x5bb8,	// (0x0002caf6) ai5_sk_left_pane_g3

0x5bc0,	// (0x0002cafe) ai5_sk_left_pane_g4

0x0003,

0xfe9c,	// (0x00036dda) ai5_sk_left_pane_g

0x5bc8,	// (0x0002cb06) ai5_sk_left_pane_t1

0xcef8,	// (0x00033e36) ai5_sk_right_pane_g1

0x5bd6,	// (0x0002cb14) ai5_sk_right_pane_g2

0x5bde,	// (0x0002cb1c) ai5_sk_right_pane_g3

0x5be6,	// (0x0002cb24) ai5_sk_right_pane_g4

0x0003,

0xfea5,	// (0x00036de3) ai5_sk_right_pane_g

0x5bee,	// (0x0002cb2c) ai5_sk_right_pane_t1

0xcef8,	// (0x00033e36) ai5_sk_middle_pane_g1

0xcef0,	// (0x00033e2e) ai5_sk_middle_pane_g2

0xcf10,	// (0x00033e4e) ai5_sk_middle_pane_g3

0x5bde,	// (0x0002cb1c) ai5_sk_middle_pane_g4

0x5bb8,	// (0x0002caf6) ai5_sk_middle_pane_g5

0x5bfc,	// (0x0002cb3a) ai5_sk_middle_pane_g6

0xb4bb,	// (0x000323f9) ai5_sk_middle_pane_g7

0x0006,

0xfeae,	// (0x00036dec) ai5_sk_middle_pane_g

0x9789,	// (0x000306c7) aid_touch_area_size_lc0_ParamLimits

0x9789,	// (0x000306c7) aid_touch_area_size_lc0

0x2ca0,	// (0x00029bde) cell_hwr_candidate_pane_t1_ParamLimits

0xcd20,	// (0x00033c5e) aid_touch_navi_pane

0x9a0e,	// (0x0003094c) status_dt_navi_pane_ParamLimits

0x9a0e,	// (0x0003094c) status_dt_navi_pane

0x9a26,	// (0x00030964) status_dt_sta_pane_ParamLimits

0x9a26,	// (0x00030964) status_dt_sta_pane

0xb4c3,	// (0x00032401) dt_sta_controll_pane

0xb4d0,	// (0x0003240e) dt_sta_indi_pane

0xb4dd,	// (0x0003241b) dt_sta_title_pane

0xba9e,	// (0x000329dc) bg_dt_sta_indi_pane_ParamLimits

0xba9e,	// (0x000329dc) bg_dt_sta_indi_pane

0x5c04,	// (0x0002cb42) dt_sta_battery_pane

0xb4ef,	// (0x0003242d) dt_sta_indi_pane_g1

0xb4f8,	// (0x00032436) dt_sta_indi_pane_g2

0xb501,	// (0x0003243f) dt_sta_indi_pane_g3

0x0002,

0xfebd,	// (0x00036dfb) dt_sta_indi_pane_g

0xb50a,	// (0x00032448) dt_sta_signal_pane

0xbf6c,	// (0x00032eaa) bg_dt_sta_title_pane_ParamLimits

0xbf6c,	// (0x00032eaa) bg_dt_sta_title_pane

0xdbc9,	// (0x00034b07) dt_sta_title_pane_g1

0xb513,	// (0x00032451) dt_sta_title_pane_t1_ParamLimits

0xb513,	// (0x00032451) dt_sta_title_pane_t1

0xb8fb,	// (0x00032839) bg_dt_sta_control_pane

0xb528,	// (0x00032466) dt_sta_controll_pane_g1

0xb531,	// (0x0003246f) bg_dt_sta_title_pane_g1

0xb53a,	// (0x00032478) bg_dt_sta_title_pane_g2

0xb543,	// (0x00032481) bg_dt_sta_title_pane_g3

0x0002,

0xfec4,	// (0x00036e02) bg_dt_sta_title_pane_g

0xec8c,	// (0x00035bca) bg_dt_sta_indi_pane_g1

0x5c0c,	// (0x0002cb4a) dt_sta_signal_pane_g1

0x5c14,	// (0x0002cb52) dt_sta_signal_pane_g2

0x0001,

0xfecb,	// (0x00036e09) dt_sta_signal_pane_g

0x5c1c,	// (0x0002cb5a) dt_sta_battery_pane_g1

0x5c25,	// (0x0002cb63) dt_sta_battery_pane_t1

0xec8c,	// (0x00035bca) bg_dt_sta_control_pane_g1

0xc52b,	// (0x00033469) fep_china_uni_eep_pane

0xc533,	// (0x00033471) fep_china_uni_entry_pane_ParamLimits

0xc543,	// (0x00033481) popup_fep_china_uni_window_g1_ParamLimits

0xc553,	// (0x00033491) popup_fep_china_uni_window_g2_ParamLimits

0xc553,	// (0x00033491) popup_fep_china_uni_window_g2

0x0001,

0xf75d,	// (0x0003669b) popup_fep_china_uni_window_g_ParamLimits

0xf75d,	// (0x0003669b) popup_fep_china_uni_window_g

0x5c34,	// (0x0002cb72) fep_china_uni_eep_pane_g1

0x5c3c,	// (0x0002cb7a) fep_china_uni_eep_pane_t1

0x5a62,	// (0x0002c9a0) aid_touch_area_size_smil_player

0xcdd1,	// (0x00033d0f) lc0_clock_pane

0xce0c,	// (0x00033d4a) status_pane_g5_ParamLimits

0xce0c,	// (0x00033d4a) status_pane_g5

0x90aa,	// (0x0002ffe8) popup_keymap_window

0xcdea,	// (0x00033d28) status_icon_pane

0xb337,	// (0x00032275) cell_ai5_widget_pane_g3_ParamLimits

0xb34b,	// (0x00032289) cell_ai5_widget_pane_g4_ParamLimits

0xb357,	// (0x00032295) cell_ai5_widget_pane_g5_ParamLimits

0xb37b,	// (0x000322b9) cell_ai5_widget_pane_g8_ParamLimits

0xb37b,	// (0x000322b9) cell_ai5_widget_pane_g8

0xb38f,	// (0x000322cd) cell_ai5_widget_pane_g9_ParamLimits

0xb38f,	// (0x000322cd) cell_ai5_widget_pane_g9

0xb3a3,	// (0x000322e1) cell_ai5_widget_pane_g10_ParamLimits

0xb3a3,	// (0x000322e1) cell_ai5_widget_pane_g10

0x5c4b,	// (0x0002cb89) status_icon_pane_g1

0xb8fb,	// (0x00032839) bg_popup_sub_pane_cp13

0x5c53,	// (0x0002cb91) popup_keymap_window_t1

0x8eb9,	// (0x0002fdf7) control_pane_g6_ParamLimits

0x8eb9,	// (0x0002fdf7) control_pane_g6

0x8ec6,	// (0x0002fe04) control_pane_g7_ParamLimits

0x8ec6,	// (0x0002fe04) control_pane_g7

0x8ed3,	// (0x0002fe11) control_pane_g8_ParamLimits

0x8ed3,	// (0x0002fe11) control_pane_g8

0xb4c3,	// (0x00032401) dt_sta_controll_pane_ParamLimits

0xb4d0,	// (0x0003240e) dt_sta_indi_pane_ParamLimits

0xb4dd,	// (0x0003241b) dt_sta_title_pane_ParamLimits

0xbeae,	// (0x00032dec) aid_size_touch_scroll_bar_cale

0x05dc,	// (0x0002751a) popup_discreet_window_ParamLimits

0x05dc,	// (0x0002751a) popup_discreet_window

0x7976,	// (0x0002e8b4) popup_sk_window

0xd49f,	// (0x000343dd) bg_popup_sub_pane_cp28_ParamLimits

0xd49f,	// (0x000343dd) bg_popup_sub_pane_cp28

0x5c61,	// (0x0002cb9f) popup_discreet_window_g1_ParamLimits

0x5c61,	// (0x0002cb9f) popup_discreet_window_g1

0x5c81,	// (0x0002cbbf) popup_discreet_window_t1_ParamLimits

0x5c81,	// (0x0002cbbf) popup_discreet_window_t1

0x5c9f,	// (0x0002cbdd) popup_discreet_window_t2_ParamLimits

0x5c9f,	// (0x0002cbdd) popup_discreet_window_t2

0x0002,

0xfed0,	// (0x00036e0e) popup_discreet_window_t_ParamLimits

0xfed0,	// (0x00036e0e) popup_discreet_window_t

0x40d1,	// (0x0002b00f) popup_sk_window_g1

0x40db,	// (0x0002b019) popup_sk_window_g2

0x0001,

0xfed7,	// (0x00036e15) popup_sk_window_g

0x5cf1,	// (0x0002cc2f) popup_sk_window_t1

0x5cff,	// (0x0002cc3d) popup_sk_window_t1_copy1

0xb327,	// (0x00032265) cell_ai5_widget_pane_g2_ParamLimits

0xb44f,	// (0x0003238d) cell_ai5_widget_pane_t9_ParamLimits

0xb44f,	// (0x0003238d) cell_ai5_widget_pane_t9

0xb8fb,	// (0x00032839) main_fep_fshwr2_pane

0xb54c,	// (0x0003248a) aid_fshwr2_btn_pane

0xb554,	// (0x00032492) aid_fshwr2_syb_pane

0xb55c,	// (0x0003249a) aid_fshwr2_txt_pane

0xb564,	// (0x000324a2) fshwr2_func_candi_pane

0xb56e,	// (0x000324ac) fshwr2_hwr_syb_pane

0xb57c,	// (0x000324ba) fshwr2_icf_pane

0xb8fb,	// (0x00032839) fshwr2_icf_bg_pane

0xb586,	// (0x000324c4) fshwr2_icf_pane_t1_ParamLimits

0xb586,	// (0x000324c4) fshwr2_icf_pane_t1

0xec8c,	// (0x00035bca) fshwr2_func_candi_pane_g1

0x5d21,	// (0x0002cc5f) fshwr2_func_candi_row_pane_ParamLimits

0x5d21,	// (0x0002cc5f) fshwr2_func_candi_row_pane

0xb59e,	// (0x000324dc) cell_fshwr2_syb_pane_ParamLimits

0xb59e,	// (0x000324dc) cell_fshwr2_syb_pane

0xee33,	// (0x00035d71) fshwr2_hwr_syb_pane_g1_ParamLimits

0xee33,	// (0x00035d71) fshwr2_hwr_syb_pane_g1

0xb8fb,	// (0x00032839) bg_popup_call_pane_cp01

0x5d32,	// (0x0002cc70) fshwr2_func_candi_cell_pane_ParamLimits

0x5d32,	// (0x0002cc70) fshwr2_func_candi_cell_pane

0x5d63,	// (0x0002cca1) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x5d63,	// (0x0002cca1) fshwr2_func_candi_cell_bg_pane

0x5d7d,	// (0x0002ccbb) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x5d7d,	// (0x0002ccbb) fshwr2_func_candi_cell_pane_g1

0x5da5,	// (0x0002cce3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x5da5,	// (0x0002cce3) fshwr2_func_candi_cell_pane_t1

0xb8fb,	// (0x00032839) bg_button_pane_cp08

0xc99a,	// (0x000338d8) cell_fshwr2_syb_bg_pane

0xb5b8,	// (0x000324f6) cell_fshwr2_syb_bg_pane_g1

0xb5c0,	// (0x000324fe) cell_fshwr2_syb_bg_pane_t1

0xbf6c,	// (0x00032eaa) main_tmo_pane

0x9d26,	// (0x00030c64) uni_indicator_pane_g1_ParamLimits

0x9d3b,	// (0x00030c79) uni_indicator_pane_g2_ParamLimits

0x9d50,	// (0x00030c8e) uni_indicator_pane_g3_ParamLimits

0xdebf,	// (0x00034dfd) uni_indicator_pane_g4_ParamLimits

0xdebf,	// (0x00034dfd) uni_indicator_pane_g4

0xded3,	// (0x00034e11) uni_indicator_pane_g5_ParamLimits

0xded3,	// (0x00034e11) uni_indicator_pane_g5

0xdee7,	// (0x00034e25) uni_indicator_pane_g6_ParamLimits

0xdee7,	// (0x00034e25) uni_indicator_pane_g6

0xf955,	// (0x00036893) uni_indicator_pane_g_ParamLimits

0xa7ca,	// (0x00031708) popup_tmo_note_window_ParamLimits

0xa7ca,	// (0x00031708) popup_tmo_note_window

0xb8fb,	// (0x00032839) fshwr2_bg_pane

0x5d96,	// (0x0002ccd4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x5d96,	// (0x0002ccd4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfedc,	// (0x00036e1a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfedc,	// (0x00036e1a) fshwr2_func_candi_cell_pane_g

0xec8c,	// (0x00035bca) bg_popup_window_pane_cp01

0x5db8,	// (0x0002ccf6) bg_popup_window_pane_g1_cp01

0x5dc1,	// (0x0002ccff) bg_popup_window_pane_cp22_ParamLimits

0x5dc1,	// (0x0002ccff) bg_popup_window_pane_cp22

0x5dcf,	// (0x0002cd0d) listscroll_tmo_link_pane_ParamLimits

0x5dcf,	// (0x0002cd0d) listscroll_tmo_link_pane

0x5e0f,	// (0x0002cd4d) popup_tmo_note_window_g1_ParamLimits

0x5e0f,	// (0x0002cd4d) popup_tmo_note_window_g1

0x5e1c,	// (0x0002cd5a) tmo_note_info_pane_ParamLimits

0x5e1c,	// (0x0002cd5a) tmo_note_info_pane

0xb5cf,	// (0x0003250d) list_tmo_note_info_pane_g1_ParamLimits

0xb5cf,	// (0x0003250d) list_tmo_note_info_pane_g1

0x5e36,	// (0x0002cd74) list_tmo_note_info_pane_g2_ParamLimits

0x5e36,	// (0x0002cd74) list_tmo_note_info_pane_g2

0x0001,

0xfee1,	// (0x00036e1f) list_tmo_note_info_pane_g_ParamLimits

0xfee1,	// (0x00036e1f) list_tmo_note_info_pane_g

0x5e52,	// (0x0002cd90) list_tmo_note_info_text_pane_ParamLimits

0x5e52,	// (0x0002cd90) list_tmo_note_info_text_pane

0x5e94,	// (0x0002cdd2) list_tmo_link_pane

0x5ea1,	// (0x0002cddf) scroll_pane_cp20

0x5eae,	// (0x0002cdec) list_single_tmo_link_pane_ParamLimits

0x5eae,	// (0x0002cdec) list_single_tmo_link_pane

0x5ebe,	// (0x0002cdfc) list_single_tmo_link_pane_t1

0x5ecc,	// (0x0002ce0a) list_tmo_note_info_text_pane_t1_ParamLimits

0x5ecc,	// (0x0002ce0a) list_tmo_note_info_text_pane_t1

0x8bc6,	// (0x0002fb04) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8bc6,	// (0x0002fb04) aid_size_touch_scroll_bar_cp01

0x7e77,	// (0x0002edb5) aid_size_touch_slider_marker

0x7966,	// (0x0002e8a4) popup_settings_window_ParamLimits

0x7966,	// (0x0002e8a4) popup_settings_window

0x4906,	// (0x0002b844) popup_candi_list_indi_window

0xcd20,	// (0x00033c5e) aid_touch_navi_pane_ParamLimits

0x38a9,	// (0x0002a7e7) rs_clock_indi_pane

0x38b2,	// (0x0002a7f0) sctrl_sk_bottom_pane_ParamLimits

0x38c3,	// (0x0002a801) sctrl_sk_top_pane_ParamLimits

0x39c9,	// (0x0002a907) popup_fep_tooltip_window

0x5ab0,	// (0x0002c9ee) aid_size_cell_widget_grid_ParamLimits

0xb31b,	// (0x00032259) cell_ai5_widget_pane_g1_ParamLimits

0xb31b,	// (0x00032259) cell_ai5_widget_pane_g1

0xb363,	// (0x000322a1) cell_ai5_widget_pane_g6_ParamLimits

0xb36f,	// (0x000322ad) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe5f,	// (0x00036d9d) cell_ai5_widget_pane_g_ParamLimits

0xfe5f,	// (0x00036d9d) cell_ai5_widget_pane_g

0xb473,	// (0x000323b1) cell_ai5_widget_pane_t10_ParamLimits

0xb473,	// (0x000323b1) cell_ai5_widget_pane_t10

0xb485,	// (0x000323c3) grid_ai5_widget_pane_ParamLimits

0x5b67,	// (0x0002caa5) cell_contacts_ai5_widget_pane_ParamLimits

0x5b67,	// (0x0002caa5) cell_contacts_ai5_widget_pane

0x5cb4,	// (0x0002cbf2) popup_discreet_window_t3_ParamLimits

0x5cb4,	// (0x0002cbf2) popup_discreet_window_t3

0x5d0d,	// (0x0002cc4b) popup_fshwr2_char_preview_window_ParamLimits

0x5d0d,	// (0x0002cc4b) popup_fshwr2_char_preview_window

0xb5e6,	// (0x00032524) tmo_note_info_pane_t1

0xb5fb,	// (0x00032539) tmo_note_info_pane_t2

0xb612,	// (0x00032550) tmo_note_info_pane_t3

0x5e70,	// (0x0002cdae) tmo_note_info_pane_t4

0x5e82,	// (0x0002cdc0) tmo_note_info_pane_t5

0x0004,

0xfee6,	// (0x00036e24) tmo_note_info_pane_t

0x5e94,	// (0x0002cdd2) list_tmo_link_pane_ParamLimits

0x5ea1,	// (0x0002cddf) scroll_pane_cp20_ParamLimits

0xb8fb,	// (0x00032839) bg_popup_fep_char_preview_window_cp01

0x5ee5,	// (0x0002ce23) popup_fshwr2_char_preview_window_t1

0x5ef3,	// (0x0002ce31) popup_candi_list_indi_window_g1

0x5efc,	// (0x0002ce3a) bg_cell_contacts_ai5_widget_pane

0x5f08,	// (0x0002ce46) cell_contacts_ai5_widget_pane_g1

0x5f1c,	// (0x0002ce5a) cell_contacts_ai5_widget_pane_g2

0x5f2b,	// (0x0002ce69) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfef1,	// (0x00036e2f) cell_contacts_ai5_widget_pane_g

0x5f3e,	// (0x0002ce7c) cell_contacts_ai5_widget_pane_t1

0xbf6c,	// (0x00032eaa) highlight_cell_shortcut_ai5_widget_pane_cp01

0xb68c,	// (0x000325ca) settings_container_pane

0xc99a,	// (0x000338d8) listscroll_set_pane_copy1

0xe6a9,	// (0x000355e7) scroll_pane_cp121_copy1

0x5f53,	// (0x0002ce91) set_content_pane_copy1

0xb698,	// (0x000325d6) aid_height_set_list_copy1_ParamLimits

0xb698,	// (0x000325d6) aid_height_set_list_copy1

0xda79,	// (0x000349b7) aid_size_parent_copy1_ParamLimits

0xda79,	// (0x000349b7) aid_size_parent_copy1

0xb6a4,	// (0x000325e2) button_value_adjust_pane_cp6_copy1_ParamLimits

0xb6a4,	// (0x000325e2) button_value_adjust_pane_cp6_copy1

0xc0cd,	// (0x0003300b) list_highlight_pane_cp2_copy1_ParamLimits

0xc0cd,	// (0x0003300b) list_highlight_pane_cp2_copy1

0xb6b8,	// (0x000325f6) list_set_pane_copy1_ParamLimits

0xb6b8,	// (0x000325f6) list_set_pane_copy1

0xb627,	// (0x00032565) main_pane_set_t1_copy1_ParamLimits

0xb627,	// (0x00032565) main_pane_set_t1_copy1

0xb661,	// (0x0003259f) main_pane_set_t2_copy1_ParamLimits

0xb661,	// (0x0003259f) main_pane_set_t2_copy1

0xb765,	// (0x000326a3) main_pane_set_t3_copy1

0xb773,	// (0x000326b1) main_pane_set_t4_copy1

0xb680,	// (0x000325be) set_content_pane_g1_copy1_ParamLimits

0xb680,	// (0x000325be) set_content_pane_g1_copy1

0xb781,	// (0x000326bf) setting_code_pane_copy1

0x5f5b,	// (0x0002ce99) setting_slider_graphic_pane_copy1

0x5f5b,	// (0x0002ce99) setting_slider_pane_copy1

0x5f65,	// (0x0002cea3) setting_text_pane_copy1

0x5f6f,	// (0x0002cead) setting_volume_pane_copy1

0xb78b,	// (0x000326c9) settings_code_pane_cp2_copy1

0xb793,	// (0x000326d1) settings_code_pane_cp_copy1_ParamLimits

0xb793,	// (0x000326d1) settings_code_pane_cp_copy1

0xb7a7,	// (0x000326e5) volume_set_pane_copy1

0xb7af,	// (0x000326ed) volume_set_pane_g10_copy1

0xb7b7,	// (0x000326f5) volume_set_pane_g1_copy1

0xb7bf,	// (0x000326fd) volume_set_pane_g2_copy1

0xb7c7,	// (0x00032705) volume_set_pane_g3_copy1

0xb7cf,	// (0x0003270d) volume_set_pane_g4_copy1

0xb7d7,	// (0x00032715) volume_set_pane_g5_copy1

0xb7df,	// (0x0003271d) volume_set_pane_g6_copy1

0xb7e7,	// (0x00032725) volume_set_pane_g7_copy1

0xb7ef,	// (0x0003272d) volume_set_pane_g8_copy1

0xb7f7,	// (0x00032735) volume_set_pane_g9_copy1

0xb96b,	// (0x000328a9) bg_set_opt_pane_cp_copy1_ParamLimits

0xb96b,	// (0x000328a9) bg_set_opt_pane_cp_copy1

0x5f78,	// (0x0002ceb6) setting_slider_pane_t1_copy1_ParamLimits

0x5f78,	// (0x0002ceb6) setting_slider_pane_t1_copy1

0xb7ff,	// (0x0003273d) setting_slider_pane_t2_copy1_ParamLimits

0xb7ff,	// (0x0003273d) setting_slider_pane_t2_copy1

0xb819,	// (0x00032757) setting_slider_pane_t3_copy1_ParamLimits

0xb819,	// (0x00032757) setting_slider_pane_t3_copy1

0xb831,	// (0x0003276f) slider_set_pane_copy1_ParamLimits

0xb831,	// (0x0003276f) slider_set_pane_copy1

0xbfdc,	// (0x00032f1a) set_opt_bg_pane_g1_copy2

0xbfe4,	// (0x00032f22) set_opt_bg_pane_g2_copy2

0x5f96,	// (0x0002ced4) set_opt_bg_pane_g3_copy2

0xbff4,	// (0x00032f32) set_opt_bg_pane_g4_copy2

0xbffc,	// (0x00032f3a) set_opt_bg_pane_g5_copy2

0xc004,	// (0x00032f42) set_opt_bg_pane_g6_copy2

0xb847,	// (0x00032785) set_opt_bg_pane_g7_copy2

0x5fa0,	// (0x0002cede) set_opt_bg_pane_g8_copy2

0x5faa,	// (0x0002cee8) set_opt_bg_pane_g9_copy2

0x40e5,	// (0x0002b023) aid_size_touch_slider_mark_copy1_ParamLimits

0x40e5,	// (0x0002b023) aid_size_touch_slider_mark_copy1

0x5fb4,	// (0x0002cef2) slider_set_pane_g1_copy1

0x40f9,	// (0x0002b037) slider_set_pane_g2_copy1

0x2124,	// (0x00029062) slider_set_pane_g3_copy1_ParamLimits

0x2124,	// (0x00029062) slider_set_pane_g3_copy1

0x2138,	// (0x00029076) slider_set_pane_g4_copy1_ParamLimits

0x2138,	// (0x00029076) slider_set_pane_g4_copy1

0x2150,	// (0x0002908e) slider_set_pane_g5_copy1_ParamLimits

0x2150,	// (0x0002908e) slider_set_pane_g5_copy1

0x2124,	// (0x00029062) slider_set_pane_g6_copy1_ParamLimits

0x2124,	// (0x00029062) slider_set_pane_g6_copy1

0x87fe,	// (0x0002f73c) slider_set_pane_g7_copy1_ParamLimits

0x87fe,	// (0x0002f73c) slider_set_pane_g7_copy1

0xb90f,	// (0x0003284d) bg_set_opt_pane_cp2_copy1

0x5fbd,	// (0x0002cefb) setting_slider_graphic_pane_g1_copy1

0xb84f,	// (0x0003278d) setting_slider_graphic_pane_t1_copy1

0xb85f,	// (0x0003279d) setting_slider_graphic_pane_t2_copy1

0xb86f,	// (0x000327ad) slider_set_pane_cp_copy1

0x5fce,	// (0x0002cf0c) input_focus_pane_cp1_copy1

0x5fd7,	// (0x0002cf15) list_set_text_pane_copy1

0x5fdf,	// (0x0002cf1d) setting_text_pane_g1_copy1

0x4117,	// (0x0002b055) set_text_pane_t1_copy1

0x5fce,	// (0x0002cf0c) input_focus_pane_cp2_copy1

0x5fdf,	// (0x0002cf1d) setting_code_pane_g1_copy1

0xb877,	// (0x000327b5) setting_code_pane_t1_copy1

0x8bb4,	// (0x0002faf2) list_set_graphic_pane_copy1

0xb90f,	// (0x0003284d) bg_set_opt_pane_cp4_copy1

0x8dc5,	// (0x0002fd03) list_set_graphic_pane_g1_copy1_ParamLimits

0x8dc5,	// (0x0002fd03) list_set_graphic_pane_g1_copy1

0xb885,	// (0x000327c3) list_set_graphic_pane_g2_copy1

0x8ddd,	// (0x0002fd1b) list_set_graphic_pane_t1_copy1_ParamLimits

0x8ddd,	// (0x0002fd1b) list_set_graphic_pane_t1_copy1

0xec8c,	// (0x00035bca) rs_clock_indi_pane_g1

0x5fe8,	// (0x0002cf26) rs_clock_indi_pane_t1

0x5c04,	// (0x0002cb42) rs_indi_pane

0x5ff6,	// (0x0002cf34) rs_indi_pane_g1

0x5fff,	// (0x0002cf3d) rs_indi_pane_g2

0x6008,	// (0x0002cf46) rs_indi_pane_g3

0x0002,

0xfef8,	// (0x00036e36) rs_indi_pane_g

0xc99a,	// (0x000338d8) bg_popup_preview_window_pane_cp03

0x6011,	// (0x0002cf4f) popup_fep_tooltip_window_t1

0x2fd9,	// (0x00029f17) popup_note2_window_g2_ParamLimits

0x2fd9,	// (0x00029f17) popup_note2_window_g2

0x0001,

0xfc96,	// (0x00036bd4) popup_note2_window_g_ParamLimits

0xfc96,	// (0x00036bd4) popup_note2_window_g

0x34f6,	// (0x0002a434) bg_popup_sub_pane_cp11_ParamLimits

0x3503,	// (0x0002a441) cell_ai3_links_pane_g1_ParamLimits

0x351a,	// (0x0002a458) cell_ai3_links_pane_t1

0x4117,	// (0x0002b055) set_text_pane_t1_copy1_ParamLimits

0xc8ab,	// (0x000337e9) cell_graphic_popup_pane_cp2_ParamLimits

0xc8ab,	// (0x000337e9) cell_graphic_popup_pane_cp2

0x601f,	// (0x0002cf5d) cell_graphic_popup_pane_g1_cp2

0xbcc1,	// (0x00032bff) cell_graphic_popup_pane_g2_cp2

0x6027,	// (0x0002cf65) cell_graphic_popup_pane_g3_cp2

0x602f,	// (0x0002cf6d) cell_graphic_popup_pane_t2_cp2

0xbcd2,	// (0x00032c10) grid_highlight_pane_cp3_cp2

0xc277,	// (0x000331b5) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xbf6c,	// (0x00032eaa) main_tmo_pane_ParamLimits

0xa7be,	// (0x000316fc) popup_tmo_big_image_note_window

0xb30b,	// (0x00032249) cell_ai5_widget_list_pane

0xb313,	// (0x00032251) cell_ai5_widget_lrg_icon_pane

0xb5e6,	// (0x00032524) tmo_note_info_pane_t1_ParamLimits

0xb5fb,	// (0x00032539) tmo_note_info_pane_t2_ParamLimits

0xb612,	// (0x00032550) tmo_note_info_pane_t3_ParamLimits

0x5e70,	// (0x0002cdae) tmo_note_info_pane_t4_ParamLimits

0x5e82,	// (0x0002cdc0) tmo_note_info_pane_t5_ParamLimits

0xfee6,	// (0x00036e24) tmo_note_info_pane_t_ParamLimits

0xb68c,	// (0x000325ca) settings_container_pane_ParamLimits

0x5fc6,	// (0x0002cf04) indicator_popup_pane_cp5

0x5fc6,	// (0x0002cf04) indicator_popup_pane_cp6

0x8bb4,	// (0x0002faf2) list_set_graphic_pane_copy1_ParamLimits

0xb8fb,	// (0x00032839) bg_popup_window_pane_cp23

0x603d,	// (0x0002cf7b) popup_tmo_big_image_note_window_g1

0x6047,	// (0x0002cf85) popup_tmo_big_image_note_window_t1

0x6057,	// (0x0002cf95) popup_tmo_big_image_note_window_t2

0x6067,	// (0x0002cfa5) popup_tmo_big_image_note_window_t3

0x0002,

0xfeff,	// (0x00036e3d) popup_tmo_big_image_note_window_t

0xb88d,	// (0x000327cb) cell_ai5_widget_lrg_icon_pane_g1

0xb895,	// (0x000327d3) cell_ai5_widget_lrg_icon_pane_t1

0xb8a3,	// (0x000327e1) cell_ai5_widget_list_row_pane_ParamLimits

0xb8a3,	// (0x000327e1) cell_ai5_widget_list_row_pane

0xb8bc,	// (0x000327fa) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xb8bc,	// (0x000327fa) cell_ai5_widget_list_row_pane_g1

0xb8c9,	// (0x00032807) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xb8c9,	// (0x00032807) cell_ai5_widget_list_row_pane_t1

0xb8e1,	// (0x0003281f) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xb8e1,	// (0x0003281f) cell_ai5_widget_list_row_pane_t2

0x0001,

0xff06,	// (0x00036e44) cell_ai5_widget_list_row_pane_t_ParamLimits

0xff06,	// (0x00036e44) cell_ai5_widget_list_row_pane_t

0x0503,	// (0x00027441) main_fep_vtchi_ss_pane

0x6077,	// (0x0002cfb5) popup_fep_char_pre_window

0x607f,	// (0x0002cfbd) popup_fep_ituss_window

0x608a,	// (0x0002cfc8) popup_fep_vkbss_window

0x6093,	// (0x0002cfd1) grid_vkbss_keypad_pane_ParamLimits

0x6093,	// (0x0002cfd1) grid_vkbss_keypad_pane

0x60a3,	// (0x0002cfe1) ituss_keypad_pane

0x60ab,	// (0x0002cfe9) aid_vkbss_key_offset_ParamLimits

0x60ab,	// (0x0002cfe9) aid_vkbss_key_offset

0x60ba,	// (0x0002cff8) cell_vkbss_key_pane_ParamLimits

0x60ba,	// (0x0002cff8) cell_vkbss_key_pane

0x60d0,	// (0x0002d00e) bg_cell_vkbss_key_g1_ParamLimits

0x60d0,	// (0x0002d00e) bg_cell_vkbss_key_g1

0x60dc,	// (0x0002d01a) cell_vkbss_key_3p_pane_ParamLimits

0x60dc,	// (0x0002d01a) cell_vkbss_key_3p_pane

0x60f6,	// (0x0002d034) cell_vkbss_key_g1_ParamLimits

0x60f6,	// (0x0002d034) cell_vkbss_key_g1

0x6110,	// (0x0002d04e) cell_vkbss_key_t1_ParamLimits

0x6110,	// (0x0002d04e) cell_vkbss_key_t1

0x613b,	// (0x0002d079) cell_ituss_key_pane_ParamLimits

0x613b,	// (0x0002d079) cell_ituss_key_pane

0x614a,	// (0x0002d088) bg_cell_ituss_key_g1_ParamLimits

0x614a,	// (0x0002d088) bg_cell_ituss_key_g1

0x6156,	// (0x0002d094) cell_ituss_key_pane_g1_ParamLimits

0x6156,	// (0x0002d094) cell_ituss_key_pane_g1

0x6162,	// (0x0002d0a0) cell_ituss_key_pane_g2_ParamLimits

0x6162,	// (0x0002d0a0) cell_ituss_key_pane_g2

0x0001,

0xff0b,	// (0x00036e49) cell_ituss_key_pane_g_ParamLimits

0xff0b,	// (0x00036e49) cell_ituss_key_pane_g

0x6175,	// (0x0002d0b3) cell_ituss_key_t1_ParamLimits

0x6175,	// (0x0002d0b3) cell_ituss_key_t1

0x6193,	// (0x0002d0d1) cell_ituss_key_t2_ParamLimits

0x6193,	// (0x0002d0d1) cell_ituss_key_t2

0x61b2,	// (0x0002d0f0) cell_ituss_key_t3_ParamLimits

0x61b2,	// (0x0002d0f0) cell_ituss_key_t3

0x61d1,	// (0x0002d10f) cell_ituss_key_t4_ParamLimits

0x61d1,	// (0x0002d10f) cell_ituss_key_t4

0x0003,

0xff10,	// (0x00036e4e) cell_ituss_key_t_ParamLimits

0xff10,	// (0x00036e4e) cell_ituss_key_t

0x61f0,	// (0x0002d12e) cell_vkbss_key_3p_pane_g1

0x61f8,	// (0x0002d136) cell_vkbss_key_3p_pane_g2

0x6200,	// (0x0002d13e) cell_vkbss_key_3p_pane_g3

0x0002,

0xff19,	// (0x00036e57) cell_vkbss_key_3p_pane_g

0xb8fb,	// (0x00032839) bg_popup_fep_char_preview_window_cp02

0x6208,	// (0x0002d146) popup_fep_char_pre_window_t1

0xb301,	// (0x0003223f) main_ai5_sk_pane

0x5efc,	// (0x0002ce3a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x5f08,	// (0x0002ce46) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x5f1c,	// (0x0002ce5a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x5f2b,	// (0x0002ce69) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfef1,	// (0x00036e2f) cell_contacts_ai5_widget_pane_g_ParamLimits

0x5f3e,	// (0x0002ce7c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xbf6c,	// (0x00032eaa) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xbfa6,	// (0x00032ee4) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small

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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004acb6 };

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
0x7809,	// (0x000524bf) Screen

0x781d,	// (0x000524d3) application_window_ParamLimits

0x781d,	// (0x000524d3) application_window

0x7837,	// (0x000524ed) screen_g1

0x48d3,	// (0x0004f589) area_bottom_pane_ParamLimits

0x48d3,	// (0x0004f589) area_bottom_pane

0x4993,	// (0x0004f649) area_top_pane_ParamLimits

0x4993,	// (0x0004f649) area_top_pane

0x4a31,	// (0x0004f6e7) main_pane_ParamLimits

0x4a31,	// (0x0004f6e7) main_pane

0x7841,	// (0x000524f7) misc_graphics

0x98f3,	// (0x000545a9) battery_pane_ParamLimits

0x98f3,	// (0x000545a9) battery_pane

0xa5b9,	// (0x0005526f) bg_status_flat_pane_g8

0xa5c1,	// (0x00055277) bg_status_flat_pane_g9

0x99b5,	// (0x0005466b) context_pane_ParamLimits

0x99b5,	// (0x0005466b) context_pane

0x9acb,	// (0x00054781) navi_pane_ParamLimits

0x9acb,	// (0x00054781) navi_pane

0x9b4f,	// (0x00054805) signal_pane_ParamLimits

0x9b4f,	// (0x00054805) signal_pane

0x0008,

0xf87e,	// (0x0005a534) bg_status_flat_pane_g

0x9bbc,	// (0x00054872) status_pane_g1_ParamLimits

0x9bbc,	// (0x00054872) status_pane_g1

0x9bd0,	// (0x00054886) status_pane_g2_ParamLimits

0x9bd0,	// (0x00054886) status_pane_g2

0x9bdc,	// (0x00054892) status_pane_g3_ParamLimits

0x9bdc,	// (0x00054892) status_pane_g3

0x0004,

0xf7a5,	// (0x0005a45b) status_pane_g_ParamLimits

0xf7a5,	// (0x0005a45b) status_pane_g

0x9c10,	// (0x000548c6) title_pane_ParamLimits

0x9c10,	// (0x000548c6) title_pane

0x9c4d,	// (0x00054903) uni_indicator_pane_ParamLimits

0x9c4d,	// (0x00054903) uni_indicator_pane

0x9817,	// (0x000544cd) bg_list_pane_ParamLimits

0x9817,	// (0x000544cd) bg_list_pane

0x7d4b,	// (0x00052a01) find_pane

0x9837,	// (0x000544ed) listscroll_app_pane_ParamLimits

0x9837,	// (0x000544ed) listscroll_app_pane

0x9843,	// (0x000544f9) listscroll_form_pane

0x5a3d,	// (0x000506f3) listscroll_gen_pane_ParamLimits

0x5a3d,	// (0x000506f3) listscroll_gen_pane

0x5a51,	// (0x00050707) listscroll_set_pane

0x8a71,	// (0x00053727) main_idle_act_pane

0x951f,	// (0x000541d5) main_idle_trad_pane

0x951f,	// (0x000541d5) main_list_empty_pane

0x985d,	// (0x00054513) main_midp_pane

0x9869,	// (0x0005451f) main_pane_g1_ParamLimits

0x9869,	// (0x0005451f) main_pane_g1

0x5a67,	// (0x0005071d) popup_ai_message_window_ParamLimits

0x5a67,	// (0x0005071d) popup_ai_message_window

0x5b15,	// (0x000507cb) popup_fep_china_uni_window_ParamLimits

0x5b15,	// (0x000507cb) popup_fep_china_uni_window

0x5b71,	// (0x00050827) popup_fep_japan_candidate_window_ParamLimits

0x5b71,	// (0x00050827) popup_fep_japan_candidate_window

0x5b91,	// (0x00050847) popup_fep_japan_predictive_window_ParamLimits

0x5b91,	// (0x00050847) popup_fep_japan_predictive_window

0x5bc1,	// (0x00050877) popup_find_window

0x5bce,	// (0x00050884) popup_grid_graphic_window_ParamLimits

0x5bce,	// (0x00050884) popup_grid_graphic_window

0x5bf8,	// (0x000508ae) popup_large_graphic_colour_window

0x5c1e,	// (0x000508d4) popup_menu_window_ParamLimits

0x5c1e,	// (0x000508d4) popup_menu_window

0x5dd6,	// (0x00050a8c) popup_note_image_window

0x5dc2,	// (0x00050a78) popup_note_wait_window_ParamLimits

0x5dc2,	// (0x00050a78) popup_note_wait_window

0x5dc2,	// (0x00050a78) popup_note_window_ParamLimits

0x5dc2,	// (0x00050a78) popup_note_window

0x5e2c,	// (0x00050ae2) popup_query_code_window_ParamLimits

0x5e2c,	// (0x00050ae2) popup_query_code_window

0x5e40,	// (0x00050af6) popup_query_data_code_window_ParamLimits

0x5e40,	// (0x00050af6) popup_query_data_code_window

0x5e5d,	// (0x00050b13) popup_query_data_window_ParamLimits

0x5e5d,	// (0x00050b13) popup_query_data_window

0x5e79,	// (0x00050b2f) popup_query_sat_info_window_ParamLimits

0x5e79,	// (0x00050b2f) popup_query_sat_info_window

0x5eb2,	// (0x00050b68) popup_snote_single_graphic_window_ParamLimits

0x5eb2,	// (0x00050b68) popup_snote_single_graphic_window

0x5eb2,	// (0x00050b68) popup_snote_single_text_window_ParamLimits

0x5eb2,	// (0x00050b68) popup_snote_single_text_window

0x5ec7,	// (0x00050b7d) popup_sub_window_general

0x5ff7,	// (0x00050cad) popup_window_general_ParamLimits

0x5ff7,	// (0x00050cad) popup_window_general

0x9877,	// (0x0005452d) power_save_pane

0x58d9,	// (0x0005058f) control_pane_g1_ParamLimits

0x58d9,	// (0x0005058f) control_pane_g1

0x5900,	// (0x000505b6) control_pane_g2_ParamLimits

0x5900,	// (0x000505b6) control_pane_g2

0x97da,	// (0x00054490) control_pane_g3_ParamLimits

0x97da,	// (0x00054490) control_pane_g3

0x0007,

0xf78d,	// (0x0005a443) control_pane_g_ParamLimits

0xf78d,	// (0x0005a443) control_pane_g

0x594a,	// (0x00050600) control_pane_t1_ParamLimits

0x594a,	// (0x00050600) control_pane_t1

0x5996,	// (0x0005064c) control_pane_t2_ParamLimits

0x5996,	// (0x0005064c) control_pane_t2

0x0002,

0xf79e,	// (0x0005a454) control_pane_t_ParamLimits

0xf79e,	// (0x0005a454) control_pane_t

0x96ff,	// (0x000543b5) navi_navi_volume_pane_cp1

0x9707,	// (0x000543bd) status_small_icon_pane

0x970f,	// (0x000543c5) status_small_pane_g1_ParamLimits

0x970f,	// (0x000543c5) status_small_pane_g1

0x9743,	// (0x000543f9) status_small_pane_g2_ParamLimits

0x9743,	// (0x000543f9) status_small_pane_g2

0x974f,	// (0x00054405) status_small_pane_g3_ParamLimits

0x974f,	// (0x00054405) status_small_pane_g3

0x975b,	// (0x00054411) status_small_pane_g4_ParamLimits

0x975b,	// (0x00054411) status_small_pane_g4

0x9767,	// (0x0005441d) status_small_pane_g5_ParamLimits

0x9767,	// (0x0005441d) status_small_pane_g5

0x9775,	// (0x0005442b) status_small_pane_g6_ParamLimits

0x9775,	// (0x0005442b) status_small_pane_g6

0x0007,

0xf77c,	// (0x0005a432) status_small_pane_g_ParamLimits

0xf77c,	// (0x0005a432) status_small_pane_g

0x97a4,	// (0x0005445a) status_small_pane_t1

0x97c6,	// (0x0005447c) status_small_wait_pane_ParamLimits

0x97c6,	// (0x0005447c) status_small_wait_pane

0x8f91,	// (0x00053c47) aid_levels_signal_ParamLimits

0x8f91,	// (0x00053c47) aid_levels_signal

0x8fa3,	// (0x00053c59) signal_pane_g1_ParamLimits

0x8fa3,	// (0x00053c59) signal_pane_g1

0x8fb8,	// (0x00053c6e) signal_pane_g2_ParamLimits

0x8fb8,	// (0x00053c6e) signal_pane_g2

0x0003,

0xf70d,	// (0x0005a3c3) signal_pane_g_ParamLimits

0xf70d,	// (0x0005a3c3) signal_pane_g

0x8ff3,	// (0x00053ca9) context_pane_g1

0x784b,	// (0x00052501) title_pane_g1

0x7881,	// (0x00052537) title_pane_t1

0x78e9,	// (0x0005259f) title_pane_t2

0x790f,	// (0x000525c5) title_pane_t3

0x0002,

0xf557,	// (0x0005a20d) title_pane_t

0x9c65,	// (0x0005491b) aid_levels_battery_ParamLimits

0x9c65,	// (0x0005491b) aid_levels_battery

0x9c79,	// (0x0005492f) battery_pane_g1_ParamLimits

0x9c79,	// (0x0005492f) battery_pane_g1

0x9c8f,	// (0x00054945) battery_pane_g2_ParamLimits

0x9c8f,	// (0x00054945) battery_pane_g2

0x0001,

0xf7b0,	// (0x0005a466) battery_pane_g_ParamLimits

0xf7b0,	// (0x0005a466) battery_pane_g

0xaefb,	// (0x00055bb1) uni_indicator_pane_g1

0xaf11,	// (0x00055bc7) uni_indicator_pane_g2

0xaf27,	// (0x00055bdd) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x0005a5dc) uni_indicator_pane_g

0x9391,	// (0x00054047) navi_icon_pane_ParamLimits

0x9391,	// (0x00054047) navi_icon_pane

0x92cf,	// (0x00053f85) navi_midp_pane

0x93ad,	// (0x00054063) navi_navi_pane

0x93b7,	// (0x0005406d) navi_text_pane_ParamLimits

0x93b7,	// (0x0005406d) navi_text_pane

0x7837,	// (0x000524ed) status_small_wait_pane_g1

0x843b,	// (0x000530f1) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x0005a5d7) status_small_wait_pane_g

0xac20,	// (0x000558d6) navi_navi_icon_text_pane

0xac28,	// (0x000558de) navi_navi_pane_g1_ParamLimits

0xac28,	// (0x000558de) navi_navi_pane_g1

0xac3a,	// (0x000558f0) navi_navi_pane_g2_ParamLimits

0xac3a,	// (0x000558f0) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x0005a5a5) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x0005a5a5) navi_navi_pane_g

0xac4c,	// (0x00055902) navi_navi_tabs_pane

0xac55,	// (0x0005590b) navi_navi_text_pane

0xac20,	// (0x000558d6) navi_navi_volume_pane

0xabfc,	// (0x000558b2) navi_text_pane_t1

0xabf0,	// (0x000558a6) navi_icon_pane_g1

0xab43,	// (0x000557f9) navi_navi_text_pane_t1

0x639f,	// (0x00051055) navi_navi_volume_pane_g1

0x63a7,	// (0x0005105d) volume_small_pane

0xaaa9,	// (0x0005575f) navi_navi_icon_text_pane_g1

0xaab1,	// (0x00055767) navi_navi_icon_text_pane_t1

0x93ad,	// (0x00054063) navi_tabs_2_long_pane

0x93ad,	// (0x00054063) navi_tabs_2_pane

0x93ad,	// (0x00054063) navi_tabs_3_long_pane

0x93ad,	// (0x00054063) navi_tabs_3_pane

0x93ad,	// (0x00054063) navi_tabs_4_pane

0x637f,	// (0x00051035) tabs_2_active_pane_ParamLimits

0x637f,	// (0x00051035) tabs_2_active_pane

0x638f,	// (0x00051045) tabs_2_passive_pane_ParamLimits

0x638f,	// (0x00051045) tabs_2_passive_pane

0x634d,	// (0x00051003) tabs_3_active_pane_ParamLimits

0x634d,	// (0x00051003) tabs_3_active_pane

0x635d,	// (0x00051013) tabs_3_passive_pane_ParamLimits

0x635d,	// (0x00051013) tabs_3_passive_pane

0x636e,	// (0x00051024) tabs_3_passive_pane_cp_ParamLimits

0x636e,	// (0x00051024) tabs_3_passive_pane_cp

0x6309,	// (0x00050fbf) tabs_4_active_pane_ParamLimits

0x6309,	// (0x00050fbf) tabs_4_active_pane

0x631a,	// (0x00050fd0) tabs_4_passive_pane_ParamLimits

0x631a,	// (0x00050fd0) tabs_4_passive_pane

0x632b,	// (0x00050fe1) tabs_4_passive_pane_cp_ParamLimits

0x632b,	// (0x00050fe1) tabs_4_passive_pane_cp

0x633c,	// (0x00050ff2) tabs_4_passive_pane_cp2_ParamLimits

0x633c,	// (0x00050ff2) tabs_4_passive_pane_cp2

0x62e5,	// (0x00050f9b) tabs_2_long_active_pane_ParamLimits

0x62e5,	// (0x00050f9b) tabs_2_long_active_pane

0x62f7,	// (0x00050fad) tabs_2_long_passive_pane_ParamLimits

0x62f7,	// (0x00050fad) tabs_2_long_passive_pane

0x62a6,	// (0x00050f5c) tabs_3_long_active_pane_ParamLimits

0x62a6,	// (0x00050f5c) tabs_3_long_active_pane

0x62b9,	// (0x00050f6f) tabs_3_long_passive_pane_ParamLimits

0x62b9,	// (0x00050f6f) tabs_3_long_passive_pane

0x62d2,	// (0x00050f88) tabs_3_long_passive_pane_cp_ParamLimits

0x62d2,	// (0x00050f88) tabs_3_long_passive_pane_cp

0x624c,	// (0x00050f02) volume_small_pane_g1

0x6255,	// (0x00050f0b) volume_small_pane_g2

0x625e,	// (0x00050f14) volume_small_pane_g3

0x6267,	// (0x00050f1d) volume_small_pane_g4

0x6270,	// (0x00050f26) volume_small_pane_g5

0x6279,	// (0x00050f2f) volume_small_pane_g6

0x6282,	// (0x00050f38) volume_small_pane_g7

0x628b,	// (0x00050f41) volume_small_pane_g8

0x6294,	// (0x00050f4a) volume_small_pane_g9

0x629d,	// (0x00050f53) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x0005a571) volume_small_pane_g

0x7921,	// (0x000525d7) bg_active_tab_pane_cp2_ParamLimits

0x7921,	// (0x000525d7) bg_active_tab_pane_cp2

0x792f,	// (0x000525e5) tabs_3_active_pane_g1

0x7937,	// (0x000525ed) tabs_3_active_pane_t1

0x7921,	// (0x000525d7) bg_passive_tab_pane_cp2_ParamLimits

0x7921,	// (0x000525d7) bg_passive_tab_pane_cp2

0x792f,	// (0x000525e5) tabs_3_passive_pane_g1

0x7937,	// (0x000525ed) tabs_3_passive_pane_t1

0x7921,	// (0x000525d7) bg_active_tab_pane_cp3_ParamLimits

0x7921,	// (0x000525d7) bg_active_tab_pane_cp3

0x7949,	// (0x000525ff) tabs_4_active_pane_g1

0x7951,	// (0x00052607) tabs_4_active_pane_t1

0x7921,	// (0x000525d7) bg_passive_tab_pane_cp3_ParamLimits

0x7921,	// (0x000525d7) bg_passive_tab_pane_cp3

0x7949,	// (0x000525ff) tabs_4_1_passive_pane_g1

0x7951,	// (0x00052607) tabs_4_1_passive_pane_t1

0x985d,	// (0x00054513) list_highlight_pane_cp2

0xb16f,	// (0x00055e25) list_set_pane_ParamLimits

0xb16f,	// (0x00055e25) list_set_pane

0xb215,	// (0x00055ecb) main_pane_set_t1_ParamLimits

0xb215,	// (0x00055ecb) main_pane_set_t1

0xb235,	// (0x00055eeb) main_pane_set_t2_ParamLimits

0xb235,	// (0x00055eeb) main_pane_set_t2

0xb249,	// (0x00055eff) main_pane_set_t3_ParamLimits

0xb249,	// (0x00055eff) main_pane_set_t3

0xb25b,	// (0x00055f11) main_pane_set_t4_ParamLimits

0xb25b,	// (0x00055f11) main_pane_set_t4

0x0003,

0xf98b,	// (0x0005a641) main_pane_set_t_ParamLimits

0xf98b,	// (0x0005a641) main_pane_set_t

0xb26d,	// (0x00055f23) setting_code_pane

0xb279,	// (0x00055f2f) setting_slider_graphic_pane

0xb279,	// (0x00055f2f) setting_slider_pane

0xb279,	// (0x00055f2f) setting_text_pane

0xb279,	// (0x00055f2f) setting_volume_pane

0x4c80,	// (0x0004f936) volume_set_pane

0x7921,	// (0x000525d7) bg_set_opt_pane_cp

0x4c88,	// (0x0004f93e) setting_slider_pane_t1

0x4ca1,	// (0x0004f957) setting_slider_pane_t2

0x4cbb,	// (0x0004f971) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0005a214) setting_slider_pane_t

0x4cd3,	// (0x0004f989) slider_set_pane

0x7841,	// (0x000524f7) bg_set_opt_pane_cp2

0x7963,	// (0x00052619) setting_slider_graphic_pane_g1

0x4ce9,	// (0x0004f99f) setting_slider_graphic_pane_t1

0x4cf9,	// (0x0004f9af) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0005a21b) setting_slider_graphic_pane_t

0x4d09,	// (0x0004f9bf) slider_set_pane_cp

0x7841,	// (0x000524f7) input_focus_pane_cp1

0xb12e,	// (0x00055de4) list_set_text_pane

0x7837,	// (0x000524ed) setting_text_pane_g1

0x7841,	// (0x000524f7) input_focus_pane_cp2

0x7837,	// (0x000524ed) setting_code_pane_g1

0x796c,	// (0x00052622) setting_code_pane_t1

0x3e4d,	// (0x0004eb03) set_text_pane_t1_ParamLimits

0x3e4d,	// (0x0004eb03) set_text_pane_t1

0x88e8,	// (0x0005359e) set_opt_bg_pane_g1

0x88f0,	// (0x000535a6) set_opt_bg_pane_g2

0xb108,	// (0x00055dbe) set_opt_bg_pane_g3

0x8900,	// (0x000535b6) set_opt_bg_pane_g4

0x8908,	// (0x000535be) set_opt_bg_pane_g5

0x8910,	// (0x000535c6) set_opt_bg_pane_g6

0xb112,	// (0x00055dc8) set_opt_bg_pane_g7

0xb11a,	// (0x00055dd0) set_opt_bg_pane_g8

0xb124,	// (0x00055dda) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x0005a62e) set_opt_bg_pane_g

0xb0fb,	// (0x00055db1) slider_set_pane_g1

0x643c,	// (0x000510f2) slider_set_pane_g2

0x0006,

0xf969,	// (0x0005a61f) slider_set_pane_g

0x63b0,	// (0x00051066) volume_set_pane_g1

0x63b8,	// (0x0005106e) volume_set_pane_g2

0x63c0,	// (0x00051076) volume_set_pane_g3

0x63c8,	// (0x0005107e) volume_set_pane_g4

0x63d0,	// (0x00051086) volume_set_pane_g5

0x63d8,	// (0x0005108e) volume_set_pane_g6

0x63e0,	// (0x00051096) volume_set_pane_g7

0x63e8,	// (0x0005109e) volume_set_pane_g8

0x63f0,	// (0x000510a6) volume_set_pane_g9

0x63f8,	// (0x000510ae) volume_set_pane_g10

0x0009,

0xf941,	// (0x0005a5f7) volume_set_pane_g

0x797a,	// (0x00052630) indicator_pane_ParamLimits

0x797a,	// (0x00052630) indicator_pane

0x7986,	// (0x0005263c) main_idle_pane_g2_ParamLimits

0x7986,	// (0x0005263c) main_idle_pane_g2

0x79ae,	// (0x00052664) main_pane_idle_g1_ParamLimits

0x79ae,	// (0x00052664) main_pane_idle_g1

0x79bb,	// (0x00052671) popup_clock_digital_analogue_window_ParamLimits

0x79bb,	// (0x00052671) popup_clock_digital_analogue_window

0x79d2,	// (0x00052688) soft_indicator_pane_ParamLimits

0x79d2,	// (0x00052688) soft_indicator_pane

0x79de,	// (0x00052694) wallpaper_pane_ParamLimits

0x79de,	// (0x00052694) wallpaper_pane

0x7837,	// (0x000524ed) wallpaper_pane_g1

0x79f2,	// (0x000526a8) indicator_pane_g1_ParamLimits

0x79f2,	// (0x000526a8) indicator_pane_g1

0xb4de,	// (0x00056194) navi_navi_icon_text_pane_srt_g1

0x7a0d,	// (0x000526c3) soft_indicator_pane_t1

0x7a27,	// (0x000526dd) aid_ps_area_pane

0x7a38,	// (0x000526ee) aid_ps_clock_pane

0x7a46,	// (0x000526fc) aid_ps_indicator_pane

0x7a52,	// (0x00052708) indicator_ps_pane_ParamLimits

0x7a52,	// (0x00052708) indicator_ps_pane

0x7a61,	// (0x00052717) power_save_pane_g1_ParamLimits

0x7a61,	// (0x00052717) power_save_pane_g1

0x7a6d,	// (0x00052723) power_save_pane_g2_ParamLimits

0x7a6d,	// (0x00052723) power_save_pane_g2

0x4887,	// (0x0004f53d) aid_navinavi_width_pane

0x7a27,	// (0x000526dd) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0005a220) power_save_pane_g_ParamLimits

0xf56a,	// (0x0005a220) power_save_pane_g

0x7a7b,	// (0x00052731) power_save_pane_t1_ParamLimits

0x7a7b,	// (0x00052731) power_save_pane_t1

0x7a38,	// (0x000526ee) aid_ps_clock_pane_ParamLimits

0x7a46,	// (0x000526fc) aid_ps_indicator_pane_ParamLimits

0x7a8d,	// (0x00052743) power_save_pane_t4_ParamLimits

0x7a8d,	// (0x00052743) power_save_pane_t4

0x0001,

0xf56f,	// (0x0005a225) power_save_pane_t_ParamLimits

0xf56f,	// (0x0005a225) power_save_pane_t

0x7ab7,	// (0x0005276d) power_save_t3_ParamLimits

0x7ab7,	// (0x0005276d) power_save_t3

0x7aa2,	// (0x00052758) power_save_t2_ParamLimits

0x7aa2,	// (0x00052758) power_save_t2

0x7acc,	// (0x00052782) indicator_ps_pane_g1

0x7ad5,	// (0x0005278b) ai_gene_pane_ParamLimits

0x7ad5,	// (0x0005278b) ai_gene_pane

0x7ae1,	// (0x00052797) ai_links_pane_ParamLimits

0x7ae1,	// (0x00052797) ai_links_pane

0x7aed,	// (0x000527a3) indicator_pane_cp1_ParamLimits

0x7aed,	// (0x000527a3) indicator_pane_cp1

0x7af9,	// (0x000527af) main_pane_idle_g1_cp_ParamLimits

0x7af9,	// (0x000527af) main_pane_idle_g1_cp

0x7b05,	// (0x000527bb) popup_ai_links_title_window

0x7b0e,	// (0x000527c4) soft_indicator_pane_cp1_ParamLimits

0x7b0e,	// (0x000527c4) soft_indicator_pane_cp1

0xaee9,	// (0x00055b9f) ai_links_pane_g1

0xaef2,	// (0x00055ba8) grid_ai_links_pane

0xaecc,	// (0x00055b82) ai_gene_pane_1

0xaed7,	// (0x00055b8d) ai_gene_pane_2

0xaee0,	// (0x00055b96) list_highlight_pane_cp4

0xaeb0,	// (0x00055b66) cell_ai_link_pane_ParamLimits

0xaeb0,	// (0x00055b66) cell_ai_link_pane

0xaea8,	// (0x00055b5e) cell_ai_link_pane_g1

0x843b,	// (0x000530f1) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x0005a5d2) cell_ai_link_pane_g

0x7841,	// (0x000524f7) grid_highlight_cp2

0x7841,	// (0x000524f7) bg_popup_sub_pane_cp1

0x7b28,	// (0x000527de) popup_ai_links_title_window_t1

0xadf6,	// (0x00055aac) ai_gene_pane_1_g1_ParamLimits

0xadf6,	// (0x00055aac) ai_gene_pane_1_g1

0xae02,	// (0x00055ab8) ai_gene_pane_1_g2_ParamLimits

0xae02,	// (0x00055ab8) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x0005a5c8) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x0005a5c8) ai_gene_pane_1_g

0xae0f,	// (0x00055ac5) ai_gene_pane_1_t1_ParamLimits

0xae0f,	// (0x00055ac5) ai_gene_pane_1_t1

0xae43,	// (0x00055af9) grid_ai_soft_ind_pane

0xade1,	// (0x00055a97) ai_gene_pane_2_t1_ParamLimits

0xade1,	// (0x00055a97) ai_gene_pane_2_t1

0x7b37,	// (0x000527ed) main_pane_empty_t1_ParamLimits

0x7b37,	// (0x000527ed) main_pane_empty_t1

0x7b4f,	// (0x00052805) main_pane_empty_t2_ParamLimits

0x7b4f,	// (0x00052805) main_pane_empty_t2

0x7b64,	// (0x0005281a) main_pane_empty_t3_ParamLimits

0x7b64,	// (0x0005281a) main_pane_empty_t3

0x7b76,	// (0x0005282c) main_pane_empty_t4_ParamLimits

0x7b76,	// (0x0005282c) main_pane_empty_t4

0x7b88,	// (0x0005283e) main_pane_empty_t5_ParamLimits

0x7b88,	// (0x0005283e) main_pane_empty_t5

0x0004,

0xf574,	// (0x0005a22a) main_pane_empty_t_ParamLimits

0xf574,	// (0x0005a22a) main_pane_empty_t

0x8939,	// (0x000535ef) bg_popup_window_pane_ParamLimits

0x8939,	// (0x000535ef) bg_popup_window_pane

0xab51,	// (0x00055807) find_popup_pane_cp2_ParamLimits

0xab51,	// (0x00055807) find_popup_pane_cp2

0xab5d,	// (0x00055813) heading_pane_ParamLimits

0xab5d,	// (0x00055813) heading_pane

0x7841,	// (0x000524f7) bg_popup_sub_pane

0xaacb,	// (0x00055781) bg_popup_window_pane_g1_ParamLimits

0xaacb,	// (0x00055781) bg_popup_window_pane_g1

0xaad7,	// (0x0005578d) bg_popup_window_pane_g2_ParamLimits

0xaad7,	// (0x0005578d) bg_popup_window_pane_g2

0xaae3,	// (0x00055799) bg_popup_window_pane_g3_ParamLimits

0xaae3,	// (0x00055799) bg_popup_window_pane_g3

0xaaef,	// (0x000557a5) bg_popup_window_pane_g4_ParamLimits

0xaaef,	// (0x000557a5) bg_popup_window_pane_g4

0xaafb,	// (0x000557b1) bg_popup_window_pane_g5_ParamLimits

0xaafb,	// (0x000557b1) bg_popup_window_pane_g5

0xab07,	// (0x000557bd) bg_popup_window_pane_g6_ParamLimits

0xab07,	// (0x000557bd) bg_popup_window_pane_g6

0xab13,	// (0x000557c9) bg_popup_window_pane_g7_ParamLimits

0xab13,	// (0x000557c9) bg_popup_window_pane_g7

0xab1f,	// (0x000557d5) bg_popup_window_pane_g8_ParamLimits

0xab1f,	// (0x000557d5) bg_popup_window_pane_g8

0xab2b,	// (0x000557e1) bg_popup_window_pane_g9_ParamLimits

0xab2b,	// (0x000557e1) bg_popup_window_pane_g9

0xab37,	// (0x000557ed) bg_popup_window_pane_g10_ParamLimits

0xab37,	// (0x000557ed) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x0005a590) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x0005a590) bg_popup_window_pane_g

0xaa60,	// (0x00055716) bg_popup_heading_pane_ParamLimits

0xaa60,	// (0x00055716) bg_popup_heading_pane

0x656a,	// (0x00051220) tabs_4_passive_pane_cp_srt_ParamLimits

0x656a,	// (0x00051220) tabs_4_passive_pane_cp_srt

0x657c,	// (0x00051232) tabs_4_passive_pane_srt_ParamLimits

0xaa74,	// (0x0005572a) heading_pane_g2

0x657c,	// (0x00051232) tabs_4_passive_pane_srt

0x985d,	// (0x00054513) bg_passive_tab_pane_cp3_srt_ParamLimits

0x985d,	// (0x00054513) bg_passive_tab_pane_cp3_srt

0xaa7c,	// (0x00055732) heading_pane_t1_ParamLimits

0xaa7c,	// (0x00055732) heading_pane_t1

0xaa93,	// (0x00055749) heading_pane_t2_ParamLimits

0xaa93,	// (0x00055749) heading_pane_t2

0x0001,

0xf8d5,	// (0x0005a58b) heading_pane_t_ParamLimits

0xf8d5,	// (0x0005a58b) heading_pane_t

0xa581,	// (0x00055237) bg_popup_heading_pane_g1

0xa63c,	// (0x000552f2) bg_popup_heading_pane_g2

0xa646,	// (0x000552fc) bg_popup_heading_pane_g3

0xa650,	// (0x00055306) bg_popup_heading_pane_g4

0xa65a,	// (0x00055310) bg_popup_heading_pane_g5

0xa664,	// (0x0005531a) bg_popup_heading_pane_g6

0xa66c,	// (0x00055322) bg_popup_heading_pane_g7

0xa674,	// (0x0005532a) bg_popup_heading_pane_g8

0xa67e,	// (0x00055334) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x0005a547) bg_popup_heading_pane_g

0x9d67,	// (0x00054a1d) bg_popup_sub_pane_g1

0x9d77,	// (0x00054a2d) bg_popup_sub_pane_g2

0x9d6f,	// (0x00054a25) bg_popup_sub_pane_g3

0x9d87,	// (0x00054a3d) bg_popup_sub_pane_g4

0x9d7f,	// (0x00054a35) bg_popup_sub_pane_g5

0x9d8f,	// (0x00054a45) bg_popup_sub_pane_g6

0x9d97,	// (0x00054a4d) bg_popup_sub_pane_g7

0x9da7,	// (0x00054a5d) bg_popup_sub_pane_g8

0x9d9f,	// (0x00054a55) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x0005a521) bg_popup_sub_pane_g

0x7b9c,	// (0x00052852) bg_popup_window_pane_cp5_ParamLimits

0x7b9c,	// (0x00052852) bg_popup_window_pane_cp5

0x7bb8,	// (0x0005286e) popup_note_window_g1_ParamLimits

0x7bb8,	// (0x0005286e) popup_note_window_g1

0x7bc4,	// (0x0005287a) popup_note_window_t1_ParamLimits

0x7bc4,	// (0x0005287a) popup_note_window_t1

0x7bda,	// (0x00052890) popup_note_window_t2_ParamLimits

0x7bda,	// (0x00052890) popup_note_window_t2

0x7bf0,	// (0x000528a6) popup_note_window_t3_ParamLimits

0x7bf0,	// (0x000528a6) popup_note_window_t3

0x7c06,	// (0x000528bc) popup_note_window_t4_ParamLimits

0x7c06,	// (0x000528bc) popup_note_window_t4

0x7c2e,	// (0x000528e4) popup_note_window_t5_ParamLimits

0x7c2e,	// (0x000528e4) popup_note_window_t5

0x0004,

0xf57f,	// (0x0005a235) popup_note_window_t_ParamLimits

0xf57f,	// (0x0005a235) popup_note_window_t

0x7c52,	// (0x00052908) bg_popup_window_pane_cp6_ParamLimits

0x7c52,	// (0x00052908) bg_popup_window_pane_cp6

0xa4fd,	// (0x000551b3) popup_note_image_window_g1_ParamLimits

0xa4fd,	// (0x000551b3) popup_note_image_window_g1

0xa509,	// (0x000551bf) popup_note_image_window_g2_ParamLimits

0xa509,	// (0x000551bf) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x0005a515) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x0005a515) popup_note_image_window_g

0xa522,	// (0x000551d8) popup_note_image_window_t1_ParamLimits

0xa522,	// (0x000551d8) popup_note_image_window_t1

0xa53b,	// (0x000551f1) popup_note_image_window_t2_ParamLimits

0xa53b,	// (0x000551f1) popup_note_image_window_t2

0xa554,	// (0x0005520a) popup_note_image_window_t3_ParamLimits

0xa554,	// (0x0005520a) popup_note_image_window_t3

0x0002,

0xf864,	// (0x0005a51a) popup_note_image_window_t_ParamLimits

0xf864,	// (0x0005a51a) popup_note_image_window_t

0xa3be,	// (0x00055074) bg_popup_window_pane_cp7_ParamLimits

0xa3be,	// (0x00055074) bg_popup_window_pane_cp7

0xa3ee,	// (0x000550a4) popup_note_wait_window_g1_ParamLimits

0xa3ee,	// (0x000550a4) popup_note_wait_window_g1

0xa3fa,	// (0x000550b0) popup_note_wait_window_g2_ParamLimits

0xa3fa,	// (0x000550b0) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x0005a503) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x0005a503) popup_note_wait_window_g

0xa412,	// (0x000550c8) popup_note_wait_window_t1_ParamLimits

0xa412,	// (0x000550c8) popup_note_wait_window_t1

0xa439,	// (0x000550ef) popup_note_wait_window_t2_ParamLimits

0xa439,	// (0x000550ef) popup_note_wait_window_t2

0xa456,	// (0x0005510c) popup_note_wait_window_t3_ParamLimits

0xa456,	// (0x0005510c) popup_note_wait_window_t3

0xa469,	// (0x0005511f) popup_note_wait_window_t4_ParamLimits

0xa469,	// (0x0005511f) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x0005a50a) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x0005a50a) popup_note_wait_window_t

0xa48e,	// (0x00055144) wait_bar_pane_ParamLimits

0xa48e,	// (0x00055144) wait_bar_pane

0x7841,	// (0x000524f7) wait_anim_pane

0x7841,	// (0x000524f7) wait_border_pane

0x7837,	// (0x000524ed) wait_anim_pane_g1

0x7837,	// (0x000524ed) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0005a3be) wait_anim_pane_g

0xa362,	// (0x00055018) wait_border_pane_g1

0xa36d,	// (0x00055023) wait_border_pane_g2

0xa376,	// (0x0005502c) wait_border_pane_g3

0x0002,

0xf846,	// (0x0005a4fc) wait_border_pane_g

0xa1cd,	// (0x00054e83) bg_popup_window_pane_cp16_ParamLimits

0xa1cd,	// (0x00054e83) bg_popup_window_pane_cp16

0xa2cd,	// (0x00054f83) indicator_popup_pane_cp4_ParamLimits

0xa2cd,	// (0x00054f83) indicator_popup_pane_cp4

0xa2e1,	// (0x00054f97) popup_query_data_window_t1_ParamLimits

0xa2e1,	// (0x00054f97) popup_query_data_window_t1

0xa2f3,	// (0x00054fa9) popup_query_data_window_t2_ParamLimits

0xa2f3,	// (0x00054fa9) popup_query_data_window_t2

0xa30c,	// (0x00054fc2) popup_query_data_window_t3_ParamLimits

0xa30c,	// (0x00054fc2) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x0005a4f5) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x0005a4f5) popup_query_data_window_t

0xa326,	// (0x00054fdc) query_popup_data_pane_ParamLimits

0xa326,	// (0x00054fdc) query_popup_data_pane

0xa33a,	// (0x00054ff0) query_popup_data_pane_cp1_ParamLimits

0xa33a,	// (0x00054ff0) query_popup_data_pane_cp1

0xa1cd,	// (0x00054e83) bg_popup_window_pane_cp10_ParamLimits

0xa1cd,	// (0x00054e83) bg_popup_window_pane_cp10

0xa1ff,	// (0x00054eb5) indicator_popup_pane_ParamLimits

0xa1ff,	// (0x00054eb5) indicator_popup_pane

0xa221,	// (0x00054ed7) popup_query_code_window_t1_ParamLimits

0xa221,	// (0x00054ed7) popup_query_code_window_t1

0xa23b,	// (0x00054ef1) popup_query_code_window_t2_ParamLimits

0xa23b,	// (0x00054ef1) popup_query_code_window_t2

0xa284,	// (0x00054f3a) popup_query_code_window_t3_ParamLimits

0xa284,	// (0x00054f3a) popup_query_code_window_t3

0x0002,

0xf838,	// (0x0005a4ee) popup_query_code_window_t_ParamLimits

0xf838,	// (0x0005a4ee) popup_query_code_window_t

0xa2b3,	// (0x00054f69) query_popup_pane_ParamLimits

0xa2b3,	// (0x00054f69) query_popup_pane

0x7c52,	// (0x00052908) bg_popup_window_pane_cp15_ParamLimits

0x7c52,	// (0x00052908) bg_popup_window_pane_cp15

0x7c70,	// (0x00052926) indicator_popup_pane_cp1_ParamLimits

0x7c70,	// (0x00052926) indicator_popup_pane_cp1

0x8380,	// (0x00053036) indicator_popup_pane_cp2_ParamLimits

0x8380,	// (0x00053036) indicator_popup_pane_cp2

0x8393,	// (0x00053049) popup_query_data_code_window_g1_ParamLimits

0x8393,	// (0x00053049) popup_query_data_code_window_g1

0x83a6,	// (0x0005305c) popup_query_data_code_window_t1_ParamLimits

0x83a6,	// (0x0005305c) popup_query_data_code_window_t1

0x83b8,	// (0x0005306e) popup_query_data_code_window_t2_ParamLimits

0x83b8,	// (0x0005306e) popup_query_data_code_window_t2

0x83ca,	// (0x00053080) popup_query_data_code_window_t3_ParamLimits

0x83ca,	// (0x00053080) popup_query_data_code_window_t3

0x83e0,	// (0x00053096) popup_query_data_code_window_t4_ParamLimits

0x83e0,	// (0x00053096) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0005a240) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0005a240) popup_query_data_code_window_t

0x6083,	// (0x00050d39) list_single_midp_graphic_pane_g3

0x83f8,	// (0x000530ae) query_popup_data_pane_cp2_ParamLimits

0x840b,	// (0x000530c1) query_popup_pane_cp2_ParamLimits

0x840b,	// (0x000530c1) query_popup_pane_cp2

0x7841,	// (0x000524f7) bg_popup_window_pane_cp11

0xa1c5,	// (0x00054e7b) heading_pane_cp5

0x84f6,	// (0x000531ac) listscroll_popup_info_pane

0x7841,	// (0x000524f7) input_focus_pane_cp3

0x841e,	// (0x000530d4) query_popup_pane_t1

0x842c,	// (0x000530e2) list_popup_info_pane_ParamLimits

0x842c,	// (0x000530e2) list_popup_info_pane

0x843b,	// (0x000530f1) listscroll_popup_info_pane_g1

0x8443,	// (0x000530f9) scroll_pane_cp7

0x844d,	// (0x00053103) popup_info_list_pane_t1_ParamLimits

0x844d,	// (0x00053103) popup_info_list_pane_t1

0x8467,	// (0x0005311d) popup_info_list_pane_t2_ParamLimits

0x8467,	// (0x0005311d) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0005a249) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0005a249) popup_info_list_pane_t

0x7841,	// (0x000524f7) bg_popup_window_pane_cp12

0xb4f8,	// (0x000561ae) find_popup_pane

0x7921,	// (0x000525d7) bg_popup_window_pane_cp3

0x8481,	// (0x00053137) heading_pane_cp3

0x848d,	// (0x00053143) listscroll_popup_graphic_pane

0x7841,	// (0x000524f7) bg_popup_window_pane_cp4

0x84ec,	// (0x000531a2) heading_pane_cp4

0x84f6,	// (0x000531ac) listscroll_popup_colour_pane

0x84fe,	// (0x000531b4) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x84fe,	// (0x000531b4) cell_large_graphic_colour_none_popup_pane

0x8512,	// (0x000531c8) grid_large_graphic_colour_popup_pane_ParamLimits

0x8512,	// (0x000531c8) grid_large_graphic_colour_popup_pane

0x853e,	// (0x000531f4) listscroll_popup_colour_pane_g1_ParamLimits

0x853e,	// (0x000531f4) listscroll_popup_colour_pane_g1

0x8555,	// (0x0005320b) listscroll_popup_colour_pane_g2_ParamLimits

0x8555,	// (0x0005320b) listscroll_popup_colour_pane_g2

0x856c,	// (0x00053222) listscroll_popup_colour_pane_g3_ParamLimits

0x856c,	// (0x00053222) listscroll_popup_colour_pane_g3

0x857c,	// (0x00053232) listscroll_popup_colour_pane_g4_ParamLimits

0x857c,	// (0x00053232) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0005a24e) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0005a24e) listscroll_popup_colour_pane_g

0x8590,	// (0x00053246) scroll_pane_cp6_ParamLimits

0x8590,	// (0x00053246) scroll_pane_cp6

0x85a2,	// (0x00053258) cell_large_graphic_colour_popup_pane_ParamLimits

0x85a2,	// (0x00053258) cell_large_graphic_colour_popup_pane

0x85c1,	// (0x00053277) cell_large_graphic_colour_none_popup_pane_t1

0x7841,	// (0x000524f7) grid_highlight_pane_cp5

0x85d0,	// (0x00053286) cell_large_graphic_colour_popup_pane_g1

0x85d8,	// (0x0005328e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0005a257) cell_large_graphic_colour_popup_pane_g

0x85e0,	// (0x00053296) cell_large_graphic_colour_popup_pane_g2_copy1

0x85e9,	// (0x0005329f) grid_highlight_pane_cp4

0x85f1,	// (0x000532a7) bg_popup_window_pane_cp8_ParamLimits

0x85f1,	// (0x000532a7) bg_popup_window_pane_cp8

0x860c,	// (0x000532c2) popup_snote_single_text_window_g1_ParamLimits

0x860c,	// (0x000532c2) popup_snote_single_text_window_g1

0x861e,	// (0x000532d4) popup_snote_single_text_window_t1_ParamLimits

0x861e,	// (0x000532d4) popup_snote_single_text_window_t1

0x8631,	// (0x000532e7) popup_snote_single_text_window_t2_ParamLimits

0x8631,	// (0x000532e7) popup_snote_single_text_window_t2

0x8644,	// (0x000532fa) popup_snote_single_text_window_t3_ParamLimits

0x8644,	// (0x000532fa) popup_snote_single_text_window_t3

0x867d,	// (0x00053333) popup_snote_single_text_window_t4_ParamLimits

0x867d,	// (0x00053333) popup_snote_single_text_window_t4

0x86b1,	// (0x00053367) popup_snote_single_text_window_t5_ParamLimits

0x86b1,	// (0x00053367) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0005a25c) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0005a25c) popup_snote_single_text_window_t

0x86e0,	// (0x00053396) bg_popup_window_pane_cp9_ParamLimits

0x86e0,	// (0x00053396) bg_popup_window_pane_cp9

0x860c,	// (0x000532c2) popup_snote_single_graphic_window_g1_ParamLimits

0x860c,	// (0x000532c2) popup_snote_single_graphic_window_g1

0x86ee,	// (0x000533a4) popup_snote_single_graphic_window_g2_ParamLimits

0x86ee,	// (0x000533a4) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0005a267) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0005a267) popup_snote_single_graphic_window_g

0x86fa,	// (0x000533b0) popup_snote_single_graphic_window_t1_ParamLimits

0x86fa,	// (0x000533b0) popup_snote_single_graphic_window_t1

0x870d,	// (0x000533c3) popup_snote_single_graphic_window_t2_ParamLimits

0x870d,	// (0x000533c3) popup_snote_single_graphic_window_t2

0x8720,	// (0x000533d6) popup_snote_single_graphic_window_t3_ParamLimits

0x8720,	// (0x000533d6) popup_snote_single_graphic_window_t3

0x8759,	// (0x0005340f) popup_snote_single_graphic_window_t4_ParamLimits

0x8759,	// (0x0005340f) popup_snote_single_graphic_window_t4

0x878d,	// (0x00053443) popup_snote_single_graphic_window_t5_ParamLimits

0x878d,	// (0x00053443) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0005a26c) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0005a26c) popup_snote_single_graphic_window_t

0xb43b,	// (0x000560f1) grid_graphic_popup_pane_ParamLimits

0xb43b,	// (0x000560f1) grid_graphic_popup_pane

0xb464,	// (0x0005611a) listscroll_popup_graphic_pane_g1_ParamLimits

0xb464,	// (0x0005611a) listscroll_popup_graphic_pane_g1

0xb478,	// (0x0005612e) listscroll_popup_graphic_pane_g2_ParamLimits

0xb478,	// (0x0005612e) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x0005a66b) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x0005a66b) listscroll_popup_graphic_pane_g

0xb48c,	// (0x00056142) scroll_pane_cp5

0xb3d8,	// (0x0005608e) cell_graphic_popup_pane_ParamLimits

0xb3d8,	// (0x0005608e) cell_graphic_popup_pane

0xb3b9,	// (0x0005606f) cell_graphic_popup_pane_g1

0xb3c1,	// (0x00056077) cell_graphic_popup_pane_g2

0x85e0,	// (0x00053296) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x0005a664) cell_graphic_popup_pane_g

0xb3ca,	// (0x00056080) cell_graphic_popup_pane_t2

0x85e9,	// (0x0005329f) grid_highlight_pane_cp3

0x87ce,	// (0x00053484) list_gen_pane_ParamLimits

0x87ce,	// (0x00053484) list_gen_pane

0x8800,	// (0x000534b6) scroll_pane

0xb311,	// (0x00055fc7) bg_list_pane_g1_ParamLimits

0xb311,	// (0x00055fc7) bg_list_pane_g1

0xb32e,	// (0x00055fe4) bg_list_pane_g2_ParamLimits

0xb32e,	// (0x00055fe4) bg_list_pane_g2

0xb343,	// (0x00055ff9) bg_list_pane_g3_ParamLimits

0xb343,	// (0x00055ff9) bg_list_pane_g3

0xb357,	// (0x0005600d) bg_list_pane_g4_ParamLimits

0xb357,	// (0x0005600d) bg_list_pane_g4

0xb36b,	// (0x00056021) bg_list_pane_g5_ParamLimits

0xb36b,	// (0x00056021) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x0005a659) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x0005a659) bg_list_pane_g

0x7d77,	// (0x00052a2d) list_double2_graphic_large_graphic_pane_ParamLimits

0x7d77,	// (0x00052a2d) list_double2_graphic_large_graphic_pane

0x7d77,	// (0x00052a2d) list_double2_graphic_pane_ParamLimits

0x7d77,	// (0x00052a2d) list_double2_graphic_pane

0x7d77,	// (0x00052a2d) list_double2_large_graphic_pane_ParamLimits

0x7d77,	// (0x00052a2d) list_double2_large_graphic_pane

0x7d77,	// (0x00052a2d) list_double2_pane_ParamLimits

0x7d77,	// (0x00052a2d) list_double2_pane

0x7d77,	// (0x00052a2d) list_double_graphic_heading_pane_ParamLimits

0x7d77,	// (0x00052a2d) list_double_graphic_heading_pane

0x7d77,	// (0x00052a2d) list_double_graphic_pane_ParamLimits

0x7d77,	// (0x00052a2d) list_double_graphic_pane

0x7d77,	// (0x00052a2d) list_double_heading_pane_ParamLimits

0x7d77,	// (0x00052a2d) list_double_heading_pane

0x7d77,	// (0x00052a2d) list_double_large_graphic_pane_ParamLimits

0x7d77,	// (0x00052a2d) list_double_large_graphic_pane

0x7d77,	// (0x00052a2d) list_double_number_pane_ParamLimits

0x7d77,	// (0x00052a2d) list_double_number_pane

0x7d77,	// (0x00052a2d) list_double_pane_ParamLimits

0x7d77,	// (0x00052a2d) list_double_pane

0x7d77,	// (0x00052a2d) list_double_time_pane_ParamLimits

0x7d77,	// (0x00052a2d) list_double_time_pane

0x7d77,	// (0x00052a2d) list_setting_number_pane_ParamLimits

0x7d77,	// (0x00052a2d) list_setting_number_pane

0x7d77,	// (0x00052a2d) list_setting_pane_ParamLimits

0x7d77,	// (0x00052a2d) list_setting_pane

0x7db0,	// (0x00052a66) list_single_2graphic_pane_ParamLimits

0x7db0,	// (0x00052a66) list_single_2graphic_pane

0x7db0,	// (0x00052a66) list_single_graphic_heading_pane_ParamLimits

0x7db0,	// (0x00052a66) list_single_graphic_heading_pane

0x7db0,	// (0x00052a66) list_single_graphic_pane_ParamLimits

0x7db0,	// (0x00052a66) list_single_graphic_pane

0x7db0,	// (0x00052a66) list_single_heading_pane_ParamLimits

0x7db0,	// (0x00052a66) list_single_heading_pane

0x7dee,	// (0x00052aa4) list_single_large_graphic_pane_ParamLimits

0x7dee,	// (0x00052aa4) list_single_large_graphic_pane

0x7db0,	// (0x00052a66) list_single_number_heading_pane_ParamLimits

0x7db0,	// (0x00052a66) list_single_number_heading_pane

0x7db0,	// (0x00052a66) list_single_number_pane_ParamLimits

0x7db0,	// (0x00052a66) list_single_number_pane

0x7db0,	// (0x00052a66) list_single_pane_ParamLimits

0x7db0,	// (0x00052a66) list_single_pane

0x7841,	// (0x000524f7) list_highlight_pane_cp1

0x7c83,	// (0x00052939) list_single_pane_g1_ParamLimits

0x7c83,	// (0x00052939) list_single_pane_g1

0x7c8f,	// (0x00052945) list_single_pane_g2_ParamLimits

0x7c8f,	// (0x00052945) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0005a288) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0005a288) list_single_pane_g

0x64d0,	// (0x00051186) list_single_pane_t1_ParamLimits

0x64d0,	// (0x00051186) list_single_pane_t1

0x7c83,	// (0x00052939) list_single_number_pane_g1_ParamLimits

0x7c83,	// (0x00052939) list_single_number_pane_g1

0x7c8f,	// (0x00052945) list_single_number_pane_g2_ParamLimits

0x7c8f,	// (0x00052945) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0005a288) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0005a288) list_single_number_pane_g

0x6400,	// (0x000510b6) list_single_number_pane_t1_ParamLimits

0x6400,	// (0x000510b6) list_single_number_pane_t1

0x6416,	// (0x000510cc) list_single_number_pane_t2_ParamLimits

0x6416,	// (0x000510cc) list_single_number_pane_t2

0x0001,

0xf964,	// (0x0005a61a) list_single_number_pane_t_ParamLimits

0xf964,	// (0x0005a61a) list_single_number_pane_t

0x4d11,	// (0x0004f9c7) list_single_graphic_pane_g1_ParamLimits

0x4d11,	// (0x0004f9c7) list_single_graphic_pane_g1

0x7c83,	// (0x00052939) list_single_graphic_pane_g2_ParamLimits

0x7c83,	// (0x00052939) list_single_graphic_pane_g2

0x7c8f,	// (0x00052945) list_single_graphic_pane_g3_ParamLimits

0x7c8f,	// (0x00052945) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0005a277) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0005a277) list_single_graphic_pane_g

0x4d1d,	// (0x0004f9d3) list_single_graphic_pane_t1_ParamLimits

0x4d1d,	// (0x0004f9d3) list_single_graphic_pane_t1

0x4d33,	// (0x0004f9e9) list_single_heading_pane_g1_ParamLimits

0x4d33,	// (0x0004f9e9) list_single_heading_pane_g1

0x7c8f,	// (0x00052945) list_single_heading_pane_g2_ParamLimits

0x7c8f,	// (0x00052945) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0005a27e) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0005a27e) list_single_heading_pane_g

0x4d46,	// (0x0004f9fc) list_single_heading_pane_t1_ParamLimits

0x4d46,	// (0x0004f9fc) list_single_heading_pane_t1

0x7c9b,	// (0x00052951) list_single_heading_pane_t2_ParamLimits

0x7c9b,	// (0x00052951) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0005a283) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0005a283) list_single_heading_pane_t

0x7c83,	// (0x00052939) list_single_number_heading_pane_g1_ParamLimits

0x7c83,	// (0x00052939) list_single_number_heading_pane_g1

0x7c8f,	// (0x00052945) list_single_number_heading_pane_g2_ParamLimits

0x7c8f,	// (0x00052945) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0005a288) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0005a288) list_single_number_heading_pane_g

0x4d5c,	// (0x0004fa12) list_single_number_heading_pane_t1_ParamLimits

0x4d5c,	// (0x0004fa12) list_single_number_heading_pane_t1

0x4d72,	// (0x0004fa28) list_single_number_heading_pane_t2_ParamLimits

0x4d72,	// (0x0004fa28) list_single_number_heading_pane_t2

0x4d84,	// (0x0004fa3a) list_single_number_heading_pane_t3_ParamLimits

0x4d84,	// (0x0004fa3a) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0005a28d) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0005a28d) list_single_number_heading_pane_t

0x4d96,	// (0x0004fa4c) list_single_graphic_heading_pane_g1_ParamLimits

0x4d96,	// (0x0004fa4c) list_single_graphic_heading_pane_g1

0x7cad,	// (0x00052963) list_single_graphic_heading_pane_g4_ParamLimits

0x7cad,	// (0x00052963) list_single_graphic_heading_pane_g4

0x7c8f,	// (0x00052945) list_single_graphic_heading_pane_g5_ParamLimits

0x7c8f,	// (0x00052945) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0005a294) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0005a294) list_single_graphic_heading_pane_g

0x4d5c,	// (0x0004fa12) list_single_graphic_heading_pane_t1_ParamLimits

0x4d5c,	// (0x0004fa12) list_single_graphic_heading_pane_t1

0x4dae,	// (0x0004fa64) list_single_graphic_heading_pane_t2_ParamLimits

0x4dae,	// (0x0004fa64) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0005a29b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0005a29b) list_single_graphic_heading_pane_t

0x7cbe,	// (0x00052974) list_single_large_graphic_pane_g1_ParamLimits

0x7cbe,	// (0x00052974) list_single_large_graphic_pane_g1

0x7cca,	// (0x00052980) list_single_large_graphic_pane_g2_ParamLimits

0x7cca,	// (0x00052980) list_single_large_graphic_pane_g2

0x7cd6,	// (0x0005298c) list_single_large_graphic_pane_g3_ParamLimits

0x7cd6,	// (0x0005298c) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0005a2a0) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0005a2a0) list_single_large_graphic_pane_g

0xa36d,	// (0x00055023) wait_border_pane_g2_copy1

0x7ce2,	// (0x00052998) list_single_large_graphic_pane_g4_cp2

0x4dc4,	// (0x0004fa7a) list_single_large_graphic_pane_t1_ParamLimits

0x4dc4,	// (0x0004fa7a) list_single_large_graphic_pane_t1

0x8834,	// (0x000534ea) list_double_pane_g1_ParamLimits

0x8834,	// (0x000534ea) list_double_pane_g1

0x7cea,	// (0x000529a0) list_double_pane_g2_ParamLimits

0x7cea,	// (0x000529a0) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0005a2a7) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0005a2a7) list_double_pane_g

0x4dda,	// (0x0004fa90) list_double_pane_t1_ParamLimits

0x4dda,	// (0x0004fa90) list_double_pane_t1

0x4df0,	// (0x0004faa6) list_double_pane_t2_ParamLimits

0x4df0,	// (0x0004faa6) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0005a2ac) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0005a2ac) list_double_pane_t

0x4e02,	// (0x0004fab8) list_double2_pane_g1_ParamLimits

0x4e02,	// (0x0004fab8) list_double2_pane_g1

0x4e13,	// (0x0004fac9) list_double2_pane_g2_ParamLimits

0x4e13,	// (0x0004fac9) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0005a2b1) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0005a2b1) list_double2_pane_g

0x4e1f,	// (0x0004fad5) list_double2_pane_t1_ParamLimits

0x4e1f,	// (0x0004fad5) list_double2_pane_t1

0x4e35,	// (0x0004faeb) list_double2_pane_t2_ParamLimits

0x4e35,	// (0x0004faeb) list_double2_pane_t2

0x0001,

0xf600,	// (0x0005a2b6) list_double2_pane_t_ParamLimits

0xf600,	// (0x0005a2b6) list_double2_pane_t

0x8834,	// (0x000534ea) list_double_number_pane_g1_ParamLimits

0x8834,	// (0x000534ea) list_double_number_pane_g1

0x7cea,	// (0x000529a0) list_double_number_pane_g2_ParamLimits

0x7cea,	// (0x000529a0) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0005a2a7) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0005a2a7) list_double_number_pane_g

0x4e47,	// (0x0004fafd) list_double_number_pane_t1_ParamLimits

0x4e47,	// (0x0004fafd) list_double_number_pane_t1

0x4e59,	// (0x0004fb0f) list_double_number_pane_t2_ParamLimits

0x4e59,	// (0x0004fb0f) list_double_number_pane_t2

0x4e6f,	// (0x0004fb25) list_double_number_pane_t3_ParamLimits

0x4e6f,	// (0x0004fb25) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0005a2bb) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0005a2bb) list_double_number_pane_t

0x4e81,	// (0x0004fb37) list_double_graphic_pane_g1_ParamLimits

0x4e81,	// (0x0004fb37) list_double_graphic_pane_g1

0x4e8d,	// (0x0004fb43) list_double_graphic_pane_g2_ParamLimits

0x4e8d,	// (0x0004fb43) list_double_graphic_pane_g2

0x4e9c,	// (0x0004fb52) list_double_graphic_pane_g3_ParamLimits

0x4e9c,	// (0x0004fb52) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0005a2c2) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0005a2c2) list_double_graphic_pane_g

0x4eb4,	// (0x0004fb6a) list_double_graphic_pane_t1_ParamLimits

0x4eb4,	// (0x0004fb6a) list_double_graphic_pane_t1

0x4eca,	// (0x0004fb80) list_double_graphic_pane_t2_ParamLimits

0x4eca,	// (0x0004fb80) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0005a2cb) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0005a2cb) list_double_graphic_pane_t

0x4edc,	// (0x0004fb92) list_double2_graphic_pane_g1_ParamLimits

0x4edc,	// (0x0004fb92) list_double2_graphic_pane_g1

0xa603,	// (0x000552b9) list_double2_graphic_pane_g2_ParamLimits

0xa603,	// (0x000552b9) list_double2_graphic_pane_g2

0x7cf6,	// (0x000529ac) list_double2_graphic_pane_g3_ParamLimits

0x7cf6,	// (0x000529ac) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0005a2d0) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0005a2d0) list_double2_graphic_pane_g

0x4ee8,	// (0x0004fb9e) list_double2_graphic_pane_t1_ParamLimits

0x4ee8,	// (0x0004fb9e) list_double2_graphic_pane_t1

0x4efe,	// (0x0004fbb4) list_double2_graphic_pane_t2_ParamLimits

0x4efe,	// (0x0004fbb4) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0005a2d7) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0005a2d7) list_double2_graphic_pane_t

0x4f10,	// (0x0004fbc6) list_double_large_graphic_pane_g1_ParamLimits

0x4f10,	// (0x0004fbc6) list_double_large_graphic_pane_g1

0x4f2f,	// (0x0004fbe5) list_double_large_graphic_pane_g2_ParamLimits

0x4f2f,	// (0x0004fbe5) list_double_large_graphic_pane_g2

0x7cea,	// (0x000529a0) list_double_large_graphic_pane_g3_ParamLimits

0x7cea,	// (0x000529a0) list_double_large_graphic_pane_g3

0x4f45,	// (0x0004fbfb) list_double_large_graphic_pane_g4_ParamLimits

0x4f45,	// (0x0004fbfb) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0005a2dc) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0005a2dc) list_double_large_graphic_pane_g

0x4f56,	// (0x0004fc0c) list_double_large_graphic_pane_t1_ParamLimits

0x4f56,	// (0x0004fc0c) list_double_large_graphic_pane_t1

0x4f6f,	// (0x0004fc25) list_double_large_graphic_pane_t2_ParamLimits

0x4f6f,	// (0x0004fc25) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0005a2e7) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0005a2e7) list_double_large_graphic_pane_t

0x7d17,	// (0x000529cd) list_double2_large_graphic_pane_g1_ParamLimits

0x7d17,	// (0x000529cd) list_double2_large_graphic_pane_g1

0x4f81,	// (0x0004fc37) list_double2_large_graphic_pane_g2_ParamLimits

0x4f81,	// (0x0004fc37) list_double2_large_graphic_pane_g2

0x7cf6,	// (0x000529ac) list_double2_large_graphic_pane_g3_ParamLimits

0x7cf6,	// (0x000529ac) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0005a2ec) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0005a2ec) list_double2_large_graphic_pane_g

0x4f92,	// (0x0004fc48) list_double2_large_graphic_pane_t1_ParamLimits

0x4f92,	// (0x0004fc48) list_double2_large_graphic_pane_t1

0x4fa8,	// (0x0004fc5e) list_double2_large_graphic_pane_t2_ParamLimits

0x4fa8,	// (0x0004fc5e) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0005a2f3) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0005a2f3) list_double2_large_graphic_pane_t

0x4fba,	// (0x0004fc70) list_double_heading_pane_g1_ParamLimits

0x4fba,	// (0x0004fc70) list_double_heading_pane_g1

0x7d23,	// (0x000529d9) list_double_heading_pane_g2_ParamLimits

0x7d23,	// (0x000529d9) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0005a2f8) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0005a2f8) list_double_heading_pane_g

0x4fcb,	// (0x0004fc81) list_double_heading_pane_t1_ParamLimits

0x4fcb,	// (0x0004fc81) list_double_heading_pane_t1

0x4e35,	// (0x0004faeb) list_double_heading_pane_t2_ParamLimits

0x4e35,	// (0x0004faeb) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0005a2fd) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0005a2fd) list_double_heading_pane_t

0x4fe1,	// (0x0004fc97) list_double_graphic_heading_pane_g1_ParamLimits

0x4fe1,	// (0x0004fc97) list_double_graphic_heading_pane_g1

0x4fba,	// (0x0004fc70) list_double_graphic_heading_pane_g2_ParamLimits

0x4fba,	// (0x0004fc70) list_double_graphic_heading_pane_g2

0x7d23,	// (0x000529d9) list_double_graphic_heading_pane_g3_ParamLimits

0x7d23,	// (0x000529d9) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0005a302) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0005a302) list_double_graphic_heading_pane_g

0x4fed,	// (0x0004fca3) list_double_graphic_heading_pane_t1_ParamLimits

0x4fed,	// (0x0004fca3) list_double_graphic_heading_pane_t1

0x4efe,	// (0x0004fbb4) list_double_graphic_heading_pane_t2_ParamLimits

0x4efe,	// (0x0004fbb4) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0005a309) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0005a309) list_double_graphic_heading_pane_t

0x5003,	// (0x0004fcb9) list_double_time_pane_g1_ParamLimits

0x5003,	// (0x0004fcb9) list_double_time_pane_g1

0x5014,	// (0x0004fcca) list_double_time_pane_g2_ParamLimits

0x5014,	// (0x0004fcca) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0005a30e) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0005a30e) list_double_time_pane_g

0x5020,	// (0x0004fcd6) list_double_time_pane_t1_ParamLimits

0x5020,	// (0x0004fcd6) list_double_time_pane_t1

0x5036,	// (0x0004fcec) list_double_time_pane_t2_ParamLimits

0x5036,	// (0x0004fcec) list_double_time_pane_t2

0x5048,	// (0x0004fcfe) list_double_time_pane_t3_ParamLimits

0x5048,	// (0x0004fcfe) list_double_time_pane_t3

0x505a,	// (0x0004fd10) list_double_time_pane_t4_ParamLimits

0x505a,	// (0x0004fd10) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0005a313) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0005a313) list_double_time_pane_t

0x506c,	// (0x0004fd22) list_setting_pane_g1_ParamLimits

0x506c,	// (0x0004fd22) list_setting_pane_g1

0x4e13,	// (0x0004fac9) list_setting_pane_g2_ParamLimits

0x4e13,	// (0x0004fac9) list_setting_pane_g2

0x0001,

0xf666,	// (0x0005a31c) list_setting_pane_g_ParamLimits

0xf666,	// (0x0005a31c) list_setting_pane_g

0x5078,	// (0x0004fd2e) list_setting_pane_t1_ParamLimits

0x5078,	// (0x0004fd2e) list_setting_pane_t1

0x5092,	// (0x0004fd48) list_setting_pane_t2_ParamLimits

0x5092,	// (0x0004fd48) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0005a321) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0005a321) list_setting_pane_t

0x50d1,	// (0x0004fd87) set_value_pane_cp_ParamLimits

0x50d1,	// (0x0004fd87) set_value_pane_cp

0x50dd,	// (0x0004fd93) list_setting_number_pane_g1_ParamLimits

0x50dd,	// (0x0004fd93) list_setting_number_pane_g1

0x50e9,	// (0x0004fd9f) list_setting_number_pane_g2_ParamLimits

0x50e9,	// (0x0004fd9f) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0005a328) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0005a328) list_setting_number_pane_g

0x50f5,	// (0x0004fdab) list_setting_number_pane_t1_ParamLimits

0x50f5,	// (0x0004fdab) list_setting_number_pane_t1

0x510e,	// (0x0004fdc4) list_setting_number_pane_t2_ParamLimits

0x510e,	// (0x0004fdc4) list_setting_number_pane_t2

0x5128,	// (0x0004fdde) list_setting_number_pane_t3_ParamLimits

0x5128,	// (0x0004fdde) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0005a32d) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0005a32d) list_setting_number_pane_t

0x50d1,	// (0x0004fd87) set_value_pane_ParamLimits

0x50d1,	// (0x0004fd87) set_value_pane

0x8840,	// (0x000534f6) bg_set_opt_pane_ParamLimits

0x8840,	// (0x000534f6) bg_set_opt_pane

0x516b,	// (0x0004fe21) set_value_pane_t1

0x8861,	// (0x00053517) slider_set_pane_cp3

0x886a,	// (0x00053520) volume_small_pane_cp

0x8873,	// (0x00053529) list_form_gen_pane

0x887c,	// (0x00053532) scroll_pane_cp8

0x5181,	// (0x0004fe37) form_field_data_pane_ParamLimits

0x5181,	// (0x0004fe37) form_field_data_pane

0x51a5,	// (0x0004fe5b) form_field_data_wide_pane_ParamLimits

0x51a5,	// (0x0004fe5b) form_field_data_wide_pane

0x51c8,	// (0x0004fe7e) form_field_popup_pane_ParamLimits

0x51c8,	// (0x0004fe7e) form_field_popup_pane

0x51e8,	// (0x0004fe9e) form_field_popup_wide_pane_ParamLimits

0x51e8,	// (0x0004fe9e) form_field_popup_wide_pane

0x5207,	// (0x0004febd) form_field_slider_pane_ParamLimits

0x5207,	// (0x0004febd) form_field_slider_pane

0x521a,	// (0x0004fed0) form_field_slider_wide_pane_ParamLimits

0x521a,	// (0x0004fed0) form_field_slider_wide_pane

0x888d,	// (0x00053543) data_form_pane

0x5237,	// (0x0004feed) form_field_data_pane_t1

0x8899,	// (0x0005354f) input_focus_pane

0x524f,	// (0x0004ff05) data_form_wide_pane

0x526c,	// (0x0004ff22) form_field_data_wide_pane_t1

0x85fe,	// (0x000532b4) input_focus_pane_cp6

0x528e,	// (0x0004ff44) form_field_popup_pane_t1

0x8899,	// (0x0005354f) input_focus_pane_cp7

0x88bb,	// (0x00053571) list_form_pane

0x52ae,	// (0x0004ff64) form_field_popup_wide_pane_t1

0x8899,	// (0x0005354f) input_focus_pane_cp8

0x88c7,	// (0x0005357d) list_form_wide_pane

0x52cb,	// (0x0004ff81) form_field_slider_pane_t1_ParamLimits

0x52cb,	// (0x0004ff81) form_field_slider_pane_t1

0x52e1,	// (0x0004ff97) form_field_slider_pane_t2_ParamLimits

0x52e1,	// (0x0004ff97) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0005a33d) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0005a33d) form_field_slider_pane_t

0x7b9c,	// (0x00052852) input_focus_pane_cp9_ParamLimits

0x7b9c,	// (0x00052852) input_focus_pane_cp9

0x52f6,	// (0x0004ffac) slider_cont_pane_ParamLimits

0x52f6,	// (0x0004ffac) slider_cont_pane

0x88d6,	// (0x0005358c) form_field_slider_wide_pane_t1_ParamLimits

0x88d6,	// (0x0005358c) form_field_slider_wide_pane_t1

0x530a,	// (0x0004ffc0) form_field_slider_wide_pane_t2_ParamLimits

0x530a,	// (0x0004ffc0) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0005a342) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0005a342) form_field_slider_wide_pane_t

0x7b9c,	// (0x00052852) input_focus_pane_cp10_ParamLimits

0x7b9c,	// (0x00052852) input_focus_pane_cp10

0x531c,	// (0x0004ffd2) slider_cont_pane_cp1_ParamLimits

0x531c,	// (0x0004ffd2) slider_cont_pane_cp1

0x5330,	// (0x0004ffe6) slider_form_pane_cp

0x88e8,	// (0x0005359e) input_focus_pane_g1

0x88f0,	// (0x000535a6) input_focus_pane_g2

0x88f8,	// (0x000535ae) input_focus_pane_g3

0x8900,	// (0x000535b6) input_focus_pane_g4

0x8908,	// (0x000535be) input_focus_pane_g5

0x8910,	// (0x000535c6) input_focus_pane_g6

0x8918,	// (0x000535ce) input_focus_pane_g7

0x8920,	// (0x000535d6) input_focus_pane_g8

0x8928,	// (0x000535de) input_focus_pane_g9

0x7837,	// (0x000524ed) input_focus_pane_g10

0x0009,

0xf691,	// (0x0005a347) input_focus_pane_g

0xa376,	// (0x0005502c) wait_border_pane_g3_copy1

0x5338,	// (0x0004ffee) data_form_pane_t1

0x7837,	// (0x000524ed) wait_anim_pane_g1_copy1

0x64a0,	// (0x00051156) data_form_wide_pane_t1

0x5353,	// (0x00050009) list_form_graphic_pane_cp_ParamLimits

0x5353,	// (0x00050009) list_form_graphic_pane_cp

0xb2a3,	// (0x00055f59) slider_form_pane_g1

0xb2ac,	// (0x00055f62) slider_form_pane_g2

0x0006,

0xf994,	// (0x0005a64a) slider_form_pane_g

0x536c,	// (0x00050022) list_form_graphic_pane_ParamLimits

0x536c,	// (0x00050022) list_form_graphic_pane

0x5388,	// (0x0005003e) list_form_graphic_pane_g1

0x5390,	// (0x00050046) list_form_graphic_pane_t1_ParamLimits

0x5390,	// (0x00050046) list_form_graphic_pane_t1

0x7921,	// (0x000525d7) list_highlight_pane_cp5_ParamLimits

0x7921,	// (0x000525d7) list_highlight_pane_cp5

0x53a5,	// (0x0005005b) find_pane_g1

0x8930,	// (0x000535e6) input_find_pane

0x53ae,	// (0x00050064) input_find_pane_g1_ParamLimits

0x53ae,	// (0x00050064) input_find_pane_g1

0x53ba,	// (0x00050070) input_find_pane_t1_ParamLimits

0x53ba,	// (0x00050070) input_find_pane_t1

0x53cf,	// (0x00050085) input_find_pane_t2_ParamLimits

0x53cf,	// (0x00050085) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0005a35c) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0005a35c) input_find_pane_t

0x8939,	// (0x000535ef) input_focus_pane_cp5_ParamLimits

0x8939,	// (0x000535ef) input_focus_pane_cp5

0x8953,	// (0x00053609) bg_popup_window_pane_cp2_ParamLimits

0x8953,	// (0x00053609) bg_popup_window_pane_cp2

0x8960,	// (0x00053616) listscroll_menu_pane_ParamLimits

0x8960,	// (0x00053616) listscroll_menu_pane

0x896c,	// (0x00053622) popup_submenu_window_ParamLimits

0x896c,	// (0x00053622) popup_submenu_window

0x8998,	// (0x0005364e) find_popup_pane_g1

0x89a0,	// (0x00053656) input_popup_find_pane_cp

0x8939,	// (0x000535ef) input_focus_pane_cp4_ParamLimits

0x8939,	// (0x000535ef) input_focus_pane_cp4

0x89b6,	// (0x0005366c) input_popup_find_pane_t1_ParamLimits

0x89b6,	// (0x0005366c) input_popup_find_pane_t1

0x7841,	// (0x000524f7) bg_popup_sub_pane_cp

0x89e4,	// (0x0005369a) listscroll_popup_sub_pane

0x89ec,	// (0x000536a2) list_submenu_pane_ParamLimits

0x89ec,	// (0x000536a2) list_submenu_pane

0x89fd,	// (0x000536b3) scroll_pane_cp4

0x8a05,	// (0x000536bb) list_single_popup_submenu_pane_ParamLimits

0x8a05,	// (0x000536bb) list_single_popup_submenu_pane

0x8a19,	// (0x000536cf) list_single_popup_submenu_pane_g1

0x8a21,	// (0x000536d7) list_single_popup_submenu_pane_t1_ParamLimits

0x8a21,	// (0x000536d7) list_single_popup_submenu_pane_t1

0x7921,	// (0x000525d7) bg_active_tab_pane_cp1_ParamLimits

0x7921,	// (0x000525d7) bg_active_tab_pane_cp1

0x8a36,	// (0x000536ec) tabs_2_active_pane_g1

0x8a3e,	// (0x000536f4) tabs_2_active_pane_t1

0x7921,	// (0x000525d7) bg_passive_tab_pane_cp1_ParamLimits

0x7921,	// (0x000525d7) bg_passive_tab_pane_cp1

0x8a36,	// (0x000536ec) tabs_2_passive_pane_g1

0x8a3e,	// (0x000536f4) tabs_2_passive_pane_t1

0x8a50,	// (0x00053706) bg_active_tab_pane_cp4

0x8a5e,	// (0x00053714) tabs_2_long_active_pane_t1

0x8a71,	// (0x00053727) bg_passive_tab_pane_cp4

0x608b,	// (0x00050d41) list_single_midp_graphic_pane_g4_ParamLimits

0x8a50,	// (0x00053706) bg_active_tab_pane_cp5

0x8a7d,	// (0x00053733) tabs_3_long_active_pane_t1

0x8a71,	// (0x00053727) bg_passive_tab_pane_cp5

0x608b,	// (0x00050d41) list_single_midp_graphic_pane_g4

0x7921,	// (0x000525d7) bg_popup_window_pane_cp13_ParamLimits

0x7921,	// (0x000525d7) bg_popup_window_pane_cp13

0x8a98,	// (0x0005374e) listscroll_popup_fast_pane_ParamLimits

0x8a98,	// (0x0005374e) listscroll_popup_fast_pane

0x8aa7,	// (0x0005375d) grid_popup_fast_pane_ParamLimits

0x8aa7,	// (0x0005375d) grid_popup_fast_pane

0x8ab9,	// (0x0005376f) scroll_pane_cp9_ParamLimits

0x8ab9,	// (0x0005376f) scroll_pane_cp9

0xcb6a,	// (0x00057820) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcb6a,	// (0x00057820) list_single_graphic_hl_pane_t1_cp2

0x8add,	// (0x00053793) input_focus_pane_cp20_ParamLimits

0x8add,	// (0x00053793) input_focus_pane_cp20

0x8aeb,	// (0x000537a1) query_popup_data_pane_t1_ParamLimits

0x8aeb,	// (0x000537a1) query_popup_data_pane_t1

0x8afe,	// (0x000537b4) query_popup_data_pane_t2_ParamLimits

0x8afe,	// (0x000537b4) query_popup_data_pane_t2

0x8b44,	// (0x000537fa) query_popup_data_pane_t3_ParamLimits

0x8b44,	// (0x000537fa) query_popup_data_pane_t3

0x8b85,	// (0x0005383b) query_popup_data_pane_t4_ParamLimits

0x8b85,	// (0x0005383b) query_popup_data_pane_t4

0x8bc1,	// (0x00053877) query_popup_data_pane_t5_ParamLimits

0x8bc1,	// (0x00053877) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0005a361) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0005a361) query_popup_data_pane_t

0x88e8,	// (0x0005359e) bg_set_opt_pane_g1

0x88f0,	// (0x000535a6) bg_set_opt_pane_g2

0x88f8,	// (0x000535ae) bg_set_opt_pane_g3

0x8900,	// (0x000535b6) bg_set_opt_pane_g4

0x8908,	// (0x000535be) bg_set_opt_pane_g5

0x8910,	// (0x000535c6) bg_set_opt_pane_g6

0x8918,	// (0x000535ce) bg_set_opt_pane_g7

0x8920,	// (0x000535d6) bg_set_opt_pane_g8

0x8928,	// (0x000535de) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0005a36c) bg_set_opt_pane_g

0x56ef,	// (0x000503a5) control_top_pane_stacon_ParamLimits

0x56ef,	// (0x000503a5) control_top_pane_stacon

0x5742,	// (0x000503f8) signal_pane_stacon_ParamLimits

0x5742,	// (0x000503f8) signal_pane_stacon

0x91ad,	// (0x00053e63) stacon_top_pane_g1_ParamLimits

0x91ad,	// (0x00053e63) stacon_top_pane_g1

0x5767,	// (0x0005041d) title_pane_stacon_ParamLimits

0x5767,	// (0x0005041d) title_pane_stacon

0x5791,	// (0x00050447) uni_indicator_pane_stacon_ParamLimits

0x5791,	// (0x00050447) uni_indicator_pane_stacon

0x57a6,	// (0x0005045c) battery_pane_stacon_ParamLimits

0x57a6,	// (0x0005045c) battery_pane_stacon

0x57ea,	// (0x000504a0) control_bottom_pane_stacon_ParamLimits

0x57ea,	// (0x000504a0) control_bottom_pane_stacon

0x580d,	// (0x000504c3) navi_pane_stacon_ParamLimits

0x580d,	// (0x000504c3) navi_pane_stacon

0x91cf,	// (0x00053e85) stacon_bottom_pane_g1_ParamLimits

0x91cf,	// (0x00053e85) stacon_bottom_pane_g1

0x53e4,	// (0x0005009a) aid_levels_signal_lsc_ParamLimits

0x53e4,	// (0x0005009a) aid_levels_signal_lsc

0x53fa,	// (0x000500b0) signal_pane_stacon_g1_ParamLimits

0x53fa,	// (0x000500b0) signal_pane_stacon_g1

0x540e,	// (0x000500c4) signal_pane_stacon_g2_ParamLimits

0x540e,	// (0x000500c4) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0005a37f) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0005a37f) signal_pane_stacon_g

0x5443,	// (0x000500f9) title_pane_stacon_t1_ParamLimits

0x5443,	// (0x000500f9) title_pane_stacon_t1

0x8c05,	// (0x000538bb) uni_indicator_pane_stacon_g1

0x8c0f,	// (0x000538c5) uni_indicator_pane_stacon_g2

0x8c19,	// (0x000538cf) uni_indicator_pane_stacon_g3

0x8c23,	// (0x000538d9) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0005a38b) uni_indicator_pane_stacon_g

0x5468,	// (0x0005011e) control_top_pane_stacon_g1

0x5470,	// (0x00050126) control_top_pane_stacon_t1_ParamLimits

0x5470,	// (0x00050126) control_top_pane_stacon_t1

0x54a7,	// (0x0005015d) aid_levels_battery_lsc_ParamLimits

0x54a7,	// (0x0005015d) aid_levels_battery_lsc

0x54be,	// (0x00050174) battery_pane_stacon_g1_ParamLimits

0x54be,	// (0x00050174) battery_pane_stacon_g1

0x54d1,	// (0x00050187) battery_pane_stacon_g2_ParamLimits

0x54d1,	// (0x00050187) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0005a394) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0005a394) battery_pane_stacon_g

0x550f,	// (0x000501c5) navi_icon_pane_stacon

0x5523,	// (0x000501d9) navi_navi_pane_stacon

0x550f,	// (0x000501c5) navi_text_pane_stacon

0x5468,	// (0x0005011e) control_bottom_pane_stacon_g1

0x5537,	// (0x000501ed) control_bottom_pane_stacon_t1_ParamLimits

0x5537,	// (0x000501ed) control_bottom_pane_stacon_t1

0x8c47,	// (0x000538fd) grid_app_pane_ParamLimits

0x8c47,	// (0x000538fd) grid_app_pane

0x8c6b,	// (0x00053921) scroll_pane_cp15_ParamLimits

0x8c6b,	// (0x00053921) scroll_pane_cp15

0x8c7e,	// (0x00053934) cell_app_pane_ParamLimits

0x8c7e,	// (0x00053934) cell_app_pane

0x8ca2,	// (0x00053958) cell_app_pane_g1_ParamLimits

0x8ca2,	// (0x00053958) cell_app_pane_g1

0x8cc2,	// (0x00053978) cell_app_pane_g2_ParamLimits

0x8cc2,	// (0x00053978) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0005a399) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0005a399) cell_app_pane_g

0x8cce,	// (0x00053984) cell_app_pane_t1_ParamLimits

0x8cce,	// (0x00053984) cell_app_pane_t1

0x8ce5,	// (0x0005399b) grid_highlight_pane_ParamLimits

0x8ce5,	// (0x0005399b) grid_highlight_pane

0x88e8,	// (0x0005359e) cell_highlight_pane_g1

0x88f0,	// (0x000535a6) cell_highlight_pane_g2

0x88f8,	// (0x000535ae) cell_highlight_pane_g3

0x8900,	// (0x000535b6) cell_highlight_pane_g4

0x8908,	// (0x000535be) cell_highlight_pane_g5

0x8910,	// (0x000535c6) cell_highlight_pane_g6

0x8918,	// (0x000535ce) cell_highlight_pane_g7

0x8920,	// (0x000535d6) cell_highlight_pane_g8

0x8928,	// (0x000535de) cell_highlight_pane_g9

0x7837,	// (0x000524ed) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0005a347) cell_highlight_pane_g

0x8cf6,	// (0x000539ac) bg_scroll_pane

0x5581,	// (0x00050237) scroll_handle_pane

0x8d3d,	// (0x000539f3) scroll_bg_pane_g1

0x8d52,	// (0x00053a08) scroll_bg_pane_g2

0x8d6a,	// (0x00053a20) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0005a39e) scroll_bg_pane_g

0x8d7f,	// (0x00053a35) scroll_handle_focus_pane_ParamLimits

0x8d7f,	// (0x00053a35) scroll_handle_focus_pane

0x8d3d,	// (0x000539f3) scroll_handle_pane_g1

0x8d8c,	// (0x00053a42) scroll_handle_pane_g2

0x8d6a,	// (0x00053a20) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0005a3a5) scroll_handle_pane_g

0x8939,	// (0x000535ef) bg_popup_sub_pane_cp21_ParamLimits

0x8939,	// (0x000535ef) bg_popup_sub_pane_cp21

0x8da0,	// (0x00053a56) popup_fep_japan_predictive_window_t1_ParamLimits

0x8da0,	// (0x00053a56) popup_fep_japan_predictive_window_t1

0x8dba,	// (0x00053a70) popup_fep_japan_predictive_window_t2_ParamLimits

0x8dba,	// (0x00053a70) popup_fep_japan_predictive_window_t2

0x8ded,	// (0x00053aa3) popup_fep_japan_predictive_window_t3_ParamLimits

0x8ded,	// (0x00053aa3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0005a3ac) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0005a3ac) popup_fep_japan_predictive_window_t

0x7841,	// (0x000524f7) bg_popup_sub_pane_cp23

0x8e24,	// (0x00053ada) listscroll_japin_cand_pane

0x8e2c,	// (0x00053ae2) popup_fep_japan_candidate_window_t1

0x8e3a,	// (0x00053af0) candidate_pane_ParamLimits

0x8e3a,	// (0x00053af0) candidate_pane

0x8e4c,	// (0x00053b02) scroll_pane_cp30

0x8e54,	// (0x00053b0a) list_single_popup_jap_candidate_pane_ParamLimits

0x8e54,	// (0x00053b0a) list_single_popup_jap_candidate_pane

0x7841,	// (0x000524f7) list_highlight_pane_cp30

0x8e69,	// (0x00053b1f) list_single_popup_jap_candidate_pane_t1

0x8e78,	// (0x00053b2e) level_1_signal

0x8e8a,	// (0x00053b40) level_2_signal

0x8e9d,	// (0x00053b53) level_3_signal

0x8eb0,	// (0x00053b66) level_4_signal

0x8ec3,	// (0x00053b79) level_5_signal

0x8ed6,	// (0x00053b8c) level_6_signal

0x8ee9,	// (0x00053b9f) level_7_signal

0x8e78,	// (0x00053b2e) level_1_battery

0x8e8a,	// (0x00053b40) level_2_battery

0x8e9d,	// (0x00053b53) level_3_battery

0x8eb0,	// (0x00053b66) level_4_battery

0x8ec3,	// (0x00053b79) level_5_battery

0x8ed6,	// (0x00053b8c) level_6_battery

0x8ee9,	// (0x00053b9f) level_7_battery

0x8f14,	// (0x00053bca) list_menu_pane_ParamLimits

0x8f14,	// (0x00053bca) list_menu_pane

0x8f2a,	// (0x00053be0) scroll_pane_cp25_ParamLimits

0x8f2a,	// (0x00053be0) scroll_pane_cp25

0x8f43,	// (0x00053bf9) list_double2_graphic_pane_cp2_ParamLimits

0x8f43,	// (0x00053bf9) list_double2_graphic_pane_cp2

0x8f43,	// (0x00053bf9) list_double2_large_graphic_pane_cp2_ParamLimits

0x8f43,	// (0x00053bf9) list_double2_large_graphic_pane_cp2

0x8f43,	// (0x00053bf9) list_double2_pane_cp2_ParamLimits

0x8f43,	// (0x00053bf9) list_double2_pane_cp2

0x8f43,	// (0x00053bf9) list_double_graphic_pane_cp2_ParamLimits

0x8f43,	// (0x00053bf9) list_double_graphic_pane_cp2

0x8f43,	// (0x00053bf9) list_double_large_graphic_pane_cp2_ParamLimits

0x8f43,	// (0x00053bf9) list_double_large_graphic_pane_cp2

0x8f43,	// (0x00053bf9) list_double_number_pane_cp2_ParamLimits

0x8f43,	// (0x00053bf9) list_double_number_pane_cp2

0x8f43,	// (0x00053bf9) list_double_pane_cp2_ParamLimits

0x8f43,	// (0x00053bf9) list_double_pane_cp2

0x8f67,	// (0x00053c1d) list_single_2graphic_pane_cp2_ParamLimits

0x8f67,	// (0x00053c1d) list_single_2graphic_pane_cp2

0x8f67,	// (0x00053c1d) list_single_graphic_heading_pane_cp2_ParamLimits

0x8f67,	// (0x00053c1d) list_single_graphic_heading_pane_cp2

0x8f67,	// (0x00053c1d) list_single_graphic_pane_cp2_ParamLimits

0x8f67,	// (0x00053c1d) list_single_graphic_pane_cp2

0x8f67,	// (0x00053c1d) list_single_heading_pane_cp2_ParamLimits

0x8f67,	// (0x00053c1d) list_single_heading_pane_cp2

0x8f80,	// (0x00053c36) list_single_large_graphic_pane_cp2_ParamLimits

0x8f80,	// (0x00053c36) list_single_large_graphic_pane_cp2

0x8f67,	// (0x00053c1d) list_single_number_heading_pane_cp2_ParamLimits

0x8f67,	// (0x00053c1d) list_single_number_heading_pane_cp2

0x8f67,	// (0x00053c1d) list_single_number_pane_cp2_ParamLimits

0x8f67,	// (0x00053c1d) list_single_number_pane_cp2

0x8f67,	// (0x00053c1d) list_single_pane_cp2_ParamLimits

0x8f67,	// (0x00053c1d) list_single_pane_cp2

0x8ffc,	// (0x00053cb2) bg_popup_sub_pane_cp22

0x5633,	// (0x000502e9) popup_side_volume_key_window_g1

0x565d,	// (0x00050313) popup_side_volume_key_window_t1

0x5679,	// (0x0005032f) volume_small_pane_cp1

0x7b9c,	// (0x00052852) bg_popup_sub_pane_cp24_ParamLimits

0x7b9c,	// (0x00052852) bg_popup_sub_pane_cp24

0x9012,	// (0x00053cc8) fep_china_uni_candidate_pane_ParamLimits

0x9012,	// (0x00053cc8) fep_china_uni_candidate_pane

0x9026,	// (0x00053cdc) fep_china_uni_entry_pane

0x9036,	// (0x00053cec) popup_fep_china_uni_window_g1

0x9052,	// (0x00053d08) fep_china_uni_entry_pane_g1

0x905a,	// (0x00053d10) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0005a3dd) fep_china_uni_entry_pane_g

0x9062,	// (0x00053d18) fep_entry_item_pane

0x906c,	// (0x00053d22) fep_candidate_item_pane

0x9074,	// (0x00053d2a) fep_china_uni_candidate_pane_g1

0x907c,	// (0x00053d32) fep_china_uni_candidate_pane_g2

0x9084,	// (0x00053d3a) fep_china_uni_candidate_pane_g3

0x908c,	// (0x00053d42) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0005a3e2) fep_china_uni_candidate_pane_g

0x7837,	// (0x000524ed) fep_entry_item_pane_g1

0x9094,	// (0x00053d4a) fep_entry_item_pane_t1_ParamLimits

0x9094,	// (0x00053d4a) fep_entry_item_pane_t1

0x90aa,	// (0x00053d60) fep_candidate_item_pane_t1_ParamLimits

0x90aa,	// (0x00053d60) fep_candidate_item_pane_t1

0x90bf,	// (0x00053d75) fep_candidate_item_pane_t2_ParamLimits

0x90bf,	// (0x00053d75) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0005a3eb) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0005a3eb) fep_candidate_item_pane_t

0x7921,	// (0x000525d7) list_highlight_pane_cp31_ParamLimits

0x7921,	// (0x000525d7) list_highlight_pane_cp31

0x90d1,	// (0x00053d87) level_1_signal_lsc

0x90da,	// (0x00053d90) level_2_signal_lsc

0x90e3,	// (0x00053d99) level_3_signal_lsc

0x90ec,	// (0x00053da2) level_4_signal_lsc

0x90f5,	// (0x00053dab) level_5_signal_lsc

0x90fe,	// (0x00053db4) level_6_signal_lsc

0x9107,	// (0x00053dbd) level_7_signal_lsc

0x9107,	// (0x00053dbd) level_1_battery_lsc

0x9110,	// (0x00053dc6) level_2_battery_lsc

0x9119,	// (0x00053dcf) level_3_battery_lsc

0x9122,	// (0x00053dd8) level_4_battery_lsc

0x912b,	// (0x00053de1) level_5_battery_lsc

0x9134,	// (0x00053dea) level_6_battery_lsc

0x90d1,	// (0x00053d87) level_7_battery_lsc

0x913d,	// (0x00053df3) scroll_handle_focus_pane_g1

0x9146,	// (0x00053dfc) scroll_handle_focus_pane_g2

0x914f,	// (0x00053e05) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0005a3f0) scroll_handle_focus_pane_g

0x5681,	// (0x00050337) list_single_2graphic_pane_g1_ParamLimits

0x5681,	// (0x00050337) list_single_2graphic_pane_g1

0x7cad,	// (0x00052963) list_single_2graphic_pane_g2_ParamLimits

0x7cad,	// (0x00052963) list_single_2graphic_pane_g2

0x7c8f,	// (0x00052945) list_single_2graphic_pane_g3_ParamLimits

0x7c8f,	// (0x00052945) list_single_2graphic_pane_g3

0x568d,	// (0x00050343) list_single_2graphic_pane_g4_ParamLimits

0x568d,	// (0x00050343) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0005a3f7) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0005a3f7) list_single_2graphic_pane_g

0x5699,	// (0x0005034f) list_single_2graphic_pane_t1_ParamLimits

0x5699,	// (0x0005034f) list_single_2graphic_pane_t1

0x7d2f,	// (0x000529e5) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7d2f,	// (0x000529e5) list_double2_graphic_large_graphic_pane_g1

0x4f81,	// (0x0004fc37) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4f81,	// (0x0004fc37) list_double2_graphic_large_graphic_pane_g2

0x7cf6,	// (0x000529ac) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7cf6,	// (0x000529ac) list_double2_graphic_large_graphic_pane_g3

0x7d3f,	// (0x000529f5) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7d3f,	// (0x000529f5) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0005a400) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0005a400) list_double2_graphic_large_graphic_pane_g

0x56c7,	// (0x0005037d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x56c7,	// (0x0005037d) list_double2_graphic_large_graphic_pane_t1

0x56dd,	// (0x00050393) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x56dd,	// (0x00050393) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0005a409) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0005a409) list_double2_graphic_large_graphic_pane_t

0x9297,	// (0x00053f4d) popup_fast_swap_window_ParamLimits

0x9297,	// (0x00053f4d) popup_fast_swap_window

0x92b3,	// (0x00053f69) popup_side_volume_key_window

0x92cf,	// (0x00053f85) stacon_top_pane

0x92d9,	// (0x00053f8f) status_pane_ParamLimits

0x92d9,	// (0x00053f8f) status_pane

0x92e7,	// (0x00053f9d) status_small_pane

0x7841,	// (0x000524f7) control_pane

0x7841,	// (0x000524f7) stacon_bottom_pane

0x887c,	// (0x00053532) scroll_pane_cp121

0x8873,	// (0x00053529) set_content_pane

0x9158,	// (0x00053e0e) bg_active_tab_pane_g1_cp1

0x9161,	// (0x00053e17) bg_active_tab_pane_g2_cp1

0x916a,	// (0x00053e20) bg_active_tab_pane_g3_cp1

0x9158,	// (0x00053e0e) bg_passive_tab_pane_g1_cp1

0x9161,	// (0x00053e17) bg_passive_tab_pane_g2_cp1

0x916a,	// (0x00053e20) bg_passive_tab_pane_g3_cp1

0x9173,	// (0x00053e29) bg_active_tab_pane_g1_cp2

0x9161,	// (0x00053e17) bg_active_tab_pane_g2_cp2

0x917c,	// (0x00053e32) bg_active_tab_pane_g3_cp2

0x9173,	// (0x00053e29) bg_passive_tab_pane_g1_cp2

0x9161,	// (0x00053e17) bg_passive_tab_pane_g2_cp2

0x917c,	// (0x00053e32) bg_passive_tab_pane_g3_cp2

0x9185,	// (0x00053e3b) bg_active_tab_pane_g1_cp3

0x9161,	// (0x00053e17) bg_active_tab_pane_g2_cp3

0x918e,	// (0x00053e44) bg_active_tab_pane_g3_cp3

0x9185,	// (0x00053e3b) bg_passive_tab_pane_g1_cp3

0x9161,	// (0x00053e17) bg_passive_tab_pane_g2_cp3

0x918e,	// (0x00053e44) bg_passive_tab_pane_g3_cp3

0x9197,	// (0x00053e4d) bg_active_tab_pane_g1_cp4

0x9161,	// (0x00053e17) bg_active_tab_pane_g2_cp4

0x91a2,	// (0x00053e58) bg_active_tab_pane_g3_cp4

0x9197,	// (0x00053e4d) bg_passive_tab_pane_g1_cp4

0x9161,	// (0x00053e17) bg_passive_tab_pane_g2_cp4

0x91a2,	// (0x00053e58) bg_passive_tab_pane_g3_cp4

0x91eb,	// (0x00053ea1) bg_active_tab_pane_g1_cp5

0x9161,	// (0x00053e17) bg_active_tab_pane_g2_cp5

0x91f4,	// (0x00053eaa) bg_active_tab_pane_g3_cp5

0x91eb,	// (0x00053ea1) bg_passive_tab_pane_g1_cp5

0x9161,	// (0x00053e17) bg_passive_tab_pane_g2_cp5

0x91f4,	// (0x00053eaa) bg_passive_tab_pane_g3_cp5

0x91fd,	// (0x00053eb3) list_set_graphic_pane_ParamLimits

0x91fd,	// (0x00053eb3) list_set_graphic_pane

0x7841,	// (0x000524f7) bg_set_opt_pane_cp4

0x921a,	// (0x00053ed0) list_set_graphic_pane_g1_ParamLimits

0x921a,	// (0x00053ed0) list_set_graphic_pane_g1

0x9226,	// (0x00053edc) list_set_graphic_pane_g2_ParamLimits

0x9226,	// (0x00053edc) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0005a40e) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0005a40e) list_set_graphic_pane_g

0x0009,

0xfacd,	// (0x0005a783) volume_small_pane_cp_g

0x924a,	// (0x00053f00) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x924a,	// (0x00053f00) list_double2_large_graphic_pane_g1_cp2

0x9256,	// (0x00053f0c) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9256,	// (0x00053f0c) list_double2_large_graphic_pane_g2_cp2

0x9267,	// (0x00053f1d) list_double2_large_graphic_pane_g3_cp2

0x926f,	// (0x00053f25) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x926f,	// (0x00053f25) list_double2_large_graphic_pane_t1_cp2

0x9285,	// (0x00053f3b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9285,	// (0x00053f3b) list_double2_large_graphic_pane_t2_cp2

0xae55,	// (0x00055b0b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xae55,	// (0x00055b0b) list_double_large_graphic_pane_g1_cp2

0xae66,	// (0x00055b1c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xae66,	// (0x00055b1c) list_double_large_graphic_pane_g2_cp2

0x9400,	// (0x000540b6) list_double_large_graphic_pane_g3_cp2

0xae77,	// (0x00055b2d) list_double_large_graphic_pane_g4_cp

0xae7f,	// (0x00055b35) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae7f,	// (0x00055b35) list_double_large_graphic_pane_t1_cp2

0xae96,	// (0x00055b4c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae96,	// (0x00055b4c) list_double_large_graphic_pane_t2_cp2

0x92f2,	// (0x00053fa8) list_double2_graphic_pane_g1_cp2_ParamLimits

0x92f2,	// (0x00053fa8) list_double2_graphic_pane_g1_cp2

0x9300,	// (0x00053fb6) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9300,	// (0x00053fb6) list_double2_graphic_pane_g2_cp2

0x9311,	// (0x00053fc7) list_double2_graphic_pane_g3_cp2

0x931b,	// (0x00053fd1) list_double2_graphic_pane_t1_cp2_ParamLimits

0x931b,	// (0x00053fd1) list_double2_graphic_pane_t1_cp2

0x9331,	// (0x00053fe7) list_double2_graphic_pane_t2_cp2_ParamLimits

0x9331,	// (0x00053fe7) list_double2_graphic_pane_t2_cp2

0x9343,	// (0x00053ff9) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9343,	// (0x00053ff9) list_single_number_heading_pane_g1_cp2

0x934f,	// (0x00054005) list_single_number_heading_pane_g2_cp2

0x9357,	// (0x0005400d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9357,	// (0x0005400d) list_single_number_heading_pane_t1_cp2

0x936d,	// (0x00054023) list_single_number_heading_pane_t2_cp2_ParamLimits

0x936d,	// (0x00054023) list_single_number_heading_pane_t2_cp2

0x937f,	// (0x00054035) list_single_number_heading_pane_t3_cp2_ParamLimits

0x937f,	// (0x00054035) list_single_number_heading_pane_t3_cp2

0x9343,	// (0x00053ff9) list_single_heading_pane_g1_cp2_ParamLimits

0x9343,	// (0x00053ff9) list_single_heading_pane_g1_cp2

0x934f,	// (0x00054005) list_single_heading_pane_g2_cp2

0x9357,	// (0x0005400d) list_single_heading_pane_t1_cp2_ParamLimits

0x9357,	// (0x0005400d) list_single_heading_pane_t1_cp2

0xac5d,	// (0x00055913) list_single_heading_pane_t2_cp2_ParamLimits

0xac5d,	// (0x00055913) list_single_heading_pane_t2_cp2

0xaba5,	// (0x0005585b) list_double_graphic_pane_g1_cp2_ParamLimits

0xaba5,	// (0x0005585b) list_double_graphic_pane_g1_cp2

0xabb1,	// (0x00055867) list_double_graphic_pane_g2_cp2_ParamLimits

0xabb1,	// (0x00055867) list_double_graphic_pane_g2_cp2

0xabc0,	// (0x00055876) list_double_graphic_pane_g3_cp2

0xabc8,	// (0x0005587e) list_double_graphic_pane_t1_cp2_ParamLimits

0xabc8,	// (0x0005587e) list_double_graphic_pane_t1_cp2

0xabde,	// (0x00055894) list_double_graphic_pane_t2_cp2_ParamLimits

0xabde,	// (0x00055894) list_double_graphic_pane_t2_cp2

0x93f4,	// (0x000540aa) list_double_number_pane_g1_cp2_ParamLimits

0x93f4,	// (0x000540aa) list_double_number_pane_g1_cp2

0x9400,	// (0x000540b6) list_double_number_pane_g2_cp2

0xab69,	// (0x0005581f) list_double_number_pane_t1_cp2_ParamLimits

0xab69,	// (0x0005581f) list_double_number_pane_t1_cp2

0xab7d,	// (0x00055833) list_double_number_pane_t2_cp2_ParamLimits

0xab7d,	// (0x00055833) list_double_number_pane_t2_cp2

0xab93,	// (0x00055849) list_double_number_pane_t3_cp2_ParamLimits

0xab93,	// (0x00055849) list_double_number_pane_t3_cp2

0xaa52,	// (0x00055708) list_single_graphic_pane_g1_cp2_ParamLimits

0xaa52,	// (0x00055708) list_single_graphic_pane_g1_cp2

0x9458,	// (0x0005410e) list_single_graphic_pane_g2_cp2_ParamLimits

0x9458,	// (0x0005410e) list_single_graphic_pane_g2_cp2

0x9464,	// (0x0005411a) list_single_graphic_pane_g3_cp2

0xaa28,	// (0x000556de) list_single_graphic_pane_t1_cp2_ParamLimits

0xaa28,	// (0x000556de) list_single_graphic_pane_t1_cp2

0x9458,	// (0x0005410e) list_single_number_pane_g1_cp2_ParamLimits

0x9458,	// (0x0005410e) list_single_number_pane_g1_cp2

0x9464,	// (0x0005411a) list_single_number_pane_g2_cp2

0xaa28,	// (0x000556de) list_single_number_pane_t1_cp2_ParamLimits

0xaa28,	// (0x000556de) list_single_number_pane_t1_cp2

0xaa3e,	// (0x000556f4) list_single_number_pane_t2_cp2_ParamLimits

0xaa3e,	// (0x000556f4) list_single_number_pane_t2_cp2

0x9256,	// (0x00053f0c) list_double2_pane_g1_cp2_ParamLimits

0x9256,	// (0x00053f0c) list_double2_pane_g1_cp2

0x9267,	// (0x00053f1d) list_double2_pane_g2_cp2

0x93cc,	// (0x00054082) list_double2_pane_t1_cp2_ParamLimits

0x93cc,	// (0x00054082) list_double2_pane_t1_cp2

0x93e2,	// (0x00054098) list_double2_pane_t2_cp2_ParamLimits

0x93e2,	// (0x00054098) list_double2_pane_t2_cp2

0x93f4,	// (0x000540aa) list_double_pane_g1_cp2_ParamLimits

0x93f4,	// (0x000540aa) list_double_pane_g1_cp2

0x9400,	// (0x000540b6) list_double_pane_g2_cp2

0x9408,	// (0x000540be) list_double_pane_t1_cp2_ParamLimits

0x9408,	// (0x000540be) list_double_pane_t1_cp2

0x941e,	// (0x000540d4) list_double_pane_t2_cp2_ParamLimits

0x941e,	// (0x000540d4) list_double_pane_t2_cp2

0x9448,	// (0x000540fe) list_single_pane_cp2_g3

0x9458,	// (0x0005410e) list_single_pane_g1_cp2_ParamLimits

0x9458,	// (0x0005410e) list_single_pane_g1_cp2

0x9464,	// (0x0005411a) list_single_pane_g2_cp2

0x946c,	// (0x00054122) list_single_pane_t1_cp2_ParamLimits

0x946c,	// (0x00054122) list_single_pane_t1_cp2

0x9484,	// (0x0005413a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9484,	// (0x0005413a) list_single_large_graphic_pane_g1_cp2

0x9490,	// (0x00054146) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9490,	// (0x00054146) list_single_large_graphic_pane_g2_cp2

0x949c,	// (0x00054152) list_single_large_graphic_pane_g3_cp2

0x94a4,	// (0x0005415a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x94a4,	// (0x0005415a) list_single_large_graphic_pane_g4_cp1

0x94be,	// (0x00054174) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x94be,	// (0x00054174) list_single_large_graphic_pane_t1_cp2

0xa9f4,	// (0x000556aa) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa9f4,	// (0x000556aa) list_single_graphic_heading_pane_g1_cp2

0xa9c1,	// (0x00055677) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa9c1,	// (0x00055677) list_single_graphic_heading_pane_g4_cp2

0x9464,	// (0x0005411a) list_single_graphic_heading_pane_g5_cp2

0xaa00,	// (0x000556b6) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xaa00,	// (0x000556b6) list_single_graphic_heading_pane_t1_cp2

0xaa16,	// (0x000556cc) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xaa16,	// (0x000556cc) list_single_graphic_heading_pane_t2_cp2

0xa9b5,	// (0x0005566b) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa9b5,	// (0x0005566b) list_single_2graphic_pane_g1_cp2

0xa9c1,	// (0x00055677) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa9c1,	// (0x00055677) list_single_2graphic_pane_g2_cp2

0x9464,	// (0x0005411a) list_single_2graphic_pane_g3_cp2

0xa9d2,	// (0x00055688) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa9d2,	// (0x00055688) list_single_2graphic_pane_g4_cp2

0xa9de,	// (0x00055694) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa9de,	// (0x00055694) list_single_2graphic_pane_t1_cp2

0x7837,	// (0x000524ed) list_highlight_pane_g10_cp1

0xa581,	// (0x00055237) list_highlight_pane_g1_cp1

0xa589,	// (0x0005523f) list_highlight_pane_g2_cp1

0xa591,	// (0x00055247) list_highlight_pane_g3_cp1

0xa599,	// (0x0005524f) list_highlight_pane_g4_cp1

0xa5a1,	// (0x00055257) list_highlight_pane_g5_cp1

0xa5a9,	// (0x0005525f) list_highlight_pane_g6_cp1

0xa5b1,	// (0x00055267) list_highlight_pane_g7_cp1

0xa5b9,	// (0x0005526f) list_highlight_pane_g8_cp1

0xa5c1,	// (0x00055277) list_highlight_pane_g9_cp1

0xa4a1,	// (0x00055157) form_field_slider_pane_t3

0xa4af,	// (0x00055165) form_field_slider_pane_t4

0xa4bd,	// (0x00055173) slider_form_pane_ParamLimits

0xa4bd,	// (0x00055173) slider_form_pane

0x7841,	// (0x000524f7) control_abbreviations

0x7841,	// (0x000524f7) control_conventions

0x7841,	// (0x000524f7) control_definitions

0x7841,	// (0x000524f7) format_table_attribute

0xaca7,	// (0x0005595d) bg_popup_preview_window_pane_g9

0x7841,	// (0x000524f7) format_table_data2

0x7841,	// (0x000524f7) format_table_data3

0x7841,	// (0x000524f7) format_table_data_example

0x0008,

0x7841,	// (0x000524f7) intro_purpose

0xf8f4,	// (0x0005a5aa) bg_popup_preview_window_pane_g

0x7841,	// (0x000524f7) texts_category

0x7841,	// (0x000524f7) texts_graphics

0x94d4,	// (0x0005418a) text_digital

0x94e3,	// (0x00054199) text_primary

0x94f2,	// (0x000541a8) text_primary_small

0x9501,	// (0x000541b7) text_secondary

0x9510,	// (0x000541c6) text_title

0xb38d,	// (0x00056043) bg_passive_tab_pane_g1_cp3_srt

0x9161,	// (0x00053e17) bg_passive_tab_pane_g2_cp3_srt

0xb396,	// (0x0005604c) bg_passive_tab_pane_g3_cp3_srt

0x7921,	// (0x000525d7) bg_active_tab_pane_cp3_srt_ParamLimits

0x7921,	// (0x000525d7) bg_active_tab_pane_cp3_srt

0xb39f,	// (0x00056055) tabs_4_active_pane_srt_g1

0xb3a7,	// (0x0005605d) tabs_4_active_pane_srt_t1_ParamLimits

0xb3a7,	// (0x0005605d) tabs_4_active_pane_srt_t1

0xb38d,	// (0x00056043) bg_active_tab_pane_g1_cp3_copy1

0x9161,	// (0x00053e17) bg_active_tab_pane_g2_cp3_copy1

0xb396,	// (0x0005604c) bg_active_tab_pane_g3_cp3_copy1

0x7921,	// (0x000525d7) tabs_2_long_active_pane_srt_ParamLimits

0x7921,	// (0x000525d7) tabs_2_long_active_pane_srt

0x7921,	// (0x000525d7) tabs_2_long_passive_pane_srt_ParamLimits

0x7921,	// (0x000525d7) tabs_2_long_passive_pane_srt

0x8a71,	// (0x00053727) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8a71,	// (0x00053727) bg_passive_tab_pane_cp4_srt

0xb0d6,	// (0x00055d8c) bg_passive_tab_pane_g1_cp4_srt

0x9161,	// (0x00053e17) bg_passive_tab_pane_g2_cp4_srt

0xb0df,	// (0x00055d95) bg_passive_tab_pane_g3_cp4_srt

0x8a50,	// (0x00053706) bg_active_tab_pane_cp4_srt_ParamLimits

0x8a50,	// (0x00053706) bg_active_tab_pane_cp4_srt

0xb0e8,	// (0x00055d9e) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb0e8,	// (0x00055d9e) tabs_2_long_active_pane_srt_t1

0xb0d6,	// (0x00055d8c) bg_active_tab_pane_g1_cp4_srt

0x9161,	// (0x00053e17) bg_active_tab_pane_g2_cp4_srt

0xb0df,	// (0x00055d95) bg_active_tab_pane_g3_cp4_srt

0x7b9c,	// (0x00052852) tabs_3_long_active_pane_srt_ParamLimits

0x7b9c,	// (0x00052852) tabs_3_long_active_pane_srt

0x7b9c,	// (0x00052852) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7b9c,	// (0x00052852) tabs_3_long_passive_pane_cp_srt

0x7b9c,	// (0x00052852) tabs_3_long_passive_pane_srt_ParamLimits

0x7b9c,	// (0x00052852) tabs_3_long_passive_pane_srt

0x8a71,	// (0x00053727) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8a71,	// (0x00053727) bg_passive_tab_pane_cp5_srt

0x91eb,	// (0x00053ea1) bg_passive_tab_pane_g1_cp5_srt

0x9161,	// (0x00053e17) bg_passive_tab_pane_g2_cp5_srt

0x91f4,	// (0x00053eaa) bg_passive_tab_pane_g3_cp5_srt

0x8a50,	// (0x00053706) bg_active_tab_pane_cp5_srt_ParamLimits

0x8a50,	// (0x00053706) bg_active_tab_pane_cp5_srt

0xb0c4,	// (0x00055d7a) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb0c4,	// (0x00055d7a) tabs_3_long_active_pane_srt_t1

0x91eb,	// (0x00053ea1) bg_active_tab_pane_g1_cp5_srt

0x9161,	// (0x00053e17) bg_active_tab_pane_g2_cp5_srt

0x91f4,	// (0x00053eaa) bg_active_tab_pane_g3_cp5_srt

0xb0b6,	// (0x00055d6c) navi_text_pane_srt_t1

0xb0ae,	// (0x00055d64) navi_icon_pane_srt_g1

0x96d9,	// (0x0005438f) midp_editing_number_pane_srt

0x951f,	// (0x000541d5) midp_ticker_pane_srt

0x96e1,	// (0x00054397) midp_ticker_pane_srt_g1

0x96e9,	// (0x0005439f) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0005a42d) midp_ticker_pane_srt_g

0x96f1,	// (0x000543a7) midp_ticker_pane_srt_t1

0xb09f,	// (0x00055d55) midp_editing_number_pane_t1_copy1

0x8a71,	// (0x00053727) listscroll_midp_pane

0x8a71,	// (0x00053727) midp_form_pane

0x958b,	// (0x00054241) midp_info_popup_window_ParamLimits

0x958b,	// (0x00054241) midp_info_popup_window

0x8939,	// (0x000535ef) bg_popup_sub_pane_cp50_ParamLimits

0x8939,	// (0x000535ef) bg_popup_sub_pane_cp50

0xa1b9,	// (0x00054e6f) listscroll_midp_info_pane_ParamLimits

0xa1b9,	// (0x00054e6f) listscroll_midp_info_pane

0xa1a1,	// (0x00054e57) listscroll_form_midp_pane_ParamLimits

0xa1a1,	// (0x00054e57) listscroll_form_midp_pane

0xa1ad,	// (0x00054e63) scroll_bar_cp050

0xa181,	// (0x00054e37) list_midp_pane

0xbde3,	// (0x00056a99) signal_pane_g2_cp

0xa0bb,	// (0x00054d71) listscroll_midp_info_pane_t1_ParamLimits

0xa0bb,	// (0x00054d71) listscroll_midp_info_pane_t1

0xa0d3,	// (0x00054d89) listscroll_midp_info_pane_t2_ParamLimits

0xa0d3,	// (0x00054d89) listscroll_midp_info_pane_t2

0xa111,	// (0x00054dc7) listscroll_midp_info_pane_t3_ParamLimits

0xa111,	// (0x00054dc7) listscroll_midp_info_pane_t3

0xa14b,	// (0x00054e01) listscroll_midp_info_pane_t4_ParamLimits

0xa14b,	// (0x00054e01) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x0005a4e5) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x0005a4e5) listscroll_midp_info_pane_t

0x89fd,	// (0x000536b3) scroll_pane_cp21

0xa059,	// (0x00054d0f) form_midp_field_choice_group_pane

0xa062,	// (0x00054d18) form_midp_field_text_pane

0xa0a1,	// (0x00054d57) form_midp_field_time_pane

0xa0a9,	// (0x00054d5f) form_midp_gauge_slider_pane

0xa0b2,	// (0x00054d68) form_midp_gauge_wait_pane

0x7841,	// (0x000524f7) form_midp_image_pane

0x6221,	// (0x00050ed7) list_single_midp_pane_ParamLimits

0x6221,	// (0x00050ed7) list_single_midp_pane

0xa011,	// (0x00054cc7) form_midp_field_text_pane_t1

0x9ddb,	// (0x00054a91) input_focus_pane_cp050

0xa048,	// (0x00054cfe) list_midp_form_text_pane

0x9fe0,	// (0x00054c96) form_midp_field_choice_group_pane_t1

0x9fee,	// (0x00054ca4) input_focus_pane_cp051

0xa002,	// (0x00054cb8) list_midp_choice_pane

0x7841,	// (0x000524f7) status_idle_pane

0x9fc4,	// (0x00054c7a) form_midp_field_time_pane_t1

0x7837,	// (0x000524ed) wait_anim_pane_g2_copy1

0x9fd2,	// (0x00054c88) form_midp_field_time_pane_t2

0x0001,

0x9639,	// (0x000542ef) aid_navinavi_width_2_pane

0xf82a,	// (0x0005a4e0) form_midp_field_time_pane_t

0x7841,	// (0x000524f7) input_focus_pane_cp052

0x7841,	// (0x000524f7) bg_input_focus_pane_cp040

0x9f84,	// (0x00054c3a) form_midp_gauge_slider_pane_t1

0x9f92,	// (0x00054c48) form_midp_gauge_slider_pane_t2

0x9fa0,	// (0x00054c56) form_midp_gauge_slider_pane_t3

0x9fae,	// (0x00054c64) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x0005a4d7) form_midp_gauge_slider_pane_t

0x9fbc,	// (0x00054c72) form_midp_slider_pane

0x7921,	// (0x000525d7) bg_input_focus_pane_cp041_ParamLimits

0x7921,	// (0x000525d7) bg_input_focus_pane_cp041

0x9f51,	// (0x00054c07) form_midp_gauge_wait_pane_t1_ParamLimits

0x9f51,	// (0x00054c07) form_midp_gauge_wait_pane_t1

0x9f63,	// (0x00054c19) form_midp_gauge_wait_pane_t2_ParamLimits

0x9f63,	// (0x00054c19) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x0005a4d2) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x0005a4d2) form_midp_gauge_wait_pane_t

0x9f75,	// (0x00054c2b) form_midp_wait_pane_ParamLimits

0x9f75,	// (0x00054c2b) form_midp_wait_pane

0x9f1b,	// (0x00054bd1) form_midp_image_pane_g1

0x9f24,	// (0x00054bda) form_midp_image_pane_t1

0x9f33,	// (0x00054be9) form_midp_image_pane_t2

0x9f42,	// (0x00054bf8) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x0005a4cb) form_midp_image_pane_t

0x9f12,	// (0x00054bc8) list_single_midp_pane_g1

0x6212,	// (0x00050ec8) list_single_midp_pane_t1

0x9eea,	// (0x00054ba0) list_midp_form_item_pane_ParamLimits

0x9eea,	// (0x00054ba0) list_midp_form_item_pane

0x95e1,	// (0x00054297) list_midp_form_item_pane_t1

0x95f0,	// (0x000542a6) midp_ticker_pane_g1

0x95fc,	// (0x000542b2) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0005a413) midp_ticker_pane_g

0x9608,	// (0x000542be) midp_ticker_pane_t1

0xb2f0,	// (0x00055fa6) midp_editing_number_pane_t1

0xb2ce,	// (0x00055f84) midp_editing_number_pane

0xb2dd,	// (0x00055f93) midp_ticker_pane

0xb08f,	// (0x00055d45) ai_message_heading_pane

0x7841,	// (0x000524f7) bg_popup_window_pane_cp14

0xb097,	// (0x00055d4d) listscroll_ai_message_pane

0xb019,	// (0x00055ccf) ai_message_heading_pane_g1_ParamLimits

0xb019,	// (0x00055ccf) ai_message_heading_pane_g1

0xb025,	// (0x00055cdb) ai_message_heading_pane_g2_ParamLimits

0xb025,	// (0x00055cdb) ai_message_heading_pane_g2

0xb031,	// (0x00055ce7) ai_message_heading_pane_g3_ParamLimits

0xb031,	// (0x00055ce7) ai_message_heading_pane_g3

0xb03d,	// (0x00055cf3) ai_message_heading_pane_g4_ParamLimits

0xb03d,	// (0x00055cf3) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x0005a60c) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x0005a60c) ai_message_heading_pane_g

0xb049,	// (0x00055cff) ai_message_heading_pane_t1_ParamLimits

0xb049,	// (0x00055cff) ai_message_heading_pane_t1

0xb063,	// (0x00055d19) ai_message_heading_pane_t2_ParamLimits

0xb063,	// (0x00055d19) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x0005a615) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x0005a615) ai_message_heading_pane_t

0xb075,	// (0x00055d2b) bg_popup_heading_pane_cp1_ParamLimits

0xb075,	// (0x00055d2b) bg_popup_heading_pane_cp1

0xb007,	// (0x00055cbd) list_ai_message_pane_ParamLimits

0xb007,	// (0x00055cbd) list_ai_message_pane

0x89fd,	// (0x000536b3) scroll_pane_cp10

0xafa3,	// (0x00055c59) list_ai_message_pane_g1

0xafab,	// (0x00055c61) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x0005a5e9) list_ai_message_pane_g

0xafb3,	// (0x00055c69) list_ai_message_pane_t1_ParamLimits

0xafb3,	// (0x00055c69) list_ai_message_pane_t1

0xafc8,	// (0x00055c7e) list_ai_message_pane_t2_ParamLimits

0xafc8,	// (0x00055c7e) list_ai_message_pane_t2

0xafdd,	// (0x00055c93) list_ai_message_pane_t3_ParamLimits

0xafdd,	// (0x00055c93) list_ai_message_pane_t3

0xaff2,	// (0x00055ca8) list_ai_message_pane_t4_ParamLimits

0xaff2,	// (0x00055ca8) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x0005a5ee) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x0005a5ee) list_ai_message_pane_t

0xaf8e,	// (0x00055c44) cell_ai_soft_ind_pane_ParamLimits

0xaf8e,	// (0x00055c44) cell_ai_soft_ind_pane

0x961a,	// (0x000542d0) cell_ai_soft_ind_pane_g1_ParamLimits

0x961a,	// (0x000542d0) cell_ai_soft_ind_pane_g1

0x7841,	// (0x000524f7) grid_highlight_cp1

0x9627,	// (0x000542dd) text_secondary_cp56_ParamLimits

0x9627,	// (0x000542dd) text_secondary_cp56

0xaf63,	// (0x00055c19) example_general_pane_ParamLimits

0xaf63,	// (0x00055c19) example_general_pane

0xaf6f,	// (0x00055c25) example_parent_pane_g1_ParamLimits

0xaf6f,	// (0x00055c25) example_parent_pane_g1

0xaf7b,	// (0x00055c31) example_parent_pane_t1_ParamLimits

0xaf7b,	// (0x00055c31) example_parent_pane_t1

0x5de4,	// (0x00050a9a) popup_preview_text_window_ParamLimits

0x5de4,	// (0x00050a9a) popup_preview_text_window

0x9450,	// (0x00054106) list_single_pane_cp2_g4

0x7c52,	// (0x00052908) bg_popup_preview_window_pane_ParamLimits

0x7c52,	// (0x00052908) bg_popup_preview_window_pane

0xacaf,	// (0x00055965) popup_preview_text_window_t1_ParamLimits

0xacaf,	// (0x00055965) popup_preview_text_window_t1

0xaccd,	// (0x00055983) popup_preview_text_window_t2_ParamLimits

0xaccd,	// (0x00055983) popup_preview_text_window_t2

0xad16,	// (0x000559cc) popup_preview_text_window_t3_ParamLimits

0xad16,	// (0x000559cc) popup_preview_text_window_t3

0xad5b,	// (0x00055a11) popup_preview_text_window_t4_ParamLimits

0xad5b,	// (0x00055a11) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x0005a5bd) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x0005a5bd) popup_preview_text_window_t

0xadd9,	// (0x00055a8f) scroll_pane_cp11

0x9d67,	// (0x00054a1d) bg_popup_preview_window_pane_g1

0xac6f,	// (0x00055925) bg_popup_preview_window_pane_g2

0xac77,	// (0x0005592d) bg_popup_preview_window_pane_g3

0xac7f,	// (0x00055935) bg_popup_preview_window_pane_g4

0xac87,	// (0x0005593d) bg_popup_preview_window_pane_g5

0xac8f,	// (0x00055945) bg_popup_preview_window_pane_g6

0xac97,	// (0x0005594d) bg_popup_preview_window_pane_g7

0xac9f,	// (0x00055955) bg_popup_preview_window_pane_g8

0x4893,	// (0x0004f549) aid_popup_width_pane

0x5dc2,	// (0x00050a78) popup_midp_note_alarm_window_ParamLimits

0x5dc2,	// (0x00050a78) popup_midp_note_alarm_window

0x888d,	// (0x00053543) data_form_pane_ParamLimits

0x522d,	// (0x0004fee3) form_field_data_pane_g1

0x5237,	// (0x0004feed) form_field_data_pane_t1_ParamLimits

0x8899,	// (0x0005354f) input_focus_pane_ParamLimits

0x524f,	// (0x0004ff05) data_form_wide_pane_ParamLimits

0x5260,	// (0x0004ff16) form_field_data_wide_pane_g1

0x526c,	// (0x0004ff22) form_field_data_wide_pane_t1_ParamLimits

0x85fe,	// (0x000532b4) input_focus_pane_cp6_ParamLimits

0x89aa,	// (0x00053660) input_popup_find_pane_g1_ParamLimits

0x89aa,	// (0x00053660) input_popup_find_pane_g1

0x54e2,	// (0x00050198) aid_navi_side_left_pane

0x54f7,	// (0x000501ad) aid_navi_side_right_pane

0xa688,	// (0x0005533e) bg_popup_window_pane_cp30_ParamLimits

0xa688,	// (0x0005533e) bg_popup_window_pane_cp30

0xa702,	// (0x000553b8) popup_midp_note_alarm_window_g1_ParamLimits

0xa702,	// (0x000553b8) popup_midp_note_alarm_window_g1

0xa732,	// (0x000553e8) popup_midp_note_alarm_window_t1_ParamLimits

0xa732,	// (0x000553e8) popup_midp_note_alarm_window_t1

0xa7d3,	// (0x00055489) popup_midp_note_alarm_window_t2_ParamLimits

0xa7d3,	// (0x00055489) popup_midp_note_alarm_window_t2

0xa881,	// (0x00055537) popup_midp_note_alarm_window_t3_ParamLimits

0xa881,	// (0x00055537) popup_midp_note_alarm_window_t3

0xa8b3,	// (0x00055569) popup_midp_note_alarm_window_t4_ParamLimits

0xa8b3,	// (0x00055569) popup_midp_note_alarm_window_t4

0xa8d9,	// (0x0005558f) popup_midp_note_alarm_window_t5_ParamLimits

0xa8d9,	// (0x0005558f) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x0005a55a) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x0005a55a) popup_midp_note_alarm_window_t

0xa985,	// (0x0005563b) wait_bar_pane_cp1_ParamLimits

0xa985,	// (0x0005563b) wait_bar_pane_cp1

0x7841,	// (0x000524f7) wait_anim_pane_copy1

0x7841,	// (0x000524f7) wait_border_pane_copy1

0xa362,	// (0x00055018) wait_border_pane_g1_copy1

0x5286,	// (0x0004ff3c) form_field_popup_pane_g1

0x528e,	// (0x0004ff44) form_field_popup_pane_t1_ParamLimits

0x8899,	// (0x0005354f) input_focus_pane_cp7_ParamLimits

0x88bb,	// (0x00053571) list_form_pane_ParamLimits

0x52a6,	// (0x0004ff5c) form_field_popup_wide_pane_g1

0x52ae,	// (0x0004ff64) form_field_popup_wide_pane_t1_ParamLimits

0x8899,	// (0x0005354f) input_focus_pane_cp8_ParamLimits

0x88c7,	// (0x0005357d) list_form_wide_pane_ParamLimits

0xb425,	// (0x000560db) aid_size_cell_graphic_pane

0x5338,	// (0x0004ffee) data_form_pane_t1_ParamLimits

0x64a0,	// (0x00051156) data_form_wide_pane_t1_ParamLimits

0x9934,	// (0x000545ea) bg_status_flat_pane

0x7881,	// (0x00052537) title_pane_t1_ParamLimits

0x78e9,	// (0x0005259f) title_pane_t2_ParamLimits

0x790f,	// (0x000525c5) title_pane_t3_ParamLimits

0xf557,	// (0x0005a20d) title_pane_t_ParamLimits

0x8e78,	// (0x00053b2e) level_1_signal_ParamLimits

0x8e8a,	// (0x00053b40) level_2_signal_ParamLimits

0x8e9d,	// (0x00053b53) level_3_signal_ParamLimits

0x8eb0,	// (0x00053b66) level_4_signal_ParamLimits

0x8ec3,	// (0x00053b79) level_5_signal_ParamLimits

0x8ed6,	// (0x00053b8c) level_6_signal_ParamLimits

0x8ee9,	// (0x00053b9f) level_7_signal_ParamLimits

0x8e78,	// (0x00053b2e) level_1_battery_ParamLimits

0x8e8a,	// (0x00053b40) level_2_battery_ParamLimits

0x8e9d,	// (0x00053b53) level_3_battery_ParamLimits

0x8eb0,	// (0x00053b66) level_4_battery_ParamLimits

0x8ec3,	// (0x00053b79) level_5_battery_ParamLimits

0x8ed6,	// (0x00053b8c) level_6_battery_ParamLimits

0x8ee9,	// (0x00053b9f) level_7_battery_ParamLimits

0xa581,	// (0x00055237) bg_status_flat_pane_g1

0xa589,	// (0x0005523f) bg_status_flat_pane_g2

0xa591,	// (0x00055247) bg_status_flat_pane_g3

0xa599,	// (0x0005524f) bg_status_flat_pane_g4

0xa5a1,	// (0x00055257) bg_status_flat_pane_g5

0xa5a9,	// (0x0005525f) bg_status_flat_pane_g6

0xa5b1,	// (0x00055267) bg_status_flat_pane_g7

0x7937,	// (0x000525ed) tabs_3_active_pane_t1_ParamLimits

0x7937,	// (0x000525ed) tabs_3_passive_pane_t1_ParamLimits

0x7951,	// (0x00052607) tabs_4_active_pane_t1_ParamLimits

0x7951,	// (0x00052607) tabs_4_1_passive_pane_t1_ParamLimits

0x8a3e,	// (0x000536f4) tabs_2_active_pane_t1_ParamLimits

0x8a3e,	// (0x000536f4) tabs_2_passive_pane_t1_ParamLimits

0x8a50,	// (0x00053706) bg_active_tab_pane_cp4_ParamLimits

0x8a5e,	// (0x00053714) tabs_2_long_active_pane_t1_ParamLimits

0x8a71,	// (0x00053727) bg_passive_tab_pane_cp4_ParamLimits

0x60f3,	// (0x00050da9) list_single_midp_graphic_pane_t1_ParamLimits

0x8a50,	// (0x00053706) bg_active_tab_pane_cp5_ParamLimits

0x8a7d,	// (0x00053733) tabs_3_long_active_pane_t1_ParamLimits

0x8a71,	// (0x00053727) bg_passive_tab_pane_cp5_ParamLimits

0x60f3,	// (0x00050da9) list_single_midp_graphic_pane_t1

0x9934,	// (0x000545ea) bg_status_flat_pane_ParamLimits

0x99f7,	// (0x000546ad) indicator_pane_cp2_ParamLimits

0x99f7,	// (0x000546ad) indicator_pane_cp2

0x9b22,	// (0x000547d8) navi_pane_srt_ParamLimits

0x9b22,	// (0x000547d8) navi_pane_srt

0x9b46,	// (0x000547fc) popup_clock_digital_analogue_window_cp1

0x79fe,	// (0x000526b4) indicator_pane_t1

0x951f,	// (0x000541d5) copy_highlight_pane

0x951f,	// (0x000541d5) cursor_graphics_pane

0x951f,	// (0x000541d5) graphic_within_text_pane

0x951f,	// (0x000541d5) link_highlight_pane

0xad9c,	// (0x00055a52) popup_preview_text_window_t5_ParamLimits

0xad9c,	// (0x00055a52) popup_preview_text_window_t5

0x9641,	// (0x000542f7) cursor_digital_pane

0x9641,	// (0x000542f7) cursor_primary_pane

0x9652,	// (0x00054308) cursor_primary_small_pane

0x965a,	// (0x00054310) cursor_secondary_pane

0x9662,	// (0x00054318) cursor_title_pane

0x9641,	// (0x000542f7) link_highlight_digital_pane

0x9649,	// (0x000542ff) link_highlight_primary_pane

0x9652,	// (0x00054308) link_highlight_primary_small_pane

0x965a,	// (0x00054310) link_highlight_secondary_pane

0x9662,	// (0x00054318) link_highlight_title_pane

0x9641,	// (0x000542f7) copy_highlight_digital_pane

0x9641,	// (0x000542f7) copy_highlight_primary_pane

0x9652,	// (0x00054308) copy_highlight_primary_small_pane

0x965a,	// (0x00054310) copy_highlight_secondary_pane

0x9662,	// (0x00054318) copy_highlight_title_pane

0x965a,	// (0x00054310) graphic_text_digital_pane

0xa62b,	// (0x000552e1) graphic_text_primary_pane

0xa634,	// (0x000552ea) graphic_text_primary_small_pane

0x9652,	// (0x00054308) graphic_text_secondary_pane

0x9641,	// (0x000542f7) graphic_text_title_pane

0x966a,	// (0x00054320) cursor_primary_pane_g1

0xa61d,	// (0x000552d3) cursor_text_primary_t1

0xa5f9,	// (0x000552af) cursor_primary_small_pane_g1

0xa60f,	// (0x000552c5) cursor_text_primary_small_t1

0xa5e1,	// (0x00055297) cursor_primary_small_pane_g1_copy1

0xa5eb,	// (0x000552a1) cursor_text_primary_small_t1_copy1

0xa5c9,	// (0x0005527f) cursor_text_title_t1

0xa5d7,	// (0x0005528d) cursor_title_pane_g1

0x966a,	// (0x00054320) cursor_digital_pane_g1

0x9674,	// (0x0005432a) cursor_text_digital_t1

0x9699,	// (0x0005434f) link_highlight_primary_pane_g1

0xa572,	// (0x00055228) link_highlight_primary_pane_t1

0x9682,	// (0x00054338) link_highlight_primary_small_pane_g1

0x968a,	// (0x00054340) link_highlight_primary_small_pane_t1

0x9699,	// (0x0005434f) link_highlight_secondary_pane_g1

0x96a1,	// (0x00054357) link_highlight_secondary_pane_t1

0xa4e6,	// (0x0005519c) link_highlight_title_pane_g1

0xa4ee,	// (0x000551a4) link_highlight_title_pane_t1

0xa4cf,	// (0x00055185) link_highlight_digital_pane_g1

0xa4d7,	// (0x0005518d) link_highlight_digital_pane_t1

0xa3a7,	// (0x0005505d) copy_highlight_primary_pane_g1

0xa3af,	// (0x00055065) copy_highlight_primary_pane_t1

0xa381,	// (0x00055037) copy_highlight_primary_small_pane_g1

0xa398,	// (0x0005504e) copy_highlight_primary_small_pane_t1

0x96b0,	// (0x00054366) copy_highlight_secondary_pane_g1

0x96b8,	// (0x0005436e) copy_highlight_secondary_pane_t1

0xa381,	// (0x00055037) copy_highlight_title_pane_g1

0xa389,	// (0x0005503f) copy_highlight_title_pane_t1

0xa3a7,	// (0x0005505d) copy_highlight_digital_pane_g1

0xb5f0,	// (0x000562a6) copy_highlight_digital_pane_t1

0xb544,	// (0x000561fa) graphic_text_primary_pane_g1

0xb5d4,	// (0x0005628a) graphic_text_primary_pane_t1

0xb5e2,	// (0x00056298) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x0005a689) graphic_text_primary_pane_t

0xb5b0,	// (0x00056266) graphic_text_primary_small_pane_g1

0xb5b8,	// (0x0005626e) graphic_text_primary_small_pane_t1

0xb5c6,	// (0x0005627c) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x0005a684) graphic_text_primary_small_pane_t

0xb58c,	// (0x00056242) graphic_text_secondary_pane_g1

0xb594,	// (0x0005624a) graphic_text_secondary_pane_t1

0xb5a2,	// (0x00056258) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x0005a67f) graphic_text_secondary_pane_t

0xb568,	// (0x0005621e) graphic_text_title_pane_g1

0xb570,	// (0x00056226) graphic_text_title_pane_t1

0xb57e,	// (0x00056234) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x0005a67a) graphic_text_title_pane_t

0xb544,	// (0x000561fa) graphic_text_digital_pane_g1

0xb54c,	// (0x00056202) graphic_text_digital_pane_t1

0xb55a,	// (0x00056210) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x0005a675) graphic_text_digital_pane_t

0x7921,	// (0x000525d7) navi_icon_pane_srt_ParamLimits

0x7921,	// (0x000525d7) navi_icon_pane_srt

0x7841,	// (0x000524f7) navi_midp_pane_srt

0x7841,	// (0x000524f7) navi_navi_pane_srt

0x7921,	// (0x000525d7) navi_text_pane_srt_ParamLimits

0x7921,	// (0x000525d7) navi_text_pane_srt

0xb50f,	// (0x000561c5) navi_navi_icon_text_pane_srt

0xb517,	// (0x000561cd) navi_navi_pane_srt_g1_ParamLimits

0xb517,	// (0x000561cd) navi_navi_pane_srt_g1

0xb529,	// (0x000561df) navi_navi_pane_srt_g2_ParamLimits

0xb529,	// (0x000561df) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x0005a670) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x0005a670) navi_navi_pane_srt_g

0xb53b,	// (0x000561f1) navi_navi_tabs_pane_srt

0xb50f,	// (0x000561c5) navi_navi_text_pane_srt

0xb50f,	// (0x000561c5) navi_navi_volume_pane_srt

0xb500,	// (0x000561b6) navi_navi_text_pane_srt_t1

0x65e1,	// (0x00051297) navi_navi_volume_pane_srt_g1

0x65e9,	// (0x0005129f) volume_small_pane_srt_ParamLimits

0x65e9,	// (0x0005129f) volume_small_pane_srt

0x5830,	// (0x000504e6) volume_small_pane_srt_g1_ParamLimits

0x5830,	// (0x000504e6) volume_small_pane_srt_g1

0x5840,	// (0x000504f6) volume_small_pane_srt_g2_ParamLimits

0x5840,	// (0x000504f6) volume_small_pane_srt_g2

0x5851,	// (0x00050507) volume_small_pane_srt_g3_ParamLimits

0x5851,	// (0x00050507) volume_small_pane_srt_g3

0x5862,	// (0x00050518) volume_small_pane_srt_g4_ParamLimits

0x5862,	// (0x00050518) volume_small_pane_srt_g4

0x5873,	// (0x00050529) volume_small_pane_srt_g5_ParamLimits

0x5873,	// (0x00050529) volume_small_pane_srt_g5

0x5884,	// (0x0005053a) volume_small_pane_srt_g6_ParamLimits

0x5884,	// (0x0005053a) volume_small_pane_srt_g6

0x5895,	// (0x0005054b) volume_small_pane_srt_g7_ParamLimits

0x5895,	// (0x0005054b) volume_small_pane_srt_g7

0x58a6,	// (0x0005055c) volume_small_pane_srt_g8_ParamLimits

0x58a6,	// (0x0005055c) volume_small_pane_srt_g8

0x58b7,	// (0x0005056d) volume_small_pane_srt_g9_ParamLimits

0x58b7,	// (0x0005056d) volume_small_pane_srt_g9

0x58c8,	// (0x0005057e) volume_small_pane_srt_g10_ParamLimits

0x58c8,	// (0x0005057e) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0005a418) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0005a418) volume_small_pane_srt_g

0x83f8,	// (0x000530ae) query_popup_data_pane_cp2

0xb4e6,	// (0x0005619c) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb4e6,	// (0x0005619c) navi_navi_icon_text_pane_srt_t1

0xa62b,	// (0x000552e1) navi_tabs_2_long_pane_srt

0xa62b,	// (0x000552e1) navi_tabs_2_pane_srt

0xa62b,	// (0x000552e1) navi_tabs_3_long_pane_srt

0xa62b,	// (0x000552e1) navi_tabs_3_pane_srt

0xa62b,	// (0x000552e1) navi_tabs_4_pane_srt

0x65c1,	// (0x00051277) tabs_2_active_pane_srt_ParamLimits

0x65c1,	// (0x00051277) tabs_2_active_pane_srt

0x65d1,	// (0x00051287) tabs_2_passive_pane_srt_ParamLimits

0x65d1,	// (0x00051287) tabs_2_passive_pane_srt

0x985d,	// (0x00054513) bg_passive_tab_pane_cp1_srt_ParamLimits

0x985d,	// (0x00054513) bg_passive_tab_pane_cp1_srt

0xb4b2,	// (0x00056168) bg_passive_tab_pane_g1_cp1_srt

0x9161,	// (0x00053e17) bg_passive_tab_pane_g2_cp1_srt

0xb4bb,	// (0x00056171) bg_passive_tab_pane_g3_cp1_srt

0x7921,	// (0x000525d7) bg_active_tab_pane_cp1_srt_ParamLimits

0x7921,	// (0x000525d7) bg_active_tab_pane_cp1_srt

0xb4c4,	// (0x0005617a) tabs_2_active_pane_srt_g1

0xb4cc,	// (0x00056182) tabs_2_active_pane_srt_t1_ParamLimits

0xb4cc,	// (0x00056182) tabs_2_active_pane_srt_t1

0xb4b2,	// (0x00056168) bg_active_tab_pane_g1_cp1_srt

0x9161,	// (0x00053e17) bg_active_tab_pane_g2_cp1_srt

0xb4bb,	// (0x00056171) bg_active_tab_pane_g3_cp1_srt

0x658e,	// (0x00051244) tabs_3_active_pane_srt_ParamLimits

0x658e,	// (0x00051244) tabs_3_active_pane_srt

0x659f,	// (0x00051255) tabs_3_passive_pane_cp_srt_ParamLimits

0x659f,	// (0x00051255) tabs_3_passive_pane_cp_srt

0x65b0,	// (0x00051266) tabs_3_passive_pane_srt_ParamLimits

0x65b0,	// (0x00051266) tabs_3_passive_pane_srt

0x985d,	// (0x00054513) bg_passive_tab_pane_cp2_srt_ParamLimits

0x985d,	// (0x00054513) bg_passive_tab_pane_cp2_srt

0x96c7,	// (0x0005437d) bg_passive_tab_pane_g1_cp2_srt

0x9161,	// (0x00053e17) bg_passive_tab_pane_g2_cp2_srt

0x96d0,	// (0x00054386) bg_passive_tab_pane_g3_cp2_srt

0x7921,	// (0x000525d7) bg_active_tab_pane_cp2_srt_ParamLimits

0x7921,	// (0x000525d7) bg_active_tab_pane_cp2_srt

0xb498,	// (0x0005614e) tabs_3_active_pane_srt_g1

0xb4a0,	// (0x00056156) tabs_3_active_pane_srt_t1_ParamLimits

0xb4a0,	// (0x00056156) tabs_3_active_pane_srt_t1

0x96c7,	// (0x0005437d) bg_active_tab_pane_g1_cp2_srt

0x9161,	// (0x00053e17) bg_active_tab_pane_g2_cp2_srt

0x96d0,	// (0x00054386) bg_active_tab_pane_g3_cp2_srt

0x6546,	// (0x000511fc) tabs_4_active_pane_srt_ParamLimits

0x6546,	// (0x000511fc) tabs_4_active_pane_srt

0x6558,	// (0x0005120e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6558,	// (0x0005120e) tabs_4_passive_pane_cp2_srt

0x5a2d,	// (0x000506e3) aid_size_cell_toolbar

0x8a71,	// (0x00053727) main_idle_act_pane_ParamLimits

0x5bf8,	// (0x000508ae) popup_large_graphic_colour_window_ParamLimits

0x5f5f,	// (0x00050c15) popup_toolbar_window_ParamLimits

0x5f5f,	// (0x00050c15) popup_toolbar_window

0xb2ff,	// (0x00055fb5) list_single_graphic_2heading_pane_ParamLimits

0xb2ff,	// (0x00055fb5) list_single_graphic_2heading_pane

0x8c2d,	// (0x000538e3) aid_size_cell_apps_grid_lsc_pane

0x8c3f,	// (0x000538f5) aid_size_cell_apps_grid_prt_pane

0x985d,	// (0x00054513) bg_wml_button_pane_cp1_ParamLimits

0x985d,	// (0x00054513) bg_wml_button_pane_cp1

0xa011,	// (0x00054cc7) form_midp_field_text_pane_t1_ParamLimits

0x9ddb,	// (0x00054a91) input_focus_pane_cp050_ParamLimits

0xa048,	// (0x00054cfe) list_midp_form_text_pane_ParamLimits

0x9fee,	// (0x00054ca4) input_focus_pane_cp051_ParamLimits

0xa002,	// (0x00054cb8) list_midp_choice_pane_ParamLimits

0x9e94,	// (0x00054b4a) list_single_2graphic_pane_cp3_ParamLimits

0x9e94,	// (0x00054b4a) list_single_2graphic_pane_cp3

0x9eb8,	// (0x00054b6e) list_single_midp_graphic_pane_ParamLimits

0x9eb8,	// (0x00054b6e) list_single_midp_graphic_pane

0x481b,	// (0x0004f4d1) list_single_graphic_2heading_pane_g1_ParamLimits

0x481b,	// (0x0004f4d1) list_single_graphic_2heading_pane_g1

0x4827,	// (0x0004f4dd) list_single_graphic_2heading_pane_g4_ParamLimits

0x4827,	// (0x0004f4dd) list_single_graphic_2heading_pane_g4

0x4833,	// (0x0004f4e9) list_single_graphic_2heading_pane_g5_ParamLimits

0x4833,	// (0x0004f4e9) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0005a46b) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0005a46b) list_single_graphic_2heading_pane_g

0x483f,	// (0x0004f4f5) list_single_graphic_2heading_pane_t1_ParamLimits

0x483f,	// (0x0004f4f5) list_single_graphic_2heading_pane_t1

0x4853,	// (0x0004f509) list_single_graphic_2heading_pane_t2_ParamLimits

0x4853,	// (0x0004f509) list_single_graphic_2heading_pane_t2

0x486f,	// (0x0004f525) list_single_graphic_2heading_pane_t3_ParamLimits

0x486f,	// (0x0004f525) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0005a472) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0005a472) list_single_graphic_2heading_pane_t

0x9ca5,	// (0x0005495b) bg_popup_sub_pane_cp2

0x9ccf,	// (0x00054985) grid_toobar_pane

0x600c,	// (0x00050cc2) cell_toolbar_pane_ParamLimits

0x600c,	// (0x00050cc2) cell_toolbar_pane

0x9d0b,	// (0x000549c1) cell_toolbar_pane_g1_ParamLimits

0x9d0b,	// (0x000549c1) cell_toolbar_pane_g1

0x9d1f,	// (0x000549d5) cell_toolbar_pane_g2_ParamLimits

0x9d1f,	// (0x000549d5) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0005a480) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0005a480) cell_toolbar_pane_g

0x9d41,	// (0x000549f7) grid_highlight_pane_cp2_ParamLimits

0x9d41,	// (0x000549f7) grid_highlight_pane_cp2

0x9d5b,	// (0x00054a11) toolbar_button_pane

0x9d67,	// (0x00054a1d) toolbar_button_pane_g1

0x9d6f,	// (0x00054a25) toolbar_button_pane_g2

0x9d77,	// (0x00054a2d) toolbar_button_pane_g3

0x9d7f,	// (0x00054a35) toolbar_button_pane_g4

0x9d87,	// (0x00054a3d) toolbar_button_pane_g5

0x9d8f,	// (0x00054a45) toolbar_button_pane_g6

0x9d97,	// (0x00054a4d) toolbar_button_pane_g7

0x9d9f,	// (0x00054a55) toolbar_button_pane_g8

0x9da7,	// (0x00054a5d) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0005a485) toolbar_button_pane_g

0x6066,	// (0x00050d1c) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6066,	// (0x00050d1c) list_single_2graphic_pane_g1_cp3

0x6072,	// (0x00050d28) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6072,	// (0x00050d28) list_single_2graphic_pane_g2_cp3

0x6083,	// (0x00050d39) list_single_2graphic_pane_g3_cp3

0x608b,	// (0x00050d41) list_single_2graphic_pane_g4_cp3_ParamLimits

0x608b,	// (0x00050d41) list_single_2graphic_pane_g4_cp3

0x6097,	// (0x00050d4d) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6097,	// (0x00050d4d) list_single_2graphic_pane_t1_cp3

0x60e7,	// (0x00050d9d) list_single_midp_graphic_pane_g2_ParamLimits

0x60e7,	// (0x00050d9d) list_single_midp_graphic_pane_g2

0x4813,	// (0x0004f4c9) aid_zoom_text_primary

0x5a35,	// (0x000506eb) aid_zoom_text_secondary

0x9781,	// (0x00054437) status_small_pane_g7_ParamLimits

0x9781,	// (0x00054437) status_small_pane_g7

0x97a4,	// (0x0005445a) status_small_pane_t1_ParamLimits

0x7858,	// (0x0005250e) title_pane_g2

0x0003,

0xf54e,	// (0x0005a204) title_pane_g

0x849c,	// (0x00053152) aid_size_cell_colour_1_pane_ParamLimits

0x849c,	// (0x00053152) aid_size_cell_colour_1_pane

0x84b0,	// (0x00053166) aid_size_cell_colour_2_pane_ParamLimits

0x84b0,	// (0x00053166) aid_size_cell_colour_2_pane

0x84c4,	// (0x0005317a) aid_size_cell_colour_3_pane_ParamLimits

0x84c4,	// (0x0005317a) aid_size_cell_colour_3_pane

0x84d8,	// (0x0005318e) aid_size_cell_colour_4_pane_ParamLimits

0x84d8,	// (0x0005318e) aid_size_cell_colour_4_pane

0x541f,	// (0x000500d5) title_pane_stacon_g1_ParamLimits

0x541f,	// (0x000500d5) title_pane_stacon_g1

0xa406,	// (0x000550bc) popup_note_wait_window_g3_ParamLimits

0xa406,	// (0x000550bc) popup_note_wait_window_g3

0xa47c,	// (0x00055132) popup_note_wait_window_t5_ParamLimits

0xa47c,	// (0x00055132) popup_note_wait_window_t5

0x7841,	// (0x000524f7) main_feb_china_hwr_fs_writing_pane

0x5adb,	// (0x00050791) popup_feb_china_hwr_fs_window_ParamLimits

0x5adb,	// (0x00050791) popup_feb_china_hwr_fs_window

0x6175,	// (0x00050e2b) aid_size_cell_hwr_fs_ParamLimits

0x6175,	// (0x00050e2b) aid_size_cell_hwr_fs

0x9ddb,	// (0x00054a91) bg_popup_sub_pane_cp3_ParamLimits

0x9ddb,	// (0x00054a91) bg_popup_sub_pane_cp3

0x618a,	// (0x00050e40) grid_hwr_fs_pane_ParamLimits

0x618a,	// (0x00050e40) grid_hwr_fs_pane

0x61a2,	// (0x00050e58) linegrid_hwr_fs_pane_ParamLimits

0x61a2,	// (0x00050e58) linegrid_hwr_fs_pane

0x61b2,	// (0x00050e68) cell_hwr_fs_pane_ParamLimits

0x61b2,	// (0x00050e68) cell_hwr_fs_pane

0x9de7,	// (0x00054a9d) linegrid_hwr_fs_pane_g1_ParamLimits

0x9de7,	// (0x00054a9d) linegrid_hwr_fs_pane_g1

0x9df3,	// (0x00054aa9) linegrid_hwr_fs_pane_g2_ParamLimits

0x9df3,	// (0x00054aa9) linegrid_hwr_fs_pane_g2

0x9e05,	// (0x00054abb) linegrid_hwr_fs_pane_g3_ParamLimits

0x9e05,	// (0x00054abb) linegrid_hwr_fs_pane_g3

0x61d4,	// (0x00050e8a) linegrid_hwr_fs_pane_g4_ParamLimits

0x61d4,	// (0x00050e8a) linegrid_hwr_fs_pane_g4

0x61ee,	// (0x00050ea4) linegrid_hwr_fs_pane_g5_ParamLimits

0x61ee,	// (0x00050ea4) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x0005a4b0) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x0005a4b0) linegrid_hwr_fs_pane_g

0x9e11,	// (0x00054ac7) cell_hwr_fs_pane_g1_ParamLimits

0x9e11,	// (0x00054ac7) cell_hwr_fs_pane_g1

0x9bdc,	// (0x00054892) cell_hwr_fs_pane_g2_ParamLimits

0x9bdc,	// (0x00054892) cell_hwr_fs_pane_g2

0x9e27,	// (0x00054add) cell_hwr_fs_pane_g3_ParamLimits

0x9e27,	// (0x00054add) cell_hwr_fs_pane_g3

0x9e34,	// (0x00054aea) cell_hwr_fs_pane_g4_ParamLimits

0x9e34,	// (0x00054aea) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x0005a4bb) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x0005a4bb) cell_hwr_fs_pane_g

0x6204,	// (0x00050eba) cell_hwr_fs_pane_t1

0x7841,	// (0x000524f7) grid_highlight_pane_cp6

0x7841,	// (0x000524f7) main_idle_act2_pane

0x89e4,	// (0x0005369a) aid_inside_area_popup_secondary

0xaabf,	// (0x00055775) aid_inside_area_window_primary_ParamLimits

0xaabf,	// (0x00055775) aid_inside_area_window_primary

0xb5ff,	// (0x000562b5) ai2_news_ticker_pane

0xb607,	// (0x000562bd) aid_size_cell_ai1_link_ParamLimits

0xb607,	// (0x000562bd) aid_size_cell_ai1_link

0xb621,	// (0x000562d7) popup_ai2_data_window_ParamLimits

0xb621,	// (0x000562d7) popup_ai2_data_window

0xb637,	// (0x000562ed) popup_ai2_link_window_ParamLimits

0xb637,	// (0x000562ed) popup_ai2_link_window

0x9ddb,	// (0x00054a91) bg_popup_sub_pane_cp4_ParamLimits

0x9ddb,	// (0x00054a91) bg_popup_sub_pane_cp4

0xb64b,	// (0x00056301) grid_ai2_link_pane_ParamLimits

0xb64b,	// (0x00056301) grid_ai2_link_pane

0xb662,	// (0x00056318) popup_ai2_link_window_g1_ParamLimits

0xb662,	// (0x00056318) popup_ai2_link_window_g1

0xb66e,	// (0x00056324) popup_ai2_link_window_g2_ParamLimits

0xb66e,	// (0x00056324) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x0005a68e) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x0005a68e) popup_ai2_link_window_g

0xb67d,	// (0x00056333) ai2_mp_button_pane

0xb685,	// (0x0005633b) ai2_mp_volume_pane

0x9fee,	// (0x00054ca4) bg_popup_sub_pane_cp5_ParamLimits

0x9fee,	// (0x00054ca4) bg_popup_sub_pane_cp5

0xb68d,	// (0x00056343) heading_ai2_gene_pane_ParamLimits

0xb68d,	// (0x00056343) heading_ai2_gene_pane

0xb699,	// (0x0005634f) list_ai2_gene_pane_ParamLimits

0xb699,	// (0x0005634f) list_ai2_gene_pane

0xb6e1,	// (0x00056397) cell_ai2_link_pane_ParamLimits

0xb6e1,	// (0x00056397) cell_ai2_link_pane

0xb6f7,	// (0x000563ad) cell_ai2_link_pane_g1

0x7841,	// (0x000524f7) grid_highlight_pane_cp7

0x65fe,	// (0x000512b4) ai2_mp_volume_pane_g1

0xb7c7,	// (0x0005647d) ai2_mp_volume_pane_g2

0xb73c,	// (0x000563f2) list_ai2_gene_pane_t1

0xb7cf,	// (0x00056485) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x0005a6a7) ai2_mp_volume_pane_g

0x6606,	// (0x000512bc) volume_small_pane_cp3

0xb7d7,	// (0x0005648d) aid_size_cell_ai2_button

0xb7df,	// (0x00056495) grid_ai2_button_pane

0xb7e8,	// (0x0005649e) cell_ai2_button_pane_ParamLimits

0xb7e8,	// (0x0005649e) cell_ai2_button_pane

0x7837,	// (0x000524ed) cell_ai2_button_pane_g1

0x7841,	// (0x000524f7) grid_highlight_pane_cp8

0xb787,	// (0x0005643d) ai2_gene_pane_t1_ParamLimits

0xb787,	// (0x0005643d) ai2_gene_pane_t1

0x5a23,	// (0x000506d9) aid_height_parent_landscape

0xb136,	// (0x00055dec) aid_height_set_list

0xb147,	// (0x00055dfd) aid_size_parent

0xb425,	// (0x000560db) aid_size_cell_graphic_pane_ParamLimits

0xb6a9,	// (0x0005635f) popup_ai2_data_window_g1_ParamLimits

0xb6a9,	// (0x0005635f) popup_ai2_data_window_g1

0xb6b5,	// (0x0005636b) ai2_news_ticker_pane_g1

0xb6bd,	// (0x00056373) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x0005a693) ai2_news_ticker_pane_g

0xb6c5,	// (0x0005637b) ai2_news_ticker_pane_t1

0xb6d3,	// (0x00056389) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x0005a698) ai2_news_ticker_pane_t

0xb700,	// (0x000563b6) heading_ai2_gene_pane_g1

0xb708,	// (0x000563be) heading_ai2_gene_pane_t1_ParamLimits

0xb708,	// (0x000563be) heading_ai2_gene_pane_t1

0xb71d,	// (0x000563d3) list_highlight_pane_cp6

0xb725,	// (0x000563db) ai2_gene_pane_ParamLimits

0xb725,	// (0x000563db) ai2_gene_pane

0xb74a,	// (0x00056400) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x0005a69d) list_ai2_gene_pane_t

0xb758,	// (0x0005640e) list_highlight_pane_cp8_ParamLimits

0xb758,	// (0x0005640e) list_highlight_pane_cp8

0xb769,	// (0x0005641f) ai2_gene_pane_g1_ParamLimits

0xb769,	// (0x0005641f) ai2_gene_pane_g1

0xb77b,	// (0x00056431) ai2_gene_pane_g2_ParamLimits

0xb77b,	// (0x00056431) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x0005a6a2) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x0005a6a2) ai2_gene_pane_g

0x8823,	// (0x000534d9) scroll_pane_cp12

0x59e2,	// (0x00050698) control_pane_t3_ParamLimits

0x59e2,	// (0x00050698) control_pane_t3

0x9795,	// (0x0005444b) status_small_pane_g8_ParamLimits

0x9795,	// (0x0005444b) status_small_pane_g8

0x5bc1,	// (0x00050877) popup_find_window_ParamLimits

0x5dd6,	// (0x00050a8c) popup_note_image_window_ParamLimits

0x603c,	// (0x00050cf2) list_double2_graphic_pane_vc_g1_ParamLimits

0x603c,	// (0x00050cf2) list_double2_graphic_pane_vc_g1

0x9458,	// (0x0005410e) list_double2_graphic_pane_vc_g2_ParamLimits

0x9458,	// (0x0005410e) list_double2_graphic_pane_vc_g2

0x7d53,	// (0x00052a09) list_double2_graphic_pane_vc_g3_ParamLimits

0x7d53,	// (0x00052a09) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005a479) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005a479) list_double2_graphic_pane_vc_g

0x6048,	// (0x00050cfe) list_double2_graphic_pane_vc_t1_ParamLimits

0x6048,	// (0x00050cfe) list_double2_graphic_pane_vc_t1

0x9458,	// (0x0005410e) list_single_heading_pane_vc_g1_ParamLimits

0x9458,	// (0x0005410e) list_single_heading_pane_vc_g1

0x7d53,	// (0x00052a09) list_single_heading_pane_vc_g2_ParamLimits

0x7d53,	// (0x00052a09) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a49a) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a49a) list_single_heading_pane_vc_g

0x60b3,	// (0x00050d69) list_single_heading_pane_vc_t1_ParamLimits

0x60b3,	// (0x00050d69) list_single_heading_pane_vc_t1

0x60cb,	// (0x00050d81) list_single_heading_pane_vc_t2_ParamLimits

0x60cb,	// (0x00050d81) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x0005a49f) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x0005a49f) list_single_heading_pane_vc_t

0x7d5f,	// (0x00052a15) list_setting_number_pane_vc_g1_ParamLimits

0x7d5f,	// (0x00052a15) list_setting_number_pane_vc_g1

0x7d6b,	// (0x00052a21) list_setting_number_pane_vc_g2_ParamLimits

0x7d6b,	// (0x00052a21) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x0005a4a4) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x0005a4a4) list_setting_number_pane_vc_g

0x6109,	// (0x00050dbf) list_setting_number_pane_vc_t1_ParamLimits

0x6109,	// (0x00050dbf) list_setting_number_pane_vc_t1

0x611d,	// (0x00050dd3) list_setting_number_pane_vc_t2_ParamLimits

0x611d,	// (0x00050dd3) list_setting_number_pane_vc_t2

0x6139,	// (0x00050def) list_setting_number_pane_vc_t3_ParamLimits

0x6139,	// (0x00050def) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x0005a4a9) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x0005a4a9) list_setting_number_pane_vc_t

0x6165,	// (0x00050e1b) set_value_pane_vc_ParamLimits

0x6165,	// (0x00050e1b) set_value_pane_vc

0xb2ff,	// (0x00055fb5) list_double2_graphic_pane_vc_ParamLimits

0xb2ff,	// (0x00055fb5) list_double2_graphic_pane_vc

0x64e6,	// (0x0005119c) list_double2_large_graphic_pane_vc_ParamLimits

0x64e6,	// (0x0005119c) list_double2_large_graphic_pane_vc

0xb2ff,	// (0x00055fb5) list_double2_pane_vc_ParamLimits

0xb2ff,	// (0x00055fb5) list_double2_pane_vc

0xb2ff,	// (0x00055fb5) list_double_graphic_heading_pane_vc_ParamLimits

0xb2ff,	// (0x00055fb5) list_double_graphic_heading_pane_vc

0xb2ff,	// (0x00055fb5) list_double_graphic_pane_vc_ParamLimits

0xb2ff,	// (0x00055fb5) list_double_graphic_pane_vc

0xb2ff,	// (0x00055fb5) list_double_heading_pane_vc_ParamLimits

0xb2ff,	// (0x00055fb5) list_double_heading_pane_vc

0x64f7,	// (0x000511ad) list_double_large_graphic_pane_vc_ParamLimits

0x64f7,	// (0x000511ad) list_double_large_graphic_pane_vc

0xb2ff,	// (0x00055fb5) list_double_number_pane_vc_ParamLimits

0xb2ff,	// (0x00055fb5) list_double_number_pane_vc

0xb2ff,	// (0x00055fb5) list_double_pane_vc_ParamLimits

0xb2ff,	// (0x00055fb5) list_double_pane_vc

0xb2ff,	// (0x00055fb5) list_double_time_pane_vc_ParamLimits

0xb2ff,	// (0x00055fb5) list_double_time_pane_vc

0xb2ff,	// (0x00055fb5) list_setting_number_pane_vc_ParamLimits

0xb2ff,	// (0x00055fb5) list_setting_number_pane_vc

0xb2ff,	// (0x00055fb5) list_setting_pane_vc_ParamLimits

0xb2ff,	// (0x00055fb5) list_setting_pane_vc

0xb2ff,	// (0x00055fb5) list_single_graphic_heading_pane_vc_ParamLimits

0xb2ff,	// (0x00055fb5) list_single_graphic_heading_pane_vc

0xb2ff,	// (0x00055fb5) list_single_heading_pane_vc_ParamLimits

0xb2ff,	// (0x00055fb5) list_single_heading_pane_vc

0x7d92,	// (0x00052a48) list_single_number_heading_pane_vc_ParamLimits

0x7d92,	// (0x00052a48) list_single_number_heading_pane_vc

0x603c,	// (0x00050cf2) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x603c,	// (0x00050cf2) list_double_graphic_heading_pane_vc_g1

0x9458,	// (0x0005410e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9458,	// (0x0005410e) list_double_graphic_heading_pane_vc_g2

0x7d53,	// (0x00052a09) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7d53,	// (0x00052a09) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005a479) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005a479) list_double_graphic_heading_pane_vc_g

0x660f,	// (0x000512c5) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x660f,	// (0x000512c5) list_double_graphic_heading_pane_vc_t1

0x662b,	// (0x000512e1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x662b,	// (0x000512e1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f8,	// (0x0005a6ae) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f8,	// (0x0005a6ae) list_double_graphic_heading_pane_vc_t

0x7d5f,	// (0x00052a15) list_setting_pane_vc_g1_ParamLimits

0x7d5f,	// (0x00052a15) list_setting_pane_vc_g1

0x7d6b,	// (0x00052a21) list_setting_pane_vc_g2_ParamLimits

0x7d6b,	// (0x00052a21) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x0005a4a4) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x0005a4a4) list_setting_pane_vc_g

0x6649,	// (0x000512ff) list_setting_pane_vc_t1_ParamLimits

0x6649,	// (0x000512ff) list_setting_pane_vc_t1

0x6665,	// (0x0005131b) list_setting_pane_vc_t2_ParamLimits

0x6665,	// (0x0005131b) list_setting_pane_vc_t2

0x0001,

0xfa26,	// (0x0005a6dc) list_setting_pane_vc_t_ParamLimits

0xfa26,	// (0x0005a6dc) list_setting_pane_vc_t

0x6165,	// (0x00050e1b) set_value_pane_cp_vc_ParamLimits

0x6165,	// (0x00050e1b) set_value_pane_cp_vc

0x9458,	// (0x0005410e) list_single_number_heading_pane_vc_g1_ParamLimits

0x9458,	// (0x0005410e) list_single_number_heading_pane_vc_g1

0x7d53,	// (0x00052a09) list_single_number_heading_pane_vc_g2_ParamLimits

0x7d53,	// (0x00052a09) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a49a) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a49a) list_single_number_heading_pane_vc_g

0x60b3,	// (0x00050d69) list_single_number_heading_pane_vc_t1_ParamLimits

0x60b3,	// (0x00050d69) list_single_number_heading_pane_vc_t1

0x6681,	// (0x00051337) list_single_number_heading_pane_vc_t2_ParamLimits

0x6681,	// (0x00051337) list_single_number_heading_pane_vc_t2

0x6695,	// (0x0005134b) list_single_number_heading_pane_vc_t3_ParamLimits

0x6695,	// (0x0005134b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2b,	// (0x0005a6e1) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2b,	// (0x0005a6e1) list_single_number_heading_pane_vc_t

0x603c,	// (0x00050cf2) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x603c,	// (0x00050cf2) list_single_graphic_heading_pane_vc_g1

0x9458,	// (0x0005410e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9458,	// (0x0005410e) list_single_graphic_heading_pane_vc_g4

0x7d53,	// (0x00052a09) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7d53,	// (0x00052a09) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0005a479) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005a479) list_single_graphic_heading_pane_vc_g

0x60b3,	// (0x00050d69) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x60b3,	// (0x00050d69) list_single_graphic_heading_pane_vc_t1

0x66a7,	// (0x0005135d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x66a7,	// (0x0005135d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa32,	// (0x0005a6e8) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x0005a6e8) list_single_graphic_heading_pane_vc_t

0x9458,	// (0x0005410e) list_double2_pane_vc_g1_ParamLimits

0x9458,	// (0x0005410e) list_double2_pane_vc_g1

0x7d53,	// (0x00052a09) list_double2_pane_vc_g2_ParamLimits

0x7d53,	// (0x00052a09) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a49a) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a49a) list_double2_pane_vc_g

0x66bb,	// (0x00051371) list_double2_pane_vc_t1_ParamLimits

0x66bb,	// (0x00051371) list_double2_pane_vc_t1

0x66d1,	// (0x00051387) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x66d1,	// (0x00051387) list_double2_large_graphic_pane_vc_g1

0x66dd,	// (0x00051393) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x66dd,	// (0x00051393) list_double2_large_graphic_pane_vc_g2

0x66e9,	// (0x0005139f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x66e9,	// (0x0005139f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa37,	// (0x0005a6ed) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa37,	// (0x0005a6ed) list_double2_large_graphic_pane_vc_g

0x66f5,	// (0x000513ab) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x66f5,	// (0x000513ab) list_double2_large_graphic_pane_vc_t1

0x7e0d,	// (0x00052ac3) list_double_time_pane_vc_g1_ParamLimits

0x7e0d,	// (0x00052ac3) list_double_time_pane_vc_g1

0x7e19,	// (0x00052acf) list_double_time_pane_vc_g2_ParamLimits

0x7e19,	// (0x00052acf) list_double_time_pane_vc_g2

0x0001,

0xfa3e,	// (0x0005a6f4) list_double_time_pane_vc_g_ParamLimits

0xfa3e,	// (0x0005a6f4) list_double_time_pane_vc_g

0x670b,	// (0x000513c1) list_double_time_pane_vc_t1_ParamLimits

0x670b,	// (0x000513c1) list_double_time_pane_vc_t1

0x672f,	// (0x000513e5) list_double_time_pane_vc_t2_ParamLimits

0x672f,	// (0x000513e5) list_double_time_pane_vc_t2

0x7e25,	// (0x00052adb) list_double_time_pane_vc_t3_ParamLimits

0x7e25,	// (0x00052adb) list_double_time_pane_vc_t3

0x7e37,	// (0x00052aed) list_double_time_pane_vc_t4_ParamLimits

0x7e37,	// (0x00052aed) list_double_time_pane_vc_t4

0x0003,

0xfa43,	// (0x0005a6f9) list_double_time_pane_vc_t_ParamLimits

0xfa43,	// (0x0005a6f9) list_double_time_pane_vc_t

0x9458,	// (0x0005410e) list_double_pane_vc_g1_ParamLimits

0x9458,	// (0x0005410e) list_double_pane_vc_g1

0x7d53,	// (0x00052a09) list_double_pane_vc_g2_ParamLimits

0x7d53,	// (0x00052a09) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a49a) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a49a) list_double_pane_vc_g

0x7e4b,	// (0x00052b01) list_double_pane_vc_t1_ParamLimits

0x7e4b,	// (0x00052b01) list_double_pane_vc_t1

0x7e5f,	// (0x00052b15) list_double_pane_vc_t2_ParamLimits

0x7e5f,	// (0x00052b15) list_double_pane_vc_t2

0x0001,

0xfa4c,	// (0x0005a702) list_double_pane_vc_t_ParamLimits

0xfa4c,	// (0x0005a702) list_double_pane_vc_t

0x9458,	// (0x0005410e) list_double_number_pane_vc_g1_ParamLimits

0x9458,	// (0x0005410e) list_double_number_pane_vc_g1

0x7d53,	// (0x00052a09) list_double_number_pane_vc_g2_ParamLimits

0x7d53,	// (0x00052a09) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a49a) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a49a) list_double_number_pane_vc_g

0x7e77,	// (0x00052b2d) list_double_number_pane_vc_t1_ParamLimits

0x7e77,	// (0x00052b2d) list_double_number_pane_vc_t1

0x7e89,	// (0x00052b3f) list_double_number_pane_vc_t2_ParamLimits

0x7e89,	// (0x00052b3f) list_double_number_pane_vc_t2

0x7e9d,	// (0x00052b53) list_double_number_pane_vc_t3_ParamLimits

0x7e9d,	// (0x00052b53) list_double_number_pane_vc_t3

0x0002,

0xfa51,	// (0x0005a707) list_double_number_pane_vc_t_ParamLimits

0xfa51,	// (0x0005a707) list_double_number_pane_vc_t

0x7eb5,	// (0x00052b6b) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7eb5,	// (0x00052b6b) list_double_large_graphic_pane_vc_g1

0x7ed7,	// (0x00052b8d) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7ed7,	// (0x00052b8d) list_double_large_graphic_pane_vc_g2

0x7eeb,	// (0x00052ba1) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7eeb,	// (0x00052ba1) list_double_large_graphic_pane_vc_g3

0x7efa,	// (0x00052bb0) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7efa,	// (0x00052bb0) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa58,	// (0x0005a70e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa58,	// (0x0005a70e) list_double_large_graphic_pane_vc_g

0x7f06,	// (0x00052bbc) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7f06,	// (0x00052bbc) list_double_large_graphic_pane_vc_t1

0x7f22,	// (0x00052bd8) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7f22,	// (0x00052bd8) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa61,	// (0x0005a717) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa61,	// (0x0005a717) list_double_large_graphic_pane_vc_t

0x9458,	// (0x0005410e) list_double_heading_pane_vc_g1_ParamLimits

0x9458,	// (0x0005410e) list_double_heading_pane_vc_g1

0x7d53,	// (0x00052a09) list_double_heading_pane_vc_g2_ParamLimits

0x7d53,	// (0x00052a09) list_double_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a49a) list_double_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a49a) list_double_heading_pane_vc_g

0x7f44,	// (0x00052bfa) list_double_heading_pane_vc_t1_ParamLimits

0x7f44,	// (0x00052bfa) list_double_heading_pane_vc_t1

0x60b3,	// (0x00050d69) list_double_heading_pane_vc_t2_ParamLimits

0x60b3,	// (0x00050d69) list_double_heading_pane_vc_t2

0x0001,

0xfa66,	// (0x0005a71c) list_double_heading_pane_vc_t_ParamLimits

0xfa66,	// (0x0005a71c) list_double_heading_pane_vc_t

0x7f58,	// (0x00052c0e) list_double_graphic_pane_vc_g1_ParamLimits

0x7f58,	// (0x00052c0e) list_double_graphic_pane_vc_g1

0x7f64,	// (0x00052c1a) list_double_graphic_pane_vc_g2_ParamLimits

0x7f64,	// (0x00052c1a) list_double_graphic_pane_vc_g2

0x9458,	// (0x0005410e) list_double_graphic_pane_vc_g3_ParamLimits

0x9458,	// (0x0005410e) list_double_graphic_pane_vc_g3

0x0003,

0xfa6b,	// (0x0005a721) list_double_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x0005a721) list_double_graphic_pane_vc_g

0x7f81,	// (0x00052c37) list_double_graphic_pane_vc_t1_ParamLimits

0x7f81,	// (0x00052c37) list_double_graphic_pane_vc_t1

0x7fab,	// (0x00052c61) list_double_graphic_pane_vc_t2_ParamLimits

0x7fab,	// (0x00052c61) list_double_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x0005a72a) list_double_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x0005a72a) list_double_graphic_pane_vc_t

0x489f,	// (0x0004f555) aid_size_cell_fastswap

0x48a7,	// (0x0004f55d) aid_size_cell_touch_ParamLimits

0x48a7,	// (0x0004f55d) aid_size_cell_touch

0x4b0c,	// (0x0004f7c2) popup_fast_swap_wide_window_ParamLimits

0x4b0c,	// (0x0004f7c2) popup_fast_swap_wide_window

0x4c20,	// (0x0004f8d6) touch_pane_ParamLimits

0x4c20,	// (0x0004f8d6) touch_pane

0x8885,	// (0x0005353b) button_value_adjust_pane_cp2

0x5179,	// (0x0004fe2f) button_value_adjust_pane_cp4

0x519d,	// (0x0004fe53) form_field_data_pane_cp2

0x51be,	// (0x0004fe74) form_field_data_wide_pane_cp2

0x8cf6,	// (0x000539ac) bg_scroll_pane_ParamLimits

0x5581,	// (0x00050237) scroll_handle_pane_ParamLimits

0x5595,	// (0x0005024b) scroll_sc2_down_pane_ParamLimits

0x5595,	// (0x0005024b) scroll_sc2_down_pane

0x8d27,	// (0x000539dd) scroll_sc2_up_pane_ParamLimits

0x8d27,	// (0x000539dd) scroll_sc2_up_pane

0xbeb8,	// (0x00056b6e) grid_wheel_folder_pane_g1_ParamLimits

0xbeb8,	// (0x00056b6e) grid_wheel_folder_pane_g1

0x57c8,	// (0x0005047e) clock_nsta_pane_cp2_ParamLimits

0x57c8,	// (0x0005047e) clock_nsta_pane_cp2

0x8a71,	// (0x00053727) listscroll_midp_pane_ParamLimits

0x9527,	// (0x000541dd) midp_canvas_pane

0x980f,	// (0x000544c5) nsta_clock_indic_pane

0x9843,	// (0x000544f9) listscroll_form_pane_vc

0x984b,	// (0x00054501) listscroll_set_pane_vc_ParamLimits

0x984b,	// (0x00054501) listscroll_set_pane_vc

0x9950,	// (0x00054606) clock_nsta_pane

0x99c5,	// (0x0005467b) indicator_nsta_pane

0x9ca5,	// (0x0005495b) bg_popup_sub_pane_cp2_ParamLimits

0x9cb9,	// (0x0005496f) find_pane_cp2_ParamLimits

0x9cb9,	// (0x0005496f) find_pane_cp2

0x9ccf,	// (0x00054985) grid_toobar_pane_ParamLimits

0x9daf,	// (0x00054a65) list_form_gen_pane_vc_ParamLimits

0x9daf,	// (0x00054a65) list_form_gen_pane_vc

0x9dc5,	// (0x00054a7b) scroll_pane_cp8_vc_ParamLimits

0x9dc5,	// (0x00054a7b) scroll_pane_cp8_vc

0x9e41,	// (0x00054af7) data_form_wide_pane_vc_ParamLimits

0x9e41,	// (0x00054af7) data_form_wide_pane_vc

0x9e4d,	// (0x00054b03) form_field_data_wide_pane_vc_g1

0x9e55,	// (0x00054b0b) form_field_data_wide_pane_vc_t1_ParamLimits

0x9e55,	// (0x00054b0b) form_field_data_wide_pane_vc_t1

0x8899,	// (0x0005354f) input_focus_pane_cp6_vc_ParamLimits

0x8899,	// (0x0005354f) input_focus_pane_cp6_vc

0xa181,	// (0x00054e37) list_midp_pane_ParamLimits

0xa18d,	// (0x00054e43) scroll_pane_cp16_ParamLimits

0xa18d,	// (0x00054e43) scroll_pane_cp16

0xa1db,	// (0x00054e91) button_value_adjust_pane_ParamLimits

0xa1db,	// (0x00054e91) button_value_adjust_pane

0xb159,	// (0x00055e0f) button_value_adjust_pane_cp6_ParamLimits

0xb159,	// (0x00055e0f) button_value_adjust_pane_cp6

0xb283,	// (0x00055f39) settings_code_pane_cp_ParamLimits

0xb283,	// (0x00055f39) settings_code_pane_cp

0x7837,	// (0x000524ed) cell_touch_pane_g1

0x7837,	// (0x000524ed) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0005a3be) cell_touch_pane_g

0xb7fa,	// (0x000564b0) cell_touch_pane_cp_ParamLimits

0xb7fa,	// (0x000564b0) cell_touch_pane_cp

0xb80a,	// (0x000564c0) cell_touch_pane_ParamLimits

0xb80a,	// (0x000564c0) cell_touch_pane

0x7837,	// (0x000524ed) scroll_sc2_down_pane_g1

0x7837,	// (0x000524ed) scroll_sc2_up_pane_g1

0x7841,	// (0x000524f7) bg_set_opt_pane_cp4_vc

0xb81c,	// (0x000564d2) list_set_graphic_pane_vc_g1_ParamLimits

0xb81c,	// (0x000564d2) list_set_graphic_pane_vc_g1

0xb828,	// (0x000564de) list_set_graphic_pane_vc_g2_ParamLimits

0xb828,	// (0x000564de) list_set_graphic_pane_vc_g2

0x0001,

0xf9fd,	// (0x0005a6b3) list_set_graphic_pane_vc_g_ParamLimits

0xf9fd,	// (0x0005a6b3) list_set_graphic_pane_vc_g

0xb834,	// (0x000564ea) text_primary_small_cp13_vc_ParamLimits

0xb834,	// (0x000564ea) text_primary_small_cp13_vc

0xb84c,	// (0x00056502) list_set_graphic_pane_vc_ParamLimits

0xb84c,	// (0x00056502) list_set_graphic_pane_vc

0x7841,	// (0x000524f7) input_focus_pane_cp2_vc

0x7837,	// (0x000524ed) setting_code_pane_vc_g1

0x796c,	// (0x00052622) setting_code_pane_vc_t1

0xb85f,	// (0x00056515) set_text_pane_vc_t1_ParamLimits

0xb85f,	// (0x00056515) set_text_pane_vc_t1

0x7841,	// (0x000524f7) input_focus_pane_cp1_vc

0xb87b,	// (0x00056531) list_set_text_pane_vc

0x7837,	// (0x000524ed) setting_text_pane_vc_g1

0x7841,	// (0x000524f7) bg_set_opt_pane_cp2_vc

0x7963,	// (0x00052619) setting_slider_graphic_pane_vc_g1

0xb885,	// (0x0005653b) setting_slider_graphic_pane_vc_t1

0xb895,	// (0x0005654b) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa02,	// (0x0005a6b8) setting_slider_graphic_pane_vc_t

0xb8a5,	// (0x0005655b) slider_set_pane_cp_vc

0xb8ad,	// (0x00056563) slider_set_pane_vc_g1

0xb8b6,	// (0x0005656c) slider_set_pane_vc_g2

0x0006,

0xfa07,	// (0x0005a6bd) slider_set_pane_vc_g

0x88e8,	// (0x0005359e) set_opt_bg_pane_g1_copy1

0x88f0,	// (0x000535a6) set_opt_bg_pane_g2_copy1

0xb8e2,	// (0x00056598) set_opt_bg_pane_g3_copy1

0x8900,	// (0x000535b6) set_opt_bg_pane_g4_copy1

0x8908,	// (0x000535be) set_opt_bg_pane_g5_copy1

0x8910,	// (0x000535c6) set_opt_bg_pane_g6_copy1

0xb8ec,	// (0x000565a2) set_opt_bg_pane_g7_copy1

0xb8f4,	// (0x000565aa) set_opt_bg_pane_g8_copy1

0xb8fe,	// (0x000565b4) set_opt_bg_pane_g9_copy1

0x7841,	// (0x000524f7) bg_set_opt_pane_cp_vc

0xb908,	// (0x000565be) setting_slider_pane_vc_t1

0xb917,	// (0x000565cd) setting_slider_pane_vc_t2

0xb927,	// (0x000565dd) setting_slider_pane_vc_t3

0x0002,

0xfa16,	// (0x0005a6cc) setting_slider_pane_vc_t

0xb937,	// (0x000565ed) slider_set_pane_vc

0x624c,	// (0x00050f02) volume_set_pane_vc_g1

0x6255,	// (0x00050f0b) volume_set_pane_vc_g2

0x625e,	// (0x00050f14) volume_set_pane_vc_g3

0x6267,	// (0x00050f1d) volume_set_pane_vc_g4

0x6270,	// (0x00050f26) volume_set_pane_vc_g5

0x6279,	// (0x00050f2f) volume_set_pane_vc_g6

0x6282,	// (0x00050f38) volume_set_pane_vc_g7

0x628b,	// (0x00050f41) volume_set_pane_vc_g8

0x6294,	// (0x00050f4a) volume_set_pane_vc_g9

0x629d,	// (0x00050f53) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x0005a571) volume_set_pane_vc_g

0xb93f,	// (0x000565f5) volume_set_pane_vc

0xb947,	// (0x000565fd) button_value_adjust_pane_cp1_vc

0xb951,	// (0x00056607) list_highlight_pane_cp2_vc

0xb95a,	// (0x00056610) list_set_pane_vc_ParamLimits

0xb95a,	// (0x00056610) list_set_pane_vc

0xb9b8,	// (0x0005666e) main_pane_set_vc_t1_ParamLimits

0xb9b8,	// (0x0005666e) main_pane_set_vc_t1

0xb9cd,	// (0x00056683) main_pane_set_vc_t2_ParamLimits

0xb9cd,	// (0x00056683) main_pane_set_vc_t2

0xb9df,	// (0x00056695) main_pane_set_vc_t3_ParamLimits

0xb9df,	// (0x00056695) main_pane_set_vc_t3

0xb9f3,	// (0x000566a9) main_pane_set_vc_t4_ParamLimits

0xb9f3,	// (0x000566a9) main_pane_set_vc_t4

0x0003,

0xfa1d,	// (0x0005a6d3) main_pane_set_vc_t_ParamLimits

0xfa1d,	// (0x0005a6d3) main_pane_set_vc_t

0xba07,	// (0x000566bd) setting_code_pane_vc_ParamLimits

0xba07,	// (0x000566bd) setting_code_pane_vc

0xba18,	// (0x000566ce) setting_slider_graphic_pane_vc

0xba18,	// (0x000566ce) setting_slider_pane_vc

0xba18,	// (0x000566ce) setting_text_pane_vc

0xba18,	// (0x000566ce) setting_volume_pane_vc

0xba22,	// (0x000566d8) scroll_pane_cp121_vc

0x8873,	// (0x00053529) set_content_pane_vc

0xba2a,	// (0x000566e0) button_value_adjust_pane_g1

0xba33,	// (0x000566e9) button_value_adjust_pane_g2

0x0001,

0xfa79,	// (0x0005a72f) button_value_adjust_pane_g

0xba3c,	// (0x000566f2) form_field_slider_wide_pane_vc_t1_ParamLimits

0xba3c,	// (0x000566f2) form_field_slider_wide_pane_vc_t1

0xba50,	// (0x00056706) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba50,	// (0x00056706) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7e,	// (0x0005a734) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7e,	// (0x0005a734) form_field_slider_wide_pane_vc_t

0x7b9c,	// (0x00052852) input_focus_pane_cp10_vc_ParamLimits

0x7b9c,	// (0x00052852) input_focus_pane_cp10_vc

0xba7e,	// (0x00056734) slider_cont_pane_cp1_vc_ParamLimits

0xba7e,	// (0x00056734) slider_cont_pane_cp1_vc

0xba90,	// (0x00056746) slider_form_pane_g1_cp2

0xb8b6,	// (0x0005656c) slider_form_pane_g2_cp2

0xbabd,	// (0x00056773) form_field_slider_pane_vc_t3

0xbacb,	// (0x00056781) form_field_slider_pane_vc_t4

0xbad9,	// (0x0005678f) slider_form_pane_vc_ParamLimits

0xbad9,	// (0x0005678f) slider_form_pane_vc

0xbae6,	// (0x0005679c) form_field_slider_pane_vc_t1_ParamLimits

0xbae6,	// (0x0005679c) form_field_slider_pane_vc_t1

0xba50,	// (0x00056706) form_field_slider_pane_vc_t2_ParamLimits

0xba50,	// (0x00056706) form_field_slider_pane_vc_t2

0x0001,

0xfa90,	// (0x0005a746) form_field_slider_pane_vc_t_ParamLimits

0xfa90,	// (0x0005a746) form_field_slider_pane_vc_t

0x7b9c,	// (0x00052852) input_focus_pane_cp9_vc_ParamLimits

0x7b9c,	// (0x00052852) input_focus_pane_cp9_vc

0xbb02,	// (0x000567b8) slider_cont_pane_vc_ParamLimits

0xbb02,	// (0x000567b8) slider_cont_pane_vc

0xbb16,	// (0x000567cc) list_form_graphic_pane_cp_vc_ParamLimits

0xbb16,	// (0x000567cc) list_form_graphic_pane_cp_vc

0x9e4d,	// (0x00054b03) form_field_popup_wide_pane_vc_g1

0xbb2b,	// (0x000567e1) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbb2b,	// (0x000567e1) form_field_popup_wide_pane_vc_t1

0x8899,	// (0x0005354f) input_focus_pane_cp8_vc_ParamLimits

0x8899,	// (0x0005354f) input_focus_pane_cp8_vc

0xbb70,	// (0x00056826) list_form_wide_pane_vc_ParamLimits

0xbb70,	// (0x00056826) list_form_wide_pane_vc

0xbb7c,	// (0x00056832) list_form_graphic_pane_vc_g1

0xbb84,	// (0x0005683a) list_form_graphic_pane_vc_t1_ParamLimits

0xbb84,	// (0x0005683a) list_form_graphic_pane_vc_t1

0x7921,	// (0x000525d7) list_highlight_pane_cp5_vc_ParamLimits

0x7921,	// (0x000525d7) list_highlight_pane_cp5_vc

0xbba0,	// (0x00056856) list_form_graphic_pane_vc_ParamLimits

0xbba0,	// (0x00056856) list_form_graphic_pane_vc

0x9e4d,	// (0x00054b03) form_field_popup_pane_vc_g1

0xbbb6,	// (0x0005686c) form_field_popup_pane_vc_t1_ParamLimits

0xbbb6,	// (0x0005686c) form_field_popup_pane_vc_t1

0x8899,	// (0x0005354f) input_focus_pane_cp7_vc_ParamLimits

0x8899,	// (0x0005354f) input_focus_pane_cp7_vc

0xbbcd,	// (0x00056883) list_form_pane_vc_ParamLimits

0xbbcd,	// (0x00056883) list_form_pane_vc

0xbbd9,	// (0x0005688f) data_form_pane_vc_t1_ParamLimits

0xbbd9,	// (0x0005688f) data_form_pane_vc_t1

0x88e8,	// (0x0005359e) input_focus_pane_vc_g1

0x88f0,	// (0x000535a6) input_focus_pane_vc_g2

0x88f8,	// (0x000535ae) input_focus_pane_vc_g3

0x8900,	// (0x000535b6) input_focus_pane_vc_g4

0x8908,	// (0x000535be) input_focus_pane_vc_g5

0x8910,	// (0x000535c6) input_focus_pane_vc_g6

0x8918,	// (0x000535ce) input_focus_pane_vc_g7

0x8920,	// (0x000535d6) input_focus_pane_vc_g8

0x8928,	// (0x000535de) input_focus_pane_vc_g9

0x7837,	// (0x000524ed) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0005a347) input_focus_pane_vc_g

0x9e41,	// (0x00054af7) data_form_pane_vc_ParamLimits

0x9e41,	// (0x00054af7) data_form_pane_vc

0x9e4d,	// (0x00054b03) form_field_data_pane_vc_g1

0xbbf4,	// (0x000568aa) form_field_data_pane_vc_t1_ParamLimits

0xbbf4,	// (0x000568aa) form_field_data_pane_vc_t1

0x8899,	// (0x0005354f) input_focus_pane_vc_ParamLimits

0x8899,	// (0x0005354f) input_focus_pane_vc

0xbc0e,	// (0x000568c4) button_value_adjust_pane_cp3_vc

0xbc16,	// (0x000568cc) button_value_adjust_pane_cp5_vc

0xbc1e,	// (0x000568d4) form_field_data_pane_vc_ParamLimits

0xbc1e,	// (0x000568d4) form_field_data_pane_vc

0xbc35,	// (0x000568eb) form_field_data_pane_vc_cp2

0xbc3d,	// (0x000568f3) form_field_data_wide_pane_vc_ParamLimits

0xbc3d,	// (0x000568f3) form_field_data_wide_pane_vc

0xbc53,	// (0x00056909) form_field_data_wide_pane_vc_cp2

0xbc5b,	// (0x00056911) form_field_popup_pane_vc_ParamLimits

0xbc5b,	// (0x00056911) form_field_popup_pane_vc

0xbc72,	// (0x00056928) form_field_popup_wide_pane_vc_ParamLimits

0xbc72,	// (0x00056928) form_field_popup_wide_pane_vc

0xbc88,	// (0x0005693e) form_field_slider_pane_vc_ParamLimits

0xbc88,	// (0x0005693e) form_field_slider_pane_vc

0xbc9b,	// (0x00056951) form_field_slider_wide_pane_vc_ParamLimits

0xbc9b,	// (0x00056951) form_field_slider_wide_pane_vc

0xbcae,	// (0x00056964) grid_touch_1_pane_ParamLimits

0xbcae,	// (0x00056964) grid_touch_1_pane

0xbcba,	// (0x00056970) grid_touch_2_pane_ParamLimits

0xbcba,	// (0x00056970) grid_touch_2_pane

0x97da,	// (0x00054490) touch_pane_g1_ParamLimits

0x97da,	// (0x00054490) touch_pane_g1

0xbcd2,	// (0x00056988) cell_app_pane_cp_wide_ParamLimits

0xbcd2,	// (0x00056988) cell_app_pane_cp_wide

0xbce3,	// (0x00056999) grid_popup_fast_wide_pane_ParamLimits

0xbce3,	// (0x00056999) grid_popup_fast_wide_pane

0xbcf7,	// (0x000569ad) scroll_pane_cp19_ParamLimits

0xbcf7,	// (0x000569ad) scroll_pane_cp19

0x7841,	// (0x000524f7) bg_popup_window_pane_cp20

0xbd0b,	// (0x000569c1) listscroll_popup_fast_wide_pane

0x7921,	// (0x000525d7) grid_indicator_nsta_pane

0xbd13,	// (0x000569c9) clock_nsta_pane_g1

0xbd1c,	// (0x000569d2) clock_nsta_pane_t1

0xbd38,	// (0x000569ee) cell_indicator_nsta_pane_ParamLimits

0xbd38,	// (0x000569ee) cell_indicator_nsta_pane

0xbd69,	// (0x00056a1f) cell_indicator_nsta_pane_g1

0xbd77,	// (0x00056a2d) cell_indicator_nsta_pane_g2

0x0001,

0xfaa1,	// (0x0005a757) cell_indicator_nsta_pane_g

0xbd84,	// (0x00056a3a) clock_nsta_pane_cp

0xbd8c,	// (0x00056a42) indicator_nsta_pane_cp

0xbd94,	// (0x00056a4a) nsta_clock_indic_pane_g1

0x79ea,	// (0x000526a0) grid_indicator_pane

0x8e1c,	// (0x00053ad2) scroll_pane_cp29

0x5717,	// (0x000503cd) indicator_nsta_pane_cp2_ParamLimits

0x5717,	// (0x000503cd) indicator_nsta_pane_cp2

0x7921,	// (0x000525d7) main_apps_wheel_pane

0xa062,	// (0x00054d18) form_midp_field_text_pane_ParamLimits

0xa1ad,	// (0x00054e63) scroll_bar_cp050_ParamLimits

0xbdf5,	// (0x00056aab) cell_indicator_pane_ParamLimits

0xbdf5,	// (0x00056aab) cell_indicator_pane

0xbe0c,	// (0x00056ac2) cell_indicator_pane_g1

0xbe16,	// (0x00056acc) grid_wheel_folder_pane_ParamLimits

0xbe16,	// (0x00056acc) grid_wheel_folder_pane

0xbe2c,	// (0x00056ae2) list_wheel_apps_pane_ParamLimits

0xbe2c,	// (0x00056ae2) list_wheel_apps_pane

0xbe3d,	// (0x00056af3) main_apps_wheel_pane_g1_ParamLimits

0xbe3d,	// (0x00056af3) main_apps_wheel_pane_g1

0xbe51,	// (0x00056b07) main_apps_wheel_pane_g2_ParamLimits

0xbe51,	// (0x00056b07) main_apps_wheel_pane_g2

0x0001,

0xfabd,	// (0x0005a773) main_apps_wheel_pane_g_ParamLimits

0xfabd,	// (0x0005a773) main_apps_wheel_pane_g

0xbe69,	// (0x00056b1f) main_apps_wheel_pane_t1_ParamLimits

0xbe69,	// (0x00056b1f) main_apps_wheel_pane_t1

0xbe8c,	// (0x00056b42) list_wheel_apps_pane_g1

0xbe94,	// (0x00056b4a) list_wheel_apps_pane_g2

0xbe9c,	// (0x00056b52) list_wheel_apps_pane_g3

0xbea4,	// (0x00056b5a) list_wheel_apps_pane_g4

0xbeae,	// (0x00056b64) list_wheel_apps_pane_g5

0x0004,

0xfac2,	// (0x0005a778) list_wheel_apps_pane_g

0x939f,	// (0x00054055) navi_icon_text_pane

0x987f,	// (0x00054535) aid_fill_nsta

0xbed1,	// (0x00056b87) navi_icon_text_pane_g1

0xbedd,	// (0x00056b93) navi_icon_text_pane_t1

0x9232,	// (0x00053ee8) list_set_graphic_pane_t1_ParamLimits

0x9232,	// (0x00053ee8) list_set_graphic_pane_t1

0xa908,	// (0x000555be) popup_midp_note_alarm_window_t6_ParamLimits

0xa908,	// (0x000555be) popup_midp_note_alarm_window_t6

0xa91a,	// (0x000555d0) popup_midp_note_alarm_window_t7_ParamLimits

0xa91a,	// (0x000555d0) popup_midp_note_alarm_window_t7

0xa92c,	// (0x000555e2) popup_midp_note_alarm_window_t8_ParamLimits

0xa92c,	// (0x000555e2) popup_midp_note_alarm_window_t8

0xa93e,	// (0x000555f4) popup_midp_note_alarm_window_t9_ParamLimits

0xa93e,	// (0x000555f4) popup_midp_note_alarm_window_t9

0xa950,	// (0x00055606) popup_midp_note_alarm_window_t10_ParamLimits

0xa950,	// (0x00055606) popup_midp_note_alarm_window_t10

0xa962,	// (0x00055618) popup_midp_note_alarm_window_t11_ParamLimits

0xa962,	// (0x00055618) popup_midp_note_alarm_window_t11

0xa974,	// (0x0005562a) scroll_pane_cp17_ParamLimits

0xa974,	// (0x0005562a) scroll_pane_cp17

0x624c,	// (0x00050f02) volume_small_pane_cp_g1

0x677e,	// (0x00051434) volume_small_pane_cp_g2

0x6787,	// (0x0005143d) volume_small_pane_cp_g3

0x6790,	// (0x00051446) volume_small_pane_cp_g4

0x6799,	// (0x0005144f) volume_small_pane_cp_g5

0x67a2,	// (0x00051458) volume_small_pane_cp_g6

0x67ab,	// (0x00051461) volume_small_pane_cp_g7

0x67b4,	// (0x0005146a) volume_small_pane_cp_g8

0x67bd,	// (0x00051473) volume_small_pane_cp_g9

0x67c6,	// (0x0005147c) volume_small_pane_cp_g10

0x95f0,	// (0x000542a6) midp_ticker_pane_g1_ParamLimits

0x95fc,	// (0x000542b2) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0005a413) midp_ticker_pane_g_ParamLimits

0x9608,	// (0x000542be) midp_ticker_pane_t1_ParamLimits

0x9895,	// (0x0005454b) aid_fill_nsta_2

0xa199,	// (0x00054e4f) list_form2_midp_pane

0xb2ce,	// (0x00055f84) midp_editing_number_pane_ParamLimits

0xb2dd,	// (0x00055f93) midp_ticker_pane_ParamLimits

0xbeef,	// (0x00056ba5) form2_midp_field_pane

0xbf13,	// (0x00056bc9) scroll_pane_cp51

0xbf33,	// (0x00056be9) form2_midp_button_pane_ParamLimits

0xbf33,	// (0x00056be9) form2_midp_button_pane

0xbf45,	// (0x00056bfb) form2_midp_content_pane_ParamLimits

0xbf45,	// (0x00056bfb) form2_midp_content_pane

0xbf5f,	// (0x00056c15) form2_midp_field_choice_group_pane

0xbf67,	// (0x00056c1d) form2_midp_field_pane_g1

0xbf6f,	// (0x00056c25) form2_midp_field_pane_g2

0xbf77,	// (0x00056c2d) form2_midp_field_pane_g3

0xbf7f,	// (0x00056c35) form2_midp_field_pane_g4

0x0003,

0xfae7,	// (0x0005a79d) form2_midp_field_pane_g

0xbf87,	// (0x00056c3d) form2_midp_gauge_slider_pane

0xbf8f,	// (0x00056c45) form2_midp_gauge_wait_pane

0xbf97,	// (0x00056c4d) form2_midp_image_pane_ParamLimits

0xbf97,	// (0x00056c4d) form2_midp_image_pane

0xbfb2,	// (0x00056c68) form2_midp_label_pane_ParamLimits

0xbfb2,	// (0x00056c68) form2_midp_label_pane

0xbfcb,	// (0x00056c81) form2_midp_label_pane_cp_ParamLimits

0xbfcb,	// (0x00056c81) form2_midp_label_pane_cp

0xbfec,	// (0x00056ca2) form2_midp_string_pane_ParamLimits

0xbfec,	// (0x00056ca2) form2_midp_string_pane

0x7fd5,	// (0x00052c8b) form2_midp_text_pane_ParamLimits

0x7fd5,	// (0x00052c8b) form2_midp_text_pane

0xbffe,	// (0x00056cb4) form2_midp_time_pane

0xc00e,	// (0x00056cc4) input_focus_pane_cp51_ParamLimits

0xc00e,	// (0x00056cc4) input_focus_pane_cp51

0xc026,	// (0x00056cdc) form2_midp_label_pane_t1_ParamLimits

0xc026,	// (0x00056cdc) form2_midp_label_pane_t1

0x7ff4,	// (0x00052caa) form2_mdip_text_pane_t1_ParamLimits

0x7ff4,	// (0x00052caa) form2_mdip_text_pane_t1

0x8012,	// (0x00052cc8) form2_midp_time_pane_t1

0xc06f,	// (0x00056d25) form2_midp_gauge_slider_pane_t1

0xc081,	// (0x00056d37) form2_midp_gauge_slider_pane_t2

0xc093,	// (0x00056d49) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf0,	// (0x0005a7a6) form2_midp_gauge_slider_pane_t

0xc0a5,	// (0x00056d5b) form2_midp_slider_pane

0xc0b1,	// (0x00056d67) form2_midp_gauge_wait_pane_t1

0xc0bf,	// (0x00056d75) form2_midp_wait_pane_ParamLimits

0xc0bf,	// (0x00056d75) form2_midp_wait_pane

0x9e94,	// (0x00054b4a) list_single_2graphic_pane_cp4_ParamLimits

0x9e94,	// (0x00054b4a) list_single_2graphic_pane_cp4

0xc0ea,	// (0x00056da0) list_single_midp_graphic_pane_cp_ParamLimits

0xc0ea,	// (0x00056da0) list_single_midp_graphic_pane_cp

0x7841,	// (0x000524f7) list_highlight_pane_cp20

0xc119,	// (0x00056dcf) list_single_2graphic_pane_g1_cp4

0xc121,	// (0x00056dd7) list_single_2graphic_pane_g2_cp4

0xc129,	// (0x00056ddf) list_single_2graphic_pane_t1_cp4

0x7921,	// (0x000525d7) list_highlight_pane_cp21

0xc138,	// (0x00056dee) list_single_midp_graphic_pane_g4_cp

0xc147,	// (0x00056dfd) list_single_midp_graphic_pane_t1_cp

0xc15c,	// (0x00056e12) form2_mdip_string_pane_t1_ParamLimits

0xc15c,	// (0x00056e12) form2_mdip_string_pane_t1

0x7841,	// (0x000524f7) bg_wml_button_pane_cp2

0x7837,	// (0x000524ed) form2_midp_image_pane_g1

0x7d02,	// (0x000529b8) list_double_large_graphic_pane_g5_ParamLimits

0x7d02,	// (0x000529b8) list_double_large_graphic_pane_g5

0x8a71,	// (0x00053727) midp_form_pane_ParamLimits

0x7921,	// (0x000525d7) main_apps_wheel_pane_ParamLimits

0x5dfc,	// (0x00050ab2) popup_preview_window_ParamLimits

0x5dfc,	// (0x00050ab2) popup_preview_window

0x5fb7,	// (0x00050c6d) popup_touch_info_window_ParamLimits

0x5fb7,	// (0x00050c6d) popup_touch_info_window

0x5fd5,	// (0x00050c8b) popup_touch_menu_window_ParamLimits

0x5fd5,	// (0x00050c8b) popup_touch_menu_window

0x782d,	// (0x000524e3) bg_popup_sub_pane_cp6

0xc255,	// (0x00056f0b) list_touch_menu_pane

0xc25d,	// (0x00056f13) list_single_touch_menu_pane_ParamLimits

0xc25d,	// (0x00056f13) list_single_touch_menu_pane

0xc273,	// (0x00056f29) list_single_touch_menu_pane_t1

0x7921,	// (0x000525d7) bg_popup_sub_pane_cp7_ParamLimits

0x7921,	// (0x000525d7) bg_popup_sub_pane_cp7

0xc281,	// (0x00056f37) heading_sub_pane

0xc289,	// (0x00056f3f) list_touch_info_pane_ParamLimits

0xc289,	// (0x00056f3f) list_touch_info_pane

0xc298,	// (0x00056f4e) list_single_touch_info_pane_ParamLimits

0xc298,	// (0x00056f4e) list_single_touch_info_pane

0xc2aa,	// (0x00056f60) list_single_touch_info_pane_t1

0xc2b8,	// (0x00056f6e) list_single_touch_info_pane_t2

0x0001,

0xfafe,	// (0x0005a7b4) list_single_touch_info_pane_t

0x951f,	// (0x000541d5) bg_popup_heading_pane_cp

0xc2c6,	// (0x00056f7c) heading_sub_pane_t1

0x9ddb,	// (0x00054a91) bg_popup_preview_window_pane_cp_ParamLimits

0x9ddb,	// (0x00054a91) bg_popup_preview_window_pane_cp

0xc281,	// (0x00056f37) heading_preview_pane

0xc289,	// (0x00056f3f) list_preview_pane_ParamLimits

0xc289,	// (0x00056f3f) list_preview_pane

0xc2d4,	// (0x00056f8a) popup_preview_window_g1

0xc298,	// (0x00056f4e) list_single_preview_pane_ParamLimits

0xc298,	// (0x00056f4e) list_single_preview_pane

0xc2dc,	// (0x00056f92) list_single_preview_pane_g1

0xc2e4,	// (0x00056f9a) list_single_preview_pane_t1

0xc2aa,	// (0x00056f60) list_single_preview_pane_t2

0x0001,

0xfb03,	// (0x0005a7b9) list_single_preview_pane_t

0xc2f2,	// (0x00056fa8) bg_popup_heading_pane_cp2_ParamLimits

0xc2f2,	// (0x00056fa8) bg_popup_heading_pane_cp2

0xc308,	// (0x00056fbe) heading_preview_pane_g1

0xc310,	// (0x00056fc6) heading_preview_pane_t1_ParamLimits

0xc310,	// (0x00056fc6) heading_preview_pane_t1

0x7a0d,	// (0x000526c3) soft_indicator_pane_t1_ParamLimits

0x8800,	// (0x000534b6) scroll_pane_ParamLimits

0x8d15,	// (0x000539cb) scroll_sc2_left_pane

0x8d1e,	// (0x000539d4) scroll_sc2_right_pane

0x8d3d,	// (0x000539f3) scroll_bg_pane_g1_ParamLimits

0x8d52,	// (0x00053a08) scroll_bg_pane_g2_ParamLimits

0x8d6a,	// (0x00053a20) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0005a39e) scroll_bg_pane_g_ParamLimits

0x8d3d,	// (0x000539f3) scroll_handle_pane_g1_ParamLimits

0x8d8c,	// (0x00053a42) scroll_handle_pane_g2_ParamLimits

0x8d6a,	// (0x00053a20) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0005a3a5) scroll_handle_pane_g_ParamLimits

0x5a7d,	// (0x00050733) popup_choice_list_window_ParamLimits

0x5a7d,	// (0x00050733) popup_choice_list_window

0x9cb1,	// (0x00054967) choice_list_pane

0x9d33,	// (0x000549e9) cell_toolbar_pane_t1

0x9d5b,	// (0x00054a11) toolbar_button_pane_ParamLimits

0xae2e,	// (0x00055ae4) ai_gene_pane_1_t2_ParamLimits

0xae2e,	// (0x00055ae4) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x0005a5cd) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x0005a5cd) ai_gene_pane_1_t

0xc32d,	// (0x00056fe3) scroll_sc2_left_pane_g1

0xc32d,	// (0x00056fe3) scroll_sc2_right_pane_g1

0x985d,	// (0x00054513) bg_popup_sub_pane_cp10

0xc337,	// (0x00056fed) list_choice_list_pane

0xc350,	// (0x00057006) list_single_choice_list_pane_ParamLimits

0xc350,	// (0x00057006) list_single_choice_list_pane

0xc363,	// (0x00057019) list_single_choice_list_pane_g1

0x8a21,	// (0x000536d7) list_single_choice_list_pane_t1_ParamLimits

0x8a21,	// (0x000536d7) list_single_choice_list_pane_t1

0xc36b,	// (0x00057021) choice_list_pane_g1

0xc373,	// (0x00057029) choice_list_pane_t1

0x782d,	// (0x000524e3) input_focus_pane_cp11

0x8bf8,	// (0x000538ae) title_pane_stacon_g2_ParamLimits

0x8bf8,	// (0x000538ae) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0005a384) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0005a384) title_pane_stacon_g

0x951f,	// (0x000541d5) cursor_press_pane

0x5b29,	// (0x000507df) popup_fep_hwr_window_ParamLimits

0x5b29,	// (0x000507df) popup_fep_hwr_window

0x5ba3,	// (0x00050859) popup_fep_vkb_window_ParamLimits

0x5ba3,	// (0x00050859) popup_fep_vkb_window

0xc381,	// (0x00057037) cursor_press_pane_g1

0x0002,

0xfb2c,	// (0x0005a7e2) fep_vkb_side_pane_g_ParamLimits

0x6808,	// (0x000514be) fep_hwr_candidate_pane_ParamLimits

0x6808,	// (0x000514be) fep_hwr_candidate_pane

0x6832,	// (0x000514e8) fep_hwr_side_pane_ParamLimits

0x6832,	// (0x000514e8) fep_hwr_side_pane

0x6852,	// (0x00051508) fep_hwr_top_pane_ParamLimits

0x6852,	// (0x00051508) fep_hwr_top_pane

0x686a,	// (0x00051520) fep_hwr_write_pane_ParamLimits

0x686a,	// (0x00051520) fep_hwr_write_pane

0xfb2c,	// (0x0005a7e2) fep_vkb_side_pane_g

0xc389,	// (0x0005703f) fep_hwr_top_pane_g1

0xc39b,	// (0x00057051) fep_hwr_top_pane_g2

0x68a4,	// (0x0005155a) fep_hwr_top_pane_g3

0x0002,

0xfb08,	// (0x0005a7be) fep_hwr_top_pane_g

0x68b9,	// (0x0005156f) fep_hwr_top_text_pane

0x8f0c,	// (0x00053bc2) fep_hwr_top_text_pane_g1

0xc3d1,	// (0x00057087) fep_hwr_top_text_pane_t1

0x69af,	// (0x00051665) fep_hwr_candidate_pane_g1

0xc624,	// (0x000572da) fep_vkb_keypad_pane_g3_ParamLimits

0xc624,	// (0x000572da) fep_vkb_keypad_pane_g3

0xc64c,	// (0x00057302) fep_vkb_keypad_pane_g4_ParamLimits

0xc64c,	// (0x00057302) fep_vkb_keypad_pane_g4

0xc6bb,	// (0x00057371) fep_vkb_bottom_pane_g2_ParamLimits

0xc6bb,	// (0x00057371) fep_vkb_bottom_pane_g2

0x0001,

0xfb33,	// (0x0005a7e9) fep_vkb_bottom_pane_g_ParamLimits

0xfb33,	// (0x0005a7e9) fep_vkb_bottom_pane_g

0xc32d,	// (0x00056fe3) cell_vkb_side_pane_g2

0x0001,

0xfb3d,	// (0x0005a7f3) cell_vkb_side_pane_g

0xc746,	// (0x000573fc) cell_vkb_side_pane_t1

0xc754,	// (0x0005740a) cell_vkb_side_pane_t1_copy1

0xc32d,	// (0x00056fe3) bg_fep_vkb_candidate_pane_g2

0xc880,	// (0x00057536) cell_vkb_candidate_pane_ParamLimits

0xc3df,	// (0x00057095) aid_size_cell_vkb_ParamLimits

0xc3df,	// (0x00057095) aid_size_cell_vkb

0xc880,	// (0x00057536) cell_vkb_candidate_pane

0x69d6,	// (0x0005168c) bg_popup_fep_shadow_pane_g1

0xc46d,	// (0x00057123) fep_vkb_bottom_pane_ParamLimits

0xc46d,	// (0x00057123) fep_vkb_bottom_pane

0xc4a3,	// (0x00057159) fep_vkb_candidate_pane_ParamLimits

0xc4a3,	// (0x00057159) fep_vkb_candidate_pane

0xc4bf,	// (0x00057175) fep_vkb_keypad_pane_ParamLimits

0xc4bf,	// (0x00057175) fep_vkb_keypad_pane

0xc505,	// (0x000571bb) fep_vkb_side_pane_ParamLimits

0xc505,	// (0x000571bb) fep_vkb_side_pane

0xc541,	// (0x000571f7) fep_vkb_top_pane_ParamLimits

0xc541,	// (0x000571f7) fep_vkb_top_pane

0xc57d,	// (0x00057233) fep_vkb_top_pane_g1_ParamLimits

0xc57d,	// (0x00057233) fep_vkb_top_pane_g1

0xc58c,	// (0x00057242) fep_vkb_top_pane_g2_ParamLimits

0xc58c,	// (0x00057242) fep_vkb_top_pane_g2

0xc59b,	// (0x00057251) fep_vkb_top_pane_g3_ParamLimits

0xc59b,	// (0x00057251) fep_vkb_top_pane_g3

0x0003,

0xfb23,	// (0x0005a7d9) fep_vkb_top_pane_g_ParamLimits

0xfb23,	// (0x0005a7d9) fep_vkb_top_pane_g

0xc5b9,	// (0x0005726f) fep_vkb_top_text_pane_ParamLimits

0xc5b9,	// (0x0005726f) fep_vkb_top_text_pane

0xc5ca,	// (0x00057280) fep_vkb_side_pane_g1_ParamLimits

0xc5ca,	// (0x00057280) fep_vkb_side_pane_g1

0xc613,	// (0x000572c9) grid_vkb_side_pane_ParamLimits

0xc613,	// (0x000572c9) grid_vkb_side_pane

0x69de,	// (0x00051694) bg_popup_fep_shadow_pane_g2

0x69e7,	// (0x0005169d) bg_popup_fep_shadow_pane_g3

0x69ef,	// (0x000516a5) bg_popup_fep_shadow_pane_g4

0x69f8,	// (0x000516ae) bg_popup_fep_shadow_pane_g5

0x6a02,	// (0x000516b8) bg_popup_fep_shadow_pane_g6

0x6a0a,	// (0x000516c0) bg_popup_fep_shadow_pane_g7

0x8900,	// (0x000535b6) bg_popup_fep_shadow_pane_g8

0xc66a,	// (0x00057320) grid_vkb_keypad_number_pane_ParamLimits

0xc66a,	// (0x00057320) grid_vkb_keypad_number_pane

0xc67a,	// (0x00057330) grid_vkb_keypad_pane_ParamLimits

0xc67a,	// (0x00057330) grid_vkb_keypad_pane

0xc6a0,	// (0x00057356) fep_vkb_bottom_pane_g1_ParamLimits

0xc6a0,	// (0x00057356) fep_vkb_bottom_pane_g1

0xc6c9,	// (0x0005737f) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc6c9,	// (0x0005737f) grid_vkb_keypad_bottom_left_pane

0xc6de,	// (0x00057394) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc6de,	// (0x00057394) grid_vkb_keypad_bottom_right_pane

0xc6f3,	// (0x000573a9) fep_vkb_top_text_pane_g1

0xc70e,	// (0x000573c4) fep_vkb_top_text_pane_t1

0xc723,	// (0x000573d9) cell_vkb_side_pane_ParamLimits

0xc723,	// (0x000573d9) cell_vkb_side_pane

0xc32d,	// (0x00056fe3) cell_vkb_side_pane_g1

0xc762,	// (0x00057418) cell_vkb_keypad_pane_ParamLimits

0xc762,	// (0x00057418) cell_vkb_keypad_pane

0xc7d7,	// (0x0005748d) cell_vkb_keypad_pane_g1

0x0008,

0xfb50,	// (0x0005a806) bg_popup_fep_shadow_pane_g

0x6a1c,	// (0x000516d2) cell_hwr_side_pane_g1

0x6a1c,	// (0x000516d2) cell_hwr_side_pane_g2

0xc7e1,	// (0x00057497) cell_vkb_keypad_pane_t1

0xc7ef,	// (0x000574a5) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc7ef,	// (0x000574a5) cell_vkb_keypad_bottom_left_pane

0xc80c,	// (0x000574c2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc80c,	// (0x000574c2) cell_vkb_keypad_bottom_right_pane

0xc32d,	// (0x00056fe3) cell_vkb_keypad_bottom_left_pane_g1

0xc32d,	// (0x00056fe3) cell_vkb_keypad_bottom_right_pane_g1

0xc845,	// (0x000574fb) cell_vkb_keypad_number_pane_ParamLimits

0xc845,	// (0x000574fb) cell_vkb_keypad_number_pane

0xc864,	// (0x0005751a) cell_vkb_keypad_number_pane_g1

0xc86e,	// (0x00057524) cell_vkb_keypad_number_pane_g2

0xc877,	// (0x0005752d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb42,	// (0x0005a7f8) cell_vkb_keypad_number_pane_g

0xc7e1,	// (0x00057497) cell_vkb_keypad_number_pane_t1

0xc89b,	// (0x00057551) fep_vkb_candidate_pane_g1

0x0001,

0xfb63,	// (0x0005a819) cell_hwr_side_pane_g

0xc8b4,	// (0x0005756a) cell_hwr_side_pane_t1

0x6a26,	// (0x000516dc) cell_hwr_side_pane_t1_copy1

0x6a34,	// (0x000516ea) cell_hwr_candidate_pane_g1

0x6a63,	// (0x00051719) cell_hwr_candidate_pane_t1

0xc32d,	// (0x00056fe3) cell_vkb_candidate_pane_g2

0xc904,	// (0x000575ba) cell_vkb_candidate_pane_t1

0x67cf,	// (0x00051485) bg_popup_fep_shadow_pane_ParamLimits

0x67cf,	// (0x00051485) bg_popup_fep_shadow_pane

0x6884,	// (0x0005153a) bg_fep_hwr_top_pane_g4

0xc3ad,	// (0x00057063) bg_hwr_side_pane_g1_ParamLimits

0xc3ad,	// (0x00057063) bg_hwr_side_pane_g1

0x68f5,	// (0x000515ab) cell_hwr_side_pane_ParamLimits

0x68f5,	// (0x000515ab) cell_hwr_side_pane

0x6930,	// (0x000515e6) fep_hwr_write_pane_g1_ParamLimits

0x6930,	// (0x000515e6) fep_hwr_write_pane_g1

0x693d,	// (0x000515f3) fep_hwr_write_pane_g2_ParamLimits

0x693d,	// (0x000515f3) fep_hwr_write_pane_g2

0x694a,	// (0x00051600) fep_hwr_write_pane_g3_ParamLimits

0x694a,	// (0x00051600) fep_hwr_write_pane_g3

0x6958,	// (0x0005160e) fep_hwr_write_pane_g4_ParamLimits

0x6958,	// (0x0005160e) fep_hwr_write_pane_g4

0x0005,

0xfb0f,	// (0x0005a7c5) fep_hwr_write_pane_g_ParamLimits

0xfb0f,	// (0x0005a7c5) fep_hwr_write_pane_g

0x6884,	// (0x0005153a) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6884,	// (0x0005153a) bg_fep_hwr_candidate_pane_g2

0x696d,	// (0x00051623) cell_hwr_candidate_pane_ParamLimits

0x696d,	// (0x00051623) cell_hwr_candidate_pane

0x69af,	// (0x00051665) fep_hwr_candidate_pane_g1_ParamLimits

0xc40d,	// (0x000570c3) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc40d,	// (0x000570c3) bg_popup_fep_shadow_pane_cp2

0xc5ab,	// (0x00057261) fep_vkb_top_pane_g4_ParamLimits

0xc5ab,	// (0x00057261) fep_vkb_top_pane_g4

0xc5f1,	// (0x000572a7) fep_vkb_side_pane_g2_ParamLimits

0xc5f1,	// (0x000572a7) fep_vkb_side_pane_g2

0x50a6,	// (0x0004fd5c) list_setting_pane_t4_ParamLimits

0x50a6,	// (0x0004fd5c) list_setting_pane_t4

0x5140,	// (0x0004fdf6) list_setting_number_pane_t5_ParamLimits

0x5140,	// (0x0004fdf6) list_setting_number_pane_t5

0x8f53,	// (0x00053c09) list_double_heading_pane_cp2_ParamLimits

0x8f53,	// (0x00053c09) list_double_heading_pane_cp2

0x8834,	// (0x000534ea) list_double_heading_pane_g1_cp2_ParamLimits

0x8834,	// (0x000534ea) list_double_heading_pane_g1_cp2

0x88a7,	// (0x0005355d) list_double_heading_pane_g2_cp2_ParamLimits

0x88a7,	// (0x0005355d) list_double_heading_pane_g2_cp2

0xc912,	// (0x000575c8) list_double_heading_pane_t1_cp2_ParamLimits

0xc912,	// (0x000575c8) list_double_heading_pane_t1_cp2

0xc928,	// (0x000575de) list_double_heading_pane_t2_cp2_ParamLimits

0xc928,	// (0x000575de) list_double_heading_pane_t2_cp2

0x7815,	// (0x000524cb) aid_value_unit2

0x4b66,	// (0x0004f81c) popup_preview_fixed_window

0x7baa,	// (0x00052860) bg_popup_preview_window_pane_cp02

0xc93a,	// (0x000575f0) list_preview_fixed_pane

0xc980,	// (0x00057636) list_empty_pane_fp_ParamLimits

0xc980,	// (0x00057636) list_empty_pane_fp

0xc980,	// (0x00057636) list_single_cale_day_pane_fp_ParamLimits

0xc980,	// (0x00057636) list_single_cale_day_pane_fp

0xc980,	// (0x00057636) list_single_graphic_heading_pane_fp_ParamLimits

0xc980,	// (0x00057636) list_single_graphic_heading_pane_fp

0xc980,	// (0x00057636) list_single_graphic_pane_fp_ParamLimits

0xc980,	// (0x00057636) list_single_graphic_pane_fp

0xc980,	// (0x00057636) list_single_heading_pane_fp_ParamLimits

0xc980,	// (0x00057636) list_single_heading_pane_fp

0xc980,	// (0x00057636) list_single_pane_fp_ParamLimits

0xc980,	// (0x00057636) list_single_pane_fp

0xc995,	// (0x0005764b) list_single_pane_fp_g1_ParamLimits

0xc995,	// (0x0005764b) list_single_pane_fp_g1

0x8834,	// (0x000534ea) list_single_pane_fp_g2_ParamLimits

0x8834,	// (0x000534ea) list_single_pane_fp_g2

0x88a7,	// (0x0005355d) list_single_pane_fp_g3_ParamLimits

0x88a7,	// (0x0005355d) list_single_pane_fp_g3

0xc9a1,	// (0x00057657) list_single_pane_fp_g4_ParamLimits

0xc9a1,	// (0x00057657) list_single_pane_fp_g4

0x0003,

0xfb76,	// (0x0005a82c) list_single_pane_fp_g_ParamLimits

0xfb76,	// (0x0005a82c) list_single_pane_fp_g

0x8025,	// (0x00052cdb) list_single_pane_fp_t1_ParamLimits

0x8025,	// (0x00052cdb) list_single_pane_fp_t1

0x803c,	// (0x00052cf2) list_single_graphic_pane_fp_g1_ParamLimits

0x803c,	// (0x00052cf2) list_single_graphic_pane_fp_g1

0xc995,	// (0x0005764b) list_single_graphic_pane_fp_g2_ParamLimits

0xc995,	// (0x0005764b) list_single_graphic_pane_fp_g2

0x8834,	// (0x000534ea) list_single_graphic_pane_fp_g3_ParamLimits

0x8834,	// (0x000534ea) list_single_graphic_pane_fp_g3

0x88a7,	// (0x0005355d) list_single_graphic_pane_fp_g4_ParamLimits

0x88a7,	// (0x0005355d) list_single_graphic_pane_fp_g4

0xc9a1,	// (0x00057657) list_single_graphic_pane_fp_g5_ParamLimits

0xc9a1,	// (0x00057657) list_single_graphic_pane_fp_g5

0x0004,

0xfb7f,	// (0x0005a835) list_single_graphic_pane_fp_g_ParamLimits

0xfb7f,	// (0x0005a835) list_single_graphic_pane_fp_g

0x8048,	// (0x00052cfe) list_single_graphic_pane_fp_t1_ParamLimits

0x8048,	// (0x00052cfe) list_single_graphic_pane_fp_t1

0x803c,	// (0x00052cf2) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x803c,	// (0x00052cf2) list_single_graphic_heading_pane_fp_g1

0xc995,	// (0x0005764b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc995,	// (0x0005764b) list_single_graphic_heading_pane_fp_g2

0x8834,	// (0x000534ea) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8834,	// (0x000534ea) list_single_graphic_heading_pane_fp_g3

0x88a7,	// (0x0005355d) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x88a7,	// (0x0005355d) list_single_graphic_heading_pane_fp_g4

0xc9a1,	// (0x00057657) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc9a1,	// (0x00057657) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7f,	// (0x0005a835) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7f,	// (0x0005a835) list_single_graphic_heading_pane_fp_g

0x805e,	// (0x00052d14) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x805e,	// (0x00052d14) list_single_graphic_heading_pane_fp_t1

0x8074,	// (0x00052d2a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x8074,	// (0x00052d2a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x0005a840) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x0005a840) list_single_graphic_heading_pane_fp_t

0x8086,	// (0x00052d3c) list_single_cale_day_pane_fp_g1_ParamLimits

0x8086,	// (0x00052d3c) list_single_cale_day_pane_fp_g1

0xc9ad,	// (0x00057663) list_single_cale_day_pane_fp_g2_ParamLimits

0xc9ad,	// (0x00057663) list_single_cale_day_pane_fp_g2

0x80be,	// (0x00052d74) list_single_cale_day_pane_fp_g3_ParamLimits

0x80be,	// (0x00052d74) list_single_cale_day_pane_fp_g3

0x80e6,	// (0x00052d9c) list_single_cale_day_pane_fp_g4_ParamLimits

0x80e6,	// (0x00052d9c) list_single_cale_day_pane_fp_g4

0x810a,	// (0x00052dc0) list_single_cale_day_pane_fp_g5_ParamLimits

0x810a,	// (0x00052dc0) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8f,	// (0x0005a845) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8f,	// (0x0005a845) list_single_cale_day_pane_fp_g

0x812e,	// (0x00052de4) list_single_cale_day_pane_fp_t1_ParamLimits

0x812e,	// (0x00052de4) list_single_cale_day_pane_fp_t1

0x8154,	// (0x00052e0a) list_single_cale_day_pane_fp_t2_ParamLimits

0x8154,	// (0x00052e0a) list_single_cale_day_pane_fp_t2

0x816d,	// (0x00052e23) list_single_cale_day_pane_fp_t3_ParamLimits

0x816d,	// (0x00052e23) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9a,	// (0x0005a850) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9a,	// (0x0005a850) list_single_cale_day_pane_fp_t

0xc995,	// (0x0005764b) list_empty_pane_fp_g1_ParamLimits

0xc995,	// (0x0005764b) list_empty_pane_fp_g1

0x8186,	// (0x00052e3c) list_empty_pane_fp_t1

0x8194,	// (0x00052e4a) list_empty_pane_fp_t2

0x0001,

0xfba1,	// (0x0005a857) list_empty_pane_fp_t

0xc995,	// (0x0005764b) list_single_heading_pane_fp_g1_ParamLimits

0xc995,	// (0x0005764b) list_single_heading_pane_fp_g1

0x8834,	// (0x000534ea) list_single_heading_pane_fp_g2_ParamLimits

0x8834,	// (0x000534ea) list_single_heading_pane_fp_g2

0x88a7,	// (0x0005355d) list_single_heading_pane_fp_g3_ParamLimits

0x88a7,	// (0x0005355d) list_single_heading_pane_fp_g3

0x0002,

0xfba6,	// (0x0005a85c) list_single_heading_pane_fp_g_ParamLimits

0xfba6,	// (0x0005a85c) list_single_heading_pane_fp_g

0x81a2,	// (0x00052e58) list_single_heading_pane_fp_t1_ParamLimits

0x81a2,	// (0x00052e58) list_single_heading_pane_fp_t1

0x81b4,	// (0x00052e6a) list_single_heading_pane_fp_t2_ParamLimits

0x81b4,	// (0x00052e6a) list_single_heading_pane_fp_t2

0x0001,

0xfbad,	// (0x0005a863) list_single_heading_pane_fp_t_ParamLimits

0xfbad,	// (0x0005a863) list_single_heading_pane_fp_t

0x8a8f,	// (0x00053745) aid_size_cell_fast

0x7b1a,	// (0x000527d0) soft_indicator_pane_cp1_t1

0x8acc,	// (0x00053782) cell_app_pane_cp2_ParamLimits

0x8acc,	// (0x00053782) cell_app_pane_cp2

0x67f1,	// (0x000514a7) fep_hwr_candidate_drop_down_list_pane

0x69c9,	// (0x0005167f) fep_hwr_candidate_pane_g3_ParamLimits

0x69c9,	// (0x0005167f) fep_hwr_candidate_pane_g3

0x2e91,	// (0x0004db47) fep_hwr_candidate_pane_g4_ParamLimits

0x2e91,	// (0x0004db47) fep_hwr_candidate_pane_g4

0x0002,

0xfb1c,	// (0x0005a7d2) fep_hwr_candidate_pane_g_ParamLimits

0xfb1c,	// (0x0005a7d2) fep_hwr_candidate_pane_g

0xc492,	// (0x00057148) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc492,	// (0x00057148) fep_vkb_candidate_drop_down_list_pane

0xc8a3,	// (0x00057559) fep_vkb_candidate_pane_g3

0xc8ab,	// (0x00057561) fep_vkb_candidate_pane_g4

0x0002,

0xfb49,	// (0x0005a7ff) fep_vkb_candidate_pane_g

0x6a34,	// (0x000516ea) cell_hwr_candidate_pane_g1_ParamLimits

0x6a42,	// (0x000516f8) cell_hwr_candidate_pane_g3_ParamLimits

0x6a42,	// (0x000516f8) cell_hwr_candidate_pane_g3

0xd47e,	// (0x00058134) cell_hwr_candidate_pane_g4_ParamLimits

0xd47e,	// (0x00058134) cell_hwr_candidate_pane_g4

0x0002,

0xfb68,	// (0x0005a81e) cell_hwr_candidate_pane_g_ParamLimits

0xfb68,	// (0x0005a81e) cell_hwr_candidate_pane_g

0xc8c2,	// (0x00057578) cell_vkb_candidate_pane_g3_ParamLimits

0xc8c2,	// (0x00057578) cell_vkb_candidate_pane_g3

0xc8dd,	// (0x00057593) cell_vkb_candidate_pane_g4_ParamLimits

0xc8dd,	// (0x00057593) cell_vkb_candidate_pane_g4

0xc9b9,	// (0x0005766f) cell_app_pane_cp2_g1_ParamLimits

0xc9b9,	// (0x0005766f) cell_app_pane_cp2_g1

0xc9d7,	// (0x0005768d) cell_app_pane_cp2_g2_ParamLimits

0xc9d7,	// (0x0005768d) cell_app_pane_cp2_g2

0x0001,

0xfbb2,	// (0x0005a868) cell_app_pane_cp2_g_ParamLimits

0xfbb2,	// (0x0005a868) cell_app_pane_cp2_g

0xc9e3,	// (0x00057699) cell_app_pane_cp2_t1_ParamLimits

0xc9e3,	// (0x00057699) cell_app_pane_cp2_t1

0x8899,	// (0x0005354f) grid_highlight_pane_cp1_ParamLimits

0x8899,	// (0x0005354f) grid_highlight_pane_cp1

0x6a81,	// (0x00051737) cell_hwr_candidate_pane_cp1_ParamLimits

0x6a81,	// (0x00051737) cell_hwr_candidate_pane_cp1

0x6a34,	// (0x000516ea) fep_hwr_candidate_drop_down_list_pane_g1

0x6aa0,	// (0x00051756) fep_hwr_candidate_drop_down_list_pane_g2

0x6aad,	// (0x00051763) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb7,	// (0x0005a86d) fep_hwr_candidate_drop_down_list_pane_g

0x6aba,	// (0x00051770) fep_hwr_candidate_drop_down_list_scroll_pane

0x6ac3,	// (0x00051779) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6ac3,	// (0x00051779) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6ad0,	// (0x00051786) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6ad0,	// (0x00051786) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6add,	// (0x00051793) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6add,	// (0x00051793) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6aea,	// (0x000517a0) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6aea,	// (0x000517a0) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6b05,	// (0x000517bb) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6b05,	// (0x000517bb) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6b20,	// (0x000517d6) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6b20,	// (0x000517d6) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6b3b,	// (0x000517f1) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6b3b,	// (0x000517f1) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6b56,	// (0x0005180c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6b56,	// (0x0005180c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0005a874) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0005a874) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9f5,	// (0x000576ab) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9f5,	// (0x000576ab) cell_vkb_candidate_pane_cp1

0xc5ab,	// (0x00057261) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc5ab,	// (0x00057261) fep_vkb_candidate_drop_down_list_pane_g1

0xca15,	// (0x000576cb) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xca15,	// (0x000576cb) fep_vkb_candidate_drop_down_list_pane_g2

0xca22,	// (0x000576d8) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xca22,	// (0x000576d8) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcf,	// (0x0005a885) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcf,	// (0x0005a885) fep_vkb_candidate_drop_down_list_pane_g

0xca2f,	// (0x000576e5) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xca2f,	// (0x000576e5) fep_vkb_candidate_drop_down_list_scroll_pane

0xca3c,	// (0x000576f2) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xca3c,	// (0x000576f2) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca49,	// (0x000576ff) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca49,	// (0x000576ff) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca55,	// (0x0005770b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca55,	// (0x0005770b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xca61,	// (0x00057717) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xca61,	// (0x00057717) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xca82,	// (0x00057738) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xca82,	// (0x00057738) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xcaa3,	// (0x00057759) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xcaa3,	// (0x00057759) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xcac4,	// (0x0005777a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xcac4,	// (0x0005777a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xcae5,	// (0x0005779b) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xcae5,	// (0x0005779b) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd6,	// (0x0005a88c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd6,	// (0x0005a88c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x784b,	// (0x00052501) title_pane_g1_ParamLimits

0x7858,	// (0x0005250e) title_pane_g2_ParamLimits

0xf54e,	// (0x0005a204) title_pane_g_ParamLimits

0x8efc,	// (0x00053bb2) aid_call2_pane

0x8f04,	// (0x00053bba) aid_call_pane

0x8f0c,	// (0x00053bc2) popup_clock_analogue_window_g1

0x8f0c,	// (0x00053bc2) popup_clock_analogue_window_g2

0x55aa,	// (0x00050260) popup_clock_analogue_window_g3

0x55b3,	// (0x00050269) popup_clock_analogue_window_g4

0x7837,	// (0x000524ed) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0005a3b3) popup_clock_analogue_window_g

0x55bb,	// (0x00050271) popup_clock_analogue_window_t1

0x55c9,	// (0x0005027f) clock_digital_number_pane_ParamLimits

0x55c9,	// (0x0005027f) clock_digital_number_pane

0x55d5,	// (0x0005028b) clock_digital_number_pane_cp02_ParamLimits

0x55d5,	// (0x0005028b) clock_digital_number_pane_cp02

0x55e1,	// (0x00050297) clock_digital_number_pane_cp03_ParamLimits

0x55e1,	// (0x00050297) clock_digital_number_pane_cp03

0x55ed,	// (0x000502a3) clock_digital_number_pane_cp04_ParamLimits

0x55ed,	// (0x000502a3) clock_digital_number_pane_cp04

0x55f9,	// (0x000502af) clock_digital_separator_pane_ParamLimits

0x55f9,	// (0x000502af) clock_digital_separator_pane

0x5605,	// (0x000502bb) popup_clock_digital_window_t1_ParamLimits

0x5605,	// (0x000502bb) popup_clock_digital_window_t1

0x7837,	// (0x000524ed) clock_digital_number_pane_g1

0x7837,	// (0x000524ed) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0005a3be) clock_digital_number_pane_g

0x7837,	// (0x000524ed) clock_digital_separator_pane_g1

0x7837,	// (0x000524ed) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0005a3be) clock_digital_separator_pane_g

0x987f,	// (0x00054535) aid_fill_nsta_ParamLimits

0x99c5,	// (0x0005467b) indicator_nsta_pane_ParamLimits

0x9b3e,	// (0x000547f4) popup_clock_analogue_window

0x9b3e,	// (0x000547f4) popup_clock_digital_window

0x7921,	// (0x000525d7) grid_indicator_nsta_pane_ParamLimits

0xbd2a,	// (0x000569e0) clock_nsta_pane_t2

0x0001,

0xfa9c,	// (0x0005a752) clock_nsta_pane_t

0x556e,	// (0x00050224) aid_size_max_handle

0x5578,	// (0x0005022e) aid_size_min_handle

0x951f,	// (0x000541d5) editor_scroll_pane

0xcb00,	// (0x000577b6) ex_editor_pane

0x89fd,	// (0x000536b3) scroll_pane_cp13

0x882c,	// (0x000534e2) scroll_pane_cp14

0x8f3b,	// (0x00053bf1) scroll_pane_cp36

0x8f67,	// (0x00053c1d) list_single_graphic_hl_pane_cp2_ParamLimits

0x8f67,	// (0x00053c1d) list_single_graphic_hl_pane_cp2

0x6513,	// (0x000511c9) list_single_graphic_hl_pane_ParamLimits

0x6513,	// (0x000511c9) list_single_graphic_hl_pane

0x81ca,	// (0x00052e80) aid_size_min_hl_cp1

0xcb08,	// (0x000577be) list_highlight_pane_cp34_ParamLimits

0xcb08,	// (0x000577be) list_highlight_pane_cp34

0xcb19,	// (0x000577cf) list_single_graphic_hl_pane_g1_ParamLimits

0xcb19,	// (0x000577cf) list_single_graphic_hl_pane_g1

0x81d3,	// (0x00052e89) list_single_graphic_hl_pane_g2_ParamLimits

0x81d3,	// (0x00052e89) list_single_graphic_hl_pane_g2

0x81d3,	// (0x00052e89) list_single_graphic_hl_pane_g3_ParamLimits

0x81d3,	// (0x00052e89) list_single_graphic_hl_pane_g3

0x9490,	// (0x00054146) list_single_graphic_hl_pane_g4_ParamLimits

0x9490,	// (0x00054146) list_single_graphic_hl_pane_g4

0x81df,	// (0x00052e95) list_single_graphic_hl_pane_g5_ParamLimits

0x81df,	// (0x00052e95) list_single_graphic_hl_pane_g5

0x0004,

0xfbe7,	// (0x0005a89d) list_single_graphic_hl_pane_g_ParamLimits

0xfbe7,	// (0x0005a89d) list_single_graphic_hl_pane_g

0x81f3,	// (0x00052ea9) list_single_graphic_hl_pane_t1_ParamLimits

0x81f3,	// (0x00052ea9) list_single_graphic_hl_pane_t1

0xcb26,	// (0x000577dc) aid_size_min_hl_cp2

0xcb2f,	// (0x000577e5) list_highlight_pane_cp34_cp2_ParamLimits

0xcb2f,	// (0x000577e5) list_highlight_pane_cp34_cp2

0xcb19,	// (0x000577cf) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xcb19,	// (0x000577cf) list_single_graphic_hl_pane_g1_cp2

0xcb3c,	// (0x000577f2) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcb3c,	// (0x000577f2) list_single_graphic_hl_pane_g2_cp2

0xcb48,	// (0x000577fe) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcb48,	// (0x000577fe) list_single_graphic_hl_pane_g3_cp2

0xc8f8,	// (0x000575ae) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc8f8,	// (0x000575ae) list_single_graphic_hl_pane_g4_cp2

0xcb56,	// (0x0005780c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcb56,	// (0x0005780c) list_single_graphic_hl_pane_g5_cp2

0x5927,	// (0x000505dd) control_pane_g4_ParamLimits

0x5927,	// (0x000505dd) control_pane_g4

0x985d,	// (0x00054513) bg_popup_sub_pane_cp10_ParamLimits

0xc337,	// (0x00056fed) list_choice_list_pane_ParamLimits

0xc346,	// (0x00056ffc) scroll_pane_cp23

0x7baa,	// (0x00052860) bg_popup_preview_window_pane_cp02_ParamLimits

0xc93a,	// (0x000575f0) list_preview_fixed_pane_ParamLimits

0xc950,	// (0x00057606) list_preview_fixed_pane_cp_ParamLimits

0xc950,	// (0x00057606) list_preview_fixed_pane_cp

0xc95c,	// (0x00057612) popup_preview_fixed_window_g1_ParamLimits

0xc95c,	// (0x00057612) popup_preview_fixed_window_g1

0xc968,	// (0x0005761e) popup_preview_fixed_window_g2_ParamLimits

0xc968,	// (0x0005761e) popup_preview_fixed_window_g2

0x0002,

0xfb6f,	// (0x0005a825) popup_preview_fixed_window_g_ParamLimits

0xfb6f,	// (0x0005a825) popup_preview_fixed_window_g

0x54e2,	// (0x00050198) aid_navi_side_left_pane_ParamLimits

0x54f7,	// (0x000501ad) aid_navi_side_right_pane_ParamLimits

0x550f,	// (0x000501c5) navi_icon_pane_stacon_ParamLimits

0x5523,	// (0x000501d9) navi_navi_pane_stacon_ParamLimits

0x550f,	// (0x000501c5) navi_text_pane_stacon_ParamLimits

0x4a27,	// (0x0004f6dd) main_text_info_pane

0xcb80,	// (0x00057836) listscroll_text_info_pane

0xcb88,	// (0x0005783e) list_text_info_pane_ParamLimits

0xcb88,	// (0x0005783e) list_text_info_pane

0xcb97,	// (0x0005784d) scroll_pane_cp24_ParamLimits

0xcb97,	// (0x0005784d) scroll_pane_cp24

0xcbb5,	// (0x0005786b) list_text_info_pane_t1_ParamLimits

0xcbb5,	// (0x0005786b) list_text_info_pane_t1

0x5a9b,	// (0x00050751) popup_fast_swap2_window_ParamLimits

0x5a9b,	// (0x00050751) popup_fast_swap2_window

0xcbe6,	// (0x0005789c) aid_size_cell_fast2

0x782d,	// (0x000524e3) bg_popup_window_pane_cp17

0xa1c5,	// (0x00054e7b) heading_pane_cp2

0x84f6,	// (0x000531ac) listscroll_fast2_pane

0xcbf0,	// (0x000578a6) grid_fast2_pane

0xcbfa,	// (0x000578b0) listscroll_fast2_pane_g1

0xcc02,	// (0x000578b8) listscroll_fast2_pane_g2

0x0001,

0xfbf2,	// (0x0005a8a8) listscroll_fast2_pane_g

0x89fd,	// (0x000536b3) scroll_pane_cp26

0xcc0c,	// (0x000578c2) cell_fast2_pane_ParamLimits

0xcc0c,	// (0x000578c2) cell_fast2_pane

0xcc21,	// (0x000578d7) cell_fast2_pane_g1

0xcc2a,	// (0x000578e0) cell_fast2_pane_g2

0xcc33,	// (0x000578e9) cell_fast2_pane_g3

0x0002,

0xfbf7,	// (0x0005a8ad) cell_fast2_pane_g

0x85e9,	// (0x0005329f) grid_highlight_pane_cp9

0x5a59,	// (0x0005070f) main_eswt_pane_ParamLimits

0x5a59,	// (0x0005070f) main_eswt_pane

0xcbac,	// (0x00057862) list_single_text_info_pane

0xcc3b,	// (0x000578f1) eswt_ctrl_button_pane

0xcc3b,	// (0x000578f1) eswt_ctrl_canvas_pane

0xcc43,	// (0x000578f9) eswt_ctrl_combo_pane

0xcc3b,	// (0x000578f1) eswt_ctrl_default_pane

0xcc3b,	// (0x000578f1) eswt_ctrl_label_pane

0xcc4b,	// (0x00057901) eswt_ctrl_wait_pane

0xcc53,	// (0x00057909) eswt_shell_pane

0x782d,	// (0x000524e3) listscroll_eswt_app_pane

0xcc73,	// (0x00057929) popup_eswt_tasktip_window_ParamLimits

0xcc73,	// (0x00057929) popup_eswt_tasktip_window

0x9ddb,	// (0x00054a91) bg_popup_window_pane_cp18

0xcc84,	// (0x0005793a) eswt_control_pane_g1_ParamLimits

0xcc84,	// (0x0005793a) eswt_control_pane_g1

0xcc91,	// (0x00057947) eswt_control_pane_g2_ParamLimits

0xcc91,	// (0x00057947) eswt_control_pane_g2

0xcc9e,	// (0x00057954) eswt_control_pane_g3_ParamLimits

0xcc9e,	// (0x00057954) eswt_control_pane_g3

0xccab,	// (0x00057961) eswt_control_pane_g4_ParamLimits

0xccab,	// (0x00057961) eswt_control_pane_g4

0x0003,

0xfbfe,	// (0x0005a8b4) eswt_control_pane_g_ParamLimits

0xfbfe,	// (0x0005a8b4) eswt_control_pane_g

0x8899,	// (0x0005354f) bg_button_pane_ParamLimits

0x8899,	// (0x0005354f) bg_button_pane

0x85fe,	// (0x000532b4) common_borders_pane_copy2_ParamLimits

0x85fe,	// (0x000532b4) common_borders_pane_copy2

0xccb8,	// (0x0005796e) control_button_pane_g1_ParamLimits

0xccb8,	// (0x0005796e) control_button_pane_g1

0xccc4,	// (0x0005797a) control_button_pane_g2_ParamLimits

0xccc4,	// (0x0005797a) control_button_pane_g2

0xccd0,	// (0x00057986) control_button_pane_g3_ParamLimits

0xccd0,	// (0x00057986) control_button_pane_g3

0x0002,

0xfc07,	// (0x0005a8bd) control_button_pane_g_ParamLimits

0xfc07,	// (0x0005a8bd) control_button_pane_g

0xcce4,	// (0x0005799a) control_button_pane_t1

0xccf2,	// (0x000579a8) control_button_pane_t2

0x0001,

0xfc0e,	// (0x0005a8c4) control_button_pane_t

0x9d67,	// (0x00054a1d) bg_button_pane_g1

0x9d77,	// (0x00054a2d) bg_button_pane_g2

0x9d6f,	// (0x00054a25) bg_button_pane_g3

0x9d87,	// (0x00054a3d) bg_button_pane_g4

0x9d7f,	// (0x00054a35) bg_button_pane_g5

0x9d8f,	// (0x00054a45) bg_button_pane_g6

0x9d97,	// (0x00054a4d) bg_button_pane_g7

0x9da7,	// (0x00054a5d) bg_button_pane_g8

0x9d9f,	// (0x00054a55) bg_button_pane_g9

0x0008,

0xf86b,	// (0x0005a521) bg_button_pane_g

0xc2f2,	// (0x00056fa8) common_borders_pane_ParamLimits

0xc2f2,	// (0x00056fa8) common_borders_pane

0xcc84,	// (0x0005793a) eswt_control_pane_g1_copy1_ParamLimits

0xcc84,	// (0x0005793a) eswt_control_pane_g1_copy1

0xcc91,	// (0x00057947) eswt_control_pane_g2_copy1_ParamLimits

0xcc91,	// (0x00057947) eswt_control_pane_g2_copy1

0xcc9e,	// (0x00057954) eswt_control_pane_g3_copy1_ParamLimits

0xcc9e,	// (0x00057954) eswt_control_pane_g3_copy1

0xccab,	// (0x00057961) eswt_control_pane_g4_copy1_ParamLimits

0xccab,	// (0x00057961) eswt_control_pane_g4_copy1

0xc32d,	// (0x00056fe3) bg_eswt_ctrl_canvas_pane_g1

0xc2f2,	// (0x00056fa8) common_borders_pane_cp2_ParamLimits

0xc2f2,	// (0x00056fa8) common_borders_pane_cp2

0xc2f2,	// (0x00056fa8) common_borders_pane_cp3_ParamLimits

0xc2f2,	// (0x00056fa8) common_borders_pane_cp3

0xcd00,	// (0x000579b6) separator_horizontal_pane

0xcd08,	// (0x000579be) separator_vertical_pane

0xcc84,	// (0x0005793a) eswt_control_pane_g1_copy2_ParamLimits

0xcc84,	// (0x0005793a) eswt_control_pane_g1_copy2

0xcc91,	// (0x00057947) eswt_control_pane_g2_copy2_ParamLimits

0xcc91,	// (0x00057947) eswt_control_pane_g2_copy2

0xcc9e,	// (0x00057954) eswt_control_pane_g3_copy2_ParamLimits

0xcc9e,	// (0x00057954) eswt_control_pane_g3_copy2

0xccab,	// (0x00057961) eswt_control_pane_g4_copy2_ParamLimits

0xccab,	// (0x00057961) eswt_control_pane_g4_copy2

0x782d,	// (0x000524e3) common_borders_pane_cp4

0xcd11,	// (0x000579c7) separator_horizontal_pane_g1

0xcd1a,	// (0x000579d0) separator_horizontal_pane_g2

0xcd23,	// (0x000579d9) separator_horizontal_pane_g3

0x0002,

0xfc13,	// (0x0005a8c9) separator_horizontal_pane_g

0xcc84,	// (0x0005793a) eswt_control_pane_g1_copy3_ParamLimits

0xcc84,	// (0x0005793a) eswt_control_pane_g1_copy3

0xcc91,	// (0x00057947) eswt_control_pane_g2_copy3_ParamLimits

0xcc91,	// (0x00057947) eswt_control_pane_g2_copy3

0xcc9e,	// (0x00057954) eswt_control_pane_g3_copy3_ParamLimits

0xcc9e,	// (0x00057954) eswt_control_pane_g3_copy3

0xccab,	// (0x00057961) eswt_control_pane_g4_copy3_ParamLimits

0xccab,	// (0x00057961) eswt_control_pane_g4_copy3

0x782d,	// (0x000524e3) common_borders_pane_cp5

0xcd2c,	// (0x000579e2) separator_vertical_pane_g1

0xcd35,	// (0x000579eb) separator_vertical_pane_g2

0xcd3e,	// (0x000579f4) separator_vertical_pane_g3

0x0002,

0xfc1a,	// (0x0005a8d0) separator_vertical_pane_g

0xcc84,	// (0x0005793a) eswt_control_pane_g1_copy4_ParamLimits

0xcc84,	// (0x0005793a) eswt_control_pane_g1_copy4

0xcc91,	// (0x00057947) eswt_control_pane_g2_copy4_ParamLimits

0xcc91,	// (0x00057947) eswt_control_pane_g2_copy4

0xcc9e,	// (0x00057954) eswt_control_pane_g3_copy4_ParamLimits

0xcc9e,	// (0x00057954) eswt_control_pane_g3_copy4

0xccab,	// (0x00057961) eswt_control_pane_g4_copy4_ParamLimits

0xccab,	// (0x00057961) eswt_control_pane_g4_copy4

0xcd47,	// (0x000579fd) eswt_ctrl_combo_button_pane

0xcd4f,	// (0x00057a05) eswt_ctrl_input_pane

0xcd57,	// (0x00057a0d) popup_choice_list_window_cp70

0xcd5f,	// (0x00057a15) eswt_ctrl_input_pane_t1

0x782d,	// (0x000524e3) input_focus_pane_cp70

0xc2f2,	// (0x00056fa8) bg_button_pane_cp70_ParamLimits

0xc2f2,	// (0x00056fa8) bg_button_pane_cp70

0xcd6d,	// (0x00057a23) eswt_ctrl_combo_button_pane_g1

0xcd75,	// (0x00057a2b) wait_bar_pane_cp70

0x9ddb,	// (0x00054a91) bg_popup_window_pane_cp70_ParamLimits

0x9ddb,	// (0x00054a91) bg_popup_window_pane_cp70

0xcd7d,	// (0x00057a33) popup_eswt_tasktip_window_t1

0xcd93,	// (0x00057a49) wait_bar_pane_cp71_ParamLimits

0xcd93,	// (0x00057a49) wait_bar_pane_cp71

0xcd9f,	// (0x00057a55) grid_eswt_app_pane

0x8d15,	// (0x000539cb) scroll_pane_cp70

0xcda8,	// (0x00057a5e) cell_eswt_app_pane_ParamLimits

0xcda8,	// (0x00057a5e) cell_eswt_app_pane

0xcdd8,	// (0x00057a8e) cell_eswt_app_pane_g1_ParamLimits

0xcdd8,	// (0x00057a8e) cell_eswt_app_pane_g1

0xce07,	// (0x00057abd) cell_eswt_app_pane_g2_ParamLimits

0xce07,	// (0x00057abd) cell_eswt_app_pane_g2

0x0001,

0xfc21,	// (0x0005a8d7) cell_eswt_app_pane_g_ParamLimits

0xfc21,	// (0x0005a8d7) cell_eswt_app_pane_g

0xce30,	// (0x00057ae6) cell_eswt_app_pane_t1_ParamLimits

0xce30,	// (0x00057ae6) cell_eswt_app_pane_t1

0xce62,	// (0x00057b18) grid_highlight_pane_cp70_ParamLimits

0xce62,	// (0x00057b18) grid_highlight_pane_cp70

0x93f4,	// (0x000540aa) set_content_pane_g1

0x97be,	// (0x00054474) status_small_volume_pane

0x6b71,	// (0x00051827) status_small_volume_pane_g1

0x6b79,	// (0x0005182f) volume_small2_pane

0x6b82,	// (0x00051838) volume_small2_pane_g1

0x6b8b,	// (0x00051841) volume_small2_pane_g2

0x6b94,	// (0x0005184a) volume_small2_pane_g3

0x6b9d,	// (0x00051853) volume_small2_pane_g4

0x6ba6,	// (0x0005185c) volume_small2_pane_g5

0x6baf,	// (0x00051865) volume_small2_pane_g6

0x6bb8,	// (0x0005186e) volume_small2_pane_g7

0x6bc1,	// (0x00051877) volume_small2_pane_g8

0x6bca,	// (0x00051880) volume_small2_pane_g9

0x6bd3,	// (0x00051889) volume_small2_pane_g10

0x0009,

0xfc26,	// (0x0005a8dc) volume_small2_pane_g

0xc6f3,	// (0x000573a9) fep_vkb_top_text_pane_g1_ParamLimits

0xc70e,	// (0x000573c4) fep_vkb_top_text_pane_t1_ParamLimits

0xc974,	// (0x0005762a) popup_preview_fixed_window_g3_ParamLimits

0xc974,	// (0x0005762a) popup_preview_fixed_window_g3

0x5f4a,	// (0x00050c00) popup_toolbar_trans_pane

0xb136,	// (0x00055dec) aid_height_set_list_ParamLimits

0xb147,	// (0x00055dfd) aid_size_parent_ParamLimits

0x985d,	// (0x00054513) list_highlight_pane_cp2_ParamLimits

0x93f4,	// (0x000540aa) set_content_pane_g1_ParamLimits

0x652e,	// (0x000511e4) list_single_image_pane_ParamLimits

0x652e,	// (0x000511e4) list_single_image_pane

0xce6e,	// (0x00057b24) aid_size_cell_image_ParamLimits

0xce6e,	// (0x00057b24) aid_size_cell_image

0xce7b,	// (0x00057b31) grid_single_image_pane_ParamLimits

0xce7b,	// (0x00057b31) grid_single_image_pane

0xa603,	// (0x000552b9) list_single_image_pane_g1_ParamLimits

0xa603,	// (0x000552b9) list_single_image_pane_g1

0xce87,	// (0x00057b3d) list_single_image_pane_g2_ParamLimits

0xce87,	// (0x00057b3d) list_single_image_pane_g2

0x0001,

0xfc3b,	// (0x0005a8f1) list_single_image_pane_g_ParamLimits

0xfc3b,	// (0x0005a8f1) list_single_image_pane_g

0xce9b,	// (0x00057b51) list_single_image_pane_t1_ParamLimits

0xce9b,	// (0x00057b51) list_single_image_pane_t1

0xceb1,	// (0x00057b67) cell_image_list_pane_ParamLimits

0xceb1,	// (0x00057b67) cell_image_list_pane

0xcec5,	// (0x00057b7b) cell_image_list_pane_g1

0xcece,	// (0x00057b84) cell_image_list_pane_g2

0x0001,

0xfc40,	// (0x0005a8f6) cell_image_list_pane_g

0xced7,	// (0x00057b8d) aid_size_cell_tb_trans_pane

0x8899,	// (0x0005354f) bg_tb_trans_pane

0xcee9,	// (0x00057b9f) grid_tb_trans_pane

0x9d67,	// (0x00054a1d) bg_tb_trans_pane_g1

0x9d77,	// (0x00054a2d) bg_tb_trans_pane_g2

0x9d6f,	// (0x00054a25) bg_tb_trans_pane_g3

0x9d87,	// (0x00054a3d) bg_tb_trans_pane_g4

0x9d7f,	// (0x00054a35) bg_tb_trans_pane_g5

0x9da7,	// (0x00054a5d) bg_tb_trans_pane_g6

0x9d9f,	// (0x00054a55) bg_tb_trans_pane_g7

0x9d8f,	// (0x00054a45) bg_tb_trans_pane_g8

0x9d97,	// (0x00054a4d) bg_tb_trans_pane_g9

0x0008,

0xfc45,	// (0x0005a8fb) bg_tb_trans_pane_g

0xcefd,	// (0x00057bb3) cell_toolbar_trans_pane_ParamLimits

0xcefd,	// (0x00057bb3) cell_toolbar_trans_pane

0xc32d,	// (0x00056fe3) cell_toolbar_trans_pane_g1

0xbef7,	// (0x00056bad) list_form2_midp_pane_t1

0xbf05,	// (0x00056bbb) list_form2_midp_pane_t2

0x0001,

0xfae2,	// (0x0005a798) list_form2_midp_pane_t

0xbf13,	// (0x00056bc9) scroll_pane_cp51_ParamLimits

0xc0cf,	// (0x00056d85) form2_midp_wait_pane_g1

0xc0d8,	// (0x00056d8e) form2_midp_wait_pane_g2

0xc0e1,	// (0x00056d97) form2_midp_wait_pane_g3

0x0002,

0xfaf7,	// (0x0005a7ad) form2_midp_wait_pane_g

0x7921,	// (0x000525d7) list_highlight_pane_cp21_ParamLimits

0xc138,	// (0x00056dee) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc147,	// (0x00056dfd) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x7d92,	// (0x00052a48) list_single_2graphic_im_pane_ParamLimits

0x7d92,	// (0x00052a48) list_single_2graphic_im_pane

0xcf23,	// (0x00057bd9) list_single_2graphic_im_pane_g1_ParamLimits

0xcf23,	// (0x00057bd9) list_single_2graphic_im_pane_g1

0xcf34,	// (0x00057bea) list_single_2graphic_im_pane_g2_ParamLimits

0xcf34,	// (0x00057bea) list_single_2graphic_im_pane_g2

0xcf40,	// (0x00057bf6) list_single_2graphic_im_pane_g3_ParamLimits

0xcf40,	// (0x00057bf6) list_single_2graphic_im_pane_g3

0x0003,

0xfc58,	// (0x0005a90e) list_single_2graphic_im_pane_g_ParamLimits

0xfc58,	// (0x0005a90e) list_single_2graphic_im_pane_g

0xcf60,	// (0x00057c16) list_single_2graphic_im_pane_t1_ParamLimits

0xcf60,	// (0x00057c16) list_single_2graphic_im_pane_t1

0xc980,	// (0x00057636) list_single_graphic_2heading_pane_fp_ParamLimits

0xc980,	// (0x00057636) list_single_graphic_2heading_pane_fp

0x803c,	// (0x00052cf2) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x803c,	// (0x00052cf2) list_single_graphic_2heading_pane_fp_g1

0xc995,	// (0x0005764b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc995,	// (0x0005764b) list_single_graphic_2heading_pane_fp_g2

0x8834,	// (0x000534ea) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8834,	// (0x000534ea) list_single_graphic_2heading_pane_fp_g3

0x88a7,	// (0x0005355d) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x88a7,	// (0x0005355d) list_single_graphic_2heading_pane_fp_g4

0xc9a1,	// (0x00057657) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc9a1,	// (0x00057657) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7f,	// (0x0005a835) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7f,	// (0x0005a835) list_single_graphic_2heading_pane_fp_g

0x8209,	// (0x00052ebf) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x8209,	// (0x00052ebf) list_single_graphic_2heading_pane_fp_t1

0x8074,	// (0x00052d2a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x8074,	// (0x00052d2a) list_single_graphic_2heading_pane_fp_t2

0x821f,	// (0x00052ed5) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x821f,	// (0x00052ed5) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc61,	// (0x0005a917) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc61,	// (0x0005a917) list_single_graphic_2heading_pane_fp_t

0xc3b9,	// (0x0005706f) fep_hwr_write_pane_g5_ParamLimits

0xc3b9,	// (0x0005706f) fep_hwr_write_pane_g5

0xc3c5,	// (0x0005707b) fep_hwr_write_pane_g6_ParamLimits

0xc3c5,	// (0x0005707b) fep_hwr_write_pane_g6

0xcc53,	// (0x00057909) eswt_shell_pane_ParamLimits

0x9ddb,	// (0x00054a91) bg_popup_window_pane_cp18_ParamLimits

0xb08f,	// (0x00055d45) heading_pane_cp70

0xcd7d,	// (0x00057a33) popup_eswt_tasktip_window_t1_ParamLimits

0x98d4,	// (0x0005458a) aid_touch_tab_arrow_left

0x98e3,	// (0x00054599) aid_touch_tab_arrow_right

0x7869,	// (0x0005251f) title_pane_g3_ParamLimits

0x7869,	// (0x0005251f) title_pane_g3

0x8858,	// (0x0005350e) set_value_pane_g1

0x5f4a,	// (0x00050c00) popup_toolbar_trans_pane_ParamLimits

0xced7,	// (0x00057b8d) aid_size_cell_tb_trans_pane_ParamLimits

0x8899,	// (0x0005354f) bg_tb_trans_pane_ParamLimits

0xcee9,	// (0x00057b9f) grid_tb_trans_pane_ParamLimits

0x7baa,	// (0x00052860) cont_note_pane_ParamLimits

0x7baa,	// (0x00052860) cont_note_pane

0x85fe,	// (0x000532b4) cont_snote2_single_text_pane_ParamLimits

0x85fe,	// (0x000532b4) cont_snote2_single_text_pane

0x85fe,	// (0x000532b4) cont_snote2_single_graphic_pane_ParamLimits

0x85fe,	// (0x000532b4) cont_snote2_single_graphic_pane

0xa3e0,	// (0x00055096) cont_note_wait_pane_ParamLimits

0xa3e0,	// (0x00055096) cont_note_wait_pane

0xa3e0,	// (0x00055096) cont_note_image_pane_ParamLimits

0xa3e0,	// (0x00055096) cont_note_image_pane

0xcf91,	// (0x00057c47) popup_note2_window_g1_ParamLimits

0xcf91,	// (0x00057c47) popup_note2_window_g1

0xcfc2,	// (0x00057c78) popup_note2_window_t1_ParamLimits

0xcfc2,	// (0x00057c78) popup_note2_window_t1

0xd007,	// (0x00057cbd) popup_note2_window_t2_ParamLimits

0xd007,	// (0x00057cbd) popup_note2_window_t2

0xd04c,	// (0x00057d02) popup_note2_window_t3_ParamLimits

0xd04c,	// (0x00057d02) popup_note2_window_t3

0xd091,	// (0x00057d47) popup_note2_window_t4_ParamLimits

0xd091,	// (0x00057d47) popup_note2_window_t4

0x7c2e,	// (0x000528e4) popup_note2_window_t5_ParamLimits

0x7c2e,	// (0x000528e4) popup_note2_window_t5

0x0004,

0xfc6d,	// (0x0005a923) popup_note2_window_t_ParamLimits

0xfc6d,	// (0x0005a923) popup_note2_window_t

0xd0c0,	// (0x00057d76) popup_note2_image_window_g1_ParamLimits

0xd0c0,	// (0x00057d76) popup_note2_image_window_g1

0xd0cc,	// (0x00057d82) popup_note2_image_window_g2_ParamLimits

0xd0cc,	// (0x00057d82) popup_note2_image_window_g2

0x0001,

0xfc78,	// (0x0005a92e) popup_note2_image_window_g_ParamLimits

0xfc78,	// (0x0005a92e) popup_note2_image_window_g

0xd0de,	// (0x00057d94) popup_note2_image_window_t1_ParamLimits

0xd0de,	// (0x00057d94) popup_note2_image_window_t1

0xd0f6,	// (0x00057dac) popup_note2_image_window_t2_ParamLimits

0xd0f6,	// (0x00057dac) popup_note2_image_window_t2

0xd10e,	// (0x00057dc4) popup_note2_image_window_t3_ParamLimits

0xd10e,	// (0x00057dc4) popup_note2_image_window_t3

0x0002,

0xfc7d,	// (0x0005a933) popup_note2_image_window_t_ParamLimits

0xfc7d,	// (0x0005a933) popup_note2_image_window_t

0xa3ee,	// (0x000550a4) popup_note2_wait_window_g1_ParamLimits

0xa3ee,	// (0x000550a4) popup_note2_wait_window_g1

0xd12a,	// (0x00057de0) popup_note2_wait_window_g2_ParamLimits

0xd12a,	// (0x00057de0) popup_note2_wait_window_g2

0xa406,	// (0x000550bc) popup_note2_wait_window_g3_ParamLimits

0xa406,	// (0x000550bc) popup_note2_wait_window_g3

0x0002,

0xfc84,	// (0x0005a93a) popup_note2_wait_window_g_ParamLimits

0xfc84,	// (0x0005a93a) popup_note2_wait_window_g

0xd136,	// (0x00057dec) popup_note2_wait_window_t1_ParamLimits

0xd136,	// (0x00057dec) popup_note2_wait_window_t1

0xd154,	// (0x00057e0a) popup_note2_wait_window_t2_ParamLimits

0xd154,	// (0x00057e0a) popup_note2_wait_window_t2

0xd172,	// (0x00057e28) popup_note2_wait_window_t3_ParamLimits

0xd172,	// (0x00057e28) popup_note2_wait_window_t3

0xd184,	// (0x00057e3a) popup_note2_wait_window_t4_ParamLimits

0xd184,	// (0x00057e3a) popup_note2_wait_window_t4

0x0003,

0xfc8b,	// (0x0005a941) popup_note2_wait_window_t_ParamLimits

0xfc8b,	// (0x0005a941) popup_note2_wait_window_t

0xd196,	// (0x00057e4c) wait_bar2_pane_ParamLimits

0xd196,	// (0x00057e4c) wait_bar2_pane

0xd1ae,	// (0x00057e64) popup_snote2_single_text_window_g1_ParamLimits

0xd1ae,	// (0x00057e64) popup_snote2_single_text_window_g1

0xd1d6,	// (0x00057e8c) popup_snote2_single_text_window_t1_ParamLimits

0xd1d6,	// (0x00057e8c) popup_snote2_single_text_window_t1

0xd222,	// (0x00057ed8) popup_snote2_single_text_window_t2_ParamLimits

0xd222,	// (0x00057ed8) popup_snote2_single_text_window_t2

0xd26e,	// (0x00057f24) popup_snote2_single_text_window_t3_ParamLimits

0xd26e,	// (0x00057f24) popup_snote2_single_text_window_t3

0xd2af,	// (0x00057f65) popup_snote2_single_text_window_t4_ParamLimits

0xd2af,	// (0x00057f65) popup_snote2_single_text_window_t4

0xd2e5,	// (0x00057f9b) popup_snote2_single_text_window_t5_ParamLimits

0xd2e5,	// (0x00057f9b) popup_snote2_single_text_window_t5

0x0004,

0xfc94,	// (0x0005a94a) popup_snote2_single_text_window_t_ParamLimits

0xfc94,	// (0x0005a94a) popup_snote2_single_text_window_t

0xd310,	// (0x00057fc6) popup_snote2_single_graphic_window_g1_ParamLimits

0xd310,	// (0x00057fc6) popup_snote2_single_graphic_window_g1

0xd338,	// (0x00057fee) popup_snote2_single_graphic_window_g2_ParamLimits

0xd338,	// (0x00057fee) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9f,	// (0x0005a955) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9f,	// (0x0005a955) popup_snote2_single_graphic_window_g

0xd360,	// (0x00058016) popup_snote2_single_graphic_window_t1_ParamLimits

0xd360,	// (0x00058016) popup_snote2_single_graphic_window_t1

0xd3ac,	// (0x00058062) popup_snote2_single_graphic_window_t2_ParamLimits

0xd3ac,	// (0x00058062) popup_snote2_single_graphic_window_t2

0xd26e,	// (0x00057f24) popup_snote2_single_graphic_window_t3_ParamLimits

0xd26e,	// (0x00057f24) popup_snote2_single_graphic_window_t3

0xd2af,	// (0x00057f65) popup_snote2_single_graphic_window_t4_ParamLimits

0xd2af,	// (0x00057f65) popup_snote2_single_graphic_window_t4

0xd2e5,	// (0x00057f9b) popup_snote2_single_graphic_window_t5_ParamLimits

0xd2e5,	// (0x00057f9b) popup_snote2_single_graphic_window_t5

0x0004,

0xfca4,	// (0x0005a95a) popup_snote2_single_graphic_window_t_ParamLimits

0xfca4,	// (0x0005a95a) popup_snote2_single_graphic_window_t

0xbdd4,	// (0x00056a8a) clock_nsta_pane_cp2_t1

0xbdd4,	// (0x00056a8a) clock_nsta_pane_cp2_t2

0x0001,

0xfab8,	// (0x0005a76e) clock_nsta_pane_cp2_t

0x5260,	// (0x0004ff16) form_field_data_wide_pane_g1_ParamLimits

0x8834,	// (0x000534ea) form_field_data_wide_pane_g2_ParamLimits

0x8834,	// (0x000534ea) form_field_data_wide_pane_g2

0x88a7,	// (0x0005355d) form_field_data_wide_pane_g3_ParamLimits

0x88a7,	// (0x0005355d) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0005a336) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0005a336) form_field_data_wide_pane_g

0xbcc6,	// (0x0005697c) grid_touch_3_pane_ParamLimits

0xbcc6,	// (0x0005697c) grid_touch_3_pane

0xd3f8,	// (0x000580ae) cell_touch_3_pane_ParamLimits

0xd3f8,	// (0x000580ae) cell_touch_3_pane

0xc32d,	// (0x00056fe3) cell_touch_3_pane_g1

0xc32d,	// (0x00056fe3) cell_touch_3_pane_g2

0x0001,

0xfb3d,	// (0x0005a7f3) cell_touch_3_pane_g

0x7c60,	// (0x00052916) cont_query_data_pane

0x7c68,	// (0x0005291e) cont_query_data_pane_cp1

0xd426,	// (0x000580dc) button_value_adjust_pane_cp7

0xd42e,	// (0x000580e4) query_popup_pane_cp3

0x8ffc,	// (0x00053cb2) bg_popup_sub_pane_cp22_ParamLimits

0x5624,	// (0x000502da) navi_navi_volume_pane_cp2

0x563f,	// (0x000502f5) popup_side_volume_key_window_g2

0x564e,	// (0x00050304) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0005a3cc) popup_side_volume_key_window_g

0x566b,	// (0x00050321) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0005a3d3) popup_side_volume_key_window_t

0x92b3,	// (0x00053f69) popup_side_volume_key_window_ParamLimits

0x4ea8,	// (0x0004fb5e) list_double_graphic_pane_g4_ParamLimits

0x4ea8,	// (0x0004fb5e) list_double_graphic_pane_g4

0x7dcf,	// (0x00052a85) list_single_2heading_msg_pane_ParamLimits

0x7dcf,	// (0x00052a85) list_single_2heading_msg_pane

0x823f,	// (0x00052ef5) list_single_2heading_msg_pane_g1_ParamLimits

0x823f,	// (0x00052ef5) list_single_2heading_msg_pane_g1

0x9458,	// (0x0005410e) list_single_2heading_msg_pane_g2_ParamLimits

0x9458,	// (0x0005410e) list_single_2heading_msg_pane_g2

0x7e0d,	// (0x00052ac3) list_single_2heading_msg_pane_g3_ParamLimits

0x7e0d,	// (0x00052ac3) list_single_2heading_msg_pane_g3

0x824b,	// (0x00052f01) list_single_2heading_msg_pane_g4_ParamLimits

0x824b,	// (0x00052f01) list_single_2heading_msg_pane_g4

0x0003,

0xfcaf,	// (0x0005a965) list_single_2heading_msg_pane_g_ParamLimits

0xfcaf,	// (0x0005a965) list_single_2heading_msg_pane_g

0x8263,	// (0x00052f19) list_single_2heading_msg_pane_t1_ParamLimits

0x8263,	// (0x00052f19) list_single_2heading_msg_pane_t1

0x828b,	// (0x00052f41) list_single_2heading_msg_pane_t2_ParamLimits

0x828b,	// (0x00052f41) list_single_2heading_msg_pane_t2

0x82bf,	// (0x00052f75) list_single_2heading_msg_pane_t3_ParamLimits

0x82bf,	// (0x00052f75) list_single_2heading_msg_pane_t3

0x82f8,	// (0x00052fae) list_single_2heading_msg_pane_t4_ParamLimits

0x82f8,	// (0x00052fae) list_single_2heading_msg_pane_t4

0x0003,

0xfcb8,	// (0x0005a96e) list_single_2heading_msg_pane_t_ParamLimits

0xfcb8,	// (0x0005a96e) list_single_2heading_msg_pane_t

0x7875,	// (0x0005252b) title_pane_g4_ParamLimits

0x7875,	// (0x0005252b) title_pane_g4

0x5433,	// (0x000500e9) title_pane_stacon_g3_ParamLimits

0x5433,	// (0x000500e9) title_pane_stacon_g3

0xcf54,	// (0x00057c0a) list_single_2graphic_im_pane_g4_ParamLimits

0xcf54,	// (0x00057c0a) list_single_2graphic_im_pane_g4

0xae4b,	// (0x00055b01) popup_side_volume_key_window_cp

0xb613,	// (0x000562c9) main_idle_act2_pane_t1

0x605e,	// (0x00050d14) toolbar_button_pane_g10

0x87f6,	// (0x000534ac) popup_toolbar_window_cp1

0xbdc5,	// (0x00056a7b) clock_nsta_pane_cp_t1

0xbdc5,	// (0x00056a7b) clock_nsta_pane_cp_t2

0x0001,

0xfab3,	// (0x0005a769) clock_nsta_pane_cp_t

0x5624,	// (0x000502da) navi_navi_volume_pane_cp2_ParamLimits

0x5633,	// (0x000502e9) popup_side_volume_key_window_g1_ParamLimits

0x563f,	// (0x000502f5) popup_side_volume_key_window_g2_ParamLimits

0x564e,	// (0x00050304) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0005a3cc) popup_side_volume_key_window_g_ParamLimits

0x67dd,	// (0x00051493) fep_hwr_aid_pane

0x6884,	// (0x0005153a) bg_fep_hwr_top_pane_g4_ParamLimits

0xc389,	// (0x0005703f) fep_hwr_top_pane_g1_ParamLimits

0xc39b,	// (0x00057051) fep_hwr_top_pane_g2_ParamLimits

0x68a4,	// (0x0005155a) fep_hwr_top_pane_g3_ParamLimits

0xfb08,	// (0x0005a7be) fep_hwr_top_pane_g_ParamLimits

0x68b9,	// (0x0005156f) fep_hwr_top_text_pane_ParamLimits

0xac0e,	// (0x000558c4) aid_touch_tab_arrow_arrow_2

0xac17,	// (0x000558cd) aid_touch_tab_arrow_left_2

0x67f1,	// (0x000514a7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6828,	// (0x000514de) fep_hwr_prediction_pane

0xc4fb,	// (0x000571b1) fep_vkb_prediction_pane

0xc5ff,	// (0x000572b5) fep_vkb_side_pane_g3_ParamLimits

0xc5ff,	// (0x000572b5) fep_vkb_side_pane_g3

0x6a34,	// (0x000516ea) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6aa0,	// (0x00051756) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6aad,	// (0x00051763) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb7,	// (0x0005a86d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6bdc,	// (0x00051892) fep_hwr_prediction_pane_g1

0x6be6,	// (0x0005189c) fep_hwr_prediction_pane_g2

0x6bee,	// (0x000518a4) fep_hwr_prediction_pane_g3

0x6bf6,	// (0x000518ac) fep_hwr_prediction_pane_g4

0x0003,

0xfcc1,	// (0x0005a977) fep_hwr_prediction_pane_g

0xd453,	// (0x00058109) fep_vkb_prediction_pane_g1

0xd45d,	// (0x00058113) fep_vkb_prediction_pane_g2

0xd465,	// (0x0005811b) fep_vkb_prediction_pane_g3

0xd46d,	// (0x00058123) fep_vkb_prediction_pane_g4

0x0003,

0xfcca,	// (0x0005a980) fep_vkb_prediction_pane_g

0x6448,	// (0x000510fe) slider_set_pane_g3

0x645c,	// (0x00051112) slider_set_pane_g4

0x6474,	// (0x0005112a) slider_set_pane_g5

0x6448,	// (0x000510fe) slider_set_pane_g6

0x648a,	// (0x00051140) slider_set_pane_g7

0xb2ac,	// (0x00055f62) slider_form_pane_g3

0xb2b5,	// (0x00055f6b) slider_form_pane_g4

0xb2bd,	// (0x00055f73) slider_form_pane_g5

0xb2ac,	// (0x00055f62) slider_form_pane_g6

0xb2c5,	// (0x00055f7b) slider_form_pane_g7

0xb8be,	// (0x00056574) slider_set_pane_vc_g3

0xb8c7,	// (0x0005657d) slider_set_pane_vc_g4

0xb8d0,	// (0x00056586) slider_set_pane_vc_g5

0xb8be,	// (0x00056574) slider_set_pane_vc_g6

0xb8d9,	// (0x0005658f) slider_set_pane_vc_g7

0xba99,	// (0x0005674f) slider_form_pane_vc_g1

0xbaa2,	// (0x00056758) slider_form_pane_vc_g2

0xbaab,	// (0x00056761) slider_form_pane_vc_g3

0xba99,	// (0x0005674f) slider_form_pane_vc_g4

0xbab4,	// (0x0005676a) slider_form_pane_vc_g5

0x0004,

0xfa85,	// (0x0005a73b) slider_form_pane_vc_g

0x4a27,	// (0x0004f6dd) main_idle_act3_pane

0xd475,	// (0x0005812b) ai3_links_pane

0xd49f,	// (0x00058155) popup_ai3_data_window_ParamLimits

0xd49f,	// (0x00058155) popup_ai3_data_window

0x782d,	// (0x000524e3) grid_ai3_links_pane

0xd4b9,	// (0x0005816f) cell_ai3_links_pane_ParamLimits

0xd4b9,	// (0x0005816f) cell_ai3_links_pane

0xd4d1,	// (0x00058187) bg_popup_sub_pane_cp11

0xd4de,	// (0x00058194) cell_ai3_links_pane_g1

0x782d,	// (0x000524e3) bg_popup_sub_pane_cp12

0xd503,	// (0x000581b9) heading_ai3_data_pane

0xd50b,	// (0x000581c1) list_ai3_gene_pane

0xd517,	// (0x000581cd) popup_ai3_data_window_g1

0xd51f,	// (0x000581d5) heading_ai3_data_pane_g1

0xd527,	// (0x000581dd) heading_ai3_data_pane_t1

0xd535,	// (0x000581eb) list_double_ai3_gene_pane_ParamLimits

0xd535,	// (0x000581eb) list_double_ai3_gene_pane

0xd542,	// (0x000581f8) list_single_ai3_gene_pane_ParamLimits

0xd542,	// (0x000581f8) list_single_ai3_gene_pane

0xc2f2,	// (0x00056fa8) list_highlight_pane_cp7_ParamLimits

0xc2f2,	// (0x00056fa8) list_highlight_pane_cp7

0xd54f,	// (0x00058205) list_single_a13_gene_pane_t1_ParamLimits

0xd54f,	// (0x00058205) list_single_a13_gene_pane_t1

0xd566,	// (0x0005821c) list_single_ai3_gene_pane_g1

0xd56f,	// (0x00058225) list_single_ai3_gene_pane_g2

0x0001,

0xfcd3,	// (0x0005a989) list_single_ai3_gene_pane_g

0xd577,	// (0x0005822d) list_double_ai3_gene_pane_g1_ParamLimits

0xd577,	// (0x0005822d) list_double_ai3_gene_pane_g1

0xd583,	// (0x00058239) list_double_ai3_gene_pane_t1_ParamLimits

0xd583,	// (0x00058239) list_double_ai3_gene_pane_t1

0xd59f,	// (0x00058255) list_double_ai3_gene_pane_t2_ParamLimits

0xd59f,	// (0x00058255) list_double_ai3_gene_pane_t2

0xd5b5,	// (0x0005826b) list_double_ai3_gene_pane_t3_ParamLimits

0xd5b5,	// (0x0005826b) list_double_ai3_gene_pane_t3

0x0002,

0xfcd8,	// (0x0005a98e) list_double_ai3_gene_pane_t_ParamLimits

0xfcd8,	// (0x0005a98e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8235,	// (0x00052eeb) aid_size_min_col_2

0xd43f,	// (0x000580f5) aid_size_min_msg_ParamLimits

0xd43f,	// (0x000580f5) aid_size_min_msg

0xc6ff,	// (0x000573b5) fep_vkb_top_text_pane_g2_ParamLimits

0xc6ff,	// (0x000573b5) fep_vkb_top_text_pane_g2

0x0001,

0xfb38,	// (0x0005a7ee) fep_vkb_top_text_pane_g_ParamLimits

0xfb38,	// (0x0005a7ee) fep_vkb_top_text_pane_g

0x4a27,	// (0x0004f6dd) main_hc_apps_shell_pane

0xd5d2,	// (0x00058288) grid_hc_apps_pane_ParamLimits

0xd5d2,	// (0x00058288) grid_hc_apps_pane

0xd5e1,	// (0x00058297) list_hc_apps_pane

0xd5e9,	// (0x0005829f) scroll_pane_cp37_ParamLimits

0xd5e9,	// (0x0005829f) scroll_pane_cp37

0xd5f5,	// (0x000582ab) cell_hc_apps_pane_ParamLimits

0xd5f5,	// (0x000582ab) cell_hc_apps_pane

0xd6a3,	// (0x00058359) cell_hc_apps_pane_g1_ParamLimits

0xd6a3,	// (0x00058359) cell_hc_apps_pane_g1

0xd6d4,	// (0x0005838a) cell_hc_apps_pane_g2_ParamLimits

0xd6d4,	// (0x0005838a) cell_hc_apps_pane_g2

0xd6f0,	// (0x000583a6) cell_hc_apps_pane_g3_ParamLimits

0xd6f0,	// (0x000583a6) cell_hc_apps_pane_g3

0x0002,

0xfcdf,	// (0x0005a995) cell_hc_apps_pane_g_ParamLimits

0xfcdf,	// (0x0005a995) cell_hc_apps_pane_g

0xd712,	// (0x000583c8) cell_hc_apps_pane_t1_ParamLimits

0xd712,	// (0x000583c8) cell_hc_apps_pane_t1

0x7baa,	// (0x00052860) grid_highlight_pane_cp10_ParamLimits

0x7baa,	// (0x00052860) grid_highlight_pane_cp10

0xd752,	// (0x00058408) list_single_hc_apps_pane_ParamLimits

0xd752,	// (0x00058408) list_single_hc_apps_pane

0xd7ae,	// (0x00058464) list_single_hc_apps_pane_g1

0x831d,	// (0x00052fd3) list_single_hc_apps_pane_g2

0x0001,

0xfce6,	// (0x0005a99c) list_single_hc_apps_pane_g

0x8336,	// (0x00052fec) list_single_hc_apps_pane_g2_copy1

0x8352,	// (0x00053008) list_single_hc_apps_pane_t1

0x7921,	// (0x000525d7) bg_set_opt_pane_cp_ParamLimits

0x4c88,	// (0x0004f93e) setting_slider_pane_t1_ParamLimits

0x4ca1,	// (0x0004f957) setting_slider_pane_t2_ParamLimits

0x4cbb,	// (0x0004f971) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0005a214) setting_slider_pane_t_ParamLimits

0x4cd3,	// (0x0004f989) slider_set_pane_ParamLimits

0x593b,	// (0x000505f1) control_pane_g5_ParamLimits

0x593b,	// (0x000505f1) control_pane_g5

0xb0fb,	// (0x00055db1) slider_set_pane_g1_ParamLimits

0x643c,	// (0x000510f2) slider_set_pane_g2_ParamLimits

0x6448,	// (0x000510fe) slider_set_pane_g3_ParamLimits

0x645c,	// (0x00051112) slider_set_pane_g4_ParamLimits

0x6474,	// (0x0005112a) slider_set_pane_g5_ParamLimits

0x6448,	// (0x000510fe) slider_set_pane_g6_ParamLimits

0x648a,	// (0x00051140) slider_set_pane_g7_ParamLimits

0xf969,	// (0x0005a61f) slider_set_pane_g_ParamLimits

0x939f,	// (0x00054055) navi_icon_text_pane_ParamLimits

0x9895,	// (0x0005454b) aid_fill_nsta_2_ParamLimits

0x98d4,	// (0x0005458a) aid_touch_tab_arrow_left_ParamLimits

0x98e3,	// (0x00054599) aid_touch_tab_arrow_right_ParamLimits

0x9950,	// (0x00054606) clock_nsta_pane_ParamLimits

0xabf0,	// (0x000558a6) navi_icon_pane_g1_ParamLimits

0xabfc,	// (0x000558b2) navi_text_pane_t1_ParamLimits

0xbed1,	// (0x00056b87) navi_icon_text_pane_g1_ParamLimits

0xbedd,	// (0x00056b93) navi_icon_text_pane_t1_ParamLimits

0xd7ae,	// (0x00058464) list_single_hc_apps_pane_g1_ParamLimits

0x831d,	// (0x00052fd3) list_single_hc_apps_pane_g2_ParamLimits

0xfce6,	// (0x0005a99c) list_single_hc_apps_pane_g_ParamLimits

0x8336,	// (0x00052fec) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8352,	// (0x00053008) list_single_hc_apps_pane_t1_ParamLimits

0x4b92,	// (0x0004f848) popup_toolbar2_fixed_window_ParamLimits

0x4b92,	// (0x0004f848) popup_toolbar2_fixed_window

0x5f40,	// (0x00050bf6) popup_toolbar2_float_window

0x782d,	// (0x000524e3) bg_popup_sub_pane_cp27

0xd7c7,	// (0x0005847d) grid_toolbar2_float_pane

0x782d,	// (0x000524e3) bg_popup_sub_pane_cp26

0xd7c7,	// (0x0005847d) grid_toolbar2_fixed_pane

0xd7cf,	// (0x00058485) cell_toolbar2_fixed_pane_ParamLimits

0xd7cf,	// (0x00058485) cell_toolbar2_fixed_pane

0xd7df,	// (0x00058495) cell_toolbar2_fixed_pane_g1

0xd7e8,	// (0x0005849e) toolbar2_fixed_button_pane

0x9d67,	// (0x00054a1d) toolbar2_fixed_button_pane_g1

0x9d77,	// (0x00054a2d) toolbar2_fixed_button_pane_g2

0x9d6f,	// (0x00054a25) toolbar2_fixed_button_pane_g3

0x9d87,	// (0x00054a3d) toolbar2_fixed_button_pane_g4

0x9d7f,	// (0x00054a35) toolbar2_fixed_button_pane_g5

0x9d8f,	// (0x00054a45) toolbar2_fixed_button_pane_g6

0x9d97,	// (0x00054a4d) toolbar2_fixed_button_pane_g7

0x9da7,	// (0x00054a5d) toolbar2_fixed_button_pane_g8

0x9d9f,	// (0x00054a55) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x0005a521) toolbar2_fixed_button_pane_g

0xd7f0,	// (0x000584a6) cell_toolbar2_float_pane_ParamLimits

0xd7f0,	// (0x000584a6) cell_toolbar2_float_pane

0xd801,	// (0x000584b7) cell_toolbar2_float_pane_g1

0xd7e8,	// (0x0005849e) toolbar2_fixed_button_pane_cp

0xc45b,	// (0x00057111) fep_vkb_accented_list_pane_ParamLimits

0xc45b,	// (0x00057111) fep_vkb_accented_list_pane

0x6a14,	// (0x000516ca) bg_popup_fep_shadow_pane_g9

0x951f,	// (0x000541d5) bg_popup_fep_shadow_pane_cp3

0x89e4,	// (0x0005369a) list_accented_list_pane

0xd80a,	// (0x000584c0) list_single_accented_list_pane_ParamLimits

0xd80a,	// (0x000584c0) list_single_accented_list_pane

0x951f,	// (0x000541d5) list_highlight_pane_cp10

0xd81b,	// (0x000584d1) list_single_accented_list_pane_t1

0x5e90,	// (0x00050b46) popup_slider_window_ParamLimits

0x5e90,	// (0x00050b46) popup_slider_window

0xd436,	// (0x000580ec) aid_indentation_list_msg

0xd8d5,	// (0x0005858b) bg_popup_window_pane_cp19

0xd93f,	// (0x000585f5) popup_slider_window_g1

0xd95b,	// (0x00058611) popup_slider_window_g2

0xd977,	// (0x0005862d) popup_slider_window_g3

0x0005,

0xfceb,	// (0x0005a9a1) popup_slider_window_g

0xd9d3,	// (0x00058689) popup_slider_window_t1

0xda47,	// (0x000586fd) small_volume_slider_vertical_pane

0xc32d,	// (0x00056fe3) small_volume_slider_vertical_pane_g1

0xc32d,	// (0x00056fe3) small_volume_slider_vertical_pane_g2

0xda63,	// (0x00058719) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfd,	// (0x0005a9b3) small_volume_slider_vertical_pane_g

0x494a,	// (0x0004f600) area_side_right_pane_ParamLimits

0x494a,	// (0x0004f600) area_side_right_pane

0x6bfe,	// (0x000518b4) aid_size_side_button_ParamLimits

0x6bfe,	// (0x000518b4) aid_size_side_button

0x6c12,	// (0x000518c8) grid_sctrl_middle_pane_ParamLimits

0x6c12,	// (0x000518c8) grid_sctrl_middle_pane

0x6c31,	// (0x000518e7) sctrl_sk_bottom_pane

0x6c42,	// (0x000518f8) sctrl_sk_top_pane

0x6c54,	// (0x0005190a) aid_touch_sctrl_top

0x6c61,	// (0x00051917) bg_sctrl_sk_pane_ParamLimits

0x6c61,	// (0x00051917) bg_sctrl_sk_pane

0x6c6f,	// (0x00051925) sctrl_sk_top_pane_g1

0x6c7c,	// (0x00051932) sctrl_sk_top_pane_t1

0x6c54,	// (0x0005190a) aid_touch_sctrl_bottom

0x6c61,	// (0x00051917) bg_sctrl_sk_pane_cp_ParamLimits

0x6c61,	// (0x00051917) bg_sctrl_sk_pane_cp

0x6c97,	// (0x0005194d) sctrl_sk_bottom_pane_g1

0x6c7c,	// (0x00051932) sctrl_sk_bottom_pane_t1

0x6ca0,	// (0x00051956) cell_sctrl_middle_pane_ParamLimits

0x6ca0,	// (0x00051956) cell_sctrl_middle_pane

0x6cbb,	// (0x00051971) aid_touch_sctrl_middle_ParamLimits

0x6cbb,	// (0x00051971) aid_touch_sctrl_middle

0x6ccd,	// (0x00051983) bg_sctrl_middle_pane_ParamLimits

0x6ccd,	// (0x00051983) bg_sctrl_middle_pane

0x6a34,	// (0x000516ea) cell_sctrl_middle_pane_g1_ParamLimits

0x6a34,	// (0x000516ea) cell_sctrl_middle_pane_g1

0x6cdb,	// (0x00051991) cell_sctrl_middle_pane_g2_ParamLimits

0x6cdb,	// (0x00051991) cell_sctrl_middle_pane_g2

0x0001,

0xfd09,	// (0x0005a9bf) cell_sctrl_middle_pane_g_ParamLimits

0xfd09,	// (0x0005a9bf) cell_sctrl_middle_pane_g

0x9d67,	// (0x00054a1d) bg_sctrl_middle_pane_g1

0x9d6f,	// (0x00054a25) bg_sctrl_middle_pane_g2

0x9d77,	// (0x00054a2d) bg_sctrl_middle_pane_g3

0x9d7f,	// (0x00054a35) bg_sctrl_middle_pane_g4

0x9d87,	// (0x00054a3d) bg_sctrl_middle_pane_g5

0x9d8f,	// (0x00054a45) bg_sctrl_middle_pane_g6

0x9d97,	// (0x00054a4d) bg_sctrl_middle_pane_g7

0x9d9f,	// (0x00054a55) bg_sctrl_middle_pane_g8

0x0007,

0xfd0e,	// (0x0005a9c4) bg_sctrl_middle_pane_g

0x9da7,	// (0x00054a5d) bg_sctrl_middle_pane_g8_copy1

0x9d67,	// (0x00054a1d) bg_sctrl_sk_pane_g1

0x9d77,	// (0x00054a2d) bg_sctrl_sk_pane_g2

0x9d6f,	// (0x00054a25) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x0005a521) bg_sctrl_sk_pane_g

0x87bc,	// (0x00053472) aid_size_touch_scroll_bar

0x9d87,	// (0x00054a3d) bg_sctrl_sk_pane_g4

0x9d7f,	// (0x00054a35) bg_sctrl_sk_pane_g5

0x9d8f,	// (0x00054a45) bg_sctrl_sk_pane_g6

0x9d97,	// (0x00054a4d) bg_sctrl_sk_pane_g7

0x9da7,	// (0x00054a5d) bg_sctrl_sk_pane_g8

0x9d9f,	// (0x00054a55) bg_sctrl_sk_pane_g9

0x5af9,	// (0x000507af) popup_fep_china_hwr2_fs_candidate_window

0x5b03,	// (0x000507b9) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5b03,	// (0x000507b9) popup_fep_china_hwr2_fs_control_window

0x6a34,	// (0x000516ea) sctrl_sk_top_pane_g2

0x0001,

0xfd04,	// (0x0005a9ba) sctrl_sk_top_pane_g

0xda6c,	// (0x00058722) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda6c,	// (0x00058722) aid_fep_china_hwr2_fs_cell

0xda7e,	// (0x00058734) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda7e,	// (0x00058734) bg_popup_fep_shadow_pane_cp4

0xda95,	// (0x0005874b) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda95,	// (0x0005874b) bg_popup_fep_shadow_pane_cp5

0xdaa7,	// (0x0005875d) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdaa7,	// (0x0005875d) popup_fep_china_hwr2_fs_control_bar_grid

0xdab7,	// (0x0005876d) popup_fep_china_hwr2_fs_control_funtion_grid

0xdabf,	// (0x00058775) aid_fep_china_hwr2_fs_candi_cell

0x782d,	// (0x000524e3) bg_popup_fep_shadow_pane_cp6

0xdac9,	// (0x0005877f) popup_fep_china_hwr2_fs_candidate_grid

0xdad3,	// (0x00058789) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdad3,	// (0x00058789) cell_fep_china_hwr2_fs_funtion_grid

0xc32d,	// (0x00056fe3) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xdaeb,	// (0x000587a1) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xdaeb,	// (0x000587a1) cell_fep_china_hwr2_fs_funtion_grid_g1

0xdaf9,	// (0x000587af) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xdaf9,	// (0x000587af) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1f,	// (0x0005a9d5) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1f,	// (0x0005a9d5) cell_fep_china_hwr2_fs_funtion_grid_g

0xdb0f,	// (0x000587c5) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdb0f,	// (0x000587c5) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdb24,	// (0x000587da) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdb24,	// (0x000587da) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd24,	// (0x0005a9da) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd24,	// (0x0005a9da) cell_fep_china_hwr2_fs_funtion_grid_t

0xdb40,	// (0x000587f6) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdb48,	// (0x000587fe) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdb50,	// (0x00058806) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd29,	// (0x0005a9df) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdb58,	// (0x0005880e) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdb58,	// (0x0005880e) cell_fep_china_hwr2_fs_candidate_grid

0xdb71,	// (0x00058827) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb79,	// (0x0005882f) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc32d,	// (0x00056fe3) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc32d,	// (0x00056fe3) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3d,	// (0x0005a7f3) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb81,	// (0x00058837) cell_fep_china_hwr2_fs_candidate_grid_t1

0x995d,	// (0x00054613) clock_nsta_pane_cp_24_ParamLimits

0x995d,	// (0x00054613) clock_nsta_pane_cp_24

0x99db,	// (0x00054691) indicator_nsta_pane_cp_24_ParamLimits

0x99db,	// (0x00054691) indicator_nsta_pane_cp_24

0xaa6c,	// (0x00055722) heading_pane_g1

0x0001,

0xf8d0,	// (0x0005a586) heading_pane_g

0xb45c,	// (0x00056112) grid_sct_catagory_button_pane

0xb48c,	// (0x00056142) scroll_pane_cp5_ParamLimits

0xbf1f,	// (0x00056bd5) button_value_adjust_pane_cp5_ParamLimits

0xbf1f,	// (0x00056bd5) button_value_adjust_pane_cp5

0xbffe,	// (0x00056cb4) form2_midp_time_pane_ParamLimits

0xdb8f,	// (0x00058845) cell_sct_catagory_button_pane_ParamLimits

0xdb8f,	// (0x00058845) cell_sct_catagory_button_pane

0xc2f2,	// (0x00056fa8) bg_button_pane_cp01_ParamLimits

0xc2f2,	// (0x00056fa8) bg_button_pane_cp01

0xc32d,	// (0x00056fe3) cell_sct_catagory_button_pane_g1

0x5ecf,	// (0x00050b85) popup_tb_extension_window

0xdba1,	// (0x00058857) aid_size_cell_ext_ParamLimits

0xdba1,	// (0x00058857) aid_size_cell_ext

0x7baa,	// (0x00052860) bg_tb_trans_pane_cp1_ParamLimits

0x7baa,	// (0x00052860) bg_tb_trans_pane_cp1

0xdbc1,	// (0x00058877) grid_tb_ext_pane_ParamLimits

0xdbc1,	// (0x00058877) grid_tb_ext_pane

0xdbef,	// (0x000588a5) cell_tb_ext_pane_ParamLimits

0xdbef,	// (0x000588a5) cell_tb_ext_pane

0xdc06,	// (0x000588bc) cell_tb_ext_pane_g1_ParamLimits

0xdc06,	// (0x000588bc) cell_tb_ext_pane_g1

0xdc23,	// (0x000588d9) cell_tb_ext_pane_t1

0x7baa,	// (0x00052860) list_highlight_pane_cp11_ParamLimits

0x7baa,	// (0x00052860) list_highlight_pane_cp11

0x4bb1,	// (0x0004f867) popup_uni_indicator_window_ParamLimits

0x4bb1,	// (0x0004f867) popup_uni_indicator_window

0x8899,	// (0x0005354f) bg_popup_sub_pane_cp14

0xdc3e,	// (0x000588f4) list_uniindi_pane

0xdc4a,	// (0x00058900) uniindi_top_pane

0x7baa,	// (0x00052860) bg_uniindi_top_pane

0xdc69,	// (0x0005891f) uniindi_top_pane_g1

0xdc7f,	// (0x00058935) uniindi_top_pane_g2

0x0003,

0xfd30,	// (0x0005a9e6) uniindi_top_pane_g

0xdca9,	// (0x0005895f) uniindi_top_pane_t1

0xdcd3,	// (0x00058989) list_single_uniindi_pane_ParamLimits

0xdcd3,	// (0x00058989) list_single_uniindi_pane

0xc32d,	// (0x00056fe3) bg_uniindi_top_pane_g1

0xdce6,	// (0x0005899c) list_single_uniindi_pane_g1

0xdcf9,	// (0x000589af) list_single_uniindi_pane_t1

0x4a27,	// (0x0004f6dd) control_bg_pane

0xdd1e,	// (0x000589d4) bg_sctrl_sk_pane_cp1

0xdd27,	// (0x000589dd) bg_sctrl_sk_pane_cp2

0xdd30,	// (0x000589e6) control_bg_pane_g1

0xdd39,	// (0x000589ef) control_bg_pane_g2

0x0001,

0xfd39,	// (0x0005a9ef) control_bg_pane_g

0xbd69,	// (0x00056a1f) cell_indicator_nsta_pane_g1_ParamLimits

0xbd77,	// (0x00056a2d) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa1,	// (0x0005a757) cell_indicator_nsta_pane_g_ParamLimits

0x8012,	// (0x00052cc8) form2_midp_time_pane_t1_ParamLimits

0x5a59,	// (0x0005070f) main_idle_act4_pane_ParamLimits

0x5a59,	// (0x0005070f) main_idle_act4_pane

0x5ecf,	// (0x00050b85) popup_tb_extension_window_ParamLimits

0xdbdf,	// (0x00058895) tb_ext_find_pane_ParamLimits

0xdbdf,	// (0x00058895) tb_ext_find_pane

0xdd42,	// (0x000589f8) ai_gene_pane_1_cp1

0x965a,	// (0x00054310) ai_gene_pane_2_cp1

0xdd4a,	// (0x00058a00) list_single_idle_plugin_calendar_pane

0xdd53,	// (0x00058a09) list_single_idle_plugin_notification_pane

0xdd5c,	// (0x00058a12) list_single_idle_plugin_player_pane

0xdd65,	// (0x00058a1b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdd65,	// (0x00058a1b) list_single_idle_plugin_shortcut_pane

0xdd87,	// (0x00058a3d) main_idle_act4_pane_t1

0xdd99,	// (0x00058a4f) main_idle_act4_pane_t2

0x0001,

0xfd3e,	// (0x0005a9f4) main_idle_act4_pane_t

0xddab,	// (0x00058a61) middle_sk_idle_act4_pane_ParamLimits

0xddab,	// (0x00058a61) middle_sk_idle_act4_pane

0xddc1,	// (0x00058a77) popup_clock_digital_analogue_window_cp2

0xdddb,	// (0x00058a91) shortcut_wheel_idle_act4_pane_ParamLimits

0xdddb,	// (0x00058a91) shortcut_wheel_idle_act4_pane

0xc32d,	// (0x00056fe3) shortcut_wheel_idle_act4_pane_g1

0xc32d,	// (0x00056fe3) shortcut_wheel_idle_act4_pane_g2

0xc32d,	// (0x00056fe3) shortcut_wheel_idle_act4_pane_g3

0xc32d,	// (0x00056fe3) shortcut_wheel_idle_act4_pane_g4

0xc32d,	// (0x00056fe3) shortcut_wheel_idle_act4_pane_g5

0xddef,	// (0x00058aa5) shortcut_wheel_idle_act4_pane_g6

0xddf7,	// (0x00058aad) shortcut_wheel_idle_act4_pane_g7

0xddff,	// (0x00058ab5) shortcut_wheel_idle_act4_pane_g8

0xde07,	// (0x00058abd) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd43,	// (0x0005a9f9) shortcut_wheel_idle_act4_pane_g

0xc5ab,	// (0x00057261) middle_sk_idle_act4_pane_g1_ParamLimits

0xc5ab,	// (0x00057261) middle_sk_idle_act4_pane_g1

0xde6b,	// (0x00058b21) middle_sk_idle_act4_pane_g2_ParamLimits

0xde6b,	// (0x00058b21) middle_sk_idle_act4_pane_g2

0x0001,

0xfd66,	// (0x0005aa1c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd66,	// (0x0005aa1c) middle_sk_idle_act4_pane_g

0xde77,	// (0x00058b2d) middle_sk_idle_act4_pane_t1_ParamLimits

0xde77,	// (0x00058b2d) middle_sk_idle_act4_pane_t1

0xde94,	// (0x00058b4a) grid_ai_shortcut_pane_ParamLimits

0xde94,	// (0x00058b4a) grid_ai_shortcut_pane

0xdead,	// (0x00058b63) list_highlight_pane_cp16_ParamLimits

0xdead,	// (0x00058b63) list_highlight_pane_cp16

0xdeba,	// (0x00058b70) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdeba,	// (0x00058b70) list_single_idle_plugin_shortcut_pane_g1

0xdec6,	// (0x00058b7c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdec6,	// (0x00058b7c) list_single_idle_plugin_shortcut_pane_g2

0xdede,	// (0x00058b94) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdede,	// (0x00058b94) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6b,	// (0x0005aa21) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6b,	// (0x0005aa21) list_single_idle_plugin_shortcut_pane_g

0xdef1,	// (0x00058ba7) cell_ai_shortcut_pane_ParamLimits

0xdef1,	// (0x00058ba7) cell_ai_shortcut_pane

0xdf15,	// (0x00058bcb) cell_ai_shortcut_pane_g1_ParamLimits

0xdf15,	// (0x00058bcb) cell_ai_shortcut_pane_g1

0xdd42,	// (0x000589f8) ai_gene_pane_1_cp2

0xdf37,	// (0x00058bed) ai_gene_pane_2_cp2

0xdf3f,	// (0x00058bf5) list_highlight_pane_cp15

0xdf48,	// (0x00058bfe) list_single_idle_plugin_calendar_pane_g1

0xdf3f,	// (0x00058bf5) list_highlight_pane_cp17

0xdf50,	// (0x00058c06) list_single_idle_plugin_calendar_pane_g1_copy1

0xdf58,	// (0x00058c0e) list_single_idle_plugin_player_pane_g1

0xb6b5,	// (0x0005636b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd72,	// (0x0005aa28) list_single_idle_plugin_player_pane_g

0xdf60,	// (0x00058c16) list_single_idle_plugin_player_pane_t1

0xdf6e,	// (0x00058c24) list_single_idle_plugin_player_pane_t2

0xdf7c,	// (0x00058c32) list_single_idle_plugin_player_pane_t3

0xdf8a,	// (0x00058c40) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd77,	// (0x0005aa2d) list_single_idle_plugin_player_pane_t

0xdf98,	// (0x00058c4e) wait_bar_pane_cp15

0xdfa0,	// (0x00058c56) grid_ai_notification_pane

0xb6b5,	// (0x0005636b) list_single_idle_plugin_notification_pane_g1

0xdfa9,	// (0x00058c5f) cell_ai_notification_pane_ParamLimits

0xdfa9,	// (0x00058c5f) cell_ai_notification_pane

0xdfb6,	// (0x00058c6c) cell_ai_notification_pane_g1

0xdfbe,	// (0x00058c74) cell_ai_notification_pane_t1

0xdfcc,	// (0x00058c82) tb_ext_find_button_pane

0xdfd4,	// (0x00058c8a) tb_ext_find_pane_g1

0xdfdc,	// (0x00058c92) tb_ext_find_pane_t1

0x8f0c,	// (0x00053bc2) tb_ext_find_button_pane_g1

0xdfea,	// (0x00058ca0) tb_ext_find_button_pane_g2

0x0001,

0xfd80,	// (0x0005aa36) tb_ext_find_button_pane_g

0xdd87,	// (0x00058a3d) main_idle_act4_pane_t1_ParamLimits

0xdd99,	// (0x00058a4f) main_idle_act4_pane_t2_ParamLimits

0xfd3e,	// (0x0005a9f4) main_idle_act4_pane_t_ParamLimits

0xddc1,	// (0x00058a77) popup_clock_digital_analogue_window_cp2_ParamLimits

0xddcf,	// (0x00058a85) sat_plugin_idle_act4_pane_ParamLimits

0xddcf,	// (0x00058a85) sat_plugin_idle_act4_pane

0xdff3,	// (0x00058ca9) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdff3,	// (0x00058ca9) sat_plugin_idle_act4_pane_t1

0xe006,	// (0x00058cbc) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe006,	// (0x00058cbc) sat_plugin_idle_act4_pane_t2

0xe019,	// (0x00058ccf) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe019,	// (0x00058ccf) sat_plugin_idle_act4_pane_t3

0xe02c,	// (0x00058ce2) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe02c,	// (0x00058ce2) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd85,	// (0x0005aa3b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd85,	// (0x0005aa3b) sat_plugin_idle_act4_pane_t

0x4aec,	// (0x0004f7a2) popup_battery_window_ParamLimits

0x4aec,	// (0x0004f7a2) popup_battery_window

0x7baa,	// (0x00052860) bg_popup_sub_pane_cp25_ParamLimits

0x7baa,	// (0x00052860) bg_popup_sub_pane_cp25

0xe03f,	// (0x00058cf5) popup_battery_window_g1_ParamLimits

0xe03f,	// (0x00058cf5) popup_battery_window_g1

0xe04b,	// (0x00058d01) popup_battery_window_t1_ParamLimits

0xe04b,	// (0x00058d01) popup_battery_window_t1

0xe05d,	// (0x00058d13) popup_battery_window_t2_ParamLimits

0xe05d,	// (0x00058d13) popup_battery_window_t2

0x0001,

0xfd8e,	// (0x0005aa44) popup_battery_window_t_ParamLimits

0xfd8e,	// (0x0005aa44) popup_battery_window_t

0x9527,	// (0x000541dd) midp_canvas_pane_ParamLimits

0x959e,	// (0x00054254) midp_keypad_pane_ParamLimits

0x959e,	// (0x00054254) midp_keypad_pane

0x985d,	// (0x00054513) main_midp_pane_ParamLimits

0xbde3,	// (0x00056a99) signal_pane_g2_cp_ParamLimits

0xe07a,	// (0x00058d30) aid_size_cell_midp_keypad_ParamLimits

0xe07a,	// (0x00058d30) aid_size_cell_midp_keypad

0xe094,	// (0x00058d4a) midp_keyp_game_grid_pane_ParamLimits

0xe094,	// (0x00058d4a) midp_keyp_game_grid_pane

0xe0b4,	// (0x00058d6a) midp_keyp_rocker_pane_ParamLimits

0xe0b4,	// (0x00058d6a) midp_keyp_rocker_pane

0xe0ed,	// (0x00058da3) midp_keyp_sk_left_pane_ParamLimits

0xe0ed,	// (0x00058da3) midp_keyp_sk_left_pane

0xe147,	// (0x00058dfd) midp_keyp_sk_right_pane_ParamLimits

0xe147,	// (0x00058dfd) midp_keyp_sk_right_pane

0x782d,	// (0x000524e3) bg_button_pane_cp03

0xe1a1,	// (0x00058e57) midp_keyp_sk_left_pane_g1

0x782d,	// (0x000524e3) bg_button_pane_cp04

0xe1a1,	// (0x00058e57) midp_keyp_sk_right_pane_g1

0xc32d,	// (0x00056fe3) midp_keyp_rocker_pane_g1

0xe1aa,	// (0x00058e60) keyp_game_cell_pane_ParamLimits

0xe1aa,	// (0x00058e60) keyp_game_cell_pane

0x782d,	// (0x000524e3) bg_button_pane_cp02

0xe1bd,	// (0x00058e73) keyp_game_cell_pane_g1

0x4b30,	// (0x0004f7e6) popup_fep_vkb2_window_ParamLimits

0x4b30,	// (0x0004f7e6) popup_fep_vkb2_window

0x6cf9,	// (0x000519af) aid_size_cell_vkb2_ParamLimits

0x6cf9,	// (0x000519af) aid_size_cell_vkb2

0x6d4d,	// (0x00051a03) popup_fep_vkb2_window_g1_ParamLimits

0x6d4d,	// (0x00051a03) popup_fep_vkb2_window_g1

0x6d95,	// (0x00051a4b) vkb2_area_bottom_pane_ParamLimits

0x6d95,	// (0x00051a4b) vkb2_area_bottom_pane

0x6de1,	// (0x00051a97) vkb2_area_keypad_pane_ParamLimits

0x6de1,	// (0x00051a97) vkb2_area_keypad_pane

0x6e23,	// (0x00051ad9) vkb2_area_top_pane_ParamLimits

0x6e23,	// (0x00051ad9) vkb2_area_top_pane

0x6e9d,	// (0x00051b53) vkb2_top_entry_pane_ParamLimits

0x6e9d,	// (0x00051b53) vkb2_top_entry_pane

0x6ec7,	// (0x00051b7d) vkb2_top_grid_left_pane_ParamLimits

0x6ec7,	// (0x00051b7d) vkb2_top_grid_left_pane

0x6ee5,	// (0x00051b9b) vkb2_top_grid_right_pane_ParamLimits

0x6ee5,	// (0x00051b9b) vkb2_top_grid_right_pane

0x6f03,	// (0x00051bb9) vkb2_cell_keypad_pane_ParamLimits

0x6f03,	// (0x00051bb9) vkb2_cell_keypad_pane

0x6fd4,	// (0x00051c8a) vkb2_area_bottom_grid_pane_ParamLimits

0x6fd4,	// (0x00051c8a) vkb2_area_bottom_grid_pane

0x6ffa,	// (0x00051cb0) vkb2_area_bottom_pane_g1_ParamLimits

0x6ffa,	// (0x00051cb0) vkb2_area_bottom_pane_g1

0x701e,	// (0x00051cd4) vkb2_area_bottom_pane_g2_ParamLimits

0x701e,	// (0x00051cd4) vkb2_area_bottom_pane_g2

0x704c,	// (0x00051d02) vkb2_area_bottom_pane_g3_ParamLimits

0x704c,	// (0x00051d02) vkb2_area_bottom_pane_g3

0x0002,

0xfd93,	// (0x0005aa49) vkb2_area_bottom_pane_g_ParamLimits

0xfd93,	// (0x0005aa49) vkb2_area_bottom_pane_g

0x70ad,	// (0x00051d63) vkb2_top_cell_left_pane_ParamLimits

0x70ad,	// (0x00051d63) vkb2_top_cell_left_pane

0xe1ce,	// (0x00058e84) vkb2_top_entry_pane_g1_ParamLimits

0xe1ce,	// (0x00058e84) vkb2_top_entry_pane_g1

0xe1dc,	// (0x00058e92) vkb2_top_entry_pane_t1_ParamLimits

0xe1dc,	// (0x00058e92) vkb2_top_entry_pane_t1

0xe20e,	// (0x00058ec4) vkb2_top_entry_pane_t2_ParamLimits

0xe20e,	// (0x00058ec4) vkb2_top_entry_pane_t2

0xe240,	// (0x00058ef6) vkb2_top_entry_pane_t3_ParamLimits

0xe240,	// (0x00058ef6) vkb2_top_entry_pane_t3

0x0002,

0xfd9a,	// (0x0005aa50) vkb2_top_entry_pane_t_ParamLimits

0xfd9a,	// (0x0005aa50) vkb2_top_entry_pane_t

0x70fa,	// (0x00051db0) vkb2_top_grid_right_pane_g1_ParamLimits

0x70fa,	// (0x00051db0) vkb2_top_grid_right_pane_g1

0x7110,	// (0x00051dc6) vkb2_top_grid_right_pane_g2_ParamLimits

0x7110,	// (0x00051dc6) vkb2_top_grid_right_pane_g2

0x7128,	// (0x00051dde) vkb2_top_grid_right_pane_g3_ParamLimits

0x7128,	// (0x00051dde) vkb2_top_grid_right_pane_g3

0x7140,	// (0x00051df6) vkb2_top_grid_right_pane_g4_ParamLimits

0x7140,	// (0x00051df6) vkb2_top_grid_right_pane_g4

0x0003,

0xfda1,	// (0x0005aa57) vkb2_top_grid_right_pane_g_ParamLimits

0xfda1,	// (0x0005aa57) vkb2_top_grid_right_pane_g

0x7156,	// (0x00051e0c) vkb2_top_cell_left_pane_g1

0x716d,	// (0x00051e23) vkb2_cell_keypad_pane_g1_ParamLimits

0x716d,	// (0x00051e23) vkb2_cell_keypad_pane_g1

0xe264,	// (0x00058f1a) vkb2_cell_keypad_pane_t1_ParamLimits

0xe264,	// (0x00058f1a) vkb2_cell_keypad_pane_t1

0x717b,	// (0x00051e31) vkb2_cell_bottom_grid_pane_ParamLimits

0x717b,	// (0x00051e31) vkb2_cell_bottom_grid_pane

0x71b4,	// (0x00051e6a) vkb2_cell_bottom_grid_pane_g1

0xde0f,	// (0x00058ac5) aid_call2_pane_cp02

0xde17,	// (0x00058acd) aid_call_pane_cp02

0xde1f,	// (0x00058ad5) clock_digital_number_pane_cp10

0xde27,	// (0x00058add) clock_digital_number_pane_cp11

0xde2f,	// (0x00058ae5) clock_digital_number_pane_cp12

0xde37,	// (0x00058aed) clock_digital_number_pane_cp13

0xde3f,	// (0x00058af5) clock_digital_separator_pane_cp10

0x8f0c,	// (0x00053bc2) popup_clock_digital_analogue_window_cp2_g1

0x8f0c,	// (0x00053bc2) popup_clock_digital_analogue_window_cp2_g2

0xde47,	// (0x00058afd) popup_clock_digital_analogue_window_cp2_g3

0x8f0c,	// (0x00053bc2) popup_clock_digital_analogue_window_cp2_g4

0xde47,	// (0x00058afd) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd56,	// (0x0005aa0c) popup_clock_digital_analogue_window_cp2_g

0xde4f,	// (0x00058b05) popup_clock_digital_analogue_window_cp2_t1

0xde5d,	// (0x00058b13) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd61,	// (0x0005aa17) popup_clock_digital_analogue_window_cp2_t

0xc32d,	// (0x00056fe3) clock_digital_number_pane_cp10_g1

0xc32d,	// (0x00056fe3) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3d,	// (0x0005a7f3) clock_digital_number_pane_cp10_g

0xc32d,	// (0x00056fe3) clock_digital_separator_pane_cp10_g1

0xc32d,	// (0x00056fe3) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3d,	// (0x0005a7f3) clock_digital_separator_pane_cp10_g

0xdc8b,	// (0x00058941) uniindi_top_pane_g3

0xdc9c,	// (0x00058952) uniindi_top_pane_g4

0x6f8e,	// (0x00051c44) vkb2_row_keypad_pane_ParamLimits

0x6f8e,	// (0x00051c44) vkb2_row_keypad_pane

0x71d0,	// (0x00051e86) vkb2_cell_t_keypad_pane_ParamLimits

0x71d0,	// (0x00051e86) vkb2_cell_t_keypad_pane

0x71e0,	// (0x00051e96) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x71e0,	// (0x00051e96) vkb2_cell_t_keypad_pane_cp08

0x71f3,	// (0x00051ea9) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x71f3,	// (0x00051ea9) vkb2_cell_t_keypad_pane_cp09

0x7207,	// (0x00051ebd) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7207,	// (0x00051ebd) vkb2_cell_t_keypad_pane_cp01

0x7218,	// (0x00051ece) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7218,	// (0x00051ece) vkb2_cell_t_keypad_pane_cp02

0x7229,	// (0x00051edf) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7229,	// (0x00051edf) vkb2_cell_t_keypad_pane_cp03

0x723a,	// (0x00051ef0) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x723a,	// (0x00051ef0) vkb2_cell_t_keypad_pane_cp04

0x724b,	// (0x00051f01) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x724b,	// (0x00051f01) vkb2_cell_t_keypad_pane_cp05

0x725c,	// (0x00051f12) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x725c,	// (0x00051f12) vkb2_cell_t_keypad_pane_cp06

0x726d,	// (0x00051f23) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x726d,	// (0x00051f23) vkb2_cell_t_keypad_pane_cp07

0x727e,	// (0x00051f34) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x727e,	// (0x00051f34) vkb2_cell_t_keypad_pane_cp10

0x6a34,	// (0x000516ea) vkb2_cell_t_keypad_pane_g1

0xe27b,	// (0x00058f31) vkb2_cell_t_keypad_pane_t1

0x4a27,	// (0x0004f6dd) popup_grid_graphic2_window

0xe28d,	// (0x00058f43) aid_size_cell_graphic2_ParamLimits

0xe28d,	// (0x00058f43) aid_size_cell_graphic2

0xe2c5,	// (0x00058f7b) bg_popup_window_pane_cp21_ParamLimits

0xe2c5,	// (0x00058f7b) bg_popup_window_pane_cp21

0xe2d3,	// (0x00058f89) graphic2_pages_pane_ParamLimits

0xe2d3,	// (0x00058f89) graphic2_pages_pane

0xe319,	// (0x00058fcf) grid_graphic2_control_pane_ParamLimits

0xe319,	// (0x00058fcf) grid_graphic2_control_pane

0xe357,	// (0x0005900d) grid_graphic2_pane_ParamLimits

0xe357,	// (0x0005900d) grid_graphic2_pane

0xe3cb,	// (0x00059081) cell_graphic2_pane

0x4a27,	// (0x0004f6dd) main_comp_mode_pane

0xd50b,	// (0x000581c1) list_ai3_gene_pane_ParamLimits

0xd8d5,	// (0x0005858b) bg_popup_window_pane_cp19_ParamLimits

0xd8e1,	// (0x00058597) bg_touch_area_indi_pane_ParamLimits

0xd8e1,	// (0x00058597) bg_touch_area_indi_pane

0xd8f7,	// (0x000585ad) bg_touch_area_indi_pane_cp01_ParamLimits

0xd8f7,	// (0x000585ad) bg_touch_area_indi_pane_cp01

0xd90d,	// (0x000585c3) bg_touch_area_indi_pane_cp02_ParamLimits

0xd90d,	// (0x000585c3) bg_touch_area_indi_pane_cp02

0xd925,	// (0x000585db) bg_touch_area_indi_pane_cp03_ParamLimits

0xd925,	// (0x000585db) bg_touch_area_indi_pane_cp03

0xd93f,	// (0x000585f5) popup_slider_window_g1_ParamLimits

0xd95b,	// (0x00058611) popup_slider_window_g2_ParamLimits

0xd977,	// (0x0005862d) popup_slider_window_g3_ParamLimits

0xfceb,	// (0x0005a9a1) popup_slider_window_g_ParamLimits

0xd9d3,	// (0x00058689) popup_slider_window_t1_ParamLimits

0xda47,	// (0x000586fd) small_volume_slider_vertical_pane_ParamLimits

0xe3cb,	// (0x00059081) cell_graphic2_pane_ParamLimits

0xe419,	// (0x000590cf) bg_button_pane_cp10_ParamLimits

0xe419,	// (0x000590cf) bg_button_pane_cp10

0xe42c,	// (0x000590e2) bg_button_pane_cp11_ParamLimits

0xe42c,	// (0x000590e2) bg_button_pane_cp11

0xe43f,	// (0x000590f5) graphic2_pages_pane_g1_ParamLimits

0xe43f,	// (0x000590f5) graphic2_pages_pane_g1

0xe45a,	// (0x00059110) graphic2_pages_pane_g2_ParamLimits

0xe45a,	// (0x00059110) graphic2_pages_pane_g2

0x0001,

0xfdaf,	// (0x0005aa65) graphic2_pages_pane_g_ParamLimits

0xfdaf,	// (0x0005aa65) graphic2_pages_pane_g

0xe472,	// (0x00059128) graphic2_pages_pane_t1_ParamLimits

0xe472,	// (0x00059128) graphic2_pages_pane_t1

0xe48a,	// (0x00059140) cell_graphic2_control_pane_ParamLimits

0xe48a,	// (0x00059140) cell_graphic2_control_pane

0xe4ab,	// (0x00059161) cell_graphic2_pane_g1_ParamLimits

0xe4ab,	// (0x00059161) cell_graphic2_pane_g1

0xe4b8,	// (0x0005916e) cell_graphic2_pane_g2_ParamLimits

0xe4b8,	// (0x0005916e) cell_graphic2_pane_g2

0xe4c5,	// (0x0005917b) cell_graphic2_pane_g3_ParamLimits

0xe4c5,	// (0x0005917b) cell_graphic2_pane_g3

0xe4d2,	// (0x00059188) cell_graphic2_pane_g4_ParamLimits

0xe4d2,	// (0x00059188) cell_graphic2_pane_g4

0xe4df,	// (0x00059195) cell_graphic2_pane_g5_ParamLimits

0xe4df,	// (0x00059195) cell_graphic2_pane_g5

0x0004,

0xfdb4,	// (0x0005aa6a) cell_graphic2_pane_g_ParamLimits

0xfdb4,	// (0x0005aa6a) cell_graphic2_pane_g

0xe4fa,	// (0x000591b0) cell_graphic2_pane_t1_ParamLimits

0xe4fa,	// (0x000591b0) cell_graphic2_pane_t1

0x9ddb,	// (0x00054a91) grid_highlight_pane_cp11_ParamLimits

0x9ddb,	// (0x00054a91) grid_highlight_pane_cp11

0x7baa,	// (0x00052860) bg_button_pane_cp05

0xe523,	// (0x000591d9) cell_graphic2_control_pane_g1

0xc32d,	// (0x00056fe3) bg_touch_area_indi_pane_g1

0xe54b,	// (0x00059201) aid_cmod_rocker_key_size

0xe555,	// (0x0005920b) aid_cmode_itu_key_size

0xe55f,	// (0x00059215) main_cmode_video_pane

0xe569,	// (0x0005921f) main_comp_mode_itu_pane

0xe575,	// (0x0005922b) main_comp_mode_rocker_pane

0xe581,	// (0x00059237) cell_cmode_rocker_pane_ParamLimits

0xe581,	// (0x00059237) cell_cmode_rocker_pane

0xe593,	// (0x00059249) cell_cmode_itu_pane_ParamLimits

0xe593,	// (0x00059249) cell_cmode_itu_pane

0x8899,	// (0x0005354f) bg_button_pane_cp06_ParamLimits

0x8899,	// (0x0005354f) bg_button_pane_cp06

0xc5ab,	// (0x00057261) cell_cmode_rocker_pane_g1_ParamLimits

0xc5ab,	// (0x00057261) cell_cmode_rocker_pane_g1

0xdaeb,	// (0x000587a1) cell_cmode_rocker_pane_g2_ParamLimits

0xdaeb,	// (0x000587a1) cell_cmode_rocker_pane_g2

0x0001,

0xfdc4,	// (0x0005aa7a) cell_cmode_rocker_pane_g_ParamLimits

0xfdc4,	// (0x0005aa7a) cell_cmode_rocker_pane_g

0x782d,	// (0x000524e3) bg_button_pane_cp07

0xe5a8,	// (0x0005925e) cell_cmode_itu_pane_g1

0xe5b1,	// (0x00059267) cell_cmode_itu_pane_t1

0xe5bf,	// (0x00059275) cell_cmode_itu_pane_t2

0x0001,

0xfdc9,	// (0x0005aa7f) cell_cmode_itu_pane_t

0xdd0e,	// (0x000589c4) aid_touch_ctrl_left

0xdd16,	// (0x000589cc) aid_touch_ctrl_right

0x782d,	// (0x000524e3) compa_mode_pane

0xe5cd,	// (0x00059283) aid_cmod_rocker_key_size_cp

0xe5d7,	// (0x0005928d) aid_cmode_itu_key_size_cp

0xe5e1,	// (0x00059297) compa_mode_pane_g1

0xe5e9,	// (0x0005929f) compa_mode_pane_g2

0xe5f1,	// (0x000592a7) compa_mode_pane_g3

0x0002,

0xfdce,	// (0x0005aa84) compa_mode_pane_g

0xe5f9,	// (0x000592af) main_comp_mode_itu_pane_cp

0xe601,	// (0x000592b7) main_comp_mode_rocker_pane_cp

0xe609,	// (0x000592bf) cell_cmode_itu_pane_cp_ParamLimits

0xe609,	// (0x000592bf) cell_cmode_itu_pane_cp

0xe61e,	// (0x000592d4) cell_cmode_rocker_pane_cp_ParamLimits

0xe61e,	// (0x000592d4) cell_cmode_rocker_pane_cp

0x8899,	// (0x0005354f) bg_button_pane_cp06_cp_ParamLimits

0x8899,	// (0x0005354f) bg_button_pane_cp06_cp

0xc5ab,	// (0x00057261) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc5ab,	// (0x00057261) cell_cmode_rocker_pane_g1_cp

0xc32d,	// (0x00056fe3) cell_cmode_rocker_pane_g2_cp

0x782d,	// (0x000524e3) bg_button_pane_cp07_cp

0xb2ac,	// (0x00055f62) cell_cmode_itu_pane_g1_cp

0xe630,	// (0x000592e6) cell_cmode_itu_pane_t1_cp

0xe630,	// (0x000592e6) cell_cmode_itu_pane_t2_cp

0xb299,	// (0x00055f4f) settings_code_pane_cp2

0x7921,	// (0x000525d7) bg_popup_window_pane_cp3_ParamLimits

0x8481,	// (0x00053137) heading_pane_cp3_ParamLimits

0x848d,	// (0x00053143) listscroll_popup_graphic_pane_ParamLimits

0x67dd,	// (0x00051493) fep_hwr_aid_pane_ParamLimits

0x6c54,	// (0x0005190a) aid_touch_sctrl_top_ParamLimits

0x6c6f,	// (0x00051925) sctrl_sk_top_pane_g1_ParamLimits

0x6a34,	// (0x000516ea) sctrl_sk_top_pane_g2_ParamLimits

0xfd04,	// (0x0005a9ba) sctrl_sk_top_pane_g_ParamLimits

0x6c7c,	// (0x00051932) sctrl_sk_top_pane_t1_ParamLimits

0x6c54,	// (0x0005190a) aid_touch_sctrl_bottom_ParamLimits

0x6c7c,	// (0x00051932) sctrl_sk_bottom_pane_t1_ParamLimits

0xdc57,	// (0x0005890d) aid_area_touch_clock

0x6e65,	// (0x00051b1b) aid_vkb2_area_top_pane_cell_ParamLimits

0x6e65,	// (0x00051b1b) aid_vkb2_area_top_pane_cell

0x6fb0,	// (0x00051c66) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6fb0,	// (0x00051c66) aid_vkb2_area_bottom_pane_cell

0xe1c6,	// (0x00058e7c) popup_char_count_window

0xe63e,	// (0x000592f4) popup_char_count_window_g1

0xe647,	// (0x000592fd) popup_char_count_window_g2

0xe650,	// (0x00059306) popup_char_count_window_g3

0x0002,

0xfdd5,	// (0x0005aa8b) popup_char_count_window_g

0xe659,	// (0x0005930f) popup_char_count_window_t1

0x6d2b,	// (0x000519e1) popup_fep_char_preview_window_ParamLimits

0x6d2b,	// (0x000519e1) popup_fep_char_preview_window

0x6e83,	// (0x00051b39) vkb2_top_candi_pane_ParamLimits

0x6e83,	// (0x00051b39) vkb2_top_candi_pane

0xe667,	// (0x0005931d) cell_vkb2_top_candi_pane_ParamLimits

0xe667,	// (0x0005931d) cell_vkb2_top_candi_pane

0x7293,	// (0x00051f49) bg_popup_fep_char_preview_window_ParamLimits

0x7293,	// (0x00051f49) bg_popup_fep_char_preview_window

0x72a1,	// (0x00051f57) popup_fep_char_preview_window_t1_ParamLimits

0x72a1,	// (0x00051f57) popup_fep_char_preview_window_t1

0xe6b4,	// (0x0005936a) bg_popup_fep_char_preview_window_g1

0xe6bc,	// (0x00059372) bg_popup_fep_char_preview_window_g2

0xe6c4,	// (0x0005937a) bg_popup_fep_char_preview_window_g3

0xe6cc,	// (0x00059382) bg_popup_fep_char_preview_window_g4

0xe6d4,	// (0x0005938a) bg_popup_fep_char_preview_window_g5

0x72db,	// (0x00051f91) bg_popup_fep_char_preview_window_g6

0xe6dc,	// (0x00059392) bg_popup_fep_char_preview_window_g7

0xe6e4,	// (0x0005939a) bg_popup_fep_char_preview_window_g8

0xe6ec,	// (0x000593a2) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddc,	// (0x0005aa92) bg_popup_fep_char_preview_window_g

0x6a34,	// (0x000516ea) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6a34,	// (0x000516ea) cell_vkb2_top_candi_pane_g1

0x6a42,	// (0x000516f8) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6a42,	// (0x000516f8) cell_vkb2_top_candi_pane_g2

0xd47e,	// (0x00058134) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd47e,	// (0x00058134) cell_vkb2_top_candi_pane_g3

0x72e3,	// (0x00051f99) cell_vkb2_top_candi_pane_g4_ParamLimits

0x72e3,	// (0x00051f99) cell_vkb2_top_candi_pane_g4

0xca82,	// (0x00057738) cell_vkb2_top_candi_pane_g5_ParamLimits

0xca82,	// (0x00057738) cell_vkb2_top_candi_pane_g5

0x7304,	// (0x00051fba) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7304,	// (0x00051fba) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdef,	// (0x0005aaa5) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdef,	// (0x0005aaa5) cell_vkb2_top_candi_pane_g

0x7312,	// (0x00051fc8) cell_vkb2_top_candi_pane_t1

0x6428,	// (0x000510de) aid_size_touch_slider_mark_ParamLimits

0x6428,	// (0x000510de) aid_size_touch_slider_mark

0xe309,	// (0x00058fbf) grid_graphic2_catg_pane_ParamLimits

0xe309,	// (0x00058fbf) grid_graphic2_catg_pane

0xe3a7,	// (0x0005905d) popup_grid_graphic2_window_t1_ParamLimits

0xe3a7,	// (0x0005905d) popup_grid_graphic2_window_t1

0xe3b9,	// (0x0005906f) popup_grid_graphic2_window_t2_ParamLimits

0xe3b9,	// (0x0005906f) popup_grid_graphic2_window_t2

0x0001,

0xfdaa,	// (0x0005aa60) popup_grid_graphic2_window_t_ParamLimits

0xfdaa,	// (0x0005aa60) popup_grid_graphic2_window_t

0x7baa,	// (0x00052860) bg_button_pane_cp05_ParamLimits

0xe523,	// (0x000591d9) cell_graphic2_control_pane_g1_ParamLimits

0xe6f4,	// (0x000593aa) cell_graphic2_catg_pane_ParamLimits

0xe6f4,	// (0x000593aa) cell_graphic2_catg_pane

0x782d,	// (0x000524e3) bg_button_pane_cp12

0xe706,	// (0x000593bc) cell_graphic2_catg_pane_g1

0xdc23,	// (0x000588d9) cell_tb_ext_pane_t1_ParamLimits

0x70cd,	// (0x00051d83) vkb2_top_cell_right_narrow_pane_ParamLimits

0x70cd,	// (0x00051d83) vkb2_top_cell_right_narrow_pane

0x70e5,	// (0x00051d9b) vkb2_top_cell_right_wide_pane_ParamLimits

0x70e5,	// (0x00051d9b) vkb2_top_cell_right_wide_pane

0x67cf,	// (0x00051485) bg_vkb2_func_pane_ParamLimits

0x67cf,	// (0x00051485) bg_vkb2_func_pane

0x7156,	// (0x00051e0c) vkb2_top_cell_left_pane_g1_ParamLimits

0x67cf,	// (0x00051485) bg_vkb2_fuc_pane_cp03_ParamLimits

0x67cf,	// (0x00051485) bg_vkb2_fuc_pane_cp03

0x71b4,	// (0x00051e6a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9d6f,	// (0x00054a25) bg_vkb2_func_pane_g1

0x9d77,	// (0x00054a2d) bg_vkb2_func_pane_g2

0x9d87,	// (0x00054a3d) bg_vkb2_func_pane_g3

0x9d7f,	// (0x00054a35) bg_vkb2_func_pane_g4

0x9d8f,	// (0x00054a45) bg_vkb2_func_pane_g5

0x9d97,	// (0x00054a4d) bg_vkb2_func_pane_g6

0x9d9f,	// (0x00054a55) bg_vkb2_func_pane_g7

0x9da7,	// (0x00054a5d) bg_vkb2_func_pane_g8

0x9d67,	// (0x00054a1d) bg_vkb2_func_pane_g9

0x0008,

0xfdfc,	// (0x0005aab2) bg_vkb2_func_pane_g

0x67cf,	// (0x00051485) bg_vkb2_fuc_pane_cp01_ParamLimits

0x67cf,	// (0x00051485) bg_vkb2_fuc_pane_cp01

0x7156,	// (0x00051e0c) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7156,	// (0x00051e0c) vkb2_top_cell_right_wide_pane_g1

0x67cf,	// (0x00051485) bg_vkb2_fuc_pane_cp02_ParamLimits

0x67cf,	// (0x00051485) bg_vkb2_fuc_pane_cp02

0x71b4,	// (0x00051e6a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x71b4,	// (0x00051e6a) vkb2_top_cell_right_narrow_pane_g1

0xd859,	// (0x0005850f) aid_touch_area_decrease_ParamLimits

0xd859,	// (0x0005850f) aid_touch_area_decrease

0xd877,	// (0x0005852d) aid_touch_area_increase_ParamLimits

0xd877,	// (0x0005852d) aid_touch_area_increase

0xd883,	// (0x00058539) aid_touch_area_mute_ParamLimits

0xd883,	// (0x00058539) aid_touch_area_mute

0xd8a7,	// (0x0005855d) aid_touch_area_slider_ParamLimits

0xd8a7,	// (0x0005855d) aid_touch_area_slider

0xd993,	// (0x00058649) popup_slider_window_g4_ParamLimits

0xd993,	// (0x00058649) popup_slider_window_g4

0xd99f,	// (0x00058655) popup_slider_window_g5_ParamLimits

0xd99f,	// (0x00058655) popup_slider_window_g5

0xd9c1,	// (0x00058677) popup_slider_window_g6_ParamLimits

0xd9c1,	// (0x00058677) popup_slider_window_g6

0xda01,	// (0x000586b7) popup_slider_window_t2_ParamLimits

0xda01,	// (0x000586b7) popup_slider_window_t2

0x0001,

0xfcf8,	// (0x0005a9ae) popup_slider_window_t_ParamLimits

0xfcf8,	// (0x0005a9ae) popup_slider_window_t

0xda19,	// (0x000586cf) slider_pane_ParamLimits

0xda19,	// (0x000586cf) slider_pane

0xe70f,	// (0x000593c5) slider_pane_g1_ParamLimits

0xe70f,	// (0x000593c5) slider_pane_g1

0xe723,	// (0x000593d9) slider_pane_g2_ParamLimits

0xe723,	// (0x000593d9) slider_pane_g2

0xe739,	// (0x000593ef) slider_pane_g3_ParamLimits

0xe739,	// (0x000593ef) slider_pane_g3

0x0003,

0xfe0f,	// (0x0005aac5) slider_pane_g_ParamLimits

0xfe0f,	// (0x0005aac5) slider_pane_g

0x5f2b,	// (0x00050be1) popup_tb_float_extension_window_ParamLimits

0x5f2b,	// (0x00050be1) popup_tb_float_extension_window

0xe765,	// (0x0005941b) aid_size_cell_tb_float_ext

0x782d,	// (0x000524e3) bg_popup_sub_window_cp28

0xe771,	// (0x00059427) grid_tb_float_ext_pane

0xe77b,	// (0x00059431) cell_tb_float_ext_pane_ParamLimits

0xe77b,	// (0x00059431) cell_tb_float_ext_pane

0xe795,	// (0x0005944b) cell_tb_float_ext_pane_g1

0xe79e,	// (0x00059454) grid_highlight_pane_cp12

0x691e,	// (0x000515d4) cell_last_hwr_side_pane_ParamLimits

0x691e,	// (0x000515d4) cell_last_hwr_side_pane

0xc32d,	// (0x00056fe3) cell_last_hwr_side_pane_g1

0xe7a7,	// (0x0005945d) cell_last_hwr_side_pane_g2

0x0001,

0xfe18,	// (0x0005aace) cell_last_hwr_side_pane_g

0x707c,	// (0x00051d32) vkb2_area_bottom_space_btn_pane_ParamLimits

0x707c,	// (0x00051d32) vkb2_area_bottom_space_btn_pane

0x6a34,	// (0x000516ea) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe27b,	// (0x00058f31) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7312,	// (0x00051fc8) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7331,	// (0x00051fe7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7331,	// (0x00051fe7) vkb2_area_bottom_space_btn_pane_g1

0x736b,	// (0x00052021) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x736b,	// (0x00052021) vkb2_area_bottom_space_btn_pane_g2

0x73a1,	// (0x00052057) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x73a1,	// (0x00052057) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1d,	// (0x0005aad3) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1d,	// (0x0005aad3) vkb2_area_bottom_space_btn_pane_g

0x6892,	// (0x00051548) cel_fep_hwr_func_pane_ParamLimits

0x6892,	// (0x00051548) cel_fep_hwr_func_pane

0x68ce,	// (0x00051584) cell_hwr_side_button_pane_ParamLimits

0x68ce,	// (0x00051584) cell_hwr_side_button_pane

0xdc57,	// (0x0005890d) aid_area_touch_clock_ParamLimits

0x7baa,	// (0x00052860) bg_uniindi_top_pane_ParamLimits

0xdc69,	// (0x0005891f) uniindi_top_pane_g1_ParamLimits

0xdc7f,	// (0x00058935) uniindi_top_pane_g2_ParamLimits

0xdc8b,	// (0x00058941) uniindi_top_pane_g3_ParamLimits

0xdc9c,	// (0x00058952) uniindi_top_pane_g4_ParamLimits

0xfd30,	// (0x0005a9e6) uniindi_top_pane_g_ParamLimits

0xdca9,	// (0x0005895f) uniindi_top_pane_t1_ParamLimits

0x7baa,	// (0x00052860) bg_vkb2_func_pane_cp01_ParamLimits

0x7baa,	// (0x00052860) bg_vkb2_func_pane_cp01

0xe7b0,	// (0x00059466) cel_fep_hwr_func_pane_g1_ParamLimits

0xe7b0,	// (0x00059466) cel_fep_hwr_func_pane_g1

0x7baa,	// (0x00052860) bg_vkb2_func_pane_cp02_ParamLimits

0x7baa,	// (0x00052860) bg_vkb2_func_pane_cp02

0xe7b0,	// (0x00059466) cell_hwr_side_button_pane_g1_ParamLimits

0xe7b0,	// (0x00059466) cell_hwr_side_button_pane_g1

0x9be8,	// (0x0005489e) status_pane_g4_ParamLimits

0x9be8,	// (0x0005489e) status_pane_g4

0x9c02,	// (0x000548b8) status_pane_t1

0xc067,	// (0x00056d1d) form2_midp_gauge_slider_cont_pane

0xc06f,	// (0x00056d25) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc081,	// (0x00056d37) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc093,	// (0x00056d49) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf0,	// (0x0005a7a6) form2_midp_gauge_slider_pane_t_ParamLimits

0xc0a5,	// (0x00056d5b) form2_midp_slider_pane_ParamLimits

0x6ceb,	// (0x000519a1) aid_size_cell_func_vkb2_ParamLimits

0x6ceb,	// (0x000519a1) aid_size_cell_func_vkb2

0xe751,	// (0x00059407) slider_pane_g4_ParamLimits

0xe751,	// (0x00059407) slider_pane_g4

0x73eb,	// (0x000520a1) form2_midp_gauge_slider_pane_t2_cp01

0x73f9,	// (0x000520af) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x73f9,	// (0x000520af) form2_midp_gauge_slider_pane_t3_cp01

0x7416,	// (0x000520cc) form2_midp_slider_pane_cp01

0x782d,	// (0x000524e3) navi_smil_pane

0xe7e9,	// (0x0005949f) navi_smil_pane_g1

0xe7f1,	// (0x000594a7) navi_smil_pane_t1

0xe7be,	// (0x00059474) form2_midp_slider_pane_g1

0xe7c7,	// (0x0005947d) form2_midp_slider_pane_g2

0xe7cf,	// (0x00059485) form2_midp_slider_pane_g3

0xe7be,	// (0x00059474) form2_midp_slider_pane_g4

0xe7d7,	// (0x0005948d) form2_midp_slider_pane_g5

0x0004,

0xfe26,	// (0x0005aadc) form2_midp_slider_pane_g

0x73db,	// (0x00052091) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x73db,	// (0x00052091) vkb2_area_bottom_space_btn_pane_g4

0x9a17,	// (0x000546cd) lc0_navi_pane_ParamLimits

0x9a17,	// (0x000546cd) lc0_navi_pane

0x9a8d,	// (0x00054743) lc0_stat_indi_pane_ParamLimits

0x9a8d,	// (0x00054743) lc0_stat_indi_pane

0x9aa4,	// (0x0005475a) ls0_title_pane_ParamLimits

0x9aa4,	// (0x0005475a) ls0_title_pane

0x8899,	// (0x0005354f) bg_popup_sub_pane_cp14_ParamLimits

0xdc3e,	// (0x000588f4) list_uniindi_pane_ParamLimits

0xdc4a,	// (0x00058900) uniindi_top_pane_ParamLimits

0xdce6,	// (0x0005899c) list_single_uniindi_pane_g1_ParamLimits

0xdcf9,	// (0x000589af) list_single_uniindi_pane_t1_ParamLimits

0x741f,	// (0x000520d5) lc0_stat_clock_pane_ParamLimits

0x741f,	// (0x000520d5) lc0_stat_clock_pane

0xe7ff,	// (0x000594b5) lc0_stat_indi_pane_g1_ParamLimits

0xe7ff,	// (0x000594b5) lc0_stat_indi_pane_g1

0xe80c,	// (0x000594c2) lc0_stat_indi_pane_g2_ParamLimits

0xe80c,	// (0x000594c2) lc0_stat_indi_pane_g2

0x0001,

0xfe31,	// (0x0005aae7) lc0_stat_indi_pane_g_ParamLimits

0xfe31,	// (0x0005aae7) lc0_stat_indi_pane_g

0x742c,	// (0x000520e2) lc0_uni_indicator_pane_ParamLimits

0x742c,	// (0x000520e2) lc0_uni_indicator_pane

0xe819,	// (0x000594cf) ls0_title_pane_g1_ParamLimits

0xe819,	// (0x000594cf) ls0_title_pane_g1

0xe82d,	// (0x000594e3) ls0_title_pane_t1_ParamLimits

0xe82d,	// (0x000594e3) ls0_title_pane_t1

0x7439,	// (0x000520ef) lc0_uni_indicator_pane_g1_ParamLimits

0x7439,	// (0x000520ef) lc0_uni_indicator_pane_g1

0xe863,	// (0x00059519) lc0_stat_clock_pane_t1

0x4a27,	// (0x0004f6dd) main_ai5_pane

0xe871,	// (0x00059527) ai5_sk_pane_ParamLimits

0xe871,	// (0x00059527) ai5_sk_pane

0xe87e,	// (0x00059534) cell_ai5_widget_pane_ParamLimits

0xe87e,	// (0x00059534) cell_ai5_widget_pane

0xe934,	// (0x000595ea) aid_size_cell_widget_grid

0xe94a,	// (0x00059600) bg_ai5_widget_pane_ParamLimits

0xe94a,	// (0x00059600) bg_ai5_widget_pane

0xe9be,	// (0x00059674) cell_ai5_widget_pane_g2

0xe9ce,	// (0x00059684) cell_ai5_widget_pane_g3

0xe9e5,	// (0x0005969b) cell_ai5_widget_pane_g4

0xe9f1,	// (0x000596a7) cell_ai5_widget_pane_g5

0xe9fd,	// (0x000596b3) cell_ai5_widget_pane_g6

0xea09,	// (0x000596bf) cell_ai5_widget_pane_g7

0xea51,	// (0x00059707) cell_ai5_widget_pane_t1_ParamLimits

0xea51,	// (0x00059707) cell_ai5_widget_pane_t1

0xea6e,	// (0x00059724) cell_ai5_widget_pane_t2_ParamLimits

0xea6e,	// (0x00059724) cell_ai5_widget_pane_t2

0xea86,	// (0x0005973c) cell_ai5_widget_pane_t3_ParamLimits

0xea86,	// (0x0005973c) cell_ai5_widget_pane_t3

0xea9e,	// (0x00059754) cell_ai5_widget_pane_t4_ParamLimits

0xea9e,	// (0x00059754) cell_ai5_widget_pane_t4

0xeabb,	// (0x00059771) cell_ai5_widget_pane_t5_ParamLimits

0xeabb,	// (0x00059771) cell_ai5_widget_pane_t5

0xeada,	// (0x00059790) cell_ai5_widget_pane_t6_ParamLimits

0xeada,	// (0x00059790) cell_ai5_widget_pane_t6

0xeaec,	// (0x000597a2) cell_ai5_widget_pane_t7_ParamLimits

0xeaec,	// (0x000597a2) cell_ai5_widget_pane_t7

0xeb05,	// (0x000597bb) cell_ai5_widget_pane_t8_ParamLimits

0xeb05,	// (0x000597bb) cell_ai5_widget_pane_t8

0x0009,

0xfe4b,	// (0x0005ab01) cell_ai5_widget_pane_t_ParamLimits

0xfe4b,	// (0x0005ab01) cell_ai5_widget_pane_t

0xeb59,	// (0x0005980f) grid_ai5_widget_pane

0x8899,	// (0x0005354f) highlight_cell_ai5_widget_pane_ParamLimits

0x8899,	// (0x0005354f) highlight_cell_ai5_widget_pane

0xeb70,	// (0x00059826) ai5_sk_left_pane

0xeb7a,	// (0x00059830) ai5_sk_middle_pane

0xeb84,	// (0x0005983a) ai5_sk_right_pane

0xeb8e,	// (0x00059844) bg_ai5_widget_pane_g1_ParamLimits

0xeb8e,	// (0x00059844) bg_ai5_widget_pane_g1

0xeb9a,	// (0x00059850) bg_ai5_widget_pane_g2_ParamLimits

0xeb9a,	// (0x00059850) bg_ai5_widget_pane_g2

0xeba6,	// (0x0005985c) bg_ai5_widget_pane_g3_ParamLimits

0xeba6,	// (0x0005985c) bg_ai5_widget_pane_g3

0xebb2,	// (0x00059868) bg_ai5_widget_pane_g4_ParamLimits

0xebb2,	// (0x00059868) bg_ai5_widget_pane_g4

0xebbe,	// (0x00059874) bg_ai5_widget_pane_g5_ParamLimits

0xebbe,	// (0x00059874) bg_ai5_widget_pane_g5

0xebca,	// (0x00059880) bg_ai5_widget_pane_g6_ParamLimits

0xebca,	// (0x00059880) bg_ai5_widget_pane_g6

0xebd6,	// (0x0005988c) bg_ai5_widget_pane_g7_ParamLimits

0xebd6,	// (0x0005988c) bg_ai5_widget_pane_g7

0xebe2,	// (0x00059898) bg_ai5_widget_pane_g8_ParamLimits

0xebe2,	// (0x00059898) bg_ai5_widget_pane_g8

0xebee,	// (0x000598a4) bg_ai5_widget_pane_g9_ParamLimits

0xebee,	// (0x000598a4) bg_ai5_widget_pane_g9

0x0008,

0xfe60,	// (0x0005ab16) bg_ai5_widget_pane_g_ParamLimits

0xfe60,	// (0x0005ab16) bg_ai5_widget_pane_g

0xec20,	// (0x000598d6) cell_shortcut_ai5_widget_pane_ParamLimits

0xec20,	// (0x000598d6) cell_shortcut_ai5_widget_pane

0x951f,	// (0x000541d5) bg_cell_shortcut_ai5_widget_pane

0xec31,	// (0x000598e7) cell_grid_ai5_widget_pane_g1

0x951f,	// (0x000541d5) highlight_cell_shortcut_ai5_widget_pane

0x9d6f,	// (0x00054a25) ai5_sk_left_pane_g1

0xec3a,	// (0x000598f0) ai5_sk_left_pane_g2

0xec42,	// (0x000598f8) ai5_sk_left_pane_g3

0xec4a,	// (0x00059900) ai5_sk_left_pane_g4

0x0003,

0xfe73,	// (0x0005ab29) ai5_sk_left_pane_g

0xec52,	// (0x00059908) ai5_sk_left_pane_t1

0x9d77,	// (0x00054a2d) ai5_sk_right_pane_g1

0xec60,	// (0x00059916) ai5_sk_right_pane_g2

0xec68,	// (0x0005991e) ai5_sk_right_pane_g3

0xec70,	// (0x00059926) ai5_sk_right_pane_g4

0x0003,

0xfe7c,	// (0x0005ab32) ai5_sk_right_pane_g

0xec78,	// (0x0005992e) ai5_sk_right_pane_t1

0x9d77,	// (0x00054a2d) ai5_sk_middle_pane_g1

0x9d6f,	// (0x00054a25) ai5_sk_middle_pane_g2

0x9d8f,	// (0x00054a45) ai5_sk_middle_pane_g3

0xec68,	// (0x0005991e) ai5_sk_middle_pane_g4

0xec42,	// (0x000598f8) ai5_sk_middle_pane_g5

0xec86,	// (0x0005993c) ai5_sk_middle_pane_g6

0xec8e,	// (0x00059944) ai5_sk_middle_pane_g7

0x0006,

0xfe85,	// (0x0005ab3b) ai5_sk_middle_pane_g

0x98a3,	// (0x00054559) aid_touch_area_size_lc0_ParamLimits

0x98a3,	// (0x00054559) aid_touch_area_size_lc0

0x6a63,	// (0x00051719) cell_hwr_candidate_pane_t1_ParamLimits

0x98bf,	// (0x00054575) aid_touch_navi_pane

0x9b92,	// (0x00054848) status_dt_navi_pane_ParamLimits

0x9b92,	// (0x00054848) status_dt_navi_pane

0x9b9f,	// (0x00054855) status_dt_sta_pane_ParamLimits

0x9b9f,	// (0x00054855) status_dt_sta_pane

0xec96,	// (0x0005994c) dt_sta_controll_pane

0xeca3,	// (0x00059959) dt_sta_indi_pane

0xecb4,	// (0x0005996a) dt_sta_title_pane

0x7baa,	// (0x00052860) bg_dt_sta_indi_pane_ParamLimits

0x7baa,	// (0x00052860) bg_dt_sta_indi_pane

0xecc7,	// (0x0005997d) dt_sta_battery_pane

0xeccf,	// (0x00059985) dt_sta_indi_pane_g1

0xecd8,	// (0x0005998e) dt_sta_indi_pane_g2

0xece1,	// (0x00059997) dt_sta_indi_pane_g3

0x0002,

0xfe94,	// (0x0005ab4a) dt_sta_indi_pane_g

0xecea,	// (0x000599a0) dt_sta_signal_pane

0x8899,	// (0x0005354f) bg_dt_sta_title_pane_ParamLimits

0x8899,	// (0x0005354f) bg_dt_sta_title_pane

0xecf3,	// (0x000599a9) dt_sta_title_pane_g1

0xecfb,	// (0x000599b1) dt_sta_title_pane_t1_ParamLimits

0xecfb,	// (0x000599b1) dt_sta_title_pane_t1

0x782d,	// (0x000524e3) bg_dt_sta_control_pane

0xed10,	// (0x000599c6) dt_sta_controll_pane_g1

0xed19,	// (0x000599cf) bg_dt_sta_title_pane_g1

0xed22,	// (0x000599d8) bg_dt_sta_title_pane_g2

0xed2b,	// (0x000599e1) bg_dt_sta_title_pane_g3

0x0002,

0xfe9b,	// (0x0005ab51) bg_dt_sta_title_pane_g

0xc32d,	// (0x00056fe3) bg_dt_sta_indi_pane_g1

0xed34,	// (0x000599ea) dt_sta_signal_pane_g1

0xed3c,	// (0x000599f2) dt_sta_signal_pane_g2

0x0001,

0xfea2,	// (0x0005ab58) dt_sta_signal_pane_g

0xed44,	// (0x000599fa) dt_sta_battery_pane_g1

0xed4d,	// (0x00059a03) dt_sta_battery_pane_t1

0xc32d,	// (0x00056fe3) bg_dt_sta_control_pane_g1

0x901e,	// (0x00053cd4) fep_china_uni_eep_pane

0x9026,	// (0x00053cdc) fep_china_uni_entry_pane_ParamLimits

0x9036,	// (0x00053cec) popup_fep_china_uni_window_g1_ParamLimits

0x9046,	// (0x00053cfc) popup_fep_china_uni_window_g2_ParamLimits

0x9046,	// (0x00053cfc) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0005a3d8) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0005a3d8) popup_fep_china_uni_window_g

0xed5c,	// (0x00059a12) fep_china_uni_eep_pane_g1

0xed64,	// (0x00059a1a) fep_china_uni_eep_pane_t1

0xe7e0,	// (0x00059496) aid_touch_area_size_smil_player

0x9a0f,	// (0x000546c5) lc0_clock_pane

0x9bf6,	// (0x000548ac) status_pane_g5_ParamLimits

0x9bf6,	// (0x000548ac) status_pane_g5

0x5bf0,	// (0x000508a6) popup_keymap_window

0x9bb4,	// (0x0005486a) status_icon_pane

0xe9ce,	// (0x00059684) cell_ai5_widget_pane_g3_ParamLimits

0xe9e5,	// (0x0005969b) cell_ai5_widget_pane_g4_ParamLimits

0xe9f1,	// (0x000596a7) cell_ai5_widget_pane_g5_ParamLimits

0xea15,	// (0x000596cb) cell_ai5_widget_pane_g8_ParamLimits

0xea15,	// (0x000596cb) cell_ai5_widget_pane_g8

0xea29,	// (0x000596df) cell_ai5_widget_pane_g9_ParamLimits

0xea29,	// (0x000596df) cell_ai5_widget_pane_g9

0xea3d,	// (0x000596f3) cell_ai5_widget_pane_g10_ParamLimits

0xea3d,	// (0x000596f3) cell_ai5_widget_pane_g10

0xed73,	// (0x00059a29) status_icon_pane_g1

0x782d,	// (0x000524e3) bg_popup_sub_pane_cp13

0xed7b,	// (0x00059a31) popup_keymap_window_t1

0x97e8,	// (0x0005449e) control_pane_g6_ParamLimits

0x97e8,	// (0x0005449e) control_pane_g6

0x97f5,	// (0x000544ab) control_pane_g7_ParamLimits

0x97f5,	// (0x000544ab) control_pane_g7

0x9802,	// (0x000544b8) control_pane_g8_ParamLimits

0x9802,	// (0x000544b8) control_pane_g8

0xec96,	// (0x0005994c) dt_sta_controll_pane_ParamLimits

0xeca3,	// (0x00059959) dt_sta_indi_pane_ParamLimits

0xecb4,	// (0x0005996a) dt_sta_title_pane_ParamLimits

0x87c5,	// (0x0005347b) aid_size_touch_scroll_bar_cale

0x4b00,	// (0x0004f7b6) popup_discreet_window_ParamLimits

0x4b00,	// (0x0004f7b6) popup_discreet_window

0x4b88,	// (0x0004f83e) popup_sk_window

0xa3e0,	// (0x00055096) bg_popup_sub_pane_cp28_ParamLimits

0xa3e0,	// (0x00055096) bg_popup_sub_pane_cp28

0xed89,	// (0x00059a3f) popup_discreet_window_g1_ParamLimits

0xed89,	// (0x00059a3f) popup_discreet_window_g1

0xeda9,	// (0x00059a5f) popup_discreet_window_t1_ParamLimits

0xeda9,	// (0x00059a5f) popup_discreet_window_t1

0xedc7,	// (0x00059a7d) popup_discreet_window_t2_ParamLimits

0xedc7,	// (0x00059a7d) popup_discreet_window_t2

0x0002,

0xfea7,	// (0x0005ab5d) popup_discreet_window_t_ParamLimits

0xfea7,	// (0x0005ab5d) popup_discreet_window_t

0x744d,	// (0x00052103) popup_sk_window_g1

0x7457,	// (0x0005210d) popup_sk_window_g2

0x0001,

0xfeae,	// (0x0005ab64) popup_sk_window_g

0x7461,	// (0x00052117) popup_sk_window_t1

0x746f,	// (0x00052125) popup_sk_window_t1_copy1

0xe9be,	// (0x00059674) cell_ai5_widget_pane_g2_ParamLimits

0xeb17,	// (0x000597cd) cell_ai5_widget_pane_t9_ParamLimits

0xeb17,	// (0x000597cd) cell_ai5_widget_pane_t9

0x782d,	// (0x000524e3) main_fep_fshwr2_pane

0x747d,	// (0x00052133) aid_fshwr2_btn_pane

0x7489,	// (0x0005213f) aid_fshwr2_syb_pane

0x7495,	// (0x0005214b) aid_fshwr2_txt_pane

0x74a1,	// (0x00052157) fshwr2_func_candi_pane

0x74b6,	// (0x0005216c) fshwr2_hwr_syb_pane

0x74c6,	// (0x0005217c) fshwr2_icf_pane

0x4a27,	// (0x0004f6dd) fshwr2_icf_bg_pane

0x74ef,	// (0x000521a5) fshwr2_icf_pane_t1_ParamLimits

0x74ef,	// (0x000521a5) fshwr2_icf_pane_t1

0x8f0c,	// (0x00053bc2) fshwr2_func_candi_pane_g1

0xee19,	// (0x00059acf) fshwr2_func_candi_row_pane_ParamLimits

0xee19,	// (0x00059acf) fshwr2_func_candi_row_pane

0x7507,	// (0x000521bd) cell_fshwr2_syb_pane_ParamLimits

0x7507,	// (0x000521bd) cell_fshwr2_syb_pane

0x6a34,	// (0x000516ea) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6a34,	// (0x000516ea) fshwr2_hwr_syb_pane_g1

0x4a27,	// (0x0004f6dd) bg_popup_call_pane_cp01

0x751d,	// (0x000521d3) fshwr2_func_candi_cell_pane_ParamLimits

0x751d,	// (0x000521d3) fshwr2_func_candi_cell_pane

0xee29,	// (0x00059adf) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xee29,	// (0x00059adf) fshwr2_func_candi_cell_bg_pane

0x7552,	// (0x00052208) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7552,	// (0x00052208) fshwr2_func_candi_cell_pane_g1

0x757a,	// (0x00052230) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x757a,	// (0x00052230) fshwr2_func_candi_cell_pane_t1

0x4a27,	// (0x0004f6dd) bg_button_pane_cp08

0xee35,	// (0x00059aeb) cell_fshwr2_syb_bg_pane

0x758d,	// (0x00052243) cell_fshwr2_syb_bg_pane_g1

0x7595,	// (0x0005224b) cell_fshwr2_syb_bg_pane_t1

0x8899,	// (0x0005354f) main_tmo_pane

0xaefb,	// (0x00055bb1) uni_indicator_pane_g1_ParamLimits

0xaf11,	// (0x00055bc7) uni_indicator_pane_g2_ParamLimits

0xaf27,	// (0x00055bdd) uni_indicator_pane_g3_ParamLimits

0xaf3b,	// (0x00055bf1) uni_indicator_pane_g4_ParamLimits

0xaf3b,	// (0x00055bf1) uni_indicator_pane_g4

0xaf4f,	// (0x00055c05) uni_indicator_pane_g5_ParamLimits

0xaf4f,	// (0x00055c05) uni_indicator_pane_g5

0xaf4f,	// (0x00055c05) uni_indicator_pane_g6_ParamLimits

0xaf4f,	// (0x00055c05) uni_indicator_pane_g6

0xf926,	// (0x0005a5dc) uni_indicator_pane_g_ParamLimits

0xd835,	// (0x000584eb) popup_tmo_note_window_ParamLimits

0xd835,	// (0x000584eb) popup_tmo_note_window

0x6ccd,	// (0x00051983) fshwr2_bg_pane

0x756b,	// (0x00052221) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x756b,	// (0x00052221) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb3,	// (0x0005ab69) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb3,	// (0x0005ab69) fshwr2_func_candi_cell_pane_g

0x6a1c,	// (0x000516d2) bg_popup_window_pane_cp01

0x75a4,	// (0x0005225a) bg_popup_window_pane_g1_cp01

0xee3d,	// (0x00059af3) bg_popup_window_pane_cp22_ParamLimits

0xee3d,	// (0x00059af3) bg_popup_window_pane_cp22

0xee4b,	// (0x00059b01) listscroll_tmo_link_pane_ParamLimits

0xee4b,	// (0x00059b01) listscroll_tmo_link_pane

0xee8b,	// (0x00059b41) popup_tmo_note_window_g1_ParamLimits

0xee8b,	// (0x00059b41) popup_tmo_note_window_g1

0xee98,	// (0x00059b4e) tmo_note_info_pane_ParamLimits

0xee98,	// (0x00059b4e) tmo_note_info_pane

0xeeb2,	// (0x00059b68) list_tmo_note_info_pane_g1_ParamLimits

0xeeb2,	// (0x00059b68) list_tmo_note_info_pane_g1

0xeec9,	// (0x00059b7f) list_tmo_note_info_pane_g2_ParamLimits

0xeec9,	// (0x00059b7f) list_tmo_note_info_pane_g2

0x0001,

0xfeb8,	// (0x0005ab6e) list_tmo_note_info_pane_g_ParamLimits

0xfeb8,	// (0x0005ab6e) list_tmo_note_info_pane_g

0xeee5,	// (0x00059b9b) list_tmo_note_info_text_pane_ParamLimits

0xeee5,	// (0x00059b9b) list_tmo_note_info_text_pane

0xef66,	// (0x00059c1c) list_tmo_link_pane

0xef73,	// (0x00059c29) scroll_pane_cp20

0xef80,	// (0x00059c36) list_single_tmo_link_pane_ParamLimits

0xef80,	// (0x00059c36) list_single_tmo_link_pane

0xef90,	// (0x00059c46) list_single_tmo_link_pane_t1

0xef9e,	// (0x00059c54) list_tmo_note_info_text_pane_t1_ParamLimits

0xef9e,	// (0x00059c54) list_tmo_note_info_text_pane_t1

0x8947,	// (0x000535fd) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8947,	// (0x000535fd) aid_size_touch_scroll_bar_cp01

0x52c3,	// (0x0004ff79) aid_size_touch_slider_marker

0x4b70,	// (0x0004f826) popup_settings_window_ParamLimits

0x4b70,	// (0x0004f826) popup_settings_window

0x5a75,	// (0x0005072b) popup_candi_list_indi_window

0x98bf,	// (0x00054575) aid_touch_navi_pane_ParamLimits

0x6c28,	// (0x000518de) rs_clock_indi_pane

0x6c31,	// (0x000518e7) sctrl_sk_bottom_pane_ParamLimits

0x6c42,	// (0x000518f8) sctrl_sk_top_pane_ParamLimits

0x6d45,	// (0x000519fb) popup_fep_tooltip_window

0xe934,	// (0x000595ea) aid_size_cell_widget_grid_ParamLimits

0xe9a9,	// (0x0005965f) cell_ai5_widget_pane_g1_ParamLimits

0xe9a9,	// (0x0005965f) cell_ai5_widget_pane_g1

0xe9fd,	// (0x000596b3) cell_ai5_widget_pane_g6_ParamLimits

0xea09,	// (0x000596bf) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe36,	// (0x0005aaec) cell_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x0005aaec) cell_ai5_widget_pane_g

0xeb3b,	// (0x000597f1) cell_ai5_widget_pane_t10_ParamLimits

0xeb3b,	// (0x000597f1) cell_ai5_widget_pane_t10

0xeb59,	// (0x0005980f) grid_ai5_widget_pane_ParamLimits

0xebfa,	// (0x000598b0) cell_contacts_ai5_widget_pane_ParamLimits

0xebfa,	// (0x000598b0) cell_contacts_ai5_widget_pane

0xeddc,	// (0x00059a92) popup_discreet_window_t3_ParamLimits

0xeddc,	// (0x00059a92) popup_discreet_window_t3

0x74db,	// (0x00052191) popup_fshwr2_char_preview_window_ParamLimits

0x74db,	// (0x00052191) popup_fshwr2_char_preview_window

0xef03,	// (0x00059bb9) tmo_note_info_pane_t1

0xef18,	// (0x00059bce) tmo_note_info_pane_t2

0xef2d,	// (0x00059be3) tmo_note_info_pane_t3

0xef42,	// (0x00059bf8) tmo_note_info_pane_t4

0xef54,	// (0x00059c0a) tmo_note_info_pane_t5

0x0004,

0xfebd,	// (0x0005ab73) tmo_note_info_pane_t

0xef66,	// (0x00059c1c) list_tmo_link_pane_ParamLimits

0xef73,	// (0x00059c29) scroll_pane_cp20_ParamLimits

0x4a27,	// (0x0004f6dd) bg_popup_fep_char_preview_window_cp01

0xefb7,	// (0x00059c6d) popup_fshwr2_char_preview_window_t1

0xefc5,	// (0x00059c7b) popup_candi_list_indi_window_g1

0xefce,	// (0x00059c84) bg_cell_contacts_ai5_widget_pane

0xefda,	// (0x00059c90) cell_contacts_ai5_widget_pane_g1

0xc9d7,	// (0x0005768d) cell_contacts_ai5_widget_pane_g2

0xefef,	// (0x00059ca5) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec8,	// (0x0005ab7e) cell_contacts_ai5_widget_pane_g

0xeffb,	// (0x00059cb1) cell_contacts_ai5_widget_pane_t1

0x8899,	// (0x0005354f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf072,	// (0x00059d28) settings_container_pane

0x951f,	// (0x000541d5) listscroll_set_pane_copy1

0xba22,	// (0x000566d8) scroll_pane_cp121_copy1

0xf07e,	// (0x00059d34) set_content_pane_copy1

0xf086,	// (0x00059d3c) aid_height_set_list_copy1_ParamLimits

0xf086,	// (0x00059d3c) aid_height_set_list_copy1

0xb147,	// (0x00055dfd) aid_size_parent_copy1_ParamLimits

0xb147,	// (0x00055dfd) aid_size_parent_copy1

0xf092,	// (0x00059d48) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf092,	// (0x00059d48) button_value_adjust_pane_cp6_copy1

0x985d,	// (0x00054513) list_highlight_pane_cp2_copy1_ParamLimits

0x985d,	// (0x00054513) list_highlight_pane_cp2_copy1

0xf0a6,	// (0x00059d5c) list_set_pane_copy1_ParamLimits

0xf0a6,	// (0x00059d5c) list_set_pane_copy1

0xf00d,	// (0x00059cc3) main_pane_set_t1_copy1_ParamLimits

0xf00d,	// (0x00059cc3) main_pane_set_t1_copy1

0xf047,	// (0x00059cfd) main_pane_set_t2_copy1_ParamLimits

0xf047,	// (0x00059cfd) main_pane_set_t2_copy1

0xf153,	// (0x00059e09) main_pane_set_t3_copy1

0xf161,	// (0x00059e17) main_pane_set_t4_copy1

0xf066,	// (0x00059d1c) set_content_pane_g1_copy1_ParamLimits

0xf066,	// (0x00059d1c) set_content_pane_g1_copy1

0xf16f,	// (0x00059e25) setting_code_pane_copy1

0xf177,	// (0x00059e2d) setting_slider_graphic_pane_copy1

0xf177,	// (0x00059e2d) setting_slider_pane_copy1

0xf177,	// (0x00059e2d) setting_text_pane_copy1

0xf177,	// (0x00059e2d) setting_volume_pane_copy1

0xf16f,	// (0x00059e25) settings_code_pane_cp2_copy1

0xf17f,	// (0x00059e35) settings_code_pane_cp_copy1_ParamLimits

0xf17f,	// (0x00059e35) settings_code_pane_cp_copy1

0x75ad,	// (0x00052263) volume_set_pane_copy1

0xf193,	// (0x00059e49) volume_set_pane_g10_copy1

0xf19b,	// (0x00059e51) volume_set_pane_g1_copy1

0xf1a3,	// (0x00059e59) volume_set_pane_g2_copy1

0xf1ab,	// (0x00059e61) volume_set_pane_g3_copy1

0xf1b3,	// (0x00059e69) volume_set_pane_g4_copy1

0xf1bb,	// (0x00059e71) volume_set_pane_g5_copy1

0xf1c3,	// (0x00059e79) volume_set_pane_g6_copy1

0xf1cb,	// (0x00059e81) volume_set_pane_g7_copy1

0xf1d3,	// (0x00059e89) volume_set_pane_g8_copy1

0xf1db,	// (0x00059e91) volume_set_pane_g9_copy1

0x7921,	// (0x000525d7) bg_set_opt_pane_cp_copy1_ParamLimits

0x7921,	// (0x000525d7) bg_set_opt_pane_cp_copy1

0x75b5,	// (0x0005226b) setting_slider_pane_t1_copy1_ParamLimits

0x75b5,	// (0x0005226b) setting_slider_pane_t1_copy1

0x75d3,	// (0x00052289) setting_slider_pane_t2_copy1_ParamLimits

0x75d3,	// (0x00052289) setting_slider_pane_t2_copy1

0x75ed,	// (0x000522a3) setting_slider_pane_t3_copy1_ParamLimits

0x75ed,	// (0x000522a3) setting_slider_pane_t3_copy1

0x7605,	// (0x000522bb) slider_set_pane_copy1_ParamLimits

0x7605,	// (0x000522bb) slider_set_pane_copy1

0x88e8,	// (0x0005359e) set_opt_bg_pane_g1_copy2

0x88f0,	// (0x000535a6) set_opt_bg_pane_g2_copy2

0xf1e3,	// (0x00059e99) set_opt_bg_pane_g3_copy2

0x8900,	// (0x000535b6) set_opt_bg_pane_g4_copy2

0x8908,	// (0x000535be) set_opt_bg_pane_g5_copy2

0x8910,	// (0x000535c6) set_opt_bg_pane_g6_copy2

0xf1ed,	// (0x00059ea3) set_opt_bg_pane_g7_copy2

0xf1f5,	// (0x00059eab) set_opt_bg_pane_g8_copy2

0xf1ff,	// (0x00059eb5) set_opt_bg_pane_g9_copy2

0x761b,	// (0x000522d1) aid_size_touch_slider_mark_copy1_ParamLimits

0x761b,	// (0x000522d1) aid_size_touch_slider_mark_copy1

0xf209,	// (0x00059ebf) slider_set_pane_g1_copy1

0x762f,	// (0x000522e5) slider_set_pane_g2_copy1

0x6448,	// (0x000510fe) slider_set_pane_g3_copy1_ParamLimits

0x6448,	// (0x000510fe) slider_set_pane_g3_copy1

0x645c,	// (0x00051112) slider_set_pane_g4_copy1_ParamLimits

0x645c,	// (0x00051112) slider_set_pane_g4_copy1

0x6474,	// (0x0005112a) slider_set_pane_g5_copy1_ParamLimits

0x6474,	// (0x0005112a) slider_set_pane_g5_copy1

0x6448,	// (0x000510fe) slider_set_pane_g6_copy1_ParamLimits

0x6448,	// (0x000510fe) slider_set_pane_g6_copy1

0x7637,	// (0x000522ed) slider_set_pane_g7_copy1_ParamLimits

0x7637,	// (0x000522ed) slider_set_pane_g7_copy1

0x7841,	// (0x000524f7) bg_set_opt_pane_cp2_copy1

0xf212,	// (0x00059ec8) setting_slider_graphic_pane_g1_copy1

0xf21b,	// (0x00059ed1) setting_slider_graphic_pane_t1_copy1

0xf22b,	// (0x00059ee1) setting_slider_graphic_pane_t2_copy1

0xf23b,	// (0x00059ef1) slider_set_pane_cp_copy1

0xf24b,	// (0x00059f01) input_focus_pane_cp1_copy1

0xf254,	// (0x00059f0a) list_set_text_pane_copy1

0xf25c,	// (0x00059f12) setting_text_pane_g1_copy1

0x3e4d,	// (0x0004eb03) set_text_pane_t1_copy1

0xf24b,	// (0x00059f01) input_focus_pane_cp2_copy1

0xf25c,	// (0x00059f12) setting_code_pane_g1_copy1

0xf265,	// (0x00059f1b) setting_code_pane_t1_copy1

0xf273,	// (0x00059f29) list_set_graphic_pane_copy1

0x7841,	// (0x000524f7) bg_set_opt_pane_cp4_copy1

0x921a,	// (0x00053ed0) list_set_graphic_pane_g1_copy1_ParamLimits

0x921a,	// (0x00053ed0) list_set_graphic_pane_g1_copy1

0xf285,	// (0x00059f3b) list_set_graphic_pane_g2_copy1

0x9232,	// (0x00053ee8) list_set_graphic_pane_t1_copy1_ParamLimits

0x9232,	// (0x00053ee8) list_set_graphic_pane_t1_copy1

0xc32d,	// (0x00056fe3) rs_clock_indi_pane_g1

0xf28d,	// (0x00059f43) rs_clock_indi_pane_t1

0xf29b,	// (0x00059f51) rs_indi_pane

0xf2a3,	// (0x00059f59) rs_indi_pane_g1

0xf2ac,	// (0x00059f62) rs_indi_pane_g2

0xf2b5,	// (0x00059f6b) rs_indi_pane_g3

0x0002,

0xfecf,	// (0x0005ab85) rs_indi_pane_g

0x951f,	// (0x000541d5) bg_popup_preview_window_pane_cp03

0xf2be,	// (0x00059f74) popup_fep_tooltip_window_t1

0xcfb5,	// (0x00057c6b) popup_note2_window_g2_ParamLimits

0xcfb5,	// (0x00057c6b) popup_note2_window_g2

0x0001,

0xfc68,	// (0x0005a91e) popup_note2_window_g_ParamLimits

0xfc68,	// (0x0005a91e) popup_note2_window_g

0xd4d1,	// (0x00058187) bg_popup_sub_pane_cp11_ParamLimits

0xd4de,	// (0x00058194) cell_ai3_links_pane_g1_ParamLimits

0xd4f5,	// (0x000581ab) cell_ai3_links_pane_t1

0x3e4d,	// (0x0004eb03) set_text_pane_t1_copy1_ParamLimits

0x9430,	// (0x000540e6) cell_graphic_popup_pane_cp2_ParamLimits

0x9430,	// (0x000540e6) cell_graphic_popup_pane_cp2

0xf2cc,	// (0x00059f82) cell_graphic_popup_pane_g1_cp2

0x85d8,	// (0x0005328e) cell_graphic_popup_pane_g2_cp2

0xf2d4,	// (0x00059f8a) cell_graphic_popup_pane_g3_cp2

0xf2dc,	// (0x00059f92) cell_graphic_popup_pane_t2_cp2

0x85e9,	// (0x0005329f) grid_highlight_pane_cp3_cp2

0x8c2d,	// (0x000538e3) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8899,	// (0x0005354f) main_tmo_pane_ParamLimits

0xd829,	// (0x000584df) popup_tmo_big_image_note_window

0xe998,	// (0x0005964e) cell_ai5_widget_list_pane

0xe9a0,	// (0x00059656) cell_ai5_widget_lrg_icon_pane

0xef03,	// (0x00059bb9) tmo_note_info_pane_t1_ParamLimits

0xef18,	// (0x00059bce) tmo_note_info_pane_t2_ParamLimits

0xef2d,	// (0x00059be3) tmo_note_info_pane_t3_ParamLimits

0xef42,	// (0x00059bf8) tmo_note_info_pane_t4_ParamLimits

0xef54,	// (0x00059c0a) tmo_note_info_pane_t5_ParamLimits

0xfebd,	// (0x0005ab73) tmo_note_info_pane_t_ParamLimits

0xf072,	// (0x00059d28) settings_container_pane_ParamLimits

0xf243,	// (0x00059ef9) indicator_popup_pane_cp5

0xf243,	// (0x00059ef9) indicator_popup_pane_cp6

0xf273,	// (0x00059f29) list_set_graphic_pane_copy1_ParamLimits

0x782d,	// (0x000524e3) bg_popup_window_pane_cp23

0xf2ea,	// (0x00059fa0) popup_tmo_big_image_note_window_g1

0xf2f4,	// (0x00059faa) popup_tmo_big_image_note_window_t1

0xf304,	// (0x00059fba) popup_tmo_big_image_note_window_t2

0xf314,	// (0x00059fca) popup_tmo_big_image_note_window_t3

0x0002,

0xfed6,	// (0x0005ab8c) popup_tmo_big_image_note_window_t

0xc32d,	// (0x00056fe3) cell_ai5_widget_lrg_icon_pane_g1

0xf324,	// (0x00059fda) cell_ai5_widget_lrg_icon_pane_t1

0xf332,	// (0x00059fe8) cell_ai5_widget_list_row_pane_ParamLimits

0xf332,	// (0x00059fe8) cell_ai5_widget_list_row_pane

0xf349,	// (0x00059fff) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf349,	// (0x00059fff) cell_ai5_widget_list_row_pane_g1

0xf356,	// (0x0005a00c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf356,	// (0x0005a00c) cell_ai5_widget_list_row_pane_t1

0xf387,	// (0x0005a03d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf387,	// (0x0005a03d) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedd,	// (0x0005ab93) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedd,	// (0x0005ab93) cell_ai5_widget_list_row_pane_t

0x4a27,	// (0x0004f6dd) main_fep_vtchi_ss_pane

0x7669,	// (0x0005231f) popup_fep_char_pre_window

0x7671,	// (0x00052327) popup_fep_ituss_window

0x7692,	// (0x00052348) popup_fep_vkbss_window

0xf3af,	// (0x0005a065) grid_vkbss_keypad_pane_ParamLimits

0xf3af,	// (0x0005a065) grid_vkbss_keypad_pane

0xf3bf,	// (0x0005a075) ituss_keypad_pane

0x76bd,	// (0x00052373) aid_vkbss_key_offset_ParamLimits

0x76bd,	// (0x00052373) aid_vkbss_key_offset

0x76c9,	// (0x0005237f) cell_vkbss_key_pane_ParamLimits

0x76c9,	// (0x0005237f) cell_vkbss_key_pane

0xf3ce,	// (0x0005a084) bg_cell_vkbss_key_g1_ParamLimits

0xf3ce,	// (0x0005a084) bg_cell_vkbss_key_g1

0xf3da,	// (0x0005a090) cell_vkbss_key_3p_pane_ParamLimits

0xf3da,	// (0x0005a090) cell_vkbss_key_3p_pane

0xf3f4,	// (0x0005a0aa) cell_vkbss_key_g1_ParamLimits

0xf3f4,	// (0x0005a0aa) cell_vkbss_key_g1

0xf40e,	// (0x0005a0c4) cell_vkbss_key_t1_ParamLimits

0xf40e,	// (0x0005a0c4) cell_vkbss_key_t1

0x76df,	// (0x00052395) cell_ituss_key_pane_ParamLimits

0x76df,	// (0x00052395) cell_ituss_key_pane

0xf439,	// (0x0005a0ef) bg_cell_ituss_key_g1_ParamLimits

0xf439,	// (0x0005a0ef) bg_cell_ituss_key_g1

0xf445,	// (0x0005a0fb) cell_ituss_key_pane_g1_ParamLimits

0xf445,	// (0x0005a0fb) cell_ituss_key_pane_g1

0x76f0,	// (0x000523a6) cell_ituss_key_pane_g2_ParamLimits

0x76f0,	// (0x000523a6) cell_ituss_key_pane_g2

0x0002,

0xfee4,	// (0x0005ab9a) cell_ituss_key_pane_g_ParamLimits

0xfee4,	// (0x0005ab9a) cell_ituss_key_pane_g

0x771c,	// (0x000523d2) cell_ituss_key_t1_ParamLimits

0x771c,	// (0x000523d2) cell_ituss_key_t1

0x7756,	// (0x0005240c) cell_ituss_key_t2_ParamLimits

0x7756,	// (0x0005240c) cell_ituss_key_t2

0x7787,	// (0x0005243d) cell_ituss_key_t3_ParamLimits

0x7787,	// (0x0005243d) cell_ituss_key_t3

0x7756,	// (0x0005240c) cell_ituss_key_t4_ParamLimits

0x7756,	// (0x0005240c) cell_ituss_key_t4

0x0004,

0xfeeb,	// (0x0005aba1) cell_ituss_key_t_ParamLimits

0xfeeb,	// (0x0005aba1) cell_ituss_key_t

0xf471,	// (0x0005a127) cell_vkbss_key_3p_pane_g1

0xf479,	// (0x0005a12f) cell_vkbss_key_3p_pane_g2

0xf481,	// (0x0005a137) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x0005abac) cell_vkbss_key_3p_pane_g

0x4a27,	// (0x0004f6dd) bg_popup_fep_char_preview_window_cp02

0x77ca,	// (0x00052480) popup_fep_char_pre_window_t1

0xe92a,	// (0x000595e0) main_ai5_sk_pane

0xefce,	// (0x00059c84) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xefda,	// (0x00059c90) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc9d7,	// (0x0005768d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xefef,	// (0x00059ca5) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec8,	// (0x0005ab7e) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeffb,	// (0x00059cb1) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8899,	// (0x0005354f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf489,	// (0x0005a13f) main_ai5_sk_pane_g1

0xa219,	// (0x00054ecf) popup_query_code_window_g1

0x7687,	// (0x0005233d) popup_fep_vkb_icf_pane

0x769b,	// (0x00052351) popup_fep_vtchi_icf_pane

0xf492,	// (0x0005a148) bg_icf_pane

0xf49e,	// (0x0005a154) list_vkb_icf_pane

0xf4aa,	// (0x0005a160) bg_icf_pane_cp01

0xf4b6,	// (0x0005a16c) vtchi_icf_list_pane

0xf4c7,	// (0x0005a17d) list_vkb_icf_pane_t1_ParamLimits

0xf4c7,	// (0x0005a17d) list_vkb_icf_pane_t1

0xf4dd,	// (0x0005a193) vtchi_icf_list_pane_t1_ParamLimits

0xf4dd,	// (0x0005a193) vtchi_icf_list_pane_t1

0x7671,	// (0x00052327) popup_fep_ituss_window_ParamLimits

0x769b,	// (0x00052351) popup_fep_vtchi_icf_pane_ParamLimits

0xf3bf,	// (0x0005a075) ituss_keypad_pane_ParamLimits

0x76b1,	// (0x00052367) ituss_sks_pane

0xf492,	// (0x0005a148) bg_icf_pane_ParamLimits

0x764d,	// (0x00052303) icf_edit_indi_pane_ParamLimits

0x764d,	// (0x00052303) icf_edit_indi_pane

0xf49e,	// (0x0005a154) list_vkb_icf_pane_ParamLimits

0xf4aa,	// (0x0005a160) bg_icf_pane_cp01_ParamLimits

0x765c,	// (0x00052312) icf_edit_indi_pane_cp01_ParamLimits

0x765c,	// (0x00052312) icf_edit_indi_pane_cp01

0xf4be,	// (0x0005a174) vtchi_query_pane

0x6a34,	// (0x000516ea) icf_edit_indi_pane_g1_ParamLimits

0x6a34,	// (0x000516ea) icf_edit_indi_pane_g1

0x77ec,	// (0x000524a2) icf_edit_indi_pane_g2_ParamLimits

0x77ec,	// (0x000524a2) icf_edit_indi_pane_g2

0x0001,

0xff0e,	// (0x0005abc4) icf_edit_indi_pane_g_ParamLimits

0xff0e,	// (0x0005abc4) icf_edit_indi_pane_g

0x77fb,	// (0x000524b1) icf_edit_indi_pane_t1

0xf4f7,	// (0x0005a1ad) bg_input_focus_pane_cp042

0x87bc,	// (0x00053472) vtchi_button_pane

0xf500,	// (0x0005a1b6) vtchi_query_pane_t1

0xf50e,	// (0x0005a1c4) vtchi_query_pane_t2

0xf51c,	// (0x0005a1d2) vtchi_query_pane_t3

0x0002,

0xfefd,	// (0x0005abb3) vtchi_query_pane_t

0x4a27,	// (0x0004f6dd) bg_button_pane_cp13

0xf52a,	// (0x0005a1e0) vtchi_button_pane_g1

0x77d9,	// (0x0005248f) ituss_sks_pane_g1

0x77e4,	// (0x0005249a) ituss_sks_pane_g2

0x0001,

0xff04,	// (0x0005abba) ituss_sks_pane_g

0xf532,	// (0x0005a1e8) ituss_sks_pane_t1

0xf540,	// (0x0005a1f6) ituss_sks_pane_t2

0x0001,

0xff09,	// (0x0005abbf) ituss_sks_pane_t

0xbd9c,	// (0x00056a52) indicator_nsta_pane_cp_g1

0xbda5,	// (0x00056a5b) indicator_nsta_pane_cp_g2

0xbdad,	// (0x00056a63) indicator_nsta_pane_cp_g3

0xbdb5,	// (0x00056a6b) indicator_nsta_pane_cp_g4

0xbdbd,	// (0x00056a73) indicator_nsta_pane_cp_g5

0xbdbd,	// (0x00056a73) indicator_nsta_pane_cp_g6

0x0005,

0xfaa6,	// (0x0005a75c) indicator_nsta_pane_cp_g

0xe510,	// (0x000591c6) cell_graphic2_pane_t2_ParamLimits

0xe510,	// (0x000591c6) cell_graphic2_pane_t2

0x0001,

0xfdbf,	// (0x0005aa75) cell_graphic2_pane_t_ParamLimits

0xfdbf,	// (0x0005aa75) cell_graphic2_pane_t

0xe53d,	// (0x000591f3) cell_graphic2_control_pane_t1

0x8fcd,	// (0x00053c83) signal_pane_g3_ParamLimits

0x8fcd,	// (0x00053c83) signal_pane_g3

0x8fdf,	// (0x00053c95) signal_pane_g4_ParamLimits

0x8fdf,	// (0x00053c95) signal_pane_g4

0xf399,	// (0x0005a04f) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf399,	// (0x0005a04f) cell_ai5_widget_list_row_pane_t3

0xf45f,	// (0x0005a115) cell_ituss_key_pane_t1_ParamLimits

0xf45f,	// (0x0005a115) cell_ituss_key_pane_t1

0x9e6c,	// (0x00054b22) form_field_data_wide_pane_vc_t2_ParamLimits

0x9e6c,	// (0x00054b22) form_field_data_wide_pane_vc_t2

0x9e80,	// (0x00054b36) form_field_data_wide_pane_vc_t3_ParamLimits

0x9e80,	// (0x00054b36) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x0005a4c4) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x0005a4c4) form_field_data_wide_pane_vc_t

0xba64,	// (0x0005671a) form_field_slider_wide_pane_vc_t3_ParamLimits

0xba64,	// (0x0005671a) form_field_slider_wide_pane_vc_t3

0xbb42,	// (0x000567f8) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbb42,	// (0x000567f8) form_field_popup_wide_pane_vc_t2

0xbb59,	// (0x0005680f) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbb59,	// (0x0005680f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa95,	// (0x0005a74b) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa95,	// (0x0005a74b) form_field_popup_wide_pane_vc_t

0x747d,	// (0x00052133) aid_fshwr2_btn_pane_ParamLimits

0x7489,	// (0x0005213f) aid_fshwr2_syb_pane_ParamLimits

0x7495,	// (0x0005214b) aid_fshwr2_txt_pane_ParamLimits

0x6ccd,	// (0x00051983) fshwr2_bg_pane_ParamLimits

0x74a1,	// (0x00052157) fshwr2_func_candi_pane_ParamLimits

0x74b6,	// (0x0005216c) fshwr2_hwr_syb_pane_ParamLimits

0x74c6,	// (0x0005217c) fshwr2_icf_pane_ParamLimits

0x7f75,	// (0x00052c2b) list_double_graphic_pane_vc_g4_ParamLimits

0x7f75,	// (0x00052c2b) list_double_graphic_pane_vc_g4

0x7710,	// (0x000523c6) cell_ituss_key_pane_g3_ParamLimits

0x7710,	// (0x000523c6) cell_ituss_key_pane_g3

0x77b8,	// (0x0005246e) cell_ituss_key_t5_ParamLimits

0x77b8,	// (0x0005246e) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large

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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00059131 };

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
0x9bdb,	// (0x00062d0c) Screen

0x9be7,	// (0x00062d18) application_window_ParamLimits

0x9be7,	// (0x00062d18) application_window

0x88d1,	// (0x00061a02) screen_g1

0x9c1f,	// (0x00062d50) area_bottom_pane_ParamLimits

0x9c1f,	// (0x00062d50) area_bottom_pane

0xed7f,	// (0x00067eb0) area_top_pane_ParamLimits

0xed7f,	// (0x00067eb0) area_top_pane

0xee1d,	// (0x00067f4e) main_pane_ParamLimits

0xee1d,	// (0x00067f4e) main_pane

0x88db,	// (0x00061a0c) misc_graphics

0xc060,	// (0x00065191) battery_pane_ParamLimits

0xc060,	// (0x00065191) battery_pane

0x3375,	// (0x0005c4a6) bg_status_flat_pane_g8

0x337d,	// (0x0005c4ae) bg_status_flat_pane_g9

0x2743,	// (0x0005b874) context_pane_ParamLimits

0x2743,	// (0x0005b874) context_pane

0xc1d7,	// (0x00065308) navi_pane_ParamLimits

0xc1d7,	// (0x00065308) navi_pane

0xc261,	// (0x00065392) signal_pane_ParamLimits

0xc261,	// (0x00065392) signal_pane

0x0008,

0xf854,	// (0x00068985) bg_status_flat_pane_g

0xc2f1,	// (0x00065422) status_pane_g1_ParamLimits

0xc2f1,	// (0x00065422) status_pane_g1

0xc307,	// (0x00065438) status_pane_g2_ParamLimits

0xc307,	// (0x00065438) status_pane_g2

0x297c,	// (0x0005baad) status_pane_g3_ParamLimits

0x297c,	// (0x0005baad) status_pane_g3

0x0004,

0xf780,	// (0x000688b1) status_pane_g_ParamLimits

0xf780,	// (0x000688b1) status_pane_g

0xc313,	// (0x00065444) title_pane_ParamLimits

0xc313,	// (0x00065444) title_pane

0xc37c,	// (0x000654ad) uni_indicator_pane_ParamLimits

0xc37c,	// (0x000654ad) uni_indicator_pane

0x25ad,	// (0x0005b6de) bg_list_pane_ParamLimits

0x25ad,	// (0x0005b6de) bg_list_pane

0xad50,	// (0x00063e81) find_pane

0x2ba9,	// (0x0005bcda) listscroll_app_pane_ParamLimits

0x2ba9,	// (0x0005bcda) listscroll_app_pane

0x25d9,	// (0x0005b70a) listscroll_form_pane

0xad58,	// (0x00063e89) listscroll_gen_pane_ParamLimits

0xad58,	// (0x00063e89) listscroll_gen_pane

0x0117,	// (0x00059248) listscroll_set_pane

0x4100,	// (0x0005d231) main_idle_act_pane

0x22a6,	// (0x0005b3d7) main_idle_trad_pane

0x22a6,	// (0x0005b3d7) main_list_empty_pane

0x25cd,	// (0x0005b6fe) main_midp_pane

0x25f3,	// (0x0005b724) main_pane_g1_ParamLimits

0x25f3,	// (0x0005b724) main_pane_g1

0xad6c,	// (0x00063e9d) popup_ai_message_window_ParamLimits

0xad6c,	// (0x00063e9d) popup_ai_message_window

0xae0c,	// (0x00063f3d) popup_fep_china_uni_window_ParamLimits

0xae0c,	// (0x00063f3d) popup_fep_china_uni_window

0x0241,	// (0x00059372) popup_fep_japan_candidate_window_ParamLimits

0x0241,	// (0x00059372) popup_fep_japan_candidate_window

0x026b,	// (0x0005939c) popup_fep_japan_predictive_window_ParamLimits

0x026b,	// (0x0005939c) popup_fep_japan_predictive_window

0xae6c,	// (0x00063f9d) popup_find_window

0xae89,	// (0x00063fba) popup_grid_graphic_window_ParamLimits

0xae89,	// (0x00063fba) popup_grid_graphic_window

0x02de,	// (0x0005940f) popup_large_graphic_colour_window

0xaf33,	// (0x00064064) popup_menu_window_ParamLimits

0xaf33,	// (0x00064064) popup_menu_window

0xb123,	// (0x00064254) popup_note_image_window

0xb0e3,	// (0x00064214) popup_note_wait_window_ParamLimits

0xb0e3,	// (0x00064214) popup_note_wait_window

0xb13b,	// (0x0006426c) popup_note_window_ParamLimits

0xb13b,	// (0x0006426c) popup_note_window

0xb1e9,	// (0x0006431a) popup_query_code_window_ParamLimits

0xb1e9,	// (0x0006431a) popup_query_code_window

0x054a,	// (0x0005967b) popup_query_data_code_window_ParamLimits

0x054a,	// (0x0005967b) popup_query_data_code_window

0xb229,	// (0x0006435a) popup_query_data_window_ParamLimits

0xb229,	// (0x0006435a) popup_query_data_window

0xb2bd,	// (0x000643ee) popup_query_sat_info_window_ParamLimits

0xb2bd,	// (0x000643ee) popup_query_sat_info_window

0xb368,	// (0x00064499) popup_snote_single_graphic_window_ParamLimits

0xb368,	// (0x00064499) popup_snote_single_graphic_window

0xb368,	// (0x00064499) popup_snote_single_text_window_ParamLimits

0xb368,	// (0x00064499) popup_snote_single_text_window

0x05e5,	// (0x00059716) popup_sub_window_general

0x072b,	// (0x0005985c) popup_window_general_ParamLimits

0x072b,	// (0x0005985c) popup_window_general

0x2601,	// (0x0005b732) power_save_pane

0xf4e4,	// (0x00068615) control_pane_g1_ParamLimits

0xf4e4,	// (0x00068615) control_pane_g1

0xf507,	// (0x00068638) control_pane_g2_ParamLimits

0xf507,	// (0x00068638) control_pane_g2

0x2570,	// (0x0005b6a1) control_pane_g3_ParamLimits

0x2570,	// (0x0005b6a1) control_pane_g3

0x0007,

0xf768,	// (0x00068899) control_pane_g_ParamLimits

0xf768,	// (0x00068899) control_pane_g

0xac67,	// (0x00063d98) control_pane_t1_ParamLimits

0xac67,	// (0x00063d98) control_pane_t1

0xacb7,	// (0x00063de8) control_pane_t2_ParamLimits

0xacb7,	// (0x00063de8) control_pane_t2

0x0002,

0xf779,	// (0x000688aa) control_pane_t_ParamLimits

0xf779,	// (0x000688aa) control_pane_t

0x2495,	// (0x0005b5c6) navi_navi_volume_pane_cp1

0x249d,	// (0x0005b5ce) status_small_icon_pane

0x24a5,	// (0x0005b5d6) status_small_pane_g1_ParamLimits

0x24a5,	// (0x0005b5d6) status_small_pane_g1

0x24d9,	// (0x0005b60a) status_small_pane_g2_ParamLimits

0x24d9,	// (0x0005b60a) status_small_pane_g2

0x24e5,	// (0x0005b616) status_small_pane_g3_ParamLimits

0x24e5,	// (0x0005b616) status_small_pane_g3

0xac19,	// (0x00063d4a) status_small_pane_g4_ParamLimits

0xac19,	// (0x00063d4a) status_small_pane_g4

0xac27,	// (0x00063d58) status_small_pane_g5_ParamLimits

0xac27,	// (0x00063d58) status_small_pane_g5

0x250b,	// (0x0005b63c) status_small_pane_g6_ParamLimits

0x250b,	// (0x0005b63c) status_small_pane_g6

0x0007,

0xf757,	// (0x00068888) status_small_pane_g_ParamLimits

0xf757,	// (0x00068888) status_small_pane_g

0x253a,	// (0x0005b66b) status_small_pane_t1

0xac3d,	// (0x00063d6e) status_small_wait_pane_ParamLimits

0xac3d,	// (0x00063d6e) status_small_wait_pane

0xaa05,	// (0x00063b36) aid_levels_signal_ParamLimits

0xaa05,	// (0x00063b36) aid_levels_signal

0xaa1d,	// (0x00063b4e) signal_pane_g1_ParamLimits

0xaa1d,	// (0x00063b4e) signal_pane_g1

0xaa38,	// (0x00063b69) signal_pane_g2_ParamLimits

0xaa38,	// (0x00063b69) signal_pane_g2

0x0003,

0xf6e8,	// (0x00068819) signal_pane_g_ParamLimits

0xf6e8,	// (0x00068819) signal_pane_g

0xde9f,	// (0x00066fd0) context_pane_g1

0x9e0b,	// (0x00062f3c) title_pane_g1

0x9e4e,	// (0x00062f7f) title_pane_t1

0x88f1,	// (0x00061a22) title_pane_t2

0x8917,	// (0x00061a48) title_pane_t3

0x0002,

0xf532,	// (0x00068663) title_pane_t

0xc3a4,	// (0x000654d5) aid_levels_battery_ParamLimits

0xc3a4,	// (0x000654d5) aid_levels_battery

0xc3c0,	// (0x000654f1) battery_pane_g1_ParamLimits

0xc3c0,	// (0x000654f1) battery_pane_g1

0xc3dd,	// (0x0006550e) battery_pane_g2_ParamLimits

0xc3dd,	// (0x0006550e) battery_pane_g2

0x0001,

0xf78b,	// (0x000688bc) battery_pane_g_ParamLimits

0xf78b,	// (0x000688bc) battery_pane_g

0xc60f,	// (0x00065740) uni_indicator_pane_g1

0xc625,	// (0x00065756) uni_indicator_pane_g2

0xc63b,	// (0x0006576c) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x00068a2d) uni_indicator_pane_g

0x2109,	// (0x0005b23a) navi_icon_pane_ParamLimits

0x2109,	// (0x0005b23a) navi_icon_pane

0x205c,	// (0x0005b18d) navi_midp_pane

0x2125,	// (0x0005b256) navi_navi_pane

0x212f,	// (0x0005b260) navi_text_pane_ParamLimits

0x212f,	// (0x0005b260) navi_text_pane

0x88d1,	// (0x00061a02) status_small_wait_pane_g1

0x8c38,	// (0x00061d69) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x00068a28) status_small_wait_pane_g

0xc5ae,	// (0x000656df) navi_navi_icon_text_pane

0xc5b6,	// (0x000656e7) navi_navi_pane_g1_ParamLimits

0xc5b6,	// (0x000656e7) navi_navi_pane_g1

0xc5c8,	// (0x000656f9) navi_navi_pane_g2_ParamLimits

0xc5c8,	// (0x000656f9) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x000689f6) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x000689f6) navi_navi_pane_g

0x3bec,	// (0x0005cd1d) navi_navi_tabs_pane

0xc5da,	// (0x0006570b) navi_navi_text_pane

0xc5ae,	// (0x000656df) navi_navi_volume_pane

0xc59c,	// (0x000656cd) navi_text_pane_t1

0xc590,	// (0x000656c1) navi_icon_pane_g1

0x38f5,	// (0x0005ca26) navi_navi_text_pane_t1

0xb6a4,	// (0x000647d5) navi_navi_volume_pane_g1

0xb6ac,	// (0x000647dd) volume_small_pane

0xc4ec,	// (0x0006561d) navi_navi_icon_text_pane_g1

0xc4f4,	// (0x00065625) navi_navi_icon_text_pane_t1

0x2125,	// (0x0005b256) navi_tabs_2_long_pane

0x2125,	// (0x0005b256) navi_tabs_2_pane

0x2125,	// (0x0005b256) navi_tabs_3_long_pane

0x2125,	// (0x0005b256) navi_tabs_3_pane

0x2125,	// (0x0005b256) navi_tabs_4_pane

0xb684,	// (0x000647b5) tabs_2_active_pane_ParamLimits

0xb684,	// (0x000647b5) tabs_2_active_pane

0xb694,	// (0x000647c5) tabs_2_passive_pane_ParamLimits

0xb694,	// (0x000647c5) tabs_2_passive_pane

0xb652,	// (0x00064783) tabs_3_active_pane_ParamLimits

0xb652,	// (0x00064783) tabs_3_active_pane

0xb662,	// (0x00064793) tabs_3_passive_pane_ParamLimits

0xb662,	// (0x00064793) tabs_3_passive_pane

0xb673,	// (0x000647a4) tabs_3_passive_pane_cp_ParamLimits

0xb673,	// (0x000647a4) tabs_3_passive_pane_cp

0xb60e,	// (0x0006473f) tabs_4_active_pane_ParamLimits

0xb60e,	// (0x0006473f) tabs_4_active_pane

0xb61f,	// (0x00064750) tabs_4_passive_pane_ParamLimits

0xb61f,	// (0x00064750) tabs_4_passive_pane

0xb630,	// (0x00064761) tabs_4_passive_pane_cp_ParamLimits

0xb630,	// (0x00064761) tabs_4_passive_pane_cp

0xb641,	// (0x00064772) tabs_4_passive_pane_cp2_ParamLimits

0xb641,	// (0x00064772) tabs_4_passive_pane_cp2

0xb5ea,	// (0x0006471b) tabs_2_long_active_pane_ParamLimits

0xb5ea,	// (0x0006471b) tabs_2_long_active_pane

0xb5fc,	// (0x0006472d) tabs_2_long_passive_pane_ParamLimits

0xb5fc,	// (0x0006472d) tabs_2_long_passive_pane

0xb5b1,	// (0x000646e2) tabs_3_long_active_pane_ParamLimits

0xb5b1,	// (0x000646e2) tabs_3_long_active_pane

0xb5c4,	// (0x000646f5) tabs_3_long_passive_pane_ParamLimits

0xb5c4,	// (0x000646f5) tabs_3_long_passive_pane

0xb5d7,	// (0x00064708) tabs_3_long_passive_pane_cp_ParamLimits

0xb5d7,	// (0x00064708) tabs_3_long_passive_pane_cp

0x08ac,	// (0x000599dd) volume_small_pane_g1

0xb560,	// (0x00064691) volume_small_pane_g2

0xb569,	// (0x0006469a) volume_small_pane_g3

0xb572,	// (0x000646a3) volume_small_pane_g4

0xb57b,	// (0x000646ac) volume_small_pane_g5

0xb584,	// (0x000646b5) volume_small_pane_g6

0xb58d,	// (0x000646be) volume_small_pane_g7

0xb596,	// (0x000646c7) volume_small_pane_g8

0xb59f,	// (0x000646d0) volume_small_pane_g9

0xb5a8,	// (0x000646d9) volume_small_pane_g10

0x0009,

0xf891,	// (0x000689c2) volume_small_pane_g

0x8a5c,	// (0x00061b8d) bg_active_tab_pane_cp2_ParamLimits

0x8a5c,	// (0x00061b8d) bg_active_tab_pane_cp2

0x9eda,	// (0x0006300b) tabs_3_active_pane_g1

0x9ee2,	// (0x00063013) tabs_3_active_pane_t1

0x8a5c,	// (0x00061b8d) bg_passive_tab_pane_cp2_ParamLimits

0x8a5c,	// (0x00061b8d) bg_passive_tab_pane_cp2

0x9eda,	// (0x0006300b) tabs_3_passive_pane_g1

0x9ee2,	// (0x00063013) tabs_3_passive_pane_t1

0x8a5c,	// (0x00061b8d) bg_active_tab_pane_cp3_ParamLimits

0x8a5c,	// (0x00061b8d) bg_active_tab_pane_cp3

0x9ef4,	// (0x00063025) tabs_4_active_pane_g1

0x9efc,	// (0x0006302d) tabs_4_active_pane_t1

0x8a5c,	// (0x00061b8d) bg_passive_tab_pane_cp3_ParamLimits

0x8a5c,	// (0x00061b8d) bg_passive_tab_pane_cp3

0x9ef4,	// (0x00063025) tabs_4_1_passive_pane_g1

0x9efc,	// (0x0006302d) tabs_4_1_passive_pane_t1

0x25cd,	// (0x0005b6fe) list_highlight_pane_cp2

0xc6ce,	// (0x000657ff) list_set_pane_ParamLimits

0xc6ce,	// (0x000657ff) list_set_pane

0xc790,	// (0x000658c1) main_pane_set_t1_ParamLimits

0xc790,	// (0x000658c1) main_pane_set_t1

0xc7b0,	// (0x000658e1) main_pane_set_t2_ParamLimits

0xc7b0,	// (0x000658e1) main_pane_set_t2

0xc7c4,	// (0x000658f5) main_pane_set_t3_ParamLimits

0xc7c4,	// (0x000658f5) main_pane_set_t3

0xc7d8,	// (0x00065909) main_pane_set_t4_ParamLimits

0xc7d8,	// (0x00065909) main_pane_set_t4

0x0003,

0xf961,	// (0x00068a92) main_pane_set_t_ParamLimits

0xf961,	// (0x00068a92) main_pane_set_t

0xc7ec,	// (0x0006591d) setting_code_pane

0x424e,	// (0x0005d37f) setting_slider_graphic_pane

0x424e,	// (0x0005d37f) setting_slider_pane

0x424e,	// (0x0005d37f) setting_text_pane

0x424e,	// (0x0005d37f) setting_volume_pane

0xef2c,	// (0x0006805d) volume_set_pane

0x8929,	// (0x00061a5a) bg_set_opt_pane_cp

0xef36,	// (0x00068067) setting_slider_pane_t1

0xef4f,	// (0x00068080) setting_slider_pane_t2

0xef69,	// (0x0006809a) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0006866a) setting_slider_pane_t

0xef81,	// (0x000680b2) slider_set_pane

0x88db,	// (0x00061a0c) bg_set_opt_pane_cp2

0x8937,	// (0x00061a68) setting_slider_graphic_pane_g1

0xef97,	// (0x000680c8) setting_slider_graphic_pane_t1

0xefa7,	// (0x000680d8) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00068671) setting_slider_graphic_pane_t

0xefb7,	// (0x000680e8) slider_set_pane_cp

0x88db,	// (0x00061a0c) input_focus_pane_cp1

0x40e7,	// (0x0005d218) list_set_text_pane

0x88d1,	// (0x00061a02) setting_text_pane_g1

0x88db,	// (0x00061a0c) input_focus_pane_cp2

0x88d1,	// (0x00061a02) setting_code_pane_g1

0x8940,	// (0x00061a71) setting_code_pane_t1

0xdb36,	// (0x00066c67) set_text_pane_t1_ParamLimits

0xdb36,	// (0x00066c67) set_text_pane_t1

0x8fd1,	// (0x00062102) set_opt_bg_pane_g1

0x8fd9,	// (0x0006210a) set_opt_bg_pane_g2

0x40bf,	// (0x0005d1f0) set_opt_bg_pane_g3

0x8fe9,	// (0x0006211a) set_opt_bg_pane_g4

0x8ff1,	// (0x00062122) set_opt_bg_pane_g5

0x8ff9,	// (0x0006212a) set_opt_bg_pane_g6

0x40c9,	// (0x0005d1fa) set_opt_bg_pane_g7

0x40d3,	// (0x0005d204) set_opt_bg_pane_g8

0x40dd,	// (0x0005d20e) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x00068a7f) set_opt_bg_pane_g

0x40b2,	// (0x0005d1e3) slider_set_pane_g1

0x0ab8,	// (0x00059be9) slider_set_pane_g2

0x0006,

0xf93f,	// (0x00068a70) slider_set_pane_g

0x0a18,	// (0x00059b49) volume_set_pane_g1

0x0a22,	// (0x00059b53) volume_set_pane_g2

0x0a2c,	// (0x00059b5d) volume_set_pane_g3

0x0a36,	// (0x00059b67) volume_set_pane_g4

0x0a40,	// (0x00059b71) volume_set_pane_g5

0x0a4a,	// (0x00059b7b) volume_set_pane_g6

0x0a54,	// (0x00059b85) volume_set_pane_g7

0x0a5e,	// (0x00059b8f) volume_set_pane_g8

0x0a68,	// (0x00059b99) volume_set_pane_g9

0x0a72,	// (0x00059ba3) volume_set_pane_g10

0x0009,

0xf917,	// (0x00068a48) volume_set_pane_g

0x9f0e,	// (0x0006303f) indicator_pane_ParamLimits

0x9f0e,	// (0x0006303f) indicator_pane

0x9f3a,	// (0x0006306b) main_idle_pane_g2_ParamLimits

0x9f3a,	// (0x0006306b) main_idle_pane_g2

0x9f72,	// (0x000630a3) main_pane_idle_g1_ParamLimits

0x9f72,	// (0x000630a3) main_pane_idle_g1

0x894e,	// (0x00061a7f) popup_clock_digital_analogue_window_ParamLimits

0x894e,	// (0x00061a7f) popup_clock_digital_analogue_window

0x9f9c,	// (0x000630cd) soft_indicator_pane_ParamLimits

0x9f9c,	// (0x000630cd) soft_indicator_pane

0x9fb8,	// (0x000630e9) wallpaper_pane_ParamLimits

0x9fb8,	// (0x000630e9) wallpaper_pane

0x88d1,	// (0x00061a02) wallpaper_pane_g1

0x9fca,	// (0x000630fb) indicator_pane_g1_ParamLimits

0x9fca,	// (0x000630fb) indicator_pane_g1

0x4511,	// (0x0005d642) navi_navi_icon_text_pane_srt_g1

0x897c,	// (0x00061aad) soft_indicator_pane_t1

0x8996,	// (0x00061ac7) aid_ps_area_pane

0x9fe3,	// (0x00063114) aid_ps_clock_pane

0x89a7,	// (0x00061ad8) aid_ps_indicator_pane

0x89b3,	// (0x00061ae4) indicator_ps_pane_ParamLimits

0x89b3,	// (0x00061ae4) indicator_ps_pane

0x89c2,	// (0x00061af3) power_save_pane_g1_ParamLimits

0x89c2,	// (0x00061af3) power_save_pane_g1

0x89ce,	// (0x00061aff) power_save_pane_g2_ParamLimits

0x89ce,	// (0x00061aff) power_save_pane_g2

0xed5f,	// (0x00067e90) aid_navinavi_width_pane

0x8996,	// (0x00061ac7) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00068676) power_save_pane_g_ParamLimits

0xf545,	// (0x00068676) power_save_pane_g

0x89dc,	// (0x00061b0d) power_save_pane_t1_ParamLimits

0x89dc,	// (0x00061b0d) power_save_pane_t1

0x9fe3,	// (0x00063114) aid_ps_clock_pane_ParamLimits

0x89a7,	// (0x00061ad8) aid_ps_indicator_pane_ParamLimits

0x89ee,	// (0x00061b1f) power_save_pane_t4_ParamLimits

0x89ee,	// (0x00061b1f) power_save_pane_t4

0x0001,

0xf54a,	// (0x0006867b) power_save_pane_t_ParamLimits

0xf54a,	// (0x0006867b) power_save_pane_t

0x8a18,	// (0x00061b49) power_save_t3_ParamLimits

0x8a18,	// (0x00061b49) power_save_t3

0x8a03,	// (0x00061b34) power_save_t2_ParamLimits

0x8a03,	// (0x00061b34) power_save_t2

0x8a2d,	// (0x00061b5e) indicator_ps_pane_g1

0x9ff1,	// (0x00063122) ai_gene_pane_ParamLimits

0x9ff1,	// (0x00063122) ai_gene_pane

0xa008,	// (0x00063139) ai_links_pane_ParamLimits

0xa008,	// (0x00063139) ai_links_pane

0xa020,	// (0x00063151) indicator_pane_cp1_ParamLimits

0xa020,	// (0x00063151) indicator_pane_cp1

0xa02f,	// (0x00063160) main_pane_idle_g1_cp_ParamLimits

0xa02f,	// (0x00063160) main_pane_idle_g1_cp

0x8a36,	// (0x00061b67) popup_ai_links_title_window

0xa047,	// (0x00063178) soft_indicator_pane_cp1_ParamLimits

0xa047,	// (0x00063178) soft_indicator_pane_cp1

0x3e9b,	// (0x0005cfcc) ai_links_pane_g1

0x3ea4,	// (0x0005cfd5) grid_ai_links_pane

0xc606,	// (0x00065737) ai_gene_pane_1

0x3e89,	// (0x0005cfba) ai_gene_pane_2

0x3e92,	// (0x0005cfc3) list_highlight_pane_cp4

0xc5e2,	// (0x00065713) cell_ai_link_pane_ParamLimits

0xc5e2,	// (0x00065713) cell_ai_link_pane

0x3e58,	// (0x0005cf89) cell_ai_link_pane_g1

0x8c38,	// (0x00061d69) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x00068a23) cell_ai_link_pane_g

0x88db,	// (0x00061a0c) grid_highlight_cp2

0x88db,	// (0x00061a0c) bg_popup_sub_pane_cp1

0x8a4d,	// (0x00061b7e) popup_ai_links_title_window_t1

0x3da4,	// (0x0005ced5) ai_gene_pane_1_g1_ParamLimits

0x3da4,	// (0x0005ced5) ai_gene_pane_1_g1

0x3db0,	// (0x0005cee1) ai_gene_pane_1_g2_ParamLimits

0x3db0,	// (0x0005cee1) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x00068a19) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x00068a19) ai_gene_pane_1_g

0x3dbd,	// (0x0005ceee) ai_gene_pane_1_t1_ParamLimits

0x3dbd,	// (0x0005ceee) ai_gene_pane_1_t1

0x3df1,	// (0x0005cf22) grid_ai_soft_ind_pane

0x3d8f,	// (0x0005cec0) ai_gene_pane_2_t1_ParamLimits

0x3d8f,	// (0x0005cec0) ai_gene_pane_2_t1

0xa05b,	// (0x0006318c) main_pane_empty_t1_ParamLimits

0xa05b,	// (0x0006318c) main_pane_empty_t1

0xa073,	// (0x000631a4) main_pane_empty_t2_ParamLimits

0xa073,	// (0x000631a4) main_pane_empty_t2

0xa088,	// (0x000631b9) main_pane_empty_t3_ParamLimits

0xa088,	// (0x000631b9) main_pane_empty_t3

0xa09a,	// (0x000631cb) main_pane_empty_t4_ParamLimits

0xa09a,	// (0x000631cb) main_pane_empty_t4

0xa0ac,	// (0x000631dd) main_pane_empty_t5_ParamLimits

0xa0ac,	// (0x000631dd) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00068680) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00068680) main_pane_empty_t

0x9060,	// (0x00062191) bg_popup_window_pane_ParamLimits

0x9060,	// (0x00062191) bg_popup_window_pane

0x3903,	// (0x0005ca34) find_popup_pane_cp2_ParamLimits

0x3903,	// (0x0005ca34) find_popup_pane_cp2

0x3afd,	// (0x0005cc2e) heading_pane_ParamLimits

0x3afd,	// (0x0005cc2e) heading_pane

0x88db,	// (0x00061a0c) bg_popup_sub_pane

0xc511,	// (0x00065642) bg_popup_window_pane_g1_ParamLimits

0xc511,	// (0x00065642) bg_popup_window_pane_g1

0xc520,	// (0x00065651) bg_popup_window_pane_g2_ParamLimits

0xc520,	// (0x00065651) bg_popup_window_pane_g2

0xc52c,	// (0x0006565d) bg_popup_window_pane_g3_ParamLimits

0xc52c,	// (0x0006565d) bg_popup_window_pane_g3

0xc538,	// (0x00065669) bg_popup_window_pane_g4_ParamLimits

0xc538,	// (0x00065669) bg_popup_window_pane_g4

0xc547,	// (0x00065678) bg_popup_window_pane_g5_ParamLimits

0xc547,	// (0x00065678) bg_popup_window_pane_g5

0xc557,	// (0x00065688) bg_popup_window_pane_g6_ParamLimits

0xc557,	// (0x00065688) bg_popup_window_pane_g6

0xc563,	// (0x00065694) bg_popup_window_pane_g7_ParamLimits

0xc563,	// (0x00065694) bg_popup_window_pane_g7

0xc572,	// (0x000656a3) bg_popup_window_pane_g8_ParamLimits

0xc572,	// (0x000656a3) bg_popup_window_pane_g8

0xc581,	// (0x000656b2) bg_popup_window_pane_g9_ParamLimits

0xc581,	// (0x000656b2) bg_popup_window_pane_g9

0x38e9,	// (0x0005ca1a) bg_popup_window_pane_g10_ParamLimits

0x38e9,	// (0x0005ca1a) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x000689e1) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x000689e1) bg_popup_window_pane_g

0x3812,	// (0x0005c943) bg_popup_heading_pane_ParamLimits

0x3812,	// (0x0005c943) bg_popup_heading_pane

0x0bb4,	// (0x00059ce5) tabs_4_passive_pane_cp_srt_ParamLimits

0x0bb4,	// (0x00059ce5) tabs_4_passive_pane_cp_srt

0x0bc6,	// (0x00059cf7) tabs_4_passive_pane_srt_ParamLimits

0x3826,	// (0x0005c957) heading_pane_g2

0x0bc6,	// (0x00059cf7) tabs_4_passive_pane_srt

0x2ba9,	// (0x0005bcda) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2ba9,	// (0x0005bcda) bg_passive_tab_pane_cp3_srt

0x382e,	// (0x0005c95f) heading_pane_t1_ParamLimits

0x382e,	// (0x0005c95f) heading_pane_t1

0x3845,	// (0x0005c976) heading_pane_t2_ParamLimits

0x3845,	// (0x0005c976) heading_pane_t2

0x0001,

0xf8ab,	// (0x000689dc) heading_pane_t_ParamLimits

0xf8ab,	// (0x000689dc) heading_pane_t

0x333d,	// (0x0005c46e) bg_popup_heading_pane_g1

0x33ec,	// (0x0005c51d) bg_popup_heading_pane_g2

0x33f6,	// (0x0005c527) bg_popup_heading_pane_g3

0x3400,	// (0x0005c531) bg_popup_heading_pane_g4

0x340a,	// (0x0005c53b) bg_popup_heading_pane_g5

0x3414,	// (0x0005c545) bg_popup_heading_pane_g6

0x341c,	// (0x0005c54d) bg_popup_heading_pane_g7

0x3424,	// (0x0005c555) bg_popup_heading_pane_g8

0x342e,	// (0x0005c55f) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x00068998) bg_popup_heading_pane_g

0x2b1d,	// (0x0005bc4e) bg_popup_sub_pane_g1

0x2b2d,	// (0x0005bc5e) bg_popup_sub_pane_g2

0x2b25,	// (0x0005bc56) bg_popup_sub_pane_g3

0x2b3d,	// (0x0005bc6e) bg_popup_sub_pane_g4

0x2b35,	// (0x0005bc66) bg_popup_sub_pane_g5

0x2b45,	// (0x0005bc76) bg_popup_sub_pane_g6

0x2b4d,	// (0x0005bc7e) bg_popup_sub_pane_g7

0x2b5d,	// (0x0005bc8e) bg_popup_sub_pane_g8

0x2b55,	// (0x0005bc86) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x00068972) bg_popup_sub_pane_g

0x8a5c,	// (0x00061b8d) bg_popup_window_pane_cp5_ParamLimits

0x8a5c,	// (0x00061b8d) bg_popup_window_pane_cp5

0x8a78,	// (0x00061ba9) popup_note_window_g1_ParamLimits

0x8a78,	// (0x00061ba9) popup_note_window_g1

0x8a84,	// (0x00061bb5) popup_note_window_t1_ParamLimits

0x8a84,	// (0x00061bb5) popup_note_window_t1

0x8a9a,	// (0x00061bcb) popup_note_window_t2_ParamLimits

0x8a9a,	// (0x00061bcb) popup_note_window_t2

0x8ab0,	// (0x00061be1) popup_note_window_t3_ParamLimits

0x8ab0,	// (0x00061be1) popup_note_window_t3

0x8ac6,	// (0x00061bf7) popup_note_window_t4_ParamLimits

0x8ac6,	// (0x00061bf7) popup_note_window_t4

0x8aee,	// (0x00061c1f) popup_note_window_t5_ParamLimits

0x8aee,	// (0x00061c1f) popup_note_window_t5

0x0004,

0xf55a,	// (0x0006868b) popup_note_window_t_ParamLimits

0xf55a,	// (0x0006868b) popup_note_window_t

0x8b38,	// (0x00061c69) bg_popup_window_pane_cp6_ParamLimits

0x8b38,	// (0x00061c69) bg_popup_window_pane_cp6

0x32b9,	// (0x0005c3ea) popup_note_image_window_g1_ParamLimits

0x32b9,	// (0x0005c3ea) popup_note_image_window_g1

0x32c5,	// (0x0005c3f6) popup_note_image_window_g2_ParamLimits

0x32c5,	// (0x0005c3f6) popup_note_image_window_g2

0x0001,

0xf835,	// (0x00068966) popup_note_image_window_g_ParamLimits

0xf835,	// (0x00068966) popup_note_image_window_g

0x32de,	// (0x0005c40f) popup_note_image_window_t1_ParamLimits

0x32de,	// (0x0005c40f) popup_note_image_window_t1

0x32f7,	// (0x0005c428) popup_note_image_window_t2_ParamLimits

0x32f7,	// (0x0005c428) popup_note_image_window_t2

0x3310,	// (0x0005c441) popup_note_image_window_t3_ParamLimits

0x3310,	// (0x0005c441) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x0006896b) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x0006896b) popup_note_image_window_t

0x3179,	// (0x0005c2aa) bg_popup_window_pane_cp7_ParamLimits

0x3179,	// (0x0005c2aa) bg_popup_window_pane_cp7

0x31a9,	// (0x0005c2da) popup_note_wait_window_g1_ParamLimits

0x31a9,	// (0x0005c2da) popup_note_wait_window_g1

0x31b5,	// (0x0005c2e6) popup_note_wait_window_g2_ParamLimits

0x31b5,	// (0x0005c2e6) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x00068954) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x00068954) popup_note_wait_window_g

0x31cd,	// (0x0005c2fe) popup_note_wait_window_t1_ParamLimits

0x31cd,	// (0x0005c2fe) popup_note_wait_window_t1

0x31f4,	// (0x0005c325) popup_note_wait_window_t2_ParamLimits

0x31f4,	// (0x0005c325) popup_note_wait_window_t2

0x3212,	// (0x0005c343) popup_note_wait_window_t3_ParamLimits

0x3212,	// (0x0005c343) popup_note_wait_window_t3

0x3225,	// (0x0005c356) popup_note_wait_window_t4_ParamLimits

0x3225,	// (0x0005c356) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x0006895b) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x0006895b) popup_note_wait_window_t

0x324a,	// (0x0005c37b) wait_bar_pane_ParamLimits

0x324a,	// (0x0005c37b) wait_bar_pane

0x88db,	// (0x00061a0c) wait_anim_pane

0x88db,	// (0x00061a0c) wait_border_pane

0x88d1,	// (0x00061a02) wait_anim_pane_g1

0x88d1,	// (0x00061a02) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x00068814) wait_anim_pane_g

0x311d,	// (0x0005c24e) wait_border_pane_g1

0x3128,	// (0x0005c259) wait_border_pane_g2

0x3131,	// (0x0005c262) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0006894d) wait_border_pane_g

0x2f87,	// (0x0005c0b8) bg_popup_window_pane_cp16_ParamLimits

0x2f87,	// (0x0005c0b8) bg_popup_window_pane_cp16

0x3087,	// (0x0005c1b8) indicator_popup_pane_cp4_ParamLimits

0x3087,	// (0x0005c1b8) indicator_popup_pane_cp4

0x309b,	// (0x0005c1cc) popup_query_data_window_t1_ParamLimits

0x309b,	// (0x0005c1cc) popup_query_data_window_t1

0x30ad,	// (0x0005c1de) popup_query_data_window_t2_ParamLimits

0x30ad,	// (0x0005c1de) popup_query_data_window_t2

0x30c6,	// (0x0005c1f7) popup_query_data_window_t3_ParamLimits

0x30c6,	// (0x0005c1f7) popup_query_data_window_t3

0x0002,

0xf815,	// (0x00068946) popup_query_data_window_t_ParamLimits

0xf815,	// (0x00068946) popup_query_data_window_t

0x30e0,	// (0x0005c211) query_popup_data_pane_ParamLimits

0x30e0,	// (0x0005c211) query_popup_data_pane

0x30f4,	// (0x0005c225) query_popup_data_pane_cp1_ParamLimits

0x30f4,	// (0x0005c225) query_popup_data_pane_cp1

0x2f87,	// (0x0005c0b8) bg_popup_window_pane_cp10_ParamLimits

0x2f87,	// (0x0005c0b8) bg_popup_window_pane_cp10

0x2fb9,	// (0x0005c0ea) indicator_popup_pane_ParamLimits

0x2fb9,	// (0x0005c0ea) indicator_popup_pane

0x2fdb,	// (0x0005c10c) popup_query_code_window_t1_ParamLimits

0x2fdb,	// (0x0005c10c) popup_query_code_window_t1

0x2ff5,	// (0x0005c126) popup_query_code_window_t2_ParamLimits

0x2ff5,	// (0x0005c126) popup_query_code_window_t2

0x303e,	// (0x0005c16f) popup_query_code_window_t3_ParamLimits

0x303e,	// (0x0005c16f) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0006893f) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0006893f) popup_query_code_window_t

0x306d,	// (0x0005c19e) query_popup_pane_ParamLimits

0x306d,	// (0x0005c19e) query_popup_pane

0x8b38,	// (0x00061c69) bg_popup_window_pane_cp15_ParamLimits

0x8b38,	// (0x00061c69) bg_popup_window_pane_cp15

0x8b58,	// (0x00061c89) indicator_popup_pane_cp1_ParamLimits

0x8b58,	// (0x00061c89) indicator_popup_pane_cp1

0x8b6b,	// (0x00061c9c) indicator_popup_pane_cp2_ParamLimits

0x8b6b,	// (0x00061c9c) indicator_popup_pane_cp2

0x8b86,	// (0x00061cb7) popup_query_data_code_window_g1_ParamLimits

0x8b86,	// (0x00061cb7) popup_query_data_code_window_g1

0x8b99,	// (0x00061cca) popup_query_data_code_window_t1_ParamLimits

0x8b99,	// (0x00061cca) popup_query_data_code_window_t1

0x8bab,	// (0x00061cdc) popup_query_data_code_window_t2_ParamLimits

0x8bab,	// (0x00061cdc) popup_query_data_code_window_t2

0x8bbd,	// (0x00061cee) popup_query_data_code_window_t3_ParamLimits

0x8bbd,	// (0x00061cee) popup_query_data_code_window_t3

0x8bd3,	// (0x00061d04) popup_query_data_code_window_t4_ParamLimits

0x8bd3,	// (0x00061d04) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00068696) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00068696) popup_query_data_code_window_t

0x0799,	// (0x000598ca) list_single_midp_graphic_pane_g3

0x8bed,	// (0x00061d1e) query_popup_data_pane_cp2_ParamLimits

0x8c00,	// (0x00061d31) query_popup_pane_cp2_ParamLimits

0x8c00,	// (0x00061d31) query_popup_pane_cp2

0x88db,	// (0x00061a0c) bg_popup_window_pane_cp11

0x2f6b,	// (0x0005c09c) heading_pane_cp5

0x2f73,	// (0x0005c0a4) listscroll_popup_info_pane

0x88db,	// (0x00061a0c) input_focus_pane_cp3

0x8c1b,	// (0x00061d4c) query_popup_pane_t1

0x8c29,	// (0x00061d5a) list_popup_info_pane_ParamLimits

0x8c29,	// (0x00061d5a) list_popup_info_pane

0x8c38,	// (0x00061d69) listscroll_popup_info_pane_g1

0x8c40,	// (0x00061d71) scroll_pane_cp7

0x8c4a,	// (0x00061d7b) popup_info_list_pane_t1_ParamLimits

0x8c4a,	// (0x00061d7b) popup_info_list_pane_t1

0x8c64,	// (0x00061d95) popup_info_list_pane_t2_ParamLimits

0x8c64,	// (0x00061d95) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0006869f) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0006869f) popup_info_list_pane_t

0x88db,	// (0x00061a0c) bg_popup_window_pane_cp12

0x452b,	// (0x0005d65c) find_popup_pane

0x8929,	// (0x00061a5a) bg_popup_window_pane_cp3

0x8c7e,	// (0x00061daf) heading_pane_cp3

0x8c8d,	// (0x00061dbe) listscroll_popup_graphic_pane

0x88db,	// (0x00061a0c) bg_popup_window_pane_cp4

0xa10e,	// (0x0006323f) heading_pane_cp4

0x8c9d,	// (0x00061dce) listscroll_popup_colour_pane

0xa118,	// (0x00063249) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa118,	// (0x00063249) cell_large_graphic_colour_none_popup_pane

0xa12c,	// (0x0006325d) grid_large_graphic_colour_popup_pane_ParamLimits

0xa12c,	// (0x0006325d) grid_large_graphic_colour_popup_pane

0xa154,	// (0x00063285) listscroll_popup_colour_pane_g1_ParamLimits

0xa154,	// (0x00063285) listscroll_popup_colour_pane_g1

0xa16b,	// (0x0006329c) listscroll_popup_colour_pane_g2_ParamLimits

0xa16b,	// (0x0006329c) listscroll_popup_colour_pane_g2

0xa182,	// (0x000632b3) listscroll_popup_colour_pane_g3_ParamLimits

0xa182,	// (0x000632b3) listscroll_popup_colour_pane_g3

0xa192,	// (0x000632c3) listscroll_popup_colour_pane_g4_ParamLimits

0xa192,	// (0x000632c3) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x000686a4) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x000686a4) listscroll_popup_colour_pane_g

0x8ca5,	// (0x00061dd6) scroll_pane_cp6_ParamLimits

0x8ca5,	// (0x00061dd6) scroll_pane_cp6

0xa1a2,	// (0x000632d3) cell_large_graphic_colour_popup_pane_ParamLimits

0xa1a2,	// (0x000632d3) cell_large_graphic_colour_popup_pane

0x8cb7,	// (0x00061de8) cell_large_graphic_colour_none_popup_pane_t1

0x88db,	// (0x00061a0c) grid_highlight_pane_cp5

0x8cc6,	// (0x00061df7) cell_large_graphic_colour_popup_pane_g1

0x8cce,	// (0x00061dff) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x000686ad) cell_large_graphic_colour_popup_pane_g

0x8cd6,	// (0x00061e07) cell_large_graphic_colour_popup_pane_g2_copy1

0x8cdf,	// (0x00061e10) grid_highlight_pane_cp4

0x8ce7,	// (0x00061e18) bg_popup_window_pane_cp8_ParamLimits

0x8ce7,	// (0x00061e18) bg_popup_window_pane_cp8

0x8d02,	// (0x00061e33) popup_snote_single_text_window_g1_ParamLimits

0x8d02,	// (0x00061e33) popup_snote_single_text_window_g1

0x8d14,	// (0x00061e45) popup_snote_single_text_window_t1_ParamLimits

0x8d14,	// (0x00061e45) popup_snote_single_text_window_t1

0x8d27,	// (0x00061e58) popup_snote_single_text_window_t2_ParamLimits

0x8d27,	// (0x00061e58) popup_snote_single_text_window_t2

0x8d3a,	// (0x00061e6b) popup_snote_single_text_window_t3_ParamLimits

0x8d3a,	// (0x00061e6b) popup_snote_single_text_window_t3

0x8d73,	// (0x00061ea4) popup_snote_single_text_window_t4_ParamLimits

0x8d73,	// (0x00061ea4) popup_snote_single_text_window_t4

0x8da7,	// (0x00061ed8) popup_snote_single_text_window_t5_ParamLimits

0x8da7,	// (0x00061ed8) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x000686b2) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x000686b2) popup_snote_single_text_window_t

0x8dd6,	// (0x00061f07) bg_popup_window_pane_cp9_ParamLimits

0x8dd6,	// (0x00061f07) bg_popup_window_pane_cp9

0x8d02,	// (0x00061e33) popup_snote_single_graphic_window_g1_ParamLimits

0x8d02,	// (0x00061e33) popup_snote_single_graphic_window_g1

0x8de4,	// (0x00061f15) popup_snote_single_graphic_window_g2_ParamLimits

0x8de4,	// (0x00061f15) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x000686bd) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x000686bd) popup_snote_single_graphic_window_g

0x8df0,	// (0x00061f21) popup_snote_single_graphic_window_t1_ParamLimits

0x8df0,	// (0x00061f21) popup_snote_single_graphic_window_t1

0x8e03,	// (0x00061f34) popup_snote_single_graphic_window_t2_ParamLimits

0x8e03,	// (0x00061f34) popup_snote_single_graphic_window_t2

0x8e16,	// (0x00061f47) popup_snote_single_graphic_window_t3_ParamLimits

0x8e16,	// (0x00061f47) popup_snote_single_graphic_window_t3

0x8e4f,	// (0x00061f80) popup_snote_single_graphic_window_t4_ParamLimits

0x8e4f,	// (0x00061f80) popup_snote_single_graphic_window_t4

0x8e83,	// (0x00061fb4) popup_snote_single_graphic_window_t5_ParamLimits

0x8e83,	// (0x00061fb4) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x000686c2) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x000686c2) popup_snote_single_graphic_window_t

0x4469,	// (0x0005d59a) grid_graphic_popup_pane_ParamLimits

0x4469,	// (0x0005d59a) grid_graphic_popup_pane

0x4497,	// (0x0005d5c8) listscroll_popup_graphic_pane_g1_ParamLimits

0x4497,	// (0x0005d5c8) listscroll_popup_graphic_pane_g1

0xc921,	// (0x00065a52) listscroll_popup_graphic_pane_g2_ParamLimits

0xc921,	// (0x00065a52) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x00068abc) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x00068abc) listscroll_popup_graphic_pane_g

0x44bf,	// (0x0005d5f0) scroll_pane_cp5

0xc8d9,	// (0x00065a0a) cell_graphic_popup_pane_ParamLimits

0xc8d9,	// (0x00065a0a) cell_graphic_popup_pane

0x43e2,	// (0x0005d513) cell_graphic_popup_pane_g1

0x43ea,	// (0x0005d51b) cell_graphic_popup_pane_g2

0x8cd6,	// (0x00061e07) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x00068ab5) cell_graphic_popup_pane_g

0x43f3,	// (0x0005d524) cell_graphic_popup_pane_t2

0x8cdf,	// (0x00061e10) grid_highlight_pane_cp3

0x8ec4,	// (0x00061ff5) list_gen_pane_ParamLimits

0x8ec4,	// (0x00061ff5) list_gen_pane

0x8eec,	// (0x0006201d) scroll_pane

0xc890,	// (0x000659c1) bg_list_pane_g1_ParamLimits

0xc890,	// (0x000659c1) bg_list_pane_g1

0x4357,	// (0x0005d488) bg_list_pane_g2_ParamLimits

0x4357,	// (0x0005d488) bg_list_pane_g2

0x436c,	// (0x0005d49d) bg_list_pane_g3_ParamLimits

0x436c,	// (0x0005d49d) bg_list_pane_g3

0x4380,	// (0x0005d4b1) bg_list_pane_g4_ParamLimits

0x4380,	// (0x0005d4b1) bg_list_pane_g4

0xc8ad,	// (0x000659de) bg_list_pane_g5_ParamLimits

0xc8ad,	// (0x000659de) bg_list_pane_g5

0x0004,

0xf979,	// (0x00068aaa) bg_list_pane_g_ParamLimits

0xf979,	// (0x00068aaa) bg_list_pane_g

0xc82a,	// (0x0006595b) list_double2_graphic_large_graphic_pane_ParamLimits

0xc82a,	// (0x0006595b) list_double2_graphic_large_graphic_pane

0xc82a,	// (0x0006595b) list_double2_graphic_pane_ParamLimits

0xc82a,	// (0x0006595b) list_double2_graphic_pane

0xc82a,	// (0x0006595b) list_double2_large_graphic_pane_ParamLimits

0xc82a,	// (0x0006595b) list_double2_large_graphic_pane

0xc82a,	// (0x0006595b) list_double2_pane_ParamLimits

0xc82a,	// (0x0006595b) list_double2_pane

0xc82a,	// (0x0006595b) list_double_graphic_heading_pane_ParamLimits

0xc82a,	// (0x0006595b) list_double_graphic_heading_pane

0xc82a,	// (0x0006595b) list_double_graphic_pane_ParamLimits

0xc82a,	// (0x0006595b) list_double_graphic_pane

0xc82a,	// (0x0006595b) list_double_heading_pane_ParamLimits

0xc82a,	// (0x0006595b) list_double_heading_pane

0xc82a,	// (0x0006595b) list_double_large_graphic_pane_ParamLimits

0xc82a,	// (0x0006595b) list_double_large_graphic_pane

0xc82a,	// (0x0006595b) list_double_number_pane_ParamLimits

0xc82a,	// (0x0006595b) list_double_number_pane

0xc82a,	// (0x0006595b) list_double_pane_ParamLimits

0xc82a,	// (0x0006595b) list_double_pane

0xc82a,	// (0x0006595b) list_double_time_pane_ParamLimits

0xc82a,	// (0x0006595b) list_double_time_pane

0xc82a,	// (0x0006595b) list_setting_number_pane_ParamLimits

0xc82a,	// (0x0006595b) list_setting_number_pane

0xc82a,	// (0x0006595b) list_setting_pane_ParamLimits

0xc82a,	// (0x0006595b) list_setting_pane

0xc83e,	// (0x0006596f) list_single_2graphic_pane_ParamLimits

0xc83e,	// (0x0006596f) list_single_2graphic_pane

0xc83e,	// (0x0006596f) list_single_graphic_heading_pane_ParamLimits

0xc83e,	// (0x0006596f) list_single_graphic_heading_pane

0xc83e,	// (0x0006596f) list_single_graphic_pane_ParamLimits

0xc83e,	// (0x0006596f) list_single_graphic_pane

0xc83e,	// (0x0006596f) list_single_heading_pane_ParamLimits

0xc83e,	// (0x0006596f) list_single_heading_pane

0xc83e,	// (0x0006596f) list_single_large_graphic_pane_ParamLimits

0xc83e,	// (0x0006596f) list_single_large_graphic_pane

0xc83e,	// (0x0006596f) list_single_number_heading_pane_ParamLimits

0xc83e,	// (0x0006596f) list_single_number_heading_pane

0xc83e,	// (0x0006596f) list_single_number_pane_ParamLimits

0xc83e,	// (0x0006596f) list_single_number_pane

0xc83e,	// (0x0006596f) list_single_pane_ParamLimits

0xc83e,	// (0x0006596f) list_single_pane

0x88db,	// (0x00061a0c) list_highlight_pane_cp1

0x2aa9,	// (0x0005bbda) list_single_pane_g1_ParamLimits

0x2aa9,	// (0x0005bbda) list_single_pane_g1

0x2ab5,	// (0x0005bbe6) list_single_pane_g2_ParamLimits

0x2ab5,	// (0x0005bbe6) list_single_pane_g2

0x0001,

0xf5ad,	// (0x000686de) list_single_pane_g_ParamLimits

0xf5ad,	// (0x000686de) list_single_pane_g

0xe0e3,	// (0x00067214) list_single_pane_t1_ParamLimits

0xe0e3,	// (0x00067214) list_single_pane_t1

0x2aa9,	// (0x0005bbda) list_single_number_pane_g1_ParamLimits

0x2aa9,	// (0x0005bbda) list_single_number_pane_g1

0x2ab5,	// (0x0005bbe6) list_single_number_pane_g2_ParamLimits

0x2ab5,	// (0x0005bbe6) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x000686de) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x000686de) list_single_number_pane_g

0xe014,	// (0x00067145) list_single_number_pane_t1_ParamLimits

0xe014,	// (0x00067145) list_single_number_pane_t1

0xe0d1,	// (0x00067202) list_single_number_pane_t2_ParamLimits

0xe0d1,	// (0x00067202) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x00068a6b) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x00068a6b) list_single_number_pane_t

0xa1cd,	// (0x000632fe) list_single_graphic_pane_g1_ParamLimits

0xa1cd,	// (0x000632fe) list_single_graphic_pane_g1

0x2aa9,	// (0x0005bbda) list_single_graphic_pane_g2_ParamLimits

0x2aa9,	// (0x0005bbda) list_single_graphic_pane_g2

0x2ab5,	// (0x0005bbe6) list_single_graphic_pane_g3_ParamLimits

0x2ab5,	// (0x0005bbe6) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x000686cd) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x000686cd) list_single_graphic_pane_g

0xa1d9,	// (0x0006330a) list_single_graphic_pane_t1_ParamLimits

0xa1d9,	// (0x0006330a) list_single_graphic_pane_t1

0xa1ef,	// (0x00063320) list_single_heading_pane_g1_ParamLimits

0xa1ef,	// (0x00063320) list_single_heading_pane_g1

0x2ab5,	// (0x0005bbe6) list_single_heading_pane_g2_ParamLimits

0x2ab5,	// (0x0005bbe6) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x000686d4) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x000686d4) list_single_heading_pane_g

0xa202,	// (0x00063333) list_single_heading_pane_t1_ParamLimits

0xa202,	// (0x00063333) list_single_heading_pane_t1

0xa218,	// (0x00063349) list_single_heading_pane_t2_ParamLimits

0xa218,	// (0x00063349) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x000686d9) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x000686d9) list_single_heading_pane_t

0x2aa9,	// (0x0005bbda) list_single_number_heading_pane_g1_ParamLimits

0x2aa9,	// (0x0005bbda) list_single_number_heading_pane_g1

0x2ab5,	// (0x0005bbe6) list_single_number_heading_pane_g2_ParamLimits

0x2ab5,	// (0x0005bbe6) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x000686de) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x000686de) list_single_number_heading_pane_g

0xdb4f,	// (0x00066c80) list_single_number_heading_pane_t1_ParamLimits

0xdb4f,	// (0x00066c80) list_single_number_heading_pane_t1

0xa22a,	// (0x0006335b) list_single_number_heading_pane_t2_ParamLimits

0xa22a,	// (0x0006335b) list_single_number_heading_pane_t2

0xdb65,	// (0x00066c96) list_single_number_heading_pane_t3_ParamLimits

0xdb65,	// (0x00066c96) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x000686e3) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x000686e3) list_single_number_heading_pane_t

0xdb77,	// (0x00066ca8) list_single_graphic_heading_pane_g1_ParamLimits

0xdb77,	// (0x00066ca8) list_single_graphic_heading_pane_g1

0xa23c,	// (0x0006336d) list_single_graphic_heading_pane_g4_ParamLimits

0xa23c,	// (0x0006336d) list_single_graphic_heading_pane_g4

0x2ab5,	// (0x0005bbe6) list_single_graphic_heading_pane_g5_ParamLimits

0x2ab5,	// (0x0005bbe6) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x000686ea) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x000686ea) list_single_graphic_heading_pane_g

0xdb4f,	// (0x00066c80) list_single_graphic_heading_pane_t1_ParamLimits

0xdb4f,	// (0x00066c80) list_single_graphic_heading_pane_t1

0xa24d,	// (0x0006337e) list_single_graphic_heading_pane_t2_ParamLimits

0xa24d,	// (0x0006337e) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x000686f1) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x000686f1) list_single_graphic_heading_pane_t

0x3976,	// (0x0005caa7) list_single_large_graphic_pane_g1_ParamLimits

0x3976,	// (0x0005caa7) list_single_large_graphic_pane_g1

0x2aa9,	// (0x0005bbda) list_single_large_graphic_pane_g2_ParamLimits

0x2aa9,	// (0x0005bbda) list_single_large_graphic_pane_g2

0x2ab5,	// (0x0005bbe6) list_single_large_graphic_pane_g3_ParamLimits

0x2ab5,	// (0x0005bbe6) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x000686f6) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x000686f6) list_single_large_graphic_pane_g

0x3128,	// (0x0005c259) wait_border_pane_g2_copy1

0xa25f,	// (0x00063390) list_single_large_graphic_pane_g4_cp2

0xdb83,	// (0x00066cb4) list_single_large_graphic_pane_t1_ParamLimits

0xdb83,	// (0x00066cb4) list_single_large_graphic_pane_t1

0xa267,	// (0x00063398) list_double_pane_g1_ParamLimits

0xa267,	// (0x00063398) list_double_pane_g1

0xa273,	// (0x000633a4) list_double_pane_g2_ParamLimits

0xa273,	// (0x000633a4) list_double_pane_g2

0x0001,

0xf5cc,	// (0x000686fd) list_double_pane_g_ParamLimits

0xf5cc,	// (0x000686fd) list_double_pane_g

0xa27f,	// (0x000633b0) list_double_pane_t1_ParamLimits

0xa27f,	// (0x000633b0) list_double_pane_t1

0xa295,	// (0x000633c6) list_double_pane_t2_ParamLimits

0xa295,	// (0x000633c6) list_double_pane_t2

0x0001,

0xf5d1,	// (0x00068702) list_double_pane_t_ParamLimits

0xf5d1,	// (0x00068702) list_double_pane_t

0xa2a7,	// (0x000633d8) list_double2_pane_g1_ParamLimits

0xa2a7,	// (0x000633d8) list_double2_pane_g1

0xa2b8,	// (0x000633e9) list_double2_pane_g2_ParamLimits

0xa2b8,	// (0x000633e9) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x00068707) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x00068707) list_double2_pane_g

0xa2c4,	// (0x000633f5) list_double2_pane_t1_ParamLimits

0xa2c4,	// (0x000633f5) list_double2_pane_t1

0xa2da,	// (0x0006340b) list_double2_pane_t2_ParamLimits

0xa2da,	// (0x0006340b) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0006870c) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0006870c) list_double2_pane_t

0xa267,	// (0x00063398) list_double_number_pane_g1_ParamLimits

0xa267,	// (0x00063398) list_double_number_pane_g1

0xa273,	// (0x000633a4) list_double_number_pane_g2_ParamLimits

0xa273,	// (0x000633a4) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x000686fd) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x000686fd) list_double_number_pane_g

0xa2ec,	// (0x0006341d) list_double_number_pane_t1_ParamLimits

0xa2ec,	// (0x0006341d) list_double_number_pane_t1

0xa2fe,	// (0x0006342f) list_double_number_pane_t2_ParamLimits

0xa2fe,	// (0x0006342f) list_double_number_pane_t2

0xa314,	// (0x00063445) list_double_number_pane_t3_ParamLimits

0xa314,	// (0x00063445) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x00068711) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x00068711) list_double_number_pane_t

0xa326,	// (0x00063457) list_double_graphic_pane_g1_ParamLimits

0xa326,	// (0x00063457) list_double_graphic_pane_g1

0xa332,	// (0x00063463) list_double_graphic_pane_g2_ParamLimits

0xa332,	// (0x00063463) list_double_graphic_pane_g2

0xa341,	// (0x00063472) list_double_graphic_pane_g3_ParamLimits

0xa341,	// (0x00063472) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x00068718) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x00068718) list_double_graphic_pane_g

0xa359,	// (0x0006348a) list_double_graphic_pane_t1_ParamLimits

0xa359,	// (0x0006348a) list_double_graphic_pane_t1

0xa36f,	// (0x000634a0) list_double_graphic_pane_t2_ParamLimits

0xa36f,	// (0x000634a0) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x00068721) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x00068721) list_double_graphic_pane_t

0xa381,	// (0x000634b2) list_double2_graphic_pane_g1_ParamLimits

0xa381,	// (0x000634b2) list_double2_graphic_pane_g1

0x5957,	// (0x0005ea88) list_double2_graphic_pane_g2_ParamLimits

0x5957,	// (0x0005ea88) list_double2_graphic_pane_g2

0xa38d,	// (0x000634be) list_double2_graphic_pane_g3_ParamLimits

0xa38d,	// (0x000634be) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x00068726) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x00068726) list_double2_graphic_pane_g

0xa399,	// (0x000634ca) list_double2_graphic_pane_t1_ParamLimits

0xa399,	// (0x000634ca) list_double2_graphic_pane_t1

0xa3af,	// (0x000634e0) list_double2_graphic_pane_t2_ParamLimits

0xa3af,	// (0x000634e0) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0006872d) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0006872d) list_double2_graphic_pane_t

0xa3c1,	// (0x000634f2) list_double_large_graphic_pane_g1_ParamLimits

0xa3c1,	// (0x000634f2) list_double_large_graphic_pane_g1

0xa3e0,	// (0x00063511) list_double_large_graphic_pane_g2_ParamLimits

0xa3e0,	// (0x00063511) list_double_large_graphic_pane_g2

0xa273,	// (0x000633a4) list_double_large_graphic_pane_g3_ParamLimits

0xa273,	// (0x000633a4) list_double_large_graphic_pane_g3

0xa3f6,	// (0x00063527) list_double_large_graphic_pane_g4_ParamLimits

0xa3f6,	// (0x00063527) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x00068732) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00068732) list_double_large_graphic_pane_g

0xa409,	// (0x0006353a) list_double_large_graphic_pane_t1_ParamLimits

0xa409,	// (0x0006353a) list_double_large_graphic_pane_t1

0xa422,	// (0x00063553) list_double_large_graphic_pane_t2_ParamLimits

0xa422,	// (0x00063553) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x0006873d) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x0006873d) list_double_large_graphic_pane_t

0xa434,	// (0x00063565) list_double2_large_graphic_pane_g1_ParamLimits

0xa434,	// (0x00063565) list_double2_large_graphic_pane_g1

0xa440,	// (0x00063571) list_double2_large_graphic_pane_g2_ParamLimits

0xa440,	// (0x00063571) list_double2_large_graphic_pane_g2

0xa38d,	// (0x000634be) list_double2_large_graphic_pane_g3_ParamLimits

0xa38d,	// (0x000634be) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x00068742) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x00068742) list_double2_large_graphic_pane_g

0xa451,	// (0x00063582) list_double2_large_graphic_pane_t1_ParamLimits

0xa451,	// (0x00063582) list_double2_large_graphic_pane_t1

0xa467,	// (0x00063598) list_double2_large_graphic_pane_t2_ParamLimits

0xa467,	// (0x00063598) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x00068749) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x00068749) list_double2_large_graphic_pane_t

0xa479,	// (0x000635aa) list_double_heading_pane_g1_ParamLimits

0xa479,	// (0x000635aa) list_double_heading_pane_g1

0xa48a,	// (0x000635bb) list_double_heading_pane_g2_ParamLimits

0xa48a,	// (0x000635bb) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x0006874e) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x0006874e) list_double_heading_pane_g

0xa496,	// (0x000635c7) list_double_heading_pane_t1_ParamLimits

0xa496,	// (0x000635c7) list_double_heading_pane_t1

0xa4ac,	// (0x000635dd) list_double_heading_pane_t2_ParamLimits

0xa4ac,	// (0x000635dd) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x00068753) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x00068753) list_double_heading_pane_t

0xa4be,	// (0x000635ef) list_double_graphic_heading_pane_g1_ParamLimits

0xa4be,	// (0x000635ef) list_double_graphic_heading_pane_g1

0xa479,	// (0x000635aa) list_double_graphic_heading_pane_g2_ParamLimits

0xa479,	// (0x000635aa) list_double_graphic_heading_pane_g2

0xa48a,	// (0x000635bb) list_double_graphic_heading_pane_g3_ParamLimits

0xa48a,	// (0x000635bb) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x00068758) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x00068758) list_double_graphic_heading_pane_g

0xa4ca,	// (0x000635fb) list_double_graphic_heading_pane_t1_ParamLimits

0xa4ca,	// (0x000635fb) list_double_graphic_heading_pane_t1

0xa4e0,	// (0x00063611) list_double_graphic_heading_pane_t2_ParamLimits

0xa4e0,	// (0x00063611) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x0006875f) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x0006875f) list_double_graphic_heading_pane_t

0xa4f2,	// (0x00063623) list_double_time_pane_g1_ParamLimits

0xa4f2,	// (0x00063623) list_double_time_pane_g1

0xa503,	// (0x00063634) list_double_time_pane_g2_ParamLimits

0xa503,	// (0x00063634) list_double_time_pane_g2

0x0001,

0xf633,	// (0x00068764) list_double_time_pane_g_ParamLimits

0xf633,	// (0x00068764) list_double_time_pane_g

0xa50f,	// (0x00063640) list_double_time_pane_t1_ParamLimits

0xa50f,	// (0x00063640) list_double_time_pane_t1

0xa525,	// (0x00063656) list_double_time_pane_t2_ParamLimits

0xa525,	// (0x00063656) list_double_time_pane_t2

0xa537,	// (0x00063668) list_double_time_pane_t3_ParamLimits

0xa537,	// (0x00063668) list_double_time_pane_t3

0xa549,	// (0x0006367a) list_double_time_pane_t4_ParamLimits

0xa549,	// (0x0006367a) list_double_time_pane_t4

0x0003,

0xf638,	// (0x00068769) list_double_time_pane_t_ParamLimits

0xf638,	// (0x00068769) list_double_time_pane_t

0xa55b,	// (0x0006368c) list_setting_pane_g1_ParamLimits

0xa55b,	// (0x0006368c) list_setting_pane_g1

0xa567,	// (0x00063698) list_setting_pane_g2_ParamLimits

0xa567,	// (0x00063698) list_setting_pane_g2

0x0001,

0xf641,	// (0x00068772) list_setting_pane_g_ParamLimits

0xf641,	// (0x00068772) list_setting_pane_g

0xa573,	// (0x000636a4) list_setting_pane_t1_ParamLimits

0xa573,	// (0x000636a4) list_setting_pane_t1

0xa58d,	// (0x000636be) list_setting_pane_t2_ParamLimits

0xa58d,	// (0x000636be) list_setting_pane_t2

0x0002,

0xf646,	// (0x00068777) list_setting_pane_t_ParamLimits

0xf646,	// (0x00068777) list_setting_pane_t

0xa5cc,	// (0x000636fd) set_value_pane_cp_ParamLimits

0xa5cc,	// (0x000636fd) set_value_pane_cp

0xa5da,	// (0x0006370b) list_setting_number_pane_g1_ParamLimits

0xa5da,	// (0x0006370b) list_setting_number_pane_g1

0xa5e6,	// (0x00063717) list_setting_number_pane_g2_ParamLimits

0xa5e6,	// (0x00063717) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x0006877e) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x0006877e) list_setting_number_pane_g

0xa5f2,	// (0x00063723) list_setting_number_pane_t1_ParamLimits

0xa5f2,	// (0x00063723) list_setting_number_pane_t1

0xa60b,	// (0x0006373c) list_setting_number_pane_t2_ParamLimits

0xa60b,	// (0x0006373c) list_setting_number_pane_t2

0xa625,	// (0x00063756) list_setting_number_pane_t3_ParamLimits

0xa625,	// (0x00063756) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x00068783) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x00068783) list_setting_number_pane_t

0xa5cc,	// (0x000636fd) set_value_pane_ParamLimits

0xa5cc,	// (0x000636fd) set_value_pane

0x8f20,	// (0x00062051) bg_set_opt_pane_ParamLimits

0x8f20,	// (0x00062051) bg_set_opt_pane

0xdb99,	// (0x00066cca) set_value_pane_t1

0x8f41,	// (0x00062072) slider_set_pane_cp3

0x8f4a,	// (0x0006207b) volume_small_pane_cp

0x8f53,	// (0x00062084) list_form_gen_pane

0x8f5c,	// (0x0006208d) scroll_pane_cp8

0xa668,	// (0x00063799) form_field_data_pane_ParamLimits

0xa668,	// (0x00063799) form_field_data_pane

0xa685,	// (0x000637b6) form_field_data_wide_pane_ParamLimits

0xa685,	// (0x000637b6) form_field_data_wide_pane

0xa6a9,	// (0x000637da) form_field_popup_pane_ParamLimits

0xa6a9,	// (0x000637da) form_field_popup_pane

0xdbb7,	// (0x00066ce8) form_field_popup_wide_pane_ParamLimits

0xdbb7,	// (0x00066ce8) form_field_popup_wide_pane

0xdbd8,	// (0x00066d09) form_field_slider_pane_ParamLimits

0xdbd8,	// (0x00066d09) form_field_slider_pane

0xdbeb,	// (0x00066d1c) form_field_slider_wide_pane_ParamLimits

0xdbeb,	// (0x00066d1c) form_field_slider_wide_pane

0x8f6d,	// (0x0006209e) data_form_pane

0xa6d5,	// (0x00063806) form_field_data_pane_t1

0x8f79,	// (0x000620aa) input_focus_pane

0xdbfe,	// (0x00066d2f) data_form_wide_pane

0xdc1b,	// (0x00066d4c) form_field_data_wide_pane_t1

0x8cf4,	// (0x00061e25) input_focus_pane_cp6

0xa6ef,	// (0x00063820) form_field_popup_pane_t1

0x8f79,	// (0x000620aa) input_focus_pane_cp7

0x8fa7,	// (0x000620d8) list_form_pane

0xdc45,	// (0x00066d76) form_field_popup_wide_pane_t1

0x8f79,	// (0x000620aa) input_focus_pane_cp8

0x8fb3,	// (0x000620e4) list_form_wide_pane

0xa711,	// (0x00063842) form_field_slider_pane_t1_ParamLimits

0xa711,	// (0x00063842) form_field_slider_pane_t1

0xa729,	// (0x0006385a) form_field_slider_pane_t2_ParamLimits

0xa729,	// (0x0006385a) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x00068793) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x00068793) form_field_slider_pane_t

0x8a5c,	// (0x00061b8d) input_focus_pane_cp9_ParamLimits

0x8a5c,	// (0x00061b8d) input_focus_pane_cp9

0xa73e,	// (0x0006386f) slider_cont_pane_ParamLimits

0xa73e,	// (0x0006386f) slider_cont_pane

0x8fbf,	// (0x000620f0) form_field_slider_wide_pane_t1_ParamLimits

0x8fbf,	// (0x000620f0) form_field_slider_wide_pane_t1

0xdc5a,	// (0x00066d8b) form_field_slider_wide_pane_t2_ParamLimits

0xdc5a,	// (0x00066d8b) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x00068798) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x00068798) form_field_slider_wide_pane_t

0x8a5c,	// (0x00061b8d) input_focus_pane_cp10_ParamLimits

0x8a5c,	// (0x00061b8d) input_focus_pane_cp10

0xa752,	// (0x00063883) slider_cont_pane_cp1_ParamLimits

0xa752,	// (0x00063883) slider_cont_pane_cp1

0xa766,	// (0x00063897) slider_form_pane_cp

0x8fd1,	// (0x00062102) input_focus_pane_g1

0x8fd9,	// (0x0006210a) input_focus_pane_g2

0x8fe1,	// (0x00062112) input_focus_pane_g3

0x8fe9,	// (0x0006211a) input_focus_pane_g4

0x8ff1,	// (0x00062122) input_focus_pane_g5

0x8ff9,	// (0x0006212a) input_focus_pane_g6

0x9001,	// (0x00062132) input_focus_pane_g7

0x9009,	// (0x0006213a) input_focus_pane_g8

0x9011,	// (0x00062142) input_focus_pane_g9

0x88d1,	// (0x00061a02) input_focus_pane_g10

0x0009,

0xf66c,	// (0x0006879d) input_focus_pane_g

0x3131,	// (0x0005c262) wait_border_pane_g3_copy1

0xa76e,	// (0x0006389f) data_form_pane_t1

0x88d1,	// (0x00061a02) wait_anim_pane_g1_copy1

0xb6b5,	// (0x000647e6) data_form_wide_pane_t1

0xdc6c,	// (0x00066d9d) list_form_graphic_pane_cp_ParamLimits

0xdc6c,	// (0x00066d9d) list_form_graphic_pane_cp

0x4276,	// (0x0005d3a7) slider_form_pane_g1

0x427f,	// (0x0005d3b0) slider_form_pane_g2

0x0006,

0xf96a,	// (0x00068a9b) slider_form_pane_g

0xa78a,	// (0x000638bb) list_form_graphic_pane_ParamLimits

0xa78a,	// (0x000638bb) list_form_graphic_pane

0xdc7e,	// (0x00066daf) list_form_graphic_pane_g1

0xdc86,	// (0x00066db7) list_form_graphic_pane_t1_ParamLimits

0xdc86,	// (0x00066db7) list_form_graphic_pane_t1

0x8929,	// (0x00061a5a) list_highlight_pane_cp5_ParamLimits

0x8929,	// (0x00061a5a) list_highlight_pane_cp5

0xa79b,	// (0x000638cc) find_pane_g1

0x9019,	// (0x0006214a) input_find_pane

0xa7a4,	// (0x000638d5) input_find_pane_g1_ParamLimits

0xa7a4,	// (0x000638d5) input_find_pane_g1

0xa7b0,	// (0x000638e1) input_find_pane_t1_ParamLimits

0xa7b0,	// (0x000638e1) input_find_pane_t1

0xa7c5,	// (0x000638f6) input_find_pane_t2_ParamLimits

0xa7c5,	// (0x000638f6) input_find_pane_t2

0x0001,

0xf681,	// (0x000687b2) input_find_pane_t_ParamLimits

0xf681,	// (0x000687b2) input_find_pane_t

0x9022,	// (0x00062153) input_focus_pane_cp5_ParamLimits

0x9022,	// (0x00062153) input_focus_pane_cp5

0x9035,	// (0x00062166) bg_popup_window_pane_cp2_ParamLimits

0x9035,	// (0x00062166) bg_popup_window_pane_cp2

0x9042,	// (0x00062173) listscroll_menu_pane_ParamLimits

0x9042,	// (0x00062173) listscroll_menu_pane

0xa7e6,	// (0x00063917) popup_submenu_window_ParamLimits

0xa7e6,	// (0x00063917) popup_submenu_window

0x904e,	// (0x0006217f) find_popup_pane_g1

0x9056,	// (0x00062187) input_popup_find_pane_cp

0x9060,	// (0x00062191) input_focus_pane_cp4_ParamLimits

0x9060,	// (0x00062191) input_focus_pane_cp4

0x906e,	// (0x0006219f) input_popup_find_pane_t1_ParamLimits

0x906e,	// (0x0006219f) input_popup_find_pane_t1

0x88db,	// (0x00061a0c) bg_popup_sub_pane_cp

0x909c,	// (0x000621cd) listscroll_popup_sub_pane

0x90a4,	// (0x000621d5) list_submenu_pane_ParamLimits

0x90a4,	// (0x000621d5) list_submenu_pane

0x90b5,	// (0x000621e6) scroll_pane_cp4

0x90bd,	// (0x000621ee) list_single_popup_submenu_pane_ParamLimits

0x90bd,	// (0x000621ee) list_single_popup_submenu_pane

0x90d2,	// (0x00062203) list_single_popup_submenu_pane_g1

0x90da,	// (0x0006220b) list_single_popup_submenu_pane_t1_ParamLimits

0x90da,	// (0x0006220b) list_single_popup_submenu_pane_t1

0x8a5c,	// (0x00061b8d) bg_active_tab_pane_cp1_ParamLimits

0x8a5c,	// (0x00061b8d) bg_active_tab_pane_cp1

0xa824,	// (0x00063955) tabs_2_active_pane_g1

0xa82c,	// (0x0006395d) tabs_2_active_pane_t1

0x8a5c,	// (0x00061b8d) bg_passive_tab_pane_cp1_ParamLimits

0x8a5c,	// (0x00061b8d) bg_passive_tab_pane_cp1

0xa824,	// (0x00063955) tabs_2_passive_pane_g1

0xa82c,	// (0x0006395d) tabs_2_passive_pane_t1

0x8929,	// (0x00061a5a) bg_active_tab_pane_cp4

0xa83e,	// (0x0006396f) tabs_2_long_active_pane_t1

0x25cd,	// (0x0005b6fe) bg_passive_tab_pane_cp4

0x07a1,	// (0x000598d2) list_single_midp_graphic_pane_g4_ParamLimits

0x8929,	// (0x00061a5a) bg_active_tab_pane_cp5

0xa851,	// (0x00063982) tabs_3_long_active_pane_t1

0x25cd,	// (0x0005b6fe) bg_passive_tab_pane_cp5

0x07a1,	// (0x000598d2) list_single_midp_graphic_pane_g4

0x8929,	// (0x00061a5a) bg_popup_window_pane_cp13_ParamLimits

0x8929,	// (0x00061a5a) bg_popup_window_pane_cp13

0x90f8,	// (0x00062229) listscroll_popup_fast_pane_ParamLimits

0x90f8,	// (0x00062229) listscroll_popup_fast_pane

0x9107,	// (0x00062238) grid_popup_fast_pane_ParamLimits

0x9107,	// (0x00062238) grid_popup_fast_pane

0x9119,	// (0x0006224a) scroll_pane_cp9_ParamLimits

0x9119,	// (0x0006224a) scroll_pane_cp9

0x5be5,	// (0x0005ed16) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5be5,	// (0x0005ed16) list_single_graphic_hl_pane_t1_cp2

0x913d,	// (0x0006226e) input_focus_pane_cp20_ParamLimits

0x913d,	// (0x0006226e) input_focus_pane_cp20

0x914b,	// (0x0006227c) query_popup_data_pane_t1_ParamLimits

0x914b,	// (0x0006227c) query_popup_data_pane_t1

0x915e,	// (0x0006228f) query_popup_data_pane_t2_ParamLimits

0x915e,	// (0x0006228f) query_popup_data_pane_t2

0x91a4,	// (0x000622d5) query_popup_data_pane_t3_ParamLimits

0x91a4,	// (0x000622d5) query_popup_data_pane_t3

0xbf5a,	// (0x0006508b) query_popup_data_pane_t4_ParamLimits

0xbf5a,	// (0x0006508b) query_popup_data_pane_t4

0xbf96,	// (0x000650c7) query_popup_data_pane_t5_ParamLimits

0xbf96,	// (0x000650c7) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x000687b7) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x000687b7) query_popup_data_pane_t

0x8fd1,	// (0x00062102) bg_set_opt_pane_g1

0x8fd9,	// (0x0006210a) bg_set_opt_pane_g2

0x8fe1,	// (0x00062112) bg_set_opt_pane_g3

0x8fe9,	// (0x0006211a) bg_set_opt_pane_g4

0x8ff1,	// (0x00062122) bg_set_opt_pane_g5

0x8ff9,	// (0x0006212a) bg_set_opt_pane_g6

0x9001,	// (0x00062132) bg_set_opt_pane_g7

0x9009,	// (0x0006213a) bg_set_opt_pane_g8

0x9011,	// (0x00062142) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x000687c2) bg_set_opt_pane_g

0xf2fa,	// (0x0006842b) control_top_pane_stacon_ParamLimits

0xf2fa,	// (0x0006842b) control_top_pane_stacon

0xf34d,	// (0x0006847e) signal_pane_stacon_ParamLimits

0xf34d,	// (0x0006847e) signal_pane_stacon

0x1f3b,	// (0x0005b06c) stacon_top_pane_g1_ParamLimits

0x1f3b,	// (0x0005b06c) stacon_top_pane_g1

0xf372,	// (0x000684a3) title_pane_stacon_ParamLimits

0xf372,	// (0x000684a3) title_pane_stacon

0xf39c,	// (0x000684cd) uni_indicator_pane_stacon_ParamLimits

0xf39c,	// (0x000684cd) uni_indicator_pane_stacon

0xf3b1,	// (0x000684e2) battery_pane_stacon_ParamLimits

0xf3b1,	// (0x000684e2) battery_pane_stacon

0xf3f5,	// (0x00068526) control_bottom_pane_stacon_ParamLimits

0xf3f5,	// (0x00068526) control_bottom_pane_stacon

0xf418,	// (0x00068549) navi_pane_stacon_ParamLimits

0xf418,	// (0x00068549) navi_pane_stacon

0x1f5d,	// (0x0005b08e) stacon_bottom_pane_g1_ParamLimits

0x1f5d,	// (0x0005b08e) stacon_bottom_pane_g1

0xf050,	// (0x00068181) aid_levels_signal_lsc_ParamLimits

0xf050,	// (0x00068181) aid_levels_signal_lsc

0xf067,	// (0x00068198) signal_pane_stacon_g1_ParamLimits

0xf067,	// (0x00068198) signal_pane_stacon_g1

0xf07b,	// (0x000681ac) signal_pane_stacon_g2_ParamLimits

0xf07b,	// (0x000681ac) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x000687d5) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x000687d5) signal_pane_stacon_g

0xf0b0,	// (0x000681e1) title_pane_stacon_t1_ParamLimits

0xf0b0,	// (0x000681e1) title_pane_stacon_t1

0xbfda,	// (0x0006510b) uni_indicator_pane_stacon_g1

0xbfe4,	// (0x00065115) uni_indicator_pane_stacon_g2

0xbfee,	// (0x0006511f) uni_indicator_pane_stacon_g3

0xbff8,	// (0x00065129) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x000687e1) uni_indicator_pane_stacon_g

0xf0d5,	// (0x00068206) control_top_pane_stacon_g1

0xf0dd,	// (0x0006820e) control_top_pane_stacon_t1_ParamLimits

0xf0dd,	// (0x0006820e) control_top_pane_stacon_t1

0xf114,	// (0x00068245) aid_levels_battery_lsc_ParamLimits

0xf114,	// (0x00068245) aid_levels_battery_lsc

0xf12c,	// (0x0006825d) battery_pane_stacon_g1_ParamLimits

0xf12c,	// (0x0006825d) battery_pane_stacon_g1

0xf13e,	// (0x0006826f) battery_pane_stacon_g2_ParamLimits

0xf13e,	// (0x0006826f) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x000687ea) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x000687ea) battery_pane_stacon_g

0xf17c,	// (0x000682ad) navi_icon_pane_stacon

0xf190,	// (0x000682c1) navi_navi_pane_stacon

0xf17c,	// (0x000682ad) navi_text_pane_stacon

0xf1a6,	// (0x000682d7) control_bottom_pane_stacon_g1

0xf1ae,	// (0x000682df) control_bottom_pane_stacon_t1_ParamLimits

0xf1ae,	// (0x000682df) control_bottom_pane_stacon_t1

0xa863,	// (0x00063994) grid_app_pane_ParamLimits

0xa863,	// (0x00063994) grid_app_pane

0xa89b,	// (0x000639cc) scroll_pane_cp15_ParamLimits

0xa89b,	// (0x000639cc) scroll_pane_cp15

0xa8b0,	// (0x000639e1) cell_app_pane_ParamLimits

0xa8b0,	// (0x000639e1) cell_app_pane

0xa8fb,	// (0x00063a2c) cell_app_pane_g1_ParamLimits

0xa8fb,	// (0x00063a2c) cell_app_pane_g1

0xdc9b,	// (0x00066dcc) cell_app_pane_g2_ParamLimits

0xdc9b,	// (0x00066dcc) cell_app_pane_g2

0x0001,

0xf6be,	// (0x000687ef) cell_app_pane_g_ParamLimits

0xf6be,	// (0x000687ef) cell_app_pane_g

0xa91f,	// (0x00063a50) cell_app_pane_t1_ParamLimits

0xa91f,	// (0x00063a50) cell_app_pane_t1

0xdca7,	// (0x00066dd8) grid_highlight_pane_ParamLimits

0xdca7,	// (0x00066dd8) grid_highlight_pane

0x8fd1,	// (0x00062102) cell_highlight_pane_g1

0x8fd9,	// (0x0006210a) cell_highlight_pane_g2

0x8fe1,	// (0x00062112) cell_highlight_pane_g3

0x8fe9,	// (0x0006211a) cell_highlight_pane_g4

0x8ff1,	// (0x00062122) cell_highlight_pane_g5

0x8ff9,	// (0x0006212a) cell_highlight_pane_g6

0x9001,	// (0x00062132) cell_highlight_pane_g7

0x9009,	// (0x0006213a) cell_highlight_pane_g8

0x9011,	// (0x00062142) cell_highlight_pane_g9

0x88d1,	// (0x00061a02) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x0006879d) cell_highlight_pane_g

0xdcb8,	// (0x00066de9) bg_scroll_pane

0xf1ef,	// (0x00068320) scroll_handle_pane

0xdcff,	// (0x00066e30) scroll_bg_pane_g1

0xdd14,	// (0x00066e45) scroll_bg_pane_g2

0xdd2c,	// (0x00066e5d) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x000687f4) scroll_bg_pane_g

0xdd41,	// (0x00066e72) scroll_handle_focus_pane_ParamLimits

0xdd41,	// (0x00066e72) scroll_handle_focus_pane

0xdcff,	// (0x00066e30) scroll_handle_pane_g1

0xdd4e,	// (0x00066e7f) scroll_handle_pane_g2

0xdd2c,	// (0x00066e5d) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x000687fb) scroll_handle_pane_g

0x9060,	// (0x00062191) bg_popup_sub_pane_cp21_ParamLimits

0x9060,	// (0x00062191) bg_popup_sub_pane_cp21

0xdd62,	// (0x00066e93) popup_fep_japan_predictive_window_t1_ParamLimits

0xdd62,	// (0x00066e93) popup_fep_japan_predictive_window_t1

0xdd79,	// (0x00066eaa) popup_fep_japan_predictive_window_t2_ParamLimits

0xdd79,	// (0x00066eaa) popup_fep_japan_predictive_window_t2

0xddac,	// (0x00066edd) popup_fep_japan_predictive_window_t3_ParamLimits

0xddac,	// (0x00066edd) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x00068802) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x00068802) popup_fep_japan_predictive_window_t

0x88db,	// (0x00061a0c) bg_popup_sub_pane_cp23

0xdde3,	// (0x00066f14) listscroll_japin_cand_pane

0xddeb,	// (0x00066f1c) popup_fep_japan_candidate_window_t1

0xddf9,	// (0x00066f2a) candidate_pane_ParamLimits

0xddf9,	// (0x00066f2a) candidate_pane

0xde0b,	// (0x00066f3c) scroll_pane_cp30

0xde15,	// (0x00066f46) list_single_popup_jap_candidate_pane_ParamLimits

0xde15,	// (0x00066f46) list_single_popup_jap_candidate_pane

0x88db,	// (0x00061a0c) list_highlight_pane_cp30

0xde29,	// (0x00066f5a) list_single_popup_jap_candidate_pane_t1

0xa959,	// (0x00063a8a) level_1_signal

0xa96b,	// (0x00063a9c) level_2_signal

0xa97e,	// (0x00063aaf) level_3_signal

0xa991,	// (0x00063ac2) level_4_signal

0xa9a4,	// (0x00063ad5) level_5_signal

0xa9b7,	// (0x00063ae8) level_6_signal

0xa9ca,	// (0x00063afb) level_7_signal

0xa959,	// (0x00063a8a) level_1_battery

0xa96b,	// (0x00063a9c) level_2_battery

0xa97e,	// (0x00063aaf) level_3_battery

0xa991,	// (0x00063ac2) level_4_battery

0xa9a4,	// (0x00063ad5) level_5_battery

0xa9b7,	// (0x00063ae8) level_6_battery

0xa9ca,	// (0x00063afb) level_7_battery

0xde50,	// (0x00066f81) list_menu_pane_ParamLimits

0xde50,	// (0x00066f81) list_menu_pane

0xde66,	// (0x00066f97) scroll_pane_cp25_ParamLimits

0xde66,	// (0x00066f97) scroll_pane_cp25

0xde7f,	// (0x00066fb0) list_double2_graphic_pane_cp2_ParamLimits

0xde7f,	// (0x00066fb0) list_double2_graphic_pane_cp2

0xde7f,	// (0x00066fb0) list_double2_large_graphic_pane_cp2_ParamLimits

0xde7f,	// (0x00066fb0) list_double2_large_graphic_pane_cp2

0xde7f,	// (0x00066fb0) list_double2_pane_cp2_ParamLimits

0xde7f,	// (0x00066fb0) list_double2_pane_cp2

0xde7f,	// (0x00066fb0) list_double_graphic_pane_cp2_ParamLimits

0xde7f,	// (0x00066fb0) list_double_graphic_pane_cp2

0xde7f,	// (0x00066fb0) list_double_large_graphic_pane_cp2_ParamLimits

0xde7f,	// (0x00066fb0) list_double_large_graphic_pane_cp2

0xde7f,	// (0x00066fb0) list_double_number_pane_cp2_ParamLimits

0xde7f,	// (0x00066fb0) list_double_number_pane_cp2

0xde7f,	// (0x00066fb0) list_double_pane_cp2_ParamLimits

0xde7f,	// (0x00066fb0) list_double_pane_cp2

0xa9dd,	// (0x00063b0e) list_single_2graphic_pane_cp2_ParamLimits

0xa9dd,	// (0x00063b0e) list_single_2graphic_pane_cp2

0xa9dd,	// (0x00063b0e) list_single_graphic_heading_pane_cp2_ParamLimits

0xa9dd,	// (0x00063b0e) list_single_graphic_heading_pane_cp2

0xa9dd,	// (0x00063b0e) list_single_graphic_pane_cp2_ParamLimits

0xa9dd,	// (0x00063b0e) list_single_graphic_pane_cp2

0xa9dd,	// (0x00063b0e) list_single_heading_pane_cp2_ParamLimits

0xa9dd,	// (0x00063b0e) list_single_heading_pane_cp2

0xde8f,	// (0x00066fc0) list_single_large_graphic_pane_cp2_ParamLimits

0xde8f,	// (0x00066fc0) list_single_large_graphic_pane_cp2

0xa9dd,	// (0x00063b0e) list_single_number_heading_pane_cp2_ParamLimits

0xa9dd,	// (0x00063b0e) list_single_number_heading_pane_cp2

0xa9dd,	// (0x00063b0e) list_single_number_pane_cp2_ParamLimits

0xa9dd,	// (0x00063b0e) list_single_number_pane_cp2

0xa9f1,	// (0x00063b22) list_single_pane_cp2_ParamLimits

0xa9f1,	// (0x00063b22) list_single_pane_cp2

0xdea8,	// (0x00066fd9) bg_popup_sub_pane_cp22

0xf2a1,	// (0x000683d2) popup_side_volume_key_window_g1

0xf2cb,	// (0x000683fc) popup_side_volume_key_window_t1

0xf2e9,	// (0x0006841a) volume_small_pane_cp1

0x8a5c,	// (0x00061b8d) bg_popup_sub_pane_cp24_ParamLimits

0x8a5c,	// (0x00061b8d) bg_popup_sub_pane_cp24

0xdebe,	// (0x00066fef) fep_china_uni_candidate_pane_ParamLimits

0xdebe,	// (0x00066fef) fep_china_uni_candidate_pane

0xded2,	// (0x00067003) fep_china_uni_entry_pane

0xdee2,	// (0x00067013) popup_fep_china_uni_window_g1

0xdefe,	// (0x0006702f) fep_china_uni_entry_pane_g1

0xdf08,	// (0x00067039) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x00068833) fep_china_uni_entry_pane_g

0xdf12,	// (0x00067043) fep_entry_item_pane

0xdf1c,	// (0x0006704d) fep_candidate_item_pane

0xdf24,	// (0x00067055) fep_china_uni_candidate_pane_g1

0xdf2e,	// (0x0006705f) fep_china_uni_candidate_pane_g2

0xdf36,	// (0x00067067) fep_china_uni_candidate_pane_g3

0xdf3e,	// (0x0006706f) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x00068838) fep_china_uni_candidate_pane_g

0x88d1,	// (0x00061a02) fep_entry_item_pane_g1

0xdf48,	// (0x00067079) fep_entry_item_pane_t1_ParamLimits

0xdf48,	// (0x00067079) fep_entry_item_pane_t1

0xdf5e,	// (0x0006708f) fep_candidate_item_pane_t1_ParamLimits

0xdf5e,	// (0x0006708f) fep_candidate_item_pane_t1

0xdf73,	// (0x000670a4) fep_candidate_item_pane_t2_ParamLimits

0xdf73,	// (0x000670a4) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x00068841) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x00068841) fep_candidate_item_pane_t

0x8929,	// (0x00061a5a) list_highlight_pane_cp31_ParamLimits

0x8929,	// (0x00061a5a) list_highlight_pane_cp31

0xdf85,	// (0x000670b6) level_1_signal_lsc

0xdf8e,	// (0x000670bf) level_2_signal_lsc

0xdf97,	// (0x000670c8) level_3_signal_lsc

0xdfa0,	// (0x000670d1) level_4_signal_lsc

0xdfa9,	// (0x000670da) level_5_signal_lsc

0xdfb2,	// (0x000670e3) level_6_signal_lsc

0xdfbb,	// (0x000670ec) level_7_signal_lsc

0xdfbb,	// (0x000670ec) level_1_battery_lsc

0xdfc4,	// (0x000670f5) level_2_battery_lsc

0xdfcd,	// (0x000670fe) level_3_battery_lsc

0xdfd6,	// (0x00067107) level_4_battery_lsc

0xdfdf,	// (0x00067110) level_5_battery_lsc

0xdfe8,	// (0x00067119) level_6_battery_lsc

0xdf85,	// (0x000670b6) level_7_battery_lsc

0xdff1,	// (0x00067122) scroll_handle_focus_pane_g1

0xdffa,	// (0x0006712b) scroll_handle_focus_pane_g2

0xe003,	// (0x00067134) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x00068846) scroll_handle_focus_pane_g

0xaa80,	// (0x00063bb1) list_single_2graphic_pane_g1_ParamLimits

0xaa80,	// (0x00063bb1) list_single_2graphic_pane_g1

0xa23c,	// (0x0006336d) list_single_2graphic_pane_g2_ParamLimits

0xa23c,	// (0x0006336d) list_single_2graphic_pane_g2

0x2ab5,	// (0x0005bbe6) list_single_2graphic_pane_g3_ParamLimits

0x2ab5,	// (0x0005bbe6) list_single_2graphic_pane_g3

0xaa8c,	// (0x00063bbd) list_single_2graphic_pane_g4_ParamLimits

0xaa8c,	// (0x00063bbd) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x0006884d) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x0006884d) list_single_2graphic_pane_g

0xaa9d,	// (0x00063bce) list_single_2graphic_pane_t1_ParamLimits

0xaa9d,	// (0x00063bce) list_single_2graphic_pane_t1

0xaacb,	// (0x00063bfc) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xaacb,	// (0x00063bfc) list_double2_graphic_large_graphic_pane_g1

0xa440,	// (0x00063571) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa440,	// (0x00063571) list_double2_graphic_large_graphic_pane_g2

0xa38d,	// (0x000634be) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa38d,	// (0x000634be) list_double2_graphic_large_graphic_pane_g3

0xaadd,	// (0x00063c0e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xaadd,	// (0x00063c0e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x00068856) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x00068856) list_double2_graphic_large_graphic_pane_g

0xaae9,	// (0x00063c1a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xaae9,	// (0x00063c1a) list_double2_graphic_large_graphic_pane_t1

0xaaff,	// (0x00063c30) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xaaff,	// (0x00063c30) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x0006885f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x0006885f) list_double2_graphic_large_graphic_pane_t

0x2020,	// (0x0005b151) popup_fast_swap_window_ParamLimits

0x2020,	// (0x0005b151) popup_fast_swap_window

0x203e,	// (0x0005b16f) popup_side_volume_key_window

0x205c,	// (0x0005b18d) stacon_top_pane

0x2066,	// (0x0005b197) status_pane_ParamLimits

0x2066,	// (0x0005b197) status_pane

0x88c7,	// (0x000619f8) status_small_pane

0x88db,	// (0x00061a0c) control_pane

0x88db,	// (0x00061a0c) stacon_bottom_pane

0x8f5c,	// (0x0006208d) scroll_pane_cp121

0x8f53,	// (0x00062084) set_content_pane

0xab11,	// (0x00063c42) bg_active_tab_pane_g1_cp1

0xf2f1,	// (0x00068422) bg_active_tab_pane_g2_cp1

0xab1a,	// (0x00063c4b) bg_active_tab_pane_g3_cp1

0xab11,	// (0x00063c42) bg_passive_tab_pane_g1_cp1

0xf2f1,	// (0x00068422) bg_passive_tab_pane_g2_cp1

0xab1a,	// (0x00063c4b) bg_passive_tab_pane_g3_cp1

0xab23,	// (0x00063c54) bg_active_tab_pane_g1_cp2

0xf2f1,	// (0x00068422) bg_active_tab_pane_g2_cp2

0xab2c,	// (0x00063c5d) bg_active_tab_pane_g3_cp2

0xab23,	// (0x00063c54) bg_passive_tab_pane_g1_cp2

0xf2f1,	// (0x00068422) bg_passive_tab_pane_g2_cp2

0xab2c,	// (0x00063c5d) bg_passive_tab_pane_g3_cp2

0xab35,	// (0x00063c66) bg_active_tab_pane_g1_cp3

0xf2f1,	// (0x00068422) bg_active_tab_pane_g2_cp3

0xab3e,	// (0x00063c6f) bg_active_tab_pane_g3_cp3

0xab35,	// (0x00063c66) bg_passive_tab_pane_g1_cp3

0xf2f1,	// (0x00068422) bg_passive_tab_pane_g2_cp3

0xab3e,	// (0x00063c6f) bg_passive_tab_pane_g3_cp3

0xab47,	// (0x00063c78) bg_active_tab_pane_g1_cp4

0xf2f1,	// (0x00068422) bg_active_tab_pane_g2_cp4

0xab50,	// (0x00063c81) bg_active_tab_pane_g3_cp4

0xab47,	// (0x00063c78) bg_passive_tab_pane_g1_cp4

0xf2f1,	// (0x00068422) bg_passive_tab_pane_g2_cp4

0xab50,	// (0x00063c81) bg_passive_tab_pane_g3_cp4

0x1f79,	// (0x0005b0aa) bg_active_tab_pane_g1_cp5

0xf2f1,	// (0x00068422) bg_active_tab_pane_g2_cp5

0x1f82,	// (0x0005b0b3) bg_active_tab_pane_g3_cp5

0x1f79,	// (0x0005b0aa) bg_passive_tab_pane_g1_cp5

0xf2f1,	// (0x00068422) bg_passive_tab_pane_g2_cp5

0x1f82,	// (0x0005b0b3) bg_passive_tab_pane_g3_cp5

0x488d,	// (0x0005d9be) list_set_graphic_pane_ParamLimits

0x488d,	// (0x0005d9be) list_set_graphic_pane

0x88db,	// (0x00061a0c) bg_set_opt_pane_cp4

0x1fa1,	// (0x0005b0d2) list_set_graphic_pane_g1_ParamLimits

0x1fa1,	// (0x0005b0d2) list_set_graphic_pane_g1

0x1fad,	// (0x0005b0de) list_set_graphic_pane_g2_ParamLimits

0x1fad,	// (0x0005b0de) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x00068864) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x00068864) list_set_graphic_pane_g

0x0009,

0xfabd,	// (0x00068bee) volume_small_pane_cp_g

0x1fd1,	// (0x0005b102) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x1fd1,	// (0x0005b102) list_double2_large_graphic_pane_g1_cp2

0x1fdf,	// (0x0005b110) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1fdf,	// (0x0005b110) list_double2_large_graphic_pane_g2_cp2

0x1ff0,	// (0x0005b121) list_double2_large_graphic_pane_g3_cp2

0x1ff8,	// (0x0005b129) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1ff8,	// (0x0005b129) list_double2_large_graphic_pane_t1_cp2

0x200e,	// (0x0005b13f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x200e,	// (0x0005b13f) list_double2_large_graphic_pane_t2_cp2

0x3e03,	// (0x0005cf34) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x3e03,	// (0x0005cf34) list_double_large_graphic_pane_g1_cp2

0x3e16,	// (0x0005cf47) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3e16,	// (0x0005cf47) list_double_large_graphic_pane_g2_cp2

0x2178,	// (0x0005b2a9) list_double_large_graphic_pane_g3_cp2

0x3e27,	// (0x0005cf58) list_double_large_graphic_pane_g4_cp

0x3e2f,	// (0x0005cf60) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3e2f,	// (0x0005cf60) list_double_large_graphic_pane_t1_cp2

0x3e46,	// (0x0005cf77) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3e46,	// (0x0005cf77) list_double_large_graphic_pane_t2_cp2

0x2074,	// (0x0005b1a5) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2074,	// (0x0005b1a5) list_double2_graphic_pane_g1_cp2

0x2082,	// (0x0005b1b3) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2082,	// (0x0005b1b3) list_double2_graphic_pane_g2_cp2

0x2093,	// (0x0005b1c4) list_double2_graphic_pane_g3_cp2

0x209d,	// (0x0005b1ce) list_double2_graphic_pane_t1_cp2_ParamLimits

0x209d,	// (0x0005b1ce) list_double2_graphic_pane_t1_cp2

0x20b3,	// (0x0005b1e4) list_double2_graphic_pane_t2_cp2_ParamLimits

0x20b3,	// (0x0005b1e4) list_double2_graphic_pane_t2_cp2

0x1f2f,	// (0x0005b060) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1f2f,	// (0x0005b060) list_single_number_heading_pane_g1_cp2

0x20c5,	// (0x0005b1f6) list_single_number_heading_pane_g2_cp2

0x20cd,	// (0x0005b1fe) list_single_number_heading_pane_t1_cp2_ParamLimits

0x20cd,	// (0x0005b1fe) list_single_number_heading_pane_t1_cp2

0x20e3,	// (0x0005b214) list_single_number_heading_pane_t2_cp2_ParamLimits

0x20e3,	// (0x0005b214) list_single_number_heading_pane_t2_cp2

0x20f7,	// (0x0005b228) list_single_number_heading_pane_t3_cp2_ParamLimits

0x20f7,	// (0x0005b228) list_single_number_heading_pane_t3_cp2

0x1f2f,	// (0x0005b060) list_single_heading_pane_g1_cp2_ParamLimits

0x1f2f,	// (0x0005b060) list_single_heading_pane_g1_cp2

0x20c5,	// (0x0005b1f6) list_single_heading_pane_g2_cp2

0x20cd,	// (0x0005b1fe) list_single_heading_pane_t1_cp2_ParamLimits

0x20cd,	// (0x0005b1fe) list_single_heading_pane_t1_cp2

0x3bfd,	// (0x0005cd2e) list_single_heading_pane_t2_cp2_ParamLimits

0x3bfd,	// (0x0005cd2e) list_single_heading_pane_t2_cp2

0x3b45,	// (0x0005cc76) list_double_graphic_pane_g1_cp2_ParamLimits

0x3b45,	// (0x0005cc76) list_double_graphic_pane_g1_cp2

0x3b51,	// (0x0005cc82) list_double_graphic_pane_g2_cp2_ParamLimits

0x3b51,	// (0x0005cc82) list_double_graphic_pane_g2_cp2

0x3b60,	// (0x0005cc91) list_double_graphic_pane_g3_cp2

0x3b68,	// (0x0005cc99) list_double_graphic_pane_t1_cp2_ParamLimits

0x3b68,	// (0x0005cc99) list_double_graphic_pane_t1_cp2

0x3b7e,	// (0x0005ccaf) list_double_graphic_pane_t2_cp2_ParamLimits

0x3b7e,	// (0x0005ccaf) list_double_graphic_pane_t2_cp2

0x216c,	// (0x0005b29d) list_double_number_pane_g1_cp2_ParamLimits

0x216c,	// (0x0005b29d) list_double_number_pane_g1_cp2

0x2178,	// (0x0005b2a9) list_double_number_pane_g2_cp2

0x3b09,	// (0x0005cc3a) list_double_number_pane_t1_cp2_ParamLimits

0x3b09,	// (0x0005cc3a) list_double_number_pane_t1_cp2

0x3b1d,	// (0x0005cc4e) list_double_number_pane_t2_cp2_ParamLimits

0x3b1d,	// (0x0005cc4e) list_double_number_pane_t2_cp2

0x3b33,	// (0x0005cc64) list_double_number_pane_t3_cp2_ParamLimits

0x3b33,	// (0x0005cc64) list_double_number_pane_t3_cp2

0x3804,	// (0x0005c935) list_single_graphic_pane_g1_cp2_ParamLimits

0x3804,	// (0x0005c935) list_single_graphic_pane_g1_cp2

0x21dd,	// (0x0005b30e) list_single_graphic_pane_g2_cp2_ParamLimits

0x21dd,	// (0x0005b30e) list_single_graphic_pane_g2_cp2

0x21e9,	// (0x0005b31a) list_single_graphic_pane_g3_cp2

0x37da,	// (0x0005c90b) list_single_graphic_pane_t1_cp2_ParamLimits

0x37da,	// (0x0005c90b) list_single_graphic_pane_t1_cp2

0x21dd,	// (0x0005b30e) list_single_number_pane_g1_cp2_ParamLimits

0x21dd,	// (0x0005b30e) list_single_number_pane_g1_cp2

0x21e9,	// (0x0005b31a) list_single_number_pane_g2_cp2

0x37da,	// (0x0005c90b) list_single_number_pane_t1_cp2_ParamLimits

0x37da,	// (0x0005c90b) list_single_number_pane_t1_cp2

0x37f0,	// (0x0005c921) list_single_number_pane_t2_cp2_ParamLimits

0x37f0,	// (0x0005c921) list_single_number_pane_t2_cp2

0x1fdf,	// (0x0005b110) list_double2_pane_g1_cp2_ParamLimits

0x1fdf,	// (0x0005b110) list_double2_pane_g1_cp2

0x1ff0,	// (0x0005b121) list_double2_pane_g2_cp2

0x2144,	// (0x0005b275) list_double2_pane_t1_cp2_ParamLimits

0x2144,	// (0x0005b275) list_double2_pane_t1_cp2

0x215a,	// (0x0005b28b) list_double2_pane_t2_cp2_ParamLimits

0x215a,	// (0x0005b28b) list_double2_pane_t2_cp2

0x216c,	// (0x0005b29d) list_double_pane_g1_cp2_ParamLimits

0x216c,	// (0x0005b29d) list_double_pane_g1_cp2

0x2178,	// (0x0005b2a9) list_double_pane_g2_cp2

0x2180,	// (0x0005b2b1) list_double_pane_t1_cp2_ParamLimits

0x2180,	// (0x0005b2b1) list_double_pane_t1_cp2

0x2196,	// (0x0005b2c7) list_double_pane_t2_cp2_ParamLimits

0x2196,	// (0x0005b2c7) list_double_pane_t2_cp2

0x21cd,	// (0x0005b2fe) list_single_pane_cp2_g3

0x21dd,	// (0x0005b30e) list_single_pane_g1_cp2_ParamLimits

0x21dd,	// (0x0005b30e) list_single_pane_g1_cp2

0x21e9,	// (0x0005b31a) list_single_pane_g2_cp2

0x21f1,	// (0x0005b322) list_single_pane_t1_cp2_ParamLimits

0x21f1,	// (0x0005b322) list_single_pane_t1_cp2

0x2209,	// (0x0005b33a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2209,	// (0x0005b33a) list_single_large_graphic_pane_g1_cp2

0x2217,	// (0x0005b348) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2217,	// (0x0005b348) list_single_large_graphic_pane_g2_cp2

0x2223,	// (0x0005b354) list_single_large_graphic_pane_g3_cp2

0x222b,	// (0x0005b35c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x222b,	// (0x0005b35c) list_single_large_graphic_pane_g4_cp1

0x2245,	// (0x0005b376) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2245,	// (0x0005b376) list_single_large_graphic_pane_t1_cp2

0x37a4,	// (0x0005c8d5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x37a4,	// (0x0005c8d5) list_single_graphic_heading_pane_g1_cp2

0x3771,	// (0x0005c8a2) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3771,	// (0x0005c8a2) list_single_graphic_heading_pane_g4_cp2

0x21e9,	// (0x0005b31a) list_single_graphic_heading_pane_g5_cp2

0x37b0,	// (0x0005c8e1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x37b0,	// (0x0005c8e1) list_single_graphic_heading_pane_t1_cp2

0x37c6,	// (0x0005c8f7) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x37c6,	// (0x0005c8f7) list_single_graphic_heading_pane_t2_cp2

0x3765,	// (0x0005c896) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3765,	// (0x0005c896) list_single_2graphic_pane_g1_cp2

0x3771,	// (0x0005c8a2) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3771,	// (0x0005c8a2) list_single_2graphic_pane_g2_cp2

0x21e9,	// (0x0005b31a) list_single_2graphic_pane_g3_cp2

0x3782,	// (0x0005c8b3) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3782,	// (0x0005c8b3) list_single_2graphic_pane_g4_cp2

0x378e,	// (0x0005c8bf) list_single_2graphic_pane_t1_cp2_ParamLimits

0x378e,	// (0x0005c8bf) list_single_2graphic_pane_t1_cp2

0x88d1,	// (0x00061a02) list_highlight_pane_g10_cp1

0x333d,	// (0x0005c46e) list_highlight_pane_g1_cp1

0x3345,	// (0x0005c476) list_highlight_pane_g2_cp1

0x334d,	// (0x0005c47e) list_highlight_pane_g3_cp1

0x3355,	// (0x0005c486) list_highlight_pane_g4_cp1

0x335d,	// (0x0005c48e) list_highlight_pane_g5_cp1

0x3365,	// (0x0005c496) list_highlight_pane_g6_cp1

0x336d,	// (0x0005c49e) list_highlight_pane_g7_cp1

0x3375,	// (0x0005c4a6) list_highlight_pane_g8_cp1

0x337d,	// (0x0005c4ae) list_highlight_pane_g9_cp1

0xc4b2,	// (0x000655e3) form_field_slider_pane_t3

0xc4c0,	// (0x000655f1) form_field_slider_pane_t4

0x3279,	// (0x0005c3aa) slider_form_pane_ParamLimits

0x3279,	// (0x0005c3aa) slider_form_pane

0x88db,	// (0x00061a0c) control_abbreviations

0x88db,	// (0x00061a0c) control_conventions

0x88db,	// (0x00061a0c) control_definitions

0x88db,	// (0x00061a0c) format_table_attribute

0x3c53,	// (0x0005cd84) bg_popup_preview_window_pane_g9

0x88db,	// (0x00061a0c) format_table_data2

0x88db,	// (0x00061a0c) format_table_data3

0x88db,	// (0x00061a0c) format_table_data_example

0x0008,

0x88db,	// (0x00061a0c) intro_purpose

0xf8ca,	// (0x000689fb) bg_popup_preview_window_pane_g

0x88db,	// (0x00061a0c) texts_category

0x88db,	// (0x00061a0c) texts_graphics

0x225b,	// (0x0005b38c) text_digital

0x226a,	// (0x0005b39b) text_primary

0x2279,	// (0x0005b3aa) text_primary_small

0x2288,	// (0x0005b3b9) text_secondary

0x2297,	// (0x0005b3c8) text_title

0x43b6,	// (0x0005d4e7) bg_passive_tab_pane_g1_cp3_srt

0xf2f1,	// (0x00068422) bg_passive_tab_pane_g2_cp3_srt

0x43bf,	// (0x0005d4f0) bg_passive_tab_pane_g3_cp3_srt

0x8a5c,	// (0x00061b8d) bg_active_tab_pane_cp3_srt_ParamLimits

0x8a5c,	// (0x00061b8d) bg_active_tab_pane_cp3_srt

0x43c8,	// (0x0005d4f9) tabs_4_active_pane_srt_g1

0xc8c3,	// (0x000659f4) tabs_4_active_pane_srt_t1_ParamLimits

0xc8c3,	// (0x000659f4) tabs_4_active_pane_srt_t1

0x43b6,	// (0x0005d4e7) bg_active_tab_pane_g1_cp3_copy1

0xf2f1,	// (0x00068422) bg_active_tab_pane_g2_cp3_copy1

0x43bf,	// (0x0005d4f0) bg_active_tab_pane_g3_cp3_copy1

0x8929,	// (0x00061a5a) tabs_2_long_active_pane_srt_ParamLimits

0x8929,	// (0x00061a5a) tabs_2_long_active_pane_srt

0x8929,	// (0x00061a5a) tabs_2_long_passive_pane_srt_ParamLimits

0x8929,	// (0x00061a5a) tabs_2_long_passive_pane_srt

0x25cd,	// (0x0005b6fe) bg_passive_tab_pane_cp4_srt_ParamLimits

0x25cd,	// (0x0005b6fe) bg_passive_tab_pane_cp4_srt

0x408d,	// (0x0005d1be) bg_passive_tab_pane_g1_cp4_srt

0xf2f1,	// (0x00068422) bg_passive_tab_pane_g2_cp4_srt

0x4096,	// (0x0005d1c7) bg_passive_tab_pane_g3_cp4_srt

0x8929,	// (0x00061a5a) bg_active_tab_pane_cp4_srt_ParamLimits

0x8929,	// (0x00061a5a) bg_active_tab_pane_cp4_srt

0xc692,	// (0x000657c3) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc692,	// (0x000657c3) tabs_2_long_active_pane_srt_t1

0x408d,	// (0x0005d1be) bg_active_tab_pane_g1_cp4_srt

0xf2f1,	// (0x00068422) bg_active_tab_pane_g2_cp4_srt

0x4096,	// (0x0005d1c7) bg_active_tab_pane_g3_cp4_srt

0x8a5c,	// (0x00061b8d) tabs_3_long_active_pane_srt_ParamLimits

0x8a5c,	// (0x00061b8d) tabs_3_long_active_pane_srt

0x8a5c,	// (0x00061b8d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8a5c,	// (0x00061b8d) tabs_3_long_passive_pane_cp_srt

0x8a5c,	// (0x00061b8d) tabs_3_long_passive_pane_srt_ParamLimits

0x8a5c,	// (0x00061b8d) tabs_3_long_passive_pane_srt

0x25cd,	// (0x0005b6fe) bg_passive_tab_pane_cp5_srt_ParamLimits

0x25cd,	// (0x0005b6fe) bg_passive_tab_pane_cp5_srt

0x1f79,	// (0x0005b0aa) bg_passive_tab_pane_g1_cp5_srt

0xf2f1,	// (0x00068422) bg_passive_tab_pane_g2_cp5_srt

0x1f82,	// (0x0005b0b3) bg_passive_tab_pane_g3_cp5_srt

0x8929,	// (0x00061a5a) bg_active_tab_pane_cp5_srt_ParamLimits

0x8929,	// (0x00061a5a) bg_active_tab_pane_cp5_srt

0xc67c,	// (0x000657ad) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc67c,	// (0x000657ad) tabs_3_long_active_pane_srt_t1

0x1f79,	// (0x0005b0aa) bg_active_tab_pane_g1_cp5_srt

0xf2f1,	// (0x00068422) bg_active_tab_pane_g2_cp5_srt

0x1f82,	// (0x0005b0b3) bg_active_tab_pane_g3_cp5_srt

0x406d,	// (0x0005d19e) navi_text_pane_srt_t1

0x4065,	// (0x0005d196) navi_icon_pane_srt_g1

0x246f,	// (0x0005b5a0) midp_editing_number_pane_srt

0x22a6,	// (0x0005b3d7) midp_ticker_pane_srt

0x2477,	// (0x0005b5a8) midp_ticker_pane_srt_g1

0x247f,	// (0x0005b5b0) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x00068883) midp_ticker_pane_srt_g

0x2487,	// (0x0005b5b8) midp_ticker_pane_srt_t1

0x4056,	// (0x0005d187) midp_editing_number_pane_t1_copy1

0xab59,	// (0x00063c8a) listscroll_midp_pane

0xab59,	// (0x00063c8a) midp_form_pane

0x231d,	// (0x0005b44e) midp_info_popup_window_ParamLimits

0x231d,	// (0x0005b44e) midp_info_popup_window

0x9060,	// (0x00062191) bg_popup_sub_pane_cp50_ParamLimits

0x9060,	// (0x00062191) bg_popup_sub_pane_cp50

0x2f5f,	// (0x0005c090) listscroll_midp_info_pane_ParamLimits

0x2f5f,	// (0x0005c090) listscroll_midp_info_pane

0x2f3f,	// (0x0005c070) listscroll_form_midp_pane_ParamLimits

0x2f3f,	// (0x0005c070) listscroll_form_midp_pane

0x2f4b,	// (0x0005c07c) scroll_bar_cp050

0x2f3f,	// (0x0005c070) list_midp_pane

0x4e6a,	// (0x0005df9b) signal_pane_g2_cp

0x2e59,	// (0x0005bf8a) listscroll_midp_info_pane_t1_ParamLimits

0x2e59,	// (0x0005bf8a) listscroll_midp_info_pane_t1

0x2e71,	// (0x0005bfa2) listscroll_midp_info_pane_t2_ParamLimits

0x2e71,	// (0x0005bfa2) listscroll_midp_info_pane_t2

0x2eaf,	// (0x0005bfe0) listscroll_midp_info_pane_t3_ParamLimits

0x2eaf,	// (0x0005bfe0) listscroll_midp_info_pane_t3

0x2ee9,	// (0x0005c01a) listscroll_midp_info_pane_t4_ParamLimits

0x2ee9,	// (0x0005c01a) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x00068936) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x00068936) listscroll_midp_info_pane_t

0x90b5,	// (0x000621e6) scroll_pane_cp21

0x2df3,	// (0x0005bf24) form_midp_field_choice_group_pane

0x2dfc,	// (0x0005bf2d) form_midp_field_text_pane

0x2e3f,	// (0x0005bf70) form_midp_field_time_pane

0x2e47,	// (0x0005bf78) form_midp_gauge_slider_pane

0x2e50,	// (0x0005bf81) form_midp_gauge_wait_pane

0x88db,	// (0x00061a0c) form_midp_image_pane

0xb546,	// (0x00064677) list_single_midp_pane_ParamLimits

0xb546,	// (0x00064677) list_single_midp_pane

0xc48d,	// (0x000655be) form_midp_field_text_pane_t1

0x2ba9,	// (0x0005bcda) input_focus_pane_cp050

0x2de2,	// (0x0005bf13) list_midp_form_text_pane

0x2d86,	// (0x0005beb7) form_midp_field_choice_group_pane_t1

0x2d94,	// (0x0005bec5) input_focus_pane_cp051

0x2da8,	// (0x0005bed9) list_midp_choice_pane

0x88db,	// (0x00061a0c) status_idle_pane

0x2d6a,	// (0x0005be9b) form_midp_field_time_pane_t1

0x88d1,	// (0x00061a02) wait_anim_pane_g2_copy1

0x2d78,	// (0x0005bea9) form_midp_field_time_pane_t2

0x0001,

0x23cd,	// (0x0005b4fe) aid_navinavi_width_2_pane

0xf800,	// (0x00068931) form_midp_field_time_pane_t

0x88db,	// (0x00061a0c) input_focus_pane_cp052

0x88db,	// (0x00061a0c) bg_input_focus_pane_cp040

0x2d2a,	// (0x0005be5b) form_midp_gauge_slider_pane_t1

0x2d38,	// (0x0005be69) form_midp_gauge_slider_pane_t2

0xc471,	// (0x000655a2) form_midp_gauge_slider_pane_t3

0xc47f,	// (0x000655b0) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x00068928) form_midp_gauge_slider_pane_t

0x2d62,	// (0x0005be93) form_midp_slider_pane

0x8929,	// (0x00061a5a) bg_input_focus_pane_cp041_ParamLimits

0x8929,	// (0x00061a5a) bg_input_focus_pane_cp041

0x2cf7,	// (0x0005be28) form_midp_gauge_wait_pane_t1_ParamLimits

0x2cf7,	// (0x0005be28) form_midp_gauge_wait_pane_t1

0x2d09,	// (0x0005be3a) form_midp_gauge_wait_pane_t2_ParamLimits

0x2d09,	// (0x0005be3a) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x00068923) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x00068923) form_midp_gauge_wait_pane_t

0x2d1b,	// (0x0005be4c) form_midp_wait_pane_ParamLimits

0x2d1b,	// (0x0005be4c) form_midp_wait_pane

0x2cbf,	// (0x0005bdf0) form_midp_image_pane_g1

0x2cc8,	// (0x0005bdf9) form_midp_image_pane_t1

0x2cd7,	// (0x0005be08) form_midp_image_pane_t2

0x2ce6,	// (0x0005be17) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x0006891c) form_midp_image_pane_t

0x2cb6,	// (0x0005bde7) list_single_midp_pane_g1

0xe0c2,	// (0x000671f3) list_single_midp_pane_t1

0xc45a,	// (0x0006558b) list_midp_form_item_pane_ParamLimits

0xc45a,	// (0x0006558b) list_midp_form_item_pane

0x2375,	// (0x0005b4a6) list_midp_form_item_pane_t1

0x2384,	// (0x0005b4b5) midp_ticker_pane_g1

0x2390,	// (0x0005b4c1) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x00068869) midp_ticker_pane_g

0xabfd,	// (0x00063d2e) midp_ticker_pane_t1

0xc81b,	// (0x0006594c) midp_editing_number_pane_t1

0x42a1,	// (0x0005d3d2) midp_editing_number_pane

0x42b0,	// (0x0005d3e1) midp_ticker_pane

0x4046,	// (0x0005d177) ai_message_heading_pane

0x88db,	// (0x00061a0c) bg_popup_window_pane_cp14

0x404e,	// (0x0005d17f) listscroll_ai_message_pane

0x3fcc,	// (0x0005d0fd) ai_message_heading_pane_g1_ParamLimits

0x3fcc,	// (0x0005d0fd) ai_message_heading_pane_g1

0x3fd8,	// (0x0005d109) ai_message_heading_pane_g2_ParamLimits

0x3fd8,	// (0x0005d109) ai_message_heading_pane_g2

0x3fe6,	// (0x0005d117) ai_message_heading_pane_g3_ParamLimits

0x3fe6,	// (0x0005d117) ai_message_heading_pane_g3

0x3ff2,	// (0x0005d123) ai_message_heading_pane_g4_ParamLimits

0x3ff2,	// (0x0005d123) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x00068a5d) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x00068a5d) ai_message_heading_pane_g

0x3ffe,	// (0x0005d12f) ai_message_heading_pane_t1_ParamLimits

0x3ffe,	// (0x0005d12f) ai_message_heading_pane_t1

0x4018,	// (0x0005d149) ai_message_heading_pane_t2_ParamLimits

0x4018,	// (0x0005d149) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x00068a66) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x00068a66) ai_message_heading_pane_t

0x402c,	// (0x0005d15d) bg_popup_heading_pane_cp1_ParamLimits

0x402c,	// (0x0005d15d) bg_popup_heading_pane_cp1

0x3fba,	// (0x0005d0eb) list_ai_message_pane_ParamLimits

0x3fba,	// (0x0005d0eb) list_ai_message_pane

0x90b5,	// (0x000621e6) scroll_pane_cp10

0x3f56,	// (0x0005d087) list_ai_message_pane_g1

0x3f5e,	// (0x0005d08f) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x00068a3a) list_ai_message_pane_g

0x3f66,	// (0x0005d097) list_ai_message_pane_t1_ParamLimits

0x3f66,	// (0x0005d097) list_ai_message_pane_t1

0x3f7b,	// (0x0005d0ac) list_ai_message_pane_t2_ParamLimits

0x3f7b,	// (0x0005d0ac) list_ai_message_pane_t2

0x3f90,	// (0x0005d0c1) list_ai_message_pane_t3_ParamLimits

0x3f90,	// (0x0005d0c1) list_ai_message_pane_t3

0x3fa5,	// (0x0005d0d6) list_ai_message_pane_t4_ParamLimits

0x3fa5,	// (0x0005d0d6) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x00068a3f) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x00068a3f) list_ai_message_pane_t

0xc662,	// (0x00065793) cell_ai_soft_ind_pane_ParamLimits

0xc662,	// (0x00065793) cell_ai_soft_ind_pane

0x23ae,	// (0x0005b4df) cell_ai_soft_ind_pane_g1_ParamLimits

0x23ae,	// (0x0005b4df) cell_ai_soft_ind_pane_g1

0x88db,	// (0x00061a0c) grid_highlight_cp1

0x23bb,	// (0x0005b4ec) text_secondary_cp56_ParamLimits

0x23bb,	// (0x0005b4ec) text_secondary_cp56

0x3f14,	// (0x0005d045) example_general_pane_ParamLimits

0x3f14,	// (0x0005d045) example_general_pane

0x3f20,	// (0x0005d051) example_parent_pane_g1_ParamLimits

0x3f20,	// (0x0005d051) example_parent_pane_g1

0x3f2c,	// (0x0005d05d) example_parent_pane_t1_ParamLimits

0x3f2c,	// (0x0005d05d) example_parent_pane_t1

0xb173,	// (0x000642a4) popup_preview_text_window_ParamLimits

0xb173,	// (0x000642a4) popup_preview_text_window

0x21d5,	// (0x0005b306) list_single_pane_cp2_g4

0x8b38,	// (0x00061c69) bg_popup_preview_window_pane_ParamLimits

0x8b38,	// (0x00061c69) bg_popup_preview_window_pane

0x3c5d,	// (0x0005cd8e) popup_preview_text_window_t1_ParamLimits

0x3c5d,	// (0x0005cd8e) popup_preview_text_window_t1

0x3c7b,	// (0x0005cdac) popup_preview_text_window_t2_ParamLimits

0x3c7b,	// (0x0005cdac) popup_preview_text_window_t2

0x3cc4,	// (0x0005cdf5) popup_preview_text_window_t3_ParamLimits

0x3cc4,	// (0x0005cdf5) popup_preview_text_window_t3

0x3d09,	// (0x0005ce3a) popup_preview_text_window_t4_ParamLimits

0x3d09,	// (0x0005ce3a) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x00068a0e) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x00068a0e) popup_preview_text_window_t

0x3d87,	// (0x0005ceb8) scroll_pane_cp11

0x2b1d,	// (0x0005bc4e) bg_popup_preview_window_pane_g1

0x3c11,	// (0x0005cd42) bg_popup_preview_window_pane_g2

0x3c1b,	// (0x0005cd4c) bg_popup_preview_window_pane_g3

0x3c25,	// (0x0005cd56) bg_popup_preview_window_pane_g4

0x3c2f,	// (0x0005cd60) bg_popup_preview_window_pane_g5

0x3c39,	// (0x0005cd6a) bg_popup_preview_window_pane_g6

0x3c41,	// (0x0005cd72) bg_popup_preview_window_pane_g7

0x3c49,	// (0x0005cd7a) bg_popup_preview_window_pane_g8

0xed6b,	// (0x00067e9c) aid_popup_width_pane

0xb0e3,	// (0x00064214) popup_midp_note_alarm_window_ParamLimits

0xb0e3,	// (0x00064214) popup_midp_note_alarm_window

0x8f6d,	// (0x0006209e) data_form_pane_ParamLimits

0xa6cb,	// (0x000637fc) form_field_data_pane_g1

0xa6d5,	// (0x00063806) form_field_data_pane_t1_ParamLimits

0x8f79,	// (0x000620aa) input_focus_pane_ParamLimits

0xdbfe,	// (0x00066d2f) data_form_wide_pane_ParamLimits

0xdc0f,	// (0x00066d40) form_field_data_wide_pane_g1

0xdc1b,	// (0x00066d4c) form_field_data_wide_pane_t1_ParamLimits

0x8cf4,	// (0x00061e25) input_focus_pane_cp6_ParamLimits

0xa816,	// (0x00063947) input_popup_find_pane_g1_ParamLimits

0xa816,	// (0x00063947) input_popup_find_pane_g1

0xf14f,	// (0x00068280) aid_navi_side_left_pane

0xf164,	// (0x00068295) aid_navi_side_right_pane

0x3438,	// (0x0005c569) bg_popup_window_pane_cp30_ParamLimits

0x3438,	// (0x0005c569) bg_popup_window_pane_cp30

0x34b2,	// (0x0005c5e3) popup_midp_note_alarm_window_g1_ParamLimits

0x34b2,	// (0x0005c5e3) popup_midp_note_alarm_window_g1

0x34e2,	// (0x0005c613) popup_midp_note_alarm_window_t1_ParamLimits

0x34e2,	// (0x0005c613) popup_midp_note_alarm_window_t1

0x3583,	// (0x0005c6b4) popup_midp_note_alarm_window_t2_ParamLimits

0x3583,	// (0x0005c6b4) popup_midp_note_alarm_window_t2

0x3631,	// (0x0005c762) popup_midp_note_alarm_window_t3_ParamLimits

0x3631,	// (0x0005c762) popup_midp_note_alarm_window_t3

0x3663,	// (0x0005c794) popup_midp_note_alarm_window_t4_ParamLimits

0x3663,	// (0x0005c794) popup_midp_note_alarm_window_t4

0x3689,	// (0x0005c7ba) popup_midp_note_alarm_window_t5_ParamLimits

0x3689,	// (0x0005c7ba) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x000689ab) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x000689ab) popup_midp_note_alarm_window_t

0x3735,	// (0x0005c866) wait_bar_pane_cp1_ParamLimits

0x3735,	// (0x0005c866) wait_bar_pane_cp1

0x88db,	// (0x00061a0c) wait_anim_pane_copy1

0x88db,	// (0x00061a0c) wait_border_pane_copy1

0x311d,	// (0x0005c24e) wait_border_pane_g1_copy1

0xdc35,	// (0x00066d66) form_field_popup_pane_g1

0xa6ef,	// (0x00063820) form_field_popup_pane_t1_ParamLimits

0x8f79,	// (0x000620aa) input_focus_pane_cp7_ParamLimits

0x8fa7,	// (0x000620d8) list_form_pane_ParamLimits

0xdc3d,	// (0x00066d6e) form_field_popup_wide_pane_g1

0xdc45,	// (0x00066d76) form_field_popup_wide_pane_t1_ParamLimits

0x8f79,	// (0x000620aa) input_focus_pane_cp8_ParamLimits

0x8fb3,	// (0x000620e4) list_form_wide_pane_ParamLimits

0x4451,	// (0x0005d582) aid_size_cell_graphic_pane

0xa76e,	// (0x0006389f) data_form_pane_t1_ParamLimits

0xb6b5,	// (0x000647e6) data_form_wide_pane_t1_ParamLimits

0xc0bf,	// (0x000651f0) bg_status_flat_pane

0x9e4e,	// (0x00062f7f) title_pane_t1_ParamLimits

0x88f1,	// (0x00061a22) title_pane_t2_ParamLimits

0x8917,	// (0x00061a48) title_pane_t3_ParamLimits

0xf532,	// (0x00068663) title_pane_t_ParamLimits

0xa959,	// (0x00063a8a) level_1_signal_ParamLimits

0xa96b,	// (0x00063a9c) level_2_signal_ParamLimits

0xa97e,	// (0x00063aaf) level_3_signal_ParamLimits

0xa991,	// (0x00063ac2) level_4_signal_ParamLimits

0xa9a4,	// (0x00063ad5) level_5_signal_ParamLimits

0xa9b7,	// (0x00063ae8) level_6_signal_ParamLimits

0xa9ca,	// (0x00063afb) level_7_signal_ParamLimits

0xa959,	// (0x00063a8a) level_1_battery_ParamLimits

0xa96b,	// (0x00063a9c) level_2_battery_ParamLimits

0xa97e,	// (0x00063aaf) level_3_battery_ParamLimits

0xa991,	// (0x00063ac2) level_4_battery_ParamLimits

0xa9a4,	// (0x00063ad5) level_5_battery_ParamLimits

0xa9b7,	// (0x00063ae8) level_6_battery_ParamLimits

0xa9ca,	// (0x00063afb) level_7_battery_ParamLimits

0x333d,	// (0x0005c46e) bg_status_flat_pane_g1

0x3345,	// (0x0005c476) bg_status_flat_pane_g2

0x334d,	// (0x0005c47e) bg_status_flat_pane_g3

0x3355,	// (0x0005c486) bg_status_flat_pane_g4

0x335d,	// (0x0005c48e) bg_status_flat_pane_g5

0x3365,	// (0x0005c496) bg_status_flat_pane_g6

0x336d,	// (0x0005c49e) bg_status_flat_pane_g7

0x9ee2,	// (0x00063013) tabs_3_active_pane_t1_ParamLimits

0x9ee2,	// (0x00063013) tabs_3_passive_pane_t1_ParamLimits

0x9efc,	// (0x0006302d) tabs_4_active_pane_t1_ParamLimits

0x9efc,	// (0x0006302d) tabs_4_1_passive_pane_t1_ParamLimits

0xa82c,	// (0x0006395d) tabs_2_active_pane_t1_ParamLimits

0xa82c,	// (0x0006395d) tabs_2_passive_pane_t1_ParamLimits

0x8929,	// (0x00061a5a) bg_active_tab_pane_cp4_ParamLimits

0xa83e,	// (0x0006396f) tabs_2_long_active_pane_t1_ParamLimits

0x25cd,	// (0x0005b6fe) bg_passive_tab_pane_cp4_ParamLimits

0x07d4,	// (0x00059905) list_single_midp_graphic_pane_t1_ParamLimits

0x8929,	// (0x00061a5a) bg_active_tab_pane_cp5_ParamLimits

0xa851,	// (0x00063982) tabs_3_long_active_pane_t1_ParamLimits

0x25cd,	// (0x0005b6fe) bg_passive_tab_pane_cp5_ParamLimits

0x07d4,	// (0x00059905) list_single_midp_graphic_pane_t1

0xc0bf,	// (0x000651f0) bg_status_flat_pane_ParamLimits

0x2787,	// (0x0005b8b8) indicator_pane_cp2_ParamLimits

0x2787,	// (0x0005b8b8) indicator_pane_cp2

0xc255,	// (0x00065386) navi_pane_srt_ParamLimits

0xc255,	// (0x00065386) navi_pane_srt

0x28ee,	// (0x0005ba1f) popup_clock_digital_analogue_window_cp1

0x896d,	// (0x00061a9e) indicator_pane_t1

0x22a6,	// (0x0005b3d7) copy_highlight_pane

0x22a6,	// (0x0005b3d7) cursor_graphics_pane

0x22a6,	// (0x0005b3d7) graphic_within_text_pane

0x22a6,	// (0x0005b3d7) link_highlight_pane

0x3d4a,	// (0x0005ce7b) popup_preview_text_window_t5_ParamLimits

0x3d4a,	// (0x0005ce7b) popup_preview_text_window_t5

0x23d7,	// (0x0005b508) cursor_digital_pane

0x23d7,	// (0x0005b508) cursor_primary_pane

0x23e8,	// (0x0005b519) cursor_primary_small_pane

0x23f0,	// (0x0005b521) cursor_secondary_pane

0x23f8,	// (0x0005b529) cursor_title_pane

0x23d7,	// (0x0005b508) link_highlight_digital_pane

0x23df,	// (0x0005b510) link_highlight_primary_pane

0x23e8,	// (0x0005b519) link_highlight_primary_small_pane

0x23f0,	// (0x0005b521) link_highlight_secondary_pane

0x23f8,	// (0x0005b529) link_highlight_title_pane

0x23d7,	// (0x0005b508) copy_highlight_digital_pane

0x23d7,	// (0x0005b508) copy_highlight_primary_pane

0x23e8,	// (0x0005b519) copy_highlight_primary_small_pane

0x23f0,	// (0x0005b521) copy_highlight_secondary_pane

0x23f8,	// (0x0005b529) copy_highlight_title_pane

0x23f0,	// (0x0005b521) graphic_text_digital_pane

0x33db,	// (0x0005c50c) graphic_text_primary_pane

0x33e4,	// (0x0005c515) graphic_text_primary_small_pane

0x23e8,	// (0x0005b519) graphic_text_secondary_pane

0x23d7,	// (0x0005b508) graphic_text_title_pane

0xac0f,	// (0x00063d40) cursor_primary_pane_g1

0x33cd,	// (0x0005c4fe) cursor_text_primary_t1

0xc4e2,	// (0x00065613) cursor_primary_small_pane_g1

0x33bf,	// (0x0005c4f0) cursor_text_primary_small_t1

0xc4d8,	// (0x00065609) cursor_primary_small_pane_g1_copy1

0x33a7,	// (0x0005c4d8) cursor_text_primary_small_t1_copy1

0x3385,	// (0x0005c4b6) cursor_text_title_t1

0xc4ce,	// (0x000655ff) cursor_title_pane_g1

0xac0f,	// (0x00063d40) cursor_digital_pane_g1

0x240a,	// (0x0005b53b) cursor_text_digital_t1

0x2418,	// (0x0005b549) link_highlight_primary_pane_g1

0x332e,	// (0x0005c45f) link_highlight_primary_pane_t1

0x2418,	// (0x0005b549) link_highlight_primary_small_pane_g1

0x2420,	// (0x0005b551) link_highlight_primary_small_pane_t1

0x242f,	// (0x0005b560) link_highlight_secondary_pane_g1

0x2437,	// (0x0005b568) link_highlight_secondary_pane_t1

0x32a2,	// (0x0005c3d3) link_highlight_title_pane_g1

0x32aa,	// (0x0005c3db) link_highlight_title_pane_t1

0x328b,	// (0x0005c3bc) link_highlight_digital_pane_g1

0x3293,	// (0x0005c3c4) link_highlight_digital_pane_t1

0x3153,	// (0x0005c284) copy_highlight_primary_pane_g1

0x316a,	// (0x0005c29b) copy_highlight_primary_pane_t1

0x3153,	// (0x0005c284) copy_highlight_primary_small_pane_g1

0x315b,	// (0x0005c28c) copy_highlight_primary_small_pane_t1

0x2446,	// (0x0005b577) copy_highlight_secondary_pane_g1

0x244e,	// (0x0005b57f) copy_highlight_secondary_pane_t1

0x313c,	// (0x0005c26d) copy_highlight_title_pane_g1

0x3144,	// (0x0005c275) copy_highlight_title_pane_t1

0x3153,	// (0x0005c284) copy_highlight_digital_pane_g1

0x4623,	// (0x0005d754) copy_highlight_digital_pane_t1

0x4577,	// (0x0005d6a8) graphic_text_primary_pane_g1

0x4607,	// (0x0005d738) graphic_text_primary_pane_t1

0x4615,	// (0x0005d746) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x00068ada) graphic_text_primary_pane_t

0x45e3,	// (0x0005d714) graphic_text_primary_small_pane_g1

0x45eb,	// (0x0005d71c) graphic_text_primary_small_pane_t1

0x45f9,	// (0x0005d72a) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x00068ad5) graphic_text_primary_small_pane_t

0x45bf,	// (0x0005d6f0) graphic_text_secondary_pane_g1

0x45c7,	// (0x0005d6f8) graphic_text_secondary_pane_t1

0x45d5,	// (0x0005d706) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x00068ad0) graphic_text_secondary_pane_t

0x459b,	// (0x0005d6cc) graphic_text_title_pane_g1

0x45a3,	// (0x0005d6d4) graphic_text_title_pane_t1

0x45b1,	// (0x0005d6e2) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x00068acb) graphic_text_title_pane_t

0x4577,	// (0x0005d6a8) graphic_text_digital_pane_g1

0x457f,	// (0x0005d6b0) graphic_text_digital_pane_t1

0x458d,	// (0x0005d6be) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x00068ac6) graphic_text_digital_pane_t

0x8929,	// (0x00061a5a) navi_icon_pane_srt_ParamLimits

0x8929,	// (0x00061a5a) navi_icon_pane_srt

0x88db,	// (0x00061a0c) navi_midp_pane_srt

0x88db,	// (0x00061a0c) navi_navi_pane_srt

0x8929,	// (0x00061a5a) navi_text_pane_srt_ParamLimits

0x8929,	// (0x00061a5a) navi_text_pane_srt

0x4542,	// (0x0005d673) navi_navi_icon_text_pane_srt

0x454a,	// (0x0005d67b) navi_navi_pane_srt_g1_ParamLimits

0x454a,	// (0x0005d67b) navi_navi_pane_srt_g1

0x455c,	// (0x0005d68d) navi_navi_pane_srt_g2_ParamLimits

0x455c,	// (0x0005d68d) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x00068ac1) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x00068ac1) navi_navi_pane_srt_g

0x456e,	// (0x0005d69f) navi_navi_tabs_pane_srt

0x4542,	// (0x0005d673) navi_navi_text_pane_srt

0x4542,	// (0x0005d673) navi_navi_volume_pane_srt

0x4533,	// (0x0005d664) navi_navi_text_pane_srt_t1

0x0c2b,	// (0x00059d5c) navi_navi_volume_pane_srt_g1

0x0c33,	// (0x00059d64) volume_small_pane_srt_ParamLimits

0x0c33,	// (0x00059d64) volume_small_pane_srt

0xf43b,	// (0x0006856c) volume_small_pane_srt_g1_ParamLimits

0xf43b,	// (0x0006856c) volume_small_pane_srt_g1

0xf44b,	// (0x0006857c) volume_small_pane_srt_g2_ParamLimits

0xf44b,	// (0x0006857c) volume_small_pane_srt_g2

0xf45c,	// (0x0006858d) volume_small_pane_srt_g3_ParamLimits

0xf45c,	// (0x0006858d) volume_small_pane_srt_g3

0xf46d,	// (0x0006859e) volume_small_pane_srt_g4_ParamLimits

0xf46d,	// (0x0006859e) volume_small_pane_srt_g4

0xf47e,	// (0x000685af) volume_small_pane_srt_g5_ParamLimits

0xf47e,	// (0x000685af) volume_small_pane_srt_g5

0xf48f,	// (0x000685c0) volume_small_pane_srt_g6_ParamLimits

0xf48f,	// (0x000685c0) volume_small_pane_srt_g6

0xf4a0,	// (0x000685d1) volume_small_pane_srt_g7_ParamLimits

0xf4a0,	// (0x000685d1) volume_small_pane_srt_g7

0xf4b1,	// (0x000685e2) volume_small_pane_srt_g8_ParamLimits

0xf4b1,	// (0x000685e2) volume_small_pane_srt_g8

0xf4c2,	// (0x000685f3) volume_small_pane_srt_g9_ParamLimits

0xf4c2,	// (0x000685f3) volume_small_pane_srt_g9

0xf4d3,	// (0x00068604) volume_small_pane_srt_g10_ParamLimits

0xf4d3,	// (0x00068604) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x0006886e) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x0006886e) volume_small_pane_srt_g

0x8bed,	// (0x00061d1e) query_popup_data_pane_cp2

0x4519,	// (0x0005d64a) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4519,	// (0x0005d64a) navi_navi_icon_text_pane_srt_t1

0x33db,	// (0x0005c50c) navi_tabs_2_long_pane_srt

0x33db,	// (0x0005c50c) navi_tabs_2_pane_srt

0x33db,	// (0x0005c50c) navi_tabs_3_long_pane_srt

0x33db,	// (0x0005c50c) navi_tabs_3_pane_srt

0x33db,	// (0x0005c50c) navi_tabs_4_pane_srt

0x0c0b,	// (0x00059d3c) tabs_2_active_pane_srt_ParamLimits

0x0c0b,	// (0x00059d3c) tabs_2_active_pane_srt

0x0c1b,	// (0x00059d4c) tabs_2_passive_pane_srt_ParamLimits

0x0c1b,	// (0x00059d4c) tabs_2_passive_pane_srt

0x2ba9,	// (0x0005bcda) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2ba9,	// (0x0005bcda) bg_passive_tab_pane_cp1_srt

0x44e5,	// (0x0005d616) bg_passive_tab_pane_g1_cp1_srt

0xf2f1,	// (0x00068422) bg_passive_tab_pane_g2_cp1_srt

0x44ee,	// (0x0005d61f) bg_passive_tab_pane_g3_cp1_srt

0x8a5c,	// (0x00061b8d) bg_active_tab_pane_cp1_srt_ParamLimits

0x8a5c,	// (0x00061b8d) bg_active_tab_pane_cp1_srt

0x44f7,	// (0x0005d628) tabs_2_active_pane_srt_g1

0xc94b,	// (0x00065a7c) tabs_2_active_pane_srt_t1_ParamLimits

0xc94b,	// (0x00065a7c) tabs_2_active_pane_srt_t1

0x44e5,	// (0x0005d616) bg_active_tab_pane_g1_cp1_srt

0xf2f1,	// (0x00068422) bg_active_tab_pane_g2_cp1_srt

0x44ee,	// (0x0005d61f) bg_active_tab_pane_g3_cp1_srt

0x0bd8,	// (0x00059d09) tabs_3_active_pane_srt_ParamLimits

0x0bd8,	// (0x00059d09) tabs_3_active_pane_srt

0x0be9,	// (0x00059d1a) tabs_3_passive_pane_cp_srt_ParamLimits

0x0be9,	// (0x00059d1a) tabs_3_passive_pane_cp_srt

0x0bfa,	// (0x00059d2b) tabs_3_passive_pane_srt_ParamLimits

0x0bfa,	// (0x00059d2b) tabs_3_passive_pane_srt

0x2ba9,	// (0x0005bcda) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2ba9,	// (0x0005bcda) bg_passive_tab_pane_cp2_srt

0x245d,	// (0x0005b58e) bg_passive_tab_pane_g1_cp2_srt

0xf2f1,	// (0x00068422) bg_passive_tab_pane_g2_cp2_srt

0x2466,	// (0x0005b597) bg_passive_tab_pane_g3_cp2_srt

0x8a5c,	// (0x00061b8d) bg_active_tab_pane_cp2_srt_ParamLimits

0x8a5c,	// (0x00061b8d) bg_active_tab_pane_cp2_srt

0x44cb,	// (0x0005d5fc) tabs_3_active_pane_srt_g1

0xc935,	// (0x00065a66) tabs_3_active_pane_srt_t1_ParamLimits

0xc935,	// (0x00065a66) tabs_3_active_pane_srt_t1

0x245d,	// (0x0005b58e) bg_active_tab_pane_g1_cp2_srt

0xf2f1,	// (0x00068422) bg_active_tab_pane_g2_cp2_srt

0x2466,	// (0x0005b597) bg_active_tab_pane_g3_cp2_srt

0x0b90,	// (0x00059cc1) tabs_4_active_pane_srt_ParamLimits

0x0b90,	// (0x00059cc1) tabs_4_active_pane_srt

0x0ba2,	// (0x00059cd3) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0ba2,	// (0x00059cd3) tabs_4_passive_pane_cp2_srt

0x00f3,	// (0x00059224) aid_size_cell_toolbar

0x4100,	// (0x0005d231) main_idle_act_pane_ParamLimits

0x02de,	// (0x0005940f) popup_large_graphic_colour_window_ParamLimits

0xb439,	// (0x0006456a) popup_toolbar_window_ParamLimits

0xb439,	// (0x0006456a) popup_toolbar_window

0x42e9,	// (0x0005d41a) list_single_graphic_2heading_pane_ParamLimits

0x42e9,	// (0x0005d41a) list_single_graphic_2heading_pane

0xc002,	// (0x00065133) aid_size_cell_apps_grid_lsc_pane

0xc014,	// (0x00065145) aid_size_cell_apps_grid_prt_pane

0x25cd,	// (0x0005b6fe) bg_wml_button_pane_cp1_ParamLimits

0x25cd,	// (0x0005b6fe) bg_wml_button_pane_cp1

0xc48d,	// (0x000655be) form_midp_field_text_pane_t1_ParamLimits

0x2ba9,	// (0x0005bcda) input_focus_pane_cp050_ParamLimits

0x2de2,	// (0x0005bf13) list_midp_form_text_pane_ParamLimits

0x2d94,	// (0x0005bec5) input_focus_pane_cp051_ParamLimits

0x2da8,	// (0x0005bed9) list_midp_choice_pane_ParamLimits

0xc426,	// (0x00065557) list_single_2graphic_pane_cp3_ParamLimits

0xc426,	// (0x00065557) list_single_2graphic_pane_cp3

0xc439,	// (0x0006556a) list_single_midp_graphic_pane_ParamLimits

0xc439,	// (0x0006556a) list_single_midp_graphic_pane

0xefe4,	// (0x00068115) list_single_graphic_2heading_pane_g1_ParamLimits

0xefe4,	// (0x00068115) list_single_graphic_2heading_pane_g1

0xeff0,	// (0x00068121) list_single_graphic_2heading_pane_g4_ParamLimits

0xeff0,	// (0x00068121) list_single_graphic_2heading_pane_g4

0xeffc,	// (0x0006812d) list_single_graphic_2heading_pane_g5_ParamLimits

0xeffc,	// (0x0006812d) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x000688c1) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x000688c1) list_single_graphic_2heading_pane_g

0xf008,	// (0x00068139) list_single_graphic_2heading_pane_t1_ParamLimits

0xf008,	// (0x00068139) list_single_graphic_2heading_pane_t1

0xf01c,	// (0x0006814d) list_single_graphic_2heading_pane_t2_ParamLimits

0xf01c,	// (0x0006814d) list_single_graphic_2heading_pane_t2

0xf038,	// (0x00068169) list_single_graphic_2heading_pane_t3_ParamLimits

0xf038,	// (0x00068169) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x000688c8) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x000688c8) list_single_graphic_2heading_pane_t

0x2a43,	// (0x0005bb74) bg_popup_sub_pane_cp2

0x2a6d,	// (0x0005bb9e) grid_toobar_pane

0x0744,	// (0x00059875) cell_toolbar_pane_ParamLimits

0x0744,	// (0x00059875) cell_toolbar_pane

0x2ac1,	// (0x0005bbf2) cell_toolbar_pane_g1_ParamLimits

0x2ac1,	// (0x0005bbf2) cell_toolbar_pane_g1

0x2ad5,	// (0x0005bc06) cell_toolbar_pane_g2_ParamLimits

0x2ad5,	// (0x0005bc06) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x000688d6) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x000688d6) cell_toolbar_pane_g

0x2af7,	// (0x0005bc28) grid_highlight_pane_cp2_ParamLimits

0x2af7,	// (0x0005bc28) grid_highlight_pane_cp2

0x2b11,	// (0x0005bc42) toolbar_button_pane

0x2b1d,	// (0x0005bc4e) toolbar_button_pane_g1

0x2b25,	// (0x0005bc56) toolbar_button_pane_g2

0x2b2d,	// (0x0005bc5e) toolbar_button_pane_g3

0x2b35,	// (0x0005bc66) toolbar_button_pane_g4

0x2b3d,	// (0x0005bc6e) toolbar_button_pane_g5

0x2b45,	// (0x0005bc76) toolbar_button_pane_g6

0x2b4d,	// (0x0005bc7e) toolbar_button_pane_g7

0x2b55,	// (0x0005bc86) toolbar_button_pane_g8

0x2b5d,	// (0x0005bc8e) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x000688db) toolbar_button_pane_g

0x077c,	// (0x000598ad) list_single_2graphic_pane_g1_cp3_ParamLimits

0x077c,	// (0x000598ad) list_single_2graphic_pane_g1_cp3

0xb4d4,	// (0x00064605) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb4d4,	// (0x00064605) list_single_2graphic_pane_g2_cp3

0x0799,	// (0x000598ca) list_single_2graphic_pane_g3_cp3

0x07a1,	// (0x000598d2) list_single_2graphic_pane_g4_cp3_ParamLimits

0x07a1,	// (0x000598d2) list_single_2graphic_pane_g4_cp3

0x07ad,	// (0x000598de) list_single_2graphic_pane_t1_cp3_ParamLimits

0x07ad,	// (0x000598de) list_single_2graphic_pane_t1_cp3

0x07c8,	// (0x000598f9) list_single_midp_graphic_pane_g2_ParamLimits

0x07c8,	// (0x000598f9) list_single_midp_graphic_pane_g2

0xefd4,	// (0x00068105) aid_zoom_text_primary

0xefdc,	// (0x0006810d) aid_zoom_text_secondary

0x2517,	// (0x0005b648) status_small_pane_g7_ParamLimits

0x2517,	// (0x0005b648) status_small_pane_g7

0x253a,	// (0x0005b66b) status_small_pane_t1_ParamLimits

0x9e1e,	// (0x00062f4f) title_pane_g2

0x0003,

0xf529,	// (0x0006865a) title_pane_g

0xa0be,	// (0x000631ef) aid_size_cell_colour_1_pane_ParamLimits

0xa0be,	// (0x000631ef) aid_size_cell_colour_1_pane

0xa0d2,	// (0x00063203) aid_size_cell_colour_2_pane_ParamLimits

0xa0d2,	// (0x00063203) aid_size_cell_colour_2_pane

0xa0e6,	// (0x00063217) aid_size_cell_colour_3_pane_ParamLimits

0xa0e6,	// (0x00063217) aid_size_cell_colour_3_pane

0xa0fa,	// (0x0006322b) aid_size_cell_colour_4_pane_ParamLimits

0xa0fa,	// (0x0006322b) aid_size_cell_colour_4_pane

0xf08c,	// (0x000681bd) title_pane_stacon_g1_ParamLimits

0xf08c,	// (0x000681bd) title_pane_stacon_g1

0x31c1,	// (0x0005c2f2) popup_note_wait_window_g3_ParamLimits

0x31c1,	// (0x0005c2f2) popup_note_wait_window_g3

0x3238,	// (0x0005c369) popup_note_wait_window_t5_ParamLimits

0x3238,	// (0x0005c369) popup_note_wait_window_t5

0x88db,	// (0x00061a0c) main_feb_china_hwr_fs_writing_pane

0xadca,	// (0x00063efb) popup_feb_china_hwr_fs_window_ParamLimits

0xadca,	// (0x00063efb) popup_feb_china_hwr_fs_window

0xb4e5,	// (0x00064616) aid_size_cell_hwr_fs_ParamLimits

0xb4e5,	// (0x00064616) aid_size_cell_hwr_fs

0x2ba9,	// (0x0005bcda) bg_popup_sub_pane_cp3_ParamLimits

0x2ba9,	// (0x0005bcda) bg_popup_sub_pane_cp3

0xb4fa,	// (0x0006462b) grid_hwr_fs_pane_ParamLimits

0xb4fa,	// (0x0006462b) grid_hwr_fs_pane

0x0817,	// (0x00059948) linegrid_hwr_fs_pane_ParamLimits

0x0817,	// (0x00059948) linegrid_hwr_fs_pane

0xb512,	// (0x00064643) cell_hwr_fs_pane_ParamLimits

0xb512,	// (0x00064643) cell_hwr_fs_pane

0x2bb5,	// (0x0005bce6) linegrid_hwr_fs_pane_g1_ParamLimits

0x2bb5,	// (0x0005bce6) linegrid_hwr_fs_pane_g1

0xc3fa,	// (0x0006552b) linegrid_hwr_fs_pane_g2_ParamLimits

0xc3fa,	// (0x0006552b) linegrid_hwr_fs_pane_g2

0x2bd3,	// (0x0005bd04) linegrid_hwr_fs_pane_g3_ParamLimits

0x2bd3,	// (0x0005bd04) linegrid_hwr_fs_pane_g3

0x084b,	// (0x0005997c) linegrid_hwr_fs_pane_g4_ParamLimits

0x084b,	// (0x0005997c) linegrid_hwr_fs_pane_g4

0x0869,	// (0x0005999a) linegrid_hwr_fs_pane_g5_ParamLimits

0x0869,	// (0x0005999a) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x00068901) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x00068901) linegrid_hwr_fs_pane_g

0x2bdf,	// (0x0005bd10) cell_hwr_fs_pane_g1_ParamLimits

0x2bdf,	// (0x0005bd10) cell_hwr_fs_pane_g1

0x297c,	// (0x0005baad) cell_hwr_fs_pane_g2_ParamLimits

0x297c,	// (0x0005baad) cell_hwr_fs_pane_g2

0xc40c,	// (0x0006553d) cell_hwr_fs_pane_g3_ParamLimits

0xc40c,	// (0x0006553d) cell_hwr_fs_pane_g3

0xc419,	// (0x0006554a) cell_hwr_fs_pane_g4_ParamLimits

0xc419,	// (0x0006554a) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0006890c) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0006890c) cell_hwr_fs_pane_g

0xb538,	// (0x00064669) cell_hwr_fs_pane_t1

0x88db,	// (0x00061a0c) grid_highlight_pane_cp6

0x88db,	// (0x00061a0c) main_idle_act2_pane

0x909c,	// (0x000621cd) aid_inside_area_popup_secondary

0xc502,	// (0x00065633) aid_inside_area_window_primary_ParamLimits

0xc502,	// (0x00065633) aid_inside_area_window_primary

0x4632,	// (0x0005d763) ai2_news_ticker_pane

0x463a,	// (0x0005d76b) aid_size_cell_ai1_link_ParamLimits

0x463a,	// (0x0005d76b) aid_size_cell_ai1_link

0x4654,	// (0x0005d785) popup_ai2_data_window_ParamLimits

0x4654,	// (0x0005d785) popup_ai2_data_window

0x4672,	// (0x0005d7a3) popup_ai2_link_window_ParamLimits

0x4672,	// (0x0005d7a3) popup_ai2_link_window

0x2ba9,	// (0x0005bcda) bg_popup_sub_pane_cp4_ParamLimits

0x2ba9,	// (0x0005bcda) bg_popup_sub_pane_cp4

0x4688,	// (0x0005d7b9) grid_ai2_link_pane_ParamLimits

0x4688,	// (0x0005d7b9) grid_ai2_link_pane

0x469f,	// (0x0005d7d0) popup_ai2_link_window_g1_ParamLimits

0x469f,	// (0x0005d7d0) popup_ai2_link_window_g1

0x46ab,	// (0x0005d7dc) popup_ai2_link_window_g2_ParamLimits

0x46ab,	// (0x0005d7dc) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x00068adf) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x00068adf) popup_ai2_link_window_g

0x46bc,	// (0x0005d7ed) ai2_mp_button_pane

0x46c4,	// (0x0005d7f5) ai2_mp_volume_pane

0x2d94,	// (0x0005bec5) bg_popup_sub_pane_cp5_ParamLimits

0x2d94,	// (0x0005bec5) bg_popup_sub_pane_cp5

0x46cc,	// (0x0005d7fd) heading_ai2_gene_pane_ParamLimits

0x46cc,	// (0x0005d7fd) heading_ai2_gene_pane

0x46d8,	// (0x0005d809) list_ai2_gene_pane_ParamLimits

0x46d8,	// (0x0005d809) list_ai2_gene_pane

0x4720,	// (0x0005d851) cell_ai2_link_pane_ParamLimits

0x4720,	// (0x0005d851) cell_ai2_link_pane

0x4736,	// (0x0005d867) cell_ai2_link_pane_g1

0x88db,	// (0x00061a0c) grid_highlight_pane_cp7

0x0c48,	// (0x00059d79) ai2_mp_volume_pane_g1

0x4809,	// (0x0005d93a) ai2_mp_volume_pane_g2

0x477e,	// (0x0005d8af) list_ai2_gene_pane_t1

0x4811,	// (0x0005d942) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x00068af8) ai2_mp_volume_pane_g

0x0c50,	// (0x00059d81) volume_small_pane_cp3

0x4819,	// (0x0005d94a) aid_size_cell_ai2_button

0x4821,	// (0x0005d952) grid_ai2_button_pane

0x482a,	// (0x0005d95b) cell_ai2_button_pane_ParamLimits

0x482a,	// (0x0005d95b) cell_ai2_button_pane

0x88d1,	// (0x00061a02) cell_ai2_button_pane_g1

0x88db,	// (0x00061a0c) grid_highlight_pane_cp8

0x47c9,	// (0x0005d8fa) ai2_gene_pane_t1_ParamLimits

0x47c9,	// (0x0005d8fa) ai2_gene_pane_t1

0xad46,	// (0x00063e77) aid_height_parent_landscape

0xc6a9,	// (0x000657da) aid_height_set_list

0x4100,	// (0x0005d231) aid_size_parent

0x4451,	// (0x0005d582) aid_size_cell_graphic_pane_ParamLimits

0x46e8,	// (0x0005d819) popup_ai2_data_window_g1_ParamLimits

0x46e8,	// (0x0005d819) popup_ai2_data_window_g1

0x46f4,	// (0x0005d825) ai2_news_ticker_pane_g1

0x46fc,	// (0x0005d82d) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x00068ae4) ai2_news_ticker_pane_g

0x4704,	// (0x0005d835) ai2_news_ticker_pane_t1

0x4712,	// (0x0005d843) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x00068ae9) ai2_news_ticker_pane_t

0x473f,	// (0x0005d870) heading_ai2_gene_pane_g1

0x4747,	// (0x0005d878) heading_ai2_gene_pane_t1_ParamLimits

0x4747,	// (0x0005d878) heading_ai2_gene_pane_t1

0x475c,	// (0x0005d88d) list_highlight_pane_cp6

0x4764,	// (0x0005d895) ai2_gene_pane_ParamLimits

0x4764,	// (0x0005d895) ai2_gene_pane

0x478c,	// (0x0005d8bd) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x00068aee) list_ai2_gene_pane_t

0x479a,	// (0x0005d8cb) list_highlight_pane_cp8_ParamLimits

0x479a,	// (0x0005d8cb) list_highlight_pane_cp8

0x47ab,	// (0x0005d8dc) ai2_gene_pane_g1_ParamLimits

0x47ab,	// (0x0005d8dc) ai2_gene_pane_g1

0x47bd,	// (0x0005d8ee) ai2_gene_pane_g2_ParamLimits

0x47bd,	// (0x0005d8ee) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x00068af3) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x00068af3) ai2_gene_pane_g

0x8f0f,	// (0x00062040) scroll_pane_cp12

0xad05,	// (0x00063e36) control_pane_t3_ParamLimits

0xad05,	// (0x00063e36) control_pane_t3

0x252b,	// (0x0005b65c) status_small_pane_g8_ParamLimits

0x252b,	// (0x0005b65c) status_small_pane_g8

0xae6c,	// (0x00063f9d) popup_find_window_ParamLimits

0xb123,	// (0x00064254) popup_note_image_window_ParamLimits

0xdb77,	// (0x00066ca8) list_double2_graphic_pane_vc_g1_ParamLimits

0xdb77,	// (0x00066ca8) list_double2_graphic_pane_vc_g1

0x2aa9,	// (0x0005bbda) list_double2_graphic_pane_vc_g2_ParamLimits

0x2aa9,	// (0x0005bbda) list_double2_graphic_pane_vc_g2

0x2ab5,	// (0x0005bbe6) list_double2_graphic_pane_vc_g3_ParamLimits

0x2ab5,	// (0x0005bbe6) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x000688cf) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x000688cf) list_double2_graphic_pane_vc_g

0xe014,	// (0x00067145) list_double2_graphic_pane_vc_t1_ParamLimits

0xe014,	// (0x00067145) list_double2_graphic_pane_vc_t1

0x2aa9,	// (0x0005bbda) list_single_heading_pane_vc_g1_ParamLimits

0x2aa9,	// (0x0005bbda) list_single_heading_pane_vc_g1

0x2ab5,	// (0x0005bbe6) list_single_heading_pane_vc_g2_ParamLimits

0x2ab5,	// (0x0005bbe6) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x000686de) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x000686de) list_single_heading_pane_vc_g

0xe02a,	// (0x0006715b) list_single_heading_pane_vc_t1_ParamLimits

0xe02a,	// (0x0006715b) list_single_heading_pane_vc_t1

0xe040,	// (0x00067171) list_single_heading_pane_vc_t2_ParamLimits

0xe040,	// (0x00067171) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x000688f0) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x000688f0) list_single_heading_pane_vc_t

0x2b65,	// (0x0005bc96) list_setting_number_pane_vc_g1_ParamLimits

0x2b65,	// (0x0005bc96) list_setting_number_pane_vc_g1

0x2b71,	// (0x0005bca2) list_setting_number_pane_vc_g2_ParamLimits

0x2b71,	// (0x0005bca2) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x000688f5) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x000688f5) list_setting_number_pane_vc_g

0xe052,	// (0x00067183) list_setting_number_pane_vc_t1_ParamLimits

0xe052,	// (0x00067183) list_setting_number_pane_vc_t1

0xe066,	// (0x00067197) list_setting_number_pane_vc_t2_ParamLimits

0xe066,	// (0x00067197) list_setting_number_pane_vc_t2

0xe082,	// (0x000671b3) list_setting_number_pane_vc_t3_ParamLimits

0xe082,	// (0x000671b3) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x000688fa) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x000688fa) list_setting_number_pane_vc_t

0xe0b0,	// (0x000671e1) set_value_pane_vc_ParamLimits

0xe0b0,	// (0x000671e1) set_value_pane_vc

0x42e9,	// (0x0005d41a) list_double2_graphic_pane_vc_ParamLimits

0x42e9,	// (0x0005d41a) list_double2_graphic_pane_vc

0x42e9,	// (0x0005d41a) list_double2_large_graphic_pane_vc_ParamLimits

0x42e9,	// (0x0005d41a) list_double2_large_graphic_pane_vc

0x42e9,	// (0x0005d41a) list_double2_pane_vc_ParamLimits

0x42e9,	// (0x0005d41a) list_double2_pane_vc

0x42e9,	// (0x0005d41a) list_double_graphic_heading_pane_vc_ParamLimits

0x42e9,	// (0x0005d41a) list_double_graphic_heading_pane_vc

0x42e9,	// (0x0005d41a) list_double_graphic_pane_vc_ParamLimits

0x42e9,	// (0x0005d41a) list_double_graphic_pane_vc

0x42e9,	// (0x0005d41a) list_double_heading_pane_vc_ParamLimits

0x42e9,	// (0x0005d41a) list_double_heading_pane_vc

0x42fd,	// (0x0005d42e) list_double_large_graphic_pane_vc_ParamLimits

0x42fd,	// (0x0005d42e) list_double_large_graphic_pane_vc

0x42e9,	// (0x0005d41a) list_double_number_pane_vc_ParamLimits

0x42e9,	// (0x0005d41a) list_double_number_pane_vc

0x42e9,	// (0x0005d41a) list_double_pane_vc_ParamLimits

0x42e9,	// (0x0005d41a) list_double_pane_vc

0x42e9,	// (0x0005d41a) list_double_time_pane_vc_ParamLimits

0x42e9,	// (0x0005d41a) list_double_time_pane_vc

0x42e9,	// (0x0005d41a) list_setting_number_pane_vc_ParamLimits

0x42e9,	// (0x0005d41a) list_setting_number_pane_vc

0x42e9,	// (0x0005d41a) list_setting_pane_vc_ParamLimits

0x42e9,	// (0x0005d41a) list_setting_pane_vc

0x42e9,	// (0x0005d41a) list_single_graphic_heading_pane_vc_ParamLimits

0x42e9,	// (0x0005d41a) list_single_graphic_heading_pane_vc

0x42e9,	// (0x0005d41a) list_single_heading_pane_vc_ParamLimits

0x42e9,	// (0x0005d41a) list_single_heading_pane_vc

0x42e9,	// (0x0005d41a) list_single_number_heading_pane_vc_ParamLimits

0x42e9,	// (0x0005d41a) list_single_number_heading_pane_vc

0xdb77,	// (0x00066ca8) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xdb77,	// (0x00066ca8) list_double_graphic_heading_pane_vc_g1

0x2217,	// (0x0005b348) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x2217,	// (0x0005b348) list_double_graphic_heading_pane_vc_g2

0x396a,	// (0x0005ca9b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x396a,	// (0x0005ca9b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ce,	// (0x00068aff) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x00068aff) list_double_graphic_heading_pane_vc_g

0xe0f9,	// (0x0006722a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe0f9,	// (0x0006722a) list_double_graphic_heading_pane_vc_t1

0xe10f,	// (0x00067240) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe10f,	// (0x00067240) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d5,	// (0x00068b06) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d5,	// (0x00068b06) list_double_graphic_heading_pane_vc_t

0x2b65,	// (0x0005bc96) list_setting_pane_vc_g1_ParamLimits

0x2b65,	// (0x0005bc96) list_setting_pane_vc_g1

0x2b71,	// (0x0005bca2) list_setting_pane_vc_g2_ParamLimits

0x2b71,	// (0x0005bca2) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x000688f5) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x000688f5) list_setting_pane_vc_g

0xe12d,	// (0x0006725e) list_setting_pane_vc_t1_ParamLimits

0xe12d,	// (0x0006725e) list_setting_pane_vc_t1

0xe149,	// (0x0006727a) list_setting_pane_vc_t2_ParamLimits

0xe149,	// (0x0006727a) list_setting_pane_vc_t2

0x0001,

0xfa18,	// (0x00068b49) list_setting_pane_vc_t_ParamLimits

0xfa18,	// (0x00068b49) list_setting_pane_vc_t

0xe0b0,	// (0x000671e1) set_value_pane_cp_vc_ParamLimits

0xe0b0,	// (0x000671e1) set_value_pane_cp_vc

0x2aa9,	// (0x0005bbda) list_single_number_heading_pane_vc_g1_ParamLimits

0x2aa9,	// (0x0005bbda) list_single_number_heading_pane_vc_g1

0x2ab5,	// (0x0005bbe6) list_single_number_heading_pane_vc_g2_ParamLimits

0x2ab5,	// (0x0005bbe6) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x000686de) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x000686de) list_single_number_heading_pane_vc_g

0xdb4f,	// (0x00066c80) list_single_number_heading_pane_vc_t1_ParamLimits

0xdb4f,	// (0x00066c80) list_single_number_heading_pane_vc_t1

0xe165,	// (0x00067296) list_single_number_heading_pane_vc_t2_ParamLimits

0xe165,	// (0x00067296) list_single_number_heading_pane_vc_t2

0xdb65,	// (0x00066c96) list_single_number_heading_pane_vc_t3_ParamLimits

0xdb65,	// (0x00066c96) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1d,	// (0x00068b4e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1d,	// (0x00068b4e) list_single_number_heading_pane_vc_t

0xdb77,	// (0x00066ca8) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xdb77,	// (0x00066ca8) list_single_graphic_heading_pane_vc_g1

0x2aa9,	// (0x0005bbda) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2aa9,	// (0x0005bbda) list_single_graphic_heading_pane_vc_g4

0x2ab5,	// (0x0005bbe6) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2ab5,	// (0x0005bbe6) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x000688cf) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x000688cf) list_single_graphic_heading_pane_vc_g

0xdb4f,	// (0x00066c80) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xdb4f,	// (0x00066c80) list_single_graphic_heading_pane_vc_t1

0xe17b,	// (0x000672ac) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe17b,	// (0x000672ac) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa24,	// (0x00068b55) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa24,	// (0x00068b55) list_single_graphic_heading_pane_vc_t

0x2aa9,	// (0x0005bbda) list_double2_pane_vc_g1_ParamLimits

0x2aa9,	// (0x0005bbda) list_double2_pane_vc_g1

0x2ab5,	// (0x0005bbe6) list_double2_pane_vc_g2_ParamLimits

0x2ab5,	// (0x0005bbe6) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x000686de) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x000686de) list_double2_pane_vc_g

0xe0e3,	// (0x00067214) list_double2_pane_vc_t1_ParamLimits

0xe0e3,	// (0x00067214) list_double2_pane_vc_t1

0x3976,	// (0x0005caa7) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3976,	// (0x0005caa7) list_double2_large_graphic_pane_vc_g1

0x2aa9,	// (0x0005bbda) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2aa9,	// (0x0005bbda) list_double2_large_graphic_pane_vc_g2

0x2ab5,	// (0x0005bbe6) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2ab5,	// (0x0005bbe6) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x000686f6) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x000686f6) list_double2_large_graphic_pane_vc_g

0xdb83,	// (0x00066cb4) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xdb83,	// (0x00066cb4) list_double2_large_graphic_pane_vc_t1

0x3982,	// (0x0005cab3) list_double_time_pane_vc_g1_ParamLimits

0x3982,	// (0x0005cab3) list_double_time_pane_vc_g1

0x398e,	// (0x0005cabf) list_double_time_pane_vc_g2_ParamLimits

0x398e,	// (0x0005cabf) list_double_time_pane_vc_g2

0x0001,

0xfa29,	// (0x00068b5a) list_double_time_pane_vc_g_ParamLimits

0xfa29,	// (0x00068b5a) list_double_time_pane_vc_g

0xe18d,	// (0x000672be) list_double_time_pane_vc_t1_ParamLimits

0xe18d,	// (0x000672be) list_double_time_pane_vc_t1

0xe1b7,	// (0x000672e8) list_double_time_pane_vc_t2_ParamLimits

0xe1b7,	// (0x000672e8) list_double_time_pane_vc_t2

0xe200,	// (0x00067331) list_double_time_pane_vc_t3_ParamLimits

0xe200,	// (0x00067331) list_double_time_pane_vc_t3

0xe212,	// (0x00067343) list_double_time_pane_vc_t4_ParamLimits

0xe212,	// (0x00067343) list_double_time_pane_vc_t4

0x0003,

0xfa2e,	// (0x00068b5f) list_double_time_pane_vc_t_ParamLimits

0xfa2e,	// (0x00068b5f) list_double_time_pane_vc_t

0x2aa9,	// (0x0005bbda) list_double_pane_vc_g1_ParamLimits

0x2aa9,	// (0x0005bbda) list_double_pane_vc_g1

0x2ab5,	// (0x0005bbe6) list_double_pane_vc_g2_ParamLimits

0x2ab5,	// (0x0005bbe6) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x000686de) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x000686de) list_double_pane_vc_g

0xe226,	// (0x00067357) list_double_pane_vc_t1_ParamLimits

0xe226,	// (0x00067357) list_double_pane_vc_t1

0xe23a,	// (0x0006736b) list_double_pane_vc_t2_ParamLimits

0xe23a,	// (0x0006736b) list_double_pane_vc_t2

0x0001,

0xfa37,	// (0x00068b68) list_double_pane_vc_t_ParamLimits

0xfa37,	// (0x00068b68) list_double_pane_vc_t

0x2aa9,	// (0x0005bbda) list_double_number_pane_vc_g1_ParamLimits

0x2aa9,	// (0x0005bbda) list_double_number_pane_vc_g1

0x2ab5,	// (0x0005bbe6) list_double_number_pane_vc_g2_ParamLimits

0x2ab5,	// (0x0005bbe6) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x000686de) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x000686de) list_double_number_pane_vc_g

0xe0d1,	// (0x00067202) list_double_number_pane_vc_t1_ParamLimits

0xe0d1,	// (0x00067202) list_double_number_pane_vc_t1

0xe250,	// (0x00067381) list_double_number_pane_vc_t2_ParamLimits

0xe250,	// (0x00067381) list_double_number_pane_vc_t2

0xe23a,	// (0x0006736b) list_double_number_pane_vc_t3_ParamLimits

0xe23a,	// (0x0006736b) list_double_number_pane_vc_t3

0x0002,

0xfa3c,	// (0x00068b6d) list_double_number_pane_vc_t_ParamLimits

0xfa3c,	// (0x00068b6d) list_double_number_pane_vc_t

0x399a,	// (0x0005cacb) list_double_large_graphic_pane_vc_g1_ParamLimits

0x399a,	// (0x0005cacb) list_double_large_graphic_pane_vc_g1

0x39bc,	// (0x0005caed) list_double_large_graphic_pane_vc_g2_ParamLimits

0x39bc,	// (0x0005caed) list_double_large_graphic_pane_vc_g2

0x39d0,	// (0x0005cb01) list_double_large_graphic_pane_vc_g3_ParamLimits

0x39d0,	// (0x0005cb01) list_double_large_graphic_pane_vc_g3

0xe264,	// (0x00067395) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe264,	// (0x00067395) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa43,	// (0x00068b74) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa43,	// (0x00068b74) list_double_large_graphic_pane_vc_g

0xe270,	// (0x000673a1) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe270,	// (0x000673a1) list_double_large_graphic_pane_vc_t1

0xe28c,	// (0x000673bd) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe28c,	// (0x000673bd) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa4c,	// (0x00068b7d) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa4c,	// (0x00068b7d) list_double_large_graphic_pane_vc_t

0x2217,	// (0x0005b348) list_double_heading_pane_vc_g1_ParamLimits

0x2217,	// (0x0005b348) list_double_heading_pane_vc_g1

0x396a,	// (0x0005ca9b) list_double_heading_pane_vc_g2_ParamLimits

0x396a,	// (0x0005ca9b) list_double_heading_pane_vc_g2

0x0001,

0xfa51,	// (0x00068b82) list_double_heading_pane_vc_g_ParamLimits

0xfa51,	// (0x00068b82) list_double_heading_pane_vc_g

0xe2ac,	// (0x000673dd) list_double_heading_pane_vc_t1_ParamLimits

0xe2ac,	// (0x000673dd) list_double_heading_pane_vc_t1

0xe2be,	// (0x000673ef) list_double_heading_pane_vc_t2_ParamLimits

0xe2be,	// (0x000673ef) list_double_heading_pane_vc_t2

0x0001,

0xfa56,	// (0x00068b87) list_double_heading_pane_vc_t_ParamLimits

0xfa56,	// (0x00068b87) list_double_heading_pane_vc_t

0xe2d6,	// (0x00067407) list_double_graphic_pane_vc_g1_ParamLimits

0xe2d6,	// (0x00067407) list_double_graphic_pane_vc_g1

0x39df,	// (0x0005cb10) list_double_graphic_pane_vc_g2_ParamLimits

0x39df,	// (0x0005cb10) list_double_graphic_pane_vc_g2

0x2aa9,	// (0x0005bbda) list_double_graphic_pane_vc_g3_ParamLimits

0x2aa9,	// (0x0005bbda) list_double_graphic_pane_vc_g3

0x0003,

0xfa5b,	// (0x00068b8c) list_double_graphic_pane_vc_g_ParamLimits

0xfa5b,	// (0x00068b8c) list_double_graphic_pane_vc_g

0xe2e2,	// (0x00067413) list_double_graphic_pane_vc_t1_ParamLimits

0xe2e2,	// (0x00067413) list_double_graphic_pane_vc_t1

0xe30c,	// (0x0006743d) list_double_graphic_pane_vc_t2_ParamLimits

0xe30c,	// (0x0006743d) list_double_graphic_pane_vc_t2

0x0001,

0xfa64,	// (0x00068b95) list_double_graphic_pane_vc_t_ParamLimits

0xfa64,	// (0x00068b95) list_double_graphic_pane_vc_t

0xed77,	// (0x00067ea8) aid_size_cell_fastswap

0x9bf7,	// (0x00062d28) aid_size_cell_touch_ParamLimits

0x9bf7,	// (0x00062d28) aid_size_cell_touch

0xeefe,	// (0x0006802f) popup_fast_swap_wide_window_ParamLimits

0xeefe,	// (0x0006802f) popup_fast_swap_wide_window

0x9db5,	// (0x00062ee6) touch_pane_ParamLimits

0x9db5,	// (0x00062ee6) touch_pane

0x8f65,	// (0x00062096) button_value_adjust_pane_cp2

0xdba7,	// (0x00066cd8) button_value_adjust_pane_cp4

0xdbaf,	// (0x00066ce0) form_field_data_pane_cp2

0xa69f,	// (0x000637d0) form_field_data_wide_pane_cp2

0xdcb8,	// (0x00066de9) bg_scroll_pane_ParamLimits

0xf1ef,	// (0x00068320) scroll_handle_pane_ParamLimits

0xf203,	// (0x00068334) scroll_sc2_down_pane_ParamLimits

0xf203,	// (0x00068334) scroll_sc2_down_pane

0xdce9,	// (0x00066e1a) scroll_sc2_up_pane_ParamLimits

0xdce9,	// (0x00066e1a) scroll_sc2_up_pane

0xca8d,	// (0x00065bbe) grid_wheel_folder_pane_g1_ParamLimits

0xca8d,	// (0x00065bbe) grid_wheel_folder_pane_g1

0xf3d3,	// (0x00068504) clock_nsta_pane_cp2_ParamLimits

0xf3d3,	// (0x00068504) clock_nsta_pane_cp2

0xab59,	// (0x00063c8a) listscroll_midp_pane_ParamLimits

0xab65,	// (0x00063c96) midp_canvas_pane

0x25a5,	// (0x0005b6d6) nsta_clock_indic_pane

0x25d9,	// (0x0005b70a) listscroll_form_pane_vc

0x25e1,	// (0x0005b712) listscroll_set_pane_vc_ParamLimits

0x25e1,	// (0x0005b712) listscroll_set_pane_vc

0xc0e7,	// (0x00065218) clock_nsta_pane

0xc111,	// (0x00065242) indicator_nsta_pane

0x2a43,	// (0x0005bb74) bg_popup_sub_pane_cp2_ParamLimits

0x2a57,	// (0x0005bb88) find_pane_cp2_ParamLimits

0x2a57,	// (0x0005bb88) find_pane_cp2

0x2a6d,	// (0x0005bb9e) grid_toobar_pane_ParamLimits

0x2b7d,	// (0x0005bcae) list_form_gen_pane_vc_ParamLimits

0x2b7d,	// (0x0005bcae) list_form_gen_pane_vc

0x2b93,	// (0x0005bcc4) scroll_pane_cp8_vc_ParamLimits

0x2b93,	// (0x0005bcc4) scroll_pane_cp8_vc

0x2c0f,	// (0x0005bd40) data_form_wide_pane_vc_ParamLimits

0x2c0f,	// (0x0005bd40) data_form_wide_pane_vc

0x2c1b,	// (0x0005bd4c) form_field_data_wide_pane_vc_g1

0x2c23,	// (0x0005bd54) form_field_data_wide_pane_vc_t1_ParamLimits

0x2c23,	// (0x0005bd54) form_field_data_wide_pane_vc_t1

0x8f79,	// (0x000620aa) input_focus_pane_cp6_vc_ParamLimits

0x8f79,	// (0x000620aa) input_focus_pane_cp6_vc

0x2f3f,	// (0x0005c070) list_midp_pane_ParamLimits

0x44bf,	// (0x0005d5f0) scroll_pane_cp16_ParamLimits

0x44bf,	// (0x0005d5f0) scroll_pane_cp16

0x2f95,	// (0x0005c0c6) button_value_adjust_pane_ParamLimits

0x2f95,	// (0x0005c0c6) button_value_adjust_pane

0xc6ba,	// (0x000657eb) button_value_adjust_pane_cp6_ParamLimits

0xc6ba,	// (0x000657eb) button_value_adjust_pane_cp6

0xc7f6,	// (0x00065927) settings_code_pane_cp_ParamLimits

0xc7f6,	// (0x00065927) settings_code_pane_cp

0x88d1,	// (0x00061a02) cell_touch_pane_g1

0x88d1,	// (0x00061a02) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x00068814) cell_touch_pane_g

0xc961,	// (0x00065a92) cell_touch_pane_cp_ParamLimits

0xc961,	// (0x00065a92) cell_touch_pane_cp

0xc97d,	// (0x00065aae) cell_touch_pane_ParamLimits

0xc97d,	// (0x00065aae) cell_touch_pane

0x88d1,	// (0x00061a02) scroll_sc2_down_pane_g1

0x88d1,	// (0x00061a02) scroll_sc2_up_pane_g1

0x88db,	// (0x00061a0c) bg_set_opt_pane_cp4_vc

0x485d,	// (0x0005d98e) list_set_graphic_pane_vc_g1_ParamLimits

0x485d,	// (0x0005d98e) list_set_graphic_pane_vc_g1

0x4869,	// (0x0005d99a) list_set_graphic_pane_vc_g2_ParamLimits

0x4869,	// (0x0005d99a) list_set_graphic_pane_vc_g2

0x0001,

0xf9da,	// (0x00068b0b) list_set_graphic_pane_vc_g_ParamLimits

0xf9da,	// (0x00068b0b) list_set_graphic_pane_vc_g

0x4875,	// (0x0005d9a6) text_primary_small_cp13_vc_ParamLimits

0x4875,	// (0x0005d9a6) text_primary_small_cp13_vc

0x488d,	// (0x0005d9be) list_set_graphic_pane_vc_ParamLimits

0x488d,	// (0x0005d9be) list_set_graphic_pane_vc

0x88db,	// (0x00061a0c) input_focus_pane_cp2_vc

0x88d1,	// (0x00061a02) setting_code_pane_vc_g1

0x8940,	// (0x00061a71) setting_code_pane_vc_t1

0x48a0,	// (0x0005d9d1) set_text_pane_vc_t1_ParamLimits

0x48a0,	// (0x0005d9d1) set_text_pane_vc_t1

0x88db,	// (0x00061a0c) input_focus_pane_cp1_vc

0x48c1,	// (0x0005d9f2) list_set_text_pane_vc

0x88d1,	// (0x00061a02) setting_text_pane_vc_g1

0x88db,	// (0x00061a0c) bg_set_opt_pane_cp2_vc

0x8937,	// (0x00061a68) setting_slider_graphic_pane_vc_g1

0x48cb,	// (0x0005d9fc) setting_slider_graphic_pane_vc_t1

0x48dd,	// (0x0005da0e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9df,	// (0x00068b10) setting_slider_graphic_pane_vc_t

0x48ef,	// (0x0005da20) slider_set_pane_cp_vc

0x48f9,	// (0x0005da2a) slider_set_pane_vc_g1

0x4902,	// (0x0005da33) slider_set_pane_vc_g2

0x0006,

0xf9e4,	// (0x00068b15) slider_set_pane_vc_g

0x8fd1,	// (0x00062102) set_opt_bg_pane_g1_copy1

0x8fd9,	// (0x0006210a) set_opt_bg_pane_g2_copy1

0x492e,	// (0x0005da5f) set_opt_bg_pane_g3_copy1

0x8fe9,	// (0x0006211a) set_opt_bg_pane_g4_copy1

0x8ff1,	// (0x00062122) set_opt_bg_pane_g5_copy1

0x8ff9,	// (0x0006212a) set_opt_bg_pane_g6_copy1

0x4938,	// (0x0005da69) set_opt_bg_pane_g7_copy1

0x4942,	// (0x0005da73) set_opt_bg_pane_g8_copy1

0x494c,	// (0x0005da7d) set_opt_bg_pane_g9_copy1

0x88db,	// (0x00061a0c) bg_set_opt_pane_cp_vc

0x4956,	// (0x0005da87) setting_slider_pane_vc_t1

0x4965,	// (0x0005da96) setting_slider_pane_vc_t2

0x4977,	// (0x0005daa8) setting_slider_pane_vc_t3

0x0002,

0xf9f3,	// (0x00068b24) setting_slider_pane_vc_t

0x4989,	// (0x0005daba) slider_set_pane_vc

0x08ac,	// (0x000599dd) volume_set_pane_vc_g1

0x08b5,	// (0x000599e6) volume_set_pane_vc_g2

0x08be,	// (0x000599ef) volume_set_pane_vc_g3

0x08c7,	// (0x000599f8) volume_set_pane_vc_g4

0x08d0,	// (0x00059a01) volume_set_pane_vc_g5

0x08d9,	// (0x00059a0a) volume_set_pane_vc_g6

0x08e2,	// (0x00059a13) volume_set_pane_vc_g7

0x08eb,	// (0x00059a1c) volume_set_pane_vc_g8

0x08f4,	// (0x00059a25) volume_set_pane_vc_g9

0x08fd,	// (0x00059a2e) volume_set_pane_vc_g10

0x0009,

0xf9fa,	// (0x00068b2b) volume_set_pane_vc_g

0x4993,	// (0x0005dac4) volume_set_pane_vc

0x499d,	// (0x0005dace) button_value_adjust_pane_cp1_vc

0x49a7,	// (0x0005dad8) list_highlight_pane_cp2_vc

0x49b0,	// (0x0005dae1) list_set_pane_vc_ParamLimits

0x49b0,	// (0x0005dae1) list_set_pane_vc

0x4a1e,	// (0x0005db4f) main_pane_set_vc_t1_ParamLimits

0x4a1e,	// (0x0005db4f) main_pane_set_vc_t1

0x4a33,	// (0x0005db64) main_pane_set_vc_t2_ParamLimits

0x4a33,	// (0x0005db64) main_pane_set_vc_t2

0x4a45,	// (0x0005db76) main_pane_set_vc_t3_ParamLimits

0x4a45,	// (0x0005db76) main_pane_set_vc_t3

0x4a59,	// (0x0005db8a) main_pane_set_vc_t4_ParamLimits

0x4a59,	// (0x0005db8a) main_pane_set_vc_t4

0x0003,

0xfa0f,	// (0x00068b40) main_pane_set_vc_t_ParamLimits

0xfa0f,	// (0x00068b40) main_pane_set_vc_t

0x4a6d,	// (0x0005db9e) setting_code_pane_vc_ParamLimits

0x4a6d,	// (0x0005db9e) setting_code_pane_vc

0x4a7e,	// (0x0005dbaf) setting_slider_graphic_pane_vc

0x4a7e,	// (0x0005dbaf) setting_slider_pane_vc

0x4a7e,	// (0x0005dbaf) setting_text_pane_vc

0x4a7e,	// (0x0005dbaf) setting_volume_pane_vc

0x4a88,	// (0x0005dbb9) scroll_pane_cp121_vc

0x8f53,	// (0x00062084) set_content_pane_vc

0x4a90,	// (0x0005dbc1) button_value_adjust_pane_g1

0x4a99,	// (0x0005dbca) button_value_adjust_pane_g2

0x0001,

0xfa69,	// (0x00068b9a) button_value_adjust_pane_g

0x4aa2,	// (0x0005dbd3) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4aa2,	// (0x0005dbd3) form_field_slider_wide_pane_vc_t1

0x4ab4,	// (0x0005dbe5) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4ab4,	// (0x0005dbe5) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa6e,	// (0x00068b9f) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa6e,	// (0x00068b9f) form_field_slider_wide_pane_vc_t

0x8a5c,	// (0x00061b8d) input_focus_pane_cp10_vc_ParamLimits

0x8a5c,	// (0x00061b8d) input_focus_pane_cp10_vc

0x4ae0,	// (0x0005dc11) slider_cont_pane_cp1_vc_ParamLimits

0x4ae0,	// (0x0005dc11) slider_cont_pane_cp1_vc

0x4af2,	// (0x0005dc23) slider_form_pane_g1_cp2

0x4902,	// (0x0005da33) slider_form_pane_g2_cp2

0x4b1f,	// (0x0005dc50) form_field_slider_pane_vc_t3

0x4b2d,	// (0x0005dc5e) form_field_slider_pane_vc_t4

0x4b3b,	// (0x0005dc6c) slider_form_pane_vc_ParamLimits

0x4b3b,	// (0x0005dc6c) slider_form_pane_vc

0x4b48,	// (0x0005dc79) form_field_slider_pane_vc_t1_ParamLimits

0x4b48,	// (0x0005dc79) form_field_slider_pane_vc_t1

0x4ab4,	// (0x0005dbe5) form_field_slider_pane_vc_t2_ParamLimits

0x4ab4,	// (0x0005dbe5) form_field_slider_pane_vc_t2

0x0001,

0xfa80,	// (0x00068bb1) form_field_slider_pane_vc_t_ParamLimits

0xfa80,	// (0x00068bb1) form_field_slider_pane_vc_t

0x8a5c,	// (0x00061b8d) input_focus_pane_cp9_vc_ParamLimits

0x8a5c,	// (0x00061b8d) input_focus_pane_cp9_vc

0x4b5e,	// (0x0005dc8f) slider_cont_pane_vc_ParamLimits

0x4b5e,	// (0x0005dc8f) slider_cont_pane_vc

0x4b72,	// (0x0005dca3) list_form_graphic_pane_cp_vc_ParamLimits

0x4b72,	// (0x0005dca3) list_form_graphic_pane_cp_vc

0x2c1b,	// (0x0005bd4c) form_field_popup_wide_pane_vc_g1

0x4b87,	// (0x0005dcb8) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4b87,	// (0x0005dcb8) form_field_popup_wide_pane_vc_t1

0x8f79,	// (0x000620aa) input_focus_pane_cp8_vc_ParamLimits

0x8f79,	// (0x000620aa) input_focus_pane_cp8_vc

0x4bcc,	// (0x0005dcfd) list_form_wide_pane_vc_ParamLimits

0x4bcc,	// (0x0005dcfd) list_form_wide_pane_vc

0x4bd8,	// (0x0005dd09) list_form_graphic_pane_vc_g1

0x4be0,	// (0x0005dd11) list_form_graphic_pane_vc_t1_ParamLimits

0x4be0,	// (0x0005dd11) list_form_graphic_pane_vc_t1

0x8929,	// (0x00061a5a) list_highlight_pane_cp5_vc_ParamLimits

0x8929,	// (0x00061a5a) list_highlight_pane_cp5_vc

0x4bfc,	// (0x0005dd2d) list_form_graphic_pane_vc_ParamLimits

0x4bfc,	// (0x0005dd2d) list_form_graphic_pane_vc

0x2c1b,	// (0x0005bd4c) form_field_popup_pane_vc_g1

0x4c12,	// (0x0005dd43) form_field_popup_pane_vc_t1_ParamLimits

0x4c12,	// (0x0005dd43) form_field_popup_pane_vc_t1

0x8f79,	// (0x000620aa) input_focus_pane_cp7_vc_ParamLimits

0x8f79,	// (0x000620aa) input_focus_pane_cp7_vc

0x4c29,	// (0x0005dd5a) list_form_pane_vc_ParamLimits

0x4c29,	// (0x0005dd5a) list_form_pane_vc

0x4c35,	// (0x0005dd66) data_form_pane_vc_t1_ParamLimits

0x4c35,	// (0x0005dd66) data_form_pane_vc_t1

0x8fd1,	// (0x00062102) input_focus_pane_vc_g1

0x8fd9,	// (0x0006210a) input_focus_pane_vc_g2

0x8fe1,	// (0x00062112) input_focus_pane_vc_g3

0x8fe9,	// (0x0006211a) input_focus_pane_vc_g4

0x8ff1,	// (0x00062122) input_focus_pane_vc_g5

0x8ff9,	// (0x0006212a) input_focus_pane_vc_g6

0x9001,	// (0x00062132) input_focus_pane_vc_g7

0x9009,	// (0x0006213a) input_focus_pane_vc_g8

0x9011,	// (0x00062142) input_focus_pane_vc_g9

0x88d1,	// (0x00061a02) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x0006879d) input_focus_pane_vc_g

0x2c0f,	// (0x0005bd40) data_form_pane_vc_ParamLimits

0x2c0f,	// (0x0005bd40) data_form_pane_vc

0x2c1b,	// (0x0005bd4c) form_field_data_pane_vc_g1

0x4c52,	// (0x0005dd83) form_field_data_pane_vc_t1_ParamLimits

0x4c52,	// (0x0005dd83) form_field_data_pane_vc_t1

0x8f79,	// (0x000620aa) input_focus_pane_vc_ParamLimits

0x8f79,	// (0x000620aa) input_focus_pane_vc

0x4c6c,	// (0x0005dd9d) button_value_adjust_pane_cp3_vc

0x4c74,	// (0x0005dda5) button_value_adjust_pane_cp5_vc

0x4c7c,	// (0x0005ddad) form_field_data_pane_vc_ParamLimits

0x4c7c,	// (0x0005ddad) form_field_data_pane_vc

0x4c97,	// (0x0005ddc8) form_field_data_pane_vc_cp2

0x4c9f,	// (0x0005ddd0) form_field_data_wide_pane_vc_ParamLimits

0x4c9f,	// (0x0005ddd0) form_field_data_wide_pane_vc

0x4cb9,	// (0x0005ddea) form_field_data_wide_pane_vc_cp2

0x4cc1,	// (0x0005ddf2) form_field_popup_pane_vc_ParamLimits

0x4cc1,	// (0x0005ddf2) form_field_popup_pane_vc

0x4cdc,	// (0x0005de0d) form_field_popup_wide_pane_vc_ParamLimits

0x4cdc,	// (0x0005de0d) form_field_popup_wide_pane_vc

0x4cf6,	// (0x0005de27) form_field_slider_pane_vc_ParamLimits

0x4cf6,	// (0x0005de27) form_field_slider_pane_vc

0x4d09,	// (0x0005de3a) form_field_slider_wide_pane_vc_ParamLimits

0x4d09,	// (0x0005de3a) form_field_slider_wide_pane_vc

0xc99b,	// (0x00065acc) grid_touch_1_pane_ParamLimits

0xc99b,	// (0x00065acc) grid_touch_1_pane

0xc9af,	// (0x00065ae0) grid_touch_2_pane_ParamLimits

0xc9af,	// (0x00065ae0) grid_touch_2_pane

0x4def,	// (0x0005df20) touch_pane_g1_ParamLimits

0x4def,	// (0x0005df20) touch_pane_g1

0x4d42,	// (0x0005de73) cell_app_pane_cp_wide_ParamLimits

0x4d42,	// (0x0005de73) cell_app_pane_cp_wide

0x4d53,	// (0x0005de84) grid_popup_fast_wide_pane_ParamLimits

0x4d53,	// (0x0005de84) grid_popup_fast_wide_pane

0x4d67,	// (0x0005de98) scroll_pane_cp19_ParamLimits

0x4d67,	// (0x0005de98) scroll_pane_cp19

0x88db,	// (0x00061a0c) bg_popup_window_pane_cp20

0x4d7b,	// (0x0005deac) listscroll_popup_fast_wide_pane

0xc9db,	// (0x00065b0c) grid_indicator_nsta_pane

0x4d95,	// (0x0005dec6) clock_nsta_pane_g1

0x4d9e,	// (0x0005decf) clock_nsta_pane_t1

0xc9e7,	// (0x00065b18) cell_indicator_nsta_pane_ParamLimits

0xc9e7,	// (0x00065b18) cell_indicator_nsta_pane

0x4def,	// (0x0005df20) cell_indicator_nsta_pane_g1

0xca02,	// (0x00065b33) cell_indicator_nsta_pane_g2

0x0001,

0xfa91,	// (0x00068bc2) cell_indicator_nsta_pane_g

0x4e10,	// (0x0005df41) clock_nsta_pane_cp

0x4e19,	// (0x0005df4a) indicator_nsta_pane_cp

0x4e23,	// (0x0005df54) nsta_clock_indic_pane_g1

0x8965,	// (0x00061a96) grid_indicator_pane

0xdddb,	// (0x00066f0c) scroll_pane_cp29

0xf322,	// (0x00068453) indicator_nsta_pane_cp2_ParamLimits

0xf322,	// (0x00068453) indicator_nsta_pane_cp2

0x8929,	// (0x00061a5a) main_apps_wheel_pane

0x2dfc,	// (0x0005bf2d) form_midp_field_text_pane_ParamLimits

0x2f4b,	// (0x0005c07c) scroll_bar_cp050_ParamLimits

0x4e7c,	// (0x0005dfad) cell_indicator_pane_ParamLimits

0x4e7c,	// (0x0005dfad) cell_indicator_pane

0x4e94,	// (0x0005dfc5) cell_indicator_pane_g1

0xca0f,	// (0x00065b40) grid_wheel_folder_pane_ParamLimits

0xca0f,	// (0x00065b40) grid_wheel_folder_pane

0xca1d,	// (0x00065b4e) list_wheel_apps_pane_ParamLimits

0xca1d,	// (0x00065b4e) list_wheel_apps_pane

0xca2b,	// (0x00065b5c) main_apps_wheel_pane_g1_ParamLimits

0xca2b,	// (0x00065b5c) main_apps_wheel_pane_g1

0xca3b,	// (0x00065b6c) main_apps_wheel_pane_g2_ParamLimits

0xca3b,	// (0x00065b6c) main_apps_wheel_pane_g2

0x0001,

0xfaad,	// (0x00068bde) main_apps_wheel_pane_g_ParamLimits

0xfaad,	// (0x00068bde) main_apps_wheel_pane_g

0xca4b,	// (0x00065b7c) main_apps_wheel_pane_t1_ParamLimits

0xca4b,	// (0x00065b7c) main_apps_wheel_pane_t1

0xca63,	// (0x00065b94) list_wheel_apps_pane_g1

0xca6b,	// (0x00065b9c) list_wheel_apps_pane_g2

0xca73,	// (0x00065ba4) list_wheel_apps_pane_g3

0xca7b,	// (0x00065bac) list_wheel_apps_pane_g4

0xca83,	// (0x00065bb4) list_wheel_apps_pane_g5

0x0004,

0xfab2,	// (0x00068be3) list_wheel_apps_pane_g

0x2117,	// (0x0005b248) navi_icon_text_pane

0xb491,	// (0x000645c2) aid_fill_nsta

0xca9e,	// (0x00065bcf) navi_icon_text_pane_g1

0xcaaa,	// (0x00065bdb) navi_icon_text_pane_t1

0x1fb9,	// (0x0005b0ea) list_set_graphic_pane_t1_ParamLimits

0x1fb9,	// (0x0005b0ea) list_set_graphic_pane_t1

0x36b8,	// (0x0005c7e9) popup_midp_note_alarm_window_t6_ParamLimits

0x36b8,	// (0x0005c7e9) popup_midp_note_alarm_window_t6

0x36ca,	// (0x0005c7fb) popup_midp_note_alarm_window_t7_ParamLimits

0x36ca,	// (0x0005c7fb) popup_midp_note_alarm_window_t7

0x36dc,	// (0x0005c80d) popup_midp_note_alarm_window_t8_ParamLimits

0x36dc,	// (0x0005c80d) popup_midp_note_alarm_window_t8

0x36ee,	// (0x0005c81f) popup_midp_note_alarm_window_t9_ParamLimits

0x36ee,	// (0x0005c81f) popup_midp_note_alarm_window_t9

0x3700,	// (0x0005c831) popup_midp_note_alarm_window_t10_ParamLimits

0x3700,	// (0x0005c831) popup_midp_note_alarm_window_t10

0x3712,	// (0x0005c843) popup_midp_note_alarm_window_t11_ParamLimits

0x3712,	// (0x0005c843) popup_midp_note_alarm_window_t11

0x3724,	// (0x0005c855) scroll_pane_cp17_ParamLimits

0x3724,	// (0x0005c855) scroll_pane_cp17

0x08ac,	// (0x000599dd) volume_small_pane_cp_g1

0x0c59,	// (0x00059d8a) volume_small_pane_cp_g2

0x0c62,	// (0x00059d93) volume_small_pane_cp_g3

0x0c6b,	// (0x00059d9c) volume_small_pane_cp_g4

0x0c74,	// (0x00059da5) volume_small_pane_cp_g5

0x0c7d,	// (0x00059dae) volume_small_pane_cp_g6

0x0c86,	// (0x00059db7) volume_small_pane_cp_g7

0x0c8f,	// (0x00059dc0) volume_small_pane_cp_g8

0x0c98,	// (0x00059dc9) volume_small_pane_cp_g9

0x0ca1,	// (0x00059dd2) volume_small_pane_cp_g10

0x2384,	// (0x0005b4b5) midp_ticker_pane_g1_ParamLimits

0x2390,	// (0x0005b4c1) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x00068869) midp_ticker_pane_g_ParamLimits

0xabfd,	// (0x00063d2e) midp_ticker_pane_t1_ParamLimits

0xb4b5,	// (0x000645e6) aid_fill_nsta_2

0x2f37,	// (0x0005c068) list_form2_midp_pane

0x42a1,	// (0x0005d3d2) midp_editing_number_pane_ParamLimits

0x42b0,	// (0x0005d3e1) midp_ticker_pane_ParamLimits

0x4f87,	// (0x0005e0b8) form2_midp_field_pane

0x4fab,	// (0x0005e0dc) scroll_pane_cp51

0x4fcb,	// (0x0005e0fc) form2_midp_button_pane_ParamLimits

0x4fcb,	// (0x0005e0fc) form2_midp_button_pane

0x4fdd,	// (0x0005e10e) form2_midp_content_pane_ParamLimits

0x4fdd,	// (0x0005e10e) form2_midp_content_pane

0x4ff7,	// (0x0005e128) form2_midp_field_choice_group_pane

0x4fff,	// (0x0005e130) form2_midp_field_pane_g1

0x5007,	// (0x0005e138) form2_midp_field_pane_g2

0x500f,	// (0x0005e140) form2_midp_field_pane_g3

0x5017,	// (0x0005e148) form2_midp_field_pane_g4

0x0003,

0xfad7,	// (0x00068c08) form2_midp_field_pane_g

0x501f,	// (0x0005e150) form2_midp_gauge_slider_pane

0x5027,	// (0x0005e158) form2_midp_gauge_wait_pane

0x502f,	// (0x0005e160) form2_midp_image_pane_ParamLimits

0x502f,	// (0x0005e160) form2_midp_image_pane

0x504a,	// (0x0005e17b) form2_midp_label_pane_ParamLimits

0x504a,	// (0x0005e17b) form2_midp_label_pane

0xcad8,	// (0x00065c09) form2_midp_label_pane_cp_ParamLimits

0xcad8,	// (0x00065c09) form2_midp_label_pane_cp

0x508a,	// (0x0005e1bb) form2_midp_string_pane_ParamLimits

0x508a,	// (0x0005e1bb) form2_midp_string_pane

0xb6e5,	// (0x00064816) form2_midp_text_pane_ParamLimits

0xb6e5,	// (0x00064816) form2_midp_text_pane

0x509c,	// (0x0005e1cd) form2_midp_time_pane

0x50ac,	// (0x0005e1dd) input_focus_pane_cp51_ParamLimits

0x50ac,	// (0x0005e1dd) input_focus_pane_cp51

0x50c4,	// (0x0005e1f5) form2_midp_label_pane_t1_ParamLimits

0x50c4,	// (0x0005e1f5) form2_midp_label_pane_t1

0xb708,	// (0x00064839) form2_mdip_text_pane_t1_ParamLimits

0xb708,	// (0x00064839) form2_mdip_text_pane_t1

0xe32a,	// (0x0006745b) form2_midp_time_pane_t1

0x5112,	// (0x0005e243) form2_midp_gauge_slider_pane_t1

0xcaf9,	// (0x00065c2a) form2_midp_gauge_slider_pane_t2

0xcb0b,	// (0x00065c3c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae0,	// (0x00068c11) form2_midp_gauge_slider_pane_t

0x5148,	// (0x0005e279) form2_midp_slider_pane

0x5154,	// (0x0005e285) form2_midp_gauge_wait_pane_t1

0x5162,	// (0x0005e293) form2_midp_wait_pane_ParamLimits

0x5162,	// (0x0005e293) form2_midp_wait_pane

0x2c62,	// (0x0005bd93) list_single_2graphic_pane_cp4_ParamLimits

0x2c62,	// (0x0005bd93) list_single_2graphic_pane_cp4

0xc439,	// (0x0006556a) list_single_midp_graphic_pane_cp_ParamLimits

0xc439,	// (0x0006556a) list_single_midp_graphic_pane_cp

0x88db,	// (0x00061a0c) list_highlight_pane_cp20

0x51a6,	// (0x0005e2d7) list_single_2graphic_pane_g1_cp4

0x473f,	// (0x0005d870) list_single_2graphic_pane_g2_cp4

0x51ae,	// (0x0005e2df) list_single_2graphic_pane_t1_cp4

0x8929,	// (0x00061a5a) list_highlight_pane_cp21

0x51bd,	// (0x0005e2ee) list_single_midp_graphic_pane_g4_cp

0x51cc,	// (0x0005e2fd) list_single_midp_graphic_pane_t1_cp

0xcb1d,	// (0x00065c4e) form2_mdip_string_pane_t1_ParamLimits

0xcb1d,	// (0x00065c4e) form2_mdip_string_pane_t1

0x88db,	// (0x00061a0c) bg_wml_button_pane_cp2

0x88d1,	// (0x00061a02) form2_midp_image_pane_g1

0xefbf,	// (0x000680f0) list_double_large_graphic_pane_g5_ParamLimits

0xefbf,	// (0x000680f0) list_double_large_graphic_pane_g5

0xab59,	// (0x00063c8a) midp_form_pane_ParamLimits

0x8929,	// (0x00061a5a) main_apps_wheel_pane_ParamLimits

0xb1a9,	// (0x000642da) popup_preview_window_ParamLimits

0xb1a9,	// (0x000642da) popup_preview_window

0x06dd,	// (0x0005980e) popup_touch_info_window_ParamLimits

0x06dd,	// (0x0005980e) popup_touch_info_window

0x06ff,	// (0x00059830) popup_touch_menu_window_ParamLimits

0x06ff,	// (0x00059830) popup_touch_menu_window

0x88c7,	// (0x000619f8) bg_popup_sub_pane_cp6

0x527d,	// (0x0005e3ae) list_touch_menu_pane

0x5285,	// (0x0005e3b6) list_single_touch_menu_pane_ParamLimits

0x5285,	// (0x0005e3b6) list_single_touch_menu_pane

0x529d,	// (0x0005e3ce) list_single_touch_menu_pane_t1

0x8929,	// (0x00061a5a) bg_popup_sub_pane_cp7_ParamLimits

0x8929,	// (0x00061a5a) bg_popup_sub_pane_cp7

0x52ab,	// (0x0005e3dc) heading_sub_pane

0x52b3,	// (0x0005e3e4) list_touch_info_pane_ParamLimits

0x52b3,	// (0x0005e3e4) list_touch_info_pane

0x52c2,	// (0x0005e3f3) list_single_touch_info_pane_ParamLimits

0x52c2,	// (0x0005e3f3) list_single_touch_info_pane

0x52d4,	// (0x0005e405) list_single_touch_info_pane_t1

0x52e2,	// (0x0005e413) list_single_touch_info_pane_t2

0x0001,

0xfaee,	// (0x00068c1f) list_single_touch_info_pane_t

0x22a6,	// (0x0005b3d7) bg_popup_heading_pane_cp

0x52f0,	// (0x0005e421) heading_sub_pane_t1

0x2ba9,	// (0x0005bcda) bg_popup_preview_window_pane_cp_ParamLimits

0x2ba9,	// (0x0005bcda) bg_popup_preview_window_pane_cp

0x52ab,	// (0x0005e3dc) heading_preview_pane

0x52b3,	// (0x0005e3e4) list_preview_pane_ParamLimits

0x52b3,	// (0x0005e3e4) list_preview_pane

0x52fe,	// (0x0005e42f) popup_preview_window_g1

0x52c2,	// (0x0005e3f3) list_single_preview_pane_ParamLimits

0x52c2,	// (0x0005e3f3) list_single_preview_pane

0x5306,	// (0x0005e437) list_single_preview_pane_g1

0x530e,	// (0x0005e43f) list_single_preview_pane_t1

0x52d4,	// (0x0005e405) list_single_preview_pane_t2

0x0001,

0xfaf3,	// (0x00068c24) list_single_preview_pane_t

0x531c,	// (0x0005e44d) bg_popup_heading_pane_cp2_ParamLimits

0x531c,	// (0x0005e44d) bg_popup_heading_pane_cp2

0x5332,	// (0x0005e463) heading_preview_pane_g1

0x533a,	// (0x0005e46b) heading_preview_pane_t1_ParamLimits

0x533a,	// (0x0005e46b) heading_preview_pane_t1

0x897c,	// (0x00061aad) soft_indicator_pane_t1_ParamLimits

0x8eec,	// (0x0006201d) scroll_pane_ParamLimits

0xdcd7,	// (0x00066e08) scroll_sc2_left_pane

0xdce0,	// (0x00066e11) scroll_sc2_right_pane

0xdcff,	// (0x00066e30) scroll_bg_pane_g1_ParamLimits

0xdd14,	// (0x00066e45) scroll_bg_pane_g2_ParamLimits

0xdd2c,	// (0x00066e5d) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x000687f4) scroll_bg_pane_g_ParamLimits

0xdcff,	// (0x00066e30) scroll_handle_pane_g1_ParamLimits

0xdd4e,	// (0x00066e7f) scroll_handle_pane_g2_ParamLimits

0xdd2c,	// (0x00066e5d) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x000687fb) scroll_handle_pane_g_ParamLimits

0x013b,	// (0x0005926c) popup_choice_list_window_ParamLimits

0x013b,	// (0x0005926c) popup_choice_list_window

0x2a4f,	// (0x0005bb80) choice_list_pane

0x2ae9,	// (0x0005bc1a) cell_toolbar_pane_t1

0x2b11,	// (0x0005bc42) toolbar_button_pane_ParamLimits

0x3ddc,	// (0x0005cf0d) ai_gene_pane_1_t2_ParamLimits

0x3ddc,	// (0x0005cf0d) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x00068a1e) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x00068a1e) ai_gene_pane_1_t

0x5357,	// (0x0005e488) scroll_sc2_left_pane_g1

0x5357,	// (0x0005e488) scroll_sc2_right_pane_g1

0x25cd,	// (0x0005b6fe) bg_popup_sub_pane_cp10

0x5361,	// (0x0005e492) list_choice_list_pane

0x537a,	// (0x0005e4ab) list_single_choice_list_pane_ParamLimits

0x537a,	// (0x0005e4ab) list_single_choice_list_pane

0x5392,	// (0x0005e4c3) list_single_choice_list_pane_g1

0x90da,	// (0x0006220b) list_single_choice_list_pane_t1_ParamLimits

0x90da,	// (0x0006220b) list_single_choice_list_pane_t1

0x539a,	// (0x0005e4cb) choice_list_pane_g1

0x53a2,	// (0x0005e4d3) choice_list_pane_t1

0x88c7,	// (0x000619f8) input_focus_pane_cp11

0xbfcd,	// (0x000650fe) title_pane_stacon_g2_ParamLimits

0xbfcd,	// (0x000650fe) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x000687da) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x000687da) title_pane_stacon_g

0x22a6,	// (0x0005b3d7) cursor_press_pane

0xae20,	// (0x00063f51) popup_fep_hwr_window_ParamLimits

0xae20,	// (0x00063f51) popup_fep_hwr_window

0x027f,	// (0x000593b0) popup_fep_vkb_window_ParamLimits

0x027f,	// (0x000593b0) popup_fep_vkb_window

0x53b0,	// (0x0005e4e1) cursor_press_pane_g1

0x0002,

0xfb1c,	// (0x00068c4d) fep_vkb_side_pane_g_ParamLimits

0x0d25,	// (0x00059e56) fep_hwr_candidate_pane_ParamLimits

0x0d25,	// (0x00059e56) fep_hwr_candidate_pane

0x0d4f,	// (0x00059e80) fep_hwr_side_pane_ParamLimits

0x0d4f,	// (0x00059e80) fep_hwr_side_pane

0x0d71,	// (0x00059ea2) fep_hwr_top_pane_ParamLimits

0x0d71,	// (0x00059ea2) fep_hwr_top_pane

0x0d89,	// (0x00059eba) fep_hwr_write_pane_ParamLimits

0x0d89,	// (0x00059eba) fep_hwr_write_pane

0xfb1c,	// (0x00068c4d) fep_vkb_side_pane_g

0x53b8,	// (0x0005e4e9) fep_hwr_top_pane_g1

0x53ca,	// (0x0005e4fb) fep_hwr_top_pane_g2

0x0dc3,	// (0x00059ef4) fep_hwr_top_pane_g3

0x0002,

0xfaf8,	// (0x00068c29) fep_hwr_top_pane_g

0x0dd8,	// (0x00059f09) fep_hwr_top_text_pane

0xde48,	// (0x00066f79) fep_hwr_top_text_pane_g1

0x5400,	// (0x0005e531) fep_hwr_top_text_pane_t1

0x0ee2,	// (0x0005a013) fep_hwr_candidate_pane_g1

0x564b,	// (0x0005e77c) fep_vkb_keypad_pane_g3_ParamLimits

0x564b,	// (0x0005e77c) fep_vkb_keypad_pane_g3

0x5677,	// (0x0005e7a8) fep_vkb_keypad_pane_g4_ParamLimits

0x5677,	// (0x0005e7a8) fep_vkb_keypad_pane_g4

0x56ee,	// (0x0005e81f) fep_vkb_bottom_pane_g2_ParamLimits

0x56ee,	// (0x0005e81f) fep_vkb_bottom_pane_g2

0x0001,

0xfb23,	// (0x00068c54) fep_vkb_bottom_pane_g_ParamLimits

0xfb23,	// (0x00068c54) fep_vkb_bottom_pane_g

0x5357,	// (0x0005e488) cell_vkb_side_pane_g2

0x0001,

0xfb2d,	// (0x00068c5e) cell_vkb_side_pane_g

0x5779,	// (0x0005e8aa) cell_vkb_side_pane_t1

0x5787,	// (0x0005e8b8) cell_vkb_side_pane_t1_copy1

0x5357,	// (0x0005e488) bg_fep_vkb_candidate_pane_g2

0x58cb,	// (0x0005e9fc) cell_vkb_candidate_pane_ParamLimits

0x540e,	// (0x0005e53f) aid_size_cell_vkb_ParamLimits

0x540e,	// (0x0005e53f) aid_size_cell_vkb

0x58cb,	// (0x0005e9fc) cell_vkb_candidate_pane

0x0f09,	// (0x0005a03a) bg_popup_fep_shadow_pane_g1

0xcbb3,	// (0x00065ce4) fep_vkb_bottom_pane_ParamLimits

0xcbb3,	// (0x00065ce4) fep_vkb_bottom_pane

0x54dd,	// (0x0005e60e) fep_vkb_candidate_pane_ParamLimits

0x54dd,	// (0x0005e60e) fep_vkb_candidate_pane

0xcbdf,	// (0x00065d10) fep_vkb_keypad_pane_ParamLimits

0xcbdf,	// (0x00065d10) fep_vkb_keypad_pane

0xcc06,	// (0x00065d37) fep_vkb_side_pane_ParamLimits

0xcc06,	// (0x00065d37) fep_vkb_side_pane

0xcc42,	// (0x00065d73) fep_vkb_top_pane_ParamLimits

0xcc42,	// (0x00065d73) fep_vkb_top_pane

0x55a4,	// (0x0005e6d5) fep_vkb_top_pane_g1_ParamLimits

0x55a4,	// (0x0005e6d5) fep_vkb_top_pane_g1

0x55b3,	// (0x0005e6e4) fep_vkb_top_pane_g2_ParamLimits

0x55b3,	// (0x0005e6e4) fep_vkb_top_pane_g2

0x55c2,	// (0x0005e6f3) fep_vkb_top_pane_g3_ParamLimits

0x55c2,	// (0x0005e6f3) fep_vkb_top_pane_g3

0x0003,

0xfb13,	// (0x00068c44) fep_vkb_top_pane_g_ParamLimits

0xfb13,	// (0x00068c44) fep_vkb_top_pane_g

0x55e0,	// (0x0005e711) fep_vkb_top_text_pane_ParamLimits

0x55e0,	// (0x0005e711) fep_vkb_top_text_pane

0xcc7e,	// (0x00065daf) fep_vkb_side_pane_g1_ParamLimits

0xcc7e,	// (0x00065daf) fep_vkb_side_pane_g1

0x563a,	// (0x0005e76b) grid_vkb_side_pane_ParamLimits

0x563a,	// (0x0005e76b) grid_vkb_side_pane

0x0f11,	// (0x0005a042) bg_popup_fep_shadow_pane_g2

0x0f1a,	// (0x0005a04b) bg_popup_fep_shadow_pane_g3

0x0f22,	// (0x0005a053) bg_popup_fep_shadow_pane_g4

0x0f2b,	// (0x0005a05c) bg_popup_fep_shadow_pane_g5

0x0f35,	// (0x0005a066) bg_popup_fep_shadow_pane_g6

0x0f3d,	// (0x0005a06e) bg_popup_fep_shadow_pane_g7

0x8fe9,	// (0x0006211a) bg_popup_fep_shadow_pane_g8

0x5699,	// (0x0005e7ca) grid_vkb_keypad_number_pane_ParamLimits

0x5699,	// (0x0005e7ca) grid_vkb_keypad_number_pane

0x56ad,	// (0x0005e7de) grid_vkb_keypad_pane_ParamLimits

0x56ad,	// (0x0005e7de) grid_vkb_keypad_pane

0x56d3,	// (0x0005e804) fep_vkb_bottom_pane_g1_ParamLimits

0x56d3,	// (0x0005e804) fep_vkb_bottom_pane_g1

0x56fc,	// (0x0005e82d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x56fc,	// (0x0005e82d) grid_vkb_keypad_bottom_left_pane

0x5711,	// (0x0005e842) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5711,	// (0x0005e842) grid_vkb_keypad_bottom_right_pane

0x5726,	// (0x0005e857) fep_vkb_top_text_pane_g1

0xccc5,	// (0x00065df6) fep_vkb_top_text_pane_t1

0xccd7,	// (0x00065e08) cell_vkb_side_pane_ParamLimits

0xccd7,	// (0x00065e08) cell_vkb_side_pane

0x5357,	// (0x0005e488) cell_vkb_side_pane_g1

0x5795,	// (0x0005e8c6) cell_vkb_keypad_pane_ParamLimits

0x5795,	// (0x0005e8c6) cell_vkb_keypad_pane

0x5822,	// (0x0005e953) cell_vkb_keypad_pane_g1

0x0008,

0xfb40,	// (0x00068c71) bg_popup_fep_shadow_pane_g

0x0f4f,	// (0x0005a080) cell_hwr_side_pane_g1

0x0f4f,	// (0x0005a080) cell_hwr_side_pane_g2

0x582c,	// (0x0005e95d) cell_vkb_keypad_pane_t1

0xcced,	// (0x00065e1e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcced,	// (0x00065e1e) cell_vkb_keypad_bottom_left_pane

0xcd02,	// (0x00065e33) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcd02,	// (0x00065e33) cell_vkb_keypad_bottom_right_pane

0x5357,	// (0x0005e488) cell_vkb_keypad_bottom_left_pane_g1

0x5357,	// (0x0005e488) cell_vkb_keypad_bottom_right_pane_g1

0x5890,	// (0x0005e9c1) cell_vkb_keypad_number_pane_ParamLimits

0x5890,	// (0x0005e9c1) cell_vkb_keypad_number_pane

0x58af,	// (0x0005e9e0) cell_vkb_keypad_number_pane_g1

0x58b9,	// (0x0005e9ea) cell_vkb_keypad_number_pane_g2

0x58c2,	// (0x0005e9f3) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb32,	// (0x00068c63) cell_vkb_keypad_number_pane_g

0x582c,	// (0x0005e95d) cell_vkb_keypad_number_pane_t1

0x58ec,	// (0x0005ea1d) fep_vkb_candidate_pane_g1

0x0001,

0xfb53,	// (0x00068c84) cell_hwr_side_pane_g

0x5905,	// (0x0005ea36) cell_hwr_side_pane_t1

0x0f59,	// (0x0005a08a) cell_hwr_side_pane_t1_copy1

0x0f67,	// (0x0005a098) cell_hwr_candidate_pane_g1

0x0f96,	// (0x0005a0c7) cell_hwr_candidate_pane_t1

0x5357,	// (0x0005e488) cell_vkb_candidate_pane_g2

0x5949,	// (0x0005ea7a) cell_vkb_candidate_pane_t1

0x0cec,	// (0x00059e1d) bg_popup_fep_shadow_pane_ParamLimits

0x0cec,	// (0x00059e1d) bg_popup_fep_shadow_pane

0x0da3,	// (0x00059ed4) bg_fep_hwr_top_pane_g4

0x53dc,	// (0x0005e50d) bg_hwr_side_pane_g1_ParamLimits

0x53dc,	// (0x0005e50d) bg_hwr_side_pane_g1

0xb73c,	// (0x0006486d) cell_hwr_side_pane_ParamLimits

0xb73c,	// (0x0006486d) cell_hwr_side_pane

0x0e53,	// (0x00059f84) fep_hwr_write_pane_g1_ParamLimits

0x0e53,	// (0x00059f84) fep_hwr_write_pane_g1

0x0e60,	// (0x00059f91) fep_hwr_write_pane_g2_ParamLimits

0x0e60,	// (0x00059f91) fep_hwr_write_pane_g2

0x0e6d,	// (0x00059f9e) fep_hwr_write_pane_g3_ParamLimits

0x0e6d,	// (0x00059f9e) fep_hwr_write_pane_g3

0xb75c,	// (0x0006488d) fep_hwr_write_pane_g4_ParamLimits

0xb75c,	// (0x0006488d) fep_hwr_write_pane_g4

0x0005,

0xfaff,	// (0x00068c30) fep_hwr_write_pane_g_ParamLimits

0xfaff,	// (0x00068c30) fep_hwr_write_pane_g

0x0da3,	// (0x00059ed4) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0da3,	// (0x00059ed4) bg_fep_hwr_candidate_pane_g2

0x0e90,	// (0x00059fc1) cell_hwr_candidate_pane_ParamLimits

0x0e90,	// (0x00059fc1) cell_hwr_candidate_pane

0x0ee2,	// (0x0005a013) fep_hwr_candidate_pane_g1_ParamLimits

0x543c,	// (0x0005e56d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x543c,	// (0x0005e56d) bg_popup_fep_shadow_pane_cp2

0x55d2,	// (0x0005e703) fep_vkb_top_pane_g4_ParamLimits

0x55d2,	// (0x0005e703) fep_vkb_top_pane_g4

0x5618,	// (0x0005e749) fep_vkb_side_pane_g2_ParamLimits

0x5618,	// (0x0005e749) fep_vkb_side_pane_g2

0xa5a1,	// (0x000636d2) list_setting_pane_t4_ParamLimits

0xa5a1,	// (0x000636d2) list_setting_pane_t4

0xa63d,	// (0x0006376e) list_setting_number_pane_t5_ParamLimits

0xa63d,	// (0x0006376e) list_setting_number_pane_t5

0xde7f,	// (0x00066fb0) list_double_heading_pane_cp2_ParamLimits

0xde7f,	// (0x00066fb0) list_double_heading_pane_cp2

0x5957,	// (0x0005ea88) list_double_heading_pane_g1_cp2_ParamLimits

0x5957,	// (0x0005ea88) list_double_heading_pane_g1_cp2

0x5963,	// (0x0005ea94) list_double_heading_pane_g2_cp2_ParamLimits

0x5963,	// (0x0005ea94) list_double_heading_pane_g2_cp2

0x5977,	// (0x0005eaa8) list_double_heading_pane_t1_cp2_ParamLimits

0x5977,	// (0x0005eaa8) list_double_heading_pane_t1_cp2

0x598d,	// (0x0005eabe) list_double_heading_pane_t2_cp2_ParamLimits

0x598d,	// (0x0005eabe) list_double_heading_pane_t2_cp2

0x88bf,	// (0x000619f0) aid_value_unit2

0xef22,	// (0x00068053) popup_preview_fixed_window

0x8a6a,	// (0x00061b9b) bg_popup_preview_window_pane_cp02

0x599f,	// (0x0005ead0) list_preview_fixed_pane

0x59e5,	// (0x0005eb16) list_empty_pane_fp_ParamLimits

0x59e5,	// (0x0005eb16) list_empty_pane_fp

0x59e5,	// (0x0005eb16) list_single_cale_day_pane_fp_ParamLimits

0x59e5,	// (0x0005eb16) list_single_cale_day_pane_fp

0x59e5,	// (0x0005eb16) list_single_graphic_heading_pane_fp_ParamLimits

0x59e5,	// (0x0005eb16) list_single_graphic_heading_pane_fp

0x59e5,	// (0x0005eb16) list_single_graphic_pane_fp_ParamLimits

0x59e5,	// (0x0005eb16) list_single_graphic_pane_fp

0x59e5,	// (0x0005eb16) list_single_heading_pane_fp_ParamLimits

0x59e5,	// (0x0005eb16) list_single_heading_pane_fp

0x59e5,	// (0x0005eb16) list_single_pane_fp_ParamLimits

0x59e5,	// (0x0005eb16) list_single_pane_fp

0x59fe,	// (0x0005eb2f) list_single_pane_fp_g1_ParamLimits

0x59fe,	// (0x0005eb2f) list_single_pane_fp_g1

0x39fc,	// (0x0005cb2d) list_single_pane_fp_g2_ParamLimits

0x39fc,	// (0x0005cb2d) list_single_pane_fp_g2

0x3a08,	// (0x0005cb39) list_single_pane_fp_g3_ParamLimits

0x3a08,	// (0x0005cb39) list_single_pane_fp_g3

0x5a0a,	// (0x0005eb3b) list_single_pane_fp_g4_ParamLimits

0x5a0a,	// (0x0005eb3b) list_single_pane_fp_g4

0x0003,

0xfb66,	// (0x00068c97) list_single_pane_fp_g_ParamLimits

0xfb66,	// (0x00068c97) list_single_pane_fp_g

0xe34a,	// (0x0006747b) list_single_pane_fp_t1_ParamLimits

0xe34a,	// (0x0006747b) list_single_pane_fp_t1

0xe361,	// (0x00067492) list_single_graphic_pane_fp_g1_ParamLimits

0xe361,	// (0x00067492) list_single_graphic_pane_fp_g1

0x59fe,	// (0x0005eb2f) list_single_graphic_pane_fp_g2_ParamLimits

0x59fe,	// (0x0005eb2f) list_single_graphic_pane_fp_g2

0x39fc,	// (0x0005cb2d) list_single_graphic_pane_fp_g3_ParamLimits

0x39fc,	// (0x0005cb2d) list_single_graphic_pane_fp_g3

0x3a08,	// (0x0005cb39) list_single_graphic_pane_fp_g4_ParamLimits

0x3a08,	// (0x0005cb39) list_single_graphic_pane_fp_g4

0x5a0a,	// (0x0005eb3b) list_single_graphic_pane_fp_g5_ParamLimits

0x5a0a,	// (0x0005eb3b) list_single_graphic_pane_fp_g5

0x0004,

0xfb6f,	// (0x00068ca0) list_single_graphic_pane_fp_g_ParamLimits

0xfb6f,	// (0x00068ca0) list_single_graphic_pane_fp_g

0xe36d,	// (0x0006749e) list_single_graphic_pane_fp_t1_ParamLimits

0xe36d,	// (0x0006749e) list_single_graphic_pane_fp_t1

0xe361,	// (0x00067492) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe361,	// (0x00067492) list_single_graphic_heading_pane_fp_g1

0x59fe,	// (0x0005eb2f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x59fe,	// (0x0005eb2f) list_single_graphic_heading_pane_fp_g2

0x39fc,	// (0x0005cb2d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x39fc,	// (0x0005cb2d) list_single_graphic_heading_pane_fp_g3

0x3a08,	// (0x0005cb39) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3a08,	// (0x0005cb39) list_single_graphic_heading_pane_fp_g4

0x5a0a,	// (0x0005eb3b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5a0a,	// (0x0005eb3b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6f,	// (0x00068ca0) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6f,	// (0x00068ca0) list_single_graphic_heading_pane_fp_g

0xe383,	// (0x000674b4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe383,	// (0x000674b4) list_single_graphic_heading_pane_fp_t1

0xe399,	// (0x000674ca) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe399,	// (0x000674ca) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7a,	// (0x00068cab) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7a,	// (0x00068cab) list_single_graphic_heading_pane_fp_t

0xe3ab,	// (0x000674dc) list_single_cale_day_pane_fp_g1_ParamLimits

0xe3ab,	// (0x000674dc) list_single_cale_day_pane_fp_g1

0x5a16,	// (0x0005eb47) list_single_cale_day_pane_fp_g2_ParamLimits

0x5a16,	// (0x0005eb47) list_single_cale_day_pane_fp_g2

0x3a1c,	// (0x0005cb4d) list_single_cale_day_pane_fp_g3_ParamLimits

0x3a1c,	// (0x0005cb4d) list_single_cale_day_pane_fp_g3

0x3a44,	// (0x0005cb75) list_single_cale_day_pane_fp_g4_ParamLimits

0x3a44,	// (0x0005cb75) list_single_cale_day_pane_fp_g4

0x3a68,	// (0x0005cb99) list_single_cale_day_pane_fp_g5_ParamLimits

0x3a68,	// (0x0005cb99) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7f,	// (0x00068cb0) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7f,	// (0x00068cb0) list_single_cale_day_pane_fp_g

0xe3e3,	// (0x00067514) list_single_cale_day_pane_fp_t1_ParamLimits

0xe3e3,	// (0x00067514) list_single_cale_day_pane_fp_t1

0xe409,	// (0x0006753a) list_single_cale_day_pane_fp_t2_ParamLimits

0xe409,	// (0x0006753a) list_single_cale_day_pane_fp_t2

0xe422,	// (0x00067553) list_single_cale_day_pane_fp_t3_ParamLimits

0xe422,	// (0x00067553) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8a,	// (0x00068cbb) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8a,	// (0x00068cbb) list_single_cale_day_pane_fp_t

0x59fe,	// (0x0005eb2f) list_empty_pane_fp_g1_ParamLimits

0x59fe,	// (0x0005eb2f) list_empty_pane_fp_g1

0xe43b,	// (0x0006756c) list_empty_pane_fp_t1

0xe449,	// (0x0006757a) list_empty_pane_fp_t2

0x0001,

0xfb91,	// (0x00068cc2) list_empty_pane_fp_t

0x59fe,	// (0x0005eb2f) list_single_heading_pane_fp_g1_ParamLimits

0x59fe,	// (0x0005eb2f) list_single_heading_pane_fp_g1

0x39fc,	// (0x0005cb2d) list_single_heading_pane_fp_g2_ParamLimits

0x39fc,	// (0x0005cb2d) list_single_heading_pane_fp_g2

0x3a08,	// (0x0005cb39) list_single_heading_pane_fp_g3_ParamLimits

0x3a08,	// (0x0005cb39) list_single_heading_pane_fp_g3

0x0002,

0xfb96,	// (0x00068cc7) list_single_heading_pane_fp_g_ParamLimits

0xfb96,	// (0x00068cc7) list_single_heading_pane_fp_g

0xe457,	// (0x00067588) list_single_heading_pane_fp_t1_ParamLimits

0xe457,	// (0x00067588) list_single_heading_pane_fp_t1

0xe469,	// (0x0006759a) list_single_heading_pane_fp_t2_ParamLimits

0xe469,	// (0x0006759a) list_single_heading_pane_fp_t2

0x0001,

0xfb9d,	// (0x00068cce) list_single_heading_pane_fp_t_ParamLimits

0xfb9d,	// (0x00068cce) list_single_heading_pane_fp_t

0x90ef,	// (0x00062220) aid_size_cell_fast

0x8a3f,	// (0x00061b70) soft_indicator_pane_cp1_t1

0x912c,	// (0x0006225d) cell_app_pane_cp2_ParamLimits

0x912c,	// (0x0006225d) cell_app_pane_cp2

0x0d0e,	// (0x00059e3f) fep_hwr_candidate_drop_down_list_pane

0x0efc,	// (0x0005a02d) fep_hwr_candidate_pane_g3_ParamLimits

0x0efc,	// (0x0005a02d) fep_hwr_candidate_pane_g3

0xe33d,	// (0x0006746e) fep_hwr_candidate_pane_g4_ParamLimits

0xe33d,	// (0x0006746e) fep_hwr_candidate_pane_g4

0x0002,

0xfb0c,	// (0x00068c3d) fep_hwr_candidate_pane_g_ParamLimits

0xfb0c,	// (0x00068c3d) fep_hwr_candidate_pane_g

0x54cc,	// (0x0005e5fd) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x54cc,	// (0x0005e5fd) fep_vkb_candidate_drop_down_list_pane

0x58f4,	// (0x0005ea25) fep_vkb_candidate_pane_g3

0x58fc,	// (0x0005ea2d) fep_vkb_candidate_pane_g4

0x0002,

0xfb39,	// (0x00068c6a) fep_vkb_candidate_pane_g

0x0f67,	// (0x0005a098) cell_hwr_candidate_pane_g1_ParamLimits

0x0f75,	// (0x0005a0a6) cell_hwr_candidate_pane_g3_ParamLimits

0x0f75,	// (0x0005a0a6) cell_hwr_candidate_pane_g3

0x72ba,	// (0x000603eb) cell_hwr_candidate_pane_g4_ParamLimits

0x72ba,	// (0x000603eb) cell_hwr_candidate_pane_g4

0x0002,

0xfb58,	// (0x00068c89) cell_hwr_candidate_pane_g_ParamLimits

0xfb58,	// (0x00068c89) cell_hwr_candidate_pane_g

0x5913,	// (0x0005ea44) cell_vkb_candidate_pane_g3_ParamLimits

0x5913,	// (0x0005ea44) cell_vkb_candidate_pane_g3

0x592e,	// (0x0005ea5f) cell_vkb_candidate_pane_g4_ParamLimits

0x592e,	// (0x0005ea5f) cell_vkb_candidate_pane_g4

0x5a22,	// (0x0005eb53) cell_app_pane_cp2_g1_ParamLimits

0x5a22,	// (0x0005eb53) cell_app_pane_cp2_g1

0x5a40,	// (0x0005eb71) cell_app_pane_cp2_g2_ParamLimits

0x5a40,	// (0x0005eb71) cell_app_pane_cp2_g2

0x0001,

0xfba2,	// (0x00068cd3) cell_app_pane_cp2_g_ParamLimits

0xfba2,	// (0x00068cd3) cell_app_pane_cp2_g

0x5a4c,	// (0x0005eb7d) cell_app_pane_cp2_t1_ParamLimits

0x5a4c,	// (0x0005eb7d) cell_app_pane_cp2_t1

0x8f79,	// (0x000620aa) grid_highlight_pane_cp1_ParamLimits

0x8f79,	// (0x000620aa) grid_highlight_pane_cp1

0x0fb4,	// (0x0005a0e5) cell_hwr_candidate_pane_cp1_ParamLimits

0x0fb4,	// (0x0005a0e5) cell_hwr_candidate_pane_cp1

0x0f67,	// (0x0005a098) fep_hwr_candidate_drop_down_list_pane_g1

0x0fd8,	// (0x0005a109) fep_hwr_candidate_drop_down_list_pane_g2

0x0fe5,	// (0x0005a116) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba7,	// (0x00068cd8) fep_hwr_candidate_drop_down_list_pane_g

0x0ff2,	// (0x0005a123) fep_hwr_candidate_drop_down_list_scroll_pane

0x0ffb,	// (0x0005a12c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0ffb,	// (0x0005a12c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1008,	// (0x0005a139) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1008,	// (0x0005a139) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1015,	// (0x0005a146) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1015,	// (0x0005a146) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1022,	// (0x0005a153) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1022,	// (0x0005a153) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x103d,	// (0x0005a16e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x103d,	// (0x0005a16e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1058,	// (0x0005a189) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1058,	// (0x0005a189) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1073,	// (0x0005a1a4) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1073,	// (0x0005a1a4) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x108e,	// (0x0005a1bf) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x108e,	// (0x0005a1bf) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbae,	// (0x00068cdf) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbae,	// (0x00068cdf) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5a5e,	// (0x0005eb8f) cell_vkb_candidate_pane_cp1_ParamLimits

0x5a5e,	// (0x0005eb8f) cell_vkb_candidate_pane_cp1

0x55d2,	// (0x0005e703) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x55d2,	// (0x0005e703) fep_vkb_candidate_drop_down_list_pane_g1

0x5a84,	// (0x0005ebb5) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5a84,	// (0x0005ebb5) fep_vkb_candidate_drop_down_list_pane_g2

0x5a91,	// (0x0005ebc2) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5a91,	// (0x0005ebc2) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbf,	// (0x00068cf0) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbf,	// (0x00068cf0) fep_vkb_candidate_drop_down_list_pane_g

0x5a9e,	// (0x0005ebcf) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5a9e,	// (0x0005ebcf) fep_vkb_candidate_drop_down_list_scroll_pane

0x5aab,	// (0x0005ebdc) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5aab,	// (0x0005ebdc) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5ab8,	// (0x0005ebe9) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5ab8,	// (0x0005ebe9) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5ac4,	// (0x0005ebf5) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5ac4,	// (0x0005ebf5) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5ad0,	// (0x0005ec01) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5ad0,	// (0x0005ec01) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5af1,	// (0x0005ec22) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5af1,	// (0x0005ec22) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5b12,	// (0x0005ec43) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5b12,	// (0x0005ec43) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5b33,	// (0x0005ec64) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5b33,	// (0x0005ec64) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5b54,	// (0x0005ec85) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5b54,	// (0x0005ec85) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x00068cf7) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x00068cf7) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9e0b,	// (0x00062f3c) title_pane_g1_ParamLimits

0x9e1e,	// (0x00062f4f) title_pane_g2_ParamLimits

0xf529,	// (0x0006865a) title_pane_g_ParamLimits

0xde38,	// (0x00066f69) aid_call2_pane

0xde40,	// (0x00066f71) aid_call_pane

0xde48,	// (0x00066f79) popup_clock_analogue_window_g1

0xde48,	// (0x00066f79) popup_clock_analogue_window_g2

0xf218,	// (0x00068349) popup_clock_analogue_window_g3

0xf221,	// (0x00068352) popup_clock_analogue_window_g4

0x88d1,	// (0x00061a02) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x00068809) popup_clock_analogue_window_g

0xf229,	// (0x0006835a) popup_clock_analogue_window_t1

0xf237,	// (0x00068368) clock_digital_number_pane_ParamLimits

0xf237,	// (0x00068368) clock_digital_number_pane

0xf243,	// (0x00068374) clock_digital_number_pane_cp02_ParamLimits

0xf243,	// (0x00068374) clock_digital_number_pane_cp02

0xf24f,	// (0x00068380) clock_digital_number_pane_cp03_ParamLimits

0xf24f,	// (0x00068380) clock_digital_number_pane_cp03

0xf25b,	// (0x0006838c) clock_digital_number_pane_cp04_ParamLimits

0xf25b,	// (0x0006838c) clock_digital_number_pane_cp04

0xf267,	// (0x00068398) clock_digital_separator_pane_ParamLimits

0xf267,	// (0x00068398) clock_digital_separator_pane

0xf273,	// (0x000683a4) popup_clock_digital_window_t1_ParamLimits

0xf273,	// (0x000683a4) popup_clock_digital_window_t1

0x88d1,	// (0x00061a02) clock_digital_number_pane_g1

0x88d1,	// (0x00061a02) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x00068814) clock_digital_number_pane_g

0x88d1,	// (0x00061a02) clock_digital_separator_pane_g1

0x88d1,	// (0x00061a02) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x00068814) clock_digital_separator_pane_g

0xb491,	// (0x000645c2) aid_fill_nsta_ParamLimits

0xc111,	// (0x00065242) indicator_nsta_pane_ParamLimits

0x28e6,	// (0x0005ba17) popup_clock_analogue_window

0x28e6,	// (0x0005ba17) popup_clock_digital_window

0xc9db,	// (0x00065b0c) grid_indicator_nsta_pane_ParamLimits

0x4dac,	// (0x0005dedd) clock_nsta_pane_t2

0x0001,

0xfa8c,	// (0x00068bbd) clock_nsta_pane_t

0xf1e5,	// (0x00068316) aid_size_max_handle

0xa950,	// (0x00063a81) aid_size_min_handle

0x22a6,	// (0x0005b3d7) editor_scroll_pane

0x5b6f,	// (0x0005eca0) ex_editor_pane

0x90b5,	// (0x000621e6) scroll_pane_cp13

0x8f18,	// (0x00062049) scroll_pane_cp14

0xde77,	// (0x00066fa8) scroll_pane_cp36

0xa9dd,	// (0x00063b0e) list_single_graphic_hl_pane_cp2_ParamLimits

0xa9dd,	// (0x00063b0e) list_single_graphic_hl_pane_cp2

0xc868,	// (0x00065999) list_single_graphic_hl_pane_ParamLimits

0xc868,	// (0x00065999) list_single_graphic_hl_pane

0xe47f,	// (0x000675b0) aid_size_min_hl_cp1

0x5b77,	// (0x0005eca8) list_highlight_pane_cp34_ParamLimits

0x5b77,	// (0x0005eca8) list_highlight_pane_cp34

0x5b88,	// (0x0005ecb9) list_single_graphic_hl_pane_g1_ParamLimits

0x5b88,	// (0x0005ecb9) list_single_graphic_hl_pane_g1

0xb771,	// (0x000648a2) list_single_graphic_hl_pane_g2_ParamLimits

0xb771,	// (0x000648a2) list_single_graphic_hl_pane_g2

0xb771,	// (0x000648a2) list_single_graphic_hl_pane_g3_ParamLimits

0xb771,	// (0x000648a2) list_single_graphic_hl_pane_g3

0x21dd,	// (0x0005b30e) list_single_graphic_hl_pane_g4_ParamLimits

0x21dd,	// (0x0005b30e) list_single_graphic_hl_pane_g4

0xcd1d,	// (0x00065e4e) list_single_graphic_hl_pane_g5_ParamLimits

0xcd1d,	// (0x00065e4e) list_single_graphic_hl_pane_g5

0x0004,

0xfbd7,	// (0x00068d08) list_single_graphic_hl_pane_g_ParamLimits

0xfbd7,	// (0x00068d08) list_single_graphic_hl_pane_g

0xb77d,	// (0x000648ae) list_single_graphic_hl_pane_t1_ParamLimits

0xb77d,	// (0x000648ae) list_single_graphic_hl_pane_t1

0x5b95,	// (0x0005ecc6) aid_size_min_hl_cp2

0x5b9e,	// (0x0005eccf) list_highlight_pane_cp34_cp2_ParamLimits

0x5b9e,	// (0x0005eccf) list_highlight_pane_cp34_cp2

0x5b88,	// (0x0005ecb9) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5b88,	// (0x0005ecb9) list_single_graphic_hl_pane_g1_cp2

0x5bab,	// (0x0005ecdc) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5bab,	// (0x0005ecdc) list_single_graphic_hl_pane_g2_cp2

0x5bb7,	// (0x0005ece8) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5bb7,	// (0x0005ece8) list_single_graphic_hl_pane_g3_cp2

0x5bc5,	// (0x0005ecf6) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5bc5,	// (0x0005ecf6) list_single_graphic_hl_pane_g4_cp2

0x5bd1,	// (0x0005ed02) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5bd1,	// (0x0005ed02) list_single_graphic_hl_pane_g5_cp2

0xac51,	// (0x00063d82) control_pane_g4_ParamLimits

0xac51,	// (0x00063d82) control_pane_g4

0x25cd,	// (0x0005b6fe) bg_popup_sub_pane_cp10_ParamLimits

0x5361,	// (0x0005e492) list_choice_list_pane_ParamLimits

0x5370,	// (0x0005e4a1) scroll_pane_cp23

0x8a6a,	// (0x00061b9b) bg_popup_preview_window_pane_cp02_ParamLimits

0x599f,	// (0x0005ead0) list_preview_fixed_pane_ParamLimits

0x59b5,	// (0x0005eae6) list_preview_fixed_pane_cp_ParamLimits

0x59b5,	// (0x0005eae6) list_preview_fixed_pane_cp

0x59c1,	// (0x0005eaf2) popup_preview_fixed_window_g1_ParamLimits

0x59c1,	// (0x0005eaf2) popup_preview_fixed_window_g1

0x59cd,	// (0x0005eafe) popup_preview_fixed_window_g2_ParamLimits

0x59cd,	// (0x0005eafe) popup_preview_fixed_window_g2

0x0002,

0xfb5f,	// (0x00068c90) popup_preview_fixed_window_g_ParamLimits

0xfb5f,	// (0x00068c90) popup_preview_fixed_window_g

0xf14f,	// (0x00068280) aid_navi_side_left_pane_ParamLimits

0xf164,	// (0x00068295) aid_navi_side_right_pane_ParamLimits

0xf17c,	// (0x000682ad) navi_icon_pane_stacon_ParamLimits

0xf190,	// (0x000682c1) navi_navi_pane_stacon_ParamLimits

0xf17c,	// (0x000682ad) navi_text_pane_stacon_ParamLimits

0xee13,	// (0x00067f44) main_text_info_pane

0x5bfb,	// (0x0005ed2c) listscroll_text_info_pane

0x5c03,	// (0x0005ed34) list_text_info_pane_ParamLimits

0x5c03,	// (0x0005ed34) list_text_info_pane

0x5c12,	// (0x0005ed43) scroll_pane_cp24_ParamLimits

0x5c12,	// (0x0005ed43) scroll_pane_cp24

0xcd31,	// (0x00065e62) list_text_info_pane_t1_ParamLimits

0xcd31,	// (0x00065e62) list_text_info_pane_t1

0xad84,	// (0x00063eb5) popup_fast_swap2_window_ParamLimits

0xad84,	// (0x00063eb5) popup_fast_swap2_window

0x5c55,	// (0x0005ed86) aid_size_cell_fast2

0x88c7,	// (0x000619f8) bg_popup_window_pane_cp17

0x5c5f,	// (0x0005ed90) heading_pane_cp2

0x5c67,	// (0x0005ed98) listscroll_fast2_pane

0x5c6f,	// (0x0005eda0) grid_fast2_pane

0x5c79,	// (0x0005edaa) listscroll_fast2_pane_g1

0x5c83,	// (0x0005edb4) listscroll_fast2_pane_g2

0x0001,

0xfbe2,	// (0x00068d13) listscroll_fast2_pane_g

0x90b5,	// (0x000621e6) scroll_pane_cp26

0x5c8d,	// (0x0005edbe) cell_fast2_pane_ParamLimits

0x5c8d,	// (0x0005edbe) cell_fast2_pane

0x5ca4,	// (0x0005edd5) cell_fast2_pane_g1

0x5cad,	// (0x0005edde) cell_fast2_pane_g2

0x5cb6,	// (0x0005ede7) cell_fast2_pane_g3

0x0002,

0xfbe7,	// (0x00068d18) cell_fast2_pane_g

0x8cdf,	// (0x00061e10) grid_highlight_pane_cp9

0x011f,	// (0x00059250) main_eswt_pane_ParamLimits

0x011f,	// (0x00059250) main_eswt_pane

0x5c27,	// (0x0005ed58) list_single_text_info_pane

0x5cbe,	// (0x0005edef) eswt_ctrl_button_pane

0x5cbe,	// (0x0005edef) eswt_ctrl_canvas_pane

0x5cc6,	// (0x0005edf7) eswt_ctrl_combo_pane

0x5cbe,	// (0x0005edef) eswt_ctrl_default_pane

0x5cbe,	// (0x0005edef) eswt_ctrl_label_pane

0x5cce,	// (0x0005edff) eswt_ctrl_wait_pane

0x5cd6,	// (0x0005ee07) eswt_shell_pane

0x88c7,	// (0x000619f8) listscroll_eswt_app_pane

0x5cf6,	// (0x0005ee27) popup_eswt_tasktip_window_ParamLimits

0x5cf6,	// (0x0005ee27) popup_eswt_tasktip_window

0x2ba9,	// (0x0005bcda) bg_popup_window_pane_cp18

0x5d0f,	// (0x0005ee40) eswt_control_pane_g1_ParamLimits

0x5d0f,	// (0x0005ee40) eswt_control_pane_g1

0x5d1c,	// (0x0005ee4d) eswt_control_pane_g2_ParamLimits

0x5d1c,	// (0x0005ee4d) eswt_control_pane_g2

0x5d29,	// (0x0005ee5a) eswt_control_pane_g3_ParamLimits

0x5d29,	// (0x0005ee5a) eswt_control_pane_g3

0x5d36,	// (0x0005ee67) eswt_control_pane_g4_ParamLimits

0x5d36,	// (0x0005ee67) eswt_control_pane_g4

0x0003,

0xfbee,	// (0x00068d1f) eswt_control_pane_g_ParamLimits

0xfbee,	// (0x00068d1f) eswt_control_pane_g

0x8f79,	// (0x000620aa) bg_button_pane_ParamLimits

0x8f79,	// (0x000620aa) bg_button_pane

0x8cf4,	// (0x00061e25) common_borders_pane_copy2_ParamLimits

0x8cf4,	// (0x00061e25) common_borders_pane_copy2

0x5d43,	// (0x0005ee74) control_button_pane_g1_ParamLimits

0x5d43,	// (0x0005ee74) control_button_pane_g1

0x5d4f,	// (0x0005ee80) control_button_pane_g2_ParamLimits

0x5d4f,	// (0x0005ee80) control_button_pane_g2

0x5d5b,	// (0x0005ee8c) control_button_pane_g3_ParamLimits

0x5d5b,	// (0x0005ee8c) control_button_pane_g3

0x0002,

0xfbf7,	// (0x00068d28) control_button_pane_g_ParamLimits

0xfbf7,	// (0x00068d28) control_button_pane_g

0x5d6f,	// (0x0005eea0) control_button_pane_t1

0x5d7d,	// (0x0005eeae) control_button_pane_t2

0x0001,

0xfbfe,	// (0x00068d2f) control_button_pane_t

0x2b1d,	// (0x0005bc4e) bg_button_pane_g1

0x2b2d,	// (0x0005bc5e) bg_button_pane_g2

0x2b25,	// (0x0005bc56) bg_button_pane_g3

0x2b3d,	// (0x0005bc6e) bg_button_pane_g4

0x2b35,	// (0x0005bc66) bg_button_pane_g5

0x2b45,	// (0x0005bc76) bg_button_pane_g6

0x2b4d,	// (0x0005bc7e) bg_button_pane_g7

0x2b5d,	// (0x0005bc8e) bg_button_pane_g8

0x2b55,	// (0x0005bc86) bg_button_pane_g9

0x0008,

0xf841,	// (0x00068972) bg_button_pane_g

0x531c,	// (0x0005e44d) common_borders_pane_ParamLimits

0x531c,	// (0x0005e44d) common_borders_pane

0x5d0f,	// (0x0005ee40) eswt_control_pane_g1_copy1_ParamLimits

0x5d0f,	// (0x0005ee40) eswt_control_pane_g1_copy1

0x5d1c,	// (0x0005ee4d) eswt_control_pane_g2_copy1_ParamLimits

0x5d1c,	// (0x0005ee4d) eswt_control_pane_g2_copy1

0x5d29,	// (0x0005ee5a) eswt_control_pane_g3_copy1_ParamLimits

0x5d29,	// (0x0005ee5a) eswt_control_pane_g3_copy1

0x5d36,	// (0x0005ee67) eswt_control_pane_g4_copy1_ParamLimits

0x5d36,	// (0x0005ee67) eswt_control_pane_g4_copy1

0x5357,	// (0x0005e488) bg_eswt_ctrl_canvas_pane_g1

0x531c,	// (0x0005e44d) common_borders_pane_cp2_ParamLimits

0x531c,	// (0x0005e44d) common_borders_pane_cp2

0x531c,	// (0x0005e44d) common_borders_pane_cp3_ParamLimits

0x531c,	// (0x0005e44d) common_borders_pane_cp3

0x5d8b,	// (0x0005eebc) separator_horizontal_pane

0x5d93,	// (0x0005eec4) separator_vertical_pane

0x5d0f,	// (0x0005ee40) eswt_control_pane_g1_copy2_ParamLimits

0x5d0f,	// (0x0005ee40) eswt_control_pane_g1_copy2

0x5d1c,	// (0x0005ee4d) eswt_control_pane_g2_copy2_ParamLimits

0x5d1c,	// (0x0005ee4d) eswt_control_pane_g2_copy2

0x5d29,	// (0x0005ee5a) eswt_control_pane_g3_copy2_ParamLimits

0x5d29,	// (0x0005ee5a) eswt_control_pane_g3_copy2

0x5d36,	// (0x0005ee67) eswt_control_pane_g4_copy2_ParamLimits

0x5d36,	// (0x0005ee67) eswt_control_pane_g4_copy2

0x88c7,	// (0x000619f8) common_borders_pane_cp4

0x5d9c,	// (0x0005eecd) separator_horizontal_pane_g1

0x5da5,	// (0x0005eed6) separator_horizontal_pane_g2

0x5dae,	// (0x0005eedf) separator_horizontal_pane_g3

0x0002,

0xfc03,	// (0x00068d34) separator_horizontal_pane_g

0x5d0f,	// (0x0005ee40) eswt_control_pane_g1_copy3_ParamLimits

0x5d0f,	// (0x0005ee40) eswt_control_pane_g1_copy3

0x5d1c,	// (0x0005ee4d) eswt_control_pane_g2_copy3_ParamLimits

0x5d1c,	// (0x0005ee4d) eswt_control_pane_g2_copy3

0x5d29,	// (0x0005ee5a) eswt_control_pane_g3_copy3_ParamLimits

0x5d29,	// (0x0005ee5a) eswt_control_pane_g3_copy3

0x5d36,	// (0x0005ee67) eswt_control_pane_g4_copy3_ParamLimits

0x5d36,	// (0x0005ee67) eswt_control_pane_g4_copy3

0x88c7,	// (0x000619f8) common_borders_pane_cp5

0x5db7,	// (0x0005eee8) separator_vertical_pane_g1

0x5dc0,	// (0x0005eef1) separator_vertical_pane_g2

0x5dc9,	// (0x0005eefa) separator_vertical_pane_g3

0x0002,

0xfc0a,	// (0x00068d3b) separator_vertical_pane_g

0x5d0f,	// (0x0005ee40) eswt_control_pane_g1_copy4_ParamLimits

0x5d0f,	// (0x0005ee40) eswt_control_pane_g1_copy4

0x5d1c,	// (0x0005ee4d) eswt_control_pane_g2_copy4_ParamLimits

0x5d1c,	// (0x0005ee4d) eswt_control_pane_g2_copy4

0x5d29,	// (0x0005ee5a) eswt_control_pane_g3_copy4_ParamLimits

0x5d29,	// (0x0005ee5a) eswt_control_pane_g3_copy4

0x5d36,	// (0x0005ee67) eswt_control_pane_g4_copy4_ParamLimits

0x5d36,	// (0x0005ee67) eswt_control_pane_g4_copy4

0xcd53,	// (0x00065e84) eswt_ctrl_combo_button_pane

0xcd5b,	// (0x00065e8c) eswt_ctrl_input_pane

0xcd63,	// (0x00065e94) popup_choice_list_window_cp70

0xcd6b,	// (0x00065e9c) eswt_ctrl_input_pane_t1

0x88c7,	// (0x000619f8) input_focus_pane_cp70

0x531c,	// (0x0005e44d) bg_button_pane_cp70_ParamLimits

0x531c,	// (0x0005e44d) bg_button_pane_cp70

0xcd79,	// (0x00065eaa) eswt_ctrl_combo_button_pane_g1

0x5e00,	// (0x0005ef31) wait_bar_pane_cp70

0x2ba9,	// (0x0005bcda) bg_popup_window_pane_cp70_ParamLimits

0x2ba9,	// (0x0005bcda) bg_popup_window_pane_cp70

0x5e08,	// (0x0005ef39) popup_eswt_tasktip_window_t1

0x5e1e,	// (0x0005ef4f) wait_bar_pane_cp71_ParamLimits

0x5e1e,	// (0x0005ef4f) wait_bar_pane_cp71

0x5e2a,	// (0x0005ef5b) grid_eswt_app_pane

0xdcd7,	// (0x00066e08) scroll_pane_cp70

0xcd81,	// (0x00065eb2) cell_eswt_app_pane_ParamLimits

0xcd81,	// (0x00065eb2) cell_eswt_app_pane

0xcdb3,	// (0x00065ee4) cell_eswt_app_pane_g1_ParamLimits

0xcdb3,	// (0x00065ee4) cell_eswt_app_pane_g1

0xcde2,	// (0x00065f13) cell_eswt_app_pane_g2_ParamLimits

0xcde2,	// (0x00065f13) cell_eswt_app_pane_g2

0x0001,

0xfc11,	// (0x00068d42) cell_eswt_app_pane_g_ParamLimits

0xfc11,	// (0x00068d42) cell_eswt_app_pane_g

0xce0b,	// (0x00065f3c) cell_eswt_app_pane_t1_ParamLimits

0xce0b,	// (0x00065f3c) cell_eswt_app_pane_t1

0x5eef,	// (0x0005f020) grid_highlight_pane_cp70_ParamLimits

0x5eef,	// (0x0005f020) grid_highlight_pane_cp70

0x216c,	// (0x0005b29d) set_content_pane_g1

0xac35,	// (0x00063d66) status_small_volume_pane

0xb793,	// (0x000648c4) status_small_volume_pane_g1

0xb79b,	// (0x000648cc) volume_small2_pane

0xb7a4,	// (0x000648d5) volume_small2_pane_g1

0xb7ad,	// (0x000648de) volume_small2_pane_g2

0xb7b6,	// (0x000648e7) volume_small2_pane_g3

0xb7bf,	// (0x000648f0) volume_small2_pane_g4

0xb7c8,	// (0x000648f9) volume_small2_pane_g5

0xb7d1,	// (0x00064902) volume_small2_pane_g6

0xb7da,	// (0x0006490b) volume_small2_pane_g7

0xb7e3,	// (0x00064914) volume_small2_pane_g8

0xb7ec,	// (0x0006491d) volume_small2_pane_g9

0xb7f5,	// (0x00064926) volume_small2_pane_g10

0x0009,

0xfc16,	// (0x00068d47) volume_small2_pane_g

0x5726,	// (0x0005e857) fep_vkb_top_text_pane_g1_ParamLimits

0xccc5,	// (0x00065df6) fep_vkb_top_text_pane_t1_ParamLimits

0x59d9,	// (0x0005eb0a) popup_preview_fixed_window_g3_ParamLimits

0x59d9,	// (0x0005eb0a) popup_preview_fixed_window_g3

0xb424,	// (0x00064555) popup_toolbar_trans_pane

0xc6a9,	// (0x000657da) aid_height_set_list_ParamLimits

0x4100,	// (0x0005d231) aid_size_parent_ParamLimits

0x25cd,	// (0x0005b6fe) list_highlight_pane_cp2_ParamLimits

0x216c,	// (0x0005b29d) set_content_pane_g1_ParamLimits

0xc87c,	// (0x000659ad) list_single_image_pane_ParamLimits

0xc87c,	// (0x000659ad) list_single_image_pane

0xce3d,	// (0x00065f6e) aid_size_cell_image_ParamLimits

0xce3d,	// (0x00065f6e) aid_size_cell_image

0xce4a,	// (0x00065f7b) grid_single_image_pane_ParamLimits

0xce4a,	// (0x00065f7b) grid_single_image_pane

0x8f87,	// (0x000620b8) list_single_image_pane_g1_ParamLimits

0x8f87,	// (0x000620b8) list_single_image_pane_g1

0x8f93,	// (0x000620c4) list_single_image_pane_g2_ParamLimits

0x8f93,	// (0x000620c4) list_single_image_pane_g2

0x0001,

0xfc2b,	// (0x00068d5c) list_single_image_pane_g_ParamLimits

0xfc2b,	// (0x00068d5c) list_single_image_pane_g

0x5f16,	// (0x0005f047) list_single_image_pane_t1_ParamLimits

0x5f16,	// (0x0005f047) list_single_image_pane_t1

0xce58,	// (0x00065f89) cell_image_list_pane_ParamLimits

0xce58,	// (0x00065f89) cell_image_list_pane

0xce6e,	// (0x00065f9f) cell_image_list_pane_g1

0xce77,	// (0x00065fa8) cell_image_list_pane_g2

0x0001,

0xfc30,	// (0x00068d61) cell_image_list_pane_g

0x5f56,	// (0x0005f087) aid_size_cell_tb_trans_pane

0x8f79,	// (0x000620aa) bg_tb_trans_pane

0x5f68,	// (0x0005f099) grid_tb_trans_pane

0x2b1d,	// (0x0005bc4e) bg_tb_trans_pane_g1

0x2b2d,	// (0x0005bc5e) bg_tb_trans_pane_g2

0x2b25,	// (0x0005bc56) bg_tb_trans_pane_g3

0x2b3d,	// (0x0005bc6e) bg_tb_trans_pane_g4

0x2b35,	// (0x0005bc66) bg_tb_trans_pane_g5

0x2b5d,	// (0x0005bc8e) bg_tb_trans_pane_g6

0x2b55,	// (0x0005bc86) bg_tb_trans_pane_g7

0x2b45,	// (0x0005bc76) bg_tb_trans_pane_g8

0x2b4d,	// (0x0005bc7e) bg_tb_trans_pane_g9

0x0008,

0xfc35,	// (0x00068d66) bg_tb_trans_pane_g

0x5f7c,	// (0x0005f0ad) cell_toolbar_trans_pane_ParamLimits

0x5f7c,	// (0x0005f0ad) cell_toolbar_trans_pane

0x5357,	// (0x0005e488) cell_toolbar_trans_pane_g1

0xcabc,	// (0x00065bed) list_form2_midp_pane_t1

0xcaca,	// (0x00065bfb) list_form2_midp_pane_t2

0x0001,

0xfad2,	// (0x00068c03) list_form2_midp_pane_t

0x4fab,	// (0x0005e0dc) scroll_pane_cp51_ParamLimits

0x5172,	// (0x0005e2a3) form2_midp_wait_pane_g1

0x517b,	// (0x0005e2ac) form2_midp_wait_pane_g2

0x5184,	// (0x0005e2b5) form2_midp_wait_pane_g3

0x0002,

0xfae7,	// (0x00068c18) form2_midp_wait_pane_g

0x8929,	// (0x00061a5a) list_highlight_pane_cp21_ParamLimits

0x51bd,	// (0x0005e2ee) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x51cc,	// (0x0005e2fd) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x42e9,	// (0x0005d41a) list_single_2graphic_im_pane_ParamLimits

0x42e9,	// (0x0005d41a) list_single_2graphic_im_pane

0xce80,	// (0x00065fb1) list_single_2graphic_im_pane_g1_ParamLimits

0xce80,	// (0x00065fb1) list_single_2graphic_im_pane_g1

0xce91,	// (0x00065fc2) list_single_2graphic_im_pane_g2_ParamLimits

0xce91,	// (0x00065fc2) list_single_2graphic_im_pane_g2

0xce9d,	// (0x00065fce) list_single_2graphic_im_pane_g3_ParamLimits

0xce9d,	// (0x00065fce) list_single_2graphic_im_pane_g3

0x0003,

0xfc48,	// (0x00068d79) list_single_2graphic_im_pane_g_ParamLimits

0xfc48,	// (0x00068d79) list_single_2graphic_im_pane_g

0xceb1,	// (0x00065fe2) list_single_2graphic_im_pane_t1_ParamLimits

0xceb1,	// (0x00065fe2) list_single_2graphic_im_pane_t1

0x59e5,	// (0x0005eb16) list_single_graphic_2heading_pane_fp_ParamLimits

0x59e5,	// (0x0005eb16) list_single_graphic_2heading_pane_fp

0xe361,	// (0x00067492) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe361,	// (0x00067492) list_single_graphic_2heading_pane_fp_g1

0x59fe,	// (0x0005eb2f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x59fe,	// (0x0005eb2f) list_single_graphic_2heading_pane_fp_g2

0x39fc,	// (0x0005cb2d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x39fc,	// (0x0005cb2d) list_single_graphic_2heading_pane_fp_g3

0x3a08,	// (0x0005cb39) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3a08,	// (0x0005cb39) list_single_graphic_2heading_pane_fp_g4

0x5a0a,	// (0x0005eb3b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5a0a,	// (0x0005eb3b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6f,	// (0x00068ca0) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6f,	// (0x00068ca0) list_single_graphic_2heading_pane_fp_g

0xe488,	// (0x000675b9) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe488,	// (0x000675b9) list_single_graphic_2heading_pane_fp_t1

0xe399,	// (0x000674ca) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe399,	// (0x000674ca) list_single_graphic_2heading_pane_fp_t2

0xe49e,	// (0x000675cf) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe49e,	// (0x000675cf) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc51,	// (0x00068d82) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc51,	// (0x00068d82) list_single_graphic_2heading_pane_fp_t

0x53e8,	// (0x0005e519) fep_hwr_write_pane_g5_ParamLimits

0x53e8,	// (0x0005e519) fep_hwr_write_pane_g5

0x53f4,	// (0x0005e525) fep_hwr_write_pane_g6_ParamLimits

0x53f4,	// (0x0005e525) fep_hwr_write_pane_g6

0x5cd6,	// (0x0005ee07) eswt_shell_pane_ParamLimits

0x2ba9,	// (0x0005bcda) bg_popup_window_pane_cp18_ParamLimits

0x5d07,	// (0x0005ee38) heading_pane_cp70

0x5e08,	// (0x0005ef39) popup_eswt_tasktip_window_t1_ParamLimits

0xc036,	// (0x00065167) aid_touch_tab_arrow_left

0xc04c,	// (0x0006517d) aid_touch_tab_arrow_right

0x9e42,	// (0x00062f73) title_pane_g3_ParamLimits

0x9e42,	// (0x00062f73) title_pane_g3

0x8f38,	// (0x00062069) set_value_pane_g1

0xb424,	// (0x00064555) popup_toolbar_trans_pane_ParamLimits

0x5f56,	// (0x0005f087) aid_size_cell_tb_trans_pane_ParamLimits

0x8f79,	// (0x000620aa) bg_tb_trans_pane_ParamLimits

0x5f68,	// (0x0005f099) grid_tb_trans_pane_ParamLimits

0x8a6a,	// (0x00061b9b) cont_note_pane_ParamLimits

0x8a6a,	// (0x00061b9b) cont_note_pane

0x8cf4,	// (0x00061e25) cont_snote2_single_text_pane_ParamLimits

0x8cf4,	// (0x00061e25) cont_snote2_single_text_pane

0x8cf4,	// (0x00061e25) cont_snote2_single_graphic_pane_ParamLimits

0x8cf4,	// (0x00061e25) cont_snote2_single_graphic_pane

0x319b,	// (0x0005c2cc) cont_note_wait_pane_ParamLimits

0x319b,	// (0x0005c2cc) cont_note_wait_pane

0x319b,	// (0x0005c2cc) cont_note_image_pane_ParamLimits

0x319b,	// (0x0005c2cc) cont_note_image_pane

0x6010,	// (0x0005f141) popup_note2_window_g1_ParamLimits

0x6010,	// (0x0005f141) popup_note2_window_g1

0x6041,	// (0x0005f172) popup_note2_window_t1_ParamLimits

0x6041,	// (0x0005f172) popup_note2_window_t1

0x6086,	// (0x0005f1b7) popup_note2_window_t2_ParamLimits

0x6086,	// (0x0005f1b7) popup_note2_window_t2

0x60cb,	// (0x0005f1fc) popup_note2_window_t3_ParamLimits

0x60cb,	// (0x0005f1fc) popup_note2_window_t3

0x6110,	// (0x0005f241) popup_note2_window_t4_ParamLimits

0x6110,	// (0x0005f241) popup_note2_window_t4

0x8aee,	// (0x00061c1f) popup_note2_window_t5_ParamLimits

0x8aee,	// (0x00061c1f) popup_note2_window_t5

0x0004,

0xfc5d,	// (0x00068d8e) popup_note2_window_t_ParamLimits

0xfc5d,	// (0x00068d8e) popup_note2_window_t

0x613f,	// (0x0005f270) popup_note2_image_window_g1_ParamLimits

0x613f,	// (0x0005f270) popup_note2_image_window_g1

0x614b,	// (0x0005f27c) popup_note2_image_window_g2_ParamLimits

0x614b,	// (0x0005f27c) popup_note2_image_window_g2

0x0001,

0xfc68,	// (0x00068d99) popup_note2_image_window_g_ParamLimits

0xfc68,	// (0x00068d99) popup_note2_image_window_g

0x615d,	// (0x0005f28e) popup_note2_image_window_t1_ParamLimits

0x615d,	// (0x0005f28e) popup_note2_image_window_t1

0x6175,	// (0x0005f2a6) popup_note2_image_window_t2_ParamLimits

0x6175,	// (0x0005f2a6) popup_note2_image_window_t2

0x618d,	// (0x0005f2be) popup_note2_image_window_t3_ParamLimits

0x618d,	// (0x0005f2be) popup_note2_image_window_t3

0x0002,

0xfc6d,	// (0x00068d9e) popup_note2_image_window_t_ParamLimits

0xfc6d,	// (0x00068d9e) popup_note2_image_window_t

0x31a9,	// (0x0005c2da) popup_note2_wait_window_g1_ParamLimits

0x31a9,	// (0x0005c2da) popup_note2_wait_window_g1

0x61a9,	// (0x0005f2da) popup_note2_wait_window_g2_ParamLimits

0x61a9,	// (0x0005f2da) popup_note2_wait_window_g2

0x31c1,	// (0x0005c2f2) popup_note2_wait_window_g3_ParamLimits

0x31c1,	// (0x0005c2f2) popup_note2_wait_window_g3

0x0002,

0xfc74,	// (0x00068da5) popup_note2_wait_window_g_ParamLimits

0xfc74,	// (0x00068da5) popup_note2_wait_window_g

0x61b5,	// (0x0005f2e6) popup_note2_wait_window_t1_ParamLimits

0x61b5,	// (0x0005f2e6) popup_note2_wait_window_t1

0x61d3,	// (0x0005f304) popup_note2_wait_window_t2_ParamLimits

0x61d3,	// (0x0005f304) popup_note2_wait_window_t2

0x61f1,	// (0x0005f322) popup_note2_wait_window_t3_ParamLimits

0x61f1,	// (0x0005f322) popup_note2_wait_window_t3

0x6203,	// (0x0005f334) popup_note2_wait_window_t4_ParamLimits

0x6203,	// (0x0005f334) popup_note2_wait_window_t4

0x0003,

0xfc7b,	// (0x00068dac) popup_note2_wait_window_t_ParamLimits

0xfc7b,	// (0x00068dac) popup_note2_wait_window_t

0x6215,	// (0x0005f346) wait_bar2_pane_ParamLimits

0x6215,	// (0x0005f346) wait_bar2_pane

0x622d,	// (0x0005f35e) popup_snote2_single_text_window_g1_ParamLimits

0x622d,	// (0x0005f35e) popup_snote2_single_text_window_g1

0x6255,	// (0x0005f386) popup_snote2_single_text_window_t1_ParamLimits

0x6255,	// (0x0005f386) popup_snote2_single_text_window_t1

0x62a1,	// (0x0005f3d2) popup_snote2_single_text_window_t2_ParamLimits

0x62a1,	// (0x0005f3d2) popup_snote2_single_text_window_t2

0x62ed,	// (0x0005f41e) popup_snote2_single_text_window_t3_ParamLimits

0x62ed,	// (0x0005f41e) popup_snote2_single_text_window_t3

0x632e,	// (0x0005f45f) popup_snote2_single_text_window_t4_ParamLimits

0x632e,	// (0x0005f45f) popup_snote2_single_text_window_t4

0x6364,	// (0x0005f495) popup_snote2_single_text_window_t5_ParamLimits

0x6364,	// (0x0005f495) popup_snote2_single_text_window_t5

0x0004,

0xfc84,	// (0x00068db5) popup_snote2_single_text_window_t_ParamLimits

0xfc84,	// (0x00068db5) popup_snote2_single_text_window_t

0x638f,	// (0x0005f4c0) popup_snote2_single_graphic_window_g1_ParamLimits

0x638f,	// (0x0005f4c0) popup_snote2_single_graphic_window_g1

0x63b7,	// (0x0005f4e8) popup_snote2_single_graphic_window_g2_ParamLimits

0x63b7,	// (0x0005f4e8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8f,	// (0x00068dc0) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8f,	// (0x00068dc0) popup_snote2_single_graphic_window_g

0x63df,	// (0x0005f510) popup_snote2_single_graphic_window_t1_ParamLimits

0x63df,	// (0x0005f510) popup_snote2_single_graphic_window_t1

0x642b,	// (0x0005f55c) popup_snote2_single_graphic_window_t2_ParamLimits

0x642b,	// (0x0005f55c) popup_snote2_single_graphic_window_t2

0x62ed,	// (0x0005f41e) popup_snote2_single_graphic_window_t3_ParamLimits

0x62ed,	// (0x0005f41e) popup_snote2_single_graphic_window_t3

0x632e,	// (0x0005f45f) popup_snote2_single_graphic_window_t4_ParamLimits

0x632e,	// (0x0005f45f) popup_snote2_single_graphic_window_t4

0x6364,	// (0x0005f495) popup_snote2_single_graphic_window_t5_ParamLimits

0x6364,	// (0x0005f495) popup_snote2_single_graphic_window_t5

0x0004,

0xfc94,	// (0x00068dc5) popup_snote2_single_graphic_window_t_ParamLimits

0xfc94,	// (0x00068dc5) popup_snote2_single_graphic_window_t

0x4e5b,	// (0x0005df8c) clock_nsta_pane_cp2_t1

0x4e5b,	// (0x0005df8c) clock_nsta_pane_cp2_t2

0x0001,

0xfaa8,	// (0x00068bd9) clock_nsta_pane_cp2_t

0xdc0f,	// (0x00066d40) form_field_data_wide_pane_g1_ParamLimits

0x8f87,	// (0x000620b8) form_field_data_wide_pane_g2_ParamLimits

0x8f87,	// (0x000620b8) form_field_data_wide_pane_g2

0x8f93,	// (0x000620c4) form_field_data_wide_pane_g3_ParamLimits

0x8f93,	// (0x000620c4) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x0006878c) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x0006878c) form_field_data_wide_pane_g

0xc9c5,	// (0x00065af6) grid_touch_3_pane_ParamLimits

0xc9c5,	// (0x00065af6) grid_touch_3_pane

0xcee2,	// (0x00066013) cell_touch_3_pane_ParamLimits

0xcee2,	// (0x00066013) cell_touch_3_pane

0x5357,	// (0x0005e488) cell_touch_3_pane_g1

0x5357,	// (0x0005e488) cell_touch_3_pane_g2

0x0001,

0xfb2d,	// (0x00068c5e) cell_touch_3_pane_g

0x8b46,	// (0x00061c77) cont_query_data_pane

0x8b4e,	// (0x00061c7f) cont_query_data_pane_cp1

0x64aa,	// (0x0005f5db) button_value_adjust_pane_cp7

0x64b2,	// (0x0005f5e3) query_popup_pane_cp3

0xdea8,	// (0x00066fd9) bg_popup_sub_pane_cp22_ParamLimits

0xf292,	// (0x000683c3) navi_navi_volume_pane_cp2

0xf2ad,	// (0x000683de) popup_side_volume_key_window_g2

0xf2bc,	// (0x000683ed) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x00068822) popup_side_volume_key_window_g

0xf2d9,	// (0x0006840a) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x00068829) popup_side_volume_key_window_t

0x203e,	// (0x0005b16f) popup_side_volume_key_window_ParamLimits

0xa34d,	// (0x0006347e) list_double_graphic_pane_g4_ParamLimits

0xa34d,	// (0x0006347e) list_double_graphic_pane_g4

0xc853,	// (0x00065984) list_single_2heading_msg_pane_ParamLimits

0xc853,	// (0x00065984) list_single_2heading_msg_pane

0xcf2e,	// (0x0006605f) list_single_2heading_msg_pane_g1_ParamLimits

0xcf2e,	// (0x0006605f) list_single_2heading_msg_pane_g1

0xcf3a,	// (0x0006606b) list_single_2heading_msg_pane_g2_ParamLimits

0xcf3a,	// (0x0006606b) list_single_2heading_msg_pane_g2

0xcf4d,	// (0x0006607e) list_single_2heading_msg_pane_g3_ParamLimits

0xcf4d,	// (0x0006607e) list_single_2heading_msg_pane_g3

0xcf59,	// (0x0006608a) list_single_2heading_msg_pane_g4_ParamLimits

0xcf59,	// (0x0006608a) list_single_2heading_msg_pane_g4

0x0003,

0xfc9f,	// (0x00068dd0) list_single_2heading_msg_pane_g_ParamLimits

0xfc9f,	// (0x00068dd0) list_single_2heading_msg_pane_g

0xb7fe,	// (0x0006492f) list_single_2heading_msg_pane_t1_ParamLimits

0xb7fe,	// (0x0006492f) list_single_2heading_msg_pane_t1

0xb826,	// (0x00064957) list_single_2heading_msg_pane_t2_ParamLimits

0xb826,	// (0x00064957) list_single_2heading_msg_pane_t2

0xb891,	// (0x000649c2) list_single_2heading_msg_pane_t3_ParamLimits

0xb891,	// (0x000649c2) list_single_2heading_msg_pane_t3

0xe4be,	// (0x000675ef) list_single_2heading_msg_pane_t4_ParamLimits

0xe4be,	// (0x000675ef) list_single_2heading_msg_pane_t4

0x0003,

0xfca8,	// (0x00068dd9) list_single_2heading_msg_pane_t_ParamLimits

0xfca8,	// (0x00068dd9) list_single_2heading_msg_pane_t

0x88e5,	// (0x00061a16) title_pane_g4_ParamLimits

0x88e5,	// (0x00061a16) title_pane_g4

0xf0a0,	// (0x000681d1) title_pane_stacon_g3_ParamLimits

0xf0a0,	// (0x000681d1) title_pane_stacon_g3

0x5fd3,	// (0x0005f104) list_single_2graphic_im_pane_g4_ParamLimits

0x5fd3,	// (0x0005f104) list_single_2graphic_im_pane_g4

0x3df9,	// (0x0005cf2a) popup_side_volume_key_window_cp

0x4646,	// (0x0005d777) main_idle_act2_pane_t1

0x0774,	// (0x000598a5) toolbar_button_pane_g10

0xa1c3,	// (0x000632f4) popup_toolbar_window_cp1

0x4e4c,	// (0x0005df7d) clock_nsta_pane_cp_t1

0x4e4c,	// (0x0005df7d) clock_nsta_pane_cp_t2

0x0001,

0xfaa3,	// (0x00068bd4) clock_nsta_pane_cp_t

0xf292,	// (0x000683c3) navi_navi_volume_pane_cp2_ParamLimits

0xf2a1,	// (0x000683d2) popup_side_volume_key_window_g1_ParamLimits

0xf2ad,	// (0x000683de) popup_side_volume_key_window_g2_ParamLimits

0xf2bc,	// (0x000683ed) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x00068822) popup_side_volume_key_window_g_ParamLimits

0x0cfa,	// (0x00059e2b) fep_hwr_aid_pane

0x0da3,	// (0x00059ed4) bg_fep_hwr_top_pane_g4_ParamLimits

0x53b8,	// (0x0005e4e9) fep_hwr_top_pane_g1_ParamLimits

0x53ca,	// (0x0005e4fb) fep_hwr_top_pane_g2_ParamLimits

0x0dc3,	// (0x00059ef4) fep_hwr_top_pane_g3_ParamLimits

0xfaf8,	// (0x00068c29) fep_hwr_top_pane_g_ParamLimits

0x0dd8,	// (0x00059f09) fep_hwr_top_text_pane_ParamLimits

0x3bae,	// (0x0005ccdf) aid_touch_tab_arrow_arrow_2

0x3bb7,	// (0x0005cce8) aid_touch_tab_arrow_left_2

0x0d0e,	// (0x00059e3f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0d45,	// (0x00059e76) fep_hwr_prediction_pane

0x5520,	// (0x0005e651) fep_vkb_prediction_pane

0xcca5,	// (0x00065dd6) fep_vkb_side_pane_g3_ParamLimits

0xcca5,	// (0x00065dd6) fep_vkb_side_pane_g3

0x0f67,	// (0x0005a098) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0fd8,	// (0x0005a109) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0fe5,	// (0x0005a116) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba7,	// (0x00068cd8) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x11e6,	// (0x0005a317) fep_hwr_prediction_pane_g1

0x11f0,	// (0x0005a321) fep_hwr_prediction_pane_g2

0x11f8,	// (0x0005a329) fep_hwr_prediction_pane_g3

0x1200,	// (0x0005a331) fep_hwr_prediction_pane_g4

0x0003,

0xfcb1,	// (0x00068de2) fep_hwr_prediction_pane_g

0x64d9,	// (0x0005f60a) fep_vkb_prediction_pane_g1

0x64e3,	// (0x0005f614) fep_vkb_prediction_pane_g2

0x64eb,	// (0x0005f61c) fep_vkb_prediction_pane_g3

0x64f3,	// (0x0005f624) fep_vkb_prediction_pane_g4

0x0003,

0xfcba,	// (0x00068deb) fep_vkb_prediction_pane_g

0x0ac4,	// (0x00059bf5) slider_set_pane_g3

0x0ad8,	// (0x00059c09) slider_set_pane_g4

0x0af0,	// (0x00059c21) slider_set_pane_g5

0x0ac4,	// (0x00059bf5) slider_set_pane_g6

0x0b06,	// (0x00059c37) slider_set_pane_g7

0x427f,	// (0x0005d3b0) slider_form_pane_g3

0x4288,	// (0x0005d3b9) slider_form_pane_g4

0x4290,	// (0x0005d3c1) slider_form_pane_g5

0x427f,	// (0x0005d3b0) slider_form_pane_g6

0xc812,	// (0x00065943) slider_form_pane_g7

0x490a,	// (0x0005da3b) slider_set_pane_vc_g3

0x4913,	// (0x0005da44) slider_set_pane_vc_g4

0x491c,	// (0x0005da4d) slider_set_pane_vc_g5

0x490a,	// (0x0005da3b) slider_set_pane_vc_g6

0x4925,	// (0x0005da56) slider_set_pane_vc_g7

0x4afb,	// (0x0005dc2c) slider_form_pane_vc_g1

0x4b04,	// (0x0005dc35) slider_form_pane_vc_g2

0x4b0d,	// (0x0005dc3e) slider_form_pane_vc_g3

0x4afb,	// (0x0005dc2c) slider_form_pane_vc_g4

0x4b16,	// (0x0005dc47) slider_form_pane_vc_g5

0x0004,

0xfa75,	// (0x00068ba6) slider_form_pane_vc_g

0xee13,	// (0x00067f44) main_idle_act3_pane

0x64fb,	// (0x0005f62c) ai3_links_pane

0xcf71,	// (0x000660a2) popup_ai3_data_window_ParamLimits

0xcf71,	// (0x000660a2) popup_ai3_data_window

0x88c7,	// (0x000619f8) grid_ai3_links_pane

0xcf8f,	// (0x000660c0) cell_ai3_links_pane_ParamLimits

0xcf8f,	// (0x000660c0) cell_ai3_links_pane

0x653c,	// (0x0005f66d) bg_popup_sub_pane_cp11

0x6549,	// (0x0005f67a) cell_ai3_links_pane_g1

0x88c7,	// (0x000619f8) bg_popup_sub_pane_cp12

0x656e,	// (0x0005f69f) heading_ai3_data_pane

0x6576,	// (0x0005f6a7) list_ai3_gene_pane

0x6582,	// (0x0005f6b3) popup_ai3_data_window_g1

0x658a,	// (0x0005f6bb) heading_ai3_data_pane_g1

0x6592,	// (0x0005f6c3) heading_ai3_data_pane_t1

0x65a0,	// (0x0005f6d1) list_double_ai3_gene_pane_ParamLimits

0x65a0,	// (0x0005f6d1) list_double_ai3_gene_pane

0x65ad,	// (0x0005f6de) list_single_ai3_gene_pane_ParamLimits

0x65ad,	// (0x0005f6de) list_single_ai3_gene_pane

0x531c,	// (0x0005e44d) list_highlight_pane_cp7_ParamLimits

0x531c,	// (0x0005e44d) list_highlight_pane_cp7

0x65ba,	// (0x0005f6eb) list_single_a13_gene_pane_t1_ParamLimits

0x65ba,	// (0x0005f6eb) list_single_a13_gene_pane_t1

0x65d1,	// (0x0005f702) list_single_ai3_gene_pane_g1

0x65da,	// (0x0005f70b) list_single_ai3_gene_pane_g2

0x0001,

0xfcc3,	// (0x00068df4) list_single_ai3_gene_pane_g

0x65e2,	// (0x0005f713) list_double_ai3_gene_pane_g1_ParamLimits

0x65e2,	// (0x0005f713) list_double_ai3_gene_pane_g1

0x65ee,	// (0x0005f71f) list_double_ai3_gene_pane_t1_ParamLimits

0x65ee,	// (0x0005f71f) list_double_ai3_gene_pane_t1

0x660a,	// (0x0005f73b) list_double_ai3_gene_pane_t2_ParamLimits

0x660a,	// (0x0005f73b) list_double_ai3_gene_pane_t2

0x661f,	// (0x0005f750) list_double_ai3_gene_pane_t3_ParamLimits

0x661f,	// (0x0005f750) list_double_ai3_gene_pane_t3

0x0002,

0xfcc8,	// (0x00068df9) list_double_ai3_gene_pane_t_ParamLimits

0xfcc8,	// (0x00068df9) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe4b4,	// (0x000675e5) aid_size_min_col_2

0xcf18,	// (0x00066049) aid_size_min_msg_ParamLimits

0xcf18,	// (0x00066049) aid_size_min_msg

0xccb9,	// (0x00065dea) fep_vkb_top_text_pane_g2_ParamLimits

0xccb9,	// (0x00065dea) fep_vkb_top_text_pane_g2

0x0001,

0xfb28,	// (0x00068c59) fep_vkb_top_text_pane_g_ParamLimits

0xfb28,	// (0x00068c59) fep_vkb_top_text_pane_g

0xee13,	// (0x00067f44) main_hc_apps_shell_pane

0x663c,	// (0x0005f76d) grid_hc_apps_pane_ParamLimits

0x663c,	// (0x0005f76d) grid_hc_apps_pane

0x664e,	// (0x0005f77f) list_hc_apps_pane

0x6656,	// (0x0005f787) scroll_pane_cp37_ParamLimits

0x6656,	// (0x0005f787) scroll_pane_cp37

0xcfa9,	// (0x000660da) cell_hc_apps_pane_ParamLimits

0xcfa9,	// (0x000660da) cell_hc_apps_pane

0xd06f,	// (0x000661a0) cell_hc_apps_pane_g1_ParamLimits

0xd06f,	// (0x000661a0) cell_hc_apps_pane_g1

0x6742,	// (0x0005f873) cell_hc_apps_pane_g2_ParamLimits

0x6742,	// (0x0005f873) cell_hc_apps_pane_g2

0x675e,	// (0x0005f88f) cell_hc_apps_pane_g3_ParamLimits

0x675e,	// (0x0005f88f) cell_hc_apps_pane_g3

0x0002,

0xfccf,	// (0x00068e00) cell_hc_apps_pane_g_ParamLimits

0xfccf,	// (0x00068e00) cell_hc_apps_pane_g

0xd09b,	// (0x000661cc) cell_hc_apps_pane_t1_ParamLimits

0xd09b,	// (0x000661cc) cell_hc_apps_pane_t1

0x8a6a,	// (0x00061b9b) grid_highlight_pane_cp10_ParamLimits

0x8a6a,	// (0x00061b9b) grid_highlight_pane_cp10

0xd0d9,	// (0x0006620a) list_single_hc_apps_pane_ParamLimits

0xd0d9,	// (0x0006620a) list_single_hc_apps_pane

0xd10c,	// (0x0006623d) list_single_hc_apps_pane_g1

0xd125,	// (0x00066256) list_single_hc_apps_pane_g2

0x0001,

0xfcd6,	// (0x00068e07) list_single_hc_apps_pane_g

0xd13e,	// (0x0006626f) list_single_hc_apps_pane_g2_copy1

0xb8ff,	// (0x00064a30) list_single_hc_apps_pane_t1

0x8929,	// (0x00061a5a) bg_set_opt_pane_cp_ParamLimits

0xef36,	// (0x00068067) setting_slider_pane_t1_ParamLimits

0xef4f,	// (0x00068080) setting_slider_pane_t2_ParamLimits

0xef69,	// (0x0006809a) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0006866a) setting_slider_pane_t_ParamLimits

0xef81,	// (0x000680b2) slider_set_pane_ParamLimits

0x000b,	// (0x0005913c) control_pane_g5_ParamLimits

0x000b,	// (0x0005913c) control_pane_g5

0x40b2,	// (0x0005d1e3) slider_set_pane_g1_ParamLimits

0x0ab8,	// (0x00059be9) slider_set_pane_g2_ParamLimits

0x0ac4,	// (0x00059bf5) slider_set_pane_g3_ParamLimits

0x0ad8,	// (0x00059c09) slider_set_pane_g4_ParamLimits

0x0af0,	// (0x00059c21) slider_set_pane_g5_ParamLimits

0x0ac4,	// (0x00059bf5) slider_set_pane_g6_ParamLimits

0x0b06,	// (0x00059c37) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x00068a70) slider_set_pane_g_ParamLimits

0x2117,	// (0x0005b248) navi_icon_text_pane_ParamLimits

0xb4b5,	// (0x000645e6) aid_fill_nsta_2_ParamLimits

0xc036,	// (0x00065167) aid_touch_tab_arrow_left_ParamLimits

0xc04c,	// (0x0006517d) aid_touch_tab_arrow_right_ParamLimits

0xc0e7,	// (0x00065218) clock_nsta_pane_ParamLimits

0xc590,	// (0x000656c1) navi_icon_pane_g1_ParamLimits

0xc59c,	// (0x000656cd) navi_text_pane_t1_ParamLimits

0xca9e,	// (0x00065bcf) navi_icon_text_pane_g1_ParamLimits

0xcaaa,	// (0x00065bdb) navi_icon_text_pane_t1_ParamLimits

0xd10c,	// (0x0006623d) list_single_hc_apps_pane_g1_ParamLimits

0xd125,	// (0x00066256) list_single_hc_apps_pane_g2_ParamLimits

0xfcd6,	// (0x00068e07) list_single_hc_apps_pane_g_ParamLimits

0xd13e,	// (0x0006626f) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb8ff,	// (0x00064a30) list_single_hc_apps_pane_t1_ParamLimits

0x9d31,	// (0x00062e62) popup_toolbar2_fixed_window_ParamLimits

0x9d31,	// (0x00062e62) popup_toolbar2_fixed_window

0xb41a,	// (0x0006454b) popup_toolbar2_float_window

0x88c7,	// (0x000619f8) bg_popup_sub_pane_cp27

0x6818,	// (0x0005f949) grid_toolbar2_float_pane

0x88c7,	// (0x000619f8) bg_popup_sub_pane_cp26

0x6818,	// (0x0005f949) grid_toolbar2_fixed_pane

0xd15a,	// (0x0006628b) cell_toolbar2_fixed_pane_ParamLimits

0xd15a,	// (0x0006628b) cell_toolbar2_fixed_pane

0xd174,	// (0x000662a5) cell_toolbar2_fixed_pane_g1

0x6839,	// (0x0005f96a) toolbar2_fixed_button_pane

0x2b1d,	// (0x0005bc4e) toolbar2_fixed_button_pane_g1

0x2b2d,	// (0x0005bc5e) toolbar2_fixed_button_pane_g2

0x2b25,	// (0x0005bc56) toolbar2_fixed_button_pane_g3

0x2b3d,	// (0x0005bc6e) toolbar2_fixed_button_pane_g4

0x2b35,	// (0x0005bc66) toolbar2_fixed_button_pane_g5

0x2b45,	// (0x0005bc76) toolbar2_fixed_button_pane_g6

0x2b4d,	// (0x0005bc7e) toolbar2_fixed_button_pane_g7

0x2b5d,	// (0x0005bc8e) toolbar2_fixed_button_pane_g8

0x2b55,	// (0x0005bc86) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x00068972) toolbar2_fixed_button_pane_g

0x6841,	// (0x0005f972) cell_toolbar2_float_pane_ParamLimits

0x6841,	// (0x0005f972) cell_toolbar2_float_pane

0x6852,	// (0x0005f983) cell_toolbar2_float_pane_g1

0x6839,	// (0x0005f96a) toolbar2_fixed_button_pane_cp

0xcba1,	// (0x00065cd2) fep_vkb_accented_list_pane_ParamLimits

0xcba1,	// (0x00065cd2) fep_vkb_accented_list_pane

0x0f47,	// (0x0005a078) bg_popup_fep_shadow_pane_g9

0x22a6,	// (0x0005b3d7) bg_popup_fep_shadow_pane_cp3

0x909c,	// (0x000621cd) list_accented_list_pane

0x685b,	// (0x0005f98c) list_single_accented_list_pane_ParamLimits

0x685b,	// (0x0005f98c) list_single_accented_list_pane

0x22a6,	// (0x0005b3d7) list_highlight_pane_cp10

0x686c,	// (0x0005f99d) list_single_accented_list_pane_t1

0xb336,	// (0x00064467) popup_slider_window_ParamLimits

0xb336,	// (0x00064467) popup_slider_window

0x64ba,	// (0x0005f5eb) aid_indentation_list_msg

0xd277,	// (0x000663a8) bg_popup_window_pane_cp19

0x69a8,	// (0x0005fad9) popup_slider_window_g1

0x69c4,	// (0x0005faf5) popup_slider_window_g2

0x69e0,	// (0x0005fb11) popup_slider_window_g3

0x0005,

0xfcdb,	// (0x00068e0c) popup_slider_window_g

0x6a46,	// (0x0005fb77) popup_slider_window_t1

0x6aba,	// (0x0005fbeb) small_volume_slider_vertical_pane

0x5357,	// (0x0005e488) small_volume_slider_vertical_pane_g1

0x5357,	// (0x0005e488) small_volume_slider_vertical_pane_g2

0x6ad6,	// (0x0005fc07) small_volume_slider_vertical_pane_g3

0x0002,

0xfced,	// (0x00068e1e) small_volume_slider_vertical_pane_g

0x9c9b,	// (0x00062dcc) area_side_right_pane_ParamLimits

0x9c9b,	// (0x00062dcc) area_side_right_pane

0xb92d,	// (0x00064a5e) aid_size_side_button_ParamLimits

0xb92d,	// (0x00064a5e) aid_size_side_button

0xb946,	// (0x00064a77) grid_sctrl_middle_pane_ParamLimits

0xb946,	// (0x00064a77) grid_sctrl_middle_pane

0x1269,	// (0x0005a39a) sctrl_sk_bottom_pane

0x127a,	// (0x0005a3ab) sctrl_sk_top_pane

0x128c,	// (0x0005a3bd) aid_touch_sctrl_top

0x1299,	// (0x0005a3ca) bg_sctrl_sk_pane_ParamLimits

0x1299,	// (0x0005a3ca) bg_sctrl_sk_pane

0x12a7,	// (0x0005a3d8) sctrl_sk_top_pane_g1

0x12b4,	// (0x0005a3e5) sctrl_sk_top_pane_t1

0x128c,	// (0x0005a3bd) aid_touch_sctrl_bottom

0x1299,	// (0x0005a3ca) bg_sctrl_sk_pane_cp_ParamLimits

0x1299,	// (0x0005a3ca) bg_sctrl_sk_pane_cp

0x12cf,	// (0x0005a400) sctrl_sk_bottom_pane_g1

0x12b4,	// (0x0005a3e5) sctrl_sk_bottom_pane_t1

0xb960,	// (0x00064a91) cell_sctrl_middle_pane_ParamLimits

0xb960,	// (0x00064a91) cell_sctrl_middle_pane

0xb973,	// (0x00064aa4) aid_touch_sctrl_middle_ParamLimits

0xb973,	// (0x00064aa4) aid_touch_sctrl_middle

0xb980,	// (0x00064ab1) bg_sctrl_middle_pane_ParamLimits

0xb980,	// (0x00064ab1) bg_sctrl_middle_pane

0x1952,	// (0x0005aa83) cell_sctrl_middle_pane_g1_ParamLimits

0x1952,	// (0x0005aa83) cell_sctrl_middle_pane_g1

0xb98e,	// (0x00064abf) cell_sctrl_middle_pane_g2_ParamLimits

0xb98e,	// (0x00064abf) cell_sctrl_middle_pane_g2

0x0001,

0xfcf9,	// (0x00068e2a) cell_sctrl_middle_pane_g_ParamLimits

0xfcf9,	// (0x00068e2a) cell_sctrl_middle_pane_g

0x2b1d,	// (0x0005bc4e) bg_sctrl_middle_pane_g1

0x2b25,	// (0x0005bc56) bg_sctrl_middle_pane_g2

0x2b2d,	// (0x0005bc5e) bg_sctrl_middle_pane_g3

0x2b35,	// (0x0005bc66) bg_sctrl_middle_pane_g4

0x2b3d,	// (0x0005bc6e) bg_sctrl_middle_pane_g5

0x2b45,	// (0x0005bc76) bg_sctrl_middle_pane_g6

0x2b4d,	// (0x0005bc7e) bg_sctrl_middle_pane_g7

0x2b55,	// (0x0005bc86) bg_sctrl_middle_pane_g8

0x0007,

0xfcfe,	// (0x00068e2f) bg_sctrl_middle_pane_g

0x2b5d,	// (0x0005bc8e) bg_sctrl_middle_pane_g8_copy1

0x2b1d,	// (0x0005bc4e) bg_sctrl_sk_pane_g1

0x2b2d,	// (0x0005bc5e) bg_sctrl_sk_pane_g2

0x2b25,	// (0x0005bc56) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x00068972) bg_sctrl_sk_pane_g

0x8eb2,	// (0x00061fe3) aid_size_touch_scroll_bar

0x2b3d,	// (0x0005bc6e) bg_sctrl_sk_pane_g4

0x2b35,	// (0x0005bc66) bg_sctrl_sk_pane_g5

0x2b45,	// (0x0005bc76) bg_sctrl_sk_pane_g6

0x2b4d,	// (0x0005bc7e) bg_sctrl_sk_pane_g7

0x2b5d,	// (0x0005bc8e) bg_sctrl_sk_pane_g8

0x2b55,	// (0x0005bc86) bg_sctrl_sk_pane_g9

0x01c1,	// (0x000592f2) popup_fep_china_hwr2_fs_candidate_window

0xade8,	// (0x00063f19) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xade8,	// (0x00063f19) popup_fep_china_hwr2_fs_control_window

0x0f67,	// (0x0005a098) sctrl_sk_top_pane_g2

0x0001,

0xfcf4,	// (0x00068e25) sctrl_sk_top_pane_g

0xd32f,	// (0x00066460) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd32f,	// (0x00066460) aid_fep_china_hwr2_fs_cell

0xd345,	// (0x00066476) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd345,	// (0x00066476) bg_popup_fep_shadow_pane_cp4

0xd35c,	// (0x0006648d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd35c,	// (0x0006648d) bg_popup_fep_shadow_pane_cp5

0xd36e,	// (0x0006649f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd36e,	// (0x0006649f) popup_fep_china_hwr2_fs_control_bar_grid

0xd382,	// (0x000664b3) popup_fep_china_hwr2_fs_control_funtion_grid

0x6b35,	// (0x0005fc66) aid_fep_china_hwr2_fs_candi_cell

0x88c7,	// (0x000619f8) bg_popup_fep_shadow_pane_cp6

0x6b3f,	// (0x0005fc70) popup_fep_china_hwr2_fs_candidate_grid

0xd38a,	// (0x000664bb) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd38a,	// (0x000664bb) cell_fep_china_hwr2_fs_funtion_grid

0x5357,	// (0x0005e488) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6b61,	// (0x0005fc92) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6b61,	// (0x0005fc92) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6b6f,	// (0x0005fca0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6b6f,	// (0x0005fca0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0f,	// (0x00068e40) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0f,	// (0x00068e40) cell_fep_china_hwr2_fs_funtion_grid_g

0xd3a2,	// (0x000664d3) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd3a2,	// (0x000664d3) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd3b7,	// (0x000664e8) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd3b7,	// (0x000664e8) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd14,	// (0x00068e45) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd14,	// (0x00068e45) cell_fep_china_hwr2_fs_funtion_grid_t

0x6bb6,	// (0x0005fce7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6bbe,	// (0x0005fcef) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6bc6,	// (0x0005fcf7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd19,	// (0x00068e4a) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6bce,	// (0x0005fcff) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6bce,	// (0x0005fcff) cell_fep_china_hwr2_fs_candidate_grid

0x6bed,	// (0x0005fd1e) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6bf5,	// (0x0005fd26) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5357,	// (0x0005e488) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5357,	// (0x0005e488) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb2d,	// (0x00068c5e) cell_fep_china_hwr2_fs_candidate_grid_g

0x6bfd,	// (0x0005fd2e) cell_fep_china_hwr2_fs_candidate_grid_t1

0x26eb,	// (0x0005b81c) clock_nsta_pane_cp_24_ParamLimits

0x26eb,	// (0x0005b81c) clock_nsta_pane_cp_24

0x276b,	// (0x0005b89c) indicator_nsta_pane_cp_24_ParamLimits

0x276b,	// (0x0005b89c) indicator_nsta_pane_cp_24

0x381e,	// (0x0005c94f) heading_pane_g1

0x0001,

0xf8a6,	// (0x000689d7) heading_pane_g

0x448d,	// (0x0005d5be) grid_sct_catagory_button_pane

0x44bf,	// (0x0005d5f0) scroll_pane_cp5_ParamLimits

0x4fb7,	// (0x0005e0e8) button_value_adjust_pane_cp5_ParamLimits

0x4fb7,	// (0x0005e0e8) button_value_adjust_pane_cp5

0x509c,	// (0x0005e1cd) form2_midp_time_pane_ParamLimits

0x6c0b,	// (0x0005fd3c) cell_sct_catagory_button_pane_ParamLimits

0x6c0b,	// (0x0005fd3c) cell_sct_catagory_button_pane

0x531c,	// (0x0005e44d) bg_button_pane_cp01_ParamLimits

0x531c,	// (0x0005e44d) bg_button_pane_cp01

0x5357,	// (0x0005e488) cell_sct_catagory_button_pane_g1

0xb3b7,	// (0x000644e8) popup_tb_extension_window

0xd3d3,	// (0x00066504) aid_size_cell_ext_ParamLimits

0xd3d3,	// (0x00066504) aid_size_cell_ext

0x8cf4,	// (0x00061e25) bg_tb_trans_pane_cp1_ParamLimits

0x8cf4,	// (0x00061e25) bg_tb_trans_pane_cp1

0xd3f9,	// (0x0006652a) grid_tb_ext_pane_ParamLimits

0xd3f9,	// (0x0006652a) grid_tb_ext_pane

0xd436,	// (0x00066567) cell_tb_ext_pane_ParamLimits

0xd436,	// (0x00066567) cell_tb_ext_pane

0xd45e,	// (0x0006658f) cell_tb_ext_pane_g1_ParamLimits

0xd45e,	// (0x0006658f) cell_tb_ext_pane_g1

0x6c9f,	// (0x0005fdd0) cell_tb_ext_pane_t1

0x8a6a,	// (0x00061b9b) list_highlight_pane_cp11_ParamLimits

0x8a6a,	// (0x00061b9b) list_highlight_pane_cp11

0x9d46,	// (0x00062e77) popup_uni_indicator_window_ParamLimits

0x9d46,	// (0x00062e77) popup_uni_indicator_window

0x8f79,	// (0x000620aa) bg_popup_sub_pane_cp14

0x6cba,	// (0x0005fdeb) list_uniindi_pane

0x6cc6,	// (0x0005fdf7) uniindi_top_pane

0x8a6a,	// (0x00061b9b) bg_uniindi_top_pane

0x6ce7,	// (0x0005fe18) uniindi_top_pane_g1

0x6cfd,	// (0x0005fe2e) uniindi_top_pane_g2

0x0003,

0xfd20,	// (0x00068e51) uniindi_top_pane_g

0x6d27,	// (0x0005fe58) uniindi_top_pane_t1

0x6d53,	// (0x0005fe84) list_single_uniindi_pane_ParamLimits

0x6d53,	// (0x0005fe84) list_single_uniindi_pane

0x5357,	// (0x0005e488) bg_uniindi_top_pane_g1

0x6d66,	// (0x0005fe97) list_single_uniindi_pane_g1

0x6d79,	// (0x0005feaa) list_single_uniindi_pane_t1

0xee13,	// (0x00067f44) control_bg_pane

0x6d9e,	// (0x0005fecf) bg_sctrl_sk_pane_cp1

0x6da7,	// (0x0005fed8) bg_sctrl_sk_pane_cp2

0x6db0,	// (0x0005fee1) control_bg_pane_g1

0x6db9,	// (0x0005feea) control_bg_pane_g2

0x0001,

0xfd29,	// (0x00068e5a) control_bg_pane_g

0x4def,	// (0x0005df20) cell_indicator_nsta_pane_g1_ParamLimits

0xca02,	// (0x00065b33) cell_indicator_nsta_pane_g2_ParamLimits

0xfa91,	// (0x00068bc2) cell_indicator_nsta_pane_g_ParamLimits

0xe32a,	// (0x0006745b) form2_midp_time_pane_t1_ParamLimits

0x0cec,	// (0x00059e1d) main_idle_act4_pane_ParamLimits

0x0cec,	// (0x00059e1d) main_idle_act4_pane

0xb3b7,	// (0x000644e8) popup_tb_extension_window_ParamLimits

0xd41e,	// (0x0006654f) tb_ext_find_pane_ParamLimits

0xd41e,	// (0x0006654f) tb_ext_find_pane

0x6dc2,	// (0x0005fef3) ai_gene_pane_1_cp1

0x23f0,	// (0x0005b521) ai_gene_pane_2_cp1

0x6dca,	// (0x0005fefb) list_single_idle_plugin_calendar_pane

0x6dd3,	// (0x0005ff04) list_single_idle_plugin_notification_pane

0x6ddc,	// (0x0005ff0d) list_single_idle_plugin_player_pane

0xd47b,	// (0x000665ac) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd47b,	// (0x000665ac) list_single_idle_plugin_shortcut_pane

0xd4a3,	// (0x000665d4) main_idle_act4_pane_t1

0xd4bb,	// (0x000665ec) main_idle_act4_pane_t2

0x0001,

0xfd2e,	// (0x00068e5f) main_idle_act4_pane_t

0xd4d3,	// (0x00066604) middle_sk_idle_act4_pane_ParamLimits

0xd4d3,	// (0x00066604) middle_sk_idle_act4_pane

0xd4ef,	// (0x00066620) popup_clock_digital_analogue_window_cp2

0xd516,	// (0x00066647) shortcut_wheel_idle_act4_pane_ParamLimits

0xd516,	// (0x00066647) shortcut_wheel_idle_act4_pane

0x5357,	// (0x0005e488) shortcut_wheel_idle_act4_pane_g1

0x5357,	// (0x0005e488) shortcut_wheel_idle_act4_pane_g2

0x5357,	// (0x0005e488) shortcut_wheel_idle_act4_pane_g3

0x5357,	// (0x0005e488) shortcut_wheel_idle_act4_pane_g4

0x5357,	// (0x0005e488) shortcut_wheel_idle_act4_pane_g5

0x6e6f,	// (0x0005ffa0) shortcut_wheel_idle_act4_pane_g6

0x6e77,	// (0x0005ffa8) shortcut_wheel_idle_act4_pane_g7

0x6e7f,	// (0x0005ffb0) shortcut_wheel_idle_act4_pane_g8

0x6e87,	// (0x0005ffb8) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd33,	// (0x00068e64) shortcut_wheel_idle_act4_pane_g

0xd593,	// (0x000666c4) middle_sk_idle_act4_pane_g1_ParamLimits

0xd593,	// (0x000666c4) middle_sk_idle_act4_pane_g1

0xd5a1,	// (0x000666d2) middle_sk_idle_act4_pane_g2_ParamLimits

0xd5a1,	// (0x000666d2) middle_sk_idle_act4_pane_g2

0x0001,

0xfd56,	// (0x00068e87) middle_sk_idle_act4_pane_g_ParamLimits

0xfd56,	// (0x00068e87) middle_sk_idle_act4_pane_g

0xd5b9,	// (0x000666ea) middle_sk_idle_act4_pane_t1_ParamLimits

0xd5b9,	// (0x000666ea) middle_sk_idle_act4_pane_t1

0xd5e8,	// (0x00066719) grid_ai_shortcut_pane_ParamLimits

0xd5e8,	// (0x00066719) grid_ai_shortcut_pane

0xd605,	// (0x00066736) list_highlight_pane_cp16_ParamLimits

0xd605,	// (0x00066736) list_highlight_pane_cp16

0xd612,	// (0x00066743) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd612,	// (0x00066743) list_single_idle_plugin_shortcut_pane_g1

0xd61e,	// (0x0006674f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd61e,	// (0x0006674f) list_single_idle_plugin_shortcut_pane_g2

0xd63c,	// (0x0006676d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd63c,	// (0x0006676d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5b,	// (0x00068e8c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5b,	// (0x00068e8c) list_single_idle_plugin_shortcut_pane_g

0xd651,	// (0x00066782) cell_ai_shortcut_pane_ParamLimits

0xd651,	// (0x00066782) cell_ai_shortcut_pane

0xd667,	// (0x00066798) cell_ai_shortcut_pane_g1_ParamLimits

0xd667,	// (0x00066798) cell_ai_shortcut_pane_g1

0x6dc2,	// (0x0005fef3) ai_gene_pane_1_cp2

0x6fb8,	// (0x000600e9) ai_gene_pane_2_cp2

0x6fc0,	// (0x000600f1) list_highlight_pane_cp15

0x6fc9,	// (0x000600fa) list_single_idle_plugin_calendar_pane_g1

0x6fc0,	// (0x000600f1) list_highlight_pane_cp17

0x6fd1,	// (0x00060102) list_single_idle_plugin_calendar_pane_g1_copy1

0x6fd9,	// (0x0006010a) list_single_idle_plugin_player_pane_g1

0x46f4,	// (0x0005d825) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd62,	// (0x00068e93) list_single_idle_plugin_player_pane_g

0x6fe1,	// (0x00060112) list_single_idle_plugin_player_pane_t1

0x6fef,	// (0x00060120) list_single_idle_plugin_player_pane_t2

0x6ffd,	// (0x0006012e) list_single_idle_plugin_player_pane_t3

0x700b,	// (0x0006013c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd67,	// (0x00068e98) list_single_idle_plugin_player_pane_t

0x7019,	// (0x0006014a) wait_bar_pane_cp15

0x7021,	// (0x00060152) grid_ai_notification_pane

0x46f4,	// (0x0005d825) list_single_idle_plugin_notification_pane_g1

0xd689,	// (0x000667ba) cell_ai_notification_pane_ParamLimits

0xd689,	// (0x000667ba) cell_ai_notification_pane

0x7037,	// (0x00060168) cell_ai_notification_pane_g1

0x703f,	// (0x00060170) cell_ai_notification_pane_t1

0xd696,	// (0x000667c7) tb_ext_find_button_pane

0xd69e,	// (0x000667cf) tb_ext_find_pane_g1

0xd6a6,	// (0x000667d7) tb_ext_find_pane_t1

0xde48,	// (0x00066f79) tb_ext_find_button_pane_g1

0x706b,	// (0x0006019c) tb_ext_find_button_pane_g2

0x0001,

0xfd70,	// (0x00068ea1) tb_ext_find_button_pane_g

0xd4a3,	// (0x000665d4) main_idle_act4_pane_t1_ParamLimits

0xd4bb,	// (0x000665ec) main_idle_act4_pane_t2_ParamLimits

0xfd2e,	// (0x00068e5f) main_idle_act4_pane_t_ParamLimits

0xd4ef,	// (0x00066620) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd506,	// (0x00066637) sat_plugin_idle_act4_pane_ParamLimits

0xd506,	// (0x00066637) sat_plugin_idle_act4_pane

0xd6b4,	// (0x000667e5) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd6b4,	// (0x000667e5) sat_plugin_idle_act4_pane_t1

0xd6cc,	// (0x000667fd) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd6cc,	// (0x000667fd) sat_plugin_idle_act4_pane_t2

0xd6e4,	// (0x00066815) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd6e4,	// (0x00066815) sat_plugin_idle_act4_pane_t3

0xd6fc,	// (0x0006682d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd6fc,	// (0x0006682d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd75,	// (0x00068ea6) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd75,	// (0x00068ea6) sat_plugin_idle_act4_pane_t

0xeed8,	// (0x00068009) popup_battery_window_ParamLimits

0xeed8,	// (0x00068009) popup_battery_window

0x8a6a,	// (0x00061b9b) bg_popup_sub_pane_cp25_ParamLimits

0x8a6a,	// (0x00061b9b) bg_popup_sub_pane_cp25

0x70c0,	// (0x000601f1) popup_battery_window_g1_ParamLimits

0x70c0,	// (0x000601f1) popup_battery_window_g1

0x70cc,	// (0x000601fd) popup_battery_window_t1_ParamLimits

0x70cc,	// (0x000601fd) popup_battery_window_t1

0x70de,	// (0x0006020f) popup_battery_window_t2_ParamLimits

0x70de,	// (0x0006020f) popup_battery_window_t2

0x0001,

0xfd7e,	// (0x00068eaf) popup_battery_window_t_ParamLimits

0xfd7e,	// (0x00068eaf) popup_battery_window_t

0xab65,	// (0x00063c96) midp_canvas_pane_ParamLimits

0xabc1,	// (0x00063cf2) midp_keypad_pane_ParamLimits

0xabc1,	// (0x00063cf2) midp_keypad_pane

0x25cd,	// (0x0005b6fe) main_midp_pane_ParamLimits

0x4e6a,	// (0x0005df9b) signal_pane_g2_cp_ParamLimits

0xd714,	// (0x00066845) aid_size_cell_midp_keypad_ParamLimits

0xd714,	// (0x00066845) aid_size_cell_midp_keypad

0xd732,	// (0x00066863) midp_keyp_game_grid_pane_ParamLimits

0xd732,	// (0x00066863) midp_keyp_game_grid_pane

0xd759,	// (0x0006688a) midp_keyp_rocker_pane_ParamLimits

0xd759,	// (0x0006688a) midp_keyp_rocker_pane

0xd7a8,	// (0x000668d9) midp_keyp_sk_left_pane_ParamLimits

0xd7a8,	// (0x000668d9) midp_keyp_sk_left_pane

0xd7fe,	// (0x0006692f) midp_keyp_sk_right_pane_ParamLimits

0xd7fe,	// (0x0006692f) midp_keyp_sk_right_pane

0x88c7,	// (0x000619f8) bg_button_pane_cp03

0xd854,	// (0x00066985) midp_keyp_sk_left_pane_g1

0x88c7,	// (0x000619f8) bg_button_pane_cp04

0xd854,	// (0x00066985) midp_keyp_sk_right_pane_g1

0x5357,	// (0x0005e488) midp_keyp_rocker_pane_g1

0xd85c,	// (0x0006698d) keyp_game_cell_pane_ParamLimits

0xd85c,	// (0x0006698d) keyp_game_cell_pane

0x88c7,	// (0x000619f8) bg_button_pane_cp02

0xd882,	// (0x000669b3) keyp_game_cell_pane_g1

0x9cdd,	// (0x00062e0e) popup_fep_vkb2_window_ParamLimits

0x9cdd,	// (0x00062e0e) popup_fep_vkb2_window

0xb99a,	// (0x00064acb) aid_size_cell_vkb2_ParamLimits

0xb99a,	// (0x00064acb) aid_size_cell_vkb2

0xb9c6,	// (0x00064af7) popup_fep_vkb2_window_g1_ParamLimits

0xb9c6,	// (0x00064af7) popup_fep_vkb2_window_g1

0xba16,	// (0x00064b47) vkb2_area_bottom_pane_ParamLimits

0xba16,	// (0x00064b47) vkb2_area_bottom_pane

0xba72,	// (0x00064ba3) vkb2_area_keypad_pane_ParamLimits

0xba72,	// (0x00064ba3) vkb2_area_keypad_pane

0xbac0,	// (0x00064bf1) vkb2_area_top_pane_ParamLimits

0xbac0,	// (0x00064bf1) vkb2_area_top_pane

0xbb4d,	// (0x00064c7e) vkb2_top_entry_pane_ParamLimits

0xbb4d,	// (0x00064c7e) vkb2_top_entry_pane

0xbb7a,	// (0x00064cab) vkb2_top_grid_left_pane_ParamLimits

0xbb7a,	// (0x00064cab) vkb2_top_grid_left_pane

0xbb9b,	// (0x00064ccc) vkb2_top_grid_right_pane_ParamLimits

0xbb9b,	// (0x00064ccc) vkb2_top_grid_right_pane

0x1549,	// (0x0005a67a) vkb2_cell_keypad_pane_ParamLimits

0x1549,	// (0x0005a67a) vkb2_cell_keypad_pane

0xbbe3,	// (0x00064d14) vkb2_area_bottom_grid_pane_ParamLimits

0xbbe3,	// (0x00064d14) vkb2_area_bottom_grid_pane

0xbc0d,	// (0x00064d3e) vkb2_area_bottom_pane_g1_ParamLimits

0xbc0d,	// (0x00064d3e) vkb2_area_bottom_pane_g1

0xbc33,	// (0x00064d64) vkb2_area_bottom_pane_g2_ParamLimits

0xbc33,	// (0x00064d64) vkb2_area_bottom_pane_g2

0xbc64,	// (0x00064d95) vkb2_area_bottom_pane_g3_ParamLimits

0xbc64,	// (0x00064d95) vkb2_area_bottom_pane_g3

0x0002,

0xfd83,	// (0x00068eb4) vkb2_area_bottom_pane_g_ParamLimits

0xfd83,	// (0x00068eb4) vkb2_area_bottom_pane_g

0x16f3,	// (0x0005a824) vkb2_top_cell_left_pane_ParamLimits

0x16f3,	// (0x0005a824) vkb2_top_cell_left_pane

0xd88b,	// (0x000669bc) vkb2_top_entry_pane_g1_ParamLimits

0xd88b,	// (0x000669bc) vkb2_top_entry_pane_g1

0xd899,	// (0x000669ca) vkb2_top_entry_pane_t1_ParamLimits

0xd899,	// (0x000669ca) vkb2_top_entry_pane_t1

0x7288,	// (0x000603b9) vkb2_top_entry_pane_t2_ParamLimits

0x7288,	// (0x000603b9) vkb2_top_entry_pane_t2

0x72db,	// (0x0006040c) vkb2_top_entry_pane_t3_ParamLimits

0x72db,	// (0x0006040c) vkb2_top_entry_pane_t3

0x0002,

0xfd8a,	// (0x00068ebb) vkb2_top_entry_pane_t_ParamLimits

0xfd8a,	// (0x00068ebb) vkb2_top_entry_pane_t

0xbcce,	// (0x00064dff) vkb2_top_grid_right_pane_g1_ParamLimits

0xbcce,	// (0x00064dff) vkb2_top_grid_right_pane_g1

0x1756,	// (0x0005a887) vkb2_top_grid_right_pane_g2_ParamLimits

0x1756,	// (0x0005a887) vkb2_top_grid_right_pane_g2

0x176e,	// (0x0005a89f) vkb2_top_grid_right_pane_g3_ParamLimits

0x176e,	// (0x0005a89f) vkb2_top_grid_right_pane_g3

0xbce4,	// (0x00064e15) vkb2_top_grid_right_pane_g4_ParamLimits

0xbce4,	// (0x00064e15) vkb2_top_grid_right_pane_g4

0x0003,

0xfd91,	// (0x00068ec2) vkb2_top_grid_right_pane_g_ParamLimits

0xfd91,	// (0x00068ec2) vkb2_top_grid_right_pane_g

0x179c,	// (0x0005a8cd) vkb2_top_cell_left_pane_g1

0x17b3,	// (0x0005a8e4) vkb2_cell_keypad_pane_g1_ParamLimits

0x17b3,	// (0x0005a8e4) vkb2_cell_keypad_pane_g1

0x72ff,	// (0x00060430) vkb2_cell_keypad_pane_t1_ParamLimits

0x72ff,	// (0x00060430) vkb2_cell_keypad_pane_t1

0x17c1,	// (0x0005a8f2) vkb2_cell_bottom_grid_pane_ParamLimits

0x17c1,	// (0x0005a8f2) vkb2_cell_bottom_grid_pane

0x17fa,	// (0x0005a92b) vkb2_cell_bottom_grid_pane_g1

0xd537,	// (0x00066668) aid_call2_pane_cp02

0xd53f,	// (0x00066670) aid_call_pane_cp02

0xd547,	// (0x00066678) clock_digital_number_pane_cp10

0xd54f,	// (0x00066680) clock_digital_number_pane_cp11

0xd557,	// (0x00066688) clock_digital_number_pane_cp12

0xd55f,	// (0x00066690) clock_digital_number_pane_cp13

0xd567,	// (0x00066698) clock_digital_separator_pane_cp10

0xde48,	// (0x00066f79) popup_clock_digital_analogue_window_cp2_g1

0xde48,	// (0x00066f79) popup_clock_digital_analogue_window_cp2_g2

0xd56f,	// (0x000666a0) popup_clock_digital_analogue_window_cp2_g3

0xde48,	// (0x00066f79) popup_clock_digital_analogue_window_cp2_g4

0xd56f,	// (0x000666a0) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd46,	// (0x00068e77) popup_clock_digital_analogue_window_cp2_g

0xd577,	// (0x000666a8) popup_clock_digital_analogue_window_cp2_t1

0xd585,	// (0x000666b6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd51,	// (0x00068e82) popup_clock_digital_analogue_window_cp2_t

0x5357,	// (0x0005e488) clock_digital_number_pane_cp10_g1

0x5357,	// (0x0005e488) clock_digital_number_pane_cp10_g2

0x0001,

0xfb2d,	// (0x00068c5e) clock_digital_number_pane_cp10_g

0x5357,	// (0x0005e488) clock_digital_separator_pane_cp10_g1

0x5357,	// (0x0005e488) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb2d,	// (0x00068c5e) clock_digital_separator_pane_cp10_g

0x6d09,	// (0x0005fe3a) uniindi_top_pane_g3

0x6d1a,	// (0x0005fe4b) uniindi_top_pane_g4

0x15d4,	// (0x0005a705) vkb2_row_keypad_pane_ParamLimits

0x15d4,	// (0x0005a705) vkb2_row_keypad_pane

0x1816,	// (0x0005a947) vkb2_cell_t_keypad_pane_ParamLimits

0x1816,	// (0x0005a947) vkb2_cell_t_keypad_pane

0x1826,	// (0x0005a957) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1826,	// (0x0005a957) vkb2_cell_t_keypad_pane_cp08

0x183b,	// (0x0005a96c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x183b,	// (0x0005a96c) vkb2_cell_t_keypad_pane_cp09

0x184f,	// (0x0005a980) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x184f,	// (0x0005a980) vkb2_cell_t_keypad_pane_cp01

0x1860,	// (0x0005a991) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1860,	// (0x0005a991) vkb2_cell_t_keypad_pane_cp02

0x1871,	// (0x0005a9a2) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1871,	// (0x0005a9a2) vkb2_cell_t_keypad_pane_cp03

0x1882,	// (0x0005a9b3) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1882,	// (0x0005a9b3) vkb2_cell_t_keypad_pane_cp04

0x1893,	// (0x0005a9c4) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1893,	// (0x0005a9c4) vkb2_cell_t_keypad_pane_cp05

0x18a4,	// (0x0005a9d5) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x18a4,	// (0x0005a9d5) vkb2_cell_t_keypad_pane_cp06

0x18b7,	// (0x0005a9e8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x18b7,	// (0x0005a9e8) vkb2_cell_t_keypad_pane_cp07

0x18cc,	// (0x0005a9fd) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x18cc,	// (0x0005a9fd) vkb2_cell_t_keypad_pane_cp10

0x0f67,	// (0x0005a098) vkb2_cell_t_keypad_pane_g1

0x7316,	// (0x00060447) vkb2_cell_t_keypad_pane_t1

0xee13,	// (0x00067f44) popup_grid_graphic2_window

0xd8d2,	// (0x00066a03) aid_size_cell_graphic2_ParamLimits

0xd8d2,	// (0x00066a03) aid_size_cell_graphic2

0xd910,	// (0x00066a41) bg_popup_window_pane_cp21_ParamLimits

0xd910,	// (0x00066a41) bg_popup_window_pane_cp21

0xd91e,	// (0x00066a4f) graphic2_pages_pane_ParamLimits

0xd91e,	// (0x00066a4f) graphic2_pages_pane

0xd976,	// (0x00066aa7) grid_graphic2_control_pane_ParamLimits

0xd976,	// (0x00066aa7) grid_graphic2_control_pane

0xd9be,	// (0x00066aef) grid_graphic2_pane_ParamLimits

0xd9be,	// (0x00066aef) grid_graphic2_pane

0xda49,	// (0x00066b7a) cell_graphic2_pane

0xee13,	// (0x00067f44) main_comp_mode_pane

0x6576,	// (0x0005f6a7) list_ai3_gene_pane_ParamLimits

0xd277,	// (0x000663a8) bg_popup_window_pane_cp19_ParamLimits

0x6948,	// (0x0005fa79) bg_touch_area_indi_pane_ParamLimits

0x6948,	// (0x0005fa79) bg_touch_area_indi_pane

0x695e,	// (0x0005fa8f) bg_touch_area_indi_pane_cp01_ParamLimits

0x695e,	// (0x0005fa8f) bg_touch_area_indi_pane_cp01

0x6974,	// (0x0005faa5) bg_touch_area_indi_pane_cp02_ParamLimits

0x6974,	// (0x0005faa5) bg_touch_area_indi_pane_cp02

0x698e,	// (0x0005fabf) bg_touch_area_indi_pane_cp03_ParamLimits

0x698e,	// (0x0005fabf) bg_touch_area_indi_pane_cp03

0x69a8,	// (0x0005fad9) popup_slider_window_g1_ParamLimits

0x69c4,	// (0x0005faf5) popup_slider_window_g2_ParamLimits

0x69e0,	// (0x0005fb11) popup_slider_window_g3_ParamLimits

0xfcdb,	// (0x00068e0c) popup_slider_window_g_ParamLimits

0x6a46,	// (0x0005fb77) popup_slider_window_t1_ParamLimits

0x6aba,	// (0x0005fbeb) small_volume_slider_vertical_pane_ParamLimits

0xda49,	// (0x00066b7a) cell_graphic2_pane_ParamLimits

0xdaab,	// (0x00066bdc) bg_button_pane_cp10_ParamLimits

0xdaab,	// (0x00066bdc) bg_button_pane_cp10

0xdabe,	// (0x00066bef) bg_button_pane_cp11_ParamLimits

0xdabe,	// (0x00066bef) bg_button_pane_cp11

0xdad1,	// (0x00066c02) graphic2_pages_pane_g1_ParamLimits

0xdad1,	// (0x00066c02) graphic2_pages_pane_g1

0xdaec,	// (0x00066c1d) graphic2_pages_pane_g2_ParamLimits

0xdaec,	// (0x00066c1d) graphic2_pages_pane_g2

0x0001,

0xfd9f,	// (0x00068ed0) graphic2_pages_pane_g_ParamLimits

0xfd9f,	// (0x00068ed0) graphic2_pages_pane_g

0xdb04,	// (0x00066c35) graphic2_pages_pane_t1_ParamLimits

0xdb04,	// (0x00066c35) graphic2_pages_pane_t1

0xe4e3,	// (0x00067614) cell_graphic2_control_pane_ParamLimits

0xe4e3,	// (0x00067614) cell_graphic2_control_pane

0xe517,	// (0x00067648) cell_graphic2_pane_g1_ParamLimits

0xe517,	// (0x00067648) cell_graphic2_pane_g1

0xdb1c,	// (0x00066c4d) cell_graphic2_pane_g2_ParamLimits

0xdb1c,	// (0x00066c4d) cell_graphic2_pane_g2

0xe33d,	// (0x0006746e) cell_graphic2_pane_g3_ParamLimits

0xe33d,	// (0x0006746e) cell_graphic2_pane_g3

0xdb29,	// (0x00066c5a) cell_graphic2_pane_g4_ParamLimits

0xdb29,	// (0x00066c5a) cell_graphic2_pane_g4

0xe524,	// (0x00067655) cell_graphic2_pane_g5_ParamLimits

0xe524,	// (0x00067655) cell_graphic2_pane_g5

0x0004,

0xfda4,	// (0x00068ed5) cell_graphic2_pane_g_ParamLimits

0xfda4,	// (0x00068ed5) cell_graphic2_pane_g

0xe540,	// (0x00067671) cell_graphic2_pane_t1_ParamLimits

0xe540,	// (0x00067671) cell_graphic2_pane_t1

0x3812,	// (0x0005c943) grid_highlight_pane_cp11_ParamLimits

0x3812,	// (0x0005c943) grid_highlight_pane_cp11

0x8a6a,	// (0x00061b9b) bg_button_pane_cp05

0xe589,	// (0x000676ba) cell_graphic2_control_pane_g1

0x5357,	// (0x0005e488) bg_touch_area_indi_pane_g1

0x75f9,	// (0x0006072a) aid_cmod_rocker_key_size

0x7603,	// (0x00060734) aid_cmode_itu_key_size

0x760d,	// (0x0006073e) main_cmode_video_pane

0x7617,	// (0x00060748) main_comp_mode_itu_pane

0x7623,	// (0x00060754) main_comp_mode_rocker_pane

0x762f,	// (0x00060760) cell_cmode_rocker_pane_ParamLimits

0x762f,	// (0x00060760) cell_cmode_rocker_pane

0x7643,	// (0x00060774) cell_cmode_itu_pane_ParamLimits

0x7643,	// (0x00060774) cell_cmode_itu_pane

0x8f79,	// (0x000620aa) bg_button_pane_cp06_ParamLimits

0x8f79,	// (0x000620aa) bg_button_pane_cp06

0x55d2,	// (0x0005e703) cell_cmode_rocker_pane_g1_ParamLimits

0x55d2,	// (0x0005e703) cell_cmode_rocker_pane_g1

0x6b61,	// (0x0005fc92) cell_cmode_rocker_pane_g2_ParamLimits

0x6b61,	// (0x0005fc92) cell_cmode_rocker_pane_g2

0x0001,

0xfdb4,	// (0x00068ee5) cell_cmode_rocker_pane_g_ParamLimits

0xfdb4,	// (0x00068ee5) cell_cmode_rocker_pane_g

0x88c7,	// (0x000619f8) bg_button_pane_cp07

0x765a,	// (0x0006078b) cell_cmode_itu_pane_g1

0x7663,	// (0x00060794) cell_cmode_itu_pane_t1

0x7671,	// (0x000607a2) cell_cmode_itu_pane_t2

0x0001,

0xfdb9,	// (0x00068eea) cell_cmode_itu_pane_t

0x6d8e,	// (0x0005febf) aid_touch_ctrl_left

0x6d96,	// (0x0005fec7) aid_touch_ctrl_right

0x88c7,	// (0x000619f8) compa_mode_pane

0xe5b1,	// (0x000676e2) aid_cmod_rocker_key_size_cp

0xe5bb,	// (0x000676ec) aid_cmode_itu_key_size_cp

0x7693,	// (0x000607c4) compa_mode_pane_g1

0x769b,	// (0x000607cc) compa_mode_pane_g2

0x76a3,	// (0x000607d4) compa_mode_pane_g3

0x0002,

0xfdbe,	// (0x00068eef) compa_mode_pane_g

0xe5c5,	// (0x000676f6) main_comp_mode_itu_pane_cp

0xe5cd,	// (0x000676fe) main_comp_mode_rocker_pane_cp

0xe5d5,	// (0x00067706) cell_cmode_itu_pane_cp_ParamLimits

0xe5d5,	// (0x00067706) cell_cmode_itu_pane_cp

0xe5ea,	// (0x0006771b) cell_cmode_rocker_pane_cp_ParamLimits

0xe5ea,	// (0x0006771b) cell_cmode_rocker_pane_cp

0x8f79,	// (0x000620aa) bg_button_pane_cp06_cp_ParamLimits

0x8f79,	// (0x000620aa) bg_button_pane_cp06_cp

0x55d2,	// (0x0005e703) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x55d2,	// (0x0005e703) cell_cmode_rocker_pane_g1_cp

0x5357,	// (0x0005e488) cell_cmode_rocker_pane_g2_cp

0x88c7,	// (0x000619f8) bg_button_pane_cp07_cp

0xe5fc,	// (0x0006772d) cell_cmode_itu_pane_g1_cp

0xe605,	// (0x00067736) cell_cmode_itu_pane_t1_cp

0xe605,	// (0x00067736) cell_cmode_itu_pane_t2_cp

0xc80a,	// (0x0006593b) settings_code_pane_cp2

0x8929,	// (0x00061a5a) bg_popup_window_pane_cp3_ParamLimits

0x8c7e,	// (0x00061daf) heading_pane_cp3_ParamLimits

0x8c8d,	// (0x00061dbe) listscroll_popup_graphic_pane_ParamLimits

0x0cfa,	// (0x00059e2b) fep_hwr_aid_pane_ParamLimits

0x128c,	// (0x0005a3bd) aid_touch_sctrl_top_ParamLimits

0x12a7,	// (0x0005a3d8) sctrl_sk_top_pane_g1_ParamLimits

0x0f67,	// (0x0005a098) sctrl_sk_top_pane_g2_ParamLimits

0xfcf4,	// (0x00068e25) sctrl_sk_top_pane_g_ParamLimits

0x12b4,	// (0x0005a3e5) sctrl_sk_top_pane_t1_ParamLimits

0x128c,	// (0x0005a3bd) aid_touch_sctrl_bottom_ParamLimits

0x12b4,	// (0x0005a3e5) sctrl_sk_bottom_pane_t1_ParamLimits

0x6cd3,	// (0x0005fe04) aid_area_touch_clock

0xbb0c,	// (0x00064c3d) aid_vkb2_area_top_pane_cell_ParamLimits

0xbb0c,	// (0x00064c3d) aid_vkb2_area_top_pane_cell

0xbbbc,	// (0x00064ced) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbbbc,	// (0x00064ced) aid_vkb2_area_bottom_pane_cell

0x7240,	// (0x00060371) popup_char_count_window

0x76f9,	// (0x0006082a) popup_char_count_window_g1

0x7702,	// (0x00060833) popup_char_count_window_g2

0x770b,	// (0x0006083c) popup_char_count_window_g3

0x0002,

0xfdc5,	// (0x00068ef6) popup_char_count_window_g

0x7714,	// (0x00060845) popup_char_count_window_t1

0x135d,	// (0x0005a48e) popup_fep_char_preview_window_ParamLimits

0x135d,	// (0x0005a48e) popup_fep_char_preview_window

0xbb2c,	// (0x00064c5d) vkb2_top_candi_pane_ParamLimits

0xbb2c,	// (0x00064c5d) vkb2_top_candi_pane

0xe613,	// (0x00067744) cell_vkb2_top_candi_pane_ParamLimits

0xe613,	// (0x00067744) cell_vkb2_top_candi_pane

0x18e1,	// (0x0005aa12) bg_popup_fep_char_preview_window_ParamLimits

0x18e1,	// (0x0005aa12) bg_popup_fep_char_preview_window

0x18ef,	// (0x0005aa20) popup_fep_char_preview_window_t1_ParamLimits

0x18ef,	// (0x0005aa20) popup_fep_char_preview_window_t1

0x7770,	// (0x000608a1) bg_popup_fep_char_preview_window_g1

0x7778,	// (0x000608a9) bg_popup_fep_char_preview_window_g2

0x7780,	// (0x000608b1) bg_popup_fep_char_preview_window_g3

0x7788,	// (0x000608b9) bg_popup_fep_char_preview_window_g4

0x7790,	// (0x000608c1) bg_popup_fep_char_preview_window_g5

0x7798,	// (0x000608c9) bg_popup_fep_char_preview_window_g6

0x77a0,	// (0x000608d1) bg_popup_fep_char_preview_window_g7

0x77a8,	// (0x000608d9) bg_popup_fep_char_preview_window_g8

0x77b0,	// (0x000608e1) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdcc,	// (0x00068efd) bg_popup_fep_char_preview_window_g

0x0f67,	// (0x0005a098) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0f67,	// (0x0005a098) cell_vkb2_top_candi_pane_g1

0x0f75,	// (0x0005a0a6) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0f75,	// (0x0005a0a6) cell_vkb2_top_candi_pane_g2

0x72ba,	// (0x000603eb) cell_vkb2_top_candi_pane_g3_ParamLimits

0x72ba,	// (0x000603eb) cell_vkb2_top_candi_pane_g3

0x1931,	// (0x0005aa62) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1931,	// (0x0005aa62) cell_vkb2_top_candi_pane_g4

0x5af1,	// (0x0005ec22) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5af1,	// (0x0005ec22) cell_vkb2_top_candi_pane_g5

0x1952,	// (0x0005aa83) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1952,	// (0x0005aa83) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde1,	// (0x00068f12) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde1,	// (0x00068f12) cell_vkb2_top_candi_pane_g

0x1960,	// (0x0005aa91) cell_vkb2_top_candi_pane_t1

0x0aa4,	// (0x00059bd5) aid_size_touch_slider_mark_ParamLimits

0x0aa4,	// (0x00059bd5) aid_size_touch_slider_mark

0xd95a,	// (0x00066a8b) grid_graphic2_catg_pane_ParamLimits

0xd95a,	// (0x00066a8b) grid_graphic2_catg_pane

0xda18,	// (0x00066b49) popup_grid_graphic2_window_t1_ParamLimits

0xda18,	// (0x00066b49) popup_grid_graphic2_window_t1

0xda2e,	// (0x00066b5f) popup_grid_graphic2_window_t2_ParamLimits

0xda2e,	// (0x00066b5f) popup_grid_graphic2_window_t2

0x0001,

0xfd9a,	// (0x00068ecb) popup_grid_graphic2_window_t_ParamLimits

0xfd9a,	// (0x00068ecb) popup_grid_graphic2_window_t

0x8a6a,	// (0x00061b9b) bg_button_pane_cp05_ParamLimits

0xe589,	// (0x000676ba) cell_graphic2_control_pane_g1_ParamLimits

0xe677,	// (0x000677a8) cell_graphic2_catg_pane_ParamLimits

0xe677,	// (0x000677a8) cell_graphic2_catg_pane

0x88c7,	// (0x000619f8) bg_button_pane_cp12

0xe689,	// (0x000677ba) cell_graphic2_catg_pane_g1

0x6c9f,	// (0x0005fdd0) cell_tb_ext_pane_t1_ParamLimits

0x1713,	// (0x0005a844) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1713,	// (0x0005a844) vkb2_top_cell_right_narrow_pane

0x172b,	// (0x0005a85c) vkb2_top_cell_right_wide_pane_ParamLimits

0x172b,	// (0x0005a85c) vkb2_top_cell_right_wide_pane

0x0cec,	// (0x00059e1d) bg_vkb2_func_pane_ParamLimits

0x0cec,	// (0x00059e1d) bg_vkb2_func_pane

0x179c,	// (0x0005a8cd) vkb2_top_cell_left_pane_g1_ParamLimits

0x0cec,	// (0x00059e1d) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0cec,	// (0x00059e1d) bg_vkb2_fuc_pane_cp03

0x17fa,	// (0x0005a92b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2b25,	// (0x0005bc56) bg_vkb2_func_pane_g1

0x2b2d,	// (0x0005bc5e) bg_vkb2_func_pane_g2

0x2b3d,	// (0x0005bc6e) bg_vkb2_func_pane_g3

0x2b35,	// (0x0005bc66) bg_vkb2_func_pane_g4

0x2b45,	// (0x0005bc76) bg_vkb2_func_pane_g5

0x2b4d,	// (0x0005bc7e) bg_vkb2_func_pane_g6

0x2b55,	// (0x0005bc86) bg_vkb2_func_pane_g7

0x2b5d,	// (0x0005bc8e) bg_vkb2_func_pane_g8

0x2b1d,	// (0x0005bc4e) bg_vkb2_func_pane_g9

0x0008,

0xfdee,	// (0x00068f1f) bg_vkb2_func_pane_g

0x0cec,	// (0x00059e1d) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0cec,	// (0x00059e1d) bg_vkb2_fuc_pane_cp01

0x179c,	// (0x0005a8cd) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x179c,	// (0x0005a8cd) vkb2_top_cell_right_wide_pane_g1

0x0cec,	// (0x00059e1d) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0cec,	// (0x00059e1d) bg_vkb2_fuc_pane_cp02

0x197e,	// (0x0005aaaf) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x197e,	// (0x0005aaaf) vkb2_top_cell_right_narrow_pane_g1

0xd1b9,	// (0x000662ea) aid_touch_area_decrease_ParamLimits

0xd1b9,	// (0x000662ea) aid_touch_area_decrease

0xd1f3,	// (0x00066324) aid_touch_area_increase_ParamLimits

0xd1f3,	// (0x00066324) aid_touch_area_increase

0xd21b,	// (0x0006634c) aid_touch_area_mute_ParamLimits

0xd21b,	// (0x0006634c) aid_touch_area_mute

0xd243,	// (0x00066374) aid_touch_area_slider_ParamLimits

0xd243,	// (0x00066374) aid_touch_area_slider

0xd283,	// (0x000663b4) popup_slider_window_g4_ParamLimits

0xd283,	// (0x000663b4) popup_slider_window_g4

0xd2ab,	// (0x000663dc) popup_slider_window_g5_ParamLimits

0xd2ab,	// (0x000663dc) popup_slider_window_g5

0xd2df,	// (0x00066410) popup_slider_window_g6_ParamLimits

0xd2df,	// (0x00066410) popup_slider_window_g6

0x6a74,	// (0x0005fba5) popup_slider_window_t2_ParamLimits

0x6a74,	// (0x0005fba5) popup_slider_window_t2

0x0001,

0xfce8,	// (0x00068e19) popup_slider_window_t_ParamLimits

0xfce8,	// (0x00068e19) popup_slider_window_t

0xd2fb,	// (0x0006642c) slider_pane_ParamLimits

0xd2fb,	// (0x0006642c) slider_pane

0x77d3,	// (0x00060904) slider_pane_g1_ParamLimits

0x77d3,	// (0x00060904) slider_pane_g1

0x77e7,	// (0x00060918) slider_pane_g2_ParamLimits

0x77e7,	// (0x00060918) slider_pane_g2

0x77fd,	// (0x0006092e) slider_pane_g3_ParamLimits

0x77fd,	// (0x0006092e) slider_pane_g3

0x0003,

0xfe01,	// (0x00068f32) slider_pane_g_ParamLimits

0xfe01,	// (0x00068f32) slider_pane_g

0xb403,	// (0x00064534) popup_tb_float_extension_window_ParamLimits

0xb403,	// (0x00064534) popup_tb_float_extension_window

0x7829,	// (0x0006095a) aid_size_cell_tb_float_ext

0x88c7,	// (0x000619f8) bg_popup_sub_window_cp28

0x7835,	// (0x00060966) grid_tb_float_ext_pane

0x7841,	// (0x00060972) cell_tb_float_ext_pane_ParamLimits

0x7841,	// (0x00060972) cell_tb_float_ext_pane

0x785d,	// (0x0006098e) cell_tb_float_ext_pane_g1

0x7866,	// (0x00060997) grid_highlight_pane_cp12

0xb74f,	// (0x00064880) cell_last_hwr_side_pane_ParamLimits

0xb74f,	// (0x00064880) cell_last_hwr_side_pane

0x5357,	// (0x0005e488) cell_last_hwr_side_pane_g1

0x786f,	// (0x000609a0) cell_last_hwr_side_pane_g2

0x0001,

0xfe0a,	// (0x00068f3b) cell_last_hwr_side_pane_g

0xbc99,	// (0x00064dca) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbc99,	// (0x00064dca) vkb2_area_bottom_space_btn_pane

0x0f67,	// (0x0005a098) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7316,	// (0x00060447) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1960,	// (0x0005aa91) cell_vkb2_top_candi_pane_t1_ParamLimits

0x199a,	// (0x0005aacb) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x199a,	// (0x0005aacb) vkb2_area_bottom_space_btn_pane_g1

0x19d4,	// (0x0005ab05) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x19d4,	// (0x0005ab05) vkb2_area_bottom_space_btn_pane_g2

0x1a0a,	// (0x0005ab3b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1a0a,	// (0x0005ab3b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0f,	// (0x00068f40) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0f,	// (0x00068f40) vkb2_area_bottom_space_btn_pane_g

0x0db1,	// (0x00059ee2) cel_fep_hwr_func_pane_ParamLimits

0x0db1,	// (0x00059ee2) cel_fep_hwr_func_pane

0xb724,	// (0x00064855) cell_hwr_side_button_pane_ParamLimits

0xb724,	// (0x00064855) cell_hwr_side_button_pane

0x6cd3,	// (0x0005fe04) aid_area_touch_clock_ParamLimits

0x8a6a,	// (0x00061b9b) bg_uniindi_top_pane_ParamLimits

0x6ce7,	// (0x0005fe18) uniindi_top_pane_g1_ParamLimits

0x6cfd,	// (0x0005fe2e) uniindi_top_pane_g2_ParamLimits

0x6d09,	// (0x0005fe3a) uniindi_top_pane_g3_ParamLimits

0x6d1a,	// (0x0005fe4b) uniindi_top_pane_g4_ParamLimits

0xfd20,	// (0x00068e51) uniindi_top_pane_g_ParamLimits

0x6d27,	// (0x0005fe58) uniindi_top_pane_t1_ParamLimits

0x8a6a,	// (0x00061b9b) bg_vkb2_func_pane_cp01_ParamLimits

0x8a6a,	// (0x00061b9b) bg_vkb2_func_pane_cp01

0x7878,	// (0x000609a9) cel_fep_hwr_func_pane_g1_ParamLimits

0x7878,	// (0x000609a9) cel_fep_hwr_func_pane_g1

0x8a6a,	// (0x00061b9b) bg_vkb2_func_pane_cp02_ParamLimits

0x8a6a,	// (0x00061b9b) bg_vkb2_func_pane_cp02

0x7878,	// (0x000609a9) cell_hwr_side_button_pane_g1_ParamLimits

0x7878,	// (0x000609a9) cell_hwr_side_button_pane_g1

0x2988,	// (0x0005bab9) status_pane_g4_ParamLimits

0x2988,	// (0x0005bab9) status_pane_g4

0x29a2,	// (0x0005bad3) status_pane_t1

0x510a,	// (0x0005e23b) form2_midp_gauge_slider_cont_pane

0x5112,	// (0x0005e243) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcaf9,	// (0x00065c2a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcb0b,	// (0x00065c3c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae0,	// (0x00068c11) form2_midp_gauge_slider_pane_t_ParamLimits

0x5148,	// (0x0005e279) form2_midp_slider_pane_ParamLimits

0x1325,	// (0x0005a456) aid_size_cell_func_vkb2_ParamLimits

0x1325,	// (0x0005a456) aid_size_cell_func_vkb2

0x7815,	// (0x00060946) slider_pane_g4_ParamLimits

0x7815,	// (0x00060946) slider_pane_g4

0xbd02,	// (0x00064e33) form2_midp_gauge_slider_pane_t2_cp01

0xbd10,	// (0x00064e41) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbd10,	// (0x00064e41) form2_midp_gauge_slider_pane_t3_cp01

0x1a7f,	// (0x0005abb0) form2_midp_slider_pane_cp01

0x88c7,	// (0x000619f8) navi_smil_pane

0x78b1,	// (0x000609e2) navi_smil_pane_g1

0x78b9,	// (0x000609ea) navi_smil_pane_t1

0x7886,	// (0x000609b7) form2_midp_slider_pane_g1

0x788f,	// (0x000609c0) form2_midp_slider_pane_g2

0x7897,	// (0x000609c8) form2_midp_slider_pane_g3

0x7886,	// (0x000609b7) form2_midp_slider_pane_g4

0xe692,	// (0x000677c3) form2_midp_slider_pane_g5

0x0004,

0xfe18,	// (0x00068f49) form2_midp_slider_pane_g

0x1a44,	// (0x0005ab75) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1a44,	// (0x0005ab75) vkb2_area_bottom_space_btn_pane_g4

0xc132,	// (0x00065263) lc0_navi_pane_ParamLimits

0xc132,	// (0x00065263) lc0_navi_pane

0xc1a2,	// (0x000652d3) lc0_stat_indi_pane_ParamLimits

0xc1a2,	// (0x000652d3) lc0_stat_indi_pane

0xc1b7,	// (0x000652e8) ls0_title_pane_ParamLimits

0xc1b7,	// (0x000652e8) ls0_title_pane

0x8f79,	// (0x000620aa) bg_popup_sub_pane_cp14_ParamLimits

0x6cba,	// (0x0005fdeb) list_uniindi_pane_ParamLimits

0x6cc6,	// (0x0005fdf7) uniindi_top_pane_ParamLimits

0x6d66,	// (0x0005fe97) list_single_uniindi_pane_g1_ParamLimits

0x6d79,	// (0x0005feaa) list_single_uniindi_pane_t1_ParamLimits

0xbd2d,	// (0x00064e5e) lc0_stat_clock_pane_ParamLimits

0xbd2d,	// (0x00064e5e) lc0_stat_clock_pane

0xe69b,	// (0x000677cc) lc0_stat_indi_pane_g1_ParamLimits

0xe69b,	// (0x000677cc) lc0_stat_indi_pane_g1

0xe6a8,	// (0x000677d9) lc0_stat_indi_pane_g2_ParamLimits

0xe6a8,	// (0x000677d9) lc0_stat_indi_pane_g2

0x0001,

0xfe23,	// (0x00068f54) lc0_stat_indi_pane_g_ParamLimits

0xfe23,	// (0x00068f54) lc0_stat_indi_pane_g

0xbd3a,	// (0x00064e6b) lc0_uni_indicator_pane_ParamLimits

0xbd3a,	// (0x00064e6b) lc0_uni_indicator_pane

0xe6b5,	// (0x000677e6) ls0_title_pane_g1_ParamLimits

0xe6b5,	// (0x000677e6) ls0_title_pane_g1

0xe6c9,	// (0x000677fa) ls0_title_pane_t1_ParamLimits

0xe6c9,	// (0x000677fa) ls0_title_pane_t1

0xbd47,	// (0x00064e78) lc0_uni_indicator_pane_g1_ParamLimits

0xbd47,	// (0x00064e78) lc0_uni_indicator_pane_g1

0x792b,	// (0x00060a5c) lc0_stat_clock_pane_t1

0xee13,	// (0x00067f44) main_ai5_pane

0x7939,	// (0x00060a6a) ai5_sk_pane_ParamLimits

0x7939,	// (0x00060a6a) ai5_sk_pane

0xe6f7,	// (0x00067828) cell_ai5_widget_pane_ParamLimits

0xe6f7,	// (0x00067828) cell_ai5_widget_pane

0xe776,	// (0x000678a7) aid_size_cell_widget_grid

0x79f3,	// (0x00060b24) bg_ai5_widget_pane_ParamLimits

0x79f3,	// (0x00060b24) bg_ai5_widget_pane

0xe7aa,	// (0x000678db) cell_ai5_widget_pane_g2

0xe7be,	// (0x000678ef) cell_ai5_widget_pane_g3

0xe7d8,	// (0x00067909) cell_ai5_widget_pane_g4

0xe7e8,	// (0x00067919) cell_ai5_widget_pane_g5

0xe7f8,	// (0x00067929) cell_ai5_widget_pane_g6

0xe804,	// (0x00067935) cell_ai5_widget_pane_g7

0xe870,	// (0x000679a1) cell_ai5_widget_pane_t1_ParamLimits

0xe870,	// (0x000679a1) cell_ai5_widget_pane_t1

0xe88d,	// (0x000679be) cell_ai5_widget_pane_t2_ParamLimits

0xe88d,	// (0x000679be) cell_ai5_widget_pane_t2

0xe8a5,	// (0x000679d6) cell_ai5_widget_pane_t3_ParamLimits

0xe8a5,	// (0x000679d6) cell_ai5_widget_pane_t3

0xe8bd,	// (0x000679ee) cell_ai5_widget_pane_t4_ParamLimits

0xe8bd,	// (0x000679ee) cell_ai5_widget_pane_t4

0xe8e3,	// (0x00067a14) cell_ai5_widget_pane_t5_ParamLimits

0xe8e3,	// (0x00067a14) cell_ai5_widget_pane_t5

0x7bc8,	// (0x00060cf9) cell_ai5_widget_pane_t6_ParamLimits

0x7bc8,	// (0x00060cf9) cell_ai5_widget_pane_t6

0x7bda,	// (0x00060d0b) cell_ai5_widget_pane_t7_ParamLimits

0x7bda,	// (0x00060d0b) cell_ai5_widget_pane_t7

0xe903,	// (0x00067a34) cell_ai5_widget_pane_t8_ParamLimits

0xe903,	// (0x00067a34) cell_ai5_widget_pane_t8

0x000b,

0xfe43,	// (0x00068f74) cell_ai5_widget_pane_t_ParamLimits

0xfe43,	// (0x00068f74) cell_ai5_widget_pane_t

0xe987,	// (0x00067ab8) grid_ai5_widget_pane

0x8f79,	// (0x000620aa) highlight_cell_ai5_widget_pane_ParamLimits

0x8f79,	// (0x000620aa) highlight_cell_ai5_widget_pane

0xe995,	// (0x00067ac6) ai5_sk_left_pane

0xe99f,	// (0x00067ad0) ai5_sk_middle_pane

0xe9a9,	// (0x00067ada) ai5_sk_right_pane

0x7ca9,	// (0x00060dda) bg_ai5_widget_pane_g1_ParamLimits

0x7ca9,	// (0x00060dda) bg_ai5_widget_pane_g1

0x7cb5,	// (0x00060de6) bg_ai5_widget_pane_g2_ParamLimits

0x7cb5,	// (0x00060de6) bg_ai5_widget_pane_g2

0x7cc1,	// (0x00060df2) bg_ai5_widget_pane_g3_ParamLimits

0x7cc1,	// (0x00060df2) bg_ai5_widget_pane_g3

0x7ccd,	// (0x00060dfe) bg_ai5_widget_pane_g4_ParamLimits

0x7ccd,	// (0x00060dfe) bg_ai5_widget_pane_g4

0x7cd9,	// (0x00060e0a) bg_ai5_widget_pane_g5_ParamLimits

0x7cd9,	// (0x00060e0a) bg_ai5_widget_pane_g5

0x7ce5,	// (0x00060e16) bg_ai5_widget_pane_g6_ParamLimits

0x7ce5,	// (0x00060e16) bg_ai5_widget_pane_g6

0x7cf1,	// (0x00060e22) bg_ai5_widget_pane_g7_ParamLimits

0x7cf1,	// (0x00060e22) bg_ai5_widget_pane_g7

0x7cfd,	// (0x00060e2e) bg_ai5_widget_pane_g8_ParamLimits

0x7cfd,	// (0x00060e2e) bg_ai5_widget_pane_g8

0x7d09,	// (0x00060e3a) bg_ai5_widget_pane_g9_ParamLimits

0x7d09,	// (0x00060e3a) bg_ai5_widget_pane_g9

0x0008,

0xfe5c,	// (0x00068f8d) bg_ai5_widget_pane_g_ParamLimits

0xfe5c,	// (0x00068f8d) bg_ai5_widget_pane_g

0xe9dd,	// (0x00067b0e) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9dd,	// (0x00067b0e) cell_shortcut_ai5_widget_pane

0x22a6,	// (0x0005b3d7) bg_cell_shortcut_ai5_widget_pane

0x7d54,	// (0x00060e85) cell_grid_ai5_widget_pane_g1

0x22a6,	// (0x0005b3d7) highlight_cell_shortcut_ai5_widget_pane

0x2b25,	// (0x0005bc56) ai5_sk_left_pane_g1

0x7d5d,	// (0x00060e8e) ai5_sk_left_pane_g2

0x7d65,	// (0x00060e96) ai5_sk_left_pane_g3

0x7d6d,	// (0x00060e9e) ai5_sk_left_pane_g4

0x0003,

0xfe6f,	// (0x00068fa0) ai5_sk_left_pane_g

0x7d75,	// (0x00060ea6) ai5_sk_left_pane_t1

0x2b2d,	// (0x0005bc5e) ai5_sk_right_pane_g1

0x7d83,	// (0x00060eb4) ai5_sk_right_pane_g2

0x7d8b,	// (0x00060ebc) ai5_sk_right_pane_g3

0x7d93,	// (0x00060ec4) ai5_sk_right_pane_g4

0x0003,

0xfe78,	// (0x00068fa9) ai5_sk_right_pane_g

0x7d9b,	// (0x00060ecc) ai5_sk_right_pane_t1

0x2b2d,	// (0x0005bc5e) ai5_sk_middle_pane_g1

0x2b25,	// (0x0005bc56) ai5_sk_middle_pane_g2

0x2b45,	// (0x0005bc76) ai5_sk_middle_pane_g3

0x7d8b,	// (0x00060ebc) ai5_sk_middle_pane_g4

0x7d65,	// (0x00060e96) ai5_sk_middle_pane_g5

0x7da9,	// (0x00060eda) ai5_sk_middle_pane_g6

0xe9f0,	// (0x00067b21) ai5_sk_middle_pane_g7

0x0006,

0xfe81,	// (0x00068fb2) ai5_sk_middle_pane_g

0xc01c,	// (0x0006514d) aid_touch_area_size_lc0_ParamLimits

0xc01c,	// (0x0006514d) aid_touch_area_size_lc0

0x0f96,	// (0x0005a0c7) cell_hwr_candidate_pane_t1_ParamLimits

0x264b,	// (0x0005b77c) aid_touch_navi_pane

0xc2c2,	// (0x000653f3) status_dt_navi_pane_ParamLimits

0xc2c2,	// (0x000653f3) status_dt_navi_pane

0xc2da,	// (0x0006540b) status_dt_sta_pane_ParamLimits

0xc2da,	// (0x0006540b) status_dt_sta_pane

0xe9f8,	// (0x00067b29) dt_sta_controll_pane

0xea05,	// (0x00067b36) dt_sta_indi_pane

0xea12,	// (0x00067b43) dt_sta_title_pane

0x8a6a,	// (0x00061b9b) bg_dt_sta_indi_pane_ParamLimits

0x8a6a,	// (0x00061b9b) bg_dt_sta_indi_pane

0xea24,	// (0x00067b55) dt_sta_battery_pane

0xea2c,	// (0x00067b5d) dt_sta_indi_pane_g1

0xea35,	// (0x00067b66) dt_sta_indi_pane_g2

0xea3e,	// (0x00067b6f) dt_sta_indi_pane_g3

0x0002,

0xfe90,	// (0x00068fc1) dt_sta_indi_pane_g

0xea47,	// (0x00067b78) dt_sta_signal_pane

0x8f79,	// (0x000620aa) bg_dt_sta_title_pane_ParamLimits

0x8f79,	// (0x000620aa) bg_dt_sta_title_pane

0xea50,	// (0x00067b81) dt_sta_title_pane_g1

0xea58,	// (0x00067b89) dt_sta_title_pane_t1_ParamLimits

0xea58,	// (0x00067b89) dt_sta_title_pane_t1

0x88c7,	// (0x000619f8) bg_dt_sta_control_pane

0xea6d,	// (0x00067b9e) dt_sta_controll_pane_g1

0xea76,	// (0x00067ba7) bg_dt_sta_title_pane_g1

0xea7f,	// (0x00067bb0) bg_dt_sta_title_pane_g2

0xea88,	// (0x00067bb9) bg_dt_sta_title_pane_g3

0x0002,

0xfe97,	// (0x00068fc8) bg_dt_sta_title_pane_g

0x5357,	// (0x0005e488) bg_dt_sta_indi_pane_g1

0x7e57,	// (0x00060f88) dt_sta_signal_pane_g1

0x7e5f,	// (0x00060f90) dt_sta_signal_pane_g2

0x0001,

0xfe9e,	// (0x00068fcf) dt_sta_signal_pane_g

0x7e67,	// (0x00060f98) dt_sta_battery_pane_g1

0x7e70,	// (0x00060fa1) dt_sta_battery_pane_t1

0x5357,	// (0x0005e488) bg_dt_sta_control_pane_g1

0xdeca,	// (0x00066ffb) fep_china_uni_eep_pane

0xded2,	// (0x00067003) fep_china_uni_entry_pane_ParamLimits

0xdee2,	// (0x00067013) popup_fep_china_uni_window_g1_ParamLimits

0xdef2,	// (0x00067023) popup_fep_china_uni_window_g2_ParamLimits

0xdef2,	// (0x00067023) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x0006882e) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x0006882e) popup_fep_china_uni_window_g

0x7e7f,	// (0x00060fb0) fep_china_uni_eep_pane_g1

0x7e87,	// (0x00060fb8) fep_china_uni_eep_pane_t1

0x78a8,	// (0x000609d9) aid_touch_area_size_smil_player

0x279f,	// (0x0005b8d0) lc0_clock_pane

0x2996,	// (0x0005bac7) status_pane_g5_ParamLimits

0x2996,	// (0x0005bac7) status_pane_g5

0xaf29,	// (0x0006405a) popup_keymap_window

0x295c,	// (0x0005ba8d) status_icon_pane

0xe7be,	// (0x000678ef) cell_ai5_widget_pane_g3_ParamLimits

0xe7d8,	// (0x00067909) cell_ai5_widget_pane_g4_ParamLimits

0xe7e8,	// (0x00067919) cell_ai5_widget_pane_g5_ParamLimits

0xe810,	// (0x00067941) cell_ai5_widget_pane_g8_ParamLimits

0xe810,	// (0x00067941) cell_ai5_widget_pane_g8

0xe824,	// (0x00067955) cell_ai5_widget_pane_g9_ParamLimits

0xe824,	// (0x00067955) cell_ai5_widget_pane_g9

0xe838,	// (0x00067969) cell_ai5_widget_pane_g10_ParamLimits

0xe838,	// (0x00067969) cell_ai5_widget_pane_g10

0x7e96,	// (0x00060fc7) status_icon_pane_g1

0x88c7,	// (0x000619f8) bg_popup_sub_pane_cp13

0x7e9e,	// (0x00060fcf) popup_keymap_window_t1

0x257e,	// (0x0005b6af) control_pane_g6_ParamLimits

0x257e,	// (0x0005b6af) control_pane_g6

0x258b,	// (0x0005b6bc) control_pane_g7_ParamLimits

0x258b,	// (0x0005b6bc) control_pane_g7

0x2598,	// (0x0005b6c9) control_pane_g8_ParamLimits

0x2598,	// (0x0005b6c9) control_pane_g8

0xe9f8,	// (0x00067b29) dt_sta_controll_pane_ParamLimits

0xea05,	// (0x00067b36) dt_sta_indi_pane_ParamLimits

0xea12,	// (0x00067b43) dt_sta_title_pane_ParamLimits

0x8ebb,	// (0x00061fec) aid_size_touch_scroll_bar_cale

0xeef0,	// (0x00068021) popup_discreet_window_ParamLimits

0xeef0,	// (0x00068021) popup_discreet_window

0x9d27,	// (0x00062e58) popup_sk_window

0x319b,	// (0x0005c2cc) bg_popup_sub_pane_cp28_ParamLimits

0x319b,	// (0x0005c2cc) bg_popup_sub_pane_cp28

0x7eac,	// (0x00060fdd) popup_discreet_window_g1_ParamLimits

0x7eac,	// (0x00060fdd) popup_discreet_window_g1

0x7ecc,	// (0x00060ffd) popup_discreet_window_t1_ParamLimits

0x7ecc,	// (0x00060ffd) popup_discreet_window_t1

0x7eea,	// (0x0006101b) popup_discreet_window_t2_ParamLimits

0x7eea,	// (0x0006101b) popup_discreet_window_t2

0x0002,

0xfea3,	// (0x00068fd4) popup_discreet_window_t_ParamLimits

0xfea3,	// (0x00068fd4) popup_discreet_window_t

0x1ab5,	// (0x0005abe6) popup_sk_window_g1

0x1abf,	// (0x0005abf0) popup_sk_window_g2

0x0001,

0xfeaa,	// (0x00068fdb) popup_sk_window_g

0x1ac7,	// (0x0005abf8) popup_sk_window_t1

0x1ad5,	// (0x0005ac06) popup_sk_window_t1_copy1

0xe7aa,	// (0x000678db) cell_ai5_widget_pane_g2_ParamLimits

0xe915,	// (0x00067a46) cell_ai5_widget_pane_t9_ParamLimits

0xe915,	// (0x00067a46) cell_ai5_widget_pane_t9

0x88c7,	// (0x000619f8) main_fep_fshwr2_pane

0xbd66,	// (0x00064e97) aid_fshwr2_btn_pane

0xbd7a,	// (0x00064eab) aid_fshwr2_syb_pane

0xbd8e,	// (0x00064ebf) aid_fshwr2_txt_pane

0xbd9e,	// (0x00064ecf) fshwr2_func_candi_pane

0xbdc0,	// (0x00064ef1) fshwr2_hwr_syb_pane

0xbde4,	// (0x00064f15) fshwr2_icf_pane

0xee13,	// (0x00067f44) fshwr2_icf_bg_pane

0x1b81,	// (0x0005acb2) fshwr2_icf_pane_t1_ParamLimits

0x1b81,	// (0x0005acb2) fshwr2_icf_pane_t1

0xde48,	// (0x00066f79) fshwr2_func_candi_pane_g1

0xea91,	// (0x00067bc2) fshwr2_func_candi_row_pane_ParamLimits

0xea91,	// (0x00067bc2) fshwr2_func_candi_row_pane

0xbe14,	// (0x00064f45) cell_fshwr2_syb_pane_ParamLimits

0xbe14,	// (0x00064f45) cell_fshwr2_syb_pane

0x1bba,	// (0x0005aceb) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1bba,	// (0x0005aceb) fshwr2_hwr_syb_pane_g1

0xee13,	// (0x00067f44) bg_popup_call_pane_cp01

0xbe3c,	// (0x00064f6d) fshwr2_func_candi_cell_pane_ParamLimits

0xbe3c,	// (0x00064f6d) fshwr2_func_candi_cell_pane

0x2f7b,	// (0x0005c0ac) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2f7b,	// (0x0005c0ac) fshwr2_func_candi_cell_bg_pane

0xbe87,	// (0x00064fb8) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xbe87,	// (0x00064fb8) fshwr2_func_candi_cell_pane_g1

0xbebe,	// (0x00064fef) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbebe,	// (0x00064fef) fshwr2_func_candi_cell_pane_t1

0xee13,	// (0x00067f44) bg_button_pane_cp08

0x25cd,	// (0x0005b6fe) cell_fshwr2_syb_bg_pane

0xbed9,	// (0x0006500a) cell_fshwr2_syb_bg_pane_g1

0xbeed,	// (0x0006501e) cell_fshwr2_syb_bg_pane_t1

0x8f79,	// (0x000620aa) main_tmo_pane

0xc60f,	// (0x00065740) uni_indicator_pane_g1_ParamLimits

0xc625,	// (0x00065756) uni_indicator_pane_g2_ParamLimits

0xc63b,	// (0x0006576c) uni_indicator_pane_g3_ParamLimits

0xc64e,	// (0x0006577f) uni_indicator_pane_g4_ParamLimits

0xc64e,	// (0x0006577f) uni_indicator_pane_g4

0x3f00,	// (0x0005d031) uni_indicator_pane_g5_ParamLimits

0x3f00,	// (0x0005d031) uni_indicator_pane_g5

0x3f00,	// (0x0005d031) uni_indicator_pane_g6_ParamLimits

0x3f00,	// (0x0005d031) uni_indicator_pane_g6

0xf8fc,	// (0x00068a2d) uni_indicator_pane_g_ParamLimits

0xd189,	// (0x000662ba) popup_tmo_note_window_ParamLimits

0xd189,	// (0x000662ba) popup_tmo_note_window

0x1307,	// (0x0005a438) fshwr2_bg_pane

0xbeaf,	// (0x00064fe0) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xbeaf,	// (0x00064fe0) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeaf,	// (0x00068fe0) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeaf,	// (0x00068fe0) fshwr2_func_candi_cell_pane_g

0x0f4f,	// (0x0005a080) bg_popup_window_pane_cp01

0x1c81,	// (0x0005adb2) bg_popup_window_pane_g1_cp01

0x7f5f,	// (0x00061090) bg_popup_window_pane_cp22_ParamLimits

0x7f5f,	// (0x00061090) bg_popup_window_pane_cp22

0x7f6d,	// (0x0006109e) listscroll_tmo_link_pane_ParamLimits

0x7f6d,	// (0x0006109e) listscroll_tmo_link_pane

0x7fad,	// (0x000610de) popup_tmo_note_window_g1_ParamLimits

0x7fad,	// (0x000610de) popup_tmo_note_window_g1

0x7fba,	// (0x000610eb) tmo_note_info_pane_ParamLimits

0x7fba,	// (0x000610eb) tmo_note_info_pane

0xeab8,	// (0x00067be9) list_tmo_note_info_pane_g1_ParamLimits

0xeab8,	// (0x00067be9) list_tmo_note_info_pane_g1

0x7feb,	// (0x0006111c) list_tmo_note_info_pane_g2_ParamLimits

0x7feb,	// (0x0006111c) list_tmo_note_info_pane_g2

0x0001,

0xfeb4,	// (0x00068fe5) list_tmo_note_info_pane_g_ParamLimits

0xfeb4,	// (0x00068fe5) list_tmo_note_info_pane_g

0x8007,	// (0x00061138) list_tmo_note_info_text_pane_ParamLimits

0x8007,	// (0x00061138) list_tmo_note_info_text_pane

0x808c,	// (0x000611bd) list_tmo_link_pane

0x8099,	// (0x000611ca) scroll_pane_cp20

0x80a6,	// (0x000611d7) list_single_tmo_link_pane_ParamLimits

0x80a6,	// (0x000611d7) list_single_tmo_link_pane

0x80b6,	// (0x000611e7) list_single_tmo_link_pane_t1

0x80c4,	// (0x000611f5) list_tmo_note_info_text_pane_t1_ParamLimits

0x80c4,	// (0x000611f5) list_tmo_note_info_text_pane_t1

0xa7da,	// (0x0006390b) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa7da,	// (0x0006390b) aid_size_touch_scroll_bar_cp01

0xa709,	// (0x0006383a) aid_size_touch_slider_marker

0x9d17,	// (0x00062e48) popup_settings_window_ParamLimits

0x9d17,	// (0x00062e48) popup_settings_window

0xe00c,	// (0x0006713d) popup_candi_list_indi_window

0x264b,	// (0x0005b77c) aid_touch_navi_pane_ParamLimits

0x1260,	// (0x0005a391) rs_clock_indi_pane

0x1269,	// (0x0005a39a) sctrl_sk_bottom_pane_ParamLimits

0x127a,	// (0x0005a3ab) sctrl_sk_top_pane_ParamLimits

0x1377,	// (0x0005a4a8) popup_fep_tooltip_window

0xe776,	// (0x000678a7) aid_size_cell_widget_grid_ParamLimits

0xe795,	// (0x000678c6) cell_ai5_widget_pane_g1_ParamLimits

0xe795,	// (0x000678c6) cell_ai5_widget_pane_g1

0xe7f8,	// (0x00067929) cell_ai5_widget_pane_g6_ParamLimits

0xe804,	// (0x00067935) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe28,	// (0x00068f59) cell_ai5_widget_pane_g_ParamLimits

0xfe28,	// (0x00068f59) cell_ai5_widget_pane_g

0xe944,	// (0x00067a75) cell_ai5_widget_pane_t10_ParamLimits

0xe944,	// (0x00067a75) cell_ai5_widget_pane_t10

0xe987,	// (0x00067ab8) grid_ai5_widget_pane_ParamLimits

0xe9b3,	// (0x00067ae4) cell_contacts_ai5_widget_pane_ParamLimits

0xe9b3,	// (0x00067ae4) cell_contacts_ai5_widget_pane

0x7eff,	// (0x00061030) popup_discreet_window_t3_ParamLimits

0x7eff,	// (0x00061030) popup_discreet_window_t3

0xbe00,	// (0x00064f31) popup_fshwr2_char_preview_window_ParamLimits

0xbe00,	// (0x00064f31) popup_fshwr2_char_preview_window

0xeacf,	// (0x00067c00) tmo_note_info_pane_t1

0xeae4,	// (0x00067c15) tmo_note_info_pane_t2

0xeafd,	// (0x00067c2e) tmo_note_info_pane_t3

0x8068,	// (0x00061199) tmo_note_info_pane_t4

0x807a,	// (0x000611ab) tmo_note_info_pane_t5

0x0004,

0xfeb9,	// (0x00068fea) tmo_note_info_pane_t

0x808c,	// (0x000611bd) list_tmo_link_pane_ParamLimits

0x8099,	// (0x000611ca) scroll_pane_cp20_ParamLimits

0xee13,	// (0x00067f44) bg_popup_fep_char_preview_window_cp01

0x80dd,	// (0x0006120e) popup_fshwr2_char_preview_window_t1

0x80eb,	// (0x0006121c) popup_candi_list_indi_window_g1

0x80f4,	// (0x00061225) bg_cell_contacts_ai5_widget_pane

0xeb12,	// (0x00067c43) cell_contacts_ai5_widget_pane_g1

0x8115,	// (0x00061246) cell_contacts_ai5_widget_pane_g2

0x8121,	// (0x00061252) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec4,	// (0x00068ff5) cell_contacts_ai5_widget_pane_g

0x812d,	// (0x0006125e) cell_contacts_ai5_widget_pane_t1

0x8f79,	// (0x000620aa) highlight_cell_shortcut_ai5_widget_pane_cp01

0x81a4,	// (0x000612d5) settings_container_pane

0x22a6,	// (0x0005b3d7) listscroll_set_pane_copy1

0x4a88,	// (0x0005dbb9) scroll_pane_cp121_copy1

0x81b0,	// (0x000612e1) set_content_pane_copy1

0x81b8,	// (0x000612e9) aid_height_set_list_copy1_ParamLimits

0x81b8,	// (0x000612e9) aid_height_set_list_copy1

0x4100,	// (0x0005d231) aid_size_parent_copy1_ParamLimits

0x4100,	// (0x0005d231) aid_size_parent_copy1

0x81c4,	// (0x000612f5) button_value_adjust_pane_cp6_copy1_ParamLimits

0x81c4,	// (0x000612f5) button_value_adjust_pane_cp6_copy1

0x25cd,	// (0x0005b6fe) list_highlight_pane_cp2_copy1_ParamLimits

0x25cd,	// (0x0005b6fe) list_highlight_pane_cp2_copy1

0x81d8,	// (0x00061309) list_set_pane_copy1_ParamLimits

0x81d8,	// (0x00061309) list_set_pane_copy1

0x813f,	// (0x00061270) main_pane_set_t1_copy1_ParamLimits

0x813f,	// (0x00061270) main_pane_set_t1_copy1

0x8179,	// (0x000612aa) main_pane_set_t2_copy1_ParamLimits

0x8179,	// (0x000612aa) main_pane_set_t2_copy1

0x8299,	// (0x000613ca) main_pane_set_t3_copy1

0x82a7,	// (0x000613d8) main_pane_set_t4_copy1

0x8198,	// (0x000612c9) set_content_pane_g1_copy1_ParamLimits

0x8198,	// (0x000612c9) set_content_pane_g1_copy1

0x82b5,	// (0x000613e6) setting_code_pane_copy1

0x82bd,	// (0x000613ee) setting_slider_graphic_pane_copy1

0x82bd,	// (0x000613ee) setting_slider_pane_copy1

0x82c5,	// (0x000613f6) setting_text_pane_copy1

0x82c5,	// (0x000613f6) setting_volume_pane_copy1

0x82b5,	// (0x000613e6) settings_code_pane_cp2_copy1

0x82cd,	// (0x000613fe) settings_code_pane_cp_copy1_ParamLimits

0x82cd,	// (0x000613fe) settings_code_pane_cp_copy1

0x1c8a,	// (0x0005adbb) volume_set_pane_copy1

0x82e1,	// (0x00061412) volume_set_pane_g10_copy1

0x82ed,	// (0x0006141e) volume_set_pane_g1_copy1

0x82f7,	// (0x00061428) volume_set_pane_g2_copy1

0x8301,	// (0x00061432) volume_set_pane_g3_copy1

0x830b,	// (0x0006143c) volume_set_pane_g4_copy1

0x8315,	// (0x00061446) volume_set_pane_g5_copy1

0x831f,	// (0x00061450) volume_set_pane_g6_copy1

0x8329,	// (0x0006145a) volume_set_pane_g7_copy1

0x8333,	// (0x00061464) volume_set_pane_g8_copy1

0x833d,	// (0x0006146e) volume_set_pane_g9_copy1

0x8929,	// (0x00061a5a) bg_set_opt_pane_cp_copy1_ParamLimits

0x8929,	// (0x00061a5a) bg_set_opt_pane_cp_copy1

0x1c96,	// (0x0005adc7) setting_slider_pane_t1_copy1_ParamLimits

0x1c96,	// (0x0005adc7) setting_slider_pane_t1_copy1

0x1cb5,	// (0x0005ade6) setting_slider_pane_t2_copy1_ParamLimits

0x1cb5,	// (0x0005ade6) setting_slider_pane_t2_copy1

0x1ccf,	// (0x0005ae00) setting_slider_pane_t3_copy1_ParamLimits

0x1ccf,	// (0x0005ae00) setting_slider_pane_t3_copy1

0x1ce7,	// (0x0005ae18) slider_set_pane_copy1_ParamLimits

0x1ce7,	// (0x0005ae18) slider_set_pane_copy1

0x8fd1,	// (0x00062102) set_opt_bg_pane_g1_copy2

0x8fd9,	// (0x0006210a) set_opt_bg_pane_g2_copy2

0x8349,	// (0x0006147a) set_opt_bg_pane_g3_copy2

0x8fe9,	// (0x0006211a) set_opt_bg_pane_g4_copy2

0x8ff1,	// (0x00062122) set_opt_bg_pane_g5_copy2

0x8ff9,	// (0x0006212a) set_opt_bg_pane_g6_copy2

0x8353,	// (0x00061484) set_opt_bg_pane_g7_copy2

0x835d,	// (0x0006148e) set_opt_bg_pane_g8_copy2

0x8367,	// (0x00061498) set_opt_bg_pane_g9_copy2

0x1cfd,	// (0x0005ae2e) aid_size_touch_slider_mark_copy1_ParamLimits

0x1cfd,	// (0x0005ae2e) aid_size_touch_slider_mark_copy1

0x8371,	// (0x000614a2) slider_set_pane_g1_copy1

0x1d11,	// (0x0005ae42) slider_set_pane_g2_copy1

0x0ac4,	// (0x00059bf5) slider_set_pane_g3_copy1_ParamLimits

0x0ac4,	// (0x00059bf5) slider_set_pane_g3_copy1

0x0ad8,	// (0x00059c09) slider_set_pane_g4_copy1_ParamLimits

0x0ad8,	// (0x00059c09) slider_set_pane_g4_copy1

0x0af0,	// (0x00059c21) slider_set_pane_g5_copy1_ParamLimits

0x0af0,	// (0x00059c21) slider_set_pane_g5_copy1

0x0ac4,	// (0x00059bf5) slider_set_pane_g6_copy1_ParamLimits

0x0ac4,	// (0x00059bf5) slider_set_pane_g6_copy1

0x1d19,	// (0x0005ae4a) slider_set_pane_g7_copy1_ParamLimits

0x1d19,	// (0x0005ae4a) slider_set_pane_g7_copy1

0x88db,	// (0x00061a0c) bg_set_opt_pane_cp2_copy1

0x837a,	// (0x000614ab) setting_slider_graphic_pane_g1_copy1

0x8383,	// (0x000614b4) setting_slider_graphic_pane_t1_copy1

0x8393,	// (0x000614c4) setting_slider_graphic_pane_t2_copy1

0x83a3,	// (0x000614d4) slider_set_pane_cp_copy1

0x83b3,	// (0x000614e4) input_focus_pane_cp1_copy1

0x83bc,	// (0x000614ed) list_set_text_pane_copy1

0x83c4,	// (0x000614f5) setting_text_pane_g1_copy1

0xdb36,	// (0x00066c67) set_text_pane_t1_copy1

0x83b3,	// (0x000614e4) input_focus_pane_cp2_copy1

0x83c4,	// (0x000614f5) setting_code_pane_g1_copy1

0x83cd,	// (0x000614fe) setting_code_pane_t1_copy1

0x488d,	// (0x0005d9be) list_set_graphic_pane_copy1

0x88db,	// (0x00061a0c) bg_set_opt_pane_cp4_copy1

0x1fa1,	// (0x0005b0d2) list_set_graphic_pane_g1_copy1_ParamLimits

0x1fa1,	// (0x0005b0d2) list_set_graphic_pane_g1_copy1

0x83db,	// (0x0006150c) list_set_graphic_pane_g2_copy1

0x1fb9,	// (0x0005b0ea) list_set_graphic_pane_t1_copy1_ParamLimits

0x1fb9,	// (0x0005b0ea) list_set_graphic_pane_t1_copy1

0x5357,	// (0x0005e488) rs_clock_indi_pane_g1

0x83e3,	// (0x00061514) rs_clock_indi_pane_t1

0x83f1,	// (0x00061522) rs_indi_pane

0x83f9,	// (0x0006152a) rs_indi_pane_g1

0x8402,	// (0x00061533) rs_indi_pane_g2

0x80eb,	// (0x0006121c) rs_indi_pane_g3

0x0002,

0xfecb,	// (0x00068ffc) rs_indi_pane_g

0x22a6,	// (0x0005b3d7) bg_popup_preview_window_pane_cp03

0x840b,	// (0x0006153c) popup_fep_tooltip_window_t1

0x6034,	// (0x0005f165) popup_note2_window_g2_ParamLimits

0x6034,	// (0x0005f165) popup_note2_window_g2

0x0001,

0xfc58,	// (0x00068d89) popup_note2_window_g_ParamLimits

0xfc58,	// (0x00068d89) popup_note2_window_g

0x653c,	// (0x0005f66d) bg_popup_sub_pane_cp11_ParamLimits

0x6549,	// (0x0005f67a) cell_ai3_links_pane_g1_ParamLimits

0x6560,	// (0x0005f691) cell_ai3_links_pane_t1

0xdb36,	// (0x00066c67) set_text_pane_t1_copy1_ParamLimits

0x21a8,	// (0x0005b2d9) cell_graphic_popup_pane_cp2_ParamLimits

0x21a8,	// (0x0005b2d9) cell_graphic_popup_pane_cp2

0x8419,	// (0x0006154a) cell_graphic_popup_pane_g1_cp2

0x8cce,	// (0x00061dff) cell_graphic_popup_pane_g2_cp2

0x8421,	// (0x00061552) cell_graphic_popup_pane_g3_cp2

0x8429,	// (0x0006155a) cell_graphic_popup_pane_t2_cp2

0x8cdf,	// (0x00061e10) grid_highlight_pane_cp3_cp2

0xc002,	// (0x00065133) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8f79,	// (0x000620aa) main_tmo_pane_ParamLimits

0xd17d,	// (0x000662ae) popup_tmo_big_image_note_window

0xe784,	// (0x000678b5) cell_ai5_widget_list_pane

0xe78c,	// (0x000678bd) cell_ai5_widget_lrg_icon_pane

0xeacf,	// (0x00067c00) tmo_note_info_pane_t1_ParamLimits

0xeae4,	// (0x00067c15) tmo_note_info_pane_t2_ParamLimits

0xeafd,	// (0x00067c2e) tmo_note_info_pane_t3_ParamLimits

0x8068,	// (0x00061199) tmo_note_info_pane_t4_ParamLimits

0x807a,	// (0x000611ab) tmo_note_info_pane_t5_ParamLimits

0xfeb9,	// (0x00068fea) tmo_note_info_pane_t_ParamLimits

0x81a4,	// (0x000612d5) settings_container_pane_ParamLimits

0x83ab,	// (0x000614dc) indicator_popup_pane_cp5

0x83ab,	// (0x000614dc) indicator_popup_pane_cp6

0x488d,	// (0x0005d9be) list_set_graphic_pane_copy1_ParamLimits

0x88c7,	// (0x000619f8) bg_popup_window_pane_cp23

0x8437,	// (0x00061568) popup_tmo_big_image_note_window_g1

0x8443,	// (0x00061574) popup_tmo_big_image_note_window_t1

0x8453,	// (0x00061584) popup_tmo_big_image_note_window_t2

0x8463,	// (0x00061594) popup_tmo_big_image_note_window_t3

0x0002,

0xfed2,	// (0x00069003) popup_tmo_big_image_note_window_t

0x5357,	// (0x0005e488) cell_ai5_widget_lrg_icon_pane_g1

0xeb27,	// (0x00067c58) cell_ai5_widget_lrg_icon_pane_t1

0xeb35,	// (0x00067c66) cell_ai5_widget_list_row_pane_ParamLimits

0xeb35,	// (0x00067c66) cell_ai5_widget_list_row_pane

0xeb4d,	// (0x00067c7e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xeb4d,	// (0x00067c7e) cell_ai5_widget_list_row_pane_g1

0xeb5a,	// (0x00067c8b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xeb5a,	// (0x00067c8b) cell_ai5_widget_list_row_pane_t1

0xeb85,	// (0x00067cb6) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xeb85,	// (0x00067cb6) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed9,	// (0x0006900a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed9,	// (0x0006900a) cell_ai5_widget_list_row_pane_t

0xee13,	// (0x00067f44) main_fep_vtchi_ss_pane

0x8521,	// (0x00061652) popup_fep_char_pre_window

0x8529,	// (0x0006165a) popup_fep_ituss_window

0xebd7,	// (0x00067d08) popup_fep_vkbss_window

0x25cd,	// (0x0005b6fe) grid_vkbss_keypad_pane_ParamLimits

0x25cd,	// (0x0005b6fe) grid_vkbss_keypad_pane

0x8597,	// (0x000616c8) ituss_keypad_pane

0x1d39,	// (0x0005ae6a) aid_vkbss_key_offset_ParamLimits

0x1d39,	// (0x0005ae6a) aid_vkbss_key_offset

0xbf03,	// (0x00065034) cell_vkbss_key_pane_ParamLimits

0xbf03,	// (0x00065034) cell_vkbss_key_pane

0x85a3,	// (0x000616d4) bg_cell_vkbss_key_g1_ParamLimits

0x85a3,	// (0x000616d4) bg_cell_vkbss_key_g1

0xebe6,	// (0x00067d17) cell_vkbss_key_3p_pane_ParamLimits

0xebe6,	// (0x00067d17) cell_vkbss_key_3p_pane

0xec1c,	// (0x00067d4d) cell_vkbss_key_g1_ParamLimits

0xec1c,	// (0x00067d4d) cell_vkbss_key_g1

0xec52,	// (0x00067d83) cell_vkbss_key_t1_ParamLimits

0xec52,	// (0x00067d83) cell_vkbss_key_t1

0x1da7,	// (0x0005aed8) cell_ituss_key_pane_ParamLimits

0x1da7,	// (0x0005aed8) cell_ituss_key_pane

0x8677,	// (0x000617a8) bg_cell_ituss_key_g1_ParamLimits

0x8677,	// (0x000617a8) bg_cell_ituss_key_g1

0x8683,	// (0x000617b4) cell_ituss_key_pane_g1_ParamLimits

0x8683,	// (0x000617b4) cell_ituss_key_pane_g1

0x1db8,	// (0x0005aee9) cell_ituss_key_pane_g2_ParamLimits

0x1db8,	// (0x0005aee9) cell_ituss_key_pane_g2

0x0005,

0xfee0,	// (0x00069011) cell_ituss_key_pane_g_ParamLimits

0xfee0,	// (0x00069011) cell_ituss_key_pane_g

0x1e3c,	// (0x0005af6d) cell_ituss_key_t1_ParamLimits

0x1e3c,	// (0x0005af6d) cell_ituss_key_t1

0x1e76,	// (0x0005afa7) cell_ituss_key_t2_ParamLimits

0x1e76,	// (0x0005afa7) cell_ituss_key_t2

0x1ea8,	// (0x0005afd9) cell_ituss_key_t3_ParamLimits

0x1ea8,	// (0x0005afd9) cell_ituss_key_t3

0x1ed9,	// (0x0005b00a) cell_ituss_key_t4_ParamLimits

0x1ed9,	// (0x0005b00a) cell_ituss_key_t4

0x0004,

0xfeed,	// (0x0006901e) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x0006901e) cell_ituss_key_t

0xecae,	// (0x00067ddf) cell_vkbss_key_3p_pane_g1

0xecb6,	// (0x00067de7) cell_vkbss_key_3p_pane_g2

0xecbe,	// (0x00067def) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x00069029) cell_vkbss_key_3p_pane_g

0x22a6,	// (0x0005b3d7) bg_popup_fep_char_preview_window_cp02

0x86c1,	// (0x000617f2) popup_fep_char_pre_window_t1

0xe763,	// (0x00067894) main_ai5_sk_pane

0x80f4,	// (0x00061225) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeb12,	// (0x00067c43) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8115,	// (0x00061246) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8121,	// (0x00061252) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec4,	// (0x00068ff5) cell_contacts_ai5_widget_pane_g_ParamLimits

0x812d,	// (0x0006125e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8f79,	// (0x000620aa) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xecc6,	// (0x00067df7) main_ai5_sk_pane_g1

0x2fd3,	// (0x0005c104) popup_query_code_window_g1

0xebc8,	// (0x00067cf9) popup_fep_vkb_icf_pane

0x856e,	// (0x0006169f) popup_fep_vtchi_icf_pane

0x86d8,	// (0x00061809) bg_icf_pane

0x86d8,	// (0x00061809) list_vkb_icf_pane

0x86e4,	// (0x00061815) bg_icf_pane_cp01

0x86f7,	// (0x00061828) vtchi_icf_list_pane

0xed1b,	// (0x00067e4c) list_vkb_icf_pane_t1_ParamLimits

0xed1b,	// (0x00067e4c) list_vkb_icf_pane_t1

0x8770,	// (0x000618a1) vtchi_icf_list_pane_t1_ParamLimits

0x8770,	// (0x000618a1) vtchi_icf_list_pane_t1

0x8529,	// (0x0006165a) popup_fep_ituss_window_ParamLimits

0x856e,	// (0x0006169f) popup_fep_vtchi_icf_pane_ParamLimits

0x8597,	// (0x000616c8) ituss_keypad_pane_ParamLimits

0x1d2f,	// (0x0005ae60) ituss_sks_pane

0x86d8,	// (0x00061809) bg_icf_pane_ParamLimits

0xebad,	// (0x00067cde) icf_edit_indi_pane_ParamLimits

0xebad,	// (0x00067cde) icf_edit_indi_pane

0x86d8,	// (0x00061809) list_vkb_icf_pane_ParamLimits

0x86e4,	// (0x00061815) bg_icf_pane_cp01_ParamLimits

0x8514,	// (0x00061645) icf_edit_indi_pane_cp01_ParamLimits

0x8514,	// (0x00061645) icf_edit_indi_pane_cp01

0x86f7,	// (0x00061828) vtchi_query_pane

0x7878,	// (0x000609a9) icf_edit_indi_pane_g1_ParamLimits

0x7878,	// (0x000609a9) icf_edit_indi_pane_g1

0xed32,	// (0x00067e63) icf_edit_indi_pane_g2_ParamLimits

0xed32,	// (0x00067e63) icf_edit_indi_pane_g2

0x0001,

0xff23,	// (0x00069054) icf_edit_indi_pane_g_ParamLimits

0xff23,	// (0x00069054) icf_edit_indi_pane_g

0xed46,	// (0x00067e77) icf_edit_indi_pane_t1

0x8789,	// (0x000618ba) bg_input_focus_pane_cp042

0x8eb2,	// (0x00061fe3) vtchi_button_pane

0x8792,	// (0x000618c3) vtchi_query_pane_t1

0x87a0,	// (0x000618d1) vtchi_query_pane_t2

0x87ae,	// (0x000618df) vtchi_query_pane_t3

0x0002,

0xff12,	// (0x00069043) vtchi_query_pane_t

0xee13,	// (0x00067f44) bg_button_pane_cp13

0x87bc,	// (0x000618ed) vtchi_button_pane_g1

0x1f1c,	// (0x0005b04d) ituss_sks_pane_g1

0x1f27,	// (0x0005b058) ituss_sks_pane_g2

0x0001,

0xff19,	// (0x0006904a) ituss_sks_pane_g

0x87c4,	// (0x000618f5) ituss_sks_pane_t1

0x87d2,	// (0x00061903) ituss_sks_pane_t2

0x0001,

0xff1e,	// (0x0006904f) ituss_sks_pane_t

0x4e2b,	// (0x0005df5c) indicator_nsta_pane_cp_g1

0x4e34,	// (0x0005df65) indicator_nsta_pane_cp_g2

0x4e3c,	// (0x0005df6d) indicator_nsta_pane_cp_g3

0x4e44,	// (0x0005df75) indicator_nsta_pane_cp_g4

0x4e34,	// (0x0005df65) indicator_nsta_pane_cp_g5

0x4e3c,	// (0x0005df6d) indicator_nsta_pane_cp_g6

0x0005,

0xfa96,	// (0x00068bc7) indicator_nsta_pane_cp_g

0xe56b,	// (0x0006769c) cell_graphic2_pane_t2_ParamLimits

0xe56b,	// (0x0006769c) cell_graphic2_pane_t2

0x0001,

0xfdaf,	// (0x00068ee0) cell_graphic2_pane_t_ParamLimits

0xfdaf,	// (0x00068ee0) cell_graphic2_pane_t

0xe5a3,	// (0x000676d4) cell_graphic2_control_pane_t1

0xaa54,	// (0x00063b85) signal_pane_g3_ParamLimits

0xaa54,	// (0x00063b85) signal_pane_g3

0xaa68,	// (0x00063b99) signal_pane_g4_ParamLimits

0xaa68,	// (0x00063b99) signal_pane_g4

0xeb97,	// (0x00067cc8) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xeb97,	// (0x00067cc8) cell_ai5_widget_list_row_pane_t3

0x8697,	// (0x000617c8) cell_ituss_key_pane_t1_ParamLimits

0x8697,	// (0x000617c8) cell_ituss_key_pane_t1

0x2c3a,	// (0x0005bd6b) form_field_data_wide_pane_vc_t2_ParamLimits

0x2c3a,	// (0x0005bd6b) form_field_data_wide_pane_vc_t2

0x2c4e,	// (0x0005bd7f) form_field_data_wide_pane_vc_t3_ParamLimits

0x2c4e,	// (0x0005bd7f) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x00068915) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x00068915) form_field_data_wide_pane_vc_t

0x4ac8,	// (0x0005dbf9) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4ac8,	// (0x0005dbf9) form_field_slider_wide_pane_vc_t3

0x4b9e,	// (0x0005dccf) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4b9e,	// (0x0005dccf) form_field_popup_wide_pane_vc_t2

0x4bb5,	// (0x0005dce6) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4bb5,	// (0x0005dce6) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa85,	// (0x00068bb6) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa85,	// (0x00068bb6) form_field_popup_wide_pane_vc_t

0xbd66,	// (0x00064e97) aid_fshwr2_btn_pane_ParamLimits

0xbd7a,	// (0x00064eab) aid_fshwr2_syb_pane_ParamLimits

0xbd8e,	// (0x00064ebf) aid_fshwr2_txt_pane_ParamLimits

0x1307,	// (0x0005a438) fshwr2_bg_pane_ParamLimits

0xbd9e,	// (0x00064ecf) fshwr2_func_candi_pane_ParamLimits

0xbdc0,	// (0x00064ef1) fshwr2_hwr_syb_pane_ParamLimits

0xbde4,	// (0x00064f15) fshwr2_icf_pane_ParamLimits

0x39f0,	// (0x0005cb21) list_double_graphic_pane_vc_g4_ParamLimits

0x39f0,	// (0x0005cb21) list_double_graphic_pane_vc_g4

0x1dd8,	// (0x0005af09) cell_ituss_key_pane_g3_ParamLimits

0x1dd8,	// (0x0005af09) cell_ituss_key_pane_g3

0x1f0a,	// (0x0005b03b) cell_ituss_key_t5_ParamLimits

0x1f0a,	// (0x0005b03b) cell_ituss_key_t5

0xebd7,	// (0x00067d08) popup_fep_vkbss_window_ParamLimits

0xe76d,	// (0x0006789e) aid_cell_ai5_quarter

0xed46,	// (0x00067e77) icf_edit_indi_pane_t1_ParamLimits

0x8b12,	// (0x00061c43) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x8b12,	// (0x00061c43) aid_tch_indicator_popup_pane_cp2

0x8b25,	// (0x00061c56) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x8b25,	// (0x00061c56) aid_tch_query_popup_data_pane_cp2

0x2f7b,	// (0x0005c0ac) aid_tch_query_popup_pane_ParamLimits

0x2f7b,	// (0x0005c0ac) aid_tch_query_popup_pane

0x2f7b,	// (0x0005c0ac) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2f7b,	// (0x0005c0ac) aid_tch_query_popup_data_pane_cp1

0x25cd,	// (0x0005b6fe) cell_fshwr2_syb_bg_pane_ParamLimits

0xbed9,	// (0x0006500a) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xbeed,	// (0x0006501e) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xebc8,	// (0x00067cf9) popup_fep_vkb_icf_pane_ParamLimits

0xbcfa,	// (0x00064e2b) bg_popup_fep_char_preview_window_g10

0xe84c,	// (0x0006797d) cell_ai5_widget_pane_g11_ParamLimits

0xe84c,	// (0x0006797d) cell_ai5_widget_pane_g11

0xe858,	// (0x00067989) cell_ai5_widget_pane_g12_ParamLimits

0xe858,	// (0x00067989) cell_ai5_widget_pane_g12

0xe864,	// (0x00067995) cell_ai5_widget_pane_g13_ParamLimits

0xe864,	// (0x00067995) cell_ai5_widget_pane_g13

0xe963,	// (0x00067a94) cell_ai5_widget_pane_t11_ParamLimits

0xe963,	// (0x00067a94) cell_ai5_widget_pane_t11

0xe975,	// (0x00067aa6) cell_ai5_widget_pane_t12_ParamLimits

0xe975,	// (0x00067aa6) cell_ai5_widget_pane_t12

0x1de4,	// (0x0005af15) cell_ituss_key_pane_g4_ParamLimits

0x1de4,	// (0x0005af15) cell_ituss_key_pane_g4

0x1e00,	// (0x0005af31) cell_ituss_key_pane_g5_ParamLimits

0x1e00,	// (0x0005af31) cell_ituss_key_pane_g5

0x1e1c,	// (0x0005af4d) cell_ituss_key_pane_g6_ParamLimits

0x1e1c,	// (0x0005af4d) cell_ituss_key_pane_g6

0x2b1d,	// (0x0005bc4e) bg_icf_pane_g1

0xeccf,	// (0x00067e00) bg_icf_pane_g2

0xecd9,	// (0x00067e0a) bg_icf_pane_g3

0xece1,	// (0x00067e12) bg_icf_pane_g4

0xeceb,	// (0x00067e1c) bg_icf_pane_g5

0xecf5,	// (0x00067e26) bg_icf_pane_g6

0xecff,	// (0x00067e30) bg_icf_pane_g7

0xed07,	// (0x00067e38) bg_icf_pane_g8

0xed11,	// (0x00067e42) bg_icf_pane_g9

0x0008,

0xfeff,	// (0x00069030) bg_icf_pane_g

0x8584,	// (0x000616b5) popup_hyb_candi_window_ParamLimits

0x8584,	// (0x000616b5) popup_hyb_candi_window

0x2ba9,	// (0x0005bcda) bg_popup_sub_pane_cp01_ParamLimits

0x2ba9,	// (0x0005bcda) bg_popup_sub_pane_cp01

0x880d,	// (0x0006193e) entry_hyb_candi_pane_ParamLimits

0x880d,	// (0x0006193e) entry_hyb_candi_pane

0x881c,	// (0x0006194d) grid_hyb_candi_pane_ParamLimits

0x881c,	// (0x0006194d) grid_hyb_candi_pane

0x8831,	// (0x00061962) grid_hyb_phrase_pane_ParamLimits

0x8831,	// (0x00061962) grid_hyb_phrase_pane

0x8840,	// (0x00061971) cell_hyb_candi_pane_ParamLimits

0x8840,	// (0x00061971) cell_hyb_candi_pane

0x8ebb,	// (0x00061fec) cell_hyb_candi_scroll_pane

0xde48,	// (0x00066f79) cell_hyb_candi_pane_g1

0x885c,	// (0x0006198d) cell_hyb_candi_pane_t1

0x886a,	// (0x0006199b) cell_hyb_phrase_pane

0xde48,	// (0x00066f79) cell_hyb_phrase_pane_g1

0x8873,	// (0x000619a4) cell_hyb_phrase_pane_t1

0x8881,	// (0x000619b2) entry_hyb_candi_pane_t1

0x22a6,	// (0x0005b3d7) input_focus_pane_cp06

0x888f,	// (0x000619c0) cell_hyb_candi_scroll_pane_g1

0x8897,	// (0x000619c8) cell_hyb_candi_scroll_pane_g1_aid

0x889f,	// (0x000619d0) cell_hyb_candi_scroll_pane_g2

0x88a7,	// (0x000619d8) cell_hyb_candi_scroll_pane_g2_aid

0x88af,	// (0x000619e0) cell_hyb_candi_scroll_pane_g3

0x88b7,	// (0x000619e8) cell_hyb_candi_scroll_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large

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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0003827c };

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
0x7784,	// (0x0003fa00) Screen

0x7790,	// (0x0003fa0c) application_window_ParamLimits

0x7790,	// (0x0003fa0c) application_window

0x8f2f,	// (0x000411ab) screen_g1

0x77c8,	// (0x0003fa44) area_bottom_pane_ParamLimits

0x77c8,	// (0x0003fa44) area_bottom_pane

0x147f,	// (0x000396fb) area_top_pane_ParamLimits

0x147f,	// (0x000396fb) area_top_pane

0x1513,	// (0x0003978f) main_pane_ParamLimits

0x1513,	// (0x0003978f) main_pane

0x8f39,	// (0x000411b5) misc_graphics

0x9547,	// (0x000417c3) battery_pane_ParamLimits

0x9547,	// (0x000417c3) battery_pane

0xc8b4,	// (0x00044b30) bg_status_flat_pane_g8

0xc8bc,	// (0x00044b38) bg_status_flat_pane_g9

0xc03c,	// (0x000442b8) context_pane_ParamLimits

0xc03c,	// (0x000442b8) context_pane

0x96b2,	// (0x0004192e) navi_pane_ParamLimits

0x96b2,	// (0x0004192e) navi_pane

0x9730,	// (0x000419ac) signal_pane_ParamLimits

0x9730,	// (0x000419ac) signal_pane

0x0008,

0x0094,	// (0x00038310) bg_status_flat_pane_g

0x97c0,	// (0x00041a3c) status_pane_g1_ParamLimits

0x97c0,	// (0x00041a3c) status_pane_g1

0x97d6,	// (0x00041a52) status_pane_g2_ParamLimits

0x97d6,	// (0x00041a52) status_pane_g2

0xc0a1,	// (0x0004431d) status_pane_g3_ParamLimits

0xc0a1,	// (0x0004431d) status_pane_g3

0x0004,

0xf7a6,	// (0x00047a22) status_pane_g_ParamLimits

0xf7a6,	// (0x00047a22) status_pane_g

0x97e2,	// (0x00041a5e) title_pane_ParamLimits

0x97e2,	// (0x00041a5e) title_pane

0x9845,	// (0x00041ac1) uni_indicator_pane_ParamLimits

0x9845,	// (0x00041ac1) uni_indicator_pane

0xbf65,	// (0x000441e1) bg_list_pane_ParamLimits

0xbf65,	// (0x000441e1) bg_list_pane

0xbf85,	// (0x00044201) find_pane

0x8158,	// (0x000403d4) listscroll_app_pane_ParamLimits

0x8158,	// (0x000403d4) listscroll_app_pane

0xbf8d,	// (0x00044209) listscroll_form_pane

0x23e9,	// (0x0003a665) listscroll_gen_pane_ParamLimits

0x23e9,	// (0x0003a665) listscroll_gen_pane

0x23fd,	// (0x0003a679) listscroll_set_pane

0xbfa7,	// (0x00044223) main_idle_act_pane

0xbd49,	// (0x00043fc5) main_idle_trad_pane

0xbd49,	// (0x00043fc5) main_list_empty_pane

0xb38e,	// (0x0004360a) main_midp_pane

0xbfb9,	// (0x00044235) main_pane_g1_ParamLimits

0xbfb9,	// (0x00044235) main_pane_g1

0x8168,	// (0x000403e4) popup_ai_message_window_ParamLimits

0x8168,	// (0x000403e4) popup_ai_message_window

0x81f9,	// (0x00040475) popup_fep_china_uni_window_ParamLimits

0x81f9,	// (0x00040475) popup_fep_china_uni_window

0x2503,	// (0x0003a77f) popup_fep_japan_candidate_window_ParamLimits

0x2503,	// (0x0003a77f) popup_fep_japan_candidate_window

0x2521,	// (0x0003a79d) popup_fep_japan_predictive_window_ParamLimits

0x2521,	// (0x0003a79d) popup_fep_japan_predictive_window

0x8253,	// (0x000404cf) popup_find_window

0x8270,	// (0x000404ec) popup_grid_graphic_window_ParamLimits

0x8270,	// (0x000404ec) popup_grid_graphic_window

0x2586,	// (0x0003a802) popup_large_graphic_colour_window

0x8308,	// (0x00040584) popup_menu_window_ParamLimits

0x8308,	// (0x00040584) popup_menu_window

0x84d4,	// (0x00040750) popup_note_image_window

0x849a,	// (0x00040716) popup_note_wait_window_ParamLimits

0x849a,	// (0x00040716) popup_note_wait_window

0x84ec,	// (0x00040768) popup_note_window_ParamLimits

0x84ec,	// (0x00040768) popup_note_window

0x8592,	// (0x0004080e) popup_query_code_window_ParamLimits

0x8592,	// (0x0004080e) popup_query_code_window

0x27d0,	// (0x0003aa4c) popup_query_data_code_window_ParamLimits

0x27d0,	// (0x0003aa4c) popup_query_data_code_window

0x85cc,	// (0x00040848) popup_query_data_window_ParamLimits

0x85cc,	// (0x00040848) popup_query_data_window

0x8648,	// (0x000408c4) popup_query_sat_info_window_ParamLimits

0x8648,	// (0x000408c4) popup_query_sat_info_window

0x86df,	// (0x0004095b) popup_snote_single_graphic_window_ParamLimits

0x86df,	// (0x0004095b) popup_snote_single_graphic_window

0x86df,	// (0x0004095b) popup_snote_single_text_window_ParamLimits

0x86df,	// (0x0004095b) popup_snote_single_text_window

0x2853,	// (0x0003aacf) popup_sub_window_general

0x2981,	// (0x0003abfd) popup_window_general_ParamLimits

0x2981,	// (0x0003abfd) popup_window_general

0xbfc7,	// (0x00044243) power_save_pane

0x7fc0,	// (0x0004023c) control_pane_g1_ParamLimits

0x7fc0,	// (0x0004023c) control_pane_g1

0x7fe9,	// (0x00040265) control_pane_g2_ParamLimits

0x7fe9,	// (0x00040265) control_pane_g2

0xbf4f,	// (0x000441cb) control_pane_g3_ParamLimits

0xbf4f,	// (0x000441cb) control_pane_g3

0x0007,

0xf78e,	// (0x00047a0a) control_pane_g_ParamLimits

0xf78e,	// (0x00047a0a) control_pane_g

0x8051,	// (0x000402cd) control_pane_t1_ParamLimits

0x8051,	// (0x000402cd) control_pane_t1

0x80af,	// (0x0004032b) control_pane_t2_ParamLimits

0x80af,	// (0x0004032b) control_pane_t2

0x0002,

0xf79f,	// (0x00047a1b) control_pane_t_ParamLimits

0xf79f,	// (0x00047a1b) control_pane_t

0xbe70,	// (0x000440ec) navi_navi_volume_pane_cp1

0xbe79,	// (0x000440f5) status_small_icon_pane

0xbe81,	// (0x000440fd) status_small_pane_g1_ParamLimits

0xbe81,	// (0x000440fd) status_small_pane_g1

0xbeb5,	// (0x00044131) status_small_pane_g2_ParamLimits

0xbeb5,	// (0x00044131) status_small_pane_g2

0xbec1,	// (0x0004413d) status_small_pane_g3_ParamLimits

0xbec1,	// (0x0004413d) status_small_pane_g3

0xbecd,	// (0x00044149) status_small_pane_g4_ParamLimits

0xbecd,	// (0x00044149) status_small_pane_g4

0xbed9,	// (0x00044155) status_small_pane_g5_ParamLimits

0xbed9,	// (0x00044155) status_small_pane_g5

0xbee8,	// (0x00044164) status_small_pane_g6_ParamLimits

0xbee8,	// (0x00044164) status_small_pane_g6

0x0007,

0xf77d,	// (0x000479f9) status_small_pane_g_ParamLimits

0xf77d,	// (0x000479f9) status_small_pane_g

0xbf18,	// (0x00044194) status_small_pane_t1

0xbf3b,	// (0x000441b7) status_small_wait_pane_ParamLimits

0xbf3b,	// (0x000441b7) status_small_wait_pane

0x7e66,	// (0x000400e2) aid_levels_signal_ParamLimits

0x7e66,	// (0x000400e2) aid_levels_signal

0x7e7e,	// (0x000400fa) signal_pane_g1_ParamLimits

0x7e7e,	// (0x000400fa) signal_pane_g1

0x7e99,	// (0x00040115) signal_pane_g2_ParamLimits

0x7e99,	// (0x00040115) signal_pane_g2

0x0003,

0xf70e,	// (0x0004798a) signal_pane_g_ParamLimits

0xf70e,	// (0x0004798a) signal_pane_g

0xb88f,	// (0x00043b0b) context_pane_g1

0x79a6,	// (0x0003fc22) title_pane_g1

0x79dd,	// (0x0003fc59) title_pane_t1

0x8f4f,	// (0x000411cb) title_pane_t2

0x8f75,	// (0x000411f1) title_pane_t3

0x0002,

0xf55d,	// (0x000477d9) title_pane_t

0x986d,	// (0x00041ae9) aid_levels_battery_ParamLimits

0x986d,	// (0x00041ae9) aid_levels_battery

0x9889,	// (0x00041b05) battery_pane_g1_ParamLimits

0x9889,	// (0x00041b05) battery_pane_g1

0x98a6,	// (0x00041b22) battery_pane_g2_ParamLimits

0x98a6,	// (0x00041b22) battery_pane_g2

0x0001,

0xf7b1,	// (0x00047a2d) battery_pane_g_ParamLimits

0xf7b1,	// (0x00047a2d) battery_pane_g

0x9b9c,	// (0x00041e18) uni_indicator_pane_g1

0x9bb3,	// (0x00041e2f) uni_indicator_pane_g2

0x9bc9,	// (0x00041e45) uni_indicator_pane_g3

0x0005,

0xf87c,	// (0x00047af8) uni_indicator_pane_g

0xbbc7,	// (0x00043e43) navi_icon_pane_ParamLimits

0xbbc7,	// (0x00043e43) navi_icon_pane

0xbb10,	// (0x00043d8c) navi_midp_pane

0xbbe3,	// (0x00043e5f) navi_navi_pane

0xbbed,	// (0x00043e69) navi_text_pane_ParamLimits

0xbbed,	// (0x00043e69) navi_text_pane

0x8f2f,	// (0x000411ab) status_small_wait_pane_g1

0x9260,	// (0x000414dc) status_small_wait_pane_g2

0x0001,

0xf877,	// (0x00047af3) status_small_wait_pane_g

0xce71,	// (0x000450ed) navi_navi_icon_text_pane

0xce79,	// (0x000450f5) navi_navi_pane_g1_ParamLimits

0xce79,	// (0x000450f5) navi_navi_pane_g1

0xce8b,	// (0x00045107) navi_navi_pane_g2_ParamLimits

0xce8b,	// (0x00045107) navi_navi_pane_g2

0x0001,

0xf845,	// (0x00047ac1) navi_navi_pane_g_ParamLimits

0xf845,	// (0x00047ac1) navi_navi_pane_g

0xce9d,	// (0x00045119) navi_navi_tabs_pane

0xcea6,	// (0x00045122) navi_navi_text_pane

0xce71,	// (0x000450ed) navi_navi_volume_pane

0xce4d,	// (0x000450c9) navi_text_pane_t1

0xce41,	// (0x000450bd) navi_icon_pane_g1

0xcd94,	// (0x00045010) navi_navi_text_pane_t1

0x2c11,	// (0x0003ae8d) navi_navi_volume_pane_g1

0x8956,	// (0x00040bd2) volume_small_pane

0x9ad9,	// (0x00041d55) navi_navi_icon_text_pane_g1

0xcd7a,	// (0x00044ff6) navi_navi_icon_text_pane_t1

0xbbe3,	// (0x00043e5f) navi_tabs_2_long_pane

0xbbe3,	// (0x00043e5f) navi_tabs_2_pane

0xbbe3,	// (0x00043e5f) navi_tabs_3_long_pane

0xbbe3,	// (0x00043e5f) navi_tabs_3_pane

0xbbe3,	// (0x00043e5f) navi_tabs_4_pane

0x8936,	// (0x00040bb2) tabs_2_active_pane_ParamLimits

0x8936,	// (0x00040bb2) tabs_2_active_pane

0x8946,	// (0x00040bc2) tabs_2_passive_pane_ParamLimits

0x8946,	// (0x00040bc2) tabs_2_passive_pane

0x8904,	// (0x00040b80) tabs_3_active_pane_ParamLimits

0x8904,	// (0x00040b80) tabs_3_active_pane

0x8914,	// (0x00040b90) tabs_3_passive_pane_ParamLimits

0x8914,	// (0x00040b90) tabs_3_passive_pane

0x8925,	// (0x00040ba1) tabs_3_passive_pane_cp_ParamLimits

0x8925,	// (0x00040ba1) tabs_3_passive_pane_cp

0x88d1,	// (0x00040b4d) tabs_4_active_pane_ParamLimits

0x88d1,	// (0x00040b4d) tabs_4_active_pane

0x88e2,	// (0x00040b5e) tabs_4_passive_pane_ParamLimits

0x88e2,	// (0x00040b5e) tabs_4_passive_pane

0x2b9d,	// (0x0003ae19) tabs_4_passive_pane_cp_ParamLimits

0x2b9d,	// (0x0003ae19) tabs_4_passive_pane_cp

0x88f3,	// (0x00040b6f) tabs_4_passive_pane_cp2_ParamLimits

0x88f3,	// (0x00040b6f) tabs_4_passive_pane_cp2

0x88ad,	// (0x00040b29) tabs_2_long_active_pane_ParamLimits

0x88ad,	// (0x00040b29) tabs_2_long_active_pane

0x88bf,	// (0x00040b3b) tabs_2_long_passive_pane_ParamLimits

0x88bf,	// (0x00040b3b) tabs_2_long_passive_pane

0x886e,	// (0x00040aea) tabs_3_long_active_pane_ParamLimits

0x886e,	// (0x00040aea) tabs_3_long_active_pane

0x8881,	// (0x00040afd) tabs_3_long_passive_pane_ParamLimits

0x8881,	// (0x00040afd) tabs_3_long_passive_pane

0x889a,	// (0x00040b16) tabs_3_long_passive_pane_cp_ParamLimits

0x889a,	// (0x00040b16) tabs_3_long_passive_pane_cp

0x2ac4,	// (0x0003ad40) volume_small_pane_g1

0x2acd,	// (0x0003ad49) volume_small_pane_g2

0x2ad6,	// (0x0003ad52) volume_small_pane_g3

0x2adf,	// (0x0003ad5b) volume_small_pane_g4

0x2ae8,	// (0x0003ad64) volume_small_pane_g5

0x2af1,	// (0x0003ad6d) volume_small_pane_g6

0x2afa,	// (0x0003ad76) volume_small_pane_g7

0x2b03,	// (0x0003ad7f) volume_small_pane_g8

0x2b0c,	// (0x0003ad88) volume_small_pane_g9

0x2b15,	// (0x0003ad91) volume_small_pane_g10

0x0009,

0xf826,	// (0x00047aa2) volume_small_pane_g

0x8f87,	// (0x00041203) bg_active_tab_pane_cp2_ParamLimits

0x8f87,	// (0x00041203) bg_active_tab_pane_cp2

0x8f95,	// (0x00041211) tabs_3_active_pane_g1

0x7a69,	// (0x0003fce5) tabs_3_active_pane_t1

0x8f87,	// (0x00041203) bg_passive_tab_pane_cp2_ParamLimits

0x8f87,	// (0x00041203) bg_passive_tab_pane_cp2

0x8f95,	// (0x00041211) tabs_3_passive_pane_g1

0x7a69,	// (0x0003fce5) tabs_3_passive_pane_t1

0x8f87,	// (0x00041203) bg_active_tab_pane_cp3_ParamLimits

0x8f87,	// (0x00041203) bg_active_tab_pane_cp3

0x8f9d,	// (0x00041219) tabs_4_active_pane_g1

0x7a7b,	// (0x0003fcf7) tabs_4_active_pane_t1

0x8f87,	// (0x00041203) bg_passive_tab_pane_cp3_ParamLimits

0x8f87,	// (0x00041203) bg_passive_tab_pane_cp3

0x8f9d,	// (0x00041219) tabs_4_1_passive_pane_g1

0x7a7b,	// (0x0003fcf7) tabs_4_1_passive_pane_t1

0xb38e,	// (0x0004360a) list_highlight_pane_cp2

0x9c52,	// (0x00041ece) list_set_pane_ParamLimits

0x9c52,	// (0x00041ece) list_set_pane

0x9cec,	// (0x00041f68) main_pane_set_t1_ParamLimits

0x9cec,	// (0x00041f68) main_pane_set_t1

0x9d0c,	// (0x00041f88) main_pane_set_t2_ParamLimits

0x9d0c,	// (0x00041f88) main_pane_set_t2

0x9d20,	// (0x00041f9c) main_pane_set_t3_ParamLimits

0x9d20,	// (0x00041f9c) main_pane_set_t3

0x9d32,	// (0x00041fae) main_pane_set_t4_ParamLimits

0x9d32,	// (0x00041fae) main_pane_set_t4

0x0003,

0x0153,	// (0x000383cf) main_pane_set_t_ParamLimits

0x0153,	// (0x000383cf) main_pane_set_t

0x9d44,	// (0x00041fc0) setting_code_pane

0x9d4c,	// (0x00041fc8) setting_slider_graphic_pane

0x9d4c,	// (0x00041fc8) setting_slider_pane

0x9d4c,	// (0x00041fc8) setting_text_pane

0x9d4c,	// (0x00041fc8) setting_volume_pane

0x180a,	// (0x00039a86) volume_set_pane

0x8fa5,	// (0x00041221) bg_set_opt_pane_cp

0x1812,	// (0x00039a8e) setting_slider_pane_t1

0x182b,	// (0x00039aa7) setting_slider_pane_t2

0x1845,	// (0x00039ac1) setting_slider_pane_t3

0x0002,

0xf564,	// (0x000477e0) setting_slider_pane_t

0x185d,	// (0x00039ad9) slider_set_pane

0x8f39,	// (0x000411b5) bg_set_opt_pane_cp2

0x8fb3,	// (0x0004122f) setting_slider_graphic_pane_g1

0x1873,	// (0x00039aef) setting_slider_graphic_pane_t1

0x1883,	// (0x00039aff) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x000477e7) setting_slider_graphic_pane_t

0x1893,	// (0x00039b0f) slider_set_pane_cp

0x8f39,	// (0x000411b5) input_focus_pane_cp1

0xd2f5,	// (0x00045571) list_set_text_pane

0x8f2f,	// (0x000411ab) setting_text_pane_g1

0x8f39,	// (0x000411b5) input_focus_pane_cp2

0x8f2f,	// (0x000411ab) setting_code_pane_g1

0x8fbc,	// (0x00041238) setting_code_pane_t1

0x0526,	// (0x000387a2) set_text_pane_t1_ParamLimits

0x0526,	// (0x000387a2) set_text_pane_t1

0xb284,	// (0x00043500) set_opt_bg_pane_g1

0xb28c,	// (0x00043508) set_opt_bg_pane_g2

0xd2d5,	// (0x00045551) set_opt_bg_pane_g3

0xb29c,	// (0x00043518) set_opt_bg_pane_g4

0xb2a4,	// (0x00043520) set_opt_bg_pane_g5

0xb2ac,	// (0x00043528) set_opt_bg_pane_g6

0xd2dd,	// (0x00045559) set_opt_bg_pane_g7

0xd2e5,	// (0x00045561) set_opt_bg_pane_g8

0xd2ed,	// (0x00045569) set_opt_bg_pane_g9

0x0008,

0xf8ce,	// (0x00047b4a) set_opt_bg_pane_g

0xd2c8,	// (0x00045544) slider_set_pane_g1

0x2c86,	// (0x0003af02) slider_set_pane_g2

0x0006,

0xf8bf,	// (0x00047b3b) slider_set_pane_g

0x2c22,	// (0x0003ae9e) volume_set_pane_g1

0x2c2a,	// (0x0003aea6) volume_set_pane_g2

0x2c32,	// (0x0003aeae) volume_set_pane_g3

0x2c3a,	// (0x0003aeb6) volume_set_pane_g4

0x2c42,	// (0x0003aebe) volume_set_pane_g5

0x2c4a,	// (0x0003aec6) volume_set_pane_g6

0x2c52,	// (0x0003aece) volume_set_pane_g7

0x2c5a,	// (0x0003aed6) volume_set_pane_g8

0x2c62,	// (0x0003aede) volume_set_pane_g9

0x2c6a,	// (0x0003aee6) volume_set_pane_g10

0x0009,

0xf897,	// (0x00047b13) volume_set_pane_g

0x7a8d,	// (0x0003fd09) indicator_pane_ParamLimits

0x7a8d,	// (0x0003fd09) indicator_pane

0x7ab5,	// (0x0003fd31) main_idle_pane_g2_ParamLimits

0x7ab5,	// (0x0003fd31) main_idle_pane_g2

0x7aed,	// (0x0003fd69) main_pane_idle_g1_ParamLimits

0x7aed,	// (0x0003fd69) main_pane_idle_g1

0x8fca,	// (0x00041246) popup_clock_digital_analogue_window_ParamLimits

0x8fca,	// (0x00041246) popup_clock_digital_analogue_window

0x7b14,	// (0x0003fd90) soft_indicator_pane_ParamLimits

0x7b14,	// (0x0003fd90) soft_indicator_pane

0x7b2e,	// (0x0003fdaa) wallpaper_pane_ParamLimits

0x7b2e,	// (0x0003fdaa) wallpaper_pane

0x8f2f,	// (0x000411ab) wallpaper_pane_g1

0x7b40,	// (0x0003fdbc) indicator_pane_g1_ParamLimits

0x7b40,	// (0x0003fdbc) indicator_pane_g1

0xd489,	// (0x00045705) navi_navi_icon_text_pane_srt_g1

0x8ff8,	// (0x00041274) soft_indicator_pane_t1

0x9012,	// (0x0004128e) aid_ps_area_pane

0x7b56,	// (0x0003fdd2) aid_ps_clock_pane

0x9023,	// (0x0004129f) aid_ps_indicator_pane

0x902f,	// (0x000412ab) indicator_ps_pane_ParamLimits

0x902f,	// (0x000412ab) indicator_ps_pane

0x903e,	// (0x000412ba) power_save_pane_g1_ParamLimits

0x903e,	// (0x000412ba) power_save_pane_g1

0x904a,	// (0x000412c6) power_save_pane_g2_ParamLimits

0x904a,	// (0x000412c6) power_save_pane_g2

0x1373,	// (0x000395ef) aid_navinavi_width_pane

0x9012,	// (0x0004128e) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x000477ec) power_save_pane_g_ParamLimits

0xf570,	// (0x000477ec) power_save_pane_g

0x9058,	// (0x000412d4) power_save_pane_t1_ParamLimits

0x9058,	// (0x000412d4) power_save_pane_t1

0x7b56,	// (0x0003fdd2) aid_ps_clock_pane_ParamLimits

0x9023,	// (0x0004129f) aid_ps_indicator_pane_ParamLimits

0x906a,	// (0x000412e6) power_save_pane_t4_ParamLimits

0x906a,	// (0x000412e6) power_save_pane_t4

0x0001,

0xf575,	// (0x000477f1) power_save_pane_t_ParamLimits

0xf575,	// (0x000477f1) power_save_pane_t

0x9094,	// (0x00041310) power_save_t3_ParamLimits

0x9094,	// (0x00041310) power_save_t3

0x907f,	// (0x000412fb) power_save_t2_ParamLimits

0x907f,	// (0x000412fb) power_save_t2

0x90a9,	// (0x00041325) indicator_ps_pane_g1

0x7b64,	// (0x0003fde0) ai_gene_pane_ParamLimits

0x7b64,	// (0x0003fde0) ai_gene_pane

0x7b7b,	// (0x0003fdf7) ai_links_pane_ParamLimits

0x7b7b,	// (0x0003fdf7) ai_links_pane

0x7b93,	// (0x0003fe0f) indicator_pane_cp1_ParamLimits

0x7b93,	// (0x0003fe0f) indicator_pane_cp1

0x7ba2,	// (0x0003fe1e) main_pane_idle_g1_cp_ParamLimits

0x7ba2,	// (0x0003fe1e) main_pane_idle_g1_cp

0x90b2,	// (0x0004132e) popup_ai_links_title_window

0x7bba,	// (0x0003fe36) soft_indicator_pane_cp1_ParamLimits

0x7bba,	// (0x0003fe36) soft_indicator_pane_cp1

0xd130,	// (0x000453ac) ai_links_pane_g1

0xd139,	// (0x000453b5) grid_ai_links_pane

0x9b93,	// (0x00041e0f) ai_gene_pane_1

0xd0ff,	// (0x0004537b) ai_gene_pane_2

0xd127,	// (0x000453a3) list_highlight_pane_cp4

0x9b6f,	// (0x00041deb) cell_ai_link_pane_ParamLimits

0x9b6f,	// (0x00041deb) cell_ai_link_pane

0xd0f7,	// (0x00045373) cell_ai_link_pane_g1

0x9260,	// (0x000414dc) cell_ai_link_pane_g2

0x0001,

0xf872,	// (0x00047aee) cell_ai_link_pane_g

0x8f39,	// (0x000411b5) grid_highlight_cp2

0x8f39,	// (0x000411b5) bg_popup_sub_pane_cp1

0x90c9,	// (0x00041345) popup_ai_links_title_window_t1

0xd047,	// (0x000452c3) ai_gene_pane_1_g1_ParamLimits

0xd047,	// (0x000452c3) ai_gene_pane_1_g1

0xd053,	// (0x000452cf) ai_gene_pane_1_g2_ParamLimits

0xd053,	// (0x000452cf) ai_gene_pane_1_g2

0x0001,

0xf868,	// (0x00047ae4) ai_gene_pane_1_g_ParamLimits

0xf868,	// (0x00047ae4) ai_gene_pane_1_g

0xd060,	// (0x000452dc) ai_gene_pane_1_t1_ParamLimits

0xd060,	// (0x000452dc) ai_gene_pane_1_t1

0xd094,	// (0x00045310) grid_ai_soft_ind_pane

0xd032,	// (0x000452ae) ai_gene_pane_2_t1_ParamLimits

0xd032,	// (0x000452ae) ai_gene_pane_2_t1

0x7bce,	// (0x0003fe4a) main_pane_empty_t1_ParamLimits

0x7bce,	// (0x0003fe4a) main_pane_empty_t1

0x7be6,	// (0x0003fe62) main_pane_empty_t2_ParamLimits

0x7be6,	// (0x0003fe62) main_pane_empty_t2

0x7bfb,	// (0x0003fe77) main_pane_empty_t3_ParamLimits

0x7bfb,	// (0x0003fe77) main_pane_empty_t3

0x7c0d,	// (0x0003fe89) main_pane_empty_t4_ParamLimits

0x7c0d,	// (0x0003fe89) main_pane_empty_t4

0x7c1f,	// (0x0003fe9b) main_pane_empty_t5_ParamLimits

0x7c1f,	// (0x0003fe9b) main_pane_empty_t5

0x0004,

0xf57a,	// (0x000477f6) main_pane_empty_t_ParamLimits

0xf57a,	// (0x000477f6) main_pane_empty_t

0xb2d5,	// (0x00043551) bg_popup_window_pane_ParamLimits

0xb2d5,	// (0x00043551) bg_popup_window_pane

0xcda2,	// (0x0004501e) find_popup_pane_cp2_ParamLimits

0xcda2,	// (0x0004501e) find_popup_pane_cp2

0xcdae,	// (0x0004502a) heading_pane_ParamLimits

0xcdae,	// (0x0004502a) heading_pane

0x8f39,	// (0x000411b5) bg_popup_sub_pane

0x9af0,	// (0x00041d6c) bg_popup_window_pane_g1_ParamLimits

0x9af0,	// (0x00041d6c) bg_popup_window_pane_g1

0x9aff,	// (0x00041d7b) bg_popup_window_pane_g2_ParamLimits

0x9aff,	// (0x00041d7b) bg_popup_window_pane_g2

0x9b0b,	// (0x00041d87) bg_popup_window_pane_g3_ParamLimits

0x9b0b,	// (0x00041d87) bg_popup_window_pane_g3

0x9b17,	// (0x00041d93) bg_popup_window_pane_g4_ParamLimits

0x9b17,	// (0x00041d93) bg_popup_window_pane_g4

0x9b26,	// (0x00041da2) bg_popup_window_pane_g5_ParamLimits

0x9b26,	// (0x00041da2) bg_popup_window_pane_g5

0x9b36,	// (0x00041db2) bg_popup_window_pane_g6_ParamLimits

0x9b36,	// (0x00041db2) bg_popup_window_pane_g6

0x9b42,	// (0x00041dbe) bg_popup_window_pane_g7_ParamLimits

0x9b42,	// (0x00041dbe) bg_popup_window_pane_g7

0x9b51,	// (0x00041dcd) bg_popup_window_pane_g8_ParamLimits

0x9b51,	// (0x00041dcd) bg_popup_window_pane_g8

0x9b60,	// (0x00041ddc) bg_popup_window_pane_g9_ParamLimits

0x9b60,	// (0x00041ddc) bg_popup_window_pane_g9

0xcd88,	// (0x00045004) bg_popup_window_pane_g10_ParamLimits

0xcd88,	// (0x00045004) bg_popup_window_pane_g10

0x0009,

0x00e6,	// (0x00038362) bg_popup_window_pane_g_ParamLimits

0x00e6,	// (0x00038362) bg_popup_window_pane_g

0xcd31,	// (0x00044fad) bg_popup_heading_pane_ParamLimits

0xcd31,	// (0x00044fad) bg_popup_heading_pane

0x2dc0,	// (0x0003b03c) tabs_4_passive_pane_cp_srt_ParamLimits

0x2dc0,	// (0x0003b03c) tabs_4_passive_pane_cp_srt

0x2dd2,	// (0x0003b04e) tabs_4_passive_pane_srt_ParamLimits

0xcd45,	// (0x00044fc1) heading_pane_g2

0x2dd2,	// (0x0003b04e) tabs_4_passive_pane_srt

0xc20b,	// (0x00044487) bg_passive_tab_pane_cp3_srt_ParamLimits

0xc20b,	// (0x00044487) bg_passive_tab_pane_cp3_srt

0xcd4d,	// (0x00044fc9) heading_pane_t1_ParamLimits

0xcd4d,	// (0x00044fc9) heading_pane_t1

0xcd64,	// (0x00044fe0) heading_pane_t2_ParamLimits

0xcd64,	// (0x00044fe0) heading_pane_t2

0x0001,

0xf840,	// (0x00047abc) heading_pane_t_ParamLimits

0xf840,	// (0x00047abc) heading_pane_t

0xc87c,	// (0x00044af8) bg_popup_heading_pane_g1

0xc90d,	// (0x00044b89) bg_popup_heading_pane_g2

0xc917,	// (0x00044b93) bg_popup_heading_pane_g3

0xc921,	// (0x00044b9d) bg_popup_heading_pane_g4

0xc92b,	// (0x00044ba7) bg_popup_heading_pane_g5

0xc935,	// (0x00044bb1) bg_popup_heading_pane_g6

0xc93d,	// (0x00044bb9) bg_popup_heading_pane_g7

0xc945,	// (0x00044bc1) bg_popup_heading_pane_g8

0xc94f,	// (0x00044bcb) bg_popup_heading_pane_g9

0x0008,

0x00a7,	// (0x00038323) bg_popup_heading_pane_g

0xc197,	// (0x00044413) bg_popup_sub_pane_g1

0xc19f,	// (0x0004441b) bg_popup_sub_pane_g2

0xc1a7,	// (0x00044423) bg_popup_sub_pane_g3

0xc1af,	// (0x0004442b) bg_popup_sub_pane_g4

0xc1b7,	// (0x00044433) bg_popup_sub_pane_g5

0xc1bf,	// (0x0004443b) bg_popup_sub_pane_g6

0xc1c7,	// (0x00044443) bg_popup_sub_pane_g7

0xc1cf,	// (0x0004444b) bg_popup_sub_pane_g8

0xc1d7,	// (0x00044453) bg_popup_sub_pane_g9

0x0008,

0xf813,	// (0x00047a8f) bg_popup_sub_pane_g

0x8f87,	// (0x00041203) bg_popup_window_pane_cp5_ParamLimits

0x8f87,	// (0x00041203) bg_popup_window_pane_cp5

0x90e6,	// (0x00041362) popup_note_window_g1_ParamLimits

0x90e6,	// (0x00041362) popup_note_window_g1

0x90f2,	// (0x0004136e) popup_note_window_t1_ParamLimits

0x90f2,	// (0x0004136e) popup_note_window_t1

0x9104,	// (0x00041380) popup_note_window_t2_ParamLimits

0x9104,	// (0x00041380) popup_note_window_t2

0x9116,	// (0x00041392) popup_note_window_t3_ParamLimits

0x9116,	// (0x00041392) popup_note_window_t3

0x9128,	// (0x000413a4) popup_note_window_t4_ParamLimits

0x9128,	// (0x000413a4) popup_note_window_t4

0x9150,	// (0x000413cc) popup_note_window_t5_ParamLimits

0x9150,	// (0x000413cc) popup_note_window_t5

0x0004,

0xf585,	// (0x00047801) popup_note_window_t_ParamLimits

0xf585,	// (0x00047801) popup_note_window_t

0x9174,	// (0x000413f0) bg_popup_window_pane_cp6_ParamLimits

0x9174,	// (0x000413f0) bg_popup_window_pane_cp6

0xc7f0,	// (0x00044a6c) popup_note_image_window_g1_ParamLimits

0xc7f0,	// (0x00044a6c) popup_note_image_window_g1

0xc7fc,	// (0x00044a78) popup_note_image_window_g2_ParamLimits

0xc7fc,	// (0x00044a78) popup_note_image_window_g2

0x0001,

0x0075,	// (0x000382f1) popup_note_image_window_g_ParamLimits

0x0075,	// (0x000382f1) popup_note_image_window_g

0xc815,	// (0x00044a91) popup_note_image_window_t1_ParamLimits

0xc815,	// (0x00044a91) popup_note_image_window_t1

0xc82e,	// (0x00044aaa) popup_note_image_window_t2_ParamLimits

0xc82e,	// (0x00044aaa) popup_note_image_window_t2

0xc847,	// (0x00044ac3) popup_note_image_window_t3_ParamLimits

0xc847,	// (0x00044ac3) popup_note_image_window_t3

0x0002,

0x007a,	// (0x000382f6) popup_note_image_window_t_ParamLimits

0x007a,	// (0x000382f6) popup_note_image_window_t

0xc6cd,	// (0x00044949) bg_popup_window_pane_cp7_ParamLimits

0xc6cd,	// (0x00044949) bg_popup_window_pane_cp7

0xc6fd,	// (0x00044979) popup_note_wait_window_g1_ParamLimits

0xc6fd,	// (0x00044979) popup_note_wait_window_g1

0xc709,	// (0x00044985) popup_note_wait_window_g2_ParamLimits

0xc709,	// (0x00044985) popup_note_wait_window_g2

0x0002,

0x0063,	// (0x000382df) popup_note_wait_window_g_ParamLimits

0x0063,	// (0x000382df) popup_note_wait_window_g

0xc721,	// (0x0004499d) popup_note_wait_window_t1_ParamLimits

0xc721,	// (0x0004499d) popup_note_wait_window_t1

0xc748,	// (0x000449c4) popup_note_wait_window_t2_ParamLimits

0xc748,	// (0x000449c4) popup_note_wait_window_t2

0xc765,	// (0x000449e1) popup_note_wait_window_t3_ParamLimits

0xc765,	// (0x000449e1) popup_note_wait_window_t3

0xc778,	// (0x000449f4) popup_note_wait_window_t4_ParamLimits

0xc778,	// (0x000449f4) popup_note_wait_window_t4

0x0004,

0x006a,	// (0x000382e6) popup_note_wait_window_t_ParamLimits

0x006a,	// (0x000382e6) popup_note_wait_window_t

0xc79d,	// (0x00044a19) wait_bar_pane_ParamLimits

0xc79d,	// (0x00044a19) wait_bar_pane

0x8f39,	// (0x000411b5) wait_anim_pane

0x8f39,	// (0x000411b5) wait_border_pane

0x8f2f,	// (0x000411ab) wait_anim_pane_g1

0x8f2f,	// (0x000411ab) wait_anim_pane_g2

0x0001,

0xf709,	// (0x00047985) wait_anim_pane_g

0xc671,	// (0x000448ed) wait_border_pane_g1

0xc67c,	// (0x000448f8) wait_border_pane_g2

0xc685,	// (0x00044901) wait_border_pane_g3

0x0002,

0x005c,	// (0x000382d8) wait_border_pane_g

0xc4e1,	// (0x0004475d) bg_popup_window_pane_cp16_ParamLimits

0xc4e1,	// (0x0004475d) bg_popup_window_pane_cp16

0xc5e1,	// (0x0004485d) indicator_popup_pane_cp4_ParamLimits

0xc5e1,	// (0x0004485d) indicator_popup_pane_cp4

0xc5f5,	// (0x00044871) popup_query_data_window_t1_ParamLimits

0xc5f5,	// (0x00044871) popup_query_data_window_t1

0xc607,	// (0x00044883) popup_query_data_window_t2_ParamLimits

0xc607,	// (0x00044883) popup_query_data_window_t2

0xc620,	// (0x0004489c) popup_query_data_window_t3_ParamLimits

0xc620,	// (0x0004489c) popup_query_data_window_t3

0x0002,

0x0055,	// (0x000382d1) popup_query_data_window_t_ParamLimits

0x0055,	// (0x000382d1) popup_query_data_window_t

0xc63a,	// (0x000448b6) query_popup_data_pane_ParamLimits

0xc63a,	// (0x000448b6) query_popup_data_pane

0xc64e,	// (0x000448ca) query_popup_data_pane_cp1_ParamLimits

0xc64e,	// (0x000448ca) query_popup_data_pane_cp1

0xc4e1,	// (0x0004475d) bg_popup_window_pane_cp10_ParamLimits

0xc4e1,	// (0x0004475d) bg_popup_window_pane_cp10

0xc513,	// (0x0004478f) indicator_popup_pane_ParamLimits

0xc513,	// (0x0004478f) indicator_popup_pane

0xc535,	// (0x000447b1) popup_query_code_window_t1_ParamLimits

0xc535,	// (0x000447b1) popup_query_code_window_t1

0xc54f,	// (0x000447cb) popup_query_code_window_t2_ParamLimits

0xc54f,	// (0x000447cb) popup_query_code_window_t2

0xc598,	// (0x00044814) popup_query_code_window_t3_ParamLimits

0xc598,	// (0x00044814) popup_query_code_window_t3

0x0002,

0x004e,	// (0x000382ca) popup_query_code_window_t_ParamLimits

0x004e,	// (0x000382ca) popup_query_code_window_t

0xc5c7,	// (0x00044843) query_popup_pane_ParamLimits

0xc5c7,	// (0x00044843) query_popup_pane

0x9174,	// (0x000413f0) bg_popup_window_pane_cp15_ParamLimits

0x9174,	// (0x000413f0) bg_popup_window_pane_cp15

0x9192,	// (0x0004140e) indicator_popup_pane_cp1_ParamLimits

0x9192,	// (0x0004140e) indicator_popup_pane_cp1

0x91a5,	// (0x00041421) indicator_popup_pane_cp2_ParamLimits

0x91a5,	// (0x00041421) indicator_popup_pane_cp2

0x91b8,	// (0x00041434) popup_query_data_code_window_g1_ParamLimits

0x91b8,	// (0x00041434) popup_query_data_code_window_g1

0x91cb,	// (0x00041447) popup_query_data_code_window_t1_ParamLimits

0x91cb,	// (0x00041447) popup_query_data_code_window_t1

0x91dd,	// (0x00041459) popup_query_data_code_window_t2_ParamLimits

0x91dd,	// (0x00041459) popup_query_data_code_window_t2

0x91ef,	// (0x0004146b) popup_query_data_code_window_t3_ParamLimits

0x91ef,	// (0x0004146b) popup_query_data_code_window_t3

0x9205,	// (0x00041481) popup_query_data_code_window_t4_ParamLimits

0x9205,	// (0x00041481) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0004780c) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0004780c) popup_query_data_code_window_t

0xbb85,	// (0x00043e01) list_single_midp_graphic_pane_g3

0x921d,	// (0x00041499) query_popup_data_pane_cp2_ParamLimits

0x9230,	// (0x000414ac) query_popup_pane_cp2_ParamLimits

0x9230,	// (0x000414ac) query_popup_pane_cp2

0x8f39,	// (0x000411b5) bg_popup_window_pane_cp11

0xc4d9,	// (0x00044755) heading_pane_cp5

0x92be,	// (0x0004153a) listscroll_popup_info_pane

0x8f39,	// (0x000411b5) input_focus_pane_cp3

0x9243,	// (0x000414bf) query_popup_pane_t1

0x9251,	// (0x000414cd) list_popup_info_pane_ParamLimits

0x9251,	// (0x000414cd) list_popup_info_pane

0x9260,	// (0x000414dc) listscroll_popup_info_pane_g1

0x9268,	// (0x000414e4) scroll_pane_cp7

0x9272,	// (0x000414ee) popup_info_list_pane_t1_ParamLimits

0x9272,	// (0x000414ee) popup_info_list_pane_t1

0x928c,	// (0x00041508) popup_info_list_pane_t2_ParamLimits

0x928c,	// (0x00041508) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00047815) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00047815) popup_info_list_pane_t

0x8f39,	// (0x000411b5) bg_popup_window_pane_cp12

0xd4a3,	// (0x0004571f) find_popup_pane

0x8fa5,	// (0x00041221) bg_popup_window_pane_cp3

0x92a6,	// (0x00041522) heading_pane_cp3

0x92b2,	// (0x0004152e) listscroll_popup_graphic_pane

0x8f39,	// (0x000411b5) bg_popup_window_pane_cp4

0x7c81,	// (0x0003fefd) heading_pane_cp4

0x92be,	// (0x0004153a) listscroll_popup_colour_pane

0x92c6,	// (0x00041542) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x92c6,	// (0x00041542) cell_large_graphic_colour_none_popup_pane

0x7c89,	// (0x0003ff05) grid_large_graphic_colour_popup_pane_ParamLimits

0x7c89,	// (0x0003ff05) grid_large_graphic_colour_popup_pane

0x92da,	// (0x00041556) listscroll_popup_colour_pane_g1_ParamLimits

0x92da,	// (0x00041556) listscroll_popup_colour_pane_g1

0x92f1,	// (0x0004156d) listscroll_popup_colour_pane_g2_ParamLimits

0x92f1,	// (0x0004156d) listscroll_popup_colour_pane_g2

0x9308,	// (0x00041584) listscroll_popup_colour_pane_g3_ParamLimits

0x9308,	// (0x00041584) listscroll_popup_colour_pane_g3

0x7cad,	// (0x0003ff29) listscroll_popup_colour_pane_g4_ParamLimits

0x7cad,	// (0x0003ff29) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0004781a) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0004781a) listscroll_popup_colour_pane_g

0x9318,	// (0x00041594) scroll_pane_cp6_ParamLimits

0x9318,	// (0x00041594) scroll_pane_cp6

0x7cbc,	// (0x0003ff38) cell_large_graphic_colour_popup_pane_ParamLimits

0x7cbc,	// (0x0003ff38) cell_large_graphic_colour_popup_pane

0x932a,	// (0x000415a6) cell_large_graphic_colour_none_popup_pane_t1

0x8f39,	// (0x000411b5) grid_highlight_pane_cp5

0x9339,	// (0x000415b5) cell_large_graphic_colour_popup_pane_g1

0x9341,	// (0x000415bd) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00047823) cell_large_graphic_colour_popup_pane_g

0x9349,	// (0x000415c5) cell_large_graphic_colour_popup_pane_g2_copy1

0x9352,	// (0x000415ce) grid_highlight_pane_cp4

0x935a,	// (0x000415d6) bg_popup_window_pane_cp8_ParamLimits

0x935a,	// (0x000415d6) bg_popup_window_pane_cp8

0x9375,	// (0x000415f1) popup_snote_single_text_window_g1_ParamLimits

0x9375,	// (0x000415f1) popup_snote_single_text_window_g1

0x9387,	// (0x00041603) popup_snote_single_text_window_t1_ParamLimits

0x9387,	// (0x00041603) popup_snote_single_text_window_t1

0x939a,	// (0x00041616) popup_snote_single_text_window_t2_ParamLimits

0x939a,	// (0x00041616) popup_snote_single_text_window_t2

0x93ad,	// (0x00041629) popup_snote_single_text_window_t3_ParamLimits

0x93ad,	// (0x00041629) popup_snote_single_text_window_t3

0x93e6,	// (0x00041662) popup_snote_single_text_window_t4_ParamLimits

0x93e6,	// (0x00041662) popup_snote_single_text_window_t4

0x941a,	// (0x00041696) popup_snote_single_text_window_t5_ParamLimits

0x941a,	// (0x00041696) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x00047828) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x00047828) popup_snote_single_text_window_t

0x9449,	// (0x000416c5) bg_popup_window_pane_cp9_ParamLimits

0x9449,	// (0x000416c5) bg_popup_window_pane_cp9

0x9375,	// (0x000415f1) popup_snote_single_graphic_window_g1_ParamLimits

0x9375,	// (0x000415f1) popup_snote_single_graphic_window_g1

0x9457,	// (0x000416d3) popup_snote_single_graphic_window_g2_ParamLimits

0x9457,	// (0x000416d3) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00047833) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00047833) popup_snote_single_graphic_window_g

0x9463,	// (0x000416df) popup_snote_single_graphic_window_t1_ParamLimits

0x9463,	// (0x000416df) popup_snote_single_graphic_window_t1

0x9476,	// (0x000416f2) popup_snote_single_graphic_window_t2_ParamLimits

0x9476,	// (0x000416f2) popup_snote_single_graphic_window_t2

0x9489,	// (0x00041705) popup_snote_single_graphic_window_t3_ParamLimits

0x9489,	// (0x00041705) popup_snote_single_graphic_window_t3

0x99f0,	// (0x00041c6c) popup_snote_single_graphic_window_t4_ParamLimits

0x99f0,	// (0x00041c6c) popup_snote_single_graphic_window_t4

0x9a24,	// (0x00041ca0) popup_snote_single_graphic_window_t5_ParamLimits

0x9a24,	// (0x00041ca0) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x00047838) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x00047838) popup_snote_single_graphic_window_t

0xd42b,	// (0x000456a7) grid_graphic_popup_pane_ParamLimits

0xd42b,	// (0x000456a7) grid_graphic_popup_pane

0xd453,	// (0x000456cf) listscroll_popup_graphic_pane_g1_ParamLimits

0xd453,	// (0x000456cf) listscroll_popup_graphic_pane_g1

0x9e3b,	// (0x000420b7) listscroll_popup_graphic_pane_g2_ParamLimits

0x9e3b,	// (0x000420b7) listscroll_popup_graphic_pane_g2

0x0001,

0xf8e8,	// (0x00047b64) listscroll_popup_graphic_pane_g_ParamLimits

0xf8e8,	// (0x00047b64) listscroll_popup_graphic_pane_g

0xd11b,	// (0x00045397) scroll_pane_cp5

0x9dff,	// (0x0004207b) cell_graphic_popup_pane_ParamLimits

0x9dff,	// (0x0004207b) cell_graphic_popup_pane

0xd3f6,	// (0x00045672) cell_graphic_popup_pane_g1

0xd3fe,	// (0x0004567a) cell_graphic_popup_pane_g2

0x9349,	// (0x000415c5) cell_graphic_popup_pane_g3

0x0002,

0xf8e1,	// (0x00047b5d) cell_graphic_popup_pane_g

0xd407,	// (0x00045683) cell_graphic_popup_pane_t2

0x9352,	// (0x000415ce) grid_highlight_pane_cp3

0x9a65,	// (0x00041ce1) list_gen_pane_ParamLimits

0x9a65,	// (0x00041ce1) list_gen_pane

0x9a8d,	// (0x00041d09) scroll_pane

0x9dba,	// (0x00042036) bg_list_pane_g1_ParamLimits

0x9dba,	// (0x00042036) bg_list_pane_g1

0xd363,	// (0x000455df) bg_list_pane_g2_ParamLimits

0xd363,	// (0x000455df) bg_list_pane_g2

0xd376,	// (0x000455f2) bg_list_pane_g3_ParamLimits

0xd376,	// (0x000455f2) bg_list_pane_g3

0xd388,	// (0x00045604) bg_list_pane_g4_ParamLimits

0xd388,	// (0x00045604) bg_list_pane_g4

0x9dd5,	// (0x00042051) bg_list_pane_g5_ParamLimits

0x9dd5,	// (0x00042051) bg_list_pane_g5

0x0004,

0x016b,	// (0x000383e7) bg_list_pane_g_ParamLimits

0x016b,	// (0x000383e7) bg_list_pane_g

0x895f,	// (0x00040bdb) list_double2_graphic_large_graphic_pane_ParamLimits

0x895f,	// (0x00040bdb) list_double2_graphic_large_graphic_pane

0x895f,	// (0x00040bdb) list_double2_graphic_pane_ParamLimits

0x895f,	// (0x00040bdb) list_double2_graphic_pane

0x895f,	// (0x00040bdb) list_double2_large_graphic_pane_ParamLimits

0x895f,	// (0x00040bdb) list_double2_large_graphic_pane

0x895f,	// (0x00040bdb) list_double2_pane_ParamLimits

0x895f,	// (0x00040bdb) list_double2_pane

0x895f,	// (0x00040bdb) list_double_graphic_heading_pane_ParamLimits

0x895f,	// (0x00040bdb) list_double_graphic_heading_pane

0x895f,	// (0x00040bdb) list_double_graphic_pane_ParamLimits

0x895f,	// (0x00040bdb) list_double_graphic_pane

0x895f,	// (0x00040bdb) list_double_heading_pane_ParamLimits

0x895f,	// (0x00040bdb) list_double_heading_pane

0x895f,	// (0x00040bdb) list_double_large_graphic_pane_ParamLimits

0x895f,	// (0x00040bdb) list_double_large_graphic_pane

0x895f,	// (0x00040bdb) list_double_number_pane_ParamLimits

0x895f,	// (0x00040bdb) list_double_number_pane

0x895f,	// (0x00040bdb) list_double_pane_ParamLimits

0x895f,	// (0x00040bdb) list_double_pane

0x895f,	// (0x00040bdb) list_double_time_pane_ParamLimits

0x895f,	// (0x00040bdb) list_double_time_pane

0x895f,	// (0x00040bdb) list_setting_number_pane_ParamLimits

0x895f,	// (0x00040bdb) list_setting_number_pane

0x895f,	// (0x00040bdb) list_setting_pane_ParamLimits

0x895f,	// (0x00040bdb) list_setting_pane

0x9d7f,	// (0x00041ffb) list_single_2graphic_pane_ParamLimits

0x9d7f,	// (0x00041ffb) list_single_2graphic_pane

0x9d7f,	// (0x00041ffb) list_single_graphic_heading_pane_ParamLimits

0x9d7f,	// (0x00041ffb) list_single_graphic_heading_pane

0x9d7f,	// (0x00041ffb) list_single_graphic_pane_ParamLimits

0x9d7f,	// (0x00041ffb) list_single_graphic_pane

0x9d7f,	// (0x00041ffb) list_single_heading_pane_ParamLimits

0x9d7f,	// (0x00041ffb) list_single_heading_pane

0x9da7,	// (0x00042023) list_single_large_graphic_pane_ParamLimits

0x9da7,	// (0x00042023) list_single_large_graphic_pane

0x9d7f,	// (0x00041ffb) list_single_number_heading_pane_ParamLimits

0x9d7f,	// (0x00041ffb) list_single_number_heading_pane

0x9d7f,	// (0x00041ffb) list_single_number_pane_ParamLimits

0x9d7f,	// (0x00041ffb) list_single_number_pane

0x9d7f,	// (0x00041ffb) list_single_pane_ParamLimits

0x9d7f,	// (0x00041ffb) list_single_pane

0x8f39,	// (0x000411b5) list_highlight_pane_cp1

0x1a69,	// (0x00039ce5) list_single_pane_g1_ParamLimits

0x1a69,	// (0x00039ce5) list_single_pane_g1

0x1a75,	// (0x00039cf1) list_single_pane_g2_ParamLimits

0x1a75,	// (0x00039cf1) list_single_pane_g2

0x0001,

0xf5d8,	// (0x00047854) list_single_pane_g_ParamLimits

0xf5d8,	// (0x00047854) list_single_pane_g

0x0e34,	// (0x000390b0) list_single_pane_t1_ParamLimits

0x0e34,	// (0x000390b0) list_single_pane_t1

0x1a69,	// (0x00039ce5) list_single_number_pane_g1_ParamLimits

0x1a69,	// (0x00039ce5) list_single_number_pane_g1

0x1a75,	// (0x00039cf1) list_single_number_pane_g2_ParamLimits

0x1a75,	// (0x00039cf1) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x00047854) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x00047854) list_single_number_pane_g

0x0d03,	// (0x00038f7f) list_single_number_pane_t1_ParamLimits

0x0d03,	// (0x00038f7f) list_single_number_pane_t1

0x0df2,	// (0x0003906e) list_single_number_pane_t2_ParamLimits

0x0df2,	// (0x0003906e) list_single_number_pane_t2

0x0001,

0xf8ba,	// (0x00047b36) list_single_number_pane_t_ParamLimits

0xf8ba,	// (0x00047b36) list_single_number_pane_t

0x053f,	// (0x000387bb) list_single_graphic_pane_g1_ParamLimits

0x053f,	// (0x000387bb) list_single_graphic_pane_g1

0x1a69,	// (0x00039ce5) list_single_graphic_pane_g2_ParamLimits

0x1a69,	// (0x00039ce5) list_single_graphic_pane_g2

0x1a75,	// (0x00039cf1) list_single_graphic_pane_g3_ParamLimits

0x1a75,	// (0x00039cf1) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00047843) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00047843) list_single_graphic_pane_g

0x054b,	// (0x000387c7) list_single_graphic_pane_t1_ParamLimits

0x054b,	// (0x000387c7) list_single_graphic_pane_t1

0x0561,	// (0x000387dd) list_single_heading_pane_g1_ParamLimits

0x0561,	// (0x000387dd) list_single_heading_pane_g1

0x1a75,	// (0x00039cf1) list_single_heading_pane_g2_ParamLimits

0x1a75,	// (0x00039cf1) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0004784a) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0004784a) list_single_heading_pane_g

0x0574,	// (0x000387f0) list_single_heading_pane_t1_ParamLimits

0x0574,	// (0x000387f0) list_single_heading_pane_t1

0x1a81,	// (0x00039cfd) list_single_heading_pane_t2_ParamLimits

0x1a81,	// (0x00039cfd) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0004784f) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0004784f) list_single_heading_pane_t

0x1a69,	// (0x00039ce5) list_single_number_heading_pane_g1_ParamLimits

0x1a69,	// (0x00039ce5) list_single_number_heading_pane_g1

0x1a75,	// (0x00039cf1) list_single_number_heading_pane_g2_ParamLimits

0x1a75,	// (0x00039cf1) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x00047854) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x00047854) list_single_number_heading_pane_g

0x058a,	// (0x00038806) list_single_number_heading_pane_t1_ParamLimits

0x058a,	// (0x00038806) list_single_number_heading_pane_t1

0x05a0,	// (0x0003881c) list_single_number_heading_pane_t2_ParamLimits

0x05a0,	// (0x0003881c) list_single_number_heading_pane_t2

0x05b2,	// (0x0003882e) list_single_number_heading_pane_t3_ParamLimits

0x05b2,	// (0x0003882e) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x00047859) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x00047859) list_single_number_heading_pane_t

0x05c4,	// (0x00038840) list_single_graphic_heading_pane_g1_ParamLimits

0x05c4,	// (0x00038840) list_single_graphic_heading_pane_g1

0x70b2,	// (0x0003f32e) list_single_graphic_heading_pane_g4_ParamLimits

0x70b2,	// (0x0003f32e) list_single_graphic_heading_pane_g4

0x1a75,	// (0x00039cf1) list_single_graphic_heading_pane_g5_ParamLimits

0x1a75,	// (0x00039cf1) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x00047860) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x00047860) list_single_graphic_heading_pane_g

0x058a,	// (0x00038806) list_single_graphic_heading_pane_t1_ParamLimits

0x058a,	// (0x00038806) list_single_graphic_heading_pane_t1

0x05eb,	// (0x00038867) list_single_graphic_heading_pane_t2_ParamLimits

0x05eb,	// (0x00038867) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x00047867) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x00047867) list_single_graphic_heading_pane_t

0x2ead,	// (0x0003b129) list_single_large_graphic_pane_g1_ParamLimits

0x2ead,	// (0x0003b129) list_single_large_graphic_pane_g1

0x2eb9,	// (0x0003b135) list_single_large_graphic_pane_g2_ParamLimits

0x2eb9,	// (0x0003b135) list_single_large_graphic_pane_g2

0x2ec5,	// (0x0003b141) list_single_large_graphic_pane_g3_ParamLimits

0x2ec5,	// (0x0003b141) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0004786c) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0004786c) list_single_large_graphic_pane_g

0xc67c,	// (0x000448f8) wait_border_pane_g2_copy1

0x7ce5,	// (0x0003ff61) list_single_large_graphic_pane_g4_cp2

0x0ed8,	// (0x00039154) list_single_large_graphic_pane_t1_ParamLimits

0x0ed8,	// (0x00039154) list_single_large_graphic_pane_t1

0x70c3,	// (0x0003f33f) list_double_pane_g1_ParamLimits

0x70c3,	// (0x0003f33f) list_double_pane_g1

0x70cf,	// (0x0003f34b) list_double_pane_g2_ParamLimits

0x70cf,	// (0x0003f34b) list_double_pane_g2

0x0001,

0xf5f7,	// (0x00047873) list_double_pane_g_ParamLimits

0xf5f7,	// (0x00047873) list_double_pane_g

0x70db,	// (0x0003f357) list_double_pane_t1_ParamLimits

0x70db,	// (0x0003f357) list_double_pane_t1

0x70f1,	// (0x0003f36d) list_double_pane_t2_ParamLimits

0x70f1,	// (0x0003f36d) list_double_pane_t2

0x0001,

0xf5fc,	// (0x00047878) list_double_pane_t_ParamLimits

0xf5fc,	// (0x00047878) list_double_pane_t

0x7103,	// (0x0003f37f) list_double2_pane_g1_ParamLimits

0x7103,	// (0x0003f37f) list_double2_pane_g1

0x7114,	// (0x0003f390) list_double2_pane_g2_ParamLimits

0x7114,	// (0x0003f390) list_double2_pane_g2

0x0001,

0xf601,	// (0x0004787d) list_double2_pane_g_ParamLimits

0xf601,	// (0x0004787d) list_double2_pane_g

0x7120,	// (0x0003f39c) list_double2_pane_t1_ParamLimits

0x7120,	// (0x0003f39c) list_double2_pane_t1

0x7136,	// (0x0003f3b2) list_double2_pane_t2_ParamLimits

0x7136,	// (0x0003f3b2) list_double2_pane_t2

0x0001,

0xf606,	// (0x00047882) list_double2_pane_t_ParamLimits

0xf606,	// (0x00047882) list_double2_pane_t

0x70c3,	// (0x0003f33f) list_double_number_pane_g1_ParamLimits

0x70c3,	// (0x0003f33f) list_double_number_pane_g1

0x70cf,	// (0x0003f34b) list_double_number_pane_g2_ParamLimits

0x70cf,	// (0x0003f34b) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x00047873) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x00047873) list_double_number_pane_g

0x7148,	// (0x0003f3c4) list_double_number_pane_t1_ParamLimits

0x7148,	// (0x0003f3c4) list_double_number_pane_t1

0x715a,	// (0x0003f3d6) list_double_number_pane_t2_ParamLimits

0x715a,	// (0x0003f3d6) list_double_number_pane_t2

0x7170,	// (0x0003f3ec) list_double_number_pane_t3_ParamLimits

0x7170,	// (0x0003f3ec) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x00047887) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x00047887) list_double_number_pane_t

0x7182,	// (0x0003f3fe) list_double_graphic_pane_g1_ParamLimits

0x7182,	// (0x0003f3fe) list_double_graphic_pane_g1

0x718e,	// (0x0003f40a) list_double_graphic_pane_g2_ParamLimits

0x718e,	// (0x0003f40a) list_double_graphic_pane_g2

0x719d,	// (0x0003f419) list_double_graphic_pane_g3_ParamLimits

0x719d,	// (0x0003f419) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x0004788e) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x0004788e) list_double_graphic_pane_g

0x71b5,	// (0x0003f431) list_double_graphic_pane_t1_ParamLimits

0x71b5,	// (0x0003f431) list_double_graphic_pane_t1

0x71cb,	// (0x0003f447) list_double_graphic_pane_t2_ParamLimits

0x71cb,	// (0x0003f447) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x00047897) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x00047897) list_double_graphic_pane_t

0x7182,	// (0x0003f3fe) list_double2_graphic_pane_g1_ParamLimits

0x7182,	// (0x0003f3fe) list_double2_graphic_pane_g1

0x70c3,	// (0x0003f33f) list_double2_graphic_pane_g2_ParamLimits

0x70c3,	// (0x0003f33f) list_double2_graphic_pane_g2

0x70cf,	// (0x0003f34b) list_double2_graphic_pane_g3_ParamLimits

0x70cf,	// (0x0003f34b) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x0004789c) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x0004789c) list_double2_graphic_pane_g

0x715a,	// (0x0003f3d6) list_double2_graphic_pane_t1_ParamLimits

0x715a,	// (0x0003f3d6) list_double2_graphic_pane_t1

0x71dd,	// (0x0003f459) list_double2_graphic_pane_t2_ParamLimits

0x71dd,	// (0x0003f459) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x000478a3) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x000478a3) list_double2_graphic_pane_t

0x71ef,	// (0x0003f46b) list_double_large_graphic_pane_g1_ParamLimits

0x71ef,	// (0x0003f46b) list_double_large_graphic_pane_g1

0x720e,	// (0x0003f48a) list_double_large_graphic_pane_g2_ParamLimits

0x720e,	// (0x0003f48a) list_double_large_graphic_pane_g2

0x70cf,	// (0x0003f34b) list_double_large_graphic_pane_g3_ParamLimits

0x70cf,	// (0x0003f34b) list_double_large_graphic_pane_g3

0x7224,	// (0x0003f4a0) list_double_large_graphic_pane_g4_ParamLimits

0x7224,	// (0x0003f4a0) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x000478a8) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x000478a8) list_double_large_graphic_pane_g

0x7237,	// (0x0003f4b3) list_double_large_graphic_pane_t1_ParamLimits

0x7237,	// (0x0003f4b3) list_double_large_graphic_pane_t1

0x7250,	// (0x0003f4cc) list_double_large_graphic_pane_t2_ParamLimits

0x7250,	// (0x0003f4cc) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x000478b3) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x000478b3) list_double_large_graphic_pane_t

0x7262,	// (0x0003f4de) list_double2_large_graphic_pane_g1_ParamLimits

0x7262,	// (0x0003f4de) list_double2_large_graphic_pane_g1

0x726e,	// (0x0003f4ea) list_double2_large_graphic_pane_g2_ParamLimits

0x726e,	// (0x0003f4ea) list_double2_large_graphic_pane_g2

0x70cf,	// (0x0003f34b) list_double2_large_graphic_pane_g3_ParamLimits

0x70cf,	// (0x0003f34b) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x000478b8) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x000478b8) list_double2_large_graphic_pane_g

0x727f,	// (0x0003f4fb) list_double2_large_graphic_pane_t1_ParamLimits

0x727f,	// (0x0003f4fb) list_double2_large_graphic_pane_t1

0x7295,	// (0x0003f511) list_double2_large_graphic_pane_t2_ParamLimits

0x7295,	// (0x0003f511) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x000478bf) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x000478bf) list_double2_large_graphic_pane_t

0x72a7,	// (0x0003f523) list_double_heading_pane_g1_ParamLimits

0x72a7,	// (0x0003f523) list_double_heading_pane_g1

0x7ced,	// (0x0003ff69) list_double_heading_pane_g2_ParamLimits

0x7ced,	// (0x0003ff69) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x000478c4) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x000478c4) list_double_heading_pane_g

0x72b8,	// (0x0003f534) list_double_heading_pane_t1_ParamLimits

0x72b8,	// (0x0003f534) list_double_heading_pane_t1

0x72ce,	// (0x0003f54a) list_double_heading_pane_t2_ParamLimits

0x72ce,	// (0x0003f54a) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x000478c9) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x000478c9) list_double_heading_pane_t

0x7182,	// (0x0003f3fe) list_double_graphic_heading_pane_g1_ParamLimits

0x7182,	// (0x0003f3fe) list_double_graphic_heading_pane_g1

0x72a7,	// (0x0003f523) list_double_graphic_heading_pane_g2_ParamLimits

0x72a7,	// (0x0003f523) list_double_graphic_heading_pane_g2

0x7ced,	// (0x0003ff69) list_double_graphic_heading_pane_g3_ParamLimits

0x7ced,	// (0x0003ff69) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x000478ce) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x000478ce) list_double_graphic_heading_pane_g

0x72e0,	// (0x0003f55c) list_double_graphic_heading_pane_t1_ParamLimits

0x72e0,	// (0x0003f55c) list_double_graphic_heading_pane_t1

0x72f6,	// (0x0003f572) list_double_graphic_heading_pane_t2_ParamLimits

0x72f6,	// (0x0003f572) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x000478d5) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x000478d5) list_double_graphic_heading_pane_t

0x7103,	// (0x0003f37f) list_double_time_pane_g1_ParamLimits

0x7103,	// (0x0003f37f) list_double_time_pane_g1

0x7114,	// (0x0003f390) list_double_time_pane_g2_ParamLimits

0x7114,	// (0x0003f390) list_double_time_pane_g2

0x0001,

0xf601,	// (0x0004787d) list_double_time_pane_g_ParamLimits

0xf601,	// (0x0004787d) list_double_time_pane_g

0x7308,	// (0x0003f584) list_double_time_pane_t1_ParamLimits

0x7308,	// (0x0003f584) list_double_time_pane_t1

0x731e,	// (0x0003f59a) list_double_time_pane_t2_ParamLimits

0x731e,	// (0x0003f59a) list_double_time_pane_t2

0x7330,	// (0x0003f5ac) list_double_time_pane_t3_ParamLimits

0x7330,	// (0x0003f5ac) list_double_time_pane_t3

0x7342,	// (0x0003f5be) list_double_time_pane_t4_ParamLimits

0x7342,	// (0x0003f5be) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x000478da) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x000478da) list_double_time_pane_t

0x7354,	// (0x0003f5d0) list_setting_pane_g1_ParamLimits

0x7354,	// (0x0003f5d0) list_setting_pane_g1

0x7360,	// (0x0003f5dc) list_setting_pane_g2_ParamLimits

0x7360,	// (0x0003f5dc) list_setting_pane_g2

0x0001,

0xf667,	// (0x000478e3) list_setting_pane_g_ParamLimits

0xf667,	// (0x000478e3) list_setting_pane_g

0x736c,	// (0x0003f5e8) list_setting_pane_t1_ParamLimits

0x736c,	// (0x0003f5e8) list_setting_pane_t1

0x7386,	// (0x0003f602) list_setting_pane_t2_ParamLimits

0x7386,	// (0x0003f602) list_setting_pane_t2

0x0002,

0xf66c,	// (0x000478e8) list_setting_pane_t_ParamLimits

0xf66c,	// (0x000478e8) list_setting_pane_t

0x73c3,	// (0x0003f63f) set_value_pane_cp_ParamLimits

0x73c3,	// (0x0003f63f) set_value_pane_cp

0x73cf,	// (0x0003f64b) list_setting_number_pane_g1_ParamLimits

0x73cf,	// (0x0003f64b) list_setting_number_pane_g1

0x73db,	// (0x0003f657) list_setting_number_pane_g2_ParamLimits

0x73db,	// (0x0003f657) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x000478ef) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x000478ef) list_setting_number_pane_g

0x73e7,	// (0x0003f663) list_setting_number_pane_t1_ParamLimits

0x73e7,	// (0x0003f663) list_setting_number_pane_t1

0x7400,	// (0x0003f67c) list_setting_number_pane_t2_ParamLimits

0x7400,	// (0x0003f67c) list_setting_number_pane_t2

0x741a,	// (0x0003f696) list_setting_number_pane_t3_ParamLimits

0x741a,	// (0x0003f696) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x000478f4) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x000478f4) list_setting_number_pane_t

0x73c3,	// (0x0003f63f) set_value_pane_ParamLimits

0x73c3,	// (0x0003f63f) set_value_pane

0xb1dc,	// (0x00043458) bg_set_opt_pane_ParamLimits

0xb1dc,	// (0x00043458) bg_set_opt_pane

0x09a5,	// (0x00038c21) set_value_pane_t1

0xb1fd,	// (0x00043479) slider_set_pane_cp3

0xb206,	// (0x00043482) volume_small_pane_cp

0xb20f,	// (0x0004348b) list_form_gen_pane

0xb218,	// (0x00043494) scroll_pane_cp8

0x745d,	// (0x0003f6d9) form_field_data_pane_ParamLimits

0x745d,	// (0x0003f6d9) form_field_data_pane

0x7474,	// (0x0003f6f0) form_field_data_wide_pane_ParamLimits

0x7474,	// (0x0003f6f0) form_field_data_wide_pane

0x7494,	// (0x0003f710) form_field_popup_pane_ParamLimits

0x7494,	// (0x0003f710) form_field_popup_pane

0x74b4,	// (0x0003f730) form_field_popup_wide_pane_ParamLimits

0x74b4,	// (0x0003f730) form_field_popup_wide_pane

0x0a3b,	// (0x00038cb7) form_field_slider_pane_ParamLimits

0x0a3b,	// (0x00038cb7) form_field_slider_pane

0x0a4e,	// (0x00038cca) form_field_slider_wide_pane_ParamLimits

0x0a4e,	// (0x00038cca) form_field_slider_wide_pane

0xb229,	// (0x000434a5) data_form_pane

0x74d5,	// (0x0003f751) form_field_data_pane_t1

0xb235,	// (0x000434b1) input_focus_pane

0x0a85,	// (0x00038d01) data_form_wide_pane

0x0aa2,	// (0x00038d1e) form_field_data_wide_pane_t1

0x9367,	// (0x000415e3) input_focus_pane_cp6

0x74ef,	// (0x0003f76b) form_field_popup_pane_t1

0xb235,	// (0x000434b1) input_focus_pane_cp7

0xb257,	// (0x000434d3) list_form_pane

0x0ae6,	// (0x00038d62) form_field_popup_wide_pane_t1

0xb235,	// (0x000434b1) input_focus_pane_cp8

0xb263,	// (0x000434df) list_form_wide_pane

0x7511,	// (0x0003f78d) form_field_slider_pane_t1_ParamLimits

0x7511,	// (0x0003f78d) form_field_slider_pane_t1

0x7529,	// (0x0003f7a5) form_field_slider_pane_t2_ParamLimits

0x7529,	// (0x0003f7a5) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x00047904) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x00047904) form_field_slider_pane_t

0x8f87,	// (0x00041203) input_focus_pane_cp9_ParamLimits

0x8f87,	// (0x00041203) input_focus_pane_cp9

0x753e,	// (0x0003f7ba) slider_cont_pane_ParamLimits

0x753e,	// (0x0003f7ba) slider_cont_pane

0xb272,	// (0x000434ee) form_field_slider_wide_pane_t1_ParamLimits

0xb272,	// (0x000434ee) form_field_slider_wide_pane_t1

0x0b44,	// (0x00038dc0) form_field_slider_wide_pane_t2_ParamLimits

0x0b44,	// (0x00038dc0) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x00047909) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x00047909) form_field_slider_wide_pane_t

0x8f87,	// (0x00041203) input_focus_pane_cp10_ParamLimits

0x8f87,	// (0x00041203) input_focus_pane_cp10

0x7552,	// (0x0003f7ce) slider_cont_pane_cp1_ParamLimits

0x7552,	// (0x0003f7ce) slider_cont_pane_cp1

0x7566,	// (0x0003f7e2) slider_form_pane_cp

0xb284,	// (0x00043500) input_focus_pane_g1

0xb28c,	// (0x00043508) input_focus_pane_g2

0xb294,	// (0x00043510) input_focus_pane_g3

0xb29c,	// (0x00043518) input_focus_pane_g4

0xb2a4,	// (0x00043520) input_focus_pane_g5

0xb2ac,	// (0x00043528) input_focus_pane_g6

0xb2b4,	// (0x00043530) input_focus_pane_g7

0xb2bc,	// (0x00043538) input_focus_pane_g8

0xb2c4,	// (0x00043540) input_focus_pane_g9

0x8f2f,	// (0x000411ab) input_focus_pane_g10

0x0009,

0xf692,	// (0x0004790e) input_focus_pane_g

0xc685,	// (0x00044901) wait_border_pane_g3_copy1

0x756e,	// (0x0003f7ea) data_form_pane_t1

0x8f2f,	// (0x000411ab) wait_anim_pane_g1_copy1

0x75f9,	// (0x0003f875) data_form_wide_pane_t1

0x7588,	// (0x0003f804) list_form_graphic_pane_cp_ParamLimits

0x7588,	// (0x0003f804) list_form_graphic_pane_cp

0xd2fd,	// (0x00045579) slider_form_pane_g1

0xd306,	// (0x00045582) slider_form_pane_g2

0x0006,

0x015c,	// (0x000383d8) slider_form_pane_g

0x7588,	// (0x0003f804) list_form_graphic_pane_ParamLimits

0x7588,	// (0x0003f804) list_form_graphic_pane

0x0ba4,	// (0x00038e20) list_form_graphic_pane_g1

0x0bac,	// (0x00038e28) list_form_graphic_pane_t1_ParamLimits

0x0bac,	// (0x00038e28) list_form_graphic_pane_t1

0x8fa5,	// (0x00041221) list_highlight_pane_cp5_ParamLimits

0x8fa5,	// (0x00041221) list_highlight_pane_cp5

0x0bc1,	// (0x00038e3d) find_pane_g1

0xb2cc,	// (0x00043548) input_find_pane

0x0bca,	// (0x00038e46) input_find_pane_g1_ParamLimits

0x0bca,	// (0x00038e46) input_find_pane_g1

0x0bd6,	// (0x00038e52) input_find_pane_t1_ParamLimits

0x0bd6,	// (0x00038e52) input_find_pane_t1

0x0beb,	// (0x00038e67) input_find_pane_t2_ParamLimits

0x0beb,	// (0x00038e67) input_find_pane_t2

0x0001,

0xf6a7,	// (0x00047923) input_find_pane_t_ParamLimits

0xf6a7,	// (0x00047923) input_find_pane_t

0xb2d5,	// (0x00043551) input_focus_pane_cp5_ParamLimits

0xb2d5,	// (0x00043551) input_focus_pane_cp5

0xb2e3,	// (0x0004355f) bg_popup_window_pane_cp2_ParamLimits

0xb2e3,	// (0x0004355f) bg_popup_window_pane_cp2

0xb2f0,	// (0x0004356c) listscroll_menu_pane_ParamLimits

0xb2f0,	// (0x0004356c) listscroll_menu_pane

0x7d05,	// (0x0003ff81) popup_submenu_window_ParamLimits

0x7d05,	// (0x0003ff81) popup_submenu_window

0xb2fc,	// (0x00043578) find_popup_pane_g1

0xb304,	// (0x00043580) input_popup_find_pane_cp

0xb2d5,	// (0x00043551) input_focus_pane_cp4_ParamLimits

0xb2d5,	// (0x00043551) input_focus_pane_cp4

0xb30e,	// (0x0004358a) input_popup_find_pane_t1_ParamLimits

0xb30e,	// (0x0004358a) input_popup_find_pane_t1

0x8f39,	// (0x000411b5) bg_popup_sub_pane_cp

0xb33c,	// (0x000435b8) listscroll_popup_sub_pane

0xb344,	// (0x000435c0) list_submenu_pane_ParamLimits

0xb344,	// (0x000435c0) list_submenu_pane

0xb355,	// (0x000435d1) scroll_pane_cp4

0xb35d,	// (0x000435d9) list_single_popup_submenu_pane_ParamLimits

0xb35d,	// (0x000435d9) list_single_popup_submenu_pane

0xb371,	// (0x000435ed) list_single_popup_submenu_pane_g1

0xb379,	// (0x000435f5) list_single_popup_submenu_pane_t1_ParamLimits

0xb379,	// (0x000435f5) list_single_popup_submenu_pane_t1

0x8f87,	// (0x00041203) bg_active_tab_pane_cp1_ParamLimits

0x8f87,	// (0x00041203) bg_active_tab_pane_cp1

0x7d3b,	// (0x0003ffb7) tabs_2_active_pane_g1

0x7d43,	// (0x0003ffbf) tabs_2_active_pane_t1

0x8f87,	// (0x00041203) bg_passive_tab_pane_cp1_ParamLimits

0x8f87,	// (0x00041203) bg_passive_tab_pane_cp1

0x7d3b,	// (0x0003ffb7) tabs_2_passive_pane_g1

0x7d43,	// (0x0003ffbf) tabs_2_passive_pane_t1

0x8fa5,	// (0x00041221) bg_active_tab_pane_cp4

0x7d55,	// (0x0003ffd1) tabs_2_long_active_pane_t1

0xb38e,	// (0x0004360a) bg_passive_tab_pane_cp4

0x29eb,	// (0x0003ac67) list_single_midp_graphic_pane_g4_ParamLimits

0x8fa5,	// (0x00041221) bg_active_tab_pane_cp5

0x7d68,	// (0x0003ffe4) tabs_3_long_active_pane_t1

0xb38e,	// (0x0004360a) bg_passive_tab_pane_cp5

0x29eb,	// (0x0003ac67) list_single_midp_graphic_pane_g4

0x8fa5,	// (0x00041221) bg_popup_window_pane_cp13_ParamLimits

0x8fa5,	// (0x00041221) bg_popup_window_pane_cp13

0xb479,	// (0x000436f5) listscroll_popup_fast_pane_ParamLimits

0xb479,	// (0x000436f5) listscroll_popup_fast_pane

0xb485,	// (0x00043701) grid_popup_fast_pane_ParamLimits

0xb485,	// (0x00043701) grid_popup_fast_pane

0xb497,	// (0x00043713) scroll_pane_cp9_ParamLimits

0xb497,	// (0x00043713) scroll_pane_cp9

0xe66c,	// (0x000468e8) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xe66c,	// (0x000468e8) list_single_graphic_hl_pane_t1_cp2

0xb4bb,	// (0x00043737) input_focus_pane_cp20_ParamLimits

0xb4bb,	// (0x00043737) input_focus_pane_cp20

0xb4c9,	// (0x00043745) query_popup_data_pane_t1_ParamLimits

0xb4c9,	// (0x00043745) query_popup_data_pane_t1

0xb4dc,	// (0x00043758) query_popup_data_pane_t2_ParamLimits

0xb4dc,	// (0x00043758) query_popup_data_pane_t2

0xb522,	// (0x0004379e) query_popup_data_pane_t3_ParamLimits

0xb522,	// (0x0004379e) query_popup_data_pane_t3

0xb563,	// (0x000437df) query_popup_data_pane_t4_ParamLimits

0xb563,	// (0x000437df) query_popup_data_pane_t4

0xb59f,	// (0x0004381b) query_popup_data_pane_t5_ParamLimits

0xb59f,	// (0x0004381b) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x00047928) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x00047928) query_popup_data_pane_t

0xb284,	// (0x00043500) bg_set_opt_pane_g1

0xb28c,	// (0x00043508) bg_set_opt_pane_g2

0xb294,	// (0x00043510) bg_set_opt_pane_g3

0xb29c,	// (0x00043518) bg_set_opt_pane_g4

0xb2a4,	// (0x00043520) bg_set_opt_pane_g5

0xb2ac,	// (0x00043528) bg_set_opt_pane_g6

0xb2b4,	// (0x00043530) bg_set_opt_pane_g7

0xb2bc,	// (0x00043538) bg_set_opt_pane_g8

0xb2c4,	// (0x00043540) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x00047933) bg_set_opt_pane_g

0x1fab,	// (0x0003a227) control_top_pane_stacon_ParamLimits

0x1fab,	// (0x0003a227) control_top_pane_stacon

0x1ffe,	// (0x0003a27a) signal_pane_stacon_ParamLimits

0x1ffe,	// (0x0003a27a) signal_pane_stacon

0xba0f,	// (0x00043c8b) stacon_top_pane_g1_ParamLimits

0xba0f,	// (0x00043c8b) stacon_top_pane_g1

0x2023,	// (0x0003a29f) title_pane_stacon_ParamLimits

0x2023,	// (0x0003a29f) title_pane_stacon

0x204d,	// (0x0003a2c9) uni_indicator_pane_stacon_ParamLimits

0x204d,	// (0x0003a2c9) uni_indicator_pane_stacon

0x2062,	// (0x0003a2de) battery_pane_stacon_ParamLimits

0x2062,	// (0x0003a2de) battery_pane_stacon

0x20a6,	// (0x0003a322) control_bottom_pane_stacon_ParamLimits

0x20a6,	// (0x0003a322) control_bottom_pane_stacon

0x20c9,	// (0x0003a345) navi_pane_stacon_ParamLimits

0x20c9,	// (0x0003a345) navi_pane_stacon

0xba31,	// (0x00043cad) stacon_bottom_pane_g1_ParamLimits

0xba31,	// (0x00043cad) stacon_bottom_pane_g1

0x1ba2,	// (0x00039e1e) aid_levels_signal_lsc_ParamLimits

0x1ba2,	// (0x00039e1e) aid_levels_signal_lsc

0x1bb9,	// (0x00039e35) signal_pane_stacon_g1_ParamLimits

0x1bb9,	// (0x00039e35) signal_pane_stacon_g1

0x1bcd,	// (0x00039e49) signal_pane_stacon_g2_ParamLimits

0x1bcd,	// (0x00039e49) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x00047946) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x00047946) signal_pane_stacon_g

0x1c02,	// (0x00039e7e) title_pane_stacon_t1_ParamLimits

0x1c02,	// (0x00039e7e) title_pane_stacon_t1

0xb5e3,	// (0x0004385f) uni_indicator_pane_stacon_g1

0xb5ed,	// (0x00043869) uni_indicator_pane_stacon_g2

0xb5f7,	// (0x00043873) uni_indicator_pane_stacon_g3

0xb601,	// (0x0004387d) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x00047952) uni_indicator_pane_stacon_g

0x1c27,	// (0x00039ea3) control_top_pane_stacon_g1

0x1c2f,	// (0x00039eab) control_top_pane_stacon_t1_ParamLimits

0x1c2f,	// (0x00039eab) control_top_pane_stacon_t1

0x1c66,	// (0x00039ee2) aid_levels_battery_lsc_ParamLimits

0x1c66,	// (0x00039ee2) aid_levels_battery_lsc

0x1c7e,	// (0x00039efa) battery_pane_stacon_g1_ParamLimits

0x1c7e,	// (0x00039efa) battery_pane_stacon_g1

0x1c91,	// (0x00039f0d) battery_pane_stacon_g2_ParamLimits

0x1c91,	// (0x00039f0d) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x0004795b) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x0004795b) battery_pane_stacon_g

0x1ccf,	// (0x00039f4b) navi_icon_pane_stacon

0x1ce3,	// (0x00039f5f) navi_navi_pane_stacon

0x1ccf,	// (0x00039f4b) navi_text_pane_stacon

0x1c27,	// (0x00039ea3) control_bottom_pane_stacon_g1

0x1cf7,	// (0x00039f73) control_bottom_pane_stacon_t1_ParamLimits

0x1cf7,	// (0x00039f73) control_bottom_pane_stacon_t1

0x7d7a,	// (0x0003fff6) grid_app_pane_ParamLimits

0x7d7a,	// (0x0003fff6) grid_app_pane

0x7db0,	// (0x0004002c) scroll_pane_cp15_ParamLimits

0x7db0,	// (0x0004002c) scroll_pane_cp15

0x7dc5,	// (0x00040041) cell_app_pane_ParamLimits

0x7dc5,	// (0x00040041) cell_app_pane

0x7e0c,	// (0x00040088) cell_app_pane_g1_ParamLimits

0x7e0c,	// (0x00040088) cell_app_pane_g1

0xb625,	// (0x000438a1) cell_app_pane_g2_ParamLimits

0xb625,	// (0x000438a1) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x00047960) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x00047960) cell_app_pane_g

0x7e2c,	// (0x000400a8) cell_app_pane_t1_ParamLimits

0x7e2c,	// (0x000400a8) cell_app_pane_t1

0xb631,	// (0x000438ad) grid_highlight_pane_ParamLimits

0xb631,	// (0x000438ad) grid_highlight_pane

0xb284,	// (0x00043500) cell_highlight_pane_g1

0xb28c,	// (0x00043508) cell_highlight_pane_g2

0xb294,	// (0x00043510) cell_highlight_pane_g3

0xb29c,	// (0x00043518) cell_highlight_pane_g4

0xb2a4,	// (0x00043520) cell_highlight_pane_g5

0xb2ac,	// (0x00043528) cell_highlight_pane_g6

0xb2b4,	// (0x00043530) cell_highlight_pane_g7

0xb2bc,	// (0x00043538) cell_highlight_pane_g8

0xb2c4,	// (0x00043540) cell_highlight_pane_g9

0x8f2f,	// (0x000411ab) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x0004790e) cell_highlight_pane_g

0xb642,	// (0x000438be) bg_scroll_pane

0x1dd3,	// (0x0003a04f) scroll_handle_pane

0xb689,	// (0x00043905) scroll_bg_pane_g1

0xb69e,	// (0x0004391a) scroll_bg_pane_g2

0xb6b6,	// (0x00043932) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x00047965) scroll_bg_pane_g

0xb6cb,	// (0x00043947) scroll_handle_focus_pane_ParamLimits

0xb6cb,	// (0x00043947) scroll_handle_focus_pane

0xb689,	// (0x00043905) scroll_handle_pane_g1

0xb6d8,	// (0x00043954) scroll_handle_pane_g2

0xb6b6,	// (0x00043932) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x0004796c) scroll_handle_pane_g

0xb2d5,	// (0x00043551) bg_popup_sub_pane_cp21_ParamLimits

0xb2d5,	// (0x00043551) bg_popup_sub_pane_cp21

0xb6ec,	// (0x00043968) popup_fep_japan_predictive_window_t1_ParamLimits

0xb6ec,	// (0x00043968) popup_fep_japan_predictive_window_t1

0xb70f,	// (0x0004398b) popup_fep_japan_predictive_window_t2_ParamLimits

0xb70f,	// (0x0004398b) popup_fep_japan_predictive_window_t2

0xb742,	// (0x000439be) popup_fep_japan_predictive_window_t3_ParamLimits

0xb742,	// (0x000439be) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x00047973) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x00047973) popup_fep_japan_predictive_window_t

0x8f39,	// (0x000411b5) bg_popup_sub_pane_cp23

0xb779,	// (0x000439f5) listscroll_japin_cand_pane

0xb781,	// (0x000439fd) popup_fep_japan_candidate_window_t1

0xb78f,	// (0x00043a0b) candidate_pane_ParamLimits

0xb78f,	// (0x00043a0b) candidate_pane

0xb7a1,	// (0x00043a1d) scroll_pane_cp30

0xb7a9,	// (0x00043a25) list_single_popup_jap_candidate_pane_ParamLimits

0xb7a9,	// (0x00043a25) list_single_popup_jap_candidate_pane

0x8f39,	// (0x000411b5) list_highlight_pane_cp30

0xb7bd,	// (0x00043a39) list_single_popup_jap_candidate_pane_t1

0xb7cc,	// (0x00043a48) level_1_signal

0xb7d9,	// (0x00043a55) level_2_signal

0xb7e6,	// (0x00043a62) level_3_signal

0xb7f3,	// (0x00043a6f) level_4_signal

0xb800,	// (0x00043a7c) level_5_signal

0xb80d,	// (0x00043a89) level_6_signal

0xb81a,	// (0x00043a96) level_7_signal

0xb7cc,	// (0x00043a48) level_1_battery

0xb7d9,	// (0x00043a55) level_2_battery

0xb7e6,	// (0x00043a62) level_3_battery

0xb7f3,	// (0x00043a6f) level_4_battery

0xb800,	// (0x00043a7c) level_5_battery

0xb80d,	// (0x00043a89) level_6_battery

0xb81a,	// (0x00043a96) level_7_battery

0xb83f,	// (0x00043abb) list_menu_pane_ParamLimits

0xb83f,	// (0x00043abb) list_menu_pane

0xb855,	// (0x00043ad1) scroll_pane_cp25_ParamLimits

0xb855,	// (0x00043ad1) scroll_pane_cp25

0xb86e,	// (0x00043aea) list_double2_graphic_pane_cp2_ParamLimits

0xb86e,	// (0x00043aea) list_double2_graphic_pane_cp2

0xb86e,	// (0x00043aea) list_double2_large_graphic_pane_cp2_ParamLimits

0xb86e,	// (0x00043aea) list_double2_large_graphic_pane_cp2

0xb86e,	// (0x00043aea) list_double2_pane_cp2_ParamLimits

0xb86e,	// (0x00043aea) list_double2_pane_cp2

0xb86e,	// (0x00043aea) list_double_graphic_pane_cp2_ParamLimits

0xb86e,	// (0x00043aea) list_double_graphic_pane_cp2

0xb86e,	// (0x00043aea) list_double_large_graphic_pane_cp2_ParamLimits

0xb86e,	// (0x00043aea) list_double_large_graphic_pane_cp2

0xb86e,	// (0x00043aea) list_double_number_pane_cp2_ParamLimits

0xb86e,	// (0x00043aea) list_double_number_pane_cp2

0xb86e,	// (0x00043aea) list_double_pane_cp2_ParamLimits

0xb86e,	// (0x00043aea) list_double_pane_cp2

0x7e54,	// (0x000400d0) list_single_2graphic_pane_cp2_ParamLimits

0x7e54,	// (0x000400d0) list_single_2graphic_pane_cp2

0x7e54,	// (0x000400d0) list_single_graphic_heading_pane_cp2_ParamLimits

0x7e54,	// (0x000400d0) list_single_graphic_heading_pane_cp2

0x7e54,	// (0x000400d0) list_single_graphic_pane_cp2_ParamLimits

0x7e54,	// (0x000400d0) list_single_graphic_pane_cp2

0x7e54,	// (0x000400d0) list_single_heading_pane_cp2_ParamLimits

0x7e54,	// (0x000400d0) list_single_heading_pane_cp2

0xb87e,	// (0x00043afa) list_single_large_graphic_pane_cp2_ParamLimits

0xb87e,	// (0x00043afa) list_single_large_graphic_pane_cp2

0x7e54,	// (0x000400d0) list_single_number_heading_pane_cp2_ParamLimits

0x7e54,	// (0x000400d0) list_single_number_heading_pane_cp2

0x7e54,	// (0x000400d0) list_single_number_pane_cp2_ParamLimits

0x7e54,	// (0x000400d0) list_single_number_pane_cp2

0x7e54,	// (0x000400d0) list_single_pane_cp2_ParamLimits

0x7e54,	// (0x000400d0) list_single_pane_cp2

0xb898,	// (0x00043b14) bg_popup_sub_pane_cp22

0x1f0d,	// (0x0003a189) popup_side_volume_key_window_g1

0x1f31,	// (0x0003a1ad) popup_side_volume_key_window_t1

0x1f4d,	// (0x0003a1c9) volume_small_pane_cp1

0x8f87,	// (0x00041203) bg_popup_sub_pane_cp24_ParamLimits

0x8f87,	// (0x00041203) bg_popup_sub_pane_cp24

0xb8ae,	// (0x00043b2a) fep_china_uni_candidate_pane_ParamLimits

0xb8ae,	// (0x00043b2a) fep_china_uni_candidate_pane

0xb8c2,	// (0x00043b3e) fep_china_uni_entry_pane

0xb8d2,	// (0x00043b4e) popup_fep_china_uni_window_g1

0xb8ee,	// (0x00043b6a) fep_china_uni_entry_pane_g1

0xb8f6,	// (0x00043b72) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x000479a4) fep_china_uni_entry_pane_g

0xb8fe,	// (0x00043b7a) fep_entry_item_pane

0xb908,	// (0x00043b84) fep_candidate_item_pane

0xb910,	// (0x00043b8c) fep_china_uni_candidate_pane_g1

0xb918,	// (0x00043b94) fep_china_uni_candidate_pane_g2

0xb920,	// (0x00043b9c) fep_china_uni_candidate_pane_g3

0xb928,	// (0x00043ba4) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x000479a9) fep_china_uni_candidate_pane_g

0x8f2f,	// (0x000411ab) fep_entry_item_pane_g1

0xb930,	// (0x00043bac) fep_entry_item_pane_t1_ParamLimits

0xb930,	// (0x00043bac) fep_entry_item_pane_t1

0xb946,	// (0x00043bc2) fep_candidate_item_pane_t1_ParamLimits

0xb946,	// (0x00043bc2) fep_candidate_item_pane_t1

0xb95b,	// (0x00043bd7) fep_candidate_item_pane_t2_ParamLimits

0xb95b,	// (0x00043bd7) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x000479b2) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x000479b2) fep_candidate_item_pane_t

0x8fa5,	// (0x00041221) list_highlight_pane_cp31_ParamLimits

0x8fa5,	// (0x00041221) list_highlight_pane_cp31

0xb96d,	// (0x00043be9) level_1_signal_lsc

0xb976,	// (0x00043bf2) level_2_signal_lsc

0xb97f,	// (0x00043bfb) level_3_signal_lsc

0xb988,	// (0x00043c04) level_4_signal_lsc

0xb991,	// (0x00043c0d) level_5_signal_lsc

0xb99a,	// (0x00043c16) level_6_signal_lsc

0xb9a3,	// (0x00043c1f) level_7_signal_lsc

0xb9a3,	// (0x00043c1f) level_1_battery_lsc

0xb9ac,	// (0x00043c28) level_2_battery_lsc

0xb9b5,	// (0x00043c31) level_3_battery_lsc

0xb9be,	// (0x00043c3a) level_4_battery_lsc

0xb9c7,	// (0x00043c43) level_5_battery_lsc

0xb9d0,	// (0x00043c4c) level_6_battery_lsc

0xb96d,	// (0x00043be9) level_7_battery_lsc

0xb9d9,	// (0x00043c55) scroll_handle_focus_pane_g1

0xb9e2,	// (0x00043c5e) scroll_handle_focus_pane_g2

0xb9eb,	// (0x00043c67) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x000479b7) scroll_handle_focus_pane_g

0x0c00,	// (0x00038e7c) list_single_2graphic_pane_g1_ParamLimits

0x0c00,	// (0x00038e7c) list_single_2graphic_pane_g1

0x70b2,	// (0x0003f32e) list_single_2graphic_pane_g2_ParamLimits

0x70b2,	// (0x0003f32e) list_single_2graphic_pane_g2

0x1a75,	// (0x00039cf1) list_single_2graphic_pane_g3_ParamLimits

0x1a75,	// (0x00039cf1) list_single_2graphic_pane_g3

0x0c0c,	// (0x00038e88) list_single_2graphic_pane_g4_ParamLimits

0x0c0c,	// (0x00038e88) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x000479be) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x000479be) list_single_2graphic_pane_g

0x0c1d,	// (0x00038e99) list_single_2graphic_pane_t1_ParamLimits

0x0c1d,	// (0x00038e99) list_single_2graphic_pane_t1

0x759a,	// (0x0003f816) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x759a,	// (0x0003f816) list_double2_graphic_large_graphic_pane_g1

0x726e,	// (0x0003f4ea) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x726e,	// (0x0003f4ea) list_double2_graphic_large_graphic_pane_g2

0x70cf,	// (0x0003f34b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x70cf,	// (0x0003f34b) list_double2_graphic_large_graphic_pane_g3

0x75ac,	// (0x0003f828) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x75ac,	// (0x0003f828) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x000479c7) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x000479c7) list_double2_graphic_large_graphic_pane_g

0x75b8,	// (0x0003f834) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x75b8,	// (0x0003f834) list_double2_graphic_large_graphic_pane_t1

0x75ce,	// (0x0003f84a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x75ce,	// (0x0003f84a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x000479d0) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x000479d0) list_double2_graphic_large_graphic_pane_t

0xbada,	// (0x00043d56) popup_fast_swap_window_ParamLimits

0xbada,	// (0x00043d56) popup_fast_swap_window

0xbaf6,	// (0x00043d72) popup_side_volume_key_window

0xbb10,	// (0x00043d8c) stacon_top_pane

0xbb1a,	// (0x00043d96) status_pane_ParamLimits

0xbb1a,	// (0x00043d96) status_pane

0xbb10,	// (0x00043d8c) status_small_pane

0x8f39,	// (0x000411b5) control_pane

0x8f39,	// (0x000411b5) stacon_bottom_pane

0xb218,	// (0x00043494) scroll_pane_cp121

0xb20f,	// (0x0004348b) set_content_pane

0x7ee1,	// (0x0004015d) bg_active_tab_pane_g1_cp1

0xb9f4,	// (0x00043c70) bg_active_tab_pane_g2_cp1

0x7eea,	// (0x00040166) bg_active_tab_pane_g3_cp1

0x7ee1,	// (0x0004015d) bg_passive_tab_pane_g1_cp1

0xb9f4,	// (0x00043c70) bg_passive_tab_pane_g2_cp1

0x7eea,	// (0x00040166) bg_passive_tab_pane_g3_cp1

0x7ef3,	// (0x0004016f) bg_active_tab_pane_g1_cp2

0xb9f4,	// (0x00043c70) bg_active_tab_pane_g2_cp2

0x7efc,	// (0x00040178) bg_active_tab_pane_g3_cp2

0x7ef3,	// (0x0004016f) bg_passive_tab_pane_g1_cp2

0xb9f4,	// (0x00043c70) bg_passive_tab_pane_g2_cp2

0x7efc,	// (0x00040178) bg_passive_tab_pane_g3_cp2

0xb9fd,	// (0x00043c79) bg_active_tab_pane_g1_cp3

0xb9f4,	// (0x00043c70) bg_active_tab_pane_g2_cp3

0xba06,	// (0x00043c82) bg_active_tab_pane_g3_cp3

0xb9fd,	// (0x00043c79) bg_passive_tab_pane_g1_cp3

0xb9f4,	// (0x00043c70) bg_passive_tab_pane_g2_cp3

0xba06,	// (0x00043c82) bg_passive_tab_pane_g3_cp3

0x7f05,	// (0x00040181) bg_active_tab_pane_g1_cp4

0xb9f4,	// (0x00043c70) bg_active_tab_pane_g2_cp4

0x7f10,	// (0x0004018c) bg_active_tab_pane_g3_cp4

0x7f05,	// (0x00040181) bg_passive_tab_pane_g1_cp4

0xb9f4,	// (0x00043c70) bg_passive_tab_pane_g2_cp4

0x7f10,	// (0x0004018c) bg_passive_tab_pane_g3_cp4

0xba4d,	// (0x00043cc9) bg_active_tab_pane_g1_cp5

0xb9f4,	// (0x00043c70) bg_active_tab_pane_g2_cp5

0xba56,	// (0x00043cd2) bg_active_tab_pane_g3_cp5

0xba4d,	// (0x00043cc9) bg_passive_tab_pane_g1_cp5

0xb9f4,	// (0x00043c70) bg_passive_tab_pane_g2_cp5

0xba56,	// (0x00043cd2) bg_passive_tab_pane_g3_cp5

0xd108,	// (0x00045384) list_set_graphic_pane_ParamLimits

0xd108,	// (0x00045384) list_set_graphic_pane

0x8f39,	// (0x000411b5) bg_set_opt_pane_cp4

0xba5f,	// (0x00043cdb) list_set_graphic_pane_g1_ParamLimits

0xba5f,	// (0x00043cdb) list_set_graphic_pane_g1

0xba6b,	// (0x00043ce7) list_set_graphic_pane_g2_ParamLimits

0xba6b,	// (0x00043ce7) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x000479d5) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x000479d5) list_set_graphic_pane_g

0x0009,

0xf9f7,	// (0x00047c73) volume_small_pane_cp_g

0xba8d,	// (0x00043d09) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xba8d,	// (0x00043d09) list_double2_large_graphic_pane_g1_cp2

0xba99,	// (0x00043d15) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xba99,	// (0x00043d15) list_double2_large_graphic_pane_g2_cp2

0xbaaa,	// (0x00043d26) list_double2_large_graphic_pane_g3_cp2

0xbab2,	// (0x00043d2e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbab2,	// (0x00043d2e) list_double2_large_graphic_pane_t1_cp2

0xbac8,	// (0x00043d44) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xbac8,	// (0x00043d44) list_double2_large_graphic_pane_t2_cp2

0xd0a4,	// (0x00045320) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd0a4,	// (0x00045320) list_double_large_graphic_pane_g1_cp2

0xd0b5,	// (0x00045331) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd0b5,	// (0x00045331) list_double_large_graphic_pane_g2_cp2

0xbc36,	// (0x00043eb2) list_double_large_graphic_pane_g3_cp2

0xd0c6,	// (0x00045342) list_double_large_graphic_pane_g4_cp

0xd0ce,	// (0x0004534a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xd0ce,	// (0x0004534a) list_double_large_graphic_pane_t1_cp2

0xd0e5,	// (0x00045361) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xd0e5,	// (0x00045361) list_double_large_graphic_pane_t2_cp2

0xbb28,	// (0x00043da4) list_double2_graphic_pane_g1_cp2_ParamLimits

0xbb28,	// (0x00043da4) list_double2_graphic_pane_g1_cp2

0xbb36,	// (0x00043db2) list_double2_graphic_pane_g2_cp2_ParamLimits

0xbb36,	// (0x00043db2) list_double2_graphic_pane_g2_cp2

0xbb47,	// (0x00043dc3) list_double2_graphic_pane_g3_cp2

0xbb51,	// (0x00043dcd) list_double2_graphic_pane_t1_cp2_ParamLimits

0xbb51,	// (0x00043dcd) list_double2_graphic_pane_t1_cp2

0xbb67,	// (0x00043de3) list_double2_graphic_pane_t2_cp2_ParamLimits

0xbb67,	// (0x00043de3) list_double2_graphic_pane_t2_cp2

0xbb79,	// (0x00043df5) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbb79,	// (0x00043df5) list_single_number_heading_pane_g1_cp2

0xbb85,	// (0x00043e01) list_single_number_heading_pane_g2_cp2

0xbb8d,	// (0x00043e09) list_single_number_heading_pane_t1_cp2_ParamLimits

0xbb8d,	// (0x00043e09) list_single_number_heading_pane_t1_cp2

0xbba3,	// (0x00043e1f) list_single_number_heading_pane_t2_cp2_ParamLimits

0xbba3,	// (0x00043e1f) list_single_number_heading_pane_t2_cp2

0xbbb5,	// (0x00043e31) list_single_number_heading_pane_t3_cp2_ParamLimits

0xbbb5,	// (0x00043e31) list_single_number_heading_pane_t3_cp2

0xbb79,	// (0x00043df5) list_single_heading_pane_g1_cp2_ParamLimits

0xbb79,	// (0x00043df5) list_single_heading_pane_g1_cp2

0xbb85,	// (0x00043e01) list_single_heading_pane_g2_cp2

0xbb8d,	// (0x00043e09) list_single_heading_pane_t1_cp2_ParamLimits

0xbb8d,	// (0x00043e09) list_single_heading_pane_t1_cp2

0xceae,	// (0x0004512a) list_single_heading_pane_t2_cp2_ParamLimits

0xceae,	// (0x0004512a) list_single_heading_pane_t2_cp2

0xcdf6,	// (0x00045072) list_double_graphic_pane_g1_cp2_ParamLimits

0xcdf6,	// (0x00045072) list_double_graphic_pane_g1_cp2

0xce02,	// (0x0004507e) list_double_graphic_pane_g2_cp2_ParamLimits

0xce02,	// (0x0004507e) list_double_graphic_pane_g2_cp2

0xce11,	// (0x0004508d) list_double_graphic_pane_g3_cp2

0xce19,	// (0x00045095) list_double_graphic_pane_t1_cp2_ParamLimits

0xce19,	// (0x00045095) list_double_graphic_pane_t1_cp2

0xce2f,	// (0x000450ab) list_double_graphic_pane_t2_cp2_ParamLimits

0xce2f,	// (0x000450ab) list_double_graphic_pane_t2_cp2

0xbc2a,	// (0x00043ea6) list_double_number_pane_g1_cp2_ParamLimits

0xbc2a,	// (0x00043ea6) list_double_number_pane_g1_cp2

0xbc36,	// (0x00043eb2) list_double_number_pane_g2_cp2

0xcdba,	// (0x00045036) list_double_number_pane_t1_cp2_ParamLimits

0xcdba,	// (0x00045036) list_double_number_pane_t1_cp2

0xcdce,	// (0x0004504a) list_double_number_pane_t2_cp2_ParamLimits

0xcdce,	// (0x0004504a) list_double_number_pane_t2_cp2

0xcde4,	// (0x00045060) list_double_number_pane_t3_cp2_ParamLimits

0xcde4,	// (0x00045060) list_double_number_pane_t3_cp2

0xcd23,	// (0x00044f9f) list_single_graphic_pane_g1_cp2_ParamLimits

0xcd23,	// (0x00044f9f) list_single_graphic_pane_g1_cp2

0x9acd,	// (0x00041d49) list_single_graphic_pane_g2_cp2_ParamLimits

0x9acd,	// (0x00041d49) list_single_graphic_pane_g2_cp2

0xbc8e,	// (0x00043f0a) list_single_graphic_pane_g3_cp2

0xccf9,	// (0x00044f75) list_single_graphic_pane_t1_cp2_ParamLimits

0xccf9,	// (0x00044f75) list_single_graphic_pane_t1_cp2

0x9acd,	// (0x00041d49) list_single_number_pane_g1_cp2_ParamLimits

0x9acd,	// (0x00041d49) list_single_number_pane_g1_cp2

0xbc8e,	// (0x00043f0a) list_single_number_pane_g2_cp2

0xccf9,	// (0x00044f75) list_single_number_pane_t1_cp2_ParamLimits

0xccf9,	// (0x00044f75) list_single_number_pane_t1_cp2

0xcd0f,	// (0x00044f8b) list_single_number_pane_t2_cp2_ParamLimits

0xcd0f,	// (0x00044f8b) list_single_number_pane_t2_cp2

0xba99,	// (0x00043d15) list_double2_pane_g1_cp2_ParamLimits

0xba99,	// (0x00043d15) list_double2_pane_g1_cp2

0xbaaa,	// (0x00043d26) list_double2_pane_g2_cp2

0xbc02,	// (0x00043e7e) list_double2_pane_t1_cp2_ParamLimits

0xbc02,	// (0x00043e7e) list_double2_pane_t1_cp2

0xbc18,	// (0x00043e94) list_double2_pane_t2_cp2_ParamLimits

0xbc18,	// (0x00043e94) list_double2_pane_t2_cp2

0xbc2a,	// (0x00043ea6) list_double_pane_g1_cp2_ParamLimits

0xbc2a,	// (0x00043ea6) list_double_pane_g1_cp2

0xbc36,	// (0x00043eb2) list_double_pane_g2_cp2

0xbc3e,	// (0x00043eba) list_double_pane_t1_cp2_ParamLimits

0xbc3e,	// (0x00043eba) list_double_pane_t1_cp2

0xbc54,	// (0x00043ed0) list_double_pane_t2_cp2_ParamLimits

0xbc54,	// (0x00043ed0) list_double_pane_t2_cp2

0xbc7e,	// (0x00043efa) list_single_pane_cp2_g3

0x9acd,	// (0x00041d49) list_single_pane_g1_cp2_ParamLimits

0x9acd,	// (0x00041d49) list_single_pane_g1_cp2

0xbc8e,	// (0x00043f0a) list_single_pane_g2_cp2

0xbc96,	// (0x00043f12) list_single_pane_t1_cp2_ParamLimits

0xbc96,	// (0x00043f12) list_single_pane_t1_cp2

0xbcae,	// (0x00043f2a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xbcae,	// (0x00043f2a) list_single_large_graphic_pane_g1_cp2

0xbcba,	// (0x00043f36) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xbcba,	// (0x00043f36) list_single_large_graphic_pane_g2_cp2

0xbcc6,	// (0x00043f42) list_single_large_graphic_pane_g3_cp2

0xbcce,	// (0x00043f4a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xbcce,	// (0x00043f4a) list_single_large_graphic_pane_g4_cp1

0xbce8,	// (0x00043f64) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xbce8,	// (0x00043f64) list_single_large_graphic_pane_t1_cp2

0xccc5,	// (0x00044f41) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xccc5,	// (0x00044f41) list_single_graphic_heading_pane_g1_cp2

0xcc92,	// (0x00044f0e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xcc92,	// (0x00044f0e) list_single_graphic_heading_pane_g4_cp2

0xbc8e,	// (0x00043f0a) list_single_graphic_heading_pane_g5_cp2

0xccd1,	// (0x00044f4d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xccd1,	// (0x00044f4d) list_single_graphic_heading_pane_t1_cp2

0xcce7,	// (0x00044f63) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xcce7,	// (0x00044f63) list_single_graphic_heading_pane_t2_cp2

0xcc86,	// (0x00044f02) list_single_2graphic_pane_g1_cp2_ParamLimits

0xcc86,	// (0x00044f02) list_single_2graphic_pane_g1_cp2

0xcc92,	// (0x00044f0e) list_single_2graphic_pane_g2_cp2_ParamLimits

0xcc92,	// (0x00044f0e) list_single_2graphic_pane_g2_cp2

0xbc8e,	// (0x00043f0a) list_single_2graphic_pane_g3_cp2

0xcca3,	// (0x00044f1f) list_single_2graphic_pane_g4_cp2_ParamLimits

0xcca3,	// (0x00044f1f) list_single_2graphic_pane_g4_cp2

0xccaf,	// (0x00044f2b) list_single_2graphic_pane_t1_cp2_ParamLimits

0xccaf,	// (0x00044f2b) list_single_2graphic_pane_t1_cp2

0x8f2f,	// (0x000411ab) list_highlight_pane_g10_cp1

0xc87c,	// (0x00044af8) list_highlight_pane_g1_cp1

0xc884,	// (0x00044b00) list_highlight_pane_g2_cp1

0xc88c,	// (0x00044b08) list_highlight_pane_g3_cp1

0xc894,	// (0x00044b10) list_highlight_pane_g4_cp1

0xc89c,	// (0x00044b18) list_highlight_pane_g5_cp1

0xc8a4,	// (0x00044b20) list_highlight_pane_g6_cp1

0xc8ac,	// (0x00044b28) list_highlight_pane_g7_cp1

0xc8b4,	// (0x00044b30) list_highlight_pane_g8_cp1

0xc8bc,	// (0x00044b38) list_highlight_pane_g9_cp1

0x998a,	// (0x00041c06) form_field_slider_pane_t3

0x999a,	// (0x00041c16) form_field_slider_pane_t4

0xc7b0,	// (0x00044a2c) slider_form_pane_ParamLimits

0xc7b0,	// (0x00044a2c) slider_form_pane

0x8f39,	// (0x000411b5) control_abbreviations

0x8f39,	// (0x000411b5) control_conventions

0x8f39,	// (0x000411b5) control_definitions

0x8f39,	// (0x000411b5) format_table_attribute

0xcef8,	// (0x00045174) bg_popup_preview_window_pane_g9

0x8f39,	// (0x000411b5) format_table_data2

0x8f39,	// (0x000411b5) format_table_data3

0x8f39,	// (0x000411b5) format_table_data_example

0x0008,

0x8f39,	// (0x000411b5) intro_purpose

0xf84a,	// (0x00047ac6) bg_popup_preview_window_pane_g

0x8f39,	// (0x000411b5) texts_category

0x8f39,	// (0x000411b5) texts_graphics

0xbcfe,	// (0x00043f7a) text_digital

0xbd0d,	// (0x00043f89) text_primary

0xbd1c,	// (0x00043f98) text_primary_small

0xbd2b,	// (0x00043fa7) text_secondary

0xbd3a,	// (0x00043fb6) text_title

0xd3dc,	// (0x00045658) bg_passive_tab_pane_g1_cp3_srt

0xb9f4,	// (0x00043c70) bg_passive_tab_pane_g2_cp3_srt

0xd3e5,	// (0x00045661) bg_passive_tab_pane_g3_cp3_srt

0x8f87,	// (0x00041203) bg_active_tab_pane_cp3_srt_ParamLimits

0x8f87,	// (0x00041203) bg_active_tab_pane_cp3_srt

0xd3ee,	// (0x0004566a) tabs_4_active_pane_srt_g1

0x9de9,	// (0x00042065) tabs_4_active_pane_srt_t1_ParamLimits

0x9de9,	// (0x00042065) tabs_4_active_pane_srt_t1

0xd3dc,	// (0x00045658) bg_active_tab_pane_g1_cp3_copy1

0xb9f4,	// (0x00043c70) bg_active_tab_pane_g2_cp3_copy1

0xd3e5,	// (0x00045661) bg_active_tab_pane_g3_cp3_copy1

0x8fa5,	// (0x00041221) tabs_2_long_active_pane_srt_ParamLimits

0x8fa5,	// (0x00041221) tabs_2_long_active_pane_srt

0x8fa5,	// (0x00041221) tabs_2_long_passive_pane_srt_ParamLimits

0x8fa5,	// (0x00041221) tabs_2_long_passive_pane_srt

0xb38e,	// (0x0004360a) bg_passive_tab_pane_cp4_srt_ParamLimits

0xb38e,	// (0x0004360a) bg_passive_tab_pane_cp4_srt

0xd2b6,	// (0x00045532) bg_passive_tab_pane_g1_cp4_srt

0xb9f4,	// (0x00043c70) bg_passive_tab_pane_g2_cp4_srt

0xd2bf,	// (0x0004553b) bg_passive_tab_pane_g3_cp4_srt

0x8fa5,	// (0x00041221) bg_active_tab_pane_cp4_srt_ParamLimits

0x8fa5,	// (0x00041221) bg_active_tab_pane_cp4_srt

0x9c16,	// (0x00041e92) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9c16,	// (0x00041e92) tabs_2_long_active_pane_srt_t1

0xd2b6,	// (0x00045532) bg_active_tab_pane_g1_cp4_srt

0xb9f4,	// (0x00043c70) bg_active_tab_pane_g2_cp4_srt

0xd2bf,	// (0x0004553b) bg_active_tab_pane_g3_cp4_srt

0x8f87,	// (0x00041203) tabs_3_long_active_pane_srt_ParamLimits

0x8f87,	// (0x00041203) tabs_3_long_active_pane_srt

0x8f87,	// (0x00041203) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8f87,	// (0x00041203) tabs_3_long_passive_pane_cp_srt

0x8f87,	// (0x00041203) tabs_3_long_passive_pane_srt_ParamLimits

0x8f87,	// (0x00041203) tabs_3_long_passive_pane_srt

0xb38e,	// (0x0004360a) bg_passive_tab_pane_cp5_srt_ParamLimits

0xb38e,	// (0x0004360a) bg_passive_tab_pane_cp5_srt

0xba4d,	// (0x00043cc9) bg_passive_tab_pane_g1_cp5_srt

0xb9f4,	// (0x00043c70) bg_passive_tab_pane_g2_cp5_srt

0xba56,	// (0x00043cd2) bg_passive_tab_pane_g3_cp5_srt

0x8fa5,	// (0x00041221) bg_active_tab_pane_cp5_srt_ParamLimits

0x8fa5,	// (0x00041221) bg_active_tab_pane_cp5_srt

0x9c00,	// (0x00041e7c) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9c00,	// (0x00041e7c) tabs_3_long_active_pane_srt_t1

0xba4d,	// (0x00043cc9) bg_active_tab_pane_g1_cp5_srt

0xb9f4,	// (0x00043c70) bg_active_tab_pane_g2_cp5_srt

0xba56,	// (0x00043cd2) bg_active_tab_pane_g3_cp5_srt

0xd2a8,	// (0x00045524) navi_text_pane_srt_t1

0xd2a0,	// (0x0004551c) navi_icon_pane_srt_g1

0xbe4a,	// (0x000440c6) midp_editing_number_pane_srt

0xbd49,	// (0x00043fc5) midp_ticker_pane_srt

0xbe52,	// (0x000440ce) midp_ticker_pane_srt_g1

0xbe5a,	// (0x000440d6) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x000479f4) midp_ticker_pane_srt_g

0xbe62,	// (0x000440de) midp_ticker_pane_srt_t1

0xd291,	// (0x0004550d) midp_editing_number_pane_t1_copy1

0xb38e,	// (0x0004360a) listscroll_midp_pane

0xb38e,	// (0x0004360a) midp_form_pane

0xbd51,	// (0x00043fcd) midp_info_popup_window_ParamLimits

0xbd51,	// (0x00043fcd) midp_info_popup_window

0xb2d5,	// (0x00043551) bg_popup_sub_pane_cp50_ParamLimits

0xb2d5,	// (0x00043551) bg_popup_sub_pane_cp50

0xc4cd,	// (0x00044749) listscroll_midp_info_pane_ParamLimits

0xc4cd,	// (0x00044749) listscroll_midp_info_pane

0xc4b5,	// (0x00044731) listscroll_form_midp_pane_ParamLimits

0xc4b5,	// (0x00044731) listscroll_form_midp_pane

0xc4c1,	// (0x0004473d) scroll_bar_cp050

0x997e,	// (0x00041bfa) list_midp_pane

0xdcff,	// (0x00045f7b) signal_pane_g2_cp

0xc3e7,	// (0x00044663) listscroll_midp_info_pane_t1_ParamLimits

0xc3e7,	// (0x00044663) listscroll_midp_info_pane_t1

0xc3ff,	// (0x0004467b) listscroll_midp_info_pane_t2_ParamLimits

0xc3ff,	// (0x0004467b) listscroll_midp_info_pane_t2

0xc43d,	// (0x000446b9) listscroll_midp_info_pane_t3_ParamLimits

0xc43d,	// (0x000446b9) listscroll_midp_info_pane_t3

0xc477,	// (0x000446f3) listscroll_midp_info_pane_t4_ParamLimits

0xc477,	// (0x000446f3) listscroll_midp_info_pane_t4

0x0003,

0x0045,	// (0x000382c1) listscroll_midp_info_pane_t_ParamLimits

0x0045,	// (0x000382c1) listscroll_midp_info_pane_t

0xb355,	// (0x000435d1) scroll_pane_cp21

0xc389,	// (0x00044605) form_midp_field_choice_group_pane

0xc392,	// (0x0004460e) form_midp_field_text_pane

0xc3cd,	// (0x00044649) form_midp_field_time_pane

0xc3d5,	// (0x00044651) form_midp_gauge_slider_pane

0xc3de,	// (0x0004465a) form_midp_gauge_wait_pane

0x8f39,	// (0x000411b5) form_midp_image_pane

0x75e0,	// (0x0003f85c) list_single_midp_pane_ParamLimits

0x75e0,	// (0x0003f85c) list_single_midp_pane

0x995b,	// (0x00041bd7) form_midp_field_text_pane_t1

0xc20b,	// (0x00044487) input_focus_pane_cp050

0xc378,	// (0x000445f4) list_midp_form_text_pane

0xc347,	// (0x000445c3) form_midp_field_choice_group_pane_t1

0xc355,	// (0x000445d1) input_focus_pane_cp051

0xc369,	// (0x000445e5) list_midp_choice_pane

0x8f39,	// (0x000411b5) status_idle_pane

0xc32b,	// (0x000445a7) form_midp_field_time_pane_t1

0x8f2f,	// (0x000411ab) wait_anim_pane_g2_copy1

0xc339,	// (0x000445b5) form_midp_field_time_pane_t2

0x0001,

0xbdbc,	// (0x00044038) aid_navinavi_width_2_pane

0x0040,	// (0x000382bc) form_midp_field_time_pane_t

0x8f39,	// (0x000411b5) input_focus_pane_cp052

0x8f39,	// (0x000411b5) bg_input_focus_pane_cp040

0xc307,	// (0x00044583) form_midp_gauge_slider_pane_t1

0xc315,	// (0x00044591) form_midp_gauge_slider_pane_t2

0x993b,	// (0x00041bb7) form_midp_gauge_slider_pane_t3

0x994b,	// (0x00041bc7) form_midp_gauge_slider_pane_t4

0x0003,

0xf80a,	// (0x00047a86) form_midp_gauge_slider_pane_t

0xc323,	// (0x0004459f) form_midp_slider_pane

0x8fa5,	// (0x00041221) bg_input_focus_pane_cp041_ParamLimits

0x8fa5,	// (0x00041221) bg_input_focus_pane_cp041

0xc2d4,	// (0x00044550) form_midp_gauge_wait_pane_t1_ParamLimits

0xc2d4,	// (0x00044550) form_midp_gauge_wait_pane_t1

0xc2e6,	// (0x00044562) form_midp_gauge_wait_pane_t2_ParamLimits

0xc2e6,	// (0x00044562) form_midp_gauge_wait_pane_t2

0x0001,

0x0032,	// (0x000382ae) form_midp_gauge_wait_pane_t_ParamLimits

0x0032,	// (0x000382ae) form_midp_gauge_wait_pane_t

0xc2f8,	// (0x00044574) form_midp_wait_pane_ParamLimits

0xc2f8,	// (0x00044574) form_midp_wait_pane

0xc29e,	// (0x0004451a) form_midp_image_pane_g1

0xc2a7,	// (0x00044523) form_midp_image_pane_t1

0xc2b6,	// (0x00044532) form_midp_image_pane_t2

0xc2c5,	// (0x00044541) form_midp_image_pane_t3

0x0002,

0x002b,	// (0x000382a7) form_midp_image_pane_t

0xc295,	// (0x00044511) list_single_midp_pane_g1

0x0db1,	// (0x0003902d) list_single_midp_pane_t1

0x9925,	// (0x00041ba1) list_midp_form_item_pane_ParamLimits

0x9925,	// (0x00041ba1) list_midp_form_item_pane

0xbd64,	// (0x00043fe0) list_midp_form_item_pane_t1

0xbd73,	// (0x00043fef) midp_ticker_pane_g1

0xbd7f,	// (0x00043ffb) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x000479da) midp_ticker_pane_g

0xbd8b,	// (0x00044007) midp_ticker_pane_t1

0xd341,	// (0x000455bd) midp_editing_number_pane_t1

0xd31f,	// (0x0004559b) midp_editing_number_pane

0xd32e,	// (0x000455aa) midp_ticker_pane

0xd281,	// (0x000454fd) ai_message_heading_pane

0x8f39,	// (0x000411b5) bg_popup_window_pane_cp14

0xd289,	// (0x00045505) listscroll_ai_message_pane

0xd20b,	// (0x00045487) ai_message_heading_pane_g1_ParamLimits

0xd20b,	// (0x00045487) ai_message_heading_pane_g1

0xd217,	// (0x00045493) ai_message_heading_pane_g2_ParamLimits

0xd217,	// (0x00045493) ai_message_heading_pane_g2

0xd223,	// (0x0004549f) ai_message_heading_pane_g3_ParamLimits

0xd223,	// (0x0004549f) ai_message_heading_pane_g3

0xd22f,	// (0x000454ab) ai_message_heading_pane_g4_ParamLimits

0xd22f,	// (0x000454ab) ai_message_heading_pane_g4

0x0003,

0xf8ac,	// (0x00047b28) ai_message_heading_pane_g_ParamLimits

0xf8ac,	// (0x00047b28) ai_message_heading_pane_g

0xd23b,	// (0x000454b7) ai_message_heading_pane_t1_ParamLimits

0xd23b,	// (0x000454b7) ai_message_heading_pane_t1

0xd255,	// (0x000454d1) ai_message_heading_pane_t2_ParamLimits

0xd255,	// (0x000454d1) ai_message_heading_pane_t2

0x0001,

0xf8b5,	// (0x00047b31) ai_message_heading_pane_t_ParamLimits

0xf8b5,	// (0x00047b31) ai_message_heading_pane_t

0xd267,	// (0x000454e3) bg_popup_heading_pane_cp1_ParamLimits

0xd267,	// (0x000454e3) bg_popup_heading_pane_cp1

0xd1f9,	// (0x00045475) list_ai_message_pane_ParamLimits

0xd1f9,	// (0x00045475) list_ai_message_pane

0xb355,	// (0x000435d1) scroll_pane_cp10

0xd195,	// (0x00045411) list_ai_message_pane_g1

0xd19d,	// (0x00045419) list_ai_message_pane_g2

0x0001,

0xf889,	// (0x00047b05) list_ai_message_pane_g

0xd1a5,	// (0x00045421) list_ai_message_pane_t1_ParamLimits

0xd1a5,	// (0x00045421) list_ai_message_pane_t1

0xd1ba,	// (0x00045436) list_ai_message_pane_t2_ParamLimits

0xd1ba,	// (0x00045436) list_ai_message_pane_t2

0xd1cf,	// (0x0004544b) list_ai_message_pane_t3_ParamLimits

0xd1cf,	// (0x0004544b) list_ai_message_pane_t3

0xd1e4,	// (0x00045460) list_ai_message_pane_t4_ParamLimits

0xd1e4,	// (0x00045460) list_ai_message_pane_t4

0x0003,

0xf88e,	// (0x00047b0a) list_ai_message_pane_t_ParamLimits

0xf88e,	// (0x00047b0a) list_ai_message_pane_t

0x9bde,	// (0x00041e5a) cell_ai_soft_ind_pane_ParamLimits

0x9bde,	// (0x00041e5a) cell_ai_soft_ind_pane

0xbd9d,	// (0x00044019) cell_ai_soft_ind_pane_g1_ParamLimits

0xbd9d,	// (0x00044019) cell_ai_soft_ind_pane_g1

0x8f39,	// (0x000411b5) grid_highlight_cp1

0xbdaa,	// (0x00044026) text_secondary_cp56_ParamLimits

0xbdaa,	// (0x00044026) text_secondary_cp56

0xd16a,	// (0x000453e6) example_general_pane_ParamLimits

0xd16a,	// (0x000453e6) example_general_pane

0xd176,	// (0x000453f2) example_parent_pane_g1_ParamLimits

0xd176,	// (0x000453f2) example_parent_pane_g1

0xd182,	// (0x000453fe) example_parent_pane_t1_ParamLimits

0xd182,	// (0x000453fe) example_parent_pane_t1

0x851e,	// (0x0004079a) popup_preview_text_window_ParamLimits

0x851e,	// (0x0004079a) popup_preview_text_window

0xbc86,	// (0x00043f02) list_single_pane_cp2_g4

0x9174,	// (0x000413f0) bg_popup_preview_window_pane_ParamLimits

0x9174,	// (0x000413f0) bg_popup_preview_window_pane

0xcf00,	// (0x0004517c) popup_preview_text_window_t1_ParamLimits

0xcf00,	// (0x0004517c) popup_preview_text_window_t1

0xcf1e,	// (0x0004519a) popup_preview_text_window_t2_ParamLimits

0xcf1e,	// (0x0004519a) popup_preview_text_window_t2

0xcf67,	// (0x000451e3) popup_preview_text_window_t3_ParamLimits

0xcf67,	// (0x000451e3) popup_preview_text_window_t3

0xcfac,	// (0x00045228) popup_preview_text_window_t4_ParamLimits

0xcfac,	// (0x00045228) popup_preview_text_window_t4

0x0004,

0xf85d,	// (0x00047ad9) popup_preview_text_window_t_ParamLimits

0xf85d,	// (0x00047ad9) popup_preview_text_window_t

0xd02a,	// (0x000452a6) scroll_pane_cp11

0xc197,	// (0x00044413) bg_popup_preview_window_pane_g1

0xcec0,	// (0x0004513c) bg_popup_preview_window_pane_g2

0xcec8,	// (0x00045144) bg_popup_preview_window_pane_g3

0xced0,	// (0x0004514c) bg_popup_preview_window_pane_g4

0xced8,	// (0x00045154) bg_popup_preview_window_pane_g5

0xcee0,	// (0x0004515c) bg_popup_preview_window_pane_g6

0xcee8,	// (0x00045164) bg_popup_preview_window_pane_g7

0xcef0,	// (0x0004516c) bg_popup_preview_window_pane_g8

0x137f,	// (0x000395fb) aid_popup_width_pane

0x849a,	// (0x00040716) popup_midp_note_alarm_window_ParamLimits

0x849a,	// (0x00040716) popup_midp_note_alarm_window

0xb229,	// (0x000434a5) data_form_pane_ParamLimits

0x74cb,	// (0x0003f747) form_field_data_pane_g1

0x74d5,	// (0x0003f751) form_field_data_pane_t1_ParamLimits

0xb235,	// (0x000434b1) input_focus_pane_ParamLimits

0x0a85,	// (0x00038d01) data_form_wide_pane_ParamLimits

0x0a96,	// (0x00038d12) form_field_data_wide_pane_g1

0x0aa2,	// (0x00038d1e) form_field_data_wide_pane_t1_ParamLimits

0x9367,	// (0x000415e3) input_focus_pane_cp6_ParamLimits

0x7d2d,	// (0x0003ffa9) input_popup_find_pane_g1_ParamLimits

0x7d2d,	// (0x0003ffa9) input_popup_find_pane_g1

0x1ca2,	// (0x00039f1e) aid_navi_side_left_pane

0x1cb7,	// (0x00039f33) aid_navi_side_right_pane

0xc959,	// (0x00044bd5) bg_popup_window_pane_cp30_ParamLimits

0xc959,	// (0x00044bd5) bg_popup_window_pane_cp30

0xc9d3,	// (0x00044c4f) popup_midp_note_alarm_window_g1_ParamLimits

0xc9d3,	// (0x00044c4f) popup_midp_note_alarm_window_g1

0xca03,	// (0x00044c7f) popup_midp_note_alarm_window_t1_ParamLimits

0xca03,	// (0x00044c7f) popup_midp_note_alarm_window_t1

0xcaa4,	// (0x00044d20) popup_midp_note_alarm_window_t2_ParamLimits

0xcaa4,	// (0x00044d20) popup_midp_note_alarm_window_t2

0xcb52,	// (0x00044dce) popup_midp_note_alarm_window_t3_ParamLimits

0xcb52,	// (0x00044dce) popup_midp_note_alarm_window_t3

0xcb84,	// (0x00044e00) popup_midp_note_alarm_window_t4_ParamLimits

0xcb84,	// (0x00044e00) popup_midp_note_alarm_window_t4

0xcbaa,	// (0x00044e26) popup_midp_note_alarm_window_t5_ParamLimits

0xcbaa,	// (0x00044e26) popup_midp_note_alarm_window_t5

0x000a,

0x00ba,	// (0x00038336) popup_midp_note_alarm_window_t_ParamLimits

0x00ba,	// (0x00038336) popup_midp_note_alarm_window_t

0xcc56,	// (0x00044ed2) wait_bar_pane_cp1_ParamLimits

0xcc56,	// (0x00044ed2) wait_bar_pane_cp1

0x8f39,	// (0x000411b5) wait_anim_pane_copy1

0x8f39,	// (0x000411b5) wait_border_pane_copy1

0xc671,	// (0x000448ed) wait_border_pane_g1_copy1

0x0abc,	// (0x00038d38) form_field_popup_pane_g1

0x74ef,	// (0x0003f76b) form_field_popup_pane_t1_ParamLimits

0xb235,	// (0x000434b1) input_focus_pane_cp7_ParamLimits

0xb257,	// (0x000434d3) list_form_pane_ParamLimits

0x0ade,	// (0x00038d5a) form_field_popup_wide_pane_g1

0x0ae6,	// (0x00038d62) form_field_popup_wide_pane_t1_ParamLimits

0xb235,	// (0x000434b1) input_focus_pane_cp8_ParamLimits

0xb263,	// (0x000434df) list_form_wide_pane_ParamLimits

0xd415,	// (0x00045691) aid_size_cell_graphic_pane

0x756e,	// (0x0003f7ea) data_form_pane_t1_ParamLimits

0x75f9,	// (0x0003f875) data_form_wide_pane_t1_ParamLimits

0x95a6,	// (0x00041822) bg_status_flat_pane

0x79dd,	// (0x0003fc59) title_pane_t1_ParamLimits

0x8f4f,	// (0x000411cb) title_pane_t2_ParamLimits

0x8f75,	// (0x000411f1) title_pane_t3_ParamLimits

0xf55d,	// (0x000477d9) title_pane_t_ParamLimits

0xb7cc,	// (0x00043a48) level_1_signal_ParamLimits

0xb7d9,	// (0x00043a55) level_2_signal_ParamLimits

0xb7e6,	// (0x00043a62) level_3_signal_ParamLimits

0xb7f3,	// (0x00043a6f) level_4_signal_ParamLimits

0xb800,	// (0x00043a7c) level_5_signal_ParamLimits

0xb80d,	// (0x00043a89) level_6_signal_ParamLimits

0xb81a,	// (0x00043a96) level_7_signal_ParamLimits

0xb7cc,	// (0x00043a48) level_1_battery_ParamLimits

0xb7d9,	// (0x00043a55) level_2_battery_ParamLimits

0xb7e6,	// (0x00043a62) level_3_battery_ParamLimits

0xb7f3,	// (0x00043a6f) level_4_battery_ParamLimits

0xb800,	// (0x00043a7c) level_5_battery_ParamLimits

0xb80d,	// (0x00043a89) level_6_battery_ParamLimits

0xb81a,	// (0x00043a96) level_7_battery_ParamLimits

0xc87c,	// (0x00044af8) bg_status_flat_pane_g1

0xc884,	// (0x00044b00) bg_status_flat_pane_g2

0xc88c,	// (0x00044b08) bg_status_flat_pane_g3

0xc894,	// (0x00044b10) bg_status_flat_pane_g4

0xc89c,	// (0x00044b18) bg_status_flat_pane_g5

0xc8a4,	// (0x00044b20) bg_status_flat_pane_g6

0xc8ac,	// (0x00044b28) bg_status_flat_pane_g7

0x7a69,	// (0x0003fce5) tabs_3_active_pane_t1_ParamLimits

0x7a69,	// (0x0003fce5) tabs_3_passive_pane_t1_ParamLimits

0x7a7b,	// (0x0003fcf7) tabs_4_active_pane_t1_ParamLimits

0x7a7b,	// (0x0003fcf7) tabs_4_1_passive_pane_t1_ParamLimits

0x7d43,	// (0x0003ffbf) tabs_2_active_pane_t1_ParamLimits

0x7d43,	// (0x0003ffbf) tabs_2_passive_pane_t1_ParamLimits

0x8fa5,	// (0x00041221) bg_active_tab_pane_cp4_ParamLimits

0x7d55,	// (0x0003ffd1) tabs_2_long_active_pane_t1_ParamLimits

0xb38e,	// (0x0004360a) bg_passive_tab_pane_cp4_ParamLimits

0x2a11,	// (0x0003ac8d) list_single_midp_graphic_pane_t1_ParamLimits

0x8fa5,	// (0x00041221) bg_active_tab_pane_cp5_ParamLimits

0x7d68,	// (0x0003ffe4) tabs_3_long_active_pane_t1_ParamLimits

0xb38e,	// (0x0004360a) bg_passive_tab_pane_cp5_ParamLimits

0x2a11,	// (0x0003ac8d) list_single_midp_graphic_pane_t1

0x95a6,	// (0x00041822) bg_status_flat_pane_ParamLimits

0xc068,	// (0x000442e4) indicator_pane_cp2_ParamLimits

0xc068,	// (0x000442e4) indicator_pane_cp2

0x9724,	// (0x000419a0) navi_pane_srt_ParamLimits

0x9724,	// (0x000419a0) navi_pane_srt

0xc090,	// (0x0004430c) popup_clock_digital_analogue_window_cp1

0x8fe9,	// (0x00041265) indicator_pane_t1

0xbd49,	// (0x00043fc5) copy_highlight_pane

0xbd49,	// (0x00043fc5) cursor_graphics_pane

0xbd49,	// (0x00043fc5) graphic_within_text_pane

0xbd49,	// (0x00043fc5) link_highlight_pane

0xcfed,	// (0x00045269) popup_preview_text_window_t5_ParamLimits

0xcfed,	// (0x00045269) popup_preview_text_window_t5

0xbdc4,	// (0x00044040) cursor_digital_pane

0xbdc4,	// (0x00044040) cursor_primary_pane

0xbdd5,	// (0x00044051) cursor_primary_small_pane

0xbddd,	// (0x00044059) cursor_secondary_pane

0xbde5,	// (0x00044061) cursor_title_pane

0xbdc4,	// (0x00044040) link_highlight_digital_pane

0xbdcc,	// (0x00044048) link_highlight_primary_pane

0xbdd5,	// (0x00044051) link_highlight_primary_small_pane

0xbddd,	// (0x00044059) link_highlight_secondary_pane

0xbde5,	// (0x00044061) link_highlight_title_pane

0xbdc4,	// (0x00044040) copy_highlight_digital_pane

0xbdc4,	// (0x00044040) copy_highlight_primary_pane

0xbdd5,	// (0x00044051) copy_highlight_primary_small_pane

0xbddd,	// (0x00044059) copy_highlight_secondary_pane

0xbde5,	// (0x00044061) copy_highlight_title_pane

0xbddd,	// (0x00044059) graphic_text_digital_pane

0xc8fc,	// (0x00044b78) graphic_text_primary_pane

0xc905,	// (0x00044b81) graphic_text_primary_small_pane

0xbdd5,	// (0x00044051) graphic_text_secondary_pane

0xbdc4,	// (0x00044040) graphic_text_title_pane

0x7fb6,	// (0x00040232) cursor_primary_pane_g1

0xc8ee,	// (0x00044b6a) cursor_text_primary_t1

0x99be,	// (0x00041c3a) cursor_primary_small_pane_g1

0xc8e0,	// (0x00044b5c) cursor_text_primary_small_t1

0x99b4,	// (0x00041c30) cursor_primary_small_pane_g1_copy1

0xc8d2,	// (0x00044b4e) cursor_text_primary_small_t1_copy1

0xc8c4,	// (0x00044b40) cursor_text_title_t1

0x99aa,	// (0x00041c26) cursor_title_pane_g1

0x7fb6,	// (0x00040232) cursor_digital_pane_g1

0xbded,	// (0x00044069) cursor_text_digital_t1

0xc865,	// (0x00044ae1) link_highlight_primary_pane_g1

0xc86d,	// (0x00044ae9) link_highlight_primary_pane_t1

0xbdfb,	// (0x00044077) link_highlight_primary_small_pane_g1

0xbe03,	// (0x0004407f) link_highlight_primary_small_pane_t1

0xbdfb,	// (0x00044077) link_highlight_secondary_pane_g1

0xbe12,	// (0x0004408e) link_highlight_secondary_pane_t1

0xc7d9,	// (0x00044a55) link_highlight_title_pane_g1

0xc7e1,	// (0x00044a5d) link_highlight_title_pane_t1

0xc7c2,	// (0x00044a3e) link_highlight_digital_pane_g1

0xc7ca,	// (0x00044a46) link_highlight_digital_pane_t1

0xc6b6,	// (0x00044932) copy_highlight_primary_pane_g1

0xc6be,	// (0x0004493a) copy_highlight_primary_pane_t1

0xc690,	// (0x0004490c) copy_highlight_primary_small_pane_g1

0xc6a7,	// (0x00044923) copy_highlight_primary_small_pane_t1

0xbe21,	// (0x0004409d) copy_highlight_secondary_pane_g1

0xbe29,	// (0x000440a5) copy_highlight_secondary_pane_t1

0xc690,	// (0x0004490c) copy_highlight_title_pane_g1

0xc698,	// (0x00044914) copy_highlight_title_pane_t1

0xc6b6,	// (0x00044932) copy_highlight_digital_pane_g1

0xd59b,	// (0x00045817) copy_highlight_digital_pane_t1

0xd4ef,	// (0x0004576b) graphic_text_primary_pane_g1

0xd57f,	// (0x000457fb) graphic_text_primary_pane_t1

0xd58d,	// (0x00045809) graphic_text_primary_pane_t2

0x0001,

0xf906,	// (0x00047b82) graphic_text_primary_pane_t

0xd55b,	// (0x000457d7) graphic_text_primary_small_pane_g1

0xd563,	// (0x000457df) graphic_text_primary_small_pane_t1

0xd571,	// (0x000457ed) graphic_text_primary_small_pane_t2

0x0001,

0xf901,	// (0x00047b7d) graphic_text_primary_small_pane_t

0xd537,	// (0x000457b3) graphic_text_secondary_pane_g1

0xd53f,	// (0x000457bb) graphic_text_secondary_pane_t1

0xd54d,	// (0x000457c9) graphic_text_secondary_pane_t2

0x0001,

0xf8fc,	// (0x00047b78) graphic_text_secondary_pane_t

0xd513,	// (0x0004578f) graphic_text_title_pane_g1

0xd51b,	// (0x00045797) graphic_text_title_pane_t1

0xd529,	// (0x000457a5) graphic_text_title_pane_t2

0x0001,

0xf8f7,	// (0x00047b73) graphic_text_title_pane_t

0xd4ef,	// (0x0004576b) graphic_text_digital_pane_g1

0xd4f7,	// (0x00045773) graphic_text_digital_pane_t1

0xd505,	// (0x00045781) graphic_text_digital_pane_t2

0x0001,

0xf8f2,	// (0x00047b6e) graphic_text_digital_pane_t

0x8fa5,	// (0x00041221) navi_icon_pane_srt_ParamLimits

0x8fa5,	// (0x00041221) navi_icon_pane_srt

0x8f39,	// (0x000411b5) navi_midp_pane_srt

0x8f39,	// (0x000411b5) navi_navi_pane_srt

0x8fa5,	// (0x00041221) navi_text_pane_srt_ParamLimits

0x8fa5,	// (0x00041221) navi_text_pane_srt

0xd4ba,	// (0x00045736) navi_navi_icon_text_pane_srt

0xd4c2,	// (0x0004573e) navi_navi_pane_srt_g1_ParamLimits

0xd4c2,	// (0x0004573e) navi_navi_pane_srt_g1

0xd4d4,	// (0x00045750) navi_navi_pane_srt_g2_ParamLimits

0xd4d4,	// (0x00045750) navi_navi_pane_srt_g2

0x0001,

0xf8ed,	// (0x00047b69) navi_navi_pane_srt_g_ParamLimits

0xf8ed,	// (0x00047b69) navi_navi_pane_srt_g

0xd4e6,	// (0x00045762) navi_navi_tabs_pane_srt

0xd4ba,	// (0x00045736) navi_navi_text_pane_srt

0xd4ba,	// (0x00045736) navi_navi_volume_pane_srt

0xd4ab,	// (0x00045727) navi_navi_text_pane_srt_t1

0x2e37,	// (0x0003b0b3) navi_navi_volume_pane_srt_g1

0x2e3f,	// (0x0003b0bb) volume_small_pane_srt_ParamLimits

0x2e3f,	// (0x0003b0bb) volume_small_pane_srt

0x21bf,	// (0x0003a43b) volume_small_pane_srt_g1_ParamLimits

0x21bf,	// (0x0003a43b) volume_small_pane_srt_g1

0x21cf,	// (0x0003a44b) volume_small_pane_srt_g2_ParamLimits

0x21cf,	// (0x0003a44b) volume_small_pane_srt_g2

0x21e0,	// (0x0003a45c) volume_small_pane_srt_g3_ParamLimits

0x21e0,	// (0x0003a45c) volume_small_pane_srt_g3

0x21f1,	// (0x0003a46d) volume_small_pane_srt_g4_ParamLimits

0x21f1,	// (0x0003a46d) volume_small_pane_srt_g4

0x2202,	// (0x0003a47e) volume_small_pane_srt_g5_ParamLimits

0x2202,	// (0x0003a47e) volume_small_pane_srt_g5

0x2213,	// (0x0003a48f) volume_small_pane_srt_g6_ParamLimits

0x2213,	// (0x0003a48f) volume_small_pane_srt_g6

0x2224,	// (0x0003a4a0) volume_small_pane_srt_g7_ParamLimits

0x2224,	// (0x0003a4a0) volume_small_pane_srt_g7

0x2235,	// (0x0003a4b1) volume_small_pane_srt_g8_ParamLimits

0x2235,	// (0x0003a4b1) volume_small_pane_srt_g8

0x2246,	// (0x0003a4c2) volume_small_pane_srt_g9_ParamLimits

0x2246,	// (0x0003a4c2) volume_small_pane_srt_g9

0x2257,	// (0x0003a4d3) volume_small_pane_srt_g10_ParamLimits

0x2257,	// (0x0003a4d3) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x000479df) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x000479df) volume_small_pane_srt_g

0x921d,	// (0x00041499) query_popup_data_pane_cp2

0xd491,	// (0x0004570d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xd491,	// (0x0004570d) navi_navi_icon_text_pane_srt_t1

0xc8fc,	// (0x00044b78) navi_tabs_2_long_pane_srt

0xc8fc,	// (0x00044b78) navi_tabs_2_pane_srt

0xc8fc,	// (0x00044b78) navi_tabs_3_long_pane_srt

0xc8fc,	// (0x00044b78) navi_tabs_3_pane_srt

0xc8fc,	// (0x00044b78) navi_tabs_4_pane_srt

0x2e17,	// (0x0003b093) tabs_2_active_pane_srt_ParamLimits

0x2e17,	// (0x0003b093) tabs_2_active_pane_srt

0x2e27,	// (0x0003b0a3) tabs_2_passive_pane_srt_ParamLimits

0x2e27,	// (0x0003b0a3) tabs_2_passive_pane_srt

0xc20b,	// (0x00044487) bg_passive_tab_pane_cp1_srt_ParamLimits

0xc20b,	// (0x00044487) bg_passive_tab_pane_cp1_srt

0xd46f,	// (0x000456eb) bg_passive_tab_pane_g1_cp1_srt

0xb9f4,	// (0x00043c70) bg_passive_tab_pane_g2_cp1_srt

0xd478,	// (0x000456f4) bg_passive_tab_pane_g3_cp1_srt

0x8f87,	// (0x00041203) bg_active_tab_pane_cp1_srt_ParamLimits

0x8f87,	// (0x00041203) bg_active_tab_pane_cp1_srt

0xd481,	// (0x000456fd) tabs_2_active_pane_srt_g1

0x9e65,	// (0x000420e1) tabs_2_active_pane_srt_t1_ParamLimits

0x9e65,	// (0x000420e1) tabs_2_active_pane_srt_t1

0xd46f,	// (0x000456eb) bg_active_tab_pane_g1_cp1_srt

0xb9f4,	// (0x00043c70) bg_active_tab_pane_g2_cp1_srt

0xd478,	// (0x000456f4) bg_active_tab_pane_g3_cp1_srt

0x2de4,	// (0x0003b060) tabs_3_active_pane_srt_ParamLimits

0x2de4,	// (0x0003b060) tabs_3_active_pane_srt

0x2df5,	// (0x0003b071) tabs_3_passive_pane_cp_srt_ParamLimits

0x2df5,	// (0x0003b071) tabs_3_passive_pane_cp_srt

0x2e06,	// (0x0003b082) tabs_3_passive_pane_srt_ParamLimits

0x2e06,	// (0x0003b082) tabs_3_passive_pane_srt

0xc20b,	// (0x00044487) bg_passive_tab_pane_cp2_srt_ParamLimits

0xc20b,	// (0x00044487) bg_passive_tab_pane_cp2_srt

0xbe38,	// (0x000440b4) bg_passive_tab_pane_g1_cp2_srt

0xb9f4,	// (0x00043c70) bg_passive_tab_pane_g2_cp2_srt

0xbe41,	// (0x000440bd) bg_passive_tab_pane_g3_cp2_srt

0x8f87,	// (0x00041203) bg_active_tab_pane_cp2_srt_ParamLimits

0x8f87,	// (0x00041203) bg_active_tab_pane_cp2_srt

0xd467,	// (0x000456e3) tabs_3_active_pane_srt_g1

0x9e4f,	// (0x000420cb) tabs_3_active_pane_srt_t1_ParamLimits

0x9e4f,	// (0x000420cb) tabs_3_active_pane_srt_t1

0xbe38,	// (0x000440b4) bg_active_tab_pane_g1_cp2_srt

0xb9f4,	// (0x00043c70) bg_active_tab_pane_g2_cp2_srt

0xbe41,	// (0x000440bd) bg_active_tab_pane_g3_cp2_srt

0x2d9c,	// (0x0003b018) tabs_4_active_pane_srt_ParamLimits

0x2d9c,	// (0x0003b018) tabs_4_active_pane_srt

0x2dae,	// (0x0003b02a) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2dae,	// (0x0003b02a) tabs_4_passive_pane_cp2_srt

0x23e1,	// (0x0003a65d) aid_size_cell_toolbar

0xbfa7,	// (0x00044223) main_idle_act_pane_ParamLimits

0x2586,	// (0x0003a802) popup_large_graphic_colour_window_ParamLimits

0x87a4,	// (0x00040a20) popup_toolbar_window_ParamLimits

0x87a4,	// (0x00040a20) popup_toolbar_window

0xd350,	// (0x000455cc) list_single_graphic_2heading_pane_ParamLimits

0xd350,	// (0x000455cc) list_single_graphic_2heading_pane

0xb60b,	// (0x00043887) aid_size_cell_apps_grid_lsc_pane

0xb61d,	// (0x00043899) aid_size_cell_apps_grid_prt_pane

0xb38e,	// (0x0004360a) bg_wml_button_pane_cp1_ParamLimits

0xb38e,	// (0x0004360a) bg_wml_button_pane_cp1

0x995b,	// (0x00041bd7) form_midp_field_text_pane_t1_ParamLimits

0xc20b,	// (0x00044487) input_focus_pane_cp050_ParamLimits

0xc378,	// (0x000445f4) list_midp_form_text_pane_ParamLimits

0xc355,	// (0x000445d1) input_focus_pane_cp051_ParamLimits

0xc369,	// (0x000445e5) list_midp_choice_pane_ParamLimits

0x98ef,	// (0x00041b6b) list_single_2graphic_pane_cp3_ParamLimits

0x98ef,	// (0x00041b6b) list_single_2graphic_pane_cp3

0x9904,	// (0x00041b80) list_single_midp_graphic_pane_ParamLimits

0x9904,	// (0x00041b80) list_single_midp_graphic_pane

0x0c8b,	// (0x00038f07) list_single_graphic_2heading_pane_g1_ParamLimits

0x0c8b,	// (0x00038f07) list_single_graphic_2heading_pane_g1

0x0c97,	// (0x00038f13) list_single_graphic_2heading_pane_g4_ParamLimits

0x0c97,	// (0x00038f13) list_single_graphic_2heading_pane_g4

0x0ca3,	// (0x00038f1f) list_single_graphic_2heading_pane_g5_ParamLimits

0x0ca3,	// (0x00038f1f) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x00047a32) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x00047a32) list_single_graphic_2heading_pane_g

0x0caf,	// (0x00038f2b) list_single_graphic_2heading_pane_t1_ParamLimits

0x0caf,	// (0x00038f2b) list_single_graphic_2heading_pane_t1

0x0cc3,	// (0x00038f3f) list_single_graphic_2heading_pane_t2_ParamLimits

0x0cc3,	// (0x00038f3f) list_single_graphic_2heading_pane_t2

0x0cdf,	// (0x00038f5b) list_single_graphic_2heading_pane_t3_ParamLimits

0x0cdf,	// (0x00038f5b) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x00047a39) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x00047a39) list_single_graphic_2heading_pane_t

0xc0d5,	// (0x00044351) bg_popup_sub_pane_cp2

0xc0ff,	// (0x0004437b) grid_toobar_pane

0x2996,	// (0x0003ac12) cell_toolbar_pane_ParamLimits

0x2996,	// (0x0003ac12) cell_toolbar_pane

0xc13b,	// (0x000443b7) cell_toolbar_pane_g1_ParamLimits

0xc13b,	// (0x000443b7) cell_toolbar_pane_g1

0xc14f,	// (0x000443cb) cell_toolbar_pane_g2_ParamLimits

0xc14f,	// (0x000443cb) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x00047a47) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x00047a47) cell_toolbar_pane_g

0xc171,	// (0x000443ed) grid_highlight_pane_cp2_ParamLimits

0xc171,	// (0x000443ed) grid_highlight_pane_cp2

0xc18b,	// (0x00044407) toolbar_button_pane

0xc197,	// (0x00044413) toolbar_button_pane_g1

0xc19f,	// (0x0004441b) toolbar_button_pane_g2

0xc1a7,	// (0x00044423) toolbar_button_pane_g3

0xc1af,	// (0x0004442b) toolbar_button_pane_g4

0xc1b7,	// (0x00044433) toolbar_button_pane_g5

0xc1bf,	// (0x0004443b) toolbar_button_pane_g6

0xc1c7,	// (0x00044443) toolbar_button_pane_g7

0xc1cf,	// (0x0004444b) toolbar_button_pane_g8

0xc1d7,	// (0x00044453) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x00047a4c) toolbar_button_pane_g

0x29ce,	// (0x0003ac4a) list_single_2graphic_pane_g1_cp3_ParamLimits

0x29ce,	// (0x0003ac4a) list_single_2graphic_pane_g1_cp3

0x87fc,	// (0x00040a78) list_single_2graphic_pane_g2_cp3_ParamLimits

0x87fc,	// (0x00040a78) list_single_2graphic_pane_g2_cp3

0xbb85,	// (0x00043e01) list_single_2graphic_pane_g3_cp3

0x29eb,	// (0x0003ac67) list_single_2graphic_pane_g4_cp3_ParamLimits

0x29eb,	// (0x0003ac67) list_single_2graphic_pane_g4_cp3

0x29f7,	// (0x0003ac73) list_single_2graphic_pane_t1_cp3_ParamLimits

0x29f7,	// (0x0003ac73) list_single_2graphic_pane_t1_cp3

0xbb79,	// (0x00043df5) list_single_midp_graphic_pane_g2_ParamLimits

0xbb79,	// (0x00043df5) list_single_midp_graphic_pane_g2

0x0c73,	// (0x00038eef) aid_zoom_text_primary

0x0c7b,	// (0x00038ef7) aid_zoom_text_secondary

0xbef5,	// (0x00044171) status_small_pane_g7_ParamLimits

0xbef5,	// (0x00044171) status_small_pane_g7

0xbf18,	// (0x00044194) status_small_pane_t1_ParamLimits

0x79b9,	// (0x0003fc35) title_pane_g2

0x0003,

0xf554,	// (0x000477d0) title_pane_g

0x7c31,	// (0x0003fead) aid_size_cell_colour_1_pane_ParamLimits

0x7c31,	// (0x0003fead) aid_size_cell_colour_1_pane

0x7c45,	// (0x0003fec1) aid_size_cell_colour_2_pane_ParamLimits

0x7c45,	// (0x0003fec1) aid_size_cell_colour_2_pane

0x7c59,	// (0x0003fed5) aid_size_cell_colour_3_pane_ParamLimits

0x7c59,	// (0x0003fed5) aid_size_cell_colour_3_pane

0x7c6d,	// (0x0003fee9) aid_size_cell_colour_4_pane_ParamLimits

0x7c6d,	// (0x0003fee9) aid_size_cell_colour_4_pane

0x1bde,	// (0x00039e5a) title_pane_stacon_g1_ParamLimits

0x1bde,	// (0x00039e5a) title_pane_stacon_g1

0xc715,	// (0x00044991) popup_note_wait_window_g3_ParamLimits

0xc715,	// (0x00044991) popup_note_wait_window_g3

0xc78b,	// (0x00044a07) popup_note_wait_window_t5_ParamLimits

0xc78b,	// (0x00044a07) popup_note_wait_window_t5

0x8f39,	// (0x000411b5) main_feb_china_hwr_fs_writing_pane

0x81c0,	// (0x0004043c) popup_feb_china_hwr_fs_window_ParamLimits

0x81c0,	// (0x0004043c) popup_feb_china_hwr_fs_window

0x880d,	// (0x00040a89) aid_size_cell_hwr_fs_ParamLimits

0x880d,	// (0x00040a89) aid_size_cell_hwr_fs

0xc20b,	// (0x00044487) bg_popup_sub_pane_cp3_ParamLimits

0xc20b,	// (0x00044487) bg_popup_sub_pane_cp3

0x8822,	// (0x00040a9e) grid_hwr_fs_pane_ParamLimits

0x8822,	// (0x00040a9e) grid_hwr_fs_pane

0x2a54,	// (0x0003acd0) linegrid_hwr_fs_pane_ParamLimits

0x2a54,	// (0x0003acd0) linegrid_hwr_fs_pane

0x883a,	// (0x00040ab6) cell_hwr_fs_pane_ParamLimits

0x883a,	// (0x00040ab6) cell_hwr_fs_pane

0xc217,	// (0x00044493) linegrid_hwr_fs_pane_g1_ParamLimits

0xc217,	// (0x00044493) linegrid_hwr_fs_pane_g1

0x98c3,	// (0x00041b3f) linegrid_hwr_fs_pane_g2_ParamLimits

0x98c3,	// (0x00041b3f) linegrid_hwr_fs_pane_g2

0xc223,	// (0x0004449f) linegrid_hwr_fs_pane_g3_ParamLimits

0xc223,	// (0x0004449f) linegrid_hwr_fs_pane_g3

0x2a86,	// (0x0003ad02) linegrid_hwr_fs_pane_g4_ParamLimits

0x2a86,	// (0x0003ad02) linegrid_hwr_fs_pane_g4

0x2aa0,	// (0x0003ad1c) linegrid_hwr_fs_pane_g5_ParamLimits

0x2aa0,	// (0x0003ad1c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x00047a72) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x00047a72) linegrid_hwr_fs_pane_g

0xc22f,	// (0x000444ab) cell_hwr_fs_pane_g1_ParamLimits

0xc22f,	// (0x000444ab) cell_hwr_fs_pane_g1

0xc0a1,	// (0x0004431d) cell_hwr_fs_pane_g2_ParamLimits

0xc0a1,	// (0x0004431d) cell_hwr_fs_pane_g2

0x98d5,	// (0x00041b51) cell_hwr_fs_pane_g3_ParamLimits

0x98d5,	// (0x00041b51) cell_hwr_fs_pane_g3

0x98e2,	// (0x00041b5e) cell_hwr_fs_pane_g4_ParamLimits

0x98e2,	// (0x00041b5e) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x00047a7d) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x00047a7d) cell_hwr_fs_pane_g

0x8860,	// (0x00040adc) cell_hwr_fs_pane_t1

0x8f39,	// (0x000411b5) grid_highlight_pane_cp6

0x8f39,	// (0x000411b5) main_idle_act2_pane

0xb33c,	// (0x000435b8) aid_inside_area_popup_secondary

0x9ae1,	// (0x00041d5d) aid_inside_area_window_primary_ParamLimits

0x9ae1,	// (0x00041d5d) aid_inside_area_window_primary

0xd5aa,	// (0x00045826) ai2_news_ticker_pane

0xd5b2,	// (0x0004582e) aid_size_cell_ai1_link_ParamLimits

0xd5b2,	// (0x0004582e) aid_size_cell_ai1_link

0xd5cc,	// (0x00045848) popup_ai2_data_window_ParamLimits

0xd5cc,	// (0x00045848) popup_ai2_data_window

0xd5e0,	// (0x0004585c) popup_ai2_link_window_ParamLimits

0xd5e0,	// (0x0004585c) popup_ai2_link_window

0xc20b,	// (0x00044487) bg_popup_sub_pane_cp4_ParamLimits

0xc20b,	// (0x00044487) bg_popup_sub_pane_cp4

0xd5f4,	// (0x00045870) grid_ai2_link_pane_ParamLimits

0xd5f4,	// (0x00045870) grid_ai2_link_pane

0xd60b,	// (0x00045887) popup_ai2_link_window_g1_ParamLimits

0xd60b,	// (0x00045887) popup_ai2_link_window_g1

0xd631,	// (0x000458ad) popup_ai2_link_window_g2_ParamLimits

0xd631,	// (0x000458ad) popup_ai2_link_window_g2

0x0001,

0xf90b,	// (0x00047b87) popup_ai2_link_window_g_ParamLimits

0xf90b,	// (0x00047b87) popup_ai2_link_window_g

0xd640,	// (0x000458bc) ai2_mp_button_pane

0xd648,	// (0x000458c4) ai2_mp_volume_pane

0xc355,	// (0x000445d1) bg_popup_sub_pane_cp5_ParamLimits

0xc355,	// (0x000445d1) bg_popup_sub_pane_cp5

0xd650,	// (0x000458cc) heading_ai2_gene_pane_ParamLimits

0xd650,	// (0x000458cc) heading_ai2_gene_pane

0xd65c,	// (0x000458d8) list_ai2_gene_pane_ParamLimits

0xd65c,	// (0x000458d8) list_ai2_gene_pane

0xd6a4,	// (0x00045920) cell_ai2_link_pane_ParamLimits

0xd6a4,	// (0x00045920) cell_ai2_link_pane

0xd6ba,	// (0x00045936) cell_ai2_link_pane_g1

0x8f39,	// (0x000411b5) grid_highlight_pane_cp7

0x2e54,	// (0x0003b0d0) ai2_mp_volume_pane_g1

0xd78b,	// (0x00045a07) ai2_mp_volume_pane_g2

0xd700,	// (0x0004597c) list_ai2_gene_pane_t1

0xd793,	// (0x00045a0f) ai2_mp_volume_pane_g3

0x0002,

0xf924,	// (0x00047ba0) ai2_mp_volume_pane_g

0x2e5c,	// (0x0003b0d8) volume_small_pane_cp3

0xd79b,	// (0x00045a17) aid_size_cell_ai2_button

0xd7a3,	// (0x00045a1f) grid_ai2_button_pane

0xd7ac,	// (0x00045a28) cell_ai2_button_pane_ParamLimits

0xd7ac,	// (0x00045a28) cell_ai2_button_pane

0x8f2f,	// (0x000411ab) cell_ai2_button_pane_g1

0x8f39,	// (0x000411b5) grid_highlight_pane_cp8

0xd74b,	// (0x000459c7) ai2_gene_pane_t1_ParamLimits

0xd74b,	// (0x000459c7) ai2_gene_pane_t1

0x814e,	// (0x000403ca) aid_height_parent_landscape

0x9c2d,	// (0x00041ea9) aid_height_set_list

0xbfa7,	// (0x00044223) aid_size_parent

0xd415,	// (0x00045691) aid_size_cell_graphic_pane_ParamLimits

0xd66c,	// (0x000458e8) popup_ai2_data_window_g1_ParamLimits

0xd66c,	// (0x000458e8) popup_ai2_data_window_g1

0xd678,	// (0x000458f4) ai2_news_ticker_pane_g1

0xd680,	// (0x000458fc) ai2_news_ticker_pane_g2

0x0001,

0xf910,	// (0x00047b8c) ai2_news_ticker_pane_g

0xd688,	// (0x00045904) ai2_news_ticker_pane_t1

0xd696,	// (0x00045912) ai2_news_ticker_pane_t2

0x0001,

0xf915,	// (0x00047b91) ai2_news_ticker_pane_t

0xd6c3,	// (0x0004593f) heading_ai2_gene_pane_g1

0xd6cb,	// (0x00045947) heading_ai2_gene_pane_t1_ParamLimits

0xd6cb,	// (0x00045947) heading_ai2_gene_pane_t1

0xd6e0,	// (0x0004595c) list_highlight_pane_cp6

0xd6e8,	// (0x00045964) ai2_gene_pane_ParamLimits

0xd6e8,	// (0x00045964) ai2_gene_pane

0xd70e,	// (0x0004598a) list_ai2_gene_pane_t2

0x0001,

0xf91a,	// (0x00047b96) list_ai2_gene_pane_t

0xd71c,	// (0x00045998) list_highlight_pane_cp8_ParamLimits

0xd71c,	// (0x00045998) list_highlight_pane_cp8

0xd72d,	// (0x000459a9) ai2_gene_pane_g1_ParamLimits

0xd72d,	// (0x000459a9) ai2_gene_pane_g1

0xd73f,	// (0x000459bb) ai2_gene_pane_g2_ParamLimits

0xd73f,	// (0x000459bb) ai2_gene_pane_g2

0x0001,

0xf91f,	// (0x00047b9b) ai2_gene_pane_g_ParamLimits

0xf91f,	// (0x00047b9b) ai2_gene_pane_g

0x9ab0,	// (0x00041d2c) scroll_pane_cp12

0x810d,	// (0x00040389) control_pane_t3_ParamLimits

0x810d,	// (0x00040389) control_pane_t3

0xbf09,	// (0x00044185) status_small_pane_g8_ParamLimits

0xbf09,	// (0x00044185) status_small_pane_g8

0x8253,	// (0x000404cf) popup_find_window_ParamLimits

0x84d4,	// (0x00040750) popup_note_image_window_ParamLimits

0x0cf7,	// (0x00038f73) list_double2_graphic_pane_vc_g1_ParamLimits

0x0cf7,	// (0x00038f73) list_double2_graphic_pane_vc_g1

0x1a69,	// (0x00039ce5) list_double2_graphic_pane_vc_g2_ParamLimits

0x1a69,	// (0x00039ce5) list_double2_graphic_pane_vc_g2

0x1a75,	// (0x00039cf1) list_double2_graphic_pane_vc_g3_ParamLimits

0x1a75,	// (0x00039cf1) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x00047a40) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x00047a40) list_double2_graphic_pane_vc_g

0x0d03,	// (0x00038f7f) list_double2_graphic_pane_vc_t1_ParamLimits

0x0d03,	// (0x00038f7f) list_double2_graphic_pane_vc_t1

0x1a69,	// (0x00039ce5) list_single_heading_pane_vc_g1_ParamLimits

0x1a69,	// (0x00039ce5) list_single_heading_pane_vc_g1

0x1a75,	// (0x00039cf1) list_single_heading_pane_vc_g2_ParamLimits

0x1a75,	// (0x00039cf1) list_single_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x00047854) list_single_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x00047854) list_single_heading_pane_vc_g

0x0d19,	// (0x00038f95) list_single_heading_pane_vc_t1_ParamLimits

0x0d19,	// (0x00038f95) list_single_heading_pane_vc_t1

0x0d2f,	// (0x00038fab) list_single_heading_pane_vc_t2_ParamLimits

0x0d2f,	// (0x00038fab) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x00047a61) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x00047a61) list_single_heading_pane_vc_t

0x5793,	// (0x0003da0f) list_setting_number_pane_vc_g1_ParamLimits

0x5793,	// (0x0003da0f) list_setting_number_pane_vc_g1

0x579f,	// (0x0003da1b) list_setting_number_pane_vc_g2_ParamLimits

0x579f,	// (0x0003da1b) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x00047a66) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x00047a66) list_setting_number_pane_vc_g

0x0d4b,	// (0x00038fc7) list_setting_number_pane_vc_t1_ParamLimits

0x0d4b,	// (0x00038fc7) list_setting_number_pane_vc_t1

0x0d5f,	// (0x00038fdb) list_setting_number_pane_vc_t2_ParamLimits

0x0d5f,	// (0x00038fdb) list_setting_number_pane_vc_t2

0x0d79,	// (0x00038ff5) list_setting_number_pane_vc_t3_ParamLimits

0x0d79,	// (0x00038ff5) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x00047a6b) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x00047a6b) list_setting_number_pane_vc_t

0x0da1,	// (0x0003901d) set_value_pane_vc_ParamLimits

0x0da1,	// (0x0003901d) set_value_pane_vc

0xd350,	// (0x000455cc) list_double2_graphic_pane_vc_ParamLimits

0xd350,	// (0x000455cc) list_double2_graphic_pane_vc

0x2cc4,	// (0x0003af40) list_double2_large_graphic_pane_vc_ParamLimits

0x2cc4,	// (0x0003af40) list_double2_large_graphic_pane_vc

0xd350,	// (0x000455cc) list_double2_pane_vc_ParamLimits

0xd350,	// (0x000455cc) list_double2_pane_vc

0xd350,	// (0x000455cc) list_double_graphic_heading_pane_vc_ParamLimits

0xd350,	// (0x000455cc) list_double_graphic_heading_pane_vc

0xd350,	// (0x000455cc) list_double_graphic_pane_vc_ParamLimits

0xd350,	// (0x000455cc) list_double_graphic_pane_vc

0xd350,	// (0x000455cc) list_double_heading_pane_vc_ParamLimits

0xd350,	// (0x000455cc) list_double_heading_pane_vc

0x2cc4,	// (0x0003af40) list_double_large_graphic_pane_vc_ParamLimits

0x2cc4,	// (0x0003af40) list_double_large_graphic_pane_vc

0xd350,	// (0x000455cc) list_double_number_pane_vc_ParamLimits

0xd350,	// (0x000455cc) list_double_number_pane_vc

0xd350,	// (0x000455cc) list_double_pane_vc_ParamLimits

0xd350,	// (0x000455cc) list_double_pane_vc

0xd350,	// (0x000455cc) list_double_time_pane_vc_ParamLimits

0xd350,	// (0x000455cc) list_double_time_pane_vc

0xd350,	// (0x000455cc) list_setting_number_pane_vc_ParamLimits

0xd350,	// (0x000455cc) list_setting_number_pane_vc

0xd350,	// (0x000455cc) list_setting_pane_vc_ParamLimits

0xd350,	// (0x000455cc) list_setting_pane_vc

0xd350,	// (0x000455cc) list_single_graphic_heading_pane_vc_ParamLimits

0xd350,	// (0x000455cc) list_single_graphic_heading_pane_vc

0xd350,	// (0x000455cc) list_single_heading_pane_vc_ParamLimits

0xd350,	// (0x000455cc) list_single_heading_pane_vc

0xd350,	// (0x000455cc) list_single_number_heading_pane_vc_ParamLimits

0xd350,	// (0x000455cc) list_single_number_heading_pane_vc

0x0cf7,	// (0x00038f73) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0cf7,	// (0x00038f73) list_double_graphic_heading_pane_vc_g1

0x1a69,	// (0x00039ce5) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x1a69,	// (0x00039ce5) list_double_graphic_heading_pane_vc_g2

0x1a75,	// (0x00039cf1) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1a75,	// (0x00039cf1) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c4,	// (0x00047a40) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c4,	// (0x00047a40) list_double_graphic_heading_pane_vc_g

0x0e4a,	// (0x000390c6) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0e4a,	// (0x000390c6) list_double_graphic_heading_pane_vc_t1

0x0e66,	// (0x000390e2) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0e66,	// (0x000390e2) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf92b,	// (0x00047ba7) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf92b,	// (0x00047ba7) list_double_graphic_heading_pane_vc_t

0x5793,	// (0x0003da0f) list_setting_pane_vc_g1_ParamLimits

0x5793,	// (0x0003da0f) list_setting_pane_vc_g1

0x579f,	// (0x0003da1b) list_setting_pane_vc_g2_ParamLimits

0x579f,	// (0x0003da1b) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x00047a66) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x00047a66) list_setting_pane_vc_g

0x0e7e,	// (0x000390fa) list_setting_pane_vc_t1_ParamLimits

0x0e7e,	// (0x000390fa) list_setting_pane_vc_t1

0x0e98,	// (0x00039114) list_setting_pane_vc_t2_ParamLimits

0x0e98,	// (0x00039114) list_setting_pane_vc_t2

0x0001,

0xf96e,	// (0x00047bea) list_setting_pane_vc_t_ParamLimits

0xf96e,	// (0x00047bea) list_setting_pane_vc_t

0x0da1,	// (0x0003901d) set_value_pane_cp_vc_ParamLimits

0x0da1,	// (0x0003901d) set_value_pane_cp_vc

0x1a69,	// (0x00039ce5) list_single_number_heading_pane_vc_g1_ParamLimits

0x1a69,	// (0x00039ce5) list_single_number_heading_pane_vc_g1

0x1a75,	// (0x00039cf1) list_single_number_heading_pane_vc_g2_ParamLimits

0x1a75,	// (0x00039cf1) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x00047854) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x00047854) list_single_number_heading_pane_vc_g

0x0d19,	// (0x00038f95) list_single_number_heading_pane_vc_t1_ParamLimits

0x0d19,	// (0x00038f95) list_single_number_heading_pane_vc_t1

0x0eb0,	// (0x0003912c) list_single_number_heading_pane_vc_t2_ParamLimits

0x0eb0,	// (0x0003912c) list_single_number_heading_pane_vc_t2

0x05b2,	// (0x0003882e) list_single_number_heading_pane_vc_t3_ParamLimits

0x05b2,	// (0x0003882e) list_single_number_heading_pane_vc_t3

0x0002,

0xf973,	// (0x00047bef) list_single_number_heading_pane_vc_t_ParamLimits

0xf973,	// (0x00047bef) list_single_number_heading_pane_vc_t

0x0cf7,	// (0x00038f73) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0cf7,	// (0x00038f73) list_single_graphic_heading_pane_vc_g1

0x1a69,	// (0x00039ce5) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x1a69,	// (0x00039ce5) list_single_graphic_heading_pane_vc_g4

0x1a75,	// (0x00039cf1) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1a75,	// (0x00039cf1) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c4,	// (0x00047a40) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c4,	// (0x00047a40) list_single_graphic_heading_pane_vc_g

0x0d19,	// (0x00038f95) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0d19,	// (0x00038f95) list_single_graphic_heading_pane_vc_t1

0x0ec4,	// (0x00039140) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0ec4,	// (0x00039140) list_single_graphic_heading_pane_vc_t2

0x0001,

0xf97a,	// (0x00047bf6) list_single_graphic_heading_pane_vc_t_ParamLimits

0xf97a,	// (0x00047bf6) list_single_graphic_heading_pane_vc_t

0x1a69,	// (0x00039ce5) list_double2_pane_vc_g1_ParamLimits

0x1a69,	// (0x00039ce5) list_double2_pane_vc_g1

0x1a75,	// (0x00039cf1) list_double2_pane_vc_g2_ParamLimits

0x1a75,	// (0x00039cf1) list_double2_pane_vc_g2

0x0001,

0xf5d8,	// (0x00047854) list_double2_pane_vc_g_ParamLimits

0xf5d8,	// (0x00047854) list_double2_pane_vc_g

0x0e34,	// (0x000390b0) list_double2_pane_vc_t1_ParamLimits

0x0e34,	// (0x000390b0) list_double2_pane_vc_t1

0x2ead,	// (0x0003b129) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2ead,	// (0x0003b129) list_double2_large_graphic_pane_vc_g1

0x2eb9,	// (0x0003b135) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2eb9,	// (0x0003b135) list_double2_large_graphic_pane_vc_g2

0x2ec5,	// (0x0003b141) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2ec5,	// (0x0003b141) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5f0,	// (0x0004786c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5f0,	// (0x0004786c) list_double2_large_graphic_pane_vc_g

0x0ed8,	// (0x00039154) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0ed8,	// (0x00039154) list_double2_large_graphic_pane_vc_t1

0x0eee,	// (0x0003916a) list_double_time_pane_vc_g1_ParamLimits

0x0eee,	// (0x0003916a) list_double_time_pane_vc_g1

0x0efa,	// (0x00039176) list_double_time_pane_vc_g2_ParamLimits

0x0efa,	// (0x00039176) list_double_time_pane_vc_g2

0x0001,

0xf97f,	// (0x00047bfb) list_double_time_pane_vc_g_ParamLimits

0xf97f,	// (0x00047bfb) list_double_time_pane_vc_g

0x0f06,	// (0x00039182) list_double_time_pane_vc_t1_ParamLimits

0x0f06,	// (0x00039182) list_double_time_pane_vc_t1

0x0f2a,	// (0x000391a6) list_double_time_pane_vc_t2_ParamLimits

0x0f2a,	// (0x000391a6) list_double_time_pane_vc_t2

0x0f74,	// (0x000391f0) list_double_time_pane_vc_t3_ParamLimits

0x0f74,	// (0x000391f0) list_double_time_pane_vc_t3

0x0f86,	// (0x00039202) list_double_time_pane_vc_t4_ParamLimits

0x0f86,	// (0x00039202) list_double_time_pane_vc_t4

0x0003,

0xf984,	// (0x00047c00) list_double_time_pane_vc_t_ParamLimits

0xf984,	// (0x00047c00) list_double_time_pane_vc_t

0x1a69,	// (0x00039ce5) list_double_pane_vc_g1_ParamLimits

0x1a69,	// (0x00039ce5) list_double_pane_vc_g1

0x1a75,	// (0x00039cf1) list_double_pane_vc_g2_ParamLimits

0x1a75,	// (0x00039cf1) list_double_pane_vc_g2

0x0001,

0xf5d8,	// (0x00047854) list_double_pane_vc_g_ParamLimits

0xf5d8,	// (0x00047854) list_double_pane_vc_g

0x0f9a,	// (0x00039216) list_double_pane_vc_t1_ParamLimits

0x0f9a,	// (0x00039216) list_double_pane_vc_t1

0x0fae,	// (0x0003922a) list_double_pane_vc_t2_ParamLimits

0x0fae,	// (0x0003922a) list_double_pane_vc_t2

0x0001,

0xf98d,	// (0x00047c09) list_double_pane_vc_t_ParamLimits

0xf98d,	// (0x00047c09) list_double_pane_vc_t

0x1a69,	// (0x00039ce5) list_double_number_pane_vc_g1_ParamLimits

0x1a69,	// (0x00039ce5) list_double_number_pane_vc_g1

0x1a75,	// (0x00039cf1) list_double_number_pane_vc_g2_ParamLimits

0x1a75,	// (0x00039cf1) list_double_number_pane_vc_g2

0x0001,

0xf5d8,	// (0x00047854) list_double_number_pane_vc_g_ParamLimits

0xf5d8,	// (0x00047854) list_double_number_pane_vc_g

0x0fc6,	// (0x00039242) list_double_number_pane_vc_t1_ParamLimits

0x0fc6,	// (0x00039242) list_double_number_pane_vc_t1

0x0fd8,	// (0x00039254) list_double_number_pane_vc_t2_ParamLimits

0x0fd8,	// (0x00039254) list_double_number_pane_vc_t2

0x0fae,	// (0x0003922a) list_double_number_pane_vc_t3_ParamLimits

0x0fae,	// (0x0003922a) list_double_number_pane_vc_t3

0x0002,

0xf992,	// (0x00047c0e) list_double_number_pane_vc_t_ParamLimits

0xf992,	// (0x00047c0e) list_double_number_pane_vc_t

0x2ed1,	// (0x0003b14d) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2ed1,	// (0x0003b14d) list_double_large_graphic_pane_vc_g1

0x2edd,	// (0x0003b159) list_double_large_graphic_pane_vc_g2_ParamLimits

0x2edd,	// (0x0003b159) list_double_large_graphic_pane_vc_g2

0x2ec5,	// (0x0003b141) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2ec5,	// (0x0003b141) list_double_large_graphic_pane_vc_g3

0x0fec,	// (0x00039268) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0fec,	// (0x00039268) list_double_large_graphic_pane_vc_g4

0x0003,

0xf999,	// (0x00047c15) list_double_large_graphic_pane_vc_g_ParamLimits

0xf999,	// (0x00047c15) list_double_large_graphic_pane_vc_g

0x0ff8,	// (0x00039274) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0ff8,	// (0x00039274) list_double_large_graphic_pane_vc_t1

0x100c,	// (0x00039288) list_double_large_graphic_pane_vc_t2_ParamLimits

0x100c,	// (0x00039288) list_double_large_graphic_pane_vc_t2

0x0001,

0xf9a2,	// (0x00047c1e) list_double_large_graphic_pane_vc_t_ParamLimits

0xf9a2,	// (0x00047c1e) list_double_large_graphic_pane_vc_t

0x1a69,	// (0x00039ce5) list_double_heading_pane_vc_g1_ParamLimits

0x1a69,	// (0x00039ce5) list_double_heading_pane_vc_g1

0x1a75,	// (0x00039cf1) list_double_heading_pane_vc_g2_ParamLimits

0x1a75,	// (0x00039cf1) list_double_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x00047854) list_double_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x00047854) list_double_heading_pane_vc_g

0x1025,	// (0x000392a1) list_double_heading_pane_vc_t1_ParamLimits

0x1025,	// (0x000392a1) list_double_heading_pane_vc_t1

0x0d19,	// (0x00038f95) list_double_heading_pane_vc_t2_ParamLimits

0x0d19,	// (0x00038f95) list_double_heading_pane_vc_t2

0x0001,

0xf9a7,	// (0x00047c23) list_double_heading_pane_vc_t_ParamLimits

0xf9a7,	// (0x00047c23) list_double_heading_pane_vc_t

0x0cf7,	// (0x00038f73) list_double_graphic_pane_vc_g1_ParamLimits

0x0cf7,	// (0x00038f73) list_double_graphic_pane_vc_g1

0x1039,	// (0x000392b5) list_double_graphic_pane_vc_g2_ParamLimits

0x1039,	// (0x000392b5) list_double_graphic_pane_vc_g2

0xd7ca,	// (0x00045a46) list_double_graphic_pane_vc_g3_ParamLimits

0xd7ca,	// (0x00045a46) list_double_graphic_pane_vc_g3

0x0002,

0xf9ac,	// (0x00047c28) list_double_graphic_pane_vc_g_ParamLimits

0xf9ac,	// (0x00047c28) list_double_graphic_pane_vc_g

0x1048,	// (0x000392c4) list_double_graphic_pane_vc_t1_ParamLimits

0x1048,	// (0x000392c4) list_double_graphic_pane_vc_t1

0x105c,	// (0x000392d8) list_double_graphic_pane_vc_t2_ParamLimits

0x105c,	// (0x000392d8) list_double_graphic_pane_vc_t2

0x0001,

0xf9b3,	// (0x00047c2f) list_double_graphic_pane_vc_t_ParamLimits

0xf9b3,	// (0x00047c2f) list_double_graphic_pane_vc_t

0x138b,	// (0x00039607) aid_size_cell_fastswap

0x77a0,	// (0x0003fa1c) aid_size_cell_touch_ParamLimits

0x77a0,	// (0x0003fa1c) aid_size_cell_touch

0x15ee,	// (0x0003986a) popup_fast_swap_wide_window_ParamLimits

0x15ee,	// (0x0003986a) popup_fast_swap_wide_window

0x7950,	// (0x0003fbcc) touch_pane_ParamLimits

0x7950,	// (0x0003fbcc) touch_pane

0xb221,	// (0x0004349d) button_value_adjust_pane_cp2

0x09b3,	// (0x00038c2f) button_value_adjust_pane_cp4

0x09d5,	// (0x00038c51) form_field_data_pane_cp2

0x748a,	// (0x0003f706) form_field_data_wide_pane_cp2

0xb642,	// (0x000438be) bg_scroll_pane_ParamLimits

0x1dd3,	// (0x0003a04f) scroll_handle_pane_ParamLimits

0x1de7,	// (0x0003a063) scroll_sc2_down_pane_ParamLimits

0x1de7,	// (0x0003a063) scroll_sc2_down_pane

0xb673,	// (0x000438ef) scroll_sc2_up_pane_ParamLimits

0xb673,	// (0x000438ef) scroll_sc2_up_pane

0x9f9c,	// (0x00042218) grid_wheel_folder_pane_g1_ParamLimits

0x9f9c,	// (0x00042218) grid_wheel_folder_pane_g1

0x2084,	// (0x0003a300) clock_nsta_pane_cp2_ParamLimits

0x2084,	// (0x0003a300) clock_nsta_pane_cp2

0xb38e,	// (0x0004360a) listscroll_midp_pane_ParamLimits

0x7f1b,	// (0x00040197) midp_canvas_pane

0xbf5d,	// (0x000441d9) nsta_clock_indic_pane

0xbf8d,	// (0x00044209) listscroll_form_pane_vc

0xbf95,	// (0x00044211) listscroll_set_pane_vc_ParamLimits

0xbf95,	// (0x00044211) listscroll_set_pane_vc

0x95ce,	// (0x0004184a) clock_nsta_pane

0x95f8,	// (0x00041874) indicator_nsta_pane

0xc0d5,	// (0x00044351) bg_popup_sub_pane_cp2_ParamLimits

0xc0e9,	// (0x00044365) find_pane_cp2_ParamLimits

0xc0e9,	// (0x00044365) find_pane_cp2

0xc0ff,	// (0x0004437b) grid_toobar_pane_ParamLimits

0xc1df,	// (0x0004445b) list_form_gen_pane_vc_ParamLimits

0xc1df,	// (0x0004445b) list_form_gen_pane_vc

0xc1f5,	// (0x00044471) scroll_pane_cp8_vc_ParamLimits

0xc1f5,	// (0x00044471) scroll_pane_cp8_vc

0xc245,	// (0x000444c1) data_form_wide_pane_vc_ParamLimits

0xc245,	// (0x000444c1) data_form_wide_pane_vc

0xc251,	// (0x000444cd) form_field_data_wide_pane_vc_g1

0xc259,	// (0x000444d5) form_field_data_wide_pane_vc_t1_ParamLimits

0xc259,	// (0x000444d5) form_field_data_wide_pane_vc_t1

0xb235,	// (0x000434b1) input_focus_pane_cp6_vc_ParamLimits

0xb235,	// (0x000434b1) input_focus_pane_cp6_vc

0x997e,	// (0x00041bfa) list_midp_pane_ParamLimits

0xd11b,	// (0x00045397) scroll_pane_cp16_ParamLimits

0xd11b,	// (0x00045397) scroll_pane_cp16

0xc4ef,	// (0x0004476b) button_value_adjust_pane_ParamLimits

0xc4ef,	// (0x0004476b) button_value_adjust_pane

0x9c3e,	// (0x00041eba) button_value_adjust_pane_cp6_ParamLimits

0x9c3e,	// (0x00041eba) button_value_adjust_pane_cp6

0x9d54,	// (0x00041fd0) settings_code_pane_cp_ParamLimits

0x9d54,	// (0x00041fd0) settings_code_pane_cp

0x8f2f,	// (0x000411ab) cell_touch_pane_g1

0x8f2f,	// (0x000411ab) cell_touch_pane_g2

0x0001,

0xf709,	// (0x00047985) cell_touch_pane_g

0x9e7b,	// (0x000420f7) cell_touch_pane_cp_ParamLimits

0x9e7b,	// (0x000420f7) cell_touch_pane_cp

0x9e97,	// (0x00042113) cell_touch_pane_ParamLimits

0x9e97,	// (0x00042113) cell_touch_pane

0x8f2f,	// (0x000411ab) scroll_sc2_down_pane_g1

0x8f2f,	// (0x000411ab) scroll_sc2_up_pane_g1

0x8f39,	// (0x000411b5) bg_set_opt_pane_cp4_vc

0xd7be,	// (0x00045a3a) list_set_graphic_pane_vc_g1_ParamLimits

0xd7be,	// (0x00045a3a) list_set_graphic_pane_vc_g1

0xd7ca,	// (0x00045a46) list_set_graphic_pane_vc_g2_ParamLimits

0xd7ca,	// (0x00045a46) list_set_graphic_pane_vc_g2

0x0001,

0xf930,	// (0x00047bac) list_set_graphic_pane_vc_g_ParamLimits

0xf930,	// (0x00047bac) list_set_graphic_pane_vc_g

0xd7d6,	// (0x00045a52) text_primary_small_cp13_vc_ParamLimits

0xd7d6,	// (0x00045a52) text_primary_small_cp13_vc

0xd108,	// (0x00045384) list_set_graphic_pane_vc_ParamLimits

0xd108,	// (0x00045384) list_set_graphic_pane_vc

0x8f39,	// (0x000411b5) input_focus_pane_cp2_vc

0x8f2f,	// (0x000411ab) setting_code_pane_vc_g1

0x8fbc,	// (0x00041238) setting_code_pane_vc_t1

0xd7ee,	// (0x00045a6a) set_text_pane_vc_t1_ParamLimits

0xd7ee,	// (0x00045a6a) set_text_pane_vc_t1

0x8f39,	// (0x000411b5) input_focus_pane_cp1_vc

0xd80b,	// (0x00045a87) list_set_text_pane_vc

0x8f2f,	// (0x000411ab) setting_text_pane_vc_g1

0x8f39,	// (0x000411b5) bg_set_opt_pane_cp2_vc

0x8fb3,	// (0x0004122f) setting_slider_graphic_pane_vc_g1

0xd815,	// (0x00045a91) setting_slider_graphic_pane_vc_t1

0xd825,	// (0x00045aa1) setting_slider_graphic_pane_vc_t2

0x0001,

0xf935,	// (0x00047bb1) setting_slider_graphic_pane_vc_t

0xd835,	// (0x00045ab1) slider_set_pane_cp_vc

0xd83d,	// (0x00045ab9) slider_set_pane_vc_g1

0xd846,	// (0x00045ac2) slider_set_pane_vc_g2

0x0006,

0xf93a,	// (0x00047bb6) slider_set_pane_vc_g

0xb284,	// (0x00043500) set_opt_bg_pane_g1_copy1

0xb28c,	// (0x00043508) set_opt_bg_pane_g2_copy1

0xd872,	// (0x00045aee) set_opt_bg_pane_g3_copy1

0xb29c,	// (0x00043518) set_opt_bg_pane_g4_copy1

0xb2a4,	// (0x00043520) set_opt_bg_pane_g5_copy1

0xb2ac,	// (0x00043528) set_opt_bg_pane_g6_copy1

0xd87a,	// (0x00045af6) set_opt_bg_pane_g7_copy1

0xd884,	// (0x00045b00) set_opt_bg_pane_g8_copy1

0xd88c,	// (0x00045b08) set_opt_bg_pane_g9_copy1

0x8f39,	// (0x000411b5) bg_set_opt_pane_cp_vc

0xd894,	// (0x00045b10) setting_slider_pane_vc_t1

0xd8a3,	// (0x00045b1f) setting_slider_pane_vc_t2

0xd8b3,	// (0x00045b2f) setting_slider_pane_vc_t3

0x0002,

0xf949,	// (0x00047bc5) setting_slider_pane_vc_t

0xd8c3,	// (0x00045b3f) slider_set_pane_vc

0x2ac4,	// (0x0003ad40) volume_set_pane_vc_g1

0x2e65,	// (0x0003b0e1) volume_set_pane_vc_g2

0x2e6e,	// (0x0003b0ea) volume_set_pane_vc_g3

0x2e77,	// (0x0003b0f3) volume_set_pane_vc_g4

0x2e80,	// (0x0003b0fc) volume_set_pane_vc_g5

0x2e89,	// (0x0003b105) volume_set_pane_vc_g6

0x2af1,	// (0x0003ad6d) volume_set_pane_vc_g7

0x2e92,	// (0x0003b10e) volume_set_pane_vc_g8

0x2e9b,	// (0x0003b117) volume_set_pane_vc_g9

0x2ea4,	// (0x0003b120) volume_set_pane_vc_g10

0x0009,

0xf950,	// (0x00047bcc) volume_set_pane_vc_g

0xd8cb,	// (0x00045b47) volume_set_pane_vc

0xd8d3,	// (0x00045b4f) button_value_adjust_pane_cp1_vc

0xd8dd,	// (0x00045b59) list_highlight_pane_cp2_vc

0xd8e6,	// (0x00045b62) list_set_pane_vc_ParamLimits

0xd8e6,	// (0x00045b62) list_set_pane_vc

0xd944,	// (0x00045bc0) main_pane_set_vc_t1_ParamLimits

0xd944,	// (0x00045bc0) main_pane_set_vc_t1

0xd959,	// (0x00045bd5) main_pane_set_vc_t2_ParamLimits

0xd959,	// (0x00045bd5) main_pane_set_vc_t2

0xd96b,	// (0x00045be7) main_pane_set_vc_t3_ParamLimits

0xd96b,	// (0x00045be7) main_pane_set_vc_t3

0xd97d,	// (0x00045bf9) main_pane_set_vc_t4_ParamLimits

0xd97d,	// (0x00045bf9) main_pane_set_vc_t4

0x0003,

0xf965,	// (0x00047be1) main_pane_set_vc_t_ParamLimits

0xf965,	// (0x00047be1) main_pane_set_vc_t

0xd98f,	// (0x00045c0b) setting_code_pane_vc_ParamLimits

0xd98f,	// (0x00045c0b) setting_code_pane_vc

0xd99e,	// (0x00045c1a) setting_slider_graphic_pane_vc

0xd99e,	// (0x00045c1a) setting_slider_pane_vc

0xd99e,	// (0x00045c1a) setting_text_pane_vc

0xd99e,	// (0x00045c1a) setting_volume_pane_vc

0xd9a6,	// (0x00045c22) scroll_pane_cp121_vc

0xb20f,	// (0x0004348b) set_content_pane_vc

0xd9ae,	// (0x00045c2a) button_value_adjust_pane_g1

0xd9b7,	// (0x00045c33) button_value_adjust_pane_g2

0x0001,

0xf9b8,	// (0x00047c34) button_value_adjust_pane_g

0xd9c0,	// (0x00045c3c) form_field_slider_wide_pane_vc_t1_ParamLimits

0xd9c0,	// (0x00045c3c) form_field_slider_wide_pane_vc_t1

0xd9d4,	// (0x00045c50) form_field_slider_wide_pane_vc_t2_ParamLimits

0xd9d4,	// (0x00045c50) form_field_slider_wide_pane_vc_t2

0x0002,

0xf9bd,	// (0x00047c39) form_field_slider_wide_pane_vc_t_ParamLimits

0xf9bd,	// (0x00047c39) form_field_slider_wide_pane_vc_t

0x8f87,	// (0x00041203) input_focus_pane_cp10_vc_ParamLimits

0x8f87,	// (0x00041203) input_focus_pane_cp10_vc

0xda00,	// (0x00045c7c) slider_cont_pane_cp1_vc_ParamLimits

0xda00,	// (0x00045c7c) slider_cont_pane_cp1_vc

0xda10,	// (0x00045c8c) slider_form_pane_g1_cp2

0xd846,	// (0x00045ac2) slider_form_pane_g2_cp2

0xda3d,	// (0x00045cb9) form_field_slider_pane_vc_t3

0xda4b,	// (0x00045cc7) form_field_slider_pane_vc_t4

0xda59,	// (0x00045cd5) slider_form_pane_vc_ParamLimits

0xda59,	// (0x00045cd5) slider_form_pane_vc

0xda66,	// (0x00045ce2) form_field_slider_pane_vc_t1_ParamLimits

0xda66,	// (0x00045ce2) form_field_slider_pane_vc_t1

0xd9d4,	// (0x00045c50) form_field_slider_pane_vc_t2_ParamLimits

0xd9d4,	// (0x00045c50) form_field_slider_pane_vc_t2

0x0001,

0xf9cf,	// (0x00047c4b) form_field_slider_pane_vc_t_ParamLimits

0xf9cf,	// (0x00047c4b) form_field_slider_pane_vc_t

0x8f87,	// (0x00041203) input_focus_pane_cp9_vc_ParamLimits

0x8f87,	// (0x00041203) input_focus_pane_cp9_vc

0xda82,	// (0x00045cfe) slider_cont_pane_vc_ParamLimits

0xda82,	// (0x00045cfe) slider_cont_pane_vc

0xda94,	// (0x00045d10) list_form_graphic_pane_cp_vc_ParamLimits

0xda94,	// (0x00045d10) list_form_graphic_pane_cp_vc

0xc251,	// (0x000444cd) form_field_popup_wide_pane_vc_g1

0xdaa9,	// (0x00045d25) form_field_popup_wide_pane_vc_t1_ParamLimits

0xdaa9,	// (0x00045d25) form_field_popup_wide_pane_vc_t1

0xb235,	// (0x000434b1) input_focus_pane_cp8_vc_ParamLimits

0xb235,	// (0x000434b1) input_focus_pane_cp8_vc

0xdaee,	// (0x00045d6a) list_form_wide_pane_vc_ParamLimits

0xdaee,	// (0x00045d6a) list_form_wide_pane_vc

0xdafa,	// (0x00045d76) list_form_graphic_pane_vc_g1

0xdb02,	// (0x00045d7e) list_form_graphic_pane_vc_t1_ParamLimits

0xdb02,	// (0x00045d7e) list_form_graphic_pane_vc_t1

0x8fa5,	// (0x00041221) list_highlight_pane_cp5_vc_ParamLimits

0x8fa5,	// (0x00041221) list_highlight_pane_cp5_vc

0xdb1e,	// (0x00045d9a) list_form_graphic_pane_vc_ParamLimits

0xdb1e,	// (0x00045d9a) list_form_graphic_pane_vc

0xc251,	// (0x000444cd) form_field_popup_pane_vc_g1

0xdb34,	// (0x00045db0) form_field_popup_pane_vc_t1_ParamLimits

0xdb34,	// (0x00045db0) form_field_popup_pane_vc_t1

0xb235,	// (0x000434b1) input_focus_pane_cp7_vc_ParamLimits

0xb235,	// (0x000434b1) input_focus_pane_cp7_vc

0xdb4b,	// (0x00045dc7) list_form_pane_vc_ParamLimits

0xdb4b,	// (0x00045dc7) list_form_pane_vc

0xdb57,	// (0x00045dd3) data_form_pane_vc_t1_ParamLimits

0xdb57,	// (0x00045dd3) data_form_pane_vc_t1

0xb284,	// (0x00043500) input_focus_pane_vc_g1

0xb28c,	// (0x00043508) input_focus_pane_vc_g2

0xb294,	// (0x00043510) input_focus_pane_vc_g3

0xb29c,	// (0x00043518) input_focus_pane_vc_g4

0xb2a4,	// (0x00043520) input_focus_pane_vc_g5

0xb2ac,	// (0x00043528) input_focus_pane_vc_g6

0xb2b4,	// (0x00043530) input_focus_pane_vc_g7

0xb2bc,	// (0x00043538) input_focus_pane_vc_g8

0xb2c4,	// (0x00043540) input_focus_pane_vc_g9

0x8f2f,	// (0x000411ab) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x0004790e) input_focus_pane_vc_g

0xc245,	// (0x000444c1) data_form_pane_vc_ParamLimits

0xc245,	// (0x000444c1) data_form_pane_vc

0xc251,	// (0x000444cd) form_field_data_pane_vc_g1

0xdb72,	// (0x00045dee) form_field_data_pane_vc_t1_ParamLimits

0xdb72,	// (0x00045dee) form_field_data_pane_vc_t1

0xb235,	// (0x000434b1) input_focus_pane_vc_ParamLimits

0xb235,	// (0x000434b1) input_focus_pane_vc

0xdb8c,	// (0x00045e08) button_value_adjust_pane_cp3_vc

0xdb94,	// (0x00045e10) button_value_adjust_pane_cp5_vc

0xdb9c,	// (0x00045e18) form_field_data_pane_vc_ParamLimits

0xdb9c,	// (0x00045e18) form_field_data_pane_vc

0xdbb3,	// (0x00045e2f) form_field_data_pane_vc_cp2

0xdbbb,	// (0x00045e37) form_field_data_wide_pane_vc_ParamLimits

0xdbbb,	// (0x00045e37) form_field_data_wide_pane_vc

0xdbd1,	// (0x00045e4d) form_field_data_wide_pane_vc_cp2

0xdbd9,	// (0x00045e55) form_field_popup_pane_vc_ParamLimits

0xdbd9,	// (0x00045e55) form_field_popup_pane_vc

0xdbf0,	// (0x00045e6c) form_field_popup_wide_pane_vc_ParamLimits

0xdbf0,	// (0x00045e6c) form_field_popup_wide_pane_vc

0xdc06,	// (0x00045e82) form_field_slider_pane_vc_ParamLimits

0xdc06,	// (0x00045e82) form_field_slider_pane_vc

0xdc19,	// (0x00045e95) form_field_slider_wide_pane_vc_ParamLimits

0xdc19,	// (0x00045e95) form_field_slider_wide_pane_vc

0x9eb5,	// (0x00042131) grid_touch_1_pane_ParamLimits

0x9eb5,	// (0x00042131) grid_touch_1_pane

0x9ec9,	// (0x00042145) grid_touch_2_pane_ParamLimits

0x9ec9,	// (0x00042145) grid_touch_2_pane

0xdc2c,	// (0x00045ea8) touch_pane_g1_ParamLimits

0xdc2c,	// (0x00045ea8) touch_pane_g1

0xdc3a,	// (0x00045eb6) cell_app_pane_cp_wide_ParamLimits

0xdc3a,	// (0x00045eb6) cell_app_pane_cp_wide

0xdc4b,	// (0x00045ec7) grid_popup_fast_wide_pane_ParamLimits

0xdc4b,	// (0x00045ec7) grid_popup_fast_wide_pane

0xdc5f,	// (0x00045edb) scroll_pane_cp19_ParamLimits

0xdc5f,	// (0x00045edb) scroll_pane_cp19

0x8f39,	// (0x000411b5) bg_popup_window_pane_cp20

0xdc73,	// (0x00045eef) listscroll_popup_fast_wide_pane

0xd617,	// (0x00045893) grid_indicator_nsta_pane

0xdc7b,	// (0x00045ef7) clock_nsta_pane_g1

0xdc84,	// (0x00045f00) clock_nsta_pane_t1

0x9ef3,	// (0x0004216f) cell_indicator_nsta_pane_ParamLimits

0x9ef3,	// (0x0004216f) cell_indicator_nsta_pane

0xdc2c,	// (0x00045ea8) cell_indicator_nsta_pane_g1

0x9f10,	// (0x0004218c) cell_indicator_nsta_pane_g2

0x0001,

0x0212,	// (0x0003848e) cell_indicator_nsta_pane_g

0xdca0,	// (0x00045f1c) clock_nsta_pane_cp

0xdca8,	// (0x00045f24) indicator_nsta_pane_cp

0xdcb0,	// (0x00045f2c) nsta_clock_indic_pane_g1

0x8fe1,	// (0x0004125d) grid_indicator_pane

0xb771,	// (0x000439ed) scroll_pane_cp29

0x1fd3,	// (0x0003a24f) indicator_nsta_pane_cp2_ParamLimits

0x1fd3,	// (0x0003a24f) indicator_nsta_pane_cp2

0x8fa5,	// (0x00041221) main_apps_wheel_pane

0xc392,	// (0x0004460e) form_midp_field_text_pane_ParamLimits

0xc4c1,	// (0x0004473d) scroll_bar_cp050_ParamLimits

0xdd11,	// (0x00045f8d) cell_indicator_pane_ParamLimits

0xdd11,	// (0x00045f8d) cell_indicator_pane

0xdd2c,	// (0x00045fa8) cell_indicator_pane_g1

0x9f26,	// (0x000421a2) grid_wheel_folder_pane_ParamLimits

0x9f26,	// (0x000421a2) grid_wheel_folder_pane

0x9f34,	// (0x000421b0) list_wheel_apps_pane_ParamLimits

0x9f34,	// (0x000421b0) list_wheel_apps_pane

0x9f42,	// (0x000421be) main_apps_wheel_pane_g1_ParamLimits

0x9f42,	// (0x000421be) main_apps_wheel_pane_g1

0x9f4e,	// (0x000421ca) main_apps_wheel_pane_g2_ParamLimits

0x9f4e,	// (0x000421ca) main_apps_wheel_pane_g2

0x0001,

0x0217,	// (0x00038493) main_apps_wheel_pane_g_ParamLimits

0x0217,	// (0x00038493) main_apps_wheel_pane_g

0x9f5c,	// (0x000421d8) main_apps_wheel_pane_t1_ParamLimits

0x9f5c,	// (0x000421d8) main_apps_wheel_pane_t1

0x9f70,	// (0x000421ec) list_wheel_apps_pane_g1

0x9f78,	// (0x000421f4) list_wheel_apps_pane_g2

0x9f80,	// (0x000421fc) list_wheel_apps_pane_g3

0x9f88,	// (0x00042204) list_wheel_apps_pane_g4

0x9f92,	// (0x0004220e) list_wheel_apps_pane_g5

0x0004,

0x021c,	// (0x00038498) list_wheel_apps_pane_g

0xbbd5,	// (0x00043e51) navi_icon_text_pane

0x94c2,	// (0x0004173e) aid_fill_nsta

0xdd36,	// (0x00045fb2) navi_icon_text_pane_g1

0xdd42,	// (0x00045fbe) navi_icon_text_pane_t1

0xba77,	// (0x00043cf3) list_set_graphic_pane_t1_ParamLimits

0xba77,	// (0x00043cf3) list_set_graphic_pane_t1

0xcbd9,	// (0x00044e55) popup_midp_note_alarm_window_t6_ParamLimits

0xcbd9,	// (0x00044e55) popup_midp_note_alarm_window_t6

0xcbeb,	// (0x00044e67) popup_midp_note_alarm_window_t7_ParamLimits

0xcbeb,	// (0x00044e67) popup_midp_note_alarm_window_t7

0xcbfd,	// (0x00044e79) popup_midp_note_alarm_window_t8_ParamLimits

0xcbfd,	// (0x00044e79) popup_midp_note_alarm_window_t8

0xcc0f,	// (0x00044e8b) popup_midp_note_alarm_window_t9_ParamLimits

0xcc0f,	// (0x00044e8b) popup_midp_note_alarm_window_t9

0xcc21,	// (0x00044e9d) popup_midp_note_alarm_window_t10_ParamLimits

0xcc21,	// (0x00044e9d) popup_midp_note_alarm_window_t10

0xcc33,	// (0x00044eaf) popup_midp_note_alarm_window_t11_ParamLimits

0xcc33,	// (0x00044eaf) popup_midp_note_alarm_window_t11

0xcc45,	// (0x00044ec1) scroll_pane_cp17_ParamLimits

0xcc45,	// (0x00044ec1) scroll_pane_cp17

0x2ac4,	// (0x0003ad40) volume_small_pane_cp_g1

0x2eec,	// (0x0003b168) volume_small_pane_cp_g2

0x2ef5,	// (0x0003b171) volume_small_pane_cp_g3

0x2ad6,	// (0x0003ad52) volume_small_pane_cp_g4

0x2efe,	// (0x0003b17a) volume_small_pane_cp_g5

0x2e80,	// (0x0003b0fc) volume_small_pane_cp_g6

0x2ae8,	// (0x0003ad64) volume_small_pane_cp_g7

0x2f07,	// (0x0003b183) volume_small_pane_cp_g8

0x2f10,	// (0x0003b18c) volume_small_pane_cp_g9

0x2afa,	// (0x0003ad76) volume_small_pane_cp_g10

0xbd73,	// (0x00043fef) midp_ticker_pane_g1_ParamLimits

0xbd7f,	// (0x00043ffb) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x000479da) midp_ticker_pane_g_ParamLimits

0xbd8b,	// (0x00044007) midp_ticker_pane_t1_ParamLimits

0x94e6,	// (0x00041762) aid_fill_nsta_2

0xc4ad,	// (0x00044729) list_form2_midp_pane

0xd31f,	// (0x0004559b) midp_editing_number_pane_ParamLimits

0xd32e,	// (0x000455aa) midp_ticker_pane_ParamLimits

0xdd54,	// (0x00045fd0) form2_midp_field_pane

0xdd5c,	// (0x00045fd8) scroll_pane_cp51

0xdd7c,	// (0x00045ff8) form2_midp_button_pane_ParamLimits

0xdd7c,	// (0x00045ff8) form2_midp_button_pane

0xdd8e,	// (0x0004600a) form2_midp_content_pane_ParamLimits

0xdd8e,	// (0x0004600a) form2_midp_content_pane

0xdda8,	// (0x00046024) form2_midp_field_choice_group_pane

0xddb0,	// (0x0004602c) form2_midp_field_pane_g1

0xddb8,	// (0x00046034) form2_midp_field_pane_g2

0xddc0,	// (0x0004603c) form2_midp_field_pane_g3

0xddc8,	// (0x00046044) form2_midp_field_pane_g4

0x0003,

0xfa0c,	// (0x00047c88) form2_midp_field_pane_g

0xddd0,	// (0x0004604c) form2_midp_gauge_slider_pane

0xddd8,	// (0x00046054) form2_midp_gauge_wait_pane

0xdde0,	// (0x0004605c) form2_midp_image_pane_ParamLimits

0xdde0,	// (0x0004605c) form2_midp_image_pane

0xddfb,	// (0x00046077) form2_midp_label_pane_ParamLimits

0xddfb,	// (0x00046077) form2_midp_label_pane

0x9fc5,	// (0x00042241) form2_midp_label_pane_cp_ParamLimits

0x9fc5,	// (0x00042241) form2_midp_label_pane_cp

0xde14,	// (0x00046090) form2_midp_string_pane_ParamLimits

0xde14,	// (0x00046090) form2_midp_string_pane

0x7627,	// (0x0003f8a3) form2_midp_text_pane_ParamLimits

0x7627,	// (0x0003f8a3) form2_midp_text_pane

0xde26,	// (0x000460a2) form2_midp_time_pane

0xde36,	// (0x000460b2) input_focus_pane_cp51_ParamLimits

0xde36,	// (0x000460b2) input_focus_pane_cp51

0xde4e,	// (0x000460ca) form2_midp_label_pane_t1_ParamLimits

0xde4e,	// (0x000460ca) form2_midp_label_pane_t1

0x7640,	// (0x0003f8bc) form2_mdip_text_pane_t1_ParamLimits

0x7640,	// (0x0003f8bc) form2_mdip_text_pane_t1

0x10ab,	// (0x00039327) form2_midp_time_pane_t1

0xde96,	// (0x00046112) form2_midp_gauge_slider_pane_t1

0x9fe6,	// (0x00042262) form2_midp_gauge_slider_pane_t2

0x9ffa,	// (0x00042276) form2_midp_gauge_slider_pane_t3

0x0002,

0x0241,	// (0x000384bd) form2_midp_gauge_slider_pane_t

0xdea8,	// (0x00046124) form2_midp_slider_pane

0xdeb4,	// (0x00046130) form2_midp_gauge_wait_pane_t1

0xdec2,	// (0x0004613e) form2_midp_wait_pane_ParamLimits

0xdec2,	// (0x0004613e) form2_midp_wait_pane

0xa00e,	// (0x0004228a) list_single_2graphic_pane_cp4_ParamLimits

0xa00e,	// (0x0004228a) list_single_2graphic_pane_cp4

0x9904,	// (0x00041b80) list_single_midp_graphic_pane_cp_ParamLimits

0x9904,	// (0x00041b80) list_single_midp_graphic_pane_cp

0x8f39,	// (0x000411b5) list_highlight_pane_cp20

0xdeee,	// (0x0004616a) list_single_2graphic_pane_g1_cp4

0xd6c3,	// (0x0004593f) list_single_2graphic_pane_g2_cp4

0xdef6,	// (0x00046172) list_single_2graphic_pane_t1_cp4

0x8fa5,	// (0x00041221) list_highlight_pane_cp21

0xdf05,	// (0x00046181) list_single_midp_graphic_pane_g4_cp

0xdf14,	// (0x00046190) list_single_midp_graphic_pane_t1_cp

0xa024,	// (0x000422a0) form2_mdip_string_pane_t1_ParamLimits

0xa024,	// (0x000422a0) form2_mdip_string_pane_t1

0x8f39,	// (0x000411b5) bg_wml_button_pane_cp2

0x8f2f,	// (0x000411ab) form2_midp_image_pane_g1

0x1ad7,	// (0x00039d53) list_double_large_graphic_pane_g5_ParamLimits

0x1ad7,	// (0x00039d53) list_double_large_graphic_pane_g5

0xb38e,	// (0x0004360a) midp_form_pane_ParamLimits

0x8fa5,	// (0x00041221) main_apps_wheel_pane_ParamLimits

0x8552,	// (0x000407ce) popup_preview_window_ParamLimits

0x8552,	// (0x000407ce) popup_preview_window

0x2943,	// (0x0003abbf) popup_touch_info_window_ParamLimits

0x2943,	// (0x0003abbf) popup_touch_info_window

0x2961,	// (0x0003abdd) popup_touch_menu_window_ParamLimits

0x2961,	// (0x0003abdd) popup_touch_menu_window

0x8f25,	// (0x000411a1) bg_popup_sub_pane_cp6

0xdf29,	// (0x000461a5) list_touch_menu_pane

0xdf31,	// (0x000461ad) list_single_touch_menu_pane_ParamLimits

0xdf31,	// (0x000461ad) list_single_touch_menu_pane

0xdf45,	// (0x000461c1) list_single_touch_menu_pane_t1

0x8fa5,	// (0x00041221) bg_popup_sub_pane_cp7_ParamLimits

0x8fa5,	// (0x00041221) bg_popup_sub_pane_cp7

0xdf53,	// (0x000461cf) heading_sub_pane

0xdf5b,	// (0x000461d7) list_touch_info_pane_ParamLimits

0xdf5b,	// (0x000461d7) list_touch_info_pane

0xdf6a,	// (0x000461e6) list_single_touch_info_pane_ParamLimits

0xdf6a,	// (0x000461e6) list_single_touch_info_pane

0xdf7c,	// (0x000461f8) list_single_touch_info_pane_t1

0xdf8a,	// (0x00046206) list_single_touch_info_pane_t2

0x0001,

0xfa1c,	// (0x00047c98) list_single_touch_info_pane_t

0xbd49,	// (0x00043fc5) bg_popup_heading_pane_cp

0xdf98,	// (0x00046214) heading_sub_pane_t1

0xc20b,	// (0x00044487) bg_popup_preview_window_pane_cp_ParamLimits

0xc20b,	// (0x00044487) bg_popup_preview_window_pane_cp

0xdf53,	// (0x000461cf) heading_preview_pane

0xdf5b,	// (0x000461d7) list_preview_pane_ParamLimits

0xdf5b,	// (0x000461d7) list_preview_pane

0xdfa6,	// (0x00046222) popup_preview_window_g1

0xdf6a,	// (0x000461e6) list_single_preview_pane_ParamLimits

0xdf6a,	// (0x000461e6) list_single_preview_pane

0xdfae,	// (0x0004622a) list_single_preview_pane_g1

0xdfb6,	// (0x00046232) list_single_preview_pane_t1

0xdf7c,	// (0x000461f8) list_single_preview_pane_t2

0x0001,

0xfa21,	// (0x00047c9d) list_single_preview_pane_t

0xdfc4,	// (0x00046240) bg_popup_heading_pane_cp2_ParamLimits

0xdfc4,	// (0x00046240) bg_popup_heading_pane_cp2

0xdfda,	// (0x00046256) heading_preview_pane_g1

0xdfe2,	// (0x0004625e) heading_preview_pane_t1_ParamLimits

0xdfe2,	// (0x0004625e) heading_preview_pane_t1

0x8ff8,	// (0x00041274) soft_indicator_pane_t1_ParamLimits

0x9a8d,	// (0x00041d09) scroll_pane_ParamLimits

0xb661,	// (0x000438dd) scroll_sc2_left_pane

0xb66a,	// (0x000438e6) scroll_sc2_right_pane

0xb689,	// (0x00043905) scroll_bg_pane_g1_ParamLimits

0xb69e,	// (0x0004391a) scroll_bg_pane_g2_ParamLimits

0xb6b6,	// (0x00043932) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x00047965) scroll_bg_pane_g_ParamLimits

0xb689,	// (0x00043905) scroll_handle_pane_g1_ParamLimits

0xb6d8,	// (0x00043954) scroll_handle_pane_g2_ParamLimits

0xb6b6,	// (0x00043932) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x0004796c) scroll_handle_pane_g_ParamLimits

0x2413,	// (0x0003a68f) popup_choice_list_window_ParamLimits

0x2413,	// (0x0003a68f) popup_choice_list_window

0xc0e1,	// (0x0004435d) choice_list_pane

0xc163,	// (0x000443df) cell_toolbar_pane_t1

0xc18b,	// (0x00044407) toolbar_button_pane_ParamLimits

0xd07f,	// (0x000452fb) ai_gene_pane_1_t2_ParamLimits

0xd07f,	// (0x000452fb) ai_gene_pane_1_t2

0x0001,

0xf86d,	// (0x00047ae9) ai_gene_pane_1_t_ParamLimits

0xf86d,	// (0x00047ae9) ai_gene_pane_1_t

0xdfff,	// (0x0004627b) scroll_sc2_left_pane_g1

0xdfff,	// (0x0004627b) scroll_sc2_right_pane_g1

0xb38e,	// (0x0004360a) bg_popup_sub_pane_cp10

0xe009,	// (0x00046285) list_choice_list_pane

0xe022,	// (0x0004629e) list_single_choice_list_pane_ParamLimits

0xe022,	// (0x0004629e) list_single_choice_list_pane

0xe035,	// (0x000462b1) list_single_choice_list_pane_g1

0xb379,	// (0x000435f5) list_single_choice_list_pane_t1_ParamLimits

0xb379,	// (0x000435f5) list_single_choice_list_pane_t1

0xe03d,	// (0x000462b9) choice_list_pane_g1

0xe045,	// (0x000462c1) choice_list_pane_t1

0x8f25,	// (0x000411a1) input_focus_pane_cp11

0xb5d6,	// (0x00043852) title_pane_stacon_g2_ParamLimits

0xb5d6,	// (0x00043852) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x0004794b) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0004794b) title_pane_stacon_g

0xbd49,	// (0x00043fc5) cursor_press_pane

0x820b,	// (0x00040487) popup_fep_hwr_window_ParamLimits

0x820b,	// (0x00040487) popup_fep_hwr_window

0x2533,	// (0x0003a7af) popup_fep_vkb_window_ParamLimits

0x2533,	// (0x0003a7af) popup_fep_vkb_window

0xe053,	// (0x000462cf) cursor_press_pane_g1

0x0002,

0x0263,	// (0x000384df) fep_vkb_side_pane_g_ParamLimits

0x2f52,	// (0x0003b1ce) fep_hwr_candidate_pane_ParamLimits

0x2f52,	// (0x0003b1ce) fep_hwr_candidate_pane

0x2f7c,	// (0x0003b1f8) fep_hwr_side_pane_ParamLimits

0x2f7c,	// (0x0003b1f8) fep_hwr_side_pane

0x2f9c,	// (0x0003b218) fep_hwr_top_pane_ParamLimits

0x2f9c,	// (0x0003b218) fep_hwr_top_pane

0x2fb4,	// (0x0003b230) fep_hwr_write_pane_ParamLimits

0x2fb4,	// (0x0003b230) fep_hwr_write_pane

0x0263,	// (0x000384df) fep_vkb_side_pane_g

0xe05b,	// (0x000462d7) fep_hwr_top_pane_g1

0xe06d,	// (0x000462e9) fep_hwr_top_pane_g2

0x2fe0,	// (0x0003b25c) fep_hwr_top_pane_g3

0x0002,

0xfa26,	// (0x00047ca2) fep_hwr_top_pane_g

0x2ff5,	// (0x0003b271) fep_hwr_top_text_pane

0xb837,	// (0x00043ab3) fep_hwr_top_text_pane_g1

0xe0a3,	// (0x0004631f) fep_hwr_top_text_pane_t1

0x30eb,	// (0x0003b367) fep_hwr_candidate_pane_g1

0xe1ce,	// (0x0004644a) fep_vkb_keypad_pane_g3_ParamLimits

0xe1ce,	// (0x0004644a) fep_vkb_keypad_pane_g3

0xe1f6,	// (0x00046472) fep_vkb_keypad_pane_g4_ParamLimits

0xe1f6,	// (0x00046472) fep_vkb_keypad_pane_g4

0xe265,	// (0x000464e1) fep_vkb_bottom_pane_g2_ParamLimits

0xe265,	// (0x000464e1) fep_vkb_bottom_pane_g2

0x0001,

0xfa4a,	// (0x00047cc6) fep_vkb_bottom_pane_g_ParamLimits

0xfa4a,	// (0x00047cc6) fep_vkb_bottom_pane_g

0xdfff,	// (0x0004627b) cell_vkb_side_pane_g2

0x0001,

0xfa4f,	// (0x00047ccb) cell_vkb_side_pane_g

0xe2a9,	// (0x00046525) cell_vkb_side_pane_t1

0xe2b7,	// (0x00046533) cell_vkb_side_pane_t1_copy1

0xdfff,	// (0x0004627b) bg_fep_vkb_candidate_pane_g2

0xe38d,	// (0x00046609) cell_vkb_candidate_pane_ParamLimits

0xe0b1,	// (0x0004632d) aid_size_cell_vkb_ParamLimits

0xe0b1,	// (0x0004632d) aid_size_cell_vkb

0xe38d,	// (0x00046609) cell_vkb_candidate_pane

0x3105,	// (0x0003b381) bg_popup_fep_shadow_pane_g1

0xa0b4,	// (0x00042330) fep_vkb_bottom_pane_ParamLimits

0xa0b4,	// (0x00042330) fep_vkb_bottom_pane

0xe13c,	// (0x000463b8) fep_vkb_candidate_pane_ParamLimits

0xe13c,	// (0x000463b8) fep_vkb_candidate_pane

0xa0d9,	// (0x00042355) fep_vkb_keypad_pane_ParamLimits

0xa0d9,	// (0x00042355) fep_vkb_keypad_pane

0xa10e,	// (0x0004238a) fep_vkb_side_pane_ParamLimits

0xa10e,	// (0x0004238a) fep_vkb_side_pane

0xa14a,	// (0x000423c6) fep_vkb_top_pane_ParamLimits

0xa14a,	// (0x000423c6) fep_vkb_top_pane

0xe162,	// (0x000463de) fep_vkb_top_pane_g1_ParamLimits

0xe162,	// (0x000463de) fep_vkb_top_pane_g1

0xe171,	// (0x000463ed) fep_vkb_top_pane_g2_ParamLimits

0xe171,	// (0x000463ed) fep_vkb_top_pane_g2

0xe180,	// (0x000463fc) fep_vkb_top_pane_g3_ParamLimits

0xe180,	// (0x000463fc) fep_vkb_top_pane_g3

0x0003,

0xfa41,	// (0x00047cbd) fep_vkb_top_pane_g_ParamLimits

0xfa41,	// (0x00047cbd) fep_vkb_top_pane_g

0xe19e,	// (0x0004641a) fep_vkb_top_text_pane_ParamLimits

0xe19e,	// (0x0004641a) fep_vkb_top_text_pane

0xa17f,	// (0x000423fb) fep_vkb_side_pane_g1_ParamLimits

0xa17f,	// (0x000423fb) fep_vkb_side_pane_g1

0xe1bd,	// (0x00046439) grid_vkb_side_pane_ParamLimits

0xe1bd,	// (0x00046439) grid_vkb_side_pane

0x310d,	// (0x0003b389) bg_popup_fep_shadow_pane_g2

0x3116,	// (0x0003b392) bg_popup_fep_shadow_pane_g3

0x311e,	// (0x0003b39a) bg_popup_fep_shadow_pane_g4

0x3127,	// (0x0003b3a3) bg_popup_fep_shadow_pane_g5

0x3131,	// (0x0003b3ad) bg_popup_fep_shadow_pane_g6

0x3139,	// (0x0003b3b5) bg_popup_fep_shadow_pane_g7

0xb2a4,	// (0x00043520) bg_popup_fep_shadow_pane_g8

0xe214,	// (0x00046490) grid_vkb_keypad_number_pane_ParamLimits

0xe214,	// (0x00046490) grid_vkb_keypad_number_pane

0xe224,	// (0x000464a0) grid_vkb_keypad_pane_ParamLimits

0xe224,	// (0x000464a0) grid_vkb_keypad_pane

0xe24a,	// (0x000464c6) fep_vkb_bottom_pane_g1_ParamLimits

0xe24a,	// (0x000464c6) fep_vkb_bottom_pane_g1

0xe273,	// (0x000464ef) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xe273,	// (0x000464ef) grid_vkb_keypad_bottom_left_pane

0xe288,	// (0x00046504) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xe288,	// (0x00046504) grid_vkb_keypad_bottom_right_pane

0xe29d,	// (0x00046519) fep_vkb_top_text_pane_g1

0xa1c6,	// (0x00042442) fep_vkb_top_text_pane_t1

0xa1d8,	// (0x00042454) cell_vkb_side_pane_ParamLimits

0xa1d8,	// (0x00042454) cell_vkb_side_pane

0xdfff,	// (0x0004627b) cell_vkb_side_pane_g1

0xe2c5,	// (0x00046541) cell_vkb_keypad_pane_ParamLimits

0xe2c5,	// (0x00046541) cell_vkb_keypad_pane

0xe33a,	// (0x000465b6) cell_vkb_keypad_pane_g1

0x0008,

0xfa62,	// (0x00047cde) bg_popup_fep_shadow_pane_g

0xdfff,	// (0x0004627b) cell_hwr_side_pane_g1

0xdfff,	// (0x0004627b) cell_hwr_side_pane_g2

0xe344,	// (0x000465c0) cell_vkb_keypad_pane_t1

0xa1ee,	// (0x0004246a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa1ee,	// (0x0004246a) cell_vkb_keypad_bottom_left_pane

0xa203,	// (0x0004247f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa203,	// (0x0004247f) cell_vkb_keypad_bottom_right_pane

0xdfff,	// (0x0004627b) cell_vkb_keypad_bottom_left_pane_g1

0xdfff,	// (0x0004627b) cell_vkb_keypad_bottom_right_pane_g1

0xe352,	// (0x000465ce) cell_vkb_keypad_number_pane_ParamLimits

0xe352,	// (0x000465ce) cell_vkb_keypad_number_pane

0xe371,	// (0x000465ed) cell_vkb_keypad_number_pane_g1

0xe37b,	// (0x000465f7) cell_vkb_keypad_number_pane_g2

0xe384,	// (0x00046600) cell_vkb_keypad_number_pane_g3

0x0002,

0xfa54,	// (0x00047cd0) cell_vkb_keypad_number_pane_g

0xe344,	// (0x000465c0) cell_vkb_keypad_number_pane_t1

0xe3a8,	// (0x00046624) fep_vkb_candidate_pane_g1

0x0001,

0xfa4f,	// (0x00047ccb) cell_hwr_side_pane_g

0xe3c1,	// (0x0004663d) cell_hwr_side_pane_t1

0x314b,	// (0x0003b3c7) cell_hwr_side_pane_t1_copy1

0xe190,	// (0x0004640c) cell_hwr_candidate_pane_g1

0x3159,	// (0x0003b3d5) cell_hwr_candidate_pane_t1

0xdfff,	// (0x0004627b) cell_vkb_candidate_pane_g2

0xe447,	// (0x000466c3) cell_vkb_candidate_pane_t1

0x2f19,	// (0x0003b195) bg_popup_fep_shadow_pane_ParamLimits

0x2f19,	// (0x0003b195) bg_popup_fep_shadow_pane

0x99c8,	// (0x00041c44) bg_fep_hwr_top_pane_g4

0xe07f,	// (0x000462fb) bg_hwr_side_pane_g1_ParamLimits

0xe07f,	// (0x000462fb) bg_hwr_side_pane_g1

0x89ad,	// (0x00040c29) cell_hwr_side_pane_ParamLimits

0x89ad,	// (0x00040c29) cell_hwr_side_pane

0x306c,	// (0x0003b2e8) fep_hwr_write_pane_g1_ParamLimits

0x306c,	// (0x0003b2e8) fep_hwr_write_pane_g1

0x3079,	// (0x0003b2f5) fep_hwr_write_pane_g2_ParamLimits

0x3079,	// (0x0003b2f5) fep_hwr_write_pane_g2

0x3086,	// (0x0003b302) fep_hwr_write_pane_g3_ParamLimits

0x3086,	// (0x0003b302) fep_hwr_write_pane_g3

0x89cd,	// (0x00040c49) fep_hwr_write_pane_g4_ParamLimits

0x89cd,	// (0x00040c49) fep_hwr_write_pane_g4

0x0005,

0xfa2d,	// (0x00047ca9) fep_hwr_write_pane_g_ParamLimits

0xfa2d,	// (0x00047ca9) fep_hwr_write_pane_g

0x99c8,	// (0x00041c44) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x99c8,	// (0x00041c44) bg_fep_hwr_candidate_pane_g2

0x30a9,	// (0x0003b325) cell_hwr_candidate_pane_ParamLimits

0x30a9,	// (0x0003b325) cell_hwr_candidate_pane

0x30eb,	// (0x0003b367) fep_hwr_candidate_pane_g1_ParamLimits

0xe0df,	// (0x0004635b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe0df,	// (0x0004635b) bg_popup_fep_shadow_pane_cp2

0xe190,	// (0x0004640c) fep_vkb_top_pane_g4_ParamLimits

0xe190,	// (0x0004640c) fep_vkb_top_pane_g4

0xe1af,	// (0x0004642b) fep_vkb_side_pane_g2_ParamLimits

0xe1af,	// (0x0004642b) fep_vkb_side_pane_g2

0x7398,	// (0x0003f614) list_setting_pane_t4_ParamLimits

0x7398,	// (0x0003f614) list_setting_pane_t4

0x7432,	// (0x0003f6ae) list_setting_number_pane_t5_ParamLimits

0x7432,	// (0x0003f6ae) list_setting_number_pane_t5

0x7e43,	// (0x000400bf) list_double_heading_pane_cp2_ParamLimits

0x7e43,	// (0x000400bf) list_double_heading_pane_cp2

0x9ac1,	// (0x00041d3d) list_double_heading_pane_g1_cp2_ParamLimits

0x9ac1,	// (0x00041d3d) list_double_heading_pane_g1_cp2

0xb243,	// (0x000434bf) list_double_heading_pane_g2_cp2_ParamLimits

0xb243,	// (0x000434bf) list_double_heading_pane_g2_cp2

0xe455,	// (0x000466d1) list_double_heading_pane_t1_cp2_ParamLimits

0xe455,	// (0x000466d1) list_double_heading_pane_t1_cp2

0xe46b,	// (0x000466e7) list_double_heading_pane_t2_cp2_ParamLimits

0xe46b,	// (0x000466e7) list_double_heading_pane_t2_cp2

0x8f1d,	// (0x00041199) aid_value_unit2

0x163a,	// (0x000398b6) popup_preview_fixed_window

0x90d8,	// (0x00041354) bg_popup_preview_window_pane_cp02

0xe47d,	// (0x000466f9) list_preview_fixed_pane

0xe4c3,	// (0x0004673f) list_empty_pane_fp_ParamLimits

0xe4c3,	// (0x0004673f) list_empty_pane_fp

0xe4c3,	// (0x0004673f) list_single_cale_day_pane_fp_ParamLimits

0xe4c3,	// (0x0004673f) list_single_cale_day_pane_fp

0xe4c3,	// (0x0004673f) list_single_graphic_heading_pane_fp_ParamLimits

0xe4c3,	// (0x0004673f) list_single_graphic_heading_pane_fp

0xe4c3,	// (0x0004673f) list_single_graphic_pane_fp_ParamLimits

0xe4c3,	// (0x0004673f) list_single_graphic_pane_fp

0xe4c3,	// (0x0004673f) list_single_heading_pane_fp_ParamLimits

0xe4c3,	// (0x0004673f) list_single_heading_pane_fp

0xe4c3,	// (0x0004673f) list_single_pane_fp_ParamLimits

0xe4c3,	// (0x0004673f) list_single_pane_fp

0xe4d9,	// (0x00046755) list_single_pane_fp_g1_ParamLimits

0xe4d9,	// (0x00046755) list_single_pane_fp_g1

0x9ac1,	// (0x00041d3d) list_single_pane_fp_g2_ParamLimits

0x9ac1,	// (0x00041d3d) list_single_pane_fp_g2

0xb243,	// (0x000434bf) list_single_pane_fp_g3_ParamLimits

0xb243,	// (0x000434bf) list_single_pane_fp_g3

0xe4e5,	// (0x00046761) list_single_pane_fp_g4_ParamLimits

0xe4e5,	// (0x00046761) list_single_pane_fp_g4

0x0003,

0xfa83,	// (0x00047cff) list_single_pane_fp_g_ParamLimits

0xfa83,	// (0x00047cff) list_single_pane_fp_g

0x10be,	// (0x0003933a) list_single_pane_fp_t1_ParamLimits

0x10be,	// (0x0003933a) list_single_pane_fp_t1

0x10d5,	// (0x00039351) list_single_graphic_pane_fp_g1_ParamLimits

0x10d5,	// (0x00039351) list_single_graphic_pane_fp_g1

0xe4d9,	// (0x00046755) list_single_graphic_pane_fp_g2_ParamLimits

0xe4d9,	// (0x00046755) list_single_graphic_pane_fp_g2

0x9ac1,	// (0x00041d3d) list_single_graphic_pane_fp_g3_ParamLimits

0x9ac1,	// (0x00041d3d) list_single_graphic_pane_fp_g3

0xb243,	// (0x000434bf) list_single_graphic_pane_fp_g4_ParamLimits

0xb243,	// (0x000434bf) list_single_graphic_pane_fp_g4

0xe4e5,	// (0x00046761) list_single_graphic_pane_fp_g5_ParamLimits

0xe4e5,	// (0x00046761) list_single_graphic_pane_fp_g5

0x0004,

0xfa8c,	// (0x00047d08) list_single_graphic_pane_fp_g_ParamLimits

0xfa8c,	// (0x00047d08) list_single_graphic_pane_fp_g

0x10e1,	// (0x0003935d) list_single_graphic_pane_fp_t1_ParamLimits

0x10e1,	// (0x0003935d) list_single_graphic_pane_fp_t1

0x10d5,	// (0x00039351) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x10d5,	// (0x00039351) list_single_graphic_heading_pane_fp_g1

0xe4d9,	// (0x00046755) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xe4d9,	// (0x00046755) list_single_graphic_heading_pane_fp_g2

0x9ac1,	// (0x00041d3d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x9ac1,	// (0x00041d3d) list_single_graphic_heading_pane_fp_g3

0xb243,	// (0x000434bf) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xb243,	// (0x000434bf) list_single_graphic_heading_pane_fp_g4

0xe4e5,	// (0x00046761) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xe4e5,	// (0x00046761) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfa8c,	// (0x00047d08) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfa8c,	// (0x00047d08) list_single_graphic_heading_pane_fp_g

0x10f7,	// (0x00039373) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x10f7,	// (0x00039373) list_single_graphic_heading_pane_fp_t1

0x110d,	// (0x00039389) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x110d,	// (0x00039389) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfa97,	// (0x00047d13) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfa97,	// (0x00047d13) list_single_graphic_heading_pane_fp_t

0x111f,	// (0x0003939b) list_single_cale_day_pane_fp_g1_ParamLimits

0x111f,	// (0x0003939b) list_single_cale_day_pane_fp_g1

0xe4f1,	// (0x0004676d) list_single_cale_day_pane_fp_g2_ParamLimits

0xe4f1,	// (0x0004676d) list_single_cale_day_pane_fp_g2

0x3177,	// (0x0003b3f3) list_single_cale_day_pane_fp_g3_ParamLimits

0x3177,	// (0x0003b3f3) list_single_cale_day_pane_fp_g3

0x319f,	// (0x0003b41b) list_single_cale_day_pane_fp_g4_ParamLimits

0x319f,	// (0x0003b41b) list_single_cale_day_pane_fp_g4

0x31c3,	// (0x0003b43f) list_single_cale_day_pane_fp_g5_ParamLimits

0x31c3,	// (0x0003b43f) list_single_cale_day_pane_fp_g5

0x0004,

0xfa9c,	// (0x00047d18) list_single_cale_day_pane_fp_g_ParamLimits

0xfa9c,	// (0x00047d18) list_single_cale_day_pane_fp_g

0x1157,	// (0x000393d3) list_single_cale_day_pane_fp_t1_ParamLimits

0x1157,	// (0x000393d3) list_single_cale_day_pane_fp_t1

0x117d,	// (0x000393f9) list_single_cale_day_pane_fp_t2_ParamLimits

0x117d,	// (0x000393f9) list_single_cale_day_pane_fp_t2

0x1196,	// (0x00039412) list_single_cale_day_pane_fp_t3_ParamLimits

0x1196,	// (0x00039412) list_single_cale_day_pane_fp_t3

0x0002,

0xfaa7,	// (0x00047d23) list_single_cale_day_pane_fp_t_ParamLimits

0xfaa7,	// (0x00047d23) list_single_cale_day_pane_fp_t

0xe4d9,	// (0x00046755) list_empty_pane_fp_g1_ParamLimits

0xe4d9,	// (0x00046755) list_empty_pane_fp_g1

0x11af,	// (0x0003942b) list_empty_pane_fp_t1

0x11bd,	// (0x00039439) list_empty_pane_fp_t2

0x0001,

0xfaae,	// (0x00047d2a) list_empty_pane_fp_t

0xe4d9,	// (0x00046755) list_single_heading_pane_fp_g1_ParamLimits

0xe4d9,	// (0x00046755) list_single_heading_pane_fp_g1

0x9ac1,	// (0x00041d3d) list_single_heading_pane_fp_g2_ParamLimits

0x9ac1,	// (0x00041d3d) list_single_heading_pane_fp_g2

0xb243,	// (0x000434bf) list_single_heading_pane_fp_g3_ParamLimits

0xb243,	// (0x000434bf) list_single_heading_pane_fp_g3

0x0002,

0xfab3,	// (0x00047d2f) list_single_heading_pane_fp_g_ParamLimits

0xfab3,	// (0x00047d2f) list_single_heading_pane_fp_g

0x11cb,	// (0x00039447) list_single_heading_pane_fp_t1_ParamLimits

0x11cb,	// (0x00039447) list_single_heading_pane_fp_t1

0x11dd,	// (0x00039459) list_single_heading_pane_fp_t2_ParamLimits

0x11dd,	// (0x00039459) list_single_heading_pane_fp_t2

0x0001,

0xfaba,	// (0x00047d36) list_single_heading_pane_fp_t_ParamLimits

0xfaba,	// (0x00047d36) list_single_heading_pane_fp_t

0xb470,	// (0x000436ec) aid_size_cell_fast

0x90bb,	// (0x00041337) soft_indicator_pane_cp1_t1

0xb4aa,	// (0x00043726) cell_app_pane_cp2_ParamLimits

0xb4aa,	// (0x00043726) cell_app_pane_cp2

0x2f3b,	// (0x0003b1b7) fep_hwr_candidate_drop_down_list_pane

0x99d6,	// (0x00041c52) fep_hwr_candidate_pane_g3_ParamLimits

0x99d6,	// (0x00041c52) fep_hwr_candidate_pane_g3

0x99e3,	// (0x00041c5f) fep_hwr_candidate_pane_g4_ParamLimits

0x99e3,	// (0x00041c5f) fep_hwr_candidate_pane_g4

0x0002,

0xfa3a,	// (0x00047cb6) fep_hwr_candidate_pane_g_ParamLimits

0xfa3a,	// (0x00047cb6) fep_hwr_candidate_pane_g

0xe12b,	// (0x000463a7) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe12b,	// (0x000463a7) fep_vkb_candidate_drop_down_list_pane

0xe3b0,	// (0x0004662c) fep_vkb_candidate_pane_g3

0xe3b8,	// (0x00046634) fep_vkb_candidate_pane_g4

0x0002,

0xfa5b,	// (0x00047cd7) fep_vkb_candidate_pane_g

0xe190,	// (0x0004640c) cell_hwr_candidate_pane_g1_ParamLimits

0xe3cf,	// (0x0004664b) cell_hwr_candidate_pane_g3_ParamLimits

0xe3cf,	// (0x0004664b) cell_hwr_candidate_pane_g3

0xe3f0,	// (0x0004666c) cell_hwr_candidate_pane_g4_ParamLimits

0xe3f0,	// (0x0004666c) cell_hwr_candidate_pane_g4

0x0002,

0xfa75,	// (0x00047cf1) cell_hwr_candidate_pane_g_ParamLimits

0xfa75,	// (0x00047cf1) cell_hwr_candidate_pane_g

0xe411,	// (0x0004668d) cell_vkb_candidate_pane_g3_ParamLimits

0xe411,	// (0x0004668d) cell_vkb_candidate_pane_g3

0xe42c,	// (0x000466a8) cell_vkb_candidate_pane_g4_ParamLimits

0xe42c,	// (0x000466a8) cell_vkb_candidate_pane_g4

0xe4fd,	// (0x00046779) cell_app_pane_cp2_g1_ParamLimits

0xe4fd,	// (0x00046779) cell_app_pane_cp2_g1

0xe51b,	// (0x00046797) cell_app_pane_cp2_g2_ParamLimits

0xe51b,	// (0x00046797) cell_app_pane_cp2_g2

0x0001,

0xfabf,	// (0x00047d3b) cell_app_pane_cp2_g_ParamLimits

0xfabf,	// (0x00047d3b) cell_app_pane_cp2_g

0xe527,	// (0x000467a3) cell_app_pane_cp2_t1_ParamLimits

0xe527,	// (0x000467a3) cell_app_pane_cp2_t1

0xb235,	// (0x000434b1) grid_highlight_pane_cp1_ParamLimits

0xb235,	// (0x000434b1) grid_highlight_pane_cp1

0x31e7,	// (0x0003b463) cell_hwr_candidate_pane_cp1_ParamLimits

0x31e7,	// (0x0003b463) cell_hwr_candidate_pane_cp1

0xe190,	// (0x0004640c) fep_hwr_candidate_drop_down_list_pane_g1

0xe539,	// (0x000467b5) fep_hwr_candidate_drop_down_list_pane_g2

0xe546,	// (0x000467c2) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfac4,	// (0x00047d40) fep_hwr_candidate_drop_down_list_pane_g

0x3206,	// (0x0003b482) fep_hwr_candidate_drop_down_list_scroll_pane

0x320f,	// (0x0003b48b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x320f,	// (0x0003b48b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x321c,	// (0x0003b498) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x321c,	// (0x0003b498) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x3229,	// (0x0003b4a5) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x3229,	// (0x0003b4a5) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xe411,	// (0x0004668d) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe411,	// (0x0004668d) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xe42c,	// (0x000466a8) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe42c,	// (0x000466a8) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x3236,	// (0x0003b4b2) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x3236,	// (0x0003b4b2) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x3251,	// (0x0003b4cd) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x3251,	// (0x0003b4cd) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x326c,	// (0x0003b4e8) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x326c,	// (0x0003b4e8) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfacb,	// (0x00047d47) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfacb,	// (0x00047d47) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xe553,	// (0x000467cf) cell_vkb_candidate_pane_cp1_ParamLimits

0xe553,	// (0x000467cf) cell_vkb_candidate_pane_cp1

0xe190,	// (0x0004640c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe190,	// (0x0004640c) fep_vkb_candidate_drop_down_list_pane_g1

0xe539,	// (0x000467b5) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xe539,	// (0x000467b5) fep_vkb_candidate_drop_down_list_pane_g2

0xe546,	// (0x000467c2) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xe546,	// (0x000467c2) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfac4,	// (0x00047d40) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfac4,	// (0x00047d40) fep_vkb_candidate_drop_down_list_pane_g

0xe573,	// (0x000467ef) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xe573,	// (0x000467ef) fep_vkb_candidate_drop_down_list_scroll_pane

0xe580,	// (0x000467fc) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe580,	// (0x000467fc) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xe58d,	// (0x00046809) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe58d,	// (0x00046809) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xe599,	// (0x00046815) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe599,	// (0x00046815) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xe3cf,	// (0x0004664b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe3cf,	// (0x0004664b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xe3f0,	// (0x0004666c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe3f0,	// (0x0004666c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xe5a5,	// (0x00046821) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe5a5,	// (0x00046821) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xe5c6,	// (0x00046842) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe5c6,	// (0x00046842) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xe5e7,	// (0x00046863) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe5e7,	// (0x00046863) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfadc,	// (0x00047d58) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfadc,	// (0x00047d58) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x79a6,	// (0x0003fc22) title_pane_g1_ParamLimits

0x79b9,	// (0x0003fc35) title_pane_g2_ParamLimits

0xf554,	// (0x000477d0) title_pane_g_ParamLimits

0xb827,	// (0x00043aa3) aid_call2_pane

0xb82f,	// (0x00043aab) aid_call_pane

0xb837,	// (0x00043ab3) popup_clock_analogue_window_g1

0xb837,	// (0x00043ab3) popup_clock_analogue_window_g2

0x1dfc,	// (0x0003a078) popup_clock_analogue_window_g3

0x1e05,	// (0x0003a081) popup_clock_analogue_window_g4

0x8f2f,	// (0x000411ab) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x0004797a) popup_clock_analogue_window_g

0x1e0d,	// (0x0003a089) popup_clock_analogue_window_t1

0x1e45,	// (0x0003a0c1) clock_digital_number_pane_ParamLimits

0x1e45,	// (0x0003a0c1) clock_digital_number_pane

0x1e51,	// (0x0003a0cd) clock_digital_number_pane_cp02_ParamLimits

0x1e51,	// (0x0003a0cd) clock_digital_number_pane_cp02

0x1e5d,	// (0x0003a0d9) clock_digital_number_pane_cp03_ParamLimits

0x1e5d,	// (0x0003a0d9) clock_digital_number_pane_cp03

0x1e69,	// (0x0003a0e5) clock_digital_number_pane_cp04_ParamLimits

0x1e69,	// (0x0003a0e5) clock_digital_number_pane_cp04

0x1e75,	// (0x0003a0f1) clock_digital_separator_pane_ParamLimits

0x1e75,	// (0x0003a0f1) clock_digital_separator_pane

0x1e81,	// (0x0003a0fd) popup_clock_digital_window_t1_ParamLimits

0x1e81,	// (0x0003a0fd) popup_clock_digital_window_t1

0x8f2f,	// (0x000411ab) clock_digital_number_pane_g1

0x8f2f,	// (0x000411ab) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x00047985) clock_digital_number_pane_g

0x8f2f,	// (0x000411ab) clock_digital_separator_pane_g1

0x8f2f,	// (0x000411ab) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x00047985) clock_digital_separator_pane_g

0x94c2,	// (0x0004173e) aid_fill_nsta_ParamLimits

0x95f8,	// (0x00041874) indicator_nsta_pane_ParamLimits

0xc088,	// (0x00044304) popup_clock_analogue_window

0xc088,	// (0x00044304) popup_clock_digital_window

0xd617,	// (0x00045893) grid_indicator_nsta_pane_ParamLimits

0xdc92,	// (0x00045f0e) clock_nsta_pane_t2

0x0001,

0xf9db,	// (0x00047c57) clock_nsta_pane_t

0x1dc0,	// (0x0003a03c) aid_size_max_handle

0x1dca,	// (0x0003a046) aid_size_min_handle

0xbd49,	// (0x00043fc5) editor_scroll_pane

0xe602,	// (0x0004687e) ex_editor_pane

0xb355,	// (0x000435d1) scroll_pane_cp13

0x9ab9,	// (0x00041d35) scroll_pane_cp14

0xb866,	// (0x00043ae2) scroll_pane_cp36

0x7e54,	// (0x000400d0) list_single_graphic_hl_pane_cp2_ParamLimits

0x7e54,	// (0x000400d0) list_single_graphic_hl_pane_cp2

0x8971,	// (0x00040bed) list_single_graphic_hl_pane_ParamLimits

0x8971,	// (0x00040bed) list_single_graphic_hl_pane

0x11f3,	// (0x0003946f) aid_size_min_hl_cp1

0xe60a,	// (0x00046886) list_highlight_pane_cp34_ParamLimits

0xe60a,	// (0x00046886) list_highlight_pane_cp34

0xe61b,	// (0x00046897) list_single_graphic_hl_pane_g1_ParamLimits

0xe61b,	// (0x00046897) list_single_graphic_hl_pane_g1

0x765b,	// (0x0003f8d7) list_single_graphic_hl_pane_g2_ParamLimits

0x765b,	// (0x0003f8d7) list_single_graphic_hl_pane_g2

0x765b,	// (0x0003f8d7) list_single_graphic_hl_pane_g3_ParamLimits

0x765b,	// (0x0003f8d7) list_single_graphic_hl_pane_g3

0xbcba,	// (0x00043f36) list_single_graphic_hl_pane_g4_ParamLimits

0xbcba,	// (0x00043f36) list_single_graphic_hl_pane_g4

0x89e2,	// (0x00040c5e) list_single_graphic_hl_pane_g5_ParamLimits

0x89e2,	// (0x00040c5e) list_single_graphic_hl_pane_g5

0x0004,

0xfaed,	// (0x00047d69) list_single_graphic_hl_pane_g_ParamLimits

0xfaed,	// (0x00047d69) list_single_graphic_hl_pane_g

0x7667,	// (0x0003f8e3) list_single_graphic_hl_pane_t1_ParamLimits

0x7667,	// (0x0003f8e3) list_single_graphic_hl_pane_t1

0xe628,	// (0x000468a4) aid_size_min_hl_cp2

0xe631,	// (0x000468ad) list_highlight_pane_cp34_cp2_ParamLimits

0xe631,	// (0x000468ad) list_highlight_pane_cp34_cp2

0xe61b,	// (0x00046897) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xe61b,	// (0x00046897) list_single_graphic_hl_pane_g1_cp2

0xe63e,	// (0x000468ba) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xe63e,	// (0x000468ba) list_single_graphic_hl_pane_g2_cp2

0xe64a,	// (0x000468c6) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe64a,	// (0x000468c6) list_single_graphic_hl_pane_g3_cp2

0x9acd,	// (0x00041d49) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9acd,	// (0x00041d49) list_single_graphic_hl_pane_g4_cp2

0xe658,	// (0x000468d4) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xe658,	// (0x000468d4) list_single_graphic_hl_pane_g5_cp2

0x8012,	// (0x0004028e) control_pane_g4_ParamLimits

0x8012,	// (0x0004028e) control_pane_g4

0xb38e,	// (0x0004360a) bg_popup_sub_pane_cp10_ParamLimits

0xe009,	// (0x00046285) list_choice_list_pane_ParamLimits

0xe018,	// (0x00046294) scroll_pane_cp23

0x90d8,	// (0x00041354) bg_popup_preview_window_pane_cp02_ParamLimits

0xe47d,	// (0x000466f9) list_preview_fixed_pane_ParamLimits

0xe493,	// (0x0004670f) list_preview_fixed_pane_cp_ParamLimits

0xe493,	// (0x0004670f) list_preview_fixed_pane_cp

0xe49f,	// (0x0004671b) popup_preview_fixed_window_g1_ParamLimits

0xe49f,	// (0x0004671b) popup_preview_fixed_window_g1

0xe4ab,	// (0x00046727) popup_preview_fixed_window_g2_ParamLimits

0xe4ab,	// (0x00046727) popup_preview_fixed_window_g2

0x0002,

0xfa7c,	// (0x00047cf8) popup_preview_fixed_window_g_ParamLimits

0xfa7c,	// (0x00047cf8) popup_preview_fixed_window_g

0x1ca2,	// (0x00039f1e) aid_navi_side_left_pane_ParamLimits

0x1cb7,	// (0x00039f33) aid_navi_side_right_pane_ParamLimits

0x1ccf,	// (0x00039f4b) navi_icon_pane_stacon_ParamLimits

0x1ce3,	// (0x00039f5f) navi_navi_pane_stacon_ParamLimits

0x1ccf,	// (0x00039f4b) navi_text_pane_stacon_ParamLimits

0x8f25,	// (0x000411a1) main_text_info_pane

0xe682,	// (0x000468fe) listscroll_text_info_pane

0xe68a,	// (0x00046906) list_text_info_pane_ParamLimits

0xe68a,	// (0x00046906) list_text_info_pane

0xe699,	// (0x00046915) scroll_pane_cp24_ParamLimits

0xe699,	// (0x00046915) scroll_pane_cp24

0xa21e,	// (0x0004249a) list_text_info_pane_t1_ParamLimits

0xa21e,	// (0x0004249a) list_text_info_pane_t1

0x8180,	// (0x000403fc) popup_fast_swap2_window_ParamLimits

0x8180,	// (0x000403fc) popup_fast_swap2_window

0xe6b7,	// (0x00046933) aid_size_cell_fast2

0x8f25,	// (0x000411a1) bg_popup_window_pane_cp17

0xc4d9,	// (0x00044755) heading_pane_cp2

0x92be,	// (0x0004153a) listscroll_fast2_pane

0xe6c1,	// (0x0004693d) grid_fast2_pane

0xe6cb,	// (0x00046947) listscroll_fast2_pane_g1

0xe6d3,	// (0x0004694f) listscroll_fast2_pane_g2

0x0001,

0xfaf8,	// (0x00047d74) listscroll_fast2_pane_g

0xb355,	// (0x000435d1) scroll_pane_cp26

0xe6dd,	// (0x00046959) cell_fast2_pane_ParamLimits

0xe6dd,	// (0x00046959) cell_fast2_pane

0xe6f2,	// (0x0004696e) cell_fast2_pane_g1

0xe6fb,	// (0x00046977) cell_fast2_pane_g2

0xe704,	// (0x00046980) cell_fast2_pane_g3

0x0002,

0xfafd,	// (0x00047d79) cell_fast2_pane_g

0x9352,	// (0x000415ce) grid_highlight_pane_cp9

0x9367,	// (0x000415e3) main_eswt_pane_ParamLimits

0x9367,	// (0x000415e3) main_eswt_pane

0xe6ae,	// (0x0004692a) list_single_text_info_pane

0xe70c,	// (0x00046988) eswt_ctrl_button_pane

0xe70c,	// (0x00046988) eswt_ctrl_canvas_pane

0xe714,	// (0x00046990) eswt_ctrl_combo_pane

0xe70c,	// (0x00046988) eswt_ctrl_default_pane

0xe70c,	// (0x00046988) eswt_ctrl_label_pane

0xe71c,	// (0x00046998) eswt_ctrl_wait_pane

0xe724,	// (0x000469a0) eswt_shell_pane

0x8f25,	// (0x000411a1) listscroll_eswt_app_pane

0xe744,	// (0x000469c0) popup_eswt_tasktip_window_ParamLimits

0xe744,	// (0x000469c0) popup_eswt_tasktip_window

0xc20b,	// (0x00044487) bg_popup_window_pane_cp18

0xe755,	// (0x000469d1) eswt_control_pane_g1_ParamLimits

0xe755,	// (0x000469d1) eswt_control_pane_g1

0xe762,	// (0x000469de) eswt_control_pane_g2_ParamLimits

0xe762,	// (0x000469de) eswt_control_pane_g2

0xe76f,	// (0x000469eb) eswt_control_pane_g3_ParamLimits

0xe76f,	// (0x000469eb) eswt_control_pane_g3

0xe77c,	// (0x000469f8) eswt_control_pane_g4_ParamLimits

0xe77c,	// (0x000469f8) eswt_control_pane_g4

0x0003,

0xfb04,	// (0x00047d80) eswt_control_pane_g_ParamLimits

0xfb04,	// (0x00047d80) eswt_control_pane_g

0xb235,	// (0x000434b1) bg_button_pane_ParamLimits

0xb235,	// (0x000434b1) bg_button_pane

0x9367,	// (0x000415e3) common_borders_pane_copy2_ParamLimits

0x9367,	// (0x000415e3) common_borders_pane_copy2

0xe789,	// (0x00046a05) control_button_pane_g1_ParamLimits

0xe789,	// (0x00046a05) control_button_pane_g1

0xe795,	// (0x00046a11) control_button_pane_g2_ParamLimits

0xe795,	// (0x00046a11) control_button_pane_g2

0xe7a1,	// (0x00046a1d) control_button_pane_g3_ParamLimits

0xe7a1,	// (0x00046a1d) control_button_pane_g3

0x0002,

0xfb0d,	// (0x00047d89) control_button_pane_g_ParamLimits

0xfb0d,	// (0x00047d89) control_button_pane_g

0xe7b5,	// (0x00046a31) control_button_pane_t1

0xe7c3,	// (0x00046a3f) control_button_pane_t2

0x0001,

0xfb14,	// (0x00047d90) control_button_pane_t

0xc197,	// (0x00044413) bg_button_pane_g1

0xc19f,	// (0x0004441b) bg_button_pane_g2

0xc1a7,	// (0x00044423) bg_button_pane_g3

0xc1af,	// (0x0004442b) bg_button_pane_g4

0xc1b7,	// (0x00044433) bg_button_pane_g5

0xc1bf,	// (0x0004443b) bg_button_pane_g6

0xc1c7,	// (0x00044443) bg_button_pane_g7

0xc1cf,	// (0x0004444b) bg_button_pane_g8

0xc1d7,	// (0x00044453) bg_button_pane_g9

0x0008,

0xf813,	// (0x00047a8f) bg_button_pane_g

0xdfc4,	// (0x00046240) common_borders_pane_ParamLimits

0xdfc4,	// (0x00046240) common_borders_pane

0xe755,	// (0x000469d1) eswt_control_pane_g1_copy1_ParamLimits

0xe755,	// (0x000469d1) eswt_control_pane_g1_copy1

0xe762,	// (0x000469de) eswt_control_pane_g2_copy1_ParamLimits

0xe762,	// (0x000469de) eswt_control_pane_g2_copy1

0xe76f,	// (0x000469eb) eswt_control_pane_g3_copy1_ParamLimits

0xe76f,	// (0x000469eb) eswt_control_pane_g3_copy1

0xe77c,	// (0x000469f8) eswt_control_pane_g4_copy1_ParamLimits

0xe77c,	// (0x000469f8) eswt_control_pane_g4_copy1

0xdfff,	// (0x0004627b) bg_eswt_ctrl_canvas_pane_g1

0xdfc4,	// (0x00046240) common_borders_pane_cp2_ParamLimits

0xdfc4,	// (0x00046240) common_borders_pane_cp2

0xdfc4,	// (0x00046240) common_borders_pane_cp3_ParamLimits

0xdfc4,	// (0x00046240) common_borders_pane_cp3

0xe7d1,	// (0x00046a4d) separator_horizontal_pane

0xe7d9,	// (0x00046a55) separator_vertical_pane

0xe755,	// (0x000469d1) eswt_control_pane_g1_copy2_ParamLimits

0xe755,	// (0x000469d1) eswt_control_pane_g1_copy2

0xe762,	// (0x000469de) eswt_control_pane_g2_copy2_ParamLimits

0xe762,	// (0x000469de) eswt_control_pane_g2_copy2

0xe76f,	// (0x000469eb) eswt_control_pane_g3_copy2_ParamLimits

0xe76f,	// (0x000469eb) eswt_control_pane_g3_copy2

0xe77c,	// (0x000469f8) eswt_control_pane_g4_copy2_ParamLimits

0xe77c,	// (0x000469f8) eswt_control_pane_g4_copy2

0x8f25,	// (0x000411a1) common_borders_pane_cp4

0xe7e2,	// (0x00046a5e) separator_horizontal_pane_g1

0xe7eb,	// (0x00046a67) separator_horizontal_pane_g2

0xe7f4,	// (0x00046a70) separator_horizontal_pane_g3

0x0002,

0xfb19,	// (0x00047d95) separator_horizontal_pane_g

0xe755,	// (0x000469d1) eswt_control_pane_g1_copy3_ParamLimits

0xe755,	// (0x000469d1) eswt_control_pane_g1_copy3

0xe762,	// (0x000469de) eswt_control_pane_g2_copy3_ParamLimits

0xe762,	// (0x000469de) eswt_control_pane_g2_copy3

0xe76f,	// (0x000469eb) eswt_control_pane_g3_copy3_ParamLimits

0xe76f,	// (0x000469eb) eswt_control_pane_g3_copy3

0xe77c,	// (0x000469f8) eswt_control_pane_g4_copy3_ParamLimits

0xe77c,	// (0x000469f8) eswt_control_pane_g4_copy3

0x8f25,	// (0x000411a1) common_borders_pane_cp5

0xe7fd,	// (0x00046a79) separator_vertical_pane_g1

0xe806,	// (0x00046a82) separator_vertical_pane_g2

0xe80f,	// (0x00046a8b) separator_vertical_pane_g3

0x0002,

0xfb20,	// (0x00047d9c) separator_vertical_pane_g

0xe755,	// (0x000469d1) eswt_control_pane_g1_copy4_ParamLimits

0xe755,	// (0x000469d1) eswt_control_pane_g1_copy4

0xe762,	// (0x000469de) eswt_control_pane_g2_copy4_ParamLimits

0xe762,	// (0x000469de) eswt_control_pane_g2_copy4

0xe76f,	// (0x000469eb) eswt_control_pane_g3_copy4_ParamLimits

0xe76f,	// (0x000469eb) eswt_control_pane_g3_copy4

0xe77c,	// (0x000469f8) eswt_control_pane_g4_copy4_ParamLimits

0xe77c,	// (0x000469f8) eswt_control_pane_g4_copy4

0xe818,	// (0x00046a94) eswt_ctrl_combo_button_pane

0xe820,	// (0x00046a9c) eswt_ctrl_input_pane

0xe828,	// (0x00046aa4) popup_choice_list_window_cp70

0xe830,	// (0x00046aac) eswt_ctrl_input_pane_t1

0x8f25,	// (0x000411a1) input_focus_pane_cp70

0xdfc4,	// (0x00046240) bg_button_pane_cp70_ParamLimits

0xdfc4,	// (0x00046240) bg_button_pane_cp70

0xe83e,	// (0x00046aba) eswt_ctrl_combo_button_pane_g1

0xe846,	// (0x00046ac2) wait_bar_pane_cp70

0xc20b,	// (0x00044487) bg_popup_window_pane_cp70_ParamLimits

0xc20b,	// (0x00044487) bg_popup_window_pane_cp70

0xe84e,	// (0x00046aca) popup_eswt_tasktip_window_t1

0xe864,	// (0x00046ae0) wait_bar_pane_cp71_ParamLimits

0xe864,	// (0x00046ae0) wait_bar_pane_cp71

0xe870,	// (0x00046aec) grid_eswt_app_pane

0xb66a,	// (0x000438e6) scroll_pane_cp70

0xa23b,	// (0x000424b7) cell_eswt_app_pane_ParamLimits

0xa23b,	// (0x000424b7) cell_eswt_app_pane

0xa265,	// (0x000424e1) cell_eswt_app_pane_g1_ParamLimits

0xa265,	// (0x000424e1) cell_eswt_app_pane_g1

0xa294,	// (0x00042510) cell_eswt_app_pane_g2_ParamLimits

0xa294,	// (0x00042510) cell_eswt_app_pane_g2

0x0001,

0x0311,	// (0x0003858d) cell_eswt_app_pane_g_ParamLimits

0x0311,	// (0x0003858d) cell_eswt_app_pane_g

0xa2b8,	// (0x00042534) cell_eswt_app_pane_t1_ParamLimits

0xa2b8,	// (0x00042534) cell_eswt_app_pane_t1

0xe879,	// (0x00046af5) grid_highlight_pane_cp70_ParamLimits

0xe879,	// (0x00046af5) grid_highlight_pane_cp70

0xbc2a,	// (0x00043ea6) set_content_pane_g1

0xbf32,	// (0x000441ae) status_small_volume_pane

0x329b,	// (0x0003b517) status_small_volume_pane_g1

0x32a3,	// (0x0003b51f) volume_small2_pane

0x32ac,	// (0x0003b528) volume_small2_pane_g1

0x32b5,	// (0x0003b531) volume_small2_pane_g2

0x32be,	// (0x0003b53a) volume_small2_pane_g3

0x32c7,	// (0x0003b543) volume_small2_pane_g4

0x32d0,	// (0x0003b54c) volume_small2_pane_g5

0x32d9,	// (0x0003b555) volume_small2_pane_g6

0x32e2,	// (0x0003b55e) volume_small2_pane_g7

0x32eb,	// (0x0003b567) volume_small2_pane_g8

0x32f4,	// (0x0003b570) volume_small2_pane_g9

0x32fd,	// (0x0003b579) volume_small2_pane_g10

0x0009,

0xfb27,	// (0x00047da3) volume_small2_pane_g

0xe29d,	// (0x00046519) fep_vkb_top_text_pane_g1_ParamLimits

0xa1c6,	// (0x00042442) fep_vkb_top_text_pane_t1_ParamLimits

0xe4b7,	// (0x00046733) popup_preview_fixed_window_g3_ParamLimits

0xe4b7,	// (0x00046733) popup_preview_fixed_window_g3

0x878f,	// (0x00040a0b) popup_toolbar_trans_pane

0x9c2d,	// (0x00041ea9) aid_height_set_list_ParamLimits

0xbfa7,	// (0x00044223) aid_size_parent_ParamLimits

0xb38e,	// (0x0004360a) list_highlight_pane_cp2_ParamLimits

0xbc2a,	// (0x00043ea6) set_content_pane_g1_ParamLimits

0x8983,	// (0x00040bff) list_single_image_pane_ParamLimits

0x8983,	// (0x00040bff) list_single_image_pane

0xa2ea,	// (0x00042566) aid_size_cell_image_ParamLimits

0xa2ea,	// (0x00042566) aid_size_cell_image

0xa2f7,	// (0x00042573) grid_single_image_pane_ParamLimits

0xa2f7,	// (0x00042573) grid_single_image_pane

0xe885,	// (0x00046b01) list_single_image_pane_g1_ParamLimits

0xe885,	// (0x00046b01) list_single_image_pane_g1

0xe891,	// (0x00046b0d) list_single_image_pane_g2_ParamLimits

0xe891,	// (0x00046b0d) list_single_image_pane_g2

0x0001,

0xfb3c,	// (0x00047db8) list_single_image_pane_g_ParamLimits

0xfb3c,	// (0x00047db8) list_single_image_pane_g

0xe8a5,	// (0x00046b21) list_single_image_pane_t1_ParamLimits

0xe8a5,	// (0x00046b21) list_single_image_pane_t1

0xa303,	// (0x0004257f) cell_image_list_pane_ParamLimits

0xa303,	// (0x0004257f) cell_image_list_pane

0xa317,	// (0x00042593) cell_image_list_pane_g1

0xa320,	// (0x0004259c) cell_image_list_pane_g2

0x0001,

0x032b,	// (0x000385a7) cell_image_list_pane_g

0xe8bb,	// (0x00046b37) aid_size_cell_tb_trans_pane

0xb235,	// (0x000434b1) bg_tb_trans_pane

0xe8cd,	// (0x00046b49) grid_tb_trans_pane

0xc197,	// (0x00044413) bg_tb_trans_pane_g1

0xc19f,	// (0x0004441b) bg_tb_trans_pane_g2

0xc1a7,	// (0x00044423) bg_tb_trans_pane_g3

0xc1af,	// (0x0004442b) bg_tb_trans_pane_g4

0xc1b7,	// (0x00044433) bg_tb_trans_pane_g5

0xc1cf,	// (0x0004444b) bg_tb_trans_pane_g6

0xc1d7,	// (0x00044453) bg_tb_trans_pane_g7

0xc1bf,	// (0x0004443b) bg_tb_trans_pane_g8

0xc1c7,	// (0x00044443) bg_tb_trans_pane_g9

0x0008,

0xfb41,	// (0x00047dbd) bg_tb_trans_pane_g

0xe8e1,	// (0x00046b5d) cell_toolbar_trans_pane_ParamLimits

0xe8e1,	// (0x00046b5d) cell_toolbar_trans_pane

0xdfff,	// (0x0004627b) cell_toolbar_trans_pane_g1

0x9fa9,	// (0x00042225) list_form2_midp_pane_t1

0x9fb7,	// (0x00042233) list_form2_midp_pane_t2

0x0001,

0x023c,	// (0x000384b8) list_form2_midp_pane_t

0xdd5c,	// (0x00045fd8) scroll_pane_cp51_ParamLimits

0xded3,	// (0x0004614f) form2_midp_wait_pane_g1

0xdedc,	// (0x00046158) form2_midp_wait_pane_g2

0xdee5,	// (0x00046161) form2_midp_wait_pane_g3

0x0002,

0xfa15,	// (0x00047c91) form2_midp_wait_pane_g

0x8fa5,	// (0x00041221) list_highlight_pane_cp21_ParamLimits

0xdf05,	// (0x00046181) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xdf14,	// (0x00046190) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd350,	// (0x000455cc) list_single_2graphic_im_pane_ParamLimits

0xd350,	// (0x000455cc) list_single_2graphic_im_pane

0xe907,	// (0x00046b83) list_single_2graphic_im_pane_g1_ParamLimits

0xe907,	// (0x00046b83) list_single_2graphic_im_pane_g1

0xe918,	// (0x00046b94) list_single_2graphic_im_pane_g2_ParamLimits

0xe918,	// (0x00046b94) list_single_2graphic_im_pane_g2

0xe924,	// (0x00046ba0) list_single_2graphic_im_pane_g3_ParamLimits

0xe924,	// (0x00046ba0) list_single_2graphic_im_pane_g3

0x0003,

0xfb54,	// (0x00047dd0) list_single_2graphic_im_pane_g_ParamLimits

0xfb54,	// (0x00047dd0) list_single_2graphic_im_pane_g

0xe944,	// (0x00046bc0) list_single_2graphic_im_pane_t1_ParamLimits

0xe944,	// (0x00046bc0) list_single_2graphic_im_pane_t1

0xe4c3,	// (0x0004673f) list_single_graphic_2heading_pane_fp_ParamLimits

0xe4c3,	// (0x0004673f) list_single_graphic_2heading_pane_fp

0x10d5,	// (0x00039351) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x10d5,	// (0x00039351) list_single_graphic_2heading_pane_fp_g1

0xe4d9,	// (0x00046755) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xe4d9,	// (0x00046755) list_single_graphic_2heading_pane_fp_g2

0x9ac1,	// (0x00041d3d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x9ac1,	// (0x00041d3d) list_single_graphic_2heading_pane_fp_g3

0xb243,	// (0x000434bf) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xb243,	// (0x000434bf) list_single_graphic_2heading_pane_fp_g4

0xe4e5,	// (0x00046761) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xe4e5,	// (0x00046761) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfa8c,	// (0x00047d08) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfa8c,	// (0x00047d08) list_single_graphic_2heading_pane_fp_g

0x121e,	// (0x0003949a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x121e,	// (0x0003949a) list_single_graphic_2heading_pane_fp_t1

0x110d,	// (0x00039389) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x110d,	// (0x00039389) list_single_graphic_2heading_pane_fp_t2

0x1234,	// (0x000394b0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x1234,	// (0x000394b0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfb5d,	// (0x00047dd9) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfb5d,	// (0x00047dd9) list_single_graphic_2heading_pane_fp_t

0xe08b,	// (0x00046307) fep_hwr_write_pane_g5_ParamLimits

0xe08b,	// (0x00046307) fep_hwr_write_pane_g5

0xe097,	// (0x00046313) fep_hwr_write_pane_g6_ParamLimits

0xe097,	// (0x00046313) fep_hwr_write_pane_g6

0xe724,	// (0x000469a0) eswt_shell_pane_ParamLimits

0xc20b,	// (0x00044487) bg_popup_window_pane_cp18_ParamLimits

0xd281,	// (0x000454fd) heading_pane_cp70

0xe84e,	// (0x00046aca) popup_eswt_tasktip_window_t1_ParamLimits

0x951d,	// (0x00041799) aid_touch_tab_arrow_left

0x9533,	// (0x000417af) aid_touch_tab_arrow_right

0x79d1,	// (0x0003fc4d) title_pane_g3_ParamLimits

0x79d1,	// (0x0003fc4d) title_pane_g3

0xb1f4,	// (0x00043470) set_value_pane_g1

0x878f,	// (0x00040a0b) popup_toolbar_trans_pane_ParamLimits

0xe8bb,	// (0x00046b37) aid_size_cell_tb_trans_pane_ParamLimits

0xb235,	// (0x000434b1) bg_tb_trans_pane_ParamLimits

0xe8cd,	// (0x00046b49) grid_tb_trans_pane_ParamLimits

0x90d8,	// (0x00041354) cont_note_pane_ParamLimits

0x90d8,	// (0x00041354) cont_note_pane

0x9367,	// (0x000415e3) cont_snote2_single_text_pane_ParamLimits

0x9367,	// (0x000415e3) cont_snote2_single_text_pane

0x9367,	// (0x000415e3) cont_snote2_single_graphic_pane_ParamLimits

0x9367,	// (0x000415e3) cont_snote2_single_graphic_pane

0xc6ef,	// (0x0004496b) cont_note_wait_pane_ParamLimits

0xc6ef,	// (0x0004496b) cont_note_wait_pane

0xc6ef,	// (0x0004496b) cont_note_image_pane_ParamLimits

0xc6ef,	// (0x0004496b) cont_note_image_pane

0xe975,	// (0x00046bf1) popup_note2_window_g1_ParamLimits

0xe975,	// (0x00046bf1) popup_note2_window_g1

0xe9a6,	// (0x00046c22) popup_note2_window_t1_ParamLimits

0xe9a6,	// (0x00046c22) popup_note2_window_t1

0xe9eb,	// (0x00046c67) popup_note2_window_t2_ParamLimits

0xe9eb,	// (0x00046c67) popup_note2_window_t2

0xea30,	// (0x00046cac) popup_note2_window_t3_ParamLimits

0xea30,	// (0x00046cac) popup_note2_window_t3

0xea75,	// (0x00046cf1) popup_note2_window_t4_ParamLimits

0xea75,	// (0x00046cf1) popup_note2_window_t4

0x9150,	// (0x000413cc) popup_note2_window_t5_ParamLimits

0x9150,	// (0x000413cc) popup_note2_window_t5

0x0004,

0xfb69,	// (0x00047de5) popup_note2_window_t_ParamLimits

0xfb69,	// (0x00047de5) popup_note2_window_t

0xeaa4,	// (0x00046d20) popup_note2_image_window_g1_ParamLimits

0xeaa4,	// (0x00046d20) popup_note2_image_window_g1

0xeab0,	// (0x00046d2c) popup_note2_image_window_g2_ParamLimits

0xeab0,	// (0x00046d2c) popup_note2_image_window_g2

0x0001,

0xfb74,	// (0x00047df0) popup_note2_image_window_g_ParamLimits

0xfb74,	// (0x00047df0) popup_note2_image_window_g

0xeac2,	// (0x00046d3e) popup_note2_image_window_t1_ParamLimits

0xeac2,	// (0x00046d3e) popup_note2_image_window_t1

0xeada,	// (0x00046d56) popup_note2_image_window_t2_ParamLimits

0xeada,	// (0x00046d56) popup_note2_image_window_t2

0xeaf2,	// (0x00046d6e) popup_note2_image_window_t3_ParamLimits

0xeaf2,	// (0x00046d6e) popup_note2_image_window_t3

0x0002,

0xfb79,	// (0x00047df5) popup_note2_image_window_t_ParamLimits

0xfb79,	// (0x00047df5) popup_note2_image_window_t

0xc6fd,	// (0x00044979) popup_note2_wait_window_g1_ParamLimits

0xc6fd,	// (0x00044979) popup_note2_wait_window_g1

0xeb0e,	// (0x00046d8a) popup_note2_wait_window_g2_ParamLimits

0xeb0e,	// (0x00046d8a) popup_note2_wait_window_g2

0xc715,	// (0x00044991) popup_note2_wait_window_g3_ParamLimits

0xc715,	// (0x00044991) popup_note2_wait_window_g3

0x0002,

0xfb80,	// (0x00047dfc) popup_note2_wait_window_g_ParamLimits

0xfb80,	// (0x00047dfc) popup_note2_wait_window_g

0xeb1a,	// (0x00046d96) popup_note2_wait_window_t1_ParamLimits

0xeb1a,	// (0x00046d96) popup_note2_wait_window_t1

0xeb38,	// (0x00046db4) popup_note2_wait_window_t2_ParamLimits

0xeb38,	// (0x00046db4) popup_note2_wait_window_t2

0xeb56,	// (0x00046dd2) popup_note2_wait_window_t3_ParamLimits

0xeb56,	// (0x00046dd2) popup_note2_wait_window_t3

0xeb68,	// (0x00046de4) popup_note2_wait_window_t4_ParamLimits

0xeb68,	// (0x00046de4) popup_note2_wait_window_t4

0x0003,

0xfb87,	// (0x00047e03) popup_note2_wait_window_t_ParamLimits

0xfb87,	// (0x00047e03) popup_note2_wait_window_t

0xeb7a,	// (0x00046df6) wait_bar2_pane_ParamLimits

0xeb7a,	// (0x00046df6) wait_bar2_pane

0xeb92,	// (0x00046e0e) popup_snote2_single_text_window_g1_ParamLimits

0xeb92,	// (0x00046e0e) popup_snote2_single_text_window_g1

0xebba,	// (0x00046e36) popup_snote2_single_text_window_t1_ParamLimits

0xebba,	// (0x00046e36) popup_snote2_single_text_window_t1

0xec06,	// (0x00046e82) popup_snote2_single_text_window_t2_ParamLimits

0xec06,	// (0x00046e82) popup_snote2_single_text_window_t2

0xec52,	// (0x00046ece) popup_snote2_single_text_window_t3_ParamLimits

0xec52,	// (0x00046ece) popup_snote2_single_text_window_t3

0xec93,	// (0x00046f0f) popup_snote2_single_text_window_t4_ParamLimits

0xec93,	// (0x00046f0f) popup_snote2_single_text_window_t4

0xecc9,	// (0x00046f45) popup_snote2_single_text_window_t5_ParamLimits

0xecc9,	// (0x00046f45) popup_snote2_single_text_window_t5

0x0004,

0xfb90,	// (0x00047e0c) popup_snote2_single_text_window_t_ParamLimits

0xfb90,	// (0x00047e0c) popup_snote2_single_text_window_t

0xecf4,	// (0x00046f70) popup_snote2_single_graphic_window_g1_ParamLimits

0xecf4,	// (0x00046f70) popup_snote2_single_graphic_window_g1

0xed1c,	// (0x00046f98) popup_snote2_single_graphic_window_g2_ParamLimits

0xed1c,	// (0x00046f98) popup_snote2_single_graphic_window_g2

0x0001,

0xfb9b,	// (0x00047e17) popup_snote2_single_graphic_window_g_ParamLimits

0xfb9b,	// (0x00047e17) popup_snote2_single_graphic_window_g

0xed44,	// (0x00046fc0) popup_snote2_single_graphic_window_t1_ParamLimits

0xed44,	// (0x00046fc0) popup_snote2_single_graphic_window_t1

0xed90,	// (0x0004700c) popup_snote2_single_graphic_window_t2_ParamLimits

0xed90,	// (0x0004700c) popup_snote2_single_graphic_window_t2

0xec52,	// (0x00046ece) popup_snote2_single_graphic_window_t3_ParamLimits

0xec52,	// (0x00046ece) popup_snote2_single_graphic_window_t3

0xec93,	// (0x00046f0f) popup_snote2_single_graphic_window_t4_ParamLimits

0xec93,	// (0x00046f0f) popup_snote2_single_graphic_window_t4

0xecc9,	// (0x00046f45) popup_snote2_single_graphic_window_t5_ParamLimits

0xecc9,	// (0x00046f45) popup_snote2_single_graphic_window_t5

0x0004,

0xfba0,	// (0x00047e1c) popup_snote2_single_graphic_window_t_ParamLimits

0xfba0,	// (0x00047e1c) popup_snote2_single_graphic_window_t

0xdcf0,	// (0x00045f6c) clock_nsta_pane_cp2_t1

0xdcf0,	// (0x00045f6c) clock_nsta_pane_cp2_t2

0x0001,

0xf9f2,	// (0x00047c6e) clock_nsta_pane_cp2_t

0x0a96,	// (0x00038d12) form_field_data_wide_pane_g1_ParamLimits

0x9ac1,	// (0x00041d3d) form_field_data_wide_pane_g2_ParamLimits

0x9ac1,	// (0x00041d3d) form_field_data_wide_pane_g2

0xb243,	// (0x000434bf) form_field_data_wide_pane_g3_ParamLimits

0xb243,	// (0x000434bf) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x000478fd) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x000478fd) form_field_data_wide_pane_g

0x9edd,	// (0x00042159) grid_touch_3_pane_ParamLimits

0x9edd,	// (0x00042159) grid_touch_3_pane

0xa329,	// (0x000425a5) cell_touch_3_pane_ParamLimits

0xa329,	// (0x000425a5) cell_touch_3_pane

0xdfff,	// (0x0004627b) cell_touch_3_pane_g1

0xdfff,	// (0x0004627b) cell_touch_3_pane_g2

0x0001,

0xfa4f,	// (0x00047ccb) cell_touch_3_pane_g

0x9182,	// (0x000413fe) cont_query_data_pane

0x918a,	// (0x00041406) cont_query_data_pane_cp1

0xeddc,	// (0x00047058) button_value_adjust_pane_cp7

0xede4,	// (0x00047060) query_popup_pane_cp3

0xb898,	// (0x00043b14) bg_popup_sub_pane_cp22_ParamLimits

0x1f01,	// (0x0003a17d) navi_navi_volume_pane_cp2

0x1f19,	// (0x0003a195) popup_side_volume_key_window_g2

0x1f25,	// (0x0003a1a1) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x00047993) popup_side_volume_key_window_g

0x1f3f,	// (0x0003a1bb) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x0004799a) popup_side_volume_key_window_t

0xbaf6,	// (0x00043d72) popup_side_volume_key_window_ParamLimits

0x71a9,	// (0x0003f425) list_double_graphic_pane_g4_ParamLimits

0x71a9,	// (0x0003f425) list_double_graphic_pane_g4

0x9d93,	// (0x0004200f) list_single_2heading_msg_pane_ParamLimits

0x9d93,	// (0x0004200f) list_single_2heading_msg_pane

0x89f6,	// (0x00040c72) list_single_2heading_msg_pane_g1_ParamLimits

0x89f6,	// (0x00040c72) list_single_2heading_msg_pane_g1

0x8a02,	// (0x00040c7e) list_single_2heading_msg_pane_g2_ParamLimits

0x8a02,	// (0x00040c7e) list_single_2heading_msg_pane_g2

0x8a15,	// (0x00040c91) list_single_2heading_msg_pane_g3_ParamLimits

0x8a15,	// (0x00040c91) list_single_2heading_msg_pane_g3

0x331e,	// (0x0003b59a) list_single_2heading_msg_pane_g4_ParamLimits

0x331e,	// (0x0003b59a) list_single_2heading_msg_pane_g4

0x0003,

0xfbab,	// (0x00047e27) list_single_2heading_msg_pane_g_ParamLimits

0xfbab,	// (0x00047e27) list_single_2heading_msg_pane_g

0x1254,	// (0x000394d0) list_single_2heading_msg_pane_t1_ParamLimits

0x1254,	// (0x000394d0) list_single_2heading_msg_pane_t1

0x767d,	// (0x0003f8f9) list_single_2heading_msg_pane_t2_ParamLimits

0x767d,	// (0x0003f8f9) list_single_2heading_msg_pane_t2

0x76e8,	// (0x0003f964) list_single_2heading_msg_pane_t3_ParamLimits

0x76e8,	// (0x0003f964) list_single_2heading_msg_pane_t3

0x12e9,	// (0x00039565) list_single_2heading_msg_pane_t4_ParamLimits

0x12e9,	// (0x00039565) list_single_2heading_msg_pane_t4

0x0003,

0xfbb4,	// (0x00047e30) list_single_2heading_msg_pane_t_ParamLimits

0xfbb4,	// (0x00047e30) list_single_2heading_msg_pane_t

0x8f43,	// (0x000411bf) title_pane_g4_ParamLimits

0x8f43,	// (0x000411bf) title_pane_g4

0x1bf2,	// (0x00039e6e) title_pane_stacon_g3_ParamLimits

0x1bf2,	// (0x00039e6e) title_pane_stacon_g3

0xe938,	// (0x00046bb4) list_single_2graphic_im_pane_g4_ParamLimits

0xe938,	// (0x00046bb4) list_single_2graphic_im_pane_g4

0xd09c,	// (0x00045318) popup_side_volume_key_window_cp

0xd5be,	// (0x0004583a) main_idle_act2_pane_t1

0x29c6,	// (0x0003ac42) toolbar_button_pane_g10

0x7cdb,	// (0x0003ff57) popup_toolbar_window_cp1

0xdce1,	// (0x00045f5d) clock_nsta_pane_cp_t1

0xdce1,	// (0x00045f5d) clock_nsta_pane_cp_t2

0x0001,

0xf9ed,	// (0x00047c69) clock_nsta_pane_cp_t

0x1f01,	// (0x0003a17d) navi_navi_volume_pane_cp2_ParamLimits

0x1f0d,	// (0x0003a189) popup_side_volume_key_window_g1_ParamLimits

0x1f19,	// (0x0003a195) popup_side_volume_key_window_g2_ParamLimits

0x1f25,	// (0x0003a1a1) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x00047993) popup_side_volume_key_window_g_ParamLimits

0x2f27,	// (0x0003b1a3) fep_hwr_aid_pane

0x99c8,	// (0x00041c44) bg_fep_hwr_top_pane_g4_ParamLimits

0xe05b,	// (0x000462d7) fep_hwr_top_pane_g1_ParamLimits

0xe06d,	// (0x000462e9) fep_hwr_top_pane_g2_ParamLimits

0x2fe0,	// (0x0003b25c) fep_hwr_top_pane_g3_ParamLimits

0xfa26,	// (0x00047ca2) fep_hwr_top_pane_g_ParamLimits

0x2ff5,	// (0x0003b271) fep_hwr_top_text_pane_ParamLimits

0xce5f,	// (0x000450db) aid_touch_tab_arrow_arrow_2

0xce68,	// (0x000450e4) aid_touch_tab_arrow_left_2

0x2f3b,	// (0x0003b1b7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2f72,	// (0x0003b1ee) fep_hwr_prediction_pane

0xe158,	// (0x000463d4) fep_vkb_prediction_pane

0xa1a6,	// (0x00042422) fep_vkb_side_pane_g3_ParamLimits

0xa1a6,	// (0x00042422) fep_vkb_side_pane_g3

0xe190,	// (0x0004640c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xe539,	// (0x000467b5) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xe546,	// (0x000467c2) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfac4,	// (0x00047d40) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xedf5,	// (0x00047071) fep_hwr_prediction_pane_g1

0x3336,	// (0x0003b5b2) fep_hwr_prediction_pane_g2

0x333e,	// (0x0003b5ba) fep_hwr_prediction_pane_g3

0x3346,	// (0x0003b5c2) fep_hwr_prediction_pane_g4

0x0003,

0xfbbd,	// (0x00047e39) fep_hwr_prediction_pane_g

0xedf5,	// (0x00047071) fep_vkb_prediction_pane_g1

0xedff,	// (0x0004707b) fep_vkb_prediction_pane_g2

0xee07,	// (0x00047083) fep_vkb_prediction_pane_g3

0xee0f,	// (0x0004708b) fep_vkb_prediction_pane_g4

0x0003,

0xfbc6,	// (0x00047e42) fep_vkb_prediction_pane_g

0xd39a,	// (0x00045616) slider_set_pane_g3

0xd3ae,	// (0x0004562a) slider_set_pane_g4

0xd3c6,	// (0x00045642) slider_set_pane_g5

0xd39a,	// (0x00045616) slider_set_pane_g6

0x2c92,	// (0x0003af0e) slider_set_pane_g7

0xd306,	// (0x00045582) slider_form_pane_g3

0xd30f,	// (0x0004558b) slider_form_pane_g4

0xd317,	// (0x00045593) slider_form_pane_g5

0xd306,	// (0x00045582) slider_form_pane_g6

0x9d74,	// (0x00041ff0) slider_form_pane_g7

0xd84e,	// (0x00045aca) slider_set_pane_vc_g3

0xd857,	// (0x00045ad3) slider_set_pane_vc_g4

0xd860,	// (0x00045adc) slider_set_pane_vc_g5

0xd84e,	// (0x00045aca) slider_set_pane_vc_g6

0xd869,	// (0x00045ae5) slider_set_pane_vc_g7

0xda19,	// (0x00045c95) slider_form_pane_vc_g1

0xda22,	// (0x00045c9e) slider_form_pane_vc_g2

0xda2b,	// (0x00045ca7) slider_form_pane_vc_g3

0xda19,	// (0x00045c95) slider_form_pane_vc_g4

0xda34,	// (0x00045cb0) slider_form_pane_vc_g5

0x0004,

0xf9c4,	// (0x00047c40) slider_form_pane_vc_g

0x8f25,	// (0x000411a1) main_idle_act3_pane

0xee17,	// (0x00047093) ai3_links_pane

0xa372,	// (0x000425ee) popup_ai3_data_window_ParamLimits

0xa372,	// (0x000425ee) popup_ai3_data_window

0x8f25,	// (0x000411a1) grid_ai3_links_pane

0xa38a,	// (0x00042606) cell_ai3_links_pane_ParamLimits

0xa38a,	// (0x00042606) cell_ai3_links_pane

0xee20,	// (0x0004709c) bg_popup_sub_pane_cp11

0xee2d,	// (0x000470a9) cell_ai3_links_pane_g1

0x8f25,	// (0x000411a1) bg_popup_sub_pane_cp12

0xee52,	// (0x000470ce) heading_ai3_data_pane

0xee5a,	// (0x000470d6) list_ai3_gene_pane

0xee66,	// (0x000470e2) popup_ai3_data_window_g1

0xee6e,	// (0x000470ea) heading_ai3_data_pane_g1

0xee76,	// (0x000470f2) heading_ai3_data_pane_t1

0xee84,	// (0x00047100) list_double_ai3_gene_pane_ParamLimits

0xee84,	// (0x00047100) list_double_ai3_gene_pane

0xee91,	// (0x0004710d) list_single_ai3_gene_pane_ParamLimits

0xee91,	// (0x0004710d) list_single_ai3_gene_pane

0xdfc4,	// (0x00046240) list_highlight_pane_cp7_ParamLimits

0xdfc4,	// (0x00046240) list_highlight_pane_cp7

0xee9e,	// (0x0004711a) list_single_a13_gene_pane_t1_ParamLimits

0xee9e,	// (0x0004711a) list_single_a13_gene_pane_t1

0xeeb5,	// (0x00047131) list_single_ai3_gene_pane_g1

0xeebe,	// (0x0004713a) list_single_ai3_gene_pane_g2

0x0001,

0xfbcf,	// (0x00047e4b) list_single_ai3_gene_pane_g

0xeec6,	// (0x00047142) list_double_ai3_gene_pane_g1_ParamLimits

0xeec6,	// (0x00047142) list_double_ai3_gene_pane_g1

0xeed2,	// (0x0004714e) list_double_ai3_gene_pane_t1_ParamLimits

0xeed2,	// (0x0004714e) list_double_ai3_gene_pane_t1

0xeeee,	// (0x0004716a) list_double_ai3_gene_pane_t2_ParamLimits

0xeeee,	// (0x0004716a) list_double_ai3_gene_pane_t2

0xef03,	// (0x0004717f) list_double_ai3_gene_pane_t3_ParamLimits

0xef03,	// (0x0004717f) list_double_ai3_gene_pane_t3

0x0002,

0xfbd4,	// (0x00047e50) list_double_ai3_gene_pane_t_ParamLimits

0xfbd4,	// (0x00047e50) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x124a,	// (0x000394c6) aid_size_min_col_2

0xa35c,	// (0x000425d8) aid_size_min_msg_ParamLimits

0xa35c,	// (0x000425d8) aid_size_min_msg

0xa1ba,	// (0x00042436) fep_vkb_top_text_pane_g2_ParamLimits

0xa1ba,	// (0x00042436) fep_vkb_top_text_pane_g2

0x0001,

0x026a,	// (0x000384e6) fep_vkb_top_text_pane_g_ParamLimits

0x026a,	// (0x000384e6) fep_vkb_top_text_pane_g

0x8f25,	// (0x000411a1) main_hc_apps_shell_pane

0xef20,	// (0x0004719c) grid_hc_apps_pane_ParamLimits

0xef20,	// (0x0004719c) grid_hc_apps_pane

0xef2f,	// (0x000471ab) list_hc_apps_pane

0xef37,	// (0x000471b3) scroll_pane_cp37_ParamLimits

0xef37,	// (0x000471b3) scroll_pane_cp37

0xa3a4,	// (0x00042620) cell_hc_apps_pane_ParamLimits

0xa3a4,	// (0x00042620) cell_hc_apps_pane

0xa462,	// (0x000426de) cell_hc_apps_pane_g1_ParamLimits

0xa462,	// (0x000426de) cell_hc_apps_pane_g1

0xef43,	// (0x000471bf) cell_hc_apps_pane_g2_ParamLimits

0xef43,	// (0x000471bf) cell_hc_apps_pane_g2

0xef5f,	// (0x000471db) cell_hc_apps_pane_g3_ParamLimits

0xef5f,	// (0x000471db) cell_hc_apps_pane_g3

0x0002,

0x0370,	// (0x000385ec) cell_hc_apps_pane_g_ParamLimits

0x0370,	// (0x000385ec) cell_hc_apps_pane_g

0xa48f,	// (0x0004270b) cell_hc_apps_pane_t1_ParamLimits

0xa48f,	// (0x0004270b) cell_hc_apps_pane_t1

0x90d8,	// (0x00041354) grid_highlight_pane_cp10_ParamLimits

0x90d8,	// (0x00041354) grid_highlight_pane_cp10

0xa4cd,	// (0x00042749) list_single_hc_apps_pane_ParamLimits

0xa4cd,	// (0x00042749) list_single_hc_apps_pane

0xa4fe,	// (0x0004277a) list_single_hc_apps_pane_g1

0x8a21,	// (0x00040c9d) list_single_hc_apps_pane_g2

0x0001,

0xfbdb,	// (0x00047e57) list_single_hc_apps_pane_g

0x8a3a,	// (0x00040cb6) list_single_hc_apps_pane_g2_copy1

0x7756,	// (0x0003f9d2) list_single_hc_apps_pane_t1

0x8fa5,	// (0x00041221) bg_set_opt_pane_cp_ParamLimits

0x1812,	// (0x00039a8e) setting_slider_pane_t1_ParamLimits

0x182b,	// (0x00039aa7) setting_slider_pane_t2_ParamLimits

0x1845,	// (0x00039ac1) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x000477e0) setting_slider_pane_t_ParamLimits

0x185d,	// (0x00039ad9) slider_set_pane_ParamLimits

0x22ca,	// (0x0003a546) control_pane_g5_ParamLimits

0x22ca,	// (0x0003a546) control_pane_g5

0xd2c8,	// (0x00045544) slider_set_pane_g1_ParamLimits

0x2c86,	// (0x0003af02) slider_set_pane_g2_ParamLimits

0xd39a,	// (0x00045616) slider_set_pane_g3_ParamLimits

0xd3ae,	// (0x0004562a) slider_set_pane_g4_ParamLimits

0xd3c6,	// (0x00045642) slider_set_pane_g5_ParamLimits

0xd39a,	// (0x00045616) slider_set_pane_g6_ParamLimits

0x2c92,	// (0x0003af0e) slider_set_pane_g7_ParamLimits

0xf8bf,	// (0x00047b3b) slider_set_pane_g_ParamLimits

0xbbd5,	// (0x00043e51) navi_icon_text_pane_ParamLimits

0x94e6,	// (0x00041762) aid_fill_nsta_2_ParamLimits

0x951d,	// (0x00041799) aid_touch_tab_arrow_left_ParamLimits

0x9533,	// (0x000417af) aid_touch_tab_arrow_right_ParamLimits

0x95ce,	// (0x0004184a) clock_nsta_pane_ParamLimits

0xce41,	// (0x000450bd) navi_icon_pane_g1_ParamLimits

0xce4d,	// (0x000450c9) navi_text_pane_t1_ParamLimits

0xdd36,	// (0x00045fb2) navi_icon_text_pane_g1_ParamLimits

0xdd42,	// (0x00045fbe) navi_icon_text_pane_t1_ParamLimits

0xa4fe,	// (0x0004277a) list_single_hc_apps_pane_g1_ParamLimits

0x8a21,	// (0x00040c9d) list_single_hc_apps_pane_g2_ParamLimits

0xfbdb,	// (0x00047e57) list_single_hc_apps_pane_g_ParamLimits

0x8a3a,	// (0x00040cb6) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7756,	// (0x0003f9d2) list_single_hc_apps_pane_t1_ParamLimits

0x78d6,	// (0x0003fb52) popup_toolbar2_fixed_window_ParamLimits

0x78d6,	// (0x0003fb52) popup_toolbar2_fixed_window

0x8785,	// (0x00040a01) popup_toolbar2_float_window

0x8f25,	// (0x000411a1) bg_popup_sub_pane_cp27

0xef81,	// (0x000471fd) grid_toolbar2_float_pane

0x8f25,	// (0x000411a1) bg_popup_sub_pane_cp26

0xef81,	// (0x000471fd) grid_toolbar2_fixed_pane

0xa517,	// (0x00042793) cell_toolbar2_fixed_pane_ParamLimits

0xa517,	// (0x00042793) cell_toolbar2_fixed_pane

0xa532,	// (0x000427ae) cell_toolbar2_fixed_pane_g1

0xc117,	// (0x00044393) toolbar2_fixed_button_pane

0xc197,	// (0x00044413) toolbar2_fixed_button_pane_g1

0xc19f,	// (0x0004441b) toolbar2_fixed_button_pane_g2

0xc1a7,	// (0x00044423) toolbar2_fixed_button_pane_g3

0xc1af,	// (0x0004442b) toolbar2_fixed_button_pane_g4

0xc1b7,	// (0x00044433) toolbar2_fixed_button_pane_g5

0xc1bf,	// (0x0004443b) toolbar2_fixed_button_pane_g6

0xc1c7,	// (0x00044443) toolbar2_fixed_button_pane_g7

0xc1cf,	// (0x0004444b) toolbar2_fixed_button_pane_g8

0xc1d7,	// (0x00044453) toolbar2_fixed_button_pane_g9

0x0008,

0xf813,	// (0x00047a8f) toolbar2_fixed_button_pane_g

0xef89,	// (0x00047205) cell_toolbar2_float_pane_ParamLimits

0xef89,	// (0x00047205) cell_toolbar2_float_pane

0xef9d,	// (0x00047219) cell_toolbar2_float_pane_g1

0xc117,	// (0x00044393) toolbar2_fixed_button_pane_cp

0xa0a2,	// (0x0004231e) fep_vkb_accented_list_pane_ParamLimits

0xa0a2,	// (0x0004231e) fep_vkb_accented_list_pane

0x3143,	// (0x0003b3bf) bg_popup_fep_shadow_pane_g9

0xbd49,	// (0x00043fc5) bg_popup_fep_shadow_pane_cp3

0xb33c,	// (0x000435b8) list_accented_list_pane

0xefa6,	// (0x00047222) list_single_accented_list_pane_ParamLimits

0xefa6,	// (0x00047222) list_single_accented_list_pane

0xbd49,	// (0x00043fc5) list_highlight_pane_cp10

0xefb7,	// (0x00047233) list_single_accented_list_pane_t1

0x86af,	// (0x0004092b) popup_slider_window_ParamLimits

0x86af,	// (0x0004092b) popup_slider_window

0xedec,	// (0x00047068) aid_indentation_list_msg

0xa62b,	// (0x000428a7) bg_popup_window_pane_cp19

0xf023,	// (0x0004729f) popup_slider_window_g1

0xf03f,	// (0x000472bb) popup_slider_window_g2

0xf05b,	// (0x000472d7) popup_slider_window_g3

0x0005,

0x037c,	// (0x000385f8) popup_slider_window_g

0xf077,	// (0x000472f3) popup_slider_window_t1

0xf0bd,	// (0x00047339) small_volume_slider_vertical_pane

0xdfff,	// (0x0004627b) small_volume_slider_vertical_pane_g1

0xdfff,	// (0x0004627b) small_volume_slider_vertical_pane_g2

0xf0d9,	// (0x00047355) small_volume_slider_vertical_pane_g3

0x0002,

0xfbe5,	// (0x00047e61) small_volume_slider_vertical_pane_g

0x7844,	// (0x0003fac0) area_side_right_pane_ParamLimits

0x7844,	// (0x0003fac0) area_side_right_pane

0x8a56,	// (0x00040cd2) aid_size_side_button_ParamLimits

0x8a56,	// (0x00040cd2) aid_size_side_button

0x8a6f,	// (0x00040ceb) grid_sctrl_middle_pane_ParamLimits

0x8a6f,	// (0x00040ceb) grid_sctrl_middle_pane

0x33b6,	// (0x0003b632) sctrl_sk_bottom_pane

0x33c7,	// (0x0003b643) sctrl_sk_top_pane

0x33d9,	// (0x0003b655) aid_touch_sctrl_top

0x90d8,	// (0x00041354) bg_sctrl_sk_pane_ParamLimits

0x90d8,	// (0x00041354) bg_sctrl_sk_pane

0x33e6,	// (0x0003b662) sctrl_sk_top_pane_g1

0x33f3,	// (0x0003b66f) sctrl_sk_top_pane_t1

0x33d9,	// (0x0003b655) aid_touch_sctrl_bottom

0x90d8,	// (0x00041354) bg_sctrl_sk_pane_cp_ParamLimits

0x90d8,	// (0x00041354) bg_sctrl_sk_pane_cp

0x340e,	// (0x0003b68a) sctrl_sk_bottom_pane_g1

0x33f3,	// (0x0003b66f) sctrl_sk_bottom_pane_t1

0x8a89,	// (0x00040d05) cell_sctrl_middle_pane_ParamLimits

0x8a89,	// (0x00040d05) cell_sctrl_middle_pane

0x8a9a,	// (0x00040d16) aid_touch_sctrl_middle_ParamLimits

0x8a9a,	// (0x00040d16) aid_touch_sctrl_middle

0x8aa7,	// (0x00040d23) bg_sctrl_middle_pane_ParamLimits

0x8aa7,	// (0x00040d23) bg_sctrl_middle_pane

0xf0e2,	// (0x0004735e) cell_sctrl_middle_pane_g1_ParamLimits

0xf0e2,	// (0x0004735e) cell_sctrl_middle_pane_g1

0x8ab5,	// (0x00040d31) cell_sctrl_middle_pane_g2_ParamLimits

0x8ab5,	// (0x00040d31) cell_sctrl_middle_pane_g2

0x0001,

0xfbf1,	// (0x00047e6d) cell_sctrl_middle_pane_g_ParamLimits

0xfbf1,	// (0x00047e6d) cell_sctrl_middle_pane_g

0xc197,	// (0x00044413) bg_sctrl_middle_pane_g1

0xc19f,	// (0x0004441b) bg_sctrl_middle_pane_g2

0xc1a7,	// (0x00044423) bg_sctrl_middle_pane_g3

0xc1af,	// (0x0004442b) bg_sctrl_middle_pane_g4

0xc1b7,	// (0x00044433) bg_sctrl_middle_pane_g5

0xc1bf,	// (0x0004443b) bg_sctrl_middle_pane_g6

0xc1c7,	// (0x00044443) bg_sctrl_middle_pane_g7

0xc1cf,	// (0x0004444b) bg_sctrl_middle_pane_g8

0x0007,

0xfbf6,	// (0x00047e72) bg_sctrl_middle_pane_g

0xc1d7,	// (0x00044453) bg_sctrl_middle_pane_g8_copy1

0xc197,	// (0x00044413) bg_sctrl_sk_pane_g1

0xc19f,	// (0x0004441b) bg_sctrl_sk_pane_g2

0xc1a7,	// (0x00044423) bg_sctrl_sk_pane_g3

0x0008,

0xf813,	// (0x00047a8f) bg_sctrl_sk_pane_g

0x9a53,	// (0x00041ccf) aid_size_touch_scroll_bar

0xc1af,	// (0x0004442b) bg_sctrl_sk_pane_g4

0xc1b7,	// (0x00044433) bg_sctrl_sk_pane_g5

0xc1bf,	// (0x0004443b) bg_sctrl_sk_pane_g6

0xc1c7,	// (0x00044443) bg_sctrl_sk_pane_g7

0xc1cf,	// (0x0004444b) bg_sctrl_sk_pane_g8

0xc1d7,	// (0x00044453) bg_sctrl_sk_pane_g9

0x248d,	// (0x0003a709) popup_fep_china_hwr2_fs_candidate_window

0x81dd,	// (0x00040459) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x81dd,	// (0x00040459) popup_fep_china_hwr2_fs_control_window

0xe190,	// (0x0004640c) sctrl_sk_top_pane_g2

0x0001,

0xfbec,	// (0x00047e68) sctrl_sk_top_pane_g

0xa6e3,	// (0x0004295f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xa6e3,	// (0x0004295f) aid_fep_china_hwr2_fs_cell

0xa6f7,	// (0x00042973) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xa6f7,	// (0x00042973) bg_popup_fep_shadow_pane_cp4

0xa70e,	// (0x0004298a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xa70e,	// (0x0004298a) bg_popup_fep_shadow_pane_cp5

0xa720,	// (0x0004299c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xa720,	// (0x0004299c) popup_fep_china_hwr2_fs_control_bar_grid

0xa734,	// (0x000429b0) popup_fep_china_hwr2_fs_control_funtion_grid

0xf0f0,	// (0x0004736c) aid_fep_china_hwr2_fs_candi_cell

0x8f25,	// (0x000411a1) bg_popup_fep_shadow_pane_cp6

0xf0fa,	// (0x00047376) popup_fep_china_hwr2_fs_candidate_grid

0xa73c,	// (0x000429b8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xa73c,	// (0x000429b8) cell_fep_china_hwr2_fs_funtion_grid

0xdfff,	// (0x0004627b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xf0e2,	// (0x0004735e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xf0e2,	// (0x0004735e) cell_fep_china_hwr2_fs_funtion_grid_g1

0xf104,	// (0x00047380) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xf104,	// (0x00047380) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfc07,	// (0x00047e83) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfc07,	// (0x00047e83) cell_fep_china_hwr2_fs_funtion_grid_g

0xa754,	// (0x000429d0) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xa754,	// (0x000429d0) cell_fep_china_hwr2_fs_funtion_grid_t1

0xa769,	// (0x000429e5) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xa769,	// (0x000429e5) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x0398,	// (0x00038614) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x0398,	// (0x00038614) cell_fep_china_hwr2_fs_funtion_grid_t

0xf11a,	// (0x00047396) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xf122,	// (0x0004739e) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xf12a,	// (0x000473a6) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfc0c,	// (0x00047e88) popup_fep_china_hwr2_fs_control_bar_grid_g

0xf132,	// (0x000473ae) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xf132,	// (0x000473ae) cell_fep_china_hwr2_fs_candidate_grid

0xf14b,	// (0x000473c7) popup_fep_china_hwr2_fs_candidate_grid_g20

0xf153,	// (0x000473cf) popup_fep_china_hwr2_fs_candidate_grid_g21

0xdfff,	// (0x0004627b) cell_fep_china_hwr2_fs_candidate_grid_g1

0xdfff,	// (0x0004627b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfa4f,	// (0x00047ccb) cell_fep_china_hwr2_fs_candidate_grid_g

0xf15b,	// (0x000473d7) cell_fep_china_hwr2_fs_candidate_grid_t1

0xbfe4,	// (0x00044260) clock_nsta_pane_cp_24_ParamLimits

0xbfe4,	// (0x00044260) clock_nsta_pane_cp_24

0xc04c,	// (0x000442c8) indicator_nsta_pane_cp_24_ParamLimits

0xc04c,	// (0x000442c8) indicator_nsta_pane_cp_24

0xcd3d,	// (0x00044fb9) heading_pane_g1

0x0001,

0xf83b,	// (0x00047ab7) heading_pane_g

0xd44b,	// (0x000456c7) grid_sct_catagory_button_pane

0xd11b,	// (0x00045397) scroll_pane_cp5_ParamLimits

0xdd68,	// (0x00045fe4) button_value_adjust_pane_cp5_ParamLimits

0xdd68,	// (0x00045fe4) button_value_adjust_pane_cp5

0xde26,	// (0x000460a2) form2_midp_time_pane_ParamLimits

0xf169,	// (0x000473e5) cell_sct_catagory_button_pane_ParamLimits

0xf169,	// (0x000473e5) cell_sct_catagory_button_pane

0xdfc4,	// (0x00046240) bg_button_pane_cp01_ParamLimits

0xdfc4,	// (0x00046240) bg_button_pane_cp01

0xdfff,	// (0x0004627b) cell_sct_catagory_button_pane_g1

0x8728,	// (0x000409a4) popup_tb_extension_window

0xa785,	// (0x00042a01) aid_size_cell_ext_ParamLimits

0xa785,	// (0x00042a01) aid_size_cell_ext

0x9367,	// (0x000415e3) bg_tb_trans_pane_cp1_ParamLimits

0x9367,	// (0x000415e3) bg_tb_trans_pane_cp1

0xa7ab,	// (0x00042a27) grid_tb_ext_pane_ParamLimits

0xa7ab,	// (0x00042a27) grid_tb_ext_pane

0xa7ed,	// (0x00042a69) cell_tb_ext_pane_ParamLimits

0xa7ed,	// (0x00042a69) cell_tb_ext_pane

0xa815,	// (0x00042a91) cell_tb_ext_pane_g1_ParamLimits

0xa815,	// (0x00042a91) cell_tb_ext_pane_g1

0xf17b,	// (0x000473f7) cell_tb_ext_pane_t1

0x90d8,	// (0x00041354) list_highlight_pane_cp11_ParamLimits

0x90d8,	// (0x00041354) list_highlight_pane_cp11

0x78eb,	// (0x0003fb67) popup_uni_indicator_window_ParamLimits

0x78eb,	// (0x0003fb67) popup_uni_indicator_window

0xb235,	// (0x000434b1) bg_popup_sub_pane_cp14

0xf196,	// (0x00047412) list_uniindi_pane

0xf1a2,	// (0x0004741e) uniindi_top_pane

0x90d8,	// (0x00041354) bg_uniindi_top_pane

0xf1c1,	// (0x0004743d) uniindi_top_pane_g1

0xf1d7,	// (0x00047453) uniindi_top_pane_g2

0x0003,

0xfc13,	// (0x00047e8f) uniindi_top_pane_g

0xf201,	// (0x0004747d) uniindi_top_pane_t1

0xf22b,	// (0x000474a7) list_single_uniindi_pane_ParamLimits

0xf22b,	// (0x000474a7) list_single_uniindi_pane

0xdfff,	// (0x0004627b) bg_uniindi_top_pane_g1

0xf23e,	// (0x000474ba) list_single_uniindi_pane_g1

0xf251,	// (0x000474cd) list_single_uniindi_pane_t1

0x8f25,	// (0x000411a1) control_bg_pane

0xf276,	// (0x000474f2) bg_sctrl_sk_pane_cp1

0xf27f,	// (0x000474fb) bg_sctrl_sk_pane_cp2

0xf288,	// (0x00047504) control_bg_pane_g1

0xf291,	// (0x0004750d) control_bg_pane_g2

0x0001,

0xfc1c,	// (0x00047e98) control_bg_pane_g

0xdc2c,	// (0x00045ea8) cell_indicator_nsta_pane_g1_ParamLimits

0x9f10,	// (0x0004218c) cell_indicator_nsta_pane_g2_ParamLimits

0x0212,	// (0x0003848e) cell_indicator_nsta_pane_g_ParamLimits

0x10ab,	// (0x00039327) form2_midp_time_pane_t1_ParamLimits

0x2f19,	// (0x0003b195) main_idle_act4_pane_ParamLimits

0x2f19,	// (0x0003b195) main_idle_act4_pane

0x8728,	// (0x000409a4) popup_tb_extension_window_ParamLimits

0xa7d3,	// (0x00042a4f) tb_ext_find_pane_ParamLimits

0xa7d3,	// (0x00042a4f) tb_ext_find_pane

0xf29a,	// (0x00047516) ai_gene_pane_1_cp1

0xbddd,	// (0x00044059) ai_gene_pane_2_cp1

0xf2a2,	// (0x0004751e) list_single_idle_plugin_calendar_pane

0xf2ab,	// (0x00047527) list_single_idle_plugin_notification_pane

0xf2b4,	// (0x00047530) list_single_idle_plugin_player_pane

0xa832,	// (0x00042aae) list_single_idle_plugin_shortcut_pane_ParamLimits

0xa832,	// (0x00042aae) list_single_idle_plugin_shortcut_pane

0xa85a,	// (0x00042ad6) main_idle_act4_pane_t1

0xa870,	// (0x00042aec) main_idle_act4_pane_t2

0x0001,

0x039d,	// (0x00038619) main_idle_act4_pane_t

0xa888,	// (0x00042b04) middle_sk_idle_act4_pane_ParamLimits

0xa888,	// (0x00042b04) middle_sk_idle_act4_pane

0xa8a4,	// (0x00042b20) popup_clock_digital_analogue_window_cp2

0xa8cb,	// (0x00042b47) shortcut_wheel_idle_act4_pane_ParamLimits

0xa8cb,	// (0x00042b47) shortcut_wheel_idle_act4_pane

0xdfff,	// (0x0004627b) shortcut_wheel_idle_act4_pane_g1

0xdfff,	// (0x0004627b) shortcut_wheel_idle_act4_pane_g2

0xdfff,	// (0x0004627b) shortcut_wheel_idle_act4_pane_g3

0xdfff,	// (0x0004627b) shortcut_wheel_idle_act4_pane_g4

0xdfff,	// (0x0004627b) shortcut_wheel_idle_act4_pane_g5

0xf2bd,	// (0x00047539) shortcut_wheel_idle_act4_pane_g6

0xf2c5,	// (0x00047541) shortcut_wheel_idle_act4_pane_g7

0xf2cd,	// (0x00047549) shortcut_wheel_idle_act4_pane_g8

0xf2d5,	// (0x00047551) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfc21,	// (0x00047e9d) shortcut_wheel_idle_act4_pane_g

0x99c8,	// (0x00041c44) middle_sk_idle_act4_pane_g1_ParamLimits

0x99c8,	// (0x00041c44) middle_sk_idle_act4_pane_g1

0xa948,	// (0x00042bc4) middle_sk_idle_act4_pane_g2_ParamLimits

0xa948,	// (0x00042bc4) middle_sk_idle_act4_pane_g2

0x0001,

0xfc34,	// (0x00047eb0) middle_sk_idle_act4_pane_g_ParamLimits

0xfc34,	// (0x00047eb0) middle_sk_idle_act4_pane_g

0xa960,	// (0x00042bdc) middle_sk_idle_act4_pane_t1_ParamLimits

0xa960,	// (0x00042bdc) middle_sk_idle_act4_pane_t1

0xa98f,	// (0x00042c0b) grid_ai_shortcut_pane_ParamLimits

0xa98f,	// (0x00042c0b) grid_ai_shortcut_pane

0xa9ac,	// (0x00042c28) list_highlight_pane_cp16_ParamLimits

0xa9ac,	// (0x00042c28) list_highlight_pane_cp16

0xa9b9,	// (0x00042c35) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xa9b9,	// (0x00042c35) list_single_idle_plugin_shortcut_pane_g1

0xa9c5,	// (0x00042c41) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xa9c5,	// (0x00042c41) list_single_idle_plugin_shortcut_pane_g2

0xa9e1,	// (0x00042c5d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xa9e1,	// (0x00042c5d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x03b7,	// (0x00038633) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x03b7,	// (0x00038633) list_single_idle_plugin_shortcut_pane_g

0xa9f6,	// (0x00042c72) cell_ai_shortcut_pane_ParamLimits

0xa9f6,	// (0x00042c72) cell_ai_shortcut_pane

0xaa0c,	// (0x00042c88) cell_ai_shortcut_pane_g1_ParamLimits

0xaa0c,	// (0x00042c88) cell_ai_shortcut_pane_g1

0xf29a,	// (0x00047516) ai_gene_pane_1_cp2

0xf2dd,	// (0x00047559) ai_gene_pane_2_cp2

0xf2e5,	// (0x00047561) list_highlight_pane_cp15

0xf2ee,	// (0x0004756a) list_single_idle_plugin_calendar_pane_g1

0xf2e5,	// (0x00047561) list_highlight_pane_cp17

0xf2f6,	// (0x00047572) list_single_idle_plugin_calendar_pane_g1_copy1

0xf2fe,	// (0x0004757a) list_single_idle_plugin_player_pane_g1

0xd678,	// (0x000458f4) list_single_idle_plugin_player_pane_g2

0x0001,

0xfc39,	// (0x00047eb5) list_single_idle_plugin_player_pane_g

0xf306,	// (0x00047582) list_single_idle_plugin_player_pane_t1

0xf314,	// (0x00047590) list_single_idle_plugin_player_pane_t2

0xf322,	// (0x0004759e) list_single_idle_plugin_player_pane_t3

0xf330,	// (0x000475ac) list_single_idle_plugin_player_pane_t4

0x0003,

0xfc3e,	// (0x00047eba) list_single_idle_plugin_player_pane_t

0xf33e,	// (0x000475ba) wait_bar_pane_cp15

0xf346,	// (0x000475c2) grid_ai_notification_pane

0xd678,	// (0x000458f4) list_single_idle_plugin_notification_pane_g1

0xaa2e,	// (0x00042caa) cell_ai_notification_pane_ParamLimits

0xaa2e,	// (0x00042caa) cell_ai_notification_pane

0xf34f,	// (0x000475cb) cell_ai_notification_pane_g1

0xf357,	// (0x000475d3) cell_ai_notification_pane_t1

0xaa3b,	// (0x00042cb7) tb_ext_find_button_pane

0xaa43,	// (0x00042cbf) tb_ext_find_pane_g1

0xaa4b,	// (0x00042cc7) tb_ext_find_pane_t1

0xb837,	// (0x00043ab3) tb_ext_find_button_pane_g1

0xf365,	// (0x000475e1) tb_ext_find_button_pane_g2

0x0001,

0xfc47,	// (0x00047ec3) tb_ext_find_button_pane_g

0xa85a,	// (0x00042ad6) main_idle_act4_pane_t1_ParamLimits

0xa870,	// (0x00042aec) main_idle_act4_pane_t2_ParamLimits

0x039d,	// (0x00038619) main_idle_act4_pane_t_ParamLimits

0xa8a4,	// (0x00042b20) popup_clock_digital_analogue_window_cp2_ParamLimits

0xa8bb,	// (0x00042b37) sat_plugin_idle_act4_pane_ParamLimits

0xa8bb,	// (0x00042b37) sat_plugin_idle_act4_pane

0xaa59,	// (0x00042cd5) sat_plugin_idle_act4_pane_t1_ParamLimits

0xaa59,	// (0x00042cd5) sat_plugin_idle_act4_pane_t1

0xaa71,	// (0x00042ced) sat_plugin_idle_act4_pane_t2_ParamLimits

0xaa71,	// (0x00042ced) sat_plugin_idle_act4_pane_t2

0xaa89,	// (0x00042d05) sat_plugin_idle_act4_pane_t3_ParamLimits

0xaa89,	// (0x00042d05) sat_plugin_idle_act4_pane_t3

0xaaa1,	// (0x00042d1d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xaaa1,	// (0x00042d1d) sat_plugin_idle_act4_pane_t4

0x0003,

0x03be,	// (0x0003863a) sat_plugin_idle_act4_pane_t_ParamLimits

0x03be,	// (0x0003863a) sat_plugin_idle_act4_pane_t

0x15ce,	// (0x0003984a) popup_battery_window_ParamLimits

0x15ce,	// (0x0003984a) popup_battery_window

0x90d8,	// (0x00041354) bg_popup_sub_pane_cp25_ParamLimits

0x90d8,	// (0x00041354) bg_popup_sub_pane_cp25

0xf36e,	// (0x000475ea) popup_battery_window_g1_ParamLimits

0xf36e,	// (0x000475ea) popup_battery_window_g1

0xf37a,	// (0x000475f6) popup_battery_window_t1_ParamLimits

0xf37a,	// (0x000475f6) popup_battery_window_t1

0xf38c,	// (0x00047608) popup_battery_window_t2_ParamLimits

0xf38c,	// (0x00047608) popup_battery_window_t2

0x0001,

0xfc4c,	// (0x00047ec8) popup_battery_window_t_ParamLimits

0xfc4c,	// (0x00047ec8) popup_battery_window_t

0x7f1b,	// (0x00040197) midp_canvas_pane_ParamLimits

0x7f78,	// (0x000401f4) midp_keypad_pane_ParamLimits

0x7f78,	// (0x000401f4) midp_keypad_pane

0xb38e,	// (0x0004360a) main_midp_pane_ParamLimits

0xdcff,	// (0x00045f7b) signal_pane_g2_cp_ParamLimits

0xaab9,	// (0x00042d35) aid_size_cell_midp_keypad_ParamLimits

0xaab9,	// (0x00042d35) aid_size_cell_midp_keypad

0xaad7,	// (0x00042d53) midp_keyp_game_grid_pane_ParamLimits

0xaad7,	// (0x00042d53) midp_keyp_game_grid_pane

0xaafe,	// (0x00042d7a) midp_keyp_rocker_pane_ParamLimits

0xaafe,	// (0x00042d7a) midp_keyp_rocker_pane

0xab47,	// (0x00042dc3) midp_keyp_sk_left_pane_ParamLimits

0xab47,	// (0x00042dc3) midp_keyp_sk_left_pane

0xab99,	// (0x00042e15) midp_keyp_sk_right_pane_ParamLimits

0xab99,	// (0x00042e15) midp_keyp_sk_right_pane

0x8f25,	// (0x000411a1) bg_button_pane_cp03

0xabeb,	// (0x00042e67) midp_keyp_sk_left_pane_g1

0x8f25,	// (0x000411a1) bg_button_pane_cp04

0xabeb,	// (0x00042e67) midp_keyp_sk_right_pane_g1

0xdfff,	// (0x0004627b) midp_keyp_rocker_pane_g1

0xabf4,	// (0x00042e70) keyp_game_cell_pane_ParamLimits

0xabf4,	// (0x00042e70) keyp_game_cell_pane

0x8f25,	// (0x000411a1) bg_button_pane_cp02

0xac18,	// (0x00042e94) keyp_game_cell_pane_g1

0x7886,	// (0x0003fb02) popup_fep_vkb2_window_ParamLimits

0x7886,	// (0x0003fb02) popup_fep_vkb2_window

0x8ac1,	// (0x00040d3d) aid_size_cell_vkb2_ParamLimits

0x8ac1,	// (0x00040d3d) aid_size_cell_vkb2

0x8af7,	// (0x00040d73) popup_fep_vkb2_window_g1_ParamLimits

0x8af7,	// (0x00040d73) popup_fep_vkb2_window_g1

0x8b47,	// (0x00040dc3) vkb2_area_bottom_pane_ParamLimits

0x8b47,	// (0x00040dc3) vkb2_area_bottom_pane

0x8b9b,	// (0x00040e17) vkb2_area_keypad_pane_ParamLimits

0x8b9b,	// (0x00040e17) vkb2_area_keypad_pane

0x8be3,	// (0x00040e5f) vkb2_area_top_pane_ParamLimits

0x8be3,	// (0x00040e5f) vkb2_area_top_pane

0x8c69,	// (0x00040ee5) vkb2_top_entry_pane_ParamLimits

0x8c69,	// (0x00040ee5) vkb2_top_entry_pane

0x8c96,	// (0x00040f12) vkb2_top_grid_left_pane_ParamLimits

0x8c96,	// (0x00040f12) vkb2_top_grid_left_pane

0x8cb6,	// (0x00040f32) vkb2_top_grid_right_pane_ParamLimits

0x8cb6,	// (0x00040f32) vkb2_top_grid_right_pane

0x366c,	// (0x0003b8e8) vkb2_cell_keypad_pane_ParamLimits

0x366c,	// (0x0003b8e8) vkb2_cell_keypad_pane

0x8cfc,	// (0x00040f78) vkb2_area_bottom_grid_pane_ParamLimits

0x8cfc,	// (0x00040f78) vkb2_area_bottom_grid_pane

0x8d26,	// (0x00040fa2) vkb2_area_bottom_pane_g1_ParamLimits

0x8d26,	// (0x00040fa2) vkb2_area_bottom_pane_g1

0x8d4c,	// (0x00040fc8) vkb2_area_bottom_pane_g2_ParamLimits

0x8d4c,	// (0x00040fc8) vkb2_area_bottom_pane_g2

0x8d7d,	// (0x00040ff9) vkb2_area_bottom_pane_g3_ParamLimits

0x8d7d,	// (0x00040ff9) vkb2_area_bottom_pane_g3

0x0002,

0xfc51,	// (0x00047ecd) vkb2_area_bottom_pane_g_ParamLimits

0xfc51,	// (0x00047ecd) vkb2_area_bottom_pane_g

0x3816,	// (0x0003ba92) vkb2_top_cell_left_pane_ParamLimits

0x3816,	// (0x0003ba92) vkb2_top_cell_left_pane

0xac21,	// (0x00042e9d) vkb2_top_entry_pane_g1_ParamLimits

0xac21,	// (0x00042e9d) vkb2_top_entry_pane_g1

0xac2f,	// (0x00042eab) vkb2_top_entry_pane_t1_ParamLimits

0xac2f,	// (0x00042eab) vkb2_top_entry_pane_t1

0xf3b1,	// (0x0004762d) vkb2_top_entry_pane_t2_ParamLimits

0xf3b1,	// (0x0004762d) vkb2_top_entry_pane_t2

0xf3e3,	// (0x0004765f) vkb2_top_entry_pane_t3_ParamLimits

0xf3e3,	// (0x0004765f) vkb2_top_entry_pane_t3

0x0002,

0xfc58,	// (0x00047ed4) vkb2_top_entry_pane_t_ParamLimits

0xfc58,	// (0x00047ed4) vkb2_top_entry_pane_t

0x8de7,	// (0x00041063) vkb2_top_grid_right_pane_g1_ParamLimits

0x8de7,	// (0x00041063) vkb2_top_grid_right_pane_g1

0x3879,	// (0x0003baf5) vkb2_top_grid_right_pane_g2_ParamLimits

0x3879,	// (0x0003baf5) vkb2_top_grid_right_pane_g2

0x3891,	// (0x0003bb0d) vkb2_top_grid_right_pane_g3_ParamLimits

0x3891,	// (0x0003bb0d) vkb2_top_grid_right_pane_g3

0x8dfd,	// (0x00041079) vkb2_top_grid_right_pane_g4_ParamLimits

0x8dfd,	// (0x00041079) vkb2_top_grid_right_pane_g4

0x0003,

0xfc5f,	// (0x00047edb) vkb2_top_grid_right_pane_g_ParamLimits

0xfc5f,	// (0x00047edb) vkb2_top_grid_right_pane_g

0x38bf,	// (0x0003bb3b) vkb2_top_cell_left_pane_g1

0x38d6,	// (0x0003bb52) vkb2_cell_keypad_pane_g1_ParamLimits

0x38d6,	// (0x0003bb52) vkb2_cell_keypad_pane_g1

0xf407,	// (0x00047683) vkb2_cell_keypad_pane_t1_ParamLimits

0xf407,	// (0x00047683) vkb2_cell_keypad_pane_t1

0x38e4,	// (0x0003bb60) vkb2_cell_bottom_grid_pane_ParamLimits

0x38e4,	// (0x0003bb60) vkb2_cell_bottom_grid_pane

0x391d,	// (0x0003bb99) vkb2_cell_bottom_grid_pane_g1

0xa8ec,	// (0x00042b68) aid_call2_pane_cp02

0xa8f4,	// (0x00042b70) aid_call_pane_cp02

0xa8fc,	// (0x00042b78) clock_digital_number_pane_cp10

0xa904,	// (0x00042b80) clock_digital_number_pane_cp11

0xa90c,	// (0x00042b88) clock_digital_number_pane_cp12

0xa914,	// (0x00042b90) clock_digital_number_pane_cp13

0xa91c,	// (0x00042b98) clock_digital_separator_pane_cp10

0xb837,	// (0x00043ab3) popup_clock_digital_analogue_window_cp2_g1

0xb837,	// (0x00043ab3) popup_clock_digital_analogue_window_cp2_g2

0xa924,	// (0x00042ba0) popup_clock_digital_analogue_window_cp2_g3

0xb837,	// (0x00043ab3) popup_clock_digital_analogue_window_cp2_g4

0xa924,	// (0x00042ba0) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0x03a2,	// (0x0003861e) popup_clock_digital_analogue_window_cp2_g

0xa92c,	// (0x00042ba8) popup_clock_digital_analogue_window_cp2_t1

0xa93a,	// (0x00042bb6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x03ad,	// (0x00038629) popup_clock_digital_analogue_window_cp2_t

0xdfff,	// (0x0004627b) clock_digital_number_pane_cp10_g1

0xdfff,	// (0x0004627b) clock_digital_number_pane_cp10_g2

0x0001,

0xfa4f,	// (0x00047ccb) clock_digital_number_pane_cp10_g

0xdfff,	// (0x0004627b) clock_digital_separator_pane_cp10_g1

0xdfff,	// (0x0004627b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfa4f,	// (0x00047ccb) clock_digital_separator_pane_cp10_g

0xf1e3,	// (0x0004745f) uniindi_top_pane_g3

0xf1f4,	// (0x00047470) uniindi_top_pane_g4

0x36f7,	// (0x0003b973) vkb2_row_keypad_pane_ParamLimits

0x36f7,	// (0x0003b973) vkb2_row_keypad_pane

0x393d,	// (0x0003bbb9) vkb2_cell_t_keypad_pane_ParamLimits

0x393d,	// (0x0003bbb9) vkb2_cell_t_keypad_pane

0x394d,	// (0x0003bbc9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x394d,	// (0x0003bbc9) vkb2_cell_t_keypad_pane_cp08

0x3960,	// (0x0003bbdc) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x3960,	// (0x0003bbdc) vkb2_cell_t_keypad_pane_cp09

0x3974,	// (0x0003bbf0) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x3974,	// (0x0003bbf0) vkb2_cell_t_keypad_pane_cp01

0x3985,	// (0x0003bc01) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x3985,	// (0x0003bc01) vkb2_cell_t_keypad_pane_cp02

0x3996,	// (0x0003bc12) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x3996,	// (0x0003bc12) vkb2_cell_t_keypad_pane_cp03

0x39a7,	// (0x0003bc23) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x39a7,	// (0x0003bc23) vkb2_cell_t_keypad_pane_cp04

0x39b8,	// (0x0003bc34) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x39b8,	// (0x0003bc34) vkb2_cell_t_keypad_pane_cp05

0x39c9,	// (0x0003bc45) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x39c9,	// (0x0003bc45) vkb2_cell_t_keypad_pane_cp06

0x39da,	// (0x0003bc56) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x39da,	// (0x0003bc56) vkb2_cell_t_keypad_pane_cp07

0x39eb,	// (0x0003bc67) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x39eb,	// (0x0003bc67) vkb2_cell_t_keypad_pane_cp10

0xe190,	// (0x0004640c) vkb2_cell_t_keypad_pane_g1

0xf41e,	// (0x0004769a) vkb2_cell_t_keypad_pane_t1

0x8f25,	// (0x000411a1) popup_grid_graphic2_window

0xac68,	// (0x00042ee4) aid_size_cell_graphic2_ParamLimits

0xac68,	// (0x00042ee4) aid_size_cell_graphic2

0xacb3,	// (0x00042f2f) bg_popup_window_pane_cp21_ParamLimits

0xacb3,	// (0x00042f2f) bg_popup_window_pane_cp21

0xacc1,	// (0x00042f3d) graphic2_pages_pane_ParamLimits

0xacc1,	// (0x00042f3d) graphic2_pages_pane

0xad17,	// (0x00042f93) grid_graphic2_control_pane_ParamLimits

0xad17,	// (0x00042f93) grid_graphic2_control_pane

0xad5f,	// (0x00042fdb) grid_graphic2_pane_ParamLimits

0xad5f,	// (0x00042fdb) grid_graphic2_pane

0xade6,	// (0x00043062) cell_graphic2_pane

0x8f25,	// (0x000411a1) main_comp_mode_pane

0xee5a,	// (0x000470d6) list_ai3_gene_pane_ParamLimits

0xa62b,	// (0x000428a7) bg_popup_window_pane_cp19_ParamLimits

0xefc5,	// (0x00047241) bg_touch_area_indi_pane_ParamLimits

0xefc5,	// (0x00047241) bg_touch_area_indi_pane

0xefdb,	// (0x00047257) bg_touch_area_indi_pane_cp01_ParamLimits

0xefdb,	// (0x00047257) bg_touch_area_indi_pane_cp01

0xeff1,	// (0x0004726d) bg_touch_area_indi_pane_cp02_ParamLimits

0xeff1,	// (0x0004726d) bg_touch_area_indi_pane_cp02

0xf009,	// (0x00047285) bg_touch_area_indi_pane_cp03_ParamLimits

0xf009,	// (0x00047285) bg_touch_area_indi_pane_cp03

0xf023,	// (0x0004729f) popup_slider_window_g1_ParamLimits

0xf03f,	// (0x000472bb) popup_slider_window_g2_ParamLimits

0xf05b,	// (0x000472d7) popup_slider_window_g3_ParamLimits

0x037c,	// (0x000385f8) popup_slider_window_g_ParamLimits

0xf077,	// (0x000472f3) popup_slider_window_t1_ParamLimits

0xf0bd,	// (0x00047339) small_volume_slider_vertical_pane_ParamLimits

0xade6,	// (0x00043062) cell_graphic2_pane_ParamLimits

0xae43,	// (0x000430bf) bg_button_pane_cp10_ParamLimits

0xae43,	// (0x000430bf) bg_button_pane_cp10

0xae56,	// (0x000430d2) bg_button_pane_cp11_ParamLimits

0xae56,	// (0x000430d2) bg_button_pane_cp11

0xae69,	// (0x000430e5) graphic2_pages_pane_g1_ParamLimits

0xae69,	// (0x000430e5) graphic2_pages_pane_g1

0xae84,	// (0x00043100) graphic2_pages_pane_g2_ParamLimits

0xae84,	// (0x00043100) graphic2_pages_pane_g2

0x0001,

0x03e3,	// (0x0003865f) graphic2_pages_pane_g_ParamLimits

0x03e3,	// (0x0003865f) graphic2_pages_pane_g

0xae9c,	// (0x00043118) graphic2_pages_pane_t1_ParamLimits

0xae9c,	// (0x00043118) graphic2_pages_pane_t1

0xaeb4,	// (0x00043130) cell_graphic2_control_pane_ParamLimits

0xaeb4,	// (0x00043130) cell_graphic2_control_pane

0xaee6,	// (0x00043162) cell_graphic2_pane_g1_ParamLimits

0xaee6,	// (0x00043162) cell_graphic2_pane_g1

0x99d6,	// (0x00041c52) cell_graphic2_pane_g2_ParamLimits

0x99d6,	// (0x00041c52) cell_graphic2_pane_g2

0xaca6,	// (0x00042f22) cell_graphic2_pane_g3_ParamLimits

0xaca6,	// (0x00042f22) cell_graphic2_pane_g3

0x99e3,	// (0x00041c5f) cell_graphic2_pane_g4_ParamLimits

0x99e3,	// (0x00041c5f) cell_graphic2_pane_g4

0xaef3,	// (0x0004316f) cell_graphic2_pane_g5_ParamLimits

0xaef3,	// (0x0004316f) cell_graphic2_pane_g5

0x0004,

0xfc68,	// (0x00047ee4) cell_graphic2_pane_g_ParamLimits

0xfc68,	// (0x00047ee4) cell_graphic2_pane_g

0xaf13,	// (0x0004318f) cell_graphic2_pane_t1_ParamLimits

0xaf13,	// (0x0004318f) cell_graphic2_pane_t1

0xcd31,	// (0x00044fad) grid_highlight_pane_cp11_ParamLimits

0xcd31,	// (0x00044fad) grid_highlight_pane_cp11

0x90d8,	// (0x00041354) bg_button_pane_cp05

0xaf47,	// (0x000431c3) cell_graphic2_control_pane_g1

0xdfff,	// (0x0004627b) bg_touch_area_indi_pane_g1

0xf430,	// (0x000476ac) aid_cmod_rocker_key_size

0xf43a,	// (0x000476b6) aid_cmode_itu_key_size

0xf444,	// (0x000476c0) main_cmode_video_pane

0xf44e,	// (0x000476ca) main_comp_mode_itu_pane

0xf45a,	// (0x000476d6) main_comp_mode_rocker_pane

0xf466,	// (0x000476e2) cell_cmode_rocker_pane_ParamLimits

0xf466,	// (0x000476e2) cell_cmode_rocker_pane

0xf478,	// (0x000476f4) cell_cmode_itu_pane_ParamLimits

0xf478,	// (0x000476f4) cell_cmode_itu_pane

0xb235,	// (0x000434b1) bg_button_pane_cp06_ParamLimits

0xb235,	// (0x000434b1) bg_button_pane_cp06

0xe190,	// (0x0004640c) cell_cmode_rocker_pane_g1_ParamLimits

0xe190,	// (0x0004640c) cell_cmode_rocker_pane_g1

0xf0e2,	// (0x0004735e) cell_cmode_rocker_pane_g2_ParamLimits

0xf0e2,	// (0x0004735e) cell_cmode_rocker_pane_g2

0x0001,

0xfc73,	// (0x00047eef) cell_cmode_rocker_pane_g_ParamLimits

0xfc73,	// (0x00047eef) cell_cmode_rocker_pane_g

0x8f25,	// (0x000411a1) bg_button_pane_cp07

0xf48d,	// (0x00047709) cell_cmode_itu_pane_g1

0xf496,	// (0x00047712) cell_cmode_itu_pane_t1

0xf4a4,	// (0x00047720) cell_cmode_itu_pane_t2

0x0001,

0xfc78,	// (0x00047ef4) cell_cmode_itu_pane_t

0xf266,	// (0x000474e2) aid_touch_ctrl_left

0xf26e,	// (0x000474ea) aid_touch_ctrl_right

0x8f25,	// (0x000411a1) compa_mode_pane

0xaf6b,	// (0x000431e7) aid_cmod_rocker_key_size_cp

0xaf75,	// (0x000431f1) aid_cmode_itu_key_size_cp

0xf4b2,	// (0x0004772e) compa_mode_pane_g1

0xf4ba,	// (0x00047736) compa_mode_pane_g2

0xf4c2,	// (0x0004773e) compa_mode_pane_g3

0x0002,

0xfc7d,	// (0x00047ef9) compa_mode_pane_g

0xaf7f,	// (0x000431fb) main_comp_mode_itu_pane_cp

0xaf87,	// (0x00043203) main_comp_mode_rocker_pane_cp

0xaf8f,	// (0x0004320b) cell_cmode_itu_pane_cp_ParamLimits

0xaf8f,	// (0x0004320b) cell_cmode_itu_pane_cp

0xafa4,	// (0x00043220) cell_cmode_rocker_pane_cp_ParamLimits

0xafa4,	// (0x00043220) cell_cmode_rocker_pane_cp

0xb235,	// (0x000434b1) bg_button_pane_cp06_cp_ParamLimits

0xb235,	// (0x000434b1) bg_button_pane_cp06_cp

0xe190,	// (0x0004640c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe190,	// (0x0004640c) cell_cmode_rocker_pane_g1_cp

0xdfff,	// (0x0004627b) cell_cmode_rocker_pane_g2_cp

0x8f25,	// (0x000411a1) bg_button_pane_cp07_cp

0xafb6,	// (0x00043232) cell_cmode_itu_pane_g1_cp

0xafbf,	// (0x0004323b) cell_cmode_itu_pane_t1_cp

0xafbf,	// (0x0004323b) cell_cmode_itu_pane_t2_cp

0x9d6a,	// (0x00041fe6) settings_code_pane_cp2

0x8fa5,	// (0x00041221) bg_popup_window_pane_cp3_ParamLimits

0x92a6,	// (0x00041522) heading_pane_cp3_ParamLimits

0x92b2,	// (0x0004152e) listscroll_popup_graphic_pane_ParamLimits

0x2f27,	// (0x0003b1a3) fep_hwr_aid_pane_ParamLimits

0x33d9,	// (0x0003b655) aid_touch_sctrl_top_ParamLimits

0x33e6,	// (0x0003b662) sctrl_sk_top_pane_g1_ParamLimits

0xe190,	// (0x0004640c) sctrl_sk_top_pane_g2_ParamLimits

0xfbec,	// (0x00047e68) sctrl_sk_top_pane_g_ParamLimits

0x33f3,	// (0x0003b66f) sctrl_sk_top_pane_t1_ParamLimits

0x33d9,	// (0x0003b655) aid_touch_sctrl_bottom_ParamLimits

0x33f3,	// (0x0003b66f) sctrl_sk_bottom_pane_t1_ParamLimits

0xf1af,	// (0x0004742b) aid_area_touch_clock

0x8c2b,	// (0x00040ea7) aid_vkb2_area_top_pane_cell_ParamLimits

0x8c2b,	// (0x00040ea7) aid_vkb2_area_top_pane_cell

0x8cd6,	// (0x00040f52) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8cd6,	// (0x00040f52) aid_vkb2_area_bottom_pane_cell

0xf3a9,	// (0x00047625) popup_char_count_window

0xf4ca,	// (0x00047746) popup_char_count_window_g1

0xf4d3,	// (0x0004774f) popup_char_count_window_g2

0xf4dc,	// (0x00047758) popup_char_count_window_g3

0x0002,

0xfc84,	// (0x00047f00) popup_char_count_window_g

0xf4e5,	// (0x00047761) popup_char_count_window_t1

0x3494,	// (0x0003b710) popup_fep_char_preview_window_ParamLimits

0x3494,	// (0x0003b710) popup_fep_char_preview_window

0x8c4b,	// (0x00040ec7) vkb2_top_candi_pane_ParamLimits

0x8c4b,	// (0x00040ec7) vkb2_top_candi_pane

0xafcd,	// (0x00043249) cell_vkb2_top_candi_pane_ParamLimits

0xafcd,	// (0x00043249) cell_vkb2_top_candi_pane

0xc6ef,	// (0x0004496b) bg_popup_fep_char_preview_window_ParamLimits

0xc6ef,	// (0x0004496b) bg_popup_fep_char_preview_window

0x3a00,	// (0x0003bc7c) popup_fep_char_preview_window_t1_ParamLimits

0x3a00,	// (0x0003bc7c) popup_fep_char_preview_window_t1

0xf4f3,	// (0x0004776f) bg_popup_fep_char_preview_window_g1

0xf4fb,	// (0x00047777) bg_popup_fep_char_preview_window_g2

0xf503,	// (0x0004777f) bg_popup_fep_char_preview_window_g3

0xf50b,	// (0x00047787) bg_popup_fep_char_preview_window_g4

0xf513,	// (0x0004778f) bg_popup_fep_char_preview_window_g5

0x3a3a,	// (0x0003bcb6) bg_popup_fep_char_preview_window_g6

0xf51b,	// (0x00047797) bg_popup_fep_char_preview_window_g7

0xf523,	// (0x0004779f) bg_popup_fep_char_preview_window_g8

0xf52b,	// (0x000477a7) bg_popup_fep_char_preview_window_g9

0x0008,

0xfc8b,	// (0x00047f07) bg_popup_fep_char_preview_window_g

0xe190,	// (0x0004640c) cell_vkb2_top_candi_pane_g1_ParamLimits

0xe190,	// (0x0004640c) cell_vkb2_top_candi_pane_g1

0xe3cf,	// (0x0004664b) cell_vkb2_top_candi_pane_g2_ParamLimits

0xe3cf,	// (0x0004664b) cell_vkb2_top_candi_pane_g2

0xe3f0,	// (0x0004666c) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe3f0,	// (0x0004666c) cell_vkb2_top_candi_pane_g3

0x3a42,	// (0x0003bcbe) cell_vkb2_top_candi_pane_g4_ParamLimits

0x3a42,	// (0x0003bcbe) cell_vkb2_top_candi_pane_g4

0xf533,	// (0x000477af) cell_vkb2_top_candi_pane_g5_ParamLimits

0xf533,	// (0x000477af) cell_vkb2_top_candi_pane_g5

0xf0e2,	// (0x0004735e) cell_vkb2_top_candi_pane_g6_ParamLimits

0xf0e2,	// (0x0004735e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfc9e,	// (0x00047f1a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfc9e,	// (0x00047f1a) cell_vkb2_top_candi_pane_g

0x3a63,	// (0x0003bcdf) cell_vkb2_top_candi_pane_t1

0x2c72,	// (0x0003aeee) aid_size_touch_slider_mark_ParamLimits

0x2c72,	// (0x0003aeee) aid_size_touch_slider_mark

0xacfd,	// (0x00042f79) grid_graphic2_catg_pane_ParamLimits

0xacfd,	// (0x00042f79) grid_graphic2_catg_pane

0xadb9,	// (0x00043035) popup_grid_graphic2_window_t1_ParamLimits

0xadb9,	// (0x00043035) popup_grid_graphic2_window_t1

0xadcf,	// (0x0004304b) popup_grid_graphic2_window_t2_ParamLimits

0xadcf,	// (0x0004304b) popup_grid_graphic2_window_t2

0x0001,

0x03de,	// (0x0003865a) popup_grid_graphic2_window_t_ParamLimits

0x03de,	// (0x0003865a) popup_grid_graphic2_window_t

0x90d8,	// (0x00041354) bg_button_pane_cp05_ParamLimits

0xaf47,	// (0x000431c3) cell_graphic2_control_pane_g1_ParamLimits

0xb033,	// (0x000432af) cell_graphic2_catg_pane_ParamLimits

0xb033,	// (0x000432af) cell_graphic2_catg_pane

0x8f25,	// (0x000411a1) bg_button_pane_cp12

0xb045,	// (0x000432c1) cell_graphic2_catg_pane_g1

0xf17b,	// (0x000473f7) cell_tb_ext_pane_t1_ParamLimits

0x3836,	// (0x0003bab2) vkb2_top_cell_right_narrow_pane_ParamLimits

0x3836,	// (0x0003bab2) vkb2_top_cell_right_narrow_pane

0x384e,	// (0x0003baca) vkb2_top_cell_right_wide_pane_ParamLimits

0x384e,	// (0x0003baca) vkb2_top_cell_right_wide_pane

0x2f19,	// (0x0003b195) bg_vkb2_func_pane_ParamLimits

0x2f19,	// (0x0003b195) bg_vkb2_func_pane

0x38bf,	// (0x0003bb3b) vkb2_top_cell_left_pane_g1_ParamLimits

0x2f19,	// (0x0003b195) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2f19,	// (0x0003b195) bg_vkb2_fuc_pane_cp03

0x391d,	// (0x0003bb99) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xc19f,	// (0x0004441b) bg_vkb2_func_pane_g1

0xc1a7,	// (0x00044423) bg_vkb2_func_pane_g2

0xc1b7,	// (0x00044433) bg_vkb2_func_pane_g3

0xc1af,	// (0x0004442b) bg_vkb2_func_pane_g4

0xc1bf,	// (0x0004443b) bg_vkb2_func_pane_g5

0xc1c7,	// (0x00044443) bg_vkb2_func_pane_g6

0xc1cf,	// (0x0004444b) bg_vkb2_func_pane_g7

0xc1d7,	// (0x00044453) bg_vkb2_func_pane_g8

0xc197,	// (0x00044413) bg_vkb2_func_pane_g9

0x0008,

0xfcab,	// (0x00047f27) bg_vkb2_func_pane_g

0x2f19,	// (0x0003b195) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2f19,	// (0x0003b195) bg_vkb2_fuc_pane_cp01

0x38bf,	// (0x0003bb3b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x38bf,	// (0x0003bb3b) vkb2_top_cell_right_wide_pane_g1

0x2f19,	// (0x0003b195) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2f19,	// (0x0003b195) bg_vkb2_fuc_pane_cp02

0x391d,	// (0x0003bb99) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x391d,	// (0x0003bb99) vkb2_top_cell_right_narrow_pane_g1

0xa565,	// (0x000427e1) aid_touch_area_decrease_ParamLimits

0xa565,	// (0x000427e1) aid_touch_area_decrease

0xa59f,	// (0x0004281b) aid_touch_area_increase_ParamLimits

0xa59f,	// (0x0004281b) aid_touch_area_increase

0xa5c7,	// (0x00042843) aid_touch_area_mute_ParamLimits

0xa5c7,	// (0x00042843) aid_touch_area_mute

0xa5f7,	// (0x00042873) aid_touch_area_slider_ParamLimits

0xa5f7,	// (0x00042873) aid_touch_area_slider

0xa637,	// (0x000428b3) popup_slider_window_g4_ParamLimits

0xa637,	// (0x000428b3) popup_slider_window_g4

0xa65f,	// (0x000428db) popup_slider_window_g5_ParamLimits

0xa65f,	// (0x000428db) popup_slider_window_g5

0xa693,	// (0x0004290f) popup_slider_window_g6_ParamLimits

0xa693,	// (0x0004290f) popup_slider_window_g6

0xf0a5,	// (0x00047321) popup_slider_window_t2_ParamLimits

0xf0a5,	// (0x00047321) popup_slider_window_t2

0x0001,

0xfbe0,	// (0x00047e5c) popup_slider_window_t_ParamLimits

0xfbe0,	// (0x00047e5c) popup_slider_window_t

0xa6af,	// (0x0004292b) slider_pane_ParamLimits

0xa6af,	// (0x0004292b) slider_pane

0x598a,	// (0x0003dc06) slider_pane_g1_ParamLimits

0x598a,	// (0x0003dc06) slider_pane_g1

0x599e,	// (0x0003dc1a) slider_pane_g2_ParamLimits

0x599e,	// (0x0003dc1a) slider_pane_g2

0x59b4,	// (0x0003dc30) slider_pane_g3_ParamLimits

0x59b4,	// (0x0003dc30) slider_pane_g3

0x0003,

0xfcbe,	// (0x00047f3a) slider_pane_g_ParamLimits

0xfcbe,	// (0x00047f3a) slider_pane_g

0x8770,	// (0x000409ec) popup_tb_float_extension_window_ParamLimits

0x8770,	// (0x000409ec) popup_tb_float_extension_window

0x59e0,	// (0x0003dc5c) aid_size_cell_tb_float_ext

0x8f25,	// (0x000411a1) bg_popup_sub_window_cp28

0x59ec,	// (0x0003dc68) grid_tb_float_ext_pane

0x59f6,	// (0x0003dc72) cell_tb_float_ext_pane_ParamLimits

0x59f6,	// (0x0003dc72) cell_tb_float_ext_pane

0x5a10,	// (0x0003dc8c) cell_tb_float_ext_pane_g1

0x5a19,	// (0x0003dc95) grid_highlight_pane_cp12

0x89c0,	// (0x00040c3c) cell_last_hwr_side_pane_ParamLimits

0x89c0,	// (0x00040c3c) cell_last_hwr_side_pane

0xdfff,	// (0x0004627b) cell_last_hwr_side_pane_g1

0x5a22,	// (0x0003dc9e) cell_last_hwr_side_pane_g2

0x0001,

0xfcc7,	// (0x00047f43) cell_last_hwr_side_pane_g

0x8db2,	// (0x0004102e) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8db2,	// (0x0004102e) vkb2_area_bottom_space_btn_pane

0xe190,	// (0x0004640c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xf41e,	// (0x0004769a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x3a63,	// (0x0003bcdf) cell_vkb2_top_candi_pane_t1_ParamLimits

0x3a9d,	// (0x0003bd19) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x3a9d,	// (0x0003bd19) vkb2_area_bottom_space_btn_pane_g1

0x3ad7,	// (0x0003bd53) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x3ad7,	// (0x0003bd53) vkb2_area_bottom_space_btn_pane_g2

0x3b0d,	// (0x0003bd89) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x3b0d,	// (0x0003bd89) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfccc,	// (0x00047f48) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfccc,	// (0x00047f48) vkb2_area_bottom_space_btn_pane_g

0x2fce,	// (0x0003b24a) cel_fep_hwr_func_pane_ParamLimits

0x2fce,	// (0x0003b24a) cel_fep_hwr_func_pane

0x8995,	// (0x00040c11) cell_hwr_side_button_pane_ParamLimits

0x8995,	// (0x00040c11) cell_hwr_side_button_pane

0xf1af,	// (0x0004742b) aid_area_touch_clock_ParamLimits

0x90d8,	// (0x00041354) bg_uniindi_top_pane_ParamLimits

0xf1c1,	// (0x0004743d) uniindi_top_pane_g1_ParamLimits

0xf1d7,	// (0x00047453) uniindi_top_pane_g2_ParamLimits

0xf1e3,	// (0x0004745f) uniindi_top_pane_g3_ParamLimits

0xf1f4,	// (0x00047470) uniindi_top_pane_g4_ParamLimits

0xfc13,	// (0x00047e8f) uniindi_top_pane_g_ParamLimits

0xf201,	// (0x0004747d) uniindi_top_pane_t1_ParamLimits

0x90d8,	// (0x00041354) bg_vkb2_func_pane_cp01_ParamLimits

0x90d8,	// (0x00041354) bg_vkb2_func_pane_cp01

0x5a2b,	// (0x0003dca7) cel_fep_hwr_func_pane_g1_ParamLimits

0x5a2b,	// (0x0003dca7) cel_fep_hwr_func_pane_g1

0x90d8,	// (0x00041354) bg_vkb2_func_pane_cp02_ParamLimits

0x90d8,	// (0x00041354) bg_vkb2_func_pane_cp02

0x5a2b,	// (0x0003dca7) cell_hwr_side_button_pane_g1_ParamLimits

0x5a2b,	// (0x0003dca7) cell_hwr_side_button_pane_g1

0xc0ad,	// (0x00044329) status_pane_g4_ParamLimits

0xc0ad,	// (0x00044329) status_pane_g4

0xc0c7,	// (0x00044343) status_pane_t1

0xde8e,	// (0x0004610a) form2_midp_gauge_slider_cont_pane

0xde96,	// (0x00046112) form2_midp_gauge_slider_pane_t1_ParamLimits

0x9fe6,	// (0x00042262) form2_midp_gauge_slider_pane_t2_ParamLimits

0x9ffa,	// (0x00042276) form2_midp_gauge_slider_pane_t3_ParamLimits

0x0241,	// (0x000384bd) form2_midp_gauge_slider_pane_t_ParamLimits

0xdea8,	// (0x00046124) form2_midp_slider_pane_ParamLimits

0x3454,	// (0x0003b6d0) aid_size_cell_func_vkb2_ParamLimits

0x3454,	// (0x0003b6d0) aid_size_cell_func_vkb2

0x59cc,	// (0x0003dc48) slider_pane_g4_ParamLimits

0x59cc,	// (0x0003dc48) slider_pane_g4

0x8e13,	// (0x0004108f) form2_midp_gauge_slider_pane_t2_cp01

0x8e23,	// (0x0004109f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8e23,	// (0x0004109f) form2_midp_gauge_slider_pane_t3_cp01

0x3b82,	// (0x0003bdfe) form2_midp_slider_pane_cp01

0x8f25,	// (0x000411a1) navi_smil_pane

0x5a5b,	// (0x0003dcd7) navi_smil_pane_g1

0x5a63,	// (0x0003dcdf) navi_smil_pane_t1

0x5a39,	// (0x0003dcb5) form2_midp_slider_pane_g1

0x5a42,	// (0x0003dcbe) form2_midp_slider_pane_g2

0x5a4a,	// (0x0003dcc6) form2_midp_slider_pane_g3

0x5a39,	// (0x0003dcb5) form2_midp_slider_pane_g4

0xb04e,	// (0x000432ca) form2_midp_slider_pane_g5

0x0004,

0xfcd5,	// (0x00047f51) form2_midp_slider_pane_g

0x3b47,	// (0x0003bdc3) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x3b47,	// (0x0003bdc3) vkb2_area_bottom_space_btn_pane_g4

0x9619,	// (0x00041895) lc0_navi_pane_ParamLimits

0x9619,	// (0x00041895) lc0_navi_pane

0x9683,	// (0x000418ff) lc0_stat_indi_pane_ParamLimits

0x9683,	// (0x000418ff) lc0_stat_indi_pane

0x9698,	// (0x00041914) ls0_title_pane_ParamLimits

0x9698,	// (0x00041914) ls0_title_pane

0xb235,	// (0x000434b1) bg_popup_sub_pane_cp14_ParamLimits

0xf196,	// (0x00047412) list_uniindi_pane_ParamLimits

0xf1a2,	// (0x0004741e) uniindi_top_pane_ParamLimits

0xf23e,	// (0x000474ba) list_single_uniindi_pane_g1_ParamLimits

0xf251,	// (0x000474cd) list_single_uniindi_pane_t1_ParamLimits

0x8e42,	// (0x000410be) lc0_stat_clock_pane_ParamLimits

0x8e42,	// (0x000410be) lc0_stat_clock_pane

0xb059,	// (0x000432d5) lc0_stat_indi_pane_g1_ParamLimits

0xb059,	// (0x000432d5) lc0_stat_indi_pane_g1

0xb066,	// (0x000432e2) lc0_stat_indi_pane_g2_ParamLimits

0xb066,	// (0x000432e2) lc0_stat_indi_pane_g2

0x0001,

0x044d,	// (0x000386c9) lc0_stat_indi_pane_g_ParamLimits

0x044d,	// (0x000386c9) lc0_stat_indi_pane_g

0x8e4f,	// (0x000410cb) lc0_uni_indicator_pane_ParamLimits

0x8e4f,	// (0x000410cb) lc0_uni_indicator_pane

0xb073,	// (0x000432ef) ls0_title_pane_g1_ParamLimits

0xb073,	// (0x000432ef) ls0_title_pane_g1

0xb087,	// (0x00043303) ls0_title_pane_t1_ParamLimits

0xb087,	// (0x00043303) ls0_title_pane_t1

0x8e5c,	// (0x000410d8) lc0_uni_indicator_pane_g1_ParamLimits

0x8e5c,	// (0x000410d8) lc0_uni_indicator_pane_g1

0x5a71,	// (0x0003dced) lc0_stat_clock_pane_t1

0x8f25,	// (0x000411a1) main_ai5_pane

0x5a7f,	// (0x0003dcfb) ai5_sk_pane_ParamLimits

0x5a7f,	// (0x0003dcfb) ai5_sk_pane

0xb0b5,	// (0x00043331) cell_ai5_widget_pane_ParamLimits

0xb0b5,	// (0x00043331) cell_ai5_widget_pane

0x5a8c,	// (0x0003dd08) aid_size_cell_widget_grid

0x5a9a,	// (0x0003dd16) bg_ai5_widget_pane_ParamLimits

0x5a9a,	// (0x0003dd16) bg_ai5_widget_pane

0x5b0e,	// (0x0003dd8a) cell_ai5_widget_pane_g2

0x5b1e,	// (0x0003dd9a) cell_ai5_widget_pane_g3

0x5b35,	// (0x0003ddb1) cell_ai5_widget_pane_g4

0x5b41,	// (0x0003ddbd) cell_ai5_widget_pane_g5

0x5b4d,	// (0x0003ddc9) cell_ai5_widget_pane_g6

0x5b59,	// (0x0003ddd5) cell_ai5_widget_pane_g7

0x5ba1,	// (0x0003de1d) cell_ai5_widget_pane_t1_ParamLimits

0x5ba1,	// (0x0003de1d) cell_ai5_widget_pane_t1

0x5bbe,	// (0x0003de3a) cell_ai5_widget_pane_t2_ParamLimits

0x5bbe,	// (0x0003de3a) cell_ai5_widget_pane_t2

0x5bd6,	// (0x0003de52) cell_ai5_widget_pane_t3_ParamLimits

0x5bd6,	// (0x0003de52) cell_ai5_widget_pane_t3

0x5bee,	// (0x0003de6a) cell_ai5_widget_pane_t4_ParamLimits

0x5bee,	// (0x0003de6a) cell_ai5_widget_pane_t4

0x5c0b,	// (0x0003de87) cell_ai5_widget_pane_t5_ParamLimits

0x5c0b,	// (0x0003de87) cell_ai5_widget_pane_t5

0x5c2a,	// (0x0003dea6) cell_ai5_widget_pane_t6_ParamLimits

0x5c2a,	// (0x0003dea6) cell_ai5_widget_pane_t6

0x5c3c,	// (0x0003deb8) cell_ai5_widget_pane_t7_ParamLimits

0x5c3c,	// (0x0003deb8) cell_ai5_widget_pane_t7

0x5c55,	// (0x0003ded1) cell_ai5_widget_pane_t8_ParamLimits

0x5c55,	// (0x0003ded1) cell_ai5_widget_pane_t8

0x0009,

0xfcf5,	// (0x00047f71) cell_ai5_widget_pane_t_ParamLimits

0xfcf5,	// (0x00047f71) cell_ai5_widget_pane_t

0x5ca9,	// (0x0003df25) grid_ai5_widget_pane

0xb235,	// (0x000434b1) highlight_cell_ai5_widget_pane_ParamLimits

0xb235,	// (0x000434b1) highlight_cell_ai5_widget_pane

0xb11f,	// (0x0004339b) ai5_sk_left_pane

0xb129,	// (0x000433a5) ai5_sk_middle_pane

0xb133,	// (0x000433af) ai5_sk_right_pane

0x5cbd,	// (0x0003df39) bg_ai5_widget_pane_g1_ParamLimits

0x5cbd,	// (0x0003df39) bg_ai5_widget_pane_g1

0x5cc9,	// (0x0003df45) bg_ai5_widget_pane_g2_ParamLimits

0x5cc9,	// (0x0003df45) bg_ai5_widget_pane_g2

0x5cd5,	// (0x0003df51) bg_ai5_widget_pane_g3_ParamLimits

0x5cd5,	// (0x0003df51) bg_ai5_widget_pane_g3

0x5ce1,	// (0x0003df5d) bg_ai5_widget_pane_g4_ParamLimits

0x5ce1,	// (0x0003df5d) bg_ai5_widget_pane_g4

0x5ced,	// (0x0003df69) bg_ai5_widget_pane_g5_ParamLimits

0x5ced,	// (0x0003df69) bg_ai5_widget_pane_g5

0x5cf9,	// (0x0003df75) bg_ai5_widget_pane_g6_ParamLimits

0x5cf9,	// (0x0003df75) bg_ai5_widget_pane_g6

0x5d05,	// (0x0003df81) bg_ai5_widget_pane_g7_ParamLimits

0x5d05,	// (0x0003df81) bg_ai5_widget_pane_g7

0x5d11,	// (0x0003df8d) bg_ai5_widget_pane_g8_ParamLimits

0x5d11,	// (0x0003df8d) bg_ai5_widget_pane_g8

0x5d1d,	// (0x0003df99) bg_ai5_widget_pane_g9_ParamLimits

0x5d1d,	// (0x0003df99) bg_ai5_widget_pane_g9

0x0008,

0xfd0a,	// (0x00047f86) bg_ai5_widget_pane_g_ParamLimits

0xfd0a,	// (0x00047f86) bg_ai5_widget_pane_g

0x5d4f,	// (0x0003dfcb) cell_shortcut_ai5_widget_pane_ParamLimits

0x5d4f,	// (0x0003dfcb) cell_shortcut_ai5_widget_pane

0xbd49,	// (0x00043fc5) bg_cell_shortcut_ai5_widget_pane

0x5d60,	// (0x0003dfdc) cell_grid_ai5_widget_pane_g1

0x5d69,	// (0x0003dfe5) highlight_cell_shortcut_ai5_widget_pane

0xc1a7,	// (0x00044423) ai5_sk_left_pane_g1

0x5d71,	// (0x0003dfed) ai5_sk_left_pane_g2

0x5d79,	// (0x0003dff5) ai5_sk_left_pane_g3

0x5d81,	// (0x0003dffd) ai5_sk_left_pane_g4

0x0003,

0xfd1d,	// (0x00047f99) ai5_sk_left_pane_g

0x5d89,	// (0x0003e005) ai5_sk_left_pane_t1

0xc19f,	// (0x0004441b) ai5_sk_right_pane_g1

0x5d97,	// (0x0003e013) ai5_sk_right_pane_g2

0x5d9f,	// (0x0003e01b) ai5_sk_right_pane_g3

0x5da7,	// (0x0003e023) ai5_sk_right_pane_g4

0x0003,

0xfd26,	// (0x00047fa2) ai5_sk_right_pane_g

0x5daf,	// (0x0003e02b) ai5_sk_right_pane_t1

0xc19f,	// (0x0004441b) ai5_sk_middle_pane_g1

0xc1a7,	// (0x00044423) ai5_sk_middle_pane_g2

0xc1bf,	// (0x0004443b) ai5_sk_middle_pane_g3

0x5d9f,	// (0x0003e01b) ai5_sk_middle_pane_g4

0x5d79,	// (0x0003dff5) ai5_sk_middle_pane_g5

0x5dbd,	// (0x0003e039) ai5_sk_middle_pane_g6

0xb13d,	// (0x000433b9) ai5_sk_middle_pane_g7

0x0006,

0xfd2f,	// (0x00047fab) ai5_sk_middle_pane_g

0x9505,	// (0x00041781) aid_touch_area_size_lc0_ParamLimits

0x9505,	// (0x00041781) aid_touch_area_size_lc0

0x3159,	// (0x0003b3d5) cell_hwr_candidate_pane_t1_ParamLimits

0xbfcf,	// (0x0004424b) aid_touch_navi_pane

0x9791,	// (0x00041a0d) status_dt_navi_pane_ParamLimits

0x9791,	// (0x00041a0d) status_dt_navi_pane

0x97a9,	// (0x00041a25) status_dt_sta_pane_ParamLimits

0x97a9,	// (0x00041a25) status_dt_sta_pane

0xb145,	// (0x000433c1) dt_sta_controll_pane

0xb152,	// (0x000433ce) dt_sta_indi_pane

0xb15f,	// (0x000433db) dt_sta_title_pane

0x90d8,	// (0x00041354) bg_dt_sta_indi_pane_ParamLimits

0x90d8,	// (0x00041354) bg_dt_sta_indi_pane

0x5dc5,	// (0x0003e041) dt_sta_battery_pane

0xb171,	// (0x000433ed) dt_sta_indi_pane_g1

0xb17a,	// (0x000433f6) dt_sta_indi_pane_g2

0xb183,	// (0x000433ff) dt_sta_indi_pane_g3

0x0002,

0x04b0,	// (0x0003872c) dt_sta_indi_pane_g

0xb18c,	// (0x00043408) dt_sta_signal_pane

0xb235,	// (0x000434b1) bg_dt_sta_title_pane_ParamLimits

0xb235,	// (0x000434b1) bg_dt_sta_title_pane

0x5dcd,	// (0x0003e049) dt_sta_title_pane_g1

0xb195,	// (0x00043411) dt_sta_title_pane_t1_ParamLimits

0xb195,	// (0x00043411) dt_sta_title_pane_t1

0x8f25,	// (0x000411a1) bg_dt_sta_control_pane

0xb1aa,	// (0x00043426) dt_sta_controll_pane_g1

0x5dd5,	// (0x0003e051) bg_dt_sta_title_pane_g1

0x5dde,	// (0x0003e05a) bg_dt_sta_title_pane_g2

0x5de7,	// (0x0003e063) bg_dt_sta_title_pane_g3

0x0002,

0xfd3e,	// (0x00047fba) bg_dt_sta_title_pane_g

0xdfff,	// (0x0004627b) bg_dt_sta_indi_pane_g1

0x5df0,	// (0x0003e06c) dt_sta_signal_pane_g1

0x5df8,	// (0x0003e074) dt_sta_signal_pane_g2

0x0001,

0xfd45,	// (0x00047fc1) dt_sta_signal_pane_g

0x5e00,	// (0x0003e07c) dt_sta_battery_pane_g1

0x5e09,	// (0x0003e085) dt_sta_battery_pane_t1

0xdfff,	// (0x0004627b) bg_dt_sta_control_pane_g1

0xb8ba,	// (0x00043b36) fep_china_uni_eep_pane

0xb8c2,	// (0x00043b3e) fep_china_uni_entry_pane_ParamLimits

0xb8d2,	// (0x00043b4e) popup_fep_china_uni_window_g1_ParamLimits

0xb8e2,	// (0x00043b5e) popup_fep_china_uni_window_g2_ParamLimits

0xb8e2,	// (0x00043b5e) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x0004799f) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x0004799f) popup_fep_china_uni_window_g

0x5e18,	// (0x0003e094) fep_china_uni_eep_pane_g1

0x5e20,	// (0x0003e09c) fep_china_uni_eep_pane_t1

0x5a52,	// (0x0003dcce) aid_touch_area_size_smil_player

0xc080,	// (0x000442fc) lc0_clock_pane

0xc0bb,	// (0x00044337) status_pane_g5_ParamLimits

0xc0bb,	// (0x00044337) status_pane_g5

0x82fe,	// (0x0004057a) popup_keymap_window

0xc099,	// (0x00044315) status_icon_pane

0x5b1e,	// (0x0003dd9a) cell_ai5_widget_pane_g3_ParamLimits

0x5b35,	// (0x0003ddb1) cell_ai5_widget_pane_g4_ParamLimits

0x5b41,	// (0x0003ddbd) cell_ai5_widget_pane_g5_ParamLimits

0x5b65,	// (0x0003dde1) cell_ai5_widget_pane_g8_ParamLimits

0x5b65,	// (0x0003dde1) cell_ai5_widget_pane_g8

0x5b79,	// (0x0003ddf5) cell_ai5_widget_pane_g9_ParamLimits

0x5b79,	// (0x0003ddf5) cell_ai5_widget_pane_g9

0x5b8d,	// (0x0003de09) cell_ai5_widget_pane_g10_ParamLimits

0x5b8d,	// (0x0003de09) cell_ai5_widget_pane_g10

0x5e2f,	// (0x0003e0ab) status_icon_pane_g1

0x8f25,	// (0x000411a1) bg_popup_sub_pane_cp13

0x5e37,	// (0x0003e0b3) popup_keymap_window_t1

0x802a,	// (0x000402a6) control_pane_g6_ParamLimits

0x802a,	// (0x000402a6) control_pane_g6

0x8037,	// (0x000402b3) control_pane_g7_ParamLimits

0x8037,	// (0x000402b3) control_pane_g7

0x8044,	// (0x000402c0) control_pane_g8_ParamLimits

0x8044,	// (0x000402c0) control_pane_g8

0xb145,	// (0x000433c1) dt_sta_controll_pane_ParamLimits

0xb152,	// (0x000433ce) dt_sta_indi_pane_ParamLimits

0xb15f,	// (0x000433db) dt_sta_title_pane_ParamLimits

0x9a5c,	// (0x00041cd8) aid_size_touch_scroll_bar_cale

0x15e2,	// (0x0003985e) popup_discreet_window_ParamLimits

0x15e2,	// (0x0003985e) popup_discreet_window

0x78cc,	// (0x0003fb48) popup_sk_window

0xc6ef,	// (0x0004496b) bg_popup_sub_pane_cp28_ParamLimits

0xc6ef,	// (0x0004496b) bg_popup_sub_pane_cp28

0x5e45,	// (0x0003e0c1) popup_discreet_window_g1_ParamLimits

0x5e45,	// (0x0003e0c1) popup_discreet_window_g1

0x5e65,	// (0x0003e0e1) popup_discreet_window_t1_ParamLimits

0x5e65,	// (0x0003e0e1) popup_discreet_window_t1

0x5e83,	// (0x0003e0ff) popup_discreet_window_t2_ParamLimits

0x5e83,	// (0x0003e0ff) popup_discreet_window_t2

0x0002,

0xfd4a,	// (0x00047fc6) popup_discreet_window_t_ParamLimits

0xfd4a,	// (0x00047fc6) popup_discreet_window_t

0x3d8a,	// (0x0003c006) popup_sk_window_g1

0x3d94,	// (0x0003c010) popup_sk_window_g2

0x0001,

0xfd51,	// (0x00047fcd) popup_sk_window_g

0x3d9e,	// (0x0003c01a) popup_sk_window_t1

0x3dac,	// (0x0003c028) popup_sk_window_t1_copy1

0x5b0e,	// (0x0003dd8a) cell_ai5_widget_pane_g2_ParamLimits

0x5c67,	// (0x0003dee3) cell_ai5_widget_pane_t9_ParamLimits

0x5c67,	// (0x0003dee3) cell_ai5_widget_pane_t9

0x8f25,	// (0x000411a1) main_fep_fshwr2_pane

0x8e8a,	// (0x00041106) aid_fshwr2_btn_pane

0x8e9b,	// (0x00041117) aid_fshwr2_syb_pane

0x8eac,	// (0x00041128) aid_fshwr2_txt_pane

0x8eb8,	// (0x00041134) fshwr2_func_candi_pane

0x8ed7,	// (0x00041153) fshwr2_hwr_syb_pane

0x8ef2,	// (0x0004116e) fshwr2_icf_pane

0x8f25,	// (0x000411a1) fshwr2_icf_bg_pane

0xb1b3,	// (0x0004342f) fshwr2_icf_pane_t1_ParamLimits

0xb1b3,	// (0x0004342f) fshwr2_icf_pane_t1

0xb837,	// (0x00043ab3) fshwr2_func_candi_pane_g1

0xb1cc,	// (0x00043448) fshwr2_func_candi_row_pane_ParamLimits

0xb1cc,	// (0x00043448) fshwr2_func_candi_row_pane

0xb39a,	// (0x00043616) cell_fshwr2_syb_pane_ParamLimits

0xb39a,	// (0x00043616) cell_fshwr2_syb_pane

0xe190,	// (0x0004640c) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe190,	// (0x0004640c) fshwr2_hwr_syb_pane_g1

0x8f25,	// (0x000411a1) bg_popup_call_pane_cp01

0xb3b4,	// (0x00043630) fshwr2_func_candi_cell_pane_ParamLimits

0xb3b4,	// (0x00043630) fshwr2_func_candi_cell_pane

0xcd31,	// (0x00044fad) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xcd31,	// (0x00044fad) fshwr2_func_candi_cell_bg_pane

0xb3df,	// (0x0004365b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb3df,	// (0x0004365b) fshwr2_func_candi_cell_pane_g1

0x5ed5,	// (0x0003e151) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x5ed5,	// (0x0003e151) fshwr2_func_candi_cell_pane_t1

0x8f25,	// (0x000411a1) bg_button_pane_cp08

0xbd49,	// (0x00043fc5) cell_fshwr2_syb_bg_pane

0xb3ff,	// (0x0004367b) cell_fshwr2_syb_bg_pane_g1

0xb407,	// (0x00043683) cell_fshwr2_syb_bg_pane_t1

0xb235,	// (0x000434b1) main_tmo_pane

0x9b9c,	// (0x00041e18) uni_indicator_pane_g1_ParamLimits

0x9bb3,	// (0x00041e2f) uni_indicator_pane_g2_ParamLimits

0x9bc9,	// (0x00041e45) uni_indicator_pane_g3_ParamLimits

0xd142,	// (0x000453be) uni_indicator_pane_g4_ParamLimits

0xd142,	// (0x000453be) uni_indicator_pane_g4

0xd156,	// (0x000453d2) uni_indicator_pane_g5_ParamLimits

0xd156,	// (0x000453d2) uni_indicator_pane_g5

0xd156,	// (0x000453d2) uni_indicator_pane_g6_ParamLimits

0xd156,	// (0x000453d2) uni_indicator_pane_g6

0xf87c,	// (0x00047af8) uni_indicator_pane_g_ParamLimits

0xa547,	// (0x000427c3) popup_tmo_note_window_ParamLimits

0xa547,	// (0x000427c3) popup_tmo_note_window

0xb235,	// (0x000434b1) fshwr2_bg_pane

0xb3f0,	// (0x0004366c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb3f0,	// (0x0004366c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfd56,	// (0x00047fd2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfd56,	// (0x00047fd2) fshwr2_func_candi_cell_pane_g

0xdfff,	// (0x0004627b) bg_popup_window_pane_cp01

0x5ee8,	// (0x0003e164) bg_popup_window_pane_g1_cp01

0x5ef1,	// (0x0003e16d) bg_popup_window_pane_cp22_ParamLimits

0x5ef1,	// (0x0003e16d) bg_popup_window_pane_cp22

0x5eff,	// (0x0003e17b) listscroll_tmo_link_pane_ParamLimits

0x5eff,	// (0x0003e17b) listscroll_tmo_link_pane

0x5f3f,	// (0x0003e1bb) popup_tmo_note_window_g1_ParamLimits

0x5f3f,	// (0x0003e1bb) popup_tmo_note_window_g1

0x5f4c,	// (0x0003e1c8) tmo_note_info_pane_ParamLimits

0x5f4c,	// (0x0003e1c8) tmo_note_info_pane

0xb416,	// (0x00043692) list_tmo_note_info_pane_g1_ParamLimits

0xb416,	// (0x00043692) list_tmo_note_info_pane_g1

0x5f66,	// (0x0003e1e2) list_tmo_note_info_pane_g2_ParamLimits

0x5f66,	// (0x0003e1e2) list_tmo_note_info_pane_g2

0x0001,

0xfd5b,	// (0x00047fd7) list_tmo_note_info_pane_g_ParamLimits

0xfd5b,	// (0x00047fd7) list_tmo_note_info_pane_g

0x5f82,	// (0x0003e1fe) list_tmo_note_info_text_pane_ParamLimits

0x5f82,	// (0x0003e1fe) list_tmo_note_info_text_pane

0x5fc4,	// (0x0003e240) list_tmo_link_pane

0x5fd1,	// (0x0003e24d) scroll_pane_cp20

0x5fde,	// (0x0003e25a) list_single_tmo_link_pane_ParamLimits

0x5fde,	// (0x0003e25a) list_single_tmo_link_pane

0x5fee,	// (0x0003e26a) list_single_tmo_link_pane_t1

0x5ffc,	// (0x0003e278) list_tmo_note_info_text_pane_t1_ParamLimits

0x5ffc,	// (0x0003e278) list_tmo_note_info_text_pane_t1

0x7cf9,	// (0x0003ff75) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7cf9,	// (0x0003ff75) aid_size_touch_scroll_bar_cp01

0x7509,	// (0x0003f785) aid_size_touch_slider_marker

0x78bc,	// (0x0003fb38) popup_settings_window_ParamLimits

0x78bc,	// (0x0003fb38) popup_settings_window

0x0c83,	// (0x00038eff) popup_candi_list_indi_window

0xbfcf,	// (0x0004424b) aid_touch_navi_pane_ParamLimits

0x33ad,	// (0x0003b629) rs_clock_indi_pane

0x33b6,	// (0x0003b632) sctrl_sk_bottom_pane_ParamLimits

0x33c7,	// (0x0003b643) sctrl_sk_top_pane_ParamLimits

0x34ae,	// (0x0003b72a) popup_fep_tooltip_window

0x5a8c,	// (0x0003dd08) aid_size_cell_widget_grid_ParamLimits

0x5af9,	// (0x0003dd75) cell_ai5_widget_pane_g1_ParamLimits

0x5af9,	// (0x0003dd75) cell_ai5_widget_pane_g1

0x5b4d,	// (0x0003ddc9) cell_ai5_widget_pane_g6_ParamLimits

0x5b59,	// (0x0003ddd5) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfce0,	// (0x00047f5c) cell_ai5_widget_pane_g_ParamLimits

0xfce0,	// (0x00047f5c) cell_ai5_widget_pane_g

0x5c8b,	// (0x0003df07) cell_ai5_widget_pane_t10_ParamLimits

0x5c8b,	// (0x0003df07) cell_ai5_widget_pane_t10

0x5ca9,	// (0x0003df25) grid_ai5_widget_pane_ParamLimits

0x5d29,	// (0x0003dfa5) cell_contacts_ai5_widget_pane_ParamLimits

0x5d29,	// (0x0003dfa5) cell_contacts_ai5_widget_pane

0x5e98,	// (0x0003e114) popup_discreet_window_t3_ParamLimits

0x5e98,	// (0x0003e114) popup_discreet_window_t3

0x8f07,	// (0x00041183) popup_fshwr2_char_preview_window_ParamLimits

0x8f07,	// (0x00041183) popup_fshwr2_char_preview_window

0xb42d,	// (0x000436a9) tmo_note_info_pane_t1

0xb442,	// (0x000436be) tmo_note_info_pane_t2

0xb45b,	// (0x000436d7) tmo_note_info_pane_t3

0x5fa0,	// (0x0003e21c) tmo_note_info_pane_t4

0x5fb2,	// (0x0003e22e) tmo_note_info_pane_t5

0x0004,

0xfd60,	// (0x00047fdc) tmo_note_info_pane_t

0x5fc4,	// (0x0003e240) list_tmo_link_pane_ParamLimits

0x5fd1,	// (0x0003e24d) scroll_pane_cp20_ParamLimits

0x8f25,	// (0x000411a1) bg_popup_fep_char_preview_window_cp01

0x6015,	// (0x0003e291) popup_fshwr2_char_preview_window_t1

0x6023,	// (0x0003e29f) popup_candi_list_indi_window_g1

0x602c,	// (0x0003e2a8) bg_cell_contacts_ai5_widget_pane

0x6038,	// (0x0003e2b4) cell_contacts_ai5_widget_pane_g1

0x604b,	// (0x0003e2c7) cell_contacts_ai5_widget_pane_g2

0x6057,	// (0x0003e2d3) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfd6b,	// (0x00047fe7) cell_contacts_ai5_widget_pane_g

0x6069,	// (0x0003e2e5) cell_contacts_ai5_widget_pane_t1

0xb235,	// (0x000434b1) highlight_cell_shortcut_ai5_widget_pane_cp01

0x60e3,	// (0x0003e35f) settings_container_pane

0xbd49,	// (0x00043fc5) listscroll_set_pane_copy1

0xd9a6,	// (0x00045c22) scroll_pane_cp121_copy1

0x60ef,	// (0x0003e36b) set_content_pane_copy1

0x60f7,	// (0x0003e373) aid_height_set_list_copy1_ParamLimits

0x60f7,	// (0x0003e373) aid_height_set_list_copy1

0xbfa7,	// (0x00044223) aid_size_parent_copy1_ParamLimits

0xbfa7,	// (0x00044223) aid_size_parent_copy1

0x6103,	// (0x0003e37f) button_value_adjust_pane_cp6_copy1_ParamLimits

0x6103,	// (0x0003e37f) button_value_adjust_pane_cp6_copy1

0xb38e,	// (0x0004360a) list_highlight_pane_cp2_copy1_ParamLimits

0xb38e,	// (0x0004360a) list_highlight_pane_cp2_copy1

0x6117,	// (0x0003e393) list_set_pane_copy1_ParamLimits

0x6117,	// (0x0003e393) list_set_pane_copy1

0x607e,	// (0x0003e2fa) main_pane_set_t1_copy1_ParamLimits

0x607e,	// (0x0003e2fa) main_pane_set_t1_copy1

0x60b8,	// (0x0003e334) main_pane_set_t2_copy1_ParamLimits

0x60b8,	// (0x0003e334) main_pane_set_t2_copy1

0x61c4,	// (0x0003e440) main_pane_set_t3_copy1

0x61d2,	// (0x0003e44e) main_pane_set_t4_copy1

0x60d7,	// (0x0003e353) set_content_pane_g1_copy1_ParamLimits

0x60d7,	// (0x0003e353) set_content_pane_g1_copy1

0x61e0,	// (0x0003e45c) setting_code_pane_copy1

0x61e8,	// (0x0003e464) setting_slider_graphic_pane_copy1

0x61e8,	// (0x0003e464) setting_slider_pane_copy1

0x61e8,	// (0x0003e464) setting_text_pane_copy1

0x61e8,	// (0x0003e464) setting_volume_pane_copy1

0x61e0,	// (0x0003e45c) settings_code_pane_cp2_copy1

0x61f0,	// (0x0003e46c) settings_code_pane_cp_copy1_ParamLimits

0x61f0,	// (0x0003e46c) settings_code_pane_cp_copy1

0x3f37,	// (0x0003c1b3) volume_set_pane_copy1

0x6204,	// (0x0003e480) volume_set_pane_g10_copy1

0x620c,	// (0x0003e488) volume_set_pane_g1_copy1

0x6214,	// (0x0003e490) volume_set_pane_g2_copy1

0x621c,	// (0x0003e498) volume_set_pane_g3_copy1

0x6224,	// (0x0003e4a0) volume_set_pane_g4_copy1

0x622c,	// (0x0003e4a8) volume_set_pane_g5_copy1

0x6234,	// (0x0003e4b0) volume_set_pane_g6_copy1

0x623c,	// (0x0003e4b8) volume_set_pane_g7_copy1

0x6244,	// (0x0003e4c0) volume_set_pane_g8_copy1

0x624c,	// (0x0003e4c8) volume_set_pane_g9_copy1

0x8fa5,	// (0x00041221) bg_set_opt_pane_cp_copy1_ParamLimits

0x8fa5,	// (0x00041221) bg_set_opt_pane_cp_copy1

0x3f3f,	// (0x0003c1bb) setting_slider_pane_t1_copy1_ParamLimits

0x3f3f,	// (0x0003c1bb) setting_slider_pane_t1_copy1

0x3f5d,	// (0x0003c1d9) setting_slider_pane_t2_copy1_ParamLimits

0x3f5d,	// (0x0003c1d9) setting_slider_pane_t2_copy1

0x3f77,	// (0x0003c1f3) setting_slider_pane_t3_copy1_ParamLimits

0x3f77,	// (0x0003c1f3) setting_slider_pane_t3_copy1

0x3f8f,	// (0x0003c20b) slider_set_pane_copy1_ParamLimits

0x3f8f,	// (0x0003c20b) slider_set_pane_copy1

0xb284,	// (0x00043500) set_opt_bg_pane_g1_copy2

0xb28c,	// (0x00043508) set_opt_bg_pane_g2_copy2

0x6254,	// (0x0003e4d0) set_opt_bg_pane_g3_copy2

0xb29c,	// (0x00043518) set_opt_bg_pane_g4_copy2

0xb2a4,	// (0x00043520) set_opt_bg_pane_g5_copy2

0xb2ac,	// (0x00043528) set_opt_bg_pane_g6_copy2

0x625e,	// (0x0003e4da) set_opt_bg_pane_g7_copy2

0x6266,	// (0x0003e4e2) set_opt_bg_pane_g8_copy2

0x6270,	// (0x0003e4ec) set_opt_bg_pane_g9_copy2

0x627a,	// (0x0003e4f6) aid_size_touch_slider_mark_copy1_ParamLimits

0x627a,	// (0x0003e4f6) aid_size_touch_slider_mark_copy1

0x628e,	// (0x0003e50a) slider_set_pane_g1_copy1

0x6297,	// (0x0003e513) slider_set_pane_g2_copy1

0xd39a,	// (0x00045616) slider_set_pane_g3_copy1_ParamLimits

0xd39a,	// (0x00045616) slider_set_pane_g3_copy1

0xd3ae,	// (0x0004562a) slider_set_pane_g4_copy1_ParamLimits

0xd3ae,	// (0x0004562a) slider_set_pane_g4_copy1

0xd3c6,	// (0x00045642) slider_set_pane_g5_copy1_ParamLimits

0xd3c6,	// (0x00045642) slider_set_pane_g5_copy1

0xd39a,	// (0x00045616) slider_set_pane_g6_copy1_ParamLimits

0xd39a,	// (0x00045616) slider_set_pane_g6_copy1

0x629f,	// (0x0003e51b) slider_set_pane_g7_copy1_ParamLimits

0x629f,	// (0x0003e51b) slider_set_pane_g7_copy1

0x8f39,	// (0x000411b5) bg_set_opt_pane_cp2_copy1

0x62b5,	// (0x0003e531) setting_slider_graphic_pane_g1_copy1

0x62be,	// (0x0003e53a) setting_slider_graphic_pane_t1_copy1

0x62ce,	// (0x0003e54a) setting_slider_graphic_pane_t2_copy1

0x62de,	// (0x0003e55a) slider_set_pane_cp_copy1

0x62ee,	// (0x0003e56a) input_focus_pane_cp1_copy1

0x62f7,	// (0x0003e573) list_set_text_pane_copy1

0x62ff,	// (0x0003e57b) setting_text_pane_g1_copy1

0x133c,	// (0x000395b8) set_text_pane_t1_copy1

0x62ee,	// (0x0003e56a) input_focus_pane_cp2_copy1

0x62ff,	// (0x0003e57b) setting_code_pane_g1_copy1

0x6308,	// (0x0003e584) setting_code_pane_t1_copy1

0xd108,	// (0x00045384) list_set_graphic_pane_copy1

0x8f39,	// (0x000411b5) bg_set_opt_pane_cp4_copy1

0xba5f,	// (0x00043cdb) list_set_graphic_pane_g1_copy1_ParamLimits

0xba5f,	// (0x00043cdb) list_set_graphic_pane_g1_copy1

0x6316,	// (0x0003e592) list_set_graphic_pane_g2_copy1

0xba77,	// (0x00043cf3) list_set_graphic_pane_t1_copy1_ParamLimits

0xba77,	// (0x00043cf3) list_set_graphic_pane_t1_copy1

0xdfff,	// (0x0004627b) rs_clock_indi_pane_g1

0x631e,	// (0x0003e59a) rs_clock_indi_pane_t1

0x632c,	// (0x0003e5a8) rs_indi_pane

0x6334,	// (0x0003e5b0) rs_indi_pane_g1

0x633d,	// (0x0003e5b9) rs_indi_pane_g2

0x6346,	// (0x0003e5c2) rs_indi_pane_g3

0x0002,

0xfd72,	// (0x00047fee) rs_indi_pane_g

0xbd49,	// (0x00043fc5) bg_popup_preview_window_pane_cp03

0x634f,	// (0x0003e5cb) popup_fep_tooltip_window_t1

0xe999,	// (0x00046c15) popup_note2_window_g2_ParamLimits

0xe999,	// (0x00046c15) popup_note2_window_g2

0x0001,

0xfb64,	// (0x00047de0) popup_note2_window_g_ParamLimits

0xfb64,	// (0x00047de0) popup_note2_window_g

0xee20,	// (0x0004709c) bg_popup_sub_pane_cp11_ParamLimits

0xee2d,	// (0x000470a9) cell_ai3_links_pane_g1_ParamLimits

0xee44,	// (0x000470c0) cell_ai3_links_pane_t1

0x133c,	// (0x000395b8) set_text_pane_t1_copy1_ParamLimits

0xbc66,	// (0x00043ee2) cell_graphic_popup_pane_cp2_ParamLimits

0xbc66,	// (0x00043ee2) cell_graphic_popup_pane_cp2

0x635d,	// (0x0003e5d9) cell_graphic_popup_pane_g1_cp2

0x9341,	// (0x000415bd) cell_graphic_popup_pane_g2_cp2

0x6365,	// (0x0003e5e1) cell_graphic_popup_pane_g3_cp2

0x636d,	// (0x0003e5e9) cell_graphic_popup_pane_t2_cp2

0x9352,	// (0x000415ce) grid_highlight_pane_cp3_cp2

0xb60b,	// (0x00043887) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb235,	// (0x000434b1) main_tmo_pane_ParamLimits

0xa53b,	// (0x000427b7) popup_tmo_big_image_note_window

0x5ae8,	// (0x0003dd64) cell_ai5_widget_list_pane

0x5af0,	// (0x0003dd6c) cell_ai5_widget_lrg_icon_pane

0xb42d,	// (0x000436a9) tmo_note_info_pane_t1_ParamLimits

0xb442,	// (0x000436be) tmo_note_info_pane_t2_ParamLimits

0xb45b,	// (0x000436d7) tmo_note_info_pane_t3_ParamLimits

0x5fa0,	// (0x0003e21c) tmo_note_info_pane_t4_ParamLimits

0x5fb2,	// (0x0003e22e) tmo_note_info_pane_t5_ParamLimits

0xfd60,	// (0x00047fdc) tmo_note_info_pane_t_ParamLimits

0x60e3,	// (0x0003e35f) settings_container_pane_ParamLimits

0x62e6,	// (0x0003e562) indicator_popup_pane_cp5

0x62e6,	// (0x0003e562) indicator_popup_pane_cp6

0xd108,	// (0x00045384) list_set_graphic_pane_copy1_ParamLimits

0x8f25,	// (0x000411a1) bg_popup_window_pane_cp23

0x637b,	// (0x0003e5f7) popup_tmo_big_image_note_window_g1

0x6384,	// (0x0003e600) popup_tmo_big_image_note_window_t1

0x6394,	// (0x0003e610) popup_tmo_big_image_note_window_t2

0x63a4,	// (0x0003e620) popup_tmo_big_image_note_window_t3

0x0002,

0xfd79,	// (0x00047ff5) popup_tmo_big_image_note_window_t

0xdfff,	// (0x0004627b) cell_ai5_widget_lrg_icon_pane_g1

0x63b4,	// (0x0003e630) cell_ai5_widget_lrg_icon_pane_t1

0x63c2,	// (0x0003e63e) cell_ai5_widget_list_row_pane_ParamLimits

0x63c2,	// (0x0003e63e) cell_ai5_widget_list_row_pane

0x63db,	// (0x0003e657) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x63db,	// (0x0003e657) cell_ai5_widget_list_row_pane_g1

0x63e8,	// (0x0003e664) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x63e8,	// (0x0003e664) cell_ai5_widget_list_row_pane_t1

0x6416,	// (0x0003e692) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x6416,	// (0x0003e692) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfd80,	// (0x00047ffc) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfd80,	// (0x00047ffc) cell_ai5_widget_list_row_pane_t

0x8f25,	// (0x000411a1) main_fep_vtchi_ss_pane

0x3fb4,	// (0x0003c230) popup_fep_char_pre_window

0x3fbc,	// (0x0003c238) popup_fep_ituss_window

0x3fdd,	// (0x0003c259) popup_fep_vkbss_window

0x643e,	// (0x0003e6ba) grid_vkbss_keypad_pane_ParamLimits

0x643e,	// (0x0003e6ba) grid_vkbss_keypad_pane

0x644e,	// (0x0003e6ca) ituss_keypad_pane

0x4008,	// (0x0003c284) aid_vkbss_key_offset_ParamLimits

0x4008,	// (0x0003c284) aid_vkbss_key_offset

0x4014,	// (0x0003c290) cell_vkbss_key_pane_ParamLimits

0x4014,	// (0x0003c290) cell_vkbss_key_pane

0xd625,	// (0x000458a1) bg_cell_vkbss_key_g1_ParamLimits

0xd625,	// (0x000458a1) bg_cell_vkbss_key_g1

0x645e,	// (0x0003e6da) cell_vkbss_key_3p_pane_ParamLimits

0x645e,	// (0x0003e6da) cell_vkbss_key_3p_pane

0x6478,	// (0x0003e6f4) cell_vkbss_key_g1_ParamLimits

0x6478,	// (0x0003e6f4) cell_vkbss_key_g1

0x6492,	// (0x0003e70e) cell_vkbss_key_t1_ParamLimits

0x6492,	// (0x0003e70e) cell_vkbss_key_t1

0x402a,	// (0x0003c2a6) cell_ituss_key_pane_ParamLimits

0x402a,	// (0x0003c2a6) cell_ituss_key_pane

0x64bd,	// (0x0003e739) bg_cell_ituss_key_g1_ParamLimits

0x64bd,	// (0x0003e739) bg_cell_ituss_key_g1

0x64c9,	// (0x0003e745) cell_ituss_key_pane_g1_ParamLimits

0x64c9,	// (0x0003e745) cell_ituss_key_pane_g1

0x64dd,	// (0x0003e759) cell_ituss_key_pane_g2_ParamLimits

0x64dd,	// (0x0003e759) cell_ituss_key_pane_g2

0x0001,

0xfd87,	// (0x00048003) cell_ituss_key_pane_g_ParamLimits

0xfd87,	// (0x00048003) cell_ituss_key_pane_g

0x650b,	// (0x0003e787) cell_ituss_key_t1_ParamLimits

0x650b,	// (0x0003e787) cell_ituss_key_t1

0x6545,	// (0x0003e7c1) cell_ituss_key_t2_ParamLimits

0x6545,	// (0x0003e7c1) cell_ituss_key_t2

0x6576,	// (0x0003e7f2) cell_ituss_key_t3_ParamLimits

0x6576,	// (0x0003e7f2) cell_ituss_key_t3

0x65b0,	// (0x0003e82c) cell_ituss_key_t4_ParamLimits

0x65b0,	// (0x0003e82c) cell_ituss_key_t4

0x0003,

0xfd8c,	// (0x00048008) cell_ituss_key_t_ParamLimits

0xfd8c,	// (0x00048008) cell_ituss_key_t

0x65ea,	// (0x0003e866) cell_vkbss_key_3p_pane_g1

0x65f2,	// (0x0003e86e) cell_vkbss_key_3p_pane_g2

0x65fa,	// (0x0003e876) cell_vkbss_key_3p_pane_g3

0x0002,

0xfd95,	// (0x00048011) cell_vkbss_key_3p_pane_g

0x8f25,	// (0x000411a1) bg_popup_fep_char_preview_window_cp02

0x6602,	// (0x0003e87e) popup_fep_char_pre_window_t1

0xb115,	// (0x00043391) main_ai5_sk_pane

0x602c,	// (0x0003e2a8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x6038,	// (0x0003e2b4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x604b,	// (0x0003e2c7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x6057,	// (0x0003e2d3) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfd6b,	// (0x00047fe7) cell_contacts_ai5_widget_pane_g_ParamLimits

0x6069,	// (0x0003e2e5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb235,	// (0x000434b1) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xb706,	// (0x00043982) main_ai5_sk_pane_g1

0xc52d,	// (0x000447a9) popup_query_code_window_g1

0x3fd2,	// (0x0003c24e) popup_fep_vkb_icf_pane

0x3fe6,	// (0x0003c262) popup_fep_vtchi_icf_pane

0xb235,	// (0x000434b1) bg_icf_pane

0x6611,	// (0x0003e88d) list_vkb_icf_pane

0xb235,	// (0x000434b1) bg_icf_pane_cp01

0x661d,	// (0x0003e899) vtchi_icf_list_pane

0x662e,	// (0x0003e8aa) list_vkb_icf_pane_t1_ParamLimits

0x662e,	// (0x0003e8aa) list_vkb_icf_pane_t1

0x6646,	// (0x0003e8c2) vtchi_icf_list_pane_t1_ParamLimits

0x6646,	// (0x0003e8c2) vtchi_icf_list_pane_t1

0x3fbc,	// (0x0003c238) popup_fep_ituss_window_ParamLimits

0x3fe6,	// (0x0003c262) popup_fep_vtchi_icf_pane_ParamLimits

0x644e,	// (0x0003e6ca) ituss_keypad_pane_ParamLimits

0x3ffc,	// (0x0003c278) ituss_sks_pane

0xb235,	// (0x000434b1) bg_icf_pane_ParamLimits

0x3fa5,	// (0x0003c221) icf_edit_indi_pane_ParamLimits

0x3fa5,	// (0x0003c221) icf_edit_indi_pane

0x6611,	// (0x0003e88d) list_vkb_icf_pane_ParamLimits

0xb235,	// (0x000434b1) bg_icf_pane_cp01_ParamLimits

0x3fa5,	// (0x0003c221) icf_edit_indi_pane_cp01_ParamLimits

0x3fa5,	// (0x0003c221) icf_edit_indi_pane_cp01

0x6625,	// (0x0003e8a1) vtchi_query_pane

0xe190,	// (0x0004640c) icf_edit_indi_pane_g1_ParamLimits

0xe190,	// (0x0004640c) icf_edit_indi_pane_g1

0x66d2,	// (0x0003e94e) icf_edit_indi_pane_g2_ParamLimits

0x66d2,	// (0x0003e94e) icf_edit_indi_pane_g2

0x0001,

0xfdad,	// (0x00048029) icf_edit_indi_pane_g_ParamLimits

0xfdad,	// (0x00048029) icf_edit_indi_pane_g

0x66e1,	// (0x0003e95d) icf_edit_indi_pane_t1

0x6668,	// (0x0003e8e4) bg_input_focus_pane_cp042

0x9a53,	// (0x00041ccf) vtchi_button_pane

0x6671,	// (0x0003e8ed) vtchi_query_pane_t1

0x667f,	// (0x0003e8fb) vtchi_query_pane_t2

0x668d,	// (0x0003e909) vtchi_query_pane_t3

0x0002,

0xfd9c,	// (0x00048018) vtchi_query_pane_t

0x8f25,	// (0x000411a1) bg_button_pane_cp13

0x669b,	// (0x0003e917) vtchi_button_pane_g1

0x66a3,	// (0x0003e91f) ituss_sks_pane_g1

0x66ae,	// (0x0003e92a) ituss_sks_pane_g2

0x0001,

0xfda3,	// (0x0004801f) ituss_sks_pane_g

0x66b6,	// (0x0003e932) ituss_sks_pane_t1

0x66c4,	// (0x0003e940) ituss_sks_pane_t2

0x0001,

0xfda8,	// (0x00048024) ituss_sks_pane_t

0xdcb8,	// (0x00045f34) indicator_nsta_pane_cp_g1

0xdcc1,	// (0x00045f3d) indicator_nsta_pane_cp_g2

0xdcc9,	// (0x00045f45) indicator_nsta_pane_cp_g3

0xdcd1,	// (0x00045f4d) indicator_nsta_pane_cp_g4

0xdcd9,	// (0x00045f55) indicator_nsta_pane_cp_g5

0xdcd9,	// (0x00045f55) indicator_nsta_pane_cp_g6

0x0005,

0xf9e0,	// (0x00047c5c) indicator_nsta_pane_cp_g

0xaf2a,	// (0x000431a6) cell_graphic2_pane_t2_ParamLimits

0xaf2a,	// (0x000431a6) cell_graphic2_pane_t2

0x0001,

0x03f3,	// (0x0003866f) cell_graphic2_pane_t_ParamLimits

0x03f3,	// (0x0003866f) cell_graphic2_pane_t

0xaf5d,	// (0x000431d9) cell_graphic2_control_pane_t1

0x7eb5,	// (0x00040131) signal_pane_g3_ParamLimits

0x7eb5,	// (0x00040131) signal_pane_g3

0x7ec9,	// (0x00040145) signal_pane_g4_ParamLimits

0x7ec9,	// (0x00040145) signal_pane_g4

0x6428,	// (0x0003e6a4) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x6428,	// (0x0003e6a4) cell_ai5_widget_list_row_pane_t3

0x64f9,	// (0x0003e775) cell_ituss_key_pane_t1_ParamLimits

0x64f9,	// (0x0003e775) cell_ituss_key_pane_t1

0xc26d,	// (0x000444e9) form_field_data_wide_pane_vc_t2_ParamLimits

0xc26d,	// (0x000444e9) form_field_data_wide_pane_vc_t2

0xc281,	// (0x000444fd) form_field_data_wide_pane_vc_t3_ParamLimits

0xc281,	// (0x000444fd) form_field_data_wide_pane_vc_t3

0x0002,

0x0024,	// (0x000382a0) form_field_data_wide_pane_vc_t_ParamLimits

0x0024,	// (0x000382a0) form_field_data_wide_pane_vc_t

0xd9e6,	// (0x00045c62) form_field_slider_wide_pane_vc_t3_ParamLimits

0xd9e6,	// (0x00045c62) form_field_slider_wide_pane_vc_t3

0xdac0,	// (0x00045d3c) form_field_popup_wide_pane_vc_t2_ParamLimits

0xdac0,	// (0x00045d3c) form_field_popup_wide_pane_vc_t2

0xdad7,	// (0x00045d53) form_field_popup_wide_pane_vc_t3_ParamLimits

0xdad7,	// (0x00045d53) form_field_popup_wide_pane_vc_t3

0x0002,

0xf9d4,	// (0x00047c50) form_field_popup_wide_pane_vc_t_ParamLimits

0xf9d4,	// (0x00047c50) form_field_popup_wide_pane_vc_t

0x8e8a,	// (0x00041106) aid_fshwr2_btn_pane_ParamLimits

0x8e9b,	// (0x00041117) aid_fshwr2_syb_pane_ParamLimits

0x8eac,	// (0x00041128) aid_fshwr2_txt_pane_ParamLimits

0xb235,	// (0x000434b1) fshwr2_bg_pane_ParamLimits

0x8eb8,	// (0x00041134) fshwr2_func_candi_pane_ParamLimits

0x8ed7,	// (0x00041153) fshwr2_hwr_syb_pane_ParamLimits

0x8ef2,	// (0x0004116e) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large

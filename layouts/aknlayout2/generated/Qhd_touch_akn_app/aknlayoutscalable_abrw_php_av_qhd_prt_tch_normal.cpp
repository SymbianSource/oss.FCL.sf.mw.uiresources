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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000ada1 };

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
0x6d27,	// (0x00011ac8) Screen

0x6d3b,	// (0x00011adc) application_window_ParamLimits

0x6d3b,	// (0x00011adc) application_window

0x6d55,	// (0x00011af6) screen_g1

0x4871,	// (0x0000f612) area_bottom_pane_ParamLimits

0x4871,	// (0x0000f612) area_bottom_pane

0x4931,	// (0x0000f6d2) area_top_pane_ParamLimits

0x4931,	// (0x0000f6d2) area_top_pane

0x49cf,	// (0x0000f770) main_pane_ParamLimits

0x49cf,	// (0x0000f770) main_pane

0x6d5f,	// (0x00011b00) misc_graphics

0x8ee8,	// (0x00013c89) battery_pane_ParamLimits

0x8ee8,	// (0x00013c89) battery_pane

0x9cd5,	// (0x00014a76) bg_status_flat_pane_g8

0x9cdd,	// (0x00014a7e) bg_status_flat_pane_g9

0x8faa,	// (0x00013d4b) context_pane_ParamLimits

0x8faa,	// (0x00013d4b) context_pane

0x90c0,	// (0x00013e61) navi_pane_ParamLimits

0x90c0,	// (0x00013e61) navi_pane

0x9144,	// (0x00013ee5) signal_pane_ParamLimits

0x9144,	// (0x00013ee5) signal_pane

0x0008,

0xf874,	// (0x0001a615) bg_status_flat_pane_g

0x91b1,	// (0x00013f52) status_pane_g1_ParamLimits

0x91b1,	// (0x00013f52) status_pane_g1

0x91c5,	// (0x00013f66) status_pane_g2_ParamLimits

0x91c5,	// (0x00013f66) status_pane_g2

0x91d1,	// (0x00013f72) status_pane_g3_ParamLimits

0x91d1,	// (0x00013f72) status_pane_g3

0x0004,

0xf79b,	// (0x0001a53c) status_pane_g_ParamLimits

0xf79b,	// (0x0001a53c) status_pane_g

0x9205,	// (0x00013fa6) title_pane_ParamLimits

0x9205,	// (0x00013fa6) title_pane

0x9242,	// (0x00013fe3) uni_indicator_pane_ParamLimits

0x9242,	// (0x00013fe3) uni_indicator_pane

0x8e08,	// (0x00013ba9) bg_list_pane_ParamLimits

0x8e08,	// (0x00013ba9) bg_list_pane

0x8e28,	// (0x00013bc9) find_pane

0x8e30,	// (0x00013bd1) listscroll_app_pane_ParamLimits

0x8e30,	// (0x00013bd1) listscroll_app_pane

0x8e3c,	// (0x00013bdd) listscroll_form_pane

0x52ac,	// (0x0001004d) listscroll_gen_pane_ParamLimits

0x52ac,	// (0x0001004d) listscroll_gen_pane

0x52c0,	// (0x00010061) listscroll_set_pane

0x7fc1,	// (0x00012d62) main_idle_act_pane

0x8b04,	// (0x000138a5) main_idle_trad_pane

0x8b04,	// (0x000138a5) main_list_empty_pane

0x8e30,	// (0x00013bd1) main_midp_pane

0x8e56,	// (0x00013bf7) main_pane_g1_ParamLimits

0x8e56,	// (0x00013bf7) main_pane_g1

0x52d6,	// (0x00010077) popup_ai_message_window_ParamLimits

0x52d6,	// (0x00010077) popup_ai_message_window

0x537c,	// (0x0001011d) popup_fep_china_uni_window_ParamLimits

0x537c,	// (0x0001011d) popup_fep_china_uni_window

0x53d8,	// (0x00010179) popup_fep_japan_candidate_window_ParamLimits

0x53d8,	// (0x00010179) popup_fep_japan_candidate_window

0x53f8,	// (0x00010199) popup_fep_japan_predictive_window_ParamLimits

0x53f8,	// (0x00010199) popup_fep_japan_predictive_window

0x5428,	// (0x000101c9) popup_find_window

0x5435,	// (0x000101d6) popup_grid_graphic_window_ParamLimits

0x5435,	// (0x000101d6) popup_grid_graphic_window

0x545f,	// (0x00010200) popup_large_graphic_colour_window

0x5485,	// (0x00010226) popup_menu_window_ParamLimits

0x5485,	// (0x00010226) popup_menu_window

0x563d,	// (0x000103de) popup_note_image_window

0x5629,	// (0x000103ca) popup_note_wait_window_ParamLimits

0x5629,	// (0x000103ca) popup_note_wait_window

0x5629,	// (0x000103ca) popup_note_window_ParamLimits

0x5629,	// (0x000103ca) popup_note_window

0x5693,	// (0x00010434) popup_query_code_window_ParamLimits

0x5693,	// (0x00010434) popup_query_code_window

0x56a7,	// (0x00010448) popup_query_data_code_window_ParamLimits

0x56a7,	// (0x00010448) popup_query_data_code_window

0x56c4,	// (0x00010465) popup_query_data_window_ParamLimits

0x56c4,	// (0x00010465) popup_query_data_window

0x56e0,	// (0x00010481) popup_query_sat_info_window_ParamLimits

0x56e0,	// (0x00010481) popup_query_sat_info_window

0x5719,	// (0x000104ba) popup_snote_single_graphic_window_ParamLimits

0x5719,	// (0x000104ba) popup_snote_single_graphic_window

0x5719,	// (0x000104ba) popup_snote_single_text_window_ParamLimits

0x5719,	// (0x000104ba) popup_snote_single_text_window

0x572e,	// (0x000104cf) popup_sub_window_general

0x585e,	// (0x000105ff) popup_window_general_ParamLimits

0x585e,	// (0x000105ff) popup_window_general

0x8e6c,	// (0x00013c0d) power_save_pane

0x5136,	// (0x0000fed7) control_pane_g1_ParamLimits

0x5136,	// (0x0000fed7) control_pane_g1

0x515d,	// (0x0000fefe) control_pane_g2_ParamLimits

0x515d,	// (0x0000fefe) control_pane_g2

0x8dcb,	// (0x00013b6c) control_pane_g3_ParamLimits

0x8dcb,	// (0x00013b6c) control_pane_g3

0x0007,

0xf783,	// (0x0001a524) control_pane_g_ParamLimits

0xf783,	// (0x0001a524) control_pane_g

0x51a7,	// (0x0000ff48) control_pane_t1_ParamLimits

0x51a7,	// (0x0000ff48) control_pane_t1

0x51fb,	// (0x0000ff9c) control_pane_t2_ParamLimits

0x51fb,	// (0x0000ff9c) control_pane_t2

0x0002,

0xf794,	// (0x0001a535) control_pane_t_ParamLimits

0xf794,	// (0x0001a535) control_pane_t

0x8cf0,	// (0x00013a91) navi_navi_volume_pane_cp1

0x8cf8,	// (0x00013a99) status_small_icon_pane

0x8d00,	// (0x00013aa1) status_small_pane_g1_ParamLimits

0x8d00,	// (0x00013aa1) status_small_pane_g1

0x8d34,	// (0x00013ad5) status_small_pane_g2_ParamLimits

0x8d34,	// (0x00013ad5) status_small_pane_g2

0x8d40,	// (0x00013ae1) status_small_pane_g3_ParamLimits

0x8d40,	// (0x00013ae1) status_small_pane_g3

0x8d4c,	// (0x00013aed) status_small_pane_g4_ParamLimits

0x8d4c,	// (0x00013aed) status_small_pane_g4

0x8d58,	// (0x00013af9) status_small_pane_g5_ParamLimits

0x8d58,	// (0x00013af9) status_small_pane_g5

0x8d66,	// (0x00013b07) status_small_pane_g6_ParamLimits

0x8d66,	// (0x00013b07) status_small_pane_g6

0x0007,

0xf772,	// (0x0001a513) status_small_pane_g_ParamLimits

0xf772,	// (0x0001a513) status_small_pane_g

0x8d95,	// (0x00013b36) status_small_pane_t1

0x8db7,	// (0x00013b58) status_small_wait_pane_ParamLimits

0x8db7,	// (0x00013b58) status_small_wait_pane

0x84e7,	// (0x00013288) aid_levels_signal_ParamLimits

0x84e7,	// (0x00013288) aid_levels_signal

0x84f9,	// (0x0001329a) signal_pane_g1_ParamLimits

0x84f9,	// (0x0001329a) signal_pane_g1

0x850e,	// (0x000132af) signal_pane_g2_ParamLimits

0x850e,	// (0x000132af) signal_pane_g2

0x0003,

0xf703,	// (0x0001a4a4) signal_pane_g_ParamLimits

0xf703,	// (0x0001a4a4) signal_pane_g

0x8549,	// (0x000132ea) context_pane_g1

0x6d69,	// (0x00011b0a) title_pane_g1

0x6d9f,	// (0x00011b40) title_pane_t1

0x6e07,	// (0x00011ba8) title_pane_t2

0x6e2d,	// (0x00011bce) title_pane_t3

0x0002,

0xf557,	// (0x0001a2f8) title_pane_t

0x925a,	// (0x00013ffb) aid_levels_battery_ParamLimits

0x925a,	// (0x00013ffb) aid_levels_battery

0x926e,	// (0x0001400f) battery_pane_g1_ParamLimits

0x926e,	// (0x0001400f) battery_pane_g1

0x9284,	// (0x00014025) battery_pane_g2_ParamLimits

0x9284,	// (0x00014025) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001a547) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001a547) battery_pane_g

0xa617,	// (0x000153b8) uni_indicator_pane_g1

0xa62a,	// (0x000153cb) uni_indicator_pane_g2

0xa63c,	// (0x000153dd) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0001a6bd) uni_indicator_pane_g

0x8976,	// (0x00013717) navi_icon_pane_ParamLimits

0x8976,	// (0x00013717) navi_icon_pane

0x88b4,	// (0x00013655) navi_midp_pane

0x8992,	// (0x00013733) navi_navi_pane

0x899c,	// (0x0001373d) navi_text_pane_ParamLimits

0x899c,	// (0x0001373d) navi_text_pane

0x6d55,	// (0x00011af6) status_small_wait_pane_g1

0x729c,	// (0x0001203d) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0001a6b8) status_small_wait_pane_g

0xa33c,	// (0x000150dd) navi_navi_icon_text_pane

0xa344,	// (0x000150e5) navi_navi_pane_g1_ParamLimits

0xa344,	// (0x000150e5) navi_navi_pane_g1

0xa356,	// (0x000150f7) navi_navi_pane_g2_ParamLimits

0xa356,	// (0x000150f7) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0001a686) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0001a686) navi_navi_pane_g

0xa368,	// (0x00015109) navi_navi_tabs_pane

0xa371,	// (0x00015112) navi_navi_text_pane

0xa33c,	// (0x000150dd) navi_navi_volume_pane

0xa318,	// (0x000150b9) navi_text_pane_t1

0xa30c,	// (0x000150ad) navi_icon_pane_g1

0xa25f,	// (0x00015000) navi_navi_text_pane_t1

0x5b76,	// (0x00010917) navi_navi_volume_pane_g1

0x5b7e,	// (0x0001091f) volume_small_pane

0xa1c5,	// (0x00014f66) navi_navi_icon_text_pane_g1

0xa1cd,	// (0x00014f6e) navi_navi_icon_text_pane_t1

0x8992,	// (0x00013733) navi_tabs_2_long_pane

0x8992,	// (0x00013733) navi_tabs_2_pane

0x8992,	// (0x00013733) navi_tabs_3_long_pane

0x8992,	// (0x00013733) navi_tabs_3_pane

0x8992,	// (0x00013733) navi_tabs_4_pane

0x5b56,	// (0x000108f7) tabs_2_active_pane_ParamLimits

0x5b56,	// (0x000108f7) tabs_2_active_pane

0x5b66,	// (0x00010907) tabs_2_passive_pane_ParamLimits

0x5b66,	// (0x00010907) tabs_2_passive_pane

0x5b24,	// (0x000108c5) tabs_3_active_pane_ParamLimits

0x5b24,	// (0x000108c5) tabs_3_active_pane

0x5b34,	// (0x000108d5) tabs_3_passive_pane_ParamLimits

0x5b34,	// (0x000108d5) tabs_3_passive_pane

0x5b45,	// (0x000108e6) tabs_3_passive_pane_cp_ParamLimits

0x5b45,	// (0x000108e6) tabs_3_passive_pane_cp

0x5ae0,	// (0x00010881) tabs_4_active_pane_ParamLimits

0x5ae0,	// (0x00010881) tabs_4_active_pane

0x5af1,	// (0x00010892) tabs_4_passive_pane_ParamLimits

0x5af1,	// (0x00010892) tabs_4_passive_pane

0x5b02,	// (0x000108a3) tabs_4_passive_pane_cp_ParamLimits

0x5b02,	// (0x000108a3) tabs_4_passive_pane_cp

0x5b13,	// (0x000108b4) tabs_4_passive_pane_cp2_ParamLimits

0x5b13,	// (0x000108b4) tabs_4_passive_pane_cp2

0x5abc,	// (0x0001085d) tabs_2_long_active_pane_ParamLimits

0x5abc,	// (0x0001085d) tabs_2_long_active_pane

0x5ace,	// (0x0001086f) tabs_2_long_passive_pane_ParamLimits

0x5ace,	// (0x0001086f) tabs_2_long_passive_pane

0x5a7d,	// (0x0001081e) tabs_3_long_active_pane_ParamLimits

0x5a7d,	// (0x0001081e) tabs_3_long_active_pane

0x5a90,	// (0x00010831) tabs_3_long_passive_pane_ParamLimits

0x5a90,	// (0x00010831) tabs_3_long_passive_pane

0x5aa9,	// (0x0001084a) tabs_3_long_passive_pane_cp_ParamLimits

0x5aa9,	// (0x0001084a) tabs_3_long_passive_pane_cp

0x5a23,	// (0x000107c4) volume_small_pane_g1

0x5a2c,	// (0x000107cd) volume_small_pane_g2

0x5a35,	// (0x000107d6) volume_small_pane_g3

0x5a3e,	// (0x000107df) volume_small_pane_g4

0x5a47,	// (0x000107e8) volume_small_pane_g5

0x5a50,	// (0x000107f1) volume_small_pane_g6

0x5a59,	// (0x000107fa) volume_small_pane_g7

0x5a62,	// (0x00010803) volume_small_pane_g8

0x5a6b,	// (0x0001080c) volume_small_pane_g9

0x5a74,	// (0x00010815) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0001a652) volume_small_pane_g

0x6e3f,	// (0x00011be0) bg_active_tab_pane_cp2_ParamLimits

0x6e3f,	// (0x00011be0) bg_active_tab_pane_cp2

0x6e4d,	// (0x00011bee) tabs_3_active_pane_g1

0x6e55,	// (0x00011bf6) tabs_3_active_pane_t1

0x6e3f,	// (0x00011be0) bg_passive_tab_pane_cp2_ParamLimits

0x6e3f,	// (0x00011be0) bg_passive_tab_pane_cp2

0x6e4d,	// (0x00011bee) tabs_3_passive_pane_g1

0x6e55,	// (0x00011bf6) tabs_3_passive_pane_t1

0x6e3f,	// (0x00011be0) bg_active_tab_pane_cp3_ParamLimits

0x6e3f,	// (0x00011be0) bg_active_tab_pane_cp3

0x6e67,	// (0x00011c08) tabs_4_active_pane_g1

0x6e6f,	// (0x00011c10) tabs_4_active_pane_t1

0x6e3f,	// (0x00011be0) bg_passive_tab_pane_cp3_ParamLimits

0x6e3f,	// (0x00011be0) bg_passive_tab_pane_cp3

0x6e67,	// (0x00011c08) tabs_4_1_passive_pane_g1

0x6e6f,	// (0x00011c10) tabs_4_1_passive_pane_t1

0x8e30,	// (0x00013bd1) list_highlight_pane_cp2

0xa8a7,	// (0x00015648) list_set_pane_ParamLimits

0xa8a7,	// (0x00015648) list_set_pane

0xa94d,	// (0x000156ee) main_pane_set_t1_ParamLimits

0xa94d,	// (0x000156ee) main_pane_set_t1

0xa96d,	// (0x0001570e) main_pane_set_t2_ParamLimits

0xa96d,	// (0x0001570e) main_pane_set_t2

0xa981,	// (0x00015722) main_pane_set_t3_ParamLimits

0xa981,	// (0x00015722) main_pane_set_t3

0xa993,	// (0x00015734) main_pane_set_t4_ParamLimits

0xa993,	// (0x00015734) main_pane_set_t4

0x0003,

0xf981,	// (0x0001a722) main_pane_set_t_ParamLimits

0xf981,	// (0x0001a722) main_pane_set_t

0xa9a5,	// (0x00015746) setting_code_pane

0xa9b1,	// (0x00015752) setting_slider_graphic_pane

0xa9b1,	// (0x00015752) setting_slider_pane

0xa9b1,	// (0x00015752) setting_text_pane

0xa9b1,	// (0x00015752) setting_volume_pane

0x4c1e,	// (0x0000f9bf) volume_set_pane

0x6e3f,	// (0x00011be0) bg_set_opt_pane_cp

0x4c26,	// (0x0000f9c7) setting_slider_pane_t1

0x4c3f,	// (0x0000f9e0) setting_slider_pane_t2

0x4c59,	// (0x0000f9fa) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001a2ff) setting_slider_pane_t

0x4c71,	// (0x0000fa12) slider_set_pane

0x6d5f,	// (0x00011b00) bg_set_opt_pane_cp2

0x6e81,	// (0x00011c22) setting_slider_graphic_pane_g1

0x4c87,	// (0x0000fa28) setting_slider_graphic_pane_t1

0x4c97,	// (0x0000fa38) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001a306) setting_slider_graphic_pane_t

0x4ca7,	// (0x0000fa48) slider_set_pane_cp

0x6d5f,	// (0x00011b00) input_focus_pane_cp1

0xa866,	// (0x00015607) list_set_text_pane

0x6d55,	// (0x00011af6) setting_text_pane_g1

0x6d5f,	// (0x00011b00) input_focus_pane_cp2

0x6d55,	// (0x00011af6) setting_code_pane_g1

0x6e8a,	// (0x00011c2b) setting_code_pane_t1

0x6e98,	// (0x00011c39) set_text_pane_t1_ParamLimits

0x6e98,	// (0x00011c39) set_text_pane_t1

0x7d8c,	// (0x00012b2d) set_opt_bg_pane_g1

0x7d94,	// (0x00012b35) set_opt_bg_pane_g2

0xa840,	// (0x000155e1) set_opt_bg_pane_g3

0x7da4,	// (0x00012b45) set_opt_bg_pane_g4

0x7dac,	// (0x00012b4d) set_opt_bg_pane_g5

0x7db4,	// (0x00012b55) set_opt_bg_pane_g6

0xa84a,	// (0x000155eb) set_opt_bg_pane_g7

0xa852,	// (0x000155f3) set_opt_bg_pane_g8

0xa85c,	// (0x000155fd) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0001a70f) set_opt_bg_pane_g

0xa833,	// (0x000155d4) slider_set_pane_g1

0x5beb,	// (0x0001098c) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0001a700) slider_set_pane_g

0x5b87,	// (0x00010928) volume_set_pane_g1

0x5b8f,	// (0x00010930) volume_set_pane_g2

0x5b97,	// (0x00010938) volume_set_pane_g3

0x5b9f,	// (0x00010940) volume_set_pane_g4

0x5ba7,	// (0x00010948) volume_set_pane_g5

0x5baf,	// (0x00010950) volume_set_pane_g6

0x5bb7,	// (0x00010958) volume_set_pane_g7

0x5bbf,	// (0x00010960) volume_set_pane_g8

0x5bc7,	// (0x00010968) volume_set_pane_g9

0x5bcf,	// (0x00010970) volume_set_pane_g10

0x0009,

0xf937,	// (0x0001a6d8) volume_set_pane_g

0x6eb2,	// (0x00011c53) indicator_pane_ParamLimits

0x6eb2,	// (0x00011c53) indicator_pane

0x6ebe,	// (0x00011c5f) main_idle_pane_g2_ParamLimits

0x6ebe,	// (0x00011c5f) main_idle_pane_g2

0x6ee6,	// (0x00011c87) main_pane_idle_g1_ParamLimits

0x6ee6,	// (0x00011c87) main_pane_idle_g1

0x6ef3,	// (0x00011c94) popup_clock_digital_analogue_window_ParamLimits

0x6ef3,	// (0x00011c94) popup_clock_digital_analogue_window

0x6f0a,	// (0x00011cab) soft_indicator_pane_ParamLimits

0x6f0a,	// (0x00011cab) soft_indicator_pane

0x6f16,	// (0x00011cb7) wallpaper_pane_ParamLimits

0x6f16,	// (0x00011cb7) wallpaper_pane

0x6d55,	// (0x00011af6) wallpaper_pane_g1

0x6f2a,	// (0x00011ccb) indicator_pane_g1_ParamLimits

0x6f2a,	// (0x00011ccb) indicator_pane_g1

0xad33,	// (0x00015ad4) navi_navi_icon_text_pane_srt_g1

0x6f45,	// (0x00011ce6) soft_indicator_pane_t1

0x6f5f,	// (0x00011d00) aid_ps_area_pane

0x6f70,	// (0x00011d11) aid_ps_clock_pane

0x6f7e,	// (0x00011d1f) aid_ps_indicator_pane

0x6f8a,	// (0x00011d2b) indicator_ps_pane_ParamLimits

0x6f8a,	// (0x00011d2b) indicator_ps_pane

0x6f99,	// (0x00011d3a) power_save_pane_g1_ParamLimits

0x6f99,	// (0x00011d3a) power_save_pane_g1

0x6fa5,	// (0x00011d46) power_save_pane_g2_ParamLimits

0x6fa5,	// (0x00011d46) power_save_pane_g2

0x4825,	// (0x0000f5c6) aid_navinavi_width_pane

0x6f5f,	// (0x00011d00) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001a30b) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001a30b) power_save_pane_g

0x6fb3,	// (0x00011d54) power_save_pane_t1_ParamLimits

0x6fb3,	// (0x00011d54) power_save_pane_t1

0x6f70,	// (0x00011d11) aid_ps_clock_pane_ParamLimits

0x6f7e,	// (0x00011d1f) aid_ps_indicator_pane_ParamLimits

0x6fc5,	// (0x00011d66) power_save_pane_t4_ParamLimits

0x6fc5,	// (0x00011d66) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001a310) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001a310) power_save_pane_t

0x6fef,	// (0x00011d90) power_save_t3_ParamLimits

0x6fef,	// (0x00011d90) power_save_t3

0x6fda,	// (0x00011d7b) power_save_t2_ParamLimits

0x6fda,	// (0x00011d7b) power_save_t2

0x7004,	// (0x00011da5) indicator_ps_pane_g1

0x700d,	// (0x00011dae) ai_gene_pane_ParamLimits

0x700d,	// (0x00011dae) ai_gene_pane

0x7019,	// (0x00011dba) ai_links_pane_ParamLimits

0x7019,	// (0x00011dba) ai_links_pane

0x7025,	// (0x00011dc6) indicator_pane_cp1_ParamLimits

0x7025,	// (0x00011dc6) indicator_pane_cp1

0x7031,	// (0x00011dd2) main_pane_idle_g1_cp_ParamLimits

0x7031,	// (0x00011dd2) main_pane_idle_g1_cp

0x703d,	// (0x00011dde) popup_ai_links_title_window

0x7046,	// (0x00011de7) soft_indicator_pane_cp1_ParamLimits

0x7046,	// (0x00011de7) soft_indicator_pane_cp1

0xa605,	// (0x000153a6) ai_links_pane_g1

0xa60e,	// (0x000153af) grid_ai_links_pane

0xa5e8,	// (0x00015389) ai_gene_pane_1

0xa5f3,	// (0x00015394) ai_gene_pane_2

0xa5fc,	// (0x0001539d) list_highlight_pane_cp4

0xa5cc,	// (0x0001536d) cell_ai_link_pane_ParamLimits

0xa5cc,	// (0x0001536d) cell_ai_link_pane

0xa5c4,	// (0x00015365) cell_ai_link_pane_g1

0x729c,	// (0x0001203d) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0001a6b3) cell_ai_link_pane_g

0x6d5f,	// (0x00011b00) grid_highlight_cp2

0x6d5f,	// (0x00011b00) bg_popup_sub_pane_cp1

0x7060,	// (0x00011e01) popup_ai_links_title_window_t1

0xa512,	// (0x000152b3) ai_gene_pane_1_g1_ParamLimits

0xa512,	// (0x000152b3) ai_gene_pane_1_g1

0xa51e,	// (0x000152bf) ai_gene_pane_1_g2_ParamLimits

0xa51e,	// (0x000152bf) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0001a6a9) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0001a6a9) ai_gene_pane_1_g

0xa52b,	// (0x000152cc) ai_gene_pane_1_t1_ParamLimits

0xa52b,	// (0x000152cc) ai_gene_pane_1_t1

0xa55f,	// (0x00015300) grid_ai_soft_ind_pane

0xa4fd,	// (0x0001529e) ai_gene_pane_2_t1_ParamLimits

0xa4fd,	// (0x0001529e) ai_gene_pane_2_t1

0x706f,	// (0x00011e10) main_pane_empty_t1_ParamLimits

0x706f,	// (0x00011e10) main_pane_empty_t1

0x7087,	// (0x00011e28) main_pane_empty_t2_ParamLimits

0x7087,	// (0x00011e28) main_pane_empty_t2

0x709c,	// (0x00011e3d) main_pane_empty_t3_ParamLimits

0x709c,	// (0x00011e3d) main_pane_empty_t3

0x70ae,	// (0x00011e4f) main_pane_empty_t4_ParamLimits

0x70ae,	// (0x00011e4f) main_pane_empty_t4

0x70c0,	// (0x00011e61) main_pane_empty_t5_ParamLimits

0x70c0,	// (0x00011e61) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001a315) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001a315) main_pane_empty_t

0x7e89,	// (0x00012c2a) bg_popup_window_pane_ParamLimits

0x7e89,	// (0x00012c2a) bg_popup_window_pane

0xa26d,	// (0x0001500e) find_popup_pane_cp2_ParamLimits

0xa26d,	// (0x0001500e) find_popup_pane_cp2

0xa279,	// (0x0001501a) heading_pane_ParamLimits

0xa279,	// (0x0001501a) heading_pane

0x6d5f,	// (0x00011b00) bg_popup_sub_pane

0xa1e7,	// (0x00014f88) bg_popup_window_pane_g1_ParamLimits

0xa1e7,	// (0x00014f88) bg_popup_window_pane_g1

0xa1f3,	// (0x00014f94) bg_popup_window_pane_g2_ParamLimits

0xa1f3,	// (0x00014f94) bg_popup_window_pane_g2

0xa1ff,	// (0x00014fa0) bg_popup_window_pane_g3_ParamLimits

0xa1ff,	// (0x00014fa0) bg_popup_window_pane_g3

0xa20b,	// (0x00014fac) bg_popup_window_pane_g4_ParamLimits

0xa20b,	// (0x00014fac) bg_popup_window_pane_g4

0xa217,	// (0x00014fb8) bg_popup_window_pane_g5_ParamLimits

0xa217,	// (0x00014fb8) bg_popup_window_pane_g5

0xa223,	// (0x00014fc4) bg_popup_window_pane_g6_ParamLimits

0xa223,	// (0x00014fc4) bg_popup_window_pane_g6

0xa22f,	// (0x00014fd0) bg_popup_window_pane_g7_ParamLimits

0xa22f,	// (0x00014fd0) bg_popup_window_pane_g7

0xa23b,	// (0x00014fdc) bg_popup_window_pane_g8_ParamLimits

0xa23b,	// (0x00014fdc) bg_popup_window_pane_g8

0xa247,	// (0x00014fe8) bg_popup_window_pane_g9_ParamLimits

0xa247,	// (0x00014fe8) bg_popup_window_pane_g9

0xa253,	// (0x00014ff4) bg_popup_window_pane_g10_ParamLimits

0xa253,	// (0x00014ff4) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0001a671) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0001a671) bg_popup_window_pane_g

0xa17c,	// (0x00014f1d) bg_popup_heading_pane_ParamLimits

0xa17c,	// (0x00014f1d) bg_popup_heading_pane

0x5c73,	// (0x00010a14) tabs_4_passive_pane_cp_srt_ParamLimits

0x5c73,	// (0x00010a14) tabs_4_passive_pane_cp_srt

0x5c85,	// (0x00010a26) tabs_4_passive_pane_srt_ParamLimits

0xa190,	// (0x00014f31) heading_pane_g2

0x5c85,	// (0x00010a26) tabs_4_passive_pane_srt

0x8e30,	// (0x00013bd1) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8e30,	// (0x00013bd1) bg_passive_tab_pane_cp3_srt

0xa198,	// (0x00014f39) heading_pane_t1_ParamLimits

0xa198,	// (0x00014f39) heading_pane_t1

0xa1af,	// (0x00014f50) heading_pane_t2_ParamLimits

0xa1af,	// (0x00014f50) heading_pane_t2

0x0001,

0xf8cb,	// (0x0001a66c) heading_pane_t_ParamLimits

0xf8cb,	// (0x0001a66c) heading_pane_t

0x9c9d,	// (0x00014a3e) bg_popup_heading_pane_g1

0x9d4c,	// (0x00014aed) bg_popup_heading_pane_g2

0x9d56,	// (0x00014af7) bg_popup_heading_pane_g3

0x9d60,	// (0x00014b01) bg_popup_heading_pane_g4

0x9d6a,	// (0x00014b0b) bg_popup_heading_pane_g5

0x9d74,	// (0x00014b15) bg_popup_heading_pane_g6

0x9d7c,	// (0x00014b1d) bg_popup_heading_pane_g7

0x9d84,	// (0x00014b25) bg_popup_heading_pane_g8

0x9d8e,	// (0x00014b2f) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0001a628) bg_popup_heading_pane_g

0x938a,	// (0x0001412b) bg_popup_sub_pane_g1

0x939a,	// (0x0001413b) bg_popup_sub_pane_g2

0x9392,	// (0x00014133) bg_popup_sub_pane_g3

0x93aa,	// (0x0001414b) bg_popup_sub_pane_g4

0x93a2,	// (0x00014143) bg_popup_sub_pane_g5

0x93b2,	// (0x00014153) bg_popup_sub_pane_g6

0x93ba,	// (0x0001415b) bg_popup_sub_pane_g7

0x93ca,	// (0x0001416b) bg_popup_sub_pane_g8

0x93c2,	// (0x00014163) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0001a602) bg_popup_sub_pane_g

0x70d4,	// (0x00011e75) bg_popup_window_pane_cp5_ParamLimits

0x70d4,	// (0x00011e75) bg_popup_window_pane_cp5

0x70f0,	// (0x00011e91) popup_note_window_g1_ParamLimits

0x70f0,	// (0x00011e91) popup_note_window_g1

0x70fc,	// (0x00011e9d) popup_note_window_t1_ParamLimits

0x70fc,	// (0x00011e9d) popup_note_window_t1

0x7112,	// (0x00011eb3) popup_note_window_t2_ParamLimits

0x7112,	// (0x00011eb3) popup_note_window_t2

0x7128,	// (0x00011ec9) popup_note_window_t3_ParamLimits

0x7128,	// (0x00011ec9) popup_note_window_t3

0x713e,	// (0x00011edf) popup_note_window_t4_ParamLimits

0x713e,	// (0x00011edf) popup_note_window_t4

0x7166,	// (0x00011f07) popup_note_window_t5_ParamLimits

0x7166,	// (0x00011f07) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001a320) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001a320) popup_note_window_t

0x71b0,	// (0x00011f51) bg_popup_window_pane_cp6_ParamLimits

0x71b0,	// (0x00011f51) bg_popup_window_pane_cp6

0x9c19,	// (0x000149ba) popup_note_image_window_g1_ParamLimits

0x9c19,	// (0x000149ba) popup_note_image_window_g1

0x9c25,	// (0x000149c6) popup_note_image_window_g2_ParamLimits

0x9c25,	// (0x000149c6) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0001a5f6) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0001a5f6) popup_note_image_window_g

0x9c3e,	// (0x000149df) popup_note_image_window_t1_ParamLimits

0x9c3e,	// (0x000149df) popup_note_image_window_t1

0x9c57,	// (0x000149f8) popup_note_image_window_t2_ParamLimits

0x9c57,	// (0x000149f8) popup_note_image_window_t2

0x9c70,	// (0x00014a11) popup_note_image_window_t3_ParamLimits

0x9c70,	// (0x00014a11) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0001a5fb) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0001a5fb) popup_note_image_window_t

0x9ada,	// (0x0001487b) bg_popup_window_pane_cp7_ParamLimits

0x9ada,	// (0x0001487b) bg_popup_window_pane_cp7

0x9b0a,	// (0x000148ab) popup_note_wait_window_g1_ParamLimits

0x9b0a,	// (0x000148ab) popup_note_wait_window_g1

0x9b16,	// (0x000148b7) popup_note_wait_window_g2_ParamLimits

0x9b16,	// (0x000148b7) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0001a5e4) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0001a5e4) popup_note_wait_window_g

0x9b2e,	// (0x000148cf) popup_note_wait_window_t1_ParamLimits

0x9b2e,	// (0x000148cf) popup_note_wait_window_t1

0x9b55,	// (0x000148f6) popup_note_wait_window_t2_ParamLimits

0x9b55,	// (0x000148f6) popup_note_wait_window_t2

0x9b72,	// (0x00014913) popup_note_wait_window_t3_ParamLimits

0x9b72,	// (0x00014913) popup_note_wait_window_t3

0x9b85,	// (0x00014926) popup_note_wait_window_t4_ParamLimits

0x9b85,	// (0x00014926) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0001a5eb) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0001a5eb) popup_note_wait_window_t

0x9baa,	// (0x0001494b) wait_bar_pane_ParamLimits

0x9baa,	// (0x0001494b) wait_bar_pane

0x6d5f,	// (0x00011b00) wait_anim_pane

0x6d5f,	// (0x00011b00) wait_border_pane

0x6d55,	// (0x00011af6) wait_anim_pane_g1

0x6d55,	// (0x00011af6) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001a49f) wait_anim_pane_g

0x9a7e,	// (0x0001481f) wait_border_pane_g1

0x9a89,	// (0x0001482a) wait_border_pane_g2

0x9a92,	// (0x00014833) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0001a5dd) wait_border_pane_g

0x98e9,	// (0x0001468a) bg_popup_window_pane_cp16_ParamLimits

0x98e9,	// (0x0001468a) bg_popup_window_pane_cp16

0x99e9,	// (0x0001478a) indicator_popup_pane_cp4_ParamLimits

0x99e9,	// (0x0001478a) indicator_popup_pane_cp4

0x99fd,	// (0x0001479e) popup_query_data_window_t1_ParamLimits

0x99fd,	// (0x0001479e) popup_query_data_window_t1

0x9a0f,	// (0x000147b0) popup_query_data_window_t2_ParamLimits

0x9a0f,	// (0x000147b0) popup_query_data_window_t2

0x9a28,	// (0x000147c9) popup_query_data_window_t3_ParamLimits

0x9a28,	// (0x000147c9) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0001a5d6) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0001a5d6) popup_query_data_window_t

0x9a42,	// (0x000147e3) query_popup_data_pane_ParamLimits

0x9a42,	// (0x000147e3) query_popup_data_pane

0x9a56,	// (0x000147f7) query_popup_data_pane_cp1_ParamLimits

0x9a56,	// (0x000147f7) query_popup_data_pane_cp1

0x98e9,	// (0x0001468a) bg_popup_window_pane_cp10_ParamLimits

0x98e9,	// (0x0001468a) bg_popup_window_pane_cp10

0x991b,	// (0x000146bc) indicator_popup_pane_ParamLimits

0x991b,	// (0x000146bc) indicator_popup_pane

0x993d,	// (0x000146de) popup_query_code_window_t1_ParamLimits

0x993d,	// (0x000146de) popup_query_code_window_t1

0x9957,	// (0x000146f8) popup_query_code_window_t2_ParamLimits

0x9957,	// (0x000146f8) popup_query_code_window_t2

0x99a0,	// (0x00014741) popup_query_code_window_t3_ParamLimits

0x99a0,	// (0x00014741) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0001a5cf) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0001a5cf) popup_query_code_window_t

0x99cf,	// (0x00014770) query_popup_pane_ParamLimits

0x99cf,	// (0x00014770) query_popup_pane

0x71b0,	// (0x00011f51) bg_popup_window_pane_cp15_ParamLimits

0x71b0,	// (0x00011f51) bg_popup_window_pane_cp15

0x71ce,	// (0x00011f6f) indicator_popup_pane_cp1_ParamLimits

0x71ce,	// (0x00011f6f) indicator_popup_pane_cp1

0x71e1,	// (0x00011f82) indicator_popup_pane_cp2_ParamLimits

0x71e1,	// (0x00011f82) indicator_popup_pane_cp2

0x71f4,	// (0x00011f95) popup_query_data_code_window_g1_ParamLimits

0x71f4,	// (0x00011f95) popup_query_data_code_window_g1

0x7207,	// (0x00011fa8) popup_query_data_code_window_t1_ParamLimits

0x7207,	// (0x00011fa8) popup_query_data_code_window_t1

0x7219,	// (0x00011fba) popup_query_data_code_window_t2_ParamLimits

0x7219,	// (0x00011fba) popup_query_data_code_window_t2

0x722b,	// (0x00011fcc) popup_query_data_code_window_t3_ParamLimits

0x722b,	// (0x00011fcc) popup_query_data_code_window_t3

0x7241,	// (0x00011fe2) popup_query_data_code_window_t4_ParamLimits

0x7241,	// (0x00011fe2) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001a32b) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001a32b) popup_query_data_code_window_t

0x5934,	// (0x000106d5) list_single_midp_graphic_pane_g3

0x7259,	// (0x00011ffa) query_popup_data_pane_cp2_ParamLimits

0x726c,	// (0x0001200d) query_popup_pane_cp2_ParamLimits

0x726c,	// (0x0001200d) query_popup_pane_cp2

0x6d5f,	// (0x00011b00) bg_popup_window_pane_cp11

0x98d5,	// (0x00014676) heading_pane_cp5

0x7357,	// (0x000120f8) listscroll_popup_info_pane

0x6d5f,	// (0x00011b00) input_focus_pane_cp3

0x727f,	// (0x00012020) query_popup_pane_t1

0x728d,	// (0x0001202e) list_popup_info_pane_ParamLimits

0x728d,	// (0x0001202e) list_popup_info_pane

0x729c,	// (0x0001203d) listscroll_popup_info_pane_g1

0x72a4,	// (0x00012045) scroll_pane_cp7

0x72ae,	// (0x0001204f) popup_info_list_pane_t1_ParamLimits

0x72ae,	// (0x0001204f) popup_info_list_pane_t1

0x72c8,	// (0x00012069) popup_info_list_pane_t2_ParamLimits

0x72c8,	// (0x00012069) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001a334) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001a334) popup_info_list_pane_t

0x6d5f,	// (0x00011b00) bg_popup_window_pane_cp12

0xad4d,	// (0x00015aee) find_popup_pane

0x6e3f,	// (0x00011be0) bg_popup_window_pane_cp3

0x72e2,	// (0x00012083) heading_pane_cp3

0x72ee,	// (0x0001208f) listscroll_popup_graphic_pane

0x6d5f,	// (0x00011b00) bg_popup_window_pane_cp4

0x734d,	// (0x000120ee) heading_pane_cp4

0x7357,	// (0x000120f8) listscroll_popup_colour_pane

0x735f,	// (0x00012100) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x735f,	// (0x00012100) cell_large_graphic_colour_none_popup_pane

0x7373,	// (0x00012114) grid_large_graphic_colour_popup_pane_ParamLimits

0x7373,	// (0x00012114) grid_large_graphic_colour_popup_pane

0x739f,	// (0x00012140) listscroll_popup_colour_pane_g1_ParamLimits

0x739f,	// (0x00012140) listscroll_popup_colour_pane_g1

0x73b6,	// (0x00012157) listscroll_popup_colour_pane_g2_ParamLimits

0x73b6,	// (0x00012157) listscroll_popup_colour_pane_g2

0x73cd,	// (0x0001216e) listscroll_popup_colour_pane_g3_ParamLimits

0x73cd,	// (0x0001216e) listscroll_popup_colour_pane_g3

0x73dd,	// (0x0001217e) listscroll_popup_colour_pane_g4_ParamLimits

0x73dd,	// (0x0001217e) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001a339) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001a339) listscroll_popup_colour_pane_g

0x73f1,	// (0x00012192) scroll_pane_cp6_ParamLimits

0x73f1,	// (0x00012192) scroll_pane_cp6

0x7403,	// (0x000121a4) cell_large_graphic_colour_popup_pane_ParamLimits

0x7403,	// (0x000121a4) cell_large_graphic_colour_popup_pane

0x7422,	// (0x000121c3) cell_large_graphic_colour_none_popup_pane_t1

0x6d5f,	// (0x00011b00) grid_highlight_pane_cp5

0x7431,	// (0x000121d2) cell_large_graphic_colour_popup_pane_g1

0x7439,	// (0x000121da) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001a342) cell_large_graphic_colour_popup_pane_g

0x7441,	// (0x000121e2) cell_large_graphic_colour_popup_pane_g2_copy1

0x744a,	// (0x000121eb) grid_highlight_pane_cp4

0x7452,	// (0x000121f3) bg_popup_window_pane_cp8_ParamLimits

0x7452,	// (0x000121f3) bg_popup_window_pane_cp8

0x746d,	// (0x0001220e) popup_snote_single_text_window_g1_ParamLimits

0x746d,	// (0x0001220e) popup_snote_single_text_window_g1

0x747f,	// (0x00012220) popup_snote_single_text_window_t1_ParamLimits

0x747f,	// (0x00012220) popup_snote_single_text_window_t1

0x7492,	// (0x00012233) popup_snote_single_text_window_t2_ParamLimits

0x7492,	// (0x00012233) popup_snote_single_text_window_t2

0x74a5,	// (0x00012246) popup_snote_single_text_window_t3_ParamLimits

0x74a5,	// (0x00012246) popup_snote_single_text_window_t3

0x74de,	// (0x0001227f) popup_snote_single_text_window_t4_ParamLimits

0x74de,	// (0x0001227f) popup_snote_single_text_window_t4

0x7512,	// (0x000122b3) popup_snote_single_text_window_t5_ParamLimits

0x7512,	// (0x000122b3) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001a347) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001a347) popup_snote_single_text_window_t

0x7541,	// (0x000122e2) bg_popup_window_pane_cp9_ParamLimits

0x7541,	// (0x000122e2) bg_popup_window_pane_cp9

0x746d,	// (0x0001220e) popup_snote_single_graphic_window_g1_ParamLimits

0x746d,	// (0x0001220e) popup_snote_single_graphic_window_g1

0x754f,	// (0x000122f0) popup_snote_single_graphic_window_g2_ParamLimits

0x754f,	// (0x000122f0) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001a352) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001a352) popup_snote_single_graphic_window_g

0x755b,	// (0x000122fc) popup_snote_single_graphic_window_t1_ParamLimits

0x755b,	// (0x000122fc) popup_snote_single_graphic_window_t1

0x756e,	// (0x0001230f) popup_snote_single_graphic_window_t2_ParamLimits

0x756e,	// (0x0001230f) popup_snote_single_graphic_window_t2

0x7581,	// (0x00012322) popup_snote_single_graphic_window_t3_ParamLimits

0x7581,	// (0x00012322) popup_snote_single_graphic_window_t3

0x75ba,	// (0x0001235b) popup_snote_single_graphic_window_t4_ParamLimits

0x75ba,	// (0x0001235b) popup_snote_single_graphic_window_t4

0x75ee,	// (0x0001238f) popup_snote_single_graphic_window_t5_ParamLimits

0x75ee,	// (0x0001238f) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001a357) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001a357) popup_snote_single_graphic_window_t

0xac8f,	// (0x00015a30) grid_graphic_popup_pane_ParamLimits

0xac8f,	// (0x00015a30) grid_graphic_popup_pane

0xacb9,	// (0x00015a5a) listscroll_popup_graphic_pane_g1_ParamLimits

0xacb9,	// (0x00015a5a) listscroll_popup_graphic_pane_g1

0xaccd,	// (0x00015a6e) listscroll_popup_graphic_pane_g2_ParamLimits

0xaccd,	// (0x00015a6e) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0001a74c) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0001a74c) listscroll_popup_graphic_pane_g

0xace1,	// (0x00015a82) scroll_pane_cp5

0xac2e,	// (0x000159cf) cell_graphic_popup_pane_ParamLimits

0xac2e,	// (0x000159cf) cell_graphic_popup_pane

0xac0f,	// (0x000159b0) cell_graphic_popup_pane_g1

0xac17,	// (0x000159b8) cell_graphic_popup_pane_g2

0x7441,	// (0x000121e2) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0001a745) cell_graphic_popup_pane_g

0xac20,	// (0x000159c1) cell_graphic_popup_pane_t2

0x744a,	// (0x000121eb) grid_highlight_pane_cp3

0x762f,	// (0x000123d0) list_gen_pane_ParamLimits

0x762f,	// (0x000123d0) list_gen_pane

0x7661,	// (0x00012402) scroll_pane

0xab67,	// (0x00015908) bg_list_pane_g1_ParamLimits

0xab67,	// (0x00015908) bg_list_pane_g1

0xab84,	// (0x00015925) bg_list_pane_g2_ParamLimits

0xab84,	// (0x00015925) bg_list_pane_g2

0xab99,	// (0x0001593a) bg_list_pane_g3_ParamLimits

0xab99,	// (0x0001593a) bg_list_pane_g3

0xabad,	// (0x0001594e) bg_list_pane_g4_ParamLimits

0xabad,	// (0x0001594e) bg_list_pane_g4

0xabc1,	// (0x00015962) bg_list_pane_g5_ParamLimits

0xabc1,	// (0x00015962) bg_list_pane_g5

0x0004,

0xf999,	// (0x0001a73a) bg_list_pane_g_ParamLimits

0xf999,	// (0x0001a73a) bg_list_pane_g

0xaa6a,	// (0x0001580b) list_double2_graphic_large_graphic_pane_ParamLimits

0xaa6a,	// (0x0001580b) list_double2_graphic_large_graphic_pane

0xaa6a,	// (0x0001580b) list_double2_graphic_pane_ParamLimits

0xaa6a,	// (0x0001580b) list_double2_graphic_pane

0xaa6a,	// (0x0001580b) list_double2_large_graphic_pane_ParamLimits

0xaa6a,	// (0x0001580b) list_double2_large_graphic_pane

0xaa6a,	// (0x0001580b) list_double2_pane_ParamLimits

0xaa6a,	// (0x0001580b) list_double2_pane

0xaa6a,	// (0x0001580b) list_double_graphic_heading_pane_ParamLimits

0xaa6a,	// (0x0001580b) list_double_graphic_heading_pane

0xaa6a,	// (0x0001580b) list_double_graphic_pane_ParamLimits

0xaa6a,	// (0x0001580b) list_double_graphic_pane

0xaa6a,	// (0x0001580b) list_double_heading_pane_ParamLimits

0xaa6a,	// (0x0001580b) list_double_heading_pane

0xaa6a,	// (0x0001580b) list_double_large_graphic_pane_ParamLimits

0xaa6a,	// (0x0001580b) list_double_large_graphic_pane

0xaa6a,	// (0x0001580b) list_double_number_pane_ParamLimits

0xaa6a,	// (0x0001580b) list_double_number_pane

0xaa6a,	// (0x0001580b) list_double_pane_ParamLimits

0xaa6a,	// (0x0001580b) list_double_pane

0xaa6a,	// (0x0001580b) list_double_time_pane_ParamLimits

0xaa6a,	// (0x0001580b) list_double_time_pane

0xaa6a,	// (0x0001580b) list_setting_number_pane_ParamLimits

0xaa6a,	// (0x0001580b) list_setting_number_pane

0xaa6a,	// (0x0001580b) list_setting_pane_ParamLimits

0xaa6a,	// (0x0001580b) list_setting_pane

0xaad3,	// (0x00015874) list_single_2graphic_pane_ParamLimits

0xaad3,	// (0x00015874) list_single_2graphic_pane

0xaad3,	// (0x00015874) list_single_graphic_heading_pane_ParamLimits

0xaad3,	// (0x00015874) list_single_graphic_heading_pane

0xaad3,	// (0x00015874) list_single_graphic_pane_ParamLimits

0xaad3,	// (0x00015874) list_single_graphic_pane

0xaad3,	// (0x00015874) list_single_heading_pane_ParamLimits

0xaad3,	// (0x00015874) list_single_heading_pane

0xab48,	// (0x000158e9) list_single_large_graphic_pane_ParamLimits

0xab48,	// (0x000158e9) list_single_large_graphic_pane

0xaad3,	// (0x00015874) list_single_number_heading_pane_ParamLimits

0xaad3,	// (0x00015874) list_single_number_heading_pane

0xaad3,	// (0x00015874) list_single_number_pane_ParamLimits

0xaad3,	// (0x00015874) list_single_number_pane

0xaad3,	// (0x00015874) list_single_pane_ParamLimits

0xaad3,	// (0x00015874) list_single_pane

0x6d5f,	// (0x00011b00) list_highlight_pane_cp1

0x76a1,	// (0x00012442) list_single_pane_g1_ParamLimits

0x76a1,	// (0x00012442) list_single_pane_g1

0x76ad,	// (0x0001244e) list_single_pane_g2_ParamLimits

0x76ad,	// (0x0001244e) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001a369) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001a369) list_single_pane_g

0xaa23,	// (0x000157c4) list_single_pane_t1_ParamLimits

0xaa23,	// (0x000157c4) list_single_pane_t1

0x76a1,	// (0x00012442) list_single_number_pane_g1_ParamLimits

0x76a1,	// (0x00012442) list_single_number_pane_g1

0x76ad,	// (0x0001244e) list_single_number_pane_g2_ParamLimits

0x76ad,	// (0x0001244e) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001a369) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001a369) list_single_number_pane_g

0xa7af,	// (0x00015550) list_single_number_pane_t1_ParamLimits

0xa7af,	// (0x00015550) list_single_number_pane_t1

0xa7c5,	// (0x00015566) list_single_number_pane_t2_ParamLimits

0xa7c5,	// (0x00015566) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0001a6fb) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0001a6fb) list_single_number_pane_t

0x7695,	// (0x00012436) list_single_graphic_pane_g1_ParamLimits

0x7695,	// (0x00012436) list_single_graphic_pane_g1

0x76a1,	// (0x00012442) list_single_graphic_pane_g2_ParamLimits

0x76a1,	// (0x00012442) list_single_graphic_pane_g2

0x76ad,	// (0x0001244e) list_single_graphic_pane_g3_ParamLimits

0x76ad,	// (0x0001244e) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001a362) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001a362) list_single_graphic_pane_g

0x76b9,	// (0x0001245a) list_single_graphic_pane_t1_ParamLimits

0x76b9,	// (0x0001245a) list_single_graphic_pane_t1

0x76a1,	// (0x00012442) list_single_heading_pane_g1_ParamLimits

0x76a1,	// (0x00012442) list_single_heading_pane_g1

0x76ad,	// (0x0001244e) list_single_heading_pane_g2_ParamLimits

0x76ad,	// (0x0001244e) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001a369) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001a369) list_single_heading_pane_g

0x76cf,	// (0x00012470) list_single_heading_pane_t1_ParamLimits

0x76cf,	// (0x00012470) list_single_heading_pane_t1

0x76e5,	// (0x00012486) list_single_heading_pane_t2_ParamLimits

0x76e5,	// (0x00012486) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001a36e) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001a36e) list_single_heading_pane_t

0x76a1,	// (0x00012442) list_single_number_heading_pane_g1_ParamLimits

0x76a1,	// (0x00012442) list_single_number_heading_pane_g1

0x76ad,	// (0x0001244e) list_single_number_heading_pane_g2_ParamLimits

0x76ad,	// (0x0001244e) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001a369) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001a369) list_single_number_heading_pane_g

0x76cf,	// (0x00012470) list_single_number_heading_pane_t1_ParamLimits

0x76cf,	// (0x00012470) list_single_number_heading_pane_t1

0x76f7,	// (0x00012498) list_single_number_heading_pane_t2_ParamLimits

0x76f7,	// (0x00012498) list_single_number_heading_pane_t2

0x7709,	// (0x000124aa) list_single_number_heading_pane_t3_ParamLimits

0x7709,	// (0x000124aa) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001a373) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001a373) list_single_number_heading_pane_t

0x771b,	// (0x000124bc) list_single_graphic_heading_pane_g1_ParamLimits

0x771b,	// (0x000124bc) list_single_graphic_heading_pane_g1

0x7727,	// (0x000124c8) list_single_graphic_heading_pane_g4_ParamLimits

0x7727,	// (0x000124c8) list_single_graphic_heading_pane_g4

0x76ad,	// (0x0001244e) list_single_graphic_heading_pane_g5_ParamLimits

0x76ad,	// (0x0001244e) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001a37a) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001a37a) list_single_graphic_heading_pane_g

0x76cf,	// (0x00012470) list_single_graphic_heading_pane_t1_ParamLimits

0x76cf,	// (0x00012470) list_single_graphic_heading_pane_t1

0x7738,	// (0x000124d9) list_single_graphic_heading_pane_t2_ParamLimits

0x7738,	// (0x000124d9) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001a381) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001a381) list_single_graphic_heading_pane_t

0x774a,	// (0x000124eb) list_single_large_graphic_pane_g1_ParamLimits

0x774a,	// (0x000124eb) list_single_large_graphic_pane_g1

0x7756,	// (0x000124f7) list_single_large_graphic_pane_g2_ParamLimits

0x7756,	// (0x000124f7) list_single_large_graphic_pane_g2

0x7762,	// (0x00012503) list_single_large_graphic_pane_g3_ParamLimits

0x7762,	// (0x00012503) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001a386) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001a386) list_single_large_graphic_pane_g

0x9a89,	// (0x0001482a) wait_border_pane_g2_copy1

0x776e,	// (0x0001250f) list_single_large_graphic_pane_g4_cp2

0x7776,	// (0x00012517) list_single_large_graphic_pane_t1_ParamLimits

0x7776,	// (0x00012517) list_single_large_graphic_pane_t1

0x778c,	// (0x0001252d) list_double_pane_g1_ParamLimits

0x778c,	// (0x0001252d) list_double_pane_g1

0x7798,	// (0x00012539) list_double_pane_g2_ParamLimits

0x7798,	// (0x00012539) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001a38d) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001a38d) list_double_pane_g

0x77a4,	// (0x00012545) list_double_pane_t1_ParamLimits

0x77a4,	// (0x00012545) list_double_pane_t1

0x77ba,	// (0x0001255b) list_double_pane_t2_ParamLimits

0x77ba,	// (0x0001255b) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001a392) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001a392) list_double_pane_t

0x77cc,	// (0x0001256d) list_double2_pane_g1_ParamLimits

0x77cc,	// (0x0001256d) list_double2_pane_g1

0x77dd,	// (0x0001257e) list_double2_pane_g2_ParamLimits

0x77dd,	// (0x0001257e) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001a397) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001a397) list_double2_pane_g

0x77e9,	// (0x0001258a) list_double2_pane_t1_ParamLimits

0x77e9,	// (0x0001258a) list_double2_pane_t1

0x77ff,	// (0x000125a0) list_double2_pane_t2_ParamLimits

0x77ff,	// (0x000125a0) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001a39c) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001a39c) list_double2_pane_t

0x778c,	// (0x0001252d) list_double_number_pane_g1_ParamLimits

0x778c,	// (0x0001252d) list_double_number_pane_g1

0x7798,	// (0x00012539) list_double_number_pane_g2_ParamLimits

0x7798,	// (0x00012539) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001a38d) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001a38d) list_double_number_pane_g

0x7811,	// (0x000125b2) list_double_number_pane_t1_ParamLimits

0x7811,	// (0x000125b2) list_double_number_pane_t1

0x7823,	// (0x000125c4) list_double_number_pane_t2_ParamLimits

0x7823,	// (0x000125c4) list_double_number_pane_t2

0x7839,	// (0x000125da) list_double_number_pane_t3_ParamLimits

0x7839,	// (0x000125da) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001a3a1) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001a3a1) list_double_number_pane_t

0x784b,	// (0x000125ec) list_double_graphic_pane_g1_ParamLimits

0x784b,	// (0x000125ec) list_double_graphic_pane_g1

0x7857,	// (0x000125f8) list_double_graphic_pane_g2_ParamLimits

0x7857,	// (0x000125f8) list_double_graphic_pane_g2

0x7866,	// (0x00012607) list_double_graphic_pane_g3_ParamLimits

0x7866,	// (0x00012607) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001a3a8) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001a3a8) list_double_graphic_pane_g

0x787e,	// (0x0001261f) list_double_graphic_pane_t1_ParamLimits

0x787e,	// (0x0001261f) list_double_graphic_pane_t1

0x7894,	// (0x00012635) list_double_graphic_pane_t2_ParamLimits

0x7894,	// (0x00012635) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001a3b1) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001a3b1) list_double_graphic_pane_t

0x78a6,	// (0x00012647) list_double2_graphic_pane_g1_ParamLimits

0x78a6,	// (0x00012647) list_double2_graphic_pane_g1

0x78b2,	// (0x00012653) list_double2_graphic_pane_g2_ParamLimits

0x78b2,	// (0x00012653) list_double2_graphic_pane_g2

0x77dd,	// (0x0001257e) list_double2_graphic_pane_g3_ParamLimits

0x77dd,	// (0x0001257e) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001a3b6) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001a3b6) list_double2_graphic_pane_g

0x78be,	// (0x0001265f) list_double2_graphic_pane_t1_ParamLimits

0x78be,	// (0x0001265f) list_double2_graphic_pane_t1

0x78d4,	// (0x00012675) list_double2_graphic_pane_t2_ParamLimits

0x78d4,	// (0x00012675) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001a3bd) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001a3bd) list_double2_graphic_pane_t

0x78e6,	// (0x00012687) list_double_large_graphic_pane_g1_ParamLimits

0x78e6,	// (0x00012687) list_double_large_graphic_pane_g1

0x7905,	// (0x000126a6) list_double_large_graphic_pane_g2_ParamLimits

0x7905,	// (0x000126a6) list_double_large_graphic_pane_g2

0x7798,	// (0x00012539) list_double_large_graphic_pane_g3_ParamLimits

0x7798,	// (0x00012539) list_double_large_graphic_pane_g3

0x7916,	// (0x000126b7) list_double_large_graphic_pane_g4_ParamLimits

0x7916,	// (0x000126b7) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001a3c2) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001a3c2) list_double_large_graphic_pane_g

0x793c,	// (0x000126dd) list_double_large_graphic_pane_t1_ParamLimits

0x793c,	// (0x000126dd) list_double_large_graphic_pane_t1

0x7955,	// (0x000126f6) list_double_large_graphic_pane_t2_ParamLimits

0x7955,	// (0x000126f6) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001a3cd) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001a3cd) list_double_large_graphic_pane_t

0x7967,	// (0x00012708) list_double2_large_graphic_pane_g1_ParamLimits

0x7967,	// (0x00012708) list_double2_large_graphic_pane_g1

0x77cc,	// (0x0001256d) list_double2_large_graphic_pane_g2_ParamLimits

0x77cc,	// (0x0001256d) list_double2_large_graphic_pane_g2

0x77dd,	// (0x0001257e) list_double2_large_graphic_pane_g3_ParamLimits

0x77dd,	// (0x0001257e) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001a3d2) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001a3d2) list_double2_large_graphic_pane_g

0x7973,	// (0x00012714) list_double2_large_graphic_pane_t1_ParamLimits

0x7973,	// (0x00012714) list_double2_large_graphic_pane_t1

0x7989,	// (0x0001272a) list_double2_large_graphic_pane_t2_ParamLimits

0x7989,	// (0x0001272a) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001a3d9) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001a3d9) list_double2_large_graphic_pane_t

0x799b,	// (0x0001273c) list_double_heading_pane_g1_ParamLimits

0x799b,	// (0x0001273c) list_double_heading_pane_g1

0x79ac,	// (0x0001274d) list_double_heading_pane_g2_ParamLimits

0x79ac,	// (0x0001274d) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001a3de) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001a3de) list_double_heading_pane_g

0x79b8,	// (0x00012759) list_double_heading_pane_t1_ParamLimits

0x79b8,	// (0x00012759) list_double_heading_pane_t1

0x79ce,	// (0x0001276f) list_double_heading_pane_t2_ParamLimits

0x79ce,	// (0x0001276f) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001a3e3) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001a3e3) list_double_heading_pane_t

0x79e0,	// (0x00012781) list_double_graphic_heading_pane_g1_ParamLimits

0x79e0,	// (0x00012781) list_double_graphic_heading_pane_g1

0x799b,	// (0x0001273c) list_double_graphic_heading_pane_g2_ParamLimits

0x799b,	// (0x0001273c) list_double_graphic_heading_pane_g2

0x79ac,	// (0x0001274d) list_double_graphic_heading_pane_g3_ParamLimits

0x79ac,	// (0x0001274d) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001a3e8) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001a3e8) list_double_graphic_heading_pane_g

0x79ec,	// (0x0001278d) list_double_graphic_heading_pane_t1_ParamLimits

0x79ec,	// (0x0001278d) list_double_graphic_heading_pane_t1

0x7a02,	// (0x000127a3) list_double_graphic_heading_pane_t2_ParamLimits

0x7a02,	// (0x000127a3) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001a3ef) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001a3ef) list_double_graphic_heading_pane_t

0x7905,	// (0x000126a6) list_double_time_pane_g1_ParamLimits

0x7905,	// (0x000126a6) list_double_time_pane_g1

0x7798,	// (0x00012539) list_double_time_pane_g2_ParamLimits

0x7798,	// (0x00012539) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001a3f4) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001a3f4) list_double_time_pane_g

0x7a14,	// (0x000127b5) list_double_time_pane_t1_ParamLimits

0x7a14,	// (0x000127b5) list_double_time_pane_t1

0x7a2a,	// (0x000127cb) list_double_time_pane_t2_ParamLimits

0x7a2a,	// (0x000127cb) list_double_time_pane_t2

0x7a3c,	// (0x000127dd) list_double_time_pane_t3_ParamLimits

0x7a3c,	// (0x000127dd) list_double_time_pane_t3

0x7a4e,	// (0x000127ef) list_double_time_pane_t4_ParamLimits

0x7a4e,	// (0x000127ef) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001a3f9) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001a3f9) list_double_time_pane_t

0x78b2,	// (0x00012653) list_setting_pane_g1_ParamLimits

0x78b2,	// (0x00012653) list_setting_pane_g1

0x77dd,	// (0x0001257e) list_setting_pane_g2_ParamLimits

0x77dd,	// (0x0001257e) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001a402) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001a402) list_setting_pane_g

0x7a60,	// (0x00012801) list_setting_pane_t1_ParamLimits

0x7a60,	// (0x00012801) list_setting_pane_t1

0x7a77,	// (0x00012818) list_setting_pane_t2_ParamLimits

0x7a77,	// (0x00012818) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001a407) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001a407) list_setting_pane_t

0x7ab6,	// (0x00012857) set_value_pane_cp_ParamLimits

0x7ab6,	// (0x00012857) set_value_pane_cp

0x78b2,	// (0x00012653) list_setting_number_pane_g1_ParamLimits

0x78b2,	// (0x00012653) list_setting_number_pane_g1

0x77dd,	// (0x0001257e) list_setting_number_pane_g2_ParamLimits

0x77dd,	// (0x0001257e) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001a402) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001a402) list_setting_number_pane_g

0x7ac2,	// (0x00012863) list_setting_number_pane_t1_ParamLimits

0x7ac2,	// (0x00012863) list_setting_number_pane_t1

0x7ad6,	// (0x00012877) list_setting_number_pane_t2_ParamLimits

0x7ad6,	// (0x00012877) list_setting_number_pane_t2

0x7aed,	// (0x0001288e) list_setting_number_pane_t3_ParamLimits

0x7aed,	// (0x0001288e) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001a40e) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001a40e) list_setting_number_pane_t

0x7ab6,	// (0x00012857) set_value_pane_ParamLimits

0x7ab6,	// (0x00012857) set_value_pane

0x7b30,	// (0x000128d1) bg_set_opt_pane_ParamLimits

0x7b30,	// (0x000128d1) bg_set_opt_pane

0x7b51,	// (0x000128f2) set_value_pane_t1

0x7b5f,	// (0x00012900) slider_set_pane_cp3

0x7b68,	// (0x00012909) volume_small_pane_cp

0x7b71,	// (0x00012912) list_form_gen_pane

0x7b7a,	// (0x0001291b) scroll_pane_cp8

0x7b93,	// (0x00012934) form_field_data_pane_ParamLimits

0x7b93,	// (0x00012934) form_field_data_pane

0x7bb5,	// (0x00012956) form_field_data_wide_pane_ParamLimits

0x7bb5,	// (0x00012956) form_field_data_wide_pane

0x7bd8,	// (0x00012979) form_field_popup_pane_ParamLimits

0x7bd8,	// (0x00012979) form_field_popup_pane

0x7bf8,	// (0x00012999) form_field_popup_wide_pane_ParamLimits

0x7bf8,	// (0x00012999) form_field_popup_wide_pane

0x7c15,	// (0x000129b6) form_field_slider_pane_ParamLimits

0x7c15,	// (0x000129b6) form_field_slider_pane

0x7c28,	// (0x000129c9) form_field_slider_wide_pane_ParamLimits

0x7c28,	// (0x000129c9) form_field_slider_wide_pane

0x7c3b,	// (0x000129dc) data_form_pane

0x7c51,	// (0x000129f2) form_field_data_pane_t1

0x7c69,	// (0x00012a0a) input_focus_pane

0x7c77,	// (0x00012a18) data_form_wide_pane

0x7ca3,	// (0x00012a44) form_field_data_wide_pane_t1

0x745f,	// (0x00012200) input_focus_pane_cp6

0x7cc2,	// (0x00012a63) form_field_popup_pane_t1

0x7c69,	// (0x00012a0a) input_focus_pane_cp7

0x7cda,	// (0x00012a7b) list_form_pane

0x7cee,	// (0x00012a8f) form_field_popup_wide_pane_t1

0x7c69,	// (0x00012a0a) input_focus_pane_cp8

0x7d00,	// (0x00012aa1) list_form_wide_pane

0x7d14,	// (0x00012ab5) form_field_slider_pane_t1_ParamLimits

0x7d14,	// (0x00012ab5) form_field_slider_pane_t1

0x7d26,	// (0x00012ac7) form_field_slider_pane_t2_ParamLimits

0x7d26,	// (0x00012ac7) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001a41e) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001a41e) form_field_slider_pane_t

0x70d4,	// (0x00011e75) input_focus_pane_cp9_ParamLimits

0x70d4,	// (0x00011e75) input_focus_pane_cp9

0x7d38,	// (0x00012ad9) slider_cont_pane_ParamLimits

0x7d38,	// (0x00012ad9) slider_cont_pane

0x7d4c,	// (0x00012aed) form_field_slider_wide_pane_t1_ParamLimits

0x7d4c,	// (0x00012aed) form_field_slider_wide_pane_t1

0x7d5e,	// (0x00012aff) form_field_slider_wide_pane_t2_ParamLimits

0x7d5e,	// (0x00012aff) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001a423) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001a423) form_field_slider_wide_pane_t

0x70d4,	// (0x00011e75) input_focus_pane_cp10_ParamLimits

0x70d4,	// (0x00011e75) input_focus_pane_cp10

0x7d70,	// (0x00012b11) slider_cont_pane_cp1_ParamLimits

0x7d70,	// (0x00012b11) slider_cont_pane_cp1

0x7d84,	// (0x00012b25) slider_form_pane_cp

0x7d8c,	// (0x00012b2d) input_focus_pane_g1

0x7d94,	// (0x00012b35) input_focus_pane_g2

0x7d9c,	// (0x00012b3d) input_focus_pane_g3

0x7da4,	// (0x00012b45) input_focus_pane_g4

0x7dac,	// (0x00012b4d) input_focus_pane_g5

0x7db4,	// (0x00012b55) input_focus_pane_g6

0x7dbc,	// (0x00012b5d) input_focus_pane_g7

0x7dc4,	// (0x00012b65) input_focus_pane_g8

0x7dcc,	// (0x00012b6d) input_focus_pane_g9

0x6d55,	// (0x00011af6) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001a428) input_focus_pane_g

0x9a92,	// (0x00014833) wait_border_pane_g3_copy1

0x7dd4,	// (0x00012b75) data_form_pane_t1

0x6d55,	// (0x00011af6) wait_anim_pane_g1_copy1

0xaa06,	// (0x000157a7) data_form_wide_pane_t1

0x7def,	// (0x00012b90) list_form_graphic_pane_cp_ParamLimits

0x7def,	// (0x00012b90) list_form_graphic_pane_cp

0xa9db,	// (0x0001577c) slider_form_pane_g1

0xa9e4,	// (0x00015785) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0001a72b) slider_form_pane_g

0x7e08,	// (0x00012ba9) list_form_graphic_pane_ParamLimits

0x7e08,	// (0x00012ba9) list_form_graphic_pane

0x7e24,	// (0x00012bc5) list_form_graphic_pane_g1

0x7e2c,	// (0x00012bcd) list_form_graphic_pane_t1_ParamLimits

0x7e2c,	// (0x00012bcd) list_form_graphic_pane_t1

0x6e3f,	// (0x00011be0) list_highlight_pane_cp5_ParamLimits

0x6e3f,	// (0x00011be0) list_highlight_pane_cp5

0x7e41,	// (0x00012be2) find_pane_g1

0x7e4a,	// (0x00012beb) input_find_pane

0x7e53,	// (0x00012bf4) input_find_pane_g1_ParamLimits

0x7e53,	// (0x00012bf4) input_find_pane_g1

0x7e5f,	// (0x00012c00) input_find_pane_t1_ParamLimits

0x7e5f,	// (0x00012c00) input_find_pane_t1

0x7e74,	// (0x00012c15) input_find_pane_t2_ParamLimits

0x7e74,	// (0x00012c15) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001a43d) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001a43d) input_find_pane_t

0x7e89,	// (0x00012c2a) input_focus_pane_cp5_ParamLimits

0x7e89,	// (0x00012c2a) input_focus_pane_cp5

0x7ea3,	// (0x00012c44) bg_popup_window_pane_cp2_ParamLimits

0x7ea3,	// (0x00012c44) bg_popup_window_pane_cp2

0x7eb0,	// (0x00012c51) listscroll_menu_pane_ParamLimits

0x7eb0,	// (0x00012c51) listscroll_menu_pane

0x7ebc,	// (0x00012c5d) popup_submenu_window_ParamLimits

0x7ebc,	// (0x00012c5d) popup_submenu_window

0x7ee8,	// (0x00012c89) find_popup_pane_g1

0x7ef0,	// (0x00012c91) input_popup_find_pane_cp

0x7e89,	// (0x00012c2a) input_focus_pane_cp4_ParamLimits

0x7e89,	// (0x00012c2a) input_focus_pane_cp4

0x7f06,	// (0x00012ca7) input_popup_find_pane_t1_ParamLimits

0x7f06,	// (0x00012ca7) input_popup_find_pane_t1

0x6d5f,	// (0x00011b00) bg_popup_sub_pane_cp

0x7f34,	// (0x00012cd5) listscroll_popup_sub_pane

0x7f3c,	// (0x00012cdd) list_submenu_pane_ParamLimits

0x7f3c,	// (0x00012cdd) list_submenu_pane

0x7f4d,	// (0x00012cee) scroll_pane_cp4

0x7f55,	// (0x00012cf6) list_single_popup_submenu_pane_ParamLimits

0x7f55,	// (0x00012cf6) list_single_popup_submenu_pane

0x7f69,	// (0x00012d0a) list_single_popup_submenu_pane_g1

0x7f71,	// (0x00012d12) list_single_popup_submenu_pane_t1_ParamLimits

0x7f71,	// (0x00012d12) list_single_popup_submenu_pane_t1

0x6e3f,	// (0x00011be0) bg_active_tab_pane_cp1_ParamLimits

0x6e3f,	// (0x00011be0) bg_active_tab_pane_cp1

0x7f86,	// (0x00012d27) tabs_2_active_pane_g1

0x7f8e,	// (0x00012d2f) tabs_2_active_pane_t1

0x6e3f,	// (0x00011be0) bg_passive_tab_pane_cp1_ParamLimits

0x6e3f,	// (0x00011be0) bg_passive_tab_pane_cp1

0x7f86,	// (0x00012d27) tabs_2_passive_pane_g1

0x7f8e,	// (0x00012d2f) tabs_2_passive_pane_t1

0x7fa0,	// (0x00012d41) bg_active_tab_pane_cp4

0x7fae,	// (0x00012d4f) tabs_2_long_active_pane_t1

0x7fc1,	// (0x00012d62) bg_passive_tab_pane_cp4

0x593c,	// (0x000106dd) list_single_midp_graphic_pane_g4_ParamLimits

0x7fa0,	// (0x00012d41) bg_active_tab_pane_cp5

0x7fcd,	// (0x00012d6e) tabs_3_long_active_pane_t1

0x7fc1,	// (0x00012d62) bg_passive_tab_pane_cp5

0x593c,	// (0x000106dd) list_single_midp_graphic_pane_g4

0x6e3f,	// (0x00011be0) bg_popup_window_pane_cp13_ParamLimits

0x6e3f,	// (0x00011be0) bg_popup_window_pane_cp13

0x7fe8,	// (0x00012d89) listscroll_popup_fast_pane_ParamLimits

0x7fe8,	// (0x00012d89) listscroll_popup_fast_pane

0x7ff7,	// (0x00012d98) grid_popup_fast_pane_ParamLimits

0x7ff7,	// (0x00012d98) grid_popup_fast_pane

0x8009,	// (0x00012daa) scroll_pane_cp9_ParamLimits

0x8009,	// (0x00012daa) scroll_pane_cp9

0xc90d,	// (0x000176ae) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc90d,	// (0x000176ae) list_single_graphic_hl_pane_t1_cp2

0x802d,	// (0x00012dce) input_focus_pane_cp20_ParamLimits

0x802d,	// (0x00012dce) input_focus_pane_cp20

0x803b,	// (0x00012ddc) query_popup_data_pane_t1_ParamLimits

0x803b,	// (0x00012ddc) query_popup_data_pane_t1

0x804e,	// (0x00012def) query_popup_data_pane_t2_ParamLimits

0x804e,	// (0x00012def) query_popup_data_pane_t2

0x8094,	// (0x00012e35) query_popup_data_pane_t3_ParamLimits

0x8094,	// (0x00012e35) query_popup_data_pane_t3

0x80d5,	// (0x00012e76) query_popup_data_pane_t4_ParamLimits

0x80d5,	// (0x00012e76) query_popup_data_pane_t4

0x8111,	// (0x00012eb2) query_popup_data_pane_t5_ParamLimits

0x8111,	// (0x00012eb2) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001a442) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001a442) query_popup_data_pane_t

0x7d8c,	// (0x00012b2d) bg_set_opt_pane_g1

0x7d94,	// (0x00012b35) bg_set_opt_pane_g2

0x7d9c,	// (0x00012b3d) bg_set_opt_pane_g3

0x7da4,	// (0x00012b45) bg_set_opt_pane_g4

0x7dac,	// (0x00012b4d) bg_set_opt_pane_g5

0x7db4,	// (0x00012b55) bg_set_opt_pane_g6

0x7dbc,	// (0x00012b5d) bg_set_opt_pane_g7

0x7dc4,	// (0x00012b65) bg_set_opt_pane_g8

0x7dcc,	// (0x00012b6d) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001a44d) bg_set_opt_pane_g

0x4f4c,	// (0x0000fced) control_top_pane_stacon_ParamLimits

0x4f4c,	// (0x0000fced) control_top_pane_stacon

0x4f9f,	// (0x0000fd40) signal_pane_stacon_ParamLimits

0x4f9f,	// (0x0000fd40) signal_pane_stacon

0x8792,	// (0x00013533) stacon_top_pane_g1_ParamLimits

0x8792,	// (0x00013533) stacon_top_pane_g1

0x4fc4,	// (0x0000fd65) title_pane_stacon_ParamLimits

0x4fc4,	// (0x0000fd65) title_pane_stacon

0x4fee,	// (0x0000fd8f) uni_indicator_pane_stacon_ParamLimits

0x4fee,	// (0x0000fd8f) uni_indicator_pane_stacon

0x5003,	// (0x0000fda4) battery_pane_stacon_ParamLimits

0x5003,	// (0x0000fda4) battery_pane_stacon

0x5047,	// (0x0000fde8) control_bottom_pane_stacon_ParamLimits

0x5047,	// (0x0000fde8) control_bottom_pane_stacon

0x506a,	// (0x0000fe0b) navi_pane_stacon_ParamLimits

0x506a,	// (0x0000fe0b) navi_pane_stacon

0x87b4,	// (0x00013555) stacon_bottom_pane_g1_ParamLimits

0x87b4,	// (0x00013555) stacon_bottom_pane_g1

0x4caf,	// (0x0000fa50) aid_levels_signal_lsc_ParamLimits

0x4caf,	// (0x0000fa50) aid_levels_signal_lsc

0x4cc5,	// (0x0000fa66) signal_pane_stacon_g1_ParamLimits

0x4cc5,	// (0x0000fa66) signal_pane_stacon_g1

0x4cd9,	// (0x0000fa7a) signal_pane_stacon_g2_ParamLimits

0x4cd9,	// (0x0000fa7a) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001a460) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001a460) signal_pane_stacon_g

0x4d0e,	// (0x0000faaf) title_pane_stacon_t1_ParamLimits

0x4d0e,	// (0x0000faaf) title_pane_stacon_t1

0x8155,	// (0x00012ef6) uni_indicator_pane_stacon_g1

0x815f,	// (0x00012f00) uni_indicator_pane_stacon_g2

0x8169,	// (0x00012f0a) uni_indicator_pane_stacon_g3

0x8173,	// (0x00012f14) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001a46c) uni_indicator_pane_stacon_g

0x4d33,	// (0x0000fad4) control_top_pane_stacon_g1

0x4d3b,	// (0x0000fadc) control_top_pane_stacon_t1_ParamLimits

0x4d3b,	// (0x0000fadc) control_top_pane_stacon_t1

0x4d72,	// (0x0000fb13) aid_levels_battery_lsc_ParamLimits

0x4d72,	// (0x0000fb13) aid_levels_battery_lsc

0x4d89,	// (0x0000fb2a) battery_pane_stacon_g1_ParamLimits

0x4d89,	// (0x0000fb2a) battery_pane_stacon_g1

0x4d9c,	// (0x0000fb3d) battery_pane_stacon_g2_ParamLimits

0x4d9c,	// (0x0000fb3d) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001a475) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001a475) battery_pane_stacon_g

0x4dda,	// (0x0000fb7b) navi_icon_pane_stacon

0x4dee,	// (0x0000fb8f) navi_navi_pane_stacon

0x4dda,	// (0x0000fb7b) navi_text_pane_stacon

0x4d33,	// (0x0000fad4) control_bottom_pane_stacon_g1

0x4e02,	// (0x0000fba3) control_bottom_pane_stacon_t1_ParamLimits

0x4e02,	// (0x0000fba3) control_bottom_pane_stacon_t1

0x8197,	// (0x00012f38) grid_app_pane_ParamLimits

0x8197,	// (0x00012f38) grid_app_pane

0x81b9,	// (0x00012f5a) scroll_pane_cp15_ParamLimits

0x81b9,	// (0x00012f5a) scroll_pane_cp15

0x81cc,	// (0x00012f6d) cell_app_pane_ParamLimits

0x81cc,	// (0x00012f6d) cell_app_pane

0x81f4,	// (0x00012f95) cell_app_pane_g1_ParamLimits

0x81f4,	// (0x00012f95) cell_app_pane_g1

0x8218,	// (0x00012fb9) cell_app_pane_g2_ParamLimits

0x8218,	// (0x00012fb9) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001a47a) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001a47a) cell_app_pane_g

0x8224,	// (0x00012fc5) cell_app_pane_t1_ParamLimits

0x8224,	// (0x00012fc5) cell_app_pane_t1

0x823b,	// (0x00012fdc) grid_highlight_pane_ParamLimits

0x823b,	// (0x00012fdc) grid_highlight_pane

0x7d8c,	// (0x00012b2d) cell_highlight_pane_g1

0x7d94,	// (0x00012b35) cell_highlight_pane_g2

0x7d9c,	// (0x00012b3d) cell_highlight_pane_g3

0x7da4,	// (0x00012b45) cell_highlight_pane_g4

0x7dac,	// (0x00012b4d) cell_highlight_pane_g5

0x7db4,	// (0x00012b55) cell_highlight_pane_g6

0x7dbc,	// (0x00012b5d) cell_highlight_pane_g7

0x7dc4,	// (0x00012b65) cell_highlight_pane_g8

0x7dcc,	// (0x00012b6d) cell_highlight_pane_g9

0x6d55,	// (0x00011af6) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001a428) cell_highlight_pane_g

0x824c,	// (0x00012fed) bg_scroll_pane

0x4e4c,	// (0x0000fbed) scroll_handle_pane

0x8293,	// (0x00013034) scroll_bg_pane_g1

0x82a8,	// (0x00013049) scroll_bg_pane_g2

0x82c0,	// (0x00013061) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001a47f) scroll_bg_pane_g

0x82d5,	// (0x00013076) scroll_handle_focus_pane_ParamLimits

0x82d5,	// (0x00013076) scroll_handle_focus_pane

0x8293,	// (0x00013034) scroll_handle_pane_g1

0x82e2,	// (0x00013083) scroll_handle_pane_g2

0x82c0,	// (0x00013061) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001a486) scroll_handle_pane_g

0x7e89,	// (0x00012c2a) bg_popup_sub_pane_cp21_ParamLimits

0x7e89,	// (0x00012c2a) bg_popup_sub_pane_cp21

0x82f6,	// (0x00013097) popup_fep_japan_predictive_window_t1_ParamLimits

0x82f6,	// (0x00013097) popup_fep_japan_predictive_window_t1

0x8310,	// (0x000130b1) popup_fep_japan_predictive_window_t2_ParamLimits

0x8310,	// (0x000130b1) popup_fep_japan_predictive_window_t2

0x8343,	// (0x000130e4) popup_fep_japan_predictive_window_t3_ParamLimits

0x8343,	// (0x000130e4) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001a48d) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001a48d) popup_fep_japan_predictive_window_t

0x6d5f,	// (0x00011b00) bg_popup_sub_pane_cp23

0x837a,	// (0x0001311b) listscroll_japin_cand_pane

0x8382,	// (0x00013123) popup_fep_japan_candidate_window_t1

0x8390,	// (0x00013131) candidate_pane_ParamLimits

0x8390,	// (0x00013131) candidate_pane

0x83a2,	// (0x00013143) scroll_pane_cp30

0x83aa,	// (0x0001314b) list_single_popup_jap_candidate_pane_ParamLimits

0x83aa,	// (0x0001314b) list_single_popup_jap_candidate_pane

0x6d5f,	// (0x00011b00) list_highlight_pane_cp30

0x83bf,	// (0x00013160) list_single_popup_jap_candidate_pane_t1

0x83ce,	// (0x0001316f) level_1_signal

0x83e0,	// (0x00013181) level_2_signal

0x83f3,	// (0x00013194) level_3_signal

0x8406,	// (0x000131a7) level_4_signal

0x8419,	// (0x000131ba) level_5_signal

0x842c,	// (0x000131cd) level_6_signal

0x843f,	// (0x000131e0) level_7_signal

0x83ce,	// (0x0001316f) level_1_battery

0x83e0,	// (0x00013181) level_2_battery

0x83f3,	// (0x00013194) level_3_battery

0x8406,	// (0x000131a7) level_4_battery

0x8419,	// (0x000131ba) level_5_battery

0x842c,	// (0x000131cd) level_6_battery

0x843f,	// (0x000131e0) level_7_battery

0x846a,	// (0x0001320b) list_menu_pane_ParamLimits

0x846a,	// (0x0001320b) list_menu_pane

0x8480,	// (0x00013221) scroll_pane_cp25_ParamLimits

0x8480,	// (0x00013221) scroll_pane_cp25

0x8499,	// (0x0001323a) list_double2_graphic_pane_cp2_ParamLimits

0x8499,	// (0x0001323a) list_double2_graphic_pane_cp2

0x8499,	// (0x0001323a) list_double2_large_graphic_pane_cp2_ParamLimits

0x8499,	// (0x0001323a) list_double2_large_graphic_pane_cp2

0x8499,	// (0x0001323a) list_double2_pane_cp2_ParamLimits

0x8499,	// (0x0001323a) list_double2_pane_cp2

0x8499,	// (0x0001323a) list_double_graphic_pane_cp2_ParamLimits

0x8499,	// (0x0001323a) list_double_graphic_pane_cp2

0x8499,	// (0x0001323a) list_double_large_graphic_pane_cp2_ParamLimits

0x8499,	// (0x0001323a) list_double_large_graphic_pane_cp2

0x8499,	// (0x0001323a) list_double_number_pane_cp2_ParamLimits

0x8499,	// (0x0001323a) list_double_number_pane_cp2

0x8499,	// (0x0001323a) list_double_pane_cp2_ParamLimits

0x8499,	// (0x0001323a) list_double_pane_cp2

0x84bd,	// (0x0001325e) list_single_2graphic_pane_cp2_ParamLimits

0x84bd,	// (0x0001325e) list_single_2graphic_pane_cp2

0x84bd,	// (0x0001325e) list_single_graphic_heading_pane_cp2_ParamLimits

0x84bd,	// (0x0001325e) list_single_graphic_heading_pane_cp2

0x84bd,	// (0x0001325e) list_single_graphic_pane_cp2_ParamLimits

0x84bd,	// (0x0001325e) list_single_graphic_pane_cp2

0x84bd,	// (0x0001325e) list_single_heading_pane_cp2_ParamLimits

0x84bd,	// (0x0001325e) list_single_heading_pane_cp2

0x84d6,	// (0x00013277) list_single_large_graphic_pane_cp2_ParamLimits

0x84d6,	// (0x00013277) list_single_large_graphic_pane_cp2

0x84bd,	// (0x0001325e) list_single_number_heading_pane_cp2_ParamLimits

0x84bd,	// (0x0001325e) list_single_number_heading_pane_cp2

0x84bd,	// (0x0001325e) list_single_number_pane_cp2_ParamLimits

0x84bd,	// (0x0001325e) list_single_number_pane_cp2

0x84bd,	// (0x0001325e) list_single_pane_cp2_ParamLimits

0x84bd,	// (0x0001325e) list_single_pane_cp2

0x8552,	// (0x000132f3) bg_popup_sub_pane_cp22

0x4efe,	// (0x0000fc9f) popup_side_volume_key_window_g1

0x4f28,	// (0x0000fcc9) popup_side_volume_key_window_t1

0x4f44,	// (0x0000fce5) volume_small_pane_cp1

0x70d4,	// (0x00011e75) bg_popup_sub_pane_cp24_ParamLimits

0x70d4,	// (0x00011e75) bg_popup_sub_pane_cp24

0x8568,	// (0x00013309) fep_china_uni_candidate_pane_ParamLimits

0x8568,	// (0x00013309) fep_china_uni_candidate_pane

0x857c,	// (0x0001331d) fep_china_uni_entry_pane

0x858c,	// (0x0001332d) popup_fep_china_uni_window_g1

0x85a8,	// (0x00013349) fep_china_uni_entry_pane_g1

0x85b0,	// (0x00013351) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001a4be) fep_china_uni_entry_pane_g

0x85b8,	// (0x00013359) fep_entry_item_pane

0x85c2,	// (0x00013363) fep_candidate_item_pane

0x85ca,	// (0x0001336b) fep_china_uni_candidate_pane_g1

0x85d2,	// (0x00013373) fep_china_uni_candidate_pane_g2

0x85da,	// (0x0001337b) fep_china_uni_candidate_pane_g3

0x85e2,	// (0x00013383) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001a4c3) fep_china_uni_candidate_pane_g

0x6d55,	// (0x00011af6) fep_entry_item_pane_g1

0x85ea,	// (0x0001338b) fep_entry_item_pane_t1_ParamLimits

0x85ea,	// (0x0001338b) fep_entry_item_pane_t1

0x8600,	// (0x000133a1) fep_candidate_item_pane_t1_ParamLimits

0x8600,	// (0x000133a1) fep_candidate_item_pane_t1

0x8615,	// (0x000133b6) fep_candidate_item_pane_t2_ParamLimits

0x8615,	// (0x000133b6) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001a4cc) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001a4cc) fep_candidate_item_pane_t

0x6e3f,	// (0x00011be0) list_highlight_pane_cp31_ParamLimits

0x6e3f,	// (0x00011be0) list_highlight_pane_cp31

0x8627,	// (0x000133c8) level_1_signal_lsc

0x8630,	// (0x000133d1) level_2_signal_lsc

0x8639,	// (0x000133da) level_3_signal_lsc

0x8642,	// (0x000133e3) level_4_signal_lsc

0x864b,	// (0x000133ec) level_5_signal_lsc

0x8654,	// (0x000133f5) level_6_signal_lsc

0x865d,	// (0x000133fe) level_7_signal_lsc

0x865d,	// (0x000133fe) level_1_battery_lsc

0x8666,	// (0x00013407) level_2_battery_lsc

0x866f,	// (0x00013410) level_3_battery_lsc

0x8678,	// (0x00013419) level_4_battery_lsc

0x8681,	// (0x00013422) level_5_battery_lsc

0x868a,	// (0x0001342b) level_6_battery_lsc

0x8627,	// (0x000133c8) level_7_battery_lsc

0x8693,	// (0x00013434) scroll_handle_focus_pane_g1

0x869c,	// (0x0001343d) scroll_handle_focus_pane_g2

0x86a5,	// (0x00013446) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001a4d1) scroll_handle_focus_pane_g

0x86ae,	// (0x0001344f) list_single_2graphic_pane_g1_ParamLimits

0x86ae,	// (0x0001344f) list_single_2graphic_pane_g1

0x7727,	// (0x000124c8) list_single_2graphic_pane_g2_ParamLimits

0x7727,	// (0x000124c8) list_single_2graphic_pane_g2

0x76ad,	// (0x0001244e) list_single_2graphic_pane_g3_ParamLimits

0x76ad,	// (0x0001244e) list_single_2graphic_pane_g3

0x86ba,	// (0x0001345b) list_single_2graphic_pane_g4_ParamLimits

0x86ba,	// (0x0001345b) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001a4d8) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001a4d8) list_single_2graphic_pane_g

0x86cb,	// (0x0001346c) list_single_2graphic_pane_t1_ParamLimits

0x86cb,	// (0x0001346c) list_single_2graphic_pane_t1

0x86f9,	// (0x0001349a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x86f9,	// (0x0001349a) list_double2_graphic_large_graphic_pane_g1

0x77cc,	// (0x0001256d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x77cc,	// (0x0001256d) list_double2_graphic_large_graphic_pane_g2

0x77dd,	// (0x0001257e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x77dd,	// (0x0001257e) list_double2_graphic_large_graphic_pane_g3

0x8709,	// (0x000134aa) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8709,	// (0x000134aa) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001a4e1) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001a4e1) list_double2_graphic_large_graphic_pane_g

0x8715,	// (0x000134b6) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8715,	// (0x000134b6) list_double2_graphic_large_graphic_pane_t1

0x872b,	// (0x000134cc) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x872b,	// (0x000134cc) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001a4ea) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001a4ea) list_double2_graphic_large_graphic_pane_t

0x887c,	// (0x0001361d) popup_fast_swap_window_ParamLimits

0x887c,	// (0x0001361d) popup_fast_swap_window

0x8898,	// (0x00013639) popup_side_volume_key_window

0x88b4,	// (0x00013655) stacon_top_pane

0x88be,	// (0x0001365f) status_pane_ParamLimits

0x88be,	// (0x0001365f) status_pane

0x88cc,	// (0x0001366d) status_small_pane

0x6d5f,	// (0x00011b00) control_pane

0x6d5f,	// (0x00011b00) stacon_bottom_pane

0x7b7a,	// (0x0001291b) scroll_pane_cp121

0x7b71,	// (0x00012912) set_content_pane

0x873d,	// (0x000134de) bg_active_tab_pane_g1_cp1

0x8746,	// (0x000134e7) bg_active_tab_pane_g2_cp1

0x874f,	// (0x000134f0) bg_active_tab_pane_g3_cp1

0x873d,	// (0x000134de) bg_passive_tab_pane_g1_cp1

0x8746,	// (0x000134e7) bg_passive_tab_pane_g2_cp1

0x874f,	// (0x000134f0) bg_passive_tab_pane_g3_cp1

0x8758,	// (0x000134f9) bg_active_tab_pane_g1_cp2

0x8746,	// (0x000134e7) bg_active_tab_pane_g2_cp2

0x8761,	// (0x00013502) bg_active_tab_pane_g3_cp2

0x8758,	// (0x000134f9) bg_passive_tab_pane_g1_cp2

0x8746,	// (0x000134e7) bg_passive_tab_pane_g2_cp2

0x8761,	// (0x00013502) bg_passive_tab_pane_g3_cp2

0x876a,	// (0x0001350b) bg_active_tab_pane_g1_cp3

0x8746,	// (0x000134e7) bg_active_tab_pane_g2_cp3

0x8773,	// (0x00013514) bg_active_tab_pane_g3_cp3

0x876a,	// (0x0001350b) bg_passive_tab_pane_g1_cp3

0x8746,	// (0x000134e7) bg_passive_tab_pane_g2_cp3

0x8773,	// (0x00013514) bg_passive_tab_pane_g3_cp3

0x877c,	// (0x0001351d) bg_active_tab_pane_g1_cp4

0x8746,	// (0x000134e7) bg_active_tab_pane_g2_cp4

0x8787,	// (0x00013528) bg_active_tab_pane_g3_cp4

0x877c,	// (0x0001351d) bg_passive_tab_pane_g1_cp4

0x8746,	// (0x000134e7) bg_passive_tab_pane_g2_cp4

0x8787,	// (0x00013528) bg_passive_tab_pane_g3_cp4

0x87d0,	// (0x00013571) bg_active_tab_pane_g1_cp5

0x8746,	// (0x000134e7) bg_active_tab_pane_g2_cp5

0x87d9,	// (0x0001357a) bg_active_tab_pane_g3_cp5

0x87d0,	// (0x00013571) bg_passive_tab_pane_g1_cp5

0x8746,	// (0x000134e7) bg_passive_tab_pane_g2_cp5

0x87d9,	// (0x0001357a) bg_passive_tab_pane_g3_cp5

0x87e2,	// (0x00013583) list_set_graphic_pane_ParamLimits

0x87e2,	// (0x00013583) list_set_graphic_pane

0x6d5f,	// (0x00011b00) bg_set_opt_pane_cp4

0x87ff,	// (0x000135a0) list_set_graphic_pane_g1_ParamLimits

0x87ff,	// (0x000135a0) list_set_graphic_pane_g1

0x880b,	// (0x000135ac) list_set_graphic_pane_g2_ParamLimits

0x880b,	// (0x000135ac) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001a4ef) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001a4ef) list_set_graphic_pane_g

0x0009,

0xfacf,	// (0x0001a870) volume_small_pane_cp_g

0x882f,	// (0x000135d0) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x882f,	// (0x000135d0) list_double2_large_graphic_pane_g1_cp2

0x883b,	// (0x000135dc) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x883b,	// (0x000135dc) list_double2_large_graphic_pane_g2_cp2

0x884c,	// (0x000135ed) list_double2_large_graphic_pane_g3_cp2

0x8854,	// (0x000135f5) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8854,	// (0x000135f5) list_double2_large_graphic_pane_t1_cp2

0x886a,	// (0x0001360b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x886a,	// (0x0001360b) list_double2_large_graphic_pane_t2_cp2

0xa571,	// (0x00015312) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa571,	// (0x00015312) list_double_large_graphic_pane_g1_cp2

0xa582,	// (0x00015323) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa582,	// (0x00015323) list_double_large_graphic_pane_g2_cp2

0x89e5,	// (0x00013786) list_double_large_graphic_pane_g3_cp2

0xa593,	// (0x00015334) list_double_large_graphic_pane_g4_cp

0xa59b,	// (0x0001533c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa59b,	// (0x0001533c) list_double_large_graphic_pane_t1_cp2

0xa5b2,	// (0x00015353) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa5b2,	// (0x00015353) list_double_large_graphic_pane_t2_cp2

0x88d7,	// (0x00013678) list_double2_graphic_pane_g1_cp2_ParamLimits

0x88d7,	// (0x00013678) list_double2_graphic_pane_g1_cp2

0x88e5,	// (0x00013686) list_double2_graphic_pane_g2_cp2_ParamLimits

0x88e5,	// (0x00013686) list_double2_graphic_pane_g2_cp2

0x88f6,	// (0x00013697) list_double2_graphic_pane_g3_cp2

0x8900,	// (0x000136a1) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8900,	// (0x000136a1) list_double2_graphic_pane_t1_cp2

0x8916,	// (0x000136b7) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8916,	// (0x000136b7) list_double2_graphic_pane_t2_cp2

0x8928,	// (0x000136c9) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8928,	// (0x000136c9) list_single_number_heading_pane_g1_cp2

0x8934,	// (0x000136d5) list_single_number_heading_pane_g2_cp2

0x893c,	// (0x000136dd) list_single_number_heading_pane_t1_cp2_ParamLimits

0x893c,	// (0x000136dd) list_single_number_heading_pane_t1_cp2

0x8952,	// (0x000136f3) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8952,	// (0x000136f3) list_single_number_heading_pane_t2_cp2

0x8964,	// (0x00013705) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8964,	// (0x00013705) list_single_number_heading_pane_t3_cp2

0x8928,	// (0x000136c9) list_single_heading_pane_g1_cp2_ParamLimits

0x8928,	// (0x000136c9) list_single_heading_pane_g1_cp2

0x8934,	// (0x000136d5) list_single_heading_pane_g2_cp2

0x893c,	// (0x000136dd) list_single_heading_pane_t1_cp2_ParamLimits

0x893c,	// (0x000136dd) list_single_heading_pane_t1_cp2

0xa379,	// (0x0001511a) list_single_heading_pane_t2_cp2_ParamLimits

0xa379,	// (0x0001511a) list_single_heading_pane_t2_cp2

0xa2c1,	// (0x00015062) list_double_graphic_pane_g1_cp2_ParamLimits

0xa2c1,	// (0x00015062) list_double_graphic_pane_g1_cp2

0xa2cd,	// (0x0001506e) list_double_graphic_pane_g2_cp2_ParamLimits

0xa2cd,	// (0x0001506e) list_double_graphic_pane_g2_cp2

0xa2dc,	// (0x0001507d) list_double_graphic_pane_g3_cp2

0xa2e4,	// (0x00015085) list_double_graphic_pane_t1_cp2_ParamLimits

0xa2e4,	// (0x00015085) list_double_graphic_pane_t1_cp2

0xa2fa,	// (0x0001509b) list_double_graphic_pane_t2_cp2_ParamLimits

0xa2fa,	// (0x0001509b) list_double_graphic_pane_t2_cp2

0x89d9,	// (0x0001377a) list_double_number_pane_g1_cp2_ParamLimits

0x89d9,	// (0x0001377a) list_double_number_pane_g1_cp2

0x89e5,	// (0x00013786) list_double_number_pane_g2_cp2

0xa285,	// (0x00015026) list_double_number_pane_t1_cp2_ParamLimits

0xa285,	// (0x00015026) list_double_number_pane_t1_cp2

0xa299,	// (0x0001503a) list_double_number_pane_t2_cp2_ParamLimits

0xa299,	// (0x0001503a) list_double_number_pane_t2_cp2

0xa2af,	// (0x00015050) list_double_number_pane_t3_cp2_ParamLimits

0xa2af,	// (0x00015050) list_double_number_pane_t3_cp2

0xa16e,	// (0x00014f0f) list_single_graphic_pane_g1_cp2_ParamLimits

0xa16e,	// (0x00014f0f) list_single_graphic_pane_g1_cp2

0x8a3d,	// (0x000137de) list_single_graphic_pane_g2_cp2_ParamLimits

0x8a3d,	// (0x000137de) list_single_graphic_pane_g2_cp2

0x8a49,	// (0x000137ea) list_single_graphic_pane_g3_cp2

0xa144,	// (0x00014ee5) list_single_graphic_pane_t1_cp2_ParamLimits

0xa144,	// (0x00014ee5) list_single_graphic_pane_t1_cp2

0x8a3d,	// (0x000137de) list_single_number_pane_g1_cp2_ParamLimits

0x8a3d,	// (0x000137de) list_single_number_pane_g1_cp2

0x8a49,	// (0x000137ea) list_single_number_pane_g2_cp2

0xa144,	// (0x00014ee5) list_single_number_pane_t1_cp2_ParamLimits

0xa144,	// (0x00014ee5) list_single_number_pane_t1_cp2

0xa15a,	// (0x00014efb) list_single_number_pane_t2_cp2_ParamLimits

0xa15a,	// (0x00014efb) list_single_number_pane_t2_cp2

0x883b,	// (0x000135dc) list_double2_pane_g1_cp2_ParamLimits

0x883b,	// (0x000135dc) list_double2_pane_g1_cp2

0x884c,	// (0x000135ed) list_double2_pane_g2_cp2

0x89b1,	// (0x00013752) list_double2_pane_t1_cp2_ParamLimits

0x89b1,	// (0x00013752) list_double2_pane_t1_cp2

0x89c7,	// (0x00013768) list_double2_pane_t2_cp2_ParamLimits

0x89c7,	// (0x00013768) list_double2_pane_t2_cp2

0x89d9,	// (0x0001377a) list_double_pane_g1_cp2_ParamLimits

0x89d9,	// (0x0001377a) list_double_pane_g1_cp2

0x89e5,	// (0x00013786) list_double_pane_g2_cp2

0x89ed,	// (0x0001378e) list_double_pane_t1_cp2_ParamLimits

0x89ed,	// (0x0001378e) list_double_pane_t1_cp2

0x8a03,	// (0x000137a4) list_double_pane_t2_cp2_ParamLimits

0x8a03,	// (0x000137a4) list_double_pane_t2_cp2

0x8a2d,	// (0x000137ce) list_single_pane_cp2_g3

0x8a3d,	// (0x000137de) list_single_pane_g1_cp2_ParamLimits

0x8a3d,	// (0x000137de) list_single_pane_g1_cp2

0x8a49,	// (0x000137ea) list_single_pane_g2_cp2

0x8a51,	// (0x000137f2) list_single_pane_t1_cp2_ParamLimits

0x8a51,	// (0x000137f2) list_single_pane_t1_cp2

0x8a69,	// (0x0001380a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8a69,	// (0x0001380a) list_single_large_graphic_pane_g1_cp2

0x8a75,	// (0x00013816) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8a75,	// (0x00013816) list_single_large_graphic_pane_g2_cp2

0x8a81,	// (0x00013822) list_single_large_graphic_pane_g3_cp2

0x8a89,	// (0x0001382a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8a89,	// (0x0001382a) list_single_large_graphic_pane_g4_cp1

0x8aa3,	// (0x00013844) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8aa3,	// (0x00013844) list_single_large_graphic_pane_t1_cp2

0xa110,	// (0x00014eb1) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa110,	// (0x00014eb1) list_single_graphic_heading_pane_g1_cp2

0xa0dd,	// (0x00014e7e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa0dd,	// (0x00014e7e) list_single_graphic_heading_pane_g4_cp2

0x8a49,	// (0x000137ea) list_single_graphic_heading_pane_g5_cp2

0xa11c,	// (0x00014ebd) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa11c,	// (0x00014ebd) list_single_graphic_heading_pane_t1_cp2

0xa132,	// (0x00014ed3) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa132,	// (0x00014ed3) list_single_graphic_heading_pane_t2_cp2

0xa0d1,	// (0x00014e72) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa0d1,	// (0x00014e72) list_single_2graphic_pane_g1_cp2

0xa0dd,	// (0x00014e7e) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa0dd,	// (0x00014e7e) list_single_2graphic_pane_g2_cp2

0x8a49,	// (0x000137ea) list_single_2graphic_pane_g3_cp2

0xa0ee,	// (0x00014e8f) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa0ee,	// (0x00014e8f) list_single_2graphic_pane_g4_cp2

0xa0fa,	// (0x00014e9b) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa0fa,	// (0x00014e9b) list_single_2graphic_pane_t1_cp2

0x6d55,	// (0x00011af6) list_highlight_pane_g10_cp1

0x9c9d,	// (0x00014a3e) list_highlight_pane_g1_cp1

0x9ca5,	// (0x00014a46) list_highlight_pane_g2_cp1

0x9cad,	// (0x00014a4e) list_highlight_pane_g3_cp1

0x9cb5,	// (0x00014a56) list_highlight_pane_g4_cp1

0x9cbd,	// (0x00014a5e) list_highlight_pane_g5_cp1

0x9cc5,	// (0x00014a66) list_highlight_pane_g6_cp1

0x9ccd,	// (0x00014a6e) list_highlight_pane_g7_cp1

0x9cd5,	// (0x00014a76) list_highlight_pane_g8_cp1

0x9cdd,	// (0x00014a7e) list_highlight_pane_g9_cp1

0x9bbd,	// (0x0001495e) form_field_slider_pane_t3

0x9bcb,	// (0x0001496c) form_field_slider_pane_t4

0x9bd9,	// (0x0001497a) slider_form_pane_ParamLimits

0x9bd9,	// (0x0001497a) slider_form_pane

0x6d5f,	// (0x00011b00) control_abbreviations

0x6d5f,	// (0x00011b00) control_conventions

0x6d5f,	// (0x00011b00) control_definitions

0x6d5f,	// (0x00011b00) format_table_attribute

0xa3c3,	// (0x00015164) bg_popup_preview_window_pane_g9

0x6d5f,	// (0x00011b00) format_table_data2

0x6d5f,	// (0x00011b00) format_table_data3

0x6d5f,	// (0x00011b00) format_table_data_example

0x0008,

0x6d5f,	// (0x00011b00) intro_purpose

0xf8ea,	// (0x0001a68b) bg_popup_preview_window_pane_g

0x6d5f,	// (0x00011b00) texts_category

0x6d5f,	// (0x00011b00) texts_graphics

0x8ab9,	// (0x0001385a) text_digital

0x8ac8,	// (0x00013869) text_primary

0x8ad7,	// (0x00013878) text_primary_small

0x8ae6,	// (0x00013887) text_secondary

0x8af5,	// (0x00013896) text_title

0xabe3,	// (0x00015984) bg_passive_tab_pane_g1_cp3_srt

0x8746,	// (0x000134e7) bg_passive_tab_pane_g2_cp3_srt

0xabec,	// (0x0001598d) bg_passive_tab_pane_g3_cp3_srt

0x6e3f,	// (0x00011be0) bg_active_tab_pane_cp3_srt_ParamLimits

0x6e3f,	// (0x00011be0) bg_active_tab_pane_cp3_srt

0xabf5,	// (0x00015996) tabs_4_active_pane_srt_g1

0xabfd,	// (0x0001599e) tabs_4_active_pane_srt_t1_ParamLimits

0xabfd,	// (0x0001599e) tabs_4_active_pane_srt_t1

0xabe3,	// (0x00015984) bg_active_tab_pane_g1_cp3_copy1

0x8746,	// (0x000134e7) bg_active_tab_pane_g2_cp3_copy1

0xabec,	// (0x0001598d) bg_active_tab_pane_g3_cp3_copy1

0x6e3f,	// (0x00011be0) tabs_2_long_active_pane_srt_ParamLimits

0x6e3f,	// (0x00011be0) tabs_2_long_active_pane_srt

0x6e3f,	// (0x00011be0) tabs_2_long_passive_pane_srt_ParamLimits

0x6e3f,	// (0x00011be0) tabs_2_long_passive_pane_srt

0x7fc1,	// (0x00012d62) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7fc1,	// (0x00012d62) bg_passive_tab_pane_cp4_srt

0xa80e,	// (0x000155af) bg_passive_tab_pane_g1_cp4_srt

0x8746,	// (0x000134e7) bg_passive_tab_pane_g2_cp4_srt

0xa817,	// (0x000155b8) bg_passive_tab_pane_g3_cp4_srt

0x7fa0,	// (0x00012d41) bg_active_tab_pane_cp4_srt_ParamLimits

0x7fa0,	// (0x00012d41) bg_active_tab_pane_cp4_srt

0xa820,	// (0x000155c1) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa820,	// (0x000155c1) tabs_2_long_active_pane_srt_t1

0xa80e,	// (0x000155af) bg_active_tab_pane_g1_cp4_srt

0x8746,	// (0x000134e7) bg_active_tab_pane_g2_cp4_srt

0xa817,	// (0x000155b8) bg_active_tab_pane_g3_cp4_srt

0x70d4,	// (0x00011e75) tabs_3_long_active_pane_srt_ParamLimits

0x70d4,	// (0x00011e75) tabs_3_long_active_pane_srt

0x70d4,	// (0x00011e75) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x70d4,	// (0x00011e75) tabs_3_long_passive_pane_cp_srt

0x70d4,	// (0x00011e75) tabs_3_long_passive_pane_srt_ParamLimits

0x70d4,	// (0x00011e75) tabs_3_long_passive_pane_srt

0x7fc1,	// (0x00012d62) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7fc1,	// (0x00012d62) bg_passive_tab_pane_cp5_srt

0x87d0,	// (0x00013571) bg_passive_tab_pane_g1_cp5_srt

0x8746,	// (0x000134e7) bg_passive_tab_pane_g2_cp5_srt

0x87d9,	// (0x0001357a) bg_passive_tab_pane_g3_cp5_srt

0x7fa0,	// (0x00012d41) bg_active_tab_pane_cp5_srt_ParamLimits

0x7fa0,	// (0x00012d41) bg_active_tab_pane_cp5_srt

0xa7fc,	// (0x0001559d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa7fc,	// (0x0001559d) tabs_3_long_active_pane_srt_t1

0x87d0,	// (0x00013571) bg_active_tab_pane_g1_cp5_srt

0x8746,	// (0x000134e7) bg_active_tab_pane_g2_cp5_srt

0x87d9,	// (0x0001357a) bg_active_tab_pane_g3_cp5_srt

0xa7ee,	// (0x0001558f) navi_text_pane_srt_t1

0xa7e6,	// (0x00015587) navi_icon_pane_srt_g1

0x8cca,	// (0x00013a6b) midp_editing_number_pane_srt

0x8b04,	// (0x000138a5) midp_ticker_pane_srt

0x8cd2,	// (0x00013a73) midp_ticker_pane_srt_g1

0x8cda,	// (0x00013a7b) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001a50e) midp_ticker_pane_srt_g

0x8ce2,	// (0x00013a83) midp_ticker_pane_srt_t1

0xa7d7,	// (0x00015578) midp_editing_number_pane_t1_copy1

0x8b0c,	// (0x000138ad) listscroll_midp_pane

0x8b0c,	// (0x000138ad) midp_form_pane

0x8b7c,	// (0x0001391d) midp_info_popup_window_ParamLimits

0x8b7c,	// (0x0001391d) midp_info_popup_window

0x7e89,	// (0x00012c2a) bg_popup_sub_pane_cp50_ParamLimits

0x7e89,	// (0x00012c2a) bg_popup_sub_pane_cp50

0x98c9,	// (0x0001466a) listscroll_midp_info_pane_ParamLimits

0x98c9,	// (0x0001466a) listscroll_midp_info_pane

0x98a9,	// (0x0001464a) listscroll_form_midp_pane_ParamLimits

0x98a9,	// (0x0001464a) listscroll_form_midp_pane

0x98b5,	// (0x00014656) scroll_bar_cp050

0x9889,	// (0x0001462a) list_midp_pane

0xb97e,	// (0x0001671f) signal_pane_g2_cp

0x97c3,	// (0x00014564) listscroll_midp_info_pane_t1_ParamLimits

0x97c3,	// (0x00014564) listscroll_midp_info_pane_t1

0x97db,	// (0x0001457c) listscroll_midp_info_pane_t2_ParamLimits

0x97db,	// (0x0001457c) listscroll_midp_info_pane_t2

0x9819,	// (0x000145ba) listscroll_midp_info_pane_t3_ParamLimits

0x9819,	// (0x000145ba) listscroll_midp_info_pane_t3

0x9853,	// (0x000145f4) listscroll_midp_info_pane_t4_ParamLimits

0x9853,	// (0x000145f4) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0001a5c6) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0001a5c6) listscroll_midp_info_pane_t

0x7f4d,	// (0x00012cee) scroll_pane_cp21

0x9761,	// (0x00014502) form_midp_field_choice_group_pane

0x976a,	// (0x0001450b) form_midp_field_text_pane

0x97a9,	// (0x0001454a) form_midp_field_time_pane

0x97b1,	// (0x00014552) form_midp_gauge_slider_pane

0x97ba,	// (0x0001455b) form_midp_gauge_wait_pane

0x6d5f,	// (0x00011b00) form_midp_image_pane

0x9733,	// (0x000144d4) list_single_midp_pane_ParamLimits

0x9733,	// (0x000144d4) list_single_midp_pane

0x96eb,	// (0x0001448c) form_midp_field_text_pane_t1

0x94ac,	// (0x0001424d) input_focus_pane_cp050

0x9722,	// (0x000144c3) list_midp_form_text_pane

0x96ba,	// (0x0001445b) form_midp_field_choice_group_pane_t1

0x96c8,	// (0x00014469) input_focus_pane_cp051

0x96dc,	// (0x0001447d) list_midp_choice_pane

0x6d5f,	// (0x00011b00) status_idle_pane

0x969e,	// (0x0001443f) form_midp_field_time_pane_t1

0x6d55,	// (0x00011af6) wait_anim_pane_g2_copy1

0x96ac,	// (0x0001444d) form_midp_field_time_pane_t2

0x0001,

0x8c2a,	// (0x000139cb) aid_navinavi_width_2_pane

0xf820,	// (0x0001a5c1) form_midp_field_time_pane_t

0x6d5f,	// (0x00011b00) input_focus_pane_cp052

0x6d5f,	// (0x00011b00) bg_input_focus_pane_cp040

0x965e,	// (0x000143ff) form_midp_gauge_slider_pane_t1

0x966c,	// (0x0001440d) form_midp_gauge_slider_pane_t2

0x967a,	// (0x0001441b) form_midp_gauge_slider_pane_t3

0x9688,	// (0x00014429) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0001a5b8) form_midp_gauge_slider_pane_t

0x9696,	// (0x00014437) form_midp_slider_pane

0x6e3f,	// (0x00011be0) bg_input_focus_pane_cp041_ParamLimits

0x6e3f,	// (0x00011be0) bg_input_focus_pane_cp041

0x962b,	// (0x000143cc) form_midp_gauge_wait_pane_t1_ParamLimits

0x962b,	// (0x000143cc) form_midp_gauge_wait_pane_t1

0x963d,	// (0x000143de) form_midp_gauge_wait_pane_t2_ParamLimits

0x963d,	// (0x000143de) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0001a5b3) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0001a5b3) form_midp_gauge_wait_pane_t

0x964f,	// (0x000143f0) form_midp_wait_pane_ParamLimits

0x964f,	// (0x000143f0) form_midp_wait_pane

0x95f5,	// (0x00014396) form_midp_image_pane_g1

0x95fe,	// (0x0001439f) form_midp_image_pane_t1

0x960d,	// (0x000143ae) form_midp_image_pane_t2

0x961c,	// (0x000143bd) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0001a5ac) form_midp_image_pane_t

0x95dd,	// (0x0001437e) list_single_midp_pane_g1

0x95e6,	// (0x00014387) list_single_midp_pane_t1

0x95b5,	// (0x00014356) list_midp_form_item_pane_ParamLimits

0x95b5,	// (0x00014356) list_midp_form_item_pane

0x8bd2,	// (0x00013973) list_midp_form_item_pane_t1

0x8be1,	// (0x00013982) midp_ticker_pane_g1

0x8bed,	// (0x0001398e) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001a4f4) midp_ticker_pane_g

0x8bf9,	// (0x0001399a) midp_ticker_pane_t1

0xaa5b,	// (0x000157fc) midp_editing_number_pane_t1

0xaa39,	// (0x000157da) midp_editing_number_pane

0xaa48,	// (0x000157e9) midp_ticker_pane

0xa79f,	// (0x00015540) ai_message_heading_pane

0x6d5f,	// (0x00011b00) bg_popup_window_pane_cp14

0xa7a7,	// (0x00015548) listscroll_ai_message_pane

0xa729,	// (0x000154ca) ai_message_heading_pane_g1_ParamLimits

0xa729,	// (0x000154ca) ai_message_heading_pane_g1

0xa735,	// (0x000154d6) ai_message_heading_pane_g2_ParamLimits

0xa735,	// (0x000154d6) ai_message_heading_pane_g2

0xa741,	// (0x000154e2) ai_message_heading_pane_g3_ParamLimits

0xa741,	// (0x000154e2) ai_message_heading_pane_g3

0xa74d,	// (0x000154ee) ai_message_heading_pane_g4_ParamLimits

0xa74d,	// (0x000154ee) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0001a6ed) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0001a6ed) ai_message_heading_pane_g

0xa759,	// (0x000154fa) ai_message_heading_pane_t1_ParamLimits

0xa759,	// (0x000154fa) ai_message_heading_pane_t1

0xa773,	// (0x00015514) ai_message_heading_pane_t2_ParamLimits

0xa773,	// (0x00015514) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0001a6f6) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0001a6f6) ai_message_heading_pane_t

0xa785,	// (0x00015526) bg_popup_heading_pane_cp1_ParamLimits

0xa785,	// (0x00015526) bg_popup_heading_pane_cp1

0xa717,	// (0x000154b8) list_ai_message_pane_ParamLimits

0xa717,	// (0x000154b8) list_ai_message_pane

0x7f4d,	// (0x00012cee) scroll_pane_cp10

0xa6b3,	// (0x00015454) list_ai_message_pane_g1

0xa6bb,	// (0x0001545c) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0001a6ca) list_ai_message_pane_g

0xa6c3,	// (0x00015464) list_ai_message_pane_t1_ParamLimits

0xa6c3,	// (0x00015464) list_ai_message_pane_t1

0xa6d8,	// (0x00015479) list_ai_message_pane_t2_ParamLimits

0xa6d8,	// (0x00015479) list_ai_message_pane_t2

0xa6ed,	// (0x0001548e) list_ai_message_pane_t3_ParamLimits

0xa6ed,	// (0x0001548e) list_ai_message_pane_t3

0xa702,	// (0x000154a3) list_ai_message_pane_t4_ParamLimits

0xa702,	// (0x000154a3) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0001a6cf) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0001a6cf) list_ai_message_pane_t

0xa69e,	// (0x0001543f) cell_ai_soft_ind_pane_ParamLimits

0xa69e,	// (0x0001543f) cell_ai_soft_ind_pane

0x8c0b,	// (0x000139ac) cell_ai_soft_ind_pane_g1_ParamLimits

0x8c0b,	// (0x000139ac) cell_ai_soft_ind_pane_g1

0x6d5f,	// (0x00011b00) grid_highlight_cp1

0x8c18,	// (0x000139b9) text_secondary_cp56_ParamLimits

0x8c18,	// (0x000139b9) text_secondary_cp56

0xa673,	// (0x00015414) example_general_pane_ParamLimits

0xa673,	// (0x00015414) example_general_pane

0xa67f,	// (0x00015420) example_parent_pane_g1_ParamLimits

0xa67f,	// (0x00015420) example_parent_pane_g1

0xa68b,	// (0x0001542c) example_parent_pane_t1_ParamLimits

0xa68b,	// (0x0001542c) example_parent_pane_t1

0x564b,	// (0x000103ec) popup_preview_text_window_ParamLimits

0x564b,	// (0x000103ec) popup_preview_text_window

0x8a35,	// (0x000137d6) list_single_pane_cp2_g4

0x71b0,	// (0x00011f51) bg_popup_preview_window_pane_ParamLimits

0x71b0,	// (0x00011f51) bg_popup_preview_window_pane

0xa3cb,	// (0x0001516c) popup_preview_text_window_t1_ParamLimits

0xa3cb,	// (0x0001516c) popup_preview_text_window_t1

0xa3e9,	// (0x0001518a) popup_preview_text_window_t2_ParamLimits

0xa3e9,	// (0x0001518a) popup_preview_text_window_t2

0xa432,	// (0x000151d3) popup_preview_text_window_t3_ParamLimits

0xa432,	// (0x000151d3) popup_preview_text_window_t3

0xa477,	// (0x00015218) popup_preview_text_window_t4_ParamLimits

0xa477,	// (0x00015218) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0001a69e) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0001a69e) popup_preview_text_window_t

0xa4f5,	// (0x00015296) scroll_pane_cp11

0x938a,	// (0x0001412b) bg_popup_preview_window_pane_g1

0xa38b,	// (0x0001512c) bg_popup_preview_window_pane_g2

0xa393,	// (0x00015134) bg_popup_preview_window_pane_g3

0xa39b,	// (0x0001513c) bg_popup_preview_window_pane_g4

0xa3a3,	// (0x00015144) bg_popup_preview_window_pane_g5

0xa3ab,	// (0x0001514c) bg_popup_preview_window_pane_g6

0xa3b3,	// (0x00015154) bg_popup_preview_window_pane_g7

0xa3bb,	// (0x0001515c) bg_popup_preview_window_pane_g8

0x4831,	// (0x0000f5d2) aid_popup_width_pane

0x5629,	// (0x000103ca) popup_midp_note_alarm_window_ParamLimits

0x5629,	// (0x000103ca) popup_midp_note_alarm_window

0x7c3b,	// (0x000129dc) data_form_pane_ParamLimits

0x7c47,	// (0x000129e8) form_field_data_pane_g1

0x7c51,	// (0x000129f2) form_field_data_pane_t1_ParamLimits

0x7c69,	// (0x00012a0a) input_focus_pane_ParamLimits

0x7c77,	// (0x00012a18) data_form_wide_pane_ParamLimits

0x7c83,	// (0x00012a24) form_field_data_wide_pane_g1

0x7ca3,	// (0x00012a44) form_field_data_wide_pane_t1_ParamLimits

0x745f,	// (0x00012200) input_focus_pane_cp6_ParamLimits

0x7efa,	// (0x00012c9b) input_popup_find_pane_g1_ParamLimits

0x7efa,	// (0x00012c9b) input_popup_find_pane_g1

0x4dad,	// (0x0000fb4e) aid_navi_side_left_pane

0x4dc2,	// (0x0000fb63) aid_navi_side_right_pane

0x9d98,	// (0x00014b39) bg_popup_window_pane_cp30_ParamLimits

0x9d98,	// (0x00014b39) bg_popup_window_pane_cp30

0x9e1e,	// (0x00014bbf) popup_midp_note_alarm_window_g1_ParamLimits

0x9e1e,	// (0x00014bbf) popup_midp_note_alarm_window_g1

0x9e4e,	// (0x00014bef) popup_midp_note_alarm_window_t1_ParamLimits

0x9e4e,	// (0x00014bef) popup_midp_note_alarm_window_t1

0x9eef,	// (0x00014c90) popup_midp_note_alarm_window_t2_ParamLimits

0x9eef,	// (0x00014c90) popup_midp_note_alarm_window_t2

0x9f9d,	// (0x00014d3e) popup_midp_note_alarm_window_t3_ParamLimits

0x9f9d,	// (0x00014d3e) popup_midp_note_alarm_window_t3

0x9fcf,	// (0x00014d70) popup_midp_note_alarm_window_t4_ParamLimits

0x9fcf,	// (0x00014d70) popup_midp_note_alarm_window_t4

0x9ff5,	// (0x00014d96) popup_midp_note_alarm_window_t5_ParamLimits

0x9ff5,	// (0x00014d96) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0001a63b) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0001a63b) popup_midp_note_alarm_window_t

0xa0a1,	// (0x00014e42) wait_bar_pane_cp1_ParamLimits

0xa0a1,	// (0x00014e42) wait_bar_pane_cp1

0x6d5f,	// (0x00011b00) wait_anim_pane_copy1

0x6d5f,	// (0x00011b00) wait_border_pane_copy1

0x9a7e,	// (0x0001481f) wait_border_pane_g1_copy1

0x7cba,	// (0x00012a5b) form_field_popup_pane_g1

0x7cc2,	// (0x00012a63) form_field_popup_pane_t1_ParamLimits

0x7c69,	// (0x00012a0a) input_focus_pane_cp7_ParamLimits

0x7cda,	// (0x00012a7b) list_form_pane_ParamLimits

0x7ce6,	// (0x00012a87) form_field_popup_wide_pane_g1

0x7cee,	// (0x00012a8f) form_field_popup_wide_pane_t1_ParamLimits

0x7c69,	// (0x00012a0a) input_focus_pane_cp8_ParamLimits

0x7d00,	// (0x00012aa1) list_form_wide_pane_ParamLimits

0xac77,	// (0x00015a18) aid_size_cell_graphic_pane

0x7dd4,	// (0x00012b75) data_form_pane_t1_ParamLimits

0xaa06,	// (0x000157a7) data_form_wide_pane_t1_ParamLimits

0x8f29,	// (0x00013cca) bg_status_flat_pane

0x6d9f,	// (0x00011b40) title_pane_t1_ParamLimits

0x6e07,	// (0x00011ba8) title_pane_t2_ParamLimits

0x6e2d,	// (0x00011bce) title_pane_t3_ParamLimits

0xf557,	// (0x0001a2f8) title_pane_t_ParamLimits

0x83ce,	// (0x0001316f) level_1_signal_ParamLimits

0x83e0,	// (0x00013181) level_2_signal_ParamLimits

0x83f3,	// (0x00013194) level_3_signal_ParamLimits

0x8406,	// (0x000131a7) level_4_signal_ParamLimits

0x8419,	// (0x000131ba) level_5_signal_ParamLimits

0x842c,	// (0x000131cd) level_6_signal_ParamLimits

0x843f,	// (0x000131e0) level_7_signal_ParamLimits

0x83ce,	// (0x0001316f) level_1_battery_ParamLimits

0x83e0,	// (0x00013181) level_2_battery_ParamLimits

0x83f3,	// (0x00013194) level_3_battery_ParamLimits

0x8406,	// (0x000131a7) level_4_battery_ParamLimits

0x8419,	// (0x000131ba) level_5_battery_ParamLimits

0x842c,	// (0x000131cd) level_6_battery_ParamLimits

0x843f,	// (0x000131e0) level_7_battery_ParamLimits

0x9c9d,	// (0x00014a3e) bg_status_flat_pane_g1

0x9ca5,	// (0x00014a46) bg_status_flat_pane_g2

0x9cad,	// (0x00014a4e) bg_status_flat_pane_g3

0x9cb5,	// (0x00014a56) bg_status_flat_pane_g4

0x9cbd,	// (0x00014a5e) bg_status_flat_pane_g5

0x9cc5,	// (0x00014a66) bg_status_flat_pane_g6

0x9ccd,	// (0x00014a6e) bg_status_flat_pane_g7

0x6e55,	// (0x00011bf6) tabs_3_active_pane_t1_ParamLimits

0x6e55,	// (0x00011bf6) tabs_3_passive_pane_t1_ParamLimits

0x6e6f,	// (0x00011c10) tabs_4_active_pane_t1_ParamLimits

0x6e6f,	// (0x00011c10) tabs_4_1_passive_pane_t1_ParamLimits

0x7f8e,	// (0x00012d2f) tabs_2_active_pane_t1_ParamLimits

0x7f8e,	// (0x00012d2f) tabs_2_passive_pane_t1_ParamLimits

0x7fa0,	// (0x00012d41) bg_active_tab_pane_cp4_ParamLimits

0x7fae,	// (0x00012d4f) tabs_2_long_active_pane_t1_ParamLimits

0x7fc1,	// (0x00012d62) bg_passive_tab_pane_cp4_ParamLimits

0x5970,	// (0x00010711) list_single_midp_graphic_pane_t1_ParamLimits

0x7fa0,	// (0x00012d41) bg_active_tab_pane_cp5_ParamLimits

0x7fcd,	// (0x00012d6e) tabs_3_long_active_pane_t1_ParamLimits

0x7fc1,	// (0x00012d62) bg_passive_tab_pane_cp5_ParamLimits

0x5970,	// (0x00010711) list_single_midp_graphic_pane_t1

0x8f29,	// (0x00013cca) bg_status_flat_pane_ParamLimits

0x8fec,	// (0x00013d8d) indicator_pane_cp2_ParamLimits

0x8fec,	// (0x00013d8d) indicator_pane_cp2

0x9117,	// (0x00013eb8) navi_pane_srt_ParamLimits

0x9117,	// (0x00013eb8) navi_pane_srt

0x913b,	// (0x00013edc) popup_clock_digital_analogue_window_cp1

0x6f36,	// (0x00011cd7) indicator_pane_t1

0x8b04,	// (0x000138a5) copy_highlight_pane

0x8b04,	// (0x000138a5) cursor_graphics_pane

0x8b04,	// (0x000138a5) graphic_within_text_pane

0x8b04,	// (0x000138a5) link_highlight_pane

0xa4b8,	// (0x00015259) popup_preview_text_window_t5_ParamLimits

0xa4b8,	// (0x00015259) popup_preview_text_window_t5

0x8c32,	// (0x000139d3) cursor_digital_pane

0x8c32,	// (0x000139d3) cursor_primary_pane

0x8c43,	// (0x000139e4) cursor_primary_small_pane

0x8c4b,	// (0x000139ec) cursor_secondary_pane

0x8c53,	// (0x000139f4) cursor_title_pane

0x8c32,	// (0x000139d3) link_highlight_digital_pane

0x8c3a,	// (0x000139db) link_highlight_primary_pane

0x8c43,	// (0x000139e4) link_highlight_primary_small_pane

0x8c4b,	// (0x000139ec) link_highlight_secondary_pane

0x8c53,	// (0x000139f4) link_highlight_title_pane

0x8c32,	// (0x000139d3) copy_highlight_digital_pane

0x8c32,	// (0x000139d3) copy_highlight_primary_pane

0x8c43,	// (0x000139e4) copy_highlight_primary_small_pane

0x8c4b,	// (0x000139ec) copy_highlight_secondary_pane

0x8c53,	// (0x000139f4) copy_highlight_title_pane

0x8c4b,	// (0x000139ec) graphic_text_digital_pane

0x9d3b,	// (0x00014adc) graphic_text_primary_pane

0x9d44,	// (0x00014ae5) graphic_text_primary_small_pane

0x8c43,	// (0x000139e4) graphic_text_secondary_pane

0x8c32,	// (0x000139d3) graphic_text_title_pane

0x8c5b,	// (0x000139fc) cursor_primary_pane_g1

0x9d2d,	// (0x00014ace) cursor_text_primary_t1

0x9d15,	// (0x00014ab6) cursor_primary_small_pane_g1

0x9d1f,	// (0x00014ac0) cursor_text_primary_small_t1

0x9cfd,	// (0x00014a9e) cursor_primary_small_pane_g1_copy1

0x9d07,	// (0x00014aa8) cursor_text_primary_small_t1_copy1

0x9ce5,	// (0x00014a86) cursor_text_title_t1

0x9cf3,	// (0x00014a94) cursor_title_pane_g1

0x8c5b,	// (0x000139fc) cursor_digital_pane_g1

0x8c65,	// (0x00013a06) cursor_text_digital_t1

0x8c8a,	// (0x00013a2b) link_highlight_primary_pane_g1

0x9c8e,	// (0x00014a2f) link_highlight_primary_pane_t1

0x8c73,	// (0x00013a14) link_highlight_primary_small_pane_g1

0x8c7b,	// (0x00013a1c) link_highlight_primary_small_pane_t1

0x8c8a,	// (0x00013a2b) link_highlight_secondary_pane_g1

0x8c92,	// (0x00013a33) link_highlight_secondary_pane_t1

0x9c02,	// (0x000149a3) link_highlight_title_pane_g1

0x9c0a,	// (0x000149ab) link_highlight_title_pane_t1

0x9beb,	// (0x0001498c) link_highlight_digital_pane_g1

0x9bf3,	// (0x00014994) link_highlight_digital_pane_t1

0x9ac3,	// (0x00014864) copy_highlight_primary_pane_g1

0x9acb,	// (0x0001486c) copy_highlight_primary_pane_t1

0x9a9d,	// (0x0001483e) copy_highlight_primary_small_pane_g1

0x9ab4,	// (0x00014855) copy_highlight_primary_small_pane_t1

0x8ca1,	// (0x00013a42) copy_highlight_secondary_pane_g1

0x8ca9,	// (0x00013a4a) copy_highlight_secondary_pane_t1

0x9a9d,	// (0x0001483e) copy_highlight_title_pane_g1

0x9aa5,	// (0x00014846) copy_highlight_title_pane_t1

0x9ac3,	// (0x00014864) copy_highlight_digital_pane_g1

0xae45,	// (0x00015be6) copy_highlight_digital_pane_t1

0xad99,	// (0x00015b3a) graphic_text_primary_pane_g1

0xae29,	// (0x00015bca) graphic_text_primary_pane_t1

0xae37,	// (0x00015bd8) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0001a76a) graphic_text_primary_pane_t

0xae05,	// (0x00015ba6) graphic_text_primary_small_pane_g1

0xae0d,	// (0x00015bae) graphic_text_primary_small_pane_t1

0xae1b,	// (0x00015bbc) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0001a765) graphic_text_primary_small_pane_t

0xade1,	// (0x00015b82) graphic_text_secondary_pane_g1

0xade9,	// (0x00015b8a) graphic_text_secondary_pane_t1

0xadf7,	// (0x00015b98) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0001a760) graphic_text_secondary_pane_t

0xadbd,	// (0x00015b5e) graphic_text_title_pane_g1

0xadc5,	// (0x00015b66) graphic_text_title_pane_t1

0xadd3,	// (0x00015b74) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0001a75b) graphic_text_title_pane_t

0xad99,	// (0x00015b3a) graphic_text_digital_pane_g1

0xada1,	// (0x00015b42) graphic_text_digital_pane_t1

0xadaf,	// (0x00015b50) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0001a756) graphic_text_digital_pane_t

0x6e3f,	// (0x00011be0) navi_icon_pane_srt_ParamLimits

0x6e3f,	// (0x00011be0) navi_icon_pane_srt

0x6d5f,	// (0x00011b00) navi_midp_pane_srt

0x6d5f,	// (0x00011b00) navi_navi_pane_srt

0x6e3f,	// (0x00011be0) navi_text_pane_srt_ParamLimits

0x6e3f,	// (0x00011be0) navi_text_pane_srt

0xad64,	// (0x00015b05) navi_navi_icon_text_pane_srt

0xad6c,	// (0x00015b0d) navi_navi_pane_srt_g1_ParamLimits

0xad6c,	// (0x00015b0d) navi_navi_pane_srt_g1

0xad7e,	// (0x00015b1f) navi_navi_pane_srt_g2_ParamLimits

0xad7e,	// (0x00015b1f) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0001a751) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0001a751) navi_navi_pane_srt_g

0xad90,	// (0x00015b31) navi_navi_tabs_pane_srt

0xad64,	// (0x00015b05) navi_navi_text_pane_srt

0xad64,	// (0x00015b05) navi_navi_volume_pane_srt

0xad55,	// (0x00015af6) navi_navi_text_pane_srt_t1

0x5cea,	// (0x00010a8b) navi_navi_volume_pane_srt_g1

0x5cf2,	// (0x00010a93) volume_small_pane_srt_ParamLimits

0x5cf2,	// (0x00010a93) volume_small_pane_srt

0x508d,	// (0x0000fe2e) volume_small_pane_srt_g1_ParamLimits

0x508d,	// (0x0000fe2e) volume_small_pane_srt_g1

0x509d,	// (0x0000fe3e) volume_small_pane_srt_g2_ParamLimits

0x509d,	// (0x0000fe3e) volume_small_pane_srt_g2

0x50ae,	// (0x0000fe4f) volume_small_pane_srt_g3_ParamLimits

0x50ae,	// (0x0000fe4f) volume_small_pane_srt_g3

0x50bf,	// (0x0000fe60) volume_small_pane_srt_g4_ParamLimits

0x50bf,	// (0x0000fe60) volume_small_pane_srt_g4

0x50d0,	// (0x0000fe71) volume_small_pane_srt_g5_ParamLimits

0x50d0,	// (0x0000fe71) volume_small_pane_srt_g5

0x50e1,	// (0x0000fe82) volume_small_pane_srt_g6_ParamLimits

0x50e1,	// (0x0000fe82) volume_small_pane_srt_g6

0x50f2,	// (0x0000fe93) volume_small_pane_srt_g7_ParamLimits

0x50f2,	// (0x0000fe93) volume_small_pane_srt_g7

0x5103,	// (0x0000fea4) volume_small_pane_srt_g8_ParamLimits

0x5103,	// (0x0000fea4) volume_small_pane_srt_g8

0x5114,	// (0x0000feb5) volume_small_pane_srt_g9_ParamLimits

0x5114,	// (0x0000feb5) volume_small_pane_srt_g9

0x5125,	// (0x0000fec6) volume_small_pane_srt_g10_ParamLimits

0x5125,	// (0x0000fec6) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001a4f9) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001a4f9) volume_small_pane_srt_g

0x7259,	// (0x00011ffa) query_popup_data_pane_cp2

0xad3b,	// (0x00015adc) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xad3b,	// (0x00015adc) navi_navi_icon_text_pane_srt_t1

0x9d3b,	// (0x00014adc) navi_tabs_2_long_pane_srt

0x9d3b,	// (0x00014adc) navi_tabs_2_pane_srt

0x9d3b,	// (0x00014adc) navi_tabs_3_long_pane_srt

0x9d3b,	// (0x00014adc) navi_tabs_3_pane_srt

0x9d3b,	// (0x00014adc) navi_tabs_4_pane_srt

0x5cca,	// (0x00010a6b) tabs_2_active_pane_srt_ParamLimits

0x5cca,	// (0x00010a6b) tabs_2_active_pane_srt

0x5cda,	// (0x00010a7b) tabs_2_passive_pane_srt_ParamLimits

0x5cda,	// (0x00010a7b) tabs_2_passive_pane_srt

0x8e30,	// (0x00013bd1) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8e30,	// (0x00013bd1) bg_passive_tab_pane_cp1_srt

0xad07,	// (0x00015aa8) bg_passive_tab_pane_g1_cp1_srt

0x8746,	// (0x000134e7) bg_passive_tab_pane_g2_cp1_srt

0xad10,	// (0x00015ab1) bg_passive_tab_pane_g3_cp1_srt

0x6e3f,	// (0x00011be0) bg_active_tab_pane_cp1_srt_ParamLimits

0x6e3f,	// (0x00011be0) bg_active_tab_pane_cp1_srt

0xad19,	// (0x00015aba) tabs_2_active_pane_srt_g1

0xad21,	// (0x00015ac2) tabs_2_active_pane_srt_t1_ParamLimits

0xad21,	// (0x00015ac2) tabs_2_active_pane_srt_t1

0xad07,	// (0x00015aa8) bg_active_tab_pane_g1_cp1_srt

0x8746,	// (0x000134e7) bg_active_tab_pane_g2_cp1_srt

0xad10,	// (0x00015ab1) bg_active_tab_pane_g3_cp1_srt

0x5c97,	// (0x00010a38) tabs_3_active_pane_srt_ParamLimits

0x5c97,	// (0x00010a38) tabs_3_active_pane_srt

0x5ca8,	// (0x00010a49) tabs_3_passive_pane_cp_srt_ParamLimits

0x5ca8,	// (0x00010a49) tabs_3_passive_pane_cp_srt

0x5cb9,	// (0x00010a5a) tabs_3_passive_pane_srt_ParamLimits

0x5cb9,	// (0x00010a5a) tabs_3_passive_pane_srt

0x8e30,	// (0x00013bd1) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8e30,	// (0x00013bd1) bg_passive_tab_pane_cp2_srt

0x8cb8,	// (0x00013a59) bg_passive_tab_pane_g1_cp2_srt

0x8746,	// (0x000134e7) bg_passive_tab_pane_g2_cp2_srt

0x8cc1,	// (0x00013a62) bg_passive_tab_pane_g3_cp2_srt

0x6e3f,	// (0x00011be0) bg_active_tab_pane_cp2_srt_ParamLimits

0x6e3f,	// (0x00011be0) bg_active_tab_pane_cp2_srt

0xaced,	// (0x00015a8e) tabs_3_active_pane_srt_g1

0xacf5,	// (0x00015a96) tabs_3_active_pane_srt_t1_ParamLimits

0xacf5,	// (0x00015a96) tabs_3_active_pane_srt_t1

0x8cb8,	// (0x00013a59) bg_active_tab_pane_g1_cp2_srt

0x8746,	// (0x000134e7) bg_active_tab_pane_g2_cp2_srt

0x8cc1,	// (0x00013a62) bg_active_tab_pane_g3_cp2_srt

0x5c4f,	// (0x000109f0) tabs_4_active_pane_srt_ParamLimits

0x5c4f,	// (0x000109f0) tabs_4_active_pane_srt

0x5c61,	// (0x00010a02) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5c61,	// (0x00010a02) tabs_4_passive_pane_cp2_srt

0x5294,	// (0x00010035) aid_size_cell_toolbar

0x7fc1,	// (0x00012d62) main_idle_act_pane_ParamLimits

0x545f,	// (0x00010200) popup_large_graphic_colour_window_ParamLimits

0x57c6,	// (0x00010567) popup_toolbar_window_ParamLimits

0x57c6,	// (0x00010567) popup_toolbar_window

0xaa85,	// (0x00015826) list_single_graphic_2heading_pane_ParamLimits

0xaa85,	// (0x00015826) list_single_graphic_2heading_pane

0x817d,	// (0x00012f1e) aid_size_cell_apps_grid_lsc_pane

0x818f,	// (0x00012f30) aid_size_cell_apps_grid_prt_pane

0x8e30,	// (0x00013bd1) bg_wml_button_pane_cp1_ParamLimits

0x8e30,	// (0x00013bd1) bg_wml_button_pane_cp1

0x96eb,	// (0x0001448c) form_midp_field_text_pane_t1_ParamLimits

0x94ac,	// (0x0001424d) input_focus_pane_cp050_ParamLimits

0x9722,	// (0x000144c3) list_midp_form_text_pane_ParamLimits

0x96c8,	// (0x00014469) input_focus_pane_cp051_ParamLimits

0x96dc,	// (0x0001447d) list_midp_choice_pane_ParamLimits

0x9565,	// (0x00014306) list_single_2graphic_pane_cp3_ParamLimits

0x9565,	// (0x00014306) list_single_2graphic_pane_cp3

0x9586,	// (0x00014327) list_single_midp_graphic_pane_ParamLimits

0x9586,	// (0x00014327) list_single_midp_graphic_pane

0x5873,	// (0x00010614) list_single_graphic_2heading_pane_g1_ParamLimits

0x5873,	// (0x00010614) list_single_graphic_2heading_pane_g1

0x587f,	// (0x00010620) list_single_graphic_2heading_pane_g4_ParamLimits

0x587f,	// (0x00010620) list_single_graphic_2heading_pane_g4

0x588b,	// (0x0001062c) list_single_graphic_2heading_pane_g5_ParamLimits

0x588b,	// (0x0001062c) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001a54c) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001a54c) list_single_graphic_2heading_pane_g

0x5897,	// (0x00010638) list_single_graphic_2heading_pane_t1_ParamLimits

0x5897,	// (0x00010638) list_single_graphic_2heading_pane_t1

0x58ab,	// (0x0001064c) list_single_graphic_2heading_pane_t2_ParamLimits

0x58ab,	// (0x0001064c) list_single_graphic_2heading_pane_t2

0x58c7,	// (0x00010668) list_single_graphic_2heading_pane_t3_ParamLimits

0x58c7,	// (0x00010668) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001a553) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001a553) list_single_graphic_2heading_pane_t

0x929a,	// (0x0001403b) bg_popup_sub_pane_cp2

0x92c4,	// (0x00014065) grid_toobar_pane

0x58df,	// (0x00010680) cell_toolbar_pane_ParamLimits

0x58df,	// (0x00010680) cell_toolbar_pane

0x932e,	// (0x000140cf) cell_toolbar_pane_g1_ParamLimits

0x932e,	// (0x000140cf) cell_toolbar_pane_g1

0x9342,	// (0x000140e3) cell_toolbar_pane_g2_ParamLimits

0x9342,	// (0x000140e3) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001a561) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001a561) cell_toolbar_pane_g

0x9364,	// (0x00014105) grid_highlight_pane_cp2_ParamLimits

0x9364,	// (0x00014105) grid_highlight_pane_cp2

0x937e,	// (0x0001411f) toolbar_button_pane

0x938a,	// (0x0001412b) toolbar_button_pane_g1

0x9392,	// (0x00014133) toolbar_button_pane_g2

0x939a,	// (0x0001413b) toolbar_button_pane_g3

0x93a2,	// (0x00014143) toolbar_button_pane_g4

0x93aa,	// (0x0001414b) toolbar_button_pane_g5

0x93b2,	// (0x00014153) toolbar_button_pane_g6

0x93ba,	// (0x0001415b) toolbar_button_pane_g7

0x93c2,	// (0x00014163) toolbar_button_pane_g8

0x93ca,	// (0x0001416b) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001a566) toolbar_button_pane_g

0x5917,	// (0x000106b8) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5917,	// (0x000106b8) list_single_2graphic_pane_g1_cp3

0x5923,	// (0x000106c4) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5923,	// (0x000106c4) list_single_2graphic_pane_g2_cp3

0x5934,	// (0x000106d5) list_single_2graphic_pane_g3_cp3

0x593c,	// (0x000106dd) list_single_2graphic_pane_g4_cp3_ParamLimits

0x593c,	// (0x000106dd) list_single_2graphic_pane_g4_cp3

0x5948,	// (0x000106e9) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5948,	// (0x000106e9) list_single_2graphic_pane_t1_cp3

0x5964,	// (0x00010705) list_single_midp_graphic_pane_g2_ParamLimits

0x5964,	// (0x00010705) list_single_midp_graphic_pane_g2

0x529c,	// (0x0001003d) aid_zoom_text_primary

0x52a4,	// (0x00010045) aid_zoom_text_secondary

0x8d72,	// (0x00013b13) status_small_pane_g7_ParamLimits

0x8d72,	// (0x00013b13) status_small_pane_g7

0x8d95,	// (0x00013b36) status_small_pane_t1_ParamLimits

0x6d76,	// (0x00011b17) title_pane_g2

0x0003,

0xf54e,	// (0x0001a2ef) title_pane_g

0x72fd,	// (0x0001209e) aid_size_cell_colour_1_pane_ParamLimits

0x72fd,	// (0x0001209e) aid_size_cell_colour_1_pane

0x7311,	// (0x000120b2) aid_size_cell_colour_2_pane_ParamLimits

0x7311,	// (0x000120b2) aid_size_cell_colour_2_pane

0x7325,	// (0x000120c6) aid_size_cell_colour_3_pane_ParamLimits

0x7325,	// (0x000120c6) aid_size_cell_colour_3_pane

0x7339,	// (0x000120da) aid_size_cell_colour_4_pane_ParamLimits

0x7339,	// (0x000120da) aid_size_cell_colour_4_pane

0x4cea,	// (0x0000fa8b) title_pane_stacon_g1_ParamLimits

0x4cea,	// (0x0000fa8b) title_pane_stacon_g1

0x9b22,	// (0x000148c3) popup_note_wait_window_g3_ParamLimits

0x9b22,	// (0x000148c3) popup_note_wait_window_g3

0x9b98,	// (0x00014939) popup_note_wait_window_t5_ParamLimits

0x9b98,	// (0x00014939) popup_note_wait_window_t5

0x6d5f,	// (0x00011b00) main_feb_china_hwr_fs_writing_pane

0x5342,	// (0x000100e3) popup_feb_china_hwr_fs_window_ParamLimits

0x5342,	// (0x000100e3) popup_feb_china_hwr_fs_window

0x5986,	// (0x00010727) aid_size_cell_hwr_fs_ParamLimits

0x5986,	// (0x00010727) aid_size_cell_hwr_fs

0x94ac,	// (0x0001424d) bg_popup_sub_pane_cp3_ParamLimits

0x94ac,	// (0x0001424d) bg_popup_sub_pane_cp3

0x599b,	// (0x0001073c) grid_hwr_fs_pane_ParamLimits

0x599b,	// (0x0001073c) grid_hwr_fs_pane

0x59b3,	// (0x00010754) linegrid_hwr_fs_pane_ParamLimits

0x59b3,	// (0x00010754) linegrid_hwr_fs_pane

0x59c3,	// (0x00010764) cell_hwr_fs_pane_ParamLimits

0x59c3,	// (0x00010764) cell_hwr_fs_pane

0x94b8,	// (0x00014259) linegrid_hwr_fs_pane_g1_ParamLimits

0x94b8,	// (0x00014259) linegrid_hwr_fs_pane_g1

0x94c4,	// (0x00014265) linegrid_hwr_fs_pane_g2_ParamLimits

0x94c4,	// (0x00014265) linegrid_hwr_fs_pane_g2

0x94d6,	// (0x00014277) linegrid_hwr_fs_pane_g3_ParamLimits

0x94d6,	// (0x00014277) linegrid_hwr_fs_pane_g3

0x59e5,	// (0x00010786) linegrid_hwr_fs_pane_g4_ParamLimits

0x59e5,	// (0x00010786) linegrid_hwr_fs_pane_g4

0x59ff,	// (0x000107a0) linegrid_hwr_fs_pane_g5_ParamLimits

0x59ff,	// (0x000107a0) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0001a591) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0001a591) linegrid_hwr_fs_pane_g

0x94e2,	// (0x00014283) cell_hwr_fs_pane_g1_ParamLimits

0x94e2,	// (0x00014283) cell_hwr_fs_pane_g1

0x91d1,	// (0x00013f72) cell_hwr_fs_pane_g2_ParamLimits

0x91d1,	// (0x00013f72) cell_hwr_fs_pane_g2

0x94f8,	// (0x00014299) cell_hwr_fs_pane_g3_ParamLimits

0x94f8,	// (0x00014299) cell_hwr_fs_pane_g3

0x9505,	// (0x000142a6) cell_hwr_fs_pane_g4_ParamLimits

0x9505,	// (0x000142a6) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0001a59c) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0001a59c) cell_hwr_fs_pane_g

0x5a15,	// (0x000107b6) cell_hwr_fs_pane_t1

0x6d5f,	// (0x00011b00) grid_highlight_pane_cp6

0x6d5f,	// (0x00011b00) main_idle_act2_pane

0x7f34,	// (0x00012cd5) aid_inside_area_popup_secondary

0xa1db,	// (0x00014f7c) aid_inside_area_window_primary_ParamLimits

0xa1db,	// (0x00014f7c) aid_inside_area_window_primary

0xae54,	// (0x00015bf5) ai2_news_ticker_pane

0xae5c,	// (0x00015bfd) aid_size_cell_ai1_link_ParamLimits

0xae5c,	// (0x00015bfd) aid_size_cell_ai1_link

0xae76,	// (0x00015c17) popup_ai2_data_window_ParamLimits

0xae76,	// (0x00015c17) popup_ai2_data_window

0xae8c,	// (0x00015c2d) popup_ai2_link_window_ParamLimits

0xae8c,	// (0x00015c2d) popup_ai2_link_window

0x94ac,	// (0x0001424d) bg_popup_sub_pane_cp4_ParamLimits

0x94ac,	// (0x0001424d) bg_popup_sub_pane_cp4

0xaea0,	// (0x00015c41) grid_ai2_link_pane_ParamLimits

0xaea0,	// (0x00015c41) grid_ai2_link_pane

0xaeb7,	// (0x00015c58) popup_ai2_link_window_g1_ParamLimits

0xaeb7,	// (0x00015c58) popup_ai2_link_window_g1

0xaec3,	// (0x00015c64) popup_ai2_link_window_g2_ParamLimits

0xaec3,	// (0x00015c64) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0001a76f) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0001a76f) popup_ai2_link_window_g

0xaed2,	// (0x00015c73) ai2_mp_button_pane

0xaeda,	// (0x00015c7b) ai2_mp_volume_pane

0x96c8,	// (0x00014469) bg_popup_sub_pane_cp5_ParamLimits

0x96c8,	// (0x00014469) bg_popup_sub_pane_cp5

0xaee2,	// (0x00015c83) heading_ai2_gene_pane_ParamLimits

0xaee2,	// (0x00015c83) heading_ai2_gene_pane

0xaeee,	// (0x00015c8f) list_ai2_gene_pane_ParamLimits

0xaeee,	// (0x00015c8f) list_ai2_gene_pane

0xaf36,	// (0x00015cd7) cell_ai2_link_pane_ParamLimits

0xaf36,	// (0x00015cd7) cell_ai2_link_pane

0xaf4c,	// (0x00015ced) cell_ai2_link_pane_g1

0x6d5f,	// (0x00011b00) grid_highlight_pane_cp7

0x5d07,	// (0x00010aa8) ai2_mp_volume_pane_g1

0xb01c,	// (0x00015dbd) ai2_mp_volume_pane_g2

0xaf91,	// (0x00015d32) list_ai2_gene_pane_t1

0xb024,	// (0x00015dc5) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0001a788) ai2_mp_volume_pane_g

0x5d0f,	// (0x00010ab0) volume_small_pane_cp3

0xb02c,	// (0x00015dcd) aid_size_cell_ai2_button

0xb034,	// (0x00015dd5) grid_ai2_button_pane

0xb03d,	// (0x00015dde) cell_ai2_button_pane_ParamLimits

0xb03d,	// (0x00015dde) cell_ai2_button_pane

0x6d55,	// (0x00011af6) cell_ai2_button_pane_g1

0x6d5f,	// (0x00011b00) grid_highlight_pane_cp8

0xafdc,	// (0x00015d7d) ai2_gene_pane_t1_ParamLimits

0xafdc,	// (0x00015d7d) ai2_gene_pane_t1

0x528a,	// (0x0001002b) aid_height_parent_landscape

0xa86e,	// (0x0001560f) aid_height_set_list

0xa87f,	// (0x00015620) aid_size_parent

0xac77,	// (0x00015a18) aid_size_cell_graphic_pane_ParamLimits

0xaefe,	// (0x00015c9f) popup_ai2_data_window_g1_ParamLimits

0xaefe,	// (0x00015c9f) popup_ai2_data_window_g1

0xaf0a,	// (0x00015cab) ai2_news_ticker_pane_g1

0xaf12,	// (0x00015cb3) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0001a774) ai2_news_ticker_pane_g

0xaf1a,	// (0x00015cbb) ai2_news_ticker_pane_t1

0xaf28,	// (0x00015cc9) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0001a779) ai2_news_ticker_pane_t

0xaf55,	// (0x00015cf6) heading_ai2_gene_pane_g1

0xaf5d,	// (0x00015cfe) heading_ai2_gene_pane_t1_ParamLimits

0xaf5d,	// (0x00015cfe) heading_ai2_gene_pane_t1

0xaf72,	// (0x00015d13) list_highlight_pane_cp6

0xaf7a,	// (0x00015d1b) ai2_gene_pane_ParamLimits

0xaf7a,	// (0x00015d1b) ai2_gene_pane

0xaf9f,	// (0x00015d40) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0001a77e) list_ai2_gene_pane_t

0xafad,	// (0x00015d4e) list_highlight_pane_cp8_ParamLimits

0xafad,	// (0x00015d4e) list_highlight_pane_cp8

0xafbe,	// (0x00015d5f) ai2_gene_pane_g1_ParamLimits

0xafbe,	// (0x00015d5f) ai2_gene_pane_g1

0xafd0,	// (0x00015d71) ai2_gene_pane_g2_ParamLimits

0xafd0,	// (0x00015d71) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0001a783) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0001a783) ai2_gene_pane_g

0x7684,	// (0x00012425) scroll_pane_cp12

0x5247,	// (0x0000ffe8) control_pane_t3_ParamLimits

0x5247,	// (0x0000ffe8) control_pane_t3

0x8d86,	// (0x00013b27) status_small_pane_g8_ParamLimits

0x8d86,	// (0x00013b27) status_small_pane_g8

0x5428,	// (0x000101c9) popup_find_window_ParamLimits

0x563d,	// (0x000103de) popup_note_image_window_ParamLimits

0x9300,	// (0x000140a1) list_double2_graphic_pane_vc_g1_ParamLimits

0x9300,	// (0x000140a1) list_double2_graphic_pane_vc_g1

0x8a3d,	// (0x000137de) list_double2_graphic_pane_vc_g2_ParamLimits

0x8a3d,	// (0x000137de) list_double2_graphic_pane_vc_g2

0x930c,	// (0x000140ad) list_double2_graphic_pane_vc_g3_ParamLimits

0x930c,	// (0x000140ad) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001a55a) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001a55a) list_double2_graphic_pane_vc_g

0x9318,	// (0x000140b9) list_double2_graphic_pane_vc_t1_ParamLimits

0x9318,	// (0x000140b9) list_double2_graphic_pane_vc_t1

0x8a3d,	// (0x000137de) list_single_heading_pane_vc_g1_ParamLimits

0x8a3d,	// (0x000137de) list_single_heading_pane_vc_g1

0x930c,	// (0x000140ad) list_single_heading_pane_vc_g2_ParamLimits

0x930c,	// (0x000140ad) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a57b) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a57b) list_single_heading_pane_vc_g

0x93d2,	// (0x00014173) list_single_heading_pane_vc_t1_ParamLimits

0x93d2,	// (0x00014173) list_single_heading_pane_vc_t1

0x93e8,	// (0x00014189) list_single_heading_pane_vc_t2_ParamLimits

0x93e8,	// (0x00014189) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0001a580) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0001a580) list_single_heading_pane_vc_t

0x93fa,	// (0x0001419b) list_setting_number_pane_vc_g1_ParamLimits

0x93fa,	// (0x0001419b) list_setting_number_pane_vc_g1

0x9406,	// (0x000141a7) list_setting_number_pane_vc_g2_ParamLimits

0x9406,	// (0x000141a7) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001a585) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001a585) list_setting_number_pane_vc_g

0x9412,	// (0x000141b3) list_setting_number_pane_vc_t1_ParamLimits

0x9412,	// (0x000141b3) list_setting_number_pane_vc_t1

0x9426,	// (0x000141c7) list_setting_number_pane_vc_t2_ParamLimits

0x9426,	// (0x000141c7) list_setting_number_pane_vc_t2

0x9442,	// (0x000141e3) list_setting_number_pane_vc_t3_ParamLimits

0x9442,	// (0x000141e3) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0001a58a) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0001a58a) list_setting_number_pane_vc_t

0x9470,	// (0x00014211) set_value_pane_vc_ParamLimits

0x9470,	// (0x00014211) set_value_pane_vc

0xaa85,	// (0x00015826) list_double2_graphic_pane_vc_ParamLimits

0xaa85,	// (0x00015826) list_double2_graphic_pane_vc

0xaa85,	// (0x00015826) list_double2_large_graphic_pane_vc_ParamLimits

0xaa85,	// (0x00015826) list_double2_large_graphic_pane_vc

0xaa85,	// (0x00015826) list_double2_pane_vc_ParamLimits

0xaa85,	// (0x00015826) list_double2_pane_vc

0xaa85,	// (0x00015826) list_double_graphic_heading_pane_vc_ParamLimits

0xaa85,	// (0x00015826) list_double_graphic_heading_pane_vc

0xaa85,	// (0x00015826) list_double_graphic_pane_vc_ParamLimits

0xaa85,	// (0x00015826) list_double_graphic_pane_vc

0xaa85,	// (0x00015826) list_double_heading_pane_vc_ParamLimits

0xaa85,	// (0x00015826) list_double_heading_pane_vc

0xaa97,	// (0x00015838) list_double_large_graphic_pane_vc_ParamLimits

0xaa97,	// (0x00015838) list_double_large_graphic_pane_vc

0xaa85,	// (0x00015826) list_double_number_pane_vc_ParamLimits

0xaa85,	// (0x00015826) list_double_number_pane_vc

0xaa85,	// (0x00015826) list_double_pane_vc_ParamLimits

0xaa85,	// (0x00015826) list_double_pane_vc

0xaa85,	// (0x00015826) list_double_time_pane_vc_ParamLimits

0xaa85,	// (0x00015826) list_double_time_pane_vc

0xaa85,	// (0x00015826) list_setting_number_pane_vc_ParamLimits

0xaa85,	// (0x00015826) list_setting_number_pane_vc

0xaa85,	// (0x00015826) list_setting_pane_vc_ParamLimits

0xaa85,	// (0x00015826) list_setting_pane_vc

0xaa85,	// (0x00015826) list_single_graphic_heading_pane_vc_ParamLimits

0xaa85,	// (0x00015826) list_single_graphic_heading_pane_vc

0xaa85,	// (0x00015826) list_single_heading_pane_vc_ParamLimits

0xaa85,	// (0x00015826) list_single_heading_pane_vc

0xaab5,	// (0x00015856) list_single_number_heading_pane_vc_ParamLimits

0xaab5,	// (0x00015856) list_single_number_heading_pane_vc

0x9300,	// (0x000140a1) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x9300,	// (0x000140a1) list_double_graphic_heading_pane_vc_g1

0xb071,	// (0x00015e12) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb071,	// (0x00015e12) list_double_graphic_heading_pane_vc_g2

0xb07d,	// (0x00015e1e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb07d,	// (0x00015e1e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0001a78f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0001a78f) list_double_graphic_heading_pane_vc_g

0xb089,	// (0x00015e2a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb089,	// (0x00015e2a) list_double_graphic_heading_pane_vc_t1

0xb0a5,	// (0x00015e46) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb0a5,	// (0x00015e46) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x0001a796) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x0001a796) list_double_graphic_heading_pane_vc_t

0x93fa,	// (0x0001419b) list_setting_pane_vc_g1_ParamLimits

0x93fa,	// (0x0001419b) list_setting_pane_vc_g1

0x9406,	// (0x000141a7) list_setting_pane_vc_g2_ParamLimits

0x9406,	// (0x000141a7) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001a585) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001a585) list_setting_pane_vc_g

0xb2d0,	// (0x00016071) list_setting_pane_vc_t1_ParamLimits

0xb2d0,	// (0x00016071) list_setting_pane_vc_t1

0xb2ec,	// (0x0001608d) list_setting_pane_vc_t2_ParamLimits

0xb2ec,	// (0x0001608d) list_setting_pane_vc_t2

0x0001,

0xfa23,	// (0x0001a7c4) list_setting_pane_vc_t_ParamLimits

0xfa23,	// (0x0001a7c4) list_setting_pane_vc_t

0x9470,	// (0x00014211) set_value_pane_cp_vc_ParamLimits

0x9470,	// (0x00014211) set_value_pane_cp_vc

0x8a3d,	// (0x000137de) list_single_number_heading_pane_vc_g1_ParamLimits

0x8a3d,	// (0x000137de) list_single_number_heading_pane_vc_g1

0x930c,	// (0x000140ad) list_single_number_heading_pane_vc_g2_ParamLimits

0x930c,	// (0x000140ad) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a57b) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a57b) list_single_number_heading_pane_vc_g

0xb308,	// (0x000160a9) list_single_number_heading_pane_vc_t1_ParamLimits

0xb308,	// (0x000160a9) list_single_number_heading_pane_vc_t1

0xb31e,	// (0x000160bf) list_single_number_heading_pane_vc_t2_ParamLimits

0xb31e,	// (0x000160bf) list_single_number_heading_pane_vc_t2

0xb330,	// (0x000160d1) list_single_number_heading_pane_vc_t3_ParamLimits

0xb330,	// (0x000160d1) list_single_number_heading_pane_vc_t3

0x0002,

0xfa28,	// (0x0001a7c9) list_single_number_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0001a7c9) list_single_number_heading_pane_vc_t

0x9300,	// (0x000140a1) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9300,	// (0x000140a1) list_single_graphic_heading_pane_vc_g1

0x8a3d,	// (0x000137de) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8a3d,	// (0x000137de) list_single_graphic_heading_pane_vc_g4

0x930c,	// (0x000140ad) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x930c,	// (0x000140ad) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001a55a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001a55a) list_single_graphic_heading_pane_vc_g

0xb342,	// (0x000160e3) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb342,	// (0x000160e3) list_single_graphic_heading_pane_vc_t1

0xb358,	// (0x000160f9) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb358,	// (0x000160f9) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2f,	// (0x0001a7d0) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x0001a7d0) list_single_graphic_heading_pane_vc_t

0x8a3d,	// (0x000137de) list_double2_pane_vc_g1_ParamLimits

0x8a3d,	// (0x000137de) list_double2_pane_vc_g1

0x930c,	// (0x000140ad) list_double2_pane_vc_g2_ParamLimits

0x930c,	// (0x000140ad) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a57b) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a57b) list_double2_pane_vc_g

0xb36a,	// (0x0001610b) list_double2_pane_vc_t1_ParamLimits

0xb36a,	// (0x0001610b) list_double2_pane_vc_t1

0xb380,	// (0x00016121) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb380,	// (0x00016121) list_double2_large_graphic_pane_vc_g1

0x8a3d,	// (0x000137de) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8a3d,	// (0x000137de) list_double2_large_graphic_pane_vc_g2

0x930c,	// (0x000140ad) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x930c,	// (0x000140ad) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa34,	// (0x0001a7d5) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0001a7d5) list_double2_large_graphic_pane_vc_g

0xb38c,	// (0x0001612d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb38c,	// (0x0001612d) list_double2_large_graphic_pane_vc_t1

0xb3a2,	// (0x00016143) list_double_time_pane_vc_g1_ParamLimits

0xb3a2,	// (0x00016143) list_double_time_pane_vc_g1

0xb3ae,	// (0x0001614f) list_double_time_pane_vc_g2_ParamLimits

0xb3ae,	// (0x0001614f) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x0001a7dc) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x0001a7dc) list_double_time_pane_vc_g

0xb3ba,	// (0x0001615b) list_double_time_pane_vc_t1_ParamLimits

0xb3ba,	// (0x0001615b) list_double_time_pane_vc_t1

0xb3de,	// (0x0001617f) list_double_time_pane_vc_t2_ParamLimits

0xb3de,	// (0x0001617f) list_double_time_pane_vc_t2

0xb40d,	// (0x000161ae) list_double_time_pane_vc_t3_ParamLimits

0xb40d,	// (0x000161ae) list_double_time_pane_vc_t3

0xb41f,	// (0x000161c0) list_double_time_pane_vc_t4_ParamLimits

0xb41f,	// (0x000161c0) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x0001a7e1) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x0001a7e1) list_double_time_pane_vc_t

0x8a3d,	// (0x000137de) list_double_pane_vc_g1_ParamLimits

0x8a3d,	// (0x000137de) list_double_pane_vc_g1

0x930c,	// (0x000140ad) list_double_pane_vc_g2_ParamLimits

0x930c,	// (0x000140ad) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a57b) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a57b) list_double_pane_vc_g

0xb433,	// (0x000161d4) list_double_pane_vc_t1_ParamLimits

0xb433,	// (0x000161d4) list_double_pane_vc_t1

0xb447,	// (0x000161e8) list_double_pane_vc_t2_ParamLimits

0xb447,	// (0x000161e8) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x0001a7ea) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x0001a7ea) list_double_pane_vc_t

0x8a3d,	// (0x000137de) list_double_number_pane_vc_g1_ParamLimits

0x8a3d,	// (0x000137de) list_double_number_pane_vc_g1

0x930c,	// (0x000140ad) list_double_number_pane_vc_g2_ParamLimits

0x930c,	// (0x000140ad) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a57b) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a57b) list_double_number_pane_vc_g

0xb45f,	// (0x00016200) list_double_number_pane_vc_t1_ParamLimits

0xb45f,	// (0x00016200) list_double_number_pane_vc_t1

0xb471,	// (0x00016212) list_double_number_pane_vc_t2_ParamLimits

0xb471,	// (0x00016212) list_double_number_pane_vc_t2

0xb485,	// (0x00016226) list_double_number_pane_vc_t3_ParamLimits

0xb485,	// (0x00016226) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x0001a7ef) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x0001a7ef) list_double_number_pane_vc_t

0xb49d,	// (0x0001623e) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb49d,	// (0x0001623e) list_double_large_graphic_pane_vc_g1

0xb4bf,	// (0x00016260) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb4bf,	// (0x00016260) list_double_large_graphic_pane_vc_g2

0xb4d3,	// (0x00016274) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb4d3,	// (0x00016274) list_double_large_graphic_pane_vc_g3

0xb4e2,	// (0x00016283) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb4e2,	// (0x00016283) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x0001a7f6) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0001a7f6) list_double_large_graphic_pane_vc_g

0xb4ee,	// (0x0001628f) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb4ee,	// (0x0001628f) list_double_large_graphic_pane_vc_t1

0xb50a,	// (0x000162ab) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb50a,	// (0x000162ab) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0001a7ff) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0001a7ff) list_double_large_graphic_pane_vc_t

0xb071,	// (0x00015e12) list_double_heading_pane_vc_g1_ParamLimits

0xb071,	// (0x00015e12) list_double_heading_pane_vc_g1

0xb07d,	// (0x00015e1e) list_double_heading_pane_vc_g2_ParamLimits

0xb07d,	// (0x00015e1e) list_double_heading_pane_vc_g2

0x0001,

0xfa63,	// (0x0001a804) list_double_heading_pane_vc_g_ParamLimits

0xfa63,	// (0x0001a804) list_double_heading_pane_vc_g

0xb52c,	// (0x000162cd) list_double_heading_pane_vc_t1_ParamLimits

0xb52c,	// (0x000162cd) list_double_heading_pane_vc_t1

0xb540,	// (0x000162e1) list_double_heading_pane_vc_t2_ParamLimits

0xb540,	// (0x000162e1) list_double_heading_pane_vc_t2

0x0001,

0xfa68,	// (0x0001a809) list_double_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x0001a809) list_double_heading_pane_vc_t

0xb558,	// (0x000162f9) list_double_graphic_pane_vc_g1_ParamLimits

0xb558,	// (0x000162f9) list_double_graphic_pane_vc_g1

0xb564,	// (0x00016305) list_double_graphic_pane_vc_g2_ParamLimits

0xb564,	// (0x00016305) list_double_graphic_pane_vc_g2

0x8a3d,	// (0x000137de) list_double_graphic_pane_vc_g3_ParamLimits

0x8a3d,	// (0x000137de) list_double_graphic_pane_vc_g3

0x0003,

0xfa6d,	// (0x0001a80e) list_double_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x0001a80e) list_double_graphic_pane_vc_g

0xb581,	// (0x00016322) list_double_graphic_pane_vc_t1_ParamLimits

0xb581,	// (0x00016322) list_double_graphic_pane_vc_t1

0xb5ab,	// (0x0001634c) list_double_graphic_pane_vc_t2_ParamLimits

0xb5ab,	// (0x0001634c) list_double_graphic_pane_vc_t2

0x0001,

0xfa76,	// (0x0001a817) list_double_graphic_pane_vc_t_ParamLimits

0xfa76,	// (0x0001a817) list_double_graphic_pane_vc_t

0x483d,	// (0x0000f5de) aid_size_cell_fastswap

0x4845,	// (0x0000f5e6) aid_size_cell_touch_ParamLimits

0x4845,	// (0x0000f5e6) aid_size_cell_touch

0x4aaa,	// (0x0000f84b) popup_fast_swap_wide_window_ParamLimits

0x4aaa,	// (0x0000f84b) popup_fast_swap_wide_window

0x4bbe,	// (0x0000f95f) touch_pane_ParamLimits

0x4bbe,	// (0x0000f95f) touch_pane

0x7b83,	// (0x00012924) button_value_adjust_pane_cp2

0x7b8b,	// (0x0001292c) button_value_adjust_pane_cp4

0x7bad,	// (0x0001294e) form_field_data_pane_cp2

0x7bce,	// (0x0001296f) form_field_data_wide_pane_cp2

0x824c,	// (0x00012fed) bg_scroll_pane_ParamLimits

0x4e4c,	// (0x0000fbed) scroll_handle_pane_ParamLimits

0x4e60,	// (0x0000fc01) scroll_sc2_down_pane_ParamLimits

0x4e60,	// (0x0000fc01) scroll_sc2_down_pane

0x827d,	// (0x0001301e) scroll_sc2_up_pane_ParamLimits

0x827d,	// (0x0001301e) scroll_sc2_up_pane

0xba53,	// (0x000167f4) grid_wheel_folder_pane_g1_ParamLimits

0xba53,	// (0x000167f4) grid_wheel_folder_pane_g1

0x5025,	// (0x0000fdc6) clock_nsta_pane_cp2_ParamLimits

0x5025,	// (0x0000fdc6) clock_nsta_pane_cp2

0x8b0c,	// (0x000138ad) listscroll_midp_pane_ParamLimits

0x8b18,	// (0x000138b9) midp_canvas_pane

0x8e00,	// (0x00013ba1) nsta_clock_indic_pane

0x8e3c,	// (0x00013bdd) listscroll_form_pane_vc

0x8e44,	// (0x00013be5) listscroll_set_pane_vc_ParamLimits

0x8e44,	// (0x00013be5) listscroll_set_pane_vc

0x8f45,	// (0x00013ce6) clock_nsta_pane

0x8fba,	// (0x00013d5b) indicator_nsta_pane

0x929a,	// (0x0001403b) bg_popup_sub_pane_cp2_ParamLimits

0x92ae,	// (0x0001404f) find_pane_cp2_ParamLimits

0x92ae,	// (0x0001404f) find_pane_cp2

0x92c4,	// (0x00014065) grid_toobar_pane_ParamLimits

0x9480,	// (0x00014221) list_form_gen_pane_vc_ParamLimits

0x9480,	// (0x00014221) list_form_gen_pane_vc

0x9496,	// (0x00014237) scroll_pane_cp8_vc_ParamLimits

0x9496,	// (0x00014237) scroll_pane_cp8_vc

0x9512,	// (0x000142b3) data_form_wide_pane_vc_ParamLimits

0x9512,	// (0x000142b3) data_form_wide_pane_vc

0x951e,	// (0x000142bf) form_field_data_wide_pane_vc_g1

0x9526,	// (0x000142c7) form_field_data_wide_pane_vc_t1_ParamLimits

0x9526,	// (0x000142c7) form_field_data_wide_pane_vc_t1

0x7c69,	// (0x00012a0a) input_focus_pane_cp6_vc_ParamLimits

0x7c69,	// (0x00012a0a) input_focus_pane_cp6_vc

0x9889,	// (0x0001462a) list_midp_pane_ParamLimits

0x9895,	// (0x00014636) scroll_pane_cp16_ParamLimits

0x9895,	// (0x00014636) scroll_pane_cp16

0x98f7,	// (0x00014698) button_value_adjust_pane_ParamLimits

0x98f7,	// (0x00014698) button_value_adjust_pane

0xa891,	// (0x00015632) button_value_adjust_pane_cp6_ParamLimits

0xa891,	// (0x00015632) button_value_adjust_pane_cp6

0xa9bb,	// (0x0001575c) settings_code_pane_cp_ParamLimits

0xa9bb,	// (0x0001575c) settings_code_pane_cp

0x6d55,	// (0x00011af6) cell_touch_pane_g1

0x6d55,	// (0x00011af6) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001a49f) cell_touch_pane_g

0xb04f,	// (0x00015df0) cell_touch_pane_cp_ParamLimits

0xb04f,	// (0x00015df0) cell_touch_pane_cp

0xb05f,	// (0x00015e00) cell_touch_pane_ParamLimits

0xb05f,	// (0x00015e00) cell_touch_pane

0x6d55,	// (0x00011af6) scroll_sc2_down_pane_g1

0x6d55,	// (0x00011af6) scroll_sc2_up_pane_g1

0x6d5f,	// (0x00011b00) bg_set_opt_pane_cp4_vc

0xb0c3,	// (0x00015e64) list_set_graphic_pane_vc_g1_ParamLimits

0xb0c3,	// (0x00015e64) list_set_graphic_pane_vc_g1

0xb0cf,	// (0x00015e70) list_set_graphic_pane_vc_g2_ParamLimits

0xb0cf,	// (0x00015e70) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0001a79b) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0001a79b) list_set_graphic_pane_vc_g

0xb0db,	// (0x00015e7c) text_primary_small_cp13_vc_ParamLimits

0xb0db,	// (0x00015e7c) text_primary_small_cp13_vc

0xb0f3,	// (0x00015e94) list_set_graphic_pane_vc_ParamLimits

0xb0f3,	// (0x00015e94) list_set_graphic_pane_vc

0x6d5f,	// (0x00011b00) input_focus_pane_cp2_vc

0x6d55,	// (0x00011af6) setting_code_pane_vc_g1

0x6e8a,	// (0x00011c2b) setting_code_pane_vc_t1

0xb105,	// (0x00015ea6) set_text_pane_vc_t1_ParamLimits

0xb105,	// (0x00015ea6) set_text_pane_vc_t1

0x6d5f,	// (0x00011b00) input_focus_pane_cp1_vc

0xb121,	// (0x00015ec2) list_set_text_pane_vc

0x6d55,	// (0x00011af6) setting_text_pane_vc_g1

0x6d5f,	// (0x00011b00) bg_set_opt_pane_cp2_vc

0x6e81,	// (0x00011c22) setting_slider_graphic_pane_vc_g1

0xb12b,	// (0x00015ecc) setting_slider_graphic_pane_vc_t1

0xb13b,	// (0x00015edc) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0001a7a0) setting_slider_graphic_pane_vc_t

0xb14b,	// (0x00015eec) slider_set_pane_cp_vc

0xb153,	// (0x00015ef4) slider_set_pane_vc_g1

0xb15c,	// (0x00015efd) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0001a7a5) slider_set_pane_vc_g

0x7d8c,	// (0x00012b2d) set_opt_bg_pane_g1_copy1

0x7d94,	// (0x00012b35) set_opt_bg_pane_g2_copy1

0xb188,	// (0x00015f29) set_opt_bg_pane_g3_copy1

0x7da4,	// (0x00012b45) set_opt_bg_pane_g4_copy1

0x7dac,	// (0x00012b4d) set_opt_bg_pane_g5_copy1

0x7db4,	// (0x00012b55) set_opt_bg_pane_g6_copy1

0xb192,	// (0x00015f33) set_opt_bg_pane_g7_copy1

0xb19a,	// (0x00015f3b) set_opt_bg_pane_g8_copy1

0xb1a4,	// (0x00015f45) set_opt_bg_pane_g9_copy1

0x6d5f,	// (0x00011b00) bg_set_opt_pane_cp_vc

0xb1ae,	// (0x00015f4f) setting_slider_pane_vc_t1

0xb1bd,	// (0x00015f5e) setting_slider_pane_vc_t2

0xb1cd,	// (0x00015f6e) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0001a7b4) setting_slider_pane_vc_t

0xb1dd,	// (0x00015f7e) slider_set_pane_vc

0x5a23,	// (0x000107c4) volume_set_pane_vc_g1

0x5a2c,	// (0x000107cd) volume_set_pane_vc_g2

0x5a35,	// (0x000107d6) volume_set_pane_vc_g3

0x5a3e,	// (0x000107df) volume_set_pane_vc_g4

0x5a47,	// (0x000107e8) volume_set_pane_vc_g5

0x5a50,	// (0x000107f1) volume_set_pane_vc_g6

0x5a59,	// (0x000107fa) volume_set_pane_vc_g7

0x5a62,	// (0x00010803) volume_set_pane_vc_g8

0x5a6b,	// (0x0001080c) volume_set_pane_vc_g9

0x5a74,	// (0x00010815) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0001a652) volume_set_pane_vc_g

0xb1e5,	// (0x00015f86) volume_set_pane_vc

0xb1ed,	// (0x00015f8e) button_value_adjust_pane_cp1_vc

0xb1f7,	// (0x00015f98) list_highlight_pane_cp2_vc

0xb200,	// (0x00015fa1) list_set_pane_vc_ParamLimits

0xb200,	// (0x00015fa1) list_set_pane_vc

0xb25e,	// (0x00015fff) main_pane_set_vc_t1_ParamLimits

0xb25e,	// (0x00015fff) main_pane_set_vc_t1

0xb273,	// (0x00016014) main_pane_set_vc_t2_ParamLimits

0xb273,	// (0x00016014) main_pane_set_vc_t2

0xb285,	// (0x00016026) main_pane_set_vc_t3_ParamLimits

0xb285,	// (0x00016026) main_pane_set_vc_t3

0xb299,	// (0x0001603a) main_pane_set_vc_t4_ParamLimits

0xb299,	// (0x0001603a) main_pane_set_vc_t4

0x0003,

0xfa1a,	// (0x0001a7bb) main_pane_set_vc_t_ParamLimits

0xfa1a,	// (0x0001a7bb) main_pane_set_vc_t

0xb2ad,	// (0x0001604e) setting_code_pane_vc_ParamLimits

0xb2ad,	// (0x0001604e) setting_code_pane_vc

0xb2be,	// (0x0001605f) setting_slider_graphic_pane_vc

0xb2be,	// (0x0001605f) setting_slider_pane_vc

0xb2be,	// (0x0001605f) setting_text_pane_vc

0xb2be,	// (0x0001605f) setting_volume_pane_vc

0xb2c8,	// (0x00016069) scroll_pane_cp121_vc

0x7b71,	// (0x00012912) set_content_pane_vc

0xb5d5,	// (0x00016376) button_value_adjust_pane_g1

0xb5de,	// (0x0001637f) button_value_adjust_pane_g2

0x0001,

0xfa7b,	// (0x0001a81c) button_value_adjust_pane_g

0xb5e7,	// (0x00016388) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb5e7,	// (0x00016388) form_field_slider_wide_pane_vc_t1

0xb5fb,	// (0x0001639c) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb5fb,	// (0x0001639c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa80,	// (0x0001a821) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x0001a821) form_field_slider_wide_pane_vc_t

0x70d4,	// (0x00011e75) input_focus_pane_cp10_vc_ParamLimits

0x70d4,	// (0x00011e75) input_focus_pane_cp10_vc

0xb629,	// (0x000163ca) slider_cont_pane_cp1_vc_ParamLimits

0xb629,	// (0x000163ca) slider_cont_pane_cp1_vc

0xb63b,	// (0x000163dc) slider_form_pane_g1_cp2

0xb15c,	// (0x00015efd) slider_form_pane_g2_cp2

0xb668,	// (0x00016409) form_field_slider_pane_vc_t3

0xb676,	// (0x00016417) form_field_slider_pane_vc_t4

0xb684,	// (0x00016425) slider_form_pane_vc_ParamLimits

0xb684,	// (0x00016425) slider_form_pane_vc

0xb691,	// (0x00016432) form_field_slider_pane_vc_t1_ParamLimits

0xb691,	// (0x00016432) form_field_slider_pane_vc_t1

0xb5fb,	// (0x0001639c) form_field_slider_pane_vc_t2_ParamLimits

0xb5fb,	// (0x0001639c) form_field_slider_pane_vc_t2

0x0001,

0xfa92,	// (0x0001a833) form_field_slider_pane_vc_t_ParamLimits

0xfa92,	// (0x0001a833) form_field_slider_pane_vc_t

0x70d4,	// (0x00011e75) input_focus_pane_cp9_vc_ParamLimits

0x70d4,	// (0x00011e75) input_focus_pane_cp9_vc

0xb6ad,	// (0x0001644e) slider_cont_pane_vc_ParamLimits

0xb6ad,	// (0x0001644e) slider_cont_pane_vc

0xb6c1,	// (0x00016462) list_form_graphic_pane_cp_vc_ParamLimits

0xb6c1,	// (0x00016462) list_form_graphic_pane_cp_vc

0x951e,	// (0x000142bf) form_field_popup_wide_pane_vc_g1

0xb6d6,	// (0x00016477) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb6d6,	// (0x00016477) form_field_popup_wide_pane_vc_t1

0x7c69,	// (0x00012a0a) input_focus_pane_cp8_vc_ParamLimits

0x7c69,	// (0x00012a0a) input_focus_pane_cp8_vc

0xb71b,	// (0x000164bc) list_form_wide_pane_vc_ParamLimits

0xb71b,	// (0x000164bc) list_form_wide_pane_vc

0xb727,	// (0x000164c8) list_form_graphic_pane_vc_g1

0xb72f,	// (0x000164d0) list_form_graphic_pane_vc_t1_ParamLimits

0xb72f,	// (0x000164d0) list_form_graphic_pane_vc_t1

0x6e3f,	// (0x00011be0) list_highlight_pane_cp5_vc_ParamLimits

0x6e3f,	// (0x00011be0) list_highlight_pane_cp5_vc

0xb74b,	// (0x000164ec) list_form_graphic_pane_vc_ParamLimits

0xb74b,	// (0x000164ec) list_form_graphic_pane_vc

0x951e,	// (0x000142bf) form_field_popup_pane_vc_g1

0xb761,	// (0x00016502) form_field_popup_pane_vc_t1_ParamLimits

0xb761,	// (0x00016502) form_field_popup_pane_vc_t1

0x7c69,	// (0x00012a0a) input_focus_pane_cp7_vc_ParamLimits

0x7c69,	// (0x00012a0a) input_focus_pane_cp7_vc

0xb778,	// (0x00016519) list_form_pane_vc_ParamLimits

0xb778,	// (0x00016519) list_form_pane_vc

0xb784,	// (0x00016525) data_form_pane_vc_t1_ParamLimits

0xb784,	// (0x00016525) data_form_pane_vc_t1

0x7d8c,	// (0x00012b2d) input_focus_pane_vc_g1

0x7d94,	// (0x00012b35) input_focus_pane_vc_g2

0x7d9c,	// (0x00012b3d) input_focus_pane_vc_g3

0x7da4,	// (0x00012b45) input_focus_pane_vc_g4

0x7dac,	// (0x00012b4d) input_focus_pane_vc_g5

0x7db4,	// (0x00012b55) input_focus_pane_vc_g6

0x7dbc,	// (0x00012b5d) input_focus_pane_vc_g7

0x7dc4,	// (0x00012b65) input_focus_pane_vc_g8

0x7dcc,	// (0x00012b6d) input_focus_pane_vc_g9

0x6d55,	// (0x00011af6) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001a428) input_focus_pane_vc_g

0x9512,	// (0x000142b3) data_form_pane_vc_ParamLimits

0x9512,	// (0x000142b3) data_form_pane_vc

0x951e,	// (0x000142bf) form_field_data_pane_vc_g1

0xb79f,	// (0x00016540) form_field_data_pane_vc_t1_ParamLimits

0xb79f,	// (0x00016540) form_field_data_pane_vc_t1

0x7c69,	// (0x00012a0a) input_focus_pane_vc_ParamLimits

0x7c69,	// (0x00012a0a) input_focus_pane_vc

0xb7b9,	// (0x0001655a) button_value_adjust_pane_cp3_vc

0xb7c1,	// (0x00016562) button_value_adjust_pane_cp5_vc

0xb7c9,	// (0x0001656a) form_field_data_pane_vc_ParamLimits

0xb7c9,	// (0x0001656a) form_field_data_pane_vc

0xb7e0,	// (0x00016581) form_field_data_pane_vc_cp2

0xb7e8,	// (0x00016589) form_field_data_wide_pane_vc_ParamLimits

0xb7e8,	// (0x00016589) form_field_data_wide_pane_vc

0xb7fe,	// (0x0001659f) form_field_data_wide_pane_vc_cp2

0xb806,	// (0x000165a7) form_field_popup_pane_vc_ParamLimits

0xb806,	// (0x000165a7) form_field_popup_pane_vc

0xb81d,	// (0x000165be) form_field_popup_wide_pane_vc_ParamLimits

0xb81d,	// (0x000165be) form_field_popup_wide_pane_vc

0xb833,	// (0x000165d4) form_field_slider_pane_vc_ParamLimits

0xb833,	// (0x000165d4) form_field_slider_pane_vc

0xb846,	// (0x000165e7) form_field_slider_wide_pane_vc_ParamLimits

0xb846,	// (0x000165e7) form_field_slider_wide_pane_vc

0xb859,	// (0x000165fa) grid_touch_1_pane_ParamLimits

0xb859,	// (0x000165fa) grid_touch_1_pane

0xb865,	// (0x00016606) grid_touch_2_pane_ParamLimits

0xb865,	// (0x00016606) grid_touch_2_pane

0x8dcb,	// (0x00013b6c) touch_pane_g1_ParamLimits

0x8dcb,	// (0x00013b6c) touch_pane_g1

0xb87d,	// (0x0001661e) cell_app_pane_cp_wide_ParamLimits

0xb87d,	// (0x0001661e) cell_app_pane_cp_wide

0xb88e,	// (0x0001662f) grid_popup_fast_wide_pane_ParamLimits

0xb88e,	// (0x0001662f) grid_popup_fast_wide_pane

0xb8a2,	// (0x00016643) scroll_pane_cp19_ParamLimits

0xb8a2,	// (0x00016643) scroll_pane_cp19

0x6d5f,	// (0x00011b00) bg_popup_window_pane_cp20

0xb8b6,	// (0x00016657) listscroll_popup_fast_wide_pane

0x6e3f,	// (0x00011be0) grid_indicator_nsta_pane

0xb8be,	// (0x0001665f) clock_nsta_pane_g1

0xb8c7,	// (0x00016668) clock_nsta_pane_t1

0xb8e3,	// (0x00016684) cell_indicator_nsta_pane_ParamLimits

0xb8e3,	// (0x00016684) cell_indicator_nsta_pane

0xb914,	// (0x000166b5) cell_indicator_nsta_pane_g1

0xb922,	// (0x000166c3) cell_indicator_nsta_pane_g2

0x0001,

0xfaa3,	// (0x0001a844) cell_indicator_nsta_pane_g

0xb92f,	// (0x000166d0) clock_nsta_pane_cp

0xb938,	// (0x000166d9) indicator_nsta_pane_cp

0xb940,	// (0x000166e1) nsta_clock_indic_pane_g1

0x6f22,	// (0x00011cc3) grid_indicator_pane

0x8372,	// (0x00013113) scroll_pane_cp29

0x4f74,	// (0x0000fd15) indicator_nsta_pane_cp2_ParamLimits

0x4f74,	// (0x0000fd15) indicator_nsta_pane_cp2

0x6e3f,	// (0x00011be0) main_apps_wheel_pane

0x976a,	// (0x0001450b) form_midp_field_text_pane_ParamLimits

0x98b5,	// (0x00014656) scroll_bar_cp050_ParamLimits

0xb990,	// (0x00016731) cell_indicator_pane_ParamLimits

0xb990,	// (0x00016731) cell_indicator_pane

0xb9a7,	// (0x00016748) cell_indicator_pane_g1

0xb9b1,	// (0x00016752) grid_wheel_folder_pane_ParamLimits

0xb9b1,	// (0x00016752) grid_wheel_folder_pane

0xb9c7,	// (0x00016768) list_wheel_apps_pane_ParamLimits

0xb9c7,	// (0x00016768) list_wheel_apps_pane

0xb9d8,	// (0x00016779) main_apps_wheel_pane_g1_ParamLimits

0xb9d8,	// (0x00016779) main_apps_wheel_pane_g1

0xb9ec,	// (0x0001678d) main_apps_wheel_pane_g2_ParamLimits

0xb9ec,	// (0x0001678d) main_apps_wheel_pane_g2

0x0001,

0xfabf,	// (0x0001a860) main_apps_wheel_pane_g_ParamLimits

0xfabf,	// (0x0001a860) main_apps_wheel_pane_g

0xba04,	// (0x000167a5) main_apps_wheel_pane_t1_ParamLimits

0xba04,	// (0x000167a5) main_apps_wheel_pane_t1

0xba27,	// (0x000167c8) list_wheel_apps_pane_g1

0xba2f,	// (0x000167d0) list_wheel_apps_pane_g2

0xba37,	// (0x000167d8) list_wheel_apps_pane_g3

0xba3f,	// (0x000167e0) list_wheel_apps_pane_g4

0xba49,	// (0x000167ea) list_wheel_apps_pane_g5

0x0004,

0xfac4,	// (0x0001a865) list_wheel_apps_pane_g

0x8984,	// (0x00013725) navi_icon_text_pane

0x8e74,	// (0x00013c15) aid_fill_nsta

0xba6c,	// (0x0001680d) navi_icon_text_pane_g1

0xba78,	// (0x00016819) navi_icon_text_pane_t1

0x8817,	// (0x000135b8) list_set_graphic_pane_t1_ParamLimits

0x8817,	// (0x000135b8) list_set_graphic_pane_t1

0xa024,	// (0x00014dc5) popup_midp_note_alarm_window_t6_ParamLimits

0xa024,	// (0x00014dc5) popup_midp_note_alarm_window_t6

0xa036,	// (0x00014dd7) popup_midp_note_alarm_window_t7_ParamLimits

0xa036,	// (0x00014dd7) popup_midp_note_alarm_window_t7

0xa048,	// (0x00014de9) popup_midp_note_alarm_window_t8_ParamLimits

0xa048,	// (0x00014de9) popup_midp_note_alarm_window_t8

0xa05a,	// (0x00014dfb) popup_midp_note_alarm_window_t9_ParamLimits

0xa05a,	// (0x00014dfb) popup_midp_note_alarm_window_t9

0xa06c,	// (0x00014e0d) popup_midp_note_alarm_window_t10_ParamLimits

0xa06c,	// (0x00014e0d) popup_midp_note_alarm_window_t10

0xa07e,	// (0x00014e1f) popup_midp_note_alarm_window_t11_ParamLimits

0xa07e,	// (0x00014e1f) popup_midp_note_alarm_window_t11

0xa090,	// (0x00014e31) scroll_pane_cp17_ParamLimits

0xa090,	// (0x00014e31) scroll_pane_cp17

0x5a23,	// (0x000107c4) volume_small_pane_cp_g1

0x5d18,	// (0x00010ab9) volume_small_pane_cp_g2

0x5d21,	// (0x00010ac2) volume_small_pane_cp_g3

0x5d2a,	// (0x00010acb) volume_small_pane_cp_g4

0x5d33,	// (0x00010ad4) volume_small_pane_cp_g5

0x5d3c,	// (0x00010add) volume_small_pane_cp_g6

0x5d45,	// (0x00010ae6) volume_small_pane_cp_g7

0x5d4e,	// (0x00010aef) volume_small_pane_cp_g8

0x5d57,	// (0x00010af8) volume_small_pane_cp_g9

0x5d60,	// (0x00010b01) volume_small_pane_cp_g10

0x8be1,	// (0x00013982) midp_ticker_pane_g1_ParamLimits

0x8bed,	// (0x0001398e) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001a4f4) midp_ticker_pane_g_ParamLimits

0x8bf9,	// (0x0001399a) midp_ticker_pane_t1_ParamLimits

0x8e8a,	// (0x00013c2b) aid_fill_nsta_2

0x98a1,	// (0x00014642) list_form2_midp_pane

0xaa39,	// (0x000157da) midp_editing_number_pane_ParamLimits

0xaa48,	// (0x000157e9) midp_ticker_pane_ParamLimits

0xba8a,	// (0x0001682b) form2_midp_field_pane

0xbaae,	// (0x0001684f) scroll_pane_cp51

0xbace,	// (0x0001686f) form2_midp_button_pane_ParamLimits

0xbace,	// (0x0001686f) form2_midp_button_pane

0xbae0,	// (0x00016881) form2_midp_content_pane_ParamLimits

0xbae0,	// (0x00016881) form2_midp_content_pane

0xbafa,	// (0x0001689b) form2_midp_field_choice_group_pane

0xbb02,	// (0x000168a3) form2_midp_field_pane_g1

0xbb0a,	// (0x000168ab) form2_midp_field_pane_g2

0xbb12,	// (0x000168b3) form2_midp_field_pane_g3

0xbb1a,	// (0x000168bb) form2_midp_field_pane_g4

0x0003,

0xfae9,	// (0x0001a88a) form2_midp_field_pane_g

0xbb22,	// (0x000168c3) form2_midp_gauge_slider_pane

0xbb2a,	// (0x000168cb) form2_midp_gauge_wait_pane

0xbb32,	// (0x000168d3) form2_midp_image_pane_ParamLimits

0xbb32,	// (0x000168d3) form2_midp_image_pane

0xbb4d,	// (0x000168ee) form2_midp_label_pane_ParamLimits

0xbb4d,	// (0x000168ee) form2_midp_label_pane

0xbb66,	// (0x00016907) form2_midp_label_pane_cp_ParamLimits

0xbb66,	// (0x00016907) form2_midp_label_pane_cp

0xbb87,	// (0x00016928) form2_midp_string_pane_ParamLimits

0xbb87,	// (0x00016928) form2_midp_string_pane

0xbb99,	// (0x0001693a) form2_midp_text_pane_ParamLimits

0xbb99,	// (0x0001693a) form2_midp_text_pane

0xbbb6,	// (0x00016957) form2_midp_time_pane

0xbbc6,	// (0x00016967) input_focus_pane_cp51_ParamLimits

0xbbc6,	// (0x00016967) input_focus_pane_cp51

0xbbde,	// (0x0001697f) form2_midp_label_pane_t1_ParamLimits

0xbbde,	// (0x0001697f) form2_midp_label_pane_t1

0xbc1f,	// (0x000169c0) form2_mdip_text_pane_t1_ParamLimits

0xbc1f,	// (0x000169c0) form2_mdip_text_pane_t1

0xbc3e,	// (0x000169df) form2_midp_time_pane_t1

0xbc59,	// (0x000169fa) form2_midp_gauge_slider_pane_t1

0xbc6b,	// (0x00016a0c) form2_midp_gauge_slider_pane_t2

0xbc7d,	// (0x00016a1e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf2,	// (0x0001a893) form2_midp_gauge_slider_pane_t

0xbc8f,	// (0x00016a30) form2_midp_slider_pane

0xbc9b,	// (0x00016a3c) form2_midp_gauge_wait_pane_t1

0xbca9,	// (0x00016a4a) form2_midp_wait_pane_ParamLimits

0xbca9,	// (0x00016a4a) form2_midp_wait_pane

0xbcd4,	// (0x00016a75) list_single_2graphic_pane_cp4_ParamLimits

0xbcd4,	// (0x00016a75) list_single_2graphic_pane_cp4

0x9586,	// (0x00014327) list_single_midp_graphic_pane_cp_ParamLimits

0x9586,	// (0x00014327) list_single_midp_graphic_pane_cp

0x6d5f,	// (0x00011b00) list_highlight_pane_cp20

0xbcf8,	// (0x00016a99) list_single_2graphic_pane_g1_cp4

0xbd00,	// (0x00016aa1) list_single_2graphic_pane_g2_cp4

0xbd08,	// (0x00016aa9) list_single_2graphic_pane_t1_cp4

0x6e3f,	// (0x00011be0) list_highlight_pane_cp21

0xbd17,	// (0x00016ab8) list_single_midp_graphic_pane_g4_cp

0xbd26,	// (0x00016ac7) list_single_midp_graphic_pane_t1_cp

0xbd3b,	// (0x00016adc) form2_mdip_string_pane_t1_ParamLimits

0xbd3b,	// (0x00016adc) form2_mdip_string_pane_t1

0x6d5f,	// (0x00011b00) bg_wml_button_pane_cp2

0x6d55,	// (0x00011af6) form2_midp_image_pane_g1

0x7927,	// (0x000126c8) list_double_large_graphic_pane_g5_ParamLimits

0x7927,	// (0x000126c8) list_double_large_graphic_pane_g5

0x8b0c,	// (0x000138ad) midp_form_pane_ParamLimits

0x6e3f,	// (0x00011be0) main_apps_wheel_pane_ParamLimits

0x5663,	// (0x00010404) popup_preview_window_ParamLimits

0x5663,	// (0x00010404) popup_preview_window

0x581e,	// (0x000105bf) popup_touch_info_window_ParamLimits

0x581e,	// (0x000105bf) popup_touch_info_window

0x583c,	// (0x000105dd) popup_touch_menu_window_ParamLimits

0x583c,	// (0x000105dd) popup_touch_menu_window

0x6d4b,	// (0x00011aec) bg_popup_sub_pane_cp6

0xbe34,	// (0x00016bd5) list_touch_menu_pane

0xbe3c,	// (0x00016bdd) list_single_touch_menu_pane_ParamLimits

0xbe3c,	// (0x00016bdd) list_single_touch_menu_pane

0xbe52,	// (0x00016bf3) list_single_touch_menu_pane_t1

0x6e3f,	// (0x00011be0) bg_popup_sub_pane_cp7_ParamLimits

0x6e3f,	// (0x00011be0) bg_popup_sub_pane_cp7

0xbe60,	// (0x00016c01) heading_sub_pane

0xbe68,	// (0x00016c09) list_touch_info_pane_ParamLimits

0xbe68,	// (0x00016c09) list_touch_info_pane

0xbe77,	// (0x00016c18) list_single_touch_info_pane_ParamLimits

0xbe77,	// (0x00016c18) list_single_touch_info_pane

0xbe89,	// (0x00016c2a) list_single_touch_info_pane_t1

0xbe97,	// (0x00016c38) list_single_touch_info_pane_t2

0x0001,

0xfb00,	// (0x0001a8a1) list_single_touch_info_pane_t

0x8b04,	// (0x000138a5) bg_popup_heading_pane_cp

0xbea5,	// (0x00016c46) heading_sub_pane_t1

0x94ac,	// (0x0001424d) bg_popup_preview_window_pane_cp_ParamLimits

0x94ac,	// (0x0001424d) bg_popup_preview_window_pane_cp

0xbe60,	// (0x00016c01) heading_preview_pane

0xbe68,	// (0x00016c09) list_preview_pane_ParamLimits

0xbe68,	// (0x00016c09) list_preview_pane

0xbeb3,	// (0x00016c54) popup_preview_window_g1

0xbe77,	// (0x00016c18) list_single_preview_pane_ParamLimits

0xbe77,	// (0x00016c18) list_single_preview_pane

0xbebb,	// (0x00016c5c) list_single_preview_pane_g1

0xbec3,	// (0x00016c64) list_single_preview_pane_t1

0xbe89,	// (0x00016c2a) list_single_preview_pane_t2

0x0001,

0xfb05,	// (0x0001a8a6) list_single_preview_pane_t

0xbed1,	// (0x00016c72) bg_popup_heading_pane_cp2_ParamLimits

0xbed1,	// (0x00016c72) bg_popup_heading_pane_cp2

0xbee7,	// (0x00016c88) heading_preview_pane_g1

0xbeef,	// (0x00016c90) heading_preview_pane_t1_ParamLimits

0xbeef,	// (0x00016c90) heading_preview_pane_t1

0x6f45,	// (0x00011ce6) soft_indicator_pane_t1_ParamLimits

0x7661,	// (0x00012402) scroll_pane_ParamLimits

0x826b,	// (0x0001300c) scroll_sc2_left_pane

0x8274,	// (0x00013015) scroll_sc2_right_pane

0x8293,	// (0x00013034) scroll_bg_pane_g1_ParamLimits

0x82a8,	// (0x00013049) scroll_bg_pane_g2_ParamLimits

0x82c0,	// (0x00013061) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001a47f) scroll_bg_pane_g_ParamLimits

0x8293,	// (0x00013034) scroll_handle_pane_g1_ParamLimits

0x82e2,	// (0x00013083) scroll_handle_pane_g2_ParamLimits

0x82c0,	// (0x00013061) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001a486) scroll_handle_pane_g_ParamLimits

0x52e4,	// (0x00010085) popup_choice_list_window_ParamLimits

0x52e4,	// (0x00010085) popup_choice_list_window

0x92a6,	// (0x00014047) choice_list_pane

0x9356,	// (0x000140f7) cell_toolbar_pane_t1

0x937e,	// (0x0001411f) toolbar_button_pane_ParamLimits

0xa54a,	// (0x000152eb) ai_gene_pane_1_t2_ParamLimits

0xa54a,	// (0x000152eb) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0001a6ae) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0001a6ae) ai_gene_pane_1_t

0xbf0c,	// (0x00016cad) scroll_sc2_left_pane_g1

0xbf0c,	// (0x00016cad) scroll_sc2_right_pane_g1

0x8e30,	// (0x00013bd1) bg_popup_sub_pane_cp10

0xbf16,	// (0x00016cb7) list_choice_list_pane

0xbf2f,	// (0x00016cd0) list_single_choice_list_pane_ParamLimits

0xbf2f,	// (0x00016cd0) list_single_choice_list_pane

0xbf42,	// (0x00016ce3) list_single_choice_list_pane_g1

0x7f71,	// (0x00012d12) list_single_choice_list_pane_t1_ParamLimits

0x7f71,	// (0x00012d12) list_single_choice_list_pane_t1

0xbf4a,	// (0x00016ceb) choice_list_pane_g1

0xbf52,	// (0x00016cf3) choice_list_pane_t1

0x6d4b,	// (0x00011aec) input_focus_pane_cp11

0x8148,	// (0x00012ee9) title_pane_stacon_g2_ParamLimits

0x8148,	// (0x00012ee9) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001a465) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001a465) title_pane_stacon_g

0x8b04,	// (0x000138a5) cursor_press_pane

0x5390,	// (0x00010131) popup_fep_hwr_window_ParamLimits

0x5390,	// (0x00010131) popup_fep_hwr_window

0x540a,	// (0x000101ab) popup_fep_vkb_window_ParamLimits

0x540a,	// (0x000101ab) popup_fep_vkb_window

0xbf60,	// (0x00016d01) cursor_press_pane_g1

0x0002,

0xfb2e,	// (0x0001a8cf) fep_vkb_side_pane_g_ParamLimits

0x5da2,	// (0x00010b43) fep_hwr_candidate_pane_ParamLimits

0x5da2,	// (0x00010b43) fep_hwr_candidate_pane

0x5dcc,	// (0x00010b6d) fep_hwr_side_pane_ParamLimits

0x5dcc,	// (0x00010b6d) fep_hwr_side_pane

0x5dec,	// (0x00010b8d) fep_hwr_top_pane_ParamLimits

0x5dec,	// (0x00010b8d) fep_hwr_top_pane

0x5e04,	// (0x00010ba5) fep_hwr_write_pane_ParamLimits

0x5e04,	// (0x00010ba5) fep_hwr_write_pane

0xfb2e,	// (0x0001a8cf) fep_vkb_side_pane_g

0xbf68,	// (0x00016d09) fep_hwr_top_pane_g1

0xbf7a,	// (0x00016d1b) fep_hwr_top_pane_g2

0x5e3e,	// (0x00010bdf) fep_hwr_top_pane_g3

0x0002,

0xfb0a,	// (0x0001a8ab) fep_hwr_top_pane_g

0x5e53,	// (0x00010bf4) fep_hwr_top_text_pane

0x8462,	// (0x00013203) fep_hwr_top_text_pane_g1

0xbfb0,	// (0x00016d51) fep_hwr_top_text_pane_t1

0x5f49,	// (0x00010cea) fep_hwr_candidate_pane_g1

0xc203,	// (0x00016fa4) fep_vkb_keypad_pane_g3_ParamLimits

0xc203,	// (0x00016fa4) fep_vkb_keypad_pane_g3

0xc22b,	// (0x00016fcc) fep_vkb_keypad_pane_g4_ParamLimits

0xc22b,	// (0x00016fcc) fep_vkb_keypad_pane_g4

0xc29a,	// (0x0001703b) fep_vkb_bottom_pane_g2_ParamLimits

0xc29a,	// (0x0001703b) fep_vkb_bottom_pane_g2

0x0001,

0xfb35,	// (0x0001a8d6) fep_vkb_bottom_pane_g_ParamLimits

0xfb35,	// (0x0001a8d6) fep_vkb_bottom_pane_g

0xbf0c,	// (0x00016cad) cell_vkb_side_pane_g2

0x0001,

0xfb3f,	// (0x0001a8e0) cell_vkb_side_pane_g

0xc325,	// (0x000170c6) cell_vkb_side_pane_t1

0xc333,	// (0x000170d4) cell_vkb_side_pane_t1_copy1

0xbf0c,	// (0x00016cad) bg_fep_vkb_candidate_pane_g2

0xc45f,	// (0x00017200) cell_vkb_candidate_pane_ParamLimits

0xbfbe,	// (0x00016d5f) aid_size_cell_vkb_ParamLimits

0xbfbe,	// (0x00016d5f) aid_size_cell_vkb

0xc45f,	// (0x00017200) cell_vkb_candidate_pane

0x5f70,	// (0x00010d11) bg_popup_fep_shadow_pane_g1

0xc04c,	// (0x00016ded) fep_vkb_bottom_pane_ParamLimits

0xc04c,	// (0x00016ded) fep_vkb_bottom_pane

0xc082,	// (0x00016e23) fep_vkb_candidate_pane_ParamLimits

0xc082,	// (0x00016e23) fep_vkb_candidate_pane

0xc09e,	// (0x00016e3f) fep_vkb_keypad_pane_ParamLimits

0xc09e,	// (0x00016e3f) fep_vkb_keypad_pane

0xc0e4,	// (0x00016e85) fep_vkb_side_pane_ParamLimits

0xc0e4,	// (0x00016e85) fep_vkb_side_pane

0xc120,	// (0x00016ec1) fep_vkb_top_pane_ParamLimits

0xc120,	// (0x00016ec1) fep_vkb_top_pane

0xc15c,	// (0x00016efd) fep_vkb_top_pane_g1_ParamLimits

0xc15c,	// (0x00016efd) fep_vkb_top_pane_g1

0xc16b,	// (0x00016f0c) fep_vkb_top_pane_g2_ParamLimits

0xc16b,	// (0x00016f0c) fep_vkb_top_pane_g2

0xc17a,	// (0x00016f1b) fep_vkb_top_pane_g3_ParamLimits

0xc17a,	// (0x00016f1b) fep_vkb_top_pane_g3

0x0003,

0xfb25,	// (0x0001a8c6) fep_vkb_top_pane_g_ParamLimits

0xfb25,	// (0x0001a8c6) fep_vkb_top_pane_g

0xc198,	// (0x00016f39) fep_vkb_top_text_pane_ParamLimits

0xc198,	// (0x00016f39) fep_vkb_top_text_pane

0xc1a9,	// (0x00016f4a) fep_vkb_side_pane_g1_ParamLimits

0xc1a9,	// (0x00016f4a) fep_vkb_side_pane_g1

0xc1f2,	// (0x00016f93) grid_vkb_side_pane_ParamLimits

0xc1f2,	// (0x00016f93) grid_vkb_side_pane

0x5f78,	// (0x00010d19) bg_popup_fep_shadow_pane_g2

0x5f81,	// (0x00010d22) bg_popup_fep_shadow_pane_g3

0x5f89,	// (0x00010d2a) bg_popup_fep_shadow_pane_g4

0x5f92,	// (0x00010d33) bg_popup_fep_shadow_pane_g5

0x5f9c,	// (0x00010d3d) bg_popup_fep_shadow_pane_g6

0x5fa4,	// (0x00010d45) bg_popup_fep_shadow_pane_g7

0x7da4,	// (0x00012b45) bg_popup_fep_shadow_pane_g8

0xc249,	// (0x00016fea) grid_vkb_keypad_number_pane_ParamLimits

0xc249,	// (0x00016fea) grid_vkb_keypad_number_pane

0xc259,	// (0x00016ffa) grid_vkb_keypad_pane_ParamLimits

0xc259,	// (0x00016ffa) grid_vkb_keypad_pane

0xc27f,	// (0x00017020) fep_vkb_bottom_pane_g1_ParamLimits

0xc27f,	// (0x00017020) fep_vkb_bottom_pane_g1

0xc2a8,	// (0x00017049) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc2a8,	// (0x00017049) grid_vkb_keypad_bottom_left_pane

0xc2bd,	// (0x0001705e) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc2bd,	// (0x0001705e) grid_vkb_keypad_bottom_right_pane

0xc2d2,	// (0x00017073) fep_vkb_top_text_pane_g1

0xc2ed,	// (0x0001708e) fep_vkb_top_text_pane_t1

0xc302,	// (0x000170a3) cell_vkb_side_pane_ParamLimits

0xc302,	// (0x000170a3) cell_vkb_side_pane

0xbf0c,	// (0x00016cad) cell_vkb_side_pane_g1

0xc341,	// (0x000170e2) cell_vkb_keypad_pane_ParamLimits

0xc341,	// (0x000170e2) cell_vkb_keypad_pane

0xc3b6,	// (0x00017157) cell_vkb_keypad_pane_g1

0x0008,

0xfb52,	// (0x0001a8f3) bg_popup_fep_shadow_pane_g

0x5fb6,	// (0x00010d57) cell_hwr_side_pane_g1

0x5fb6,	// (0x00010d57) cell_hwr_side_pane_g2

0xc3c0,	// (0x00017161) cell_vkb_keypad_pane_t1

0xc3ce,	// (0x0001716f) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc3ce,	// (0x0001716f) cell_vkb_keypad_bottom_left_pane

0xc3eb,	// (0x0001718c) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc3eb,	// (0x0001718c) cell_vkb_keypad_bottom_right_pane

0xbf0c,	// (0x00016cad) cell_vkb_keypad_bottom_left_pane_g1

0xbf0c,	// (0x00016cad) cell_vkb_keypad_bottom_right_pane_g1

0xc424,	// (0x000171c5) cell_vkb_keypad_number_pane_ParamLimits

0xc424,	// (0x000171c5) cell_vkb_keypad_number_pane

0xc443,	// (0x000171e4) cell_vkb_keypad_number_pane_g1

0xc44d,	// (0x000171ee) cell_vkb_keypad_number_pane_g2

0xc456,	// (0x000171f7) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb44,	// (0x0001a8e5) cell_vkb_keypad_number_pane_g

0xc3c0,	// (0x00017161) cell_vkb_keypad_number_pane_t1

0xc47a,	// (0x0001721b) fep_vkb_candidate_pane_g1

0x0001,

0xfb65,	// (0x0001a906) cell_hwr_side_pane_g

0xc493,	// (0x00017234) cell_hwr_side_pane_t1

0x5fc0,	// (0x00010d61) cell_hwr_side_pane_t1_copy1

0x5fce,	// (0x00010d6f) cell_hwr_candidate_pane_g1

0x5ffd,	// (0x00010d9e) cell_hwr_candidate_pane_t1

0xbf0c,	// (0x00016cad) cell_vkb_candidate_pane_g2

0xc4d7,	// (0x00017278) cell_vkb_candidate_pane_t1

0x5d69,	// (0x00010b0a) bg_popup_fep_shadow_pane_ParamLimits

0x5d69,	// (0x00010b0a) bg_popup_fep_shadow_pane

0x5e1e,	// (0x00010bbf) bg_fep_hwr_top_pane_g4

0xbf8c,	// (0x00016d2d) bg_hwr_side_pane_g1_ParamLimits

0xbf8c,	// (0x00016d2d) bg_hwr_side_pane_g1

0x5e8f,	// (0x00010c30) cell_hwr_side_pane_ParamLimits

0x5e8f,	// (0x00010c30) cell_hwr_side_pane

0x5eca,	// (0x00010c6b) fep_hwr_write_pane_g1_ParamLimits

0x5eca,	// (0x00010c6b) fep_hwr_write_pane_g1

0x5ed7,	// (0x00010c78) fep_hwr_write_pane_g2_ParamLimits

0x5ed7,	// (0x00010c78) fep_hwr_write_pane_g2

0x5ee4,	// (0x00010c85) fep_hwr_write_pane_g3_ParamLimits

0x5ee4,	// (0x00010c85) fep_hwr_write_pane_g3

0x5ef2,	// (0x00010c93) fep_hwr_write_pane_g4_ParamLimits

0x5ef2,	// (0x00010c93) fep_hwr_write_pane_g4

0x0005,

0xfb11,	// (0x0001a8b2) fep_hwr_write_pane_g_ParamLimits

0xfb11,	// (0x0001a8b2) fep_hwr_write_pane_g

0x5e1e,	// (0x00010bbf) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5e1e,	// (0x00010bbf) bg_fep_hwr_candidate_pane_g2

0x5f07,	// (0x00010ca8) cell_hwr_candidate_pane_ParamLimits

0x5f07,	// (0x00010ca8) cell_hwr_candidate_pane

0x5f49,	// (0x00010cea) fep_hwr_candidate_pane_g1_ParamLimits

0xbfec,	// (0x00016d8d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbfec,	// (0x00016d8d) bg_popup_fep_shadow_pane_cp2

0xc18a,	// (0x00016f2b) fep_vkb_top_pane_g4_ParamLimits

0xc18a,	// (0x00016f2b) fep_vkb_top_pane_g4

0xc1d0,	// (0x00016f71) fep_vkb_side_pane_g2_ParamLimits

0xc1d0,	// (0x00016f71) fep_vkb_side_pane_g2

0x7a8b,	// (0x0001282c) list_setting_pane_t4_ParamLimits

0x7a8b,	// (0x0001282c) list_setting_pane_t4

0x7b05,	// (0x000128a6) list_setting_number_pane_t5_ParamLimits

0x7b05,	// (0x000128a6) list_setting_number_pane_t5

0x84a9,	// (0x0001324a) list_double_heading_pane_cp2_ParamLimits

0x84a9,	// (0x0001324a) list_double_heading_pane_cp2

0x78b2,	// (0x00012653) list_double_heading_pane_g1_cp2_ParamLimits

0x78b2,	// (0x00012653) list_double_heading_pane_g1_cp2

0x7c8f,	// (0x00012a30) list_double_heading_pane_g2_cp2_ParamLimits

0x7c8f,	// (0x00012a30) list_double_heading_pane_g2_cp2

0xc4e5,	// (0x00017286) list_double_heading_pane_t1_cp2_ParamLimits

0xc4e5,	// (0x00017286) list_double_heading_pane_t1_cp2

0xc4fb,	// (0x0001729c) list_double_heading_pane_t2_cp2_ParamLimits

0xc4fb,	// (0x0001729c) list_double_heading_pane_t2_cp2

0x6d33,	// (0x00011ad4) aid_value_unit2

0x4b04,	// (0x0000f8a5) popup_preview_fixed_window

0x70e2,	// (0x00011e83) bg_popup_preview_window_pane_cp02

0xc50d,	// (0x000172ae) list_preview_fixed_pane

0xc553,	// (0x000172f4) list_empty_pane_fp_ParamLimits

0xc553,	// (0x000172f4) list_empty_pane_fp

0xc553,	// (0x000172f4) list_single_cale_day_pane_fp_ParamLimits

0xc553,	// (0x000172f4) list_single_cale_day_pane_fp

0xc553,	// (0x000172f4) list_single_graphic_heading_pane_fp_ParamLimits

0xc553,	// (0x000172f4) list_single_graphic_heading_pane_fp

0xc553,	// (0x000172f4) list_single_graphic_pane_fp_ParamLimits

0xc553,	// (0x000172f4) list_single_graphic_pane_fp

0xc553,	// (0x000172f4) list_single_heading_pane_fp_ParamLimits

0xc553,	// (0x000172f4) list_single_heading_pane_fp

0xc553,	// (0x000172f4) list_single_pane_fp_ParamLimits

0xc553,	// (0x000172f4) list_single_pane_fp

0xc568,	// (0x00017309) list_single_pane_fp_g1_ParamLimits

0xc568,	// (0x00017309) list_single_pane_fp_g1

0x78b2,	// (0x00012653) list_single_pane_fp_g2_ParamLimits

0x78b2,	// (0x00012653) list_single_pane_fp_g2

0x7c8f,	// (0x00012a30) list_single_pane_fp_g3_ParamLimits

0x7c8f,	// (0x00012a30) list_single_pane_fp_g3

0xc574,	// (0x00017315) list_single_pane_fp_g4_ParamLimits

0xc574,	// (0x00017315) list_single_pane_fp_g4

0x0003,

0xfb78,	// (0x0001a919) list_single_pane_fp_g_ParamLimits

0xfb78,	// (0x0001a919) list_single_pane_fp_g

0xc580,	// (0x00017321) list_single_pane_fp_t1_ParamLimits

0xc580,	// (0x00017321) list_single_pane_fp_t1

0xc597,	// (0x00017338) list_single_graphic_pane_fp_g1_ParamLimits

0xc597,	// (0x00017338) list_single_graphic_pane_fp_g1

0xc568,	// (0x00017309) list_single_graphic_pane_fp_g2_ParamLimits

0xc568,	// (0x00017309) list_single_graphic_pane_fp_g2

0x78b2,	// (0x00012653) list_single_graphic_pane_fp_g3_ParamLimits

0x78b2,	// (0x00012653) list_single_graphic_pane_fp_g3

0x7c8f,	// (0x00012a30) list_single_graphic_pane_fp_g4_ParamLimits

0x7c8f,	// (0x00012a30) list_single_graphic_pane_fp_g4

0xc574,	// (0x00017315) list_single_graphic_pane_fp_g5_ParamLimits

0xc574,	// (0x00017315) list_single_graphic_pane_fp_g5

0x0004,

0xfb81,	// (0x0001a922) list_single_graphic_pane_fp_g_ParamLimits

0xfb81,	// (0x0001a922) list_single_graphic_pane_fp_g

0xc5a3,	// (0x00017344) list_single_graphic_pane_fp_t1_ParamLimits

0xc5a3,	// (0x00017344) list_single_graphic_pane_fp_t1

0xc597,	// (0x00017338) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc597,	// (0x00017338) list_single_graphic_heading_pane_fp_g1

0xc568,	// (0x00017309) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc568,	// (0x00017309) list_single_graphic_heading_pane_fp_g2

0x78b2,	// (0x00012653) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x78b2,	// (0x00012653) list_single_graphic_heading_pane_fp_g3

0x7c8f,	// (0x00012a30) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7c8f,	// (0x00012a30) list_single_graphic_heading_pane_fp_g4

0xc574,	// (0x00017315) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc574,	// (0x00017315) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001a922) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001a922) list_single_graphic_heading_pane_fp_g

0xc5b9,	// (0x0001735a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc5b9,	// (0x0001735a) list_single_graphic_heading_pane_fp_t1

0xc5cf,	// (0x00017370) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc5cf,	// (0x00017370) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8c,	// (0x0001a92d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8c,	// (0x0001a92d) list_single_graphic_heading_pane_fp_t

0xc5e1,	// (0x00017382) list_single_cale_day_pane_fp_g1_ParamLimits

0xc5e1,	// (0x00017382) list_single_cale_day_pane_fp_g1

0xc619,	// (0x000173ba) list_single_cale_day_pane_fp_g2_ParamLimits

0xc619,	// (0x000173ba) list_single_cale_day_pane_fp_g2

0xc625,	// (0x000173c6) list_single_cale_day_pane_fp_g3_ParamLimits

0xc625,	// (0x000173c6) list_single_cale_day_pane_fp_g3

0xc64d,	// (0x000173ee) list_single_cale_day_pane_fp_g4_ParamLimits

0xc64d,	// (0x000173ee) list_single_cale_day_pane_fp_g4

0xc671,	// (0x00017412) list_single_cale_day_pane_fp_g5_ParamLimits

0xc671,	// (0x00017412) list_single_cale_day_pane_fp_g5

0x0004,

0xfb91,	// (0x0001a932) list_single_cale_day_pane_fp_g_ParamLimits

0xfb91,	// (0x0001a932) list_single_cale_day_pane_fp_g

0xc695,	// (0x00017436) list_single_cale_day_pane_fp_t1_ParamLimits

0xc695,	// (0x00017436) list_single_cale_day_pane_fp_t1

0xc6bb,	// (0x0001745c) list_single_cale_day_pane_fp_t2_ParamLimits

0xc6bb,	// (0x0001745c) list_single_cale_day_pane_fp_t2

0xc6d4,	// (0x00017475) list_single_cale_day_pane_fp_t3_ParamLimits

0xc6d4,	// (0x00017475) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9c,	// (0x0001a93d) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9c,	// (0x0001a93d) list_single_cale_day_pane_fp_t

0xc568,	// (0x00017309) list_empty_pane_fp_g1_ParamLimits

0xc568,	// (0x00017309) list_empty_pane_fp_g1

0xc6ed,	// (0x0001748e) list_empty_pane_fp_t1

0xc6fb,	// (0x0001749c) list_empty_pane_fp_t2

0x0001,

0xfba3,	// (0x0001a944) list_empty_pane_fp_t

0xc568,	// (0x00017309) list_single_heading_pane_fp_g1_ParamLimits

0xc568,	// (0x00017309) list_single_heading_pane_fp_g1

0x78b2,	// (0x00012653) list_single_heading_pane_fp_g2_ParamLimits

0x78b2,	// (0x00012653) list_single_heading_pane_fp_g2

0x7c8f,	// (0x00012a30) list_single_heading_pane_fp_g3_ParamLimits

0x7c8f,	// (0x00012a30) list_single_heading_pane_fp_g3

0x0002,

0xfba8,	// (0x0001a949) list_single_heading_pane_fp_g_ParamLimits

0xfba8,	// (0x0001a949) list_single_heading_pane_fp_g

0xc709,	// (0x000174aa) list_single_heading_pane_fp_t1_ParamLimits

0xc709,	// (0x000174aa) list_single_heading_pane_fp_t1

0xc71b,	// (0x000174bc) list_single_heading_pane_fp_t2_ParamLimits

0xc71b,	// (0x000174bc) list_single_heading_pane_fp_t2

0x0001,

0xfbaf,	// (0x0001a950) list_single_heading_pane_fp_t_ParamLimits

0xfbaf,	// (0x0001a950) list_single_heading_pane_fp_t

0x7fdf,	// (0x00012d80) aid_size_cell_fast

0x7052,	// (0x00011df3) soft_indicator_pane_cp1_t1

0x801c,	// (0x00012dbd) cell_app_pane_cp2_ParamLimits

0x801c,	// (0x00012dbd) cell_app_pane_cp2

0x5d8b,	// (0x00010b2c) fep_hwr_candidate_drop_down_list_pane

0x5f63,	// (0x00010d04) fep_hwr_candidate_pane_g3_ParamLimits

0x5f63,	// (0x00010d04) fep_hwr_candidate_pane_g3

0x3f8c,	// (0x0000ed2d) fep_hwr_candidate_pane_g4_ParamLimits

0x3f8c,	// (0x0000ed2d) fep_hwr_candidate_pane_g4

0x0002,

0xfb1e,	// (0x0001a8bf) fep_hwr_candidate_pane_g_ParamLimits

0xfb1e,	// (0x0001a8bf) fep_hwr_candidate_pane_g

0xc071,	// (0x00016e12) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc071,	// (0x00016e12) fep_vkb_candidate_drop_down_list_pane

0xc482,	// (0x00017223) fep_vkb_candidate_pane_g3

0xc48a,	// (0x0001722b) fep_vkb_candidate_pane_g4

0x0002,

0xfb4b,	// (0x0001a8ec) fep_vkb_candidate_pane_g

0x5fce,	// (0x00010d6f) cell_hwr_candidate_pane_g1_ParamLimits

0x5fdc,	// (0x00010d7d) cell_hwr_candidate_pane_g3_ParamLimits

0x5fdc,	// (0x00010d7d) cell_hwr_candidate_pane_g3

0xe16a,	// (0x00018f0b) cell_hwr_candidate_pane_g4_ParamLimits

0xe16a,	// (0x00018f0b) cell_hwr_candidate_pane_g4

0x0002,

0xfb6a,	// (0x0001a90b) cell_hwr_candidate_pane_g_ParamLimits

0xfb6a,	// (0x0001a90b) cell_hwr_candidate_pane_g

0xc4a1,	// (0x00017242) cell_vkb_candidate_pane_g3_ParamLimits

0xc4a1,	// (0x00017242) cell_vkb_candidate_pane_g3

0xc4bc,	// (0x0001725d) cell_vkb_candidate_pane_g4_ParamLimits

0xc4bc,	// (0x0001725d) cell_vkb_candidate_pane_g4

0xc731,	// (0x000174d2) cell_app_pane_cp2_g1_ParamLimits

0xc731,	// (0x000174d2) cell_app_pane_cp2_g1

0xc74f,	// (0x000174f0) cell_app_pane_cp2_g2_ParamLimits

0xc74f,	// (0x000174f0) cell_app_pane_cp2_g2

0x0001,

0xfbb4,	// (0x0001a955) cell_app_pane_cp2_g_ParamLimits

0xfbb4,	// (0x0001a955) cell_app_pane_cp2_g

0xc75b,	// (0x000174fc) cell_app_pane_cp2_t1_ParamLimits

0xc75b,	// (0x000174fc) cell_app_pane_cp2_t1

0x7c69,	// (0x00012a0a) grid_highlight_pane_cp1_ParamLimits

0x7c69,	// (0x00012a0a) grid_highlight_pane_cp1

0x601b,	// (0x00010dbc) cell_hwr_candidate_pane_cp1_ParamLimits

0x601b,	// (0x00010dbc) cell_hwr_candidate_pane_cp1

0x5fce,	// (0x00010d6f) fep_hwr_candidate_drop_down_list_pane_g1

0x603a,	// (0x00010ddb) fep_hwr_candidate_drop_down_list_pane_g2

0x6047,	// (0x00010de8) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb9,	// (0x0001a95a) fep_hwr_candidate_drop_down_list_pane_g

0x6054,	// (0x00010df5) fep_hwr_candidate_drop_down_list_scroll_pane

0x605d,	// (0x00010dfe) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x605d,	// (0x00010dfe) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x606a,	// (0x00010e0b) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x606a,	// (0x00010e0b) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6077,	// (0x00010e18) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6077,	// (0x00010e18) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6084,	// (0x00010e25) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6084,	// (0x00010e25) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x609f,	// (0x00010e40) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x609f,	// (0x00010e40) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x60ba,	// (0x00010e5b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x60ba,	// (0x00010e5b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x60d5,	// (0x00010e76) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x60d5,	// (0x00010e76) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x60f0,	// (0x00010e91) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x60f0,	// (0x00010e91) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc0,	// (0x0001a961) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc0,	// (0x0001a961) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc76d,	// (0x0001750e) cell_vkb_candidate_pane_cp1_ParamLimits

0xc76d,	// (0x0001750e) cell_vkb_candidate_pane_cp1

0xc18a,	// (0x00016f2b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc18a,	// (0x00016f2b) fep_vkb_candidate_drop_down_list_pane_g1

0xc78d,	// (0x0001752e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc78d,	// (0x0001752e) fep_vkb_candidate_drop_down_list_pane_g2

0xc79a,	// (0x0001753b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc79a,	// (0x0001753b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd1,	// (0x0001a972) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd1,	// (0x0001a972) fep_vkb_candidate_drop_down_list_pane_g

0xc7a7,	// (0x00017548) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc7a7,	// (0x00017548) fep_vkb_candidate_drop_down_list_scroll_pane

0xc7b4,	// (0x00017555) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc7b4,	// (0x00017555) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc7c1,	// (0x00017562) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc7c1,	// (0x00017562) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc7cd,	// (0x0001756e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc7cd,	// (0x0001756e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc7d9,	// (0x0001757a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc7d9,	// (0x0001757a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc7fa,	// (0x0001759b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc7fa,	// (0x0001759b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc81b,	// (0x000175bc) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc81b,	// (0x000175bc) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc83c,	// (0x000175dd) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc83c,	// (0x000175dd) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc85d,	// (0x000175fe) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc85d,	// (0x000175fe) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd8,	// (0x0001a979) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd8,	// (0x0001a979) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6d69,	// (0x00011b0a) title_pane_g1_ParamLimits

0x6d76,	// (0x00011b17) title_pane_g2_ParamLimits

0xf54e,	// (0x0001a2ef) title_pane_g_ParamLimits

0x8452,	// (0x000131f3) aid_call2_pane

0x845a,	// (0x000131fb) aid_call_pane

0x8462,	// (0x00013203) popup_clock_analogue_window_g1

0x8462,	// (0x00013203) popup_clock_analogue_window_g2

0x4e75,	// (0x0000fc16) popup_clock_analogue_window_g3

0x4e7e,	// (0x0000fc1f) popup_clock_analogue_window_g4

0x6d55,	// (0x00011af6) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001a494) popup_clock_analogue_window_g

0x4e86,	// (0x0000fc27) popup_clock_analogue_window_t1

0x4e94,	// (0x0000fc35) clock_digital_number_pane_ParamLimits

0x4e94,	// (0x0000fc35) clock_digital_number_pane

0x4ea0,	// (0x0000fc41) clock_digital_number_pane_cp02_ParamLimits

0x4ea0,	// (0x0000fc41) clock_digital_number_pane_cp02

0x4eac,	// (0x0000fc4d) clock_digital_number_pane_cp03_ParamLimits

0x4eac,	// (0x0000fc4d) clock_digital_number_pane_cp03

0x4eb8,	// (0x0000fc59) clock_digital_number_pane_cp04_ParamLimits

0x4eb8,	// (0x0000fc59) clock_digital_number_pane_cp04

0x4ec4,	// (0x0000fc65) clock_digital_separator_pane_ParamLimits

0x4ec4,	// (0x0000fc65) clock_digital_separator_pane

0x4ed0,	// (0x0000fc71) popup_clock_digital_window_t1_ParamLimits

0x4ed0,	// (0x0000fc71) popup_clock_digital_window_t1

0x6d55,	// (0x00011af6) clock_digital_number_pane_g1

0x6d55,	// (0x00011af6) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001a49f) clock_digital_number_pane_g

0x6d55,	// (0x00011af6) clock_digital_separator_pane_g1

0x6d55,	// (0x00011af6) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001a49f) clock_digital_separator_pane_g

0x8e74,	// (0x00013c15) aid_fill_nsta_ParamLimits

0x8fba,	// (0x00013d5b) indicator_nsta_pane_ParamLimits

0x9133,	// (0x00013ed4) popup_clock_analogue_window

0x9133,	// (0x00013ed4) popup_clock_digital_window

0x6e3f,	// (0x00011be0) grid_indicator_nsta_pane_ParamLimits

0xb8d5,	// (0x00016676) clock_nsta_pane_t2

0x0001,

0xfa9e,	// (0x0001a83f) clock_nsta_pane_t

0x4e39,	// (0x0000fbda) aid_size_max_handle

0x4e43,	// (0x0000fbe4) aid_size_min_handle

0x8b04,	// (0x000138a5) editor_scroll_pane

0xc878,	// (0x00017619) ex_editor_pane

0x7f4d,	// (0x00012cee) scroll_pane_cp13

0x768d,	// (0x0001242e) scroll_pane_cp14

0x8491,	// (0x00013232) scroll_pane_cp36

0x84bd,	// (0x0001325e) list_single_graphic_hl_pane_cp2_ParamLimits

0x84bd,	// (0x0001325e) list_single_graphic_hl_pane_cp2

0xab11,	// (0x000158b2) list_single_graphic_hl_pane_ParamLimits

0xab11,	// (0x000158b2) list_single_graphic_hl_pane

0xc880,	// (0x00017621) aid_size_min_hl_cp1

0xc889,	// (0x0001762a) list_highlight_pane_cp34_ParamLimits

0xc889,	// (0x0001762a) list_highlight_pane_cp34

0xc89a,	// (0x0001763b) list_single_graphic_hl_pane_g1_ParamLimits

0xc89a,	// (0x0001763b) list_single_graphic_hl_pane_g1

0xc8a7,	// (0x00017648) list_single_graphic_hl_pane_g2_ParamLimits

0xc8a7,	// (0x00017648) list_single_graphic_hl_pane_g2

0xc8a7,	// (0x00017648) list_single_graphic_hl_pane_g3_ParamLimits

0xc8a7,	// (0x00017648) list_single_graphic_hl_pane_g3

0xb071,	// (0x00015e12) list_single_graphic_hl_pane_g4_ParamLimits

0xb071,	// (0x00015e12) list_single_graphic_hl_pane_g4

0xc8b3,	// (0x00017654) list_single_graphic_hl_pane_g5_ParamLimits

0xc8b3,	// (0x00017654) list_single_graphic_hl_pane_g5

0x0004,

0xfbe9,	// (0x0001a98a) list_single_graphic_hl_pane_g_ParamLimits

0xfbe9,	// (0x0001a98a) list_single_graphic_hl_pane_g

0xc8c7,	// (0x00017668) list_single_graphic_hl_pane_t1_ParamLimits

0xc8c7,	// (0x00017668) list_single_graphic_hl_pane_t1

0xc8dd,	// (0x0001767e) aid_size_min_hl_cp2

0xc8e6,	// (0x00017687) list_highlight_pane_cp34_cp2_ParamLimits

0xc8e6,	// (0x00017687) list_highlight_pane_cp34_cp2

0xc89a,	// (0x0001763b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc89a,	// (0x0001763b) list_single_graphic_hl_pane_g1_cp2

0xc8f3,	// (0x00017694) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc8f3,	// (0x00017694) list_single_graphic_hl_pane_g2_cp2

0xc8ff,	// (0x000176a0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc8ff,	// (0x000176a0) list_single_graphic_hl_pane_g3_cp2

0xb071,	// (0x00015e12) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xb071,	// (0x00015e12) list_single_graphic_hl_pane_g4_cp2

0xc8b3,	// (0x00017654) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc8b3,	// (0x00017654) list_single_graphic_hl_pane_g5_cp2

0x5184,	// (0x0000ff25) control_pane_g4_ParamLimits

0x5184,	// (0x0000ff25) control_pane_g4

0x8e30,	// (0x00013bd1) bg_popup_sub_pane_cp10_ParamLimits

0xbf16,	// (0x00016cb7) list_choice_list_pane_ParamLimits

0xbf25,	// (0x00016cc6) scroll_pane_cp23

0x70e2,	// (0x00011e83) bg_popup_preview_window_pane_cp02_ParamLimits

0xc50d,	// (0x000172ae) list_preview_fixed_pane_ParamLimits

0xc523,	// (0x000172c4) list_preview_fixed_pane_cp_ParamLimits

0xc523,	// (0x000172c4) list_preview_fixed_pane_cp

0xc52f,	// (0x000172d0) popup_preview_fixed_window_g1_ParamLimits

0xc52f,	// (0x000172d0) popup_preview_fixed_window_g1

0xc53b,	// (0x000172dc) popup_preview_fixed_window_g2_ParamLimits

0xc53b,	// (0x000172dc) popup_preview_fixed_window_g2

0x0002,

0xfb71,	// (0x0001a912) popup_preview_fixed_window_g_ParamLimits

0xfb71,	// (0x0001a912) popup_preview_fixed_window_g

0x4dad,	// (0x0000fb4e) aid_navi_side_left_pane_ParamLimits

0x4dc2,	// (0x0000fb63) aid_navi_side_right_pane_ParamLimits

0x4dda,	// (0x0000fb7b) navi_icon_pane_stacon_ParamLimits

0x4dee,	// (0x0000fb8f) navi_navi_pane_stacon_ParamLimits

0x4dda,	// (0x0000fb7b) navi_text_pane_stacon_ParamLimits

0x49c5,	// (0x0000f766) main_text_info_pane

0xc923,	// (0x000176c4) listscroll_text_info_pane

0xc92b,	// (0x000176cc) list_text_info_pane_ParamLimits

0xc92b,	// (0x000176cc) list_text_info_pane

0xc93a,	// (0x000176db) scroll_pane_cp24_ParamLimits

0xc93a,	// (0x000176db) scroll_pane_cp24

0xc958,	// (0x000176f9) list_text_info_pane_t1_ParamLimits

0xc958,	// (0x000176f9) list_text_info_pane_t1

0x5302,	// (0x000100a3) popup_fast_swap2_window_ParamLimits

0x5302,	// (0x000100a3) popup_fast_swap2_window

0xc989,	// (0x0001772a) aid_size_cell_fast2

0x6d4b,	// (0x00011aec) bg_popup_window_pane_cp17

0x98d5,	// (0x00014676) heading_pane_cp2

0x7357,	// (0x000120f8) listscroll_fast2_pane

0xc993,	// (0x00017734) grid_fast2_pane

0xc99d,	// (0x0001773e) listscroll_fast2_pane_g1

0xc9a5,	// (0x00017746) listscroll_fast2_pane_g2

0x0001,

0xfbf4,	// (0x0001a995) listscroll_fast2_pane_g

0x7f4d,	// (0x00012cee) scroll_pane_cp26

0xc9af,	// (0x00017750) cell_fast2_pane_ParamLimits

0xc9af,	// (0x00017750) cell_fast2_pane

0xc9c4,	// (0x00017765) cell_fast2_pane_g1

0xc9cd,	// (0x0001776e) cell_fast2_pane_g2

0xc9d6,	// (0x00017777) cell_fast2_pane_g3

0x0002,

0xfbf9,	// (0x0001a99a) cell_fast2_pane_g

0x744a,	// (0x000121eb) grid_highlight_pane_cp9

0x52c8,	// (0x00010069) main_eswt_pane_ParamLimits

0x52c8,	// (0x00010069) main_eswt_pane

0xc94f,	// (0x000176f0) list_single_text_info_pane

0xc9de,	// (0x0001777f) eswt_ctrl_button_pane

0xc9de,	// (0x0001777f) eswt_ctrl_canvas_pane

0xc9e6,	// (0x00017787) eswt_ctrl_combo_pane

0xc9de,	// (0x0001777f) eswt_ctrl_default_pane

0xc9de,	// (0x0001777f) eswt_ctrl_label_pane

0xc9ee,	// (0x0001778f) eswt_ctrl_wait_pane

0xc9f6,	// (0x00017797) eswt_shell_pane

0x6d4b,	// (0x00011aec) listscroll_eswt_app_pane

0xca16,	// (0x000177b7) popup_eswt_tasktip_window_ParamLimits

0xca16,	// (0x000177b7) popup_eswt_tasktip_window

0x94ac,	// (0x0001424d) bg_popup_window_pane_cp18

0xca27,	// (0x000177c8) eswt_control_pane_g1_ParamLimits

0xca27,	// (0x000177c8) eswt_control_pane_g1

0xca34,	// (0x000177d5) eswt_control_pane_g2_ParamLimits

0xca34,	// (0x000177d5) eswt_control_pane_g2

0xca41,	// (0x000177e2) eswt_control_pane_g3_ParamLimits

0xca41,	// (0x000177e2) eswt_control_pane_g3

0xca4e,	// (0x000177ef) eswt_control_pane_g4_ParamLimits

0xca4e,	// (0x000177ef) eswt_control_pane_g4

0x0003,

0xfc00,	// (0x0001a9a1) eswt_control_pane_g_ParamLimits

0xfc00,	// (0x0001a9a1) eswt_control_pane_g

0x7c69,	// (0x00012a0a) bg_button_pane_ParamLimits

0x7c69,	// (0x00012a0a) bg_button_pane

0x745f,	// (0x00012200) common_borders_pane_copy2_ParamLimits

0x745f,	// (0x00012200) common_borders_pane_copy2

0xca5b,	// (0x000177fc) control_button_pane_g1_ParamLimits

0xca5b,	// (0x000177fc) control_button_pane_g1

0xca67,	// (0x00017808) control_button_pane_g2_ParamLimits

0xca67,	// (0x00017808) control_button_pane_g2

0xca73,	// (0x00017814) control_button_pane_g3_ParamLimits

0xca73,	// (0x00017814) control_button_pane_g3

0x0002,

0xfc09,	// (0x0001a9aa) control_button_pane_g_ParamLimits

0xfc09,	// (0x0001a9aa) control_button_pane_g

0xca87,	// (0x00017828) control_button_pane_t1

0xca95,	// (0x00017836) control_button_pane_t2

0x0001,

0xfc10,	// (0x0001a9b1) control_button_pane_t

0x938a,	// (0x0001412b) bg_button_pane_g1

0x939a,	// (0x0001413b) bg_button_pane_g2

0x9392,	// (0x00014133) bg_button_pane_g3

0x93aa,	// (0x0001414b) bg_button_pane_g4

0x93a2,	// (0x00014143) bg_button_pane_g5

0x93b2,	// (0x00014153) bg_button_pane_g6

0x93ba,	// (0x0001415b) bg_button_pane_g7

0x93ca,	// (0x0001416b) bg_button_pane_g8

0x93c2,	// (0x00014163) bg_button_pane_g9

0x0008,

0xf861,	// (0x0001a602) bg_button_pane_g

0xbed1,	// (0x00016c72) common_borders_pane_ParamLimits

0xbed1,	// (0x00016c72) common_borders_pane

0xca27,	// (0x000177c8) eswt_control_pane_g1_copy1_ParamLimits

0xca27,	// (0x000177c8) eswt_control_pane_g1_copy1

0xca34,	// (0x000177d5) eswt_control_pane_g2_copy1_ParamLimits

0xca34,	// (0x000177d5) eswt_control_pane_g2_copy1

0xca41,	// (0x000177e2) eswt_control_pane_g3_copy1_ParamLimits

0xca41,	// (0x000177e2) eswt_control_pane_g3_copy1

0xca4e,	// (0x000177ef) eswt_control_pane_g4_copy1_ParamLimits

0xca4e,	// (0x000177ef) eswt_control_pane_g4_copy1

0xbf0c,	// (0x00016cad) bg_eswt_ctrl_canvas_pane_g1

0xbed1,	// (0x00016c72) common_borders_pane_cp2_ParamLimits

0xbed1,	// (0x00016c72) common_borders_pane_cp2

0xbed1,	// (0x00016c72) common_borders_pane_cp3_ParamLimits

0xbed1,	// (0x00016c72) common_borders_pane_cp3

0xcaa3,	// (0x00017844) separator_horizontal_pane

0xcaab,	// (0x0001784c) separator_vertical_pane

0xca27,	// (0x000177c8) eswt_control_pane_g1_copy2_ParamLimits

0xca27,	// (0x000177c8) eswt_control_pane_g1_copy2

0xca34,	// (0x000177d5) eswt_control_pane_g2_copy2_ParamLimits

0xca34,	// (0x000177d5) eswt_control_pane_g2_copy2

0xca41,	// (0x000177e2) eswt_control_pane_g3_copy2_ParamLimits

0xca41,	// (0x000177e2) eswt_control_pane_g3_copy2

0xca4e,	// (0x000177ef) eswt_control_pane_g4_copy2_ParamLimits

0xca4e,	// (0x000177ef) eswt_control_pane_g4_copy2

0x6d4b,	// (0x00011aec) common_borders_pane_cp4

0xcab4,	// (0x00017855) separator_horizontal_pane_g1

0xcabd,	// (0x0001785e) separator_horizontal_pane_g2

0xcac6,	// (0x00017867) separator_horizontal_pane_g3

0x0002,

0xfc15,	// (0x0001a9b6) separator_horizontal_pane_g

0xca27,	// (0x000177c8) eswt_control_pane_g1_copy3_ParamLimits

0xca27,	// (0x000177c8) eswt_control_pane_g1_copy3

0xca34,	// (0x000177d5) eswt_control_pane_g2_copy3_ParamLimits

0xca34,	// (0x000177d5) eswt_control_pane_g2_copy3

0xca41,	// (0x000177e2) eswt_control_pane_g3_copy3_ParamLimits

0xca41,	// (0x000177e2) eswt_control_pane_g3_copy3

0xca4e,	// (0x000177ef) eswt_control_pane_g4_copy3_ParamLimits

0xca4e,	// (0x000177ef) eswt_control_pane_g4_copy3

0x6d4b,	// (0x00011aec) common_borders_pane_cp5

0xcacf,	// (0x00017870) separator_vertical_pane_g1

0xcad8,	// (0x00017879) separator_vertical_pane_g2

0xcae1,	// (0x00017882) separator_vertical_pane_g3

0x0002,

0xfc1c,	// (0x0001a9bd) separator_vertical_pane_g

0xca27,	// (0x000177c8) eswt_control_pane_g1_copy4_ParamLimits

0xca27,	// (0x000177c8) eswt_control_pane_g1_copy4

0xca34,	// (0x000177d5) eswt_control_pane_g2_copy4_ParamLimits

0xca34,	// (0x000177d5) eswt_control_pane_g2_copy4

0xca41,	// (0x000177e2) eswt_control_pane_g3_copy4_ParamLimits

0xca41,	// (0x000177e2) eswt_control_pane_g3_copy4

0xca4e,	// (0x000177ef) eswt_control_pane_g4_copy4_ParamLimits

0xca4e,	// (0x000177ef) eswt_control_pane_g4_copy4

0xcaea,	// (0x0001788b) eswt_ctrl_combo_button_pane

0xcaf2,	// (0x00017893) eswt_ctrl_input_pane

0xcafa,	// (0x0001789b) popup_choice_list_window_cp70

0xcb02,	// (0x000178a3) eswt_ctrl_input_pane_t1

0x6d4b,	// (0x00011aec) input_focus_pane_cp70

0xbed1,	// (0x00016c72) bg_button_pane_cp70_ParamLimits

0xbed1,	// (0x00016c72) bg_button_pane_cp70

0xcb10,	// (0x000178b1) eswt_ctrl_combo_button_pane_g1

0xcb18,	// (0x000178b9) wait_bar_pane_cp70

0x94ac,	// (0x0001424d) bg_popup_window_pane_cp70_ParamLimits

0x94ac,	// (0x0001424d) bg_popup_window_pane_cp70

0xcb20,	// (0x000178c1) popup_eswt_tasktip_window_t1

0xcb36,	// (0x000178d7) wait_bar_pane_cp71_ParamLimits

0xcb36,	// (0x000178d7) wait_bar_pane_cp71

0xcb42,	// (0x000178e3) grid_eswt_app_pane

0x826b,	// (0x0001300c) scroll_pane_cp70

0xcb4b,	// (0x000178ec) cell_eswt_app_pane_ParamLimits

0xcb4b,	// (0x000178ec) cell_eswt_app_pane

0xcb7b,	// (0x0001791c) cell_eswt_app_pane_g1_ParamLimits

0xcb7b,	// (0x0001791c) cell_eswt_app_pane_g1

0xcbaa,	// (0x0001794b) cell_eswt_app_pane_g2_ParamLimits

0xcbaa,	// (0x0001794b) cell_eswt_app_pane_g2

0x0001,

0xfc23,	// (0x0001a9c4) cell_eswt_app_pane_g_ParamLimits

0xfc23,	// (0x0001a9c4) cell_eswt_app_pane_g

0xcbd3,	// (0x00017974) cell_eswt_app_pane_t1_ParamLimits

0xcbd3,	// (0x00017974) cell_eswt_app_pane_t1

0xcc05,	// (0x000179a6) grid_highlight_pane_cp70_ParamLimits

0xcc05,	// (0x000179a6) grid_highlight_pane_cp70

0x89d9,	// (0x0001377a) set_content_pane_g1

0x8daf,	// (0x00013b50) status_small_volume_pane

0x610b,	// (0x00010eac) status_small_volume_pane_g1

0x6113,	// (0x00010eb4) volume_small2_pane

0x611c,	// (0x00010ebd) volume_small2_pane_g1

0x6125,	// (0x00010ec6) volume_small2_pane_g2

0x612e,	// (0x00010ecf) volume_small2_pane_g3

0x6137,	// (0x00010ed8) volume_small2_pane_g4

0x6140,	// (0x00010ee1) volume_small2_pane_g5

0x6149,	// (0x00010eea) volume_small2_pane_g6

0x6152,	// (0x00010ef3) volume_small2_pane_g7

0x615b,	// (0x00010efc) volume_small2_pane_g8

0x6164,	// (0x00010f05) volume_small2_pane_g9

0x616d,	// (0x00010f0e) volume_small2_pane_g10

0x0009,

0xfc28,	// (0x0001a9c9) volume_small2_pane_g

0xc2d2,	// (0x00017073) fep_vkb_top_text_pane_g1_ParamLimits

0xc2ed,	// (0x0001708e) fep_vkb_top_text_pane_t1_ParamLimits

0xc547,	// (0x000172e8) popup_preview_fixed_window_g3_ParamLimits

0xc547,	// (0x000172e8) popup_preview_fixed_window_g3

0x57b1,	// (0x00010552) popup_toolbar_trans_pane

0xa86e,	// (0x0001560f) aid_height_set_list_ParamLimits

0xa87f,	// (0x00015620) aid_size_parent_ParamLimits

0x8e30,	// (0x00013bd1) list_highlight_pane_cp2_ParamLimits

0x89d9,	// (0x0001377a) set_content_pane_g1_ParamLimits

0xab2d,	// (0x000158ce) list_single_image_pane_ParamLimits

0xab2d,	// (0x000158ce) list_single_image_pane

0xcc11,	// (0x000179b2) aid_size_cell_image_ParamLimits

0xcc11,	// (0x000179b2) aid_size_cell_image

0xcc1e,	// (0x000179bf) grid_single_image_pane_ParamLimits

0xcc1e,	// (0x000179bf) grid_single_image_pane

0x9e12,	// (0x00014bb3) list_single_image_pane_g1_ParamLimits

0x9e12,	// (0x00014bb3) list_single_image_pane_g1

0xcc2a,	// (0x000179cb) list_single_image_pane_g2_ParamLimits

0xcc2a,	// (0x000179cb) list_single_image_pane_g2

0x0001,

0xfc3d,	// (0x0001a9de) list_single_image_pane_g_ParamLimits

0xfc3d,	// (0x0001a9de) list_single_image_pane_g

0xcc3e,	// (0x000179df) list_single_image_pane_t1_ParamLimits

0xcc3e,	// (0x000179df) list_single_image_pane_t1

0xcc54,	// (0x000179f5) cell_image_list_pane_ParamLimits

0xcc54,	// (0x000179f5) cell_image_list_pane

0xcc68,	// (0x00017a09) cell_image_list_pane_g1

0xcc71,	// (0x00017a12) cell_image_list_pane_g2

0x0001,

0xfc42,	// (0x0001a9e3) cell_image_list_pane_g

0xcc7a,	// (0x00017a1b) aid_size_cell_tb_trans_pane

0x7c69,	// (0x00012a0a) bg_tb_trans_pane

0xcc8c,	// (0x00017a2d) grid_tb_trans_pane

0x938a,	// (0x0001412b) bg_tb_trans_pane_g1

0x939a,	// (0x0001413b) bg_tb_trans_pane_g2

0x9392,	// (0x00014133) bg_tb_trans_pane_g3

0x93aa,	// (0x0001414b) bg_tb_trans_pane_g4

0x93a2,	// (0x00014143) bg_tb_trans_pane_g5

0x93ca,	// (0x0001416b) bg_tb_trans_pane_g6

0x93c2,	// (0x00014163) bg_tb_trans_pane_g7

0x93b2,	// (0x00014153) bg_tb_trans_pane_g8

0x93ba,	// (0x0001415b) bg_tb_trans_pane_g9

0x0008,

0xfc47,	// (0x0001a9e8) bg_tb_trans_pane_g

0xcca0,	// (0x00017a41) cell_toolbar_trans_pane_ParamLimits

0xcca0,	// (0x00017a41) cell_toolbar_trans_pane

0xbf0c,	// (0x00016cad) cell_toolbar_trans_pane_g1

0xba92,	// (0x00016833) list_form2_midp_pane_t1

0xbaa0,	// (0x00016841) list_form2_midp_pane_t2

0x0001,

0xfae4,	// (0x0001a885) list_form2_midp_pane_t

0xbaae,	// (0x0001684f) scroll_pane_cp51_ParamLimits

0xbcb9,	// (0x00016a5a) form2_midp_wait_pane_g1

0xbcc2,	// (0x00016a63) form2_midp_wait_pane_g2

0xbccb,	// (0x00016a6c) form2_midp_wait_pane_g3

0x0002,

0xfaf9,	// (0x0001a89a) form2_midp_wait_pane_g

0x6e3f,	// (0x00011be0) list_highlight_pane_cp21_ParamLimits

0xbd17,	// (0x00016ab8) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbd26,	// (0x00016ac7) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xaab5,	// (0x00015856) list_single_2graphic_im_pane_ParamLimits

0xaab5,	// (0x00015856) list_single_2graphic_im_pane

0xccc6,	// (0x00017a67) list_single_2graphic_im_pane_g1_ParamLimits

0xccc6,	// (0x00017a67) list_single_2graphic_im_pane_g1

0xccd7,	// (0x00017a78) list_single_2graphic_im_pane_g2_ParamLimits

0xccd7,	// (0x00017a78) list_single_2graphic_im_pane_g2

0xcce3,	// (0x00017a84) list_single_2graphic_im_pane_g3_ParamLimits

0xcce3,	// (0x00017a84) list_single_2graphic_im_pane_g3

0x0003,

0xfc5a,	// (0x0001a9fb) list_single_2graphic_im_pane_g_ParamLimits

0xfc5a,	// (0x0001a9fb) list_single_2graphic_im_pane_g

0xcd03,	// (0x00017aa4) list_single_2graphic_im_pane_t1_ParamLimits

0xcd03,	// (0x00017aa4) list_single_2graphic_im_pane_t1

0xc553,	// (0x000172f4) list_single_graphic_2heading_pane_fp_ParamLimits

0xc553,	// (0x000172f4) list_single_graphic_2heading_pane_fp

0xc597,	// (0x00017338) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc597,	// (0x00017338) list_single_graphic_2heading_pane_fp_g1

0xc568,	// (0x00017309) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc568,	// (0x00017309) list_single_graphic_2heading_pane_fp_g2

0x78b2,	// (0x00012653) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x78b2,	// (0x00012653) list_single_graphic_2heading_pane_fp_g3

0x7c8f,	// (0x00012a30) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7c8f,	// (0x00012a30) list_single_graphic_2heading_pane_fp_g4

0xc574,	// (0x00017315) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc574,	// (0x00017315) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001a922) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001a922) list_single_graphic_2heading_pane_fp_g

0xcd34,	// (0x00017ad5) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcd34,	// (0x00017ad5) list_single_graphic_2heading_pane_fp_t1

0xc5cf,	// (0x00017370) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc5cf,	// (0x00017370) list_single_graphic_2heading_pane_fp_t2

0xcd4a,	// (0x00017aeb) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcd4a,	// (0x00017aeb) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc63,	// (0x0001aa04) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc63,	// (0x0001aa04) list_single_graphic_2heading_pane_fp_t

0xbf98,	// (0x00016d39) fep_hwr_write_pane_g5_ParamLimits

0xbf98,	// (0x00016d39) fep_hwr_write_pane_g5

0xbfa4,	// (0x00016d45) fep_hwr_write_pane_g6_ParamLimits

0xbfa4,	// (0x00016d45) fep_hwr_write_pane_g6

0xc9f6,	// (0x00017797) eswt_shell_pane_ParamLimits

0x94ac,	// (0x0001424d) bg_popup_window_pane_cp18_ParamLimits

0xa79f,	// (0x00015540) heading_pane_cp70

0xcb20,	// (0x000178c1) popup_eswt_tasktip_window_t1_ParamLimits

0x8ec9,	// (0x00013c6a) aid_touch_tab_arrow_left

0x8ed8,	// (0x00013c79) aid_touch_tab_arrow_right

0x6d87,	// (0x00011b28) title_pane_g3_ParamLimits

0x6d87,	// (0x00011b28) title_pane_g3

0x7b48,	// (0x000128e9) set_value_pane_g1

0x57b1,	// (0x00010552) popup_toolbar_trans_pane_ParamLimits

0xcc7a,	// (0x00017a1b) aid_size_cell_tb_trans_pane_ParamLimits

0x7c69,	// (0x00012a0a) bg_tb_trans_pane_ParamLimits

0xcc8c,	// (0x00017a2d) grid_tb_trans_pane_ParamLimits

0x70e2,	// (0x00011e83) cont_note_pane_ParamLimits

0x70e2,	// (0x00011e83) cont_note_pane

0x745f,	// (0x00012200) cont_snote2_single_text_pane_ParamLimits

0x745f,	// (0x00012200) cont_snote2_single_text_pane

0x745f,	// (0x00012200) cont_snote2_single_graphic_pane_ParamLimits

0x745f,	// (0x00012200) cont_snote2_single_graphic_pane

0x9afc,	// (0x0001489d) cont_note_wait_pane_ParamLimits

0x9afc,	// (0x0001489d) cont_note_wait_pane

0x9afc,	// (0x0001489d) cont_note_image_pane_ParamLimits

0x9afc,	// (0x0001489d) cont_note_image_pane

0xcd60,	// (0x00017b01) popup_note2_window_g1_ParamLimits

0xcd60,	// (0x00017b01) popup_note2_window_g1

0xcd91,	// (0x00017b32) popup_note2_window_t1_ParamLimits

0xcd91,	// (0x00017b32) popup_note2_window_t1

0xcdd6,	// (0x00017b77) popup_note2_window_t2_ParamLimits

0xcdd6,	// (0x00017b77) popup_note2_window_t2

0xce1b,	// (0x00017bbc) popup_note2_window_t3_ParamLimits

0xce1b,	// (0x00017bbc) popup_note2_window_t3

0xce60,	// (0x00017c01) popup_note2_window_t4_ParamLimits

0xce60,	// (0x00017c01) popup_note2_window_t4

0x7166,	// (0x00011f07) popup_note2_window_t5_ParamLimits

0x7166,	// (0x00011f07) popup_note2_window_t5

0x0004,

0xfc6f,	// (0x0001aa10) popup_note2_window_t_ParamLimits

0xfc6f,	// (0x0001aa10) popup_note2_window_t

0xce8f,	// (0x00017c30) popup_note2_image_window_g1_ParamLimits

0xce8f,	// (0x00017c30) popup_note2_image_window_g1

0xce9b,	// (0x00017c3c) popup_note2_image_window_g2_ParamLimits

0xce9b,	// (0x00017c3c) popup_note2_image_window_g2

0x0001,

0xfc7a,	// (0x0001aa1b) popup_note2_image_window_g_ParamLimits

0xfc7a,	// (0x0001aa1b) popup_note2_image_window_g

0xcead,	// (0x00017c4e) popup_note2_image_window_t1_ParamLimits

0xcead,	// (0x00017c4e) popup_note2_image_window_t1

0xcec5,	// (0x00017c66) popup_note2_image_window_t2_ParamLimits

0xcec5,	// (0x00017c66) popup_note2_image_window_t2

0xcedd,	// (0x00017c7e) popup_note2_image_window_t3_ParamLimits

0xcedd,	// (0x00017c7e) popup_note2_image_window_t3

0x0002,

0xfc7f,	// (0x0001aa20) popup_note2_image_window_t_ParamLimits

0xfc7f,	// (0x0001aa20) popup_note2_image_window_t

0x9b0a,	// (0x000148ab) popup_note2_wait_window_g1_ParamLimits

0x9b0a,	// (0x000148ab) popup_note2_wait_window_g1

0xcef9,	// (0x00017c9a) popup_note2_wait_window_g2_ParamLimits

0xcef9,	// (0x00017c9a) popup_note2_wait_window_g2

0x9b22,	// (0x000148c3) popup_note2_wait_window_g3_ParamLimits

0x9b22,	// (0x000148c3) popup_note2_wait_window_g3

0x0002,

0xfc86,	// (0x0001aa27) popup_note2_wait_window_g_ParamLimits

0xfc86,	// (0x0001aa27) popup_note2_wait_window_g

0xcf05,	// (0x00017ca6) popup_note2_wait_window_t1_ParamLimits

0xcf05,	// (0x00017ca6) popup_note2_wait_window_t1

0xcf23,	// (0x00017cc4) popup_note2_wait_window_t2_ParamLimits

0xcf23,	// (0x00017cc4) popup_note2_wait_window_t2

0xcf41,	// (0x00017ce2) popup_note2_wait_window_t3_ParamLimits

0xcf41,	// (0x00017ce2) popup_note2_wait_window_t3

0xcf53,	// (0x00017cf4) popup_note2_wait_window_t4_ParamLimits

0xcf53,	// (0x00017cf4) popup_note2_wait_window_t4

0x0003,

0xfc8d,	// (0x0001aa2e) popup_note2_wait_window_t_ParamLimits

0xfc8d,	// (0x0001aa2e) popup_note2_wait_window_t

0xcf65,	// (0x00017d06) wait_bar2_pane_ParamLimits

0xcf65,	// (0x00017d06) wait_bar2_pane

0xcf7d,	// (0x00017d1e) popup_snote2_single_text_window_g1_ParamLimits

0xcf7d,	// (0x00017d1e) popup_snote2_single_text_window_g1

0xcfa5,	// (0x00017d46) popup_snote2_single_text_window_t1_ParamLimits

0xcfa5,	// (0x00017d46) popup_snote2_single_text_window_t1

0xcff1,	// (0x00017d92) popup_snote2_single_text_window_t2_ParamLimits

0xcff1,	// (0x00017d92) popup_snote2_single_text_window_t2

0xd03d,	// (0x00017dde) popup_snote2_single_text_window_t3_ParamLimits

0xd03d,	// (0x00017dde) popup_snote2_single_text_window_t3

0xd07e,	// (0x00017e1f) popup_snote2_single_text_window_t4_ParamLimits

0xd07e,	// (0x00017e1f) popup_snote2_single_text_window_t4

0xd0b4,	// (0x00017e55) popup_snote2_single_text_window_t5_ParamLimits

0xd0b4,	// (0x00017e55) popup_snote2_single_text_window_t5

0x0004,

0xfc96,	// (0x0001aa37) popup_snote2_single_text_window_t_ParamLimits

0xfc96,	// (0x0001aa37) popup_snote2_single_text_window_t

0xd0df,	// (0x00017e80) popup_snote2_single_graphic_window_g1_ParamLimits

0xd0df,	// (0x00017e80) popup_snote2_single_graphic_window_g1

0xd107,	// (0x00017ea8) popup_snote2_single_graphic_window_g2_ParamLimits

0xd107,	// (0x00017ea8) popup_snote2_single_graphic_window_g2

0x0001,

0xfca1,	// (0x0001aa42) popup_snote2_single_graphic_window_g_ParamLimits

0xfca1,	// (0x0001aa42) popup_snote2_single_graphic_window_g

0xd12f,	// (0x00017ed0) popup_snote2_single_graphic_window_t1_ParamLimits

0xd12f,	// (0x00017ed0) popup_snote2_single_graphic_window_t1

0xd17b,	// (0x00017f1c) popup_snote2_single_graphic_window_t2_ParamLimits

0xd17b,	// (0x00017f1c) popup_snote2_single_graphic_window_t2

0xd03d,	// (0x00017dde) popup_snote2_single_graphic_window_t3_ParamLimits

0xd03d,	// (0x00017dde) popup_snote2_single_graphic_window_t3

0xd07e,	// (0x00017e1f) popup_snote2_single_graphic_window_t4_ParamLimits

0xd07e,	// (0x00017e1f) popup_snote2_single_graphic_window_t4

0xd0b4,	// (0x00017e55) popup_snote2_single_graphic_window_t5_ParamLimits

0xd0b4,	// (0x00017e55) popup_snote2_single_graphic_window_t5

0x0004,

0xfca6,	// (0x0001aa47) popup_snote2_single_graphic_window_t_ParamLimits

0xfca6,	// (0x0001aa47) popup_snote2_single_graphic_window_t

0xb96f,	// (0x00016710) clock_nsta_pane_cp2_t1

0xb96f,	// (0x00016710) clock_nsta_pane_cp2_t2

0x0001,

0xfaba,	// (0x0001a85b) clock_nsta_pane_cp2_t

0x7c83,	// (0x00012a24) form_field_data_wide_pane_g1_ParamLimits

0x78b2,	// (0x00012653) form_field_data_wide_pane_g2_ParamLimits

0x78b2,	// (0x00012653) form_field_data_wide_pane_g2

0x7c8f,	// (0x00012a30) form_field_data_wide_pane_g3_ParamLimits

0x7c8f,	// (0x00012a30) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001a417) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001a417) form_field_data_wide_pane_g

0xb871,	// (0x00016612) grid_touch_3_pane_ParamLimits

0xb871,	// (0x00016612) grid_touch_3_pane

0xd1c7,	// (0x00017f68) cell_touch_3_pane_ParamLimits

0xd1c7,	// (0x00017f68) cell_touch_3_pane

0xbf0c,	// (0x00016cad) cell_touch_3_pane_g1

0xbf0c,	// (0x00016cad) cell_touch_3_pane_g2

0x0001,

0xfb3f,	// (0x0001a8e0) cell_touch_3_pane_g

0x71be,	// (0x00011f5f) cont_query_data_pane

0x71c6,	// (0x00011f67) cont_query_data_pane_cp1

0xd1f5,	// (0x00017f96) button_value_adjust_pane_cp7

0xd1fd,	// (0x00017f9e) query_popup_pane_cp3

0x8552,	// (0x000132f3) bg_popup_sub_pane_cp22_ParamLimits

0x4eef,	// (0x0000fc90) navi_navi_volume_pane_cp2

0x4f0a,	// (0x0000fcab) popup_side_volume_key_window_g2

0x4f19,	// (0x0000fcba) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001a4ad) popup_side_volume_key_window_g

0x4f36,	// (0x0000fcd7) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001a4b4) popup_side_volume_key_window_t

0x8898,	// (0x00013639) popup_side_volume_key_window_ParamLimits

0x7872,	// (0x00012613) list_double_graphic_pane_g4_ParamLimits

0x7872,	// (0x00012613) list_double_graphic_pane_g4

0xaaf2,	// (0x00015893) list_single_2heading_msg_pane_ParamLimits

0xaaf2,	// (0x00015893) list_single_2heading_msg_pane

0xd22c,	// (0x00017fcd) list_single_2heading_msg_pane_g1_ParamLimits

0xd22c,	// (0x00017fcd) list_single_2heading_msg_pane_g1

0x8a3d,	// (0x000137de) list_single_2heading_msg_pane_g2_ParamLimits

0x8a3d,	// (0x000137de) list_single_2heading_msg_pane_g2

0xb3a2,	// (0x00016143) list_single_2heading_msg_pane_g3_ParamLimits

0xb3a2,	// (0x00016143) list_single_2heading_msg_pane_g3

0xd238,	// (0x00017fd9) list_single_2heading_msg_pane_g4_ParamLimits

0xd238,	// (0x00017fd9) list_single_2heading_msg_pane_g4

0x0003,

0xfcb1,	// (0x0001aa52) list_single_2heading_msg_pane_g_ParamLimits

0xfcb1,	// (0x0001aa52) list_single_2heading_msg_pane_g

0xd250,	// (0x00017ff1) list_single_2heading_msg_pane_t1_ParamLimits

0xd250,	// (0x00017ff1) list_single_2heading_msg_pane_t1

0xd278,	// (0x00018019) list_single_2heading_msg_pane_t2_ParamLimits

0xd278,	// (0x00018019) list_single_2heading_msg_pane_t2

0xd2a7,	// (0x00018048) list_single_2heading_msg_pane_t3_ParamLimits

0xd2a7,	// (0x00018048) list_single_2heading_msg_pane_t3

0xd2e0,	// (0x00018081) list_single_2heading_msg_pane_t4_ParamLimits

0xd2e0,	// (0x00018081) list_single_2heading_msg_pane_t4

0x0003,

0xfcba,	// (0x0001aa5b) list_single_2heading_msg_pane_t_ParamLimits

0xfcba,	// (0x0001aa5b) list_single_2heading_msg_pane_t

0x6d93,	// (0x00011b34) title_pane_g4_ParamLimits

0x6d93,	// (0x00011b34) title_pane_g4

0x4cfe,	// (0x0000fa9f) title_pane_stacon_g3_ParamLimits

0x4cfe,	// (0x0000fa9f) title_pane_stacon_g3

0xccf7,	// (0x00017a98) list_single_2graphic_im_pane_g4_ParamLimits

0xccf7,	// (0x00017a98) list_single_2graphic_im_pane_g4

0xa567,	// (0x00015308) popup_side_volume_key_window_cp

0xae68,	// (0x00015c09) main_idle_act2_pane_t1

0x590f,	// (0x000106b0) toolbar_button_pane_g10

0x7657,	// (0x000123f8) popup_toolbar_window_cp1

0xb960,	// (0x00016701) clock_nsta_pane_cp_t1

0xb960,	// (0x00016701) clock_nsta_pane_cp_t2

0x0001,

0xfab5,	// (0x0001a856) clock_nsta_pane_cp_t

0x4eef,	// (0x0000fc90) navi_navi_volume_pane_cp2_ParamLimits

0x4efe,	// (0x0000fc9f) popup_side_volume_key_window_g1_ParamLimits

0x4f0a,	// (0x0000fcab) popup_side_volume_key_window_g2_ParamLimits

0x4f19,	// (0x0000fcba) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001a4ad) popup_side_volume_key_window_g_ParamLimits

0x5d77,	// (0x00010b18) fep_hwr_aid_pane

0x5e1e,	// (0x00010bbf) bg_fep_hwr_top_pane_g4_ParamLimits

0xbf68,	// (0x00016d09) fep_hwr_top_pane_g1_ParamLimits

0xbf7a,	// (0x00016d1b) fep_hwr_top_pane_g2_ParamLimits

0x5e3e,	// (0x00010bdf) fep_hwr_top_pane_g3_ParamLimits

0xfb0a,	// (0x0001a8ab) fep_hwr_top_pane_g_ParamLimits

0x5e53,	// (0x00010bf4) fep_hwr_top_text_pane_ParamLimits

0xa32a,	// (0x000150cb) aid_touch_tab_arrow_arrow_2

0xa333,	// (0x000150d4) aid_touch_tab_arrow_left_2

0x5d8b,	// (0x00010b2c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5dc2,	// (0x00010b63) fep_hwr_prediction_pane

0xc0da,	// (0x00016e7b) fep_vkb_prediction_pane

0xc1de,	// (0x00016f7f) fep_vkb_side_pane_g3_ParamLimits

0xc1de,	// (0x00016f7f) fep_vkb_side_pane_g3

0x5fce,	// (0x00010d6f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x603a,	// (0x00010ddb) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6047,	// (0x00010de8) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb9,	// (0x0001a95a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6176,	// (0x00010f17) fep_hwr_prediction_pane_g1

0x6180,	// (0x00010f21) fep_hwr_prediction_pane_g2

0x6188,	// (0x00010f29) fep_hwr_prediction_pane_g3

0x6190,	// (0x00010f31) fep_hwr_prediction_pane_g4

0x0003,

0xfcc3,	// (0x0001aa64) fep_hwr_prediction_pane_g

0xd305,	// (0x000180a6) fep_vkb_prediction_pane_g1

0xd30f,	// (0x000180b0) fep_vkb_prediction_pane_g2

0xd317,	// (0x000180b8) fep_vkb_prediction_pane_g3

0xd31f,	// (0x000180c0) fep_vkb_prediction_pane_g4

0x0003,

0xfccc,	// (0x0001aa6d) fep_vkb_prediction_pane_g

0x5bf7,	// (0x00010998) slider_set_pane_g3

0x5c0b,	// (0x000109ac) slider_set_pane_g4

0x5c23,	// (0x000109c4) slider_set_pane_g5

0x5bf7,	// (0x00010998) slider_set_pane_g6

0x5c39,	// (0x000109da) slider_set_pane_g7

0xa9e4,	// (0x00015785) slider_form_pane_g3

0xa9ed,	// (0x0001578e) slider_form_pane_g4

0xa9f5,	// (0x00015796) slider_form_pane_g5

0xa9e4,	// (0x00015785) slider_form_pane_g6

0xa9fd,	// (0x0001579e) slider_form_pane_g7

0xb164,	// (0x00015f05) slider_set_pane_vc_g3

0xb16d,	// (0x00015f0e) slider_set_pane_vc_g4

0xb176,	// (0x00015f17) slider_set_pane_vc_g5

0xb164,	// (0x00015f05) slider_set_pane_vc_g6

0xb17f,	// (0x00015f20) slider_set_pane_vc_g7

0xb644,	// (0x000163e5) slider_form_pane_vc_g1

0xb64d,	// (0x000163ee) slider_form_pane_vc_g2

0xb656,	// (0x000163f7) slider_form_pane_vc_g3

0xb644,	// (0x000163e5) slider_form_pane_vc_g4

0xb65f,	// (0x00016400) slider_form_pane_vc_g5

0x0004,

0xfa87,	// (0x0001a828) slider_form_pane_vc_g

0x49c5,	// (0x0000f766) main_idle_act3_pane

0xd327,	// (0x000180c8) ai3_links_pane

0xd330,	// (0x000180d1) popup_ai3_data_window_ParamLimits

0xd330,	// (0x000180d1) popup_ai3_data_window

0x6d4b,	// (0x00011aec) grid_ai3_links_pane

0xd34a,	// (0x000180eb) cell_ai3_links_pane_ParamLimits

0xd34a,	// (0x000180eb) cell_ai3_links_pane

0xd362,	// (0x00018103) bg_popup_sub_pane_cp11

0xd36f,	// (0x00018110) cell_ai3_links_pane_g1

0x6d4b,	// (0x00011aec) bg_popup_sub_pane_cp12

0xd394,	// (0x00018135) heading_ai3_data_pane

0xd39c,	// (0x0001813d) list_ai3_gene_pane

0xd3a8,	// (0x00018149) popup_ai3_data_window_g1

0xd3b0,	// (0x00018151) heading_ai3_data_pane_g1

0xd3b8,	// (0x00018159) heading_ai3_data_pane_t1

0xd3c6,	// (0x00018167) list_double_ai3_gene_pane_ParamLimits

0xd3c6,	// (0x00018167) list_double_ai3_gene_pane

0xd3d3,	// (0x00018174) list_single_ai3_gene_pane_ParamLimits

0xd3d3,	// (0x00018174) list_single_ai3_gene_pane

0xbed1,	// (0x00016c72) list_highlight_pane_cp7_ParamLimits

0xbed1,	// (0x00016c72) list_highlight_pane_cp7

0xd3e0,	// (0x00018181) list_single_a13_gene_pane_t1_ParamLimits

0xd3e0,	// (0x00018181) list_single_a13_gene_pane_t1

0xd3f7,	// (0x00018198) list_single_ai3_gene_pane_g1

0xd400,	// (0x000181a1) list_single_ai3_gene_pane_g2

0x0001,

0xfcd5,	// (0x0001aa76) list_single_ai3_gene_pane_g

0xd408,	// (0x000181a9) list_double_ai3_gene_pane_g1_ParamLimits

0xd408,	// (0x000181a9) list_double_ai3_gene_pane_g1

0xd414,	// (0x000181b5) list_double_ai3_gene_pane_t1_ParamLimits

0xd414,	// (0x000181b5) list_double_ai3_gene_pane_t1

0xd430,	// (0x000181d1) list_double_ai3_gene_pane_t2_ParamLimits

0xd430,	// (0x000181d1) list_double_ai3_gene_pane_t2

0xd446,	// (0x000181e7) list_double_ai3_gene_pane_t3_ParamLimits

0xd446,	// (0x000181e7) list_double_ai3_gene_pane_t3

0x0002,

0xfcda,	// (0x0001aa7b) list_double_ai3_gene_pane_t_ParamLimits

0xfcda,	// (0x0001aa7b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd20e,	// (0x00017faf) aid_size_min_col_2

0xd218,	// (0x00017fb9) aid_size_min_msg_ParamLimits

0xd218,	// (0x00017fb9) aid_size_min_msg

0xc2de,	// (0x0001707f) fep_vkb_top_text_pane_g2_ParamLimits

0xc2de,	// (0x0001707f) fep_vkb_top_text_pane_g2

0x0001,

0xfb3a,	// (0x0001a8db) fep_vkb_top_text_pane_g_ParamLimits

0xfb3a,	// (0x0001a8db) fep_vkb_top_text_pane_g

0x49c5,	// (0x0000f766) main_hc_apps_shell_pane

0xd463,	// (0x00018204) grid_hc_apps_pane_ParamLimits

0xd463,	// (0x00018204) grid_hc_apps_pane

0xd472,	// (0x00018213) list_hc_apps_pane

0xd47a,	// (0x0001821b) scroll_pane_cp37_ParamLimits

0xd47a,	// (0x0001821b) scroll_pane_cp37

0xd486,	// (0x00018227) cell_hc_apps_pane_ParamLimits

0xd486,	// (0x00018227) cell_hc_apps_pane

0xd534,	// (0x000182d5) cell_hc_apps_pane_g1_ParamLimits

0xd534,	// (0x000182d5) cell_hc_apps_pane_g1

0xd565,	// (0x00018306) cell_hc_apps_pane_g2_ParamLimits

0xd565,	// (0x00018306) cell_hc_apps_pane_g2

0xd581,	// (0x00018322) cell_hc_apps_pane_g3_ParamLimits

0xd581,	// (0x00018322) cell_hc_apps_pane_g3

0x0002,

0xfce1,	// (0x0001aa82) cell_hc_apps_pane_g_ParamLimits

0xfce1,	// (0x0001aa82) cell_hc_apps_pane_g

0xd5a3,	// (0x00018344) cell_hc_apps_pane_t1_ParamLimits

0xd5a3,	// (0x00018344) cell_hc_apps_pane_t1

0x70e2,	// (0x00011e83) grid_highlight_pane_cp10_ParamLimits

0x70e2,	// (0x00011e83) grid_highlight_pane_cp10

0xd5e3,	// (0x00018384) list_single_hc_apps_pane_ParamLimits

0xd5e3,	// (0x00018384) list_single_hc_apps_pane

0xd63f,	// (0x000183e0) list_single_hc_apps_pane_g1

0xd658,	// (0x000183f9) list_single_hc_apps_pane_g2

0x0001,

0xfce8,	// (0x0001aa89) list_single_hc_apps_pane_g

0xd671,	// (0x00018412) list_single_hc_apps_pane_g2_copy1

0xd68d,	// (0x0001842e) list_single_hc_apps_pane_t1

0x6e3f,	// (0x00011be0) bg_set_opt_pane_cp_ParamLimits

0x4c26,	// (0x0000f9c7) setting_slider_pane_t1_ParamLimits

0x4c3f,	// (0x0000f9e0) setting_slider_pane_t2_ParamLimits

0x4c59,	// (0x0000f9fa) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001a2ff) setting_slider_pane_t_ParamLimits

0x4c71,	// (0x0000fa12) slider_set_pane_ParamLimits

0x5198,	// (0x0000ff39) control_pane_g5_ParamLimits

0x5198,	// (0x0000ff39) control_pane_g5

0xa833,	// (0x000155d4) slider_set_pane_g1_ParamLimits

0x5beb,	// (0x0001098c) slider_set_pane_g2_ParamLimits

0x5bf7,	// (0x00010998) slider_set_pane_g3_ParamLimits

0x5c0b,	// (0x000109ac) slider_set_pane_g4_ParamLimits

0x5c23,	// (0x000109c4) slider_set_pane_g5_ParamLimits

0x5bf7,	// (0x00010998) slider_set_pane_g6_ParamLimits

0x5c39,	// (0x000109da) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0001a700) slider_set_pane_g_ParamLimits

0x8984,	// (0x00013725) navi_icon_text_pane_ParamLimits

0x8e8a,	// (0x00013c2b) aid_fill_nsta_2_ParamLimits

0x8ec9,	// (0x00013c6a) aid_touch_tab_arrow_left_ParamLimits

0x8ed8,	// (0x00013c79) aid_touch_tab_arrow_right_ParamLimits

0x8f45,	// (0x00013ce6) clock_nsta_pane_ParamLimits

0xa30c,	// (0x000150ad) navi_icon_pane_g1_ParamLimits

0xa318,	// (0x000150b9) navi_text_pane_t1_ParamLimits

0xba6c,	// (0x0001680d) navi_icon_text_pane_g1_ParamLimits

0xba78,	// (0x00016819) navi_icon_text_pane_t1_ParamLimits

0xd63f,	// (0x000183e0) list_single_hc_apps_pane_g1_ParamLimits

0xd658,	// (0x000183f9) list_single_hc_apps_pane_g2_ParamLimits

0xfce8,	// (0x0001aa89) list_single_hc_apps_pane_g_ParamLimits

0xd671,	// (0x00018412) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd68d,	// (0x0001842e) list_single_hc_apps_pane_t1_ParamLimits

0x4b30,	// (0x0000f8d1) popup_toolbar2_fixed_window_ParamLimits

0x4b30,	// (0x0000f8d1) popup_toolbar2_fixed_window

0x57a7,	// (0x00010548) popup_toolbar2_float_window

0x6d4b,	// (0x00011aec) bg_popup_sub_pane_cp27

0xd6bb,	// (0x0001845c) grid_toolbar2_float_pane

0x6d4b,	// (0x00011aec) bg_popup_sub_pane_cp26

0xd6bb,	// (0x0001845c) grid_toolbar2_fixed_pane

0xd6c3,	// (0x00018464) cell_toolbar2_fixed_pane_ParamLimits

0xd6c3,	// (0x00018464) cell_toolbar2_fixed_pane

0xd6d3,	// (0x00018474) cell_toolbar2_fixed_pane_g1

0xd6dc,	// (0x0001847d) toolbar2_fixed_button_pane

0x938a,	// (0x0001412b) toolbar2_fixed_button_pane_g1

0x939a,	// (0x0001413b) toolbar2_fixed_button_pane_g2

0x9392,	// (0x00014133) toolbar2_fixed_button_pane_g3

0x93aa,	// (0x0001414b) toolbar2_fixed_button_pane_g4

0x93a2,	// (0x00014143) toolbar2_fixed_button_pane_g5

0x93b2,	// (0x00014153) toolbar2_fixed_button_pane_g6

0x93ba,	// (0x0001415b) toolbar2_fixed_button_pane_g7

0x93ca,	// (0x0001416b) toolbar2_fixed_button_pane_g8

0x93c2,	// (0x00014163) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0001a602) toolbar2_fixed_button_pane_g

0xd6e4,	// (0x00018485) cell_toolbar2_float_pane_ParamLimits

0xd6e4,	// (0x00018485) cell_toolbar2_float_pane

0xd6f5,	// (0x00018496) cell_toolbar2_float_pane_g1

0xd6dc,	// (0x0001847d) toolbar2_fixed_button_pane_cp

0xc03a,	// (0x00016ddb) fep_vkb_accented_list_pane_ParamLimits

0xc03a,	// (0x00016ddb) fep_vkb_accented_list_pane

0x5fae,	// (0x00010d4f) bg_popup_fep_shadow_pane_g9

0x8b04,	// (0x000138a5) bg_popup_fep_shadow_pane_cp3

0x7f34,	// (0x00012cd5) list_accented_list_pane

0xd6fe,	// (0x0001849f) list_single_accented_list_pane_ParamLimits

0xd6fe,	// (0x0001849f) list_single_accented_list_pane

0x8b04,	// (0x000138a5) list_highlight_pane_cp10

0xd70f,	// (0x000184b0) list_single_accented_list_pane_t1

0x56f7,	// (0x00010498) popup_slider_window_ParamLimits

0x56f7,	// (0x00010498) popup_slider_window

0xd205,	// (0x00017fa6) aid_indentation_list_msg

0xd7d3,	// (0x00018574) bg_popup_window_pane_cp19

0xd83b,	// (0x000185dc) popup_slider_window_g1

0xd857,	// (0x000185f8) popup_slider_window_g2

0xd873,	// (0x00018614) popup_slider_window_g3

0x0005,

0xfced,	// (0x0001aa8e) popup_slider_window_g

0xd8d9,	// (0x0001867a) popup_slider_window_t1

0xd94d,	// (0x000186ee) small_volume_slider_vertical_pane

0xbf0c,	// (0x00016cad) small_volume_slider_vertical_pane_g1

0xbf0c,	// (0x00016cad) small_volume_slider_vertical_pane_g2

0xd969,	// (0x0001870a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcff,	// (0x0001aaa0) small_volume_slider_vertical_pane_g

0x48e8,	// (0x0000f689) area_side_right_pane_ParamLimits

0x48e8,	// (0x0000f689) area_side_right_pane

0x6198,	// (0x00010f39) aid_size_side_button_ParamLimits

0x6198,	// (0x00010f39) aid_size_side_button

0x61ac,	// (0x00010f4d) grid_sctrl_middle_pane_ParamLimits

0x61ac,	// (0x00010f4d) grid_sctrl_middle_pane

0x61cb,	// (0x00010f6c) sctrl_sk_bottom_pane

0x61dc,	// (0x00010f7d) sctrl_sk_top_pane

0x61ee,	// (0x00010f8f) aid_touch_sctrl_top

0x61fb,	// (0x00010f9c) bg_sctrl_sk_pane_ParamLimits

0x61fb,	// (0x00010f9c) bg_sctrl_sk_pane

0x6209,	// (0x00010faa) sctrl_sk_top_pane_g1

0x6216,	// (0x00010fb7) sctrl_sk_top_pane_t1

0x61ee,	// (0x00010f8f) aid_touch_sctrl_bottom

0x61fb,	// (0x00010f9c) bg_sctrl_sk_pane_cp_ParamLimits

0x61fb,	// (0x00010f9c) bg_sctrl_sk_pane_cp

0x6231,	// (0x00010fd2) sctrl_sk_bottom_pane_g1

0x6216,	// (0x00010fb7) sctrl_sk_bottom_pane_t1

0x623a,	// (0x00010fdb) cell_sctrl_middle_pane_ParamLimits

0x623a,	// (0x00010fdb) cell_sctrl_middle_pane

0x6255,	// (0x00010ff6) aid_touch_sctrl_middle_ParamLimits

0x6255,	// (0x00010ff6) aid_touch_sctrl_middle

0x6267,	// (0x00011008) bg_sctrl_middle_pane_ParamLimits

0x6267,	// (0x00011008) bg_sctrl_middle_pane

0x5fce,	// (0x00010d6f) cell_sctrl_middle_pane_g1_ParamLimits

0x5fce,	// (0x00010d6f) cell_sctrl_middle_pane_g1

0x6275,	// (0x00011016) cell_sctrl_middle_pane_g2_ParamLimits

0x6275,	// (0x00011016) cell_sctrl_middle_pane_g2

0x0001,

0xfd0b,	// (0x0001aaac) cell_sctrl_middle_pane_g_ParamLimits

0xfd0b,	// (0x0001aaac) cell_sctrl_middle_pane_g

0x938a,	// (0x0001412b) bg_sctrl_middle_pane_g1

0x9392,	// (0x00014133) bg_sctrl_middle_pane_g2

0x939a,	// (0x0001413b) bg_sctrl_middle_pane_g3

0x93a2,	// (0x00014143) bg_sctrl_middle_pane_g4

0x93aa,	// (0x0001414b) bg_sctrl_middle_pane_g5

0x93b2,	// (0x00014153) bg_sctrl_middle_pane_g6

0x93ba,	// (0x0001415b) bg_sctrl_middle_pane_g7

0x93c2,	// (0x00014163) bg_sctrl_middle_pane_g8

0x0007,

0xfd10,	// (0x0001aab1) bg_sctrl_middle_pane_g

0x93ca,	// (0x0001416b) bg_sctrl_middle_pane_g8_copy1

0x938a,	// (0x0001412b) bg_sctrl_sk_pane_g1

0x939a,	// (0x0001413b) bg_sctrl_sk_pane_g2

0x9392,	// (0x00014133) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0001a602) bg_sctrl_sk_pane_g

0x761d,	// (0x000123be) aid_size_touch_scroll_bar

0x93aa,	// (0x0001414b) bg_sctrl_sk_pane_g4

0x93a2,	// (0x00014143) bg_sctrl_sk_pane_g5

0x93b2,	// (0x00014153) bg_sctrl_sk_pane_g6

0x93ba,	// (0x0001415b) bg_sctrl_sk_pane_g7

0x93ca,	// (0x0001416b) bg_sctrl_sk_pane_g8

0x93c2,	// (0x00014163) bg_sctrl_sk_pane_g9

0x5360,	// (0x00010101) popup_fep_china_hwr2_fs_candidate_window

0x536a,	// (0x0001010b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x536a,	// (0x0001010b) popup_fep_china_hwr2_fs_control_window

0x5fce,	// (0x00010d6f) sctrl_sk_top_pane_g2

0x0001,

0xfd06,	// (0x0001aaa7) sctrl_sk_top_pane_g

0xd972,	// (0x00018713) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd972,	// (0x00018713) aid_fep_china_hwr2_fs_cell

0xd984,	// (0x00018725) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd984,	// (0x00018725) bg_popup_fep_shadow_pane_cp4

0xd99b,	// (0x0001873c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd99b,	// (0x0001873c) bg_popup_fep_shadow_pane_cp5

0xd9ad,	// (0x0001874e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9ad,	// (0x0001874e) popup_fep_china_hwr2_fs_control_bar_grid

0xd9bd,	// (0x0001875e) popup_fep_china_hwr2_fs_control_funtion_grid

0xd9c5,	// (0x00018766) aid_fep_china_hwr2_fs_candi_cell

0x6d4b,	// (0x00011aec) bg_popup_fep_shadow_pane_cp6

0xd9cf,	// (0x00018770) popup_fep_china_hwr2_fs_candidate_grid

0xd9d9,	// (0x0001877a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd9d9,	// (0x0001877a) cell_fep_china_hwr2_fs_funtion_grid

0xbf0c,	// (0x00016cad) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd9f1,	// (0x00018792) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd9f1,	// (0x00018792) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd9ff,	// (0x000187a0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd9ff,	// (0x000187a0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd21,	// (0x0001aac2) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd21,	// (0x0001aac2) cell_fep_china_hwr2_fs_funtion_grid_g

0xda15,	// (0x000187b6) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda15,	// (0x000187b6) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda2a,	// (0x000187cb) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda2a,	// (0x000187cb) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd26,	// (0x0001aac7) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd26,	// (0x0001aac7) cell_fep_china_hwr2_fs_funtion_grid_t

0xda46,	// (0x000187e7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda4e,	// (0x000187ef) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda56,	// (0x000187f7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2b,	// (0x0001aacc) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda5e,	// (0x000187ff) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda5e,	// (0x000187ff) cell_fep_china_hwr2_fs_candidate_grid

0xda77,	// (0x00018818) popup_fep_china_hwr2_fs_candidate_grid_g20

0xda7f,	// (0x00018820) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbf0c,	// (0x00016cad) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbf0c,	// (0x00016cad) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3f,	// (0x0001a8e0) cell_fep_china_hwr2_fs_candidate_grid_g

0xda87,	// (0x00018828) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8f52,	// (0x00013cf3) clock_nsta_pane_cp_24_ParamLimits

0x8f52,	// (0x00013cf3) clock_nsta_pane_cp_24

0x8fd0,	// (0x00013d71) indicator_nsta_pane_cp_24_ParamLimits

0x8fd0,	// (0x00013d71) indicator_nsta_pane_cp_24

0xa188,	// (0x00014f29) heading_pane_g1

0x0001,

0xf8c6,	// (0x0001a667) heading_pane_g

0xacb1,	// (0x00015a52) grid_sct_catagory_button_pane

0xace1,	// (0x00015a82) scroll_pane_cp5_ParamLimits

0xbaba,	// (0x0001685b) button_value_adjust_pane_cp5_ParamLimits

0xbaba,	// (0x0001685b) button_value_adjust_pane_cp5

0xbbb6,	// (0x00016957) form2_midp_time_pane_ParamLimits

0xda95,	// (0x00018836) cell_sct_catagory_button_pane_ParamLimits

0xda95,	// (0x00018836) cell_sct_catagory_button_pane

0xbed1,	// (0x00016c72) bg_button_pane_cp01_ParamLimits

0xbed1,	// (0x00016c72) bg_button_pane_cp01

0xbf0c,	// (0x00016cad) cell_sct_catagory_button_pane_g1

0x5736,	// (0x000104d7) popup_tb_extension_window

0xdaa7,	// (0x00018848) aid_size_cell_ext_ParamLimits

0xdaa7,	// (0x00018848) aid_size_cell_ext

0x70e2,	// (0x00011e83) bg_tb_trans_pane_cp1_ParamLimits

0x70e2,	// (0x00011e83) bg_tb_trans_pane_cp1

0xdac7,	// (0x00018868) grid_tb_ext_pane_ParamLimits

0xdac7,	// (0x00018868) grid_tb_ext_pane

0xdaf5,	// (0x00018896) cell_tb_ext_pane_ParamLimits

0xdaf5,	// (0x00018896) cell_tb_ext_pane

0xdb0c,	// (0x000188ad) cell_tb_ext_pane_g1_ParamLimits

0xdb0c,	// (0x000188ad) cell_tb_ext_pane_g1

0xdb29,	// (0x000188ca) cell_tb_ext_pane_t1

0x70e2,	// (0x00011e83) list_highlight_pane_cp11_ParamLimits

0x70e2,	// (0x00011e83) list_highlight_pane_cp11

0x4b4f,	// (0x0000f8f0) popup_uni_indicator_window_ParamLimits

0x4b4f,	// (0x0000f8f0) popup_uni_indicator_window

0x7c69,	// (0x00012a0a) bg_popup_sub_pane_cp14

0xdb44,	// (0x000188e5) list_uniindi_pane

0xdb50,	// (0x000188f1) uniindi_top_pane

0x70e2,	// (0x00011e83) bg_uniindi_top_pane

0xdb6f,	// (0x00018910) uniindi_top_pane_g1

0xdb85,	// (0x00018926) uniindi_top_pane_g2

0x0003,

0xfd32,	// (0x0001aad3) uniindi_top_pane_g

0xdbaf,	// (0x00018950) uniindi_top_pane_t1

0xdbd9,	// (0x0001897a) list_single_uniindi_pane_ParamLimits

0xdbd9,	// (0x0001897a) list_single_uniindi_pane

0xbf0c,	// (0x00016cad) bg_uniindi_top_pane_g1

0xdbec,	// (0x0001898d) list_single_uniindi_pane_g1

0xdbff,	// (0x000189a0) list_single_uniindi_pane_t1

0x49c5,	// (0x0000f766) control_bg_pane

0xdc24,	// (0x000189c5) bg_sctrl_sk_pane_cp1

0xdc2d,	// (0x000189ce) bg_sctrl_sk_pane_cp2

0xdc36,	// (0x000189d7) control_bg_pane_g1

0xdc3f,	// (0x000189e0) control_bg_pane_g2

0x0001,

0xfd3b,	// (0x0001aadc) control_bg_pane_g

0xb914,	// (0x000166b5) cell_indicator_nsta_pane_g1_ParamLimits

0xb922,	// (0x000166c3) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa3,	// (0x0001a844) cell_indicator_nsta_pane_g_ParamLimits

0xbc3e,	// (0x000169df) form2_midp_time_pane_t1_ParamLimits

0x52c8,	// (0x00010069) main_idle_act4_pane_ParamLimits

0x52c8,	// (0x00010069) main_idle_act4_pane

0x5736,	// (0x000104d7) popup_tb_extension_window_ParamLimits

0xdae5,	// (0x00018886) tb_ext_find_pane_ParamLimits

0xdae5,	// (0x00018886) tb_ext_find_pane

0xdc48,	// (0x000189e9) ai_gene_pane_1_cp1

0x8c4b,	// (0x000139ec) ai_gene_pane_2_cp1

0xdc50,	// (0x000189f1) list_single_idle_plugin_calendar_pane

0xdc59,	// (0x000189fa) list_single_idle_plugin_notification_pane

0xdc62,	// (0x00018a03) list_single_idle_plugin_player_pane

0xdc6b,	// (0x00018a0c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc6b,	// (0x00018a0c) list_single_idle_plugin_shortcut_pane

0xdc8d,	// (0x00018a2e) main_idle_act4_pane_t1

0xdc9f,	// (0x00018a40) main_idle_act4_pane_t2

0x0001,

0xfd40,	// (0x0001aae1) main_idle_act4_pane_t

0xdcb1,	// (0x00018a52) middle_sk_idle_act4_pane_ParamLimits

0xdcb1,	// (0x00018a52) middle_sk_idle_act4_pane

0xdcc7,	// (0x00018a68) popup_clock_digital_analogue_window_cp2

0xdce1,	// (0x00018a82) shortcut_wheel_idle_act4_pane_ParamLimits

0xdce1,	// (0x00018a82) shortcut_wheel_idle_act4_pane

0xbf0c,	// (0x00016cad) shortcut_wheel_idle_act4_pane_g1

0xbf0c,	// (0x00016cad) shortcut_wheel_idle_act4_pane_g2

0xbf0c,	// (0x00016cad) shortcut_wheel_idle_act4_pane_g3

0xbf0c,	// (0x00016cad) shortcut_wheel_idle_act4_pane_g4

0xbf0c,	// (0x00016cad) shortcut_wheel_idle_act4_pane_g5

0xdcf5,	// (0x00018a96) shortcut_wheel_idle_act4_pane_g6

0xdcfd,	// (0x00018a9e) shortcut_wheel_idle_act4_pane_g7

0xdd05,	// (0x00018aa6) shortcut_wheel_idle_act4_pane_g8

0xdd0d,	// (0x00018aae) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd45,	// (0x0001aae6) shortcut_wheel_idle_act4_pane_g

0xc18a,	// (0x00016f2b) middle_sk_idle_act4_pane_g1_ParamLimits

0xc18a,	// (0x00016f2b) middle_sk_idle_act4_pane_g1

0xdd71,	// (0x00018b12) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd71,	// (0x00018b12) middle_sk_idle_act4_pane_g2

0x0001,

0xfd68,	// (0x0001ab09) middle_sk_idle_act4_pane_g_ParamLimits

0xfd68,	// (0x0001ab09) middle_sk_idle_act4_pane_g

0xdd7d,	// (0x00018b1e) middle_sk_idle_act4_pane_t1_ParamLimits

0xdd7d,	// (0x00018b1e) middle_sk_idle_act4_pane_t1

0xdd9a,	// (0x00018b3b) grid_ai_shortcut_pane_ParamLimits

0xdd9a,	// (0x00018b3b) grid_ai_shortcut_pane

0xddb3,	// (0x00018b54) list_highlight_pane_cp16_ParamLimits

0xddb3,	// (0x00018b54) list_highlight_pane_cp16

0xddc0,	// (0x00018b61) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddc0,	// (0x00018b61) list_single_idle_plugin_shortcut_pane_g1

0xddcc,	// (0x00018b6d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xddcc,	// (0x00018b6d) list_single_idle_plugin_shortcut_pane_g2

0xdde4,	// (0x00018b85) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdde4,	// (0x00018b85) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6d,	// (0x0001ab0e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6d,	// (0x0001ab0e) list_single_idle_plugin_shortcut_pane_g

0xddf7,	// (0x00018b98) cell_ai_shortcut_pane_ParamLimits

0xddf7,	// (0x00018b98) cell_ai_shortcut_pane

0xde1b,	// (0x00018bbc) cell_ai_shortcut_pane_g1_ParamLimits

0xde1b,	// (0x00018bbc) cell_ai_shortcut_pane_g1

0xdc48,	// (0x000189e9) ai_gene_pane_1_cp2

0xde3d,	// (0x00018bde) ai_gene_pane_2_cp2

0xde45,	// (0x00018be6) list_highlight_pane_cp15

0xde4e,	// (0x00018bef) list_single_idle_plugin_calendar_pane_g1

0xde45,	// (0x00018be6) list_highlight_pane_cp17

0xde56,	// (0x00018bf7) list_single_idle_plugin_calendar_pane_g1_copy1

0xde5e,	// (0x00018bff) list_single_idle_plugin_player_pane_g1

0xaf0a,	// (0x00015cab) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd74,	// (0x0001ab15) list_single_idle_plugin_player_pane_g

0xde66,	// (0x00018c07) list_single_idle_plugin_player_pane_t1

0xde74,	// (0x00018c15) list_single_idle_plugin_player_pane_t2

0xde82,	// (0x00018c23) list_single_idle_plugin_player_pane_t3

0xde90,	// (0x00018c31) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd79,	// (0x0001ab1a) list_single_idle_plugin_player_pane_t

0xde9e,	// (0x00018c3f) wait_bar_pane_cp15

0xdea6,	// (0x00018c47) grid_ai_notification_pane

0xaf0a,	// (0x00015cab) list_single_idle_plugin_notification_pane_g1

0xdeaf,	// (0x00018c50) cell_ai_notification_pane_ParamLimits

0xdeaf,	// (0x00018c50) cell_ai_notification_pane

0xdebc,	// (0x00018c5d) cell_ai_notification_pane_g1

0xdec4,	// (0x00018c65) cell_ai_notification_pane_t1

0xded2,	// (0x00018c73) tb_ext_find_button_pane

0xdeda,	// (0x00018c7b) tb_ext_find_pane_g1

0xdee2,	// (0x00018c83) tb_ext_find_pane_t1

0x8462,	// (0x00013203) tb_ext_find_button_pane_g1

0xdef0,	// (0x00018c91) tb_ext_find_button_pane_g2

0x0001,

0xfd82,	// (0x0001ab23) tb_ext_find_button_pane_g

0xdc8d,	// (0x00018a2e) main_idle_act4_pane_t1_ParamLimits

0xdc9f,	// (0x00018a40) main_idle_act4_pane_t2_ParamLimits

0xfd40,	// (0x0001aae1) main_idle_act4_pane_t_ParamLimits

0xdcc7,	// (0x00018a68) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdcd5,	// (0x00018a76) sat_plugin_idle_act4_pane_ParamLimits

0xdcd5,	// (0x00018a76) sat_plugin_idle_act4_pane

0xdef9,	// (0x00018c9a) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdef9,	// (0x00018c9a) sat_plugin_idle_act4_pane_t1

0xdf0c,	// (0x00018cad) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf0c,	// (0x00018cad) sat_plugin_idle_act4_pane_t2

0xdf1f,	// (0x00018cc0) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf1f,	// (0x00018cc0) sat_plugin_idle_act4_pane_t3

0xdf32,	// (0x00018cd3) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf32,	// (0x00018cd3) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd87,	// (0x0001ab28) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd87,	// (0x0001ab28) sat_plugin_idle_act4_pane_t

0x4a8a,	// (0x0000f82b) popup_battery_window_ParamLimits

0x4a8a,	// (0x0000f82b) popup_battery_window

0x70e2,	// (0x00011e83) bg_popup_sub_pane_cp25_ParamLimits

0x70e2,	// (0x00011e83) bg_popup_sub_pane_cp25

0xdf45,	// (0x00018ce6) popup_battery_window_g1_ParamLimits

0xdf45,	// (0x00018ce6) popup_battery_window_g1

0xdf51,	// (0x00018cf2) popup_battery_window_t1_ParamLimits

0xdf51,	// (0x00018cf2) popup_battery_window_t1

0xdf63,	// (0x00018d04) popup_battery_window_t2_ParamLimits

0xdf63,	// (0x00018d04) popup_battery_window_t2

0x0001,

0xfd90,	// (0x0001ab31) popup_battery_window_t_ParamLimits

0xfd90,	// (0x0001ab31) popup_battery_window_t

0x8b18,	// (0x000138b9) midp_canvas_pane_ParamLimits

0x8b8f,	// (0x00013930) midp_keypad_pane_ParamLimits

0x8b8f,	// (0x00013930) midp_keypad_pane

0x8e30,	// (0x00013bd1) main_midp_pane_ParamLimits

0xb97e,	// (0x0001671f) signal_pane_g2_cp_ParamLimits

0xdf80,	// (0x00018d21) aid_size_cell_midp_keypad_ParamLimits

0xdf80,	// (0x00018d21) aid_size_cell_midp_keypad

0xdf9a,	// (0x00018d3b) midp_keyp_game_grid_pane_ParamLimits

0xdf9a,	// (0x00018d3b) midp_keyp_game_grid_pane

0xdfba,	// (0x00018d5b) midp_keyp_rocker_pane_ParamLimits

0xdfba,	// (0x00018d5b) midp_keyp_rocker_pane

0xdff3,	// (0x00018d94) midp_keyp_sk_left_pane_ParamLimits

0xdff3,	// (0x00018d94) midp_keyp_sk_left_pane

0xe04d,	// (0x00018dee) midp_keyp_sk_right_pane_ParamLimits

0xe04d,	// (0x00018dee) midp_keyp_sk_right_pane

0x6d4b,	// (0x00011aec) bg_button_pane_cp03

0xe0a7,	// (0x00018e48) midp_keyp_sk_left_pane_g1

0x6d4b,	// (0x00011aec) bg_button_pane_cp04

0xe0a7,	// (0x00018e48) midp_keyp_sk_right_pane_g1

0xbf0c,	// (0x00016cad) midp_keyp_rocker_pane_g1

0xe0b0,	// (0x00018e51) keyp_game_cell_pane_ParamLimits

0xe0b0,	// (0x00018e51) keyp_game_cell_pane

0x6d4b,	// (0x00011aec) bg_button_pane_cp02

0xe0c3,	// (0x00018e64) keyp_game_cell_pane_g1

0x4ace,	// (0x0000f86f) popup_fep_vkb2_window_ParamLimits

0x4ace,	// (0x0000f86f) popup_fep_vkb2_window

0x6293,	// (0x00011034) aid_size_cell_vkb2_ParamLimits

0x6293,	// (0x00011034) aid_size_cell_vkb2

0x62e7,	// (0x00011088) popup_fep_vkb2_window_g1_ParamLimits

0x62e7,	// (0x00011088) popup_fep_vkb2_window_g1

0x632f,	// (0x000110d0) vkb2_area_bottom_pane_ParamLimits

0x632f,	// (0x000110d0) vkb2_area_bottom_pane

0x637b,	// (0x0001111c) vkb2_area_keypad_pane_ParamLimits

0x637b,	// (0x0001111c) vkb2_area_keypad_pane

0x63bd,	// (0x0001115e) vkb2_area_top_pane_ParamLimits

0x63bd,	// (0x0001115e) vkb2_area_top_pane

0x6437,	// (0x000111d8) vkb2_top_entry_pane_ParamLimits

0x6437,	// (0x000111d8) vkb2_top_entry_pane

0x6461,	// (0x00011202) vkb2_top_grid_left_pane_ParamLimits

0x6461,	// (0x00011202) vkb2_top_grid_left_pane

0x647f,	// (0x00011220) vkb2_top_grid_right_pane_ParamLimits

0x647f,	// (0x00011220) vkb2_top_grid_right_pane

0x649d,	// (0x0001123e) vkb2_cell_keypad_pane_ParamLimits

0x649d,	// (0x0001123e) vkb2_cell_keypad_pane

0x656e,	// (0x0001130f) vkb2_area_bottom_grid_pane_ParamLimits

0x656e,	// (0x0001130f) vkb2_area_bottom_grid_pane

0x6594,	// (0x00011335) vkb2_area_bottom_pane_g1_ParamLimits

0x6594,	// (0x00011335) vkb2_area_bottom_pane_g1

0x65b8,	// (0x00011359) vkb2_area_bottom_pane_g2_ParamLimits

0x65b8,	// (0x00011359) vkb2_area_bottom_pane_g2

0x65e6,	// (0x00011387) vkb2_area_bottom_pane_g3_ParamLimits

0x65e6,	// (0x00011387) vkb2_area_bottom_pane_g3

0x0002,

0xfd95,	// (0x0001ab36) vkb2_area_bottom_pane_g_ParamLimits

0xfd95,	// (0x0001ab36) vkb2_area_bottom_pane_g

0x6647,	// (0x000113e8) vkb2_top_cell_left_pane_ParamLimits

0x6647,	// (0x000113e8) vkb2_top_cell_left_pane

0xe0d4,	// (0x00018e75) vkb2_top_entry_pane_g1_ParamLimits

0xe0d4,	// (0x00018e75) vkb2_top_entry_pane_g1

0xe0e2,	// (0x00018e83) vkb2_top_entry_pane_t1_ParamLimits

0xe0e2,	// (0x00018e83) vkb2_top_entry_pane_t1

0xe114,	// (0x00018eb5) vkb2_top_entry_pane_t2_ParamLimits

0xe114,	// (0x00018eb5) vkb2_top_entry_pane_t2

0xe146,	// (0x00018ee7) vkb2_top_entry_pane_t3_ParamLimits

0xe146,	// (0x00018ee7) vkb2_top_entry_pane_t3

0x0002,

0xfd9c,	// (0x0001ab3d) vkb2_top_entry_pane_t_ParamLimits

0xfd9c,	// (0x0001ab3d) vkb2_top_entry_pane_t

0x6694,	// (0x00011435) vkb2_top_grid_right_pane_g1_ParamLimits

0x6694,	// (0x00011435) vkb2_top_grid_right_pane_g1

0x66aa,	// (0x0001144b) vkb2_top_grid_right_pane_g2_ParamLimits

0x66aa,	// (0x0001144b) vkb2_top_grid_right_pane_g2

0x66c2,	// (0x00011463) vkb2_top_grid_right_pane_g3_ParamLimits

0x66c2,	// (0x00011463) vkb2_top_grid_right_pane_g3

0x66da,	// (0x0001147b) vkb2_top_grid_right_pane_g4_ParamLimits

0x66da,	// (0x0001147b) vkb2_top_grid_right_pane_g4

0x0003,

0xfda3,	// (0x0001ab44) vkb2_top_grid_right_pane_g_ParamLimits

0xfda3,	// (0x0001ab44) vkb2_top_grid_right_pane_g

0x66f0,	// (0x00011491) vkb2_top_cell_left_pane_g1

0x6707,	// (0x000114a8) vkb2_cell_keypad_pane_g1_ParamLimits

0x6707,	// (0x000114a8) vkb2_cell_keypad_pane_g1

0xe18b,	// (0x00018f2c) vkb2_cell_keypad_pane_t1_ParamLimits

0xe18b,	// (0x00018f2c) vkb2_cell_keypad_pane_t1

0x6715,	// (0x000114b6) vkb2_cell_bottom_grid_pane_ParamLimits

0x6715,	// (0x000114b6) vkb2_cell_bottom_grid_pane

0x674e,	// (0x000114ef) vkb2_cell_bottom_grid_pane_g1

0xdd15,	// (0x00018ab6) aid_call2_pane_cp02

0xdd1d,	// (0x00018abe) aid_call_pane_cp02

0xdd25,	// (0x00018ac6) clock_digital_number_pane_cp10

0xdd2d,	// (0x00018ace) clock_digital_number_pane_cp11

0xdd35,	// (0x00018ad6) clock_digital_number_pane_cp12

0xdd3d,	// (0x00018ade) clock_digital_number_pane_cp13

0xdd45,	// (0x00018ae6) clock_digital_separator_pane_cp10

0x8462,	// (0x00013203) popup_clock_digital_analogue_window_cp2_g1

0x8462,	// (0x00013203) popup_clock_digital_analogue_window_cp2_g2

0xdd4d,	// (0x00018aee) popup_clock_digital_analogue_window_cp2_g3

0x8462,	// (0x00013203) popup_clock_digital_analogue_window_cp2_g4

0xdd4d,	// (0x00018aee) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd58,	// (0x0001aaf9) popup_clock_digital_analogue_window_cp2_g

0xdd55,	// (0x00018af6) popup_clock_digital_analogue_window_cp2_t1

0xdd63,	// (0x00018b04) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd63,	// (0x0001ab04) popup_clock_digital_analogue_window_cp2_t

0xbf0c,	// (0x00016cad) clock_digital_number_pane_cp10_g1

0xbf0c,	// (0x00016cad) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001a8e0) clock_digital_number_pane_cp10_g

0xbf0c,	// (0x00016cad) clock_digital_separator_pane_cp10_g1

0xbf0c,	// (0x00016cad) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001a8e0) clock_digital_separator_pane_cp10_g

0xdb91,	// (0x00018932) uniindi_top_pane_g3

0xdba2,	// (0x00018943) uniindi_top_pane_g4

0x6528,	// (0x000112c9) vkb2_row_keypad_pane_ParamLimits

0x6528,	// (0x000112c9) vkb2_row_keypad_pane

0x676a,	// (0x0001150b) vkb2_cell_t_keypad_pane_ParamLimits

0x676a,	// (0x0001150b) vkb2_cell_t_keypad_pane

0x677a,	// (0x0001151b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x677a,	// (0x0001151b) vkb2_cell_t_keypad_pane_cp08

0x678d,	// (0x0001152e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x678d,	// (0x0001152e) vkb2_cell_t_keypad_pane_cp09

0x67a1,	// (0x00011542) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x67a1,	// (0x00011542) vkb2_cell_t_keypad_pane_cp01

0x67b2,	// (0x00011553) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x67b2,	// (0x00011553) vkb2_cell_t_keypad_pane_cp02

0x67c3,	// (0x00011564) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x67c3,	// (0x00011564) vkb2_cell_t_keypad_pane_cp03

0x67d4,	// (0x00011575) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x67d4,	// (0x00011575) vkb2_cell_t_keypad_pane_cp04

0x67e5,	// (0x00011586) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x67e5,	// (0x00011586) vkb2_cell_t_keypad_pane_cp05

0x67f6,	// (0x00011597) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x67f6,	// (0x00011597) vkb2_cell_t_keypad_pane_cp06

0x6807,	// (0x000115a8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6807,	// (0x000115a8) vkb2_cell_t_keypad_pane_cp07

0x6818,	// (0x000115b9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6818,	// (0x000115b9) vkb2_cell_t_keypad_pane_cp10

0x5fce,	// (0x00010d6f) vkb2_cell_t_keypad_pane_g1

0xe1a2,	// (0x00018f43) vkb2_cell_t_keypad_pane_t1

0x49c5,	// (0x0000f766) popup_grid_graphic2_window

0xe1b4,	// (0x00018f55) aid_size_cell_graphic2_ParamLimits

0xe1b4,	// (0x00018f55) aid_size_cell_graphic2

0xe1ec,	// (0x00018f8d) bg_popup_window_pane_cp21_ParamLimits

0xe1ec,	// (0x00018f8d) bg_popup_window_pane_cp21

0xe1fa,	// (0x00018f9b) graphic2_pages_pane_ParamLimits

0xe1fa,	// (0x00018f9b) graphic2_pages_pane

0xe240,	// (0x00018fe1) grid_graphic2_control_pane_ParamLimits

0xe240,	// (0x00018fe1) grid_graphic2_control_pane

0xe27e,	// (0x0001901f) grid_graphic2_pane_ParamLimits

0xe27e,	// (0x0001901f) grid_graphic2_pane

0xe2f2,	// (0x00019093) cell_graphic2_pane

0x49c5,	// (0x0000f766) main_comp_mode_pane

0xd39c,	// (0x0001813d) list_ai3_gene_pane_ParamLimits

0xd7d3,	// (0x00018574) bg_popup_window_pane_cp19_ParamLimits

0xd7df,	// (0x00018580) bg_touch_area_indi_pane_ParamLimits

0xd7df,	// (0x00018580) bg_touch_area_indi_pane

0xd7f5,	// (0x00018596) bg_touch_area_indi_pane_cp01_ParamLimits

0xd7f5,	// (0x00018596) bg_touch_area_indi_pane_cp01

0xd80b,	// (0x000185ac) bg_touch_area_indi_pane_cp02_ParamLimits

0xd80b,	// (0x000185ac) bg_touch_area_indi_pane_cp02

0xd821,	// (0x000185c2) bg_touch_area_indi_pane_cp03_ParamLimits

0xd821,	// (0x000185c2) bg_touch_area_indi_pane_cp03

0xd83b,	// (0x000185dc) popup_slider_window_g1_ParamLimits

0xd857,	// (0x000185f8) popup_slider_window_g2_ParamLimits

0xd873,	// (0x00018614) popup_slider_window_g3_ParamLimits

0xfced,	// (0x0001aa8e) popup_slider_window_g_ParamLimits

0xd8d9,	// (0x0001867a) popup_slider_window_t1_ParamLimits

0xd94d,	// (0x000186ee) small_volume_slider_vertical_pane_ParamLimits

0xe2f2,	// (0x00019093) cell_graphic2_pane_ParamLimits

0xe341,	// (0x000190e2) bg_button_pane_cp10_ParamLimits

0xe341,	// (0x000190e2) bg_button_pane_cp10

0xe354,	// (0x000190f5) bg_button_pane_cp11_ParamLimits

0xe354,	// (0x000190f5) bg_button_pane_cp11

0xe367,	// (0x00019108) graphic2_pages_pane_g1_ParamLimits

0xe367,	// (0x00019108) graphic2_pages_pane_g1

0xe382,	// (0x00019123) graphic2_pages_pane_g2_ParamLimits

0xe382,	// (0x00019123) graphic2_pages_pane_g2

0x0001,

0xfdb1,	// (0x0001ab52) graphic2_pages_pane_g_ParamLimits

0xfdb1,	// (0x0001ab52) graphic2_pages_pane_g

0xe39a,	// (0x0001913b) graphic2_pages_pane_t1_ParamLimits

0xe39a,	// (0x0001913b) graphic2_pages_pane_t1

0xe3b2,	// (0x00019153) cell_graphic2_control_pane_ParamLimits

0xe3b2,	// (0x00019153) cell_graphic2_control_pane

0xe3d0,	// (0x00019171) cell_graphic2_pane_g1_ParamLimits

0xe3d0,	// (0x00019171) cell_graphic2_pane_g1

0xe3dd,	// (0x0001917e) cell_graphic2_pane_g2_ParamLimits

0xe3dd,	// (0x0001917e) cell_graphic2_pane_g2

0xe3ea,	// (0x0001918b) cell_graphic2_pane_g3_ParamLimits

0xe3ea,	// (0x0001918b) cell_graphic2_pane_g3

0xe3f7,	// (0x00019198) cell_graphic2_pane_g4_ParamLimits

0xe3f7,	// (0x00019198) cell_graphic2_pane_g4

0xe404,	// (0x000191a5) cell_graphic2_pane_g5_ParamLimits

0xe404,	// (0x000191a5) cell_graphic2_pane_g5

0x0004,

0xfdb6,	// (0x0001ab57) cell_graphic2_pane_g_ParamLimits

0xfdb6,	// (0x0001ab57) cell_graphic2_pane_g

0xe41f,	// (0x000191c0) cell_graphic2_pane_t1_ParamLimits

0xe41f,	// (0x000191c0) cell_graphic2_pane_t1

0x94ac,	// (0x0001424d) grid_highlight_pane_cp11_ParamLimits

0x94ac,	// (0x0001424d) grid_highlight_pane_cp11

0x70e2,	// (0x00011e83) bg_button_pane_cp05

0xe456,	// (0x000191f7) cell_graphic2_control_pane_g1

0xbf0c,	// (0x00016cad) bg_touch_area_indi_pane_g1

0xe47e,	// (0x0001921f) aid_cmod_rocker_key_size

0xe488,	// (0x00019229) aid_cmode_itu_key_size

0xe492,	// (0x00019233) main_cmode_video_pane

0xe49c,	// (0x0001923d) main_comp_mode_itu_pane

0xe4a8,	// (0x00019249) main_comp_mode_rocker_pane

0xe4b4,	// (0x00019255) cell_cmode_rocker_pane_ParamLimits

0xe4b4,	// (0x00019255) cell_cmode_rocker_pane

0xe4c6,	// (0x00019267) cell_cmode_itu_pane_ParamLimits

0xe4c6,	// (0x00019267) cell_cmode_itu_pane

0x7c69,	// (0x00012a0a) bg_button_pane_cp06_ParamLimits

0x7c69,	// (0x00012a0a) bg_button_pane_cp06

0xc18a,	// (0x00016f2b) cell_cmode_rocker_pane_g1_ParamLimits

0xc18a,	// (0x00016f2b) cell_cmode_rocker_pane_g1

0xd9f1,	// (0x00018792) cell_cmode_rocker_pane_g2_ParamLimits

0xd9f1,	// (0x00018792) cell_cmode_rocker_pane_g2

0x0001,

0xfdc6,	// (0x0001ab67) cell_cmode_rocker_pane_g_ParamLimits

0xfdc6,	// (0x0001ab67) cell_cmode_rocker_pane_g

0x6d4b,	// (0x00011aec) bg_button_pane_cp07

0xe4db,	// (0x0001927c) cell_cmode_itu_pane_g1

0xe4e4,	// (0x00019285) cell_cmode_itu_pane_t1

0xe4f2,	// (0x00019293) cell_cmode_itu_pane_t2

0x0001,

0xfdcb,	// (0x0001ab6c) cell_cmode_itu_pane_t

0xdc14,	// (0x000189b5) aid_touch_ctrl_left

0xdc1c,	// (0x000189bd) aid_touch_ctrl_right

0x6d4b,	// (0x00011aec) compa_mode_pane

0xe500,	// (0x000192a1) aid_cmod_rocker_key_size_cp

0xe50a,	// (0x000192ab) aid_cmode_itu_key_size_cp

0xe514,	// (0x000192b5) compa_mode_pane_g1

0xe51c,	// (0x000192bd) compa_mode_pane_g2

0xe524,	// (0x000192c5) compa_mode_pane_g3

0x0002,

0xfdd0,	// (0x0001ab71) compa_mode_pane_g

0xe52c,	// (0x000192cd) main_comp_mode_itu_pane_cp

0xe534,	// (0x000192d5) main_comp_mode_rocker_pane_cp

0xe53c,	// (0x000192dd) cell_cmode_itu_pane_cp_ParamLimits

0xe53c,	// (0x000192dd) cell_cmode_itu_pane_cp

0xe551,	// (0x000192f2) cell_cmode_rocker_pane_cp_ParamLimits

0xe551,	// (0x000192f2) cell_cmode_rocker_pane_cp

0x7c69,	// (0x00012a0a) bg_button_pane_cp06_cp_ParamLimits

0x7c69,	// (0x00012a0a) bg_button_pane_cp06_cp

0xc18a,	// (0x00016f2b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc18a,	// (0x00016f2b) cell_cmode_rocker_pane_g1_cp

0xbf0c,	// (0x00016cad) cell_cmode_rocker_pane_g2_cp

0x6d4b,	// (0x00011aec) bg_button_pane_cp07_cp

0xa9e4,	// (0x00015785) cell_cmode_itu_pane_g1_cp

0xe563,	// (0x00019304) cell_cmode_itu_pane_t1_cp

0xe563,	// (0x00019304) cell_cmode_itu_pane_t2_cp

0xa9d1,	// (0x00015772) settings_code_pane_cp2

0x6e3f,	// (0x00011be0) bg_popup_window_pane_cp3_ParamLimits

0x72e2,	// (0x00012083) heading_pane_cp3_ParamLimits

0x72ee,	// (0x0001208f) listscroll_popup_graphic_pane_ParamLimits

0x5d77,	// (0x00010b18) fep_hwr_aid_pane_ParamLimits

0x61ee,	// (0x00010f8f) aid_touch_sctrl_top_ParamLimits

0x6209,	// (0x00010faa) sctrl_sk_top_pane_g1_ParamLimits

0x5fce,	// (0x00010d6f) sctrl_sk_top_pane_g2_ParamLimits

0xfd06,	// (0x0001aaa7) sctrl_sk_top_pane_g_ParamLimits

0x6216,	// (0x00010fb7) sctrl_sk_top_pane_t1_ParamLimits

0x61ee,	// (0x00010f8f) aid_touch_sctrl_bottom_ParamLimits

0x6216,	// (0x00010fb7) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb5d,	// (0x000188fe) aid_area_touch_clock

0x63ff,	// (0x000111a0) aid_vkb2_area_top_pane_cell_ParamLimits

0x63ff,	// (0x000111a0) aid_vkb2_area_top_pane_cell

0x654a,	// (0x000112eb) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x654a,	// (0x000112eb) aid_vkb2_area_bottom_pane_cell

0xe0cc,	// (0x00018e6d) popup_char_count_window

0xe571,	// (0x00019312) popup_char_count_window_g1

0xe57a,	// (0x0001931b) popup_char_count_window_g2

0xe583,	// (0x00019324) popup_char_count_window_g3

0x0002,

0xfdd7,	// (0x0001ab78) popup_char_count_window_g

0xe58c,	// (0x0001932d) popup_char_count_window_t1

0x62c5,	// (0x00011066) popup_fep_char_preview_window_ParamLimits

0x62c5,	// (0x00011066) popup_fep_char_preview_window

0x641d,	// (0x000111be) vkb2_top_candi_pane_ParamLimits

0x641d,	// (0x000111be) vkb2_top_candi_pane

0xe59a,	// (0x0001933b) cell_vkb2_top_candi_pane_ParamLimits

0xe59a,	// (0x0001933b) cell_vkb2_top_candi_pane

0x682d,	// (0x000115ce) bg_popup_fep_char_preview_window_ParamLimits

0x682d,	// (0x000115ce) bg_popup_fep_char_preview_window

0x683b,	// (0x000115dc) popup_fep_char_preview_window_t1_ParamLimits

0x683b,	// (0x000115dc) popup_fep_char_preview_window_t1

0xe5e7,	// (0x00019388) bg_popup_fep_char_preview_window_g1

0xe5ef,	// (0x00019390) bg_popup_fep_char_preview_window_g2

0xe5f7,	// (0x00019398) bg_popup_fep_char_preview_window_g3

0xe5ff,	// (0x000193a0) bg_popup_fep_char_preview_window_g4

0xe607,	// (0x000193a8) bg_popup_fep_char_preview_window_g5

0x6875,	// (0x00011616) bg_popup_fep_char_preview_window_g6

0xe60f,	// (0x000193b0) bg_popup_fep_char_preview_window_g7

0xe617,	// (0x000193b8) bg_popup_fep_char_preview_window_g8

0xe61f,	// (0x000193c0) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdde,	// (0x0001ab7f) bg_popup_fep_char_preview_window_g

0x5fce,	// (0x00010d6f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5fce,	// (0x00010d6f) cell_vkb2_top_candi_pane_g1

0x5fdc,	// (0x00010d7d) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5fdc,	// (0x00010d7d) cell_vkb2_top_candi_pane_g2

0xe16a,	// (0x00018f0b) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe16a,	// (0x00018f0b) cell_vkb2_top_candi_pane_g3

0x687d,	// (0x0001161e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x687d,	// (0x0001161e) cell_vkb2_top_candi_pane_g4

0xc7fa,	// (0x0001759b) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc7fa,	// (0x0001759b) cell_vkb2_top_candi_pane_g5

0x689e,	// (0x0001163f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x689e,	// (0x0001163f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf1,	// (0x0001ab92) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf1,	// (0x0001ab92) cell_vkb2_top_candi_pane_g

0x68ac,	// (0x0001164d) cell_vkb2_top_candi_pane_t1

0x5bd7,	// (0x00010978) aid_size_touch_slider_mark_ParamLimits

0x5bd7,	// (0x00010978) aid_size_touch_slider_mark

0xe230,	// (0x00018fd1) grid_graphic2_catg_pane_ParamLimits

0xe230,	// (0x00018fd1) grid_graphic2_catg_pane

0xe2ce,	// (0x0001906f) popup_grid_graphic2_window_t1_ParamLimits

0xe2ce,	// (0x0001906f) popup_grid_graphic2_window_t1

0xe2e0,	// (0x00019081) popup_grid_graphic2_window_t2_ParamLimits

0xe2e0,	// (0x00019081) popup_grid_graphic2_window_t2

0x0001,

0xfdac,	// (0x0001ab4d) popup_grid_graphic2_window_t_ParamLimits

0xfdac,	// (0x0001ab4d) popup_grid_graphic2_window_t

0x70e2,	// (0x00011e83) bg_button_pane_cp05_ParamLimits

0xe456,	// (0x000191f7) cell_graphic2_control_pane_g1_ParamLimits

0xe627,	// (0x000193c8) cell_graphic2_catg_pane_ParamLimits

0xe627,	// (0x000193c8) cell_graphic2_catg_pane

0x6d4b,	// (0x00011aec) bg_button_pane_cp12

0xe639,	// (0x000193da) cell_graphic2_catg_pane_g1

0xdb29,	// (0x000188ca) cell_tb_ext_pane_t1_ParamLimits

0x6667,	// (0x00011408) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6667,	// (0x00011408) vkb2_top_cell_right_narrow_pane

0x667f,	// (0x00011420) vkb2_top_cell_right_wide_pane_ParamLimits

0x667f,	// (0x00011420) vkb2_top_cell_right_wide_pane

0x5d69,	// (0x00010b0a) bg_vkb2_func_pane_ParamLimits

0x5d69,	// (0x00010b0a) bg_vkb2_func_pane

0x66f0,	// (0x00011491) vkb2_top_cell_left_pane_g1_ParamLimits

0x5d69,	// (0x00010b0a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5d69,	// (0x00010b0a) bg_vkb2_fuc_pane_cp03

0x674e,	// (0x000114ef) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9392,	// (0x00014133) bg_vkb2_func_pane_g1

0x939a,	// (0x0001413b) bg_vkb2_func_pane_g2

0x93aa,	// (0x0001414b) bg_vkb2_func_pane_g3

0x93a2,	// (0x00014143) bg_vkb2_func_pane_g4

0x93b2,	// (0x00014153) bg_vkb2_func_pane_g5

0x93ba,	// (0x0001415b) bg_vkb2_func_pane_g6

0x93c2,	// (0x00014163) bg_vkb2_func_pane_g7

0x93ca,	// (0x0001416b) bg_vkb2_func_pane_g8

0x938a,	// (0x0001412b) bg_vkb2_func_pane_g9

0x0008,

0xfdfe,	// (0x0001ab9f) bg_vkb2_func_pane_g

0x5d69,	// (0x00010b0a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5d69,	// (0x00010b0a) bg_vkb2_fuc_pane_cp01

0x66f0,	// (0x00011491) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x66f0,	// (0x00011491) vkb2_top_cell_right_wide_pane_g1

0x5d69,	// (0x00010b0a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5d69,	// (0x00010b0a) bg_vkb2_fuc_pane_cp02

0x674e,	// (0x000114ef) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x674e,	// (0x000114ef) vkb2_top_cell_right_narrow_pane_g1

0xd74d,	// (0x000184ee) aid_touch_area_decrease_ParamLimits

0xd74d,	// (0x000184ee) aid_touch_area_decrease

0xd771,	// (0x00018512) aid_touch_area_increase_ParamLimits

0xd771,	// (0x00018512) aid_touch_area_increase

0xd789,	// (0x0001852a) aid_touch_area_mute_ParamLimits

0xd789,	// (0x0001852a) aid_touch_area_mute

0xd7a5,	// (0x00018546) aid_touch_area_slider_ParamLimits

0xd7a5,	// (0x00018546) aid_touch_area_slider

0xd88f,	// (0x00018630) popup_slider_window_g4_ParamLimits

0xd88f,	// (0x00018630) popup_slider_window_g4

0xd8a7,	// (0x00018648) popup_slider_window_g5_ParamLimits

0xd8a7,	// (0x00018648) popup_slider_window_g5

0xd8c9,	// (0x0001866a) popup_slider_window_g6_ParamLimits

0xd8c9,	// (0x0001866a) popup_slider_window_g6

0xd907,	// (0x000186a8) popup_slider_window_t2_ParamLimits

0xd907,	// (0x000186a8) popup_slider_window_t2

0x0001,

0xfcfa,	// (0x0001aa9b) popup_slider_window_t_ParamLimits

0xfcfa,	// (0x0001aa9b) popup_slider_window_t

0xd91f,	// (0x000186c0) slider_pane_ParamLimits

0xd91f,	// (0x000186c0) slider_pane

0xe642,	// (0x000193e3) slider_pane_g1_ParamLimits

0xe642,	// (0x000193e3) slider_pane_g1

0xe656,	// (0x000193f7) slider_pane_g2_ParamLimits

0xe656,	// (0x000193f7) slider_pane_g2

0xe66c,	// (0x0001940d) slider_pane_g3_ParamLimits

0xe66c,	// (0x0001940d) slider_pane_g3

0x0003,

0xfe11,	// (0x0001abb2) slider_pane_g_ParamLimits

0xfe11,	// (0x0001abb2) slider_pane_g

0x5792,	// (0x00010533) popup_tb_float_extension_window_ParamLimits

0x5792,	// (0x00010533) popup_tb_float_extension_window

0xe698,	// (0x00019439) aid_size_cell_tb_float_ext

0x6d4b,	// (0x00011aec) bg_popup_sub_window_cp28

0xe6a4,	// (0x00019445) grid_tb_float_ext_pane

0xe6ae,	// (0x0001944f) cell_tb_float_ext_pane_ParamLimits

0xe6ae,	// (0x0001944f) cell_tb_float_ext_pane

0xe6c8,	// (0x00019469) cell_tb_float_ext_pane_g1

0xe6d1,	// (0x00019472) grid_highlight_pane_cp12

0x5eb8,	// (0x00010c59) cell_last_hwr_side_pane_ParamLimits

0x5eb8,	// (0x00010c59) cell_last_hwr_side_pane

0xbf0c,	// (0x00016cad) cell_last_hwr_side_pane_g1

0xe6da,	// (0x0001947b) cell_last_hwr_side_pane_g2

0x0001,

0xfe1a,	// (0x0001abbb) cell_last_hwr_side_pane_g

0x6616,	// (0x000113b7) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6616,	// (0x000113b7) vkb2_area_bottom_space_btn_pane

0x5fce,	// (0x00010d6f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1a2,	// (0x00018f43) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x68ac,	// (0x0001164d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x68cb,	// (0x0001166c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x68cb,	// (0x0001166c) vkb2_area_bottom_space_btn_pane_g1

0x6905,	// (0x000116a6) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6905,	// (0x000116a6) vkb2_area_bottom_space_btn_pane_g2

0x693b,	// (0x000116dc) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x693b,	// (0x000116dc) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1f,	// (0x0001abc0) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1f,	// (0x0001abc0) vkb2_area_bottom_space_btn_pane_g

0x5e2c,	// (0x00010bcd) cel_fep_hwr_func_pane_ParamLimits

0x5e2c,	// (0x00010bcd) cel_fep_hwr_func_pane

0x5e68,	// (0x00010c09) cell_hwr_side_button_pane_ParamLimits

0x5e68,	// (0x00010c09) cell_hwr_side_button_pane

0xdb5d,	// (0x000188fe) aid_area_touch_clock_ParamLimits

0x70e2,	// (0x00011e83) bg_uniindi_top_pane_ParamLimits

0xdb6f,	// (0x00018910) uniindi_top_pane_g1_ParamLimits

0xdb85,	// (0x00018926) uniindi_top_pane_g2_ParamLimits

0xdb91,	// (0x00018932) uniindi_top_pane_g3_ParamLimits

0xdba2,	// (0x00018943) uniindi_top_pane_g4_ParamLimits

0xfd32,	// (0x0001aad3) uniindi_top_pane_g_ParamLimits

0xdbaf,	// (0x00018950) uniindi_top_pane_t1_ParamLimits

0x70e2,	// (0x00011e83) bg_vkb2_func_pane_cp01_ParamLimits

0x70e2,	// (0x00011e83) bg_vkb2_func_pane_cp01

0xe6e3,	// (0x00019484) cel_fep_hwr_func_pane_g1_ParamLimits

0xe6e3,	// (0x00019484) cel_fep_hwr_func_pane_g1

0x70e2,	// (0x00011e83) bg_vkb2_func_pane_cp02_ParamLimits

0x70e2,	// (0x00011e83) bg_vkb2_func_pane_cp02

0xe6e3,	// (0x00019484) cell_hwr_side_button_pane_g1_ParamLimits

0xe6e3,	// (0x00019484) cell_hwr_side_button_pane_g1

0x91dd,	// (0x00013f7e) status_pane_g4_ParamLimits

0x91dd,	// (0x00013f7e) status_pane_g4

0x91f7,	// (0x00013f98) status_pane_t1

0xbc51,	// (0x000169f2) form2_midp_gauge_slider_cont_pane

0xbc59,	// (0x000169fa) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbc6b,	// (0x00016a0c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbc7d,	// (0x00016a1e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf2,	// (0x0001a893) form2_midp_gauge_slider_pane_t_ParamLimits

0xbc8f,	// (0x00016a30) form2_midp_slider_pane_ParamLimits

0x6285,	// (0x00011026) aid_size_cell_func_vkb2_ParamLimits

0x6285,	// (0x00011026) aid_size_cell_func_vkb2

0xe684,	// (0x00019425) slider_pane_g4_ParamLimits

0xe684,	// (0x00019425) slider_pane_g4

0x6985,	// (0x00011726) form2_midp_gauge_slider_pane_t2_cp01

0x6993,	// (0x00011734) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6993,	// (0x00011734) form2_midp_gauge_slider_pane_t3_cp01

0x69b0,	// (0x00011751) form2_midp_slider_pane_cp01

0x6d4b,	// (0x00011aec) navi_smil_pane

0xe71c,	// (0x000194bd) navi_smil_pane_g1

0xe724,	// (0x000194c5) navi_smil_pane_t1

0xe6f1,	// (0x00019492) form2_midp_slider_pane_g1

0xe6fa,	// (0x0001949b) form2_midp_slider_pane_g2

0xe702,	// (0x000194a3) form2_midp_slider_pane_g3

0xe6f1,	// (0x00019492) form2_midp_slider_pane_g4

0xe70a,	// (0x000194ab) form2_midp_slider_pane_g5

0x0004,

0xfe28,	// (0x0001abc9) form2_midp_slider_pane_g

0x6975,	// (0x00011716) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6975,	// (0x00011716) vkb2_area_bottom_space_btn_pane_g4

0x900c,	// (0x00013dad) lc0_navi_pane_ParamLimits

0x900c,	// (0x00013dad) lc0_navi_pane

0x9082,	// (0x00013e23) lc0_stat_indi_pane_ParamLimits

0x9082,	// (0x00013e23) lc0_stat_indi_pane

0x9099,	// (0x00013e3a) ls0_title_pane_ParamLimits

0x9099,	// (0x00013e3a) ls0_title_pane

0x7c69,	// (0x00012a0a) bg_popup_sub_pane_cp14_ParamLimits

0xdb44,	// (0x000188e5) list_uniindi_pane_ParamLimits

0xdb50,	// (0x000188f1) uniindi_top_pane_ParamLimits

0xdbec,	// (0x0001898d) list_single_uniindi_pane_g1_ParamLimits

0xdbff,	// (0x000189a0) list_single_uniindi_pane_t1_ParamLimits

0x69b9,	// (0x0001175a) lc0_stat_clock_pane_ParamLimits

0x69b9,	// (0x0001175a) lc0_stat_clock_pane

0xe732,	// (0x000194d3) lc0_stat_indi_pane_g1_ParamLimits

0xe732,	// (0x000194d3) lc0_stat_indi_pane_g1

0xe73f,	// (0x000194e0) lc0_stat_indi_pane_g2_ParamLimits

0xe73f,	// (0x000194e0) lc0_stat_indi_pane_g2

0x0001,

0xfe33,	// (0x0001abd4) lc0_stat_indi_pane_g_ParamLimits

0xfe33,	// (0x0001abd4) lc0_stat_indi_pane_g

0x69c6,	// (0x00011767) lc0_uni_indicator_pane_ParamLimits

0x69c6,	// (0x00011767) lc0_uni_indicator_pane

0xe74c,	// (0x000194ed) ls0_title_pane_g1_ParamLimits

0xe74c,	// (0x000194ed) ls0_title_pane_g1

0xe760,	// (0x00019501) ls0_title_pane_t1_ParamLimits

0xe760,	// (0x00019501) ls0_title_pane_t1

0x69d3,	// (0x00011774) lc0_uni_indicator_pane_g1_ParamLimits

0x69d3,	// (0x00011774) lc0_uni_indicator_pane_g1

0xe796,	// (0x00019537) lc0_stat_clock_pane_t1

0x49c5,	// (0x0000f766) main_ai5_pane

0xe7a4,	// (0x00019545) ai5_sk_pane_ParamLimits

0xe7a4,	// (0x00019545) ai5_sk_pane

0xe7b1,	// (0x00019552) cell_ai5_widget_pane_ParamLimits

0xe7b1,	// (0x00019552) cell_ai5_widget_pane

0xe86c,	// (0x0001960d) aid_size_cell_widget_grid

0xe882,	// (0x00019623) bg_ai5_widget_pane_ParamLimits

0xe882,	// (0x00019623) bg_ai5_widget_pane

0xe8fa,	// (0x0001969b) cell_ai5_widget_pane_g2

0xe90e,	// (0x000196af) cell_ai5_widget_pane_g3

0xe928,	// (0x000196c9) cell_ai5_widget_pane_g4

0xe938,	// (0x000196d9) cell_ai5_widget_pane_g5

0xe948,	// (0x000196e9) cell_ai5_widget_pane_g6

0xe954,	// (0x000196f5) cell_ai5_widget_pane_g7

0xe99c,	// (0x0001973d) cell_ai5_widget_pane_t1_ParamLimits

0xe99c,	// (0x0001973d) cell_ai5_widget_pane_t1

0xe9b9,	// (0x0001975a) cell_ai5_widget_pane_t2_ParamLimits

0xe9b9,	// (0x0001975a) cell_ai5_widget_pane_t2

0xe9d1,	// (0x00019772) cell_ai5_widget_pane_t3_ParamLimits

0xe9d1,	// (0x00019772) cell_ai5_widget_pane_t3

0xe9e9,	// (0x0001978a) cell_ai5_widget_pane_t4_ParamLimits

0xe9e9,	// (0x0001978a) cell_ai5_widget_pane_t4

0xea0f,	// (0x000197b0) cell_ai5_widget_pane_t5_ParamLimits

0xea0f,	// (0x000197b0) cell_ai5_widget_pane_t5

0xea2f,	// (0x000197d0) cell_ai5_widget_pane_t6_ParamLimits

0xea2f,	// (0x000197d0) cell_ai5_widget_pane_t6

0xea41,	// (0x000197e2) cell_ai5_widget_pane_t7_ParamLimits

0xea41,	// (0x000197e2) cell_ai5_widget_pane_t7

0xea5a,	// (0x000197fb) cell_ai5_widget_pane_t8_ParamLimits

0xea5a,	// (0x000197fb) cell_ai5_widget_pane_t8

0x0009,

0xfe4d,	// (0x0001abee) cell_ai5_widget_pane_t_ParamLimits

0xfe4d,	// (0x0001abee) cell_ai5_widget_pane_t

0xeab9,	// (0x0001985a) grid_ai5_widget_pane

0x7c69,	// (0x00012a0a) highlight_cell_ai5_widget_pane_ParamLimits

0x7c69,	// (0x00012a0a) highlight_cell_ai5_widget_pane

0xead0,	// (0x00019871) ai5_sk_left_pane

0xeada,	// (0x0001987b) ai5_sk_middle_pane

0xeae4,	// (0x00019885) ai5_sk_right_pane

0xeaee,	// (0x0001988f) bg_ai5_widget_pane_g1_ParamLimits

0xeaee,	// (0x0001988f) bg_ai5_widget_pane_g1

0xeafa,	// (0x0001989b) bg_ai5_widget_pane_g2_ParamLimits

0xeafa,	// (0x0001989b) bg_ai5_widget_pane_g2

0xeb06,	// (0x000198a7) bg_ai5_widget_pane_g3_ParamLimits

0xeb06,	// (0x000198a7) bg_ai5_widget_pane_g3

0xeb12,	// (0x000198b3) bg_ai5_widget_pane_g4_ParamLimits

0xeb12,	// (0x000198b3) bg_ai5_widget_pane_g4

0xeb1e,	// (0x000198bf) bg_ai5_widget_pane_g5_ParamLimits

0xeb1e,	// (0x000198bf) bg_ai5_widget_pane_g5

0xeb2a,	// (0x000198cb) bg_ai5_widget_pane_g6_ParamLimits

0xeb2a,	// (0x000198cb) bg_ai5_widget_pane_g6

0xeb36,	// (0x000198d7) bg_ai5_widget_pane_g7_ParamLimits

0xeb36,	// (0x000198d7) bg_ai5_widget_pane_g7

0xeb42,	// (0x000198e3) bg_ai5_widget_pane_g8_ParamLimits

0xeb42,	// (0x000198e3) bg_ai5_widget_pane_g8

0xeb4e,	// (0x000198ef) bg_ai5_widget_pane_g9_ParamLimits

0xeb4e,	// (0x000198ef) bg_ai5_widget_pane_g9

0x0008,

0xfe62,	// (0x0001ac03) bg_ai5_widget_pane_g_ParamLimits

0xfe62,	// (0x0001ac03) bg_ai5_widget_pane_g

0xeb80,	// (0x00019921) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb80,	// (0x00019921) cell_shortcut_ai5_widget_pane

0x8b04,	// (0x000138a5) bg_cell_shortcut_ai5_widget_pane

0xeb91,	// (0x00019932) cell_grid_ai5_widget_pane_g1

0x8b04,	// (0x000138a5) highlight_cell_shortcut_ai5_widget_pane

0x9392,	// (0x00014133) ai5_sk_left_pane_g1

0xeb9a,	// (0x0001993b) ai5_sk_left_pane_g2

0xeba2,	// (0x00019943) ai5_sk_left_pane_g3

0xebaa,	// (0x0001994b) ai5_sk_left_pane_g4

0x0003,

0xfe75,	// (0x0001ac16) ai5_sk_left_pane_g

0xebb2,	// (0x00019953) ai5_sk_left_pane_t1

0x939a,	// (0x0001413b) ai5_sk_right_pane_g1

0xebc0,	// (0x00019961) ai5_sk_right_pane_g2

0xebc8,	// (0x00019969) ai5_sk_right_pane_g3

0xebd0,	// (0x00019971) ai5_sk_right_pane_g4

0x0003,

0xfe7e,	// (0x0001ac1f) ai5_sk_right_pane_g

0xebd8,	// (0x00019979) ai5_sk_right_pane_t1

0x939a,	// (0x0001413b) ai5_sk_middle_pane_g1

0x9392,	// (0x00014133) ai5_sk_middle_pane_g2

0x93b2,	// (0x00014153) ai5_sk_middle_pane_g3

0xebc8,	// (0x00019969) ai5_sk_middle_pane_g4

0xeba2,	// (0x00019943) ai5_sk_middle_pane_g5

0xebe6,	// (0x00019987) ai5_sk_middle_pane_g6

0xebee,	// (0x0001998f) ai5_sk_middle_pane_g7

0x0006,

0xfe87,	// (0x0001ac28) ai5_sk_middle_pane_g

0x8e98,	// (0x00013c39) aid_touch_area_size_lc0_ParamLimits

0x8e98,	// (0x00013c39) aid_touch_area_size_lc0

0x5ffd,	// (0x00010d9e) cell_hwr_candidate_pane_t1_ParamLimits

0x8eb4,	// (0x00013c55) aid_touch_navi_pane

0x9187,	// (0x00013f28) status_dt_navi_pane_ParamLimits

0x9187,	// (0x00013f28) status_dt_navi_pane

0x9194,	// (0x00013f35) status_dt_sta_pane_ParamLimits

0x9194,	// (0x00013f35) status_dt_sta_pane

0xebf6,	// (0x00019997) dt_sta_controll_pane

0xec03,	// (0x000199a4) dt_sta_indi_pane

0xec14,	// (0x000199b5) dt_sta_title_pane

0x70e2,	// (0x00011e83) bg_dt_sta_indi_pane_ParamLimits

0x70e2,	// (0x00011e83) bg_dt_sta_indi_pane

0xec27,	// (0x000199c8) dt_sta_battery_pane

0xec2f,	// (0x000199d0) dt_sta_indi_pane_g1

0xec38,	// (0x000199d9) dt_sta_indi_pane_g2

0xec41,	// (0x000199e2) dt_sta_indi_pane_g3

0x0002,

0xfe96,	// (0x0001ac37) dt_sta_indi_pane_g

0xec4a,	// (0x000199eb) dt_sta_signal_pane

0x7c69,	// (0x00012a0a) bg_dt_sta_title_pane_ParamLimits

0x7c69,	// (0x00012a0a) bg_dt_sta_title_pane

0xec53,	// (0x000199f4) dt_sta_title_pane_g1

0xec5b,	// (0x000199fc) dt_sta_title_pane_t1_ParamLimits

0xec5b,	// (0x000199fc) dt_sta_title_pane_t1

0x6d4b,	// (0x00011aec) bg_dt_sta_control_pane

0xec70,	// (0x00019a11) dt_sta_controll_pane_g1

0xec79,	// (0x00019a1a) bg_dt_sta_title_pane_g1

0xec82,	// (0x00019a23) bg_dt_sta_title_pane_g2

0xec8b,	// (0x00019a2c) bg_dt_sta_title_pane_g3

0x0002,

0xfe9d,	// (0x0001ac3e) bg_dt_sta_title_pane_g

0xbf0c,	// (0x00016cad) bg_dt_sta_indi_pane_g1

0xec94,	// (0x00019a35) dt_sta_signal_pane_g1

0xec9c,	// (0x00019a3d) dt_sta_signal_pane_g2

0x0001,

0xfea4,	// (0x0001ac45) dt_sta_signal_pane_g

0xeca4,	// (0x00019a45) dt_sta_battery_pane_g1

0xecad,	// (0x00019a4e) dt_sta_battery_pane_t1

0xbf0c,	// (0x00016cad) bg_dt_sta_control_pane_g1

0x8574,	// (0x00013315) fep_china_uni_eep_pane

0x857c,	// (0x0001331d) fep_china_uni_entry_pane_ParamLimits

0x858c,	// (0x0001332d) popup_fep_china_uni_window_g1_ParamLimits

0x859c,	// (0x0001333d) popup_fep_china_uni_window_g2_ParamLimits

0x859c,	// (0x0001333d) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001a4b9) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001a4b9) popup_fep_china_uni_window_g

0xecbc,	// (0x00019a5d) fep_china_uni_eep_pane_g1

0xecc4,	// (0x00019a65) fep_china_uni_eep_pane_t1

0xe713,	// (0x000194b4) aid_touch_area_size_smil_player

0x9004,	// (0x00013da5) lc0_clock_pane

0x91eb,	// (0x00013f8c) status_pane_g5_ParamLimits

0x91eb,	// (0x00013f8c) status_pane_g5

0x5457,	// (0x000101f8) popup_keymap_window

0x91a9,	// (0x00013f4a) status_icon_pane

0xe90e,	// (0x000196af) cell_ai5_widget_pane_g3_ParamLimits

0xe928,	// (0x000196c9) cell_ai5_widget_pane_g4_ParamLimits

0xe938,	// (0x000196d9) cell_ai5_widget_pane_g5_ParamLimits

0xe960,	// (0x00019701) cell_ai5_widget_pane_g8_ParamLimits

0xe960,	// (0x00019701) cell_ai5_widget_pane_g8

0xe974,	// (0x00019715) cell_ai5_widget_pane_g9_ParamLimits

0xe974,	// (0x00019715) cell_ai5_widget_pane_g9

0xe988,	// (0x00019729) cell_ai5_widget_pane_g10_ParamLimits

0xe988,	// (0x00019729) cell_ai5_widget_pane_g10

0xecd3,	// (0x00019a74) status_icon_pane_g1

0x6d4b,	// (0x00011aec) bg_popup_sub_pane_cp13

0xecdb,	// (0x00019a7c) popup_keymap_window_t1

0x8dd9,	// (0x00013b7a) control_pane_g6_ParamLimits

0x8dd9,	// (0x00013b7a) control_pane_g6

0x8de6,	// (0x00013b87) control_pane_g7_ParamLimits

0x8de6,	// (0x00013b87) control_pane_g7

0x8df3,	// (0x00013b94) control_pane_g8_ParamLimits

0x8df3,	// (0x00013b94) control_pane_g8

0xebf6,	// (0x00019997) dt_sta_controll_pane_ParamLimits

0xec03,	// (0x000199a4) dt_sta_indi_pane_ParamLimits

0xec14,	// (0x000199b5) dt_sta_title_pane_ParamLimits

0x7626,	// (0x000123c7) aid_size_touch_scroll_bar_cale

0x4a9e,	// (0x0000f83f) popup_discreet_window_ParamLimits

0x4a9e,	// (0x0000f83f) popup_discreet_window

0x4b26,	// (0x0000f8c7) popup_sk_window

0x9afc,	// (0x0001489d) bg_popup_sub_pane_cp28_ParamLimits

0x9afc,	// (0x0001489d) bg_popup_sub_pane_cp28

0xece9,	// (0x00019a8a) popup_discreet_window_g1_ParamLimits

0xece9,	// (0x00019a8a) popup_discreet_window_g1

0xed09,	// (0x00019aaa) popup_discreet_window_t1_ParamLimits

0xed09,	// (0x00019aaa) popup_discreet_window_t1

0xed27,	// (0x00019ac8) popup_discreet_window_t2_ParamLimits

0xed27,	// (0x00019ac8) popup_discreet_window_t2

0x0002,

0xfea9,	// (0x0001ac4a) popup_discreet_window_t_ParamLimits

0xfea9,	// (0x0001ac4a) popup_discreet_window_t

0x69e7,	// (0x00011788) popup_sk_window_g1

0x69f1,	// (0x00011792) popup_sk_window_g2

0x0001,

0xfeb0,	// (0x0001ac51) popup_sk_window_g

0x69f9,	// (0x0001179a) popup_sk_window_t1

0x6a07,	// (0x000117a8) popup_sk_window_t1_copy1

0xe8fa,	// (0x0001969b) cell_ai5_widget_pane_g2_ParamLimits

0xea6c,	// (0x0001980d) cell_ai5_widget_pane_t9_ParamLimits

0xea6c,	// (0x0001980d) cell_ai5_widget_pane_t9

0x6d4b,	// (0x00011aec) main_fep_fshwr2_pane

0x6a15,	// (0x000117b6) aid_fshwr2_btn_pane

0x6a21,	// (0x000117c2) aid_fshwr2_syb_pane

0x6a2d,	// (0x000117ce) aid_fshwr2_txt_pane

0x6a39,	// (0x000117da) fshwr2_func_candi_pane

0x6a4e,	// (0x000117ef) fshwr2_hwr_syb_pane

0x6a5e,	// (0x000117ff) fshwr2_icf_pane

0x49c5,	// (0x0000f766) fshwr2_icf_bg_pane

0x6a87,	// (0x00011828) fshwr2_icf_pane_t1_ParamLimits

0x6a87,	// (0x00011828) fshwr2_icf_pane_t1

0x8462,	// (0x00013203) fshwr2_func_candi_pane_g1

0xed79,	// (0x00019b1a) fshwr2_func_candi_row_pane_ParamLimits

0xed79,	// (0x00019b1a) fshwr2_func_candi_row_pane

0x6a9f,	// (0x00011840) cell_fshwr2_syb_pane_ParamLimits

0x6a9f,	// (0x00011840) cell_fshwr2_syb_pane

0x5fce,	// (0x00010d6f) fshwr2_hwr_syb_pane_g1_ParamLimits

0x5fce,	// (0x00010d6f) fshwr2_hwr_syb_pane_g1

0x49c5,	// (0x0000f766) bg_popup_call_pane_cp01

0x6ab5,	// (0x00011856) fshwr2_func_candi_cell_pane_ParamLimits

0x6ab5,	// (0x00011856) fshwr2_func_candi_cell_pane

0xed89,	// (0x00019b2a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed89,	// (0x00019b2a) fshwr2_func_candi_cell_bg_pane

0x6b00,	// (0x000118a1) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x6b00,	// (0x000118a1) fshwr2_func_candi_cell_pane_g1

0x6b28,	// (0x000118c9) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x6b28,	// (0x000118c9) fshwr2_func_candi_cell_pane_t1

0x49c5,	// (0x0000f766) bg_button_pane_cp08

0xed95,	// (0x00019b36) cell_fshwr2_syb_bg_pane

0x6b3b,	// (0x000118dc) cell_fshwr2_syb_bg_pane_g1

0x6b43,	// (0x000118e4) cell_fshwr2_syb_bg_pane_t1

0x7c69,	// (0x00012a0a) main_tmo_pane

0xa617,	// (0x000153b8) uni_indicator_pane_g1_ParamLimits

0xa62a,	// (0x000153cb) uni_indicator_pane_g2_ParamLimits

0xa63c,	// (0x000153dd) uni_indicator_pane_g3_ParamLimits

0xa64b,	// (0x000153ec) uni_indicator_pane_g4_ParamLimits

0xa64b,	// (0x000153ec) uni_indicator_pane_g4

0xa65f,	// (0x00015400) uni_indicator_pane_g5_ParamLimits

0xa65f,	// (0x00015400) uni_indicator_pane_g5

0xa65f,	// (0x00015400) uni_indicator_pane_g6_ParamLimits

0xa65f,	// (0x00015400) uni_indicator_pane_g6

0xf91c,	// (0x0001a6bd) uni_indicator_pane_g_ParamLimits

0xd729,	// (0x000184ca) popup_tmo_note_window_ParamLimits

0xd729,	// (0x000184ca) popup_tmo_note_window

0x6267,	// (0x00011008) fshwr2_bg_pane

0x6b19,	// (0x000118ba) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x6b19,	// (0x000118ba) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb5,	// (0x0001ac56) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb5,	// (0x0001ac56) fshwr2_func_candi_cell_pane_g

0x5fb6,	// (0x00010d57) bg_popup_window_pane_cp01

0x6b52,	// (0x000118f3) bg_popup_window_pane_g1_cp01

0xed9d,	// (0x00019b3e) bg_popup_window_pane_cp22_ParamLimits

0xed9d,	// (0x00019b3e) bg_popup_window_pane_cp22

0xedab,	// (0x00019b4c) listscroll_tmo_link_pane_ParamLimits

0xedab,	// (0x00019b4c) listscroll_tmo_link_pane

0xedeb,	// (0x00019b8c) popup_tmo_note_window_g1_ParamLimits

0xedeb,	// (0x00019b8c) popup_tmo_note_window_g1

0xedf8,	// (0x00019b99) tmo_note_info_pane_ParamLimits

0xedf8,	// (0x00019b99) tmo_note_info_pane

0xee12,	// (0x00019bb3) list_tmo_note_info_pane_g1_ParamLimits

0xee12,	// (0x00019bb3) list_tmo_note_info_pane_g1

0xee29,	// (0x00019bca) list_tmo_note_info_pane_g2_ParamLimits

0xee29,	// (0x00019bca) list_tmo_note_info_pane_g2

0x0001,

0xfeba,	// (0x0001ac5b) list_tmo_note_info_pane_g_ParamLimits

0xfeba,	// (0x0001ac5b) list_tmo_note_info_pane_g

0xee45,	// (0x00019be6) list_tmo_note_info_text_pane_ParamLimits

0xee45,	// (0x00019be6) list_tmo_note_info_text_pane

0xeec6,	// (0x00019c67) list_tmo_link_pane

0xeed3,	// (0x00019c74) scroll_pane_cp20

0xeee0,	// (0x00019c81) list_single_tmo_link_pane_ParamLimits

0xeee0,	// (0x00019c81) list_single_tmo_link_pane

0xeef0,	// (0x00019c91) list_single_tmo_link_pane_t1

0xeefe,	// (0x00019c9f) list_tmo_note_info_text_pane_t1_ParamLimits

0xeefe,	// (0x00019c9f) list_tmo_note_info_text_pane_t1

0x7e97,	// (0x00012c38) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7e97,	// (0x00012c38) aid_size_touch_scroll_bar_cp01

0x7d0c,	// (0x00012aad) aid_size_touch_slider_marker

0x4b0e,	// (0x0000f8af) popup_settings_window_ParamLimits

0x4b0e,	// (0x0000f8af) popup_settings_window

0x8e64,	// (0x00013c05) popup_candi_list_indi_window

0x8eb4,	// (0x00013c55) aid_touch_navi_pane_ParamLimits

0x61c2,	// (0x00010f63) rs_clock_indi_pane

0x61cb,	// (0x00010f6c) sctrl_sk_bottom_pane_ParamLimits

0x61dc,	// (0x00010f7d) sctrl_sk_top_pane_ParamLimits

0x62df,	// (0x00011080) popup_fep_tooltip_window

0xe86c,	// (0x0001960d) aid_size_cell_widget_grid_ParamLimits

0xe8e5,	// (0x00019686) cell_ai5_widget_pane_g1_ParamLimits

0xe8e5,	// (0x00019686) cell_ai5_widget_pane_g1

0xe948,	// (0x000196e9) cell_ai5_widget_pane_g6_ParamLimits

0xe954,	// (0x000196f5) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe38,	// (0x0001abd9) cell_ai5_widget_pane_g_ParamLimits

0xfe38,	// (0x0001abd9) cell_ai5_widget_pane_g

0xea9b,	// (0x0001983c) cell_ai5_widget_pane_t10_ParamLimits

0xea9b,	// (0x0001983c) cell_ai5_widget_pane_t10

0xeab9,	// (0x0001985a) grid_ai5_widget_pane_ParamLimits

0xeb5a,	// (0x000198fb) cell_contacts_ai5_widget_pane_ParamLimits

0xeb5a,	// (0x000198fb) cell_contacts_ai5_widget_pane

0xed3c,	// (0x00019add) popup_discreet_window_t3_ParamLimits

0xed3c,	// (0x00019add) popup_discreet_window_t3

0x6a73,	// (0x00011814) popup_fshwr2_char_preview_window_ParamLimits

0x6a73,	// (0x00011814) popup_fshwr2_char_preview_window

0xee63,	// (0x00019c04) tmo_note_info_pane_t1

0xee78,	// (0x00019c19) tmo_note_info_pane_t2

0xee8d,	// (0x00019c2e) tmo_note_info_pane_t3

0xeea2,	// (0x00019c43) tmo_note_info_pane_t4

0xeeb4,	// (0x00019c55) tmo_note_info_pane_t5

0x0004,

0xfebf,	// (0x0001ac60) tmo_note_info_pane_t

0xeec6,	// (0x00019c67) list_tmo_link_pane_ParamLimits

0xeed3,	// (0x00019c74) scroll_pane_cp20_ParamLimits

0x49c5,	// (0x0000f766) bg_popup_fep_char_preview_window_cp01

0xef17,	// (0x00019cb8) popup_fshwr2_char_preview_window_t1

0xef25,	// (0x00019cc6) popup_candi_list_indi_window_g1

0xef2e,	// (0x00019ccf) bg_cell_contacts_ai5_widget_pane

0xef3a,	// (0x00019cdb) cell_contacts_ai5_widget_pane_g1

0xc74f,	// (0x000174f0) cell_contacts_ai5_widget_pane_g2

0xef4f,	// (0x00019cf0) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeca,	// (0x0001ac6b) cell_contacts_ai5_widget_pane_g

0xef5b,	// (0x00019cfc) cell_contacts_ai5_widget_pane_t1

0x7c69,	// (0x00012a0a) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefd2,	// (0x00019d73) settings_container_pane

0x8b04,	// (0x000138a5) listscroll_set_pane_copy1

0xb2c8,	// (0x00016069) scroll_pane_cp121_copy1

0x98a1,	// (0x00014642) set_content_pane_copy1

0xefde,	// (0x00019d7f) aid_height_set_list_copy1_ParamLimits

0xefde,	// (0x00019d7f) aid_height_set_list_copy1

0xa87f,	// (0x00015620) aid_size_parent_copy1_ParamLimits

0xa87f,	// (0x00015620) aid_size_parent_copy1

0xefea,	// (0x00019d8b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefea,	// (0x00019d8b) button_value_adjust_pane_cp6_copy1

0x8e30,	// (0x00013bd1) list_highlight_pane_cp2_copy1_ParamLimits

0x8e30,	// (0x00013bd1) list_highlight_pane_cp2_copy1

0xeffe,	// (0x00019d9f) list_set_pane_copy1_ParamLimits

0xeffe,	// (0x00019d9f) list_set_pane_copy1

0xef6d,	// (0x00019d0e) main_pane_set_t1_copy1_ParamLimits

0xef6d,	// (0x00019d0e) main_pane_set_t1_copy1

0xefa7,	// (0x00019d48) main_pane_set_t2_copy1_ParamLimits

0xefa7,	// (0x00019d48) main_pane_set_t2_copy1

0xf0ab,	// (0x00019e4c) main_pane_set_t3_copy1

0xf0b9,	// (0x00019e5a) main_pane_set_t4_copy1

0xefc6,	// (0x00019d67) set_content_pane_g1_copy1_ParamLimits

0xefc6,	// (0x00019d67) set_content_pane_g1_copy1

0xf0c7,	// (0x00019e68) setting_code_pane_copy1

0xf0cf,	// (0x00019e70) setting_slider_graphic_pane_copy1

0xf0cf,	// (0x00019e70) setting_slider_pane_copy1

0xf0cf,	// (0x00019e70) setting_text_pane_copy1

0xf0cf,	// (0x00019e70) setting_volume_pane_copy1

0xf0c7,	// (0x00019e68) settings_code_pane_cp2_copy1

0xf0d7,	// (0x00019e78) settings_code_pane_cp_copy1_ParamLimits

0xf0d7,	// (0x00019e78) settings_code_pane_cp_copy1

0x6b5b,	// (0x000118fc) volume_set_pane_copy1

0xf0eb,	// (0x00019e8c) volume_set_pane_g10_copy1

0xf0f3,	// (0x00019e94) volume_set_pane_g1_copy1

0xf0fb,	// (0x00019e9c) volume_set_pane_g2_copy1

0xf103,	// (0x00019ea4) volume_set_pane_g3_copy1

0xf10b,	// (0x00019eac) volume_set_pane_g4_copy1

0xf113,	// (0x00019eb4) volume_set_pane_g5_copy1

0xf11b,	// (0x00019ebc) volume_set_pane_g6_copy1

0xf123,	// (0x00019ec4) volume_set_pane_g7_copy1

0xf12b,	// (0x00019ecc) volume_set_pane_g8_copy1

0xf133,	// (0x00019ed4) volume_set_pane_g9_copy1

0x6e3f,	// (0x00011be0) bg_set_opt_pane_cp_copy1_ParamLimits

0x6e3f,	// (0x00011be0) bg_set_opt_pane_cp_copy1

0x6b63,	// (0x00011904) setting_slider_pane_t1_copy1_ParamLimits

0x6b63,	// (0x00011904) setting_slider_pane_t1_copy1

0x6b81,	// (0x00011922) setting_slider_pane_t2_copy1_ParamLimits

0x6b81,	// (0x00011922) setting_slider_pane_t2_copy1

0x6b9b,	// (0x0001193c) setting_slider_pane_t3_copy1_ParamLimits

0x6b9b,	// (0x0001193c) setting_slider_pane_t3_copy1

0x6bb3,	// (0x00011954) slider_set_pane_copy1_ParamLimits

0x6bb3,	// (0x00011954) slider_set_pane_copy1

0x7d8c,	// (0x00012b2d) set_opt_bg_pane_g1_copy2

0x7d94,	// (0x00012b35) set_opt_bg_pane_g2_copy2

0xf13b,	// (0x00019edc) set_opt_bg_pane_g3_copy2

0x7da4,	// (0x00012b45) set_opt_bg_pane_g4_copy2

0x7dac,	// (0x00012b4d) set_opt_bg_pane_g5_copy2

0x7db4,	// (0x00012b55) set_opt_bg_pane_g6_copy2

0xf145,	// (0x00019ee6) set_opt_bg_pane_g7_copy2

0xf14d,	// (0x00019eee) set_opt_bg_pane_g8_copy2

0xf157,	// (0x00019ef8) set_opt_bg_pane_g9_copy2

0x6bc9,	// (0x0001196a) aid_size_touch_slider_mark_copy1_ParamLimits

0x6bc9,	// (0x0001196a) aid_size_touch_slider_mark_copy1

0xf161,	// (0x00019f02) slider_set_pane_g1_copy1

0x6bdd,	// (0x0001197e) slider_set_pane_g2_copy1

0x5bf7,	// (0x00010998) slider_set_pane_g3_copy1_ParamLimits

0x5bf7,	// (0x00010998) slider_set_pane_g3_copy1

0x5c0b,	// (0x000109ac) slider_set_pane_g4_copy1_ParamLimits

0x5c0b,	// (0x000109ac) slider_set_pane_g4_copy1

0x5c23,	// (0x000109c4) slider_set_pane_g5_copy1_ParamLimits

0x5c23,	// (0x000109c4) slider_set_pane_g5_copy1

0x5bf7,	// (0x00010998) slider_set_pane_g6_copy1_ParamLimits

0x5bf7,	// (0x00010998) slider_set_pane_g6_copy1

0x6be5,	// (0x00011986) slider_set_pane_g7_copy1_ParamLimits

0x6be5,	// (0x00011986) slider_set_pane_g7_copy1

0x6d5f,	// (0x00011b00) bg_set_opt_pane_cp2_copy1

0xf16a,	// (0x00019f0b) setting_slider_graphic_pane_g1_copy1

0xf173,	// (0x00019f14) setting_slider_graphic_pane_t1_copy1

0xf183,	// (0x00019f24) setting_slider_graphic_pane_t2_copy1

0xf193,	// (0x00019f34) slider_set_pane_cp_copy1

0xf1a3,	// (0x00019f44) input_focus_pane_cp1_copy1

0xf1ac,	// (0x00019f4d) list_set_text_pane_copy1

0xf1b4,	// (0x00019f55) setting_text_pane_g1_copy1

0x6e98,	// (0x00011c39) set_text_pane_t1_copy1

0xf1a3,	// (0x00019f44) input_focus_pane_cp2_copy1

0xf1b4,	// (0x00019f55) setting_code_pane_g1_copy1

0xf1bd,	// (0x00019f5e) setting_code_pane_t1_copy1

0xf1cb,	// (0x00019f6c) list_set_graphic_pane_copy1

0x6d5f,	// (0x00011b00) bg_set_opt_pane_cp4_copy1

0x87ff,	// (0x000135a0) list_set_graphic_pane_g1_copy1_ParamLimits

0x87ff,	// (0x000135a0) list_set_graphic_pane_g1_copy1

0xf1de,	// (0x00019f7f) list_set_graphic_pane_g2_copy1

0x8817,	// (0x000135b8) list_set_graphic_pane_t1_copy1_ParamLimits

0x8817,	// (0x000135b8) list_set_graphic_pane_t1_copy1

0xbf0c,	// (0x00016cad) rs_clock_indi_pane_g1

0xf1e6,	// (0x00019f87) rs_clock_indi_pane_t1

0xf1f4,	// (0x00019f95) rs_indi_pane

0xf1fc,	// (0x00019f9d) rs_indi_pane_g1

0xf205,	// (0x00019fa6) rs_indi_pane_g2

0xf20e,	// (0x00019faf) rs_indi_pane_g3

0x0002,

0xfed1,	// (0x0001ac72) rs_indi_pane_g

0x8b04,	// (0x000138a5) bg_popup_preview_window_pane_cp03

0xf217,	// (0x00019fb8) popup_fep_tooltip_window_t1

0xcd84,	// (0x00017b25) popup_note2_window_g2_ParamLimits

0xcd84,	// (0x00017b25) popup_note2_window_g2

0x0001,

0xfc6a,	// (0x0001aa0b) popup_note2_window_g_ParamLimits

0xfc6a,	// (0x0001aa0b) popup_note2_window_g

0xd362,	// (0x00018103) bg_popup_sub_pane_cp11_ParamLimits

0xd36f,	// (0x00018110) cell_ai3_links_pane_g1_ParamLimits

0xd386,	// (0x00018127) cell_ai3_links_pane_t1

0x6e98,	// (0x00011c39) set_text_pane_t1_copy1_ParamLimits

0x8a15,	// (0x000137b6) cell_graphic_popup_pane_cp2_ParamLimits

0x8a15,	// (0x000137b6) cell_graphic_popup_pane_cp2

0xf225,	// (0x00019fc6) cell_graphic_popup_pane_g1_cp2

0x7439,	// (0x000121da) cell_graphic_popup_pane_g2_cp2

0xf22d,	// (0x00019fce) cell_graphic_popup_pane_g3_cp2

0xf235,	// (0x00019fd6) cell_graphic_popup_pane_t2_cp2

0x744a,	// (0x000121eb) grid_highlight_pane_cp3_cp2

0x817d,	// (0x00012f1e) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7c69,	// (0x00012a0a) main_tmo_pane_ParamLimits

0xd71d,	// (0x000184be) popup_tmo_big_image_note_window

0xe8d4,	// (0x00019675) cell_ai5_widget_list_pane

0xe8dc,	// (0x0001967d) cell_ai5_widget_lrg_icon_pane

0xee63,	// (0x00019c04) tmo_note_info_pane_t1_ParamLimits

0xee78,	// (0x00019c19) tmo_note_info_pane_t2_ParamLimits

0xee8d,	// (0x00019c2e) tmo_note_info_pane_t3_ParamLimits

0xeea2,	// (0x00019c43) tmo_note_info_pane_t4_ParamLimits

0xeeb4,	// (0x00019c55) tmo_note_info_pane_t5_ParamLimits

0xfebf,	// (0x0001ac60) tmo_note_info_pane_t_ParamLimits

0xefd2,	// (0x00019d73) settings_container_pane_ParamLimits

0xf19b,	// (0x00019f3c) indicator_popup_pane_cp5

0xf19b,	// (0x00019f3c) indicator_popup_pane_cp6

0xf1cb,	// (0x00019f6c) list_set_graphic_pane_copy1_ParamLimits

0x6d4b,	// (0x00011aec) bg_popup_window_pane_cp23

0xf243,	// (0x00019fe4) popup_tmo_big_image_note_window_g1

0xf24d,	// (0x00019fee) popup_tmo_big_image_note_window_t1

0xf25d,	// (0x00019ffe) popup_tmo_big_image_note_window_t2

0xf26d,	// (0x0001a00e) popup_tmo_big_image_note_window_t3

0x0002,

0xfed8,	// (0x0001ac79) popup_tmo_big_image_note_window_t

0xbf0c,	// (0x00016cad) cell_ai5_widget_lrg_icon_pane_g1

0xf27d,	// (0x0001a01e) cell_ai5_widget_lrg_icon_pane_t1

0xf28b,	// (0x0001a02c) cell_ai5_widget_list_row_pane_ParamLimits

0xf28b,	// (0x0001a02c) cell_ai5_widget_list_row_pane

0xf2a2,	// (0x0001a043) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2a2,	// (0x0001a043) cell_ai5_widget_list_row_pane_g1

0xf2af,	// (0x0001a050) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2af,	// (0x0001a050) cell_ai5_widget_list_row_pane_t1

0xf2e0,	// (0x0001a081) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2e0,	// (0x0001a081) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedf,	// (0x0001ac80) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedf,	// (0x0001ac80) cell_ai5_widget_list_row_pane_t

0x49c5,	// (0x0000f766) main_fep_vtchi_ss_pane

0xf328,	// (0x0001a0c9) popup_fep_char_pre_window

0xf330,	// (0x0001a0d1) popup_fep_ituss_window

0xf351,	// (0x0001a0f2) popup_fep_vkbss_window

0xf37b,	// (0x0001a11c) grid_vkbss_keypad_pane_ParamLimits

0xf37b,	// (0x0001a11c) grid_vkbss_keypad_pane

0xf38b,	// (0x0001a12c) ituss_keypad_pane

0x6c07,	// (0x000119a8) aid_vkbss_key_offset_ParamLimits

0x6c07,	// (0x000119a8) aid_vkbss_key_offset

0x6c13,	// (0x000119b4) cell_vkbss_key_pane_ParamLimits

0x6c13,	// (0x000119b4) cell_vkbss_key_pane

0xf39a,	// (0x0001a13b) bg_cell_vkbss_key_g1_ParamLimits

0xf39a,	// (0x0001a13b) bg_cell_vkbss_key_g1

0xf3a6,	// (0x0001a147) cell_vkbss_key_3p_pane_ParamLimits

0xf3a6,	// (0x0001a147) cell_vkbss_key_3p_pane

0xf3ba,	// (0x0001a15b) cell_vkbss_key_g1_ParamLimits

0xf3ba,	// (0x0001a15b) cell_vkbss_key_g1

0xf3ce,	// (0x0001a16f) cell_vkbss_key_t1_ParamLimits

0xf3ce,	// (0x0001a16f) cell_vkbss_key_t1

0x6c29,	// (0x000119ca) cell_ituss_key_pane_ParamLimits

0x6c29,	// (0x000119ca) cell_ituss_key_pane

0xf3f9,	// (0x0001a19a) bg_cell_ituss_key_g1_ParamLimits

0xf3f9,	// (0x0001a19a) bg_cell_ituss_key_g1

0xf405,	// (0x0001a1a6) cell_ituss_key_pane_g1_ParamLimits

0xf405,	// (0x0001a1a6) cell_ituss_key_pane_g1

0x6c3a,	// (0x000119db) cell_ituss_key_pane_g2_ParamLimits

0x6c3a,	// (0x000119db) cell_ituss_key_pane_g2

0x0002,

0xfee6,	// (0x0001ac87) cell_ituss_key_pane_g_ParamLimits

0xfee6,	// (0x0001ac87) cell_ituss_key_pane_g

0x6c66,	// (0x00011a07) cell_ituss_key_t1_ParamLimits

0x6c66,	// (0x00011a07) cell_ituss_key_t1

0x6ca0,	// (0x00011a41) cell_ituss_key_t2_ParamLimits

0x6ca0,	// (0x00011a41) cell_ituss_key_t2

0x6cd1,	// (0x00011a72) cell_ituss_key_t3_ParamLimits

0x6cd1,	// (0x00011a72) cell_ituss_key_t3

0x6ca0,	// (0x00011a41) cell_ituss_key_t4_ParamLimits

0x6ca0,	// (0x00011a41) cell_ituss_key_t4

0x0004,

0xfeed,	// (0x0001ac8e) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x0001ac8e) cell_ituss_key_t

0xf431,	// (0x0001a1d2) cell_vkbss_key_3p_pane_g1

0xf439,	// (0x0001a1da) cell_vkbss_key_3p_pane_g2

0xf441,	// (0x0001a1e2) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0001ac99) cell_vkbss_key_3p_pane_g

0x8b04,	// (0x000138a5) bg_popup_fep_char_preview_window_cp02

0xf449,	// (0x0001a1ea) popup_fep_char_pre_window_t1

0xe859,	// (0x000195fa) main_ai5_sk_pane

0xef2e,	// (0x00019ccf) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef3a,	// (0x00019cdb) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc74f,	// (0x000174f0) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef4f,	// (0x00019cf0) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeca,	// (0x0001ac6b) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef5b,	// (0x00019cfc) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7c69,	// (0x00012a0a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf457,	// (0x0001a1f8) main_ai5_sk_pane_g1

0x9935,	// (0x000146d6) popup_query_code_window_g1

0xf346,	// (0x0001a0e7) popup_fep_vkb_icf_pane

0xf365,	// (0x0001a106) popup_fep_vtchi_icf_pane

0xf460,	// (0x0001a201) bg_icf_pane

0xf46c,	// (0x0001a20d) list_vkb_icf_pane

0xf47b,	// (0x0001a21c) bg_icf_pane_cp01

0xf48e,	// (0x0001a22f) vtchi_icf_list_pane

0xf49e,	// (0x0001a23f) list_vkb_icf_pane_t1_ParamLimits

0xf49e,	// (0x0001a23f) list_vkb_icf_pane_t1

0xf4b4,	// (0x0001a255) vtchi_icf_list_pane_t1_ParamLimits

0xf4b4,	// (0x0001a255) vtchi_icf_list_pane_t1

0xf330,	// (0x0001a0d1) popup_fep_ituss_window_ParamLimits

0xf365,	// (0x0001a106) popup_fep_vtchi_icf_pane_ParamLimits

0xf38b,	// (0x0001a12c) ituss_keypad_pane_ParamLimits

0x6bfb,	// (0x0001199c) ituss_sks_pane

0xf460,	// (0x0001a201) bg_icf_pane_ParamLimits

0xf308,	// (0x0001a0a9) icf_edit_indi_pane_ParamLimits

0xf308,	// (0x0001a0a9) icf_edit_indi_pane

0xf46c,	// (0x0001a20d) list_vkb_icf_pane_ParamLimits

0xf47b,	// (0x0001a21c) bg_icf_pane_cp01_ParamLimits

0xf31b,	// (0x0001a0bc) icf_edit_indi_pane_cp01_ParamLimits

0xf31b,	// (0x0001a0bc) icf_edit_indi_pane_cp01

0xf496,	// (0x0001a237) vtchi_query_pane

0xe6e3,	// (0x00019484) icf_edit_indi_pane_g1_ParamLimits

0xe6e3,	// (0x00019484) icf_edit_indi_pane_g1

0xf525,	// (0x0001a2c6) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0001a2c6) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0001acb1) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0001acb1) icf_edit_indi_pane_g

0xf537,	// (0x0001a2d8) icf_edit_indi_pane_t1

0xf4ce,	// (0x0001a26f) bg_input_focus_pane_cp042

0x761d,	// (0x000123be) vtchi_button_pane

0xf4d7,	// (0x0001a278) vtchi_query_pane_t1

0xf4e5,	// (0x0001a286) vtchi_query_pane_t2

0xf4f3,	// (0x0001a294) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001aca0) vtchi_query_pane_t

0x49c5,	// (0x0000f766) bg_button_pane_cp13

0xf501,	// (0x0001a2a2) vtchi_button_pane_g1

0x6d14,	// (0x00011ab5) ituss_sks_pane_g1

0x6d1f,	// (0x00011ac0) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001aca7) ituss_sks_pane_g

0xf509,	// (0x0001a2aa) ituss_sks_pane_t1

0xf517,	// (0x0001a2b8) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001acac) ituss_sks_pane_t

0xb948,	// (0x000166e9) indicator_nsta_pane_cp_g1

0xb950,	// (0x000166f1) indicator_nsta_pane_cp_g2

0xb958,	// (0x000166f9) indicator_nsta_pane_cp_g3

0xb948,	// (0x000166e9) indicator_nsta_pane_cp_g4

0xb950,	// (0x000166f1) indicator_nsta_pane_cp_g5

0xb958,	// (0x000166f9) indicator_nsta_pane_cp_g6

0x0005,

0xfaa8,	// (0x0001a849) indicator_nsta_pane_cp_g

0xe443,	// (0x000191e4) cell_graphic2_pane_t2_ParamLimits

0xe443,	// (0x000191e4) cell_graphic2_pane_t2

0x0001,

0xfdc1,	// (0x0001ab62) cell_graphic2_pane_t_ParamLimits

0xfdc1,	// (0x0001ab62) cell_graphic2_pane_t

0xe470,	// (0x00019211) cell_graphic2_control_pane_t1

0x8523,	// (0x000132c4) signal_pane_g3_ParamLimits

0x8523,	// (0x000132c4) signal_pane_g3

0x8535,	// (0x000132d6) signal_pane_g4_ParamLimits

0x8535,	// (0x000132d6) signal_pane_g4

0xf2f2,	// (0x0001a093) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2f2,	// (0x0001a093) cell_ai5_widget_list_row_pane_t3

0xf41f,	// (0x0001a1c0) cell_ituss_key_pane_t1_ParamLimits

0xf41f,	// (0x0001a1c0) cell_ituss_key_pane_t1

0x953d,	// (0x000142de) form_field_data_wide_pane_vc_t2_ParamLimits

0x953d,	// (0x000142de) form_field_data_wide_pane_vc_t2

0x9551,	// (0x000142f2) form_field_data_wide_pane_vc_t3_ParamLimits

0x9551,	// (0x000142f2) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0001a5a5) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0001a5a5) form_field_data_wide_pane_vc_t

0xb60f,	// (0x000163b0) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb60f,	// (0x000163b0) form_field_slider_wide_pane_vc_t3

0xb6ed,	// (0x0001648e) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb6ed,	// (0x0001648e) form_field_popup_wide_pane_vc_t2

0xb704,	// (0x000164a5) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb704,	// (0x000164a5) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa97,	// (0x0001a838) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x0001a838) form_field_popup_wide_pane_vc_t

0x6a15,	// (0x000117b6) aid_fshwr2_btn_pane_ParamLimits

0x6a21,	// (0x000117c2) aid_fshwr2_syb_pane_ParamLimits

0x6a2d,	// (0x000117ce) aid_fshwr2_txt_pane_ParamLimits

0x6267,	// (0x00011008) fshwr2_bg_pane_ParamLimits

0x6a39,	// (0x000117da) fshwr2_func_candi_pane_ParamLimits

0x6a4e,	// (0x000117ef) fshwr2_hwr_syb_pane_ParamLimits

0x6a5e,	// (0x000117ff) fshwr2_icf_pane_ParamLimits

0xb575,	// (0x00016316) list_double_graphic_pane_vc_g4_ParamLimits

0xb575,	// (0x00016316) list_double_graphic_pane_vc_g4

0x6c5a,	// (0x000119fb) cell_ituss_key_pane_g3_ParamLimits

0x6c5a,	// (0x000119fb) cell_ituss_key_pane_g3

0x6d02,	// (0x00011aa3) cell_ituss_key_t5_ParamLimits

0x6d02,	// (0x00011aa3) cell_ituss_key_t5

0xf351,	// (0x0001a0f2) popup_fep_vkbss_window_ParamLimits

0xe863,	// (0x00019604) aid_cell_ai5_quarter

0xf537,	// (0x0001a2d8) icf_edit_indi_pane_t1_ParamLimits

0x718a,	// (0x00011f2b) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x718a,	// (0x00011f2b) aid_tch_indicator_popup_pane_cp2

0x719d,	// (0x00011f3e) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x719d,	// (0x00011f3e) aid_tch_query_popup_data_pane_cp2

0x98dd,	// (0x0001467e) aid_tch_query_popup_pane_ParamLimits

0x98dd,	// (0x0001467e) aid_tch_query_popup_pane

0x98dd,	// (0x0001467e) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x98dd,	// (0x0001467e) aid_tch_query_popup_data_pane_cp1
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal

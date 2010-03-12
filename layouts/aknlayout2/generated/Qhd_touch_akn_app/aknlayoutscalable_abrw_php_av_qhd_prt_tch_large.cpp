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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004ac96 };

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
0x74e9,	// (0x0005217f) Screen

0x74fd,	// (0x00052193) application_window_ParamLimits

0x74fd,	// (0x00052193) application_window

0x7517,	// (0x000521ad) screen_g1

0x4993,	// (0x0004f629) area_bottom_pane_ParamLimits

0x4993,	// (0x0004f629) area_bottom_pane

0x4a53,	// (0x0004f6e9) area_top_pane_ParamLimits

0x4a53,	// (0x0004f6e9) area_top_pane

0x4af1,	// (0x0004f787) main_pane_ParamLimits

0x4af1,	// (0x0004f787) main_pane

0x7521,	// (0x000521b7) misc_graphics

0x94e6,	// (0x0005417c) battery_pane_ParamLimits

0x94e6,	// (0x0005417c) battery_pane

0xa25c,	// (0x00054ef2) bg_status_flat_pane_g8

0xa264,	// (0x00054efa) bg_status_flat_pane_g9

0x95a8,	// (0x0005423e) context_pane_ParamLimits

0x95a8,	// (0x0005423e) context_pane

0x96cd,	// (0x00054363) navi_pane_ParamLimits

0x96cd,	// (0x00054363) navi_pane

0x974b,	// (0x000543e1) signal_pane_ParamLimits

0x974b,	// (0x000543e1) signal_pane

0x0008,

0xf884,	// (0x0005a51a) bg_status_flat_pane_g

0x97b8,	// (0x0005444e) status_pane_g1_ParamLimits

0x97b8,	// (0x0005444e) status_pane_g1

0x97c4,	// (0x0005445a) status_pane_g2_ParamLimits

0x97c4,	// (0x0005445a) status_pane_g2

0x97d0,	// (0x00054466) status_pane_g3_ParamLimits

0x97d0,	// (0x00054466) status_pane_g3

0x0004,

0xf7ab,	// (0x0005a441) status_pane_g_ParamLimits

0xf7ab,	// (0x0005a441) status_pane_g

0x9804,	// (0x0005449a) title_pane_ParamLimits

0x9804,	// (0x0005449a) title_pane

0x9841,	// (0x000544d7) uni_indicator_pane_ParamLimits

0x9841,	// (0x000544d7) uni_indicator_pane

0x940e,	// (0x000540a4) bg_list_pane_ParamLimits

0x940e,	// (0x000540a4) bg_list_pane

0x7a29,	// (0x000526bf) find_pane

0x942e,	// (0x000540c4) listscroll_app_pane_ParamLimits

0x942e,	// (0x000540c4) listscroll_app_pane

0x943a,	// (0x000540d0) listscroll_form_pane

0x5b45,	// (0x000507db) listscroll_gen_pane_ParamLimits

0x5b45,	// (0x000507db) listscroll_gen_pane

0x943a,	// (0x000540d0) listscroll_set_pane

0x86aa,	// (0x00053340) main_idle_act_pane

0x9114,	// (0x00053daa) main_idle_trad_pane

0x9114,	// (0x00053daa) main_list_empty_pane

0x9454,	// (0x000540ea) main_midp_pane

0x9460,	// (0x000540f6) main_pane_g1_ParamLimits

0x9460,	// (0x000540f6) main_pane_g1

0x5b67,	// (0x000507fd) popup_ai_message_window_ParamLimits

0x5b67,	// (0x000507fd) popup_ai_message_window

0x5c15,	// (0x000508ab) popup_fep_china_uni_window_ParamLimits

0x5c15,	// (0x000508ab) popup_fep_china_uni_window

0x5c71,	// (0x00050907) popup_fep_japan_candidate_window_ParamLimits

0x5c71,	// (0x00050907) popup_fep_japan_candidate_window

0x5c91,	// (0x00050927) popup_fep_japan_predictive_window_ParamLimits

0x5c91,	// (0x00050927) popup_fep_japan_predictive_window

0x5cc1,	// (0x00050957) popup_find_window

0x5cce,	// (0x00050964) popup_grid_graphic_window_ParamLimits

0x5cce,	// (0x00050964) popup_grid_graphic_window

0x5cf6,	// (0x0005098c) popup_large_graphic_colour_window

0x5d1c,	// (0x000509b2) popup_menu_window_ParamLimits

0x5d1c,	// (0x000509b2) popup_menu_window

0x5ed4,	// (0x00050b6a) popup_note_image_window

0x5ec0,	// (0x00050b56) popup_note_wait_window_ParamLimits

0x5ec0,	// (0x00050b56) popup_note_wait_window

0x5ec0,	// (0x00050b56) popup_note_window_ParamLimits

0x5ec0,	// (0x00050b56) popup_note_window

0x5f2a,	// (0x00050bc0) popup_query_code_window_ParamLimits

0x5f2a,	// (0x00050bc0) popup_query_code_window

0x5f3e,	// (0x00050bd4) popup_query_data_code_window_ParamLimits

0x5f3e,	// (0x00050bd4) popup_query_data_code_window

0x5f5b,	// (0x00050bf1) popup_query_data_window_ParamLimits

0x5f5b,	// (0x00050bf1) popup_query_data_window

0x5f77,	// (0x00050c0d) popup_query_sat_info_window_ParamLimits

0x5f77,	// (0x00050c0d) popup_query_sat_info_window

0x5fb0,	// (0x00050c46) popup_snote_single_graphic_window_ParamLimits

0x5fb0,	// (0x00050c46) popup_snote_single_graphic_window

0x5fb0,	// (0x00050c46) popup_snote_single_text_window_ParamLimits

0x5fb0,	// (0x00050c46) popup_snote_single_text_window

0x5fc5,	// (0x00050c5b) popup_sub_window_general

0x60f5,	// (0x00050d8b) popup_window_general_ParamLimits

0x60f5,	// (0x00050d8b) popup_window_general

0x946e,	// (0x00054104) power_save_pane

0x59e5,	// (0x0005067b) control_pane_g1_ParamLimits

0x59e5,	// (0x0005067b) control_pane_g1

0x5a0c,	// (0x000506a2) control_pane_g2_ParamLimits

0x5a0c,	// (0x000506a2) control_pane_g2

0x93d1,	// (0x00054067) control_pane_g3_ParamLimits

0x93d1,	// (0x00054067) control_pane_g3

0x0007,

0xf793,	// (0x0005a429) control_pane_g_ParamLimits

0xf793,	// (0x0005a429) control_pane_g

0x5a52,	// (0x000506e8) control_pane_t1_ParamLimits

0x5a52,	// (0x000506e8) control_pane_t1

0x5a9e,	// (0x00050734) control_pane_t2_ParamLimits

0x5a9e,	// (0x00050734) control_pane_t2

0x0002,

0xf7a4,	// (0x0005a43a) control_pane_t_ParamLimits

0xf7a4,	// (0x0005a43a) control_pane_t

0x92f2,	// (0x00053f88) navi_navi_volume_pane_cp1

0x92fb,	// (0x00053f91) status_small_icon_pane

0x9303,	// (0x00053f99) status_small_pane_g1_ParamLimits

0x9303,	// (0x00053f99) status_small_pane_g1

0x9337,	// (0x00053fcd) status_small_pane_g2_ParamLimits

0x9337,	// (0x00053fcd) status_small_pane_g2

0x9343,	// (0x00053fd9) status_small_pane_g3_ParamLimits

0x9343,	// (0x00053fd9) status_small_pane_g3

0x934f,	// (0x00053fe5) status_small_pane_g4_ParamLimits

0x934f,	// (0x00053fe5) status_small_pane_g4

0x935b,	// (0x00053ff1) status_small_pane_g5_ParamLimits

0x935b,	// (0x00053ff1) status_small_pane_g5

0x936a,	// (0x00054000) status_small_pane_g6_ParamLimits

0x936a,	// (0x00054000) status_small_pane_g6

0x0007,

0xf782,	// (0x0005a418) status_small_pane_g_ParamLimits

0xf782,	// (0x0005a418) status_small_pane_g

0x939a,	// (0x00054030) status_small_pane_t1

0x93bd,	// (0x00054053) status_small_wait_pane_ParamLimits

0x93bd,	// (0x00054053) status_small_wait_pane

0x8ba3,	// (0x00053839) aid_levels_signal_ParamLimits

0x8ba3,	// (0x00053839) aid_levels_signal

0x8bb2,	// (0x00053848) signal_pane_g1_ParamLimits

0x8bb2,	// (0x00053848) signal_pane_g1

0x8bc7,	// (0x0005385d) signal_pane_g2_ParamLimits

0x8bc7,	// (0x0005385d) signal_pane_g2

0x0003,

0xf713,	// (0x0005a3a9) signal_pane_g_ParamLimits

0xf713,	// (0x0005a3a9) signal_pane_g

0x8bff,	// (0x00053895) context_pane_g1

0x752b,	// (0x000521c1) title_pane_g1

0x7561,	// (0x000521f7) title_pane_t1

0x75c9,	// (0x0005225f) title_pane_t2

0x75ef,	// (0x00052285) title_pane_t3

0x0002,

0xf55d,	// (0x0005a1f3) title_pane_t

0x9859,	// (0x000544ef) aid_levels_battery_ParamLimits

0x9859,	// (0x000544ef) aid_levels_battery

0x986a,	// (0x00054500) battery_pane_g1_ParamLimits

0x986a,	// (0x00054500) battery_pane_g1

0x9880,	// (0x00054516) battery_pane_g2_ParamLimits

0x9880,	// (0x00054516) battery_pane_g2

0x0001,

0xf7b6,	// (0x0005a44c) battery_pane_g_ParamLimits

0xf7b6,	// (0x0005a44c) battery_pane_g

0xab83,	// (0x00055819) uni_indicator_pane_g1

0xab98,	// (0x0005582e) uni_indicator_pane_g2

0xabae,	// (0x00055844) uni_indicator_pane_g3

0x0005,

0xf92c,	// (0x0005a5c2) uni_indicator_pane_g

0x8f92,	// (0x00053c28) navi_icon_pane_ParamLimits

0x8f92,	// (0x00053c28) navi_icon_pane

0x8edb,	// (0x00053b71) navi_midp_pane

0x8fae,	// (0x00053c44) navi_navi_pane

0x8fb8,	// (0x00053c4e) navi_text_pane_ParamLimits

0x8fb8,	// (0x00053c4e) navi_text_pane

0x7517,	// (0x000521ad) status_small_wait_pane_g1

0x805f,	// (0x00052cf5) status_small_wait_pane_g2

0x0001,

0xf927,	// (0x0005a5bd) status_small_wait_pane_g

0xa8a8,	// (0x0005553e) navi_navi_icon_text_pane

0xa8b0,	// (0x00055546) navi_navi_pane_g1_ParamLimits

0xa8b0,	// (0x00055546) navi_navi_pane_g1

0xa8c2,	// (0x00055558) navi_navi_pane_g2_ParamLimits

0xa8c2,	// (0x00055558) navi_navi_pane_g2

0x0001,

0xf8f5,	// (0x0005a58b) navi_navi_pane_g_ParamLimits

0xf8f5,	// (0x0005a58b) navi_navi_pane_g

0xa8d4,	// (0x0005556a) navi_navi_tabs_pane

0xa8dd,	// (0x00055573) navi_navi_text_pane

0xa8a8,	// (0x0005553e) navi_navi_volume_pane

0xa884,	// (0x0005551a) navi_text_pane_t1

0xa878,	// (0x0005550e) navi_icon_pane_g1

0xa7da,	// (0x00055470) navi_navi_text_pane_t1

0x6429,	// (0x000510bf) navi_navi_volume_pane_g1

0x6431,	// (0x000510c7) volume_small_pane

0xa740,	// (0x000553d6) navi_navi_icon_text_pane_g1

0xa748,	// (0x000553de) navi_navi_icon_text_pane_t1

0x8fae,	// (0x00053c44) navi_tabs_2_long_pane

0x8fae,	// (0x00053c44) navi_tabs_2_pane

0x8fae,	// (0x00053c44) navi_tabs_3_long_pane

0x8fae,	// (0x00053c44) navi_tabs_3_pane

0x8fae,	// (0x00053c44) navi_tabs_4_pane

0x6409,	// (0x0005109f) tabs_2_active_pane_ParamLimits

0x6409,	// (0x0005109f) tabs_2_active_pane

0x6419,	// (0x000510af) tabs_2_passive_pane_ParamLimits

0x6419,	// (0x000510af) tabs_2_passive_pane

0x63d7,	// (0x0005106d) tabs_3_active_pane_ParamLimits

0x63d7,	// (0x0005106d) tabs_3_active_pane

0x63e7,	// (0x0005107d) tabs_3_passive_pane_ParamLimits

0x63e7,	// (0x0005107d) tabs_3_passive_pane

0x63f8,	// (0x0005108e) tabs_3_passive_pane_cp_ParamLimits

0x63f8,	// (0x0005108e) tabs_3_passive_pane_cp

0x6393,	// (0x00051029) tabs_4_active_pane_ParamLimits

0x6393,	// (0x00051029) tabs_4_active_pane

0x63a4,	// (0x0005103a) tabs_4_passive_pane_ParamLimits

0x63a4,	// (0x0005103a) tabs_4_passive_pane

0x63b5,	// (0x0005104b) tabs_4_passive_pane_cp_ParamLimits

0x63b5,	// (0x0005104b) tabs_4_passive_pane_cp

0x63c6,	// (0x0005105c) tabs_4_passive_pane_cp2_ParamLimits

0x63c6,	// (0x0005105c) tabs_4_passive_pane_cp2

0x636f,	// (0x00051005) tabs_2_long_active_pane_ParamLimits

0x636f,	// (0x00051005) tabs_2_long_active_pane

0x6381,	// (0x00051017) tabs_2_long_passive_pane_ParamLimits

0x6381,	// (0x00051017) tabs_2_long_passive_pane

0x6330,	// (0x00050fc6) tabs_3_long_active_pane_ParamLimits

0x6330,	// (0x00050fc6) tabs_3_long_active_pane

0x6343,	// (0x00050fd9) tabs_3_long_passive_pane_ParamLimits

0x6343,	// (0x00050fd9) tabs_3_long_passive_pane

0x635c,	// (0x00050ff2) tabs_3_long_passive_pane_cp_ParamLimits

0x635c,	// (0x00050ff2) tabs_3_long_passive_pane_cp

0x62d6,	// (0x00050f6c) volume_small_pane_g1

0x62df,	// (0x00050f75) volume_small_pane_g2

0x62e8,	// (0x00050f7e) volume_small_pane_g3

0x62f1,	// (0x00050f87) volume_small_pane_g4

0x62fa,	// (0x00050f90) volume_small_pane_g5

0x6303,	// (0x00050f99) volume_small_pane_g6

0x630c,	// (0x00050fa2) volume_small_pane_g7

0x6315,	// (0x00050fab) volume_small_pane_g8

0x631e,	// (0x00050fb4) volume_small_pane_g9

0x6327,	// (0x00050fbd) volume_small_pane_g10

0x0009,

0xf8c1,	// (0x0005a557) volume_small_pane_g

0x7601,	// (0x00052297) bg_active_tab_pane_cp2_ParamLimits

0x7601,	// (0x00052297) bg_active_tab_pane_cp2

0x760f,	// (0x000522a5) tabs_3_active_pane_g1

0x7617,	// (0x000522ad) tabs_3_active_pane_t1

0x7601,	// (0x00052297) bg_passive_tab_pane_cp2_ParamLimits

0x7601,	// (0x00052297) bg_passive_tab_pane_cp2

0x760f,	// (0x000522a5) tabs_3_passive_pane_g1

0x7617,	// (0x000522ad) tabs_3_passive_pane_t1

0x7601,	// (0x00052297) bg_active_tab_pane_cp3_ParamLimits

0x7601,	// (0x00052297) bg_active_tab_pane_cp3

0x7629,	// (0x000522bf) tabs_4_active_pane_g1

0x7631,	// (0x000522c7) tabs_4_active_pane_t1

0x7601,	// (0x00052297) bg_passive_tab_pane_cp3_ParamLimits

0x7601,	// (0x00052297) bg_passive_tab_pane_cp3

0x7629,	// (0x000522bf) tabs_4_1_passive_pane_g1

0x7631,	// (0x000522c7) tabs_4_1_passive_pane_t1

0x9454,	// (0x000540ea) list_highlight_pane_cp2

0xae0c,	// (0x00055aa2) list_set_pane_ParamLimits

0xae0c,	// (0x00055aa2) list_set_pane

0xaeb2,	// (0x00055b48) main_pane_set_t1_ParamLimits

0xaeb2,	// (0x00055b48) main_pane_set_t1

0xaed2,	// (0x00055b68) main_pane_set_t2_ParamLimits

0xaed2,	// (0x00055b68) main_pane_set_t2

0xaee6,	// (0x00055b7c) main_pane_set_t3_ParamLimits

0xaee6,	// (0x00055b7c) main_pane_set_t3

0xaef8,	// (0x00055b8e) main_pane_set_t4_ParamLimits

0xaef8,	// (0x00055b8e) main_pane_set_t4

0x0003,

0xf991,	// (0x0005a627) main_pane_set_t_ParamLimits

0xf991,	// (0x0005a627) main_pane_set_t

0xaf0a,	// (0x00055ba0) setting_code_pane

0xaf16,	// (0x00055bac) setting_slider_graphic_pane

0xaf16,	// (0x00055bac) setting_slider_pane

0xaf16,	// (0x00055bac) setting_text_pane

0xaf16,	// (0x00055bac) setting_volume_pane

0x4d36,	// (0x0004f9cc) volume_set_pane

0x7601,	// (0x00052297) bg_set_opt_pane_cp

0x4d3e,	// (0x0004f9d4) setting_slider_pane_t1

0x4d57,	// (0x0004f9ed) setting_slider_pane_t2

0x4d71,	// (0x0004fa07) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0005a1fa) setting_slider_pane_t

0x4d89,	// (0x0004fa1f) slider_set_pane

0x7521,	// (0x000521b7) bg_set_opt_pane_cp2

0x7643,	// (0x000522d9) setting_slider_graphic_pane_g1

0x4d9f,	// (0x0004fa35) setting_slider_graphic_pane_t1

0x4daf,	// (0x0004fa45) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0005a201) setting_slider_graphic_pane_t

0x4dbf,	// (0x0004fa55) slider_set_pane_cp

0x7521,	// (0x000521b7) input_focus_pane_cp1

0xadcb,	// (0x00055a61) list_set_text_pane

0x7517,	// (0x000521ad) setting_text_pane_g1

0x7521,	// (0x000521b7) input_focus_pane_cp2

0x7517,	// (0x000521ad) setting_code_pane_g1

0x764c,	// (0x000522e2) setting_code_pane_t1

0x3f05,	// (0x0004eb9b) set_text_pane_t1_ParamLimits

0x3f05,	// (0x0004eb9b) set_text_pane_t1

0x8521,	// (0x000531b7) set_opt_bg_pane_g1

0x8529,	// (0x000531bf) set_opt_bg_pane_g2

0xada5,	// (0x00055a3b) set_opt_bg_pane_g3

0x8539,	// (0x000531cf) set_opt_bg_pane_g4

0x8541,	// (0x000531d7) set_opt_bg_pane_g5

0x8549,	// (0x000531df) set_opt_bg_pane_g6

0xadaf,	// (0x00055a45) set_opt_bg_pane_g7

0xadb7,	// (0x00055a4d) set_opt_bg_pane_g8

0xadc1,	// (0x00055a57) set_opt_bg_pane_g9

0x0008,

0xf97e,	// (0x0005a614) set_opt_bg_pane_g

0xad98,	// (0x00055a2e) slider_set_pane_g1

0x64c6,	// (0x0005115c) slider_set_pane_g2

0x0006,

0xf96f,	// (0x0005a605) slider_set_pane_g

0x643a,	// (0x000510d0) volume_set_pane_g1

0x6442,	// (0x000510d8) volume_set_pane_g2

0x644a,	// (0x000510e0) volume_set_pane_g3

0x6452,	// (0x000510e8) volume_set_pane_g4

0x645a,	// (0x000510f0) volume_set_pane_g5

0x6462,	// (0x000510f8) volume_set_pane_g6

0x646a,	// (0x00051100) volume_set_pane_g7

0x6472,	// (0x00051108) volume_set_pane_g8

0x647a,	// (0x00051110) volume_set_pane_g9

0x6482,	// (0x00051118) volume_set_pane_g10

0x0009,

0xf947,	// (0x0005a5dd) volume_set_pane_g

0x765a,	// (0x000522f0) indicator_pane_ParamLimits

0x765a,	// (0x000522f0) indicator_pane

0x7666,	// (0x000522fc) main_idle_pane_g2_ParamLimits

0x7666,	// (0x000522fc) main_idle_pane_g2

0x768e,	// (0x00052324) main_pane_idle_g1_ParamLimits

0x768e,	// (0x00052324) main_pane_idle_g1

0x769b,	// (0x00052331) popup_clock_digital_analogue_window_ParamLimits

0x769b,	// (0x00052331) popup_clock_digital_analogue_window

0x76b2,	// (0x00052348) soft_indicator_pane_ParamLimits

0x76b2,	// (0x00052348) soft_indicator_pane

0x76be,	// (0x00052354) wallpaper_pane_ParamLimits

0x76be,	// (0x00052354) wallpaper_pane

0x7517,	// (0x000521ad) wallpaper_pane_g1

0x76d2,	// (0x00052368) indicator_pane_g1_ParamLimits

0x76d2,	// (0x00052368) indicator_pane_g1

0xb189,	// (0x00055e1f) navi_navi_icon_text_pane_srt_g1

0x76ed,	// (0x00052383) soft_indicator_pane_t1

0x7707,	// (0x0005239d) aid_ps_area_pane

0x7718,	// (0x000523ae) aid_ps_clock_pane

0x7726,	// (0x000523bc) aid_ps_indicator_pane

0x7732,	// (0x000523c8) indicator_ps_pane_ParamLimits

0x7732,	// (0x000523c8) indicator_ps_pane

0x7741,	// (0x000523d7) power_save_pane_g1_ParamLimits

0x7741,	// (0x000523d7) power_save_pane_g1

0x774d,	// (0x000523e3) power_save_pane_g2_ParamLimits

0x774d,	// (0x000523e3) power_save_pane_g2

0x4947,	// (0x0004f5dd) aid_navinavi_width_pane

0x7707,	// (0x0005239d) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0005a206) power_save_pane_g_ParamLimits

0xf570,	// (0x0005a206) power_save_pane_g

0x775b,	// (0x000523f1) power_save_pane_t1_ParamLimits

0x775b,	// (0x000523f1) power_save_pane_t1

0x7718,	// (0x000523ae) aid_ps_clock_pane_ParamLimits

0x7726,	// (0x000523bc) aid_ps_indicator_pane_ParamLimits

0x776d,	// (0x00052403) power_save_pane_t4_ParamLimits

0x776d,	// (0x00052403) power_save_pane_t4

0x0001,

0xf575,	// (0x0005a20b) power_save_pane_t_ParamLimits

0xf575,	// (0x0005a20b) power_save_pane_t

0x7797,	// (0x0005242d) power_save_t3_ParamLimits

0x7797,	// (0x0005242d) power_save_t3

0x7782,	// (0x00052418) power_save_t2_ParamLimits

0x7782,	// (0x00052418) power_save_t2

0x77ac,	// (0x00052442) indicator_ps_pane_g1

0x77b5,	// (0x0005244b) ai_gene_pane_ParamLimits

0x77b5,	// (0x0005244b) ai_gene_pane

0x77c1,	// (0x00052457) ai_links_pane_ParamLimits

0x77c1,	// (0x00052457) ai_links_pane

0x77cd,	// (0x00052463) indicator_pane_cp1_ParamLimits

0x77cd,	// (0x00052463) indicator_pane_cp1

0x77d9,	// (0x0005246f) main_pane_idle_g1_cp_ParamLimits

0x77d9,	// (0x0005246f) main_pane_idle_g1_cp

0x77e5,	// (0x0005247b) popup_ai_links_title_window

0x77ee,	// (0x00052484) soft_indicator_pane_cp1_ParamLimits

0x77ee,	// (0x00052484) soft_indicator_pane_cp1

0xab71,	// (0x00055807) ai_links_pane_g1

0xab7a,	// (0x00055810) grid_ai_links_pane

0xab54,	// (0x000557ea) ai_gene_pane_1

0xab5f,	// (0x000557f5) ai_gene_pane_2

0xab68,	// (0x000557fe) list_highlight_pane_cp4

0xab38,	// (0x000557ce) cell_ai_link_pane_ParamLimits

0xab38,	// (0x000557ce) cell_ai_link_pane

0xab30,	// (0x000557c6) cell_ai_link_pane_g1

0x805f,	// (0x00052cf5) cell_ai_link_pane_g2

0x0001,

0xf922,	// (0x0005a5b8) cell_ai_link_pane_g

0x7521,	// (0x000521b7) grid_highlight_cp2

0x7521,	// (0x000521b7) bg_popup_sub_pane_cp1

0x7808,	// (0x0005249e) popup_ai_links_title_window_t1

0xaa7e,	// (0x00055714) ai_gene_pane_1_g1_ParamLimits

0xaa7e,	// (0x00055714) ai_gene_pane_1_g1

0xaa8a,	// (0x00055720) ai_gene_pane_1_g2_ParamLimits

0xaa8a,	// (0x00055720) ai_gene_pane_1_g2

0x0001,

0xf918,	// (0x0005a5ae) ai_gene_pane_1_g_ParamLimits

0xf918,	// (0x0005a5ae) ai_gene_pane_1_g

0xaa97,	// (0x0005572d) ai_gene_pane_1_t1_ParamLimits

0xaa97,	// (0x0005572d) ai_gene_pane_1_t1

0xaacb,	// (0x00055761) grid_ai_soft_ind_pane

0xaa69,	// (0x000556ff) ai_gene_pane_2_t1_ParamLimits

0xaa69,	// (0x000556ff) ai_gene_pane_2_t1

0x7817,	// (0x000524ad) main_pane_empty_t1_ParamLimits

0x7817,	// (0x000524ad) main_pane_empty_t1

0x782f,	// (0x000524c5) main_pane_empty_t2_ParamLimits

0x782f,	// (0x000524c5) main_pane_empty_t2

0x7844,	// (0x000524da) main_pane_empty_t3_ParamLimits

0x7844,	// (0x000524da) main_pane_empty_t3

0x7856,	// (0x000524ec) main_pane_empty_t4_ParamLimits

0x7856,	// (0x000524ec) main_pane_empty_t4

0x7868,	// (0x000524fe) main_pane_empty_t5_ParamLimits

0x7868,	// (0x000524fe) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0005a210) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0005a210) main_pane_empty_t

0x8572,	// (0x00053208) bg_popup_window_pane_ParamLimits

0x8572,	// (0x00053208) bg_popup_window_pane

0xa7e8,	// (0x0005547e) find_popup_pane_cp2_ParamLimits

0xa7e8,	// (0x0005547e) find_popup_pane_cp2

0xa7f4,	// (0x0005548a) heading_pane_ParamLimits

0xa7f4,	// (0x0005548a) heading_pane

0x7521,	// (0x000521b7) bg_popup_sub_pane

0xa762,	// (0x000553f8) bg_popup_window_pane_g1_ParamLimits

0xa762,	// (0x000553f8) bg_popup_window_pane_g1

0xa76e,	// (0x00055404) bg_popup_window_pane_g2_ParamLimits

0xa76e,	// (0x00055404) bg_popup_window_pane_g2

0xa77a,	// (0x00055410) bg_popup_window_pane_g3_ParamLimits

0xa77a,	// (0x00055410) bg_popup_window_pane_g3

0xa786,	// (0x0005541c) bg_popup_window_pane_g4_ParamLimits

0xa786,	// (0x0005541c) bg_popup_window_pane_g4

0xa792,	// (0x00055428) bg_popup_window_pane_g5_ParamLimits

0xa792,	// (0x00055428) bg_popup_window_pane_g5

0xa79e,	// (0x00055434) bg_popup_window_pane_g6_ParamLimits

0xa79e,	// (0x00055434) bg_popup_window_pane_g6

0xa7aa,	// (0x00055440) bg_popup_window_pane_g7_ParamLimits

0xa7aa,	// (0x00055440) bg_popup_window_pane_g7

0xa7b6,	// (0x0005544c) bg_popup_window_pane_g8_ParamLimits

0xa7b6,	// (0x0005544c) bg_popup_window_pane_g8

0xa7c2,	// (0x00055458) bg_popup_window_pane_g9_ParamLimits

0xa7c2,	// (0x00055458) bg_popup_window_pane_g9

0xa7ce,	// (0x00055464) bg_popup_window_pane_g10_ParamLimits

0xa7ce,	// (0x00055464) bg_popup_window_pane_g10

0x0009,

0xf8e0,	// (0x0005a576) bg_popup_window_pane_g_ParamLimits

0xf8e0,	// (0x0005a576) bg_popup_window_pane_g

0xa6f7,	// (0x0005538d) bg_popup_heading_pane_ParamLimits

0xa6f7,	// (0x0005538d) bg_popup_heading_pane

0x65c7,	// (0x0005125d) tabs_4_passive_pane_cp_srt_ParamLimits

0x65c7,	// (0x0005125d) tabs_4_passive_pane_cp_srt

0x65d9,	// (0x0005126f) tabs_4_passive_pane_srt_ParamLimits

0xa70b,	// (0x000553a1) heading_pane_g2

0x65d9,	// (0x0005126f) tabs_4_passive_pane_srt

0x9454,	// (0x000540ea) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9454,	// (0x000540ea) bg_passive_tab_pane_cp3_srt

0xa713,	// (0x000553a9) heading_pane_t1_ParamLimits

0xa713,	// (0x000553a9) heading_pane_t1

0xa72a,	// (0x000553c0) heading_pane_t2_ParamLimits

0xa72a,	// (0x000553c0) heading_pane_t2

0x0001,

0xf8db,	// (0x0005a571) heading_pane_t_ParamLimits

0xf8db,	// (0x0005a571) heading_pane_t

0xa224,	// (0x00054eba) bg_popup_heading_pane_g1

0xa2d3,	// (0x00054f69) bg_popup_heading_pane_g2

0xa2dd,	// (0x00054f73) bg_popup_heading_pane_g3

0xa2e7,	// (0x00054f7d) bg_popup_heading_pane_g4

0xa2f1,	// (0x00054f87) bg_popup_heading_pane_g5

0xa2fb,	// (0x00054f91) bg_popup_heading_pane_g6

0xa303,	// (0x00054f99) bg_popup_heading_pane_g7

0xa30b,	// (0x00054fa1) bg_popup_heading_pane_g8

0xa315,	// (0x00054fab) bg_popup_heading_pane_g9

0x0008,

0xf897,	// (0x0005a52d) bg_popup_heading_pane_g

0x9964,	// (0x000545fa) bg_popup_sub_pane_g1

0x9974,	// (0x0005460a) bg_popup_sub_pane_g2

0x996c,	// (0x00054602) bg_popup_sub_pane_g3

0x9984,	// (0x0005461a) bg_popup_sub_pane_g4

0x997c,	// (0x00054612) bg_popup_sub_pane_g5

0x998c,	// (0x00054622) bg_popup_sub_pane_g6

0x9994,	// (0x0005462a) bg_popup_sub_pane_g7

0x99a4,	// (0x0005463a) bg_popup_sub_pane_g8

0x999c,	// (0x00054632) bg_popup_sub_pane_g9

0x0008,

0xf871,	// (0x0005a507) bg_popup_sub_pane_g

0x787c,	// (0x00052512) bg_popup_window_pane_cp5_ParamLimits

0x787c,	// (0x00052512) bg_popup_window_pane_cp5

0x7898,	// (0x0005252e) popup_note_window_g1_ParamLimits

0x7898,	// (0x0005252e) popup_note_window_g1

0x78a4,	// (0x0005253a) popup_note_window_t1_ParamLimits

0x78a4,	// (0x0005253a) popup_note_window_t1

0x78ba,	// (0x00052550) popup_note_window_t2_ParamLimits

0x78ba,	// (0x00052550) popup_note_window_t2

0x78d0,	// (0x00052566) popup_note_window_t3_ParamLimits

0x78d0,	// (0x00052566) popup_note_window_t3

0x78e6,	// (0x0005257c) popup_note_window_t4_ParamLimits

0x78e6,	// (0x0005257c) popup_note_window_t4

0x790e,	// (0x000525a4) popup_note_window_t5_ParamLimits

0x790e,	// (0x000525a4) popup_note_window_t5

0x0004,

0xf585,	// (0x0005a21b) popup_note_window_t_ParamLimits

0xf585,	// (0x0005a21b) popup_note_window_t

0x7932,	// (0x000525c8) bg_popup_window_pane_cp6_ParamLimits

0x7932,	// (0x000525c8) bg_popup_window_pane_cp6

0xa1a0,	// (0x00054e36) popup_note_image_window_g1_ParamLimits

0xa1a0,	// (0x00054e36) popup_note_image_window_g1

0xa1ac,	// (0x00054e42) popup_note_image_window_g2_ParamLimits

0xa1ac,	// (0x00054e42) popup_note_image_window_g2

0x0001,

0xf865,	// (0x0005a4fb) popup_note_image_window_g_ParamLimits

0xf865,	// (0x0005a4fb) popup_note_image_window_g

0xa1c5,	// (0x00054e5b) popup_note_image_window_t1_ParamLimits

0xa1c5,	// (0x00054e5b) popup_note_image_window_t1

0xa1de,	// (0x00054e74) popup_note_image_window_t2_ParamLimits

0xa1de,	// (0x00054e74) popup_note_image_window_t2

0xa1f7,	// (0x00054e8d) popup_note_image_window_t3_ParamLimits

0xa1f7,	// (0x00054e8d) popup_note_image_window_t3

0x0002,

0xf86a,	// (0x0005a500) popup_note_image_window_t_ParamLimits

0xf86a,	// (0x0005a500) popup_note_image_window_t

0xa03f,	// (0x00054cd5) bg_popup_window_pane_cp7_ParamLimits

0xa03f,	// (0x00054cd5) bg_popup_window_pane_cp7

0xa06f,	// (0x00054d05) popup_note_wait_window_g1_ParamLimits

0xa06f,	// (0x00054d05) popup_note_wait_window_g1

0xa07b,	// (0x00054d11) popup_note_wait_window_g2_ParamLimits

0xa07b,	// (0x00054d11) popup_note_wait_window_g2

0x0002,

0xf853,	// (0x0005a4e9) popup_note_wait_window_g_ParamLimits

0xf853,	// (0x0005a4e9) popup_note_wait_window_g

0xa093,	// (0x00054d29) popup_note_wait_window_t1_ParamLimits

0xa093,	// (0x00054d29) popup_note_wait_window_t1

0xa0ba,	// (0x00054d50) popup_note_wait_window_t2_ParamLimits

0xa0ba,	// (0x00054d50) popup_note_wait_window_t2

0xa0d7,	// (0x00054d6d) popup_note_wait_window_t3_ParamLimits

0xa0d7,	// (0x00054d6d) popup_note_wait_window_t3

0xa10c,	// (0x00054da2) popup_note_wait_window_t4_ParamLimits

0xa10c,	// (0x00054da2) popup_note_wait_window_t4

0x0004,

0xf85a,	// (0x0005a4f0) popup_note_wait_window_t_ParamLimits

0xf85a,	// (0x0005a4f0) popup_note_wait_window_t

0xa131,	// (0x00054dc7) wait_bar_pane_ParamLimits

0xa131,	// (0x00054dc7) wait_bar_pane

0x7521,	// (0x000521b7) wait_anim_pane

0x7521,	// (0x000521b7) wait_border_pane

0x7517,	// (0x000521ad) wait_anim_pane_g1

0x7517,	// (0x000521ad) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x0005a3a4) wait_anim_pane_g

0x9fe3,	// (0x00054c79) wait_border_pane_g1

0x9fee,	// (0x00054c84) wait_border_pane_g2

0x9ff7,	// (0x00054c8d) wait_border_pane_g3

0x0002,

0xf84c,	// (0x0005a4e2) wait_border_pane_g

0x9e4e,	// (0x00054ae4) bg_popup_window_pane_cp16_ParamLimits

0x9e4e,	// (0x00054ae4) bg_popup_window_pane_cp16

0x9f4e,	// (0x00054be4) indicator_popup_pane_cp4_ParamLimits

0x9f4e,	// (0x00054be4) indicator_popup_pane_cp4

0x9f62,	// (0x00054bf8) popup_query_data_window_t1_ParamLimits

0x9f62,	// (0x00054bf8) popup_query_data_window_t1

0x9f74,	// (0x00054c0a) popup_query_data_window_t2_ParamLimits

0x9f74,	// (0x00054c0a) popup_query_data_window_t2

0x9f8d,	// (0x00054c23) popup_query_data_window_t3_ParamLimits

0x9f8d,	// (0x00054c23) popup_query_data_window_t3

0x0002,

0xf845,	// (0x0005a4db) popup_query_data_window_t_ParamLimits

0xf845,	// (0x0005a4db) popup_query_data_window_t

0x9fa7,	// (0x00054c3d) query_popup_data_pane_ParamLimits

0x9fa7,	// (0x00054c3d) query_popup_data_pane

0x9fbb,	// (0x00054c51) query_popup_data_pane_cp1_ParamLimits

0x9fbb,	// (0x00054c51) query_popup_data_pane_cp1

0x9e4e,	// (0x00054ae4) bg_popup_window_pane_cp10_ParamLimits

0x9e4e,	// (0x00054ae4) bg_popup_window_pane_cp10

0x9e80,	// (0x00054b16) indicator_popup_pane_ParamLimits

0x9e80,	// (0x00054b16) indicator_popup_pane

0x9ea2,	// (0x00054b38) popup_query_code_window_t1_ParamLimits

0x9ea2,	// (0x00054b38) popup_query_code_window_t1

0x9ebc,	// (0x00054b52) popup_query_code_window_t2_ParamLimits

0x9ebc,	// (0x00054b52) popup_query_code_window_t2

0x9f05,	// (0x00054b9b) popup_query_code_window_t3_ParamLimits

0x9f05,	// (0x00054b9b) popup_query_code_window_t3

0x0002,

0xf83e,	// (0x0005a4d4) popup_query_code_window_t_ParamLimits

0xf83e,	// (0x0005a4d4) popup_query_code_window_t

0x9f34,	// (0x00054bca) query_popup_pane_ParamLimits

0x9f34,	// (0x00054bca) query_popup_pane

0x7932,	// (0x000525c8) bg_popup_window_pane_cp15_ParamLimits

0x7932,	// (0x000525c8) bg_popup_window_pane_cp15

0x7950,	// (0x000525e6) indicator_popup_pane_cp1_ParamLimits

0x7950,	// (0x000525e6) indicator_popup_pane_cp1

0x7963,	// (0x000525f9) indicator_popup_pane_cp2_ParamLimits

0x7963,	// (0x000525f9) indicator_popup_pane_cp2

0x7976,	// (0x0005260c) popup_query_data_code_window_g1_ParamLimits

0x7976,	// (0x0005260c) popup_query_data_code_window_g1

0x7989,	// (0x0005261f) popup_query_data_code_window_t1_ParamLimits

0x7989,	// (0x0005261f) popup_query_data_code_window_t1

0x799b,	// (0x00052631) popup_query_data_code_window_t2_ParamLimits

0x799b,	// (0x00052631) popup_query_data_code_window_t2

0x7fee,	// (0x00052c84) popup_query_data_code_window_t3_ParamLimits

0x7fee,	// (0x00052c84) popup_query_data_code_window_t3

0x8004,	// (0x00052c9a) popup_query_data_code_window_t4_ParamLimits

0x8004,	// (0x00052c9a) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0005a226) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0005a226) popup_query_data_code_window_t

0x6181,	// (0x00050e17) list_single_midp_graphic_pane_g3

0x801c,	// (0x00052cb2) query_popup_data_pane_cp2_ParamLimits

0x802f,	// (0x00052cc5) query_popup_pane_cp2_ParamLimits

0x802f,	// (0x00052cc5) query_popup_pane_cp2

0x7521,	// (0x000521b7) bg_popup_window_pane_cp11

0x9e46,	// (0x00054adc) heading_pane_cp5

0x8117,	// (0x00052dad) listscroll_popup_info_pane

0x7521,	// (0x000521b7) input_focus_pane_cp3

0x8042,	// (0x00052cd8) query_popup_pane_t1

0x8050,	// (0x00052ce6) list_popup_info_pane_ParamLimits

0x8050,	// (0x00052ce6) list_popup_info_pane

0x805f,	// (0x00052cf5) listscroll_popup_info_pane_g1

0x8067,	// (0x00052cfd) scroll_pane_cp7

0x8071,	// (0x00052d07) popup_info_list_pane_t1_ParamLimits

0x8071,	// (0x00052d07) popup_info_list_pane_t1

0x808b,	// (0x00052d21) popup_info_list_pane_t2_ParamLimits

0x808b,	// (0x00052d21) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0005a22f) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0005a22f) popup_info_list_pane_t

0x7521,	// (0x000521b7) bg_popup_window_pane_cp12

0xb1a3,	// (0x00055e39) find_popup_pane

0x7601,	// (0x00052297) bg_popup_window_pane_cp3

0x80a5,	// (0x00052d3b) heading_pane_cp3

0x80b1,	// (0x00052d47) listscroll_popup_graphic_pane

0x7521,	// (0x000521b7) bg_popup_window_pane_cp4

0x810d,	// (0x00052da3) heading_pane_cp4

0x8117,	// (0x00052dad) listscroll_popup_colour_pane

0x811f,	// (0x00052db5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x811f,	// (0x00052db5) cell_large_graphic_colour_none_popup_pane

0x8133,	// (0x00052dc9) grid_large_graphic_colour_popup_pane_ParamLimits

0x8133,	// (0x00052dc9) grid_large_graphic_colour_popup_pane

0x815f,	// (0x00052df5) listscroll_popup_colour_pane_g1_ParamLimits

0x815f,	// (0x00052df5) listscroll_popup_colour_pane_g1

0x8176,	// (0x00052e0c) listscroll_popup_colour_pane_g2_ParamLimits

0x8176,	// (0x00052e0c) listscroll_popup_colour_pane_g2

0x818d,	// (0x00052e23) listscroll_popup_colour_pane_g3_ParamLimits

0x818d,	// (0x00052e23) listscroll_popup_colour_pane_g3

0x819d,	// (0x00052e33) listscroll_popup_colour_pane_g4_ParamLimits

0x819d,	// (0x00052e33) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0005a234) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0005a234) listscroll_popup_colour_pane_g

0x81b1,	// (0x00052e47) scroll_pane_cp6_ParamLimits

0x81b1,	// (0x00052e47) scroll_pane_cp6

0x81c3,	// (0x00052e59) cell_large_graphic_colour_popup_pane_ParamLimits

0x81c3,	// (0x00052e59) cell_large_graphic_colour_popup_pane

0x81e2,	// (0x00052e78) cell_large_graphic_colour_none_popup_pane_t1

0x7521,	// (0x000521b7) grid_highlight_pane_cp5

0x81f1,	// (0x00052e87) cell_large_graphic_colour_popup_pane_g1

0x81f9,	// (0x00052e8f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0005a23d) cell_large_graphic_colour_popup_pane_g

0x8201,	// (0x00052e97) cell_large_graphic_colour_popup_pane_g2_copy1

0x820a,	// (0x00052ea0) grid_highlight_pane_cp4

0x8212,	// (0x00052ea8) bg_popup_window_pane_cp8_ParamLimits

0x8212,	// (0x00052ea8) bg_popup_window_pane_cp8

0x822d,	// (0x00052ec3) popup_snote_single_text_window_g1_ParamLimits

0x822d,	// (0x00052ec3) popup_snote_single_text_window_g1

0x823f,	// (0x00052ed5) popup_snote_single_text_window_t1_ParamLimits

0x823f,	// (0x00052ed5) popup_snote_single_text_window_t1

0x8252,	// (0x00052ee8) popup_snote_single_text_window_t2_ParamLimits

0x8252,	// (0x00052ee8) popup_snote_single_text_window_t2

0x8265,	// (0x00052efb) popup_snote_single_text_window_t3_ParamLimits

0x8265,	// (0x00052efb) popup_snote_single_text_window_t3

0x829e,	// (0x00052f34) popup_snote_single_text_window_t4_ParamLimits

0x829e,	// (0x00052f34) popup_snote_single_text_window_t4

0x82d2,	// (0x00052f68) popup_snote_single_text_window_t5_ParamLimits

0x82d2,	// (0x00052f68) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0005a242) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0005a242) popup_snote_single_text_window_t

0x8301,	// (0x00052f97) bg_popup_window_pane_cp9_ParamLimits

0x8301,	// (0x00052f97) bg_popup_window_pane_cp9

0x822d,	// (0x00052ec3) popup_snote_single_graphic_window_g1_ParamLimits

0x822d,	// (0x00052ec3) popup_snote_single_graphic_window_g1

0x830f,	// (0x00052fa5) popup_snote_single_graphic_window_g2_ParamLimits

0x830f,	// (0x00052fa5) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0005a24d) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0005a24d) popup_snote_single_graphic_window_g

0x831b,	// (0x00052fb1) popup_snote_single_graphic_window_t1_ParamLimits

0x831b,	// (0x00052fb1) popup_snote_single_graphic_window_t1

0x832e,	// (0x00052fc4) popup_snote_single_graphic_window_t2_ParamLimits

0x832e,	// (0x00052fc4) popup_snote_single_graphic_window_t2

0x8341,	// (0x00052fd7) popup_snote_single_graphic_window_t3_ParamLimits

0x8341,	// (0x00052fd7) popup_snote_single_graphic_window_t3

0x837a,	// (0x00053010) popup_snote_single_graphic_window_t4_ParamLimits

0x837a,	// (0x00053010) popup_snote_single_graphic_window_t4

0x83ae,	// (0x00053044) popup_snote_single_graphic_window_t5_ParamLimits

0x83ae,	// (0x00053044) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0005a252) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0005a252) popup_snote_single_graphic_window_t

0xb0e7,	// (0x00055d7d) grid_graphic_popup_pane_ParamLimits

0xb0e7,	// (0x00055d7d) grid_graphic_popup_pane

0xb10f,	// (0x00055da5) listscroll_popup_graphic_pane_g1_ParamLimits

0xb10f,	// (0x00055da5) listscroll_popup_graphic_pane_g1

0xb123,	// (0x00055db9) listscroll_popup_graphic_pane_g2_ParamLimits

0xb123,	// (0x00055db9) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bb,	// (0x0005a651) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bb,	// (0x0005a651) listscroll_popup_graphic_pane_g

0xb137,	// (0x00055dcd) scroll_pane_cp5

0xb090,	// (0x00055d26) cell_graphic_popup_pane_ParamLimits

0xb090,	// (0x00055d26) cell_graphic_popup_pane

0xb071,	// (0x00055d07) cell_graphic_popup_pane_g1

0xb079,	// (0x00055d0f) cell_graphic_popup_pane_g2

0x8201,	// (0x00052e97) cell_graphic_popup_pane_g3

0x0002,

0xf9b4,	// (0x0005a64a) cell_graphic_popup_pane_g

0xb082,	// (0x00055d18) cell_graphic_popup_pane_t2

0x820a,	// (0x00052ea0) grid_highlight_pane_cp3

0x83ef,	// (0x00053085) list_gen_pane_ParamLimits

0x83ef,	// (0x00053085) list_gen_pane

0x8421,	// (0x000530b7) scroll_pane

0xafc9,	// (0x00055c5f) bg_list_pane_g1_ParamLimits

0xafc9,	// (0x00055c5f) bg_list_pane_g1

0xafe6,	// (0x00055c7c) bg_list_pane_g2_ParamLimits

0xafe6,	// (0x00055c7c) bg_list_pane_g2

0xaffb,	// (0x00055c91) bg_list_pane_g3_ParamLimits

0xaffb,	// (0x00055c91) bg_list_pane_g3

0xb00f,	// (0x00055ca5) bg_list_pane_g4_ParamLimits

0xb00f,	// (0x00055ca5) bg_list_pane_g4

0xb023,	// (0x00055cb9) bg_list_pane_g5_ParamLimits

0xb023,	// (0x00055cb9) bg_list_pane_g5

0x0004,

0xf9a9,	// (0x0005a63f) bg_list_pane_g_ParamLimits

0xf9a9,	// (0x0005a63f) bg_list_pane_g

0x6570,	// (0x00051206) list_double2_graphic_large_graphic_pane_ParamLimits

0x6570,	// (0x00051206) list_double2_graphic_large_graphic_pane

0x6570,	// (0x00051206) list_double2_graphic_pane_ParamLimits

0x6570,	// (0x00051206) list_double2_graphic_pane

0x6570,	// (0x00051206) list_double2_large_graphic_pane_ParamLimits

0x6570,	// (0x00051206) list_double2_large_graphic_pane

0xafae,	// (0x00055c44) list_double2_pane_ParamLimits

0xafae,	// (0x00055c44) list_double2_pane

0x6570,	// (0x00051206) list_double_graphic_heading_pane_ParamLimits

0x6570,	// (0x00051206) list_double_graphic_heading_pane

0x6570,	// (0x00051206) list_double_graphic_pane_ParamLimits

0x6570,	// (0x00051206) list_double_graphic_pane

0x6570,	// (0x00051206) list_double_heading_pane_ParamLimits

0x6570,	// (0x00051206) list_double_heading_pane

0x6570,	// (0x00051206) list_double_large_graphic_pane_ParamLimits

0x6570,	// (0x00051206) list_double_large_graphic_pane

0x6570,	// (0x00051206) list_double_number_pane_ParamLimits

0x6570,	// (0x00051206) list_double_number_pane

0x6570,	// (0x00051206) list_double_pane_ParamLimits

0x6570,	// (0x00051206) list_double_pane

0x6570,	// (0x00051206) list_double_time_pane_ParamLimits

0x6570,	// (0x00051206) list_double_time_pane

0x6570,	// (0x00051206) list_setting_number_pane_ParamLimits

0x6570,	// (0x00051206) list_setting_number_pane

0x6570,	// (0x00051206) list_setting_pane_ParamLimits

0x6570,	// (0x00051206) list_setting_pane

0x7a6c,	// (0x00052702) list_single_2graphic_pane_ParamLimits

0x7a6c,	// (0x00052702) list_single_2graphic_pane

0x7a6c,	// (0x00052702) list_single_graphic_heading_pane_ParamLimits

0x7a6c,	// (0x00052702) list_single_graphic_heading_pane

0x7a6c,	// (0x00052702) list_single_graphic_pane_ParamLimits

0x7a6c,	// (0x00052702) list_single_graphic_pane

0x7a6c,	// (0x00052702) list_single_heading_pane_ParamLimits

0x7a6c,	// (0x00052702) list_single_heading_pane

0x7ac2,	// (0x00052758) list_single_large_graphic_pane_ParamLimits

0x7ac2,	// (0x00052758) list_single_large_graphic_pane

0x7a6c,	// (0x00052702) list_single_number_heading_pane_ParamLimits

0x7a6c,	// (0x00052702) list_single_number_heading_pane

0x7a6c,	// (0x00052702) list_single_number_pane_ParamLimits

0x7a6c,	// (0x00052702) list_single_number_pane

0x7a6c,	// (0x00052702) list_single_pane_ParamLimits

0x7a6c,	// (0x00052702) list_single_pane

0x7521,	// (0x000521b7) list_highlight_pane_cp1

0x79ad,	// (0x00052643) list_single_pane_g1_ParamLimits

0x79ad,	// (0x00052643) list_single_pane_g1

0x79b9,	// (0x0005264f) list_single_pane_g2_ParamLimits

0x79b9,	// (0x0005264f) list_single_pane_g2

0x0001,

0xf5d8,	// (0x0005a26e) list_single_pane_g_ParamLimits

0xf5d8,	// (0x0005a26e) list_single_pane_g

0x655a,	// (0x000511f0) list_single_pane_t1_ParamLimits

0x655a,	// (0x000511f0) list_single_pane_t1

0x79ad,	// (0x00052643) list_single_number_pane_g1_ParamLimits

0x79ad,	// (0x00052643) list_single_number_pane_g1

0x79b9,	// (0x0005264f) list_single_number_pane_g2_ParamLimits

0x79b9,	// (0x0005264f) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x0005a26e) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x0005a26e) list_single_number_pane_g

0x648a,	// (0x00051120) list_single_number_pane_t1_ParamLimits

0x648a,	// (0x00051120) list_single_number_pane_t1

0x64a0,	// (0x00051136) list_single_number_pane_t2_ParamLimits

0x64a0,	// (0x00051136) list_single_number_pane_t2

0x0001,

0xf96a,	// (0x0005a600) list_single_number_pane_t_ParamLimits

0xf96a,	// (0x0005a600) list_single_number_pane_t

0x4dc7,	// (0x0004fa5d) list_single_graphic_pane_g1_ParamLimits

0x4dc7,	// (0x0004fa5d) list_single_graphic_pane_g1

0x79ad,	// (0x00052643) list_single_graphic_pane_g2_ParamLimits

0x79ad,	// (0x00052643) list_single_graphic_pane_g2

0x79b9,	// (0x0005264f) list_single_graphic_pane_g3_ParamLimits

0x79b9,	// (0x0005264f) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0005a25d) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0005a25d) list_single_graphic_pane_g

0x4dd3,	// (0x0004fa69) list_single_graphic_pane_t1_ParamLimits

0x4dd3,	// (0x0004fa69) list_single_graphic_pane_t1

0x4de9,	// (0x0004fa7f) list_single_heading_pane_g1_ParamLimits

0x4de9,	// (0x0004fa7f) list_single_heading_pane_g1

0x79b9,	// (0x0005264f) list_single_heading_pane_g2_ParamLimits

0x79b9,	// (0x0005264f) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0005a264) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0005a264) list_single_heading_pane_g

0x4dfc,	// (0x0004fa92) list_single_heading_pane_t1_ParamLimits

0x4dfc,	// (0x0004fa92) list_single_heading_pane_t1

0x79c5,	// (0x0005265b) list_single_heading_pane_t2_ParamLimits

0x79c5,	// (0x0005265b) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0005a269) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0005a269) list_single_heading_pane_t

0x79ad,	// (0x00052643) list_single_number_heading_pane_g1_ParamLimits

0x79ad,	// (0x00052643) list_single_number_heading_pane_g1

0x79b9,	// (0x0005264f) list_single_number_heading_pane_g2_ParamLimits

0x79b9,	// (0x0005264f) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x0005a26e) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x0005a26e) list_single_number_heading_pane_g

0x4e12,	// (0x0004faa8) list_single_number_heading_pane_t1_ParamLimits

0x4e12,	// (0x0004faa8) list_single_number_heading_pane_t1

0x4e28,	// (0x0004fabe) list_single_number_heading_pane_t2_ParamLimits

0x4e28,	// (0x0004fabe) list_single_number_heading_pane_t2

0x4e3a,	// (0x0004fad0) list_single_number_heading_pane_t3_ParamLimits

0x4e3a,	// (0x0004fad0) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x0005a273) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x0005a273) list_single_number_heading_pane_t

0x4e4c,	// (0x0004fae2) list_single_graphic_heading_pane_g1_ParamLimits

0x4e4c,	// (0x0004fae2) list_single_graphic_heading_pane_g1

0x79d7,	// (0x0005266d) list_single_graphic_heading_pane_g4_ParamLimits

0x79d7,	// (0x0005266d) list_single_graphic_heading_pane_g4

0x79b9,	// (0x0005264f) list_single_graphic_heading_pane_g5_ParamLimits

0x79b9,	// (0x0005264f) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x0005a27a) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x0005a27a) list_single_graphic_heading_pane_g

0x4e12,	// (0x0004faa8) list_single_graphic_heading_pane_t1_ParamLimits

0x4e12,	// (0x0004faa8) list_single_graphic_heading_pane_t1

0x4e64,	// (0x0004fafa) list_single_graphic_heading_pane_t2_ParamLimits

0x4e64,	// (0x0004fafa) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x0005a281) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x0005a281) list_single_graphic_heading_pane_t

0x79e8,	// (0x0005267e) list_single_large_graphic_pane_g1_ParamLimits

0x79e8,	// (0x0005267e) list_single_large_graphic_pane_g1

0x79f4,	// (0x0005268a) list_single_large_graphic_pane_g2_ParamLimits

0x79f4,	// (0x0005268a) list_single_large_graphic_pane_g2

0x7a00,	// (0x00052696) list_single_large_graphic_pane_g3_ParamLimits

0x7a00,	// (0x00052696) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0005a286) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0005a286) list_single_large_graphic_pane_g

0x9fee,	// (0x00054c84) wait_border_pane_g2_copy1

0x7a0c,	// (0x000526a2) list_single_large_graphic_pane_g4_cp2

0x4e7a,	// (0x0004fb10) list_single_large_graphic_pane_t1_ParamLimits

0x4e7a,	// (0x0004fb10) list_single_large_graphic_pane_t1

0x8455,	// (0x000530eb) list_double_pane_g1_ParamLimits

0x8455,	// (0x000530eb) list_double_pane_g1

0x4e90,	// (0x0004fb26) list_double_pane_g2_ParamLimits

0x4e90,	// (0x0004fb26) list_double_pane_g2

0x0001,

0xf5f7,	// (0x0005a28d) list_double_pane_g_ParamLimits

0xf5f7,	// (0x0005a28d) list_double_pane_g

0x4e9c,	// (0x0004fb32) list_double_pane_t1_ParamLimits

0x4e9c,	// (0x0004fb32) list_double_pane_t1

0x4eb2,	// (0x0004fb48) list_double_pane_t2_ParamLimits

0x4eb2,	// (0x0004fb48) list_double_pane_t2

0x0001,

0xf5fc,	// (0x0005a292) list_double_pane_t_ParamLimits

0xf5fc,	// (0x0005a292) list_double_pane_t

0x4ec4,	// (0x0004fb5a) list_double2_pane_g1_ParamLimits

0x4ec4,	// (0x0004fb5a) list_double2_pane_g1

0x4ed5,	// (0x0004fb6b) list_double2_pane_g2_ParamLimits

0x4ed5,	// (0x0004fb6b) list_double2_pane_g2

0x0001,

0xf601,	// (0x0005a297) list_double2_pane_g_ParamLimits

0xf601,	// (0x0005a297) list_double2_pane_g

0x4ee1,	// (0x0004fb77) list_double2_pane_t1_ParamLimits

0x4ee1,	// (0x0004fb77) list_double2_pane_t1

0x4ef7,	// (0x0004fb8d) list_double2_pane_t2_ParamLimits

0x4ef7,	// (0x0004fb8d) list_double2_pane_t2

0x0001,

0xf606,	// (0x0005a29c) list_double2_pane_t_ParamLimits

0xf606,	// (0x0005a29c) list_double2_pane_t

0x8455,	// (0x000530eb) list_double_number_pane_g1_ParamLimits

0x8455,	// (0x000530eb) list_double_number_pane_g1

0x4e90,	// (0x0004fb26) list_double_number_pane_g2_ParamLimits

0x4e90,	// (0x0004fb26) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x0005a28d) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x0005a28d) list_double_number_pane_g

0x4f09,	// (0x0004fb9f) list_double_number_pane_t1_ParamLimits

0x4f09,	// (0x0004fb9f) list_double_number_pane_t1

0x4f1b,	// (0x0004fbb1) list_double_number_pane_t2_ParamLimits

0x4f1b,	// (0x0004fbb1) list_double_number_pane_t2

0x4f31,	// (0x0004fbc7) list_double_number_pane_t3_ParamLimits

0x4f31,	// (0x0004fbc7) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x0005a2a1) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x0005a2a1) list_double_number_pane_t

0x4f43,	// (0x0004fbd9) list_double_graphic_pane_g1_ParamLimits

0x4f43,	// (0x0004fbd9) list_double_graphic_pane_g1

0x9602,	// (0x00054298) list_double_graphic_pane_g2_ParamLimits

0x9602,	// (0x00054298) list_double_graphic_pane_g2

0x4f4f,	// (0x0004fbe5) list_double_graphic_pane_g3_ParamLimits

0x4f4f,	// (0x0004fbe5) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x0005a2a8) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x0005a2a8) list_double_graphic_pane_g

0x4f67,	// (0x0004fbfd) list_double_graphic_pane_t1_ParamLimits

0x4f67,	// (0x0004fbfd) list_double_graphic_pane_t1

0x4f7d,	// (0x0004fc13) list_double_graphic_pane_t2_ParamLimits

0x4f7d,	// (0x0004fc13) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x0005a2b1) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x0005a2b1) list_double_graphic_pane_t

0x4f8f,	// (0x0004fc25) list_double2_graphic_pane_g1_ParamLimits

0x4f8f,	// (0x0004fc25) list_double2_graphic_pane_g1

0x4f9b,	// (0x0004fc31) list_double2_graphic_pane_g2_ParamLimits

0x4f9b,	// (0x0004fc31) list_double2_graphic_pane_g2

0x4fa7,	// (0x0004fc3d) list_double2_graphic_pane_g3_ParamLimits

0x4fa7,	// (0x0004fc3d) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x0005a2b6) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x0005a2b6) list_double2_graphic_pane_g

0x4fb3,	// (0x0004fc49) list_double2_graphic_pane_t1_ParamLimits

0x4fb3,	// (0x0004fc49) list_double2_graphic_pane_t1

0x4fc9,	// (0x0004fc5f) list_double2_graphic_pane_t2_ParamLimits

0x4fc9,	// (0x0004fc5f) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x0005a2bd) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x0005a2bd) list_double2_graphic_pane_t

0x4fdb,	// (0x0004fc71) list_double_large_graphic_pane_g1_ParamLimits

0x4fdb,	// (0x0004fc71) list_double_large_graphic_pane_g1

0x5004,	// (0x0004fc9a) list_double_large_graphic_pane_g2_ParamLimits

0x5004,	// (0x0004fc9a) list_double_large_graphic_pane_g2

0x4e90,	// (0x0004fb26) list_double_large_graphic_pane_g3_ParamLimits

0x4e90,	// (0x0004fb26) list_double_large_graphic_pane_g3

0x501a,	// (0x0004fcb0) list_double_large_graphic_pane_g4_ParamLimits

0x501a,	// (0x0004fcb0) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x0005a2c2) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0005a2c2) list_double_large_graphic_pane_g

0x502b,	// (0x0004fcc1) list_double_large_graphic_pane_t1_ParamLimits

0x502b,	// (0x0004fcc1) list_double_large_graphic_pane_t1

0x5044,	// (0x0004fcda) list_double_large_graphic_pane_t2_ParamLimits

0x5044,	// (0x0004fcda) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x0005a2cd) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x0005a2cd) list_double_large_graphic_pane_t

0x5056,	// (0x0004fcec) list_double2_large_graphic_pane_g1_ParamLimits

0x5056,	// (0x0004fcec) list_double2_large_graphic_pane_g1

0x5062,	// (0x0004fcf8) list_double2_large_graphic_pane_g2_ParamLimits

0x5062,	// (0x0004fcf8) list_double2_large_graphic_pane_g2

0x4fa7,	// (0x0004fc3d) list_double2_large_graphic_pane_g3_ParamLimits

0x4fa7,	// (0x0004fc3d) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x0005a2d2) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x0005a2d2) list_double2_large_graphic_pane_g

0x5073,	// (0x0004fd09) list_double2_large_graphic_pane_t1_ParamLimits

0x5073,	// (0x0004fd09) list_double2_large_graphic_pane_t1

0x5089,	// (0x0004fd1f) list_double2_large_graphic_pane_t2_ParamLimits

0x5089,	// (0x0004fd1f) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x0005a2d9) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x0005a2d9) list_double2_large_graphic_pane_t

0x509b,	// (0x0004fd31) list_double_heading_pane_g1_ParamLimits

0x509b,	// (0x0004fd31) list_double_heading_pane_g1

0x50ac,	// (0x0004fd42) list_double_heading_pane_g2_ParamLimits

0x50ac,	// (0x0004fd42) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x0005a2de) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x0005a2de) list_double_heading_pane_g

0x50b8,	// (0x0004fd4e) list_double_heading_pane_t1_ParamLimits

0x50b8,	// (0x0004fd4e) list_double_heading_pane_t1

0x50ce,	// (0x0004fd64) list_double_heading_pane_t2_ParamLimits

0x50ce,	// (0x0004fd64) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x0005a2e3) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x0005a2e3) list_double_heading_pane_t

0x4f8f,	// (0x0004fc25) list_double_graphic_heading_pane_g1_ParamLimits

0x4f8f,	// (0x0004fc25) list_double_graphic_heading_pane_g1

0x509b,	// (0x0004fd31) list_double_graphic_heading_pane_g2_ParamLimits

0x509b,	// (0x0004fd31) list_double_graphic_heading_pane_g2

0x50ac,	// (0x0004fd42) list_double_graphic_heading_pane_g3_ParamLimits

0x50ac,	// (0x0004fd42) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x0005a2e8) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x0005a2e8) list_double_graphic_heading_pane_g

0x50e0,	// (0x0004fd76) list_double_graphic_heading_pane_t1_ParamLimits

0x50e0,	// (0x0004fd76) list_double_graphic_heading_pane_t1

0x4fc9,	// (0x0004fc5f) list_double_graphic_heading_pane_t2_ParamLimits

0x4fc9,	// (0x0004fc5f) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x0005a2ef) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x0005a2ef) list_double_graphic_heading_pane_t

0x50f6,	// (0x0004fd8c) list_double_time_pane_g1_ParamLimits

0x50f6,	// (0x0004fd8c) list_double_time_pane_g1

0x5107,	// (0x0004fd9d) list_double_time_pane_g2_ParamLimits

0x5107,	// (0x0004fd9d) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x0005a2f4) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x0005a2f4) list_double_time_pane_g

0x5113,	// (0x0004fda9) list_double_time_pane_t1_ParamLimits

0x5113,	// (0x0004fda9) list_double_time_pane_t1

0x5129,	// (0x0004fdbf) list_double_time_pane_t2_ParamLimits

0x5129,	// (0x0004fdbf) list_double_time_pane_t2

0x513b,	// (0x0004fdd1) list_double_time_pane_t3_ParamLimits

0x513b,	// (0x0004fdd1) list_double_time_pane_t3

0x514d,	// (0x0004fde3) list_double_time_pane_t4_ParamLimits

0x514d,	// (0x0004fde3) list_double_time_pane_t4

0x0003,

0xf663,	// (0x0005a2f9) list_double_time_pane_t_ParamLimits

0xf663,	// (0x0005a2f9) list_double_time_pane_t

0x515f,	// (0x0004fdf5) list_setting_pane_g1_ParamLimits

0x515f,	// (0x0004fdf5) list_setting_pane_g1

0x516b,	// (0x0004fe01) list_setting_pane_g2_ParamLimits

0x516b,	// (0x0004fe01) list_setting_pane_g2

0x0001,

0xf66c,	// (0x0005a302) list_setting_pane_g_ParamLimits

0xf66c,	// (0x0005a302) list_setting_pane_g

0x5177,	// (0x0004fe0d) list_setting_pane_t1_ParamLimits

0x5177,	// (0x0004fe0d) list_setting_pane_t1

0x5191,	// (0x0004fe27) list_setting_pane_t2_ParamLimits

0x5191,	// (0x0004fe27) list_setting_pane_t2

0x0002,

0xf671,	// (0x0005a307) list_setting_pane_t_ParamLimits

0xf671,	// (0x0005a307) list_setting_pane_t

0x51d0,	// (0x0004fe66) set_value_pane_cp_ParamLimits

0x51d0,	// (0x0004fe66) set_value_pane_cp

0x51dc,	// (0x0004fe72) list_setting_number_pane_g1_ParamLimits

0x51dc,	// (0x0004fe72) list_setting_number_pane_g1

0x51e8,	// (0x0004fe7e) list_setting_number_pane_g2_ParamLimits

0x51e8,	// (0x0004fe7e) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x0005a30e) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x0005a30e) list_setting_number_pane_g

0x51f4,	// (0x0004fe8a) list_setting_number_pane_t1_ParamLimits

0x51f4,	// (0x0004fe8a) list_setting_number_pane_t1

0x520d,	// (0x0004fea3) list_setting_number_pane_t2_ParamLimits

0x520d,	// (0x0004fea3) list_setting_number_pane_t2

0x5227,	// (0x0004febd) list_setting_number_pane_t3_ParamLimits

0x5227,	// (0x0004febd) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x0005a313) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x0005a313) list_setting_number_pane_t

0x51d0,	// (0x0004fe66) set_value_pane_ParamLimits

0x51d0,	// (0x0004fe66) set_value_pane

0x8461,	// (0x000530f7) bg_set_opt_pane_ParamLimits

0x8461,	// (0x000530f7) bg_set_opt_pane

0x526a,	// (0x0004ff00) set_value_pane_t1

0x8482,	// (0x00053118) slider_set_pane_cp3

0x848b,	// (0x00053121) volume_small_pane_cp

0x8494,	// (0x0005312a) list_form_gen_pane

0x849d,	// (0x00053133) scroll_pane_cp8

0x5280,	// (0x0004ff16) form_field_data_pane_ParamLimits

0x5280,	// (0x0004ff16) form_field_data_pane

0x52a4,	// (0x0004ff3a) form_field_data_wide_pane_ParamLimits

0x52a4,	// (0x0004ff3a) form_field_data_wide_pane

0x52c7,	// (0x0004ff5d) form_field_popup_pane_ParamLimits

0x52c7,	// (0x0004ff5d) form_field_popup_pane

0x52e7,	// (0x0004ff7d) form_field_popup_wide_pane_ParamLimits

0x52e7,	// (0x0004ff7d) form_field_popup_wide_pane

0x5306,	// (0x0004ff9c) form_field_slider_pane_ParamLimits

0x5306,	// (0x0004ff9c) form_field_slider_pane

0x5319,	// (0x0004ffaf) form_field_slider_wide_pane_ParamLimits

0x5319,	// (0x0004ffaf) form_field_slider_wide_pane

0x84ae,	// (0x00053144) data_form_pane

0x5336,	// (0x0004ffcc) form_field_data_pane_t1

0x84ba,	// (0x00053150) input_focus_pane

0x84c8,	// (0x0005315e) data_form_wide_pane

0x535a,	// (0x0004fff0) form_field_data_wide_pane_t1

0x821f,	// (0x00052eb5) input_focus_pane_cp6

0x537c,	// (0x00050012) form_field_popup_pane_t1

0x84ba,	// (0x00053150) input_focus_pane_cp7

0x84f4,	// (0x0005318a) list_form_pane

0x539c,	// (0x00050032) form_field_popup_wide_pane_t1

0x84ba,	// (0x00053150) input_focus_pane_cp8

0x8500,	// (0x00053196) list_form_wide_pane

0x53b9,	// (0x0005004f) form_field_slider_pane_t1_ParamLimits

0x53b9,	// (0x0005004f) form_field_slider_pane_t1

0x53cf,	// (0x00050065) form_field_slider_pane_t2_ParamLimits

0x53cf,	// (0x00050065) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x0005a323) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x0005a323) form_field_slider_pane_t

0x787c,	// (0x00052512) input_focus_pane_cp9_ParamLimits

0x787c,	// (0x00052512) input_focus_pane_cp9

0x53e4,	// (0x0005007a) slider_cont_pane_ParamLimits

0x53e4,	// (0x0005007a) slider_cont_pane

0x850f,	// (0x000531a5) form_field_slider_wide_pane_t1_ParamLimits

0x850f,	// (0x000531a5) form_field_slider_wide_pane_t1

0x53f8,	// (0x0005008e) form_field_slider_wide_pane_t2_ParamLimits

0x53f8,	// (0x0005008e) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x0005a328) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x0005a328) form_field_slider_wide_pane_t

0x787c,	// (0x00052512) input_focus_pane_cp10_ParamLimits

0x787c,	// (0x00052512) input_focus_pane_cp10

0x540a,	// (0x000500a0) slider_cont_pane_cp1_ParamLimits

0x540a,	// (0x000500a0) slider_cont_pane_cp1

0x541e,	// (0x000500b4) slider_form_pane_cp

0x8521,	// (0x000531b7) input_focus_pane_g1

0x8529,	// (0x000531bf) input_focus_pane_g2

0x8531,	// (0x000531c7) input_focus_pane_g3

0x8539,	// (0x000531cf) input_focus_pane_g4

0x8541,	// (0x000531d7) input_focus_pane_g5

0x8549,	// (0x000531df) input_focus_pane_g6

0x8551,	// (0x000531e7) input_focus_pane_g7

0x8559,	// (0x000531ef) input_focus_pane_g8

0x8561,	// (0x000531f7) input_focus_pane_g9

0x7517,	// (0x000521ad) input_focus_pane_g10

0x0009,

0xf697,	// (0x0005a32d) input_focus_pane_g

0x9ff7,	// (0x00054c8d) wait_border_pane_g3_copy1

0x5426,	// (0x000500bc) data_form_pane_t1

0x7517,	// (0x000521ad) wait_anim_pane_g1_copy1

0x652a,	// (0x000511c0) data_form_wide_pane_t1

0x5441,	// (0x000500d7) list_form_graphic_pane_cp_ParamLimits

0x5441,	// (0x000500d7) list_form_graphic_pane_cp

0xaf40,	// (0x00055bd6) slider_form_pane_g1

0xaf49,	// (0x00055bdf) slider_form_pane_g2

0x0006,

0xf99a,	// (0x0005a630) slider_form_pane_g

0x545a,	// (0x000500f0) list_form_graphic_pane_ParamLimits

0x545a,	// (0x000500f0) list_form_graphic_pane

0x5476,	// (0x0005010c) list_form_graphic_pane_g1

0x547e,	// (0x00050114) list_form_graphic_pane_t1_ParamLimits

0x547e,	// (0x00050114) list_form_graphic_pane_t1

0x7601,	// (0x00052297) list_highlight_pane_cp5_ParamLimits

0x7601,	// (0x00052297) list_highlight_pane_cp5

0x5493,	// (0x00050129) find_pane_g1

0x8569,	// (0x000531ff) input_find_pane

0x549c,	// (0x00050132) input_find_pane_g1_ParamLimits

0x549c,	// (0x00050132) input_find_pane_g1

0x54a8,	// (0x0005013e) input_find_pane_t1_ParamLimits

0x54a8,	// (0x0005013e) input_find_pane_t1

0x54bd,	// (0x00050153) input_find_pane_t2_ParamLimits

0x54bd,	// (0x00050153) input_find_pane_t2

0x0001,

0xf6ac,	// (0x0005a342) input_find_pane_t_ParamLimits

0xf6ac,	// (0x0005a342) input_find_pane_t

0x8572,	// (0x00053208) input_focus_pane_cp5_ParamLimits

0x8572,	// (0x00053208) input_focus_pane_cp5

0x858c,	// (0x00053222) bg_popup_window_pane_cp2_ParamLimits

0x858c,	// (0x00053222) bg_popup_window_pane_cp2

0x8599,	// (0x0005322f) listscroll_menu_pane_ParamLimits

0x8599,	// (0x0005322f) listscroll_menu_pane

0x85a5,	// (0x0005323b) popup_submenu_window_ParamLimits

0x85a5,	// (0x0005323b) popup_submenu_window

0x85d1,	// (0x00053267) find_popup_pane_g1

0x85d9,	// (0x0005326f) input_popup_find_pane_cp

0x8572,	// (0x00053208) input_focus_pane_cp4_ParamLimits

0x8572,	// (0x00053208) input_focus_pane_cp4

0x85ef,	// (0x00053285) input_popup_find_pane_t1_ParamLimits

0x85ef,	// (0x00053285) input_popup_find_pane_t1

0x7521,	// (0x000521b7) bg_popup_sub_pane_cp

0x861d,	// (0x000532b3) listscroll_popup_sub_pane

0x8625,	// (0x000532bb) list_submenu_pane_ParamLimits

0x8625,	// (0x000532bb) list_submenu_pane

0x8636,	// (0x000532cc) scroll_pane_cp4

0x863e,	// (0x000532d4) list_single_popup_submenu_pane_ParamLimits

0x863e,	// (0x000532d4) list_single_popup_submenu_pane

0x8652,	// (0x000532e8) list_single_popup_submenu_pane_g1

0x865a,	// (0x000532f0) list_single_popup_submenu_pane_t1_ParamLimits

0x865a,	// (0x000532f0) list_single_popup_submenu_pane_t1

0x7601,	// (0x00052297) bg_active_tab_pane_cp1_ParamLimits

0x7601,	// (0x00052297) bg_active_tab_pane_cp1

0x866f,	// (0x00053305) tabs_2_active_pane_g1

0x8677,	// (0x0005330d) tabs_2_active_pane_t1

0x7601,	// (0x00052297) bg_passive_tab_pane_cp1_ParamLimits

0x7601,	// (0x00052297) bg_passive_tab_pane_cp1

0x866f,	// (0x00053305) tabs_2_passive_pane_g1

0x8677,	// (0x0005330d) tabs_2_passive_pane_t1

0x8689,	// (0x0005331f) bg_active_tab_pane_cp4

0x8697,	// (0x0005332d) tabs_2_long_active_pane_t1

0x86aa,	// (0x00053340) bg_passive_tab_pane_cp4

0x6189,	// (0x00050e1f) list_single_midp_graphic_pane_g4_ParamLimits

0x8689,	// (0x0005331f) bg_active_tab_pane_cp5

0x86b6,	// (0x0005334c) tabs_3_long_active_pane_t1

0x86aa,	// (0x00053340) bg_passive_tab_pane_cp5

0x6189,	// (0x00050e1f) list_single_midp_graphic_pane_g4

0x7601,	// (0x00052297) bg_popup_window_pane_cp13_ParamLimits

0x7601,	// (0x00052297) bg_popup_window_pane_cp13

0x86d1,	// (0x00053367) listscroll_popup_fast_pane_ParamLimits

0x86d1,	// (0x00053367) listscroll_popup_fast_pane

0x86e0,	// (0x00053376) grid_popup_fast_pane_ParamLimits

0x86e0,	// (0x00053376) grid_popup_fast_pane

0x86f2,	// (0x00053388) scroll_pane_cp9_ParamLimits

0x86f2,	// (0x00053388) scroll_pane_cp9

0xc898,	// (0x0005752e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc898,	// (0x0005752e) list_single_graphic_hl_pane_t1_cp2

0x8716,	// (0x000533ac) input_focus_pane_cp20_ParamLimits

0x8716,	// (0x000533ac) input_focus_pane_cp20

0x8724,	// (0x000533ba) query_popup_data_pane_t1_ParamLimits

0x8724,	// (0x000533ba) query_popup_data_pane_t1

0x8737,	// (0x000533cd) query_popup_data_pane_t2_ParamLimits

0x8737,	// (0x000533cd) query_popup_data_pane_t2

0x877d,	// (0x00053413) query_popup_data_pane_t3_ParamLimits

0x877d,	// (0x00053413) query_popup_data_pane_t3

0x87be,	// (0x00053454) query_popup_data_pane_t4_ParamLimits

0x87be,	// (0x00053454) query_popup_data_pane_t4

0x87fa,	// (0x00053490) query_popup_data_pane_t5_ParamLimits

0x87fa,	// (0x00053490) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x0005a347) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x0005a347) query_popup_data_pane_t

0x8521,	// (0x000531b7) bg_set_opt_pane_g1

0x8529,	// (0x000531bf) bg_set_opt_pane_g2

0x8531,	// (0x000531c7) bg_set_opt_pane_g3

0x8539,	// (0x000531cf) bg_set_opt_pane_g4

0x8541,	// (0x000531d7) bg_set_opt_pane_g5

0x8549,	// (0x000531df) bg_set_opt_pane_g6

0x8551,	// (0x000531e7) bg_set_opt_pane_g7

0x8559,	// (0x000531ef) bg_set_opt_pane_g8

0x8561,	// (0x000531f7) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x0005a352) bg_set_opt_pane_g

0x57fb,	// (0x00050491) control_top_pane_stacon_ParamLimits

0x57fb,	// (0x00050491) control_top_pane_stacon

0x584e,	// (0x000504e4) signal_pane_stacon_ParamLimits

0x584e,	// (0x000504e4) signal_pane_stacon

0x8db9,	// (0x00053a4f) stacon_top_pane_g1_ParamLimits

0x8db9,	// (0x00053a4f) stacon_top_pane_g1

0x5873,	// (0x00050509) title_pane_stacon_ParamLimits

0x5873,	// (0x00050509) title_pane_stacon

0x589d,	// (0x00050533) uni_indicator_pane_stacon_ParamLimits

0x589d,	// (0x00050533) uni_indicator_pane_stacon

0x58b2,	// (0x00050548) battery_pane_stacon_ParamLimits

0x58b2,	// (0x00050548) battery_pane_stacon

0x58f6,	// (0x0005058c) control_bottom_pane_stacon_ParamLimits

0x58f6,	// (0x0005058c) control_bottom_pane_stacon

0x5919,	// (0x000505af) navi_pane_stacon_ParamLimits

0x5919,	// (0x000505af) navi_pane_stacon

0x8ddb,	// (0x00053a71) stacon_bottom_pane_g1_ParamLimits

0x8ddb,	// (0x00053a71) stacon_bottom_pane_g1

0x54d2,	// (0x00050168) aid_levels_signal_lsc_ParamLimits

0x54d2,	// (0x00050168) aid_levels_signal_lsc

0x54e9,	// (0x0005017f) signal_pane_stacon_g1_ParamLimits

0x54e9,	// (0x0005017f) signal_pane_stacon_g1

0x54fd,	// (0x00050193) signal_pane_stacon_g2_ParamLimits

0x54fd,	// (0x00050193) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0005a365) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0005a365) signal_pane_stacon_g

0x5532,	// (0x000501c8) title_pane_stacon_t1_ParamLimits

0x5532,	// (0x000501c8) title_pane_stacon_t1

0x883e,	// (0x000534d4) uni_indicator_pane_stacon_g1

0x8848,	// (0x000534de) uni_indicator_pane_stacon_g2

0x8852,	// (0x000534e8) uni_indicator_pane_stacon_g3

0x885c,	// (0x000534f2) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x0005a371) uni_indicator_pane_stacon_g

0x5557,	// (0x000501ed) control_top_pane_stacon_g1

0x555f,	// (0x000501f5) control_top_pane_stacon_t1_ParamLimits

0x555f,	// (0x000501f5) control_top_pane_stacon_t1

0x5596,	// (0x0005022c) aid_levels_battery_lsc_ParamLimits

0x5596,	// (0x0005022c) aid_levels_battery_lsc

0x55ae,	// (0x00050244) battery_pane_stacon_g1_ParamLimits

0x55ae,	// (0x00050244) battery_pane_stacon_g1

0x55c1,	// (0x00050257) battery_pane_stacon_g2_ParamLimits

0x55c1,	// (0x00050257) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x0005a37a) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x0005a37a) battery_pane_stacon_g

0x55ff,	// (0x00050295) navi_icon_pane_stacon

0x5613,	// (0x000502a9) navi_navi_pane_stacon

0x55ff,	// (0x00050295) navi_text_pane_stacon

0x5557,	// (0x000501ed) control_bottom_pane_stacon_g1

0x5627,	// (0x000502bd) control_bottom_pane_stacon_t1_ParamLimits

0x5627,	// (0x000502bd) control_bottom_pane_stacon_t1

0x8880,	// (0x00053516) grid_app_pane_ParamLimits

0x8880,	// (0x00053516) grid_app_pane

0x88a4,	// (0x0005353a) scroll_pane_cp15_ParamLimits

0x88a4,	// (0x0005353a) scroll_pane_cp15

0x88b9,	// (0x0005354f) cell_app_pane_ParamLimits

0x88b9,	// (0x0005354f) cell_app_pane

0x88dd,	// (0x00053573) cell_app_pane_g1_ParamLimits

0x88dd,	// (0x00053573) cell_app_pane_g1

0x88fd,	// (0x00053593) cell_app_pane_g2_ParamLimits

0x88fd,	// (0x00053593) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x0005a37f) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x0005a37f) cell_app_pane_g

0x8909,	// (0x0005359f) cell_app_pane_t1_ParamLimits

0x8909,	// (0x0005359f) cell_app_pane_t1

0x8920,	// (0x000535b6) grid_highlight_pane_ParamLimits

0x8920,	// (0x000535b6) grid_highlight_pane

0x8521,	// (0x000531b7) cell_highlight_pane_g1

0x8529,	// (0x000531bf) cell_highlight_pane_g2

0x8531,	// (0x000531c7) cell_highlight_pane_g3

0x8539,	// (0x000531cf) cell_highlight_pane_g4

0x8541,	// (0x000531d7) cell_highlight_pane_g5

0x8549,	// (0x000531df) cell_highlight_pane_g6

0x8551,	// (0x000531e7) cell_highlight_pane_g7

0x8559,	// (0x000531ef) cell_highlight_pane_g8

0x8561,	// (0x000531f7) cell_highlight_pane_g9

0x7517,	// (0x000521ad) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x0005a32d) cell_highlight_pane_g

0x8931,	// (0x000535c7) bg_scroll_pane

0x5671,	// (0x00050307) scroll_handle_pane

0x8978,	// (0x0005360e) scroll_bg_pane_g1

0x898d,	// (0x00053623) scroll_bg_pane_g2

0x89a5,	// (0x0005363b) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x0005a384) scroll_bg_pane_g

0x89ba,	// (0x00053650) scroll_handle_focus_pane_ParamLimits

0x89ba,	// (0x00053650) scroll_handle_focus_pane

0x8978,	// (0x0005360e) scroll_handle_pane_g1

0x89c7,	// (0x0005365d) scroll_handle_pane_g2

0x89a5,	// (0x0005363b) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x0005a38b) scroll_handle_pane_g

0x8572,	// (0x00053208) bg_popup_sub_pane_cp21_ParamLimits

0x8572,	// (0x00053208) bg_popup_sub_pane_cp21

0x89db,	// (0x00053671) popup_fep_japan_predictive_window_t1_ParamLimits

0x89db,	// (0x00053671) popup_fep_japan_predictive_window_t1

0x89f5,	// (0x0005368b) popup_fep_japan_predictive_window_t2_ParamLimits

0x89f5,	// (0x0005368b) popup_fep_japan_predictive_window_t2

0x8a28,	// (0x000536be) popup_fep_japan_predictive_window_t3_ParamLimits

0x8a28,	// (0x000536be) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x0005a392) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x0005a392) popup_fep_japan_predictive_window_t

0x7521,	// (0x000521b7) bg_popup_sub_pane_cp23

0x8a5f,	// (0x000536f5) listscroll_japin_cand_pane

0x8a67,	// (0x000536fd) popup_fep_japan_candidate_window_t1

0x8a75,	// (0x0005370b) candidate_pane_ParamLimits

0x8a75,	// (0x0005370b) candidate_pane

0x8a87,	// (0x0005371d) scroll_pane_cp30

0x8a8f,	// (0x00053725) list_single_popup_jap_candidate_pane_ParamLimits

0x8a8f,	// (0x00053725) list_single_popup_jap_candidate_pane

0x7521,	// (0x000521b7) list_highlight_pane_cp30

0x8aa4,	// (0x0005373a) list_single_popup_jap_candidate_pane_t1

0x8ab3,	// (0x00053749) level_1_signal

0x8ac0,	// (0x00053756) level_2_signal

0x8acd,	// (0x00053763) level_3_signal

0x8ada,	// (0x00053770) level_4_signal

0x8ae7,	// (0x0005377d) level_5_signal

0x8af4,	// (0x0005378a) level_6_signal

0x8b01,	// (0x00053797) level_7_signal

0x8ab3,	// (0x00053749) level_1_battery

0x8ac0,	// (0x00053756) level_2_battery

0x8acd,	// (0x00053763) level_3_battery

0x8ada,	// (0x00053770) level_4_battery

0x8ae7,	// (0x0005377d) level_5_battery

0x8af4,	// (0x0005378a) level_6_battery

0x8b01,	// (0x00053797) level_7_battery

0x8b26,	// (0x000537bc) list_menu_pane_ParamLimits

0x8b26,	// (0x000537bc) list_menu_pane

0x8b3c,	// (0x000537d2) scroll_pane_cp25_ParamLimits

0x8b3c,	// (0x000537d2) scroll_pane_cp25

0x8b55,	// (0x000537eb) list_double2_graphic_pane_cp2_ParamLimits

0x8b55,	// (0x000537eb) list_double2_graphic_pane_cp2

0x8b55,	// (0x000537eb) list_double2_large_graphic_pane_cp2_ParamLimits

0x8b55,	// (0x000537eb) list_double2_large_graphic_pane_cp2

0x8b55,	// (0x000537eb) list_double2_pane_cp2_ParamLimits

0x8b55,	// (0x000537eb) list_double2_pane_cp2

0x8b55,	// (0x000537eb) list_double_graphic_pane_cp2_ParamLimits

0x8b55,	// (0x000537eb) list_double_graphic_pane_cp2

0x8b55,	// (0x000537eb) list_double_large_graphic_pane_cp2_ParamLimits

0x8b55,	// (0x000537eb) list_double_large_graphic_pane_cp2

0x8b55,	// (0x000537eb) list_double_number_pane_cp2_ParamLimits

0x8b55,	// (0x000537eb) list_double_number_pane_cp2

0x8b55,	// (0x000537eb) list_double_pane_cp2_ParamLimits

0x8b55,	// (0x000537eb) list_double_pane_cp2

0x8b79,	// (0x0005380f) list_single_2graphic_pane_cp2_ParamLimits

0x8b79,	// (0x0005380f) list_single_2graphic_pane_cp2

0x8b79,	// (0x0005380f) list_single_graphic_heading_pane_cp2_ParamLimits

0x8b79,	// (0x0005380f) list_single_graphic_heading_pane_cp2

0x8b79,	// (0x0005380f) list_single_graphic_pane_cp2_ParamLimits

0x8b79,	// (0x0005380f) list_single_graphic_pane_cp2

0x8b79,	// (0x0005380f) list_single_heading_pane_cp2_ParamLimits

0x8b79,	// (0x0005380f) list_single_heading_pane_cp2

0x8b92,	// (0x00053828) list_single_large_graphic_pane_cp2_ParamLimits

0x8b92,	// (0x00053828) list_single_large_graphic_pane_cp2

0x8b79,	// (0x0005380f) list_single_number_heading_pane_cp2_ParamLimits

0x8b79,	// (0x0005380f) list_single_number_heading_pane_cp2

0x8b79,	// (0x0005380f) list_single_number_pane_cp2_ParamLimits

0x8b79,	// (0x0005380f) list_single_number_pane_cp2

0x8b79,	// (0x0005380f) list_single_pane_cp2_ParamLimits

0x8b79,	// (0x0005380f) list_single_pane_cp2

0x8c08,	// (0x0005389e) bg_popup_sub_pane_cp22

0x5723,	// (0x000503b9) popup_side_volume_key_window_g1

0x574d,	// (0x000503e3) popup_side_volume_key_window_t1

0x5769,	// (0x000503ff) volume_small_pane_cp1

0x787c,	// (0x00052512) bg_popup_sub_pane_cp24_ParamLimits

0x787c,	// (0x00052512) bg_popup_sub_pane_cp24

0x8c1e,	// (0x000538b4) fep_china_uni_candidate_pane_ParamLimits

0x8c1e,	// (0x000538b4) fep_china_uni_candidate_pane

0x8c32,	// (0x000538c8) fep_china_uni_entry_pane

0x8c42,	// (0x000538d8) popup_fep_china_uni_window_g1

0x8c5e,	// (0x000538f4) fep_china_uni_entry_pane_g1

0x8c66,	// (0x000538fc) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x0005a3c3) fep_china_uni_entry_pane_g

0x8c6e,	// (0x00053904) fep_entry_item_pane

0x8c78,	// (0x0005390e) fep_candidate_item_pane

0x8c80,	// (0x00053916) fep_china_uni_candidate_pane_g1

0x8c88,	// (0x0005391e) fep_china_uni_candidate_pane_g2

0x8c90,	// (0x00053926) fep_china_uni_candidate_pane_g3

0x8c98,	// (0x0005392e) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x0005a3c8) fep_china_uni_candidate_pane_g

0x7517,	// (0x000521ad) fep_entry_item_pane_g1

0x8ca0,	// (0x00053936) fep_entry_item_pane_t1_ParamLimits

0x8ca0,	// (0x00053936) fep_entry_item_pane_t1

0x8cb6,	// (0x0005394c) fep_candidate_item_pane_t1_ParamLimits

0x8cb6,	// (0x0005394c) fep_candidate_item_pane_t1

0x8ccb,	// (0x00053961) fep_candidate_item_pane_t2_ParamLimits

0x8ccb,	// (0x00053961) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x0005a3d1) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x0005a3d1) fep_candidate_item_pane_t

0x7601,	// (0x00052297) list_highlight_pane_cp31_ParamLimits

0x7601,	// (0x00052297) list_highlight_pane_cp31

0x8cdd,	// (0x00053973) level_1_signal_lsc

0x8ce6,	// (0x0005397c) level_2_signal_lsc

0x8cef,	// (0x00053985) level_3_signal_lsc

0x8cf8,	// (0x0005398e) level_4_signal_lsc

0x8d01,	// (0x00053997) level_5_signal_lsc

0x8d0a,	// (0x000539a0) level_6_signal_lsc

0x8d13,	// (0x000539a9) level_7_signal_lsc

0x8d13,	// (0x000539a9) level_1_battery_lsc

0x8d1c,	// (0x000539b2) level_2_battery_lsc

0x8d25,	// (0x000539bb) level_3_battery_lsc

0x8d2e,	// (0x000539c4) level_4_battery_lsc

0x8d37,	// (0x000539cd) level_5_battery_lsc

0x8d40,	// (0x000539d6) level_6_battery_lsc

0x8cdd,	// (0x00053973) level_7_battery_lsc

0x8d49,	// (0x000539df) scroll_handle_focus_pane_g1

0x8d52,	// (0x000539e8) scroll_handle_focus_pane_g2

0x8d5b,	// (0x000539f1) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x0005a3d6) scroll_handle_focus_pane_g

0x5771,	// (0x00050407) list_single_2graphic_pane_g1_ParamLimits

0x5771,	// (0x00050407) list_single_2graphic_pane_g1

0x79d7,	// (0x0005266d) list_single_2graphic_pane_g2_ParamLimits

0x79d7,	// (0x0005266d) list_single_2graphic_pane_g2

0x79b9,	// (0x0005264f) list_single_2graphic_pane_g3_ParamLimits

0x79b9,	// (0x0005264f) list_single_2graphic_pane_g3

0x577d,	// (0x00050413) list_single_2graphic_pane_g4_ParamLimits

0x577d,	// (0x00050413) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x0005a3dd) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x0005a3dd) list_single_2graphic_pane_g

0x5789,	// (0x0005041f) list_single_2graphic_pane_t1_ParamLimits

0x5789,	// (0x0005041f) list_single_2graphic_pane_t1

0x57b7,	// (0x0005044d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x57b7,	// (0x0005044d) list_double2_graphic_large_graphic_pane_g1

0x5062,	// (0x0004fcf8) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5062,	// (0x0004fcf8) list_double2_graphic_large_graphic_pane_g2

0x4fa7,	// (0x0004fc3d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4fa7,	// (0x0004fc3d) list_double2_graphic_large_graphic_pane_g3

0x57c7,	// (0x0005045d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x57c7,	// (0x0005045d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x0005a3e6) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x0005a3e6) list_double2_graphic_large_graphic_pane_g

0x57d3,	// (0x00050469) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x57d3,	// (0x00050469) list_double2_graphic_large_graphic_pane_t1

0x57e9,	// (0x0005047f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x57e9,	// (0x0005047f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x0005a3ef) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x0005a3ef) list_double2_graphic_large_graphic_pane_t

0x8ea3,	// (0x00053b39) popup_fast_swap_window_ParamLimits

0x8ea3,	// (0x00053b39) popup_fast_swap_window

0x8ebf,	// (0x00053b55) popup_side_volume_key_window

0x8edb,	// (0x00053b71) stacon_top_pane

0x8ee5,	// (0x00053b7b) status_pane_ParamLimits

0x8ee5,	// (0x00053b7b) status_pane

0x8edb,	// (0x00053b71) status_small_pane

0x7521,	// (0x000521b7) control_pane

0x7521,	// (0x000521b7) stacon_bottom_pane

0x849d,	// (0x00053133) scroll_pane_cp121

0x8494,	// (0x0005312a) set_content_pane

0x8d64,	// (0x000539fa) bg_active_tab_pane_g1_cp1

0x8d6d,	// (0x00053a03) bg_active_tab_pane_g2_cp1

0x8d76,	// (0x00053a0c) bg_active_tab_pane_g3_cp1

0x8d64,	// (0x000539fa) bg_passive_tab_pane_g1_cp1

0x8d6d,	// (0x00053a03) bg_passive_tab_pane_g2_cp1

0x8d76,	// (0x00053a0c) bg_passive_tab_pane_g3_cp1

0x8d7f,	// (0x00053a15) bg_active_tab_pane_g1_cp2

0x8d6d,	// (0x00053a03) bg_active_tab_pane_g2_cp2

0x8d88,	// (0x00053a1e) bg_active_tab_pane_g3_cp2

0x8d7f,	// (0x00053a15) bg_passive_tab_pane_g1_cp2

0x8d6d,	// (0x00053a03) bg_passive_tab_pane_g2_cp2

0x8d88,	// (0x00053a1e) bg_passive_tab_pane_g3_cp2

0x8d91,	// (0x00053a27) bg_active_tab_pane_g1_cp3

0x8d6d,	// (0x00053a03) bg_active_tab_pane_g2_cp3

0x8d9a,	// (0x00053a30) bg_active_tab_pane_g3_cp3

0x8d91,	// (0x00053a27) bg_passive_tab_pane_g1_cp3

0x8d6d,	// (0x00053a03) bg_passive_tab_pane_g2_cp3

0x8d9a,	// (0x00053a30) bg_passive_tab_pane_g3_cp3

0x8da3,	// (0x00053a39) bg_active_tab_pane_g1_cp4

0x8d6d,	// (0x00053a03) bg_active_tab_pane_g2_cp4

0x8dae,	// (0x00053a44) bg_active_tab_pane_g3_cp4

0x8da3,	// (0x00053a39) bg_passive_tab_pane_g1_cp4

0x8d6d,	// (0x00053a03) bg_passive_tab_pane_g2_cp4

0x8dae,	// (0x00053a44) bg_passive_tab_pane_g3_cp4

0x8df7,	// (0x00053a8d) bg_active_tab_pane_g1_cp5

0x8d6d,	// (0x00053a03) bg_active_tab_pane_g2_cp5

0x8e00,	// (0x00053a96) bg_active_tab_pane_g3_cp5

0x8df7,	// (0x00053a8d) bg_passive_tab_pane_g1_cp5

0x8d6d,	// (0x00053a03) bg_passive_tab_pane_g2_cp5

0x8e00,	// (0x00053a96) bg_passive_tab_pane_g3_cp5

0x8e09,	// (0x00053a9f) list_set_graphic_pane_ParamLimits

0x8e09,	// (0x00053a9f) list_set_graphic_pane

0x7521,	// (0x000521b7) bg_set_opt_pane_cp4

0x8e26,	// (0x00053abc) list_set_graphic_pane_g1_ParamLimits

0x8e26,	// (0x00053abc) list_set_graphic_pane_g1

0x8e32,	// (0x00053ac8) list_set_graphic_pane_g2_ParamLimits

0x8e32,	// (0x00053ac8) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x0005a3f4) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x0005a3f4) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x0005a767) volume_small_pane_cp_g

0x8e56,	// (0x00053aec) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8e56,	// (0x00053aec) list_double2_large_graphic_pane_g1_cp2

0x8e62,	// (0x00053af8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8e62,	// (0x00053af8) list_double2_large_graphic_pane_g2_cp2

0x8e73,	// (0x00053b09) list_double2_large_graphic_pane_g3_cp2

0x8e7b,	// (0x00053b11) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8e7b,	// (0x00053b11) list_double2_large_graphic_pane_t1_cp2

0x8e91,	// (0x00053b27) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8e91,	// (0x00053b27) list_double2_large_graphic_pane_t2_cp2

0xaadd,	// (0x00055773) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaadd,	// (0x00055773) list_double_large_graphic_pane_g1_cp2

0xaaee,	// (0x00055784) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaaee,	// (0x00055784) list_double_large_graphic_pane_g2_cp2

0x8ff5,	// (0x00053c8b) list_double_large_graphic_pane_g3_cp2

0xaaff,	// (0x00055795) list_double_large_graphic_pane_g4_cp

0xab07,	// (0x0005579d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab07,	// (0x0005579d) list_double_large_graphic_pane_t1_cp2

0xab1e,	// (0x000557b4) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab1e,	// (0x000557b4) list_double_large_graphic_pane_t2_cp2

0x8ef3,	// (0x00053b89) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8ef3,	// (0x00053b89) list_double2_graphic_pane_g1_cp2

0x8f01,	// (0x00053b97) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f01,	// (0x00053b97) list_double2_graphic_pane_g2_cp2

0x8f12,	// (0x00053ba8) list_double2_graphic_pane_g3_cp2

0x8f1c,	// (0x00053bb2) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8f1c,	// (0x00053bb2) list_double2_graphic_pane_t1_cp2

0x8f32,	// (0x00053bc8) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8f32,	// (0x00053bc8) list_double2_graphic_pane_t2_cp2

0x8f44,	// (0x00053bda) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8f44,	// (0x00053bda) list_single_number_heading_pane_g1_cp2

0x8f50,	// (0x00053be6) list_single_number_heading_pane_g2_cp2

0x8f58,	// (0x00053bee) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8f58,	// (0x00053bee) list_single_number_heading_pane_t1_cp2

0x8f6e,	// (0x00053c04) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8f6e,	// (0x00053c04) list_single_number_heading_pane_t2_cp2

0x8f80,	// (0x00053c16) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8f80,	// (0x00053c16) list_single_number_heading_pane_t3_cp2

0x8f44,	// (0x00053bda) list_single_heading_pane_g1_cp2_ParamLimits

0x8f44,	// (0x00053bda) list_single_heading_pane_g1_cp2

0x8f50,	// (0x00053be6) list_single_heading_pane_g2_cp2

0x8f58,	// (0x00053bee) list_single_heading_pane_t1_cp2_ParamLimits

0x8f58,	// (0x00053bee) list_single_heading_pane_t1_cp2

0xa8e5,	// (0x0005557b) list_single_heading_pane_t2_cp2_ParamLimits

0xa8e5,	// (0x0005557b) list_single_heading_pane_t2_cp2

0xa83c,	// (0x000554d2) list_double_graphic_pane_g1_cp2_ParamLimits

0xa83c,	// (0x000554d2) list_double_graphic_pane_g1_cp2

0x9602,	// (0x00054298) list_double_graphic_pane_g2_cp2_ParamLimits

0x9602,	// (0x00054298) list_double_graphic_pane_g2_cp2

0xa848,	// (0x000554de) list_double_graphic_pane_g3_cp2

0xa850,	// (0x000554e6) list_double_graphic_pane_t1_cp2_ParamLimits

0xa850,	// (0x000554e6) list_double_graphic_pane_t1_cp2

0xa866,	// (0x000554fc) list_double_graphic_pane_t2_cp2_ParamLimits

0xa866,	// (0x000554fc) list_double_graphic_pane_t2_cp2

0x8455,	// (0x000530eb) list_double_number_pane_g1_cp2_ParamLimits

0x8455,	// (0x000530eb) list_double_number_pane_g1_cp2

0x8ff5,	// (0x00053c8b) list_double_number_pane_g2_cp2

0xa800,	// (0x00055496) list_double_number_pane_t1_cp2_ParamLimits

0xa800,	// (0x00055496) list_double_number_pane_t1_cp2

0xa814,	// (0x000554aa) list_double_number_pane_t2_cp2_ParamLimits

0xa814,	// (0x000554aa) list_double_number_pane_t2_cp2

0xa82a,	// (0x000554c0) list_double_number_pane_t3_cp2_ParamLimits

0xa82a,	// (0x000554c0) list_double_number_pane_t3_cp2

0xa6e9,	// (0x0005537f) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6e9,	// (0x0005537f) list_single_graphic_pane_g1_cp2

0x904d,	// (0x00053ce3) list_single_graphic_pane_g2_cp2_ParamLimits

0x904d,	// (0x00053ce3) list_single_graphic_pane_g2_cp2

0x9059,	// (0x00053cef) list_single_graphic_pane_g3_cp2

0xa6bf,	// (0x00055355) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6bf,	// (0x00055355) list_single_graphic_pane_t1_cp2

0x904d,	// (0x00053ce3) list_single_number_pane_g1_cp2_ParamLimits

0x904d,	// (0x00053ce3) list_single_number_pane_g1_cp2

0x9059,	// (0x00053cef) list_single_number_pane_g2_cp2

0xa6bf,	// (0x00055355) list_single_number_pane_t1_cp2_ParamLimits

0xa6bf,	// (0x00055355) list_single_number_pane_t1_cp2

0xa6d5,	// (0x0005536b) list_single_number_pane_t2_cp2_ParamLimits

0xa6d5,	// (0x0005536b) list_single_number_pane_t2_cp2

0x8e62,	// (0x00053af8) list_double2_pane_g1_cp2_ParamLimits

0x8e62,	// (0x00053af8) list_double2_pane_g1_cp2

0x8e73,	// (0x00053b09) list_double2_pane_g2_cp2

0x8fcd,	// (0x00053c63) list_double2_pane_t1_cp2_ParamLimits

0x8fcd,	// (0x00053c63) list_double2_pane_t1_cp2

0x8fe3,	// (0x00053c79) list_double2_pane_t2_cp2_ParamLimits

0x8fe3,	// (0x00053c79) list_double2_pane_t2_cp2

0x8455,	// (0x000530eb) list_double_pane_g1_cp2_ParamLimits

0x8455,	// (0x000530eb) list_double_pane_g1_cp2

0x8ff5,	// (0x00053c8b) list_double_pane_g2_cp2

0x8ffd,	// (0x00053c93) list_double_pane_t1_cp2_ParamLimits

0x8ffd,	// (0x00053c93) list_double_pane_t1_cp2

0x9013,	// (0x00053ca9) list_double_pane_t2_cp2_ParamLimits

0x9013,	// (0x00053ca9) list_double_pane_t2_cp2

0x903d,	// (0x00053cd3) list_single_pane_cp2_g3

0x904d,	// (0x00053ce3) list_single_pane_g1_cp2_ParamLimits

0x904d,	// (0x00053ce3) list_single_pane_g1_cp2

0x9059,	// (0x00053cef) list_single_pane_g2_cp2

0x9061,	// (0x00053cf7) list_single_pane_t1_cp2_ParamLimits

0x9061,	// (0x00053cf7) list_single_pane_t1_cp2

0x9079,	// (0x00053d0f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9079,	// (0x00053d0f) list_single_large_graphic_pane_g1_cp2

0x9085,	// (0x00053d1b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9085,	// (0x00053d1b) list_single_large_graphic_pane_g2_cp2

0x9091,	// (0x00053d27) list_single_large_graphic_pane_g3_cp2

0x9099,	// (0x00053d2f) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9099,	// (0x00053d2f) list_single_large_graphic_pane_g4_cp1

0x90b3,	// (0x00053d49) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x90b3,	// (0x00053d49) list_single_large_graphic_pane_t1_cp2

0xa68b,	// (0x00055321) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa68b,	// (0x00055321) list_single_graphic_heading_pane_g1_cp2

0xa658,	// (0x000552ee) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa658,	// (0x000552ee) list_single_graphic_heading_pane_g4_cp2

0x9059,	// (0x00053cef) list_single_graphic_heading_pane_g5_cp2

0xa697,	// (0x0005532d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa697,	// (0x0005532d) list_single_graphic_heading_pane_t1_cp2

0xa6ad,	// (0x00055343) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6ad,	// (0x00055343) list_single_graphic_heading_pane_t2_cp2

0xa64c,	// (0x000552e2) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa64c,	// (0x000552e2) list_single_2graphic_pane_g1_cp2

0xa658,	// (0x000552ee) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa658,	// (0x000552ee) list_single_2graphic_pane_g2_cp2

0x9059,	// (0x00053cef) list_single_2graphic_pane_g3_cp2

0xa669,	// (0x000552ff) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa669,	// (0x000552ff) list_single_2graphic_pane_g4_cp2

0xa675,	// (0x0005530b) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa675,	// (0x0005530b) list_single_2graphic_pane_t1_cp2

0x7517,	// (0x000521ad) list_highlight_pane_g10_cp1

0xa224,	// (0x00054eba) list_highlight_pane_g1_cp1

0xa22c,	// (0x00054ec2) list_highlight_pane_g2_cp1

0xa234,	// (0x00054eca) list_highlight_pane_g3_cp1

0xa23c,	// (0x00054ed2) list_highlight_pane_g4_cp1

0xa244,	// (0x00054eda) list_highlight_pane_g5_cp1

0xa24c,	// (0x00054ee2) list_highlight_pane_g6_cp1

0xa254,	// (0x00054eea) list_highlight_pane_g7_cp1

0xa25c,	// (0x00054ef2) list_highlight_pane_g8_cp1

0xa264,	// (0x00054efa) list_highlight_pane_g9_cp1

0xa144,	// (0x00054dda) form_field_slider_pane_t3

0xa152,	// (0x00054de8) form_field_slider_pane_t4

0xa160,	// (0x00054df6) slider_form_pane_ParamLimits

0xa160,	// (0x00054df6) slider_form_pane

0x7521,	// (0x000521b7) control_abbreviations

0x7521,	// (0x000521b7) control_conventions

0x7521,	// (0x000521b7) control_definitions

0x7521,	// (0x000521b7) format_table_attribute

0xa92f,	// (0x000555c5) bg_popup_preview_window_pane_g9

0x7521,	// (0x000521b7) format_table_data2

0x7521,	// (0x000521b7) format_table_data3

0x7521,	// (0x000521b7) format_table_data_example

0x0008,

0x7521,	// (0x000521b7) intro_purpose

0xf8fa,	// (0x0005a590) bg_popup_preview_window_pane_g

0x7521,	// (0x000521b7) texts_category

0x7521,	// (0x000521b7) texts_graphics

0x90c9,	// (0x00053d5f) text_digital

0x90d8,	// (0x00053d6e) text_primary

0x90e7,	// (0x00053d7d) text_primary_small

0x90f6,	// (0x00053d8c) text_secondary

0x9105,	// (0x00053d9b) text_title

0xb045,	// (0x00055cdb) bg_passive_tab_pane_g1_cp3_srt

0x8d6d,	// (0x00053a03) bg_passive_tab_pane_g2_cp3_srt

0xb04e,	// (0x00055ce4) bg_passive_tab_pane_g3_cp3_srt

0x7601,	// (0x00052297) bg_active_tab_pane_cp3_srt_ParamLimits

0x7601,	// (0x00052297) bg_active_tab_pane_cp3_srt

0xb057,	// (0x00055ced) tabs_4_active_pane_srt_g1

0xb05f,	// (0x00055cf5) tabs_4_active_pane_srt_t1_ParamLimits

0xb05f,	// (0x00055cf5) tabs_4_active_pane_srt_t1

0xb045,	// (0x00055cdb) bg_active_tab_pane_g1_cp3_copy1

0x8d6d,	// (0x00053a03) bg_active_tab_pane_g2_cp3_copy1

0xb04e,	// (0x00055ce4) bg_active_tab_pane_g3_cp3_copy1

0x7601,	// (0x00052297) tabs_2_long_active_pane_srt_ParamLimits

0x7601,	// (0x00052297) tabs_2_long_active_pane_srt

0x7601,	// (0x00052297) tabs_2_long_passive_pane_srt_ParamLimits

0x7601,	// (0x00052297) tabs_2_long_passive_pane_srt

0x86aa,	// (0x00053340) bg_passive_tab_pane_cp4_srt_ParamLimits

0x86aa,	// (0x00053340) bg_passive_tab_pane_cp4_srt

0xad73,	// (0x00055a09) bg_passive_tab_pane_g1_cp4_srt

0x8d6d,	// (0x00053a03) bg_passive_tab_pane_g2_cp4_srt

0xad7c,	// (0x00055a12) bg_passive_tab_pane_g3_cp4_srt

0x8689,	// (0x0005331f) bg_active_tab_pane_cp4_srt_ParamLimits

0x8689,	// (0x0005331f) bg_active_tab_pane_cp4_srt

0xad85,	// (0x00055a1b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad85,	// (0x00055a1b) tabs_2_long_active_pane_srt_t1

0xad73,	// (0x00055a09) bg_active_tab_pane_g1_cp4_srt

0x8d6d,	// (0x00053a03) bg_active_tab_pane_g2_cp4_srt

0xad7c,	// (0x00055a12) bg_active_tab_pane_g3_cp4_srt

0x787c,	// (0x00052512) tabs_3_long_active_pane_srt_ParamLimits

0x787c,	// (0x00052512) tabs_3_long_active_pane_srt

0x787c,	// (0x00052512) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x787c,	// (0x00052512) tabs_3_long_passive_pane_cp_srt

0x787c,	// (0x00052512) tabs_3_long_passive_pane_srt_ParamLimits

0x787c,	// (0x00052512) tabs_3_long_passive_pane_srt

0x86aa,	// (0x00053340) bg_passive_tab_pane_cp5_srt_ParamLimits

0x86aa,	// (0x00053340) bg_passive_tab_pane_cp5_srt

0x8df7,	// (0x00053a8d) bg_passive_tab_pane_g1_cp5_srt

0x8d6d,	// (0x00053a03) bg_passive_tab_pane_g2_cp5_srt

0x8e00,	// (0x00053a96) bg_passive_tab_pane_g3_cp5_srt

0x8689,	// (0x0005331f) bg_active_tab_pane_cp5_srt_ParamLimits

0x8689,	// (0x0005331f) bg_active_tab_pane_cp5_srt

0xad61,	// (0x000559f7) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad61,	// (0x000559f7) tabs_3_long_active_pane_srt_t1

0x8df7,	// (0x00053a8d) bg_active_tab_pane_g1_cp5_srt

0x8d6d,	// (0x00053a03) bg_active_tab_pane_g2_cp5_srt

0x8e00,	// (0x00053a96) bg_active_tab_pane_g3_cp5_srt

0xad53,	// (0x000559e9) navi_text_pane_srt_t1

0xad4b,	// (0x000559e1) navi_icon_pane_srt_g1

0x92cc,	// (0x00053f62) midp_editing_number_pane_srt

0x9114,	// (0x00053daa) midp_ticker_pane_srt

0x92d4,	// (0x00053f6a) midp_ticker_pane_srt_g1

0x92dc,	// (0x00053f72) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x0005a413) midp_ticker_pane_srt_g

0x92e4,	// (0x00053f7a) midp_ticker_pane_srt_t1

0xad3c,	// (0x000559d2) midp_editing_number_pane_t1_copy1

0x86aa,	// (0x00053340) listscroll_midp_pane

0x86aa,	// (0x00053340) midp_form_pane

0x917e,	// (0x00053e14) midp_info_popup_window_ParamLimits

0x917e,	// (0x00053e14) midp_info_popup_window

0x8572,	// (0x00053208) bg_popup_sub_pane_cp50_ParamLimits

0x8572,	// (0x00053208) bg_popup_sub_pane_cp50

0x9e3a,	// (0x00054ad0) listscroll_midp_info_pane_ParamLimits

0x9e3a,	// (0x00054ad0) listscroll_midp_info_pane

0x9e22,	// (0x00054ab8) listscroll_form_midp_pane_ParamLimits

0x9e22,	// (0x00054ab8) listscroll_form_midp_pane

0x9e2e,	// (0x00054ac4) scroll_bar_cp050

0x9e02,	// (0x00054a98) list_midp_pane

0xbb1f,	// (0x000567b5) signal_pane_g2_cp

0x9d3c,	// (0x000549d2) listscroll_midp_info_pane_t1_ParamLimits

0x9d3c,	// (0x000549d2) listscroll_midp_info_pane_t1

0x9d54,	// (0x000549ea) listscroll_midp_info_pane_t2_ParamLimits

0x9d54,	// (0x000549ea) listscroll_midp_info_pane_t2

0x9d92,	// (0x00054a28) listscroll_midp_info_pane_t3_ParamLimits

0x9d92,	// (0x00054a28) listscroll_midp_info_pane_t3

0x9dcc,	// (0x00054a62) listscroll_midp_info_pane_t4_ParamLimits

0x9dcc,	// (0x00054a62) listscroll_midp_info_pane_t4

0x0003,

0xf835,	// (0x0005a4cb) listscroll_midp_info_pane_t_ParamLimits

0xf835,	// (0x0005a4cb) listscroll_midp_info_pane_t

0x8636,	// (0x000532cc) scroll_pane_cp21

0x9cda,	// (0x00054970) form_midp_field_choice_group_pane

0x9ce3,	// (0x00054979) form_midp_field_text_pane

0x9d22,	// (0x000549b8) form_midp_field_time_pane

0x9d2a,	// (0x000549c0) form_midp_gauge_slider_pane

0x9d33,	// (0x000549c9) form_midp_gauge_wait_pane

0x7521,	// (0x000521b7) form_midp_image_pane

0x62ab,	// (0x00050f41) list_single_midp_pane_ParamLimits

0x62ab,	// (0x00050f41) list_single_midp_pane

0x9c92,	// (0x00054928) form_midp_field_text_pane_t1

0x9a5c,	// (0x000546f2) input_focus_pane_cp050

0x9cc9,	// (0x0005495f) list_midp_form_text_pane

0x9c61,	// (0x000548f7) form_midp_field_choice_group_pane_t1

0x9c6f,	// (0x00054905) input_focus_pane_cp051

0x9c83,	// (0x00054919) list_midp_choice_pane

0x7521,	// (0x000521b7) status_idle_pane

0x9c45,	// (0x000548db) form_midp_field_time_pane_t1

0x7517,	// (0x000521ad) wait_anim_pane_g2_copy1

0x9c53,	// (0x000548e9) form_midp_field_time_pane_t2

0x0001,

0x922c,	// (0x00053ec2) aid_navinavi_width_2_pane

0xf830,	// (0x0005a4c6) form_midp_field_time_pane_t

0x7521,	// (0x000521b7) input_focus_pane_cp052

0x7521,	// (0x000521b7) bg_input_focus_pane_cp040

0x9c05,	// (0x0005489b) form_midp_gauge_slider_pane_t1

0x9c13,	// (0x000548a9) form_midp_gauge_slider_pane_t2

0x9c21,	// (0x000548b7) form_midp_gauge_slider_pane_t3

0x9c2f,	// (0x000548c5) form_midp_gauge_slider_pane_t4

0x0003,

0xf827,	// (0x0005a4bd) form_midp_gauge_slider_pane_t

0x9c3d,	// (0x000548d3) form_midp_slider_pane

0x7601,	// (0x00052297) bg_input_focus_pane_cp041_ParamLimits

0x7601,	// (0x00052297) bg_input_focus_pane_cp041

0x9bd2,	// (0x00054868) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bd2,	// (0x00054868) form_midp_gauge_wait_pane_t1

0x9be4,	// (0x0005487a) form_midp_gauge_wait_pane_t2_ParamLimits

0x9be4,	// (0x0005487a) form_midp_gauge_wait_pane_t2

0x0001,

0xf822,	// (0x0005a4b8) form_midp_gauge_wait_pane_t_ParamLimits

0xf822,	// (0x0005a4b8) form_midp_gauge_wait_pane_t

0x9bf6,	// (0x0005488c) form_midp_wait_pane_ParamLimits

0x9bf6,	// (0x0005488c) form_midp_wait_pane

0x9b9c,	// (0x00054832) form_midp_image_pane_g1

0x9ba5,	// (0x0005483b) form_midp_image_pane_t1

0x9bb4,	// (0x0005484a) form_midp_image_pane_t2

0x9bc3,	// (0x00054859) form_midp_image_pane_t3

0x0002,

0xf81b,	// (0x0005a4b1) form_midp_image_pane_t

0x9b93,	// (0x00054829) list_single_midp_pane_g1

0x629c,	// (0x00050f32) list_single_midp_pane_t1

0x9b6b,	// (0x00054801) list_midp_form_item_pane_ParamLimits

0x9b6b,	// (0x00054801) list_midp_form_item_pane

0x91d4,	// (0x00053e6a) list_midp_form_item_pane_t1

0x91e3,	// (0x00053e79) midp_ticker_pane_g1

0x91ef,	// (0x00053e85) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x0005a3f9) midp_ticker_pane_g

0x91fb,	// (0x00053e91) midp_ticker_pane_t1

0xaf8d,	// (0x00055c23) midp_editing_number_pane_t1

0xaf6b,	// (0x00055c01) midp_editing_number_pane

0xaf7a,	// (0x00055c10) midp_ticker_pane

0xad2c,	// (0x000559c2) ai_message_heading_pane

0x7521,	// (0x000521b7) bg_popup_window_pane_cp14

0xad34,	// (0x000559ca) listscroll_ai_message_pane

0xacb6,	// (0x0005594c) ai_message_heading_pane_g1_ParamLimits

0xacb6,	// (0x0005594c) ai_message_heading_pane_g1

0xacc2,	// (0x00055958) ai_message_heading_pane_g2_ParamLimits

0xacc2,	// (0x00055958) ai_message_heading_pane_g2

0xacce,	// (0x00055964) ai_message_heading_pane_g3_ParamLimits

0xacce,	// (0x00055964) ai_message_heading_pane_g3

0xacda,	// (0x00055970) ai_message_heading_pane_g4_ParamLimits

0xacda,	// (0x00055970) ai_message_heading_pane_g4

0x0003,

0xf95c,	// (0x0005a5f2) ai_message_heading_pane_g_ParamLimits

0xf95c,	// (0x0005a5f2) ai_message_heading_pane_g

0xace6,	// (0x0005597c) ai_message_heading_pane_t1_ParamLimits

0xace6,	// (0x0005597c) ai_message_heading_pane_t1

0xad00,	// (0x00055996) ai_message_heading_pane_t2_ParamLimits

0xad00,	// (0x00055996) ai_message_heading_pane_t2

0x0001,

0xf965,	// (0x0005a5fb) ai_message_heading_pane_t_ParamLimits

0xf965,	// (0x0005a5fb) ai_message_heading_pane_t

0xad12,	// (0x000559a8) bg_popup_heading_pane_cp1_ParamLimits

0xad12,	// (0x000559a8) bg_popup_heading_pane_cp1

0xaca4,	// (0x0005593a) list_ai_message_pane_ParamLimits

0xaca4,	// (0x0005593a) list_ai_message_pane

0x8636,	// (0x000532cc) scroll_pane_cp10

0xac40,	// (0x000558d6) list_ai_message_pane_g1

0xac48,	// (0x000558de) list_ai_message_pane_g2

0x0001,

0xf939,	// (0x0005a5cf) list_ai_message_pane_g

0xac50,	// (0x000558e6) list_ai_message_pane_t1_ParamLimits

0xac50,	// (0x000558e6) list_ai_message_pane_t1

0xac65,	// (0x000558fb) list_ai_message_pane_t2_ParamLimits

0xac65,	// (0x000558fb) list_ai_message_pane_t2

0xac7a,	// (0x00055910) list_ai_message_pane_t3_ParamLimits

0xac7a,	// (0x00055910) list_ai_message_pane_t3

0xac8f,	// (0x00055925) list_ai_message_pane_t4_ParamLimits

0xac8f,	// (0x00055925) list_ai_message_pane_t4

0x0003,

0xf93e,	// (0x0005a5d4) list_ai_message_pane_t_ParamLimits

0xf93e,	// (0x0005a5d4) list_ai_message_pane_t

0xac2b,	// (0x000558c1) cell_ai_soft_ind_pane_ParamLimits

0xac2b,	// (0x000558c1) cell_ai_soft_ind_pane

0x920d,	// (0x00053ea3) cell_ai_soft_ind_pane_g1_ParamLimits

0x920d,	// (0x00053ea3) cell_ai_soft_ind_pane_g1

0x7521,	// (0x000521b7) grid_highlight_cp1

0x921a,	// (0x00053eb0) text_secondary_cp56_ParamLimits

0x921a,	// (0x00053eb0) text_secondary_cp56

0xac00,	// (0x00055896) example_general_pane_ParamLimits

0xac00,	// (0x00055896) example_general_pane

0xac0c,	// (0x000558a2) example_parent_pane_g1_ParamLimits

0xac0c,	// (0x000558a2) example_parent_pane_g1

0xac18,	// (0x000558ae) example_parent_pane_t1_ParamLimits

0xac18,	// (0x000558ae) example_parent_pane_t1

0x5ee2,	// (0x00050b78) popup_preview_text_window_ParamLimits

0x5ee2,	// (0x00050b78) popup_preview_text_window

0x9045,	// (0x00053cdb) list_single_pane_cp2_g4

0x7932,	// (0x000525c8) bg_popup_preview_window_pane_ParamLimits

0x7932,	// (0x000525c8) bg_popup_preview_window_pane

0xa937,	// (0x000555cd) popup_preview_text_window_t1_ParamLimits

0xa937,	// (0x000555cd) popup_preview_text_window_t1

0xa955,	// (0x000555eb) popup_preview_text_window_t2_ParamLimits

0xa955,	// (0x000555eb) popup_preview_text_window_t2

0xa99e,	// (0x00055634) popup_preview_text_window_t3_ParamLimits

0xa99e,	// (0x00055634) popup_preview_text_window_t3

0xa9e3,	// (0x00055679) popup_preview_text_window_t4_ParamLimits

0xa9e3,	// (0x00055679) popup_preview_text_window_t4

0x0004,

0xf90d,	// (0x0005a5a3) popup_preview_text_window_t_ParamLimits

0xf90d,	// (0x0005a5a3) popup_preview_text_window_t

0xaa61,	// (0x000556f7) scroll_pane_cp11

0x9964,	// (0x000545fa) bg_popup_preview_window_pane_g1

0xa8f7,	// (0x0005558d) bg_popup_preview_window_pane_g2

0xa8ff,	// (0x00055595) bg_popup_preview_window_pane_g3

0xa907,	// (0x0005559d) bg_popup_preview_window_pane_g4

0xa90f,	// (0x000555a5) bg_popup_preview_window_pane_g5

0xa917,	// (0x000555ad) bg_popup_preview_window_pane_g6

0xa91f,	// (0x000555b5) bg_popup_preview_window_pane_g7

0xa927,	// (0x000555bd) bg_popup_preview_window_pane_g8

0x4953,	// (0x0004f5e9) aid_popup_width_pane

0x5ec0,	// (0x00050b56) popup_midp_note_alarm_window_ParamLimits

0x5ec0,	// (0x00050b56) popup_midp_note_alarm_window

0x84ae,	// (0x00053144) data_form_pane_ParamLimits

0x532c,	// (0x0004ffc2) form_field_data_pane_g1

0x5336,	// (0x0004ffcc) form_field_data_pane_t1_ParamLimits

0x84ba,	// (0x00053150) input_focus_pane_ParamLimits

0x84c8,	// (0x0005315e) data_form_wide_pane_ParamLimits

0x534e,	// (0x0004ffe4) form_field_data_wide_pane_g1

0x535a,	// (0x0004fff0) form_field_data_wide_pane_t1_ParamLimits

0x821f,	// (0x00052eb5) input_focus_pane_cp6_ParamLimits

0x85e3,	// (0x00053279) input_popup_find_pane_g1_ParamLimits

0x85e3,	// (0x00053279) input_popup_find_pane_g1

0x55d2,	// (0x00050268) aid_navi_side_left_pane

0x55e7,	// (0x0005027d) aid_navi_side_right_pane

0xa31f,	// (0x00054fb5) bg_popup_window_pane_cp30_ParamLimits

0xa31f,	// (0x00054fb5) bg_popup_window_pane_cp30

0xa399,	// (0x0005502f) popup_midp_note_alarm_window_g1_ParamLimits

0xa399,	// (0x0005502f) popup_midp_note_alarm_window_g1

0xa3c9,	// (0x0005505f) popup_midp_note_alarm_window_t1_ParamLimits

0xa3c9,	// (0x0005505f) popup_midp_note_alarm_window_t1

0xa46a,	// (0x00055100) popup_midp_note_alarm_window_t2_ParamLimits

0xa46a,	// (0x00055100) popup_midp_note_alarm_window_t2

0xa518,	// (0x000551ae) popup_midp_note_alarm_window_t3_ParamLimits

0xa518,	// (0x000551ae) popup_midp_note_alarm_window_t3

0xa54a,	// (0x000551e0) popup_midp_note_alarm_window_t4_ParamLimits

0xa54a,	// (0x000551e0) popup_midp_note_alarm_window_t4

0xa570,	// (0x00055206) popup_midp_note_alarm_window_t5_ParamLimits

0xa570,	// (0x00055206) popup_midp_note_alarm_window_t5

0x000a,

0xf8aa,	// (0x0005a540) popup_midp_note_alarm_window_t_ParamLimits

0xf8aa,	// (0x0005a540) popup_midp_note_alarm_window_t

0xa61c,	// (0x000552b2) wait_bar_pane_cp1_ParamLimits

0xa61c,	// (0x000552b2) wait_bar_pane_cp1

0x7521,	// (0x000521b7) wait_anim_pane_copy1

0x7521,	// (0x000521b7) wait_border_pane_copy1

0x9fe3,	// (0x00054c79) wait_border_pane_g1_copy1

0x5374,	// (0x0005000a) form_field_popup_pane_g1

0x537c,	// (0x00050012) form_field_popup_pane_t1_ParamLimits

0x84ba,	// (0x00053150) input_focus_pane_cp7_ParamLimits

0x84f4,	// (0x0005318a) list_form_pane_ParamLimits

0x5394,	// (0x0005002a) form_field_popup_wide_pane_g1

0x539c,	// (0x00050032) form_field_popup_wide_pane_t1_ParamLimits

0x84ba,	// (0x00053150) input_focus_pane_cp8_ParamLimits

0x8500,	// (0x00053196) list_form_wide_pane_ParamLimits

0xb0d1,	// (0x00055d67) aid_size_cell_graphic_pane

0x5426,	// (0x000500bc) data_form_pane_t1_ParamLimits

0x652a,	// (0x000511c0) data_form_wide_pane_t1_ParamLimits

0x9527,	// (0x000541bd) bg_status_flat_pane

0x7561,	// (0x000521f7) title_pane_t1_ParamLimits

0x75c9,	// (0x0005225f) title_pane_t2_ParamLimits

0x75ef,	// (0x00052285) title_pane_t3_ParamLimits

0xf55d,	// (0x0005a1f3) title_pane_t_ParamLimits

0x8ab3,	// (0x00053749) level_1_signal_ParamLimits

0x8ac0,	// (0x00053756) level_2_signal_ParamLimits

0x8acd,	// (0x00053763) level_3_signal_ParamLimits

0x8ada,	// (0x00053770) level_4_signal_ParamLimits

0x8ae7,	// (0x0005377d) level_5_signal_ParamLimits

0x8af4,	// (0x0005378a) level_6_signal_ParamLimits

0x8b01,	// (0x00053797) level_7_signal_ParamLimits

0x8ab3,	// (0x00053749) level_1_battery_ParamLimits

0x8ac0,	// (0x00053756) level_2_battery_ParamLimits

0x8acd,	// (0x00053763) level_3_battery_ParamLimits

0x8ada,	// (0x00053770) level_4_battery_ParamLimits

0x8ae7,	// (0x0005377d) level_5_battery_ParamLimits

0x8af4,	// (0x0005378a) level_6_battery_ParamLimits

0x8b01,	// (0x00053797) level_7_battery_ParamLimits

0xa224,	// (0x00054eba) bg_status_flat_pane_g1

0xa22c,	// (0x00054ec2) bg_status_flat_pane_g2

0xa234,	// (0x00054eca) bg_status_flat_pane_g3

0xa23c,	// (0x00054ed2) bg_status_flat_pane_g4

0xa244,	// (0x00054eda) bg_status_flat_pane_g5

0xa24c,	// (0x00054ee2) bg_status_flat_pane_g6

0xa254,	// (0x00054eea) bg_status_flat_pane_g7

0x7617,	// (0x000522ad) tabs_3_active_pane_t1_ParamLimits

0x7617,	// (0x000522ad) tabs_3_passive_pane_t1_ParamLimits

0x7631,	// (0x000522c7) tabs_4_active_pane_t1_ParamLimits

0x7631,	// (0x000522c7) tabs_4_1_passive_pane_t1_ParamLimits

0x8677,	// (0x0005330d) tabs_2_active_pane_t1_ParamLimits

0x8677,	// (0x0005330d) tabs_2_passive_pane_t1_ParamLimits

0x8689,	// (0x0005331f) bg_active_tab_pane_cp4_ParamLimits

0x8697,	// (0x0005332d) tabs_2_long_active_pane_t1_ParamLimits

0x86aa,	// (0x00053340) bg_passive_tab_pane_cp4_ParamLimits

0x61e9,	// (0x00050e7f) list_single_midp_graphic_pane_t1_ParamLimits

0x8689,	// (0x0005331f) bg_active_tab_pane_cp5_ParamLimits

0x86b6,	// (0x0005334c) tabs_3_long_active_pane_t1_ParamLimits

0x86aa,	// (0x00053340) bg_passive_tab_pane_cp5_ParamLimits

0x61e9,	// (0x00050e7f) list_single_midp_graphic_pane_t1

0x9527,	// (0x000541bd) bg_status_flat_pane_ParamLimits

0x95ea,	// (0x00054280) indicator_pane_cp2_ParamLimits

0x95ea,	// (0x00054280) indicator_pane_cp2

0x971e,	// (0x000543b4) navi_pane_srt_ParamLimits

0x971e,	// (0x000543b4) navi_pane_srt

0x9742,	// (0x000543d8) popup_clock_digital_analogue_window_cp1

0x76de,	// (0x00052374) indicator_pane_t1

0x9114,	// (0x00053daa) copy_highlight_pane

0x9114,	// (0x00053daa) cursor_graphics_pane

0x9114,	// (0x00053daa) graphic_within_text_pane

0x9114,	// (0x00053daa) link_highlight_pane

0xaa24,	// (0x000556ba) popup_preview_text_window_t5_ParamLimits

0xaa24,	// (0x000556ba) popup_preview_text_window_t5

0x9234,	// (0x00053eca) cursor_digital_pane

0x9234,	// (0x00053eca) cursor_primary_pane

0x9245,	// (0x00053edb) cursor_primary_small_pane

0x924d,	// (0x00053ee3) cursor_secondary_pane

0x9255,	// (0x00053eeb) cursor_title_pane

0x9234,	// (0x00053eca) link_highlight_digital_pane

0x923c,	// (0x00053ed2) link_highlight_primary_pane

0x9245,	// (0x00053edb) link_highlight_primary_small_pane

0x924d,	// (0x00053ee3) link_highlight_secondary_pane

0x9255,	// (0x00053eeb) link_highlight_title_pane

0x9234,	// (0x00053eca) copy_highlight_digital_pane

0x9234,	// (0x00053eca) copy_highlight_primary_pane

0x9245,	// (0x00053edb) copy_highlight_primary_small_pane

0x924d,	// (0x00053ee3) copy_highlight_secondary_pane

0x9255,	// (0x00053eeb) copy_highlight_title_pane

0x924d,	// (0x00053ee3) graphic_text_digital_pane

0xa2c2,	// (0x00054f58) graphic_text_primary_pane

0xa2cb,	// (0x00054f61) graphic_text_primary_small_pane

0x9245,	// (0x00053edb) graphic_text_secondary_pane

0x9234,	// (0x00053eca) graphic_text_title_pane

0x925d,	// (0x00053ef3) cursor_primary_pane_g1

0xa2b4,	// (0x00054f4a) cursor_text_primary_t1

0xa29c,	// (0x00054f32) cursor_primary_small_pane_g1

0xa2a6,	// (0x00054f3c) cursor_text_primary_small_t1

0xa284,	// (0x00054f1a) cursor_primary_small_pane_g1_copy1

0xa28e,	// (0x00054f24) cursor_text_primary_small_t1_copy1

0xa26c,	// (0x00054f02) cursor_text_title_t1

0xa27a,	// (0x00054f10) cursor_title_pane_g1

0x925d,	// (0x00053ef3) cursor_digital_pane_g1

0x9267,	// (0x00053efd) cursor_text_digital_t1

0x928c,	// (0x00053f22) link_highlight_primary_pane_g1

0xa215,	// (0x00054eab) link_highlight_primary_pane_t1

0x9275,	// (0x00053f0b) link_highlight_primary_small_pane_g1

0x927d,	// (0x00053f13) link_highlight_primary_small_pane_t1

0x928c,	// (0x00053f22) link_highlight_secondary_pane_g1

0x9294,	// (0x00053f2a) link_highlight_secondary_pane_t1

0xa189,	// (0x00054e1f) link_highlight_title_pane_g1

0xa191,	// (0x00054e27) link_highlight_title_pane_t1

0xa172,	// (0x00054e08) link_highlight_digital_pane_g1

0xa17a,	// (0x00054e10) link_highlight_digital_pane_t1

0xa028,	// (0x00054cbe) copy_highlight_primary_pane_g1

0xa030,	// (0x00054cc6) copy_highlight_primary_pane_t1

0xa002,	// (0x00054c98) copy_highlight_primary_small_pane_g1

0xa019,	// (0x00054caf) copy_highlight_primary_small_pane_t1

0x92a3,	// (0x00053f39) copy_highlight_secondary_pane_g1

0x92ab,	// (0x00053f41) copy_highlight_secondary_pane_t1

0xa002,	// (0x00054c98) copy_highlight_title_pane_g1

0xa00a,	// (0x00054ca0) copy_highlight_title_pane_t1

0xa028,	// (0x00054cbe) copy_highlight_digital_pane_g1

0xb29b,	// (0x00055f31) copy_highlight_digital_pane_t1

0xb1ef,	// (0x00055e85) graphic_text_primary_pane_g1

0xb27f,	// (0x00055f15) graphic_text_primary_pane_t1

0xb28d,	// (0x00055f23) graphic_text_primary_pane_t2

0x0001,

0xf9d9,	// (0x0005a66f) graphic_text_primary_pane_t

0xb25b,	// (0x00055ef1) graphic_text_primary_small_pane_g1

0xb263,	// (0x00055ef9) graphic_text_primary_small_pane_t1

0xb271,	// (0x00055f07) graphic_text_primary_small_pane_t2

0x0001,

0xf9d4,	// (0x0005a66a) graphic_text_primary_small_pane_t

0xb237,	// (0x00055ecd) graphic_text_secondary_pane_g1

0xb23f,	// (0x00055ed5) graphic_text_secondary_pane_t1

0xb24d,	// (0x00055ee3) graphic_text_secondary_pane_t2

0x0001,

0xf9cf,	// (0x0005a665) graphic_text_secondary_pane_t

0xb213,	// (0x00055ea9) graphic_text_title_pane_g1

0xb21b,	// (0x00055eb1) graphic_text_title_pane_t1

0xb229,	// (0x00055ebf) graphic_text_title_pane_t2

0x0001,

0xf9ca,	// (0x0005a660) graphic_text_title_pane_t

0xb1ef,	// (0x00055e85) graphic_text_digital_pane_g1

0xb1f7,	// (0x00055e8d) graphic_text_digital_pane_t1

0xb205,	// (0x00055e9b) graphic_text_digital_pane_t2

0x0001,

0xf9c5,	// (0x0005a65b) graphic_text_digital_pane_t

0x7601,	// (0x00052297) navi_icon_pane_srt_ParamLimits

0x7601,	// (0x00052297) navi_icon_pane_srt

0x7521,	// (0x000521b7) navi_midp_pane_srt

0x7521,	// (0x000521b7) navi_navi_pane_srt

0x7601,	// (0x00052297) navi_text_pane_srt_ParamLimits

0x7601,	// (0x00052297) navi_text_pane_srt

0xb1ba,	// (0x00055e50) navi_navi_icon_text_pane_srt

0xb1c2,	// (0x00055e58) navi_navi_pane_srt_g1_ParamLimits

0xb1c2,	// (0x00055e58) navi_navi_pane_srt_g1

0xb1d4,	// (0x00055e6a) navi_navi_pane_srt_g2_ParamLimits

0xb1d4,	// (0x00055e6a) navi_navi_pane_srt_g2

0x0001,

0xf9c0,	// (0x0005a656) navi_navi_pane_srt_g_ParamLimits

0xf9c0,	// (0x0005a656) navi_navi_pane_srt_g

0xb1e6,	// (0x00055e7c) navi_navi_tabs_pane_srt

0xb1ba,	// (0x00055e50) navi_navi_text_pane_srt

0xb1ba,	// (0x00055e50) navi_navi_volume_pane_srt

0xb1ab,	// (0x00055e41) navi_navi_text_pane_srt_t1

0x663e,	// (0x000512d4) navi_navi_volume_pane_srt_g1

0x6646,	// (0x000512dc) volume_small_pane_srt_ParamLimits

0x6646,	// (0x000512dc) volume_small_pane_srt

0x593c,	// (0x000505d2) volume_small_pane_srt_g1_ParamLimits

0x593c,	// (0x000505d2) volume_small_pane_srt_g1

0x594c,	// (0x000505e2) volume_small_pane_srt_g2_ParamLimits

0x594c,	// (0x000505e2) volume_small_pane_srt_g2

0x595d,	// (0x000505f3) volume_small_pane_srt_g3_ParamLimits

0x595d,	// (0x000505f3) volume_small_pane_srt_g3

0x596e,	// (0x00050604) volume_small_pane_srt_g4_ParamLimits

0x596e,	// (0x00050604) volume_small_pane_srt_g4

0x597f,	// (0x00050615) volume_small_pane_srt_g5_ParamLimits

0x597f,	// (0x00050615) volume_small_pane_srt_g5

0x5990,	// (0x00050626) volume_small_pane_srt_g6_ParamLimits

0x5990,	// (0x00050626) volume_small_pane_srt_g6

0x59a1,	// (0x00050637) volume_small_pane_srt_g7_ParamLimits

0x59a1,	// (0x00050637) volume_small_pane_srt_g7

0x59b2,	// (0x00050648) volume_small_pane_srt_g8_ParamLimits

0x59b2,	// (0x00050648) volume_small_pane_srt_g8

0x59c3,	// (0x00050659) volume_small_pane_srt_g9_ParamLimits

0x59c3,	// (0x00050659) volume_small_pane_srt_g9

0x59d4,	// (0x0005066a) volume_small_pane_srt_g10_ParamLimits

0x59d4,	// (0x0005066a) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x0005a3fe) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x0005a3fe) volume_small_pane_srt_g

0x801c,	// (0x00052cb2) query_popup_data_pane_cp2

0xb191,	// (0x00055e27) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb191,	// (0x00055e27) navi_navi_icon_text_pane_srt_t1

0xa2c2,	// (0x00054f58) navi_tabs_2_long_pane_srt

0xa2c2,	// (0x00054f58) navi_tabs_2_pane_srt

0xa2c2,	// (0x00054f58) navi_tabs_3_long_pane_srt

0xa2c2,	// (0x00054f58) navi_tabs_3_pane_srt

0xa2c2,	// (0x00054f58) navi_tabs_4_pane_srt

0x661e,	// (0x000512b4) tabs_2_active_pane_srt_ParamLimits

0x661e,	// (0x000512b4) tabs_2_active_pane_srt

0x662e,	// (0x000512c4) tabs_2_passive_pane_srt_ParamLimits

0x662e,	// (0x000512c4) tabs_2_passive_pane_srt

0x9454,	// (0x000540ea) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9454,	// (0x000540ea) bg_passive_tab_pane_cp1_srt

0xb15d,	// (0x00055df3) bg_passive_tab_pane_g1_cp1_srt

0x8d6d,	// (0x00053a03) bg_passive_tab_pane_g2_cp1_srt

0xb166,	// (0x00055dfc) bg_passive_tab_pane_g3_cp1_srt

0x7601,	// (0x00052297) bg_active_tab_pane_cp1_srt_ParamLimits

0x7601,	// (0x00052297) bg_active_tab_pane_cp1_srt

0xb16f,	// (0x00055e05) tabs_2_active_pane_srt_g1

0xb177,	// (0x00055e0d) tabs_2_active_pane_srt_t1_ParamLimits

0xb177,	// (0x00055e0d) tabs_2_active_pane_srt_t1

0xb15d,	// (0x00055df3) bg_active_tab_pane_g1_cp1_srt

0x8d6d,	// (0x00053a03) bg_active_tab_pane_g2_cp1_srt

0xb166,	// (0x00055dfc) bg_active_tab_pane_g3_cp1_srt

0x65eb,	// (0x00051281) tabs_3_active_pane_srt_ParamLimits

0x65eb,	// (0x00051281) tabs_3_active_pane_srt

0x65fc,	// (0x00051292) tabs_3_passive_pane_cp_srt_ParamLimits

0x65fc,	// (0x00051292) tabs_3_passive_pane_cp_srt

0x660d,	// (0x000512a3) tabs_3_passive_pane_srt_ParamLimits

0x660d,	// (0x000512a3) tabs_3_passive_pane_srt

0x9454,	// (0x000540ea) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9454,	// (0x000540ea) bg_passive_tab_pane_cp2_srt

0x92ba,	// (0x00053f50) bg_passive_tab_pane_g1_cp2_srt

0x8d6d,	// (0x00053a03) bg_passive_tab_pane_g2_cp2_srt

0x92c3,	// (0x00053f59) bg_passive_tab_pane_g3_cp2_srt

0x7601,	// (0x00052297) bg_active_tab_pane_cp2_srt_ParamLimits

0x7601,	// (0x00052297) bg_active_tab_pane_cp2_srt

0xb143,	// (0x00055dd9) tabs_3_active_pane_srt_g1

0xb14b,	// (0x00055de1) tabs_3_active_pane_srt_t1_ParamLimits

0xb14b,	// (0x00055de1) tabs_3_active_pane_srt_t1

0x92ba,	// (0x00053f50) bg_active_tab_pane_g1_cp2_srt

0x8d6d,	// (0x00053a03) bg_active_tab_pane_g2_cp2_srt

0x92c3,	// (0x00053f59) bg_active_tab_pane_g3_cp2_srt

0x65a3,	// (0x00051239) tabs_4_active_pane_srt_ParamLimits

0x65a3,	// (0x00051239) tabs_4_active_pane_srt

0x65b5,	// (0x0005124b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x65b5,	// (0x0005124b) tabs_4_passive_pane_cp2_srt

0x5b35,	// (0x000507cb) aid_size_cell_toolbar

0x86aa,	// (0x00053340) main_idle_act_pane_ParamLimits

0x5cf6,	// (0x0005098c) popup_large_graphic_colour_window_ParamLimits

0x605d,	// (0x00050cf3) popup_toolbar_window_ParamLimits

0x605d,	// (0x00050cf3) popup_toolbar_window

0xaf9c,	// (0x00055c32) list_single_graphic_2heading_pane_ParamLimits

0xaf9c,	// (0x00055c32) list_single_graphic_2heading_pane

0x8866,	// (0x000534fc) aid_size_cell_apps_grid_lsc_pane

0x8878,	// (0x0005350e) aid_size_cell_apps_grid_prt_pane

0x9454,	// (0x000540ea) bg_wml_button_pane_cp1_ParamLimits

0x9454,	// (0x000540ea) bg_wml_button_pane_cp1

0x9c92,	// (0x00054928) form_midp_field_text_pane_t1_ParamLimits

0x9a5c,	// (0x000546f2) input_focus_pane_cp050_ParamLimits

0x9cc9,	// (0x0005495f) list_midp_form_text_pane_ParamLimits

0x9c6f,	// (0x00054905) input_focus_pane_cp051_ParamLimits

0x9c83,	// (0x00054919) list_midp_choice_pane_ParamLimits

0x9b15,	// (0x000547ab) list_single_2graphic_pane_cp3_ParamLimits

0x9b15,	// (0x000547ab) list_single_2graphic_pane_cp3

0x9b39,	// (0x000547cf) list_single_midp_graphic_pane_ParamLimits

0x9b39,	// (0x000547cf) list_single_midp_graphic_pane

0x48db,	// (0x0004f571) list_single_graphic_2heading_pane_g1_ParamLimits

0x48db,	// (0x0004f571) list_single_graphic_2heading_pane_g1

0x48e7,	// (0x0004f57d) list_single_graphic_2heading_pane_g4_ParamLimits

0x48e7,	// (0x0004f57d) list_single_graphic_2heading_pane_g4

0x48f3,	// (0x0004f589) list_single_graphic_2heading_pane_g5_ParamLimits

0x48f3,	// (0x0004f589) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x0005a451) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x0005a451) list_single_graphic_2heading_pane_g

0x48ff,	// (0x0004f595) list_single_graphic_2heading_pane_t1_ParamLimits

0x48ff,	// (0x0004f595) list_single_graphic_2heading_pane_t1

0x4913,	// (0x0004f5a9) list_single_graphic_2heading_pane_t2_ParamLimits

0x4913,	// (0x0004f5a9) list_single_graphic_2heading_pane_t2

0x492f,	// (0x0004f5c5) list_single_graphic_2heading_pane_t3_ParamLimits

0x492f,	// (0x0004f5c5) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x0005a458) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x0005a458) list_single_graphic_2heading_pane_t

0x9896,	// (0x0005452c) bg_popup_sub_pane_cp2

0x98c0,	// (0x00054556) grid_toobar_pane

0x610a,	// (0x00050da0) cell_toolbar_pane_ParamLimits

0x610a,	// (0x00050da0) cell_toolbar_pane

0x9908,	// (0x0005459e) cell_toolbar_pane_g1_ParamLimits

0x9908,	// (0x0005459e) cell_toolbar_pane_g1

0x991c,	// (0x000545b2) cell_toolbar_pane_g2_ParamLimits

0x991c,	// (0x000545b2) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x0005a466) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x0005a466) cell_toolbar_pane_g

0x993e,	// (0x000545d4) grid_highlight_pane_cp2_ParamLimits

0x993e,	// (0x000545d4) grid_highlight_pane_cp2

0x9958,	// (0x000545ee) toolbar_button_pane

0x9964,	// (0x000545fa) toolbar_button_pane_g1

0x996c,	// (0x00054602) toolbar_button_pane_g2

0x9974,	// (0x0005460a) toolbar_button_pane_g3

0x997c,	// (0x00054612) toolbar_button_pane_g4

0x9984,	// (0x0005461a) toolbar_button_pane_g5

0x998c,	// (0x00054622) toolbar_button_pane_g6

0x9994,	// (0x0005462a) toolbar_button_pane_g7

0x999c,	// (0x00054632) toolbar_button_pane_g8

0x99a4,	// (0x0005463a) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x0005a46b) toolbar_button_pane_g

0x6164,	// (0x00050dfa) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6164,	// (0x00050dfa) list_single_2graphic_pane_g1_cp3

0x6170,	// (0x00050e06) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6170,	// (0x00050e06) list_single_2graphic_pane_g2_cp3

0x6181,	// (0x00050e17) list_single_2graphic_pane_g3_cp3

0x6189,	// (0x00050e1f) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6189,	// (0x00050e1f) list_single_2graphic_pane_g4_cp3

0x6195,	// (0x00050e2b) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6195,	// (0x00050e2b) list_single_2graphic_pane_t1_cp3

0x61dd,	// (0x00050e73) list_single_midp_graphic_pane_g2_ParamLimits

0x61dd,	// (0x00050e73) list_single_midp_graphic_pane_g2

0x48d3,	// (0x0004f569) aid_zoom_text_primary

0x5b3d,	// (0x000507d3) aid_zoom_text_secondary

0x9377,	// (0x0005400d) status_small_pane_g7_ParamLimits

0x9377,	// (0x0005400d) status_small_pane_g7

0x939a,	// (0x00054030) status_small_pane_t1_ParamLimits

0x7538,	// (0x000521ce) title_pane_g2

0x0003,

0xf554,	// (0x0005a1ea) title_pane_g

0x80bd,	// (0x00052d53) aid_size_cell_colour_1_pane_ParamLimits

0x80bd,	// (0x00052d53) aid_size_cell_colour_1_pane

0x80d1,	// (0x00052d67) aid_size_cell_colour_2_pane_ParamLimits

0x80d1,	// (0x00052d67) aid_size_cell_colour_2_pane

0x80e5,	// (0x00052d7b) aid_size_cell_colour_3_pane_ParamLimits

0x80e5,	// (0x00052d7b) aid_size_cell_colour_3_pane

0x80f9,	// (0x00052d8f) aid_size_cell_colour_4_pane_ParamLimits

0x80f9,	// (0x00052d8f) aid_size_cell_colour_4_pane

0x550e,	// (0x000501a4) title_pane_stacon_g1_ParamLimits

0x550e,	// (0x000501a4) title_pane_stacon_g1

0xa087,	// (0x00054d1d) popup_note_wait_window_g3_ParamLimits

0xa087,	// (0x00054d1d) popup_note_wait_window_g3

0xa11f,	// (0x00054db5) popup_note_wait_window_t5_ParamLimits

0xa11f,	// (0x00054db5) popup_note_wait_window_t5

0x7521,	// (0x000521b7) main_feb_china_hwr_fs_writing_pane

0x5bdb,	// (0x00050871) popup_feb_china_hwr_fs_window_ParamLimits

0x5bdb,	// (0x00050871) popup_feb_china_hwr_fs_window

0x61ff,	// (0x00050e95) aid_size_cell_hwr_fs_ParamLimits

0x61ff,	// (0x00050e95) aid_size_cell_hwr_fs

0x9a5c,	// (0x000546f2) bg_popup_sub_pane_cp3_ParamLimits

0x9a5c,	// (0x000546f2) bg_popup_sub_pane_cp3

0x6214,	// (0x00050eaa) grid_hwr_fs_pane_ParamLimits

0x6214,	// (0x00050eaa) grid_hwr_fs_pane

0x622c,	// (0x00050ec2) linegrid_hwr_fs_pane_ParamLimits

0x622c,	// (0x00050ec2) linegrid_hwr_fs_pane

0x623c,	// (0x00050ed2) cell_hwr_fs_pane_ParamLimits

0x623c,	// (0x00050ed2) cell_hwr_fs_pane

0x9a68,	// (0x000546fe) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a68,	// (0x000546fe) linegrid_hwr_fs_pane_g1

0x9a74,	// (0x0005470a) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a74,	// (0x0005470a) linegrid_hwr_fs_pane_g2

0x9a86,	// (0x0005471c) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a86,	// (0x0005471c) linegrid_hwr_fs_pane_g3

0x625e,	// (0x00050ef4) linegrid_hwr_fs_pane_g4_ParamLimits

0x625e,	// (0x00050ef4) linegrid_hwr_fs_pane_g4

0x6278,	// (0x00050f0e) linegrid_hwr_fs_pane_g5_ParamLimits

0x6278,	// (0x00050f0e) linegrid_hwr_fs_pane_g5

0x0004,

0xf800,	// (0x0005a496) linegrid_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0005a496) linegrid_hwr_fs_pane_g

0x9a92,	// (0x00054728) cell_hwr_fs_pane_g1_ParamLimits

0x9a92,	// (0x00054728) cell_hwr_fs_pane_g1

0x97d0,	// (0x00054466) cell_hwr_fs_pane_g2_ParamLimits

0x97d0,	// (0x00054466) cell_hwr_fs_pane_g2

0x9aa8,	// (0x0005473e) cell_hwr_fs_pane_g3_ParamLimits

0x9aa8,	// (0x0005473e) cell_hwr_fs_pane_g3

0x9ab5,	// (0x0005474b) cell_hwr_fs_pane_g4_ParamLimits

0x9ab5,	// (0x0005474b) cell_hwr_fs_pane_g4

0x0003,

0xf80b,	// (0x0005a4a1) cell_hwr_fs_pane_g_ParamLimits

0xf80b,	// (0x0005a4a1) cell_hwr_fs_pane_g

0x628e,	// (0x00050f24) cell_hwr_fs_pane_t1

0x7521,	// (0x000521b7) grid_highlight_pane_cp6

0x7521,	// (0x000521b7) main_idle_act2_pane

0x861d,	// (0x000532b3) aid_inside_area_popup_secondary

0xa756,	// (0x000553ec) aid_inside_area_window_primary_ParamLimits

0xa756,	// (0x000553ec) aid_inside_area_window_primary

0xb2aa,	// (0x00055f40) ai2_news_ticker_pane

0xb2b2,	// (0x00055f48) aid_size_cell_ai1_link_ParamLimits

0xb2b2,	// (0x00055f48) aid_size_cell_ai1_link

0xb2cc,	// (0x00055f62) popup_ai2_data_window_ParamLimits

0xb2cc,	// (0x00055f62) popup_ai2_data_window

0xb2e2,	// (0x00055f78) popup_ai2_link_window_ParamLimits

0xb2e2,	// (0x00055f78) popup_ai2_link_window

0x9a5c,	// (0x000546f2) bg_popup_sub_pane_cp4_ParamLimits

0x9a5c,	// (0x000546f2) bg_popup_sub_pane_cp4

0xb2f6,	// (0x00055f8c) grid_ai2_link_pane_ParamLimits

0xb2f6,	// (0x00055f8c) grid_ai2_link_pane

0xb30d,	// (0x00055fa3) popup_ai2_link_window_g1_ParamLimits

0xb30d,	// (0x00055fa3) popup_ai2_link_window_g1

0xb319,	// (0x00055faf) popup_ai2_link_window_g2_ParamLimits

0xb319,	// (0x00055faf) popup_ai2_link_window_g2

0x0001,

0xf9de,	// (0x0005a674) popup_ai2_link_window_g_ParamLimits

0xf9de,	// (0x0005a674) popup_ai2_link_window_g

0xb328,	// (0x00055fbe) ai2_mp_button_pane

0xb330,	// (0x00055fc6) ai2_mp_volume_pane

0x9c6f,	// (0x00054905) bg_popup_sub_pane_cp5_ParamLimits

0x9c6f,	// (0x00054905) bg_popup_sub_pane_cp5

0xb338,	// (0x00055fce) heading_ai2_gene_pane_ParamLimits

0xb338,	// (0x00055fce) heading_ai2_gene_pane

0xb344,	// (0x00055fda) list_ai2_gene_pane_ParamLimits

0xb344,	// (0x00055fda) list_ai2_gene_pane

0xb38c,	// (0x00056022) cell_ai2_link_pane_ParamLimits

0xb38c,	// (0x00056022) cell_ai2_link_pane

0xb3a2,	// (0x00056038) cell_ai2_link_pane_g1

0x7521,	// (0x000521b7) grid_highlight_pane_cp7

0x665b,	// (0x000512f1) ai2_mp_volume_pane_g1

0xb472,	// (0x00056108) ai2_mp_volume_pane_g2

0xb3e7,	// (0x0005607d) list_ai2_gene_pane_t1

0xb47a,	// (0x00056110) ai2_mp_volume_pane_g3

0x0002,

0xf9f7,	// (0x0005a68d) ai2_mp_volume_pane_g

0x6663,	// (0x000512f9) volume_small_pane_cp3

0xb482,	// (0x00056118) aid_size_cell_ai2_button

0xb48a,	// (0x00056120) grid_ai2_button_pane

0xb493,	// (0x00056129) cell_ai2_button_pane_ParamLimits

0xb493,	// (0x00056129) cell_ai2_button_pane

0x7517,	// (0x000521ad) cell_ai2_button_pane_g1

0x7521,	// (0x000521b7) grid_highlight_pane_cp8

0xb432,	// (0x000560c8) ai2_gene_pane_t1_ParamLimits

0xb432,	// (0x000560c8) ai2_gene_pane_t1

0x5b2b,	// (0x000507c1) aid_height_parent_landscape

0xadd3,	// (0x00055a69) aid_height_set_list

0xade4,	// (0x00055a7a) aid_size_parent

0xb0d1,	// (0x00055d67) aid_size_cell_graphic_pane_ParamLimits

0xb354,	// (0x00055fea) popup_ai2_data_window_g1_ParamLimits

0xb354,	// (0x00055fea) popup_ai2_data_window_g1

0xb360,	// (0x00055ff6) ai2_news_ticker_pane_g1

0xb368,	// (0x00055ffe) ai2_news_ticker_pane_g2

0x0001,

0xf9e3,	// (0x0005a679) ai2_news_ticker_pane_g

0xb370,	// (0x00056006) ai2_news_ticker_pane_t1

0xb37e,	// (0x00056014) ai2_news_ticker_pane_t2

0x0001,

0xf9e8,	// (0x0005a67e) ai2_news_ticker_pane_t

0xb3ab,	// (0x00056041) heading_ai2_gene_pane_g1

0xb3b3,	// (0x00056049) heading_ai2_gene_pane_t1_ParamLimits

0xb3b3,	// (0x00056049) heading_ai2_gene_pane_t1

0xb3c8,	// (0x0005605e) list_highlight_pane_cp6

0xb3d0,	// (0x00056066) ai2_gene_pane_ParamLimits

0xb3d0,	// (0x00056066) ai2_gene_pane

0xb3f5,	// (0x0005608b) list_ai2_gene_pane_t2

0x0001,

0xf9ed,	// (0x0005a683) list_ai2_gene_pane_t

0xb403,	// (0x00056099) list_highlight_pane_cp8_ParamLimits

0xb403,	// (0x00056099) list_highlight_pane_cp8

0xb414,	// (0x000560aa) ai2_gene_pane_g1_ParamLimits

0xb414,	// (0x000560aa) ai2_gene_pane_g1

0xb426,	// (0x000560bc) ai2_gene_pane_g2_ParamLimits

0xb426,	// (0x000560bc) ai2_gene_pane_g2

0x0001,

0xf9f2,	// (0x0005a688) ai2_gene_pane_g_ParamLimits

0xf9f2,	// (0x0005a688) ai2_gene_pane_g

0x8444,	// (0x000530da) scroll_pane_cp12

0x5aea,	// (0x00050780) control_pane_t3_ParamLimits

0x5aea,	// (0x00050780) control_pane_t3

0x938b,	// (0x00054021) status_small_pane_g8_ParamLimits

0x938b,	// (0x00054021) status_small_pane_g8

0x5cc1,	// (0x00050957) popup_find_window_ParamLimits

0x5ed4,	// (0x00050b6a) popup_note_image_window_ParamLimits

0x613a,	// (0x00050dd0) list_double2_graphic_pane_vc_g1_ParamLimits

0x613a,	// (0x00050dd0) list_double2_graphic_pane_vc_g1

0x98fc,	// (0x00054592) list_double2_graphic_pane_vc_g2_ParamLimits

0x98fc,	// (0x00054592) list_double2_graphic_pane_vc_g2

0x7a31,	// (0x000526c7) list_double2_graphic_pane_vc_g3_ParamLimits

0x7a31,	// (0x000526c7) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x0005a45f) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x0005a45f) list_double2_graphic_pane_vc_g

0x6146,	// (0x00050ddc) list_double2_graphic_pane_vc_t1_ParamLimits

0x6146,	// (0x00050ddc) list_double2_graphic_pane_vc_t1

0x98fc,	// (0x00054592) list_single_heading_pane_vc_g1_ParamLimits

0x98fc,	// (0x00054592) list_single_heading_pane_vc_g1

0x7a31,	// (0x000526c7) list_single_heading_pane_vc_g2_ParamLimits

0x7a31,	// (0x000526c7) list_single_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x0005a480) list_single_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x0005a480) list_single_heading_pane_vc_g

0x61b1,	// (0x00050e47) list_single_heading_pane_vc_t1_ParamLimits

0x61b1,	// (0x00050e47) list_single_heading_pane_vc_t1

0x61c9,	// (0x00050e5f) list_single_heading_pane_vc_t2_ParamLimits

0x61c9,	// (0x00050e5f) list_single_heading_pane_vc_t2

0x0001,

0xf7ef,	// (0x0005a485) list_single_heading_pane_vc_t_ParamLimits

0xf7ef,	// (0x0005a485) list_single_heading_pane_vc_t

0x99ac,	// (0x00054642) list_setting_number_pane_vc_g1_ParamLimits

0x99ac,	// (0x00054642) list_setting_number_pane_vc_g1

0x99b8,	// (0x0005464e) list_setting_number_pane_vc_g2_ParamLimits

0x99b8,	// (0x0005464e) list_setting_number_pane_vc_g2

0x0001,

0xf7f4,	// (0x0005a48a) list_setting_number_pane_vc_g_ParamLimits

0xf7f4,	// (0x0005a48a) list_setting_number_pane_vc_g

0x99c4,	// (0x0005465a) list_setting_number_pane_vc_t1_ParamLimits

0x99c4,	// (0x0005465a) list_setting_number_pane_vc_t1

0x99d8,	// (0x0005466e) list_setting_number_pane_vc_t2_ParamLimits

0x99d8,	// (0x0005466e) list_setting_number_pane_vc_t2

0x99f4,	// (0x0005468a) list_setting_number_pane_vc_t3_ParamLimits

0x99f4,	// (0x0005468a) list_setting_number_pane_vc_t3

0x0002,

0xf7f9,	// (0x0005a48f) list_setting_number_pane_vc_t_ParamLimits

0xf7f9,	// (0x0005a48f) list_setting_number_pane_vc_t

0x9a20,	// (0x000546b6) set_value_pane_vc_ParamLimits

0x9a20,	// (0x000546b6) set_value_pane_vc

0xaf9c,	// (0x00055c32) list_double2_graphic_pane_vc_ParamLimits

0xaf9c,	// (0x00055c32) list_double2_graphic_pane_vc

0x7a3d,	// (0x000526d3) list_double2_large_graphic_pane_vc_ParamLimits

0x7a3d,	// (0x000526d3) list_double2_large_graphic_pane_vc

0xaf9c,	// (0x00055c32) list_double2_pane_vc_ParamLimits

0xaf9c,	// (0x00055c32) list_double2_pane_vc

0xaf9c,	// (0x00055c32) list_double_graphic_heading_pane_vc_ParamLimits

0xaf9c,	// (0x00055c32) list_double_graphic_heading_pane_vc

0xaf9c,	// (0x00055c32) list_double_graphic_pane_vc_ParamLimits

0xaf9c,	// (0x00055c32) list_double_graphic_pane_vc

0xaf9c,	// (0x00055c32) list_double_heading_pane_vc_ParamLimits

0xaf9c,	// (0x00055c32) list_double_heading_pane_vc

0x7a3d,	// (0x000526d3) list_double_large_graphic_pane_vc_ParamLimits

0x7a3d,	// (0x000526d3) list_double_large_graphic_pane_vc

0xaf9c,	// (0x00055c32) list_double_number_pane_vc_ParamLimits

0xaf9c,	// (0x00055c32) list_double_number_pane_vc

0xaf9c,	// (0x00055c32) list_double_pane_vc_ParamLimits

0xaf9c,	// (0x00055c32) list_double_pane_vc

0xaf9c,	// (0x00055c32) list_double_time_pane_vc_ParamLimits

0xaf9c,	// (0x00055c32) list_double_time_pane_vc

0xaf9c,	// (0x00055c32) list_setting_number_pane_vc_ParamLimits

0xaf9c,	// (0x00055c32) list_setting_number_pane_vc

0xaf9c,	// (0x00055c32) list_setting_pane_vc_ParamLimits

0xaf9c,	// (0x00055c32) list_setting_pane_vc

0xaf9c,	// (0x00055c32) list_single_graphic_heading_pane_vc_ParamLimits

0xaf9c,	// (0x00055c32) list_single_graphic_heading_pane_vc

0xaf9c,	// (0x00055c32) list_single_heading_pane_vc_ParamLimits

0xaf9c,	// (0x00055c32) list_single_heading_pane_vc

0x7a4e,	// (0x000526e4) list_single_number_heading_pane_vc_ParamLimits

0x7a4e,	// (0x000526e4) list_single_number_heading_pane_vc

0x613a,	// (0x00050dd0) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x613a,	// (0x00050dd0) list_double_graphic_heading_pane_vc_g1

0x98fc,	// (0x00054592) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x98fc,	// (0x00054592) list_double_graphic_heading_pane_vc_g2

0x7a31,	// (0x000526c7) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7a31,	// (0x000526c7) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c9,	// (0x0005a45f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0005a45f) list_double_graphic_heading_pane_vc_g

0x666c,	// (0x00051302) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x666c,	// (0x00051302) list_double_graphic_heading_pane_vc_t1

0x61b1,	// (0x00050e47) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x61b1,	// (0x00050e47) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fe,	// (0x0005a694) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fe,	// (0x0005a694) list_double_graphic_heading_pane_vc_t

0x99ac,	// (0x00054642) list_setting_pane_vc_g1_ParamLimits

0x99ac,	// (0x00054642) list_setting_pane_vc_g1

0x99b8,	// (0x0005464e) list_setting_pane_vc_g2_ParamLimits

0x99b8,	// (0x0005464e) list_setting_pane_vc_g2

0x0001,

0xf7f4,	// (0x0005a48a) list_setting_pane_vc_g_ParamLimits

0xf7f4,	// (0x0005a48a) list_setting_pane_vc_g

0xb6d3,	// (0x00056369) list_setting_pane_vc_t1_ParamLimits

0xb6d3,	// (0x00056369) list_setting_pane_vc_t1

0xb731,	// (0x000563c7) list_setting_pane_vc_t2_ParamLimits

0xb731,	// (0x000563c7) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x0005a6c2) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x0005a6c2) list_setting_pane_vc_t

0x9a20,	// (0x000546b6) set_value_pane_cp_vc_ParamLimits

0x9a20,	// (0x000546b6) set_value_pane_cp_vc

0x98fc,	// (0x00054592) list_single_number_heading_pane_vc_g1_ParamLimits

0x98fc,	// (0x00054592) list_single_number_heading_pane_vc_g1

0x7a31,	// (0x000526c7) list_single_number_heading_pane_vc_g2_ParamLimits

0x7a31,	// (0x000526c7) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x0005a480) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x0005a480) list_single_number_heading_pane_vc_g

0x61b1,	// (0x00050e47) list_single_number_heading_pane_vc_t1_ParamLimits

0x61b1,	// (0x00050e47) list_single_number_heading_pane_vc_t1

0x6680,	// (0x00051316) list_single_number_heading_pane_vc_t2_ParamLimits

0x6680,	// (0x00051316) list_single_number_heading_pane_vc_t2

0x6694,	// (0x0005132a) list_single_number_heading_pane_vc_t3_ParamLimits

0x6694,	// (0x0005132a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x0005a6c7) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x0005a6c7) list_single_number_heading_pane_vc_t

0x613a,	// (0x00050dd0) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x613a,	// (0x00050dd0) list_single_graphic_heading_pane_vc_g1

0x98fc,	// (0x00054592) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x98fc,	// (0x00054592) list_single_graphic_heading_pane_vc_g4

0x7a31,	// (0x000526c7) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7a31,	// (0x000526c7) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x0005a45f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0005a45f) list_single_graphic_heading_pane_vc_g

0x61b1,	// (0x00050e47) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x61b1,	// (0x00050e47) list_single_graphic_heading_pane_vc_t1

0x66a6,	// (0x0005133c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x66a6,	// (0x0005133c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x0005a6ce) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x0005a6ce) list_single_graphic_heading_pane_vc_t

0x98fc,	// (0x00054592) list_double2_pane_vc_g1_ParamLimits

0x98fc,	// (0x00054592) list_double2_pane_vc_g1

0x7a31,	// (0x000526c7) list_double2_pane_vc_g2_ParamLimits

0x7a31,	// (0x000526c7) list_double2_pane_vc_g2

0x0001,

0xf7ea,	// (0x0005a480) list_double2_pane_vc_g_ParamLimits

0xf7ea,	// (0x0005a480) list_double2_pane_vc_g

0x66ba,	// (0x00051350) list_double2_pane_vc_t1_ParamLimits

0x66ba,	// (0x00051350) list_double2_pane_vc_t1

0x7ae1,	// (0x00052777) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7ae1,	// (0x00052777) list_double2_large_graphic_pane_vc_g1

0x7aed,	// (0x00052783) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x7aed,	// (0x00052783) list_double2_large_graphic_pane_vc_g2

0x7af9,	// (0x0005278f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x7af9,	// (0x0005278f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3d,	// (0x0005a6d3) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x0005a6d3) list_double2_large_graphic_pane_vc_g

0x66d0,	// (0x00051366) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x66d0,	// (0x00051366) list_double2_large_graphic_pane_vc_t1

0x7b05,	// (0x0005279b) list_double_time_pane_vc_g1_ParamLimits

0x7b05,	// (0x0005279b) list_double_time_pane_vc_g1

0x7b11,	// (0x000527a7) list_double_time_pane_vc_g2_ParamLimits

0x7b11,	// (0x000527a7) list_double_time_pane_vc_g2

0x0001,

0xfa44,	// (0x0005a6da) list_double_time_pane_vc_g_ParamLimits

0xfa44,	// (0x0005a6da) list_double_time_pane_vc_g

0x66e6,	// (0x0005137c) list_double_time_pane_vc_t1_ParamLimits

0x66e6,	// (0x0005137c) list_double_time_pane_vc_t1

0x670a,	// (0x000513a0) list_double_time_pane_vc_t2_ParamLimits

0x670a,	// (0x000513a0) list_double_time_pane_vc_t2

0x6759,	// (0x000513ef) list_double_time_pane_vc_t3_ParamLimits

0x6759,	// (0x000513ef) list_double_time_pane_vc_t3

0x7b1d,	// (0x000527b3) list_double_time_pane_vc_t4_ParamLimits

0x7b1d,	// (0x000527b3) list_double_time_pane_vc_t4

0x0003,

0xfa49,	// (0x0005a6df) list_double_time_pane_vc_t_ParamLimits

0xfa49,	// (0x0005a6df) list_double_time_pane_vc_t

0x98fc,	// (0x00054592) list_double_pane_vc_g1_ParamLimits

0x98fc,	// (0x00054592) list_double_pane_vc_g1

0x7a31,	// (0x000526c7) list_double_pane_vc_g2_ParamLimits

0x7a31,	// (0x000526c7) list_double_pane_vc_g2

0x0001,

0xf7ea,	// (0x0005a480) list_double_pane_vc_g_ParamLimits

0xf7ea,	// (0x0005a480) list_double_pane_vc_g

0x7b42,	// (0x000527d8) list_double_pane_vc_t1_ParamLimits

0x7b42,	// (0x000527d8) list_double_pane_vc_t1

0x7b56,	// (0x000527ec) list_double_pane_vc_t2_ParamLimits

0x7b56,	// (0x000527ec) list_double_pane_vc_t2

0x0001,

0xfa52,	// (0x0005a6e8) list_double_pane_vc_t_ParamLimits

0xfa52,	// (0x0005a6e8) list_double_pane_vc_t

0x98fc,	// (0x00054592) list_double_number_pane_vc_g1_ParamLimits

0x98fc,	// (0x00054592) list_double_number_pane_vc_g1

0x7a31,	// (0x000526c7) list_double_number_pane_vc_g2_ParamLimits

0x7a31,	// (0x000526c7) list_double_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0005a480) list_double_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0005a480) list_double_number_pane_vc_g

0x7b6e,	// (0x00052804) list_double_number_pane_vc_t1_ParamLimits

0x7b6e,	// (0x00052804) list_double_number_pane_vc_t1

0x7b82,	// (0x00052818) list_double_number_pane_vc_t2_ParamLimits

0x7b82,	// (0x00052818) list_double_number_pane_vc_t2

0x7b56,	// (0x000527ec) list_double_number_pane_vc_t3_ParamLimits

0x7b56,	// (0x000527ec) list_double_number_pane_vc_t3

0x0002,

0xfa57,	// (0x0005a6ed) list_double_number_pane_vc_t_ParamLimits

0xfa57,	// (0x0005a6ed) list_double_number_pane_vc_t

0x7b96,	// (0x0005282c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7b96,	// (0x0005282c) list_double_large_graphic_pane_vc_g1

0x7ba7,	// (0x0005283d) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7ba7,	// (0x0005283d) list_double_large_graphic_pane_vc_g2

0x7af9,	// (0x0005278f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7af9,	// (0x0005278f) list_double_large_graphic_pane_vc_g3

0x7bb6,	// (0x0005284c) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7bb6,	// (0x0005284c) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5e,	// (0x0005a6f4) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5e,	// (0x0005a6f4) list_double_large_graphic_pane_vc_g

0x7bc2,	// (0x00052858) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7bc2,	// (0x00052858) list_double_large_graphic_pane_vc_t1

0x7bdb,	// (0x00052871) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7bdb,	// (0x00052871) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa67,	// (0x0005a6fd) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa67,	// (0x0005a6fd) list_double_large_graphic_pane_vc_t

0x98fc,	// (0x00054592) list_double_heading_pane_vc_g1_ParamLimits

0x98fc,	// (0x00054592) list_double_heading_pane_vc_g1

0x7a31,	// (0x000526c7) list_double_heading_pane_vc_g2_ParamLimits

0x7a31,	// (0x000526c7) list_double_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x0005a480) list_double_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x0005a480) list_double_heading_pane_vc_g

0x7bf4,	// (0x0005288a) list_double_heading_pane_vc_t1_ParamLimits

0x7bf4,	// (0x0005288a) list_double_heading_pane_vc_t1

0x61b1,	// (0x00050e47) list_double_heading_pane_vc_t2_ParamLimits

0x61b1,	// (0x00050e47) list_double_heading_pane_vc_t2

0x0001,

0xfa6c,	// (0x0005a702) list_double_heading_pane_vc_t_ParamLimits

0xfa6c,	// (0x0005a702) list_double_heading_pane_vc_t

0x613a,	// (0x00050dd0) list_double_graphic_pane_vc_g1_ParamLimits

0x613a,	// (0x00050dd0) list_double_graphic_pane_vc_g1

0x7c08,	// (0x0005289e) list_double_graphic_pane_vc_g2_ParamLimits

0x7c08,	// (0x0005289e) list_double_graphic_pane_vc_g2

0x7c17,	// (0x000528ad) list_double_graphic_pane_vc_g3_ParamLimits

0x7c17,	// (0x000528ad) list_double_graphic_pane_vc_g3

0x0002,

0xfa71,	// (0x0005a707) list_double_graphic_pane_vc_g_ParamLimits

0xfa71,	// (0x0005a707) list_double_graphic_pane_vc_g

0x7c23,	// (0x000528b9) list_double_graphic_pane_vc_t1_ParamLimits

0x7c23,	// (0x000528b9) list_double_graphic_pane_vc_t1

0x7b56,	// (0x000527ec) list_double_graphic_pane_vc_t2_ParamLimits

0x7b56,	// (0x000527ec) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0005a70e) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0005a70e) list_double_graphic_pane_vc_t

0x495f,	// (0x0004f5f5) aid_size_cell_fastswap

0x4967,	// (0x0004f5fd) aid_size_cell_touch_ParamLimits

0x4967,	// (0x0004f5fd) aid_size_cell_touch

0x4bcc,	// (0x0004f862) popup_fast_swap_wide_window_ParamLimits

0x4bcc,	// (0x0004f862) popup_fast_swap_wide_window

0x4cd6,	// (0x0004f96c) touch_pane_ParamLimits

0x4cd6,	// (0x0004f96c) touch_pane

0x84a6,	// (0x0005313c) button_value_adjust_pane_cp2

0x5278,	// (0x0004ff0e) button_value_adjust_pane_cp4

0x529c,	// (0x0004ff32) form_field_data_pane_cp2

0x52bd,	// (0x0004ff53) form_field_data_wide_pane_cp2

0x8931,	// (0x000535c7) bg_scroll_pane_ParamLimits

0x5671,	// (0x00050307) scroll_handle_pane_ParamLimits

0x5685,	// (0x0005031b) scroll_sc2_down_pane_ParamLimits

0x5685,	// (0x0005031b) scroll_sc2_down_pane

0x8962,	// (0x000535f8) scroll_sc2_up_pane_ParamLimits

0x8962,	// (0x000535f8) scroll_sc2_up_pane

0xbbf2,	// (0x00056888) grid_wheel_folder_pane_g1_ParamLimits

0xbbf2,	// (0x00056888) grid_wheel_folder_pane_g1

0x58d4,	// (0x0005056a) clock_nsta_pane_cp2_ParamLimits

0x58d4,	// (0x0005056a) clock_nsta_pane_cp2

0x86aa,	// (0x00053340) listscroll_midp_pane_ParamLimits

0x911c,	// (0x00053db2) midp_canvas_pane

0x9406,	// (0x0005409c) nsta_clock_indic_pane

0x943a,	// (0x000540d0) listscroll_form_pane_vc

0x9442,	// (0x000540d8) listscroll_set_pane_vc_ParamLimits

0x9442,	// (0x000540d8) listscroll_set_pane_vc

0x9543,	// (0x000541d9) clock_nsta_pane

0x95b8,	// (0x0005424e) indicator_nsta_pane

0x9896,	// (0x0005452c) bg_popup_sub_pane_cp2_ParamLimits

0x98aa,	// (0x00054540) find_pane_cp2_ParamLimits

0x98aa,	// (0x00054540) find_pane_cp2

0x98c0,	// (0x00054556) grid_toobar_pane_ParamLimits

0x9a30,	// (0x000546c6) list_form_gen_pane_vc_ParamLimits

0x9a30,	// (0x000546c6) list_form_gen_pane_vc

0x9a46,	// (0x000546dc) scroll_pane_cp8_vc_ParamLimits

0x9a46,	// (0x000546dc) scroll_pane_cp8_vc

0x9ac2,	// (0x00054758) data_form_wide_pane_vc_ParamLimits

0x9ac2,	// (0x00054758) data_form_wide_pane_vc

0x9ace,	// (0x00054764) form_field_data_wide_pane_vc_g1

0x9ad6,	// (0x0005476c) form_field_data_wide_pane_vc_t1_ParamLimits

0x9ad6,	// (0x0005476c) form_field_data_wide_pane_vc_t1

0x84ba,	// (0x00053150) input_focus_pane_cp6_vc_ParamLimits

0x84ba,	// (0x00053150) input_focus_pane_cp6_vc

0x9e02,	// (0x00054a98) list_midp_pane_ParamLimits

0x9e0e,	// (0x00054aa4) scroll_pane_cp16_ParamLimits

0x9e0e,	// (0x00054aa4) scroll_pane_cp16

0x9e5c,	// (0x00054af2) button_value_adjust_pane_ParamLimits

0x9e5c,	// (0x00054af2) button_value_adjust_pane

0xadf6,	// (0x00055a8c) button_value_adjust_pane_cp6_ParamLimits

0xadf6,	// (0x00055a8c) button_value_adjust_pane_cp6

0xaf20,	// (0x00055bb6) settings_code_pane_cp_ParamLimits

0xaf20,	// (0x00055bb6) settings_code_pane_cp

0x7517,	// (0x000521ad) cell_touch_pane_g1

0x7517,	// (0x000521ad) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x0005a3a4) cell_touch_pane_g

0xb4a5,	// (0x0005613b) cell_touch_pane_cp_ParamLimits

0xb4a5,	// (0x0005613b) cell_touch_pane_cp

0xb4b5,	// (0x0005614b) cell_touch_pane_ParamLimits

0xb4b5,	// (0x0005614b) cell_touch_pane

0x7517,	// (0x000521ad) scroll_sc2_down_pane_g1

0x7517,	// (0x000521ad) scroll_sc2_up_pane_g1

0x7521,	// (0x000521b7) bg_set_opt_pane_cp4_vc

0xb4c7,	// (0x0005615d) list_set_graphic_pane_vc_g1_ParamLimits

0xb4c7,	// (0x0005615d) list_set_graphic_pane_vc_g1

0xb4d3,	// (0x00056169) list_set_graphic_pane_vc_g2_ParamLimits

0xb4d3,	// (0x00056169) list_set_graphic_pane_vc_g2

0x0001,

0xfa03,	// (0x0005a699) list_set_graphic_pane_vc_g_ParamLimits

0xfa03,	// (0x0005a699) list_set_graphic_pane_vc_g

0xb4df,	// (0x00056175) text_primary_small_cp13_vc_ParamLimits

0xb4df,	// (0x00056175) text_primary_small_cp13_vc

0xb4f7,	// (0x0005618d) list_set_graphic_pane_vc_ParamLimits

0xb4f7,	// (0x0005618d) list_set_graphic_pane_vc

0x7521,	// (0x000521b7) input_focus_pane_cp2_vc

0x7517,	// (0x000521ad) setting_code_pane_vc_g1

0x764c,	// (0x000522e2) setting_code_pane_vc_t1

0xb509,	// (0x0005619f) set_text_pane_vc_t1_ParamLimits

0xb509,	// (0x0005619f) set_text_pane_vc_t1

0x7521,	// (0x000521b7) input_focus_pane_cp1_vc

0xb524,	// (0x000561ba) list_set_text_pane_vc

0x7517,	// (0x000521ad) setting_text_pane_vc_g1

0x7521,	// (0x000521b7) bg_set_opt_pane_cp2_vc

0x7643,	// (0x000522d9) setting_slider_graphic_pane_vc_g1

0xb52e,	// (0x000561c4) setting_slider_graphic_pane_vc_t1

0xb53e,	// (0x000561d4) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa08,	// (0x0005a69e) setting_slider_graphic_pane_vc_t

0xb54e,	// (0x000561e4) slider_set_pane_cp_vc

0xb556,	// (0x000561ec) slider_set_pane_vc_g1

0xb55f,	// (0x000561f5) slider_set_pane_vc_g2

0x0006,

0xfa0d,	// (0x0005a6a3) slider_set_pane_vc_g

0x8521,	// (0x000531b7) set_opt_bg_pane_g1_copy1

0x8529,	// (0x000531bf) set_opt_bg_pane_g2_copy1

0xb58b,	// (0x00056221) set_opt_bg_pane_g3_copy1

0x8539,	// (0x000531cf) set_opt_bg_pane_g4_copy1

0x8541,	// (0x000531d7) set_opt_bg_pane_g5_copy1

0x8549,	// (0x000531df) set_opt_bg_pane_g6_copy1

0xb595,	// (0x0005622b) set_opt_bg_pane_g7_copy1

0xb59d,	// (0x00056233) set_opt_bg_pane_g8_copy1

0xb5a7,	// (0x0005623d) set_opt_bg_pane_g9_copy1

0x7521,	// (0x000521b7) bg_set_opt_pane_cp_vc

0xb5b1,	// (0x00056247) setting_slider_pane_vc_t1

0xb5c0,	// (0x00056256) setting_slider_pane_vc_t2

0xb5d0,	// (0x00056266) setting_slider_pane_vc_t3

0x0002,

0xfa1c,	// (0x0005a6b2) setting_slider_pane_vc_t

0xb5e0,	// (0x00056276) slider_set_pane_vc

0x62d6,	// (0x00050f6c) volume_set_pane_vc_g1

0x62df,	// (0x00050f75) volume_set_pane_vc_g2

0x62e8,	// (0x00050f7e) volume_set_pane_vc_g3

0x62f1,	// (0x00050f87) volume_set_pane_vc_g4

0x62fa,	// (0x00050f90) volume_set_pane_vc_g5

0x6303,	// (0x00050f99) volume_set_pane_vc_g6

0x630c,	// (0x00050fa2) volume_set_pane_vc_g7

0x6315,	// (0x00050fab) volume_set_pane_vc_g8

0x631e,	// (0x00050fb4) volume_set_pane_vc_g9

0x6327,	// (0x00050fbd) volume_set_pane_vc_g10

0x0009,

0xf8c1,	// (0x0005a557) volume_set_pane_vc_g

0xb5e8,	// (0x0005627e) volume_set_pane_vc

0xb5f0,	// (0x00056286) button_value_adjust_pane_cp1_vc

0xb5fa,	// (0x00056290) list_highlight_pane_cp2_vc

0xb603,	// (0x00056299) list_set_pane_vc_ParamLimits

0xb603,	// (0x00056299) list_set_pane_vc

0xb661,	// (0x000562f7) main_pane_set_vc_t1_ParamLimits

0xb661,	// (0x000562f7) main_pane_set_vc_t1

0xb676,	// (0x0005630c) main_pane_set_vc_t2_ParamLimits

0xb676,	// (0x0005630c) main_pane_set_vc_t2

0xb688,	// (0x0005631e) main_pane_set_vc_t3_ParamLimits

0xb688,	// (0x0005631e) main_pane_set_vc_t3

0xb69c,	// (0x00056332) main_pane_set_vc_t4_ParamLimits

0xb69c,	// (0x00056332) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x0005a6b9) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x0005a6b9) main_pane_set_vc_t

0xb6b0,	// (0x00056346) setting_code_pane_vc_ParamLimits

0xb6b0,	// (0x00056346) setting_code_pane_vc

0xb6c1,	// (0x00056357) setting_slider_graphic_pane_vc

0xb6c1,	// (0x00056357) setting_slider_pane_vc

0xb6c1,	// (0x00056357) setting_text_pane_vc

0xb6c1,	// (0x00056357) setting_volume_pane_vc

0xb6cb,	// (0x00056361) scroll_pane_cp121_vc

0x8494,	// (0x0005312a) set_content_pane_vc

0xb74d,	// (0x000563e3) button_value_adjust_pane_g1

0xb756,	// (0x000563ec) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x0005a713) button_value_adjust_pane_g

0xb75f,	// (0x000563f5) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb75f,	// (0x000563f5) form_field_slider_wide_pane_vc_t1

0xb773,	// (0x00056409) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb773,	// (0x00056409) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x0005a718) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x0005a718) form_field_slider_wide_pane_vc_t

0x787c,	// (0x00052512) input_focus_pane_cp10_vc_ParamLimits

0x787c,	// (0x00052512) input_focus_pane_cp10_vc

0xb7a1,	// (0x00056437) slider_cont_pane_cp1_vc_ParamLimits

0xb7a1,	// (0x00056437) slider_cont_pane_cp1_vc

0xb7b3,	// (0x00056449) slider_form_pane_g1_cp2

0xb55f,	// (0x000561f5) slider_form_pane_g2_cp2

0xb7e0,	// (0x00056476) form_field_slider_pane_vc_t3

0xb7ee,	// (0x00056484) form_field_slider_pane_vc_t4

0xb7fc,	// (0x00056492) slider_form_pane_vc_ParamLimits

0xb7fc,	// (0x00056492) slider_form_pane_vc

0xb809,	// (0x0005649f) form_field_slider_pane_vc_t1_ParamLimits

0xb809,	// (0x0005649f) form_field_slider_pane_vc_t1

0xb773,	// (0x00056409) form_field_slider_pane_vc_t2_ParamLimits

0xb773,	// (0x00056409) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x0005a72a) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x0005a72a) form_field_slider_pane_vc_t

0x787c,	// (0x00052512) input_focus_pane_cp9_vc_ParamLimits

0x787c,	// (0x00052512) input_focus_pane_cp9_vc

0xb825,	// (0x000564bb) slider_cont_pane_vc_ParamLimits

0xb825,	// (0x000564bb) slider_cont_pane_vc

0xb839,	// (0x000564cf) list_form_graphic_pane_cp_vc_ParamLimits

0xb839,	// (0x000564cf) list_form_graphic_pane_cp_vc

0x9ace,	// (0x00054764) form_field_popup_wide_pane_vc_g1

0xb84e,	// (0x000564e4) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb84e,	// (0x000564e4) form_field_popup_wide_pane_vc_t1

0x84ba,	// (0x00053150) input_focus_pane_cp8_vc_ParamLimits

0x84ba,	// (0x00053150) input_focus_pane_cp8_vc

0xb893,	// (0x00056529) list_form_wide_pane_vc_ParamLimits

0xb893,	// (0x00056529) list_form_wide_pane_vc

0xb89f,	// (0x00056535) list_form_graphic_pane_vc_g1

0xb8a7,	// (0x0005653d) list_form_graphic_pane_vc_t1_ParamLimits

0xb8a7,	// (0x0005653d) list_form_graphic_pane_vc_t1

0x7601,	// (0x00052297) list_highlight_pane_cp5_vc_ParamLimits

0x7601,	// (0x00052297) list_highlight_pane_cp5_vc

0xb8c3,	// (0x00056559) list_form_graphic_pane_vc_ParamLimits

0xb8c3,	// (0x00056559) list_form_graphic_pane_vc

0x9ace,	// (0x00054764) form_field_popup_pane_vc_g1

0xb8d9,	// (0x0005656f) form_field_popup_pane_vc_t1_ParamLimits

0xb8d9,	// (0x0005656f) form_field_popup_pane_vc_t1

0x84ba,	// (0x00053150) input_focus_pane_cp7_vc_ParamLimits

0x84ba,	// (0x00053150) input_focus_pane_cp7_vc

0xb8f0,	// (0x00056586) list_form_pane_vc_ParamLimits

0xb8f0,	// (0x00056586) list_form_pane_vc

0xb8fc,	// (0x00056592) data_form_pane_vc_t1_ParamLimits

0xb8fc,	// (0x00056592) data_form_pane_vc_t1

0x8521,	// (0x000531b7) input_focus_pane_vc_g1

0x8529,	// (0x000531bf) input_focus_pane_vc_g2

0x8531,	// (0x000531c7) input_focus_pane_vc_g3

0x8539,	// (0x000531cf) input_focus_pane_vc_g4

0x8541,	// (0x000531d7) input_focus_pane_vc_g5

0x8549,	// (0x000531df) input_focus_pane_vc_g6

0x8551,	// (0x000531e7) input_focus_pane_vc_g7

0x8559,	// (0x000531ef) input_focus_pane_vc_g8

0x8561,	// (0x000531f7) input_focus_pane_vc_g9

0x7517,	// (0x000521ad) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x0005a32d) input_focus_pane_vc_g

0x9ac2,	// (0x00054758) data_form_pane_vc_ParamLimits

0x9ac2,	// (0x00054758) data_form_pane_vc

0x9ace,	// (0x00054764) form_field_data_pane_vc_g1

0xb917,	// (0x000565ad) form_field_data_pane_vc_t1_ParamLimits

0xb917,	// (0x000565ad) form_field_data_pane_vc_t1

0x84ba,	// (0x00053150) input_focus_pane_vc_ParamLimits

0x84ba,	// (0x00053150) input_focus_pane_vc

0xb931,	// (0x000565c7) button_value_adjust_pane_cp3_vc

0xb939,	// (0x000565cf) button_value_adjust_pane_cp5_vc

0xb941,	// (0x000565d7) form_field_data_pane_vc_ParamLimits

0xb941,	// (0x000565d7) form_field_data_pane_vc

0xb958,	// (0x000565ee) form_field_data_pane_vc_cp2

0xb960,	// (0x000565f6) form_field_data_wide_pane_vc_ParamLimits

0xb960,	// (0x000565f6) form_field_data_wide_pane_vc

0xb976,	// (0x0005660c) form_field_data_wide_pane_vc_cp2

0xb97e,	// (0x00056614) form_field_popup_pane_vc_ParamLimits

0xb97e,	// (0x00056614) form_field_popup_pane_vc

0xb995,	// (0x0005662b) form_field_popup_wide_pane_vc_ParamLimits

0xb995,	// (0x0005662b) form_field_popup_wide_pane_vc

0xb9ab,	// (0x00056641) form_field_slider_pane_vc_ParamLimits

0xb9ab,	// (0x00056641) form_field_slider_pane_vc

0xb9be,	// (0x00056654) form_field_slider_wide_pane_vc_ParamLimits

0xb9be,	// (0x00056654) form_field_slider_wide_pane_vc

0xb9d1,	// (0x00056667) grid_touch_1_pane_ParamLimits

0xb9d1,	// (0x00056667) grid_touch_1_pane

0xb9dd,	// (0x00056673) grid_touch_2_pane_ParamLimits

0xb9dd,	// (0x00056673) grid_touch_2_pane

0x93d1,	// (0x00054067) touch_pane_g1_ParamLimits

0x93d1,	// (0x00054067) touch_pane_g1

0xb9f5,	// (0x0005668b) cell_app_pane_cp_wide_ParamLimits

0xb9f5,	// (0x0005668b) cell_app_pane_cp_wide

0xba06,	// (0x0005669c) grid_popup_fast_wide_pane_ParamLimits

0xba06,	// (0x0005669c) grid_popup_fast_wide_pane

0xba1a,	// (0x000566b0) scroll_pane_cp19_ParamLimits

0xba1a,	// (0x000566b0) scroll_pane_cp19

0x7521,	// (0x000521b7) bg_popup_window_pane_cp20

0xba2e,	// (0x000566c4) listscroll_popup_fast_wide_pane

0x7601,	// (0x00052297) grid_indicator_nsta_pane

0xba36,	// (0x000566cc) clock_nsta_pane_g1

0xba3f,	// (0x000566d5) clock_nsta_pane_t1

0xba5b,	// (0x000566f1) cell_indicator_nsta_pane_ParamLimits

0xba5b,	// (0x000566f1) cell_indicator_nsta_pane

0xba93,	// (0x00056729) cell_indicator_nsta_pane_g1

0xbaa1,	// (0x00056737) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x0005a73b) cell_indicator_nsta_pane_g

0xbab7,	// (0x0005674d) clock_nsta_pane_cp

0xbabf,	// (0x00056755) indicator_nsta_pane_cp

0xbac8,	// (0x0005675e) nsta_clock_indic_pane_g1

0x76ca,	// (0x00052360) grid_indicator_pane

0x8a57,	// (0x000536ed) scroll_pane_cp29

0x5823,	// (0x000504b9) indicator_nsta_pane_cp2_ParamLimits

0x5823,	// (0x000504b9) indicator_nsta_pane_cp2

0x7601,	// (0x00052297) main_apps_wheel_pane

0x9ce3,	// (0x00054979) form_midp_field_text_pane_ParamLimits

0x9e2e,	// (0x00054ac4) scroll_bar_cp050_ParamLimits

0xbb31,	// (0x000567c7) cell_indicator_pane_ParamLimits

0xbb31,	// (0x000567c7) cell_indicator_pane

0xbb48,	// (0x000567de) cell_indicator_pane_g1

0xbb52,	// (0x000567e8) grid_wheel_folder_pane_ParamLimits

0xbb52,	// (0x000567e8) grid_wheel_folder_pane

0xbb66,	// (0x000567fc) list_wheel_apps_pane_ParamLimits

0xbb66,	// (0x000567fc) list_wheel_apps_pane

0xbb77,	// (0x0005680d) main_apps_wheel_pane_g1_ParamLimits

0xbb77,	// (0x0005680d) main_apps_wheel_pane_g1

0xbb8b,	// (0x00056821) main_apps_wheel_pane_g2_ParamLimits

0xbb8b,	// (0x00056821) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x0005a757) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x0005a757) main_apps_wheel_pane_g

0xbba3,	// (0x00056839) main_apps_wheel_pane_t1_ParamLimits

0xbba3,	// (0x00056839) main_apps_wheel_pane_t1

0xbbc6,	// (0x0005685c) list_wheel_apps_pane_g1

0xbbce,	// (0x00056864) list_wheel_apps_pane_g2

0xbbd6,	// (0x0005686c) list_wheel_apps_pane_g3

0xbbde,	// (0x00056874) list_wheel_apps_pane_g4

0xbbe8,	// (0x0005687e) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x0005a75c) list_wheel_apps_pane_g

0x8fa0,	// (0x00053c36) navi_icon_text_pane

0x9476,	// (0x0005410c) aid_fill_nsta

0xbc0b,	// (0x000568a1) navi_icon_text_pane_g1

0xbc17,	// (0x000568ad) navi_icon_text_pane_t1

0x8e3e,	// (0x00053ad4) list_set_graphic_pane_t1_ParamLimits

0x8e3e,	// (0x00053ad4) list_set_graphic_pane_t1

0xa59f,	// (0x00055235) popup_midp_note_alarm_window_t6_ParamLimits

0xa59f,	// (0x00055235) popup_midp_note_alarm_window_t6

0xa5b1,	// (0x00055247) popup_midp_note_alarm_window_t7_ParamLimits

0xa5b1,	// (0x00055247) popup_midp_note_alarm_window_t7

0xa5c3,	// (0x00055259) popup_midp_note_alarm_window_t8_ParamLimits

0xa5c3,	// (0x00055259) popup_midp_note_alarm_window_t8

0xa5d5,	// (0x0005526b) popup_midp_note_alarm_window_t9_ParamLimits

0xa5d5,	// (0x0005526b) popup_midp_note_alarm_window_t9

0xa5e7,	// (0x0005527d) popup_midp_note_alarm_window_t10_ParamLimits

0xa5e7,	// (0x0005527d) popup_midp_note_alarm_window_t10

0xa5f9,	// (0x0005528f) popup_midp_note_alarm_window_t11_ParamLimits

0xa5f9,	// (0x0005528f) popup_midp_note_alarm_window_t11

0xa60b,	// (0x000552a1) scroll_pane_cp17_ParamLimits

0xa60b,	// (0x000552a1) scroll_pane_cp17

0x62d6,	// (0x00050f6c) volume_small_pane_cp_g1

0x676b,	// (0x00051401) volume_small_pane_cp_g2

0x6774,	// (0x0005140a) volume_small_pane_cp_g3

0x677d,	// (0x00051413) volume_small_pane_cp_g4

0x6786,	// (0x0005141c) volume_small_pane_cp_g5

0x678f,	// (0x00051425) volume_small_pane_cp_g6

0x6798,	// (0x0005142e) volume_small_pane_cp_g7

0x67a1,	// (0x00051437) volume_small_pane_cp_g8

0x67aa,	// (0x00051440) volume_small_pane_cp_g9

0x67b3,	// (0x00051449) volume_small_pane_cp_g10

0x91e3,	// (0x00053e79) midp_ticker_pane_g1_ParamLimits

0x91ef,	// (0x00053e85) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x0005a3f9) midp_ticker_pane_g_ParamLimits

0x91fb,	// (0x00053e91) midp_ticker_pane_t1_ParamLimits

0x948c,	// (0x00054122) aid_fill_nsta_2

0x9e1a,	// (0x00054ab0) list_form2_midp_pane

0xaf6b,	// (0x00055c01) midp_editing_number_pane_ParamLimits

0xaf7a,	// (0x00055c10) midp_ticker_pane_ParamLimits

0xbc29,	// (0x000568bf) form2_midp_field_pane

0xbc4d,	// (0x000568e3) scroll_pane_cp51

0xbc6d,	// (0x00056903) form2_midp_button_pane_ParamLimits

0xbc6d,	// (0x00056903) form2_midp_button_pane

0xbc7f,	// (0x00056915) form2_midp_content_pane_ParamLimits

0xbc7f,	// (0x00056915) form2_midp_content_pane

0xbc99,	// (0x0005692f) form2_midp_field_choice_group_pane

0xbca1,	// (0x00056937) form2_midp_field_pane_g1

0xbca9,	// (0x0005693f) form2_midp_field_pane_g2

0xbcb1,	// (0x00056947) form2_midp_field_pane_g3

0xbcb9,	// (0x0005694f) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x0005a781) form2_midp_field_pane_g

0xbcc1,	// (0x00056957) form2_midp_gauge_slider_pane

0xbcc9,	// (0x0005695f) form2_midp_gauge_wait_pane

0xbcd1,	// (0x00056967) form2_midp_image_pane_ParamLimits

0xbcd1,	// (0x00056967) form2_midp_image_pane

0xbcec,	// (0x00056982) form2_midp_label_pane_ParamLimits

0xbcec,	// (0x00056982) form2_midp_label_pane

0xbd05,	// (0x0005699b) form2_midp_label_pane_cp_ParamLimits

0xbd05,	// (0x0005699b) form2_midp_label_pane_cp

0xbd26,	// (0x000569bc) form2_midp_string_pane_ParamLimits

0xbd26,	// (0x000569bc) form2_midp_string_pane

0x7c37,	// (0x000528cd) form2_midp_text_pane_ParamLimits

0x7c37,	// (0x000528cd) form2_midp_text_pane

0xbd38,	// (0x000569ce) form2_midp_time_pane

0xbd48,	// (0x000569de) input_focus_pane_cp51_ParamLimits

0xbd48,	// (0x000569de) input_focus_pane_cp51

0xbd60,	// (0x000569f6) form2_midp_label_pane_t1_ParamLimits

0xbd60,	// (0x000569f6) form2_midp_label_pane_t1

0x7c56,	// (0x000528ec) form2_mdip_text_pane_t1_ParamLimits

0x7c56,	// (0x000528ec) form2_mdip_text_pane_t1

0x7c74,	// (0x0005290a) form2_midp_time_pane_t1

0xbda9,	// (0x00056a3f) form2_midp_gauge_slider_pane_t1

0xbdbb,	// (0x00056a51) form2_midp_gauge_slider_pane_t2

0xbdcd,	// (0x00056a63) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x0005a78a) form2_midp_gauge_slider_pane_t

0xbddf,	// (0x00056a75) form2_midp_slider_pane

0xbdeb,	// (0x00056a81) form2_midp_gauge_wait_pane_t1

0xbdf9,	// (0x00056a8f) form2_midp_wait_pane_ParamLimits

0xbdf9,	// (0x00056a8f) form2_midp_wait_pane

0x9b15,	// (0x000547ab) list_single_2graphic_pane_cp4_ParamLimits

0x9b15,	// (0x000547ab) list_single_2graphic_pane_cp4

0xbe24,	// (0x00056aba) list_single_midp_graphic_pane_cp_ParamLimits

0xbe24,	// (0x00056aba) list_single_midp_graphic_pane_cp

0x7521,	// (0x000521b7) list_highlight_pane_cp20

0xbe53,	// (0x00056ae9) list_single_2graphic_pane_g1_cp4

0xbe5b,	// (0x00056af1) list_single_2graphic_pane_g2_cp4

0xbe63,	// (0x00056af9) list_single_2graphic_pane_t1_cp4

0x7601,	// (0x00052297) list_highlight_pane_cp21

0xbe72,	// (0x00056b08) list_single_midp_graphic_pane_g4_cp

0xbe81,	// (0x00056b17) list_single_midp_graphic_pane_t1_cp

0xbe96,	// (0x00056b2c) form2_mdip_string_pane_t1_ParamLimits

0xbe96,	// (0x00056b2c) form2_mdip_string_pane_t1

0x7521,	// (0x000521b7) bg_wml_button_pane_cp2

0x7517,	// (0x000521ad) form2_midp_image_pane_g1

0x7a14,	// (0x000526aa) list_double_large_graphic_pane_g5_ParamLimits

0x7a14,	// (0x000526aa) list_double_large_graphic_pane_g5

0x86aa,	// (0x00053340) midp_form_pane_ParamLimits

0x7601,	// (0x00052297) main_apps_wheel_pane_ParamLimits

0x5efa,	// (0x00050b90) popup_preview_window_ParamLimits

0x5efa,	// (0x00050b90) popup_preview_window

0x60b5,	// (0x00050d4b) popup_touch_info_window_ParamLimits

0x60b5,	// (0x00050d4b) popup_touch_info_window

0x60d3,	// (0x00050d69) popup_touch_menu_window_ParamLimits

0x60d3,	// (0x00050d69) popup_touch_menu_window

0x750d,	// (0x000521a3) bg_popup_sub_pane_cp6

0xbf8f,	// (0x00056c25) list_touch_menu_pane

0xbf97,	// (0x00056c2d) list_single_touch_menu_pane_ParamLimits

0xbf97,	// (0x00056c2d) list_single_touch_menu_pane

0xbfad,	// (0x00056c43) list_single_touch_menu_pane_t1

0x7601,	// (0x00052297) bg_popup_sub_pane_cp7_ParamLimits

0x7601,	// (0x00052297) bg_popup_sub_pane_cp7

0xbfbb,	// (0x00056c51) heading_sub_pane

0xbfc3,	// (0x00056c59) list_touch_info_pane_ParamLimits

0xbfc3,	// (0x00056c59) list_touch_info_pane

0xbfd2,	// (0x00056c68) list_single_touch_info_pane_ParamLimits

0xbfd2,	// (0x00056c68) list_single_touch_info_pane

0xbfe4,	// (0x00056c7a) list_single_touch_info_pane_t1

0xbff2,	// (0x00056c88) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x0005a798) list_single_touch_info_pane_t

0x9114,	// (0x00053daa) bg_popup_heading_pane_cp

0xc000,	// (0x00056c96) heading_sub_pane_t1

0x9a5c,	// (0x000546f2) bg_popup_preview_window_pane_cp_ParamLimits

0x9a5c,	// (0x000546f2) bg_popup_preview_window_pane_cp

0xbfbb,	// (0x00056c51) heading_preview_pane

0xbfc3,	// (0x00056c59) list_preview_pane_ParamLimits

0xbfc3,	// (0x00056c59) list_preview_pane

0xc00e,	// (0x00056ca4) popup_preview_window_g1

0xbfd2,	// (0x00056c68) list_single_preview_pane_ParamLimits

0xbfd2,	// (0x00056c68) list_single_preview_pane

0xc016,	// (0x00056cac) list_single_preview_pane_g1

0xc01e,	// (0x00056cb4) list_single_preview_pane_t1

0xbfe4,	// (0x00056c7a) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x0005a79d) list_single_preview_pane_t

0xc02c,	// (0x00056cc2) bg_popup_heading_pane_cp2_ParamLimits

0xc02c,	// (0x00056cc2) bg_popup_heading_pane_cp2

0xc042,	// (0x00056cd8) heading_preview_pane_g1

0xc04a,	// (0x00056ce0) heading_preview_pane_t1_ParamLimits

0xc04a,	// (0x00056ce0) heading_preview_pane_t1

0x76ed,	// (0x00052383) soft_indicator_pane_t1_ParamLimits

0x8421,	// (0x000530b7) scroll_pane_ParamLimits

0x8950,	// (0x000535e6) scroll_sc2_left_pane

0x8959,	// (0x000535ef) scroll_sc2_right_pane

0x8978,	// (0x0005360e) scroll_bg_pane_g1_ParamLimits

0x898d,	// (0x00053623) scroll_bg_pane_g2_ParamLimits

0x89a5,	// (0x0005363b) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x0005a384) scroll_bg_pane_g_ParamLimits

0x8978,	// (0x0005360e) scroll_handle_pane_g1_ParamLimits

0x89c7,	// (0x0005365d) scroll_handle_pane_g2_ParamLimits

0x89a5,	// (0x0005363b) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x0005a38b) scroll_handle_pane_g_ParamLimits

0x5b7d,	// (0x00050813) popup_choice_list_window_ParamLimits

0x5b7d,	// (0x00050813) popup_choice_list_window

0x98a2,	// (0x00054538) choice_list_pane

0x9930,	// (0x000545c6) cell_toolbar_pane_t1

0x9958,	// (0x000545ee) toolbar_button_pane_ParamLimits

0xaab6,	// (0x0005574c) ai_gene_pane_1_t2_ParamLimits

0xaab6,	// (0x0005574c) ai_gene_pane_1_t2

0x0001,

0xf91d,	// (0x0005a5b3) ai_gene_pane_1_t_ParamLimits

0xf91d,	// (0x0005a5b3) ai_gene_pane_1_t

0xc067,	// (0x00056cfd) scroll_sc2_left_pane_g1

0xc067,	// (0x00056cfd) scroll_sc2_right_pane_g1

0x9454,	// (0x000540ea) bg_popup_sub_pane_cp10

0xc071,	// (0x00056d07) list_choice_list_pane

0xc08a,	// (0x00056d20) list_single_choice_list_pane_ParamLimits

0xc08a,	// (0x00056d20) list_single_choice_list_pane

0xc09d,	// (0x00056d33) list_single_choice_list_pane_g1

0x865a,	// (0x000532f0) list_single_choice_list_pane_t1_ParamLimits

0x865a,	// (0x000532f0) list_single_choice_list_pane_t1

0xc0a5,	// (0x00056d3b) choice_list_pane_g1

0xc0ad,	// (0x00056d43) choice_list_pane_t1

0x750d,	// (0x000521a3) input_focus_pane_cp11

0x8831,	// (0x000534c7) title_pane_stacon_g2_ParamLimits

0x8831,	// (0x000534c7) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x0005a36a) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0005a36a) title_pane_stacon_g

0x9114,	// (0x00053daa) cursor_press_pane

0x5c29,	// (0x000508bf) popup_fep_hwr_window_ParamLimits

0x5c29,	// (0x000508bf) popup_fep_hwr_window

0x5ca3,	// (0x00050939) popup_fep_vkb_window_ParamLimits

0x5ca3,	// (0x00050939) popup_fep_vkb_window

0xc0bb,	// (0x00056d51) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x0005a7c6) fep_vkb_side_pane_g_ParamLimits

0x67f5,	// (0x0005148b) fep_hwr_candidate_pane_ParamLimits

0x67f5,	// (0x0005148b) fep_hwr_candidate_pane

0x681f,	// (0x000514b5) fep_hwr_side_pane_ParamLimits

0x681f,	// (0x000514b5) fep_hwr_side_pane

0x683f,	// (0x000514d5) fep_hwr_top_pane_ParamLimits

0x683f,	// (0x000514d5) fep_hwr_top_pane

0x6857,	// (0x000514ed) fep_hwr_write_pane_ParamLimits

0x6857,	// (0x000514ed) fep_hwr_write_pane

0xfb30,	// (0x0005a7c6) fep_vkb_side_pane_g

0xc0c3,	// (0x00056d59) fep_hwr_top_pane_g1

0xc0d5,	// (0x00056d6b) fep_hwr_top_pane_g2

0x6891,	// (0x00051527) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x0005a7a2) fep_hwr_top_pane_g

0x68a6,	// (0x0005153c) fep_hwr_top_text_pane

0x8b1e,	// (0x000537b4) fep_hwr_top_text_pane_g1

0xc10b,	// (0x00056da1) fep_hwr_top_text_pane_t1

0x699c,	// (0x00051632) fep_hwr_candidate_pane_g1

0xc35e,	// (0x00056ff4) fep_vkb_keypad_pane_g3_ParamLimits

0xc35e,	// (0x00056ff4) fep_vkb_keypad_pane_g3

0xc386,	// (0x0005701c) fep_vkb_keypad_pane_g4_ParamLimits

0xc386,	// (0x0005701c) fep_vkb_keypad_pane_g4

0xc3f5,	// (0x0005708b) fep_vkb_bottom_pane_g2_ParamLimits

0xc3f5,	// (0x0005708b) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x0005a7cd) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x0005a7cd) fep_vkb_bottom_pane_g

0xc067,	// (0x00056cfd) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x0005a7d7) cell_vkb_side_pane_g

0xc480,	// (0x00057116) cell_vkb_side_pane_t1

0xc48e,	// (0x00057124) cell_vkb_side_pane_t1_copy1

0xc067,	// (0x00056cfd) bg_fep_vkb_candidate_pane_g2

0xc5ba,	// (0x00057250) cell_vkb_candidate_pane_ParamLimits

0xc119,	// (0x00056daf) aid_size_cell_vkb_ParamLimits

0xc119,	// (0x00056daf) aid_size_cell_vkb

0xc5ba,	// (0x00057250) cell_vkb_candidate_pane

0x69c3,	// (0x00051659) bg_popup_fep_shadow_pane_g1

0xc1a7,	// (0x00056e3d) fep_vkb_bottom_pane_ParamLimits

0xc1a7,	// (0x00056e3d) fep_vkb_bottom_pane

0xc1dd,	// (0x00056e73) fep_vkb_candidate_pane_ParamLimits

0xc1dd,	// (0x00056e73) fep_vkb_candidate_pane

0xc1f9,	// (0x00056e8f) fep_vkb_keypad_pane_ParamLimits

0xc1f9,	// (0x00056e8f) fep_vkb_keypad_pane

0xc23f,	// (0x00056ed5) fep_vkb_side_pane_ParamLimits

0xc23f,	// (0x00056ed5) fep_vkb_side_pane

0xc27b,	// (0x00056f11) fep_vkb_top_pane_ParamLimits

0xc27b,	// (0x00056f11) fep_vkb_top_pane

0xc2b7,	// (0x00056f4d) fep_vkb_top_pane_g1_ParamLimits

0xc2b7,	// (0x00056f4d) fep_vkb_top_pane_g1

0xc2c6,	// (0x00056f5c) fep_vkb_top_pane_g2_ParamLimits

0xc2c6,	// (0x00056f5c) fep_vkb_top_pane_g2

0xc2d5,	// (0x00056f6b) fep_vkb_top_pane_g3_ParamLimits

0xc2d5,	// (0x00056f6b) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x0005a7bd) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x0005a7bd) fep_vkb_top_pane_g

0xc2f3,	// (0x00056f89) fep_vkb_top_text_pane_ParamLimits

0xc2f3,	// (0x00056f89) fep_vkb_top_text_pane

0xc304,	// (0x00056f9a) fep_vkb_side_pane_g1_ParamLimits

0xc304,	// (0x00056f9a) fep_vkb_side_pane_g1

0xc34d,	// (0x00056fe3) grid_vkb_side_pane_ParamLimits

0xc34d,	// (0x00056fe3) grid_vkb_side_pane

0x69cb,	// (0x00051661) bg_popup_fep_shadow_pane_g2

0x69d4,	// (0x0005166a) bg_popup_fep_shadow_pane_g3

0x69dc,	// (0x00051672) bg_popup_fep_shadow_pane_g4

0x69e5,	// (0x0005167b) bg_popup_fep_shadow_pane_g5

0x69ef,	// (0x00051685) bg_popup_fep_shadow_pane_g6

0x69f7,	// (0x0005168d) bg_popup_fep_shadow_pane_g7

0x8539,	// (0x000531cf) bg_popup_fep_shadow_pane_g8

0xc3a4,	// (0x0005703a) grid_vkb_keypad_number_pane_ParamLimits

0xc3a4,	// (0x0005703a) grid_vkb_keypad_number_pane

0xc3b4,	// (0x0005704a) grid_vkb_keypad_pane_ParamLimits

0xc3b4,	// (0x0005704a) grid_vkb_keypad_pane

0xc3da,	// (0x00057070) fep_vkb_bottom_pane_g1_ParamLimits

0xc3da,	// (0x00057070) fep_vkb_bottom_pane_g1

0xc403,	// (0x00057099) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc403,	// (0x00057099) grid_vkb_keypad_bottom_left_pane

0xc418,	// (0x000570ae) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc418,	// (0x000570ae) grid_vkb_keypad_bottom_right_pane

0xc42d,	// (0x000570c3) fep_vkb_top_text_pane_g1

0xc448,	// (0x000570de) fep_vkb_top_text_pane_t1

0xc45d,	// (0x000570f3) cell_vkb_side_pane_ParamLimits

0xc45d,	// (0x000570f3) cell_vkb_side_pane

0xc067,	// (0x00056cfd) cell_vkb_side_pane_g1

0xc49c,	// (0x00057132) cell_vkb_keypad_pane_ParamLimits

0xc49c,	// (0x00057132) cell_vkb_keypad_pane

0xc511,	// (0x000571a7) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x0005a7ea) bg_popup_fep_shadow_pane_g

0x6a09,	// (0x0005169f) cell_hwr_side_pane_g1

0x6a09,	// (0x0005169f) cell_hwr_side_pane_g2

0xc51b,	// (0x000571b1) cell_vkb_keypad_pane_t1

0xc529,	// (0x000571bf) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc529,	// (0x000571bf) cell_vkb_keypad_bottom_left_pane

0xc546,	// (0x000571dc) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc546,	// (0x000571dc) cell_vkb_keypad_bottom_right_pane

0xc067,	// (0x00056cfd) cell_vkb_keypad_bottom_left_pane_g1

0xc067,	// (0x00056cfd) cell_vkb_keypad_bottom_right_pane_g1

0xc57f,	// (0x00057215) cell_vkb_keypad_number_pane_ParamLimits

0xc57f,	// (0x00057215) cell_vkb_keypad_number_pane

0xc59e,	// (0x00057234) cell_vkb_keypad_number_pane_g1

0xc5a8,	// (0x0005723e) cell_vkb_keypad_number_pane_g2

0xc5b1,	// (0x00057247) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x0005a7dc) cell_vkb_keypad_number_pane_g

0xc51b,	// (0x000571b1) cell_vkb_keypad_number_pane_t1

0xc5d5,	// (0x0005726b) fep_vkb_candidate_pane_g1

0x0001,

0xfb67,	// (0x0005a7fd) cell_hwr_side_pane_g

0xc5ee,	// (0x00057284) cell_hwr_side_pane_t1

0x6a13,	// (0x000516a9) cell_hwr_side_pane_t1_copy1

0x6a21,	// (0x000516b7) cell_hwr_candidate_pane_g1

0x6a50,	// (0x000516e6) cell_hwr_candidate_pane_t1

0xc067,	// (0x00056cfd) cell_vkb_candidate_pane_g2

0xc632,	// (0x000572c8) cell_vkb_candidate_pane_t1

0x67bc,	// (0x00051452) bg_popup_fep_shadow_pane_ParamLimits

0x67bc,	// (0x00051452) bg_popup_fep_shadow_pane

0x6871,	// (0x00051507) bg_fep_hwr_top_pane_g4

0xc0e7,	// (0x00056d7d) bg_hwr_side_pane_g1_ParamLimits

0xc0e7,	// (0x00056d7d) bg_hwr_side_pane_g1

0x68e2,	// (0x00051578) cell_hwr_side_pane_ParamLimits

0x68e2,	// (0x00051578) cell_hwr_side_pane

0x691d,	// (0x000515b3) fep_hwr_write_pane_g1_ParamLimits

0x691d,	// (0x000515b3) fep_hwr_write_pane_g1

0x692a,	// (0x000515c0) fep_hwr_write_pane_g2_ParamLimits

0x692a,	// (0x000515c0) fep_hwr_write_pane_g2

0x6937,	// (0x000515cd) fep_hwr_write_pane_g3_ParamLimits

0x6937,	// (0x000515cd) fep_hwr_write_pane_g3

0x6945,	// (0x000515db) fep_hwr_write_pane_g4_ParamLimits

0x6945,	// (0x000515db) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x0005a7a9) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x0005a7a9) fep_hwr_write_pane_g

0x6871,	// (0x00051507) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6871,	// (0x00051507) bg_fep_hwr_candidate_pane_g2

0x695a,	// (0x000515f0) cell_hwr_candidate_pane_ParamLimits

0x695a,	// (0x000515f0) cell_hwr_candidate_pane

0x699c,	// (0x00051632) fep_hwr_candidate_pane_g1_ParamLimits

0xc147,	// (0x00056ddd) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc147,	// (0x00056ddd) bg_popup_fep_shadow_pane_cp2

0xc2e5,	// (0x00056f7b) fep_vkb_top_pane_g4_ParamLimits

0xc2e5,	// (0x00056f7b) fep_vkb_top_pane_g4

0xc32b,	// (0x00056fc1) fep_vkb_side_pane_g2_ParamLimits

0xc32b,	// (0x00056fc1) fep_vkb_side_pane_g2

0x51a5,	// (0x0004fe3b) list_setting_pane_t4_ParamLimits

0x51a5,	// (0x0004fe3b) list_setting_pane_t4

0x523f,	// (0x0004fed5) list_setting_number_pane_t5_ParamLimits

0x523f,	// (0x0004fed5) list_setting_number_pane_t5

0x8b65,	// (0x000537fb) list_double_heading_pane_cp2_ParamLimits

0x8b65,	// (0x000537fb) list_double_heading_pane_cp2

0x84d4,	// (0x0005316a) list_double_heading_pane_g1_cp2_ParamLimits

0x84d4,	// (0x0005316a) list_double_heading_pane_g1_cp2

0x84e0,	// (0x00053176) list_double_heading_pane_g2_cp2_ParamLimits

0x84e0,	// (0x00053176) list_double_heading_pane_g2_cp2

0xc640,	// (0x000572d6) list_double_heading_pane_t1_cp2_ParamLimits

0xc640,	// (0x000572d6) list_double_heading_pane_t1_cp2

0xc656,	// (0x000572ec) list_double_heading_pane_t2_cp2_ParamLimits

0xc656,	// (0x000572ec) list_double_heading_pane_t2_cp2

0x74f5,	// (0x0005218b) aid_value_unit2

0x4c26,	// (0x0004f8bc) popup_preview_fixed_window

0x788a,	// (0x00052520) bg_popup_preview_window_pane_cp02

0xc668,	// (0x000572fe) list_preview_fixed_pane

0xc6ae,	// (0x00057344) list_empty_pane_fp_ParamLimits

0xc6ae,	// (0x00057344) list_empty_pane_fp

0xc6ae,	// (0x00057344) list_single_cale_day_pane_fp_ParamLimits

0xc6ae,	// (0x00057344) list_single_cale_day_pane_fp

0xc6ae,	// (0x00057344) list_single_graphic_heading_pane_fp_ParamLimits

0xc6ae,	// (0x00057344) list_single_graphic_heading_pane_fp

0xc6ae,	// (0x00057344) list_single_graphic_pane_fp_ParamLimits

0xc6ae,	// (0x00057344) list_single_graphic_pane_fp

0xc6ae,	// (0x00057344) list_single_heading_pane_fp_ParamLimits

0xc6ae,	// (0x00057344) list_single_heading_pane_fp

0xc6ae,	// (0x00057344) list_single_pane_fp_ParamLimits

0xc6ae,	// (0x00057344) list_single_pane_fp

0xc6c3,	// (0x00057359) list_single_pane_fp_g1_ParamLimits

0xc6c3,	// (0x00057359) list_single_pane_fp_g1

0x84d4,	// (0x0005316a) list_single_pane_fp_g2_ParamLimits

0x84d4,	// (0x0005316a) list_single_pane_fp_g2

0x84e0,	// (0x00053176) list_single_pane_fp_g3_ParamLimits

0x84e0,	// (0x00053176) list_single_pane_fp_g3

0xc6cf,	// (0x00057365) list_single_pane_fp_g4_ParamLimits

0xc6cf,	// (0x00057365) list_single_pane_fp_g4

0x0003,

0xfb7a,	// (0x0005a810) list_single_pane_fp_g_ParamLimits

0xfb7a,	// (0x0005a810) list_single_pane_fp_g

0x7c87,	// (0x0005291d) list_single_pane_fp_t1_ParamLimits

0x7c87,	// (0x0005291d) list_single_pane_fp_t1

0x7c9e,	// (0x00052934) list_single_graphic_pane_fp_g1_ParamLimits

0x7c9e,	// (0x00052934) list_single_graphic_pane_fp_g1

0xc6c3,	// (0x00057359) list_single_graphic_pane_fp_g2_ParamLimits

0xc6c3,	// (0x00057359) list_single_graphic_pane_fp_g2

0x84d4,	// (0x0005316a) list_single_graphic_pane_fp_g3_ParamLimits

0x84d4,	// (0x0005316a) list_single_graphic_pane_fp_g3

0x84e0,	// (0x00053176) list_single_graphic_pane_fp_g4_ParamLimits

0x84e0,	// (0x00053176) list_single_graphic_pane_fp_g4

0xc6cf,	// (0x00057365) list_single_graphic_pane_fp_g5_ParamLimits

0xc6cf,	// (0x00057365) list_single_graphic_pane_fp_g5

0x0004,

0xfb83,	// (0x0005a819) list_single_graphic_pane_fp_g_ParamLimits

0xfb83,	// (0x0005a819) list_single_graphic_pane_fp_g

0x7caa,	// (0x00052940) list_single_graphic_pane_fp_t1_ParamLimits

0x7caa,	// (0x00052940) list_single_graphic_pane_fp_t1

0x7c9e,	// (0x00052934) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7c9e,	// (0x00052934) list_single_graphic_heading_pane_fp_g1

0xc6c3,	// (0x00057359) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6c3,	// (0x00057359) list_single_graphic_heading_pane_fp_g2

0x84d4,	// (0x0005316a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x84d4,	// (0x0005316a) list_single_graphic_heading_pane_fp_g3

0x84e0,	// (0x00053176) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x84e0,	// (0x00053176) list_single_graphic_heading_pane_fp_g4

0xc6cf,	// (0x00057365) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6cf,	// (0x00057365) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb83,	// (0x0005a819) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0005a819) list_single_graphic_heading_pane_fp_g

0x7cc0,	// (0x00052956) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7cc0,	// (0x00052956) list_single_graphic_heading_pane_fp_t1

0x7cd6,	// (0x0005296c) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7cd6,	// (0x0005296c) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8e,	// (0x0005a824) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8e,	// (0x0005a824) list_single_graphic_heading_pane_fp_t

0x7ce8,	// (0x0005297e) list_single_cale_day_pane_fp_g1_ParamLimits

0x7ce8,	// (0x0005297e) list_single_cale_day_pane_fp_g1

0xc6db,	// (0x00057371) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6db,	// (0x00057371) list_single_cale_day_pane_fp_g2

0x7d20,	// (0x000529b6) list_single_cale_day_pane_fp_g3_ParamLimits

0x7d20,	// (0x000529b6) list_single_cale_day_pane_fp_g3

0x7d48,	// (0x000529de) list_single_cale_day_pane_fp_g4_ParamLimits

0x7d48,	// (0x000529de) list_single_cale_day_pane_fp_g4

0x7d6c,	// (0x00052a02) list_single_cale_day_pane_fp_g5_ParamLimits

0x7d6c,	// (0x00052a02) list_single_cale_day_pane_fp_g5

0x0004,

0xfb93,	// (0x0005a829) list_single_cale_day_pane_fp_g_ParamLimits

0xfb93,	// (0x0005a829) list_single_cale_day_pane_fp_g

0x7d90,	// (0x00052a26) list_single_cale_day_pane_fp_t1_ParamLimits

0x7d90,	// (0x00052a26) list_single_cale_day_pane_fp_t1

0x7db6,	// (0x00052a4c) list_single_cale_day_pane_fp_t2_ParamLimits

0x7db6,	// (0x00052a4c) list_single_cale_day_pane_fp_t2

0x7dcf,	// (0x00052a65) list_single_cale_day_pane_fp_t3_ParamLimits

0x7dcf,	// (0x00052a65) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9e,	// (0x0005a834) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9e,	// (0x0005a834) list_single_cale_day_pane_fp_t

0xc6c3,	// (0x00057359) list_empty_pane_fp_g1_ParamLimits

0xc6c3,	// (0x00057359) list_empty_pane_fp_g1

0x7de8,	// (0x00052a7e) list_empty_pane_fp_t1

0x7df6,	// (0x00052a8c) list_empty_pane_fp_t2

0x0001,

0xfba5,	// (0x0005a83b) list_empty_pane_fp_t

0xc6c3,	// (0x00057359) list_single_heading_pane_fp_g1_ParamLimits

0xc6c3,	// (0x00057359) list_single_heading_pane_fp_g1

0x84d4,	// (0x0005316a) list_single_heading_pane_fp_g2_ParamLimits

0x84d4,	// (0x0005316a) list_single_heading_pane_fp_g2

0x84e0,	// (0x00053176) list_single_heading_pane_fp_g3_ParamLimits

0x84e0,	// (0x00053176) list_single_heading_pane_fp_g3

0x0002,

0xfbaa,	// (0x0005a840) list_single_heading_pane_fp_g_ParamLimits

0xfbaa,	// (0x0005a840) list_single_heading_pane_fp_g

0x7e04,	// (0x00052a9a) list_single_heading_pane_fp_t1_ParamLimits

0x7e04,	// (0x00052a9a) list_single_heading_pane_fp_t1

0x7e16,	// (0x00052aac) list_single_heading_pane_fp_t2_ParamLimits

0x7e16,	// (0x00052aac) list_single_heading_pane_fp_t2

0x0001,

0xfbb1,	// (0x0005a847) list_single_heading_pane_fp_t_ParamLimits

0xfbb1,	// (0x0005a847) list_single_heading_pane_fp_t

0x86c8,	// (0x0005335e) aid_size_cell_fast

0x77fa,	// (0x00052490) soft_indicator_pane_cp1_t1

0x8705,	// (0x0005339b) cell_app_pane_cp2_ParamLimits

0x8705,	// (0x0005339b) cell_app_pane_cp2

0x67de,	// (0x00051474) fep_hwr_candidate_drop_down_list_pane

0x69b6,	// (0x0005164c) fep_hwr_candidate_pane_g3_ParamLimits

0x69b6,	// (0x0005164c) fep_hwr_candidate_pane_g3

0x306d,	// (0x0004dd03) fep_hwr_candidate_pane_g4_ParamLimits

0x306d,	// (0x0004dd03) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x0005a7b6) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x0005a7b6) fep_hwr_candidate_pane_g

0xc1cc,	// (0x00056e62) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc1cc,	// (0x00056e62) fep_vkb_candidate_drop_down_list_pane

0xc5dd,	// (0x00057273) fep_vkb_candidate_pane_g3

0xc5e5,	// (0x0005727b) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x0005a7e3) fep_vkb_candidate_pane_g

0x6a21,	// (0x000516b7) cell_hwr_candidate_pane_g1_ParamLimits

0x6a2f,	// (0x000516c5) cell_hwr_candidate_pane_g3_ParamLimits

0x6a2f,	// (0x000516c5) cell_hwr_candidate_pane_g3

0xe3a0,	// (0x00059036) cell_hwr_candidate_pane_g4_ParamLimits

0xe3a0,	// (0x00059036) cell_hwr_candidate_pane_g4

0x0002,

0xfb6c,	// (0x0005a802) cell_hwr_candidate_pane_g_ParamLimits

0xfb6c,	// (0x0005a802) cell_hwr_candidate_pane_g

0xc5fc,	// (0x00057292) cell_vkb_candidate_pane_g3_ParamLimits

0xc5fc,	// (0x00057292) cell_vkb_candidate_pane_g3

0xc617,	// (0x000572ad) cell_vkb_candidate_pane_g4_ParamLimits

0xc617,	// (0x000572ad) cell_vkb_candidate_pane_g4

0xc6e7,	// (0x0005737d) cell_app_pane_cp2_g1_ParamLimits

0xc6e7,	// (0x0005737d) cell_app_pane_cp2_g1

0xc705,	// (0x0005739b) cell_app_pane_cp2_g2_ParamLimits

0xc705,	// (0x0005739b) cell_app_pane_cp2_g2

0x0001,

0xfbb6,	// (0x0005a84c) cell_app_pane_cp2_g_ParamLimits

0xfbb6,	// (0x0005a84c) cell_app_pane_cp2_g

0xc711,	// (0x000573a7) cell_app_pane_cp2_t1_ParamLimits

0xc711,	// (0x000573a7) cell_app_pane_cp2_t1

0x84ba,	// (0x00053150) grid_highlight_pane_cp1_ParamLimits

0x84ba,	// (0x00053150) grid_highlight_pane_cp1

0x6a6e,	// (0x00051704) cell_hwr_candidate_pane_cp1_ParamLimits

0x6a6e,	// (0x00051704) cell_hwr_candidate_pane_cp1

0x6a21,	// (0x000516b7) fep_hwr_candidate_drop_down_list_pane_g1

0x6a8d,	// (0x00051723) fep_hwr_candidate_drop_down_list_pane_g2

0x6a9a,	// (0x00051730) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbb,	// (0x0005a851) fep_hwr_candidate_drop_down_list_pane_g

0x6aa7,	// (0x0005173d) fep_hwr_candidate_drop_down_list_scroll_pane

0x6ab0,	// (0x00051746) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6ab0,	// (0x00051746) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6abd,	// (0x00051753) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6abd,	// (0x00051753) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6aca,	// (0x00051760) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6aca,	// (0x00051760) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6ad7,	// (0x0005176d) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6ad7,	// (0x0005176d) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6af2,	// (0x00051788) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6af2,	// (0x00051788) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6b0d,	// (0x000517a3) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6b0d,	// (0x000517a3) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6b28,	// (0x000517be) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6b28,	// (0x000517be) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6b43,	// (0x000517d9) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6b43,	// (0x000517d9) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc2,	// (0x0005a858) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc2,	// (0x0005a858) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc723,	// (0x000573b9) cell_vkb_candidate_pane_cp1_ParamLimits

0xc723,	// (0x000573b9) cell_vkb_candidate_pane_cp1

0xc2e5,	// (0x00056f7b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2e5,	// (0x00056f7b) fep_vkb_candidate_drop_down_list_pane_g1

0xc743,	// (0x000573d9) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc743,	// (0x000573d9) fep_vkb_candidate_drop_down_list_pane_g2

0xc750,	// (0x000573e6) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc750,	// (0x000573e6) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd3,	// (0x0005a869) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd3,	// (0x0005a869) fep_vkb_candidate_drop_down_list_pane_g

0xc75d,	// (0x000573f3) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc75d,	// (0x000573f3) fep_vkb_candidate_drop_down_list_scroll_pane

0xc76a,	// (0x00057400) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc76a,	// (0x00057400) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc777,	// (0x0005740d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc777,	// (0x0005740d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc783,	// (0x00057419) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc783,	// (0x00057419) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc78f,	// (0x00057425) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc78f,	// (0x00057425) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc7b0,	// (0x00057446) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc7b0,	// (0x00057446) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc7d1,	// (0x00057467) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc7d1,	// (0x00057467) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7f2,	// (0x00057488) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7f2,	// (0x00057488) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc813,	// (0x000574a9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc813,	// (0x000574a9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbda,	// (0x0005a870) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbda,	// (0x0005a870) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x752b,	// (0x000521c1) title_pane_g1_ParamLimits

0x7538,	// (0x000521ce) title_pane_g2_ParamLimits

0xf554,	// (0x0005a1ea) title_pane_g_ParamLimits

0x8b0e,	// (0x000537a4) aid_call2_pane

0x8b16,	// (0x000537ac) aid_call_pane

0x8b1e,	// (0x000537b4) popup_clock_analogue_window_g1

0x8b1e,	// (0x000537b4) popup_clock_analogue_window_g2

0x569a,	// (0x00050330) popup_clock_analogue_window_g3

0x56a3,	// (0x00050339) popup_clock_analogue_window_g4

0x7517,	// (0x000521ad) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x0005a399) popup_clock_analogue_window_g

0x56ab,	// (0x00050341) popup_clock_analogue_window_t1

0x56b9,	// (0x0005034f) clock_digital_number_pane_ParamLimits

0x56b9,	// (0x0005034f) clock_digital_number_pane

0x56c5,	// (0x0005035b) clock_digital_number_pane_cp02_ParamLimits

0x56c5,	// (0x0005035b) clock_digital_number_pane_cp02

0x56d1,	// (0x00050367) clock_digital_number_pane_cp03_ParamLimits

0x56d1,	// (0x00050367) clock_digital_number_pane_cp03

0x56dd,	// (0x00050373) clock_digital_number_pane_cp04_ParamLimits

0x56dd,	// (0x00050373) clock_digital_number_pane_cp04

0x56e9,	// (0x0005037f) clock_digital_separator_pane_ParamLimits

0x56e9,	// (0x0005037f) clock_digital_separator_pane

0x56f5,	// (0x0005038b) popup_clock_digital_window_t1_ParamLimits

0x56f5,	// (0x0005038b) popup_clock_digital_window_t1

0x7517,	// (0x000521ad) clock_digital_number_pane_g1

0x7517,	// (0x000521ad) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x0005a3a4) clock_digital_number_pane_g

0x7517,	// (0x000521ad) clock_digital_separator_pane_g1

0x7517,	// (0x000521ad) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x0005a3a4) clock_digital_separator_pane_g

0x9476,	// (0x0005410c) aid_fill_nsta_ParamLimits

0x95b8,	// (0x0005424e) indicator_nsta_pane_ParamLimits

0x973a,	// (0x000543d0) popup_clock_analogue_window

0x973a,	// (0x000543d0) popup_clock_digital_window

0x7601,	// (0x00052297) grid_indicator_nsta_pane_ParamLimits

0xba4d,	// (0x000566e3) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x0005a736) clock_nsta_pane_t

0x565e,	// (0x000502f4) aid_size_max_handle

0x5668,	// (0x000502fe) aid_size_min_handle

0x9114,	// (0x00053daa) editor_scroll_pane

0xc82e,	// (0x000574c4) ex_editor_pane

0x8636,	// (0x000532cc) scroll_pane_cp13

0x844d,	// (0x000530e3) scroll_pane_cp14

0x8b4d,	// (0x000537e3) scroll_pane_cp36

0x8b79,	// (0x0005380f) list_single_graphic_hl_pane_cp2_ParamLimits

0x8b79,	// (0x0005380f) list_single_graphic_hl_pane_cp2

0x6588,	// (0x0005121e) list_single_graphic_hl_pane_ParamLimits

0x6588,	// (0x0005121e) list_single_graphic_hl_pane

0x7e2c,	// (0x00052ac2) aid_size_min_hl_cp1

0xc836,	// (0x000574cc) list_highlight_pane_cp34_ParamLimits

0xc836,	// (0x000574cc) list_highlight_pane_cp34

0xc847,	// (0x000574dd) list_single_graphic_hl_pane_g1_ParamLimits

0xc847,	// (0x000574dd) list_single_graphic_hl_pane_g1

0x7e35,	// (0x00052acb) list_single_graphic_hl_pane_g2_ParamLimits

0x7e35,	// (0x00052acb) list_single_graphic_hl_pane_g2

0x7e35,	// (0x00052acb) list_single_graphic_hl_pane_g3_ParamLimits

0x7e35,	// (0x00052acb) list_single_graphic_hl_pane_g3

0x9085,	// (0x00053d1b) list_single_graphic_hl_pane_g4_ParamLimits

0x9085,	// (0x00053d1b) list_single_graphic_hl_pane_g4

0x7e41,	// (0x00052ad7) list_single_graphic_hl_pane_g5_ParamLimits

0x7e41,	// (0x00052ad7) list_single_graphic_hl_pane_g5

0x0004,

0xfbeb,	// (0x0005a881) list_single_graphic_hl_pane_g_ParamLimits

0xfbeb,	// (0x0005a881) list_single_graphic_hl_pane_g

0x7e55,	// (0x00052aeb) list_single_graphic_hl_pane_t1_ParamLimits

0x7e55,	// (0x00052aeb) list_single_graphic_hl_pane_t1

0xc854,	// (0x000574ea) aid_size_min_hl_cp2

0xc85d,	// (0x000574f3) list_highlight_pane_cp34_cp2_ParamLimits

0xc85d,	// (0x000574f3) list_highlight_pane_cp34_cp2

0xc847,	// (0x000574dd) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc847,	// (0x000574dd) list_single_graphic_hl_pane_g1_cp2

0xc86a,	// (0x00057500) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc86a,	// (0x00057500) list_single_graphic_hl_pane_g2_cp2

0xc876,	// (0x0005750c) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc876,	// (0x0005750c) list_single_graphic_hl_pane_g3_cp2

0x98fc,	// (0x00054592) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x98fc,	// (0x00054592) list_single_graphic_hl_pane_g4_cp2

0xc884,	// (0x0005751a) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc884,	// (0x0005751a) list_single_graphic_hl_pane_g5_cp2

0x5a2f,	// (0x000506c5) control_pane_g4_ParamLimits

0x5a2f,	// (0x000506c5) control_pane_g4

0x9454,	// (0x000540ea) bg_popup_sub_pane_cp10_ParamLimits

0xc071,	// (0x00056d07) list_choice_list_pane_ParamLimits

0xc080,	// (0x00056d16) scroll_pane_cp23

0x788a,	// (0x00052520) bg_popup_preview_window_pane_cp02_ParamLimits

0xc668,	// (0x000572fe) list_preview_fixed_pane_ParamLimits

0xc67e,	// (0x00057314) list_preview_fixed_pane_cp_ParamLimits

0xc67e,	// (0x00057314) list_preview_fixed_pane_cp

0xc68a,	// (0x00057320) popup_preview_fixed_window_g1_ParamLimits

0xc68a,	// (0x00057320) popup_preview_fixed_window_g1

0xc696,	// (0x0005732c) popup_preview_fixed_window_g2_ParamLimits

0xc696,	// (0x0005732c) popup_preview_fixed_window_g2

0x0002,

0xfb73,	// (0x0005a809) popup_preview_fixed_window_g_ParamLimits

0xfb73,	// (0x0005a809) popup_preview_fixed_window_g

0x55d2,	// (0x00050268) aid_navi_side_left_pane_ParamLimits

0x55e7,	// (0x0005027d) aid_navi_side_right_pane_ParamLimits

0x55ff,	// (0x00050295) navi_icon_pane_stacon_ParamLimits

0x5613,	// (0x000502a9) navi_navi_pane_stacon_ParamLimits

0x55ff,	// (0x00050295) navi_text_pane_stacon_ParamLimits

0x4ae7,	// (0x0004f77d) main_text_info_pane

0xc8ae,	// (0x00057544) listscroll_text_info_pane

0xc8b6,	// (0x0005754c) list_text_info_pane_ParamLimits

0xc8b6,	// (0x0005754c) list_text_info_pane

0xc8c5,	// (0x0005755b) scroll_pane_cp24_ParamLimits

0xc8c5,	// (0x0005755b) scroll_pane_cp24

0xc8e3,	// (0x00057579) list_text_info_pane_t1_ParamLimits

0xc8e3,	// (0x00057579) list_text_info_pane_t1

0x5b9b,	// (0x00050831) popup_fast_swap2_window_ParamLimits

0x5b9b,	// (0x00050831) popup_fast_swap2_window

0xc914,	// (0x000575aa) aid_size_cell_fast2

0x750d,	// (0x000521a3) bg_popup_window_pane_cp17

0x9e46,	// (0x00054adc) heading_pane_cp2

0x8117,	// (0x00052dad) listscroll_fast2_pane

0xc91e,	// (0x000575b4) grid_fast2_pane

0xc928,	// (0x000575be) listscroll_fast2_pane_g1

0xc930,	// (0x000575c6) listscroll_fast2_pane_g2

0x0001,

0xfbf6,	// (0x0005a88c) listscroll_fast2_pane_g

0x8636,	// (0x000532cc) scroll_pane_cp26

0xc93a,	// (0x000575d0) cell_fast2_pane_ParamLimits

0xc93a,	// (0x000575d0) cell_fast2_pane

0xc94f,	// (0x000575e5) cell_fast2_pane_g1

0xc958,	// (0x000575ee) cell_fast2_pane_g2

0xc961,	// (0x000575f7) cell_fast2_pane_g3

0x0002,

0xfbfb,	// (0x0005a891) cell_fast2_pane_g

0x820a,	// (0x00052ea0) grid_highlight_pane_cp9

0x5b59,	// (0x000507ef) main_eswt_pane_ParamLimits

0x5b59,	// (0x000507ef) main_eswt_pane

0xc8da,	// (0x00057570) list_single_text_info_pane

0xc969,	// (0x000575ff) eswt_ctrl_button_pane

0xc969,	// (0x000575ff) eswt_ctrl_canvas_pane

0xc971,	// (0x00057607) eswt_ctrl_combo_pane

0xc969,	// (0x000575ff) eswt_ctrl_default_pane

0xc969,	// (0x000575ff) eswt_ctrl_label_pane

0xc979,	// (0x0005760f) eswt_ctrl_wait_pane

0xc981,	// (0x00057617) eswt_shell_pane

0x750d,	// (0x000521a3) listscroll_eswt_app_pane

0xc9a1,	// (0x00057637) popup_eswt_tasktip_window_ParamLimits

0xc9a1,	// (0x00057637) popup_eswt_tasktip_window

0x9a5c,	// (0x000546f2) bg_popup_window_pane_cp18

0xc9b2,	// (0x00057648) eswt_control_pane_g1_ParamLimits

0xc9b2,	// (0x00057648) eswt_control_pane_g1

0xc9bf,	// (0x00057655) eswt_control_pane_g2_ParamLimits

0xc9bf,	// (0x00057655) eswt_control_pane_g2

0xc9cc,	// (0x00057662) eswt_control_pane_g3_ParamLimits

0xc9cc,	// (0x00057662) eswt_control_pane_g3

0xc9d9,	// (0x0005766f) eswt_control_pane_g4_ParamLimits

0xc9d9,	// (0x0005766f) eswt_control_pane_g4

0x0003,

0xfc02,	// (0x0005a898) eswt_control_pane_g_ParamLimits

0xfc02,	// (0x0005a898) eswt_control_pane_g

0x84ba,	// (0x00053150) bg_button_pane_ParamLimits

0x84ba,	// (0x00053150) bg_button_pane

0x821f,	// (0x00052eb5) common_borders_pane_copy2_ParamLimits

0x821f,	// (0x00052eb5) common_borders_pane_copy2

0xc9e6,	// (0x0005767c) control_button_pane_g1_ParamLimits

0xc9e6,	// (0x0005767c) control_button_pane_g1

0xc9f2,	// (0x00057688) control_button_pane_g2_ParamLimits

0xc9f2,	// (0x00057688) control_button_pane_g2

0xc9fe,	// (0x00057694) control_button_pane_g3_ParamLimits

0xc9fe,	// (0x00057694) control_button_pane_g3

0x0002,

0xfc0b,	// (0x0005a8a1) control_button_pane_g_ParamLimits

0xfc0b,	// (0x0005a8a1) control_button_pane_g

0xca12,	// (0x000576a8) control_button_pane_t1

0xca20,	// (0x000576b6) control_button_pane_t2

0x0001,

0xfc12,	// (0x0005a8a8) control_button_pane_t

0x9964,	// (0x000545fa) bg_button_pane_g1

0x9974,	// (0x0005460a) bg_button_pane_g2

0x996c,	// (0x00054602) bg_button_pane_g3

0x9984,	// (0x0005461a) bg_button_pane_g4

0x997c,	// (0x00054612) bg_button_pane_g5

0x998c,	// (0x00054622) bg_button_pane_g6

0x9994,	// (0x0005462a) bg_button_pane_g7

0x99a4,	// (0x0005463a) bg_button_pane_g8

0x999c,	// (0x00054632) bg_button_pane_g9

0x0008,

0xf871,	// (0x0005a507) bg_button_pane_g

0xc02c,	// (0x00056cc2) common_borders_pane_ParamLimits

0xc02c,	// (0x00056cc2) common_borders_pane

0xc9b2,	// (0x00057648) eswt_control_pane_g1_copy1_ParamLimits

0xc9b2,	// (0x00057648) eswt_control_pane_g1_copy1

0xc9bf,	// (0x00057655) eswt_control_pane_g2_copy1_ParamLimits

0xc9bf,	// (0x00057655) eswt_control_pane_g2_copy1

0xc9cc,	// (0x00057662) eswt_control_pane_g3_copy1_ParamLimits

0xc9cc,	// (0x00057662) eswt_control_pane_g3_copy1

0xc9d9,	// (0x0005766f) eswt_control_pane_g4_copy1_ParamLimits

0xc9d9,	// (0x0005766f) eswt_control_pane_g4_copy1

0xc067,	// (0x00056cfd) bg_eswt_ctrl_canvas_pane_g1

0xc02c,	// (0x00056cc2) common_borders_pane_cp2_ParamLimits

0xc02c,	// (0x00056cc2) common_borders_pane_cp2

0xc02c,	// (0x00056cc2) common_borders_pane_cp3_ParamLimits

0xc02c,	// (0x00056cc2) common_borders_pane_cp3

0xca2e,	// (0x000576c4) separator_horizontal_pane

0xca36,	// (0x000576cc) separator_vertical_pane

0xc9b2,	// (0x00057648) eswt_control_pane_g1_copy2_ParamLimits

0xc9b2,	// (0x00057648) eswt_control_pane_g1_copy2

0xc9bf,	// (0x00057655) eswt_control_pane_g2_copy2_ParamLimits

0xc9bf,	// (0x00057655) eswt_control_pane_g2_copy2

0xc9cc,	// (0x00057662) eswt_control_pane_g3_copy2_ParamLimits

0xc9cc,	// (0x00057662) eswt_control_pane_g3_copy2

0xc9d9,	// (0x0005766f) eswt_control_pane_g4_copy2_ParamLimits

0xc9d9,	// (0x0005766f) eswt_control_pane_g4_copy2

0x750d,	// (0x000521a3) common_borders_pane_cp4

0xca3f,	// (0x000576d5) separator_horizontal_pane_g1

0xca48,	// (0x000576de) separator_horizontal_pane_g2

0xca51,	// (0x000576e7) separator_horizontal_pane_g3

0x0002,

0xfc17,	// (0x0005a8ad) separator_horizontal_pane_g

0xc9b2,	// (0x00057648) eswt_control_pane_g1_copy3_ParamLimits

0xc9b2,	// (0x00057648) eswt_control_pane_g1_copy3

0xc9bf,	// (0x00057655) eswt_control_pane_g2_copy3_ParamLimits

0xc9bf,	// (0x00057655) eswt_control_pane_g2_copy3

0xc9cc,	// (0x00057662) eswt_control_pane_g3_copy3_ParamLimits

0xc9cc,	// (0x00057662) eswt_control_pane_g3_copy3

0xc9d9,	// (0x0005766f) eswt_control_pane_g4_copy3_ParamLimits

0xc9d9,	// (0x0005766f) eswt_control_pane_g4_copy3

0x750d,	// (0x000521a3) common_borders_pane_cp5

0xca5a,	// (0x000576f0) separator_vertical_pane_g1

0xca63,	// (0x000576f9) separator_vertical_pane_g2

0xca6c,	// (0x00057702) separator_vertical_pane_g3

0x0002,

0xfc1e,	// (0x0005a8b4) separator_vertical_pane_g

0xc9b2,	// (0x00057648) eswt_control_pane_g1_copy4_ParamLimits

0xc9b2,	// (0x00057648) eswt_control_pane_g1_copy4

0xc9bf,	// (0x00057655) eswt_control_pane_g2_copy4_ParamLimits

0xc9bf,	// (0x00057655) eswt_control_pane_g2_copy4

0xc9cc,	// (0x00057662) eswt_control_pane_g3_copy4_ParamLimits

0xc9cc,	// (0x00057662) eswt_control_pane_g3_copy4

0xc9d9,	// (0x0005766f) eswt_control_pane_g4_copy4_ParamLimits

0xc9d9,	// (0x0005766f) eswt_control_pane_g4_copy4

0xca75,	// (0x0005770b) eswt_ctrl_combo_button_pane

0xca7d,	// (0x00057713) eswt_ctrl_input_pane

0xca85,	// (0x0005771b) popup_choice_list_window_cp70

0xca8d,	// (0x00057723) eswt_ctrl_input_pane_t1

0x750d,	// (0x000521a3) input_focus_pane_cp70

0xc02c,	// (0x00056cc2) bg_button_pane_cp70_ParamLimits

0xc02c,	// (0x00056cc2) bg_button_pane_cp70

0xca9b,	// (0x00057731) eswt_ctrl_combo_button_pane_g1

0xcaa3,	// (0x00057739) wait_bar_pane_cp70

0x9a5c,	// (0x000546f2) bg_popup_window_pane_cp70_ParamLimits

0x9a5c,	// (0x000546f2) bg_popup_window_pane_cp70

0xcaab,	// (0x00057741) popup_eswt_tasktip_window_t1

0xcac1,	// (0x00057757) wait_bar_pane_cp71_ParamLimits

0xcac1,	// (0x00057757) wait_bar_pane_cp71

0xcacd,	// (0x00057763) grid_eswt_app_pane

0x8950,	// (0x000535e6) scroll_pane_cp70

0xcad6,	// (0x0005776c) cell_eswt_app_pane_ParamLimits

0xcad6,	// (0x0005776c) cell_eswt_app_pane

0xcb06,	// (0x0005779c) cell_eswt_app_pane_g1_ParamLimits

0xcb06,	// (0x0005779c) cell_eswt_app_pane_g1

0xcb35,	// (0x000577cb) cell_eswt_app_pane_g2_ParamLimits

0xcb35,	// (0x000577cb) cell_eswt_app_pane_g2

0x0001,

0xfc25,	// (0x0005a8bb) cell_eswt_app_pane_g_ParamLimits

0xfc25,	// (0x0005a8bb) cell_eswt_app_pane_g

0xcb5e,	// (0x000577f4) cell_eswt_app_pane_t1_ParamLimits

0xcb5e,	// (0x000577f4) cell_eswt_app_pane_t1

0xcb90,	// (0x00057826) grid_highlight_pane_cp70_ParamLimits

0xcb90,	// (0x00057826) grid_highlight_pane_cp70

0x8455,	// (0x000530eb) set_content_pane_g1

0x93b4,	// (0x0005404a) status_small_volume_pane

0x6b5e,	// (0x000517f4) status_small_volume_pane_g1

0x6b66,	// (0x000517fc) volume_small2_pane

0x6b6f,	// (0x00051805) volume_small2_pane_g1

0x6b78,	// (0x0005180e) volume_small2_pane_g2

0x6b81,	// (0x00051817) volume_small2_pane_g3

0x6b8a,	// (0x00051820) volume_small2_pane_g4

0x6b93,	// (0x00051829) volume_small2_pane_g5

0x6b9c,	// (0x00051832) volume_small2_pane_g6

0x6ba5,	// (0x0005183b) volume_small2_pane_g7

0x6bae,	// (0x00051844) volume_small2_pane_g8

0x6bb7,	// (0x0005184d) volume_small2_pane_g9

0x6bc0,	// (0x00051856) volume_small2_pane_g10

0x0009,

0xfc2a,	// (0x0005a8c0) volume_small2_pane_g

0xc42d,	// (0x000570c3) fep_vkb_top_text_pane_g1_ParamLimits

0xc448,	// (0x000570de) fep_vkb_top_text_pane_t1_ParamLimits

0xc6a2,	// (0x00057338) popup_preview_fixed_window_g3_ParamLimits

0xc6a2,	// (0x00057338) popup_preview_fixed_window_g3

0x6048,	// (0x00050cde) popup_toolbar_trans_pane

0xadd3,	// (0x00055a69) aid_height_set_list_ParamLimits

0xade4,	// (0x00055a7a) aid_size_parent_ParamLimits

0x9454,	// (0x000540ea) list_highlight_pane_cp2_ParamLimits

0x8455,	// (0x000530eb) set_content_pane_g1_ParamLimits

0x7aaa,	// (0x00052740) list_single_image_pane_ParamLimits

0x7aaa,	// (0x00052740) list_single_image_pane

0xcb9c,	// (0x00057832) aid_size_cell_image_ParamLimits

0xcb9c,	// (0x00057832) aid_size_cell_image

0xcba9,	// (0x0005783f) grid_single_image_pane_ParamLimits

0xcba9,	// (0x0005783f) grid_single_image_pane

0xa0ea,	// (0x00054d80) list_single_image_pane_g1_ParamLimits

0xa0ea,	// (0x00054d80) list_single_image_pane_g1

0xcbb7,	// (0x0005784d) list_single_image_pane_g2_ParamLimits

0xcbb7,	// (0x0005784d) list_single_image_pane_g2

0x0001,

0xfc3f,	// (0x0005a8d5) list_single_image_pane_g_ParamLimits

0xfc3f,	// (0x0005a8d5) list_single_image_pane_g

0xa0f6,	// (0x00054d8c) list_single_image_pane_t1_ParamLimits

0xa0f6,	// (0x00054d8c) list_single_image_pane_t1

0xcbcb,	// (0x00057861) cell_image_list_pane_ParamLimits

0xcbcb,	// (0x00057861) cell_image_list_pane

0xcbde,	// (0x00057874) cell_image_list_pane_g1

0xcbe7,	// (0x0005787d) cell_image_list_pane_g2

0x0001,

0xfc44,	// (0x0005a8da) cell_image_list_pane_g

0xcbf0,	// (0x00057886) aid_size_cell_tb_trans_pane

0x84ba,	// (0x00053150) bg_tb_trans_pane

0xcc02,	// (0x00057898) grid_tb_trans_pane

0x9964,	// (0x000545fa) bg_tb_trans_pane_g1

0x9974,	// (0x0005460a) bg_tb_trans_pane_g2

0x996c,	// (0x00054602) bg_tb_trans_pane_g3

0x9984,	// (0x0005461a) bg_tb_trans_pane_g4

0x997c,	// (0x00054612) bg_tb_trans_pane_g5

0x99a4,	// (0x0005463a) bg_tb_trans_pane_g6

0x999c,	// (0x00054632) bg_tb_trans_pane_g7

0x998c,	// (0x00054622) bg_tb_trans_pane_g8

0x9994,	// (0x0005462a) bg_tb_trans_pane_g9

0x0008,

0xfc49,	// (0x0005a8df) bg_tb_trans_pane_g

0xcc16,	// (0x000578ac) cell_toolbar_trans_pane_ParamLimits

0xcc16,	// (0x000578ac) cell_toolbar_trans_pane

0xc067,	// (0x00056cfd) cell_toolbar_trans_pane_g1

0xbc31,	// (0x000568c7) list_form2_midp_pane_t1

0xbc3f,	// (0x000568d5) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x0005a77c) list_form2_midp_pane_t

0xbc4d,	// (0x000568e3) scroll_pane_cp51_ParamLimits

0xbe09,	// (0x00056a9f) form2_midp_wait_pane_g1

0xbe12,	// (0x00056aa8) form2_midp_wait_pane_g2

0xbe1b,	// (0x00056ab1) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x0005a791) form2_midp_wait_pane_g

0x7601,	// (0x00052297) list_highlight_pane_cp21_ParamLimits

0xbe72,	// (0x00056b08) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe81,	// (0x00056b17) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x7a4e,	// (0x000526e4) list_single_2graphic_im_pane_ParamLimits

0x7a4e,	// (0x000526e4) list_single_2graphic_im_pane

0xcc3c,	// (0x000578d2) list_single_2graphic_im_pane_g1_ParamLimits

0xcc3c,	// (0x000578d2) list_single_2graphic_im_pane_g1

0xcc4d,	// (0x000578e3) list_single_2graphic_im_pane_g2_ParamLimits

0xcc4d,	// (0x000578e3) list_single_2graphic_im_pane_g2

0xcc59,	// (0x000578ef) list_single_2graphic_im_pane_g3_ParamLimits

0xcc59,	// (0x000578ef) list_single_2graphic_im_pane_g3

0x0003,

0xfc5c,	// (0x0005a8f2) list_single_2graphic_im_pane_g_ParamLimits

0xfc5c,	// (0x0005a8f2) list_single_2graphic_im_pane_g

0xcc79,	// (0x0005790f) list_single_2graphic_im_pane_t1_ParamLimits

0xcc79,	// (0x0005790f) list_single_2graphic_im_pane_t1

0xc6ae,	// (0x00057344) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6ae,	// (0x00057344) list_single_graphic_2heading_pane_fp

0x7c9e,	// (0x00052934) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7c9e,	// (0x00052934) list_single_graphic_2heading_pane_fp_g1

0xc6c3,	// (0x00057359) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6c3,	// (0x00057359) list_single_graphic_2heading_pane_fp_g2

0x84d4,	// (0x0005316a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x84d4,	// (0x0005316a) list_single_graphic_2heading_pane_fp_g3

0x84e0,	// (0x00053176) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x84e0,	// (0x00053176) list_single_graphic_2heading_pane_fp_g4

0xc6cf,	// (0x00057365) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6cf,	// (0x00057365) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb83,	// (0x0005a819) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0005a819) list_single_graphic_2heading_pane_fp_g

0x7e6b,	// (0x00052b01) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7e6b,	// (0x00052b01) list_single_graphic_2heading_pane_fp_t1

0x7cd6,	// (0x0005296c) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7cd6,	// (0x0005296c) list_single_graphic_2heading_pane_fp_t2

0x7e81,	// (0x00052b17) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7e81,	// (0x00052b17) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc65,	// (0x0005a8fb) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc65,	// (0x0005a8fb) list_single_graphic_2heading_pane_fp_t

0xc0f3,	// (0x00056d89) fep_hwr_write_pane_g5_ParamLimits

0xc0f3,	// (0x00056d89) fep_hwr_write_pane_g5

0xc0ff,	// (0x00056d95) fep_hwr_write_pane_g6_ParamLimits

0xc0ff,	// (0x00056d95) fep_hwr_write_pane_g6

0xc981,	// (0x00057617) eswt_shell_pane_ParamLimits

0x9a5c,	// (0x000546f2) bg_popup_window_pane_cp18_ParamLimits

0xad2c,	// (0x000559c2) heading_pane_cp70

0xcaab,	// (0x00057741) popup_eswt_tasktip_window_t1_ParamLimits

0x94cb,	// (0x00054161) aid_touch_tab_arrow_left

0x94d7,	// (0x0005416d) aid_touch_tab_arrow_right

0x7549,	// (0x000521df) title_pane_g3_ParamLimits

0x7549,	// (0x000521df) title_pane_g3

0x8479,	// (0x0005310f) set_value_pane_g1

0x6048,	// (0x00050cde) popup_toolbar_trans_pane_ParamLimits

0xcbf0,	// (0x00057886) aid_size_cell_tb_trans_pane_ParamLimits

0x84ba,	// (0x00053150) bg_tb_trans_pane_ParamLimits

0xcc02,	// (0x00057898) grid_tb_trans_pane_ParamLimits

0x788a,	// (0x00052520) cont_note_pane_ParamLimits

0x788a,	// (0x00052520) cont_note_pane

0x821f,	// (0x00052eb5) cont_snote2_single_text_pane_ParamLimits

0x821f,	// (0x00052eb5) cont_snote2_single_text_pane

0x821f,	// (0x00052eb5) cont_snote2_single_graphic_pane_ParamLimits

0x821f,	// (0x00052eb5) cont_snote2_single_graphic_pane

0xa061,	// (0x00054cf7) cont_note_wait_pane_ParamLimits

0xa061,	// (0x00054cf7) cont_note_wait_pane

0xa061,	// (0x00054cf7) cont_note_image_pane_ParamLimits

0xa061,	// (0x00054cf7) cont_note_image_pane

0xccaa,	// (0x00057940) popup_note2_window_g1_ParamLimits

0xccaa,	// (0x00057940) popup_note2_window_g1

0xccdb,	// (0x00057971) popup_note2_window_t1_ParamLimits

0xccdb,	// (0x00057971) popup_note2_window_t1

0xcd20,	// (0x000579b6) popup_note2_window_t2_ParamLimits

0xcd20,	// (0x000579b6) popup_note2_window_t2

0xcd65,	// (0x000579fb) popup_note2_window_t3_ParamLimits

0xcd65,	// (0x000579fb) popup_note2_window_t3

0xcdaa,	// (0x00057a40) popup_note2_window_t4_ParamLimits

0xcdaa,	// (0x00057a40) popup_note2_window_t4

0x790e,	// (0x000525a4) popup_note2_window_t5_ParamLimits

0x790e,	// (0x000525a4) popup_note2_window_t5

0x0004,

0xfc71,	// (0x0005a907) popup_note2_window_t_ParamLimits

0xfc71,	// (0x0005a907) popup_note2_window_t

0xcdd9,	// (0x00057a6f) popup_note2_image_window_g1_ParamLimits

0xcdd9,	// (0x00057a6f) popup_note2_image_window_g1

0xcde5,	// (0x00057a7b) popup_note2_image_window_g2_ParamLimits

0xcde5,	// (0x00057a7b) popup_note2_image_window_g2

0x0001,

0xfc7c,	// (0x0005a912) popup_note2_image_window_g_ParamLimits

0xfc7c,	// (0x0005a912) popup_note2_image_window_g

0xcdf7,	// (0x00057a8d) popup_note2_image_window_t1_ParamLimits

0xcdf7,	// (0x00057a8d) popup_note2_image_window_t1

0xce0f,	// (0x00057aa5) popup_note2_image_window_t2_ParamLimits

0xce0f,	// (0x00057aa5) popup_note2_image_window_t2

0xce27,	// (0x00057abd) popup_note2_image_window_t3_ParamLimits

0xce27,	// (0x00057abd) popup_note2_image_window_t3

0x0002,

0xfc81,	// (0x0005a917) popup_note2_image_window_t_ParamLimits

0xfc81,	// (0x0005a917) popup_note2_image_window_t

0xa06f,	// (0x00054d05) popup_note2_wait_window_g1_ParamLimits

0xa06f,	// (0x00054d05) popup_note2_wait_window_g1

0xce43,	// (0x00057ad9) popup_note2_wait_window_g2_ParamLimits

0xce43,	// (0x00057ad9) popup_note2_wait_window_g2

0xa087,	// (0x00054d1d) popup_note2_wait_window_g3_ParamLimits

0xa087,	// (0x00054d1d) popup_note2_wait_window_g3

0x0002,

0xfc88,	// (0x0005a91e) popup_note2_wait_window_g_ParamLimits

0xfc88,	// (0x0005a91e) popup_note2_wait_window_g

0xce4f,	// (0x00057ae5) popup_note2_wait_window_t1_ParamLimits

0xce4f,	// (0x00057ae5) popup_note2_wait_window_t1

0xce6d,	// (0x00057b03) popup_note2_wait_window_t2_ParamLimits

0xce6d,	// (0x00057b03) popup_note2_wait_window_t2

0xce8b,	// (0x00057b21) popup_note2_wait_window_t3_ParamLimits

0xce8b,	// (0x00057b21) popup_note2_wait_window_t3

0xce9d,	// (0x00057b33) popup_note2_wait_window_t4_ParamLimits

0xce9d,	// (0x00057b33) popup_note2_wait_window_t4

0x0003,

0xfc8f,	// (0x0005a925) popup_note2_wait_window_t_ParamLimits

0xfc8f,	// (0x0005a925) popup_note2_wait_window_t

0xceaf,	// (0x00057b45) wait_bar2_pane_ParamLimits

0xceaf,	// (0x00057b45) wait_bar2_pane

0xcec7,	// (0x00057b5d) popup_snote2_single_text_window_g1_ParamLimits

0xcec7,	// (0x00057b5d) popup_snote2_single_text_window_g1

0xceef,	// (0x00057b85) popup_snote2_single_text_window_t1_ParamLimits

0xceef,	// (0x00057b85) popup_snote2_single_text_window_t1

0xcf3b,	// (0x00057bd1) popup_snote2_single_text_window_t2_ParamLimits

0xcf3b,	// (0x00057bd1) popup_snote2_single_text_window_t2

0xcf87,	// (0x00057c1d) popup_snote2_single_text_window_t3_ParamLimits

0xcf87,	// (0x00057c1d) popup_snote2_single_text_window_t3

0xcfc8,	// (0x00057c5e) popup_snote2_single_text_window_t4_ParamLimits

0xcfc8,	// (0x00057c5e) popup_snote2_single_text_window_t4

0xcffe,	// (0x00057c94) popup_snote2_single_text_window_t5_ParamLimits

0xcffe,	// (0x00057c94) popup_snote2_single_text_window_t5

0x0004,

0xfc98,	// (0x0005a92e) popup_snote2_single_text_window_t_ParamLimits

0xfc98,	// (0x0005a92e) popup_snote2_single_text_window_t

0xd029,	// (0x00057cbf) popup_snote2_single_graphic_window_g1_ParamLimits

0xd029,	// (0x00057cbf) popup_snote2_single_graphic_window_g1

0xd051,	// (0x00057ce7) popup_snote2_single_graphic_window_g2_ParamLimits

0xd051,	// (0x00057ce7) popup_snote2_single_graphic_window_g2

0x0001,

0xfca3,	// (0x0005a939) popup_snote2_single_graphic_window_g_ParamLimits

0xfca3,	// (0x0005a939) popup_snote2_single_graphic_window_g

0xd079,	// (0x00057d0f) popup_snote2_single_graphic_window_t1_ParamLimits

0xd079,	// (0x00057d0f) popup_snote2_single_graphic_window_t1

0xd0c5,	// (0x00057d5b) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0c5,	// (0x00057d5b) popup_snote2_single_graphic_window_t2

0xcf87,	// (0x00057c1d) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf87,	// (0x00057c1d) popup_snote2_single_graphic_window_t3

0xcfc8,	// (0x00057c5e) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfc8,	// (0x00057c5e) popup_snote2_single_graphic_window_t4

0xcffe,	// (0x00057c94) popup_snote2_single_graphic_window_t5_ParamLimits

0xcffe,	// (0x00057c94) popup_snote2_single_graphic_window_t5

0x0004,

0xfca8,	// (0x0005a93e) popup_snote2_single_graphic_window_t_ParamLimits

0xfca8,	// (0x0005a93e) popup_snote2_single_graphic_window_t

0xbb10,	// (0x000567a6) clock_nsta_pane_cp2_t1

0xbb10,	// (0x000567a6) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x0005a752) clock_nsta_pane_cp2_t

0x534e,	// (0x0004ffe4) form_field_data_wide_pane_g1_ParamLimits

0x84d4,	// (0x0005316a) form_field_data_wide_pane_g2_ParamLimits

0x84d4,	// (0x0005316a) form_field_data_wide_pane_g2

0x84e0,	// (0x00053176) form_field_data_wide_pane_g3_ParamLimits

0x84e0,	// (0x00053176) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x0005a31c) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x0005a31c) form_field_data_wide_pane_g

0xb9e9,	// (0x0005667f) grid_touch_3_pane_ParamLimits

0xb9e9,	// (0x0005667f) grid_touch_3_pane

0xd111,	// (0x00057da7) cell_touch_3_pane_ParamLimits

0xd111,	// (0x00057da7) cell_touch_3_pane

0xc067,	// (0x00056cfd) cell_touch_3_pane_g1

0xc067,	// (0x00056cfd) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x0005a7d7) cell_touch_3_pane_g

0x7940,	// (0x000525d6) cont_query_data_pane

0x7948,	// (0x000525de) cont_query_data_pane_cp1

0xd13f,	// (0x00057dd5) button_value_adjust_pane_cp7

0xd147,	// (0x00057ddd) query_popup_pane_cp3

0x8c08,	// (0x0005389e) bg_popup_sub_pane_cp22_ParamLimits

0x5714,	// (0x000503aa) navi_navi_volume_pane_cp2

0x572f,	// (0x000503c5) popup_side_volume_key_window_g2

0x573e,	// (0x000503d4) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x0005a3b2) popup_side_volume_key_window_g

0x575b,	// (0x000503f1) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x0005a3b9) popup_side_volume_key_window_t

0x8ebf,	// (0x00053b55) popup_side_volume_key_window_ParamLimits

0x4f5b,	// (0x0004fbf1) list_double_graphic_pane_g4_ParamLimits

0x4f5b,	// (0x0004fbf1) list_double_graphic_pane_g4

0x7a8b,	// (0x00052721) list_single_2heading_msg_pane_ParamLimits

0x7a8b,	// (0x00052721) list_single_2heading_msg_pane

0x7ea1,	// (0x00052b37) list_single_2heading_msg_pane_g1_ParamLimits

0x7ea1,	// (0x00052b37) list_single_2heading_msg_pane_g1

0x904d,	// (0x00053ce3) list_single_2heading_msg_pane_g2_ParamLimits

0x904d,	// (0x00053ce3) list_single_2heading_msg_pane_g2

0x7ead,	// (0x00052b43) list_single_2heading_msg_pane_g3_ParamLimits

0x7ead,	// (0x00052b43) list_single_2heading_msg_pane_g3

0x7eb9,	// (0x00052b4f) list_single_2heading_msg_pane_g4_ParamLimits

0x7eb9,	// (0x00052b4f) list_single_2heading_msg_pane_g4

0x0003,

0xfcb3,	// (0x0005a949) list_single_2heading_msg_pane_g_ParamLimits

0xfcb3,	// (0x0005a949) list_single_2heading_msg_pane_g

0x7ed1,	// (0x00052b67) list_single_2heading_msg_pane_t1_ParamLimits

0x7ed1,	// (0x00052b67) list_single_2heading_msg_pane_t1

0x7ef9,	// (0x00052b8f) list_single_2heading_msg_pane_t2_ParamLimits

0x7ef9,	// (0x00052b8f) list_single_2heading_msg_pane_t2

0x7f2d,	// (0x00052bc3) list_single_2heading_msg_pane_t3_ParamLimits

0x7f2d,	// (0x00052bc3) list_single_2heading_msg_pane_t3

0x7f66,	// (0x00052bfc) list_single_2heading_msg_pane_t4_ParamLimits

0x7f66,	// (0x00052bfc) list_single_2heading_msg_pane_t4

0x0003,

0xfcbc,	// (0x0005a952) list_single_2heading_msg_pane_t_ParamLimits

0xfcbc,	// (0x0005a952) list_single_2heading_msg_pane_t

0x7555,	// (0x000521eb) title_pane_g4_ParamLimits

0x7555,	// (0x000521eb) title_pane_g4

0x5522,	// (0x000501b8) title_pane_stacon_g3_ParamLimits

0x5522,	// (0x000501b8) title_pane_stacon_g3

0xcc6d,	// (0x00057903) list_single_2graphic_im_pane_g4_ParamLimits

0xcc6d,	// (0x00057903) list_single_2graphic_im_pane_g4

0xaad3,	// (0x00055769) popup_side_volume_key_window_cp

0xb2be,	// (0x00055f54) main_idle_act2_pane_t1

0x615c,	// (0x00050df2) toolbar_button_pane_g10

0x8417,	// (0x000530ad) popup_toolbar_window_cp1

0xbb01,	// (0x00056797) clock_nsta_pane_cp_t1

0xbb01,	// (0x00056797) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x0005a74d) clock_nsta_pane_cp_t

0x5714,	// (0x000503aa) navi_navi_volume_pane_cp2_ParamLimits

0x5723,	// (0x000503b9) popup_side_volume_key_window_g1_ParamLimits

0x572f,	// (0x000503c5) popup_side_volume_key_window_g2_ParamLimits

0x573e,	// (0x000503d4) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x0005a3b2) popup_side_volume_key_window_g_ParamLimits

0x67ca,	// (0x00051460) fep_hwr_aid_pane

0x6871,	// (0x00051507) bg_fep_hwr_top_pane_g4_ParamLimits

0xc0c3,	// (0x00056d59) fep_hwr_top_pane_g1_ParamLimits

0xc0d5,	// (0x00056d6b) fep_hwr_top_pane_g2_ParamLimits

0x6891,	// (0x00051527) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x0005a7a2) fep_hwr_top_pane_g_ParamLimits

0x68a6,	// (0x0005153c) fep_hwr_top_text_pane_ParamLimits

0xa896,	// (0x0005552c) aid_touch_tab_arrow_arrow_2

0xa89f,	// (0x00055535) aid_touch_tab_arrow_left_2

0x67de,	// (0x00051474) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6815,	// (0x000514ab) fep_hwr_prediction_pane

0xc235,	// (0x00056ecb) fep_vkb_prediction_pane

0xc339,	// (0x00056fcf) fep_vkb_side_pane_g3_ParamLimits

0xc339,	// (0x00056fcf) fep_vkb_side_pane_g3

0x6a21,	// (0x000516b7) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6a8d,	// (0x00051723) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6a9a,	// (0x00051730) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbb,	// (0x0005a851) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6bc9,	// (0x0005185f) fep_hwr_prediction_pane_g1

0x6bd3,	// (0x00051869) fep_hwr_prediction_pane_g2

0x6bdb,	// (0x00051871) fep_hwr_prediction_pane_g3

0x6be3,	// (0x00051879) fep_hwr_prediction_pane_g4

0x0003,

0xfcc5,	// (0x0005a95b) fep_hwr_prediction_pane_g

0xd16c,	// (0x00057e02) fep_vkb_prediction_pane_g1

0xd176,	// (0x00057e0c) fep_vkb_prediction_pane_g2

0xd17e,	// (0x00057e14) fep_vkb_prediction_pane_g3

0xd186,	// (0x00057e1c) fep_vkb_prediction_pane_g4

0x0003,

0xfcce,	// (0x0005a964) fep_vkb_prediction_pane_g

0x64d2,	// (0x00051168) slider_set_pane_g3

0x64e6,	// (0x0005117c) slider_set_pane_g4

0x64fe,	// (0x00051194) slider_set_pane_g5

0x64d2,	// (0x00051168) slider_set_pane_g6

0x6514,	// (0x000511aa) slider_set_pane_g7

0xaf49,	// (0x00055bdf) slider_form_pane_g3

0xaf52,	// (0x00055be8) slider_form_pane_g4

0xaf5a,	// (0x00055bf0) slider_form_pane_g5

0xaf49,	// (0x00055bdf) slider_form_pane_g6

0xaf62,	// (0x00055bf8) slider_form_pane_g7

0xb567,	// (0x000561fd) slider_set_pane_vc_g3

0xb570,	// (0x00056206) slider_set_pane_vc_g4

0xb579,	// (0x0005620f) slider_set_pane_vc_g5

0xb567,	// (0x000561fd) slider_set_pane_vc_g6

0xb582,	// (0x00056218) slider_set_pane_vc_g7

0xb7bc,	// (0x00056452) slider_form_pane_vc_g1

0xb7c5,	// (0x0005645b) slider_form_pane_vc_g2

0xb7ce,	// (0x00056464) slider_form_pane_vc_g3

0xb7bc,	// (0x00056452) slider_form_pane_vc_g4

0xb7d7,	// (0x0005646d) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x0005a71f) slider_form_pane_vc_g

0x4ae7,	// (0x0004f77d) main_idle_act3_pane

0xd18e,	// (0x00057e24) ai3_links_pane

0xd197,	// (0x00057e2d) popup_ai3_data_window_ParamLimits

0xd197,	// (0x00057e2d) popup_ai3_data_window

0x750d,	// (0x000521a3) grid_ai3_links_pane

0xd1b1,	// (0x00057e47) cell_ai3_links_pane_ParamLimits

0xd1b1,	// (0x00057e47) cell_ai3_links_pane

0xd1c9,	// (0x00057e5f) bg_popup_sub_pane_cp11

0xd1d6,	// (0x00057e6c) cell_ai3_links_pane_g1

0x750d,	// (0x000521a3) bg_popup_sub_pane_cp12

0xd1fb,	// (0x00057e91) heading_ai3_data_pane

0xd203,	// (0x00057e99) list_ai3_gene_pane

0xd20f,	// (0x00057ea5) popup_ai3_data_window_g1

0xd217,	// (0x00057ead) heading_ai3_data_pane_g1

0xd21f,	// (0x00057eb5) heading_ai3_data_pane_t1

0xd22d,	// (0x00057ec3) list_double_ai3_gene_pane_ParamLimits

0xd22d,	// (0x00057ec3) list_double_ai3_gene_pane

0xd23a,	// (0x00057ed0) list_single_ai3_gene_pane_ParamLimits

0xd23a,	// (0x00057ed0) list_single_ai3_gene_pane

0xc02c,	// (0x00056cc2) list_highlight_pane_cp7_ParamLimits

0xc02c,	// (0x00056cc2) list_highlight_pane_cp7

0xd247,	// (0x00057edd) list_single_a13_gene_pane_t1_ParamLimits

0xd247,	// (0x00057edd) list_single_a13_gene_pane_t1

0xd25e,	// (0x00057ef4) list_single_ai3_gene_pane_g1

0xd267,	// (0x00057efd) list_single_ai3_gene_pane_g2

0x0001,

0xfcd7,	// (0x0005a96d) list_single_ai3_gene_pane_g

0xd26f,	// (0x00057f05) list_double_ai3_gene_pane_g1_ParamLimits

0xd26f,	// (0x00057f05) list_double_ai3_gene_pane_g1

0xd27b,	// (0x00057f11) list_double_ai3_gene_pane_t1_ParamLimits

0xd27b,	// (0x00057f11) list_double_ai3_gene_pane_t1

0xd297,	// (0x00057f2d) list_double_ai3_gene_pane_t2_ParamLimits

0xd297,	// (0x00057f2d) list_double_ai3_gene_pane_t2

0xd2ad,	// (0x00057f43) list_double_ai3_gene_pane_t3_ParamLimits

0xd2ad,	// (0x00057f43) list_double_ai3_gene_pane_t3

0x0002,

0xfcdc,	// (0x0005a972) list_double_ai3_gene_pane_t_ParamLimits

0xfcdc,	// (0x0005a972) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7e97,	// (0x00052b2d) aid_size_min_col_2

0xd158,	// (0x00057dee) aid_size_min_msg_ParamLimits

0xd158,	// (0x00057dee) aid_size_min_msg

0xc439,	// (0x000570cf) fep_vkb_top_text_pane_g2_ParamLimits

0xc439,	// (0x000570cf) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x0005a7d2) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x0005a7d2) fep_vkb_top_text_pane_g

0x4ae7,	// (0x0004f77d) main_hc_apps_shell_pane

0xd2ca,	// (0x00057f60) grid_hc_apps_pane_ParamLimits

0xd2ca,	// (0x00057f60) grid_hc_apps_pane

0xd2d9,	// (0x00057f6f) list_hc_apps_pane

0xd2e1,	// (0x00057f77) scroll_pane_cp37_ParamLimits

0xd2e1,	// (0x00057f77) scroll_pane_cp37

0xd2ed,	// (0x00057f83) cell_hc_apps_pane_ParamLimits

0xd2ed,	// (0x00057f83) cell_hc_apps_pane

0xd39b,	// (0x00058031) cell_hc_apps_pane_g1_ParamLimits

0xd39b,	// (0x00058031) cell_hc_apps_pane_g1

0xd3cc,	// (0x00058062) cell_hc_apps_pane_g2_ParamLimits

0xd3cc,	// (0x00058062) cell_hc_apps_pane_g2

0xd3e8,	// (0x0005807e) cell_hc_apps_pane_g3_ParamLimits

0xd3e8,	// (0x0005807e) cell_hc_apps_pane_g3

0x0002,

0xfce3,	// (0x0005a979) cell_hc_apps_pane_g_ParamLimits

0xfce3,	// (0x0005a979) cell_hc_apps_pane_g

0xd40a,	// (0x000580a0) cell_hc_apps_pane_t1_ParamLimits

0xd40a,	// (0x000580a0) cell_hc_apps_pane_t1

0x788a,	// (0x00052520) grid_highlight_pane_cp10_ParamLimits

0x788a,	// (0x00052520) grid_highlight_pane_cp10

0xd44a,	// (0x000580e0) list_single_hc_apps_pane_ParamLimits

0xd44a,	// (0x000580e0) list_single_hc_apps_pane

0xd4a6,	// (0x0005813c) list_single_hc_apps_pane_g1

0x7f8b,	// (0x00052c21) list_single_hc_apps_pane_g2

0x0001,

0xfcea,	// (0x0005a980) list_single_hc_apps_pane_g

0x7fa4,	// (0x00052c3a) list_single_hc_apps_pane_g2_copy1

0x7fc0,	// (0x00052c56) list_single_hc_apps_pane_t1

0x7601,	// (0x00052297) bg_set_opt_pane_cp_ParamLimits

0x4d3e,	// (0x0004f9d4) setting_slider_pane_t1_ParamLimits

0x4d57,	// (0x0004f9ed) setting_slider_pane_t2_ParamLimits

0x4d71,	// (0x0004fa07) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0005a1fa) setting_slider_pane_t_ParamLimits

0x4d89,	// (0x0004fa1f) slider_set_pane_ParamLimits

0x5a43,	// (0x000506d9) control_pane_g5_ParamLimits

0x5a43,	// (0x000506d9) control_pane_g5

0xad98,	// (0x00055a2e) slider_set_pane_g1_ParamLimits

0x64c6,	// (0x0005115c) slider_set_pane_g2_ParamLimits

0x64d2,	// (0x00051168) slider_set_pane_g3_ParamLimits

0x64e6,	// (0x0005117c) slider_set_pane_g4_ParamLimits

0x64fe,	// (0x00051194) slider_set_pane_g5_ParamLimits

0x64d2,	// (0x00051168) slider_set_pane_g6_ParamLimits

0x6514,	// (0x000511aa) slider_set_pane_g7_ParamLimits

0xf96f,	// (0x0005a605) slider_set_pane_g_ParamLimits

0x8fa0,	// (0x00053c36) navi_icon_text_pane_ParamLimits

0x948c,	// (0x00054122) aid_fill_nsta_2_ParamLimits

0x94cb,	// (0x00054161) aid_touch_tab_arrow_left_ParamLimits

0x94d7,	// (0x0005416d) aid_touch_tab_arrow_right_ParamLimits

0x9543,	// (0x000541d9) clock_nsta_pane_ParamLimits

0xa878,	// (0x0005550e) navi_icon_pane_g1_ParamLimits

0xa884,	// (0x0005551a) navi_text_pane_t1_ParamLimits

0xbc0b,	// (0x000568a1) navi_icon_text_pane_g1_ParamLimits

0xbc17,	// (0x000568ad) navi_icon_text_pane_t1_ParamLimits

0xd4a6,	// (0x0005813c) list_single_hc_apps_pane_g1_ParamLimits

0x7f8b,	// (0x00052c21) list_single_hc_apps_pane_g2_ParamLimits

0xfcea,	// (0x0005a980) list_single_hc_apps_pane_g_ParamLimits

0x7fa4,	// (0x00052c3a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7fc0,	// (0x00052c56) list_single_hc_apps_pane_t1_ParamLimits

0x4c52,	// (0x0004f8e8) popup_toolbar2_fixed_window_ParamLimits

0x4c52,	// (0x0004f8e8) popup_toolbar2_fixed_window

0x603e,	// (0x00050cd4) popup_toolbar2_float_window

0x750d,	// (0x000521a3) bg_popup_sub_pane_cp27

0xd4bf,	// (0x00058155) grid_toolbar2_float_pane

0x750d,	// (0x000521a3) bg_popup_sub_pane_cp26

0xd4bf,	// (0x00058155) grid_toolbar2_fixed_pane

0xd4c7,	// (0x0005815d) cell_toolbar2_fixed_pane_ParamLimits

0xd4c7,	// (0x0005815d) cell_toolbar2_fixed_pane

0xd4d7,	// (0x0005816d) cell_toolbar2_fixed_pane_g1

0xd4e0,	// (0x00058176) toolbar2_fixed_button_pane

0x9964,	// (0x000545fa) toolbar2_fixed_button_pane_g1

0x9974,	// (0x0005460a) toolbar2_fixed_button_pane_g2

0x996c,	// (0x00054602) toolbar2_fixed_button_pane_g3

0x9984,	// (0x0005461a) toolbar2_fixed_button_pane_g4

0x997c,	// (0x00054612) toolbar2_fixed_button_pane_g5

0x998c,	// (0x00054622) toolbar2_fixed_button_pane_g6

0x9994,	// (0x0005462a) toolbar2_fixed_button_pane_g7

0x99a4,	// (0x0005463a) toolbar2_fixed_button_pane_g8

0x999c,	// (0x00054632) toolbar2_fixed_button_pane_g9

0x0008,

0xf871,	// (0x0005a507) toolbar2_fixed_button_pane_g

0xd4e8,	// (0x0005817e) cell_toolbar2_float_pane_ParamLimits

0xd4e8,	// (0x0005817e) cell_toolbar2_float_pane

0xd4f9,	// (0x0005818f) cell_toolbar2_float_pane_g1

0xd4e0,	// (0x00058176) toolbar2_fixed_button_pane_cp

0xc195,	// (0x00056e2b) fep_vkb_accented_list_pane_ParamLimits

0xc195,	// (0x00056e2b) fep_vkb_accented_list_pane

0x6a01,	// (0x00051697) bg_popup_fep_shadow_pane_g9

0x9114,	// (0x00053daa) bg_popup_fep_shadow_pane_cp3

0x861d,	// (0x000532b3) list_accented_list_pane

0xd502,	// (0x00058198) list_single_accented_list_pane_ParamLimits

0xd502,	// (0x00058198) list_single_accented_list_pane

0x9114,	// (0x00053daa) list_highlight_pane_cp10

0xd513,	// (0x000581a9) list_single_accented_list_pane_t1

0x5f8e,	// (0x00050c24) popup_slider_window_ParamLimits

0x5f8e,	// (0x00050c24) popup_slider_window

0xd14f,	// (0x00057de5) aid_indentation_list_msg

0xd5cd,	// (0x00058263) bg_popup_window_pane_cp19

0xd637,	// (0x000582cd) popup_slider_window_g1

0xd653,	// (0x000582e9) popup_slider_window_g2

0xd66f,	// (0x00058305) popup_slider_window_g3

0x0005,

0xfcef,	// (0x0005a985) popup_slider_window_g

0xd6cb,	// (0x00058361) popup_slider_window_t1

0xd73f,	// (0x000583d5) small_volume_slider_vertical_pane

0xc067,	// (0x00056cfd) small_volume_slider_vertical_pane_g1

0xc067,	// (0x00056cfd) small_volume_slider_vertical_pane_g2

0xd75b,	// (0x000583f1) small_volume_slider_vertical_pane_g3

0x0002,

0xfd01,	// (0x0005a997) small_volume_slider_vertical_pane_g

0x4a0a,	// (0x0004f6a0) area_side_right_pane_ParamLimits

0x4a0a,	// (0x0004f6a0) area_side_right_pane

0x6beb,	// (0x00051881) aid_size_side_button_ParamLimits

0x6beb,	// (0x00051881) aid_size_side_button

0x6bff,	// (0x00051895) grid_sctrl_middle_pane_ParamLimits

0x6bff,	// (0x00051895) grid_sctrl_middle_pane

0x6c1f,	// (0x000518b5) sctrl_sk_bottom_pane

0x6c30,	// (0x000518c6) sctrl_sk_top_pane

0x6c42,	// (0x000518d8) aid_touch_sctrl_top

0x6c4f,	// (0x000518e5) bg_sctrl_sk_pane_ParamLimits

0x6c4f,	// (0x000518e5) bg_sctrl_sk_pane

0x6c5d,	// (0x000518f3) sctrl_sk_top_pane_g1

0x6c6a,	// (0x00051900) sctrl_sk_top_pane_t1

0x6c42,	// (0x000518d8) aid_touch_sctrl_bottom

0x6c4f,	// (0x000518e5) bg_sctrl_sk_pane_cp_ParamLimits

0x6c4f,	// (0x000518e5) bg_sctrl_sk_pane_cp

0x6c85,	// (0x0005191b) sctrl_sk_bottom_pane_g1

0x6c6a,	// (0x00051900) sctrl_sk_bottom_pane_t1

0x6c8e,	// (0x00051924) cell_sctrl_middle_pane_ParamLimits

0x6c8e,	// (0x00051924) cell_sctrl_middle_pane

0x6ca9,	// (0x0005193f) aid_touch_sctrl_middle_ParamLimits

0x6ca9,	// (0x0005193f) aid_touch_sctrl_middle

0x6cbb,	// (0x00051951) bg_sctrl_middle_pane_ParamLimits

0x6cbb,	// (0x00051951) bg_sctrl_middle_pane

0x6a21,	// (0x000516b7) cell_sctrl_middle_pane_g1_ParamLimits

0x6a21,	// (0x000516b7) cell_sctrl_middle_pane_g1

0x6cc9,	// (0x0005195f) cell_sctrl_middle_pane_g2_ParamLimits

0x6cc9,	// (0x0005195f) cell_sctrl_middle_pane_g2

0x0001,

0xfd0d,	// (0x0005a9a3) cell_sctrl_middle_pane_g_ParamLimits

0xfd0d,	// (0x0005a9a3) cell_sctrl_middle_pane_g

0x9964,	// (0x000545fa) bg_sctrl_middle_pane_g1

0x996c,	// (0x00054602) bg_sctrl_middle_pane_g2

0x9974,	// (0x0005460a) bg_sctrl_middle_pane_g3

0x997c,	// (0x00054612) bg_sctrl_middle_pane_g4

0x9984,	// (0x0005461a) bg_sctrl_middle_pane_g5

0x998c,	// (0x00054622) bg_sctrl_middle_pane_g6

0x9994,	// (0x0005462a) bg_sctrl_middle_pane_g7

0x999c,	// (0x00054632) bg_sctrl_middle_pane_g8

0x0007,

0xfd12,	// (0x0005a9a8) bg_sctrl_middle_pane_g

0x99a4,	// (0x0005463a) bg_sctrl_middle_pane_g8_copy1

0x9964,	// (0x000545fa) bg_sctrl_sk_pane_g1

0x9974,	// (0x0005460a) bg_sctrl_sk_pane_g2

0x996c,	// (0x00054602) bg_sctrl_sk_pane_g3

0x0008,

0xf871,	// (0x0005a507) bg_sctrl_sk_pane_g

0x83dd,	// (0x00053073) aid_size_touch_scroll_bar

0x9984,	// (0x0005461a) bg_sctrl_sk_pane_g4

0x997c,	// (0x00054612) bg_sctrl_sk_pane_g5

0x998c,	// (0x00054622) bg_sctrl_sk_pane_g6

0x9994,	// (0x0005462a) bg_sctrl_sk_pane_g7

0x99a4,	// (0x0005463a) bg_sctrl_sk_pane_g8

0x999c,	// (0x00054632) bg_sctrl_sk_pane_g9

0x5bf9,	// (0x0005088f) popup_fep_china_hwr2_fs_candidate_window

0x5c03,	// (0x00050899) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5c03,	// (0x00050899) popup_fep_china_hwr2_fs_control_window

0x6a21,	// (0x000516b7) sctrl_sk_top_pane_g2

0x0001,

0xfd08,	// (0x0005a99e) sctrl_sk_top_pane_g

0xd764,	// (0x000583fa) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd764,	// (0x000583fa) aid_fep_china_hwr2_fs_cell

0xd776,	// (0x0005840c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd776,	// (0x0005840c) bg_popup_fep_shadow_pane_cp4

0xd78d,	// (0x00058423) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd78d,	// (0x00058423) bg_popup_fep_shadow_pane_cp5

0xd79f,	// (0x00058435) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd79f,	// (0x00058435) popup_fep_china_hwr2_fs_control_bar_grid

0xd7af,	// (0x00058445) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7b7,	// (0x0005844d) aid_fep_china_hwr2_fs_candi_cell

0x750d,	// (0x000521a3) bg_popup_fep_shadow_pane_cp6

0xd7c1,	// (0x00058457) popup_fep_china_hwr2_fs_candidate_grid

0xd7cb,	// (0x00058461) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7cb,	// (0x00058461) cell_fep_china_hwr2_fs_funtion_grid

0xc067,	// (0x00056cfd) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7e3,	// (0x00058479) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7e3,	// (0x00058479) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7f1,	// (0x00058487) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7f1,	// (0x00058487) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd23,	// (0x0005a9b9) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd23,	// (0x0005a9b9) cell_fep_china_hwr2_fs_funtion_grid_g

0xd807,	// (0x0005849d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd807,	// (0x0005849d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd81c,	// (0x000584b2) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd81c,	// (0x000584b2) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd28,	// (0x0005a9be) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd28,	// (0x0005a9be) cell_fep_china_hwr2_fs_funtion_grid_t

0xd838,	// (0x000584ce) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd840,	// (0x000584d6) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd848,	// (0x000584de) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2d,	// (0x0005a9c3) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd850,	// (0x000584e6) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd850,	// (0x000584e6) cell_fep_china_hwr2_fs_candidate_grid

0xd869,	// (0x000584ff) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd871,	// (0x00058507) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc067,	// (0x00056cfd) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc067,	// (0x00056cfd) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x0005a7d7) cell_fep_china_hwr2_fs_candidate_grid_g

0xd879,	// (0x0005850f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9550,	// (0x000541e6) clock_nsta_pane_cp_24_ParamLimits

0x9550,	// (0x000541e6) clock_nsta_pane_cp_24

0x95ce,	// (0x00054264) indicator_nsta_pane_cp_24_ParamLimits

0x95ce,	// (0x00054264) indicator_nsta_pane_cp_24

0xa703,	// (0x00055399) heading_pane_g1

0x0001,

0xf8d6,	// (0x0005a56c) heading_pane_g

0xb107,	// (0x00055d9d) grid_sct_catagory_button_pane

0xb137,	// (0x00055dcd) scroll_pane_cp5_ParamLimits

0xbc59,	// (0x000568ef) button_value_adjust_pane_cp5_ParamLimits

0xbc59,	// (0x000568ef) button_value_adjust_pane_cp5

0xbd38,	// (0x000569ce) form2_midp_time_pane_ParamLimits

0xd887,	// (0x0005851d) cell_sct_catagory_button_pane_ParamLimits

0xd887,	// (0x0005851d) cell_sct_catagory_button_pane

0xc02c,	// (0x00056cc2) bg_button_pane_cp01_ParamLimits

0xc02c,	// (0x00056cc2) bg_button_pane_cp01

0xc067,	// (0x00056cfd) cell_sct_catagory_button_pane_g1

0x5fcd,	// (0x00050c63) popup_tb_extension_window

0xd899,	// (0x0005852f) aid_size_cell_ext_ParamLimits

0xd899,	// (0x0005852f) aid_size_cell_ext

0x788a,	// (0x00052520) bg_tb_trans_pane_cp1_ParamLimits

0x788a,	// (0x00052520) bg_tb_trans_pane_cp1

0xd8b9,	// (0x0005854f) grid_tb_ext_pane_ParamLimits

0xd8b9,	// (0x0005854f) grid_tb_ext_pane

0xd8e9,	// (0x0005857f) cell_tb_ext_pane_ParamLimits

0xd8e9,	// (0x0005857f) cell_tb_ext_pane

0xd900,	// (0x00058596) cell_tb_ext_pane_g1_ParamLimits

0xd900,	// (0x00058596) cell_tb_ext_pane_g1

0xd91d,	// (0x000585b3) cell_tb_ext_pane_t1

0x788a,	// (0x00052520) list_highlight_pane_cp11_ParamLimits

0x788a,	// (0x00052520) list_highlight_pane_cp11

0x4c71,	// (0x0004f907) popup_uni_indicator_window_ParamLimits

0x4c71,	// (0x0004f907) popup_uni_indicator_window

0x84ba,	// (0x00053150) bg_popup_sub_pane_cp14

0xd938,	// (0x000585ce) list_uniindi_pane

0xd944,	// (0x000585da) uniindi_top_pane

0x788a,	// (0x00052520) bg_uniindi_top_pane

0xd963,	// (0x000585f9) uniindi_top_pane_g1

0xd979,	// (0x0005860f) uniindi_top_pane_g2

0x0003,

0xfd34,	// (0x0005a9ca) uniindi_top_pane_g

0xd9a3,	// (0x00058639) uniindi_top_pane_t1

0xd9cd,	// (0x00058663) list_single_uniindi_pane_ParamLimits

0xd9cd,	// (0x00058663) list_single_uniindi_pane

0xc067,	// (0x00056cfd) bg_uniindi_top_pane_g1

0xd9e0,	// (0x00058676) list_single_uniindi_pane_g1

0xd9f3,	// (0x00058689) list_single_uniindi_pane_t1

0x4ae7,	// (0x0004f77d) control_bg_pane

0xda18,	// (0x000586ae) bg_sctrl_sk_pane_cp1

0xda21,	// (0x000586b7) bg_sctrl_sk_pane_cp2

0xda2a,	// (0x000586c0) control_bg_pane_g1

0xda33,	// (0x000586c9) control_bg_pane_g2

0x0001,

0xfd3d,	// (0x0005a9d3) control_bg_pane_g

0xba93,	// (0x00056729) cell_indicator_nsta_pane_g1_ParamLimits

0xbaa1,	// (0x00056737) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x0005a73b) cell_indicator_nsta_pane_g_ParamLimits

0x7c74,	// (0x0005290a) form2_midp_time_pane_t1_ParamLimits

0x5b59,	// (0x000507ef) main_idle_act4_pane_ParamLimits

0x5b59,	// (0x000507ef) main_idle_act4_pane

0x5fcd,	// (0x00050c63) popup_tb_extension_window_ParamLimits

0xd8d9,	// (0x0005856f) tb_ext_find_pane_ParamLimits

0xd8d9,	// (0x0005856f) tb_ext_find_pane

0xda3c,	// (0x000586d2) ai_gene_pane_1_cp1

0x924d,	// (0x00053ee3) ai_gene_pane_2_cp1

0xda44,	// (0x000586da) list_single_idle_plugin_calendar_pane

0xda4d,	// (0x000586e3) list_single_idle_plugin_notification_pane

0xda56,	// (0x000586ec) list_single_idle_plugin_player_pane

0xda5f,	// (0x000586f5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda5f,	// (0x000586f5) list_single_idle_plugin_shortcut_pane

0xda81,	// (0x00058717) main_idle_act4_pane_t1

0xda93,	// (0x00058729) main_idle_act4_pane_t2

0x0001,

0xfd42,	// (0x0005a9d8) main_idle_act4_pane_t

0xdaa5,	// (0x0005873b) middle_sk_idle_act4_pane_ParamLimits

0xdaa5,	// (0x0005873b) middle_sk_idle_act4_pane

0xdabb,	// (0x00058751) popup_clock_digital_analogue_window_cp2

0xdad5,	// (0x0005876b) shortcut_wheel_idle_act4_pane_ParamLimits

0xdad5,	// (0x0005876b) shortcut_wheel_idle_act4_pane

0xc067,	// (0x00056cfd) shortcut_wheel_idle_act4_pane_g1

0xc067,	// (0x00056cfd) shortcut_wheel_idle_act4_pane_g2

0xc067,	// (0x00056cfd) shortcut_wheel_idle_act4_pane_g3

0xc067,	// (0x00056cfd) shortcut_wheel_idle_act4_pane_g4

0xc067,	// (0x00056cfd) shortcut_wheel_idle_act4_pane_g5

0xdae9,	// (0x0005877f) shortcut_wheel_idle_act4_pane_g6

0xdaf1,	// (0x00058787) shortcut_wheel_idle_act4_pane_g7

0xdaf9,	// (0x0005878f) shortcut_wheel_idle_act4_pane_g8

0xdb01,	// (0x00058797) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd47,	// (0x0005a9dd) shortcut_wheel_idle_act4_pane_g

0xc2e5,	// (0x00056f7b) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2e5,	// (0x00056f7b) middle_sk_idle_act4_pane_g1

0xdb65,	// (0x000587fb) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb65,	// (0x000587fb) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6a,	// (0x0005aa00) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6a,	// (0x0005aa00) middle_sk_idle_act4_pane_g

0xdb71,	// (0x00058807) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb71,	// (0x00058807) middle_sk_idle_act4_pane_t1

0xdb8e,	// (0x00058824) grid_ai_shortcut_pane_ParamLimits

0xdb8e,	// (0x00058824) grid_ai_shortcut_pane

0xdba7,	// (0x0005883d) list_highlight_pane_cp16_ParamLimits

0xdba7,	// (0x0005883d) list_highlight_pane_cp16

0xdbb4,	// (0x0005884a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbb4,	// (0x0005884a) list_single_idle_plugin_shortcut_pane_g1

0xdbc0,	// (0x00058856) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbc0,	// (0x00058856) list_single_idle_plugin_shortcut_pane_g2

0xdbd8,	// (0x0005886e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbd8,	// (0x0005886e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6f,	// (0x0005aa05) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6f,	// (0x0005aa05) list_single_idle_plugin_shortcut_pane_g

0xdbeb,	// (0x00058881) cell_ai_shortcut_pane_ParamLimits

0xdbeb,	// (0x00058881) cell_ai_shortcut_pane

0xdc0f,	// (0x000588a5) cell_ai_shortcut_pane_g1_ParamLimits

0xdc0f,	// (0x000588a5) cell_ai_shortcut_pane_g1

0xda3c,	// (0x000586d2) ai_gene_pane_1_cp2

0xdc31,	// (0x000588c7) ai_gene_pane_2_cp2

0xdc39,	// (0x000588cf) list_highlight_pane_cp15

0xdc42,	// (0x000588d8) list_single_idle_plugin_calendar_pane_g1

0xdc39,	// (0x000588cf) list_highlight_pane_cp17

0xdc4a,	// (0x000588e0) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc52,	// (0x000588e8) list_single_idle_plugin_player_pane_g1

0xb360,	// (0x00055ff6) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd76,	// (0x0005aa0c) list_single_idle_plugin_player_pane_g

0xdc5a,	// (0x000588f0) list_single_idle_plugin_player_pane_t1

0xdc68,	// (0x000588fe) list_single_idle_plugin_player_pane_t2

0xdc76,	// (0x0005890c) list_single_idle_plugin_player_pane_t3

0xdc84,	// (0x0005891a) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7b,	// (0x0005aa11) list_single_idle_plugin_player_pane_t

0xdc92,	// (0x00058928) wait_bar_pane_cp15

0xdc9a,	// (0x00058930) grid_ai_notification_pane

0xb360,	// (0x00055ff6) list_single_idle_plugin_notification_pane_g1

0xdca3,	// (0x00058939) cell_ai_notification_pane_ParamLimits

0xdca3,	// (0x00058939) cell_ai_notification_pane

0xdcb0,	// (0x00058946) cell_ai_notification_pane_g1

0xdcb8,	// (0x0005894e) cell_ai_notification_pane_t1

0xdcc6,	// (0x0005895c) tb_ext_find_button_pane

0xdcce,	// (0x00058964) tb_ext_find_pane_g1

0xdcd6,	// (0x0005896c) tb_ext_find_pane_t1

0x8b1e,	// (0x000537b4) tb_ext_find_button_pane_g1

0xdce4,	// (0x0005897a) tb_ext_find_button_pane_g2

0x0001,

0xfd84,	// (0x0005aa1a) tb_ext_find_button_pane_g

0xda81,	// (0x00058717) main_idle_act4_pane_t1_ParamLimits

0xda93,	// (0x00058729) main_idle_act4_pane_t2_ParamLimits

0xfd42,	// (0x0005a9d8) main_idle_act4_pane_t_ParamLimits

0xdabb,	// (0x00058751) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdac9,	// (0x0005875f) sat_plugin_idle_act4_pane_ParamLimits

0xdac9,	// (0x0005875f) sat_plugin_idle_act4_pane

0xdced,	// (0x00058983) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdced,	// (0x00058983) sat_plugin_idle_act4_pane_t1

0xdd00,	// (0x00058996) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd00,	// (0x00058996) sat_plugin_idle_act4_pane_t2

0xdd13,	// (0x000589a9) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd13,	// (0x000589a9) sat_plugin_idle_act4_pane_t3

0xdd26,	// (0x000589bc) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd26,	// (0x000589bc) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd89,	// (0x0005aa1f) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd89,	// (0x0005aa1f) sat_plugin_idle_act4_pane_t

0x4bac,	// (0x0004f842) popup_battery_window_ParamLimits

0x4bac,	// (0x0004f842) popup_battery_window

0x788a,	// (0x00052520) bg_popup_sub_pane_cp25_ParamLimits

0x788a,	// (0x00052520) bg_popup_sub_pane_cp25

0xdd39,	// (0x000589cf) popup_battery_window_g1_ParamLimits

0xdd39,	// (0x000589cf) popup_battery_window_g1

0xdd45,	// (0x000589db) popup_battery_window_t1_ParamLimits

0xdd45,	// (0x000589db) popup_battery_window_t1

0xdd57,	// (0x000589ed) popup_battery_window_t2_ParamLimits

0xdd57,	// (0x000589ed) popup_battery_window_t2

0x0001,

0xfd92,	// (0x0005aa28) popup_battery_window_t_ParamLimits

0xfd92,	// (0x0005aa28) popup_battery_window_t

0x911c,	// (0x00053db2) midp_canvas_pane_ParamLimits

0x9191,	// (0x00053e27) midp_keypad_pane_ParamLimits

0x9191,	// (0x00053e27) midp_keypad_pane

0x9454,	// (0x000540ea) main_midp_pane_ParamLimits

0xbb1f,	// (0x000567b5) signal_pane_g2_cp_ParamLimits

0xdd74,	// (0x00058a0a) aid_size_cell_midp_keypad_ParamLimits

0xdd74,	// (0x00058a0a) aid_size_cell_midp_keypad

0xdd8e,	// (0x00058a24) midp_keyp_game_grid_pane_ParamLimits

0xdd8e,	// (0x00058a24) midp_keyp_game_grid_pane

0xddae,	// (0x00058a44) midp_keyp_rocker_pane_ParamLimits

0xddae,	// (0x00058a44) midp_keyp_rocker_pane

0xddd9,	// (0x00058a6f) midp_keyp_sk_left_pane_ParamLimits

0xddd9,	// (0x00058a6f) midp_keyp_sk_left_pane

0xde33,	// (0x00058ac9) midp_keyp_sk_right_pane_ParamLimits

0xde33,	// (0x00058ac9) midp_keyp_sk_right_pane

0x750d,	// (0x000521a3) bg_button_pane_cp03

0xde8d,	// (0x00058b23) midp_keyp_sk_left_pane_g1

0x750d,	// (0x000521a3) bg_button_pane_cp04

0xde8d,	// (0x00058b23) midp_keyp_sk_right_pane_g1

0xc067,	// (0x00056cfd) midp_keyp_rocker_pane_g1

0xde96,	// (0x00058b2c) keyp_game_cell_pane_ParamLimits

0xde96,	// (0x00058b2c) keyp_game_cell_pane

0x750d,	// (0x000521a3) bg_button_pane_cp02

0xdea9,	// (0x00058b3f) keyp_game_cell_pane_g1

0x4bf0,	// (0x0004f886) popup_fep_vkb2_window_ParamLimits

0x4bf0,	// (0x0004f886) popup_fep_vkb2_window

0x6ce7,	// (0x0005197d) aid_size_cell_vkb2_ParamLimits

0x6ce7,	// (0x0005197d) aid_size_cell_vkb2

0x6d3b,	// (0x000519d1) popup_fep_vkb2_window_g1_ParamLimits

0x6d3b,	// (0x000519d1) popup_fep_vkb2_window_g1

0x6d83,	// (0x00051a19) vkb2_area_bottom_pane_ParamLimits

0x6d83,	// (0x00051a19) vkb2_area_bottom_pane

0x6dcf,	// (0x00051a65) vkb2_area_keypad_pane_ParamLimits

0x6dcf,	// (0x00051a65) vkb2_area_keypad_pane

0x6e11,	// (0x00051aa7) vkb2_area_top_pane_ParamLimits

0x6e11,	// (0x00051aa7) vkb2_area_top_pane

0x6e8b,	// (0x00051b21) vkb2_top_entry_pane_ParamLimits

0x6e8b,	// (0x00051b21) vkb2_top_entry_pane

0x6eb5,	// (0x00051b4b) vkb2_top_grid_left_pane_ParamLimits

0x6eb5,	// (0x00051b4b) vkb2_top_grid_left_pane

0x6ed3,	// (0x00051b69) vkb2_top_grid_right_pane_ParamLimits

0x6ed3,	// (0x00051b69) vkb2_top_grid_right_pane

0x6ef1,	// (0x00051b87) vkb2_cell_keypad_pane_ParamLimits

0x6ef1,	// (0x00051b87) vkb2_cell_keypad_pane

0x6fc2,	// (0x00051c58) vkb2_area_bottom_grid_pane_ParamLimits

0x6fc2,	// (0x00051c58) vkb2_area_bottom_grid_pane

0x6fe8,	// (0x00051c7e) vkb2_area_bottom_pane_g1_ParamLimits

0x6fe8,	// (0x00051c7e) vkb2_area_bottom_pane_g1

0x700c,	// (0x00051ca2) vkb2_area_bottom_pane_g2_ParamLimits

0x700c,	// (0x00051ca2) vkb2_area_bottom_pane_g2

0x703a,	// (0x00051cd0) vkb2_area_bottom_pane_g3_ParamLimits

0x703a,	// (0x00051cd0) vkb2_area_bottom_pane_g3

0x0002,

0xfd97,	// (0x0005aa2d) vkb2_area_bottom_pane_g_ParamLimits

0xfd97,	// (0x0005aa2d) vkb2_area_bottom_pane_g

0x709b,	// (0x00051d31) vkb2_top_cell_left_pane_ParamLimits

0x709b,	// (0x00051d31) vkb2_top_cell_left_pane

0xdeba,	// (0x00058b50) vkb2_top_entry_pane_g1_ParamLimits

0xdeba,	// (0x00058b50) vkb2_top_entry_pane_g1

0xdec8,	// (0x00058b5e) vkb2_top_entry_pane_t1_ParamLimits

0xdec8,	// (0x00058b5e) vkb2_top_entry_pane_t1

0xdefa,	// (0x00058b90) vkb2_top_entry_pane_t2_ParamLimits

0xdefa,	// (0x00058b90) vkb2_top_entry_pane_t2

0xdf2c,	// (0x00058bc2) vkb2_top_entry_pane_t3_ParamLimits

0xdf2c,	// (0x00058bc2) vkb2_top_entry_pane_t3

0x0002,

0xfd9e,	// (0x0005aa34) vkb2_top_entry_pane_t_ParamLimits

0xfd9e,	// (0x0005aa34) vkb2_top_entry_pane_t

0x70e8,	// (0x00051d7e) vkb2_top_grid_right_pane_g1_ParamLimits

0x70e8,	// (0x00051d7e) vkb2_top_grid_right_pane_g1

0x70fe,	// (0x00051d94) vkb2_top_grid_right_pane_g2_ParamLimits

0x70fe,	// (0x00051d94) vkb2_top_grid_right_pane_g2

0x7116,	// (0x00051dac) vkb2_top_grid_right_pane_g3_ParamLimits

0x7116,	// (0x00051dac) vkb2_top_grid_right_pane_g3

0x712e,	// (0x00051dc4) vkb2_top_grid_right_pane_g4_ParamLimits

0x712e,	// (0x00051dc4) vkb2_top_grid_right_pane_g4

0x0003,

0xfda5,	// (0x0005aa3b) vkb2_top_grid_right_pane_g_ParamLimits

0xfda5,	// (0x0005aa3b) vkb2_top_grid_right_pane_g

0x7144,	// (0x00051dda) vkb2_top_cell_left_pane_g1

0x715b,	// (0x00051df1) vkb2_cell_keypad_pane_g1_ParamLimits

0x715b,	// (0x00051df1) vkb2_cell_keypad_pane_g1

0xdf50,	// (0x00058be6) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf50,	// (0x00058be6) vkb2_cell_keypad_pane_t1

0x7169,	// (0x00051dff) vkb2_cell_bottom_grid_pane_ParamLimits

0x7169,	// (0x00051dff) vkb2_cell_bottom_grid_pane

0x71a2,	// (0x00051e38) vkb2_cell_bottom_grid_pane_g1

0xdb09,	// (0x0005879f) aid_call2_pane_cp02

0xdb11,	// (0x000587a7) aid_call_pane_cp02

0xdb19,	// (0x000587af) clock_digital_number_pane_cp10

0xdb21,	// (0x000587b7) clock_digital_number_pane_cp11

0xdb29,	// (0x000587bf) clock_digital_number_pane_cp12

0xdb31,	// (0x000587c7) clock_digital_number_pane_cp13

0xdb39,	// (0x000587cf) clock_digital_separator_pane_cp10

0x8b1e,	// (0x000537b4) popup_clock_digital_analogue_window_cp2_g1

0x8b1e,	// (0x000537b4) popup_clock_digital_analogue_window_cp2_g2

0xdb41,	// (0x000587d7) popup_clock_digital_analogue_window_cp2_g3

0x8b1e,	// (0x000537b4) popup_clock_digital_analogue_window_cp2_g4

0xdb41,	// (0x000587d7) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5a,	// (0x0005a9f0) popup_clock_digital_analogue_window_cp2_g

0xdb49,	// (0x000587df) popup_clock_digital_analogue_window_cp2_t1

0xdb57,	// (0x000587ed) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd65,	// (0x0005a9fb) popup_clock_digital_analogue_window_cp2_t

0xc067,	// (0x00056cfd) clock_digital_number_pane_cp10_g1

0xc067,	// (0x00056cfd) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x0005a7d7) clock_digital_number_pane_cp10_g

0xc067,	// (0x00056cfd) clock_digital_separator_pane_cp10_g1

0xc067,	// (0x00056cfd) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x0005a7d7) clock_digital_separator_pane_cp10_g

0xd985,	// (0x0005861b) uniindi_top_pane_g3

0xd996,	// (0x0005862c) uniindi_top_pane_g4

0x6f7c,	// (0x00051c12) vkb2_row_keypad_pane_ParamLimits

0x6f7c,	// (0x00051c12) vkb2_row_keypad_pane

0x71be,	// (0x00051e54) vkb2_cell_t_keypad_pane_ParamLimits

0x71be,	// (0x00051e54) vkb2_cell_t_keypad_pane

0x71ce,	// (0x00051e64) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x71ce,	// (0x00051e64) vkb2_cell_t_keypad_pane_cp08

0x71e1,	// (0x00051e77) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x71e1,	// (0x00051e77) vkb2_cell_t_keypad_pane_cp09

0x71f5,	// (0x00051e8b) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x71f5,	// (0x00051e8b) vkb2_cell_t_keypad_pane_cp01

0x7206,	// (0x00051e9c) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7206,	// (0x00051e9c) vkb2_cell_t_keypad_pane_cp02

0x7217,	// (0x00051ead) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7217,	// (0x00051ead) vkb2_cell_t_keypad_pane_cp03

0x7228,	// (0x00051ebe) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7228,	// (0x00051ebe) vkb2_cell_t_keypad_pane_cp04

0x7239,	// (0x00051ecf) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7239,	// (0x00051ecf) vkb2_cell_t_keypad_pane_cp05

0x724a,	// (0x00051ee0) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x724a,	// (0x00051ee0) vkb2_cell_t_keypad_pane_cp06

0x725b,	// (0x00051ef1) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x725b,	// (0x00051ef1) vkb2_cell_t_keypad_pane_cp07

0x726c,	// (0x00051f02) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x726c,	// (0x00051f02) vkb2_cell_t_keypad_pane_cp10

0x6a21,	// (0x000516b7) vkb2_cell_t_keypad_pane_g1

0xdf67,	// (0x00058bfd) vkb2_cell_t_keypad_pane_t1

0x4ae7,	// (0x0004f77d) popup_grid_graphic2_window

0xdf79,	// (0x00058c0f) aid_size_cell_graphic2_ParamLimits

0xdf79,	// (0x00058c0f) aid_size_cell_graphic2

0xdfb1,	// (0x00058c47) bg_popup_window_pane_cp21_ParamLimits

0xdfb1,	// (0x00058c47) bg_popup_window_pane_cp21

0xdfbf,	// (0x00058c55) graphic2_pages_pane_ParamLimits

0xdfbf,	// (0x00058c55) graphic2_pages_pane

0xe005,	// (0x00058c9b) grid_graphic2_control_pane_ParamLimits

0xe005,	// (0x00058c9b) grid_graphic2_control_pane

0xe043,	// (0x00058cd9) grid_graphic2_pane_ParamLimits

0xe043,	// (0x00058cd9) grid_graphic2_pane

0xe0b7,	// (0x00058d4d) cell_graphic2_pane

0x4ae7,	// (0x0004f77d) main_comp_mode_pane

0xd203,	// (0x00057e99) list_ai3_gene_pane_ParamLimits

0xd5cd,	// (0x00058263) bg_popup_window_pane_cp19_ParamLimits

0xd5d9,	// (0x0005826f) bg_touch_area_indi_pane_ParamLimits

0xd5d9,	// (0x0005826f) bg_touch_area_indi_pane

0xd5ef,	// (0x00058285) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5ef,	// (0x00058285) bg_touch_area_indi_pane_cp01

0xd605,	// (0x0005829b) bg_touch_area_indi_pane_cp02_ParamLimits

0xd605,	// (0x0005829b) bg_touch_area_indi_pane_cp02

0xd61d,	// (0x000582b3) bg_touch_area_indi_pane_cp03_ParamLimits

0xd61d,	// (0x000582b3) bg_touch_area_indi_pane_cp03

0xd637,	// (0x000582cd) popup_slider_window_g1_ParamLimits

0xd653,	// (0x000582e9) popup_slider_window_g2_ParamLimits

0xd66f,	// (0x00058305) popup_slider_window_g3_ParamLimits

0xfcef,	// (0x0005a985) popup_slider_window_g_ParamLimits

0xd6cb,	// (0x00058361) popup_slider_window_t1_ParamLimits

0xd73f,	// (0x000583d5) small_volume_slider_vertical_pane_ParamLimits

0xe0b7,	// (0x00058d4d) cell_graphic2_pane_ParamLimits

0xe105,	// (0x00058d9b) bg_button_pane_cp10_ParamLimits

0xe105,	// (0x00058d9b) bg_button_pane_cp10

0xe118,	// (0x00058dae) bg_button_pane_cp11_ParamLimits

0xe118,	// (0x00058dae) bg_button_pane_cp11

0xe12b,	// (0x00058dc1) graphic2_pages_pane_g1_ParamLimits

0xe12b,	// (0x00058dc1) graphic2_pages_pane_g1

0xe146,	// (0x00058ddc) graphic2_pages_pane_g2_ParamLimits

0xe146,	// (0x00058ddc) graphic2_pages_pane_g2

0x0001,

0xfdb3,	// (0x0005aa49) graphic2_pages_pane_g_ParamLimits

0xfdb3,	// (0x0005aa49) graphic2_pages_pane_g

0xe15e,	// (0x00058df4) graphic2_pages_pane_t1_ParamLimits

0xe15e,	// (0x00058df4) graphic2_pages_pane_t1

0xe176,	// (0x00058e0c) cell_graphic2_control_pane_ParamLimits

0xe176,	// (0x00058e0c) cell_graphic2_control_pane

0xe197,	// (0x00058e2d) cell_graphic2_pane_g1_ParamLimits

0xe197,	// (0x00058e2d) cell_graphic2_pane_g1

0xe1a4,	// (0x00058e3a) cell_graphic2_pane_g2_ParamLimits

0xe1a4,	// (0x00058e3a) cell_graphic2_pane_g2

0xe1b1,	// (0x00058e47) cell_graphic2_pane_g3_ParamLimits

0xe1b1,	// (0x00058e47) cell_graphic2_pane_g3

0xe1be,	// (0x00058e54) cell_graphic2_pane_g4_ParamLimits

0xe1be,	// (0x00058e54) cell_graphic2_pane_g4

0xe1cb,	// (0x00058e61) cell_graphic2_pane_g5_ParamLimits

0xe1cb,	// (0x00058e61) cell_graphic2_pane_g5

0x0004,

0xfdb8,	// (0x0005aa4e) cell_graphic2_pane_g_ParamLimits

0xfdb8,	// (0x0005aa4e) cell_graphic2_pane_g

0xe1e6,	// (0x00058e7c) cell_graphic2_pane_t1_ParamLimits

0xe1e6,	// (0x00058e7c) cell_graphic2_pane_t1

0x9a5c,	// (0x000546f2) grid_highlight_pane_cp11_ParamLimits

0x9a5c,	// (0x000546f2) grid_highlight_pane_cp11

0x788a,	// (0x00052520) bg_button_pane_cp05

0xe20f,	// (0x00058ea5) cell_graphic2_control_pane_g1

0xc067,	// (0x00056cfd) bg_touch_area_indi_pane_g1

0xe237,	// (0x00058ecd) aid_cmod_rocker_key_size

0xe241,	// (0x00058ed7) aid_cmode_itu_key_size

0xe24b,	// (0x00058ee1) main_cmode_video_pane

0xe255,	// (0x00058eeb) main_comp_mode_itu_pane

0xe261,	// (0x00058ef7) main_comp_mode_rocker_pane

0xe26d,	// (0x00058f03) cell_cmode_rocker_pane_ParamLimits

0xe26d,	// (0x00058f03) cell_cmode_rocker_pane

0xe27f,	// (0x00058f15) cell_cmode_itu_pane_ParamLimits

0xe27f,	// (0x00058f15) cell_cmode_itu_pane

0x84ba,	// (0x00053150) bg_button_pane_cp06_ParamLimits

0x84ba,	// (0x00053150) bg_button_pane_cp06

0xc2e5,	// (0x00056f7b) cell_cmode_rocker_pane_g1_ParamLimits

0xc2e5,	// (0x00056f7b) cell_cmode_rocker_pane_g1

0xd7e3,	// (0x00058479) cell_cmode_rocker_pane_g2_ParamLimits

0xd7e3,	// (0x00058479) cell_cmode_rocker_pane_g2

0x0001,

0xfdc8,	// (0x0005aa5e) cell_cmode_rocker_pane_g_ParamLimits

0xfdc8,	// (0x0005aa5e) cell_cmode_rocker_pane_g

0x750d,	// (0x000521a3) bg_button_pane_cp07

0xe294,	// (0x00058f2a) cell_cmode_itu_pane_g1

0xe29d,	// (0x00058f33) cell_cmode_itu_pane_t1

0xe2ab,	// (0x00058f41) cell_cmode_itu_pane_t2

0x0001,

0xfdcd,	// (0x0005aa63) cell_cmode_itu_pane_t

0xda08,	// (0x0005869e) aid_touch_ctrl_left

0xda10,	// (0x000586a6) aid_touch_ctrl_right

0x750d,	// (0x000521a3) compa_mode_pane

0xe2b9,	// (0x00058f4f) aid_cmod_rocker_key_size_cp

0xe2c3,	// (0x00058f59) aid_cmode_itu_key_size_cp

0xe2cd,	// (0x00058f63) compa_mode_pane_g1

0xe2d5,	// (0x00058f6b) compa_mode_pane_g2

0xe2dd,	// (0x00058f73) compa_mode_pane_g3

0x0002,

0xfdd2,	// (0x0005aa68) compa_mode_pane_g

0xe2e5,	// (0x00058f7b) main_comp_mode_itu_pane_cp

0xe2ed,	// (0x00058f83) main_comp_mode_rocker_pane_cp

0xe2f5,	// (0x00058f8b) cell_cmode_itu_pane_cp_ParamLimits

0xe2f5,	// (0x00058f8b) cell_cmode_itu_pane_cp

0xe30a,	// (0x00058fa0) cell_cmode_rocker_pane_cp_ParamLimits

0xe30a,	// (0x00058fa0) cell_cmode_rocker_pane_cp

0x84ba,	// (0x00053150) bg_button_pane_cp06_cp_ParamLimits

0x84ba,	// (0x00053150) bg_button_pane_cp06_cp

0xc2e5,	// (0x00056f7b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2e5,	// (0x00056f7b) cell_cmode_rocker_pane_g1_cp

0xc067,	// (0x00056cfd) cell_cmode_rocker_pane_g2_cp

0x750d,	// (0x000521a3) bg_button_pane_cp07_cp

0xaf49,	// (0x00055bdf) cell_cmode_itu_pane_g1_cp

0xe31c,	// (0x00058fb2) cell_cmode_itu_pane_t1_cp

0xe31c,	// (0x00058fb2) cell_cmode_itu_pane_t2_cp

0xaf36,	// (0x00055bcc) settings_code_pane_cp2

0x7601,	// (0x00052297) bg_popup_window_pane_cp3_ParamLimits

0x80a5,	// (0x00052d3b) heading_pane_cp3_ParamLimits

0x80b1,	// (0x00052d47) listscroll_popup_graphic_pane_ParamLimits

0x67ca,	// (0x00051460) fep_hwr_aid_pane_ParamLimits

0x6c42,	// (0x000518d8) aid_touch_sctrl_top_ParamLimits

0x6c5d,	// (0x000518f3) sctrl_sk_top_pane_g1_ParamLimits

0x6a21,	// (0x000516b7) sctrl_sk_top_pane_g2_ParamLimits

0xfd08,	// (0x0005a99e) sctrl_sk_top_pane_g_ParamLimits

0x6c6a,	// (0x00051900) sctrl_sk_top_pane_t1_ParamLimits

0x6c42,	// (0x000518d8) aid_touch_sctrl_bottom_ParamLimits

0x6c6a,	// (0x00051900) sctrl_sk_bottom_pane_t1_ParamLimits

0xd951,	// (0x000585e7) aid_area_touch_clock

0x6e53,	// (0x00051ae9) aid_vkb2_area_top_pane_cell_ParamLimits

0x6e53,	// (0x00051ae9) aid_vkb2_area_top_pane_cell

0x6f9e,	// (0x00051c34) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6f9e,	// (0x00051c34) aid_vkb2_area_bottom_pane_cell

0xdeb2,	// (0x00058b48) popup_char_count_window

0xe32a,	// (0x00058fc0) popup_char_count_window_g1

0xe333,	// (0x00058fc9) popup_char_count_window_g2

0xe33c,	// (0x00058fd2) popup_char_count_window_g3

0x0002,

0xfdd9,	// (0x0005aa6f) popup_char_count_window_g

0xe345,	// (0x00058fdb) popup_char_count_window_t1

0x6d19,	// (0x000519af) popup_fep_char_preview_window_ParamLimits

0x6d19,	// (0x000519af) popup_fep_char_preview_window

0x6e71,	// (0x00051b07) vkb2_top_candi_pane_ParamLimits

0x6e71,	// (0x00051b07) vkb2_top_candi_pane

0xe353,	// (0x00058fe9) cell_vkb2_top_candi_pane_ParamLimits

0xe353,	// (0x00058fe9) cell_vkb2_top_candi_pane

0x7281,	// (0x00051f17) bg_popup_fep_char_preview_window_ParamLimits

0x7281,	// (0x00051f17) bg_popup_fep_char_preview_window

0x728f,	// (0x00051f25) popup_fep_char_preview_window_t1_ParamLimits

0x728f,	// (0x00051f25) popup_fep_char_preview_window_t1

0xe3c1,	// (0x00059057) bg_popup_fep_char_preview_window_g1

0xe3c9,	// (0x0005905f) bg_popup_fep_char_preview_window_g2

0xe3d1,	// (0x00059067) bg_popup_fep_char_preview_window_g3

0xe3d9,	// (0x0005906f) bg_popup_fep_char_preview_window_g4

0xe3e1,	// (0x00059077) bg_popup_fep_char_preview_window_g5

0x72c9,	// (0x00051f5f) bg_popup_fep_char_preview_window_g6

0xe3e9,	// (0x0005907f) bg_popup_fep_char_preview_window_g7

0xe3f1,	// (0x00059087) bg_popup_fep_char_preview_window_g8

0xe3f9,	// (0x0005908f) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde0,	// (0x0005aa76) bg_popup_fep_char_preview_window_g

0x6a21,	// (0x000516b7) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6a21,	// (0x000516b7) cell_vkb2_top_candi_pane_g1

0x6a2f,	// (0x000516c5) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6a2f,	// (0x000516c5) cell_vkb2_top_candi_pane_g2

0xe3a0,	// (0x00059036) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe3a0,	// (0x00059036) cell_vkb2_top_candi_pane_g3

0x72d1,	// (0x00051f67) cell_vkb2_top_candi_pane_g4_ParamLimits

0x72d1,	// (0x00051f67) cell_vkb2_top_candi_pane_g4

0xc7b0,	// (0x00057446) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc7b0,	// (0x00057446) cell_vkb2_top_candi_pane_g5

0x72f2,	// (0x00051f88) cell_vkb2_top_candi_pane_g6_ParamLimits

0x72f2,	// (0x00051f88) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf3,	// (0x0005aa89) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf3,	// (0x0005aa89) cell_vkb2_top_candi_pane_g

0x7300,	// (0x00051f96) cell_vkb2_top_candi_pane_t1

0x64b2,	// (0x00051148) aid_size_touch_slider_mark_ParamLimits

0x64b2,	// (0x00051148) aid_size_touch_slider_mark

0xdff5,	// (0x00058c8b) grid_graphic2_catg_pane_ParamLimits

0xdff5,	// (0x00058c8b) grid_graphic2_catg_pane

0xe093,	// (0x00058d29) popup_grid_graphic2_window_t1_ParamLimits

0xe093,	// (0x00058d29) popup_grid_graphic2_window_t1

0xe0a5,	// (0x00058d3b) popup_grid_graphic2_window_t2_ParamLimits

0xe0a5,	// (0x00058d3b) popup_grid_graphic2_window_t2

0x0001,

0xfdae,	// (0x0005aa44) popup_grid_graphic2_window_t_ParamLimits

0xfdae,	// (0x0005aa44) popup_grid_graphic2_window_t

0x788a,	// (0x00052520) bg_button_pane_cp05_ParamLimits

0xe20f,	// (0x00058ea5) cell_graphic2_control_pane_g1_ParamLimits

0xe401,	// (0x00059097) cell_graphic2_catg_pane_ParamLimits

0xe401,	// (0x00059097) cell_graphic2_catg_pane

0x750d,	// (0x000521a3) bg_button_pane_cp12

0xe413,	// (0x000590a9) cell_graphic2_catg_pane_g1

0xd91d,	// (0x000585b3) cell_tb_ext_pane_t1_ParamLimits

0x70bb,	// (0x00051d51) vkb2_top_cell_right_narrow_pane_ParamLimits

0x70bb,	// (0x00051d51) vkb2_top_cell_right_narrow_pane

0x70d3,	// (0x00051d69) vkb2_top_cell_right_wide_pane_ParamLimits

0x70d3,	// (0x00051d69) vkb2_top_cell_right_wide_pane

0x67bc,	// (0x00051452) bg_vkb2_func_pane_ParamLimits

0x67bc,	// (0x00051452) bg_vkb2_func_pane

0x7144,	// (0x00051dda) vkb2_top_cell_left_pane_g1_ParamLimits

0x67bc,	// (0x00051452) bg_vkb2_fuc_pane_cp03_ParamLimits

0x67bc,	// (0x00051452) bg_vkb2_fuc_pane_cp03

0x71a2,	// (0x00051e38) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x996c,	// (0x00054602) bg_vkb2_func_pane_g1

0x9974,	// (0x0005460a) bg_vkb2_func_pane_g2

0x9984,	// (0x0005461a) bg_vkb2_func_pane_g3

0x997c,	// (0x00054612) bg_vkb2_func_pane_g4

0x998c,	// (0x00054622) bg_vkb2_func_pane_g5

0x9994,	// (0x0005462a) bg_vkb2_func_pane_g6

0x999c,	// (0x00054632) bg_vkb2_func_pane_g7

0x99a4,	// (0x0005463a) bg_vkb2_func_pane_g8

0x9964,	// (0x000545fa) bg_vkb2_func_pane_g9

0x0008,

0xfe00,	// (0x0005aa96) bg_vkb2_func_pane_g

0x67bc,	// (0x00051452) bg_vkb2_fuc_pane_cp01_ParamLimits

0x67bc,	// (0x00051452) bg_vkb2_fuc_pane_cp01

0x7144,	// (0x00051dda) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7144,	// (0x00051dda) vkb2_top_cell_right_wide_pane_g1

0x67bc,	// (0x00051452) bg_vkb2_fuc_pane_cp02_ParamLimits

0x67bc,	// (0x00051452) bg_vkb2_fuc_pane_cp02

0x71a2,	// (0x00051e38) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x71a2,	// (0x00051e38) vkb2_top_cell_right_narrow_pane_g1

0xd551,	// (0x000581e7) aid_touch_area_decrease_ParamLimits

0xd551,	// (0x000581e7) aid_touch_area_decrease

0xd56f,	// (0x00058205) aid_touch_area_increase_ParamLimits

0xd56f,	// (0x00058205) aid_touch_area_increase

0xd57b,	// (0x00058211) aid_touch_area_mute_ParamLimits

0xd57b,	// (0x00058211) aid_touch_area_mute

0xd59f,	// (0x00058235) aid_touch_area_slider_ParamLimits

0xd59f,	// (0x00058235) aid_touch_area_slider

0xd68b,	// (0x00058321) popup_slider_window_g4_ParamLimits

0xd68b,	// (0x00058321) popup_slider_window_g4

0xd697,	// (0x0005832d) popup_slider_window_g5_ParamLimits

0xd697,	// (0x0005832d) popup_slider_window_g5

0xd6b9,	// (0x0005834f) popup_slider_window_g6_ParamLimits

0xd6b9,	// (0x0005834f) popup_slider_window_g6

0xd6f9,	// (0x0005838f) popup_slider_window_t2_ParamLimits

0xd6f9,	// (0x0005838f) popup_slider_window_t2

0x0001,

0xfcfc,	// (0x0005a992) popup_slider_window_t_ParamLimits

0xfcfc,	// (0x0005a992) popup_slider_window_t

0xd711,	// (0x000583a7) slider_pane_ParamLimits

0xd711,	// (0x000583a7) slider_pane

0xe41c,	// (0x000590b2) slider_pane_g1_ParamLimits

0xe41c,	// (0x000590b2) slider_pane_g1

0xe430,	// (0x000590c6) slider_pane_g2_ParamLimits

0xe430,	// (0x000590c6) slider_pane_g2

0xe446,	// (0x000590dc) slider_pane_g3_ParamLimits

0xe446,	// (0x000590dc) slider_pane_g3

0x0003,

0xfe13,	// (0x0005aaa9) slider_pane_g_ParamLimits

0xfe13,	// (0x0005aaa9) slider_pane_g

0x6029,	// (0x00050cbf) popup_tb_float_extension_window_ParamLimits

0x6029,	// (0x00050cbf) popup_tb_float_extension_window

0xe472,	// (0x00059108) aid_size_cell_tb_float_ext

0x750d,	// (0x000521a3) bg_popup_sub_window_cp28

0xe47e,	// (0x00059114) grid_tb_float_ext_pane

0xe488,	// (0x0005911e) cell_tb_float_ext_pane_ParamLimits

0xe488,	// (0x0005911e) cell_tb_float_ext_pane

0xe4a2,	// (0x00059138) cell_tb_float_ext_pane_g1

0xe4ab,	// (0x00059141) grid_highlight_pane_cp12

0x690b,	// (0x000515a1) cell_last_hwr_side_pane_ParamLimits

0x690b,	// (0x000515a1) cell_last_hwr_side_pane

0xc067,	// (0x00056cfd) cell_last_hwr_side_pane_g1

0xe4b4,	// (0x0005914a) cell_last_hwr_side_pane_g2

0x0001,

0xfe1c,	// (0x0005aab2) cell_last_hwr_side_pane_g

0x706a,	// (0x00051d00) vkb2_area_bottom_space_btn_pane_ParamLimits

0x706a,	// (0x00051d00) vkb2_area_bottom_space_btn_pane

0x6a21,	// (0x000516b7) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf67,	// (0x00058bfd) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7300,	// (0x00051f96) cell_vkb2_top_candi_pane_t1_ParamLimits

0x731f,	// (0x00051fb5) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x731f,	// (0x00051fb5) vkb2_area_bottom_space_btn_pane_g1

0x7359,	// (0x00051fef) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7359,	// (0x00051fef) vkb2_area_bottom_space_btn_pane_g2

0x738f,	// (0x00052025) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x738f,	// (0x00052025) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe21,	// (0x0005aab7) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe21,	// (0x0005aab7) vkb2_area_bottom_space_btn_pane_g

0x687f,	// (0x00051515) cel_fep_hwr_func_pane_ParamLimits

0x687f,	// (0x00051515) cel_fep_hwr_func_pane

0x68bb,	// (0x00051551) cell_hwr_side_button_pane_ParamLimits

0x68bb,	// (0x00051551) cell_hwr_side_button_pane

0xd951,	// (0x000585e7) aid_area_touch_clock_ParamLimits

0x788a,	// (0x00052520) bg_uniindi_top_pane_ParamLimits

0xd963,	// (0x000585f9) uniindi_top_pane_g1_ParamLimits

0xd979,	// (0x0005860f) uniindi_top_pane_g2_ParamLimits

0xd985,	// (0x0005861b) uniindi_top_pane_g3_ParamLimits

0xd996,	// (0x0005862c) uniindi_top_pane_g4_ParamLimits

0xfd34,	// (0x0005a9ca) uniindi_top_pane_g_ParamLimits

0xd9a3,	// (0x00058639) uniindi_top_pane_t1_ParamLimits

0x788a,	// (0x00052520) bg_vkb2_func_pane_cp01_ParamLimits

0x788a,	// (0x00052520) bg_vkb2_func_pane_cp01

0xe4bd,	// (0x00059153) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4bd,	// (0x00059153) cel_fep_hwr_func_pane_g1

0x788a,	// (0x00052520) bg_vkb2_func_pane_cp02_ParamLimits

0x788a,	// (0x00052520) bg_vkb2_func_pane_cp02

0xe4bd,	// (0x00059153) cell_hwr_side_button_pane_g1_ParamLimits

0xe4bd,	// (0x00059153) cell_hwr_side_button_pane_g1

0x97dc,	// (0x00054472) status_pane_g4_ParamLimits

0x97dc,	// (0x00054472) status_pane_g4

0x97f6,	// (0x0005448c) status_pane_t1

0xbda1,	// (0x00056a37) form2_midp_gauge_slider_cont_pane

0xbda9,	// (0x00056a3f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbdbb,	// (0x00056a51) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbdcd,	// (0x00056a63) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x0005a78a) form2_midp_gauge_slider_pane_t_ParamLimits

0xbddf,	// (0x00056a75) form2_midp_slider_pane_ParamLimits

0x6cd9,	// (0x0005196f) aid_size_cell_func_vkb2_ParamLimits

0x6cd9,	// (0x0005196f) aid_size_cell_func_vkb2

0xe45e,	// (0x000590f4) slider_pane_g4_ParamLimits

0xe45e,	// (0x000590f4) slider_pane_g4

0x73d9,	// (0x0005206f) form2_midp_gauge_slider_pane_t2_cp01

0x73e7,	// (0x0005207d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x73e7,	// (0x0005207d) form2_midp_gauge_slider_pane_t3_cp01

0x7404,	// (0x0005209a) form2_midp_slider_pane_cp01

0x750d,	// (0x000521a3) navi_smil_pane

0xe4f6,	// (0x0005918c) navi_smil_pane_g1

0xe4fe,	// (0x00059194) navi_smil_pane_t1

0xe4cb,	// (0x00059161) form2_midp_slider_pane_g1

0xe4d4,	// (0x0005916a) form2_midp_slider_pane_g2

0xe4dc,	// (0x00059172) form2_midp_slider_pane_g3

0xe4cb,	// (0x00059161) form2_midp_slider_pane_g4

0xe4e4,	// (0x0005917a) form2_midp_slider_pane_g5

0x0004,

0xfe2a,	// (0x0005aac0) form2_midp_slider_pane_g

0x73c9,	// (0x0005205f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x73c9,	// (0x0005205f) vkb2_area_bottom_space_btn_pane_g4

0x9619,	// (0x000542af) lc0_navi_pane_ParamLimits

0x9619,	// (0x000542af) lc0_navi_pane

0x968f,	// (0x00054325) lc0_stat_indi_pane_ParamLimits

0x968f,	// (0x00054325) lc0_stat_indi_pane

0x96a6,	// (0x0005433c) ls0_title_pane_ParamLimits

0x96a6,	// (0x0005433c) ls0_title_pane

0x84ba,	// (0x00053150) bg_popup_sub_pane_cp14_ParamLimits

0xd938,	// (0x000585ce) list_uniindi_pane_ParamLimits

0xd944,	// (0x000585da) uniindi_top_pane_ParamLimits

0xd9e0,	// (0x00058676) list_single_uniindi_pane_g1_ParamLimits

0xd9f3,	// (0x00058689) list_single_uniindi_pane_t1_ParamLimits

0x740d,	// (0x000520a3) lc0_stat_clock_pane_ParamLimits

0x740d,	// (0x000520a3) lc0_stat_clock_pane

0xe50c,	// (0x000591a2) lc0_stat_indi_pane_g1_ParamLimits

0xe50c,	// (0x000591a2) lc0_stat_indi_pane_g1

0xe519,	// (0x000591af) lc0_stat_indi_pane_g2_ParamLimits

0xe519,	// (0x000591af) lc0_stat_indi_pane_g2

0x0001,

0xfe35,	// (0x0005aacb) lc0_stat_indi_pane_g_ParamLimits

0xfe35,	// (0x0005aacb) lc0_stat_indi_pane_g

0x741a,	// (0x000520b0) lc0_uni_indicator_pane_ParamLimits

0x741a,	// (0x000520b0) lc0_uni_indicator_pane

0xe526,	// (0x000591bc) ls0_title_pane_g1_ParamLimits

0xe526,	// (0x000591bc) ls0_title_pane_g1

0xe53a,	// (0x000591d0) ls0_title_pane_t1_ParamLimits

0xe53a,	// (0x000591d0) ls0_title_pane_t1

0x7427,	// (0x000520bd) lc0_uni_indicator_pane_g1_ParamLimits

0x7427,	// (0x000520bd) lc0_uni_indicator_pane_g1

0xe570,	// (0x00059206) lc0_stat_clock_pane_t1

0x4ae7,	// (0x0004f77d) main_ai5_pane

0xe57e,	// (0x00059214) ai5_sk_pane_ParamLimits

0xe57e,	// (0x00059214) ai5_sk_pane

0xe58b,	// (0x00059221) cell_ai5_widget_pane_ParamLimits

0xe58b,	// (0x00059221) cell_ai5_widget_pane

0xe641,	// (0x000592d7) aid_size_cell_widget_grid

0xe657,	// (0x000592ed) bg_ai5_widget_pane_ParamLimits

0xe657,	// (0x000592ed) bg_ai5_widget_pane

0xe6c1,	// (0x00059357) cell_ai5_widget_pane_g2

0xe6d1,	// (0x00059367) cell_ai5_widget_pane_g3

0xe6f0,	// (0x00059386) cell_ai5_widget_pane_g4

0xe6fc,	// (0x00059392) cell_ai5_widget_pane_g5

0xe708,	// (0x0005939e) cell_ai5_widget_pane_g6

0xe714,	// (0x000593aa) cell_ai5_widget_pane_g7

0xe75c,	// (0x000593f2) cell_ai5_widget_pane_t1_ParamLimits

0xe75c,	// (0x000593f2) cell_ai5_widget_pane_t1

0xe779,	// (0x0005940f) cell_ai5_widget_pane_t2_ParamLimits

0xe779,	// (0x0005940f) cell_ai5_widget_pane_t2

0xe791,	// (0x00059427) cell_ai5_widget_pane_t3_ParamLimits

0xe791,	// (0x00059427) cell_ai5_widget_pane_t3

0xe7a9,	// (0x0005943f) cell_ai5_widget_pane_t4_ParamLimits

0xe7a9,	// (0x0005943f) cell_ai5_widget_pane_t4

0xe7c3,	// (0x00059459) cell_ai5_widget_pane_t5_ParamLimits

0xe7c3,	// (0x00059459) cell_ai5_widget_pane_t5

0xe7e2,	// (0x00059478) cell_ai5_widget_pane_t6_ParamLimits

0xe7e2,	// (0x00059478) cell_ai5_widget_pane_t6

0xe7f4,	// (0x0005948a) cell_ai5_widget_pane_t7_ParamLimits

0xe7f4,	// (0x0005948a) cell_ai5_widget_pane_t7

0xe80d,	// (0x000594a3) cell_ai5_widget_pane_t8_ParamLimits

0xe80d,	// (0x000594a3) cell_ai5_widget_pane_t8

0x0009,

0xfe4f,	// (0x0005aae5) cell_ai5_widget_pane_t_ParamLimits

0xfe4f,	// (0x0005aae5) cell_ai5_widget_pane_t

0xe859,	// (0x000594ef) grid_ai5_widget_pane

0x84ba,	// (0x00053150) highlight_cell_ai5_widget_pane_ParamLimits

0x84ba,	// (0x00053150) highlight_cell_ai5_widget_pane

0xe871,	// (0x00059507) ai5_sk_left_pane

0xe87b,	// (0x00059511) ai5_sk_middle_pane

0xe885,	// (0x0005951b) ai5_sk_right_pane

0xe88f,	// (0x00059525) bg_ai5_widget_pane_g1_ParamLimits

0xe88f,	// (0x00059525) bg_ai5_widget_pane_g1

0xe89b,	// (0x00059531) bg_ai5_widget_pane_g2_ParamLimits

0xe89b,	// (0x00059531) bg_ai5_widget_pane_g2

0xe8a7,	// (0x0005953d) bg_ai5_widget_pane_g3_ParamLimits

0xe8a7,	// (0x0005953d) bg_ai5_widget_pane_g3

0xe8b3,	// (0x00059549) bg_ai5_widget_pane_g4_ParamLimits

0xe8b3,	// (0x00059549) bg_ai5_widget_pane_g4

0xe8bf,	// (0x00059555) bg_ai5_widget_pane_g5_ParamLimits

0xe8bf,	// (0x00059555) bg_ai5_widget_pane_g5

0xe8cb,	// (0x00059561) bg_ai5_widget_pane_g6_ParamLimits

0xe8cb,	// (0x00059561) bg_ai5_widget_pane_g6

0xe8d7,	// (0x0005956d) bg_ai5_widget_pane_g7_ParamLimits

0xe8d7,	// (0x0005956d) bg_ai5_widget_pane_g7

0xe8e3,	// (0x00059579) bg_ai5_widget_pane_g8_ParamLimits

0xe8e3,	// (0x00059579) bg_ai5_widget_pane_g8

0xe8ef,	// (0x00059585) bg_ai5_widget_pane_g9_ParamLimits

0xe8ef,	// (0x00059585) bg_ai5_widget_pane_g9

0x0008,

0xfe64,	// (0x0005aafa) bg_ai5_widget_pane_g_ParamLimits

0xfe64,	// (0x0005aafa) bg_ai5_widget_pane_g

0xe922,	// (0x000595b8) cell_shortcut_ai5_widget_pane_ParamLimits

0xe922,	// (0x000595b8) cell_shortcut_ai5_widget_pane

0x9114,	// (0x00053daa) bg_cell_shortcut_ai5_widget_pane

0xe933,	// (0x000595c9) cell_grid_ai5_widget_pane_g1

0xe93c,	// (0x000595d2) highlight_cell_shortcut_ai5_widget_pane

0x996c,	// (0x00054602) ai5_sk_left_pane_g1

0xe944,	// (0x000595da) ai5_sk_left_pane_g2

0xe94c,	// (0x000595e2) ai5_sk_left_pane_g3

0xe954,	// (0x000595ea) ai5_sk_left_pane_g4

0x0003,

0xfe77,	// (0x0005ab0d) ai5_sk_left_pane_g

0xe95c,	// (0x000595f2) ai5_sk_left_pane_t1

0x9974,	// (0x0005460a) ai5_sk_right_pane_g1

0xe96a,	// (0x00059600) ai5_sk_right_pane_g2

0xe972,	// (0x00059608) ai5_sk_right_pane_g3

0xe97a,	// (0x00059610) ai5_sk_right_pane_g4

0x0003,

0xfe80,	// (0x0005ab16) ai5_sk_right_pane_g

0xe982,	// (0x00059618) ai5_sk_right_pane_t1

0x9974,	// (0x0005460a) ai5_sk_middle_pane_g1

0x996c,	// (0x00054602) ai5_sk_middle_pane_g2

0x998c,	// (0x00054622) ai5_sk_middle_pane_g3

0xe972,	// (0x00059608) ai5_sk_middle_pane_g4

0xe94c,	// (0x000595e2) ai5_sk_middle_pane_g5

0xe990,	// (0x00059626) ai5_sk_middle_pane_g6

0xe998,	// (0x0005962e) ai5_sk_middle_pane_g7

0x0006,

0xfe89,	// (0x0005ab1f) ai5_sk_middle_pane_g

0x949a,	// (0x00054130) aid_touch_area_size_lc0_ParamLimits

0x949a,	// (0x00054130) aid_touch_area_size_lc0

0x6a50,	// (0x000516e6) cell_hwr_candidate_pane_t1_ParamLimits

0x94b6,	// (0x0005414c) aid_touch_navi_pane

0x978e,	// (0x00054424) status_dt_navi_pane_ParamLimits

0x978e,	// (0x00054424) status_dt_navi_pane

0x979b,	// (0x00054431) status_dt_sta_pane_ParamLimits

0x979b,	// (0x00054431) status_dt_sta_pane

0xe9a0,	// (0x00059636) dt_sta_controll_pane

0xe9ad,	// (0x00059643) dt_sta_indi_pane

0xe9ba,	// (0x00059650) dt_sta_title_pane

0x788a,	// (0x00052520) bg_dt_sta_indi_pane_ParamLimits

0x788a,	// (0x00052520) bg_dt_sta_indi_pane

0xe9cb,	// (0x00059661) dt_sta_battery_pane

0xe9d3,	// (0x00059669) dt_sta_indi_pane_g1

0xe9dc,	// (0x00059672) dt_sta_indi_pane_g2

0xe9e5,	// (0x0005967b) dt_sta_indi_pane_g3

0x0002,

0xfe98,	// (0x0005ab2e) dt_sta_indi_pane_g

0xe9ee,	// (0x00059684) dt_sta_signal_pane

0x84ba,	// (0x00053150) bg_dt_sta_title_pane_ParamLimits

0x84ba,	// (0x00053150) bg_dt_sta_title_pane

0xe9f7,	// (0x0005968d) dt_sta_title_pane_g1

0xe9ff,	// (0x00059695) dt_sta_title_pane_t1_ParamLimits

0xe9ff,	// (0x00059695) dt_sta_title_pane_t1

0x750d,	// (0x000521a3) bg_dt_sta_control_pane

0xea14,	// (0x000596aa) dt_sta_controll_pane_g1

0xea1d,	// (0x000596b3) bg_dt_sta_title_pane_g1

0xea26,	// (0x000596bc) bg_dt_sta_title_pane_g2

0xea2f,	// (0x000596c5) bg_dt_sta_title_pane_g3

0x0002,

0xfe9f,	// (0x0005ab35) bg_dt_sta_title_pane_g

0xc067,	// (0x00056cfd) bg_dt_sta_indi_pane_g1

0xea38,	// (0x000596ce) dt_sta_signal_pane_g1

0xea40,	// (0x000596d6) dt_sta_signal_pane_g2

0x0001,

0xfea6,	// (0x0005ab3c) dt_sta_signal_pane_g

0xea48,	// (0x000596de) dt_sta_battery_pane_g1

0xea51,	// (0x000596e7) dt_sta_battery_pane_t1

0xc067,	// (0x00056cfd) bg_dt_sta_control_pane_g1

0x8c2a,	// (0x000538c0) fep_china_uni_eep_pane

0x8c32,	// (0x000538c8) fep_china_uni_entry_pane_ParamLimits

0x8c42,	// (0x000538d8) popup_fep_china_uni_window_g1_ParamLimits

0x8c52,	// (0x000538e8) popup_fep_china_uni_window_g2_ParamLimits

0x8c52,	// (0x000538e8) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0005a3be) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0005a3be) popup_fep_china_uni_window_g

0xea60,	// (0x000596f6) fep_china_uni_eep_pane_g1

0xea68,	// (0x000596fe) fep_china_uni_eep_pane_t1

0xe4ed,	// (0x00059183) aid_touch_area_size_smil_player

0x9611,	// (0x000542a7) lc0_clock_pane

0x97ea,	// (0x00054480) status_pane_g5_ParamLimits

0x97ea,	// (0x00054480) status_pane_g5

0x5cee,	// (0x00050984) popup_keymap_window

0x97b0,	// (0x00054446) status_icon_pane

0xe6d1,	// (0x00059367) cell_ai5_widget_pane_g3_ParamLimits

0xe6f0,	// (0x00059386) cell_ai5_widget_pane_g4_ParamLimits

0xe6fc,	// (0x00059392) cell_ai5_widget_pane_g5_ParamLimits

0xe720,	// (0x000593b6) cell_ai5_widget_pane_g8_ParamLimits

0xe720,	// (0x000593b6) cell_ai5_widget_pane_g8

0xe734,	// (0x000593ca) cell_ai5_widget_pane_g9_ParamLimits

0xe734,	// (0x000593ca) cell_ai5_widget_pane_g9

0xe748,	// (0x000593de) cell_ai5_widget_pane_g10_ParamLimits

0xe748,	// (0x000593de) cell_ai5_widget_pane_g10

0xea77,	// (0x0005970d) status_icon_pane_g1

0x750d,	// (0x000521a3) bg_popup_sub_pane_cp13

0xea7f,	// (0x00059715) popup_keymap_window_t1

0x93df,	// (0x00054075) control_pane_g6_ParamLimits

0x93df,	// (0x00054075) control_pane_g6

0x93ec,	// (0x00054082) control_pane_g7_ParamLimits

0x93ec,	// (0x00054082) control_pane_g7

0x93f9,	// (0x0005408f) control_pane_g8_ParamLimits

0x93f9,	// (0x0005408f) control_pane_g8

0xe9a0,	// (0x00059636) dt_sta_controll_pane_ParamLimits

0xe9ad,	// (0x00059643) dt_sta_indi_pane_ParamLimits

0xe9ba,	// (0x00059650) dt_sta_title_pane_ParamLimits

0x83e6,	// (0x0005307c) aid_size_touch_scroll_bar_cale

0x4bc0,	// (0x0004f856) popup_discreet_window_ParamLimits

0x4bc0,	// (0x0004f856) popup_discreet_window

0x4c48,	// (0x0004f8de) popup_sk_window

0xa061,	// (0x00054cf7) bg_popup_sub_pane_cp28_ParamLimits

0xa061,	// (0x00054cf7) bg_popup_sub_pane_cp28

0xea8d,	// (0x00059723) popup_discreet_window_g1_ParamLimits

0xea8d,	// (0x00059723) popup_discreet_window_g1

0xeaad,	// (0x00059743) popup_discreet_window_t1_ParamLimits

0xeaad,	// (0x00059743) popup_discreet_window_t1

0xeacb,	// (0x00059761) popup_discreet_window_t2_ParamLimits

0xeacb,	// (0x00059761) popup_discreet_window_t2

0x0002,

0xfeab,	// (0x0005ab41) popup_discreet_window_t_ParamLimits

0xfeab,	// (0x0005ab41) popup_discreet_window_t

0x743b,	// (0x000520d1) popup_sk_window_g1

0x7445,	// (0x000520db) popup_sk_window_g2

0x0001,

0xfeb2,	// (0x0005ab48) popup_sk_window_g

0x744f,	// (0x000520e5) popup_sk_window_t1

0x745d,	// (0x000520f3) popup_sk_window_t1_copy1

0xe6c1,	// (0x00059357) cell_ai5_widget_pane_g2_ParamLimits

0xe81f,	// (0x000594b5) cell_ai5_widget_pane_t9_ParamLimits

0xe81f,	// (0x000594b5) cell_ai5_widget_pane_t9

0x750d,	// (0x000521a3) main_fep_fshwr2_pane

0x746b,	// (0x00052101) aid_fshwr2_btn_pane

0x7477,	// (0x0005210d) aid_fshwr2_syb_pane

0x7488,	// (0x0005211e) aid_fshwr2_txt_pane

0x7494,	// (0x0005212a) fshwr2_func_candi_pane

0x74a9,	// (0x0005213f) fshwr2_hwr_syb_pane

0x74c0,	// (0x00052156) fshwr2_icf_pane

0x750d,	// (0x000521a3) fshwr2_icf_bg_pane

0xeb1d,	// (0x000597b3) fshwr2_icf_pane_t1_ParamLimits

0xeb1d,	// (0x000597b3) fshwr2_icf_pane_t1

0xc067,	// (0x00056cfd) fshwr2_func_candi_pane_g1

0xeb34,	// (0x000597ca) fshwr2_func_candi_row_pane_ParamLimits

0xeb34,	// (0x000597ca) fshwr2_func_candi_row_pane

0xeb45,	// (0x000597db) cell_fshwr2_syb_pane_ParamLimits

0xeb45,	// (0x000597db) cell_fshwr2_syb_pane

0xc2e5,	// (0x00056f7b) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc2e5,	// (0x00056f7b) fshwr2_hwr_syb_pane_g1

0x750d,	// (0x000521a3) bg_popup_call_pane_cp01

0xeb5f,	// (0x000597f5) fshwr2_func_candi_cell_pane_ParamLimits

0xeb5f,	// (0x000597f5) fshwr2_func_candi_cell_pane

0xeb90,	// (0x00059826) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeb90,	// (0x00059826) fshwr2_func_candi_cell_bg_pane

0xebaa,	// (0x00059840) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xebaa,	// (0x00059840) fshwr2_func_candi_cell_pane_g1

0xebd2,	// (0x00059868) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xebd2,	// (0x00059868) fshwr2_func_candi_cell_pane_t1

0x750d,	// (0x000521a3) bg_button_pane_cp08

0x9114,	// (0x00053daa) cell_fshwr2_syb_bg_pane

0xebe5,	// (0x0005987b) cell_fshwr2_syb_bg_pane_g1

0xebed,	// (0x00059883) cell_fshwr2_syb_bg_pane_t1

0x84ba,	// (0x00053150) main_tmo_pane

0xab83,	// (0x00055819) uni_indicator_pane_g1_ParamLimits

0xab98,	// (0x0005582e) uni_indicator_pane_g2_ParamLimits

0xabae,	// (0x00055844) uni_indicator_pane_g3_ParamLimits

0xabc4,	// (0x0005585a) uni_indicator_pane_g4_ParamLimits

0xabc4,	// (0x0005585a) uni_indicator_pane_g4

0xabd8,	// (0x0005586e) uni_indicator_pane_g5_ParamLimits

0xabd8,	// (0x0005586e) uni_indicator_pane_g5

0xabec,	// (0x00055882) uni_indicator_pane_g6_ParamLimits

0xabec,	// (0x00055882) uni_indicator_pane_g6

0xf92c,	// (0x0005a5c2) uni_indicator_pane_g_ParamLimits

0xd52d,	// (0x000581c3) popup_tmo_note_window_ParamLimits

0xd52d,	// (0x000581c3) popup_tmo_note_window

0x6cbb,	// (0x00051951) fshwr2_bg_pane

0xebc3,	// (0x00059859) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xebc3,	// (0x00059859) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb7,	// (0x0005ab4d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb7,	// (0x0005ab4d) fshwr2_func_candi_cell_pane_g

0xc067,	// (0x00056cfd) bg_popup_window_pane_cp01

0xebfc,	// (0x00059892) bg_popup_window_pane_g1_cp01

0xec05,	// (0x0005989b) bg_popup_window_pane_cp22_ParamLimits

0xec05,	// (0x0005989b) bg_popup_window_pane_cp22

0xec13,	// (0x000598a9) listscroll_tmo_link_pane_ParamLimits

0xec13,	// (0x000598a9) listscroll_tmo_link_pane

0xec53,	// (0x000598e9) popup_tmo_note_window_g1_ParamLimits

0xec53,	// (0x000598e9) popup_tmo_note_window_g1

0xec60,	// (0x000598f6) tmo_note_info_pane_ParamLimits

0xec60,	// (0x000598f6) tmo_note_info_pane

0xec7a,	// (0x00059910) list_tmo_note_info_pane_g1_ParamLimits

0xec7a,	// (0x00059910) list_tmo_note_info_pane_g1

0xec91,	// (0x00059927) list_tmo_note_info_pane_g2_ParamLimits

0xec91,	// (0x00059927) list_tmo_note_info_pane_g2

0x0001,

0xfebc,	// (0x0005ab52) list_tmo_note_info_pane_g_ParamLimits

0xfebc,	// (0x0005ab52) list_tmo_note_info_pane_g

0xecad,	// (0x00059943) list_tmo_note_info_text_pane_ParamLimits

0xecad,	// (0x00059943) list_tmo_note_info_text_pane

0xed2e,	// (0x000599c4) list_tmo_link_pane

0xed3b,	// (0x000599d1) scroll_pane_cp20

0xed48,	// (0x000599de) list_single_tmo_link_pane_ParamLimits

0xed48,	// (0x000599de) list_single_tmo_link_pane

0xed58,	// (0x000599ee) list_single_tmo_link_pane_t1

0xed66,	// (0x000599fc) list_tmo_note_info_text_pane_t1_ParamLimits

0xed66,	// (0x000599fc) list_tmo_note_info_text_pane_t1

0x8580,	// (0x00053216) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8580,	// (0x00053216) aid_size_touch_scroll_bar_cp01

0x53b1,	// (0x00050047) aid_size_touch_slider_marker

0x4c30,	// (0x0004f8c6) popup_settings_window_ParamLimits

0x4c30,	// (0x0004f8c6) popup_settings_window

0x5b75,	// (0x0005080b) popup_candi_list_indi_window

0x94b6,	// (0x0005414c) aid_touch_navi_pane_ParamLimits

0x6c16,	// (0x000518ac) rs_clock_indi_pane

0x6c1f,	// (0x000518b5) sctrl_sk_bottom_pane_ParamLimits

0x6c30,	// (0x000518c6) sctrl_sk_top_pane_ParamLimits

0x6d33,	// (0x000519c9) popup_fep_tooltip_window

0xe641,	// (0x000592d7) aid_size_cell_widget_grid_ParamLimits

0xe6b5,	// (0x0005934b) cell_ai5_widget_pane_g1_ParamLimits

0xe6b5,	// (0x0005934b) cell_ai5_widget_pane_g1

0xe708,	// (0x0005939e) cell_ai5_widget_pane_g6_ParamLimits

0xe714,	// (0x000593aa) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3a,	// (0x0005aad0) cell_ai5_widget_pane_g_ParamLimits

0xfe3a,	// (0x0005aad0) cell_ai5_widget_pane_g

0xe843,	// (0x000594d9) cell_ai5_widget_pane_t10_ParamLimits

0xe843,	// (0x000594d9) cell_ai5_widget_pane_t10

0xe859,	// (0x000594ef) grid_ai5_widget_pane_ParamLimits

0xe8fb,	// (0x00059591) cell_contacts_ai5_widget_pane_ParamLimits

0xe8fb,	// (0x00059591) cell_contacts_ai5_widget_pane

0xeae0,	// (0x00059776) popup_discreet_window_t3_ParamLimits

0xeae0,	// (0x00059776) popup_discreet_window_t3

0x74d5,	// (0x0005216b) popup_fshwr2_char_preview_window_ParamLimits

0x74d5,	// (0x0005216b) popup_fshwr2_char_preview_window

0xeccb,	// (0x00059961) tmo_note_info_pane_t1

0xece0,	// (0x00059976) tmo_note_info_pane_t2

0xecf5,	// (0x0005998b) tmo_note_info_pane_t3

0xed0a,	// (0x000599a0) tmo_note_info_pane_t4

0xed1c,	// (0x000599b2) tmo_note_info_pane_t5

0x0004,

0xfec1,	// (0x0005ab57) tmo_note_info_pane_t

0xed2e,	// (0x000599c4) list_tmo_link_pane_ParamLimits

0xed3b,	// (0x000599d1) scroll_pane_cp20_ParamLimits

0x750d,	// (0x000521a3) bg_popup_fep_char_preview_window_cp01

0xed7f,	// (0x00059a15) popup_fshwr2_char_preview_window_t1

0xed8d,	// (0x00059a23) popup_candi_list_indi_window_g1

0xed96,	// (0x00059a2c) bg_cell_contacts_ai5_widget_pane

0xeda2,	// (0x00059a38) cell_contacts_ai5_widget_pane_g1

0xedb6,	// (0x00059a4c) cell_contacts_ai5_widget_pane_g2

0xedc2,	// (0x00059a58) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecc,	// (0x0005ab62) cell_contacts_ai5_widget_pane_g

0xedd5,	// (0x00059a6b) cell_contacts_ai5_widget_pane_t1

0x84ba,	// (0x00053150) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee4c,	// (0x00059ae2) settings_container_pane

0x9114,	// (0x00053daa) listscroll_set_pane_copy1

0xb6cb,	// (0x00056361) scroll_pane_cp121_copy1

0xee58,	// (0x00059aee) set_content_pane_copy1

0xee60,	// (0x00059af6) aid_height_set_list_copy1_ParamLimits

0xee60,	// (0x00059af6) aid_height_set_list_copy1

0xade4,	// (0x00055a7a) aid_size_parent_copy1_ParamLimits

0xade4,	// (0x00055a7a) aid_size_parent_copy1

0xee6c,	// (0x00059b02) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee6c,	// (0x00059b02) button_value_adjust_pane_cp6_copy1

0x9454,	// (0x000540ea) list_highlight_pane_cp2_copy1_ParamLimits

0x9454,	// (0x000540ea) list_highlight_pane_cp2_copy1

0xee80,	// (0x00059b16) list_set_pane_copy1_ParamLimits

0xee80,	// (0x00059b16) list_set_pane_copy1

0xede7,	// (0x00059a7d) main_pane_set_t1_copy1_ParamLimits

0xede7,	// (0x00059a7d) main_pane_set_t1_copy1

0xee21,	// (0x00059ab7) main_pane_set_t2_copy1_ParamLimits

0xee21,	// (0x00059ab7) main_pane_set_t2_copy1

0xef2d,	// (0x00059bc3) main_pane_set_t3_copy1

0xef3b,	// (0x00059bd1) main_pane_set_t4_copy1

0xee40,	// (0x00059ad6) set_content_pane_g1_copy1_ParamLimits

0xee40,	// (0x00059ad6) set_content_pane_g1_copy1

0xef49,	// (0x00059bdf) setting_code_pane_copy1

0xef51,	// (0x00059be7) setting_slider_graphic_pane_copy1

0xef51,	// (0x00059be7) setting_slider_pane_copy1

0xef51,	// (0x00059be7) setting_text_pane_copy1

0xef51,	// (0x00059be7) setting_volume_pane_copy1

0xef49,	// (0x00059bdf) settings_code_pane_cp2_copy1

0xef59,	// (0x00059bef) settings_code_pane_cp_copy1_ParamLimits

0xef59,	// (0x00059bef) settings_code_pane_cp_copy1

0xef6d,	// (0x00059c03) volume_set_pane_copy1

0xef75,	// (0x00059c0b) volume_set_pane_g10_copy1

0xef7d,	// (0x00059c13) volume_set_pane_g1_copy1

0xef85,	// (0x00059c1b) volume_set_pane_g2_copy1

0xef8d,	// (0x00059c23) volume_set_pane_g3_copy1

0xef95,	// (0x00059c2b) volume_set_pane_g4_copy1

0xef9d,	// (0x00059c33) volume_set_pane_g5_copy1

0xefa5,	// (0x00059c3b) volume_set_pane_g6_copy1

0xefad,	// (0x00059c43) volume_set_pane_g7_copy1

0xefb5,	// (0x00059c4b) volume_set_pane_g8_copy1

0xefbd,	// (0x00059c53) volume_set_pane_g9_copy1

0x7601,	// (0x00052297) bg_set_opt_pane_cp_copy1_ParamLimits

0x7601,	// (0x00052297) bg_set_opt_pane_cp_copy1

0xefc5,	// (0x00059c5b) setting_slider_pane_t1_copy1_ParamLimits

0xefc5,	// (0x00059c5b) setting_slider_pane_t1_copy1

0xefe3,	// (0x00059c79) setting_slider_pane_t2_copy1_ParamLimits

0xefe3,	// (0x00059c79) setting_slider_pane_t2_copy1

0xeffd,	// (0x00059c93) setting_slider_pane_t3_copy1_ParamLimits

0xeffd,	// (0x00059c93) setting_slider_pane_t3_copy1

0xf015,	// (0x00059cab) slider_set_pane_copy1_ParamLimits

0xf015,	// (0x00059cab) slider_set_pane_copy1

0x8521,	// (0x000531b7) set_opt_bg_pane_g1_copy2

0x8529,	// (0x000531bf) set_opt_bg_pane_g2_copy2

0xf02b,	// (0x00059cc1) set_opt_bg_pane_g3_copy2

0x8539,	// (0x000531cf) set_opt_bg_pane_g4_copy2

0x8541,	// (0x000531d7) set_opt_bg_pane_g5_copy2

0x8549,	// (0x000531df) set_opt_bg_pane_g6_copy2

0xf035,	// (0x00059ccb) set_opt_bg_pane_g7_copy2

0xf03d,	// (0x00059cd3) set_opt_bg_pane_g8_copy2

0xf047,	// (0x00059cdd) set_opt_bg_pane_g9_copy2

0xf051,	// (0x00059ce7) aid_size_touch_slider_mark_copy1_ParamLimits

0xf051,	// (0x00059ce7) aid_size_touch_slider_mark_copy1

0xf065,	// (0x00059cfb) slider_set_pane_g1_copy1

0xf06e,	// (0x00059d04) slider_set_pane_g2_copy1

0xb6ef,	// (0x00056385) slider_set_pane_g3_copy1_ParamLimits

0xb6ef,	// (0x00056385) slider_set_pane_g3_copy1

0xb703,	// (0x00056399) slider_set_pane_g4_copy1_ParamLimits

0xb703,	// (0x00056399) slider_set_pane_g4_copy1

0xb71b,	// (0x000563b1) slider_set_pane_g5_copy1_ParamLimits

0xb71b,	// (0x000563b1) slider_set_pane_g5_copy1

0xb6ef,	// (0x00056385) slider_set_pane_g6_copy1_ParamLimits

0xb6ef,	// (0x00056385) slider_set_pane_g6_copy1

0xf076,	// (0x00059d0c) slider_set_pane_g7_copy1_ParamLimits

0xf076,	// (0x00059d0c) slider_set_pane_g7_copy1

0x7521,	// (0x000521b7) bg_set_opt_pane_cp2_copy1

0xf08c,	// (0x00059d22) setting_slider_graphic_pane_g1_copy1

0xf095,	// (0x00059d2b) setting_slider_graphic_pane_t1_copy1

0xf0a5,	// (0x00059d3b) setting_slider_graphic_pane_t2_copy1

0xf0b5,	// (0x00059d4b) slider_set_pane_cp_copy1

0xf0c5,	// (0x00059d5b) input_focus_pane_cp1_copy1

0xf0ce,	// (0x00059d64) list_set_text_pane_copy1

0xf0d6,	// (0x00059d6c) setting_text_pane_g1_copy1

0x3f05,	// (0x0004eb9b) set_text_pane_t1_copy1

0xf0c5,	// (0x00059d5b) input_focus_pane_cp2_copy1

0xf0d6,	// (0x00059d6c) setting_code_pane_g1_copy1

0xf0df,	// (0x00059d75) setting_code_pane_t1_copy1

0xf0ed,	// (0x00059d83) list_set_graphic_pane_copy1

0x7521,	// (0x000521b7) bg_set_opt_pane_cp4_copy1

0x8e26,	// (0x00053abc) list_set_graphic_pane_g1_copy1_ParamLimits

0x8e26,	// (0x00053abc) list_set_graphic_pane_g1_copy1

0xf0ff,	// (0x00059d95) list_set_graphic_pane_g2_copy1

0x8e3e,	// (0x00053ad4) list_set_graphic_pane_t1_copy1_ParamLimits

0x8e3e,	// (0x00053ad4) list_set_graphic_pane_t1_copy1

0xc067,	// (0x00056cfd) rs_clock_indi_pane_g1

0xf107,	// (0x00059d9d) rs_clock_indi_pane_t1

0xf115,	// (0x00059dab) rs_indi_pane

0xf11d,	// (0x00059db3) rs_indi_pane_g1

0xf126,	// (0x00059dbc) rs_indi_pane_g2

0xf12f,	// (0x00059dc5) rs_indi_pane_g3

0x0002,

0xfed3,	// (0x0005ab69) rs_indi_pane_g

0x9114,	// (0x00053daa) bg_popup_preview_window_pane_cp03

0xf138,	// (0x00059dce) popup_fep_tooltip_window_t1

0xccce,	// (0x00057964) popup_note2_window_g2_ParamLimits

0xccce,	// (0x00057964) popup_note2_window_g2

0x0001,

0xfc6c,	// (0x0005a902) popup_note2_window_g_ParamLimits

0xfc6c,	// (0x0005a902) popup_note2_window_g

0xd1c9,	// (0x00057e5f) bg_popup_sub_pane_cp11_ParamLimits

0xd1d6,	// (0x00057e6c) cell_ai3_links_pane_g1_ParamLimits

0xd1ed,	// (0x00057e83) cell_ai3_links_pane_t1

0x3f05,	// (0x0004eb9b) set_text_pane_t1_copy1_ParamLimits

0x9025,	// (0x00053cbb) cell_graphic_popup_pane_cp2_ParamLimits

0x9025,	// (0x00053cbb) cell_graphic_popup_pane_cp2

0xf146,	// (0x00059ddc) cell_graphic_popup_pane_g1_cp2

0x81f9,	// (0x00052e8f) cell_graphic_popup_pane_g2_cp2

0xf14e,	// (0x00059de4) cell_graphic_popup_pane_g3_cp2

0xf156,	// (0x00059dec) cell_graphic_popup_pane_t2_cp2

0x820a,	// (0x00052ea0) grid_highlight_pane_cp3_cp2

0x8866,	// (0x000534fc) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x84ba,	// (0x00053150) main_tmo_pane_ParamLimits

0xd521,	// (0x000581b7) popup_tmo_big_image_note_window

0xe6a5,	// (0x0005933b) cell_ai5_widget_list_pane

0xe6ad,	// (0x00059343) cell_ai5_widget_lrg_icon_pane

0xeccb,	// (0x00059961) tmo_note_info_pane_t1_ParamLimits

0xece0,	// (0x00059976) tmo_note_info_pane_t2_ParamLimits

0xecf5,	// (0x0005998b) tmo_note_info_pane_t3_ParamLimits

0xed0a,	// (0x000599a0) tmo_note_info_pane_t4_ParamLimits

0xed1c,	// (0x000599b2) tmo_note_info_pane_t5_ParamLimits

0xfec1,	// (0x0005ab57) tmo_note_info_pane_t_ParamLimits

0xee4c,	// (0x00059ae2) settings_container_pane_ParamLimits

0xf0bd,	// (0x00059d53) indicator_popup_pane_cp5

0xf0bd,	// (0x00059d53) indicator_popup_pane_cp6

0xf0ed,	// (0x00059d83) list_set_graphic_pane_copy1_ParamLimits

0x750d,	// (0x000521a3) bg_popup_window_pane_cp23

0xf164,	// (0x00059dfa) popup_tmo_big_image_note_window_g1

0xf16e,	// (0x00059e04) popup_tmo_big_image_note_window_t1

0xf17e,	// (0x00059e14) popup_tmo_big_image_note_window_t2

0xf18e,	// (0x00059e24) popup_tmo_big_image_note_window_t3

0x0002,

0xfeda,	// (0x0005ab70) popup_tmo_big_image_note_window_t

0xf19e,	// (0x00059e34) cell_ai5_widget_lrg_icon_pane_g1

0xf1a6,	// (0x00059e3c) cell_ai5_widget_lrg_icon_pane_t1

0xf1b4,	// (0x00059e4a) cell_ai5_widget_list_row_pane_ParamLimits

0xf1b4,	// (0x00059e4a) cell_ai5_widget_list_row_pane

0xf1cd,	// (0x00059e63) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf1cd,	// (0x00059e63) cell_ai5_widget_list_row_pane_g1

0xf1da,	// (0x00059e70) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf1da,	// (0x00059e70) cell_ai5_widget_list_row_pane_t1

0xf1f2,	// (0x00059e88) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf1f2,	// (0x00059e88) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee1,	// (0x0005ab77) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee1,	// (0x0005ab77) cell_ai5_widget_list_row_pane_t

0x4ae7,	// (0x0004f77d) main_fep_vtchi_ss_pane

0xf229,	// (0x00059ebf) popup_fep_char_pre_window

0xf231,	// (0x00059ec7) popup_fep_ituss_window

0xf252,	// (0x00059ee8) popup_fep_vkbss_window

0xf271,	// (0x00059f07) grid_vkbss_keypad_pane_ParamLimits

0xf271,	// (0x00059f07) grid_vkbss_keypad_pane

0xf281,	// (0x00059f17) ituss_keypad_pane

0xf29d,	// (0x00059f33) aid_vkbss_key_offset_ParamLimits

0xf29d,	// (0x00059f33) aid_vkbss_key_offset

0xf2a9,	// (0x00059f3f) cell_vkbss_key_pane_ParamLimits

0xf2a9,	// (0x00059f3f) cell_vkbss_key_pane

0xf2bf,	// (0x00059f55) bg_cell_vkbss_key_g1_ParamLimits

0xf2bf,	// (0x00059f55) bg_cell_vkbss_key_g1

0xf2cb,	// (0x00059f61) cell_vkbss_key_3p_pane_ParamLimits

0xf2cb,	// (0x00059f61) cell_vkbss_key_3p_pane

0xf2e5,	// (0x00059f7b) cell_vkbss_key_g1_ParamLimits

0xf2e5,	// (0x00059f7b) cell_vkbss_key_g1

0xf2ff,	// (0x00059f95) cell_vkbss_key_t1_ParamLimits

0xf2ff,	// (0x00059f95) cell_vkbss_key_t1

0xf32a,	// (0x00059fc0) cell_ituss_key_pane_ParamLimits

0xf32a,	// (0x00059fc0) cell_ituss_key_pane

0xf33b,	// (0x00059fd1) bg_cell_ituss_key_g1_ParamLimits

0xf33b,	// (0x00059fd1) bg_cell_ituss_key_g1

0xf347,	// (0x00059fdd) cell_ituss_key_pane_g1_ParamLimits

0xf347,	// (0x00059fdd) cell_ituss_key_pane_g1

0xf361,	// (0x00059ff7) cell_ituss_key_pane_g2_ParamLimits

0xf361,	// (0x00059ff7) cell_ituss_key_pane_g2

0x0001,

0xfee8,	// (0x0005ab7e) cell_ituss_key_pane_g_ParamLimits

0xfee8,	// (0x0005ab7e) cell_ituss_key_pane_g

0xf38c,	// (0x0005a022) cell_ituss_key_t1_ParamLimits

0xf38c,	// (0x0005a022) cell_ituss_key_t1

0xf3ba,	// (0x0005a050) cell_ituss_key_t2_ParamLimits

0xf3ba,	// (0x0005a050) cell_ituss_key_t2

0xf3eb,	// (0x0005a081) cell_ituss_key_t3_ParamLimits

0xf3eb,	// (0x0005a081) cell_ituss_key_t3

0xf41c,	// (0x0005a0b2) cell_ituss_key_t4_ParamLimits

0xf41c,	// (0x0005a0b2) cell_ituss_key_t4

0x0003,

0xfeed,	// (0x0005ab83) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x0005ab83) cell_ituss_key_t

0xf44d,	// (0x0005a0e3) cell_vkbss_key_3p_pane_g1

0xf455,	// (0x0005a0eb) cell_vkbss_key_3p_pane_g2

0xf45d,	// (0x0005a0f3) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x0005ab8c) cell_vkbss_key_3p_pane_g

0x750d,	// (0x000521a3) bg_popup_fep_char_preview_window_cp02

0xf465,	// (0x0005a0fb) popup_fep_char_pre_window_t1

0xe637,	// (0x000592cd) main_ai5_sk_pane

0xed96,	// (0x00059a2c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeda2,	// (0x00059a38) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xedb6,	// (0x00059a4c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedc2,	// (0x00059a58) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecc,	// (0x0005ab62) cell_contacts_ai5_widget_pane_g_ParamLimits

0xedd5,	// (0x00059a6b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x84ba,	// (0x00053150) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf474,	// (0x0005a10a) main_ai5_sk_pane_g1

0x9e9a,	// (0x00054b30) popup_query_code_window_g1

0xf247,	// (0x00059edd) popup_fep_vkb_icf_pane

0xf25b,	// (0x00059ef1) popup_fep_vtchi_icf_pane

0x84ba,	// (0x00053150) bg_icf_pane

0xf47d,	// (0x0005a113) list_vkb_icf_pane

0x84ba,	// (0x00053150) bg_icf_pane_cp01

0xf489,	// (0x0005a11f) vtchi_icf_list_pane

0xf49a,	// (0x0005a130) list_vkb_icf_pane_t1_ParamLimits

0xf49a,	// (0x0005a130) list_vkb_icf_pane_t1

0xf4b1,	// (0x0005a147) vtchi_icf_list_pane_t1_ParamLimits

0xf4b1,	// (0x0005a147) vtchi_icf_list_pane_t1

0xf231,	// (0x00059ec7) popup_fep_ituss_window_ParamLimits

0xf25b,	// (0x00059ef1) popup_fep_vtchi_icf_pane_ParamLimits

0xf281,	// (0x00059f17) ituss_keypad_pane_ParamLimits

0xf291,	// (0x00059f27) ituss_sks_pane

0x84ba,	// (0x00053150) bg_icf_pane_ParamLimits

0xf21a,	// (0x00059eb0) icf_edit_indi_pane_ParamLimits

0xf21a,	// (0x00059eb0) icf_edit_indi_pane

0xf47d,	// (0x0005a113) list_vkb_icf_pane_ParamLimits

0x84ba,	// (0x00053150) bg_icf_pane_cp01_ParamLimits

0xf21a,	// (0x00059eb0) icf_edit_indi_pane_cp01_ParamLimits

0xf21a,	// (0x00059eb0) icf_edit_indi_pane_cp01

0xf491,	// (0x0005a127) vtchi_query_pane

0xc2e5,	// (0x00056f7b) icf_edit_indi_pane_g1_ParamLimits

0xc2e5,	// (0x00056f7b) icf_edit_indi_pane_g1

0xf537,	// (0x0005a1cd) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x0005a1cd) icf_edit_indi_pane_g2

0x0001,

0xff0e,	// (0x0005aba4) icf_edit_indi_pane_g_ParamLimits

0xff0e,	// (0x0005aba4) icf_edit_indi_pane_g

0xf546,	// (0x0005a1dc) icf_edit_indi_pane_t1

0xf4cd,	// (0x0005a163) bg_input_focus_pane_cp042

0x83dd,	// (0x00053073) vtchi_button_pane

0xf4d6,	// (0x0005a16c) vtchi_query_pane_t1

0xf4e4,	// (0x0005a17a) vtchi_query_pane_t2

0xf4f2,	// (0x0005a188) vtchi_query_pane_t3

0x0002,

0xfefd,	// (0x0005ab93) vtchi_query_pane_t

0x750d,	// (0x000521a3) bg_button_pane_cp13

0xf500,	// (0x0005a196) vtchi_button_pane_g1

0xf508,	// (0x0005a19e) ituss_sks_pane_g1

0xf513,	// (0x0005a1a9) ituss_sks_pane_g2

0x0001,

0xff04,	// (0x0005ab9a) ituss_sks_pane_g

0xf51b,	// (0x0005a1b1) ituss_sks_pane_t1

0xf529,	// (0x0005a1bf) ituss_sks_pane_t2

0x0001,

0xff09,	// (0x0005ab9f) ituss_sks_pane_t

0xbad0,	// (0x00056766) indicator_nsta_pane_cp_g1

0xbad9,	// (0x0005676f) indicator_nsta_pane_cp_g2

0xbae1,	// (0x00056777) indicator_nsta_pane_cp_g3

0xbae9,	// (0x0005677f) indicator_nsta_pane_cp_g4

0xbaf1,	// (0x00056787) indicator_nsta_pane_cp_g5

0xbaf9,	// (0x0005678f) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x0005a740) indicator_nsta_pane_cp_g

0xe1fc,	// (0x00058e92) cell_graphic2_pane_t2_ParamLimits

0xe1fc,	// (0x00058e92) cell_graphic2_pane_t2

0x0001,

0xfdc3,	// (0x0005aa59) cell_graphic2_pane_t_ParamLimits

0xfdc3,	// (0x0005aa59) cell_graphic2_pane_t

0xe229,	// (0x00058ebf) cell_graphic2_control_pane_t1

0x8bdc,	// (0x00053872) signal_pane_g3_ParamLimits

0x8bdc,	// (0x00053872) signal_pane_g3

0x8beb,	// (0x00053881) signal_pane_g4_ParamLimits

0x8beb,	// (0x00053881) signal_pane_g4

0xf204,	// (0x00059e9a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf204,	// (0x00059e9a) cell_ai5_widget_list_row_pane_t3

0xf37a,	// (0x0005a010) cell_ituss_key_pane_t1_ParamLimits

0xf37a,	// (0x0005a010) cell_ituss_key_pane_t1

0x9aed,	// (0x00054783) form_field_data_wide_pane_vc_t2_ParamLimits

0x9aed,	// (0x00054783) form_field_data_wide_pane_vc_t2

0x9b01,	// (0x00054797) form_field_data_wide_pane_vc_t3_ParamLimits

0x9b01,	// (0x00054797) form_field_data_wide_pane_vc_t3

0x0002,

0xf814,	// (0x0005a4aa) form_field_data_wide_pane_vc_t_ParamLimits

0xf814,	// (0x0005a4aa) form_field_data_wide_pane_vc_t

0xb787,	// (0x0005641d) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb787,	// (0x0005641d) form_field_slider_wide_pane_vc_t3

0xb865,	// (0x000564fb) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb865,	// (0x000564fb) form_field_popup_wide_pane_vc_t2

0xb87c,	// (0x00056512) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb87c,	// (0x00056512) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x0005a72f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x0005a72f) form_field_popup_wide_pane_vc_t

0x746b,	// (0x00052101) aid_fshwr2_btn_pane_ParamLimits

0x7477,	// (0x0005210d) aid_fshwr2_syb_pane_ParamLimits

0x7488,	// (0x0005211e) aid_fshwr2_txt_pane_ParamLimits

0x6cbb,	// (0x00051951) fshwr2_bg_pane_ParamLimits

0x7494,	// (0x0005212a) fshwr2_func_candi_pane_ParamLimits

0x74a9,	// (0x0005213f) fshwr2_hwr_syb_pane_ParamLimits

0x74c0,	// (0x00052156) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large

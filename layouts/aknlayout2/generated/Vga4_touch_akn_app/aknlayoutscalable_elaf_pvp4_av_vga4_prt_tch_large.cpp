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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00040be7 };

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
0x5ebd,	// (0x00046aa4) Screen

0x5ec9,	// (0x00046ab0) application_window_ParamLimits

0x5ec9,	// (0x00046ab0) application_window

0x09a4,	// (0x0004158b) screen_g1

0x5f25,	// (0x00046b0c) area_bottom_pane_ParamLimits

0x5f25,	// (0x00046b0c) area_bottom_pane

0x5fe5,	// (0x00046bcc) area_top_pane_ParamLimits

0x5fe5,	// (0x00046bcc) area_top_pane

0x6079,	// (0x00046c60) main_pane_ParamLimits

0x6079,	// (0x00046c60) main_pane

0x09ae,	// (0x00041595) misc_graphics

0x9542,	// (0x0004a129) battery_pane_ParamLimits

0x9542,	// (0x0004a129) battery_pane

0xa20a,	// (0x0004adf1) bg_status_flat_pane_g8

0xa212,	// (0x0004adf9) bg_status_flat_pane_g9

0x960a,	// (0x0004a1f1) context_pane_ParamLimits

0x960a,	// (0x0004a1f1) context_pane

0x972e,	// (0x0004a315) navi_pane_ParamLimits

0x972e,	// (0x0004a315) navi_pane

0x97be,	// (0x0004a3a5) signal_pane_ParamLimits

0x97be,	// (0x0004a3a5) signal_pane

0x0008,

0xf859,	// (0x00050440) bg_status_flat_pane_g

0x982b,	// (0x0004a412) status_pane_g1_ParamLimits

0x982b,	// (0x0004a412) status_pane_g1

0x9837,	// (0x0004a41e) status_pane_g2_ParamLimits

0x9837,	// (0x0004a41e) status_pane_g2

0x9843,	// (0x0004a42a) status_pane_g3_ParamLimits

0x9843,	// (0x0004a42a) status_pane_g3

0x0004,

0xf780,	// (0x00050367) status_pane_g_ParamLimits

0xf780,	// (0x00050367) status_pane_g

0x9877,	// (0x0004a45e) title_pane_ParamLimits

0x9877,	// (0x0004a45e) title_pane

0x98b6,	// (0x0004a49d) uni_indicator_pane_ParamLimits

0x98b6,	// (0x0004a49d) uni_indicator_pane

0x9474,	// (0x0004a05b) bg_list_pane_ParamLimits

0x9474,	// (0x0004a05b) bg_list_pane

0x6eb6,	// (0x00047a9d) find_pane

0x9494,	// (0x0004a07b) listscroll_app_pane_ParamLimits

0x9494,	// (0x0004a07b) listscroll_app_pane

0x94a0,	// (0x0004a087) listscroll_form_pane

0x6ebe,	// (0x00047aa5) listscroll_gen_pane_ParamLimits

0x6ebe,	// (0x00047aa5) listscroll_gen_pane

0x6ed2,	// (0x00047ab9) listscroll_set_pane

0x6796,	// (0x0004737d) main_idle_act_pane

0x916d,	// (0x00049d54) main_idle_trad_pane

0x916d,	// (0x00049d54) main_list_empty_pane

0x9494,	// (0x0004a07b) main_midp_pane

0x94ba,	// (0x0004a0a1) main_pane_g1_ParamLimits

0x94ba,	// (0x0004a0a1) main_pane_g1

0x6eda,	// (0x00047ac1) popup_ai_message_window_ParamLimits

0x6eda,	// (0x00047ac1) popup_ai_message_window

0x6f8e,	// (0x00047b75) popup_fep_china_uni_window_ParamLimits

0x6f8e,	// (0x00047b75) popup_fep_china_uni_window

0x6fee,	// (0x00047bd5) popup_fep_japan_candidate_window_ParamLimits

0x6fee,	// (0x00047bd5) popup_fep_japan_candidate_window

0x7018,	// (0x00047bff) popup_fep_japan_predictive_window_ParamLimits

0x7018,	// (0x00047bff) popup_fep_japan_predictive_window

0x704e,	// (0x00047c35) popup_find_window

0x705b,	// (0x00047c42) popup_grid_graphic_window_ParamLimits

0x705b,	// (0x00047c42) popup_grid_graphic_window

0x708b,	// (0x00047c72) popup_large_graphic_colour_window

0x70b1,	// (0x00047c98) popup_menu_window_ParamLimits

0x70b1,	// (0x00047c98) popup_menu_window

0x727b,	// (0x00047e62) popup_note_image_window

0x7265,	// (0x00047e4c) popup_note_wait_window_ParamLimits

0x7265,	// (0x00047e4c) popup_note_wait_window

0x7265,	// (0x00047e4c) popup_note_window_ParamLimits

0x7265,	// (0x00047e4c) popup_note_window

0x72e1,	// (0x00047ec8) popup_query_code_window_ParamLimits

0x72e1,	// (0x00047ec8) popup_query_code_window

0x72f7,	// (0x00047ede) popup_query_data_code_window_ParamLimits

0x72f7,	// (0x00047ede) popup_query_data_code_window

0x731a,	// (0x00047f01) popup_query_data_window_ParamLimits

0x731a,	// (0x00047f01) popup_query_data_window

0x733c,	// (0x00047f23) popup_query_sat_info_window_ParamLimits

0x733c,	// (0x00047f23) popup_query_sat_info_window

0x737b,	// (0x00047f62) popup_snote_single_graphic_window_ParamLimits

0x737b,	// (0x00047f62) popup_snote_single_graphic_window

0x737b,	// (0x00047f62) popup_snote_single_text_window_ParamLimits

0x737b,	// (0x00047f62) popup_snote_single_text_window

0x7392,	// (0x00047f79) popup_sub_window_general

0x74d8,	// (0x000480bf) popup_window_general_ParamLimits

0x74d8,	// (0x000480bf) popup_window_general

0x94c8,	// (0x0004a0af) power_save_pane

0x6d40,	// (0x00047927) control_pane_g1_ParamLimits

0x6d40,	// (0x00047927) control_pane_g1

0x6d69,	// (0x00047950) control_pane_g2_ParamLimits

0x6d69,	// (0x00047950) control_pane_g2

0x9437,	// (0x0004a01e) control_pane_g3_ParamLimits

0x9437,	// (0x0004a01e) control_pane_g3

0x0007,

0xf768,	// (0x0005034f) control_pane_g_ParamLimits

0xf768,	// (0x0005034f) control_pane_g

0x6db5,	// (0x0004799c) control_pane_t1_ParamLimits

0x6db5,	// (0x0004799c) control_pane_t1

0x6e0f,	// (0x000479f6) control_pane_t2_ParamLimits

0x6e0f,	// (0x000479f6) control_pane_t2

0x0002,

0xf779,	// (0x00050360) control_pane_t_ParamLimits

0xf779,	// (0x00050360) control_pane_t

0x935c,	// (0x00049f43) navi_navi_volume_pane_cp1

0x9364,	// (0x00049f4b) status_small_icon_pane

0x936c,	// (0x00049f53) status_small_pane_g1_ParamLimits

0x936c,	// (0x00049f53) status_small_pane_g1

0x93a0,	// (0x00049f87) status_small_pane_g2_ParamLimits

0x93a0,	// (0x00049f87) status_small_pane_g2

0x93ac,	// (0x00049f93) status_small_pane_g3_ParamLimits

0x93ac,	// (0x00049f93) status_small_pane_g3

0x93b8,	// (0x00049f9f) status_small_pane_g4_ParamLimits

0x93b8,	// (0x00049f9f) status_small_pane_g4

0x93c4,	// (0x00049fab) status_small_pane_g5_ParamLimits

0x93c4,	// (0x00049fab) status_small_pane_g5

0x93d2,	// (0x00049fb9) status_small_pane_g6_ParamLimits

0x93d2,	// (0x00049fb9) status_small_pane_g6

0x0007,

0xf757,	// (0x0005033e) status_small_pane_g_ParamLimits

0xf757,	// (0x0005033e) status_small_pane_g

0x9401,	// (0x00049fe8) status_small_pane_t1

0x9423,	// (0x0004a00a) status_small_wait_pane_ParamLimits

0x9423,	// (0x0004a00a) status_small_wait_pane

0x8beb,	// (0x000497d2) aid_levels_signal_ParamLimits

0x8beb,	// (0x000497d2) aid_levels_signal

0x8bfa,	// (0x000497e1) signal_pane_g1_ParamLimits

0x8bfa,	// (0x000497e1) signal_pane_g1

0x8c0f,	// (0x000497f6) signal_pane_g2_ParamLimits

0x8c0f,	// (0x000497f6) signal_pane_g2

0x0003,

0xf6e8,	// (0x000502cf) signal_pane_g_ParamLimits

0xf6e8,	// (0x000502cf) signal_pane_g

0x8c40,	// (0x00049827) context_pane_g1

0x62d8,	// (0x00046ebf) title_pane_g1

0x630a,	// (0x00046ef1) title_pane_t1

0x09c4,	// (0x000415ab) title_pane_t2

0x09ea,	// (0x000415d1) title_pane_t3

0x0002,

0xf532,	// (0x00050119) title_pane_t

0x98ce,	// (0x0004a4b5) aid_levels_battery_ParamLimits

0x98ce,	// (0x0004a4b5) aid_levels_battery

0x98df,	// (0x0004a4c6) battery_pane_g1_ParamLimits

0x98df,	// (0x0004a4c6) battery_pane_g1

0x98f5,	// (0x0004a4dc) battery_pane_g2_ParamLimits

0x98f5,	// (0x0004a4dc) battery_pane_g2

0x0001,

0xf78b,	// (0x00050372) battery_pane_g_ParamLimits

0xf78b,	// (0x00050372) battery_pane_g

0xab54,	// (0x0004b73b) uni_indicator_pane_g1

0xab6a,	// (0x0004b751) uni_indicator_pane_g2

0xab80,	// (0x0004b767) uni_indicator_pane_g3

0x0005,

0xf901,	// (0x000504e8) uni_indicator_pane_g

0x8fdb,	// (0x00049bc2) navi_icon_pane_ParamLimits

0x8fdb,	// (0x00049bc2) navi_icon_pane

0x8f23,	// (0x00049b0a) navi_midp_pane

0x8ff7,	// (0x00049bde) navi_navi_pane

0x9001,	// (0x00049be8) navi_text_pane_ParamLimits

0x9001,	// (0x00049be8) navi_text_pane

0x09a4,	// (0x0004158b) status_small_wait_pane_g1

0x0d0b,	// (0x000418f2) status_small_wait_pane_g2

0x0001,

0xf8fc,	// (0x000504e3) status_small_wait_pane_g

0xa867,	// (0x0004b44e) navi_navi_icon_text_pane

0xa86f,	// (0x0004b456) navi_navi_pane_g1_ParamLimits

0xa86f,	// (0x0004b456) navi_navi_pane_g1

0xa881,	// (0x0004b468) navi_navi_pane_g2_ParamLimits

0xa881,	// (0x0004b468) navi_navi_pane_g2

0x0001,

0xf8ca,	// (0x000504b1) navi_navi_pane_g_ParamLimits

0xf8ca,	// (0x000504b1) navi_navi_pane_g

0xa893,	// (0x0004b47a) navi_navi_tabs_pane

0xa89c,	// (0x0004b483) navi_navi_text_pane

0xa867,	// (0x0004b44e) navi_navi_volume_pane

0xa843,	// (0x0004b42a) navi_text_pane_t1

0xa837,	// (0x0004b41e) navi_icon_pane_g1

0xa78a,	// (0x0004b371) navi_navi_text_pane_t1

0x7799,	// (0x00048380) navi_navi_volume_pane_g1

0x77a1,	// (0x00048388) volume_small_pane

0xa6f0,	// (0x0004b2d7) navi_navi_icon_text_pane_g1

0xa6f8,	// (0x0004b2df) navi_navi_icon_text_pane_t1

0x8ff7,	// (0x00049bde) navi_tabs_2_long_pane

0x8ff7,	// (0x00049bde) navi_tabs_2_pane

0x8ff7,	// (0x00049bde) navi_tabs_3_long_pane

0x8ff7,	// (0x00049bde) navi_tabs_3_pane

0x8ff7,	// (0x00049bde) navi_tabs_4_pane

0x7779,	// (0x00048360) tabs_2_active_pane_ParamLimits

0x7779,	// (0x00048360) tabs_2_active_pane

0x7789,	// (0x00048370) tabs_2_passive_pane_ParamLimits

0x7789,	// (0x00048370) tabs_2_passive_pane

0x7747,	// (0x0004832e) tabs_3_active_pane_ParamLimits

0x7747,	// (0x0004832e) tabs_3_active_pane

0x7757,	// (0x0004833e) tabs_3_passive_pane_ParamLimits

0x7757,	// (0x0004833e) tabs_3_passive_pane

0x7768,	// (0x0004834f) tabs_3_passive_pane_cp_ParamLimits

0x7768,	// (0x0004834f) tabs_3_passive_pane_cp

0x76fb,	// (0x000482e2) tabs_4_active_pane_ParamLimits

0x76fb,	// (0x000482e2) tabs_4_active_pane

0x770e,	// (0x000482f5) tabs_4_passive_pane_ParamLimits

0x770e,	// (0x000482f5) tabs_4_passive_pane

0x771f,	// (0x00048306) tabs_4_passive_pane_cp_ParamLimits

0x771f,	// (0x00048306) tabs_4_passive_pane_cp

0x7730,	// (0x00048317) tabs_4_passive_pane_cp2_ParamLimits

0x7730,	// (0x00048317) tabs_4_passive_pane_cp2

0x76d7,	// (0x000482be) tabs_2_long_active_pane_ParamLimits

0x76d7,	// (0x000482be) tabs_2_long_active_pane

0x76e9,	// (0x000482d0) tabs_2_long_passive_pane_ParamLimits

0x76e9,	// (0x000482d0) tabs_2_long_passive_pane

0x7698,	// (0x0004827f) tabs_3_long_active_pane_ParamLimits

0x7698,	// (0x0004827f) tabs_3_long_active_pane

0x76ab,	// (0x00048292) tabs_3_long_passive_pane_ParamLimits

0x76ab,	// (0x00048292) tabs_3_long_passive_pane

0x76c4,	// (0x000482ab) tabs_3_long_passive_pane_cp_ParamLimits

0x76c4,	// (0x000482ab) tabs_3_long_passive_pane_cp

0x763e,	// (0x00048225) volume_small_pane_g1

0x7647,	// (0x0004822e) volume_small_pane_g2

0x7650,	// (0x00048237) volume_small_pane_g3

0x7659,	// (0x00048240) volume_small_pane_g4

0x7662,	// (0x00048249) volume_small_pane_g5

0x766b,	// (0x00048252) volume_small_pane_g6

0x7674,	// (0x0004825b) volume_small_pane_g7

0x767d,	// (0x00048264) volume_small_pane_g8

0x7686,	// (0x0004826d) volume_small_pane_g9

0x768f,	// (0x00048276) volume_small_pane_g10

0x0009,

0xf896,	// (0x0005047d) volume_small_pane_g

0x0a0a,	// (0x000415f1) bg_active_tab_pane_cp2_ParamLimits

0x0a0a,	// (0x000415f1) bg_active_tab_pane_cp2

0x6372,	// (0x00046f59) tabs_3_active_pane_g1

0x637a,	// (0x00046f61) tabs_3_active_pane_t1

0x0a0a,	// (0x000415f1) bg_passive_tab_pane_cp2_ParamLimits

0x0a0a,	// (0x000415f1) bg_passive_tab_pane_cp2

0x6372,	// (0x00046f59) tabs_3_passive_pane_g1

0x637a,	// (0x00046f61) tabs_3_passive_pane_t1

0x0a0a,	// (0x000415f1) bg_active_tab_pane_cp3_ParamLimits

0x0a0a,	// (0x000415f1) bg_active_tab_pane_cp3

0x638c,	// (0x00046f73) tabs_4_active_pane_g1

0x6394,	// (0x00046f7b) tabs_4_active_pane_t1

0x0a0a,	// (0x000415f1) bg_passive_tab_pane_cp3_ParamLimits

0x0a0a,	// (0x000415f1) bg_passive_tab_pane_cp3

0x638c,	// (0x00046f73) tabs_4_1_passive_pane_g1

0x6394,	// (0x00046f7b) tabs_4_1_passive_pane_t1

0x9494,	// (0x0004a07b) list_highlight_pane_cp2

0xadcd,	// (0x0004b9b4) list_set_pane_ParamLimits

0xadcd,	// (0x0004b9b4) list_set_pane

0xae8f,	// (0x0004ba76) main_pane_set_t1_ParamLimits

0xae8f,	// (0x0004ba76) main_pane_set_t1

0xaeaf,	// (0x0004ba96) main_pane_set_t2_ParamLimits

0xaeaf,	// (0x0004ba96) main_pane_set_t2

0xaec3,	// (0x0004baaa) main_pane_set_t3_ParamLimits

0xaec3,	// (0x0004baaa) main_pane_set_t3

0xaed7,	// (0x0004babe) main_pane_set_t4_ParamLimits

0xaed7,	// (0x0004babe) main_pane_set_t4

0x0003,

0xf966,	// (0x0005054d) main_pane_set_t_ParamLimits

0xf966,	// (0x0005054d) main_pane_set_t

0xaeeb,	// (0x0004bad2) setting_code_pane

0xaef5,	// (0x0004badc) setting_slider_graphic_pane

0xaef5,	// (0x0004badc) setting_slider_pane

0xaef5,	// (0x0004badc) setting_text_pane

0xaef5,	// (0x0004badc) setting_volume_pane

0x63a6,	// (0x00046f8d) volume_set_pane

0x0a0a,	// (0x000415f1) bg_set_opt_pane_cp

0x63b0,	// (0x00046f97) setting_slider_pane_t1

0x63c9,	// (0x00046fb0) setting_slider_pane_t2

0x63e3,	// (0x00046fca) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00050120) setting_slider_pane_t

0x63fb,	// (0x00046fe2) slider_set_pane

0x09ae,	// (0x00041595) bg_set_opt_pane_cp2

0x0a18,	// (0x000415ff) setting_slider_graphic_pane_g1

0x6411,	// (0x00046ff8) setting_slider_graphic_pane_t1

0x6421,	// (0x00047008) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00050127) setting_slider_graphic_pane_t

0x6431,	// (0x00047018) slider_set_pane_cp

0x09ae,	// (0x00041595) input_focus_pane_cp1

0xad8e,	// (0x0004b975) list_set_text_pane

0x09a4,	// (0x0004158b) setting_text_pane_g1

0x09ae,	// (0x00041595) input_focus_pane_cp2

0x09a4,	// (0x0004158b) setting_code_pane_g1

0x0a21,	// (0x00041608) setting_code_pane_t1

0x4f7c,	// (0x00045b63) set_text_pane_t1_ParamLimits

0x4f7c,	// (0x00045b63) set_text_pane_t1

0x10a4,	// (0x00041c8b) set_opt_bg_pane_g1

0x10ac,	// (0x00041c93) set_opt_bg_pane_g2

0xad66,	// (0x0004b94d) set_opt_bg_pane_g3

0x10bc,	// (0x00041ca3) set_opt_bg_pane_g4

0x10c4,	// (0x00041cab) set_opt_bg_pane_g5

0x10cc,	// (0x00041cb3) set_opt_bg_pane_g6

0xad70,	// (0x0004b957) set_opt_bg_pane_g7

0xad7a,	// (0x0004b961) set_opt_bg_pane_g8

0xad84,	// (0x0004b96b) set_opt_bg_pane_g9

0x0008,

0xf953,	// (0x0005053a) set_opt_bg_pane_g

0xad59,	// (0x0004b940) slider_set_pane_g1

0x7822,	// (0x00048409) slider_set_pane_g2

0x0006,

0xf944,	// (0x0005052b) slider_set_pane_g

0x77aa,	// (0x00048391) volume_set_pane_g1

0x77b4,	// (0x0004839b) volume_set_pane_g2

0x77be,	// (0x000483a5) volume_set_pane_g3

0x77c8,	// (0x000483af) volume_set_pane_g4

0x77d2,	// (0x000483b9) volume_set_pane_g5

0x77dc,	// (0x000483c3) volume_set_pane_g6

0x77e6,	// (0x000483cd) volume_set_pane_g7

0x77f0,	// (0x000483d7) volume_set_pane_g8

0x77fa,	// (0x000483e1) volume_set_pane_g9

0x7804,	// (0x000483eb) volume_set_pane_g10

0x0009,

0xf91c,	// (0x00050503) volume_set_pane_g

0x6439,	// (0x00047020) indicator_pane_ParamLimits

0x6439,	// (0x00047020) indicator_pane

0x6445,	// (0x0004702c) main_idle_pane_g2_ParamLimits

0x6445,	// (0x0004702c) main_idle_pane_g2

0x646d,	// (0x00047054) main_pane_idle_g1_ParamLimits

0x646d,	// (0x00047054) main_pane_idle_g1

0x0a2f,	// (0x00041616) popup_clock_digital_analogue_window_ParamLimits

0x0a2f,	// (0x00041616) popup_clock_digital_analogue_window

0x647b,	// (0x00047062) soft_indicator_pane_ParamLimits

0x647b,	// (0x00047062) soft_indicator_pane

0x6489,	// (0x00047070) wallpaper_pane_ParamLimits

0x6489,	// (0x00047070) wallpaper_pane

0x09a4,	// (0x0004158b) wallpaper_pane_g1

0x6495,	// (0x0004707c) indicator_pane_g1_ParamLimits

0x6495,	// (0x0004707c) indicator_pane_g1

0xb182,	// (0x0004bd69) navi_navi_icon_text_pane_srt_g1

0x0a5d,	// (0x00041644) soft_indicator_pane_t1

0x0a77,	// (0x0004165e) aid_ps_area_pane

0x64a1,	// (0x00047088) aid_ps_clock_pane

0x0a88,	// (0x0004166f) aid_ps_indicator_pane

0x0a94,	// (0x0004167b) indicator_ps_pane_ParamLimits

0x0a94,	// (0x0004167b) indicator_ps_pane

0x0aa3,	// (0x0004168a) power_save_pane_g1_ParamLimits

0x0aa3,	// (0x0004168a) power_save_pane_g1

0x0aaf,	// (0x00041696) power_save_pane_g2_ParamLimits

0x0aaf,	// (0x00041696) power_save_pane_g2

0x5ed9,	// (0x00046ac0) aid_navinavi_width_pane

0x0a77,	// (0x0004165e) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0005012c) power_save_pane_g_ParamLimits

0xf545,	// (0x0005012c) power_save_pane_g

0x0abd,	// (0x000416a4) power_save_pane_t1_ParamLimits

0x0abd,	// (0x000416a4) power_save_pane_t1

0x64a1,	// (0x00047088) aid_ps_clock_pane_ParamLimits

0x0a88,	// (0x0004166f) aid_ps_indicator_pane_ParamLimits

0x0acf,	// (0x000416b6) power_save_pane_t4_ParamLimits

0x0acf,	// (0x000416b6) power_save_pane_t4

0x0001,

0xf54a,	// (0x00050131) power_save_pane_t_ParamLimits

0xf54a,	// (0x00050131) power_save_pane_t

0x0af9,	// (0x000416e0) power_save_t3_ParamLimits

0x0af9,	// (0x000416e0) power_save_t3

0x0ae4,	// (0x000416cb) power_save_t2_ParamLimits

0x0ae4,	// (0x000416cb) power_save_t2

0x0b0e,	// (0x000416f5) indicator_ps_pane_g1

0x64af,	// (0x00047096) ai_gene_pane_ParamLimits

0x64af,	// (0x00047096) ai_gene_pane

0x64bb,	// (0x000470a2) ai_links_pane_ParamLimits

0x64bb,	// (0x000470a2) ai_links_pane

0x64c7,	// (0x000470ae) indicator_pane_cp1_ParamLimits

0x64c7,	// (0x000470ae) indicator_pane_cp1

0x64d3,	// (0x000470ba) main_pane_idle_g1_cp_ParamLimits

0x64d3,	// (0x000470ba) main_pane_idle_g1_cp

0x0b17,	// (0x000416fe) popup_ai_links_title_window

0x64df,	// (0x000470c6) soft_indicator_pane_cp1_ParamLimits

0x64df,	// (0x000470c6) soft_indicator_pane_cp1

0xab42,	// (0x0004b729) ai_links_pane_g1

0xab4b,	// (0x0004b732) grid_ai_links_pane

0xab27,	// (0x0004b70e) ai_gene_pane_1

0xab30,	// (0x0004b717) ai_gene_pane_2

0xab39,	// (0x0004b720) list_highlight_pane_cp4

0xab07,	// (0x0004b6ee) cell_ai_link_pane_ParamLimits

0xab07,	// (0x0004b6ee) cell_ai_link_pane

0xaaff,	// (0x0004b6e6) cell_ai_link_pane_g1

0x0d0b,	// (0x000418f2) cell_ai_link_pane_g2

0x0001,

0xf8f7,	// (0x000504de) cell_ai_link_pane_g

0x09ae,	// (0x00041595) grid_highlight_cp2

0x09ae,	// (0x00041595) bg_popup_sub_pane_cp1

0x0b2e,	// (0x00041715) popup_ai_links_title_window_t1

0xaa4b,	// (0x0004b632) ai_gene_pane_1_g1_ParamLimits

0xaa4b,	// (0x0004b632) ai_gene_pane_1_g1

0xaa57,	// (0x0004b63e) ai_gene_pane_1_g2_ParamLimits

0xaa57,	// (0x0004b63e) ai_gene_pane_1_g2

0x0001,

0xf8ed,	// (0x000504d4) ai_gene_pane_1_g_ParamLimits

0xf8ed,	// (0x000504d4) ai_gene_pane_1_g

0xaa64,	// (0x0004b64b) ai_gene_pane_1_t1_ParamLimits

0xaa64,	// (0x0004b64b) ai_gene_pane_1_t1

0xaa98,	// (0x0004b67f) grid_ai_soft_ind_pane

0xaa36,	// (0x0004b61d) ai_gene_pane_2_t1_ParamLimits

0xaa36,	// (0x0004b61d) ai_gene_pane_2_t1

0x64eb,	// (0x000470d2) main_pane_empty_t1_ParamLimits

0x64eb,	// (0x000470d2) main_pane_empty_t1

0x6503,	// (0x000470ea) main_pane_empty_t2_ParamLimits

0x6503,	// (0x000470ea) main_pane_empty_t2

0x6518,	// (0x000470ff) main_pane_empty_t3_ParamLimits

0x6518,	// (0x000470ff) main_pane_empty_t3

0x652a,	// (0x00047111) main_pane_empty_t4_ParamLimits

0x652a,	// (0x00047111) main_pane_empty_t4

0x653c,	// (0x00047123) main_pane_empty_t5_ParamLimits

0x653c,	// (0x00047123) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00050136) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00050136) main_pane_empty_t

0x3f09,	// (0x00044af0) bg_popup_window_pane_ParamLimits

0x3f09,	// (0x00044af0) bg_popup_window_pane

0xa798,	// (0x0004b37f) find_popup_pane_cp2_ParamLimits

0xa798,	// (0x0004b37f) find_popup_pane_cp2

0xa7a4,	// (0x0004b38b) heading_pane_ParamLimits

0xa7a4,	// (0x0004b38b) heading_pane

0x09ae,	// (0x00041595) bg_popup_sub_pane

0xa712,	// (0x0004b2f9) bg_popup_window_pane_g1_ParamLimits

0xa712,	// (0x0004b2f9) bg_popup_window_pane_g1

0xa71e,	// (0x0004b305) bg_popup_window_pane_g2_ParamLimits

0xa71e,	// (0x0004b305) bg_popup_window_pane_g2

0xa72a,	// (0x0004b311) bg_popup_window_pane_g3_ParamLimits

0xa72a,	// (0x0004b311) bg_popup_window_pane_g3

0xa736,	// (0x0004b31d) bg_popup_window_pane_g4_ParamLimits

0xa736,	// (0x0004b31d) bg_popup_window_pane_g4

0xa742,	// (0x0004b329) bg_popup_window_pane_g5_ParamLimits

0xa742,	// (0x0004b329) bg_popup_window_pane_g5

0xa74e,	// (0x0004b335) bg_popup_window_pane_g6_ParamLimits

0xa74e,	// (0x0004b335) bg_popup_window_pane_g6

0xa75a,	// (0x0004b341) bg_popup_window_pane_g7_ParamLimits

0xa75a,	// (0x0004b341) bg_popup_window_pane_g7

0xa766,	// (0x0004b34d) bg_popup_window_pane_g8_ParamLimits

0xa766,	// (0x0004b34d) bg_popup_window_pane_g8

0xa772,	// (0x0004b359) bg_popup_window_pane_g9_ParamLimits

0xa772,	// (0x0004b359) bg_popup_window_pane_g9

0xa77e,	// (0x0004b365) bg_popup_window_pane_g10_ParamLimits

0xa77e,	// (0x0004b365) bg_popup_window_pane_g10

0x0009,

0xf8b5,	// (0x0005049c) bg_popup_window_pane_g_ParamLimits

0xf8b5,	// (0x0005049c) bg_popup_window_pane_g

0xa6a7,	// (0x0004b28e) bg_popup_heading_pane_ParamLimits

0xa6a7,	// (0x0004b28e) bg_popup_heading_pane

0x793b,	// (0x00048522) tabs_4_passive_pane_cp_srt_ParamLimits

0x793b,	// (0x00048522) tabs_4_passive_pane_cp_srt

0x794d,	// (0x00048534) tabs_4_passive_pane_srt_ParamLimits

0xa6bb,	// (0x0004b2a2) heading_pane_g2

0x794d,	// (0x00048534) tabs_4_passive_pane_srt

0x9494,	// (0x0004a07b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9494,	// (0x0004a07b) bg_passive_tab_pane_cp3_srt

0xa6c3,	// (0x0004b2aa) heading_pane_t1_ParamLimits

0xa6c3,	// (0x0004b2aa) heading_pane_t1

0xa6da,	// (0x0004b2c1) heading_pane_t2_ParamLimits

0xa6da,	// (0x0004b2c1) heading_pane_t2

0x0001,

0xf8b0,	// (0x00050497) heading_pane_t_ParamLimits

0xf8b0,	// (0x00050497) heading_pane_t

0xa1d2,	// (0x0004adb9) bg_popup_heading_pane_g1

0xa281,	// (0x0004ae68) bg_popup_heading_pane_g2

0xa28b,	// (0x0004ae72) bg_popup_heading_pane_g3

0xa295,	// (0x0004ae7c) bg_popup_heading_pane_g4

0xa29f,	// (0x0004ae86) bg_popup_heading_pane_g5

0xa2a9,	// (0x0004ae90) bg_popup_heading_pane_g6

0xa2b1,	// (0x0004ae98) bg_popup_heading_pane_g7

0xa2b9,	// (0x0004aea0) bg_popup_heading_pane_g8

0xa2c3,	// (0x0004aeaa) bg_popup_heading_pane_g9

0x0008,

0xf86c,	// (0x00050453) bg_popup_heading_pane_g

0x99ca,	// (0x0004a5b1) bg_popup_sub_pane_g1

0x99d2,	// (0x0004a5b9) bg_popup_sub_pane_g2

0x99da,	// (0x0004a5c1) bg_popup_sub_pane_g3

0x99e2,	// (0x0004a5c9) bg_popup_sub_pane_g4

0x99ea,	// (0x0004a5d1) bg_popup_sub_pane_g5

0x99f2,	// (0x0004a5d9) bg_popup_sub_pane_g6

0x99fa,	// (0x0004a5e1) bg_popup_sub_pane_g7

0x9a02,	// (0x0004a5e9) bg_popup_sub_pane_g8

0x9a0a,	// (0x0004a5f1) bg_popup_sub_pane_g9

0x0008,

0xf846,	// (0x0005042d) bg_popup_sub_pane_g

0x09fc,	// (0x000415e3) bg_popup_window_pane_cp5_ParamLimits

0x09fc,	// (0x000415e3) bg_popup_window_pane_cp5

0x0b4b,	// (0x00041732) popup_note_window_g1_ParamLimits

0x0b4b,	// (0x00041732) popup_note_window_g1

0x0b57,	// (0x0004173e) popup_note_window_t1_ParamLimits

0x0b57,	// (0x0004173e) popup_note_window_t1

0x0b6d,	// (0x00041754) popup_note_window_t2_ParamLimits

0x0b6d,	// (0x00041754) popup_note_window_t2

0x0b83,	// (0x0004176a) popup_note_window_t3_ParamLimits

0x0b83,	// (0x0004176a) popup_note_window_t3

0x0b99,	// (0x00041780) popup_note_window_t4_ParamLimits

0x0b99,	// (0x00041780) popup_note_window_t4

0x0bc1,	// (0x000417a8) popup_note_window_t5_ParamLimits

0x0bc1,	// (0x000417a8) popup_note_window_t5

0x0004,

0xf55a,	// (0x00050141) popup_note_window_t_ParamLimits

0xf55a,	// (0x00050141) popup_note_window_t

0x0c0b,	// (0x000417f2) bg_popup_window_pane_cp6_ParamLimits

0x0c0b,	// (0x000417f2) bg_popup_window_pane_cp6

0xa14e,	// (0x0004ad35) popup_note_image_window_g1_ParamLimits

0xa14e,	// (0x0004ad35) popup_note_image_window_g1

0xa15a,	// (0x0004ad41) popup_note_image_window_g2_ParamLimits

0xa15a,	// (0x0004ad41) popup_note_image_window_g2

0x0001,

0xf83a,	// (0x00050421) popup_note_image_window_g_ParamLimits

0xf83a,	// (0x00050421) popup_note_image_window_g

0xa173,	// (0x0004ad5a) popup_note_image_window_t1_ParamLimits

0xa173,	// (0x0004ad5a) popup_note_image_window_t1

0xa18c,	// (0x0004ad73) popup_note_image_window_t2_ParamLimits

0xa18c,	// (0x0004ad73) popup_note_image_window_t2

0xa1a5,	// (0x0004ad8c) popup_note_image_window_t3_ParamLimits

0xa1a5,	// (0x0004ad8c) popup_note_image_window_t3

0x0002,

0xf83f,	// (0x00050426) popup_note_image_window_t_ParamLimits

0xf83f,	// (0x00050426) popup_note_image_window_t

0xa00e,	// (0x0004abf5) bg_popup_window_pane_cp7_ParamLimits

0xa00e,	// (0x0004abf5) bg_popup_window_pane_cp7

0xa03e,	// (0x0004ac25) popup_note_wait_window_g1_ParamLimits

0xa03e,	// (0x0004ac25) popup_note_wait_window_g1

0xa04a,	// (0x0004ac31) popup_note_wait_window_g2_ParamLimits

0xa04a,	// (0x0004ac31) popup_note_wait_window_g2

0x0002,

0xf828,	// (0x0005040f) popup_note_wait_window_g_ParamLimits

0xf828,	// (0x0005040f) popup_note_wait_window_g

0xa062,	// (0x0004ac49) popup_note_wait_window_t1_ParamLimits

0xa062,	// (0x0004ac49) popup_note_wait_window_t1

0xa089,	// (0x0004ac70) popup_note_wait_window_t2_ParamLimits

0xa089,	// (0x0004ac70) popup_note_wait_window_t2

0xa0a7,	// (0x0004ac8e) popup_note_wait_window_t3_ParamLimits

0xa0a7,	// (0x0004ac8e) popup_note_wait_window_t3

0xa0ba,	// (0x0004aca1) popup_note_wait_window_t4_ParamLimits

0xa0ba,	// (0x0004aca1) popup_note_wait_window_t4

0x0004,

0xf82f,	// (0x00050416) popup_note_wait_window_t_ParamLimits

0xf82f,	// (0x00050416) popup_note_wait_window_t

0xa0df,	// (0x0004acc6) wait_bar_pane_ParamLimits

0xa0df,	// (0x0004acc6) wait_bar_pane

0x09ae,	// (0x00041595) wait_anim_pane

0x09ae,	// (0x00041595) wait_border_pane

0x09a4,	// (0x0004158b) wait_anim_pane_g1

0x09a4,	// (0x0004158b) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x000502ca) wait_anim_pane_g

0x9fb2,	// (0x0004ab99) wait_border_pane_g1

0x9fbd,	// (0x0004aba4) wait_border_pane_g2

0x9fc6,	// (0x0004abad) wait_border_pane_g3

0x0002,

0xf821,	// (0x00050408) wait_border_pane_g

0x9e1c,	// (0x0004aa03) bg_popup_window_pane_cp16_ParamLimits

0x9e1c,	// (0x0004aa03) bg_popup_window_pane_cp16

0x9f1c,	// (0x0004ab03) indicator_popup_pane_cp4_ParamLimits

0x9f1c,	// (0x0004ab03) indicator_popup_pane_cp4

0x9f30,	// (0x0004ab17) popup_query_data_window_t1_ParamLimits

0x9f30,	// (0x0004ab17) popup_query_data_window_t1

0x9f42,	// (0x0004ab29) popup_query_data_window_t2_ParamLimits

0x9f42,	// (0x0004ab29) popup_query_data_window_t2

0x9f5b,	// (0x0004ab42) popup_query_data_window_t3_ParamLimits

0x9f5b,	// (0x0004ab42) popup_query_data_window_t3

0x0002,

0xf81a,	// (0x00050401) popup_query_data_window_t_ParamLimits

0xf81a,	// (0x00050401) popup_query_data_window_t

0x9f75,	// (0x0004ab5c) query_popup_data_pane_ParamLimits

0x9f75,	// (0x0004ab5c) query_popup_data_pane

0x9f89,	// (0x0004ab70) query_popup_data_pane_cp1_ParamLimits

0x9f89,	// (0x0004ab70) query_popup_data_pane_cp1

0x9e1c,	// (0x0004aa03) bg_popup_window_pane_cp10_ParamLimits

0x9e1c,	// (0x0004aa03) bg_popup_window_pane_cp10

0x9e4e,	// (0x0004aa35) indicator_popup_pane_ParamLimits

0x9e4e,	// (0x0004aa35) indicator_popup_pane

0x9e70,	// (0x0004aa57) popup_query_code_window_t1_ParamLimits

0x9e70,	// (0x0004aa57) popup_query_code_window_t1

0x9e8a,	// (0x0004aa71) popup_query_code_window_t2_ParamLimits

0x9e8a,	// (0x0004aa71) popup_query_code_window_t2

0x9ed3,	// (0x0004aaba) popup_query_code_window_t3_ParamLimits

0x9ed3,	// (0x0004aaba) popup_query_code_window_t3

0x0002,

0xf813,	// (0x000503fa) popup_query_code_window_t_ParamLimits

0xf813,	// (0x000503fa) popup_query_code_window_t

0x9f02,	// (0x0004aae9) query_popup_pane_ParamLimits

0x9f02,	// (0x0004aae9) query_popup_pane

0x0c0b,	// (0x000417f2) bg_popup_window_pane_cp15_ParamLimits

0x0c0b,	// (0x000417f2) bg_popup_window_pane_cp15

0x0c2b,	// (0x00041812) indicator_popup_pane_cp1_ParamLimits

0x0c2b,	// (0x00041812) indicator_popup_pane_cp1

0x0c3e,	// (0x00041825) indicator_popup_pane_cp2_ParamLimits

0x0c3e,	// (0x00041825) indicator_popup_pane_cp2

0x0c59,	// (0x00041840) popup_query_data_code_window_g1_ParamLimits

0x0c59,	// (0x00041840) popup_query_data_code_window_g1

0x0c6c,	// (0x00041853) popup_query_data_code_window_t1_ParamLimits

0x0c6c,	// (0x00041853) popup_query_data_code_window_t1

0x0c7e,	// (0x00041865) popup_query_data_code_window_t2_ParamLimits

0x0c7e,	// (0x00041865) popup_query_data_code_window_t2

0x0c90,	// (0x00041877) popup_query_data_code_window_t3_ParamLimits

0x0c90,	// (0x00041877) popup_query_data_code_window_t3

0x0ca6,	// (0x0004188d) popup_query_data_code_window_t4_ParamLimits

0x0ca6,	// (0x0004188d) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0005014c) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0005014c) popup_query_data_code_window_t

0x8f97,	// (0x00049b7e) list_single_midp_graphic_pane_g3

0x0cc0,	// (0x000418a7) query_popup_data_pane_cp2_ParamLimits

0x0cd3,	// (0x000418ba) query_popup_pane_cp2_ParamLimits

0x0cd3,	// (0x000418ba) query_popup_pane_cp2

0x09ae,	// (0x00041595) bg_popup_window_pane_cp11

0x9e00,	// (0x0004a9e7) heading_pane_cp5

0x9e08,	// (0x0004a9ef) listscroll_popup_info_pane

0x09ae,	// (0x00041595) input_focus_pane_cp3

0x0cee,	// (0x000418d5) query_popup_pane_t1

0x0cfc,	// (0x000418e3) list_popup_info_pane_ParamLimits

0x0cfc,	// (0x000418e3) list_popup_info_pane

0x0d0b,	// (0x000418f2) listscroll_popup_info_pane_g1

0x0d13,	// (0x000418fa) scroll_pane_cp7

0x0d1d,	// (0x00041904) popup_info_list_pane_t1_ParamLimits

0x0d1d,	// (0x00041904) popup_info_list_pane_t1

0x0d37,	// (0x0004191e) popup_info_list_pane_t2_ParamLimits

0x0d37,	// (0x0004191e) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00050155) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00050155) popup_info_list_pane_t

0x09ae,	// (0x00041595) bg_popup_window_pane_cp12

0xb19c,	// (0x0004bd83) find_popup_pane

0x0a0a,	// (0x000415f1) bg_popup_window_pane_cp3

0x0d51,	// (0x00041938) heading_pane_cp3

0x0d60,	// (0x00041947) listscroll_popup_graphic_pane

0x09ae,	// (0x00041595) bg_popup_window_pane_cp4

0x659e,	// (0x00047185) heading_pane_cp4

0x0d70,	// (0x00041957) listscroll_popup_colour_pane

0x65a8,	// (0x0004718f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x65a8,	// (0x0004718f) cell_large_graphic_colour_none_popup_pane

0x65bc,	// (0x000471a3) grid_large_graphic_colour_popup_pane_ParamLimits

0x65bc,	// (0x000471a3) grid_large_graphic_colour_popup_pane

0x65e8,	// (0x000471cf) listscroll_popup_colour_pane_g1_ParamLimits

0x65e8,	// (0x000471cf) listscroll_popup_colour_pane_g1

0x65ff,	// (0x000471e6) listscroll_popup_colour_pane_g2_ParamLimits

0x65ff,	// (0x000471e6) listscroll_popup_colour_pane_g2

0x6616,	// (0x000471fd) listscroll_popup_colour_pane_g3_ParamLimits

0x6616,	// (0x000471fd) listscroll_popup_colour_pane_g3

0x6626,	// (0x0004720d) listscroll_popup_colour_pane_g4_ParamLimits

0x6626,	// (0x0004720d) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0005015a) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0005015a) listscroll_popup_colour_pane_g

0x0d78,	// (0x0004195f) scroll_pane_cp6_ParamLimits

0x0d78,	// (0x0004195f) scroll_pane_cp6

0x663a,	// (0x00047221) cell_large_graphic_colour_popup_pane_ParamLimits

0x663a,	// (0x00047221) cell_large_graphic_colour_popup_pane

0x0d8a,	// (0x00041971) cell_large_graphic_colour_none_popup_pane_t1

0x09ae,	// (0x00041595) grid_highlight_pane_cp5

0x0d99,	// (0x00041980) cell_large_graphic_colour_popup_pane_g1

0x0da1,	// (0x00041988) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00050163) cell_large_graphic_colour_popup_pane_g

0x0da9,	// (0x00041990) cell_large_graphic_colour_popup_pane_g2_copy1

0x0db2,	// (0x00041999) grid_highlight_pane_cp4

0x0dba,	// (0x000419a1) bg_popup_window_pane_cp8_ParamLimits

0x0dba,	// (0x000419a1) bg_popup_window_pane_cp8

0x0dd5,	// (0x000419bc) popup_snote_single_text_window_g1_ParamLimits

0x0dd5,	// (0x000419bc) popup_snote_single_text_window_g1

0x0de7,	// (0x000419ce) popup_snote_single_text_window_t1_ParamLimits

0x0de7,	// (0x000419ce) popup_snote_single_text_window_t1

0x0dfa,	// (0x000419e1) popup_snote_single_text_window_t2_ParamLimits

0x0dfa,	// (0x000419e1) popup_snote_single_text_window_t2

0x0e0d,	// (0x000419f4) popup_snote_single_text_window_t3_ParamLimits

0x0e0d,	// (0x000419f4) popup_snote_single_text_window_t3

0x0e46,	// (0x00041a2d) popup_snote_single_text_window_t4_ParamLimits

0x0e46,	// (0x00041a2d) popup_snote_single_text_window_t4

0x0e7a,	// (0x00041a61) popup_snote_single_text_window_t5_ParamLimits

0x0e7a,	// (0x00041a61) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00050168) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00050168) popup_snote_single_text_window_t

0x0ea9,	// (0x00041a90) bg_popup_window_pane_cp9_ParamLimits

0x0ea9,	// (0x00041a90) bg_popup_window_pane_cp9

0x0dd5,	// (0x000419bc) popup_snote_single_graphic_window_g1_ParamLimits

0x0dd5,	// (0x000419bc) popup_snote_single_graphic_window_g1

0x0eb7,	// (0x00041a9e) popup_snote_single_graphic_window_g2_ParamLimits

0x0eb7,	// (0x00041a9e) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00050173) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00050173) popup_snote_single_graphic_window_g

0x0ec3,	// (0x00041aaa) popup_snote_single_graphic_window_t1_ParamLimits

0x0ec3,	// (0x00041aaa) popup_snote_single_graphic_window_t1

0x0ed6,	// (0x00041abd) popup_snote_single_graphic_window_t2_ParamLimits

0x0ed6,	// (0x00041abd) popup_snote_single_graphic_window_t2

0x0ee9,	// (0x00041ad0) popup_snote_single_graphic_window_t3_ParamLimits

0x0ee9,	// (0x00041ad0) popup_snote_single_graphic_window_t3

0x0f22,	// (0x00041b09) popup_snote_single_graphic_window_t4_ParamLimits

0x0f22,	// (0x00041b09) popup_snote_single_graphic_window_t4

0x0f56,	// (0x00041b3d) popup_snote_single_graphic_window_t5_ParamLimits

0x0f56,	// (0x00041b3d) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00050178) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00050178) popup_snote_single_graphic_window_t

0xb0da,	// (0x0004bcc1) grid_graphic_popup_pane_ParamLimits

0xb0da,	// (0x0004bcc1) grid_graphic_popup_pane

0xb108,	// (0x0004bcef) listscroll_popup_graphic_pane_g1_ParamLimits

0xb108,	// (0x0004bcef) listscroll_popup_graphic_pane_g1

0xb11c,	// (0x0004bd03) listscroll_popup_graphic_pane_g2_ParamLimits

0xb11c,	// (0x0004bd03) listscroll_popup_graphic_pane_g2

0x0001,

0xf990,	// (0x00050577) listscroll_popup_graphic_pane_g_ParamLimits

0xf990,	// (0x00050577) listscroll_popup_graphic_pane_g

0xb130,	// (0x0004bd17) scroll_pane_cp5

0xb072,	// (0x0004bc59) cell_graphic_popup_pane_ParamLimits

0xb072,	// (0x0004bc59) cell_graphic_popup_pane

0xb053,	// (0x0004bc3a) cell_graphic_popup_pane_g1

0xb05b,	// (0x0004bc42) cell_graphic_popup_pane_g2

0x0da9,	// (0x00041990) cell_graphic_popup_pane_g3

0x0002,

0xf989,	// (0x00050570) cell_graphic_popup_pane_g

0xb064,	// (0x0004bc4b) cell_graphic_popup_pane_t2

0x0db2,	// (0x00041999) grid_highlight_pane_cp3

0x0f97,	// (0x00041b7e) list_gen_pane_ParamLimits

0x0f97,	// (0x00041b7e) list_gen_pane

0x0fbf,	// (0x00041ba6) scroll_pane

0xafab,	// (0x0004bb92) bg_list_pane_g1_ParamLimits

0xafab,	// (0x0004bb92) bg_list_pane_g1

0xafc8,	// (0x0004bbaf) bg_list_pane_g2_ParamLimits

0xafc8,	// (0x0004bbaf) bg_list_pane_g2

0xafdd,	// (0x0004bbc4) bg_list_pane_g3_ParamLimits

0xafdd,	// (0x0004bbc4) bg_list_pane_g3

0xaff1,	// (0x0004bbd8) bg_list_pane_g4_ParamLimits

0xaff1,	// (0x0004bbd8) bg_list_pane_g4

0xb005,	// (0x0004bbec) bg_list_pane_g5_ParamLimits

0xb005,	// (0x0004bbec) bg_list_pane_g5

0x0004,

0xf97e,	// (0x00050565) bg_list_pane_g_ParamLimits

0xf97e,	// (0x00050565) bg_list_pane_g

0xaf79,	// (0x0004bb60) list_double2_graphic_large_graphic_pane_ParamLimits

0xaf79,	// (0x0004bb60) list_double2_graphic_large_graphic_pane

0xaf79,	// (0x0004bb60) list_double2_graphic_pane_ParamLimits

0xaf79,	// (0x0004bb60) list_double2_graphic_pane

0xaf79,	// (0x0004bb60) list_double2_large_graphic_pane_ParamLimits

0xaf79,	// (0x0004bb60) list_double2_large_graphic_pane

0x58dd,	// (0x000464c4) list_double2_pane_ParamLimits

0x58dd,	// (0x000464c4) list_double2_pane

0xaf79,	// (0x0004bb60) list_double_graphic_heading_pane_ParamLimits

0xaf79,	// (0x0004bb60) list_double_graphic_heading_pane

0xaf79,	// (0x0004bb60) list_double_graphic_pane_ParamLimits

0xaf79,	// (0x0004bb60) list_double_graphic_pane

0xaf79,	// (0x0004bb60) list_double_heading_pane_ParamLimits

0xaf79,	// (0x0004bb60) list_double_heading_pane

0xaf79,	// (0x0004bb60) list_double_large_graphic_pane_ParamLimits

0xaf79,	// (0x0004bb60) list_double_large_graphic_pane

0xaf79,	// (0x0004bb60) list_double_number_pane_ParamLimits

0xaf79,	// (0x0004bb60) list_double_number_pane

0xaf79,	// (0x0004bb60) list_double_pane_ParamLimits

0xaf79,	// (0x0004bb60) list_double_pane

0xaf79,	// (0x0004bb60) list_double_time_pane_ParamLimits

0xaf79,	// (0x0004bb60) list_double_time_pane

0xaf79,	// (0x0004bb60) list_setting_number_pane_ParamLimits

0xaf79,	// (0x0004bb60) list_setting_number_pane

0xaf79,	// (0x0004bb60) list_setting_pane_ParamLimits

0xaf79,	// (0x0004bb60) list_setting_pane

0x78d3,	// (0x000484ba) list_single_2graphic_pane_ParamLimits

0x78d3,	// (0x000484ba) list_single_2graphic_pane

0x78d3,	// (0x000484ba) list_single_graphic_heading_pane_ParamLimits

0x78d3,	// (0x000484ba) list_single_graphic_heading_pane

0x78d3,	// (0x000484ba) list_single_graphic_pane_ParamLimits

0x78d3,	// (0x000484ba) list_single_graphic_pane

0x78d3,	// (0x000484ba) list_single_heading_pane_ParamLimits

0x78d3,	// (0x000484ba) list_single_heading_pane

0xaf90,	// (0x0004bb77) list_single_large_graphic_pane_ParamLimits

0xaf90,	// (0x0004bb77) list_single_large_graphic_pane

0x78d3,	// (0x000484ba) list_single_number_heading_pane_ParamLimits

0x78d3,	// (0x000484ba) list_single_number_heading_pane

0x78d3,	// (0x000484ba) list_single_number_pane_ParamLimits

0x78d3,	// (0x000484ba) list_single_number_pane

0x78d3,	// (0x000484ba) list_single_pane_ParamLimits

0x78d3,	// (0x000484ba) list_single_pane

0x09ae,	// (0x00041595) list_highlight_pane_cp1

0x6665,	// (0x0004724c) list_single_pane_g1_ParamLimits

0x6665,	// (0x0004724c) list_single_pane_g1

0x6671,	// (0x00047258) list_single_pane_g2_ParamLimits

0x6671,	// (0x00047258) list_single_pane_g2

0x0001,

0xf5ad,	// (0x00050194) list_single_pane_g_ParamLimits

0xf5ad,	// (0x00050194) list_single_pane_g

0x58c7,	// (0x000464ae) list_single_pane_t1_ParamLimits

0x58c7,	// (0x000464ae) list_single_pane_t1

0x6665,	// (0x0004724c) list_single_number_pane_g1_ParamLimits

0x6665,	// (0x0004724c) list_single_number_pane_g1

0x6671,	// (0x00047258) list_single_number_pane_g2_ParamLimits

0x6671,	// (0x00047258) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x00050194) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x00050194) list_single_number_pane_g

0x5869,	// (0x00046450) list_single_number_pane_t1_ParamLimits

0x5869,	// (0x00046450) list_single_number_pane_t1

0x587f,	// (0x00046466) list_single_number_pane_t2_ParamLimits

0x587f,	// (0x00046466) list_single_number_pane_t2

0x0001,

0xf93f,	// (0x00050526) list_single_number_pane_t_ParamLimits

0xf93f,	// (0x00050526) list_single_number_pane_t

0x4f95,	// (0x00045b7c) list_single_graphic_pane_g1_ParamLimits

0x4f95,	// (0x00045b7c) list_single_graphic_pane_g1

0x6665,	// (0x0004724c) list_single_graphic_pane_g2_ParamLimits

0x6665,	// (0x0004724c) list_single_graphic_pane_g2

0x6671,	// (0x00047258) list_single_graphic_pane_g3_ParamLimits

0x6671,	// (0x00047258) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00050183) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00050183) list_single_graphic_pane_g

0x4fa1,	// (0x00045b88) list_single_graphic_pane_t1_ParamLimits

0x4fa1,	// (0x00045b88) list_single_graphic_pane_t1

0x4fb7,	// (0x00045b9e) list_single_heading_pane_g1_ParamLimits

0x4fb7,	// (0x00045b9e) list_single_heading_pane_g1

0x6671,	// (0x00047258) list_single_heading_pane_g2_ParamLimits

0x6671,	// (0x00047258) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0005018a) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0005018a) list_single_heading_pane_g

0x4fca,	// (0x00045bb1) list_single_heading_pane_t1_ParamLimits

0x4fca,	// (0x00045bb1) list_single_heading_pane_t1

0x667d,	// (0x00047264) list_single_heading_pane_t2_ParamLimits

0x667d,	// (0x00047264) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0005018f) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0005018f) list_single_heading_pane_t

0x6665,	// (0x0004724c) list_single_number_heading_pane_g1_ParamLimits

0x6665,	// (0x0004724c) list_single_number_heading_pane_g1

0x6671,	// (0x00047258) list_single_number_heading_pane_g2_ParamLimits

0x6671,	// (0x00047258) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x00050194) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x00050194) list_single_number_heading_pane_g

0x4fe0,	// (0x00045bc7) list_single_number_heading_pane_t1_ParamLimits

0x4fe0,	// (0x00045bc7) list_single_number_heading_pane_t1

0x4ff6,	// (0x00045bdd) list_single_number_heading_pane_t2_ParamLimits

0x4ff6,	// (0x00045bdd) list_single_number_heading_pane_t2

0x5008,	// (0x00045bef) list_single_number_heading_pane_t3_ParamLimits

0x5008,	// (0x00045bef) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x00050199) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x00050199) list_single_number_heading_pane_t

0x501a,	// (0x00045c01) list_single_graphic_heading_pane_g1_ParamLimits

0x501a,	// (0x00045c01) list_single_graphic_heading_pane_g1

0x668f,	// (0x00047276) list_single_graphic_heading_pane_g4_ParamLimits

0x668f,	// (0x00047276) list_single_graphic_heading_pane_g4

0x6671,	// (0x00047258) list_single_graphic_heading_pane_g5_ParamLimits

0x6671,	// (0x00047258) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x000501a0) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x000501a0) list_single_graphic_heading_pane_g

0x4fe0,	// (0x00045bc7) list_single_graphic_heading_pane_t1_ParamLimits

0x4fe0,	// (0x00045bc7) list_single_graphic_heading_pane_t1

0x5032,	// (0x00045c19) list_single_graphic_heading_pane_t2_ParamLimits

0x5032,	// (0x00045c19) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x000501a7) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x000501a7) list_single_graphic_heading_pane_t

0x66a0,	// (0x00047287) list_single_large_graphic_pane_g1_ParamLimits

0x66a0,	// (0x00047287) list_single_large_graphic_pane_g1

0x6665,	// (0x0004724c) list_single_large_graphic_pane_g2_ParamLimits

0x6665,	// (0x0004724c) list_single_large_graphic_pane_g2

0x6671,	// (0x00047258) list_single_large_graphic_pane_g3_ParamLimits

0x6671,	// (0x00047258) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x000501ac) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x000501ac) list_single_large_graphic_pane_g

0x9fbd,	// (0x0004aba4) wait_border_pane_g2_copy1

0x66ac,	// (0x00047293) list_single_large_graphic_pane_g4_cp2

0x504a,	// (0x00045c31) list_single_large_graphic_pane_t1_ParamLimits

0x504a,	// (0x00045c31) list_single_large_graphic_pane_t1

0x8b1e,	// (0x00049705) list_double_pane_g1_ParamLimits

0x8b1e,	// (0x00049705) list_double_pane_g1

0x5060,	// (0x00045c47) list_double_pane_g2_ParamLimits

0x5060,	// (0x00045c47) list_double_pane_g2

0x0001,

0xf5cc,	// (0x000501b3) list_double_pane_g_ParamLimits

0xf5cc,	// (0x000501b3) list_double_pane_g

0x506c,	// (0x00045c53) list_double_pane_t1_ParamLimits

0x506c,	// (0x00045c53) list_double_pane_t1

0x5082,	// (0x00045c69) list_double_pane_t2_ParamLimits

0x5082,	// (0x00045c69) list_double_pane_t2

0x0001,

0xf5d1,	// (0x000501b8) list_double_pane_t_ParamLimits

0xf5d1,	// (0x000501b8) list_double_pane_t

0x5094,	// (0x00045c7b) list_double2_pane_g1_ParamLimits

0x5094,	// (0x00045c7b) list_double2_pane_g1

0x50a5,	// (0x00045c8c) list_double2_pane_g2_ParamLimits

0x50a5,	// (0x00045c8c) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x000501bd) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x000501bd) list_double2_pane_g

0x50b1,	// (0x00045c98) list_double2_pane_t1_ParamLimits

0x50b1,	// (0x00045c98) list_double2_pane_t1

0x50c7,	// (0x00045cae) list_double2_pane_t2_ParamLimits

0x50c7,	// (0x00045cae) list_double2_pane_t2

0x0001,

0xf5db,	// (0x000501c2) list_double2_pane_t_ParamLimits

0xf5db,	// (0x000501c2) list_double2_pane_t

0x8b1e,	// (0x00049705) list_double_number_pane_g1_ParamLimits

0x8b1e,	// (0x00049705) list_double_number_pane_g1

0x5060,	// (0x00045c47) list_double_number_pane_g2_ParamLimits

0x5060,	// (0x00045c47) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x000501b3) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x000501b3) list_double_number_pane_g

0x50d9,	// (0x00045cc0) list_double_number_pane_t1_ParamLimits

0x50d9,	// (0x00045cc0) list_double_number_pane_t1

0x50eb,	// (0x00045cd2) list_double_number_pane_t2_ParamLimits

0x50eb,	// (0x00045cd2) list_double_number_pane_t2

0x5101,	// (0x00045ce8) list_double_number_pane_t3_ParamLimits

0x5101,	// (0x00045ce8) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x000501c7) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x000501c7) list_double_number_pane_t

0x5113,	// (0x00045cfa) list_double_graphic_pane_g1_ParamLimits

0x5113,	// (0x00045cfa) list_double_graphic_pane_g1

0x511f,	// (0x00045d06) list_double_graphic_pane_g2_ParamLimits

0x511f,	// (0x00045d06) list_double_graphic_pane_g2

0x512e,	// (0x00045d15) list_double_graphic_pane_g3_ParamLimits

0x512e,	// (0x00045d15) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x000501ce) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x000501ce) list_double_graphic_pane_g

0x5146,	// (0x00045d2d) list_double_graphic_pane_t1_ParamLimits

0x5146,	// (0x00045d2d) list_double_graphic_pane_t1

0x515c,	// (0x00045d43) list_double_graphic_pane_t2_ParamLimits

0x515c,	// (0x00045d43) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x000501d7) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x000501d7) list_double_graphic_pane_t

0x516e,	// (0x00045d55) list_double2_graphic_pane_g1_ParamLimits

0x516e,	// (0x00045d55) list_double2_graphic_pane_g1

0x66b4,	// (0x0004729b) list_double2_graphic_pane_g2_ParamLimits

0x66b4,	// (0x0004729b) list_double2_graphic_pane_g2

0x66c0,	// (0x000472a7) list_double2_graphic_pane_g3_ParamLimits

0x66c0,	// (0x000472a7) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x000501dc) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x000501dc) list_double2_graphic_pane_g

0x517a,	// (0x00045d61) list_double2_graphic_pane_t1_ParamLimits

0x517a,	// (0x00045d61) list_double2_graphic_pane_t1

0x5190,	// (0x00045d77) list_double2_graphic_pane_t2_ParamLimits

0x5190,	// (0x00045d77) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x000501e3) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x000501e3) list_double2_graphic_pane_t

0x51a2,	// (0x00045d89) list_double_large_graphic_pane_g1_ParamLimits

0x51a2,	// (0x00045d89) list_double_large_graphic_pane_g1

0x51c1,	// (0x00045da8) list_double_large_graphic_pane_g2_ParamLimits

0x51c1,	// (0x00045da8) list_double_large_graphic_pane_g2

0x5060,	// (0x00045c47) list_double_large_graphic_pane_g3_ParamLimits

0x5060,	// (0x00045c47) list_double_large_graphic_pane_g3

0x66cc,	// (0x000472b3) list_double_large_graphic_pane_g4_ParamLimits

0x66cc,	// (0x000472b3) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x000501e8) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x000501e8) list_double_large_graphic_pane_g

0x51d7,	// (0x00045dbe) list_double_large_graphic_pane_t1_ParamLimits

0x51d7,	// (0x00045dbe) list_double_large_graphic_pane_t1

0x51f0,	// (0x00045dd7) list_double_large_graphic_pane_t2_ParamLimits

0x51f0,	// (0x00045dd7) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x000501f3) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x000501f3) list_double_large_graphic_pane_t

0x66f4,	// (0x000472db) list_double2_large_graphic_pane_g1_ParamLimits

0x66f4,	// (0x000472db) list_double2_large_graphic_pane_g1

0x6700,	// (0x000472e7) list_double2_large_graphic_pane_g2_ParamLimits

0x6700,	// (0x000472e7) list_double2_large_graphic_pane_g2

0x66c0,	// (0x000472a7) list_double2_large_graphic_pane_g3_ParamLimits

0x66c0,	// (0x000472a7) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x000501f8) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x000501f8) list_double2_large_graphic_pane_g

0x5202,	// (0x00045de9) list_double2_large_graphic_pane_t1_ParamLimits

0x5202,	// (0x00045de9) list_double2_large_graphic_pane_t1

0x5218,	// (0x00045dff) list_double2_large_graphic_pane_t2_ParamLimits

0x5218,	// (0x00045dff) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x000501ff) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x000501ff) list_double2_large_graphic_pane_t

0x522a,	// (0x00045e11) list_double_heading_pane_g1_ParamLimits

0x522a,	// (0x00045e11) list_double_heading_pane_g1

0x523b,	// (0x00045e22) list_double_heading_pane_g2_ParamLimits

0x523b,	// (0x00045e22) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x00050204) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x00050204) list_double_heading_pane_g

0x5247,	// (0x00045e2e) list_double_heading_pane_t1_ParamLimits

0x5247,	// (0x00045e2e) list_double_heading_pane_t1

0x525d,	// (0x00045e44) list_double_heading_pane_t2_ParamLimits

0x525d,	// (0x00045e44) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x00050209) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x00050209) list_double_heading_pane_t

0x526f,	// (0x00045e56) list_double_graphic_heading_pane_g1_ParamLimits

0x526f,	// (0x00045e56) list_double_graphic_heading_pane_g1

0x522a,	// (0x00045e11) list_double_graphic_heading_pane_g2_ParamLimits

0x522a,	// (0x00045e11) list_double_graphic_heading_pane_g2

0x523b,	// (0x00045e22) list_double_graphic_heading_pane_g3_ParamLimits

0x523b,	// (0x00045e22) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x0005020e) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x0005020e) list_double_graphic_heading_pane_g

0x527b,	// (0x00045e62) list_double_graphic_heading_pane_t1_ParamLimits

0x527b,	// (0x00045e62) list_double_graphic_heading_pane_t1

0x5291,	// (0x00045e78) list_double_graphic_heading_pane_t2_ParamLimits

0x5291,	// (0x00045e78) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x00050215) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x00050215) list_double_graphic_heading_pane_t

0x52a3,	// (0x00045e8a) list_double_time_pane_g1_ParamLimits

0x52a3,	// (0x00045e8a) list_double_time_pane_g1

0x52b4,	// (0x00045e9b) list_double_time_pane_g2_ParamLimits

0x52b4,	// (0x00045e9b) list_double_time_pane_g2

0x0001,

0xf633,	// (0x0005021a) list_double_time_pane_g_ParamLimits

0xf633,	// (0x0005021a) list_double_time_pane_g

0x52c0,	// (0x00045ea7) list_double_time_pane_t1_ParamLimits

0x52c0,	// (0x00045ea7) list_double_time_pane_t1

0x52d6,	// (0x00045ebd) list_double_time_pane_t2_ParamLimits

0x52d6,	// (0x00045ebd) list_double_time_pane_t2

0x52e8,	// (0x00045ecf) list_double_time_pane_t3_ParamLimits

0x52e8,	// (0x00045ecf) list_double_time_pane_t3

0x52fa,	// (0x00045ee1) list_double_time_pane_t4_ParamLimits

0x52fa,	// (0x00045ee1) list_double_time_pane_t4

0x0003,

0xf638,	// (0x0005021f) list_double_time_pane_t_ParamLimits

0xf638,	// (0x0005021f) list_double_time_pane_t

0x530c,	// (0x00045ef3) list_setting_pane_g1_ParamLimits

0x530c,	// (0x00045ef3) list_setting_pane_g1

0x5318,	// (0x00045eff) list_setting_pane_g2_ParamLimits

0x5318,	// (0x00045eff) list_setting_pane_g2

0x0001,

0xf641,	// (0x00050228) list_setting_pane_g_ParamLimits

0xf641,	// (0x00050228) list_setting_pane_g

0x5324,	// (0x00045f0b) list_setting_pane_t1_ParamLimits

0x5324,	// (0x00045f0b) list_setting_pane_t1

0x533e,	// (0x00045f25) list_setting_pane_t2_ParamLimits

0x533e,	// (0x00045f25) list_setting_pane_t2

0x0002,

0xf646,	// (0x0005022d) list_setting_pane_t_ParamLimits

0xf646,	// (0x0005022d) list_setting_pane_t

0x537d,	// (0x00045f64) set_value_pane_cp_ParamLimits

0x537d,	// (0x00045f64) set_value_pane_cp

0x538b,	// (0x00045f72) list_setting_number_pane_g1_ParamLimits

0x538b,	// (0x00045f72) list_setting_number_pane_g1

0x5397,	// (0x00045f7e) list_setting_number_pane_g2_ParamLimits

0x5397,	// (0x00045f7e) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x00050234) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x00050234) list_setting_number_pane_g

0x53a3,	// (0x00045f8a) list_setting_number_pane_t1_ParamLimits

0x53a3,	// (0x00045f8a) list_setting_number_pane_t1

0x53bc,	// (0x00045fa3) list_setting_number_pane_t2_ParamLimits

0x53bc,	// (0x00045fa3) list_setting_number_pane_t2

0x53d6,	// (0x00045fbd) list_setting_number_pane_t3_ParamLimits

0x53d6,	// (0x00045fbd) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x00050239) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x00050239) list_setting_number_pane_t

0x537d,	// (0x00045f64) set_value_pane_ParamLimits

0x537d,	// (0x00045f64) set_value_pane

0x0ff3,	// (0x00041bda) bg_set_opt_pane_ParamLimits

0x0ff3,	// (0x00041bda) bg_set_opt_pane

0x5419,	// (0x00046000) set_value_pane_t1

0x1014,	// (0x00041bfb) slider_set_pane_cp3

0x101d,	// (0x00041c04) volume_small_pane_cp

0x1026,	// (0x00041c0d) list_form_gen_pane

0x102f,	// (0x00041c16) scroll_pane_cp8

0x542f,	// (0x00046016) form_field_data_pane_ParamLimits

0x542f,	// (0x00046016) form_field_data_pane

0x5457,	// (0x0004603e) form_field_data_wide_pane_ParamLimits

0x5457,	// (0x0004603e) form_field_data_wide_pane

0x547e,	// (0x00046065) form_field_popup_pane_ParamLimits

0x547e,	// (0x00046065) form_field_popup_pane

0x54a0,	// (0x00046087) form_field_popup_wide_pane_ParamLimits

0x54a0,	// (0x00046087) form_field_popup_wide_pane

0x54c1,	// (0x000460a8) form_field_slider_pane_ParamLimits

0x54c1,	// (0x000460a8) form_field_slider_pane

0x54d4,	// (0x000460bb) form_field_slider_wide_pane_ParamLimits

0x54d4,	// (0x000460bb) form_field_slider_wide_pane

0x1040,	// (0x00041c27) data_form_pane

0x54f1,	// (0x000460d8) form_field_data_pane_t1

0x104c,	// (0x00041c33) input_focus_pane

0x550b,	// (0x000460f2) data_form_wide_pane

0x5528,	// (0x0004610f) form_field_data_wide_pane_t1

0x0dc7,	// (0x000419ae) input_focus_pane_cp6

0x554a,	// (0x00046131) form_field_popup_pane_t1

0x104c,	// (0x00041c33) input_focus_pane_cp7

0x107a,	// (0x00041c61) list_form_pane

0x556c,	// (0x00046153) form_field_popup_wide_pane_t1

0x104c,	// (0x00041c33) input_focus_pane_cp8

0x1086,	// (0x00041c6d) list_form_wide_pane

0x5589,	// (0x00046170) form_field_slider_pane_t1_ParamLimits

0x5589,	// (0x00046170) form_field_slider_pane_t1

0x55a1,	// (0x00046188) form_field_slider_pane_t2_ParamLimits

0x55a1,	// (0x00046188) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x00050249) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x00050249) form_field_slider_pane_t

0x09fc,	// (0x000415e3) input_focus_pane_cp9_ParamLimits

0x09fc,	// (0x000415e3) input_focus_pane_cp9

0x55b6,	// (0x0004619d) slider_cont_pane_ParamLimits

0x55b6,	// (0x0004619d) slider_cont_pane

0x1092,	// (0x00041c79) form_field_slider_wide_pane_t1_ParamLimits

0x1092,	// (0x00041c79) form_field_slider_wide_pane_t1

0x55ca,	// (0x000461b1) form_field_slider_wide_pane_t2_ParamLimits

0x55ca,	// (0x000461b1) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x0005024e) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x0005024e) form_field_slider_wide_pane_t

0x09fc,	// (0x000415e3) input_focus_pane_cp10_ParamLimits

0x09fc,	// (0x000415e3) input_focus_pane_cp10

0x55dc,	// (0x000461c3) slider_cont_pane_cp1_ParamLimits

0x55dc,	// (0x000461c3) slider_cont_pane_cp1

0x55f0,	// (0x000461d7) slider_form_pane_cp

0x10a4,	// (0x00041c8b) input_focus_pane_g1

0x10ac,	// (0x00041c93) input_focus_pane_g2

0x10b4,	// (0x00041c9b) input_focus_pane_g3

0x10bc,	// (0x00041ca3) input_focus_pane_g4

0x10c4,	// (0x00041cab) input_focus_pane_g5

0x10cc,	// (0x00041cb3) input_focus_pane_g6

0x10d4,	// (0x00041cbb) input_focus_pane_g7

0x10dc,	// (0x00041cc3) input_focus_pane_g8

0x10e4,	// (0x00041ccb) input_focus_pane_g9

0x09a4,	// (0x0004158b) input_focus_pane_g10

0x0009,

0xf66c,	// (0x00050253) input_focus_pane_g

0x9fc6,	// (0x0004abad) wait_border_pane_g3_copy1

0x55f8,	// (0x000461df) data_form_pane_t1

0x09a4,	// (0x0004158b) wait_anim_pane_g1_copy1

0x5891,	// (0x00046478) data_form_wide_pane_t1

0x5617,	// (0x000461fe) list_form_graphic_pane_cp_ParamLimits

0x5617,	// (0x000461fe) list_form_graphic_pane_cp

0xaf1d,	// (0x0004bb04) slider_form_pane_g1

0xaf26,	// (0x0004bb0d) slider_form_pane_g2

0x0006,

0xf96f,	// (0x00050556) slider_form_pane_g

0x5617,	// (0x000461fe) list_form_graphic_pane_ParamLimits

0x5617,	// (0x000461fe) list_form_graphic_pane

0x5629,	// (0x00046210) list_form_graphic_pane_g1

0x5631,	// (0x00046218) list_form_graphic_pane_t1_ParamLimits

0x5631,	// (0x00046218) list_form_graphic_pane_t1

0x0a0a,	// (0x000415f1) list_highlight_pane_cp5_ParamLimits

0x0a0a,	// (0x000415f1) list_highlight_pane_cp5

0x5646,	// (0x0004622d) find_pane_g1

0x3ec2,	// (0x00044aa9) input_find_pane

0x564f,	// (0x00046236) input_find_pane_g1_ParamLimits

0x564f,	// (0x00046236) input_find_pane_g1

0x565b,	// (0x00046242) input_find_pane_t1_ParamLimits

0x565b,	// (0x00046242) input_find_pane_t1

0x5670,	// (0x00046257) input_find_pane_t2_ParamLimits

0x5670,	// (0x00046257) input_find_pane_t2

0x0001,

0xf681,	// (0x00050268) input_find_pane_t_ParamLimits

0xf681,	// (0x00050268) input_find_pane_t

0x3ecb,	// (0x00044ab2) input_focus_pane_cp5_ParamLimits

0x3ecb,	// (0x00044ab2) input_focus_pane_cp5

0x3ede,	// (0x00044ac5) bg_popup_window_pane_cp2_ParamLimits

0x3ede,	// (0x00044ac5) bg_popup_window_pane_cp2

0x3eeb,	// (0x00044ad2) listscroll_menu_pane_ParamLimits

0x3eeb,	// (0x00044ad2) listscroll_menu_pane

0x671d,	// (0x00047304) popup_submenu_window_ParamLimits

0x671d,	// (0x00047304) popup_submenu_window

0x3ef7,	// (0x00044ade) find_popup_pane_g1

0x3eff,	// (0x00044ae6) input_popup_find_pane_cp

0x3f09,	// (0x00044af0) input_focus_pane_cp4_ParamLimits

0x3f09,	// (0x00044af0) input_focus_pane_cp4

0x3f17,	// (0x00044afe) input_popup_find_pane_t1_ParamLimits

0x3f17,	// (0x00044afe) input_popup_find_pane_t1

0x09ae,	// (0x00041595) bg_popup_sub_pane_cp

0x3f45,	// (0x00044b2c) listscroll_popup_sub_pane

0x3f4d,	// (0x00044b34) list_submenu_pane_ParamLimits

0x3f4d,	// (0x00044b34) list_submenu_pane

0x3f5e,	// (0x00044b45) scroll_pane_cp4

0x3f66,	// (0x00044b4d) list_single_popup_submenu_pane_ParamLimits

0x3f66,	// (0x00044b4d) list_single_popup_submenu_pane

0x3f7b,	// (0x00044b62) list_single_popup_submenu_pane_g1

0x3f83,	// (0x00044b6a) list_single_popup_submenu_pane_t1_ParamLimits

0x3f83,	// (0x00044b6a) list_single_popup_submenu_pane_t1

0x0a0a,	// (0x000415f1) bg_active_tab_pane_cp1_ParamLimits

0x0a0a,	// (0x000415f1) bg_active_tab_pane_cp1

0x675b,	// (0x00047342) tabs_2_active_pane_g1

0x6763,	// (0x0004734a) tabs_2_active_pane_t1

0x0a0a,	// (0x000415f1) bg_passive_tab_pane_cp1_ParamLimits

0x0a0a,	// (0x000415f1) bg_passive_tab_pane_cp1

0x675b,	// (0x00047342) tabs_2_passive_pane_g1

0x6763,	// (0x0004734a) tabs_2_passive_pane_t1

0x6775,	// (0x0004735c) bg_active_tab_pane_cp4

0x6783,	// (0x0004736a) tabs_2_long_active_pane_t1

0x6796,	// (0x0004737d) bg_passive_tab_pane_cp4

0x755e,	// (0x00048145) list_single_midp_graphic_pane_g4_ParamLimits

0x6775,	// (0x0004735c) bg_active_tab_pane_cp5

0x67a2,	// (0x00047389) tabs_3_long_active_pane_t1

0x6796,	// (0x0004737d) bg_passive_tab_pane_cp5

0x755e,	// (0x00048145) list_single_midp_graphic_pane_g4

0x0a0a,	// (0x000415f1) bg_popup_window_pane_cp13_ParamLimits

0x0a0a,	// (0x000415f1) bg_popup_window_pane_cp13

0x3fa1,	// (0x00044b88) listscroll_popup_fast_pane_ParamLimits

0x3fa1,	// (0x00044b88) listscroll_popup_fast_pane

0x3fb0,	// (0x00044b97) grid_popup_fast_pane_ParamLimits

0x3fb0,	// (0x00044b97) grid_popup_fast_pane

0x3fc2,	// (0x00044ba9) scroll_pane_cp9_ParamLimits

0x3fc2,	// (0x00044ba9) scroll_pane_cp9

0xc856,	// (0x0004d43d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc856,	// (0x0004d43d) list_single_graphic_hl_pane_t1_cp2

0x3fe6,	// (0x00044bcd) input_focus_pane_cp20_ParamLimits

0x3fe6,	// (0x00044bcd) input_focus_pane_cp20

0x3ff4,	// (0x00044bdb) query_popup_data_pane_t1_ParamLimits

0x3ff4,	// (0x00044bdb) query_popup_data_pane_t1

0x4007,	// (0x00044bee) query_popup_data_pane_t2_ParamLimits

0x4007,	// (0x00044bee) query_popup_data_pane_t2

0x404d,	// (0x00044c34) query_popup_data_pane_t3_ParamLimits

0x404d,	// (0x00044c34) query_popup_data_pane_t3

0x408e,	// (0x00044c75) query_popup_data_pane_t4_ParamLimits

0x408e,	// (0x00044c75) query_popup_data_pane_t4

0x40ca,	// (0x00044cb1) query_popup_data_pane_t5_ParamLimits

0x40ca,	// (0x00044cb1) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x0005026d) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x0005026d) query_popup_data_pane_t

0x10a4,	// (0x00041c8b) bg_set_opt_pane_g1

0x10ac,	// (0x00041c93) bg_set_opt_pane_g2

0x10b4,	// (0x00041c9b) bg_set_opt_pane_g3

0x10bc,	// (0x00041ca3) bg_set_opt_pane_g4

0x10c4,	// (0x00041cab) bg_set_opt_pane_g5

0x10cc,	// (0x00041cb3) bg_set_opt_pane_g6

0x10d4,	// (0x00041cbb) bg_set_opt_pane_g7

0x10dc,	// (0x00041cc3) bg_set_opt_pane_g8

0x10e4,	// (0x00041ccb) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x00050278) bg_set_opt_pane_g

0x6b56,	// (0x0004773d) control_top_pane_stacon_ParamLimits

0x6b56,	// (0x0004773d) control_top_pane_stacon

0x6ba9,	// (0x00047790) signal_pane_stacon_ParamLimits

0x6ba9,	// (0x00047790) signal_pane_stacon

0x8e02,	// (0x000499e9) stacon_top_pane_g1_ParamLimits

0x8e02,	// (0x000499e9) stacon_top_pane_g1

0x6bce,	// (0x000477b5) title_pane_stacon_ParamLimits

0x6bce,	// (0x000477b5) title_pane_stacon

0x6bf8,	// (0x000477df) uni_indicator_pane_stacon_ParamLimits

0x6bf8,	// (0x000477df) uni_indicator_pane_stacon

0x6c0d,	// (0x000477f4) battery_pane_stacon_ParamLimits

0x6c0d,	// (0x000477f4) battery_pane_stacon

0x6c51,	// (0x00047838) control_bottom_pane_stacon_ParamLimits

0x6c51,	// (0x00047838) control_bottom_pane_stacon

0x6c74,	// (0x0004785b) navi_pane_stacon_ParamLimits

0x6c74,	// (0x0004785b) navi_pane_stacon

0x8e24,	// (0x00049a0b) stacon_bottom_pane_g1_ParamLimits

0x8e24,	// (0x00049a0b) stacon_bottom_pane_g1

0x67b4,	// (0x0004739b) aid_levels_signal_lsc_ParamLimits

0x67b4,	// (0x0004739b) aid_levels_signal_lsc

0x67cb,	// (0x000473b2) signal_pane_stacon_g1_ParamLimits

0x67cb,	// (0x000473b2) signal_pane_stacon_g1

0x67df,	// (0x000473c6) signal_pane_stacon_g2_ParamLimits

0x67df,	// (0x000473c6) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x0005028b) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0005028b) signal_pane_stacon_g

0x6814,	// (0x000473fb) title_pane_stacon_t1_ParamLimits

0x6814,	// (0x000473fb) title_pane_stacon_t1

0x41a7,	// (0x00044d8e) uni_indicator_pane_stacon_g1

0x41b1,	// (0x00044d98) uni_indicator_pane_stacon_g2

0x4193,	// (0x00044d7a) uni_indicator_pane_stacon_g3

0x419d,	// (0x00044d84) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x00050297) uni_indicator_pane_stacon_g

0x6839,	// (0x00047420) control_top_pane_stacon_g1

0x6841,	// (0x00047428) control_top_pane_stacon_t1_ParamLimits

0x6841,	// (0x00047428) control_top_pane_stacon_t1

0x6878,	// (0x0004745f) aid_levels_battery_lsc_ParamLimits

0x6878,	// (0x0004745f) aid_levels_battery_lsc

0x6890,	// (0x00047477) battery_pane_stacon_g1_ParamLimits

0x6890,	// (0x00047477) battery_pane_stacon_g1

0x68a3,	// (0x0004748a) battery_pane_stacon_g2_ParamLimits

0x68a3,	// (0x0004748a) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x000502a0) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x000502a0) battery_pane_stacon_g

0x68e1,	// (0x000474c8) navi_icon_pane_stacon

0x68f5,	// (0x000474dc) navi_navi_pane_stacon

0x68e1,	// (0x000474c8) navi_text_pane_stacon

0x6839,	// (0x00047420) control_bottom_pane_stacon_g1

0x690b,	// (0x000474f2) control_bottom_pane_stacon_t1_ParamLimits

0x690b,	// (0x000474f2) control_bottom_pane_stacon_t1

0x6942,	// (0x00047529) grid_app_pane_ParamLimits

0x6942,	// (0x00047529) grid_app_pane

0x6964,	// (0x0004754b) scroll_pane_cp15_ParamLimits

0x6964,	// (0x0004754b) scroll_pane_cp15

0x6977,	// (0x0004755e) cell_app_pane_ParamLimits

0x6977,	// (0x0004755e) cell_app_pane

0x69a3,	// (0x0004758a) cell_app_pane_g1_ParamLimits

0x69a3,	// (0x0004758a) cell_app_pane_g1

0x42de,	// (0x00044ec5) cell_app_pane_g2_ParamLimits

0x42de,	// (0x00044ec5) cell_app_pane_g2

0x0001,

0xf6be,	// (0x000502a5) cell_app_pane_g_ParamLimits

0xf6be,	// (0x000502a5) cell_app_pane_g

0x69c7,	// (0x000475ae) cell_app_pane_t1_ParamLimits

0x69c7,	// (0x000475ae) cell_app_pane_t1

0x42ea,	// (0x00044ed1) grid_highlight_pane_ParamLimits

0x42ea,	// (0x00044ed1) grid_highlight_pane

0x10a4,	// (0x00041c8b) cell_highlight_pane_g1

0x10ac,	// (0x00041c93) cell_highlight_pane_g2

0x10b4,	// (0x00041c9b) cell_highlight_pane_g3

0x10bc,	// (0x00041ca3) cell_highlight_pane_g4

0x10c4,	// (0x00041cab) cell_highlight_pane_g5

0x10cc,	// (0x00041cb3) cell_highlight_pane_g6

0x10d4,	// (0x00041cbb) cell_highlight_pane_g7

0x10dc,	// (0x00041cc3) cell_highlight_pane_g8

0x10e4,	// (0x00041ccb) cell_highlight_pane_g9

0x09a4,	// (0x0004158b) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x00050253) cell_highlight_pane_g

0x4305,	// (0x00044eec) bg_scroll_pane

0x69f1,	// (0x000475d8) scroll_handle_pane

0x4375,	// (0x00044f5c) scroll_bg_pane_g1

0x438a,	// (0x00044f71) scroll_bg_pane_g2

0x43a2,	// (0x00044f89) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x000502aa) scroll_bg_pane_g

0x43b7,	// (0x00044f9e) scroll_handle_focus_pane_ParamLimits

0x43b7,	// (0x00044f9e) scroll_handle_focus_pane

0x4375,	// (0x00044f5c) scroll_handle_pane_g1

0x43c4,	// (0x00044fab) scroll_handle_pane_g2

0x43a2,	// (0x00044f89) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x000502b1) scroll_handle_pane_g

0x3f09,	// (0x00044af0) bg_popup_sub_pane_cp21_ParamLimits

0x3f09,	// (0x00044af0) bg_popup_sub_pane_cp21

0x43d8,	// (0x00044fbf) popup_fep_japan_predictive_window_t1_ParamLimits

0x43d8,	// (0x00044fbf) popup_fep_japan_predictive_window_t1

0x43ef,	// (0x00044fd6) popup_fep_japan_predictive_window_t2_ParamLimits

0x43ef,	// (0x00044fd6) popup_fep_japan_predictive_window_t2

0x4422,	// (0x00045009) popup_fep_japan_predictive_window_t3_ParamLimits

0x4422,	// (0x00045009) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x000502b8) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x000502b8) popup_fep_japan_predictive_window_t

0x09ae,	// (0x00041595) bg_popup_sub_pane_cp23

0x4459,	// (0x00045040) listscroll_japin_cand_pane

0x4461,	// (0x00045048) popup_fep_japan_candidate_window_t1

0x446f,	// (0x00045056) candidate_pane_ParamLimits

0x446f,	// (0x00045056) candidate_pane

0x4481,	// (0x00045068) scroll_pane_cp30

0x448b,	// (0x00045072) list_single_popup_jap_candidate_pane_ParamLimits

0x448b,	// (0x00045072) list_single_popup_jap_candidate_pane

0x09ae,	// (0x00041595) list_highlight_pane_cp30

0x449f,	// (0x00045086) list_single_popup_jap_candidate_pane_t1

0x6a1a,	// (0x00047601) level_1_signal

0x6a27,	// (0x0004760e) level_2_signal

0x6a34,	// (0x0004761b) level_3_signal

0x6a41,	// (0x00047628) level_4_signal

0x8b2a,	// (0x00049711) level_5_signal

0x8b37,	// (0x0004971e) level_6_signal

0x8b44,	// (0x0004972b) level_7_signal

0x6a1a,	// (0x00047601) level_1_battery

0x6a27,	// (0x0004760e) level_2_battery

0x6a34,	// (0x0004761b) level_3_battery

0x6a41,	// (0x00047628) level_4_battery

0x8b2a,	// (0x00049711) level_5_battery

0x8b37,	// (0x0004971e) level_6_battery

0x8b44,	// (0x0004972b) level_7_battery

0x8b69,	// (0x00049750) list_menu_pane_ParamLimits

0x8b69,	// (0x00049750) list_menu_pane

0x8b7f,	// (0x00049766) scroll_pane_cp25_ParamLimits

0x8b7f,	// (0x00049766) scroll_pane_cp25

0x8b98,	// (0x0004977f) list_double2_graphic_pane_cp2_ParamLimits

0x8b98,	// (0x0004977f) list_double2_graphic_pane_cp2

0x8b98,	// (0x0004977f) list_double2_large_graphic_pane_cp2_ParamLimits

0x8b98,	// (0x0004977f) list_double2_large_graphic_pane_cp2

0x8b98,	// (0x0004977f) list_double2_pane_cp2_ParamLimits

0x8b98,	// (0x0004977f) list_double2_pane_cp2

0x8b98,	// (0x0004977f) list_double_graphic_pane_cp2_ParamLimits

0x8b98,	// (0x0004977f) list_double_graphic_pane_cp2

0x8b98,	// (0x0004977f) list_double_large_graphic_pane_cp2_ParamLimits

0x8b98,	// (0x0004977f) list_double_large_graphic_pane_cp2

0x8b98,	// (0x0004977f) list_double_number_pane_cp2_ParamLimits

0x8b98,	// (0x0004977f) list_double_number_pane_cp2

0x8b98,	// (0x0004977f) list_double_pane_cp2_ParamLimits

0x8b98,	// (0x0004977f) list_double_pane_cp2

0x8bbe,	// (0x000497a5) list_single_2graphic_pane_cp2_ParamLimits

0x8bbe,	// (0x000497a5) list_single_2graphic_pane_cp2

0x8bbe,	// (0x000497a5) list_single_graphic_heading_pane_cp2_ParamLimits

0x8bbe,	// (0x000497a5) list_single_graphic_heading_pane_cp2

0x8bbe,	// (0x000497a5) list_single_graphic_pane_cp2_ParamLimits

0x8bbe,	// (0x000497a5) list_single_graphic_pane_cp2

0x8bbe,	// (0x000497a5) list_single_heading_pane_cp2_ParamLimits

0x8bbe,	// (0x000497a5) list_single_heading_pane_cp2

0x8bdb,	// (0x000497c2) list_single_large_graphic_pane_cp2_ParamLimits

0x8bdb,	// (0x000497c2) list_single_large_graphic_pane_cp2

0x8bbe,	// (0x000497a5) list_single_number_heading_pane_cp2_ParamLimits

0x8bbe,	// (0x000497a5) list_single_number_heading_pane_cp2

0x8bbe,	// (0x000497a5) list_single_number_pane_cp2_ParamLimits

0x8bbe,	// (0x000497a5) list_single_number_pane_cp2

0x8bbe,	// (0x000497a5) list_single_pane_cp2_ParamLimits

0x8bbe,	// (0x000497a5) list_single_pane_cp2

0x8c49,	// (0x00049830) bg_popup_sub_pane_cp22

0x6ad7,	// (0x000476be) popup_side_volume_key_window_g1

0x6b01,	// (0x000476e8) popup_side_volume_key_window_t1

0x6b1f,	// (0x00047706) volume_small_pane_cp1

0x09fc,	// (0x000415e3) bg_popup_sub_pane_cp24_ParamLimits

0x09fc,	// (0x000415e3) bg_popup_sub_pane_cp24

0x8c5f,	// (0x00049846) fep_china_uni_candidate_pane_ParamLimits

0x8c5f,	// (0x00049846) fep_china_uni_candidate_pane

0x8c73,	// (0x0004985a) fep_china_uni_entry_pane

0x8c83,	// (0x0004986a) popup_fep_china_uni_window_g1

0x8c9f,	// (0x00049886) fep_china_uni_entry_pane_g1

0x8ca9,	// (0x00049890) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x000502e9) fep_china_uni_entry_pane_g

0x8cb3,	// (0x0004989a) fep_entry_item_pane

0x8cbd,	// (0x000498a4) fep_candidate_item_pane

0x8cc5,	// (0x000498ac) fep_china_uni_candidate_pane_g1

0x8ccf,	// (0x000498b6) fep_china_uni_candidate_pane_g2

0x8cd7,	// (0x000498be) fep_china_uni_candidate_pane_g3

0x8cdf,	// (0x000498c6) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x000502ee) fep_china_uni_candidate_pane_g

0x09a4,	// (0x0004158b) fep_entry_item_pane_g1

0x8ce9,	// (0x000498d0) fep_entry_item_pane_t1_ParamLimits

0x8ce9,	// (0x000498d0) fep_entry_item_pane_t1

0x8cff,	// (0x000498e6) fep_candidate_item_pane_t1_ParamLimits

0x8cff,	// (0x000498e6) fep_candidate_item_pane_t1

0x8d14,	// (0x000498fb) fep_candidate_item_pane_t2_ParamLimits

0x8d14,	// (0x000498fb) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x000502f7) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x000502f7) fep_candidate_item_pane_t

0x0a0a,	// (0x000415f1) list_highlight_pane_cp31_ParamLimits

0x0a0a,	// (0x000415f1) list_highlight_pane_cp31

0x8d26,	// (0x0004990d) level_1_signal_lsc

0x8d2f,	// (0x00049916) level_2_signal_lsc

0x8d38,	// (0x0004991f) level_3_signal_lsc

0x8d41,	// (0x00049928) level_4_signal_lsc

0x8d4a,	// (0x00049931) level_5_signal_lsc

0x8d53,	// (0x0004993a) level_6_signal_lsc

0x8d5c,	// (0x00049943) level_7_signal_lsc

0x8d5c,	// (0x00049943) level_1_battery_lsc

0x8d65,	// (0x0004994c) level_2_battery_lsc

0x8d6e,	// (0x00049955) level_3_battery_lsc

0x8d77,	// (0x0004995e) level_4_battery_lsc

0x8d80,	// (0x00049967) level_5_battery_lsc

0x8d89,	// (0x00049970) level_6_battery_lsc

0x8d26,	// (0x0004990d) level_7_battery_lsc

0x8d92,	// (0x00049979) scroll_handle_focus_pane_g1

0x8d9b,	// (0x00049982) scroll_handle_focus_pane_g2

0x8da4,	// (0x0004998b) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x000502fc) scroll_handle_focus_pane_g

0x5685,	// (0x0004626c) list_single_2graphic_pane_g1_ParamLimits

0x5685,	// (0x0004626c) list_single_2graphic_pane_g1

0x668f,	// (0x00047276) list_single_2graphic_pane_g2_ParamLimits

0x668f,	// (0x00047276) list_single_2graphic_pane_g2

0x6671,	// (0x00047258) list_single_2graphic_pane_g3_ParamLimits

0x6671,	// (0x00047258) list_single_2graphic_pane_g3

0x6b27,	// (0x0004770e) list_single_2graphic_pane_g4_ParamLimits

0x6b27,	// (0x0004770e) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x00050303) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x00050303) list_single_2graphic_pane_g

0x5691,	// (0x00046278) list_single_2graphic_pane_t1_ParamLimits

0x5691,	// (0x00046278) list_single_2graphic_pane_t1

0x6b38,	// (0x0004771f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6b38,	// (0x0004771f) list_double2_graphic_large_graphic_pane_g1

0x6700,	// (0x000472e7) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x6700,	// (0x000472e7) list_double2_graphic_large_graphic_pane_g2

0x66c0,	// (0x000472a7) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x66c0,	// (0x000472a7) list_double2_graphic_large_graphic_pane_g3

0x6b4a,	// (0x00047731) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6b4a,	// (0x00047731) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x0005030c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x0005030c) list_double2_graphic_large_graphic_pane_g

0x56bf,	// (0x000462a6) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x56bf,	// (0x000462a6) list_double2_graphic_large_graphic_pane_t1

0x56d5,	// (0x000462bc) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x56d5,	// (0x000462bc) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x00050315) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x00050315) list_double2_graphic_large_graphic_pane_t

0x8ee7,	// (0x00049ace) popup_fast_swap_window_ParamLimits

0x8ee7,	// (0x00049ace) popup_fast_swap_window

0x8f05,	// (0x00049aec) popup_side_volume_key_window

0x8f23,	// (0x00049b0a) stacon_top_pane

0x8f2d,	// (0x00049b14) status_pane_ParamLimits

0x8f2d,	// (0x00049b14) status_pane

0x8f3b,	// (0x00049b22) status_small_pane

0x09ae,	// (0x00041595) control_pane

0x09ae,	// (0x00041595) stacon_bottom_pane

0x102f,	// (0x00041c16) scroll_pane_cp121

0x1026,	// (0x00041c0d) set_content_pane

0x8dad,	// (0x00049994) bg_active_tab_pane_g1_cp1

0x8db6,	// (0x0004999d) bg_active_tab_pane_g2_cp1

0x8dbf,	// (0x000499a6) bg_active_tab_pane_g3_cp1

0x8dad,	// (0x00049994) bg_passive_tab_pane_g1_cp1

0x8db6,	// (0x0004999d) bg_passive_tab_pane_g2_cp1

0x8dbf,	// (0x000499a6) bg_passive_tab_pane_g3_cp1

0x8dc8,	// (0x000499af) bg_active_tab_pane_g1_cp2

0x8db6,	// (0x0004999d) bg_active_tab_pane_g2_cp2

0x8dd1,	// (0x000499b8) bg_active_tab_pane_g3_cp2

0x8dc8,	// (0x000499af) bg_passive_tab_pane_g1_cp2

0x8db6,	// (0x0004999d) bg_passive_tab_pane_g2_cp2

0x8dd1,	// (0x000499b8) bg_passive_tab_pane_g3_cp2

0x8dda,	// (0x000499c1) bg_active_tab_pane_g1_cp3

0x8db6,	// (0x0004999d) bg_active_tab_pane_g2_cp3

0x8de3,	// (0x000499ca) bg_active_tab_pane_g3_cp3

0x8dda,	// (0x000499c1) bg_passive_tab_pane_g1_cp3

0x8db6,	// (0x0004999d) bg_passive_tab_pane_g2_cp3

0x8de3,	// (0x000499ca) bg_passive_tab_pane_g3_cp3

0x8dec,	// (0x000499d3) bg_active_tab_pane_g1_cp4

0x8db6,	// (0x0004999d) bg_active_tab_pane_g2_cp4

0x8df7,	// (0x000499de) bg_active_tab_pane_g3_cp4

0x8dec,	// (0x000499d3) bg_passive_tab_pane_g1_cp4

0x8db6,	// (0x0004999d) bg_passive_tab_pane_g2_cp4

0x8df7,	// (0x000499de) bg_passive_tab_pane_g3_cp4

0x8e40,	// (0x00049a27) bg_active_tab_pane_g1_cp5

0x8db6,	// (0x0004999d) bg_active_tab_pane_g2_cp5

0x8e49,	// (0x00049a30) bg_active_tab_pane_g3_cp5

0x8e40,	// (0x00049a27) bg_passive_tab_pane_g1_cp5

0x8db6,	// (0x0004999d) bg_passive_tab_pane_g2_cp5

0x8e49,	// (0x00049a30) bg_passive_tab_pane_g3_cp5

0x8e52,	// (0x00049a39) list_set_graphic_pane_ParamLimits

0x8e52,	// (0x00049a39) list_set_graphic_pane

0x09ae,	// (0x00041595) bg_set_opt_pane_cp4

0x8e68,	// (0x00049a4f) list_set_graphic_pane_g1_ParamLimits

0x8e68,	// (0x00049a4f) list_set_graphic_pane_g1

0x8e74,	// (0x00049a5b) list_set_graphic_pane_g2_ParamLimits

0x8e74,	// (0x00049a5b) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x0005031a) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x0005031a) list_set_graphic_pane_g

0x0009,

0xfaaf,	// (0x00050696) volume_small_pane_cp_g

0x8e98,	// (0x00049a7f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8e98,	// (0x00049a7f) list_double2_large_graphic_pane_g1_cp2

0x8ea6,	// (0x00049a8d) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8ea6,	// (0x00049a8d) list_double2_large_graphic_pane_g2_cp2

0x8eb7,	// (0x00049a9e) list_double2_large_graphic_pane_g3_cp2

0x8ebf,	// (0x00049aa6) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8ebf,	// (0x00049aa6) list_double2_large_graphic_pane_t1_cp2

0x8ed5,	// (0x00049abc) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8ed5,	// (0x00049abc) list_double2_large_graphic_pane_t2_cp2

0xaaaa,	// (0x0004b691) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaaaa,	// (0x0004b691) list_double_large_graphic_pane_g1_cp2

0xaabd,	// (0x0004b6a4) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaabd,	// (0x0004b6a4) list_double_large_graphic_pane_g2_cp2

0x904a,	// (0x00049c31) list_double_large_graphic_pane_g3_cp2

0xaace,	// (0x0004b6b5) list_double_large_graphic_pane_g4_cp

0xaad6,	// (0x0004b6bd) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xaad6,	// (0x0004b6bd) list_double_large_graphic_pane_t1_cp2

0xaaed,	// (0x0004b6d4) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xaaed,	// (0x0004b6d4) list_double_large_graphic_pane_t2_cp2

0x8f46,	// (0x00049b2d) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8f46,	// (0x00049b2d) list_double2_graphic_pane_g1_cp2

0x8f54,	// (0x00049b3b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f54,	// (0x00049b3b) list_double2_graphic_pane_g2_cp2

0x8f65,	// (0x00049b4c) list_double2_graphic_pane_g3_cp2

0x8f6f,	// (0x00049b56) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8f6f,	// (0x00049b56) list_double2_graphic_pane_t1_cp2

0x8f85,	// (0x00049b6c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8f85,	// (0x00049b6c) list_double2_graphic_pane_t2_cp2

0x8b1e,	// (0x00049705) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8b1e,	// (0x00049705) list_single_number_heading_pane_g1_cp2

0x8f97,	// (0x00049b7e) list_single_number_heading_pane_g2_cp2

0x8f9f,	// (0x00049b86) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8f9f,	// (0x00049b86) list_single_number_heading_pane_t1_cp2

0x8fb5,	// (0x00049b9c) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8fb5,	// (0x00049b9c) list_single_number_heading_pane_t2_cp2

0x8fc9,	// (0x00049bb0) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8fc9,	// (0x00049bb0) list_single_number_heading_pane_t3_cp2

0x8b1e,	// (0x00049705) list_single_heading_pane_g1_cp2_ParamLimits

0x8b1e,	// (0x00049705) list_single_heading_pane_g1_cp2

0x8f97,	// (0x00049b7e) list_single_heading_pane_g2_cp2

0x8f9f,	// (0x00049b86) list_single_heading_pane_t1_cp2_ParamLimits

0x8f9f,	// (0x00049b86) list_single_heading_pane_t1_cp2

0xa8a4,	// (0x0004b48b) list_single_heading_pane_t2_cp2_ParamLimits

0xa8a4,	// (0x0004b48b) list_single_heading_pane_t2_cp2

0xa7ec,	// (0x0004b3d3) list_double_graphic_pane_g1_cp2_ParamLimits

0xa7ec,	// (0x0004b3d3) list_double_graphic_pane_g1_cp2

0xa7f8,	// (0x0004b3df) list_double_graphic_pane_g2_cp2_ParamLimits

0xa7f8,	// (0x0004b3df) list_double_graphic_pane_g2_cp2

0xa807,	// (0x0004b3ee) list_double_graphic_pane_g3_cp2

0xa80f,	// (0x0004b3f6) list_double_graphic_pane_t1_cp2_ParamLimits

0xa80f,	// (0x0004b3f6) list_double_graphic_pane_t1_cp2

0xa825,	// (0x0004b40c) list_double_graphic_pane_t2_cp2_ParamLimits

0xa825,	// (0x0004b40c) list_double_graphic_pane_t2_cp2

0x903e,	// (0x00049c25) list_double_number_pane_g1_cp2_ParamLimits

0x903e,	// (0x00049c25) list_double_number_pane_g1_cp2

0x904a,	// (0x00049c31) list_double_number_pane_g2_cp2

0xa7b0,	// (0x0004b397) list_double_number_pane_t1_cp2_ParamLimits

0xa7b0,	// (0x0004b397) list_double_number_pane_t1_cp2

0xa7c4,	// (0x0004b3ab) list_double_number_pane_t2_cp2_ParamLimits

0xa7c4,	// (0x0004b3ab) list_double_number_pane_t2_cp2

0xa7da,	// (0x0004b3c1) list_double_number_pane_t3_cp2_ParamLimits

0xa7da,	// (0x0004b3c1) list_double_number_pane_t3_cp2

0xa699,	// (0x0004b280) list_single_graphic_pane_g1_cp2_ParamLimits

0xa699,	// (0x0004b280) list_single_graphic_pane_g1_cp2

0x90a4,	// (0x00049c8b) list_single_graphic_pane_g2_cp2_ParamLimits

0x90a4,	// (0x00049c8b) list_single_graphic_pane_g2_cp2

0x90b0,	// (0x00049c97) list_single_graphic_pane_g3_cp2

0xa66f,	// (0x0004b256) list_single_graphic_pane_t1_cp2_ParamLimits

0xa66f,	// (0x0004b256) list_single_graphic_pane_t1_cp2

0x90a4,	// (0x00049c8b) list_single_number_pane_g1_cp2_ParamLimits

0x90a4,	// (0x00049c8b) list_single_number_pane_g1_cp2

0x90b0,	// (0x00049c97) list_single_number_pane_g2_cp2

0xa66f,	// (0x0004b256) list_single_number_pane_t1_cp2_ParamLimits

0xa66f,	// (0x0004b256) list_single_number_pane_t1_cp2

0xa685,	// (0x0004b26c) list_single_number_pane_t2_cp2_ParamLimits

0xa685,	// (0x0004b26c) list_single_number_pane_t2_cp2

0x8ea6,	// (0x00049a8d) list_double2_pane_g1_cp2_ParamLimits

0x8ea6,	// (0x00049a8d) list_double2_pane_g1_cp2

0x8eb7,	// (0x00049a9e) list_double2_pane_g2_cp2

0x9016,	// (0x00049bfd) list_double2_pane_t1_cp2_ParamLimits

0x9016,	// (0x00049bfd) list_double2_pane_t1_cp2

0x902c,	// (0x00049c13) list_double2_pane_t2_cp2_ParamLimits

0x902c,	// (0x00049c13) list_double2_pane_t2_cp2

0x903e,	// (0x00049c25) list_double_pane_g1_cp2_ParamLimits

0x903e,	// (0x00049c25) list_double_pane_g1_cp2

0x904a,	// (0x00049c31) list_double_pane_g2_cp2

0x9052,	// (0x00049c39) list_double_pane_t1_cp2_ParamLimits

0x9052,	// (0x00049c39) list_double_pane_t1_cp2

0x9068,	// (0x00049c4f) list_double_pane_t2_cp2_ParamLimits

0x9068,	// (0x00049c4f) list_double_pane_t2_cp2

0x9094,	// (0x00049c7b) list_single_pane_cp2_g3

0x90a4,	// (0x00049c8b) list_single_pane_g1_cp2_ParamLimits

0x90a4,	// (0x00049c8b) list_single_pane_g1_cp2

0x90b0,	// (0x00049c97) list_single_pane_g2_cp2

0x90b8,	// (0x00049c9f) list_single_pane_t1_cp2_ParamLimits

0x90b8,	// (0x00049c9f) list_single_pane_t1_cp2

0x90d0,	// (0x00049cb7) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x90d0,	// (0x00049cb7) list_single_large_graphic_pane_g1_cp2

0x90de,	// (0x00049cc5) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x90de,	// (0x00049cc5) list_single_large_graphic_pane_g2_cp2

0x90ea,	// (0x00049cd1) list_single_large_graphic_pane_g3_cp2

0x90f2,	// (0x00049cd9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x90f2,	// (0x00049cd9) list_single_large_graphic_pane_g4_cp1

0x910c,	// (0x00049cf3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x910c,	// (0x00049cf3) list_single_large_graphic_pane_t1_cp2

0xa639,	// (0x0004b220) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa639,	// (0x0004b220) list_single_graphic_heading_pane_g1_cp2

0xa606,	// (0x0004b1ed) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa606,	// (0x0004b1ed) list_single_graphic_heading_pane_g4_cp2

0x90b0,	// (0x00049c97) list_single_graphic_heading_pane_g5_cp2

0xa645,	// (0x0004b22c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa645,	// (0x0004b22c) list_single_graphic_heading_pane_t1_cp2

0xa65b,	// (0x0004b242) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa65b,	// (0x0004b242) list_single_graphic_heading_pane_t2_cp2

0xa5fa,	// (0x0004b1e1) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa5fa,	// (0x0004b1e1) list_single_2graphic_pane_g1_cp2

0xa606,	// (0x0004b1ed) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa606,	// (0x0004b1ed) list_single_2graphic_pane_g2_cp2

0x90b0,	// (0x00049c97) list_single_2graphic_pane_g3_cp2

0xa617,	// (0x0004b1fe) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa617,	// (0x0004b1fe) list_single_2graphic_pane_g4_cp2

0xa623,	// (0x0004b20a) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa623,	// (0x0004b20a) list_single_2graphic_pane_t1_cp2

0x09a4,	// (0x0004158b) list_highlight_pane_g10_cp1

0xa1d2,	// (0x0004adb9) list_highlight_pane_g1_cp1

0xa1da,	// (0x0004adc1) list_highlight_pane_g2_cp1

0xa1e2,	// (0x0004adc9) list_highlight_pane_g3_cp1

0xa1ea,	// (0x0004add1) list_highlight_pane_g4_cp1

0xa1f2,	// (0x0004add9) list_highlight_pane_g5_cp1

0xa1fa,	// (0x0004ade1) list_highlight_pane_g6_cp1

0xa202,	// (0x0004ade9) list_highlight_pane_g7_cp1

0xa20a,	// (0x0004adf1) list_highlight_pane_g8_cp1

0xa212,	// (0x0004adf9) list_highlight_pane_g9_cp1

0xa0f2,	// (0x0004acd9) form_field_slider_pane_t3

0xa100,	// (0x0004ace7) form_field_slider_pane_t4

0xa10e,	// (0x0004acf5) slider_form_pane_ParamLimits

0xa10e,	// (0x0004acf5) slider_form_pane

0x09ae,	// (0x00041595) control_abbreviations

0x09ae,	// (0x00041595) control_conventions

0x09ae,	// (0x00041595) control_definitions

0x09ae,	// (0x00041595) format_table_attribute

0xa8fa,	// (0x0004b4e1) bg_popup_preview_window_pane_g9

0x09ae,	// (0x00041595) format_table_data2

0x09ae,	// (0x00041595) format_table_data3

0x09ae,	// (0x00041595) format_table_data_example

0x0008,

0x09ae,	// (0x00041595) intro_purpose

0xf8cf,	// (0x000504b6) bg_popup_preview_window_pane_g

0x09ae,	// (0x00041595) texts_category

0x09ae,	// (0x00041595) texts_graphics

0x9122,	// (0x00049d09) text_digital

0x9131,	// (0x00049d18) text_primary

0x9140,	// (0x00049d27) text_primary_small

0x914f,	// (0x00049d36) text_secondary

0x915e,	// (0x00049d45) text_title

0xb027,	// (0x0004bc0e) bg_passive_tab_pane_g1_cp3_srt

0x8db6,	// (0x0004999d) bg_passive_tab_pane_g2_cp3_srt

0xb030,	// (0x0004bc17) bg_passive_tab_pane_g3_cp3_srt

0x0a0a,	// (0x000415f1) bg_active_tab_pane_cp3_srt_ParamLimits

0x0a0a,	// (0x000415f1) bg_active_tab_pane_cp3_srt

0xb039,	// (0x0004bc20) tabs_4_active_pane_srt_g1

0xb041,	// (0x0004bc28) tabs_4_active_pane_srt_t1_ParamLimits

0xb041,	// (0x0004bc28) tabs_4_active_pane_srt_t1

0xb027,	// (0x0004bc0e) bg_active_tab_pane_g1_cp3_copy1

0x8db6,	// (0x0004999d) bg_active_tab_pane_g2_cp3_copy1

0xb030,	// (0x0004bc17) bg_active_tab_pane_g3_cp3_copy1

0x0a0a,	// (0x000415f1) tabs_2_long_active_pane_srt_ParamLimits

0x0a0a,	// (0x000415f1) tabs_2_long_active_pane_srt

0x0a0a,	// (0x000415f1) tabs_2_long_passive_pane_srt_ParamLimits

0x0a0a,	// (0x000415f1) tabs_2_long_passive_pane_srt

0x6796,	// (0x0004737d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6796,	// (0x0004737d) bg_passive_tab_pane_cp4_srt

0xad34,	// (0x0004b91b) bg_passive_tab_pane_g1_cp4_srt

0x8db6,	// (0x0004999d) bg_passive_tab_pane_g2_cp4_srt

0xad3d,	// (0x0004b924) bg_passive_tab_pane_g3_cp4_srt

0x6775,	// (0x0004735c) bg_active_tab_pane_cp4_srt_ParamLimits

0x6775,	// (0x0004735c) bg_active_tab_pane_cp4_srt

0xad46,	// (0x0004b92d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad46,	// (0x0004b92d) tabs_2_long_active_pane_srt_t1

0xad34,	// (0x0004b91b) bg_active_tab_pane_g1_cp4_srt

0x8db6,	// (0x0004999d) bg_active_tab_pane_g2_cp4_srt

0xad3d,	// (0x0004b924) bg_active_tab_pane_g3_cp4_srt

0x09fc,	// (0x000415e3) tabs_3_long_active_pane_srt_ParamLimits

0x09fc,	// (0x000415e3) tabs_3_long_active_pane_srt

0x09fc,	// (0x000415e3) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x09fc,	// (0x000415e3) tabs_3_long_passive_pane_cp_srt

0x09fc,	// (0x000415e3) tabs_3_long_passive_pane_srt_ParamLimits

0x09fc,	// (0x000415e3) tabs_3_long_passive_pane_srt

0x6796,	// (0x0004737d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6796,	// (0x0004737d) bg_passive_tab_pane_cp5_srt

0x8e40,	// (0x00049a27) bg_passive_tab_pane_g1_cp5_srt

0x8db6,	// (0x0004999d) bg_passive_tab_pane_g2_cp5_srt

0x8e49,	// (0x00049a30) bg_passive_tab_pane_g3_cp5_srt

0x6775,	// (0x0004735c) bg_active_tab_pane_cp5_srt_ParamLimits

0x6775,	// (0x0004735c) bg_active_tab_pane_cp5_srt

0xad22,	// (0x0004b909) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad22,	// (0x0004b909) tabs_3_long_active_pane_srt_t1

0x8e40,	// (0x00049a27) bg_active_tab_pane_g1_cp5_srt

0x8db6,	// (0x0004999d) bg_active_tab_pane_g2_cp5_srt

0x8e49,	// (0x00049a30) bg_active_tab_pane_g3_cp5_srt

0xad14,	// (0x0004b8fb) navi_text_pane_srt_t1

0xad0c,	// (0x0004b8f3) navi_icon_pane_srt_g1

0x9336,	// (0x00049f1d) midp_editing_number_pane_srt

0x916d,	// (0x00049d54) midp_ticker_pane_srt

0x933e,	// (0x00049f25) midp_ticker_pane_srt_g1

0x9346,	// (0x00049f2d) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x00050339) midp_ticker_pane_srt_g

0x934e,	// (0x00049f35) midp_ticker_pane_srt_t1

0xacfd,	// (0x0004b8e4) midp_editing_number_pane_t1_copy1

0x9175,	// (0x00049d5c) listscroll_midp_pane

0x9175,	// (0x00049d5c) midp_form_pane

0x91e4,	// (0x00049dcb) midp_info_popup_window_ParamLimits

0x91e4,	// (0x00049dcb) midp_info_popup_window

0x3f09,	// (0x00044af0) bg_popup_sub_pane_cp50_ParamLimits

0x3f09,	// (0x00044af0) bg_popup_sub_pane_cp50

0x9df4,	// (0x0004a9db) listscroll_midp_info_pane_ParamLimits

0x9df4,	// (0x0004a9db) listscroll_midp_info_pane

0x9dd4,	// (0x0004a9bb) listscroll_form_midp_pane_ParamLimits

0x9dd4,	// (0x0004a9bb) listscroll_form_midp_pane

0x9de0,	// (0x0004a9c7) scroll_bar_cp050

0x9db4,	// (0x0004a99b) list_midp_pane

0xbadb,	// (0x0004c6c2) signal_pane_g2_cp

0x9cee,	// (0x0004a8d5) listscroll_midp_info_pane_t1_ParamLimits

0x9cee,	// (0x0004a8d5) listscroll_midp_info_pane_t1

0x9d06,	// (0x0004a8ed) listscroll_midp_info_pane_t2_ParamLimits

0x9d06,	// (0x0004a8ed) listscroll_midp_info_pane_t2

0x9d44,	// (0x0004a92b) listscroll_midp_info_pane_t3_ParamLimits

0x9d44,	// (0x0004a92b) listscroll_midp_info_pane_t3

0x9d7e,	// (0x0004a965) listscroll_midp_info_pane_t4_ParamLimits

0x9d7e,	// (0x0004a965) listscroll_midp_info_pane_t4

0x0003,

0xf80a,	// (0x000503f1) listscroll_midp_info_pane_t_ParamLimits

0xf80a,	// (0x000503f1) listscroll_midp_info_pane_t

0x3f5e,	// (0x00044b45) scroll_pane_cp21

0x9c88,	// (0x0004a86f) form_midp_field_choice_group_pane

0x9c91,	// (0x0004a878) form_midp_field_text_pane

0x9cd4,	// (0x0004a8bb) form_midp_field_time_pane

0x9cdc,	// (0x0004a8c3) form_midp_gauge_slider_pane

0x9ce5,	// (0x0004a8cc) form_midp_gauge_wait_pane

0x09ae,	// (0x00041595) form_midp_image_pane

0x584a,	// (0x00046431) list_single_midp_pane_ParamLimits

0x584a,	// (0x00046431) list_single_midp_pane

0x9c4c,	// (0x0004a833) form_midp_field_text_pane_t1

0x9a3e,	// (0x0004a625) input_focus_pane_cp050

0x9c77,	// (0x0004a85e) list_midp_form_text_pane

0x9c1b,	// (0x0004a802) form_midp_field_choice_group_pane_t1

0x9c29,	// (0x0004a810) input_focus_pane_cp051

0x9c3d,	// (0x0004a824) list_midp_choice_pane

0x09ae,	// (0x00041595) status_idle_pane

0x9bff,	// (0x0004a7e6) form_midp_field_time_pane_t1

0x09a4,	// (0x0004158b) wait_anim_pane_g2_copy1

0x9c0d,	// (0x0004a7f4) form_midp_field_time_pane_t2

0x0001,

0x9294,	// (0x00049e7b) aid_navinavi_width_2_pane

0xf805,	// (0x000503ec) form_midp_field_time_pane_t

0x09ae,	// (0x00041595) input_focus_pane_cp052

0x09ae,	// (0x00041595) bg_input_focus_pane_cp040

0x9bbf,	// (0x0004a7a6) form_midp_gauge_slider_pane_t1

0x9bcd,	// (0x0004a7b4) form_midp_gauge_slider_pane_t2

0x9bdb,	// (0x0004a7c2) form_midp_gauge_slider_pane_t3

0x9be9,	// (0x0004a7d0) form_midp_gauge_slider_pane_t4

0x0003,

0xf7fc,	// (0x000503e3) form_midp_gauge_slider_pane_t

0x9bf7,	// (0x0004a7de) form_midp_slider_pane

0x0a0a,	// (0x000415f1) bg_input_focus_pane_cp041_ParamLimits

0x0a0a,	// (0x000415f1) bg_input_focus_pane_cp041

0x9b8c,	// (0x0004a773) form_midp_gauge_wait_pane_t1_ParamLimits

0x9b8c,	// (0x0004a773) form_midp_gauge_wait_pane_t1

0x9b9e,	// (0x0004a785) form_midp_gauge_wait_pane_t2_ParamLimits

0x9b9e,	// (0x0004a785) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f7,	// (0x000503de) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f7,	// (0x000503de) form_midp_gauge_wait_pane_t

0x9bb0,	// (0x0004a797) form_midp_wait_pane_ParamLimits

0x9bb0,	// (0x0004a797) form_midp_wait_pane

0x9b54,	// (0x0004a73b) form_midp_image_pane_g1

0x9b5d,	// (0x0004a744) form_midp_image_pane_t1

0x9b6c,	// (0x0004a753) form_midp_image_pane_t2

0x9b7b,	// (0x0004a762) form_midp_image_pane_t3

0x0002,

0xf7f0,	// (0x000503d7) form_midp_image_pane_t

0x9b4b,	// (0x0004a732) list_single_midp_pane_g1

0x583b,	// (0x00046422) list_single_midp_pane_t1

0x9b31,	// (0x0004a718) list_midp_form_item_pane_ParamLimits

0x9b31,	// (0x0004a718) list_midp_form_item_pane

0x923c,	// (0x00049e23) list_midp_form_item_pane_t1

0x924b,	// (0x00049e32) midp_ticker_pane_g1

0x9257,	// (0x00049e3e) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x0005031f) midp_ticker_pane_g

0x9263,	// (0x00049e4a) midp_ticker_pane_t1

0xaf6a,	// (0x0004bb51) midp_editing_number_pane_t1

0xaf48,	// (0x0004bb2f) midp_editing_number_pane

0xaf57,	// (0x0004bb3e) midp_ticker_pane

0xaced,	// (0x0004b8d4) ai_message_heading_pane

0x09ae,	// (0x00041595) bg_popup_window_pane_cp14

0xacf5,	// (0x0004b8dc) listscroll_ai_message_pane

0xac73,	// (0x0004b85a) ai_message_heading_pane_g1_ParamLimits

0xac73,	// (0x0004b85a) ai_message_heading_pane_g1

0xac7f,	// (0x0004b866) ai_message_heading_pane_g2_ParamLimits

0xac7f,	// (0x0004b866) ai_message_heading_pane_g2

0xac8d,	// (0x0004b874) ai_message_heading_pane_g3_ParamLimits

0xac8d,	// (0x0004b874) ai_message_heading_pane_g3

0xac99,	// (0x0004b880) ai_message_heading_pane_g4_ParamLimits

0xac99,	// (0x0004b880) ai_message_heading_pane_g4

0x0003,

0xf931,	// (0x00050518) ai_message_heading_pane_g_ParamLimits

0xf931,	// (0x00050518) ai_message_heading_pane_g

0xaca5,	// (0x0004b88c) ai_message_heading_pane_t1_ParamLimits

0xaca5,	// (0x0004b88c) ai_message_heading_pane_t1

0xacbf,	// (0x0004b8a6) ai_message_heading_pane_t2_ParamLimits

0xacbf,	// (0x0004b8a6) ai_message_heading_pane_t2

0x0001,

0xf93a,	// (0x00050521) ai_message_heading_pane_t_ParamLimits

0xf93a,	// (0x00050521) ai_message_heading_pane_t

0xacd3,	// (0x0004b8ba) bg_popup_heading_pane_cp1_ParamLimits

0xacd3,	// (0x0004b8ba) bg_popup_heading_pane_cp1

0xac61,	// (0x0004b848) list_ai_message_pane_ParamLimits

0xac61,	// (0x0004b848) list_ai_message_pane

0x3f5e,	// (0x00044b45) scroll_pane_cp10

0xabfd,	// (0x0004b7e4) list_ai_message_pane_g1

0xac05,	// (0x0004b7ec) list_ai_message_pane_g2

0x0001,

0xf90e,	// (0x000504f5) list_ai_message_pane_g

0xac0d,	// (0x0004b7f4) list_ai_message_pane_t1_ParamLimits

0xac0d,	// (0x0004b7f4) list_ai_message_pane_t1

0xac22,	// (0x0004b809) list_ai_message_pane_t2_ParamLimits

0xac22,	// (0x0004b809) list_ai_message_pane_t2

0xac37,	// (0x0004b81e) list_ai_message_pane_t3_ParamLimits

0xac37,	// (0x0004b81e) list_ai_message_pane_t3

0xac4c,	// (0x0004b833) list_ai_message_pane_t4_ParamLimits

0xac4c,	// (0x0004b833) list_ai_message_pane_t4

0x0003,

0xf913,	// (0x000504fa) list_ai_message_pane_t_ParamLimits

0xf913,	// (0x000504fa) list_ai_message_pane_t

0xabe6,	// (0x0004b7cd) cell_ai_soft_ind_pane_ParamLimits

0xabe6,	// (0x0004b7cd) cell_ai_soft_ind_pane

0x9275,	// (0x00049e5c) cell_ai_soft_ind_pane_g1_ParamLimits

0x9275,	// (0x00049e5c) cell_ai_soft_ind_pane_g1

0x09ae,	// (0x00041595) grid_highlight_cp1

0x9282,	// (0x00049e69) text_secondary_cp56_ParamLimits

0x9282,	// (0x00049e69) text_secondary_cp56

0xabbb,	// (0x0004b7a2) example_general_pane_ParamLimits

0xabbb,	// (0x0004b7a2) example_general_pane

0xabc7,	// (0x0004b7ae) example_parent_pane_g1_ParamLimits

0xabc7,	// (0x0004b7ae) example_parent_pane_g1

0xabd3,	// (0x0004b7ba) example_parent_pane_t1_ParamLimits

0xabd3,	// (0x0004b7ba) example_parent_pane_t1

0x7289,	// (0x00047e70) popup_preview_text_window_ParamLimits

0x7289,	// (0x00047e70) popup_preview_text_window

0x909c,	// (0x00049c83) list_single_pane_cp2_g4

0x0c0b,	// (0x000417f2) bg_popup_preview_window_pane_ParamLimits

0x0c0b,	// (0x000417f2) bg_popup_preview_window_pane

0xa904,	// (0x0004b4eb) popup_preview_text_window_t1_ParamLimits

0xa904,	// (0x0004b4eb) popup_preview_text_window_t1

0xa922,	// (0x0004b509) popup_preview_text_window_t2_ParamLimits

0xa922,	// (0x0004b509) popup_preview_text_window_t2

0xa96b,	// (0x0004b552) popup_preview_text_window_t3_ParamLimits

0xa96b,	// (0x0004b552) popup_preview_text_window_t3

0xa9b0,	// (0x0004b597) popup_preview_text_window_t4_ParamLimits

0xa9b0,	// (0x0004b597) popup_preview_text_window_t4

0x0004,

0xf8e2,	// (0x000504c9) popup_preview_text_window_t_ParamLimits

0xf8e2,	// (0x000504c9) popup_preview_text_window_t

0xaa2e,	// (0x0004b615) scroll_pane_cp11

0x99ca,	// (0x0004a5b1) bg_popup_preview_window_pane_g1

0xa8b8,	// (0x0004b49f) bg_popup_preview_window_pane_g2

0xa8c2,	// (0x0004b4a9) bg_popup_preview_window_pane_g3

0xa8cc,	// (0x0004b4b3) bg_popup_preview_window_pane_g4

0xa8d6,	// (0x0004b4bd) bg_popup_preview_window_pane_g5

0xa8e0,	// (0x0004b4c7) bg_popup_preview_window_pane_g6

0xa8e8,	// (0x0004b4cf) bg_popup_preview_window_pane_g7

0xa8f0,	// (0x0004b4d7) bg_popup_preview_window_pane_g8

0x5ee5,	// (0x00046acc) aid_popup_width_pane

0x7265,	// (0x00047e4c) popup_midp_note_alarm_window_ParamLimits

0x7265,	// (0x00047e4c) popup_midp_note_alarm_window

0x1040,	// (0x00041c27) data_form_pane_ParamLimits

0x54e7,	// (0x000460ce) form_field_data_pane_g1

0x54f1,	// (0x000460d8) form_field_data_pane_t1_ParamLimits

0x104c,	// (0x00041c33) input_focus_pane_ParamLimits

0x550b,	// (0x000460f2) data_form_wide_pane_ParamLimits

0x551c,	// (0x00046103) form_field_data_wide_pane_g1

0x5528,	// (0x0004610f) form_field_data_wide_pane_t1_ParamLimits

0x0dc7,	// (0x000419ae) input_focus_pane_cp6_ParamLimits

0x674d,	// (0x00047334) input_popup_find_pane_g1_ParamLimits

0x674d,	// (0x00047334) input_popup_find_pane_g1

0x68b4,	// (0x0004749b) aid_navi_side_left_pane

0x68c9,	// (0x000474b0) aid_navi_side_right_pane

0xa2cd,	// (0x0004aeb4) bg_popup_window_pane_cp30_ParamLimits

0xa2cd,	// (0x0004aeb4) bg_popup_window_pane_cp30

0xa347,	// (0x0004af2e) popup_midp_note_alarm_window_g1_ParamLimits

0xa347,	// (0x0004af2e) popup_midp_note_alarm_window_g1

0xa377,	// (0x0004af5e) popup_midp_note_alarm_window_t1_ParamLimits

0xa377,	// (0x0004af5e) popup_midp_note_alarm_window_t1

0xa418,	// (0x0004afff) popup_midp_note_alarm_window_t2_ParamLimits

0xa418,	// (0x0004afff) popup_midp_note_alarm_window_t2

0xa4c6,	// (0x0004b0ad) popup_midp_note_alarm_window_t3_ParamLimits

0xa4c6,	// (0x0004b0ad) popup_midp_note_alarm_window_t3

0xa4f8,	// (0x0004b0df) popup_midp_note_alarm_window_t4_ParamLimits

0xa4f8,	// (0x0004b0df) popup_midp_note_alarm_window_t4

0xa51e,	// (0x0004b105) popup_midp_note_alarm_window_t5_ParamLimits

0xa51e,	// (0x0004b105) popup_midp_note_alarm_window_t5

0x000a,

0xf87f,	// (0x00050466) popup_midp_note_alarm_window_t_ParamLimits

0xf87f,	// (0x00050466) popup_midp_note_alarm_window_t

0xa5ca,	// (0x0004b1b1) wait_bar_pane_cp1_ParamLimits

0xa5ca,	// (0x0004b1b1) wait_bar_pane_cp1

0x09ae,	// (0x00041595) wait_anim_pane_copy1

0x09ae,	// (0x00041595) wait_border_pane_copy1

0x9fb2,	// (0x0004ab99) wait_border_pane_g1_copy1

0x5542,	// (0x00046129) form_field_popup_pane_g1

0x554a,	// (0x00046131) form_field_popup_pane_t1_ParamLimits

0x104c,	// (0x00041c33) input_focus_pane_cp7_ParamLimits

0x107a,	// (0x00041c61) list_form_pane_ParamLimits

0x5564,	// (0x0004614b) form_field_popup_wide_pane_g1

0x556c,	// (0x00046153) form_field_popup_wide_pane_t1_ParamLimits

0x104c,	// (0x00041c33) input_focus_pane_cp8_ParamLimits

0x1086,	// (0x00041c6d) list_form_wide_pane_ParamLimits

0xb0c2,	// (0x0004bca9) aid_size_cell_graphic_pane

0x55f8,	// (0x000461df) data_form_pane_t1_ParamLimits

0x5891,	// (0x00046478) data_form_wide_pane_t1_ParamLimits

0x9583,	// (0x0004a16a) bg_status_flat_pane

0x630a,	// (0x00046ef1) title_pane_t1_ParamLimits

0x09c4,	// (0x000415ab) title_pane_t2_ParamLimits

0x09ea,	// (0x000415d1) title_pane_t3_ParamLimits

0xf532,	// (0x00050119) title_pane_t_ParamLimits

0x6a1a,	// (0x00047601) level_1_signal_ParamLimits

0x6a27,	// (0x0004760e) level_2_signal_ParamLimits

0x6a34,	// (0x0004761b) level_3_signal_ParamLimits

0x6a41,	// (0x00047628) level_4_signal_ParamLimits

0x8b2a,	// (0x00049711) level_5_signal_ParamLimits

0x8b37,	// (0x0004971e) level_6_signal_ParamLimits

0x8b44,	// (0x0004972b) level_7_signal_ParamLimits

0x6a1a,	// (0x00047601) level_1_battery_ParamLimits

0x6a27,	// (0x0004760e) level_2_battery_ParamLimits

0x6a34,	// (0x0004761b) level_3_battery_ParamLimits

0x6a41,	// (0x00047628) level_4_battery_ParamLimits

0x8b2a,	// (0x00049711) level_5_battery_ParamLimits

0x8b37,	// (0x0004971e) level_6_battery_ParamLimits

0x8b44,	// (0x0004972b) level_7_battery_ParamLimits

0xa1d2,	// (0x0004adb9) bg_status_flat_pane_g1

0xa1da,	// (0x0004adc1) bg_status_flat_pane_g2

0xa1e2,	// (0x0004adc9) bg_status_flat_pane_g3

0xa1ea,	// (0x0004add1) bg_status_flat_pane_g4

0xa1f2,	// (0x0004add9) bg_status_flat_pane_g5

0xa1fa,	// (0x0004ade1) bg_status_flat_pane_g6

0xa202,	// (0x0004ade9) bg_status_flat_pane_g7

0x637a,	// (0x00046f61) tabs_3_active_pane_t1_ParamLimits

0x637a,	// (0x00046f61) tabs_3_passive_pane_t1_ParamLimits

0x6394,	// (0x00046f7b) tabs_4_active_pane_t1_ParamLimits

0x6394,	// (0x00046f7b) tabs_4_1_passive_pane_t1_ParamLimits

0x6763,	// (0x0004734a) tabs_2_active_pane_t1_ParamLimits

0x6763,	// (0x0004734a) tabs_2_passive_pane_t1_ParamLimits

0x6775,	// (0x0004735c) bg_active_tab_pane_cp4_ParamLimits

0x6783,	// (0x0004736a) tabs_2_long_active_pane_t1_ParamLimits

0x6796,	// (0x0004737d) bg_passive_tab_pane_cp4_ParamLimits

0x7585,	// (0x0004816c) list_single_midp_graphic_pane_t1_ParamLimits

0x6775,	// (0x0004735c) bg_active_tab_pane_cp5_ParamLimits

0x67a2,	// (0x00047389) tabs_3_long_active_pane_t1_ParamLimits

0x6796,	// (0x0004737d) bg_passive_tab_pane_cp5_ParamLimits

0x7585,	// (0x0004816c) list_single_midp_graphic_pane_t1

0x9583,	// (0x0004a16a) bg_status_flat_pane_ParamLimits

0x964e,	// (0x0004a235) indicator_pane_cp2_ParamLimits

0x964e,	// (0x0004a235) indicator_pane_cp2

0x9791,	// (0x0004a378) navi_pane_srt_ParamLimits

0x9791,	// (0x0004a378) navi_pane_srt

0x97b5,	// (0x0004a39c) popup_clock_digital_analogue_window_cp1

0x0a4e,	// (0x00041635) indicator_pane_t1

0x916d,	// (0x00049d54) copy_highlight_pane

0x916d,	// (0x00049d54) cursor_graphics_pane

0x916d,	// (0x00049d54) graphic_within_text_pane

0x916d,	// (0x00049d54) link_highlight_pane

0xa9f1,	// (0x0004b5d8) popup_preview_text_window_t5_ParamLimits

0xa9f1,	// (0x0004b5d8) popup_preview_text_window_t5

0x929e,	// (0x00049e85) cursor_digital_pane

0x929e,	// (0x00049e85) cursor_primary_pane

0x92af,	// (0x00049e96) cursor_primary_small_pane

0x92b7,	// (0x00049e9e) cursor_secondary_pane

0x92bf,	// (0x00049ea6) cursor_title_pane

0x929e,	// (0x00049e85) link_highlight_digital_pane

0x92a6,	// (0x00049e8d) link_highlight_primary_pane

0x92af,	// (0x00049e96) link_highlight_primary_small_pane

0x92b7,	// (0x00049e9e) link_highlight_secondary_pane

0x92bf,	// (0x00049ea6) link_highlight_title_pane

0x929e,	// (0x00049e85) copy_highlight_digital_pane

0x929e,	// (0x00049e85) copy_highlight_primary_pane

0x92af,	// (0x00049e96) copy_highlight_primary_small_pane

0x92b7,	// (0x00049e9e) copy_highlight_secondary_pane

0x92bf,	// (0x00049ea6) copy_highlight_title_pane

0x92b7,	// (0x00049e9e) graphic_text_digital_pane

0xa270,	// (0x0004ae57) graphic_text_primary_pane

0xa279,	// (0x0004ae60) graphic_text_primary_small_pane

0x92af,	// (0x00049e96) graphic_text_secondary_pane

0x929e,	// (0x00049e85) graphic_text_title_pane

0x92c7,	// (0x00049eae) cursor_primary_pane_g1

0xa262,	// (0x0004ae49) cursor_text_primary_t1

0xa24a,	// (0x0004ae31) cursor_primary_small_pane_g1

0xa254,	// (0x0004ae3b) cursor_text_primary_small_t1

0xa232,	// (0x0004ae19) cursor_primary_small_pane_g1_copy1

0xa23c,	// (0x0004ae23) cursor_text_primary_small_t1_copy1

0xa21a,	// (0x0004ae01) cursor_text_title_t1

0xa228,	// (0x0004ae0f) cursor_title_pane_g1

0x92c7,	// (0x00049eae) cursor_digital_pane_g1

0x92d1,	// (0x00049eb8) cursor_text_digital_t1

0x92df,	// (0x00049ec6) link_highlight_primary_pane_g1

0xa1c3,	// (0x0004adaa) link_highlight_primary_pane_t1

0x92df,	// (0x00049ec6) link_highlight_primary_small_pane_g1

0x92e7,	// (0x00049ece) link_highlight_primary_small_pane_t1

0x92f6,	// (0x00049edd) link_highlight_secondary_pane_g1

0x92fe,	// (0x00049ee5) link_highlight_secondary_pane_t1

0xa137,	// (0x0004ad1e) link_highlight_title_pane_g1

0xa13f,	// (0x0004ad26) link_highlight_title_pane_t1

0xa120,	// (0x0004ad07) link_highlight_digital_pane_g1

0xa128,	// (0x0004ad0f) link_highlight_digital_pane_t1

0x9fe8,	// (0x0004abcf) copy_highlight_primary_pane_g1

0x9fff,	// (0x0004abe6) copy_highlight_primary_pane_t1

0x9fe8,	// (0x0004abcf) copy_highlight_primary_small_pane_g1

0x9ff0,	// (0x0004abd7) copy_highlight_primary_small_pane_t1

0x930d,	// (0x00049ef4) copy_highlight_secondary_pane_g1

0x9315,	// (0x00049efc) copy_highlight_secondary_pane_t1

0x9fd1,	// (0x0004abb8) copy_highlight_title_pane_g1

0x9fd9,	// (0x0004abc0) copy_highlight_title_pane_t1

0x9fe8,	// (0x0004abcf) copy_highlight_digital_pane_g1

0xb294,	// (0x0004be7b) copy_highlight_digital_pane_t1

0xb1e8,	// (0x0004bdcf) graphic_text_primary_pane_g1

0xb278,	// (0x0004be5f) graphic_text_primary_pane_t1

0xb286,	// (0x0004be6d) graphic_text_primary_pane_t2

0x0001,

0xf9ae,	// (0x00050595) graphic_text_primary_pane_t

0xb254,	// (0x0004be3b) graphic_text_primary_small_pane_g1

0xb25c,	// (0x0004be43) graphic_text_primary_small_pane_t1

0xb26a,	// (0x0004be51) graphic_text_primary_small_pane_t2

0x0001,

0xf9a9,	// (0x00050590) graphic_text_primary_small_pane_t

0xb230,	// (0x0004be17) graphic_text_secondary_pane_g1

0xb238,	// (0x0004be1f) graphic_text_secondary_pane_t1

0xb246,	// (0x0004be2d) graphic_text_secondary_pane_t2

0x0001,

0xf9a4,	// (0x0005058b) graphic_text_secondary_pane_t

0xb20c,	// (0x0004bdf3) graphic_text_title_pane_g1

0xb214,	// (0x0004bdfb) graphic_text_title_pane_t1

0xb222,	// (0x0004be09) graphic_text_title_pane_t2

0x0001,

0xf99f,	// (0x00050586) graphic_text_title_pane_t

0xb1e8,	// (0x0004bdcf) graphic_text_digital_pane_g1

0xb1f0,	// (0x0004bdd7) graphic_text_digital_pane_t1

0xb1fe,	// (0x0004bde5) graphic_text_digital_pane_t2

0x0001,

0xf99a,	// (0x00050581) graphic_text_digital_pane_t

0x0a0a,	// (0x000415f1) navi_icon_pane_srt_ParamLimits

0x0a0a,	// (0x000415f1) navi_icon_pane_srt

0x09ae,	// (0x00041595) navi_midp_pane_srt

0x09ae,	// (0x00041595) navi_navi_pane_srt

0x0a0a,	// (0x000415f1) navi_text_pane_srt_ParamLimits

0x0a0a,	// (0x000415f1) navi_text_pane_srt

0xb1b3,	// (0x0004bd9a) navi_navi_icon_text_pane_srt

0xb1bb,	// (0x0004bda2) navi_navi_pane_srt_g1_ParamLimits

0xb1bb,	// (0x0004bda2) navi_navi_pane_srt_g1

0xb1cd,	// (0x0004bdb4) navi_navi_pane_srt_g2_ParamLimits

0xb1cd,	// (0x0004bdb4) navi_navi_pane_srt_g2

0x0001,

0xf995,	// (0x0005057c) navi_navi_pane_srt_g_ParamLimits

0xf995,	// (0x0005057c) navi_navi_pane_srt_g

0xb1df,	// (0x0004bdc6) navi_navi_tabs_pane_srt

0xb1b3,	// (0x0004bd9a) navi_navi_text_pane_srt

0xb1b3,	// (0x0004bd9a) navi_navi_volume_pane_srt

0xb1a4,	// (0x0004bd8b) navi_navi_text_pane_srt_t1

0x79b2,	// (0x00048599) navi_navi_volume_pane_srt_g1

0x79ba,	// (0x000485a1) volume_small_pane_srt_ParamLimits

0x79ba,	// (0x000485a1) volume_small_pane_srt

0x6c97,	// (0x0004787e) volume_small_pane_srt_g1_ParamLimits

0x6c97,	// (0x0004787e) volume_small_pane_srt_g1

0x6ca7,	// (0x0004788e) volume_small_pane_srt_g2_ParamLimits

0x6ca7,	// (0x0004788e) volume_small_pane_srt_g2

0x6cb8,	// (0x0004789f) volume_small_pane_srt_g3_ParamLimits

0x6cb8,	// (0x0004789f) volume_small_pane_srt_g3

0x6cc9,	// (0x000478b0) volume_small_pane_srt_g4_ParamLimits

0x6cc9,	// (0x000478b0) volume_small_pane_srt_g4

0x6cda,	// (0x000478c1) volume_small_pane_srt_g5_ParamLimits

0x6cda,	// (0x000478c1) volume_small_pane_srt_g5

0x6ceb,	// (0x000478d2) volume_small_pane_srt_g6_ParamLimits

0x6ceb,	// (0x000478d2) volume_small_pane_srt_g6

0x6cfc,	// (0x000478e3) volume_small_pane_srt_g7_ParamLimits

0x6cfc,	// (0x000478e3) volume_small_pane_srt_g7

0x6d0d,	// (0x000478f4) volume_small_pane_srt_g8_ParamLimits

0x6d0d,	// (0x000478f4) volume_small_pane_srt_g8

0x6d1e,	// (0x00047905) volume_small_pane_srt_g9_ParamLimits

0x6d1e,	// (0x00047905) volume_small_pane_srt_g9

0x6d2f,	// (0x00047916) volume_small_pane_srt_g10_ParamLimits

0x6d2f,	// (0x00047916) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x00050324) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x00050324) volume_small_pane_srt_g

0x0cc0,	// (0x000418a7) query_popup_data_pane_cp2

0xb18a,	// (0x0004bd71) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb18a,	// (0x0004bd71) navi_navi_icon_text_pane_srt_t1

0xa270,	// (0x0004ae57) navi_tabs_2_long_pane_srt

0xa270,	// (0x0004ae57) navi_tabs_2_pane_srt

0xa270,	// (0x0004ae57) navi_tabs_3_long_pane_srt

0xa270,	// (0x0004ae57) navi_tabs_3_pane_srt

0xa270,	// (0x0004ae57) navi_tabs_4_pane_srt

0x7992,	// (0x00048579) tabs_2_active_pane_srt_ParamLimits

0x7992,	// (0x00048579) tabs_2_active_pane_srt

0x79a2,	// (0x00048589) tabs_2_passive_pane_srt_ParamLimits

0x79a2,	// (0x00048589) tabs_2_passive_pane_srt

0x9494,	// (0x0004a07b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9494,	// (0x0004a07b) bg_passive_tab_pane_cp1_srt

0xb156,	// (0x0004bd3d) bg_passive_tab_pane_g1_cp1_srt

0x8db6,	// (0x0004999d) bg_passive_tab_pane_g2_cp1_srt

0xb15f,	// (0x0004bd46) bg_passive_tab_pane_g3_cp1_srt

0x0a0a,	// (0x000415f1) bg_active_tab_pane_cp1_srt_ParamLimits

0x0a0a,	// (0x000415f1) bg_active_tab_pane_cp1_srt

0xb168,	// (0x0004bd4f) tabs_2_active_pane_srt_g1

0xb170,	// (0x0004bd57) tabs_2_active_pane_srt_t1_ParamLimits

0xb170,	// (0x0004bd57) tabs_2_active_pane_srt_t1

0xb156,	// (0x0004bd3d) bg_active_tab_pane_g1_cp1_srt

0x8db6,	// (0x0004999d) bg_active_tab_pane_g2_cp1_srt

0xb15f,	// (0x0004bd46) bg_active_tab_pane_g3_cp1_srt

0x795f,	// (0x00048546) tabs_3_active_pane_srt_ParamLimits

0x795f,	// (0x00048546) tabs_3_active_pane_srt

0x7970,	// (0x00048557) tabs_3_passive_pane_cp_srt_ParamLimits

0x7970,	// (0x00048557) tabs_3_passive_pane_cp_srt

0x7981,	// (0x00048568) tabs_3_passive_pane_srt_ParamLimits

0x7981,	// (0x00048568) tabs_3_passive_pane_srt

0x9494,	// (0x0004a07b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9494,	// (0x0004a07b) bg_passive_tab_pane_cp2_srt

0x9324,	// (0x00049f0b) bg_passive_tab_pane_g1_cp2_srt

0x8db6,	// (0x0004999d) bg_passive_tab_pane_g2_cp2_srt

0x932d,	// (0x00049f14) bg_passive_tab_pane_g3_cp2_srt

0x0a0a,	// (0x000415f1) bg_active_tab_pane_cp2_srt_ParamLimits

0x0a0a,	// (0x000415f1) bg_active_tab_pane_cp2_srt

0xb13c,	// (0x0004bd23) tabs_3_active_pane_srt_g1

0xb144,	// (0x0004bd2b) tabs_3_active_pane_srt_t1_ParamLimits

0xb144,	// (0x0004bd2b) tabs_3_active_pane_srt_t1

0x9324,	// (0x00049f0b) bg_active_tab_pane_g1_cp2_srt

0x8db6,	// (0x0004999d) bg_active_tab_pane_g2_cp2_srt

0x932d,	// (0x00049f14) bg_active_tab_pane_g3_cp2_srt

0x7917,	// (0x000484fe) tabs_4_active_pane_srt_ParamLimits

0x7917,	// (0x000484fe) tabs_4_active_pane_srt

0x7929,	// (0x00048510) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7929,	// (0x00048510) tabs_4_passive_pane_cp2_srt

0x6eae,	// (0x00047a95) aid_size_cell_toolbar

0x6796,	// (0x0004737d) main_idle_act_pane_ParamLimits

0x708b,	// (0x00047c72) popup_large_graphic_colour_window_ParamLimits

0x7432,	// (0x00048019) popup_toolbar_window_ParamLimits

0x7432,	// (0x00048019) popup_toolbar_window

0x7886,	// (0x0004846d) list_single_graphic_2heading_pane_ParamLimits

0x7886,	// (0x0004846d) list_single_graphic_2heading_pane

0x42c4,	// (0x00044eab) aid_size_cell_apps_grid_lsc_pane

0x42d6,	// (0x00044ebd) aid_size_cell_apps_grid_prt_pane

0x9494,	// (0x0004a07b) bg_wml_button_pane_cp1_ParamLimits

0x9494,	// (0x0004a07b) bg_wml_button_pane_cp1

0x9c4c,	// (0x0004a833) form_midp_field_text_pane_t1_ParamLimits

0x9a3e,	// (0x0004a625) input_focus_pane_cp050_ParamLimits

0x9c77,	// (0x0004a85e) list_midp_form_text_pane_ParamLimits

0x9c29,	// (0x0004a810) input_focus_pane_cp051_ParamLimits

0x9c3d,	// (0x0004a824) list_midp_choice_pane_ParamLimits

0x9af7,	// (0x0004a6de) list_single_2graphic_pane_cp3_ParamLimits

0x9af7,	// (0x0004a6de) list_single_2graphic_pane_cp3

0x9b0d,	// (0x0004a6f4) list_single_midp_graphic_pane_ParamLimits

0x9b0d,	// (0x0004a6f4) list_single_midp_graphic_pane

0x56ff,	// (0x000462e6) list_single_graphic_2heading_pane_g1_ParamLimits

0x56ff,	// (0x000462e6) list_single_graphic_2heading_pane_g1

0x570b,	// (0x000462f2) list_single_graphic_2heading_pane_g4_ParamLimits

0x570b,	// (0x000462f2) list_single_graphic_2heading_pane_g4

0x5717,	// (0x000462fe) list_single_graphic_2heading_pane_g5_ParamLimits

0x5717,	// (0x000462fe) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x00050377) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x00050377) list_single_graphic_2heading_pane_g

0x5723,	// (0x0004630a) list_single_graphic_2heading_pane_t1_ParamLimits

0x5723,	// (0x0004630a) list_single_graphic_2heading_pane_t1

0x5737,	// (0x0004631e) list_single_graphic_2heading_pane_t2_ParamLimits

0x5737,	// (0x0004631e) list_single_graphic_2heading_pane_t2

0x5753,	// (0x0004633a) list_single_graphic_2heading_pane_t3_ParamLimits

0x5753,	// (0x0004633a) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x0005037e) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x0005037e) list_single_graphic_2heading_pane_t

0x9908,	// (0x0004a4ef) bg_popup_sub_pane_cp2

0x9932,	// (0x0004a519) grid_toobar_pane

0x74f1,	// (0x000480d8) cell_toolbar_pane_ParamLimits

0x74f1,	// (0x000480d8) cell_toolbar_pane

0x996e,	// (0x0004a555) cell_toolbar_pane_g1_ParamLimits

0x996e,	// (0x0004a555) cell_toolbar_pane_g1

0x9982,	// (0x0004a569) cell_toolbar_pane_g2_ParamLimits

0x9982,	// (0x0004a569) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x0005038c) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x0005038c) cell_toolbar_pane_g

0x99a4,	// (0x0004a58b) grid_highlight_pane_cp2_ParamLimits

0x99a4,	// (0x0004a58b) grid_highlight_pane_cp2

0x99be,	// (0x0004a5a5) toolbar_button_pane

0x99ca,	// (0x0004a5b1) toolbar_button_pane_g1

0x99d2,	// (0x0004a5b9) toolbar_button_pane_g2

0x99da,	// (0x0004a5c1) toolbar_button_pane_g3

0x99e2,	// (0x0004a5c9) toolbar_button_pane_g4

0x99ea,	// (0x0004a5d1) toolbar_button_pane_g5

0x99f2,	// (0x0004a5d9) toolbar_button_pane_g6

0x99fa,	// (0x0004a5e1) toolbar_button_pane_g7

0x9a02,	// (0x0004a5e9) toolbar_button_pane_g8

0x9a0a,	// (0x0004a5f1) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x00050391) toolbar_button_pane_g

0x7541,	// (0x00048128) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7541,	// (0x00048128) list_single_2graphic_pane_g1_cp3

0x754d,	// (0x00048134) list_single_2graphic_pane_g2_cp3_ParamLimits

0x754d,	// (0x00048134) list_single_2graphic_pane_g2_cp3

0x8f97,	// (0x00049b7e) list_single_2graphic_pane_g3_cp3

0x755e,	// (0x00048145) list_single_2graphic_pane_g4_cp3_ParamLimits

0x755e,	// (0x00048145) list_single_2graphic_pane_g4_cp3

0x756a,	// (0x00048151) list_single_2graphic_pane_t1_cp3_ParamLimits

0x756a,	// (0x00048151) list_single_2graphic_pane_t1_cp3

0x8b1e,	// (0x00049705) list_single_midp_graphic_pane_g2_ParamLimits

0x8b1e,	// (0x00049705) list_single_midp_graphic_pane_g2

0x56e7,	// (0x000462ce) aid_zoom_text_primary

0x56ef,	// (0x000462d6) aid_zoom_text_secondary

0x93de,	// (0x00049fc5) status_small_pane_g7_ParamLimits

0x93de,	// (0x00049fc5) status_small_pane_g7

0x9401,	// (0x00049fe8) status_small_pane_t1_ParamLimits

0x62e5,	// (0x00046ecc) title_pane_g2

0x0003,

0xf529,	// (0x00050110) title_pane_g

0x654e,	// (0x00047135) aid_size_cell_colour_1_pane_ParamLimits

0x654e,	// (0x00047135) aid_size_cell_colour_1_pane

0x6562,	// (0x00047149) aid_size_cell_colour_2_pane_ParamLimits

0x6562,	// (0x00047149) aid_size_cell_colour_2_pane

0x6576,	// (0x0004715d) aid_size_cell_colour_3_pane_ParamLimits

0x6576,	// (0x0004715d) aid_size_cell_colour_3_pane

0x658a,	// (0x00047171) aid_size_cell_colour_4_pane_ParamLimits

0x658a,	// (0x00047171) aid_size_cell_colour_4_pane

0x67f0,	// (0x000473d7) title_pane_stacon_g1_ParamLimits

0x67f0,	// (0x000473d7) title_pane_stacon_g1

0xa056,	// (0x0004ac3d) popup_note_wait_window_g3_ParamLimits

0xa056,	// (0x0004ac3d) popup_note_wait_window_g3

0xa0cd,	// (0x0004acb4) popup_note_wait_window_t5_ParamLimits

0xa0cd,	// (0x0004acb4) popup_note_wait_window_t5

0x09ae,	// (0x00041595) main_feb_china_hwr_fs_writing_pane

0x6f50,	// (0x00047b37) popup_feb_china_hwr_fs_window_ParamLimits

0x6f50,	// (0x00047b37) popup_feb_china_hwr_fs_window

0x759b,	// (0x00048182) aid_size_cell_hwr_fs_ParamLimits

0x759b,	// (0x00048182) aid_size_cell_hwr_fs

0x9a3e,	// (0x0004a625) bg_popup_sub_pane_cp3_ParamLimits

0x9a3e,	// (0x0004a625) bg_popup_sub_pane_cp3

0x75b0,	// (0x00048197) grid_hwr_fs_pane_ParamLimits

0x75b0,	// (0x00048197) grid_hwr_fs_pane

0x75c8,	// (0x000481af) linegrid_hwr_fs_pane_ParamLimits

0x75c8,	// (0x000481af) linegrid_hwr_fs_pane

0x75d8,	// (0x000481bf) cell_hwr_fs_pane_ParamLimits

0x75d8,	// (0x000481bf) cell_hwr_fs_pane

0x9a4a,	// (0x0004a631) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a4a,	// (0x0004a631) linegrid_hwr_fs_pane_g1

0x9a56,	// (0x0004a63d) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a56,	// (0x0004a63d) linegrid_hwr_fs_pane_g2

0x9a68,	// (0x0004a64f) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a68,	// (0x0004a64f) linegrid_hwr_fs_pane_g3

0x75fc,	// (0x000481e3) linegrid_hwr_fs_pane_g4_ParamLimits

0x75fc,	// (0x000481e3) linegrid_hwr_fs_pane_g4

0x761a,	// (0x00048201) linegrid_hwr_fs_pane_g5_ParamLimits

0x761a,	// (0x00048201) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d5,	// (0x000503bc) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d5,	// (0x000503bc) linegrid_hwr_fs_pane_g

0x9a74,	// (0x0004a65b) cell_hwr_fs_pane_g1_ParamLimits

0x9a74,	// (0x0004a65b) cell_hwr_fs_pane_g1

0x9843,	// (0x0004a42a) cell_hwr_fs_pane_g2_ParamLimits

0x9843,	// (0x0004a42a) cell_hwr_fs_pane_g2

0x9a8a,	// (0x0004a671) cell_hwr_fs_pane_g3_ParamLimits

0x9a8a,	// (0x0004a671) cell_hwr_fs_pane_g3

0x9a97,	// (0x0004a67e) cell_hwr_fs_pane_g4_ParamLimits

0x9a97,	// (0x0004a67e) cell_hwr_fs_pane_g4

0x0003,

0xf7e0,	// (0x000503c7) cell_hwr_fs_pane_g_ParamLimits

0xf7e0,	// (0x000503c7) cell_hwr_fs_pane_g

0x7630,	// (0x00048217) cell_hwr_fs_pane_t1

0x09ae,	// (0x00041595) grid_highlight_pane_cp6

0x09ae,	// (0x00041595) main_idle_act2_pane

0x3f45,	// (0x00044b2c) aid_inside_area_popup_secondary

0xa706,	// (0x0004b2ed) aid_inside_area_window_primary_ParamLimits

0xa706,	// (0x0004b2ed) aid_inside_area_window_primary

0xb2a3,	// (0x0004be8a) ai2_news_ticker_pane

0xb2ab,	// (0x0004be92) aid_size_cell_ai1_link_ParamLimits

0xb2ab,	// (0x0004be92) aid_size_cell_ai1_link

0xb2c5,	// (0x0004beac) popup_ai2_data_window_ParamLimits

0xb2c5,	// (0x0004beac) popup_ai2_data_window

0xb2e3,	// (0x0004beca) popup_ai2_link_window_ParamLimits

0xb2e3,	// (0x0004beca) popup_ai2_link_window

0x9a3e,	// (0x0004a625) bg_popup_sub_pane_cp4_ParamLimits

0x9a3e,	// (0x0004a625) bg_popup_sub_pane_cp4

0xb2f9,	// (0x0004bee0) grid_ai2_link_pane_ParamLimits

0xb2f9,	// (0x0004bee0) grid_ai2_link_pane

0xb310,	// (0x0004bef7) popup_ai2_link_window_g1_ParamLimits

0xb310,	// (0x0004bef7) popup_ai2_link_window_g1

0xb31c,	// (0x0004bf03) popup_ai2_link_window_g2_ParamLimits

0xb31c,	// (0x0004bf03) popup_ai2_link_window_g2

0x0001,

0xf9b3,	// (0x0005059a) popup_ai2_link_window_g_ParamLimits

0xf9b3,	// (0x0005059a) popup_ai2_link_window_g

0xb32d,	// (0x0004bf14) ai2_mp_button_pane

0xb335,	// (0x0004bf1c) ai2_mp_volume_pane

0x9c29,	// (0x0004a810) bg_popup_sub_pane_cp5_ParamLimits

0x9c29,	// (0x0004a810) bg_popup_sub_pane_cp5

0xb33d,	// (0x0004bf24) heading_ai2_gene_pane_ParamLimits

0xb33d,	// (0x0004bf24) heading_ai2_gene_pane

0xb349,	// (0x0004bf30) list_ai2_gene_pane_ParamLimits

0xb349,	// (0x0004bf30) list_ai2_gene_pane

0xb391,	// (0x0004bf78) cell_ai2_link_pane_ParamLimits

0xb391,	// (0x0004bf78) cell_ai2_link_pane

0xb3a7,	// (0x0004bf8e) cell_ai2_link_pane_g1

0x09ae,	// (0x00041595) grid_highlight_pane_cp7

0x79cf,	// (0x000485b6) ai2_mp_volume_pane_g1

0xb47a,	// (0x0004c061) ai2_mp_volume_pane_g2

0xb3ef,	// (0x0004bfd6) list_ai2_gene_pane_t1

0xb482,	// (0x0004c069) ai2_mp_volume_pane_g3

0x0002,

0xf9cc,	// (0x000505b3) ai2_mp_volume_pane_g

0x79d7,	// (0x000485be) volume_small_pane_cp3

0xb48a,	// (0x0004c071) aid_size_cell_ai2_button

0xb492,	// (0x0004c079) grid_ai2_button_pane

0xb49b,	// (0x0004c082) cell_ai2_button_pane_ParamLimits

0xb49b,	// (0x0004c082) cell_ai2_button_pane

0x09a4,	// (0x0004158b) cell_ai2_button_pane_g1

0x09ae,	// (0x00041595) grid_highlight_pane_cp8

0xb43a,	// (0x0004c021) ai2_gene_pane_t1_ParamLimits

0xb43a,	// (0x0004c021) ai2_gene_pane_t1

0x6ea4,	// (0x00047a8b) aid_height_parent_landscape

0xad96,	// (0x0004b97d) aid_height_set_list

0xada7,	// (0x0004b98e) aid_size_parent

0xb0c2,	// (0x0004bca9) aid_size_cell_graphic_pane_ParamLimits

0xb359,	// (0x0004bf40) popup_ai2_data_window_g1_ParamLimits

0xb359,	// (0x0004bf40) popup_ai2_data_window_g1

0xb365,	// (0x0004bf4c) ai2_news_ticker_pane_g1

0xb36d,	// (0x0004bf54) ai2_news_ticker_pane_g2

0x0001,

0xf9b8,	// (0x0005059f) ai2_news_ticker_pane_g

0xb375,	// (0x0004bf5c) ai2_news_ticker_pane_t1

0xb383,	// (0x0004bf6a) ai2_news_ticker_pane_t2

0x0001,

0xf9bd,	// (0x000505a4) ai2_news_ticker_pane_t

0xb3b0,	// (0x0004bf97) heading_ai2_gene_pane_g1

0xb3b8,	// (0x0004bf9f) heading_ai2_gene_pane_t1_ParamLimits

0xb3b8,	// (0x0004bf9f) heading_ai2_gene_pane_t1

0xb3cd,	// (0x0004bfb4) list_highlight_pane_cp6

0xb3d5,	// (0x0004bfbc) ai2_gene_pane_ParamLimits

0xb3d5,	// (0x0004bfbc) ai2_gene_pane

0xb3fd,	// (0x0004bfe4) list_ai2_gene_pane_t2

0x0001,

0xf9c2,	// (0x000505a9) list_ai2_gene_pane_t

0xb40b,	// (0x0004bff2) list_highlight_pane_cp8_ParamLimits

0xb40b,	// (0x0004bff2) list_highlight_pane_cp8

0xb41c,	// (0x0004c003) ai2_gene_pane_g1_ParamLimits

0xb41c,	// (0x0004c003) ai2_gene_pane_g1

0xb42e,	// (0x0004c015) ai2_gene_pane_g2_ParamLimits

0xb42e,	// (0x0004c015) ai2_gene_pane_g2

0x0001,

0xf9c7,	// (0x000505ae) ai2_gene_pane_g_ParamLimits

0xf9c7,	// (0x000505ae) ai2_gene_pane_g

0x0fe2,	// (0x00041bc9) scroll_pane_cp12

0x6e61,	// (0x00047a48) control_pane_t3_ParamLimits

0x6e61,	// (0x00047a48) control_pane_t3

0x93f2,	// (0x00049fd9) status_small_pane_g8_ParamLimits

0x93f2,	// (0x00049fd9) status_small_pane_g8

0x704e,	// (0x00047c35) popup_find_window_ParamLimits

0x727b,	// (0x00047e62) popup_note_image_window_ParamLimits

0x576b,	// (0x00046352) list_double2_graphic_pane_vc_g1_ParamLimits

0x576b,	// (0x00046352) list_double2_graphic_pane_vc_g1

0x7521,	// (0x00048108) list_double2_graphic_pane_vc_g2_ParamLimits

0x7521,	// (0x00048108) list_double2_graphic_pane_vc_g2

0x752d,	// (0x00048114) list_double2_graphic_pane_vc_g3_ParamLimits

0x752d,	// (0x00048114) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x00050385) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x00050385) list_double2_graphic_pane_vc_g

0x5777,	// (0x0004635e) list_double2_graphic_pane_vc_t1_ParamLimits

0x5777,	// (0x0004635e) list_double2_graphic_pane_vc_t1

0x7521,	// (0x00048108) list_single_heading_pane_vc_g1_ParamLimits

0x7521,	// (0x00048108) list_single_heading_pane_vc_g1

0x752d,	// (0x00048114) list_single_heading_pane_vc_g2_ParamLimits

0x752d,	// (0x00048114) list_single_heading_pane_vc_g2

0x0001,

0xf7bf,	// (0x000503a6) list_single_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x000503a6) list_single_heading_pane_vc_g

0x578d,	// (0x00046374) list_single_heading_pane_vc_t1_ParamLimits

0x578d,	// (0x00046374) list_single_heading_pane_vc_t1

0x57a3,	// (0x0004638a) list_single_heading_pane_vc_t2_ParamLimits

0x57a3,	// (0x0004638a) list_single_heading_pane_vc_t2

0x0001,

0xf7c4,	// (0x000503ab) list_single_heading_pane_vc_t_ParamLimits

0xf7c4,	// (0x000503ab) list_single_heading_pane_vc_t

0x57b5,	// (0x0004639c) list_setting_number_pane_vc_g1_ParamLimits

0x57b5,	// (0x0004639c) list_setting_number_pane_vc_g1

0x57c1,	// (0x000463a8) list_setting_number_pane_vc_g2_ParamLimits

0x57c1,	// (0x000463a8) list_setting_number_pane_vc_g2

0x0001,

0xf7c9,	// (0x000503b0) list_setting_number_pane_vc_g_ParamLimits

0xf7c9,	// (0x000503b0) list_setting_number_pane_vc_g

0x57cd,	// (0x000463b4) list_setting_number_pane_vc_t1_ParamLimits

0x57cd,	// (0x000463b4) list_setting_number_pane_vc_t1

0x57e1,	// (0x000463c8) list_setting_number_pane_vc_t2_ParamLimits

0x57e1,	// (0x000463c8) list_setting_number_pane_vc_t2

0x57fd,	// (0x000463e4) list_setting_number_pane_vc_t3_ParamLimits

0x57fd,	// (0x000463e4) list_setting_number_pane_vc_t3

0x0002,

0xf7ce,	// (0x000503b5) list_setting_number_pane_vc_t_ParamLimits

0xf7ce,	// (0x000503b5) list_setting_number_pane_vc_t

0x5829,	// (0x00046410) set_value_pane_vc_ParamLimits

0x5829,	// (0x00046410) set_value_pane_vc

0x7886,	// (0x0004846d) list_double2_graphic_pane_vc_ParamLimits

0x7886,	// (0x0004846d) list_double2_graphic_pane_vc

0x7886,	// (0x0004846d) list_double2_large_graphic_pane_vc_ParamLimits

0x7886,	// (0x0004846d) list_double2_large_graphic_pane_vc

0x7886,	// (0x0004846d) list_double2_pane_vc_ParamLimits

0x7886,	// (0x0004846d) list_double2_pane_vc

0x7886,	// (0x0004846d) list_double_graphic_heading_pane_vc_ParamLimits

0x7886,	// (0x0004846d) list_double_graphic_heading_pane_vc

0x7886,	// (0x0004846d) list_double_graphic_pane_vc_ParamLimits

0x7886,	// (0x0004846d) list_double_graphic_pane_vc

0x7886,	// (0x0004846d) list_double_heading_pane_vc_ParamLimits

0x7886,	// (0x0004846d) list_double_heading_pane_vc

0x789a,	// (0x00048481) list_double_large_graphic_pane_vc_ParamLimits

0x789a,	// (0x00048481) list_double_large_graphic_pane_vc

0x7886,	// (0x0004846d) list_double_number_pane_vc_ParamLimits

0x7886,	// (0x0004846d) list_double_number_pane_vc

0x7886,	// (0x0004846d) list_double_pane_vc_ParamLimits

0x7886,	// (0x0004846d) list_double_pane_vc

0x7886,	// (0x0004846d) list_double_time_pane_vc_ParamLimits

0x7886,	// (0x0004846d) list_double_time_pane_vc

0x7886,	// (0x0004846d) list_setting_number_pane_vc_ParamLimits

0x7886,	// (0x0004846d) list_setting_number_pane_vc

0x7886,	// (0x0004846d) list_setting_pane_vc_ParamLimits

0x7886,	// (0x0004846d) list_setting_pane_vc

0x7886,	// (0x0004846d) list_single_graphic_heading_pane_vc_ParamLimits

0x7886,	// (0x0004846d) list_single_graphic_heading_pane_vc

0x7886,	// (0x0004846d) list_single_heading_pane_vc_ParamLimits

0x7886,	// (0x0004846d) list_single_heading_pane_vc

0x78bc,	// (0x000484a3) list_single_number_heading_pane_vc_ParamLimits

0x78bc,	// (0x000484a3) list_single_number_heading_pane_vc

0x58f1,	// (0x000464d8) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x58f1,	// (0x000464d8) list_double_graphic_heading_pane_vc_g1

0x7521,	// (0x00048108) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x7521,	// (0x00048108) list_double_graphic_heading_pane_vc_g2

0x752d,	// (0x00048114) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x752d,	// (0x00048114) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d3,	// (0x000505ba) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d3,	// (0x000505ba) list_double_graphic_heading_pane_vc_g

0x58fd,	// (0x000464e4) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x58fd,	// (0x000464e4) list_double_graphic_heading_pane_vc_t1

0x5913,	// (0x000464fa) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5913,	// (0x000464fa) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9da,	// (0x000505c1) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9da,	// (0x000505c1) list_double_graphic_heading_pane_vc_t

0x57b5,	// (0x0004639c) list_setting_pane_vc_g1_ParamLimits

0x57b5,	// (0x0004639c) list_setting_pane_vc_g1

0x57c1,	// (0x000463a8) list_setting_pane_vc_g2_ParamLimits

0x57c1,	// (0x000463a8) list_setting_pane_vc_g2

0x0001,

0xf7c9,	// (0x000503b0) list_setting_pane_vc_g_ParamLimits

0xf7c9,	// (0x000503b0) list_setting_pane_vc_g

0x5931,	// (0x00046518) list_setting_pane_vc_t1_ParamLimits

0x5931,	// (0x00046518) list_setting_pane_vc_t1

0x594d,	// (0x00046534) list_setting_pane_vc_t2_ParamLimits

0x594d,	// (0x00046534) list_setting_pane_vc_t2

0x0001,

0xfa08,	// (0x000505ef) list_setting_pane_vc_t_ParamLimits

0xfa08,	// (0x000505ef) list_setting_pane_vc_t

0x5829,	// (0x00046410) set_value_pane_cp_vc_ParamLimits

0x5829,	// (0x00046410) set_value_pane_cp_vc

0x7521,	// (0x00048108) list_single_number_heading_pane_vc_g1_ParamLimits

0x7521,	// (0x00048108) list_single_number_heading_pane_vc_g1

0x752d,	// (0x00048114) list_single_number_heading_pane_vc_g2_ParamLimits

0x752d,	// (0x00048114) list_single_number_heading_pane_vc_g2

0x0001,

0xf7bf,	// (0x000503a6) list_single_number_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x000503a6) list_single_number_heading_pane_vc_g

0x5969,	// (0x00046550) list_single_number_heading_pane_vc_t1_ParamLimits

0x5969,	// (0x00046550) list_single_number_heading_pane_vc_t1

0x597f,	// (0x00046566) list_single_number_heading_pane_vc_t2_ParamLimits

0x597f,	// (0x00046566) list_single_number_heading_pane_vc_t2

0x5991,	// (0x00046578) list_single_number_heading_pane_vc_t3_ParamLimits

0x5991,	// (0x00046578) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0d,	// (0x000505f4) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0d,	// (0x000505f4) list_single_number_heading_pane_vc_t

0x576b,	// (0x00046352) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x576b,	// (0x00046352) list_single_graphic_heading_pane_vc_g1

0x7521,	// (0x00048108) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x7521,	// (0x00048108) list_single_graphic_heading_pane_vc_g4

0x752d,	// (0x00048114) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x752d,	// (0x00048114) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x00050385) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x00050385) list_single_graphic_heading_pane_vc_g

0x59a3,	// (0x0004658a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x59a3,	// (0x0004658a) list_single_graphic_heading_pane_vc_t1

0x59b9,	// (0x000465a0) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x59b9,	// (0x000465a0) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa14,	// (0x000505fb) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa14,	// (0x000505fb) list_single_graphic_heading_pane_vc_t

0x7521,	// (0x00048108) list_double2_pane_vc_g1_ParamLimits

0x7521,	// (0x00048108) list_double2_pane_vc_g1

0x752d,	// (0x00048114) list_double2_pane_vc_g2_ParamLimits

0x752d,	// (0x00048114) list_double2_pane_vc_g2

0x0001,

0xf7bf,	// (0x000503a6) list_double2_pane_vc_g_ParamLimits

0xf7bf,	// (0x000503a6) list_double2_pane_vc_g

0x59cb,	// (0x000465b2) list_double2_pane_vc_t1_ParamLimits

0x59cb,	// (0x000465b2) list_double2_pane_vc_t1

0x79e0,	// (0x000485c7) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x79e0,	// (0x000485c7) list_double2_large_graphic_pane_vc_g1

0x7521,	// (0x00048108) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x7521,	// (0x00048108) list_double2_large_graphic_pane_vc_g2

0x752d,	// (0x00048114) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x752d,	// (0x00048114) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa19,	// (0x00050600) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa19,	// (0x00050600) list_double2_large_graphic_pane_vc_g

0x59e1,	// (0x000465c8) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x59e1,	// (0x000465c8) list_double2_large_graphic_pane_vc_t1

0x59f7,	// (0x000465de) list_double_time_pane_vc_g1_ParamLimits

0x59f7,	// (0x000465de) list_double_time_pane_vc_g1

0x5a03,	// (0x000465ea) list_double_time_pane_vc_g2_ParamLimits

0x5a03,	// (0x000465ea) list_double_time_pane_vc_g2

0x0001,

0xfa20,	// (0x00050607) list_double_time_pane_vc_g_ParamLimits

0xfa20,	// (0x00050607) list_double_time_pane_vc_g

0x5a0f,	// (0x000465f6) list_double_time_pane_vc_t1_ParamLimits

0x5a0f,	// (0x000465f6) list_double_time_pane_vc_t1

0x5a39,	// (0x00046620) list_double_time_pane_vc_t2_ParamLimits

0x5a39,	// (0x00046620) list_double_time_pane_vc_t2

0x5a82,	// (0x00046669) list_double_time_pane_vc_t3_ParamLimits

0x5a82,	// (0x00046669) list_double_time_pane_vc_t3

0x5a94,	// (0x0004667b) list_double_time_pane_vc_t4_ParamLimits

0x5a94,	// (0x0004667b) list_double_time_pane_vc_t4

0x0003,

0xfa25,	// (0x0005060c) list_double_time_pane_vc_t_ParamLimits

0xfa25,	// (0x0005060c) list_double_time_pane_vc_t

0x7521,	// (0x00048108) list_double_pane_vc_g1_ParamLimits

0x7521,	// (0x00048108) list_double_pane_vc_g1

0x752d,	// (0x00048114) list_double_pane_vc_g2_ParamLimits

0x752d,	// (0x00048114) list_double_pane_vc_g2

0x0001,

0xf7bf,	// (0x000503a6) list_double_pane_vc_g_ParamLimits

0xf7bf,	// (0x000503a6) list_double_pane_vc_g

0x5aa8,	// (0x0004668f) list_double_pane_vc_t1_ParamLimits

0x5aa8,	// (0x0004668f) list_double_pane_vc_t1

0x5abc,	// (0x000466a3) list_double_pane_vc_t2_ParamLimits

0x5abc,	// (0x000466a3) list_double_pane_vc_t2

0x0001,

0xfa2e,	// (0x00050615) list_double_pane_vc_t_ParamLimits

0xfa2e,	// (0x00050615) list_double_pane_vc_t

0x7521,	// (0x00048108) list_double_number_pane_vc_g1_ParamLimits

0x7521,	// (0x00048108) list_double_number_pane_vc_g1

0x752d,	// (0x00048114) list_double_number_pane_vc_g2_ParamLimits

0x752d,	// (0x00048114) list_double_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x000503a6) list_double_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x000503a6) list_double_number_pane_vc_g

0x5ad2,	// (0x000466b9) list_double_number_pane_vc_t1_ParamLimits

0x5ad2,	// (0x000466b9) list_double_number_pane_vc_t1

0x5ae4,	// (0x000466cb) list_double_number_pane_vc_t2_ParamLimits

0x5ae4,	// (0x000466cb) list_double_number_pane_vc_t2

0x5abc,	// (0x000466a3) list_double_number_pane_vc_t3_ParamLimits

0x5abc,	// (0x000466a3) list_double_number_pane_vc_t3

0x0002,

0xfa33,	// (0x0005061a) list_double_number_pane_vc_t_ParamLimits

0xfa33,	// (0x0005061a) list_double_number_pane_vc_t

0x79ec,	// (0x000485d3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x79ec,	// (0x000485d3) list_double_large_graphic_pane_vc_g1

0x7a0e,	// (0x000485f5) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7a0e,	// (0x000485f5) list_double_large_graphic_pane_vc_g2

0x7a22,	// (0x00048609) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7a22,	// (0x00048609) list_double_large_graphic_pane_vc_g3

0x5af8,	// (0x000466df) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5af8,	// (0x000466df) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3a,	// (0x00050621) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x00050621) list_double_large_graphic_pane_vc_g

0x5b04,	// (0x000466eb) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5b04,	// (0x000466eb) list_double_large_graphic_pane_vc_t1

0x5b20,	// (0x00046707) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5b20,	// (0x00046707) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa43,	// (0x0005062a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa43,	// (0x0005062a) list_double_large_graphic_pane_vc_t

0x7521,	// (0x00048108) list_double_heading_pane_vc_g1_ParamLimits

0x7521,	// (0x00048108) list_double_heading_pane_vc_g1

0x752d,	// (0x00048114) list_double_heading_pane_vc_g2_ParamLimits

0x752d,	// (0x00048114) list_double_heading_pane_vc_g2

0x0001,

0xf7bf,	// (0x000503a6) list_double_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x000503a6) list_double_heading_pane_vc_g

0x5b40,	// (0x00046727) list_double_heading_pane_vc_t1_ParamLimits

0x5b40,	// (0x00046727) list_double_heading_pane_vc_t1

0x5b52,	// (0x00046739) list_double_heading_pane_vc_t2_ParamLimits

0x5b52,	// (0x00046739) list_double_heading_pane_vc_t2

0x0001,

0xfa48,	// (0x0005062f) list_double_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x0005062f) list_double_heading_pane_vc_t

0x5b6a,	// (0x00046751) list_double_graphic_pane_vc_g1_ParamLimits

0x5b6a,	// (0x00046751) list_double_graphic_pane_vc_g1

0x5b76,	// (0x0004675d) list_double_graphic_pane_vc_g2_ParamLimits

0x5b76,	// (0x0004675d) list_double_graphic_pane_vc_g2

0x7521,	// (0x00048108) list_double_graphic_pane_vc_g3_ParamLimits

0x7521,	// (0x00048108) list_double_graphic_pane_vc_g3

0x0003,

0xfa4d,	// (0x00050634) list_double_graphic_pane_vc_g_ParamLimits

0xfa4d,	// (0x00050634) list_double_graphic_pane_vc_g

0x5b93,	// (0x0004677a) list_double_graphic_pane_vc_t1_ParamLimits

0x5b93,	// (0x0004677a) list_double_graphic_pane_vc_t1

0x5bbd,	// (0x000467a4) list_double_graphic_pane_vc_t2_ParamLimits

0x5bbd,	// (0x000467a4) list_double_graphic_pane_vc_t2

0x0001,

0xfa56,	// (0x0005063d) list_double_graphic_pane_vc_t_ParamLimits

0xfa56,	// (0x0005063d) list_double_graphic_pane_vc_t

0x5ef1,	// (0x00046ad8) aid_size_cell_fastswap

0x5ef9,	// (0x00046ae0) aid_size_cell_touch_ParamLimits

0x5ef9,	// (0x00046ae0) aid_size_cell_touch

0x615a,	// (0x00046d41) popup_fast_swap_wide_window_ParamLimits

0x615a,	// (0x00046d41) popup_fast_swap_wide_window

0x6278,	// (0x00046e5f) touch_pane_ParamLimits

0x6278,	// (0x00046e5f) touch_pane

0x1038,	// (0x00041c1f) button_value_adjust_pane_cp2

0x5427,	// (0x0004600e) button_value_adjust_pane_cp4

0x544f,	// (0x00046036) form_field_data_pane_cp2

0x5474,	// (0x0004605b) form_field_data_wide_pane_cp2

0x4305,	// (0x00044eec) bg_scroll_pane_ParamLimits

0x69f1,	// (0x000475d8) scroll_handle_pane_ParamLimits

0x6a05,	// (0x000475ec) scroll_sc2_down_pane_ParamLimits

0x6a05,	// (0x000475ec) scroll_sc2_down_pane

0x435f,	// (0x00044f46) scroll_sc2_up_pane_ParamLimits

0x435f,	// (0x00044f46) scroll_sc2_up_pane

0xbbc3,	// (0x0004c7aa) grid_wheel_folder_pane_g1_ParamLimits

0xbbc3,	// (0x0004c7aa) grid_wheel_folder_pane_g1

0x6c2f,	// (0x00047816) clock_nsta_pane_cp2_ParamLimits

0x6c2f,	// (0x00047816) clock_nsta_pane_cp2

0x9175,	// (0x00049d5c) listscroll_midp_pane_ParamLimits

0x9181,	// (0x00049d68) midp_canvas_pane

0x946c,	// (0x0004a053) nsta_clock_indic_pane

0x94a0,	// (0x0004a087) listscroll_form_pane_vc

0x94a8,	// (0x0004a08f) listscroll_set_pane_vc_ParamLimits

0x94a8,	// (0x0004a08f) listscroll_set_pane_vc

0x959f,	// (0x0004a186) clock_nsta_pane

0x961c,	// (0x0004a203) indicator_nsta_pane

0x9908,	// (0x0004a4ef) bg_popup_sub_pane_cp2_ParamLimits

0x991c,	// (0x0004a503) find_pane_cp2_ParamLimits

0x991c,	// (0x0004a503) find_pane_cp2

0x9932,	// (0x0004a519) grid_toobar_pane_ParamLimits

0x9a12,	// (0x0004a5f9) list_form_gen_pane_vc_ParamLimits

0x9a12,	// (0x0004a5f9) list_form_gen_pane_vc

0x9a28,	// (0x0004a60f) scroll_pane_cp8_vc_ParamLimits

0x9a28,	// (0x0004a60f) scroll_pane_cp8_vc

0x9aa4,	// (0x0004a68b) data_form_wide_pane_vc_ParamLimits

0x9aa4,	// (0x0004a68b) data_form_wide_pane_vc

0x9ab0,	// (0x0004a697) form_field_data_wide_pane_vc_g1

0x9ab8,	// (0x0004a69f) form_field_data_wide_pane_vc_t1_ParamLimits

0x9ab8,	// (0x0004a69f) form_field_data_wide_pane_vc_t1

0x104c,	// (0x00041c33) input_focus_pane_cp6_vc_ParamLimits

0x104c,	// (0x00041c33) input_focus_pane_cp6_vc

0x9db4,	// (0x0004a99b) list_midp_pane_ParamLimits

0x9dc0,	// (0x0004a9a7) scroll_pane_cp16_ParamLimits

0x9dc0,	// (0x0004a9a7) scroll_pane_cp16

0x9e2a,	// (0x0004aa11) button_value_adjust_pane_ParamLimits

0x9e2a,	// (0x0004aa11) button_value_adjust_pane

0xadb9,	// (0x0004b9a0) button_value_adjust_pane_cp6_ParamLimits

0xadb9,	// (0x0004b9a0) button_value_adjust_pane_cp6

0xaf01,	// (0x0004bae8) settings_code_pane_cp_ParamLimits

0xaf01,	// (0x0004bae8) settings_code_pane_cp

0x09a4,	// (0x0004158b) cell_touch_pane_g1

0x09a4,	// (0x0004158b) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x000502ca) cell_touch_pane_g

0xb4ad,	// (0x0004c094) cell_touch_pane_cp_ParamLimits

0xb4ad,	// (0x0004c094) cell_touch_pane_cp

0xb4bd,	// (0x0004c0a4) cell_touch_pane_ParamLimits

0xb4bd,	// (0x0004c0a4) cell_touch_pane

0x09a4,	// (0x0004158b) scroll_sc2_down_pane_g1

0x09a4,	// (0x0004158b) scroll_sc2_up_pane_g1

0x09ae,	// (0x00041595) bg_set_opt_pane_cp4_vc

0xb4ce,	// (0x0004c0b5) list_set_graphic_pane_vc_g1_ParamLimits

0xb4ce,	// (0x0004c0b5) list_set_graphic_pane_vc_g1

0xb4da,	// (0x0004c0c1) list_set_graphic_pane_vc_g2_ParamLimits

0xb4da,	// (0x0004c0c1) list_set_graphic_pane_vc_g2

0x0001,

0xf9df,	// (0x000505c6) list_set_graphic_pane_vc_g_ParamLimits

0xf9df,	// (0x000505c6) list_set_graphic_pane_vc_g

0xb4e6,	// (0x0004c0cd) text_primary_small_cp13_vc_ParamLimits

0xb4e6,	// (0x0004c0cd) text_primary_small_cp13_vc

0xb4fe,	// (0x0004c0e5) list_set_graphic_pane_vc_ParamLimits

0xb4fe,	// (0x0004c0e5) list_set_graphic_pane_vc

0x09ae,	// (0x00041595) input_focus_pane_cp2_vc

0x09a4,	// (0x0004158b) setting_code_pane_vc_g1

0x0a21,	// (0x00041608) setting_code_pane_vc_t1

0xb511,	// (0x0004c0f8) set_text_pane_vc_t1_ParamLimits

0xb511,	// (0x0004c0f8) set_text_pane_vc_t1

0x09ae,	// (0x00041595) input_focus_pane_cp1_vc

0xb532,	// (0x0004c119) list_set_text_pane_vc

0x09a4,	// (0x0004158b) setting_text_pane_vc_g1

0x09ae,	// (0x00041595) bg_set_opt_pane_cp2_vc

0x0a18,	// (0x000415ff) setting_slider_graphic_pane_vc_g1

0xb53c,	// (0x0004c123) setting_slider_graphic_pane_vc_t1

0xb54e,	// (0x0004c135) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e4,	// (0x000505cb) setting_slider_graphic_pane_vc_t

0xb560,	// (0x0004c147) slider_set_pane_cp_vc

0xb56a,	// (0x0004c151) slider_set_pane_vc_g1

0xb573,	// (0x0004c15a) slider_set_pane_vc_g2

0x0006,

0xf9e9,	// (0x000505d0) slider_set_pane_vc_g

0x10a4,	// (0x00041c8b) set_opt_bg_pane_g1_copy1

0x10ac,	// (0x00041c93) set_opt_bg_pane_g2_copy1

0xb59f,	// (0x0004c186) set_opt_bg_pane_g3_copy1

0x10bc,	// (0x00041ca3) set_opt_bg_pane_g4_copy1

0x10c4,	// (0x00041cab) set_opt_bg_pane_g5_copy1

0x10cc,	// (0x00041cb3) set_opt_bg_pane_g6_copy1

0xb5a9,	// (0x0004c190) set_opt_bg_pane_g7_copy1

0xb5b3,	// (0x0004c19a) set_opt_bg_pane_g8_copy1

0xb5bd,	// (0x0004c1a4) set_opt_bg_pane_g9_copy1

0x09ae,	// (0x00041595) bg_set_opt_pane_cp_vc

0xb5c7,	// (0x0004c1ae) setting_slider_pane_vc_t1

0xb5d6,	// (0x0004c1bd) setting_slider_pane_vc_t2

0xb5e8,	// (0x0004c1cf) setting_slider_pane_vc_t3

0x0002,

0xf9f8,	// (0x000505df) setting_slider_pane_vc_t

0xb5fa,	// (0x0004c1e1) slider_set_pane_vc

0x763e,	// (0x00048225) volume_set_pane_vc_g1

0x7647,	// (0x0004822e) volume_set_pane_vc_g2

0x7650,	// (0x00048237) volume_set_pane_vc_g3

0x7659,	// (0x00048240) volume_set_pane_vc_g4

0x7662,	// (0x00048249) volume_set_pane_vc_g5

0x766b,	// (0x00048252) volume_set_pane_vc_g6

0x7674,	// (0x0004825b) volume_set_pane_vc_g7

0x767d,	// (0x00048264) volume_set_pane_vc_g8

0x7686,	// (0x0004826d) volume_set_pane_vc_g9

0x768f,	// (0x00048276) volume_set_pane_vc_g10

0x0009,

0xf896,	// (0x0005047d) volume_set_pane_vc_g

0xb604,	// (0x0004c1eb) volume_set_pane_vc

0xb60e,	// (0x0004c1f5) button_value_adjust_pane_cp1_vc

0xb618,	// (0x0004c1ff) list_highlight_pane_cp2_vc

0xb621,	// (0x0004c208) list_set_pane_vc_ParamLimits

0xb621,	// (0x0004c208) list_set_pane_vc

0xb68f,	// (0x0004c276) main_pane_set_vc_t1_ParamLimits

0xb68f,	// (0x0004c276) main_pane_set_vc_t1

0xb6a4,	// (0x0004c28b) main_pane_set_vc_t2_ParamLimits

0xb6a4,	// (0x0004c28b) main_pane_set_vc_t2

0xb6b6,	// (0x0004c29d) main_pane_set_vc_t3_ParamLimits

0xb6b6,	// (0x0004c29d) main_pane_set_vc_t3

0xb6ca,	// (0x0004c2b1) main_pane_set_vc_t4_ParamLimits

0xb6ca,	// (0x0004c2b1) main_pane_set_vc_t4

0x0003,

0xf9ff,	// (0x000505e6) main_pane_set_vc_t_ParamLimits

0xf9ff,	// (0x000505e6) main_pane_set_vc_t

0xb6de,	// (0x0004c2c5) setting_code_pane_vc_ParamLimits

0xb6de,	// (0x0004c2c5) setting_code_pane_vc

0xb6ef,	// (0x0004c2d6) setting_slider_graphic_pane_vc

0xb6ef,	// (0x0004c2d6) setting_slider_pane_vc

0xb6ef,	// (0x0004c2d6) setting_text_pane_vc

0xb6ef,	// (0x0004c2d6) setting_volume_pane_vc

0xb6f9,	// (0x0004c2e0) scroll_pane_cp121_vc

0x1026,	// (0x00041c0d) set_content_pane_vc

0xb701,	// (0x0004c2e8) button_value_adjust_pane_g1

0xb70a,	// (0x0004c2f1) button_value_adjust_pane_g2

0x0001,

0xfa5b,	// (0x00050642) button_value_adjust_pane_g

0xb713,	// (0x0004c2fa) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb713,	// (0x0004c2fa) form_field_slider_wide_pane_vc_t1

0xb725,	// (0x0004c30c) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb725,	// (0x0004c30c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa60,	// (0x00050647) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa60,	// (0x00050647) form_field_slider_wide_pane_vc_t

0x09fc,	// (0x000415e3) input_focus_pane_cp10_vc_ParamLimits

0x09fc,	// (0x000415e3) input_focus_pane_cp10_vc

0xb751,	// (0x0004c338) slider_cont_pane_cp1_vc_ParamLimits

0xb751,	// (0x0004c338) slider_cont_pane_cp1_vc

0xb763,	// (0x0004c34a) slider_form_pane_g1_cp2

0xb573,	// (0x0004c15a) slider_form_pane_g2_cp2

0xb790,	// (0x0004c377) form_field_slider_pane_vc_t3

0xb79e,	// (0x0004c385) form_field_slider_pane_vc_t4

0xb7ac,	// (0x0004c393) slider_form_pane_vc_ParamLimits

0xb7ac,	// (0x0004c393) slider_form_pane_vc

0xb7b9,	// (0x0004c3a0) form_field_slider_pane_vc_t1_ParamLimits

0xb7b9,	// (0x0004c3a0) form_field_slider_pane_vc_t1

0xb725,	// (0x0004c30c) form_field_slider_pane_vc_t2_ParamLimits

0xb725,	// (0x0004c30c) form_field_slider_pane_vc_t2

0x0001,

0xfa72,	// (0x00050659) form_field_slider_pane_vc_t_ParamLimits

0xfa72,	// (0x00050659) form_field_slider_pane_vc_t

0x09fc,	// (0x000415e3) input_focus_pane_cp9_vc_ParamLimits

0x09fc,	// (0x000415e3) input_focus_pane_cp9_vc

0xb7cf,	// (0x0004c3b6) slider_cont_pane_vc_ParamLimits

0xb7cf,	// (0x0004c3b6) slider_cont_pane_vc

0xb7e3,	// (0x0004c3ca) list_form_graphic_pane_cp_vc_ParamLimits

0xb7e3,	// (0x0004c3ca) list_form_graphic_pane_cp_vc

0x9ab0,	// (0x0004a697) form_field_popup_wide_pane_vc_g1

0xb7f8,	// (0x0004c3df) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb7f8,	// (0x0004c3df) form_field_popup_wide_pane_vc_t1

0x104c,	// (0x00041c33) input_focus_pane_cp8_vc_ParamLimits

0x104c,	// (0x00041c33) input_focus_pane_cp8_vc

0xb83d,	// (0x0004c424) list_form_wide_pane_vc_ParamLimits

0xb83d,	// (0x0004c424) list_form_wide_pane_vc

0xb849,	// (0x0004c430) list_form_graphic_pane_vc_g1

0xb851,	// (0x0004c438) list_form_graphic_pane_vc_t1_ParamLimits

0xb851,	// (0x0004c438) list_form_graphic_pane_vc_t1

0x0a0a,	// (0x000415f1) list_highlight_pane_cp5_vc_ParamLimits

0x0a0a,	// (0x000415f1) list_highlight_pane_cp5_vc

0xb86d,	// (0x0004c454) list_form_graphic_pane_vc_ParamLimits

0xb86d,	// (0x0004c454) list_form_graphic_pane_vc

0x9ab0,	// (0x0004a697) form_field_popup_pane_vc_g1

0xb883,	// (0x0004c46a) form_field_popup_pane_vc_t1_ParamLimits

0xb883,	// (0x0004c46a) form_field_popup_pane_vc_t1

0x104c,	// (0x00041c33) input_focus_pane_cp7_vc_ParamLimits

0x104c,	// (0x00041c33) input_focus_pane_cp7_vc

0xb89a,	// (0x0004c481) list_form_pane_vc_ParamLimits

0xb89a,	// (0x0004c481) list_form_pane_vc

0xb8a6,	// (0x0004c48d) data_form_pane_vc_t1_ParamLimits

0xb8a6,	// (0x0004c48d) data_form_pane_vc_t1

0x10a4,	// (0x00041c8b) input_focus_pane_vc_g1

0x10ac,	// (0x00041c93) input_focus_pane_vc_g2

0x10b4,	// (0x00041c9b) input_focus_pane_vc_g3

0x10bc,	// (0x00041ca3) input_focus_pane_vc_g4

0x10c4,	// (0x00041cab) input_focus_pane_vc_g5

0x10cc,	// (0x00041cb3) input_focus_pane_vc_g6

0x10d4,	// (0x00041cbb) input_focus_pane_vc_g7

0x10dc,	// (0x00041cc3) input_focus_pane_vc_g8

0x10e4,	// (0x00041ccb) input_focus_pane_vc_g9

0x09a4,	// (0x0004158b) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x00050253) input_focus_pane_vc_g

0x9aa4,	// (0x0004a68b) data_form_pane_vc_ParamLimits

0x9aa4,	// (0x0004a68b) data_form_pane_vc

0x9ab0,	// (0x0004a697) form_field_data_pane_vc_g1

0xb8c3,	// (0x0004c4aa) form_field_data_pane_vc_t1_ParamLimits

0xb8c3,	// (0x0004c4aa) form_field_data_pane_vc_t1

0x104c,	// (0x00041c33) input_focus_pane_vc_ParamLimits

0x104c,	// (0x00041c33) input_focus_pane_vc

0xb8dd,	// (0x0004c4c4) button_value_adjust_pane_cp3_vc

0xb8e5,	// (0x0004c4cc) button_value_adjust_pane_cp5_vc

0xb8ed,	// (0x0004c4d4) form_field_data_pane_vc_ParamLimits

0xb8ed,	// (0x0004c4d4) form_field_data_pane_vc

0xb908,	// (0x0004c4ef) form_field_data_pane_vc_cp2

0xb910,	// (0x0004c4f7) form_field_data_wide_pane_vc_ParamLimits

0xb910,	// (0x0004c4f7) form_field_data_wide_pane_vc

0xb92a,	// (0x0004c511) form_field_data_wide_pane_vc_cp2

0xb932,	// (0x0004c519) form_field_popup_pane_vc_ParamLimits

0xb932,	// (0x0004c519) form_field_popup_pane_vc

0xb94d,	// (0x0004c534) form_field_popup_wide_pane_vc_ParamLimits

0xb94d,	// (0x0004c534) form_field_popup_wide_pane_vc

0xb967,	// (0x0004c54e) form_field_slider_pane_vc_ParamLimits

0xb967,	// (0x0004c54e) form_field_slider_pane_vc

0xb97a,	// (0x0004c561) form_field_slider_wide_pane_vc_ParamLimits

0xb97a,	// (0x0004c561) form_field_slider_wide_pane_vc

0xb98d,	// (0x0004c574) grid_touch_1_pane_ParamLimits

0xb98d,	// (0x0004c574) grid_touch_1_pane

0xb999,	// (0x0004c580) grid_touch_2_pane_ParamLimits

0xb999,	// (0x0004c580) grid_touch_2_pane

0x9437,	// (0x0004a01e) touch_pane_g1_ParamLimits

0x9437,	// (0x0004a01e) touch_pane_g1

0xb9b3,	// (0x0004c59a) cell_app_pane_cp_wide_ParamLimits

0xb9b3,	// (0x0004c59a) cell_app_pane_cp_wide

0xb9c4,	// (0x0004c5ab) grid_popup_fast_wide_pane_ParamLimits

0xb9c4,	// (0x0004c5ab) grid_popup_fast_wide_pane

0xb9d8,	// (0x0004c5bf) scroll_pane_cp19_ParamLimits

0xb9d8,	// (0x0004c5bf) scroll_pane_cp19

0x09ae,	// (0x00041595) bg_popup_window_pane_cp20

0xb9ec,	// (0x0004c5d3) listscroll_popup_fast_wide_pane

0xb9f4,	// (0x0004c5db) grid_indicator_nsta_pane

0xba06,	// (0x0004c5ed) clock_nsta_pane_g1

0xba0f,	// (0x0004c5f6) clock_nsta_pane_t1

0xba2b,	// (0x0004c612) cell_indicator_nsta_pane_ParamLimits

0xba2b,	// (0x0004c612) cell_indicator_nsta_pane

0xba60,	// (0x0004c647) cell_indicator_nsta_pane_g1

0xba6e,	// (0x0004c655) cell_indicator_nsta_pane_g2

0x0001,

0xfa83,	// (0x0005066a) cell_indicator_nsta_pane_g

0xba81,	// (0x0004c668) clock_nsta_pane_cp

0xba8a,	// (0x0004c671) indicator_nsta_pane_cp

0xba94,	// (0x0004c67b) nsta_clock_indic_pane_g1

0x0a46,	// (0x0004162d) grid_indicator_pane

0x4451,	// (0x00045038) scroll_pane_cp29

0x6b7e,	// (0x00047765) indicator_nsta_pane_cp2_ParamLimits

0x6b7e,	// (0x00047765) indicator_nsta_pane_cp2

0x0a0a,	// (0x000415f1) main_apps_wheel_pane

0x9c91,	// (0x0004a878) form_midp_field_text_pane_ParamLimits

0x9de0,	// (0x0004a9c7) scroll_bar_cp050_ParamLimits

0xbaed,	// (0x0004c6d4) cell_indicator_pane_ParamLimits

0xbaed,	// (0x0004c6d4) cell_indicator_pane

0xbb05,	// (0x0004c6ec) cell_indicator_pane_g1

0xbb0f,	// (0x0004c6f6) grid_wheel_folder_pane_ParamLimits

0xbb0f,	// (0x0004c6f6) grid_wheel_folder_pane

0xbb23,	// (0x0004c70a) list_wheel_apps_pane_ParamLimits

0xbb23,	// (0x0004c70a) list_wheel_apps_pane

0xbb36,	// (0x0004c71d) main_apps_wheel_pane_g1_ParamLimits

0xbb36,	// (0x0004c71d) main_apps_wheel_pane_g1

0xbb52,	// (0x0004c739) main_apps_wheel_pane_g2_ParamLimits

0xbb52,	// (0x0004c739) main_apps_wheel_pane_g2

0x0001,

0xfa9f,	// (0x00050686) main_apps_wheel_pane_g_ParamLimits

0xfa9f,	// (0x00050686) main_apps_wheel_pane_g

0xbb6e,	// (0x0004c755) main_apps_wheel_pane_t1_ParamLimits

0xbb6e,	// (0x0004c755) main_apps_wheel_pane_t1

0xbb97,	// (0x0004c77e) list_wheel_apps_pane_g1

0xbb9f,	// (0x0004c786) list_wheel_apps_pane_g2

0xbba7,	// (0x0004c78e) list_wheel_apps_pane_g3

0xbbaf,	// (0x0004c796) list_wheel_apps_pane_g4

0xbbb9,	// (0x0004c7a0) list_wheel_apps_pane_g5

0x0004,

0xfaa4,	// (0x0005068b) list_wheel_apps_pane_g

0x8fe9,	// (0x00049bd0) navi_icon_text_pane

0x94d0,	// (0x0004a0b7) aid_fill_nsta

0xbbda,	// (0x0004c7c1) navi_icon_text_pane_g1

0xbbe6,	// (0x0004c7cd) navi_icon_text_pane_t1

0x8e80,	// (0x00049a67) list_set_graphic_pane_t1_ParamLimits

0x8e80,	// (0x00049a67) list_set_graphic_pane_t1

0xa54d,	// (0x0004b134) popup_midp_note_alarm_window_t6_ParamLimits

0xa54d,	// (0x0004b134) popup_midp_note_alarm_window_t6

0xa55f,	// (0x0004b146) popup_midp_note_alarm_window_t7_ParamLimits

0xa55f,	// (0x0004b146) popup_midp_note_alarm_window_t7

0xa571,	// (0x0004b158) popup_midp_note_alarm_window_t8_ParamLimits

0xa571,	// (0x0004b158) popup_midp_note_alarm_window_t8

0xa583,	// (0x0004b16a) popup_midp_note_alarm_window_t9_ParamLimits

0xa583,	// (0x0004b16a) popup_midp_note_alarm_window_t9

0xa595,	// (0x0004b17c) popup_midp_note_alarm_window_t10_ParamLimits

0xa595,	// (0x0004b17c) popup_midp_note_alarm_window_t10

0xa5a7,	// (0x0004b18e) popup_midp_note_alarm_window_t11_ParamLimits

0xa5a7,	// (0x0004b18e) popup_midp_note_alarm_window_t11

0xa5b9,	// (0x0004b1a0) scroll_pane_cp17_ParamLimits

0xa5b9,	// (0x0004b1a0) scroll_pane_cp17

0x763e,	// (0x00048225) volume_small_pane_cp_g1

0x7a31,	// (0x00048618) volume_small_pane_cp_g2

0x7a3a,	// (0x00048621) volume_small_pane_cp_g3

0x7a43,	// (0x0004862a) volume_small_pane_cp_g4

0x7a4c,	// (0x00048633) volume_small_pane_cp_g5

0x7a55,	// (0x0004863c) volume_small_pane_cp_g6

0x7a5e,	// (0x00048645) volume_small_pane_cp_g7

0x7a67,	// (0x0004864e) volume_small_pane_cp_g8

0x7a70,	// (0x00048657) volume_small_pane_cp_g9

0x7a79,	// (0x00048660) volume_small_pane_cp_g10

0x924b,	// (0x00049e32) midp_ticker_pane_g1_ParamLimits

0x9257,	// (0x00049e3e) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x0005031f) midp_ticker_pane_g_ParamLimits

0x9263,	// (0x00049e4a) midp_ticker_pane_t1_ParamLimits

0x94e6,	// (0x0004a0cd) aid_fill_nsta_2

0x9dcc,	// (0x0004a9b3) list_form2_midp_pane

0xaf48,	// (0x0004bb2f) midp_editing_number_pane_ParamLimits

0xaf57,	// (0x0004bb3e) midp_ticker_pane_ParamLimits

0xbbf8,	// (0x0004c7df) form2_midp_field_pane

0xbc1c,	// (0x0004c803) scroll_pane_cp51

0xbc3c,	// (0x0004c823) form2_midp_button_pane_ParamLimits

0xbc3c,	// (0x0004c823) form2_midp_button_pane

0xbc4e,	// (0x0004c835) form2_midp_content_pane_ParamLimits

0xbc4e,	// (0x0004c835) form2_midp_content_pane

0xbc68,	// (0x0004c84f) form2_midp_field_choice_group_pane

0xbc70,	// (0x0004c857) form2_midp_field_pane_g1

0xbc78,	// (0x0004c85f) form2_midp_field_pane_g2

0xbc80,	// (0x0004c867) form2_midp_field_pane_g3

0xbc88,	// (0x0004c86f) form2_midp_field_pane_g4

0x0003,

0xfac9,	// (0x000506b0) form2_midp_field_pane_g

0xbc90,	// (0x0004c877) form2_midp_gauge_slider_pane

0xbc98,	// (0x0004c87f) form2_midp_gauge_wait_pane

0xbca0,	// (0x0004c887) form2_midp_image_pane_ParamLimits

0xbca0,	// (0x0004c887) form2_midp_image_pane

0xbcbb,	// (0x0004c8a2) form2_midp_label_pane_ParamLimits

0xbcbb,	// (0x0004c8a2) form2_midp_label_pane

0xbcda,	// (0x0004c8c1) form2_midp_label_pane_cp_ParamLimits

0xbcda,	// (0x0004c8c1) form2_midp_label_pane_cp

0xbcfb,	// (0x0004c8e2) form2_midp_string_pane_ParamLimits

0xbcfb,	// (0x0004c8e2) form2_midp_string_pane

0x5bdb,	// (0x000467c2) form2_midp_text_pane_ParamLimits

0x5bdb,	// (0x000467c2) form2_midp_text_pane

0xbd0d,	// (0x0004c8f4) form2_midp_time_pane

0xbd1d,	// (0x0004c904) input_focus_pane_cp51_ParamLimits

0xbd1d,	// (0x0004c904) input_focus_pane_cp51

0xbd35,	// (0x0004c91c) form2_midp_label_pane_t1_ParamLimits

0xbd35,	// (0x0004c91c) form2_midp_label_pane_t1

0x5bfe,	// (0x000467e5) form2_mdip_text_pane_t1_ParamLimits

0x5bfe,	// (0x000467e5) form2_mdip_text_pane_t1

0x5c1d,	// (0x00046804) form2_midp_time_pane_t1

0xbd83,	// (0x0004c96a) form2_midp_gauge_slider_pane_t1

0xbd95,	// (0x0004c97c) form2_midp_gauge_slider_pane_t2

0xbda7,	// (0x0004c98e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad2,	// (0x000506b9) form2_midp_gauge_slider_pane_t

0xbdb9,	// (0x0004c9a0) form2_midp_slider_pane

0xbdc5,	// (0x0004c9ac) form2_midp_gauge_wait_pane_t1

0xbdd3,	// (0x0004c9ba) form2_midp_wait_pane_ParamLimits

0xbdd3,	// (0x0004c9ba) form2_midp_wait_pane

0xbdfe,	// (0x0004c9e5) list_single_2graphic_pane_cp4_ParamLimits

0xbdfe,	// (0x0004c9e5) list_single_2graphic_pane_cp4

0x9b0d,	// (0x0004a6f4) list_single_midp_graphic_pane_cp_ParamLimits

0x9b0d,	// (0x0004a6f4) list_single_midp_graphic_pane_cp

0x09ae,	// (0x00041595) list_highlight_pane_cp20

0xbe17,	// (0x0004c9fe) list_single_2graphic_pane_g1_cp4

0xb3b0,	// (0x0004bf97) list_single_2graphic_pane_g2_cp4

0xbe1f,	// (0x0004ca06) list_single_2graphic_pane_t1_cp4

0x0a0a,	// (0x000415f1) list_highlight_pane_cp21

0xbe2e,	// (0x0004ca15) list_single_midp_graphic_pane_g4_cp

0xbe3d,	// (0x0004ca24) list_single_midp_graphic_pane_t1_cp

0xbe52,	// (0x0004ca39) form2_mdip_string_pane_t1_ParamLimits

0xbe52,	// (0x0004ca39) form2_mdip_string_pane_t1

0x09ae,	// (0x00041595) bg_wml_button_pane_cp2

0x09a4,	// (0x0004158b) form2_midp_image_pane_g1

0x66df,	// (0x000472c6) list_double_large_graphic_pane_g5_ParamLimits

0x66df,	// (0x000472c6) list_double_large_graphic_pane_g5

0x9175,	// (0x00049d5c) midp_form_pane_ParamLimits

0x0a0a,	// (0x000415f1) main_apps_wheel_pane_ParamLimits

0x72a3,	// (0x00047e8a) popup_preview_window_ParamLimits

0x72a3,	// (0x00047e8a) popup_preview_window

0x748a,	// (0x00048071) popup_touch_info_window_ParamLimits

0x748a,	// (0x00048071) popup_touch_info_window

0x74ac,	// (0x00048093) popup_touch_menu_window_ParamLimits

0x74ac,	// (0x00048093) popup_touch_menu_window

0x099a,	// (0x00041581) bg_popup_sub_pane_cp6

0xbeee,	// (0x0004cad5) list_touch_menu_pane

0xbef6,	// (0x0004cadd) list_single_touch_menu_pane_ParamLimits

0xbef6,	// (0x0004cadd) list_single_touch_menu_pane

0xbf0e,	// (0x0004caf5) list_single_touch_menu_pane_t1

0x0a0a,	// (0x000415f1) bg_popup_sub_pane_cp7_ParamLimits

0x0a0a,	// (0x000415f1) bg_popup_sub_pane_cp7

0xbf1c,	// (0x0004cb03) heading_sub_pane

0xbf24,	// (0x0004cb0b) list_touch_info_pane_ParamLimits

0xbf24,	// (0x0004cb0b) list_touch_info_pane

0xbf33,	// (0x0004cb1a) list_single_touch_info_pane_ParamLimits

0xbf33,	// (0x0004cb1a) list_single_touch_info_pane

0xbf45,	// (0x0004cb2c) list_single_touch_info_pane_t1

0xbf53,	// (0x0004cb3a) list_single_touch_info_pane_t2

0x0001,

0xfae0,	// (0x000506c7) list_single_touch_info_pane_t

0x916d,	// (0x00049d54) bg_popup_heading_pane_cp

0xbf61,	// (0x0004cb48) heading_sub_pane_t1

0x9a3e,	// (0x0004a625) bg_popup_preview_window_pane_cp_ParamLimits

0x9a3e,	// (0x0004a625) bg_popup_preview_window_pane_cp

0xbf1c,	// (0x0004cb03) heading_preview_pane

0xbf24,	// (0x0004cb0b) list_preview_pane_ParamLimits

0xbf24,	// (0x0004cb0b) list_preview_pane

0xbf6f,	// (0x0004cb56) popup_preview_window_g1

0xbf33,	// (0x0004cb1a) list_single_preview_pane_ParamLimits

0xbf33,	// (0x0004cb1a) list_single_preview_pane

0xbf77,	// (0x0004cb5e) list_single_preview_pane_g1

0xbf7f,	// (0x0004cb66) list_single_preview_pane_t1

0xbf45,	// (0x0004cb2c) list_single_preview_pane_t2

0x0001,

0xfae5,	// (0x000506cc) list_single_preview_pane_t

0xbf8d,	// (0x0004cb74) bg_popup_heading_pane_cp2_ParamLimits

0xbf8d,	// (0x0004cb74) bg_popup_heading_pane_cp2

0xbfa3,	// (0x0004cb8a) heading_preview_pane_g1

0xbfab,	// (0x0004cb92) heading_preview_pane_t1_ParamLimits

0xbfab,	// (0x0004cb92) heading_preview_pane_t1

0x0a5d,	// (0x00041644) soft_indicator_pane_t1_ParamLimits

0x0fbf,	// (0x00041ba6) scroll_pane_ParamLimits

0x4356,	// (0x00044f3d) scroll_sc2_left_pane

0x434d,	// (0x00044f34) scroll_sc2_right_pane

0x4375,	// (0x00044f5c) scroll_bg_pane_g1_ParamLimits

0x438a,	// (0x00044f71) scroll_bg_pane_g2_ParamLimits

0x43a2,	// (0x00044f89) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x000502aa) scroll_bg_pane_g_ParamLimits

0x4375,	// (0x00044f5c) scroll_handle_pane_g1_ParamLimits

0x43c4,	// (0x00044fab) scroll_handle_pane_g2_ParamLimits

0x43a2,	// (0x00044f89) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x000502b1) scroll_handle_pane_g_ParamLimits

0x6ee8,	// (0x00047acf) popup_choice_list_window_ParamLimits

0x6ee8,	// (0x00047acf) popup_choice_list_window

0x9914,	// (0x0004a4fb) choice_list_pane

0x9996,	// (0x0004a57d) cell_toolbar_pane_t1

0x99be,	// (0x0004a5a5) toolbar_button_pane_ParamLimits

0xaa83,	// (0x0004b66a) ai_gene_pane_1_t2_ParamLimits

0xaa83,	// (0x0004b66a) ai_gene_pane_1_t2

0x0001,

0xf8f2,	// (0x000504d9) ai_gene_pane_1_t_ParamLimits

0xf8f2,	// (0x000504d9) ai_gene_pane_1_t

0xbfc8,	// (0x0004cbaf) scroll_sc2_left_pane_g1

0xbfc8,	// (0x0004cbaf) scroll_sc2_right_pane_g1

0x9494,	// (0x0004a07b) bg_popup_sub_pane_cp10

0xbfd2,	// (0x0004cbb9) list_choice_list_pane

0xbfeb,	// (0x0004cbd2) list_single_choice_list_pane_ParamLimits

0xbfeb,	// (0x0004cbd2) list_single_choice_list_pane

0xc003,	// (0x0004cbea) list_single_choice_list_pane_g1

0x3f83,	// (0x00044b6a) list_single_choice_list_pane_t1_ParamLimits

0x3f83,	// (0x00044b6a) list_single_choice_list_pane_t1

0xc00b,	// (0x0004cbf2) choice_list_pane_g1

0xc013,	// (0x0004cbfa) choice_list_pane_t1

0x099a,	// (0x00041581) input_focus_pane_cp11

0x4151,	// (0x00044d38) title_pane_stacon_g2_ParamLimits

0x4151,	// (0x00044d38) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x00050290) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x00050290) title_pane_stacon_g

0x916d,	// (0x00049d54) cursor_press_pane

0x6fa2,	// (0x00047b89) popup_fep_hwr_window_ParamLimits

0x6fa2,	// (0x00047b89) popup_fep_hwr_window

0x702c,	// (0x00047c13) popup_fep_vkb_window_ParamLimits

0x702c,	// (0x00047c13) popup_fep_vkb_window

0xc021,	// (0x0004cc08) cursor_press_pane_g1

0x0002,

0xfb0e,	// (0x000506f5) fep_vkb_side_pane_g_ParamLimits

0x7abb,	// (0x000486a2) fep_hwr_candidate_pane_ParamLimits

0x7abb,	// (0x000486a2) fep_hwr_candidate_pane

0x7ae5,	// (0x000486cc) fep_hwr_side_pane_ParamLimits

0x7ae5,	// (0x000486cc) fep_hwr_side_pane

0x7b07,	// (0x000486ee) fep_hwr_top_pane_ParamLimits

0x7b07,	// (0x000486ee) fep_hwr_top_pane

0x7b1f,	// (0x00048706) fep_hwr_write_pane_ParamLimits

0x7b1f,	// (0x00048706) fep_hwr_write_pane

0xfb0e,	// (0x000506f5) fep_vkb_side_pane_g

0xc029,	// (0x0004cc10) fep_hwr_top_pane_g1

0xc03b,	// (0x0004cc22) fep_hwr_top_pane_g2

0x7b4b,	// (0x00048732) fep_hwr_top_pane_g3

0x0002,

0xfaea,	// (0x000506d1) fep_hwr_top_pane_g

0x7b60,	// (0x00048747) fep_hwr_top_text_pane

0x8b61,	// (0x00049748) fep_hwr_top_text_pane_g1

0xc071,	// (0x0004cc58) fep_hwr_top_text_pane_t1

0x7c6a,	// (0x00048851) fep_hwr_candidate_pane_g1

0xc2bc,	// (0x0004cea3) fep_vkb_keypad_pane_g3_ParamLimits

0xc2bc,	// (0x0004cea3) fep_vkb_keypad_pane_g3

0xc2e8,	// (0x0004cecf) fep_vkb_keypad_pane_g4_ParamLimits

0xc2e8,	// (0x0004cecf) fep_vkb_keypad_pane_g4

0xc35f,	// (0x0004cf46) fep_vkb_bottom_pane_g2_ParamLimits

0xc35f,	// (0x0004cf46) fep_vkb_bottom_pane_g2

0x0001,

0xfb15,	// (0x000506fc) fep_vkb_bottom_pane_g_ParamLimits

0xfb15,	// (0x000506fc) fep_vkb_bottom_pane_g

0xbfc8,	// (0x0004cbaf) cell_vkb_side_pane_g2

0x0001,

0xfb1f,	// (0x00050706) cell_vkb_side_pane_g

0xc3ea,	// (0x0004cfd1) cell_vkb_side_pane_t1

0xc3f8,	// (0x0004cfdf) cell_vkb_side_pane_t1_copy1

0xbfc8,	// (0x0004cbaf) bg_fep_vkb_candidate_pane_g2

0xc53c,	// (0x0004d123) cell_vkb_candidate_pane_ParamLimits

0xc07f,	// (0x0004cc66) aid_size_cell_vkb_ParamLimits

0xc07f,	// (0x0004cc66) aid_size_cell_vkb

0xc53c,	// (0x0004d123) cell_vkb_candidate_pane

0x7c84,	// (0x0004886b) bg_popup_fep_shadow_pane_g1

0xc111,	// (0x0004ccf8) fep_vkb_bottom_pane_ParamLimits

0xc111,	// (0x0004ccf8) fep_vkb_bottom_pane

0xc14e,	// (0x0004cd35) fep_vkb_candidate_pane_ParamLimits

0xc14e,	// (0x0004cd35) fep_vkb_candidate_pane

0xc16a,	// (0x0004cd51) fep_vkb_keypad_pane_ParamLimits

0xc16a,	// (0x0004cd51) fep_vkb_keypad_pane

0xc19d,	// (0x0004cd84) fep_vkb_side_pane_ParamLimits

0xc19d,	// (0x0004cd84) fep_vkb_side_pane

0xc1d9,	// (0x0004cdc0) fep_vkb_top_pane_ParamLimits

0xc1d9,	// (0x0004cdc0) fep_vkb_top_pane

0xc215,	// (0x0004cdfc) fep_vkb_top_pane_g1_ParamLimits

0xc215,	// (0x0004cdfc) fep_vkb_top_pane_g1

0xc224,	// (0x0004ce0b) fep_vkb_top_pane_g2_ParamLimits

0xc224,	// (0x0004ce0b) fep_vkb_top_pane_g2

0xc233,	// (0x0004ce1a) fep_vkb_top_pane_g3_ParamLimits

0xc233,	// (0x0004ce1a) fep_vkb_top_pane_g3

0x0003,

0xfb05,	// (0x000506ec) fep_vkb_top_pane_g_ParamLimits

0xfb05,	// (0x000506ec) fep_vkb_top_pane_g

0xc251,	// (0x0004ce38) fep_vkb_top_text_pane_ParamLimits

0xc251,	// (0x0004ce38) fep_vkb_top_text_pane

0xc262,	// (0x0004ce49) fep_vkb_side_pane_g1_ParamLimits

0xc262,	// (0x0004ce49) fep_vkb_side_pane_g1

0xc2ab,	// (0x0004ce92) grid_vkb_side_pane_ParamLimits

0xc2ab,	// (0x0004ce92) grid_vkb_side_pane

0x7c8c,	// (0x00048873) bg_popup_fep_shadow_pane_g2

0x7c95,	// (0x0004887c) bg_popup_fep_shadow_pane_g3

0x7c9d,	// (0x00048884) bg_popup_fep_shadow_pane_g4

0x7ca6,	// (0x0004888d) bg_popup_fep_shadow_pane_g5

0x7cb0,	// (0x00048897) bg_popup_fep_shadow_pane_g6

0x7cb8,	// (0x0004889f) bg_popup_fep_shadow_pane_g7

0x10c4,	// (0x00041cab) bg_popup_fep_shadow_pane_g8

0xc30a,	// (0x0004cef1) grid_vkb_keypad_number_pane_ParamLimits

0xc30a,	// (0x0004cef1) grid_vkb_keypad_number_pane

0xc31e,	// (0x0004cf05) grid_vkb_keypad_pane_ParamLimits

0xc31e,	// (0x0004cf05) grid_vkb_keypad_pane

0xc344,	// (0x0004cf2b) fep_vkb_bottom_pane_g1_ParamLimits

0xc344,	// (0x0004cf2b) fep_vkb_bottom_pane_g1

0xc36d,	// (0x0004cf54) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc36d,	// (0x0004cf54) grid_vkb_keypad_bottom_left_pane

0xc382,	// (0x0004cf69) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc382,	// (0x0004cf69) grid_vkb_keypad_bottom_right_pane

0xc397,	// (0x0004cf7e) fep_vkb_top_text_pane_g1

0xc3b2,	// (0x0004cf99) fep_vkb_top_text_pane_t1

0xc3c7,	// (0x0004cfae) cell_vkb_side_pane_ParamLimits

0xc3c7,	// (0x0004cfae) cell_vkb_side_pane

0xbfc8,	// (0x0004cbaf) cell_vkb_side_pane_g1

0xc406,	// (0x0004cfed) cell_vkb_keypad_pane_ParamLimits

0xc406,	// (0x0004cfed) cell_vkb_keypad_pane

0xc493,	// (0x0004d07a) cell_vkb_keypad_pane_g1

0x0008,

0xfb32,	// (0x00050719) bg_popup_fep_shadow_pane_g

0xbfc8,	// (0x0004cbaf) cell_hwr_side_pane_g1

0xbfc8,	// (0x0004cbaf) cell_hwr_side_pane_g2

0xc49d,	// (0x0004d084) cell_vkb_keypad_pane_t1

0xc4ab,	// (0x0004d092) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4ab,	// (0x0004d092) cell_vkb_keypad_bottom_left_pane

0xc4c8,	// (0x0004d0af) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4c8,	// (0x0004d0af) cell_vkb_keypad_bottom_right_pane

0xbfc8,	// (0x0004cbaf) cell_vkb_keypad_bottom_left_pane_g1

0xbfc8,	// (0x0004cbaf) cell_vkb_keypad_bottom_right_pane_g1

0xc501,	// (0x0004d0e8) cell_vkb_keypad_number_pane_ParamLimits

0xc501,	// (0x0004d0e8) cell_vkb_keypad_number_pane

0xc520,	// (0x0004d107) cell_vkb_keypad_number_pane_g1

0xc52a,	// (0x0004d111) cell_vkb_keypad_number_pane_g2

0xc533,	// (0x0004d11a) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb24,	// (0x0005070b) cell_vkb_keypad_number_pane_g

0xc49d,	// (0x0004d084) cell_vkb_keypad_number_pane_t1

0xc55d,	// (0x0004d144) fep_vkb_candidate_pane_g1

0x0001,

0xfb1f,	// (0x00050706) cell_hwr_side_pane_g

0xc576,	// (0x0004d15d) cell_hwr_side_pane_t1

0x7cca,	// (0x000488b1) cell_hwr_side_pane_t1_copy1

0xc243,	// (0x0004ce2a) cell_hwr_candidate_pane_g1

0x7cd8,	// (0x000488bf) cell_hwr_candidate_pane_t1

0xbfc8,	// (0x0004cbaf) cell_vkb_candidate_pane_g2

0xc5fc,	// (0x0004d1e3) cell_vkb_candidate_pane_t1

0x7a82,	// (0x00048669) bg_popup_fep_shadow_pane_ParamLimits

0x7a82,	// (0x00048669) bg_popup_fep_shadow_pane

0x2282,	// (0x00042e69) bg_fep_hwr_top_pane_g4

0xc04d,	// (0x0004cc34) bg_hwr_side_pane_g1_ParamLimits

0xc04d,	// (0x0004cc34) bg_hwr_side_pane_g1

0x7b9e,	// (0x00048785) cell_hwr_side_pane_ParamLimits

0x7b9e,	// (0x00048785) cell_hwr_side_pane

0x7bdb,	// (0x000487c2) fep_hwr_write_pane_g1_ParamLimits

0x7bdb,	// (0x000487c2) fep_hwr_write_pane_g1

0x7be8,	// (0x000487cf) fep_hwr_write_pane_g2_ParamLimits

0x7be8,	// (0x000487cf) fep_hwr_write_pane_g2

0x7bf5,	// (0x000487dc) fep_hwr_write_pane_g3_ParamLimits

0x7bf5,	// (0x000487dc) fep_hwr_write_pane_g3

0x7c03,	// (0x000487ea) fep_hwr_write_pane_g4_ParamLimits

0x7c03,	// (0x000487ea) fep_hwr_write_pane_g4

0x0005,

0xfaf1,	// (0x000506d8) fep_hwr_write_pane_g_ParamLimits

0xfaf1,	// (0x000506d8) fep_hwr_write_pane_g

0x2282,	// (0x00042e69) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2282,	// (0x00042e69) bg_fep_hwr_candidate_pane_g2

0x7c18,	// (0x000487ff) cell_hwr_candidate_pane_ParamLimits

0x7c18,	// (0x000487ff) cell_hwr_candidate_pane

0x7c6a,	// (0x00048851) fep_hwr_candidate_pane_g1_ParamLimits

0xc0ad,	// (0x0004cc94) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc0ad,	// (0x0004cc94) bg_popup_fep_shadow_pane_cp2

0xc243,	// (0x0004ce2a) fep_vkb_top_pane_g4_ParamLimits

0xc243,	// (0x0004ce2a) fep_vkb_top_pane_g4

0xc289,	// (0x0004ce70) fep_vkb_side_pane_g2_ParamLimits

0xc289,	// (0x0004ce70) fep_vkb_side_pane_g2

0x5352,	// (0x00045f39) list_setting_pane_t4_ParamLimits

0x5352,	// (0x00045f39) list_setting_pane_t4

0x53ee,	// (0x00045fd5) list_setting_number_pane_t5_ParamLimits

0x53ee,	// (0x00045fd5) list_setting_number_pane_t5

0x8ba8,	// (0x0004978f) list_double_heading_pane_cp2_ParamLimits

0x8ba8,	// (0x0004978f) list_double_heading_pane_cp2

0xc60a,	// (0x0004d1f1) list_double_heading_pane_g1_cp2_ParamLimits

0xc60a,	// (0x0004d1f1) list_double_heading_pane_g1_cp2

0xc616,	// (0x0004d1fd) list_double_heading_pane_g2_cp2_ParamLimits

0xc616,	// (0x0004d1fd) list_double_heading_pane_g2_cp2

0xc62a,	// (0x0004d211) list_double_heading_pane_t1_cp2_ParamLimits

0xc62a,	// (0x0004d211) list_double_heading_pane_t1_cp2

0xc640,	// (0x0004d227) list_double_heading_pane_t2_cp2_ParamLimits

0xc640,	// (0x0004d227) list_double_heading_pane_t2_cp2

0x0992,	// (0x00041579) aid_value_unit2

0x61b8,	// (0x00046d9f) popup_preview_fixed_window

0x0b3d,	// (0x00041724) bg_popup_preview_window_pane_cp02

0xc652,	// (0x0004d239) list_preview_fixed_pane

0xc698,	// (0x0004d27f) list_empty_pane_fp_ParamLimits

0xc698,	// (0x0004d27f) list_empty_pane_fp

0xc698,	// (0x0004d27f) list_single_cale_day_pane_fp_ParamLimits

0xc698,	// (0x0004d27f) list_single_cale_day_pane_fp

0xc698,	// (0x0004d27f) list_single_graphic_heading_pane_fp_ParamLimits

0xc698,	// (0x0004d27f) list_single_graphic_heading_pane_fp

0xc698,	// (0x0004d27f) list_single_graphic_pane_fp_ParamLimits

0xc698,	// (0x0004d27f) list_single_graphic_pane_fp

0xc698,	// (0x0004d27f) list_single_heading_pane_fp_ParamLimits

0xc698,	// (0x0004d27f) list_single_heading_pane_fp

0xc698,	// (0x0004d27f) list_single_pane_fp_ParamLimits

0xc698,	// (0x0004d27f) list_single_pane_fp

0xc6b1,	// (0x0004d298) list_single_pane_fp_g1_ParamLimits

0xc6b1,	// (0x0004d298) list_single_pane_fp_g1

0xc60a,	// (0x0004d1f1) list_single_pane_fp_g2_ParamLimits

0xc60a,	// (0x0004d1f1) list_single_pane_fp_g2

0xc616,	// (0x0004d1fd) list_single_pane_fp_g3_ParamLimits

0xc616,	// (0x0004d1fd) list_single_pane_fp_g3

0xc6bd,	// (0x0004d2a4) list_single_pane_fp_g4_ParamLimits

0xc6bd,	// (0x0004d2a4) list_single_pane_fp_g4

0x0003,

0xfb53,	// (0x0005073a) list_single_pane_fp_g_ParamLimits

0xfb53,	// (0x0005073a) list_single_pane_fp_g

0x5c30,	// (0x00046817) list_single_pane_fp_t1_ParamLimits

0x5c30,	// (0x00046817) list_single_pane_fp_t1

0x5c47,	// (0x0004682e) list_single_graphic_pane_fp_g1_ParamLimits

0x5c47,	// (0x0004682e) list_single_graphic_pane_fp_g1

0xc6b1,	// (0x0004d298) list_single_graphic_pane_fp_g2_ParamLimits

0xc6b1,	// (0x0004d298) list_single_graphic_pane_fp_g2

0xc60a,	// (0x0004d1f1) list_single_graphic_pane_fp_g3_ParamLimits

0xc60a,	// (0x0004d1f1) list_single_graphic_pane_fp_g3

0xc616,	// (0x0004d1fd) list_single_graphic_pane_fp_g4_ParamLimits

0xc616,	// (0x0004d1fd) list_single_graphic_pane_fp_g4

0xc6bd,	// (0x0004d2a4) list_single_graphic_pane_fp_g5_ParamLimits

0xc6bd,	// (0x0004d2a4) list_single_graphic_pane_fp_g5

0x0004,

0xfb5c,	// (0x00050743) list_single_graphic_pane_fp_g_ParamLimits

0xfb5c,	// (0x00050743) list_single_graphic_pane_fp_g

0x5c53,	// (0x0004683a) list_single_graphic_pane_fp_t1_ParamLimits

0x5c53,	// (0x0004683a) list_single_graphic_pane_fp_t1

0x5c47,	// (0x0004682e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5c47,	// (0x0004682e) list_single_graphic_heading_pane_fp_g1

0xc6b1,	// (0x0004d298) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6b1,	// (0x0004d298) list_single_graphic_heading_pane_fp_g2

0xc60a,	// (0x0004d1f1) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc60a,	// (0x0004d1f1) list_single_graphic_heading_pane_fp_g3

0xc616,	// (0x0004d1fd) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc616,	// (0x0004d1fd) list_single_graphic_heading_pane_fp_g4

0xc6bd,	// (0x0004d2a4) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6bd,	// (0x0004d2a4) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x00050743) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x00050743) list_single_graphic_heading_pane_fp_g

0x5c69,	// (0x00046850) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5c69,	// (0x00046850) list_single_graphic_heading_pane_fp_t1

0x5c7f,	// (0x00046866) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5c7f,	// (0x00046866) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb67,	// (0x0005074e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb67,	// (0x0005074e) list_single_graphic_heading_pane_fp_t

0x5c91,	// (0x00046878) list_single_cale_day_pane_fp_g1_ParamLimits

0x5c91,	// (0x00046878) list_single_cale_day_pane_fp_g1

0xc6c9,	// (0x0004d2b0) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6c9,	// (0x0004d2b0) list_single_cale_day_pane_fp_g2

0x7cf6,	// (0x000488dd) list_single_cale_day_pane_fp_g3_ParamLimits

0x7cf6,	// (0x000488dd) list_single_cale_day_pane_fp_g3

0x7d1e,	// (0x00048905) list_single_cale_day_pane_fp_g4_ParamLimits

0x7d1e,	// (0x00048905) list_single_cale_day_pane_fp_g4

0x7d42,	// (0x00048929) list_single_cale_day_pane_fp_g5_ParamLimits

0x7d42,	// (0x00048929) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6c,	// (0x00050753) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6c,	// (0x00050753) list_single_cale_day_pane_fp_g

0x5cc9,	// (0x000468b0) list_single_cale_day_pane_fp_t1_ParamLimits

0x5cc9,	// (0x000468b0) list_single_cale_day_pane_fp_t1

0x5cef,	// (0x000468d6) list_single_cale_day_pane_fp_t2_ParamLimits

0x5cef,	// (0x000468d6) list_single_cale_day_pane_fp_t2

0x5d08,	// (0x000468ef) list_single_cale_day_pane_fp_t3_ParamLimits

0x5d08,	// (0x000468ef) list_single_cale_day_pane_fp_t3

0x0002,

0xfb77,	// (0x0005075e) list_single_cale_day_pane_fp_t_ParamLimits

0xfb77,	// (0x0005075e) list_single_cale_day_pane_fp_t

0xc6b1,	// (0x0004d298) list_empty_pane_fp_g1_ParamLimits

0xc6b1,	// (0x0004d298) list_empty_pane_fp_g1

0x5d21,	// (0x00046908) list_empty_pane_fp_t1

0x5d2f,	// (0x00046916) list_empty_pane_fp_t2

0x0001,

0xfb7e,	// (0x00050765) list_empty_pane_fp_t

0xc6b1,	// (0x0004d298) list_single_heading_pane_fp_g1_ParamLimits

0xc6b1,	// (0x0004d298) list_single_heading_pane_fp_g1

0xc60a,	// (0x0004d1f1) list_single_heading_pane_fp_g2_ParamLimits

0xc60a,	// (0x0004d1f1) list_single_heading_pane_fp_g2

0xc616,	// (0x0004d1fd) list_single_heading_pane_fp_g3_ParamLimits

0xc616,	// (0x0004d1fd) list_single_heading_pane_fp_g3

0x0002,

0xfb83,	// (0x0005076a) list_single_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0005076a) list_single_heading_pane_fp_g

0x5d3d,	// (0x00046924) list_single_heading_pane_fp_t1_ParamLimits

0x5d3d,	// (0x00046924) list_single_heading_pane_fp_t1

0x5d4f,	// (0x00046936) list_single_heading_pane_fp_t2_ParamLimits

0x5d4f,	// (0x00046936) list_single_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x00050771) list_single_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x00050771) list_single_heading_pane_fp_t

0x3f98,	// (0x00044b7f) aid_size_cell_fast

0x0b20,	// (0x00041707) soft_indicator_pane_cp1_t1

0x3fd5,	// (0x00044bbc) cell_app_pane_cp2_ParamLimits

0x3fd5,	// (0x00044bbc) cell_app_pane_cp2

0x7aa4,	// (0x0004868b) fep_hwr_candidate_drop_down_list_pane

0x2290,	// (0x00042e77) fep_hwr_candidate_pane_g3_ParamLimits

0x2290,	// (0x00042e77) fep_hwr_candidate_pane_g3

0x229d,	// (0x00042e84) fep_hwr_candidate_pane_g4_ParamLimits

0x229d,	// (0x00042e84) fep_hwr_candidate_pane_g4

0x0002,

0xfafe,	// (0x000506e5) fep_hwr_candidate_pane_g_ParamLimits

0xfafe,	// (0x000506e5) fep_hwr_candidate_pane_g

0xc13d,	// (0x0004cd24) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc13d,	// (0x0004cd24) fep_vkb_candidate_drop_down_list_pane

0xc565,	// (0x0004d14c) fep_vkb_candidate_pane_g3

0xc56d,	// (0x0004d154) fep_vkb_candidate_pane_g4

0x0002,

0xfb2b,	// (0x00050712) fep_vkb_candidate_pane_g

0xc243,	// (0x0004ce2a) cell_hwr_candidate_pane_g1_ParamLimits

0xc584,	// (0x0004d16b) cell_hwr_candidate_pane_g3_ParamLimits

0xc584,	// (0x0004d16b) cell_hwr_candidate_pane_g3

0xc5a5,	// (0x0004d18c) cell_hwr_candidate_pane_g4_ParamLimits

0xc5a5,	// (0x0004d18c) cell_hwr_candidate_pane_g4

0x0002,

0xfb45,	// (0x0005072c) cell_hwr_candidate_pane_g_ParamLimits

0xfb45,	// (0x0005072c) cell_hwr_candidate_pane_g

0xc5c6,	// (0x0004d1ad) cell_vkb_candidate_pane_g3_ParamLimits

0xc5c6,	// (0x0004d1ad) cell_vkb_candidate_pane_g3

0xc5e1,	// (0x0004d1c8) cell_vkb_candidate_pane_g4_ParamLimits

0xc5e1,	// (0x0004d1c8) cell_vkb_candidate_pane_g4

0xc6d5,	// (0x0004d2bc) cell_app_pane_cp2_g1_ParamLimits

0xc6d5,	// (0x0004d2bc) cell_app_pane_cp2_g1

0xc6f3,	// (0x0004d2da) cell_app_pane_cp2_g2_ParamLimits

0xc6f3,	// (0x0004d2da) cell_app_pane_cp2_g2

0x0001,

0xfb8f,	// (0x00050776) cell_app_pane_cp2_g_ParamLimits

0xfb8f,	// (0x00050776) cell_app_pane_cp2_g

0xc6ff,	// (0x0004d2e6) cell_app_pane_cp2_t1_ParamLimits

0xc6ff,	// (0x0004d2e6) cell_app_pane_cp2_t1

0x104c,	// (0x00041c33) grid_highlight_pane_cp1_ParamLimits

0x104c,	// (0x00041c33) grid_highlight_pane_cp1

0x7d66,	// (0x0004894d) cell_hwr_candidate_pane_cp1_ParamLimits

0x7d66,	// (0x0004894d) cell_hwr_candidate_pane_cp1

0xc243,	// (0x0004ce2a) fep_hwr_candidate_drop_down_list_pane_g1

0xc711,	// (0x0004d2f8) fep_hwr_candidate_drop_down_list_pane_g2

0xc71e,	// (0x0004d305) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb94,	// (0x0005077b) fep_hwr_candidate_drop_down_list_pane_g

0x7d8a,	// (0x00048971) fep_hwr_candidate_drop_down_list_scroll_pane

0x7d93,	// (0x0004897a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7d93,	// (0x0004897a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7da0,	// (0x00048987) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7da0,	// (0x00048987) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7dad,	// (0x00048994) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7dad,	// (0x00048994) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5c6,	// (0x0004d1ad) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5c6,	// (0x0004d1ad) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc5e1,	// (0x0004d1c8) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5e1,	// (0x0004d1c8) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7dba,	// (0x000489a1) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7dba,	// (0x000489a1) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7dd5,	// (0x000489bc) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7dd5,	// (0x000489bc) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7df0,	// (0x000489d7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7df0,	// (0x000489d7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9b,	// (0x00050782) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9b,	// (0x00050782) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc72b,	// (0x0004d312) cell_vkb_candidate_pane_cp1_ParamLimits

0xc72b,	// (0x0004d312) cell_vkb_candidate_pane_cp1

0xc243,	// (0x0004ce2a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc243,	// (0x0004ce2a) fep_vkb_candidate_drop_down_list_pane_g1

0xc711,	// (0x0004d2f8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc711,	// (0x0004d2f8) fep_vkb_candidate_drop_down_list_pane_g2

0xc71e,	// (0x0004d305) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc71e,	// (0x0004d305) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb94,	// (0x0005077b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb94,	// (0x0005077b) fep_vkb_candidate_drop_down_list_pane_g

0xc751,	// (0x0004d338) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc751,	// (0x0004d338) fep_vkb_candidate_drop_down_list_scroll_pane

0xc75e,	// (0x0004d345) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc75e,	// (0x0004d345) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc76b,	// (0x0004d352) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc76b,	// (0x0004d352) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc777,	// (0x0004d35e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc777,	// (0x0004d35e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc584,	// (0x0004d16b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc584,	// (0x0004d16b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5a5,	// (0x0004d18c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5a5,	// (0x0004d18c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc783,	// (0x0004d36a) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc783,	// (0x0004d36a) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7a4,	// (0x0004d38b) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7a4,	// (0x0004d38b) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7c5,	// (0x0004d3ac) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7c5,	// (0x0004d3ac) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbac,	// (0x00050793) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbac,	// (0x00050793) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x62d8,	// (0x00046ebf) title_pane_g1_ParamLimits

0x62e5,	// (0x00046ecc) title_pane_g2_ParamLimits

0xf529,	// (0x00050110) title_pane_g_ParamLimits

0x8b51,	// (0x00049738) aid_call2_pane

0x8b59,	// (0x00049740) aid_call_pane

0x8b61,	// (0x00049748) popup_clock_analogue_window_g1

0x8b61,	// (0x00049748) popup_clock_analogue_window_g2

0x6a4e,	// (0x00047635) popup_clock_analogue_window_g3

0x6a57,	// (0x0004763e) popup_clock_analogue_window_g4

0x09a4,	// (0x0004158b) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x000502bf) popup_clock_analogue_window_g

0x6a5f,	// (0x00047646) popup_clock_analogue_window_t1

0x6a6d,	// (0x00047654) clock_digital_number_pane_ParamLimits

0x6a6d,	// (0x00047654) clock_digital_number_pane

0x6a79,	// (0x00047660) clock_digital_number_pane_cp02_ParamLimits

0x6a79,	// (0x00047660) clock_digital_number_pane_cp02

0x6a85,	// (0x0004766c) clock_digital_number_pane_cp03_ParamLimits

0x6a85,	// (0x0004766c) clock_digital_number_pane_cp03

0x6a91,	// (0x00047678) clock_digital_number_pane_cp04_ParamLimits

0x6a91,	// (0x00047678) clock_digital_number_pane_cp04

0x6a9d,	// (0x00047684) clock_digital_separator_pane_ParamLimits

0x6a9d,	// (0x00047684) clock_digital_separator_pane

0x6aa9,	// (0x00047690) popup_clock_digital_window_t1_ParamLimits

0x6aa9,	// (0x00047690) popup_clock_digital_window_t1

0x09a4,	// (0x0004158b) clock_digital_number_pane_g1

0x09a4,	// (0x0004158b) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x000502ca) clock_digital_number_pane_g

0x09a4,	// (0x0004158b) clock_digital_separator_pane_g1

0x09a4,	// (0x0004158b) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x000502ca) clock_digital_separator_pane_g

0x94d0,	// (0x0004a0b7) aid_fill_nsta_ParamLimits

0x961c,	// (0x0004a203) indicator_nsta_pane_ParamLimits

0x97ad,	// (0x0004a394) popup_clock_analogue_window

0x97ad,	// (0x0004a394) popup_clock_digital_window

0xb9f4,	// (0x0004c5db) grid_indicator_nsta_pane_ParamLimits

0xba1d,	// (0x0004c604) clock_nsta_pane_t2

0x0001,

0xfa7e,	// (0x00050665) clock_nsta_pane_t

0x69de,	// (0x000475c5) aid_size_max_handle

0x69e8,	// (0x000475cf) aid_size_min_handle

0x916d,	// (0x00049d54) editor_scroll_pane

0xc7e0,	// (0x0004d3c7) ex_editor_pane

0x3f5e,	// (0x00044b45) scroll_pane_cp13

0x0feb,	// (0x00041bd2) scroll_pane_cp14

0x8b90,	// (0x00049777) scroll_pane_cp36

0x8bbe,	// (0x000497a5) list_single_graphic_hl_pane_cp2_ParamLimits

0x8bbe,	// (0x000497a5) list_single_graphic_hl_pane_cp2

0x7886,	// (0x0004846d) list_single_graphic_hl_pane_ParamLimits

0x7886,	// (0x0004846d) list_single_graphic_hl_pane

0x5d65,	// (0x0004694c) aid_size_min_hl_cp1

0xc7e8,	// (0x0004d3cf) list_highlight_pane_cp34_ParamLimits

0xc7e8,	// (0x0004d3cf) list_highlight_pane_cp34

0xc7f9,	// (0x0004d3e0) list_single_graphic_hl_pane_g1_ParamLimits

0xc7f9,	// (0x0004d3e0) list_single_graphic_hl_pane_g1

0x5d6e,	// (0x00046955) list_single_graphic_hl_pane_g2_ParamLimits

0x5d6e,	// (0x00046955) list_single_graphic_hl_pane_g2

0x5d6e,	// (0x00046955) list_single_graphic_hl_pane_g3_ParamLimits

0x5d6e,	// (0x00046955) list_single_graphic_hl_pane_g3

0x7521,	// (0x00048108) list_single_graphic_hl_pane_g4_ParamLimits

0x7521,	// (0x00048108) list_single_graphic_hl_pane_g4

0x5d7a,	// (0x00046961) list_single_graphic_hl_pane_g5_ParamLimits

0x5d7a,	// (0x00046961) list_single_graphic_hl_pane_g5

0x0004,

0xfbbd,	// (0x000507a4) list_single_graphic_hl_pane_g_ParamLimits

0xfbbd,	// (0x000507a4) list_single_graphic_hl_pane_g

0x5d8e,	// (0x00046975) list_single_graphic_hl_pane_t1_ParamLimits

0x5d8e,	// (0x00046975) list_single_graphic_hl_pane_t1

0xc806,	// (0x0004d3ed) aid_size_min_hl_cp2

0xc80f,	// (0x0004d3f6) list_highlight_pane_cp34_cp2_ParamLimits

0xc80f,	// (0x0004d3f6) list_highlight_pane_cp34_cp2

0xc7f9,	// (0x0004d3e0) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc7f9,	// (0x0004d3e0) list_single_graphic_hl_pane_g1_cp2

0xc81c,	// (0x0004d403) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc81c,	// (0x0004d403) list_single_graphic_hl_pane_g2_cp2

0xc828,	// (0x0004d40f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc828,	// (0x0004d40f) list_single_graphic_hl_pane_g3_cp2

0xc836,	// (0x0004d41d) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc836,	// (0x0004d41d) list_single_graphic_hl_pane_g4_cp2

0xc842,	// (0x0004d429) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc842,	// (0x0004d429) list_single_graphic_hl_pane_g5_cp2

0x6d92,	// (0x00047979) control_pane_g4_ParamLimits

0x6d92,	// (0x00047979) control_pane_g4

0x9494,	// (0x0004a07b) bg_popup_sub_pane_cp10_ParamLimits

0xbfd2,	// (0x0004cbb9) list_choice_list_pane_ParamLimits

0xbfe1,	// (0x0004cbc8) scroll_pane_cp23

0x0b3d,	// (0x00041724) bg_popup_preview_window_pane_cp02_ParamLimits

0xc652,	// (0x0004d239) list_preview_fixed_pane_ParamLimits

0xc668,	// (0x0004d24f) list_preview_fixed_pane_cp_ParamLimits

0xc668,	// (0x0004d24f) list_preview_fixed_pane_cp

0xc674,	// (0x0004d25b) popup_preview_fixed_window_g1_ParamLimits

0xc674,	// (0x0004d25b) popup_preview_fixed_window_g1

0xc680,	// (0x0004d267) popup_preview_fixed_window_g2_ParamLimits

0xc680,	// (0x0004d267) popup_preview_fixed_window_g2

0x0002,

0xfb4c,	// (0x00050733) popup_preview_fixed_window_g_ParamLimits

0xfb4c,	// (0x00050733) popup_preview_fixed_window_g

0x68b4,	// (0x0004749b) aid_navi_side_left_pane_ParamLimits

0x68c9,	// (0x000474b0) aid_navi_side_right_pane_ParamLimits

0x68e1,	// (0x000474c8) navi_icon_pane_stacon_ParamLimits

0x68f5,	// (0x000474dc) navi_navi_pane_stacon_ParamLimits

0x68e1,	// (0x000474c8) navi_text_pane_stacon_ParamLimits

0x099a,	// (0x00041581) main_text_info_pane

0xc86c,	// (0x0004d453) listscroll_text_info_pane

0xc874,	// (0x0004d45b) list_text_info_pane_ParamLimits

0xc874,	// (0x0004d45b) list_text_info_pane

0xc883,	// (0x0004d46a) scroll_pane_cp24_ParamLimits

0xc883,	// (0x0004d46a) scroll_pane_cp24

0xc8a1,	// (0x0004d488) list_text_info_pane_t1_ParamLimits

0xc8a1,	// (0x0004d488) list_text_info_pane_t1

0x6f0a,	// (0x00047af1) popup_fast_swap2_window_ParamLimits

0x6f0a,	// (0x00047af1) popup_fast_swap2_window

0xc8c6,	// (0x0004d4ad) aid_size_cell_fast2

0x099a,	// (0x00041581) bg_popup_window_pane_cp17

0x9e00,	// (0x0004a9e7) heading_pane_cp2

0x9e08,	// (0x0004a9ef) listscroll_fast2_pane

0xc8d0,	// (0x0004d4b7) grid_fast2_pane

0xc8da,	// (0x0004d4c1) listscroll_fast2_pane_g1

0xc8e4,	// (0x0004d4cb) listscroll_fast2_pane_g2

0x0001,

0xfbc8,	// (0x000507af) listscroll_fast2_pane_g

0x3f5e,	// (0x00044b45) scroll_pane_cp26

0xc8ee,	// (0x0004d4d5) cell_fast2_pane_ParamLimits

0xc8ee,	// (0x0004d4d5) cell_fast2_pane

0xc905,	// (0x0004d4ec) cell_fast2_pane_g1

0xc90e,	// (0x0004d4f5) cell_fast2_pane_g2

0xc917,	// (0x0004d4fe) cell_fast2_pane_g3

0x0002,

0xfbcd,	// (0x000507b4) cell_fast2_pane_g

0x0db2,	// (0x00041999) grid_highlight_pane_cp9

0x0dc7,	// (0x000419ae) main_eswt_pane_ParamLimits

0x0dc7,	// (0x000419ae) main_eswt_pane

0xc898,	// (0x0004d47f) list_single_text_info_pane

0xc91f,	// (0x0004d506) eswt_ctrl_button_pane

0xc91f,	// (0x0004d506) eswt_ctrl_canvas_pane

0xc927,	// (0x0004d50e) eswt_ctrl_combo_pane

0xc91f,	// (0x0004d506) eswt_ctrl_default_pane

0xc91f,	// (0x0004d506) eswt_ctrl_label_pane

0xc92f,	// (0x0004d516) eswt_ctrl_wait_pane

0xc937,	// (0x0004d51e) eswt_shell_pane

0x099a,	// (0x00041581) listscroll_eswt_app_pane

0xc957,	// (0x0004d53e) popup_eswt_tasktip_window_ParamLimits

0xc957,	// (0x0004d53e) popup_eswt_tasktip_window

0x9a3e,	// (0x0004a625) bg_popup_window_pane_cp18

0xc968,	// (0x0004d54f) eswt_control_pane_g1_ParamLimits

0xc968,	// (0x0004d54f) eswt_control_pane_g1

0xc975,	// (0x0004d55c) eswt_control_pane_g2_ParamLimits

0xc975,	// (0x0004d55c) eswt_control_pane_g2

0xc982,	// (0x0004d569) eswt_control_pane_g3_ParamLimits

0xc982,	// (0x0004d569) eswt_control_pane_g3

0xc98f,	// (0x0004d576) eswt_control_pane_g4_ParamLimits

0xc98f,	// (0x0004d576) eswt_control_pane_g4

0x0003,

0xfbd4,	// (0x000507bb) eswt_control_pane_g_ParamLimits

0xfbd4,	// (0x000507bb) eswt_control_pane_g

0x104c,	// (0x00041c33) bg_button_pane_ParamLimits

0x104c,	// (0x00041c33) bg_button_pane

0x0dc7,	// (0x000419ae) common_borders_pane_copy2_ParamLimits

0x0dc7,	// (0x000419ae) common_borders_pane_copy2

0xc99c,	// (0x0004d583) control_button_pane_g1_ParamLimits

0xc99c,	// (0x0004d583) control_button_pane_g1

0xc9a8,	// (0x0004d58f) control_button_pane_g2_ParamLimits

0xc9a8,	// (0x0004d58f) control_button_pane_g2

0xc9b4,	// (0x0004d59b) control_button_pane_g3_ParamLimits

0xc9b4,	// (0x0004d59b) control_button_pane_g3

0x0002,

0xfbdd,	// (0x000507c4) control_button_pane_g_ParamLimits

0xfbdd,	// (0x000507c4) control_button_pane_g

0xc9c8,	// (0x0004d5af) control_button_pane_t1

0xc9d6,	// (0x0004d5bd) control_button_pane_t2

0x0001,

0xfbe4,	// (0x000507cb) control_button_pane_t

0x99ca,	// (0x0004a5b1) bg_button_pane_g1

0x99d2,	// (0x0004a5b9) bg_button_pane_g2

0x99da,	// (0x0004a5c1) bg_button_pane_g3

0x99e2,	// (0x0004a5c9) bg_button_pane_g4

0x99ea,	// (0x0004a5d1) bg_button_pane_g5

0x99f2,	// (0x0004a5d9) bg_button_pane_g6

0x99fa,	// (0x0004a5e1) bg_button_pane_g7

0x9a02,	// (0x0004a5e9) bg_button_pane_g8

0x9a0a,	// (0x0004a5f1) bg_button_pane_g9

0x0008,

0xf846,	// (0x0005042d) bg_button_pane_g

0xbf8d,	// (0x0004cb74) common_borders_pane_ParamLimits

0xbf8d,	// (0x0004cb74) common_borders_pane

0xc968,	// (0x0004d54f) eswt_control_pane_g1_copy1_ParamLimits

0xc968,	// (0x0004d54f) eswt_control_pane_g1_copy1

0xc975,	// (0x0004d55c) eswt_control_pane_g2_copy1_ParamLimits

0xc975,	// (0x0004d55c) eswt_control_pane_g2_copy1

0xc982,	// (0x0004d569) eswt_control_pane_g3_copy1_ParamLimits

0xc982,	// (0x0004d569) eswt_control_pane_g3_copy1

0xc98f,	// (0x0004d576) eswt_control_pane_g4_copy1_ParamLimits

0xc98f,	// (0x0004d576) eswt_control_pane_g4_copy1

0xbfc8,	// (0x0004cbaf) bg_eswt_ctrl_canvas_pane_g1

0xbf8d,	// (0x0004cb74) common_borders_pane_cp2_ParamLimits

0xbf8d,	// (0x0004cb74) common_borders_pane_cp2

0xbf8d,	// (0x0004cb74) common_borders_pane_cp3_ParamLimits

0xbf8d,	// (0x0004cb74) common_borders_pane_cp3

0xc9e4,	// (0x0004d5cb) separator_horizontal_pane

0xc9ec,	// (0x0004d5d3) separator_vertical_pane

0xc968,	// (0x0004d54f) eswt_control_pane_g1_copy2_ParamLimits

0xc968,	// (0x0004d54f) eswt_control_pane_g1_copy2

0xc975,	// (0x0004d55c) eswt_control_pane_g2_copy2_ParamLimits

0xc975,	// (0x0004d55c) eswt_control_pane_g2_copy2

0xc982,	// (0x0004d569) eswt_control_pane_g3_copy2_ParamLimits

0xc982,	// (0x0004d569) eswt_control_pane_g3_copy2

0xc98f,	// (0x0004d576) eswt_control_pane_g4_copy2_ParamLimits

0xc98f,	// (0x0004d576) eswt_control_pane_g4_copy2

0x099a,	// (0x00041581) common_borders_pane_cp4

0xc9f5,	// (0x0004d5dc) separator_horizontal_pane_g1

0xc9fe,	// (0x0004d5e5) separator_horizontal_pane_g2

0xca07,	// (0x0004d5ee) separator_horizontal_pane_g3

0x0002,

0xfbe9,	// (0x000507d0) separator_horizontal_pane_g

0xc968,	// (0x0004d54f) eswt_control_pane_g1_copy3_ParamLimits

0xc968,	// (0x0004d54f) eswt_control_pane_g1_copy3

0xc975,	// (0x0004d55c) eswt_control_pane_g2_copy3_ParamLimits

0xc975,	// (0x0004d55c) eswt_control_pane_g2_copy3

0xc982,	// (0x0004d569) eswt_control_pane_g3_copy3_ParamLimits

0xc982,	// (0x0004d569) eswt_control_pane_g3_copy3

0xc98f,	// (0x0004d576) eswt_control_pane_g4_copy3_ParamLimits

0xc98f,	// (0x0004d576) eswt_control_pane_g4_copy3

0x099a,	// (0x00041581) common_borders_pane_cp5

0xca10,	// (0x0004d5f7) separator_vertical_pane_g1

0xca19,	// (0x0004d600) separator_vertical_pane_g2

0xca22,	// (0x0004d609) separator_vertical_pane_g3

0x0002,

0xfbf0,	// (0x000507d7) separator_vertical_pane_g

0xc968,	// (0x0004d54f) eswt_control_pane_g1_copy4_ParamLimits

0xc968,	// (0x0004d54f) eswt_control_pane_g1_copy4

0xc975,	// (0x0004d55c) eswt_control_pane_g2_copy4_ParamLimits

0xc975,	// (0x0004d55c) eswt_control_pane_g2_copy4

0xc982,	// (0x0004d569) eswt_control_pane_g3_copy4_ParamLimits

0xc982,	// (0x0004d569) eswt_control_pane_g3_copy4

0xc98f,	// (0x0004d576) eswt_control_pane_g4_copy4_ParamLimits

0xc98f,	// (0x0004d576) eswt_control_pane_g4_copy4

0xca2b,	// (0x0004d612) eswt_ctrl_combo_button_pane

0xca33,	// (0x0004d61a) eswt_ctrl_input_pane

0xca3b,	// (0x0004d622) popup_choice_list_window_cp70

0xca43,	// (0x0004d62a) eswt_ctrl_input_pane_t1

0x099a,	// (0x00041581) input_focus_pane_cp70

0xbf8d,	// (0x0004cb74) bg_button_pane_cp70_ParamLimits

0xbf8d,	// (0x0004cb74) bg_button_pane_cp70

0xca51,	// (0x0004d638) eswt_ctrl_combo_button_pane_g1

0xca59,	// (0x0004d640) wait_bar_pane_cp70

0x9a3e,	// (0x0004a625) bg_popup_window_pane_cp70_ParamLimits

0x9a3e,	// (0x0004a625) bg_popup_window_pane_cp70

0xca61,	// (0x0004d648) popup_eswt_tasktip_window_t1

0xca77,	// (0x0004d65e) wait_bar_pane_cp71_ParamLimits

0xca77,	// (0x0004d65e) wait_bar_pane_cp71

0xca83,	// (0x0004d66a) grid_eswt_app_pane

0x434d,	// (0x00044f34) scroll_pane_cp70

0xca8c,	// (0x0004d673) cell_eswt_app_pane_ParamLimits

0xca8c,	// (0x0004d673) cell_eswt_app_pane

0xcabe,	// (0x0004d6a5) cell_eswt_app_pane_g1_ParamLimits

0xcabe,	// (0x0004d6a5) cell_eswt_app_pane_g1

0xcaed,	// (0x0004d6d4) cell_eswt_app_pane_g2_ParamLimits

0xcaed,	// (0x0004d6d4) cell_eswt_app_pane_g2

0x0001,

0xfbf7,	// (0x000507de) cell_eswt_app_pane_g_ParamLimits

0xfbf7,	// (0x000507de) cell_eswt_app_pane_g

0xcb16,	// (0x0004d6fd) cell_eswt_app_pane_t1_ParamLimits

0xcb16,	// (0x0004d6fd) cell_eswt_app_pane_t1

0xcb48,	// (0x0004d72f) grid_highlight_pane_cp70_ParamLimits

0xcb48,	// (0x0004d72f) grid_highlight_pane_cp70

0x903e,	// (0x00049c25) set_content_pane_g1

0x941b,	// (0x0004a002) status_small_volume_pane

0x7e0b,	// (0x000489f2) status_small_volume_pane_g1

0x7e13,	// (0x000489fa) volume_small2_pane

0x7e1c,	// (0x00048a03) volume_small2_pane_g1

0x7e25,	// (0x00048a0c) volume_small2_pane_g2

0x7e2e,	// (0x00048a15) volume_small2_pane_g3

0x7e37,	// (0x00048a1e) volume_small2_pane_g4

0x7e40,	// (0x00048a27) volume_small2_pane_g5

0x7e49,	// (0x00048a30) volume_small2_pane_g6

0x7e52,	// (0x00048a39) volume_small2_pane_g7

0x7e5b,	// (0x00048a42) volume_small2_pane_g8

0x7e64,	// (0x00048a4b) volume_small2_pane_g9

0x7e6d,	// (0x00048a54) volume_small2_pane_g10

0x0009,

0xfbfc,	// (0x000507e3) volume_small2_pane_g

0xc397,	// (0x0004cf7e) fep_vkb_top_text_pane_g1_ParamLimits

0xc3b2,	// (0x0004cf99) fep_vkb_top_text_pane_t1_ParamLimits

0xc68c,	// (0x0004d273) popup_preview_fixed_window_g3_ParamLimits

0xc68c,	// (0x0004d273) popup_preview_fixed_window_g3

0x741d,	// (0x00048004) popup_toolbar_trans_pane

0xad96,	// (0x0004b97d) aid_height_set_list_ParamLimits

0xada7,	// (0x0004b98e) aid_size_parent_ParamLimits

0x9494,	// (0x0004a07b) list_highlight_pane_cp2_ParamLimits

0x903e,	// (0x00049c25) set_content_pane_g1_ParamLimits

0x7903,	// (0x000484ea) list_single_image_pane_ParamLimits

0x7903,	// (0x000484ea) list_single_image_pane

0xcb54,	// (0x0004d73b) aid_size_cell_image_ParamLimits

0xcb54,	// (0x0004d73b) aid_size_cell_image

0xcb61,	// (0x0004d748) grid_single_image_pane_ParamLimits

0xcb61,	// (0x0004d748) grid_single_image_pane

0x105a,	// (0x00041c41) list_single_image_pane_g1_ParamLimits

0x105a,	// (0x00041c41) list_single_image_pane_g1

0x1066,	// (0x00041c4d) list_single_image_pane_g2_ParamLimits

0x1066,	// (0x00041c4d) list_single_image_pane_g2

0x0001,

0xfc11,	// (0x000507f8) list_single_image_pane_g_ParamLimits

0xfc11,	// (0x000507f8) list_single_image_pane_g

0xcb6f,	// (0x0004d756) list_single_image_pane_t1_ParamLimits

0xcb6f,	// (0x0004d756) list_single_image_pane_t1

0xcb85,	// (0x0004d76c) cell_image_list_pane_ParamLimits

0xcb85,	// (0x0004d76c) cell_image_list_pane

0xcb9d,	// (0x0004d784) cell_image_list_pane_g1

0xcba6,	// (0x0004d78d) cell_image_list_pane_g2

0x0001,

0xfc16,	// (0x000507fd) cell_image_list_pane_g

0xcbaf,	// (0x0004d796) aid_size_cell_tb_trans_pane

0x104c,	// (0x00041c33) bg_tb_trans_pane

0xcbc1,	// (0x0004d7a8) grid_tb_trans_pane

0x99ca,	// (0x0004a5b1) bg_tb_trans_pane_g1

0x99d2,	// (0x0004a5b9) bg_tb_trans_pane_g2

0x99da,	// (0x0004a5c1) bg_tb_trans_pane_g3

0x99e2,	// (0x0004a5c9) bg_tb_trans_pane_g4

0x99ea,	// (0x0004a5d1) bg_tb_trans_pane_g5

0x9a02,	// (0x0004a5e9) bg_tb_trans_pane_g6

0x9a0a,	// (0x0004a5f1) bg_tb_trans_pane_g7

0x99f2,	// (0x0004a5d9) bg_tb_trans_pane_g8

0x99fa,	// (0x0004a5e1) bg_tb_trans_pane_g9

0x0008,

0xfc1b,	// (0x00050802) bg_tb_trans_pane_g

0xcbd5,	// (0x0004d7bc) cell_toolbar_trans_pane_ParamLimits

0xcbd5,	// (0x0004d7bc) cell_toolbar_trans_pane

0xbfc8,	// (0x0004cbaf) cell_toolbar_trans_pane_g1

0xbc00,	// (0x0004c7e7) list_form2_midp_pane_t1

0xbc0e,	// (0x0004c7f5) list_form2_midp_pane_t2

0x0001,

0xfac4,	// (0x000506ab) list_form2_midp_pane_t

0xbc1c,	// (0x0004c803) scroll_pane_cp51_ParamLimits

0xbde3,	// (0x0004c9ca) form2_midp_wait_pane_g1

0xbdec,	// (0x0004c9d3) form2_midp_wait_pane_g2

0xbdf5,	// (0x0004c9dc) form2_midp_wait_pane_g3

0x0002,

0xfad9,	// (0x000506c0) form2_midp_wait_pane_g

0x0a0a,	// (0x000415f1) list_highlight_pane_cp21_ParamLimits

0xbe2e,	// (0x0004ca15) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe3d,	// (0x0004ca24) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x78bc,	// (0x000484a3) list_single_2graphic_im_pane_ParamLimits

0x78bc,	// (0x000484a3) list_single_2graphic_im_pane

0xcbfb,	// (0x0004d7e2) list_single_2graphic_im_pane_g1_ParamLimits

0xcbfb,	// (0x0004d7e2) list_single_2graphic_im_pane_g1

0xcc0c,	// (0x0004d7f3) list_single_2graphic_im_pane_g2_ParamLimits

0xcc0c,	// (0x0004d7f3) list_single_2graphic_im_pane_g2

0xcc18,	// (0x0004d7ff) list_single_2graphic_im_pane_g3_ParamLimits

0xcc18,	// (0x0004d7ff) list_single_2graphic_im_pane_g3

0x0003,

0xfc2e,	// (0x00050815) list_single_2graphic_im_pane_g_ParamLimits

0xfc2e,	// (0x00050815) list_single_2graphic_im_pane_g

0xcc38,	// (0x0004d81f) list_single_2graphic_im_pane_t1_ParamLimits

0xcc38,	// (0x0004d81f) list_single_2graphic_im_pane_t1

0xc698,	// (0x0004d27f) list_single_graphic_2heading_pane_fp_ParamLimits

0xc698,	// (0x0004d27f) list_single_graphic_2heading_pane_fp

0x5c47,	// (0x0004682e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5c47,	// (0x0004682e) list_single_graphic_2heading_pane_fp_g1

0xc6b1,	// (0x0004d298) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6b1,	// (0x0004d298) list_single_graphic_2heading_pane_fp_g2

0xc60a,	// (0x0004d1f1) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc60a,	// (0x0004d1f1) list_single_graphic_2heading_pane_fp_g3

0xc616,	// (0x0004d1fd) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc616,	// (0x0004d1fd) list_single_graphic_2heading_pane_fp_g4

0xc6bd,	// (0x0004d2a4) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6bd,	// (0x0004d2a4) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x00050743) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x00050743) list_single_graphic_2heading_pane_fp_g

0x5da4,	// (0x0004698b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5da4,	// (0x0004698b) list_single_graphic_2heading_pane_fp_t1

0x5c7f,	// (0x00046866) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5c7f,	// (0x00046866) list_single_graphic_2heading_pane_fp_t2

0x5dba,	// (0x000469a1) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5dba,	// (0x000469a1) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc37,	// (0x0005081e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc37,	// (0x0005081e) list_single_graphic_2heading_pane_fp_t

0xc059,	// (0x0004cc40) fep_hwr_write_pane_g5_ParamLimits

0xc059,	// (0x0004cc40) fep_hwr_write_pane_g5

0xc065,	// (0x0004cc4c) fep_hwr_write_pane_g6_ParamLimits

0xc065,	// (0x0004cc4c) fep_hwr_write_pane_g6

0xc937,	// (0x0004d51e) eswt_shell_pane_ParamLimits

0x9a3e,	// (0x0004a625) bg_popup_window_pane_cp18_ParamLimits

0xaced,	// (0x0004b8d4) heading_pane_cp70

0xca61,	// (0x0004d648) popup_eswt_tasktip_window_t1_ParamLimits

0x9527,	// (0x0004a10e) aid_touch_tab_arrow_left

0x9533,	// (0x0004a11a) aid_touch_tab_arrow_right

0x62fe,	// (0x00046ee5) title_pane_g3_ParamLimits

0x62fe,	// (0x00046ee5) title_pane_g3

0x100b,	// (0x00041bf2) set_value_pane_g1

0x741d,	// (0x00048004) popup_toolbar_trans_pane_ParamLimits

0xcbaf,	// (0x0004d796) aid_size_cell_tb_trans_pane_ParamLimits

0x104c,	// (0x00041c33) bg_tb_trans_pane_ParamLimits

0xcbc1,	// (0x0004d7a8) grid_tb_trans_pane_ParamLimits

0x0b3d,	// (0x00041724) cont_note_pane_ParamLimits

0x0b3d,	// (0x00041724) cont_note_pane

0x0dc7,	// (0x000419ae) cont_snote2_single_text_pane_ParamLimits

0x0dc7,	// (0x000419ae) cont_snote2_single_text_pane

0x0dc7,	// (0x000419ae) cont_snote2_single_graphic_pane_ParamLimits

0x0dc7,	// (0x000419ae) cont_snote2_single_graphic_pane

0xa030,	// (0x0004ac17) cont_note_wait_pane_ParamLimits

0xa030,	// (0x0004ac17) cont_note_wait_pane

0xa030,	// (0x0004ac17) cont_note_image_pane_ParamLimits

0xa030,	// (0x0004ac17) cont_note_image_pane

0xcc69,	// (0x0004d850) popup_note2_window_g1_ParamLimits

0xcc69,	// (0x0004d850) popup_note2_window_g1

0xcc9a,	// (0x0004d881) popup_note2_window_t1_ParamLimits

0xcc9a,	// (0x0004d881) popup_note2_window_t1

0xccdf,	// (0x0004d8c6) popup_note2_window_t2_ParamLimits

0xccdf,	// (0x0004d8c6) popup_note2_window_t2

0xcd24,	// (0x0004d90b) popup_note2_window_t3_ParamLimits

0xcd24,	// (0x0004d90b) popup_note2_window_t3

0xcd69,	// (0x0004d950) popup_note2_window_t4_ParamLimits

0xcd69,	// (0x0004d950) popup_note2_window_t4

0x0bc1,	// (0x000417a8) popup_note2_window_t5_ParamLimits

0x0bc1,	// (0x000417a8) popup_note2_window_t5

0x0004,

0xfc43,	// (0x0005082a) popup_note2_window_t_ParamLimits

0xfc43,	// (0x0005082a) popup_note2_window_t

0xcd98,	// (0x0004d97f) popup_note2_image_window_g1_ParamLimits

0xcd98,	// (0x0004d97f) popup_note2_image_window_g1

0xcda4,	// (0x0004d98b) popup_note2_image_window_g2_ParamLimits

0xcda4,	// (0x0004d98b) popup_note2_image_window_g2

0x0001,

0xfc4e,	// (0x00050835) popup_note2_image_window_g_ParamLimits

0xfc4e,	// (0x00050835) popup_note2_image_window_g

0xcdb6,	// (0x0004d99d) popup_note2_image_window_t1_ParamLimits

0xcdb6,	// (0x0004d99d) popup_note2_image_window_t1

0xcdce,	// (0x0004d9b5) popup_note2_image_window_t2_ParamLimits

0xcdce,	// (0x0004d9b5) popup_note2_image_window_t2

0xcde6,	// (0x0004d9cd) popup_note2_image_window_t3_ParamLimits

0xcde6,	// (0x0004d9cd) popup_note2_image_window_t3

0x0002,

0xfc53,	// (0x0005083a) popup_note2_image_window_t_ParamLimits

0xfc53,	// (0x0005083a) popup_note2_image_window_t

0xa03e,	// (0x0004ac25) popup_note2_wait_window_g1_ParamLimits

0xa03e,	// (0x0004ac25) popup_note2_wait_window_g1

0xce02,	// (0x0004d9e9) popup_note2_wait_window_g2_ParamLimits

0xce02,	// (0x0004d9e9) popup_note2_wait_window_g2

0xa056,	// (0x0004ac3d) popup_note2_wait_window_g3_ParamLimits

0xa056,	// (0x0004ac3d) popup_note2_wait_window_g3

0x0002,

0xfc5a,	// (0x00050841) popup_note2_wait_window_g_ParamLimits

0xfc5a,	// (0x00050841) popup_note2_wait_window_g

0xce0e,	// (0x0004d9f5) popup_note2_wait_window_t1_ParamLimits

0xce0e,	// (0x0004d9f5) popup_note2_wait_window_t1

0xce2c,	// (0x0004da13) popup_note2_wait_window_t2_ParamLimits

0xce2c,	// (0x0004da13) popup_note2_wait_window_t2

0xce4a,	// (0x0004da31) popup_note2_wait_window_t3_ParamLimits

0xce4a,	// (0x0004da31) popup_note2_wait_window_t3

0xce5c,	// (0x0004da43) popup_note2_wait_window_t4_ParamLimits

0xce5c,	// (0x0004da43) popup_note2_wait_window_t4

0x0003,

0xfc61,	// (0x00050848) popup_note2_wait_window_t_ParamLimits

0xfc61,	// (0x00050848) popup_note2_wait_window_t

0xce6e,	// (0x0004da55) wait_bar2_pane_ParamLimits

0xce6e,	// (0x0004da55) wait_bar2_pane

0xce86,	// (0x0004da6d) popup_snote2_single_text_window_g1_ParamLimits

0xce86,	// (0x0004da6d) popup_snote2_single_text_window_g1

0xceae,	// (0x0004da95) popup_snote2_single_text_window_t1_ParamLimits

0xceae,	// (0x0004da95) popup_snote2_single_text_window_t1

0xcefa,	// (0x0004dae1) popup_snote2_single_text_window_t2_ParamLimits

0xcefa,	// (0x0004dae1) popup_snote2_single_text_window_t2

0xcf46,	// (0x0004db2d) popup_snote2_single_text_window_t3_ParamLimits

0xcf46,	// (0x0004db2d) popup_snote2_single_text_window_t3

0xcf87,	// (0x0004db6e) popup_snote2_single_text_window_t4_ParamLimits

0xcf87,	// (0x0004db6e) popup_snote2_single_text_window_t4

0xcfbd,	// (0x0004dba4) popup_snote2_single_text_window_t5_ParamLimits

0xcfbd,	// (0x0004dba4) popup_snote2_single_text_window_t5

0x0004,

0xfc6a,	// (0x00050851) popup_snote2_single_text_window_t_ParamLimits

0xfc6a,	// (0x00050851) popup_snote2_single_text_window_t

0xcfe8,	// (0x0004dbcf) popup_snote2_single_graphic_window_g1_ParamLimits

0xcfe8,	// (0x0004dbcf) popup_snote2_single_graphic_window_g1

0xd010,	// (0x0004dbf7) popup_snote2_single_graphic_window_g2_ParamLimits

0xd010,	// (0x0004dbf7) popup_snote2_single_graphic_window_g2

0x0001,

0xfc75,	// (0x0005085c) popup_snote2_single_graphic_window_g_ParamLimits

0xfc75,	// (0x0005085c) popup_snote2_single_graphic_window_g

0xd038,	// (0x0004dc1f) popup_snote2_single_graphic_window_t1_ParamLimits

0xd038,	// (0x0004dc1f) popup_snote2_single_graphic_window_t1

0xd084,	// (0x0004dc6b) popup_snote2_single_graphic_window_t2_ParamLimits

0xd084,	// (0x0004dc6b) popup_snote2_single_graphic_window_t2

0xcf46,	// (0x0004db2d) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf46,	// (0x0004db2d) popup_snote2_single_graphic_window_t3

0xcf87,	// (0x0004db6e) popup_snote2_single_graphic_window_t4_ParamLimits

0xcf87,	// (0x0004db6e) popup_snote2_single_graphic_window_t4

0xcfbd,	// (0x0004dba4) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfbd,	// (0x0004dba4) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7a,	// (0x00050861) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7a,	// (0x00050861) popup_snote2_single_graphic_window_t

0xbacc,	// (0x0004c6b3) clock_nsta_pane_cp2_t1

0xbacc,	// (0x0004c6b3) clock_nsta_pane_cp2_t2

0x0001,

0xfa9a,	// (0x00050681) clock_nsta_pane_cp2_t

0x551c,	// (0x00046103) form_field_data_wide_pane_g1_ParamLimits

0x105a,	// (0x00041c41) form_field_data_wide_pane_g2_ParamLimits

0x105a,	// (0x00041c41) form_field_data_wide_pane_g2

0x1066,	// (0x00041c4d) form_field_data_wide_pane_g3_ParamLimits

0x1066,	// (0x00041c4d) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x00050242) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x00050242) form_field_data_wide_pane_g

0xb9a7,	// (0x0004c58e) grid_touch_3_pane_ParamLimits

0xb9a7,	// (0x0004c58e) grid_touch_3_pane

0xd0d0,	// (0x0004dcb7) cell_touch_3_pane_ParamLimits

0xd0d0,	// (0x0004dcb7) cell_touch_3_pane

0xbfc8,	// (0x0004cbaf) cell_touch_3_pane_g1

0xbfc8,	// (0x0004cbaf) cell_touch_3_pane_g2

0x0001,

0xfb1f,	// (0x00050706) cell_touch_3_pane_g

0x0c19,	// (0x00041800) cont_query_data_pane

0x0c21,	// (0x00041808) cont_query_data_pane_cp1

0xd103,	// (0x0004dcea) button_value_adjust_pane_cp7

0xd10b,	// (0x0004dcf2) query_popup_pane_cp3

0x8c49,	// (0x00049830) bg_popup_sub_pane_cp22_ParamLimits

0x6ac8,	// (0x000476af) navi_navi_volume_pane_cp2

0x6ae3,	// (0x000476ca) popup_side_volume_key_window_g2

0x6af2,	// (0x000476d9) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x000502d8) popup_side_volume_key_window_g

0x6b0f,	// (0x000476f6) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x000502df) popup_side_volume_key_window_t

0x8f05,	// (0x00049aec) popup_side_volume_key_window_ParamLimits

0x513a,	// (0x00045d21) list_double_graphic_pane_g4_ParamLimits

0x513a,	// (0x00045d21) list_double_graphic_pane_g4

0x78eb,	// (0x000484d2) list_single_2heading_msg_pane_ParamLimits

0x78eb,	// (0x000484d2) list_single_2heading_msg_pane

0x7e76,	// (0x00048a5d) list_single_2heading_msg_pane_g1_ParamLimits

0x7e76,	// (0x00048a5d) list_single_2heading_msg_pane_g1

0x7e82,	// (0x00048a69) list_single_2heading_msg_pane_g2_ParamLimits

0x7e82,	// (0x00048a69) list_single_2heading_msg_pane_g2

0x7e8e,	// (0x00048a75) list_single_2heading_msg_pane_g3_ParamLimits

0x7e8e,	// (0x00048a75) list_single_2heading_msg_pane_g3

0x7e9a,	// (0x00048a81) list_single_2heading_msg_pane_g4_ParamLimits

0x7e9a,	// (0x00048a81) list_single_2heading_msg_pane_g4

0x0003,

0xfc85,	// (0x0005086c) list_single_2heading_msg_pane_g_ParamLimits

0xfc85,	// (0x0005086c) list_single_2heading_msg_pane_g

0x5dda,	// (0x000469c1) list_single_2heading_msg_pane_t1_ParamLimits

0x5dda,	// (0x000469c1) list_single_2heading_msg_pane_t1

0x5e02,	// (0x000469e9) list_single_2heading_msg_pane_t2_ParamLimits

0x5e02,	// (0x000469e9) list_single_2heading_msg_pane_t2

0x5e31,	// (0x00046a18) list_single_2heading_msg_pane_t3_ParamLimits

0x5e31,	// (0x00046a18) list_single_2heading_msg_pane_t3

0x5e6a,	// (0x00046a51) list_single_2heading_msg_pane_t4_ParamLimits

0x5e6a,	// (0x00046a51) list_single_2heading_msg_pane_t4

0x0003,

0xfc8e,	// (0x00050875) list_single_2heading_msg_pane_t_ParamLimits

0xfc8e,	// (0x00050875) list_single_2heading_msg_pane_t

0x09b8,	// (0x0004159f) title_pane_g4_ParamLimits

0x09b8,	// (0x0004159f) title_pane_g4

0x6804,	// (0x000473eb) title_pane_stacon_g3_ParamLimits

0x6804,	// (0x000473eb) title_pane_stacon_g3

0xcc2c,	// (0x0004d813) list_single_2graphic_im_pane_g4_ParamLimits

0xcc2c,	// (0x0004d813) list_single_2graphic_im_pane_g4

0xaaa0,	// (0x0004b687) popup_side_volume_key_window_cp

0xb2b7,	// (0x0004be9e) main_idle_act2_pane_t1

0x7539,	// (0x00048120) toolbar_button_pane_g10

0x665b,	// (0x00047242) popup_toolbar_window_cp1

0xbabd,	// (0x0004c6a4) clock_nsta_pane_cp_t1

0xbabd,	// (0x0004c6a4) clock_nsta_pane_cp_t2

0x0001,

0xfa95,	// (0x0005067c) clock_nsta_pane_cp_t

0x6ac8,	// (0x000476af) navi_navi_volume_pane_cp2_ParamLimits

0x6ad7,	// (0x000476be) popup_side_volume_key_window_g1_ParamLimits

0x6ae3,	// (0x000476ca) popup_side_volume_key_window_g2_ParamLimits

0x6af2,	// (0x000476d9) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x000502d8) popup_side_volume_key_window_g_ParamLimits

0x7a90,	// (0x00048677) fep_hwr_aid_pane

0x2282,	// (0x00042e69) bg_fep_hwr_top_pane_g4_ParamLimits

0xc029,	// (0x0004cc10) fep_hwr_top_pane_g1_ParamLimits

0xc03b,	// (0x0004cc22) fep_hwr_top_pane_g2_ParamLimits

0x7b4b,	// (0x00048732) fep_hwr_top_pane_g3_ParamLimits

0xfaea,	// (0x000506d1) fep_hwr_top_pane_g_ParamLimits

0x7b60,	// (0x00048747) fep_hwr_top_text_pane_ParamLimits

0xa855,	// (0x0004b43c) aid_touch_tab_arrow_arrow_2

0xa85e,	// (0x0004b445) aid_touch_tab_arrow_left_2

0x7aa4,	// (0x0004868b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7adb,	// (0x000486c2) fep_hwr_prediction_pane

0xc191,	// (0x0004cd78) fep_vkb_prediction_pane

0xc297,	// (0x0004ce7e) fep_vkb_side_pane_g3_ParamLimits

0xc297,	// (0x0004ce7e) fep_vkb_side_pane_g3

0xc243,	// (0x0004ce2a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc711,	// (0x0004d2f8) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc71e,	// (0x0004d305) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb94,	// (0x0005077b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd132,	// (0x0004dd19) fep_hwr_prediction_pane_g1

0x7eb2,	// (0x00048a99) fep_hwr_prediction_pane_g2

0x7eba,	// (0x00048aa1) fep_hwr_prediction_pane_g3

0x7ec2,	// (0x00048aa9) fep_hwr_prediction_pane_g4

0x0003,

0xfc97,	// (0x0005087e) fep_hwr_prediction_pane_g

0xd132,	// (0x0004dd19) fep_vkb_prediction_pane_g1

0xd13c,	// (0x0004dd23) fep_vkb_prediction_pane_g2

0xd144,	// (0x0004dd2b) fep_vkb_prediction_pane_g3

0xd14c,	// (0x0004dd33) fep_vkb_prediction_pane_g4

0x0003,

0xfca0,	// (0x00050887) fep_vkb_prediction_pane_g

0x782e,	// (0x00048415) slider_set_pane_g3

0x7842,	// (0x00048429) slider_set_pane_g4

0x785a,	// (0x00048441) slider_set_pane_g5

0x782e,	// (0x00048415) slider_set_pane_g6

0x7870,	// (0x00048457) slider_set_pane_g7

0xaf26,	// (0x0004bb0d) slider_form_pane_g3

0xaf2f,	// (0x0004bb16) slider_form_pane_g4

0xaf37,	// (0x0004bb1e) slider_form_pane_g5

0xaf26,	// (0x0004bb0d) slider_form_pane_g6

0xaf3f,	// (0x0004bb26) slider_form_pane_g7

0xb57b,	// (0x0004c162) slider_set_pane_vc_g3

0xb584,	// (0x0004c16b) slider_set_pane_vc_g4

0xb58d,	// (0x0004c174) slider_set_pane_vc_g5

0xb57b,	// (0x0004c162) slider_set_pane_vc_g6

0xb596,	// (0x0004c17d) slider_set_pane_vc_g7

0xb76c,	// (0x0004c353) slider_form_pane_vc_g1

0xb775,	// (0x0004c35c) slider_form_pane_vc_g2

0xb77e,	// (0x0004c365) slider_form_pane_vc_g3

0xb76c,	// (0x0004c353) slider_form_pane_vc_g4

0xb787,	// (0x0004c36e) slider_form_pane_vc_g5

0x0004,

0xfa67,	// (0x0005064e) slider_form_pane_vc_g

0x099a,	// (0x00041581) main_idle_act3_pane

0xd154,	// (0x0004dd3b) ai3_links_pane

0xd15d,	// (0x0004dd44) popup_ai3_data_window_ParamLimits

0xd15d,	// (0x0004dd44) popup_ai3_data_window

0x099a,	// (0x00041581) grid_ai3_links_pane

0xd17b,	// (0x0004dd62) cell_ai3_links_pane_ParamLimits

0xd17b,	// (0x0004dd62) cell_ai3_links_pane

0xd195,	// (0x0004dd7c) bg_popup_sub_pane_cp11

0xd1a2,	// (0x0004dd89) cell_ai3_links_pane_g1

0x099a,	// (0x00041581) bg_popup_sub_pane_cp12

0xd1c7,	// (0x0004ddae) heading_ai3_data_pane

0xd1cf,	// (0x0004ddb6) list_ai3_gene_pane

0xd1db,	// (0x0004ddc2) popup_ai3_data_window_g1

0xd1e3,	// (0x0004ddca) heading_ai3_data_pane_g1

0xd1eb,	// (0x0004ddd2) heading_ai3_data_pane_t1

0xd1f9,	// (0x0004dde0) list_double_ai3_gene_pane_ParamLimits

0xd1f9,	// (0x0004dde0) list_double_ai3_gene_pane

0xd206,	// (0x0004dded) list_single_ai3_gene_pane_ParamLimits

0xd206,	// (0x0004dded) list_single_ai3_gene_pane

0xbf8d,	// (0x0004cb74) list_highlight_pane_cp7_ParamLimits

0xbf8d,	// (0x0004cb74) list_highlight_pane_cp7

0xd213,	// (0x0004ddfa) list_single_a13_gene_pane_t1_ParamLimits

0xd213,	// (0x0004ddfa) list_single_a13_gene_pane_t1

0xd22a,	// (0x0004de11) list_single_ai3_gene_pane_g1

0xd233,	// (0x0004de1a) list_single_ai3_gene_pane_g2

0x0001,

0xfca9,	// (0x00050890) list_single_ai3_gene_pane_g

0xd23b,	// (0x0004de22) list_double_ai3_gene_pane_g1_ParamLimits

0xd23b,	// (0x0004de22) list_double_ai3_gene_pane_g1

0xd247,	// (0x0004de2e) list_double_ai3_gene_pane_t1_ParamLimits

0xd247,	// (0x0004de2e) list_double_ai3_gene_pane_t1

0xd263,	// (0x0004de4a) list_double_ai3_gene_pane_t2_ParamLimits

0xd263,	// (0x0004de4a) list_double_ai3_gene_pane_t2

0xd278,	// (0x0004de5f) list_double_ai3_gene_pane_t3_ParamLimits

0xd278,	// (0x0004de5f) list_double_ai3_gene_pane_t3

0x0002,

0xfcae,	// (0x00050895) list_double_ai3_gene_pane_t_ParamLimits

0xfcae,	// (0x00050895) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5dd0,	// (0x000469b7) aid_size_min_col_2

0xd11c,	// (0x0004dd03) aid_size_min_msg_ParamLimits

0xd11c,	// (0x0004dd03) aid_size_min_msg

0xc3a3,	// (0x0004cf8a) fep_vkb_top_text_pane_g2_ParamLimits

0xc3a3,	// (0x0004cf8a) fep_vkb_top_text_pane_g2

0x0001,

0xfb1a,	// (0x00050701) fep_vkb_top_text_pane_g_ParamLimits

0xfb1a,	// (0x00050701) fep_vkb_top_text_pane_g

0x099a,	// (0x00041581) main_hc_apps_shell_pane

0xd295,	// (0x0004de7c) grid_hc_apps_pane_ParamLimits

0xd295,	// (0x0004de7c) grid_hc_apps_pane

0xd2a7,	// (0x0004de8e) list_hc_apps_pane

0xd2af,	// (0x0004de96) scroll_pane_cp37_ParamLimits

0xd2af,	// (0x0004de96) scroll_pane_cp37

0xd2bb,	// (0x0004dea2) cell_hc_apps_pane_ParamLimits

0xd2bb,	// (0x0004dea2) cell_hc_apps_pane

0xd371,	// (0x0004df58) cell_hc_apps_pane_g1_ParamLimits

0xd371,	// (0x0004df58) cell_hc_apps_pane_g1

0xd39d,	// (0x0004df84) cell_hc_apps_pane_g2_ParamLimits

0xd39d,	// (0x0004df84) cell_hc_apps_pane_g2

0xd3b9,	// (0x0004dfa0) cell_hc_apps_pane_g3_ParamLimits

0xd3b9,	// (0x0004dfa0) cell_hc_apps_pane_g3

0x0002,

0xfcb5,	// (0x0005089c) cell_hc_apps_pane_g_ParamLimits

0xfcb5,	// (0x0005089c) cell_hc_apps_pane_g

0xd3db,	// (0x0004dfc2) cell_hc_apps_pane_t1_ParamLimits

0xd3db,	// (0x0004dfc2) cell_hc_apps_pane_t1

0x0b3d,	// (0x00041724) grid_highlight_pane_cp10_ParamLimits

0x0b3d,	// (0x00041724) grid_highlight_pane_cp10

0xd41b,	// (0x0004e002) list_single_hc_apps_pane_ParamLimits

0xd41b,	// (0x0004e002) list_single_hc_apps_pane

0xd45a,	// (0x0004e041) list_single_hc_apps_pane_g1

0x7eca,	// (0x00048ab1) list_single_hc_apps_pane_g2

0x0001,

0xfcbc,	// (0x000508a3) list_single_hc_apps_pane_g

0x7ee3,	// (0x00048aca) list_single_hc_apps_pane_g2_copy1

0x5e8f,	// (0x00046a76) list_single_hc_apps_pane_t1

0x0a0a,	// (0x000415f1) bg_set_opt_pane_cp_ParamLimits

0x63b0,	// (0x00046f97) setting_slider_pane_t1_ParamLimits

0x63c9,	// (0x00046fb0) setting_slider_pane_t2_ParamLimits

0x63e3,	// (0x00046fca) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00050120) setting_slider_pane_t_ParamLimits

0x63fb,	// (0x00046fe2) slider_set_pane_ParamLimits

0x6da6,	// (0x0004798d) control_pane_g5_ParamLimits

0x6da6,	// (0x0004798d) control_pane_g5

0xad59,	// (0x0004b940) slider_set_pane_g1_ParamLimits

0x7822,	// (0x00048409) slider_set_pane_g2_ParamLimits

0x782e,	// (0x00048415) slider_set_pane_g3_ParamLimits

0x7842,	// (0x00048429) slider_set_pane_g4_ParamLimits

0x785a,	// (0x00048441) slider_set_pane_g5_ParamLimits

0x782e,	// (0x00048415) slider_set_pane_g6_ParamLimits

0x7870,	// (0x00048457) slider_set_pane_g7_ParamLimits

0xf944,	// (0x0005052b) slider_set_pane_g_ParamLimits

0x8fe9,	// (0x00049bd0) navi_icon_text_pane_ParamLimits

0x94e6,	// (0x0004a0cd) aid_fill_nsta_2_ParamLimits

0x9527,	// (0x0004a10e) aid_touch_tab_arrow_left_ParamLimits

0x9533,	// (0x0004a11a) aid_touch_tab_arrow_right_ParamLimits

0x959f,	// (0x0004a186) clock_nsta_pane_ParamLimits

0xa837,	// (0x0004b41e) navi_icon_pane_g1_ParamLimits

0xa843,	// (0x0004b42a) navi_text_pane_t1_ParamLimits

0xbbda,	// (0x0004c7c1) navi_icon_text_pane_g1_ParamLimits

0xbbe6,	// (0x0004c7cd) navi_icon_text_pane_t1_ParamLimits

0xd45a,	// (0x0004e041) list_single_hc_apps_pane_g1_ParamLimits

0x7eca,	// (0x00048ab1) list_single_hc_apps_pane_g2_ParamLimits

0xfcbc,	// (0x000508a3) list_single_hc_apps_pane_g_ParamLimits

0x7ee3,	// (0x00048aca) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5e8f,	// (0x00046a76) list_single_hc_apps_pane_t1_ParamLimits

0x61e4,	// (0x00046dcb) popup_toolbar2_fixed_window_ParamLimits

0x61e4,	// (0x00046dcb) popup_toolbar2_fixed_window

0x7413,	// (0x00047ffa) popup_toolbar2_float_window

0x099a,	// (0x00041581) bg_popup_sub_pane_cp27

0xd473,	// (0x0004e05a) grid_toolbar2_float_pane

0x099a,	// (0x00041581) bg_popup_sub_pane_cp26

0xd473,	// (0x0004e05a) grid_toolbar2_fixed_pane

0xd47b,	// (0x0004e062) cell_toolbar2_fixed_pane_ParamLimits

0xd47b,	// (0x0004e062) cell_toolbar2_fixed_pane

0xd48b,	// (0x0004e072) cell_toolbar2_fixed_pane_g1

0xd494,	// (0x0004e07b) toolbar2_fixed_button_pane

0x99ca,	// (0x0004a5b1) toolbar2_fixed_button_pane_g1

0x99d2,	// (0x0004a5b9) toolbar2_fixed_button_pane_g2

0x99da,	// (0x0004a5c1) toolbar2_fixed_button_pane_g3

0x99e2,	// (0x0004a5c9) toolbar2_fixed_button_pane_g4

0x99ea,	// (0x0004a5d1) toolbar2_fixed_button_pane_g5

0x99f2,	// (0x0004a5d9) toolbar2_fixed_button_pane_g6

0x99fa,	// (0x0004a5e1) toolbar2_fixed_button_pane_g7

0x9a02,	// (0x0004a5e9) toolbar2_fixed_button_pane_g8

0x9a0a,	// (0x0004a5f1) toolbar2_fixed_button_pane_g9

0x0008,

0xf846,	// (0x0005042d) toolbar2_fixed_button_pane_g

0xd49c,	// (0x0004e083) cell_toolbar2_float_pane_ParamLimits

0xd49c,	// (0x0004e083) cell_toolbar2_float_pane

0xd4ad,	// (0x0004e094) cell_toolbar2_float_pane_g1

0xd494,	// (0x0004e07b) toolbar2_fixed_button_pane_cp

0xc0ff,	// (0x0004cce6) fep_vkb_accented_list_pane_ParamLimits

0xc0ff,	// (0x0004cce6) fep_vkb_accented_list_pane

0x7cc2,	// (0x000488a9) bg_popup_fep_shadow_pane_g9

0x916d,	// (0x00049d54) bg_popup_fep_shadow_pane_cp3

0x3f45,	// (0x00044b2c) list_accented_list_pane

0xd4b6,	// (0x0004e09d) list_single_accented_list_pane_ParamLimits

0xd4b6,	// (0x0004e09d) list_single_accented_list_pane

0x916d,	// (0x00049d54) list_highlight_pane_cp10

0xd4c7,	// (0x0004e0ae) list_single_accented_list_pane_t1

0x7359,	// (0x00047f40) popup_slider_window_ParamLimits

0x7359,	// (0x00047f40) popup_slider_window

0xd113,	// (0x0004dcfa) aid_indentation_list_msg

0xd597,	// (0x0004e17e) bg_popup_window_pane_cp19

0xd603,	// (0x0004e1ea) popup_slider_window_g1

0xd61f,	// (0x0004e206) popup_slider_window_g2

0xd63b,	// (0x0004e222) popup_slider_window_g3

0x0005,

0xfcc1,	// (0x000508a8) popup_slider_window_g

0xd6a1,	// (0x0004e288) popup_slider_window_t1

0xd715,	// (0x0004e2fc) small_volume_slider_vertical_pane

0xbfc8,	// (0x0004cbaf) small_volume_slider_vertical_pane_g1

0xbfc8,	// (0x0004cbaf) small_volume_slider_vertical_pane_g2

0xd731,	// (0x0004e318) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd3,	// (0x000508ba) small_volume_slider_vertical_pane_g

0x5f9c,	// (0x00046b83) area_side_right_pane_ParamLimits

0x5f9c,	// (0x00046b83) area_side_right_pane

0x7eff,	// (0x00048ae6) aid_size_side_button_ParamLimits

0x7eff,	// (0x00048ae6) aid_size_side_button

0x7f13,	// (0x00048afa) grid_sctrl_middle_pane_ParamLimits

0x7f13,	// (0x00048afa) grid_sctrl_middle_pane

0x7f32,	// (0x00048b19) sctrl_sk_bottom_pane

0x7f43,	// (0x00048b2a) sctrl_sk_top_pane

0x7f55,	// (0x00048b3c) aid_touch_sctrl_top

0x0b3d,	// (0x00041724) bg_sctrl_sk_pane_ParamLimits

0x0b3d,	// (0x00041724) bg_sctrl_sk_pane

0x7f62,	// (0x00048b49) sctrl_sk_top_pane_g1

0x7f6f,	// (0x00048b56) sctrl_sk_top_pane_t1

0x7f55,	// (0x00048b3c) aid_touch_sctrl_bottom

0x0b3d,	// (0x00041724) bg_sctrl_sk_pane_cp_ParamLimits

0x0b3d,	// (0x00041724) bg_sctrl_sk_pane_cp

0x7f8a,	// (0x00048b71) sctrl_sk_bottom_pane_g1

0x7f6f,	// (0x00048b56) sctrl_sk_bottom_pane_t1

0x7f93,	// (0x00048b7a) cell_sctrl_middle_pane_ParamLimits

0x7f93,	// (0x00048b7a) cell_sctrl_middle_pane

0x7fb0,	// (0x00048b97) aid_touch_sctrl_middle_ParamLimits

0x7fb0,	// (0x00048b97) aid_touch_sctrl_middle

0x104c,	// (0x00041c33) bg_sctrl_middle_pane_ParamLimits

0x104c,	// (0x00041c33) bg_sctrl_middle_pane

0xc243,	// (0x0004ce2a) cell_sctrl_middle_pane_g1_ParamLimits

0xc243,	// (0x0004ce2a) cell_sctrl_middle_pane_g1

0x7fc2,	// (0x00048ba9) cell_sctrl_middle_pane_g2_ParamLimits

0x7fc2,	// (0x00048ba9) cell_sctrl_middle_pane_g2

0x0001,

0xfcdf,	// (0x000508c6) cell_sctrl_middle_pane_g_ParamLimits

0xfcdf,	// (0x000508c6) cell_sctrl_middle_pane_g

0x99ca,	// (0x0004a5b1) bg_sctrl_middle_pane_g1

0x99d2,	// (0x0004a5b9) bg_sctrl_middle_pane_g2

0x99da,	// (0x0004a5c1) bg_sctrl_middle_pane_g3

0x99e2,	// (0x0004a5c9) bg_sctrl_middle_pane_g4

0x99ea,	// (0x0004a5d1) bg_sctrl_middle_pane_g5

0x99f2,	// (0x0004a5d9) bg_sctrl_middle_pane_g6

0x99fa,	// (0x0004a5e1) bg_sctrl_middle_pane_g7

0x9a02,	// (0x0004a5e9) bg_sctrl_middle_pane_g8

0x0007,

0xfce4,	// (0x000508cb) bg_sctrl_middle_pane_g

0x9a0a,	// (0x0004a5f1) bg_sctrl_middle_pane_g8_copy1

0x99ca,	// (0x0004a5b1) bg_sctrl_sk_pane_g1

0x99d2,	// (0x0004a5b9) bg_sctrl_sk_pane_g2

0x99da,	// (0x0004a5c1) bg_sctrl_sk_pane_g3

0x0008,

0xf846,	// (0x0005042d) bg_sctrl_sk_pane_g

0x0f85,	// (0x00041b6c) aid_size_touch_scroll_bar

0x99e2,	// (0x0004a5c9) bg_sctrl_sk_pane_g4

0x99ea,	// (0x0004a5d1) bg_sctrl_sk_pane_g5

0x99f2,	// (0x0004a5d9) bg_sctrl_sk_pane_g6

0x99fa,	// (0x0004a5e1) bg_sctrl_sk_pane_g7

0x9a02,	// (0x0004a5e9) bg_sctrl_sk_pane_g8

0x9a0a,	// (0x0004a5f1) bg_sctrl_sk_pane_g9

0x6f6e,	// (0x00047b55) popup_fep_china_hwr2_fs_candidate_window

0x6f78,	// (0x00047b5f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6f78,	// (0x00047b5f) popup_fep_china_hwr2_fs_control_window

0xc243,	// (0x0004ce2a) sctrl_sk_top_pane_g2

0x0001,

0xfcda,	// (0x000508c1) sctrl_sk_top_pane_g

0xd73a,	// (0x0004e321) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd73a,	// (0x0004e321) aid_fep_china_hwr2_fs_cell

0xd74d,	// (0x0004e334) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd74d,	// (0x0004e334) bg_popup_fep_shadow_pane_cp4

0xd766,	// (0x0004e34d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd766,	// (0x0004e34d) bg_popup_fep_shadow_pane_cp5

0xd778,	// (0x0004e35f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd778,	// (0x0004e35f) popup_fep_china_hwr2_fs_control_bar_grid

0xd788,	// (0x0004e36f) popup_fep_china_hwr2_fs_control_funtion_grid

0xd790,	// (0x0004e377) aid_fep_china_hwr2_fs_candi_cell

0x099a,	// (0x00041581) bg_popup_fep_shadow_pane_cp6

0xd79a,	// (0x0004e381) popup_fep_china_hwr2_fs_candidate_grid

0xd7a4,	// (0x0004e38b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7a4,	// (0x0004e38b) cell_fep_china_hwr2_fs_funtion_grid

0xbfc8,	// (0x0004cbaf) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7bc,	// (0x0004e3a3) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7bc,	// (0x0004e3a3) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7ca,	// (0x0004e3b1) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7ca,	// (0x0004e3b1) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf5,	// (0x000508dc) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf5,	// (0x000508dc) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7e0,	// (0x0004e3c7) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7e0,	// (0x0004e3c7) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd7f5,	// (0x0004e3dc) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd7f5,	// (0x0004e3dc) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfa,	// (0x000508e1) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfa,	// (0x000508e1) cell_fep_china_hwr2_fs_funtion_grid_t

0xd811,	// (0x0004e3f8) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd819,	// (0x0004e400) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd821,	// (0x0004e408) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcff,	// (0x000508e6) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd829,	// (0x0004e410) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd829,	// (0x0004e410) cell_fep_china_hwr2_fs_candidate_grid

0xd848,	// (0x0004e42f) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd850,	// (0x0004e437) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbfc8,	// (0x0004cbaf) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbfc8,	// (0x0004cbaf) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1f,	// (0x00050706) cell_fep_china_hwr2_fs_candidate_grid_g

0xd858,	// (0x0004e43f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x95b2,	// (0x0004a199) clock_nsta_pane_cp_24_ParamLimits

0x95b2,	// (0x0004a199) clock_nsta_pane_cp_24

0x9632,	// (0x0004a219) indicator_nsta_pane_cp_24_ParamLimits

0x9632,	// (0x0004a219) indicator_nsta_pane_cp_24

0xa6b3,	// (0x0004b29a) heading_pane_g1

0x0001,

0xf8ab,	// (0x00050492) heading_pane_g

0xb0fe,	// (0x0004bce5) grid_sct_catagory_button_pane

0xb130,	// (0x0004bd17) scroll_pane_cp5_ParamLimits

0xbc28,	// (0x0004c80f) button_value_adjust_pane_cp5_ParamLimits

0xbc28,	// (0x0004c80f) button_value_adjust_pane_cp5

0xbd0d,	// (0x0004c8f4) form2_midp_time_pane_ParamLimits

0xd866,	// (0x0004e44d) cell_sct_catagory_button_pane_ParamLimits

0xd866,	// (0x0004e44d) cell_sct_catagory_button_pane

0xbf8d,	// (0x0004cb74) bg_button_pane_cp01_ParamLimits

0xbf8d,	// (0x0004cb74) bg_button_pane_cp01

0xbfc8,	// (0x0004cbaf) cell_sct_catagory_button_pane_g1

0x739a,	// (0x00047f81) popup_tb_extension_window

0xd878,	// (0x0004e45f) aid_size_cell_ext_ParamLimits

0xd878,	// (0x0004e45f) aid_size_cell_ext

0x0b3d,	// (0x00041724) bg_tb_trans_pane_cp1_ParamLimits

0x0b3d,	// (0x00041724) bg_tb_trans_pane_cp1

0xd898,	// (0x0004e47f) grid_tb_ext_pane_ParamLimits

0xd898,	// (0x0004e47f) grid_tb_ext_pane

0xd8c6,	// (0x0004e4ad) cell_tb_ext_pane_ParamLimits

0xd8c6,	// (0x0004e4ad) cell_tb_ext_pane

0xd8dd,	// (0x0004e4c4) cell_tb_ext_pane_g1_ParamLimits

0xd8dd,	// (0x0004e4c4) cell_tb_ext_pane_g1

0xd8fa,	// (0x0004e4e1) cell_tb_ext_pane_t1

0x0b3d,	// (0x00041724) list_highlight_pane_cp11_ParamLimits

0x0b3d,	// (0x00041724) list_highlight_pane_cp11

0x6203,	// (0x00046dea) popup_uni_indicator_window_ParamLimits

0x6203,	// (0x00046dea) popup_uni_indicator_window

0x104c,	// (0x00041c33) bg_popup_sub_pane_cp14

0xd915,	// (0x0004e4fc) list_uniindi_pane

0xd921,	// (0x0004e508) uniindi_top_pane

0x0b3d,	// (0x00041724) bg_uniindi_top_pane

0xd942,	// (0x0004e529) uniindi_top_pane_g1

0xd958,	// (0x0004e53f) uniindi_top_pane_g2

0x0003,

0xfd06,	// (0x000508ed) uniindi_top_pane_g

0xd982,	// (0x0004e569) uniindi_top_pane_t1

0xd9ae,	// (0x0004e595) list_single_uniindi_pane_ParamLimits

0xd9ae,	// (0x0004e595) list_single_uniindi_pane

0xbfc8,	// (0x0004cbaf) bg_uniindi_top_pane_g1

0xd9c1,	// (0x0004e5a8) list_single_uniindi_pane_g1

0xd9d4,	// (0x0004e5bb) list_single_uniindi_pane_t1

0x099a,	// (0x00041581) control_bg_pane

0xd9f9,	// (0x0004e5e0) bg_sctrl_sk_pane_cp1

0xda02,	// (0x0004e5e9) bg_sctrl_sk_pane_cp2

0xda0b,	// (0x0004e5f2) control_bg_pane_g1

0xda14,	// (0x0004e5fb) control_bg_pane_g2

0x0001,

0xfd0f,	// (0x000508f6) control_bg_pane_g

0xba60,	// (0x0004c647) cell_indicator_nsta_pane_g1_ParamLimits

0xba6e,	// (0x0004c655) cell_indicator_nsta_pane_g2_ParamLimits

0xfa83,	// (0x0005066a) cell_indicator_nsta_pane_g_ParamLimits

0x5c1d,	// (0x00046804) form2_midp_time_pane_t1_ParamLimits

0x0dc7,	// (0x000419ae) main_idle_act4_pane_ParamLimits

0x0dc7,	// (0x000419ae) main_idle_act4_pane

0x739a,	// (0x00047f81) popup_tb_extension_window_ParamLimits

0xd8b8,	// (0x0004e49f) tb_ext_find_pane_ParamLimits

0xd8b8,	// (0x0004e49f) tb_ext_find_pane

0xda1d,	// (0x0004e604) ai_gene_pane_1_cp1

0x92b7,	// (0x00049e9e) ai_gene_pane_2_cp1

0xda25,	// (0x0004e60c) list_single_idle_plugin_calendar_pane

0xda2e,	// (0x0004e615) list_single_idle_plugin_notification_pane

0xda37,	// (0x0004e61e) list_single_idle_plugin_player_pane

0xda40,	// (0x0004e627) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda40,	// (0x0004e627) list_single_idle_plugin_shortcut_pane

0xda62,	// (0x0004e649) main_idle_act4_pane_t1

0xda74,	// (0x0004e65b) main_idle_act4_pane_t2

0x0001,

0xfd14,	// (0x000508fb) main_idle_act4_pane_t

0xda86,	// (0x0004e66d) middle_sk_idle_act4_pane_ParamLimits

0xda86,	// (0x0004e66d) middle_sk_idle_act4_pane

0xda9c,	// (0x0004e683) popup_clock_digital_analogue_window_cp2

0xdab6,	// (0x0004e69d) shortcut_wheel_idle_act4_pane_ParamLimits

0xdab6,	// (0x0004e69d) shortcut_wheel_idle_act4_pane

0xbfc8,	// (0x0004cbaf) shortcut_wheel_idle_act4_pane_g1

0xbfc8,	// (0x0004cbaf) shortcut_wheel_idle_act4_pane_g2

0xbfc8,	// (0x0004cbaf) shortcut_wheel_idle_act4_pane_g3

0xbfc8,	// (0x0004cbaf) shortcut_wheel_idle_act4_pane_g4

0xbfc8,	// (0x0004cbaf) shortcut_wheel_idle_act4_pane_g5

0xdaca,	// (0x0004e6b1) shortcut_wheel_idle_act4_pane_g6

0xdad2,	// (0x0004e6b9) shortcut_wheel_idle_act4_pane_g7

0xdada,	// (0x0004e6c1) shortcut_wheel_idle_act4_pane_g8

0xdae2,	// (0x0004e6c9) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd19,	// (0x00050900) shortcut_wheel_idle_act4_pane_g

0xc243,	// (0x0004ce2a) middle_sk_idle_act4_pane_g1_ParamLimits

0xc243,	// (0x0004ce2a) middle_sk_idle_act4_pane_g1

0xdb46,	// (0x0004e72d) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb46,	// (0x0004e72d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3c,	// (0x00050923) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3c,	// (0x00050923) middle_sk_idle_act4_pane_g

0xdb52,	// (0x0004e739) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb52,	// (0x0004e739) middle_sk_idle_act4_pane_t1

0xdb6f,	// (0x0004e756) grid_ai_shortcut_pane_ParamLimits

0xdb6f,	// (0x0004e756) grid_ai_shortcut_pane

0xdb88,	// (0x0004e76f) list_highlight_pane_cp16_ParamLimits

0xdb88,	// (0x0004e76f) list_highlight_pane_cp16

0xdb95,	// (0x0004e77c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb95,	// (0x0004e77c) list_single_idle_plugin_shortcut_pane_g1

0xdba1,	// (0x0004e788) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdba1,	// (0x0004e788) list_single_idle_plugin_shortcut_pane_g2

0xdbbb,	// (0x0004e7a2) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbbb,	// (0x0004e7a2) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd41,	// (0x00050928) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd41,	// (0x00050928) list_single_idle_plugin_shortcut_pane_g

0xdbce,	// (0x0004e7b5) cell_ai_shortcut_pane_ParamLimits

0xdbce,	// (0x0004e7b5) cell_ai_shortcut_pane

0xdbf1,	// (0x0004e7d8) cell_ai_shortcut_pane_g1_ParamLimits

0xdbf1,	// (0x0004e7d8) cell_ai_shortcut_pane_g1

0xda1d,	// (0x0004e604) ai_gene_pane_1_cp2

0xdc13,	// (0x0004e7fa) ai_gene_pane_2_cp2

0xdc1b,	// (0x0004e802) list_highlight_pane_cp15

0xdc24,	// (0x0004e80b) list_single_idle_plugin_calendar_pane_g1

0xdc1b,	// (0x0004e802) list_highlight_pane_cp17

0xdc2c,	// (0x0004e813) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc34,	// (0x0004e81b) list_single_idle_plugin_player_pane_g1

0xb365,	// (0x0004bf4c) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd48,	// (0x0005092f) list_single_idle_plugin_player_pane_g

0xdc3c,	// (0x0004e823) list_single_idle_plugin_player_pane_t1

0xdc4a,	// (0x0004e831) list_single_idle_plugin_player_pane_t2

0xdc58,	// (0x0004e83f) list_single_idle_plugin_player_pane_t3

0xdc66,	// (0x0004e84d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4d,	// (0x00050934) list_single_idle_plugin_player_pane_t

0xdc74,	// (0x0004e85b) wait_bar_pane_cp15

0xdc7c,	// (0x0004e863) grid_ai_notification_pane

0xb365,	// (0x0004bf4c) list_single_idle_plugin_notification_pane_g1

0xdc85,	// (0x0004e86c) cell_ai_notification_pane_ParamLimits

0xdc85,	// (0x0004e86c) cell_ai_notification_pane

0xdc92,	// (0x0004e879) cell_ai_notification_pane_g1

0xdc9a,	// (0x0004e881) cell_ai_notification_pane_t1

0xdca8,	// (0x0004e88f) tb_ext_find_button_pane

0xdcb0,	// (0x0004e897) tb_ext_find_pane_g1

0xdcb8,	// (0x0004e89f) tb_ext_find_pane_t1

0x8b61,	// (0x00049748) tb_ext_find_button_pane_g1

0xdcc6,	// (0x0004e8ad) tb_ext_find_button_pane_g2

0x0001,

0xfd56,	// (0x0005093d) tb_ext_find_button_pane_g

0xda62,	// (0x0004e649) main_idle_act4_pane_t1_ParamLimits

0xda74,	// (0x0004e65b) main_idle_act4_pane_t2_ParamLimits

0xfd14,	// (0x000508fb) main_idle_act4_pane_t_ParamLimits

0xda9c,	// (0x0004e683) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdaaa,	// (0x0004e691) sat_plugin_idle_act4_pane_ParamLimits

0xdaaa,	// (0x0004e691) sat_plugin_idle_act4_pane

0xdccf,	// (0x0004e8b6) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdccf,	// (0x0004e8b6) sat_plugin_idle_act4_pane_t1

0xdce2,	// (0x0004e8c9) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdce2,	// (0x0004e8c9) sat_plugin_idle_act4_pane_t2

0xdcf5,	// (0x0004e8dc) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdcf5,	// (0x0004e8dc) sat_plugin_idle_act4_pane_t3

0xdd08,	// (0x0004e8ef) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd08,	// (0x0004e8ef) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5b,	// (0x00050942) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5b,	// (0x00050942) sat_plugin_idle_act4_pane_t

0x6134,	// (0x00046d1b) popup_battery_window_ParamLimits

0x6134,	// (0x00046d1b) popup_battery_window

0x0b3d,	// (0x00041724) bg_popup_sub_pane_cp25_ParamLimits

0x0b3d,	// (0x00041724) bg_popup_sub_pane_cp25

0xdd1b,	// (0x0004e902) popup_battery_window_g1_ParamLimits

0xdd1b,	// (0x0004e902) popup_battery_window_g1

0xdd27,	// (0x0004e90e) popup_battery_window_t1_ParamLimits

0xdd27,	// (0x0004e90e) popup_battery_window_t1

0xdd39,	// (0x0004e920) popup_battery_window_t2_ParamLimits

0xdd39,	// (0x0004e920) popup_battery_window_t2

0x0001,

0xfd64,	// (0x0005094b) popup_battery_window_t_ParamLimits

0xfd64,	// (0x0005094b) popup_battery_window_t

0x9181,	// (0x00049d68) midp_canvas_pane_ParamLimits

0x91f9,	// (0x00049de0) midp_keypad_pane_ParamLimits

0x91f9,	// (0x00049de0) midp_keypad_pane

0x9494,	// (0x0004a07b) main_midp_pane_ParamLimits

0xbadb,	// (0x0004c6c2) signal_pane_g2_cp_ParamLimits

0xdd56,	// (0x0004e93d) aid_size_cell_midp_keypad_ParamLimits

0xdd56,	// (0x0004e93d) aid_size_cell_midp_keypad

0xdd70,	// (0x0004e957) midp_keyp_game_grid_pane_ParamLimits

0xdd70,	// (0x0004e957) midp_keyp_game_grid_pane

0xdd90,	// (0x0004e977) midp_keyp_rocker_pane_ParamLimits

0xdd90,	// (0x0004e977) midp_keyp_rocker_pane

0xddbf,	// (0x0004e9a6) midp_keyp_sk_left_pane_ParamLimits

0xddbf,	// (0x0004e9a6) midp_keyp_sk_left_pane

0xde1b,	// (0x0004ea02) midp_keyp_sk_right_pane_ParamLimits

0xde1b,	// (0x0004ea02) midp_keyp_sk_right_pane

0x099a,	// (0x00041581) bg_button_pane_cp03

0xde77,	// (0x0004ea5e) midp_keyp_sk_left_pane_g1

0x099a,	// (0x00041581) bg_button_pane_cp04

0xde77,	// (0x0004ea5e) midp_keyp_sk_right_pane_g1

0xbfc8,	// (0x0004cbaf) midp_keyp_rocker_pane_g1

0xde7f,	// (0x0004ea66) keyp_game_cell_pane_ParamLimits

0xde7f,	// (0x0004ea66) keyp_game_cell_pane

0x099a,	// (0x00041581) bg_button_pane_cp02

0xde92,	// (0x0004ea79) keyp_game_cell_pane_g1

0x617e,	// (0x00046d65) popup_fep_vkb2_window_ParamLimits

0x617e,	// (0x00046d65) popup_fep_vkb2_window

0x7fe0,	// (0x00048bc7) aid_size_cell_vkb2_ParamLimits

0x7fe0,	// (0x00048bc7) aid_size_cell_vkb2

0x8034,	// (0x00048c1b) popup_fep_vkb2_window_g1_ParamLimits

0x8034,	// (0x00048c1b) popup_fep_vkb2_window_g1

0x807c,	// (0x00048c63) vkb2_area_bottom_pane_ParamLimits

0x807c,	// (0x00048c63) vkb2_area_bottom_pane

0x80d0,	// (0x00048cb7) vkb2_area_keypad_pane_ParamLimits

0x80d0,	// (0x00048cb7) vkb2_area_keypad_pane

0x8116,	// (0x00048cfd) vkb2_area_top_pane_ParamLimits

0x8116,	// (0x00048cfd) vkb2_area_top_pane

0x8190,	// (0x00048d77) vkb2_top_entry_pane_ParamLimits

0x8190,	// (0x00048d77) vkb2_top_entry_pane

0x81ba,	// (0x00048da1) vkb2_top_grid_left_pane_ParamLimits

0x81ba,	// (0x00048da1) vkb2_top_grid_left_pane

0x81d8,	// (0x00048dbf) vkb2_top_grid_right_pane_ParamLimits

0x81d8,	// (0x00048dbf) vkb2_top_grid_right_pane

0x81f6,	// (0x00048ddd) vkb2_cell_keypad_pane_ParamLimits

0x81f6,	// (0x00048ddd) vkb2_cell_keypad_pane

0x82c7,	// (0x00048eae) vkb2_area_bottom_grid_pane_ParamLimits

0x82c7,	// (0x00048eae) vkb2_area_bottom_grid_pane

0x82ed,	// (0x00048ed4) vkb2_area_bottom_pane_g1_ParamLimits

0x82ed,	// (0x00048ed4) vkb2_area_bottom_pane_g1

0x8311,	// (0x00048ef8) vkb2_area_bottom_pane_g2_ParamLimits

0x8311,	// (0x00048ef8) vkb2_area_bottom_pane_g2

0x833f,	// (0x00048f26) vkb2_area_bottom_pane_g3_ParamLimits

0x833f,	// (0x00048f26) vkb2_area_bottom_pane_g3

0x0002,

0xfd69,	// (0x00050950) vkb2_area_bottom_pane_g_ParamLimits

0xfd69,	// (0x00050950) vkb2_area_bottom_pane_g

0x83a0,	// (0x00048f87) vkb2_top_cell_left_pane_ParamLimits

0x83a0,	// (0x00048f87) vkb2_top_cell_left_pane

0xdea3,	// (0x0004ea8a) vkb2_top_entry_pane_g1_ParamLimits

0xdea3,	// (0x0004ea8a) vkb2_top_entry_pane_g1

0xdeb1,	// (0x0004ea98) vkb2_top_entry_pane_t1_ParamLimits

0xdeb1,	// (0x0004ea98) vkb2_top_entry_pane_t1

0xdee3,	// (0x0004eaca) vkb2_top_entry_pane_t2_ParamLimits

0xdee3,	// (0x0004eaca) vkb2_top_entry_pane_t2

0xdf15,	// (0x0004eafc) vkb2_top_entry_pane_t3_ParamLimits

0xdf15,	// (0x0004eafc) vkb2_top_entry_pane_t3

0x0002,

0xfd70,	// (0x00050957) vkb2_top_entry_pane_t_ParamLimits

0xfd70,	// (0x00050957) vkb2_top_entry_pane_t

0x83ed,	// (0x00048fd4) vkb2_top_grid_right_pane_g1_ParamLimits

0x83ed,	// (0x00048fd4) vkb2_top_grid_right_pane_g1

0x8403,	// (0x00048fea) vkb2_top_grid_right_pane_g2_ParamLimits

0x8403,	// (0x00048fea) vkb2_top_grid_right_pane_g2

0x841b,	// (0x00049002) vkb2_top_grid_right_pane_g3_ParamLimits

0x841b,	// (0x00049002) vkb2_top_grid_right_pane_g3

0x8433,	// (0x0004901a) vkb2_top_grid_right_pane_g4_ParamLimits

0x8433,	// (0x0004901a) vkb2_top_grid_right_pane_g4

0x0003,

0xfd77,	// (0x0005095e) vkb2_top_grid_right_pane_g_ParamLimits

0xfd77,	// (0x0005095e) vkb2_top_grid_right_pane_g

0x8449,	// (0x00049030) vkb2_top_cell_left_pane_g1

0x8460,	// (0x00049047) vkb2_cell_keypad_pane_g1_ParamLimits

0x8460,	// (0x00049047) vkb2_cell_keypad_pane_g1

0xdf39,	// (0x0004eb20) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf39,	// (0x0004eb20) vkb2_cell_keypad_pane_t1

0x846e,	// (0x00049055) vkb2_cell_bottom_grid_pane_ParamLimits

0x846e,	// (0x00049055) vkb2_cell_bottom_grid_pane

0x84a7,	// (0x0004908e) vkb2_cell_bottom_grid_pane_g1

0xdaea,	// (0x0004e6d1) aid_call2_pane_cp02

0xdaf2,	// (0x0004e6d9) aid_call_pane_cp02

0xdafa,	// (0x0004e6e1) clock_digital_number_pane_cp10

0xdb02,	// (0x0004e6e9) clock_digital_number_pane_cp11

0xdb0a,	// (0x0004e6f1) clock_digital_number_pane_cp12

0xdb12,	// (0x0004e6f9) clock_digital_number_pane_cp13

0xdb1a,	// (0x0004e701) clock_digital_separator_pane_cp10

0x8b61,	// (0x00049748) popup_clock_digital_analogue_window_cp2_g1

0x8b61,	// (0x00049748) popup_clock_digital_analogue_window_cp2_g2

0xdb22,	// (0x0004e709) popup_clock_digital_analogue_window_cp2_g3

0x8b61,	// (0x00049748) popup_clock_digital_analogue_window_cp2_g4

0xdb22,	// (0x0004e709) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2c,	// (0x00050913) popup_clock_digital_analogue_window_cp2_g

0xdb2a,	// (0x0004e711) popup_clock_digital_analogue_window_cp2_t1

0xdb38,	// (0x0004e71f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd37,	// (0x0005091e) popup_clock_digital_analogue_window_cp2_t

0xbfc8,	// (0x0004cbaf) clock_digital_number_pane_cp10_g1

0xbfc8,	// (0x0004cbaf) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1f,	// (0x00050706) clock_digital_number_pane_cp10_g

0xbfc8,	// (0x0004cbaf) clock_digital_separator_pane_cp10_g1

0xbfc8,	// (0x0004cbaf) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1f,	// (0x00050706) clock_digital_separator_pane_cp10_g

0xd964,	// (0x0004e54b) uniindi_top_pane_g3

0xd975,	// (0x0004e55c) uniindi_top_pane_g4

0x8281,	// (0x00048e68) vkb2_row_keypad_pane_ParamLimits

0x8281,	// (0x00048e68) vkb2_row_keypad_pane

0x84c3,	// (0x000490aa) vkb2_cell_t_keypad_pane_ParamLimits

0x84c3,	// (0x000490aa) vkb2_cell_t_keypad_pane

0x84d3,	// (0x000490ba) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x84d3,	// (0x000490ba) vkb2_cell_t_keypad_pane_cp08

0x84e8,	// (0x000490cf) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x84e8,	// (0x000490cf) vkb2_cell_t_keypad_pane_cp09

0x84fc,	// (0x000490e3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x84fc,	// (0x000490e3) vkb2_cell_t_keypad_pane_cp01

0x850d,	// (0x000490f4) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x850d,	// (0x000490f4) vkb2_cell_t_keypad_pane_cp02

0x851e,	// (0x00049105) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x851e,	// (0x00049105) vkb2_cell_t_keypad_pane_cp03

0x852f,	// (0x00049116) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x852f,	// (0x00049116) vkb2_cell_t_keypad_pane_cp04

0x8540,	// (0x00049127) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8540,	// (0x00049127) vkb2_cell_t_keypad_pane_cp05

0x8551,	// (0x00049138) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8551,	// (0x00049138) vkb2_cell_t_keypad_pane_cp06

0x8564,	// (0x0004914b) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8564,	// (0x0004914b) vkb2_cell_t_keypad_pane_cp07

0x8579,	// (0x00049160) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8579,	// (0x00049160) vkb2_cell_t_keypad_pane_cp10

0xc243,	// (0x0004ce2a) vkb2_cell_t_keypad_pane_g1

0xdf50,	// (0x0004eb37) vkb2_cell_t_keypad_pane_t1

0x099a,	// (0x00041581) popup_grid_graphic2_window

0xdf62,	// (0x0004eb49) aid_size_cell_graphic2_ParamLimits

0xdf62,	// (0x0004eb49) aid_size_cell_graphic2

0xdf9a,	// (0x0004eb81) bg_popup_window_pane_cp21_ParamLimits

0xdf9a,	// (0x0004eb81) bg_popup_window_pane_cp21

0xdfa8,	// (0x0004eb8f) graphic2_pages_pane_ParamLimits

0xdfa8,	// (0x0004eb8f) graphic2_pages_pane

0xdfee,	// (0x0004ebd5) grid_graphic2_control_pane_ParamLimits

0xdfee,	// (0x0004ebd5) grid_graphic2_control_pane

0xe02c,	// (0x0004ec13) grid_graphic2_pane_ParamLimits

0xe02c,	// (0x0004ec13) grid_graphic2_pane

0xe0a2,	// (0x0004ec89) cell_graphic2_pane

0x099a,	// (0x00041581) main_comp_mode_pane

0xd1cf,	// (0x0004ddb6) list_ai3_gene_pane_ParamLimits

0xd597,	// (0x0004e17e) bg_popup_window_pane_cp19_ParamLimits

0xd5a3,	// (0x0004e18a) bg_touch_area_indi_pane_ParamLimits

0xd5a3,	// (0x0004e18a) bg_touch_area_indi_pane

0xd5b9,	// (0x0004e1a0) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5b9,	// (0x0004e1a0) bg_touch_area_indi_pane_cp01

0xd5cf,	// (0x0004e1b6) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5cf,	// (0x0004e1b6) bg_touch_area_indi_pane_cp02

0xd5e9,	// (0x0004e1d0) bg_touch_area_indi_pane_cp03_ParamLimits

0xd5e9,	// (0x0004e1d0) bg_touch_area_indi_pane_cp03

0xd603,	// (0x0004e1ea) popup_slider_window_g1_ParamLimits

0xd61f,	// (0x0004e206) popup_slider_window_g2_ParamLimits

0xd63b,	// (0x0004e222) popup_slider_window_g3_ParamLimits

0xfcc1,	// (0x000508a8) popup_slider_window_g_ParamLimits

0xd6a1,	// (0x0004e288) popup_slider_window_t1_ParamLimits

0xd715,	// (0x0004e2fc) small_volume_slider_vertical_pane_ParamLimits

0xe0a2,	// (0x0004ec89) cell_graphic2_pane_ParamLimits

0xe0f6,	// (0x0004ecdd) bg_button_pane_cp10_ParamLimits

0xe0f6,	// (0x0004ecdd) bg_button_pane_cp10

0xe10b,	// (0x0004ecf2) bg_button_pane_cp11_ParamLimits

0xe10b,	// (0x0004ecf2) bg_button_pane_cp11

0xe120,	// (0x0004ed07) graphic2_pages_pane_g1_ParamLimits

0xe120,	// (0x0004ed07) graphic2_pages_pane_g1

0xe13b,	// (0x0004ed22) graphic2_pages_pane_g2_ParamLimits

0xe13b,	// (0x0004ed22) graphic2_pages_pane_g2

0x0001,

0xfd85,	// (0x0005096c) graphic2_pages_pane_g_ParamLimits

0xfd85,	// (0x0005096c) graphic2_pages_pane_g

0xe153,	// (0x0004ed3a) graphic2_pages_pane_t1_ParamLimits

0xe153,	// (0x0004ed3a) graphic2_pages_pane_t1

0xe169,	// (0x0004ed50) cell_graphic2_control_pane_ParamLimits

0xe169,	// (0x0004ed50) cell_graphic2_control_pane

0xe189,	// (0x0004ed70) cell_graphic2_pane_g1_ParamLimits

0xe189,	// (0x0004ed70) cell_graphic2_pane_g1

0xe196,	// (0x0004ed7d) cell_graphic2_pane_g2_ParamLimits

0xe196,	// (0x0004ed7d) cell_graphic2_pane_g2

0xe1a3,	// (0x0004ed8a) cell_graphic2_pane_g3_ParamLimits

0xe1a3,	// (0x0004ed8a) cell_graphic2_pane_g3

0xe1b0,	// (0x0004ed97) cell_graphic2_pane_g4_ParamLimits

0xe1b0,	// (0x0004ed97) cell_graphic2_pane_g4

0xe1bd,	// (0x0004eda4) cell_graphic2_pane_g5_ParamLimits

0xe1bd,	// (0x0004eda4) cell_graphic2_pane_g5

0x0004,

0xfd8a,	// (0x00050971) cell_graphic2_pane_g_ParamLimits

0xfd8a,	// (0x00050971) cell_graphic2_pane_g

0xe1d5,	// (0x0004edbc) cell_graphic2_pane_t1_ParamLimits

0xe1d5,	// (0x0004edbc) cell_graphic2_pane_t1

0x9a3e,	// (0x0004a625) grid_highlight_pane_cp11_ParamLimits

0x9a3e,	// (0x0004a625) grid_highlight_pane_cp11

0x0b3d,	// (0x00041724) bg_button_pane_cp05

0xe20b,	// (0x0004edf2) cell_graphic2_control_pane_g1

0xbfc8,	// (0x0004cbaf) bg_touch_area_indi_pane_g1

0xe233,	// (0x0004ee1a) aid_cmod_rocker_key_size

0xe23d,	// (0x0004ee24) aid_cmode_itu_key_size

0xe247,	// (0x0004ee2e) main_cmode_video_pane

0xe251,	// (0x0004ee38) main_comp_mode_itu_pane

0xe25d,	// (0x0004ee44) main_comp_mode_rocker_pane

0xe269,	// (0x0004ee50) cell_cmode_rocker_pane_ParamLimits

0xe269,	// (0x0004ee50) cell_cmode_rocker_pane

0xe27d,	// (0x0004ee64) cell_cmode_itu_pane_ParamLimits

0xe27d,	// (0x0004ee64) cell_cmode_itu_pane

0x104c,	// (0x00041c33) bg_button_pane_cp06_ParamLimits

0x104c,	// (0x00041c33) bg_button_pane_cp06

0xc243,	// (0x0004ce2a) cell_cmode_rocker_pane_g1_ParamLimits

0xc243,	// (0x0004ce2a) cell_cmode_rocker_pane_g1

0xd7bc,	// (0x0004e3a3) cell_cmode_rocker_pane_g2_ParamLimits

0xd7bc,	// (0x0004e3a3) cell_cmode_rocker_pane_g2

0x0001,

0xfd9a,	// (0x00050981) cell_cmode_rocker_pane_g_ParamLimits

0xfd9a,	// (0x00050981) cell_cmode_rocker_pane_g

0x099a,	// (0x00041581) bg_button_pane_cp07

0xe294,	// (0x0004ee7b) cell_cmode_itu_pane_g1

0xe29d,	// (0x0004ee84) cell_cmode_itu_pane_t1

0xe2ab,	// (0x0004ee92) cell_cmode_itu_pane_t2

0x0001,

0xfd9f,	// (0x00050986) cell_cmode_itu_pane_t

0xd9e9,	// (0x0004e5d0) aid_touch_ctrl_left

0xd9f1,	// (0x0004e5d8) aid_touch_ctrl_right

0x099a,	// (0x00041581) compa_mode_pane

0xe2b9,	// (0x0004eea0) aid_cmod_rocker_key_size_cp

0xe2c3,	// (0x0004eeaa) aid_cmode_itu_key_size_cp

0xe2cd,	// (0x0004eeb4) compa_mode_pane_g1

0xe2d5,	// (0x0004eebc) compa_mode_pane_g2

0xe2dd,	// (0x0004eec4) compa_mode_pane_g3

0x0002,

0xfda4,	// (0x0005098b) compa_mode_pane_g

0xe2e5,	// (0x0004eecc) main_comp_mode_itu_pane_cp

0xe2ed,	// (0x0004eed4) main_comp_mode_rocker_pane_cp

0xe2f5,	// (0x0004eedc) cell_cmode_itu_pane_cp_ParamLimits

0xe2f5,	// (0x0004eedc) cell_cmode_itu_pane_cp

0xe30a,	// (0x0004eef1) cell_cmode_rocker_pane_cp_ParamLimits

0xe30a,	// (0x0004eef1) cell_cmode_rocker_pane_cp

0x104c,	// (0x00041c33) bg_button_pane_cp06_cp_ParamLimits

0x104c,	// (0x00041c33) bg_button_pane_cp06_cp

0xc243,	// (0x0004ce2a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc243,	// (0x0004ce2a) cell_cmode_rocker_pane_g1_cp

0xbfc8,	// (0x0004cbaf) cell_cmode_rocker_pane_g2_cp

0x099a,	// (0x00041581) bg_button_pane_cp07_cp

0xe31c,	// (0x0004ef03) cell_cmode_itu_pane_g1_cp

0xe325,	// (0x0004ef0c) cell_cmode_itu_pane_t1_cp

0xe325,	// (0x0004ef0c) cell_cmode_itu_pane_t2_cp

0xaf15,	// (0x0004bafc) settings_code_pane_cp2

0x0a0a,	// (0x000415f1) bg_popup_window_pane_cp3_ParamLimits

0x0d51,	// (0x00041938) heading_pane_cp3_ParamLimits

0x0d60,	// (0x00041947) listscroll_popup_graphic_pane_ParamLimits

0x7a90,	// (0x00048677) fep_hwr_aid_pane_ParamLimits

0x7f55,	// (0x00048b3c) aid_touch_sctrl_top_ParamLimits

0x7f62,	// (0x00048b49) sctrl_sk_top_pane_g1_ParamLimits

0xc243,	// (0x0004ce2a) sctrl_sk_top_pane_g2_ParamLimits

0xfcda,	// (0x000508c1) sctrl_sk_top_pane_g_ParamLimits

0x7f6f,	// (0x00048b56) sctrl_sk_top_pane_t1_ParamLimits

0x7f55,	// (0x00048b3c) aid_touch_sctrl_bottom_ParamLimits

0x7f6f,	// (0x00048b56) sctrl_sk_bottom_pane_t1_ParamLimits

0xd92e,	// (0x0004e515) aid_area_touch_clock

0x8158,	// (0x00048d3f) aid_vkb2_area_top_pane_cell_ParamLimits

0x8158,	// (0x00048d3f) aid_vkb2_area_top_pane_cell

0x82a3,	// (0x00048e8a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x82a3,	// (0x00048e8a) aid_vkb2_area_bottom_pane_cell

0xde9b,	// (0x0004ea82) popup_char_count_window

0xe333,	// (0x0004ef1a) popup_char_count_window_g1

0xe33c,	// (0x0004ef23) popup_char_count_window_g2

0xe345,	// (0x0004ef2c) popup_char_count_window_g3

0x0002,

0xfdab,	// (0x00050992) popup_char_count_window_g

0xe34e,	// (0x0004ef35) popup_char_count_window_t1

0x8012,	// (0x00048bf9) popup_fep_char_preview_window_ParamLimits

0x8012,	// (0x00048bf9) popup_fep_char_preview_window

0x8176,	// (0x00048d5d) vkb2_top_candi_pane_ParamLimits

0x8176,	// (0x00048d5d) vkb2_top_candi_pane

0xe35c,	// (0x0004ef43) cell_vkb2_top_candi_pane_ParamLimits

0xe35c,	// (0x0004ef43) cell_vkb2_top_candi_pane

0xa030,	// (0x0004ac17) bg_popup_fep_char_preview_window_ParamLimits

0xa030,	// (0x0004ac17) bg_popup_fep_char_preview_window

0x858e,	// (0x00049175) popup_fep_char_preview_window_t1_ParamLimits

0x858e,	// (0x00049175) popup_fep_char_preview_window_t1

0xe3ad,	// (0x0004ef94) bg_popup_fep_char_preview_window_g1

0xe3b5,	// (0x0004ef9c) bg_popup_fep_char_preview_window_g2

0xe3bd,	// (0x0004efa4) bg_popup_fep_char_preview_window_g3

0xe3c5,	// (0x0004efac) bg_popup_fep_char_preview_window_g4

0xe3cd,	// (0x0004efb4) bg_popup_fep_char_preview_window_g5

0xe3d5,	// (0x0004efbc) bg_popup_fep_char_preview_window_g6

0xe3dd,	// (0x0004efc4) bg_popup_fep_char_preview_window_g7

0xe3e5,	// (0x0004efcc) bg_popup_fep_char_preview_window_g8

0xe3ed,	// (0x0004efd4) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb2,	// (0x00050999) bg_popup_fep_char_preview_window_g

0xc243,	// (0x0004ce2a) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc243,	// (0x0004ce2a) cell_vkb2_top_candi_pane_g1

0xc584,	// (0x0004d16b) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc584,	// (0x0004d16b) cell_vkb2_top_candi_pane_g2

0xc5a5,	// (0x0004d18c) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5a5,	// (0x0004d18c) cell_vkb2_top_candi_pane_g3

0x85d0,	// (0x000491b7) cell_vkb2_top_candi_pane_g4_ParamLimits

0x85d0,	// (0x000491b7) cell_vkb2_top_candi_pane_g4

0xe3f5,	// (0x0004efdc) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe3f5,	// (0x0004efdc) cell_vkb2_top_candi_pane_g5

0xd7bc,	// (0x0004e3a3) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7bc,	// (0x0004e3a3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc7,	// (0x000509ae) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc7,	// (0x000509ae) cell_vkb2_top_candi_pane_g

0x85f1,	// (0x000491d8) cell_vkb2_top_candi_pane_t1

0x780e,	// (0x000483f5) aid_size_touch_slider_mark_ParamLimits

0x780e,	// (0x000483f5) aid_size_touch_slider_mark

0xdfde,	// (0x0004ebc5) grid_graphic2_catg_pane_ParamLimits

0xdfde,	// (0x0004ebc5) grid_graphic2_catg_pane

0xe07c,	// (0x0004ec63) popup_grid_graphic2_window_t1_ParamLimits

0xe07c,	// (0x0004ec63) popup_grid_graphic2_window_t1

0xe08e,	// (0x0004ec75) popup_grid_graphic2_window_t2_ParamLimits

0xe08e,	// (0x0004ec75) popup_grid_graphic2_window_t2

0x0001,

0xfd80,	// (0x00050967) popup_grid_graphic2_window_t_ParamLimits

0xfd80,	// (0x00050967) popup_grid_graphic2_window_t

0x0b3d,	// (0x00041724) bg_button_pane_cp05_ParamLimits

0xe20b,	// (0x0004edf2) cell_graphic2_control_pane_g1_ParamLimits

0xe416,	// (0x0004effd) cell_graphic2_catg_pane_ParamLimits

0xe416,	// (0x0004effd) cell_graphic2_catg_pane

0x099a,	// (0x00041581) bg_button_pane_cp12

0xe428,	// (0x0004f00f) cell_graphic2_catg_pane_g1

0xd8fa,	// (0x0004e4e1) cell_tb_ext_pane_t1_ParamLimits

0x83c0,	// (0x00048fa7) vkb2_top_cell_right_narrow_pane_ParamLimits

0x83c0,	// (0x00048fa7) vkb2_top_cell_right_narrow_pane

0x83d8,	// (0x00048fbf) vkb2_top_cell_right_wide_pane_ParamLimits

0x83d8,	// (0x00048fbf) vkb2_top_cell_right_wide_pane

0x7a82,	// (0x00048669) bg_vkb2_func_pane_ParamLimits

0x7a82,	// (0x00048669) bg_vkb2_func_pane

0x8449,	// (0x00049030) vkb2_top_cell_left_pane_g1_ParamLimits

0x7a82,	// (0x00048669) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7a82,	// (0x00048669) bg_vkb2_fuc_pane_cp03

0x84a7,	// (0x0004908e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99d2,	// (0x0004a5b9) bg_vkb2_func_pane_g1

0x99da,	// (0x0004a5c1) bg_vkb2_func_pane_g2

0x99ea,	// (0x0004a5d1) bg_vkb2_func_pane_g3

0x99e2,	// (0x0004a5c9) bg_vkb2_func_pane_g4

0x99f2,	// (0x0004a5d9) bg_vkb2_func_pane_g5

0x99fa,	// (0x0004a5e1) bg_vkb2_func_pane_g6

0x9a02,	// (0x0004a5e9) bg_vkb2_func_pane_g7

0x9a0a,	// (0x0004a5f1) bg_vkb2_func_pane_g8

0x99ca,	// (0x0004a5b1) bg_vkb2_func_pane_g9

0x0008,

0xfdd4,	// (0x000509bb) bg_vkb2_func_pane_g

0x7a82,	// (0x00048669) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7a82,	// (0x00048669) bg_vkb2_fuc_pane_cp01

0x8449,	// (0x00049030) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8449,	// (0x00049030) vkb2_top_cell_right_wide_pane_g1

0x7a82,	// (0x00048669) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7a82,	// (0x00048669) bg_vkb2_fuc_pane_cp02

0x84a7,	// (0x0004908e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x84a7,	// (0x0004908e) vkb2_top_cell_right_narrow_pane_g1

0xd511,	// (0x0004e0f8) aid_touch_area_decrease_ParamLimits

0xd511,	// (0x0004e0f8) aid_touch_area_decrease

0xd535,	// (0x0004e11c) aid_touch_area_increase_ParamLimits

0xd535,	// (0x0004e11c) aid_touch_area_increase

0xd54d,	// (0x0004e134) aid_touch_area_mute_ParamLimits

0xd54d,	// (0x0004e134) aid_touch_area_mute

0xd569,	// (0x0004e150) aid_touch_area_slider_ParamLimits

0xd569,	// (0x0004e150) aid_touch_area_slider

0xd657,	// (0x0004e23e) popup_slider_window_g4_ParamLimits

0xd657,	// (0x0004e23e) popup_slider_window_g4

0xd66f,	// (0x0004e256) popup_slider_window_g5_ParamLimits

0xd66f,	// (0x0004e256) popup_slider_window_g5

0xd691,	// (0x0004e278) popup_slider_window_g6_ParamLimits

0xd691,	// (0x0004e278) popup_slider_window_g6

0xd6cf,	// (0x0004e2b6) popup_slider_window_t2_ParamLimits

0xd6cf,	// (0x0004e2b6) popup_slider_window_t2

0x0001,

0xfcce,	// (0x000508b5) popup_slider_window_t_ParamLimits

0xfcce,	// (0x000508b5) popup_slider_window_t

0xd6e7,	// (0x0004e2ce) slider_pane_ParamLimits

0xd6e7,	// (0x0004e2ce) slider_pane

0xe431,	// (0x0004f018) slider_pane_g1_ParamLimits

0xe431,	// (0x0004f018) slider_pane_g1

0xe445,	// (0x0004f02c) slider_pane_g2_ParamLimits

0xe445,	// (0x0004f02c) slider_pane_g2

0xe45b,	// (0x0004f042) slider_pane_g3_ParamLimits

0xe45b,	// (0x0004f042) slider_pane_g3

0x0003,

0xfde7,	// (0x000509ce) slider_pane_g_ParamLimits

0xfde7,	// (0x000509ce) slider_pane_g

0x73fc,	// (0x00047fe3) popup_tb_float_extension_window_ParamLimits

0x73fc,	// (0x00047fe3) popup_tb_float_extension_window

0xe487,	// (0x0004f06e) aid_size_cell_tb_float_ext

0x099a,	// (0x00041581) bg_popup_sub_window_cp28

0xe493,	// (0x0004f07a) grid_tb_float_ext_pane

0xe49f,	// (0x0004f086) cell_tb_float_ext_pane_ParamLimits

0xe49f,	// (0x0004f086) cell_tb_float_ext_pane

0xe4bb,	// (0x0004f0a2) cell_tb_float_ext_pane_g1

0xe4c4,	// (0x0004f0ab) grid_highlight_pane_cp12

0x7bc9,	// (0x000487b0) cell_last_hwr_side_pane_ParamLimits

0x7bc9,	// (0x000487b0) cell_last_hwr_side_pane

0xbfc8,	// (0x0004cbaf) cell_last_hwr_side_pane_g1

0xe4cd,	// (0x0004f0b4) cell_last_hwr_side_pane_g2

0x0001,

0xfdf0,	// (0x000509d7) cell_last_hwr_side_pane_g

0x836f,	// (0x00048f56) vkb2_area_bottom_space_btn_pane_ParamLimits

0x836f,	// (0x00048f56) vkb2_area_bottom_space_btn_pane

0xc243,	// (0x0004ce2a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf50,	// (0x0004eb37) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x85f1,	// (0x000491d8) cell_vkb2_top_candi_pane_t1_ParamLimits

0x860f,	// (0x000491f6) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x860f,	// (0x000491f6) vkb2_area_bottom_space_btn_pane_g1

0x8649,	// (0x00049230) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8649,	// (0x00049230) vkb2_area_bottom_space_btn_pane_g2

0x867f,	// (0x00049266) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x867f,	// (0x00049266) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf5,	// (0x000509dc) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf5,	// (0x000509dc) vkb2_area_bottom_space_btn_pane_g

0x7b39,	// (0x00048720) cel_fep_hwr_func_pane_ParamLimits

0x7b39,	// (0x00048720) cel_fep_hwr_func_pane

0x7b75,	// (0x0004875c) cell_hwr_side_button_pane_ParamLimits

0x7b75,	// (0x0004875c) cell_hwr_side_button_pane

0xd92e,	// (0x0004e515) aid_area_touch_clock_ParamLimits

0x0b3d,	// (0x00041724) bg_uniindi_top_pane_ParamLimits

0xd942,	// (0x0004e529) uniindi_top_pane_g1_ParamLimits

0xd958,	// (0x0004e53f) uniindi_top_pane_g2_ParamLimits

0xd964,	// (0x0004e54b) uniindi_top_pane_g3_ParamLimits

0xd975,	// (0x0004e55c) uniindi_top_pane_g4_ParamLimits

0xfd06,	// (0x000508ed) uniindi_top_pane_g_ParamLimits

0xd982,	// (0x0004e569) uniindi_top_pane_t1_ParamLimits

0x0b3d,	// (0x00041724) bg_vkb2_func_pane_cp01_ParamLimits

0x0b3d,	// (0x00041724) bg_vkb2_func_pane_cp01

0xe4d6,	// (0x0004f0bd) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4d6,	// (0x0004f0bd) cel_fep_hwr_func_pane_g1

0x0b3d,	// (0x00041724) bg_vkb2_func_pane_cp02_ParamLimits

0x0b3d,	// (0x00041724) bg_vkb2_func_pane_cp02

0xe4d6,	// (0x0004f0bd) cell_hwr_side_button_pane_g1_ParamLimits

0xe4d6,	// (0x0004f0bd) cell_hwr_side_button_pane_g1

0x984f,	// (0x0004a436) status_pane_g4_ParamLimits

0x984f,	// (0x0004a436) status_pane_g4

0x9869,	// (0x0004a450) status_pane_t1

0xbd7b,	// (0x0004c962) form2_midp_gauge_slider_cont_pane

0xbd83,	// (0x0004c96a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd95,	// (0x0004c97c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbda7,	// (0x0004c98e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad2,	// (0x000506b9) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdb9,	// (0x0004c9a0) form2_midp_slider_pane_ParamLimits

0x7fd2,	// (0x00048bb9) aid_size_cell_func_vkb2_ParamLimits

0x7fd2,	// (0x00048bb9) aid_size_cell_func_vkb2

0xe473,	// (0x0004f05a) slider_pane_g4_ParamLimits

0xe473,	// (0x0004f05a) slider_pane_g4

0x86c9,	// (0x000492b0) form2_midp_gauge_slider_pane_t2_cp01

0x86d7,	// (0x000492be) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x86d7,	// (0x000492be) form2_midp_gauge_slider_pane_t3_cp01

0x86f4,	// (0x000492db) form2_midp_slider_pane_cp01

0x099a,	// (0x00041581) navi_smil_pane

0xe50f,	// (0x0004f0f6) navi_smil_pane_g1

0xe517,	// (0x0004f0fe) navi_smil_pane_t1

0xe4e4,	// (0x0004f0cb) form2_midp_slider_pane_g1

0xe4ed,	// (0x0004f0d4) form2_midp_slider_pane_g2

0xe4f5,	// (0x0004f0dc) form2_midp_slider_pane_g3

0xe4e4,	// (0x0004f0cb) form2_midp_slider_pane_g4

0xe4fd,	// (0x0004f0e4) form2_midp_slider_pane_g5

0x0004,

0xfdfe,	// (0x000509e5) form2_midp_slider_pane_g

0x86b9,	// (0x000492a0) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x86b9,	// (0x000492a0) vkb2_area_bottom_space_btn_pane_g4

0x966e,	// (0x0004a255) lc0_navi_pane_ParamLimits

0x966e,	// (0x0004a255) lc0_navi_pane

0x96ea,	// (0x0004a2d1) lc0_stat_indi_pane_ParamLimits

0x96ea,	// (0x0004a2d1) lc0_stat_indi_pane

0x9701,	// (0x0004a2e8) ls0_title_pane_ParamLimits

0x9701,	// (0x0004a2e8) ls0_title_pane

0x104c,	// (0x00041c33) bg_popup_sub_pane_cp14_ParamLimits

0xd915,	// (0x0004e4fc) list_uniindi_pane_ParamLimits

0xd921,	// (0x0004e508) uniindi_top_pane_ParamLimits

0xd9c1,	// (0x0004e5a8) list_single_uniindi_pane_g1_ParamLimits

0xd9d4,	// (0x0004e5bb) list_single_uniindi_pane_t1_ParamLimits

0x86fd,	// (0x000492e4) lc0_stat_clock_pane_ParamLimits

0x86fd,	// (0x000492e4) lc0_stat_clock_pane

0xe525,	// (0x0004f10c) lc0_stat_indi_pane_g1_ParamLimits

0xe525,	// (0x0004f10c) lc0_stat_indi_pane_g1

0xe532,	// (0x0004f119) lc0_stat_indi_pane_g2_ParamLimits

0xe532,	// (0x0004f119) lc0_stat_indi_pane_g2

0x0001,

0xfe09,	// (0x000509f0) lc0_stat_indi_pane_g_ParamLimits

0xfe09,	// (0x000509f0) lc0_stat_indi_pane_g

0x870a,	// (0x000492f1) lc0_uni_indicator_pane_ParamLimits

0x870a,	// (0x000492f1) lc0_uni_indicator_pane

0xe53f,	// (0x0004f126) ls0_title_pane_g1_ParamLimits

0xe53f,	// (0x0004f126) ls0_title_pane_g1

0xe553,	// (0x0004f13a) ls0_title_pane_t1_ParamLimits

0xe553,	// (0x0004f13a) ls0_title_pane_t1

0x8717,	// (0x000492fe) lc0_uni_indicator_pane_g1_ParamLimits

0x8717,	// (0x000492fe) lc0_uni_indicator_pane_g1

0xe589,	// (0x0004f170) lc0_stat_clock_pane_t1

0x099a,	// (0x00041581) main_ai5_pane

0xe597,	// (0x0004f17e) ai5_sk_pane_ParamLimits

0xe597,	// (0x0004f17e) ai5_sk_pane

0xe5a4,	// (0x0004f18b) cell_ai5_widget_pane_ParamLimits

0xe5a4,	// (0x0004f18b) cell_ai5_widget_pane

0xe647,	// (0x0004f22e) aid_size_cell_widget_grid

0xe655,	// (0x0004f23c) bg_ai5_widget_pane_ParamLimits

0xe655,	// (0x0004f23c) bg_ai5_widget_pane

0xe6d1,	// (0x0004f2b8) cell_ai5_widget_pane_g2

0xe6e5,	// (0x0004f2cc) cell_ai5_widget_pane_g3

0xe6ff,	// (0x0004f2e6) cell_ai5_widget_pane_g4

0xe70f,	// (0x0004f2f6) cell_ai5_widget_pane_g5

0xe71f,	// (0x0004f306) cell_ai5_widget_pane_g6

0xe72b,	// (0x0004f312) cell_ai5_widget_pane_g7

0xe797,	// (0x0004f37e) cell_ai5_widget_pane_t1_ParamLimits

0xe797,	// (0x0004f37e) cell_ai5_widget_pane_t1

0xe7b4,	// (0x0004f39b) cell_ai5_widget_pane_t2_ParamLimits

0xe7b4,	// (0x0004f39b) cell_ai5_widget_pane_t2

0xe7cc,	// (0x0004f3b3) cell_ai5_widget_pane_t3_ParamLimits

0xe7cc,	// (0x0004f3b3) cell_ai5_widget_pane_t3

0xe7e4,	// (0x0004f3cb) cell_ai5_widget_pane_t4_ParamLimits

0xe7e4,	// (0x0004f3cb) cell_ai5_widget_pane_t4

0xe80a,	// (0x0004f3f1) cell_ai5_widget_pane_t5_ParamLimits

0xe80a,	// (0x0004f3f1) cell_ai5_widget_pane_t5

0xe82a,	// (0x0004f411) cell_ai5_widget_pane_t6_ParamLimits

0xe82a,	// (0x0004f411) cell_ai5_widget_pane_t6

0xe83c,	// (0x0004f423) cell_ai5_widget_pane_t7_ParamLimits

0xe83c,	// (0x0004f423) cell_ai5_widget_pane_t7

0xe85b,	// (0x0004f442) cell_ai5_widget_pane_t8_ParamLimits

0xe85b,	// (0x0004f442) cell_ai5_widget_pane_t8

0x000b,

0xfe29,	// (0x00050a10) cell_ai5_widget_pane_t_ParamLimits

0xfe29,	// (0x00050a10) cell_ai5_widget_pane_t

0xe8df,	// (0x0004f4c6) grid_ai5_widget_pane

0x104c,	// (0x00041c33) highlight_cell_ai5_widget_pane_ParamLimits

0x104c,	// (0x00041c33) highlight_cell_ai5_widget_pane

0xe8ed,	// (0x0004f4d4) ai5_sk_left_pane

0xe8f7,	// (0x0004f4de) ai5_sk_middle_pane

0xe901,	// (0x0004f4e8) ai5_sk_right_pane

0xe90b,	// (0x0004f4f2) bg_ai5_widget_pane_g1_ParamLimits

0xe90b,	// (0x0004f4f2) bg_ai5_widget_pane_g1

0xe917,	// (0x0004f4fe) bg_ai5_widget_pane_g2_ParamLimits

0xe917,	// (0x0004f4fe) bg_ai5_widget_pane_g2

0xe923,	// (0x0004f50a) bg_ai5_widget_pane_g3_ParamLimits

0xe923,	// (0x0004f50a) bg_ai5_widget_pane_g3

0xe92f,	// (0x0004f516) bg_ai5_widget_pane_g4_ParamLimits

0xe92f,	// (0x0004f516) bg_ai5_widget_pane_g4

0xe93b,	// (0x0004f522) bg_ai5_widget_pane_g5_ParamLimits

0xe93b,	// (0x0004f522) bg_ai5_widget_pane_g5

0xe947,	// (0x0004f52e) bg_ai5_widget_pane_g6_ParamLimits

0xe947,	// (0x0004f52e) bg_ai5_widget_pane_g6

0xe953,	// (0x0004f53a) bg_ai5_widget_pane_g7_ParamLimits

0xe953,	// (0x0004f53a) bg_ai5_widget_pane_g7

0xe95f,	// (0x0004f546) bg_ai5_widget_pane_g8_ParamLimits

0xe95f,	// (0x0004f546) bg_ai5_widget_pane_g8

0xe96b,	// (0x0004f552) bg_ai5_widget_pane_g9_ParamLimits

0xe96b,	// (0x0004f552) bg_ai5_widget_pane_g9

0x0008,

0xfe42,	// (0x00050a29) bg_ai5_widget_pane_g_ParamLimits

0xfe42,	// (0x00050a29) bg_ai5_widget_pane_g

0xe9a3,	// (0x0004f58a) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9a3,	// (0x0004f58a) cell_shortcut_ai5_widget_pane

0x916d,	// (0x00049d54) bg_cell_shortcut_ai5_widget_pane

0xe9b6,	// (0x0004f59d) cell_grid_ai5_widget_pane_g1

0x916d,	// (0x00049d54) highlight_cell_shortcut_ai5_widget_pane

0x99da,	// (0x0004a5c1) ai5_sk_left_pane_g1

0xe9bf,	// (0x0004f5a6) ai5_sk_left_pane_g2

0xe9c7,	// (0x0004f5ae) ai5_sk_left_pane_g3

0xe9cf,	// (0x0004f5b6) ai5_sk_left_pane_g4

0x0003,

0xfe55,	// (0x00050a3c) ai5_sk_left_pane_g

0xe9d7,	// (0x0004f5be) ai5_sk_left_pane_t1

0x99d2,	// (0x0004a5b9) ai5_sk_right_pane_g1

0xe9e5,	// (0x0004f5cc) ai5_sk_right_pane_g2

0xe9ed,	// (0x0004f5d4) ai5_sk_right_pane_g3

0xe9f5,	// (0x0004f5dc) ai5_sk_right_pane_g4

0x0003,

0xfe5e,	// (0x00050a45) ai5_sk_right_pane_g

0xe9fd,	// (0x0004f5e4) ai5_sk_right_pane_t1

0x99d2,	// (0x0004a5b9) ai5_sk_middle_pane_g1

0x99da,	// (0x0004a5c1) ai5_sk_middle_pane_g2

0x99f2,	// (0x0004a5d9) ai5_sk_middle_pane_g3

0xe9ed,	// (0x0004f5d4) ai5_sk_middle_pane_g4

0xe9c7,	// (0x0004f5ae) ai5_sk_middle_pane_g5

0xea0b,	// (0x0004f5f2) ai5_sk_middle_pane_g6

0xea13,	// (0x0004f5fa) ai5_sk_middle_pane_g7

0x0006,

0xfe67,	// (0x00050a4e) ai5_sk_middle_pane_g

0x94f4,	// (0x0004a0db) aid_touch_area_size_lc0_ParamLimits

0x94f4,	// (0x0004a0db) aid_touch_area_size_lc0

0x7cd8,	// (0x000488bf) cell_hwr_candidate_pane_t1_ParamLimits

0x9512,	// (0x0004a0f9) aid_touch_navi_pane

0x9801,	// (0x0004a3e8) status_dt_navi_pane_ParamLimits

0x9801,	// (0x0004a3e8) status_dt_navi_pane

0x980e,	// (0x0004a3f5) status_dt_sta_pane_ParamLimits

0x980e,	// (0x0004a3f5) status_dt_sta_pane

0xea1b,	// (0x0004f602) dt_sta_controll_pane

0xea28,	// (0x0004f60f) dt_sta_indi_pane

0xea39,	// (0x0004f620) dt_sta_title_pane

0x0b3d,	// (0x00041724) bg_dt_sta_indi_pane_ParamLimits

0x0b3d,	// (0x00041724) bg_dt_sta_indi_pane

0xea4c,	// (0x0004f633) dt_sta_battery_pane

0xea54,	// (0x0004f63b) dt_sta_indi_pane_g1

0xea5d,	// (0x0004f644) dt_sta_indi_pane_g2

0xea66,	// (0x0004f64d) dt_sta_indi_pane_g3

0x0002,

0xfe76,	// (0x00050a5d) dt_sta_indi_pane_g

0xea6f,	// (0x0004f656) dt_sta_signal_pane

0x104c,	// (0x00041c33) bg_dt_sta_title_pane_ParamLimits

0x104c,	// (0x00041c33) bg_dt_sta_title_pane

0xea78,	// (0x0004f65f) dt_sta_title_pane_g1

0xea80,	// (0x0004f667) dt_sta_title_pane_t1_ParamLimits

0xea80,	// (0x0004f667) dt_sta_title_pane_t1

0x099a,	// (0x00041581) bg_dt_sta_control_pane

0xea95,	// (0x0004f67c) dt_sta_controll_pane_g1

0xea9e,	// (0x0004f685) bg_dt_sta_title_pane_g1

0xeaa7,	// (0x0004f68e) bg_dt_sta_title_pane_g2

0xeab0,	// (0x0004f697) bg_dt_sta_title_pane_g3

0x0002,

0xfe7d,	// (0x00050a64) bg_dt_sta_title_pane_g

0xbfc8,	// (0x0004cbaf) bg_dt_sta_indi_pane_g1

0xeab9,	// (0x0004f6a0) dt_sta_signal_pane_g1

0xeac1,	// (0x0004f6a8) dt_sta_signal_pane_g2

0x0001,

0xfe84,	// (0x00050a6b) dt_sta_signal_pane_g

0xeac9,	// (0x0004f6b0) dt_sta_battery_pane_g1

0xead2,	// (0x0004f6b9) dt_sta_battery_pane_t1

0xbfc8,	// (0x0004cbaf) bg_dt_sta_control_pane_g1

0x8c6b,	// (0x00049852) fep_china_uni_eep_pane

0x8c73,	// (0x0004985a) fep_china_uni_entry_pane_ParamLimits

0x8c83,	// (0x0004986a) popup_fep_china_uni_window_g1_ParamLimits

0x8c93,	// (0x0004987a) popup_fep_china_uni_window_g2_ParamLimits

0x8c93,	// (0x0004987a) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x000502e4) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x000502e4) popup_fep_china_uni_window_g

0xeae1,	// (0x0004f6c8) fep_china_uni_eep_pane_g1

0xeae9,	// (0x0004f6d0) fep_china_uni_eep_pane_t1

0xe506,	// (0x0004f0ed) aid_touch_area_size_smil_player

0x9666,	// (0x0004a24d) lc0_clock_pane

0x985d,	// (0x0004a444) status_pane_g5_ParamLimits

0x985d,	// (0x0004a444) status_pane_g5

0x7081,	// (0x00047c68) popup_keymap_window

0x9823,	// (0x0004a40a) status_icon_pane

0xe6e5,	// (0x0004f2cc) cell_ai5_widget_pane_g3_ParamLimits

0xe6ff,	// (0x0004f2e6) cell_ai5_widget_pane_g4_ParamLimits

0xe70f,	// (0x0004f2f6) cell_ai5_widget_pane_g5_ParamLimits

0xe737,	// (0x0004f31e) cell_ai5_widget_pane_g8_ParamLimits

0xe737,	// (0x0004f31e) cell_ai5_widget_pane_g8

0xe74b,	// (0x0004f332) cell_ai5_widget_pane_g9_ParamLimits

0xe74b,	// (0x0004f332) cell_ai5_widget_pane_g9

0xe75f,	// (0x0004f346) cell_ai5_widget_pane_g10_ParamLimits

0xe75f,	// (0x0004f346) cell_ai5_widget_pane_g10

0xeaf8,	// (0x0004f6df) status_icon_pane_g1

0x099a,	// (0x00041581) bg_popup_sub_pane_cp13

0xeb00,	// (0x0004f6e7) popup_keymap_window_t1

0x9445,	// (0x0004a02c) control_pane_g6_ParamLimits

0x9445,	// (0x0004a02c) control_pane_g6

0x9452,	// (0x0004a039) control_pane_g7_ParamLimits

0x9452,	// (0x0004a039) control_pane_g7

0x945f,	// (0x0004a046) control_pane_g8_ParamLimits

0x945f,	// (0x0004a046) control_pane_g8

0xea1b,	// (0x0004f602) dt_sta_controll_pane_ParamLimits

0xea28,	// (0x0004f60f) dt_sta_indi_pane_ParamLimits

0xea39,	// (0x0004f620) dt_sta_title_pane_ParamLimits

0x0f8e,	// (0x00041b75) aid_size_touch_scroll_bar_cale

0x614c,	// (0x00046d33) popup_discreet_window_ParamLimits

0x614c,	// (0x00046d33) popup_discreet_window

0x61da,	// (0x00046dc1) popup_sk_window

0xa030,	// (0x0004ac17) bg_popup_sub_pane_cp28_ParamLimits

0xa030,	// (0x0004ac17) bg_popup_sub_pane_cp28

0xeb0e,	// (0x0004f6f5) popup_discreet_window_g1_ParamLimits

0xeb0e,	// (0x0004f6f5) popup_discreet_window_g1

0xeb2e,	// (0x0004f715) popup_discreet_window_t1_ParamLimits

0xeb2e,	// (0x0004f715) popup_discreet_window_t1

0xeb4c,	// (0x0004f733) popup_discreet_window_t2_ParamLimits

0xeb4c,	// (0x0004f733) popup_discreet_window_t2

0x0002,

0xfe89,	// (0x00050a70) popup_discreet_window_t_ParamLimits

0xfe89,	// (0x00050a70) popup_discreet_window_t

0x872a,	// (0x00049311) popup_sk_window_g1

0x8734,	// (0x0004931b) popup_sk_window_g2

0x0001,

0xfe90,	// (0x00050a77) popup_sk_window_g

0x873c,	// (0x00049323) popup_sk_window_t1

0x874a,	// (0x00049331) popup_sk_window_t1_copy1

0xe6d1,	// (0x0004f2b8) cell_ai5_widget_pane_g2_ParamLimits

0xe86d,	// (0x0004f454) cell_ai5_widget_pane_t9_ParamLimits

0xe86d,	// (0x0004f454) cell_ai5_widget_pane_t9

0x099a,	// (0x00041581) main_fep_fshwr2_pane

0x8758,	// (0x0004933f) aid_fshwr2_btn_pane

0x8764,	// (0x0004934b) aid_fshwr2_syb_pane

0x8776,	// (0x0004935d) aid_fshwr2_txt_pane

0x8782,	// (0x00049369) fshwr2_func_candi_pane

0x879a,	// (0x00049381) fshwr2_hwr_syb_pane

0x87b0,	// (0x00049397) fshwr2_icf_pane

0x099a,	// (0x00041581) fshwr2_icf_bg_pane

0x87e4,	// (0x000493cb) fshwr2_icf_pane_t1_ParamLimits

0x87e4,	// (0x000493cb) fshwr2_icf_pane_t1

0x8b61,	// (0x00049748) fshwr2_func_candi_pane_g1

0xeb9e,	// (0x0004f785) fshwr2_func_candi_row_pane_ParamLimits

0xeb9e,	// (0x0004f785) fshwr2_func_candi_row_pane

0x87fc,	// (0x000493e3) cell_fshwr2_syb_pane_ParamLimits

0x87fc,	// (0x000493e3) cell_fshwr2_syb_pane

0xe4d6,	// (0x0004f0bd) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4d6,	// (0x0004f0bd) fshwr2_hwr_syb_pane_g1

0x099a,	// (0x00041581) bg_popup_call_pane_cp01

0x881d,	// (0x00049404) fshwr2_func_candi_cell_pane_ParamLimits

0x881d,	// (0x00049404) fshwr2_func_candi_cell_pane

0xa6a7,	// (0x0004b28e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa6a7,	// (0x0004b28e) fshwr2_func_candi_cell_bg_pane

0x886e,	// (0x00049455) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x886e,	// (0x00049455) fshwr2_func_candi_cell_pane_g1

0x888e,	// (0x00049475) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x888e,	// (0x00049475) fshwr2_func_candi_cell_pane_t1

0x099a,	// (0x00041581) bg_button_pane_cp08

0x9494,	// (0x0004a07b) cell_fshwr2_syb_bg_pane

0x88a1,	// (0x00049488) cell_fshwr2_syb_bg_pane_g1

0x88b5,	// (0x0004949c) cell_fshwr2_syb_bg_pane_t1

0x104c,	// (0x00041c33) main_tmo_pane

0xab54,	// (0x0004b73b) uni_indicator_pane_g1_ParamLimits

0xab6a,	// (0x0004b751) uni_indicator_pane_g2_ParamLimits

0xab80,	// (0x0004b767) uni_indicator_pane_g3_ParamLimits

0xab93,	// (0x0004b77a) uni_indicator_pane_g4_ParamLimits

0xab93,	// (0x0004b77a) uni_indicator_pane_g4

0xaba7,	// (0x0004b78e) uni_indicator_pane_g5_ParamLimits

0xaba7,	// (0x0004b78e) uni_indicator_pane_g5

0xaba7,	// (0x0004b78e) uni_indicator_pane_g6_ParamLimits

0xaba7,	// (0x0004b78e) uni_indicator_pane_g6

0xf901,	// (0x000504e8) uni_indicator_pane_g_ParamLimits

0xd4e1,	// (0x0004e0c8) popup_tmo_note_window_ParamLimits

0xd4e1,	// (0x0004e0c8) popup_tmo_note_window

0x104c,	// (0x00041c33) fshwr2_bg_pane

0x887f,	// (0x00049466) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x887f,	// (0x00049466) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe95,	// (0x00050a7c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe95,	// (0x00050a7c) fshwr2_func_candi_cell_pane_g

0xbfc8,	// (0x0004cbaf) bg_popup_window_pane_cp01

0x88c8,	// (0x000494af) bg_popup_window_pane_g1_cp01

0xebc1,	// (0x0004f7a8) bg_popup_window_pane_cp22_ParamLimits

0xebc1,	// (0x0004f7a8) bg_popup_window_pane_cp22

0xebcf,	// (0x0004f7b6) listscroll_tmo_link_pane_ParamLimits

0xebcf,	// (0x0004f7b6) listscroll_tmo_link_pane

0xec0f,	// (0x0004f7f6) popup_tmo_note_window_g1_ParamLimits

0xec0f,	// (0x0004f7f6) popup_tmo_note_window_g1

0xec1c,	// (0x0004f803) tmo_note_info_pane_ParamLimits

0xec1c,	// (0x0004f803) tmo_note_info_pane

0xec36,	// (0x0004f81d) list_tmo_note_info_pane_g1_ParamLimits

0xec36,	// (0x0004f81d) list_tmo_note_info_pane_g1

0xec4d,	// (0x0004f834) list_tmo_note_info_pane_g2_ParamLimits

0xec4d,	// (0x0004f834) list_tmo_note_info_pane_g2

0x0001,

0xfe9a,	// (0x00050a81) list_tmo_note_info_pane_g_ParamLimits

0xfe9a,	// (0x00050a81) list_tmo_note_info_pane_g

0xec69,	// (0x0004f850) list_tmo_note_info_text_pane_ParamLimits

0xec69,	// (0x0004f850) list_tmo_note_info_text_pane

0xecee,	// (0x0004f8d5) list_tmo_link_pane

0xecfb,	// (0x0004f8e2) scroll_pane_cp20

0xed08,	// (0x0004f8ef) list_single_tmo_link_pane_ParamLimits

0xed08,	// (0x0004f8ef) list_single_tmo_link_pane

0xed18,	// (0x0004f8ff) list_single_tmo_link_pane_t1

0xed26,	// (0x0004f90d) list_tmo_note_info_text_pane_t1_ParamLimits

0xed26,	// (0x0004f90d) list_tmo_note_info_text_pane_t1

0x6711,	// (0x000472f8) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6711,	// (0x000472f8) aid_size_touch_scroll_bar_cp01

0x5581,	// (0x00046168) aid_size_touch_slider_marker

0x61c2,	// (0x00046da9) popup_settings_window_ParamLimits

0x61c2,	// (0x00046da9) popup_settings_window

0x56f7,	// (0x000462de) popup_candi_list_indi_window

0x9512,	// (0x0004a0f9) aid_touch_navi_pane_ParamLimits

0x7f29,	// (0x00048b10) rs_clock_indi_pane

0x7f32,	// (0x00048b19) sctrl_sk_bottom_pane_ParamLimits

0x7f43,	// (0x00048b2a) sctrl_sk_top_pane_ParamLimits

0x802c,	// (0x00048c13) popup_fep_tooltip_window

0xe647,	// (0x0004f22e) aid_size_cell_widget_grid_ParamLimits

0xe6bc,	// (0x0004f2a3) cell_ai5_widget_pane_g1_ParamLimits

0xe6bc,	// (0x0004f2a3) cell_ai5_widget_pane_g1

0xe71f,	// (0x0004f306) cell_ai5_widget_pane_g6_ParamLimits

0xe72b,	// (0x0004f312) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0e,	// (0x000509f5) cell_ai5_widget_pane_g_ParamLimits

0xfe0e,	// (0x000509f5) cell_ai5_widget_pane_g

0xe89c,	// (0x0004f483) cell_ai5_widget_pane_t10_ParamLimits

0xe89c,	// (0x0004f483) cell_ai5_widget_pane_t10

0xe8df,	// (0x0004f4c6) grid_ai5_widget_pane_ParamLimits

0xe977,	// (0x0004f55e) cell_contacts_ai5_widget_pane_ParamLimits

0xe977,	// (0x0004f55e) cell_contacts_ai5_widget_pane

0xeb61,	// (0x0004f748) popup_discreet_window_t3_ParamLimits

0xeb61,	// (0x0004f748) popup_discreet_window_t3

0x87cc,	// (0x000493b3) popup_fshwr2_char_preview_window_ParamLimits

0x87cc,	// (0x000493b3) popup_fshwr2_char_preview_window

0xec87,	// (0x0004f86e) tmo_note_info_pane_t1

0xec9c,	// (0x0004f883) tmo_note_info_pane_t2

0xecb5,	// (0x0004f89c) tmo_note_info_pane_t3

0xecca,	// (0x0004f8b1) tmo_note_info_pane_t4

0xecdc,	// (0x0004f8c3) tmo_note_info_pane_t5

0x0004,

0xfe9f,	// (0x00050a86) tmo_note_info_pane_t

0xecee,	// (0x0004f8d5) list_tmo_link_pane_ParamLimits

0xecfb,	// (0x0004f8e2) scroll_pane_cp20_ParamLimits

0x099a,	// (0x00041581) bg_popup_fep_char_preview_window_cp01

0xed3f,	// (0x0004f926) popup_fshwr2_char_preview_window_t1

0xed4d,	// (0x0004f934) popup_candi_list_indi_window_g1

0xed56,	// (0x0004f93d) bg_cell_contacts_ai5_widget_pane

0xed62,	// (0x0004f949) cell_contacts_ai5_widget_pane_g1

0xed77,	// (0x0004f95e) cell_contacts_ai5_widget_pane_g2

0xed83,	// (0x0004f96a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeaa,	// (0x00050a91) cell_contacts_ai5_widget_pane_g

0xed8f,	// (0x0004f976) cell_contacts_ai5_widget_pane_t1

0x104c,	// (0x00041c33) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee06,	// (0x0004f9ed) settings_container_pane

0x916d,	// (0x00049d54) listscroll_set_pane_copy1

0xb6f9,	// (0x0004c2e0) scroll_pane_cp121_copy1

0xee12,	// (0x0004f9f9) set_content_pane_copy1

0xee1a,	// (0x0004fa01) aid_height_set_list_copy1_ParamLimits

0xee1a,	// (0x0004fa01) aid_height_set_list_copy1

0xada7,	// (0x0004b98e) aid_size_parent_copy1_ParamLimits

0xada7,	// (0x0004b98e) aid_size_parent_copy1

0xee26,	// (0x0004fa0d) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee26,	// (0x0004fa0d) button_value_adjust_pane_cp6_copy1

0x9494,	// (0x0004a07b) list_highlight_pane_cp2_copy1_ParamLimits

0x9494,	// (0x0004a07b) list_highlight_pane_cp2_copy1

0xee3a,	// (0x0004fa21) list_set_pane_copy1_ParamLimits

0xee3a,	// (0x0004fa21) list_set_pane_copy1

0xeda1,	// (0x0004f988) main_pane_set_t1_copy1_ParamLimits

0xeda1,	// (0x0004f988) main_pane_set_t1_copy1

0xeddb,	// (0x0004f9c2) main_pane_set_t2_copy1_ParamLimits

0xeddb,	// (0x0004f9c2) main_pane_set_t2_copy1

0xeefb,	// (0x0004fae2) main_pane_set_t3_copy1

0xef09,	// (0x0004faf0) main_pane_set_t4_copy1

0xedfa,	// (0x0004f9e1) set_content_pane_g1_copy1_ParamLimits

0xedfa,	// (0x0004f9e1) set_content_pane_g1_copy1

0xef17,	// (0x0004fafe) setting_code_pane_copy1

0xef1f,	// (0x0004fb06) setting_slider_graphic_pane_copy1

0xef1f,	// (0x0004fb06) setting_slider_pane_copy1

0xef27,	// (0x0004fb0e) setting_text_pane_copy1

0xef27,	// (0x0004fb0e) setting_volume_pane_copy1

0xef17,	// (0x0004fafe) settings_code_pane_cp2_copy1

0xef2f,	// (0x0004fb16) settings_code_pane_cp_copy1_ParamLimits

0xef2f,	// (0x0004fb16) settings_code_pane_cp_copy1

0x88d1,	// (0x000494b8) volume_set_pane_copy1

0xef43,	// (0x0004fb2a) volume_set_pane_g10_copy1

0xef4f,	// (0x0004fb36) volume_set_pane_g1_copy1

0xef59,	// (0x0004fb40) volume_set_pane_g2_copy1

0xef63,	// (0x0004fb4a) volume_set_pane_g3_copy1

0xef6d,	// (0x0004fb54) volume_set_pane_g4_copy1

0xef77,	// (0x0004fb5e) volume_set_pane_g5_copy1

0xef81,	// (0x0004fb68) volume_set_pane_g6_copy1

0xef8b,	// (0x0004fb72) volume_set_pane_g7_copy1

0xef95,	// (0x0004fb7c) volume_set_pane_g8_copy1

0xef9f,	// (0x0004fb86) volume_set_pane_g9_copy1

0x0a0a,	// (0x000415f1) bg_set_opt_pane_cp_copy1_ParamLimits

0x0a0a,	// (0x000415f1) bg_set_opt_pane_cp_copy1

0x88dd,	// (0x000494c4) setting_slider_pane_t1_copy1_ParamLimits

0x88dd,	// (0x000494c4) setting_slider_pane_t1_copy1

0x88fc,	// (0x000494e3) setting_slider_pane_t2_copy1_ParamLimits

0x88fc,	// (0x000494e3) setting_slider_pane_t2_copy1

0x8916,	// (0x000494fd) setting_slider_pane_t3_copy1_ParamLimits

0x8916,	// (0x000494fd) setting_slider_pane_t3_copy1

0x892e,	// (0x00049515) slider_set_pane_copy1_ParamLimits

0x892e,	// (0x00049515) slider_set_pane_copy1

0x10a4,	// (0x00041c8b) set_opt_bg_pane_g1_copy2

0x10ac,	// (0x00041c93) set_opt_bg_pane_g2_copy2

0xefab,	// (0x0004fb92) set_opt_bg_pane_g3_copy2

0x10bc,	// (0x00041ca3) set_opt_bg_pane_g4_copy2

0x10c4,	// (0x00041cab) set_opt_bg_pane_g5_copy2

0x10cc,	// (0x00041cb3) set_opt_bg_pane_g6_copy2

0xefb5,	// (0x0004fb9c) set_opt_bg_pane_g7_copy2

0xefbf,	// (0x0004fba6) set_opt_bg_pane_g8_copy2

0xefc9,	// (0x0004fbb0) set_opt_bg_pane_g9_copy2

0x8944,	// (0x0004952b) aid_size_touch_slider_mark_copy1_ParamLimits

0x8944,	// (0x0004952b) aid_size_touch_slider_mark_copy1

0xefd3,	// (0x0004fbba) slider_set_pane_g1_copy1

0x8958,	// (0x0004953f) slider_set_pane_g2_copy1

0x782e,	// (0x00048415) slider_set_pane_g3_copy1_ParamLimits

0x782e,	// (0x00048415) slider_set_pane_g3_copy1

0x7842,	// (0x00048429) slider_set_pane_g4_copy1_ParamLimits

0x7842,	// (0x00048429) slider_set_pane_g4_copy1

0x785a,	// (0x00048441) slider_set_pane_g5_copy1_ParamLimits

0x785a,	// (0x00048441) slider_set_pane_g5_copy1

0x782e,	// (0x00048415) slider_set_pane_g6_copy1_ParamLimits

0x782e,	// (0x00048415) slider_set_pane_g6_copy1

0x8960,	// (0x00049547) slider_set_pane_g7_copy1_ParamLimits

0x8960,	// (0x00049547) slider_set_pane_g7_copy1

0x09ae,	// (0x00041595) bg_set_opt_pane_cp2_copy1

0xefdc,	// (0x0004fbc3) setting_slider_graphic_pane_g1_copy1

0xefe5,	// (0x0004fbcc) setting_slider_graphic_pane_t1_copy1

0xeff5,	// (0x0004fbdc) setting_slider_graphic_pane_t2_copy1

0xf005,	// (0x0004fbec) slider_set_pane_cp_copy1

0xf015,	// (0x0004fbfc) input_focus_pane_cp1_copy1

0xf01e,	// (0x0004fc05) list_set_text_pane_copy1

0xf026,	// (0x0004fc0d) setting_text_pane_g1_copy1

0x4f7c,	// (0x00045b63) set_text_pane_t1_copy1

0xf015,	// (0x0004fbfc) input_focus_pane_cp2_copy1

0xf026,	// (0x0004fc0d) setting_code_pane_g1_copy1

0xf02f,	// (0x0004fc16) setting_code_pane_t1_copy1

0xb4fe,	// (0x0004c0e5) list_set_graphic_pane_copy1

0x09ae,	// (0x00041595) bg_set_opt_pane_cp4_copy1

0x8e68,	// (0x00049a4f) list_set_graphic_pane_g1_copy1_ParamLimits

0x8e68,	// (0x00049a4f) list_set_graphic_pane_g1_copy1

0xf03d,	// (0x0004fc24) list_set_graphic_pane_g2_copy1

0x8e80,	// (0x00049a67) list_set_graphic_pane_t1_copy1_ParamLimits

0x8e80,	// (0x00049a67) list_set_graphic_pane_t1_copy1

0xbfc8,	// (0x0004cbaf) rs_clock_indi_pane_g1

0xf045,	// (0x0004fc2c) rs_clock_indi_pane_t1

0xf053,	// (0x0004fc3a) rs_indi_pane

0xf05b,	// (0x0004fc42) rs_indi_pane_g1

0xf064,	// (0x0004fc4b) rs_indi_pane_g2

0xf06d,	// (0x0004fc54) rs_indi_pane_g3

0x0002,

0xfeb1,	// (0x00050a98) rs_indi_pane_g

0x916d,	// (0x00049d54) bg_popup_preview_window_pane_cp03

0xf076,	// (0x0004fc5d) popup_fep_tooltip_window_t1

0xcc8d,	// (0x0004d874) popup_note2_window_g2_ParamLimits

0xcc8d,	// (0x0004d874) popup_note2_window_g2

0x0001,

0xfc3e,	// (0x00050825) popup_note2_window_g_ParamLimits

0xfc3e,	// (0x00050825) popup_note2_window_g

0xd195,	// (0x0004dd7c) bg_popup_sub_pane_cp11_ParamLimits

0xd1a2,	// (0x0004dd89) cell_ai3_links_pane_g1_ParamLimits

0xd1b9,	// (0x0004dda0) cell_ai3_links_pane_t1

0x4f7c,	// (0x00045b63) set_text_pane_t1_copy1_ParamLimits

0x907a,	// (0x00049c61) cell_graphic_popup_pane_cp2_ParamLimits

0x907a,	// (0x00049c61) cell_graphic_popup_pane_cp2

0xf084,	// (0x0004fc6b) cell_graphic_popup_pane_g1_cp2

0x0da1,	// (0x00041988) cell_graphic_popup_pane_g2_cp2

0xf08c,	// (0x0004fc73) cell_graphic_popup_pane_g3_cp2

0xf094,	// (0x0004fc7b) cell_graphic_popup_pane_t2_cp2

0x0db2,	// (0x00041999) grid_highlight_pane_cp3_cp2

0x42c4,	// (0x00044eab) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x104c,	// (0x00041c33) main_tmo_pane_ParamLimits

0xd4d5,	// (0x0004e0bc) popup_tmo_big_image_note_window

0xe6ab,	// (0x0004f292) cell_ai5_widget_list_pane

0xe6b3,	// (0x0004f29a) cell_ai5_widget_lrg_icon_pane

0xec87,	// (0x0004f86e) tmo_note_info_pane_t1_ParamLimits

0xec9c,	// (0x0004f883) tmo_note_info_pane_t2_ParamLimits

0xecb5,	// (0x0004f89c) tmo_note_info_pane_t3_ParamLimits

0xecca,	// (0x0004f8b1) tmo_note_info_pane_t4_ParamLimits

0xecdc,	// (0x0004f8c3) tmo_note_info_pane_t5_ParamLimits

0xfe9f,	// (0x00050a86) tmo_note_info_pane_t_ParamLimits

0xee06,	// (0x0004f9ed) settings_container_pane_ParamLimits

0xf00d,	// (0x0004fbf4) indicator_popup_pane_cp5

0xf00d,	// (0x0004fbf4) indicator_popup_pane_cp6

0xb4fe,	// (0x0004c0e5) list_set_graphic_pane_copy1_ParamLimits

0x099a,	// (0x00041581) bg_popup_window_pane_cp23

0xf0a2,	// (0x0004fc89) popup_tmo_big_image_note_window_g1

0xf0ae,	// (0x0004fc95) popup_tmo_big_image_note_window_t1

0xf0be,	// (0x0004fca5) popup_tmo_big_image_note_window_t2

0xf0ce,	// (0x0004fcb5) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb8,	// (0x00050a9f) popup_tmo_big_image_note_window_t

0xbfc8,	// (0x0004cbaf) cell_ai5_widget_lrg_icon_pane_g1

0xf0de,	// (0x0004fcc5) cell_ai5_widget_lrg_icon_pane_t1

0xf0ec,	// (0x0004fcd3) cell_ai5_widget_list_row_pane_ParamLimits

0xf0ec,	// (0x0004fcd3) cell_ai5_widget_list_row_pane

0xf104,	// (0x0004fceb) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf104,	// (0x0004fceb) cell_ai5_widget_list_row_pane_g1

0xf111,	// (0x0004fcf8) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf111,	// (0x0004fcf8) cell_ai5_widget_list_row_pane_t1

0xf13c,	// (0x0004fd23) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf13c,	// (0x0004fd23) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfebf,	// (0x00050aa6) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfebf,	// (0x00050aa6) cell_ai5_widget_list_row_pane_t

0x099a,	// (0x00041581) main_fep_vtchi_ss_pane

0xf18c,	// (0x0004fd73) popup_fep_char_pre_window

0xf194,	// (0x0004fd7b) popup_fep_ituss_window

0xf1c0,	// (0x0004fda7) popup_fep_vkbss_window

0x9494,	// (0x0004a07b) grid_vkbss_keypad_pane_ParamLimits

0x9494,	// (0x0004a07b) grid_vkbss_keypad_pane

0xf202,	// (0x0004fde9) ituss_keypad_pane

0x8982,	// (0x00049569) aid_vkbss_key_offset_ParamLimits

0x8982,	// (0x00049569) aid_vkbss_key_offset

0x898e,	// (0x00049575) cell_vkbss_key_pane_ParamLimits

0x898e,	// (0x00049575) cell_vkbss_key_pane

0xf20e,	// (0x0004fdf5) bg_cell_vkbss_key_g1_ParamLimits

0xf20e,	// (0x0004fdf5) bg_cell_vkbss_key_g1

0xf21a,	// (0x0004fe01) cell_vkbss_key_3p_pane_ParamLimits

0xf21a,	// (0x0004fe01) cell_vkbss_key_3p_pane

0xf250,	// (0x0004fe37) cell_vkbss_key_g1_ParamLimits

0xf250,	// (0x0004fe37) cell_vkbss_key_g1

0xf286,	// (0x0004fe6d) cell_vkbss_key_t1_ParamLimits

0xf286,	// (0x0004fe6d) cell_vkbss_key_t1

0x89c8,	// (0x000495af) cell_ituss_key_pane_ParamLimits

0x89c8,	// (0x000495af) cell_ituss_key_pane

0xf2e2,	// (0x0004fec9) bg_cell_ituss_key_g1_ParamLimits

0xf2e2,	// (0x0004fec9) bg_cell_ituss_key_g1

0xf2ee,	// (0x0004fed5) cell_ituss_key_pane_g1_ParamLimits

0xf2ee,	// (0x0004fed5) cell_ituss_key_pane_g1

0x89d9,	// (0x000495c0) cell_ituss_key_pane_g2_ParamLimits

0x89d9,	// (0x000495c0) cell_ituss_key_pane_g2

0x0005,

0xfec6,	// (0x00050aad) cell_ituss_key_pane_g_ParamLimits

0xfec6,	// (0x00050aad) cell_ituss_key_pane_g

0x8a5d,	// (0x00049644) cell_ituss_key_t1_ParamLimits

0x8a5d,	// (0x00049644) cell_ituss_key_t1

0x8a97,	// (0x0004967e) cell_ituss_key_t2_ParamLimits

0x8a97,	// (0x0004967e) cell_ituss_key_t2

0x8ac8,	// (0x000496af) cell_ituss_key_t3_ParamLimits

0x8ac8,	// (0x000496af) cell_ituss_key_t3

0x8a97,	// (0x0004967e) cell_ituss_key_t4_ParamLimits

0x8a97,	// (0x0004967e) cell_ituss_key_t4

0x0004,

0xfed3,	// (0x00050aba) cell_ituss_key_t_ParamLimits

0xfed3,	// (0x00050aba) cell_ituss_key_t

0xf314,	// (0x0004fefb) cell_vkbss_key_3p_pane_g1

0xf31c,	// (0x0004ff03) cell_vkbss_key_3p_pane_g2

0xf324,	// (0x0004ff0b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfede,	// (0x00050ac5) cell_vkbss_key_3p_pane_g

0x916d,	// (0x00049d54) bg_popup_fep_char_preview_window_cp02

0xf32c,	// (0x0004ff13) popup_fep_char_pre_window_t1

0xe634,	// (0x0004f21b) main_ai5_sk_pane

0xed56,	// (0x0004f93d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed62,	// (0x0004f949) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed77,	// (0x0004f95e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed83,	// (0x0004f96a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeaa,	// (0x00050a91) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed8f,	// (0x0004f976) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x104c,	// (0x00041c33) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf33a,	// (0x0004ff21) main_ai5_sk_pane_g1

0x9e68,	// (0x0004aa4f) popup_query_code_window_g1

0xf1aa,	// (0x0004fd91) popup_fep_vkb_icf_pane

0xf1d9,	// (0x0004fdc0) popup_fep_vtchi_icf_pane

0x9494,	// (0x0004a07b) bg_icf_pane

0x9494,	// (0x0004a07b) list_vkb_icf_pane

0xf343,	// (0x0004ff2a) bg_icf_pane_cp01

0xf356,	// (0x0004ff3d) vtchi_icf_list_pane

0xf3be,	// (0x0004ffa5) list_vkb_icf_pane_t1_ParamLimits

0xf3be,	// (0x0004ffa5) list_vkb_icf_pane_t1

0xf3da,	// (0x0004ffc1) vtchi_icf_list_pane_t1_ParamLimits

0xf3da,	// (0x0004ffc1) vtchi_icf_list_pane_t1

0xf194,	// (0x0004fd7b) popup_fep_ituss_window_ParamLimits

0xf1d9,	// (0x0004fdc0) popup_fep_vtchi_icf_pane_ParamLimits

0xf202,	// (0x0004fde9) ituss_keypad_pane_ParamLimits

0x8976,	// (0x0004955d) ituss_sks_pane

0x9494,	// (0x0004a07b) bg_icf_pane_ParamLimits

0xf164,	// (0x0004fd4b) icf_edit_indi_pane_ParamLimits

0xf164,	// (0x0004fd4b) icf_edit_indi_pane

0x9494,	// (0x0004a07b) list_vkb_icf_pane_ParamLimits

0xf343,	// (0x0004ff2a) bg_icf_pane_cp01_ParamLimits

0xf17f,	// (0x0004fd66) icf_edit_indi_pane_cp01_ParamLimits

0xf17f,	// (0x0004fd66) icf_edit_indi_pane_cp01

0xf35e,	// (0x0004ff45) vtchi_query_pane

0xe4d6,	// (0x0004f0bd) icf_edit_indi_pane_g1_ParamLimits

0xe4d6,	// (0x0004f0bd) icf_edit_indi_pane_g1

0xf44a,	// (0x00050031) icf_edit_indi_pane_g2_ParamLimits

0xf44a,	// (0x00050031) icf_edit_indi_pane_g2

0x0001,

0xff09,	// (0x00050af0) icf_edit_indi_pane_g_ParamLimits

0xff09,	// (0x00050af0) icf_edit_indi_pane_g

0xf45e,	// (0x00050045) icf_edit_indi_pane_t1

0xf3f3,	// (0x0004ffda) bg_input_focus_pane_cp042

0x0f85,	// (0x00041b6c) vtchi_button_pane

0xf3fc,	// (0x0004ffe3) vtchi_query_pane_t1

0xf40a,	// (0x0004fff1) vtchi_query_pane_t2

0xf418,	// (0x0004ffff) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x00050adf) vtchi_query_pane_t

0x099a,	// (0x00041581) bg_button_pane_cp13

0xf426,	// (0x0005000d) vtchi_button_pane_g1

0x8b0b,	// (0x000496f2) ituss_sks_pane_g1

0x8b16,	// (0x000496fd) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x00050ae6) ituss_sks_pane_g

0xf42e,	// (0x00050015) ituss_sks_pane_t1

0xf43c,	// (0x00050023) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x00050aeb) ituss_sks_pane_t

0xba9c,	// (0x0004c683) indicator_nsta_pane_cp_g1

0xbaa5,	// (0x0004c68c) indicator_nsta_pane_cp_g2

0xbaad,	// (0x0004c694) indicator_nsta_pane_cp_g3

0xbab5,	// (0x0004c69c) indicator_nsta_pane_cp_g4

0xbaa5,	// (0x0004c68c) indicator_nsta_pane_cp_g5

0xbaad,	// (0x0004c694) indicator_nsta_pane_cp_g6

0x0005,

0xfa88,	// (0x0005066f) indicator_nsta_pane_cp_g

0xe1f9,	// (0x0004ede0) cell_graphic2_pane_t2_ParamLimits

0xe1f9,	// (0x0004ede0) cell_graphic2_pane_t2

0x0001,

0xfd95,	// (0x0005097c) cell_graphic2_pane_t_ParamLimits

0xfd95,	// (0x0005097c) cell_graphic2_pane_t

0xe225,	// (0x0004ee0c) cell_graphic2_control_pane_t1

0x8c21,	// (0x00049808) signal_pane_g3_ParamLimits

0x8c21,	// (0x00049808) signal_pane_g3

0x8c30,	// (0x00049817) signal_pane_g4_ParamLimits

0x8c30,	// (0x00049817) signal_pane_g4

0xf14e,	// (0x0004fd35) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf14e,	// (0x0004fd35) cell_ai5_widget_list_row_pane_t3

0xf302,	// (0x0004fee9) cell_ituss_key_pane_t1_ParamLimits

0xf302,	// (0x0004fee9) cell_ituss_key_pane_t1

0x9acf,	// (0x0004a6b6) form_field_data_wide_pane_vc_t2_ParamLimits

0x9acf,	// (0x0004a6b6) form_field_data_wide_pane_vc_t2

0x9ae3,	// (0x0004a6ca) form_field_data_wide_pane_vc_t3_ParamLimits

0x9ae3,	// (0x0004a6ca) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e9,	// (0x000503d0) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e9,	// (0x000503d0) form_field_data_wide_pane_vc_t

0xb739,	// (0x0004c320) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb739,	// (0x0004c320) form_field_slider_wide_pane_vc_t3

0xb80f,	// (0x0004c3f6) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb80f,	// (0x0004c3f6) form_field_popup_wide_pane_vc_t2

0xb826,	// (0x0004c40d) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb826,	// (0x0004c40d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa77,	// (0x0005065e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa77,	// (0x0005065e) form_field_popup_wide_pane_vc_t

0x8758,	// (0x0004933f) aid_fshwr2_btn_pane_ParamLimits

0x8764,	// (0x0004934b) aid_fshwr2_syb_pane_ParamLimits

0x8776,	// (0x0004935d) aid_fshwr2_txt_pane_ParamLimits

0x104c,	// (0x00041c33) fshwr2_bg_pane_ParamLimits

0x8782,	// (0x00049369) fshwr2_func_candi_pane_ParamLimits

0x879a,	// (0x00049381) fshwr2_hwr_syb_pane_ParamLimits

0x87b0,	// (0x00049397) fshwr2_icf_pane_ParamLimits

0x5b87,	// (0x0004676e) list_double_graphic_pane_vc_g4_ParamLimits

0x5b87,	// (0x0004676e) list_double_graphic_pane_vc_g4

0x89f9,	// (0x000495e0) cell_ituss_key_pane_g3_ParamLimits

0x89f9,	// (0x000495e0) cell_ituss_key_pane_g3

0x8af9,	// (0x000496e0) cell_ituss_key_t5_ParamLimits

0x8af9,	// (0x000496e0) cell_ituss_key_t5

0xf1c0,	// (0x0004fda7) popup_fep_vkbss_window_ParamLimits

0xe63e,	// (0x0004f225) aid_cell_ai5_quarter

0xf45e,	// (0x00050045) icf_edit_indi_pane_t1_ParamLimits

0x0be5,	// (0x000417cc) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x0be5,	// (0x000417cc) aid_tch_indicator_popup_pane_cp2

0x0bf8,	// (0x000417df) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x0bf8,	// (0x000417df) aid_tch_query_popup_data_pane_cp2

0x9e10,	// (0x0004a9f7) aid_tch_query_popup_pane_ParamLimits

0x9e10,	// (0x0004a9f7) aid_tch_query_popup_pane

0x9e10,	// (0x0004a9f7) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9e10,	// (0x0004a9f7) aid_tch_query_popup_data_pane_cp1

0x9494,	// (0x0004a07b) cell_fshwr2_syb_bg_pane_ParamLimits

0x88a1,	// (0x00049488) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x88b5,	// (0x0004949c) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1aa,	// (0x0004fd91) popup_fep_vkb_icf_pane_ParamLimits

0x85c8,	// (0x000491af) bg_popup_fep_char_preview_window_g10

0xe773,	// (0x0004f35a) cell_ai5_widget_pane_g11_ParamLimits

0xe773,	// (0x0004f35a) cell_ai5_widget_pane_g11

0xe77f,	// (0x0004f366) cell_ai5_widget_pane_g12_ParamLimits

0xe77f,	// (0x0004f366) cell_ai5_widget_pane_g12

0xe78b,	// (0x0004f372) cell_ai5_widget_pane_g13_ParamLimits

0xe78b,	// (0x0004f372) cell_ai5_widget_pane_g13

0xe8bb,	// (0x0004f4a2) cell_ai5_widget_pane_t11_ParamLimits

0xe8bb,	// (0x0004f4a2) cell_ai5_widget_pane_t11

0xe8cd,	// (0x0004f4b4) cell_ai5_widget_pane_t12_ParamLimits

0xe8cd,	// (0x0004f4b4) cell_ai5_widget_pane_t12

0x8a05,	// (0x000495ec) cell_ituss_key_pane_g4_ParamLimits

0x8a05,	// (0x000495ec) cell_ituss_key_pane_g4

0x8a21,	// (0x00049608) cell_ituss_key_pane_g5_ParamLimits

0x8a21,	// (0x00049608) cell_ituss_key_pane_g5

0x8a3d,	// (0x00049624) cell_ituss_key_pane_g6_ParamLimits

0x8a3d,	// (0x00049624) cell_ituss_key_pane_g6

0x99ca,	// (0x0004a5b1) bg_icf_pane_g1

0xf366,	// (0x0004ff4d) bg_icf_pane_g2

0xf372,	// (0x0004ff59) bg_icf_pane_g3

0xf37c,	// (0x0004ff63) bg_icf_pane_g4

0xf388,	// (0x0004ff6f) bg_icf_pane_g5

0xf392,	// (0x0004ff79) bg_icf_pane_g6

0xf39e,	// (0x0004ff85) bg_icf_pane_g7

0xf3a8,	// (0x0004ff8f) bg_icf_pane_g8

0xf3b4,	// (0x0004ff9b) bg_icf_pane_g9

0x0008,

0xfee5,	// (0x00050acc) bg_icf_pane_g

0xf1ef,	// (0x0004fdd6) popup_hyb_candi_window_ParamLimits

0xf1ef,	// (0x0004fdd6) popup_hyb_candi_window

0x9a3e,	// (0x0004a625) bg_popup_sub_pane_cp01_ParamLimits

0x9a3e,	// (0x0004a625) bg_popup_sub_pane_cp01

0xf477,	// (0x0005005e) entry_hyb_candi_pane_ParamLimits

0xf477,	// (0x0005005e) entry_hyb_candi_pane

0xf486,	// (0x0005006d) grid_hyb_candi_pane_ParamLimits

0xf486,	// (0x0005006d) grid_hyb_candi_pane

0xf49b,	// (0x00050082) grid_hyb_phrase_pane_ParamLimits

0xf49b,	// (0x00050082) grid_hyb_phrase_pane

0xf4aa,	// (0x00050091) cell_hyb_candi_pane_ParamLimits

0xf4aa,	// (0x00050091) cell_hyb_candi_pane

0x0f8e,	// (0x00041b75) cell_hyb_candi_scroll_pane

0x8b61,	// (0x00049748) cell_hyb_candi_pane_g1

0xf4c6,	// (0x000500ad) cell_hyb_candi_pane_t1

0xf4d4,	// (0x000500bb) cell_hyb_phrase_pane

0x8b61,	// (0x00049748) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x000500c4) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x000500d2) entry_hyb_candi_pane_t1

0x916d,	// (0x00049d54) input_focus_pane_cp06

0xf4f9,	// (0x000500e0) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x000500e8) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x000500f0) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x000500f8) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x00050100) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x00050108) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large

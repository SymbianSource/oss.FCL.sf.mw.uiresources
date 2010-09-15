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

#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x00034153 };

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
0x39d3,	// (0x00037b26) Screen

0x39dd,	// (0x00037b30) application_window_ParamLimits

0x39dd,	// (0x00037b30) application_window

0x00e9,	// (0x0003423c) screen_g1

0x39eb,	// (0x00037b3e) area_bottom_pane_ParamLimits

0x39eb,	// (0x00037b3e) area_bottom_pane

0x00f3,	// (0x00034246) area_top_pane_ParamLimits

0x00f3,	// (0x00034246) area_top_pane

0xb170,	// (0x0003f2c3) main_pane_ParamLimits

0xb170,	// (0x0003f2c3) main_pane

0x016b,	// (0x000342be) misc_graphics

0x4d20,	// (0x00038e73) battery_pane_ParamLimits

0x4d20,	// (0x00038e73) battery_pane

0x1cab,	// (0x00035dfe) bg_status_flat_pane_g8

0x1cb3,	// (0x00035e06) bg_status_flat_pane_g9

0x13e6,	// (0x00035539) context_pane_ParamLimits

0x13e6,	// (0x00035539) context_pane

0x4e58,	// (0x00038fab) navi_pane_ParamLimits

0x4e58,	// (0x00038fab) navi_pane

0x4ec4,	// (0x00039017) signal_pane_ParamLimits

0x4ec4,	// (0x00039017) signal_pane

0x0008,

0xf852,	// (0x000439a5) bg_status_flat_pane_g

0x4f25,	// (0x00039078) status_pane_g1_ParamLimits

0x4f25,	// (0x00039078) status_pane_g1

0x4f31,	// (0x00039084) status_pane_g2_ParamLimits

0x4f31,	// (0x00039084) status_pane_g2

0x144c,	// (0x0003559f) status_pane_g3_ParamLimits

0x144c,	// (0x0003559f) status_pane_g3

0x0004,

0xf780,	// (0x000438d3) status_pane_g_ParamLimits

0xf780,	// (0x000438d3) status_pane_g

0x4f3d,	// (0x00039090) title_pane_ParamLimits

0x4f3d,	// (0x00039090) title_pane

0x4f7a,	// (0x000390cd) uni_indicator_pane_ParamLimits

0x4f7a,	// (0x000390cd) uni_indicator_pane

0x1331,	// (0x00035484) bg_list_pane_ParamLimits

0x1331,	// (0x00035484) bg_list_pane

0xe4d1,	// (0x00042624) find_pane

0x4cc3,	// (0x00038e16) listscroll_app_pane_ParamLimits

0x4cc3,	// (0x00038e16) listscroll_app_pane

0x1351,	// (0x000354a4) listscroll_form_pane

0xe4d9,	// (0x0004262c) listscroll_gen_pane_ParamLimits

0xe4d9,	// (0x0004262c) listscroll_gen_pane

0xb96b,	// (0x0003fabe) listscroll_set_pane

0x49a8,	// (0x00038afb) main_idle_act_pane

0x114f,	// (0x000352a2) main_idle_trad_pane

0x114f,	// (0x000352a2) main_list_empty_pane

0x136b,	// (0x000354be) main_midp_pane

0x1377,	// (0x000354ca) main_pane_g1_ParamLimits

0x1377,	// (0x000354ca) main_pane_g1

0xb981,	// (0x0003fad4) popup_ai_message_window_ParamLimits

0xb981,	// (0x0003fad4) popup_ai_message_window

0xba17,	// (0x0003fb6a) popup_fep_china_uni_window_ParamLimits

0xba17,	// (0x0003fb6a) popup_fep_china_uni_window

0xba55,	// (0x0003fba8) popup_fep_japan_candidate_window_ParamLimits

0xba55,	// (0x0003fba8) popup_fep_japan_candidate_window

0xba73,	// (0x0003fbc6) popup_fep_japan_predictive_window_ParamLimits

0xba73,	// (0x0003fbc6) popup_fep_japan_predictive_window

0xba9f,	// (0x0003fbf2) popup_find_window

0xbaac,	// (0x0003fbff) popup_grid_graphic_window_ParamLimits

0xbaac,	// (0x0003fbff) popup_grid_graphic_window

0xbaca,	// (0x0003fc1d) popup_large_graphic_colour_window

0xbaec,	// (0x0003fc3f) popup_menu_window_ParamLimits

0xbaec,	// (0x0003fc3f) popup_menu_window

0xbc24,	// (0x0003fd77) popup_note_image_window

0xbc12,	// (0x0003fd65) popup_note_wait_window_ParamLimits

0xbc12,	// (0x0003fd65) popup_note_wait_window

0xbc12,	// (0x0003fd65) popup_note_window_ParamLimits

0xbc12,	// (0x0003fd65) popup_note_window

0xbc78,	// (0x0003fdcb) popup_query_code_window_ParamLimits

0xbc78,	// (0x0003fdcb) popup_query_code_window

0xbc8a,	// (0x0003fddd) popup_query_data_code_window_ParamLimits

0xbc8a,	// (0x0003fddd) popup_query_data_code_window

0xbc9f,	// (0x0003fdf2) popup_query_data_window_ParamLimits

0xbc9f,	// (0x0003fdf2) popup_query_data_window

0xbcb5,	// (0x0003fe08) popup_query_sat_info_window_ParamLimits

0xbcb5,	// (0x0003fe08) popup_query_sat_info_window

0xbce6,	// (0x0003fe39) popup_snote_single_graphic_window_ParamLimits

0xbce6,	// (0x0003fe39) popup_snote_single_graphic_window

0xbce6,	// (0x0003fe39) popup_snote_single_text_window_ParamLimits

0xbce6,	// (0x0003fe39) popup_snote_single_text_window

0xbcf9,	// (0x0003fe4c) popup_sub_window_general

0xbdfd,	// (0x0003ff50) popup_window_general_ParamLimits

0xbdfd,	// (0x0003ff50) popup_window_general

0x1385,	// (0x000354d8) power_save_pane

0xb803,	// (0x0003f956) control_pane_g1_ParamLimits

0xb803,	// (0x0003f956) control_pane_g1

0xb824,	// (0x0003f977) control_pane_g2_ParamLimits

0xb824,	// (0x0003f977) control_pane_g2

0x1323,	// (0x00035476) control_pane_g3_ParamLimits

0x1323,	// (0x00035476) control_pane_g3

0x0007,

0xf768,	// (0x000438bb) control_pane_g_ParamLimits

0xf768,	// (0x000438bb) control_pane_g

0xb866,	// (0x0003f9b9) control_pane_t1_ParamLimits

0xb866,	// (0x0003f9b9) control_pane_t1

0xb8ba,	// (0x0003fa0d) control_pane_t2_ParamLimits

0xb8ba,	// (0x0003fa0d) control_pane_t2

0x0002,

0xf779,	// (0x000438cc) control_pane_t_ParamLimits

0xf779,	// (0x000438cc) control_pane_t

0x127e,	// (0x000353d1) navi_navi_volume_pane_cp1

0x1286,	// (0x000353d9) status_small_icon_pane

0x128e,	// (0x000353e1) status_small_pane_g1_ParamLimits

0x128e,	// (0x000353e1) status_small_pane_g1

0x12c2,	// (0x00035415) status_small_pane_g2_ParamLimits

0x12c2,	// (0x00035415) status_small_pane_g2

0x12ce,	// (0x00035421) status_small_pane_g3_ParamLimits

0x12ce,	// (0x00035421) status_small_pane_g3

0x4c68,	// (0x00038dbb) status_small_pane_g4_ParamLimits

0x4c68,	// (0x00038dbb) status_small_pane_g4

0x4c74,	// (0x00038dc7) status_small_pane_g5_ParamLimits

0x4c74,	// (0x00038dc7) status_small_pane_g5

0x12da,	// (0x0003542d) status_small_pane_g6_ParamLimits

0x12da,	// (0x0003542d) status_small_pane_g6

0x0007,

0xf757,	// (0x000438aa) status_small_pane_g_ParamLimits

0xf757,	// (0x000438aa) status_small_pane_g

0x1309,	// (0x0003545c) status_small_pane_t1

0x4c88,	// (0x00038ddb) status_small_wait_pane_ParamLimits

0x4c88,	// (0x00038ddb) status_small_wait_pane

0x4af8,	// (0x00038c4b) aid_levels_signal_ParamLimits

0x4af8,	// (0x00038c4b) aid_levels_signal

0x4b09,	// (0x00038c5c) signal_pane_g1_ParamLimits

0x4b09,	// (0x00038c5c) signal_pane_g1

0x4b1f,	// (0x00038c72) signal_pane_g2_ParamLimits

0x4b1f,	// (0x00038c72) signal_pane_g2

0x0003,

0xf6e8,	// (0x0004383b) signal_pane_g_ParamLimits

0xf6e8,	// (0x0004383b) signal_pane_g

0x0ced,	// (0x00034e40) context_pane_g1

0x3a50,	// (0x00037ba3) title_pane_g1

0x3a7a,	// (0x00037bcd) title_pane_t1

0x0181,	// (0x000342d4) title_pane_t2

0x01a7,	// (0x000342fa) title_pane_t3

0x0002,

0xf532,	// (0x00043685) title_pane_t

0x4f90,	// (0x000390e3) aid_levels_battery_ParamLimits

0x4f90,	// (0x000390e3) aid_levels_battery

0x4fa3,	// (0x000390f6) battery_pane_g1_ParamLimits

0x4fa3,	// (0x000390f6) battery_pane_g1

0x4fb8,	// (0x0003910b) battery_pane_g2_ParamLimits

0x4fb8,	// (0x0003910b) battery_pane_g2

0x0001,

0xf78b,	// (0x000438de) battery_pane_g_ParamLimits

0xf78b,	// (0x000438de) battery_pane_g

0x5114,	// (0x00039267) uni_indicator_pane_g1

0x5128,	// (0x0003927b) uni_indicator_pane_g2

0x513d,	// (0x00039290) uni_indicator_pane_g3

0x0005,

0xf8fa,	// (0x00043a4d) uni_indicator_pane_g

0x08aa,	// (0x000349fd) navi_icon_pane_ParamLimits

0x08aa,	// (0x000349fd) navi_icon_pane

0x016b,	// (0x000342be) navi_midp_pane

0x016b,	// (0x000342be) navi_navi_pane

0x08aa,	// (0x000349fd) navi_text_pane_ParamLimits

0x08aa,	// (0x000349fd) navi_text_pane

0x00e9,	// (0x0003423c) status_small_wait_pane_g1

0x04bc,	// (0x0003460f) status_small_wait_pane_g2

0x0001,

0xf8f5,	// (0x00043a48) status_small_wait_pane_g

0x2253,	// (0x000363a6) navi_navi_icon_text_pane

0x226d,	// (0x000363c0) navi_navi_pane_g1_ParamLimits

0x226d,	// (0x000363c0) navi_navi_pane_g1

0x225b,	// (0x000363ae) navi_navi_pane_g2_ParamLimits

0x225b,	// (0x000363ae) navi_navi_pane_g2

0x0001,

0xf8c3,	// (0x00043a16) navi_navi_pane_g_ParamLimits

0xf8c3,	// (0x00043a16) navi_navi_pane_g

0x227f,	// (0x000363d2) navi_navi_tabs_pane

0x2253,	// (0x000363a6) navi_navi_text_pane

0x2253,	// (0x000363a6) navi_navi_volume_pane

0x222f,	// (0x00036382) navi_text_pane_t1

0x2223,	// (0x00036376) navi_icon_pane_g1

0x2177,	// (0x000362ca) navi_navi_text_pane_t1

0xc084,	// (0x000401d7) navi_navi_volume_pane_g1

0xc08c,	// (0x000401df) volume_small_pane

0x5061,	// (0x000391b4) navi_navi_icon_text_pane_g1

0x5069,	// (0x000391bc) navi_navi_icon_text_pane_t1

0x1cf3,	// (0x00035e46) navi_tabs_2_long_pane

0x1cf3,	// (0x00035e46) navi_tabs_2_pane

0x1cf3,	// (0x00035e46) navi_tabs_3_long_pane

0x1cf3,	// (0x00035e46) navi_tabs_3_pane

0x1cf3,	// (0x00035e46) navi_tabs_4_pane

0xc064,	// (0x000401b7) tabs_2_active_pane_ParamLimits

0xc064,	// (0x000401b7) tabs_2_active_pane

0xc074,	// (0x000401c7) tabs_2_passive_pane_ParamLimits

0xc074,	// (0x000401c7) tabs_2_passive_pane

0xc032,	// (0x00040185) tabs_3_active_pane_ParamLimits

0xc032,	// (0x00040185) tabs_3_active_pane

0xc042,	// (0x00040195) tabs_3_passive_pane_ParamLimits

0xc042,	// (0x00040195) tabs_3_passive_pane

0xc053,	// (0x000401a6) tabs_3_passive_pane_cp_ParamLimits

0xc053,	// (0x000401a6) tabs_3_passive_pane_cp

0xbfee,	// (0x00040141) tabs_4_active_pane_ParamLimits

0xbfee,	// (0x00040141) tabs_4_active_pane

0xbfff,	// (0x00040152) tabs_4_passive_pane_ParamLimits

0xbfff,	// (0x00040152) tabs_4_passive_pane

0xc010,	// (0x00040163) tabs_4_passive_pane_cp_ParamLimits

0xc010,	// (0x00040163) tabs_4_passive_pane_cp

0xc021,	// (0x00040174) tabs_4_passive_pane_cp2_ParamLimits

0xc021,	// (0x00040174) tabs_4_passive_pane_cp2

0xbfce,	// (0x00040121) tabs_2_long_active_pane_ParamLimits

0xbfce,	// (0x00040121) tabs_2_long_active_pane

0xbfde,	// (0x00040131) tabs_2_long_passive_pane_ParamLimits

0xbfde,	// (0x00040131) tabs_2_long_passive_pane

0xbf99,	// (0x000400ec) tabs_3_long_active_pane_ParamLimits

0xbf99,	// (0x000400ec) tabs_3_long_active_pane

0xbfaa,	// (0x000400fd) tabs_3_long_passive_pane_ParamLimits

0xbfaa,	// (0x000400fd) tabs_3_long_passive_pane

0xbfbd,	// (0x00040110) tabs_3_long_passive_pane_cp_ParamLimits

0xbfbd,	// (0x00040110) tabs_3_long_passive_pane_cp

0xbf3f,	// (0x00040092) volume_small_pane_g1

0xbf48,	// (0x0004009b) volume_small_pane_g2

0xbf51,	// (0x000400a4) volume_small_pane_g3

0xbf5a,	// (0x000400ad) volume_small_pane_g4

0xbf63,	// (0x000400b6) volume_small_pane_g5

0xbf6c,	// (0x000400bf) volume_small_pane_g6

0xbf75,	// (0x000400c8) volume_small_pane_g7

0xbf7e,	// (0x000400d1) volume_small_pane_g8

0xbf87,	// (0x000400da) volume_small_pane_g9

0xbf90,	// (0x000400e3) volume_small_pane_g10

0x0009,

0xf88f,	// (0x000439e2) volume_small_pane_g

0x01b9,	// (0x0003430c) bg_active_tab_pane_cp2_ParamLimits

0x01b9,	// (0x0003430c) bg_active_tab_pane_cp2

0x01c7,	// (0x0003431a) tabs_3_active_pane_g1

0x3ae2,	// (0x00037c35) tabs_3_active_pane_t1

0x01b9,	// (0x0003430c) bg_passive_tab_pane_cp2_ParamLimits

0x01b9,	// (0x0003430c) bg_passive_tab_pane_cp2

0x01c7,	// (0x0003431a) tabs_3_passive_pane_g1

0x3ae2,	// (0x00037c35) tabs_3_passive_pane_t1

0x01b9,	// (0x0003430c) bg_active_tab_pane_cp3_ParamLimits

0x01b9,	// (0x0003430c) bg_active_tab_pane_cp3

0x3af4,	// (0x00037c47) tabs_4_active_pane_g1

0x3afc,	// (0x00037c4f) tabs_4_active_pane_t1

0x01b9,	// (0x0003430c) bg_passive_tab_pane_cp3_ParamLimits

0x01b9,	// (0x0003430c) bg_passive_tab_pane_cp3

0x3af4,	// (0x00037c47) tabs_4_1_passive_pane_g1

0x3afc,	// (0x00037c4f) tabs_4_1_passive_pane_t1

0x136b,	// (0x000354be) list_highlight_pane_cp2

0x5186,	// (0x000392d9) list_set_pane_ParamLimits

0x5186,	// (0x000392d9) list_set_pane

0x5214,	// (0x00039367) main_pane_set_t1_ParamLimits

0x5214,	// (0x00039367) main_pane_set_t1

0x5234,	// (0x00039387) main_pane_set_t2_ParamLimits

0x5234,	// (0x00039387) main_pane_set_t2

0x5246,	// (0x00039399) main_pane_set_t3_ParamLimits

0x5246,	// (0x00039399) main_pane_set_t3

0x5258,	// (0x000393ab) main_pane_set_t4_ParamLimits

0x5258,	// (0x000393ab) main_pane_set_t4

0x0003,

0xf95f,	// (0x00043ab2) main_pane_set_t_ParamLimits

0xf95f,	// (0x00043ab2) main_pane_set_t

0x526a,	// (0x000393bd) setting_code_pane

0x5272,	// (0x000393c5) setting_slider_graphic_pane

0x5272,	// (0x000393c5) setting_slider_pane

0x5272,	// (0x000393c5) setting_text_pane

0x5272,	// (0x000393c5) setting_volume_pane

0xb36f,	// (0x0003f4c2) volume_set_pane

0x01b9,	// (0x0003430c) bg_set_opt_pane_cp

0xb377,	// (0x0003f4ca) setting_slider_pane_t1

0xb38d,	// (0x0003f4e0) setting_slider_pane_t2

0xb3a6,	// (0x0003f4f9) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0004368c) setting_slider_pane_t

0xb3bd,	// (0x0003f510) slider_set_pane

0x016b,	// (0x000342be) bg_set_opt_pane_cp2

0x01cf,	// (0x00034322) setting_slider_graphic_pane_g1

0xb3d3,	// (0x0003f526) setting_slider_graphic_pane_t1

0xb3e2,	// (0x0003f535) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00043693) setting_slider_graphic_pane_t

0xb3f1,	// (0x0003f544) slider_set_pane_cp

0x016b,	// (0x000342be) input_focus_pane_cp1

0x26a0,	// (0x000367f3) list_set_text_pane

0x00e9,	// (0x0003423c) setting_text_pane_g1

0x016b,	// (0x000342be) input_focus_pane_cp2

0x00e9,	// (0x0003423c) setting_code_pane_g1

0x01d8,	// (0x0003432b) setting_code_pane_t1

0xdccc,	// (0x00041e1f) set_text_pane_t1_ParamLimits

0xdccc,	// (0x00041e1f) set_text_pane_t1

0x07f8,	// (0x0003494b) set_opt_bg_pane_g1

0x0800,	// (0x00034953) set_opt_bg_pane_g2

0x5152,	// (0x000392a5) set_opt_bg_pane_g3

0x0810,	// (0x00034963) set_opt_bg_pane_g4

0x0818,	// (0x0003496b) set_opt_bg_pane_g5

0x0820,	// (0x00034973) set_opt_bg_pane_g6

0x515a,	// (0x000392ad) set_opt_bg_pane_g7

0x5162,	// (0x000392b5) set_opt_bg_pane_g8

0x516a,	// (0x000392bd) set_opt_bg_pane_g9

0x0008,

0xf94c,	// (0x00043a9f) set_opt_bg_pane_g

0x2693,	// (0x000367e6) slider_set_pane_g1

0xc0f9,	// (0x0004024c) slider_set_pane_g2

0x0006,

0xf93d,	// (0x00043a90) slider_set_pane_g

0xc095,	// (0x000401e8) volume_set_pane_g1

0xc09d,	// (0x000401f0) volume_set_pane_g2

0xc0a5,	// (0x000401f8) volume_set_pane_g3

0xc0ad,	// (0x00040200) volume_set_pane_g4

0xc0b5,	// (0x00040208) volume_set_pane_g5

0xc0bd,	// (0x00040210) volume_set_pane_g6

0xc0c5,	// (0x00040218) volume_set_pane_g7

0xc0cd,	// (0x00040220) volume_set_pane_g8

0xc0d5,	// (0x00040228) volume_set_pane_g9

0xc0dd,	// (0x00040230) volume_set_pane_g10

0x0009,

0xf915,	// (0x00043a68) volume_set_pane_g

0x3b0e,	// (0x00037c61) indicator_pane_ParamLimits

0x3b0e,	// (0x00037c61) indicator_pane

0x3b1a,	// (0x00037c6d) main_idle_pane_g2_ParamLimits

0x3b1a,	// (0x00037c6d) main_idle_pane_g2

0x3b3e,	// (0x00037c91) main_pane_idle_g1_ParamLimits

0x3b3e,	// (0x00037c91) main_pane_idle_g1

0x01e6,	// (0x00034339) popup_clock_digital_analogue_window_ParamLimits

0x01e6,	// (0x00034339) popup_clock_digital_analogue_window

0x3b4b,	// (0x00037c9e) soft_indicator_pane_ParamLimits

0x3b4b,	// (0x00037c9e) soft_indicator_pane

0x3b57,	// (0x00037caa) wallpaper_pane_ParamLimits

0x3b57,	// (0x00037caa) wallpaper_pane

0x00e9,	// (0x0003423c) wallpaper_pane_g1

0x3b63,	// (0x00037cb6) indicator_pane_g1_ParamLimits

0x3b63,	// (0x00037cb6) indicator_pane_g1

0x2795,	// (0x000368e8) navi_navi_icon_text_pane_srt_g1

0x0214,	// (0x00034367) soft_indicator_pane_t1

0x022e,	// (0x00034381) aid_ps_area_pane

0x3b6f,	// (0x00037cc2) aid_ps_clock_pane

0x023f,	// (0x00034392) aid_ps_indicator_pane

0x024b,	// (0x0003439e) indicator_ps_pane_ParamLimits

0x024b,	// (0x0003439e) indicator_ps_pane

0x025a,	// (0x000343ad) power_save_pane_g1_ParamLimits

0x025a,	// (0x000343ad) power_save_pane_g1

0x0266,	// (0x000343b9) power_save_pane_g2_ParamLimits

0x0266,	// (0x000343b9) power_save_pane_g2

0xb0e2,	// (0x0003f235) aid_navinavi_width_pane

0x022e,	// (0x00034381) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00043698) power_save_pane_g_ParamLimits

0xf545,	// (0x00043698) power_save_pane_g

0x0274,	// (0x000343c7) power_save_pane_t1_ParamLimits

0x0274,	// (0x000343c7) power_save_pane_t1

0x3b6f,	// (0x00037cc2) aid_ps_clock_pane_ParamLimits

0x023f,	// (0x00034392) aid_ps_indicator_pane_ParamLimits

0x0286,	// (0x000343d9) power_save_pane_t4_ParamLimits

0x0286,	// (0x000343d9) power_save_pane_t4

0x0001,

0xf54a,	// (0x0004369d) power_save_pane_t_ParamLimits

0xf54a,	// (0x0004369d) power_save_pane_t

0x02b0,	// (0x00034403) power_save_t3_ParamLimits

0x02b0,	// (0x00034403) power_save_t3

0x029b,	// (0x000343ee) power_save_t2_ParamLimits

0x029b,	// (0x000343ee) power_save_t2

0x02c5,	// (0x00034418) indicator_ps_pane_g1

0x3b7b,	// (0x00037cce) ai_gene_pane_ParamLimits

0x3b7b,	// (0x00037cce) ai_gene_pane

0x3b87,	// (0x00037cda) ai_links_pane_ParamLimits

0x3b87,	// (0x00037cda) ai_links_pane

0x3b93,	// (0x00037ce6) indicator_pane_cp1_ParamLimits

0x3b93,	// (0x00037ce6) indicator_pane_cp1

0x3b9f,	// (0x00037cf2) main_pane_idle_g1_cp_ParamLimits

0x3b9f,	// (0x00037cf2) main_pane_idle_g1_cp

0x02ce,	// (0x00034421) popup_ai_links_title_window

0x3bab,	// (0x00037cfe) soft_indicator_pane_cp1_ParamLimits

0x3bab,	// (0x00037cfe) soft_indicator_pane_cp1

0x24e9,	// (0x0003663c) ai_links_pane_g1

0x24f2,	// (0x00036645) grid_ai_links_pane

0x510b,	// (0x0003925e) ai_gene_pane_1

0x24d7,	// (0x0003662a) ai_gene_pane_2

0x24e0,	// (0x00036633) list_highlight_pane_cp4

0x50ef,	// (0x00039242) cell_ai_link_pane_ParamLimits

0x50ef,	// (0x00039242) cell_ai_link_pane

0x24cf,	// (0x00036622) cell_ai_link_pane_g1

0x04bc,	// (0x0003460f) cell_ai_link_pane_g2

0x0001,

0xf8f0,	// (0x00043a43) cell_ai_link_pane_g

0x016b,	// (0x000342be) grid_highlight_cp2

0x016b,	// (0x000342be) bg_popup_sub_pane_cp1

0x02e5,	// (0x00034438) popup_ai_links_title_window_t1

0x2421,	// (0x00036574) ai_gene_pane_1_g1_ParamLimits

0x2421,	// (0x00036574) ai_gene_pane_1_g1

0x242d,	// (0x00036580) ai_gene_pane_1_g2_ParamLimits

0x242d,	// (0x00036580) ai_gene_pane_1_g2

0x0001,

0xf8e6,	// (0x00043a39) ai_gene_pane_1_g_ParamLimits

0xf8e6,	// (0x00043a39) ai_gene_pane_1_g

0x243a,	// (0x0003658d) ai_gene_pane_1_t1_ParamLimits

0x243a,	// (0x0003658d) ai_gene_pane_1_t1

0x246e,	// (0x000365c1) grid_ai_soft_ind_pane

0x240c,	// (0x0003655f) ai_gene_pane_2_t1_ParamLimits

0x240c,	// (0x0003655f) ai_gene_pane_2_t1

0x3bb7,	// (0x00037d0a) main_pane_empty_t1_ParamLimits

0x3bb7,	// (0x00037d0a) main_pane_empty_t1

0x3bd4,	// (0x00037d27) main_pane_empty_t2_ParamLimits

0x3bd4,	// (0x00037d27) main_pane_empty_t2

0x3bec,	// (0x00037d3f) main_pane_empty_t3_ParamLimits

0x3bec,	// (0x00037d3f) main_pane_empty_t3

0x3bff,	// (0x00037d52) main_pane_empty_t4_ParamLimits

0x3bff,	// (0x00037d52) main_pane_empty_t4

0x3c12,	// (0x00037d65) main_pane_empty_t5_ParamLimits

0x3c12,	// (0x00037d65) main_pane_empty_t5

0x0004,

0xf54f,	// (0x000436a2) main_pane_empty_t_ParamLimits

0xf54f,	// (0x000436a2) main_pane_empty_t

0x08aa,	// (0x000349fd) bg_popup_window_pane_ParamLimits

0x08aa,	// (0x000349fd) bg_popup_window_pane

0x2186,	// (0x000362d9) find_popup_pane_cp2_ParamLimits

0x2186,	// (0x000362d9) find_popup_pane_cp2

0x2192,	// (0x000362e5) heading_pane_ParamLimits

0x2192,	// (0x000362e5) heading_pane

0x016b,	// (0x000342be) bg_popup_sub_pane

0x5083,	// (0x000391d6) bg_popup_window_pane_g1_ParamLimits

0x5083,	// (0x000391d6) bg_popup_window_pane_g1

0x508f,	// (0x000391e2) bg_popup_window_pane_g2_ParamLimits

0x508f,	// (0x000391e2) bg_popup_window_pane_g2

0x509b,	// (0x000391ee) bg_popup_window_pane_g3_ParamLimits

0x509b,	// (0x000391ee) bg_popup_window_pane_g3

0x50a7,	// (0x000391fa) bg_popup_window_pane_g4_ParamLimits

0x50a7,	// (0x000391fa) bg_popup_window_pane_g4

0x50b3,	// (0x00039206) bg_popup_window_pane_g5_ParamLimits

0x50b3,	// (0x00039206) bg_popup_window_pane_g5

0x50bf,	// (0x00039212) bg_popup_window_pane_g6_ParamLimits

0x50bf,	// (0x00039212) bg_popup_window_pane_g6

0x50cb,	// (0x0003921e) bg_popup_window_pane_g7_ParamLimits

0x50cb,	// (0x0003921e) bg_popup_window_pane_g7

0x50d7,	// (0x0003922a) bg_popup_window_pane_g8_ParamLimits

0x50d7,	// (0x0003922a) bg_popup_window_pane_g8

0x50e3,	// (0x00039236) bg_popup_window_pane_g9_ParamLimits

0x50e3,	// (0x00039236) bg_popup_window_pane_g9

0x216b,	// (0x000362be) bg_popup_window_pane_g10_ParamLimits

0x216b,	// (0x000362be) bg_popup_window_pane_g10

0x0009,

0xf8ae,	// (0x00043a01) bg_popup_window_pane_g_ParamLimits

0xf8ae,	// (0x00043a01) bg_popup_window_pane_g

0x2122,	// (0x00036275) bg_popup_heading_pane_ParamLimits

0x2122,	// (0x00036275) bg_popup_heading_pane

0xc181,	// (0x000402d4) tabs_4_passive_pane_cp_srt_ParamLimits

0xc181,	// (0x000402d4) tabs_4_passive_pane_cp_srt

0xc193,	// (0x000402e6) tabs_4_passive_pane_srt_ParamLimits

0x2136,	// (0x00036289) heading_pane_g2

0xc193,	// (0x000402e6) tabs_4_passive_pane_srt

0x136b,	// (0x000354be) bg_passive_tab_pane_cp3_srt_ParamLimits

0x136b,	// (0x000354be) bg_passive_tab_pane_cp3_srt

0x213e,	// (0x00036291) heading_pane_t1_ParamLimits

0x213e,	// (0x00036291) heading_pane_t1

0x2155,	// (0x000362a8) heading_pane_t2_ParamLimits

0x2155,	// (0x000362a8) heading_pane_t2

0x0001,

0xf8a9,	// (0x000439fc) heading_pane_t_ParamLimits

0xf8a9,	// (0x000439fc) heading_pane_t

0x1c73,	// (0x00035dc6) bg_popup_heading_pane_g1

0x1d04,	// (0x00035e57) bg_popup_heading_pane_g2

0x1d0c,	// (0x00035e5f) bg_popup_heading_pane_g3

0x1d14,	// (0x00035e67) bg_popup_heading_pane_g4

0x1d1c,	// (0x00035e6f) bg_popup_heading_pane_g5

0x1d62,	// (0x00035eb5) bg_popup_heading_pane_g6

0x1d6a,	// (0x00035ebd) bg_popup_heading_pane_g7

0x1d72,	// (0x00035ec5) bg_popup_heading_pane_g8

0x1d7a,	// (0x00035ecd) bg_popup_heading_pane_g9

0x0008,

0xf865,	// (0x000439b8) bg_popup_heading_pane_g

0x1534,	// (0x00035687) bg_popup_sub_pane_g1

0x153c,	// (0x0003568f) bg_popup_sub_pane_g2

0x1544,	// (0x00035697) bg_popup_sub_pane_g3

0x154c,	// (0x0003569f) bg_popup_sub_pane_g4

0x1554,	// (0x000356a7) bg_popup_sub_pane_g5

0x155c,	// (0x000356af) bg_popup_sub_pane_g6

0x1564,	// (0x000356b7) bg_popup_sub_pane_g7

0x156c,	// (0x000356bf) bg_popup_sub_pane_g8

0x1574,	// (0x000356c7) bg_popup_sub_pane_g9

0x0008,

0xf83f,	// (0x00043992) bg_popup_sub_pane_g

0x02f4,	// (0x00034447) bg_popup_window_pane_cp5_ParamLimits

0x02f4,	// (0x00034447) bg_popup_window_pane_cp5

0x0310,	// (0x00034463) popup_note_window_g1_ParamLimits

0x0310,	// (0x00034463) popup_note_window_g1

0x031c,	// (0x0003446f) popup_note_window_t1_ParamLimits

0x031c,	// (0x0003446f) popup_note_window_t1

0x0332,	// (0x00034485) popup_note_window_t2_ParamLimits

0x0332,	// (0x00034485) popup_note_window_t2

0x0348,	// (0x0003449b) popup_note_window_t3_ParamLimits

0x0348,	// (0x0003449b) popup_note_window_t3

0x035e,	// (0x000344b1) popup_note_window_t4_ParamLimits

0x035e,	// (0x000344b1) popup_note_window_t4

0x0386,	// (0x000344d9) popup_note_window_t5_ParamLimits

0x0386,	// (0x000344d9) popup_note_window_t5

0x0004,

0xf55a,	// (0x000436ad) popup_note_window_t_ParamLimits

0xf55a,	// (0x000436ad) popup_note_window_t

0x03d0,	// (0x00034523) bg_popup_window_pane_cp6_ParamLimits

0x03d0,	// (0x00034523) bg_popup_window_pane_cp6

0x1bef,	// (0x00035d42) popup_note_image_window_g1_ParamLimits

0x1bef,	// (0x00035d42) popup_note_image_window_g1

0x1bfb,	// (0x00035d4e) popup_note_image_window_g2_ParamLimits

0x1bfb,	// (0x00035d4e) popup_note_image_window_g2

0x0001,

0xf833,	// (0x00043986) popup_note_image_window_g_ParamLimits

0xf833,	// (0x00043986) popup_note_image_window_g

0x1c14,	// (0x00035d67) popup_note_image_window_t1_ParamLimits

0x1c14,	// (0x00035d67) popup_note_image_window_t1

0x1c2d,	// (0x00035d80) popup_note_image_window_t2_ParamLimits

0x1c2d,	// (0x00035d80) popup_note_image_window_t2

0x1c46,	// (0x00035d99) popup_note_image_window_t3_ParamLimits

0x1c46,	// (0x00035d99) popup_note_image_window_t3

0x0002,

0xf838,	// (0x0004398b) popup_note_image_window_t_ParamLimits

0xf838,	// (0x0004398b) popup_note_image_window_t

0x1ada,	// (0x00035c2d) bg_popup_window_pane_cp7_ParamLimits

0x1ada,	// (0x00035c2d) bg_popup_window_pane_cp7

0x1b0a,	// (0x00035c5d) popup_note_wait_window_g1_ParamLimits

0x1b0a,	// (0x00035c5d) popup_note_wait_window_g1

0x1b16,	// (0x00035c69) popup_note_wait_window_g2_ParamLimits

0x1b16,	// (0x00035c69) popup_note_wait_window_g2

0x0002,

0xf821,	// (0x00043974) popup_note_wait_window_g_ParamLimits

0xf821,	// (0x00043974) popup_note_wait_window_g

0x1b2e,	// (0x00035c81) popup_note_wait_window_t1_ParamLimits

0x1b2e,	// (0x00035c81) popup_note_wait_window_t1

0x1b55,	// (0x00035ca8) popup_note_wait_window_t2_ParamLimits

0x1b55,	// (0x00035ca8) popup_note_wait_window_t2

0x1b72,	// (0x00035cc5) popup_note_wait_window_t3_ParamLimits

0x1b72,	// (0x00035cc5) popup_note_wait_window_t3

0x1b85,	// (0x00035cd8) popup_note_wait_window_t4_ParamLimits

0x1b85,	// (0x00035cd8) popup_note_wait_window_t4

0x0004,

0xf828,	// (0x0004397b) popup_note_wait_window_t_ParamLimits

0xf828,	// (0x0004397b) popup_note_wait_window_t

0x1baa,	// (0x00035cfd) wait_bar_pane_ParamLimits

0x1baa,	// (0x00035cfd) wait_bar_pane

0x016b,	// (0x000342be) wait_anim_pane

0x016b,	// (0x000342be) wait_border_pane

0x00e9,	// (0x0003423c) wait_anim_pane_g1

0x00e9,	// (0x0003423c) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x00043836) wait_anim_pane_g

0x1a8a,	// (0x00035bdd) wait_border_pane_g1

0x1a93,	// (0x00035be6) wait_border_pane_g2

0x1a9c,	// (0x00035bef) wait_border_pane_g3

0x0002,

0xf81a,	// (0x0004396d) wait_border_pane_g

0x18fa,	// (0x00035a4d) bg_popup_window_pane_cp16_ParamLimits

0x18fa,	// (0x00035a4d) bg_popup_window_pane_cp16

0x19fa,	// (0x00035b4d) indicator_popup_pane_cp4_ParamLimits

0x19fa,	// (0x00035b4d) indicator_popup_pane_cp4

0x1a0e,	// (0x00035b61) popup_query_data_window_t1_ParamLimits

0x1a0e,	// (0x00035b61) popup_query_data_window_t1

0x1a20,	// (0x00035b73) popup_query_data_window_t2_ParamLimits

0x1a20,	// (0x00035b73) popup_query_data_window_t2

0x1a39,	// (0x00035b8c) popup_query_data_window_t3_ParamLimits

0x1a39,	// (0x00035b8c) popup_query_data_window_t3

0x0002,

0xf813,	// (0x00043966) popup_query_data_window_t_ParamLimits

0xf813,	// (0x00043966) popup_query_data_window_t

0x1a53,	// (0x00035ba6) query_popup_data_pane_ParamLimits

0x1a53,	// (0x00035ba6) query_popup_data_pane

0x1a67,	// (0x00035bba) query_popup_data_pane_cp1_ParamLimits

0x1a67,	// (0x00035bba) query_popup_data_pane_cp1

0x18fa,	// (0x00035a4d) bg_popup_window_pane_cp10_ParamLimits

0x18fa,	// (0x00035a4d) bg_popup_window_pane_cp10

0x192c,	// (0x00035a7f) indicator_popup_pane_ParamLimits

0x192c,	// (0x00035a7f) indicator_popup_pane

0x194e,	// (0x00035aa1) popup_query_code_window_t1_ParamLimits

0x194e,	// (0x00035aa1) popup_query_code_window_t1

0x1968,	// (0x00035abb) popup_query_code_window_t2_ParamLimits

0x1968,	// (0x00035abb) popup_query_code_window_t2

0x19b1,	// (0x00035b04) popup_query_code_window_t3_ParamLimits

0x19b1,	// (0x00035b04) popup_query_code_window_t3

0x0002,

0xf80c,	// (0x0004395f) popup_query_code_window_t_ParamLimits

0xf80c,	// (0x0004395f) popup_query_code_window_t

0x19e0,	// (0x00035b33) query_popup_pane_ParamLimits

0x19e0,	// (0x00035b33) query_popup_pane

0x03d0,	// (0x00034523) bg_popup_window_pane_cp15_ParamLimits

0x03d0,	// (0x00034523) bg_popup_window_pane_cp15

0x03ee,	// (0x00034541) indicator_popup_pane_cp1_ParamLimits

0x03ee,	// (0x00034541) indicator_popup_pane_cp1

0x0401,	// (0x00034554) indicator_popup_pane_cp2_ParamLimits

0x0401,	// (0x00034554) indicator_popup_pane_cp2

0x0414,	// (0x00034567) popup_query_data_code_window_g1_ParamLimits

0x0414,	// (0x00034567) popup_query_data_code_window_g1

0x0427,	// (0x0003457a) popup_query_data_code_window_t1_ParamLimits

0x0427,	// (0x0003457a) popup_query_data_code_window_t1

0x0439,	// (0x0003458c) popup_query_data_code_window_t2_ParamLimits

0x0439,	// (0x0003458c) popup_query_data_code_window_t2

0x044b,	// (0x0003459e) popup_query_data_code_window_t3_ParamLimits

0x044b,	// (0x0003459e) popup_query_data_code_window_t3

0x0461,	// (0x000345b4) popup_query_data_code_window_t4_ParamLimits

0x0461,	// (0x000345b4) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x000436b8) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x000436b8) popup_query_data_code_window_t

0xbe5a,	// (0x0003ffad) list_single_midp_graphic_pane_g3

0x0479,	// (0x000345cc) query_popup_data_pane_cp2_ParamLimits

0x048c,	// (0x000345df) query_popup_pane_cp2_ParamLimits

0x048c,	// (0x000345df) query_popup_pane_cp2

0x016b,	// (0x000342be) bg_popup_window_pane_cp11

0x18de,	// (0x00035a31) heading_pane_cp5

0x18e6,	// (0x00035a39) listscroll_popup_info_pane

0x016b,	// (0x000342be) input_focus_pane_cp3

0x049f,	// (0x000345f2) query_popup_pane_t1

0x04ad,	// (0x00034600) list_popup_info_pane_ParamLimits

0x04ad,	// (0x00034600) list_popup_info_pane

0x04bc,	// (0x0003460f) listscroll_popup_info_pane_g1

0x04c4,	// (0x00034617) scroll_pane_cp7

0x04cc,	// (0x0003461f) popup_info_list_pane_t1_ParamLimits

0x04cc,	// (0x0003461f) popup_info_list_pane_t1

0x04e6,	// (0x00034639) popup_info_list_pane_t2_ParamLimits

0x04e6,	// (0x00034639) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x000436c1) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x000436c1) popup_info_list_pane_t

0x016b,	// (0x000342be) bg_popup_window_pane_cp12

0x27af,	// (0x00036902) find_popup_pane

0x01b9,	// (0x0003430c) bg_popup_window_pane_cp3

0x0500,	// (0x00034653) heading_pane_cp3

0x050f,	// (0x00034662) listscroll_popup_graphic_pane

0x016b,	// (0x000342be) bg_popup_window_pane_cp4

0x4907,	// (0x00038a5a) heading_pane_cp4

0x051e,	// (0x00034671) listscroll_popup_colour_pane

0x0526,	// (0x00034679) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0526,	// (0x00034679) cell_large_graphic_colour_none_popup_pane

0x490f,	// (0x00038a62) grid_large_graphic_colour_popup_pane_ParamLimits

0x490f,	// (0x00038a62) grid_large_graphic_colour_popup_pane

0x0536,	// (0x00034689) listscroll_popup_colour_pane_g1_ParamLimits

0x0536,	// (0x00034689) listscroll_popup_colour_pane_g1

0x054d,	// (0x000346a0) listscroll_popup_colour_pane_g2_ParamLimits

0x054d,	// (0x000346a0) listscroll_popup_colour_pane_g2

0x0564,	// (0x000346b7) listscroll_popup_colour_pane_g3_ParamLimits

0x0564,	// (0x000346b7) listscroll_popup_colour_pane_g3

0x492b,	// (0x00038a7e) listscroll_popup_colour_pane_g4_ParamLimits

0x492b,	// (0x00038a7e) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x000436c6) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x000436c6) listscroll_popup_colour_pane_g

0x0574,	// (0x000346c7) scroll_pane_cp6_ParamLimits

0x0574,	// (0x000346c7) scroll_pane_cp6

0x493a,	// (0x00038a8d) cell_large_graphic_colour_popup_pane_ParamLimits

0x493a,	// (0x00038a8d) cell_large_graphic_colour_popup_pane

0x0586,	// (0x000346d9) cell_large_graphic_colour_none_popup_pane_t1

0x016b,	// (0x000342be) grid_highlight_pane_cp5

0x0595,	// (0x000346e8) cell_large_graphic_colour_popup_pane_g1

0x059d,	// (0x000346f0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x000436cf) cell_large_graphic_colour_popup_pane_g

0x05a5,	// (0x000346f8) cell_large_graphic_colour_popup_pane_g2_copy1

0x05ae,	// (0x00034701) grid_highlight_pane_cp4

0x05b6,	// (0x00034709) bg_popup_window_pane_cp8_ParamLimits

0x05b6,	// (0x00034709) bg_popup_window_pane_cp8

0x05d1,	// (0x00034724) popup_snote_single_text_window_g1_ParamLimits

0x05d1,	// (0x00034724) popup_snote_single_text_window_g1

0x05e3,	// (0x00034736) popup_snote_single_text_window_t1_ParamLimits

0x05e3,	// (0x00034736) popup_snote_single_text_window_t1

0x05f6,	// (0x00034749) popup_snote_single_text_window_t2_ParamLimits

0x05f6,	// (0x00034749) popup_snote_single_text_window_t2

0x0609,	// (0x0003475c) popup_snote_single_text_window_t3_ParamLimits

0x0609,	// (0x0003475c) popup_snote_single_text_window_t3

0x0642,	// (0x00034795) popup_snote_single_text_window_t4_ParamLimits

0x0642,	// (0x00034795) popup_snote_single_text_window_t4

0x0676,	// (0x000347c9) popup_snote_single_text_window_t5_ParamLimits

0x0676,	// (0x000347c9) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x000436d4) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x000436d4) popup_snote_single_text_window_t

0x06a5,	// (0x000347f8) bg_popup_window_pane_cp9_ParamLimits

0x06a5,	// (0x000347f8) bg_popup_window_pane_cp9

0x05d1,	// (0x00034724) popup_snote_single_graphic_window_g1_ParamLimits

0x05d1,	// (0x00034724) popup_snote_single_graphic_window_g1

0x06b3,	// (0x00034806) popup_snote_single_graphic_window_g2_ParamLimits

0x06b3,	// (0x00034806) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x000436df) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x000436df) popup_snote_single_graphic_window_g

0x06bf,	// (0x00034812) popup_snote_single_graphic_window_t1_ParamLimits

0x06bf,	// (0x00034812) popup_snote_single_graphic_window_t1

0x06d2,	// (0x00034825) popup_snote_single_graphic_window_t2_ParamLimits

0x06d2,	// (0x00034825) popup_snote_single_graphic_window_t2

0x0609,	// (0x0003475c) popup_snote_single_graphic_window_t3_ParamLimits

0x0609,	// (0x0003475c) popup_snote_single_graphic_window_t3

0x0642,	// (0x00034795) popup_snote_single_graphic_window_t4_ParamLimits

0x0642,	// (0x00034795) popup_snote_single_graphic_window_t4

0x0676,	// (0x000347c9) popup_snote_single_graphic_window_t5_ParamLimits

0x0676,	// (0x000347c9) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x000436e4) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x000436e4) popup_snote_single_graphic_window_t

0x5338,	// (0x0003948b) grid_graphic_popup_pane_ParamLimits

0x5338,	// (0x0003948b) grid_graphic_popup_pane

0x535b,	// (0x000394ae) listscroll_popup_graphic_pane_g1_ParamLimits

0x535b,	// (0x000394ae) listscroll_popup_graphic_pane_g1

0x536f,	// (0x000394c2) listscroll_popup_graphic_pane_g2_ParamLimits

0x536f,	// (0x000394c2) listscroll_popup_graphic_pane_g2

0x0001,

0xf989,	// (0x00043adc) listscroll_popup_graphic_pane_g_ParamLimits

0xf989,	// (0x00043adc) listscroll_popup_graphic_pane_g

0x1d2c,	// (0x00035e7f) scroll_pane_cp5

0x52f2,	// (0x00039445) cell_graphic_popup_pane_ParamLimits

0x52f2,	// (0x00039445) cell_graphic_popup_pane

0x2758,	// (0x000368ab) cell_graphic_popup_pane_g1

0x2760,	// (0x000368b3) cell_graphic_popup_pane_g2

0x05a5,	// (0x000346f8) cell_graphic_popup_pane_g3

0x0002,

0xf982,	// (0x00043ad5) cell_graphic_popup_pane_g

0x2769,	// (0x000368bc) cell_graphic_popup_pane_t2

0x05ae,	// (0x00034701) grid_highlight_pane_cp3

0x06f7,	// (0x0003484a) list_gen_pane_ParamLimits

0x06f7,	// (0x0003484a) list_gen_pane

0x0720,	// (0x00034873) scroll_pane

0x52c3,	// (0x00039416) bg_list_pane_g1_ParamLimits

0x52c3,	// (0x00039416) bg_list_pane_g1

0x270f,	// (0x00036862) bg_list_pane_g2_ParamLimits

0x270f,	// (0x00036862) bg_list_pane_g2

0x2722,	// (0x00036875) bg_list_pane_g3_ParamLimits

0x2722,	// (0x00036875) bg_list_pane_g3

0x2734,	// (0x00036887) bg_list_pane_g4_ParamLimits

0x2734,	// (0x00036887) bg_list_pane_g4

0x52da,	// (0x0003942d) bg_list_pane_g5_ParamLimits

0x52da,	// (0x0003942d) bg_list_pane_g5

0x0004,

0xf977,	// (0x00043aca) bg_list_pane_g_ParamLimits

0xf977,	// (0x00043aca) bg_list_pane_g

0x529f,	// (0x000393f2) list_double2_graphic_large_graphic_pane_ParamLimits

0x529f,	// (0x000393f2) list_double2_graphic_large_graphic_pane

0x529f,	// (0x000393f2) list_double2_graphic_pane_ParamLimits

0x529f,	// (0x000393f2) list_double2_graphic_pane

0x529f,	// (0x000393f2) list_double2_large_graphic_pane_ParamLimits

0x529f,	// (0x000393f2) list_double2_large_graphic_pane

0x529f,	// (0x000393f2) list_double2_pane_ParamLimits

0x529f,	// (0x000393f2) list_double2_pane

0x529f,	// (0x000393f2) list_double_graphic_heading_pane_ParamLimits

0x529f,	// (0x000393f2) list_double_graphic_heading_pane

0x529f,	// (0x000393f2) list_double_graphic_pane_ParamLimits

0x529f,	// (0x000393f2) list_double_graphic_pane

0x529f,	// (0x000393f2) list_double_heading_pane_ParamLimits

0x529f,	// (0x000393f2) list_double_heading_pane

0x529f,	// (0x000393f2) list_double_large_graphic_pane_ParamLimits

0x529f,	// (0x000393f2) list_double_large_graphic_pane

0x529f,	// (0x000393f2) list_double_number_pane_ParamLimits

0x529f,	// (0x000393f2) list_double_number_pane

0x529f,	// (0x000393f2) list_double_pane_ParamLimits

0x529f,	// (0x000393f2) list_double_pane

0x529f,	// (0x000393f2) list_double_time_pane_ParamLimits

0x529f,	// (0x000393f2) list_double_time_pane

0x529f,	// (0x000393f2) list_setting_number_pane_ParamLimits

0x529f,	// (0x000393f2) list_setting_number_pane

0x529f,	// (0x000393f2) list_setting_pane_ParamLimits

0x529f,	// (0x000393f2) list_setting_pane

0xe66a,	// (0x000427bd) list_single_2graphic_pane_ParamLimits

0xe66a,	// (0x000427bd) list_single_2graphic_pane

0xe66a,	// (0x000427bd) list_single_graphic_heading_pane_ParamLimits

0xe66a,	// (0x000427bd) list_single_graphic_heading_pane

0xe66a,	// (0x000427bd) list_single_graphic_pane_ParamLimits

0xe66a,	// (0x000427bd) list_single_graphic_pane

0xe66a,	// (0x000427bd) list_single_heading_pane_ParamLimits

0xe66a,	// (0x000427bd) list_single_heading_pane

0xe6aa,	// (0x000427fd) list_single_large_graphic_pane_ParamLimits

0xe6aa,	// (0x000427fd) list_single_large_graphic_pane

0xe66a,	// (0x000427bd) list_single_number_heading_pane_ParamLimits

0xe66a,	// (0x000427bd) list_single_number_heading_pane

0xe66a,	// (0x000427bd) list_single_number_pane_ParamLimits

0xe66a,	// (0x000427bd) list_single_number_pane

0xe66a,	// (0x000427bd) list_single_pane_ParamLimits

0xe66a,	// (0x000427bd) list_single_pane

0x016b,	// (0x000342be) list_highlight_pane_cp1

0x0755,	// (0x000348a8) list_single_pane_g1_ParamLimits

0x0755,	// (0x000348a8) list_single_pane_g1

0xdcf3,	// (0x00041e46) list_single_pane_g2_ParamLimits

0xdcf3,	// (0x00041e46) list_single_pane_g2

0x0001,

0xf5ad,	// (0x00043700) list_single_pane_g_ParamLimits

0xf5ad,	// (0x00043700) list_single_pane_g

0xe5ff,	// (0x00042752) list_single_pane_t1_ParamLimits

0xe5ff,	// (0x00042752) list_single_pane_t1

0x0755,	// (0x000348a8) list_single_number_pane_g1_ParamLimits

0x0755,	// (0x000348a8) list_single_number_pane_g1

0xdcf3,	// (0x00041e46) list_single_number_pane_g2_ParamLimits

0xdcf3,	// (0x00041e46) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x00043700) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x00043700) list_single_number_pane_g

0xdcff,	// (0x00041e52) list_single_number_pane_t1_ParamLimits

0xdcff,	// (0x00041e52) list_single_number_pane_t1

0xe5be,	// (0x00042711) list_single_number_pane_t2_ParamLimits

0xe5be,	// (0x00042711) list_single_number_pane_t2

0x0001,

0xf938,	// (0x00043a8b) list_single_number_pane_t_ParamLimits

0xf938,	// (0x00043a8b) list_single_number_pane_t

0xdce7,	// (0x00041e3a) list_single_graphic_pane_g1_ParamLimits

0xdce7,	// (0x00041e3a) list_single_graphic_pane_g1

0x0755,	// (0x000348a8) list_single_graphic_pane_g2_ParamLimits

0x0755,	// (0x000348a8) list_single_graphic_pane_g2

0xdcf3,	// (0x00041e46) list_single_graphic_pane_g3_ParamLimits

0xdcf3,	// (0x00041e46) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x000436ef) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x000436ef) list_single_graphic_pane_g

0xdcff,	// (0x00041e52) list_single_graphic_pane_t1_ParamLimits

0xdcff,	// (0x00041e52) list_single_graphic_pane_t1

0xdd15,	// (0x00041e68) list_single_heading_pane_g1_ParamLimits

0xdd15,	// (0x00041e68) list_single_heading_pane_g1

0xdcf3,	// (0x00041e46) list_single_heading_pane_g2_ParamLimits

0xdcf3,	// (0x00041e46) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x000436f6) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x000436f6) list_single_heading_pane_g

0xdd28,	// (0x00041e7b) list_single_heading_pane_t1_ParamLimits

0xdd28,	// (0x00041e7b) list_single_heading_pane_t1

0xdd3e,	// (0x00041e91) list_single_heading_pane_t2_ParamLimits

0xdd3e,	// (0x00041e91) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x000436fb) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x000436fb) list_single_heading_pane_t

0x0755,	// (0x000348a8) list_single_number_heading_pane_g1_ParamLimits

0x0755,	// (0x000348a8) list_single_number_heading_pane_g1

0xdcf3,	// (0x00041e46) list_single_number_heading_pane_g2_ParamLimits

0xdcf3,	// (0x00041e46) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x00043700) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x00043700) list_single_number_heading_pane_g

0xdd50,	// (0x00041ea3) list_single_number_heading_pane_t1_ParamLimits

0xdd50,	// (0x00041ea3) list_single_number_heading_pane_t1

0xdd66,	// (0x00041eb9) list_single_number_heading_pane_t2_ParamLimits

0xdd66,	// (0x00041eb9) list_single_number_heading_pane_t2

0xdd78,	// (0x00041ecb) list_single_number_heading_pane_t3_ParamLimits

0xdd78,	// (0x00041ecb) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x00043705) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x00043705) list_single_number_heading_pane_t

0xdd8a,	// (0x00041edd) list_single_graphic_heading_pane_g1_ParamLimits

0xdd8a,	// (0x00041edd) list_single_graphic_heading_pane_g1

0xdd9e,	// (0x00041ef1) list_single_graphic_heading_pane_g4_ParamLimits

0xdd9e,	// (0x00041ef1) list_single_graphic_heading_pane_g4

0xdcf3,	// (0x00041e46) list_single_graphic_heading_pane_g5_ParamLimits

0xdcf3,	// (0x00041e46) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0004370c) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0004370c) list_single_graphic_heading_pane_g

0xdd50,	// (0x00041ea3) list_single_graphic_heading_pane_t1_ParamLimits

0xdd50,	// (0x00041ea3) list_single_graphic_heading_pane_t1

0xddad,	// (0x00041f00) list_single_graphic_heading_pane_t2_ParamLimits

0xddad,	// (0x00041f00) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x00043713) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x00043713) list_single_graphic_heading_pane_t

0xddc5,	// (0x00041f18) list_single_large_graphic_pane_g1_ParamLimits

0xddc5,	// (0x00041f18) list_single_large_graphic_pane_g1

0xddd1,	// (0x00041f24) list_single_large_graphic_pane_g2_ParamLimits

0xddd1,	// (0x00041f24) list_single_large_graphic_pane_g2

0xdddd,	// (0x00041f30) list_single_large_graphic_pane_g3_ParamLimits

0xdddd,	// (0x00041f30) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x00043718) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x00043718) list_single_large_graphic_pane_g

0x1a93,	// (0x00035be6) wait_border_pane_g2_copy1

0xdde9,	// (0x00041f3c) list_single_large_graphic_pane_g4_cp2

0xddf1,	// (0x00041f44) list_single_large_graphic_pane_t1_ParamLimits

0xddf1,	// (0x00041f44) list_single_large_graphic_pane_t1

0xde07,	// (0x00041f5a) list_double_pane_g1_ParamLimits

0xde07,	// (0x00041f5a) list_double_pane_g1

0xde13,	// (0x00041f66) list_double_pane_g2_ParamLimits

0xde13,	// (0x00041f66) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0004371f) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0004371f) list_double_pane_g

0xde1f,	// (0x00041f72) list_double_pane_t1_ParamLimits

0xde1f,	// (0x00041f72) list_double_pane_t1

0xde35,	// (0x00041f88) list_double_pane_t2_ParamLimits

0xde35,	// (0x00041f88) list_double_pane_t2

0x0001,

0xf5d1,	// (0x00043724) list_double_pane_t_ParamLimits

0xf5d1,	// (0x00043724) list_double_pane_t

0xde47,	// (0x00041f9a) list_double2_pane_g1_ParamLimits

0xde47,	// (0x00041f9a) list_double2_pane_g1

0xde56,	// (0x00041fa9) list_double2_pane_g2_ParamLimits

0xde56,	// (0x00041fa9) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x00043729) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x00043729) list_double2_pane_g

0xde62,	// (0x00041fb5) list_double2_pane_t1_ParamLimits

0xde62,	// (0x00041fb5) list_double2_pane_t1

0xde78,	// (0x00041fcb) list_double2_pane_t2_ParamLimits

0xde78,	// (0x00041fcb) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0004372e) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0004372e) list_double2_pane_t

0xde07,	// (0x00041f5a) list_double_number_pane_g1_ParamLimits

0xde07,	// (0x00041f5a) list_double_number_pane_g1

0xde13,	// (0x00041f66) list_double_number_pane_g2_ParamLimits

0xde13,	// (0x00041f66) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0004371f) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0004371f) list_double_number_pane_g

0xde8a,	// (0x00041fdd) list_double_number_pane_t1_ParamLimits

0xde8a,	// (0x00041fdd) list_double_number_pane_t1

0xde9c,	// (0x00041fef) list_double_number_pane_t2_ParamLimits

0xde9c,	// (0x00041fef) list_double_number_pane_t2

0xdeb2,	// (0x00042005) list_double_number_pane_t3_ParamLimits

0xdeb2,	// (0x00042005) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x00043733) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x00043733) list_double_number_pane_t

0xdec4,	// (0x00042017) list_double_graphic_pane_g1_ParamLimits

0xdec4,	// (0x00042017) list_double_graphic_pane_g1

0xded0,	// (0x00042023) list_double_graphic_pane_g2_ParamLimits

0xded0,	// (0x00042023) list_double_graphic_pane_g2

0xdedf,	// (0x00042032) list_double_graphic_pane_g3_ParamLimits

0xdedf,	// (0x00042032) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x0004373a) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x0004373a) list_double_graphic_pane_g

0xdef7,	// (0x0004204a) list_double_graphic_pane_t1_ParamLimits

0xdef7,	// (0x0004204a) list_double_graphic_pane_t1

0xdf0d,	// (0x00042060) list_double_graphic_pane_t2_ParamLimits

0xdf0d,	// (0x00042060) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x00043743) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x00043743) list_double_graphic_pane_t

0xdf1f,	// (0x00042072) list_double2_graphic_pane_g1_ParamLimits

0xdf1f,	// (0x00042072) list_double2_graphic_pane_g1

0xdf2b,	// (0x0004207e) list_double2_graphic_pane_g2_ParamLimits

0xdf2b,	// (0x0004207e) list_double2_graphic_pane_g2

0xdf37,	// (0x0004208a) list_double2_graphic_pane_g3_ParamLimits

0xdf37,	// (0x0004208a) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x00043748) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x00043748) list_double2_graphic_pane_g

0xdf43,	// (0x00042096) list_double2_graphic_pane_t1_ParamLimits

0xdf43,	// (0x00042096) list_double2_graphic_pane_t1

0xdf59,	// (0x000420ac) list_double2_graphic_pane_t2_ParamLimits

0xdf59,	// (0x000420ac) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0004374f) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0004374f) list_double2_graphic_pane_t

0xdf6b,	// (0x000420be) list_double_large_graphic_pane_g1_ParamLimits

0xdf6b,	// (0x000420be) list_double_large_graphic_pane_g1

0xdf94,	// (0x000420e7) list_double_large_graphic_pane_g2_ParamLimits

0xdf94,	// (0x000420e7) list_double_large_graphic_pane_g2

0xde13,	// (0x00041f66) list_double_large_graphic_pane_g3_ParamLimits

0xde13,	// (0x00041f66) list_double_large_graphic_pane_g3

0xdfa8,	// (0x000420fb) list_double_large_graphic_pane_g4_ParamLimits

0xdfa8,	// (0x000420fb) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x00043754) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00043754) list_double_large_graphic_pane_g

0xdfce,	// (0x00042121) list_double_large_graphic_pane_t1_ParamLimits

0xdfce,	// (0x00042121) list_double_large_graphic_pane_t1

0xdfe7,	// (0x0004213a) list_double_large_graphic_pane_t2_ParamLimits

0xdfe7,	// (0x0004213a) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x0004375f) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x0004375f) list_double_large_graphic_pane_t

0xdff9,	// (0x0004214c) list_double2_large_graphic_pane_g1_ParamLimits

0xdff9,	// (0x0004214c) list_double2_large_graphic_pane_g1

0xe005,	// (0x00042158) list_double2_large_graphic_pane_g2_ParamLimits

0xe005,	// (0x00042158) list_double2_large_graphic_pane_g2

0xdf37,	// (0x0004208a) list_double2_large_graphic_pane_g3_ParamLimits

0xdf37,	// (0x0004208a) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x00043764) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x00043764) list_double2_large_graphic_pane_g

0xe014,	// (0x00042167) list_double2_large_graphic_pane_t1_ParamLimits

0xe014,	// (0x00042167) list_double2_large_graphic_pane_t1

0xe02a,	// (0x0004217d) list_double2_large_graphic_pane_t2_ParamLimits

0xe02a,	// (0x0004217d) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x0004376b) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x0004376b) list_double2_large_graphic_pane_t

0xe03c,	// (0x0004218f) list_double_heading_pane_g1_ParamLimits

0xe03c,	// (0x0004218f) list_double_heading_pane_g1

0xe04b,	// (0x0004219e) list_double_heading_pane_g2_ParamLimits

0xe04b,	// (0x0004219e) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x00043770) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x00043770) list_double_heading_pane_g

0xe057,	// (0x000421aa) list_double_heading_pane_t1_ParamLimits

0xe057,	// (0x000421aa) list_double_heading_pane_t1

0xde78,	// (0x00041fcb) list_double_heading_pane_t2_ParamLimits

0xde78,	// (0x00041fcb) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x00043775) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x00043775) list_double_heading_pane_t

0xe06d,	// (0x000421c0) list_double_graphic_heading_pane_g1_ParamLimits

0xe06d,	// (0x000421c0) list_double_graphic_heading_pane_g1

0xe03c,	// (0x0004218f) list_double_graphic_heading_pane_g2_ParamLimits

0xe03c,	// (0x0004218f) list_double_graphic_heading_pane_g2

0xe04b,	// (0x0004219e) list_double_graphic_heading_pane_g3_ParamLimits

0xe04b,	// (0x0004219e) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x0004377a) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x0004377a) list_double_graphic_heading_pane_g

0xe079,	// (0x000421cc) list_double_graphic_heading_pane_t1_ParamLimits

0xe079,	// (0x000421cc) list_double_graphic_heading_pane_t1

0xdf59,	// (0x000420ac) list_double_graphic_heading_pane_t2_ParamLimits

0xdf59,	// (0x000420ac) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x00043781) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x00043781) list_double_graphic_heading_pane_t

0xe08f,	// (0x000421e2) list_double_time_pane_g1_ParamLimits

0xe08f,	// (0x000421e2) list_double_time_pane_g1

0xe09e,	// (0x000421f1) list_double_time_pane_g2_ParamLimits

0xe09e,	// (0x000421f1) list_double_time_pane_g2

0x0001,

0xf633,	// (0x00043786) list_double_time_pane_g_ParamLimits

0xf633,	// (0x00043786) list_double_time_pane_g

0xe0aa,	// (0x000421fd) list_double_time_pane_t1_ParamLimits

0xe0aa,	// (0x000421fd) list_double_time_pane_t1

0xe0c0,	// (0x00042213) list_double_time_pane_t2_ParamLimits

0xe0c0,	// (0x00042213) list_double_time_pane_t2

0xe0d2,	// (0x00042225) list_double_time_pane_t3_ParamLimits

0xe0d2,	// (0x00042225) list_double_time_pane_t3

0xe0e4,	// (0x00042237) list_double_time_pane_t4_ParamLimits

0xe0e4,	// (0x00042237) list_double_time_pane_t4

0x0003,

0xf638,	// (0x0004378b) list_double_time_pane_t_ParamLimits

0xf638,	// (0x0004378b) list_double_time_pane_t

0xe0f6,	// (0x00042249) list_setting_pane_g1_ParamLimits

0xe0f6,	// (0x00042249) list_setting_pane_g1

0xe102,	// (0x00042255) list_setting_pane_g2_ParamLimits

0xe102,	// (0x00042255) list_setting_pane_g2

0x0001,

0xf641,	// (0x00043794) list_setting_pane_g_ParamLimits

0xf641,	// (0x00043794) list_setting_pane_g

0xe10e,	// (0x00042261) list_setting_pane_t1_ParamLimits

0xe10e,	// (0x00042261) list_setting_pane_t1

0xe128,	// (0x0004227b) list_setting_pane_t2_ParamLimits

0xe128,	// (0x0004227b) list_setting_pane_t2

0x0002,

0xf646,	// (0x00043799) list_setting_pane_t_ParamLimits

0xf646,	// (0x00043799) list_setting_pane_t

0xe165,	// (0x000422b8) set_value_pane_cp_ParamLimits

0xe165,	// (0x000422b8) set_value_pane_cp

0xe171,	// (0x000422c4) list_setting_number_pane_g1_ParamLimits

0xe171,	// (0x000422c4) list_setting_number_pane_g1

0xe17d,	// (0x000422d0) list_setting_number_pane_g2_ParamLimits

0xe17d,	// (0x000422d0) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x000437a0) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x000437a0) list_setting_number_pane_g

0xe189,	// (0x000422dc) list_setting_number_pane_t1_ParamLimits

0xe189,	// (0x000422dc) list_setting_number_pane_t1

0xe1a0,	// (0x000422f3) list_setting_number_pane_t2_ParamLimits

0xe1a0,	// (0x000422f3) list_setting_number_pane_t2

0xe1ba,	// (0x0004230d) list_setting_number_pane_t3_ParamLimits

0xe1ba,	// (0x0004230d) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x000437a5) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x000437a5) list_setting_number_pane_t

0xe165,	// (0x000422b8) set_value_pane_ParamLimits

0xe165,	// (0x000422b8) set_value_pane

0x0761,	// (0x000348b4) bg_set_opt_pane_ParamLimits

0x0761,	// (0x000348b4) bg_set_opt_pane

0xe1fb,	// (0x0004234e) set_value_pane_t1

0x0782,	// (0x000348d5) slider_set_pane_cp3

0x078b,	// (0x000348de) volume_small_pane_cp

0x0794,	// (0x000348e7) list_form_gen_pane

0x0744,	// (0x00034897) scroll_pane_cp8

0xe219,	// (0x0004236c) form_field_data_pane_ParamLimits

0xe219,	// (0x0004236c) form_field_data_pane

0xe239,	// (0x0004238c) form_field_data_wide_pane_ParamLimits

0xe239,	// (0x0004238c) form_field_data_wide_pane

0xe258,	// (0x000423ab) form_field_popup_pane_ParamLimits

0xe258,	// (0x000423ab) form_field_popup_pane

0xe270,	// (0x000423c3) form_field_popup_wide_pane_ParamLimits

0xe270,	// (0x000423c3) form_field_popup_wide_pane

0xe287,	// (0x000423da) form_field_slider_pane_ParamLimits

0xe287,	// (0x000423da) form_field_slider_pane

0xe29a,	// (0x000423ed) form_field_slider_wide_pane_ParamLimits

0xe29a,	// (0x000423ed) form_field_slider_wide_pane

0x079d,	// (0x000348f0) data_form_pane

0xe2b5,	// (0x00042408) form_field_data_pane_t1

0x07a9,	// (0x000348fc) input_focus_pane

0x07b7,	// (0x0003490a) data_form_wide_pane

0xe2d9,	// (0x0004242c) form_field_data_wide_pane_t1

0x05c3,	// (0x00034716) input_focus_pane_cp6

0xe2fb,	// (0x0004244e) form_field_popup_pane_t1

0x07a9,	// (0x000348fc) input_focus_pane_cp7

0x079d,	// (0x000348f0) list_form_pane

0xe31b,	// (0x0004246e) form_field_popup_wide_pane_t1

0x07a9,	// (0x000348fc) input_focus_pane_cp8

0x07d7,	// (0x0003492a) list_form_wide_pane

0xe338,	// (0x0004248b) form_field_slider_pane_t1_ParamLimits

0xe338,	// (0x0004248b) form_field_slider_pane_t1

0xe34e,	// (0x000424a1) form_field_slider_pane_t2_ParamLimits

0xe34e,	// (0x000424a1) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x000437b5) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x000437b5) form_field_slider_pane_t

0x02f4,	// (0x00034447) input_focus_pane_cp9_ParamLimits

0x02f4,	// (0x00034447) input_focus_pane_cp9

0xe363,	// (0x000424b6) slider_cont_pane_ParamLimits

0xe363,	// (0x000424b6) slider_cont_pane

0x07e6,	// (0x00034939) form_field_slider_wide_pane_t1_ParamLimits

0x07e6,	// (0x00034939) form_field_slider_wide_pane_t1

0xe377,	// (0x000424ca) form_field_slider_wide_pane_t2_ParamLimits

0xe377,	// (0x000424ca) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x000437ba) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x000437ba) form_field_slider_wide_pane_t

0x02f4,	// (0x00034447) input_focus_pane_cp10_ParamLimits

0x02f4,	// (0x00034447) input_focus_pane_cp10

0xe389,	// (0x000424dc) slider_cont_pane_cp1_ParamLimits

0xe389,	// (0x000424dc) slider_cont_pane_cp1

0xe39f,	// (0x000424f2) slider_form_pane_cp

0x07f8,	// (0x0003494b) input_focus_pane_g1

0x0800,	// (0x00034953) input_focus_pane_g2

0x0808,	// (0x0003495b) input_focus_pane_g3

0x0810,	// (0x00034963) input_focus_pane_g4

0x0818,	// (0x0003496b) input_focus_pane_g5

0x0820,	// (0x00034973) input_focus_pane_g6

0x0828,	// (0x0003497b) input_focus_pane_g7

0x0830,	// (0x00034983) input_focus_pane_g8

0x0838,	// (0x0003498b) input_focus_pane_g9

0x00e9,	// (0x0003423c) input_focus_pane_g10

0x0009,

0xf66c,	// (0x000437bf) input_focus_pane_g

0x1a9c,	// (0x00035bef) wait_border_pane_g3_copy1

0xe3a7,	// (0x000424fa) data_form_pane_t1

0x00e9,	// (0x0003423c) wait_anim_pane_g1_copy1

0xe5d0,	// (0x00042723) data_form_wide_pane_t1

0xe3c1,	// (0x00042514) list_form_graphic_pane_cp_ParamLimits

0xe3c1,	// (0x00042514) list_form_graphic_pane_cp

0x26c6,	// (0x00036819) slider_form_pane_g1

0x26cf,	// (0x00036822) slider_form_pane_g2

0x0006,

0xf968,	// (0x00043abb) slider_form_pane_g

0xe3d5,	// (0x00042528) list_form_graphic_pane_ParamLimits

0xe3d5,	// (0x00042528) list_form_graphic_pane

0xe3eb,	// (0x0004253e) list_form_graphic_pane_g1

0xe3f3,	// (0x00042546) list_form_graphic_pane_t1_ParamLimits

0xe3f3,	// (0x00042546) list_form_graphic_pane_t1

0x01b9,	// (0x0003430c) list_highlight_pane_cp5_ParamLimits

0x01b9,	// (0x0003430c) list_highlight_pane_cp5

0xe408,	// (0x0004255b) find_pane_g1

0x0840,	// (0x00034993) input_find_pane

0xe411,	// (0x00042564) input_find_pane_g1_ParamLimits

0xe411,	// (0x00042564) input_find_pane_g1

0xe41d,	// (0x00042570) input_find_pane_t1_ParamLimits

0xe41d,	// (0x00042570) input_find_pane_t1

0xe432,	// (0x00042585) input_find_pane_t2_ParamLimits

0xe432,	// (0x00042585) input_find_pane_t2

0x0001,

0xf681,	// (0x000437d4) input_find_pane_t_ParamLimits

0xf681,	// (0x000437d4) input_find_pane_t

0x0849,	// (0x0003499c) input_focus_pane_cp5_ParamLimits

0x0849,	// (0x0003499c) input_focus_pane_cp5

0x02f4,	// (0x00034447) bg_popup_window_pane_cp2_ParamLimits

0x02f4,	// (0x00034447) bg_popup_window_pane_cp2

0x0868,	// (0x000349bb) listscroll_menu_pane_ParamLimits

0x0868,	// (0x000349bb) listscroll_menu_pane

0x0874,	// (0x000349c7) popup_submenu_window_ParamLimits

0x0874,	// (0x000349c7) popup_submenu_window

0x0898,	// (0x000349eb) find_popup_pane_g1

0x08a0,	// (0x000349f3) input_popup_find_pane_cp

0x08aa,	// (0x000349fd) input_focus_pane_cp4_ParamLimits

0x08aa,	// (0x000349fd) input_focus_pane_cp4

0x08b8,	// (0x00034a0b) input_popup_find_pane_t1_ParamLimits

0x08b8,	// (0x00034a0b) input_popup_find_pane_t1

0x016b,	// (0x000342be) bg_popup_sub_pane_cp

0x08e6,	// (0x00034a39) listscroll_popup_sub_pane

0x08ee,	// (0x00034a41) list_submenu_pane_ParamLimits

0x08ee,	// (0x00034a41) list_submenu_pane

0x08ff,	// (0x00034a52) scroll_pane_cp4

0x0907,	// (0x00034a5a) list_single_popup_submenu_pane_ParamLimits

0x0907,	// (0x00034a5a) list_single_popup_submenu_pane

0x0919,	// (0x00034a6c) list_single_popup_submenu_pane_g1

0x0921,	// (0x00034a74) list_single_popup_submenu_pane_t1_ParamLimits

0x0921,	// (0x00034a74) list_single_popup_submenu_pane_t1

0x01b9,	// (0x0003430c) bg_active_tab_pane_cp1_ParamLimits

0x01b9,	// (0x0003430c) bg_active_tab_pane_cp1

0x496d,	// (0x00038ac0) tabs_2_active_pane_g1

0x4975,	// (0x00038ac8) tabs_2_active_pane_t1

0x01b9,	// (0x0003430c) bg_passive_tab_pane_cp1_ParamLimits

0x01b9,	// (0x0003430c) bg_passive_tab_pane_cp1

0x496d,	// (0x00038ac0) tabs_2_passive_pane_g1

0x4975,	// (0x00038ac8) tabs_2_passive_pane_t1

0x4987,	// (0x00038ada) bg_active_tab_pane_cp4

0x4995,	// (0x00038ae8) tabs_2_long_active_pane_t1

0x49a8,	// (0x00038afb) bg_passive_tab_pane_cp4

0xbe62,	// (0x0003ffb5) list_single_midp_graphic_pane_g4_ParamLimits

0x4987,	// (0x00038ada) bg_active_tab_pane_cp5

0x49b4,	// (0x00038b07) tabs_3_long_active_pane_t1

0x49a8,	// (0x00038afb) bg_passive_tab_pane_cp5

0xbe62,	// (0x0003ffb5) list_single_midp_graphic_pane_g4

0x01b9,	// (0x0003430c) bg_popup_window_pane_cp13_ParamLimits

0x01b9,	// (0x0003430c) bg_popup_window_pane_cp13

0x093f,	// (0x00034a92) listscroll_popup_fast_pane_ParamLimits

0x093f,	// (0x00034a92) listscroll_popup_fast_pane

0x094e,	// (0x00034aa1) grid_popup_fast_pane_ParamLimits

0x094e,	// (0x00034aa1) grid_popup_fast_pane

0x0960,	// (0x00034ab3) scroll_pane_cp9_ParamLimits

0x0960,	// (0x00034ab3) scroll_pane_cp9

0x3990,	// (0x00037ae3) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x3990,	// (0x00037ae3) list_single_graphic_hl_pane_t1_cp2

0x0984,	// (0x00034ad7) input_focus_pane_cp20_ParamLimits

0x0984,	// (0x00034ad7) input_focus_pane_cp20

0x0992,	// (0x00034ae5) query_popup_data_pane_t1_ParamLimits

0x0992,	// (0x00034ae5) query_popup_data_pane_t1

0x09a5,	// (0x00034af8) query_popup_data_pane_t2_ParamLimits

0x09a5,	// (0x00034af8) query_popup_data_pane_t2

0x09eb,	// (0x00034b3e) query_popup_data_pane_t3_ParamLimits

0x09eb,	// (0x00034b3e) query_popup_data_pane_t3

0x0a2c,	// (0x00034b7f) query_popup_data_pane_t4_ParamLimits

0x0a2c,	// (0x00034b7f) query_popup_data_pane_t4

0x0a68,	// (0x00034bbb) query_popup_data_pane_t5_ParamLimits

0x0a68,	// (0x00034bbb) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x000437d9) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x000437d9) query_popup_data_pane_t

0x07f8,	// (0x0003494b) bg_set_opt_pane_g1

0x0800,	// (0x00034953) bg_set_opt_pane_g2

0x0808,	// (0x0003495b) bg_set_opt_pane_g3

0x0810,	// (0x00034963) bg_set_opt_pane_g4

0x0818,	// (0x0003496b) bg_set_opt_pane_g5

0x0820,	// (0x00034973) bg_set_opt_pane_g6

0x0828,	// (0x0003497b) bg_set_opt_pane_g7

0x0830,	// (0x00034983) bg_set_opt_pane_g8

0x0838,	// (0x0003498b) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x000437e4) bg_set_opt_pane_g

0xb62d,	// (0x0003f780) control_top_pane_stacon_ParamLimits

0xb62d,	// (0x0003f780) control_top_pane_stacon

0xb680,	// (0x0003f7d3) signal_pane_stacon_ParamLimits

0xb680,	// (0x0003f7d3) signal_pane_stacon

0x0e5b,	// (0x00034fae) stacon_top_pane_g1_ParamLimits

0x0e5b,	// (0x00034fae) stacon_top_pane_g1

0xb6a5,	// (0x0003f7f8) title_pane_stacon_ParamLimits

0xb6a5,	// (0x0003f7f8) title_pane_stacon

0xb6c7,	// (0x0003f81a) uni_indicator_pane_stacon_ParamLimits

0xb6c7,	// (0x0003f81a) uni_indicator_pane_stacon

0xb6dc,	// (0x0003f82f) battery_pane_stacon_ParamLimits

0xb6dc,	// (0x0003f82f) battery_pane_stacon

0xb71c,	// (0x0003f86f) control_bottom_pane_stacon_ParamLimits

0xb71c,	// (0x0003f86f) control_bottom_pane_stacon

0xb73b,	// (0x0003f88e) navi_pane_stacon_ParamLimits

0xb73b,	// (0x0003f88e) navi_pane_stacon

0x0e7d,	// (0x00034fd0) stacon_bottom_pane_g1_ParamLimits

0x0e7d,	// (0x00034fd0) stacon_bottom_pane_g1

0x0a9f,	// (0x00034bf2) aid_levels_signal_lsc_ParamLimits

0x0a9f,	// (0x00034bf2) aid_levels_signal_lsc

0xb3f9,	// (0x0003f54c) signal_pane_stacon_g1_ParamLimits

0xb3f9,	// (0x0003f54c) signal_pane_stacon_g1

0xb405,	// (0x0003f558) signal_pane_stacon_g2_ParamLimits

0xb405,	// (0x0003f558) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x000437f7) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x000437f7) signal_pane_stacon_g

0xb439,	// (0x0003f58c) title_pane_stacon_t1_ParamLimits

0xb439,	// (0x0003f58c) title_pane_stacon_t1

0x0acd,	// (0x00034c20) uni_indicator_pane_stacon_g1

0x0ad7,	// (0x00034c2a) uni_indicator_pane_stacon_g2

0x0ab9,	// (0x00034c0c) uni_indicator_pane_stacon_g3

0x0ac3,	// (0x00034c16) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x00043803) uni_indicator_pane_stacon_g

0xb45e,	// (0x0003f5b1) control_top_pane_stacon_g1

0xb466,	// (0x0003f5b9) control_top_pane_stacon_t1_ParamLimits

0xb466,	// (0x0003f5b9) control_top_pane_stacon_t1

0x0ae1,	// (0x00034c34) aid_levels_battery_lsc_ParamLimits

0x0ae1,	// (0x00034c34) aid_levels_battery_lsc

0xb497,	// (0x0003f5ea) battery_pane_stacon_g1_ParamLimits

0xb497,	// (0x0003f5ea) battery_pane_stacon_g1

0xb4a3,	// (0x0003f5f6) battery_pane_stacon_g2_ParamLimits

0xb4a3,	// (0x0003f5f6) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x0004380c) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x0004380c) battery_pane_stacon_g

0xb4d2,	// (0x0003f625) navi_icon_pane_stacon

0xb4e2,	// (0x0003f635) navi_navi_pane_stacon

0xb4d2,	// (0x0003f625) navi_text_pane_stacon

0xb45e,	// (0x0003f5b1) control_bottom_pane_stacon_g1

0xb4f2,	// (0x0003f645) control_bottom_pane_stacon_t1_ParamLimits

0xb4f2,	// (0x0003f645) control_bottom_pane_stacon_t1

0x49c6,	// (0x00038b19) grid_app_pane_ParamLimits

0x49c6,	// (0x00038b19) grid_app_pane

0x49e2,	// (0x00038b35) scroll_pane_cp15_ParamLimits

0x49e2,	// (0x00038b35) scroll_pane_cp15

0x49f3,	// (0x00038b46) cell_app_pane_ParamLimits

0x49f3,	// (0x00038b46) cell_app_pane

0x4a17,	// (0x00038b6a) cell_app_pane_g1_ParamLimits

0x4a17,	// (0x00038b6a) cell_app_pane_g1

0x0b09,	// (0x00034c5c) cell_app_pane_g2_ParamLimits

0x0b09,	// (0x00034c5c) cell_app_pane_g2

0x0001,

0xf6be,	// (0x00043811) cell_app_pane_g_ParamLimits

0xf6be,	// (0x00043811) cell_app_pane_g

0x4a3b,	// (0x00038b8e) cell_app_pane_t1_ParamLimits

0x4a3b,	// (0x00038b8e) cell_app_pane_t1

0x0b15,	// (0x00034c68) grid_highlight_pane_ParamLimits

0x0b15,	// (0x00034c68) grid_highlight_pane

0x07f8,	// (0x0003494b) cell_highlight_pane_g1

0x0800,	// (0x00034953) cell_highlight_pane_g2

0x0808,	// (0x0003495b) cell_highlight_pane_g3

0x0810,	// (0x00034963) cell_highlight_pane_g4

0x0818,	// (0x0003496b) cell_highlight_pane_g5

0x0820,	// (0x00034973) cell_highlight_pane_g6

0x0828,	// (0x0003497b) cell_highlight_pane_g7

0x0830,	// (0x00034983) cell_highlight_pane_g8

0x0838,	// (0x0003498b) cell_highlight_pane_g9

0x00e9,	// (0x0003423c) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x000437bf) cell_highlight_pane_g

0x0b26,	// (0x00034c79) bg_scroll_pane

0xb536,	// (0x0003f689) scroll_handle_pane

0x0b6d,	// (0x00034cc0) scroll_bg_pane_g1

0x0b82,	// (0x00034cd5) scroll_bg_pane_g2

0x0b9a,	// (0x00034ced) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x00043816) scroll_bg_pane_g

0x0baf,	// (0x00034d02) scroll_handle_focus_pane_ParamLimits

0x0baf,	// (0x00034d02) scroll_handle_focus_pane

0x0b6d,	// (0x00034cc0) scroll_handle_pane_g1

0x0bbc,	// (0x00034d0f) scroll_handle_pane_g2

0x0b9a,	// (0x00034ced) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x0004381d) scroll_handle_pane_g

0x08aa,	// (0x000349fd) bg_popup_sub_pane_cp21_ParamLimits

0x08aa,	// (0x000349fd) bg_popup_sub_pane_cp21

0x0bd0,	// (0x00034d23) popup_fep_japan_predictive_window_t1_ParamLimits

0x0bd0,	// (0x00034d23) popup_fep_japan_predictive_window_t1

0x0be7,	// (0x00034d3a) popup_fep_japan_predictive_window_t2_ParamLimits

0x0be7,	// (0x00034d3a) popup_fep_japan_predictive_window_t2

0x0c1a,	// (0x00034d6d) popup_fep_japan_predictive_window_t3_ParamLimits

0x0c1a,	// (0x00034d6d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x00043824) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x00043824) popup_fep_japan_predictive_window_t

0x016b,	// (0x000342be) bg_popup_sub_pane_cp23

0x0c51,	// (0x00034da4) listscroll_japin_cand_pane

0x0c59,	// (0x00034dac) popup_fep_japan_candidate_window_t1

0x0c67,	// (0x00034dba) candidate_pane_ParamLimits

0x0c67,	// (0x00034dba) candidate_pane

0x0c7a,	// (0x00034dcd) scroll_pane_cp30

0x0c82,	// (0x00034dd5) list_single_popup_jap_candidate_pane_ParamLimits

0x0c82,	// (0x00034dd5) list_single_popup_jap_candidate_pane

0x016b,	// (0x000342be) list_highlight_pane_cp30

0x0c97,	// (0x00034dea) list_single_popup_jap_candidate_pane_t1

0x4a52,	// (0x00038ba5) level_1_signal

0x4a5f,	// (0x00038bb2) level_2_signal

0x4a6c,	// (0x00038bbf) level_3_signal

0x4a79,	// (0x00038bcc) level_4_signal

0x4a86,	// (0x00038bd9) level_5_signal

0x4a93,	// (0x00038be6) level_6_signal

0x4aa0,	// (0x00038bf3) level_7_signal

0x4a52,	// (0x00038ba5) level_1_battery

0x4a5f,	// (0x00038bb2) level_2_battery

0x4a6c,	// (0x00038bbf) level_3_battery

0x4a79,	// (0x00038bcc) level_4_battery

0x4a86,	// (0x00038bd9) level_5_battery

0x4a93,	// (0x00038be6) level_6_battery

0x4aa0,	// (0x00038bf3) level_7_battery

0x0cbe,	// (0x00034e11) list_menu_pane_ParamLimits

0x0cbe,	// (0x00034e11) list_menu_pane

0x0cd4,	// (0x00034e27) scroll_pane_cp25_ParamLimits

0x0cd4,	// (0x00034e27) scroll_pane_cp25

0x4aad,	// (0x00038c00) list_double2_graphic_pane_cp2_ParamLimits

0x4aad,	// (0x00038c00) list_double2_graphic_pane_cp2

0x4aad,	// (0x00038c00) list_double2_large_graphic_pane_cp2_ParamLimits

0x4aad,	// (0x00038c00) list_double2_large_graphic_pane_cp2

0x4aad,	// (0x00038c00) list_double2_pane_cp2_ParamLimits

0x4aad,	// (0x00038c00) list_double2_pane_cp2

0x4aad,	// (0x00038c00) list_double_graphic_pane_cp2_ParamLimits

0x4aad,	// (0x00038c00) list_double_graphic_pane_cp2

0x4aad,	// (0x00038c00) list_double_large_graphic_pane_cp2_ParamLimits

0x4aad,	// (0x00038c00) list_double_large_graphic_pane_cp2

0x4aad,	// (0x00038c00) list_double_number_pane_cp2_ParamLimits

0x4aad,	// (0x00038c00) list_double_number_pane_cp2

0x4aad,	// (0x00038c00) list_double_pane_cp2_ParamLimits

0x4aad,	// (0x00038c00) list_double_pane_cp2

0x4abd,	// (0x00038c10) list_single_2graphic_pane_cp2_ParamLimits

0x4abd,	// (0x00038c10) list_single_2graphic_pane_cp2

0x4abd,	// (0x00038c10) list_single_graphic_heading_pane_cp2_ParamLimits

0x4abd,	// (0x00038c10) list_single_graphic_heading_pane_cp2

0x4abd,	// (0x00038c10) list_single_graphic_pane_cp2_ParamLimits

0x4abd,	// (0x00038c10) list_single_graphic_pane_cp2

0x4abd,	// (0x00038c10) list_single_heading_pane_cp2_ParamLimits

0x4abd,	// (0x00038c10) list_single_heading_pane_cp2

0x4ad2,	// (0x00038c25) list_single_large_graphic_pane_cp2_ParamLimits

0x4ad2,	// (0x00038c25) list_single_large_graphic_pane_cp2

0x4abd,	// (0x00038c10) list_single_number_heading_pane_cp2_ParamLimits

0x4abd,	// (0x00038c10) list_single_number_heading_pane_cp2

0x4abd,	// (0x00038c10) list_single_number_pane_cp2_ParamLimits

0x4abd,	// (0x00038c10) list_single_number_pane_cp2

0x4ae3,	// (0x00038c36) list_single_pane_cp2_ParamLimits

0x4ae3,	// (0x00038c36) list_single_pane_cp2

0x0cf6,	// (0x00034e49) bg_popup_sub_pane_cp22

0xb5e5,	// (0x0003f738) popup_side_volume_key_window_g1

0xb609,	// (0x0003f75c) popup_side_volume_key_window_t1

0xb625,	// (0x0003f778) volume_small_pane_cp1

0x02f4,	// (0x00034447) bg_popup_sub_pane_cp24_ParamLimits

0x02f4,	// (0x00034447) bg_popup_sub_pane_cp24

0x0d0c,	// (0x00034e5f) fep_china_uni_candidate_pane_ParamLimits

0x0d0c,	// (0x00034e5f) fep_china_uni_candidate_pane

0x0d20,	// (0x00034e73) fep_china_uni_entry_pane

0x0d30,	// (0x00034e83) popup_fep_china_uni_window_g1

0x0d4c,	// (0x00034e9f) fep_china_uni_entry_pane_g1

0x0d54,	// (0x00034ea7) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x00043855) fep_china_uni_entry_pane_g

0x0d5c,	// (0x00034eaf) fep_entry_item_pane

0x0d66,	// (0x00034eb9) fep_candidate_item_pane

0x0d6e,	// (0x00034ec1) fep_china_uni_candidate_pane_g1

0x0d76,	// (0x00034ec9) fep_china_uni_candidate_pane_g2

0x0d7e,	// (0x00034ed1) fep_china_uni_candidate_pane_g3

0x0d86,	// (0x00034ed9) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x0004385a) fep_china_uni_candidate_pane_g

0x00e9,	// (0x0003423c) fep_entry_item_pane_g1

0x0d8e,	// (0x00034ee1) fep_entry_item_pane_t1_ParamLimits

0x0d8e,	// (0x00034ee1) fep_entry_item_pane_t1

0x0da4,	// (0x00034ef7) fep_candidate_item_pane_t1_ParamLimits

0x0da4,	// (0x00034ef7) fep_candidate_item_pane_t1

0x0db9,	// (0x00034f0c) fep_candidate_item_pane_t2_ParamLimits

0x0db9,	// (0x00034f0c) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x00043863) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x00043863) fep_candidate_item_pane_t

0x01b9,	// (0x0003430c) list_highlight_pane_cp31_ParamLimits

0x01b9,	// (0x0003430c) list_highlight_pane_cp31

0x0dcb,	// (0x00034f1e) level_1_signal_lsc

0x0dd4,	// (0x00034f27) level_2_signal_lsc

0x0ddd,	// (0x00034f30) level_3_signal_lsc

0x0de6,	// (0x00034f39) level_4_signal_lsc

0x0def,	// (0x00034f42) level_5_signal_lsc

0x0df8,	// (0x00034f4b) level_6_signal_lsc

0x0e01,	// (0x00034f54) level_7_signal_lsc

0x0e01,	// (0x00034f54) level_1_battery_lsc

0x0e0a,	// (0x00034f5d) level_2_battery_lsc

0x0e13,	// (0x00034f66) level_3_battery_lsc

0x0e1c,	// (0x00034f6f) level_4_battery_lsc

0x0e25,	// (0x00034f78) level_5_battery_lsc

0x0e2e,	// (0x00034f81) level_6_battery_lsc

0x0dcb,	// (0x00034f1e) level_7_battery_lsc

0x0e37,	// (0x00034f8a) scroll_handle_focus_pane_g1

0x0e40,	// (0x00034f93) scroll_handle_focus_pane_g2

0x0e49,	// (0x00034f9c) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x00043868) scroll_handle_focus_pane_g

0xe447,	// (0x0004259a) list_single_2graphic_pane_g1_ParamLimits

0xe447,	// (0x0004259a) list_single_2graphic_pane_g1

0xdd9e,	// (0x00041ef1) list_single_2graphic_pane_g2_ParamLimits

0xdd9e,	// (0x00041ef1) list_single_2graphic_pane_g2

0xdcf3,	// (0x00041e46) list_single_2graphic_pane_g3_ParamLimits

0xdcf3,	// (0x00041e46) list_single_2graphic_pane_g3

0xe453,	// (0x000425a6) list_single_2graphic_pane_g4_ParamLimits

0xe453,	// (0x000425a6) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x0004386f) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x0004386f) list_single_2graphic_pane_g

0xe45f,	// (0x000425b2) list_single_2graphic_pane_t1_ParamLimits

0xe45f,	// (0x000425b2) list_single_2graphic_pane_t1

0xe48d,	// (0x000425e0) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xe48d,	// (0x000425e0) list_double2_graphic_large_graphic_pane_g1

0xe005,	// (0x00042158) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xe005,	// (0x00042158) list_double2_graphic_large_graphic_pane_g2

0xdf37,	// (0x0004208a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xdf37,	// (0x0004208a) list_double2_graphic_large_graphic_pane_g3

0xe49d,	// (0x000425f0) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xe49d,	// (0x000425f0) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x00043878) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x00043878) list_double2_graphic_large_graphic_pane_g

0xe4a9,	// (0x000425fc) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xe4a9,	// (0x000425fc) list_double2_graphic_large_graphic_pane_t1

0xe4bf,	// (0x00042612) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xe4bf,	// (0x00042612) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x00043881) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x00043881) list_double2_graphic_large_graphic_pane_t

0x0f24,	// (0x00035077) popup_fast_swap_window_ParamLimits

0x0f24,	// (0x00035077) popup_fast_swap_window

0x0f40,	// (0x00035093) popup_side_volume_key_window

0x0f5a,	// (0x000350ad) stacon_top_pane

0x0f64,	// (0x000350b7) status_pane_ParamLimits

0x0f64,	// (0x000350b7) status_pane

0x00df,	// (0x00034232) status_small_pane

0x016b,	// (0x000342be) control_pane

0x016b,	// (0x000342be) stacon_bottom_pane

0x0744,	// (0x00034897) scroll_pane_cp121

0x0794,	// (0x000348e7) set_content_pane

0x4b63,	// (0x00038cb6) bg_active_tab_pane_g1_cp1

0x0e52,	// (0x00034fa5) bg_active_tab_pane_g2_cp1

0x4b5a,	// (0x00038cad) bg_active_tab_pane_g3_cp1

0x4b63,	// (0x00038cb6) bg_passive_tab_pane_g1_cp1

0x0e52,	// (0x00034fa5) bg_passive_tab_pane_g2_cp1

0x4b5a,	// (0x00038cad) bg_passive_tab_pane_g3_cp1

0x4b75,	// (0x00038cc8) bg_active_tab_pane_g1_cp2

0x0e52,	// (0x00034fa5) bg_active_tab_pane_g2_cp2

0x4b6c,	// (0x00038cbf) bg_active_tab_pane_g3_cp2

0x4b75,	// (0x00038cc8) bg_passive_tab_pane_g1_cp2

0x0e52,	// (0x00034fa5) bg_passive_tab_pane_g2_cp2

0x4b6c,	// (0x00038cbf) bg_passive_tab_pane_g3_cp2

0x4b87,	// (0x00038cda) bg_active_tab_pane_g1_cp3

0x0e52,	// (0x00034fa5) bg_active_tab_pane_g2_cp3

0x4b7e,	// (0x00038cd1) bg_active_tab_pane_g3_cp3

0x4b87,	// (0x00038cda) bg_passive_tab_pane_g1_cp3

0x0e52,	// (0x00034fa5) bg_passive_tab_pane_g2_cp3

0x4b7e,	// (0x00038cd1) bg_passive_tab_pane_g3_cp3

0x4b99,	// (0x00038cec) bg_active_tab_pane_g1_cp4

0x0e52,	// (0x00034fa5) bg_active_tab_pane_g2_cp4

0x4b90,	// (0x00038ce3) bg_active_tab_pane_g3_cp4

0x4b99,	// (0x00038cec) bg_passive_tab_pane_g1_cp4

0x0e52,	// (0x00034fa5) bg_passive_tab_pane_g2_cp4

0x4b90,	// (0x00038ce3) bg_passive_tab_pane_g3_cp4

0x0ea2,	// (0x00034ff5) bg_active_tab_pane_g1_cp5

0x0e52,	// (0x00034fa5) bg_active_tab_pane_g2_cp5

0x0e99,	// (0x00034fec) bg_active_tab_pane_g3_cp5

0x0ea2,	// (0x00034ff5) bg_passive_tab_pane_g1_cp5

0x0e52,	// (0x00034fa5) bg_passive_tab_pane_g2_cp5

0x0e99,	// (0x00034fec) bg_passive_tab_pane_g3_cp5

0x4ba2,	// (0x00038cf5) list_set_graphic_pane_ParamLimits

0x4ba2,	// (0x00038cf5) list_set_graphic_pane

0x016b,	// (0x000342be) bg_set_opt_pane_cp4

0x0eab,	// (0x00034ffe) list_set_graphic_pane_g1_ParamLimits

0x0eab,	// (0x00034ffe) list_set_graphic_pane_g1

0x0eb7,	// (0x0003500a) list_set_graphic_pane_g2_ParamLimits

0x0eb7,	// (0x0003500a) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x00043886) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x00043886) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x00043bfd) volume_small_pane_cp_g

0x0ed9,	// (0x0003502c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x0ed9,	// (0x0003502c) list_double2_large_graphic_pane_g1_cp2

0x0ee5,	// (0x00035038) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x0ee5,	// (0x00035038) list_double2_large_graphic_pane_g2_cp2

0x0ef4,	// (0x00035047) list_double2_large_graphic_pane_g3_cp2

0x0efc,	// (0x0003504f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0efc,	// (0x0003504f) list_double2_large_graphic_pane_t1_cp2

0x0f12,	// (0x00035065) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x0f12,	// (0x00035065) list_double2_large_graphic_pane_t2_cp2

0x247e,	// (0x000365d1) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x247e,	// (0x000365d1) list_double_large_graphic_pane_g1_cp2

0x248f,	// (0x000365e2) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x248f,	// (0x000365e2) list_double_large_graphic_pane_g2_cp2

0x103f,	// (0x00035192) list_double_large_graphic_pane_g3_cp2

0x249e,	// (0x000365f1) list_double_large_graphic_pane_g4_cp

0x24a6,	// (0x000365f9) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x24a6,	// (0x000365f9) list_double_large_graphic_pane_t1_cp2

0x24bd,	// (0x00036610) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x24bd,	// (0x00036610) list_double_large_graphic_pane_t2_cp2

0x0f72,	// (0x000350c5) list_double2_graphic_pane_g1_cp2_ParamLimits

0x0f72,	// (0x000350c5) list_double2_graphic_pane_g1_cp2

0x0f7e,	// (0x000350d1) list_double2_graphic_pane_g2_cp2_ParamLimits

0x0f7e,	// (0x000350d1) list_double2_graphic_pane_g2_cp2

0x0f8d,	// (0x000350e0) list_double2_graphic_pane_g3_cp2

0x0f95,	// (0x000350e8) list_double2_graphic_pane_t1_cp2_ParamLimits

0x0f95,	// (0x000350e8) list_double2_graphic_pane_t1_cp2

0x0fab,	// (0x000350fe) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0fab,	// (0x000350fe) list_double2_graphic_pane_t2_cp2

0x0fbd,	// (0x00035110) list_single_number_heading_pane_g1_cp2_ParamLimits

0x0fbd,	// (0x00035110) list_single_number_heading_pane_g1_cp2

0x0fc9,	// (0x0003511c) list_single_number_heading_pane_g2_cp2

0x0fd1,	// (0x00035124) list_single_number_heading_pane_t1_cp2_ParamLimits

0x0fd1,	// (0x00035124) list_single_number_heading_pane_t1_cp2

0x0fe7,	// (0x0003513a) list_single_number_heading_pane_t2_cp2_ParamLimits

0x0fe7,	// (0x0003513a) list_single_number_heading_pane_t2_cp2

0x0ff9,	// (0x0003514c) list_single_number_heading_pane_t3_cp2_ParamLimits

0x0ff9,	// (0x0003514c) list_single_number_heading_pane_t3_cp2

0x0fbd,	// (0x00035110) list_single_heading_pane_g1_cp2_ParamLimits

0x0fbd,	// (0x00035110) list_single_heading_pane_g1_cp2

0x0fc9,	// (0x0003511c) list_single_heading_pane_g2_cp2

0x0fd1,	// (0x00035124) list_single_heading_pane_t1_cp2_ParamLimits

0x0fd1,	// (0x00035124) list_single_heading_pane_t1_cp2

0x2288,	// (0x000363db) list_single_heading_pane_t2_cp2_ParamLimits

0x2288,	// (0x000363db) list_single_heading_pane_t2_cp2

0x21d8,	// (0x0003632b) list_double_graphic_pane_g1_cp2_ParamLimits

0x21d8,	// (0x0003632b) list_double_graphic_pane_g1_cp2

0x21e4,	// (0x00036337) list_double_graphic_pane_g2_cp2_ParamLimits

0x21e4,	// (0x00036337) list_double_graphic_pane_g2_cp2

0x21f3,	// (0x00036346) list_double_graphic_pane_g3_cp2

0x21fb,	// (0x0003634e) list_double_graphic_pane_t1_cp2_ParamLimits

0x21fb,	// (0x0003634e) list_double_graphic_pane_t1_cp2

0x2211,	// (0x00036364) list_double_graphic_pane_t2_cp2_ParamLimits

0x2211,	// (0x00036364) list_double_graphic_pane_t2_cp2

0x1033,	// (0x00035186) list_double_number_pane_g1_cp2_ParamLimits

0x1033,	// (0x00035186) list_double_number_pane_g1_cp2

0x103f,	// (0x00035192) list_double_number_pane_g2_cp2

0x219e,	// (0x000362f1) list_double_number_pane_t1_cp2_ParamLimits

0x219e,	// (0x000362f1) list_double_number_pane_t1_cp2

0x21b0,	// (0x00036303) list_double_number_pane_t2_cp2_ParamLimits

0x21b0,	// (0x00036303) list_double_number_pane_t2_cp2

0x21c6,	// (0x00036319) list_double_number_pane_t3_cp2_ParamLimits

0x21c6,	// (0x00036319) list_double_number_pane_t3_cp2

0x2116,	// (0x00036269) list_single_graphic_pane_g1_cp2_ParamLimits

0x2116,	// (0x00036269) list_single_graphic_pane_g1_cp2

0x0fbd,	// (0x00035110) list_single_graphic_pane_g2_cp2_ParamLimits

0x0fbd,	// (0x00035110) list_single_graphic_pane_g2_cp2

0x0fc9,	// (0x0003511c) list_single_graphic_pane_g3_cp2

0x20ee,	// (0x00036241) list_single_graphic_pane_t1_cp2_ParamLimits

0x20ee,	// (0x00036241) list_single_graphic_pane_t1_cp2

0x0fbd,	// (0x00035110) list_single_number_pane_g1_cp2_ParamLimits

0x0fbd,	// (0x00035110) list_single_number_pane_g1_cp2

0x0fc9,	// (0x0003511c) list_single_number_pane_g2_cp2

0x20ee,	// (0x00036241) list_single_number_pane_t1_cp2_ParamLimits

0x20ee,	// (0x00036241) list_single_number_pane_t1_cp2

0x2104,	// (0x00036257) list_single_number_pane_t2_cp2_ParamLimits

0x2104,	// (0x00036257) list_single_number_pane_t2_cp2

0x0ee5,	// (0x00035038) list_double2_pane_g1_cp2_ParamLimits

0x0ee5,	// (0x00035038) list_double2_pane_g1_cp2

0x0ef4,	// (0x00035047) list_double2_pane_g2_cp2

0x100b,	// (0x0003515e) list_double2_pane_t1_cp2_ParamLimits

0x100b,	// (0x0003515e) list_double2_pane_t1_cp2

0x1021,	// (0x00035174) list_double2_pane_t2_cp2_ParamLimits

0x1021,	// (0x00035174) list_double2_pane_t2_cp2

0x1033,	// (0x00035186) list_double_pane_g1_cp2_ParamLimits

0x1033,	// (0x00035186) list_double_pane_g1_cp2

0x103f,	// (0x00035192) list_double_pane_g2_cp2

0x1047,	// (0x0003519a) list_double_pane_t1_cp2_ParamLimits

0x1047,	// (0x0003519a) list_double_pane_t1_cp2

0x105d,	// (0x000351b0) list_double_pane_t2_cp2_ParamLimits

0x105d,	// (0x000351b0) list_double_pane_t2_cp2

0x108c,	// (0x000351df) list_single_pane_cp2_g3

0x0fbd,	// (0x00035110) list_single_pane_g1_cp2_ParamLimits

0x0fbd,	// (0x00035110) list_single_pane_g1_cp2

0x0fc9,	// (0x0003511c) list_single_pane_g2_cp2

0x109c,	// (0x000351ef) list_single_pane_t1_cp2_ParamLimits

0x109c,	// (0x000351ef) list_single_pane_t1_cp2

0x10b4,	// (0x00035207) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x10b4,	// (0x00035207) list_single_large_graphic_pane_g1_cp2

0x10c0,	// (0x00035213) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x10c0,	// (0x00035213) list_single_large_graphic_pane_g2_cp2

0x10cc,	// (0x0003521f) list_single_large_graphic_pane_g3_cp2

0x10d4,	// (0x00035227) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x10d4,	// (0x00035227) list_single_large_graphic_pane_g4_cp1

0x10ee,	// (0x00035241) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x10ee,	// (0x00035241) list_single_large_graphic_pane_t1_cp2

0x20d0,	// (0x00036223) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x20d0,	// (0x00036223) list_single_graphic_heading_pane_g1_cp2

0x20ab,	// (0x000361fe) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x20ab,	// (0x000361fe) list_single_graphic_heading_pane_g4_cp2

0x0fc9,	// (0x0003511c) list_single_graphic_heading_pane_g5_cp2

0x0fd1,	// (0x00035124) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x0fd1,	// (0x00035124) list_single_graphic_heading_pane_t1_cp2

0x20dc,	// (0x0003622f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x20dc,	// (0x0003622f) list_single_graphic_heading_pane_t2_cp2

0x209f,	// (0x000361f2) list_single_2graphic_pane_g1_cp2_ParamLimits

0x209f,	// (0x000361f2) list_single_2graphic_pane_g1_cp2

0x20ab,	// (0x000361fe) list_single_2graphic_pane_g2_cp2_ParamLimits

0x20ab,	// (0x000361fe) list_single_2graphic_pane_g2_cp2

0x0fc9,	// (0x0003511c) list_single_2graphic_pane_g3_cp2

0x157c,	// (0x000356cf) list_single_2graphic_pane_g4_cp2_ParamLimits

0x157c,	// (0x000356cf) list_single_2graphic_pane_g4_cp2

0x20ba,	// (0x0003620d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x20ba,	// (0x0003620d) list_single_2graphic_pane_t1_cp2

0x00e9,	// (0x0003423c) list_highlight_pane_g10_cp1

0x1c73,	// (0x00035dc6) list_highlight_pane_g1_cp1

0x1c7b,	// (0x00035dce) list_highlight_pane_g2_cp1

0x1c83,	// (0x00035dd6) list_highlight_pane_g3_cp1

0x1c8b,	// (0x00035dde) list_highlight_pane_g4_cp1

0x1c93,	// (0x00035de6) list_highlight_pane_g5_cp1

0x1c9b,	// (0x00035dee) list_highlight_pane_g6_cp1

0x1ca3,	// (0x00035df6) list_highlight_pane_g7_cp1

0x1cab,	// (0x00035dfe) list_highlight_pane_g8_cp1

0x1cb3,	// (0x00035e06) list_highlight_pane_g9_cp1

0x502d,	// (0x00039180) form_field_slider_pane_t3

0x503b,	// (0x0003918e) form_field_slider_pane_t4

0x1bbd,	// (0x00035d10) slider_form_pane_ParamLimits

0x1bbd,	// (0x00035d10) slider_form_pane

0x016b,	// (0x000342be) control_abbreviations

0x016b,	// (0x000342be) control_conventions

0x016b,	// (0x000342be) control_definitions

0x016b,	// (0x000342be) format_table_attribute

0x22d2,	// (0x00036425) bg_popup_preview_window_pane_g9

0x016b,	// (0x000342be) format_table_data2

0x016b,	// (0x000342be) format_table_data3

0x016b,	// (0x000342be) format_table_data_example

0x0008,

0x016b,	// (0x000342be) intro_purpose

0xf8c8,	// (0x00043a1b) bg_popup_preview_window_pane_g

0x016b,	// (0x000342be) texts_category

0x016b,	// (0x000342be) texts_graphics

0x1104,	// (0x00035257) text_digital

0x1113,	// (0x00035266) text_primary

0x1122,	// (0x00035275) text_primary_small

0x1131,	// (0x00035284) text_secondary

0x1140,	// (0x00035293) text_title

0x274f,	// (0x000368a2) bg_passive_tab_pane_g1_cp3_srt

0x0e52,	// (0x00034fa5) bg_passive_tab_pane_g2_cp3_srt

0x2746,	// (0x00036899) bg_passive_tab_pane_g3_cp3_srt

0x01b9,	// (0x0003430c) bg_active_tab_pane_cp3_srt_ParamLimits

0x01b9,	// (0x0003430c) bg_active_tab_pane_cp3_srt

0x1d24,	// (0x00035e77) tabs_4_active_pane_srt_g1

0x3afc,	// (0x00037c4f) tabs_4_active_pane_srt_t1_ParamLimits

0x3afc,	// (0x00037c4f) tabs_4_active_pane_srt_t1

0x274f,	// (0x000368a2) bg_active_tab_pane_g1_cp3_copy1

0x0e52,	// (0x00034fa5) bg_active_tab_pane_g2_cp3_copy1

0x2746,	// (0x00036899) bg_active_tab_pane_g3_cp3_copy1

0x01b9,	// (0x0003430c) tabs_2_long_active_pane_srt_ParamLimits

0x01b9,	// (0x0003430c) tabs_2_long_active_pane_srt

0x01b9,	// (0x0003430c) tabs_2_long_passive_pane_srt_ParamLimits

0x01b9,	// (0x0003430c) tabs_2_long_passive_pane_srt

0x49a8,	// (0x00038afb) bg_passive_tab_pane_cp4_srt_ParamLimits

0x49a8,	// (0x00038afb) bg_passive_tab_pane_cp4_srt

0x268a,	// (0x000367dd) bg_passive_tab_pane_g1_cp4_srt

0x0e52,	// (0x00034fa5) bg_passive_tab_pane_g2_cp4_srt

0x2681,	// (0x000367d4) bg_passive_tab_pane_g3_cp4_srt

0x4987,	// (0x00038ada) bg_active_tab_pane_cp4_srt_ParamLimits

0x4987,	// (0x00038ada) bg_active_tab_pane_cp4_srt

0x4995,	// (0x00038ae8) tabs_2_long_active_pane_srt_t1_ParamLimits

0x4995,	// (0x00038ae8) tabs_2_long_active_pane_srt_t1

0x268a,	// (0x000367dd) bg_active_tab_pane_g1_cp4_srt

0x0e52,	// (0x00034fa5) bg_active_tab_pane_g2_cp4_srt

0x2681,	// (0x000367d4) bg_active_tab_pane_g3_cp4_srt

0x02f4,	// (0x00034447) tabs_3_long_active_pane_srt_ParamLimits

0x02f4,	// (0x00034447) tabs_3_long_active_pane_srt

0x02f4,	// (0x00034447) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x02f4,	// (0x00034447) tabs_3_long_passive_pane_cp_srt

0x02f4,	// (0x00034447) tabs_3_long_passive_pane_srt_ParamLimits

0x02f4,	// (0x00034447) tabs_3_long_passive_pane_srt

0x49a8,	// (0x00038afb) bg_passive_tab_pane_cp5_srt_ParamLimits

0x49a8,	// (0x00038afb) bg_passive_tab_pane_cp5_srt

0x0ea2,	// (0x00034ff5) bg_passive_tab_pane_g1_cp5_srt

0x0e52,	// (0x00034fa5) bg_passive_tab_pane_g2_cp5_srt

0x0e99,	// (0x00034fec) bg_passive_tab_pane_g3_cp5_srt

0x4987,	// (0x00038ada) bg_active_tab_pane_cp5_srt_ParamLimits

0x4987,	// (0x00038ada) bg_active_tab_pane_cp5_srt

0x49b4,	// (0x00038b07) tabs_3_long_active_pane_srt_t1_ParamLimits

0x49b4,	// (0x00038b07) tabs_3_long_active_pane_srt_t1

0x0ea2,	// (0x00034ff5) bg_active_tab_pane_g1_cp5_srt

0x0e52,	// (0x00034fa5) bg_active_tab_pane_g2_cp5_srt

0x0e99,	// (0x00034fec) bg_active_tab_pane_g3_cp5_srt

0x2673,	// (0x000367c6) navi_text_pane_srt_t1

0x266b,	// (0x000367be) navi_icon_pane_srt_g1

0x1258,	// (0x000353ab) midp_editing_number_pane_srt

0x114f,	// (0x000352a2) midp_ticker_pane_srt

0x1260,	// (0x000353b3) midp_ticker_pane_srt_g1

0x1268,	// (0x000353bb) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x000438a5) midp_ticker_pane_srt_g

0x1270,	// (0x000353c3) midp_ticker_pane_srt_t1

0x265c,	// (0x000367af) midp_editing_number_pane_t1_copy1

0x4bb9,	// (0x00038d0c) listscroll_midp_pane

0x4bb9,	// (0x00038d0c) midp_form_pane

0x1157,	// (0x000352aa) midp_info_popup_window_ParamLimits

0x1157,	// (0x000352aa) midp_info_popup_window

0x08aa,	// (0x000349fd) bg_popup_sub_pane_cp50_ParamLimits

0x08aa,	// (0x000349fd) bg_popup_sub_pane_cp50

0x18d2,	// (0x00035a25) listscroll_midp_info_pane_ParamLimits

0x18d2,	// (0x00035a25) listscroll_midp_info_pane

0x18ba,	// (0x00035a0d) listscroll_form_midp_pane_ParamLimits

0x18ba,	// (0x00035a0d) listscroll_form_midp_pane

0x18c6,	// (0x00035a19) scroll_bar_cp050

0x5015,	// (0x00039168) list_midp_pane

0x2f38,	// (0x0003708b) signal_pane_g2_cp

0x17ec,	// (0x0003593f) listscroll_midp_info_pane_t1_ParamLimits

0x17ec,	// (0x0003593f) listscroll_midp_info_pane_t1

0x1804,	// (0x00035957) listscroll_midp_info_pane_t2_ParamLimits

0x1804,	// (0x00035957) listscroll_midp_info_pane_t2

0x1842,	// (0x00035995) listscroll_midp_info_pane_t3_ParamLimits

0x1842,	// (0x00035995) listscroll_midp_info_pane_t3

0x187c,	// (0x000359cf) listscroll_midp_info_pane_t4_ParamLimits

0x187c,	// (0x000359cf) listscroll_midp_info_pane_t4

0x0003,

0xf803,	// (0x00043956) listscroll_midp_info_pane_t_ParamLimits

0xf803,	// (0x00043956) listscroll_midp_info_pane_t

0x08ff,	// (0x00034a52) scroll_pane_cp21

0x1790,	// (0x000358e3) form_midp_field_choice_group_pane

0x1799,	// (0x000358ec) form_midp_field_text_pane

0x17d2,	// (0x00035925) form_midp_field_time_pane

0x17da,	// (0x0003592d) form_midp_gauge_slider_pane

0x17e3,	// (0x00035936) form_midp_gauge_wait_pane

0x016b,	// (0x000342be) form_midp_image_pane

0xe5a9,	// (0x000426fc) list_single_midp_pane_ParamLimits

0xe5a9,	// (0x000426fc) list_single_midp_pane

0x175e,	// (0x000358b1) form_midp_field_text_pane_t1

0x15b4,	// (0x00035707) input_focus_pane_cp050

0x177f,	// (0x000358d2) list_midp_form_text_pane

0x172d,	// (0x00035880) form_midp_field_choice_group_pane_t1

0x173b,	// (0x0003588e) input_focus_pane_cp051

0x174f,	// (0x000358a2) list_midp_choice_pane

0x016b,	// (0x000342be) status_idle_pane

0x1711,	// (0x00035864) form_midp_field_time_pane_t1

0x00e9,	// (0x0003423c) wait_anim_pane_g2_copy1

0x171f,	// (0x00035872) form_midp_field_time_pane_t2

0x0001,

0x11c2,	// (0x00035315) aid_navinavi_width_2_pane

0xf7fe,	// (0x00043951) form_midp_field_time_pane_t

0x016b,	// (0x000342be) input_focus_pane_cp052

0x016b,	// (0x000342be) bg_input_focus_pane_cp040

0x16ed,	// (0x00035840) form_midp_gauge_slider_pane_t1

0x16fb,	// (0x0003584e) form_midp_gauge_slider_pane_t2

0x4ff9,	// (0x0003914c) form_midp_gauge_slider_pane_t3

0x5007,	// (0x0003915a) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f5,	// (0x00043948) form_midp_gauge_slider_pane_t

0x1709,	// (0x0003585c) form_midp_slider_pane

0x01b9,	// (0x0003430c) bg_input_focus_pane_cp041_ParamLimits

0x01b9,	// (0x0003430c) bg_input_focus_pane_cp041

0x16bd,	// (0x00035810) form_midp_gauge_wait_pane_t1_ParamLimits

0x16bd,	// (0x00035810) form_midp_gauge_wait_pane_t1

0x16cf,	// (0x00035822) form_midp_gauge_wait_pane_t2_ParamLimits

0x16cf,	// (0x00035822) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f0,	// (0x00043943) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f0,	// (0x00043943) form_midp_gauge_wait_pane_t

0x16e1,	// (0x00035834) form_midp_wait_pane_ParamLimits

0x16e1,	// (0x00035834) form_midp_wait_pane

0x1687,	// (0x000357da) form_midp_image_pane_g1

0x1690,	// (0x000357e3) form_midp_image_pane_t1

0x169f,	// (0x000357f2) form_midp_image_pane_t2

0x16ae,	// (0x00035801) form_midp_image_pane_t3

0x0002,

0xf7e9,	// (0x0004393c) form_midp_image_pane_t

0x167e,	// (0x000357d1) list_single_midp_pane_g1

0xe59a,	// (0x000426ed) list_single_midp_pane_t1

0x166a,	// (0x000357bd) list_midp_form_item_pane_ParamLimits

0x166a,	// (0x000357bd) list_midp_form_item_pane

0x116a,	// (0x000352bd) list_midp_form_item_pane_t1

0x1179,	// (0x000352cc) midp_ticker_pane_g1

0x1185,	// (0x000352d8) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x0004388b) midp_ticker_pane_g

0x1191,	// (0x000352e4) midp_ticker_pane_t1

0x265c,	// (0x000367af) midp_editing_number_pane_t1

0x26f0,	// (0x00036843) midp_editing_number_pane

0x26fc,	// (0x0003684f) midp_ticker_pane

0x264c,	// (0x0003679f) ai_message_heading_pane

0x016b,	// (0x000342be) bg_popup_window_pane_cp14

0x2654,	// (0x000367a7) listscroll_ai_message_pane

0x25d6,	// (0x00036729) ai_message_heading_pane_g1_ParamLimits

0x25d6,	// (0x00036729) ai_message_heading_pane_g1

0x25e2,	// (0x00036735) ai_message_heading_pane_g2_ParamLimits

0x25e2,	// (0x00036735) ai_message_heading_pane_g2

0x25ee,	// (0x00036741) ai_message_heading_pane_g3_ParamLimits

0x25ee,	// (0x00036741) ai_message_heading_pane_g3

0x25fa,	// (0x0003674d) ai_message_heading_pane_g4_ParamLimits

0x25fa,	// (0x0003674d) ai_message_heading_pane_g4

0x0003,

0xf92a,	// (0x00043a7d) ai_message_heading_pane_g_ParamLimits

0xf92a,	// (0x00043a7d) ai_message_heading_pane_g

0x2606,	// (0x00036759) ai_message_heading_pane_t1_ParamLimits

0x2606,	// (0x00036759) ai_message_heading_pane_t1

0x2620,	// (0x00036773) ai_message_heading_pane_t2_ParamLimits

0x2620,	// (0x00036773) ai_message_heading_pane_t2

0x0001,

0xf933,	// (0x00043a86) ai_message_heading_pane_t_ParamLimits

0xf933,	// (0x00043a86) ai_message_heading_pane_t

0x2632,	// (0x00036785) bg_popup_heading_pane_cp1_ParamLimits

0x2632,	// (0x00036785) bg_popup_heading_pane_cp1

0x25c4,	// (0x00036717) list_ai_message_pane_ParamLimits

0x25c4,	// (0x00036717) list_ai_message_pane

0x08ff,	// (0x00034a52) scroll_pane_cp10

0x2560,	// (0x000366b3) list_ai_message_pane_g1

0x2568,	// (0x000366bb) list_ai_message_pane_g2

0x0001,

0xf907,	// (0x00043a5a) list_ai_message_pane_g

0x2570,	// (0x000366c3) list_ai_message_pane_t1_ParamLimits

0x2570,	// (0x000366c3) list_ai_message_pane_t1

0x2585,	// (0x000366d8) list_ai_message_pane_t2_ParamLimits

0x2585,	// (0x000366d8) list_ai_message_pane_t2

0x259a,	// (0x000366ed) list_ai_message_pane_t3_ParamLimits

0x259a,	// (0x000366ed) list_ai_message_pane_t3

0x25af,	// (0x00036702) list_ai_message_pane_t4_ParamLimits

0x25af,	// (0x00036702) list_ai_message_pane_t4

0x0003,

0xf90c,	// (0x00043a5f) list_ai_message_pane_t_ParamLimits

0xf90c,	// (0x00043a5f) list_ai_message_pane_t

0x254e,	// (0x000366a1) cell_ai_soft_ind_pane_ParamLimits

0x254e,	// (0x000366a1) cell_ai_soft_ind_pane

0x11a3,	// (0x000352f6) cell_ai_soft_ind_pane_g1_ParamLimits

0x11a3,	// (0x000352f6) cell_ai_soft_ind_pane_g1

0x016b,	// (0x000342be) grid_highlight_cp1

0x11b0,	// (0x00035303) text_secondary_cp56_ParamLimits

0x11b0,	// (0x00035303) text_secondary_cp56

0x2523,	// (0x00036676) example_general_pane_ParamLimits

0x2523,	// (0x00036676) example_general_pane

0x252f,	// (0x00036682) example_parent_pane_g1_ParamLimits

0x252f,	// (0x00036682) example_parent_pane_g1

0x253b,	// (0x0003668e) example_parent_pane_t1_ParamLimits

0x253b,	// (0x0003668e) example_parent_pane_t1

0xbc30,	// (0x0003fd83) popup_preview_text_window_ParamLimits

0xbc30,	// (0x0003fd83) popup_preview_text_window

0x1094,	// (0x000351e7) list_single_pane_cp2_g4

0x03d0,	// (0x00034523) bg_popup_preview_window_pane_ParamLimits

0x03d0,	// (0x00034523) bg_popup_preview_window_pane

0x22da,	// (0x0003642d) popup_preview_text_window_t1_ParamLimits

0x22da,	// (0x0003642d) popup_preview_text_window_t1

0x22f8,	// (0x0003644b) popup_preview_text_window_t2_ParamLimits

0x22f8,	// (0x0003644b) popup_preview_text_window_t2

0x2341,	// (0x00036494) popup_preview_text_window_t3_ParamLimits

0x2341,	// (0x00036494) popup_preview_text_window_t3

0x2386,	// (0x000364d9) popup_preview_text_window_t4_ParamLimits

0x2386,	// (0x000364d9) popup_preview_text_window_t4

0x0004,

0xf8db,	// (0x00043a2e) popup_preview_text_window_t_ParamLimits

0xf8db,	// (0x00043a2e) popup_preview_text_window_t

0x2404,	// (0x00036557) scroll_pane_cp11

0x1534,	// (0x00035687) bg_popup_preview_window_pane_g1

0x229a,	// (0x000363ed) bg_popup_preview_window_pane_g2

0x22a2,	// (0x000363f5) bg_popup_preview_window_pane_g3

0x22aa,	// (0x000363fd) bg_popup_preview_window_pane_g4

0x22b2,	// (0x00036405) bg_popup_preview_window_pane_g5

0x22ba,	// (0x0003640d) bg_popup_preview_window_pane_g6

0x22c2,	// (0x00036415) bg_popup_preview_window_pane_g7

0x22ca,	// (0x0003641d) bg_popup_preview_window_pane_g8

0xb0ea,	// (0x0003f23d) aid_popup_width_pane

0xbc12,	// (0x0003fd65) popup_midp_note_alarm_window_ParamLimits

0xbc12,	// (0x0003fd65) popup_midp_note_alarm_window

0x079d,	// (0x000348f0) data_form_pane_ParamLimits

0xe2ad,	// (0x00042400) form_field_data_pane_g1

0xe2b5,	// (0x00042408) form_field_data_pane_t1_ParamLimits

0x07a9,	// (0x000348fc) input_focus_pane_ParamLimits

0x07b7,	// (0x0003490a) data_form_wide_pane_ParamLimits

0xe2cd,	// (0x00042420) form_field_data_wide_pane_g1

0xe2d9,	// (0x0004242c) form_field_data_wide_pane_t1_ParamLimits

0x05c3,	// (0x00034716) input_focus_pane_cp6_ParamLimits

0x4961,	// (0x00038ab4) input_popup_find_pane_g1_ParamLimits

0x4961,	// (0x00038ab4) input_popup_find_pane_g1

0xb4b3,	// (0x0003f606) aid_navi_side_left_pane

0xb4c3,	// (0x0003f616) aid_navi_side_right_pane

0x1d82,	// (0x00035ed5) bg_popup_window_pane_cp30_ParamLimits

0x1d82,	// (0x00035ed5) bg_popup_window_pane_cp30

0x1dfc,	// (0x00035f4f) popup_midp_note_alarm_window_g1_ParamLimits

0x1dfc,	// (0x00035f4f) popup_midp_note_alarm_window_g1

0x1e2c,	// (0x00035f7f) popup_midp_note_alarm_window_t1_ParamLimits

0x1e2c,	// (0x00035f7f) popup_midp_note_alarm_window_t1

0x1ecd,	// (0x00036020) popup_midp_note_alarm_window_t2_ParamLimits

0x1ecd,	// (0x00036020) popup_midp_note_alarm_window_t2

0x1f7b,	// (0x000360ce) popup_midp_note_alarm_window_t3_ParamLimits

0x1f7b,	// (0x000360ce) popup_midp_note_alarm_window_t3

0x1fa3,	// (0x000360f6) popup_midp_note_alarm_window_t4_ParamLimits

0x1fa3,	// (0x000360f6) popup_midp_note_alarm_window_t4

0x1fc3,	// (0x00036116) popup_midp_note_alarm_window_t5_ParamLimits

0x1fc3,	// (0x00036116) popup_midp_note_alarm_window_t5

0x000a,

0xf878,	// (0x000439cb) popup_midp_note_alarm_window_t_ParamLimits

0xf878,	// (0x000439cb) popup_midp_note_alarm_window_t

0x206f,	// (0x000361c2) wait_bar_pane_cp1_ParamLimits

0x206f,	// (0x000361c2) wait_bar_pane_cp1

0x016b,	// (0x000342be) wait_anim_pane_copy1

0x016b,	// (0x000342be) wait_border_pane_copy1

0x1a8a,	// (0x00035bdd) wait_border_pane_g1_copy1

0xe2f3,	// (0x00042446) form_field_popup_pane_g1

0xe2fb,	// (0x0004244e) form_field_popup_pane_t1_ParamLimits

0x07a9,	// (0x000348fc) input_focus_pane_cp7_ParamLimits

0x079d,	// (0x000348f0) list_form_pane_ParamLimits

0xe313,	// (0x00042466) form_field_popup_wide_pane_g1

0xe31b,	// (0x0004246e) form_field_popup_wide_pane_t1_ParamLimits

0x07a9,	// (0x000348fc) input_focus_pane_cp8_ParamLimits

0x07d7,	// (0x0003492a) list_form_wide_pane_ParamLimits

0x2777,	// (0x000368ca) aid_size_cell_graphic_pane

0xe3a7,	// (0x000424fa) data_form_pane_t1_ParamLimits

0xe5d0,	// (0x00042723) data_form_wide_pane_t1_ParamLimits

0x4d5f,	// (0x00038eb2) bg_status_flat_pane

0x3a7a,	// (0x00037bcd) title_pane_t1_ParamLimits

0x0181,	// (0x000342d4) title_pane_t2_ParamLimits

0x01a7,	// (0x000342fa) title_pane_t3_ParamLimits

0xf532,	// (0x00043685) title_pane_t_ParamLimits

0x4a52,	// (0x00038ba5) level_1_signal_ParamLimits

0x4a5f,	// (0x00038bb2) level_2_signal_ParamLimits

0x4a6c,	// (0x00038bbf) level_3_signal_ParamLimits

0x4a79,	// (0x00038bcc) level_4_signal_ParamLimits

0x4a86,	// (0x00038bd9) level_5_signal_ParamLimits

0x4a93,	// (0x00038be6) level_6_signal_ParamLimits

0x4aa0,	// (0x00038bf3) level_7_signal_ParamLimits

0x4a52,	// (0x00038ba5) level_1_battery_ParamLimits

0x4a5f,	// (0x00038bb2) level_2_battery_ParamLimits

0x4a6c,	// (0x00038bbf) level_3_battery_ParamLimits

0x4a79,	// (0x00038bcc) level_4_battery_ParamLimits

0x4a86,	// (0x00038bd9) level_5_battery_ParamLimits

0x4a93,	// (0x00038be6) level_6_battery_ParamLimits

0x4aa0,	// (0x00038bf3) level_7_battery_ParamLimits

0x1c73,	// (0x00035dc6) bg_status_flat_pane_g1

0x1c7b,	// (0x00035dce) bg_status_flat_pane_g2

0x1c83,	// (0x00035dd6) bg_status_flat_pane_g3

0x1c8b,	// (0x00035dde) bg_status_flat_pane_g4

0x1c93,	// (0x00035de6) bg_status_flat_pane_g5

0x1c9b,	// (0x00035dee) bg_status_flat_pane_g6

0x1ca3,	// (0x00035df6) bg_status_flat_pane_g7

0x3ae2,	// (0x00037c35) tabs_3_active_pane_t1_ParamLimits

0x3ae2,	// (0x00037c35) tabs_3_passive_pane_t1_ParamLimits

0x3afc,	// (0x00037c4f) tabs_4_active_pane_t1_ParamLimits

0x3afc,	// (0x00037c4f) tabs_4_1_passive_pane_t1_ParamLimits

0x4975,	// (0x00038ac8) tabs_2_active_pane_t1_ParamLimits

0x4975,	// (0x00038ac8) tabs_2_passive_pane_t1_ParamLimits

0x4987,	// (0x00038ada) bg_active_tab_pane_cp4_ParamLimits

0x4995,	// (0x00038ae8) tabs_2_long_active_pane_t1_ParamLimits

0x49a8,	// (0x00038afb) bg_passive_tab_pane_cp4_ParamLimits

0xbe94,	// (0x0003ffe7) list_single_midp_graphic_pane_t1_ParamLimits

0x4987,	// (0x00038ada) bg_active_tab_pane_cp5_ParamLimits

0x49b4,	// (0x00038b07) tabs_3_long_active_pane_t1_ParamLimits

0x49a8,	// (0x00038afb) bg_passive_tab_pane_cp5_ParamLimits

0xbe94,	// (0x0003ffe7) list_single_midp_graphic_pane_t1

0x4d5f,	// (0x00038eb2) bg_status_flat_pane_ParamLimits

0x1413,	// (0x00035566) indicator_pane_cp2_ParamLimits

0x1413,	// (0x00035566) indicator_pane_cp2

0x4ea8,	// (0x00038ffb) navi_pane_srt_ParamLimits

0x4ea8,	// (0x00038ffb) navi_pane_srt

0x143b,	// (0x0003558e) popup_clock_digital_analogue_window_cp1

0x0205,	// (0x00034358) indicator_pane_t1

0x114f,	// (0x000352a2) copy_highlight_pane

0x114f,	// (0x000352a2) cursor_graphics_pane

0x114f,	// (0x000352a2) graphic_within_text_pane

0x114f,	// (0x000352a2) link_highlight_pane

0x23c7,	// (0x0003651a) popup_preview_text_window_t5_ParamLimits

0x23c7,	// (0x0003651a) popup_preview_text_window_t5

0x11ca,	// (0x0003531d) cursor_digital_pane

0x11ca,	// (0x0003531d) cursor_primary_pane

0x11db,	// (0x0003532e) cursor_primary_small_pane

0x11e3,	// (0x00035336) cursor_secondary_pane

0x11eb,	// (0x0003533e) cursor_title_pane

0x11ca,	// (0x0003531d) link_highlight_digital_pane

0x11d2,	// (0x00035325) link_highlight_primary_pane

0x11db,	// (0x0003532e) link_highlight_primary_small_pane

0x11e3,	// (0x00035336) link_highlight_secondary_pane

0x11eb,	// (0x0003533e) link_highlight_title_pane

0x11ca,	// (0x0003531d) copy_highlight_digital_pane

0x11ca,	// (0x0003531d) copy_highlight_primary_pane

0x11db,	// (0x0003532e) copy_highlight_primary_small_pane

0x11e3,	// (0x00035336) copy_highlight_secondary_pane

0x11eb,	// (0x0003533e) copy_highlight_title_pane

0x11e3,	// (0x00035336) graphic_text_digital_pane

0x1cf3,	// (0x00035e46) graphic_text_primary_pane

0x1cfc,	// (0x00035e4f) graphic_text_primary_small_pane

0x11db,	// (0x0003532e) graphic_text_secondary_pane

0x11ca,	// (0x0003531d) graphic_text_title_pane

0x4c60,	// (0x00038db3) cursor_primary_pane_g1

0x1ce5,	// (0x00035e38) cursor_text_primary_t1

0x5059,	// (0x000391ac) cursor_primary_small_pane_g1

0x1cd7,	// (0x00035e2a) cursor_text_primary_small_t1

0x5051,	// (0x000391a4) cursor_primary_small_pane_g1_copy1

0x1cc9,	// (0x00035e1c) cursor_text_primary_small_t1_copy1

0x1cbb,	// (0x00035e0e) cursor_text_title_t1

0x5049,	// (0x0003919c) cursor_title_pane_g1

0x4c60,	// (0x00038db3) cursor_digital_pane_g1

0x11f3,	// (0x00035346) cursor_text_digital_t1

0x1201,	// (0x00035354) link_highlight_primary_pane_g1

0x1c64,	// (0x00035db7) link_highlight_primary_pane_t1

0x1201,	// (0x00035354) link_highlight_primary_small_pane_g1

0x1209,	// (0x0003535c) link_highlight_primary_small_pane_t1

0x1218,	// (0x0003536b) link_highlight_secondary_pane_g1

0x1220,	// (0x00035373) link_highlight_secondary_pane_t1

0x1bc9,	// (0x00035d1c) link_highlight_title_pane_g1

0x1be0,	// (0x00035d33) link_highlight_title_pane_t1

0x1bc9,	// (0x00035d1c) link_highlight_digital_pane_g1

0x1bd1,	// (0x00035d24) link_highlight_digital_pane_t1

0x1aa5,	// (0x00035bf8) copy_highlight_primary_pane_g1

0x1acb,	// (0x00035c1e) copy_highlight_primary_pane_t1

0x1aa5,	// (0x00035bf8) copy_highlight_primary_small_pane_g1

0x1abc,	// (0x00035c0f) copy_highlight_primary_small_pane_t1

0x122f,	// (0x00035382) copy_highlight_secondary_pane_g1

0x1237,	// (0x0003538a) copy_highlight_secondary_pane_t1

0x1aa5,	// (0x00035bf8) copy_highlight_title_pane_g1

0x1aad,	// (0x00035c00) copy_highlight_title_pane_t1

0x1aa5,	// (0x00035bf8) copy_highlight_digital_pane_g1

0x2872,	// (0x000369c5) copy_highlight_digital_pane_t1

0x27c6,	// (0x00036919) graphic_text_primary_pane_g1

0x2856,	// (0x000369a9) graphic_text_primary_pane_t1

0x2864,	// (0x000369b7) graphic_text_primary_pane_t2

0x0001,

0xf9a2,	// (0x00043af5) graphic_text_primary_pane_t

0x2832,	// (0x00036985) graphic_text_primary_small_pane_g1

0x283a,	// (0x0003698d) graphic_text_primary_small_pane_t1

0x2848,	// (0x0003699b) graphic_text_primary_small_pane_t2

0x0001,

0xf99d,	// (0x00043af0) graphic_text_primary_small_pane_t

0x280e,	// (0x00036961) graphic_text_secondary_pane_g1

0x2816,	// (0x00036969) graphic_text_secondary_pane_t1

0x2824,	// (0x00036977) graphic_text_secondary_pane_t2

0x0001,

0xf998,	// (0x00043aeb) graphic_text_secondary_pane_t

0x27ea,	// (0x0003693d) graphic_text_title_pane_g1

0x27f2,	// (0x00036945) graphic_text_title_pane_t1

0x2800,	// (0x00036953) graphic_text_title_pane_t2

0x0001,

0xf993,	// (0x00043ae6) graphic_text_title_pane_t

0x27c6,	// (0x00036919) graphic_text_digital_pane_g1

0x27ce,	// (0x00036921) graphic_text_digital_pane_t1

0x27dc,	// (0x0003692f) graphic_text_digital_pane_t2

0x0001,

0xf98e,	// (0x00043ae1) graphic_text_digital_pane_t

0x01b9,	// (0x0003430c) navi_icon_pane_srt_ParamLimits

0x01b9,	// (0x0003430c) navi_icon_pane_srt

0x016b,	// (0x000342be) navi_midp_pane_srt

0x016b,	// (0x000342be) navi_navi_pane_srt

0x01b9,	// (0x0003430c) navi_text_pane_srt_ParamLimits

0x01b9,	// (0x0003430c) navi_text_pane_srt

0x2253,	// (0x000363a6) navi_navi_icon_text_pane_srt

0x226d,	// (0x000363c0) navi_navi_pane_srt_g1_ParamLimits

0x226d,	// (0x000363c0) navi_navi_pane_srt_g1

0x225b,	// (0x000363ae) navi_navi_pane_srt_g2_ParamLimits

0x225b,	// (0x000363ae) navi_navi_pane_srt_g2

0x0001,

0xf8c3,	// (0x00043a16) navi_navi_pane_srt_g_ParamLimits

0xf8c3,	// (0x00043a16) navi_navi_pane_srt_g

0x227f,	// (0x000363d2) navi_navi_tabs_pane_srt

0x2253,	// (0x000363a6) navi_navi_text_pane_srt

0x2253,	// (0x000363a6) navi_navi_volume_pane_srt

0x27b7,	// (0x0003690a) navi_navi_text_pane_srt_t1

0xc1f8,	// (0x0004034b) navi_navi_volume_pane_srt_g1

0xc200,	// (0x00040353) volume_small_pane_srt_ParamLimits

0xc200,	// (0x00040353) volume_small_pane_srt

0xb75a,	// (0x0003f8ad) volume_small_pane_srt_g1_ParamLimits

0xb75a,	// (0x0003f8ad) volume_small_pane_srt_g1

0xb76a,	// (0x0003f8bd) volume_small_pane_srt_g2_ParamLimits

0xb76a,	// (0x0003f8bd) volume_small_pane_srt_g2

0xb77b,	// (0x0003f8ce) volume_small_pane_srt_g3_ParamLimits

0xb77b,	// (0x0003f8ce) volume_small_pane_srt_g3

0xb78c,	// (0x0003f8df) volume_small_pane_srt_g4_ParamLimits

0xb78c,	// (0x0003f8df) volume_small_pane_srt_g4

0xb79d,	// (0x0003f8f0) volume_small_pane_srt_g5_ParamLimits

0xb79d,	// (0x0003f8f0) volume_small_pane_srt_g5

0xb7ae,	// (0x0003f901) volume_small_pane_srt_g6_ParamLimits

0xb7ae,	// (0x0003f901) volume_small_pane_srt_g6

0xb7bf,	// (0x0003f912) volume_small_pane_srt_g7_ParamLimits

0xb7bf,	// (0x0003f912) volume_small_pane_srt_g7

0xb7d0,	// (0x0003f923) volume_small_pane_srt_g8_ParamLimits

0xb7d0,	// (0x0003f923) volume_small_pane_srt_g8

0xb7e1,	// (0x0003f934) volume_small_pane_srt_g9_ParamLimits

0xb7e1,	// (0x0003f934) volume_small_pane_srt_g9

0xb7f2,	// (0x0003f945) volume_small_pane_srt_g10_ParamLimits

0xb7f2,	// (0x0003f945) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x00043890) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x00043890) volume_small_pane_srt_g

0x0479,	// (0x000345cc) query_popup_data_pane_cp2

0x279d,	// (0x000368f0) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x279d,	// (0x000368f0) navi_navi_icon_text_pane_srt_t1

0x1cf3,	// (0x00035e46) navi_tabs_2_long_pane_srt

0x1cf3,	// (0x00035e46) navi_tabs_2_pane_srt

0x1cf3,	// (0x00035e46) navi_tabs_3_long_pane_srt

0x1cf3,	// (0x00035e46) navi_tabs_3_pane_srt

0x1cf3,	// (0x00035e46) navi_tabs_4_pane_srt

0xc1d8,	// (0x0004032b) tabs_2_active_pane_srt_ParamLimits

0xc1d8,	// (0x0004032b) tabs_2_active_pane_srt

0xc1e8,	// (0x0004033b) tabs_2_passive_pane_srt_ParamLimits

0xc1e8,	// (0x0004033b) tabs_2_passive_pane_srt

0x136b,	// (0x000354be) bg_passive_tab_pane_cp1_srt_ParamLimits

0x136b,	// (0x000354be) bg_passive_tab_pane_cp1_srt

0x1d41,	// (0x00035e94) bg_passive_tab_pane_g1_cp1_srt

0x0e52,	// (0x00034fa5) bg_passive_tab_pane_g2_cp1_srt

0x1d38,	// (0x00035e8b) bg_passive_tab_pane_g3_cp1_srt

0x01b9,	// (0x0003430c) bg_active_tab_pane_cp1_srt_ParamLimits

0x01b9,	// (0x0003430c) bg_active_tab_pane_cp1_srt

0x1d4a,	// (0x00035e9d) tabs_2_active_pane_srt_g1

0x4975,	// (0x00038ac8) tabs_2_active_pane_srt_t1_ParamLimits

0x4975,	// (0x00038ac8) tabs_2_active_pane_srt_t1

0x1d41,	// (0x00035e94) bg_active_tab_pane_g1_cp1_srt

0x0e52,	// (0x00034fa5) bg_active_tab_pane_g2_cp1_srt

0x1d38,	// (0x00035e8b) bg_active_tab_pane_g3_cp1_srt

0xc1a5,	// (0x000402f8) tabs_3_active_pane_srt_ParamLimits

0xc1a5,	// (0x000402f8) tabs_3_active_pane_srt

0xc1b6,	// (0x00040309) tabs_3_passive_pane_cp_srt_ParamLimits

0xc1b6,	// (0x00040309) tabs_3_passive_pane_cp_srt

0xc1c7,	// (0x0004031a) tabs_3_passive_pane_srt_ParamLimits

0xc1c7,	// (0x0004031a) tabs_3_passive_pane_srt

0x136b,	// (0x000354be) bg_passive_tab_pane_cp2_srt_ParamLimits

0x136b,	// (0x000354be) bg_passive_tab_pane_cp2_srt

0x124f,	// (0x000353a2) bg_passive_tab_pane_g1_cp2_srt

0x0e52,	// (0x00034fa5) bg_passive_tab_pane_g2_cp2_srt

0x1246,	// (0x00035399) bg_passive_tab_pane_g3_cp2_srt

0x01b9,	// (0x0003430c) bg_active_tab_pane_cp2_srt_ParamLimits

0x01b9,	// (0x0003430c) bg_active_tab_pane_cp2_srt

0x278d,	// (0x000368e0) tabs_3_active_pane_srt_g1

0x3ae2,	// (0x00037c35) tabs_3_active_pane_srt_t1_ParamLimits

0x3ae2,	// (0x00037c35) tabs_3_active_pane_srt_t1

0x124f,	// (0x000353a2) bg_active_tab_pane_g1_cp2_srt

0x0e52,	// (0x00034fa5) bg_active_tab_pane_g2_cp2_srt

0x1246,	// (0x00035399) bg_active_tab_pane_g3_cp2_srt

0xc15d,	// (0x000402b0) tabs_4_active_pane_srt_ParamLimits

0xc15d,	// (0x000402b0) tabs_4_active_pane_srt

0xc16f,	// (0x000402c2) tabs_4_passive_pane_cp2_srt_ParamLimits

0xc16f,	// (0x000402c2) tabs_4_passive_pane_cp2_srt

0xb95b,	// (0x0003faae) aid_size_cell_toolbar

0x49a8,	// (0x00038afb) main_idle_act_pane_ParamLimits

0xbaca,	// (0x0003fc1d) popup_large_graphic_colour_window_ParamLimits

0xbd81,	// (0x0003fed4) popup_toolbar_window_ParamLimits

0xbd81,	// (0x0003fed4) popup_toolbar_window

0xe615,	// (0x00042768) list_single_graphic_2heading_pane_ParamLimits

0xe615,	// (0x00042768) list_single_graphic_2heading_pane

0x0aef,	// (0x00034c42) aid_size_cell_apps_grid_lsc_pane

0x0b01,	// (0x00034c54) aid_size_cell_apps_grid_prt_pane

0x136b,	// (0x000354be) bg_wml_button_pane_cp1_ParamLimits

0x136b,	// (0x000354be) bg_wml_button_pane_cp1

0x175e,	// (0x000358b1) form_midp_field_text_pane_t1_ParamLimits

0x15b4,	// (0x00035707) input_focus_pane_cp050_ParamLimits

0x177f,	// (0x000358d2) list_midp_form_text_pane_ParamLimits

0x173b,	// (0x0003588e) input_focus_pane_cp051_ParamLimits

0x174f,	// (0x000358a2) list_midp_choice_pane_ParamLimits

0x1638,	// (0x0003578b) list_single_2graphic_pane_cp3_ParamLimits

0x1638,	// (0x0003578b) list_single_2graphic_pane_cp3

0x164b,	// (0x0003579e) list_single_midp_graphic_pane_ParamLimits

0x164b,	// (0x0003579e) list_single_midp_graphic_pane

0xb078,	// (0x0003f1cb) list_single_graphic_2heading_pane_g1_ParamLimits

0xb078,	// (0x0003f1cb) list_single_graphic_2heading_pane_g1

0xb084,	// (0x0003f1d7) list_single_graphic_2heading_pane_g4_ParamLimits

0xb084,	// (0x0003f1d7) list_single_graphic_2heading_pane_g4

0xb090,	// (0x0003f1e3) list_single_graphic_2heading_pane_g5_ParamLimits

0xb090,	// (0x0003f1e3) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x000438e3) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x000438e3) list_single_graphic_2heading_pane_g

0xb09c,	// (0x0003f1ef) list_single_graphic_2heading_pane_t1_ParamLimits

0xb09c,	// (0x0003f1ef) list_single_graphic_2heading_pane_t1

0xb0b0,	// (0x0003f203) list_single_graphic_2heading_pane_t2_ParamLimits

0xb0b0,	// (0x0003f203) list_single_graphic_2heading_pane_t2

0xb0ca,	// (0x0003f21d) list_single_graphic_2heading_pane_t3_ParamLimits

0xb0ca,	// (0x0003f21d) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x000438ea) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x000438ea) list_single_graphic_2heading_pane_t

0x147e,	// (0x000355d1) bg_popup_sub_pane_cp2

0x14a4,	// (0x000355f7) grid_toobar_pane

0xbe10,	// (0x0003ff63) cell_toolbar_pane_ParamLimits

0xbe10,	// (0x0003ff63) cell_toolbar_pane

0x14da,	// (0x0003562d) cell_toolbar_pane_g1_ParamLimits

0x14da,	// (0x0003562d) cell_toolbar_pane_g1

0x14ec,	// (0x0003563f) cell_toolbar_pane_g2_ParamLimits

0x14ec,	// (0x0003563f) cell_toolbar_pane_g2

0x0001,

0xf79e,	// (0x000438f1) cell_toolbar_pane_g_ParamLimits

0xf79e,	// (0x000438f1) cell_toolbar_pane_g

0x150e,	// (0x00035661) grid_highlight_pane_cp2_ParamLimits

0x150e,	// (0x00035661) grid_highlight_pane_cp2

0x1528,	// (0x0003567b) toolbar_button_pane

0x1534,	// (0x00035687) toolbar_button_pane_g1

0x1544,	// (0x00035697) toolbar_button_pane_g2

0x153c,	// (0x0003568f) toolbar_button_pane_g3

0x1554,	// (0x000356a7) toolbar_button_pane_g4

0x154c,	// (0x0003569f) toolbar_button_pane_g5

0x155c,	// (0x000356af) toolbar_button_pane_g6

0x1564,	// (0x000356b7) toolbar_button_pane_g7

0x1574,	// (0x000356c7) toolbar_button_pane_g8

0x156c,	// (0x000356bf) toolbar_button_pane_g9

0x0009,

0xf7a3,	// (0x000438f6) toolbar_button_pane_g

0xbe3f,	// (0x0003ff92) list_single_2graphic_pane_g1_cp3_ParamLimits

0xbe3f,	// (0x0003ff92) list_single_2graphic_pane_g1_cp3

0xbe4b,	// (0x0003ff9e) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbe4b,	// (0x0003ff9e) list_single_2graphic_pane_g2_cp3

0xbe5a,	// (0x0003ffad) list_single_2graphic_pane_g3_cp3

0xbe62,	// (0x0003ffb5) list_single_2graphic_pane_g4_cp3_ParamLimits

0xbe62,	// (0x0003ffb5) list_single_2graphic_pane_g4_cp3

0xbe6e,	// (0x0003ffc1) list_single_2graphic_pane_t1_cp3_ParamLimits

0xbe6e,	// (0x0003ffc1) list_single_2graphic_pane_t1_cp3

0xbe88,	// (0x0003ffdb) list_single_midp_graphic_pane_g2_ParamLimits

0xbe88,	// (0x0003ffdb) list_single_midp_graphic_pane_g2

0xb070,	// (0x0003f1c3) aid_zoom_text_primary

0xb963,	// (0x0003fab6) aid_zoom_text_secondary

0x12e6,	// (0x00035439) status_small_pane_g7_ParamLimits

0x12e6,	// (0x00035439) status_small_pane_g7

0x1309,	// (0x0003545c) status_small_pane_t1_ParamLimits

0x3a5d,	// (0x00037bb0) title_pane_g2

0x0003,

0xf529,	// (0x0004367c) title_pane_g

0x3c25,	// (0x00037d78) aid_size_cell_colour_1_pane_ParamLimits

0x3c25,	// (0x00037d78) aid_size_cell_colour_1_pane

0x3c39,	// (0x00037d8c) aid_size_cell_colour_2_pane_ParamLimits

0x3c39,	// (0x00037d8c) aid_size_cell_colour_2_pane

0x3c4d,	// (0x00037da0) aid_size_cell_colour_3_pane_ParamLimits

0x3c4d,	// (0x00037da0) aid_size_cell_colour_3_pane

0x48f3,	// (0x00038a46) aid_size_cell_colour_4_pane_ParamLimits

0x48f3,	// (0x00038a46) aid_size_cell_colour_4_pane

0xb415,	// (0x0003f568) title_pane_stacon_g1_ParamLimits

0xb415,	// (0x0003f568) title_pane_stacon_g1

0x1b22,	// (0x00035c75) popup_note_wait_window_g3_ParamLimits

0x1b22,	// (0x00035c75) popup_note_wait_window_g3

0x1b98,	// (0x00035ceb) popup_note_wait_window_t5_ParamLimits

0x1b98,	// (0x00035ceb) popup_note_wait_window_t5

0x016b,	// (0x000342be) main_feb_china_hwr_fs_writing_pane

0xb9df,	// (0x0003fb32) popup_feb_china_hwr_fs_window_ParamLimits

0xb9df,	// (0x0003fb32) popup_feb_china_hwr_fs_window

0xbeaa,	// (0x0003fffd) aid_size_cell_hwr_fs_ParamLimits

0xbeaa,	// (0x0003fffd) aid_size_cell_hwr_fs

0x15b4,	// (0x00035707) bg_popup_sub_pane_cp3_ParamLimits

0x15b4,	// (0x00035707) bg_popup_sub_pane_cp3

0xbebf,	// (0x00040012) grid_hwr_fs_pane_ParamLimits

0xbebf,	// (0x00040012) grid_hwr_fs_pane

0xbed3,	// (0x00040026) linegrid_hwr_fs_pane_ParamLimits

0xbed3,	// (0x00040026) linegrid_hwr_fs_pane

0xbee3,	// (0x00040036) cell_hwr_fs_pane_ParamLimits

0xbee3,	// (0x00040036) cell_hwr_fs_pane

0x15c0,	// (0x00035713) linegrid_hwr_fs_pane_g1_ParamLimits

0x15c0,	// (0x00035713) linegrid_hwr_fs_pane_g1

0x4fcd,	// (0x00039120) linegrid_hwr_fs_pane_g2_ParamLimits

0x4fcd,	// (0x00039120) linegrid_hwr_fs_pane_g2

0x15cc,	// (0x0003571f) linegrid_hwr_fs_pane_g3_ParamLimits

0x15cc,	// (0x0003571f) linegrid_hwr_fs_pane_g3

0xbf01,	// (0x00040054) linegrid_hwr_fs_pane_g4_ParamLimits

0xbf01,	// (0x00040054) linegrid_hwr_fs_pane_g4

0xbf1b,	// (0x0004006e) linegrid_hwr_fs_pane_g5_ParamLimits

0xbf1b,	// (0x0004006e) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ce,	// (0x00043921) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ce,	// (0x00043921) linegrid_hwr_fs_pane_g

0x15d8,	// (0x0003572b) cell_hwr_fs_pane_g1_ParamLimits

0x15d8,	// (0x0003572b) cell_hwr_fs_pane_g1

0x144c,	// (0x0003559f) cell_hwr_fs_pane_g2_ParamLimits

0x144c,	// (0x0003559f) cell_hwr_fs_pane_g2

0x4fdf,	// (0x00039132) cell_hwr_fs_pane_g3_ParamLimits

0x4fdf,	// (0x00039132) cell_hwr_fs_pane_g3

0x4fec,	// (0x0003913f) cell_hwr_fs_pane_g4_ParamLimits

0x4fec,	// (0x0003913f) cell_hwr_fs_pane_g4

0x0003,

0xf7d9,	// (0x0004392c) cell_hwr_fs_pane_g_ParamLimits

0xf7d9,	// (0x0004392c) cell_hwr_fs_pane_g

0xbf31,	// (0x00040084) cell_hwr_fs_pane_t1

0x016b,	// (0x000342be) grid_highlight_pane_cp6

0x016b,	// (0x000342be) main_idle_act2_pane

0x08e6,	// (0x00034a39) aid_inside_area_popup_secondary

0x5077,	// (0x000391ca) aid_inside_area_window_primary_ParamLimits

0x5077,	// (0x000391ca) aid_inside_area_window_primary

0x2881,	// (0x000369d4) ai2_news_ticker_pane

0x2889,	// (0x000369dc) aid_size_cell_ai1_link_ParamLimits

0x2889,	// (0x000369dc) aid_size_cell_ai1_link

0x5383,	// (0x000394d6) popup_ai2_data_window_ParamLimits

0x5383,	// (0x000394d6) popup_ai2_data_window

0x28a3,	// (0x000369f6) popup_ai2_link_window_ParamLimits

0x28a3,	// (0x000369f6) popup_ai2_link_window

0x15b4,	// (0x00035707) bg_popup_sub_pane_cp4_ParamLimits

0x15b4,	// (0x00035707) bg_popup_sub_pane_cp4

0x28b7,	// (0x00036a0a) grid_ai2_link_pane_ParamLimits

0x28b7,	// (0x00036a0a) grid_ai2_link_pane

0x28ce,	// (0x00036a21) popup_ai2_link_window_g1_ParamLimits

0x28ce,	// (0x00036a21) popup_ai2_link_window_g1

0x28da,	// (0x00036a2d) popup_ai2_link_window_g2_ParamLimits

0x28da,	// (0x00036a2d) popup_ai2_link_window_g2

0x0001,

0xf9a7,	// (0x00043afa) popup_ai2_link_window_g_ParamLimits

0xf9a7,	// (0x00043afa) popup_ai2_link_window_g

0x28e9,	// (0x00036a3c) ai2_mp_button_pane

0x28f1,	// (0x00036a44) ai2_mp_volume_pane

0x173b,	// (0x0003588e) bg_popup_sub_pane_cp5_ParamLimits

0x173b,	// (0x0003588e) bg_popup_sub_pane_cp5

0x28f9,	// (0x00036a4c) heading_ai2_gene_pane_ParamLimits

0x28f9,	// (0x00036a4c) heading_ai2_gene_pane

0x2905,	// (0x00036a58) list_ai2_gene_pane_ParamLimits

0x2905,	// (0x00036a58) list_ai2_gene_pane

0x294d,	// (0x00036aa0) cell_ai2_link_pane_ParamLimits

0x294d,	// (0x00036aa0) cell_ai2_link_pane

0x2963,	// (0x00036ab6) cell_ai2_link_pane_g1

0x016b,	// (0x000342be) grid_highlight_pane_cp7

0xc215,	// (0x00040368) ai2_mp_volume_pane_g1

0x2a08,	// (0x00036b5b) ai2_mp_volume_pane_g2

0x53ae,	// (0x00039501) list_ai2_gene_pane_t1

0x2a00,	// (0x00036b53) ai2_mp_volume_pane_g3

0x0002,

0xf9c0,	// (0x00043b13) ai2_mp_volume_pane_g

0xc21d,	// (0x00040370) volume_small_pane_cp3

0x2a10,	// (0x00036b63) aid_size_cell_ai2_button

0x2a18,	// (0x00036b6b) grid_ai2_button_pane

0x2a21,	// (0x00036b74) cell_ai2_button_pane_ParamLimits

0x2a21,	// (0x00036b74) cell_ai2_button_pane

0x00e9,	// (0x0003423c) cell_ai2_button_pane_g1

0x016b,	// (0x000342be) grid_highlight_pane_cp8

0x29c0,	// (0x00036b13) ai2_gene_pane_t1_ParamLimits

0x29c0,	// (0x00036b13) ai2_gene_pane_t1

0xb951,	// (0x0003faa4) aid_height_parent_landscape

0x26a8,	// (0x000367fb) aid_height_set_list

0x26b4,	// (0x00036807) aid_size_parent

0x2777,	// (0x000368ca) aid_size_cell_graphic_pane_ParamLimits

0x2915,	// (0x00036a68) popup_ai2_data_window_g1_ParamLimits

0x2915,	// (0x00036a68) popup_ai2_data_window_g1

0x2921,	// (0x00036a74) ai2_news_ticker_pane_g1

0x2929,	// (0x00036a7c) ai2_news_ticker_pane_g2

0x0001,

0xf9ac,	// (0x00043aff) ai2_news_ticker_pane_g

0x2931,	// (0x00036a84) ai2_news_ticker_pane_t1

0x293f,	// (0x00036a92) ai2_news_ticker_pane_t2

0x0001,

0xf9b1,	// (0x00043b04) ai2_news_ticker_pane_t

0x296c,	// (0x00036abf) heading_ai2_gene_pane_g1

0x2974,	// (0x00036ac7) heading_ai2_gene_pane_t1_ParamLimits

0x2974,	// (0x00036ac7) heading_ai2_gene_pane_t1

0x2989,	// (0x00036adc) list_highlight_pane_cp6

0x5397,	// (0x000394ea) ai2_gene_pane_ParamLimits

0x5397,	// (0x000394ea) ai2_gene_pane

0x53bc,	// (0x0003950f) list_ai2_gene_pane_t2

0x0001,

0xf9b6,	// (0x00043b09) list_ai2_gene_pane_t

0x2991,	// (0x00036ae4) list_highlight_pane_cp8_ParamLimits

0x2991,	// (0x00036ae4) list_highlight_pane_cp8

0x29a2,	// (0x00036af5) ai2_gene_pane_g1_ParamLimits

0x29a2,	// (0x00036af5) ai2_gene_pane_g1

0x29b4,	// (0x00036b07) ai2_gene_pane_g2_ParamLimits

0x29b4,	// (0x00036b07) ai2_gene_pane_g2

0x0001,

0xf9bb,	// (0x00043b0e) ai2_gene_pane_g_ParamLimits

0xf9bb,	// (0x00043b0e) ai2_gene_pane_g

0x0744,	// (0x00034897) scroll_pane_cp12

0xb908,	// (0x0003fa5b) control_pane_t3_ParamLimits

0xb908,	// (0x0003fa5b) control_pane_t3

0x12fa,	// (0x0003544d) status_small_pane_g8_ParamLimits

0x12fa,	// (0x0003544d) status_small_pane_g8

0xba9f,	// (0x0003fbf2) popup_find_window_ParamLimits

0xbc24,	// (0x0003fd77) popup_note_image_window_ParamLimits

0xdf1f,	// (0x00042072) list_double2_graphic_pane_vc_g1_ParamLimits

0xdf1f,	// (0x00042072) list_double2_graphic_pane_vc_g1

0xdf2b,	// (0x0004207e) list_double2_graphic_pane_vc_g2_ParamLimits

0xdf2b,	// (0x0004207e) list_double2_graphic_pane_vc_g2

0xdf37,	// (0x0004208a) list_double2_graphic_pane_vc_g3_ParamLimits

0xdf37,	// (0x0004208a) list_double2_graphic_pane_vc_g3

0x0002,

0xf5f5,	// (0x00043748) list_double2_graphic_pane_vc_g_ParamLimits

0xf5f5,	// (0x00043748) list_double2_graphic_pane_vc_g

0xdf43,	// (0x00042096) list_double2_graphic_pane_vc_t1_ParamLimits

0xdf43,	// (0x00042096) list_double2_graphic_pane_vc_t1

0xdf2b,	// (0x0004207e) list_single_heading_pane_vc_g1_ParamLimits

0xdf2b,	// (0x0004207e) list_single_heading_pane_vc_g1

0xdf37,	// (0x0004208a) list_single_heading_pane_vc_g2_ParamLimits

0xdf37,	// (0x0004208a) list_single_heading_pane_vc_g2

0x0001,

0xf7b8,	// (0x0004390b) list_single_heading_pane_vc_g_ParamLimits

0xf7b8,	// (0x0004390b) list_single_heading_pane_vc_g

0xe4f6,	// (0x00042649) list_single_heading_pane_vc_t1_ParamLimits

0xe4f6,	// (0x00042649) list_single_heading_pane_vc_t1

0xe50c,	// (0x0004265f) list_single_heading_pane_vc_t2_ParamLimits

0xe50c,	// (0x0004265f) list_single_heading_pane_vc_t2

0x0001,

0xf7bd,	// (0x00043910) list_single_heading_pane_vc_t_ParamLimits

0xf7bd,	// (0x00043910) list_single_heading_pane_vc_t

0xe51e,	// (0x00042671) list_setting_number_pane_vc_g1_ParamLimits

0xe51e,	// (0x00042671) list_setting_number_pane_vc_g1

0xe52a,	// (0x0004267d) list_setting_number_pane_vc_g2_ParamLimits

0xe52a,	// (0x0004267d) list_setting_number_pane_vc_g2

0x0001,

0xf7c2,	// (0x00043915) list_setting_number_pane_vc_g_ParamLimits

0xf7c2,	// (0x00043915) list_setting_number_pane_vc_g

0xe536,	// (0x00042689) list_setting_number_pane_vc_t1_ParamLimits

0xe536,	// (0x00042689) list_setting_number_pane_vc_t1

0xe54a,	// (0x0004269d) list_setting_number_pane_vc_t2_ParamLimits

0xe54a,	// (0x0004269d) list_setting_number_pane_vc_t2

0xe566,	// (0x000426b9) list_setting_number_pane_vc_t3_ParamLimits

0xe566,	// (0x000426b9) list_setting_number_pane_vc_t3

0x0002,

0xf7c7,	// (0x0004391a) list_setting_number_pane_vc_t_ParamLimits

0xf7c7,	// (0x0004391a) list_setting_number_pane_vc_t

0xe58e,	// (0x000426e1) set_value_pane_vc_ParamLimits

0xe58e,	// (0x000426e1) set_value_pane_vc

0xe615,	// (0x00042768) list_double2_graphic_pane_vc_ParamLimits

0xe615,	// (0x00042768) list_double2_graphic_pane_vc

0xe628,	// (0x0004277b) list_double2_large_graphic_pane_vc_ParamLimits

0xe628,	// (0x0004277b) list_double2_large_graphic_pane_vc

0xe615,	// (0x00042768) list_double2_pane_vc_ParamLimits

0xe615,	// (0x00042768) list_double2_pane_vc

0xe615,	// (0x00042768) list_double_graphic_heading_pane_vc_ParamLimits

0xe615,	// (0x00042768) list_double_graphic_heading_pane_vc

0xe615,	// (0x00042768) list_double_graphic_pane_vc_ParamLimits

0xe615,	// (0x00042768) list_double_graphic_pane_vc

0xe615,	// (0x00042768) list_double_heading_pane_vc_ParamLimits

0xe615,	// (0x00042768) list_double_heading_pane_vc

0xe639,	// (0x0004278c) list_double_large_graphic_pane_vc_ParamLimits

0xe639,	// (0x0004278c) list_double_large_graphic_pane_vc

0xe615,	// (0x00042768) list_double_number_pane_vc_ParamLimits

0xe615,	// (0x00042768) list_double_number_pane_vc

0xe615,	// (0x00042768) list_double_pane_vc_ParamLimits

0xe615,	// (0x00042768) list_double_pane_vc

0xe615,	// (0x00042768) list_double_time_pane_vc_ParamLimits

0xe615,	// (0x00042768) list_double_time_pane_vc

0xe615,	// (0x00042768) list_setting_number_pane_vc_ParamLimits

0xe615,	// (0x00042768) list_setting_number_pane_vc

0xe615,	// (0x00042768) list_setting_pane_vc_ParamLimits

0xe615,	// (0x00042768) list_setting_pane_vc

0xe615,	// (0x00042768) list_single_graphic_heading_pane_vc_ParamLimits

0xe615,	// (0x00042768) list_single_graphic_heading_pane_vc

0xe615,	// (0x00042768) list_single_heading_pane_vc_ParamLimits

0xe615,	// (0x00042768) list_single_heading_pane_vc

0xe655,	// (0x000427a8) list_single_number_heading_pane_vc_ParamLimits

0xe655,	// (0x000427a8) list_single_number_heading_pane_vc

0xdf1f,	// (0x00042072) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xdf1f,	// (0x00042072) list_double_graphic_heading_pane_vc_g1

0xdf2b,	// (0x0004207e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xdf2b,	// (0x0004207e) list_double_graphic_heading_pane_vc_g2

0xdf37,	// (0x0004208a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xdf37,	// (0x0004208a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf5f5,	// (0x00043748) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf5f5,	// (0x00043748) list_double_graphic_heading_pane_vc_g

0xe6c0,	// (0x00042813) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe6c0,	// (0x00042813) list_double_graphic_heading_pane_vc_t1

0xe6d6,	// (0x00042829) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe6d6,	// (0x00042829) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c7,	// (0x00043b1a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c7,	// (0x00043b1a) list_double_graphic_heading_pane_vc_t

0xe51e,	// (0x00042671) list_setting_pane_vc_g1_ParamLimits

0xe51e,	// (0x00042671) list_setting_pane_vc_g1

0xe52a,	// (0x0004267d) list_setting_pane_vc_g2_ParamLimits

0xe52a,	// (0x0004267d) list_setting_pane_vc_g2

0x0001,

0xf7c2,	// (0x00043915) list_setting_pane_vc_g_ParamLimits

0xf7c2,	// (0x00043915) list_setting_pane_vc_g

0xe6ee,	// (0x00042841) list_setting_pane_vc_t1_ParamLimits

0xe6ee,	// (0x00042841) list_setting_pane_vc_t1

0xe702,	// (0x00042855) list_setting_pane_vc_t2_ParamLimits

0xe702,	// (0x00042855) list_setting_pane_vc_t2

0x0001,

0xfa0a,	// (0x00043b5d) list_setting_pane_vc_t_ParamLimits

0xfa0a,	// (0x00043b5d) list_setting_pane_vc_t

0xe58e,	// (0x000426e1) set_value_pane_cp_vc_ParamLimits

0xe58e,	// (0x000426e1) set_value_pane_cp_vc

0xdf2b,	// (0x0004207e) list_single_number_heading_pane_vc_g1_ParamLimits

0xdf2b,	// (0x0004207e) list_single_number_heading_pane_vc_g1

0xdf37,	// (0x0004208a) list_single_number_heading_pane_vc_g2_ParamLimits

0xdf37,	// (0x0004208a) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b8,	// (0x0004390b) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b8,	// (0x0004390b) list_single_number_heading_pane_vc_g

0xe4f6,	// (0x00042649) list_single_number_heading_pane_vc_t1_ParamLimits

0xe4f6,	// (0x00042649) list_single_number_heading_pane_vc_t1

0xe716,	// (0x00042869) list_single_number_heading_pane_vc_t2_ParamLimits

0xe716,	// (0x00042869) list_single_number_heading_pane_vc_t2

0xe728,	// (0x0004287b) list_single_number_heading_pane_vc_t3_ParamLimits

0xe728,	// (0x0004287b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0f,	// (0x00043b62) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0f,	// (0x00043b62) list_single_number_heading_pane_vc_t

0xdf1f,	// (0x00042072) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xdf1f,	// (0x00042072) list_single_graphic_heading_pane_vc_g1

0xdf2b,	// (0x0004207e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xdf2b,	// (0x0004207e) list_single_graphic_heading_pane_vc_g4

0xdf37,	// (0x0004208a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xdf37,	// (0x0004208a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf5f5,	// (0x00043748) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf5f5,	// (0x00043748) list_single_graphic_heading_pane_vc_g

0xe4f6,	// (0x00042649) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe4f6,	// (0x00042649) list_single_graphic_heading_pane_vc_t1

0xe73a,	// (0x0004288d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe73a,	// (0x0004288d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa16,	// (0x00043b69) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa16,	// (0x00043b69) list_single_graphic_heading_pane_vc_t

0xdf2b,	// (0x0004207e) list_double2_pane_vc_g1_ParamLimits

0xdf2b,	// (0x0004207e) list_double2_pane_vc_g1

0xdf37,	// (0x0004208a) list_double2_pane_vc_g2_ParamLimits

0xdf37,	// (0x0004208a) list_double2_pane_vc_g2

0x0001,

0xf7b8,	// (0x0004390b) list_double2_pane_vc_g_ParamLimits

0xf7b8,	// (0x0004390b) list_double2_pane_vc_g

0xe74c,	// (0x0004289f) list_double2_pane_vc_t1_ParamLimits

0xe74c,	// (0x0004289f) list_double2_pane_vc_t1

0xddc5,	// (0x00041f18) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xddc5,	// (0x00041f18) list_double2_large_graphic_pane_vc_g1

0xddd1,	// (0x00041f24) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xddd1,	// (0x00041f24) list_double2_large_graphic_pane_vc_g2

0xdddd,	// (0x00041f30) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xdddd,	// (0x00041f30) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x00043718) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x00043718) list_double2_large_graphic_pane_vc_g

0xddf1,	// (0x00041f44) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xddf1,	// (0x00041f44) list_double2_large_graphic_pane_vc_t1

0xe762,	// (0x000428b5) list_double_time_pane_vc_g1_ParamLimits

0xe762,	// (0x000428b5) list_double_time_pane_vc_g1

0xe76e,	// (0x000428c1) list_double_time_pane_vc_g2_ParamLimits

0xe76e,	// (0x000428c1) list_double_time_pane_vc_g2

0x0001,

0xfa1b,	// (0x00043b6e) list_double_time_pane_vc_g_ParamLimits

0xfa1b,	// (0x00043b6e) list_double_time_pane_vc_g

0xe77a,	// (0x000428cd) list_double_time_pane_vc_t1_ParamLimits

0xe77a,	// (0x000428cd) list_double_time_pane_vc_t1

0xe798,	// (0x000428eb) list_double_time_pane_vc_t2_ParamLimits

0xe798,	// (0x000428eb) list_double_time_pane_vc_t2

0xe7e1,	// (0x00042934) list_double_time_pane_vc_t3_ParamLimits

0xe7e1,	// (0x00042934) list_double_time_pane_vc_t3

0xe7f3,	// (0x00042946) list_double_time_pane_vc_t4_ParamLimits

0xe7f3,	// (0x00042946) list_double_time_pane_vc_t4

0x0003,

0xfa20,	// (0x00043b73) list_double_time_pane_vc_t_ParamLimits

0xfa20,	// (0x00043b73) list_double_time_pane_vc_t

0xdf2b,	// (0x0004207e) list_double_pane_vc_g1_ParamLimits

0xdf2b,	// (0x0004207e) list_double_pane_vc_g1

0xdf37,	// (0x0004208a) list_double_pane_vc_g2_ParamLimits

0xdf37,	// (0x0004208a) list_double_pane_vc_g2

0x0001,

0xf7b8,	// (0x0004390b) list_double_pane_vc_g_ParamLimits

0xf7b8,	// (0x0004390b) list_double_pane_vc_g

0xe805,	// (0x00042958) list_double_pane_vc_t1_ParamLimits

0xe805,	// (0x00042958) list_double_pane_vc_t1

0xe817,	// (0x0004296a) list_double_pane_vc_t2_ParamLimits

0xe817,	// (0x0004296a) list_double_pane_vc_t2

0x0001,

0xfa29,	// (0x00043b7c) list_double_pane_vc_t_ParamLimits

0xfa29,	// (0x00043b7c) list_double_pane_vc_t

0xdf2b,	// (0x0004207e) list_double_number_pane_vc_g1_ParamLimits

0xdf2b,	// (0x0004207e) list_double_number_pane_vc_g1

0xdf37,	// (0x0004208a) list_double_number_pane_vc_g2_ParamLimits

0xdf37,	// (0x0004208a) list_double_number_pane_vc_g2

0x0001,

0xf7b8,	// (0x0004390b) list_double_number_pane_vc_g_ParamLimits

0xf7b8,	// (0x0004390b) list_double_number_pane_vc_g

0xe82d,	// (0x00042980) list_double_number_pane_vc_t1_ParamLimits

0xe82d,	// (0x00042980) list_double_number_pane_vc_t1

0xe841,	// (0x00042994) list_double_number_pane_vc_t2_ParamLimits

0xe841,	// (0x00042994) list_double_number_pane_vc_t2

0xe853,	// (0x000429a6) list_double_number_pane_vc_t3_ParamLimits

0xe853,	// (0x000429a6) list_double_number_pane_vc_t3

0x0002,

0xfa2e,	// (0x00043b81) list_double_number_pane_vc_t_ParamLimits

0xfa2e,	// (0x00043b81) list_double_number_pane_vc_t

0xec18,	// (0x00042d6b) list_double_large_graphic_pane_vc_g1_ParamLimits

0xec18,	// (0x00042d6b) list_double_large_graphic_pane_vc_g1

0xec40,	// (0x00042d93) list_double_large_graphic_pane_vc_g2_ParamLimits

0xec40,	// (0x00042d93) list_double_large_graphic_pane_vc_g2

0xec54,	// (0x00042da7) list_double_large_graphic_pane_vc_g3_ParamLimits

0xec54,	// (0x00042da7) list_double_large_graphic_pane_vc_g3

0xe869,	// (0x000429bc) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe869,	// (0x000429bc) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa35,	// (0x00043b88) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x00043b88) list_double_large_graphic_pane_vc_g

0xe879,	// (0x000429cc) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe879,	// (0x000429cc) list_double_large_graphic_pane_vc_t1

0xe893,	// (0x000429e6) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe893,	// (0x000429e6) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x00043b91) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x00043b91) list_double_large_graphic_pane_vc_t

0xdf2b,	// (0x0004207e) list_double_heading_pane_vc_g1_ParamLimits

0xdf2b,	// (0x0004207e) list_double_heading_pane_vc_g1

0xdf37,	// (0x0004208a) list_double_heading_pane_vc_g2_ParamLimits

0xdf37,	// (0x0004208a) list_double_heading_pane_vc_g2

0x0001,

0xf7b8,	// (0x0004390b) list_double_heading_pane_vc_g_ParamLimits

0xf7b8,	// (0x0004390b) list_double_heading_pane_vc_g

0xe8b3,	// (0x00042a06) list_double_heading_pane_vc_t1_ParamLimits

0xe8b3,	// (0x00042a06) list_double_heading_pane_vc_t1

0xe4f6,	// (0x00042649) list_double_heading_pane_vc_t2_ParamLimits

0xe4f6,	// (0x00042649) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x00043b96) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x00043b96) list_double_heading_pane_vc_t

0xe8c5,	// (0x00042a18) list_double_graphic_pane_vc_g1_ParamLimits

0xe8c5,	// (0x00042a18) list_double_graphic_pane_vc_g1

0xe8d1,	// (0x00042a24) list_double_graphic_pane_vc_g2_ParamLimits

0xe8d1,	// (0x00042a24) list_double_graphic_pane_vc_g2

0xdf2b,	// (0x0004207e) list_double_graphic_pane_vc_g3_ParamLimits

0xdf2b,	// (0x0004207e) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x00043b9b) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x00043b9b) list_double_graphic_pane_vc_g

0xe8ee,	// (0x00042a41) list_double_graphic_pane_vc_t1_ParamLimits

0xe8ee,	// (0x00042a41) list_double_graphic_pane_vc_t1

0xe90c,	// (0x00042a5f) list_double_graphic_pane_vc_t2_ParamLimits

0xe90c,	// (0x00042a5f) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x00043ba4) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x00043ba4) list_double_graphic_pane_vc_t

0xb0f2,	// (0x0003f245) aid_size_cell_fastswap

0xb0fa,	// (0x0003f24d) aid_size_cell_touch_ParamLimits

0xb0fa,	// (0x0003f24d) aid_size_cell_touch

0xb249,	// (0x0003f39c) popup_fast_swap_wide_window_ParamLimits

0xb249,	// (0x0003f39c) popup_fast_swap_wide_window

0xb30f,	// (0x0003f462) touch_pane_ParamLimits

0xb30f,	// (0x0003f462) touch_pane

0xe209,	// (0x0004235c) button_value_adjust_pane_cp2

0xe211,	// (0x00042364) button_value_adjust_pane_cp4

0xe231,	// (0x00042384) form_field_data_pane_cp2

0xe250,	// (0x000423a3) form_field_data_wide_pane_cp2

0x0b26,	// (0x00034c79) bg_scroll_pane_ParamLimits

0xb536,	// (0x0003f689) scroll_handle_pane_ParamLimits

0xb54a,	// (0x0003f69d) scroll_sc2_down_pane_ParamLimits

0xb54a,	// (0x0003f69d) scroll_sc2_down_pane

0x0b57,	// (0x00034caa) scroll_sc2_up_pane_ParamLimits

0x0b57,	// (0x00034caa) scroll_sc2_up_pane

0x54f3,	// (0x00039646) grid_wheel_folder_pane_g1_ParamLimits

0x54f3,	// (0x00039646) grid_wheel_folder_pane_g1

0xb6fe,	// (0x0003f851) clock_nsta_pane_cp2_ParamLimits

0xb6fe,	// (0x0003f851) clock_nsta_pane_cp2

0x4bb9,	// (0x00038d0c) listscroll_midp_pane_ParamLimits

0x4bc5,	// (0x00038d18) midp_canvas_pane

0xb949,	// (0x0003fa9c) nsta_clock_indic_pane

0x1351,	// (0x000354a4) listscroll_form_pane_vc

0x1359,	// (0x000354ac) listscroll_set_pane_vc_ParamLimits

0x1359,	// (0x000354ac) listscroll_set_pane_vc

0x4d7b,	// (0x00038ece) clock_nsta_pane

0x4d8e,	// (0x00038ee1) indicator_nsta_pane

0x147e,	// (0x000355d1) bg_popup_sub_pane_cp2_ParamLimits

0x1492,	// (0x000355e5) find_pane_cp2_ParamLimits

0x1492,	// (0x000355e5) find_pane_cp2

0x14a4,	// (0x000355f7) grid_toobar_pane_ParamLimits

0x1588,	// (0x000356db) list_form_gen_pane_vc_ParamLimits

0x1588,	// (0x000356db) list_form_gen_pane_vc

0x159e,	// (0x000356f1) scroll_pane_cp8_vc_ParamLimits

0x159e,	// (0x000356f1) scroll_pane_cp8_vc

0x15ee,	// (0x00035741) data_form_wide_pane_vc_ParamLimits

0x15ee,	// (0x00035741) data_form_wide_pane_vc

0x15fa,	// (0x0003574d) form_field_data_wide_pane_vc_g1

0x1602,	// (0x00035755) form_field_data_wide_pane_vc_t1_ParamLimits

0x1602,	// (0x00035755) form_field_data_wide_pane_vc_t1

0x07a9,	// (0x000348fc) input_focus_pane_cp6_vc_ParamLimits

0x07a9,	// (0x000348fc) input_focus_pane_cp6_vc

0x5015,	// (0x00039168) list_midp_pane_ParamLimits

0x5021,	// (0x00039174) scroll_pane_cp16_ParamLimits

0x5021,	// (0x00039174) scroll_pane_cp16

0x1908,	// (0x00035a5b) button_value_adjust_pane_ParamLimits

0x1908,	// (0x00035a5b) button_value_adjust_pane

0x5172,	// (0x000392c5) button_value_adjust_pane_cp6_ParamLimits

0x5172,	// (0x000392c5) button_value_adjust_pane_cp6

0x527a,	// (0x000393cd) settings_code_pane_cp_ParamLimits

0x527a,	// (0x000393cd) settings_code_pane_cp

0x00e9,	// (0x0003423c) cell_touch_pane_g1

0x00e9,	// (0x0003423c) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x00043836) cell_touch_pane_g

0x53ca,	// (0x0003951d) cell_touch_pane_cp_ParamLimits

0x53ca,	// (0x0003951d) cell_touch_pane_cp

0x53da,	// (0x0003952d) cell_touch_pane_ParamLimits

0x53da,	// (0x0003952d) cell_touch_pane

0x00e9,	// (0x0003423c) scroll_sc2_down_pane_g1

0x00e9,	// (0x0003423c) scroll_sc2_up_pane_g1

0x016b,	// (0x000342be) bg_set_opt_pane_cp4_vc

0x2a33,	// (0x00036b86) list_set_graphic_pane_vc_g1_ParamLimits

0x2a33,	// (0x00036b86) list_set_graphic_pane_vc_g1

0x2a3f,	// (0x00036b92) list_set_graphic_pane_vc_g2_ParamLimits

0x2a3f,	// (0x00036b92) list_set_graphic_pane_vc_g2

0x0001,

0xf9cc,	// (0x00043b1f) list_set_graphic_pane_vc_g_ParamLimits

0xf9cc,	// (0x00043b1f) list_set_graphic_pane_vc_g

0x2a4b,	// (0x00036b9e) text_primary_small_cp13_vc_ParamLimits

0x2a4b,	// (0x00036b9e) text_primary_small_cp13_vc

0x2a63,	// (0x00036bb6) list_set_graphic_pane_vc_ParamLimits

0x2a63,	// (0x00036bb6) list_set_graphic_pane_vc

0x016b,	// (0x000342be) input_focus_pane_cp2_vc

0x00e9,	// (0x0003423c) setting_code_pane_vc_g1

0x2a76,	// (0x00036bc9) setting_code_pane_vc_t1

0x2a84,	// (0x00036bd7) set_text_pane_vc_t1_ParamLimits

0x2a84,	// (0x00036bd7) set_text_pane_vc_t1

0x016b,	// (0x000342be) input_focus_pane_cp1_vc

0x2a9f,	// (0x00036bf2) list_set_text_pane_vc

0x00e9,	// (0x0003423c) setting_text_pane_vc_g1

0x016b,	// (0x000342be) bg_set_opt_pane_cp2_vc

0x2aa9,	// (0x00036bfc) setting_slider_graphic_pane_vc_g1

0x2ab1,	// (0x00036c04) setting_slider_graphic_pane_vc_t1

0x2abf,	// (0x00036c12) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d1,	// (0x00043b24) setting_slider_graphic_pane_vc_t

0x2acd,	// (0x00036c20) slider_set_pane_cp_vc

0x2ad5,	// (0x00036c28) slider_set_pane_vc_g1

0x2ade,	// (0x00036c31) slider_set_pane_vc_g2

0x0006,

0xf9d6,	// (0x00043b29) slider_set_pane_vc_g

0x07f8,	// (0x0003494b) set_opt_bg_pane_g1_copy1

0x0800,	// (0x00034953) set_opt_bg_pane_g2_copy1

0x2b0a,	// (0x00036c5d) set_opt_bg_pane_g3_copy1

0x0810,	// (0x00034963) set_opt_bg_pane_g4_copy1

0x0818,	// (0x0003496b) set_opt_bg_pane_g5_copy1

0x0820,	// (0x00034973) set_opt_bg_pane_g6_copy1

0x2b12,	// (0x00036c65) set_opt_bg_pane_g7_copy1

0x2b1a,	// (0x00036c6d) set_opt_bg_pane_g8_copy1

0x2b22,	// (0x00036c75) set_opt_bg_pane_g9_copy1

0x016b,	// (0x000342be) bg_set_opt_pane_cp_vc

0x2b2a,	// (0x00036c7d) setting_slider_pane_vc_t1

0x2ab1,	// (0x00036c04) setting_slider_pane_vc_t2

0x2abf,	// (0x00036c12) setting_slider_pane_vc_t3

0x0002,

0xf9e5,	// (0x00043b38) setting_slider_pane_vc_t

0x2acd,	// (0x00036c20) slider_set_pane_vc

0xbf3f,	// (0x00040092) volume_set_pane_vc_g1

0xc226,	// (0x00040379) volume_set_pane_vc_g2

0xc22f,	// (0x00040382) volume_set_pane_vc_g3

0xc238,	// (0x0004038b) volume_set_pane_vc_g4

0xc241,	// (0x00040394) volume_set_pane_vc_g5

0xc24a,	// (0x0004039d) volume_set_pane_vc_g6

0xc253,	// (0x000403a6) volume_set_pane_vc_g7

0xc25c,	// (0x000403af) volume_set_pane_vc_g8

0xc265,	// (0x000403b8) volume_set_pane_vc_g9

0xc26e,	// (0x000403c1) volume_set_pane_vc_g10

0x0009,

0xf9ec,	// (0x00043b3f) volume_set_pane_vc_g

0x2b39,	// (0x00036c8c) volume_set_pane_vc

0x2b41,	// (0x00036c94) button_value_adjust_pane_cp1_vc

0x2b4b,	// (0x00036c9e) list_highlight_pane_cp2_vc

0x2b54,	// (0x00036ca7) list_set_pane_vc_ParamLimits

0x2b54,	// (0x00036ca7) list_set_pane_vc

0x2ba6,	// (0x00036cf9) main_pane_set_vc_t1_ParamLimits

0x2ba6,	// (0x00036cf9) main_pane_set_vc_t1

0x2bbb,	// (0x00036d0e) main_pane_set_vc_t2_ParamLimits

0x2bbb,	// (0x00036d0e) main_pane_set_vc_t2

0x2bcd,	// (0x00036d20) main_pane_set_vc_t3_ParamLimits

0x2bcd,	// (0x00036d20) main_pane_set_vc_t3

0x2bdf,	// (0x00036d32) main_pane_set_vc_t4_ParamLimits

0x2bdf,	// (0x00036d32) main_pane_set_vc_t4

0x0003,

0xfa01,	// (0x00043b54) main_pane_set_vc_t_ParamLimits

0xfa01,	// (0x00043b54) main_pane_set_vc_t

0x2bf1,	// (0x00036d44) setting_code_pane_vc_ParamLimits

0x2bf1,	// (0x00036d44) setting_code_pane_vc

0x2c00,	// (0x00036d53) setting_slider_graphic_pane_vc

0x2c00,	// (0x00036d53) setting_slider_pane_vc

0x2c00,	// (0x00036d53) setting_text_pane_vc

0x2c00,	// (0x00036d53) setting_volume_pane_vc

0x2c08,	// (0x00036d5b) scroll_pane_cp121_vc

0x0794,	// (0x000348e7) set_content_pane_vc

0x2c10,	// (0x00036d63) button_value_adjust_pane_g1

0x2c19,	// (0x00036d6c) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x00043ba9) button_value_adjust_pane_g

0x2c22,	// (0x00036d75) form_field_slider_wide_pane_vc_t1_ParamLimits

0x2c22,	// (0x00036d75) form_field_slider_wide_pane_vc_t1

0x2c38,	// (0x00036d8b) form_field_slider_wide_pane_vc_t2_ParamLimits

0x2c38,	// (0x00036d8b) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x00043bae) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x00043bae) form_field_slider_wide_pane_vc_t

0x02f4,	// (0x00034447) input_focus_pane_cp10_vc_ParamLimits

0x02f4,	// (0x00034447) input_focus_pane_cp10_vc

0x2c63,	// (0x00036db6) slider_cont_pane_cp1_vc_ParamLimits

0x2c63,	// (0x00036db6) slider_cont_pane_cp1_vc

0x2ad5,	// (0x00036c28) slider_form_pane_g1_cp2

0x2ade,	// (0x00036c31) slider_form_pane_g2_cp2

0x2c7e,	// (0x00036dd1) form_field_slider_pane_vc_t3

0x2c8c,	// (0x00036ddf) form_field_slider_pane_vc_t4

0x2c9a,	// (0x00036ded) slider_form_pane_vc_ParamLimits

0x2c9a,	// (0x00036ded) slider_form_pane_vc

0x2ca7,	// (0x00036dfa) form_field_slider_pane_vc_t1_ParamLimits

0x2ca7,	// (0x00036dfa) form_field_slider_pane_vc_t1

0x2cbd,	// (0x00036e10) form_field_slider_pane_vc_t2_ParamLimits

0x2cbd,	// (0x00036e10) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x00043bc0) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x00043bc0) form_field_slider_pane_vc_t

0x02f4,	// (0x00034447) input_focus_pane_cp9_vc_ParamLimits

0x02f4,	// (0x00034447) input_focus_pane_cp9_vc

0x2ccf,	// (0x00036e22) slider_cont_pane_vc_ParamLimits

0x2ccf,	// (0x00036e22) slider_cont_pane_vc

0x2ce1,	// (0x00036e34) list_form_graphic_pane_cp_vc_ParamLimits

0x2ce1,	// (0x00036e34) list_form_graphic_pane_cp_vc

0x15fa,	// (0x0003574d) form_field_popup_wide_pane_vc_g1

0x2cf6,	// (0x00036e49) form_field_popup_wide_pane_vc_t1_ParamLimits

0x2cf6,	// (0x00036e49) form_field_popup_wide_pane_vc_t1

0x07a9,	// (0x000348fc) input_focus_pane_cp8_vc_ParamLimits

0x07a9,	// (0x000348fc) input_focus_pane_cp8_vc

0x2d35,	// (0x00036e88) list_form_wide_pane_vc_ParamLimits

0x2d35,	// (0x00036e88) list_form_wide_pane_vc

0x2d41,	// (0x00036e94) list_form_graphic_pane_vc_g1

0x2d49,	// (0x00036e9c) list_form_graphic_pane_vc_t1_ParamLimits

0x2d49,	// (0x00036e9c) list_form_graphic_pane_vc_t1

0x01b9,	// (0x0003430c) list_highlight_pane_cp5_vc_ParamLimits

0x01b9,	// (0x0003430c) list_highlight_pane_cp5_vc

0x2d65,	// (0x00036eb8) list_form_graphic_pane_vc_ParamLimits

0x2d65,	// (0x00036eb8) list_form_graphic_pane_vc

0x15fa,	// (0x0003574d) form_field_popup_pane_vc_g1

0x2d7b,	// (0x00036ece) form_field_popup_pane_vc_t1_ParamLimits

0x2d7b,	// (0x00036ece) form_field_popup_pane_vc_t1

0x07a9,	// (0x000348fc) input_focus_pane_cp7_vc_ParamLimits

0x07a9,	// (0x000348fc) input_focus_pane_cp7_vc

0x2d90,	// (0x00036ee3) list_form_pane_vc_ParamLimits

0x2d90,	// (0x00036ee3) list_form_pane_vc

0x2d9c,	// (0x00036eef) data_form_pane_vc_t1_ParamLimits

0x2d9c,	// (0x00036eef) data_form_pane_vc_t1

0x07f8,	// (0x0003494b) input_focus_pane_vc_g1

0x0800,	// (0x00034953) input_focus_pane_vc_g2

0x0808,	// (0x0003495b) input_focus_pane_vc_g3

0x0810,	// (0x00034963) input_focus_pane_vc_g4

0x0818,	// (0x0003496b) input_focus_pane_vc_g5

0x0820,	// (0x00034973) input_focus_pane_vc_g6

0x0828,	// (0x0003497b) input_focus_pane_vc_g7

0x0830,	// (0x00034983) input_focus_pane_vc_g8

0x0838,	// (0x0003498b) input_focus_pane_vc_g9

0x00e9,	// (0x0003423c) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x000437bf) input_focus_pane_vc_g

0x15ee,	// (0x00035741) data_form_pane_vc_ParamLimits

0x15ee,	// (0x00035741) data_form_pane_vc

0x15fa,	// (0x0003574d) form_field_data_pane_vc_g1

0x2db7,	// (0x00036f0a) form_field_data_pane_vc_t1_ParamLimits

0x2db7,	// (0x00036f0a) form_field_data_pane_vc_t1

0x07a9,	// (0x000348fc) input_focus_pane_vc_ParamLimits

0x07a9,	// (0x000348fc) input_focus_pane_vc

0x1d52,	// (0x00035ea5) button_value_adjust_pane_cp3_vc

0x2dcd,	// (0x00036f20) button_value_adjust_pane_cp5_vc

0x2dd5,	// (0x00036f28) form_field_data_pane_vc_ParamLimits

0x2dd5,	// (0x00036f28) form_field_data_pane_vc

0x1d5a,	// (0x00035ead) form_field_data_pane_vc_cp2

0x2dec,	// (0x00036f3f) form_field_data_wide_pane_vc_ParamLimits

0x2dec,	// (0x00036f3f) form_field_data_wide_pane_vc

0x2e02,	// (0x00036f55) form_field_data_wide_pane_vc_cp2

0x2e0a,	// (0x00036f5d) form_field_popup_pane_vc_ParamLimits

0x2e0a,	// (0x00036f5d) form_field_popup_pane_vc

0x2e21,	// (0x00036f74) form_field_popup_wide_pane_vc_ParamLimits

0x2e21,	// (0x00036f74) form_field_popup_wide_pane_vc

0x2e37,	// (0x00036f8a) form_field_slider_pane_vc_ParamLimits

0x2e37,	// (0x00036f8a) form_field_slider_pane_vc

0x2e4a,	// (0x00036f9d) form_field_slider_wide_pane_vc_ParamLimits

0x2e4a,	// (0x00036f9d) form_field_slider_wide_pane_vc

0x53ec,	// (0x0003953f) grid_touch_1_pane_ParamLimits

0x53ec,	// (0x0003953f) grid_touch_1_pane

0x53f8,	// (0x0003954b) grid_touch_2_pane_ParamLimits

0x53f8,	// (0x0003954b) grid_touch_2_pane

0x1323,	// (0x00035476) touch_pane_g1_ParamLimits

0x1323,	// (0x00035476) touch_pane_g1

0x2e5d,	// (0x00036fb0) cell_app_pane_cp_wide_ParamLimits

0x2e5d,	// (0x00036fb0) cell_app_pane_cp_wide

0x2e6d,	// (0x00036fc0) grid_popup_fast_wide_pane_ParamLimits

0x2e6d,	// (0x00036fc0) grid_popup_fast_wide_pane

0x2e81,	// (0x00036fd4) scroll_pane_cp19_ParamLimits

0x2e81,	// (0x00036fd4) scroll_pane_cp19

0x016b,	// (0x000342be) bg_popup_window_pane_cp20

0x2e95,	// (0x00036fe8) listscroll_popup_fast_wide_pane

0x5410,	// (0x00039563) grid_indicator_nsta_pane

0x2e9d,	// (0x00036ff0) clock_nsta_pane_g1

0x2ea6,	// (0x00036ff9) clock_nsta_pane_t1

0x5422,	// (0x00039575) cell_indicator_nsta_pane_ParamLimits

0x5422,	// (0x00039575) cell_indicator_nsta_pane

0x2ec2,	// (0x00037015) cell_indicator_nsta_pane_g1

0x5453,	// (0x000395a6) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x00043bd1) cell_indicator_nsta_pane_g

0x2ed0,	// (0x00037023) clock_nsta_pane_cp

0x2ed8,	// (0x0003702b) indicator_nsta_pane_cp

0x2ee1,	// (0x00037034) nsta_clock_indic_pane_g1

0x01fd,	// (0x00034350) grid_indicator_pane

0x0c49,	// (0x00034d9c) scroll_pane_cp29

0xb655,	// (0x0003f7a8) indicator_nsta_pane_cp2_ParamLimits

0xb655,	// (0x0003f7a8) indicator_nsta_pane_cp2

0x01b9,	// (0x0003430c) main_apps_wheel_pane

0x1799,	// (0x000358ec) form_midp_field_text_pane_ParamLimits

0x18c6,	// (0x00035a19) scroll_bar_cp050_ParamLimits

0x2f4a,	// (0x0003709d) cell_indicator_pane_ParamLimits

0x2f4a,	// (0x0003709d) cell_indicator_pane

0x2f60,	// (0x000370b3) cell_indicator_pane_g1

0x5463,	// (0x000395b6) grid_wheel_folder_pane_ParamLimits

0x5463,	// (0x000395b6) grid_wheel_folder_pane

0x5475,	// (0x000395c8) list_wheel_apps_pane_ParamLimits

0x5475,	// (0x000395c8) list_wheel_apps_pane

0x5484,	// (0x000395d7) main_apps_wheel_pane_g1_ParamLimits

0x5484,	// (0x000395d7) main_apps_wheel_pane_g1

0x5498,	// (0x000395eb) main_apps_wheel_pane_g2_ParamLimits

0x5498,	// (0x000395eb) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x00043bed) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x00043bed) main_apps_wheel_pane_g

0x54ac,	// (0x000395ff) main_apps_wheel_pane_t1_ParamLimits

0x54ac,	// (0x000395ff) main_apps_wheel_pane_t1

0x54cb,	// (0x0003961e) list_wheel_apps_pane_g1

0x54d3,	// (0x00039626) list_wheel_apps_pane_g2

0x54db,	// (0x0003962e) list_wheel_apps_pane_g3

0x54e3,	// (0x00039636) list_wheel_apps_pane_g4

0x54eb,	// (0x0003963e) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x00043bf2) list_wheel_apps_pane_g

0x01b9,	// (0x0003430c) navi_icon_text_pane

0x4ccf,	// (0x00038e22) aid_fill_nsta

0x2f6a,	// (0x000370bd) navi_icon_text_pane_g1

0x2f76,	// (0x000370c9) navi_icon_text_pane_t1

0x0ec3,	// (0x00035016) list_set_graphic_pane_t1_ParamLimits

0x0ec3,	// (0x00035016) list_set_graphic_pane_t1

0x1ff2,	// (0x00036145) popup_midp_note_alarm_window_t6_ParamLimits

0x1ff2,	// (0x00036145) popup_midp_note_alarm_window_t6

0x2004,	// (0x00036157) popup_midp_note_alarm_window_t7_ParamLimits

0x2004,	// (0x00036157) popup_midp_note_alarm_window_t7

0x2016,	// (0x00036169) popup_midp_note_alarm_window_t8_ParamLimits

0x2016,	// (0x00036169) popup_midp_note_alarm_window_t8

0x2028,	// (0x0003617b) popup_midp_note_alarm_window_t9_ParamLimits

0x2028,	// (0x0003617b) popup_midp_note_alarm_window_t9

0x203a,	// (0x0003618d) popup_midp_note_alarm_window_t10_ParamLimits

0x203a,	// (0x0003618d) popup_midp_note_alarm_window_t10

0x204c,	// (0x0003619f) popup_midp_note_alarm_window_t11_ParamLimits

0x204c,	// (0x0003619f) popup_midp_note_alarm_window_t11

0x205e,	// (0x000361b1) scroll_pane_cp17_ParamLimits

0x205e,	// (0x000361b1) scroll_pane_cp17

0xbf3f,	// (0x00040092) volume_small_pane_cp_g1

0xc277,	// (0x000403ca) volume_small_pane_cp_g2

0xc280,	// (0x000403d3) volume_small_pane_cp_g3

0xc289,	// (0x000403dc) volume_small_pane_cp_g4

0xbf6c,	// (0x000400bf) volume_small_pane_cp_g5

0xc292,	// (0x000403e5) volume_small_pane_cp_g6

0xc29b,	// (0x000403ee) volume_small_pane_cp_g7

0xc2a4,	// (0x000403f7) volume_small_pane_cp_g8

0xc2ad,	// (0x00040400) volume_small_pane_cp_g9

0xc2b6,	// (0x00040409) volume_small_pane_cp_g10

0x1179,	// (0x000352cc) midp_ticker_pane_g1_ParamLimits

0x1185,	// (0x000352d8) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x0004388b) midp_ticker_pane_g_ParamLimits

0x1191,	// (0x000352e4) midp_ticker_pane_t1_ParamLimits

0x4cdf,	// (0x00038e32) aid_fill_nsta_2

0x18b2,	// (0x00035a05) list_form2_midp_pane

0x26f0,	// (0x00036843) midp_editing_number_pane_ParamLimits

0x26fc,	// (0x0003684f) midp_ticker_pane_ParamLimits

0x2f88,	// (0x000370db) form2_midp_field_pane

0x2f90,	// (0x000370e3) scroll_pane_cp51

0x2fb0,	// (0x00037103) form2_midp_button_pane_ParamLimits

0x2fb0,	// (0x00037103) form2_midp_button_pane

0x2fc2,	// (0x00037115) form2_midp_content_pane_ParamLimits

0x2fc2,	// (0x00037115) form2_midp_content_pane

0x2fdc,	// (0x0003712f) form2_midp_field_choice_group_pane

0x2fe4,	// (0x00037137) form2_midp_field_pane_g1

0x2fec,	// (0x0003713f) form2_midp_field_pane_g2

0x2ff4,	// (0x00037147) form2_midp_field_pane_g3

0x2ffc,	// (0x0003714f) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x00043c17) form2_midp_field_pane_g

0x3004,	// (0x00037157) form2_midp_gauge_slider_pane

0x300c,	// (0x0003715f) form2_midp_gauge_wait_pane

0x3014,	// (0x00037167) form2_midp_image_pane_ParamLimits

0x3014,	// (0x00037167) form2_midp_image_pane

0x302f,	// (0x00037182) form2_midp_label_pane_ParamLimits

0x302f,	// (0x00037182) form2_midp_label_pane

0x5526,	// (0x00039679) form2_midp_label_pane_cp_ParamLimits

0x5526,	// (0x00039679) form2_midp_label_pane_cp

0x3048,	// (0x0003719b) form2_midp_string_pane_ParamLimits

0x3048,	// (0x0003719b) form2_midp_string_pane

0xe92a,	// (0x00042a7d) form2_midp_text_pane_ParamLimits

0xe92a,	// (0x00042a7d) form2_midp_text_pane

0x305a,	// (0x000371ad) form2_midp_time_pane

0x306a,	// (0x000371bd) input_focus_pane_cp51_ParamLimits

0x306a,	// (0x000371bd) input_focus_pane_cp51

0x3082,	// (0x000371d5) form2_midp_label_pane_t1_ParamLimits

0x3082,	// (0x000371d5) form2_midp_label_pane_t1

0xe943,	// (0x00042a96) form2_mdip_text_pane_t1_ParamLimits

0xe943,	// (0x00042a96) form2_mdip_text_pane_t1

0xe95c,	// (0x00042aaf) form2_midp_time_pane_t1

0x30ca,	// (0x0003721d) form2_midp_gauge_slider_pane_t1

0x5545,	// (0x00039698) form2_midp_gauge_slider_pane_t2

0x5557,	// (0x000396aa) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x00043c20) form2_midp_gauge_slider_pane_t

0x30dc,	// (0x0003722f) form2_midp_slider_pane

0x30e8,	// (0x0003723b) form2_midp_gauge_wait_pane_t1

0x30f6,	// (0x00037249) form2_midp_wait_pane_ParamLimits

0x30f6,	// (0x00037249) form2_midp_wait_pane

0x1638,	// (0x0003578b) list_single_2graphic_pane_cp4_ParamLimits

0x1638,	// (0x0003578b) list_single_2graphic_pane_cp4

0x3121,	// (0x00037274) list_single_midp_graphic_pane_cp_ParamLimits

0x3121,	// (0x00037274) list_single_midp_graphic_pane_cp

0x016b,	// (0x000342be) list_highlight_pane_cp20

0x313f,	// (0x00037292) list_single_2graphic_pane_g1_cp4

0x296c,	// (0x00036abf) list_single_2graphic_pane_g2_cp4

0x3147,	// (0x0003729a) list_single_2graphic_pane_t1_cp4

0x01b9,	// (0x0003430c) list_highlight_pane_cp21

0x3156,	// (0x000372a9) list_single_midp_graphic_pane_g4_cp

0x3165,	// (0x000372b8) list_single_midp_graphic_pane_t1_cp

0x317a,	// (0x000372cd) form2_mdip_string_pane_t1_ParamLimits

0x317a,	// (0x000372cd) form2_mdip_string_pane_t1

0x016b,	// (0x000342be) bg_wml_button_pane_cp2

0x00e9,	// (0x0003423c) form2_midp_image_pane_g1

0xdfb9,	// (0x0004210c) list_double_large_graphic_pane_g5_ParamLimits

0xdfb9,	// (0x0004210c) list_double_large_graphic_pane_g5

0x4bb9,	// (0x00038d0c) midp_form_pane_ParamLimits

0x01b9,	// (0x0003430c) main_apps_wheel_pane_ParamLimits

0xbc48,	// (0x0003fd9b) popup_preview_window_ParamLimits

0xbc48,	// (0x0003fd9b) popup_preview_window

0xbdc3,	// (0x0003ff16) popup_touch_info_window_ParamLimits

0xbdc3,	// (0x0003ff16) popup_touch_info_window

0xbde1,	// (0x0003ff34) popup_touch_menu_window_ParamLimits

0xbde1,	// (0x0003ff34) popup_touch_menu_window

0x00df,	// (0x00034232) bg_popup_sub_pane_cp6

0x31e4,	// (0x00037337) list_touch_menu_pane

0x31ec,	// (0x0003733f) list_single_touch_menu_pane_ParamLimits

0x31ec,	// (0x0003733f) list_single_touch_menu_pane

0x3203,	// (0x00037356) list_single_touch_menu_pane_t1

0x01b9,	// (0x0003430c) bg_popup_sub_pane_cp7_ParamLimits

0x01b9,	// (0x0003430c) bg_popup_sub_pane_cp7

0x3211,	// (0x00037364) heading_sub_pane

0x3219,	// (0x0003736c) list_touch_info_pane_ParamLimits

0x3219,	// (0x0003736c) list_touch_info_pane

0x3228,	// (0x0003737b) list_single_touch_info_pane_ParamLimits

0x3228,	// (0x0003737b) list_single_touch_info_pane

0x3239,	// (0x0003738c) list_single_touch_info_pane_t1

0x3247,	// (0x0003739a) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x00043c2e) list_single_touch_info_pane_t

0x114f,	// (0x000352a2) bg_popup_heading_pane_cp

0x3255,	// (0x000373a8) heading_sub_pane_t1

0x15b4,	// (0x00035707) bg_popup_preview_window_pane_cp_ParamLimits

0x15b4,	// (0x00035707) bg_popup_preview_window_pane_cp

0x3211,	// (0x00037364) heading_preview_pane

0x3219,	// (0x0003736c) list_preview_pane_ParamLimits

0x3219,	// (0x0003736c) list_preview_pane

0x3263,	// (0x000373b6) popup_preview_window_g1

0x3228,	// (0x0003737b) list_single_preview_pane_ParamLimits

0x3228,	// (0x0003737b) list_single_preview_pane

0x326b,	// (0x000373be) list_single_preview_pane_g1

0x3273,	// (0x000373c6) list_single_preview_pane_t1

0x3239,	// (0x0003738c) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x00043c33) list_single_preview_pane_t

0x3281,	// (0x000373d4) bg_popup_heading_pane_cp2_ParamLimits

0x3281,	// (0x000373d4) bg_popup_heading_pane_cp2

0x3297,	// (0x000373ea) heading_preview_pane_g1

0x329f,	// (0x000373f2) heading_preview_pane_t1_ParamLimits

0x329f,	// (0x000373f2) heading_preview_pane_t1

0x0214,	// (0x00034367) soft_indicator_pane_t1_ParamLimits

0x0720,	// (0x00034873) scroll_pane_ParamLimits

0x0b4e,	// (0x00034ca1) scroll_sc2_left_pane

0x0b45,	// (0x00034c98) scroll_sc2_right_pane

0x0b6d,	// (0x00034cc0) scroll_bg_pane_g1_ParamLimits

0x0b82,	// (0x00034cd5) scroll_bg_pane_g2_ParamLimits

0x0b9a,	// (0x00034ced) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x00043816) scroll_bg_pane_g_ParamLimits

0x0b6d,	// (0x00034cc0) scroll_handle_pane_g1_ParamLimits

0x0bbc,	// (0x00034d0f) scroll_handle_pane_g2_ParamLimits

0x0b9a,	// (0x00034ced) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x0004381d) scroll_handle_pane_g_ParamLimits

0xb98d,	// (0x0003fae0) popup_choice_list_window_ParamLimits

0xb98d,	// (0x0003fae0) popup_choice_list_window

0x148a,	// (0x000355dd) choice_list_pane

0x1500,	// (0x00035653) cell_toolbar_pane_t1

0x1528,	// (0x0003567b) toolbar_button_pane_ParamLimits

0x2459,	// (0x000365ac) ai_gene_pane_1_t2_ParamLimits

0x2459,	// (0x000365ac) ai_gene_pane_1_t2

0x0001,

0xf8eb,	// (0x00043a3e) ai_gene_pane_1_t_ParamLimits

0xf8eb,	// (0x00043a3e) ai_gene_pane_1_t

0x32bc,	// (0x0003740f) scroll_sc2_left_pane_g1

0x32bc,	// (0x0003740f) scroll_sc2_right_pane_g1

0x136b,	// (0x000354be) bg_popup_sub_pane_cp10

0x32c6,	// (0x00037419) list_choice_list_pane

0x32dd,	// (0x00037430) list_single_choice_list_pane_ParamLimits

0x32dd,	// (0x00037430) list_single_choice_list_pane

0x32ef,	// (0x00037442) list_single_choice_list_pane_g1

0x0921,	// (0x00034a74) list_single_choice_list_pane_t1_ParamLimits

0x0921,	// (0x00034a74) list_single_choice_list_pane_t1

0x32f7,	// (0x0003744a) choice_list_pane_g1

0x32ff,	// (0x00037452) choice_list_pane_t1

0x00df,	// (0x00034232) input_focus_pane_cp11

0x0aac,	// (0x00034bff) title_pane_stacon_g2_ParamLimits

0x0aac,	// (0x00034bff) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x000437fc) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x000437fc) title_pane_stacon_g

0x114f,	// (0x000352a2) cursor_press_pane

0xba29,	// (0x0003fb7c) popup_fep_hwr_window_ParamLimits

0xba29,	// (0x0003fb7c) popup_fep_hwr_window

0xba85,	// (0x0003fbd8) popup_fep_vkb_window_ParamLimits

0xba85,	// (0x0003fbd8) popup_fep_vkb_window

0x330d,	// (0x00037460) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x00043c5c) fep_vkb_side_pane_g_ParamLimits

0xc2f4,	// (0x00040447) fep_hwr_candidate_pane_ParamLimits

0xc2f4,	// (0x00040447) fep_hwr_candidate_pane

0xc31c,	// (0x0004046f) fep_hwr_side_pane_ParamLimits

0xc31c,	// (0x0004046f) fep_hwr_side_pane

0xc33c,	// (0x0004048f) fep_hwr_top_pane_ParamLimits

0xc33c,	// (0x0004048f) fep_hwr_top_pane

0xc354,	// (0x000404a7) fep_hwr_write_pane_ParamLimits

0xc354,	// (0x000404a7) fep_hwr_write_pane

0xfb09,	// (0x00043c5c) fep_vkb_side_pane_g

0x3327,	// (0x0003747a) fep_hwr_top_pane_g1

0x3315,	// (0x00037468) fep_hwr_top_pane_g2

0xc38e,	// (0x000404e1) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x00043c38) fep_hwr_top_pane_g

0xc3a3,	// (0x000404f6) fep_hwr_top_text_pane

0x0cb6,	// (0x00034e09) fep_hwr_top_text_pane_g1

0x335d,	// (0x000374b0) fep_hwr_top_text_pane_t1

0xc491,	// (0x000405e4) fep_hwr_candidate_pane_g1

0x3526,	// (0x00037679) fep_vkb_keypad_pane_g3_ParamLimits

0x3526,	// (0x00037679) fep_vkb_keypad_pane_g3

0x3548,	// (0x0003769b) fep_vkb_keypad_pane_g4_ParamLimits

0x3548,	// (0x0003769b) fep_vkb_keypad_pane_g4

0x35b7,	// (0x0003770a) fep_vkb_bottom_pane_g2_ParamLimits

0x35b7,	// (0x0003770a) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x00043c63) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x00043c63) fep_vkb_bottom_pane_g

0x32bc,	// (0x0003740f) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x00043c6d) cell_vkb_side_pane_g

0x35fb,	// (0x0003774e) cell_vkb_side_pane_t1

0x3609,	// (0x0003775c) cell_vkb_side_pane_t1_copy1

0x32bc,	// (0x0003740f) bg_fep_vkb_candidate_pane_g2

0x36d7,	// (0x0003782a) cell_vkb_candidate_pane_ParamLimits

0x336b,	// (0x000374be) aid_size_cell_vkb_ParamLimits

0x336b,	// (0x000374be) aid_size_cell_vkb

0x36d7,	// (0x0003782a) cell_vkb_candidate_pane

0xc59c,	// (0x000406ef) bg_popup_fep_shadow_pane_g1

0x33d5,	// (0x00037528) fep_vkb_bottom_pane_ParamLimits

0x33d5,	// (0x00037528) fep_vkb_bottom_pane

0x3412,	// (0x00037565) fep_vkb_candidate_pane_ParamLimits

0x3412,	// (0x00037565) fep_vkb_candidate_pane

0x342e,	// (0x00037581) fep_vkb_keypad_pane_ParamLimits

0x342e,	// (0x00037581) fep_vkb_keypad_pane

0x3462,	// (0x000375b5) fep_vkb_side_pane_ParamLimits

0x3462,	// (0x000375b5) fep_vkb_side_pane

0x348e,	// (0x000375e1) fep_vkb_top_pane_ParamLimits

0x348e,	// (0x000375e1) fep_vkb_top_pane

0x34ba,	// (0x0003760d) fep_vkb_top_pane_g1_ParamLimits

0x34ba,	// (0x0003760d) fep_vkb_top_pane_g1

0x34c9,	// (0x0003761c) fep_vkb_top_pane_g2_ParamLimits

0x34c9,	// (0x0003761c) fep_vkb_top_pane_g2

0x34d8,	// (0x0003762b) fep_vkb_top_pane_g3_ParamLimits

0x34d8,	// (0x0003762b) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x00043c53) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x00043c53) fep_vkb_top_pane_g

0x34f6,	// (0x00037649) fep_vkb_top_text_pane_ParamLimits

0x34f6,	// (0x00037649) fep_vkb_top_text_pane

0xc4c4,	// (0x00040617) fep_vkb_side_pane_g1_ParamLimits

0xc4c4,	// (0x00040617) fep_vkb_side_pane_g1

0x3515,	// (0x00037668) grid_vkb_side_pane_ParamLimits

0x3515,	// (0x00037668) grid_vkb_side_pane

0xc5a4,	// (0x000406f7) bg_popup_fep_shadow_pane_g2

0xc5ad,	// (0x00040700) bg_popup_fep_shadow_pane_g3

0xc5b5,	// (0x00040708) bg_popup_fep_shadow_pane_g4

0xc5be,	// (0x00040711) bg_popup_fep_shadow_pane_g5

0xc5c6,	// (0x00040719) bg_popup_fep_shadow_pane_g6

0xc5ce,	// (0x00040721) bg_popup_fep_shadow_pane_g7

0x0810,	// (0x00034963) bg_popup_fep_shadow_pane_g8

0x3566,	// (0x000376b9) grid_vkb_keypad_number_pane_ParamLimits

0x3566,	// (0x000376b9) grid_vkb_keypad_number_pane

0x3576,	// (0x000376c9) grid_vkb_keypad_pane_ParamLimits

0x3576,	// (0x000376c9) grid_vkb_keypad_pane

0x359c,	// (0x000376ef) fep_vkb_bottom_pane_g1_ParamLimits

0x359c,	// (0x000376ef) fep_vkb_bottom_pane_g1

0x35c5,	// (0x00037718) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x35c5,	// (0x00037718) grid_vkb_keypad_bottom_left_pane

0x35da,	// (0x0003772d) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x35da,	// (0x0003772d) grid_vkb_keypad_bottom_right_pane

0x35ef,	// (0x00037742) fep_vkb_top_text_pane_g1

0xc50e,	// (0x00040661) fep_vkb_top_text_pane_t1

0xc523,	// (0x00040676) cell_vkb_side_pane_ParamLimits

0xc523,	// (0x00040676) cell_vkb_side_pane

0x32bc,	// (0x0003740f) cell_vkb_side_pane_g1

0x3617,	// (0x0003776a) cell_vkb_keypad_pane_ParamLimits

0x3617,	// (0x0003776a) cell_vkb_keypad_pane

0x3684,	// (0x000377d7) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x00043c80) bg_popup_fep_shadow_pane_g

0xc5de,	// (0x00040731) cell_hwr_side_pane_g1

0xc5de,	// (0x00040731) cell_hwr_side_pane_g2

0x368e,	// (0x000377e1) cell_vkb_keypad_pane_t1

0xc546,	// (0x00040699) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc546,	// (0x00040699) cell_vkb_keypad_bottom_left_pane

0xc563,	// (0x000406b6) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc563,	// (0x000406b6) cell_vkb_keypad_bottom_right_pane

0x32bc,	// (0x0003740f) cell_vkb_keypad_bottom_left_pane_g1

0x32bc,	// (0x0003740f) cell_vkb_keypad_bottom_right_pane_g1

0x369c,	// (0x000377ef) cell_vkb_keypad_number_pane_ParamLimits

0x369c,	// (0x000377ef) cell_vkb_keypad_number_pane

0x36bb,	// (0x0003780e) cell_vkb_keypad_number_pane_g1

0x36c5,	// (0x00037818) cell_vkb_keypad_number_pane_g2

0x36ce,	// (0x00037821) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x00043c72) cell_vkb_keypad_number_pane_g

0x368e,	// (0x000377e1) cell_vkb_keypad_number_pane_t1

0x36f0,	// (0x00037843) fep_vkb_candidate_pane_g1

0x0001,

0xfb40,	// (0x00043c93) cell_hwr_side_pane_g

0x3709,	// (0x0003785c) cell_hwr_side_pane_t1

0xc5e8,	// (0x0004073b) cell_hwr_side_pane_t1_copy1

0xc5f6,	// (0x00040749) cell_hwr_candidate_pane_g1

0xc625,	// (0x00040778) cell_hwr_candidate_pane_t1

0x32bc,	// (0x0003740f) cell_vkb_candidate_pane_g2

0x378f,	// (0x000378e2) cell_vkb_candidate_pane_t1

0xc2bf,	// (0x00040412) bg_popup_fep_shadow_pane_ParamLimits

0xc2bf,	// (0x00040412) bg_popup_fep_shadow_pane

0xc36e,	// (0x000404c1) bg_fep_hwr_top_pane_g4

0x3339,	// (0x0003748c) bg_hwr_side_pane_g1_ParamLimits

0x3339,	// (0x0003748c) bg_hwr_side_pane_g1

0xc3df,	// (0x00040532) cell_hwr_side_pane_ParamLimits

0xc3df,	// (0x00040532) cell_hwr_side_pane

0xc41a,	// (0x0004056d) fep_hwr_write_pane_g1_ParamLimits

0xc41a,	// (0x0004056d) fep_hwr_write_pane_g1

0xc427,	// (0x0004057a) fep_hwr_write_pane_g2_ParamLimits

0xc427,	// (0x0004057a) fep_hwr_write_pane_g2

0xc434,	// (0x00040587) fep_hwr_write_pane_g3_ParamLimits

0xc434,	// (0x00040587) fep_hwr_write_pane_g3

0xc442,	// (0x00040595) fep_hwr_write_pane_g4_ParamLimits

0xc442,	// (0x00040595) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x00043c3f) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x00043c3f) fep_hwr_write_pane_g

0xc36e,	// (0x000404c1) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xc36e,	// (0x000404c1) bg_fep_hwr_candidate_pane_g2

0xc457,	// (0x000405aa) cell_hwr_candidate_pane_ParamLimits

0xc457,	// (0x000405aa) cell_hwr_candidate_pane

0xc491,	// (0x000405e4) fep_hwr_candidate_pane_g1_ParamLimits

0x3399,	// (0x000374ec) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x3399,	// (0x000374ec) bg_popup_fep_shadow_pane_cp2

0x34e8,	// (0x0003763b) fep_vkb_top_pane_g4_ParamLimits

0x34e8,	// (0x0003763b) fep_vkb_top_pane_g4

0x3507,	// (0x0003765a) fep_vkb_side_pane_g2_ParamLimits

0x3507,	// (0x0003765a) fep_vkb_side_pane_g2

0xe13a,	// (0x0004228d) list_setting_pane_t4_ParamLimits

0xe13a,	// (0x0004228d) list_setting_pane_t4

0xe1d0,	// (0x00042323) list_setting_number_pane_t5_ParamLimits

0xe1d0,	// (0x00042323) list_setting_number_pane_t5

0x4aad,	// (0x00038c00) list_double_heading_pane_cp2_ParamLimits

0x4aad,	// (0x00038c00) list_double_heading_pane_cp2

0x0fbd,	// (0x00035110) list_double_heading_pane_g1_cp2_ParamLimits

0x0fbd,	// (0x00035110) list_double_heading_pane_g1_cp2

0x379d,	// (0x000378f0) list_double_heading_pane_g2_cp2_ParamLimits

0x379d,	// (0x000378f0) list_double_heading_pane_g2_cp2

0x37b1,	// (0x00037904) list_double_heading_pane_t1_cp2_ParamLimits

0x37b1,	// (0x00037904) list_double_heading_pane_t1_cp2

0x37c7,	// (0x0003791a) list_double_heading_pane_t2_cp2_ParamLimits

0x37c7,	// (0x0003791a) list_double_heading_pane_t2_cp2

0x00d7,	// (0x0003422a) aid_value_unit2

0xb285,	// (0x0003f3d8) popup_preview_fixed_window

0x0302,	// (0x00034455) bg_popup_preview_window_pane_cp02

0x37d9,	// (0x0003792c) list_preview_fixed_pane

0x381f,	// (0x00037972) list_empty_pane_fp_ParamLimits

0x381f,	// (0x00037972) list_empty_pane_fp

0x381f,	// (0x00037972) list_single_cale_day_pane_fp_ParamLimits

0x381f,	// (0x00037972) list_single_cale_day_pane_fp

0x381f,	// (0x00037972) list_single_graphic_heading_pane_fp_ParamLimits

0x381f,	// (0x00037972) list_single_graphic_heading_pane_fp

0x381f,	// (0x00037972) list_single_graphic_pane_fp_ParamLimits

0x381f,	// (0x00037972) list_single_graphic_pane_fp

0x381f,	// (0x00037972) list_single_heading_pane_fp_ParamLimits

0x381f,	// (0x00037972) list_single_heading_pane_fp

0x381f,	// (0x00037972) list_single_pane_fp_ParamLimits

0x381f,	// (0x00037972) list_single_pane_fp

0x3833,	// (0x00037986) list_single_pane_fp_g1_ParamLimits

0x3833,	// (0x00037986) list_single_pane_fp_g1

0xdf2b,	// (0x0004207e) list_single_pane_fp_g2_ParamLimits

0xdf2b,	// (0x0004207e) list_single_pane_fp_g2

0xec63,	// (0x00042db6) list_single_pane_fp_g3_ParamLimits

0xec63,	// (0x00042db6) list_single_pane_fp_g3

0x383f,	// (0x00037992) list_single_pane_fp_g4_ParamLimits

0x383f,	// (0x00037992) list_single_pane_fp_g4

0x0003,

0xfb53,	// (0x00043ca6) list_single_pane_fp_g_ParamLimits

0xfb53,	// (0x00043ca6) list_single_pane_fp_g

0xe96f,	// (0x00042ac2) list_single_pane_fp_t1_ParamLimits

0xe96f,	// (0x00042ac2) list_single_pane_fp_t1

0xe986,	// (0x00042ad9) list_single_graphic_pane_fp_g1_ParamLimits

0xe986,	// (0x00042ad9) list_single_graphic_pane_fp_g1

0x3833,	// (0x00037986) list_single_graphic_pane_fp_g2_ParamLimits

0x3833,	// (0x00037986) list_single_graphic_pane_fp_g2

0xdf2b,	// (0x0004207e) list_single_graphic_pane_fp_g3_ParamLimits

0xdf2b,	// (0x0004207e) list_single_graphic_pane_fp_g3

0xec63,	// (0x00042db6) list_single_graphic_pane_fp_g4_ParamLimits

0xec63,	// (0x00042db6) list_single_graphic_pane_fp_g4

0x383f,	// (0x00037992) list_single_graphic_pane_fp_g5_ParamLimits

0x383f,	// (0x00037992) list_single_graphic_pane_fp_g5

0x0004,

0xfb5c,	// (0x00043caf) list_single_graphic_pane_fp_g_ParamLimits

0xfb5c,	// (0x00043caf) list_single_graphic_pane_fp_g

0xe992,	// (0x00042ae5) list_single_graphic_pane_fp_t1_ParamLimits

0xe992,	// (0x00042ae5) list_single_graphic_pane_fp_t1

0xe986,	// (0x00042ad9) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe986,	// (0x00042ad9) list_single_graphic_heading_pane_fp_g1

0x3833,	// (0x00037986) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x3833,	// (0x00037986) list_single_graphic_heading_pane_fp_g2

0xdf2b,	// (0x0004207e) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xdf2b,	// (0x0004207e) list_single_graphic_heading_pane_fp_g3

0xec63,	// (0x00042db6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xec63,	// (0x00042db6) list_single_graphic_heading_pane_fp_g4

0x383f,	// (0x00037992) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x383f,	// (0x00037992) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x00043caf) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x00043caf) list_single_graphic_heading_pane_fp_g

0xe9a8,	// (0x00042afb) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe9a8,	// (0x00042afb) list_single_graphic_heading_pane_fp_t1

0xe9be,	// (0x00042b11) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe9be,	// (0x00042b11) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb67,	// (0x00043cba) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb67,	// (0x00043cba) list_single_graphic_heading_pane_fp_t

0xe9d0,	// (0x00042b23) list_single_cale_day_pane_fp_g1_ParamLimits

0xe9d0,	// (0x00042b23) list_single_cale_day_pane_fp_g1

0x384b,	// (0x0003799e) list_single_cale_day_pane_fp_g2_ParamLimits

0x384b,	// (0x0003799e) list_single_cale_day_pane_fp_g2

0xec77,	// (0x00042dca) list_single_cale_day_pane_fp_g3_ParamLimits

0xec77,	// (0x00042dca) list_single_cale_day_pane_fp_g3

0xec9f,	// (0x00042df2) list_single_cale_day_pane_fp_g4_ParamLimits

0xec9f,	// (0x00042df2) list_single_cale_day_pane_fp_g4

0xecc3,	// (0x00042e16) list_single_cale_day_pane_fp_g5_ParamLimits

0xecc3,	// (0x00042e16) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6c,	// (0x00043cbf) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6c,	// (0x00043cbf) list_single_cale_day_pane_fp_g

0xea08,	// (0x00042b5b) list_single_cale_day_pane_fp_t1_ParamLimits

0xea08,	// (0x00042b5b) list_single_cale_day_pane_fp_t1

0xea2e,	// (0x00042b81) list_single_cale_day_pane_fp_t2_ParamLimits

0xea2e,	// (0x00042b81) list_single_cale_day_pane_fp_t2

0xea47,	// (0x00042b9a) list_single_cale_day_pane_fp_t3_ParamLimits

0xea47,	// (0x00042b9a) list_single_cale_day_pane_fp_t3

0x0002,

0xfb77,	// (0x00043cca) list_single_cale_day_pane_fp_t_ParamLimits

0xfb77,	// (0x00043cca) list_single_cale_day_pane_fp_t

0x3833,	// (0x00037986) list_empty_pane_fp_g1_ParamLimits

0x3833,	// (0x00037986) list_empty_pane_fp_g1

0xea60,	// (0x00042bb3) list_empty_pane_fp_t1

0xea6e,	// (0x00042bc1) list_empty_pane_fp_t2

0x0001,

0xfb7e,	// (0x00043cd1) list_empty_pane_fp_t

0x3833,	// (0x00037986) list_single_heading_pane_fp_g1_ParamLimits

0x3833,	// (0x00037986) list_single_heading_pane_fp_g1

0xdf2b,	// (0x0004207e) list_single_heading_pane_fp_g2_ParamLimits

0xdf2b,	// (0x0004207e) list_single_heading_pane_fp_g2

0xec63,	// (0x00042db6) list_single_heading_pane_fp_g3_ParamLimits

0xec63,	// (0x00042db6) list_single_heading_pane_fp_g3

0x0002,

0xfb83,	// (0x00043cd6) list_single_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x00043cd6) list_single_heading_pane_fp_g

0xea7c,	// (0x00042bcf) list_single_heading_pane_fp_t1_ParamLimits

0xea7c,	// (0x00042bcf) list_single_heading_pane_fp_t1

0xea8e,	// (0x00042be1) list_single_heading_pane_fp_t2_ParamLimits

0xea8e,	// (0x00042be1) list_single_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x00043cdd) list_single_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x00043cdd) list_single_heading_pane_fp_t

0x0936,	// (0x00034a89) aid_size_cell_fast

0x02d7,	// (0x0003442a) soft_indicator_pane_cp1_t1

0x0973,	// (0x00034ac6) cell_app_pane_cp2_ParamLimits

0x0973,	// (0x00034ac6) cell_app_pane_cp2

0xc2e1,	// (0x00040434) fep_hwr_candidate_drop_down_list_pane

0xc4ab,	// (0x000405fe) fep_hwr_candidate_pane_g3_ParamLimits

0xc4ab,	// (0x000405fe) fep_hwr_candidate_pane_g3

0x8d4c,	// (0x0003ce9f) fep_hwr_candidate_pane_g4_ParamLimits

0x8d4c,	// (0x0003ce9f) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x00043c4c) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x00043c4c) fep_hwr_candidate_pane_g

0x3401,	// (0x00037554) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x3401,	// (0x00037554) fep_vkb_candidate_drop_down_list_pane

0x36f8,	// (0x0003784b) fep_vkb_candidate_pane_g3

0x3700,	// (0x00037853) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x00043c79) fep_vkb_candidate_pane_g

0xc5f6,	// (0x00040749) cell_hwr_candidate_pane_g1_ParamLimits

0xc604,	// (0x00040757) cell_hwr_candidate_pane_g3_ParamLimits

0xc604,	// (0x00040757) cell_hwr_candidate_pane_g3

0x9786,	// (0x0003d8d9) cell_hwr_candidate_pane_g4_ParamLimits

0x9786,	// (0x0003d8d9) cell_hwr_candidate_pane_g4

0x0002,

0xfb45,	// (0x00043c98) cell_hwr_candidate_pane_g_ParamLimits

0xfb45,	// (0x00043c98) cell_hwr_candidate_pane_g

0x3759,	// (0x000378ac) cell_vkb_candidate_pane_g3_ParamLimits

0x3759,	// (0x000378ac) cell_vkb_candidate_pane_g3

0x3774,	// (0x000378c7) cell_vkb_candidate_pane_g4_ParamLimits

0x3774,	// (0x000378c7) cell_vkb_candidate_pane_g4

0x3857,	// (0x000379aa) cell_app_pane_cp2_g1_ParamLimits

0x3857,	// (0x000379aa) cell_app_pane_cp2_g1

0x3875,	// (0x000379c8) cell_app_pane_cp2_g2_ParamLimits

0x3875,	// (0x000379c8) cell_app_pane_cp2_g2

0x0001,

0xfb8f,	// (0x00043ce2) cell_app_pane_cp2_g_ParamLimits

0xfb8f,	// (0x00043ce2) cell_app_pane_cp2_g

0x3881,	// (0x000379d4) cell_app_pane_cp2_t1_ParamLimits

0x3881,	// (0x000379d4) cell_app_pane_cp2_t1

0x07a9,	// (0x000348fc) grid_highlight_pane_cp1_ParamLimits

0x07a9,	// (0x000348fc) grid_highlight_pane_cp1

0xc642,	// (0x00040795) cell_hwr_candidate_pane_cp1_ParamLimits

0xc642,	// (0x00040795) cell_hwr_candidate_pane_cp1

0xc5f6,	// (0x00040749) fep_hwr_candidate_drop_down_list_pane_g1

0xc660,	// (0x000407b3) fep_hwr_candidate_drop_down_list_pane_g2

0xc66d,	// (0x000407c0) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb94,	// (0x00043ce7) fep_hwr_candidate_drop_down_list_pane_g

0xc67a,	// (0x000407cd) fep_hwr_candidate_drop_down_list_scroll_pane

0xc683,	// (0x000407d6) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc683,	// (0x000407d6) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xc690,	// (0x000407e3) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc690,	// (0x000407e3) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xc69d,	// (0x000407f0) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc69d,	// (0x000407f0) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc6aa,	// (0x000407fd) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc6aa,	// (0x000407fd) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc6c5,	// (0x00040818) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc6c5,	// (0x00040818) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xc6e0,	// (0x00040833) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc6e0,	// (0x00040833) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xc6fb,	// (0x0004084e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc6fb,	// (0x0004084e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xc716,	// (0x00040869) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc716,	// (0x00040869) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9b,	// (0x00043cee) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9b,	// (0x00043cee) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc731,	// (0x00040884) cell_vkb_candidate_pane_cp1_ParamLimits

0xc731,	// (0x00040884) cell_vkb_candidate_pane_cp1

0x34e8,	// (0x0003763b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x34e8,	// (0x0003763b) fep_vkb_candidate_drop_down_list_pane_g1

0x3893,	// (0x000379e6) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x3893,	// (0x000379e6) fep_vkb_candidate_drop_down_list_pane_g2

0x38a0,	// (0x000379f3) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x38a0,	// (0x000379f3) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbac,	// (0x00043cff) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbac,	// (0x00043cff) fep_vkb_candidate_drop_down_list_pane_g

0x38ad,	// (0x00037a00) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x38ad,	// (0x00037a00) fep_vkb_candidate_drop_down_list_scroll_pane

0x38ba,	// (0x00037a0d) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x38ba,	// (0x00037a0d) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x38c7,	// (0x00037a1a) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x38c7,	// (0x00037a1a) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x38d3,	// (0x00037a26) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x38d3,	// (0x00037a26) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x3717,	// (0x0003786a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x3717,	// (0x0003786a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x3738,	// (0x0003788b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x3738,	// (0x0003788b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x38df,	// (0x00037a32) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x38df,	// (0x00037a32) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x3900,	// (0x00037a53) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x3900,	// (0x00037a53) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x3921,	// (0x00037a74) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x3921,	// (0x00037a74) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb3,	// (0x00043d06) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb3,	// (0x00043d06) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x3a50,	// (0x00037ba3) title_pane_g1_ParamLimits

0x3a5d,	// (0x00037bb0) title_pane_g2_ParamLimits

0xf529,	// (0x0004367c) title_pane_g_ParamLimits

0x0cae,	// (0x00034e01) aid_call2_pane

0x0ca6,	// (0x00034df9) aid_call_pane

0x0cb6,	// (0x00034e09) popup_clock_analogue_window_g1

0x0cb6,	// (0x00034e09) popup_clock_analogue_window_g2

0xb55f,	// (0x0003f6b2) popup_clock_analogue_window_g3

0xb568,	// (0x0003f6bb) popup_clock_analogue_window_g4

0x00e9,	// (0x0003423c) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x0004382b) popup_clock_analogue_window_g

0xb570,	// (0x0003f6c3) popup_clock_analogue_window_t1

0xb57e,	// (0x0003f6d1) clock_digital_number_pane_ParamLimits

0xb57e,	// (0x0003f6d1) clock_digital_number_pane

0xb58a,	// (0x0003f6dd) clock_digital_number_pane_cp02_ParamLimits

0xb58a,	// (0x0003f6dd) clock_digital_number_pane_cp02

0xb596,	// (0x0003f6e9) clock_digital_number_pane_cp03_ParamLimits

0xb596,	// (0x0003f6e9) clock_digital_number_pane_cp03

0xb5a2,	// (0x0003f6f5) clock_digital_number_pane_cp04_ParamLimits

0xb5a2,	// (0x0003f6f5) clock_digital_number_pane_cp04

0xb5ae,	// (0x0003f701) clock_digital_separator_pane_ParamLimits

0xb5ae,	// (0x0003f701) clock_digital_separator_pane

0xb5ba,	// (0x0003f70d) popup_clock_digital_window_t1_ParamLimits

0xb5ba,	// (0x0003f70d) popup_clock_digital_window_t1

0x00e9,	// (0x0003423c) clock_digital_number_pane_g1

0x00e9,	// (0x0003423c) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x00043836) clock_digital_number_pane_g

0x00e9,	// (0x0003423c) clock_digital_separator_pane_g1

0x00e9,	// (0x0003423c) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x00043836) clock_digital_separator_pane_g

0x4ccf,	// (0x00038e22) aid_fill_nsta_ParamLimits

0x4d8e,	// (0x00038ee1) indicator_nsta_pane_ParamLimits

0x1433,	// (0x00035586) popup_clock_analogue_window

0x1433,	// (0x00035586) popup_clock_digital_window

0x5410,	// (0x00039563) grid_indicator_nsta_pane_ParamLimits

0x2eb4,	// (0x00037007) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x00043bcc) clock_nsta_pane_t

0xb523,	// (0x0003f676) aid_size_max_handle

0xb52d,	// (0x0003f680) aid_size_min_handle

0x114f,	// (0x000352a2) editor_scroll_pane

0x393c,	// (0x00037a8f) ex_editor_pane

0x08ff,	// (0x00034a52) scroll_pane_cp13

0x074d,	// (0x000348a0) scroll_pane_cp14

0x0ce5,	// (0x00034e38) scroll_pane_cp36

0x4abd,	// (0x00038c10) list_single_graphic_hl_pane_cp2_ParamLimits

0x4abd,	// (0x00038c10) list_single_graphic_hl_pane_cp2

0xe696,	// (0x000427e9) list_single_graphic_hl_pane_ParamLimits

0xe696,	// (0x000427e9) list_single_graphic_hl_pane

0xeaa4,	// (0x00042bf7) aid_size_min_hl_cp1

0x3944,	// (0x00037a97) list_highlight_pane_cp34_ParamLimits

0x3944,	// (0x00037a97) list_highlight_pane_cp34

0x3955,	// (0x00037aa8) list_single_graphic_hl_pane_g1_ParamLimits

0x3955,	// (0x00037aa8) list_single_graphic_hl_pane_g1

0xeaad,	// (0x00042c00) list_single_graphic_hl_pane_g2_ParamLimits

0xeaad,	// (0x00042c00) list_single_graphic_hl_pane_g2

0xeaad,	// (0x00042c00) list_single_graphic_hl_pane_g3_ParamLimits

0xeaad,	// (0x00042c00) list_single_graphic_hl_pane_g3

0xdf2b,	// (0x0004207e) list_single_graphic_hl_pane_g4_ParamLimits

0xdf2b,	// (0x0004207e) list_single_graphic_hl_pane_g4

0xec63,	// (0x00042db6) list_single_graphic_hl_pane_g5_ParamLimits

0xec63,	// (0x00042db6) list_single_graphic_hl_pane_g5

0x0004,

0xfbc4,	// (0x00043d17) list_single_graphic_hl_pane_g_ParamLimits

0xfbc4,	// (0x00043d17) list_single_graphic_hl_pane_g

0xdef7,	// (0x0004204a) list_single_graphic_hl_pane_t1_ParamLimits

0xdef7,	// (0x0004204a) list_single_graphic_hl_pane_t1

0x3962,	// (0x00037ab5) aid_size_min_hl_cp2

0x396b,	// (0x00037abe) list_highlight_pane_cp34_cp2_ParamLimits

0x396b,	// (0x00037abe) list_highlight_pane_cp34_cp2

0x3955,	// (0x00037aa8) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x3955,	// (0x00037aa8) list_single_graphic_hl_pane_g1_cp2

0x3978,	// (0x00037acb) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x3978,	// (0x00037acb) list_single_graphic_hl_pane_g2_cp2

0x3984,	// (0x00037ad7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x3984,	// (0x00037ad7) list_single_graphic_hl_pane_g3_cp2

0x0fbd,	// (0x00035110) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x0fbd,	// (0x00035110) list_single_graphic_hl_pane_g4_cp2

0x379d,	// (0x000378f0) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x379d,	// (0x000378f0) list_single_graphic_hl_pane_g5_cp2

0xb845,	// (0x0003f998) control_pane_g4_ParamLimits

0xb845,	// (0x0003f998) control_pane_g4

0x136b,	// (0x000354be) bg_popup_sub_pane_cp10_ParamLimits

0x32c6,	// (0x00037419) list_choice_list_pane_ParamLimits

0x32d5,	// (0x00037428) scroll_pane_cp23

0x0302,	// (0x00034455) bg_popup_preview_window_pane_cp02_ParamLimits

0x37d9,	// (0x0003792c) list_preview_fixed_pane_ParamLimits

0x37ef,	// (0x00037942) list_preview_fixed_pane_cp_ParamLimits

0x37ef,	// (0x00037942) list_preview_fixed_pane_cp

0x37fb,	// (0x0003794e) popup_preview_fixed_window_g1_ParamLimits

0x37fb,	// (0x0003794e) popup_preview_fixed_window_g1

0x3807,	// (0x0003795a) popup_preview_fixed_window_g2_ParamLimits

0x3807,	// (0x0003795a) popup_preview_fixed_window_g2

0x0002,

0xfb4c,	// (0x00043c9f) popup_preview_fixed_window_g_ParamLimits

0xfb4c,	// (0x00043c9f) popup_preview_fixed_window_g

0xb4b3,	// (0x0003f606) aid_navi_side_left_pane_ParamLimits

0xb4c3,	// (0x0003f616) aid_navi_side_right_pane_ParamLimits

0xb4d2,	// (0x0003f625) navi_icon_pane_stacon_ParamLimits

0xb4e2,	// (0x0003f635) navi_navi_pane_stacon_ParamLimits

0xb4d2,	// (0x0003f625) navi_text_pane_stacon_ParamLimits

0xb166,	// (0x0003f2b9) main_text_info_pane

0x39a6,	// (0x00037af9) listscroll_text_info_pane

0x39ae,	// (0x00037b01) list_text_info_pane_ParamLimits

0x39ae,	// (0x00037b01) list_text_info_pane

0x3c61,	// (0x00037db4) scroll_pane_cp24_ParamLimits

0x3c61,	// (0x00037db4) scroll_pane_cp24

0xc754,	// (0x000408a7) list_text_info_pane_t1_ParamLimits

0xc754,	// (0x000408a7) list_text_info_pane_t1

0xb9a7,	// (0x0003fafa) popup_fast_swap2_window_ParamLimits

0xb9a7,	// (0x0003fafa) popup_fast_swap2_window

0x3c7f,	// (0x00037dd2) aid_size_cell_fast2

0x00df,	// (0x00034232) bg_popup_window_pane_cp17

0x18de,	// (0x00035a31) heading_pane_cp2

0x18e6,	// (0x00035a39) listscroll_fast2_pane

0x3c89,	// (0x00037ddc) grid_fast2_pane

0x3c91,	// (0x00037de4) listscroll_fast2_pane_g1

0x3c99,	// (0x00037dec) listscroll_fast2_pane_g2

0x0001,

0xfbcf,	// (0x00043d22) listscroll_fast2_pane_g

0x08ff,	// (0x00034a52) scroll_pane_cp26

0x3ca1,	// (0x00037df4) cell_fast2_pane_ParamLimits

0x3ca1,	// (0x00037df4) cell_fast2_pane

0x3cb7,	// (0x00037e0a) cell_fast2_pane_g1

0x3cc0,	// (0x00037e13) cell_fast2_pane_g2

0x3cc9,	// (0x00037e1c) cell_fast2_pane_g3

0x0002,

0xfbd4,	// (0x00043d27) cell_fast2_pane_g

0x05ae,	// (0x00034701) grid_highlight_pane_cp9

0xb973,	// (0x0003fac6) main_eswt_pane_ParamLimits

0xb973,	// (0x0003fac6) main_eswt_pane

0x3c76,	// (0x00037dc9) list_single_text_info_pane

0x3cd1,	// (0x00037e24) eswt_ctrl_button_pane

0x3cd1,	// (0x00037e24) eswt_ctrl_canvas_pane

0x3cd9,	// (0x00037e2c) eswt_ctrl_combo_pane

0x3cd1,	// (0x00037e24) eswt_ctrl_default_pane

0x3cd1,	// (0x00037e24) eswt_ctrl_label_pane

0x3ce1,	// (0x00037e34) eswt_ctrl_wait_pane

0x3ce9,	// (0x00037e3c) eswt_shell_pane

0x00df,	// (0x00034232) listscroll_eswt_app_pane

0x3d05,	// (0x00037e58) popup_eswt_tasktip_window_ParamLimits

0x3d05,	// (0x00037e58) popup_eswt_tasktip_window

0x15b4,	// (0x00035707) bg_popup_window_pane_cp18

0x3d16,	// (0x00037e69) eswt_control_pane_g1_ParamLimits

0x3d16,	// (0x00037e69) eswt_control_pane_g1

0x3d23,	// (0x00037e76) eswt_control_pane_g2_ParamLimits

0x3d23,	// (0x00037e76) eswt_control_pane_g2

0x3d30,	// (0x00037e83) eswt_control_pane_g3_ParamLimits

0x3d30,	// (0x00037e83) eswt_control_pane_g3

0x3d3d,	// (0x00037e90) eswt_control_pane_g4_ParamLimits

0x3d3d,	// (0x00037e90) eswt_control_pane_g4

0x0003,

0xfbdb,	// (0x00043d2e) eswt_control_pane_g_ParamLimits

0xfbdb,	// (0x00043d2e) eswt_control_pane_g

0x07a9,	// (0x000348fc) bg_button_pane_ParamLimits

0x07a9,	// (0x000348fc) bg_button_pane

0x05c3,	// (0x00034716) common_borders_pane_copy2_ParamLimits

0x05c3,	// (0x00034716) common_borders_pane_copy2

0x3d4a,	// (0x00037e9d) control_button_pane_g1_ParamLimits

0x3d4a,	// (0x00037e9d) control_button_pane_g1

0x3d56,	// (0x00037ea9) control_button_pane_g2_ParamLimits

0x3d56,	// (0x00037ea9) control_button_pane_g2

0x3d62,	// (0x00037eb5) control_button_pane_g3_ParamLimits

0x3d62,	// (0x00037eb5) control_button_pane_g3

0x0002,

0xfbe4,	// (0x00043d37) control_button_pane_g_ParamLimits

0xfbe4,	// (0x00043d37) control_button_pane_g

0x3d76,	// (0x00037ec9) control_button_pane_t1

0x3d84,	// (0x00037ed7) control_button_pane_t2

0x0001,

0xfbeb,	// (0x00043d3e) control_button_pane_t

0x1534,	// (0x00035687) bg_button_pane_g1

0x153c,	// (0x0003568f) bg_button_pane_g2

0x1544,	// (0x00035697) bg_button_pane_g3

0x154c,	// (0x0003569f) bg_button_pane_g4

0x1554,	// (0x000356a7) bg_button_pane_g5

0x155c,	// (0x000356af) bg_button_pane_g6

0x1564,	// (0x000356b7) bg_button_pane_g7

0x156c,	// (0x000356bf) bg_button_pane_g8

0x1574,	// (0x000356c7) bg_button_pane_g9

0x0008,

0xf83f,	// (0x00043992) bg_button_pane_g

0x3281,	// (0x000373d4) common_borders_pane_ParamLimits

0x3281,	// (0x000373d4) common_borders_pane

0x3d16,	// (0x00037e69) eswt_control_pane_g1_copy1_ParamLimits

0x3d16,	// (0x00037e69) eswt_control_pane_g1_copy1

0x3d23,	// (0x00037e76) eswt_control_pane_g2_copy1_ParamLimits

0x3d23,	// (0x00037e76) eswt_control_pane_g2_copy1

0x3d30,	// (0x00037e83) eswt_control_pane_g3_copy1_ParamLimits

0x3d30,	// (0x00037e83) eswt_control_pane_g3_copy1

0x3d3d,	// (0x00037e90) eswt_control_pane_g4_copy1_ParamLimits

0x3d3d,	// (0x00037e90) eswt_control_pane_g4_copy1

0x32bc,	// (0x0003740f) bg_eswt_ctrl_canvas_pane_g1

0x3281,	// (0x000373d4) common_borders_pane_cp2_ParamLimits

0x3281,	// (0x000373d4) common_borders_pane_cp2

0x3281,	// (0x000373d4) common_borders_pane_cp3_ParamLimits

0x3281,	// (0x000373d4) common_borders_pane_cp3

0x3d92,	// (0x00037ee5) separator_horizontal_pane

0x0b45,	// (0x00034c98) separator_vertical_pane

0x3d16,	// (0x00037e69) eswt_control_pane_g1_copy2_ParamLimits

0x3d16,	// (0x00037e69) eswt_control_pane_g1_copy2

0x3d23,	// (0x00037e76) eswt_control_pane_g2_copy2_ParamLimits

0x3d23,	// (0x00037e76) eswt_control_pane_g2_copy2

0x3d30,	// (0x00037e83) eswt_control_pane_g3_copy2_ParamLimits

0x3d30,	// (0x00037e83) eswt_control_pane_g3_copy2

0x3d3d,	// (0x00037e90) eswt_control_pane_g4_copy2_ParamLimits

0x3d3d,	// (0x00037e90) eswt_control_pane_g4_copy2

0x00df,	// (0x00034232) common_borders_pane_cp4

0x3d9a,	// (0x00037eed) separator_horizontal_pane_g1

0x3da3,	// (0x00037ef6) separator_horizontal_pane_g2

0x3dac,	// (0x00037eff) separator_horizontal_pane_g3

0x0002,

0xfbf0,	// (0x00043d43) separator_horizontal_pane_g

0x3d16,	// (0x00037e69) eswt_control_pane_g1_copy3_ParamLimits

0x3d16,	// (0x00037e69) eswt_control_pane_g1_copy3

0x3d23,	// (0x00037e76) eswt_control_pane_g2_copy3_ParamLimits

0x3d23,	// (0x00037e76) eswt_control_pane_g2_copy3

0x3d30,	// (0x00037e83) eswt_control_pane_g3_copy3_ParamLimits

0x3d30,	// (0x00037e83) eswt_control_pane_g3_copy3

0x3d3d,	// (0x00037e90) eswt_control_pane_g4_copy3_ParamLimits

0x3d3d,	// (0x00037e90) eswt_control_pane_g4_copy3

0x00df,	// (0x00034232) common_borders_pane_cp5

0x3db5,	// (0x00037f08) separator_vertical_pane_g1

0x3dbe,	// (0x00037f11) separator_vertical_pane_g2

0x3dc7,	// (0x00037f1a) separator_vertical_pane_g3

0x0002,

0xfbf7,	// (0x00043d4a) separator_vertical_pane_g

0x3d16,	// (0x00037e69) eswt_control_pane_g1_copy4_ParamLimits

0x3d16,	// (0x00037e69) eswt_control_pane_g1_copy4

0x3d23,	// (0x00037e76) eswt_control_pane_g2_copy4_ParamLimits

0x3d23,	// (0x00037e76) eswt_control_pane_g2_copy4

0x3d30,	// (0x00037e83) eswt_control_pane_g3_copy4_ParamLimits

0x3d30,	// (0x00037e83) eswt_control_pane_g3_copy4

0x3d3d,	// (0x00037e90) eswt_control_pane_g4_copy4_ParamLimits

0x3d3d,	// (0x00037e90) eswt_control_pane_g4_copy4

0xc771,	// (0x000408c4) eswt_ctrl_combo_button_pane

0xc779,	// (0x000408cc) eswt_ctrl_input_pane

0xc781,	// (0x000408d4) popup_choice_list_window_cp70

0xc789,	// (0x000408dc) eswt_ctrl_input_pane_t1

0x00df,	// (0x00034232) input_focus_pane_cp70

0x3281,	// (0x000373d4) bg_button_pane_cp70_ParamLimits

0x3281,	// (0x000373d4) bg_button_pane_cp70

0xc797,	// (0x000408ea) eswt_ctrl_combo_button_pane_g1

0x3dd0,	// (0x00037f23) wait_bar_pane_cp70

0x15b4,	// (0x00035707) bg_popup_window_pane_cp70_ParamLimits

0x15b4,	// (0x00035707) bg_popup_window_pane_cp70

0x3dd8,	// (0x00037f2b) popup_eswt_tasktip_window_t1

0x3dee,	// (0x00037f41) wait_bar_pane_cp71_ParamLimits

0x3dee,	// (0x00037f41) wait_bar_pane_cp71

0x3dfa,	// (0x00037f4d) grid_eswt_app_pane

0x0b4e,	// (0x00034ca1) scroll_pane_cp70

0xc79f,	// (0x000408f2) cell_eswt_app_pane_ParamLimits

0xc79f,	// (0x000408f2) cell_eswt_app_pane

0xc7c7,	// (0x0004091a) cell_eswt_app_pane_g1_ParamLimits

0xc7c7,	// (0x0004091a) cell_eswt_app_pane_g1

0xc7f6,	// (0x00040949) cell_eswt_app_pane_g2_ParamLimits

0xc7f6,	// (0x00040949) cell_eswt_app_pane_g2

0x0001,

0xfbfe,	// (0x00043d51) cell_eswt_app_pane_g_ParamLimits

0xfbfe,	// (0x00043d51) cell_eswt_app_pane_g

0xc81f,	// (0x00040972) cell_eswt_app_pane_t1_ParamLimits

0xc81f,	// (0x00040972) cell_eswt_app_pane_t1

0x3e03,	// (0x00037f56) grid_highlight_pane_cp70_ParamLimits

0x3e03,	// (0x00037f56) grid_highlight_pane_cp70

0x0755,	// (0x000348a8) set_content_pane_g1

0x4c80,	// (0x00038dd3) status_small_volume_pane

0xc851,	// (0x000409a4) status_small_volume_pane_g1

0xc859,	// (0x000409ac) volume_small2_pane

0xc862,	// (0x000409b5) volume_small2_pane_g1

0xc86b,	// (0x000409be) volume_small2_pane_g2

0xc874,	// (0x000409c7) volume_small2_pane_g3

0xc87d,	// (0x000409d0) volume_small2_pane_g4

0xc886,	// (0x000409d9) volume_small2_pane_g5

0xc88f,	// (0x000409e2) volume_small2_pane_g6

0xc898,	// (0x000409eb) volume_small2_pane_g7

0xc8a1,	// (0x000409f4) volume_small2_pane_g8

0xc8aa,	// (0x000409fd) volume_small2_pane_g9

0xc8b3,	// (0x00040a06) volume_small2_pane_g10

0x0009,

0xfc03,	// (0x00043d56) volume_small2_pane_g

0x35ef,	// (0x00037742) fep_vkb_top_text_pane_g1_ParamLimits

0xc50e,	// (0x00040661) fep_vkb_top_text_pane_t1_ParamLimits

0x3813,	// (0x00037966) popup_preview_fixed_window_g3_ParamLimits

0x3813,	// (0x00037966) popup_preview_fixed_window_g3

0xbd6c,	// (0x0003febf) popup_toolbar_trans_pane

0x26a8,	// (0x000367fb) aid_height_set_list_ParamLimits

0x26b4,	// (0x00036807) aid_size_parent_ParamLimits

0x136b,	// (0x000354be) list_highlight_pane_cp2_ParamLimits

0x0755,	// (0x000348a8) set_content_pane_g1_ParamLimits

0x52b1,	// (0x00039404) list_single_image_pane_ParamLimits

0x52b1,	// (0x00039404) list_single_image_pane

0xc8bc,	// (0x00040a0f) aid_size_cell_image_ParamLimits

0xc8bc,	// (0x00040a0f) aid_size_cell_image

0xc8c9,	// (0x00040a1c) grid_single_image_pane_ParamLimits

0xc8c9,	// (0x00040a1c) grid_single_image_pane

0x0755,	// (0x000348a8) list_single_image_pane_g1_ParamLimits

0x0755,	// (0x000348a8) list_single_image_pane_g1

0x07c3,	// (0x00034916) list_single_image_pane_g2_ParamLimits

0x07c3,	// (0x00034916) list_single_image_pane_g2

0x0001,

0xfc18,	// (0x00043d6b) list_single_image_pane_g_ParamLimits

0xfc18,	// (0x00043d6b) list_single_image_pane_g

0x39bd,	// (0x00037b10) list_single_image_pane_t1_ParamLimits

0x39bd,	// (0x00037b10) list_single_image_pane_t1

0xc8d5,	// (0x00040a28) cell_image_list_pane_ParamLimits

0xc8d5,	// (0x00040a28) cell_image_list_pane

0xc8e8,	// (0x00040a3b) cell_image_list_pane_g1

0xc8f1,	// (0x00040a44) cell_image_list_pane_g2

0x0001,

0xfc1d,	// (0x00043d70) cell_image_list_pane_g

0x3e0f,	// (0x00037f62) aid_size_cell_tb_trans_pane

0x07a9,	// (0x000348fc) bg_tb_trans_pane

0x3e21,	// (0x00037f74) grid_tb_trans_pane

0x1534,	// (0x00035687) bg_tb_trans_pane_g1

0x153c,	// (0x0003568f) bg_tb_trans_pane_g2

0x1544,	// (0x00035697) bg_tb_trans_pane_g3

0x154c,	// (0x0003569f) bg_tb_trans_pane_g4

0x1554,	// (0x000356a7) bg_tb_trans_pane_g5

0x156c,	// (0x000356bf) bg_tb_trans_pane_g6

0x1574,	// (0x000356c7) bg_tb_trans_pane_g7

0x155c,	// (0x000356af) bg_tb_trans_pane_g8

0x1564,	// (0x000356b7) bg_tb_trans_pane_g9

0x0008,

0xfc22,	// (0x00043d75) bg_tb_trans_pane_g

0x3e35,	// (0x00037f88) cell_toolbar_trans_pane_ParamLimits

0x3e35,	// (0x00037f88) cell_toolbar_trans_pane

0x32bc,	// (0x0003740f) cell_toolbar_trans_pane_g1

0x550a,	// (0x0003965d) list_form2_midp_pane_t1

0x5518,	// (0x0003966b) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x00043c12) list_form2_midp_pane_t

0x2f90,	// (0x000370e3) scroll_pane_cp51_ParamLimits

0x3106,	// (0x00037259) form2_midp_wait_pane_g1

0x310f,	// (0x00037262) form2_midp_wait_pane_g2

0x3118,	// (0x0003726b) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x00043c27) form2_midp_wait_pane_g

0x01b9,	// (0x0003430c) list_highlight_pane_cp21_ParamLimits

0x3156,	// (0x000372a9) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x3165,	// (0x000372b8) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe655,	// (0x000427a8) list_single_2graphic_im_pane_ParamLimits

0xe655,	// (0x000427a8) list_single_2graphic_im_pane

0xc8fa,	// (0x00040a4d) list_single_2graphic_im_pane_g1_ParamLimits

0xc8fa,	// (0x00040a4d) list_single_2graphic_im_pane_g1

0xc90b,	// (0x00040a5e) list_single_2graphic_im_pane_g2_ParamLimits

0xc90b,	// (0x00040a5e) list_single_2graphic_im_pane_g2

0xc917,	// (0x00040a6a) list_single_2graphic_im_pane_g3_ParamLimits

0xc917,	// (0x00040a6a) list_single_2graphic_im_pane_g3

0x0003,

0xfc35,	// (0x00043d88) list_single_2graphic_im_pane_g_ParamLimits

0xfc35,	// (0x00043d88) list_single_2graphic_im_pane_g

0xc92b,	// (0x00040a7e) list_single_2graphic_im_pane_t1_ParamLimits

0xc92b,	// (0x00040a7e) list_single_2graphic_im_pane_t1

0x381f,	// (0x00037972) list_single_graphic_2heading_pane_fp_ParamLimits

0x381f,	// (0x00037972) list_single_graphic_2heading_pane_fp

0xe986,	// (0x00042ad9) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe986,	// (0x00042ad9) list_single_graphic_2heading_pane_fp_g1

0x3833,	// (0x00037986) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x3833,	// (0x00037986) list_single_graphic_2heading_pane_fp_g2

0xdf2b,	// (0x0004207e) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xdf2b,	// (0x0004207e) list_single_graphic_2heading_pane_fp_g3

0xec63,	// (0x00042db6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xec63,	// (0x00042db6) list_single_graphic_2heading_pane_fp_g4

0x383f,	// (0x00037992) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x383f,	// (0x00037992) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x00043caf) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x00043caf) list_single_graphic_2heading_pane_fp_g

0xeab9,	// (0x00042c0c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xeab9,	// (0x00042c0c) list_single_graphic_2heading_pane_fp_t1

0xe9be,	// (0x00042b11) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe9be,	// (0x00042b11) list_single_graphic_2heading_pane_fp_t2

0xeacf,	// (0x00042c22) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xeacf,	// (0x00042c22) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3e,	// (0x00043d91) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3e,	// (0x00043d91) list_single_graphic_2heading_pane_fp_t

0x3345,	// (0x00037498) fep_hwr_write_pane_g5_ParamLimits

0x3345,	// (0x00037498) fep_hwr_write_pane_g5

0x3351,	// (0x000374a4) fep_hwr_write_pane_g6_ParamLimits

0x3351,	// (0x000374a4) fep_hwr_write_pane_g6

0x3ce9,	// (0x00037e3c) eswt_shell_pane_ParamLimits

0x15b4,	// (0x00035707) bg_popup_window_pane_cp18_ParamLimits

0x264c,	// (0x0003679f) heading_pane_cp70

0x3dd8,	// (0x00037f2b) popup_eswt_tasktip_window_t1_ParamLimits

0x4d05,	// (0x00038e58) aid_touch_tab_arrow_left

0x4d11,	// (0x00038e64) aid_touch_tab_arrow_right

0x3a6e,	// (0x00037bc1) title_pane_g3_ParamLimits

0x3a6e,	// (0x00037bc1) title_pane_g3

0x0779,	// (0x000348cc) set_value_pane_g1

0xbd6c,	// (0x0003febf) popup_toolbar_trans_pane_ParamLimits

0x3e0f,	// (0x00037f62) aid_size_cell_tb_trans_pane_ParamLimits

0x07a9,	// (0x000348fc) bg_tb_trans_pane_ParamLimits

0x3e21,	// (0x00037f74) grid_tb_trans_pane_ParamLimits

0x0302,	// (0x00034455) cont_note_pane_ParamLimits

0x0302,	// (0x00034455) cont_note_pane

0x05c3,	// (0x00034716) cont_snote2_single_text_pane_ParamLimits

0x05c3,	// (0x00034716) cont_snote2_single_text_pane

0x05c3,	// (0x00034716) cont_snote2_single_graphic_pane_ParamLimits

0x05c3,	// (0x00034716) cont_snote2_single_graphic_pane

0x1afc,	// (0x00035c4f) cont_note_wait_pane_ParamLimits

0x1afc,	// (0x00035c4f) cont_note_wait_pane

0x1afc,	// (0x00035c4f) cont_note_image_pane_ParamLimits

0x1afc,	// (0x00035c4f) cont_note_image_pane

0x3e67,	// (0x00037fba) popup_note2_window_g1_ParamLimits

0x3e67,	// (0x00037fba) popup_note2_window_g1

0x3e98,	// (0x00037feb) popup_note2_window_t1_ParamLimits

0x3e98,	// (0x00037feb) popup_note2_window_t1

0x3edd,	// (0x00038030) popup_note2_window_t2_ParamLimits

0x3edd,	// (0x00038030) popup_note2_window_t2

0x3f22,	// (0x00038075) popup_note2_window_t3_ParamLimits

0x3f22,	// (0x00038075) popup_note2_window_t3

0x3f67,	// (0x000380ba) popup_note2_window_t4_ParamLimits

0x3f67,	// (0x000380ba) popup_note2_window_t4

0x0386,	// (0x000344d9) popup_note2_window_t5_ParamLimits

0x0386,	// (0x000344d9) popup_note2_window_t5

0x0004,

0xfc4a,	// (0x00043d9d) popup_note2_window_t_ParamLimits

0xfc4a,	// (0x00043d9d) popup_note2_window_t

0x3f96,	// (0x000380e9) popup_note2_image_window_g1_ParamLimits

0x3f96,	// (0x000380e9) popup_note2_image_window_g1

0x3fa2,	// (0x000380f5) popup_note2_image_window_g2_ParamLimits

0x3fa2,	// (0x000380f5) popup_note2_image_window_g2

0x0001,

0xfc55,	// (0x00043da8) popup_note2_image_window_g_ParamLimits

0xfc55,	// (0x00043da8) popup_note2_image_window_g

0x3fb4,	// (0x00038107) popup_note2_image_window_t1_ParamLimits

0x3fb4,	// (0x00038107) popup_note2_image_window_t1

0x3fcc,	// (0x0003811f) popup_note2_image_window_t2_ParamLimits

0x3fcc,	// (0x0003811f) popup_note2_image_window_t2

0x3fe4,	// (0x00038137) popup_note2_image_window_t3_ParamLimits

0x3fe4,	// (0x00038137) popup_note2_image_window_t3

0x0002,

0xfc5a,	// (0x00043dad) popup_note2_image_window_t_ParamLimits

0xfc5a,	// (0x00043dad) popup_note2_image_window_t

0x1b0a,	// (0x00035c5d) popup_note2_wait_window_g1_ParamLimits

0x1b0a,	// (0x00035c5d) popup_note2_wait_window_g1

0x1b16,	// (0x00035c69) popup_note2_wait_window_g2_ParamLimits

0x1b16,	// (0x00035c69) popup_note2_wait_window_g2

0x1b22,	// (0x00035c75) popup_note2_wait_window_g3_ParamLimits

0x1b22,	// (0x00035c75) popup_note2_wait_window_g3

0x0002,

0xf821,	// (0x00043974) popup_note2_wait_window_g_ParamLimits

0xf821,	// (0x00043974) popup_note2_wait_window_g

0x4000,	// (0x00038153) popup_note2_wait_window_t1_ParamLimits

0x4000,	// (0x00038153) popup_note2_wait_window_t1

0x401e,	// (0x00038171) popup_note2_wait_window_t2_ParamLimits

0x401e,	// (0x00038171) popup_note2_wait_window_t2

0x403c,	// (0x0003818f) popup_note2_wait_window_t3_ParamLimits

0x403c,	// (0x0003818f) popup_note2_wait_window_t3

0x404e,	// (0x000381a1) popup_note2_wait_window_t4_ParamLimits

0x404e,	// (0x000381a1) popup_note2_wait_window_t4

0x0003,

0xfc61,	// (0x00043db4) popup_note2_wait_window_t_ParamLimits

0xfc61,	// (0x00043db4) popup_note2_wait_window_t

0x4060,	// (0x000381b3) wait_bar2_pane_ParamLimits

0x4060,	// (0x000381b3) wait_bar2_pane

0x4078,	// (0x000381cb) popup_snote2_single_text_window_g1_ParamLimits

0x4078,	// (0x000381cb) popup_snote2_single_text_window_g1

0x40a0,	// (0x000381f3) popup_snote2_single_text_window_t1_ParamLimits

0x40a0,	// (0x000381f3) popup_snote2_single_text_window_t1

0x40ec,	// (0x0003823f) popup_snote2_single_text_window_t2_ParamLimits

0x40ec,	// (0x0003823f) popup_snote2_single_text_window_t2

0x4138,	// (0x0003828b) popup_snote2_single_text_window_t3_ParamLimits

0x4138,	// (0x0003828b) popup_snote2_single_text_window_t3

0x4179,	// (0x000382cc) popup_snote2_single_text_window_t4_ParamLimits

0x4179,	// (0x000382cc) popup_snote2_single_text_window_t4

0x41af,	// (0x00038302) popup_snote2_single_text_window_t5_ParamLimits

0x41af,	// (0x00038302) popup_snote2_single_text_window_t5

0x0004,

0xfc6a,	// (0x00043dbd) popup_snote2_single_text_window_t_ParamLimits

0xfc6a,	// (0x00043dbd) popup_snote2_single_text_window_t

0x41da,	// (0x0003832d) popup_snote2_single_graphic_window_g1_ParamLimits

0x41da,	// (0x0003832d) popup_snote2_single_graphic_window_g1

0x4202,	// (0x00038355) popup_snote2_single_graphic_window_g2_ParamLimits

0x4202,	// (0x00038355) popup_snote2_single_graphic_window_g2

0x0001,

0xfc75,	// (0x00043dc8) popup_snote2_single_graphic_window_g_ParamLimits

0xfc75,	// (0x00043dc8) popup_snote2_single_graphic_window_g

0x422a,	// (0x0003837d) popup_snote2_single_graphic_window_t1_ParamLimits

0x422a,	// (0x0003837d) popup_snote2_single_graphic_window_t1

0x4276,	// (0x000383c9) popup_snote2_single_graphic_window_t2_ParamLimits

0x4276,	// (0x000383c9) popup_snote2_single_graphic_window_t2

0x4138,	// (0x0003828b) popup_snote2_single_graphic_window_t3_ParamLimits

0x4138,	// (0x0003828b) popup_snote2_single_graphic_window_t3

0x4179,	// (0x000382cc) popup_snote2_single_graphic_window_t4_ParamLimits

0x4179,	// (0x000382cc) popup_snote2_single_graphic_window_t4

0x41af,	// (0x00038302) popup_snote2_single_graphic_window_t5_ParamLimits

0x41af,	// (0x00038302) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7a,	// (0x00043dcd) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7a,	// (0x00043dcd) popup_snote2_single_graphic_window_t

0x2f29,	// (0x0003707c) clock_nsta_pane_cp2_t1

0x2f29,	// (0x0003707c) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x00043be8) clock_nsta_pane_cp2_t

0xe2cd,	// (0x00042420) form_field_data_wide_pane_g1_ParamLimits

0x0755,	// (0x000348a8) form_field_data_wide_pane_g2_ParamLimits

0x0755,	// (0x000348a8) form_field_data_wide_pane_g2

0x07c3,	// (0x00034916) form_field_data_wide_pane_g3_ParamLimits

0x07c3,	// (0x00034916) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x000437ae) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x000437ae) form_field_data_wide_pane_g

0x5404,	// (0x00039557) grid_touch_3_pane_ParamLimits

0x5404,	// (0x00039557) grid_touch_3_pane

0xc95c,	// (0x00040aaf) cell_touch_3_pane_ParamLimits

0xc95c,	// (0x00040aaf) cell_touch_3_pane

0x32bc,	// (0x0003740f) cell_touch_3_pane_g1

0x32bc,	// (0x0003740f) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x00043c6d) cell_touch_3_pane_g

0x03de,	// (0x00034531) cont_query_data_pane

0x03e6,	// (0x00034539) cont_query_data_pane_cp1

0x42c2,	// (0x00038415) button_value_adjust_pane_cp7

0x42ca,	// (0x0003841d) query_popup_pane_cp3

0x0cf6,	// (0x00034e49) bg_popup_sub_pane_cp22_ParamLimits

0xb5d9,	// (0x0003f72c) navi_navi_volume_pane_cp2

0xb5f1,	// (0x0003f744) popup_side_volume_key_window_g2

0xb5fd,	// (0x0003f750) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x00043844) popup_side_volume_key_window_g

0xb617,	// (0x0003f76a) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x0004384b) popup_side_volume_key_window_t

0x0f40,	// (0x00035093) popup_side_volume_key_window_ParamLimits

0xdeeb,	// (0x0004203e) list_double_graphic_pane_g4_ParamLimits

0xdeeb,	// (0x0004203e) list_double_graphic_pane_g4

0xe680,	// (0x000427d3) list_single_2heading_msg_pane_ParamLimits

0xe680,	// (0x000427d3) list_single_2heading_msg_pane

0xeaed,	// (0x00042c40) list_single_2heading_msg_pane_g1_ParamLimits

0xeaed,	// (0x00042c40) list_single_2heading_msg_pane_g1

0x0755,	// (0x000348a8) list_single_2heading_msg_pane_g2_ParamLimits

0x0755,	// (0x000348a8) list_single_2heading_msg_pane_g2

0xeaf9,	// (0x00042c4c) list_single_2heading_msg_pane_g3_ParamLimits

0xeaf9,	// (0x00042c4c) list_single_2heading_msg_pane_g3

0xeb05,	// (0x00042c58) list_single_2heading_msg_pane_g4_ParamLimits

0xeb05,	// (0x00042c58) list_single_2heading_msg_pane_g4

0x0003,

0xfc85,	// (0x00043dd8) list_single_2heading_msg_pane_g_ParamLimits

0xfc85,	// (0x00043dd8) list_single_2heading_msg_pane_g

0xeb1d,	// (0x00042c70) list_single_2heading_msg_pane_t1_ParamLimits

0xeb1d,	// (0x00042c70) list_single_2heading_msg_pane_t1

0xeb45,	// (0x00042c98) list_single_2heading_msg_pane_t2_ParamLimits

0xeb45,	// (0x00042c98) list_single_2heading_msg_pane_t2

0xeb74,	// (0x00042cc7) list_single_2heading_msg_pane_t3_ParamLimits

0xeb74,	// (0x00042cc7) list_single_2heading_msg_pane_t3

0xebad,	// (0x00042d00) list_single_2heading_msg_pane_t4_ParamLimits

0xebad,	// (0x00042d00) list_single_2heading_msg_pane_t4

0x0003,

0xfc8e,	// (0x00043de1) list_single_2heading_msg_pane_t_ParamLimits

0xfc8e,	// (0x00043de1) list_single_2heading_msg_pane_t

0x0175,	// (0x000342c8) title_pane_g4_ParamLimits

0x0175,	// (0x000342c8) title_pane_g4

0xb429,	// (0x0003f57c) title_pane_stacon_g3_ParamLimits

0xb429,	// (0x0003f57c) title_pane_stacon_g3

0x3e5b,	// (0x00037fae) list_single_2graphic_im_pane_g4_ParamLimits

0x3e5b,	// (0x00037fae) list_single_2graphic_im_pane_g4

0x2476,	// (0x000365c9) popup_side_volume_key_window_cp

0x2895,	// (0x000369e8) main_idle_act2_pane_t1

0xbe37,	// (0x0003ff8a) toolbar_button_pane_g10

0x4959,	// (0x00038aac) popup_toolbar_window_cp1

0x2f1a,	// (0x0003706d) clock_nsta_pane_cp_t1

0x2f1a,	// (0x0003706d) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x00043be3) clock_nsta_pane_cp_t

0xb5d9,	// (0x0003f72c) navi_navi_volume_pane_cp2_ParamLimits

0xb5e5,	// (0x0003f738) popup_side_volume_key_window_g1_ParamLimits

0xb5f1,	// (0x0003f744) popup_side_volume_key_window_g2_ParamLimits

0xb5fd,	// (0x0003f750) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x00043844) popup_side_volume_key_window_g_ParamLimits

0xc2cd,	// (0x00040420) fep_hwr_aid_pane

0xc36e,	// (0x000404c1) bg_fep_hwr_top_pane_g4_ParamLimits

0x3327,	// (0x0003747a) fep_hwr_top_pane_g1_ParamLimits

0x3315,	// (0x00037468) fep_hwr_top_pane_g2_ParamLimits

0xc38e,	// (0x000404e1) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x00043c38) fep_hwr_top_pane_g_ParamLimits

0xc3a3,	// (0x000404f6) fep_hwr_top_text_pane_ParamLimits

0x224a,	// (0x0003639d) aid_touch_tab_arrow_arrow_2

0x2241,	// (0x00036394) aid_touch_tab_arrow_left_2

0xc2e1,	// (0x00040434) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xc314,	// (0x00040467) fep_hwr_prediction_pane

0x345a,	// (0x000375ad) fep_vkb_prediction_pane

0xc4eb,	// (0x0004063e) fep_vkb_side_pane_g3_ParamLimits

0xc4eb,	// (0x0004063e) fep_vkb_side_pane_g3

0xc5f6,	// (0x00040749) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc660,	// (0x000407b3) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc66d,	// (0x000407c0) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb94,	// (0x00043ce7) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xc99d,	// (0x00040af0) fep_hwr_prediction_pane_g1

0xc9a7,	// (0x00040afa) fep_hwr_prediction_pane_g2

0xc9af,	// (0x00040b02) fep_hwr_prediction_pane_g3

0xc9b7,	// (0x00040b0a) fep_hwr_prediction_pane_g4

0x0003,

0xfc97,	// (0x00043dea) fep_hwr_prediction_pane_g

0x42db,	// (0x0003842e) fep_vkb_prediction_pane_g1

0x42e5,	// (0x00038438) fep_vkb_prediction_pane_g2

0x42ed,	// (0x00038440) fep_vkb_prediction_pane_g3

0x42f5,	// (0x00038448) fep_vkb_prediction_pane_g4

0x0003,

0xfca0,	// (0x00043df3) fep_vkb_prediction_pane_g

0xc105,	// (0x00040258) slider_set_pane_g3

0xc119,	// (0x0004026c) slider_set_pane_g4

0xc131,	// (0x00040284) slider_set_pane_g5

0xc105,	// (0x00040258) slider_set_pane_g6

0xc147,	// (0x0004029a) slider_set_pane_g7

0x26d7,	// (0x0003682a) slider_form_pane_g3

0x26e0,	// (0x00036833) slider_form_pane_g4

0x26e8,	// (0x0003683b) slider_form_pane_g5

0x26d7,	// (0x0003682a) slider_form_pane_g6

0x5296,	// (0x000393e9) slider_form_pane_g7

0x2ae6,	// (0x00036c39) slider_set_pane_vc_g3

0x2aef,	// (0x00036c42) slider_set_pane_vc_g4

0x2af8,	// (0x00036c4b) slider_set_pane_vc_g5

0x2ae6,	// (0x00036c39) slider_set_pane_vc_g6

0x2b01,	// (0x00036c54) slider_set_pane_vc_g7

0x2ae6,	// (0x00036c39) slider_form_pane_vc_g1

0x2aef,	// (0x00036c42) slider_form_pane_vc_g2

0x2af8,	// (0x00036c4b) slider_form_pane_vc_g3

0x2ae6,	// (0x00036c39) slider_form_pane_vc_g4

0x2c75,	// (0x00036dc8) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x00043bb5) slider_form_pane_vc_g

0xb166,	// (0x0003f2b9) main_idle_act3_pane

0x42fd,	// (0x00038450) ai3_links_pane

0xc9bf,	// (0x00040b12) popup_ai3_data_window_ParamLimits

0xc9bf,	// (0x00040b12) popup_ai3_data_window

0x00df,	// (0x00034232) grid_ai3_links_pane

0xc9d7,	// (0x00040b2a) cell_ai3_links_pane_ParamLimits

0xc9d7,	// (0x00040b2a) cell_ai3_links_pane

0x4306,	// (0x00038459) bg_popup_sub_pane_cp11

0x4313,	// (0x00038466) cell_ai3_links_pane_g1

0x00df,	// (0x00034232) bg_popup_sub_pane_cp12

0x4338,	// (0x0003848b) heading_ai3_data_pane

0x4340,	// (0x00038493) list_ai3_gene_pane

0x434c,	// (0x0003849f) popup_ai3_data_window_g1

0x4354,	// (0x000384a7) heading_ai3_data_pane_g1

0x435c,	// (0x000384af) heading_ai3_data_pane_t1

0x436a,	// (0x000384bd) list_double_ai3_gene_pane_ParamLimits

0x436a,	// (0x000384bd) list_double_ai3_gene_pane

0x4377,	// (0x000384ca) list_single_ai3_gene_pane_ParamLimits

0x4377,	// (0x000384ca) list_single_ai3_gene_pane

0x3281,	// (0x000373d4) list_highlight_pane_cp7_ParamLimits

0x3281,	// (0x000373d4) list_highlight_pane_cp7

0x4384,	// (0x000384d7) list_single_a13_gene_pane_t1_ParamLimits

0x4384,	// (0x000384d7) list_single_a13_gene_pane_t1

0x439b,	// (0x000384ee) list_single_ai3_gene_pane_g1

0x43a4,	// (0x000384f7) list_single_ai3_gene_pane_g2

0x0001,

0xfca9,	// (0x00043dfc) list_single_ai3_gene_pane_g

0x43ac,	// (0x000384ff) list_double_ai3_gene_pane_g1_ParamLimits

0x43ac,	// (0x000384ff) list_double_ai3_gene_pane_g1

0x43b8,	// (0x0003850b) list_double_ai3_gene_pane_t1_ParamLimits

0x43b8,	// (0x0003850b) list_double_ai3_gene_pane_t1

0x43d4,	// (0x00038527) list_double_ai3_gene_pane_t2_ParamLimits

0x43d4,	// (0x00038527) list_double_ai3_gene_pane_t2

0x43e9,	// (0x0003853c) list_double_ai3_gene_pane_t3_ParamLimits

0x43e9,	// (0x0003853c) list_double_ai3_gene_pane_t3

0x0002,

0xfcae,	// (0x00043e01) list_double_ai3_gene_pane_t_ParamLimits

0xfcae,	// (0x00043e01) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xeae5,	// (0x00042c38) aid_size_min_col_2

0xc989,	// (0x00040adc) aid_size_min_msg_ParamLimits

0xc989,	// (0x00040adc) aid_size_min_msg

0xc4ff,	// (0x00040652) fep_vkb_top_text_pane_g2_ParamLimits

0xc4ff,	// (0x00040652) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x00043c68) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x00043c68) fep_vkb_top_text_pane_g

0xb166,	// (0x0003f2b9) main_hc_apps_shell_pane

0x4406,	// (0x00038559) grid_hc_apps_pane_ParamLimits

0x4406,	// (0x00038559) grid_hc_apps_pane

0x4418,	// (0x0003856b) list_hc_apps_pane

0x4420,	// (0x00038573) scroll_pane_cp37_ParamLimits

0x4420,	// (0x00038573) scroll_pane_cp37

0xc9eb,	// (0x00040b3e) cell_hc_apps_pane_ParamLimits

0xc9eb,	// (0x00040b3e) cell_hc_apps_pane

0xca79,	// (0x00040bcc) cell_hc_apps_pane_g1_ParamLimits

0xca79,	// (0x00040bcc) cell_hc_apps_pane_g1

0x442c,	// (0x0003857f) cell_hc_apps_pane_g2_ParamLimits

0x442c,	// (0x0003857f) cell_hc_apps_pane_g2

0x4448,	// (0x0003859b) cell_hc_apps_pane_g3_ParamLimits

0x4448,	// (0x0003859b) cell_hc_apps_pane_g3

0x0002,

0xfcb5,	// (0x00043e08) cell_hc_apps_pane_g_ParamLimits

0xfcb5,	// (0x00043e08) cell_hc_apps_pane_g

0xcaa5,	// (0x00040bf8) cell_hc_apps_pane_t1_ParamLimits

0xcaa5,	// (0x00040bf8) cell_hc_apps_pane_t1

0x0302,	// (0x00034455) grid_highlight_pane_cp10_ParamLimits

0x0302,	// (0x00034455) grid_highlight_pane_cp10

0xcae3,	// (0x00040c36) list_single_hc_apps_pane_ParamLimits

0xcae3,	// (0x00040c36) list_single_hc_apps_pane

0xcb13,	// (0x00040c66) list_single_hc_apps_pane_g1

0xece7,	// (0x00042e3a) list_single_hc_apps_pane_g2

0x0001,

0xfcbc,	// (0x00043e0f) list_single_hc_apps_pane_g

0xed00,	// (0x00042e53) list_single_hc_apps_pane_g2_copy1

0xebd2,	// (0x00042d25) list_single_hc_apps_pane_t1

0x01b9,	// (0x0003430c) bg_set_opt_pane_cp_ParamLimits

0xb377,	// (0x0003f4ca) setting_slider_pane_t1_ParamLimits

0xb38d,	// (0x0003f4e0) setting_slider_pane_t2_ParamLimits

0xb3a6,	// (0x0003f4f9) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0004368c) setting_slider_pane_t_ParamLimits

0xb3bd,	// (0x0003f510) slider_set_pane_ParamLimits

0xb859,	// (0x0003f9ac) control_pane_g5_ParamLimits

0xb859,	// (0x0003f9ac) control_pane_g5

0x2693,	// (0x000367e6) slider_set_pane_g1_ParamLimits

0xc0f9,	// (0x0004024c) slider_set_pane_g2_ParamLimits

0xc105,	// (0x00040258) slider_set_pane_g3_ParamLimits

0xc119,	// (0x0004026c) slider_set_pane_g4_ParamLimits

0xc131,	// (0x00040284) slider_set_pane_g5_ParamLimits

0xc105,	// (0x00040258) slider_set_pane_g6_ParamLimits

0xc147,	// (0x0004029a) slider_set_pane_g7_ParamLimits

0xf93d,	// (0x00043a90) slider_set_pane_g_ParamLimits

0x01b9,	// (0x0003430c) navi_icon_text_pane_ParamLimits

0x4cdf,	// (0x00038e32) aid_fill_nsta_2_ParamLimits

0x4d05,	// (0x00038e58) aid_touch_tab_arrow_left_ParamLimits

0x4d11,	// (0x00038e64) aid_touch_tab_arrow_right_ParamLimits

0x4d7b,	// (0x00038ece) clock_nsta_pane_ParamLimits

0x2223,	// (0x00036376) navi_icon_pane_g1_ParamLimits

0x222f,	// (0x00036382) navi_text_pane_t1_ParamLimits

0x2f6a,	// (0x000370bd) navi_icon_text_pane_g1_ParamLimits

0x2f76,	// (0x000370c9) navi_icon_text_pane_t1_ParamLimits

0xcb13,	// (0x00040c66) list_single_hc_apps_pane_g1_ParamLimits

0xece7,	// (0x00042e3a) list_single_hc_apps_pane_g2_ParamLimits

0xfcbc,	// (0x00043e0f) list_single_hc_apps_pane_g_ParamLimits

0xed00,	// (0x00042e53) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xebd2,	// (0x00042d25) list_single_hc_apps_pane_t1_ParamLimits

0xb2a9,	// (0x0003f3fc) popup_toolbar2_fixed_window_ParamLimits

0xb2a9,	// (0x0003f3fc) popup_toolbar2_fixed_window

0xbd64,	// (0x0003feb7) popup_toolbar2_float_window

0x00df,	// (0x00034232) bg_popup_sub_pane_cp27

0x446a,	// (0x000385bd) grid_toolbar2_float_pane

0x00df,	// (0x00034232) bg_popup_sub_pane_cp26

0x446a,	// (0x000385bd) grid_toolbar2_fixed_pane

0xcb2c,	// (0x00040c7f) cell_toolbar2_fixed_pane_ParamLimits

0xcb2c,	// (0x00040c7f) cell_toolbar2_fixed_pane

0xcb3d,	// (0x00040c90) cell_toolbar2_fixed_pane_g1

0x4472,	// (0x000385c5) toolbar2_fixed_button_pane

0x1534,	// (0x00035687) toolbar2_fixed_button_pane_g1

0x153c,	// (0x0003568f) toolbar2_fixed_button_pane_g2

0x1544,	// (0x00035697) toolbar2_fixed_button_pane_g3

0x154c,	// (0x0003569f) toolbar2_fixed_button_pane_g4

0x1554,	// (0x000356a7) toolbar2_fixed_button_pane_g5

0x155c,	// (0x000356af) toolbar2_fixed_button_pane_g6

0x1564,	// (0x000356b7) toolbar2_fixed_button_pane_g7

0x156c,	// (0x000356bf) toolbar2_fixed_button_pane_g8

0x1574,	// (0x000356c7) toolbar2_fixed_button_pane_g9

0x0008,

0xf83f,	// (0x00043992) toolbar2_fixed_button_pane_g

0x447a,	// (0x000385cd) cell_toolbar2_float_pane_ParamLimits

0x447a,	// (0x000385cd) cell_toolbar2_float_pane

0x448b,	// (0x000385de) cell_toolbar2_float_pane_g1

0x4472,	// (0x000385c5) toolbar2_fixed_button_pane_cp

0xc4b8,	// (0x0004060b) fep_vkb_accented_list_pane_ParamLimits

0xc4b8,	// (0x0004060b) fep_vkb_accented_list_pane

0xc5d6,	// (0x00040729) bg_popup_fep_shadow_pane_g9

0x114f,	// (0x000352a2) bg_popup_fep_shadow_pane_cp3

0x08e6,	// (0x00034a39) list_accented_list_pane

0x4494,	// (0x000385e7) list_single_accented_list_pane_ParamLimits

0x4494,	// (0x000385e7) list_single_accented_list_pane

0x114f,	// (0x000352a2) list_highlight_pane_cp10

0x44a5,	// (0x000385f8) list_single_accented_list_pane_t1

0xbcca,	// (0x0003fe1d) popup_slider_window_ParamLimits

0xbcca,	// (0x0003fe1d) popup_slider_window

0x42d2,	// (0x00038425) aid_indentation_list_msg

0xcbd8,	// (0x00040d2b) bg_popup_window_pane_cp19

0x450b,	// (0x0003865e) popup_slider_window_g1

0x4527,	// (0x0003867a) popup_slider_window_g2

0x4543,	// (0x00038696) popup_slider_window_g3

0x0005,

0xfcc1,	// (0x00043e14) popup_slider_window_g

0x455f,	// (0x000386b2) popup_slider_window_t1

0x45a3,	// (0x000386f6) small_volume_slider_vertical_pane

0x32bc,	// (0x0003740f) small_volume_slider_vertical_pane_g1

0x32bc,	// (0x0003740f) small_volume_slider_vertical_pane_g2

0x45bf,	// (0x00038712) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd3,	// (0x00043e26) small_volume_slider_vertical_pane_g

0xb11d,	// (0x0003f270) area_side_right_pane_ParamLimits

0xb11d,	// (0x0003f270) area_side_right_pane

0xcc52,	// (0x00040da5) aid_size_side_button_ParamLimits

0xcc52,	// (0x00040da5) aid_size_side_button

0xcc66,	// (0x00040db9) grid_sctrl_middle_pane_ParamLimits

0xcc66,	// (0x00040db9) grid_sctrl_middle_pane

0xcc82,	// (0x00040dd5) sctrl_sk_bottom_pane

0xcc93,	// (0x00040de6) sctrl_sk_top_pane

0xcca5,	// (0x00040df8) aid_touch_sctrl_top

0xccb2,	// (0x00040e05) bg_sctrl_sk_pane_ParamLimits

0xccb2,	// (0x00040e05) bg_sctrl_sk_pane

0xccc0,	// (0x00040e13) sctrl_sk_top_pane_g1

0xcccd,	// (0x00040e20) sctrl_sk_top_pane_t1

0xcca5,	// (0x00040df8) aid_touch_sctrl_bottom

0xccb2,	// (0x00040e05) bg_sctrl_sk_pane_cp_ParamLimits

0xccb2,	// (0x00040e05) bg_sctrl_sk_pane_cp

0xcce8,	// (0x00040e3b) sctrl_sk_bottom_pane_g1

0xcccd,	// (0x00040e20) sctrl_sk_bottom_pane_t1

0xccf1,	// (0x00040e44) cell_sctrl_middle_pane_ParamLimits

0xccf1,	// (0x00040e44) cell_sctrl_middle_pane

0xcd0c,	// (0x00040e5f) aid_touch_sctrl_middle_ParamLimits

0xcd0c,	// (0x00040e5f) aid_touch_sctrl_middle

0xcd1d,	// (0x00040e70) bg_sctrl_middle_pane_ParamLimits

0xcd1d,	// (0x00040e70) bg_sctrl_middle_pane

0xc5f6,	// (0x00040749) cell_sctrl_middle_pane_g1_ParamLimits

0xc5f6,	// (0x00040749) cell_sctrl_middle_pane_g1

0xcd2b,	// (0x00040e7e) cell_sctrl_middle_pane_g2_ParamLimits

0xcd2b,	// (0x00040e7e) cell_sctrl_middle_pane_g2

0x0001,

0xfcdf,	// (0x00043e32) cell_sctrl_middle_pane_g_ParamLimits

0xfcdf,	// (0x00043e32) cell_sctrl_middle_pane_g

0x1534,	// (0x00035687) bg_sctrl_middle_pane_g1

0x1544,	// (0x00035697) bg_sctrl_middle_pane_g2

0x153c,	// (0x0003568f) bg_sctrl_middle_pane_g3

0x1554,	// (0x000356a7) bg_sctrl_middle_pane_g4

0x154c,	// (0x0003569f) bg_sctrl_middle_pane_g5

0x155c,	// (0x000356af) bg_sctrl_middle_pane_g6

0x1564,	// (0x000356b7) bg_sctrl_middle_pane_g7

0x1574,	// (0x000356c7) bg_sctrl_middle_pane_g8

0x0007,

0xfce4,	// (0x00043e37) bg_sctrl_middle_pane_g

0x156c,	// (0x000356bf) bg_sctrl_middle_pane_g8_copy1

0x1534,	// (0x00035687) bg_sctrl_sk_pane_g1

0x153c,	// (0x0003568f) bg_sctrl_sk_pane_g2

0x1544,	// (0x00035697) bg_sctrl_sk_pane_g3

0x0008,

0xf83f,	// (0x00043992) bg_sctrl_sk_pane_g

0x06e5,	// (0x00034838) aid_size_touch_scroll_bar

0x154c,	// (0x0003569f) bg_sctrl_sk_pane_g4

0x1554,	// (0x000356a7) bg_sctrl_sk_pane_g5

0x155c,	// (0x000356af) bg_sctrl_sk_pane_g6

0x1564,	// (0x000356b7) bg_sctrl_sk_pane_g7

0x156c,	// (0x000356bf) bg_sctrl_sk_pane_g8

0x1574,	// (0x000356c7) bg_sctrl_sk_pane_g9

0xb9fd,	// (0x0003fb50) popup_fep_china_hwr2_fs_candidate_window

0xba05,	// (0x0003fb58) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xba05,	// (0x0003fb58) popup_fep_china_hwr2_fs_control_window

0xc5f6,	// (0x00040749) sctrl_sk_top_pane_g2

0x0001,

0xfcda,	// (0x00043e2d) sctrl_sk_top_pane_g

0xcd41,	// (0x00040e94) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcd41,	// (0x00040e94) aid_fep_china_hwr2_fs_cell

0xcd52,	// (0x00040ea5) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcd52,	// (0x00040ea5) bg_popup_fep_shadow_pane_cp4

0xcd69,	// (0x00040ebc) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcd69,	// (0x00040ebc) bg_popup_fep_shadow_pane_cp5

0xcd7b,	// (0x00040ece) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcd7b,	// (0x00040ece) popup_fep_china_hwr2_fs_control_bar_grid

0xcd8b,	// (0x00040ede) popup_fep_china_hwr2_fs_control_funtion_grid

0x45c8,	// (0x0003871b) aid_fep_china_hwr2_fs_candi_cell

0x00df,	// (0x00034232) bg_popup_fep_shadow_pane_cp6

0x45d2,	// (0x00038725) popup_fep_china_hwr2_fs_candidate_grid

0xcd93,	// (0x00040ee6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcd93,	// (0x00040ee6) cell_fep_china_hwr2_fs_funtion_grid

0x32bc,	// (0x0003740f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x45da,	// (0x0003872d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x45da,	// (0x0003872d) cell_fep_china_hwr2_fs_funtion_grid_g1

0x45e8,	// (0x0003873b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x45e8,	// (0x0003873b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf5,	// (0x00043e48) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf5,	// (0x00043e48) cell_fep_china_hwr2_fs_funtion_grid_g

0xcdab,	// (0x00040efe) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcdab,	// (0x00040efe) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcdc0,	// (0x00040f13) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcdc0,	// (0x00040f13) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfa,	// (0x00043e4d) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfa,	// (0x00043e4d) cell_fep_china_hwr2_fs_funtion_grid_t

0x45fe,	// (0x00038751) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x4606,	// (0x00038759) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x460e,	// (0x00038761) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcff,	// (0x00043e52) popup_fep_china_hwr2_fs_control_bar_grid_g

0x4616,	// (0x00038769) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x4616,	// (0x00038769) cell_fep_china_hwr2_fs_candidate_grid

0x462f,	// (0x00038782) popup_fep_china_hwr2_fs_candidate_grid_g20

0x4637,	// (0x0003878a) popup_fep_china_hwr2_fs_candidate_grid_g21

0x32bc,	// (0x0003740f) cell_fep_china_hwr2_fs_candidate_grid_g1

0x32bc,	// (0x0003740f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x00043c6d) cell_fep_china_hwr2_fs_candidate_grid_g

0x463f,	// (0x00038792) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1399,	// (0x000354ec) clock_nsta_pane_cp_24_ParamLimits

0x1399,	// (0x000354ec) clock_nsta_pane_cp_24

0x13f6,	// (0x00035549) indicator_nsta_pane_cp_24_ParamLimits

0x13f6,	// (0x00035549) indicator_nsta_pane_cp_24

0x212e,	// (0x00036281) heading_pane_g1

0x0001,

0xf8a4,	// (0x000439f7) heading_pane_g

0x5353,	// (0x000394a6) grid_sct_catagory_button_pane

0x1d2c,	// (0x00035e7f) scroll_pane_cp5_ParamLimits

0x2f9c,	// (0x000370ef) button_value_adjust_pane_cp5_ParamLimits

0x2f9c,	// (0x000370ef) button_value_adjust_pane_cp5

0x305a,	// (0x000371ad) form2_midp_time_pane_ParamLimits

0x464d,	// (0x000387a0) cell_sct_catagory_button_pane_ParamLimits

0x464d,	// (0x000387a0) cell_sct_catagory_button_pane

0x3281,	// (0x000373d4) bg_button_pane_cp01_ParamLimits

0x3281,	// (0x000373d4) bg_button_pane_cp01

0x32bc,	// (0x0003740f) cell_sct_catagory_button_pane_g1

0xbd01,	// (0x0003fe54) popup_tb_extension_window

0xcddc,	// (0x00040f2f) aid_size_cell_ext_ParamLimits

0xcddc,	// (0x00040f2f) aid_size_cell_ext

0x0302,	// (0x00034455) bg_tb_trans_pane_cp1_ParamLimits

0x0302,	// (0x00034455) bg_tb_trans_pane_cp1

0xcdfc,	// (0x00040f4f) grid_tb_ext_pane_ParamLimits

0xcdfc,	// (0x00040f4f) grid_tb_ext_pane

0xce22,	// (0x00040f75) cell_tb_ext_pane_ParamLimits

0xce22,	// (0x00040f75) cell_tb_ext_pane

0xce37,	// (0x00040f8a) cell_tb_ext_pane_g1_ParamLimits

0xce37,	// (0x00040f8a) cell_tb_ext_pane_g1

0x465f,	// (0x000387b2) cell_tb_ext_pane_t1

0x0302,	// (0x00034455) list_highlight_pane_cp11_ParamLimits

0x0302,	// (0x00034455) list_highlight_pane_cp11

0xb2c8,	// (0x0003f41b) popup_uni_indicator_window_ParamLimits

0xb2c8,	// (0x0003f41b) popup_uni_indicator_window

0x07a9,	// (0x000348fc) bg_popup_sub_pane_cp14

0x467a,	// (0x000387cd) list_uniindi_pane

0x4686,	// (0x000387d9) uniindi_top_pane

0x0302,	// (0x00034455) bg_uniindi_top_pane

0x46a5,	// (0x000387f8) uniindi_top_pane_g1

0x46bb,	// (0x0003880e) uniindi_top_pane_g2

0x0003,

0xfd06,	// (0x00043e59) uniindi_top_pane_g

0x46e5,	// (0x00038838) uniindi_top_pane_t1

0x470f,	// (0x00038862) list_single_uniindi_pane_ParamLimits

0x470f,	// (0x00038862) list_single_uniindi_pane

0x32bc,	// (0x0003740f) bg_uniindi_top_pane_g1

0x4721,	// (0x00038874) list_single_uniindi_pane_g1

0x4734,	// (0x00038887) list_single_uniindi_pane_t1

0xb166,	// (0x0003f2b9) control_bg_pane

0x4759,	// (0x000388ac) bg_sctrl_sk_pane_cp1

0x4762,	// (0x000388b5) bg_sctrl_sk_pane_cp2

0x476b,	// (0x000388be) control_bg_pane_g1

0x4774,	// (0x000388c7) control_bg_pane_g2

0x0001,

0xfd0f,	// (0x00043e62) control_bg_pane_g

0x2ec2,	// (0x00037015) cell_indicator_nsta_pane_g1_ParamLimits

0x5453,	// (0x000395a6) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x00043bd1) cell_indicator_nsta_pane_g_ParamLimits

0xe95c,	// (0x00042aaf) form2_midp_time_pane_t1_ParamLimits

0xb973,	// (0x0003fac6) main_idle_act4_pane_ParamLimits

0xb973,	// (0x0003fac6) main_idle_act4_pane

0xbd01,	// (0x0003fe54) popup_tb_extension_window_ParamLimits

0xce16,	// (0x00040f69) tb_ext_find_pane_ParamLimits

0xce16,	// (0x00040f69) tb_ext_find_pane

0x477d,	// (0x000388d0) ai_gene_pane_1_cp1

0x11e3,	// (0x00035336) ai_gene_pane_2_cp1

0x4785,	// (0x000388d8) list_single_idle_plugin_calendar_pane

0x478e,	// (0x000388e1) list_single_idle_plugin_notification_pane

0x4797,	// (0x000388ea) list_single_idle_plugin_player_pane

0xce54,	// (0x00040fa7) list_single_idle_plugin_shortcut_pane_ParamLimits

0xce54,	// (0x00040fa7) list_single_idle_plugin_shortcut_pane

0xce76,	// (0x00040fc9) main_idle_act4_pane_t1

0xce88,	// (0x00040fdb) main_idle_act4_pane_t2

0x0001,

0xfd14,	// (0x00043e67) main_idle_act4_pane_t

0xce9a,	// (0x00040fed) middle_sk_idle_act4_pane_ParamLimits

0xce9a,	// (0x00040fed) middle_sk_idle_act4_pane

0xceb0,	// (0x00041003) popup_clock_digital_analogue_window_cp2

0xceca,	// (0x0004101d) shortcut_wheel_idle_act4_pane_ParamLimits

0xceca,	// (0x0004101d) shortcut_wheel_idle_act4_pane

0x32bc,	// (0x0003740f) shortcut_wheel_idle_act4_pane_g1

0x32bc,	// (0x0003740f) shortcut_wheel_idle_act4_pane_g2

0x32bc,	// (0x0003740f) shortcut_wheel_idle_act4_pane_g3

0x32bc,	// (0x0003740f) shortcut_wheel_idle_act4_pane_g4

0x32bc,	// (0x0003740f) shortcut_wheel_idle_act4_pane_g5

0x47a0,	// (0x000388f3) shortcut_wheel_idle_act4_pane_g6

0x47a8,	// (0x000388fb) shortcut_wheel_idle_act4_pane_g7

0x47b0,	// (0x00038903) shortcut_wheel_idle_act4_pane_g8

0x47b8,	// (0x0003890b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd19,	// (0x00043e6c) shortcut_wheel_idle_act4_pane_g

0x34e8,	// (0x0003763b) middle_sk_idle_act4_pane_g1_ParamLimits

0x34e8,	// (0x0003763b) middle_sk_idle_act4_pane_g1

0xcf3a,	// (0x0004108d) middle_sk_idle_act4_pane_g2_ParamLimits

0xcf3a,	// (0x0004108d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3c,	// (0x00043e8f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3c,	// (0x00043e8f) middle_sk_idle_act4_pane_g

0xcf46,	// (0x00041099) middle_sk_idle_act4_pane_t1_ParamLimits

0xcf46,	// (0x00041099) middle_sk_idle_act4_pane_t1

0xcf63,	// (0x000410b6) grid_ai_shortcut_pane_ParamLimits

0xcf63,	// (0x000410b6) grid_ai_shortcut_pane

0xcf7c,	// (0x000410cf) list_highlight_pane_cp16_ParamLimits

0xcf7c,	// (0x000410cf) list_highlight_pane_cp16

0xcf89,	// (0x000410dc) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xcf89,	// (0x000410dc) list_single_idle_plugin_shortcut_pane_g1

0xcf95,	// (0x000410e8) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xcf95,	// (0x000410e8) list_single_idle_plugin_shortcut_pane_g2

0xcfad,	// (0x00041100) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xcfad,	// (0x00041100) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd41,	// (0x00043e94) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd41,	// (0x00043e94) list_single_idle_plugin_shortcut_pane_g

0xcfc0,	// (0x00041113) cell_ai_shortcut_pane_ParamLimits

0xcfc0,	// (0x00041113) cell_ai_shortcut_pane

0xcfe1,	// (0x00041134) cell_ai_shortcut_pane_g1_ParamLimits

0xcfe1,	// (0x00041134) cell_ai_shortcut_pane_g1

0x477d,	// (0x000388d0) ai_gene_pane_1_cp2

0x47c0,	// (0x00038913) ai_gene_pane_2_cp2

0x47c8,	// (0x0003891b) list_highlight_pane_cp15

0x47d1,	// (0x00038924) list_single_idle_plugin_calendar_pane_g1

0x47c8,	// (0x0003891b) list_highlight_pane_cp17

0x47d9,	// (0x0003892c) list_single_idle_plugin_calendar_pane_g1_copy1

0x47e1,	// (0x00038934) list_single_idle_plugin_player_pane_g1

0x2921,	// (0x00036a74) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd48,	// (0x00043e9b) list_single_idle_plugin_player_pane_g

0x47e9,	// (0x0003893c) list_single_idle_plugin_player_pane_t1

0x47f7,	// (0x0003894a) list_single_idle_plugin_player_pane_t2

0x4805,	// (0x00038958) list_single_idle_plugin_player_pane_t3

0x4813,	// (0x00038966) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4d,	// (0x00043ea0) list_single_idle_plugin_player_pane_t

0x4821,	// (0x00038974) wait_bar_pane_cp15

0x4829,	// (0x0003897c) grid_ai_notification_pane

0x2921,	// (0x00036a74) list_single_idle_plugin_notification_pane_g1

0xd003,	// (0x00041156) cell_ai_notification_pane_ParamLimits

0xd003,	// (0x00041156) cell_ai_notification_pane

0x4832,	// (0x00038985) cell_ai_notification_pane_g1

0x483a,	// (0x0003898d) cell_ai_notification_pane_t1

0xd010,	// (0x00041163) tb_ext_find_button_pane

0xd018,	// (0x0004116b) tb_ext_find_pane_g1

0xd020,	// (0x00041173) tb_ext_find_pane_t1

0x0cb6,	// (0x00034e09) tb_ext_find_button_pane_g1

0x4848,	// (0x0003899b) tb_ext_find_button_pane_g2

0x0001,

0xfd56,	// (0x00043ea9) tb_ext_find_button_pane_g

0xce76,	// (0x00040fc9) main_idle_act4_pane_t1_ParamLimits

0xce88,	// (0x00040fdb) main_idle_act4_pane_t2_ParamLimits

0xfd14,	// (0x00043e67) main_idle_act4_pane_t_ParamLimits

0xceb0,	// (0x00041003) popup_clock_digital_analogue_window_cp2_ParamLimits

0xcebe,	// (0x00041011) sat_plugin_idle_act4_pane_ParamLimits

0xcebe,	// (0x00041011) sat_plugin_idle_act4_pane

0xd02e,	// (0x00041181) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd02e,	// (0x00041181) sat_plugin_idle_act4_pane_t1

0xd041,	// (0x00041194) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd041,	// (0x00041194) sat_plugin_idle_act4_pane_t2

0xd054,	// (0x000411a7) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd054,	// (0x000411a7) sat_plugin_idle_act4_pane_t3

0xd067,	// (0x000411ba) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd067,	// (0x000411ba) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5b,	// (0x00043eae) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5b,	// (0x00043eae) sat_plugin_idle_act4_pane_t

0xb229,	// (0x0003f37c) popup_battery_window_ParamLimits

0xb229,	// (0x0003f37c) popup_battery_window

0x0302,	// (0x00034455) bg_popup_sub_pane_cp25_ParamLimits

0x0302,	// (0x00034455) bg_popup_sub_pane_cp25

0x4851,	// (0x000389a4) popup_battery_window_g1_ParamLimits

0x4851,	// (0x000389a4) popup_battery_window_g1

0x485d,	// (0x000389b0) popup_battery_window_t1_ParamLimits

0x485d,	// (0x000389b0) popup_battery_window_t1

0x486f,	// (0x000389c2) popup_battery_window_t2_ParamLimits

0x486f,	// (0x000389c2) popup_battery_window_t2

0x0001,

0xfd64,	// (0x00043eb7) popup_battery_window_t_ParamLimits

0xfd64,	// (0x00043eb7) popup_battery_window_t

0x4bc5,	// (0x00038d18) midp_canvas_pane_ParamLimits

0x4c21,	// (0x00038d74) midp_keypad_pane_ParamLimits

0x4c21,	// (0x00038d74) midp_keypad_pane

0x136b,	// (0x000354be) main_midp_pane_ParamLimits

0x2f38,	// (0x0003708b) signal_pane_g2_cp_ParamLimits

0xd07a,	// (0x000411cd) aid_size_cell_midp_keypad_ParamLimits

0xd07a,	// (0x000411cd) aid_size_cell_midp_keypad

0xd094,	// (0x000411e7) midp_keyp_game_grid_pane_ParamLimits

0xd094,	// (0x000411e7) midp_keyp_game_grid_pane

0xd0ae,	// (0x00041201) midp_keyp_rocker_pane_ParamLimits

0xd0ae,	// (0x00041201) midp_keyp_rocker_pane

0xd0db,	// (0x0004122e) midp_keyp_sk_left_pane_ParamLimits

0xd0db,	// (0x0004122e) midp_keyp_sk_left_pane

0xd133,	// (0x00041286) midp_keyp_sk_right_pane_ParamLimits

0xd133,	// (0x00041286) midp_keyp_sk_right_pane

0x00df,	// (0x00034232) bg_button_pane_cp03

0xd185,	// (0x000412d8) midp_keyp_sk_left_pane_g1

0x00df,	// (0x00034232) bg_button_pane_cp04

0xd185,	// (0x000412d8) midp_keyp_sk_right_pane_g1

0x32bc,	// (0x0003740f) midp_keyp_rocker_pane_g1

0xd18e,	// (0x000412e1) keyp_game_cell_pane_ParamLimits

0xd18e,	// (0x000412e1) keyp_game_cell_pane

0x00df,	// (0x00034232) bg_button_pane_cp02

0xd19f,	// (0x000412f2) keyp_game_cell_pane_g1

0xb25f,	// (0x0003f3b2) popup_fep_vkb2_window_ParamLimits

0xb25f,	// (0x0003f3b2) popup_fep_vkb2_window

0xd1b6,	// (0x00041309) aid_size_cell_vkb2_ParamLimits

0xd1b6,	// (0x00041309) aid_size_cell_vkb2

0xd202,	// (0x00041355) popup_fep_vkb2_window_g1_ParamLimits

0xd202,	// (0x00041355) popup_fep_vkb2_window_g1

0xd24a,	// (0x0004139d) vkb2_area_bottom_pane_ParamLimits

0xd24a,	// (0x0004139d) vkb2_area_bottom_pane

0xd282,	// (0x000413d5) vkb2_area_keypad_pane_ParamLimits

0xd282,	// (0x000413d5) vkb2_area_keypad_pane

0xd2ba,	// (0x0004140d) vkb2_area_top_pane_ParamLimits

0xd2ba,	// (0x0004140d) vkb2_area_top_pane

0xd32f,	// (0x00041482) vkb2_top_entry_pane_ParamLimits

0xd32f,	// (0x00041482) vkb2_top_entry_pane

0xd359,	// (0x000414ac) vkb2_top_grid_left_pane_ParamLimits

0xd359,	// (0x000414ac) vkb2_top_grid_left_pane

0xd378,	// (0x000414cb) vkb2_top_grid_right_pane_ParamLimits

0xd378,	// (0x000414cb) vkb2_top_grid_right_pane

0xd397,	// (0x000414ea) vkb2_cell_keypad_pane_ParamLimits

0xd397,	// (0x000414ea) vkb2_cell_keypad_pane

0xd448,	// (0x0004159b) vkb2_area_bottom_grid_pane_ParamLimits

0xd448,	// (0x0004159b) vkb2_area_bottom_grid_pane

0xd46c,	// (0x000415bf) vkb2_area_bottom_pane_g1_ParamLimits

0xd46c,	// (0x000415bf) vkb2_area_bottom_pane_g1

0xd490,	// (0x000415e3) vkb2_area_bottom_pane_g2_ParamLimits

0xd490,	// (0x000415e3) vkb2_area_bottom_pane_g2

0xd4be,	// (0x00041611) vkb2_area_bottom_pane_g3_ParamLimits

0xd4be,	// (0x00041611) vkb2_area_bottom_pane_g3

0x0002,

0xfd69,	// (0x00043ebc) vkb2_area_bottom_pane_g_ParamLimits

0xfd69,	// (0x00043ebc) vkb2_area_bottom_pane_g

0xd50f,	// (0x00041662) vkb2_top_cell_left_pane_ParamLimits

0xd50f,	// (0x00041662) vkb2_top_cell_left_pane

0xd52f,	// (0x00041682) vkb2_top_entry_pane_g1_ParamLimits

0xd52f,	// (0x00041682) vkb2_top_entry_pane_g1

0xd53d,	// (0x00041690) vkb2_top_entry_pane_t1_ParamLimits

0xd53d,	// (0x00041690) vkb2_top_entry_pane_t1

0x4894,	// (0x000389e7) vkb2_top_entry_pane_t2_ParamLimits

0x4894,	// (0x000389e7) vkb2_top_entry_pane_t2

0x48c6,	// (0x00038a19) vkb2_top_entry_pane_t3_ParamLimits

0x48c6,	// (0x00038a19) vkb2_top_entry_pane_t3

0x0002,

0xfd70,	// (0x00043ec3) vkb2_top_entry_pane_t_ParamLimits

0xfd70,	// (0x00043ec3) vkb2_top_entry_pane_t

0xd59c,	// (0x000416ef) vkb2_top_grid_right_pane_g1_ParamLimits

0xd59c,	// (0x000416ef) vkb2_top_grid_right_pane_g1

0xd5b2,	// (0x00041705) vkb2_top_grid_right_pane_g2_ParamLimits

0xd5b2,	// (0x00041705) vkb2_top_grid_right_pane_g2

0xd5ca,	// (0x0004171d) vkb2_top_grid_right_pane_g3_ParamLimits

0xd5ca,	// (0x0004171d) vkb2_top_grid_right_pane_g3

0xd5e2,	// (0x00041735) vkb2_top_grid_right_pane_g4_ParamLimits

0xd5e2,	// (0x00041735) vkb2_top_grid_right_pane_g4

0x0003,

0xfd77,	// (0x00043eca) vkb2_top_grid_right_pane_g_ParamLimits

0xfd77,	// (0x00043eca) vkb2_top_grid_right_pane_g

0xd5f8,	// (0x0004174b) vkb2_top_cell_left_pane_g1

0xd60f,	// (0x00041762) vkb2_cell_keypad_pane_g1_ParamLimits

0xd60f,	// (0x00041762) vkb2_cell_keypad_pane_g1

0x48dc,	// (0x00038a2f) vkb2_cell_keypad_pane_t1_ParamLimits

0x48dc,	// (0x00038a2f) vkb2_cell_keypad_pane_t1

0xd61d,	// (0x00041770) vkb2_cell_bottom_grid_pane_ParamLimits

0xd61d,	// (0x00041770) vkb2_cell_bottom_grid_pane

0xd656,	// (0x000417a9) vkb2_cell_bottom_grid_pane_g1

0xcede,	// (0x00041031) aid_call2_pane_cp02

0xcee6,	// (0x00041039) aid_call_pane_cp02

0xceee,	// (0x00041041) clock_digital_number_pane_cp10

0xcef6,	// (0x00041049) clock_digital_number_pane_cp11

0xcefe,	// (0x00041051) clock_digital_number_pane_cp12

0xcf06,	// (0x00041059) clock_digital_number_pane_cp13

0xcf0e,	// (0x00041061) clock_digital_separator_pane_cp10

0x0cb6,	// (0x00034e09) popup_clock_digital_analogue_window_cp2_g1

0x0cb6,	// (0x00034e09) popup_clock_digital_analogue_window_cp2_g2

0xcf16,	// (0x00041069) popup_clock_digital_analogue_window_cp2_g3

0x0cb6,	// (0x00034e09) popup_clock_digital_analogue_window_cp2_g4

0xcf16,	// (0x00041069) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2c,	// (0x00043e7f) popup_clock_digital_analogue_window_cp2_g

0xcf1e,	// (0x00041071) popup_clock_digital_analogue_window_cp2_t1

0xcf2c,	// (0x0004107f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd37,	// (0x00043e8a) popup_clock_digital_analogue_window_cp2_t

0x32bc,	// (0x0003740f) clock_digital_number_pane_cp10_g1

0x32bc,	// (0x0003740f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x00043c6d) clock_digital_number_pane_cp10_g

0x32bc,	// (0x0003740f) clock_digital_separator_pane_cp10_g1

0x32bc,	// (0x0003740f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x00043c6d) clock_digital_separator_pane_cp10_g

0x46c7,	// (0x0003881a) uniindi_top_pane_g3

0x46d8,	// (0x0003882b) uniindi_top_pane_g4

0xd402,	// (0x00041555) vkb2_row_keypad_pane_ParamLimits

0xd402,	// (0x00041555) vkb2_row_keypad_pane

0xd672,	// (0x000417c5) vkb2_cell_t_keypad_pane_ParamLimits

0xd672,	// (0x000417c5) vkb2_cell_t_keypad_pane

0xd67f,	// (0x000417d2) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xd67f,	// (0x000417d2) vkb2_cell_t_keypad_pane_cp08

0xd68f,	// (0x000417e2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xd68f,	// (0x000417e2) vkb2_cell_t_keypad_pane_cp09

0xd6a0,	// (0x000417f3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xd6a0,	// (0x000417f3) vkb2_cell_t_keypad_pane_cp01

0xd6b0,	// (0x00041803) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xd6b0,	// (0x00041803) vkb2_cell_t_keypad_pane_cp02

0xd6c0,	// (0x00041813) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xd6c0,	// (0x00041813) vkb2_cell_t_keypad_pane_cp03

0xd6d0,	// (0x00041823) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xd6d0,	// (0x00041823) vkb2_cell_t_keypad_pane_cp04

0xd6e0,	// (0x00041833) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xd6e0,	// (0x00041833) vkb2_cell_t_keypad_pane_cp05

0xd6f0,	// (0x00041843) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xd6f0,	// (0x00041843) vkb2_cell_t_keypad_pane_cp06

0xd700,	// (0x00041853) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xd700,	// (0x00041853) vkb2_cell_t_keypad_pane_cp07

0xd710,	// (0x00041863) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xd710,	// (0x00041863) vkb2_cell_t_keypad_pane_cp10

0xc5f6,	// (0x00040749) vkb2_cell_t_keypad_pane_g1

0x9671,	// (0x0003d7c4) vkb2_cell_t_keypad_pane_t1

0xb166,	// (0x0003f2b9) popup_grid_graphic2_window

0xed1c,	// (0x00042e6f) aid_size_cell_graphic2_ParamLimits

0xed1c,	// (0x00042e6f) aid_size_cell_graphic2

0xed54,	// (0x00042ea7) bg_popup_window_pane_cp21_ParamLimits

0xed54,	// (0x00042ea7) bg_popup_window_pane_cp21

0xed62,	// (0x00042eb5) graphic2_pages_pane_ParamLimits

0xed62,	// (0x00042eb5) graphic2_pages_pane

0xed9c,	// (0x00042eef) grid_graphic2_control_pane_ParamLimits

0xed9c,	// (0x00042eef) grid_graphic2_control_pane

0xedd2,	// (0x00042f25) grid_graphic2_pane_ParamLimits

0xedd2,	// (0x00042f25) grid_graphic2_pane

0xee32,	// (0x00042f85) cell_graphic2_pane

0xb166,	// (0x0003f2b9) main_comp_mode_pane

0x4340,	// (0x00038493) list_ai3_gene_pane_ParamLimits

0xcbd8,	// (0x00040d2b) bg_popup_window_pane_cp19_ParamLimits

0x44b3,	// (0x00038606) bg_touch_area_indi_pane_ParamLimits

0x44b3,	// (0x00038606) bg_touch_area_indi_pane

0x44c9,	// (0x0003861c) bg_touch_area_indi_pane_cp01_ParamLimits

0x44c9,	// (0x0003861c) bg_touch_area_indi_pane_cp01

0x44df,	// (0x00038632) bg_touch_area_indi_pane_cp02_ParamLimits

0x44df,	// (0x00038632) bg_touch_area_indi_pane_cp02

0x44f5,	// (0x00038648) bg_touch_area_indi_pane_cp03_ParamLimits

0x44f5,	// (0x00038648) bg_touch_area_indi_pane_cp03

0x450b,	// (0x0003865e) popup_slider_window_g1_ParamLimits

0x4527,	// (0x0003867a) popup_slider_window_g2_ParamLimits

0x4543,	// (0x00038696) popup_slider_window_g3_ParamLimits

0xfcc1,	// (0x00043e14) popup_slider_window_g_ParamLimits

0x455f,	// (0x000386b2) popup_slider_window_t1_ParamLimits

0x45a3,	// (0x000386f6) small_volume_slider_vertical_pane_ParamLimits

0xee32,	// (0x00042f85) cell_graphic2_pane_ParamLimits

0xee6e,	// (0x00042fc1) bg_button_pane_cp10_ParamLimits

0xee6e,	// (0x00042fc1) bg_button_pane_cp10

0xee7f,	// (0x00042fd2) bg_button_pane_cp11_ParamLimits

0xee7f,	// (0x00042fd2) bg_button_pane_cp11

0xee90,	// (0x00042fe3) graphic2_pages_pane_g1_ParamLimits

0xee90,	// (0x00042fe3) graphic2_pages_pane_g1

0xeea3,	// (0x00042ff6) graphic2_pages_pane_g2_ParamLimits

0xeea3,	// (0x00042ff6) graphic2_pages_pane_g2

0x0001,

0xfd85,	// (0x00043ed8) graphic2_pages_pane_g_ParamLimits

0xfd85,	// (0x00043ed8) graphic2_pages_pane_g

0xeeb9,	// (0x0004300c) graphic2_pages_pane_t1_ParamLimits

0xeeb9,	// (0x0004300c) graphic2_pages_pane_t1

0xeecf,	// (0x00043022) cell_graphic2_control_pane_ParamLimits

0xeecf,	// (0x00043022) cell_graphic2_control_pane

0xeeee,	// (0x00043041) cell_graphic2_pane_g1_ParamLimits

0xeeee,	// (0x00043041) cell_graphic2_pane_g1

0xeefb,	// (0x0004304e) cell_graphic2_pane_g2_ParamLimits

0xeefb,	// (0x0004304e) cell_graphic2_pane_g2

0xef08,	// (0x0004305b) cell_graphic2_pane_g3_ParamLimits

0xef08,	// (0x0004305b) cell_graphic2_pane_g3

0xef15,	// (0x00043068) cell_graphic2_pane_g4_ParamLimits

0xef15,	// (0x00043068) cell_graphic2_pane_g4

0xef22,	// (0x00043075) cell_graphic2_pane_g5_ParamLimits

0xef22,	// (0x00043075) cell_graphic2_pane_g5

0x0004,

0xfd8a,	// (0x00043edd) cell_graphic2_pane_g_ParamLimits

0xfd8a,	// (0x00043edd) cell_graphic2_pane_g

0xef3b,	// (0x0004308e) cell_graphic2_pane_t1_ParamLimits

0xef3b,	// (0x0004308e) cell_graphic2_pane_t1

0x15b4,	// (0x00035707) grid_highlight_pane_cp11_ParamLimits

0x15b4,	// (0x00035707) grid_highlight_pane_cp11

0x0302,	// (0x00034455) bg_button_pane_cp05

0xef63,	// (0x000430b6) cell_graphic2_control_pane_g1

0x32bc,	// (0x0003740f) bg_touch_area_indi_pane_g1

0x9683,	// (0x0003d7d6) aid_cmod_rocker_key_size

0x968d,	// (0x0003d7e0) aid_cmode_itu_key_size

0x9697,	// (0x0003d7ea) main_cmode_video_pane

0x969f,	// (0x0003d7f2) main_comp_mode_itu_pane

0x96a9,	// (0x0003d7fc) main_comp_mode_rocker_pane

0x96b1,	// (0x0003d804) cell_cmode_rocker_pane_ParamLimits

0x96b1,	// (0x0003d804) cell_cmode_rocker_pane

0x96c3,	// (0x0003d816) cell_cmode_itu_pane_ParamLimits

0x96c3,	// (0x0003d816) cell_cmode_itu_pane

0x07a9,	// (0x000348fc) bg_button_pane_cp06_ParamLimits

0x07a9,	// (0x000348fc) bg_button_pane_cp06

0x34e8,	// (0x0003763b) cell_cmode_rocker_pane_g1_ParamLimits

0x34e8,	// (0x0003763b) cell_cmode_rocker_pane_g1

0x45da,	// (0x0003872d) cell_cmode_rocker_pane_g2_ParamLimits

0x45da,	// (0x0003872d) cell_cmode_rocker_pane_g2

0x0001,

0xfd9a,	// (0x00043eed) cell_cmode_rocker_pane_g_ParamLimits

0xfd9a,	// (0x00043eed) cell_cmode_rocker_pane_g

0x00df,	// (0x00034232) bg_button_pane_cp07

0x96d8,	// (0x0003d82b) cell_cmode_itu_pane_g1

0x96e1,	// (0x0003d834) cell_cmode_itu_pane_t1

0x96ef,	// (0x0003d842) cell_cmode_itu_pane_t2

0x0001,

0xfd9f,	// (0x00043ef2) cell_cmode_itu_pane_t

0x4749,	// (0x0003889c) aid_touch_ctrl_left

0x4751,	// (0x000388a4) aid_touch_ctrl_right

0x00df,	// (0x00034232) compa_mode_pane

0xef8b,	// (0x000430de) aid_cmod_rocker_key_size_cp

0xef95,	// (0x000430e8) aid_cmode_itu_key_size_cp

0x96fd,	// (0x0003d850) compa_mode_pane_g1

0x9705,	// (0x0003d858) compa_mode_pane_g2

0x970d,	// (0x0003d860) compa_mode_pane_g3

0x0002,

0xfda4,	// (0x00043ef7) compa_mode_pane_g

0xef9f,	// (0x000430f2) main_comp_mode_itu_pane_cp

0xefa7,	// (0x000430fa) main_comp_mode_rocker_pane_cp

0xefaf,	// (0x00043102) cell_cmode_itu_pane_cp_ParamLimits

0xefaf,	// (0x00043102) cell_cmode_itu_pane_cp

0xefc4,	// (0x00043117) cell_cmode_rocker_pane_cp_ParamLimits

0xefc4,	// (0x00043117) cell_cmode_rocker_pane_cp

0x07a9,	// (0x000348fc) bg_button_pane_cp06_cp_ParamLimits

0x07a9,	// (0x000348fc) bg_button_pane_cp06_cp

0x34e8,	// (0x0003763b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x34e8,	// (0x0003763b) cell_cmode_rocker_pane_g1_cp

0x32bc,	// (0x0003740f) cell_cmode_rocker_pane_g2_cp

0x00df,	// (0x00034232) bg_button_pane_cp07_cp

0xefd6,	// (0x00043129) cell_cmode_itu_pane_g1_cp

0xefdf,	// (0x00043132) cell_cmode_itu_pane_t1_cp

0xefed,	// (0x00043140) cell_cmode_itu_pane_t2_cp

0x528e,	// (0x000393e1) settings_code_pane_cp2

0x01b9,	// (0x0003430c) bg_popup_window_pane_cp3_ParamLimits

0x0500,	// (0x00034653) heading_pane_cp3_ParamLimits

0x050f,	// (0x00034662) listscroll_popup_graphic_pane_ParamLimits

0xc2cd,	// (0x00040420) fep_hwr_aid_pane_ParamLimits

0xcca5,	// (0x00040df8) aid_touch_sctrl_top_ParamLimits

0xccc0,	// (0x00040e13) sctrl_sk_top_pane_g1_ParamLimits

0xc5f6,	// (0x00040749) sctrl_sk_top_pane_g2_ParamLimits

0xfcda,	// (0x00043e2d) sctrl_sk_top_pane_g_ParamLimits

0xcccd,	// (0x00040e20) sctrl_sk_top_pane_t1_ParamLimits

0xcca5,	// (0x00040df8) aid_touch_sctrl_bottom_ParamLimits

0xcccd,	// (0x00040e20) sctrl_sk_bottom_pane_t1_ParamLimits

0x4693,	// (0x000387e6) aid_area_touch_clock

0xd2f6,	// (0x00041449) aid_vkb2_area_top_pane_cell_ParamLimits

0xd2f6,	// (0x00041449) aid_vkb2_area_top_pane_cell

0xd424,	// (0x00041577) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd424,	// (0x00041577) aid_vkb2_area_bottom_pane_cell

0x488c,	// (0x000389df) popup_char_count_window

0x9715,	// (0x0003d868) popup_char_count_window_g1

0x971e,	// (0x0003d871) popup_char_count_window_g2

0x9727,	// (0x0003d87a) popup_char_count_window_g3

0x0002,

0xfdab,	// (0x00043efe) popup_char_count_window_g

0x9730,	// (0x0003d883) popup_char_count_window_t1

0xd1e0,	// (0x00041333) popup_fep_char_preview_window_ParamLimits

0xd1e0,	// (0x00041333) popup_fep_char_preview_window

0xd314,	// (0x00041467) vkb2_top_candi_pane_ParamLimits

0xd314,	// (0x00041467) vkb2_top_candi_pane

0xeffb,	// (0x0004314e) cell_vkb2_top_candi_pane_ParamLimits

0xeffb,	// (0x0004314e) cell_vkb2_top_candi_pane

0xd725,	// (0x00041878) bg_popup_fep_char_preview_window_ParamLimits

0xd725,	// (0x00041878) bg_popup_fep_char_preview_window

0xd733,	// (0x00041886) popup_fep_char_preview_window_t1_ParamLimits

0xd733,	// (0x00041886) popup_fep_char_preview_window_t1

0x974e,	// (0x0003d8a1) bg_popup_fep_char_preview_window_g1

0x9746,	// (0x0003d899) bg_popup_fep_char_preview_window_g2

0x973e,	// (0x0003d891) bg_popup_fep_char_preview_window_g3

0x9776,	// (0x0003d8c9) bg_popup_fep_char_preview_window_g4

0x976e,	// (0x0003d8c1) bg_popup_fep_char_preview_window_g5

0x9766,	// (0x0003d8b9) bg_popup_fep_char_preview_window_g6

0x975e,	// (0x0003d8b1) bg_popup_fep_char_preview_window_g7

0x9756,	// (0x0003d8a9) bg_popup_fep_char_preview_window_g8

0x977e,	// (0x0003d8d1) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb2,	// (0x00043f05) bg_popup_fep_char_preview_window_g

0xc5f6,	// (0x00040749) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc5f6,	// (0x00040749) cell_vkb2_top_candi_pane_g1

0xc604,	// (0x00040757) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc604,	// (0x00040757) cell_vkb2_top_candi_pane_g2

0x9786,	// (0x0003d8d9) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9786,	// (0x0003d8d9) cell_vkb2_top_candi_pane_g3

0xd775,	// (0x000418c8) cell_vkb2_top_candi_pane_g4_ParamLimits

0xd775,	// (0x000418c8) cell_vkb2_top_candi_pane_g4

0x3738,	// (0x0003788b) cell_vkb2_top_candi_pane_g5_ParamLimits

0x3738,	// (0x0003788b) cell_vkb2_top_candi_pane_g5

0xd796,	// (0x000418e9) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd796,	// (0x000418e9) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc7,	// (0x00043f1a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc7,	// (0x00043f1a) cell_vkb2_top_candi_pane_g

0xd7a4,	// (0x000418f7) cell_vkb2_top_candi_pane_t1

0xc0e5,	// (0x00040238) aid_size_touch_slider_mark_ParamLimits

0xc0e5,	// (0x00040238) aid_size_touch_slider_mark

0xed90,	// (0x00042ee3) grid_graphic2_catg_pane_ParamLimits

0xed90,	// (0x00042ee3) grid_graphic2_catg_pane

0xee0e,	// (0x00042f61) popup_grid_graphic2_window_t1_ParamLimits

0xee0e,	// (0x00042f61) popup_grid_graphic2_window_t1

0xee20,	// (0x00042f73) popup_grid_graphic2_window_t2_ParamLimits

0xee20,	// (0x00042f73) popup_grid_graphic2_window_t2

0x0001,

0xfd80,	// (0x00043ed3) popup_grid_graphic2_window_t_ParamLimits

0xfd80,	// (0x00043ed3) popup_grid_graphic2_window_t

0x0302,	// (0x00034455) bg_button_pane_cp05_ParamLimits

0xef63,	// (0x000430b6) cell_graphic2_control_pane_g1_ParamLimits

0xf031,	// (0x00043184) cell_graphic2_catg_pane_ParamLimits

0xf031,	// (0x00043184) cell_graphic2_catg_pane

0x00df,	// (0x00034232) bg_button_pane_cp12

0xf043,	// (0x00043196) cell_graphic2_catg_pane_g1

0x465f,	// (0x000387b2) cell_tb_ext_pane_t1_ParamLimits

0xd56f,	// (0x000416c2) vkb2_top_cell_right_narrow_pane_ParamLimits

0xd56f,	// (0x000416c2) vkb2_top_cell_right_narrow_pane

0xd587,	// (0x000416da) vkb2_top_cell_right_wide_pane_ParamLimits

0xd587,	// (0x000416da) vkb2_top_cell_right_wide_pane

0xc2bf,	// (0x00040412) bg_vkb2_func_pane_ParamLimits

0xc2bf,	// (0x00040412) bg_vkb2_func_pane

0xd5f8,	// (0x0004174b) vkb2_top_cell_left_pane_g1_ParamLimits

0xc2bf,	// (0x00040412) bg_vkb2_fuc_pane_cp03_ParamLimits

0xc2bf,	// (0x00040412) bg_vkb2_fuc_pane_cp03

0xd656,	// (0x000417a9) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1544,	// (0x00035697) bg_vkb2_func_pane_g1

0x153c,	// (0x0003568f) bg_vkb2_func_pane_g2

0x154c,	// (0x0003569f) bg_vkb2_func_pane_g3

0x1554,	// (0x000356a7) bg_vkb2_func_pane_g4

0x155c,	// (0x000356af) bg_vkb2_func_pane_g5

0x1564,	// (0x000356b7) bg_vkb2_func_pane_g6

0x1574,	// (0x000356c7) bg_vkb2_func_pane_g7

0x156c,	// (0x000356bf) bg_vkb2_func_pane_g8

0x1534,	// (0x00035687) bg_vkb2_func_pane_g9

0x0008,

0xfdd4,	// (0x00043f27) bg_vkb2_func_pane_g

0xc2bf,	// (0x00040412) bg_vkb2_fuc_pane_cp01_ParamLimits

0xc2bf,	// (0x00040412) bg_vkb2_fuc_pane_cp01

0xd5f8,	// (0x0004174b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xd5f8,	// (0x0004174b) vkb2_top_cell_right_wide_pane_g1

0xc2bf,	// (0x00040412) bg_vkb2_fuc_pane_cp02_ParamLimits

0xc2bf,	// (0x00040412) bg_vkb2_fuc_pane_cp02

0xd656,	// (0x000417a9) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xd656,	// (0x000417a9) vkb2_top_cell_right_narrow_pane_g1

0xcb6a,	// (0x00040cbd) aid_touch_area_decrease_ParamLimits

0xcb6a,	// (0x00040cbd) aid_touch_area_decrease

0xcb82,	// (0x00040cd5) aid_touch_area_increase_ParamLimits

0xcb82,	// (0x00040cd5) aid_touch_area_increase

0xcb8e,	// (0x00040ce1) aid_touch_area_mute_ParamLimits

0xcb8e,	// (0x00040ce1) aid_touch_area_mute

0xcbaa,	// (0x00040cfd) aid_touch_area_slider_ParamLimits

0xcbaa,	// (0x00040cfd) aid_touch_area_slider

0xcbe4,	// (0x00040d37) popup_slider_window_g4_ParamLimits

0xcbe4,	// (0x00040d37) popup_slider_window_g4

0xcbf0,	// (0x00040d43) popup_slider_window_g5_ParamLimits

0xcbf0,	// (0x00040d43) popup_slider_window_g5

0xcc12,	// (0x00040d65) popup_slider_window_g6_ParamLimits

0xcc12,	// (0x00040d65) popup_slider_window_g6

0x458b,	// (0x000386de) popup_slider_window_t2_ParamLimits

0x458b,	// (0x000386de) popup_slider_window_t2

0x0001,

0xfcce,	// (0x00043e21) popup_slider_window_t_ParamLimits

0xfcce,	// (0x00043e21) popup_slider_window_t

0xcc24,	// (0x00040d77) slider_pane_ParamLimits

0xcc24,	// (0x00040d77) slider_pane

0x97a7,	// (0x0003d8fa) slider_pane_g1_ParamLimits

0x97a7,	// (0x0003d8fa) slider_pane_g1

0x97bb,	// (0x0003d90e) slider_pane_g2_ParamLimits

0x97bb,	// (0x0003d90e) slider_pane_g2

0x97d1,	// (0x0003d924) slider_pane_g3_ParamLimits

0x97d1,	// (0x0003d924) slider_pane_g3

0x0003,

0xfde7,	// (0x00043f3a) slider_pane_g_ParamLimits

0xfde7,	// (0x00043f3a) slider_pane_g

0xbd51,	// (0x0003fea4) popup_tb_float_extension_window_ParamLimits

0xbd51,	// (0x0003fea4) popup_tb_float_extension_window

0x97fd,	// (0x0003d950) aid_size_cell_tb_float_ext

0x00df,	// (0x00034232) bg_popup_sub_window_cp28

0x9808,	// (0x0003d95b) grid_tb_float_ext_pane

0x9810,	// (0x0003d963) cell_tb_float_ext_pane_ParamLimits

0x9810,	// (0x0003d963) cell_tb_float_ext_pane

0x9828,	// (0x0003d97b) cell_tb_float_ext_pane_g1

0x9831,	// (0x0003d984) grid_highlight_pane_cp12

0xc408,	// (0x0004055b) cell_last_hwr_side_pane_ParamLimits

0xc408,	// (0x0004055b) cell_last_hwr_side_pane

0x32bc,	// (0x0003740f) cell_last_hwr_side_pane_g1

0x983a,	// (0x0003d98d) cell_last_hwr_side_pane_g2

0x0001,

0xfdf0,	// (0x00043f43) cell_last_hwr_side_pane_g

0xd4ec,	// (0x0004163f) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd4ec,	// (0x0004163f) vkb2_area_bottom_space_btn_pane

0xc5f6,	// (0x00040749) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9671,	// (0x0003d7c4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xd7a4,	// (0x000418f7) cell_vkb2_top_candi_pane_t1_ParamLimits

0xd7bb,	// (0x0004190e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xd7bb,	// (0x0004190e) vkb2_area_bottom_space_btn_pane_g1

0xd7f1,	// (0x00041944) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xd7f1,	// (0x00041944) vkb2_area_bottom_space_btn_pane_g2

0xd827,	// (0x0004197a) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xd827,	// (0x0004197a) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf5,	// (0x00043f48) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf5,	// (0x00043f48) vkb2_area_bottom_space_btn_pane_g

0xc37c,	// (0x000404cf) cel_fep_hwr_func_pane_ParamLimits

0xc37c,	// (0x000404cf) cel_fep_hwr_func_pane

0xc3b8,	// (0x0004050b) cell_hwr_side_button_pane_ParamLimits

0xc3b8,	// (0x0004050b) cell_hwr_side_button_pane

0x4693,	// (0x000387e6) aid_area_touch_clock_ParamLimits

0x0302,	// (0x00034455) bg_uniindi_top_pane_ParamLimits

0x46a5,	// (0x000387f8) uniindi_top_pane_g1_ParamLimits

0x46bb,	// (0x0003880e) uniindi_top_pane_g2_ParamLimits

0x46c7,	// (0x0003881a) uniindi_top_pane_g3_ParamLimits

0x46d8,	// (0x0003882b) uniindi_top_pane_g4_ParamLimits

0xfd06,	// (0x00043e59) uniindi_top_pane_g_ParamLimits

0x46e5,	// (0x00038838) uniindi_top_pane_t1_ParamLimits

0x0302,	// (0x00034455) bg_vkb2_func_pane_cp01_ParamLimits

0x0302,	// (0x00034455) bg_vkb2_func_pane_cp01

0x9843,	// (0x0003d996) cel_fep_hwr_func_pane_g1_ParamLimits

0x9843,	// (0x0003d996) cel_fep_hwr_func_pane_g1

0x0302,	// (0x00034455) bg_vkb2_func_pane_cp02_ParamLimits

0x0302,	// (0x00034455) bg_vkb2_func_pane_cp02

0x9843,	// (0x0003d996) cell_hwr_side_button_pane_g1_ParamLimits

0x9843,	// (0x0003d996) cell_hwr_side_button_pane_g1

0x1458,	// (0x000355ab) status_pane_g4_ParamLimits

0x1458,	// (0x000355ab) status_pane_g4

0x1470,	// (0x000355c3) status_pane_t1

0x30c2,	// (0x00037215) form2_midp_gauge_slider_cont_pane

0x30ca,	// (0x0003721d) form2_midp_gauge_slider_pane_t1_ParamLimits

0x5545,	// (0x00039698) form2_midp_gauge_slider_pane_t2_ParamLimits

0x5557,	// (0x000396aa) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x00043c20) form2_midp_gauge_slider_pane_t_ParamLimits

0x30dc,	// (0x0003722f) form2_midp_slider_pane_ParamLimits

0xd1a8,	// (0x000412fb) aid_size_cell_func_vkb2_ParamLimits

0xd1a8,	// (0x000412fb) aid_size_cell_func_vkb2

0x97e9,	// (0x0003d93c) slider_pane_g4_ParamLimits

0x97e9,	// (0x0003d93c) slider_pane_g4

0xd86d,	// (0x000419c0) form2_midp_gauge_slider_pane_t2_cp01

0xd87b,	// (0x000419ce) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd87b,	// (0x000419ce) form2_midp_gauge_slider_pane_t3_cp01

0xd898,	// (0x000419eb) form2_midp_slider_pane_cp01

0x00df,	// (0x00034232) navi_smil_pane

0x9873,	// (0x0003d9c6) navi_smil_pane_g1

0x987b,	// (0x0003d9ce) navi_smil_pane_t1

0x9851,	// (0x0003d9a4) form2_midp_slider_pane_g1

0x985a,	// (0x0003d9ad) form2_midp_slider_pane_g2

0x9862,	// (0x0003d9b5) form2_midp_slider_pane_g3

0x9851,	// (0x0003d9a4) form2_midp_slider_pane_g4

0xf04c,	// (0x0004319f) form2_midp_slider_pane_g5

0x0004,

0xfdfe,	// (0x00043f51) form2_midp_slider_pane_g

0xd85d,	// (0x000419b0) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xd85d,	// (0x000419b0) vkb2_area_bottom_space_btn_pane_g4

0x4da4,	// (0x00038ef7) lc0_navi_pane_ParamLimits

0x4da4,	// (0x00038ef7) lc0_navi_pane

0x4e1a,	// (0x00038f6d) lc0_stat_indi_pane_ParamLimits

0x4e1a,	// (0x00038f6d) lc0_stat_indi_pane

0x4e31,	// (0x00038f84) ls0_title_pane_ParamLimits

0x4e31,	// (0x00038f84) ls0_title_pane

0x07a9,	// (0x000348fc) bg_popup_sub_pane_cp14_ParamLimits

0x467a,	// (0x000387cd) list_uniindi_pane_ParamLimits

0x4686,	// (0x000387d9) uniindi_top_pane_ParamLimits

0x4721,	// (0x00038874) list_single_uniindi_pane_g1_ParamLimits

0x4734,	// (0x00038887) list_single_uniindi_pane_t1_ParamLimits

0xd8a1,	// (0x000419f4) lc0_stat_clock_pane_ParamLimits

0xd8a1,	// (0x000419f4) lc0_stat_clock_pane

0xf055,	// (0x000431a8) lc0_stat_indi_pane_g1_ParamLimits

0xf055,	// (0x000431a8) lc0_stat_indi_pane_g1

0xf062,	// (0x000431b5) lc0_stat_indi_pane_g2_ParamLimits

0xf062,	// (0x000431b5) lc0_stat_indi_pane_g2

0x0001,

0xfe09,	// (0x00043f5c) lc0_stat_indi_pane_g_ParamLimits

0xfe09,	// (0x00043f5c) lc0_stat_indi_pane_g

0xd8ae,	// (0x00041a01) lc0_uni_indicator_pane_ParamLimits

0xd8ae,	// (0x00041a01) lc0_uni_indicator_pane

0x9889,	// (0x0003d9dc) ls0_title_pane_g1_ParamLimits

0x9889,	// (0x0003d9dc) ls0_title_pane_g1

0xf06f,	// (0x000431c2) ls0_title_pane_t1_ParamLimits

0xf06f,	// (0x000431c2) ls0_title_pane_t1

0xd8bb,	// (0x00041a0e) lc0_uni_indicator_pane_g1_ParamLimits

0xd8bb,	// (0x00041a0e) lc0_uni_indicator_pane_g1

0x989d,	// (0x0003d9f0) lc0_stat_clock_pane_t1

0xb166,	// (0x0003f2b9) main_ai5_pane

0x98ab,	// (0x0003d9fe) ai5_sk_pane_ParamLimits

0x98ab,	// (0x0003d9fe) ai5_sk_pane

0xf0a5,	// (0x000431f8) cell_ai5_widget_pane_ParamLimits

0xf0a5,	// (0x000431f8) cell_ai5_widget_pane

0x98b8,	// (0x0003da0b) aid_size_cell_widget_grid

0x98c5,	// (0x0003da18) bg_ai5_widget_pane_ParamLimits

0x98c5,	// (0x0003da18) bg_ai5_widget_pane

0xf138,	// (0x0004328b) cell_ai5_widget_pane_g2

0xf14c,	// (0x0004329f) cell_ai5_widget_pane_g3

0xf166,	// (0x000432b9) cell_ai5_widget_pane_g4

0xf176,	// (0x000432c9) cell_ai5_widget_pane_g5

0xf186,	// (0x000432d9) cell_ai5_widget_pane_g6

0xf192,	// (0x000432e5) cell_ai5_widget_pane_g7

0xf1fe,	// (0x00043351) cell_ai5_widget_pane_t1_ParamLimits

0xf1fe,	// (0x00043351) cell_ai5_widget_pane_t1

0xf21b,	// (0x0004336e) cell_ai5_widget_pane_t2_ParamLimits

0xf21b,	// (0x0004336e) cell_ai5_widget_pane_t2

0xf233,	// (0x00043386) cell_ai5_widget_pane_t3_ParamLimits

0xf233,	// (0x00043386) cell_ai5_widget_pane_t3

0xf24b,	// (0x0004339e) cell_ai5_widget_pane_t4_ParamLimits

0xf24b,	// (0x0004339e) cell_ai5_widget_pane_t4

0xf271,	// (0x000433c4) cell_ai5_widget_pane_t5_ParamLimits

0xf271,	// (0x000433c4) cell_ai5_widget_pane_t5

0x98ff,	// (0x0003da52) cell_ai5_widget_pane_t6_ParamLimits

0x98ff,	// (0x0003da52) cell_ai5_widget_pane_t6

0x9911,	// (0x0003da64) cell_ai5_widget_pane_t7_ParamLimits

0x9911,	// (0x0003da64) cell_ai5_widget_pane_t7

0xf290,	// (0x000433e3) cell_ai5_widget_pane_t8_ParamLimits

0xf290,	// (0x000433e3) cell_ai5_widget_pane_t8

0x000b,

0xfe29,	// (0x00043f7c) cell_ai5_widget_pane_t_ParamLimits

0xfe29,	// (0x00043f7c) cell_ai5_widget_pane_t

0xf313,	// (0x00043466) grid_ai5_widget_pane

0x07a9,	// (0x000348fc) highlight_cell_ai5_widget_pane_ParamLimits

0x07a9,	// (0x000348fc) highlight_cell_ai5_widget_pane

0xf31f,	// (0x00043472) ai5_sk_left_pane

0xf329,	// (0x0004347c) ai5_sk_middle_pane

0xf333,	// (0x00043486) ai5_sk_right_pane

0x9930,	// (0x0003da83) bg_ai5_widget_pane_g1_ParamLimits

0x9930,	// (0x0003da83) bg_ai5_widget_pane_g1

0x993c,	// (0x0003da8f) bg_ai5_widget_pane_g2_ParamLimits

0x993c,	// (0x0003da8f) bg_ai5_widget_pane_g2

0x9948,	// (0x0003da9b) bg_ai5_widget_pane_g3_ParamLimits

0x9948,	// (0x0003da9b) bg_ai5_widget_pane_g3

0x9954,	// (0x0003daa7) bg_ai5_widget_pane_g4_ParamLimits

0x9954,	// (0x0003daa7) bg_ai5_widget_pane_g4

0x9960,	// (0x0003dab3) bg_ai5_widget_pane_g5_ParamLimits

0x9960,	// (0x0003dab3) bg_ai5_widget_pane_g5

0x996c,	// (0x0003dabf) bg_ai5_widget_pane_g6_ParamLimits

0x996c,	// (0x0003dabf) bg_ai5_widget_pane_g6

0x9978,	// (0x0003dacb) bg_ai5_widget_pane_g7_ParamLimits

0x9978,	// (0x0003dacb) bg_ai5_widget_pane_g7

0x9984,	// (0x0003dad7) bg_ai5_widget_pane_g8_ParamLimits

0x9984,	// (0x0003dad7) bg_ai5_widget_pane_g8

0x9990,	// (0x0003dae3) bg_ai5_widget_pane_g9_ParamLimits

0x9990,	// (0x0003dae3) bg_ai5_widget_pane_g9

0x0008,

0xfe42,	// (0x00043f95) bg_ai5_widget_pane_g_ParamLimits

0xfe42,	// (0x00043f95) bg_ai5_widget_pane_g

0x99c0,	// (0x0003db13) cell_shortcut_ai5_widget_pane_ParamLimits

0x99c0,	// (0x0003db13) cell_shortcut_ai5_widget_pane

0x99d1,	// (0x0003db24) bg_cell_shortcut_ai5_widget_pane

0x04bc,	// (0x0003460f) cell_grid_ai5_widget_pane_g1

0x114f,	// (0x000352a2) highlight_cell_shortcut_ai5_widget_pane

0x1544,	// (0x00035697) ai5_sk_left_pane_g1

0x99d9,	// (0x0003db2c) ai5_sk_left_pane_g2

0x99e1,	// (0x0003db34) ai5_sk_left_pane_g3

0x99e9,	// (0x0003db3c) ai5_sk_left_pane_g4

0x0003,

0xfe55,	// (0x00043fa8) ai5_sk_left_pane_g

0x99f1,	// (0x0003db44) ai5_sk_left_pane_t1

0x153c,	// (0x0003568f) ai5_sk_right_pane_g1

0x99ff,	// (0x0003db52) ai5_sk_right_pane_g2

0x9a07,	// (0x0003db5a) ai5_sk_right_pane_g3

0x9a0f,	// (0x0003db62) ai5_sk_right_pane_g4

0x0003,

0xfe5e,	// (0x00043fb1) ai5_sk_right_pane_g

0x9a17,	// (0x0003db6a) ai5_sk_right_pane_t1

0x153c,	// (0x0003568f) ai5_sk_middle_pane_g1

0x1544,	// (0x00035697) ai5_sk_middle_pane_g2

0x155c,	// (0x000356af) ai5_sk_middle_pane_g3

0x9a07,	// (0x0003db5a) ai5_sk_middle_pane_g4

0x99e1,	// (0x0003db34) ai5_sk_middle_pane_g5

0x9a25,	// (0x0003db78) ai5_sk_middle_pane_g6

0xf33d,	// (0x00043490) ai5_sk_middle_pane_g7

0x0006,

0xfe67,	// (0x00043fba) ai5_sk_middle_pane_g

0x4ceb,	// (0x00038e3e) aid_touch_area_size_lc0_ParamLimits

0x4ceb,	// (0x00038e3e) aid_touch_area_size_lc0

0xc625,	// (0x00040778) cell_hwr_candidate_pane_t1_ParamLimits

0x138d,	// (0x000354e0) aid_touch_navi_pane

0x4f03,	// (0x00039056) status_dt_navi_pane_ParamLimits

0x4f03,	// (0x00039056) status_dt_navi_pane

0x4f10,	// (0x00039063) status_dt_sta_pane_ParamLimits

0x4f10,	// (0x00039063) status_dt_sta_pane

0xf345,	// (0x00043498) dt_sta_controll_pane

0xf352,	// (0x000434a5) dt_sta_indi_pane

0xf363,	// (0x000434b6) dt_sta_title_pane

0x0302,	// (0x00034455) bg_dt_sta_indi_pane_ParamLimits

0x0302,	// (0x00034455) bg_dt_sta_indi_pane

0xf376,	// (0x000434c9) dt_sta_battery_pane

0xf37e,	// (0x000434d1) dt_sta_indi_pane_g1

0xf387,	// (0x000434da) dt_sta_indi_pane_g2

0xf390,	// (0x000434e3) dt_sta_indi_pane_g3

0x0002,

0xfe76,	// (0x00043fc9) dt_sta_indi_pane_g

0xf399,	// (0x000434ec) dt_sta_signal_pane

0x07a9,	// (0x000348fc) bg_dt_sta_title_pane_ParamLimits

0x07a9,	// (0x000348fc) bg_dt_sta_title_pane

0xf3a2,	// (0x000434f5) dt_sta_title_pane_g1

0xf3aa,	// (0x000434fd) dt_sta_title_pane_t1_ParamLimits

0xf3aa,	// (0x000434fd) dt_sta_title_pane_t1

0x00df,	// (0x00034232) bg_dt_sta_control_pane

0xf3bf,	// (0x00043512) dt_sta_controll_pane_g1

0xf3c8,	// (0x0004351b) bg_dt_sta_title_pane_g1

0xf3d1,	// (0x00043524) bg_dt_sta_title_pane_g2

0xf3da,	// (0x0004352d) bg_dt_sta_title_pane_g3

0x0002,

0xfe7d,	// (0x00043fd0) bg_dt_sta_title_pane_g

0x32bc,	// (0x0003740f) bg_dt_sta_indi_pane_g1

0xf3e3,	// (0x00043536) dt_sta_signal_pane_g1

0xf3eb,	// (0x0004353e) dt_sta_signal_pane_g2

0x0001,

0xfe84,	// (0x00043fd7) dt_sta_signal_pane_g

0x9a2d,	// (0x0003db80) dt_sta_battery_pane_g1

0x9a36,	// (0x0003db89) dt_sta_battery_pane_t1

0x32bc,	// (0x0003740f) bg_dt_sta_control_pane_g1

0x0d18,	// (0x00034e6b) fep_china_uni_eep_pane

0x0d20,	// (0x00034e73) fep_china_uni_entry_pane_ParamLimits

0x0d30,	// (0x00034e83) popup_fep_china_uni_window_g1_ParamLimits

0x0d40,	// (0x00034e93) popup_fep_china_uni_window_g2_ParamLimits

0x0d40,	// (0x00034e93) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x00043850) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x00043850) popup_fep_china_uni_window_g

0x9a45,	// (0x0003db98) fep_china_uni_eep_pane_g1

0x9a4d,	// (0x0003dba0) fep_china_uni_eep_pane_t1

0x986a,	// (0x0003d9bd) aid_touch_area_size_smil_player

0x142b,	// (0x0003557e) lc0_clock_pane

0x1464,	// (0x000355b7) status_pane_g5_ParamLimits

0x1464,	// (0x000355b7) status_pane_g5

0xbac2,	// (0x0003fc15) popup_keymap_window

0x1444,	// (0x00035597) status_icon_pane

0xf14c,	// (0x0004329f) cell_ai5_widget_pane_g3_ParamLimits

0xf166,	// (0x000432b9) cell_ai5_widget_pane_g4_ParamLimits

0xf176,	// (0x000432c9) cell_ai5_widget_pane_g5_ParamLimits

0xf19e,	// (0x000432f1) cell_ai5_widget_pane_g8_ParamLimits

0xf19e,	// (0x000432f1) cell_ai5_widget_pane_g8

0xf1b2,	// (0x00043305) cell_ai5_widget_pane_g9_ParamLimits

0xf1b2,	// (0x00043305) cell_ai5_widget_pane_g9

0xf1c6,	// (0x00043319) cell_ai5_widget_pane_g10_ParamLimits

0xf1c6,	// (0x00043319) cell_ai5_widget_pane_g10

0x9a5c,	// (0x0003dbaf) status_icon_pane_g1

0x00df,	// (0x00034232) bg_popup_sub_pane_cp13

0x9a64,	// (0x0003dbb7) popup_keymap_window_t1

0x4cb6,	// (0x00038e09) control_pane_g6_ParamLimits

0x4cb6,	// (0x00038e09) control_pane_g6

0x4ca9,	// (0x00038dfc) control_pane_g7_ParamLimits

0x4ca9,	// (0x00038dfc) control_pane_g7

0x4c9c,	// (0x00038def) control_pane_g8_ParamLimits

0x4c9c,	// (0x00038def) control_pane_g8

0xf345,	// (0x00043498) dt_sta_controll_pane_ParamLimits

0xf352,	// (0x000434a5) dt_sta_indi_pane_ParamLimits

0xf363,	// (0x000434b6) dt_sta_title_pane_ParamLimits

0x06ee,	// (0x00034841) aid_size_touch_scroll_bar_cale

0xb23d,	// (0x0003f390) popup_discreet_window_ParamLimits

0xb23d,	// (0x0003f390) popup_discreet_window

0xb2a1,	// (0x0003f3f4) popup_sk_window

0x1afc,	// (0x00035c4f) bg_popup_sub_pane_cp28_ParamLimits

0x1afc,	// (0x00035c4f) bg_popup_sub_pane_cp28

0x9a72,	// (0x0003dbc5) popup_discreet_window_g1_ParamLimits

0x9a72,	// (0x0003dbc5) popup_discreet_window_g1

0x9a92,	// (0x0003dbe5) popup_discreet_window_t1_ParamLimits

0x9a92,	// (0x0003dbe5) popup_discreet_window_t1

0x9ab0,	// (0x0003dc03) popup_discreet_window_t2_ParamLimits

0x9ab0,	// (0x0003dc03) popup_discreet_window_t2

0x0002,

0xfe89,	// (0x00043fdc) popup_discreet_window_t_ParamLimits

0xfe89,	// (0x00043fdc) popup_discreet_window_t

0xd8cd,	// (0x00041a20) popup_sk_window_g1

0xd8d6,	// (0x00041a29) popup_sk_window_g2

0x0001,

0xfe90,	// (0x00043fe3) popup_sk_window_g

0xd8df,	// (0x00041a32) popup_sk_window_t1

0xd8ed,	// (0x00041a40) popup_sk_window_t1_copy1

0xf138,	// (0x0004328b) cell_ai5_widget_pane_g2_ParamLimits

0xf2a2,	// (0x000433f5) cell_ai5_widget_pane_t9_ParamLimits

0xf2a2,	// (0x000433f5) cell_ai5_widget_pane_t9

0x00df,	// (0x00034232) main_fep_fshwr2_pane

0xd8fb,	// (0x00041a4e) aid_fshwr2_btn_pane

0xd90b,	// (0x00041a5e) aid_fshwr2_syb_pane

0xd91f,	// (0x00041a72) aid_fshwr2_txt_pane

0xd92f,	// (0x00041a82) fshwr2_func_candi_pane

0xd947,	// (0x00041a9a) fshwr2_hwr_syb_pane

0xd959,	// (0x00041aac) fshwr2_icf_pane

0xb166,	// (0x0003f2b9) fshwr2_icf_bg_pane

0xd981,	// (0x00041ad4) fshwr2_icf_pane_t1_ParamLimits

0xd981,	// (0x00041ad4) fshwr2_icf_pane_t1

0x0cb6,	// (0x00034e09) fshwr2_func_candi_pane_g1

0xf3f3,	// (0x00043546) fshwr2_func_candi_row_pane_ParamLimits

0xf3f3,	// (0x00043546) fshwr2_func_candi_row_pane

0xd999,	// (0x00041aec) cell_fshwr2_syb_pane_ParamLimits

0xd999,	// (0x00041aec) cell_fshwr2_syb_pane

0xd9b8,	// (0x00041b0b) fshwr2_hwr_syb_pane_g1_ParamLimits

0xd9b8,	// (0x00041b0b) fshwr2_hwr_syb_pane_g1

0xb166,	// (0x0003f2b9) bg_popup_call_pane_cp01

0xd9c6,	// (0x00041b19) fshwr2_func_candi_cell_pane_ParamLimits

0xd9c6,	// (0x00041b19) fshwr2_func_candi_cell_pane

0x2122,	// (0x00036275) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2122,	// (0x00036275) fshwr2_func_candi_cell_bg_pane

0xda05,	// (0x00041b58) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xda05,	// (0x00041b58) fshwr2_func_candi_cell_pane_g1

0xda30,	// (0x00041b83) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xda30,	// (0x00041b83) fshwr2_func_candi_cell_pane_t1

0xb166,	// (0x0003f2b9) bg_button_pane_cp08

0x136b,	// (0x000354be) cell_fshwr2_syb_bg_pane

0xda43,	// (0x00041b96) cell_fshwr2_syb_bg_pane_g1

0xda57,	// (0x00041baa) cell_fshwr2_syb_bg_pane_t1

0x07a9,	// (0x000348fc) main_tmo_pane

0x5114,	// (0x00039267) uni_indicator_pane_g1_ParamLimits

0x5128,	// (0x0003927b) uni_indicator_pane_g2_ParamLimits

0x513d,	// (0x00039290) uni_indicator_pane_g3_ParamLimits

0x24fb,	// (0x0003664e) uni_indicator_pane_g4_ParamLimits

0x24fb,	// (0x0003664e) uni_indicator_pane_g4

0x250f,	// (0x00036662) uni_indicator_pane_g5_ParamLimits

0x250f,	// (0x00036662) uni_indicator_pane_g5

0x250f,	// (0x00036662) uni_indicator_pane_g6_ParamLimits

0x250f,	// (0x00036662) uni_indicator_pane_g6

0xf8fa,	// (0x00043a4d) uni_indicator_pane_g_ParamLimits

0xcb4e,	// (0x00040ca1) popup_tmo_note_window_ParamLimits

0xcb4e,	// (0x00040ca1) popup_tmo_note_window

0xcd1d,	// (0x00040e70) fshwr2_bg_pane

0xda21,	// (0x00041b74) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xda21,	// (0x00041b74) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe95,	// (0x00043fe8) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe95,	// (0x00043fe8) fshwr2_func_candi_cell_pane_g

0xc5de,	// (0x00040731) bg_popup_window_pane_cp01

0xda6d,	// (0x00041bc0) bg_popup_window_pane_g1_cp01

0x9b02,	// (0x0003dc55) bg_popup_window_pane_cp22_ParamLimits

0x9b02,	// (0x0003dc55) bg_popup_window_pane_cp22

0x9b10,	// (0x0003dc63) listscroll_tmo_link_pane_ParamLimits

0x9b10,	// (0x0003dc63) listscroll_tmo_link_pane

0x9b50,	// (0x0003dca3) popup_tmo_note_window_g1_ParamLimits

0x9b50,	// (0x0003dca3) popup_tmo_note_window_g1

0x9b5d,	// (0x0003dcb0) tmo_note_info_pane_ParamLimits

0x9b5d,	// (0x0003dcb0) tmo_note_info_pane

0xf416,	// (0x00043569) list_tmo_note_info_pane_g1_ParamLimits

0xf416,	// (0x00043569) list_tmo_note_info_pane_g1

0x9b77,	// (0x0003dcca) list_tmo_note_info_pane_g2_ParamLimits

0x9b77,	// (0x0003dcca) list_tmo_note_info_pane_g2

0x0001,

0xfe9a,	// (0x00043fed) list_tmo_note_info_pane_g_ParamLimits

0xfe9a,	// (0x00043fed) list_tmo_note_info_pane_g

0x9b93,	// (0x0003dce6) list_tmo_note_info_text_pane_ParamLimits

0x9b93,	// (0x0003dce6) list_tmo_note_info_text_pane

0x9bd5,	// (0x0003dd28) list_tmo_link_pane

0x9be2,	// (0x0003dd35) scroll_pane_cp20

0x9bef,	// (0x0003dd42) list_single_tmo_link_pane_ParamLimits

0x9bef,	// (0x0003dd42) list_single_tmo_link_pane

0x9bff,	// (0x0003dd52) list_single_tmo_link_pane_t1

0x9c0d,	// (0x0003dd60) list_tmo_note_info_text_pane_t1_ParamLimits

0x9c0d,	// (0x0003dd60) list_tmo_note_info_text_pane_t1

0x085c,	// (0x000349af) aid_size_touch_scroll_bar_cp01_ParamLimits

0x085c,	// (0x000349af) aid_size_touch_scroll_bar_cp01

0xe330,	// (0x00042483) aid_size_touch_slider_marker

0xb28d,	// (0x0003f3e0) popup_settings_window_ParamLimits

0xb28d,	// (0x0003f3e0) popup_settings_window

0xe4ee,	// (0x00042641) popup_candi_list_indi_window

0x138d,	// (0x000354e0) aid_touch_navi_pane_ParamLimits

0xcc79,	// (0x00040dcc) rs_clock_indi_pane

0xcc82,	// (0x00040dd5) sctrl_sk_bottom_pane_ParamLimits

0xcc93,	// (0x00040de6) sctrl_sk_top_pane_ParamLimits

0xd1fa,	// (0x0004134d) popup_fep_tooltip_window

0x98b8,	// (0x0003da0b) aid_size_cell_widget_grid_ParamLimits

0xf124,	// (0x00043277) cell_ai5_widget_pane_g1_ParamLimits

0xf124,	// (0x00043277) cell_ai5_widget_pane_g1

0xf186,	// (0x000432d9) cell_ai5_widget_pane_g6_ParamLimits

0xf192,	// (0x000432e5) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0e,	// (0x00043f61) cell_ai5_widget_pane_g_ParamLimits

0xfe0e,	// (0x00043f61) cell_ai5_widget_pane_g

0xf2d1,	// (0x00043424) cell_ai5_widget_pane_t10_ParamLimits

0xf2d1,	// (0x00043424) cell_ai5_widget_pane_t10

0xf313,	// (0x00043466) grid_ai5_widget_pane_ParamLimits

0x999c,	// (0x0003daef) cell_contacts_ai5_widget_pane_ParamLimits

0x999c,	// (0x0003daef) cell_contacts_ai5_widget_pane

0x9ac5,	// (0x0003dc18) popup_discreet_window_t3_ParamLimits

0x9ac5,	// (0x0003dc18) popup_discreet_window_t3

0xd96f,	// (0x00041ac2) popup_fshwr2_char_preview_window_ParamLimits

0xd96f,	// (0x00041ac2) popup_fshwr2_char_preview_window

0xf42d,	// (0x00043580) tmo_note_info_pane_t1

0xf442,	// (0x00043595) tmo_note_info_pane_t2

0xf457,	// (0x000435aa) tmo_note_info_pane_t3

0x9bb1,	// (0x0003dd04) tmo_note_info_pane_t4

0x9bc3,	// (0x0003dd16) tmo_note_info_pane_t5

0x0004,

0xfe9f,	// (0x00043ff2) tmo_note_info_pane_t

0x9bd5,	// (0x0003dd28) list_tmo_link_pane_ParamLimits

0x9be2,	// (0x0003dd35) scroll_pane_cp20_ParamLimits

0xb166,	// (0x0003f2b9) bg_popup_fep_char_preview_window_cp01

0x9c26,	// (0x0003dd79) popup_fshwr2_char_preview_window_t1

0x9c34,	// (0x0003dd87) popup_candi_list_indi_window_g1

0x9c3d,	// (0x0003dd90) bg_cell_contacts_ai5_widget_pane

0x9c49,	// (0x0003dd9c) cell_contacts_ai5_widget_pane_g1

0x9c5e,	// (0x0003ddb1) cell_contacts_ai5_widget_pane_g2

0x9c6a,	// (0x0003ddbd) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeaa,	// (0x00043ffd) cell_contacts_ai5_widget_pane_g

0x9c76,	// (0x0003ddc9) cell_contacts_ai5_widget_pane_t1

0x07a9,	// (0x000348fc) highlight_cell_shortcut_ai5_widget_pane_cp01

0x9ceb,	// (0x0003de3e) settings_container_pane

0x114f,	// (0x000352a2) listscroll_set_pane_copy1

0x2c08,	// (0x00036d5b) scroll_pane_cp121_copy1

0x9cf7,	// (0x0003de4a) set_content_pane_copy1

0x9cff,	// (0x0003de52) aid_height_set_list_copy1_ParamLimits

0x9cff,	// (0x0003de52) aid_height_set_list_copy1

0x26b4,	// (0x00036807) aid_size_parent_copy1_ParamLimits

0x26b4,	// (0x00036807) aid_size_parent_copy1

0x9d0b,	// (0x0003de5e) button_value_adjust_pane_cp6_copy1_ParamLimits

0x9d0b,	// (0x0003de5e) button_value_adjust_pane_cp6_copy1

0x136b,	// (0x000354be) list_highlight_pane_cp2_copy1_ParamLimits

0x136b,	// (0x000354be) list_highlight_pane_cp2_copy1

0x9d1f,	// (0x0003de72) list_set_pane_copy1_ParamLimits

0x9d1f,	// (0x0003de72) list_set_pane_copy1

0x9c88,	// (0x0003dddb) main_pane_set_t1_copy1_ParamLimits

0x9c88,	// (0x0003dddb) main_pane_set_t1_copy1

0x9cc2,	// (0x0003de15) main_pane_set_t2_copy1_ParamLimits

0x9cc2,	// (0x0003de15) main_pane_set_t2_copy1

0x9dad,	// (0x0003df00) main_pane_set_t3_copy1

0x9dbb,	// (0x0003df0e) main_pane_set_t4_copy1

0x9cdf,	// (0x0003de32) set_content_pane_g1_copy1_ParamLimits

0x9cdf,	// (0x0003de32) set_content_pane_g1_copy1

0x9dc9,	// (0x0003df1c) setting_code_pane_copy1

0x9dd1,	// (0x0003df24) setting_slider_graphic_pane_copy1

0x9dd1,	// (0x0003df24) setting_slider_pane_copy1

0x9dd1,	// (0x0003df24) setting_text_pane_copy1

0x9dd1,	// (0x0003df24) setting_volume_pane_copy1

0x9dd9,	// (0x0003df2c) settings_code_pane_cp2_copy1

0x9de1,	// (0x0003df34) settings_code_pane_cp_copy1_ParamLimits

0x9de1,	// (0x0003df34) settings_code_pane_cp_copy1

0xda76,	// (0x00041bc9) volume_set_pane_copy1

0x9df5,	// (0x0003df48) volume_set_pane_g10_copy1

0x9dfd,	// (0x0003df50) volume_set_pane_g1_copy1

0x9e05,	// (0x0003df58) volume_set_pane_g2_copy1

0x9e0d,	// (0x0003df60) volume_set_pane_g3_copy1

0x9e15,	// (0x0003df68) volume_set_pane_g4_copy1

0x9e1d,	// (0x0003df70) volume_set_pane_g5_copy1

0x9e25,	// (0x0003df78) volume_set_pane_g6_copy1

0x9e2d,	// (0x0003df80) volume_set_pane_g7_copy1

0x9e35,	// (0x0003df88) volume_set_pane_g8_copy1

0x9e3d,	// (0x0003df90) volume_set_pane_g9_copy1

0x01b9,	// (0x0003430c) bg_set_opt_pane_cp_copy1_ParamLimits

0x01b9,	// (0x0003430c) bg_set_opt_pane_cp_copy1

0xda7e,	// (0x00041bd1) setting_slider_pane_t1_copy1_ParamLimits

0xda7e,	// (0x00041bd1) setting_slider_pane_t1_copy1

0xda95,	// (0x00041be8) setting_slider_pane_t2_copy1_ParamLimits

0xda95,	// (0x00041be8) setting_slider_pane_t2_copy1

0xdaae,	// (0x00041c01) setting_slider_pane_t3_copy1_ParamLimits

0xdaae,	// (0x00041c01) setting_slider_pane_t3_copy1

0xb3bd,	// (0x0003f510) slider_set_pane_copy1_ParamLimits

0xb3bd,	// (0x0003f510) slider_set_pane_copy1

0x07f8,	// (0x0003494b) set_opt_bg_pane_g1_copy2

0x0800,	// (0x00034953) set_opt_bg_pane_g2_copy2

0x9e45,	// (0x0003df98) set_opt_bg_pane_g3_copy2

0x0810,	// (0x00034963) set_opt_bg_pane_g4_copy2

0x0818,	// (0x0003496b) set_opt_bg_pane_g5_copy2

0x0820,	// (0x00034973) set_opt_bg_pane_g6_copy2

0x9e4d,	// (0x0003dfa0) set_opt_bg_pane_g7_copy2

0x9e55,	// (0x0003dfa8) set_opt_bg_pane_g8_copy2

0x9e5d,	// (0x0003dfb0) set_opt_bg_pane_g9_copy2

0xc0e5,	// (0x00040238) aid_size_touch_slider_mark_copy1_ParamLimits

0xc0e5,	// (0x00040238) aid_size_touch_slider_mark_copy1

0x26c6,	// (0x00036819) slider_set_pane_g1_copy1

0x26e8,	// (0x0003683b) slider_set_pane_g2_copy1

0xc105,	// (0x00040258) slider_set_pane_g3_copy1_ParamLimits

0xc105,	// (0x00040258) slider_set_pane_g3_copy1

0xc119,	// (0x0004026c) slider_set_pane_g4_copy1_ParamLimits

0xc119,	// (0x0004026c) slider_set_pane_g4_copy1

0xc131,	// (0x00040284) slider_set_pane_g5_copy1_ParamLimits

0xc131,	// (0x00040284) slider_set_pane_g5_copy1

0xc105,	// (0x00040258) slider_set_pane_g6_copy1_ParamLimits

0xc105,	// (0x00040258) slider_set_pane_g6_copy1

0xdac5,	// (0x00041c18) slider_set_pane_g7_copy1_ParamLimits

0xdac5,	// (0x00041c18) slider_set_pane_g7_copy1

0x016b,	// (0x000342be) bg_set_opt_pane_cp2_copy1

0x01cf,	// (0x00034322) setting_slider_graphic_pane_g1_copy1

0xdadb,	// (0x00041c2e) setting_slider_graphic_pane_t1_copy1

0xdaea,	// (0x00041c3d) setting_slider_graphic_pane_t2_copy1

0xdaf9,	// (0x00041c4c) slider_set_pane_cp_copy1

0x9e6d,	// (0x0003dfc0) input_focus_pane_cp1_copy1

0x9e76,	// (0x0003dfc9) list_set_text_pane_copy1

0x9e7e,	// (0x0003dfd1) setting_text_pane_g1_copy1

0xec00,	// (0x00042d53) set_text_pane_t1_copy1

0x9e6d,	// (0x0003dfc0) input_focus_pane_cp2_copy1

0x9e7e,	// (0x0003dfd1) setting_code_pane_g1_copy1

0x9e87,	// (0x0003dfda) setting_code_pane_t1_copy1

0x965c,	// (0x0003d7af) list_set_graphic_pane_copy1

0x016b,	// (0x000342be) bg_set_opt_pane_cp4_copy1

0x0eab,	// (0x00034ffe) list_set_graphic_pane_g1_copy1_ParamLimits

0x0eab,	// (0x00034ffe) list_set_graphic_pane_g1_copy1

0x9e95,	// (0x0003dfe8) list_set_graphic_pane_g2_copy1

0x0ec3,	// (0x00035016) list_set_graphic_pane_t1_copy1_ParamLimits

0x0ec3,	// (0x00035016) list_set_graphic_pane_t1_copy1

0x32bc,	// (0x0003740f) rs_clock_indi_pane_g1

0x9e9d,	// (0x0003dff0) rs_clock_indi_pane_t1

0x9eab,	// (0x0003dffe) rs_indi_pane

0x9eb3,	// (0x0003e006) rs_indi_pane_g1

0x9ebc,	// (0x0003e00f) rs_indi_pane_g2

0x9c34,	// (0x0003dd87) rs_indi_pane_g3

0x0002,

0xfeb1,	// (0x00044004) rs_indi_pane_g

0x114f,	// (0x000352a2) bg_popup_preview_window_pane_cp03

0x9ec5,	// (0x0003e018) popup_fep_tooltip_window_t1

0x3e8b,	// (0x00037fde) popup_note2_window_g2_ParamLimits

0x3e8b,	// (0x00037fde) popup_note2_window_g2

0x0001,

0xfc45,	// (0x00043d98) popup_note2_window_g_ParamLimits

0xfc45,	// (0x00043d98) popup_note2_window_g

0x4306,	// (0x00038459) bg_popup_sub_pane_cp11_ParamLimits

0x4313,	// (0x00038466) cell_ai3_links_pane_g1_ParamLimits

0x432a,	// (0x0003847d) cell_ai3_links_pane_t1

0xec00,	// (0x00042d53) set_text_pane_t1_copy1_ParamLimits

0x106f,	// (0x000351c2) cell_graphic_popup_pane_cp2_ParamLimits

0x106f,	// (0x000351c2) cell_graphic_popup_pane_cp2

0x9ed3,	// (0x0003e026) cell_graphic_popup_pane_g1_cp2

0x059d,	// (0x000346f0) cell_graphic_popup_pane_g2_cp2

0x9edb,	// (0x0003e02e) cell_graphic_popup_pane_g3_cp2

0x9ee3,	// (0x0003e036) cell_graphic_popup_pane_t2_cp2

0x05ae,	// (0x00034701) grid_highlight_pane_cp3_cp2

0x0aef,	// (0x00034c42) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x07a9,	// (0x000348fc) main_tmo_pane_ParamLimits

0xcb46,	// (0x00040c99) popup_tmo_big_image_note_window

0x98f7,	// (0x0003da4a) cell_ai5_widget_list_pane

0xf11b,	// (0x0004326e) cell_ai5_widget_lrg_icon_pane

0xf42d,	// (0x00043580) tmo_note_info_pane_t1_ParamLimits

0xf442,	// (0x00043595) tmo_note_info_pane_t2_ParamLimits

0xf457,	// (0x000435aa) tmo_note_info_pane_t3_ParamLimits

0x9bb1,	// (0x0003dd04) tmo_note_info_pane_t4_ParamLimits

0x9bc3,	// (0x0003dd16) tmo_note_info_pane_t5_ParamLimits

0xfe9f,	// (0x00043ff2) tmo_note_info_pane_t_ParamLimits

0x9ceb,	// (0x0003de3e) settings_container_pane_ParamLimits

0x9e65,	// (0x0003dfb8) indicator_popup_pane_cp5

0x9e65,	// (0x0003dfb8) indicator_popup_pane_cp6

0x965c,	// (0x0003d7af) list_set_graphic_pane_copy1_ParamLimits

0x00df,	// (0x00034232) bg_popup_window_pane_cp23

0x9ef1,	// (0x0003e044) popup_tmo_big_image_note_window_g1

0x9efa,	// (0x0003e04d) popup_tmo_big_image_note_window_t1

0x9f08,	// (0x0003e05b) popup_tmo_big_image_note_window_t2

0x9f16,	// (0x0003e069) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb8,	// (0x0004400b) popup_tmo_big_image_note_window_t

0x32bc,	// (0x0003740f) cell_ai5_widget_lrg_icon_pane_g1

0x9f24,	// (0x0003e077) cell_ai5_widget_lrg_icon_pane_t1

0xf46c,	// (0x000435bf) cell_ai5_widget_list_row_pane_ParamLimits

0xf46c,	// (0x000435bf) cell_ai5_widget_list_row_pane

0xf483,	// (0x000435d6) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf483,	// (0x000435d6) cell_ai5_widget_list_row_pane_g1

0xf490,	// (0x000435e3) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf490,	// (0x000435e3) cell_ai5_widget_list_row_pane_t1

0xf4be,	// (0x00043611) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf4be,	// (0x00043611) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfebf,	// (0x00044012) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfebf,	// (0x00044012) cell_ai5_widget_list_row_pane_t

0xb166,	// (0x0003f2b9) main_fep_vtchi_ss_pane

0x9f3f,	// (0x0003e092) popup_fep_char_pre_window

0x9f47,	// (0x0003e09a) popup_fep_ituss_window

0xf516,	// (0x00043669) popup_fep_vkbss_window

0x9f82,	// (0x0003e0d5) grid_vkbss_keypad_pane_ParamLimits

0x9f82,	// (0x0003e0d5) grid_vkbss_keypad_pane

0x9f92,	// (0x0003e0e5) ituss_keypad_pane

0xdb09,	// (0x00041c5c) aid_vkbss_key_offset_ParamLimits

0xdb09,	// (0x00041c5c) aid_vkbss_key_offset

0xdb15,	// (0x00041c68) cell_vkbss_key_pane_ParamLimits

0xdb15,	// (0x00041c68) cell_vkbss_key_pane

0x9f9e,	// (0x0003e0f1) bg_cell_vkbss_key_g1_ParamLimits

0x9f9e,	// (0x0003e0f1) bg_cell_vkbss_key_g1

0x9faa,	// (0x0003e0fd) cell_vkbss_key_3p_pane_ParamLimits

0x9faa,	// (0x0003e0fd) cell_vkbss_key_3p_pane

0x9fe0,	// (0x0003e133) cell_vkbss_key_g1_ParamLimits

0x9fe0,	// (0x0003e133) cell_vkbss_key_g1

0xa016,	// (0x0003e169) cell_vkbss_key_t1_ParamLimits

0xa016,	// (0x0003e169) cell_vkbss_key_t1

0xdb49,	// (0x00041c9c) cell_ituss_key_pane_ParamLimits

0xdb49,	// (0x00041c9c) cell_ituss_key_pane

0xa086,	// (0x0003e1d9) bg_cell_ituss_key_g1_ParamLimits

0xa086,	// (0x0003e1d9) bg_cell_ituss_key_g1

0xa092,	// (0x0003e1e5) cell_ituss_key_pane_g1_ParamLimits

0xa092,	// (0x0003e1e5) cell_ituss_key_pane_g1

0xdb5a,	// (0x00041cad) cell_ituss_key_pane_g2_ParamLimits

0xdb5a,	// (0x00041cad) cell_ituss_key_pane_g2

0x0005,

0xfec6,	// (0x00044019) cell_ituss_key_pane_g_ParamLimits

0xfec6,	// (0x00044019) cell_ituss_key_pane_g

0xdbde,	// (0x00041d31) cell_ituss_key_t1_ParamLimits

0xdbde,	// (0x00041d31) cell_ituss_key_t1

0xdc14,	// (0x00041d67) cell_ituss_key_t2_ParamLimits

0xdc14,	// (0x00041d67) cell_ituss_key_t2

0xdc46,	// (0x00041d99) cell_ituss_key_t3_ParamLimits

0xdc46,	// (0x00041d99) cell_ituss_key_t3

0xdc77,	// (0x00041dca) cell_ituss_key_t4_ParamLimits

0xdc77,	// (0x00041dca) cell_ituss_key_t4

0x0004,

0xfed3,	// (0x00044026) cell_ituss_key_t_ParamLimits

0xfed3,	// (0x00044026) cell_ituss_key_t

0xa0c8,	// (0x0003e21b) cell_vkbss_key_3p_pane_g1

0xa0c0,	// (0x0003e213) cell_vkbss_key_3p_pane_g2

0xa0b8,	// (0x0003e20b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfede,	// (0x00044031) cell_vkbss_key_3p_pane_g

0x114f,	// (0x000352a2) bg_popup_fep_char_preview_window_cp02

0xa0d0,	// (0x0003e223) popup_fep_char_pre_window_t1

0xf108,	// (0x0004325b) main_ai5_sk_pane

0x9c3d,	// (0x0003dd90) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9c49,	// (0x0003dd9c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9c5e,	// (0x0003ddb1) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9c6a,	// (0x0003ddbd) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeaa,	// (0x00043ffd) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9c76,	// (0x0003ddc9) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x07a9,	// (0x000348fc) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x0034,	// (0x00034187) main_ai5_sk_pane_g1

0x1946,	// (0x00035a99) popup_query_code_window_g1

0xf501,	// (0x00043654) popup_fep_vkb_icf_pane

0x9f59,	// (0x0003e0ac) popup_fep_vtchi_icf_pane

0xa0de,	// (0x0003e231) bg_icf_pane

0xa0de,	// (0x0003e231) list_vkb_icf_pane

0xa0ea,	// (0x0003e23d) bg_icf_pane_cp01

0xa0fd,	// (0x0003e250) vtchi_icf_list_pane

0x007d,	// (0x000341d0) list_vkb_icf_pane_t1_ParamLimits

0x007d,	// (0x000341d0) list_vkb_icf_pane_t1

0xa10d,	// (0x0003e260) vtchi_icf_list_pane_t1_ParamLimits

0xa10d,	// (0x0003e260) vtchi_icf_list_pane_t1

0x9f47,	// (0x0003e09a) popup_fep_ituss_window_ParamLimits

0x9f59,	// (0x0003e0ac) popup_fep_vtchi_icf_pane_ParamLimits

0x9f92,	// (0x0003e0e5) ituss_keypad_pane_ParamLimits

0xdb01,	// (0x00041c54) ituss_sks_pane

0xa0de,	// (0x0003e231) bg_icf_pane_ParamLimits

0xf4e6,	// (0x00043639) icf_edit_indi_pane_ParamLimits

0xf4e6,	// (0x00043639) icf_edit_indi_pane

0xa0de,	// (0x0003e231) list_vkb_icf_pane_ParamLimits

0xa0ea,	// (0x0003e23d) bg_icf_pane_cp01_ParamLimits

0x9f32,	// (0x0003e085) icf_edit_indi_pane_cp01_ParamLimits

0x9f32,	// (0x0003e085) icf_edit_indi_pane_cp01

0xa105,	// (0x0003e258) vtchi_query_pane

0x9843,	// (0x0003d996) icf_edit_indi_pane_g1_ParamLimits

0x9843,	// (0x0003d996) icf_edit_indi_pane_g1

0x00a7,	// (0x000341fa) icf_edit_indi_pane_g2_ParamLimits

0x00a7,	// (0x000341fa) icf_edit_indi_pane_g2

0x0001,

0xff09,	// (0x0004405c) icf_edit_indi_pane_g_ParamLimits

0xff09,	// (0x0004405c) icf_edit_indi_pane_g

0x00b9,	// (0x0003420c) icf_edit_indi_pane_t1

0xa125,	// (0x0003e278) bg_input_focus_pane_cp042

0xa12e,	// (0x0003e281) vtchi_button_pane

0xa137,	// (0x0003e28a) vtchi_query_pane_t1

0xa145,	// (0x0003e298) vtchi_query_pane_t2

0xa153,	// (0x0003e2a6) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x0004404b) vtchi_query_pane_t

0xb166,	// (0x0003f2b9) bg_button_pane_cp13

0xa161,	// (0x0003e2b4) vtchi_button_pane_g1

0xdcba,	// (0x00041e0d) ituss_sks_pane_g1

0xdcc3,	// (0x00041e16) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x00044052) ituss_sks_pane_g

0xa177,	// (0x0003e2ca) ituss_sks_pane_t1

0xa169,	// (0x0003e2bc) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x00044057) ituss_sks_pane_t

0x2ee9,	// (0x0003703c) indicator_nsta_pane_cp_g1

0x2ef2,	// (0x00037045) indicator_nsta_pane_cp_g2

0x2efa,	// (0x0003704d) indicator_nsta_pane_cp_g3

0x2f02,	// (0x00037055) indicator_nsta_pane_cp_g4

0x2f0a,	// (0x0003705d) indicator_nsta_pane_cp_g5

0x2f12,	// (0x00037065) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x00043bd6) indicator_nsta_pane_cp_g

0xef51,	// (0x000430a4) cell_graphic2_pane_t2_ParamLimits

0xef51,	// (0x000430a4) cell_graphic2_pane_t2

0x0001,

0xfd95,	// (0x00043ee8) cell_graphic2_pane_t_ParamLimits

0xfd95,	// (0x00043ee8) cell_graphic2_pane_t

0xef7d,	// (0x000430d0) cell_graphic2_control_pane_t1

0x4b35,	// (0x00038c88) signal_pane_g3_ParamLimits

0x4b35,	// (0x00038c88) signal_pane_g3

0x4b46,	// (0x00038c99) signal_pane_g4_ParamLimits

0x4b46,	// (0x00038c99) signal_pane_g4

0xf4d0,	// (0x00043623) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf4d0,	// (0x00043623) cell_ai5_widget_list_row_pane_t3

0xa0a6,	// (0x0003e1f9) cell_ituss_key_pane_t1_ParamLimits

0xa0a6,	// (0x0003e1f9) cell_ituss_key_pane_t1

0x1614,	// (0x00035767) form_field_data_wide_pane_vc_t2_ParamLimits

0x1614,	// (0x00035767) form_field_data_wide_pane_vc_t2

0x1626,	// (0x00035779) form_field_data_wide_pane_vc_t3_ParamLimits

0x1626,	// (0x00035779) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e2,	// (0x00043935) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e2,	// (0x00043935) form_field_data_wide_pane_vc_t

0x2c4d,	// (0x00036da0) form_field_slider_wide_pane_vc_t3_ParamLimits

0x2c4d,	// (0x00036da0) form_field_slider_wide_pane_vc_t3

0x2d0b,	// (0x00036e5e) form_field_popup_wide_pane_vc_t2_ParamLimits

0x2d0b,	// (0x00036e5e) form_field_popup_wide_pane_vc_t2

0x2d20,	// (0x00036e73) form_field_popup_wide_pane_vc_t3_ParamLimits

0x2d20,	// (0x00036e73) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x00043bc5) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x00043bc5) form_field_popup_wide_pane_vc_t

0xd8fb,	// (0x00041a4e) aid_fshwr2_btn_pane_ParamLimits

0xd90b,	// (0x00041a5e) aid_fshwr2_syb_pane_ParamLimits

0xd91f,	// (0x00041a72) aid_fshwr2_txt_pane_ParamLimits

0xcd1d,	// (0x00040e70) fshwr2_bg_pane_ParamLimits

0xd92f,	// (0x00041a82) fshwr2_func_candi_pane_ParamLimits

0xd947,	// (0x00041a9a) fshwr2_hwr_syb_pane_ParamLimits

0xd959,	// (0x00041aac) fshwr2_icf_pane_ParamLimits

0xe8e2,	// (0x00042a35) list_double_graphic_pane_vc_g4_ParamLimits

0xe8e2,	// (0x00042a35) list_double_graphic_pane_vc_g4

0xdb7a,	// (0x00041ccd) cell_ituss_key_pane_g3_ParamLimits

0xdb7a,	// (0x00041ccd) cell_ituss_key_pane_g3

0xdca8,	// (0x00041dfb) cell_ituss_key_t5_ParamLimits

0xdca8,	// (0x00041dfb) cell_ituss_key_t5

0xf516,	// (0x00043669) popup_fep_vkbss_window_ParamLimits

0xf112,	// (0x00043265) aid_cell_ai5_quarter

0x00b9,	// (0x0003420c) icf_edit_indi_pane_t1_ParamLimits

0x03aa,	// (0x000344fd) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x03aa,	// (0x000344fd) aid_tch_indicator_popup_pane_cp2

0x03bd,	// (0x00034510) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x03bd,	// (0x00034510) aid_tch_query_popup_data_pane_cp2

0x18ee,	// (0x00035a41) aid_tch_query_popup_pane_ParamLimits

0x18ee,	// (0x00035a41) aid_tch_query_popup_pane

0x18ee,	// (0x00035a41) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x18ee,	// (0x00035a41) aid_tch_query_popup_data_pane_cp1

0x136b,	// (0x000354be) cell_fshwr2_syb_bg_pane_ParamLimits

0xda43,	// (0x00041b96) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xda57,	// (0x00041baa) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf501,	// (0x00043654) popup_fep_vkb_icf_pane_ParamLimits

0xd76d,	// (0x000418c0) bg_popup_fep_char_preview_window_g10

0xf1da,	// (0x0004332d) cell_ai5_widget_pane_g11_ParamLimits

0xf1da,	// (0x0004332d) cell_ai5_widget_pane_g11

0xf1e6,	// (0x00043339) cell_ai5_widget_pane_g12_ParamLimits

0xf1e6,	// (0x00043339) cell_ai5_widget_pane_g12

0xf1f2,	// (0x00043345) cell_ai5_widget_pane_g13_ParamLimits

0xf1f2,	// (0x00043345) cell_ai5_widget_pane_g13

0xf2ef,	// (0x00043442) cell_ai5_widget_pane_t11_ParamLimits

0xf2ef,	// (0x00043442) cell_ai5_widget_pane_t11

0xf301,	// (0x00043454) cell_ai5_widget_pane_t12_ParamLimits

0xf301,	// (0x00043454) cell_ai5_widget_pane_t12

0xdb86,	// (0x00041cd9) cell_ituss_key_pane_g4_ParamLimits

0xdb86,	// (0x00041cd9) cell_ituss_key_pane_g4

0xdba2,	// (0x00041cf5) cell_ituss_key_pane_g5_ParamLimits

0xdba2,	// (0x00041cf5) cell_ituss_key_pane_g5

0xdbbe,	// (0x00041d11) cell_ituss_key_pane_g6_ParamLimits

0xdbbe,	// (0x00041d11) cell_ituss_key_pane_g6

0x1534,	// (0x00035687) bg_icf_pane_g1

0x003d,	// (0x00034190) bg_icf_pane_g2

0x0045,	// (0x00034198) bg_icf_pane_g3

0x004d,	// (0x000341a0) bg_icf_pane_g4

0x0055,	// (0x000341a8) bg_icf_pane_g5

0x005d,	// (0x000341b0) bg_icf_pane_g6

0x0065,	// (0x000341b8) bg_icf_pane_g7

0x006d,	// (0x000341c0) bg_icf_pane_g8

0x0075,	// (0x000341c8) bg_icf_pane_g9

0x0008,

0xfee5,	// (0x00044038) bg_icf_pane_g

0x9f6f,	// (0x0003e0c2) popup_hyb_candi_window_ParamLimits

0x9f6f,	// (0x0003e0c2) popup_hyb_candi_window

0x15b4,	// (0x00035707) bg_popup_sub_pane_cp01_ParamLimits

0x15b4,	// (0x00035707) bg_popup_sub_pane_cp01

0xa185,	// (0x0003e2d8) entry_hyb_candi_pane_ParamLimits

0xa185,	// (0x0003e2d8) entry_hyb_candi_pane

0xa194,	// (0x0003e2e7) grid_hyb_candi_pane_ParamLimits

0xa194,	// (0x0003e2e7) grid_hyb_candi_pane

0xa1a9,	// (0x0003e2fc) grid_hyb_phrase_pane_ParamLimits

0xa1a9,	// (0x0003e2fc) grid_hyb_phrase_pane

0xa1b8,	// (0x0003e30b) cell_hyb_candi_pane_ParamLimits

0xa1b8,	// (0x0003e30b) cell_hyb_candi_pane

0xa1d0,	// (0x0003e323) cell_hyb_candi_scroll_pane

0x0cb6,	// (0x00034e09) cell_hyb_candi_pane_g1

0xa1d9,	// (0x0003e32c) cell_hyb_candi_pane_t1

0xa1e7,	// (0x0003e33a) cell_hyb_phrase_pane

0x0cb6,	// (0x00034e09) cell_hyb_phrase_pane_g1

0xa1f0,	// (0x0003e343) cell_hyb_phrase_pane_t1

0xa1fe,	// (0x0003e351) entry_hyb_candi_pane_t1

0x114f,	// (0x000352a2) input_focus_pane_cp06

0xa20c,	// (0x0003e35f) cell_hyb_candi_scroll_pane_g1

0xa214,	// (0x0003e367) cell_hyb_candi_scroll_pane_g1_aid

0xa21c,	// (0x0003e36f) cell_hyb_candi_scroll_pane_g2

0xa224,	// (0x0003e377) cell_hyb_candi_scroll_pane_g2_aid

0xa22c,	// (0x0003e37f) cell_hyb_candi_scroll_pane_g3

0xa234,	// (0x0003e387) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Large

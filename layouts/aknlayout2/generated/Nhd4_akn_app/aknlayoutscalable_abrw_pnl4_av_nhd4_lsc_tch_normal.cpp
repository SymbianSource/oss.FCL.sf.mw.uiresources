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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00014138 };

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
0x9cff,	// (0x0001de37) Screen

0x9d0b,	// (0x0001de43) application_window_ParamLimits

0x9d0b,	// (0x0001de43) application_window

0xc2f9,	// (0x00020431) screen_g1

0x87ee,	// (0x0001c926) area_bottom_pane_ParamLimits

0x87ee,	// (0x0001c926) area_bottom_pane

0xe11e,	// (0x00022256) area_top_pane_ParamLimits

0xe11e,	// (0x00022256) area_top_pane

0xe1bc,	// (0x000222f4) main_pane_ParamLimits

0xe1bc,	// (0x000222f4) main_pane

0xc303,	// (0x0002043b) misc_graphics

0xae85,	// (0x0001efbd) battery_pane_ParamLimits

0xae85,	// (0x0001efbd) battery_pane

0x2631,	// (0x00016769) bg_status_flat_pane_g8

0x2639,	// (0x00016771) bg_status_flat_pane_g9

0x1928,	// (0x00015a60) context_pane_ParamLimits

0x1928,	// (0x00015a60) context_pane

0xaff0,	// (0x0001f128) navi_pane_ParamLimits

0xaff0,	// (0x0001f128) navi_pane

0xb06e,	// (0x0001f1a6) signal_pane_ParamLimits

0xb06e,	// (0x0001f1a6) signal_pane

0x0008,

0xf85e,	// (0x00023996) bg_status_flat_pane_g

0xb0fe,	// (0x0001f236) status_pane_g1_ParamLimits

0xb0fe,	// (0x0001f236) status_pane_g1

0xb114,	// (0x0001f24c) status_pane_g2_ParamLimits

0xb114,	// (0x0001f24c) status_pane_g2

0x1b4f,	// (0x00015c87) status_pane_g3_ParamLimits

0x1b4f,	// (0x00015c87) status_pane_g3

0x0004,

0xf791,	// (0x000238c9) status_pane_g_ParamLimits

0xf791,	// (0x000238c9) status_pane_g

0xb120,	// (0x0001f258) title_pane_ParamLimits

0xb120,	// (0x0001f258) title_pane

0xb183,	// (0x0001f2bb) uni_indicator_pane_ParamLimits

0xb183,	// (0x0001f2bb) uni_indicator_pane

0x176f,	// (0x000158a7) bg_list_pane_ParamLimits

0x176f,	// (0x000158a7) bg_list_pane

0xadf8,	// (0x0001ef30) find_pane

0x8c58,	// (0x0001cd90) listscroll_app_pane_ParamLimits

0x8c58,	// (0x0001cd90) listscroll_app_pane

0x17a8,	// (0x000158e0) listscroll_form_pane

0x8c6c,	// (0x0001cda4) listscroll_gen_pane_ParamLimits

0x8c6c,	// (0x0001cda4) listscroll_gen_pane

0xe98b,	// (0x00022ac3) listscroll_set_pane

0x31a7,	// (0x000172df) main_idle_act_pane

0x146f,	// (0x000155a7) main_idle_trad_pane

0x146f,	// (0x000155a7) main_list_empty_pane

0x17c2,	// (0x000158fa) main_midp_pane

0x17ce,	// (0x00015906) main_pane_g1_ParamLimits

0x17ce,	// (0x00015906) main_pane_g1

0x8c80,	// (0x0001cdb8) popup_ai_message_window_ParamLimits

0x8c80,	// (0x0001cdb8) popup_ai_message_window

0x8d31,	// (0x0001ce69) popup_fep_china_uni_window_ParamLimits

0x8d31,	// (0x0001ce69) popup_fep_china_uni_window

0x8d8b,	// (0x0001cec3) popup_fep_japan_candidate_window_ParamLimits

0x8d8b,	// (0x0001cec3) popup_fep_japan_candidate_window

0x8da9,	// (0x0001cee1) popup_fep_japan_predictive_window_ParamLimits

0x8da9,	// (0x0001cee1) popup_fep_japan_predictive_window

0x8dbb,	// (0x0001cef3) popup_find_window

0x8dd8,	// (0x0001cf10) popup_grid_graphic_window_ParamLimits

0x8dd8,	// (0x0001cf10) popup_grid_graphic_window

0x8e76,	// (0x0001cfae) popup_large_graphic_colour_window

0x8e9c,	// (0x0001cfd4) popup_menu_window_ParamLimits

0x8e9c,	// (0x0001cfd4) popup_menu_window

0x906e,	// (0x0001d1a6) popup_note_image_window

0x9034,	// (0x0001d16c) popup_note_wait_window_ParamLimits

0x9034,	// (0x0001d16c) popup_note_wait_window

0x9086,	// (0x0001d1be) popup_note_window_ParamLimits

0x9086,	// (0x0001d1be) popup_note_window

0x9135,	// (0x0001d26d) popup_query_code_window_ParamLimits

0x9135,	// (0x0001d26d) popup_query_code_window

0x916f,	// (0x0001d2a7) popup_query_data_code_window_ParamLimits

0x916f,	// (0x0001d2a7) popup_query_data_code_window

0x918c,	// (0x0001d2c4) popup_query_data_window_ParamLimits

0x918c,	// (0x0001d2c4) popup_query_data_window

0x920e,	// (0x0001d346) popup_query_sat_info_window_ParamLimits

0x920e,	// (0x0001d346) popup_query_sat_info_window

0x92a5,	// (0x0001d3dd) popup_snote_single_graphic_window_ParamLimits

0x92a5,	// (0x0001d3dd) popup_snote_single_graphic_window

0x92a5,	// (0x0001d3dd) popup_snote_single_text_window_ParamLimits

0x92a5,	// (0x0001d3dd) popup_snote_single_text_window

0xe9c9,	// (0x00022b01) popup_sub_window_general

0x9402,	// (0x0001d53a) popup_window_general_ParamLimits

0x9402,	// (0x0001d53a) popup_window_general

0x17e4,	// (0x0001591c) power_save_pane

0x8add,	// (0x0001cc15) control_pane_g1_ParamLimits

0x8add,	// (0x0001cc15) control_pane_g1

0x8b06,	// (0x0001cc3e) control_pane_g2_ParamLimits

0x8b06,	// (0x0001cc3e) control_pane_g2

0x1732,	// (0x0001586a) control_pane_g3_ParamLimits

0x1732,	// (0x0001586a) control_pane_g3

0x0007,

0xf779,	// (0x000238b1) control_pane_g_ParamLimits

0xf779,	// (0x000238b1) control_pane_g

0x8b47,	// (0x0001cc7f) control_pane_t1_ParamLimits

0x8b47,	// (0x0001cc7f) control_pane_t1

0x8bad,	// (0x0001cce5) control_pane_t2_ParamLimits

0x8bad,	// (0x0001cce5) control_pane_t2

0x0002,

0xf78a,	// (0x000238c2) control_pane_t_ParamLimits

0xf78a,	// (0x000238c2) control_pane_t

0xad2a,	// (0x0001ee62) navi_navi_volume_pane_cp1

0xad32,	// (0x0001ee6a) status_small_icon_pane

0x1667,	// (0x0001579f) status_small_pane_g1_ParamLimits

0x1667,	// (0x0001579f) status_small_pane_g1

0xad3a,	// (0x0001ee72) status_small_pane_g2_ParamLimits

0xad3a,	// (0x0001ee72) status_small_pane_g2

0xad46,	// (0x0001ee7e) status_small_pane_g3_ParamLimits

0xad46,	// (0x0001ee7e) status_small_pane_g3

0xad52,	// (0x0001ee8a) status_small_pane_g4_ParamLimits

0xad52,	// (0x0001ee8a) status_small_pane_g4

0xad5e,	// (0x0001ee96) status_small_pane_g5_ParamLimits

0xad5e,	// (0x0001ee96) status_small_pane_g5

0xad6c,	// (0x0001eea4) status_small_pane_g6_ParamLimits

0xad6c,	// (0x0001eea4) status_small_pane_g6

0x0007,

0xf768,	// (0x000238a0) status_small_pane_g_ParamLimits

0xf768,	// (0x000238a0) status_small_pane_g

0xad9b,	// (0x0001eed3) status_small_pane_t1

0xadbd,	// (0x0001eef5) status_small_wait_pane_ParamLimits

0xadbd,	// (0x0001eef5) status_small_wait_pane

0xaa49,	// (0x0001eb81) aid_levels_signal_ParamLimits

0xaa49,	// (0x0001eb81) aid_levels_signal

0xaa61,	// (0x0001eb99) signal_pane_g1_ParamLimits

0xaa61,	// (0x0001eb99) signal_pane_g1

0xaa7c,	// (0x0001ebb4) signal_pane_g2_ParamLimits

0xaa7c,	// (0x0001ebb4) signal_pane_g2

0x0003,

0xf6f9,	// (0x00023831) signal_pane_g_ParamLimits

0xf6f9,	// (0x00023831) signal_pane_g

0xe701,	// (0x00022839) context_pane_g1

0x9d1b,	// (0x0001de53) title_pane_g1

0x9d52,	// (0x0001de8a) title_pane_t1

0xc319,	// (0x00020451) title_pane_t2

0xc33f,	// (0x00020477) title_pane_t3

0x0002,

0xf557,	// (0x0002368f) title_pane_t

0xb1ab,	// (0x0001f2e3) aid_levels_battery_ParamLimits

0xb1ab,	// (0x0001f2e3) aid_levels_battery

0xb1c7,	// (0x0001f2ff) battery_pane_g1_ParamLimits

0xb1c7,	// (0x0001f2ff) battery_pane_g1

0xb1e4,	// (0x0001f31c) battery_pane_g2_ParamLimits

0xb1e4,	// (0x0001f31c) battery_pane_g2

0x0001,

0xf79c,	// (0x000238d4) battery_pane_g_ParamLimits

0xf79c,	// (0x000238d4) battery_pane_g

0xb7c1,	// (0x0001f8f9) uni_indicator_pane_g1

0xb7d7,	// (0x0001f90f) uni_indicator_pane_g2

0xb7ed,	// (0x0001f925) uni_indicator_pane_g3

0x0005,

0xf906,	// (0x00023a3e) uni_indicator_pane_g

0x12e1,	// (0x00015419) navi_icon_pane_ParamLimits

0x12e1,	// (0x00015419) navi_icon_pane

0x122b,	// (0x00015363) navi_midp_pane

0x12fd,	// (0x00015435) navi_navi_pane

0x1307,	// (0x0001543f) navi_text_pane_ParamLimits

0x1307,	// (0x0001543f) navi_text_pane

0xc2f9,	// (0x00020431) status_small_wait_pane_g1

0xc5aa,	// (0x000206e2) status_small_wait_pane_g2

0x0001,

0xf901,	// (0x00023a39) status_small_wait_pane_g

0xb71a,	// (0x0001f852) navi_navi_icon_text_pane

0x2c84,	// (0x00016dbc) navi_navi_pane_g1_ParamLimits

0x2c84,	// (0x00016dbc) navi_navi_pane_g1

0x2c96,	// (0x00016dce) navi_navi_pane_g2_ParamLimits

0x2c96,	// (0x00016dce) navi_navi_pane_g2

0x0001,

0xf8cf,	// (0x00023a07) navi_navi_pane_g_ParamLimits

0xf8cf,	// (0x00023a07) navi_navi_pane_g

0x2ca8,	// (0x00016de0) navi_navi_tabs_pane

0x2cb1,	// (0x00016de9) navi_navi_text_pane

0xb71a,	// (0x0001f852) navi_navi_volume_pane

0x2c58,	// (0x00016d90) navi_text_pane_t1

0x2c4c,	// (0x00016d84) navi_icon_pane_g1

0x2b9f,	// (0x00016cd7) navi_navi_text_pane_t1

0x94bf,	// (0x0001d5f7) navi_navi_volume_pane_g1

0xec4a,	// (0x00022d82) volume_small_pane

0x2b05,	// (0x00016c3d) navi_navi_icon_text_pane_g1

0xb672,	// (0x0001f7aa) navi_navi_icon_text_pane_t1

0x12fd,	// (0x00015435) navi_tabs_2_long_pane

0x12fd,	// (0x00015435) navi_tabs_2_pane

0x12fd,	// (0x00015435) navi_tabs_3_long_pane

0x12fd,	// (0x00015435) navi_tabs_3_pane

0x12fd,	// (0x00015435) navi_tabs_4_pane

0xec2a,	// (0x00022d62) tabs_2_active_pane_ParamLimits

0xec2a,	// (0x00022d62) tabs_2_active_pane

0xec3a,	// (0x00022d72) tabs_2_passive_pane_ParamLimits

0xec3a,	// (0x00022d72) tabs_2_passive_pane

0xebf8,	// (0x00022d30) tabs_3_active_pane_ParamLimits

0xebf8,	// (0x00022d30) tabs_3_active_pane

0xec08,	// (0x00022d40) tabs_3_passive_pane_ParamLimits

0xec08,	// (0x00022d40) tabs_3_passive_pane

0xec19,	// (0x00022d51) tabs_3_passive_pane_cp_ParamLimits

0xec19,	// (0x00022d51) tabs_3_passive_pane_cp

0xebb4,	// (0x00022cec) tabs_4_active_pane_ParamLimits

0xebb4,	// (0x00022cec) tabs_4_active_pane

0xebc5,	// (0x00022cfd) tabs_4_passive_pane_ParamLimits

0xebc5,	// (0x00022cfd) tabs_4_passive_pane

0xebd6,	// (0x00022d0e) tabs_4_passive_pane_cp_ParamLimits

0xebd6,	// (0x00022d0e) tabs_4_passive_pane_cp

0xebe7,	// (0x00022d1f) tabs_4_passive_pane_cp2_ParamLimits

0xebe7,	// (0x00022d1f) tabs_4_passive_pane_cp2

0xeb90,	// (0x00022cc8) tabs_2_long_active_pane_ParamLimits

0xeb90,	// (0x00022cc8) tabs_2_long_active_pane

0xeba2,	// (0x00022cda) tabs_2_long_passive_pane_ParamLimits

0xeba2,	// (0x00022cda) tabs_2_long_passive_pane

0xeb4b,	// (0x00022c83) tabs_3_long_active_pane_ParamLimits

0xeb4b,	// (0x00022c83) tabs_3_long_active_pane

0xeb64,	// (0x00022c9c) tabs_3_long_passive_pane_ParamLimits

0xeb64,	// (0x00022c9c) tabs_3_long_passive_pane

0xeb77,	// (0x00022caf) tabs_3_long_passive_pane_cp_ParamLimits

0xeb77,	// (0x00022caf) tabs_3_long_passive_pane_cp

0xeaf1,	// (0x00022c29) volume_small_pane_g1

0xeafa,	// (0x00022c32) volume_small_pane_g2

0xeb03,	// (0x00022c3b) volume_small_pane_g3

0xeb0c,	// (0x00022c44) volume_small_pane_g4

0xeb15,	// (0x00022c4d) volume_small_pane_g5

0xeb1e,	// (0x00022c56) volume_small_pane_g6

0xeb27,	// (0x00022c5f) volume_small_pane_g7

0xeb30,	// (0x00022c68) volume_small_pane_g8

0xeb39,	// (0x00022c71) volume_small_pane_g9

0xeb42,	// (0x00022c7a) volume_small_pane_g10

0x0009,

0xf89b,	// (0x000239d3) volume_small_pane_g

0xc351,	// (0x00020489) bg_active_tab_pane_cp2_ParamLimits

0xc351,	// (0x00020489) bg_active_tab_pane_cp2

0x9dde,	// (0x0001df16) tabs_3_active_pane_g1

0x9de6,	// (0x0001df1e) tabs_3_active_pane_t1

0xc351,	// (0x00020489) bg_passive_tab_pane_cp2_ParamLimits

0xc351,	// (0x00020489) bg_passive_tab_pane_cp2

0x9dde,	// (0x0001df16) tabs_3_passive_pane_g1

0x9de6,	// (0x0001df1e) tabs_3_passive_pane_t1

0xc351,	// (0x00020489) bg_active_tab_pane_cp3_ParamLimits

0xc351,	// (0x00020489) bg_active_tab_pane_cp3

0x9df8,	// (0x0001df30) tabs_4_active_pane_g1

0x9e00,	// (0x0001df38) tabs_4_active_pane_t1

0xc351,	// (0x00020489) bg_passive_tab_pane_cp3_ParamLimits

0xc351,	// (0x00020489) bg_passive_tab_pane_cp3

0x9df8,	// (0x0001df30) tabs_4_1_passive_pane_g1

0x9e00,	// (0x0001df38) tabs_4_1_passive_pane_t1

0x17c2,	// (0x000158fa) list_highlight_pane_cp2

0xb905,	// (0x0001fa3d) list_set_pane_ParamLimits

0xb905,	// (0x0001fa3d) list_set_pane

0xb99f,	// (0x0001fad7) main_pane_set_t1_ParamLimits

0xb99f,	// (0x0001fad7) main_pane_set_t1

0xb9bf,	// (0x0001faf7) main_pane_set_t2_ParamLimits

0xb9bf,	// (0x0001faf7) main_pane_set_t2

0xb9d3,	// (0x0001fb0b) main_pane_set_t3_ParamLimits

0xb9d3,	// (0x0001fb0b) main_pane_set_t3

0xb9e5,	// (0x0001fb1d) main_pane_set_t4_ParamLimits

0xb9e5,	// (0x0001fb1d) main_pane_set_t4

0x0003,

0xf96b,	// (0x00023aa3) main_pane_set_t_ParamLimits

0xf96b,	// (0x00023aa3) main_pane_set_t

0xb9f7,	// (0x0001fb2f) setting_code_pane

0xba01,	// (0x0001fb39) setting_slider_graphic_pane

0xba01,	// (0x0001fb39) setting_slider_pane

0xba01,	// (0x0001fb39) setting_text_pane

0xba01,	// (0x0001fb39) setting_volume_pane

0x89ec,	// (0x0001cb24) volume_set_pane

0xc35f,	// (0x00020497) bg_set_opt_pane_cp

0x89f4,	// (0x0001cb2c) setting_slider_pane_t1

0x8a0d,	// (0x0001cb45) setting_slider_pane_t2

0x8a27,	// (0x0001cb5f) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00023696) setting_slider_pane_t

0x8a3f,	// (0x0001cb77) slider_set_pane

0xc303,	// (0x0002043b) bg_set_opt_pane_cp2

0xc36d,	// (0x000204a5) setting_slider_graphic_pane_g1

0x8a55,	// (0x0001cb8d) setting_slider_graphic_pane_t1

0x8a65,	// (0x0001cb9d) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002369d) setting_slider_graphic_pane_t

0x8a75,	// (0x0001cbad) slider_set_pane_cp

0xc303,	// (0x0002043b) input_focus_pane_cp1

0x318e,	// (0x000172c6) list_set_text_pane

0xc2f9,	// (0x00020431) setting_text_pane_g1

0xc303,	// (0x0002043b) input_focus_pane_cp2

0xc2f9,	// (0x00020431) setting_code_pane_g1

0xc376,	// (0x000204ae) setting_code_pane_t1

0xc384,	// (0x000204bc) set_text_pane_t1_ParamLimits

0xc384,	// (0x000204bc) set_text_pane_t1

0xc84f,	// (0x00020987) set_opt_bg_pane_g1

0xc857,	// (0x0002098f) set_opt_bg_pane_g2

0xb8ba,	// (0x0001f9f2) set_opt_bg_pane_g3

0xc867,	// (0x0002099f) set_opt_bg_pane_g4

0xc86f,	// (0x000209a7) set_opt_bg_pane_g5

0xc877,	// (0x000209af) set_opt_bg_pane_g6

0xb8c4,	// (0x0001f9fc) set_opt_bg_pane_g7

0xb8cc,	// (0x0001fa04) set_opt_bg_pane_g8

0xb8d6,	// (0x0001fa0e) set_opt_bg_pane_g9

0x0008,

0xf958,	// (0x00023a90) set_opt_bg_pane_g

0xb8ad,	// (0x0001f9e5) slider_set_pane_g1

0xec53,	// (0x00022d8b) slider_set_pane_g2

0x0006,

0xf949,	// (0x00023a81) slider_set_pane_g

0x94c7,	// (0x0001d5ff) volume_set_pane_g1

0x94cf,	// (0x0001d607) volume_set_pane_g2

0x94d7,	// (0x0001d60f) volume_set_pane_g3

0x94df,	// (0x0001d617) volume_set_pane_g4

0x94e7,	// (0x0001d61f) volume_set_pane_g5

0x94ef,	// (0x0001d627) volume_set_pane_g6

0x94f7,	// (0x0001d62f) volume_set_pane_g7

0x94ff,	// (0x0001d637) volume_set_pane_g8

0x9507,	// (0x0001d63f) volume_set_pane_g9

0x950f,	// (0x0001d647) volume_set_pane_g10

0x0009,

0xf921,	// (0x00023a59) volume_set_pane_g

0x9e12,	// (0x0001df4a) indicator_pane_ParamLimits

0x9e12,	// (0x0001df4a) indicator_pane

0x9e3a,	// (0x0001df72) main_idle_pane_g2_ParamLimits

0x9e3a,	// (0x0001df72) main_idle_pane_g2

0x9e72,	// (0x0001dfaa) main_pane_idle_g1_ParamLimits

0x9e72,	// (0x0001dfaa) main_pane_idle_g1

0xc39e,	// (0x000204d6) popup_clock_digital_analogue_window_ParamLimits

0xc39e,	// (0x000204d6) popup_clock_digital_analogue_window

0x9e99,	// (0x0001dfd1) soft_indicator_pane_ParamLimits

0x9e99,	// (0x0001dfd1) soft_indicator_pane

0x9ebd,	// (0x0001dff5) wallpaper_pane_ParamLimits

0x9ebd,	// (0x0001dff5) wallpaper_pane

0xc2f9,	// (0x00020431) wallpaper_pane_g1

0x9ecf,	// (0x0001e007) indicator_pane_g1_ParamLimits

0x9ecf,	// (0x0001e007) indicator_pane_g1

0x3661,	// (0x00017799) navi_navi_icon_text_pane_srt_g1

0xc3cc,	// (0x00020504) soft_indicator_pane_t1

0xc3e6,	// (0x0002051e) aid_ps_area_pane

0x9ee5,	// (0x0001e01d) aid_ps_clock_pane

0xc3f7,	// (0x0002052f) aid_ps_indicator_pane

0xc403,	// (0x0002053b) indicator_ps_pane_ParamLimits

0xc403,	// (0x0002053b) indicator_ps_pane

0xc412,	// (0x0002054a) power_save_pane_g1_ParamLimits

0xc412,	// (0x0002054a) power_save_pane_g1

0xc41e,	// (0x00020556) power_save_pane_g2_ParamLimits

0xc41e,	// (0x00020556) power_save_pane_g2

0xe0fe,	// (0x00022236) aid_navinavi_width_pane

0xc3e6,	// (0x0002051e) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000236a2) power_save_pane_g_ParamLimits

0xf56a,	// (0x000236a2) power_save_pane_g

0xc42c,	// (0x00020564) power_save_pane_t1_ParamLimits

0xc42c,	// (0x00020564) power_save_pane_t1

0x9ee5,	// (0x0001e01d) aid_ps_clock_pane_ParamLimits

0xc3f7,	// (0x0002052f) aid_ps_indicator_pane_ParamLimits

0xc43e,	// (0x00020576) power_save_pane_t4_ParamLimits

0xc43e,	// (0x00020576) power_save_pane_t4

0x0001,

0xf56f,	// (0x000236a7) power_save_pane_t_ParamLimits

0xf56f,	// (0x000236a7) power_save_pane_t

0xc468,	// (0x000205a0) power_save_t3_ParamLimits

0xc468,	// (0x000205a0) power_save_t3

0xc453,	// (0x0002058b) power_save_t2_ParamLimits

0xc453,	// (0x0002058b) power_save_t2

0xc47d,	// (0x000205b5) indicator_ps_pane_g1

0x9ef3,	// (0x0001e02b) ai_gene_pane_ParamLimits

0x9ef3,	// (0x0001e02b) ai_gene_pane

0x9f0a,	// (0x0001e042) ai_links_pane_ParamLimits

0x9f0a,	// (0x0001e042) ai_links_pane

0x9f22,	// (0x0001e05a) indicator_pane_cp1_ParamLimits

0x9f22,	// (0x0001e05a) indicator_pane_cp1

0x9f31,	// (0x0001e069) main_pane_idle_g1_cp_ParamLimits

0x9f31,	// (0x0001e069) main_pane_idle_g1_cp

0x9f49,	// (0x0001e081) popup_ai_links_title_window

0x9f52,	// (0x0001e08a) soft_indicator_pane_cp1_ParamLimits

0x9f52,	// (0x0001e08a) soft_indicator_pane_cp1

0x2f43,	// (0x0001707b) ai_links_pane_g1

0x2f4c,	// (0x00017084) grid_ai_links_pane

0xb7b8,	// (0x0001f8f0) ai_gene_pane_1

0x2f31,	// (0x00017069) ai_gene_pane_2

0x2f3a,	// (0x00017072) list_highlight_pane_cp4

0xb794,	// (0x0001f8cc) cell_ai_link_pane_ParamLimits

0xb794,	// (0x0001f8cc) cell_ai_link_pane

0x2f02,	// (0x0001703a) cell_ai_link_pane_g1

0xc5aa,	// (0x000206e2) cell_ai_link_pane_g2

0x0001,

0xf8fc,	// (0x00023a34) cell_ai_link_pane_g

0xc303,	// (0x0002043b) grid_highlight_cp2

0xc303,	// (0x0002043b) bg_popup_sub_pane_cp1

0xc494,	// (0x000205cc) popup_ai_links_title_window_t1

0x2e52,	// (0x00016f8a) ai_gene_pane_1_g1_ParamLimits

0x2e52,	// (0x00016f8a) ai_gene_pane_1_g1

0x2e5e,	// (0x00016f96) ai_gene_pane_1_g2_ParamLimits

0x2e5e,	// (0x00016f96) ai_gene_pane_1_g2

0x0001,

0xf8f2,	// (0x00023a2a) ai_gene_pane_1_g_ParamLimits

0xf8f2,	// (0x00023a2a) ai_gene_pane_1_g

0x2e6b,	// (0x00016fa3) ai_gene_pane_1_t1_ParamLimits

0x2e6b,	// (0x00016fa3) ai_gene_pane_1_t1

0x2e9f,	// (0x00016fd7) grid_ai_soft_ind_pane

0x2e3d,	// (0x00016f75) ai_gene_pane_2_t1_ParamLimits

0x2e3d,	// (0x00016f75) ai_gene_pane_2_t1

0x9f66,	// (0x0001e09e) main_pane_empty_t1_ParamLimits

0x9f66,	// (0x0001e09e) main_pane_empty_t1

0x9f7e,	// (0x0001e0b6) main_pane_empty_t2_ParamLimits

0x9f7e,	// (0x0001e0b6) main_pane_empty_t2

0x9f93,	// (0x0001e0cb) main_pane_empty_t3_ParamLimits

0x9f93,	// (0x0001e0cb) main_pane_empty_t3

0x9fa5,	// (0x0001e0dd) main_pane_empty_t4_ParamLimits

0x9fa5,	// (0x0001e0dd) main_pane_empty_t4

0x9fb7,	// (0x0001e0ef) main_pane_empty_t5_ParamLimits

0x9fb7,	// (0x0001e0ef) main_pane_empty_t5

0x0004,

0xf574,	// (0x000236ac) main_pane_empty_t_ParamLimits

0xf574,	// (0x000236ac) main_pane_empty_t

0xc8a0,	// (0x000209d8) bg_popup_window_pane_ParamLimits

0xc8a0,	// (0x000209d8) bg_popup_window_pane

0xb70e,	// (0x0001f846) find_popup_pane_cp2_ParamLimits

0xb70e,	// (0x0001f846) find_popup_pane_cp2

0x2bb9,	// (0x00016cf1) heading_pane_ParamLimits

0x2bb9,	// (0x00016cf1) heading_pane

0xc303,	// (0x0002043b) bg_popup_sub_pane

0xb68f,	// (0x0001f7c7) bg_popup_window_pane_g1_ParamLimits

0xb68f,	// (0x0001f7c7) bg_popup_window_pane_g1

0xb69e,	// (0x0001f7d6) bg_popup_window_pane_g2_ParamLimits

0xb69e,	// (0x0001f7d6) bg_popup_window_pane_g2

0xb6aa,	// (0x0001f7e2) bg_popup_window_pane_g3_ParamLimits

0xb6aa,	// (0x0001f7e2) bg_popup_window_pane_g3

0xb6b6,	// (0x0001f7ee) bg_popup_window_pane_g4_ParamLimits

0xb6b6,	// (0x0001f7ee) bg_popup_window_pane_g4

0xb6c5,	// (0x0001f7fd) bg_popup_window_pane_g5_ParamLimits

0xb6c5,	// (0x0001f7fd) bg_popup_window_pane_g5

0xb6d5,	// (0x0001f80d) bg_popup_window_pane_g6_ParamLimits

0xb6d5,	// (0x0001f80d) bg_popup_window_pane_g6

0xb6e1,	// (0x0001f819) bg_popup_window_pane_g7_ParamLimits

0xb6e1,	// (0x0001f819) bg_popup_window_pane_g7

0xb6f0,	// (0x0001f828) bg_popup_window_pane_g8_ParamLimits

0xb6f0,	// (0x0001f828) bg_popup_window_pane_g8

0xb6ff,	// (0x0001f837) bg_popup_window_pane_g9_ParamLimits

0xb6ff,	// (0x0001f837) bg_popup_window_pane_g9

0x2b93,	// (0x00016ccb) bg_popup_window_pane_g10_ParamLimits

0x2b93,	// (0x00016ccb) bg_popup_window_pane_g10

0x0009,

0xf8ba,	// (0x000239f2) bg_popup_window_pane_g_ParamLimits

0xf8ba,	// (0x000239f2) bg_popup_window_pane_g

0x2abc,	// (0x00016bf4) bg_popup_heading_pane_ParamLimits

0x2abc,	// (0x00016bf4) bg_popup_heading_pane

0xec83,	// (0x00022dbb) tabs_4_passive_pane_cp_srt_ParamLimits

0xec83,	// (0x00022dbb) tabs_4_passive_pane_cp_srt

0xec95,	// (0x00022dcd) tabs_4_passive_pane_srt_ParamLimits

0x2ad0,	// (0x00016c08) heading_pane_g2

0xec95,	// (0x00022dcd) tabs_4_passive_pane_srt

0x1e19,	// (0x00015f51) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1e19,	// (0x00015f51) bg_passive_tab_pane_cp3_srt

0x2ad8,	// (0x00016c10) heading_pane_t1_ParamLimits

0x2ad8,	// (0x00016c10) heading_pane_t1

0x2aef,	// (0x00016c27) heading_pane_t2_ParamLimits

0x2aef,	// (0x00016c27) heading_pane_t2

0x0001,

0xf8b5,	// (0x000239ed) heading_pane_t_ParamLimits

0xf8b5,	// (0x000239ed) heading_pane_t

0x25f9,	// (0x00016731) bg_popup_heading_pane_g1

0x26a8,	// (0x000167e0) bg_popup_heading_pane_g2

0x26b2,	// (0x000167ea) bg_popup_heading_pane_g3

0x26bc,	// (0x000167f4) bg_popup_heading_pane_g4

0x26c6,	// (0x000167fe) bg_popup_heading_pane_g5

0x26d0,	// (0x00016808) bg_popup_heading_pane_g6

0x26d8,	// (0x00016810) bg_popup_heading_pane_g7

0x26e0,	// (0x00016818) bg_popup_heading_pane_g8

0x26ea,	// (0x00016822) bg_popup_heading_pane_g9

0x0008,

0xf871,	// (0x000239a9) bg_popup_heading_pane_g

0x1cf9,	// (0x00015e31) bg_popup_sub_pane_g1

0x1d09,	// (0x00015e41) bg_popup_sub_pane_g2

0x1d01,	// (0x00015e39) bg_popup_sub_pane_g3

0x1d19,	// (0x00015e51) bg_popup_sub_pane_g4

0x1d11,	// (0x00015e49) bg_popup_sub_pane_g5

0x1d21,	// (0x00015e59) bg_popup_sub_pane_g6

0x1d29,	// (0x00015e61) bg_popup_sub_pane_g7

0x1d39,	// (0x00015e71) bg_popup_sub_pane_g8

0x1d31,	// (0x00015e69) bg_popup_sub_pane_g9

0x0008,

0xf84b,	// (0x00023983) bg_popup_sub_pane_g

0xc351,	// (0x00020489) bg_popup_window_pane_cp5_ParamLimits

0xc351,	// (0x00020489) bg_popup_window_pane_cp5

0xc4b1,	// (0x000205e9) popup_note_window_g1_ParamLimits

0xc4b1,	// (0x000205e9) popup_note_window_g1

0xc4bd,	// (0x000205f5) popup_note_window_t1_ParamLimits

0xc4bd,	// (0x000205f5) popup_note_window_t1

0xc4d3,	// (0x0002060b) popup_note_window_t2_ParamLimits

0xc4d3,	// (0x0002060b) popup_note_window_t2

0xc4e9,	// (0x00020621) popup_note_window_t3_ParamLimits

0xc4e9,	// (0x00020621) popup_note_window_t3

0xc4ff,	// (0x00020637) popup_note_window_t4_ParamLimits

0xc4ff,	// (0x00020637) popup_note_window_t4

0xc527,	// (0x0002065f) popup_note_window_t5_ParamLimits

0xc527,	// (0x0002065f) popup_note_window_t5

0x0004,

0xf57f,	// (0x000236b7) popup_note_window_t_ParamLimits

0xf57f,	// (0x000236b7) popup_note_window_t

0xc54b,	// (0x00020683) bg_popup_window_pane_cp6_ParamLimits

0xc54b,	// (0x00020683) bg_popup_window_pane_cp6

0x2575,	// (0x000166ad) popup_note_image_window_g1_ParamLimits

0x2575,	// (0x000166ad) popup_note_image_window_g1

0xb534,	// (0x0001f66c) popup_note_image_window_g2_ParamLimits

0xb534,	// (0x0001f66c) popup_note_image_window_g2

0x0001,

0xf83f,	// (0x00023977) popup_note_image_window_g_ParamLimits

0xf83f,	// (0x00023977) popup_note_image_window_g

0x259a,	// (0x000166d2) popup_note_image_window_t1_ParamLimits

0x259a,	// (0x000166d2) popup_note_image_window_t1

0x25b3,	// (0x000166eb) popup_note_image_window_t2_ParamLimits

0x25b3,	// (0x000166eb) popup_note_image_window_t2

0x25cc,	// (0x00016704) popup_note_image_window_t3_ParamLimits

0x25cc,	// (0x00016704) popup_note_image_window_t3

0x0002,

0xf844,	// (0x0002397c) popup_note_image_window_t_ParamLimits

0xf844,	// (0x0002397c) popup_note_image_window_t

0x243e,	// (0x00016576) bg_popup_window_pane_cp7_ParamLimits

0x243e,	// (0x00016576) bg_popup_window_pane_cp7

0x246e,	// (0x000165a6) popup_note_wait_window_g1_ParamLimits

0x246e,	// (0x000165a6) popup_note_wait_window_g1

0x247a,	// (0x000165b2) popup_note_wait_window_g2_ParamLimits

0x247a,	// (0x000165b2) popup_note_wait_window_g2

0x0002,

0xf82d,	// (0x00023965) popup_note_wait_window_g_ParamLimits

0xf82d,	// (0x00023965) popup_note_wait_window_g

0x2492,	// (0x000165ca) popup_note_wait_window_t1_ParamLimits

0x2492,	// (0x000165ca) popup_note_wait_window_t1

0xb4d5,	// (0x0001f60d) popup_note_wait_window_t2_ParamLimits

0xb4d5,	// (0x0001f60d) popup_note_wait_window_t2

0xb4f2,	// (0x0001f62a) popup_note_wait_window_t3_ParamLimits

0xb4f2,	// (0x0001f62a) popup_note_wait_window_t3

0xb505,	// (0x0001f63d) popup_note_wait_window_t4_ParamLimits

0xb505,	// (0x0001f63d) popup_note_wait_window_t4

0x0004,

0xf834,	// (0x0002396c) popup_note_wait_window_t_ParamLimits

0xf834,	// (0x0002396c) popup_note_wait_window_t

0x250e,	// (0x00016646) wait_bar_pane_ParamLimits

0x250e,	// (0x00016646) wait_bar_pane

0xc303,	// (0x0002043b) wait_anim_pane

0xc303,	// (0x0002043b) wait_border_pane

0xc2f9,	// (0x00020431) wait_anim_pane_g1

0xc2f9,	// (0x00020431) wait_anim_pane_g2

0x0001,

0xf6f4,	// (0x0002382c) wait_anim_pane_g

0x23ea,	// (0x00016522) wait_border_pane_g1

0x23f5,	// (0x0001652d) wait_border_pane_g2

0x23fe,	// (0x00016536) wait_border_pane_g3

0x0002,

0xf826,	// (0x0002395e) wait_border_pane_g

0x2255,	// (0x0001638d) bg_popup_window_pane_cp16_ParamLimits

0x2255,	// (0x0001638d) bg_popup_window_pane_cp16

0xb485,	// (0x0001f5bd) indicator_popup_pane_cp4_ParamLimits

0xb485,	// (0x0001f5bd) indicator_popup_pane_cp4

0x2369,	// (0x000164a1) popup_query_data_window_t1_ParamLimits

0x2369,	// (0x000164a1) popup_query_data_window_t1

0x237b,	// (0x000164b3) popup_query_data_window_t2_ParamLimits

0x237b,	// (0x000164b3) popup_query_data_window_t2

0x2394,	// (0x000164cc) popup_query_data_window_t3_ParamLimits

0x2394,	// (0x000164cc) popup_query_data_window_t3

0x0002,

0xf81f,	// (0x00023957) popup_query_data_window_t_ParamLimits

0xf81f,	// (0x00023957) popup_query_data_window_t

0xb499,	// (0x0001f5d1) query_popup_data_pane_ParamLimits

0xb499,	// (0x0001f5d1) query_popup_data_pane

0xb4ad,	// (0x0001f5e5) query_popup_data_pane_cp1_ParamLimits

0xb4ad,	// (0x0001f5e5) query_popup_data_pane_cp1

0x2255,	// (0x0001638d) bg_popup_window_pane_cp10_ParamLimits

0x2255,	// (0x0001638d) bg_popup_window_pane_cp10

0xb400,	// (0x0001f538) indicator_popup_pane_ParamLimits

0xb400,	// (0x0001f538) indicator_popup_pane

0xb422,	// (0x0001f55a) popup_query_code_window_t1_ParamLimits

0xb422,	// (0x0001f55a) popup_query_code_window_t1

0xb43c,	// (0x0001f574) popup_query_code_window_t2_ParamLimits

0xb43c,	// (0x0001f574) popup_query_code_window_t2

0x230c,	// (0x00016444) popup_query_code_window_t3_ParamLimits

0x230c,	// (0x00016444) popup_query_code_window_t3

0x0002,

0xf818,	// (0x00023950) popup_query_code_window_t_ParamLimits

0xf818,	// (0x00023950) popup_query_code_window_t

0x233b,	// (0x00016473) query_popup_pane_ParamLimits

0x233b,	// (0x00016473) query_popup_pane

0xc54b,	// (0x00020683) bg_popup_window_pane_cp15_ParamLimits

0xc54b,	// (0x00020683) bg_popup_window_pane_cp15

0x9fc9,	// (0x0001e101) indicator_popup_pane_cp1_ParamLimits

0x9fc9,	// (0x0001e101) indicator_popup_pane_cp1

0x9fdc,	// (0x0001e114) indicator_popup_pane_cp2_ParamLimits

0x9fdc,	// (0x0001e114) indicator_popup_pane_cp2

0x9fef,	// (0x0001e127) popup_query_data_code_window_g1_ParamLimits

0x9fef,	// (0x0001e127) popup_query_data_code_window_g1

0xc569,	// (0x000206a1) popup_query_data_code_window_t1_ParamLimits

0xc569,	// (0x000206a1) popup_query_data_code_window_t1

0xc57b,	// (0x000206b3) popup_query_data_code_window_t2_ParamLimits

0xc57b,	// (0x000206b3) popup_query_data_code_window_t2

0xa002,	// (0x0001e13a) popup_query_data_code_window_t3_ParamLimits

0xa002,	// (0x0001e13a) popup_query_data_code_window_t3

0xa018,	// (0x0001e150) popup_query_data_code_window_t4_ParamLimits

0xa018,	// (0x0001e150) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000236c2) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000236c2) popup_query_data_code_window_t

0xea95,	// (0x00022bcd) list_single_midp_graphic_pane_g3

0xa030,	// (0x0001e168) query_popup_data_pane_cp2_ParamLimits

0xa043,	// (0x0001e17b) query_popup_pane_cp2_ParamLimits

0xa043,	// (0x0001e17b) query_popup_pane_cp2

0xc303,	// (0x0002043b) bg_popup_window_pane_cp11

0x224d,	// (0x00016385) heading_pane_cp5

0xc5d7,	// (0x0002070f) listscroll_popup_info_pane

0xc303,	// (0x0002043b) input_focus_pane_cp3

0xc58d,	// (0x000206c5) query_popup_pane_t1

0xc59b,	// (0x000206d3) list_popup_info_pane_ParamLimits

0xc59b,	// (0x000206d3) list_popup_info_pane

0xc5aa,	// (0x000206e2) listscroll_popup_info_pane_g1

0xc5b2,	// (0x000206ea) scroll_pane_cp7

0xa056,	// (0x0001e18e) popup_info_list_pane_t1_ParamLimits

0xa056,	// (0x0001e18e) popup_info_list_pane_t1

0xa070,	// (0x0001e1a8) popup_info_list_pane_t2_ParamLimits

0xa070,	// (0x0001e1a8) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000236cb) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000236cb) popup_info_list_pane_t

0xc303,	// (0x0002043b) bg_popup_window_pane_cp12

0xbc15,	// (0x0001fd4d) find_popup_pane

0xc35f,	// (0x00020497) bg_popup_window_pane_cp3

0xc5bc,	// (0x000206f4) heading_pane_cp3

0xc5c8,	// (0x00020700) listscroll_popup_graphic_pane

0xc303,	// (0x0002043b) bg_popup_window_pane_cp4

0xa0da,	// (0x0001e212) heading_pane_cp4

0xc5d7,	// (0x0002070f) listscroll_popup_colour_pane

0xa0e2,	// (0x0001e21a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa0e2,	// (0x0001e21a) cell_large_graphic_colour_none_popup_pane

0xa0f6,	// (0x0001e22e) grid_large_graphic_colour_popup_pane_ParamLimits

0xa0f6,	// (0x0001e22e) grid_large_graphic_colour_popup_pane

0xa11a,	// (0x0001e252) listscroll_popup_colour_pane_g1_ParamLimits

0xa11a,	// (0x0001e252) listscroll_popup_colour_pane_g1

0xa131,	// (0x0001e269) listscroll_popup_colour_pane_g2_ParamLimits

0xa131,	// (0x0001e269) listscroll_popup_colour_pane_g2

0xa148,	// (0x0001e280) listscroll_popup_colour_pane_g3_ParamLimits

0xa148,	// (0x0001e280) listscroll_popup_colour_pane_g3

0xa158,	// (0x0001e290) listscroll_popup_colour_pane_g4_ParamLimits

0xa158,	// (0x0001e290) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000236d0) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000236d0) listscroll_popup_colour_pane_g

0xc5df,	// (0x00020717) scroll_pane_cp6_ParamLimits

0xc5df,	// (0x00020717) scroll_pane_cp6

0xa168,	// (0x0001e2a0) cell_large_graphic_colour_popup_pane_ParamLimits

0xa168,	// (0x0001e2a0) cell_large_graphic_colour_popup_pane

0xa187,	// (0x0001e2bf) cell_large_graphic_colour_none_popup_pane_t1

0xc303,	// (0x0002043b) grid_highlight_pane_cp5

0xc5f1,	// (0x00020729) cell_large_graphic_colour_popup_pane_g1

0xc5f9,	// (0x00020731) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000236d9) cell_large_graphic_colour_popup_pane_g

0xc601,	// (0x00020739) cell_large_graphic_colour_popup_pane_g2_copy1

0xc60a,	// (0x00020742) grid_highlight_pane_cp4

0xc612,	// (0x0002074a) bg_popup_window_pane_cp8_ParamLimits

0xc612,	// (0x0002074a) bg_popup_window_pane_cp8

0xa196,	// (0x0001e2ce) popup_snote_single_text_window_g1_ParamLimits

0xa196,	// (0x0001e2ce) popup_snote_single_text_window_g1

0xa1a8,	// (0x0001e2e0) popup_snote_single_text_window_t1_ParamLimits

0xa1a8,	// (0x0001e2e0) popup_snote_single_text_window_t1

0xa1bb,	// (0x0001e2f3) popup_snote_single_text_window_t2_ParamLimits

0xa1bb,	// (0x0001e2f3) popup_snote_single_text_window_t2

0xa1ce,	// (0x0001e306) popup_snote_single_text_window_t3_ParamLimits

0xa1ce,	// (0x0001e306) popup_snote_single_text_window_t3

0xa207,	// (0x0001e33f) popup_snote_single_text_window_t4_ParamLimits

0xa207,	// (0x0001e33f) popup_snote_single_text_window_t4

0xa23b,	// (0x0001e373) popup_snote_single_text_window_t5_ParamLimits

0xa23b,	// (0x0001e373) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000236de) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000236de) popup_snote_single_text_window_t

0xc62d,	// (0x00020765) bg_popup_window_pane_cp9_ParamLimits

0xc62d,	// (0x00020765) bg_popup_window_pane_cp9

0xa196,	// (0x0001e2ce) popup_snote_single_graphic_window_g1_ParamLimits

0xa196,	// (0x0001e2ce) popup_snote_single_graphic_window_g1

0xc63b,	// (0x00020773) popup_snote_single_graphic_window_g2_ParamLimits

0xc63b,	// (0x00020773) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000236e9) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000236e9) popup_snote_single_graphic_window_g

0xc647,	// (0x0002077f) popup_snote_single_graphic_window_t1_ParamLimits

0xc647,	// (0x0002077f) popup_snote_single_graphic_window_t1

0xc65a,	// (0x00020792) popup_snote_single_graphic_window_t2_ParamLimits

0xc65a,	// (0x00020792) popup_snote_single_graphic_window_t2

0xa1ce,	// (0x0001e306) popup_snote_single_graphic_window_t3_ParamLimits

0xa1ce,	// (0x0001e306) popup_snote_single_graphic_window_t3

0xa207,	// (0x0001e33f) popup_snote_single_graphic_window_t4_ParamLimits

0xa207,	// (0x0001e33f) popup_snote_single_graphic_window_t4

0xa26a,	// (0x0001e3a2) popup_snote_single_graphic_window_t5_ParamLimits

0xa26a,	// (0x0001e3a2) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000236ee) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000236ee) popup_snote_single_graphic_window_t

0x35bd,	// (0x000176f5) grid_graphic_popup_pane_ParamLimits

0x35bd,	// (0x000176f5) grid_graphic_popup_pane

0x35e7,	// (0x0001771f) listscroll_popup_graphic_pane_g1_ParamLimits

0x35e7,	// (0x0001771f) listscroll_popup_graphic_pane_g1

0xbbb3,	// (0x0001fceb) listscroll_popup_graphic_pane_g2_ParamLimits

0xbbb3,	// (0x0001fceb) listscroll_popup_graphic_pane_g2

0x0001,

0xf995,	// (0x00023acd) listscroll_popup_graphic_pane_g_ParamLimits

0xf995,	// (0x00023acd) listscroll_popup_graphic_pane_g

0x360f,	// (0x00017747) scroll_pane_cp5

0xbb58,	// (0x0001fc90) cell_graphic_popup_pane_ParamLimits

0xbb58,	// (0x0001fc90) cell_graphic_popup_pane

0x353d,	// (0x00017675) cell_graphic_popup_pane_g1

0x3545,	// (0x0001767d) cell_graphic_popup_pane_g2

0xc601,	// (0x00020739) cell_graphic_popup_pane_g3

0x0002,

0xf98e,	// (0x00023ac6) cell_graphic_popup_pane_g

0x354e,	// (0x00017686) cell_graphic_popup_pane_t2

0xc60a,	// (0x00020742) grid_highlight_pane_cp3

0xc67f,	// (0x000207b7) list_gen_pane_ParamLimits

0xc67f,	// (0x000207b7) list_gen_pane

0xc6a7,	// (0x000207df) scroll_pane

0xbac2,	// (0x0001fbfa) bg_list_pane_g1_ParamLimits

0xbac2,	// (0x0001fbfa) bg_list_pane_g1

0xbadd,	// (0x0001fc15) bg_list_pane_g2_ParamLimits

0xbadd,	// (0x0001fc15) bg_list_pane_g2

0xbaf0,	// (0x0001fc28) bg_list_pane_g3_ParamLimits

0xbaf0,	// (0x0001fc28) bg_list_pane_g3

0xbb02,	// (0x0001fc3a) bg_list_pane_g4_ParamLimits

0xbb02,	// (0x0001fc3a) bg_list_pane_g4

0xbb14,	// (0x0001fc4c) bg_list_pane_g5_ParamLimits

0xbb14,	// (0x0001fc4c) bg_list_pane_g5

0x0004,

0xf983,	// (0x00023abb) bg_list_pane_g_ParamLimits

0xf983,	// (0x00023abb) bg_list_pane_g

0xba66,	// (0x0001fb9e) list_double2_graphic_large_graphic_pane_ParamLimits

0xba66,	// (0x0001fb9e) list_double2_graphic_large_graphic_pane

0xba66,	// (0x0001fb9e) list_double2_graphic_pane_ParamLimits

0xba66,	// (0x0001fb9e) list_double2_graphic_pane

0xba66,	// (0x0001fb9e) list_double2_large_graphic_pane_ParamLimits

0xba66,	// (0x0001fb9e) list_double2_large_graphic_pane

0xba66,	// (0x0001fb9e) list_double2_pane_ParamLimits

0xba66,	// (0x0001fb9e) list_double2_pane

0xba66,	// (0x0001fb9e) list_double_graphic_heading_pane_ParamLimits

0xba66,	// (0x0001fb9e) list_double_graphic_heading_pane

0xba66,	// (0x0001fb9e) list_double_graphic_pane_ParamLimits

0xba66,	// (0x0001fb9e) list_double_graphic_pane

0xba66,	// (0x0001fb9e) list_double_heading_pane_ParamLimits

0xba66,	// (0x0001fb9e) list_double_heading_pane

0xba66,	// (0x0001fb9e) list_double_large_graphic_pane_ParamLimits

0xba66,	// (0x0001fb9e) list_double_large_graphic_pane

0xba66,	// (0x0001fb9e) list_double_number_pane_ParamLimits

0xba66,	// (0x0001fb9e) list_double_number_pane

0xba66,	// (0x0001fb9e) list_double_pane_ParamLimits

0xba66,	// (0x0001fb9e) list_double_pane

0xba66,	// (0x0001fb9e) list_double_time_pane_ParamLimits

0xba66,	// (0x0001fb9e) list_double_time_pane

0xba66,	// (0x0001fb9e) list_setting_number_pane_ParamLimits

0xba66,	// (0x0001fb9e) list_setting_number_pane

0xba66,	// (0x0001fb9e) list_setting_pane_ParamLimits

0xba66,	// (0x0001fb9e) list_setting_pane

0xba78,	// (0x0001fbb0) list_single_2graphic_pane_ParamLimits

0xba78,	// (0x0001fbb0) list_single_2graphic_pane

0xba78,	// (0x0001fbb0) list_single_graphic_heading_pane_ParamLimits

0xba78,	// (0x0001fbb0) list_single_graphic_heading_pane

0xba78,	// (0x0001fbb0) list_single_graphic_pane_ParamLimits

0xba78,	// (0x0001fbb0) list_single_graphic_pane

0xba78,	// (0x0001fbb0) list_single_heading_pane_ParamLimits

0xba78,	// (0x0001fbb0) list_single_heading_pane

0xba78,	// (0x0001fbb0) list_single_large_graphic_pane_ParamLimits

0xba78,	// (0x0001fbb0) list_single_large_graphic_pane

0xba78,	// (0x0001fbb0) list_single_number_heading_pane_ParamLimits

0xba78,	// (0x0001fbb0) list_single_number_heading_pane

0xba78,	// (0x0001fbb0) list_single_number_pane_ParamLimits

0xba78,	// (0x0001fbb0) list_single_number_pane

0xba78,	// (0x0001fbb0) list_single_pane_ParamLimits

0xba78,	// (0x0001fbb0) list_single_pane

0xc303,	// (0x0002043b) list_highlight_pane_cp1

0xc6db,	// (0x00020813) list_single_pane_g1_ParamLimits

0xc6db,	// (0x00020813) list_single_pane_g1

0xc6e7,	// (0x0002081f) list_single_pane_g2_ParamLimits

0xc6e7,	// (0x0002081f) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00023700) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00023700) list_single_pane_g

0xba50,	// (0x0001fb88) list_single_pane_t1_ParamLimits

0xba50,	// (0x0001fb88) list_single_pane_t1

0xc6db,	// (0x00020813) list_single_number_pane_g1_ParamLimits

0xc6db,	// (0x00020813) list_single_number_pane_g1

0xc6e7,	// (0x0002081f) list_single_number_pane_g2_ParamLimits

0xc6e7,	// (0x0002081f) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00023700) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00023700) list_single_number_pane_g

0x1c87,	// (0x00015dbf) list_single_number_pane_t1_ParamLimits

0x1c87,	// (0x00015dbf) list_single_number_pane_t1

0xb85c,	// (0x0001f994) list_single_number_pane_t2_ParamLimits

0xb85c,	// (0x0001f994) list_single_number_pane_t2

0x0001,

0xf944,	// (0x00023a7c) list_single_number_pane_t_ParamLimits

0xf944,	// (0x00023a7c) list_single_number_pane_t

0x1c7b,	// (0x00015db3) list_single_graphic_pane_g1_ParamLimits

0x1c7b,	// (0x00015db3) list_single_graphic_pane_g1

0xc6db,	// (0x00020813) list_single_graphic_pane_g2_ParamLimits

0xc6db,	// (0x00020813) list_single_graphic_pane_g2

0xc6e7,	// (0x0002081f) list_single_graphic_pane_g3_ParamLimits

0xc6e7,	// (0x0002081f) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000236f9) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000236f9) list_single_graphic_pane_g

0x1c87,	// (0x00015dbf) list_single_graphic_pane_t1_ParamLimits

0x1c87,	// (0x00015dbf) list_single_graphic_pane_t1

0xc6db,	// (0x00020813) list_single_heading_pane_g1_ParamLimits

0xc6db,	// (0x00020813) list_single_heading_pane_g1

0xc6e7,	// (0x0002081f) list_single_heading_pane_g2_ParamLimits

0xc6e7,	// (0x0002081f) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00023700) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00023700) list_single_heading_pane_g

0xa2a3,	// (0x0001e3db) list_single_heading_pane_t1_ParamLimits

0xa2a3,	// (0x0001e3db) list_single_heading_pane_t1

0xa2b9,	// (0x0001e3f1) list_single_heading_pane_t2_ParamLimits

0xa2b9,	// (0x0001e3f1) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00023705) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00023705) list_single_heading_pane_t

0xc6db,	// (0x00020813) list_single_number_heading_pane_g1_ParamLimits

0xc6db,	// (0x00020813) list_single_number_heading_pane_g1

0xc6e7,	// (0x0002081f) list_single_number_heading_pane_g2_ParamLimits

0xc6e7,	// (0x0002081f) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00023700) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00023700) list_single_number_heading_pane_g

0xa2a3,	// (0x0001e3db) list_single_number_heading_pane_t1_ParamLimits

0xa2a3,	// (0x0001e3db) list_single_number_heading_pane_t1

0xa2cb,	// (0x0001e403) list_single_number_heading_pane_t2_ParamLimits

0xa2cb,	// (0x0001e403) list_single_number_heading_pane_t2

0xa2dd,	// (0x0001e415) list_single_number_heading_pane_t3_ParamLimits

0xa2dd,	// (0x0001e415) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002370a) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002370a) list_single_number_heading_pane_t

0xa2ef,	// (0x0001e427) list_single_graphic_heading_pane_g1_ParamLimits

0xa2ef,	// (0x0001e427) list_single_graphic_heading_pane_g1

0xa2fb,	// (0x0001e433) list_single_graphic_heading_pane_g4_ParamLimits

0xa2fb,	// (0x0001e433) list_single_graphic_heading_pane_g4

0xc6e7,	// (0x0002081f) list_single_graphic_heading_pane_g5_ParamLimits

0xc6e7,	// (0x0002081f) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00023711) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00023711) list_single_graphic_heading_pane_g

0xa2a3,	// (0x0001e3db) list_single_graphic_heading_pane_t1_ParamLimits

0xa2a3,	// (0x0001e3db) list_single_graphic_heading_pane_t1

0xa30c,	// (0x0001e444) list_single_graphic_heading_pane_t2_ParamLimits

0xa30c,	// (0x0001e444) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00023718) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00023718) list_single_graphic_heading_pane_t

0x3c93,	// (0x00017dcb) list_single_large_graphic_pane_g1_ParamLimits

0x3c93,	// (0x00017dcb) list_single_large_graphic_pane_g1

0xc6db,	// (0x00020813) list_single_large_graphic_pane_g2_ParamLimits

0xc6db,	// (0x00020813) list_single_large_graphic_pane_g2

0xc6e7,	// (0x0002081f) list_single_large_graphic_pane_g3_ParamLimits

0xc6e7,	// (0x0002081f) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002371d) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002371d) list_single_large_graphic_pane_g

0x23f5,	// (0x0001652d) wait_border_pane_g2_copy1

0xa31e,	// (0x0001e456) list_single_large_graphic_pane_g4_cp2

0x1c87,	// (0x00015dbf) list_single_large_graphic_pane_t1_ParamLimits

0x1c87,	// (0x00015dbf) list_single_large_graphic_pane_t1

0xa326,	// (0x0001e45e) list_double_pane_g1_ParamLimits

0xa326,	// (0x0001e45e) list_double_pane_g1

0xa332,	// (0x0001e46a) list_double_pane_g2_ParamLimits

0xa332,	// (0x0001e46a) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00023724) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00023724) list_double_pane_g

0xa33e,	// (0x0001e476) list_double_pane_t1_ParamLimits

0xa33e,	// (0x0001e476) list_double_pane_t1

0xa354,	// (0x0001e48c) list_double_pane_t2_ParamLimits

0xa354,	// (0x0001e48c) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00023729) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00023729) list_double_pane_t

0xa366,	// (0x0001e49e) list_double2_pane_g1_ParamLimits

0xa366,	// (0x0001e49e) list_double2_pane_g1

0xa377,	// (0x0001e4af) list_double2_pane_g2_ParamLimits

0xa377,	// (0x0001e4af) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002372e) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002372e) list_double2_pane_g

0xa383,	// (0x0001e4bb) list_double2_pane_t1_ParamLimits

0xa383,	// (0x0001e4bb) list_double2_pane_t1

0xa399,	// (0x0001e4d1) list_double2_pane_t2_ParamLimits

0xa399,	// (0x0001e4d1) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00023733) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00023733) list_double2_pane_t

0xa326,	// (0x0001e45e) list_double_number_pane_g1_ParamLimits

0xa326,	// (0x0001e45e) list_double_number_pane_g1

0xa332,	// (0x0001e46a) list_double_number_pane_g2_ParamLimits

0xa332,	// (0x0001e46a) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00023724) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00023724) list_double_number_pane_g

0xa3ab,	// (0x0001e4e3) list_double_number_pane_t1_ParamLimits

0xa3ab,	// (0x0001e4e3) list_double_number_pane_t1

0xa3bd,	// (0x0001e4f5) list_double_number_pane_t2_ParamLimits

0xa3bd,	// (0x0001e4f5) list_double_number_pane_t2

0xa3d3,	// (0x0001e50b) list_double_number_pane_t3_ParamLimits

0xa3d3,	// (0x0001e50b) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00023738) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00023738) list_double_number_pane_t

0xa3e5,	// (0x0001e51d) list_double_graphic_pane_g1_ParamLimits

0xa3e5,	// (0x0001e51d) list_double_graphic_pane_g1

0xa3f1,	// (0x0001e529) list_double_graphic_pane_g2_ParamLimits

0xa3f1,	// (0x0001e529) list_double_graphic_pane_g2

0xa400,	// (0x0001e538) list_double_graphic_pane_g3_ParamLimits

0xa400,	// (0x0001e538) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002373f) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002373f) list_double_graphic_pane_g

0xa3bd,	// (0x0001e4f5) list_double_graphic_pane_t1_ParamLimits

0xa3bd,	// (0x0001e4f5) list_double_graphic_pane_t1

0xa3d3,	// (0x0001e50b) list_double_graphic_pane_t2_ParamLimits

0xa3d3,	// (0x0001e50b) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00023748) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00023748) list_double_graphic_pane_t

0xa418,	// (0x0001e550) list_double2_graphic_pane_g1_ParamLimits

0xa418,	// (0x0001e550) list_double2_graphic_pane_g1

0x4dc7,	// (0x00018eff) list_double2_graphic_pane_g2_ParamLimits

0x4dc7,	// (0x00018eff) list_double2_graphic_pane_g2

0xa377,	// (0x0001e4af) list_double2_graphic_pane_g3_ParamLimits

0xa377,	// (0x0001e4af) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002374d) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002374d) list_double2_graphic_pane_g

0xa424,	// (0x0001e55c) list_double2_graphic_pane_t1_ParamLimits

0xa424,	// (0x0001e55c) list_double2_graphic_pane_t1

0xa43a,	// (0x0001e572) list_double2_graphic_pane_t2_ParamLimits

0xa43a,	// (0x0001e572) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00023754) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00023754) list_double2_graphic_pane_t

0xa44c,	// (0x0001e584) list_double_large_graphic_pane_g1_ParamLimits

0xa44c,	// (0x0001e584) list_double_large_graphic_pane_g1

0xa46b,	// (0x0001e5a3) list_double_large_graphic_pane_g2_ParamLimits

0xa46b,	// (0x0001e5a3) list_double_large_graphic_pane_g2

0xa332,	// (0x0001e46a) list_double_large_graphic_pane_g3_ParamLimits

0xa332,	// (0x0001e46a) list_double_large_graphic_pane_g3

0xa47c,	// (0x0001e5b4) list_double_large_graphic_pane_g4_ParamLimits

0xa47c,	// (0x0001e5b4) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00023759) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00023759) list_double_large_graphic_pane_g

0xa48f,	// (0x0001e5c7) list_double_large_graphic_pane_t1_ParamLimits

0xa48f,	// (0x0001e5c7) list_double_large_graphic_pane_t1

0xa4a8,	// (0x0001e5e0) list_double_large_graphic_pane_t2_ParamLimits

0xa4a8,	// (0x0001e5e0) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00023764) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00023764) list_double_large_graphic_pane_t

0xa4ba,	// (0x0001e5f2) list_double2_large_graphic_pane_g1_ParamLimits

0xa4ba,	// (0x0001e5f2) list_double2_large_graphic_pane_g1

0xa366,	// (0x0001e49e) list_double2_large_graphic_pane_g2_ParamLimits

0xa366,	// (0x0001e49e) list_double2_large_graphic_pane_g2

0xa377,	// (0x0001e4af) list_double2_large_graphic_pane_g3_ParamLimits

0xa377,	// (0x0001e4af) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00023769) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00023769) list_double2_large_graphic_pane_g

0xa424,	// (0x0001e55c) list_double2_large_graphic_pane_t1_ParamLimits

0xa424,	// (0x0001e55c) list_double2_large_graphic_pane_t1

0xa43a,	// (0x0001e572) list_double2_large_graphic_pane_t2_ParamLimits

0xa43a,	// (0x0001e572) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x00023754) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x00023754) list_double2_large_graphic_pane_t

0xa4c6,	// (0x0001e5fe) list_double_heading_pane_g1_ParamLimits

0xa4c6,	// (0x0001e5fe) list_double_heading_pane_g1

0xa4d7,	// (0x0001e60f) list_double_heading_pane_g2_ParamLimits

0xa4d7,	// (0x0001e60f) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x00023770) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x00023770) list_double_heading_pane_g

0xa4e3,	// (0x0001e61b) list_double_heading_pane_t1_ParamLimits

0xa4e3,	// (0x0001e61b) list_double_heading_pane_t1

0xa4f9,	// (0x0001e631) list_double_heading_pane_t2_ParamLimits

0xa4f9,	// (0x0001e631) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x00023775) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x00023775) list_double_heading_pane_t

0xa3e5,	// (0x0001e51d) list_double_graphic_heading_pane_g1_ParamLimits

0xa3e5,	// (0x0001e51d) list_double_graphic_heading_pane_g1

0xa4c6,	// (0x0001e5fe) list_double_graphic_heading_pane_g2_ParamLimits

0xa4c6,	// (0x0001e5fe) list_double_graphic_heading_pane_g2

0xa4d7,	// (0x0001e60f) list_double_graphic_heading_pane_g3_ParamLimits

0xa4d7,	// (0x0001e60f) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x0002377a) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x0002377a) list_double_graphic_heading_pane_g

0xa4e3,	// (0x0001e61b) list_double_graphic_heading_pane_t1_ParamLimits

0xa4e3,	// (0x0001e61b) list_double_graphic_heading_pane_t1

0xa4f9,	// (0x0001e631) list_double_graphic_heading_pane_t2_ParamLimits

0xa4f9,	// (0x0001e631) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x00023775) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x00023775) list_double_graphic_heading_pane_t

0xa46b,	// (0x0001e5a3) list_double_time_pane_g1_ParamLimits

0xa46b,	// (0x0001e5a3) list_double_time_pane_g1

0xa332,	// (0x0001e46a) list_double_time_pane_g2_ParamLimits

0xa332,	// (0x0001e46a) list_double_time_pane_g2

0x0001,

0xf649,	// (0x00023781) list_double_time_pane_g_ParamLimits

0xf649,	// (0x00023781) list_double_time_pane_g

0xa50b,	// (0x0001e643) list_double_time_pane_t1_ParamLimits

0xa50b,	// (0x0001e643) list_double_time_pane_t1

0xa521,	// (0x0001e659) list_double_time_pane_t2_ParamLimits

0xa521,	// (0x0001e659) list_double_time_pane_t2

0xa533,	// (0x0001e66b) list_double_time_pane_t3_ParamLimits

0xa533,	// (0x0001e66b) list_double_time_pane_t3

0xa545,	// (0x0001e67d) list_double_time_pane_t4_ParamLimits

0xa545,	// (0x0001e67d) list_double_time_pane_t4

0x0003,

0xf64e,	// (0x00023786) list_double_time_pane_t_ParamLimits

0xf64e,	// (0x00023786) list_double_time_pane_t

0x4dc7,	// (0x00018eff) list_setting_pane_g1_ParamLimits

0x4dc7,	// (0x00018eff) list_setting_pane_g1

0xa377,	// (0x0001e4af) list_setting_pane_g2_ParamLimits

0xa377,	// (0x0001e4af) list_setting_pane_g2

0x0001,

0xf657,	// (0x0002378f) list_setting_pane_g_ParamLimits

0xf657,	// (0x0002378f) list_setting_pane_g

0xa557,	// (0x0001e68f) list_setting_pane_t1_ParamLimits

0xa557,	// (0x0001e68f) list_setting_pane_t1

0xa56e,	// (0x0001e6a6) list_setting_pane_t2_ParamLimits

0xa56e,	// (0x0001e6a6) list_setting_pane_t2

0x0002,

0xf65c,	// (0x00023794) list_setting_pane_t_ParamLimits

0xf65c,	// (0x00023794) list_setting_pane_t

0xa5ad,	// (0x0001e6e5) set_value_pane_cp_ParamLimits

0xa5ad,	// (0x0001e6e5) set_value_pane_cp

0x4dc7,	// (0x00018eff) list_setting_number_pane_g1_ParamLimits

0x4dc7,	// (0x00018eff) list_setting_number_pane_g1

0xa377,	// (0x0001e4af) list_setting_number_pane_g2_ParamLimits

0xa377,	// (0x0001e4af) list_setting_number_pane_g2

0x0001,

0xf657,	// (0x0002378f) list_setting_number_pane_g_ParamLimits

0xf657,	// (0x0002378f) list_setting_number_pane_g

0xa5b9,	// (0x0001e6f1) list_setting_number_pane_t1_ParamLimits

0xa5b9,	// (0x0001e6f1) list_setting_number_pane_t1

0xa5cd,	// (0x0001e705) list_setting_number_pane_t2_ParamLimits

0xa5cd,	// (0x0001e705) list_setting_number_pane_t2

0xa5e4,	// (0x0001e71c) list_setting_number_pane_t3_ParamLimits

0xa5e4,	// (0x0001e71c) list_setting_number_pane_t3

0x0003,

0xf663,	// (0x0002379b) list_setting_number_pane_t_ParamLimits

0xf663,	// (0x0002379b) list_setting_number_pane_t

0xa5ad,	// (0x0001e6e5) set_value_pane_ParamLimits

0xa5ad,	// (0x0001e6e5) set_value_pane

0xc708,	// (0x00020840) bg_set_opt_pane_ParamLimits

0xc708,	// (0x00020840) bg_set_opt_pane

0xc729,	// (0x00020861) set_value_pane_t1

0xc737,	// (0x0002086f) slider_set_pane_cp3

0xa627,	// (0x0001e75f) volume_small_pane_cp

0xc740,	// (0x00020878) list_form_gen_pane

0xc749,	// (0x00020881) scroll_pane_cp8

0xa630,	// (0x0001e768) form_field_data_pane_ParamLimits

0xa630,	// (0x0001e768) form_field_data_pane

0xa647,	// (0x0001e77f) form_field_data_wide_pane_ParamLimits

0xa647,	// (0x0001e77f) form_field_data_wide_pane

0xa667,	// (0x0001e79f) form_field_popup_pane_ParamLimits

0xa667,	// (0x0001e79f) form_field_popup_pane

0xa687,	// (0x0001e7bf) form_field_popup_wide_pane_ParamLimits

0xa687,	// (0x0001e7bf) form_field_popup_wide_pane

0xc76a,	// (0x000208a2) form_field_slider_pane_ParamLimits

0xc76a,	// (0x000208a2) form_field_slider_pane

0xa69e,	// (0x0001e7d6) form_field_slider_wide_pane_ParamLimits

0xa69e,	// (0x0001e7d6) form_field_slider_wide_pane

0xc77d,	// (0x000208b5) data_form_pane

0xa6bb,	// (0x0001e7f3) form_field_data_pane_t1

0xc789,	// (0x000208c1) input_focus_pane

0xc797,	// (0x000208cf) data_form_wide_pane

0xc7d4,	// (0x0002090c) form_field_data_wide_pane_t1

0xc61f,	// (0x00020757) input_focus_pane_cp6

0xa6d5,	// (0x0001e80d) form_field_popup_pane_t1

0xc789,	// (0x000208c1) input_focus_pane_cp7

0xc7f6,	// (0x0002092e) list_form_pane

0xc80a,	// (0x00020942) form_field_popup_wide_pane_t1

0xc789,	// (0x000208c1) input_focus_pane_cp8

0xc81f,	// (0x00020957) list_form_wide_pane

0xa6f7,	// (0x0001e82f) form_field_slider_pane_t1_ParamLimits

0xa6f7,	// (0x0001e82f) form_field_slider_pane_t1

0xa70f,	// (0x0001e847) form_field_slider_pane_t2_ParamLimits

0xa70f,	// (0x0001e847) form_field_slider_pane_t2

0x0001,

0xf673,	// (0x000237ab) form_field_slider_pane_t_ParamLimits

0xf673,	// (0x000237ab) form_field_slider_pane_t

0xc351,	// (0x00020489) input_focus_pane_cp9_ParamLimits

0xc351,	// (0x00020489) input_focus_pane_cp9

0xa724,	// (0x0001e85c) slider_cont_pane_ParamLimits

0xa724,	// (0x0001e85c) slider_cont_pane

0xc82b,	// (0x00020963) form_field_slider_wide_pane_t1_ParamLimits

0xc82b,	// (0x00020963) form_field_slider_wide_pane_t1

0xc83d,	// (0x00020975) form_field_slider_wide_pane_t2_ParamLimits

0xc83d,	// (0x00020975) form_field_slider_wide_pane_t2

0x0001,

0xf678,	// (0x000237b0) form_field_slider_wide_pane_t_ParamLimits

0xf678,	// (0x000237b0) form_field_slider_wide_pane_t

0xc351,	// (0x00020489) input_focus_pane_cp10_ParamLimits

0xc351,	// (0x00020489) input_focus_pane_cp10

0xa738,	// (0x0001e870) slider_cont_pane_cp1_ParamLimits

0xa738,	// (0x0001e870) slider_cont_pane_cp1

0xa74c,	// (0x0001e884) slider_form_pane_cp

0xc84f,	// (0x00020987) input_focus_pane_g1

0xc857,	// (0x0002098f) input_focus_pane_g2

0xc85f,	// (0x00020997) input_focus_pane_g3

0xc867,	// (0x0002099f) input_focus_pane_g4

0xc86f,	// (0x000209a7) input_focus_pane_g5

0xc877,	// (0x000209af) input_focus_pane_g6

0xc87f,	// (0x000209b7) input_focus_pane_g7

0xc887,	// (0x000209bf) input_focus_pane_g8

0xc88f,	// (0x000209c7) input_focus_pane_g9

0xc2f9,	// (0x00020431) input_focus_pane_g10

0x0009,

0xf67d,	// (0x000237b5) input_focus_pane_g

0x23fe,	// (0x00016536) wait_border_pane_g3_copy1

0xa754,	// (0x0001e88c) data_form_pane_t1

0xc2f9,	// (0x00020431) wait_anim_pane_g1_copy1

0xba34,	// (0x0001fb6c) data_form_wide_pane_t1

0xa76e,	// (0x0001e8a6) list_form_graphic_pane_cp_ParamLimits

0xa76e,	// (0x0001e8a6) list_form_graphic_pane_cp

0x32ff,	// (0x00017437) slider_form_pane_g1

0x3308,	// (0x00017440) slider_form_pane_g2

0x0006,

0xf974,	// (0x00023aac) slider_form_pane_g

0xa780,	// (0x0001e8b8) list_form_graphic_pane_ParamLimits

0xa780,	// (0x0001e8b8) list_form_graphic_pane

0xa793,	// (0x0001e8cb) list_form_graphic_pane_g1

0xa79b,	// (0x0001e8d3) list_form_graphic_pane_t1_ParamLimits

0xa79b,	// (0x0001e8d3) list_form_graphic_pane_t1

0xc35f,	// (0x00020497) list_highlight_pane_cp5_ParamLimits

0xc35f,	// (0x00020497) list_highlight_pane_cp5

0xa7b0,	// (0x0001e8e8) find_pane_g1

0xc897,	// (0x000209cf) input_find_pane

0xa7b9,	// (0x0001e8f1) input_find_pane_g1_ParamLimits

0xa7b9,	// (0x0001e8f1) input_find_pane_g1

0xa7c5,	// (0x0001e8fd) input_find_pane_t1_ParamLimits

0xa7c5,	// (0x0001e8fd) input_find_pane_t1

0xa7da,	// (0x0001e912) input_find_pane_t2_ParamLimits

0xa7da,	// (0x0001e912) input_find_pane_t2

0x0001,

0xf692,	// (0x000237ca) input_find_pane_t_ParamLimits

0xf692,	// (0x000237ca) input_find_pane_t

0xc8a0,	// (0x000209d8) input_focus_pane_cp5_ParamLimits

0xc8a0,	// (0x000209d8) input_focus_pane_cp5

0xc8ae,	// (0x000209e6) bg_popup_window_pane_cp2_ParamLimits

0xc8ae,	// (0x000209e6) bg_popup_window_pane_cp2

0xc8bb,	// (0x000209f3) listscroll_menu_pane_ParamLimits

0xc8bb,	// (0x000209f3) listscroll_menu_pane

0xa7fb,	// (0x0001e933) popup_submenu_window_ParamLimits

0xa7fb,	// (0x0001e933) popup_submenu_window

0xc8c7,	// (0x000209ff) find_popup_pane_g1

0xa823,	// (0x0001e95b) input_popup_find_pane_cp

0xc8a0,	// (0x000209d8) input_focus_pane_cp4_ParamLimits

0xc8a0,	// (0x000209d8) input_focus_pane_cp4

0xc8cf,	// (0x00020a07) input_popup_find_pane_t1_ParamLimits

0xc8cf,	// (0x00020a07) input_popup_find_pane_t1

0xc303,	// (0x0002043b) bg_popup_sub_pane_cp

0xc8fd,	// (0x00020a35) listscroll_popup_sub_pane

0xc905,	// (0x00020a3d) list_submenu_pane_ParamLimits

0xc905,	// (0x00020a3d) list_submenu_pane

0xc916,	// (0x00020a4e) scroll_pane_cp4

0xa83b,	// (0x0001e973) list_single_popup_submenu_pane_ParamLimits

0xa83b,	// (0x0001e973) list_single_popup_submenu_pane

0xa84f,	// (0x0001e987) list_single_popup_submenu_pane_g1

0xa857,	// (0x0001e98f) list_single_popup_submenu_pane_t1_ParamLimits

0xa857,	// (0x0001e98f) list_single_popup_submenu_pane_t1

0xc351,	// (0x00020489) bg_active_tab_pane_cp1_ParamLimits

0xc351,	// (0x00020489) bg_active_tab_pane_cp1

0xc91e,	// (0x00020a56) tabs_2_active_pane_g1

0xa86c,	// (0x0001e9a4) tabs_2_active_pane_t1

0xc351,	// (0x00020489) bg_passive_tab_pane_cp1_ParamLimits

0xc351,	// (0x00020489) bg_passive_tab_pane_cp1

0xc91e,	// (0x00020a56) tabs_2_passive_pane_g1

0xa86c,	// (0x0001e9a4) tabs_2_passive_pane_t1

0xc35f,	// (0x00020497) bg_active_tab_pane_cp4

0xa87e,	// (0x0001e9b6) tabs_2_long_active_pane_t1

0x17c2,	// (0x000158fa) bg_passive_tab_pane_cp4

0xea9d,	// (0x00022bd5) list_single_midp_graphic_pane_g4_ParamLimits

0xc35f,	// (0x00020497) bg_active_tab_pane_cp5

0xa891,	// (0x0001e9c9) tabs_3_long_active_pane_t1

0x17c2,	// (0x000158fa) bg_passive_tab_pane_cp5

0xea9d,	// (0x00022bd5) list_single_midp_graphic_pane_g4

0xc35f,	// (0x00020497) bg_popup_window_pane_cp13_ParamLimits

0xc35f,	// (0x00020497) bg_popup_window_pane_cp13

0xc926,	// (0x00020a5e) listscroll_popup_fast_pane_ParamLimits

0xc926,	// (0x00020a5e) listscroll_popup_fast_pane

0xc932,	// (0x00020a6a) grid_popup_fast_pane_ParamLimits

0xc932,	// (0x00020a6a) grid_popup_fast_pane

0xc944,	// (0x00020a7c) scroll_pane_cp9_ParamLimits

0xc944,	// (0x00020a7c) scroll_pane_cp9

0x5250,	// (0x00019388) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5250,	// (0x00019388) list_single_graphic_hl_pane_t1_cp2

0xc957,	// (0x00020a8f) input_focus_pane_cp20_ParamLimits

0xc957,	// (0x00020a8f) input_focus_pane_cp20

0xc965,	// (0x00020a9d) query_popup_data_pane_t1_ParamLimits

0xc965,	// (0x00020a9d) query_popup_data_pane_t1

0xc978,	// (0x00020ab0) query_popup_data_pane_t2_ParamLimits

0xc978,	// (0x00020ab0) query_popup_data_pane_t2

0xc9be,	// (0x00020af6) query_popup_data_pane_t3_ParamLimits

0xc9be,	// (0x00020af6) query_popup_data_pane_t3

0xc9ff,	// (0x00020b37) query_popup_data_pane_t4_ParamLimits

0xc9ff,	// (0x00020b37) query_popup_data_pane_t4

0xe297,	// (0x000223cf) query_popup_data_pane_t5_ParamLimits

0xe297,	// (0x000223cf) query_popup_data_pane_t5

0x0004,

0xf697,	// (0x000237cf) query_popup_data_pane_t_ParamLimits

0xf697,	// (0x000237cf) query_popup_data_pane_t

0xc84f,	// (0x00020987) bg_set_opt_pane_g1

0xc857,	// (0x0002098f) bg_set_opt_pane_g2

0xc85f,	// (0x00020997) bg_set_opt_pane_g3

0xc867,	// (0x0002099f) bg_set_opt_pane_g4

0xc86f,	// (0x000209a7) bg_set_opt_pane_g5

0xc877,	// (0x000209af) bg_set_opt_pane_g6

0xc87f,	// (0x000209b7) bg_set_opt_pane_g7

0xc887,	// (0x000209bf) bg_set_opt_pane_g8

0xc88f,	// (0x000209c7) bg_set_opt_pane_g9

0x0008,

0xf6a2,	// (0x000237da) bg_set_opt_pane_g

0xe77a,	// (0x000228b2) control_top_pane_stacon_ParamLimits

0xe77a,	// (0x000228b2) control_top_pane_stacon

0xe7cd,	// (0x00022905) signal_pane_stacon_ParamLimits

0xe7cd,	// (0x00022905) signal_pane_stacon

0x110c,	// (0x00015244) stacon_top_pane_g1_ParamLimits

0x110c,	// (0x00015244) stacon_top_pane_g1

0xe7f2,	// (0x0002292a) title_pane_stacon_ParamLimits

0xe7f2,	// (0x0002292a) title_pane_stacon

0xe81c,	// (0x00022954) uni_indicator_pane_stacon_ParamLimits

0xe81c,	// (0x00022954) uni_indicator_pane_stacon

0xe831,	// (0x00022969) battery_pane_stacon_ParamLimits

0xe831,	// (0x00022969) battery_pane_stacon

0xe875,	// (0x000229ad) control_bottom_pane_stacon_ParamLimits

0xe875,	// (0x000229ad) control_bottom_pane_stacon

0xe898,	// (0x000229d0) navi_pane_stacon_ParamLimits

0xe898,	// (0x000229d0) navi_pane_stacon

0x112e,	// (0x00015266) stacon_bottom_pane_g1_ParamLimits

0x112e,	// (0x00015266) stacon_bottom_pane_g1

0xe2ce,	// (0x00022406) aid_levels_signal_lsc_ParamLimits

0xe2ce,	// (0x00022406) aid_levels_signal_lsc

0xe2e4,	// (0x0002241c) signal_pane_stacon_g1_ParamLimits

0xe2e4,	// (0x0002241c) signal_pane_stacon_g1

0xe2f8,	// (0x00022430) signal_pane_stacon_g2_ParamLimits

0xe2f8,	// (0x00022430) signal_pane_stacon_g2

0x0001,

0xf6b5,	// (0x000237ed) signal_pane_stacon_g_ParamLimits

0xf6b5,	// (0x000237ed) signal_pane_stacon_g

0xe33a,	// (0x00022472) title_pane_stacon_t1_ParamLimits

0xe33a,	// (0x00022472) title_pane_stacon_t1

0xe35f,	// (0x00022497) uni_indicator_pane_stacon_g1

0xe369,	// (0x000224a1) uni_indicator_pane_stacon_g2

0xe373,	// (0x000224ab) uni_indicator_pane_stacon_g3

0xe37d,	// (0x000224b5) uni_indicator_pane_stacon_g4

0x0003,

0xf6c1,	// (0x000237f9) uni_indicator_pane_stacon_g

0xe387,	// (0x000224bf) control_top_pane_stacon_g1

0xe38f,	// (0x000224c7) control_top_pane_stacon_t1_ParamLimits

0xe38f,	// (0x000224c7) control_top_pane_stacon_t1

0xe3c6,	// (0x000224fe) aid_levels_battery_lsc_ParamLimits

0xe3c6,	// (0x000224fe) aid_levels_battery_lsc

0xe3dd,	// (0x00022515) battery_pane_stacon_g1_ParamLimits

0xe3dd,	// (0x00022515) battery_pane_stacon_g1

0xe3f0,	// (0x00022528) battery_pane_stacon_g2_ParamLimits

0xe3f0,	// (0x00022528) battery_pane_stacon_g2

0x0001,

0xf6ca,	// (0x00023802) battery_pane_stacon_g_ParamLimits

0xf6ca,	// (0x00023802) battery_pane_stacon_g

0xe42e,	// (0x00022566) navi_icon_pane_stacon

0xe442,	// (0x0002257a) navi_navi_pane_stacon

0xe42e,	// (0x00022566) navi_text_pane_stacon

0xe387,	// (0x000224bf) control_bottom_pane_stacon_g1

0xe456,	// (0x0002258e) control_bottom_pane_stacon_t1_ParamLimits

0xe456,	// (0x0002258e) control_bottom_pane_stacon_t1

0xa8bd,	// (0x0001e9f5) grid_app_pane_ParamLimits

0xa8bd,	// (0x0001e9f5) grid_app_pane

0xa8f5,	// (0x0001ea2d) scroll_pane_cp15_ParamLimits

0xa8f5,	// (0x0001ea2d) scroll_pane_cp15

0xa90a,	// (0x0001ea42) cell_app_pane_ParamLimits

0xa90a,	// (0x0001ea42) cell_app_pane

0xa94f,	// (0x0001ea87) cell_app_pane_g1_ParamLimits

0xa94f,	// (0x0001ea87) cell_app_pane_g1

0xe4a7,	// (0x000225df) cell_app_pane_g2_ParamLimits

0xe4a7,	// (0x000225df) cell_app_pane_g2

0x0001,

0xf6cf,	// (0x00023807) cell_app_pane_g_ParamLimits

0xf6cf,	// (0x00023807) cell_app_pane_g

0xa973,	// (0x0001eaab) cell_app_pane_t1_ParamLimits

0xa973,	// (0x0001eaab) cell_app_pane_t1

0xe4b3,	// (0x000225eb) grid_highlight_pane_ParamLimits

0xe4b3,	// (0x000225eb) grid_highlight_pane

0xc84f,	// (0x00020987) cell_highlight_pane_g1

0xc857,	// (0x0002098f) cell_highlight_pane_g2

0xc85f,	// (0x00020997) cell_highlight_pane_g3

0xc867,	// (0x0002099f) cell_highlight_pane_g4

0xc86f,	// (0x000209a7) cell_highlight_pane_g5

0xc877,	// (0x000209af) cell_highlight_pane_g6

0xc87f,	// (0x000209b7) cell_highlight_pane_g7

0xc887,	// (0x000209bf) cell_highlight_pane_g8

0xc88f,	// (0x000209c7) cell_highlight_pane_g9

0xc2f9,	// (0x00020431) cell_highlight_pane_g10

0x0009,

0xf67d,	// (0x000237b5) cell_highlight_pane_g

0xe4ce,	// (0x00022606) bg_scroll_pane

0x8a86,	// (0x0001cbbe) scroll_handle_pane

0xe52a,	// (0x00022662) scroll_bg_pane_g1

0xe53f,	// (0x00022677) scroll_bg_pane_g2

0xe557,	// (0x0002268f) scroll_bg_pane_g3

0x0002,

0xf6d4,	// (0x0002380c) scroll_bg_pane_g

0xa98a,	// (0x0001eac2) scroll_handle_focus_pane_ParamLimits

0xa98a,	// (0x0001eac2) scroll_handle_focus_pane

0xe52a,	// (0x00022662) scroll_handle_pane_g1

0xe56c,	// (0x000226a4) scroll_handle_pane_g2

0xe557,	// (0x0002268f) scroll_handle_pane_g3

0x0002,

0xf6db,	// (0x00023813) scroll_handle_pane_g

0xc8a0,	// (0x000209d8) bg_popup_sub_pane_cp21_ParamLimits

0xc8a0,	// (0x000209d8) bg_popup_sub_pane_cp21

0xa997,	// (0x0001eacf) popup_fep_japan_predictive_window_t1_ParamLimits

0xa997,	// (0x0001eacf) popup_fep_japan_predictive_window_t1

0xa9ae,	// (0x0001eae6) popup_fep_japan_predictive_window_t2_ParamLimits

0xa9ae,	// (0x0001eae6) popup_fep_japan_predictive_window_t2

0xa9e1,	// (0x0001eb19) popup_fep_japan_predictive_window_t3_ParamLimits

0xa9e1,	// (0x0001eb19) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e2,	// (0x0002381a) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e2,	// (0x0002381a) popup_fep_japan_predictive_window_t

0xc303,	// (0x0002043b) bg_popup_sub_pane_cp23

0xaa18,	// (0x0001eb50) listscroll_japin_cand_pane

0xe580,	// (0x000226b8) popup_fep_japan_candidate_window_t1

0xe58e,	// (0x000226c6) candidate_pane_ParamLimits

0xe58e,	// (0x000226c6) candidate_pane

0xaa20,	// (0x0001eb58) scroll_pane_cp30

0xe5a0,	// (0x000226d8) list_single_popup_jap_candidate_pane_ParamLimits

0xe5a0,	// (0x000226d8) list_single_popup_jap_candidate_pane

0xc303,	// (0x0002043b) list_highlight_pane_cp30

0xe5b5,	// (0x000226ed) list_single_popup_jap_candidate_pane_t1

0xe5c4,	// (0x000226fc) level_1_signal

0xe5d1,	// (0x00022709) level_2_signal

0xe5de,	// (0x00022716) level_3_signal

0xe5eb,	// (0x00022723) level_4_signal

0xe5f8,	// (0x00022730) level_5_signal

0xe605,	// (0x0002273d) level_6_signal

0xe612,	// (0x0002274a) level_7_signal

0xe5c4,	// (0x000226fc) level_1_battery

0xe5d1,	// (0x00022709) level_2_battery

0xe5de,	// (0x00022716) level_3_battery

0xe5eb,	// (0x00022723) level_4_battery

0xe5f8,	// (0x00022730) level_5_battery

0xe605,	// (0x0002273d) level_6_battery

0xe612,	// (0x0002274a) level_7_battery

0xe656,	// (0x0002278e) list_menu_pane_ParamLimits

0xe656,	// (0x0002278e) list_menu_pane

0xe66c,	// (0x000227a4) scroll_pane_cp25_ParamLimits

0xe66c,	// (0x000227a4) scroll_pane_cp25

0xaa28,	// (0x0001eb60) list_double2_graphic_pane_cp2_ParamLimits

0xaa28,	// (0x0001eb60) list_double2_graphic_pane_cp2

0xaa28,	// (0x0001eb60) list_double2_large_graphic_pane_cp2_ParamLimits

0xaa28,	// (0x0001eb60) list_double2_large_graphic_pane_cp2

0xaa28,	// (0x0001eb60) list_double2_pane_cp2_ParamLimits

0xaa28,	// (0x0001eb60) list_double2_pane_cp2

0xaa28,	// (0x0001eb60) list_double_graphic_pane_cp2_ParamLimits

0xaa28,	// (0x0001eb60) list_double_graphic_pane_cp2

0xaa28,	// (0x0001eb60) list_double_large_graphic_pane_cp2_ParamLimits

0xaa28,	// (0x0001eb60) list_double_large_graphic_pane_cp2

0xaa28,	// (0x0001eb60) list_double_number_pane_cp2_ParamLimits

0xaa28,	// (0x0001eb60) list_double_number_pane_cp2

0xaa28,	// (0x0001eb60) list_double_pane_cp2_ParamLimits

0xaa28,	// (0x0001eb60) list_double_pane_cp2

0xaa37,	// (0x0001eb6f) list_single_2graphic_pane_cp2_ParamLimits

0xaa37,	// (0x0001eb6f) list_single_2graphic_pane_cp2

0xaa37,	// (0x0001eb6f) list_single_graphic_heading_pane_cp2_ParamLimits

0xaa37,	// (0x0001eb6f) list_single_graphic_heading_pane_cp2

0xaa37,	// (0x0001eb6f) list_single_graphic_pane_cp2_ParamLimits

0xaa37,	// (0x0001eb6f) list_single_graphic_pane_cp2

0xaa37,	// (0x0001eb6f) list_single_heading_pane_cp2_ParamLimits

0xaa37,	// (0x0001eb6f) list_single_heading_pane_cp2

0xe695,	// (0x000227cd) list_single_large_graphic_pane_cp2_ParamLimits

0xe695,	// (0x000227cd) list_single_large_graphic_pane_cp2

0xaa37,	// (0x0001eb6f) list_single_number_heading_pane_cp2_ParamLimits

0xaa37,	// (0x0001eb6f) list_single_number_heading_pane_cp2

0xaa37,	// (0x0001eb6f) list_single_number_pane_cp2_ParamLimits

0xaa37,	// (0x0001eb6f) list_single_number_pane_cp2

0xaa37,	// (0x0001eb6f) list_single_pane_cp2_ParamLimits

0xaa37,	// (0x0001eb6f) list_single_pane_cp2

0xe70a,	// (0x00022842) bg_popup_sub_pane_cp22

0xe720,	// (0x00022858) popup_side_volume_key_window_g1

0xe72c,	// (0x00022864) popup_side_volume_key_window_t1

0x8ad5,	// (0x0001cc0d) volume_small_pane_cp1

0xc351,	// (0x00020489) bg_popup_sub_pane_cp24_ParamLimits

0xc351,	// (0x00020489) bg_popup_sub_pane_cp24

0xe73a,	// (0x00022872) fep_china_uni_candidate_pane_ParamLimits

0xe73a,	// (0x00022872) fep_china_uni_candidate_pane

0xe74e,	// (0x00022886) fep_china_uni_entry_pane

0xe75e,	// (0x00022896) popup_fep_china_uni_window_g1

0xaac4,	// (0x0001ebfc) fep_china_uni_entry_pane_g1

0xaacc,	// (0x0001ec04) fep_china_uni_entry_pane_g2

0x0001,

0xf713,	// (0x0002384b) fep_china_uni_entry_pane_g

0x0f37,	// (0x0001506f) fep_entry_item_pane

0x0f41,	// (0x00015079) fep_candidate_item_pane

0xaad4,	// (0x0001ec0c) fep_china_uni_candidate_pane_g1

0x0f51,	// (0x00015089) fep_china_uni_candidate_pane_g2

0x0f59,	// (0x00015091) fep_china_uni_candidate_pane_g3

0xaadc,	// (0x0001ec14) fep_china_uni_candidate_pane_g4

0x0003,

0xf718,	// (0x00023850) fep_china_uni_candidate_pane_g

0xc2f9,	// (0x00020431) fep_entry_item_pane_g1

0x0f69,	// (0x000150a1) fep_entry_item_pane_t1_ParamLimits

0x0f69,	// (0x000150a1) fep_entry_item_pane_t1

0x0f7f,	// (0x000150b7) fep_candidate_item_pane_t1_ParamLimits

0x0f7f,	// (0x000150b7) fep_candidate_item_pane_t1

0x0f94,	// (0x000150cc) fep_candidate_item_pane_t2_ParamLimits

0x0f94,	// (0x000150cc) fep_candidate_item_pane_t2

0x0001,

0xf721,	// (0x00023859) fep_candidate_item_pane_t_ParamLimits

0xf721,	// (0x00023859) fep_candidate_item_pane_t

0xc35f,	// (0x00020497) list_highlight_pane_cp31_ParamLimits

0xc35f,	// (0x00020497) list_highlight_pane_cp31

0x0fa6,	// (0x000150de) level_1_signal_lsc

0x0faf,	// (0x000150e7) level_2_signal_lsc

0x0fb8,	// (0x000150f0) level_3_signal_lsc

0x0fc1,	// (0x000150f9) level_4_signal_lsc

0x0fca,	// (0x00015102) level_5_signal_lsc

0x0fd3,	// (0x0001510b) level_6_signal_lsc

0x0fdc,	// (0x00015114) level_7_signal_lsc

0x0fdc,	// (0x00015114) level_1_battery_lsc

0x0fe5,	// (0x0001511d) level_2_battery_lsc

0x0fee,	// (0x00015126) level_3_battery_lsc

0x0ff7,	// (0x0001512f) level_4_battery_lsc

0x1000,	// (0x00015138) level_5_battery_lsc

0x1009,	// (0x00015141) level_6_battery_lsc

0x0fa6,	// (0x000150de) level_7_battery_lsc

0x1012,	// (0x0001514a) scroll_handle_focus_pane_g1

0x101b,	// (0x00015153) scroll_handle_focus_pane_g2

0x1024,	// (0x0001515c) scroll_handle_focus_pane_g3

0x0002,

0xf726,	// (0x0002385e) scroll_handle_focus_pane_g

0xaae4,	// (0x0001ec1c) list_single_2graphic_pane_g1_ParamLimits

0xaae4,	// (0x0001ec1c) list_single_2graphic_pane_g1

0xa2fb,	// (0x0001e433) list_single_2graphic_pane_g2_ParamLimits

0xa2fb,	// (0x0001e433) list_single_2graphic_pane_g2

0xc6e7,	// (0x0002081f) list_single_2graphic_pane_g3_ParamLimits

0xc6e7,	// (0x0002081f) list_single_2graphic_pane_g3

0xaaf0,	// (0x0001ec28) list_single_2graphic_pane_g4_ParamLimits

0xaaf0,	// (0x0001ec28) list_single_2graphic_pane_g4

0x0003,

0xf72d,	// (0x00023865) list_single_2graphic_pane_g_ParamLimits

0xf72d,	// (0x00023865) list_single_2graphic_pane_g

0xaafc,	// (0x0001ec34) list_single_2graphic_pane_t1_ParamLimits

0xaafc,	// (0x0001ec34) list_single_2graphic_pane_t1

0xab2a,	// (0x0001ec62) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xab2a,	// (0x0001ec62) list_double2_graphic_large_graphic_pane_g1

0xa366,	// (0x0001e49e) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa366,	// (0x0001e49e) list_double2_graphic_large_graphic_pane_g2

0xa377,	// (0x0001e4af) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa377,	// (0x0001e4af) list_double2_graphic_large_graphic_pane_g3

0xab3c,	// (0x0001ec74) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xab3c,	// (0x0001ec74) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf736,	// (0x0002386e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf736,	// (0x0002386e) list_double2_graphic_large_graphic_pane_g

0xab48,	// (0x0001ec80) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xab48,	// (0x0001ec80) list_double2_graphic_large_graphic_pane_t1

0xab5e,	// (0x0001ec96) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xab5e,	// (0x0001ec96) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73f,	// (0x00023877) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73f,	// (0x00023877) list_double2_graphic_large_graphic_pane_t

0xabe3,	// (0x0001ed1b) popup_fast_swap_window_ParamLimits

0xabe3,	// (0x0001ed1b) popup_fast_swap_window

0xabff,	// (0x0001ed37) popup_side_volume_key_window

0x122b,	// (0x00015363) stacon_top_pane

0x1235,	// (0x0001536d) status_pane_ParamLimits

0x1235,	// (0x0001536d) status_pane

0xac19,	// (0x0001ed51) status_small_pane

0xc303,	// (0x0002043b) control_pane

0xc303,	// (0x0002043b) stacon_bottom_pane

0xc749,	// (0x00020881) scroll_pane_cp121

0xc740,	// (0x00020878) set_content_pane

0xab70,	// (0x0001eca8) bg_active_tab_pane_g1_cp1

0xab79,	// (0x0001ecb1) bg_active_tab_pane_g2_cp1

0xab82,	// (0x0001ecba) bg_active_tab_pane_g3_cp1

0xab70,	// (0x0001eca8) bg_passive_tab_pane_g1_cp1

0xab79,	// (0x0001ecb1) bg_passive_tab_pane_g2_cp1

0xab82,	// (0x0001ecba) bg_passive_tab_pane_g3_cp1

0xab8b,	// (0x0001ecc3) bg_active_tab_pane_g1_cp2

0xab79,	// (0x0001ecb1) bg_active_tab_pane_g2_cp2

0xab94,	// (0x0001eccc) bg_active_tab_pane_g3_cp2

0xab8b,	// (0x0001ecc3) bg_passive_tab_pane_g1_cp2

0xab79,	// (0x0001ecb1) bg_passive_tab_pane_g2_cp2

0xab94,	// (0x0001eccc) bg_passive_tab_pane_g3_cp2

0xab9d,	// (0x0001ecd5) bg_active_tab_pane_g1_cp3

0xab79,	// (0x0001ecb1) bg_active_tab_pane_g2_cp3

0xaba6,	// (0x0001ecde) bg_active_tab_pane_g3_cp3

0xab9d,	// (0x0001ecd5) bg_passive_tab_pane_g1_cp3

0xab79,	// (0x0001ecb1) bg_passive_tab_pane_g2_cp3

0xaba6,	// (0x0001ecde) bg_passive_tab_pane_g3_cp3

0xabaf,	// (0x0001ece7) bg_active_tab_pane_g1_cp4

0xab79,	// (0x0001ecb1) bg_active_tab_pane_g2_cp4

0xabba,	// (0x0001ecf2) bg_active_tab_pane_g3_cp4

0xabaf,	// (0x0001ece7) bg_passive_tab_pane_g1_cp4

0xab79,	// (0x0001ecb1) bg_passive_tab_pane_g2_cp4

0xabba,	// (0x0001ecf2) bg_passive_tab_pane_g3_cp4

0xabc5,	// (0x0001ecfd) bg_active_tab_pane_g1_cp5

0xab79,	// (0x0001ecb1) bg_active_tab_pane_g2_cp5

0xabce,	// (0x0001ed06) bg_active_tab_pane_g3_cp5

0xabc5,	// (0x0001ecfd) bg_passive_tab_pane_g1_cp5

0xab79,	// (0x0001ecb1) bg_passive_tab_pane_g2_cp5

0xabce,	// (0x0001ed06) bg_passive_tab_pane_g3_cp5

0x3a07,	// (0x00017b3f) list_set_graphic_pane_ParamLimits

0x3a07,	// (0x00017b3f) list_set_graphic_pane

0xc303,	// (0x0002043b) bg_set_opt_pane_cp4

0x117a,	// (0x000152b2) list_set_graphic_pane_g1_ParamLimits

0x117a,	// (0x000152b2) list_set_graphic_pane_g1

0x1186,	// (0x000152be) list_set_graphic_pane_g2_ParamLimits

0x1186,	// (0x000152be) list_set_graphic_pane_g2

0x0001,

0xf744,	// (0x0002387c) list_set_graphic_pane_g_ParamLimits

0xf744,	// (0x0002387c) list_set_graphic_pane_g

0x0009,

0xfac9,	// (0x00023c01) volume_small_pane_cp_g

0xabd7,	// (0x0001ed0f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xabd7,	// (0x0001ed0f) list_double2_large_graphic_pane_g1_cp2

0x11b4,	// (0x000152ec) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x11b4,	// (0x000152ec) list_double2_large_graphic_pane_g2_cp2

0x11c5,	// (0x000152fd) list_double2_large_graphic_pane_g3_cp2

0x11cd,	// (0x00015305) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x11cd,	// (0x00015305) list_double2_large_graphic_pane_t1_cp2

0x11e3,	// (0x0001531b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x11e3,	// (0x0001531b) list_double2_large_graphic_pane_t2_cp2

0xb783,	// (0x0001f8bb) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb783,	// (0x0001f8bb) list_double_large_graphic_pane_g1_cp2

0x2ec0,	// (0x00016ff8) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x2ec0,	// (0x00016ff8) list_double_large_graphic_pane_g2_cp2

0x1350,	// (0x00015488) list_double_large_graphic_pane_g3_cp2

0x2ed1,	// (0x00017009) list_double_large_graphic_pane_g4_cp

0x2ed9,	// (0x00017011) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2ed9,	// (0x00017011) list_double_large_graphic_pane_t1_cp2

0x2ef0,	// (0x00017028) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2ef0,	// (0x00017028) list_double_large_graphic_pane_t2_cp2

0x124e,	// (0x00015386) list_double2_graphic_pane_g1_cp2_ParamLimits

0x124e,	// (0x00015386) list_double2_graphic_pane_g1_cp2

0x125c,	// (0x00015394) list_double2_graphic_pane_g2_cp2_ParamLimits

0x125c,	// (0x00015394) list_double2_graphic_pane_g2_cp2

0x126d,	// (0x000153a5) list_double2_graphic_pane_g3_cp2

0x1277,	// (0x000153af) list_double2_graphic_pane_t1_cp2_ParamLimits

0x1277,	// (0x000153af) list_double2_graphic_pane_t1_cp2

0x128d,	// (0x000153c5) list_double2_graphic_pane_t2_cp2_ParamLimits

0x128d,	// (0x000153c5) list_double2_graphic_pane_t2_cp2

0xca3b,	// (0x00020b73) list_single_number_heading_pane_g1_cp2_ParamLimits

0xca3b,	// (0x00020b73) list_single_number_heading_pane_g1_cp2

0x129f,	// (0x000153d7) list_single_number_heading_pane_g2_cp2

0x12a7,	// (0x000153df) list_single_number_heading_pane_t1_cp2_ParamLimits

0x12a7,	// (0x000153df) list_single_number_heading_pane_t1_cp2

0x12bd,	// (0x000153f5) list_single_number_heading_pane_t2_cp2_ParamLimits

0x12bd,	// (0x000153f5) list_single_number_heading_pane_t2_cp2

0x12cf,	// (0x00015407) list_single_number_heading_pane_t3_cp2_ParamLimits

0x12cf,	// (0x00015407) list_single_number_heading_pane_t3_cp2

0xca3b,	// (0x00020b73) list_single_heading_pane_g1_cp2_ParamLimits

0xca3b,	// (0x00020b73) list_single_heading_pane_g1_cp2

0x129f,	// (0x000153d7) list_single_heading_pane_g2_cp2

0x12a7,	// (0x000153df) list_single_heading_pane_t1_cp2_ParamLimits

0x12a7,	// (0x000153df) list_single_heading_pane_t1_cp2

0x2cb9,	// (0x00016df1) list_single_heading_pane_t2_cp2_ParamLimits

0x2cb9,	// (0x00016df1) list_single_heading_pane_t2_cp2

0x2c01,	// (0x00016d39) list_double_graphic_pane_g1_cp2_ParamLimits

0x2c01,	// (0x00016d39) list_double_graphic_pane_g1_cp2

0x2c0d,	// (0x00016d45) list_double_graphic_pane_g2_cp2_ParamLimits

0x2c0d,	// (0x00016d45) list_double_graphic_pane_g2_cp2

0x2c1c,	// (0x00016d54) list_double_graphic_pane_g3_cp2

0x2c24,	// (0x00016d5c) list_double_graphic_pane_t1_cp2_ParamLimits

0x2c24,	// (0x00016d5c) list_double_graphic_pane_t1_cp2

0x2c3a,	// (0x00016d72) list_double_graphic_pane_t2_cp2_ParamLimits

0x2c3a,	// (0x00016d72) list_double_graphic_pane_t2_cp2

0x1344,	// (0x0001547c) list_double_number_pane_g1_cp2_ParamLimits

0x1344,	// (0x0001547c) list_double_number_pane_g1_cp2

0x1350,	// (0x00015488) list_double_number_pane_g2_cp2

0x2bc5,	// (0x00016cfd) list_double_number_pane_t1_cp2_ParamLimits

0x2bc5,	// (0x00016cfd) list_double_number_pane_t1_cp2

0x2bd9,	// (0x00016d11) list_double_number_pane_t2_cp2_ParamLimits

0x2bd9,	// (0x00016d11) list_double_number_pane_t2_cp2

0x2bef,	// (0x00016d27) list_double_number_pane_t3_cp2_ParamLimits

0x2bef,	// (0x00016d27) list_double_number_pane_t3_cp2

0x2aae,	// (0x00016be6) list_single_graphic_pane_g1_cp2_ParamLimits

0x2aae,	// (0x00016be6) list_single_graphic_pane_g1_cp2

0x13a8,	// (0x000154e0) list_single_graphic_pane_g2_cp2_ParamLimits

0x13a8,	// (0x000154e0) list_single_graphic_pane_g2_cp2

0x13b4,	// (0x000154ec) list_single_graphic_pane_g3_cp2

0x2a84,	// (0x00016bbc) list_single_graphic_pane_t1_cp2_ParamLimits

0x2a84,	// (0x00016bbc) list_single_graphic_pane_t1_cp2

0x13a8,	// (0x000154e0) list_single_number_pane_g1_cp2_ParamLimits

0x13a8,	// (0x000154e0) list_single_number_pane_g1_cp2

0x13b4,	// (0x000154ec) list_single_number_pane_g2_cp2

0x2a84,	// (0x00016bbc) list_single_number_pane_t1_cp2_ParamLimits

0x2a84,	// (0x00016bbc) list_single_number_pane_t1_cp2

0x2a9a,	// (0x00016bd2) list_single_number_pane_t2_cp2_ParamLimits

0x2a9a,	// (0x00016bd2) list_single_number_pane_t2_cp2

0x11b4,	// (0x000152ec) list_double2_pane_g1_cp2_ParamLimits

0x11b4,	// (0x000152ec) list_double2_pane_g1_cp2

0x11c5,	// (0x000152fd) list_double2_pane_g2_cp2

0x131c,	// (0x00015454) list_double2_pane_t1_cp2_ParamLimits

0x131c,	// (0x00015454) list_double2_pane_t1_cp2

0x1332,	// (0x0001546a) list_double2_pane_t2_cp2_ParamLimits

0x1332,	// (0x0001546a) list_double2_pane_t2_cp2

0x1344,	// (0x0001547c) list_double_pane_g1_cp2_ParamLimits

0x1344,	// (0x0001547c) list_double_pane_g1_cp2

0x1350,	// (0x00015488) list_double_pane_g2_cp2

0x1358,	// (0x00015490) list_double_pane_t1_cp2_ParamLimits

0x1358,	// (0x00015490) list_double_pane_t1_cp2

0x136e,	// (0x000154a6) list_double_pane_t2_cp2_ParamLimits

0x136e,	// (0x000154a6) list_double_pane_t2_cp2

0xac24,	// (0x0001ed5c) list_single_pane_cp2_g3

0x13a8,	// (0x000154e0) list_single_pane_g1_cp2_ParamLimits

0x13a8,	// (0x000154e0) list_single_pane_g1_cp2

0x13b4,	// (0x000154ec) list_single_pane_g2_cp2

0x13bc,	// (0x000154f4) list_single_pane_t1_cp2_ParamLimits

0x13bc,	// (0x000154f4) list_single_pane_t1_cp2

0xac2c,	// (0x0001ed64) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xac2c,	// (0x0001ed64) list_single_large_graphic_pane_g1_cp2

0x13e0,	// (0x00015518) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x13e0,	// (0x00015518) list_single_large_graphic_pane_g2_cp2

0x13ec,	// (0x00015524) list_single_large_graphic_pane_g3_cp2

0xac38,	// (0x0001ed70) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xac38,	// (0x0001ed70) list_single_large_graphic_pane_g4_cp1

0x140e,	// (0x00015546) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x140e,	// (0x00015546) list_single_large_graphic_pane_t1_cp2

0x2a50,	// (0x00016b88) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2a50,	// (0x00016b88) list_single_graphic_heading_pane_g1_cp2

0x2a1d,	// (0x00016b55) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2a1d,	// (0x00016b55) list_single_graphic_heading_pane_g4_cp2

0x13b4,	// (0x000154ec) list_single_graphic_heading_pane_g5_cp2

0x2a5c,	// (0x00016b94) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2a5c,	// (0x00016b94) list_single_graphic_heading_pane_t1_cp2

0x2a72,	// (0x00016baa) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2a72,	// (0x00016baa) list_single_graphic_heading_pane_t2_cp2

0x2a11,	// (0x00016b49) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2a11,	// (0x00016b49) list_single_2graphic_pane_g1_cp2

0x2a1d,	// (0x00016b55) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2a1d,	// (0x00016b55) list_single_2graphic_pane_g2_cp2

0x13b4,	// (0x000154ec) list_single_2graphic_pane_g3_cp2

0x2a2e,	// (0x00016b66) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2a2e,	// (0x00016b66) list_single_2graphic_pane_g4_cp2

0x2a3a,	// (0x00016b72) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2a3a,	// (0x00016b72) list_single_2graphic_pane_t1_cp2

0xc2f9,	// (0x00020431) list_highlight_pane_g10_cp1

0x25f9,	// (0x00016731) list_highlight_pane_g1_cp1

0x2601,	// (0x00016739) list_highlight_pane_g2_cp1

0x2609,	// (0x00016741) list_highlight_pane_g3_cp1

0x2611,	// (0x00016749) list_highlight_pane_g4_cp1

0x2619,	// (0x00016751) list_highlight_pane_g5_cp1

0x2621,	// (0x00016759) list_highlight_pane_g6_cp1

0x2629,	// (0x00016761) list_highlight_pane_g7_cp1

0x2631,	// (0x00016769) list_highlight_pane_g8_cp1

0x2639,	// (0x00016771) list_highlight_pane_g9_cp1

0xb518,	// (0x0001f650) form_field_slider_pane_t3

0xb526,	// (0x0001f65e) form_field_slider_pane_t4

0x253d,	// (0x00016675) slider_form_pane_ParamLimits

0x253d,	// (0x00016675) slider_form_pane

0xc303,	// (0x0002043b) control_abbreviations

0xc303,	// (0x0002043b) control_conventions

0xc303,	// (0x0002043b) control_definitions

0xc303,	// (0x0002043b) format_table_attribute

0xb75a,	// (0x0001f892) bg_popup_preview_window_pane_g9

0xc303,	// (0x0002043b) format_table_data2

0xc303,	// (0x0002043b) format_table_data3

0xc303,	// (0x0002043b) format_table_data_example

0x0008,

0xc303,	// (0x0002043b) intro_purpose

0xf8d4,	// (0x00023a0c) bg_popup_preview_window_pane_g

0xc303,	// (0x0002043b) texts_category

0xc303,	// (0x0002043b) texts_graphics

0x1424,	// (0x0001555c) text_digital

0x1433,	// (0x0001556b) text_primary

0x1442,	// (0x0001557a) text_primary_small

0x1451,	// (0x00015589) text_secondary

0x1460,	// (0x00015598) text_title

0xbb28,	// (0x0001fc60) bg_passive_tab_pane_g1_cp3_srt

0xab79,	// (0x0001ecb1) bg_passive_tab_pane_g2_cp3_srt

0xbb31,	// (0x0001fc69) bg_passive_tab_pane_g3_cp3_srt

0xc351,	// (0x00020489) bg_active_tab_pane_cp3_srt_ParamLimits

0xc351,	// (0x00020489) bg_active_tab_pane_cp3_srt

0xbb3a,	// (0x0001fc72) tabs_4_active_pane_srt_g1

0xbb42,	// (0x0001fc7a) tabs_4_active_pane_srt_t1_ParamLimits

0xbb42,	// (0x0001fc7a) tabs_4_active_pane_srt_t1

0xbb28,	// (0x0001fc60) bg_active_tab_pane_g1_cp3_copy1

0xab79,	// (0x0001ecb1) bg_active_tab_pane_g2_cp3_copy1

0xbb31,	// (0x0001fc69) bg_active_tab_pane_g3_cp3_copy1

0xc35f,	// (0x00020497) tabs_2_long_active_pane_srt_ParamLimits

0xc35f,	// (0x00020497) tabs_2_long_active_pane_srt

0xc35f,	// (0x00020497) tabs_2_long_passive_pane_srt_ParamLimits

0xc35f,	// (0x00020497) tabs_2_long_passive_pane_srt

0x17c2,	// (0x000158fa) bg_passive_tab_pane_cp4_srt_ParamLimits

0x17c2,	// (0x000158fa) bg_passive_tab_pane_cp4_srt

0xb884,	// (0x0001f9bc) bg_passive_tab_pane_g1_cp4_srt

0xab79,	// (0x0001ecb1) bg_passive_tab_pane_g2_cp4_srt

0xb88d,	// (0x0001f9c5) bg_passive_tab_pane_g3_cp4_srt

0xc35f,	// (0x00020497) bg_active_tab_pane_cp4_srt_ParamLimits

0xc35f,	// (0x00020497) bg_active_tab_pane_cp4_srt

0xb896,	// (0x0001f9ce) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb896,	// (0x0001f9ce) tabs_2_long_active_pane_srt_t1

0xb884,	// (0x0001f9bc) bg_active_tab_pane_g1_cp4_srt

0xab79,	// (0x0001ecb1) bg_active_tab_pane_g2_cp4_srt

0xb88d,	// (0x0001f9c5) bg_active_tab_pane_g3_cp4_srt

0xc351,	// (0x00020489) tabs_3_long_active_pane_srt_ParamLimits

0xc351,	// (0x00020489) tabs_3_long_active_pane_srt

0xc351,	// (0x00020489) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc351,	// (0x00020489) tabs_3_long_passive_pane_cp_srt

0xc351,	// (0x00020489) tabs_3_long_passive_pane_srt_ParamLimits

0xc351,	// (0x00020489) tabs_3_long_passive_pane_srt

0x17c2,	// (0x000158fa) bg_passive_tab_pane_cp5_srt_ParamLimits

0x17c2,	// (0x000158fa) bg_passive_tab_pane_cp5_srt

0xabc5,	// (0x0001ecfd) bg_passive_tab_pane_g1_cp5_srt

0xab79,	// (0x0001ecb1) bg_passive_tab_pane_g2_cp5_srt

0xabce,	// (0x0001ed06) bg_passive_tab_pane_g3_cp5_srt

0xc35f,	// (0x00020497) bg_active_tab_pane_cp5_srt_ParamLimits

0xc35f,	// (0x00020497) bg_active_tab_pane_cp5_srt

0xb86e,	// (0x0001f9a6) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb86e,	// (0x0001f9a6) tabs_3_long_active_pane_srt_t1

0xabc5,	// (0x0001ecfd) bg_active_tab_pane_g1_cp5_srt

0xab79,	// (0x0001ecb1) bg_active_tab_pane_g2_cp5_srt

0xabce,	// (0x0001ed06) bg_active_tab_pane_g3_cp5_srt

0x3116,	// (0x0001724e) navi_text_pane_srt_t1

0x310e,	// (0x00017246) navi_icon_pane_srt_g1

0x1631,	// (0x00015769) midp_editing_number_pane_srt

0x146f,	// (0x000155a7) midp_ticker_pane_srt

0x1639,	// (0x00015771) midp_ticker_pane_srt_g1

0x1641,	// (0x00015779) midp_ticker_pane_srt_g2

0x0001,

0xf763,	// (0x0002389b) midp_ticker_pane_srt_g

0x1649,	// (0x00015781) midp_ticker_pane_srt_t1

0x30ff,	// (0x00017237) midp_editing_number_pane_t1_copy1

0xac52,	// (0x0001ed8a) listscroll_midp_pane

0xac52,	// (0x0001ed8a) midp_form_pane

0xacbd,	// (0x0001edf5) midp_info_popup_window_ParamLimits

0xacbd,	// (0x0001edf5) midp_info_popup_window

0xc8a0,	// (0x000209d8) bg_popup_sub_pane_cp50_ParamLimits

0xc8a0,	// (0x000209d8) bg_popup_sub_pane_cp50

0x2241,	// (0x00016379) listscroll_midp_info_pane_ParamLimits

0x2241,	// (0x00016379) listscroll_midp_info_pane

0x2221,	// (0x00016359) listscroll_form_midp_pane_ParamLimits

0x2221,	// (0x00016359) listscroll_form_midp_pane

0x222d,	// (0x00016365) scroll_bar_cp050

0x2221,	// (0x00016359) list_midp_pane

0xbcd6,	// (0x0001fe0e) signal_pane_g2_cp

0x213b,	// (0x00016273) listscroll_midp_info_pane_t1_ParamLimits

0x213b,	// (0x00016273) listscroll_midp_info_pane_t1

0xb352,	// (0x0001f48a) listscroll_midp_info_pane_t2_ParamLimits

0xb352,	// (0x0001f48a) listscroll_midp_info_pane_t2

0xb390,	// (0x0001f4c8) listscroll_midp_info_pane_t3_ParamLimits

0xb390,	// (0x0001f4c8) listscroll_midp_info_pane_t3

0xb3ca,	// (0x0001f502) listscroll_midp_info_pane_t4_ParamLimits

0xb3ca,	// (0x0001f502) listscroll_midp_info_pane_t4

0x0003,

0xf80f,	// (0x00023947) listscroll_midp_info_pane_t_ParamLimits

0xf80f,	// (0x00023947) listscroll_midp_info_pane_t

0xc916,	// (0x00020a4e) scroll_pane_cp21

0x20db,	// (0x00016213) form_midp_field_choice_group_pane

0xb315,	// (0x0001f44d) form_midp_field_text_pane

0x2121,	// (0x00016259) form_midp_field_time_pane

0x2129,	// (0x00016261) form_midp_gauge_slider_pane

0x2132,	// (0x0001626a) form_midp_gauge_wait_pane

0xc303,	// (0x0002043b) form_midp_image_pane

0xb2fe,	// (0x0001f436) list_single_midp_pane_ParamLimits

0xb2fe,	// (0x0001f436) list_single_midp_pane

0xb2dc,	// (0x0001f414) form_midp_field_text_pane_t1

0x1e19,	// (0x00015f51) input_focus_pane_cp050

0x2098,	// (0x000161d0) list_midp_form_text_pane

0x202d,	// (0x00016165) form_midp_field_choice_group_pane_t1

0x203b,	// (0x00016173) input_focus_pane_cp051

0x204f,	// (0x00016187) list_midp_choice_pane

0xc303,	// (0x0002043b) status_idle_pane

0x2011,	// (0x00016149) form_midp_field_time_pane_t1

0xc2f9,	// (0x00020431) wait_anim_pane_g2_copy1

0x201f,	// (0x00016157) form_midp_field_time_pane_t2

0x0001,

0x1599,	// (0x000156d1) aid_navinavi_width_2_pane

0xf80a,	// (0x00023942) form_midp_field_time_pane_t

0xc303,	// (0x0002043b) input_focus_pane_cp052

0xc303,	// (0x0002043b) bg_input_focus_pane_cp040

0x1fd1,	// (0x00016109) form_midp_gauge_slider_pane_t1

0x1fdf,	// (0x00016117) form_midp_gauge_slider_pane_t2

0xb2c0,	// (0x0001f3f8) form_midp_gauge_slider_pane_t3

0xb2ce,	// (0x0001f406) form_midp_gauge_slider_pane_t4

0x0003,

0xf801,	// (0x00023939) form_midp_gauge_slider_pane_t

0x2009,	// (0x00016141) form_midp_slider_pane

0xc35f,	// (0x00020497) bg_input_focus_pane_cp041_ParamLimits

0xc35f,	// (0x00020497) bg_input_focus_pane_cp041

0x1f9e,	// (0x000160d6) form_midp_gauge_wait_pane_t1_ParamLimits

0x1f9e,	// (0x000160d6) form_midp_gauge_wait_pane_t1

0x1fb0,	// (0x000160e8) form_midp_gauge_wait_pane_t2_ParamLimits

0x1fb0,	// (0x000160e8) form_midp_gauge_wait_pane_t2

0x0001,

0xf7fc,	// (0x00023934) form_midp_gauge_wait_pane_t_ParamLimits

0xf7fc,	// (0x00023934) form_midp_gauge_wait_pane_t

0x1fc2,	// (0x000160fa) form_midp_wait_pane_ParamLimits

0x1fc2,	// (0x000160fa) form_midp_wait_pane

0xb28a,	// (0x0001f3c2) form_midp_image_pane_g1

0xb293,	// (0x0001f3cb) form_midp_image_pane_t1

0xb2a2,	// (0x0001f3da) form_midp_image_pane_t2

0xb2b1,	// (0x0001f3e9) form_midp_image_pane_t3

0x0002,

0xf7f5,	// (0x0002392d) form_midp_image_pane_t

0x1f50,	// (0x00016088) list_single_midp_pane_g1

0x1f59,	// (0x00016091) list_single_midp_pane_t1

0xb275,	// (0x0001f3ad) list_midp_form_item_pane_ParamLimits

0xb275,	// (0x0001f3ad) list_midp_form_item_pane

0x1541,	// (0x00015679) list_midp_form_item_pane_t1

0x1550,	// (0x00015688) midp_ticker_pane_g1

0x155c,	// (0x00015694) midp_ticker_pane_g2

0x0001,

0xf749,	// (0x00023881) midp_ticker_pane_g

0x1568,	// (0x000156a0) midp_ticker_pane_t1

0x337f,	// (0x000174b7) midp_editing_number_pane_t1

0x335d,	// (0x00017495) midp_editing_number_pane

0x336c,	// (0x000174a4) midp_ticker_pane

0x30dd,	// (0x00017215) ai_message_heading_pane

0xc303,	// (0x0002043b) bg_popup_window_pane_cp14

0x30e5,	// (0x0001721d) listscroll_ai_message_pane

0x3067,	// (0x0001719f) ai_message_heading_pane_g1_ParamLimits

0x3067,	// (0x0001719f) ai_message_heading_pane_g1

0xb824,	// (0x0001f95c) ai_message_heading_pane_g2_ParamLimits

0xb824,	// (0x0001f95c) ai_message_heading_pane_g2

0x307f,	// (0x000171b7) ai_message_heading_pane_g3_ParamLimits

0x307f,	// (0x000171b7) ai_message_heading_pane_g3

0x308b,	// (0x000171c3) ai_message_heading_pane_g4_ParamLimits

0x308b,	// (0x000171c3) ai_message_heading_pane_g4

0x0003,

0xf936,	// (0x00023a6e) ai_message_heading_pane_g_ParamLimits

0xf936,	// (0x00023a6e) ai_message_heading_pane_g

0xb830,	// (0x0001f968) ai_message_heading_pane_t1_ParamLimits

0xb830,	// (0x0001f968) ai_message_heading_pane_t1

0xb84a,	// (0x0001f982) ai_message_heading_pane_t2_ParamLimits

0xb84a,	// (0x0001f982) ai_message_heading_pane_t2

0x0001,

0xf93f,	// (0x00023a77) ai_message_heading_pane_t_ParamLimits

0xf93f,	// (0x00023a77) ai_message_heading_pane_t

0x30c3,	// (0x000171fb) bg_popup_heading_pane_cp1_ParamLimits

0x30c3,	// (0x000171fb) bg_popup_heading_pane_cp1

0x3055,	// (0x0001718d) list_ai_message_pane_ParamLimits

0x3055,	// (0x0001718d) list_ai_message_pane

0xc916,	// (0x00020a4e) scroll_pane_cp10

0x2ff1,	// (0x00017129) list_ai_message_pane_g1

0x2ff9,	// (0x00017131) list_ai_message_pane_g2

0x0001,

0xf913,	// (0x00023a4b) list_ai_message_pane_g

0x3001,	// (0x00017139) list_ai_message_pane_t1_ParamLimits

0x3001,	// (0x00017139) list_ai_message_pane_t1

0x3016,	// (0x0001714e) list_ai_message_pane_t2_ParamLimits

0x3016,	// (0x0001714e) list_ai_message_pane_t2

0x302b,	// (0x00017163) list_ai_message_pane_t3_ParamLimits

0x302b,	// (0x00017163) list_ai_message_pane_t3

0x3040,	// (0x00017178) list_ai_message_pane_t4_ParamLimits

0x3040,	// (0x00017178) list_ai_message_pane_t4

0x0003,

0xf918,	// (0x00023a50) list_ai_message_pane_t_ParamLimits

0xf918,	// (0x00023a50) list_ai_message_pane_t

0xb800,	// (0x0001f938) cell_ai_soft_ind_pane_ParamLimits

0xb800,	// (0x0001f938) cell_ai_soft_ind_pane

0x157a,	// (0x000156b2) cell_ai_soft_ind_pane_g1_ParamLimits

0x157a,	// (0x000156b2) cell_ai_soft_ind_pane_g1

0xc303,	// (0x0002043b) grid_highlight_cp1

0x1587,	// (0x000156bf) text_secondary_cp56_ParamLimits

0x1587,	// (0x000156bf) text_secondary_cp56

0x2fb1,	// (0x000170e9) example_general_pane_ParamLimits

0x2fb1,	// (0x000170e9) example_general_pane

0x2fbd,	// (0x000170f5) example_parent_pane_g1_ParamLimits

0x2fbd,	// (0x000170f5) example_parent_pane_g1

0x2fc9,	// (0x00017101) example_parent_pane_t1_ParamLimits

0x2fc9,	// (0x00017101) example_parent_pane_t1

0x90b8,	// (0x0001d1f0) popup_preview_text_window_ParamLimits

0x90b8,	// (0x0001d1f0) popup_preview_text_window

0x13a0,	// (0x000154d8) list_single_pane_cp2_g4

0xc54b,	// (0x00020683) bg_popup_preview_window_pane_ParamLimits

0xc54b,	// (0x00020683) bg_popup_preview_window_pane

0xb762,	// (0x0001f89a) popup_preview_text_window_t1_ParamLimits

0xb762,	// (0x0001f89a) popup_preview_text_window_t1

0x2d29,	// (0x00016e61) popup_preview_text_window_t2_ParamLimits

0x2d29,	// (0x00016e61) popup_preview_text_window_t2

0x2d72,	// (0x00016eaa) popup_preview_text_window_t3_ParamLimits

0x2d72,	// (0x00016eaa) popup_preview_text_window_t3

0x2db7,	// (0x00016eef) popup_preview_text_window_t4_ParamLimits

0x2db7,	// (0x00016eef) popup_preview_text_window_t4

0x0004,

0xf8e7,	// (0x00023a1f) popup_preview_text_window_t_ParamLimits

0xf8e7,	// (0x00023a1f) popup_preview_text_window_t

0x2e35,	// (0x00016f6d) scroll_pane_cp11

0x1cf9,	// (0x00015e31) bg_popup_preview_window_pane_g1

0xb722,	// (0x0001f85a) bg_popup_preview_window_pane_g2

0xb72a,	// (0x0001f862) bg_popup_preview_window_pane_g3

0xb732,	// (0x0001f86a) bg_popup_preview_window_pane_g4

0xb73a,	// (0x0001f872) bg_popup_preview_window_pane_g5

0xb742,	// (0x0001f87a) bg_popup_preview_window_pane_g6

0xb74a,	// (0x0001f882) bg_popup_preview_window_pane_g7

0xb752,	// (0x0001f88a) bg_popup_preview_window_pane_g8

0xe10a,	// (0x00022242) aid_popup_width_pane

0x9034,	// (0x0001d16c) popup_midp_note_alarm_window_ParamLimits

0x9034,	// (0x0001d16c) popup_midp_note_alarm_window

0xc77d,	// (0x000208b5) data_form_pane_ParamLimits

0xa6b1,	// (0x0001e7e9) form_field_data_pane_g1

0xa6bb,	// (0x0001e7f3) form_field_data_pane_t1_ParamLimits

0xc789,	// (0x000208c1) input_focus_pane_ParamLimits

0xc797,	// (0x000208cf) data_form_wide_pane_ParamLimits

0xc7a8,	// (0x000208e0) form_field_data_wide_pane_g1

0xc7d4,	// (0x0002090c) form_field_data_wide_pane_t1_ParamLimits

0xc61f,	// (0x00020757) input_focus_pane_cp6_ParamLimits

0xa82d,	// (0x0001e965) input_popup_find_pane_g1_ParamLimits

0xa82d,	// (0x0001e965) input_popup_find_pane_g1

0xe401,	// (0x00022539) aid_navi_side_left_pane

0xe416,	// (0x0002254e) aid_navi_side_right_pane

0x26f4,	// (0x0001682c) bg_popup_window_pane_cp30_ParamLimits

0x26f4,	// (0x0001682c) bg_popup_window_pane_cp30

0x276e,	// (0x000168a6) popup_midp_note_alarm_window_g1_ParamLimits

0x276e,	// (0x000168a6) popup_midp_note_alarm_window_g1

0x279e,	// (0x000168d6) popup_midp_note_alarm_window_t1_ParamLimits

0x279e,	// (0x000168d6) popup_midp_note_alarm_window_t1

0xb56b,	// (0x0001f6a3) popup_midp_note_alarm_window_t2_ParamLimits

0xb56b,	// (0x0001f6a3) popup_midp_note_alarm_window_t2

0xb619,	// (0x0001f751) popup_midp_note_alarm_window_t3_ParamLimits

0xb619,	// (0x0001f751) popup_midp_note_alarm_window_t3

0xb641,	// (0x0001f779) popup_midp_note_alarm_window_t4_ParamLimits

0xb641,	// (0x0001f779) popup_midp_note_alarm_window_t4

0x2935,	// (0x00016a6d) popup_midp_note_alarm_window_t5_ParamLimits

0x2935,	// (0x00016a6d) popup_midp_note_alarm_window_t5

0x000a,

0xf884,	// (0x000239bc) popup_midp_note_alarm_window_t_ParamLimits

0xf884,	// (0x000239bc) popup_midp_note_alarm_window_t

0x29e1,	// (0x00016b19) wait_bar_pane_cp1_ParamLimits

0x29e1,	// (0x00016b19) wait_bar_pane_cp1

0xc303,	// (0x0002043b) wait_anim_pane_copy1

0xc303,	// (0x0002043b) wait_border_pane_copy1

0x23ea,	// (0x00016522) wait_border_pane_g1_copy1

0xc7ee,	// (0x00020926) form_field_popup_pane_g1

0xa6d5,	// (0x0001e80d) form_field_popup_pane_t1_ParamLimits

0xc789,	// (0x000208c1) input_focus_pane_cp7_ParamLimits

0xc7f6,	// (0x0002092e) list_form_pane_ParamLimits

0xc802,	// (0x0002093a) form_field_popup_wide_pane_g1

0xc80a,	// (0x00020942) form_field_popup_wide_pane_t1_ParamLimits

0xc789,	// (0x000208c1) input_focus_pane_cp8_ParamLimits

0xc81f,	// (0x00020957) list_form_wide_pane_ParamLimits

0xbb9b,	// (0x0001fcd3) aid_size_cell_graphic_pane

0xa754,	// (0x0001e88c) data_form_pane_t1_ParamLimits

0xba34,	// (0x0001fb6c) data_form_wide_pane_t1_ParamLimits

0xaee4,	// (0x0001f01c) bg_status_flat_pane

0x9d52,	// (0x0001de8a) title_pane_t1_ParamLimits

0xc319,	// (0x00020451) title_pane_t2_ParamLimits

0xc33f,	// (0x00020477) title_pane_t3_ParamLimits

0xf557,	// (0x0002368f) title_pane_t_ParamLimits

0xe5c4,	// (0x000226fc) level_1_signal_ParamLimits

0xe5d1,	// (0x00022709) level_2_signal_ParamLimits

0xe5de,	// (0x00022716) level_3_signal_ParamLimits

0xe5eb,	// (0x00022723) level_4_signal_ParamLimits

0xe5f8,	// (0x00022730) level_5_signal_ParamLimits

0xe605,	// (0x0002273d) level_6_signal_ParamLimits

0xe612,	// (0x0002274a) level_7_signal_ParamLimits

0xe5c4,	// (0x000226fc) level_1_battery_ParamLimits

0xe5d1,	// (0x00022709) level_2_battery_ParamLimits

0xe5de,	// (0x00022716) level_3_battery_ParamLimits

0xe5eb,	// (0x00022723) level_4_battery_ParamLimits

0xe5f8,	// (0x00022730) level_5_battery_ParamLimits

0xe605,	// (0x0002273d) level_6_battery_ParamLimits

0xe612,	// (0x0002274a) level_7_battery_ParamLimits

0x25f9,	// (0x00016731) bg_status_flat_pane_g1

0x2601,	// (0x00016739) bg_status_flat_pane_g2

0x2609,	// (0x00016741) bg_status_flat_pane_g3

0x2611,	// (0x00016749) bg_status_flat_pane_g4

0x2619,	// (0x00016751) bg_status_flat_pane_g5

0x2621,	// (0x00016759) bg_status_flat_pane_g6

0x2629,	// (0x00016761) bg_status_flat_pane_g7

0x9de6,	// (0x0001df1e) tabs_3_active_pane_t1_ParamLimits

0x9de6,	// (0x0001df1e) tabs_3_passive_pane_t1_ParamLimits

0x9e00,	// (0x0001df38) tabs_4_active_pane_t1_ParamLimits

0x9e00,	// (0x0001df38) tabs_4_1_passive_pane_t1_ParamLimits

0xa86c,	// (0x0001e9a4) tabs_2_active_pane_t1_ParamLimits

0xa86c,	// (0x0001e9a4) tabs_2_passive_pane_t1_ParamLimits

0xc35f,	// (0x00020497) bg_active_tab_pane_cp4_ParamLimits

0xa87e,	// (0x0001e9b6) tabs_2_long_active_pane_t1_ParamLimits

0x17c2,	// (0x000158fa) bg_passive_tab_pane_cp4_ParamLimits

0xeab5,	// (0x00022bed) list_single_midp_graphic_pane_t1_ParamLimits

0xc35f,	// (0x00020497) bg_active_tab_pane_cp5_ParamLimits

0xa891,	// (0x0001e9c9) tabs_3_long_active_pane_t1_ParamLimits

0x17c2,	// (0x000158fa) bg_passive_tab_pane_cp5_ParamLimits

0xeab5,	// (0x00022bed) list_single_midp_graphic_pane_t1

0xaee4,	// (0x0001f01c) bg_status_flat_pane_ParamLimits

0x196a,	// (0x00015aa2) indicator_pane_cp2_ParamLimits

0x196a,	// (0x00015aa2) indicator_pane_cp2

0xb062,	// (0x0001f19a) navi_pane_srt_ParamLimits

0xb062,	// (0x0001f19a) navi_pane_srt

0x1ab9,	// (0x00015bf1) popup_clock_digital_analogue_window_cp1

0xc3bd,	// (0x000204f5) indicator_pane_t1

0x146f,	// (0x000155a7) copy_highlight_pane

0x146f,	// (0x000155a7) cursor_graphics_pane

0x146f,	// (0x000155a7) graphic_within_text_pane

0x146f,	// (0x000155a7) link_highlight_pane

0x2df8,	// (0x00016f30) popup_preview_text_window_t5_ParamLimits

0x2df8,	// (0x00016f30) popup_preview_text_window_t5

0x15a1,	// (0x000156d9) cursor_digital_pane

0x15a1,	// (0x000156d9) cursor_primary_pane

0x15b2,	// (0x000156ea) cursor_primary_small_pane

0x15ba,	// (0x000156f2) cursor_secondary_pane

0x15c2,	// (0x000156fa) cursor_title_pane

0x15a1,	// (0x000156d9) link_highlight_digital_pane

0x15a9,	// (0x000156e1) link_highlight_primary_pane

0x15b2,	// (0x000156ea) link_highlight_primary_small_pane

0x15ba,	// (0x000156f2) link_highlight_secondary_pane

0x15c2,	// (0x000156fa) link_highlight_title_pane

0x15a1,	// (0x000156d9) copy_highlight_digital_pane

0x15a1,	// (0x000156d9) copy_highlight_primary_pane

0x15b2,	// (0x000156ea) copy_highlight_primary_small_pane

0x15ba,	// (0x000156f2) copy_highlight_secondary_pane

0x15c2,	// (0x000156fa) copy_highlight_title_pane

0x15ba,	// (0x000156f2) graphic_text_digital_pane

0x2697,	// (0x000167cf) graphic_text_primary_pane

0x26a0,	// (0x000167d8) graphic_text_primary_small_pane

0x15b2,	// (0x000156ea) graphic_text_secondary_pane

0x15a1,	// (0x000156d9) graphic_text_title_pane

0xad0e,	// (0x0001ee46) cursor_primary_pane_g1

0x2689,	// (0x000167c1) cursor_text_primary_t1

0xb561,	// (0x0001f699) cursor_primary_small_pane_g1

0x267b,	// (0x000167b3) cursor_text_primary_small_t1

0xb557,	// (0x0001f68f) cursor_primary_small_pane_g1_copy1

0x2663,	// (0x0001679b) cursor_text_primary_small_t1_copy1

0x2641,	// (0x00016779) cursor_text_title_t1

0xb54d,	// (0x0001f685) cursor_title_pane_g1

0xad0e,	// (0x0001ee46) cursor_digital_pane_g1

0x15d4,	// (0x0001570c) cursor_text_digital_t1

0x15e2,	// (0x0001571a) link_highlight_primary_pane_g1

0x25ea,	// (0x00016722) link_highlight_primary_pane_t1

0x15e2,	// (0x0001571a) link_highlight_primary_small_pane_g1

0x15ea,	// (0x00015722) link_highlight_primary_small_pane_t1

0x15e2,	// (0x0001571a) link_highlight_secondary_pane_g1

0x15f9,	// (0x00015731) link_highlight_secondary_pane_t1

0x254f,	// (0x00016687) link_highlight_title_pane_g1

0x2566,	// (0x0001669e) link_highlight_title_pane_t1

0x254f,	// (0x00016687) link_highlight_digital_pane_g1

0x2557,	// (0x0001668f) link_highlight_digital_pane_t1

0x2409,	// (0x00016541) copy_highlight_primary_pane_g1

0x242f,	// (0x00016567) copy_highlight_primary_pane_t1

0x2409,	// (0x00016541) copy_highlight_primary_small_pane_g1

0x2420,	// (0x00016558) copy_highlight_primary_small_pane_t1

0x1608,	// (0x00015740) copy_highlight_secondary_pane_g1

0x1610,	// (0x00015748) copy_highlight_secondary_pane_t1

0x2409,	// (0x00016541) copy_highlight_title_pane_g1

0x2411,	// (0x00016549) copy_highlight_title_pane_t1

0x2409,	// (0x00016541) copy_highlight_digital_pane_g1

0x3773,	// (0x000178ab) copy_highlight_digital_pane_t1

0x36c7,	// (0x000177ff) graphic_text_primary_pane_g1

0x3757,	// (0x0001788f) graphic_text_primary_pane_t1

0x3765,	// (0x0001789d) graphic_text_primary_pane_t2

0x0001,

0xf9b3,	// (0x00023aeb) graphic_text_primary_pane_t

0x3733,	// (0x0001786b) graphic_text_primary_small_pane_g1

0x373b,	// (0x00017873) graphic_text_primary_small_pane_t1

0x3749,	// (0x00017881) graphic_text_primary_small_pane_t2

0x0001,

0xf9ae,	// (0x00023ae6) graphic_text_primary_small_pane_t

0x370f,	// (0x00017847) graphic_text_secondary_pane_g1

0x3717,	// (0x0001784f) graphic_text_secondary_pane_t1

0x3725,	// (0x0001785d) graphic_text_secondary_pane_t2

0x0001,

0xf9a9,	// (0x00023ae1) graphic_text_secondary_pane_t

0x36eb,	// (0x00017823) graphic_text_title_pane_g1

0x36f3,	// (0x0001782b) graphic_text_title_pane_t1

0x3701,	// (0x00017839) graphic_text_title_pane_t2

0x0001,

0xf9a4,	// (0x00023adc) graphic_text_title_pane_t

0x36c7,	// (0x000177ff) graphic_text_digital_pane_g1

0x36cf,	// (0x00017807) graphic_text_digital_pane_t1

0x36dd,	// (0x00017815) graphic_text_digital_pane_t2

0x0001,

0xf99f,	// (0x00023ad7) graphic_text_digital_pane_t

0xc35f,	// (0x00020497) navi_icon_pane_srt_ParamLimits

0xc35f,	// (0x00020497) navi_icon_pane_srt

0xc303,	// (0x0002043b) navi_midp_pane_srt

0xc303,	// (0x0002043b) navi_navi_pane_srt

0xc35f,	// (0x00020497) navi_text_pane_srt_ParamLimits

0xc35f,	// (0x00020497) navi_text_pane_srt

0x3692,	// (0x000177ca) navi_navi_icon_text_pane_srt

0x369a,	// (0x000177d2) navi_navi_pane_srt_g1_ParamLimits

0x369a,	// (0x000177d2) navi_navi_pane_srt_g1

0x36ac,	// (0x000177e4) navi_navi_pane_srt_g2_ParamLimits

0x36ac,	// (0x000177e4) navi_navi_pane_srt_g2

0x0001,

0xf99a,	// (0x00023ad2) navi_navi_pane_srt_g_ParamLimits

0xf99a,	// (0x00023ad2) navi_navi_pane_srt_g

0x36be,	// (0x000177f6) navi_navi_tabs_pane_srt

0x3692,	// (0x000177ca) navi_navi_text_pane_srt

0x3692,	// (0x000177ca) navi_navi_volume_pane_srt

0x3683,	// (0x000177bb) navi_navi_text_pane_srt_t1

0xeca7,	// (0x00022ddf) navi_navi_volume_pane_srt_g1

0xecaf,	// (0x00022de7) volume_small_pane_srt_ParamLimits

0xecaf,	// (0x00022de7) volume_small_pane_srt

0xe8bb,	// (0x000229f3) volume_small_pane_srt_g1_ParamLimits

0xe8bb,	// (0x000229f3) volume_small_pane_srt_g1

0xe8cb,	// (0x00022a03) volume_small_pane_srt_g2_ParamLimits

0xe8cb,	// (0x00022a03) volume_small_pane_srt_g2

0xe8dc,	// (0x00022a14) volume_small_pane_srt_g3_ParamLimits

0xe8dc,	// (0x00022a14) volume_small_pane_srt_g3

0xe8ed,	// (0x00022a25) volume_small_pane_srt_g4_ParamLimits

0xe8ed,	// (0x00022a25) volume_small_pane_srt_g4

0xe8fe,	// (0x00022a36) volume_small_pane_srt_g5_ParamLimits

0xe8fe,	// (0x00022a36) volume_small_pane_srt_g5

0xe90f,	// (0x00022a47) volume_small_pane_srt_g6_ParamLimits

0xe90f,	// (0x00022a47) volume_small_pane_srt_g6

0xe920,	// (0x00022a58) volume_small_pane_srt_g7_ParamLimits

0xe920,	// (0x00022a58) volume_small_pane_srt_g7

0xe931,	// (0x00022a69) volume_small_pane_srt_g8_ParamLimits

0xe931,	// (0x00022a69) volume_small_pane_srt_g8

0xe942,	// (0x00022a7a) volume_small_pane_srt_g9_ParamLimits

0xe942,	// (0x00022a7a) volume_small_pane_srt_g9

0xe953,	// (0x00022a8b) volume_small_pane_srt_g10_ParamLimits

0xe953,	// (0x00022a8b) volume_small_pane_srt_g10

0x0009,

0xf74e,	// (0x00023886) volume_small_pane_srt_g_ParamLimits

0xf74e,	// (0x00023886) volume_small_pane_srt_g

0xa030,	// (0x0001e168) query_popup_data_pane_cp2

0x3669,	// (0x000177a1) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3669,	// (0x000177a1) navi_navi_icon_text_pane_srt_t1

0x2697,	// (0x000167cf) navi_tabs_2_long_pane_srt

0x2697,	// (0x000167cf) navi_tabs_2_pane_srt

0x2697,	// (0x000167cf) navi_tabs_3_long_pane_srt

0x2697,	// (0x000167cf) navi_tabs_3_pane_srt

0x2697,	// (0x000167cf) navi_tabs_4_pane_srt

0x95b6,	// (0x0001d6ee) tabs_2_active_pane_srt_ParamLimits

0x95b6,	// (0x0001d6ee) tabs_2_active_pane_srt

0x95c6,	// (0x0001d6fe) tabs_2_passive_pane_srt_ParamLimits

0x95c6,	// (0x0001d6fe) tabs_2_passive_pane_srt

0x1e19,	// (0x00015f51) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1e19,	// (0x00015f51) bg_passive_tab_pane_cp1_srt

0xbbe5,	// (0x0001fd1d) bg_passive_tab_pane_g1_cp1_srt

0xab79,	// (0x0001ecb1) bg_passive_tab_pane_g2_cp1_srt

0xbbee,	// (0x0001fd26) bg_passive_tab_pane_g3_cp1_srt

0xc351,	// (0x00020489) bg_active_tab_pane_cp1_srt_ParamLimits

0xc351,	// (0x00020489) bg_active_tab_pane_cp1_srt

0xbbf7,	// (0x0001fd2f) tabs_2_active_pane_srt_g1

0xbbff,	// (0x0001fd37) tabs_2_active_pane_srt_t1_ParamLimits

0xbbff,	// (0x0001fd37) tabs_2_active_pane_srt_t1

0xbbe5,	// (0x0001fd1d) bg_active_tab_pane_g1_cp1_srt

0xab79,	// (0x0001ecb1) bg_active_tab_pane_g2_cp1_srt

0xbbee,	// (0x0001fd26) bg_active_tab_pane_g3_cp1_srt

0x9583,	// (0x0001d6bb) tabs_3_active_pane_srt_ParamLimits

0x9583,	// (0x0001d6bb) tabs_3_active_pane_srt

0x9594,	// (0x0001d6cc) tabs_3_passive_pane_cp_srt_ParamLimits

0x9594,	// (0x0001d6cc) tabs_3_passive_pane_cp_srt

0x95a5,	// (0x0001d6dd) tabs_3_passive_pane_srt_ParamLimits

0x95a5,	// (0x0001d6dd) tabs_3_passive_pane_srt

0x1e19,	// (0x00015f51) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1e19,	// (0x00015f51) bg_passive_tab_pane_cp2_srt

0xad18,	// (0x0001ee50) bg_passive_tab_pane_g1_cp2_srt

0xab79,	// (0x0001ecb1) bg_passive_tab_pane_g2_cp2_srt

0xad21,	// (0x0001ee59) bg_passive_tab_pane_g3_cp2_srt

0xc351,	// (0x00020489) bg_active_tab_pane_cp2_srt_ParamLimits

0xc351,	// (0x00020489) bg_active_tab_pane_cp2_srt

0xbbc7,	// (0x0001fcff) tabs_3_active_pane_srt_g1

0xbbcf,	// (0x0001fd07) tabs_3_active_pane_srt_t1_ParamLimits

0xbbcf,	// (0x0001fd07) tabs_3_active_pane_srt_t1

0xad18,	// (0x0001ee50) bg_active_tab_pane_g1_cp2_srt

0xab79,	// (0x0001ecb1) bg_active_tab_pane_g2_cp2_srt

0xad21,	// (0x0001ee59) bg_active_tab_pane_g3_cp2_srt

0xec5f,	// (0x00022d97) tabs_4_active_pane_srt_ParamLimits

0xec5f,	// (0x00022d97) tabs_4_active_pane_srt

0xec71,	// (0x00022da9) tabs_4_passive_pane_cp2_srt_ParamLimits

0xec71,	// (0x00022da9) tabs_4_passive_pane_cp2_srt

0xe973,	// (0x00022aab) aid_size_cell_toolbar

0x31a7,	// (0x000172df) main_idle_act_pane_ParamLimits

0x8e76,	// (0x0001cfae) popup_large_graphic_colour_window_ParamLimits

0x936a,	// (0x0001d4a2) popup_toolbar_window_ParamLimits

0x936a,	// (0x0001d4a2) popup_toolbar_window

0x33aa,	// (0x000174e2) list_single_graphic_2heading_pane_ParamLimits

0x33aa,	// (0x000174e2) list_single_graphic_2heading_pane

0xe48d,	// (0x000225c5) aid_size_cell_apps_grid_lsc_pane

0xe49f,	// (0x000225d7) aid_size_cell_apps_grid_prt_pane

0x17c2,	// (0x000158fa) bg_wml_button_pane_cp1_ParamLimits

0x17c2,	// (0x000158fa) bg_wml_button_pane_cp1

0xb2dc,	// (0x0001f414) form_midp_field_text_pane_t1_ParamLimits

0x1e19,	// (0x00015f51) input_focus_pane_cp050_ParamLimits

0x2098,	// (0x000161d0) list_midp_form_text_pane_ParamLimits

0x203b,	// (0x00016173) input_focus_pane_cp051_ParamLimits

0x204f,	// (0x00016187) list_midp_choice_pane_ParamLimits

0xb241,	// (0x0001f379) list_single_2graphic_pane_cp3_ParamLimits

0xb241,	// (0x0001f379) list_single_2graphic_pane_cp3

0xb255,	// (0x0001f38d) list_single_midp_graphic_pane_ParamLimits

0xb255,	// (0x0001f38d) list_single_midp_graphic_pane

0xe9e7,	// (0x00022b1f) list_single_graphic_2heading_pane_g1_ParamLimits

0xe9e7,	// (0x00022b1f) list_single_graphic_2heading_pane_g1

0xe9f3,	// (0x00022b2b) list_single_graphic_2heading_pane_g4_ParamLimits

0xe9f3,	// (0x00022b2b) list_single_graphic_2heading_pane_g4

0xe9ff,	// (0x00022b37) list_single_graphic_2heading_pane_g5_ParamLimits

0xe9ff,	// (0x00022b37) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a1,	// (0x000238d9) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a1,	// (0x000238d9) list_single_graphic_2heading_pane_g

0xea0b,	// (0x00022b43) list_single_graphic_2heading_pane_t1_ParamLimits

0xea0b,	// (0x00022b43) list_single_graphic_2heading_pane_t1

0xea1f,	// (0x00022b57) list_single_graphic_2heading_pane_t2_ParamLimits

0xea1f,	// (0x00022b57) list_single_graphic_2heading_pane_t2

0xea39,	// (0x00022b71) list_single_graphic_2heading_pane_t3_ParamLimits

0xea39,	// (0x00022b71) list_single_graphic_2heading_pane_t3

0x0002,

0xf7a8,	// (0x000238e0) list_single_graphic_2heading_pane_t_ParamLimits

0xf7a8,	// (0x000238e0) list_single_graphic_2heading_pane_t

0x1c15,	// (0x00015d4d) bg_popup_sub_pane_cp2

0x1c3f,	// (0x00015d77) grid_toobar_pane

0xea51,	// (0x00022b89) cell_toolbar_pane_ParamLimits

0xea51,	// (0x00022b89) cell_toolbar_pane

0x1c9d,	// (0x00015dd5) cell_toolbar_pane_g1_ParamLimits

0x1c9d,	// (0x00015dd5) cell_toolbar_pane_g1

0xb201,	// (0x0001f339) cell_toolbar_pane_g2_ParamLimits

0xb201,	// (0x0001f339) cell_toolbar_pane_g2

0x0001,

0xf7af,	// (0x000238e7) cell_toolbar_pane_g_ParamLimits

0xf7af,	// (0x000238e7) cell_toolbar_pane_g

0x1cd3,	// (0x00015e0b) grid_highlight_pane_cp2_ParamLimits

0x1cd3,	// (0x00015e0b) grid_highlight_pane_cp2

0x1ced,	// (0x00015e25) toolbar_button_pane

0x1cf9,	// (0x00015e31) toolbar_button_pane_g1

0x1d01,	// (0x00015e39) toolbar_button_pane_g2

0x1d09,	// (0x00015e41) toolbar_button_pane_g3

0x1d11,	// (0x00015e49) toolbar_button_pane_g4

0x1d19,	// (0x00015e51) toolbar_button_pane_g5

0x1d21,	// (0x00015e59) toolbar_button_pane_g6

0x1d29,	// (0x00015e61) toolbar_button_pane_g7

0x1d31,	// (0x00015e69) toolbar_button_pane_g8

0x1d39,	// (0x00015e71) toolbar_button_pane_g9

0x0009,

0xf7b4,	// (0x000238ec) toolbar_button_pane_g

0xea89,	// (0x00022bc1) list_single_2graphic_pane_g1_cp3_ParamLimits

0xea89,	// (0x00022bc1) list_single_2graphic_pane_g1_cp3

0x9417,	// (0x0001d54f) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9417,	// (0x0001d54f) list_single_2graphic_pane_g2_cp3

0xea95,	// (0x00022bcd) list_single_2graphic_pane_g3_cp3

0xea9d,	// (0x00022bd5) list_single_2graphic_pane_g4_cp3_ParamLimits

0xea9d,	// (0x00022bd5) list_single_2graphic_pane_g4_cp3

0x9428,	// (0x0001d560) list_single_2graphic_pane_t1_cp3_ParamLimits

0x9428,	// (0x0001d560) list_single_2graphic_pane_t1_cp3

0xeaa9,	// (0x00022be1) list_single_midp_graphic_pane_g2_ParamLimits

0xeaa9,	// (0x00022be1) list_single_midp_graphic_pane_g2

0xe97b,	// (0x00022ab3) aid_zoom_text_primary

0xe983,	// (0x00022abb) aid_zoom_text_secondary

0xad78,	// (0x0001eeb0) status_small_pane_g7_ParamLimits

0xad78,	// (0x0001eeb0) status_small_pane_g7

0xad9b,	// (0x0001eed3) status_small_pane_t1_ParamLimits

0x9d2e,	// (0x0001de66) title_pane_g2

0x0003,

0xf54e,	// (0x00023686) title_pane_g

0xa08a,	// (0x0001e1c2) aid_size_cell_colour_1_pane_ParamLimits

0xa08a,	// (0x0001e1c2) aid_size_cell_colour_1_pane

0xa09e,	// (0x0001e1d6) aid_size_cell_colour_2_pane_ParamLimits

0xa09e,	// (0x0001e1d6) aid_size_cell_colour_2_pane

0xa0b2,	// (0x0001e1ea) aid_size_cell_colour_3_pane_ParamLimits

0xa0b2,	// (0x0001e1ea) aid_size_cell_colour_3_pane

0xa0c6,	// (0x0001e1fe) aid_size_cell_colour_4_pane_ParamLimits

0xa0c6,	// (0x0001e1fe) aid_size_cell_colour_4_pane

0xe309,	// (0x00022441) title_pane_stacon_g1_ParamLimits

0xe309,	// (0x00022441) title_pane_stacon_g1

0x2486,	// (0x000165be) popup_note_wait_window_g3_ParamLimits

0x2486,	// (0x000165be) popup_note_wait_window_g3

0x24fc,	// (0x00016634) popup_note_wait_window_t5_ParamLimits

0x24fc,	// (0x00016634) popup_note_wait_window_t5

0xc303,	// (0x0002043b) main_feb_china_hwr_fs_writing_pane

0x8cf8,	// (0x0001ce30) popup_feb_china_hwr_fs_window_ParamLimits

0x8cf8,	// (0x0001ce30) popup_feb_china_hwr_fs_window

0x9444,	// (0x0001d57c) aid_size_cell_hwr_fs_ParamLimits

0x9444,	// (0x0001d57c) aid_size_cell_hwr_fs

0x1e19,	// (0x00015f51) bg_popup_sub_pane_cp3_ParamLimits

0x1e19,	// (0x00015f51) bg_popup_sub_pane_cp3

0x9459,	// (0x0001d591) grid_hwr_fs_pane_ParamLimits

0x9459,	// (0x0001d591) grid_hwr_fs_pane

0xeacb,	// (0x00022c03) linegrid_hwr_fs_pane_ParamLimits

0xeacb,	// (0x00022c03) linegrid_hwr_fs_pane

0x9471,	// (0x0001d5a9) cell_hwr_fs_pane_ParamLimits

0x9471,	// (0x0001d5a9) cell_hwr_fs_pane

0x1e25,	// (0x00015f5d) linegrid_hwr_fs_pane_g1_ParamLimits

0x1e25,	// (0x00015f5d) linegrid_hwr_fs_pane_g1

0xb215,	// (0x0001f34d) linegrid_hwr_fs_pane_g2_ParamLimits

0xb215,	// (0x0001f34d) linegrid_hwr_fs_pane_g2

0x1e43,	// (0x00015f7b) linegrid_hwr_fs_pane_g3_ParamLimits

0x1e43,	// (0x00015f7b) linegrid_hwr_fs_pane_g3

0x9497,	// (0x0001d5cf) linegrid_hwr_fs_pane_g4_ParamLimits

0x9497,	// (0x0001d5cf) linegrid_hwr_fs_pane_g4

0xeadb,	// (0x00022c13) linegrid_hwr_fs_pane_g5_ParamLimits

0xeadb,	// (0x00022c13) linegrid_hwr_fs_pane_g5

0x0004,

0xf7da,	// (0x00023912) linegrid_hwr_fs_pane_g_ParamLimits

0xf7da,	// (0x00023912) linegrid_hwr_fs_pane_g

0x1e4f,	// (0x00015f87) cell_hwr_fs_pane_g1_ParamLimits

0x1e4f,	// (0x00015f87) cell_hwr_fs_pane_g1

0x1b4f,	// (0x00015c87) cell_hwr_fs_pane_g2_ParamLimits

0x1b4f,	// (0x00015c87) cell_hwr_fs_pane_g2

0xb227,	// (0x0001f35f) cell_hwr_fs_pane_g3_ParamLimits

0xb227,	// (0x0001f35f) cell_hwr_fs_pane_g3

0xb234,	// (0x0001f36c) cell_hwr_fs_pane_g4_ParamLimits

0xb234,	// (0x0001f36c) cell_hwr_fs_pane_g4

0x0003,

0xf7e5,	// (0x0002391d) cell_hwr_fs_pane_g_ParamLimits

0xf7e5,	// (0x0002391d) cell_hwr_fs_pane_g

0x94b1,	// (0x0001d5e9) cell_hwr_fs_pane_t1

0xc303,	// (0x0002043b) grid_highlight_pane_cp6

0xc303,	// (0x0002043b) main_idle_act2_pane

0xc8fd,	// (0x00020a35) aid_inside_area_popup_secondary

0xb680,	// (0x0001f7b8) aid_inside_area_window_primary_ParamLimits

0xb680,	// (0x0001f7b8) aid_inside_area_window_primary

0xbc1d,	// (0x0001fd55) ai2_news_ticker_pane

0x378a,	// (0x000178c2) aid_size_cell_ai1_link_ParamLimits

0x378a,	// (0x000178c2) aid_size_cell_ai1_link

0xbc25,	// (0x0001fd5d) popup_ai2_data_window_ParamLimits

0xbc25,	// (0x0001fd5d) popup_ai2_data_window

0x37ba,	// (0x000178f2) popup_ai2_link_window_ParamLimits

0x37ba,	// (0x000178f2) popup_ai2_link_window

0x1e19,	// (0x00015f51) bg_popup_sub_pane_cp4_ParamLimits

0x1e19,	// (0x00015f51) bg_popup_sub_pane_cp4

0x37ce,	// (0x00017906) grid_ai2_link_pane_ParamLimits

0x37ce,	// (0x00017906) grid_ai2_link_pane

0x37e5,	// (0x0001791d) popup_ai2_link_window_g1_ParamLimits

0x37e5,	// (0x0001791d) popup_ai2_link_window_g1

0x37f1,	// (0x00017929) popup_ai2_link_window_g2_ParamLimits

0x37f1,	// (0x00017929) popup_ai2_link_window_g2

0x0001,

0xf9b8,	// (0x00023af0) popup_ai2_link_window_g_ParamLimits

0xf9b8,	// (0x00023af0) popup_ai2_link_window_g

0x3800,	// (0x00017938) ai2_mp_button_pane

0x3808,	// (0x00017940) ai2_mp_volume_pane

0x203b,	// (0x00016173) bg_popup_sub_pane_cp5_ParamLimits

0x203b,	// (0x00016173) bg_popup_sub_pane_cp5

0x3810,	// (0x00017948) heading_ai2_gene_pane_ParamLimits

0x3810,	// (0x00017948) heading_ai2_gene_pane

0x381c,	// (0x00017954) list_ai2_gene_pane_ParamLimits

0x381c,	// (0x00017954) list_ai2_gene_pane

0x3864,	// (0x0001799c) cell_ai2_link_pane_ParamLimits

0x3864,	// (0x0001799c) cell_ai2_link_pane

0x387a,	// (0x000179b2) cell_ai2_link_pane_g1

0xc303,	// (0x0002043b) grid_highlight_pane_cp7

0xecc4,	// (0x00022dfc) ai2_mp_volume_pane_g1

0x394a,	// (0x00017a82) ai2_mp_volume_pane_g2

0x38bf,	// (0x000179f7) list_ai2_gene_pane_t1

0x3952,	// (0x00017a8a) ai2_mp_volume_pane_g3

0x0002,

0xf9d1,	// (0x00023b09) ai2_mp_volume_pane_g

0x95d6,	// (0x0001d70e) volume_small_pane_cp3

0x395a,	// (0x00017a92) aid_size_cell_ai2_button

0x3962,	// (0x00017a9a) grid_ai2_button_pane

0x396b,	// (0x00017aa3) cell_ai2_button_pane_ParamLimits

0x396b,	// (0x00017aa3) cell_ai2_button_pane

0xc2f9,	// (0x00020431) cell_ai2_button_pane_g1

0xc303,	// (0x0002043b) grid_highlight_pane_cp8

0x390a,	// (0x00017a42) ai2_gene_pane_t1_ParamLimits

0x390a,	// (0x00017a42) ai2_gene_pane_t1

0x8c4e,	// (0x0001cd86) aid_height_parent_landscape

0xb8e0,	// (0x0001fa18) aid_height_set_list

0x31a7,	// (0x000172df) aid_size_parent

0xbb9b,	// (0x0001fcd3) aid_size_cell_graphic_pane_ParamLimits

0x382c,	// (0x00017964) popup_ai2_data_window_g1_ParamLimits

0x382c,	// (0x00017964) popup_ai2_data_window_g1

0x3838,	// (0x00017970) ai2_news_ticker_pane_g1

0x3840,	// (0x00017978) ai2_news_ticker_pane_g2

0x0001,

0xf9bd,	// (0x00023af5) ai2_news_ticker_pane_g

0x3848,	// (0x00017980) ai2_news_ticker_pane_t1

0x3856,	// (0x0001798e) ai2_news_ticker_pane_t2

0x0001,

0xf9c2,	// (0x00023afa) ai2_news_ticker_pane_t

0x3883,	// (0x000179bb) heading_ai2_gene_pane_g1

0x388b,	// (0x000179c3) heading_ai2_gene_pane_t1_ParamLimits

0x388b,	// (0x000179c3) heading_ai2_gene_pane_t1

0x38a0,	// (0x000179d8) list_highlight_pane_cp6

0x38a8,	// (0x000179e0) ai2_gene_pane_ParamLimits

0x38a8,	// (0x000179e0) ai2_gene_pane

0x38cd,	// (0x00017a05) list_ai2_gene_pane_t2

0x0001,

0xf9c7,	// (0x00023aff) list_ai2_gene_pane_t

0x38db,	// (0x00017a13) list_highlight_pane_cp8_ParamLimits

0x38db,	// (0x00017a13) list_highlight_pane_cp8

0x38ec,	// (0x00017a24) ai2_gene_pane_g1_ParamLimits

0x38ec,	// (0x00017a24) ai2_gene_pane_g1

0x38fe,	// (0x00017a36) ai2_gene_pane_g2_ParamLimits

0x38fe,	// (0x00017a36) ai2_gene_pane_g2

0x0001,

0xf9cc,	// (0x00023b04) ai2_gene_pane_g_ParamLimits

0xf9cc,	// (0x00023b04) ai2_gene_pane_g

0xc6ca,	// (0x00020802) scroll_pane_cp12

0x8c0b,	// (0x0001cd43) control_pane_t3_ParamLimits

0x8c0b,	// (0x0001cd43) control_pane_t3

0xad8c,	// (0x0001eec4) status_small_pane_g8_ParamLimits

0xad8c,	// (0x0001eec4) status_small_pane_g8

0x8dbb,	// (0x0001cef3) popup_find_window_ParamLimits

0x906e,	// (0x0001d1a6) popup_note_image_window_ParamLimits

0x1c7b,	// (0x00015db3) list_double2_graphic_pane_vc_g1_ParamLimits

0x1c7b,	// (0x00015db3) list_double2_graphic_pane_vc_g1

0xc6db,	// (0x00020813) list_double2_graphic_pane_vc_g2_ParamLimits

0xc6db,	// (0x00020813) list_double2_graphic_pane_vc_g2

0xc6e7,	// (0x0002081f) list_double2_graphic_pane_vc_g3_ParamLimits

0xc6e7,	// (0x0002081f) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x000236f9) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x000236f9) list_double2_graphic_pane_vc_g

0x1c87,	// (0x00015dbf) list_double2_graphic_pane_vc_t1_ParamLimits

0x1c87,	// (0x00015dbf) list_double2_graphic_pane_vc_t1

0xc6db,	// (0x00020813) list_single_heading_pane_vc_g1_ParamLimits

0xc6db,	// (0x00020813) list_single_heading_pane_vc_g1

0xc6e7,	// (0x0002081f) list_single_heading_pane_vc_g2_ParamLimits

0xc6e7,	// (0x0002081f) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023700) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023700) list_single_heading_pane_vc_g

0x1d41,	// (0x00015e79) list_single_heading_pane_vc_t1_ParamLimits

0x1d41,	// (0x00015e79) list_single_heading_pane_vc_t1

0x1d57,	// (0x00015e8f) list_single_heading_pane_vc_t2_ParamLimits

0x1d57,	// (0x00015e8f) list_single_heading_pane_vc_t2

0x0001,

0xf7c9,	// (0x00023901) list_single_heading_pane_vc_t_ParamLimits

0xf7c9,	// (0x00023901) list_single_heading_pane_vc_t

0x1d69,	// (0x00015ea1) list_setting_number_pane_vc_g1_ParamLimits

0x1d69,	// (0x00015ea1) list_setting_number_pane_vc_g1

0x1d75,	// (0x00015ead) list_setting_number_pane_vc_g2_ParamLimits

0x1d75,	// (0x00015ead) list_setting_number_pane_vc_g2

0x0001,

0xf7ce,	// (0x00023906) list_setting_number_pane_vc_g_ParamLimits

0xf7ce,	// (0x00023906) list_setting_number_pane_vc_g

0x1d81,	// (0x00015eb9) list_setting_number_pane_vc_t1_ParamLimits

0x1d81,	// (0x00015eb9) list_setting_number_pane_vc_t1

0x1d95,	// (0x00015ecd) list_setting_number_pane_vc_t2_ParamLimits

0x1d95,	// (0x00015ecd) list_setting_number_pane_vc_t2

0x1db1,	// (0x00015ee9) list_setting_number_pane_vc_t3_ParamLimits

0x1db1,	// (0x00015ee9) list_setting_number_pane_vc_t3

0x0002,

0xf7d3,	// (0x0002390b) list_setting_number_pane_vc_t_ParamLimits

0xf7d3,	// (0x0002390b) list_setting_number_pane_vc_t

0x1ddd,	// (0x00015f15) set_value_pane_vc_ParamLimits

0x1ddd,	// (0x00015f15) set_value_pane_vc

0x33aa,	// (0x000174e2) list_double2_graphic_pane_vc_ParamLimits

0x33aa,	// (0x000174e2) list_double2_graphic_pane_vc

0x33aa,	// (0x000174e2) list_double2_large_graphic_pane_vc_ParamLimits

0x33aa,	// (0x000174e2) list_double2_large_graphic_pane_vc

0x33aa,	// (0x000174e2) list_double2_pane_vc_ParamLimits

0x33aa,	// (0x000174e2) list_double2_pane_vc

0x33aa,	// (0x000174e2) list_double_graphic_heading_pane_vc_ParamLimits

0x33aa,	// (0x000174e2) list_double_graphic_heading_pane_vc

0x33aa,	// (0x000174e2) list_double_graphic_pane_vc_ParamLimits

0x33aa,	// (0x000174e2) list_double_graphic_pane_vc

0x33aa,	// (0x000174e2) list_double_heading_pane_vc_ParamLimits

0x33aa,	// (0x000174e2) list_double_heading_pane_vc

0x33bc,	// (0x000174f4) list_double_large_graphic_pane_vc_ParamLimits

0x33bc,	// (0x000174f4) list_double_large_graphic_pane_vc

0x33aa,	// (0x000174e2) list_double_number_pane_vc_ParamLimits

0x33aa,	// (0x000174e2) list_double_number_pane_vc

0x33aa,	// (0x000174e2) list_double_pane_vc_ParamLimits

0x33aa,	// (0x000174e2) list_double_pane_vc

0x33aa,	// (0x000174e2) list_double_time_pane_vc_ParamLimits

0x33aa,	// (0x000174e2) list_double_time_pane_vc

0x33aa,	// (0x000174e2) list_setting_number_pane_vc_ParamLimits

0x33aa,	// (0x000174e2) list_setting_number_pane_vc

0x33aa,	// (0x000174e2) list_setting_pane_vc_ParamLimits

0x33aa,	// (0x000174e2) list_setting_pane_vc

0x33aa,	// (0x000174e2) list_single_graphic_heading_pane_vc_ParamLimits

0x33aa,	// (0x000174e2) list_single_graphic_heading_pane_vc

0x33aa,	// (0x000174e2) list_single_heading_pane_vc_ParamLimits

0x33aa,	// (0x000174e2) list_single_heading_pane_vc

0x33aa,	// (0x000174e2) list_single_number_heading_pane_vc_ParamLimits

0x33aa,	// (0x000174e2) list_single_number_heading_pane_vc

0x399f,	// (0x00017ad7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x399f,	// (0x00017ad7) list_double_graphic_heading_pane_vc_g1

0xc6db,	// (0x00020813) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc6db,	// (0x00020813) list_double_graphic_heading_pane_vc_g2

0xc6e7,	// (0x0002081f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xc6e7,	// (0x0002081f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d8,	// (0x00023b10) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d8,	// (0x00023b10) list_double_graphic_heading_pane_vc_g

0x39ab,	// (0x00017ae3) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x39ab,	// (0x00017ae3) list_double_graphic_heading_pane_vc_t1

0x39bf,	// (0x00017af7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x39bf,	// (0x00017af7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9df,	// (0x00023b17) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9df,	// (0x00023b17) list_double_graphic_heading_pane_vc_t

0x1d69,	// (0x00015ea1) list_setting_pane_vc_g1_ParamLimits

0x1d69,	// (0x00015ea1) list_setting_pane_vc_g1

0x1d75,	// (0x00015ead) list_setting_pane_vc_g2_ParamLimits

0x1d75,	// (0x00015ead) list_setting_pane_vc_g2

0x0001,

0xf7ce,	// (0x00023906) list_setting_pane_vc_g_ParamLimits

0xf7ce,	// (0x00023906) list_setting_pane_vc_g

0x3bd7,	// (0x00017d0f) list_setting_pane_vc_t1_ParamLimits

0x3bd7,	// (0x00017d0f) list_setting_pane_vc_t1

0x3bf3,	// (0x00017d2b) list_setting_pane_vc_t2_ParamLimits

0x3bf3,	// (0x00017d2b) list_setting_pane_vc_t2

0x0001,

0xfa22,	// (0x00023b5a) list_setting_pane_vc_t_ParamLimits

0xfa22,	// (0x00023b5a) list_setting_pane_vc_t

0x1ddd,	// (0x00015f15) set_value_pane_cp_vc_ParamLimits

0x1ddd,	// (0x00015f15) set_value_pane_cp_vc

0xc6db,	// (0x00020813) list_single_number_heading_pane_vc_g1_ParamLimits

0xc6db,	// (0x00020813) list_single_number_heading_pane_vc_g1

0xc6e7,	// (0x0002081f) list_single_number_heading_pane_vc_g2_ParamLimits

0xc6e7,	// (0x0002081f) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023700) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023700) list_single_number_heading_pane_vc_g

0x3c0d,	// (0x00017d45) list_single_number_heading_pane_vc_t1_ParamLimits

0x3c0d,	// (0x00017d45) list_single_number_heading_pane_vc_t1

0x3c23,	// (0x00017d5b) list_single_number_heading_pane_vc_t2_ParamLimits

0x3c23,	// (0x00017d5b) list_single_number_heading_pane_vc_t2

0x3c35,	// (0x00017d6d) list_single_number_heading_pane_vc_t3_ParamLimits

0x3c35,	// (0x00017d6d) list_single_number_heading_pane_vc_t3

0x0002,

0xfa27,	// (0x00023b5f) list_single_number_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x00023b5f) list_single_number_heading_pane_vc_t

0x3c47,	// (0x00017d7f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3c47,	// (0x00017d7f) list_single_graphic_heading_pane_vc_g1

0xc6db,	// (0x00020813) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc6db,	// (0x00020813) list_single_graphic_heading_pane_vc_g4

0xc6e7,	// (0x0002081f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xc6e7,	// (0x0002081f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa2e,	// (0x00023b66) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa2e,	// (0x00023b66) list_single_graphic_heading_pane_vc_g

0x3c53,	// (0x00017d8b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3c53,	// (0x00017d8b) list_single_graphic_heading_pane_vc_t1

0x3c69,	// (0x00017da1) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3c69,	// (0x00017da1) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x00023b6d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x00023b6d) list_single_graphic_heading_pane_vc_t

0xc6db,	// (0x00020813) list_double2_pane_vc_g1_ParamLimits

0xc6db,	// (0x00020813) list_double2_pane_vc_g1

0xc6e7,	// (0x0002081f) list_double2_pane_vc_g2_ParamLimits

0xc6e7,	// (0x0002081f) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023700) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023700) list_double2_pane_vc_g

0x3c7b,	// (0x00017db3) list_double2_pane_vc_t1_ParamLimits

0x3c7b,	// (0x00017db3) list_double2_pane_vc_t1

0x3c93,	// (0x00017dcb) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3c93,	// (0x00017dcb) list_double2_large_graphic_pane_vc_g1

0xc6db,	// (0x00020813) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc6db,	// (0x00020813) list_double2_large_graphic_pane_vc_g2

0xc6e7,	// (0x0002081f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xc6e7,	// (0x0002081f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0002371d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0002371d) list_double2_large_graphic_pane_vc_g

0x1c87,	// (0x00015dbf) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x1c87,	// (0x00015dbf) list_double2_large_graphic_pane_vc_t1

0x3c9f,	// (0x00017dd7) list_double_time_pane_vc_g1_ParamLimits

0x3c9f,	// (0x00017dd7) list_double_time_pane_vc_g1

0x3cab,	// (0x00017de3) list_double_time_pane_vc_g2_ParamLimits

0x3cab,	// (0x00017de3) list_double_time_pane_vc_g2

0x0001,

0xfa3a,	// (0x00023b72) list_double_time_pane_vc_g_ParamLimits

0xfa3a,	// (0x00023b72) list_double_time_pane_vc_g

0x3cb7,	// (0x00017def) list_double_time_pane_vc_t1_ParamLimits

0x3cb7,	// (0x00017def) list_double_time_pane_vc_t1

0x3cdb,	// (0x00017e13) list_double_time_pane_vc_t2_ParamLimits

0x3cdb,	// (0x00017e13) list_double_time_pane_vc_t2

0x3d0a,	// (0x00017e42) list_double_time_pane_vc_t3_ParamLimits

0x3d0a,	// (0x00017e42) list_double_time_pane_vc_t3

0x3d1c,	// (0x00017e54) list_double_time_pane_vc_t4_ParamLimits

0x3d1c,	// (0x00017e54) list_double_time_pane_vc_t4

0x0003,

0xfa3f,	// (0x00023b77) list_double_time_pane_vc_t_ParamLimits

0xfa3f,	// (0x00023b77) list_double_time_pane_vc_t

0xc6db,	// (0x00020813) list_double_pane_vc_g1_ParamLimits

0xc6db,	// (0x00020813) list_double_pane_vc_g1

0xc6e7,	// (0x0002081f) list_double_pane_vc_g2_ParamLimits

0xc6e7,	// (0x0002081f) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023700) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023700) list_double_pane_vc_g

0x3d30,	// (0x00017e68) list_double_pane_vc_t1_ParamLimits

0x3d30,	// (0x00017e68) list_double_pane_vc_t1

0x3d44,	// (0x00017e7c) list_double_pane_vc_t2_ParamLimits

0x3d44,	// (0x00017e7c) list_double_pane_vc_t2

0x0001,

0xfa48,	// (0x00023b80) list_double_pane_vc_t_ParamLimits

0xfa48,	// (0x00023b80) list_double_pane_vc_t

0xc6db,	// (0x00020813) list_double_number_pane_vc_g1_ParamLimits

0xc6db,	// (0x00020813) list_double_number_pane_vc_g1

0xc6e7,	// (0x0002081f) list_double_number_pane_vc_g2_ParamLimits

0xc6e7,	// (0x0002081f) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023700) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023700) list_double_number_pane_vc_g

0x3d5c,	// (0x00017e94) list_double_number_pane_vc_t1_ParamLimits

0x3d5c,	// (0x00017e94) list_double_number_pane_vc_t1

0x3d30,	// (0x00017e68) list_double_number_pane_vc_t2_ParamLimits

0x3d30,	// (0x00017e68) list_double_number_pane_vc_t2

0x3d6e,	// (0x00017ea6) list_double_number_pane_vc_t3_ParamLimits

0x3d6e,	// (0x00017ea6) list_double_number_pane_vc_t3

0x0002,

0xfa4d,	// (0x00023b85) list_double_number_pane_vc_t_ParamLimits

0xfa4d,	// (0x00023b85) list_double_number_pane_vc_t

0x3d86,	// (0x00017ebe) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3d86,	// (0x00017ebe) list_double_large_graphic_pane_vc_g1

0x3da8,	// (0x00017ee0) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3da8,	// (0x00017ee0) list_double_large_graphic_pane_vc_g2

0x3dbc,	// (0x00017ef4) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3dbc,	// (0x00017ef4) list_double_large_graphic_pane_vc_g3

0x3dcb,	// (0x00017f03) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3dcb,	// (0x00017f03) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa54,	// (0x00023b8c) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa54,	// (0x00023b8c) list_double_large_graphic_pane_vc_g

0x3dd7,	// (0x00017f0f) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3dd7,	// (0x00017f0f) list_double_large_graphic_pane_vc_t1

0x3df3,	// (0x00017f2b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3df3,	// (0x00017f2b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5d,	// (0x00023b95) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5d,	// (0x00023b95) list_double_large_graphic_pane_vc_t

0xc6db,	// (0x00020813) list_double_heading_pane_vc_g1_ParamLimits

0xc6db,	// (0x00020813) list_double_heading_pane_vc_g1

0xc6e7,	// (0x0002081f) list_double_heading_pane_vc_g2_ParamLimits

0xc6e7,	// (0x0002081f) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023700) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023700) list_double_heading_pane_vc_g

0x3e15,	// (0x00017f4d) list_double_heading_pane_vc_t1_ParamLimits

0x3e15,	// (0x00017f4d) list_double_heading_pane_vc_t1

0x3e29,	// (0x00017f61) list_double_heading_pane_vc_t2_ParamLimits

0x3e29,	// (0x00017f61) list_double_heading_pane_vc_t2

0x0001,

0xfa62,	// (0x00023b9a) list_double_heading_pane_vc_t_ParamLimits

0xfa62,	// (0x00023b9a) list_double_heading_pane_vc_t

0x3e41,	// (0x00017f79) list_double_graphic_pane_vc_g1_ParamLimits

0x3e41,	// (0x00017f79) list_double_graphic_pane_vc_g1

0x3e54,	// (0x00017f8c) list_double_graphic_pane_vc_g2_ParamLimits

0x3e54,	// (0x00017f8c) list_double_graphic_pane_vc_g2

0xc6db,	// (0x00020813) list_double_graphic_pane_vc_g3_ParamLimits

0xc6db,	// (0x00020813) list_double_graphic_pane_vc_g3

0x0003,

0xfa67,	// (0x00023b9f) list_double_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x00023b9f) list_double_graphic_pane_vc_g

0x3e71,	// (0x00017fa9) list_double_graphic_pane_vc_t1_ParamLimits

0x3e71,	// (0x00017fa9) list_double_graphic_pane_vc_t1

0x3e90,	// (0x00017fc8) list_double_graphic_pane_vc_t2_ParamLimits

0x3e90,	// (0x00017fc8) list_double_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x00023ba8) list_double_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x00023ba8) list_double_graphic_pane_vc_t

0xe116,	// (0x0002224e) aid_size_cell_fastswap

0x87c6,	// (0x0001c8fe) aid_size_cell_touch_ParamLimits

0x87c6,	// (0x0001c8fe) aid_size_cell_touch

0xe277,	// (0x000223af) popup_fast_swap_wide_window_ParamLimits

0xe277,	// (0x000223af) popup_fast_swap_wide_window

0x8996,	// (0x0001cace) touch_pane_ParamLimits

0x8996,	// (0x0001cace) touch_pane

0xc752,	// (0x0002088a) button_value_adjust_pane_cp2

0xc75a,	// (0x00020892) button_value_adjust_pane_cp4

0xc762,	// (0x0002089a) form_field_data_pane_cp2

0xa65d,	// (0x0001e795) form_field_data_wide_pane_cp2

0xe4ce,	// (0x00022606) bg_scroll_pane_ParamLimits

0x8a86,	// (0x0001cbbe) scroll_handle_pane_ParamLimits

0xe4ed,	// (0x00022625) scroll_sc2_down_pane_ParamLimits

0xe4ed,	// (0x00022625) scroll_sc2_down_pane

0xe514,	// (0x0002264c) scroll_sc2_up_pane_ParamLimits

0xe514,	// (0x0002264c) scroll_sc2_up_pane

0xbd5e,	// (0x0001fe96) grid_wheel_folder_pane_g1_ParamLimits

0xbd5e,	// (0x0001fe96) grid_wheel_folder_pane_g1

0xe853,	// (0x0002298b) clock_nsta_pane_cp2_ParamLimits

0xe853,	// (0x0002298b) clock_nsta_pane_cp2

0xac52,	// (0x0001ed8a) listscroll_midp_pane_ParamLimits

0xac5e,	// (0x0001ed96) midp_canvas_pane

0x1767,	// (0x0001589f) nsta_clock_indic_pane

0x17a8,	// (0x000158e0) listscroll_form_pane_vc

0x17b0,	// (0x000158e8) listscroll_set_pane_vc_ParamLimits

0x17b0,	// (0x000158e8) listscroll_set_pane_vc

0xaf0c,	// (0x0001f044) clock_nsta_pane

0xaf36,	// (0x0001f06e) indicator_nsta_pane

0x1c15,	// (0x00015d4d) bg_popup_sub_pane_cp2_ParamLimits

0x1c29,	// (0x00015d61) find_pane_cp2_ParamLimits

0x1c29,	// (0x00015d61) find_pane_cp2

0x1c3f,	// (0x00015d77) grid_toobar_pane_ParamLimits

0x1ded,	// (0x00015f25) list_form_gen_pane_vc_ParamLimits

0x1ded,	// (0x00015f25) list_form_gen_pane_vc

0x1e03,	// (0x00015f3b) scroll_pane_cp8_vc_ParamLimits

0x1e03,	// (0x00015f3b) scroll_pane_cp8_vc

0x1e7f,	// (0x00015fb7) data_form_wide_pane_vc_ParamLimits

0x1e7f,	// (0x00015fb7) data_form_wide_pane_vc

0x1e8b,	// (0x00015fc3) form_field_data_wide_pane_vc_g1

0x1e93,	// (0x00015fcb) form_field_data_wide_pane_vc_t1_ParamLimits

0x1e93,	// (0x00015fcb) form_field_data_wide_pane_vc_t1

0xc789,	// (0x000208c1) input_focus_pane_cp6_vc_ParamLimits

0xc789,	// (0x000208c1) input_focus_pane_cp6_vc

0x2221,	// (0x00016359) list_midp_pane_ParamLimits

0x360f,	// (0x00017747) scroll_pane_cp16_ParamLimits

0x360f,	// (0x00017747) scroll_pane_cp16

0x2263,	// (0x0001639b) button_value_adjust_pane_ParamLimits

0x2263,	// (0x0001639b) button_value_adjust_pane

0xb8f1,	// (0x0001fa29) button_value_adjust_pane_cp6_ParamLimits

0xb8f1,	// (0x0001fa29) button_value_adjust_pane_cp6

0xba0b,	// (0x0001fb43) settings_code_pane_cp_ParamLimits

0xba0b,	// (0x0001fb43) settings_code_pane_cp

0xc2f9,	// (0x00020431) cell_touch_pane_g1

0xc2f9,	// (0x00020431) cell_touch_pane_g2

0x0001,

0xf6f4,	// (0x0002382c) cell_touch_pane_g

0xbc3b,	// (0x0001fd73) cell_touch_pane_cp_ParamLimits

0xbc3b,	// (0x0001fd73) cell_touch_pane_cp

0xbc57,	// (0x0001fd8f) cell_touch_pane_ParamLimits

0xbc57,	// (0x0001fd8f) cell_touch_pane

0xc2f9,	// (0x00020431) scroll_sc2_down_pane_g1

0xc2f9,	// (0x00020431) scroll_sc2_up_pane_g1

0xc303,	// (0x0002043b) bg_set_opt_pane_cp4_vc

0x39d7,	// (0x00017b0f) list_set_graphic_pane_vc_g1_ParamLimits

0x39d7,	// (0x00017b0f) list_set_graphic_pane_vc_g1

0x39e3,	// (0x00017b1b) list_set_graphic_pane_vc_g2_ParamLimits

0x39e3,	// (0x00017b1b) list_set_graphic_pane_vc_g2

0x0001,

0xf9e4,	// (0x00023b1c) list_set_graphic_pane_vc_g_ParamLimits

0xf9e4,	// (0x00023b1c) list_set_graphic_pane_vc_g

0x39ef,	// (0x00017b27) text_primary_small_cp13_vc_ParamLimits

0x39ef,	// (0x00017b27) text_primary_small_cp13_vc

0x3a07,	// (0x00017b3f) list_set_graphic_pane_vc_ParamLimits

0x3a07,	// (0x00017b3f) list_set_graphic_pane_vc

0xc303,	// (0x0002043b) input_focus_pane_cp2_vc

0xc2f9,	// (0x00020431) setting_code_pane_vc_g1

0xc376,	// (0x000204ae) setting_code_pane_vc_t1

0x3a1a,	// (0x00017b52) set_text_pane_vc_t1_ParamLimits

0x3a1a,	// (0x00017b52) set_text_pane_vc_t1

0xc303,	// (0x0002043b) input_focus_pane_cp1_vc

0x3a36,	// (0x00017b6e) list_set_text_pane_vc

0xc2f9,	// (0x00020431) setting_text_pane_vc_g1

0xc303,	// (0x0002043b) bg_set_opt_pane_cp2_vc

0xc36d,	// (0x000204a5) setting_slider_graphic_pane_vc_g1

0x3a40,	// (0x00017b78) setting_slider_graphic_pane_vc_t1

0x3a50,	// (0x00017b88) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e9,	// (0x00023b21) setting_slider_graphic_pane_vc_t

0x3a60,	// (0x00017b98) slider_set_pane_cp_vc

0x3a68,	// (0x00017ba0) slider_set_pane_vc_g1

0x3a71,	// (0x00017ba9) slider_set_pane_vc_g2

0x0006,

0xf9ee,	// (0x00023b26) slider_set_pane_vc_g

0xc84f,	// (0x00020987) set_opt_bg_pane_g1_copy1

0xc857,	// (0x0002098f) set_opt_bg_pane_g2_copy1

0x3a9d,	// (0x00017bd5) set_opt_bg_pane_g3_copy1

0xc867,	// (0x0002099f) set_opt_bg_pane_g4_copy1

0xc86f,	// (0x000209a7) set_opt_bg_pane_g5_copy1

0xc877,	// (0x000209af) set_opt_bg_pane_g6_copy1

0x3aa5,	// (0x00017bdd) set_opt_bg_pane_g7_copy1

0x3aad,	// (0x00017be5) set_opt_bg_pane_g8_copy1

0x3ab5,	// (0x00017bed) set_opt_bg_pane_g9_copy1

0xc303,	// (0x0002043b) bg_set_opt_pane_cp_vc

0x3abd,	// (0x00017bf5) setting_slider_pane_vc_t1

0x3acc,	// (0x00017c04) setting_slider_pane_vc_t2

0x3adc,	// (0x00017c14) setting_slider_pane_vc_t3

0x0002,

0xf9fd,	// (0x00023b35) setting_slider_pane_vc_t

0x3aec,	// (0x00017c24) slider_set_pane_vc

0xeaf1,	// (0x00022c29) volume_set_pane_vc_g1

0xeccc,	// (0x00022e04) volume_set_pane_vc_g2

0xecd5,	// (0x00022e0d) volume_set_pane_vc_g3

0xecde,	// (0x00022e16) volume_set_pane_vc_g4

0xece7,	// (0x00022e1f) volume_set_pane_vc_g5

0xecf0,	// (0x00022e28) volume_set_pane_vc_g6

0xecf9,	// (0x00022e31) volume_set_pane_vc_g7

0xed02,	// (0x00022e3a) volume_set_pane_vc_g8

0xed0b,	// (0x00022e43) volume_set_pane_vc_g9

0xed14,	// (0x00022e4c) volume_set_pane_vc_g10

0x0009,

0xfa04,	// (0x00023b3c) volume_set_pane_vc_g

0x3af4,	// (0x00017c2c) volume_set_pane_vc

0x3afc,	// (0x00017c34) button_value_adjust_pane_cp1_vc

0x3b06,	// (0x00017c3e) list_highlight_pane_cp2_vc

0x3b0f,	// (0x00017c47) list_set_pane_vc_ParamLimits

0x3b0f,	// (0x00017c47) list_set_pane_vc

0x3b6d,	// (0x00017ca5) main_pane_set_vc_t1_ParamLimits

0x3b6d,	// (0x00017ca5) main_pane_set_vc_t1

0x3b82,	// (0x00017cba) main_pane_set_vc_t2_ParamLimits

0x3b82,	// (0x00017cba) main_pane_set_vc_t2

0x3b94,	// (0x00017ccc) main_pane_set_vc_t3_ParamLimits

0x3b94,	// (0x00017ccc) main_pane_set_vc_t3

0x3ba6,	// (0x00017cde) main_pane_set_vc_t4_ParamLimits

0x3ba6,	// (0x00017cde) main_pane_set_vc_t4

0x0003,

0xfa19,	// (0x00023b51) main_pane_set_vc_t_ParamLimits

0xfa19,	// (0x00023b51) main_pane_set_vc_t

0x3bb8,	// (0x00017cf0) setting_code_pane_vc_ParamLimits

0x3bb8,	// (0x00017cf0) setting_code_pane_vc

0x3bc7,	// (0x00017cff) setting_slider_graphic_pane_vc

0x3bc7,	// (0x00017cff) setting_slider_pane_vc

0x3bc7,	// (0x00017cff) setting_text_pane_vc

0x3bc7,	// (0x00017cff) setting_volume_pane_vc

0x3bcf,	// (0x00017d07) scroll_pane_cp121_vc

0xc740,	// (0x00020878) set_content_pane_vc

0x3eba,	// (0x00017ff2) button_value_adjust_pane_g1

0x3ec3,	// (0x00017ffb) button_value_adjust_pane_g2

0x0001,

0xfa75,	// (0x00023bad) button_value_adjust_pane_g

0x3ecc,	// (0x00018004) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3ecc,	// (0x00018004) form_field_slider_wide_pane_vc_t1

0x3ee0,	// (0x00018018) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3ee0,	// (0x00018018) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7a,	// (0x00023bb2) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7a,	// (0x00023bb2) form_field_slider_wide_pane_vc_t

0xc351,	// (0x00020489) input_focus_pane_cp10_vc_ParamLimits

0xc351,	// (0x00020489) input_focus_pane_cp10_vc

0x3f0e,	// (0x00018046) slider_cont_pane_cp1_vc_ParamLimits

0x3f0e,	// (0x00018046) slider_cont_pane_cp1_vc

0x3f20,	// (0x00018058) slider_form_pane_g1_cp2

0x3a71,	// (0x00017ba9) slider_form_pane_g2_cp2

0x3f4d,	// (0x00018085) form_field_slider_pane_vc_t3

0x3f5b,	// (0x00018093) form_field_slider_pane_vc_t4

0x3f69,	// (0x000180a1) slider_form_pane_vc_ParamLimits

0x3f69,	// (0x000180a1) slider_form_pane_vc

0x3f76,	// (0x000180ae) form_field_slider_pane_vc_t1_ParamLimits

0x3f76,	// (0x000180ae) form_field_slider_pane_vc_t1

0x3ee0,	// (0x00018018) form_field_slider_pane_vc_t2_ParamLimits

0x3ee0,	// (0x00018018) form_field_slider_pane_vc_t2

0x0001,

0xfa8c,	// (0x00023bc4) form_field_slider_pane_vc_t_ParamLimits

0xfa8c,	// (0x00023bc4) form_field_slider_pane_vc_t

0xc351,	// (0x00020489) input_focus_pane_cp9_vc_ParamLimits

0xc351,	// (0x00020489) input_focus_pane_cp9_vc

0x3f92,	// (0x000180ca) slider_cont_pane_vc_ParamLimits

0x3f92,	// (0x000180ca) slider_cont_pane_vc

0x3fa6,	// (0x000180de) list_form_graphic_pane_cp_vc_ParamLimits

0x3fa6,	// (0x000180de) list_form_graphic_pane_cp_vc

0x1e8b,	// (0x00015fc3) form_field_popup_wide_pane_vc_g1

0x3fbb,	// (0x000180f3) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3fbb,	// (0x000180f3) form_field_popup_wide_pane_vc_t1

0xc789,	// (0x000208c1) input_focus_pane_cp8_vc_ParamLimits

0xc789,	// (0x000208c1) input_focus_pane_cp8_vc

0x4000,	// (0x00018138) list_form_wide_pane_vc_ParamLimits

0x4000,	// (0x00018138) list_form_wide_pane_vc

0x400c,	// (0x00018144) list_form_graphic_pane_vc_g1

0x4014,	// (0x0001814c) list_form_graphic_pane_vc_t1_ParamLimits

0x4014,	// (0x0001814c) list_form_graphic_pane_vc_t1

0xc35f,	// (0x00020497) list_highlight_pane_cp5_vc_ParamLimits

0xc35f,	// (0x00020497) list_highlight_pane_cp5_vc

0x4030,	// (0x00018168) list_form_graphic_pane_vc_ParamLimits

0x4030,	// (0x00018168) list_form_graphic_pane_vc

0x1e8b,	// (0x00015fc3) form_field_popup_pane_vc_g1

0x4046,	// (0x0001817e) form_field_popup_pane_vc_t1_ParamLimits

0x4046,	// (0x0001817e) form_field_popup_pane_vc_t1

0xc789,	// (0x000208c1) input_focus_pane_cp7_vc_ParamLimits

0xc789,	// (0x000208c1) input_focus_pane_cp7_vc

0x405d,	// (0x00018195) list_form_pane_vc_ParamLimits

0x405d,	// (0x00018195) list_form_pane_vc

0x4069,	// (0x000181a1) data_form_pane_vc_t1_ParamLimits

0x4069,	// (0x000181a1) data_form_pane_vc_t1

0xc84f,	// (0x00020987) input_focus_pane_vc_g1

0xc857,	// (0x0002098f) input_focus_pane_vc_g2

0xc85f,	// (0x00020997) input_focus_pane_vc_g3

0xc867,	// (0x0002099f) input_focus_pane_vc_g4

0xc86f,	// (0x000209a7) input_focus_pane_vc_g5

0xc877,	// (0x000209af) input_focus_pane_vc_g6

0xc87f,	// (0x000209b7) input_focus_pane_vc_g7

0xc887,	// (0x000209bf) input_focus_pane_vc_g8

0xc88f,	// (0x000209c7) input_focus_pane_vc_g9

0xc2f9,	// (0x00020431) input_focus_pane_vc_g10

0x0009,

0xf67d,	// (0x000237b5) input_focus_pane_vc_g

0x1e7f,	// (0x00015fb7) data_form_pane_vc_ParamLimits

0x1e7f,	// (0x00015fb7) data_form_pane_vc

0x1e8b,	// (0x00015fc3) form_field_data_pane_vc_g1

0x4084,	// (0x000181bc) form_field_data_pane_vc_t1_ParamLimits

0x4084,	// (0x000181bc) form_field_data_pane_vc_t1

0xc789,	// (0x000208c1) input_focus_pane_vc_ParamLimits

0xc789,	// (0x000208c1) input_focus_pane_vc

0x409e,	// (0x000181d6) button_value_adjust_pane_cp3_vc

0x40a6,	// (0x000181de) button_value_adjust_pane_cp5_vc

0x40ae,	// (0x000181e6) form_field_data_pane_vc_ParamLimits

0x40ae,	// (0x000181e6) form_field_data_pane_vc

0x40c5,	// (0x000181fd) form_field_data_pane_vc_cp2

0x40cd,	// (0x00018205) form_field_data_wide_pane_vc_ParamLimits

0x40cd,	// (0x00018205) form_field_data_wide_pane_vc

0x40e3,	// (0x0001821b) form_field_data_wide_pane_vc_cp2

0x40eb,	// (0x00018223) form_field_popup_pane_vc_ParamLimits

0x40eb,	// (0x00018223) form_field_popup_pane_vc

0x4102,	// (0x0001823a) form_field_popup_wide_pane_vc_ParamLimits

0x4102,	// (0x0001823a) form_field_popup_wide_pane_vc

0x4118,	// (0x00018250) form_field_slider_pane_vc_ParamLimits

0x4118,	// (0x00018250) form_field_slider_pane_vc

0x412b,	// (0x00018263) form_field_slider_wide_pane_vc_ParamLimits

0x412b,	// (0x00018263) form_field_slider_wide_pane_vc

0xbc74,	// (0x0001fdac) grid_touch_1_pane_ParamLimits

0xbc74,	// (0x0001fdac) grid_touch_1_pane

0xbc88,	// (0x0001fdc0) grid_touch_2_pane_ParamLimits

0xbc88,	// (0x0001fdc0) grid_touch_2_pane

0x41f9,	// (0x00018331) touch_pane_g1_ParamLimits

0x41f9,	// (0x00018331) touch_pane_g1

0x4162,	// (0x0001829a) cell_app_pane_cp_wide_ParamLimits

0x4162,	// (0x0001829a) cell_app_pane_cp_wide

0x4173,	// (0x000182ab) grid_popup_fast_wide_pane_ParamLimits

0x4173,	// (0x000182ab) grid_popup_fast_wide_pane

0x4187,	// (0x000182bf) scroll_pane_cp19_ParamLimits

0x4187,	// (0x000182bf) scroll_pane_cp19

0xc303,	// (0x0002043b) bg_popup_window_pane_cp20

0x419b,	// (0x000182d3) listscroll_popup_fast_wide_pane

0xca47,	// (0x00020b7f) grid_indicator_nsta_pane

0x41a3,	// (0x000182db) clock_nsta_pane_g1

0x41ac,	// (0x000182e4) clock_nsta_pane_t1

0xbcb2,	// (0x0001fdea) cell_indicator_nsta_pane_ParamLimits

0xbcb2,	// (0x0001fdea) cell_indicator_nsta_pane

0x41f9,	// (0x00018331) cell_indicator_nsta_pane_g1

0xbcc9,	// (0x0001fe01) cell_indicator_nsta_pane_g2

0x0001,

0xfa9d,	// (0x00023bd5) cell_indicator_nsta_pane_g

0x4214,	// (0x0001834c) clock_nsta_pane_cp

0x421c,	// (0x00018354) indicator_nsta_pane_cp

0x4224,	// (0x0001835c) nsta_clock_indic_pane_g1

0xc3b5,	// (0x000204ed) grid_indicator_pane

0xaa10,	// (0x0001eb48) scroll_pane_cp29

0xe7a2,	// (0x000228da) indicator_nsta_pane_cp2_ParamLimits

0xe7a2,	// (0x000228da) indicator_nsta_pane_cp2

0xc35f,	// (0x00020497) main_apps_wheel_pane

0xb315,	// (0x0001f44d) form_midp_field_text_pane_ParamLimits

0x222d,	// (0x00016365) scroll_bar_cp050_ParamLimits

0x4274,	// (0x000183ac) cell_indicator_pane_ParamLimits

0x4274,	// (0x000183ac) cell_indicator_pane

0x428d,	// (0x000183c5) cell_indicator_pane_g1

0xbce8,	// (0x0001fe20) grid_wheel_folder_pane_ParamLimits

0xbce8,	// (0x0001fe20) grid_wheel_folder_pane

0xbcf6,	// (0x0001fe2e) list_wheel_apps_pane_ParamLimits

0xbcf6,	// (0x0001fe2e) list_wheel_apps_pane

0xbd04,	// (0x0001fe3c) main_apps_wheel_pane_g1_ParamLimits

0xbd04,	// (0x0001fe3c) main_apps_wheel_pane_g1

0xbd10,	// (0x0001fe48) main_apps_wheel_pane_g2_ParamLimits

0xbd10,	// (0x0001fe48) main_apps_wheel_pane_g2

0x0001,

0xfab9,	// (0x00023bf1) main_apps_wheel_pane_g_ParamLimits

0xfab9,	// (0x00023bf1) main_apps_wheel_pane_g

0xbd1e,	// (0x0001fe56) main_apps_wheel_pane_t1_ParamLimits

0xbd1e,	// (0x0001fe56) main_apps_wheel_pane_t1

0xbd32,	// (0x0001fe6a) list_wheel_apps_pane_g1

0xbd3a,	// (0x0001fe72) list_wheel_apps_pane_g2

0xbd42,	// (0x0001fe7a) list_wheel_apps_pane_g3

0xbd4a,	// (0x0001fe82) list_wheel_apps_pane_g4

0xbd54,	// (0x0001fe8c) list_wheel_apps_pane_g5

0x0004,

0xfabe,	// (0x00023bf6) list_wheel_apps_pane_g

0x12ef,	// (0x00015427) navi_icon_text_pane

0xae00,	// (0x0001ef38) aid_fill_nsta

0x4354,	// (0x0001848c) navi_icon_text_pane_g1

0x4360,	// (0x00018498) navi_icon_text_pane_t1

0x1192,	// (0x000152ca) list_set_graphic_pane_t1_ParamLimits

0x1192,	// (0x000152ca) list_set_graphic_pane_t1

0x2964,	// (0x00016a9c) popup_midp_note_alarm_window_t6_ParamLimits

0x2964,	// (0x00016a9c) popup_midp_note_alarm_window_t6

0x2976,	// (0x00016aae) popup_midp_note_alarm_window_t7_ParamLimits

0x2976,	// (0x00016aae) popup_midp_note_alarm_window_t7

0x2988,	// (0x00016ac0) popup_midp_note_alarm_window_t8_ParamLimits

0x2988,	// (0x00016ac0) popup_midp_note_alarm_window_t8

0x299a,	// (0x00016ad2) popup_midp_note_alarm_window_t9_ParamLimits

0x299a,	// (0x00016ad2) popup_midp_note_alarm_window_t9

0x29ac,	// (0x00016ae4) popup_midp_note_alarm_window_t10_ParamLimits

0x29ac,	// (0x00016ae4) popup_midp_note_alarm_window_t10

0x29be,	// (0x00016af6) popup_midp_note_alarm_window_t11_ParamLimits

0x29be,	// (0x00016af6) popup_midp_note_alarm_window_t11

0xb661,	// (0x0001f799) scroll_pane_cp17_ParamLimits

0xb661,	// (0x0001f799) scroll_pane_cp17

0xeaf1,	// (0x00022c29) volume_small_pane_cp_g1

0xed1d,	// (0x00022e55) volume_small_pane_cp_g2

0xed26,	// (0x00022e5e) volume_small_pane_cp_g3

0xed2f,	// (0x00022e67) volume_small_pane_cp_g4

0xed38,	// (0x00022e70) volume_small_pane_cp_g5

0xece7,	// (0x00022e1f) volume_small_pane_cp_g6

0xed41,	// (0x00022e79) volume_small_pane_cp_g7

0xed4a,	// (0x00022e82) volume_small_pane_cp_g8

0xed53,	// (0x00022e8b) volume_small_pane_cp_g9

0xed5c,	// (0x00022e94) volume_small_pane_cp_g10

0x1550,	// (0x00015688) midp_ticker_pane_g1_ParamLimits

0x155c,	// (0x00015694) midp_ticker_pane_g2_ParamLimits

0xf749,	// (0x00023881) midp_ticker_pane_g_ParamLimits

0x1568,	// (0x000156a0) midp_ticker_pane_t1_ParamLimits

0xae24,	// (0x0001ef5c) aid_fill_nsta_2

0x2219,	// (0x00016351) list_form2_midp_pane

0x335d,	// (0x00017495) midp_editing_number_pane_ParamLimits

0x336c,	// (0x000174a4) midp_ticker_pane_ParamLimits

0x4372,	// (0x000184aa) form2_midp_field_pane

0x4396,	// (0x000184ce) scroll_pane_cp51

0x43b6,	// (0x000184ee) form2_midp_button_pane_ParamLimits

0x43b6,	// (0x000184ee) form2_midp_button_pane

0x43c8,	// (0x00018500) form2_midp_content_pane_ParamLimits

0x43c8,	// (0x00018500) form2_midp_content_pane

0x43e2,	// (0x0001851a) form2_midp_field_choice_group_pane

0x43ea,	// (0x00018522) form2_midp_field_pane_g1

0x43f2,	// (0x0001852a) form2_midp_field_pane_g2

0x43fa,	// (0x00018532) form2_midp_field_pane_g3

0x4402,	// (0x0001853a) form2_midp_field_pane_g4

0x0003,

0xfae3,	// (0x00023c1b) form2_midp_field_pane_g

0x440a,	// (0x00018542) form2_midp_gauge_slider_pane

0x4412,	// (0x0001854a) form2_midp_gauge_wait_pane

0x441a,	// (0x00018552) form2_midp_image_pane_ParamLimits

0x441a,	// (0x00018552) form2_midp_image_pane

0xbd87,	// (0x0001febf) form2_midp_label_pane_ParamLimits

0xbd87,	// (0x0001febf) form2_midp_label_pane

0xbda0,	// (0x0001fed8) form2_midp_label_pane_cp_ParamLimits

0xbda0,	// (0x0001fed8) form2_midp_label_pane_cp

0x446f,	// (0x000185a7) form2_midp_string_pane_ParamLimits

0x446f,	// (0x000185a7) form2_midp_string_pane

0xbdbf,	// (0x0001fef7) form2_midp_text_pane_ParamLimits

0xbdbf,	// (0x0001fef7) form2_midp_text_pane

0x449c,	// (0x000185d4) form2_midp_time_pane

0x44ac,	// (0x000185e4) input_focus_pane_cp51_ParamLimits

0x44ac,	// (0x000185e4) input_focus_pane_cp51

0xbdd8,	// (0x0001ff10) form2_midp_label_pane_t1_ParamLimits

0xbdd8,	// (0x0001ff10) form2_midp_label_pane_t1

0xbe18,	// (0x0001ff50) form2_mdip_text_pane_t1_ParamLimits

0xbe18,	// (0x0001ff50) form2_mdip_text_pane_t1

0x4524,	// (0x0001865c) form2_midp_time_pane_t1

0x453f,	// (0x00018677) form2_midp_gauge_slider_pane_t1

0xbe34,	// (0x0001ff6c) form2_midp_gauge_slider_pane_t2

0xbe46,	// (0x0001ff7e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaec,	// (0x00023c24) form2_midp_gauge_slider_pane_t

0x4575,	// (0x000186ad) form2_midp_slider_pane

0x4581,	// (0x000186b9) form2_midp_gauge_wait_pane_t1

0x458f,	// (0x000186c7) form2_midp_wait_pane_ParamLimits

0x458f,	// (0x000186c7) form2_midp_wait_pane

0xbe58,	// (0x0001ff90) list_single_2graphic_pane_cp4_ParamLimits

0xbe58,	// (0x0001ff90) list_single_2graphic_pane_cp4

0xb255,	// (0x0001f38d) list_single_midp_graphic_pane_cp_ParamLimits

0xb255,	// (0x0001f38d) list_single_midp_graphic_pane_cp

0xc303,	// (0x0002043b) list_highlight_pane_cp20

0x45e2,	// (0x0001871a) list_single_2graphic_pane_g1_cp4

0x3883,	// (0x000179bb) list_single_2graphic_pane_g2_cp4

0x45ea,	// (0x00018722) list_single_2graphic_pane_t1_cp4

0xc35f,	// (0x00020497) list_highlight_pane_cp21

0x45f9,	// (0x00018731) list_single_midp_graphic_pane_g4_cp

0x4608,	// (0x00018740) list_single_midp_graphic_pane_t1_cp

0xbe6d,	// (0x0001ffa5) form2_mdip_string_pane_t1_ParamLimits

0xbe6d,	// (0x0001ffa5) form2_mdip_string_pane_t1

0xc303,	// (0x0002043b) bg_wml_button_pane_cp2

0xc2f9,	// (0x00020431) form2_midp_image_pane_g1

0xc6f3,	// (0x0002082b) list_double_large_graphic_pane_g5_ParamLimits

0xc6f3,	// (0x0002082b) list_double_large_graphic_pane_g5

0xac52,	// (0x0001ed8a) midp_form_pane_ParamLimits

0xc35f,	// (0x00020497) main_apps_wheel_pane_ParamLimits

0x90f5,	// (0x0001d22d) popup_preview_window_ParamLimits

0x90f5,	// (0x0001d22d) popup_preview_window

0x93c2,	// (0x0001d4fa) popup_touch_info_window_ParamLimits

0x93c2,	// (0x0001d4fa) popup_touch_info_window

0x93e0,	// (0x0001d518) popup_touch_menu_window_ParamLimits

0x93e0,	// (0x0001d518) popup_touch_menu_window

0xc2ef,	// (0x00020427) bg_popup_sub_pane_cp6

0x4724,	// (0x0001885c) list_touch_menu_pane

0xbee3,	// (0x0002001b) list_single_touch_menu_pane_ParamLimits

0xbee3,	// (0x0002001b) list_single_touch_menu_pane

0xbef7,	// (0x0002002f) list_single_touch_menu_pane_t1

0xc35f,	// (0x00020497) bg_popup_sub_pane_cp7_ParamLimits

0xc35f,	// (0x00020497) bg_popup_sub_pane_cp7

0x4750,	// (0x00018888) heading_sub_pane

0x4758,	// (0x00018890) list_touch_info_pane_ParamLimits

0x4758,	// (0x00018890) list_touch_info_pane

0x4767,	// (0x0001889f) list_single_touch_info_pane_ParamLimits

0x4767,	// (0x0001889f) list_single_touch_info_pane

0x4779,	// (0x000188b1) list_single_touch_info_pane_t1

0x4787,	// (0x000188bf) list_single_touch_info_pane_t2

0x0001,

0xfafa,	// (0x00023c32) list_single_touch_info_pane_t

0x146f,	// (0x000155a7) bg_popup_heading_pane_cp

0x4795,	// (0x000188cd) heading_sub_pane_t1

0x1e19,	// (0x00015f51) bg_popup_preview_window_pane_cp_ParamLimits

0x1e19,	// (0x00015f51) bg_popup_preview_window_pane_cp

0x4750,	// (0x00018888) heading_preview_pane

0x4758,	// (0x00018890) list_preview_pane_ParamLimits

0x4758,	// (0x00018890) list_preview_pane

0x47a3,	// (0x000188db) popup_preview_window_g1

0x4767,	// (0x0001889f) list_single_preview_pane_ParamLimits

0x4767,	// (0x0001889f) list_single_preview_pane

0x47ab,	// (0x000188e3) list_single_preview_pane_g1

0x47b3,	// (0x000188eb) list_single_preview_pane_t1

0x4779,	// (0x000188b1) list_single_preview_pane_t2

0x0001,

0xfaff,	// (0x00023c37) list_single_preview_pane_t

0x47c1,	// (0x000188f9) bg_popup_heading_pane_cp2_ParamLimits

0x47c1,	// (0x000188f9) bg_popup_heading_pane_cp2

0x47d7,	// (0x0001890f) heading_preview_pane_g1

0x47df,	// (0x00018917) heading_preview_pane_t1_ParamLimits

0x47df,	// (0x00018917) heading_preview_pane_t1

0xc3cc,	// (0x00020504) soft_indicator_pane_t1_ParamLimits

0xc6a7,	// (0x000207df) scroll_pane_ParamLimits

0xe502,	// (0x0002263a) scroll_sc2_left_pane

0xe50b,	// (0x00022643) scroll_sc2_right_pane

0xe52a,	// (0x00022662) scroll_bg_pane_g1_ParamLimits

0xe53f,	// (0x00022677) scroll_bg_pane_g2_ParamLimits

0xe557,	// (0x0002268f) scroll_bg_pane_g3_ParamLimits

0xf6d4,	// (0x0002380c) scroll_bg_pane_g_ParamLimits

0xe52a,	// (0x00022662) scroll_handle_pane_g1_ParamLimits

0xe56c,	// (0x000226a4) scroll_handle_pane_g2_ParamLimits

0xe557,	// (0x0002268f) scroll_handle_pane_g3_ParamLimits

0xf6db,	// (0x00023813) scroll_handle_pane_g_ParamLimits

0x8c9c,	// (0x0001cdd4) popup_choice_list_window_ParamLimits

0x8c9c,	// (0x0001cdd4) popup_choice_list_window

0x1c21,	// (0x00015d59) choice_list_pane

0x1cc5,	// (0x00015dfd) cell_toolbar_pane_t1

0x1ced,	// (0x00015e25) toolbar_button_pane_ParamLimits

0x2e8a,	// (0x00016fc2) ai_gene_pane_1_t2_ParamLimits

0x2e8a,	// (0x00016fc2) ai_gene_pane_1_t2

0x0001,

0xf8f7,	// (0x00023a2f) ai_gene_pane_1_t_ParamLimits

0xf8f7,	// (0x00023a2f) ai_gene_pane_1_t

0x47fc,	// (0x00018934) scroll_sc2_left_pane_g1

0x47fc,	// (0x00018934) scroll_sc2_right_pane_g1

0x17c2,	// (0x000158fa) bg_popup_sub_pane_cp10

0x4806,	// (0x0001893e) list_choice_list_pane

0xbf05,	// (0x0002003d) list_single_choice_list_pane_ParamLimits

0xbf05,	// (0x0002003d) list_single_choice_list_pane

0xca55,	// (0x00020b8d) list_single_choice_list_pane_g1

0xa857,	// (0x0001e98f) list_single_choice_list_pane_t1_ParamLimits

0xa857,	// (0x0001e98f) list_single_choice_list_pane_t1

0x483a,	// (0x00018972) choice_list_pane_g1

0xbf19,	// (0x00020051) choice_list_pane_t1

0xc2ef,	// (0x00020427) input_focus_pane_cp11

0xe31d,	// (0x00022455) title_pane_stacon_g2_ParamLimits

0xe31d,	// (0x00022455) title_pane_stacon_g2

0x0002,

0xf6ba,	// (0x000237f2) title_pane_stacon_g_ParamLimits

0xf6ba,	// (0x000237f2) title_pane_stacon_g

0x146f,	// (0x000155a7) cursor_press_pane

0x8d43,	// (0x0001ce7b) popup_fep_hwr_window_ParamLimits

0x8d43,	// (0x0001ce7b) popup_fep_hwr_window

0xe9ab,	// (0x00022ae3) popup_fep_vkb_window_ParamLimits

0xe9ab,	// (0x00022ae3) popup_fep_vkb_window

0xbf27,	// (0x0002005f) cursor_press_pane_g1

0x0002,

0xfb28,	// (0x00023c60) fep_vkb_side_pane_g_ParamLimits

0xed90,	// (0x00022ec8) fep_hwr_candidate_pane_ParamLimits

0xed90,	// (0x00022ec8) fep_hwr_candidate_pane

0xedba,	// (0x00022ef2) fep_hwr_side_pane_ParamLimits

0xedba,	// (0x00022ef2) fep_hwr_side_pane

0xedda,	// (0x00022f12) fep_hwr_top_pane_ParamLimits

0xedda,	// (0x00022f12) fep_hwr_top_pane

0xedf2,	// (0x00022f2a) fep_hwr_write_pane_ParamLimits

0xedf2,	// (0x00022f2a) fep_hwr_write_pane

0xfb28,	// (0x00023c60) fep_vkb_side_pane_g

0x4858,	// (0x00018990) fep_hwr_top_pane_g1

0x486a,	// (0x000189a2) fep_hwr_top_pane_g2

0xee2c,	// (0x00022f64) fep_hwr_top_pane_g3

0x0002,

0xfb04,	// (0x00023c3c) fep_hwr_top_pane_g

0xee41,	// (0x00022f79) fep_hwr_top_text_pane

0xe62f,	// (0x00022767) fep_hwr_top_text_pane_g1

0x48a0,	// (0x000189d8) fep_hwr_top_text_pane_t1

0xeec0,	// (0x00022ff8) fep_hwr_candidate_pane_g1

0x4ae5,	// (0x00018c1d) fep_vkb_keypad_pane_g3_ParamLimits

0x4ae5,	// (0x00018c1d) fep_vkb_keypad_pane_g3

0x4b0d,	// (0x00018c45) fep_vkb_keypad_pane_g4_ParamLimits

0x4b0d,	// (0x00018c45) fep_vkb_keypad_pane_g4

0x4b7c,	// (0x00018cb4) fep_vkb_bottom_pane_g2_ParamLimits

0x4b7c,	// (0x00018cb4) fep_vkb_bottom_pane_g2

0x0001,

0xfb2f,	// (0x00023c67) fep_vkb_bottom_pane_g_ParamLimits

0xfb2f,	// (0x00023c67) fep_vkb_bottom_pane_g

0x47fc,	// (0x00018934) cell_vkb_side_pane_g2

0x0001,

0xfb39,	// (0x00023c71) cell_vkb_side_pane_g

0x4c07,	// (0x00018d3f) cell_vkb_side_pane_t1

0x4c15,	// (0x00018d4d) cell_vkb_side_pane_t1_copy1

0x47fc,	// (0x00018934) bg_fep_vkb_candidate_pane_g2

0x4d41,	// (0x00018e79) cell_vkb_candidate_pane_ParamLimits

0x48ae,	// (0x000189e6) aid_size_cell_vkb_ParamLimits

0x48ae,	// (0x000189e6) aid_size_cell_vkb

0x4d41,	// (0x00018e79) cell_vkb_candidate_pane

0xeee7,	// (0x0002301f) bg_popup_fep_shadow_pane_g1

0xbf41,	// (0x00020079) fep_vkb_bottom_pane_ParamLimits

0xbf41,	// (0x00020079) fep_vkb_bottom_pane

0x4972,	// (0x00018aaa) fep_vkb_candidate_pane_ParamLimits

0x4972,	// (0x00018aaa) fep_vkb_candidate_pane

0xbf66,	// (0x0002009e) fep_vkb_keypad_pane_ParamLimits

0xbf66,	// (0x0002009e) fep_vkb_keypad_pane

0xbf9b,	// (0x000200d3) fep_vkb_side_pane_ParamLimits

0xbf9b,	// (0x000200d3) fep_vkb_side_pane

0xbfd7,	// (0x0002010f) fep_vkb_top_pane_ParamLimits

0xbfd7,	// (0x0002010f) fep_vkb_top_pane

0x4a3e,	// (0x00018b76) fep_vkb_top_pane_g1_ParamLimits

0x4a3e,	// (0x00018b76) fep_vkb_top_pane_g1

0x4a4d,	// (0x00018b85) fep_vkb_top_pane_g2_ParamLimits

0x4a4d,	// (0x00018b85) fep_vkb_top_pane_g2

0x4a5c,	// (0x00018b94) fep_vkb_top_pane_g3_ParamLimits

0x4a5c,	// (0x00018b94) fep_vkb_top_pane_g3

0x0003,

0xfb1f,	// (0x00023c57) fep_vkb_top_pane_g_ParamLimits

0xfb1f,	// (0x00023c57) fep_vkb_top_pane_g

0x4a7a,	// (0x00018bb2) fep_vkb_top_text_pane_ParamLimits

0x4a7a,	// (0x00018bb2) fep_vkb_top_text_pane

0xc00c,	// (0x00020144) fep_vkb_side_pane_g1_ParamLimits

0xc00c,	// (0x00020144) fep_vkb_side_pane_g1

0x4ad4,	// (0x00018c0c) grid_vkb_side_pane_ParamLimits

0x4ad4,	// (0x00018c0c) grid_vkb_side_pane

0xeeef,	// (0x00023027) bg_popup_fep_shadow_pane_g2

0xeef8,	// (0x00023030) bg_popup_fep_shadow_pane_g3

0xef00,	// (0x00023038) bg_popup_fep_shadow_pane_g4

0xef09,	// (0x00023041) bg_popup_fep_shadow_pane_g5

0xef13,	// (0x0002304b) bg_popup_fep_shadow_pane_g6

0xef1b,	// (0x00023053) bg_popup_fep_shadow_pane_g7

0xc867,	// (0x0002099f) bg_popup_fep_shadow_pane_g8

0x4b2b,	// (0x00018c63) grid_vkb_keypad_number_pane_ParamLimits

0x4b2b,	// (0x00018c63) grid_vkb_keypad_number_pane

0x4b3b,	// (0x00018c73) grid_vkb_keypad_pane_ParamLimits

0x4b3b,	// (0x00018c73) grid_vkb_keypad_pane

0x4b61,	// (0x00018c99) fep_vkb_bottom_pane_g1_ParamLimits

0x4b61,	// (0x00018c99) fep_vkb_bottom_pane_g1

0x4b8a,	// (0x00018cc2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4b8a,	// (0x00018cc2) grid_vkb_keypad_bottom_left_pane

0x4b9f,	// (0x00018cd7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4b9f,	// (0x00018cd7) grid_vkb_keypad_bottom_right_pane

0x4bb4,	// (0x00018cec) fep_vkb_top_text_pane_g1

0xc053,	// (0x0002018b) fep_vkb_top_text_pane_t1

0xc065,	// (0x0002019d) cell_vkb_side_pane_ParamLimits

0xc065,	// (0x0002019d) cell_vkb_side_pane

0x47fc,	// (0x00018934) cell_vkb_side_pane_g1

0x4c23,	// (0x00018d5b) cell_vkb_keypad_pane_ParamLimits

0x4c23,	// (0x00018d5b) cell_vkb_keypad_pane

0x4c98,	// (0x00018dd0) cell_vkb_keypad_pane_g1

0x0008,

0xfb4c,	// (0x00023c84) bg_popup_fep_shadow_pane_g

0xef2d,	// (0x00023065) cell_hwr_side_pane_g1

0xef2d,	// (0x00023065) cell_hwr_side_pane_g2

0x4ca2,	// (0x00018dda) cell_vkb_keypad_pane_t1

0xc07b,	// (0x000201b3) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc07b,	// (0x000201b3) cell_vkb_keypad_bottom_left_pane

0xc090,	// (0x000201c8) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc090,	// (0x000201c8) cell_vkb_keypad_bottom_right_pane

0x47fc,	// (0x00018934) cell_vkb_keypad_bottom_left_pane_g1

0x47fc,	// (0x00018934) cell_vkb_keypad_bottom_right_pane_g1

0x4d06,	// (0x00018e3e) cell_vkb_keypad_number_pane_ParamLimits

0x4d06,	// (0x00018e3e) cell_vkb_keypad_number_pane

0x4d25,	// (0x00018e5d) cell_vkb_keypad_number_pane_g1

0x4d2f,	// (0x00018e67) cell_vkb_keypad_number_pane_g2

0x4d38,	// (0x00018e70) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3e,	// (0x00023c76) cell_vkb_keypad_number_pane_g

0x4ca2,	// (0x00018dda) cell_vkb_keypad_number_pane_t1

0x4d5c,	// (0x00018e94) fep_vkb_candidate_pane_g1

0x0001,

0xfb5f,	// (0x00023c97) cell_hwr_side_pane_g

0x4d75,	// (0x00018ead) cell_hwr_side_pane_t1

0xef37,	// (0x0002306f) cell_hwr_side_pane_t1_copy1

0xef45,	// (0x0002307d) cell_hwr_candidate_pane_g1

0xef74,	// (0x000230ac) cell_hwr_candidate_pane_t1

0x47fc,	// (0x00018934) cell_vkb_candidate_pane_g2

0x4db9,	// (0x00018ef1) cell_vkb_candidate_pane_t1

0xe9d9,	// (0x00022b11) bg_popup_fep_shadow_pane_ParamLimits

0xe9d9,	// (0x00022b11) bg_popup_fep_shadow_pane

0xee0c,	// (0x00022f44) bg_fep_hwr_top_pane_g4

0x487c,	// (0x000189b4) bg_hwr_side_pane_g1_ParamLimits

0x487c,	// (0x000189b4) bg_hwr_side_pane_g1

0x95f7,	// (0x0001d72f) cell_hwr_side_pane_ParamLimits

0x95f7,	// (0x0001d72f) cell_hwr_side_pane

0xee56,	// (0x00022f8e) fep_hwr_write_pane_g1_ParamLimits

0xee56,	// (0x00022f8e) fep_hwr_write_pane_g1

0xee63,	// (0x00022f9b) fep_hwr_write_pane_g2_ParamLimits

0xee63,	// (0x00022f9b) fep_hwr_write_pane_g2

0xee70,	// (0x00022fa8) fep_hwr_write_pane_g3_ParamLimits

0xee70,	// (0x00022fa8) fep_hwr_write_pane_g3

0x9617,	// (0x0001d74f) fep_hwr_write_pane_g4_ParamLimits

0x9617,	// (0x0001d74f) fep_hwr_write_pane_g4

0x0005,

0xfb0b,	// (0x00023c43) fep_hwr_write_pane_g_ParamLimits

0xfb0b,	// (0x00023c43) fep_hwr_write_pane_g

0xee0c,	// (0x00022f44) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xee0c,	// (0x00022f44) bg_fep_hwr_candidate_pane_g2

0xee7e,	// (0x00022fb6) cell_hwr_candidate_pane_ParamLimits

0xee7e,	// (0x00022fb6) cell_hwr_candidate_pane

0xeec0,	// (0x00022ff8) fep_hwr_candidate_pane_g1_ParamLimits

0x48dc,	// (0x00018a14) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x48dc,	// (0x00018a14) bg_popup_fep_shadow_pane_cp2

0x4a6c,	// (0x00018ba4) fep_vkb_top_pane_g4_ParamLimits

0x4a6c,	// (0x00018ba4) fep_vkb_top_pane_g4

0x4ab2,	// (0x00018bea) fep_vkb_side_pane_g2_ParamLimits

0x4ab2,	// (0x00018bea) fep_vkb_side_pane_g2

0xa582,	// (0x0001e6ba) list_setting_pane_t4_ParamLimits

0xa582,	// (0x0001e6ba) list_setting_pane_t4

0xa5fc,	// (0x0001e734) list_setting_number_pane_t5_ParamLimits

0xa5fc,	// (0x0001e734) list_setting_number_pane_t5

0xe685,	// (0x000227bd) list_double_heading_pane_cp2_ParamLimits

0xe685,	// (0x000227bd) list_double_heading_pane_cp2

0x4dc7,	// (0x00018eff) list_double_heading_pane_g1_cp2_ParamLimits

0x4dc7,	// (0x00018eff) list_double_heading_pane_g1_cp2

0x4dd3,	// (0x00018f0b) list_double_heading_pane_g2_cp2_ParamLimits

0x4dd3,	// (0x00018f0b) list_double_heading_pane_g2_cp2

0x4de7,	// (0x00018f1f) list_double_heading_pane_t1_cp2_ParamLimits

0x4de7,	// (0x00018f1f) list_double_heading_pane_t1_cp2

0x4dfd,	// (0x00018f35) list_double_heading_pane_t2_cp2_ParamLimits

0x4dfd,	// (0x00018f35) list_double_heading_pane_t2_cp2

0xc2e7,	// (0x0002041f) aid_value_unit2

0xe28d,	// (0x000223c5) popup_preview_fixed_window

0xc4a3,	// (0x000205db) bg_popup_preview_window_pane_cp02

0x4e0f,	// (0x00018f47) list_preview_fixed_pane

0x4e55,	// (0x00018f8d) list_empty_pane_fp_ParamLimits

0x4e55,	// (0x00018f8d) list_empty_pane_fp

0x4e55,	// (0x00018f8d) list_single_cale_day_pane_fp_ParamLimits

0x4e55,	// (0x00018f8d) list_single_cale_day_pane_fp

0x4e55,	// (0x00018f8d) list_single_graphic_heading_pane_fp_ParamLimits

0x4e55,	// (0x00018f8d) list_single_graphic_heading_pane_fp

0x4e55,	// (0x00018f8d) list_single_graphic_pane_fp_ParamLimits

0x4e55,	// (0x00018f8d) list_single_graphic_pane_fp

0x4e55,	// (0x00018f8d) list_single_heading_pane_fp_ParamLimits

0x4e55,	// (0x00018f8d) list_single_heading_pane_fp

0x4e55,	// (0x00018f8d) list_single_pane_fp_ParamLimits

0x4e55,	// (0x00018f8d) list_single_pane_fp

0x4e6b,	// (0x00018fa3) list_single_pane_fp_g1_ParamLimits

0x4e6b,	// (0x00018fa3) list_single_pane_fp_g1

0x4e77,	// (0x00018faf) list_single_pane_fp_g2_ParamLimits

0x4e77,	// (0x00018faf) list_single_pane_fp_g2

0x4e83,	// (0x00018fbb) list_single_pane_fp_g3_ParamLimits

0x4e83,	// (0x00018fbb) list_single_pane_fp_g3

0x4e97,	// (0x00018fcf) list_single_pane_fp_g4_ParamLimits

0x4e97,	// (0x00018fcf) list_single_pane_fp_g4

0x0003,

0xfb72,	// (0x00023caa) list_single_pane_fp_g_ParamLimits

0xfb72,	// (0x00023caa) list_single_pane_fp_g

0x4ea3,	// (0x00018fdb) list_single_pane_fp_t1_ParamLimits

0x4ea3,	// (0x00018fdb) list_single_pane_fp_t1

0x4eba,	// (0x00018ff2) list_single_graphic_pane_fp_g1_ParamLimits

0x4eba,	// (0x00018ff2) list_single_graphic_pane_fp_g1

0x4e6b,	// (0x00018fa3) list_single_graphic_pane_fp_g2_ParamLimits

0x4e6b,	// (0x00018fa3) list_single_graphic_pane_fp_g2

0x4e77,	// (0x00018faf) list_single_graphic_pane_fp_g3_ParamLimits

0x4e77,	// (0x00018faf) list_single_graphic_pane_fp_g3

0x4e83,	// (0x00018fbb) list_single_graphic_pane_fp_g4_ParamLimits

0x4e83,	// (0x00018fbb) list_single_graphic_pane_fp_g4

0x4e97,	// (0x00018fcf) list_single_graphic_pane_fp_g5_ParamLimits

0x4e97,	// (0x00018fcf) list_single_graphic_pane_fp_g5

0x0004,

0xfb7b,	// (0x00023cb3) list_single_graphic_pane_fp_g_ParamLimits

0xfb7b,	// (0x00023cb3) list_single_graphic_pane_fp_g

0x4ec6,	// (0x00018ffe) list_single_graphic_pane_fp_t1_ParamLimits

0x4ec6,	// (0x00018ffe) list_single_graphic_pane_fp_t1

0x4eba,	// (0x00018ff2) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4eba,	// (0x00018ff2) list_single_graphic_heading_pane_fp_g1

0x4e6b,	// (0x00018fa3) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4e6b,	// (0x00018fa3) list_single_graphic_heading_pane_fp_g2

0x4e77,	// (0x00018faf) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4e77,	// (0x00018faf) list_single_graphic_heading_pane_fp_g3

0x4e83,	// (0x00018fbb) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4e83,	// (0x00018fbb) list_single_graphic_heading_pane_fp_g4

0x4e97,	// (0x00018fcf) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4e97,	// (0x00018fcf) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x00023cb3) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x00023cb3) list_single_graphic_heading_pane_fp_g

0x4edc,	// (0x00019014) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4edc,	// (0x00019014) list_single_graphic_heading_pane_fp_t1

0x4ef2,	// (0x0001902a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4ef2,	// (0x0001902a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb86,	// (0x00023cbe) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb86,	// (0x00023cbe) list_single_graphic_heading_pane_fp_t

0x4f04,	// (0x0001903c) list_single_cale_day_pane_fp_g1_ParamLimits

0x4f04,	// (0x0001903c) list_single_cale_day_pane_fp_g1

0x4f3c,	// (0x00019074) list_single_cale_day_pane_fp_g2_ParamLimits

0x4f3c,	// (0x00019074) list_single_cale_day_pane_fp_g2

0x4f48,	// (0x00019080) list_single_cale_day_pane_fp_g3_ParamLimits

0x4f48,	// (0x00019080) list_single_cale_day_pane_fp_g3

0x4f70,	// (0x000190a8) list_single_cale_day_pane_fp_g4_ParamLimits

0x4f70,	// (0x000190a8) list_single_cale_day_pane_fp_g4

0x4f94,	// (0x000190cc) list_single_cale_day_pane_fp_g5_ParamLimits

0x4f94,	// (0x000190cc) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8b,	// (0x00023cc3) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8b,	// (0x00023cc3) list_single_cale_day_pane_fp_g

0x4fb8,	// (0x000190f0) list_single_cale_day_pane_fp_t1_ParamLimits

0x4fb8,	// (0x000190f0) list_single_cale_day_pane_fp_t1

0x4fde,	// (0x00019116) list_single_cale_day_pane_fp_t2_ParamLimits

0x4fde,	// (0x00019116) list_single_cale_day_pane_fp_t2

0x4ff7,	// (0x0001912f) list_single_cale_day_pane_fp_t3_ParamLimits

0x4ff7,	// (0x0001912f) list_single_cale_day_pane_fp_t3

0x0002,

0xfb96,	// (0x00023cce) list_single_cale_day_pane_fp_t_ParamLimits

0xfb96,	// (0x00023cce) list_single_cale_day_pane_fp_t

0x4e6b,	// (0x00018fa3) list_empty_pane_fp_g1_ParamLimits

0x4e6b,	// (0x00018fa3) list_empty_pane_fp_g1

0x5010,	// (0x00019148) list_empty_pane_fp_t1

0x501e,	// (0x00019156) list_empty_pane_fp_t2

0x0001,

0xfb9d,	// (0x00023cd5) list_empty_pane_fp_t

0x4e6b,	// (0x00018fa3) list_single_heading_pane_fp_g1_ParamLimits

0x4e6b,	// (0x00018fa3) list_single_heading_pane_fp_g1

0x4e77,	// (0x00018faf) list_single_heading_pane_fp_g2_ParamLimits

0x4e77,	// (0x00018faf) list_single_heading_pane_fp_g2

0x4e83,	// (0x00018fbb) list_single_heading_pane_fp_g3_ParamLimits

0x4e83,	// (0x00018fbb) list_single_heading_pane_fp_g3

0x0002,

0xfba2,	// (0x00023cda) list_single_heading_pane_fp_g_ParamLimits

0xfba2,	// (0x00023cda) list_single_heading_pane_fp_g

0x502c,	// (0x00019164) list_single_heading_pane_fp_t1_ParamLimits

0x502c,	// (0x00019164) list_single_heading_pane_fp_t1

0x503e,	// (0x00019176) list_single_heading_pane_fp_t2_ParamLimits

0x503e,	// (0x00019176) list_single_heading_pane_fp_t2

0x0001,

0xfba9,	// (0x00023ce1) list_single_heading_pane_fp_t_ParamLimits

0xfba9,	// (0x00023ce1) list_single_heading_pane_fp_t

0xa8a3,	// (0x0001e9db) aid_size_cell_fast

0xc486,	// (0x000205be) soft_indicator_pane_cp1_t1

0xa8ac,	// (0x0001e9e4) cell_app_pane_cp2_ParamLimits

0xa8ac,	// (0x0001e9e4) cell_app_pane_cp2

0xed79,	// (0x00022eb1) fep_hwr_candidate_drop_down_list_pane

0xeeda,	// (0x00023012) fep_hwr_candidate_pane_g3_ParamLimits

0xeeda,	// (0x00023012) fep_hwr_candidate_pane_g3

0xca5d,	// (0x00020b95) fep_hwr_candidate_pane_g4_ParamLimits

0xca5d,	// (0x00020b95) fep_hwr_candidate_pane_g4

0x0002,

0xfb18,	// (0x00023c50) fep_hwr_candidate_pane_g_ParamLimits

0xfb18,	// (0x00023c50) fep_hwr_candidate_pane_g

0x4961,	// (0x00018a99) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4961,	// (0x00018a99) fep_vkb_candidate_drop_down_list_pane

0x4d64,	// (0x00018e9c) fep_vkb_candidate_pane_g3

0x4d6c,	// (0x00018ea4) fep_vkb_candidate_pane_g4

0x0002,

0xfb45,	// (0x00023c7d) fep_vkb_candidate_pane_g

0xef45,	// (0x0002307d) cell_hwr_candidate_pane_g1_ParamLimits

0xef53,	// (0x0002308b) cell_hwr_candidate_pane_g3_ParamLimits

0xef53,	// (0x0002308b) cell_hwr_candidate_pane_g3

0x5c3e,	// (0x00019d76) cell_hwr_candidate_pane_g4_ParamLimits

0x5c3e,	// (0x00019d76) cell_hwr_candidate_pane_g4

0x0002,

0xfb64,	// (0x00023c9c) cell_hwr_candidate_pane_g_ParamLimits

0xfb64,	// (0x00023c9c) cell_hwr_candidate_pane_g

0x4d83,	// (0x00018ebb) cell_vkb_candidate_pane_g3_ParamLimits

0x4d83,	// (0x00018ebb) cell_vkb_candidate_pane_g3

0x4d9e,	// (0x00018ed6) cell_vkb_candidate_pane_g4_ParamLimits

0x4d9e,	// (0x00018ed6) cell_vkb_candidate_pane_g4

0xc0ab,	// (0x000201e3) cell_app_pane_cp2_g1_ParamLimits

0xc0ab,	// (0x000201e3) cell_app_pane_cp2_g1

0x5072,	// (0x000191aa) cell_app_pane_cp2_g2_ParamLimits

0x5072,	// (0x000191aa) cell_app_pane_cp2_g2

0x0001,

0xfbae,	// (0x00023ce6) cell_app_pane_cp2_g_ParamLimits

0xfbae,	// (0x00023ce6) cell_app_pane_cp2_g

0x507e,	// (0x000191b6) cell_app_pane_cp2_t1_ParamLimits

0x507e,	// (0x000191b6) cell_app_pane_cp2_t1

0xc789,	// (0x000208c1) grid_highlight_pane_cp1_ParamLimits

0xc789,	// (0x000208c1) grid_highlight_pane_cp1

0xef92,	// (0x000230ca) cell_hwr_candidate_pane_cp1_ParamLimits

0xef92,	// (0x000230ca) cell_hwr_candidate_pane_cp1

0xef45,	// (0x0002307d) fep_hwr_candidate_drop_down_list_pane_g1

0xefb1,	// (0x000230e9) fep_hwr_candidate_drop_down_list_pane_g2

0xefbe,	// (0x000230f6) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb3,	// (0x00023ceb) fep_hwr_candidate_drop_down_list_pane_g

0xefcb,	// (0x00023103) fep_hwr_candidate_drop_down_list_scroll_pane

0xefd4,	// (0x0002310c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xefd4,	// (0x0002310c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xefe1,	// (0x00023119) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xefe1,	// (0x00023119) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xefee,	// (0x00023126) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xefee,	// (0x00023126) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xeffb,	// (0x00023133) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xeffb,	// (0x00023133) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xf016,	// (0x0002314e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf016,	// (0x0002314e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xf031,	// (0x00023169) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xf031,	// (0x00023169) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xf04c,	// (0x00023184) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf04c,	// (0x00023184) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xf067,	// (0x0002319f) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf067,	// (0x0002319f) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbba,	// (0x00023cf2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbba,	// (0x00023cf2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5090,	// (0x000191c8) cell_vkb_candidate_pane_cp1_ParamLimits

0x5090,	// (0x000191c8) cell_vkb_candidate_pane_cp1

0x4a6c,	// (0x00018ba4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4a6c,	// (0x00018ba4) fep_vkb_candidate_drop_down_list_pane_g1

0x50b0,	// (0x000191e8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x50b0,	// (0x000191e8) fep_vkb_candidate_drop_down_list_pane_g2

0x50bd,	// (0x000191f5) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x50bd,	// (0x000191f5) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x00023d03) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcb,	// (0x00023d03) fep_vkb_candidate_drop_down_list_pane_g

0x50ca,	// (0x00019202) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x50ca,	// (0x00019202) fep_vkb_candidate_drop_down_list_scroll_pane

0x50d7,	// (0x0001920f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x50d7,	// (0x0001920f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x50e4,	// (0x0001921c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x50e4,	// (0x0001921c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x50f0,	// (0x00019228) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x50f0,	// (0x00019228) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x50fc,	// (0x00019234) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x50fc,	// (0x00019234) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x511d,	// (0x00019255) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x511d,	// (0x00019255) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x513e,	// (0x00019276) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x513e,	// (0x00019276) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x515f,	// (0x00019297) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x515f,	// (0x00019297) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5180,	// (0x000192b8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5180,	// (0x000192b8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x00023d0a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x00023d0a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9d1b,	// (0x0001de53) title_pane_g1_ParamLimits

0x9d2e,	// (0x0001de66) title_pane_g2_ParamLimits

0xf54e,	// (0x00023686) title_pane_g_ParamLimits

0xe61f,	// (0x00022757) aid_call2_pane

0xe627,	// (0x0002275f) aid_call_pane

0xe62f,	// (0x00022767) popup_clock_analogue_window_g1

0xe62f,	// (0x00022767) popup_clock_analogue_window_g2

0xe637,	// (0x0002276f) popup_clock_analogue_window_g3

0xe640,	// (0x00022778) popup_clock_analogue_window_g4

0xc2f9,	// (0x00020431) popup_clock_analogue_window_g5

0x0004,

0xf6e9,	// (0x00023821) popup_clock_analogue_window_g

0xe648,	// (0x00022780) popup_clock_analogue_window_t1

0xe6a6,	// (0x000227de) clock_digital_number_pane_ParamLimits

0xe6a6,	// (0x000227de) clock_digital_number_pane

0xe6b2,	// (0x000227ea) clock_digital_number_pane_cp02_ParamLimits

0xe6b2,	// (0x000227ea) clock_digital_number_pane_cp02

0xe6be,	// (0x000227f6) clock_digital_number_pane_cp03_ParamLimits

0xe6be,	// (0x000227f6) clock_digital_number_pane_cp03

0xe6ca,	// (0x00022802) clock_digital_number_pane_cp04_ParamLimits

0xe6ca,	// (0x00022802) clock_digital_number_pane_cp04

0xe6d6,	// (0x0002280e) clock_digital_separator_pane_ParamLimits

0xe6d6,	// (0x0002280e) clock_digital_separator_pane

0xe6e2,	// (0x0002281a) popup_clock_digital_window_t1_ParamLimits

0xe6e2,	// (0x0002281a) popup_clock_digital_window_t1

0xc2f9,	// (0x00020431) clock_digital_number_pane_g1

0xc2f9,	// (0x00020431) clock_digital_number_pane_g2

0x0001,

0xf6f4,	// (0x0002382c) clock_digital_number_pane_g

0xc2f9,	// (0x00020431) clock_digital_separator_pane_g1

0xc2f9,	// (0x00020431) clock_digital_separator_pane_g2

0x0001,

0xf6f4,	// (0x0002382c) clock_digital_separator_pane_g

0xae00,	// (0x0001ef38) aid_fill_nsta_ParamLimits

0xaf36,	// (0x0001f06e) indicator_nsta_pane_ParamLimits

0x1ab1,	// (0x00015be9) popup_clock_analogue_window

0x1ab1,	// (0x00015be9) popup_clock_digital_window

0xca47,	// (0x00020b7f) grid_indicator_nsta_pane_ParamLimits

0x41ba,	// (0x000182f2) clock_nsta_pane_t2

0x0001,

0xfa98,	// (0x00023bd0) clock_nsta_pane_t

0xe4c4,	// (0x000225fc) aid_size_max_handle

0x8a7d,	// (0x0001cbb5) aid_size_min_handle

0x146f,	// (0x000155a7) editor_scroll_pane

0x519b,	// (0x000192d3) ex_editor_pane

0xc916,	// (0x00020a4e) scroll_pane_cp13

0xc6d3,	// (0x0002080b) scroll_pane_cp14

0xe67d,	// (0x000227b5) scroll_pane_cp36

0xaa37,	// (0x0001eb6f) list_single_graphic_hl_pane_cp2_ParamLimits

0xaa37,	// (0x0001eb6f) list_single_graphic_hl_pane_cp2

0xba9e,	// (0x0001fbd6) list_single_graphic_hl_pane_ParamLimits

0xba9e,	// (0x0001fbd6) list_single_graphic_hl_pane

0xc0c9,	// (0x00020201) aid_size_min_hl_cp1

0x51ac,	// (0x000192e4) list_highlight_pane_cp34_ParamLimits

0x51ac,	// (0x000192e4) list_highlight_pane_cp34

0x51bd,	// (0x000192f5) list_single_graphic_hl_pane_g1_ParamLimits

0x51bd,	// (0x000192f5) list_single_graphic_hl_pane_g1

0xc0d2,	// (0x0002020a) list_single_graphic_hl_pane_g2_ParamLimits

0xc0d2,	// (0x0002020a) list_single_graphic_hl_pane_g2

0xc0d2,	// (0x0002020a) list_single_graphic_hl_pane_g3_ParamLimits

0xc0d2,	// (0x0002020a) list_single_graphic_hl_pane_g3

0x13a8,	// (0x000154e0) list_single_graphic_hl_pane_g4_ParamLimits

0x13a8,	// (0x000154e0) list_single_graphic_hl_pane_g4

0x523c,	// (0x00019374) list_single_graphic_hl_pane_g5_ParamLimits

0x523c,	// (0x00019374) list_single_graphic_hl_pane_g5

0x0004,

0xfbe3,	// (0x00023d1b) list_single_graphic_hl_pane_g_ParamLimits

0xfbe3,	// (0x00023d1b) list_single_graphic_hl_pane_g

0xc0de,	// (0x00020216) list_single_graphic_hl_pane_t1_ParamLimits

0xc0de,	// (0x00020216) list_single_graphic_hl_pane_t1

0x520c,	// (0x00019344) aid_size_min_hl_cp2

0x5215,	// (0x0001934d) list_highlight_pane_cp34_cp2_ParamLimits

0x5215,	// (0x0001934d) list_highlight_pane_cp34_cp2

0x51bd,	// (0x000192f5) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x51bd,	// (0x000192f5) list_single_graphic_hl_pane_g1_cp2

0x5222,	// (0x0001935a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5222,	// (0x0001935a) list_single_graphic_hl_pane_g2_cp2

0xc0f4,	// (0x0002022c) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc0f4,	// (0x0002022c) list_single_graphic_hl_pane_g3_cp2

0x13a8,	// (0x000154e0) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x13a8,	// (0x000154e0) list_single_graphic_hl_pane_g4_cp2

0x523c,	// (0x00019374) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x523c,	// (0x00019374) list_single_graphic_hl_pane_g5_cp2

0x8b2f,	// (0x0001cc67) control_pane_g4_ParamLimits

0x8b2f,	// (0x0001cc67) control_pane_g4

0x17c2,	// (0x000158fa) bg_popup_sub_pane_cp10_ParamLimits

0x4806,	// (0x0001893e) list_choice_list_pane_ParamLimits

0x4815,	// (0x0001894d) scroll_pane_cp23

0xc4a3,	// (0x000205db) bg_popup_preview_window_pane_cp02_ParamLimits

0x4e0f,	// (0x00018f47) list_preview_fixed_pane_ParamLimits

0x4e25,	// (0x00018f5d) list_preview_fixed_pane_cp_ParamLimits

0x4e25,	// (0x00018f5d) list_preview_fixed_pane_cp

0x4e31,	// (0x00018f69) popup_preview_fixed_window_g1_ParamLimits

0x4e31,	// (0x00018f69) popup_preview_fixed_window_g1

0x4e3d,	// (0x00018f75) popup_preview_fixed_window_g2_ParamLimits

0x4e3d,	// (0x00018f75) popup_preview_fixed_window_g2

0x0002,

0xfb6b,	// (0x00023ca3) popup_preview_fixed_window_g_ParamLimits

0xfb6b,	// (0x00023ca3) popup_preview_fixed_window_g

0xe401,	// (0x00022539) aid_navi_side_left_pane_ParamLimits

0xe416,	// (0x0002254e) aid_navi_side_right_pane_ParamLimits

0xe42e,	// (0x00022566) navi_icon_pane_stacon_ParamLimits

0xe442,	// (0x0002257a) navi_navi_pane_stacon_ParamLimits

0xe42e,	// (0x00022566) navi_text_pane_stacon_ParamLimits

0xe1b2,	// (0x000222ea) main_text_info_pane

0x5266,	// (0x0001939e) listscroll_text_info_pane

0x526e,	// (0x000193a6) list_text_info_pane_ParamLimits

0x526e,	// (0x000193a6) list_text_info_pane

0x527d,	// (0x000193b5) scroll_pane_cp24_ParamLimits

0x527d,	// (0x000193b5) scroll_pane_cp24

0xc102,	// (0x0002023a) list_text_info_pane_t1_ParamLimits

0xc102,	// (0x0002023a) list_text_info_pane_t1

0x8cb8,	// (0x0001cdf0) popup_fast_swap2_window_ParamLimits

0x8cb8,	// (0x0001cdf0) popup_fast_swap2_window

0x52cf,	// (0x00019407) aid_size_cell_fast2

0xc2ef,	// (0x00020427) bg_popup_window_pane_cp17

0x224d,	// (0x00016385) heading_pane_cp2

0xc5d7,	// (0x0002070f) listscroll_fast2_pane

0x52d9,	// (0x00019411) grid_fast2_pane

0x52e3,	// (0x0001941b) listscroll_fast2_pane_g1

0x52eb,	// (0x00019423) listscroll_fast2_pane_g2

0x0001,

0xfbee,	// (0x00023d26) listscroll_fast2_pane_g

0xc916,	// (0x00020a4e) scroll_pane_cp26

0x52f5,	// (0x0001942d) cell_fast2_pane_ParamLimits

0x52f5,	// (0x0001942d) cell_fast2_pane

0x530a,	// (0x00019442) cell_fast2_pane_g1

0x5313,	// (0x0001944b) cell_fast2_pane_g2

0x531c,	// (0x00019454) cell_fast2_pane_g3

0x0002,

0xfbf3,	// (0x00023d2b) cell_fast2_pane_g

0xc60a,	// (0x00020742) grid_highlight_pane_cp9

0xe993,	// (0x00022acb) main_eswt_pane_ParamLimits

0xe993,	// (0x00022acb) main_eswt_pane

0x5292,	// (0x000193ca) list_single_text_info_pane

0x5324,	// (0x0001945c) eswt_ctrl_button_pane

0x5324,	// (0x0001945c) eswt_ctrl_canvas_pane

0xc11e,	// (0x00020256) eswt_ctrl_combo_pane

0x5324,	// (0x0001945c) eswt_ctrl_default_pane

0x5324,	// (0x0001945c) eswt_ctrl_label_pane

0x5334,	// (0x0001946c) eswt_ctrl_wait_pane

0xc126,	// (0x0002025e) eswt_shell_pane

0xc2ef,	// (0x00020427) listscroll_eswt_app_pane

0x535c,	// (0x00019494) popup_eswt_tasktip_window_ParamLimits

0x535c,	// (0x00019494) popup_eswt_tasktip_window

0x1e19,	// (0x00015f51) bg_popup_window_pane_cp18

0x536d,	// (0x000194a5) eswt_control_pane_g1_ParamLimits

0x536d,	// (0x000194a5) eswt_control_pane_g1

0x537a,	// (0x000194b2) eswt_control_pane_g2_ParamLimits

0x537a,	// (0x000194b2) eswt_control_pane_g2

0x5387,	// (0x000194bf) eswt_control_pane_g3_ParamLimits

0x5387,	// (0x000194bf) eswt_control_pane_g3

0x5394,	// (0x000194cc) eswt_control_pane_g4_ParamLimits

0x5394,	// (0x000194cc) eswt_control_pane_g4

0x0003,

0xfbfa,	// (0x00023d32) eswt_control_pane_g_ParamLimits

0xfbfa,	// (0x00023d32) eswt_control_pane_g

0xc789,	// (0x000208c1) bg_button_pane_ParamLimits

0xc789,	// (0x000208c1) bg_button_pane

0xc61f,	// (0x00020757) common_borders_pane_copy2_ParamLimits

0xc61f,	// (0x00020757) common_borders_pane_copy2

0x53a1,	// (0x000194d9) control_button_pane_g1_ParamLimits

0x53a1,	// (0x000194d9) control_button_pane_g1

0x53ad,	// (0x000194e5) control_button_pane_g2_ParamLimits

0x53ad,	// (0x000194e5) control_button_pane_g2

0x53b9,	// (0x000194f1) control_button_pane_g3_ParamLimits

0x53b9,	// (0x000194f1) control_button_pane_g3

0x0002,

0xfc03,	// (0x00023d3b) control_button_pane_g_ParamLimits

0xfc03,	// (0x00023d3b) control_button_pane_g

0x53cd,	// (0x00019505) control_button_pane_t1

0x53db,	// (0x00019513) control_button_pane_t2

0x0001,

0xfc0a,	// (0x00023d42) control_button_pane_t

0x1cf9,	// (0x00015e31) bg_button_pane_g1

0x1d09,	// (0x00015e41) bg_button_pane_g2

0x1d01,	// (0x00015e39) bg_button_pane_g3

0x1d19,	// (0x00015e51) bg_button_pane_g4

0x1d11,	// (0x00015e49) bg_button_pane_g5

0x1d21,	// (0x00015e59) bg_button_pane_g6

0x1d29,	// (0x00015e61) bg_button_pane_g7

0x1d39,	// (0x00015e71) bg_button_pane_g8

0x1d31,	// (0x00015e69) bg_button_pane_g9

0x0008,

0xf84b,	// (0x00023983) bg_button_pane_g

0x47c1,	// (0x000188f9) common_borders_pane_ParamLimits

0x47c1,	// (0x000188f9) common_borders_pane

0x536d,	// (0x000194a5) eswt_control_pane_g1_copy1_ParamLimits

0x536d,	// (0x000194a5) eswt_control_pane_g1_copy1

0x537a,	// (0x000194b2) eswt_control_pane_g2_copy1_ParamLimits

0x537a,	// (0x000194b2) eswt_control_pane_g2_copy1

0x5387,	// (0x000194bf) eswt_control_pane_g3_copy1_ParamLimits

0x5387,	// (0x000194bf) eswt_control_pane_g3_copy1

0x5394,	// (0x000194cc) eswt_control_pane_g4_copy1_ParamLimits

0x5394,	// (0x000194cc) eswt_control_pane_g4_copy1

0x47fc,	// (0x00018934) bg_eswt_ctrl_canvas_pane_g1

0x47c1,	// (0x000188f9) common_borders_pane_cp2_ParamLimits

0x47c1,	// (0x000188f9) common_borders_pane_cp2

0x47c1,	// (0x000188f9) common_borders_pane_cp3_ParamLimits

0x47c1,	// (0x000188f9) common_borders_pane_cp3

0x53e9,	// (0x00019521) separator_horizontal_pane

0x53f1,	// (0x00019529) separator_vertical_pane

0x536d,	// (0x000194a5) eswt_control_pane_g1_copy2_ParamLimits

0x536d,	// (0x000194a5) eswt_control_pane_g1_copy2

0x537a,	// (0x000194b2) eswt_control_pane_g2_copy2_ParamLimits

0x537a,	// (0x000194b2) eswt_control_pane_g2_copy2

0x5387,	// (0x000194bf) eswt_control_pane_g3_copy2_ParamLimits

0x5387,	// (0x000194bf) eswt_control_pane_g3_copy2

0x5394,	// (0x000194cc) eswt_control_pane_g4_copy2_ParamLimits

0x5394,	// (0x000194cc) eswt_control_pane_g4_copy2

0xc2ef,	// (0x00020427) common_borders_pane_cp4

0x53fa,	// (0x00019532) separator_horizontal_pane_g1

0x5403,	// (0x0001953b) separator_horizontal_pane_g2

0x540c,	// (0x00019544) separator_horizontal_pane_g3

0x0002,

0xfc0f,	// (0x00023d47) separator_horizontal_pane_g

0x536d,	// (0x000194a5) eswt_control_pane_g1_copy3_ParamLimits

0x536d,	// (0x000194a5) eswt_control_pane_g1_copy3

0x537a,	// (0x000194b2) eswt_control_pane_g2_copy3_ParamLimits

0x537a,	// (0x000194b2) eswt_control_pane_g2_copy3

0x5387,	// (0x000194bf) eswt_control_pane_g3_copy3_ParamLimits

0x5387,	// (0x000194bf) eswt_control_pane_g3_copy3

0x5394,	// (0x000194cc) eswt_control_pane_g4_copy3_ParamLimits

0x5394,	// (0x000194cc) eswt_control_pane_g4_copy3

0xc2ef,	// (0x00020427) common_borders_pane_cp5

0x5415,	// (0x0001954d) separator_vertical_pane_g1

0x541e,	// (0x00019556) separator_vertical_pane_g2

0x5427,	// (0x0001955f) separator_vertical_pane_g3

0x0002,

0xfc16,	// (0x00023d4e) separator_vertical_pane_g

0x536d,	// (0x000194a5) eswt_control_pane_g1_copy4_ParamLimits

0x536d,	// (0x000194a5) eswt_control_pane_g1_copy4

0x537a,	// (0x000194b2) eswt_control_pane_g2_copy4_ParamLimits

0x537a,	// (0x000194b2) eswt_control_pane_g2_copy4

0x5387,	// (0x000194bf) eswt_control_pane_g3_copy4_ParamLimits

0x5387,	// (0x000194bf) eswt_control_pane_g3_copy4

0x5394,	// (0x000194cc) eswt_control_pane_g4_copy4_ParamLimits

0x5394,	// (0x000194cc) eswt_control_pane_g4_copy4

0xc146,	// (0x0002027e) eswt_ctrl_combo_button_pane

0xc14e,	// (0x00020286) eswt_ctrl_input_pane

0xc156,	// (0x0002028e) popup_choice_list_window_cp70

0xc15e,	// (0x00020296) eswt_ctrl_input_pane_t1

0xc2ef,	// (0x00020427) input_focus_pane_cp70

0x47c1,	// (0x000188f9) bg_button_pane_cp70_ParamLimits

0x47c1,	// (0x000188f9) bg_button_pane_cp70

0xc16c,	// (0x000202a4) eswt_ctrl_combo_button_pane_g1

0x545e,	// (0x00019596) wait_bar_pane_cp70

0x1e19,	// (0x00015f51) bg_popup_window_pane_cp70_ParamLimits

0x1e19,	// (0x00015f51) bg_popup_window_pane_cp70

0x5466,	// (0x0001959e) popup_eswt_tasktip_window_t1

0x547c,	// (0x000195b4) wait_bar_pane_cp71_ParamLimits

0x547c,	// (0x000195b4) wait_bar_pane_cp71

0x5488,	// (0x000195c0) grid_eswt_app_pane

0xe502,	// (0x0002263a) scroll_pane_cp70

0xc174,	// (0x000202ac) cell_eswt_app_pane_ParamLimits

0xc174,	// (0x000202ac) cell_eswt_app_pane

0xc19e,	// (0x000202d6) cell_eswt_app_pane_g1_ParamLimits

0xc19e,	// (0x000202d6) cell_eswt_app_pane_g1

0xc1cd,	// (0x00020305) cell_eswt_app_pane_g2_ParamLimits

0xc1cd,	// (0x00020305) cell_eswt_app_pane_g2

0x0001,

0xfc1d,	// (0x00023d55) cell_eswt_app_pane_g_ParamLimits

0xfc1d,	// (0x00023d55) cell_eswt_app_pane_g

0xc1f1,	// (0x00020329) cell_eswt_app_pane_t1_ParamLimits

0xc1f1,	// (0x00020329) cell_eswt_app_pane_t1

0x5546,	// (0x0001967e) grid_highlight_pane_cp70_ParamLimits

0x5546,	// (0x0001967e) grid_highlight_pane_cp70

0x1344,	// (0x0001547c) set_content_pane_g1

0xadb5,	// (0x0001eeed) status_small_volume_pane

0x962c,	// (0x0001d764) status_small_volume_pane_g1

0x9634,	// (0x0001d76c) volume_small2_pane

0x963d,	// (0x0001d775) volume_small2_pane_g1

0x9646,	// (0x0001d77e) volume_small2_pane_g2

0x964f,	// (0x0001d787) volume_small2_pane_g3

0x9658,	// (0x0001d790) volume_small2_pane_g4

0x9661,	// (0x0001d799) volume_small2_pane_g5

0x966a,	// (0x0001d7a2) volume_small2_pane_g6

0x9673,	// (0x0001d7ab) volume_small2_pane_g7

0x967c,	// (0x0001d7b4) volume_small2_pane_g8

0x9685,	// (0x0001d7bd) volume_small2_pane_g9

0x968e,	// (0x0001d7c6) volume_small2_pane_g10

0x0009,

0xfc22,	// (0x00023d5a) volume_small2_pane_g

0x4bb4,	// (0x00018cec) fep_vkb_top_text_pane_g1_ParamLimits

0xc053,	// (0x0002018b) fep_vkb_top_text_pane_t1_ParamLimits

0x4e49,	// (0x00018f81) popup_preview_fixed_window_g3_ParamLimits

0x4e49,	// (0x00018f81) popup_preview_fixed_window_g3

0x9355,	// (0x0001d48d) popup_toolbar_trans_pane

0xb8e0,	// (0x0001fa18) aid_height_set_list_ParamLimits

0x31a7,	// (0x000172df) aid_size_parent_ParamLimits

0x17c2,	// (0x000158fa) list_highlight_pane_cp2_ParamLimits

0x1344,	// (0x0001547c) set_content_pane_g1_ParamLimits

0xbab0,	// (0x0001fbe8) list_single_image_pane_ParamLimits

0xbab0,	// (0x0001fbe8) list_single_image_pane

0xc223,	// (0x0002035b) aid_size_cell_image_ParamLimits

0xc223,	// (0x0002035b) aid_size_cell_image

0xc230,	// (0x00020368) grid_single_image_pane_ParamLimits

0xc230,	// (0x00020368) grid_single_image_pane

0x4e77,	// (0x00018faf) list_single_image_pane_g1_ParamLimits

0x4e77,	// (0x00018faf) list_single_image_pane_g1

0x4e83,	// (0x00018fbb) list_single_image_pane_g2_ParamLimits

0x4e83,	// (0x00018fbb) list_single_image_pane_g2

0x0001,

0xfc37,	// (0x00023d6f) list_single_image_pane_g_ParamLimits

0xfc37,	// (0x00023d6f) list_single_image_pane_g

0x556d,	// (0x000196a5) list_single_image_pane_t1_ParamLimits

0x556d,	// (0x000196a5) list_single_image_pane_t1

0xc23c,	// (0x00020374) cell_image_list_pane_ParamLimits

0xc23c,	// (0x00020374) cell_image_list_pane

0xc250,	// (0x00020388) cell_image_list_pane_g1

0xc259,	// (0x00020391) cell_image_list_pane_g2

0x0001,

0xfc3c,	// (0x00023d74) cell_image_list_pane_g

0xc262,	// (0x0002039a) aid_size_cell_tb_trans_pane

0xc789,	// (0x000208c1) bg_tb_trans_pane

0xc274,	// (0x000203ac) grid_tb_trans_pane

0x1cf9,	// (0x00015e31) bg_tb_trans_pane_g1

0x1d09,	// (0x00015e41) bg_tb_trans_pane_g2

0x1d01,	// (0x00015e39) bg_tb_trans_pane_g3

0x1d19,	// (0x00015e51) bg_tb_trans_pane_g4

0x1d11,	// (0x00015e49) bg_tb_trans_pane_g5

0x1d39,	// (0x00015e71) bg_tb_trans_pane_g6

0x1d31,	// (0x00015e69) bg_tb_trans_pane_g7

0x1d21,	// (0x00015e59) bg_tb_trans_pane_g8

0x1d29,	// (0x00015e61) bg_tb_trans_pane_g9

0x0008,

0xfc41,	// (0x00023d79) bg_tb_trans_pane_g

0xc288,	// (0x000203c0) cell_toolbar_trans_pane_ParamLimits

0xc288,	// (0x000203c0) cell_toolbar_trans_pane

0x47fc,	// (0x00018934) cell_toolbar_trans_pane_g1

0xbd6b,	// (0x0001fea3) list_form2_midp_pane_t1

0xbd79,	// (0x0001feb1) list_form2_midp_pane_t2

0x0001,

0xfade,	// (0x00023c16) list_form2_midp_pane_t

0x4396,	// (0x000184ce) scroll_pane_cp51_ParamLimits

0x459f,	// (0x000186d7) form2_midp_wait_pane_g1

0x45a8,	// (0x000186e0) form2_midp_wait_pane_g2

0x45b1,	// (0x000186e9) form2_midp_wait_pane_g3

0x0002,

0xfaf3,	// (0x00023c2b) form2_midp_wait_pane_g

0xc35f,	// (0x00020497) list_highlight_pane_cp21_ParamLimits

0x45f9,	// (0x00018731) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4608,	// (0x00018740) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x33aa,	// (0x000174e2) list_single_2graphic_im_pane_ParamLimits

0x33aa,	// (0x000174e2) list_single_2graphic_im_pane

0xc2ae,	// (0x000203e6) list_single_2graphic_im_pane_g1_ParamLimits

0xc2ae,	// (0x000203e6) list_single_2graphic_im_pane_g1

0xca6a,	// (0x00020ba2) list_single_2graphic_im_pane_g2_ParamLimits

0xca6a,	// (0x00020ba2) list_single_2graphic_im_pane_g2

0xca76,	// (0x00020bae) list_single_2graphic_im_pane_g3_ParamLimits

0xca76,	// (0x00020bae) list_single_2graphic_im_pane_g3

0x0003,

0xfc54,	// (0x00023d8c) list_single_2graphic_im_pane_g_ParamLimits

0xfc54,	// (0x00023d8c) list_single_2graphic_im_pane_g

0xca8a,	// (0x00020bc2) list_single_2graphic_im_pane_t1_ParamLimits

0xca8a,	// (0x00020bc2) list_single_2graphic_im_pane_t1

0x4e55,	// (0x00018f8d) list_single_graphic_2heading_pane_fp_ParamLimits

0x4e55,	// (0x00018f8d) list_single_graphic_2heading_pane_fp

0x4eba,	// (0x00018ff2) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4eba,	// (0x00018ff2) list_single_graphic_2heading_pane_fp_g1

0x4e6b,	// (0x00018fa3) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4e6b,	// (0x00018fa3) list_single_graphic_2heading_pane_fp_g2

0x4e77,	// (0x00018faf) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4e77,	// (0x00018faf) list_single_graphic_2heading_pane_fp_g3

0x4e83,	// (0x00018fbb) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4e83,	// (0x00018fbb) list_single_graphic_2heading_pane_fp_g4

0x4e97,	// (0x00018fcf) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4e97,	// (0x00018fcf) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x00023cb3) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x00023cb3) list_single_graphic_2heading_pane_fp_g

0x5663,	// (0x0001979b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5663,	// (0x0001979b) list_single_graphic_2heading_pane_fp_t1

0x4ef2,	// (0x0001902a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4ef2,	// (0x0001902a) list_single_graphic_2heading_pane_fp_t2

0x5679,	// (0x000197b1) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5679,	// (0x000197b1) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5d,	// (0x00023d95) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5d,	// (0x00023d95) list_single_graphic_2heading_pane_fp_t

0x4888,	// (0x000189c0) fep_hwr_write_pane_g5_ParamLimits

0x4888,	// (0x000189c0) fep_hwr_write_pane_g5

0x4894,	// (0x000189cc) fep_hwr_write_pane_g6_ParamLimits

0x4894,	// (0x000189cc) fep_hwr_write_pane_g6

0xc126,	// (0x0002025e) eswt_shell_pane_ParamLimits

0x1e19,	// (0x00015f51) bg_popup_window_pane_cp18_ParamLimits

0x30dd,	// (0x00017215) heading_pane_cp70

0x5466,	// (0x0001959e) popup_eswt_tasktip_window_t1_ParamLimits

0xae5b,	// (0x0001ef93) aid_touch_tab_arrow_left

0xae71,	// (0x0001efa9) aid_touch_tab_arrow_right

0x9d46,	// (0x0001de7e) title_pane_g3_ParamLimits

0x9d46,	// (0x0001de7e) title_pane_g3

0xc720,	// (0x00020858) set_value_pane_g1

0x9355,	// (0x0001d48d) popup_toolbar_trans_pane_ParamLimits

0xc262,	// (0x0002039a) aid_size_cell_tb_trans_pane_ParamLimits

0xc789,	// (0x000208c1) bg_tb_trans_pane_ParamLimits

0xc274,	// (0x000203ac) grid_tb_trans_pane_ParamLimits

0xc4a3,	// (0x000205db) cont_note_pane_ParamLimits

0xc4a3,	// (0x000205db) cont_note_pane

0xc61f,	// (0x00020757) cont_snote2_single_text_pane_ParamLimits

0xc61f,	// (0x00020757) cont_snote2_single_text_pane

0xc61f,	// (0x00020757) cont_snote2_single_graphic_pane_ParamLimits

0xc61f,	// (0x00020757) cont_snote2_single_graphic_pane

0x2460,	// (0x00016598) cont_note_wait_pane_ParamLimits

0x2460,	// (0x00016598) cont_note_wait_pane

0x2460,	// (0x00016598) cont_note_image_pane_ParamLimits

0x2460,	// (0x00016598) cont_note_image_pane

0x568f,	// (0x000197c7) popup_note2_window_g1_ParamLimits

0x568f,	// (0x000197c7) popup_note2_window_g1

0xcac8,	// (0x00020c00) popup_note2_window_t1_ParamLimits

0xcac8,	// (0x00020c00) popup_note2_window_t1

0xcb0d,	// (0x00020c45) popup_note2_window_t2_ParamLimits

0xcb0d,	// (0x00020c45) popup_note2_window_t2

0xcb52,	// (0x00020c8a) popup_note2_window_t3_ParamLimits

0xcb52,	// (0x00020c8a) popup_note2_window_t3

0x578f,	// (0x000198c7) popup_note2_window_t4_ParamLimits

0x578f,	// (0x000198c7) popup_note2_window_t4

0xc527,	// (0x0002065f) popup_note2_window_t5_ParamLimits

0xc527,	// (0x0002065f) popup_note2_window_t5

0x0004,

0xfc69,	// (0x00023da1) popup_note2_window_t_ParamLimits

0xfc69,	// (0x00023da1) popup_note2_window_t

0x57be,	// (0x000198f6) popup_note2_image_window_g1_ParamLimits

0x57be,	// (0x000198f6) popup_note2_image_window_g1

0xcb97,	// (0x00020ccf) popup_note2_image_window_g2_ParamLimits

0xcb97,	// (0x00020ccf) popup_note2_image_window_g2

0x0001,

0xfc74,	// (0x00023dac) popup_note2_image_window_g_ParamLimits

0xfc74,	// (0x00023dac) popup_note2_image_window_g

0x57dc,	// (0x00019914) popup_note2_image_window_t1_ParamLimits

0x57dc,	// (0x00019914) popup_note2_image_window_t1

0x57f4,	// (0x0001992c) popup_note2_image_window_t2_ParamLimits

0x57f4,	// (0x0001992c) popup_note2_image_window_t2

0x580c,	// (0x00019944) popup_note2_image_window_t3_ParamLimits

0x580c,	// (0x00019944) popup_note2_image_window_t3

0x0002,

0xfc79,	// (0x00023db1) popup_note2_image_window_t_ParamLimits

0xfc79,	// (0x00023db1) popup_note2_image_window_t

0x246e,	// (0x000165a6) popup_note2_wait_window_g1_ParamLimits

0x246e,	// (0x000165a6) popup_note2_wait_window_g1

0x247a,	// (0x000165b2) popup_note2_wait_window_g2_ParamLimits

0x247a,	// (0x000165b2) popup_note2_wait_window_g2

0x2486,	// (0x000165be) popup_note2_wait_window_g3_ParamLimits

0x2486,	// (0x000165be) popup_note2_wait_window_g3

0x0002,

0xf82d,	// (0x00023965) popup_note2_wait_window_g_ParamLimits

0xf82d,	// (0x00023965) popup_note2_wait_window_g

0x5828,	// (0x00019960) popup_note2_wait_window_t1_ParamLimits

0x5828,	// (0x00019960) popup_note2_wait_window_t1

0x5846,	// (0x0001997e) popup_note2_wait_window_t2_ParamLimits

0x5846,	// (0x0001997e) popup_note2_wait_window_t2

0x5864,	// (0x0001999c) popup_note2_wait_window_t3_ParamLimits

0x5864,	// (0x0001999c) popup_note2_wait_window_t3

0x5876,	// (0x000199ae) popup_note2_wait_window_t4_ParamLimits

0x5876,	// (0x000199ae) popup_note2_wait_window_t4

0x0003,

0xfc80,	// (0x00023db8) popup_note2_wait_window_t_ParamLimits

0xfc80,	// (0x00023db8) popup_note2_wait_window_t

0x5888,	// (0x000199c0) wait_bar2_pane_ParamLimits

0x5888,	// (0x000199c0) wait_bar2_pane

0x58a0,	// (0x000199d8) popup_snote2_single_text_window_g1_ParamLimits

0x58a0,	// (0x000199d8) popup_snote2_single_text_window_g1

0x58c8,	// (0x00019a00) popup_snote2_single_text_window_t1_ParamLimits

0x58c8,	// (0x00019a00) popup_snote2_single_text_window_t1

0x5914,	// (0x00019a4c) popup_snote2_single_text_window_t2_ParamLimits

0x5914,	// (0x00019a4c) popup_snote2_single_text_window_t2

0x5960,	// (0x00019a98) popup_snote2_single_text_window_t3_ParamLimits

0x5960,	// (0x00019a98) popup_snote2_single_text_window_t3

0x59a1,	// (0x00019ad9) popup_snote2_single_text_window_t4_ParamLimits

0x59a1,	// (0x00019ad9) popup_snote2_single_text_window_t4

0x59d7,	// (0x00019b0f) popup_snote2_single_text_window_t5_ParamLimits

0x59d7,	// (0x00019b0f) popup_snote2_single_text_window_t5

0x0004,

0xfc89,	// (0x00023dc1) popup_snote2_single_text_window_t_ParamLimits

0xfc89,	// (0x00023dc1) popup_snote2_single_text_window_t

0xcba9,	// (0x00020ce1) popup_snote2_single_graphic_window_g1_ParamLimits

0xcba9,	// (0x00020ce1) popup_snote2_single_graphic_window_g1

0x5a2a,	// (0x00019b62) popup_snote2_single_graphic_window_g2_ParamLimits

0x5a2a,	// (0x00019b62) popup_snote2_single_graphic_window_g2

0x0001,

0xfc94,	// (0x00023dcc) popup_snote2_single_graphic_window_g_ParamLimits

0xfc94,	// (0x00023dcc) popup_snote2_single_graphic_window_g

0x5a52,	// (0x00019b8a) popup_snote2_single_graphic_window_t1_ParamLimits

0x5a52,	// (0x00019b8a) popup_snote2_single_graphic_window_t1

0x5a9e,	// (0x00019bd6) popup_snote2_single_graphic_window_t2_ParamLimits

0x5a9e,	// (0x00019bd6) popup_snote2_single_graphic_window_t2

0x5960,	// (0x00019a98) popup_snote2_single_graphic_window_t3_ParamLimits

0x5960,	// (0x00019a98) popup_snote2_single_graphic_window_t3

0x59a1,	// (0x00019ad9) popup_snote2_single_graphic_window_t4_ParamLimits

0x59a1,	// (0x00019ad9) popup_snote2_single_graphic_window_t4

0x59d7,	// (0x00019b0f) popup_snote2_single_graphic_window_t5_ParamLimits

0x59d7,	// (0x00019b0f) popup_snote2_single_graphic_window_t5

0x0004,

0xfc99,	// (0x00023dd1) popup_snote2_single_graphic_window_t_ParamLimits

0xfc99,	// (0x00023dd1) popup_snote2_single_graphic_window_t

0x4253,	// (0x0001838b) clock_nsta_pane_cp2_t1

0x4253,	// (0x0001838b) clock_nsta_pane_cp2_t2

0x0001,

0xfab4,	// (0x00023bec) clock_nsta_pane_cp2_t

0xc7a8,	// (0x000208e0) form_field_data_wide_pane_g1_ParamLimits

0xc7b4,	// (0x000208ec) form_field_data_wide_pane_g2_ParamLimits

0xc7b4,	// (0x000208ec) form_field_data_wide_pane_g2

0xc7c0,	// (0x000208f8) form_field_data_wide_pane_g3_ParamLimits

0xc7c0,	// (0x000208f8) form_field_data_wide_pane_g3

0x0002,

0xf66c,	// (0x000237a4) form_field_data_wide_pane_g_ParamLimits

0xf66c,	// (0x000237a4) form_field_data_wide_pane_g

0xbc9c,	// (0x0001fdd4) grid_touch_3_pane_ParamLimits

0xbc9c,	// (0x0001fdd4) grid_touch_3_pane

0xcbd1,	// (0x00020d09) cell_touch_3_pane_ParamLimits

0xcbd1,	// (0x00020d09) cell_touch_3_pane

0x47fc,	// (0x00018934) cell_touch_3_pane_g1

0x47fc,	// (0x00018934) cell_touch_3_pane_g2

0x0001,

0xfb39,	// (0x00023c71) cell_touch_3_pane_g

0xc559,	// (0x00020691) cont_query_data_pane

0xc561,	// (0x00020699) cont_query_data_pane_cp1

0x5b18,	// (0x00019c50) button_value_adjust_pane_cp7

0x5b20,	// (0x00019c58) query_popup_pane_cp3

0xe70a,	// (0x00022842) bg_popup_sub_pane_cp22_ParamLimits

0x8a9a,	// (0x0001cbd2) navi_navi_volume_pane_cp2

0x8aa9,	// (0x0001cbe1) popup_side_volume_key_window_g2

0x8ab8,	// (0x0001cbf0) popup_side_volume_key_window_g3

0x0002,

0xf702,	// (0x0002383a) popup_side_volume_key_window_g

0x8ac7,	// (0x0001cbff) popup_side_volume_key_window_t2

0x0001,

0xf709,	// (0x00023841) popup_side_volume_key_window_t

0xabff,	// (0x0001ed37) popup_side_volume_key_window_ParamLimits

0xa40c,	// (0x0001e544) list_double_graphic_pane_g4_ParamLimits

0xa40c,	// (0x0001e544) list_double_graphic_pane_g4

0xba8b,	// (0x0001fbc3) list_single_2heading_msg_pane_ParamLimits

0xba8b,	// (0x0001fbc3) list_single_2heading_msg_pane

0xcc1a,	// (0x00020d52) list_single_2heading_msg_pane_g1_ParamLimits

0xcc1a,	// (0x00020d52) list_single_2heading_msg_pane_g1

0xcc26,	// (0x00020d5e) list_single_2heading_msg_pane_g2_ParamLimits

0xcc26,	// (0x00020d5e) list_single_2heading_msg_pane_g2

0xcc39,	// (0x00020d71) list_single_2heading_msg_pane_g3_ParamLimits

0xcc39,	// (0x00020d71) list_single_2heading_msg_pane_g3

0xcc45,	// (0x00020d7d) list_single_2heading_msg_pane_g4_ParamLimits

0xcc45,	// (0x00020d7d) list_single_2heading_msg_pane_g4

0x0003,

0xfca4,	// (0x00023ddc) list_single_2heading_msg_pane_g_ParamLimits

0xfca4,	// (0x00023ddc) list_single_2heading_msg_pane_g

0xcc5d,	// (0x00020d95) list_single_2heading_msg_pane_t1_ParamLimits

0xcc5d,	// (0x00020d95) list_single_2heading_msg_pane_t1

0xcc85,	// (0x00020dbd) list_single_2heading_msg_pane_t2_ParamLimits

0xcc85,	// (0x00020dbd) list_single_2heading_msg_pane_t2

0xccf0,	// (0x00020e28) list_single_2heading_msg_pane_t3_ParamLimits

0xccf0,	// (0x00020e28) list_single_2heading_msg_pane_t3

0x5c0f,	// (0x00019d47) list_single_2heading_msg_pane_t4_ParamLimits

0x5c0f,	// (0x00019d47) list_single_2heading_msg_pane_t4

0x0003,

0xfcad,	// (0x00023de5) list_single_2heading_msg_pane_t_ParamLimits

0xfcad,	// (0x00023de5) list_single_2heading_msg_pane_t

0xc30d,	// (0x00020445) title_pane_g4_ParamLimits

0xc30d,	// (0x00020445) title_pane_g4

0xe32a,	// (0x00022462) title_pane_stacon_g3_ParamLimits

0xe32a,	// (0x00022462) title_pane_stacon_g3

0x5626,	// (0x0001975e) list_single_2graphic_im_pane_g4_ParamLimits

0x5626,	// (0x0001975e) list_single_2graphic_im_pane_g4

0xb77b,	// (0x0001f8b3) popup_side_volume_key_window_cp

0x3796,	// (0x000178ce) main_idle_act2_pane_t1

0xea81,	// (0x00022bb9) toolbar_button_pane_g10

0xa299,	// (0x0001e3d1) popup_toolbar_window_cp1

0x4244,	// (0x0001837c) clock_nsta_pane_cp_t1

0x4244,	// (0x0001837c) clock_nsta_pane_cp_t2

0x0001,

0xfaaf,	// (0x00023be7) clock_nsta_pane_cp_t

0x8a9a,	// (0x0001cbd2) navi_navi_volume_pane_cp2_ParamLimits

0xe720,	// (0x00022858) popup_side_volume_key_window_g1_ParamLimits

0x8aa9,	// (0x0001cbe1) popup_side_volume_key_window_g2_ParamLimits

0x8ab8,	// (0x0001cbf0) popup_side_volume_key_window_g3_ParamLimits

0xf702,	// (0x0002383a) popup_side_volume_key_window_g_ParamLimits

0xed65,	// (0x00022e9d) fep_hwr_aid_pane

0xee0c,	// (0x00022f44) bg_fep_hwr_top_pane_g4_ParamLimits

0x4858,	// (0x00018990) fep_hwr_top_pane_g1_ParamLimits

0x486a,	// (0x000189a2) fep_hwr_top_pane_g2_ParamLimits

0xee2c,	// (0x00022f64) fep_hwr_top_pane_g3_ParamLimits

0xfb04,	// (0x00023c3c) fep_hwr_top_pane_g_ParamLimits

0xee41,	// (0x00022f79) fep_hwr_top_text_pane_ParamLimits

0x2c6a,	// (0x00016da2) aid_touch_tab_arrow_arrow_2

0x2c73,	// (0x00016dab) aid_touch_tab_arrow_left_2

0xed79,	// (0x00022eb1) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xedb0,	// (0x00022ee8) fep_hwr_prediction_pane

0x49c3,	// (0x00018afb) fep_vkb_prediction_pane

0xc033,	// (0x0002016b) fep_vkb_side_pane_g3_ParamLimits

0xc033,	// (0x0002016b) fep_vkb_side_pane_g3

0xef45,	// (0x0002307d) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xefb1,	// (0x000230e9) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xefbe,	// (0x000230f6) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb3,	// (0x00023ceb) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xf082,	// (0x000231ba) fep_hwr_prediction_pane_g1

0xf08c,	// (0x000231c4) fep_hwr_prediction_pane_g2

0xf094,	// (0x000231cc) fep_hwr_prediction_pane_g3

0xf09c,	// (0x000231d4) fep_hwr_prediction_pane_g4

0x0003,

0xfcb6,	// (0x00023dee) fep_hwr_prediction_pane_g

0x5c34,	// (0x00019d6c) fep_vkb_prediction_pane_g1

0x5c5f,	// (0x00019d97) fep_vkb_prediction_pane_g2

0x5c67,	// (0x00019d9f) fep_vkb_prediction_pane_g3

0x5c6f,	// (0x00019da7) fep_vkb_prediction_pane_g4

0x0003,

0xfcbf,	// (0x00023df7) fep_vkb_prediction_pane_g

0x952b,	// (0x0001d663) slider_set_pane_g3

0x953f,	// (0x0001d677) slider_set_pane_g4

0x9557,	// (0x0001d68f) slider_set_pane_g5

0x952b,	// (0x0001d663) slider_set_pane_g6

0x956d,	// (0x0001d6a5) slider_set_pane_g7

0x3308,	// (0x00017440) slider_form_pane_g3

0x3311,	// (0x00017449) slider_form_pane_g4

0x3319,	// (0x00017451) slider_form_pane_g5

0x3308,	// (0x00017440) slider_form_pane_g6

0xba2b,	// (0x0001fb63) slider_form_pane_g7

0x3a79,	// (0x00017bb1) slider_set_pane_vc_g3

0x3a82,	// (0x00017bba) slider_set_pane_vc_g4

0x3a8b,	// (0x00017bc3) slider_set_pane_vc_g5

0x3a79,	// (0x00017bb1) slider_set_pane_vc_g6

0x3a94,	// (0x00017bcc) slider_set_pane_vc_g7

0x3f29,	// (0x00018061) slider_form_pane_vc_g1

0x3f32,	// (0x0001806a) slider_form_pane_vc_g2

0x3f3b,	// (0x00018073) slider_form_pane_vc_g3

0x3f29,	// (0x00018061) slider_form_pane_vc_g4

0x3f44,	// (0x0001807c) slider_form_pane_vc_g5

0x0004,

0xfa81,	// (0x00023bb9) slider_form_pane_vc_g

0xe1b2,	// (0x000222ea) main_idle_act3_pane

0x5c77,	// (0x00019daf) ai3_links_pane

0xcd5e,	// (0x00020e96) popup_ai3_data_window_ParamLimits

0xcd5e,	// (0x00020e96) popup_ai3_data_window

0xc2ef,	// (0x00020427) grid_ai3_links_pane

0xcd76,	// (0x00020eae) cell_ai3_links_pane_ParamLimits

0xcd76,	// (0x00020eae) cell_ai3_links_pane

0x5cb0,	// (0x00019de8) bg_popup_sub_pane_cp11

0x5cbd,	// (0x00019df5) cell_ai3_links_pane_g1

0xc2ef,	// (0x00020427) bg_popup_sub_pane_cp12

0x5ce2,	// (0x00019e1a) heading_ai3_data_pane

0x5cea,	// (0x00019e22) list_ai3_gene_pane

0x5cf6,	// (0x00019e2e) popup_ai3_data_window_g1

0x5cfe,	// (0x00019e36) heading_ai3_data_pane_g1

0x5d06,	// (0x00019e3e) heading_ai3_data_pane_t1

0xcd90,	// (0x00020ec8) list_double_ai3_gene_pane_ParamLimits

0xcd90,	// (0x00020ec8) list_double_ai3_gene_pane

0x5d21,	// (0x00019e59) list_single_ai3_gene_pane_ParamLimits

0x5d21,	// (0x00019e59) list_single_ai3_gene_pane

0x47c1,	// (0x000188f9) list_highlight_pane_cp7_ParamLimits

0x47c1,	// (0x000188f9) list_highlight_pane_cp7

0x5d2e,	// (0x00019e66) list_single_a13_gene_pane_t1_ParamLimits

0x5d2e,	// (0x00019e66) list_single_a13_gene_pane_t1

0x5d45,	// (0x00019e7d) list_single_ai3_gene_pane_g1

0x5d4e,	// (0x00019e86) list_single_ai3_gene_pane_g2

0x0001,

0xfcc8,	// (0x00023e00) list_single_ai3_gene_pane_g

0x5d56,	// (0x00019e8e) list_double_ai3_gene_pane_g1_ParamLimits

0x5d56,	// (0x00019e8e) list_double_ai3_gene_pane_g1

0xcd9d,	// (0x00020ed5) list_double_ai3_gene_pane_t1_ParamLimits

0xcd9d,	// (0x00020ed5) list_double_ai3_gene_pane_t1

0x5d7e,	// (0x00019eb6) list_double_ai3_gene_pane_t2_ParamLimits

0x5d7e,	// (0x00019eb6) list_double_ai3_gene_pane_t2

0x5d93,	// (0x00019ecb) list_double_ai3_gene_pane_t3_ParamLimits

0x5d93,	// (0x00019ecb) list_double_ai3_gene_pane_t3

0x0002,

0xfccd,	// (0x00023e05) list_double_ai3_gene_pane_t_ParamLimits

0xfccd,	// (0x00023e05) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5b31,	// (0x00019c69) aid_size_min_col_2

0xcc04,	// (0x00020d3c) aid_size_min_msg_ParamLimits

0xcc04,	// (0x00020d3c) aid_size_min_msg

0xc047,	// (0x0002017f) fep_vkb_top_text_pane_g2_ParamLimits

0xc047,	// (0x0002017f) fep_vkb_top_text_pane_g2

0x0001,

0xfb34,	// (0x00023c6c) fep_vkb_top_text_pane_g_ParamLimits

0xfb34,	// (0x00023c6c) fep_vkb_top_text_pane_g

0xe1b2,	// (0x000222ea) main_hc_apps_shell_pane

0x5db0,	// (0x00019ee8) grid_hc_apps_pane_ParamLimits

0x5db0,	// (0x00019ee8) grid_hc_apps_pane

0x5dbf,	// (0x00019ef7) list_hc_apps_pane

0x5dc7,	// (0x00019eff) scroll_pane_cp37_ParamLimits

0x5dc7,	// (0x00019eff) scroll_pane_cp37

0xcdb9,	// (0x00020ef1) cell_hc_apps_pane_ParamLimits

0xcdb9,	// (0x00020ef1) cell_hc_apps_pane

0xce77,	// (0x00020faf) cell_hc_apps_pane_g1_ParamLimits

0xce77,	// (0x00020faf) cell_hc_apps_pane_g1

0x5eb2,	// (0x00019fea) cell_hc_apps_pane_g2_ParamLimits

0x5eb2,	// (0x00019fea) cell_hc_apps_pane_g2

0x5ece,	// (0x0001a006) cell_hc_apps_pane_g3_ParamLimits

0x5ece,	// (0x0001a006) cell_hc_apps_pane_g3

0x0002,

0xfcd4,	// (0x00023e0c) cell_hc_apps_pane_g_ParamLimits

0xfcd4,	// (0x00023e0c) cell_hc_apps_pane_g

0xcea4,	// (0x00020fdc) cell_hc_apps_pane_t1_ParamLimits

0xcea4,	// (0x00020fdc) cell_hc_apps_pane_t1

0xc4a3,	// (0x000205db) grid_highlight_pane_cp10_ParamLimits

0xc4a3,	// (0x000205db) grid_highlight_pane_cp10

0xcee2,	// (0x0002101a) list_single_hc_apps_pane_ParamLimits

0xcee2,	// (0x0002101a) list_single_hc_apps_pane

0xcf12,	// (0x0002104a) list_single_hc_apps_pane_g1

0xcf2b,	// (0x00021063) list_single_hc_apps_pane_g2

0x0001,

0xfcdb,	// (0x00023e13) list_single_hc_apps_pane_g

0xcf44,	// (0x0002107c) list_single_hc_apps_pane_g2_copy1

0xcf60,	// (0x00021098) list_single_hc_apps_pane_t1

0xc35f,	// (0x00020497) bg_set_opt_pane_cp_ParamLimits

0x89f4,	// (0x0001cb2c) setting_slider_pane_t1_ParamLimits

0x8a0d,	// (0x0001cb45) setting_slider_pane_t2_ParamLimits

0x8a27,	// (0x0001cb5f) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00023696) setting_slider_pane_t_ParamLimits

0x8a3f,	// (0x0001cb77) slider_set_pane_ParamLimits

0xe964,	// (0x00022a9c) control_pane_g5_ParamLimits

0xe964,	// (0x00022a9c) control_pane_g5

0xb8ad,	// (0x0001f9e5) slider_set_pane_g1_ParamLimits

0xec53,	// (0x00022d8b) slider_set_pane_g2_ParamLimits

0x952b,	// (0x0001d663) slider_set_pane_g3_ParamLimits

0x953f,	// (0x0001d677) slider_set_pane_g4_ParamLimits

0x9557,	// (0x0001d68f) slider_set_pane_g5_ParamLimits

0x952b,	// (0x0001d663) slider_set_pane_g6_ParamLimits

0x956d,	// (0x0001d6a5) slider_set_pane_g7_ParamLimits

0xf949,	// (0x00023a81) slider_set_pane_g_ParamLimits

0x12ef,	// (0x00015427) navi_icon_text_pane_ParamLimits

0xae24,	// (0x0001ef5c) aid_fill_nsta_2_ParamLimits

0xae5b,	// (0x0001ef93) aid_touch_tab_arrow_left_ParamLimits

0xae71,	// (0x0001efa9) aid_touch_tab_arrow_right_ParamLimits

0xaf0c,	// (0x0001f044) clock_nsta_pane_ParamLimits

0x2c4c,	// (0x00016d84) navi_icon_pane_g1_ParamLimits

0x2c58,	// (0x00016d90) navi_text_pane_t1_ParamLimits

0x4354,	// (0x0001848c) navi_icon_text_pane_g1_ParamLimits

0x4360,	// (0x00018498) navi_icon_text_pane_t1_ParamLimits

0xcf12,	// (0x0002104a) list_single_hc_apps_pane_g1_ParamLimits

0xcf2b,	// (0x00021063) list_single_hc_apps_pane_g2_ParamLimits

0xfcdb,	// (0x00023e13) list_single_hc_apps_pane_g_ParamLimits

0xcf44,	// (0x0002107c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcf60,	// (0x00021098) list_single_hc_apps_pane_t1_ParamLimits

0x891c,	// (0x0001ca54) popup_toolbar2_fixed_window_ParamLimits

0x891c,	// (0x0001ca54) popup_toolbar2_fixed_window

0x934b,	// (0x0001d483) popup_toolbar2_float_window

0xc2ef,	// (0x00020427) bg_popup_sub_pane_cp27

0x600f,	// (0x0001a147) grid_toolbar2_float_pane

0xc2ef,	// (0x00020427) bg_popup_sub_pane_cp26

0x600f,	// (0x0001a147) grid_toolbar2_fixed_pane

0xcf8e,	// (0x000210c6) cell_toolbar2_fixed_pane_ParamLimits

0xcf8e,	// (0x000210c6) cell_toolbar2_fixed_pane

0xcfa8,	// (0x000210e0) cell_toolbar2_fixed_pane_g1

0x1c57,	// (0x00015d8f) toolbar2_fixed_button_pane

0x1cf9,	// (0x00015e31) toolbar2_fixed_button_pane_g1

0x1d09,	// (0x00015e41) toolbar2_fixed_button_pane_g2

0x1d01,	// (0x00015e39) toolbar2_fixed_button_pane_g3

0x1d19,	// (0x00015e51) toolbar2_fixed_button_pane_g4

0x1d11,	// (0x00015e49) toolbar2_fixed_button_pane_g5

0x1d21,	// (0x00015e59) toolbar2_fixed_button_pane_g6

0x1d29,	// (0x00015e61) toolbar2_fixed_button_pane_g7

0x1d39,	// (0x00015e71) toolbar2_fixed_button_pane_g8

0x1d31,	// (0x00015e69) toolbar2_fixed_button_pane_g9

0x0008,

0xf84b,	// (0x00023983) toolbar2_fixed_button_pane_g

0x6030,	// (0x0001a168) cell_toolbar2_float_pane_ParamLimits

0x6030,	// (0x0001a168) cell_toolbar2_float_pane

0x6041,	// (0x0001a179) cell_toolbar2_float_pane_g1

0x1c57,	// (0x00015d8f) toolbar2_fixed_button_pane_cp

0xbf2f,	// (0x00020067) fep_vkb_accented_list_pane_ParamLimits

0xbf2f,	// (0x00020067) fep_vkb_accented_list_pane

0xef25,	// (0x0002305d) bg_popup_fep_shadow_pane_g9

0x146f,	// (0x000155a7) bg_popup_fep_shadow_pane_cp3

0xc8fd,	// (0x00020a35) list_accented_list_pane

0x604a,	// (0x0001a182) list_single_accented_list_pane_ParamLimits

0x604a,	// (0x0001a182) list_single_accented_list_pane

0x146f,	// (0x000155a7) list_highlight_pane_cp10

0x605b,	// (0x0001a193) list_single_accented_list_pane_t1

0x9275,	// (0x0001d3ad) popup_slider_window_ParamLimits

0x9275,	// (0x0001d3ad) popup_slider_window

0x5b28,	// (0x00019c60) aid_indentation_list_msg

0xd09d,	// (0x000211d5) bg_popup_window_pane_cp19

0x617b,	// (0x0001a2b3) popup_slider_window_g1

0x6197,	// (0x0001a2cf) popup_slider_window_g2

0x61b3,	// (0x0001a2eb) popup_slider_window_g3

0x0005,

0xfce0,	// (0x00023e18) popup_slider_window_g

0x620f,	// (0x0001a347) popup_slider_window_t1

0x6283,	// (0x0001a3bb) small_volume_slider_vertical_pane

0x47fc,	// (0x00018934) small_volume_slider_vertical_pane_g1

0x47fc,	// (0x00018934) small_volume_slider_vertical_pane_g2

0x629f,	// (0x0001a3d7) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf2,	// (0x00023e2a) small_volume_slider_vertical_pane_g

0x886a,	// (0x0001c9a2) area_side_right_pane_ParamLimits

0x886a,	// (0x0001c9a2) area_side_right_pane

0x9697,	// (0x0001d7cf) aid_size_side_button_ParamLimits

0x9697,	// (0x0001d7cf) aid_size_side_button

0x96b0,	// (0x0001d7e8) grid_sctrl_middle_pane_ParamLimits

0x96b0,	// (0x0001d7e8) grid_sctrl_middle_pane

0xf0ad,	// (0x000231e5) sctrl_sk_bottom_pane

0xf0be,	// (0x000231f6) sctrl_sk_top_pane

0xf0d0,	// (0x00023208) aid_touch_sctrl_top

0xf0dd,	// (0x00023215) bg_sctrl_sk_pane_ParamLimits

0xf0dd,	// (0x00023215) bg_sctrl_sk_pane

0xf0eb,	// (0x00023223) sctrl_sk_top_pane_g1

0xf0f8,	// (0x00023230) sctrl_sk_top_pane_t1

0xf0d0,	// (0x00023208) aid_touch_sctrl_bottom

0xf0dd,	// (0x00023215) bg_sctrl_sk_pane_cp_ParamLimits

0xf0dd,	// (0x00023215) bg_sctrl_sk_pane_cp

0xf113,	// (0x0002324b) sctrl_sk_bottom_pane_g1

0xf0f8,	// (0x00023230) sctrl_sk_bottom_pane_t1

0x96ca,	// (0x0001d802) cell_sctrl_middle_pane_ParamLimits

0x96ca,	// (0x0001d802) cell_sctrl_middle_pane

0x96db,	// (0x0001d813) aid_touch_sctrl_middle_ParamLimits

0x96db,	// (0x0001d813) aid_touch_sctrl_middle

0x96e8,	// (0x0001d820) bg_sctrl_middle_pane_ParamLimits

0x96e8,	// (0x0001d820) bg_sctrl_middle_pane

0xf3c7,	// (0x000234ff) cell_sctrl_middle_pane_g1_ParamLimits

0xf3c7,	// (0x000234ff) cell_sctrl_middle_pane_g1

0x96f6,	// (0x0001d82e) cell_sctrl_middle_pane_g2_ParamLimits

0x96f6,	// (0x0001d82e) cell_sctrl_middle_pane_g2

0x0001,

0xfcfe,	// (0x00023e36) cell_sctrl_middle_pane_g_ParamLimits

0xfcfe,	// (0x00023e36) cell_sctrl_middle_pane_g

0x1cf9,	// (0x00015e31) bg_sctrl_middle_pane_g1

0x1d01,	// (0x00015e39) bg_sctrl_middle_pane_g2

0x1d09,	// (0x00015e41) bg_sctrl_middle_pane_g3

0x1d11,	// (0x00015e49) bg_sctrl_middle_pane_g4

0x1d19,	// (0x00015e51) bg_sctrl_middle_pane_g5

0x1d21,	// (0x00015e59) bg_sctrl_middle_pane_g6

0x1d29,	// (0x00015e61) bg_sctrl_middle_pane_g7

0x1d31,	// (0x00015e69) bg_sctrl_middle_pane_g8

0x0007,

0xfd03,	// (0x00023e3b) bg_sctrl_middle_pane_g

0x1d39,	// (0x00015e71) bg_sctrl_middle_pane_g8_copy1

0x1cf9,	// (0x00015e31) bg_sctrl_sk_pane_g1

0x1d09,	// (0x00015e41) bg_sctrl_sk_pane_g2

0x1d01,	// (0x00015e39) bg_sctrl_sk_pane_g3

0x0008,

0xf84b,	// (0x00023983) bg_sctrl_sk_pane_g

0xc66d,	// (0x000207a5) aid_size_touch_scroll_bar

0x1d19,	// (0x00015e51) bg_sctrl_sk_pane_g4

0x1d11,	// (0x00015e49) bg_sctrl_sk_pane_g5

0x1d21,	// (0x00015e59) bg_sctrl_sk_pane_g6

0x1d29,	// (0x00015e61) bg_sctrl_sk_pane_g7

0x1d39,	// (0x00015e71) bg_sctrl_sk_pane_g8

0x1d31,	// (0x00015e69) bg_sctrl_sk_pane_g9

0xe9a1,	// (0x00022ad9) popup_fep_china_hwr2_fs_candidate_window

0x8d15,	// (0x0001ce4d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8d15,	// (0x0001ce4d) popup_fep_china_hwr2_fs_control_window

0xef45,	// (0x0002307d) sctrl_sk_top_pane_g2

0x0001,

0xfcf9,	// (0x00023e31) sctrl_sk_top_pane_g

0xd155,	// (0x0002128d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd155,	// (0x0002128d) aid_fep_china_hwr2_fs_cell

0xd169,	// (0x000212a1) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd169,	// (0x000212a1) bg_popup_fep_shadow_pane_cp4

0xd180,	// (0x000212b8) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd180,	// (0x000212b8) bg_popup_fep_shadow_pane_cp5

0xd192,	// (0x000212ca) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd192,	// (0x000212ca) popup_fep_china_hwr2_fs_control_bar_grid

0xe9d1,	// (0x00022b09) popup_fep_china_hwr2_fs_control_funtion_grid

0x62fb,	// (0x0001a433) aid_fep_china_hwr2_fs_candi_cell

0xc2ef,	// (0x00020427) bg_popup_fep_shadow_pane_cp6

0x6305,	// (0x0001a43d) popup_fep_china_hwr2_fs_candidate_grid

0xd1a6,	// (0x000212de) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd1a6,	// (0x000212de) cell_fep_china_hwr2_fs_funtion_grid

0x47fc,	// (0x00018934) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6327,	// (0x0001a45f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6327,	// (0x0001a45f) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6335,	// (0x0001a46d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6335,	// (0x0001a46d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd14,	// (0x00023e4c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd14,	// (0x00023e4c) cell_fep_china_hwr2_fs_funtion_grid_g

0xd1be,	// (0x000212f6) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd1be,	// (0x000212f6) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd1d3,	// (0x0002130b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd1d3,	// (0x0002130b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd19,	// (0x00023e51) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd19,	// (0x00023e51) cell_fep_china_hwr2_fs_funtion_grid_t

0x637c,	// (0x0001a4b4) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6384,	// (0x0001a4bc) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x638c,	// (0x0001a4c4) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1e,	// (0x00023e56) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6394,	// (0x0001a4cc) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6394,	// (0x0001a4cc) cell_fep_china_hwr2_fs_candidate_grid

0x63ad,	// (0x0001a4e5) popup_fep_china_hwr2_fs_candidate_grid_g20

0x63b5,	// (0x0001a4ed) popup_fep_china_hwr2_fs_candidate_grid_g21

0x47fc,	// (0x00018934) cell_fep_china_hwr2_fs_candidate_grid_g1

0x47fc,	// (0x00018934) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb39,	// (0x00023c71) cell_fep_china_hwr2_fs_candidate_grid_g

0x63bd,	// (0x0001a4f5) cell_fep_china_hwr2_fs_candidate_grid_t1

0x18d0,	// (0x00015a08) clock_nsta_pane_cp_24_ParamLimits

0x18d0,	// (0x00015a08) clock_nsta_pane_cp_24

0x194e,	// (0x00015a86) indicator_nsta_pane_cp_24_ParamLimits

0x194e,	// (0x00015a86) indicator_nsta_pane_cp_24

0x2ac8,	// (0x00016c00) heading_pane_g1

0x0001,

0xf8b0,	// (0x000239e8) heading_pane_g

0x35df,	// (0x00017717) grid_sct_catagory_button_pane

0x360f,	// (0x00017747) scroll_pane_cp5_ParamLimits

0x43a2,	// (0x000184da) button_value_adjust_pane_cp5_ParamLimits

0x43a2,	// (0x000184da) button_value_adjust_pane_cp5

0x449c,	// (0x000185d4) form2_midp_time_pane_ParamLimits

0x63cb,	// (0x0001a503) cell_sct_catagory_button_pane_ParamLimits

0x63cb,	// (0x0001a503) cell_sct_catagory_button_pane

0x47c1,	// (0x000188f9) bg_button_pane_cp01_ParamLimits

0x47c1,	// (0x000188f9) bg_button_pane_cp01

0x47fc,	// (0x00018934) cell_sct_catagory_button_pane_g1

0x92ee,	// (0x0001d426) popup_tb_extension_window

0xd1ef,	// (0x00021327) aid_size_cell_ext_ParamLimits

0xd1ef,	// (0x00021327) aid_size_cell_ext

0xc61f,	// (0x00020757) bg_tb_trans_pane_cp1_ParamLimits

0xc61f,	// (0x00020757) bg_tb_trans_pane_cp1

0xd215,	// (0x0002134d) grid_tb_ext_pane_ParamLimits

0xd215,	// (0x0002134d) grid_tb_ext_pane

0xd254,	// (0x0002138c) cell_tb_ext_pane_ParamLimits

0xd254,	// (0x0002138c) cell_tb_ext_pane

0xd27c,	// (0x000213b4) cell_tb_ext_pane_g1_ParamLimits

0xd27c,	// (0x000213b4) cell_tb_ext_pane_g1

0x6461,	// (0x0001a599) cell_tb_ext_pane_t1

0xc4a3,	// (0x000205db) list_highlight_pane_cp11_ParamLimits

0xc4a3,	// (0x000205db) list_highlight_pane_cp11

0x8931,	// (0x0001ca69) popup_uni_indicator_window_ParamLimits

0x8931,	// (0x0001ca69) popup_uni_indicator_window

0xc789,	// (0x000208c1) bg_popup_sub_pane_cp14

0xd299,	// (0x000213d1) list_uniindi_pane

0xd2a5,	// (0x000213dd) uniindi_top_pane

0xc4a3,	// (0x000205db) bg_uniindi_top_pane

0xd2c4,	// (0x000213fc) uniindi_top_pane_g1

0xd2da,	// (0x00021412) uniindi_top_pane_g2

0x0003,

0xfd25,	// (0x00023e5d) uniindi_top_pane_g

0xd2f7,	// (0x0002142f) uniindi_top_pane_t1

0x6512,	// (0x0001a64a) list_single_uniindi_pane_ParamLimits

0x6512,	// (0x0001a64a) list_single_uniindi_pane

0x47fc,	// (0x00018934) bg_uniindi_top_pane_g1

0x6524,	// (0x0001a65c) list_single_uniindi_pane_g1

0x6537,	// (0x0001a66f) list_single_uniindi_pane_t1

0xe1b2,	// (0x000222ea) control_bg_pane

0x655c,	// (0x0001a694) bg_sctrl_sk_pane_cp1

0x6565,	// (0x0001a69d) bg_sctrl_sk_pane_cp2

0x656e,	// (0x0001a6a6) control_bg_pane_g1

0x6577,	// (0x0001a6af) control_bg_pane_g2

0x0001,

0xfd2e,	// (0x00023e66) control_bg_pane_g

0x41f9,	// (0x00018331) cell_indicator_nsta_pane_g1_ParamLimits

0xbcc9,	// (0x0001fe01) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9d,	// (0x00023bd5) cell_indicator_nsta_pane_g_ParamLimits

0x4524,	// (0x0001865c) form2_midp_time_pane_t1_ParamLimits

0xe9d9,	// (0x00022b11) main_idle_act4_pane_ParamLimits

0xe9d9,	// (0x00022b11) main_idle_act4_pane

0x92ee,	// (0x0001d426) popup_tb_extension_window_ParamLimits

0xd23a,	// (0x00021372) tb_ext_find_pane_ParamLimits

0xd23a,	// (0x00021372) tb_ext_find_pane

0x6580,	// (0x0001a6b8) ai_gene_pane_1_cp1

0x15ba,	// (0x000156f2) ai_gene_pane_2_cp1

0xd321,	// (0x00021459) list_single_idle_plugin_calendar_pane

0x6591,	// (0x0001a6c9) list_single_idle_plugin_notification_pane

0x659a,	// (0x0001a6d2) list_single_idle_plugin_player_pane

0xd32a,	// (0x00021462) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd32a,	// (0x00021462) list_single_idle_plugin_shortcut_pane

0xd352,	// (0x0002148a) main_idle_act4_pane_t1

0xd369,	// (0x000214a1) main_idle_act4_pane_t2

0x0001,

0xfd33,	// (0x00023e6b) main_idle_act4_pane_t

0xd380,	// (0x000214b8) middle_sk_idle_act4_pane_ParamLimits

0xd380,	// (0x000214b8) middle_sk_idle_act4_pane

0xd39c,	// (0x000214d4) popup_clock_digital_analogue_window_cp2

0xd3c8,	// (0x00021500) shortcut_wheel_idle_act4_pane_ParamLimits

0xd3c8,	// (0x00021500) shortcut_wheel_idle_act4_pane

0x47fc,	// (0x00018934) shortcut_wheel_idle_act4_pane_g1

0x47fc,	// (0x00018934) shortcut_wheel_idle_act4_pane_g2

0x47fc,	// (0x00018934) shortcut_wheel_idle_act4_pane_g3

0x47fc,	// (0x00018934) shortcut_wheel_idle_act4_pane_g4

0x47fc,	// (0x00018934) shortcut_wheel_idle_act4_pane_g5

0x662d,	// (0x0001a765) shortcut_wheel_idle_act4_pane_g6

0x6635,	// (0x0001a76d) shortcut_wheel_idle_act4_pane_g7

0x663d,	// (0x0001a775) shortcut_wheel_idle_act4_pane_g8

0x6645,	// (0x0001a77d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd38,	// (0x00023e70) shortcut_wheel_idle_act4_pane_g

0xc2bf,	// (0x000203f7) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2bf,	// (0x000203f7) middle_sk_idle_act4_pane_g1

0xd445,	// (0x0002157d) middle_sk_idle_act4_pane_g2_ParamLimits

0xd445,	// (0x0002157d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5b,	// (0x00023e93) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5b,	// (0x00023e93) middle_sk_idle_act4_pane_g

0xd45d,	// (0x00021595) middle_sk_idle_act4_pane_t1_ParamLimits

0xd45d,	// (0x00021595) middle_sk_idle_act4_pane_t1

0xd48c,	// (0x000215c4) grid_ai_shortcut_pane_ParamLimits

0xd48c,	// (0x000215c4) grid_ai_shortcut_pane

0xd4a9,	// (0x000215e1) list_highlight_pane_cp16_ParamLimits

0xd4a9,	// (0x000215e1) list_highlight_pane_cp16

0xd4b6,	// (0x000215ee) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd4b6,	// (0x000215ee) list_single_idle_plugin_shortcut_pane_g1

0xd4c2,	// (0x000215fa) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd4c2,	// (0x000215fa) list_single_idle_plugin_shortcut_pane_g2

0xd4de,	// (0x00021616) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd4de,	// (0x00021616) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd60,	// (0x00023e98) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd60,	// (0x00023e98) list_single_idle_plugin_shortcut_pane_g

0xd4f3,	// (0x0002162b) cell_ai_shortcut_pane_ParamLimits

0xd4f3,	// (0x0002162b) cell_ai_shortcut_pane

0xd509,	// (0x00021641) cell_ai_shortcut_pane_g1_ParamLimits

0xd509,	// (0x00021641) cell_ai_shortcut_pane_g1

0x6580,	// (0x0001a6b8) ai_gene_pane_1_cp2

0x6775,	// (0x0001a8ad) ai_gene_pane_2_cp2

0x677d,	// (0x0001a8b5) list_highlight_pane_cp15

0xd52b,	// (0x00021663) list_single_idle_plugin_calendar_pane_g1

0x677d,	// (0x0001a8b5) list_highlight_pane_cp17

0x678e,	// (0x0001a8c6) list_single_idle_plugin_calendar_pane_g1_copy1

0x6796,	// (0x0001a8ce) list_single_idle_plugin_player_pane_g1

0x3838,	// (0x00017970) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd67,	// (0x00023e9f) list_single_idle_plugin_player_pane_g

0x679e,	// (0x0001a8d6) list_single_idle_plugin_player_pane_t1

0x67ac,	// (0x0001a8e4) list_single_idle_plugin_player_pane_t2

0x67ba,	// (0x0001a8f2) list_single_idle_plugin_player_pane_t3

0x67c8,	// (0x0001a900) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6c,	// (0x00023ea4) list_single_idle_plugin_player_pane_t

0x67d6,	// (0x0001a90e) wait_bar_pane_cp15

0x67de,	// (0x0001a916) grid_ai_notification_pane

0x3838,	// (0x00017970) list_single_idle_plugin_notification_pane_g1

0xd533,	// (0x0002166b) cell_ai_notification_pane_ParamLimits

0xd533,	// (0x0002166b) cell_ai_notification_pane

0x67f4,	// (0x0001a92c) cell_ai_notification_pane_g1

0x67fc,	// (0x0001a934) cell_ai_notification_pane_t1

0xd540,	// (0x00021678) tb_ext_find_button_pane

0xd548,	// (0x00021680) tb_ext_find_pane_g1

0xd550,	// (0x00021688) tb_ext_find_pane_t1

0xe62f,	// (0x00022767) tb_ext_find_button_pane_g1

0xd55e,	// (0x00021696) tb_ext_find_button_pane_g2

0x0001,

0xfd75,	// (0x00023ead) tb_ext_find_button_pane_g

0xd352,	// (0x0002148a) main_idle_act4_pane_t1_ParamLimits

0xd369,	// (0x000214a1) main_idle_act4_pane_t2_ParamLimits

0xfd33,	// (0x00023e6b) main_idle_act4_pane_t_ParamLimits

0xd39c,	// (0x000214d4) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd3b4,	// (0x000214ec) sat_plugin_idle_act4_pane_ParamLimits

0xd3b4,	// (0x000214ec) sat_plugin_idle_act4_pane

0xd567,	// (0x0002169f) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd567,	// (0x0002169f) sat_plugin_idle_act4_pane_t1

0xd57f,	// (0x000216b7) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd57f,	// (0x000216b7) sat_plugin_idle_act4_pane_t2

0xd597,	// (0x000216cf) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd597,	// (0x000216cf) sat_plugin_idle_act4_pane_t3

0xd5af,	// (0x000216e7) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd5af,	// (0x000216e7) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7a,	// (0x00023eb2) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7a,	// (0x00023eb2) sat_plugin_idle_act4_pane_t

0x88ac,	// (0x0001c9e4) popup_battery_window_ParamLimits

0x88ac,	// (0x0001c9e4) popup_battery_window

0xc4a3,	// (0x000205db) bg_popup_sub_pane_cp25_ParamLimits

0xc4a3,	// (0x000205db) bg_popup_sub_pane_cp25

0x687d,	// (0x0001a9b5) popup_battery_window_g1_ParamLimits

0x687d,	// (0x0001a9b5) popup_battery_window_g1

0x6889,	// (0x0001a9c1) popup_battery_window_t1_ParamLimits

0x6889,	// (0x0001a9c1) popup_battery_window_t1

0x689b,	// (0x0001a9d3) popup_battery_window_t2_ParamLimits

0x689b,	// (0x0001a9d3) popup_battery_window_t2

0x0001,

0xfd83,	// (0x00023ebb) popup_battery_window_t_ParamLimits

0xfd83,	// (0x00023ebb) popup_battery_window_t

0xac5e,	// (0x0001ed96) midp_canvas_pane_ParamLimits

0xacd0,	// (0x0001ee08) midp_keypad_pane_ParamLimits

0xacd0,	// (0x0001ee08) midp_keypad_pane

0x17c2,	// (0x000158fa) main_midp_pane_ParamLimits

0xbcd6,	// (0x0001fe0e) signal_pane_g2_cp_ParamLimits

0xd5c7,	// (0x000216ff) aid_size_cell_midp_keypad_ParamLimits

0xd5c7,	// (0x000216ff) aid_size_cell_midp_keypad

0xd5e5,	// (0x0002171d) midp_keyp_game_grid_pane_ParamLimits

0xd5e5,	// (0x0002171d) midp_keyp_game_grid_pane

0xd60c,	// (0x00021744) midp_keyp_rocker_pane_ParamLimits

0xd60c,	// (0x00021744) midp_keyp_rocker_pane

0xd65d,	// (0x00021795) midp_keyp_sk_left_pane_ParamLimits

0xd65d,	// (0x00021795) midp_keyp_sk_left_pane

0xd6b1,	// (0x000217e9) midp_keyp_sk_right_pane_ParamLimits

0xd6b1,	// (0x000217e9) midp_keyp_sk_right_pane

0xc2ef,	// (0x00020427) bg_button_pane_cp03

0xd705,	// (0x0002183d) midp_keyp_sk_left_pane_g1

0xc2ef,	// (0x00020427) bg_button_pane_cp04

0xd705,	// (0x0002183d) midp_keyp_sk_right_pane_g1

0x47fc,	// (0x00018934) midp_keyp_rocker_pane_g1

0xd70e,	// (0x00021846) keyp_game_cell_pane_ParamLimits

0xd70e,	// (0x00021846) keyp_game_cell_pane

0xc2ef,	// (0x00020427) bg_button_pane_cp02

0xd732,	// (0x0002186a) keyp_game_cell_pane_g1

0x88cc,	// (0x0001ca04) popup_fep_vkb2_window_ParamLimits

0x88cc,	// (0x0001ca04) popup_fep_vkb2_window

0x9702,	// (0x0001d83a) aid_size_cell_vkb2_ParamLimits

0x9702,	// (0x0001d83a) aid_size_cell_vkb2

0x9740,	// (0x0001d878) popup_fep_vkb2_window_g1_ParamLimits

0x9740,	// (0x0001d878) popup_fep_vkb2_window_g1

0x9790,	// (0x0001d8c8) vkb2_area_bottom_pane_ParamLimits

0x9790,	// (0x0001d8c8) vkb2_area_bottom_pane

0x97e4,	// (0x0001d91c) vkb2_area_keypad_pane_ParamLimits

0x97e4,	// (0x0001d91c) vkb2_area_keypad_pane

0x982c,	// (0x0001d964) vkb2_area_top_pane_ParamLimits

0x982c,	// (0x0001d964) vkb2_area_top_pane

0x98b2,	// (0x0001d9ea) vkb2_top_entry_pane_ParamLimits

0x98b2,	// (0x0001d9ea) vkb2_top_entry_pane

0x98df,	// (0x0001da17) vkb2_top_grid_left_pane_ParamLimits

0x98df,	// (0x0001da17) vkb2_top_grid_left_pane

0x98ff,	// (0x0001da37) vkb2_top_grid_right_pane_ParamLimits

0x98ff,	// (0x0001da37) vkb2_top_grid_right_pane

0xf144,	// (0x0002327c) vkb2_cell_keypad_pane_ParamLimits

0xf144,	// (0x0002327c) vkb2_cell_keypad_pane

0x9945,	// (0x0001da7d) vkb2_area_bottom_grid_pane_ParamLimits

0x9945,	// (0x0001da7d) vkb2_area_bottom_grid_pane

0x996f,	// (0x0001daa7) vkb2_area_bottom_pane_g1_ParamLimits

0x996f,	// (0x0001daa7) vkb2_area_bottom_pane_g1

0x9995,	// (0x0001dacd) vkb2_area_bottom_pane_g2_ParamLimits

0x9995,	// (0x0001dacd) vkb2_area_bottom_pane_g2

0x99c6,	// (0x0001dafe) vkb2_area_bottom_pane_g3_ParamLimits

0x99c6,	// (0x0001dafe) vkb2_area_bottom_pane_g3

0x0002,

0xfd88,	// (0x00023ec0) vkb2_area_bottom_pane_g_ParamLimits

0xfd88,	// (0x00023ec0) vkb2_area_bottom_pane_g

0xf1ff,	// (0x00023337) vkb2_top_cell_left_pane_ParamLimits

0xf1ff,	// (0x00023337) vkb2_top_cell_left_pane

0xd73b,	// (0x00021873) vkb2_top_entry_pane_g1_ParamLimits

0xd73b,	// (0x00021873) vkb2_top_entry_pane_g1

0xd749,	// (0x00021881) vkb2_top_entry_pane_t1_ParamLimits

0xd749,	// (0x00021881) vkb2_top_entry_pane_t1

0x6a4c,	// (0x0001ab84) vkb2_top_entry_pane_t2_ParamLimits

0x6a4c,	// (0x0001ab84) vkb2_top_entry_pane_t2

0x6a7e,	// (0x0001abb6) vkb2_top_entry_pane_t3_ParamLimits

0x6a7e,	// (0x0001abb6) vkb2_top_entry_pane_t3

0x0002,

0xfd8f,	// (0x00023ec7) vkb2_top_entry_pane_t_ParamLimits

0xfd8f,	// (0x00023ec7) vkb2_top_entry_pane_t

0x9a30,	// (0x0001db68) vkb2_top_grid_right_pane_g1_ParamLimits

0x9a30,	// (0x0001db68) vkb2_top_grid_right_pane_g1

0xf24c,	// (0x00023384) vkb2_top_grid_right_pane_g2_ParamLimits

0xf24c,	// (0x00023384) vkb2_top_grid_right_pane_g2

0xf264,	// (0x0002339c) vkb2_top_grid_right_pane_g3_ParamLimits

0xf264,	// (0x0002339c) vkb2_top_grid_right_pane_g3

0x9a46,	// (0x0001db7e) vkb2_top_grid_right_pane_g4_ParamLimits

0x9a46,	// (0x0001db7e) vkb2_top_grid_right_pane_g4

0x0003,

0xfd96,	// (0x00023ece) vkb2_top_grid_right_pane_g_ParamLimits

0xfd96,	// (0x00023ece) vkb2_top_grid_right_pane_g

0xf27c,	// (0x000233b4) vkb2_top_cell_left_pane_g1

0xf293,	// (0x000233cb) vkb2_cell_keypad_pane_g1_ParamLimits

0xf293,	// (0x000233cb) vkb2_cell_keypad_pane_g1

0x6aa2,	// (0x0001abda) vkb2_cell_keypad_pane_t1_ParamLimits

0x6aa2,	// (0x0001abda) vkb2_cell_keypad_pane_t1

0xf2a1,	// (0x000233d9) vkb2_cell_bottom_grid_pane_ParamLimits

0xf2a1,	// (0x000233d9) vkb2_cell_bottom_grid_pane

0xf2da,	// (0x00023412) vkb2_cell_bottom_grid_pane_g1

0xd3e9,	// (0x00021521) aid_call2_pane_cp02

0xd3f1,	// (0x00021529) aid_call_pane_cp02

0xd3f9,	// (0x00021531) clock_digital_number_pane_cp10

0xd401,	// (0x00021539) clock_digital_number_pane_cp11

0xd409,	// (0x00021541) clock_digital_number_pane_cp12

0xd411,	// (0x00021549) clock_digital_number_pane_cp13

0xd419,	// (0x00021551) clock_digital_separator_pane_cp10

0xe62f,	// (0x00022767) popup_clock_digital_analogue_window_cp2_g1

0xe62f,	// (0x00022767) popup_clock_digital_analogue_window_cp2_g2

0xd421,	// (0x00021559) popup_clock_digital_analogue_window_cp2_g3

0xe62f,	// (0x00022767) popup_clock_digital_analogue_window_cp2_g4

0xd421,	// (0x00021559) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4b,	// (0x00023e83) popup_clock_digital_analogue_window_cp2_g

0xd429,	// (0x00021561) popup_clock_digital_analogue_window_cp2_t1

0xd437,	// (0x0002156f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd56,	// (0x00023e8e) popup_clock_digital_analogue_window_cp2_t

0x47fc,	// (0x00018934) clock_digital_number_pane_cp10_g1

0x47fc,	// (0x00018934) clock_digital_number_pane_cp10_g2

0x0001,

0xfb39,	// (0x00023c71) clock_digital_number_pane_cp10_g

0x47fc,	// (0x00018934) clock_digital_separator_pane_cp10_g1

0x47fc,	// (0x00018934) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb39,	// (0x00023c71) clock_digital_separator_pane_cp10_g

0xd2e6,	// (0x0002141e) uniindi_top_pane_g3

0x64db,	// (0x0001a613) uniindi_top_pane_g4

0xf1cf,	// (0x00023307) vkb2_row_keypad_pane_ParamLimits

0xf1cf,	// (0x00023307) vkb2_row_keypad_pane

0xf2f6,	// (0x0002342e) vkb2_cell_t_keypad_pane_ParamLimits

0xf2f6,	// (0x0002342e) vkb2_cell_t_keypad_pane

0xf306,	// (0x0002343e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xf306,	// (0x0002343e) vkb2_cell_t_keypad_pane_cp08

0xf319,	// (0x00023451) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xf319,	// (0x00023451) vkb2_cell_t_keypad_pane_cp09

0xf32d,	// (0x00023465) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xf32d,	// (0x00023465) vkb2_cell_t_keypad_pane_cp01

0xf33e,	// (0x00023476) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xf33e,	// (0x00023476) vkb2_cell_t_keypad_pane_cp02

0xf34f,	// (0x00023487) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xf34f,	// (0x00023487) vkb2_cell_t_keypad_pane_cp03

0xf360,	// (0x00023498) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xf360,	// (0x00023498) vkb2_cell_t_keypad_pane_cp04

0xf371,	// (0x000234a9) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xf371,	// (0x000234a9) vkb2_cell_t_keypad_pane_cp05

0xf382,	// (0x000234ba) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xf382,	// (0x000234ba) vkb2_cell_t_keypad_pane_cp06

0xf393,	// (0x000234cb) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xf393,	// (0x000234cb) vkb2_cell_t_keypad_pane_cp07

0xf3a4,	// (0x000234dc) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xf3a4,	// (0x000234dc) vkb2_cell_t_keypad_pane_cp10

0xef45,	// (0x0002307d) vkb2_cell_t_keypad_pane_g1

0x6ab9,	// (0x0001abf1) vkb2_cell_t_keypad_pane_t1

0xe1b2,	// (0x000222ea) popup_grid_graphic2_window

0xd782,	// (0x000218ba) aid_size_cell_graphic2_ParamLimits

0xd782,	// (0x000218ba) aid_size_cell_graphic2

0xd7c0,	// (0x000218f8) bg_popup_window_pane_cp21_ParamLimits

0xd7c0,	// (0x000218f8) bg_popup_window_pane_cp21

0xd7ce,	// (0x00021906) graphic2_pages_pane_ParamLimits

0xd7ce,	// (0x00021906) graphic2_pages_pane

0xd824,	// (0x0002195c) grid_graphic2_control_pane_ParamLimits

0xd824,	// (0x0002195c) grid_graphic2_control_pane

0xd86c,	// (0x000219a4) grid_graphic2_pane_ParamLimits

0xd86c,	// (0x000219a4) grid_graphic2_pane

0xd8f3,	// (0x00021a2b) cell_graphic2_pane

0xe1b2,	// (0x000222ea) main_comp_mode_pane

0x5cea,	// (0x00019e22) list_ai3_gene_pane_ParamLimits

0xd09d,	// (0x000211d5) bg_popup_window_pane_cp19_ParamLimits

0x611d,	// (0x0001a255) bg_touch_area_indi_pane_ParamLimits

0x611d,	// (0x0001a255) bg_touch_area_indi_pane

0x6133,	// (0x0001a26b) bg_touch_area_indi_pane_cp01_ParamLimits

0x6133,	// (0x0001a26b) bg_touch_area_indi_pane_cp01

0x6149,	// (0x0001a281) bg_touch_area_indi_pane_cp02_ParamLimits

0x6149,	// (0x0001a281) bg_touch_area_indi_pane_cp02

0x6161,	// (0x0001a299) bg_touch_area_indi_pane_cp03_ParamLimits

0x6161,	// (0x0001a299) bg_touch_area_indi_pane_cp03

0x617b,	// (0x0001a2b3) popup_slider_window_g1_ParamLimits

0x6197,	// (0x0001a2cf) popup_slider_window_g2_ParamLimits

0x61b3,	// (0x0001a2eb) popup_slider_window_g3_ParamLimits

0xfce0,	// (0x00023e18) popup_slider_window_g_ParamLimits

0x620f,	// (0x0001a347) popup_slider_window_t1_ParamLimits

0x6283,	// (0x0001a3bb) small_volume_slider_vertical_pane_ParamLimits

0xd8f3,	// (0x00021a2b) cell_graphic2_pane_ParamLimits

0xd94e,	// (0x00021a86) bg_button_pane_cp10_ParamLimits

0xd94e,	// (0x00021a86) bg_button_pane_cp10

0xd961,	// (0x00021a99) bg_button_pane_cp11_ParamLimits

0xd961,	// (0x00021a99) bg_button_pane_cp11

0xd974,	// (0x00021aac) graphic2_pages_pane_g1_ParamLimits

0xd974,	// (0x00021aac) graphic2_pages_pane_g1

0xd98f,	// (0x00021ac7) graphic2_pages_pane_g2_ParamLimits

0xd98f,	// (0x00021ac7) graphic2_pages_pane_g2

0x0001,

0xfda4,	// (0x00023edc) graphic2_pages_pane_g_ParamLimits

0xfda4,	// (0x00023edc) graphic2_pages_pane_g

0xd9a7,	// (0x00021adf) graphic2_pages_pane_t1_ParamLimits

0xd9a7,	// (0x00021adf) graphic2_pages_pane_t1

0xd9bf,	// (0x00021af7) cell_graphic2_control_pane_ParamLimits

0xd9bf,	// (0x00021af7) cell_graphic2_control_pane

0xd9f1,	// (0x00021b29) cell_graphic2_pane_g1_ParamLimits

0xd9f1,	// (0x00021b29) cell_graphic2_pane_g1

0xc2cd,	// (0x00020405) cell_graphic2_pane_g2_ParamLimits

0xc2cd,	// (0x00020405) cell_graphic2_pane_g2

0xca5d,	// (0x00020b95) cell_graphic2_pane_g3_ParamLimits

0xca5d,	// (0x00020b95) cell_graphic2_pane_g3

0xc2da,	// (0x00020412) cell_graphic2_pane_g4_ParamLimits

0xc2da,	// (0x00020412) cell_graphic2_pane_g4

0xd9fe,	// (0x00021b36) cell_graphic2_pane_g5_ParamLimits

0xd9fe,	// (0x00021b36) cell_graphic2_pane_g5

0x0004,

0xfda9,	// (0x00023ee1) cell_graphic2_pane_g_ParamLimits

0xfda9,	// (0x00023ee1) cell_graphic2_pane_g

0xda1e,	// (0x00021b56) cell_graphic2_pane_t1_ParamLimits

0xda1e,	// (0x00021b56) cell_graphic2_pane_t1

0x2abc,	// (0x00016bf4) grid_highlight_pane_cp11_ParamLimits

0x2abc,	// (0x00016bf4) grid_highlight_pane_cp11

0xc4a3,	// (0x000205db) bg_button_pane_cp05

0xda6a,	// (0x00021ba2) cell_graphic2_control_pane_g1

0x47fc,	// (0x00018934) bg_touch_area_indi_pane_g1

0x6d95,	// (0x0001aecd) aid_cmod_rocker_key_size

0x6d9f,	// (0x0001aed7) aid_cmode_itu_key_size

0x6da9,	// (0x0001aee1) main_cmode_video_pane

0x6db3,	// (0x0001aeeb) main_comp_mode_itu_pane

0x6dbf,	// (0x0001aef7) main_comp_mode_rocker_pane

0x6dcb,	// (0x0001af03) cell_cmode_rocker_pane_ParamLimits

0x6dcb,	// (0x0001af03) cell_cmode_rocker_pane

0x6ddd,	// (0x0001af15) cell_cmode_itu_pane_ParamLimits

0x6ddd,	// (0x0001af15) cell_cmode_itu_pane

0xc789,	// (0x000208c1) bg_button_pane_cp06_ParamLimits

0xc789,	// (0x000208c1) bg_button_pane_cp06

0x4a6c,	// (0x00018ba4) cell_cmode_rocker_pane_g1_ParamLimits

0x4a6c,	// (0x00018ba4) cell_cmode_rocker_pane_g1

0x6327,	// (0x0001a45f) cell_cmode_rocker_pane_g2_ParamLimits

0x6327,	// (0x0001a45f) cell_cmode_rocker_pane_g2

0x0001,

0xfdb9,	// (0x00023ef1) cell_cmode_rocker_pane_g_ParamLimits

0xfdb9,	// (0x00023ef1) cell_cmode_rocker_pane_g

0xc2ef,	// (0x00020427) bg_button_pane_cp07

0x6df2,	// (0x0001af2a) cell_cmode_itu_pane_g1

0x6dfb,	// (0x0001af33) cell_cmode_itu_pane_t1

0x6e09,	// (0x0001af41) cell_cmode_itu_pane_t2

0x0001,

0xfdbe,	// (0x00023ef6) cell_cmode_itu_pane_t

0x654c,	// (0x0001a684) aid_touch_ctrl_left

0x6554,	// (0x0001a68c) aid_touch_ctrl_right

0xc2ef,	// (0x00020427) compa_mode_pane

0xda90,	// (0x00021bc8) aid_cmod_rocker_key_size_cp

0xda9a,	// (0x00021bd2) aid_cmode_itu_key_size_cp

0x6e2b,	// (0x0001af63) compa_mode_pane_g1

0x6e33,	// (0x0001af6b) compa_mode_pane_g2

0x6e3b,	// (0x0001af73) compa_mode_pane_g3

0x0002,

0xfdc3,	// (0x00023efb) compa_mode_pane_g

0xdaa4,	// (0x00021bdc) main_comp_mode_itu_pane_cp

0xdaac,	// (0x00021be4) main_comp_mode_rocker_pane_cp

0xdab4,	// (0x00021bec) cell_cmode_itu_pane_cp_ParamLimits

0xdab4,	// (0x00021bec) cell_cmode_itu_pane_cp

0xdac9,	// (0x00021c01) cell_cmode_rocker_pane_cp_ParamLimits

0xdac9,	// (0x00021c01) cell_cmode_rocker_pane_cp

0xc789,	// (0x000208c1) bg_button_pane_cp06_cp_ParamLimits

0xc789,	// (0x000208c1) bg_button_pane_cp06_cp

0x4a6c,	// (0x00018ba4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4a6c,	// (0x00018ba4) cell_cmode_rocker_pane_g1_cp

0x47fc,	// (0x00018934) cell_cmode_rocker_pane_g2_cp

0xc2ef,	// (0x00020427) bg_button_pane_cp07_cp

0xdadb,	// (0x00021c13) cell_cmode_itu_pane_g1_cp

0xdae4,	// (0x00021c1c) cell_cmode_itu_pane_t1_cp

0xdae4,	// (0x00021c1c) cell_cmode_itu_pane_t2_cp

0xba21,	// (0x0001fb59) settings_code_pane_cp2

0xc35f,	// (0x00020497) bg_popup_window_pane_cp3_ParamLimits

0xc5bc,	// (0x000206f4) heading_pane_cp3_ParamLimits

0xc5c8,	// (0x00020700) listscroll_popup_graphic_pane_ParamLimits

0xed65,	// (0x00022e9d) fep_hwr_aid_pane_ParamLimits

0xf0d0,	// (0x00023208) aid_touch_sctrl_top_ParamLimits

0xf0eb,	// (0x00023223) sctrl_sk_top_pane_g1_ParamLimits

0xef45,	// (0x0002307d) sctrl_sk_top_pane_g2_ParamLimits

0xfcf9,	// (0x00023e31) sctrl_sk_top_pane_g_ParamLimits

0xf0f8,	// (0x00023230) sctrl_sk_top_pane_t1_ParamLimits

0xf0d0,	// (0x00023208) aid_touch_sctrl_bottom_ParamLimits

0xf0f8,	// (0x00023230) sctrl_sk_bottom_pane_t1_ParamLimits

0xd2b2,	// (0x000213ea) aid_area_touch_clock

0x9874,	// (0x0001d9ac) aid_vkb2_area_top_pane_cell_ParamLimits

0x9874,	// (0x0001d9ac) aid_vkb2_area_top_pane_cell

0x991f,	// (0x0001da57) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x991f,	// (0x0001da57) aid_vkb2_area_bottom_pane_cell

0x6a04,	// (0x0001ab3c) popup_char_count_window

0x6e91,	// (0x0001afc9) popup_char_count_window_g1

0x6e9a,	// (0x0001afd2) popup_char_count_window_g2

0x6ea3,	// (0x0001afdb) popup_char_count_window_g3

0x0002,

0xfdca,	// (0x00023f02) popup_char_count_window_g

0x6eac,	// (0x0001afe4) popup_char_count_window_t1

0xf12a,	// (0x00023262) popup_fep_char_preview_window_ParamLimits

0xf12a,	// (0x00023262) popup_fep_char_preview_window

0x9894,	// (0x0001d9cc) vkb2_top_candi_pane_ParamLimits

0x9894,	// (0x0001d9cc) vkb2_top_candi_pane

0xdaf2,	// (0x00021c2a) cell_vkb2_top_candi_pane_ParamLimits

0xdaf2,	// (0x00021c2a) cell_vkb2_top_candi_pane

0xf3b9,	// (0x000234f1) bg_popup_fep_char_preview_window_ParamLimits

0xf3b9,	// (0x000234f1) bg_popup_fep_char_preview_window

0xf3d5,	// (0x0002350d) popup_fep_char_preview_window_t1_ParamLimits

0xf3d5,	// (0x0002350d) popup_fep_char_preview_window_t1

0x6f07,	// (0x0001b03f) bg_popup_fep_char_preview_window_g1

0x6f0f,	// (0x0001b047) bg_popup_fep_char_preview_window_g2

0x6f17,	// (0x0001b04f) bg_popup_fep_char_preview_window_g3

0x6f1f,	// (0x0001b057) bg_popup_fep_char_preview_window_g4

0x6f27,	// (0x0001b05f) bg_popup_fep_char_preview_window_g5

0xf40f,	// (0x00023547) bg_popup_fep_char_preview_window_g6

0x6f2f,	// (0x0001b067) bg_popup_fep_char_preview_window_g7

0x6f37,	// (0x0001b06f) bg_popup_fep_char_preview_window_g8

0x6f3f,	// (0x0001b077) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd1,	// (0x00023f09) bg_popup_fep_char_preview_window_g

0xef45,	// (0x0002307d) cell_vkb2_top_candi_pane_g1_ParamLimits

0xef45,	// (0x0002307d) cell_vkb2_top_candi_pane_g1

0xef53,	// (0x0002308b) cell_vkb2_top_candi_pane_g2_ParamLimits

0xef53,	// (0x0002308b) cell_vkb2_top_candi_pane_g2

0x5c3e,	// (0x00019d76) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5c3e,	// (0x00019d76) cell_vkb2_top_candi_pane_g3

0xf417,	// (0x0002354f) cell_vkb2_top_candi_pane_g4_ParamLimits

0xf417,	// (0x0002354f) cell_vkb2_top_candi_pane_g4

0x511d,	// (0x00019255) cell_vkb2_top_candi_pane_g5_ParamLimits

0x511d,	// (0x00019255) cell_vkb2_top_candi_pane_g5

0xf3c7,	// (0x000234ff) cell_vkb2_top_candi_pane_g6_ParamLimits

0xf3c7,	// (0x000234ff) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde4,	// (0x00023f1c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde4,	// (0x00023f1c) cell_vkb2_top_candi_pane_g

0xf438,	// (0x00023570) cell_vkb2_top_candi_pane_t1

0x9517,	// (0x0001d64f) aid_size_touch_slider_mark_ParamLimits

0x9517,	// (0x0001d64f) aid_size_touch_slider_mark

0xd80a,	// (0x00021942) grid_graphic2_catg_pane_ParamLimits

0xd80a,	// (0x00021942) grid_graphic2_catg_pane

0xd8c6,	// (0x000219fe) popup_grid_graphic2_window_t1_ParamLimits

0xd8c6,	// (0x000219fe) popup_grid_graphic2_window_t1

0xd8dc,	// (0x00021a14) popup_grid_graphic2_window_t2_ParamLimits

0xd8dc,	// (0x00021a14) popup_grid_graphic2_window_t2

0x0001,

0xfd9f,	// (0x00023ed7) popup_grid_graphic2_window_t_ParamLimits

0xfd9f,	// (0x00023ed7) popup_grid_graphic2_window_t

0xc4a3,	// (0x000205db) bg_button_pane_cp05_ParamLimits

0xda6a,	// (0x00021ba2) cell_graphic2_control_pane_g1_ParamLimits

0xdb58,	// (0x00021c90) cell_graphic2_catg_pane_ParamLimits

0xdb58,	// (0x00021c90) cell_graphic2_catg_pane

0xc2ef,	// (0x00020427) bg_button_pane_cp12

0xdb6a,	// (0x00021ca2) cell_graphic2_catg_pane_g1

0x6461,	// (0x0001a599) cell_tb_ext_pane_t1_ParamLimits

0xf21f,	// (0x00023357) vkb2_top_cell_right_narrow_pane_ParamLimits

0xf21f,	// (0x00023357) vkb2_top_cell_right_narrow_pane

0xf237,	// (0x0002336f) vkb2_top_cell_right_wide_pane_ParamLimits

0xf237,	// (0x0002336f) vkb2_top_cell_right_wide_pane

0xe9d9,	// (0x00022b11) bg_vkb2_func_pane_ParamLimits

0xe9d9,	// (0x00022b11) bg_vkb2_func_pane

0xf27c,	// (0x000233b4) vkb2_top_cell_left_pane_g1_ParamLimits

0xe9d9,	// (0x00022b11) bg_vkb2_fuc_pane_cp03_ParamLimits

0xe9d9,	// (0x00022b11) bg_vkb2_fuc_pane_cp03

0xf2da,	// (0x00023412) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1d01,	// (0x00015e39) bg_vkb2_func_pane_g1

0x1d09,	// (0x00015e41) bg_vkb2_func_pane_g2

0x1d19,	// (0x00015e51) bg_vkb2_func_pane_g3

0x1d11,	// (0x00015e49) bg_vkb2_func_pane_g4

0x1d21,	// (0x00015e59) bg_vkb2_func_pane_g5

0x1d29,	// (0x00015e61) bg_vkb2_func_pane_g6

0x1d31,	// (0x00015e69) bg_vkb2_func_pane_g7

0x1d39,	// (0x00015e71) bg_vkb2_func_pane_g8

0x1cf9,	// (0x00015e31) bg_vkb2_func_pane_g9

0x0008,

0xfdf1,	// (0x00023f29) bg_vkb2_func_pane_g

0xe9d9,	// (0x00022b11) bg_vkb2_fuc_pane_cp01_ParamLimits

0xe9d9,	// (0x00022b11) bg_vkb2_fuc_pane_cp01

0xf27c,	// (0x000233b4) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xf27c,	// (0x000233b4) vkb2_top_cell_right_wide_pane_g1

0xe9d9,	// (0x00022b11) bg_vkb2_fuc_pane_cp02_ParamLimits

0xe9d9,	// (0x00022b11) bg_vkb2_fuc_pane_cp02

0xf2da,	// (0x00023412) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xf2da,	// (0x00023412) vkb2_top_cell_right_narrow_pane_g1

0xcfdb,	// (0x00021113) aid_touch_area_decrease_ParamLimits

0xcfdb,	// (0x00021113) aid_touch_area_decrease

0xd011,	// (0x00021149) aid_touch_area_increase_ParamLimits

0xd011,	// (0x00021149) aid_touch_area_increase

0xd039,	// (0x00021171) aid_touch_area_mute_ParamLimits

0xd039,	// (0x00021171) aid_touch_area_mute

0xd069,	// (0x000211a1) aid_touch_area_slider_ParamLimits

0xd069,	// (0x000211a1) aid_touch_area_slider

0xd0a9,	// (0x000211e1) popup_slider_window_g4_ParamLimits

0xd0a9,	// (0x000211e1) popup_slider_window_g4

0xd0d1,	// (0x00021209) popup_slider_window_g5_ParamLimits

0xd0d1,	// (0x00021209) popup_slider_window_g5

0xd105,	// (0x0002123d) popup_slider_window_g6_ParamLimits

0xd105,	// (0x0002123d) popup_slider_window_g6

0x623d,	// (0x0001a375) popup_slider_window_t2_ParamLimits

0x623d,	// (0x0001a375) popup_slider_window_t2

0x0001,

0xfced,	// (0x00023e25) popup_slider_window_t_ParamLimits

0xfced,	// (0x00023e25) popup_slider_window_t

0xd121,	// (0x00021259) slider_pane_ParamLimits

0xd121,	// (0x00021259) slider_pane

0x6f62,	// (0x0001b09a) slider_pane_g1_ParamLimits

0x6f62,	// (0x0001b09a) slider_pane_g1

0x6f76,	// (0x0001b0ae) slider_pane_g2_ParamLimits

0x6f76,	// (0x0001b0ae) slider_pane_g2

0x6f8c,	// (0x0001b0c4) slider_pane_g3_ParamLimits

0x6f8c,	// (0x0001b0c4) slider_pane_g3

0x0003,

0xfe04,	// (0x00023f3c) slider_pane_g_ParamLimits

0xfe04,	// (0x00023f3c) slider_pane_g

0x9336,	// (0x0001d46e) popup_tb_float_extension_window_ParamLimits

0x9336,	// (0x0001d46e) popup_tb_float_extension_window

0x6fb8,	// (0x0001b0f0) aid_size_cell_tb_float_ext

0xc2ef,	// (0x00020427) bg_popup_sub_window_cp28

0xdb73,	// (0x00021cab) grid_tb_float_ext_pane

0xdb7d,	// (0x00021cb5) cell_tb_float_ext_pane_ParamLimits

0xdb7d,	// (0x00021cb5) cell_tb_float_ext_pane

0xdb97,	// (0x00021ccf) cell_tb_float_ext_pane_g1

0xdba0,	// (0x00021cd8) grid_highlight_pane_cp12

0x960a,	// (0x0001d742) cell_last_hwr_side_pane_ParamLimits

0x960a,	// (0x0001d742) cell_last_hwr_side_pane

0x47fc,	// (0x00018934) cell_last_hwr_side_pane_g1

0x6ffa,	// (0x0001b132) cell_last_hwr_side_pane_g2

0x0001,

0xfe0d,	// (0x00023f45) cell_last_hwr_side_pane_g

0x99fb,	// (0x0001db33) vkb2_area_bottom_space_btn_pane_ParamLimits

0x99fb,	// (0x0001db33) vkb2_area_bottom_space_btn_pane

0xef45,	// (0x0002307d) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6ab9,	// (0x0001abf1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xf438,	// (0x00023570) cell_vkb2_top_candi_pane_t1_ParamLimits

0xf457,	// (0x0002358f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xf457,	// (0x0002358f) vkb2_area_bottom_space_btn_pane_g1

0xf491,	// (0x000235c9) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf491,	// (0x000235c9) vkb2_area_bottom_space_btn_pane_g2

0xf4c7,	// (0x000235ff) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf4c7,	// (0x000235ff) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe12,	// (0x00023f4a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe12,	// (0x00023f4a) vkb2_area_bottom_space_btn_pane_g

0xee1a,	// (0x00022f52) cel_fep_hwr_func_pane_ParamLimits

0xee1a,	// (0x00022f52) cel_fep_hwr_func_pane

0x95df,	// (0x0001d717) cell_hwr_side_button_pane_ParamLimits

0x95df,	// (0x0001d717) cell_hwr_side_button_pane

0xd2b2,	// (0x000213ea) aid_area_touch_clock_ParamLimits

0xc4a3,	// (0x000205db) bg_uniindi_top_pane_ParamLimits

0xd2c4,	// (0x000213fc) uniindi_top_pane_g1_ParamLimits

0xd2da,	// (0x00021412) uniindi_top_pane_g2_ParamLimits

0xd2e6,	// (0x0002141e) uniindi_top_pane_g3_ParamLimits

0x64db,	// (0x0001a613) uniindi_top_pane_g4_ParamLimits

0xfd25,	// (0x00023e5d) uniindi_top_pane_g_ParamLimits

0xd2f7,	// (0x0002142f) uniindi_top_pane_t1_ParamLimits

0xc4a3,	// (0x000205db) bg_vkb2_func_pane_cp01_ParamLimits

0xc4a3,	// (0x000205db) bg_vkb2_func_pane_cp01

0x7003,	// (0x0001b13b) cel_fep_hwr_func_pane_g1_ParamLimits

0x7003,	// (0x0001b13b) cel_fep_hwr_func_pane_g1

0xc4a3,	// (0x000205db) bg_vkb2_func_pane_cp02_ParamLimits

0xc4a3,	// (0x000205db) bg_vkb2_func_pane_cp02

0x7003,	// (0x0001b13b) cell_hwr_side_button_pane_g1_ParamLimits

0x7003,	// (0x0001b13b) cell_hwr_side_button_pane_g1

0x1b5b,	// (0x00015c93) status_pane_g4_ParamLimits

0x1b5b,	// (0x00015c93) status_pane_g4

0x1b75,	// (0x00015cad) status_pane_t1

0x4537,	// (0x0001866f) form2_midp_gauge_slider_cont_pane

0x453f,	// (0x00018677) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe34,	// (0x0001ff6c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe46,	// (0x0001ff7e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaec,	// (0x00023c24) form2_midp_gauge_slider_pane_t_ParamLimits

0x4575,	// (0x000186ad) form2_midp_slider_pane_ParamLimits

0xf11c,	// (0x00023254) aid_size_cell_func_vkb2_ParamLimits

0xf11c,	// (0x00023254) aid_size_cell_func_vkb2

0x6fa4,	// (0x0001b0dc) slider_pane_g4_ParamLimits

0x6fa4,	// (0x0001b0dc) slider_pane_g4

0x9a5c,	// (0x0001db94) form2_midp_gauge_slider_pane_t2_cp01

0x9a6a,	// (0x0001dba2) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9a6a,	// (0x0001dba2) form2_midp_gauge_slider_pane_t3_cp01

0xf511,	// (0x00023649) form2_midp_slider_pane_cp01

0xc2ef,	// (0x00020427) navi_smil_pane

0x703c,	// (0x0001b174) navi_smil_pane_g1

0x7044,	// (0x0001b17c) navi_smil_pane_t1

0x7011,	// (0x0001b149) form2_midp_slider_pane_g1

0x701a,	// (0x0001b152) form2_midp_slider_pane_g2

0x7022,	// (0x0001b15a) form2_midp_slider_pane_g3

0x7011,	// (0x0001b149) form2_midp_slider_pane_g4

0xdba9,	// (0x00021ce1) form2_midp_slider_pane_g5

0x0004,

0xfe1b,	// (0x00023f53) form2_midp_slider_pane_g

0xf501,	// (0x00023639) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf501,	// (0x00023639) vkb2_area_bottom_space_btn_pane_g4

0xaf57,	// (0x0001f08f) lc0_navi_pane_ParamLimits

0xaf57,	// (0x0001f08f) lc0_navi_pane

0xafc1,	// (0x0001f0f9) lc0_stat_indi_pane_ParamLimits

0xafc1,	// (0x0001f0f9) lc0_stat_indi_pane

0xafd6,	// (0x0001f10e) ls0_title_pane_ParamLimits

0xafd6,	// (0x0001f10e) ls0_title_pane

0xc789,	// (0x000208c1) bg_popup_sub_pane_cp14_ParamLimits

0xd299,	// (0x000213d1) list_uniindi_pane_ParamLimits

0xd2a5,	// (0x000213dd) uniindi_top_pane_ParamLimits

0x6524,	// (0x0001a65c) list_single_uniindi_pane_g1_ParamLimits

0x6537,	// (0x0001a66f) list_single_uniindi_pane_t1_ParamLimits

0x9a87,	// (0x0001dbbf) lc0_stat_clock_pane_ParamLimits

0x9a87,	// (0x0001dbbf) lc0_stat_clock_pane

0xdbb4,	// (0x00021cec) lc0_stat_indi_pane_g1_ParamLimits

0xdbb4,	// (0x00021cec) lc0_stat_indi_pane_g1

0xdbc1,	// (0x00021cf9) lc0_stat_indi_pane_g2_ParamLimits

0xdbc1,	// (0x00021cf9) lc0_stat_indi_pane_g2

0x0001,

0xfe26,	// (0x00023f5e) lc0_stat_indi_pane_g_ParamLimits

0xfe26,	// (0x00023f5e) lc0_stat_indi_pane_g

0x9a97,	// (0x0001dbcf) lc0_uni_indicator_pane_ParamLimits

0x9a97,	// (0x0001dbcf) lc0_uni_indicator_pane

0xdbce,	// (0x00021d06) ls0_title_pane_g1_ParamLimits

0xdbce,	// (0x00021d06) ls0_title_pane_g1

0xdbe2,	// (0x00021d1a) ls0_title_pane_t1_ParamLimits

0xdbe2,	// (0x00021d1a) ls0_title_pane_t1

0x9aa7,	// (0x0001dbdf) lc0_uni_indicator_pane_g1_ParamLimits

0x9aa7,	// (0x0001dbdf) lc0_uni_indicator_pane_g1

0x70b6,	// (0x0001b1ee) lc0_stat_clock_pane_t1

0xe1b2,	// (0x000222ea) main_ai5_pane

0x70c4,	// (0x0001b1fc) ai5_sk_pane_ParamLimits

0x70c4,	// (0x0001b1fc) ai5_sk_pane

0xdc10,	// (0x00021d48) cell_ai5_widget_pane_ParamLimits

0xdc10,	// (0x00021d48) cell_ai5_widget_pane

0x7183,	// (0x0001b2bb) aid_size_cell_widget_grid

0x7191,	// (0x0001b2c9) bg_ai5_widget_pane_ParamLimits

0x7191,	// (0x0001b2c9) bg_ai5_widget_pane

0x7205,	// (0x0001b33d) cell_ai5_widget_pane_g2

0x7215,	// (0x0001b34d) cell_ai5_widget_pane_g3

0x722c,	// (0x0001b364) cell_ai5_widget_pane_g4

0x7238,	// (0x0001b370) cell_ai5_widget_pane_g5

0x7244,	// (0x0001b37c) cell_ai5_widget_pane_g6

0x7250,	// (0x0001b388) cell_ai5_widget_pane_g7

0x7298,	// (0x0001b3d0) cell_ai5_widget_pane_t1_ParamLimits

0x7298,	// (0x0001b3d0) cell_ai5_widget_pane_t1

0x72b5,	// (0x0001b3ed) cell_ai5_widget_pane_t2_ParamLimits

0x72b5,	// (0x0001b3ed) cell_ai5_widget_pane_t2

0x72cd,	// (0x0001b405) cell_ai5_widget_pane_t3_ParamLimits

0x72cd,	// (0x0001b405) cell_ai5_widget_pane_t3

0x72e5,	// (0x0001b41d) cell_ai5_widget_pane_t4_ParamLimits

0x72e5,	// (0x0001b41d) cell_ai5_widget_pane_t4

0x7302,	// (0x0001b43a) cell_ai5_widget_pane_t5_ParamLimits

0x7302,	// (0x0001b43a) cell_ai5_widget_pane_t5

0x7321,	// (0x0001b459) cell_ai5_widget_pane_t6_ParamLimits

0x7321,	// (0x0001b459) cell_ai5_widget_pane_t6

0x7333,	// (0x0001b46b) cell_ai5_widget_pane_t7_ParamLimits

0x7333,	// (0x0001b46b) cell_ai5_widget_pane_t7

0x734c,	// (0x0001b484) cell_ai5_widget_pane_t8_ParamLimits

0x734c,	// (0x0001b484) cell_ai5_widget_pane_t8

0x0009,

0xfe40,	// (0x00023f78) cell_ai5_widget_pane_t_ParamLimits

0xfe40,	// (0x00023f78) cell_ai5_widget_pane_t

0x73a0,	// (0x0001b4d8) grid_ai5_widget_pane

0xc789,	// (0x000208c1) highlight_cell_ai5_widget_pane_ParamLimits

0xc789,	// (0x000208c1) highlight_cell_ai5_widget_pane

0xdc76,	// (0x00021dae) ai5_sk_left_pane

0xdc80,	// (0x00021db8) ai5_sk_middle_pane

0xdc8a,	// (0x00021dc2) ai5_sk_right_pane

0x73cc,	// (0x0001b504) bg_ai5_widget_pane_g1_ParamLimits

0x73cc,	// (0x0001b504) bg_ai5_widget_pane_g1

0x73d8,	// (0x0001b510) bg_ai5_widget_pane_g2_ParamLimits

0x73d8,	// (0x0001b510) bg_ai5_widget_pane_g2

0x73e4,	// (0x0001b51c) bg_ai5_widget_pane_g3_ParamLimits

0x73e4,	// (0x0001b51c) bg_ai5_widget_pane_g3

0x73f0,	// (0x0001b528) bg_ai5_widget_pane_g4_ParamLimits

0x73f0,	// (0x0001b528) bg_ai5_widget_pane_g4

0x73fc,	// (0x0001b534) bg_ai5_widget_pane_g5_ParamLimits

0x73fc,	// (0x0001b534) bg_ai5_widget_pane_g5

0x7408,	// (0x0001b540) bg_ai5_widget_pane_g6_ParamLimits

0x7408,	// (0x0001b540) bg_ai5_widget_pane_g6

0x7414,	// (0x0001b54c) bg_ai5_widget_pane_g7_ParamLimits

0x7414,	// (0x0001b54c) bg_ai5_widget_pane_g7

0x7420,	// (0x0001b558) bg_ai5_widget_pane_g8_ParamLimits

0x7420,	// (0x0001b558) bg_ai5_widget_pane_g8

0x742c,	// (0x0001b564) bg_ai5_widget_pane_g9_ParamLimits

0x742c,	// (0x0001b564) bg_ai5_widget_pane_g9

0x0008,

0xfe55,	// (0x00023f8d) bg_ai5_widget_pane_g_ParamLimits

0xfe55,	// (0x00023f8d) bg_ai5_widget_pane_g

0x745e,	// (0x0001b596) cell_shortcut_ai5_widget_pane_ParamLimits

0x745e,	// (0x0001b596) cell_shortcut_ai5_widget_pane

0x146f,	// (0x000155a7) bg_cell_shortcut_ai5_widget_pane

0x746f,	// (0x0001b5a7) cell_grid_ai5_widget_pane_g1

0x146f,	// (0x000155a7) highlight_cell_shortcut_ai5_widget_pane

0x1d01,	// (0x00015e39) ai5_sk_left_pane_g1

0x7478,	// (0x0001b5b0) ai5_sk_left_pane_g2

0x7480,	// (0x0001b5b8) ai5_sk_left_pane_g3

0x7488,	// (0x0001b5c0) ai5_sk_left_pane_g4

0x0003,

0xfe68,	// (0x00023fa0) ai5_sk_left_pane_g

0x7490,	// (0x0001b5c8) ai5_sk_left_pane_t1

0x1d09,	// (0x00015e41) ai5_sk_right_pane_g1

0x749e,	// (0x0001b5d6) ai5_sk_right_pane_g2

0x74a6,	// (0x0001b5de) ai5_sk_right_pane_g3

0x74ae,	// (0x0001b5e6) ai5_sk_right_pane_g4

0x0003,

0xfe71,	// (0x00023fa9) ai5_sk_right_pane_g

0x74b6,	// (0x0001b5ee) ai5_sk_right_pane_t1

0x1d09,	// (0x00015e41) ai5_sk_middle_pane_g1

0x1d01,	// (0x00015e39) ai5_sk_middle_pane_g2

0x1d21,	// (0x00015e59) ai5_sk_middle_pane_g3

0x74a6,	// (0x0001b5de) ai5_sk_middle_pane_g4

0x7480,	// (0x0001b5b8) ai5_sk_middle_pane_g5

0x74c4,	// (0x0001b5fc) ai5_sk_middle_pane_g6

0xdc94,	// (0x00021dcc) ai5_sk_middle_pane_g7

0x0006,

0xfe7a,	// (0x00023fb2) ai5_sk_middle_pane_g

0xae43,	// (0x0001ef7b) aid_touch_area_size_lc0_ParamLimits

0xae43,	// (0x0001ef7b) aid_touch_area_size_lc0

0xef74,	// (0x000230ac) cell_hwr_candidate_pane_t1_ParamLimits

0x182c,	// (0x00015964) aid_touch_navi_pane

0xb0cf,	// (0x0001f207) status_dt_navi_pane_ParamLimits

0xb0cf,	// (0x0001f207) status_dt_navi_pane

0xb0e7,	// (0x0001f21f) status_dt_sta_pane_ParamLimits

0xb0e7,	// (0x0001f21f) status_dt_sta_pane

0xdc9c,	// (0x00021dd4) dt_sta_controll_pane

0xdca9,	// (0x00021de1) dt_sta_indi_pane

0xdcb6,	// (0x00021dee) dt_sta_title_pane

0xc4a3,	// (0x000205db) bg_dt_sta_indi_pane_ParamLimits

0xc4a3,	// (0x000205db) bg_dt_sta_indi_pane

0xdcc8,	// (0x00021e00) dt_sta_battery_pane

0xdcd0,	// (0x00021e08) dt_sta_indi_pane_g1

0x7516,	// (0x0001b64e) dt_sta_indi_pane_g2

0x751f,	// (0x0001b657) dt_sta_indi_pane_g3

0x0002,

0xfe89,	// (0x00023fc1) dt_sta_indi_pane_g

0x7528,	// (0x0001b660) dt_sta_signal_pane

0xc789,	// (0x000208c1) bg_dt_sta_title_pane_ParamLimits

0xc789,	// (0x000208c1) bg_dt_sta_title_pane

0x2c1c,	// (0x00016d54) dt_sta_title_pane_g1

0xdcd9,	// (0x00021e11) dt_sta_title_pane_t1_ParamLimits

0xdcd9,	// (0x00021e11) dt_sta_title_pane_t1

0xc2ef,	// (0x00020427) bg_dt_sta_control_pane

0xdcee,	// (0x00021e26) dt_sta_controll_pane_g1

0xdcf7,	// (0x00021e2f) bg_dt_sta_title_pane_g1

0xdd00,	// (0x00021e38) bg_dt_sta_title_pane_g2

0xdd09,	// (0x00021e41) bg_dt_sta_title_pane_g3

0x0002,

0xfe90,	// (0x00023fc8) bg_dt_sta_title_pane_g

0x47fc,	// (0x00018934) bg_dt_sta_indi_pane_g1

0x756a,	// (0x0001b6a2) dt_sta_signal_pane_g1

0x7572,	// (0x0001b6aa) dt_sta_signal_pane_g2

0x0001,

0xfe97,	// (0x00023fcf) dt_sta_signal_pane_g

0x757a,	// (0x0001b6b2) dt_sta_battery_pane_g1

0x7583,	// (0x0001b6bb) dt_sta_battery_pane_t1

0x47fc,	// (0x00018934) bg_dt_sta_control_pane_g1

0xe746,	// (0x0002287e) fep_china_uni_eep_pane

0xe74e,	// (0x00022886) fep_china_uni_entry_pane_ParamLimits

0xe75e,	// (0x00022896) popup_fep_china_uni_window_g1_ParamLimits

0xe76e,	// (0x000228a6) popup_fep_china_uni_window_g2_ParamLimits

0xe76e,	// (0x000228a6) popup_fep_china_uni_window_g2

0x0001,

0xf70e,	// (0x00023846) popup_fep_china_uni_window_g_ParamLimits

0xf70e,	// (0x00023846) popup_fep_china_uni_window_g

0x7592,	// (0x0001b6ca) fep_china_uni_eep_pane_g1

0x759a,	// (0x0001b6d2) fep_china_uni_eep_pane_t1

0x7033,	// (0x0001b16b) aid_touch_area_size_smil_player

0x1982,	// (0x00015aba) lc0_clock_pane

0x1b69,	// (0x00015ca1) status_pane_g5_ParamLimits

0x1b69,	// (0x00015ca1) status_pane_g5

0x8e6c,	// (0x0001cfa4) popup_keymap_window

0x1b27,	// (0x00015c5f) status_icon_pane

0x7215,	// (0x0001b34d) cell_ai5_widget_pane_g3_ParamLimits

0x722c,	// (0x0001b364) cell_ai5_widget_pane_g4_ParamLimits

0x7238,	// (0x0001b370) cell_ai5_widget_pane_g5_ParamLimits

0x725c,	// (0x0001b394) cell_ai5_widget_pane_g8_ParamLimits

0x725c,	// (0x0001b394) cell_ai5_widget_pane_g8

0x7270,	// (0x0001b3a8) cell_ai5_widget_pane_g9_ParamLimits

0x7270,	// (0x0001b3a8) cell_ai5_widget_pane_g9

0x7284,	// (0x0001b3bc) cell_ai5_widget_pane_g10_ParamLimits

0x7284,	// (0x0001b3bc) cell_ai5_widget_pane_g10

0x75a9,	// (0x0001b6e1) status_icon_pane_g1

0xc2ef,	// (0x00020427) bg_popup_sub_pane_cp13

0x75b1,	// (0x0001b6e9) popup_keymap_window_t1

0xadd1,	// (0x0001ef09) control_pane_g6_ParamLimits

0xadd1,	// (0x0001ef09) control_pane_g6

0xadde,	// (0x0001ef16) control_pane_g7_ParamLimits

0xadde,	// (0x0001ef16) control_pane_g7

0xadeb,	// (0x0001ef23) control_pane_g8_ParamLimits

0xadeb,	// (0x0001ef23) control_pane_g8

0xdc9c,	// (0x00021dd4) dt_sta_controll_pane_ParamLimits

0xdca9,	// (0x00021de1) dt_sta_indi_pane_ParamLimits

0xdcb6,	// (0x00021dee) dt_sta_title_pane_ParamLimits

0xc676,	// (0x000207ae) aid_size_touch_scroll_bar_cale

0x88c0,	// (0x0001c9f8) popup_discreet_window_ParamLimits

0x88c0,	// (0x0001c9f8) popup_discreet_window

0x8912,	// (0x0001ca4a) popup_sk_window

0x2460,	// (0x00016598) bg_popup_sub_pane_cp28_ParamLimits

0x2460,	// (0x00016598) bg_popup_sub_pane_cp28

0x75bf,	// (0x0001b6f7) popup_discreet_window_g1_ParamLimits

0x75bf,	// (0x0001b6f7) popup_discreet_window_g1

0xdd12,	// (0x00021e4a) popup_discreet_window_t1_ParamLimits

0xdd12,	// (0x00021e4a) popup_discreet_window_t1

0x75fd,	// (0x0001b735) popup_discreet_window_t2_ParamLimits

0x75fd,	// (0x0001b735) popup_discreet_window_t2

0x0002,

0xfe9c,	// (0x00023fd4) popup_discreet_window_t_ParamLimits

0xfe9c,	// (0x00023fd4) popup_discreet_window_t

0xf51a,	// (0x00023652) popup_sk_window_g1

0xf524,	// (0x0002365c) popup_sk_window_g2

0x0001,

0xfea3,	// (0x00023fdb) popup_sk_window_g

0x9ad2,	// (0x0001dc0a) popup_sk_window_t1

0x9ae0,	// (0x0001dc18) popup_sk_window_t1_copy1

0x7205,	// (0x0001b33d) cell_ai5_widget_pane_g2_ParamLimits

0x735e,	// (0x0001b496) cell_ai5_widget_pane_t9_ParamLimits

0x735e,	// (0x0001b496) cell_ai5_widget_pane_t9

0xc2ef,	// (0x00020427) main_fep_fshwr2_pane

0x9aee,	// (0x0001dc26) aid_fshwr2_btn_pane

0x9b00,	// (0x0001dc38) aid_fshwr2_syb_pane

0x9b12,	// (0x0001dc4a) aid_fshwr2_txt_pane

0x9b21,	// (0x0001dc59) fshwr2_func_candi_pane

0x9b40,	// (0x0001dc78) fshwr2_hwr_syb_pane

0x9b5b,	// (0x0001dc93) fshwr2_icf_pane

0xe1b2,	// (0x000222ea) fshwr2_icf_bg_pane

0xf52c,	// (0x00023664) fshwr2_icf_pane_t1_ParamLimits

0xf52c,	// (0x00023664) fshwr2_icf_pane_t1

0xe62f,	// (0x00022767) fshwr2_func_candi_pane_g1

0xdd30,	// (0x00021e68) fshwr2_func_candi_row_pane_ParamLimits

0xdd30,	// (0x00021e68) fshwr2_func_candi_row_pane

0x9b87,	// (0x0001dcbf) cell_fshwr2_syb_pane_ParamLimits

0x9b87,	// (0x0001dcbf) cell_fshwr2_syb_pane

0xef45,	// (0x0002307d) fshwr2_hwr_syb_pane_g1_ParamLimits

0xef45,	// (0x0002307d) fshwr2_hwr_syb_pane_g1

0xe1b2,	// (0x000222ea) bg_popup_call_pane_cp01

0x9b9d,	// (0x0001dcd5) fshwr2_func_candi_cell_pane_ParamLimits

0x9b9d,	// (0x0001dcd5) fshwr2_func_candi_cell_pane

0xdd53,	// (0x00021e8b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xdd53,	// (0x00021e8b) fshwr2_func_candi_cell_bg_pane

0x9be8,	// (0x0001dd20) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9be8,	// (0x0001dd20) fshwr2_func_candi_cell_pane_g1

0x9c1f,	// (0x0001dd57) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9c1f,	// (0x0001dd57) fshwr2_func_candi_cell_pane_t1

0xe1b2,	// (0x000222ea) bg_button_pane_cp08

0x765f,	// (0x0001b797) cell_fshwr2_syb_bg_pane

0x9c3a,	// (0x0001dd72) cell_fshwr2_syb_bg_pane_g1

0x9c42,	// (0x0001dd7a) cell_fshwr2_syb_bg_pane_t1

0xc789,	// (0x000208c1) main_tmo_pane

0xb7c1,	// (0x0001f8f9) uni_indicator_pane_g1_ParamLimits

0xb7d7,	// (0x0001f90f) uni_indicator_pane_g2_ParamLimits

0xb7ed,	// (0x0001f925) uni_indicator_pane_g3_ParamLimits

0x2f89,	// (0x000170c1) uni_indicator_pane_g4_ParamLimits

0x2f89,	// (0x000170c1) uni_indicator_pane_g4

0x2f9d,	// (0x000170d5) uni_indicator_pane_g5_ParamLimits

0x2f9d,	// (0x000170d5) uni_indicator_pane_g5

0x2f9d,	// (0x000170d5) uni_indicator_pane_g6_ParamLimits

0x2f9d,	// (0x000170d5) uni_indicator_pane_g6

0xf906,	// (0x00023a3e) uni_indicator_pane_g_ParamLimits

0xcfbd,	// (0x000210f5) popup_tmo_note_window_ParamLimits

0xcfbd,	// (0x000210f5) popup_tmo_note_window

0xf1f1,	// (0x00023329) fshwr2_bg_pane

0x9c10,	// (0x0001dd48) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9c10,	// (0x0001dd48) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea8,	// (0x00023fe0) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea8,	// (0x00023fe0) fshwr2_func_candi_cell_pane_g

0xef2d,	// (0x00023065) bg_popup_window_pane_cp01

0xf545,	// (0x0002367d) bg_popup_window_pane_g1_cp01

0x7667,	// (0x0001b79f) bg_popup_window_pane_cp22_ParamLimits

0x7667,	// (0x0001b79f) bg_popup_window_pane_cp22

0xdd5f,	// (0x00021e97) listscroll_tmo_link_pane_ParamLimits

0xdd5f,	// (0x00021e97) listscroll_tmo_link_pane

0x76b5,	// (0x0001b7ed) popup_tmo_note_window_g1_ParamLimits

0x76b5,	// (0x0001b7ed) popup_tmo_note_window_g1

0xdd9f,	// (0x00021ed7) tmo_note_info_pane_ParamLimits

0xdd9f,	// (0x00021ed7) tmo_note_info_pane

0xddb9,	// (0x00021ef1) list_tmo_note_info_pane_g1_ParamLimits

0xddb9,	// (0x00021ef1) list_tmo_note_info_pane_g1

0x76f3,	// (0x0001b82b) list_tmo_note_info_pane_g2_ParamLimits

0x76f3,	// (0x0001b82b) list_tmo_note_info_pane_g2

0x0001,

0xfead,	// (0x00023fe5) list_tmo_note_info_pane_g_ParamLimits

0xfead,	// (0x00023fe5) list_tmo_note_info_pane_g

0x770f,	// (0x0001b847) list_tmo_note_info_text_pane_ParamLimits

0x770f,	// (0x0001b847) list_tmo_note_info_text_pane

0x7790,	// (0x0001b8c8) list_tmo_link_pane

0x779d,	// (0x0001b8d5) scroll_pane_cp20

0x77aa,	// (0x0001b8e2) list_single_tmo_link_pane_ParamLimits

0x77aa,	// (0x0001b8e2) list_single_tmo_link_pane

0x77ba,	// (0x0001b8f2) list_single_tmo_link_pane_t1

0x77c8,	// (0x0001b900) list_tmo_note_info_text_pane_t1_ParamLimits

0x77c8,	// (0x0001b900) list_tmo_note_info_text_pane_t1

0xa7ef,	// (0x0001e927) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa7ef,	// (0x0001e927) aid_size_touch_scroll_bar_cp01

0xa6ef,	// (0x0001e827) aid_size_touch_slider_marker

0x8902,	// (0x0001ca3a) popup_settings_window_ParamLimits

0x8902,	// (0x0001ca3a) popup_settings_window

0x17dc,	// (0x00015914) popup_candi_list_indi_window

0x182c,	// (0x00015964) aid_touch_navi_pane_ParamLimits

0xf0a4,	// (0x000231dc) rs_clock_indi_pane

0xf0ad,	// (0x000231e5) sctrl_sk_bottom_pane_ParamLimits

0xf0be,	// (0x000231f6) sctrl_sk_top_pane_ParamLimits

0x9738,	// (0x0001d870) popup_fep_tooltip_window

0x7183,	// (0x0001b2bb) aid_size_cell_widget_grid_ParamLimits

0x71f0,	// (0x0001b328) cell_ai5_widget_pane_g1_ParamLimits

0x71f0,	// (0x0001b328) cell_ai5_widget_pane_g1

0x7244,	// (0x0001b37c) cell_ai5_widget_pane_g6_ParamLimits

0x7250,	// (0x0001b388) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2b,	// (0x00023f63) cell_ai5_widget_pane_g_ParamLimits

0xfe2b,	// (0x00023f63) cell_ai5_widget_pane_g

0x7382,	// (0x0001b4ba) cell_ai5_widget_pane_t10_ParamLimits

0x7382,	// (0x0001b4ba) cell_ai5_widget_pane_t10

0x73a0,	// (0x0001b4d8) grid_ai5_widget_pane_ParamLimits

0x7438,	// (0x0001b570) cell_contacts_ai5_widget_pane_ParamLimits

0x7438,	// (0x0001b570) cell_contacts_ai5_widget_pane

0x7612,	// (0x0001b74a) popup_discreet_window_t3_ParamLimits

0x7612,	// (0x0001b74a) popup_discreet_window_t3

0x9b73,	// (0x0001dcab) popup_fshwr2_char_preview_window_ParamLimits

0x9b73,	// (0x0001dcab) popup_fshwr2_char_preview_window

0xddd0,	// (0x00021f08) tmo_note_info_pane_t1

0xdde5,	// (0x00021f1d) tmo_note_info_pane_t2

0xddfc,	// (0x00021f34) tmo_note_info_pane_t3

0x776c,	// (0x0001b8a4) tmo_note_info_pane_t4

0x777e,	// (0x0001b8b6) tmo_note_info_pane_t5

0x0004,

0xfeb2,	// (0x00023fea) tmo_note_info_pane_t

0x7790,	// (0x0001b8c8) list_tmo_link_pane_ParamLimits

0x779d,	// (0x0001b8d5) scroll_pane_cp20_ParamLimits

0xe1b2,	// (0x000222ea) bg_popup_fep_char_preview_window_cp01

0xde11,	// (0x00021f49) popup_fshwr2_char_preview_window_t1

0x77ef,	// (0x0001b927) popup_candi_list_indi_window_g1

0x77f8,	// (0x0001b930) bg_cell_contacts_ai5_widget_pane

0x7804,	// (0x0001b93c) cell_contacts_ai5_widget_pane_g1

0x5072,	// (0x000191aa) cell_contacts_ai5_widget_pane_g2

0x7819,	// (0x0001b951) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebd,	// (0x00023ff5) cell_contacts_ai5_widget_pane_g

0x7825,	// (0x0001b95d) cell_contacts_ai5_widget_pane_t1

0xc789,	// (0x000208c1) highlight_cell_shortcut_ai5_widget_pane_cp01

0x789c,	// (0x0001b9d4) settings_container_pane

0x146f,	// (0x000155a7) listscroll_set_pane_copy1

0x3bcf,	// (0x00017d07) scroll_pane_cp121_copy1

0x2219,	// (0x00016351) set_content_pane_copy1

0xde84,	// (0x00021fbc) aid_height_set_list_copy1_ParamLimits

0xde84,	// (0x00021fbc) aid_height_set_list_copy1

0x31a7,	// (0x000172df) aid_size_parent_copy1_ParamLimits

0x31a7,	// (0x000172df) aid_size_parent_copy1

0xde90,	// (0x00021fc8) button_value_adjust_pane_cp6_copy1_ParamLimits

0xde90,	// (0x00021fc8) button_value_adjust_pane_cp6_copy1

0x17c2,	// (0x000158fa) list_highlight_pane_cp2_copy1_ParamLimits

0x17c2,	// (0x000158fa) list_highlight_pane_cp2_copy1

0xdea4,	// (0x00021fdc) list_set_pane_copy1_ParamLimits

0xdea4,	// (0x00021fdc) list_set_pane_copy1

0xde1f,	// (0x00021f57) main_pane_set_t1_copy1_ParamLimits

0xde1f,	// (0x00021f57) main_pane_set_t1_copy1

0xde59,	// (0x00021f91) main_pane_set_t2_copy1_ParamLimits

0xde59,	// (0x00021f91) main_pane_set_t2_copy1

0xdf51,	// (0x00022089) main_pane_set_t3_copy1

0xdf5f,	// (0x00022097) main_pane_set_t4_copy1

0xde78,	// (0x00021fb0) set_content_pane_g1_copy1_ParamLimits

0xde78,	// (0x00021fb0) set_content_pane_g1_copy1

0xdf6d,	// (0x000220a5) setting_code_pane_copy1

0x7999,	// (0x0001bad1) setting_slider_graphic_pane_copy1

0x7999,	// (0x0001bad1) setting_slider_pane_copy1

0x7999,	// (0x0001bad1) setting_text_pane_copy1

0x7999,	// (0x0001bad1) setting_volume_pane_copy1

0xdf6d,	// (0x000220a5) settings_code_pane_cp2_copy1

0xdf75,	// (0x000220ad) settings_code_pane_cp_copy1_ParamLimits

0xdf75,	// (0x000220ad) settings_code_pane_cp_copy1

0x9c51,	// (0x0001dd89) volume_set_pane_copy1

0xdf89,	// (0x000220c1) volume_set_pane_g10_copy1

0xdf91,	// (0x000220c9) volume_set_pane_g1_copy1

0xdf99,	// (0x000220d1) volume_set_pane_g2_copy1

0xdfa1,	// (0x000220d9) volume_set_pane_g3_copy1

0xdfa9,	// (0x000220e1) volume_set_pane_g4_copy1

0xdfb1,	// (0x000220e9) volume_set_pane_g5_copy1

0xdfb9,	// (0x000220f1) volume_set_pane_g6_copy1

0xdfc1,	// (0x000220f9) volume_set_pane_g7_copy1

0xdfc9,	// (0x00022101) volume_set_pane_g8_copy1

0xdfd1,	// (0x00022109) volume_set_pane_g9_copy1

0xc35f,	// (0x00020497) bg_set_opt_pane_cp_copy1_ParamLimits

0xc35f,	// (0x00020497) bg_set_opt_pane_cp_copy1

0x9c59,	// (0x0001dd91) setting_slider_pane_t1_copy1_ParamLimits

0x9c59,	// (0x0001dd91) setting_slider_pane_t1_copy1

0x9c77,	// (0x0001ddaf) setting_slider_pane_t2_copy1_ParamLimits

0x9c77,	// (0x0001ddaf) setting_slider_pane_t2_copy1

0x9c91,	// (0x0001ddc9) setting_slider_pane_t3_copy1_ParamLimits

0x9c91,	// (0x0001ddc9) setting_slider_pane_t3_copy1

0x9ca9,	// (0x0001dde1) slider_set_pane_copy1_ParamLimits

0x9ca9,	// (0x0001dde1) slider_set_pane_copy1

0xc84f,	// (0x00020987) set_opt_bg_pane_g1_copy2

0xc857,	// (0x0002098f) set_opt_bg_pane_g2_copy2

0x7a05,	// (0x0001bb3d) set_opt_bg_pane_g3_copy2

0xc867,	// (0x0002099f) set_opt_bg_pane_g4_copy2

0xc86f,	// (0x000209a7) set_opt_bg_pane_g5_copy2

0xc877,	// (0x000209af) set_opt_bg_pane_g6_copy2

0xdfd9,	// (0x00022111) set_opt_bg_pane_g7_copy2

0x7a17,	// (0x0001bb4f) set_opt_bg_pane_g8_copy2

0x7a21,	// (0x0001bb59) set_opt_bg_pane_g9_copy2

0x9cbf,	// (0x0001ddf7) aid_size_touch_slider_mark_copy1_ParamLimits

0x9cbf,	// (0x0001ddf7) aid_size_touch_slider_mark_copy1

0xdfe1,	// (0x00022119) slider_set_pane_g1_copy1

0x0063,	// (0x0001419b) slider_set_pane_g2_copy1

0x952b,	// (0x0001d663) slider_set_pane_g3_copy1_ParamLimits

0x952b,	// (0x0001d663) slider_set_pane_g3_copy1

0x953f,	// (0x0001d677) slider_set_pane_g4_copy1_ParamLimits

0x953f,	// (0x0001d677) slider_set_pane_g4_copy1

0x9557,	// (0x0001d68f) slider_set_pane_g5_copy1_ParamLimits

0x9557,	// (0x0001d68f) slider_set_pane_g5_copy1

0x952b,	// (0x0001d663) slider_set_pane_g6_copy1_ParamLimits

0x952b,	// (0x0001d663) slider_set_pane_g6_copy1

0x9cd3,	// (0x0001de0b) slider_set_pane_g7_copy1_ParamLimits

0x9cd3,	// (0x0001de0b) slider_set_pane_g7_copy1

0xc303,	// (0x0002043b) bg_set_opt_pane_cp2_copy1

0xdfea,	// (0x00022122) setting_slider_graphic_pane_g1_copy1

0xdff3,	// (0x0002212b) setting_slider_graphic_pane_t1_copy1

0xe003,	// (0x0002213b) setting_slider_graphic_pane_t2_copy1

0xe013,	// (0x0002214b) slider_set_pane_cp_copy1

0x7a6d,	// (0x0001bba5) input_focus_pane_cp1_copy1

0x7a76,	// (0x0001bbae) list_set_text_pane_copy1

0x7a7e,	// (0x0001bbb6) setting_text_pane_g1_copy1

0x7a87,	// (0x0001bbbf) set_text_pane_t1_copy1

0x7a6d,	// (0x0001bba5) input_focus_pane_cp2_copy1

0x7a7e,	// (0x0001bbb6) setting_code_pane_g1_copy1

0x7aa2,	// (0x0001bbda) setting_code_pane_t1_copy1

0x7ab0,	// (0x0001bbe8) list_set_graphic_pane_copy1

0xc303,	// (0x0002043b) bg_set_opt_pane_cp4_copy1

0x117a,	// (0x000152b2) list_set_graphic_pane_g1_copy1_ParamLimits

0x117a,	// (0x000152b2) list_set_graphic_pane_g1_copy1

0x7ac4,	// (0x0001bbfc) list_set_graphic_pane_g2_copy1

0x1192,	// (0x000152ca) list_set_graphic_pane_t1_copy1_ParamLimits

0x1192,	// (0x000152ca) list_set_graphic_pane_t1_copy1

0x47fc,	// (0x00018934) rs_clock_indi_pane_g1

0x7acc,	// (0x0001bc04) rs_clock_indi_pane_t1

0x7ada,	// (0x0001bc12) rs_indi_pane

0x7ae2,	// (0x0001bc1a) rs_indi_pane_g1

0x7aeb,	// (0x0001bc23) rs_indi_pane_g2

0x77ef,	// (0x0001b927) rs_indi_pane_g3

0x0002,

0xfec4,	// (0x00023ffc) rs_indi_pane_g

0x146f,	// (0x000155a7) bg_popup_preview_window_pane_cp03

0x7af4,	// (0x0001bc2c) popup_fep_tooltip_window_t1

0xcabb,	// (0x00020bf3) popup_note2_window_g2_ParamLimits

0xcabb,	// (0x00020bf3) popup_note2_window_g2

0x0001,

0xfc64,	// (0x00023d9c) popup_note2_window_g_ParamLimits

0xfc64,	// (0x00023d9c) popup_note2_window_g

0x5cb0,	// (0x00019de8) bg_popup_sub_pane_cp11_ParamLimits

0x5cbd,	// (0x00019df5) cell_ai3_links_pane_g1_ParamLimits

0x5cd4,	// (0x00019e0c) cell_ai3_links_pane_t1

0x7a87,	// (0x0001bbbf) set_text_pane_t1_copy1_ParamLimits

0x1380,	// (0x000154b8) cell_graphic_popup_pane_cp2_ParamLimits

0x1380,	// (0x000154b8) cell_graphic_popup_pane_cp2

0xe023,	// (0x0002215b) cell_graphic_popup_pane_g1_cp2

0xc5f9,	// (0x00020731) cell_graphic_popup_pane_g2_cp2

0x7b0a,	// (0x0001bc42) cell_graphic_popup_pane_g3_cp2

0xe02b,	// (0x00022163) cell_graphic_popup_pane_t2_cp2

0xc60a,	// (0x00020742) grid_highlight_pane_cp3_cp2

0xe48d,	// (0x000225c5) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc789,	// (0x000208c1) main_tmo_pane_ParamLimits

0xcfb1,	// (0x000210e9) popup_tmo_big_image_note_window

0x71df,	// (0x0001b317) cell_ai5_widget_list_pane

0x71e7,	// (0x0001b31f) cell_ai5_widget_lrg_icon_pane

0xddd0,	// (0x00021f08) tmo_note_info_pane_t1_ParamLimits

0xdde5,	// (0x00021f1d) tmo_note_info_pane_t2_ParamLimits

0xddfc,	// (0x00021f34) tmo_note_info_pane_t3_ParamLimits

0x776c,	// (0x0001b8a4) tmo_note_info_pane_t4_ParamLimits

0x777e,	// (0x0001b8b6) tmo_note_info_pane_t5_ParamLimits

0xfeb2,	// (0x00023fea) tmo_note_info_pane_t_ParamLimits

0x789c,	// (0x0001b9d4) settings_container_pane_ParamLimits

0xe01b,	// (0x00022153) indicator_popup_pane_cp5

0xe01b,	// (0x00022153) indicator_popup_pane_cp6

0x7ab0,	// (0x0001bbe8) list_set_graphic_pane_copy1_ParamLimits

0xc2ef,	// (0x00020427) bg_popup_window_pane_cp23

0x7b20,	// (0x0001bc58) popup_tmo_big_image_note_window_g1

0x7b29,	// (0x0001bc61) popup_tmo_big_image_note_window_t1

0x7b39,	// (0x0001bc71) popup_tmo_big_image_note_window_t2

0x7b49,	// (0x0001bc81) popup_tmo_big_image_note_window_t3

0x0002,

0xfecb,	// (0x00024003) popup_tmo_big_image_note_window_t

0x47fc,	// (0x00018934) cell_ai5_widget_lrg_icon_pane_g1

0x7b59,	// (0x0001bc91) cell_ai5_widget_lrg_icon_pane_t1

0x7b67,	// (0x0001bc9f) cell_ai5_widget_list_row_pane_ParamLimits

0x7b67,	// (0x0001bc9f) cell_ai5_widget_list_row_pane

0x7b7e,	// (0x0001bcb6) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7b7e,	// (0x0001bcb6) cell_ai5_widget_list_row_pane_g1

0xe039,	// (0x00022171) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe039,	// (0x00022171) cell_ai5_widget_list_row_pane_t1

0x7bb6,	// (0x0001bcee) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7bb6,	// (0x0001bcee) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed2,	// (0x0002400a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed2,	// (0x0002400a) cell_ai5_widget_list_row_pane_t

0xe1b2,	// (0x000222ea) main_fep_vtchi_ss_pane

0x7bfa,	// (0x0001bd32) popup_fep_char_pre_window

0x7c02,	// (0x0001bd3a) popup_fep_ituss_window

0xe079,	// (0x000221b1) popup_fep_vkbss_window

0xe086,	// (0x000221be) grid_vkbss_keypad_pane_ParamLimits

0xe086,	// (0x000221be) grid_vkbss_keypad_pane

0x7c5d,	// (0x0001bd95) ituss_keypad_pane

0x008d,	// (0x000141c5) aid_vkbss_key_offset_ParamLimits

0x008d,	// (0x000141c5) aid_vkbss_key_offset

0x9ce9,	// (0x0001de21) cell_vkbss_key_pane_ParamLimits

0x9ce9,	// (0x0001de21) cell_vkbss_key_pane

0x1b43,	// (0x00015c7b) bg_cell_vkbss_key_g1_ParamLimits

0x1b43,	// (0x00015c7b) bg_cell_vkbss_key_g1

0xe096,	// (0x000221ce) cell_vkbss_key_3p_pane_ParamLimits

0xe096,	// (0x000221ce) cell_vkbss_key_3p_pane

0xe0b0,	// (0x000221e8) cell_vkbss_key_g1_ParamLimits

0xe0b0,	// (0x000221e8) cell_vkbss_key_g1

0xe0ca,	// (0x00022202) cell_vkbss_key_t1_ParamLimits

0xe0ca,	// (0x00022202) cell_vkbss_key_t1

0x00af,	// (0x000141e7) cell_ituss_key_pane_ParamLimits

0x00af,	// (0x000141e7) cell_ituss_key_pane

0x7cbf,	// (0x0001bdf7) bg_cell_ituss_key_g1_ParamLimits

0x7cbf,	// (0x0001bdf7) bg_cell_ituss_key_g1

0x7ccb,	// (0x0001be03) cell_ituss_key_pane_g1_ParamLimits

0x7ccb,	// (0x0001be03) cell_ituss_key_pane_g1

0x00c0,	// (0x000141f8) cell_ituss_key_pane_g2_ParamLimits

0x00c0,	// (0x000141f8) cell_ituss_key_pane_g2

0x0002,

0xfed9,	// (0x00024011) cell_ituss_key_pane_g_ParamLimits

0xfed9,	// (0x00024011) cell_ituss_key_pane_g

0x00ec,	// (0x00014224) cell_ituss_key_t1_ParamLimits

0x00ec,	// (0x00014224) cell_ituss_key_t1

0x0126,	// (0x0001425e) cell_ituss_key_t2_ParamLimits

0x0126,	// (0x0001425e) cell_ituss_key_t2

0x0157,	// (0x0001428f) cell_ituss_key_t3_ParamLimits

0x0157,	// (0x0001428f) cell_ituss_key_t3

0x0126,	// (0x0001425e) cell_ituss_key_t4_ParamLimits

0x0126,	// (0x0001425e) cell_ituss_key_t4

0x0004,

0xfee0,	// (0x00024018) cell_ituss_key_t_ParamLimits

0xfee0,	// (0x00024018) cell_ituss_key_t

0x7cf1,	// (0x0001be29) cell_vkbss_key_3p_pane_g1

0x7cf9,	// (0x0001be31) cell_vkbss_key_3p_pane_g2

0x7d01,	// (0x0001be39) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeeb,	// (0x00024023) cell_vkbss_key_3p_pane_g

0xe1b2,	// (0x000222ea) bg_popup_fep_char_preview_window_cp02

0x019a,	// (0x000142d2) popup_fep_char_pre_window_t1

0xdc6c,	// (0x00021da4) main_ai5_sk_pane

0x77f8,	// (0x0001b930) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7804,	// (0x0001b93c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x5072,	// (0x000191aa) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7819,	// (0x0001b951) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebd,	// (0x00023ff5) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7825,	// (0x0001b95d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc789,	// (0x000208c1) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe0f5,	// (0x0002222d) main_ai5_sk_pane_g1

0xb41a,	// (0x0001f552) popup_query_code_window_g1

0x7c18,	// (0x0001bd50) popup_fep_vkb_icf_pane

0x7c37,	// (0x0001bd6f) popup_fep_vtchi_icf_pane

0x7d12,	// (0x0001be4a) bg_icf_pane

0x7d1e,	// (0x0001be56) list_vkb_icf_pane

0x7d2d,	// (0x0001be65) bg_icf_pane_cp01

0x7d40,	// (0x0001be78) vtchi_icf_list_pane

0x7d50,	// (0x0001be88) list_vkb_icf_pane_t1_ParamLimits

0x7d50,	// (0x0001be88) list_vkb_icf_pane_t1

0x7d67,	// (0x0001be9f) vtchi_icf_list_pane_t1_ParamLimits

0x7d67,	// (0x0001be9f) vtchi_icf_list_pane_t1

0x7c02,	// (0x0001bd3a) popup_fep_ituss_window_ParamLimits

0x7c37,	// (0x0001bd6f) popup_fep_vtchi_icf_pane_ParamLimits

0x7c5d,	// (0x0001bd95) ituss_keypad_pane_ParamLimits

0x0081,	// (0x000141b9) ituss_sks_pane

0x7d12,	// (0x0001be4a) bg_icf_pane_ParamLimits

0xe06a,	// (0x000221a2) icf_edit_indi_pane_ParamLimits

0xe06a,	// (0x000221a2) icf_edit_indi_pane

0x7d1e,	// (0x0001be56) list_vkb_icf_pane_ParamLimits

0x7d2d,	// (0x0001be65) bg_icf_pane_cp01_ParamLimits

0x7bed,	// (0x0001bd25) icf_edit_indi_pane_cp01_ParamLimits

0x7bed,	// (0x0001bd25) icf_edit_indi_pane_cp01

0x7d48,	// (0x0001be80) vtchi_query_pane

0x4a6c,	// (0x00018ba4) icf_edit_indi_pane_g1_ParamLimits

0x4a6c,	// (0x00018ba4) icf_edit_indi_pane_g1

0x7ddc,	// (0x0001bf14) icf_edit_indi_pane_g2_ParamLimits

0x7ddc,	// (0x0001bf14) icf_edit_indi_pane_g2

0x0001,

0xff03,	// (0x0002403b) icf_edit_indi_pane_g_ParamLimits

0xff03,	// (0x0002403b) icf_edit_indi_pane_g

0x7deb,	// (0x0001bf23) icf_edit_indi_pane_t1

0x7d85,	// (0x0001bebd) bg_input_focus_pane_cp042

0xc66d,	// (0x000207a5) vtchi_button_pane

0x7d8e,	// (0x0001bec6) vtchi_query_pane_t1

0x7d9c,	// (0x0001bed4) vtchi_query_pane_t2

0x7daa,	// (0x0001bee2) vtchi_query_pane_t3

0x0002,

0xfef2,	// (0x0002402a) vtchi_query_pane_t

0xe1b2,	// (0x000222ea) bg_button_pane_cp13

0x7db8,	// (0x0001bef0) vtchi_button_pane_g1

0x01a9,	// (0x000142e1) ituss_sks_pane_g1

0x01b4,	// (0x000142ec) ituss_sks_pane_g2

0x0001,

0xfef9,	// (0x00024031) ituss_sks_pane_g

0x7dc0,	// (0x0001bef8) ituss_sks_pane_t1

0x7dce,	// (0x0001bf06) ituss_sks_pane_t2

0x0001,

0xfefe,	// (0x00024036) ituss_sks_pane_t

0x422c,	// (0x00018364) indicator_nsta_pane_cp_g1

0x4234,	// (0x0001836c) indicator_nsta_pane_cp_g2

0x423c,	// (0x00018374) indicator_nsta_pane_cp_g3

0x422c,	// (0x00018364) indicator_nsta_pane_cp_g4

0x4234,	// (0x0001836c) indicator_nsta_pane_cp_g5

0x423c,	// (0x00018374) indicator_nsta_pane_cp_g6

0x0005,

0xfaa2,	// (0x00023bda) indicator_nsta_pane_cp_g

0xda49,	// (0x00021b81) cell_graphic2_pane_t2_ParamLimits

0xda49,	// (0x00021b81) cell_graphic2_pane_t2

0x0001,

0xfdb4,	// (0x00023eec) cell_graphic2_pane_t_ParamLimits

0xfdb4,	// (0x00023eec) cell_graphic2_pane_t

0xda82,	// (0x00021bba) cell_graphic2_control_pane_t1

0xaa98,	// (0x0001ebd0) signal_pane_g3_ParamLimits

0xaa98,	// (0x0001ebd0) signal_pane_g3

0xaaac,	// (0x0001ebe4) signal_pane_g4_ParamLimits

0xaaac,	// (0x0001ebe4) signal_pane_g4

0x7bc8,	// (0x0001bd00) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7bc8,	// (0x0001bd00) cell_ai5_widget_list_row_pane_t3

0x7cdf,	// (0x0001be17) cell_ituss_key_pane_t1_ParamLimits

0x7cdf,	// (0x0001be17) cell_ituss_key_pane_t1

0x1ea7,	// (0x00015fdf) form_field_data_wide_pane_vc_t2_ParamLimits

0x1ea7,	// (0x00015fdf) form_field_data_wide_pane_vc_t2

0x1ebb,	// (0x00015ff3) form_field_data_wide_pane_vc_t3_ParamLimits

0x1ebb,	// (0x00015ff3) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ee,	// (0x00023926) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ee,	// (0x00023926) form_field_data_wide_pane_vc_t

0x3ef4,	// (0x0001802c) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3ef4,	// (0x0001802c) form_field_slider_wide_pane_vc_t3

0x3fd2,	// (0x0001810a) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3fd2,	// (0x0001810a) form_field_popup_wide_pane_vc_t2

0x3fe9,	// (0x00018121) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3fe9,	// (0x00018121) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa91,	// (0x00023bc9) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa91,	// (0x00023bc9) form_field_popup_wide_pane_vc_t

0x9aee,	// (0x0001dc26) aid_fshwr2_btn_pane_ParamLimits

0x9b00,	// (0x0001dc38) aid_fshwr2_syb_pane_ParamLimits

0x9b12,	// (0x0001dc4a) aid_fshwr2_txt_pane_ParamLimits

0xf1f1,	// (0x00023329) fshwr2_bg_pane_ParamLimits

0x9b21,	// (0x0001dc59) fshwr2_func_candi_pane_ParamLimits

0x9b40,	// (0x0001dc78) fshwr2_hwr_syb_pane_ParamLimits

0x9b5b,	// (0x0001dc93) fshwr2_icf_pane_ParamLimits

0x3e65,	// (0x00017f9d) list_double_graphic_pane_vc_g4_ParamLimits

0x3e65,	// (0x00017f9d) list_double_graphic_pane_vc_g4

0x00e0,	// (0x00014218) cell_ituss_key_pane_g3_ParamLimits

0x00e0,	// (0x00014218) cell_ituss_key_pane_g3

0x0188,	// (0x000142c0) cell_ituss_key_t5_ParamLimits

0x0188,	// (0x000142c0) cell_ituss_key_t5

0xe079,	// (0x000221b1) popup_fep_vkbss_window_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal

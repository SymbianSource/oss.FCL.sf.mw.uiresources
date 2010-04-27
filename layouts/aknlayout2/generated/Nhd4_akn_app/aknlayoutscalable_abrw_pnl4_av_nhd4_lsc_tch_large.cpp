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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0004eb33 };

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
0xcf56,	// (0x0005ba89) Screen

0xcf62,	// (0x0005ba95) application_window_ParamLimits

0xcf62,	// (0x0005ba95) application_window

0x36c4,	// (0x000521f7) screen_g1

0xb703,	// (0x0005a236) area_bottom_pane_ParamLimits

0xb703,	// (0x0005a236) area_bottom_pane

0x0204,	// (0x0004ed37) area_top_pane_ParamLimits

0x0204,	// (0x0004ed37) area_top_pane

0x02a2,	// (0x0004edd5) main_pane_ParamLimits

0x02a2,	// (0x0004edd5) main_pane

0x36ce,	// (0x00052201) misc_graphics

0xd712,	// (0x0005c245) battery_pane_ParamLimits

0xd712,	// (0x0005c245) battery_pane

0x5d2b,	// (0x0005485e) bg_status_flat_pane_g8

0x5d33,	// (0x00054866) bg_status_flat_pane_g9

0x510e,	// (0x00053c41) context_pane_ParamLimits

0x510e,	// (0x00053c41) context_pane

0xd927,	// (0x0005c45a) navi_pane_ParamLimits

0xd927,	// (0x0005c45a) navi_pane

0xd9a5,	// (0x0005c4d8) signal_pane_ParamLimits

0xd9a5,	// (0x0005c4d8) signal_pane

0x0008,

0xf874,	// (0x0005e3a7) bg_status_flat_pane_g

0xda35,	// (0x0005c568) status_pane_g1_ParamLimits

0xda35,	// (0x0005c568) status_pane_g1

0xda4b,	// (0x0005c57e) status_pane_g2_ParamLimits

0xda4b,	// (0x0005c57e) status_pane_g2

0x532d,	// (0x00053e60) status_pane_g3_ParamLimits

0x532d,	// (0x00053e60) status_pane_g3

0x0004,

0xf7a0,	// (0x0005e2d3) status_pane_g_ParamLimits

0xf7a0,	// (0x0005e2d3) status_pane_g

0xda57,	// (0x0005c58a) title_pane_ParamLimits

0xda57,	// (0x0005c58a) title_pane

0xdaba,	// (0x0005c5ed) uni_indicator_pane_ParamLimits

0xdaba,	// (0x0005c5ed) uni_indicator_pane

0x4f74,	// (0x00053aa7) bg_list_pane_ParamLimits

0x4f74,	// (0x00053aa7) bg_list_pane

0xd685,	// (0x0005c1b8) find_pane

0xbf8c,	// (0x0005aabf) listscroll_app_pane_ParamLimits

0xbf8c,	// (0x0005aabf) listscroll_app_pane

0x4fa0,	// (0x00053ad3) listscroll_form_pane

0x129b,	// (0x0004fdce) listscroll_gen_pane_ParamLimits

0x129b,	// (0x0004fdce) listscroll_gen_pane

0x12af,	// (0x0004fde2) listscroll_set_pane

0x68a7,	// (0x000553da) main_idle_act_pane

0x4c80,	// (0x000537b3) main_idle_trad_pane

0x4c80,	// (0x000537b3) main_list_empty_pane

0x4fba,	// (0x00053aed) main_midp_pane

0x4fc6,	// (0x00053af9) main_pane_g1_ParamLimits

0x4fc6,	// (0x00053af9) main_pane_g1

0xbf9c,	// (0x0005aacf) popup_ai_message_window_ParamLimits

0xbf9c,	// (0x0005aacf) popup_ai_message_window

0xc02d,	// (0x0005ab60) popup_fep_china_uni_window_ParamLimits

0xc02d,	// (0x0005ab60) popup_fep_china_uni_window

0x13cb,	// (0x0004fefe) popup_fep_japan_candidate_window_ParamLimits

0x13cb,	// (0x0004fefe) popup_fep_japan_candidate_window

0x13e9,	// (0x0004ff1c) popup_fep_japan_predictive_window_ParamLimits

0x13e9,	// (0x0004ff1c) popup_fep_japan_predictive_window

0xc087,	// (0x0005abba) popup_find_window

0xc0a4,	// (0x0005abd7) popup_grid_graphic_window_ParamLimits

0xc0a4,	// (0x0005abd7) popup_grid_graphic_window

0x144e,	// (0x0004ff81) popup_large_graphic_colour_window

0xc13c,	// (0x0005ac6f) popup_menu_window_ParamLimits

0xc13c,	// (0x0005ac6f) popup_menu_window

0xc308,	// (0x0005ae3b) popup_note_image_window

0xc2ce,	// (0x0005ae01) popup_note_wait_window_ParamLimits

0xc2ce,	// (0x0005ae01) popup_note_wait_window

0xc320,	// (0x0005ae53) popup_note_window_ParamLimits

0xc320,	// (0x0005ae53) popup_note_window

0xc3c6,	// (0x0005aef9) popup_query_code_window_ParamLimits

0xc3c6,	// (0x0005aef9) popup_query_code_window

0x1698,	// (0x000501cb) popup_query_data_code_window_ParamLimits

0x1698,	// (0x000501cb) popup_query_data_code_window

0xc400,	// (0x0005af33) popup_query_data_window_ParamLimits

0xc400,	// (0x0005af33) popup_query_data_window

0xc47c,	// (0x0005afaf) popup_query_sat_info_window_ParamLimits

0xc47c,	// (0x0005afaf) popup_query_sat_info_window

0xc513,	// (0x0005b046) popup_snote_single_graphic_window_ParamLimits

0xc513,	// (0x0005b046) popup_snote_single_graphic_window

0xc513,	// (0x0005b046) popup_snote_single_text_window_ParamLimits

0xc513,	// (0x0005b046) popup_snote_single_text_window

0x171b,	// (0x0005024e) popup_sub_window_general

0x1849,	// (0x0005037c) popup_window_general_ParamLimits

0x1849,	// (0x0005037c) popup_window_general

0x4fd4,	// (0x00053b07) power_save_pane

0xbe1b,	// (0x0005a94e) control_pane_g1_ParamLimits

0xbe1b,	// (0x0005a94e) control_pane_g1

0xbe44,	// (0x0005a977) control_pane_g2_ParamLimits

0xbe44,	// (0x0005a977) control_pane_g2

0x4f37,	// (0x00053a6a) control_pane_g3_ParamLimits

0x4f37,	// (0x00053a6a) control_pane_g3

0x0007,

0xf788,	// (0x0005e2bb) control_pane_g_ParamLimits

0xf788,	// (0x0005e2bb) control_pane_g

0xbe85,	// (0x0005a9b8) control_pane_t1_ParamLimits

0xbe85,	// (0x0005a9b8) control_pane_t1

0xbee3,	// (0x0005aa16) control_pane_t2_ParamLimits

0xbee3,	// (0x0005aa16) control_pane_t2

0x0002,

0xf799,	// (0x0005e2cc) control_pane_t_ParamLimits

0xf799,	// (0x0005e2cc) control_pane_t

0xd5b7,	// (0x0005c0ea) navi_navi_volume_pane_cp1

0xd5bf,	// (0x0005c0f2) status_small_icon_pane

0x4e6c,	// (0x0005399f) status_small_pane_g1_ParamLimits

0x4e6c,	// (0x0005399f) status_small_pane_g1

0xd5c7,	// (0x0005c0fa) status_small_pane_g2_ParamLimits

0xd5c7,	// (0x0005c0fa) status_small_pane_g2

0xd5d3,	// (0x0005c106) status_small_pane_g3_ParamLimits

0xd5d3,	// (0x0005c106) status_small_pane_g3

0xd5df,	// (0x0005c112) status_small_pane_g4_ParamLimits

0xd5df,	// (0x0005c112) status_small_pane_g4

0xd5eb,	// (0x0005c11e) status_small_pane_g5_ParamLimits

0xd5eb,	// (0x0005c11e) status_small_pane_g5

0xd5f9,	// (0x0005c12c) status_small_pane_g6_ParamLimits

0xd5f9,	// (0x0005c12c) status_small_pane_g6

0x0007,

0xf777,	// (0x0005e2aa) status_small_pane_g_ParamLimits

0xf777,	// (0x0005e2aa) status_small_pane_g

0xd628,	// (0x0005c15b) status_small_pane_t1

0xd64a,	// (0x0005c17d) status_small_wait_pane_ParamLimits

0xd64a,	// (0x0005c17d) status_small_wait_pane

0xd422,	// (0x0005bf55) aid_levels_signal_ParamLimits

0xd422,	// (0x0005bf55) aid_levels_signal

0xd43a,	// (0x0005bf6d) signal_pane_g1_ParamLimits

0xd43a,	// (0x0005bf6d) signal_pane_g1

0xd455,	// (0x0005bf88) signal_pane_g2_ParamLimits

0xd455,	// (0x0005bf88) signal_pane_g2

0x0003,

0xf708,	// (0x0005e23b) signal_pane_g_ParamLimits

0xf708,	// (0x0005e23b) signal_pane_g

0x473f,	// (0x00053272) context_pane_g1

0xcf72,	// (0x0005baa5) title_pane_g1

0xcfa9,	// (0x0005badc) title_pane_t1

0x3776,	// (0x000522a9) title_pane_t2

0x379c,	// (0x000522cf) title_pane_t3

0x0002,

0xf557,	// (0x0005e08a) title_pane_t

0xdae2,	// (0x0005c615) aid_levels_battery_ParamLimits

0xdae2,	// (0x0005c615) aid_levels_battery

0xdafe,	// (0x0005c631) battery_pane_g1_ParamLimits

0xdafe,	// (0x0005c631) battery_pane_g1

0xdb1b,	// (0x0005c64e) battery_pane_g2_ParamLimits

0xdb1b,	// (0x0005c64e) battery_pane_g2

0x0001,

0xf7ab,	// (0x0005e2de) battery_pane_g_ParamLimits

0xf7ab,	// (0x0005e2de) battery_pane_g

0xdd00,	// (0x0005c833) uni_indicator_pane_g1

0xdd16,	// (0x0005c849) uni_indicator_pane_g2

0xdd2c,	// (0x0005c85f) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0005e44f) uni_indicator_pane_g

0x4af2,	// (0x00053625) navi_icon_pane_ParamLimits

0x4af2,	// (0x00053625) navi_icon_pane

0x4a30,	// (0x00053563) navi_midp_pane

0x4b0e,	// (0x00053641) navi_navi_pane

0x4b18,	// (0x0005364b) navi_text_pane_ParamLimits

0x4b18,	// (0x0005364b) navi_text_pane

0x36c4,	// (0x000521f7) status_small_wait_pane_g1

0x3bbf,	// (0x000526f2) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0005e44a) status_small_wait_pane_g

0x6386,	// (0x00054eb9) navi_navi_icon_text_pane

0x638e,	// (0x00054ec1) navi_navi_pane_g1_ParamLimits

0x638e,	// (0x00054ec1) navi_navi_pane_g1

0x63a0,	// (0x00054ed3) navi_navi_pane_g2_ParamLimits

0x63a0,	// (0x00054ed3) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0005e418) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0005e418) navi_navi_pane_g

0x63b2,	// (0x00054ee5) navi_navi_tabs_pane

0x63bb,	// (0x00054eee) navi_navi_text_pane

0x6386,	// (0x00054eb9) navi_navi_volume_pane

0x6362,	// (0x00054e95) navi_text_pane_t1

0x6356,	// (0x00054e89) navi_icon_pane_g1

0x62a9,	// (0x00054ddc) navi_navi_text_pane_t1

0x1b25,	// (0x00050658) navi_navi_volume_pane_g1

0xc7a3,	// (0x0005b2d6) volume_small_pane

0xdc3d,	// (0x0005c770) navi_navi_icon_text_pane_g1

0x6217,	// (0x00054d4a) navi_navi_icon_text_pane_t1

0x4b0e,	// (0x00053641) navi_tabs_2_long_pane

0x4b0e,	// (0x00053641) navi_tabs_2_pane

0x4b0e,	// (0x00053641) navi_tabs_3_long_pane

0x4b0e,	// (0x00053641) navi_tabs_3_pane

0x4b0e,	// (0x00053641) navi_tabs_4_pane

0xc783,	// (0x0005b2b6) tabs_2_active_pane_ParamLimits

0xc783,	// (0x0005b2b6) tabs_2_active_pane

0xc793,	// (0x0005b2c6) tabs_2_passive_pane_ParamLimits

0xc793,	// (0x0005b2c6) tabs_2_passive_pane

0xc751,	// (0x0005b284) tabs_3_active_pane_ParamLimits

0xc751,	// (0x0005b284) tabs_3_active_pane

0xc761,	// (0x0005b294) tabs_3_passive_pane_ParamLimits

0xc761,	// (0x0005b294) tabs_3_passive_pane

0xc772,	// (0x0005b2a5) tabs_3_passive_pane_cp_ParamLimits

0xc772,	// (0x0005b2a5) tabs_3_passive_pane_cp

0xc71e,	// (0x0005b251) tabs_4_active_pane_ParamLimits

0xc71e,	// (0x0005b251) tabs_4_active_pane

0xc72f,	// (0x0005b262) tabs_4_passive_pane_ParamLimits

0xc72f,	// (0x0005b262) tabs_4_passive_pane

0x1ab1,	// (0x000505e4) tabs_4_passive_pane_cp_ParamLimits

0x1ab1,	// (0x000505e4) tabs_4_passive_pane_cp

0xc740,	// (0x0005b273) tabs_4_passive_pane_cp2_ParamLimits

0xc740,	// (0x0005b273) tabs_4_passive_pane_cp2

0xc6fa,	// (0x0005b22d) tabs_2_long_active_pane_ParamLimits

0xc6fa,	// (0x0005b22d) tabs_2_long_active_pane

0xc70c,	// (0x0005b23f) tabs_2_long_passive_pane_ParamLimits

0xc70c,	// (0x0005b23f) tabs_2_long_passive_pane

0xc6bb,	// (0x0005b1ee) tabs_3_long_active_pane_ParamLimits

0xc6bb,	// (0x0005b1ee) tabs_3_long_active_pane

0xc6ce,	// (0x0005b201) tabs_3_long_passive_pane_ParamLimits

0xc6ce,	// (0x0005b201) tabs_3_long_passive_pane

0xc6e7,	// (0x0005b21a) tabs_3_long_passive_pane_cp_ParamLimits

0xc6e7,	// (0x0005b21a) tabs_3_long_passive_pane_cp

0x19d8,	// (0x0005050b) volume_small_pane_g1

0x19e1,	// (0x00050514) volume_small_pane_g2

0x19ea,	// (0x0005051d) volume_small_pane_g3

0x19f3,	// (0x00050526) volume_small_pane_g4

0x19fc,	// (0x0005052f) volume_small_pane_g5

0x1a05,	// (0x00050538) volume_small_pane_g6

0x1a0e,	// (0x00050541) volume_small_pane_g7

0x1a17,	// (0x0005054a) volume_small_pane_g8

0x1a20,	// (0x00050553) volume_small_pane_g9

0x1a29,	// (0x0005055c) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0005e3e4) volume_small_pane_g

0x3a29,	// (0x0005255c) bg_active_tab_pane_cp2_ParamLimits

0x3a29,	// (0x0005255c) bg_active_tab_pane_cp2

0x37bc,	// (0x000522ef) tabs_3_active_pane_g1

0xd035,	// (0x0005bb68) tabs_3_active_pane_t1

0x3a29,	// (0x0005255c) bg_passive_tab_pane_cp2_ParamLimits

0x3a29,	// (0x0005255c) bg_passive_tab_pane_cp2

0x37bc,	// (0x000522ef) tabs_3_passive_pane_g1

0xd035,	// (0x0005bb68) tabs_3_passive_pane_t1

0x3a29,	// (0x0005255c) bg_active_tab_pane_cp3_ParamLimits

0x3a29,	// (0x0005255c) bg_active_tab_pane_cp3

0x37d6,	// (0x00052309) tabs_4_active_pane_g1

0xd047,	// (0x0005bb7a) tabs_4_active_pane_t1

0x3a29,	// (0x0005255c) bg_passive_tab_pane_cp3_ParamLimits

0x3a29,	// (0x0005255c) bg_passive_tab_pane_cp3

0x37d6,	// (0x00052309) tabs_4_1_passive_pane_g1

0xd047,	// (0x0005bb7a) tabs_4_1_passive_pane_t1

0x4fba,	// (0x00053aed) list_highlight_pane_cp2

0xddb5,	// (0x0005c8e8) list_set_pane_ParamLimits

0xddb5,	// (0x0005c8e8) list_set_pane

0xde4f,	// (0x0005c982) main_pane_set_t1_ParamLimits

0xde4f,	// (0x0005c982) main_pane_set_t1

0xde6f,	// (0x0005c9a2) main_pane_set_t2_ParamLimits

0xde6f,	// (0x0005c9a2) main_pane_set_t2

0xde83,	// (0x0005c9b6) main_pane_set_t3_ParamLimits

0xde83,	// (0x0005c9b6) main_pane_set_t3

0xde95,	// (0x0005c9c8) main_pane_set_t4_ParamLimits

0xde95,	// (0x0005c9c8) main_pane_set_t4

0x0003,

0xf981,	// (0x0005e4b4) main_pane_set_t_ParamLimits

0xf981,	// (0x0005e4b4) main_pane_set_t

0xdea7,	// (0x0005c9da) setting_code_pane

0xdeaf,	// (0x0005c9e2) setting_slider_graphic_pane

0xdeaf,	// (0x0005c9e2) setting_slider_pane

0xdeaf,	// (0x0005c9e2) setting_text_pane

0xdeaf,	// (0x0005c9e2) setting_volume_pane

0x04e3,	// (0x0004f016) volume_set_pane

0x37ae,	// (0x000522e1) bg_set_opt_pane_cp

0x04eb,	// (0x0004f01e) setting_slider_pane_t1

0x0504,	// (0x0004f037) setting_slider_pane_t2

0x051e,	// (0x0004f051) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0005e091) setting_slider_pane_t

0x0536,	// (0x0004f069) slider_set_pane

0x36ce,	// (0x00052201) bg_set_opt_pane_cp2

0x37f0,	// (0x00052323) setting_slider_graphic_pane_g1

0x054c,	// (0x0004f07f) setting_slider_graphic_pane_t1

0x055c,	// (0x0004f08f) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0005e098) setting_slider_graphic_pane_t

0x056c,	// (0x0004f09f) slider_set_pane_cp

0x36ce,	// (0x00052201) input_focus_pane_cp1

0x688e,	// (0x000553c1) list_set_text_pane

0x36c4,	// (0x000521f7) setting_text_pane_g1

0x36ce,	// (0x00052201) input_focus_pane_cp2

0x36c4,	// (0x000521f7) setting_code_pane_g1

0x37f9,	// (0x0005232c) setting_code_pane_t1

0x0574,	// (0x0004f0a7) set_text_pane_t1_ParamLimits

0x0574,	// (0x0004f0a7) set_text_pane_t1

0x4063,	// (0x00052b96) set_opt_bg_pane_g1

0x406b,	// (0x00052b9e) set_opt_bg_pane_g2

0x686e,	// (0x000553a1) set_opt_bg_pane_g3

0x407b,	// (0x00052bae) set_opt_bg_pane_g4

0x4083,	// (0x00052bb6) set_opt_bg_pane_g5

0x408b,	// (0x00052bbe) set_opt_bg_pane_g6

0x6876,	// (0x000553a9) set_opt_bg_pane_g7

0x687e,	// (0x000553b1) set_opt_bg_pane_g8

0x6886,	// (0x000553b9) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0005e4a1) set_opt_bg_pane_g

0x6861,	// (0x00055394) slider_set_pane_g1

0x1b9a,	// (0x000506cd) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0005e492) slider_set_pane_g

0x1b36,	// (0x00050669) volume_set_pane_g1

0x1b3e,	// (0x00050671) volume_set_pane_g2

0x1b46,	// (0x00050679) volume_set_pane_g3

0x1b4e,	// (0x00050681) volume_set_pane_g4

0x1b56,	// (0x00050689) volume_set_pane_g5

0x1b5e,	// (0x00050691) volume_set_pane_g6

0x1b66,	// (0x00050699) volume_set_pane_g7

0x1b6e,	// (0x000506a1) volume_set_pane_g8

0x1b76,	// (0x000506a9) volume_set_pane_g9

0x1b7e,	// (0x000506b1) volume_set_pane_g10

0x0009,

0xf937,	// (0x0005e46a) volume_set_pane_g

0xd059,	// (0x0005bb8c) indicator_pane_ParamLimits

0xd059,	// (0x0005bb8c) indicator_pane

0xd081,	// (0x0005bbb4) main_idle_pane_g2_ParamLimits

0xd081,	// (0x0005bbb4) main_idle_pane_g2

0xd0b9,	// (0x0005bbec) main_pane_idle_g1_ParamLimits

0xd0b9,	// (0x0005bbec) main_pane_idle_g1

0x3848,	// (0x0005237b) popup_clock_digital_analogue_window_ParamLimits

0x3848,	// (0x0005237b) popup_clock_digital_analogue_window

0xd0e0,	// (0x0005bc13) soft_indicator_pane_ParamLimits

0xd0e0,	// (0x0005bc13) soft_indicator_pane

0xd0fa,	// (0x0005bc2d) wallpaper_pane_ParamLimits

0xd0fa,	// (0x0005bc2d) wallpaper_pane

0x36c4,	// (0x000521f7) wallpaper_pane_g1

0xd10c,	// (0x0005bc3f) indicator_pane_g1_ParamLimits

0xd10c,	// (0x0005bc3f) indicator_pane_g1

0x6c29,	// (0x0005575c) navi_navi_icon_text_pane_srt_g1

0x389a,	// (0x000523cd) soft_indicator_pane_t1

0x38b4,	// (0x000523e7) aid_ps_area_pane

0xd122,	// (0x0005bc55) aid_ps_clock_pane

0x38d3,	// (0x00052406) aid_ps_indicator_pane

0x38df,	// (0x00052412) indicator_ps_pane_ParamLimits

0x38df,	// (0x00052412) indicator_ps_pane

0x38ee,	// (0x00052421) power_save_pane_g1_ParamLimits

0x38ee,	// (0x00052421) power_save_pane_g1

0x38fa,	// (0x0005242d) power_save_pane_g2_ParamLimits

0x38fa,	// (0x0005242d) power_save_pane_g2

0x00f8,	// (0x0004ec2b) aid_navinavi_width_pane

0x38b4,	// (0x000523e7) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0005e09d) power_save_pane_g_ParamLimits

0xf56a,	// (0x0005e09d) power_save_pane_g

0x3908,	// (0x0005243b) power_save_pane_t1_ParamLimits

0x3908,	// (0x0005243b) power_save_pane_t1

0xd122,	// (0x0005bc55) aid_ps_clock_pane_ParamLimits

0x38d3,	// (0x00052406) aid_ps_indicator_pane_ParamLimits

0x391a,	// (0x0005244d) power_save_pane_t4_ParamLimits

0x391a,	// (0x0005244d) power_save_pane_t4

0x0001,

0xf56f,	// (0x0005e0a2) power_save_pane_t_ParamLimits

0xf56f,	// (0x0005e0a2) power_save_pane_t

0x3944,	// (0x00052477) power_save_t3_ParamLimits

0x3944,	// (0x00052477) power_save_t3

0x392f,	// (0x00052462) power_save_t2_ParamLimits

0x392f,	// (0x00052462) power_save_t2

0x3959,	// (0x0005248c) indicator_ps_pane_g1

0xd130,	// (0x0005bc63) ai_gene_pane_ParamLimits

0xd130,	// (0x0005bc63) ai_gene_pane

0xd147,	// (0x0005bc7a) ai_links_pane_ParamLimits

0xd147,	// (0x0005bc7a) ai_links_pane

0xd15f,	// (0x0005bc92) indicator_pane_cp1_ParamLimits

0xd15f,	// (0x0005bc92) indicator_pane_cp1

0xd16e,	// (0x0005bca1) main_pane_idle_g1_cp_ParamLimits

0xd16e,	// (0x0005bca1) main_pane_idle_g1_cp

0x3992,	// (0x000524c5) popup_ai_links_title_window

0xd186,	// (0x0005bcb9) soft_indicator_pane_cp1_ParamLimits

0xd186,	// (0x0005bcb9) soft_indicator_pane_cp1

0x664d,	// (0x00055180) ai_links_pane_g1

0x6656,	// (0x00055189) grid_ai_links_pane

0xdcf7,	// (0x0005c82a) ai_gene_pane_1

0x663b,	// (0x0005516e) ai_gene_pane_2

0x6644,	// (0x00055177) list_highlight_pane_cp4

0xdcd3,	// (0x0005c806) cell_ai_link_pane_ParamLimits

0xdcd3,	// (0x0005c806) cell_ai_link_pane

0x660c,	// (0x0005513f) cell_ai_link_pane_g1

0x3bbf,	// (0x000526f2) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0005e445) cell_ai_link_pane_g

0x36ce,	// (0x00052201) grid_highlight_cp2

0x36ce,	// (0x00052201) bg_popup_sub_pane_cp1

0x39b5,	// (0x000524e8) popup_ai_links_title_window_t1

0x655c,	// (0x0005508f) ai_gene_pane_1_g1_ParamLimits

0x655c,	// (0x0005508f) ai_gene_pane_1_g1

0x6568,	// (0x0005509b) ai_gene_pane_1_g2_ParamLimits

0x6568,	// (0x0005509b) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0005e43b) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0005e43b) ai_gene_pane_1_g

0x6575,	// (0x000550a8) ai_gene_pane_1_t1_ParamLimits

0x6575,	// (0x000550a8) ai_gene_pane_1_t1

0x65a9,	// (0x000550dc) grid_ai_soft_ind_pane

0x6547,	// (0x0005507a) ai_gene_pane_2_t1_ParamLimits

0x6547,	// (0x0005507a) ai_gene_pane_2_t1

0xd19a,	// (0x0005bccd) main_pane_empty_t1_ParamLimits

0xd19a,	// (0x0005bccd) main_pane_empty_t1

0xd1b2,	// (0x0005bce5) main_pane_empty_t2_ParamLimits

0xd1b2,	// (0x0005bce5) main_pane_empty_t2

0xd1c7,	// (0x0005bcfa) main_pane_empty_t3_ParamLimits

0xd1c7,	// (0x0005bcfa) main_pane_empty_t3

0xd1d9,	// (0x0005bd0c) main_pane_empty_t4_ParamLimits

0xd1d9,	// (0x0005bd0c) main_pane_empty_t4

0xd1eb,	// (0x0005bd1e) main_pane_empty_t5_ParamLimits

0xd1eb,	// (0x0005bd1e) main_pane_empty_t5

0x0004,

0xf574,	// (0x0005e0a7) main_pane_empty_t_ParamLimits

0xf574,	// (0x0005e0a7) main_pane_empty_t

0x40b4,	// (0x00052be7) bg_popup_window_pane_ParamLimits

0x40b4,	// (0x00052be7) bg_popup_window_pane

0x62b7,	// (0x00054dea) find_popup_pane_cp2_ParamLimits

0x62b7,	// (0x00054dea) find_popup_pane_cp2

0x62c3,	// (0x00054df6) heading_pane_ParamLimits

0x62c3,	// (0x00054df6) heading_pane

0x36ce,	// (0x00052201) bg_popup_sub_pane

0xdc54,	// (0x0005c787) bg_popup_window_pane_g1_ParamLimits

0xdc54,	// (0x0005c787) bg_popup_window_pane_g1

0xdc63,	// (0x0005c796) bg_popup_window_pane_g2_ParamLimits

0xdc63,	// (0x0005c796) bg_popup_window_pane_g2

0xdc6f,	// (0x0005c7a2) bg_popup_window_pane_g3_ParamLimits

0xdc6f,	// (0x0005c7a2) bg_popup_window_pane_g3

0xdc7b,	// (0x0005c7ae) bg_popup_window_pane_g4_ParamLimits

0xdc7b,	// (0x0005c7ae) bg_popup_window_pane_g4

0xdc8a,	// (0x0005c7bd) bg_popup_window_pane_g5_ParamLimits

0xdc8a,	// (0x0005c7bd) bg_popup_window_pane_g5

0xdc9a,	// (0x0005c7cd) bg_popup_window_pane_g6_ParamLimits

0xdc9a,	// (0x0005c7cd) bg_popup_window_pane_g6

0xdca6,	// (0x0005c7d9) bg_popup_window_pane_g7_ParamLimits

0xdca6,	// (0x0005c7d9) bg_popup_window_pane_g7

0xdcb5,	// (0x0005c7e8) bg_popup_window_pane_g8_ParamLimits

0xdcb5,	// (0x0005c7e8) bg_popup_window_pane_g8

0xdcc4,	// (0x0005c7f7) bg_popup_window_pane_g9_ParamLimits

0xdcc4,	// (0x0005c7f7) bg_popup_window_pane_g9

0x629d,	// (0x00054dd0) bg_popup_window_pane_g10_ParamLimits

0x629d,	// (0x00054dd0) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0005e403) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0005e403) bg_popup_window_pane_g

0x61c6,	// (0x00054cf9) bg_popup_heading_pane_ParamLimits

0x61c6,	// (0x00054cf9) bg_popup_heading_pane

0x1c22,	// (0x00050755) tabs_4_passive_pane_cp_srt_ParamLimits

0x1c22,	// (0x00050755) tabs_4_passive_pane_cp_srt

0x1c34,	// (0x00050767) tabs_4_passive_pane_srt_ParamLimits

0x61da,	// (0x00054d0d) heading_pane_g2

0x1c34,	// (0x00050767) tabs_4_passive_pane_srt

0x552c,	// (0x0005405f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x552c,	// (0x0005405f) bg_passive_tab_pane_cp3_srt

0x61e2,	// (0x00054d15) heading_pane_t1_ParamLimits

0x61e2,	// (0x00054d15) heading_pane_t1

0x61f9,	// (0x00054d2c) heading_pane_t2_ParamLimits

0x61f9,	// (0x00054d2c) heading_pane_t2

0x0001,

0xf8cb,	// (0x0005e3fe) heading_pane_t_ParamLimits

0xf8cb,	// (0x0005e3fe) heading_pane_t

0x5cf3,	// (0x00054826) bg_popup_heading_pane_g1

0x5da2,	// (0x000548d5) bg_popup_heading_pane_g2

0x5dac,	// (0x000548df) bg_popup_heading_pane_g3

0x5db6,	// (0x000548e9) bg_popup_heading_pane_g4

0x5dc0,	// (0x000548f3) bg_popup_heading_pane_g5

0x5dca,	// (0x000548fd) bg_popup_heading_pane_g6

0x5dd2,	// (0x00054905) bg_popup_heading_pane_g7

0x5dda,	// (0x0005490d) bg_popup_heading_pane_g8

0x5de4,	// (0x00054917) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0005e3ba) bg_popup_heading_pane_g

0x54b8,	// (0x00053feb) bg_popup_sub_pane_g1

0x54c8,	// (0x00053ffb) bg_popup_sub_pane_g2

0x54c0,	// (0x00053ff3) bg_popup_sub_pane_g3

0x54d8,	// (0x0005400b) bg_popup_sub_pane_g4

0x54d0,	// (0x00054003) bg_popup_sub_pane_g5

0x54e0,	// (0x00054013) bg_popup_sub_pane_g6

0x54e8,	// (0x0005401b) bg_popup_sub_pane_g7

0x54f8,	// (0x0005402b) bg_popup_sub_pane_g8

0x54f0,	// (0x00054023) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0005e394) bg_popup_sub_pane_g

0x3a29,	// (0x0005255c) bg_popup_window_pane_cp5_ParamLimits

0x3a29,	// (0x0005255c) bg_popup_window_pane_cp5

0x3a45,	// (0x00052578) popup_note_window_g1_ParamLimits

0x3a45,	// (0x00052578) popup_note_window_g1

0x3a51,	// (0x00052584) popup_note_window_t1_ParamLimits

0x3a51,	// (0x00052584) popup_note_window_t1

0x3a63,	// (0x00052596) popup_note_window_t2_ParamLimits

0x3a63,	// (0x00052596) popup_note_window_t2

0x3a75,	// (0x000525a8) popup_note_window_t3_ParamLimits

0x3a75,	// (0x000525a8) popup_note_window_t3

0x3a87,	// (0x000525ba) popup_note_window_t4_ParamLimits

0x3a87,	// (0x000525ba) popup_note_window_t4

0x3aaf,	// (0x000525e2) popup_note_window_t5_ParamLimits

0x3aaf,	// (0x000525e2) popup_note_window_t5

0x0004,

0xf57f,	// (0x0005e0b2) popup_note_window_t_ParamLimits

0xf57f,	// (0x0005e0b2) popup_note_window_t

0x3ad3,	// (0x00052606) bg_popup_window_pane_cp6_ParamLimits

0x3ad3,	// (0x00052606) bg_popup_window_pane_cp6

0x5c67,	// (0x0005479a) popup_note_image_window_g1_ParamLimits

0x5c67,	// (0x0005479a) popup_note_image_window_g1

0x5c73,	// (0x000547a6) popup_note_image_window_g2_ParamLimits

0x5c73,	// (0x000547a6) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0005e388) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0005e388) popup_note_image_window_g

0x5c8c,	// (0x000547bf) popup_note_image_window_t1_ParamLimits

0x5c8c,	// (0x000547bf) popup_note_image_window_t1

0x5ca5,	// (0x000547d8) popup_note_image_window_t2_ParamLimits

0x5ca5,	// (0x000547d8) popup_note_image_window_t2

0x5cbe,	// (0x000547f1) popup_note_image_window_t3_ParamLimits

0x5cbe,	// (0x000547f1) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0005e38d) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0005e38d) popup_note_image_window_t

0x5b28,	// (0x0005465b) bg_popup_window_pane_cp7_ParamLimits

0x5b28,	// (0x0005465b) bg_popup_window_pane_cp7

0x5b58,	// (0x0005468b) popup_note_wait_window_g1_ParamLimits

0x5b58,	// (0x0005468b) popup_note_wait_window_g1

0x5b64,	// (0x00054697) popup_note_wait_window_g2_ParamLimits

0x5b64,	// (0x00054697) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0005e376) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0005e376) popup_note_wait_window_g

0x5b7c,	// (0x000546af) popup_note_wait_window_t1_ParamLimits

0x5b7c,	// (0x000546af) popup_note_wait_window_t1

0x5ba3,	// (0x000546d6) popup_note_wait_window_t2_ParamLimits

0x5ba3,	// (0x000546d6) popup_note_wait_window_t2

0x5bc0,	// (0x000546f3) popup_note_wait_window_t3_ParamLimits

0x5bc0,	// (0x000546f3) popup_note_wait_window_t3

0x5bd3,	// (0x00054706) popup_note_wait_window_t4_ParamLimits

0x5bd3,	// (0x00054706) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0005e37d) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0005e37d) popup_note_wait_window_t

0x5bf8,	// (0x0005472b) wait_bar_pane_ParamLimits

0x5bf8,	// (0x0005472b) wait_bar_pane

0x36ce,	// (0x00052201) wait_anim_pane

0x36ce,	// (0x00052201) wait_border_pane

0x36c4,	// (0x000521f7) wait_anim_pane_g1

0x36c4,	// (0x000521f7) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0005e236) wait_anim_pane_g

0x5acc,	// (0x000545ff) wait_border_pane_g1

0x5ad7,	// (0x0005460a) wait_border_pane_g2

0x5ae0,	// (0x00054613) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0005e36f) wait_border_pane_g

0x593c,	// (0x0005446f) bg_popup_window_pane_cp16_ParamLimits

0x593c,	// (0x0005446f) bg_popup_window_pane_cp16

0x5a3c,	// (0x0005456f) indicator_popup_pane_cp4_ParamLimits

0x5a3c,	// (0x0005456f) indicator_popup_pane_cp4

0x5a50,	// (0x00054583) popup_query_data_window_t1_ParamLimits

0x5a50,	// (0x00054583) popup_query_data_window_t1

0x5a62,	// (0x00054595) popup_query_data_window_t2_ParamLimits

0x5a62,	// (0x00054595) popup_query_data_window_t2

0x5a7b,	// (0x000545ae) popup_query_data_window_t3_ParamLimits

0x5a7b,	// (0x000545ae) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0005e368) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0005e368) popup_query_data_window_t

0x5a95,	// (0x000545c8) query_popup_data_pane_ParamLimits

0x5a95,	// (0x000545c8) query_popup_data_pane

0x5aa9,	// (0x000545dc) query_popup_data_pane_cp1_ParamLimits

0x5aa9,	// (0x000545dc) query_popup_data_pane_cp1

0x593c,	// (0x0005446f) bg_popup_window_pane_cp10_ParamLimits

0x593c,	// (0x0005446f) bg_popup_window_pane_cp10

0x596e,	// (0x000544a1) indicator_popup_pane_ParamLimits

0x596e,	// (0x000544a1) indicator_popup_pane

0x5990,	// (0x000544c3) popup_query_code_window_t1_ParamLimits

0x5990,	// (0x000544c3) popup_query_code_window_t1

0x59aa,	// (0x000544dd) popup_query_code_window_t2_ParamLimits

0x59aa,	// (0x000544dd) popup_query_code_window_t2

0x59f3,	// (0x00054526) popup_query_code_window_t3_ParamLimits

0x59f3,	// (0x00054526) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0005e361) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0005e361) popup_query_code_window_t

0x5a22,	// (0x00054555) query_popup_pane_ParamLimits

0x5a22,	// (0x00054555) query_popup_pane

0x3ad3,	// (0x00052606) bg_popup_window_pane_cp15_ParamLimits

0x3ad3,	// (0x00052606) bg_popup_window_pane_cp15

0x3af1,	// (0x00052624) indicator_popup_pane_cp1_ParamLimits

0x3af1,	// (0x00052624) indicator_popup_pane_cp1

0x3b04,	// (0x00052637) indicator_popup_pane_cp2_ParamLimits

0x3b04,	// (0x00052637) indicator_popup_pane_cp2

0x3b17,	// (0x0005264a) popup_query_data_code_window_g1_ParamLimits

0x3b17,	// (0x0005264a) popup_query_data_code_window_g1

0x3b2a,	// (0x0005265d) popup_query_data_code_window_t1_ParamLimits

0x3b2a,	// (0x0005265d) popup_query_data_code_window_t1

0x3b3c,	// (0x0005266f) popup_query_data_code_window_t2_ParamLimits

0x3b3c,	// (0x0005266f) popup_query_data_code_window_t2

0x3b4e,	// (0x00052681) popup_query_data_code_window_t3_ParamLimits

0x3b4e,	// (0x00052681) popup_query_data_code_window_t3

0x3b64,	// (0x00052697) popup_query_data_code_window_t4_ParamLimits

0x3b64,	// (0x00052697) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0005e0bd) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0005e0bd) popup_query_data_code_window_t

0x18d5,	// (0x00050408) list_single_midp_graphic_pane_g3

0x3b7c,	// (0x000526af) query_popup_data_pane_cp2_ParamLimits

0x3b8f,	// (0x000526c2) query_popup_pane_cp2_ParamLimits

0x3b8f,	// (0x000526c2) query_popup_pane_cp2

0x36ce,	// (0x00052201) bg_popup_window_pane_cp11

0x5934,	// (0x00054467) heading_pane_cp5

0x3c7a,	// (0x000527ad) listscroll_popup_info_pane

0x36ce,	// (0x00052201) input_focus_pane_cp3

0x3ba2,	// (0x000526d5) query_popup_pane_t1

0x3bb0,	// (0x000526e3) list_popup_info_pane_ParamLimits

0x3bb0,	// (0x000526e3) list_popup_info_pane

0x3bbf,	// (0x000526f2) listscroll_popup_info_pane_g1

0x3bc7,	// (0x000526fa) scroll_pane_cp7

0x3bd1,	// (0x00052704) popup_info_list_pane_t1_ParamLimits

0x3bd1,	// (0x00052704) popup_info_list_pane_t1

0x3beb,	// (0x0005271e) popup_info_list_pane_t2_ParamLimits

0x3beb,	// (0x0005271e) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0005e0c6) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0005e0c6) popup_info_list_pane_t

0x36ce,	// (0x00052201) bg_popup_window_pane_cp12

0x6c43,	// (0x00055776) find_popup_pane

0x37ae,	// (0x000522e1) bg_popup_window_pane_cp3

0x3c05,	// (0x00052738) heading_pane_cp3

0x3c11,	// (0x00052744) listscroll_popup_graphic_pane

0x36ce,	// (0x00052201) bg_popup_window_pane_cp4

0xd24d,	// (0x0005bd80) heading_pane_cp4

0x3c7a,	// (0x000527ad) listscroll_popup_colour_pane

0x3c82,	// (0x000527b5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3c82,	// (0x000527b5) cell_large_graphic_colour_none_popup_pane

0xd255,	// (0x0005bd88) grid_large_graphic_colour_popup_pane_ParamLimits

0xd255,	// (0x0005bd88) grid_large_graphic_colour_popup_pane

0x3cbe,	// (0x000527f1) listscroll_popup_colour_pane_g1_ParamLimits

0x3cbe,	// (0x000527f1) listscroll_popup_colour_pane_g1

0x3cd5,	// (0x00052808) listscroll_popup_colour_pane_g2_ParamLimits

0x3cd5,	// (0x00052808) listscroll_popup_colour_pane_g2

0x3cec,	// (0x0005281f) listscroll_popup_colour_pane_g3_ParamLimits

0x3cec,	// (0x0005281f) listscroll_popup_colour_pane_g3

0xd279,	// (0x0005bdac) listscroll_popup_colour_pane_g4_ParamLimits

0xd279,	// (0x0005bdac) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0005e0cb) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0005e0cb) listscroll_popup_colour_pane_g

0x3d0b,	// (0x0005283e) scroll_pane_cp6_ParamLimits

0x3d0b,	// (0x0005283e) scroll_pane_cp6

0xd288,	// (0x0005bdbb) cell_large_graphic_colour_popup_pane_ParamLimits

0xd288,	// (0x0005bdbb) cell_large_graphic_colour_popup_pane

0x3d3c,	// (0x0005286f) cell_large_graphic_colour_none_popup_pane_t1

0x36ce,	// (0x00052201) grid_highlight_pane_cp5

0x3d4b,	// (0x0005287e) cell_large_graphic_colour_popup_pane_g1

0x3d53,	// (0x00052886) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0005e0d4) cell_large_graphic_colour_popup_pane_g

0x3d5b,	// (0x0005288e) cell_large_graphic_colour_popup_pane_g2_copy1

0x3d64,	// (0x00052897) grid_highlight_pane_cp4

0x3d6c,	// (0x0005289f) bg_popup_window_pane_cp8_ParamLimits

0x3d6c,	// (0x0005289f) bg_popup_window_pane_cp8

0x3d87,	// (0x000528ba) popup_snote_single_text_window_g1_ParamLimits

0x3d87,	// (0x000528ba) popup_snote_single_text_window_g1

0x3d99,	// (0x000528cc) popup_snote_single_text_window_t1_ParamLimits

0x3d99,	// (0x000528cc) popup_snote_single_text_window_t1

0x3dac,	// (0x000528df) popup_snote_single_text_window_t2_ParamLimits

0x3dac,	// (0x000528df) popup_snote_single_text_window_t2

0x3dbf,	// (0x000528f2) popup_snote_single_text_window_t3_ParamLimits

0x3dbf,	// (0x000528f2) popup_snote_single_text_window_t3

0x3df8,	// (0x0005292b) popup_snote_single_text_window_t4_ParamLimits

0x3df8,	// (0x0005292b) popup_snote_single_text_window_t4

0x3e2c,	// (0x0005295f) popup_snote_single_text_window_t5_ParamLimits

0x3e2c,	// (0x0005295f) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0005e0d9) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0005e0d9) popup_snote_single_text_window_t

0x3e5b,	// (0x0005298e) bg_popup_window_pane_cp9_ParamLimits

0x3e5b,	// (0x0005298e) bg_popup_window_pane_cp9

0x3d87,	// (0x000528ba) popup_snote_single_graphic_window_g1_ParamLimits

0x3d87,	// (0x000528ba) popup_snote_single_graphic_window_g1

0x3e69,	// (0x0005299c) popup_snote_single_graphic_window_g2_ParamLimits

0x3e69,	// (0x0005299c) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0005e0e4) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0005e0e4) popup_snote_single_graphic_window_g

0x3e75,	// (0x000529a8) popup_snote_single_graphic_window_t1_ParamLimits

0x3e75,	// (0x000529a8) popup_snote_single_graphic_window_t1

0x3e88,	// (0x000529bb) popup_snote_single_graphic_window_t2_ParamLimits

0x3e88,	// (0x000529bb) popup_snote_single_graphic_window_t2

0x3e9b,	// (0x000529ce) popup_snote_single_graphic_window_t3_ParamLimits

0x3e9b,	// (0x000529ce) popup_snote_single_graphic_window_t3

0x3ed4,	// (0x00052a07) popup_snote_single_graphic_window_t4_ParamLimits

0x3ed4,	// (0x00052a07) popup_snote_single_graphic_window_t4

0x3f08,	// (0x00052a3b) popup_snote_single_graphic_window_t5_ParamLimits

0x3f08,	// (0x00052a3b) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0005e0e9) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0005e0e9) popup_snote_single_graphic_window_t

0x6b87,	// (0x000556ba) grid_graphic_popup_pane_ParamLimits

0x6b87,	// (0x000556ba) grid_graphic_popup_pane

0x6baf,	// (0x000556e2) listscroll_popup_graphic_pane_g1_ParamLimits

0x6baf,	// (0x000556e2) listscroll_popup_graphic_pane_g1

0xdfa7,	// (0x0005cada) listscroll_popup_graphic_pane_g2_ParamLimits

0xdfa7,	// (0x0005cada) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0005e4de) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0005e4de) listscroll_popup_graphic_pane_g

0x6bd7,	// (0x0005570a) scroll_pane_cp5

0xdf62,	// (0x0005ca95) cell_graphic_popup_pane_ParamLimits

0xdf62,	// (0x0005ca95) cell_graphic_popup_pane

0x6b08,	// (0x0005563b) cell_graphic_popup_pane_g1

0x6b10,	// (0x00055643) cell_graphic_popup_pane_g2

0x3d5b,	// (0x0005288e) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0005e4d7) cell_graphic_popup_pane_g

0x6b19,	// (0x0005564c) cell_graphic_popup_pane_t2

0x3d64,	// (0x00052897) grid_highlight_pane_cp3

0x3f49,	// (0x00052a7c) list_gen_pane_ParamLimits

0x3f49,	// (0x00052a7c) list_gen_pane

0x3f7b,	// (0x00052aae) scroll_pane

0xdf1d,	// (0x0005ca50) bg_list_pane_g1_ParamLimits

0xdf1d,	// (0x0005ca50) bg_list_pane_g1

0x6a85,	// (0x000555b8) bg_list_pane_g2_ParamLimits

0x6a85,	// (0x000555b8) bg_list_pane_g2

0x6a98,	// (0x000555cb) bg_list_pane_g3_ParamLimits

0x6a98,	// (0x000555cb) bg_list_pane_g3

0x6aaa,	// (0x000555dd) bg_list_pane_g4_ParamLimits

0x6aaa,	// (0x000555dd) bg_list_pane_g4

0xdf38,	// (0x0005ca6b) bg_list_pane_g5_ParamLimits

0xdf38,	// (0x0005ca6b) bg_list_pane_g5

0x0004,

0xf999,	// (0x0005e4cc) bg_list_pane_g_ParamLimits

0xf999,	// (0x0005e4cc) bg_list_pane_g

0xd7c3,	// (0x0005c2f6) list_double2_graphic_large_graphic_pane_ParamLimits

0xd7c3,	// (0x0005c2f6) list_double2_graphic_large_graphic_pane

0xd7c3,	// (0x0005c2f6) list_double2_graphic_pane_ParamLimits

0xd7c3,	// (0x0005c2f6) list_double2_graphic_pane

0xd7c3,	// (0x0005c2f6) list_double2_large_graphic_pane_ParamLimits

0xd7c3,	// (0x0005c2f6) list_double2_large_graphic_pane

0xd7c3,	// (0x0005c2f6) list_double2_pane_ParamLimits

0xd7c3,	// (0x0005c2f6) list_double2_pane

0xd7c3,	// (0x0005c2f6) list_double_graphic_heading_pane_ParamLimits

0xd7c3,	// (0x0005c2f6) list_double_graphic_heading_pane

0xd7c3,	// (0x0005c2f6) list_double_graphic_pane_ParamLimits

0xd7c3,	// (0x0005c2f6) list_double_graphic_pane

0xd7c3,	// (0x0005c2f6) list_double_heading_pane_ParamLimits

0xd7c3,	// (0x0005c2f6) list_double_heading_pane

0xd7c3,	// (0x0005c2f6) list_double_large_graphic_pane_ParamLimits

0xd7c3,	// (0x0005c2f6) list_double_large_graphic_pane

0xd7c3,	// (0x0005c2f6) list_double_number_pane_ParamLimits

0xd7c3,	// (0x0005c2f6) list_double_number_pane

0xd7c3,	// (0x0005c2f6) list_double_pane_ParamLimits

0xd7c3,	// (0x0005c2f6) list_double_pane

0xd7c3,	// (0x0005c2f6) list_double_time_pane_ParamLimits

0xd7c3,	// (0x0005c2f6) list_double_time_pane

0xd7c3,	// (0x0005c2f6) list_setting_number_pane_ParamLimits

0xd7c3,	// (0x0005c2f6) list_setting_number_pane

0xd7c3,	// (0x0005c2f6) list_setting_pane_ParamLimits

0xd7c3,	// (0x0005c2f6) list_setting_pane

0xdee2,	// (0x0005ca15) list_single_2graphic_pane_ParamLimits

0xdee2,	// (0x0005ca15) list_single_2graphic_pane

0xdee2,	// (0x0005ca15) list_single_graphic_heading_pane_ParamLimits

0xdee2,	// (0x0005ca15) list_single_graphic_heading_pane

0xdee2,	// (0x0005ca15) list_single_graphic_pane_ParamLimits

0xdee2,	// (0x0005ca15) list_single_graphic_pane

0xdee2,	// (0x0005ca15) list_single_heading_pane_ParamLimits

0xdee2,	// (0x0005ca15) list_single_heading_pane

0xdf0a,	// (0x0005ca3d) list_single_large_graphic_pane_ParamLimits

0xdf0a,	// (0x0005ca3d) list_single_large_graphic_pane

0xdee2,	// (0x0005ca15) list_single_number_heading_pane_ParamLimits

0xdee2,	// (0x0005ca15) list_single_number_heading_pane

0xdee2,	// (0x0005ca15) list_single_number_pane_ParamLimits

0xdee2,	// (0x0005ca15) list_single_number_pane

0xdee2,	// (0x0005ca15) list_single_pane_ParamLimits

0xdee2,	// (0x0005ca15) list_single_pane

0x36ce,	// (0x00052201) list_highlight_pane_cp1

0x2cf2,	// (0x00051825) list_single_pane_g1_ParamLimits

0x2cf2,	// (0x00051825) list_single_pane_g1

0x2cfe,	// (0x00051831) list_single_pane_g2_ParamLimits

0x2cfe,	// (0x00051831) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0005e105) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0005e105) list_single_pane_g

0x2ebf,	// (0x000519f2) list_single_pane_t1_ParamLimits

0x2ebf,	// (0x000519f2) list_single_pane_t1

0x2cf2,	// (0x00051825) list_single_number_pane_g1_ParamLimits

0x2cf2,	// (0x00051825) list_single_number_pane_g1

0x2cfe,	// (0x00051831) list_single_number_pane_g2_ParamLimits

0x2cfe,	// (0x00051831) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0005e105) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0005e105) list_single_number_pane_g

0x189a,	// (0x000503cd) list_single_number_pane_t1_ParamLimits

0x189a,	// (0x000503cd) list_single_number_pane_t1

0x2e7d,	// (0x000519b0) list_single_number_pane_t2_ParamLimits

0x2e7d,	// (0x000519b0) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0005e48d) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0005e48d) list_single_number_pane_t

0x058d,	// (0x0004f0c0) list_single_graphic_pane_g1_ParamLimits

0x058d,	// (0x0004f0c0) list_single_graphic_pane_g1

0x2cf2,	// (0x00051825) list_single_graphic_pane_g2_ParamLimits

0x2cf2,	// (0x00051825) list_single_graphic_pane_g2

0x2cfe,	// (0x00051831) list_single_graphic_pane_g3_ParamLimits

0x2cfe,	// (0x00051831) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0005e0f4) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0005e0f4) list_single_graphic_pane_g

0x0599,	// (0x0004f0cc) list_single_graphic_pane_t1_ParamLimits

0x0599,	// (0x0004f0cc) list_single_graphic_pane_t1

0x05af,	// (0x0004f0e2) list_single_heading_pane_g1_ParamLimits

0x05af,	// (0x0004f0e2) list_single_heading_pane_g1

0x2cfe,	// (0x00051831) list_single_heading_pane_g2_ParamLimits

0x2cfe,	// (0x00051831) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0005e0fb) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0005e0fb) list_single_heading_pane_g

0x05c2,	// (0x0004f0f5) list_single_heading_pane_t1_ParamLimits

0x05c2,	// (0x0004f0f5) list_single_heading_pane_t1

0x2d0a,	// (0x0005183d) list_single_heading_pane_t2_ParamLimits

0x2d0a,	// (0x0005183d) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0005e100) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0005e100) list_single_heading_pane_t

0x2cf2,	// (0x00051825) list_single_number_heading_pane_g1_ParamLimits

0x2cf2,	// (0x00051825) list_single_number_heading_pane_g1

0x2cfe,	// (0x00051831) list_single_number_heading_pane_g2_ParamLimits

0x2cfe,	// (0x00051831) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0005e105) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0005e105) list_single_number_heading_pane_g

0x05d8,	// (0x0004f10b) list_single_number_heading_pane_t1_ParamLimits

0x05d8,	// (0x0004f10b) list_single_number_heading_pane_t1

0x05ee,	// (0x0004f121) list_single_number_heading_pane_t2_ParamLimits

0x05ee,	// (0x0004f121) list_single_number_heading_pane_t2

0x0600,	// (0x0004f133) list_single_number_heading_pane_t3_ParamLimits

0x0600,	// (0x0004f133) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0005e10a) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0005e10a) list_single_number_heading_pane_t

0x0612,	// (0x0004f145) list_single_graphic_heading_pane_g1_ParamLimits

0x0612,	// (0x0004f145) list_single_graphic_heading_pane_g1

0xb8e1,	// (0x0005a414) list_single_graphic_heading_pane_g4_ParamLimits

0xb8e1,	// (0x0005a414) list_single_graphic_heading_pane_g4

0x2cfe,	// (0x00051831) list_single_graphic_heading_pane_g5_ParamLimits

0x2cfe,	// (0x00051831) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0005e111) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0005e111) list_single_graphic_heading_pane_g

0x05d8,	// (0x0004f10b) list_single_graphic_heading_pane_t1_ParamLimits

0x05d8,	// (0x0004f10b) list_single_graphic_heading_pane_t1

0x0639,	// (0x0004f16c) list_single_graphic_heading_pane_t2_ParamLimits

0x0639,	// (0x0004f16c) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0005e118) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0005e118) list_single_graphic_heading_pane_t

0x3075,	// (0x00051ba8) list_single_large_graphic_pane_g1_ParamLimits

0x3075,	// (0x00051ba8) list_single_large_graphic_pane_g1

0x3081,	// (0x00051bb4) list_single_large_graphic_pane_g2_ParamLimits

0x3081,	// (0x00051bb4) list_single_large_graphic_pane_g2

0x308d,	// (0x00051bc0) list_single_large_graphic_pane_g3_ParamLimits

0x308d,	// (0x00051bc0) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0005e11d) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0005e11d) list_single_large_graphic_pane_g

0x5ad7,	// (0x0005460a) wait_border_pane_g2_copy1

0x2d40,	// (0x00051873) list_single_large_graphic_pane_g4_cp2

0x3099,	// (0x00051bcc) list_single_large_graphic_pane_t1_ParamLimits

0x3099,	// (0x00051bcc) list_single_large_graphic_pane_t1

0xb8f2,	// (0x0005a425) list_double_pane_g1_ParamLimits

0xb8f2,	// (0x0005a425) list_double_pane_g1

0xb8fe,	// (0x0005a431) list_double_pane_g2_ParamLimits

0xb8fe,	// (0x0005a431) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0005e124) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0005e124) list_double_pane_g

0xb90a,	// (0x0005a43d) list_double_pane_t1_ParamLimits

0xb90a,	// (0x0005a43d) list_double_pane_t1

0xb920,	// (0x0005a453) list_double_pane_t2_ParamLimits

0xb920,	// (0x0005a453) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0005e129) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0005e129) list_double_pane_t

0xb932,	// (0x0005a465) list_double2_pane_g1_ParamLimits

0xb932,	// (0x0005a465) list_double2_pane_g1

0xb943,	// (0x0005a476) list_double2_pane_g2_ParamLimits

0xb943,	// (0x0005a476) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0005e12e) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0005e12e) list_double2_pane_g

0xb94f,	// (0x0005a482) list_double2_pane_t1_ParamLimits

0xb94f,	// (0x0005a482) list_double2_pane_t1

0xb965,	// (0x0005a498) list_double2_pane_t2_ParamLimits

0xb965,	// (0x0005a498) list_double2_pane_t2

0x0001,

0xf600,	// (0x0005e133) list_double2_pane_t_ParamLimits

0xf600,	// (0x0005e133) list_double2_pane_t

0xb8f2,	// (0x0005a425) list_double_number_pane_g1_ParamLimits

0xb8f2,	// (0x0005a425) list_double_number_pane_g1

0xb8fe,	// (0x0005a431) list_double_number_pane_g2_ParamLimits

0xb8fe,	// (0x0005a431) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0005e124) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0005e124) list_double_number_pane_g

0xb977,	// (0x0005a4aa) list_double_number_pane_t1_ParamLimits

0xb977,	// (0x0005a4aa) list_double_number_pane_t1

0xb989,	// (0x0005a4bc) list_double_number_pane_t2_ParamLimits

0xb989,	// (0x0005a4bc) list_double_number_pane_t2

0xb99f,	// (0x0005a4d2) list_double_number_pane_t3_ParamLimits

0xb99f,	// (0x0005a4d2) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0005e138) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0005e138) list_double_number_pane_t

0xb9b1,	// (0x0005a4e4) list_double_graphic_pane_g1_ParamLimits

0xb9b1,	// (0x0005a4e4) list_double_graphic_pane_g1

0xb9bd,	// (0x0005a4f0) list_double_graphic_pane_g2_ParamLimits

0xb9bd,	// (0x0005a4f0) list_double_graphic_pane_g2

0xb9cc,	// (0x0005a4ff) list_double_graphic_pane_g3_ParamLimits

0xb9cc,	// (0x0005a4ff) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0005e13f) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0005e13f) list_double_graphic_pane_g

0xb9e4,	// (0x0005a517) list_double_graphic_pane_t1_ParamLimits

0xb9e4,	// (0x0005a517) list_double_graphic_pane_t1

0xb9fa,	// (0x0005a52d) list_double_graphic_pane_t2_ParamLimits

0xb9fa,	// (0x0005a52d) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0005e148) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0005e148) list_double_graphic_pane_t

0xb9b1,	// (0x0005a4e4) list_double2_graphic_pane_g1_ParamLimits

0xb9b1,	// (0x0005a4e4) list_double2_graphic_pane_g1

0xb8f2,	// (0x0005a425) list_double2_graphic_pane_g2_ParamLimits

0xb8f2,	// (0x0005a425) list_double2_graphic_pane_g2

0xb8fe,	// (0x0005a431) list_double2_graphic_pane_g3_ParamLimits

0xb8fe,	// (0x0005a431) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0005e14d) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0005e14d) list_double2_graphic_pane_g

0xb989,	// (0x0005a4bc) list_double2_graphic_pane_t1_ParamLimits

0xb989,	// (0x0005a4bc) list_double2_graphic_pane_t1

0xba0c,	// (0x0005a53f) list_double2_graphic_pane_t2_ParamLimits

0xba0c,	// (0x0005a53f) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0005e154) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0005e154) list_double2_graphic_pane_t

0xba1e,	// (0x0005a551) list_double_large_graphic_pane_g1_ParamLimits

0xba1e,	// (0x0005a551) list_double_large_graphic_pane_g1

0xba3d,	// (0x0005a570) list_double_large_graphic_pane_g2_ParamLimits

0xba3d,	// (0x0005a570) list_double_large_graphic_pane_g2

0xb8fe,	// (0x0005a431) list_double_large_graphic_pane_g3_ParamLimits

0xb8fe,	// (0x0005a431) list_double_large_graphic_pane_g3

0xba53,	// (0x0005a586) list_double_large_graphic_pane_g4_ParamLimits

0xba53,	// (0x0005a586) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0005e159) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0005e159) list_double_large_graphic_pane_g

0xba66,	// (0x0005a599) list_double_large_graphic_pane_t1_ParamLimits

0xba66,	// (0x0005a599) list_double_large_graphic_pane_t1

0xba7f,	// (0x0005a5b2) list_double_large_graphic_pane_t2_ParamLimits

0xba7f,	// (0x0005a5b2) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0005e164) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0005e164) list_double_large_graphic_pane_t

0xba91,	// (0x0005a5c4) list_double2_large_graphic_pane_g1_ParamLimits

0xba91,	// (0x0005a5c4) list_double2_large_graphic_pane_g1

0xba9d,	// (0x0005a5d0) list_double2_large_graphic_pane_g2_ParamLimits

0xba9d,	// (0x0005a5d0) list_double2_large_graphic_pane_g2

0xb8fe,	// (0x0005a431) list_double2_large_graphic_pane_g3_ParamLimits

0xb8fe,	// (0x0005a431) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0005e169) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0005e169) list_double2_large_graphic_pane_g

0xbaae,	// (0x0005a5e1) list_double2_large_graphic_pane_t1_ParamLimits

0xbaae,	// (0x0005a5e1) list_double2_large_graphic_pane_t1

0xbac4,	// (0x0005a5f7) list_double2_large_graphic_pane_t2_ParamLimits

0xbac4,	// (0x0005a5f7) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0005e170) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0005e170) list_double2_large_graphic_pane_t

0xbad6,	// (0x0005a609) list_double_heading_pane_g1_ParamLimits

0xbad6,	// (0x0005a609) list_double_heading_pane_g1

0xbae7,	// (0x0005a61a) list_double_heading_pane_g2_ParamLimits

0xbae7,	// (0x0005a61a) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0005e175) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0005e175) list_double_heading_pane_g

0xbaf3,	// (0x0005a626) list_double_heading_pane_t1_ParamLimits

0xbaf3,	// (0x0005a626) list_double_heading_pane_t1

0xbb09,	// (0x0005a63c) list_double_heading_pane_t2_ParamLimits

0xbb09,	// (0x0005a63c) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0005e17a) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0005e17a) list_double_heading_pane_t

0xb9b1,	// (0x0005a4e4) list_double_graphic_heading_pane_g1_ParamLimits

0xb9b1,	// (0x0005a4e4) list_double_graphic_heading_pane_g1

0xbad6,	// (0x0005a609) list_double_graphic_heading_pane_g2_ParamLimits

0xbad6,	// (0x0005a609) list_double_graphic_heading_pane_g2

0xbae7,	// (0x0005a61a) list_double_graphic_heading_pane_g3_ParamLimits

0xbae7,	// (0x0005a61a) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0005e17f) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0005e17f) list_double_graphic_heading_pane_g

0xbb1b,	// (0x0005a64e) list_double_graphic_heading_pane_t1_ParamLimits

0xbb1b,	// (0x0005a64e) list_double_graphic_heading_pane_t1

0xbb31,	// (0x0005a664) list_double_graphic_heading_pane_t2_ParamLimits

0xbb31,	// (0x0005a664) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0005e186) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0005e186) list_double_graphic_heading_pane_t

0xb932,	// (0x0005a465) list_double_time_pane_g1_ParamLimits

0xb932,	// (0x0005a465) list_double_time_pane_g1

0xb943,	// (0x0005a476) list_double_time_pane_g2_ParamLimits

0xb943,	// (0x0005a476) list_double_time_pane_g2

0x0001,

0xf5fb,	// (0x0005e12e) list_double_time_pane_g_ParamLimits

0xf5fb,	// (0x0005e12e) list_double_time_pane_g

0xbb43,	// (0x0005a676) list_double_time_pane_t1_ParamLimits

0xbb43,	// (0x0005a676) list_double_time_pane_t1

0xbb59,	// (0x0005a68c) list_double_time_pane_t2_ParamLimits

0xbb59,	// (0x0005a68c) list_double_time_pane_t2

0xbb6b,	// (0x0005a69e) list_double_time_pane_t3_ParamLimits

0xbb6b,	// (0x0005a69e) list_double_time_pane_t3

0xbb7d,	// (0x0005a6b0) list_double_time_pane_t4_ParamLimits

0xbb7d,	// (0x0005a6b0) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0005e18b) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0005e18b) list_double_time_pane_t

0xbb8f,	// (0x0005a6c2) list_setting_pane_g1_ParamLimits

0xbb8f,	// (0x0005a6c2) list_setting_pane_g1

0xbb9b,	// (0x0005a6ce) list_setting_pane_g2_ParamLimits

0xbb9b,	// (0x0005a6ce) list_setting_pane_g2

0x0001,

0xf661,	// (0x0005e194) list_setting_pane_g_ParamLimits

0xf661,	// (0x0005e194) list_setting_pane_g

0xbba7,	// (0x0005a6da) list_setting_pane_t1_ParamLimits

0xbba7,	// (0x0005a6da) list_setting_pane_t1

0xbbc1,	// (0x0005a6f4) list_setting_pane_t2_ParamLimits

0xbbc1,	// (0x0005a6f4) list_setting_pane_t2

0x0002,

0xf666,	// (0x0005e199) list_setting_pane_t_ParamLimits

0xf666,	// (0x0005e199) list_setting_pane_t

0xbbfe,	// (0x0005a731) set_value_pane_cp_ParamLimits

0xbbfe,	// (0x0005a731) set_value_pane_cp

0xbc0a,	// (0x0005a73d) list_setting_number_pane_g1_ParamLimits

0xbc0a,	// (0x0005a73d) list_setting_number_pane_g1

0xbc16,	// (0x0005a749) list_setting_number_pane_g2_ParamLimits

0xbc16,	// (0x0005a749) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0005e1a0) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0005e1a0) list_setting_number_pane_g

0xbc22,	// (0x0005a755) list_setting_number_pane_t1_ParamLimits

0xbc22,	// (0x0005a755) list_setting_number_pane_t1

0xbc3b,	// (0x0005a76e) list_setting_number_pane_t2_ParamLimits

0xbc3b,	// (0x0005a76e) list_setting_number_pane_t2

0xbc55,	// (0x0005a788) list_setting_number_pane_t3_ParamLimits

0xbc55,	// (0x0005a788) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0005e1a5) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0005e1a5) list_setting_number_pane_t

0xbbfe,	// (0x0005a731) set_value_pane_ParamLimits

0xbbfe,	// (0x0005a731) set_value_pane

0x3fbb,	// (0x00052aee) bg_set_opt_pane_ParamLimits

0x3fbb,	// (0x00052aee) bg_set_opt_pane

0x09f3,	// (0x0004f526) set_value_pane_t1

0x3fdc,	// (0x00052b0f) slider_set_pane_cp3

0x3fe5,	// (0x00052b18) volume_small_pane_cp

0x3fee,	// (0x00052b21) list_form_gen_pane

0x3ff7,	// (0x00052b2a) scroll_pane_cp8

0xbc98,	// (0x0005a7cb) form_field_data_pane_ParamLimits

0xbc98,	// (0x0005a7cb) form_field_data_pane

0xbcaf,	// (0x0005a7e2) form_field_data_wide_pane_ParamLimits

0xbcaf,	// (0x0005a7e2) form_field_data_wide_pane

0xbccf,	// (0x0005a802) form_field_popup_pane_ParamLimits

0xbccf,	// (0x0005a802) form_field_popup_pane

0xbcef,	// (0x0005a822) form_field_popup_wide_pane_ParamLimits

0xbcef,	// (0x0005a822) form_field_popup_wide_pane

0x0a89,	// (0x0004f5bc) form_field_slider_pane_ParamLimits

0x0a89,	// (0x0004f5bc) form_field_slider_pane

0x0a9c,	// (0x0004f5cf) form_field_slider_wide_pane_ParamLimits

0x0a9c,	// (0x0004f5cf) form_field_slider_wide_pane

0x4008,	// (0x00052b3b) data_form_pane

0xbd10,	// (0x0005a843) form_field_data_pane_t1

0x4014,	// (0x00052b47) input_focus_pane

0x0ad3,	// (0x0004f606) data_form_wide_pane

0x0af0,	// (0x0004f623) form_field_data_wide_pane_t1

0x3d79,	// (0x000528ac) input_focus_pane_cp6

0xbd2a,	// (0x0005a85d) form_field_popup_pane_t1

0x4014,	// (0x00052b47) input_focus_pane_cp7

0x4036,	// (0x00052b69) list_form_pane

0x0b34,	// (0x0004f667) form_field_popup_wide_pane_t1

0x4014,	// (0x00052b47) input_focus_pane_cp8

0x4042,	// (0x00052b75) list_form_wide_pane

0xbd4c,	// (0x0005a87f) form_field_slider_pane_t1_ParamLimits

0xbd4c,	// (0x0005a87f) form_field_slider_pane_t1

0xbd64,	// (0x0005a897) form_field_slider_pane_t2_ParamLimits

0xbd64,	// (0x0005a897) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0005e1b5) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0005e1b5) form_field_slider_pane_t

0x3a29,	// (0x0005255c) input_focus_pane_cp9_ParamLimits

0x3a29,	// (0x0005255c) input_focus_pane_cp9

0xbd79,	// (0x0005a8ac) slider_cont_pane_ParamLimits

0xbd79,	// (0x0005a8ac) slider_cont_pane

0x4051,	// (0x00052b84) form_field_slider_wide_pane_t1_ParamLimits

0x4051,	// (0x00052b84) form_field_slider_wide_pane_t1

0x0b92,	// (0x0004f6c5) form_field_slider_wide_pane_t2_ParamLimits

0x0b92,	// (0x0004f6c5) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0005e1ba) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0005e1ba) form_field_slider_wide_pane_t

0x3a29,	// (0x0005255c) input_focus_pane_cp10_ParamLimits

0x3a29,	// (0x0005255c) input_focus_pane_cp10

0xbd8d,	// (0x0005a8c0) slider_cont_pane_cp1_ParamLimits

0xbd8d,	// (0x0005a8c0) slider_cont_pane_cp1

0xbda1,	// (0x0005a8d4) slider_form_pane_cp

0x4063,	// (0x00052b96) input_focus_pane_g1

0x406b,	// (0x00052b9e) input_focus_pane_g2

0x4073,	// (0x00052ba6) input_focus_pane_g3

0x407b,	// (0x00052bae) input_focus_pane_g4

0x4083,	// (0x00052bb6) input_focus_pane_g5

0x408b,	// (0x00052bbe) input_focus_pane_g6

0x4093,	// (0x00052bc6) input_focus_pane_g7

0x409b,	// (0x00052bce) input_focus_pane_g8

0x40a3,	// (0x00052bd6) input_focus_pane_g9

0x36c4,	// (0x000521f7) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0005e1bf) input_focus_pane_g

0x5ae0,	// (0x00054613) wait_border_pane_g3_copy1

0xbda9,	// (0x0005a8dc) data_form_pane_t1

0x36c4,	// (0x000521f7) wait_anim_pane_g1_copy1

0xc7ac,	// (0x0005b2df) data_form_wide_pane_t1

0xbdc3,	// (0x0005a8f6) list_form_graphic_pane_cp_ParamLimits

0xbdc3,	// (0x0005a8f6) list_form_graphic_pane_cp

0x69fb,	// (0x0005552e) slider_form_pane_g1

0x6a04,	// (0x00055537) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0005e4bd) slider_form_pane_g

0xbdc3,	// (0x0005a8f6) list_form_graphic_pane_ParamLimits

0xbdc3,	// (0x0005a8f6) list_form_graphic_pane

0x0bf2,	// (0x0004f725) list_form_graphic_pane_g1

0x0bfa,	// (0x0004f72d) list_form_graphic_pane_t1_ParamLimits

0x0bfa,	// (0x0004f72d) list_form_graphic_pane_t1

0x37ae,	// (0x000522e1) list_highlight_pane_cp5_ParamLimits

0x37ae,	// (0x000522e1) list_highlight_pane_cp5

0x0c0f,	// (0x0004f742) find_pane_g1

0x40ab,	// (0x00052bde) input_find_pane

0x0c18,	// (0x0004f74b) input_find_pane_g1_ParamLimits

0x0c18,	// (0x0004f74b) input_find_pane_g1

0x0c24,	// (0x0004f757) input_find_pane_t1_ParamLimits

0x0c24,	// (0x0004f757) input_find_pane_t1

0x0c39,	// (0x0004f76c) input_find_pane_t2_ParamLimits

0x0c39,	// (0x0004f76c) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0005e1d4) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0005e1d4) input_find_pane_t

0x40b4,	// (0x00052be7) input_focus_pane_cp5_ParamLimits

0x40b4,	// (0x00052be7) input_focus_pane_cp5

0x40ce,	// (0x00052c01) bg_popup_window_pane_cp2_ParamLimits

0x40ce,	// (0x00052c01) bg_popup_window_pane_cp2

0x40db,	// (0x00052c0e) listscroll_menu_pane_ParamLimits

0x40db,	// (0x00052c0e) listscroll_menu_pane

0xd2bd,	// (0x0005bdf0) popup_submenu_window_ParamLimits

0xd2bd,	// (0x0005bdf0) popup_submenu_window

0x410f,	// (0x00052c42) find_popup_pane_g1

0x4117,	// (0x00052c4a) input_popup_find_pane_cp

0x40b4,	// (0x00052be7) input_focus_pane_cp4_ParamLimits

0x40b4,	// (0x00052be7) input_focus_pane_cp4

0x412f,	// (0x00052c62) input_popup_find_pane_t1_ParamLimits

0x412f,	// (0x00052c62) input_popup_find_pane_t1

0x36ce,	// (0x00052201) bg_popup_sub_pane_cp

0x415d,	// (0x00052c90) listscroll_popup_sub_pane

0x4165,	// (0x00052c98) list_submenu_pane_ParamLimits

0x4165,	// (0x00052c98) list_submenu_pane

0x4176,	// (0x00052ca9) scroll_pane_cp4

0x417e,	// (0x00052cb1) list_single_popup_submenu_pane_ParamLimits

0x417e,	// (0x00052cb1) list_single_popup_submenu_pane

0x4192,	// (0x00052cc5) list_single_popup_submenu_pane_g1

0x419a,	// (0x00052ccd) list_single_popup_submenu_pane_t1_ParamLimits

0x419a,	// (0x00052ccd) list_single_popup_submenu_pane_t1

0x3a29,	// (0x0005255c) bg_active_tab_pane_cp1_ParamLimits

0x3a29,	// (0x0005255c) bg_active_tab_pane_cp1

0xd2f3,	// (0x0005be26) tabs_2_active_pane_g1

0xd2fb,	// (0x0005be2e) tabs_2_active_pane_t1

0x3a29,	// (0x0005255c) bg_passive_tab_pane_cp1_ParamLimits

0x3a29,	// (0x0005255c) bg_passive_tab_pane_cp1

0xd2f3,	// (0x0005be26) tabs_2_passive_pane_g1

0xd2fb,	// (0x0005be2e) tabs_2_passive_pane_t1

0x37ae,	// (0x000522e1) bg_active_tab_pane_cp4

0xd30d,	// (0x0005be40) tabs_2_long_active_pane_t1

0x4fba,	// (0x00053aed) bg_passive_tab_pane_cp4

0x18dd,	// (0x00050410) list_single_midp_graphic_pane_g4_ParamLimits

0x37ae,	// (0x000522e1) bg_active_tab_pane_cp5

0xd320,	// (0x0005be53) tabs_3_long_active_pane_t1

0x4fba,	// (0x00053aed) bg_passive_tab_pane_cp5

0x18dd,	// (0x00050410) list_single_midp_graphic_pane_g4

0x37ae,	// (0x000522e1) bg_popup_window_pane_cp13_ParamLimits

0x37ae,	// (0x000522e1) bg_popup_window_pane_cp13

0x4211,	// (0x00052d44) listscroll_popup_fast_pane_ParamLimits

0x4211,	// (0x00052d44) listscroll_popup_fast_pane

0x421d,	// (0x00052d50) grid_popup_fast_pane_ParamLimits

0x421d,	// (0x00052d50) grid_popup_fast_pane

0x422f,	// (0x00052d62) scroll_pane_cp9_ParamLimits

0x422f,	// (0x00052d62) scroll_pane_cp9

0x82a1,	// (0x00056dd4) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x82a1,	// (0x00056dd4) list_single_graphic_hl_pane_t1_cp2

0x4253,	// (0x00052d86) input_focus_pane_cp20_ParamLimits

0x4253,	// (0x00052d86) input_focus_pane_cp20

0x4261,	// (0x00052d94) query_popup_data_pane_t1_ParamLimits

0x4261,	// (0x00052d94) query_popup_data_pane_t1

0x4274,	// (0x00052da7) query_popup_data_pane_t2_ParamLimits

0x4274,	// (0x00052da7) query_popup_data_pane_t2

0x42ba,	// (0x00052ded) query_popup_data_pane_t3_ParamLimits

0x42ba,	// (0x00052ded) query_popup_data_pane_t3

0x42fb,	// (0x00052e2e) query_popup_data_pane_t4_ParamLimits

0x42fb,	// (0x00052e2e) query_popup_data_pane_t4

0x4337,	// (0x00052e6a) query_popup_data_pane_t5_ParamLimits

0x4337,	// (0x00052e6a) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0005e1d9) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0005e1d9) query_popup_data_pane_t

0x4063,	// (0x00052b96) bg_set_opt_pane_g1

0x406b,	// (0x00052b9e) bg_set_opt_pane_g2

0x4073,	// (0x00052ba6) bg_set_opt_pane_g3

0x407b,	// (0x00052bae) bg_set_opt_pane_g4

0x4083,	// (0x00052bb6) bg_set_opt_pane_g5

0x408b,	// (0x00052bbe) bg_set_opt_pane_g6

0x4093,	// (0x00052bc6) bg_set_opt_pane_g7

0x409b,	// (0x00052bce) bg_set_opt_pane_g8

0x40a3,	// (0x00052bd6) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0005e1e4) bg_set_opt_pane_g

0x0f57,	// (0x0004fa8a) control_top_pane_stacon_ParamLimits

0x0f57,	// (0x0004fa8a) control_top_pane_stacon

0x0faa,	// (0x0004fadd) signal_pane_stacon_ParamLimits

0x0faa,	// (0x0004fadd) signal_pane_stacon

0x4911,	// (0x00053444) stacon_top_pane_g1_ParamLimits

0x4911,	// (0x00053444) stacon_top_pane_g1

0x0fcf,	// (0x0004fb02) title_pane_stacon_ParamLimits

0x0fcf,	// (0x0004fb02) title_pane_stacon

0x0ff9,	// (0x0004fb2c) uni_indicator_pane_stacon_ParamLimits

0x0ff9,	// (0x0004fb2c) uni_indicator_pane_stacon

0x100e,	// (0x0004fb41) battery_pane_stacon_ParamLimits

0x100e,	// (0x0004fb41) battery_pane_stacon

0x1052,	// (0x0004fb85) control_bottom_pane_stacon_ParamLimits

0x1052,	// (0x0004fb85) control_bottom_pane_stacon

0x1075,	// (0x0004fba8) navi_pane_stacon_ParamLimits

0x1075,	// (0x0004fba8) navi_pane_stacon

0x4933,	// (0x00053466) stacon_bottom_pane_g1_ParamLimits

0x4933,	// (0x00053466) stacon_bottom_pane_g1

0x0c4e,	// (0x0004f781) aid_levels_signal_lsc_ParamLimits

0x0c4e,	// (0x0004f781) aid_levels_signal_lsc

0x0c65,	// (0x0004f798) signal_pane_stacon_g1_ParamLimits

0x0c65,	// (0x0004f798) signal_pane_stacon_g1

0x0c79,	// (0x0004f7ac) signal_pane_stacon_g2_ParamLimits

0x0c79,	// (0x0004f7ac) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0005e1f7) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0005e1f7) signal_pane_stacon_g

0x0cae,	// (0x0004f7e1) title_pane_stacon_t1_ParamLimits

0x0cae,	// (0x0004f7e1) title_pane_stacon_t1

0x437b,	// (0x00052eae) uni_indicator_pane_stacon_g1

0x4385,	// (0x00052eb8) uni_indicator_pane_stacon_g2

0x438f,	// (0x00052ec2) uni_indicator_pane_stacon_g3

0x4399,	// (0x00052ecc) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0005e203) uni_indicator_pane_stacon_g

0x0cd3,	// (0x0004f806) control_top_pane_stacon_g1

0x0cdb,	// (0x0004f80e) control_top_pane_stacon_t1_ParamLimits

0x0cdb,	// (0x0004f80e) control_top_pane_stacon_t1

0x0d12,	// (0x0004f845) aid_levels_battery_lsc_ParamLimits

0x0d12,	// (0x0004f845) aid_levels_battery_lsc

0x0d2a,	// (0x0004f85d) battery_pane_stacon_g1_ParamLimits

0x0d2a,	// (0x0004f85d) battery_pane_stacon_g1

0x0d3d,	// (0x0004f870) battery_pane_stacon_g2_ParamLimits

0x0d3d,	// (0x0004f870) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0005e20c) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0005e20c) battery_pane_stacon_g

0x0d7b,	// (0x0004f8ae) navi_icon_pane_stacon

0x0d8f,	// (0x0004f8c2) navi_navi_pane_stacon

0x0d7b,	// (0x0004f8ae) navi_text_pane_stacon

0x0cd3,	// (0x0004f806) control_bottom_pane_stacon_g1

0x0da3,	// (0x0004f8d6) control_bottom_pane_stacon_t1_ParamLimits

0x0da3,	// (0x0004f8d6) control_bottom_pane_stacon_t1

0xd332,	// (0x0005be65) grid_app_pane_ParamLimits

0xd332,	// (0x0005be65) grid_app_pane

0xd368,	// (0x0005be9b) scroll_pane_cp15_ParamLimits

0xd368,	// (0x0005be9b) scroll_pane_cp15

0xd37d,	// (0x0005beb0) cell_app_pane_ParamLimits

0xd37d,	// (0x0005beb0) cell_app_pane

0xd3c4,	// (0x0005bef7) cell_app_pane_g1_ParamLimits

0xd3c4,	// (0x0005bef7) cell_app_pane_g1

0x443c,	// (0x00052f6f) cell_app_pane_g2_ParamLimits

0x443c,	// (0x00052f6f) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0005e211) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0005e211) cell_app_pane_g

0xd3e8,	// (0x0005bf1b) cell_app_pane_t1_ParamLimits

0xd3e8,	// (0x0005bf1b) cell_app_pane_t1

0x445f,	// (0x00052f92) grid_highlight_pane_ParamLimits

0x445f,	// (0x00052f92) grid_highlight_pane

0x4063,	// (0x00052b96) cell_highlight_pane_g1

0x406b,	// (0x00052b9e) cell_highlight_pane_g2

0x4073,	// (0x00052ba6) cell_highlight_pane_g3

0x407b,	// (0x00052bae) cell_highlight_pane_g4

0x4083,	// (0x00052bb6) cell_highlight_pane_g5

0x408b,	// (0x00052bbe) cell_highlight_pane_g6

0x4093,	// (0x00052bc6) cell_highlight_pane_g7

0x409b,	// (0x00052bce) cell_highlight_pane_g8

0x40a3,	// (0x00052bd6) cell_highlight_pane_g9

0x36c4,	// (0x000521f7) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0005e1bf) cell_highlight_pane_g

0x4470,	// (0x00052fa3) bg_scroll_pane

0x0ded,	// (0x0004f920) scroll_handle_pane

0x44b7,	// (0x00052fea) scroll_bg_pane_g1

0x44cc,	// (0x00052fff) scroll_bg_pane_g2

0x44e4,	// (0x00053017) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0005e216) scroll_bg_pane_g

0x44f9,	// (0x0005302c) scroll_handle_focus_pane_ParamLimits

0x44f9,	// (0x0005302c) scroll_handle_focus_pane

0x44b7,	// (0x00052fea) scroll_handle_pane_g1

0x4506,	// (0x00053039) scroll_handle_pane_g2

0x44e4,	// (0x00053017) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0005e21d) scroll_handle_pane_g

0x40b4,	// (0x00052be7) bg_popup_sub_pane_cp21_ParamLimits

0x40b4,	// (0x00052be7) bg_popup_sub_pane_cp21

0x451a,	// (0x0005304d) popup_fep_japan_predictive_window_t1_ParamLimits

0x451a,	// (0x0005304d) popup_fep_japan_predictive_window_t1

0x4534,	// (0x00053067) popup_fep_japan_predictive_window_t2_ParamLimits

0x4534,	// (0x00053067) popup_fep_japan_predictive_window_t2

0x4567,	// (0x0005309a) popup_fep_japan_predictive_window_t3_ParamLimits

0x4567,	// (0x0005309a) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0005e224) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0005e224) popup_fep_japan_predictive_window_t

0x36ce,	// (0x00052201) bg_popup_sub_pane_cp23

0x459e,	// (0x000530d1) listscroll_japin_cand_pane

0x45a6,	// (0x000530d9) popup_fep_japan_candidate_window_t1

0x45b4,	// (0x000530e7) candidate_pane_ParamLimits

0x45b4,	// (0x000530e7) candidate_pane

0x45c6,	// (0x000530f9) scroll_pane_cp30

0x45ce,	// (0x00053101) list_single_popup_jap_candidate_pane_ParamLimits

0x45ce,	// (0x00053101) list_single_popup_jap_candidate_pane

0x36ce,	// (0x00052201) list_highlight_pane_cp30

0x45e2,	// (0x00053115) list_single_popup_jap_candidate_pane_t1

0x45f1,	// (0x00053124) level_1_signal

0x45fe,	// (0x00053131) level_2_signal

0x460b,	// (0x0005313e) level_3_signal

0x4618,	// (0x0005314b) level_4_signal

0x4625,	// (0x00053158) level_5_signal

0x4632,	// (0x00053165) level_6_signal

0x463f,	// (0x00053172) level_7_signal

0x45f1,	// (0x00053124) level_1_battery

0x45fe,	// (0x00053131) level_2_battery

0x460b,	// (0x0005313e) level_3_battery

0x4618,	// (0x0005314b) level_4_battery

0x4625,	// (0x00053158) level_5_battery

0x4632,	// (0x00053165) level_6_battery

0x463f,	// (0x00053172) level_7_battery

0x4664,	// (0x00053197) list_menu_pane_ParamLimits

0x4664,	// (0x00053197) list_menu_pane

0x467a,	// (0x000531ad) scroll_pane_cp25_ParamLimits

0x467a,	// (0x000531ad) scroll_pane_cp25

0x4693,	// (0x000531c6) list_double2_graphic_pane_cp2_ParamLimits

0x4693,	// (0x000531c6) list_double2_graphic_pane_cp2

0x4693,	// (0x000531c6) list_double2_large_graphic_pane_cp2_ParamLimits

0x4693,	// (0x000531c6) list_double2_large_graphic_pane_cp2

0x4693,	// (0x000531c6) list_double2_pane_cp2_ParamLimits

0x4693,	// (0x000531c6) list_double2_pane_cp2

0x4693,	// (0x000531c6) list_double_graphic_pane_cp2_ParamLimits

0x4693,	// (0x000531c6) list_double_graphic_pane_cp2

0x4693,	// (0x000531c6) list_double_large_graphic_pane_cp2_ParamLimits

0x4693,	// (0x000531c6) list_double_large_graphic_pane_cp2

0x4693,	// (0x000531c6) list_double_number_pane_cp2_ParamLimits

0x4693,	// (0x000531c6) list_double_number_pane_cp2

0x4693,	// (0x000531c6) list_double_pane_cp2_ParamLimits

0x4693,	// (0x000531c6) list_double_pane_cp2

0xd410,	// (0x0005bf43) list_single_2graphic_pane_cp2_ParamLimits

0xd410,	// (0x0005bf43) list_single_2graphic_pane_cp2

0xd410,	// (0x0005bf43) list_single_graphic_heading_pane_cp2_ParamLimits

0xd410,	// (0x0005bf43) list_single_graphic_heading_pane_cp2

0xd410,	// (0x0005bf43) list_single_graphic_pane_cp2_ParamLimits

0xd410,	// (0x0005bf43) list_single_graphic_pane_cp2

0xd410,	// (0x0005bf43) list_single_heading_pane_cp2_ParamLimits

0xd410,	// (0x0005bf43) list_single_heading_pane_cp2

0x46cd,	// (0x00053200) list_single_large_graphic_pane_cp2_ParamLimits

0x46cd,	// (0x00053200) list_single_large_graphic_pane_cp2

0xd410,	// (0x0005bf43) list_single_number_heading_pane_cp2_ParamLimits

0xd410,	// (0x0005bf43) list_single_number_heading_pane_cp2

0xd410,	// (0x0005bf43) list_single_number_pane_cp2_ParamLimits

0xd410,	// (0x0005bf43) list_single_number_pane_cp2

0xd410,	// (0x0005bf43) list_single_pane_cp2_ParamLimits

0xd410,	// (0x0005bf43) list_single_pane_cp2

0x4748,	// (0x0005327b) bg_popup_sub_pane_cp22

0x0e9c,	// (0x0004f9cf) popup_side_volume_key_window_g1

0x0ec0,	// (0x0004f9f3) popup_side_volume_key_window_t1

0x0edc,	// (0x0004fa0f) volume_small_pane_cp1

0x3a29,	// (0x0005255c) bg_popup_sub_pane_cp24_ParamLimits

0x3a29,	// (0x0005255c) bg_popup_sub_pane_cp24

0x475e,	// (0x00053291) fep_china_uni_candidate_pane_ParamLimits

0x475e,	// (0x00053291) fep_china_uni_candidate_pane

0x4772,	// (0x000532a5) fep_china_uni_entry_pane

0x4782,	// (0x000532b5) popup_fep_china_uni_window_g1

0x479e,	// (0x000532d1) fep_china_uni_entry_pane_g1

0x47a6,	// (0x000532d9) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0005e255) fep_china_uni_entry_pane_g

0x47c6,	// (0x000532f9) fep_entry_item_pane

0x47d0,	// (0x00053303) fep_candidate_item_pane

0x47d8,	// (0x0005330b) fep_china_uni_candidate_pane_g1

0x47e0,	// (0x00053313) fep_china_uni_candidate_pane_g2

0x47e8,	// (0x0005331b) fep_china_uni_candidate_pane_g3

0x47f0,	// (0x00053323) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0005e25a) fep_china_uni_candidate_pane_g

0x36c4,	// (0x000521f7) fep_entry_item_pane_g1

0x47f8,	// (0x0005332b) fep_entry_item_pane_t1_ParamLimits

0x47f8,	// (0x0005332b) fep_entry_item_pane_t1

0x480e,	// (0x00053341) fep_candidate_item_pane_t1_ParamLimits

0x480e,	// (0x00053341) fep_candidate_item_pane_t1

0x4823,	// (0x00053356) fep_candidate_item_pane_t2_ParamLimits

0x4823,	// (0x00053356) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0005e263) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0005e263) fep_candidate_item_pane_t

0x37ae,	// (0x000522e1) list_highlight_pane_cp31_ParamLimits

0x37ae,	// (0x000522e1) list_highlight_pane_cp31

0x4835,	// (0x00053368) level_1_signal_lsc

0x483e,	// (0x00053371) level_2_signal_lsc

0x4847,	// (0x0005337a) level_3_signal_lsc

0x4850,	// (0x00053383) level_4_signal_lsc

0x4859,	// (0x0005338c) level_5_signal_lsc

0x4862,	// (0x00053395) level_6_signal_lsc

0x486b,	// (0x0005339e) level_7_signal_lsc

0x486b,	// (0x0005339e) level_1_battery_lsc

0x4874,	// (0x000533a7) level_2_battery_lsc

0x487d,	// (0x000533b0) level_3_battery_lsc

0x4886,	// (0x000533b9) level_4_battery_lsc

0x488f,	// (0x000533c2) level_5_battery_lsc

0x4898,	// (0x000533cb) level_6_battery_lsc

0x4835,	// (0x00053368) level_7_battery_lsc

0x48a1,	// (0x000533d4) scroll_handle_focus_pane_g1

0x48aa,	// (0x000533dd) scroll_handle_focus_pane_g2

0x48b3,	// (0x000533e6) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0005e268) scroll_handle_focus_pane_g

0x0ee4,	// (0x0004fa17) list_single_2graphic_pane_g1_ParamLimits

0x0ee4,	// (0x0004fa17) list_single_2graphic_pane_g1

0xb8e1,	// (0x0005a414) list_single_2graphic_pane_g2_ParamLimits

0xb8e1,	// (0x0005a414) list_single_2graphic_pane_g2

0x2cfe,	// (0x00051831) list_single_2graphic_pane_g3_ParamLimits

0x2cfe,	// (0x00051831) list_single_2graphic_pane_g3

0x0ef0,	// (0x0004fa23) list_single_2graphic_pane_g4_ParamLimits

0x0ef0,	// (0x0004fa23) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0005e26f) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0005e26f) list_single_2graphic_pane_g

0x0f01,	// (0x0004fa34) list_single_2graphic_pane_t1_ParamLimits

0x0f01,	// (0x0004fa34) list_single_2graphic_pane_t1

0xbdd5,	// (0x0005a908) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbdd5,	// (0x0005a908) list_double2_graphic_large_graphic_pane_g1

0xba9d,	// (0x0005a5d0) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xba9d,	// (0x0005a5d0) list_double2_graphic_large_graphic_pane_g2

0xb8fe,	// (0x0005a431) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb8fe,	// (0x0005a431) list_double2_graphic_large_graphic_pane_g3

0xbde7,	// (0x0005a91a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbde7,	// (0x0005a91a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0005e278) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0005e278) list_double2_graphic_large_graphic_pane_g

0xbdf3,	// (0x0005a926) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbdf3,	// (0x0005a926) list_double2_graphic_large_graphic_pane_t1

0xbe09,	// (0x0005a93c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbe09,	// (0x0005a93c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0005e281) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0005e281) list_double2_graphic_large_graphic_pane_t

0x49fa,	// (0x0005352d) popup_fast_swap_window_ParamLimits

0x49fa,	// (0x0005352d) popup_fast_swap_window

0x4a16,	// (0x00053549) popup_side_volume_key_window

0x4a30,	// (0x00053563) stacon_top_pane

0x4a3a,	// (0x0005356d) status_pane_ParamLimits

0x4a3a,	// (0x0005356d) status_pane

0xd505,	// (0x0005c038) status_small_pane

0x36ce,	// (0x00052201) control_pane

0x36ce,	// (0x00052201) stacon_bottom_pane

0x3ff7,	// (0x00052b2a) scroll_pane_cp121

0x3fee,	// (0x00052b21) set_content_pane

0xd49d,	// (0x0005bfd0) bg_active_tab_pane_g1_cp1

0x48c5,	// (0x000533f8) bg_active_tab_pane_g2_cp1

0xd4a6,	// (0x0005bfd9) bg_active_tab_pane_g3_cp1

0xd49d,	// (0x0005bfd0) bg_passive_tab_pane_g1_cp1

0x48c5,	// (0x000533f8) bg_passive_tab_pane_g2_cp1

0xd4a6,	// (0x0005bfd9) bg_passive_tab_pane_g3_cp1

0xd4af,	// (0x0005bfe2) bg_active_tab_pane_g1_cp2

0x48c5,	// (0x000533f8) bg_active_tab_pane_g2_cp2

0xd4b8,	// (0x0005bfeb) bg_active_tab_pane_g3_cp2

0xd4af,	// (0x0005bfe2) bg_passive_tab_pane_g1_cp2

0x48c5,	// (0x000533f8) bg_passive_tab_pane_g2_cp2

0xd4b8,	// (0x0005bfeb) bg_passive_tab_pane_g3_cp2

0x48e9,	// (0x0005341c) bg_active_tab_pane_g1_cp3

0x48c5,	// (0x000533f8) bg_active_tab_pane_g2_cp3

0x48f2,	// (0x00053425) bg_active_tab_pane_g3_cp3

0x48e9,	// (0x0005341c) bg_passive_tab_pane_g1_cp3

0x48c5,	// (0x000533f8) bg_passive_tab_pane_g2_cp3

0x48f2,	// (0x00053425) bg_passive_tab_pane_g3_cp3

0xd4c1,	// (0x0005bff4) bg_active_tab_pane_g1_cp4

0x48c5,	// (0x000533f8) bg_active_tab_pane_g2_cp4

0xd4cc,	// (0x0005bfff) bg_active_tab_pane_g3_cp4

0xd4c1,	// (0x0005bff4) bg_passive_tab_pane_g1_cp4

0x48c5,	// (0x000533f8) bg_passive_tab_pane_g2_cp4

0xd4cc,	// (0x0005bfff) bg_passive_tab_pane_g3_cp4

0x494f,	// (0x00053482) bg_active_tab_pane_g1_cp5

0x48c5,	// (0x000533f8) bg_active_tab_pane_g2_cp5

0x4958,	// (0x0005348b) bg_active_tab_pane_g3_cp5

0x494f,	// (0x00053482) bg_passive_tab_pane_g1_cp5

0x48c5,	// (0x000533f8) bg_passive_tab_pane_g2_cp5

0x4958,	// (0x0005348b) bg_passive_tab_pane_g3_cp5

0x6f89,	// (0x00055abc) list_set_graphic_pane_ParamLimits

0x6f89,	// (0x00055abc) list_set_graphic_pane

0x36ce,	// (0x00052201) bg_set_opt_pane_cp4

0xd4d7,	// (0x0005c00a) list_set_graphic_pane_g1_ParamLimits

0xd4d7,	// (0x0005c00a) list_set_graphic_pane_g1

0xd4e3,	// (0x0005c016) list_set_graphic_pane_g2_ParamLimits

0xd4e3,	// (0x0005c016) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0005e286) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0005e286) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x0005e604) volume_small_pane_cp_g

0x49ad,	// (0x000534e0) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x49ad,	// (0x000534e0) list_double2_large_graphic_pane_g1_cp2

0x49b9,	// (0x000534ec) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x49b9,	// (0x000534ec) list_double2_large_graphic_pane_g2_cp2

0x49ca,	// (0x000534fd) list_double2_large_graphic_pane_g3_cp2

0x49d2,	// (0x00053505) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x49d2,	// (0x00053505) list_double2_large_graphic_pane_t1_cp2

0x49e8,	// (0x0005351b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x49e8,	// (0x0005351b) list_double2_large_graphic_pane_t2_cp2

0x65b9,	// (0x000550ec) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x65b9,	// (0x000550ec) list_double_large_graphic_pane_g1_cp2

0x65ca,	// (0x000550fd) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x65ca,	// (0x000550fd) list_double_large_graphic_pane_g2_cp2

0x4b61,	// (0x00053694) list_double_large_graphic_pane_g3_cp2

0x65db,	// (0x0005510e) list_double_large_graphic_pane_g4_cp

0x65e3,	// (0x00055116) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x65e3,	// (0x00055116) list_double_large_graphic_pane_t1_cp2

0x65fa,	// (0x0005512d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x65fa,	// (0x0005512d) list_double_large_graphic_pane_t2_cp2

0x4a53,	// (0x00053586) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4a53,	// (0x00053586) list_double2_graphic_pane_g1_cp2

0x4a61,	// (0x00053594) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4a61,	// (0x00053594) list_double2_graphic_pane_g2_cp2

0x4a72,	// (0x000535a5) list_double2_graphic_pane_g3_cp2

0x4a7c,	// (0x000535af) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4a7c,	// (0x000535af) list_double2_graphic_pane_t1_cp2

0x4a92,	// (0x000535c5) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4a92,	// (0x000535c5) list_double2_graphic_pane_t2_cp2

0x4aa4,	// (0x000535d7) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4aa4,	// (0x000535d7) list_single_number_heading_pane_g1_cp2

0x4ab0,	// (0x000535e3) list_single_number_heading_pane_g2_cp2

0x4ab8,	// (0x000535eb) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4ab8,	// (0x000535eb) list_single_number_heading_pane_t1_cp2

0x4ace,	// (0x00053601) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4ace,	// (0x00053601) list_single_number_heading_pane_t2_cp2

0x4ae0,	// (0x00053613) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4ae0,	// (0x00053613) list_single_number_heading_pane_t3_cp2

0x4aa4,	// (0x000535d7) list_single_heading_pane_g1_cp2_ParamLimits

0x4aa4,	// (0x000535d7) list_single_heading_pane_g1_cp2

0x4ab0,	// (0x000535e3) list_single_heading_pane_g2_cp2

0x4ab8,	// (0x000535eb) list_single_heading_pane_t1_cp2_ParamLimits

0x4ab8,	// (0x000535eb) list_single_heading_pane_t1_cp2

0x63c3,	// (0x00054ef6) list_single_heading_pane_t2_cp2_ParamLimits

0x63c3,	// (0x00054ef6) list_single_heading_pane_t2_cp2

0x630b,	// (0x00054e3e) list_double_graphic_pane_g1_cp2_ParamLimits

0x630b,	// (0x00054e3e) list_double_graphic_pane_g1_cp2

0x6317,	// (0x00054e4a) list_double_graphic_pane_g2_cp2_ParamLimits

0x6317,	// (0x00054e4a) list_double_graphic_pane_g2_cp2

0x6326,	// (0x00054e59) list_double_graphic_pane_g3_cp2

0x632e,	// (0x00054e61) list_double_graphic_pane_t1_cp2_ParamLimits

0x632e,	// (0x00054e61) list_double_graphic_pane_t1_cp2

0x6344,	// (0x00054e77) list_double_graphic_pane_t2_cp2_ParamLimits

0x6344,	// (0x00054e77) list_double_graphic_pane_t2_cp2

0x4b55,	// (0x00053688) list_double_number_pane_g1_cp2_ParamLimits

0x4b55,	// (0x00053688) list_double_number_pane_g1_cp2

0x4b61,	// (0x00053694) list_double_number_pane_g2_cp2

0x62cf,	// (0x00054e02) list_double_number_pane_t1_cp2_ParamLimits

0x62cf,	// (0x00054e02) list_double_number_pane_t1_cp2

0x62e3,	// (0x00054e16) list_double_number_pane_t2_cp2_ParamLimits

0x62e3,	// (0x00054e16) list_double_number_pane_t2_cp2

0x62f9,	// (0x00054e2c) list_double_number_pane_t3_cp2_ParamLimits

0x62f9,	// (0x00054e2c) list_double_number_pane_t3_cp2

0x61b8,	// (0x00054ceb) list_single_graphic_pane_g1_cp2_ParamLimits

0x61b8,	// (0x00054ceb) list_single_graphic_pane_g1_cp2

0x4bb9,	// (0x000536ec) list_single_graphic_pane_g2_cp2_ParamLimits

0x4bb9,	// (0x000536ec) list_single_graphic_pane_g2_cp2

0x4bc5,	// (0x000536f8) list_single_graphic_pane_g3_cp2

0x618e,	// (0x00054cc1) list_single_graphic_pane_t1_cp2_ParamLimits

0x618e,	// (0x00054cc1) list_single_graphic_pane_t1_cp2

0x4bb9,	// (0x000536ec) list_single_number_pane_g1_cp2_ParamLimits

0x4bb9,	// (0x000536ec) list_single_number_pane_g1_cp2

0x4bc5,	// (0x000536f8) list_single_number_pane_g2_cp2

0x618e,	// (0x00054cc1) list_single_number_pane_t1_cp2_ParamLimits

0x618e,	// (0x00054cc1) list_single_number_pane_t1_cp2

0x61a4,	// (0x00054cd7) list_single_number_pane_t2_cp2_ParamLimits

0x61a4,	// (0x00054cd7) list_single_number_pane_t2_cp2

0x49b9,	// (0x000534ec) list_double2_pane_g1_cp2_ParamLimits

0x49b9,	// (0x000534ec) list_double2_pane_g1_cp2

0x49ca,	// (0x000534fd) list_double2_pane_g2_cp2

0x4b2d,	// (0x00053660) list_double2_pane_t1_cp2_ParamLimits

0x4b2d,	// (0x00053660) list_double2_pane_t1_cp2

0x4b43,	// (0x00053676) list_double2_pane_t2_cp2_ParamLimits

0x4b43,	// (0x00053676) list_double2_pane_t2_cp2

0x4b55,	// (0x00053688) list_double_pane_g1_cp2_ParamLimits

0x4b55,	// (0x00053688) list_double_pane_g1_cp2

0x4b61,	// (0x00053694) list_double_pane_g2_cp2

0x4b69,	// (0x0005369c) list_double_pane_t1_cp2_ParamLimits

0x4b69,	// (0x0005369c) list_double_pane_t1_cp2

0x4b7f,	// (0x000536b2) list_double_pane_t2_cp2_ParamLimits

0x4b7f,	// (0x000536b2) list_double_pane_t2_cp2

0x4ba9,	// (0x000536dc) list_single_pane_cp2_g3

0x4bb9,	// (0x000536ec) list_single_pane_g1_cp2_ParamLimits

0x4bb9,	// (0x000536ec) list_single_pane_g1_cp2

0x4bc5,	// (0x000536f8) list_single_pane_g2_cp2

0x4bcd,	// (0x00053700) list_single_pane_t1_cp2_ParamLimits

0x4bcd,	// (0x00053700) list_single_pane_t1_cp2

0x4be5,	// (0x00053718) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4be5,	// (0x00053718) list_single_large_graphic_pane_g1_cp2

0x4bf1,	// (0x00053724) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4bf1,	// (0x00053724) list_single_large_graphic_pane_g2_cp2

0x4bfd,	// (0x00053730) list_single_large_graphic_pane_g3_cp2

0x4c05,	// (0x00053738) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4c05,	// (0x00053738) list_single_large_graphic_pane_g4_cp1

0x4c1f,	// (0x00053752) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4c1f,	// (0x00053752) list_single_large_graphic_pane_t1_cp2

0x615a,	// (0x00054c8d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x615a,	// (0x00054c8d) list_single_graphic_heading_pane_g1_cp2

0x6127,	// (0x00054c5a) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6127,	// (0x00054c5a) list_single_graphic_heading_pane_g4_cp2

0x4bc5,	// (0x000536f8) list_single_graphic_heading_pane_g5_cp2

0x6166,	// (0x00054c99) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6166,	// (0x00054c99) list_single_graphic_heading_pane_t1_cp2

0x617c,	// (0x00054caf) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x617c,	// (0x00054caf) list_single_graphic_heading_pane_t2_cp2

0x611b,	// (0x00054c4e) list_single_2graphic_pane_g1_cp2_ParamLimits

0x611b,	// (0x00054c4e) list_single_2graphic_pane_g1_cp2

0x6127,	// (0x00054c5a) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6127,	// (0x00054c5a) list_single_2graphic_pane_g2_cp2

0x4bc5,	// (0x000536f8) list_single_2graphic_pane_g3_cp2

0x6138,	// (0x00054c6b) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6138,	// (0x00054c6b) list_single_2graphic_pane_g4_cp2

0x6144,	// (0x00054c77) list_single_2graphic_pane_t1_cp2_ParamLimits

0x6144,	// (0x00054c77) list_single_2graphic_pane_t1_cp2

0x36c4,	// (0x000521f7) list_highlight_pane_g10_cp1

0x5cf3,	// (0x00054826) list_highlight_pane_g1_cp1

0x5cfb,	// (0x0005482e) list_highlight_pane_g2_cp1

0x5d03,	// (0x00054836) list_highlight_pane_g3_cp1

0x5d0b,	// (0x0005483e) list_highlight_pane_g4_cp1

0x5d13,	// (0x00054846) list_highlight_pane_g5_cp1

0x5d1b,	// (0x0005484e) list_highlight_pane_g6_cp1

0x5d23,	// (0x00054856) list_highlight_pane_g7_cp1

0x5d2b,	// (0x0005485e) list_highlight_pane_g8_cp1

0x5d33,	// (0x00054866) list_highlight_pane_g9_cp1

0xdbff,	// (0x0005c732) form_field_slider_pane_t3

0xdc0f,	// (0x0005c742) form_field_slider_pane_t4

0x5c27,	// (0x0005475a) slider_form_pane_ParamLimits

0x5c27,	// (0x0005475a) slider_form_pane

0x36ce,	// (0x00052201) control_abbreviations

0x36ce,	// (0x00052201) control_conventions

0x36ce,	// (0x00052201) control_definitions

0x36ce,	// (0x00052201) format_table_attribute

0x640d,	// (0x00054f40) bg_popup_preview_window_pane_g9

0x36ce,	// (0x00052201) format_table_data2

0x36ce,	// (0x00052201) format_table_data3

0x36ce,	// (0x00052201) format_table_data_example

0x0008,

0x36ce,	// (0x00052201) intro_purpose

0xf8ea,	// (0x0005e41d) bg_popup_preview_window_pane_g

0x36ce,	// (0x00052201) texts_category

0x36ce,	// (0x00052201) texts_graphics

0x4c35,	// (0x00053768) text_digital

0x4c44,	// (0x00053777) text_primary

0x4c53,	// (0x00053786) text_primary_small

0x4c62,	// (0x00053795) text_secondary

0x4c71,	// (0x000537a4) text_title

0x6adc,	// (0x0005560f) bg_passive_tab_pane_g1_cp3_srt

0x48c5,	// (0x000533f8) bg_passive_tab_pane_g2_cp3_srt

0x6ae5,	// (0x00055618) bg_passive_tab_pane_g3_cp3_srt

0x3a29,	// (0x0005255c) bg_active_tab_pane_cp3_srt_ParamLimits

0x3a29,	// (0x0005255c) bg_active_tab_pane_cp3_srt

0x6aee,	// (0x00055621) tabs_4_active_pane_srt_g1

0xdf4c,	// (0x0005ca7f) tabs_4_active_pane_srt_t1_ParamLimits

0xdf4c,	// (0x0005ca7f) tabs_4_active_pane_srt_t1

0x6adc,	// (0x0005560f) bg_active_tab_pane_g1_cp3_copy1

0x48c5,	// (0x000533f8) bg_active_tab_pane_g2_cp3_copy1

0x6ae5,	// (0x00055618) bg_active_tab_pane_g3_cp3_copy1

0x37ae,	// (0x000522e1) tabs_2_long_active_pane_srt_ParamLimits

0x37ae,	// (0x000522e1) tabs_2_long_active_pane_srt

0x37ae,	// (0x000522e1) tabs_2_long_passive_pane_srt_ParamLimits

0x37ae,	// (0x000522e1) tabs_2_long_passive_pane_srt

0x4fba,	// (0x00053aed) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4fba,	// (0x00053aed) bg_passive_tab_pane_cp4_srt

0x683c,	// (0x0005536f) bg_passive_tab_pane_g1_cp4_srt

0x48c5,	// (0x000533f8) bg_passive_tab_pane_g2_cp4_srt

0x6845,	// (0x00055378) bg_passive_tab_pane_g3_cp4_srt

0x37ae,	// (0x000522e1) bg_active_tab_pane_cp4_srt_ParamLimits

0x37ae,	// (0x000522e1) bg_active_tab_pane_cp4_srt

0xdd79,	// (0x0005c8ac) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdd79,	// (0x0005c8ac) tabs_2_long_active_pane_srt_t1

0x683c,	// (0x0005536f) bg_active_tab_pane_g1_cp4_srt

0x48c5,	// (0x000533f8) bg_active_tab_pane_g2_cp4_srt

0x6845,	// (0x00055378) bg_active_tab_pane_g3_cp4_srt

0x3a29,	// (0x0005255c) tabs_3_long_active_pane_srt_ParamLimits

0x3a29,	// (0x0005255c) tabs_3_long_active_pane_srt

0x3a29,	// (0x0005255c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3a29,	// (0x0005255c) tabs_3_long_passive_pane_cp_srt

0x3a29,	// (0x0005255c) tabs_3_long_passive_pane_srt_ParamLimits

0x3a29,	// (0x0005255c) tabs_3_long_passive_pane_srt

0x4fba,	// (0x00053aed) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4fba,	// (0x00053aed) bg_passive_tab_pane_cp5_srt

0x494f,	// (0x00053482) bg_passive_tab_pane_g1_cp5_srt

0x48c5,	// (0x000533f8) bg_passive_tab_pane_g2_cp5_srt

0x4958,	// (0x0005348b) bg_passive_tab_pane_g3_cp5_srt

0x37ae,	// (0x000522e1) bg_active_tab_pane_cp5_srt_ParamLimits

0x37ae,	// (0x000522e1) bg_active_tab_pane_cp5_srt

0xdd63,	// (0x0005c896) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdd63,	// (0x0005c896) tabs_3_long_active_pane_srt_t1

0x494f,	// (0x00053482) bg_active_tab_pane_g1_cp5_srt

0x48c5,	// (0x000533f8) bg_active_tab_pane_g2_cp5_srt

0x4958,	// (0x0005348b) bg_active_tab_pane_g3_cp5_srt

0x681c,	// (0x0005534f) navi_text_pane_srt_t1

0x6814,	// (0x00055347) navi_icon_pane_srt_g1

0x4e36,	// (0x00053969) midp_editing_number_pane_srt

0x4c80,	// (0x000537b3) midp_ticker_pane_srt

0x4e3e,	// (0x00053971) midp_ticker_pane_srt_g1

0x4e46,	// (0x00053979) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0005e2a5) midp_ticker_pane_srt_g

0x4e4e,	// (0x00053981) midp_ticker_pane_srt_t1

0x6805,	// (0x00055338) midp_editing_number_pane_t1_copy1

0x4fba,	// (0x00053aed) listscroll_midp_pane

0x4fba,	// (0x00053aed) midp_form_pane

0x4cee,	// (0x00053821) midp_info_popup_window_ParamLimits

0x4cee,	// (0x00053821) midp_info_popup_window

0x40b4,	// (0x00052be7) bg_popup_sub_pane_cp50_ParamLimits

0x40b4,	// (0x00052be7) bg_popup_sub_pane_cp50

0x5928,	// (0x0005445b) listscroll_midp_info_pane_ParamLimits

0x5928,	// (0x0005445b) listscroll_midp_info_pane

0x5904,	// (0x00054437) listscroll_form_midp_pane_ParamLimits

0x5904,	// (0x00054437) listscroll_form_midp_pane

0x591c,	// (0x0005444f) scroll_bar_cp050

0xdbf3,	// (0x0005c726) list_midp_pane

0x7510,	// (0x00056043) signal_pane_g2_cp

0x581e,	// (0x00054351) listscroll_midp_info_pane_t1_ParamLimits

0x581e,	// (0x00054351) listscroll_midp_info_pane_t1

0x5836,	// (0x00054369) listscroll_midp_info_pane_t2_ParamLimits

0x5836,	// (0x00054369) listscroll_midp_info_pane_t2

0x5874,	// (0x000543a7) listscroll_midp_info_pane_t3_ParamLimits

0x5874,	// (0x000543a7) listscroll_midp_info_pane_t3

0x58ae,	// (0x000543e1) listscroll_midp_info_pane_t4_ParamLimits

0x58ae,	// (0x000543e1) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0005e358) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0005e358) listscroll_midp_info_pane_t

0x4176,	// (0x00052ca9) scroll_pane_cp21

0x57c0,	// (0x000542f3) form_midp_field_choice_group_pane

0x57c9,	// (0x000542fc) form_midp_field_text_pane

0x5804,	// (0x00054337) form_midp_field_time_pane

0x580c,	// (0x0005433f) form_midp_gauge_slider_pane

0x5815,	// (0x00054348) form_midp_gauge_wait_pane

0x36ce,	// (0x00052201) form_midp_image_pane

0xc6a2,	// (0x0005b1d5) list_single_midp_pane_ParamLimits

0xc6a2,	// (0x0005b1d5) list_single_midp_pane

0xdbd0,	// (0x0005c703) form_midp_field_text_pane_t1

0x552c,	// (0x0005405f) input_focus_pane_cp050

0x57af,	// (0x000542e2) list_midp_form_text_pane

0x5743,	// (0x00054276) form_midp_field_choice_group_pane_t1

0x5751,	// (0x00054284) input_focus_pane_cp051

0x5765,	// (0x00054298) list_midp_choice_pane

0x36ce,	// (0x00052201) status_idle_pane

0x5727,	// (0x0005425a) form_midp_field_time_pane_t1

0x36c4,	// (0x000521f7) wait_anim_pane_g2_copy1

0x5735,	// (0x00054268) form_midp_field_time_pane_t2

0x0001,

0x4d9e,	// (0x000538d1) aid_navinavi_width_2_pane

0xf820,	// (0x0005e353) form_midp_field_time_pane_t

0x36ce,	// (0x00052201) input_focus_pane_cp052

0x36ce,	// (0x00052201) bg_input_focus_pane_cp040

0x56e7,	// (0x0005421a) form_midp_gauge_slider_pane_t1

0x56f5,	// (0x00054228) form_midp_gauge_slider_pane_t2

0xdbb0,	// (0x0005c6e3) form_midp_gauge_slider_pane_t3

0xdbc0,	// (0x0005c6f3) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0005e34a) form_midp_gauge_slider_pane_t

0x571f,	// (0x00054252) form_midp_slider_pane

0x37ae,	// (0x000522e1) bg_input_focus_pane_cp041_ParamLimits

0x37ae,	// (0x000522e1) bg_input_focus_pane_cp041

0x56b4,	// (0x000541e7) form_midp_gauge_wait_pane_t1_ParamLimits

0x56b4,	// (0x000541e7) form_midp_gauge_wait_pane_t1

0x56c6,	// (0x000541f9) form_midp_gauge_wait_pane_t2_ParamLimits

0x56c6,	// (0x000541f9) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0005e345) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0005e345) form_midp_gauge_wait_pane_t

0x56d8,	// (0x0005420b) form_midp_wait_pane_ParamLimits

0x56d8,	// (0x0005420b) form_midp_wait_pane

0x567e,	// (0x000541b1) form_midp_image_pane_g1

0x5687,	// (0x000541ba) form_midp_image_pane_t1

0x5696,	// (0x000541c9) form_midp_image_pane_t2

0x56a5,	// (0x000541d8) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0005e33e) form_midp_image_pane_t

0x5675,	// (0x000541a8) list_single_midp_pane_g1

0x2e3c,	// (0x0005196f) list_single_midp_pane_t1

0xdb9a,	// (0x0005c6cd) list_midp_form_item_pane_ParamLimits

0xdb9a,	// (0x0005c6cd) list_midp_form_item_pane

0x4d46,	// (0x00053879) list_midp_form_item_pane_t1

0x4d55,	// (0x00053888) midp_ticker_pane_g1

0x4d61,	// (0x00053894) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0005e28b) midp_ticker_pane_g

0x4d6d,	// (0x000538a0) midp_ticker_pane_t1

0x6a48,	// (0x0005557b) midp_editing_number_pane_t1

0x6a26,	// (0x00055559) midp_editing_number_pane

0x6a35,	// (0x00055568) midp_ticker_pane

0x67f5,	// (0x00055328) ai_message_heading_pane

0x36ce,	// (0x00052201) bg_popup_window_pane_cp14

0x67fd,	// (0x00055330) listscroll_ai_message_pane

0x677f,	// (0x000552b2) ai_message_heading_pane_g1_ParamLimits

0x677f,	// (0x000552b2) ai_message_heading_pane_g1

0x678b,	// (0x000552be) ai_message_heading_pane_g2_ParamLimits

0x678b,	// (0x000552be) ai_message_heading_pane_g2

0x6797,	// (0x000552ca) ai_message_heading_pane_g3_ParamLimits

0x6797,	// (0x000552ca) ai_message_heading_pane_g3

0x67a3,	// (0x000552d6) ai_message_heading_pane_g4_ParamLimits

0x67a3,	// (0x000552d6) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0005e47f) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0005e47f) ai_message_heading_pane_g

0x67af,	// (0x000552e2) ai_message_heading_pane_t1_ParamLimits

0x67af,	// (0x000552e2) ai_message_heading_pane_t1

0x67c9,	// (0x000552fc) ai_message_heading_pane_t2_ParamLimits

0x67c9,	// (0x000552fc) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0005e488) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0005e488) ai_message_heading_pane_t

0x67db,	// (0x0005530e) bg_popup_heading_pane_cp1_ParamLimits

0x67db,	// (0x0005530e) bg_popup_heading_pane_cp1

0x676d,	// (0x000552a0) list_ai_message_pane_ParamLimits

0x676d,	// (0x000552a0) list_ai_message_pane

0x4176,	// (0x00052ca9) scroll_pane_cp10

0x6709,	// (0x0005523c) list_ai_message_pane_g1

0x6711,	// (0x00055244) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0005e45c) list_ai_message_pane_g

0x6719,	// (0x0005524c) list_ai_message_pane_t1_ParamLimits

0x6719,	// (0x0005524c) list_ai_message_pane_t1

0x672e,	// (0x00055261) list_ai_message_pane_t2_ParamLimits

0x672e,	// (0x00055261) list_ai_message_pane_t2

0x6743,	// (0x00055276) list_ai_message_pane_t3_ParamLimits

0x6743,	// (0x00055276) list_ai_message_pane_t3

0x6758,	// (0x0005528b) list_ai_message_pane_t4_ParamLimits

0x6758,	// (0x0005528b) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0005e461) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0005e461) list_ai_message_pane_t

0xdd41,	// (0x0005c874) cell_ai_soft_ind_pane_ParamLimits

0xdd41,	// (0x0005c874) cell_ai_soft_ind_pane

0x4d7f,	// (0x000538b2) cell_ai_soft_ind_pane_g1_ParamLimits

0x4d7f,	// (0x000538b2) cell_ai_soft_ind_pane_g1

0x36ce,	// (0x00052201) grid_highlight_cp1

0x4d8c,	// (0x000538bf) text_secondary_cp56_ParamLimits

0x4d8c,	// (0x000538bf) text_secondary_cp56

0x66c8,	// (0x000551fb) example_general_pane_ParamLimits

0x66c8,	// (0x000551fb) example_general_pane

0x66d4,	// (0x00055207) example_parent_pane_g1_ParamLimits

0x66d4,	// (0x00055207) example_parent_pane_g1

0x66e0,	// (0x00055213) example_parent_pane_t1_ParamLimits

0x66e0,	// (0x00055213) example_parent_pane_t1

0xc352,	// (0x0005ae85) popup_preview_text_window_ParamLimits

0xc352,	// (0x0005ae85) popup_preview_text_window

0x4bb1,	// (0x000536e4) list_single_pane_cp2_g4

0x3ad3,	// (0x00052606) bg_popup_preview_window_pane_ParamLimits

0x3ad3,	// (0x00052606) bg_popup_preview_window_pane

0x6415,	// (0x00054f48) popup_preview_text_window_t1_ParamLimits

0x6415,	// (0x00054f48) popup_preview_text_window_t1

0x6433,	// (0x00054f66) popup_preview_text_window_t2_ParamLimits

0x6433,	// (0x00054f66) popup_preview_text_window_t2

0x647c,	// (0x00054faf) popup_preview_text_window_t3_ParamLimits

0x647c,	// (0x00054faf) popup_preview_text_window_t3

0x64c1,	// (0x00054ff4) popup_preview_text_window_t4_ParamLimits

0x64c1,	// (0x00054ff4) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0005e430) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0005e430) popup_preview_text_window_t

0x653f,	// (0x00055072) scroll_pane_cp11

0x54b8,	// (0x00053feb) bg_popup_preview_window_pane_g1

0x63d5,	// (0x00054f08) bg_popup_preview_window_pane_g2

0x63dd,	// (0x00054f10) bg_popup_preview_window_pane_g3

0x63e5,	// (0x00054f18) bg_popup_preview_window_pane_g4

0x63ed,	// (0x00054f20) bg_popup_preview_window_pane_g5

0x63f5,	// (0x00054f28) bg_popup_preview_window_pane_g6

0x63fd,	// (0x00054f30) bg_popup_preview_window_pane_g7

0x6405,	// (0x00054f38) bg_popup_preview_window_pane_g8

0x0104,	// (0x0004ec37) aid_popup_width_pane

0xc2ce,	// (0x0005ae01) popup_midp_note_alarm_window_ParamLimits

0xc2ce,	// (0x0005ae01) popup_midp_note_alarm_window

0x4008,	// (0x00052b3b) data_form_pane_ParamLimits

0xbd06,	// (0x0005a839) form_field_data_pane_g1

0xbd10,	// (0x0005a843) form_field_data_pane_t1_ParamLimits

0x4014,	// (0x00052b47) input_focus_pane_ParamLimits

0x0ad3,	// (0x0004f606) data_form_wide_pane_ParamLimits

0x0ae4,	// (0x0004f617) form_field_data_wide_pane_g1

0x0af0,	// (0x0004f623) form_field_data_wide_pane_t1_ParamLimits

0x3d79,	// (0x000528ac) input_focus_pane_cp6_ParamLimits

0xd2e5,	// (0x0005be18) input_popup_find_pane_g1_ParamLimits

0xd2e5,	// (0x0005be18) input_popup_find_pane_g1

0x0d4e,	// (0x0004f881) aid_navi_side_left_pane

0x0d63,	// (0x0004f896) aid_navi_side_right_pane

0x5dee,	// (0x00054921) bg_popup_window_pane_cp30_ParamLimits

0x5dee,	// (0x00054921) bg_popup_window_pane_cp30

0x5e68,	// (0x0005499b) popup_midp_note_alarm_window_g1_ParamLimits

0x5e68,	// (0x0005499b) popup_midp_note_alarm_window_g1

0x5e98,	// (0x000549cb) popup_midp_note_alarm_window_t1_ParamLimits

0x5e98,	// (0x000549cb) popup_midp_note_alarm_window_t1

0x5f39,	// (0x00054a6c) popup_midp_note_alarm_window_t2_ParamLimits

0x5f39,	// (0x00054a6c) popup_midp_note_alarm_window_t2

0x5fe7,	// (0x00054b1a) popup_midp_note_alarm_window_t3_ParamLimits

0x5fe7,	// (0x00054b1a) popup_midp_note_alarm_window_t3

0x6019,	// (0x00054b4c) popup_midp_note_alarm_window_t4_ParamLimits

0x6019,	// (0x00054b4c) popup_midp_note_alarm_window_t4

0x603f,	// (0x00054b72) popup_midp_note_alarm_window_t5_ParamLimits

0x603f,	// (0x00054b72) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0005e3cd) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0005e3cd) popup_midp_note_alarm_window_t

0x60eb,	// (0x00054c1e) wait_bar_pane_cp1_ParamLimits

0x60eb,	// (0x00054c1e) wait_bar_pane_cp1

0x36ce,	// (0x00052201) wait_anim_pane_copy1

0x36ce,	// (0x00052201) wait_border_pane_copy1

0x5acc,	// (0x000545ff) wait_border_pane_g1_copy1

0x0b0a,	// (0x0004f63d) form_field_popup_pane_g1

0xbd2a,	// (0x0005a85d) form_field_popup_pane_t1_ParamLimits

0x4014,	// (0x00052b47) input_focus_pane_cp7_ParamLimits

0x4036,	// (0x00052b69) list_form_pane_ParamLimits

0x0b2c,	// (0x0004f65f) form_field_popup_wide_pane_g1

0x0b34,	// (0x0004f667) form_field_popup_wide_pane_t1_ParamLimits

0x4014,	// (0x00052b47) input_focus_pane_cp8_ParamLimits

0x4042,	// (0x00052b75) list_form_wide_pane_ParamLimits

0x6b71,	// (0x000556a4) aid_size_cell_graphic_pane

0xbda9,	// (0x0005a8dc) data_form_pane_t1_ParamLimits

0xc7ac,	// (0x0005b2df) data_form_wide_pane_t1_ParamLimits

0xd771,	// (0x0005c2a4) bg_status_flat_pane

0xcfa9,	// (0x0005badc) title_pane_t1_ParamLimits

0x3776,	// (0x000522a9) title_pane_t2_ParamLimits

0x379c,	// (0x000522cf) title_pane_t3_ParamLimits

0xf557,	// (0x0005e08a) title_pane_t_ParamLimits

0x45f1,	// (0x00053124) level_1_signal_ParamLimits

0x45fe,	// (0x00053131) level_2_signal_ParamLimits

0x460b,	// (0x0005313e) level_3_signal_ParamLimits

0x4618,	// (0x0005314b) level_4_signal_ParamLimits

0x4625,	// (0x00053158) level_5_signal_ParamLimits

0x4632,	// (0x00053165) level_6_signal_ParamLimits

0x463f,	// (0x00053172) level_7_signal_ParamLimits

0x45f1,	// (0x00053124) level_1_battery_ParamLimits

0x45fe,	// (0x00053131) level_2_battery_ParamLimits

0x460b,	// (0x0005313e) level_3_battery_ParamLimits

0x4618,	// (0x0005314b) level_4_battery_ParamLimits

0x4625,	// (0x00053158) level_5_battery_ParamLimits

0x4632,	// (0x00053165) level_6_battery_ParamLimits

0x463f,	// (0x00053172) level_7_battery_ParamLimits

0x5cf3,	// (0x00054826) bg_status_flat_pane_g1

0x5cfb,	// (0x0005482e) bg_status_flat_pane_g2

0x5d03,	// (0x00054836) bg_status_flat_pane_g3

0x5d0b,	// (0x0005483e) bg_status_flat_pane_g4

0x5d13,	// (0x00054846) bg_status_flat_pane_g5

0x5d1b,	// (0x0005484e) bg_status_flat_pane_g6

0x5d23,	// (0x00054856) bg_status_flat_pane_g7

0xd035,	// (0x0005bb68) tabs_3_active_pane_t1_ParamLimits

0xd035,	// (0x0005bb68) tabs_3_passive_pane_t1_ParamLimits

0xd047,	// (0x0005bb7a) tabs_4_active_pane_t1_ParamLimits

0xd047,	// (0x0005bb7a) tabs_4_1_passive_pane_t1_ParamLimits

0xd2fb,	// (0x0005be2e) tabs_2_active_pane_t1_ParamLimits

0xd2fb,	// (0x0005be2e) tabs_2_passive_pane_t1_ParamLimits

0x37ae,	// (0x000522e1) bg_active_tab_pane_cp4_ParamLimits

0xd30d,	// (0x0005be40) tabs_2_long_active_pane_t1_ParamLimits

0x4fba,	// (0x00053aed) bg_passive_tab_pane_cp4_ParamLimits

0x1925,	// (0x00050458) list_single_midp_graphic_pane_t1_ParamLimits

0x37ae,	// (0x000522e1) bg_active_tab_pane_cp5_ParamLimits

0xd320,	// (0x0005be53) tabs_3_long_active_pane_t1_ParamLimits

0x4fba,	// (0x00053aed) bg_passive_tab_pane_cp5_ParamLimits

0x1925,	// (0x00050458) list_single_midp_graphic_pane_t1

0xd771,	// (0x0005c2a4) bg_status_flat_pane_ParamLimits

0x5150,	// (0x00053c83) indicator_pane_cp2_ParamLimits

0x5150,	// (0x00053c83) indicator_pane_cp2

0xd999,	// (0x0005c4cc) navi_pane_srt_ParamLimits

0xd999,	// (0x0005c4cc) navi_pane_srt

0x529f,	// (0x00053dd2) popup_clock_digital_analogue_window_cp1

0x388b,	// (0x000523be) indicator_pane_t1

0x4c80,	// (0x000537b3) copy_highlight_pane

0x4c80,	// (0x000537b3) cursor_graphics_pane

0x4c80,	// (0x000537b3) graphic_within_text_pane

0x4c80,	// (0x000537b3) link_highlight_pane

0x6502,	// (0x00055035) popup_preview_text_window_t5_ParamLimits

0x6502,	// (0x00055035) popup_preview_text_window_t5

0x4da6,	// (0x000538d9) cursor_digital_pane

0x4da6,	// (0x000538d9) cursor_primary_pane

0x4db7,	// (0x000538ea) cursor_primary_small_pane

0x4dbf,	// (0x000538f2) cursor_secondary_pane

0x4dc7,	// (0x000538fa) cursor_title_pane

0x4da6,	// (0x000538d9) link_highlight_digital_pane

0x4dae,	// (0x000538e1) link_highlight_primary_pane

0x4db7,	// (0x000538ea) link_highlight_primary_small_pane

0x4dbf,	// (0x000538f2) link_highlight_secondary_pane

0x4dc7,	// (0x000538fa) link_highlight_title_pane

0x4da6,	// (0x000538d9) copy_highlight_digital_pane

0x4da6,	// (0x000538d9) copy_highlight_primary_pane

0x4db7,	// (0x000538ea) copy_highlight_primary_small_pane

0x4dbf,	// (0x000538f2) copy_highlight_secondary_pane

0x4dc7,	// (0x000538fa) copy_highlight_title_pane

0x4dbf,	// (0x000538f2) graphic_text_digital_pane

0x5d91,	// (0x000548c4) graphic_text_primary_pane

0x5d9a,	// (0x000548cd) graphic_text_primary_small_pane

0x4db7,	// (0x000538ea) graphic_text_secondary_pane

0x4da6,	// (0x000538d9) graphic_text_title_pane

0xd5ad,	// (0x0005c0e0) cursor_primary_pane_g1

0x5d83,	// (0x000548b6) cursor_text_primary_t1

0xdc33,	// (0x0005c766) cursor_primary_small_pane_g1

0x5d75,	// (0x000548a8) cursor_text_primary_small_t1

0xdc29,	// (0x0005c75c) cursor_primary_small_pane_g1_copy1

0x5d5d,	// (0x00054890) cursor_text_primary_small_t1_copy1

0x5d3b,	// (0x0005486e) cursor_text_title_t1

0xdc1f,	// (0x0005c752) cursor_title_pane_g1

0xd5ad,	// (0x0005c0e0) cursor_digital_pane_g1

0x4dd9,	// (0x0005390c) cursor_text_digital_t1

0x5cdc,	// (0x0005480f) link_highlight_primary_pane_g1

0x5ce4,	// (0x00054817) link_highlight_primary_pane_t1

0x4de7,	// (0x0005391a) link_highlight_primary_small_pane_g1

0x4def,	// (0x00053922) link_highlight_primary_small_pane_t1

0x4de7,	// (0x0005391a) link_highlight_secondary_pane_g1

0x4dfe,	// (0x00053931) link_highlight_secondary_pane_t1

0x5c50,	// (0x00054783) link_highlight_title_pane_g1

0x5c58,	// (0x0005478b) link_highlight_title_pane_t1

0x5c39,	// (0x0005476c) link_highlight_digital_pane_g1

0x5c41,	// (0x00054774) link_highlight_digital_pane_t1

0x5b11,	// (0x00054644) copy_highlight_primary_pane_g1

0x5b19,	// (0x0005464c) copy_highlight_primary_pane_t1

0x5aeb,	// (0x0005461e) copy_highlight_primary_small_pane_g1

0x5b02,	// (0x00054635) copy_highlight_primary_small_pane_t1

0x4e0d,	// (0x00053940) copy_highlight_secondary_pane_g1

0x4e15,	// (0x00053948) copy_highlight_secondary_pane_t1

0x5aeb,	// (0x0005461e) copy_highlight_title_pane_g1

0x5af3,	// (0x00054626) copy_highlight_title_pane_t1

0x5b11,	// (0x00054644) copy_highlight_digital_pane_g1

0x6d3b,	// (0x0005586e) copy_highlight_digital_pane_t1

0x6c8f,	// (0x000557c2) graphic_text_primary_pane_g1

0x6d1f,	// (0x00055852) graphic_text_primary_pane_t1

0x6d2d,	// (0x00055860) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0005e4fc) graphic_text_primary_pane_t

0x6cfb,	// (0x0005582e) graphic_text_primary_small_pane_g1

0x6d03,	// (0x00055836) graphic_text_primary_small_pane_t1

0x6d11,	// (0x00055844) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0005e4f7) graphic_text_primary_small_pane_t

0x6cd7,	// (0x0005580a) graphic_text_secondary_pane_g1

0x6cdf,	// (0x00055812) graphic_text_secondary_pane_t1

0x6ced,	// (0x00055820) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0005e4f2) graphic_text_secondary_pane_t

0x6cb3,	// (0x000557e6) graphic_text_title_pane_g1

0x6cbb,	// (0x000557ee) graphic_text_title_pane_t1

0x6cc9,	// (0x000557fc) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0005e4ed) graphic_text_title_pane_t

0x6c8f,	// (0x000557c2) graphic_text_digital_pane_g1

0x6c97,	// (0x000557ca) graphic_text_digital_pane_t1

0x6ca5,	// (0x000557d8) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0005e4e8) graphic_text_digital_pane_t

0x37ae,	// (0x000522e1) navi_icon_pane_srt_ParamLimits

0x37ae,	// (0x000522e1) navi_icon_pane_srt

0x36ce,	// (0x00052201) navi_midp_pane_srt

0x36ce,	// (0x00052201) navi_navi_pane_srt

0x37ae,	// (0x000522e1) navi_text_pane_srt_ParamLimits

0x37ae,	// (0x000522e1) navi_text_pane_srt

0x6c5a,	// (0x0005578d) navi_navi_icon_text_pane_srt

0x6c62,	// (0x00055795) navi_navi_pane_srt_g1_ParamLimits

0x6c62,	// (0x00055795) navi_navi_pane_srt_g1

0x6c74,	// (0x000557a7) navi_navi_pane_srt_g2_ParamLimits

0x6c74,	// (0x000557a7) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0005e4e3) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0005e4e3) navi_navi_pane_srt_g

0x6c86,	// (0x000557b9) navi_navi_tabs_pane_srt

0x6c5a,	// (0x0005578d) navi_navi_text_pane_srt

0x6c5a,	// (0x0005578d) navi_navi_volume_pane_srt

0x6c4b,	// (0x0005577e) navi_navi_text_pane_srt_t1

0x1c99,	// (0x000507cc) navi_navi_volume_pane_srt_g1

0x1ca1,	// (0x000507d4) volume_small_pane_srt_ParamLimits

0x1ca1,	// (0x000507d4) volume_small_pane_srt

0x1098,	// (0x0004fbcb) volume_small_pane_srt_g1_ParamLimits

0x1098,	// (0x0004fbcb) volume_small_pane_srt_g1

0x10a8,	// (0x0004fbdb) volume_small_pane_srt_g2_ParamLimits

0x10a8,	// (0x0004fbdb) volume_small_pane_srt_g2

0x10b9,	// (0x0004fbec) volume_small_pane_srt_g3_ParamLimits

0x10b9,	// (0x0004fbec) volume_small_pane_srt_g3

0x10ca,	// (0x0004fbfd) volume_small_pane_srt_g4_ParamLimits

0x10ca,	// (0x0004fbfd) volume_small_pane_srt_g4

0x10db,	// (0x0004fc0e) volume_small_pane_srt_g5_ParamLimits

0x10db,	// (0x0004fc0e) volume_small_pane_srt_g5

0x10ec,	// (0x0004fc1f) volume_small_pane_srt_g6_ParamLimits

0x10ec,	// (0x0004fc1f) volume_small_pane_srt_g6

0x10fd,	// (0x0004fc30) volume_small_pane_srt_g7_ParamLimits

0x10fd,	// (0x0004fc30) volume_small_pane_srt_g7

0x110e,	// (0x0004fc41) volume_small_pane_srt_g8_ParamLimits

0x110e,	// (0x0004fc41) volume_small_pane_srt_g8

0x111f,	// (0x0004fc52) volume_small_pane_srt_g9_ParamLimits

0x111f,	// (0x0004fc52) volume_small_pane_srt_g9

0x1130,	// (0x0004fc63) volume_small_pane_srt_g10_ParamLimits

0x1130,	// (0x0004fc63) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0005e290) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0005e290) volume_small_pane_srt_g

0x3b7c,	// (0x000526af) query_popup_data_pane_cp2

0x6c31,	// (0x00055764) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6c31,	// (0x00055764) navi_navi_icon_text_pane_srt_t1

0x5d91,	// (0x000548c4) navi_tabs_2_long_pane_srt

0x5d91,	// (0x000548c4) navi_tabs_2_pane_srt

0x5d91,	// (0x000548c4) navi_tabs_3_long_pane_srt

0x5d91,	// (0x000548c4) navi_tabs_3_pane_srt

0x5d91,	// (0x000548c4) navi_tabs_4_pane_srt

0x1c79,	// (0x000507ac) tabs_2_active_pane_srt_ParamLimits

0x1c79,	// (0x000507ac) tabs_2_active_pane_srt

0x1c89,	// (0x000507bc) tabs_2_passive_pane_srt_ParamLimits

0x1c89,	// (0x000507bc) tabs_2_passive_pane_srt

0x552c,	// (0x0005405f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x552c,	// (0x0005405f) bg_passive_tab_pane_cp1_srt

0x6bfd,	// (0x00055730) bg_passive_tab_pane_g1_cp1_srt

0x48c5,	// (0x000533f8) bg_passive_tab_pane_g2_cp1_srt

0x6c06,	// (0x00055739) bg_passive_tab_pane_g3_cp1_srt

0x3a29,	// (0x0005255c) bg_active_tab_pane_cp1_srt_ParamLimits

0x3a29,	// (0x0005255c) bg_active_tab_pane_cp1_srt

0x6c0f,	// (0x00055742) tabs_2_active_pane_srt_g1

0xdfd1,	// (0x0005cb04) tabs_2_active_pane_srt_t1_ParamLimits

0xdfd1,	// (0x0005cb04) tabs_2_active_pane_srt_t1

0x6bfd,	// (0x00055730) bg_active_tab_pane_g1_cp1_srt

0x48c5,	// (0x000533f8) bg_active_tab_pane_g2_cp1_srt

0x6c06,	// (0x00055739) bg_active_tab_pane_g3_cp1_srt

0x1c46,	// (0x00050779) tabs_3_active_pane_srt_ParamLimits

0x1c46,	// (0x00050779) tabs_3_active_pane_srt

0x1c57,	// (0x0005078a) tabs_3_passive_pane_cp_srt_ParamLimits

0x1c57,	// (0x0005078a) tabs_3_passive_pane_cp_srt

0x1c68,	// (0x0005079b) tabs_3_passive_pane_srt_ParamLimits

0x1c68,	// (0x0005079b) tabs_3_passive_pane_srt

0x552c,	// (0x0005405f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x552c,	// (0x0005405f) bg_passive_tab_pane_cp2_srt

0x4e24,	// (0x00053957) bg_passive_tab_pane_g1_cp2_srt

0x48c5,	// (0x000533f8) bg_passive_tab_pane_g2_cp2_srt

0x4e2d,	// (0x00053960) bg_passive_tab_pane_g3_cp2_srt

0x3a29,	// (0x0005255c) bg_active_tab_pane_cp2_srt_ParamLimits

0x3a29,	// (0x0005255c) bg_active_tab_pane_cp2_srt

0x6be3,	// (0x00055716) tabs_3_active_pane_srt_g1

0xdfbb,	// (0x0005caee) tabs_3_active_pane_srt_t1_ParamLimits

0xdfbb,	// (0x0005caee) tabs_3_active_pane_srt_t1

0x4e24,	// (0x00053957) bg_active_tab_pane_g1_cp2_srt

0x48c5,	// (0x000533f8) bg_active_tab_pane_g2_cp2_srt

0x4e2d,	// (0x00053960) bg_active_tab_pane_g3_cp2_srt

0x1bfe,	// (0x00050731) tabs_4_active_pane_srt_ParamLimits

0x1bfe,	// (0x00050731) tabs_4_active_pane_srt

0x1c10,	// (0x00050743) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1c10,	// (0x00050743) tabs_4_passive_pane_cp2_srt

0x1293,	// (0x0004fdc6) aid_size_cell_toolbar

0x68a7,	// (0x000553da) main_idle_act_pane_ParamLimits

0x144e,	// (0x0004ff81) popup_large_graphic_colour_window_ParamLimits

0xc5d8,	// (0x0005b10b) popup_toolbar_window_ParamLimits

0xc5d8,	// (0x0005b10b) popup_toolbar_window

0x6a57,	// (0x0005558a) list_single_graphic_2heading_pane_ParamLimits

0x6a57,	// (0x0005558a) list_single_graphic_2heading_pane

0x43a3,	// (0x00052ed6) aid_size_cell_apps_grid_lsc_pane

0x43b5,	// (0x00052ee8) aid_size_cell_apps_grid_prt_pane

0x4fba,	// (0x00053aed) bg_wml_button_pane_cp1_ParamLimits

0x4fba,	// (0x00053aed) bg_wml_button_pane_cp1

0xdbd0,	// (0x0005c703) form_midp_field_text_pane_t1_ParamLimits

0x552c,	// (0x0005405f) input_focus_pane_cp050_ParamLimits

0x57af,	// (0x000542e2) list_midp_form_text_pane_ParamLimits

0x5751,	// (0x00054284) input_focus_pane_cp051_ParamLimits

0x5765,	// (0x00054298) list_midp_choice_pane_ParamLimits

0xdb64,	// (0x0005c697) list_single_2graphic_pane_cp3_ParamLimits

0xdb64,	// (0x0005c697) list_single_2graphic_pane_cp3

0xdb79,	// (0x0005c6ac) list_single_midp_graphic_pane_ParamLimits

0xdb79,	// (0x0005c6ac) list_single_midp_graphic_pane

0x008e,	// (0x0004ebc1) list_single_graphic_2heading_pane_g1_ParamLimits

0x008e,	// (0x0004ebc1) list_single_graphic_2heading_pane_g1

0x009a,	// (0x0004ebcd) list_single_graphic_2heading_pane_g4_ParamLimits

0x009a,	// (0x0004ebcd) list_single_graphic_2heading_pane_g4

0x00a6,	// (0x0004ebd9) list_single_graphic_2heading_pane_g5_ParamLimits

0x00a6,	// (0x0004ebd9) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0005e2e3) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0005e2e3) list_single_graphic_2heading_pane_g

0x00b2,	// (0x0004ebe5) list_single_graphic_2heading_pane_t1_ParamLimits

0x00b2,	// (0x0004ebe5) list_single_graphic_2heading_pane_t1

0x00c6,	// (0x0004ebf9) list_single_graphic_2heading_pane_t2_ParamLimits

0x00c6,	// (0x0004ebf9) list_single_graphic_2heading_pane_t2

0x00e0,	// (0x0004ec13) list_single_graphic_2heading_pane_t3_ParamLimits

0x00e0,	// (0x0004ec13) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0005e2ea) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0005e2ea) list_single_graphic_2heading_pane_t

0x53f6,	// (0x00053f29) bg_popup_sub_pane_cp2

0x5420,	// (0x00053f53) grid_toobar_pane

0x185e,	// (0x00050391) cell_toolbar_pane_ParamLimits

0x185e,	// (0x00050391) cell_toolbar_pane

0x545c,	// (0x00053f8f) cell_toolbar_pane_g1_ParamLimits

0x545c,	// (0x00053f8f) cell_toolbar_pane_g1

0x5470,	// (0x00053fa3) cell_toolbar_pane_g2_ParamLimits

0x5470,	// (0x00053fa3) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0005e2f8) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0005e2f8) cell_toolbar_pane_g

0x5492,	// (0x00053fc5) grid_highlight_pane_cp2_ParamLimits

0x5492,	// (0x00053fc5) grid_highlight_pane_cp2

0x54ac,	// (0x00053fdf) toolbar_button_pane

0x54b8,	// (0x00053feb) toolbar_button_pane_g1

0x54c0,	// (0x00053ff3) toolbar_button_pane_g2

0x54c8,	// (0x00053ffb) toolbar_button_pane_g3

0x54d0,	// (0x00054003) toolbar_button_pane_g4

0x54d8,	// (0x0005400b) toolbar_button_pane_g5

0x54e0,	// (0x00054013) toolbar_button_pane_g6

0x54e8,	// (0x0005401b) toolbar_button_pane_g7

0x54f0,	// (0x00054023) toolbar_button_pane_g8

0x54f8,	// (0x0005402b) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0005e2fd) toolbar_button_pane_g

0x18b8,	// (0x000503eb) list_single_2graphic_pane_g1_cp3_ParamLimits

0x18b8,	// (0x000503eb) list_single_2graphic_pane_g1_cp3

0xc630,	// (0x0005b163) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc630,	// (0x0005b163) list_single_2graphic_pane_g2_cp3

0x18d5,	// (0x00050408) list_single_2graphic_pane_g3_cp3

0x18dd,	// (0x00050410) list_single_2graphic_pane_g4_cp3_ParamLimits

0x18dd,	// (0x00050410) list_single_2graphic_pane_g4_cp3

0x18e9,	// (0x0005041c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x18e9,	// (0x0005041c) list_single_2graphic_pane_t1_cp3

0x1919,	// (0x0005044c) list_single_midp_graphic_pane_g2_ParamLimits

0x1919,	// (0x0005044c) list_single_midp_graphic_pane_g2

0x007e,	// (0x0004ebb1) aid_zoom_text_primary

0x0086,	// (0x0004ebb9) aid_zoom_text_secondary

0xd605,	// (0x0005c138) status_small_pane_g7_ParamLimits

0xd605,	// (0x0005c138) status_small_pane_g7

0xd628,	// (0x0005c15b) status_small_pane_t1_ParamLimits

0xcf85,	// (0x0005bab8) title_pane_g2

0x0003,

0xf54e,	// (0x0005e081) title_pane_g

0xd1fd,	// (0x0005bd30) aid_size_cell_colour_1_pane_ParamLimits

0xd1fd,	// (0x0005bd30) aid_size_cell_colour_1_pane

0xd211,	// (0x0005bd44) aid_size_cell_colour_2_pane_ParamLimits

0xd211,	// (0x0005bd44) aid_size_cell_colour_2_pane

0xd225,	// (0x0005bd58) aid_size_cell_colour_3_pane_ParamLimits

0xd225,	// (0x0005bd58) aid_size_cell_colour_3_pane

0xd239,	// (0x0005bd6c) aid_size_cell_colour_4_pane_ParamLimits

0xd239,	// (0x0005bd6c) aid_size_cell_colour_4_pane

0x0c8a,	// (0x0004f7bd) title_pane_stacon_g1_ParamLimits

0x0c8a,	// (0x0004f7bd) title_pane_stacon_g1

0x5b70,	// (0x000546a3) popup_note_wait_window_g3_ParamLimits

0x5b70,	// (0x000546a3) popup_note_wait_window_g3

0x5be6,	// (0x00054719) popup_note_wait_window_t5_ParamLimits

0x5be6,	// (0x00054719) popup_note_wait_window_t5

0x36ce,	// (0x00052201) main_feb_china_hwr_fs_writing_pane

0xbff4,	// (0x0005ab27) popup_feb_china_hwr_fs_window_ParamLimits

0xbff4,	// (0x0005ab27) popup_feb_china_hwr_fs_window

0xc641,	// (0x0005b174) aid_size_cell_hwr_fs_ParamLimits

0xc641,	// (0x0005b174) aid_size_cell_hwr_fs

0x552c,	// (0x0005405f) bg_popup_sub_pane_cp3_ParamLimits

0x552c,	// (0x0005405f) bg_popup_sub_pane_cp3

0xc656,	// (0x0005b189) grid_hwr_fs_pane_ParamLimits

0xc656,	// (0x0005b189) grid_hwr_fs_pane

0x1968,	// (0x0005049b) linegrid_hwr_fs_pane_ParamLimits

0x1968,	// (0x0005049b) linegrid_hwr_fs_pane

0xc66e,	// (0x0005b1a1) cell_hwr_fs_pane_ParamLimits

0xc66e,	// (0x0005b1a1) cell_hwr_fs_pane

0x5538,	// (0x0005406b) linegrid_hwr_fs_pane_g1_ParamLimits

0x5538,	// (0x0005406b) linegrid_hwr_fs_pane_g1

0xdb38,	// (0x0005c66b) linegrid_hwr_fs_pane_g2_ParamLimits

0xdb38,	// (0x0005c66b) linegrid_hwr_fs_pane_g2

0x5556,	// (0x00054089) linegrid_hwr_fs_pane_g3_ParamLimits

0x5556,	// (0x00054089) linegrid_hwr_fs_pane_g3

0x199a,	// (0x000504cd) linegrid_hwr_fs_pane_g4_ParamLimits

0x199a,	// (0x000504cd) linegrid_hwr_fs_pane_g4

0x19b4,	// (0x000504e7) linegrid_hwr_fs_pane_g5_ParamLimits

0x19b4,	// (0x000504e7) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0005e323) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0005e323) linegrid_hwr_fs_pane_g

0x5562,	// (0x00054095) cell_hwr_fs_pane_g1_ParamLimits

0x5562,	// (0x00054095) cell_hwr_fs_pane_g1

0x532d,	// (0x00053e60) cell_hwr_fs_pane_g2_ParamLimits

0x532d,	// (0x00053e60) cell_hwr_fs_pane_g2

0xdb4a,	// (0x0005c67d) cell_hwr_fs_pane_g3_ParamLimits

0xdb4a,	// (0x0005c67d) cell_hwr_fs_pane_g3

0xdb57,	// (0x0005c68a) cell_hwr_fs_pane_g4_ParamLimits

0xdb57,	// (0x0005c68a) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0005e32e) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0005e32e) cell_hwr_fs_pane_g

0xc694,	// (0x0005b1c7) cell_hwr_fs_pane_t1

0x36ce,	// (0x00052201) grid_highlight_pane_cp6

0x36ce,	// (0x00052201) main_idle_act2_pane

0x415d,	// (0x00052c90) aid_inside_area_popup_secondary

0xdc45,	// (0x0005c778) aid_inside_area_window_primary_ParamLimits

0xdc45,	// (0x0005c778) aid_inside_area_window_primary

0x6d4a,	// (0x0005587d) ai2_news_ticker_pane

0x6d52,	// (0x00055885) aid_size_cell_ai1_link_ParamLimits

0x6d52,	// (0x00055885) aid_size_cell_ai1_link

0x6d6c,	// (0x0005589f) popup_ai2_data_window_ParamLimits

0x6d6c,	// (0x0005589f) popup_ai2_data_window

0x6d80,	// (0x000558b3) popup_ai2_link_window_ParamLimits

0x6d80,	// (0x000558b3) popup_ai2_link_window

0x552c,	// (0x0005405f) bg_popup_sub_pane_cp4_ParamLimits

0x552c,	// (0x0005405f) bg_popup_sub_pane_cp4

0x6d94,	// (0x000558c7) grid_ai2_link_pane_ParamLimits

0x6d94,	// (0x000558c7) grid_ai2_link_pane

0x6dab,	// (0x000558de) popup_ai2_link_window_g1_ParamLimits

0x6dab,	// (0x000558de) popup_ai2_link_window_g1

0x6db7,	// (0x000558ea) popup_ai2_link_window_g2_ParamLimits

0x6db7,	// (0x000558ea) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0005e501) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0005e501) popup_ai2_link_window_g

0x6dc6,	// (0x000558f9) ai2_mp_button_pane

0x6dce,	// (0x00055901) ai2_mp_volume_pane

0x5751,	// (0x00054284) bg_popup_sub_pane_cp5_ParamLimits

0x5751,	// (0x00054284) bg_popup_sub_pane_cp5

0x6dd6,	// (0x00055909) heading_ai2_gene_pane_ParamLimits

0x6dd6,	// (0x00055909) heading_ai2_gene_pane

0x6de2,	// (0x00055915) list_ai2_gene_pane_ParamLimits

0x6de2,	// (0x00055915) list_ai2_gene_pane

0x6e2a,	// (0x0005595d) cell_ai2_link_pane_ParamLimits

0x6e2a,	// (0x0005595d) cell_ai2_link_pane

0x6e40,	// (0x00055973) cell_ai2_link_pane_g1

0x36ce,	// (0x00052201) grid_highlight_pane_cp7

0x1cb6,	// (0x000507e9) ai2_mp_volume_pane_g1

0x6f11,	// (0x00055a44) ai2_mp_volume_pane_g2

0x6e86,	// (0x000559b9) list_ai2_gene_pane_t1

0x6f19,	// (0x00055a4c) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0005e51a) ai2_mp_volume_pane_g

0x1cbe,	// (0x000507f1) volume_small_pane_cp3

0x6f21,	// (0x00055a54) aid_size_cell_ai2_button

0x6f29,	// (0x00055a5c) grid_ai2_button_pane

0x6f32,	// (0x00055a65) cell_ai2_button_pane_ParamLimits

0x6f32,	// (0x00055a65) cell_ai2_button_pane

0x36c4,	// (0x000521f7) cell_ai2_button_pane_g1

0x36ce,	// (0x00052201) grid_highlight_pane_cp8

0x6ed1,	// (0x00055a04) ai2_gene_pane_t1_ParamLimits

0x6ed1,	// (0x00055a04) ai2_gene_pane_t1

0xbf82,	// (0x0005aab5) aid_height_parent_landscape

0xdd90,	// (0x0005c8c3) aid_height_set_list

0x68a7,	// (0x000553da) aid_size_parent

0x6b71,	// (0x000556a4) aid_size_cell_graphic_pane_ParamLimits

0x6df2,	// (0x00055925) popup_ai2_data_window_g1_ParamLimits

0x6df2,	// (0x00055925) popup_ai2_data_window_g1

0x6dfe,	// (0x00055931) ai2_news_ticker_pane_g1

0x6e06,	// (0x00055939) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0005e506) ai2_news_ticker_pane_g

0x6e0e,	// (0x00055941) ai2_news_ticker_pane_t1

0x6e1c,	// (0x0005594f) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0005e50b) ai2_news_ticker_pane_t

0x6e49,	// (0x0005597c) heading_ai2_gene_pane_g1

0x6e51,	// (0x00055984) heading_ai2_gene_pane_t1_ParamLimits

0x6e51,	// (0x00055984) heading_ai2_gene_pane_t1

0x6e66,	// (0x00055999) list_highlight_pane_cp6

0x6e6e,	// (0x000559a1) ai2_gene_pane_ParamLimits

0x6e6e,	// (0x000559a1) ai2_gene_pane

0x6e94,	// (0x000559c7) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0005e510) list_ai2_gene_pane_t

0x6ea2,	// (0x000559d5) list_highlight_pane_cp8_ParamLimits

0x6ea2,	// (0x000559d5) list_highlight_pane_cp8

0x6eb3,	// (0x000559e6) ai2_gene_pane_g1_ParamLimits

0x6eb3,	// (0x000559e6) ai2_gene_pane_g1

0x6ec5,	// (0x000559f8) ai2_gene_pane_g2_ParamLimits

0x6ec5,	// (0x000559f8) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0005e515) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0005e515) ai2_gene_pane_g

0x3f9e,	// (0x00052ad1) scroll_pane_cp12

0xbf41,	// (0x0005aa74) control_pane_t3_ParamLimits

0xbf41,	// (0x0005aa74) control_pane_t3

0xd619,	// (0x0005c14c) status_small_pane_g8_ParamLimits

0xd619,	// (0x0005c14c) status_small_pane_g8

0xc087,	// (0x0005abba) popup_find_window_ParamLimits

0xc308,	// (0x0005ae3b) popup_note_image_window_ParamLimits

0x188e,	// (0x000503c1) list_double2_graphic_pane_vc_g1_ParamLimits

0x188e,	// (0x000503c1) list_double2_graphic_pane_vc_g1

0x2cf2,	// (0x00051825) list_double2_graphic_pane_vc_g2_ParamLimits

0x2cf2,	// (0x00051825) list_double2_graphic_pane_vc_g2

0x2cfe,	// (0x00051831) list_double2_graphic_pane_vc_g3_ParamLimits

0x2cfe,	// (0x00051831) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0005e2f1) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0005e2f1) list_double2_graphic_pane_vc_g

0x189a,	// (0x000503cd) list_double2_graphic_pane_vc_t1_ParamLimits

0x189a,	// (0x000503cd) list_double2_graphic_pane_vc_t1

0x2cf2,	// (0x00051825) list_single_heading_pane_vc_g1_ParamLimits

0x2cf2,	// (0x00051825) list_single_heading_pane_vc_g1

0x2cfe,	// (0x00051831) list_single_heading_pane_vc_g2_ParamLimits

0x2cfe,	// (0x00051831) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e105) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e105) list_single_heading_pane_vc_g

0x1903,	// (0x00050436) list_single_heading_pane_vc_t1_ParamLimits

0x1903,	// (0x00050436) list_single_heading_pane_vc_t1

0x2dba,	// (0x000518ed) list_single_heading_pane_vc_t2_ParamLimits

0x2dba,	// (0x000518ed) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0005e312) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0005e312) list_single_heading_pane_vc_t

0x47ae,	// (0x000532e1) list_setting_number_pane_vc_g1_ParamLimits

0x47ae,	// (0x000532e1) list_setting_number_pane_vc_g1

0x47ba,	// (0x000532ed) list_setting_number_pane_vc_g2_ParamLimits

0x47ba,	// (0x000532ed) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005e317) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005e317) list_setting_number_pane_vc_g

0x2dd6,	// (0x00051909) list_setting_number_pane_vc_t1_ParamLimits

0x2dd6,	// (0x00051909) list_setting_number_pane_vc_t1

0x2dea,	// (0x0005191d) list_setting_number_pane_vc_t2_ParamLimits

0x2dea,	// (0x0005191d) list_setting_number_pane_vc_t2

0x2e04,	// (0x00051937) list_setting_number_pane_vc_t3_ParamLimits

0x2e04,	// (0x00051937) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0005e31c) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0005e31c) list_setting_number_pane_vc_t

0x2e2c,	// (0x0005195f) set_value_pane_vc_ParamLimits

0x2e2c,	// (0x0005195f) set_value_pane_vc

0x6a57,	// (0x0005558a) list_double2_graphic_pane_vc_ParamLimits

0x6a57,	// (0x0005558a) list_double2_graphic_pane_vc

0x2ef1,	// (0x00051a24) list_double2_large_graphic_pane_vc_ParamLimits

0x2ef1,	// (0x00051a24) list_double2_large_graphic_pane_vc

0x6a57,	// (0x0005558a) list_double2_pane_vc_ParamLimits

0x6a57,	// (0x0005558a) list_double2_pane_vc

0x6a57,	// (0x0005558a) list_double_graphic_heading_pane_vc_ParamLimits

0x6a57,	// (0x0005558a) list_double_graphic_heading_pane_vc

0x6a57,	// (0x0005558a) list_double_graphic_pane_vc_ParamLimits

0x6a57,	// (0x0005558a) list_double_graphic_pane_vc

0x6a57,	// (0x0005558a) list_double_heading_pane_vc_ParamLimits

0x6a57,	// (0x0005558a) list_double_heading_pane_vc

0x2f03,	// (0x00051a36) list_double_large_graphic_pane_vc_ParamLimits

0x2f03,	// (0x00051a36) list_double_large_graphic_pane_vc

0x6a57,	// (0x0005558a) list_double_number_pane_vc_ParamLimits

0x6a57,	// (0x0005558a) list_double_number_pane_vc

0x6a57,	// (0x0005558a) list_double_pane_vc_ParamLimits

0x6a57,	// (0x0005558a) list_double_pane_vc

0x6a57,	// (0x0005558a) list_double_time_pane_vc_ParamLimits

0x6a57,	// (0x0005558a) list_double_time_pane_vc

0x6a57,	// (0x0005558a) list_setting_number_pane_vc_ParamLimits

0x6a57,	// (0x0005558a) list_setting_number_pane_vc

0x6a57,	// (0x0005558a) list_setting_pane_vc_ParamLimits

0x6a57,	// (0x0005558a) list_setting_pane_vc

0x6a57,	// (0x0005558a) list_single_graphic_heading_pane_vc_ParamLimits

0x6a57,	// (0x0005558a) list_single_graphic_heading_pane_vc

0x6a57,	// (0x0005558a) list_single_heading_pane_vc_ParamLimits

0x6a57,	// (0x0005558a) list_single_heading_pane_vc

0x6a57,	// (0x0005558a) list_single_number_heading_pane_vc_ParamLimits

0x6a57,	// (0x0005558a) list_single_number_heading_pane_vc

0x188e,	// (0x000503c1) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x188e,	// (0x000503c1) list_double_graphic_heading_pane_vc_g1

0x2cf2,	// (0x00051825) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x2cf2,	// (0x00051825) list_double_graphic_heading_pane_vc_g2

0x2cfe,	// (0x00051831) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2cfe,	// (0x00051831) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7be,	// (0x0005e2f1) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0005e2f1) list_double_graphic_heading_pane_vc_g

0x2fe7,	// (0x00051b1a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2fe7,	// (0x00051b1a) list_double_graphic_heading_pane_vc_t1

0x3003,	// (0x00051b36) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3003,	// (0x00051b36) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x0005e521) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x0005e521) list_double_graphic_heading_pane_vc_t

0x47ae,	// (0x000532e1) list_setting_pane_vc_g1_ParamLimits

0x47ae,	// (0x000532e1) list_setting_pane_vc_g1

0x47ba,	// (0x000532ed) list_setting_pane_vc_g2_ParamLimits

0x47ba,	// (0x000532ed) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005e317) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005e317) list_setting_pane_vc_g

0x301b,	// (0x00051b4e) list_setting_pane_vc_t1_ParamLimits

0x301b,	// (0x00051b4e) list_setting_pane_vc_t1

0x3035,	// (0x00051b68) list_setting_pane_vc_t2_ParamLimits

0x3035,	// (0x00051b68) list_setting_pane_vc_t2

0x0001,

0xfa31,	// (0x0005e564) list_setting_pane_vc_t_ParamLimits

0xfa31,	// (0x0005e564) list_setting_pane_vc_t

0x2e2c,	// (0x0005195f) set_value_pane_cp_vc_ParamLimits

0x2e2c,	// (0x0005195f) set_value_pane_cp_vc

0x2cf2,	// (0x00051825) list_single_number_heading_pane_vc_g1_ParamLimits

0x2cf2,	// (0x00051825) list_single_number_heading_pane_vc_g1

0x2cfe,	// (0x00051831) list_single_number_heading_pane_vc_g2_ParamLimits

0x2cfe,	// (0x00051831) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e105) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e105) list_single_number_heading_pane_vc_g

0x1903,	// (0x00050436) list_single_number_heading_pane_vc_t1_ParamLimits

0x1903,	// (0x00050436) list_single_number_heading_pane_vc_t1

0x304d,	// (0x00051b80) list_single_number_heading_pane_vc_t2_ParamLimits

0x304d,	// (0x00051b80) list_single_number_heading_pane_vc_t2

0x0600,	// (0x0004f133) list_single_number_heading_pane_vc_t3_ParamLimits

0x0600,	// (0x0004f133) list_single_number_heading_pane_vc_t3

0x0002,

0xfa36,	// (0x0005e569) list_single_number_heading_pane_vc_t_ParamLimits

0xfa36,	// (0x0005e569) list_single_number_heading_pane_vc_t

0x188e,	// (0x000503c1) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x188e,	// (0x000503c1) list_single_graphic_heading_pane_vc_g1

0x2cf2,	// (0x00051825) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2cf2,	// (0x00051825) list_single_graphic_heading_pane_vc_g4

0x2cfe,	// (0x00051831) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2cfe,	// (0x00051831) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x0005e2f1) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0005e2f1) list_single_graphic_heading_pane_vc_g

0x1903,	// (0x00050436) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x1903,	// (0x00050436) list_single_graphic_heading_pane_vc_t1

0x3061,	// (0x00051b94) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3061,	// (0x00051b94) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3d,	// (0x0005e570) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x0005e570) list_single_graphic_heading_pane_vc_t

0x2cf2,	// (0x00051825) list_double2_pane_vc_g1_ParamLimits

0x2cf2,	// (0x00051825) list_double2_pane_vc_g1

0x2cfe,	// (0x00051831) list_double2_pane_vc_g2_ParamLimits

0x2cfe,	// (0x00051831) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e105) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e105) list_double2_pane_vc_g

0x2ebf,	// (0x000519f2) list_double2_pane_vc_t1_ParamLimits

0x2ebf,	// (0x000519f2) list_double2_pane_vc_t1

0x3075,	// (0x00051ba8) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3075,	// (0x00051ba8) list_double2_large_graphic_pane_vc_g1

0x3081,	// (0x00051bb4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3081,	// (0x00051bb4) list_double2_large_graphic_pane_vc_g2

0x308d,	// (0x00051bc0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x308d,	// (0x00051bc0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0005e11d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0005e11d) list_double2_large_graphic_pane_vc_g

0x3099,	// (0x00051bcc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3099,	// (0x00051bcc) list_double2_large_graphic_pane_vc_t1

0x30af,	// (0x00051be2) list_double_time_pane_vc_g1_ParamLimits

0x30af,	// (0x00051be2) list_double_time_pane_vc_g1

0x30bb,	// (0x00051bee) list_double_time_pane_vc_g2_ParamLimits

0x30bb,	// (0x00051bee) list_double_time_pane_vc_g2

0x0001,

0xfa42,	// (0x0005e575) list_double_time_pane_vc_g_ParamLimits

0xfa42,	// (0x0005e575) list_double_time_pane_vc_g

0x30c7,	// (0x00051bfa) list_double_time_pane_vc_t1_ParamLimits

0x30c7,	// (0x00051bfa) list_double_time_pane_vc_t1

0x30e5,	// (0x00051c18) list_double_time_pane_vc_t2_ParamLimits

0x30e5,	// (0x00051c18) list_double_time_pane_vc_t2

0x312f,	// (0x00051c62) list_double_time_pane_vc_t3_ParamLimits

0x312f,	// (0x00051c62) list_double_time_pane_vc_t3

0x3141,	// (0x00051c74) list_double_time_pane_vc_t4_ParamLimits

0x3141,	// (0x00051c74) list_double_time_pane_vc_t4

0x0003,

0xfa47,	// (0x0005e57a) list_double_time_pane_vc_t_ParamLimits

0xfa47,	// (0x0005e57a) list_double_time_pane_vc_t

0x2cf2,	// (0x00051825) list_double_pane_vc_g1_ParamLimits

0x2cf2,	// (0x00051825) list_double_pane_vc_g1

0x2cfe,	// (0x00051831) list_double_pane_vc_g2_ParamLimits

0x2cfe,	// (0x00051831) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e105) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e105) list_double_pane_vc_g

0x3155,	// (0x00051c88) list_double_pane_vc_t1_ParamLimits

0x3155,	// (0x00051c88) list_double_pane_vc_t1

0x3167,	// (0x00051c9a) list_double_pane_vc_t2_ParamLimits

0x3167,	// (0x00051c9a) list_double_pane_vc_t2

0x0001,

0xfa50,	// (0x0005e583) list_double_pane_vc_t_ParamLimits

0xfa50,	// (0x0005e583) list_double_pane_vc_t

0x2cf2,	// (0x00051825) list_double_number_pane_vc_g1_ParamLimits

0x2cf2,	// (0x00051825) list_double_number_pane_vc_g1

0x2cfe,	// (0x00051831) list_double_number_pane_vc_g2_ParamLimits

0x2cfe,	// (0x00051831) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e105) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e105) list_double_number_pane_vc_g

0x317f,	// (0x00051cb2) list_double_number_pane_vc_t1_ParamLimits

0x317f,	// (0x00051cb2) list_double_number_pane_vc_t1

0x3191,	// (0x00051cc4) list_double_number_pane_vc_t2_ParamLimits

0x3191,	// (0x00051cc4) list_double_number_pane_vc_t2

0x31a3,	// (0x00051cd6) list_double_number_pane_vc_t3_ParamLimits

0x31a3,	// (0x00051cd6) list_double_number_pane_vc_t3

0x0002,

0xfa55,	// (0x0005e588) list_double_number_pane_vc_t_ParamLimits

0xfa55,	// (0x0005e588) list_double_number_pane_vc_t

0x31bb,	// (0x00051cee) list_double_large_graphic_pane_vc_g1_ParamLimits

0x31bb,	// (0x00051cee) list_double_large_graphic_pane_vc_g1

0x31d7,	// (0x00051d0a) list_double_large_graphic_pane_vc_g2_ParamLimits

0x31d7,	// (0x00051d0a) list_double_large_graphic_pane_vc_g2

0x31eb,	// (0x00051d1e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x31eb,	// (0x00051d1e) list_double_large_graphic_pane_vc_g3

0x31fa,	// (0x00051d2d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x31fa,	// (0x00051d2d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5c,	// (0x0005e58f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5c,	// (0x0005e58f) list_double_large_graphic_pane_vc_g

0x3209,	// (0x00051d3c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3209,	// (0x00051d3c) list_double_large_graphic_pane_vc_t1

0x3223,	// (0x00051d56) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3223,	// (0x00051d56) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa65,	// (0x0005e598) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa65,	// (0x0005e598) list_double_large_graphic_pane_vc_t

0x2cf2,	// (0x00051825) list_double_heading_pane_vc_g1_ParamLimits

0x2cf2,	// (0x00051825) list_double_heading_pane_vc_g1

0x2cfe,	// (0x00051831) list_double_heading_pane_vc_g2_ParamLimits

0x2cfe,	// (0x00051831) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e105) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e105) list_double_heading_pane_vc_g

0x3245,	// (0x00051d78) list_double_heading_pane_vc_t1_ParamLimits

0x3245,	// (0x00051d78) list_double_heading_pane_vc_t1

0x1903,	// (0x00050436) list_double_heading_pane_vc_t2_ParamLimits

0x1903,	// (0x00050436) list_double_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x0005e59d) list_double_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x0005e59d) list_double_heading_pane_vc_t

0x3259,	// (0x00051d8c) list_double_graphic_pane_vc_g1_ParamLimits

0x3259,	// (0x00051d8c) list_double_graphic_pane_vc_g1

0x3265,	// (0x00051d98) list_double_graphic_pane_vc_g2_ParamLimits

0x3265,	// (0x00051d98) list_double_graphic_pane_vc_g2

0x2cf2,	// (0x00051825) list_double_graphic_pane_vc_g3_ParamLimits

0x2cf2,	// (0x00051825) list_double_graphic_pane_vc_g3

0x0003,

0xfa6f,	// (0x0005e5a2) list_double_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x0005e5a2) list_double_graphic_pane_vc_g

0x3282,	// (0x00051db5) list_double_graphic_pane_vc_t1_ParamLimits

0x3282,	// (0x00051db5) list_double_graphic_pane_vc_t1

0x32a0,	// (0x00051dd3) list_double_graphic_pane_vc_t2_ParamLimits

0x32a0,	// (0x00051dd3) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0005e5ab) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0005e5ab) list_double_graphic_pane_vc_t

0x0110,	// (0x0004ec43) aid_size_cell_fastswap

0xb6db,	// (0x0005a20e) aid_size_cell_touch_ParamLimits

0xb6db,	// (0x0005a20e) aid_size_cell_touch

0x037d,	// (0x0004eeb0) popup_fast_swap_wide_window_ParamLimits

0x037d,	// (0x0004eeb0) popup_fast_swap_wide_window

0xb88b,	// (0x0005a3be) touch_pane_ParamLimits

0xb88b,	// (0x0005a3be) touch_pane

0x4000,	// (0x00052b33) button_value_adjust_pane_cp2

0x0a01,	// (0x0004f534) button_value_adjust_pane_cp4

0x0a23,	// (0x0004f556) form_field_data_pane_cp2

0xbcc5,	// (0x0005a7f8) form_field_data_wide_pane_cp2

0x4470,	// (0x00052fa3) bg_scroll_pane_ParamLimits

0x0ded,	// (0x0004f920) scroll_handle_pane_ParamLimits

0x0e01,	// (0x0004f934) scroll_sc2_down_pane_ParamLimits

0x0e01,	// (0x0004f934) scroll_sc2_down_pane

0x44a1,	// (0x00052fd4) scroll_sc2_up_pane_ParamLimits

0x44a1,	// (0x00052fd4) scroll_sc2_up_pane

0xe0f9,	// (0x0005cc2c) grid_wheel_folder_pane_g1_ParamLimits

0xe0f9,	// (0x0005cc2c) grid_wheel_folder_pane_g1

0x1030,	// (0x0004fb63) clock_nsta_pane_cp2_ParamLimits

0x1030,	// (0x0004fb63) clock_nsta_pane_cp2

0x4fba,	// (0x00053aed) listscroll_midp_pane_ParamLimits

0xd510,	// (0x0005c043) midp_canvas_pane

0x4f6c,	// (0x00053a9f) nsta_clock_indic_pane

0x4fa0,	// (0x00053ad3) listscroll_form_pane_vc

0x4fa8,	// (0x00053adb) listscroll_set_pane_vc_ParamLimits

0x4fa8,	// (0x00053adb) listscroll_set_pane_vc

0xd799,	// (0x0005c2cc) clock_nsta_pane

0xd86d,	// (0x0005c3a0) indicator_nsta_pane

0x53f6,	// (0x00053f29) bg_popup_sub_pane_cp2_ParamLimits

0x540a,	// (0x00053f3d) find_pane_cp2_ParamLimits

0x540a,	// (0x00053f3d) find_pane_cp2

0x5420,	// (0x00053f53) grid_toobar_pane_ParamLimits

0x5500,	// (0x00054033) list_form_gen_pane_vc_ParamLimits

0x5500,	// (0x00054033) list_form_gen_pane_vc

0x5516,	// (0x00054049) scroll_pane_cp8_vc_ParamLimits

0x5516,	// (0x00054049) scroll_pane_cp8_vc

0x5592,	// (0x000540c5) data_form_wide_pane_vc_ParamLimits

0x5592,	// (0x000540c5) data_form_wide_pane_vc

0x559e,	// (0x000540d1) form_field_data_wide_pane_vc_g1

0x55a6,	// (0x000540d9) form_field_data_wide_pane_vc_t1_ParamLimits

0x55a6,	// (0x000540d9) form_field_data_wide_pane_vc_t1

0x4014,	// (0x00052b47) input_focus_pane_cp6_vc_ParamLimits

0x4014,	// (0x00052b47) input_focus_pane_cp6_vc

0xdbf3,	// (0x0005c726) list_midp_pane_ParamLimits

0x6bd7,	// (0x0005570a) scroll_pane_cp16_ParamLimits

0x6bd7,	// (0x0005570a) scroll_pane_cp16

0x594a,	// (0x0005447d) button_value_adjust_pane_ParamLimits

0x594a,	// (0x0005447d) button_value_adjust_pane

0xdda1,	// (0x0005c8d4) button_value_adjust_pane_cp6_ParamLimits

0xdda1,	// (0x0005c8d4) button_value_adjust_pane_cp6

0xdeb7,	// (0x0005c9ea) settings_code_pane_cp_ParamLimits

0xdeb7,	// (0x0005c9ea) settings_code_pane_cp

0x36c4,	// (0x000521f7) cell_touch_pane_g1

0x36c4,	// (0x000521f7) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0005e236) cell_touch_pane_g

0xdfe7,	// (0x0005cb1a) cell_touch_pane_cp_ParamLimits

0xdfe7,	// (0x0005cb1a) cell_touch_pane_cp

0xe003,	// (0x0005cb36) cell_touch_pane_ParamLimits

0xe003,	// (0x0005cb36) cell_touch_pane

0x36c4,	// (0x000521f7) scroll_sc2_down_pane_g1

0x36c4,	// (0x000521f7) scroll_sc2_up_pane_g1

0x36ce,	// (0x00052201) bg_set_opt_pane_cp4_vc

0x6f65,	// (0x00055a98) list_set_graphic_pane_vc_g1_ParamLimits

0x6f65,	// (0x00055a98) list_set_graphic_pane_vc_g1

0x5910,	// (0x00054443) list_set_graphic_pane_vc_g2_ParamLimits

0x5910,	// (0x00054443) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x0005e526) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x0005e526) list_set_graphic_pane_vc_g

0x6f71,	// (0x00055aa4) text_primary_small_cp13_vc_ParamLimits

0x6f71,	// (0x00055aa4) text_primary_small_cp13_vc

0x6f89,	// (0x00055abc) list_set_graphic_pane_vc_ParamLimits

0x6f89,	// (0x00055abc) list_set_graphic_pane_vc

0x36ce,	// (0x00052201) input_focus_pane_cp2_vc

0x36c4,	// (0x000521f7) setting_code_pane_vc_g1

0x37f9,	// (0x0005232c) setting_code_pane_vc_t1

0x6f9d,	// (0x00055ad0) set_text_pane_vc_t1_ParamLimits

0x6f9d,	// (0x00055ad0) set_text_pane_vc_t1

0x36ce,	// (0x00052201) input_focus_pane_cp1_vc

0x6fba,	// (0x00055aed) list_set_text_pane_vc

0x36c4,	// (0x000521f7) setting_text_pane_vc_g1

0x36ce,	// (0x00052201) bg_set_opt_pane_cp2_vc

0x37f0,	// (0x00052323) setting_slider_graphic_pane_vc_g1

0x6fc4,	// (0x00055af7) setting_slider_graphic_pane_vc_t1

0x6fd4,	// (0x00055b07) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x0005e52b) setting_slider_graphic_pane_vc_t

0x6fe4,	// (0x00055b17) slider_set_pane_cp_vc

0x6fec,	// (0x00055b1f) slider_set_pane_vc_g1

0x6ff5,	// (0x00055b28) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x0005e530) slider_set_pane_vc_g

0x4063,	// (0x00052b96) set_opt_bg_pane_g1_copy1

0x406b,	// (0x00052b9e) set_opt_bg_pane_g2_copy1

0x7021,	// (0x00055b54) set_opt_bg_pane_g3_copy1

0x407b,	// (0x00052bae) set_opt_bg_pane_g4_copy1

0x4083,	// (0x00052bb6) set_opt_bg_pane_g5_copy1

0x408b,	// (0x00052bbe) set_opt_bg_pane_g6_copy1

0x7029,	// (0x00055b5c) set_opt_bg_pane_g7_copy1

0x7033,	// (0x00055b66) set_opt_bg_pane_g8_copy1

0x703b,	// (0x00055b6e) set_opt_bg_pane_g9_copy1

0x36ce,	// (0x00052201) bg_set_opt_pane_cp_vc

0x7043,	// (0x00055b76) setting_slider_pane_vc_t1

0x7052,	// (0x00055b85) setting_slider_pane_vc_t2

0x7062,	// (0x00055b95) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x0005e53f) setting_slider_pane_vc_t

0x7072,	// (0x00055ba5) slider_set_pane_vc

0x19d8,	// (0x0005050b) volume_set_pane_vc_g1

0x1cc7,	// (0x000507fa) volume_set_pane_vc_g2

0x1cd0,	// (0x00050803) volume_set_pane_vc_g3

0x1cd9,	// (0x0005080c) volume_set_pane_vc_g4

0x1ce2,	// (0x00050815) volume_set_pane_vc_g5

0x1ceb,	// (0x0005081e) volume_set_pane_vc_g6

0x1a05,	// (0x00050538) volume_set_pane_vc_g7

0x1cf4,	// (0x00050827) volume_set_pane_vc_g8

0x1cfd,	// (0x00050830) volume_set_pane_vc_g9

0x1d06,	// (0x00050839) volume_set_pane_vc_g10

0x0009,

0xfa13,	// (0x0005e546) volume_set_pane_vc_g

0x707a,	// (0x00055bad) volume_set_pane_vc

0x7082,	// (0x00055bb5) button_value_adjust_pane_cp1_vc

0x708c,	// (0x00055bbf) list_highlight_pane_cp2_vc

0x7095,	// (0x00055bc8) list_set_pane_vc_ParamLimits

0x7095,	// (0x00055bc8) list_set_pane_vc

0x70f3,	// (0x00055c26) main_pane_set_vc_t1_ParamLimits

0x70f3,	// (0x00055c26) main_pane_set_vc_t1

0x7108,	// (0x00055c3b) main_pane_set_vc_t2_ParamLimits

0x7108,	// (0x00055c3b) main_pane_set_vc_t2

0x711a,	// (0x00055c4d) main_pane_set_vc_t3_ParamLimits

0x711a,	// (0x00055c4d) main_pane_set_vc_t3

0x712c,	// (0x00055c5f) main_pane_set_vc_t4_ParamLimits

0x712c,	// (0x00055c5f) main_pane_set_vc_t4

0x0003,

0xfa28,	// (0x0005e55b) main_pane_set_vc_t_ParamLimits

0xfa28,	// (0x0005e55b) main_pane_set_vc_t

0x713e,	// (0x00055c71) setting_code_pane_vc_ParamLimits

0x713e,	// (0x00055c71) setting_code_pane_vc

0x714d,	// (0x00055c80) setting_slider_graphic_pane_vc

0x714d,	// (0x00055c80) setting_slider_pane_vc

0x714d,	// (0x00055c80) setting_text_pane_vc

0x714d,	// (0x00055c80) setting_volume_pane_vc

0x7155,	// (0x00055c88) scroll_pane_cp121_vc

0x3fee,	// (0x00052b21) set_content_pane_vc

0x715d,	// (0x00055c90) button_value_adjust_pane_g1

0x7166,	// (0x00055c99) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x0005e5b0) button_value_adjust_pane_g

0x716f,	// (0x00055ca2) form_field_slider_wide_pane_vc_t1_ParamLimits

0x716f,	// (0x00055ca2) form_field_slider_wide_pane_vc_t1

0x7183,	// (0x00055cb6) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7183,	// (0x00055cb6) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x0005e5b5) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x0005e5b5) form_field_slider_wide_pane_vc_t

0x3a29,	// (0x0005255c) input_focus_pane_cp10_vc_ParamLimits

0x3a29,	// (0x0005255c) input_focus_pane_cp10_vc

0x71af,	// (0x00055ce2) slider_cont_pane_cp1_vc_ParamLimits

0x71af,	// (0x00055ce2) slider_cont_pane_cp1_vc

0x71bf,	// (0x00055cf2) slider_form_pane_g1_cp2

0x6ff5,	// (0x00055b28) slider_form_pane_g2_cp2

0x71ec,	// (0x00055d1f) form_field_slider_pane_vc_t3

0x71fa,	// (0x00055d2d) form_field_slider_pane_vc_t4

0x7208,	// (0x00055d3b) slider_form_pane_vc_ParamLimits

0x7208,	// (0x00055d3b) slider_form_pane_vc

0x7215,	// (0x00055d48) form_field_slider_pane_vc_t1_ParamLimits

0x7215,	// (0x00055d48) form_field_slider_pane_vc_t1

0x7183,	// (0x00055cb6) form_field_slider_pane_vc_t2_ParamLimits

0x7183,	// (0x00055cb6) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x0005e5c7) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x0005e5c7) form_field_slider_pane_vc_t

0x3a29,	// (0x0005255c) input_focus_pane_cp9_vc_ParamLimits

0x3a29,	// (0x0005255c) input_focus_pane_cp9_vc

0x7231,	// (0x00055d64) slider_cont_pane_vc_ParamLimits

0x7231,	// (0x00055d64) slider_cont_pane_vc

0x7243,	// (0x00055d76) list_form_graphic_pane_cp_vc_ParamLimits

0x7243,	// (0x00055d76) list_form_graphic_pane_cp_vc

0x559e,	// (0x000540d1) form_field_popup_wide_pane_vc_g1

0x7258,	// (0x00055d8b) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7258,	// (0x00055d8b) form_field_popup_wide_pane_vc_t1

0x4014,	// (0x00052b47) input_focus_pane_cp8_vc_ParamLimits

0x4014,	// (0x00052b47) input_focus_pane_cp8_vc

0x729d,	// (0x00055dd0) list_form_wide_pane_vc_ParamLimits

0x729d,	// (0x00055dd0) list_form_wide_pane_vc

0x72a9,	// (0x00055ddc) list_form_graphic_pane_vc_g1

0x72b1,	// (0x00055de4) list_form_graphic_pane_vc_t1_ParamLimits

0x72b1,	// (0x00055de4) list_form_graphic_pane_vc_t1

0x37ae,	// (0x000522e1) list_highlight_pane_cp5_vc_ParamLimits

0x37ae,	// (0x000522e1) list_highlight_pane_cp5_vc

0x72cd,	// (0x00055e00) list_form_graphic_pane_vc_ParamLimits

0x72cd,	// (0x00055e00) list_form_graphic_pane_vc

0x559e,	// (0x000540d1) form_field_popup_pane_vc_g1

0x72e3,	// (0x00055e16) form_field_popup_pane_vc_t1_ParamLimits

0x72e3,	// (0x00055e16) form_field_popup_pane_vc_t1

0x4014,	// (0x00052b47) input_focus_pane_cp7_vc_ParamLimits

0x4014,	// (0x00052b47) input_focus_pane_cp7_vc

0x72fa,	// (0x00055e2d) list_form_pane_vc_ParamLimits

0x72fa,	// (0x00055e2d) list_form_pane_vc

0x7306,	// (0x00055e39) data_form_pane_vc_t1_ParamLimits

0x7306,	// (0x00055e39) data_form_pane_vc_t1

0x4063,	// (0x00052b96) input_focus_pane_vc_g1

0x406b,	// (0x00052b9e) input_focus_pane_vc_g2

0x4073,	// (0x00052ba6) input_focus_pane_vc_g3

0x407b,	// (0x00052bae) input_focus_pane_vc_g4

0x4083,	// (0x00052bb6) input_focus_pane_vc_g5

0x408b,	// (0x00052bbe) input_focus_pane_vc_g6

0x4093,	// (0x00052bc6) input_focus_pane_vc_g7

0x409b,	// (0x00052bce) input_focus_pane_vc_g8

0x40a3,	// (0x00052bd6) input_focus_pane_vc_g9

0x36c4,	// (0x000521f7) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0005e1bf) input_focus_pane_vc_g

0x5592,	// (0x000540c5) data_form_pane_vc_ParamLimits

0x5592,	// (0x000540c5) data_form_pane_vc

0x559e,	// (0x000540d1) form_field_data_pane_vc_g1

0x7321,	// (0x00055e54) form_field_data_pane_vc_t1_ParamLimits

0x7321,	// (0x00055e54) form_field_data_pane_vc_t1

0x4014,	// (0x00052b47) input_focus_pane_vc_ParamLimits

0x4014,	// (0x00052b47) input_focus_pane_vc

0x733b,	// (0x00055e6e) button_value_adjust_pane_cp3_vc

0x7343,	// (0x00055e76) button_value_adjust_pane_cp5_vc

0x734b,	// (0x00055e7e) form_field_data_pane_vc_ParamLimits

0x734b,	// (0x00055e7e) form_field_data_pane_vc

0x7362,	// (0x00055e95) form_field_data_pane_vc_cp2

0x736a,	// (0x00055e9d) form_field_data_wide_pane_vc_ParamLimits

0x736a,	// (0x00055e9d) form_field_data_wide_pane_vc

0x7380,	// (0x00055eb3) form_field_data_wide_pane_vc_cp2

0x7388,	// (0x00055ebb) form_field_popup_pane_vc_ParamLimits

0x7388,	// (0x00055ebb) form_field_popup_pane_vc

0x739f,	// (0x00055ed2) form_field_popup_wide_pane_vc_ParamLimits

0x739f,	// (0x00055ed2) form_field_popup_wide_pane_vc

0x73b5,	// (0x00055ee8) form_field_slider_pane_vc_ParamLimits

0x73b5,	// (0x00055ee8) form_field_slider_pane_vc

0x73c8,	// (0x00055efb) form_field_slider_wide_pane_vc_ParamLimits

0x73c8,	// (0x00055efb) form_field_slider_wide_pane_vc

0xe021,	// (0x0005cb54) grid_touch_1_pane_ParamLimits

0xe021,	// (0x0005cb54) grid_touch_1_pane

0xe035,	// (0x0005cb68) grid_touch_2_pane_ParamLimits

0xe035,	// (0x0005cb68) grid_touch_2_pane

0x7496,	// (0x00055fc9) touch_pane_g1_ParamLimits

0x7496,	// (0x00055fc9) touch_pane_g1

0x73ff,	// (0x00055f32) cell_app_pane_cp_wide_ParamLimits

0x73ff,	// (0x00055f32) cell_app_pane_cp_wide

0x7410,	// (0x00055f43) grid_popup_fast_wide_pane_ParamLimits

0x7410,	// (0x00055f43) grid_popup_fast_wide_pane

0x7424,	// (0x00055f57) scroll_pane_cp19_ParamLimits

0x7424,	// (0x00055f57) scroll_pane_cp19

0x36ce,	// (0x00052201) bg_popup_window_pane_cp20

0x7438,	// (0x00055f6b) listscroll_popup_fast_wide_pane

0x41c9,	// (0x00052cfc) grid_indicator_nsta_pane

0x7440,	// (0x00055f73) clock_nsta_pane_g1

0x7449,	// (0x00055f7c) clock_nsta_pane_t1

0xe05f,	// (0x0005cb92) cell_indicator_nsta_pane_ParamLimits

0xe05f,	// (0x0005cb92) cell_indicator_nsta_pane

0x7496,	// (0x00055fc9) cell_indicator_nsta_pane_g1

0xe076,	// (0x0005cba9) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x0005e5d8) cell_indicator_nsta_pane_g

0x74b1,	// (0x00055fe4) clock_nsta_pane_cp

0x74b9,	// (0x00055fec) indicator_nsta_pane_cp

0x74c1,	// (0x00055ff4) nsta_clock_indic_pane_g1

0x3877,	// (0x000523aa) grid_indicator_pane

0x4596,	// (0x000530c9) scroll_pane_cp29

0x0f7f,	// (0x0004fab2) indicator_nsta_pane_cp2_ParamLimits

0x0f7f,	// (0x0004fab2) indicator_nsta_pane_cp2

0x37ae,	// (0x000522e1) main_apps_wheel_pane

0x57c9,	// (0x000542fc) form_midp_field_text_pane_ParamLimits

0x591c,	// (0x0005444f) scroll_bar_cp050_ParamLimits

0x7522,	// (0x00056055) cell_indicator_pane_ParamLimits

0x7522,	// (0x00056055) cell_indicator_pane

0x753d,	// (0x00056070) cell_indicator_pane_g1

0xe083,	// (0x0005cbb6) grid_wheel_folder_pane_ParamLimits

0xe083,	// (0x0005cbb6) grid_wheel_folder_pane

0xe091,	// (0x0005cbc4) list_wheel_apps_pane_ParamLimits

0xe091,	// (0x0005cbc4) list_wheel_apps_pane

0xe09f,	// (0x0005cbd2) main_apps_wheel_pane_g1_ParamLimits

0xe09f,	// (0x0005cbd2) main_apps_wheel_pane_g1

0xe0ab,	// (0x0005cbde) main_apps_wheel_pane_g2_ParamLimits

0xe0ab,	// (0x0005cbde) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x0005e5f4) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x0005e5f4) main_apps_wheel_pane_g

0xe0b9,	// (0x0005cbec) main_apps_wheel_pane_t1_ParamLimits

0xe0b9,	// (0x0005cbec) main_apps_wheel_pane_t1

0xe0cd,	// (0x0005cc00) list_wheel_apps_pane_g1

0xe0d5,	// (0x0005cc08) list_wheel_apps_pane_g2

0xe0dd,	// (0x0005cc10) list_wheel_apps_pane_g3

0xe0e5,	// (0x0005cc18) list_wheel_apps_pane_g4

0xe0ef,	// (0x0005cc22) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x0005e5f9) list_wheel_apps_pane_g

0x4b00,	// (0x00053633) navi_icon_text_pane

0xd68d,	// (0x0005c1c0) aid_fill_nsta

0x7604,	// (0x00056137) navi_icon_text_pane_g1

0x7610,	// (0x00056143) navi_icon_text_pane_t1

0xd4ef,	// (0x0005c022) list_set_graphic_pane_t1_ParamLimits

0xd4ef,	// (0x0005c022) list_set_graphic_pane_t1

0x606e,	// (0x00054ba1) popup_midp_note_alarm_window_t6_ParamLimits

0x606e,	// (0x00054ba1) popup_midp_note_alarm_window_t6

0x6080,	// (0x00054bb3) popup_midp_note_alarm_window_t7_ParamLimits

0x6080,	// (0x00054bb3) popup_midp_note_alarm_window_t7

0x6092,	// (0x00054bc5) popup_midp_note_alarm_window_t8_ParamLimits

0x6092,	// (0x00054bc5) popup_midp_note_alarm_window_t8

0x60a4,	// (0x00054bd7) popup_midp_note_alarm_window_t9_ParamLimits

0x60a4,	// (0x00054bd7) popup_midp_note_alarm_window_t9

0x60b6,	// (0x00054be9) popup_midp_note_alarm_window_t10_ParamLimits

0x60b6,	// (0x00054be9) popup_midp_note_alarm_window_t10

0x60c8,	// (0x00054bfb) popup_midp_note_alarm_window_t11_ParamLimits

0x60c8,	// (0x00054bfb) popup_midp_note_alarm_window_t11

0x60da,	// (0x00054c0d) scroll_pane_cp17_ParamLimits

0x60da,	// (0x00054c0d) scroll_pane_cp17

0x19d8,	// (0x0005050b) volume_small_pane_cp_g1

0x1d0f,	// (0x00050842) volume_small_pane_cp_g2

0x1d18,	// (0x0005084b) volume_small_pane_cp_g3

0x19ea,	// (0x0005051d) volume_small_pane_cp_g4

0x1d21,	// (0x00050854) volume_small_pane_cp_g5

0x1ce2,	// (0x00050815) volume_small_pane_cp_g6

0x19fc,	// (0x0005052f) volume_small_pane_cp_g7

0x1d2a,	// (0x0005085d) volume_small_pane_cp_g8

0x1d33,	// (0x00050866) volume_small_pane_cp_g9

0x1a0e,	// (0x00050541) volume_small_pane_cp_g10

0x4d55,	// (0x00053888) midp_ticker_pane_g1_ParamLimits

0x4d61,	// (0x00053894) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0005e28b) midp_ticker_pane_g_ParamLimits

0x4d6d,	// (0x000538a0) midp_ticker_pane_t1_ParamLimits

0xd6b1,	// (0x0005c1e4) aid_fill_nsta_2

0x58fc,	// (0x0005442f) list_form2_midp_pane

0x6a26,	// (0x00055559) midp_editing_number_pane_ParamLimits

0x6a35,	// (0x00055568) midp_ticker_pane_ParamLimits

0x7622,	// (0x00056155) form2_midp_field_pane

0x7646,	// (0x00056179) scroll_pane_cp51

0x7666,	// (0x00056199) form2_midp_button_pane_ParamLimits

0x7666,	// (0x00056199) form2_midp_button_pane

0x7678,	// (0x000561ab) form2_midp_content_pane_ParamLimits

0x7678,	// (0x000561ab) form2_midp_content_pane

0x7692,	// (0x000561c5) form2_midp_field_choice_group_pane

0x769a,	// (0x000561cd) form2_midp_field_pane_g1

0x76a2,	// (0x000561d5) form2_midp_field_pane_g2

0x76aa,	// (0x000561dd) form2_midp_field_pane_g3

0x76b2,	// (0x000561e5) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x0005e61e) form2_midp_field_pane_g

0x76ba,	// (0x000561ed) form2_midp_gauge_slider_pane

0x76c2,	// (0x000561f5) form2_midp_gauge_wait_pane

0x76ca,	// (0x000561fd) form2_midp_image_pane_ParamLimits

0x76ca,	// (0x000561fd) form2_midp_image_pane

0x76e5,	// (0x00056218) form2_midp_label_pane_ParamLimits

0x76e5,	// (0x00056218) form2_midp_label_pane

0xe122,	// (0x0005cc55) form2_midp_label_pane_cp_ParamLimits

0xe122,	// (0x0005cc55) form2_midp_label_pane_cp

0x771f,	// (0x00056252) form2_midp_string_pane_ParamLimits

0x771f,	// (0x00056252) form2_midp_string_pane

0xc7da,	// (0x0005b30d) form2_midp_text_pane_ParamLimits

0xc7da,	// (0x0005b30d) form2_midp_text_pane

0x7731,	// (0x00056264) form2_midp_time_pane

0x7741,	// (0x00056274) input_focus_pane_cp51_ParamLimits

0x7741,	// (0x00056274) input_focus_pane_cp51

0x7759,	// (0x0005628c) form2_midp_label_pane_t1_ParamLimits

0x7759,	// (0x0005628c) form2_midp_label_pane_t1

0xc7f3,	// (0x0005b326) form2_mdip_text_pane_t1_ParamLimits

0xc7f3,	// (0x0005b326) form2_mdip_text_pane_t1

0x3301,	// (0x00051e34) form2_midp_time_pane_t1

0x77a1,	// (0x000562d4) form2_midp_gauge_slider_pane_t1

0xe143,	// (0x0005cc76) form2_midp_gauge_slider_pane_t2

0xe157,	// (0x0005cc8a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x0005e627) form2_midp_gauge_slider_pane_t

0x77d7,	// (0x0005630a) form2_midp_slider_pane

0x77e3,	// (0x00056316) form2_midp_gauge_wait_pane_t1

0x77f1,	// (0x00056324) form2_midp_wait_pane_ParamLimits

0x77f1,	// (0x00056324) form2_midp_wait_pane

0xe16b,	// (0x0005cc9e) list_single_2graphic_pane_cp4_ParamLimits

0xe16b,	// (0x0005cc9e) list_single_2graphic_pane_cp4

0xdb79,	// (0x0005c6ac) list_single_midp_graphic_pane_cp_ParamLimits

0xdb79,	// (0x0005c6ac) list_single_midp_graphic_pane_cp

0x36ce,	// (0x00052201) list_highlight_pane_cp20

0x784b,	// (0x0005637e) list_single_2graphic_pane_g1_cp4

0x6e49,	// (0x0005597c) list_single_2graphic_pane_g2_cp4

0x7853,	// (0x00056386) list_single_2graphic_pane_t1_cp4

0x37ae,	// (0x000522e1) list_highlight_pane_cp21

0x7862,	// (0x00056395) list_single_midp_graphic_pane_g4_cp

0x7871,	// (0x000563a4) list_single_midp_graphic_pane_t1_cp

0xe181,	// (0x0005ccb4) form2_mdip_string_pane_t1_ParamLimits

0xe181,	// (0x0005ccb4) form2_mdip_string_pane_t1

0x36ce,	// (0x00052201) bg_wml_button_pane_cp2

0x36c4,	// (0x000521f7) form2_midp_image_pane_g1

0x2d60,	// (0x00051893) list_double_large_graphic_pane_g5_ParamLimits

0x2d60,	// (0x00051893) list_double_large_graphic_pane_g5

0x4fba,	// (0x00053aed) midp_form_pane_ParamLimits

0x37ae,	// (0x000522e1) main_apps_wheel_pane_ParamLimits

0xc386,	// (0x0005aeb9) popup_preview_window_ParamLimits

0xc386,	// (0x0005aeb9) popup_preview_window

0x180b,	// (0x0005033e) popup_touch_info_window_ParamLimits

0x180b,	// (0x0005033e) popup_touch_info_window

0x1829,	// (0x0005035c) popup_touch_menu_window_ParamLimits

0x1829,	// (0x0005035c) popup_touch_menu_window

0x36ba,	// (0x000521ed) bg_popup_sub_pane_cp6

0x79a9,	// (0x000564dc) list_touch_menu_pane

0x79b1,	// (0x000564e4) list_single_touch_menu_pane_ParamLimits

0x79b1,	// (0x000564e4) list_single_touch_menu_pane

0x79c5,	// (0x000564f8) list_single_touch_menu_pane_t1

0x37ae,	// (0x000522e1) bg_popup_sub_pane_cp7_ParamLimits

0x37ae,	// (0x000522e1) bg_popup_sub_pane_cp7

0x79d3,	// (0x00056506) heading_sub_pane

0x79db,	// (0x0005650e) list_touch_info_pane_ParamLimits

0x79db,	// (0x0005650e) list_touch_info_pane

0x79ea,	// (0x0005651d) list_single_touch_info_pane_ParamLimits

0x79ea,	// (0x0005651d) list_single_touch_info_pane

0x79fc,	// (0x0005652f) list_single_touch_info_pane_t1

0x7a0a,	// (0x0005653d) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x0005e635) list_single_touch_info_pane_t

0x4c80,	// (0x000537b3) bg_popup_heading_pane_cp

0x7a18,	// (0x0005654b) heading_sub_pane_t1

0x552c,	// (0x0005405f) bg_popup_preview_window_pane_cp_ParamLimits

0x552c,	// (0x0005405f) bg_popup_preview_window_pane_cp

0x79d3,	// (0x00056506) heading_preview_pane

0x79db,	// (0x0005650e) list_preview_pane_ParamLimits

0x79db,	// (0x0005650e) list_preview_pane

0x7a26,	// (0x00056559) popup_preview_window_g1

0x79ea,	// (0x0005651d) list_single_preview_pane_ParamLimits

0x79ea,	// (0x0005651d) list_single_preview_pane

0x7a2e,	// (0x00056561) list_single_preview_pane_g1

0x7a36,	// (0x00056569) list_single_preview_pane_t1

0x79fc,	// (0x0005652f) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x0005e63a) list_single_preview_pane_t

0x7a44,	// (0x00056577) bg_popup_heading_pane_cp2_ParamLimits

0x7a44,	// (0x00056577) bg_popup_heading_pane_cp2

0x7a5a,	// (0x0005658d) heading_preview_pane_g1

0x7a62,	// (0x00056595) heading_preview_pane_t1_ParamLimits

0x7a62,	// (0x00056595) heading_preview_pane_t1

0x389a,	// (0x000523cd) soft_indicator_pane_t1_ParamLimits

0x3f7b,	// (0x00052aae) scroll_pane_ParamLimits

0x448f,	// (0x00052fc2) scroll_sc2_left_pane

0x4498,	// (0x00052fcb) scroll_sc2_right_pane

0x44b7,	// (0x00052fea) scroll_bg_pane_g1_ParamLimits

0x44cc,	// (0x00052fff) scroll_bg_pane_g2_ParamLimits

0x44e4,	// (0x00053017) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0005e216) scroll_bg_pane_g_ParamLimits

0x44b7,	// (0x00052fea) scroll_handle_pane_g1_ParamLimits

0x4506,	// (0x00053039) scroll_handle_pane_g2_ParamLimits

0x44e4,	// (0x00053017) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0005e21d) scroll_handle_pane_g_ParamLimits

0x12db,	// (0x0004fe0e) popup_choice_list_window_ParamLimits

0x12db,	// (0x0004fe0e) popup_choice_list_window

0x5402,	// (0x00053f35) choice_list_pane

0x5484,	// (0x00053fb7) cell_toolbar_pane_t1

0x54ac,	// (0x00053fdf) toolbar_button_pane_ParamLimits

0x6594,	// (0x000550c7) ai_gene_pane_1_t2_ParamLimits

0x6594,	// (0x000550c7) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0005e440) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0005e440) ai_gene_pane_1_t

0x7a7f,	// (0x000565b2) scroll_sc2_left_pane_g1

0x7a7f,	// (0x000565b2) scroll_sc2_right_pane_g1

0x4fba,	// (0x00053aed) bg_popup_sub_pane_cp10

0x7a89,	// (0x000565bc) list_choice_list_pane

0x7aa2,	// (0x000565d5) list_single_choice_list_pane_ParamLimits

0x7aa2,	// (0x000565d5) list_single_choice_list_pane

0x7ab5,	// (0x000565e8) list_single_choice_list_pane_g1

0x419a,	// (0x00052ccd) list_single_choice_list_pane_t1_ParamLimits

0x419a,	// (0x00052ccd) list_single_choice_list_pane_t1

0x7abd,	// (0x000565f0) choice_list_pane_g1

0x7ac5,	// (0x000565f8) choice_list_pane_t1

0x36ba,	// (0x000521ed) input_focus_pane_cp11

0x436e,	// (0x00052ea1) title_pane_stacon_g2_ParamLimits

0x436e,	// (0x00052ea1) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0005e1fc) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0005e1fc) title_pane_stacon_g

0x4c80,	// (0x000537b3) cursor_press_pane

0xc03f,	// (0x0005ab72) popup_fep_hwr_window_ParamLimits

0xc03f,	// (0x0005ab72) popup_fep_hwr_window

0x13fb,	// (0x0004ff2e) popup_fep_vkb_window_ParamLimits

0x13fb,	// (0x0004ff2e) popup_fep_vkb_window

0x7ad3,	// (0x00056606) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x0005e663) fep_vkb_side_pane_g_ParamLimits

0x1d75,	// (0x000508a8) fep_hwr_candidate_pane_ParamLimits

0x1d75,	// (0x000508a8) fep_hwr_candidate_pane

0x1d9f,	// (0x000508d2) fep_hwr_side_pane_ParamLimits

0x1d9f,	// (0x000508d2) fep_hwr_side_pane

0x1dbf,	// (0x000508f2) fep_hwr_top_pane_ParamLimits

0x1dbf,	// (0x000508f2) fep_hwr_top_pane

0x1dd7,	// (0x0005090a) fep_hwr_write_pane_ParamLimits

0x1dd7,	// (0x0005090a) fep_hwr_write_pane

0xfb30,	// (0x0005e663) fep_vkb_side_pane_g

0x7adb,	// (0x0005660e) fep_hwr_top_pane_g1

0x7aed,	// (0x00056620) fep_hwr_top_pane_g2

0x1e11,	// (0x00050944) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x0005e63f) fep_hwr_top_pane_g

0x1e26,	// (0x00050959) fep_hwr_top_text_pane

0x465c,	// (0x0005318f) fep_hwr_top_text_pane_g1

0x7b23,	// (0x00056656) fep_hwr_top_text_pane_t1

0x1f1c,	// (0x00050a4f) fep_hwr_candidate_pane_g1

0x7d66,	// (0x00056899) fep_vkb_keypad_pane_g3_ParamLimits

0x7d66,	// (0x00056899) fep_vkb_keypad_pane_g3

0x7d8e,	// (0x000568c1) fep_vkb_keypad_pane_g4_ParamLimits

0x7d8e,	// (0x000568c1) fep_vkb_keypad_pane_g4

0x7dfd,	// (0x00056930) fep_vkb_bottom_pane_g2_ParamLimits

0x7dfd,	// (0x00056930) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x0005e66a) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x0005e66a) fep_vkb_bottom_pane_g

0x7a7f,	// (0x000565b2) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x0005e674) cell_vkb_side_pane_g

0x7e88,	// (0x000569bb) cell_vkb_side_pane_t1

0x7e96,	// (0x000569c9) cell_vkb_side_pane_t1_copy1

0x7a7f,	// (0x000565b2) bg_fep_vkb_candidate_pane_g2

0x7fc2,	// (0x00056af5) cell_vkb_candidate_pane_ParamLimits

0x7b31,	// (0x00056664) aid_size_cell_vkb_ParamLimits

0x7b31,	// (0x00056664) aid_size_cell_vkb

0x7fc2,	// (0x00056af5) cell_vkb_candidate_pane

0x1f43,	// (0x00050a76) bg_popup_fep_shadow_pane_g1

0xe211,	// (0x0005cd44) fep_vkb_bottom_pane_ParamLimits

0xe211,	// (0x0005cd44) fep_vkb_bottom_pane

0x7bf3,	// (0x00056726) fep_vkb_candidate_pane_ParamLimits

0x7bf3,	// (0x00056726) fep_vkb_candidate_pane

0xe236,	// (0x0005cd69) fep_vkb_keypad_pane_ParamLimits

0xe236,	// (0x0005cd69) fep_vkb_keypad_pane

0xe26b,	// (0x0005cd9e) fep_vkb_side_pane_ParamLimits

0xe26b,	// (0x0005cd9e) fep_vkb_side_pane

0xe2a7,	// (0x0005cdda) fep_vkb_top_pane_ParamLimits

0xe2a7,	// (0x0005cdda) fep_vkb_top_pane

0x7cbf,	// (0x000567f2) fep_vkb_top_pane_g1_ParamLimits

0x7cbf,	// (0x000567f2) fep_vkb_top_pane_g1

0x7cce,	// (0x00056801) fep_vkb_top_pane_g2_ParamLimits

0x7cce,	// (0x00056801) fep_vkb_top_pane_g2

0x7cdd,	// (0x00056810) fep_vkb_top_pane_g3_ParamLimits

0x7cdd,	// (0x00056810) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x0005e65a) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x0005e65a) fep_vkb_top_pane_g

0x7cfb,	// (0x0005682e) fep_vkb_top_text_pane_ParamLimits

0x7cfb,	// (0x0005682e) fep_vkb_top_text_pane

0xe2dc,	// (0x0005ce0f) fep_vkb_side_pane_g1_ParamLimits

0xe2dc,	// (0x0005ce0f) fep_vkb_side_pane_g1

0x7d55,	// (0x00056888) grid_vkb_side_pane_ParamLimits

0x7d55,	// (0x00056888) grid_vkb_side_pane

0x1f4b,	// (0x00050a7e) bg_popup_fep_shadow_pane_g2

0x1f54,	// (0x00050a87) bg_popup_fep_shadow_pane_g3

0x1f5c,	// (0x00050a8f) bg_popup_fep_shadow_pane_g4

0x1f65,	// (0x00050a98) bg_popup_fep_shadow_pane_g5

0x1f6f,	// (0x00050aa2) bg_popup_fep_shadow_pane_g6

0x1f77,	// (0x00050aaa) bg_popup_fep_shadow_pane_g7

0x407b,	// (0x00052bae) bg_popup_fep_shadow_pane_g8

0x7dac,	// (0x000568df) grid_vkb_keypad_number_pane_ParamLimits

0x7dac,	// (0x000568df) grid_vkb_keypad_number_pane

0x7dbc,	// (0x000568ef) grid_vkb_keypad_pane_ParamLimits

0x7dbc,	// (0x000568ef) grid_vkb_keypad_pane

0x7de2,	// (0x00056915) fep_vkb_bottom_pane_g1_ParamLimits

0x7de2,	// (0x00056915) fep_vkb_bottom_pane_g1

0x7e0b,	// (0x0005693e) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7e0b,	// (0x0005693e) grid_vkb_keypad_bottom_left_pane

0x7e20,	// (0x00056953) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7e20,	// (0x00056953) grid_vkb_keypad_bottom_right_pane

0x7e35,	// (0x00056968) fep_vkb_top_text_pane_g1

0xe323,	// (0x0005ce56) fep_vkb_top_text_pane_t1

0xe335,	// (0x0005ce68) cell_vkb_side_pane_ParamLimits

0xe335,	// (0x0005ce68) cell_vkb_side_pane

0x7a7f,	// (0x000565b2) cell_vkb_side_pane_g1

0x7ea4,	// (0x000569d7) cell_vkb_keypad_pane_ParamLimits

0x7ea4,	// (0x000569d7) cell_vkb_keypad_pane

0x7f19,	// (0x00056a4c) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x0005e687) bg_popup_fep_shadow_pane_g

0x1f89,	// (0x00050abc) cell_hwr_side_pane_g1

0x1f89,	// (0x00050abc) cell_hwr_side_pane_g2

0x7f23,	// (0x00056a56) cell_vkb_keypad_pane_t1

0xe34b,	// (0x0005ce7e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe34b,	// (0x0005ce7e) cell_vkb_keypad_bottom_left_pane

0xe360,	// (0x0005ce93) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe360,	// (0x0005ce93) cell_vkb_keypad_bottom_right_pane

0x7a7f,	// (0x000565b2) cell_vkb_keypad_bottom_left_pane_g1

0x7a7f,	// (0x000565b2) cell_vkb_keypad_bottom_right_pane_g1

0x7f87,	// (0x00056aba) cell_vkb_keypad_number_pane_ParamLimits

0x7f87,	// (0x00056aba) cell_vkb_keypad_number_pane

0x7fa6,	// (0x00056ad9) cell_vkb_keypad_number_pane_g1

0x7fb0,	// (0x00056ae3) cell_vkb_keypad_number_pane_g2

0x7fb9,	// (0x00056aec) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x0005e679) cell_vkb_keypad_number_pane_g

0x7f23,	// (0x00056a56) cell_vkb_keypad_number_pane_t1

0x7fdd,	// (0x00056b10) fep_vkb_candidate_pane_g1

0x0001,

0xfb67,	// (0x0005e69a) cell_hwr_side_pane_g

0x7ff6,	// (0x00056b29) cell_hwr_side_pane_t1

0x1f93,	// (0x00050ac6) cell_hwr_side_pane_t1_copy1

0x1fa1,	// (0x00050ad4) cell_hwr_candidate_pane_g1

0x1fd0,	// (0x00050b03) cell_hwr_candidate_pane_t1

0x7a7f,	// (0x000565b2) cell_vkb_candidate_pane_g2

0x803a,	// (0x00056b6d) cell_vkb_candidate_pane_t1

0x1d3c,	// (0x0005086f) bg_popup_fep_shadow_pane_ParamLimits

0x1d3c,	// (0x0005086f) bg_popup_fep_shadow_pane

0x1df1,	// (0x00050924) bg_fep_hwr_top_pane_g4

0x7aff,	// (0x00056632) bg_hwr_side_pane_g1_ParamLimits

0x7aff,	// (0x00056632) bg_hwr_side_pane_g1

0xc826,	// (0x0005b359) cell_hwr_side_pane_ParamLimits

0xc826,	// (0x0005b359) cell_hwr_side_pane

0x1e9d,	// (0x000509d0) fep_hwr_write_pane_g1_ParamLimits

0x1e9d,	// (0x000509d0) fep_hwr_write_pane_g1

0x1eaa,	// (0x000509dd) fep_hwr_write_pane_g2_ParamLimits

0x1eaa,	// (0x000509dd) fep_hwr_write_pane_g2

0x1eb7,	// (0x000509ea) fep_hwr_write_pane_g3_ParamLimits

0x1eb7,	// (0x000509ea) fep_hwr_write_pane_g3

0xc846,	// (0x0005b379) fep_hwr_write_pane_g4_ParamLimits

0xc846,	// (0x0005b379) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x0005e646) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x0005e646) fep_hwr_write_pane_g

0x1df1,	// (0x00050924) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1df1,	// (0x00050924) bg_fep_hwr_candidate_pane_g2

0x1eda,	// (0x00050a0d) cell_hwr_candidate_pane_ParamLimits

0x1eda,	// (0x00050a0d) cell_hwr_candidate_pane

0x1f1c,	// (0x00050a4f) fep_hwr_candidate_pane_g1_ParamLimits

0x7b5f,	// (0x00056692) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7b5f,	// (0x00056692) bg_popup_fep_shadow_pane_cp2

0x7ced,	// (0x00056820) fep_vkb_top_pane_g4_ParamLimits

0x7ced,	// (0x00056820) fep_vkb_top_pane_g4

0x7d33,	// (0x00056866) fep_vkb_side_pane_g2_ParamLimits

0x7d33,	// (0x00056866) fep_vkb_side_pane_g2

0xbbd3,	// (0x0005a706) list_setting_pane_t4_ParamLimits

0xbbd3,	// (0x0005a706) list_setting_pane_t4

0xbc6d,	// (0x0005a7a0) list_setting_number_pane_t5_ParamLimits

0xbc6d,	// (0x0005a7a0) list_setting_number_pane_t5

0xd3ff,	// (0x0005bf32) list_double_heading_pane_cp2_ParamLimits

0xd3ff,	// (0x0005bf32) list_double_heading_pane_cp2

0x3faf,	// (0x00052ae2) list_double_heading_pane_g1_cp2_ParamLimits

0x3faf,	// (0x00052ae2) list_double_heading_pane_g1_cp2

0x4022,	// (0x00052b55) list_double_heading_pane_g2_cp2_ParamLimits

0x4022,	// (0x00052b55) list_double_heading_pane_g2_cp2

0x8048,	// (0x00056b7b) list_double_heading_pane_t1_cp2_ParamLimits

0x8048,	// (0x00056b7b) list_double_heading_pane_t1_cp2

0x805e,	// (0x00056b91) list_double_heading_pane_t2_cp2_ParamLimits

0x805e,	// (0x00056b91) list_double_heading_pane_t2_cp2

0x36a2,	// (0x000521d5) aid_value_unit2

0x03c9,	// (0x0004eefc) popup_preview_fixed_window

0x3a37,	// (0x0005256a) bg_popup_preview_window_pane_cp02

0x8070,	// (0x00056ba3) list_preview_fixed_pane

0x80b6,	// (0x00056be9) list_empty_pane_fp_ParamLimits

0x80b6,	// (0x00056be9) list_empty_pane_fp

0x80b6,	// (0x00056be9) list_single_cale_day_pane_fp_ParamLimits

0x80b6,	// (0x00056be9) list_single_cale_day_pane_fp

0x80b6,	// (0x00056be9) list_single_graphic_heading_pane_fp_ParamLimits

0x80b6,	// (0x00056be9) list_single_graphic_heading_pane_fp

0x80b6,	// (0x00056be9) list_single_graphic_pane_fp_ParamLimits

0x80b6,	// (0x00056be9) list_single_graphic_pane_fp

0x80b6,	// (0x00056be9) list_single_heading_pane_fp_ParamLimits

0x80b6,	// (0x00056be9) list_single_heading_pane_fp

0x80b6,	// (0x00056be9) list_single_pane_fp_ParamLimits

0x80b6,	// (0x00056be9) list_single_pane_fp

0x80cc,	// (0x00056bff) list_single_pane_fp_g1_ParamLimits

0x80cc,	// (0x00056bff) list_single_pane_fp_g1

0x3faf,	// (0x00052ae2) list_single_pane_fp_g2_ParamLimits

0x3faf,	// (0x00052ae2) list_single_pane_fp_g2

0x4022,	// (0x00052b55) list_single_pane_fp_g3_ParamLimits

0x4022,	// (0x00052b55) list_single_pane_fp_g3

0x80d8,	// (0x00056c0b) list_single_pane_fp_g4_ParamLimits

0x80d8,	// (0x00056c0b) list_single_pane_fp_g4

0x0003,

0xfb7a,	// (0x0005e6ad) list_single_pane_fp_g_ParamLimits

0xfb7a,	// (0x0005e6ad) list_single_pane_fp_g

0x3314,	// (0x00051e47) list_single_pane_fp_t1_ParamLimits

0x3314,	// (0x00051e47) list_single_pane_fp_t1

0x332b,	// (0x00051e5e) list_single_graphic_pane_fp_g1_ParamLimits

0x332b,	// (0x00051e5e) list_single_graphic_pane_fp_g1

0x80cc,	// (0x00056bff) list_single_graphic_pane_fp_g2_ParamLimits

0x80cc,	// (0x00056bff) list_single_graphic_pane_fp_g2

0x3faf,	// (0x00052ae2) list_single_graphic_pane_fp_g3_ParamLimits

0x3faf,	// (0x00052ae2) list_single_graphic_pane_fp_g3

0x4022,	// (0x00052b55) list_single_graphic_pane_fp_g4_ParamLimits

0x4022,	// (0x00052b55) list_single_graphic_pane_fp_g4

0x80d8,	// (0x00056c0b) list_single_graphic_pane_fp_g5_ParamLimits

0x80d8,	// (0x00056c0b) list_single_graphic_pane_fp_g5

0x0004,

0xfb83,	// (0x0005e6b6) list_single_graphic_pane_fp_g_ParamLimits

0xfb83,	// (0x0005e6b6) list_single_graphic_pane_fp_g

0x3337,	// (0x00051e6a) list_single_graphic_pane_fp_t1_ParamLimits

0x3337,	// (0x00051e6a) list_single_graphic_pane_fp_t1

0x332b,	// (0x00051e5e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x332b,	// (0x00051e5e) list_single_graphic_heading_pane_fp_g1

0x80cc,	// (0x00056bff) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x80cc,	// (0x00056bff) list_single_graphic_heading_pane_fp_g2

0x3faf,	// (0x00052ae2) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3faf,	// (0x00052ae2) list_single_graphic_heading_pane_fp_g3

0x4022,	// (0x00052b55) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4022,	// (0x00052b55) list_single_graphic_heading_pane_fp_g4

0x80d8,	// (0x00056c0b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x80d8,	// (0x00056c0b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb83,	// (0x0005e6b6) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0005e6b6) list_single_graphic_heading_pane_fp_g

0x334d,	// (0x00051e80) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x334d,	// (0x00051e80) list_single_graphic_heading_pane_fp_t1

0x3363,	// (0x00051e96) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3363,	// (0x00051e96) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8e,	// (0x0005e6c1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8e,	// (0x0005e6c1) list_single_graphic_heading_pane_fp_t

0x3375,	// (0x00051ea8) list_single_cale_day_pane_fp_g1_ParamLimits

0x3375,	// (0x00051ea8) list_single_cale_day_pane_fp_g1

0x80e4,	// (0x00056c17) list_single_cale_day_pane_fp_g2_ParamLimits

0x80e4,	// (0x00056c17) list_single_cale_day_pane_fp_g2

0x33ad,	// (0x00051ee0) list_single_cale_day_pane_fp_g3_ParamLimits

0x33ad,	// (0x00051ee0) list_single_cale_day_pane_fp_g3

0x33d5,	// (0x00051f08) list_single_cale_day_pane_fp_g4_ParamLimits

0x33d5,	// (0x00051f08) list_single_cale_day_pane_fp_g4

0x33f9,	// (0x00051f2c) list_single_cale_day_pane_fp_g5_ParamLimits

0x33f9,	// (0x00051f2c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb93,	// (0x0005e6c6) list_single_cale_day_pane_fp_g_ParamLimits

0xfb93,	// (0x0005e6c6) list_single_cale_day_pane_fp_g

0x341d,	// (0x00051f50) list_single_cale_day_pane_fp_t1_ParamLimits

0x341d,	// (0x00051f50) list_single_cale_day_pane_fp_t1

0x3443,	// (0x00051f76) list_single_cale_day_pane_fp_t2_ParamLimits

0x3443,	// (0x00051f76) list_single_cale_day_pane_fp_t2

0x345c,	// (0x00051f8f) list_single_cale_day_pane_fp_t3_ParamLimits

0x345c,	// (0x00051f8f) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9e,	// (0x0005e6d1) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9e,	// (0x0005e6d1) list_single_cale_day_pane_fp_t

0x80cc,	// (0x00056bff) list_empty_pane_fp_g1_ParamLimits

0x80cc,	// (0x00056bff) list_empty_pane_fp_g1

0x3475,	// (0x00051fa8) list_empty_pane_fp_t1

0x3483,	// (0x00051fb6) list_empty_pane_fp_t2

0x0001,

0xfba5,	// (0x0005e6d8) list_empty_pane_fp_t

0x80cc,	// (0x00056bff) list_single_heading_pane_fp_g1_ParamLimits

0x80cc,	// (0x00056bff) list_single_heading_pane_fp_g1

0x3faf,	// (0x00052ae2) list_single_heading_pane_fp_g2_ParamLimits

0x3faf,	// (0x00052ae2) list_single_heading_pane_fp_g2

0x4022,	// (0x00052b55) list_single_heading_pane_fp_g3_ParamLimits

0x4022,	// (0x00052b55) list_single_heading_pane_fp_g3

0x0002,

0xfbaa,	// (0x0005e6dd) list_single_heading_pane_fp_g_ParamLimits

0xfbaa,	// (0x0005e6dd) list_single_heading_pane_fp_g

0x3491,	// (0x00051fc4) list_single_heading_pane_fp_t1_ParamLimits

0x3491,	// (0x00051fc4) list_single_heading_pane_fp_t1

0x34a3,	// (0x00051fd6) list_single_heading_pane_fp_t2_ParamLimits

0x34a3,	// (0x00051fd6) list_single_heading_pane_fp_t2

0x0001,

0xfbb1,	// (0x0005e6e4) list_single_heading_pane_fp_t_ParamLimits

0xfbb1,	// (0x0005e6e4) list_single_heading_pane_fp_t

0x4208,	// (0x00052d3b) aid_size_cell_fast

0x39a7,	// (0x000524da) soft_indicator_pane_cp1_t1

0x4242,	// (0x00052d75) cell_app_pane_cp2_ParamLimits

0x4242,	// (0x00052d75) cell_app_pane_cp2

0x1d5e,	// (0x00050891) fep_hwr_candidate_drop_down_list_pane

0x1f36,	// (0x00050a69) fep_hwr_candidate_pane_g3_ParamLimits

0x1f36,	// (0x00050a69) fep_hwr_candidate_pane_g3

0xea71,	// (0x0005d5a4) fep_hwr_candidate_pane_g4_ParamLimits

0xea71,	// (0x0005d5a4) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x0005e653) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x0005e653) fep_hwr_candidate_pane_g

0x7be2,	// (0x00056715) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7be2,	// (0x00056715) fep_vkb_candidate_drop_down_list_pane

0x7fe5,	// (0x00056b18) fep_vkb_candidate_pane_g3

0x7fed,	// (0x00056b20) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x0005e680) fep_vkb_candidate_pane_g

0x1fa1,	// (0x00050ad4) cell_hwr_candidate_pane_g1_ParamLimits

0x1faf,	// (0x00050ae2) cell_hwr_candidate_pane_g3_ParamLimits

0x1faf,	// (0x00050ae2) cell_hwr_candidate_pane_g3

0x9568,	// (0x0005809b) cell_hwr_candidate_pane_g4_ParamLimits

0x9568,	// (0x0005809b) cell_hwr_candidate_pane_g4

0x0002,

0xfb6c,	// (0x0005e69f) cell_hwr_candidate_pane_g_ParamLimits

0xfb6c,	// (0x0005e69f) cell_hwr_candidate_pane_g

0x8004,	// (0x00056b37) cell_vkb_candidate_pane_g3_ParamLimits

0x8004,	// (0x00056b37) cell_vkb_candidate_pane_g3

0x801f,	// (0x00056b52) cell_vkb_candidate_pane_g4_ParamLimits

0x801f,	// (0x00056b52) cell_vkb_candidate_pane_g4

0x80f0,	// (0x00056c23) cell_app_pane_cp2_g1_ParamLimits

0x80f0,	// (0x00056c23) cell_app_pane_cp2_g1

0x810e,	// (0x00056c41) cell_app_pane_cp2_g2_ParamLimits

0x810e,	// (0x00056c41) cell_app_pane_cp2_g2

0x0001,

0xfbb6,	// (0x0005e6e9) cell_app_pane_cp2_g_ParamLimits

0xfbb6,	// (0x0005e6e9) cell_app_pane_cp2_g

0x811a,	// (0x00056c4d) cell_app_pane_cp2_t1_ParamLimits

0x811a,	// (0x00056c4d) cell_app_pane_cp2_t1

0x4014,	// (0x00052b47) grid_highlight_pane_cp1_ParamLimits

0x4014,	// (0x00052b47) grid_highlight_pane_cp1

0x1fee,	// (0x00050b21) cell_hwr_candidate_pane_cp1_ParamLimits

0x1fee,	// (0x00050b21) cell_hwr_candidate_pane_cp1

0x1fa1,	// (0x00050ad4) fep_hwr_candidate_drop_down_list_pane_g1

0x200d,	// (0x00050b40) fep_hwr_candidate_drop_down_list_pane_g2

0x201a,	// (0x00050b4d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbb,	// (0x0005e6ee) fep_hwr_candidate_drop_down_list_pane_g

0x2027,	// (0x00050b5a) fep_hwr_candidate_drop_down_list_scroll_pane

0x2030,	// (0x00050b63) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2030,	// (0x00050b63) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x203d,	// (0x00050b70) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x203d,	// (0x00050b70) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x204a,	// (0x00050b7d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x204a,	// (0x00050b7d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x2057,	// (0x00050b8a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x2057,	// (0x00050b8a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x2072,	// (0x00050ba5) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x2072,	// (0x00050ba5) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x208d,	// (0x00050bc0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x208d,	// (0x00050bc0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x20a8,	// (0x00050bdb) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x20a8,	// (0x00050bdb) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x20c3,	// (0x00050bf6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x20c3,	// (0x00050bf6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc2,	// (0x0005e6f5) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc2,	// (0x0005e6f5) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x812c,	// (0x00056c5f) cell_vkb_candidate_pane_cp1_ParamLimits

0x812c,	// (0x00056c5f) cell_vkb_candidate_pane_cp1

0x7ced,	// (0x00056820) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7ced,	// (0x00056820) fep_vkb_candidate_drop_down_list_pane_g1

0x814c,	// (0x00056c7f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x814c,	// (0x00056c7f) fep_vkb_candidate_drop_down_list_pane_g2

0x8159,	// (0x00056c8c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8159,	// (0x00056c8c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd3,	// (0x0005e706) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd3,	// (0x0005e706) fep_vkb_candidate_drop_down_list_pane_g

0x8166,	// (0x00056c99) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8166,	// (0x00056c99) fep_vkb_candidate_drop_down_list_scroll_pane

0x8173,	// (0x00056ca6) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8173,	// (0x00056ca6) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8180,	// (0x00056cb3) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8180,	// (0x00056cb3) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x818c,	// (0x00056cbf) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x818c,	// (0x00056cbf) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8198,	// (0x00056ccb) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8198,	// (0x00056ccb) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x81b9,	// (0x00056cec) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x81b9,	// (0x00056cec) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x81da,	// (0x00056d0d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x81da,	// (0x00056d0d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x81fb,	// (0x00056d2e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x81fb,	// (0x00056d2e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x821c,	// (0x00056d4f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x821c,	// (0x00056d4f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbda,	// (0x0005e70d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbda,	// (0x0005e70d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xcf72,	// (0x0005baa5) title_pane_g1_ParamLimits

0xcf85,	// (0x0005bab8) title_pane_g2_ParamLimits

0xf54e,	// (0x0005e081) title_pane_g_ParamLimits

0x464c,	// (0x0005317f) aid_call2_pane

0x4654,	// (0x00053187) aid_call_pane

0x465c,	// (0x0005318f) popup_clock_analogue_window_g1

0x465c,	// (0x0005318f) popup_clock_analogue_window_g2

0x0e16,	// (0x0004f949) popup_clock_analogue_window_g3

0x0e1f,	// (0x0004f952) popup_clock_analogue_window_g4

0x36c4,	// (0x000521f7) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0005e22b) popup_clock_analogue_window_g

0x0e27,	// (0x0004f95a) popup_clock_analogue_window_t1

0x0e35,	// (0x0004f968) clock_digital_number_pane_ParamLimits

0x0e35,	// (0x0004f968) clock_digital_number_pane

0x0e41,	// (0x0004f974) clock_digital_number_pane_cp02_ParamLimits

0x0e41,	// (0x0004f974) clock_digital_number_pane_cp02

0x0e4d,	// (0x0004f980) clock_digital_number_pane_cp03_ParamLimits

0x0e4d,	// (0x0004f980) clock_digital_number_pane_cp03

0x0e59,	// (0x0004f98c) clock_digital_number_pane_cp04_ParamLimits

0x0e59,	// (0x0004f98c) clock_digital_number_pane_cp04

0x0e65,	// (0x0004f998) clock_digital_separator_pane_ParamLimits

0x0e65,	// (0x0004f998) clock_digital_separator_pane

0x0e71,	// (0x0004f9a4) popup_clock_digital_window_t1_ParamLimits

0x0e71,	// (0x0004f9a4) popup_clock_digital_window_t1

0x36c4,	// (0x000521f7) clock_digital_number_pane_g1

0x36c4,	// (0x000521f7) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0005e236) clock_digital_number_pane_g

0x36c4,	// (0x000521f7) clock_digital_separator_pane_g1

0x36c4,	// (0x000521f7) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0005e236) clock_digital_separator_pane_g

0xd68d,	// (0x0005c1c0) aid_fill_nsta_ParamLimits

0xd86d,	// (0x0005c3a0) indicator_nsta_pane_ParamLimits

0x5297,	// (0x00053dca) popup_clock_analogue_window

0x5297,	// (0x00053dca) popup_clock_digital_window

0x41c9,	// (0x00052cfc) grid_indicator_nsta_pane_ParamLimits

0x7457,	// (0x00055f8a) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x0005e5d3) clock_nsta_pane_t

0x0dda,	// (0x0004f90d) aid_size_max_handle

0x0de4,	// (0x0004f917) aid_size_min_handle

0x4c80,	// (0x000537b3) editor_scroll_pane

0x8237,	// (0x00056d6a) ex_editor_pane

0x4176,	// (0x00052ca9) scroll_pane_cp13

0x3fa7,	// (0x00052ada) scroll_pane_cp14

0x468b,	// (0x000531be) scroll_pane_cp36

0xd410,	// (0x0005bf43) list_single_graphic_hl_pane_cp2_ParamLimits

0xd410,	// (0x0005bf43) list_single_graphic_hl_pane_cp2

0xd7d5,	// (0x0005c308) list_single_graphic_hl_pane_ParamLimits

0xd7d5,	// (0x0005c308) list_single_graphic_hl_pane

0x34b9,	// (0x00051fec) aid_size_min_hl_cp1

0x823f,	// (0x00056d72) list_highlight_pane_cp34_ParamLimits

0x823f,	// (0x00056d72) list_highlight_pane_cp34

0x8250,	// (0x00056d83) list_single_graphic_hl_pane_g1_ParamLimits

0x8250,	// (0x00056d83) list_single_graphic_hl_pane_g1

0xc85b,	// (0x0005b38e) list_single_graphic_hl_pane_g2_ParamLimits

0xc85b,	// (0x0005b38e) list_single_graphic_hl_pane_g2

0xc85b,	// (0x0005b38e) list_single_graphic_hl_pane_g3_ParamLimits

0xc85b,	// (0x0005b38e) list_single_graphic_hl_pane_g3

0x4bf1,	// (0x00053724) list_single_graphic_hl_pane_g4_ParamLimits

0x4bf1,	// (0x00053724) list_single_graphic_hl_pane_g4

0xd7f9,	// (0x0005c32c) list_single_graphic_hl_pane_g5_ParamLimits

0xd7f9,	// (0x0005c32c) list_single_graphic_hl_pane_g5

0x0004,

0xfbeb,	// (0x0005e71e) list_single_graphic_hl_pane_g_ParamLimits

0xfbeb,	// (0x0005e71e) list_single_graphic_hl_pane_g

0xc867,	// (0x0005b39a) list_single_graphic_hl_pane_t1_ParamLimits

0xc867,	// (0x0005b39a) list_single_graphic_hl_pane_t1

0x825d,	// (0x00056d90) aid_size_min_hl_cp2

0x8266,	// (0x00056d99) list_highlight_pane_cp34_cp2_ParamLimits

0x8266,	// (0x00056d99) list_highlight_pane_cp34_cp2

0x8250,	// (0x00056d83) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8250,	// (0x00056d83) list_single_graphic_hl_pane_g1_cp2

0x8273,	// (0x00056da6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8273,	// (0x00056da6) list_single_graphic_hl_pane_g2_cp2

0x827f,	// (0x00056db2) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x827f,	// (0x00056db2) list_single_graphic_hl_pane_g3_cp2

0x4bb9,	// (0x000536ec) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4bb9,	// (0x000536ec) list_single_graphic_hl_pane_g4_cp2

0x828d,	// (0x00056dc0) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x828d,	// (0x00056dc0) list_single_graphic_hl_pane_g5_cp2

0xbe6d,	// (0x0005a9a0) control_pane_g4_ParamLimits

0xbe6d,	// (0x0005a9a0) control_pane_g4

0x4fba,	// (0x00053aed) bg_popup_sub_pane_cp10_ParamLimits

0x7a89,	// (0x000565bc) list_choice_list_pane_ParamLimits

0x7a98,	// (0x000565cb) scroll_pane_cp23

0x3a37,	// (0x0005256a) bg_popup_preview_window_pane_cp02_ParamLimits

0x8070,	// (0x00056ba3) list_preview_fixed_pane_ParamLimits

0x8086,	// (0x00056bb9) list_preview_fixed_pane_cp_ParamLimits

0x8086,	// (0x00056bb9) list_preview_fixed_pane_cp

0x8092,	// (0x00056bc5) popup_preview_fixed_window_g1_ParamLimits

0x8092,	// (0x00056bc5) popup_preview_fixed_window_g1

0x809e,	// (0x00056bd1) popup_preview_fixed_window_g2_ParamLimits

0x809e,	// (0x00056bd1) popup_preview_fixed_window_g2

0x0002,

0xfb73,	// (0x0005e6a6) popup_preview_fixed_window_g_ParamLimits

0xfb73,	// (0x0005e6a6) popup_preview_fixed_window_g

0x0d4e,	// (0x0004f881) aid_navi_side_left_pane_ParamLimits

0x0d63,	// (0x0004f896) aid_navi_side_right_pane_ParamLimits

0x0d7b,	// (0x0004f8ae) navi_icon_pane_stacon_ParamLimits

0x0d8f,	// (0x0004f8c2) navi_navi_pane_stacon_ParamLimits

0x0d7b,	// (0x0004f8ae) navi_text_pane_stacon_ParamLimits

0x0298,	// (0x0004edcb) main_text_info_pane

0x82b7,	// (0x00056dea) listscroll_text_info_pane

0x82bf,	// (0x00056df2) list_text_info_pane_ParamLimits

0x82bf,	// (0x00056df2) list_text_info_pane

0x82ce,	// (0x00056e01) scroll_pane_cp24_ParamLimits

0x82ce,	// (0x00056e01) scroll_pane_cp24

0xe37b,	// (0x0005ceae) list_text_info_pane_t1_ParamLimits

0xe37b,	// (0x0005ceae) list_text_info_pane_t1

0xbfb4,	// (0x0005aae7) popup_fast_swap2_window_ParamLimits

0xbfb4,	// (0x0005aae7) popup_fast_swap2_window

0x8321,	// (0x00056e54) aid_size_cell_fast2

0x36ba,	// (0x000521ed) bg_popup_window_pane_cp17

0x5934,	// (0x00054467) heading_pane_cp2

0x3c7a,	// (0x000527ad) listscroll_fast2_pane

0x832b,	// (0x00056e5e) grid_fast2_pane

0x8335,	// (0x00056e68) listscroll_fast2_pane_g1

0x833d,	// (0x00056e70) listscroll_fast2_pane_g2

0x0001,

0xfbf6,	// (0x0005e729) listscroll_fast2_pane_g

0x4176,	// (0x00052ca9) scroll_pane_cp26

0x8347,	// (0x00056e7a) cell_fast2_pane_ParamLimits

0x8347,	// (0x00056e7a) cell_fast2_pane

0x835c,	// (0x00056e8f) cell_fast2_pane_g1

0x8365,	// (0x00056e98) cell_fast2_pane_g2

0x836e,	// (0x00056ea1) cell_fast2_pane_g3

0x0002,

0xfbfb,	// (0x0005e72e) cell_fast2_pane_g

0x3d64,	// (0x00052897) grid_highlight_pane_cp9

0x12b7,	// (0x0004fdea) main_eswt_pane_ParamLimits

0x12b7,	// (0x0004fdea) main_eswt_pane

0x82e3,	// (0x00056e16) list_single_text_info_pane

0x8376,	// (0x00056ea9) eswt_ctrl_button_pane

0x8376,	// (0x00056ea9) eswt_ctrl_canvas_pane

0x837e,	// (0x00056eb1) eswt_ctrl_combo_pane

0x8376,	// (0x00056ea9) eswt_ctrl_default_pane

0x8376,	// (0x00056ea9) eswt_ctrl_label_pane

0x8386,	// (0x00056eb9) eswt_ctrl_wait_pane

0x838e,	// (0x00056ec1) eswt_shell_pane

0x36ba,	// (0x000521ed) listscroll_eswt_app_pane

0x83ae,	// (0x00056ee1) popup_eswt_tasktip_window_ParamLimits

0x83ae,	// (0x00056ee1) popup_eswt_tasktip_window

0x552c,	// (0x0005405f) bg_popup_window_pane_cp18

0x83bf,	// (0x00056ef2) eswt_control_pane_g1_ParamLimits

0x83bf,	// (0x00056ef2) eswt_control_pane_g1

0x83cc,	// (0x00056eff) eswt_control_pane_g2_ParamLimits

0x83cc,	// (0x00056eff) eswt_control_pane_g2

0x83d9,	// (0x00056f0c) eswt_control_pane_g3_ParamLimits

0x83d9,	// (0x00056f0c) eswt_control_pane_g3

0x83e6,	// (0x00056f19) eswt_control_pane_g4_ParamLimits

0x83e6,	// (0x00056f19) eswt_control_pane_g4

0x0003,

0xfc02,	// (0x0005e735) eswt_control_pane_g_ParamLimits

0xfc02,	// (0x0005e735) eswt_control_pane_g

0x4014,	// (0x00052b47) bg_button_pane_ParamLimits

0x4014,	// (0x00052b47) bg_button_pane

0x3d79,	// (0x000528ac) common_borders_pane_copy2_ParamLimits

0x3d79,	// (0x000528ac) common_borders_pane_copy2

0x83f3,	// (0x00056f26) control_button_pane_g1_ParamLimits

0x83f3,	// (0x00056f26) control_button_pane_g1

0x83ff,	// (0x00056f32) control_button_pane_g2_ParamLimits

0x83ff,	// (0x00056f32) control_button_pane_g2

0x840b,	// (0x00056f3e) control_button_pane_g3_ParamLimits

0x840b,	// (0x00056f3e) control_button_pane_g3

0x0002,

0xfc0b,	// (0x0005e73e) control_button_pane_g_ParamLimits

0xfc0b,	// (0x0005e73e) control_button_pane_g

0x841f,	// (0x00056f52) control_button_pane_t1

0x842d,	// (0x00056f60) control_button_pane_t2

0x0001,

0xfc12,	// (0x0005e745) control_button_pane_t

0x54b8,	// (0x00053feb) bg_button_pane_g1

0x54c8,	// (0x00053ffb) bg_button_pane_g2

0x54c0,	// (0x00053ff3) bg_button_pane_g3

0x54d8,	// (0x0005400b) bg_button_pane_g4

0x54d0,	// (0x00054003) bg_button_pane_g5

0x54e0,	// (0x00054013) bg_button_pane_g6

0x54e8,	// (0x0005401b) bg_button_pane_g7

0x54f8,	// (0x0005402b) bg_button_pane_g8

0x54f0,	// (0x00054023) bg_button_pane_g9

0x0008,

0xf861,	// (0x0005e394) bg_button_pane_g

0x7a44,	// (0x00056577) common_borders_pane_ParamLimits

0x7a44,	// (0x00056577) common_borders_pane

0x83bf,	// (0x00056ef2) eswt_control_pane_g1_copy1_ParamLimits

0x83bf,	// (0x00056ef2) eswt_control_pane_g1_copy1

0x83cc,	// (0x00056eff) eswt_control_pane_g2_copy1_ParamLimits

0x83cc,	// (0x00056eff) eswt_control_pane_g2_copy1

0x83d9,	// (0x00056f0c) eswt_control_pane_g3_copy1_ParamLimits

0x83d9,	// (0x00056f0c) eswt_control_pane_g3_copy1

0x83e6,	// (0x00056f19) eswt_control_pane_g4_copy1_ParamLimits

0x83e6,	// (0x00056f19) eswt_control_pane_g4_copy1

0x7a7f,	// (0x000565b2) bg_eswt_ctrl_canvas_pane_g1

0x7a44,	// (0x00056577) common_borders_pane_cp2_ParamLimits

0x7a44,	// (0x00056577) common_borders_pane_cp2

0x7a44,	// (0x00056577) common_borders_pane_cp3_ParamLimits

0x7a44,	// (0x00056577) common_borders_pane_cp3

0x843b,	// (0x00056f6e) separator_horizontal_pane

0x8443,	// (0x00056f76) separator_vertical_pane

0x83bf,	// (0x00056ef2) eswt_control_pane_g1_copy2_ParamLimits

0x83bf,	// (0x00056ef2) eswt_control_pane_g1_copy2

0x83cc,	// (0x00056eff) eswt_control_pane_g2_copy2_ParamLimits

0x83cc,	// (0x00056eff) eswt_control_pane_g2_copy2

0x83d9,	// (0x00056f0c) eswt_control_pane_g3_copy2_ParamLimits

0x83d9,	// (0x00056f0c) eswt_control_pane_g3_copy2

0x83e6,	// (0x00056f19) eswt_control_pane_g4_copy2_ParamLimits

0x83e6,	// (0x00056f19) eswt_control_pane_g4_copy2

0x36ba,	// (0x000521ed) common_borders_pane_cp4

0x844c,	// (0x00056f7f) separator_horizontal_pane_g1

0x8455,	// (0x00056f88) separator_horizontal_pane_g2

0x845e,	// (0x00056f91) separator_horizontal_pane_g3

0x0002,

0xfc17,	// (0x0005e74a) separator_horizontal_pane_g

0x83bf,	// (0x00056ef2) eswt_control_pane_g1_copy3_ParamLimits

0x83bf,	// (0x00056ef2) eswt_control_pane_g1_copy3

0x83cc,	// (0x00056eff) eswt_control_pane_g2_copy3_ParamLimits

0x83cc,	// (0x00056eff) eswt_control_pane_g2_copy3

0x83d9,	// (0x00056f0c) eswt_control_pane_g3_copy3_ParamLimits

0x83d9,	// (0x00056f0c) eswt_control_pane_g3_copy3

0x83e6,	// (0x00056f19) eswt_control_pane_g4_copy3_ParamLimits

0x83e6,	// (0x00056f19) eswt_control_pane_g4_copy3

0x36ba,	// (0x000521ed) common_borders_pane_cp5

0x8467,	// (0x00056f9a) separator_vertical_pane_g1

0x8470,	// (0x00056fa3) separator_vertical_pane_g2

0x8479,	// (0x00056fac) separator_vertical_pane_g3

0x0002,

0xfc1e,	// (0x0005e751) separator_vertical_pane_g

0x83bf,	// (0x00056ef2) eswt_control_pane_g1_copy4_ParamLimits

0x83bf,	// (0x00056ef2) eswt_control_pane_g1_copy4

0x83cc,	// (0x00056eff) eswt_control_pane_g2_copy4_ParamLimits

0x83cc,	// (0x00056eff) eswt_control_pane_g2_copy4

0x83d9,	// (0x00056f0c) eswt_control_pane_g3_copy4_ParamLimits

0x83d9,	// (0x00056f0c) eswt_control_pane_g3_copy4

0x83e6,	// (0x00056f19) eswt_control_pane_g4_copy4_ParamLimits

0x83e6,	// (0x00056f19) eswt_control_pane_g4_copy4

0x8482,	// (0x00056fb5) eswt_ctrl_combo_button_pane

0x848a,	// (0x00056fbd) eswt_ctrl_input_pane

0x8492,	// (0x00056fc5) popup_choice_list_window_cp70

0x849a,	// (0x00056fcd) eswt_ctrl_input_pane_t1

0x36ba,	// (0x000521ed) input_focus_pane_cp70

0x7a44,	// (0x00056577) bg_button_pane_cp70_ParamLimits

0x7a44,	// (0x00056577) bg_button_pane_cp70

0x84a8,	// (0x00056fdb) eswt_ctrl_combo_button_pane_g1

0x84b0,	// (0x00056fe3) wait_bar_pane_cp70

0x552c,	// (0x0005405f) bg_popup_window_pane_cp70_ParamLimits

0x552c,	// (0x0005405f) bg_popup_window_pane_cp70

0x84b8,	// (0x00056feb) popup_eswt_tasktip_window_t1

0x84ce,	// (0x00057001) wait_bar_pane_cp71_ParamLimits

0x84ce,	// (0x00057001) wait_bar_pane_cp71

0x84da,	// (0x0005700d) grid_eswt_app_pane

0x448f,	// (0x00052fc2) scroll_pane_cp70

0xe398,	// (0x0005cecb) cell_eswt_app_pane_ParamLimits

0xe398,	// (0x0005cecb) cell_eswt_app_pane

0xe3c2,	// (0x0005cef5) cell_eswt_app_pane_g1_ParamLimits

0xe3c2,	// (0x0005cef5) cell_eswt_app_pane_g1

0xe3f1,	// (0x0005cf24) cell_eswt_app_pane_g2_ParamLimits

0xe3f1,	// (0x0005cf24) cell_eswt_app_pane_g2

0x0001,

0xfc25,	// (0x0005e758) cell_eswt_app_pane_g_ParamLimits

0xfc25,	// (0x0005e758) cell_eswt_app_pane_g

0xe415,	// (0x0005cf48) cell_eswt_app_pane_t1_ParamLimits

0xe415,	// (0x0005cf48) cell_eswt_app_pane_t1

0x859c,	// (0x000570cf) grid_highlight_pane_cp70_ParamLimits

0x859c,	// (0x000570cf) grid_highlight_pane_cp70

0x4b55,	// (0x00053688) set_content_pane_g1

0xd642,	// (0x0005c175) status_small_volume_pane

0x20de,	// (0x00050c11) status_small_volume_pane_g1

0x20e6,	// (0x00050c19) volume_small2_pane

0x20ef,	// (0x00050c22) volume_small2_pane_g1

0x20f8,	// (0x00050c2b) volume_small2_pane_g2

0x2101,	// (0x00050c34) volume_small2_pane_g3

0x210a,	// (0x00050c3d) volume_small2_pane_g4

0x2113,	// (0x00050c46) volume_small2_pane_g5

0x211c,	// (0x00050c4f) volume_small2_pane_g6

0x2125,	// (0x00050c58) volume_small2_pane_g7

0x212e,	// (0x00050c61) volume_small2_pane_g8

0x2137,	// (0x00050c6a) volume_small2_pane_g9

0x2140,	// (0x00050c73) volume_small2_pane_g10

0x0009,

0xfc2a,	// (0x0005e75d) volume_small2_pane_g

0x7e35,	// (0x00056968) fep_vkb_top_text_pane_g1_ParamLimits

0xe323,	// (0x0005ce56) fep_vkb_top_text_pane_t1_ParamLimits

0x80aa,	// (0x00056bdd) popup_preview_fixed_window_g3_ParamLimits

0x80aa,	// (0x00056bdd) popup_preview_fixed_window_g3

0xc5c3,	// (0x0005b0f6) popup_toolbar_trans_pane

0xdd90,	// (0x0005c8c3) aid_height_set_list_ParamLimits

0x68a7,	// (0x000553da) aid_size_parent_ParamLimits

0x4fba,	// (0x00053aed) list_highlight_pane_cp2_ParamLimits

0x4b55,	// (0x00053688) set_content_pane_g1_ParamLimits

0xd7e7,	// (0x0005c31a) list_single_image_pane_ParamLimits

0xd7e7,	// (0x0005c31a) list_single_image_pane

0xe447,	// (0x0005cf7a) aid_size_cell_image_ParamLimits

0xe447,	// (0x0005cf7a) aid_size_cell_image

0xe454,	// (0x0005cf87) grid_single_image_pane_ParamLimits

0xe454,	// (0x0005cf87) grid_single_image_pane

0x85c1,	// (0x000570f4) list_single_image_pane_g1_ParamLimits

0x85c1,	// (0x000570f4) list_single_image_pane_g1

0x85cd,	// (0x00057100) list_single_image_pane_g2_ParamLimits

0x85cd,	// (0x00057100) list_single_image_pane_g2

0x0001,

0xfc3f,	// (0x0005e772) list_single_image_pane_g_ParamLimits

0xfc3f,	// (0x0005e772) list_single_image_pane_g

0x85e1,	// (0x00057114) list_single_image_pane_t1_ParamLimits

0x85e1,	// (0x00057114) list_single_image_pane_t1

0xe460,	// (0x0005cf93) cell_image_list_pane_ParamLimits

0xe460,	// (0x0005cf93) cell_image_list_pane

0xe474,	// (0x0005cfa7) cell_image_list_pane_g1

0xe47d,	// (0x0005cfb0) cell_image_list_pane_g2

0x0001,

0xfc44,	// (0x0005e777) cell_image_list_pane_g

0x861d,	// (0x00057150) aid_size_cell_tb_trans_pane

0x4014,	// (0x00052b47) bg_tb_trans_pane

0x862f,	// (0x00057162) grid_tb_trans_pane

0x54b8,	// (0x00053feb) bg_tb_trans_pane_g1

0x54c8,	// (0x00053ffb) bg_tb_trans_pane_g2

0x54c0,	// (0x00053ff3) bg_tb_trans_pane_g3

0x54d8,	// (0x0005400b) bg_tb_trans_pane_g4

0x54d0,	// (0x00054003) bg_tb_trans_pane_g5

0x54f8,	// (0x0005402b) bg_tb_trans_pane_g6

0x54f0,	// (0x00054023) bg_tb_trans_pane_g7

0x54e0,	// (0x00054013) bg_tb_trans_pane_g8

0x54e8,	// (0x0005401b) bg_tb_trans_pane_g9

0x0008,

0xfc49,	// (0x0005e77c) bg_tb_trans_pane_g

0x8643,	// (0x00057176) cell_toolbar_trans_pane_ParamLimits

0x8643,	// (0x00057176) cell_toolbar_trans_pane

0x7a7f,	// (0x000565b2) cell_toolbar_trans_pane_g1

0xe106,	// (0x0005cc39) list_form2_midp_pane_t1

0xe114,	// (0x0005cc47) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x0005e619) list_form2_midp_pane_t

0x7646,	// (0x00056179) scroll_pane_cp51_ParamLimits

0x7802,	// (0x00056335) form2_midp_wait_pane_g1

0x780b,	// (0x0005633e) form2_midp_wait_pane_g2

0x7814,	// (0x00056347) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x0005e62e) form2_midp_wait_pane_g

0x37ae,	// (0x000522e1) list_highlight_pane_cp21_ParamLimits

0x7862,	// (0x00056395) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7871,	// (0x000563a4) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6a57,	// (0x0005558a) list_single_2graphic_im_pane_ParamLimits

0x6a57,	// (0x0005558a) list_single_2graphic_im_pane

0x8669,	// (0x0005719c) list_single_2graphic_im_pane_g1_ParamLimits

0x8669,	// (0x0005719c) list_single_2graphic_im_pane_g1

0x867a,	// (0x000571ad) list_single_2graphic_im_pane_g2_ParamLimits

0x867a,	// (0x000571ad) list_single_2graphic_im_pane_g2

0x8686,	// (0x000571b9) list_single_2graphic_im_pane_g3_ParamLimits

0x8686,	// (0x000571b9) list_single_2graphic_im_pane_g3

0x0003,

0xfc5c,	// (0x0005e78f) list_single_2graphic_im_pane_g_ParamLimits

0xfc5c,	// (0x0005e78f) list_single_2graphic_im_pane_g

0x86a6,	// (0x000571d9) list_single_2graphic_im_pane_t1_ParamLimits

0x86a6,	// (0x000571d9) list_single_2graphic_im_pane_t1

0x80b6,	// (0x00056be9) list_single_graphic_2heading_pane_fp_ParamLimits

0x80b6,	// (0x00056be9) list_single_graphic_2heading_pane_fp

0x332b,	// (0x00051e5e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x332b,	// (0x00051e5e) list_single_graphic_2heading_pane_fp_g1

0x80cc,	// (0x00056bff) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x80cc,	// (0x00056bff) list_single_graphic_2heading_pane_fp_g2

0x3faf,	// (0x00052ae2) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3faf,	// (0x00052ae2) list_single_graphic_2heading_pane_fp_g3

0x4022,	// (0x00052b55) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4022,	// (0x00052b55) list_single_graphic_2heading_pane_fp_g4

0x80d8,	// (0x00056c0b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x80d8,	// (0x00056c0b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb83,	// (0x0005e6b6) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0005e6b6) list_single_graphic_2heading_pane_fp_g

0x34f8,	// (0x0005202b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x34f8,	// (0x0005202b) list_single_graphic_2heading_pane_fp_t1

0x3363,	// (0x00051e96) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3363,	// (0x00051e96) list_single_graphic_2heading_pane_fp_t2

0x350e,	// (0x00052041) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x350e,	// (0x00052041) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc65,	// (0x0005e798) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc65,	// (0x0005e798) list_single_graphic_2heading_pane_fp_t

0x7b0b,	// (0x0005663e) fep_hwr_write_pane_g5_ParamLimits

0x7b0b,	// (0x0005663e) fep_hwr_write_pane_g5

0x7b17,	// (0x0005664a) fep_hwr_write_pane_g6_ParamLimits

0x7b17,	// (0x0005664a) fep_hwr_write_pane_g6

0x838e,	// (0x00056ec1) eswt_shell_pane_ParamLimits

0x552c,	// (0x0005405f) bg_popup_window_pane_cp18_ParamLimits

0x67f5,	// (0x00055328) heading_pane_cp70

0x84b8,	// (0x00056feb) popup_eswt_tasktip_window_t1_ParamLimits

0xd6e8,	// (0x0005c21b) aid_touch_tab_arrow_left

0xd6fe,	// (0x0005c231) aid_touch_tab_arrow_right

0xcf9d,	// (0x0005bad0) title_pane_g3_ParamLimits

0xcf9d,	// (0x0005bad0) title_pane_g3

0x3fd3,	// (0x00052b06) set_value_pane_g1

0xc5c3,	// (0x0005b0f6) popup_toolbar_trans_pane_ParamLimits

0x861d,	// (0x00057150) aid_size_cell_tb_trans_pane_ParamLimits

0x4014,	// (0x00052b47) bg_tb_trans_pane_ParamLimits

0x862f,	// (0x00057162) grid_tb_trans_pane_ParamLimits

0x3a37,	// (0x0005256a) cont_note_pane_ParamLimits

0x3a37,	// (0x0005256a) cont_note_pane

0x3d79,	// (0x000528ac) cont_snote2_single_text_pane_ParamLimits

0x3d79,	// (0x000528ac) cont_snote2_single_text_pane

0x3d79,	// (0x000528ac) cont_snote2_single_graphic_pane_ParamLimits

0x3d79,	// (0x000528ac) cont_snote2_single_graphic_pane

0x5b4a,	// (0x0005467d) cont_note_wait_pane_ParamLimits

0x5b4a,	// (0x0005467d) cont_note_wait_pane

0x5b4a,	// (0x0005467d) cont_note_image_pane_ParamLimits

0x5b4a,	// (0x0005467d) cont_note_image_pane

0x86d7,	// (0x0005720a) popup_note2_window_g1_ParamLimits

0x86d7,	// (0x0005720a) popup_note2_window_g1

0x8708,	// (0x0005723b) popup_note2_window_t1_ParamLimits

0x8708,	// (0x0005723b) popup_note2_window_t1

0x874d,	// (0x00057280) popup_note2_window_t2_ParamLimits

0x874d,	// (0x00057280) popup_note2_window_t2

0x8792,	// (0x000572c5) popup_note2_window_t3_ParamLimits

0x8792,	// (0x000572c5) popup_note2_window_t3

0x87d7,	// (0x0005730a) popup_note2_window_t4_ParamLimits

0x87d7,	// (0x0005730a) popup_note2_window_t4

0x3aaf,	// (0x000525e2) popup_note2_window_t5_ParamLimits

0x3aaf,	// (0x000525e2) popup_note2_window_t5

0x0004,

0xfc71,	// (0x0005e7a4) popup_note2_window_t_ParamLimits

0xfc71,	// (0x0005e7a4) popup_note2_window_t

0x8806,	// (0x00057339) popup_note2_image_window_g1_ParamLimits

0x8806,	// (0x00057339) popup_note2_image_window_g1

0x8812,	// (0x00057345) popup_note2_image_window_g2_ParamLimits

0x8812,	// (0x00057345) popup_note2_image_window_g2

0x0001,

0xfc7c,	// (0x0005e7af) popup_note2_image_window_g_ParamLimits

0xfc7c,	// (0x0005e7af) popup_note2_image_window_g

0x8824,	// (0x00057357) popup_note2_image_window_t1_ParamLimits

0x8824,	// (0x00057357) popup_note2_image_window_t1

0x883c,	// (0x0005736f) popup_note2_image_window_t2_ParamLimits

0x883c,	// (0x0005736f) popup_note2_image_window_t2

0x8854,	// (0x00057387) popup_note2_image_window_t3_ParamLimits

0x8854,	// (0x00057387) popup_note2_image_window_t3

0x0002,

0xfc81,	// (0x0005e7b4) popup_note2_image_window_t_ParamLimits

0xfc81,	// (0x0005e7b4) popup_note2_image_window_t

0x5b58,	// (0x0005468b) popup_note2_wait_window_g1_ParamLimits

0x5b58,	// (0x0005468b) popup_note2_wait_window_g1

0x8870,	// (0x000573a3) popup_note2_wait_window_g2_ParamLimits

0x8870,	// (0x000573a3) popup_note2_wait_window_g2

0x5b70,	// (0x000546a3) popup_note2_wait_window_g3_ParamLimits

0x5b70,	// (0x000546a3) popup_note2_wait_window_g3

0x0002,

0xfc88,	// (0x0005e7bb) popup_note2_wait_window_g_ParamLimits

0xfc88,	// (0x0005e7bb) popup_note2_wait_window_g

0x887c,	// (0x000573af) popup_note2_wait_window_t1_ParamLimits

0x887c,	// (0x000573af) popup_note2_wait_window_t1

0x889a,	// (0x000573cd) popup_note2_wait_window_t2_ParamLimits

0x889a,	// (0x000573cd) popup_note2_wait_window_t2

0x88b8,	// (0x000573eb) popup_note2_wait_window_t3_ParamLimits

0x88b8,	// (0x000573eb) popup_note2_wait_window_t3

0x88ca,	// (0x000573fd) popup_note2_wait_window_t4_ParamLimits

0x88ca,	// (0x000573fd) popup_note2_wait_window_t4

0x0003,

0xfc8f,	// (0x0005e7c2) popup_note2_wait_window_t_ParamLimits

0xfc8f,	// (0x0005e7c2) popup_note2_wait_window_t

0x88dc,	// (0x0005740f) wait_bar2_pane_ParamLimits

0x88dc,	// (0x0005740f) wait_bar2_pane

0x88f4,	// (0x00057427) popup_snote2_single_text_window_g1_ParamLimits

0x88f4,	// (0x00057427) popup_snote2_single_text_window_g1

0x891c,	// (0x0005744f) popup_snote2_single_text_window_t1_ParamLimits

0x891c,	// (0x0005744f) popup_snote2_single_text_window_t1

0x8968,	// (0x0005749b) popup_snote2_single_text_window_t2_ParamLimits

0x8968,	// (0x0005749b) popup_snote2_single_text_window_t2

0x89b4,	// (0x000574e7) popup_snote2_single_text_window_t3_ParamLimits

0x89b4,	// (0x000574e7) popup_snote2_single_text_window_t3

0x89f5,	// (0x00057528) popup_snote2_single_text_window_t4_ParamLimits

0x89f5,	// (0x00057528) popup_snote2_single_text_window_t4

0x8a2b,	// (0x0005755e) popup_snote2_single_text_window_t5_ParamLimits

0x8a2b,	// (0x0005755e) popup_snote2_single_text_window_t5

0x0004,

0xfc98,	// (0x0005e7cb) popup_snote2_single_text_window_t_ParamLimits

0xfc98,	// (0x0005e7cb) popup_snote2_single_text_window_t

0x8a56,	// (0x00057589) popup_snote2_single_graphic_window_g1_ParamLimits

0x8a56,	// (0x00057589) popup_snote2_single_graphic_window_g1

0x8a7e,	// (0x000575b1) popup_snote2_single_graphic_window_g2_ParamLimits

0x8a7e,	// (0x000575b1) popup_snote2_single_graphic_window_g2

0x0001,

0xfca3,	// (0x0005e7d6) popup_snote2_single_graphic_window_g_ParamLimits

0xfca3,	// (0x0005e7d6) popup_snote2_single_graphic_window_g

0x8aa6,	// (0x000575d9) popup_snote2_single_graphic_window_t1_ParamLimits

0x8aa6,	// (0x000575d9) popup_snote2_single_graphic_window_t1

0x8af2,	// (0x00057625) popup_snote2_single_graphic_window_t2_ParamLimits

0x8af2,	// (0x00057625) popup_snote2_single_graphic_window_t2

0x89b4,	// (0x000574e7) popup_snote2_single_graphic_window_t3_ParamLimits

0x89b4,	// (0x000574e7) popup_snote2_single_graphic_window_t3

0x89f5,	// (0x00057528) popup_snote2_single_graphic_window_t4_ParamLimits

0x89f5,	// (0x00057528) popup_snote2_single_graphic_window_t4

0x8a2b,	// (0x0005755e) popup_snote2_single_graphic_window_t5_ParamLimits

0x8a2b,	// (0x0005755e) popup_snote2_single_graphic_window_t5

0x0004,

0xfca8,	// (0x0005e7db) popup_snote2_single_graphic_window_t_ParamLimits

0xfca8,	// (0x0005e7db) popup_snote2_single_graphic_window_t

0x7501,	// (0x00056034) clock_nsta_pane_cp2_t1

0x7501,	// (0x00056034) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x0005e5ef) clock_nsta_pane_cp2_t

0x0ae4,	// (0x0004f617) form_field_data_wide_pane_g1_ParamLimits

0x3faf,	// (0x00052ae2) form_field_data_wide_pane_g2_ParamLimits

0x3faf,	// (0x00052ae2) form_field_data_wide_pane_g2

0x4022,	// (0x00052b55) form_field_data_wide_pane_g3_ParamLimits

0x4022,	// (0x00052b55) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0005e1ae) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0005e1ae) form_field_data_wide_pane_g

0xe049,	// (0x0005cb7c) grid_touch_3_pane_ParamLimits

0xe049,	// (0x0005cb7c) grid_touch_3_pane

0xe486,	// (0x0005cfb9) cell_touch_3_pane_ParamLimits

0xe486,	// (0x0005cfb9) cell_touch_3_pane

0x7a7f,	// (0x000565b2) cell_touch_3_pane_g1

0x7a7f,	// (0x000565b2) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x0005e674) cell_touch_3_pane_g

0x3ae1,	// (0x00052614) cont_query_data_pane

0x3ae9,	// (0x0005261c) cont_query_data_pane_cp1

0x8b6f,	// (0x000576a2) button_value_adjust_pane_cp7

0x8b77,	// (0x000576aa) query_popup_pane_cp3

0x4748,	// (0x0005327b) bg_popup_sub_pane_cp22_ParamLimits

0x0e90,	// (0x0004f9c3) navi_navi_volume_pane_cp2

0x0ea8,	// (0x0004f9db) popup_side_volume_key_window_g2

0x0eb4,	// (0x0004f9e7) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0005e244) popup_side_volume_key_window_g

0x0ece,	// (0x0004fa01) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0005e24b) popup_side_volume_key_window_t

0x4a16,	// (0x00053549) popup_side_volume_key_window_ParamLimits

0xb9d8,	// (0x0005a50b) list_double_graphic_pane_g4_ParamLimits

0xb9d8,	// (0x0005a50b) list_double_graphic_pane_g4

0xdef6,	// (0x0005ca29) list_single_2heading_msg_pane_ParamLimits

0xdef6,	// (0x0005ca29) list_single_2heading_msg_pane

0xd80d,	// (0x0005c340) list_single_2heading_msg_pane_g1_ParamLimits

0xd80d,	// (0x0005c340) list_single_2heading_msg_pane_g1

0xd819,	// (0x0005c34c) list_single_2heading_msg_pane_g2_ParamLimits

0xd819,	// (0x0005c34c) list_single_2heading_msg_pane_g2

0xd82c,	// (0x0005c35f) list_single_2heading_msg_pane_g3_ParamLimits

0xd82c,	// (0x0005c35f) list_single_2heading_msg_pane_g3

0x3546,	// (0x00052079) list_single_2heading_msg_pane_g4_ParamLimits

0x3546,	// (0x00052079) list_single_2heading_msg_pane_g4

0x0003,

0xfcb3,	// (0x0005e7e6) list_single_2heading_msg_pane_g_ParamLimits

0xfcb3,	// (0x0005e7e6) list_single_2heading_msg_pane_g

0x355e,	// (0x00052091) list_single_2heading_msg_pane_t1_ParamLimits

0x355e,	// (0x00052091) list_single_2heading_msg_pane_t1

0xc87d,	// (0x0005b3b0) list_single_2heading_msg_pane_t2_ParamLimits

0xc87d,	// (0x0005b3b0) list_single_2heading_msg_pane_t2

0xc8e8,	// (0x0005b41b) list_single_2heading_msg_pane_t3_ParamLimits

0xc8e8,	// (0x0005b41b) list_single_2heading_msg_pane_t3

0x35f3,	// (0x00052126) list_single_2heading_msg_pane_t4_ParamLimits

0x35f3,	// (0x00052126) list_single_2heading_msg_pane_t4

0x0003,

0xfcbc,	// (0x0005e7ef) list_single_2heading_msg_pane_t_ParamLimits

0xfcbc,	// (0x0005e7ef) list_single_2heading_msg_pane_t

0x3702,	// (0x00052235) title_pane_g4_ParamLimits

0x3702,	// (0x00052235) title_pane_g4

0x0c9e,	// (0x0004f7d1) title_pane_stacon_g3_ParamLimits

0x0c9e,	// (0x0004f7d1) title_pane_stacon_g3

0x869a,	// (0x000571cd) list_single_2graphic_im_pane_g4_ParamLimits

0x869a,	// (0x000571cd) list_single_2graphic_im_pane_g4

0x65b1,	// (0x000550e4) popup_side_volume_key_window_cp

0x6d5e,	// (0x00055891) main_idle_act2_pane_t1

0x18b0,	// (0x000503e3) toolbar_button_pane_g10

0xd2a7,	// (0x0005bdda) popup_toolbar_window_cp1

0x74f2,	// (0x00056025) clock_nsta_pane_cp_t1

0x74f2,	// (0x00056025) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x0005e5ea) clock_nsta_pane_cp_t

0x0e90,	// (0x0004f9c3) navi_navi_volume_pane_cp2_ParamLimits

0x0e9c,	// (0x0004f9cf) popup_side_volume_key_window_g1_ParamLimits

0x0ea8,	// (0x0004f9db) popup_side_volume_key_window_g2_ParamLimits

0x0eb4,	// (0x0004f9e7) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0005e244) popup_side_volume_key_window_g_ParamLimits

0x1d4a,	// (0x0005087d) fep_hwr_aid_pane

0x1df1,	// (0x00050924) bg_fep_hwr_top_pane_g4_ParamLimits

0x7adb,	// (0x0005660e) fep_hwr_top_pane_g1_ParamLimits

0x7aed,	// (0x00056620) fep_hwr_top_pane_g2_ParamLimits

0x1e11,	// (0x00050944) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x0005e63f) fep_hwr_top_pane_g_ParamLimits

0x1e26,	// (0x00050959) fep_hwr_top_text_pane_ParamLimits

0x6374,	// (0x00054ea7) aid_touch_tab_arrow_arrow_2

0x637d,	// (0x00054eb0) aid_touch_tab_arrow_left_2

0x1d5e,	// (0x00050891) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1d95,	// (0x000508c8) fep_hwr_prediction_pane

0x7c44,	// (0x00056777) fep_vkb_prediction_pane

0xe303,	// (0x0005ce36) fep_vkb_side_pane_g3_ParamLimits

0xe303,	// (0x0005ce36) fep_vkb_side_pane_g3

0x1fa1,	// (0x00050ad4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x200d,	// (0x00050b40) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x201a,	// (0x00050b4d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbb,	// (0x0005e6ee) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x2149,	// (0x00050c7c) fep_hwr_prediction_pane_g1

0x2153,	// (0x00050c86) fep_hwr_prediction_pane_g2

0x215b,	// (0x00050c8e) fep_hwr_prediction_pane_g3

0x2163,	// (0x00050c96) fep_hwr_prediction_pane_g4

0x0003,

0xfcc5,	// (0x0005e7f8) fep_hwr_prediction_pane_g

0x8b9c,	// (0x000576cf) fep_vkb_prediction_pane_g1

0x8ba6,	// (0x000576d9) fep_vkb_prediction_pane_g2

0x8bae,	// (0x000576e1) fep_vkb_prediction_pane_g3

0x8bb6,	// (0x000576e9) fep_vkb_prediction_pane_g4

0x0003,

0xfcce,	// (0x0005e801) fep_vkb_prediction_pane_g

0x1ba6,	// (0x000506d9) slider_set_pane_g3

0x1bba,	// (0x000506ed) slider_set_pane_g4

0x1bd2,	// (0x00050705) slider_set_pane_g5

0x1ba6,	// (0x000506d9) slider_set_pane_g6

0x1be8,	// (0x0005071b) slider_set_pane_g7

0x6a04,	// (0x00055537) slider_form_pane_g3

0x6a0d,	// (0x00055540) slider_form_pane_g4

0x6a15,	// (0x00055548) slider_form_pane_g5

0x6a04,	// (0x00055537) slider_form_pane_g6

0xded7,	// (0x0005ca0a) slider_form_pane_g7

0x6ffd,	// (0x00055b30) slider_set_pane_vc_g3

0x7006,	// (0x00055b39) slider_set_pane_vc_g4

0x700f,	// (0x00055b42) slider_set_pane_vc_g5

0x6ffd,	// (0x00055b30) slider_set_pane_vc_g6

0x7018,	// (0x00055b4b) slider_set_pane_vc_g7

0x71c8,	// (0x00055cfb) slider_form_pane_vc_g1

0x71d1,	// (0x00055d04) slider_form_pane_vc_g2

0x71da,	// (0x00055d0d) slider_form_pane_vc_g3

0x71c8,	// (0x00055cfb) slider_form_pane_vc_g4

0x71e3,	// (0x00055d16) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x0005e5bc) slider_form_pane_vc_g

0x0298,	// (0x0004edcb) main_idle_act3_pane

0x8bbe,	// (0x000576f1) ai3_links_pane

0xe4cf,	// (0x0005d002) popup_ai3_data_window_ParamLimits

0xe4cf,	// (0x0005d002) popup_ai3_data_window

0x36ba,	// (0x000521ed) grid_ai3_links_pane

0xe4e7,	// (0x0005d01a) cell_ai3_links_pane_ParamLimits

0xe4e7,	// (0x0005d01a) cell_ai3_links_pane

0x8bf7,	// (0x0005772a) bg_popup_sub_pane_cp11

0x8c04,	// (0x00057737) cell_ai3_links_pane_g1

0x36ba,	// (0x000521ed) bg_popup_sub_pane_cp12

0x8c29,	// (0x0005775c) heading_ai3_data_pane

0x8c31,	// (0x00057764) list_ai3_gene_pane

0x8c3d,	// (0x00057770) popup_ai3_data_window_g1

0x8c45,	// (0x00057778) heading_ai3_data_pane_g1

0x8c4d,	// (0x00057780) heading_ai3_data_pane_t1

0x8c5b,	// (0x0005778e) list_double_ai3_gene_pane_ParamLimits

0x8c5b,	// (0x0005778e) list_double_ai3_gene_pane

0x8c68,	// (0x0005779b) list_single_ai3_gene_pane_ParamLimits

0x8c68,	// (0x0005779b) list_single_ai3_gene_pane

0x7a44,	// (0x00056577) list_highlight_pane_cp7_ParamLimits

0x7a44,	// (0x00056577) list_highlight_pane_cp7

0x8c75,	// (0x000577a8) list_single_a13_gene_pane_t1_ParamLimits

0x8c75,	// (0x000577a8) list_single_a13_gene_pane_t1

0x8c8c,	// (0x000577bf) list_single_ai3_gene_pane_g1

0x8c95,	// (0x000577c8) list_single_ai3_gene_pane_g2

0x0001,

0xfcd7,	// (0x0005e80a) list_single_ai3_gene_pane_g

0x8c9d,	// (0x000577d0) list_double_ai3_gene_pane_g1_ParamLimits

0x8c9d,	// (0x000577d0) list_double_ai3_gene_pane_g1

0x8ca9,	// (0x000577dc) list_double_ai3_gene_pane_t1_ParamLimits

0x8ca9,	// (0x000577dc) list_double_ai3_gene_pane_t1

0x8cc5,	// (0x000577f8) list_double_ai3_gene_pane_t2_ParamLimits

0x8cc5,	// (0x000577f8) list_double_ai3_gene_pane_t2

0x8cda,	// (0x0005780d) list_double_ai3_gene_pane_t3_ParamLimits

0x8cda,	// (0x0005780d) list_double_ai3_gene_pane_t3

0x0002,

0xfcdc,	// (0x0005e80f) list_double_ai3_gene_pane_t_ParamLimits

0xfcdc,	// (0x0005e80f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3524,	// (0x00052057) aid_size_min_col_2

0xe4b9,	// (0x0005cfec) aid_size_min_msg_ParamLimits

0xe4b9,	// (0x0005cfec) aid_size_min_msg

0xe317,	// (0x0005ce4a) fep_vkb_top_text_pane_g2_ParamLimits

0xe317,	// (0x0005ce4a) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x0005e66f) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x0005e66f) fep_vkb_top_text_pane_g

0x0298,	// (0x0004edcb) main_hc_apps_shell_pane

0x8cf7,	// (0x0005782a) grid_hc_apps_pane_ParamLimits

0x8cf7,	// (0x0005782a) grid_hc_apps_pane

0x8d06,	// (0x00057839) list_hc_apps_pane

0x8d0e,	// (0x00057841) scroll_pane_cp37_ParamLimits

0x8d0e,	// (0x00057841) scroll_pane_cp37

0xe501,	// (0x0005d034) cell_hc_apps_pane_ParamLimits

0xe501,	// (0x0005d034) cell_hc_apps_pane

0xe5bf,	// (0x0005d0f2) cell_hc_apps_pane_g1_ParamLimits

0xe5bf,	// (0x0005d0f2) cell_hc_apps_pane_g1

0x8df9,	// (0x0005792c) cell_hc_apps_pane_g2_ParamLimits

0x8df9,	// (0x0005792c) cell_hc_apps_pane_g2

0x8e15,	// (0x00057948) cell_hc_apps_pane_g3_ParamLimits

0x8e15,	// (0x00057948) cell_hc_apps_pane_g3

0x0002,

0xfce3,	// (0x0005e816) cell_hc_apps_pane_g_ParamLimits

0xfce3,	// (0x0005e816) cell_hc_apps_pane_g

0xe5ec,	// (0x0005d11f) cell_hc_apps_pane_t1_ParamLimits

0xe5ec,	// (0x0005d11f) cell_hc_apps_pane_t1

0x3a37,	// (0x0005256a) grid_highlight_pane_cp10_ParamLimits

0x3a37,	// (0x0005256a) grid_highlight_pane_cp10

0xe62a,	// (0x0005d15d) list_single_hc_apps_pane_ParamLimits

0xe62a,	// (0x0005d15d) list_single_hc_apps_pane

0xe65b,	// (0x0005d18e) list_single_hc_apps_pane_g1

0xd838,	// (0x0005c36b) list_single_hc_apps_pane_g2

0x0001,

0xfcea,	// (0x0005e81d) list_single_hc_apps_pane_g

0xd851,	// (0x0005c384) list_single_hc_apps_pane_g2_copy1

0xc956,	// (0x0005b489) list_single_hc_apps_pane_t1

0x37ae,	// (0x000522e1) bg_set_opt_pane_cp_ParamLimits

0x04eb,	// (0x0004f01e) setting_slider_pane_t1_ParamLimits

0x0504,	// (0x0004f037) setting_slider_pane_t2_ParamLimits

0x051e,	// (0x0004f051) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0005e091) setting_slider_pane_t_ParamLimits

0x0536,	// (0x0004f069) slider_set_pane_ParamLimits

0x11a3,	// (0x0004fcd6) control_pane_g5_ParamLimits

0x11a3,	// (0x0004fcd6) control_pane_g5

0x6861,	// (0x00055394) slider_set_pane_g1_ParamLimits

0x1b9a,	// (0x000506cd) slider_set_pane_g2_ParamLimits

0x1ba6,	// (0x000506d9) slider_set_pane_g3_ParamLimits

0x1bba,	// (0x000506ed) slider_set_pane_g4_ParamLimits

0x1bd2,	// (0x00050705) slider_set_pane_g5_ParamLimits

0x1ba6,	// (0x000506d9) slider_set_pane_g6_ParamLimits

0x1be8,	// (0x0005071b) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0005e492) slider_set_pane_g_ParamLimits

0x4b00,	// (0x00053633) navi_icon_text_pane_ParamLimits

0xd6b1,	// (0x0005c1e4) aid_fill_nsta_2_ParamLimits

0xd6e8,	// (0x0005c21b) aid_touch_tab_arrow_left_ParamLimits

0xd6fe,	// (0x0005c231) aid_touch_tab_arrow_right_ParamLimits

0xd799,	// (0x0005c2cc) clock_nsta_pane_ParamLimits

0x6356,	// (0x00054e89) navi_icon_pane_g1_ParamLimits

0x6362,	// (0x00054e95) navi_text_pane_t1_ParamLimits

0x7604,	// (0x00056137) navi_icon_text_pane_g1_ParamLimits

0x7610,	// (0x00056143) navi_icon_text_pane_t1_ParamLimits

0xe65b,	// (0x0005d18e) list_single_hc_apps_pane_g1_ParamLimits

0xd838,	// (0x0005c36b) list_single_hc_apps_pane_g2_ParamLimits

0xfcea,	// (0x0005e81d) list_single_hc_apps_pane_g_ParamLimits

0xd851,	// (0x0005c384) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc956,	// (0x0005b489) list_single_hc_apps_pane_t1_ParamLimits

0xb811,	// (0x0005a344) popup_toolbar2_fixed_window_ParamLimits

0xb811,	// (0x0005a344) popup_toolbar2_fixed_window

0xc5b9,	// (0x0005b0ec) popup_toolbar2_float_window

0x36ba,	// (0x000521ed) bg_popup_sub_pane_cp27

0x8ef8,	// (0x00057a2b) grid_toolbar2_float_pane

0x36ba,	// (0x000521ed) bg_popup_sub_pane_cp26

0x8ef8,	// (0x00057a2b) grid_toolbar2_fixed_pane

0xe674,	// (0x0005d1a7) cell_toolbar2_fixed_pane_ParamLimits

0xe674,	// (0x0005d1a7) cell_toolbar2_fixed_pane

0xe68f,	// (0x0005d1c2) cell_toolbar2_fixed_pane_g1

0x166a,	// (0x0005019d) toolbar2_fixed_button_pane

0x54b8,	// (0x00053feb) toolbar2_fixed_button_pane_g1

0x54c8,	// (0x00053ffb) toolbar2_fixed_button_pane_g2

0x54c0,	// (0x00053ff3) toolbar2_fixed_button_pane_g3

0x54d8,	// (0x0005400b) toolbar2_fixed_button_pane_g4

0x54d0,	// (0x00054003) toolbar2_fixed_button_pane_g5

0x54e0,	// (0x00054013) toolbar2_fixed_button_pane_g6

0x54e8,	// (0x0005401b) toolbar2_fixed_button_pane_g7

0x54f8,	// (0x0005402b) toolbar2_fixed_button_pane_g8

0x54f0,	// (0x00054023) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0005e394) toolbar2_fixed_button_pane_g

0x8f1a,	// (0x00057a4d) cell_toolbar2_float_pane_ParamLimits

0x8f1a,	// (0x00057a4d) cell_toolbar2_float_pane

0x8f2e,	// (0x00057a61) cell_toolbar2_float_pane_g1

0x166a,	// (0x0005019d) toolbar2_fixed_button_pane_cp

0xe1ff,	// (0x0005cd32) fep_vkb_accented_list_pane_ParamLimits

0xe1ff,	// (0x0005cd32) fep_vkb_accented_list_pane

0x1f81,	// (0x00050ab4) bg_popup_fep_shadow_pane_g9

0x4c80,	// (0x000537b3) bg_popup_fep_shadow_pane_cp3

0x415d,	// (0x00052c90) list_accented_list_pane

0x8f37,	// (0x00057a6a) list_single_accented_list_pane_ParamLimits

0x8f37,	// (0x00057a6a) list_single_accented_list_pane

0x4c80,	// (0x000537b3) list_highlight_pane_cp10

0x8f48,	// (0x00057a7b) list_single_accented_list_pane_t1

0xc4e3,	// (0x0005b016) popup_slider_window_ParamLimits

0xc4e3,	// (0x0005b016) popup_slider_window

0x8b7f,	// (0x000576b2) aid_indentation_list_msg

0xe788,	// (0x0005d2bb) bg_popup_window_pane_cp19

0x906c,	// (0x00057b9f) popup_slider_window_g1

0x9088,	// (0x00057bbb) popup_slider_window_g2

0x90a4,	// (0x00057bd7) popup_slider_window_g3

0x0005,

0xfcef,	// (0x0005e822) popup_slider_window_g

0x9100,	// (0x00057c33) popup_slider_window_t1

0x9174,	// (0x00057ca7) small_volume_slider_vertical_pane

0x7a7f,	// (0x000565b2) small_volume_slider_vertical_pane_g1

0x7a7f,	// (0x000565b2) small_volume_slider_vertical_pane_g2

0x9190,	// (0x00057cc3) small_volume_slider_vertical_pane_g3

0x0002,

0xfd01,	// (0x0005e834) small_volume_slider_vertical_pane_g

0xb77f,	// (0x0005a2b2) area_side_right_pane_ParamLimits

0xb77f,	// (0x0005a2b2) area_side_right_pane

0xc984,	// (0x0005b4b7) aid_size_side_button_ParamLimits

0xc984,	// (0x0005b4b7) aid_size_side_button

0xc99d,	// (0x0005b4d0) grid_sctrl_middle_pane_ParamLimits

0xc99d,	// (0x0005b4d0) grid_sctrl_middle_pane

0x219e,	// (0x00050cd1) sctrl_sk_bottom_pane

0x21af,	// (0x00050ce2) sctrl_sk_top_pane

0x21c1,	// (0x00050cf4) aid_touch_sctrl_top

0x21ce,	// (0x00050d01) bg_sctrl_sk_pane_ParamLimits

0x21ce,	// (0x00050d01) bg_sctrl_sk_pane

0x21dc,	// (0x00050d0f) sctrl_sk_top_pane_g1

0x21e9,	// (0x00050d1c) sctrl_sk_top_pane_t1

0x21c1,	// (0x00050cf4) aid_touch_sctrl_bottom

0x21ce,	// (0x00050d01) bg_sctrl_sk_pane_cp_ParamLimits

0x21ce,	// (0x00050d01) bg_sctrl_sk_pane_cp

0x2204,	// (0x00050d37) sctrl_sk_bottom_pane_g1

0x21e9,	// (0x00050d1c) sctrl_sk_bottom_pane_t1

0xc9b7,	// (0x0005b4ea) cell_sctrl_middle_pane_ParamLimits

0xc9b7,	// (0x0005b4ea) cell_sctrl_middle_pane

0xc9c8,	// (0x0005b4fb) aid_touch_sctrl_middle_ParamLimits

0xc9c8,	// (0x0005b4fb) aid_touch_sctrl_middle

0xc9d5,	// (0x0005b508) bg_sctrl_middle_pane_ParamLimits

0xc9d5,	// (0x0005b508) bg_sctrl_middle_pane

0x2875,	// (0x000513a8) cell_sctrl_middle_pane_g1_ParamLimits

0x2875,	// (0x000513a8) cell_sctrl_middle_pane_g1

0xc9e3,	// (0x0005b516) cell_sctrl_middle_pane_g2_ParamLimits

0xc9e3,	// (0x0005b516) cell_sctrl_middle_pane_g2

0x0001,

0xfd0d,	// (0x0005e840) cell_sctrl_middle_pane_g_ParamLimits

0xfd0d,	// (0x0005e840) cell_sctrl_middle_pane_g

0x54b8,	// (0x00053feb) bg_sctrl_middle_pane_g1

0x54c0,	// (0x00053ff3) bg_sctrl_middle_pane_g2

0x54c8,	// (0x00053ffb) bg_sctrl_middle_pane_g3

0x54d0,	// (0x00054003) bg_sctrl_middle_pane_g4

0x54d8,	// (0x0005400b) bg_sctrl_middle_pane_g5

0x54e0,	// (0x00054013) bg_sctrl_middle_pane_g6

0x54e8,	// (0x0005401b) bg_sctrl_middle_pane_g7

0x54f0,	// (0x00054023) bg_sctrl_middle_pane_g8

0x0007,

0xfd12,	// (0x0005e845) bg_sctrl_middle_pane_g

0x54f8,	// (0x0005402b) bg_sctrl_middle_pane_g8_copy1

0x54b8,	// (0x00053feb) bg_sctrl_sk_pane_g1

0x54c8,	// (0x00053ffb) bg_sctrl_sk_pane_g2

0x54c0,	// (0x00053ff3) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0005e394) bg_sctrl_sk_pane_g

0x3f37,	// (0x00052a6a) aid_size_touch_scroll_bar

0x54d8,	// (0x0005400b) bg_sctrl_sk_pane_g4

0x54d0,	// (0x00054003) bg_sctrl_sk_pane_g5

0x54e0,	// (0x00054013) bg_sctrl_sk_pane_g6

0x54e8,	// (0x0005401b) bg_sctrl_sk_pane_g7

0x54f8,	// (0x0005402b) bg_sctrl_sk_pane_g8

0x54f0,	// (0x00054023) bg_sctrl_sk_pane_g9

0x1355,	// (0x0004fe88) popup_fep_china_hwr2_fs_candidate_window

0xc011,	// (0x0005ab44) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc011,	// (0x0005ab44) popup_fep_china_hwr2_fs_control_window

0x1fa1,	// (0x00050ad4) sctrl_sk_top_pane_g2

0x0001,

0xfd08,	// (0x0005e83b) sctrl_sk_top_pane_g

0xe840,	// (0x0005d373) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe840,	// (0x0005d373) aid_fep_china_hwr2_fs_cell

0xe854,	// (0x0005d387) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe854,	// (0x0005d387) bg_popup_fep_shadow_pane_cp4

0xe86b,	// (0x0005d39e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe86b,	// (0x0005d39e) bg_popup_fep_shadow_pane_cp5

0xe87d,	// (0x0005d3b0) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe87d,	// (0x0005d3b0) popup_fep_china_hwr2_fs_control_bar_grid

0xe891,	// (0x0005d3c4) popup_fep_china_hwr2_fs_control_funtion_grid

0x91ec,	// (0x00057d1f) aid_fep_china_hwr2_fs_candi_cell

0x36ba,	// (0x000521ed) bg_popup_fep_shadow_pane_cp6

0x91f6,	// (0x00057d29) popup_fep_china_hwr2_fs_candidate_grid

0xe899,	// (0x0005d3cc) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe899,	// (0x0005d3cc) cell_fep_china_hwr2_fs_funtion_grid

0x7a7f,	// (0x000565b2) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9218,	// (0x00057d4b) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9218,	// (0x00057d4b) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9226,	// (0x00057d59) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9226,	// (0x00057d59) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd23,	// (0x0005e856) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd23,	// (0x0005e856) cell_fep_china_hwr2_fs_funtion_grid_g

0xe8b1,	// (0x0005d3e4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe8b1,	// (0x0005d3e4) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe8c6,	// (0x0005d3f9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe8c6,	// (0x0005d3f9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd28,	// (0x0005e85b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd28,	// (0x0005e85b) cell_fep_china_hwr2_fs_funtion_grid_t

0x926d,	// (0x00057da0) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9275,	// (0x00057da8) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x927d,	// (0x00057db0) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2d,	// (0x0005e860) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9285,	// (0x00057db8) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9285,	// (0x00057db8) cell_fep_china_hwr2_fs_candidate_grid

0x929e,	// (0x00057dd1) popup_fep_china_hwr2_fs_candidate_grid_g20

0x92a6,	// (0x00057dd9) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7a7f,	// (0x000565b2) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7a7f,	// (0x000565b2) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x0005e674) cell_fep_china_hwr2_fs_candidate_grid_g

0x92ae,	// (0x00057de1) cell_fep_china_hwr2_fs_candidate_grid_t1

0x50b6,	// (0x00053be9) clock_nsta_pane_cp_24_ParamLimits

0x50b6,	// (0x00053be9) clock_nsta_pane_cp_24

0x5134,	// (0x00053c67) indicator_nsta_pane_cp_24_ParamLimits

0x5134,	// (0x00053c67) indicator_nsta_pane_cp_24

0x61d2,	// (0x00054d05) heading_pane_g1

0x0001,

0xf8c6,	// (0x0005e3f9) heading_pane_g

0x6ba7,	// (0x000556da) grid_sct_catagory_button_pane

0x6bd7,	// (0x0005570a) scroll_pane_cp5_ParamLimits

0x7652,	// (0x00056185) button_value_adjust_pane_cp5_ParamLimits

0x7652,	// (0x00056185) button_value_adjust_pane_cp5

0x7731,	// (0x00056264) form2_midp_time_pane_ParamLimits

0x92bc,	// (0x00057def) cell_sct_catagory_button_pane_ParamLimits

0x92bc,	// (0x00057def) cell_sct_catagory_button_pane

0x7a44,	// (0x00056577) bg_button_pane_cp01_ParamLimits

0x7a44,	// (0x00056577) bg_button_pane_cp01

0x7a7f,	// (0x000565b2) cell_sct_catagory_button_pane_g1

0xc55c,	// (0x0005b08f) popup_tb_extension_window

0xe8e2,	// (0x0005d415) aid_size_cell_ext_ParamLimits

0xe8e2,	// (0x0005d415) aid_size_cell_ext

0x3d79,	// (0x000528ac) bg_tb_trans_pane_cp1_ParamLimits

0x3d79,	// (0x000528ac) bg_tb_trans_pane_cp1

0xe908,	// (0x0005d43b) grid_tb_ext_pane_ParamLimits

0xe908,	// (0x0005d43b) grid_tb_ext_pane

0xe94a,	// (0x0005d47d) cell_tb_ext_pane_ParamLimits

0xe94a,	// (0x0005d47d) cell_tb_ext_pane

0xe972,	// (0x0005d4a5) cell_tb_ext_pane_g1_ParamLimits

0xe972,	// (0x0005d4a5) cell_tb_ext_pane_g1

0x9354,	// (0x00057e87) cell_tb_ext_pane_t1

0x3a37,	// (0x0005256a) list_highlight_pane_cp11_ParamLimits

0x3a37,	// (0x0005256a) list_highlight_pane_cp11

0xb826,	// (0x0005a359) popup_uni_indicator_window_ParamLimits

0xb826,	// (0x0005a359) popup_uni_indicator_window

0x4014,	// (0x00052b47) bg_popup_sub_pane_cp14

0x936f,	// (0x00057ea2) list_uniindi_pane

0x937b,	// (0x00057eae) uniindi_top_pane

0x3a37,	// (0x0005256a) bg_uniindi_top_pane

0x939a,	// (0x00057ecd) uniindi_top_pane_g1

0x93b0,	// (0x00057ee3) uniindi_top_pane_g2

0x0003,

0xfd34,	// (0x0005e867) uniindi_top_pane_g

0x93da,	// (0x00057f0d) uniindi_top_pane_t1

0x9404,	// (0x00057f37) list_single_uniindi_pane_ParamLimits

0x9404,	// (0x00057f37) list_single_uniindi_pane

0x7a7f,	// (0x000565b2) bg_uniindi_top_pane_g1

0x9417,	// (0x00057f4a) list_single_uniindi_pane_g1

0x942a,	// (0x00057f5d) list_single_uniindi_pane_t1

0x0298,	// (0x0004edcb) control_bg_pane

0x944f,	// (0x00057f82) bg_sctrl_sk_pane_cp1

0x9458,	// (0x00057f8b) bg_sctrl_sk_pane_cp2

0x9461,	// (0x00057f94) control_bg_pane_g1

0x946a,	// (0x00057f9d) control_bg_pane_g2

0x0001,

0xfd3d,	// (0x0005e870) control_bg_pane_g

0x7496,	// (0x00055fc9) cell_indicator_nsta_pane_g1_ParamLimits

0xe076,	// (0x0005cba9) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x0005e5d8) cell_indicator_nsta_pane_g_ParamLimits

0x3301,	// (0x00051e34) form2_midp_time_pane_t1_ParamLimits

0x1d3c,	// (0x0005086f) main_idle_act4_pane_ParamLimits

0x1d3c,	// (0x0005086f) main_idle_act4_pane

0xc55c,	// (0x0005b08f) popup_tb_extension_window_ParamLimits

0xe930,	// (0x0005d463) tb_ext_find_pane_ParamLimits

0xe930,	// (0x0005d463) tb_ext_find_pane

0x9473,	// (0x00057fa6) ai_gene_pane_1_cp1

0x4dbf,	// (0x000538f2) ai_gene_pane_2_cp1

0x947b,	// (0x00057fae) list_single_idle_plugin_calendar_pane

0x9484,	// (0x00057fb7) list_single_idle_plugin_notification_pane

0x948d,	// (0x00057fc0) list_single_idle_plugin_player_pane

0xe98f,	// (0x0005d4c2) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe98f,	// (0x0005d4c2) list_single_idle_plugin_shortcut_pane

0xe9b7,	// (0x0005d4ea) main_idle_act4_pane_t1

0xe9cd,	// (0x0005d500) main_idle_act4_pane_t2

0x0001,

0xfd42,	// (0x0005e875) main_idle_act4_pane_t

0xe9e5,	// (0x0005d518) middle_sk_idle_act4_pane_ParamLimits

0xe9e5,	// (0x0005d518) middle_sk_idle_act4_pane

0xea01,	// (0x0005d534) popup_clock_digital_analogue_window_cp2

0xea28,	// (0x0005d55b) shortcut_wheel_idle_act4_pane_ParamLimits

0xea28,	// (0x0005d55b) shortcut_wheel_idle_act4_pane

0x7a7f,	// (0x000565b2) shortcut_wheel_idle_act4_pane_g1

0x7a7f,	// (0x000565b2) shortcut_wheel_idle_act4_pane_g2

0x7a7f,	// (0x000565b2) shortcut_wheel_idle_act4_pane_g3

0x7a7f,	// (0x000565b2) shortcut_wheel_idle_act4_pane_g4

0x7a7f,	// (0x000565b2) shortcut_wheel_idle_act4_pane_g5

0x9520,	// (0x00058053) shortcut_wheel_idle_act4_pane_g6

0x9528,	// (0x0005805b) shortcut_wheel_idle_act4_pane_g7

0x9530,	// (0x00058063) shortcut_wheel_idle_act4_pane_g8

0x9538,	// (0x0005806b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd47,	// (0x0005e87a) shortcut_wheel_idle_act4_pane_g

0xea49,	// (0x0005d57c) middle_sk_idle_act4_pane_g1_ParamLimits

0xea49,	// (0x0005d57c) middle_sk_idle_act4_pane_g1

0xeada,	// (0x0005d60d) middle_sk_idle_act4_pane_g2_ParamLimits

0xeada,	// (0x0005d60d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6a,	// (0x0005e89d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6a,	// (0x0005e89d) middle_sk_idle_act4_pane_g

0xeaf2,	// (0x0005d625) middle_sk_idle_act4_pane_t1_ParamLimits

0xeaf2,	// (0x0005d625) middle_sk_idle_act4_pane_t1

0xeb21,	// (0x0005d654) grid_ai_shortcut_pane_ParamLimits

0xeb21,	// (0x0005d654) grid_ai_shortcut_pane

0xeb3e,	// (0x0005d671) list_highlight_pane_cp16_ParamLimits

0xeb3e,	// (0x0005d671) list_highlight_pane_cp16

0xeb4b,	// (0x0005d67e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xeb4b,	// (0x0005d67e) list_single_idle_plugin_shortcut_pane_g1

0xeb57,	// (0x0005d68a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xeb57,	// (0x0005d68a) list_single_idle_plugin_shortcut_pane_g2

0xeb73,	// (0x0005d6a6) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeb73,	// (0x0005d6a6) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6f,	// (0x0005e8a2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6f,	// (0x0005e8a2) list_single_idle_plugin_shortcut_pane_g

0xeb88,	// (0x0005d6bb) cell_ai_shortcut_pane_ParamLimits

0xeb88,	// (0x0005d6bb) cell_ai_shortcut_pane

0xeb9e,	// (0x0005d6d1) cell_ai_shortcut_pane_g1_ParamLimits

0xeb9e,	// (0x0005d6d1) cell_ai_shortcut_pane_g1

0x9473,	// (0x00057fa6) ai_gene_pane_1_cp2

0x9686,	// (0x000581b9) ai_gene_pane_2_cp2

0x968e,	// (0x000581c1) list_highlight_pane_cp15

0x9697,	// (0x000581ca) list_single_idle_plugin_calendar_pane_g1

0x968e,	// (0x000581c1) list_highlight_pane_cp17

0x969f,	// (0x000581d2) list_single_idle_plugin_calendar_pane_g1_copy1

0x96a7,	// (0x000581da) list_single_idle_plugin_player_pane_g1

0x6dfe,	// (0x00055931) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd76,	// (0x0005e8a9) list_single_idle_plugin_player_pane_g

0x96af,	// (0x000581e2) list_single_idle_plugin_player_pane_t1

0x96bd,	// (0x000581f0) list_single_idle_plugin_player_pane_t2

0x96cb,	// (0x000581fe) list_single_idle_plugin_player_pane_t3

0x96d9,	// (0x0005820c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7b,	// (0x0005e8ae) list_single_idle_plugin_player_pane_t

0x96e7,	// (0x0005821a) wait_bar_pane_cp15

0x96ef,	// (0x00058222) grid_ai_notification_pane

0x6dfe,	// (0x00055931) list_single_idle_plugin_notification_pane_g1

0xebc0,	// (0x0005d6f3) cell_ai_notification_pane_ParamLimits

0xebc0,	// (0x0005d6f3) cell_ai_notification_pane

0x9705,	// (0x00058238) cell_ai_notification_pane_g1

0x970d,	// (0x00058240) cell_ai_notification_pane_t1

0xebcd,	// (0x0005d700) tb_ext_find_button_pane

0xebd5,	// (0x0005d708) tb_ext_find_pane_g1

0xebdd,	// (0x0005d710) tb_ext_find_pane_t1

0x465c,	// (0x0005318f) tb_ext_find_button_pane_g1

0x9739,	// (0x0005826c) tb_ext_find_button_pane_g2

0x0001,

0xfd84,	// (0x0005e8b7) tb_ext_find_button_pane_g

0xe9b7,	// (0x0005d4ea) main_idle_act4_pane_t1_ParamLimits

0xe9cd,	// (0x0005d500) main_idle_act4_pane_t2_ParamLimits

0xfd42,	// (0x0005e875) main_idle_act4_pane_t_ParamLimits

0xea01,	// (0x0005d534) popup_clock_digital_analogue_window_cp2_ParamLimits

0xea18,	// (0x0005d54b) sat_plugin_idle_act4_pane_ParamLimits

0xea18,	// (0x0005d54b) sat_plugin_idle_act4_pane

0xebeb,	// (0x0005d71e) sat_plugin_idle_act4_pane_t1_ParamLimits

0xebeb,	// (0x0005d71e) sat_plugin_idle_act4_pane_t1

0xec03,	// (0x0005d736) sat_plugin_idle_act4_pane_t2_ParamLimits

0xec03,	// (0x0005d736) sat_plugin_idle_act4_pane_t2

0xec1b,	// (0x0005d74e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xec1b,	// (0x0005d74e) sat_plugin_idle_act4_pane_t3

0xec33,	// (0x0005d766) sat_plugin_idle_act4_pane_t4_ParamLimits

0xec33,	// (0x0005d766) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd89,	// (0x0005e8bc) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd89,	// (0x0005e8bc) sat_plugin_idle_act4_pane_t

0x035d,	// (0x0004ee90) popup_battery_window_ParamLimits

0x035d,	// (0x0004ee90) popup_battery_window

0x3a37,	// (0x0005256a) bg_popup_sub_pane_cp25_ParamLimits

0x3a37,	// (0x0005256a) bg_popup_sub_pane_cp25

0x978e,	// (0x000582c1) popup_battery_window_g1_ParamLimits

0x978e,	// (0x000582c1) popup_battery_window_g1

0x979a,	// (0x000582cd) popup_battery_window_t1_ParamLimits

0x979a,	// (0x000582cd) popup_battery_window_t1

0x97ac,	// (0x000582df) popup_battery_window_t2_ParamLimits

0x97ac,	// (0x000582df) popup_battery_window_t2

0x0001,

0xfd92,	// (0x0005e8c5) popup_battery_window_t_ParamLimits

0xfd92,	// (0x0005e8c5) popup_battery_window_t

0xd510,	// (0x0005c043) midp_canvas_pane_ParamLimits

0xd56f,	// (0x0005c0a2) midp_keypad_pane_ParamLimits

0xd56f,	// (0x0005c0a2) midp_keypad_pane

0x4fba,	// (0x00053aed) main_midp_pane_ParamLimits

0x7510,	// (0x00056043) signal_pane_g2_cp_ParamLimits

0xec4b,	// (0x0005d77e) aid_size_cell_midp_keypad_ParamLimits

0xec4b,	// (0x0005d77e) aid_size_cell_midp_keypad

0xec69,	// (0x0005d79c) midp_keyp_game_grid_pane_ParamLimits

0xec69,	// (0x0005d79c) midp_keyp_game_grid_pane

0xec90,	// (0x0005d7c3) midp_keyp_rocker_pane_ParamLimits

0xec90,	// (0x0005d7c3) midp_keyp_rocker_pane

0xece1,	// (0x0005d814) midp_keyp_sk_left_pane_ParamLimits

0xece1,	// (0x0005d814) midp_keyp_sk_left_pane

0xed35,	// (0x0005d868) midp_keyp_sk_right_pane_ParamLimits

0xed35,	// (0x0005d868) midp_keyp_sk_right_pane

0x36ba,	// (0x000521ed) bg_button_pane_cp03

0xed89,	// (0x0005d8bc) midp_keyp_sk_left_pane_g1

0x36ba,	// (0x000521ed) bg_button_pane_cp04

0xed89,	// (0x0005d8bc) midp_keyp_sk_right_pane_g1

0x7a7f,	// (0x000565b2) midp_keyp_rocker_pane_g1

0xed92,	// (0x0005d8c5) keyp_game_cell_pane_ParamLimits

0xed92,	// (0x0005d8c5) keyp_game_cell_pane

0x36ba,	// (0x000521ed) bg_button_pane_cp02

0xedb6,	// (0x0005d8e9) keyp_game_cell_pane_g1

0xb7c1,	// (0x0005a2f4) popup_fep_vkb2_window_ParamLimits

0xb7c1,	// (0x0005a2f4) popup_fep_vkb2_window

0xc9ef,	// (0x0005b522) aid_size_cell_vkb2_ParamLimits

0xc9ef,	// (0x0005b522) aid_size_cell_vkb2

0xca25,	// (0x0005b558) popup_fep_vkb2_window_g1_ParamLimits

0xca25,	// (0x0005b558) popup_fep_vkb2_window_g1

0xca75,	// (0x0005b5a8) vkb2_area_bottom_pane_ParamLimits

0xca75,	// (0x0005b5a8) vkb2_area_bottom_pane

0xcac9,	// (0x0005b5fc) vkb2_area_keypad_pane_ParamLimits

0xcac9,	// (0x0005b5fc) vkb2_area_keypad_pane

0xcb11,	// (0x0005b644) vkb2_area_top_pane_ParamLimits

0xcb11,	// (0x0005b644) vkb2_area_top_pane

0xcb97,	// (0x0005b6ca) vkb2_top_entry_pane_ParamLimits

0xcb97,	// (0x0005b6ca) vkb2_top_entry_pane

0xcbc4,	// (0x0005b6f7) vkb2_top_grid_left_pane_ParamLimits

0xcbc4,	// (0x0005b6f7) vkb2_top_grid_left_pane

0xcbe4,	// (0x0005b717) vkb2_top_grid_right_pane_ParamLimits

0xcbe4,	// (0x0005b717) vkb2_top_grid_right_pane

0x2470,	// (0x00050fa3) vkb2_cell_keypad_pane_ParamLimits

0x2470,	// (0x00050fa3) vkb2_cell_keypad_pane

0xcc2a,	// (0x0005b75d) vkb2_area_bottom_grid_pane_ParamLimits

0xcc2a,	// (0x0005b75d) vkb2_area_bottom_grid_pane

0xcc54,	// (0x0005b787) vkb2_area_bottom_pane_g1_ParamLimits

0xcc54,	// (0x0005b787) vkb2_area_bottom_pane_g1

0xcc7a,	// (0x0005b7ad) vkb2_area_bottom_pane_g2_ParamLimits

0xcc7a,	// (0x0005b7ad) vkb2_area_bottom_pane_g2

0xccab,	// (0x0005b7de) vkb2_area_bottom_pane_g3_ParamLimits

0xccab,	// (0x0005b7de) vkb2_area_bottom_pane_g3

0x0002,

0xfd97,	// (0x0005e8ca) vkb2_area_bottom_pane_g_ParamLimits

0xfd97,	// (0x0005e8ca) vkb2_area_bottom_pane_g

0x261a,	// (0x0005114d) vkb2_top_cell_left_pane_ParamLimits

0x261a,	// (0x0005114d) vkb2_top_cell_left_pane

0xedbf,	// (0x0005d8f2) vkb2_top_entry_pane_g1_ParamLimits

0xedbf,	// (0x0005d8f2) vkb2_top_entry_pane_g1

0xedcd,	// (0x0005d900) vkb2_top_entry_pane_t1_ParamLimits

0xedcd,	// (0x0005d900) vkb2_top_entry_pane_t1

0x995d,	// (0x00058490) vkb2_top_entry_pane_t2_ParamLimits

0x995d,	// (0x00058490) vkb2_top_entry_pane_t2

0x998f,	// (0x000584c2) vkb2_top_entry_pane_t3_ParamLimits

0x998f,	// (0x000584c2) vkb2_top_entry_pane_t3

0x0002,

0xfd9e,	// (0x0005e8d1) vkb2_top_entry_pane_t_ParamLimits

0xfd9e,	// (0x0005e8d1) vkb2_top_entry_pane_t

0xcd15,	// (0x0005b848) vkb2_top_grid_right_pane_g1_ParamLimits

0xcd15,	// (0x0005b848) vkb2_top_grid_right_pane_g1

0x267d,	// (0x000511b0) vkb2_top_grid_right_pane_g2_ParamLimits

0x267d,	// (0x000511b0) vkb2_top_grid_right_pane_g2

0x2695,	// (0x000511c8) vkb2_top_grid_right_pane_g3_ParamLimits

0x2695,	// (0x000511c8) vkb2_top_grid_right_pane_g3

0xcd2b,	// (0x0005b85e) vkb2_top_grid_right_pane_g4_ParamLimits

0xcd2b,	// (0x0005b85e) vkb2_top_grid_right_pane_g4

0x0003,

0xfda5,	// (0x0005e8d8) vkb2_top_grid_right_pane_g_ParamLimits

0xfda5,	// (0x0005e8d8) vkb2_top_grid_right_pane_g

0x26c3,	// (0x000511f6) vkb2_top_cell_left_pane_g1

0x26da,	// (0x0005120d) vkb2_cell_keypad_pane_g1_ParamLimits

0x26da,	// (0x0005120d) vkb2_cell_keypad_pane_g1

0x99b3,	// (0x000584e6) vkb2_cell_keypad_pane_t1_ParamLimits

0x99b3,	// (0x000584e6) vkb2_cell_keypad_pane_t1

0x26e8,	// (0x0005121b) vkb2_cell_bottom_grid_pane_ParamLimits

0x26e8,	// (0x0005121b) vkb2_cell_bottom_grid_pane

0x2721,	// (0x00051254) vkb2_cell_bottom_grid_pane_g1

0xea7e,	// (0x0005d5b1) aid_call2_pane_cp02

0xea86,	// (0x0005d5b9) aid_call_pane_cp02

0xea8e,	// (0x0005d5c1) clock_digital_number_pane_cp10

0xea96,	// (0x0005d5c9) clock_digital_number_pane_cp11

0xea9e,	// (0x0005d5d1) clock_digital_number_pane_cp12

0xeaa6,	// (0x0005d5d9) clock_digital_number_pane_cp13

0xeaae,	// (0x0005d5e1) clock_digital_separator_pane_cp10

0x465c,	// (0x0005318f) popup_clock_digital_analogue_window_cp2_g1

0x465c,	// (0x0005318f) popup_clock_digital_analogue_window_cp2_g2

0xeab6,	// (0x0005d5e9) popup_clock_digital_analogue_window_cp2_g3

0x465c,	// (0x0005318f) popup_clock_digital_analogue_window_cp2_g4

0xeab6,	// (0x0005d5e9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5a,	// (0x0005e88d) popup_clock_digital_analogue_window_cp2_g

0xeabe,	// (0x0005d5f1) popup_clock_digital_analogue_window_cp2_t1

0xeacc,	// (0x0005d5ff) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd65,	// (0x0005e898) popup_clock_digital_analogue_window_cp2_t

0x7a7f,	// (0x000565b2) clock_digital_number_pane_cp10_g1

0x7a7f,	// (0x000565b2) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x0005e674) clock_digital_number_pane_cp10_g

0x7a7f,	// (0x000565b2) clock_digital_separator_pane_cp10_g1

0x7a7f,	// (0x000565b2) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x0005e674) clock_digital_separator_pane_cp10_g

0x93bc,	// (0x00057eef) uniindi_top_pane_g3

0x93cd,	// (0x00057f00) uniindi_top_pane_g4

0x24fb,	// (0x0005102e) vkb2_row_keypad_pane_ParamLimits

0x24fb,	// (0x0005102e) vkb2_row_keypad_pane

0x2741,	// (0x00051274) vkb2_cell_t_keypad_pane_ParamLimits

0x2741,	// (0x00051274) vkb2_cell_t_keypad_pane

0x2751,	// (0x00051284) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2751,	// (0x00051284) vkb2_cell_t_keypad_pane_cp08

0x2764,	// (0x00051297) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2764,	// (0x00051297) vkb2_cell_t_keypad_pane_cp09

0x2778,	// (0x000512ab) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2778,	// (0x000512ab) vkb2_cell_t_keypad_pane_cp01

0x2789,	// (0x000512bc) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2789,	// (0x000512bc) vkb2_cell_t_keypad_pane_cp02

0x279a,	// (0x000512cd) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x279a,	// (0x000512cd) vkb2_cell_t_keypad_pane_cp03

0x27ab,	// (0x000512de) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x27ab,	// (0x000512de) vkb2_cell_t_keypad_pane_cp04

0x27bc,	// (0x000512ef) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x27bc,	// (0x000512ef) vkb2_cell_t_keypad_pane_cp05

0x27cd,	// (0x00051300) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x27cd,	// (0x00051300) vkb2_cell_t_keypad_pane_cp06

0x27de,	// (0x00051311) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x27de,	// (0x00051311) vkb2_cell_t_keypad_pane_cp07

0x27ef,	// (0x00051322) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x27ef,	// (0x00051322) vkb2_cell_t_keypad_pane_cp10

0x1fa1,	// (0x00050ad4) vkb2_cell_t_keypad_pane_g1

0x99ca,	// (0x000584fd) vkb2_cell_t_keypad_pane_t1

0x0298,	// (0x0004edcb) popup_grid_graphic2_window

0xee06,	// (0x0005d939) aid_size_cell_graphic2_ParamLimits

0xee06,	// (0x0005d939) aid_size_cell_graphic2

0xee44,	// (0x0005d977) bg_popup_window_pane_cp21_ParamLimits

0xee44,	// (0x0005d977) bg_popup_window_pane_cp21

0xee52,	// (0x0005d985) graphic2_pages_pane_ParamLimits

0xee52,	// (0x0005d985) graphic2_pages_pane

0xeea8,	// (0x0005d9db) grid_graphic2_control_pane_ParamLimits

0xeea8,	// (0x0005d9db) grid_graphic2_control_pane

0xeef0,	// (0x0005da23) grid_graphic2_pane_ParamLimits

0xeef0,	// (0x0005da23) grid_graphic2_pane

0xef77,	// (0x0005daaa) cell_graphic2_pane

0x0298,	// (0x0004edcb) main_comp_mode_pane

0x8c31,	// (0x00057764) list_ai3_gene_pane_ParamLimits

0xe788,	// (0x0005d2bb) bg_popup_window_pane_cp19_ParamLimits

0x900e,	// (0x00057b41) bg_touch_area_indi_pane_ParamLimits

0x900e,	// (0x00057b41) bg_touch_area_indi_pane

0x9024,	// (0x00057b57) bg_touch_area_indi_pane_cp01_ParamLimits

0x9024,	// (0x00057b57) bg_touch_area_indi_pane_cp01

0x903a,	// (0x00057b6d) bg_touch_area_indi_pane_cp02_ParamLimits

0x903a,	// (0x00057b6d) bg_touch_area_indi_pane_cp02

0x9052,	// (0x00057b85) bg_touch_area_indi_pane_cp03_ParamLimits

0x9052,	// (0x00057b85) bg_touch_area_indi_pane_cp03

0x906c,	// (0x00057b9f) popup_slider_window_g1_ParamLimits

0x9088,	// (0x00057bbb) popup_slider_window_g2_ParamLimits

0x90a4,	// (0x00057bd7) popup_slider_window_g3_ParamLimits

0xfcef,	// (0x0005e822) popup_slider_window_g_ParamLimits

0x9100,	// (0x00057c33) popup_slider_window_t1_ParamLimits

0x9174,	// (0x00057ca7) small_volume_slider_vertical_pane_ParamLimits

0xef77,	// (0x0005daaa) cell_graphic2_pane_ParamLimits

0xefd4,	// (0x0005db07) bg_button_pane_cp10_ParamLimits

0xefd4,	// (0x0005db07) bg_button_pane_cp10

0xefe7,	// (0x0005db1a) bg_button_pane_cp11_ParamLimits

0xefe7,	// (0x0005db1a) bg_button_pane_cp11

0xeffa,	// (0x0005db2d) graphic2_pages_pane_g1_ParamLimits

0xeffa,	// (0x0005db2d) graphic2_pages_pane_g1

0xf015,	// (0x0005db48) graphic2_pages_pane_g2_ParamLimits

0xf015,	// (0x0005db48) graphic2_pages_pane_g2

0x0001,

0xfdb3,	// (0x0005e8e6) graphic2_pages_pane_g_ParamLimits

0xfdb3,	// (0x0005e8e6) graphic2_pages_pane_g

0xf02d,	// (0x0005db60) graphic2_pages_pane_t1_ParamLimits

0xf02d,	// (0x0005db60) graphic2_pages_pane_t1

0xf045,	// (0x0005db78) cell_graphic2_control_pane_ParamLimits

0xf045,	// (0x0005db78) cell_graphic2_control_pane

0xf077,	// (0x0005dbaa) cell_graphic2_pane_g1_ParamLimits

0xf077,	// (0x0005dbaa) cell_graphic2_pane_g1

0xea57,	// (0x0005d58a) cell_graphic2_pane_g2_ParamLimits

0xea57,	// (0x0005d58a) cell_graphic2_pane_g2

0xea71,	// (0x0005d5a4) cell_graphic2_pane_g3_ParamLimits

0xea71,	// (0x0005d5a4) cell_graphic2_pane_g3

0xea64,	// (0x0005d597) cell_graphic2_pane_g4_ParamLimits

0xea64,	// (0x0005d597) cell_graphic2_pane_g4

0xf084,	// (0x0005dbb7) cell_graphic2_pane_g5_ParamLimits

0xf084,	// (0x0005dbb7) cell_graphic2_pane_g5

0x0004,

0xfdb8,	// (0x0005e8eb) cell_graphic2_pane_g_ParamLimits

0xfdb8,	// (0x0005e8eb) cell_graphic2_pane_g

0xf0a4,	// (0x0005dbd7) cell_graphic2_pane_t1_ParamLimits

0xf0a4,	// (0x0005dbd7) cell_graphic2_pane_t1

0x61c6,	// (0x00054cf9) grid_highlight_pane_cp11_ParamLimits

0x61c6,	// (0x00054cf9) grid_highlight_pane_cp11

0x3a37,	// (0x0005256a) bg_button_pane_cp05

0xf0d8,	// (0x0005dc0b) cell_graphic2_control_pane_g1

0x7a7f,	// (0x000565b2) bg_touch_area_indi_pane_g1

0x9c98,	// (0x000587cb) aid_cmod_rocker_key_size

0x9ca2,	// (0x000587d5) aid_cmode_itu_key_size

0x9cac,	// (0x000587df) main_cmode_video_pane

0x9cb6,	// (0x000587e9) main_comp_mode_itu_pane

0x9cc2,	// (0x000587f5) main_comp_mode_rocker_pane

0x9cce,	// (0x00058801) cell_cmode_rocker_pane_ParamLimits

0x9cce,	// (0x00058801) cell_cmode_rocker_pane

0x9ce0,	// (0x00058813) cell_cmode_itu_pane_ParamLimits

0x9ce0,	// (0x00058813) cell_cmode_itu_pane

0x4014,	// (0x00052b47) bg_button_pane_cp06_ParamLimits

0x4014,	// (0x00052b47) bg_button_pane_cp06

0x7ced,	// (0x00056820) cell_cmode_rocker_pane_g1_ParamLimits

0x7ced,	// (0x00056820) cell_cmode_rocker_pane_g1

0x9218,	// (0x00057d4b) cell_cmode_rocker_pane_g2_ParamLimits

0x9218,	// (0x00057d4b) cell_cmode_rocker_pane_g2

0x0001,

0xfdc8,	// (0x0005e8fb) cell_cmode_rocker_pane_g_ParamLimits

0xfdc8,	// (0x0005e8fb) cell_cmode_rocker_pane_g

0x36ba,	// (0x000521ed) bg_button_pane_cp07

0x9cf5,	// (0x00058828) cell_cmode_itu_pane_g1

0x9cfe,	// (0x00058831) cell_cmode_itu_pane_t1

0x9d0c,	// (0x0005883f) cell_cmode_itu_pane_t2

0x0001,

0xfdcd,	// (0x0005e900) cell_cmode_itu_pane_t

0x943f,	// (0x00057f72) aid_touch_ctrl_left

0x9447,	// (0x00057f7a) aid_touch_ctrl_right

0x36ba,	// (0x000521ed) compa_mode_pane

0xf0fc,	// (0x0005dc2f) aid_cmod_rocker_key_size_cp

0xf106,	// (0x0005dc39) aid_cmode_itu_key_size_cp

0x9d2e,	// (0x00058861) compa_mode_pane_g1

0x9d36,	// (0x00058869) compa_mode_pane_g2

0x9d3e,	// (0x00058871) compa_mode_pane_g3

0x0002,

0xfdd2,	// (0x0005e905) compa_mode_pane_g

0xf110,	// (0x0005dc43) main_comp_mode_itu_pane_cp

0xf118,	// (0x0005dc4b) main_comp_mode_rocker_pane_cp

0xf120,	// (0x0005dc53) cell_cmode_itu_pane_cp_ParamLimits

0xf120,	// (0x0005dc53) cell_cmode_itu_pane_cp

0xf135,	// (0x0005dc68) cell_cmode_rocker_pane_cp_ParamLimits

0xf135,	// (0x0005dc68) cell_cmode_rocker_pane_cp

0x4014,	// (0x00052b47) bg_button_pane_cp06_cp_ParamLimits

0x4014,	// (0x00052b47) bg_button_pane_cp06_cp

0x7ced,	// (0x00056820) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7ced,	// (0x00056820) cell_cmode_rocker_pane_g1_cp

0x7a7f,	// (0x000565b2) cell_cmode_rocker_pane_g2_cp

0x36ba,	// (0x000521ed) bg_button_pane_cp07_cp

0xf147,	// (0x0005dc7a) cell_cmode_itu_pane_g1_cp

0xf150,	// (0x0005dc83) cell_cmode_itu_pane_t1_cp

0xf150,	// (0x0005dc83) cell_cmode_itu_pane_t2_cp

0xdecd,	// (0x0005ca00) settings_code_pane_cp2

0x37ae,	// (0x000522e1) bg_popup_window_pane_cp3_ParamLimits

0x3c05,	// (0x00052738) heading_pane_cp3_ParamLimits

0x3c11,	// (0x00052744) listscroll_popup_graphic_pane_ParamLimits

0x1d4a,	// (0x0005087d) fep_hwr_aid_pane_ParamLimits

0x21c1,	// (0x00050cf4) aid_touch_sctrl_top_ParamLimits

0x21dc,	// (0x00050d0f) sctrl_sk_top_pane_g1_ParamLimits

0x1fa1,	// (0x00050ad4) sctrl_sk_top_pane_g2_ParamLimits

0xfd08,	// (0x0005e83b) sctrl_sk_top_pane_g_ParamLimits

0x21e9,	// (0x00050d1c) sctrl_sk_top_pane_t1_ParamLimits

0x21c1,	// (0x00050cf4) aid_touch_sctrl_bottom_ParamLimits

0x21e9,	// (0x00050d1c) sctrl_sk_bottom_pane_t1_ParamLimits

0x9388,	// (0x00057ebb) aid_area_touch_clock

0xcb59,	// (0x0005b68c) aid_vkb2_area_top_pane_cell_ParamLimits

0xcb59,	// (0x0005b68c) aid_vkb2_area_top_pane_cell

0xcc04,	// (0x0005b737) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcc04,	// (0x0005b737) aid_vkb2_area_bottom_pane_cell

0x9915,	// (0x00058448) popup_char_count_window

0x9d94,	// (0x000588c7) popup_char_count_window_g1

0x9d9d,	// (0x000588d0) popup_char_count_window_g2

0x9da6,	// (0x000588d9) popup_char_count_window_g3

0x0002,

0xfdd9,	// (0x0005e90c) popup_char_count_window_g

0x9daf,	// (0x000588e2) popup_char_count_window_t1

0x2298,	// (0x00050dcb) popup_fep_char_preview_window_ParamLimits

0x2298,	// (0x00050dcb) popup_fep_char_preview_window

0xcb79,	// (0x0005b6ac) vkb2_top_candi_pane_ParamLimits

0xcb79,	// (0x0005b6ac) vkb2_top_candi_pane

0xf15e,	// (0x0005dc91) cell_vkb2_top_candi_pane_ParamLimits

0xf15e,	// (0x0005dc91) cell_vkb2_top_candi_pane

0x2804,	// (0x00051337) bg_popup_fep_char_preview_window_ParamLimits

0x2804,	// (0x00051337) bg_popup_fep_char_preview_window

0x2812,	// (0x00051345) popup_fep_char_preview_window_t1_ParamLimits

0x2812,	// (0x00051345) popup_fep_char_preview_window_t1

0x9e0a,	// (0x0005893d) bg_popup_fep_char_preview_window_g1

0x9e12,	// (0x00058945) bg_popup_fep_char_preview_window_g2

0x9e1a,	// (0x0005894d) bg_popup_fep_char_preview_window_g3

0x9e22,	// (0x00058955) bg_popup_fep_char_preview_window_g4

0x9e2a,	// (0x0005895d) bg_popup_fep_char_preview_window_g5

0x284c,	// (0x0005137f) bg_popup_fep_char_preview_window_g6

0x9e32,	// (0x00058965) bg_popup_fep_char_preview_window_g7

0x9e3a,	// (0x0005896d) bg_popup_fep_char_preview_window_g8

0x9e42,	// (0x00058975) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde0,	// (0x0005e913) bg_popup_fep_char_preview_window_g

0x1fa1,	// (0x00050ad4) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1fa1,	// (0x00050ad4) cell_vkb2_top_candi_pane_g1

0x1faf,	// (0x00050ae2) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1faf,	// (0x00050ae2) cell_vkb2_top_candi_pane_g2

0x9568,	// (0x0005809b) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9568,	// (0x0005809b) cell_vkb2_top_candi_pane_g3

0x2854,	// (0x00051387) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2854,	// (0x00051387) cell_vkb2_top_candi_pane_g4

0x81b9,	// (0x00056cec) cell_vkb2_top_candi_pane_g5_ParamLimits

0x81b9,	// (0x00056cec) cell_vkb2_top_candi_pane_g5

0x2875,	// (0x000513a8) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2875,	// (0x000513a8) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf3,	// (0x0005e926) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf3,	// (0x0005e926) cell_vkb2_top_candi_pane_g

0x2883,	// (0x000513b6) cell_vkb2_top_candi_pane_t1

0x1b86,	// (0x000506b9) aid_size_touch_slider_mark_ParamLimits

0x1b86,	// (0x000506b9) aid_size_touch_slider_mark

0xee8e,	// (0x0005d9c1) grid_graphic2_catg_pane_ParamLimits

0xee8e,	// (0x0005d9c1) grid_graphic2_catg_pane

0xef4a,	// (0x0005da7d) popup_grid_graphic2_window_t1_ParamLimits

0xef4a,	// (0x0005da7d) popup_grid_graphic2_window_t1

0xef60,	// (0x0005da93) popup_grid_graphic2_window_t2_ParamLimits

0xef60,	// (0x0005da93) popup_grid_graphic2_window_t2

0x0001,

0xfdae,	// (0x0005e8e1) popup_grid_graphic2_window_t_ParamLimits

0xfdae,	// (0x0005e8e1) popup_grid_graphic2_window_t

0x3a37,	// (0x0005256a) bg_button_pane_cp05_ParamLimits

0xf0d8,	// (0x0005dc0b) cell_graphic2_control_pane_g1_ParamLimits

0xf1c4,	// (0x0005dcf7) cell_graphic2_catg_pane_ParamLimits

0xf1c4,	// (0x0005dcf7) cell_graphic2_catg_pane

0x36ba,	// (0x000521ed) bg_button_pane_cp12

0xf1d6,	// (0x0005dd09) cell_graphic2_catg_pane_g1

0x9354,	// (0x00057e87) cell_tb_ext_pane_t1_ParamLimits

0x263a,	// (0x0005116d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x263a,	// (0x0005116d) vkb2_top_cell_right_narrow_pane

0x2652,	// (0x00051185) vkb2_top_cell_right_wide_pane_ParamLimits

0x2652,	// (0x00051185) vkb2_top_cell_right_wide_pane

0x1d3c,	// (0x0005086f) bg_vkb2_func_pane_ParamLimits

0x1d3c,	// (0x0005086f) bg_vkb2_func_pane

0x26c3,	// (0x000511f6) vkb2_top_cell_left_pane_g1_ParamLimits

0x1d3c,	// (0x0005086f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1d3c,	// (0x0005086f) bg_vkb2_fuc_pane_cp03

0x2721,	// (0x00051254) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x54c0,	// (0x00053ff3) bg_vkb2_func_pane_g1

0x54c8,	// (0x00053ffb) bg_vkb2_func_pane_g2

0x54d8,	// (0x0005400b) bg_vkb2_func_pane_g3

0x54d0,	// (0x00054003) bg_vkb2_func_pane_g4

0x54e0,	// (0x00054013) bg_vkb2_func_pane_g5

0x54e8,	// (0x0005401b) bg_vkb2_func_pane_g6

0x54f0,	// (0x00054023) bg_vkb2_func_pane_g7

0x54f8,	// (0x0005402b) bg_vkb2_func_pane_g8

0x54b8,	// (0x00053feb) bg_vkb2_func_pane_g9

0x0008,

0xfe00,	// (0x0005e933) bg_vkb2_func_pane_g

0x1d3c,	// (0x0005086f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1d3c,	// (0x0005086f) bg_vkb2_fuc_pane_cp01

0x26c3,	// (0x000511f6) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x26c3,	// (0x000511f6) vkb2_top_cell_right_wide_pane_g1

0x1d3c,	// (0x0005086f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1d3c,	// (0x0005086f) bg_vkb2_fuc_pane_cp02

0x2721,	// (0x00051254) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2721,	// (0x00051254) vkb2_top_cell_right_narrow_pane_g1

0xe6c2,	// (0x0005d1f5) aid_touch_area_decrease_ParamLimits

0xe6c2,	// (0x0005d1f5) aid_touch_area_decrease

0xe6fc,	// (0x0005d22f) aid_touch_area_increase_ParamLimits

0xe6fc,	// (0x0005d22f) aid_touch_area_increase

0xe724,	// (0x0005d257) aid_touch_area_mute_ParamLimits

0xe724,	// (0x0005d257) aid_touch_area_mute

0xe754,	// (0x0005d287) aid_touch_area_slider_ParamLimits

0xe754,	// (0x0005d287) aid_touch_area_slider

0xe794,	// (0x0005d2c7) popup_slider_window_g4_ParamLimits

0xe794,	// (0x0005d2c7) popup_slider_window_g4

0xe7bc,	// (0x0005d2ef) popup_slider_window_g5_ParamLimits

0xe7bc,	// (0x0005d2ef) popup_slider_window_g5

0xe7f0,	// (0x0005d323) popup_slider_window_g6_ParamLimits

0xe7f0,	// (0x0005d323) popup_slider_window_g6

0x912e,	// (0x00057c61) popup_slider_window_t2_ParamLimits

0x912e,	// (0x00057c61) popup_slider_window_t2

0x0001,

0xfcfc,	// (0x0005e82f) popup_slider_window_t_ParamLimits

0xfcfc,	// (0x0005e82f) popup_slider_window_t

0xe80c,	// (0x0005d33f) slider_pane_ParamLimits

0xe80c,	// (0x0005d33f) slider_pane

0x9e65,	// (0x00058998) slider_pane_g1_ParamLimits

0x9e65,	// (0x00058998) slider_pane_g1

0x9e79,	// (0x000589ac) slider_pane_g2_ParamLimits

0x9e79,	// (0x000589ac) slider_pane_g2

0x9e8f,	// (0x000589c2) slider_pane_g3_ParamLimits

0x9e8f,	// (0x000589c2) slider_pane_g3

0x0003,

0xfe13,	// (0x0005e946) slider_pane_g_ParamLimits

0xfe13,	// (0x0005e946) slider_pane_g

0xc5a4,	// (0x0005b0d7) popup_tb_float_extension_window_ParamLimits

0xc5a4,	// (0x0005b0d7) popup_tb_float_extension_window

0x9ebb,	// (0x000589ee) aid_size_cell_tb_float_ext

0x36ba,	// (0x000521ed) bg_popup_sub_window_cp28

0x9ec7,	// (0x000589fa) grid_tb_float_ext_pane

0x9ed1,	// (0x00058a04) cell_tb_float_ext_pane_ParamLimits

0x9ed1,	// (0x00058a04) cell_tb_float_ext_pane

0x9eeb,	// (0x00058a1e) cell_tb_float_ext_pane_g1

0x9ef4,	// (0x00058a27) grid_highlight_pane_cp12

0xc839,	// (0x0005b36c) cell_last_hwr_side_pane_ParamLimits

0xc839,	// (0x0005b36c) cell_last_hwr_side_pane

0x7a7f,	// (0x000565b2) cell_last_hwr_side_pane_g1

0x9efd,	// (0x00058a30) cell_last_hwr_side_pane_g2

0x0001,

0xfe1c,	// (0x0005e94f) cell_last_hwr_side_pane_g

0xcce0,	// (0x0005b813) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcce0,	// (0x0005b813) vkb2_area_bottom_space_btn_pane

0x1fa1,	// (0x00050ad4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x99ca,	// (0x000584fd) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2883,	// (0x000513b6) cell_vkb2_top_candi_pane_t1_ParamLimits

0x28a2,	// (0x000513d5) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x28a2,	// (0x000513d5) vkb2_area_bottom_space_btn_pane_g1

0x28dc,	// (0x0005140f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x28dc,	// (0x0005140f) vkb2_area_bottom_space_btn_pane_g2

0x2912,	// (0x00051445) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2912,	// (0x00051445) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe21,	// (0x0005e954) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe21,	// (0x0005e954) vkb2_area_bottom_space_btn_pane_g

0x1dff,	// (0x00050932) cel_fep_hwr_func_pane_ParamLimits

0x1dff,	// (0x00050932) cel_fep_hwr_func_pane

0xc80e,	// (0x0005b341) cell_hwr_side_button_pane_ParamLimits

0xc80e,	// (0x0005b341) cell_hwr_side_button_pane

0x9388,	// (0x00057ebb) aid_area_touch_clock_ParamLimits

0x3a37,	// (0x0005256a) bg_uniindi_top_pane_ParamLimits

0x939a,	// (0x00057ecd) uniindi_top_pane_g1_ParamLimits

0x93b0,	// (0x00057ee3) uniindi_top_pane_g2_ParamLimits

0x93bc,	// (0x00057eef) uniindi_top_pane_g3_ParamLimits

0x93cd,	// (0x00057f00) uniindi_top_pane_g4_ParamLimits

0xfd34,	// (0x0005e867) uniindi_top_pane_g_ParamLimits

0x93da,	// (0x00057f0d) uniindi_top_pane_t1_ParamLimits

0x3a37,	// (0x0005256a) bg_vkb2_func_pane_cp01_ParamLimits

0x3a37,	// (0x0005256a) bg_vkb2_func_pane_cp01

0x9f06,	// (0x00058a39) cel_fep_hwr_func_pane_g1_ParamLimits

0x9f06,	// (0x00058a39) cel_fep_hwr_func_pane_g1

0x3a37,	// (0x0005256a) bg_vkb2_func_pane_cp02_ParamLimits

0x3a37,	// (0x0005256a) bg_vkb2_func_pane_cp02

0x9f06,	// (0x00058a39) cell_hwr_side_button_pane_g1_ParamLimits

0x9f06,	// (0x00058a39) cell_hwr_side_button_pane_g1

0x5339,	// (0x00053e6c) status_pane_g4_ParamLimits

0x5339,	// (0x00053e6c) status_pane_g4

0x5353,	// (0x00053e86) status_pane_t1

0x7799,	// (0x000562cc) form2_midp_gauge_slider_cont_pane

0x77a1,	// (0x000562d4) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe143,	// (0x0005cc76) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe157,	// (0x0005cc8a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x0005e627) form2_midp_gauge_slider_pane_t_ParamLimits

0x77d7,	// (0x0005630a) form2_midp_slider_pane_ParamLimits

0x2258,	// (0x00050d8b) aid_size_cell_func_vkb2_ParamLimits

0x2258,	// (0x00050d8b) aid_size_cell_func_vkb2

0x9ea7,	// (0x000589da) slider_pane_g4_ParamLimits

0x9ea7,	// (0x000589da) slider_pane_g4

0xcd41,	// (0x0005b874) form2_midp_gauge_slider_pane_t2_cp01

0xcd51,	// (0x0005b884) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcd51,	// (0x0005b884) form2_midp_gauge_slider_pane_t3_cp01

0x2987,	// (0x000514ba) form2_midp_slider_pane_cp01

0x36ba,	// (0x000521ed) navi_smil_pane

0x9f3f,	// (0x00058a72) navi_smil_pane_g1

0x9f47,	// (0x00058a7a) navi_smil_pane_t1

0x9f14,	// (0x00058a47) form2_midp_slider_pane_g1

0x9f1d,	// (0x00058a50) form2_midp_slider_pane_g2

0x9f25,	// (0x00058a58) form2_midp_slider_pane_g3

0x9f14,	// (0x00058a47) form2_midp_slider_pane_g4

0xf1df,	// (0x0005dd12) form2_midp_slider_pane_g5

0x0004,

0xfe2a,	// (0x0005e95d) form2_midp_slider_pane_g

0x294c,	// (0x0005147f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x294c,	// (0x0005147f) vkb2_area_bottom_space_btn_pane_g4

0xd88e,	// (0x0005c3c1) lc0_navi_pane_ParamLimits

0xd88e,	// (0x0005c3c1) lc0_navi_pane

0xd8f8,	// (0x0005c42b) lc0_stat_indi_pane_ParamLimits

0xd8f8,	// (0x0005c42b) lc0_stat_indi_pane

0xd90d,	// (0x0005c440) ls0_title_pane_ParamLimits

0xd90d,	// (0x0005c440) ls0_title_pane

0x4014,	// (0x00052b47) bg_popup_sub_pane_cp14_ParamLimits

0x936f,	// (0x00057ea2) list_uniindi_pane_ParamLimits

0x937b,	// (0x00057eae) uniindi_top_pane_ParamLimits

0x9417,	// (0x00057f4a) list_single_uniindi_pane_g1_ParamLimits

0x942a,	// (0x00057f5d) list_single_uniindi_pane_t1_ParamLimits

0xcd70,	// (0x0005b8a3) lc0_stat_clock_pane_ParamLimits

0xcd70,	// (0x0005b8a3) lc0_stat_clock_pane

0xf1ea,	// (0x0005dd1d) lc0_stat_indi_pane_g1_ParamLimits

0xf1ea,	// (0x0005dd1d) lc0_stat_indi_pane_g1

0xf1f7,	// (0x0005dd2a) lc0_stat_indi_pane_g2_ParamLimits

0xf1f7,	// (0x0005dd2a) lc0_stat_indi_pane_g2

0x0001,

0xfe35,	// (0x0005e968) lc0_stat_indi_pane_g_ParamLimits

0xfe35,	// (0x0005e968) lc0_stat_indi_pane_g

0xcd7d,	// (0x0005b8b0) lc0_uni_indicator_pane_ParamLimits

0xcd7d,	// (0x0005b8b0) lc0_uni_indicator_pane

0xf204,	// (0x0005dd37) ls0_title_pane_g1_ParamLimits

0xf204,	// (0x0005dd37) ls0_title_pane_g1

0xf218,	// (0x0005dd4b) ls0_title_pane_t1_ParamLimits

0xf218,	// (0x0005dd4b) ls0_title_pane_t1

0xcd8a,	// (0x0005b8bd) lc0_uni_indicator_pane_g1_ParamLimits

0xcd8a,	// (0x0005b8bd) lc0_uni_indicator_pane_g1

0x9fb9,	// (0x00058aec) lc0_stat_clock_pane_t1

0x0298,	// (0x0004edcb) main_ai5_pane

0x9fc7,	// (0x00058afa) ai5_sk_pane_ParamLimits

0x9fc7,	// (0x00058afa) ai5_sk_pane

0xf246,	// (0x0005dd79) cell_ai5_widget_pane_ParamLimits

0xf246,	// (0x0005dd79) cell_ai5_widget_pane

0xa09e,	// (0x00058bd1) aid_size_cell_widget_grid

0xa0b4,	// (0x00058be7) bg_ai5_widget_pane_ParamLimits

0xa0b4,	// (0x00058be7) bg_ai5_widget_pane

0xa128,	// (0x00058c5b) cell_ai5_widget_pane_g2

0xa138,	// (0x00058c6b) cell_ai5_widget_pane_g3

0xa14f,	// (0x00058c82) cell_ai5_widget_pane_g4

0xa15b,	// (0x00058c8e) cell_ai5_widget_pane_g5

0xa167,	// (0x00058c9a) cell_ai5_widget_pane_g6

0xa173,	// (0x00058ca6) cell_ai5_widget_pane_g7

0xa1bb,	// (0x00058cee) cell_ai5_widget_pane_t1_ParamLimits

0xa1bb,	// (0x00058cee) cell_ai5_widget_pane_t1

0xa1d8,	// (0x00058d0b) cell_ai5_widget_pane_t2_ParamLimits

0xa1d8,	// (0x00058d0b) cell_ai5_widget_pane_t2

0xa1f0,	// (0x00058d23) cell_ai5_widget_pane_t3_ParamLimits

0xa1f0,	// (0x00058d23) cell_ai5_widget_pane_t3

0xa208,	// (0x00058d3b) cell_ai5_widget_pane_t4_ParamLimits

0xa208,	// (0x00058d3b) cell_ai5_widget_pane_t4

0xa225,	// (0x00058d58) cell_ai5_widget_pane_t5_ParamLimits

0xa225,	// (0x00058d58) cell_ai5_widget_pane_t5

0xa244,	// (0x00058d77) cell_ai5_widget_pane_t6_ParamLimits

0xa244,	// (0x00058d77) cell_ai5_widget_pane_t6

0xa256,	// (0x00058d89) cell_ai5_widget_pane_t7_ParamLimits

0xa256,	// (0x00058d89) cell_ai5_widget_pane_t7

0xa26f,	// (0x00058da2) cell_ai5_widget_pane_t8_ParamLimits

0xa26f,	// (0x00058da2) cell_ai5_widget_pane_t8

0x0009,

0xfe4f,	// (0x0005e982) cell_ai5_widget_pane_t_ParamLimits

0xfe4f,	// (0x0005e982) cell_ai5_widget_pane_t

0xa2c3,	// (0x00058df6) grid_ai5_widget_pane

0x4014,	// (0x00052b47) highlight_cell_ai5_widget_pane_ParamLimits

0x4014,	// (0x00052b47) highlight_cell_ai5_widget_pane

0xf2b0,	// (0x0005dde3) ai5_sk_left_pane

0xf2ba,	// (0x0005dded) ai5_sk_middle_pane

0xf2c4,	// (0x0005ddf7) ai5_sk_right_pane

0xa2f9,	// (0x00058e2c) bg_ai5_widget_pane_g1_ParamLimits

0xa2f9,	// (0x00058e2c) bg_ai5_widget_pane_g1

0xa305,	// (0x00058e38) bg_ai5_widget_pane_g2_ParamLimits

0xa305,	// (0x00058e38) bg_ai5_widget_pane_g2

0xa311,	// (0x00058e44) bg_ai5_widget_pane_g3_ParamLimits

0xa311,	// (0x00058e44) bg_ai5_widget_pane_g3

0xa31d,	// (0x00058e50) bg_ai5_widget_pane_g4_ParamLimits

0xa31d,	// (0x00058e50) bg_ai5_widget_pane_g4

0xa329,	// (0x00058e5c) bg_ai5_widget_pane_g5_ParamLimits

0xa329,	// (0x00058e5c) bg_ai5_widget_pane_g5

0xa335,	// (0x00058e68) bg_ai5_widget_pane_g6_ParamLimits

0xa335,	// (0x00058e68) bg_ai5_widget_pane_g6

0xa341,	// (0x00058e74) bg_ai5_widget_pane_g7_ParamLimits

0xa341,	// (0x00058e74) bg_ai5_widget_pane_g7

0xa34d,	// (0x00058e80) bg_ai5_widget_pane_g8_ParamLimits

0xa34d,	// (0x00058e80) bg_ai5_widget_pane_g8

0xa359,	// (0x00058e8c) bg_ai5_widget_pane_g9_ParamLimits

0xa359,	// (0x00058e8c) bg_ai5_widget_pane_g9

0x0008,

0xfe64,	// (0x0005e997) bg_ai5_widget_pane_g_ParamLimits

0xfe64,	// (0x0005e997) bg_ai5_widget_pane_g

0xa38b,	// (0x00058ebe) cell_shortcut_ai5_widget_pane_ParamLimits

0xa38b,	// (0x00058ebe) cell_shortcut_ai5_widget_pane

0x4c80,	// (0x000537b3) bg_cell_shortcut_ai5_widget_pane

0xa39c,	// (0x00058ecf) cell_grid_ai5_widget_pane_g1

0x4c80,	// (0x000537b3) highlight_cell_shortcut_ai5_widget_pane

0x54c0,	// (0x00053ff3) ai5_sk_left_pane_g1

0xa3a5,	// (0x00058ed8) ai5_sk_left_pane_g2

0xa3ad,	// (0x00058ee0) ai5_sk_left_pane_g3

0xa3b5,	// (0x00058ee8) ai5_sk_left_pane_g4

0x0003,

0xfe77,	// (0x0005e9aa) ai5_sk_left_pane_g

0xa3bd,	// (0x00058ef0) ai5_sk_left_pane_t1

0x54c8,	// (0x00053ffb) ai5_sk_right_pane_g1

0xa3cb,	// (0x00058efe) ai5_sk_right_pane_g2

0xa3d3,	// (0x00058f06) ai5_sk_right_pane_g3

0xa3db,	// (0x00058f0e) ai5_sk_right_pane_g4

0x0003,

0xfe80,	// (0x0005e9b3) ai5_sk_right_pane_g

0xa3e3,	// (0x00058f16) ai5_sk_right_pane_t1

0x54c8,	// (0x00053ffb) ai5_sk_middle_pane_g1

0x54c0,	// (0x00053ff3) ai5_sk_middle_pane_g2

0x54e0,	// (0x00054013) ai5_sk_middle_pane_g3

0xa3d3,	// (0x00058f06) ai5_sk_middle_pane_g4

0xa3ad,	// (0x00058ee0) ai5_sk_middle_pane_g5

0xa3f1,	// (0x00058f24) ai5_sk_middle_pane_g6

0xf2ce,	// (0x0005de01) ai5_sk_middle_pane_g7

0x0006,

0xfe89,	// (0x0005e9bc) ai5_sk_middle_pane_g

0xd6d0,	// (0x0005c203) aid_touch_area_size_lc0_ParamLimits

0xd6d0,	// (0x0005c203) aid_touch_area_size_lc0

0x1fd0,	// (0x00050b03) cell_hwr_candidate_pane_t1_ParamLimits

0x501c,	// (0x00053b4f) aid_touch_navi_pane

0xda06,	// (0x0005c539) status_dt_navi_pane_ParamLimits

0xda06,	// (0x0005c539) status_dt_navi_pane

0xda1e,	// (0x0005c551) status_dt_sta_pane_ParamLimits

0xda1e,	// (0x0005c551) status_dt_sta_pane

0xf2d6,	// (0x0005de09) dt_sta_controll_pane

0xf2e3,	// (0x0005de16) dt_sta_indi_pane

0xf2f0,	// (0x0005de23) dt_sta_title_pane

0x3a37,	// (0x0005256a) bg_dt_sta_indi_pane_ParamLimits

0x3a37,	// (0x0005256a) bg_dt_sta_indi_pane

0xa432,	// (0x00058f65) dt_sta_battery_pane

0xf302,	// (0x0005de35) dt_sta_indi_pane_g1

0xf30b,	// (0x0005de3e) dt_sta_indi_pane_g2

0xf314,	// (0x0005de47) dt_sta_indi_pane_g3

0x0002,

0xfe98,	// (0x0005e9cb) dt_sta_indi_pane_g

0xf31d,	// (0x0005de50) dt_sta_signal_pane

0x4014,	// (0x00052b47) bg_dt_sta_title_pane_ParamLimits

0x4014,	// (0x00052b47) bg_dt_sta_title_pane

0xa45e,	// (0x00058f91) dt_sta_title_pane_g1

0xf326,	// (0x0005de59) dt_sta_title_pane_t1_ParamLimits

0xf326,	// (0x0005de59) dt_sta_title_pane_t1

0x36ba,	// (0x000521ed) bg_dt_sta_control_pane

0xf33b,	// (0x0005de6e) dt_sta_controll_pane_g1

0xa484,	// (0x00058fb7) bg_dt_sta_title_pane_g1

0xa48d,	// (0x00058fc0) bg_dt_sta_title_pane_g2

0xa496,	// (0x00058fc9) bg_dt_sta_title_pane_g3

0x0002,

0xfe9f,	// (0x0005e9d2) bg_dt_sta_title_pane_g

0x7a7f,	// (0x000565b2) bg_dt_sta_indi_pane_g1

0xa49f,	// (0x00058fd2) dt_sta_signal_pane_g1

0xa4a7,	// (0x00058fda) dt_sta_signal_pane_g2

0x0001,

0xfea6,	// (0x0005e9d9) dt_sta_signal_pane_g

0xa4af,	// (0x00058fe2) dt_sta_battery_pane_g1

0xa4b8,	// (0x00058feb) dt_sta_battery_pane_t1

0x7a7f,	// (0x000565b2) bg_dt_sta_control_pane_g1

0x476a,	// (0x0005329d) fep_china_uni_eep_pane

0x4772,	// (0x000532a5) fep_china_uni_entry_pane_ParamLimits

0x4782,	// (0x000532b5) popup_fep_china_uni_window_g1_ParamLimits

0x4792,	// (0x000532c5) popup_fep_china_uni_window_g2_ParamLimits

0x4792,	// (0x000532c5) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0005e250) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0005e250) popup_fep_china_uni_window_g

0xa4c7,	// (0x00058ffa) fep_china_uni_eep_pane_g1

0xa4cf,	// (0x00059002) fep_china_uni_eep_pane_t1

0x9f36,	// (0x00058a69) aid_touch_area_size_smil_player

0x5168,	// (0x00053c9b) lc0_clock_pane

0x5347,	// (0x00053e7a) status_pane_g5_ParamLimits

0x5347,	// (0x00053e7a) status_pane_g5

0xc132,	// (0x0005ac65) popup_keymap_window

0x530d,	// (0x00053e40) status_icon_pane

0xa138,	// (0x00058c6b) cell_ai5_widget_pane_g3_ParamLimits

0xa14f,	// (0x00058c82) cell_ai5_widget_pane_g4_ParamLimits

0xa15b,	// (0x00058c8e) cell_ai5_widget_pane_g5_ParamLimits

0xa17f,	// (0x00058cb2) cell_ai5_widget_pane_g8_ParamLimits

0xa17f,	// (0x00058cb2) cell_ai5_widget_pane_g8

0xa193,	// (0x00058cc6) cell_ai5_widget_pane_g9_ParamLimits

0xa193,	// (0x00058cc6) cell_ai5_widget_pane_g9

0xa1a7,	// (0x00058cda) cell_ai5_widget_pane_g10_ParamLimits

0xa1a7,	// (0x00058cda) cell_ai5_widget_pane_g10

0xa4de,	// (0x00059011) status_icon_pane_g1

0x36ba,	// (0x000521ed) bg_popup_sub_pane_cp13

0xa4e6,	// (0x00059019) popup_keymap_window_t1

0xd65e,	// (0x0005c191) control_pane_g6_ParamLimits

0xd65e,	// (0x0005c191) control_pane_g6

0xd66b,	// (0x0005c19e) control_pane_g7_ParamLimits

0xd66b,	// (0x0005c19e) control_pane_g7

0xd678,	// (0x0005c1ab) control_pane_g8_ParamLimits

0xd678,	// (0x0005c1ab) control_pane_g8

0xf2d6,	// (0x0005de09) dt_sta_controll_pane_ParamLimits

0xf2e3,	// (0x0005de16) dt_sta_indi_pane_ParamLimits

0xf2f0,	// (0x0005de23) dt_sta_title_pane_ParamLimits

0x3f40,	// (0x00052a73) aid_size_touch_scroll_bar_cale

0x0371,	// (0x0004eea4) popup_discreet_window_ParamLimits

0x0371,	// (0x0004eea4) popup_discreet_window

0xb807,	// (0x0005a33a) popup_sk_window

0x5b4a,	// (0x0005467d) bg_popup_sub_pane_cp28_ParamLimits

0x5b4a,	// (0x0005467d) bg_popup_sub_pane_cp28

0xa4f4,	// (0x00059027) popup_discreet_window_g1_ParamLimits

0xa4f4,	// (0x00059027) popup_discreet_window_g1

0xa514,	// (0x00059047) popup_discreet_window_t1_ParamLimits

0xa514,	// (0x00059047) popup_discreet_window_t1

0xa532,	// (0x00059065) popup_discreet_window_t2_ParamLimits

0xa532,	// (0x00059065) popup_discreet_window_t2

0x0002,

0xfeab,	// (0x0005e9de) popup_discreet_window_t_ParamLimits

0xfeab,	// (0x0005e9de) popup_discreet_window_t

0x29bf,	// (0x000514f2) popup_sk_window_g1

0x29c9,	// (0x000514fc) popup_sk_window_g2

0x0001,

0xfeb2,	// (0x0005e9e5) popup_sk_window_g

0x29d3,	// (0x00051506) popup_sk_window_t1

0x29e1,	// (0x00051514) popup_sk_window_t1_copy1

0xa128,	// (0x00058c5b) cell_ai5_widget_pane_g2_ParamLimits

0xa281,	// (0x00058db4) cell_ai5_widget_pane_t9_ParamLimits

0xa281,	// (0x00058db4) cell_ai5_widget_pane_t9

0x36ba,	// (0x000521ed) main_fep_fshwr2_pane

0xcdb8,	// (0x0005b8eb) aid_fshwr2_btn_pane

0xcdc9,	// (0x0005b8fc) aid_fshwr2_syb_pane

0xcdda,	// (0x0005b90d) aid_fshwr2_txt_pane

0xcde6,	// (0x0005b919) fshwr2_func_candi_pane

0xce05,	// (0x0005b938) fshwr2_hwr_syb_pane

0xce20,	// (0x0005b953) fshwr2_icf_pane

0x0298,	// (0x0004edcb) fshwr2_icf_bg_pane

0xce49,	// (0x0005b97c) fshwr2_icf_pane_t1_ParamLimits

0xce49,	// (0x0005b97c) fshwr2_icf_pane_t1

0x465c,	// (0x0005318f) fshwr2_func_candi_pane_g1

0xf344,	// (0x0005de77) fshwr2_func_candi_row_pane_ParamLimits

0xf344,	// (0x0005de77) fshwr2_func_candi_row_pane

0xce62,	// (0x0005b995) cell_fshwr2_syb_pane_ParamLimits

0xce62,	// (0x0005b995) cell_fshwr2_syb_pane

0x1fa1,	// (0x00050ad4) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1fa1,	// (0x00050ad4) fshwr2_hwr_syb_pane_g1

0x0298,	// (0x0004edcb) bg_popup_call_pane_cp01

0xce78,	// (0x0005b9ab) fshwr2_func_candi_cell_pane_ParamLimits

0xce78,	// (0x0005b9ab) fshwr2_func_candi_cell_pane

0xf354,	// (0x0005de87) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf354,	// (0x0005de87) fshwr2_func_candi_cell_bg_pane

0xcead,	// (0x0005b9e0) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcead,	// (0x0005b9e0) fshwr2_func_candi_cell_pane_g1

0xcedc,	// (0x0005ba0f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcedc,	// (0x0005ba0f) fshwr2_func_candi_cell_pane_t1

0x0298,	// (0x0004edcb) bg_button_pane_cp08

0x6e66,	// (0x00055999) cell_fshwr2_syb_bg_pane

0xceef,	// (0x0005ba22) cell_fshwr2_syb_bg_pane_g1

0xcef7,	// (0x0005ba2a) cell_fshwr2_syb_bg_pane_t1

0x4014,	// (0x00052b47) main_tmo_pane

0xdd00,	// (0x0005c833) uni_indicator_pane_g1_ParamLimits

0xdd16,	// (0x0005c849) uni_indicator_pane_g2_ParamLimits

0xdd2c,	// (0x0005c85f) uni_indicator_pane_g3_ParamLimits

0x66a0,	// (0x000551d3) uni_indicator_pane_g4_ParamLimits

0x66a0,	// (0x000551d3) uni_indicator_pane_g4

0x66b4,	// (0x000551e7) uni_indicator_pane_g5_ParamLimits

0x66b4,	// (0x000551e7) uni_indicator_pane_g5

0x66b4,	// (0x000551e7) uni_indicator_pane_g6_ParamLimits

0x66b4,	// (0x000551e7) uni_indicator_pane_g6

0xf91c,	// (0x0005e44f) uni_indicator_pane_g_ParamLimits

0xe6a4,	// (0x0005d1d7) popup_tmo_note_window_ParamLimits

0xe6a4,	// (0x0005d1d7) popup_tmo_note_window

0x223a,	// (0x00050d6d) fshwr2_bg_pane

0xcecd,	// (0x0005ba00) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcecd,	// (0x0005ba00) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb7,	// (0x0005e9ea) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb7,	// (0x0005e9ea) fshwr2_func_candi_cell_pane_g

0x1f89,	// (0x00050abc) bg_popup_window_pane_cp01

0x2b0e,	// (0x00051641) bg_popup_window_pane_g1_cp01

0xa594,	// (0x000590c7) bg_popup_window_pane_cp22_ParamLimits

0xa594,	// (0x000590c7) bg_popup_window_pane_cp22

0xa5a2,	// (0x000590d5) listscroll_tmo_link_pane_ParamLimits

0xa5a2,	// (0x000590d5) listscroll_tmo_link_pane

0xa5e2,	// (0x00059115) popup_tmo_note_window_g1_ParamLimits

0xa5e2,	// (0x00059115) popup_tmo_note_window_g1

0xa5ef,	// (0x00059122) tmo_note_info_pane_ParamLimits

0xa5ef,	// (0x00059122) tmo_note_info_pane

0xf360,	// (0x0005de93) list_tmo_note_info_pane_g1_ParamLimits

0xf360,	// (0x0005de93) list_tmo_note_info_pane_g1

0xa620,	// (0x00059153) list_tmo_note_info_pane_g2_ParamLimits

0xa620,	// (0x00059153) list_tmo_note_info_pane_g2

0x0001,

0xfebc,	// (0x0005e9ef) list_tmo_note_info_pane_g_ParamLimits

0xfebc,	// (0x0005e9ef) list_tmo_note_info_pane_g

0xa63c,	// (0x0005916f) list_tmo_note_info_text_pane_ParamLimits

0xa63c,	// (0x0005916f) list_tmo_note_info_text_pane

0xa6bf,	// (0x000591f2) list_tmo_link_pane

0xa6cc,	// (0x000591ff) scroll_pane_cp20

0xa6d9,	// (0x0005920c) list_single_tmo_link_pane_ParamLimits

0xa6d9,	// (0x0005920c) list_single_tmo_link_pane

0xa6e9,	// (0x0005921c) list_single_tmo_link_pane_t1

0xa6f7,	// (0x0005922a) list_tmo_note_info_text_pane_t1_ParamLimits

0xa6f7,	// (0x0005922a) list_tmo_note_info_text_pane_t1

0xd2b1,	// (0x0005bde4) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd2b1,	// (0x0005bde4) aid_size_touch_scroll_bar_cp01

0xbd44,	// (0x0005a877) aid_size_touch_slider_marker

0xb7f7,	// (0x0005a32a) popup_settings_window_ParamLimits

0xb7f7,	// (0x0005a32a) popup_settings_window

0x12d3,	// (0x0004fe06) popup_candi_list_indi_window

0x501c,	// (0x00053b4f) aid_touch_navi_pane_ParamLimits

0x2195,	// (0x00050cc8) rs_clock_indi_pane

0x219e,	// (0x00050cd1) sctrl_sk_bottom_pane_ParamLimits

0x21af,	// (0x00050ce2) sctrl_sk_top_pane_ParamLimits

0x22b2,	// (0x00050de5) popup_fep_tooltip_window

0xa09e,	// (0x00058bd1) aid_size_cell_widget_grid_ParamLimits

0xa113,	// (0x00058c46) cell_ai5_widget_pane_g1_ParamLimits

0xa113,	// (0x00058c46) cell_ai5_widget_pane_g1

0xa167,	// (0x00058c9a) cell_ai5_widget_pane_g6_ParamLimits

0xa173,	// (0x00058ca6) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3a,	// (0x0005e96d) cell_ai5_widget_pane_g_ParamLimits

0xfe3a,	// (0x0005e96d) cell_ai5_widget_pane_g

0xa2a5,	// (0x00058dd8) cell_ai5_widget_pane_t10_ParamLimits

0xa2a5,	// (0x00058dd8) cell_ai5_widget_pane_t10

0xa2c3,	// (0x00058df6) grid_ai5_widget_pane_ParamLimits

0xa365,	// (0x00058e98) cell_contacts_ai5_widget_pane_ParamLimits

0xa365,	// (0x00058e98) cell_contacts_ai5_widget_pane

0xa547,	// (0x0005907a) popup_discreet_window_t3_ParamLimits

0xa547,	// (0x0005907a) popup_discreet_window_t3

0xce35,	// (0x0005b968) popup_fshwr2_char_preview_window_ParamLimits

0xce35,	// (0x0005b968) popup_fshwr2_char_preview_window

0xf377,	// (0x0005deaa) tmo_note_info_pane_t1

0xf38c,	// (0x0005debf) tmo_note_info_pane_t2

0xf3a5,	// (0x0005ded8) tmo_note_info_pane_t3

0xa69b,	// (0x000591ce) tmo_note_info_pane_t4

0xa6ad,	// (0x000591e0) tmo_note_info_pane_t5

0x0004,

0xfec1,	// (0x0005e9f4) tmo_note_info_pane_t

0xa6bf,	// (0x000591f2) list_tmo_link_pane_ParamLimits

0xa6cc,	// (0x000591ff) scroll_pane_cp20_ParamLimits

0x0298,	// (0x0004edcb) bg_popup_fep_char_preview_window_cp01

0xa710,	// (0x00059243) popup_fshwr2_char_preview_window_t1

0xa71e,	// (0x00059251) popup_candi_list_indi_window_g1

0xa727,	// (0x0005925a) bg_cell_contacts_ai5_widget_pane

0xa733,	// (0x00059266) cell_contacts_ai5_widget_pane_g1

0xa748,	// (0x0005927b) cell_contacts_ai5_widget_pane_g2

0xa754,	// (0x00059287) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecc,	// (0x0005e9ff) cell_contacts_ai5_widget_pane_g

0xa760,	// (0x00059293) cell_contacts_ai5_widget_pane_t1

0x4014,	// (0x00052b47) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf3ba,	// (0x0005deed) settings_container_pane

0x4c80,	// (0x000537b3) listscroll_set_pane_copy1

0x7155,	// (0x00055c88) scroll_pane_cp121_copy1

0xa7e3,	// (0x00059316) set_content_pane_copy1

0xf3c6,	// (0x0005def9) aid_height_set_list_copy1_ParamLimits

0xf3c6,	// (0x0005def9) aid_height_set_list_copy1

0x68a7,	// (0x000553da) aid_size_parent_copy1_ParamLimits

0x68a7,	// (0x000553da) aid_size_parent_copy1

0xf3d2,	// (0x0005df05) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf3d2,	// (0x0005df05) button_value_adjust_pane_cp6_copy1

0x4fba,	// (0x00053aed) list_highlight_pane_cp2_copy1_ParamLimits

0x4fba,	// (0x00053aed) list_highlight_pane_cp2_copy1

0xf3e6,	// (0x0005df19) list_set_pane_copy1_ParamLimits

0xf3e6,	// (0x0005df19) list_set_pane_copy1

0xa772,	// (0x000592a5) main_pane_set_t1_copy1_ParamLimits

0xa772,	// (0x000592a5) main_pane_set_t1_copy1

0xa7ac,	// (0x000592df) main_pane_set_t2_copy1_ParamLimits

0xa7ac,	// (0x000592df) main_pane_set_t2_copy1

0xa8b8,	// (0x000593eb) main_pane_set_t3_copy1

0xa8c6,	// (0x000593f9) main_pane_set_t4_copy1

0xa7cb,	// (0x000592fe) set_content_pane_g1_copy1_ParamLimits

0xa7cb,	// (0x000592fe) set_content_pane_g1_copy1

0xf493,	// (0x0005dfc6) setting_code_pane_copy1

0xa8dc,	// (0x0005940f) setting_slider_graphic_pane_copy1

0xa8dc,	// (0x0005940f) setting_slider_pane_copy1

0xa8dc,	// (0x0005940f) setting_text_pane_copy1

0xa8dc,	// (0x0005940f) setting_volume_pane_copy1

0xf493,	// (0x0005dfc6) settings_code_pane_cp2_copy1

0xf49b,	// (0x0005dfce) settings_code_pane_cp_copy1_ParamLimits

0xf49b,	// (0x0005dfce) settings_code_pane_cp_copy1

0xcf06,	// (0x0005ba39) volume_set_pane_copy1

0xf4af,	// (0x0005dfe2) volume_set_pane_g10_copy1

0xf4b7,	// (0x0005dfea) volume_set_pane_g1_copy1

0xf4bf,	// (0x0005dff2) volume_set_pane_g2_copy1

0xf4c7,	// (0x0005dffa) volume_set_pane_g3_copy1

0xf4cf,	// (0x0005e002) volume_set_pane_g4_copy1

0xf4d7,	// (0x0005e00a) volume_set_pane_g5_copy1

0xf4df,	// (0x0005e012) volume_set_pane_g6_copy1

0xf4e7,	// (0x0005e01a) volume_set_pane_g7_copy1

0xf4ef,	// (0x0005e022) volume_set_pane_g8_copy1

0xf4f7,	// (0x0005e02a) volume_set_pane_g9_copy1

0x37ae,	// (0x000522e1) bg_set_opt_pane_cp_copy1_ParamLimits

0x37ae,	// (0x000522e1) bg_set_opt_pane_cp_copy1

0x2b1f,	// (0x00051652) setting_slider_pane_t1_copy1_ParamLimits

0x2b1f,	// (0x00051652) setting_slider_pane_t1_copy1

0xcf0e,	// (0x0005ba41) setting_slider_pane_t2_copy1_ParamLimits

0xcf0e,	// (0x0005ba41) setting_slider_pane_t2_copy1

0xcf28,	// (0x0005ba5b) setting_slider_pane_t3_copy1_ParamLimits

0xcf28,	// (0x0005ba5b) setting_slider_pane_t3_copy1

0xcf40,	// (0x0005ba73) slider_set_pane_copy1_ParamLimits

0xcf40,	// (0x0005ba73) slider_set_pane_copy1

0x4063,	// (0x00052b96) set_opt_bg_pane_g1_copy2

0x406b,	// (0x00052b9e) set_opt_bg_pane_g2_copy2

0xa948,	// (0x0005947b) set_opt_bg_pane_g3_copy2

0x407b,	// (0x00052bae) set_opt_bg_pane_g4_copy2

0x4083,	// (0x00052bb6) set_opt_bg_pane_g5_copy2

0x408b,	// (0x00052bbe) set_opt_bg_pane_g6_copy2

0xf4ff,	// (0x0005e032) set_opt_bg_pane_g7_copy2

0xa95a,	// (0x0005948d) set_opt_bg_pane_g8_copy2

0xa964,	// (0x00059497) set_opt_bg_pane_g9_copy2

0x2b85,	// (0x000516b8) aid_size_touch_slider_mark_copy1_ParamLimits

0x2b85,	// (0x000516b8) aid_size_touch_slider_mark_copy1

0xa96e,	// (0x000594a1) slider_set_pane_g1_copy1

0x2b99,	// (0x000516cc) slider_set_pane_g2_copy1

0x1ba6,	// (0x000506d9) slider_set_pane_g3_copy1_ParamLimits

0x1ba6,	// (0x000506d9) slider_set_pane_g3_copy1

0x1bba,	// (0x000506ed) slider_set_pane_g4_copy1_ParamLimits

0x1bba,	// (0x000506ed) slider_set_pane_g4_copy1

0x1bd2,	// (0x00050705) slider_set_pane_g5_copy1_ParamLimits

0x1bd2,	// (0x00050705) slider_set_pane_g5_copy1

0x1ba6,	// (0x000506d9) slider_set_pane_g6_copy1_ParamLimits

0x1ba6,	// (0x000506d9) slider_set_pane_g6_copy1

0x2ba1,	// (0x000516d4) slider_set_pane_g7_copy1_ParamLimits

0x2ba1,	// (0x000516d4) slider_set_pane_g7_copy1

0x36ce,	// (0x00052201) bg_set_opt_pane_cp2_copy1

0xa977,	// (0x000594aa) setting_slider_graphic_pane_g1_copy1

0xf507,	// (0x0005e03a) setting_slider_graphic_pane_t1_copy1

0xf517,	// (0x0005e04a) setting_slider_graphic_pane_t2_copy1

0xf527,	// (0x0005e05a) slider_set_pane_cp_copy1

0xa9b0,	// (0x000594e3) input_focus_pane_cp1_copy1

0xa9b9,	// (0x000594ec) list_set_text_pane_copy1

0xa9c1,	// (0x000594f4) setting_text_pane_g1_copy1

0x367b,	// (0x000521ae) set_text_pane_t1_copy1

0xa9b0,	// (0x000594e3) input_focus_pane_cp2_copy1

0xa9c1,	// (0x000594f4) setting_code_pane_g1_copy1

0xf52f,	// (0x0005e062) setting_code_pane_t1_copy1

0x6f89,	// (0x00055abc) list_set_graphic_pane_copy1

0x36ce,	// (0x00052201) bg_set_opt_pane_cp4_copy1

0xd4d7,	// (0x0005c00a) list_set_graphic_pane_g1_copy1_ParamLimits

0xd4d7,	// (0x0005c00a) list_set_graphic_pane_g1_copy1

0xf53d,	// (0x0005e070) list_set_graphic_pane_g2_copy1

0xd4ef,	// (0x0005c022) list_set_graphic_pane_t1_copy1_ParamLimits

0xd4ef,	// (0x0005c022) list_set_graphic_pane_t1_copy1

0x7a7f,	// (0x000565b2) rs_clock_indi_pane_g1

0xa9f4,	// (0x00059527) rs_clock_indi_pane_t1

0xaa02,	// (0x00059535) rs_indi_pane

0xaa0a,	// (0x0005953d) rs_indi_pane_g1

0xaa13,	// (0x00059546) rs_indi_pane_g2

0xaa1c,	// (0x0005954f) rs_indi_pane_g3

0x0002,

0xfed3,	// (0x0005ea06) rs_indi_pane_g

0x4c80,	// (0x000537b3) bg_popup_preview_window_pane_cp03

0xaa25,	// (0x00059558) popup_fep_tooltip_window_t1

0x86fb,	// (0x0005722e) popup_note2_window_g2_ParamLimits

0x86fb,	// (0x0005722e) popup_note2_window_g2

0x0001,

0xfc6c,	// (0x0005e79f) popup_note2_window_g_ParamLimits

0xfc6c,	// (0x0005e79f) popup_note2_window_g

0x8bf7,	// (0x0005772a) bg_popup_sub_pane_cp11_ParamLimits

0x8c04,	// (0x00057737) cell_ai3_links_pane_g1_ParamLimits

0x8c1b,	// (0x0005774e) cell_ai3_links_pane_t1

0x367b,	// (0x000521ae) set_text_pane_t1_copy1_ParamLimits

0x4b91,	// (0x000536c4) cell_graphic_popup_pane_cp2_ParamLimits

0x4b91,	// (0x000536c4) cell_graphic_popup_pane_cp2

0xaa33,	// (0x00059566) cell_graphic_popup_pane_g1_cp2

0x3d53,	// (0x00052886) cell_graphic_popup_pane_g2_cp2

0xaa3b,	// (0x0005956e) cell_graphic_popup_pane_g3_cp2

0xaa43,	// (0x00059576) cell_graphic_popup_pane_t2_cp2

0x3d64,	// (0x00052897) grid_highlight_pane_cp3_cp2

0x43a3,	// (0x00052ed6) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4014,	// (0x00052b47) main_tmo_pane_ParamLimits

0xe698,	// (0x0005d1cb) popup_tmo_big_image_note_window

0xa102,	// (0x00058c35) cell_ai5_widget_list_pane

0xa10a,	// (0x00058c3d) cell_ai5_widget_lrg_icon_pane

0xf377,	// (0x0005deaa) tmo_note_info_pane_t1_ParamLimits

0xf38c,	// (0x0005debf) tmo_note_info_pane_t2_ParamLimits

0xf3a5,	// (0x0005ded8) tmo_note_info_pane_t3_ParamLimits

0xa69b,	// (0x000591ce) tmo_note_info_pane_t4_ParamLimits

0xa6ad,	// (0x000591e0) tmo_note_info_pane_t5_ParamLimits

0xfec1,	// (0x0005e9f4) tmo_note_info_pane_t_ParamLimits

0xf3ba,	// (0x0005deed) settings_container_pane_ParamLimits

0xa9a8,	// (0x000594db) indicator_popup_pane_cp5

0xa9a8,	// (0x000594db) indicator_popup_pane_cp6

0x6f89,	// (0x00055abc) list_set_graphic_pane_copy1_ParamLimits

0x36ba,	// (0x000521ed) bg_popup_window_pane_cp23

0xaa51,	// (0x00059584) popup_tmo_big_image_note_window_g1

0xaa5a,	// (0x0005958d) popup_tmo_big_image_note_window_t1

0xaa6a,	// (0x0005959d) popup_tmo_big_image_note_window_t2

0xaa7a,	// (0x000595ad) popup_tmo_big_image_note_window_t3

0x0002,

0xfeda,	// (0x0005ea0d) popup_tmo_big_image_note_window_t

0x7a7f,	// (0x000565b2) cell_ai5_widget_lrg_icon_pane_g1

0xaa8a,	// (0x000595bd) cell_ai5_widget_lrg_icon_pane_t1

0xaa98,	// (0x000595cb) cell_ai5_widget_list_row_pane_ParamLimits

0xaa98,	// (0x000595cb) cell_ai5_widget_list_row_pane

0xaaaf,	// (0x000595e2) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xaaaf,	// (0x000595e2) cell_ai5_widget_list_row_pane_g1

0xaabc,	// (0x000595ef) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xaabc,	// (0x000595ef) cell_ai5_widget_list_row_pane_t1

0xaaea,	// (0x0005961d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xaaea,	// (0x0005961d) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee1,	// (0x0005ea14) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee1,	// (0x0005ea14) cell_ai5_widget_list_row_pane_t

0x0298,	// (0x0004edcb) main_fep_vtchi_ss_pane

0xab2e,	// (0x00059661) popup_fep_char_pre_window

0xab36,	// (0x00059669) popup_fep_ituss_window

0xab57,	// (0x0005968a) popup_fep_vkbss_window

0xab76,	// (0x000596a9) grid_vkbss_keypad_pane_ParamLimits

0xab76,	// (0x000596a9) grid_vkbss_keypad_pane

0xab86,	// (0x000596b9) ituss_keypad_pane

0x2bc3,	// (0x000516f6) aid_vkbss_key_offset_ParamLimits

0x2bc3,	// (0x000516f6) aid_vkbss_key_offset

0x2bcf,	// (0x00051702) cell_vkbss_key_pane_ParamLimits

0x2bcf,	// (0x00051702) cell_vkbss_key_pane

0x5321,	// (0x00053e54) bg_cell_vkbss_key_g1_ParamLimits

0x5321,	// (0x00053e54) bg_cell_vkbss_key_g1

0xab95,	// (0x000596c8) cell_vkbss_key_3p_pane_ParamLimits

0xab95,	// (0x000596c8) cell_vkbss_key_3p_pane

0xabaf,	// (0x000596e2) cell_vkbss_key_g1_ParamLimits

0xabaf,	// (0x000596e2) cell_vkbss_key_g1

0xabc9,	// (0x000596fc) cell_vkbss_key_t1_ParamLimits

0xabc9,	// (0x000596fc) cell_vkbss_key_t1

0x2be5,	// (0x00051718) cell_ituss_key_pane_ParamLimits

0x2be5,	// (0x00051718) cell_ituss_key_pane

0xabf4,	// (0x00059727) bg_cell_ituss_key_g1_ParamLimits

0xabf4,	// (0x00059727) bg_cell_ituss_key_g1

0xac00,	// (0x00059733) cell_ituss_key_pane_g1_ParamLimits

0xac00,	// (0x00059733) cell_ituss_key_pane_g1

0x2bf6,	// (0x00051729) cell_ituss_key_pane_g2_ParamLimits

0x2bf6,	// (0x00051729) cell_ituss_key_pane_g2

0x0002,

0xfee8,	// (0x0005ea1b) cell_ituss_key_pane_g_ParamLimits

0xfee8,	// (0x0005ea1b) cell_ituss_key_pane_g

0x2c22,	// (0x00051755) cell_ituss_key_t1_ParamLimits

0x2c22,	// (0x00051755) cell_ituss_key_t1

0x2c5c,	// (0x0005178f) cell_ituss_key_t2_ParamLimits

0x2c5c,	// (0x0005178f) cell_ituss_key_t2

0x2c8d,	// (0x000517c0) cell_ituss_key_t3_ParamLimits

0x2c8d,	// (0x000517c0) cell_ituss_key_t3

0x2c5c,	// (0x0005178f) cell_ituss_key_t4_ParamLimits

0x2c5c,	// (0x0005178f) cell_ituss_key_t4

0x0004,

0xfeef,	// (0x0005ea22) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x0005ea22) cell_ituss_key_t

0xac26,	// (0x00059759) cell_vkbss_key_3p_pane_g1

0xac2e,	// (0x00059761) cell_vkbss_key_3p_pane_g2

0xac36,	// (0x00059769) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefa,	// (0x0005ea2d) cell_vkbss_key_3p_pane_g

0x0298,	// (0x0004edcb) bg_popup_fep_char_preview_window_cp02

0x2cd0,	// (0x00051803) popup_fep_char_pre_window_t1

0xf2a6,	// (0x0005ddd9) main_ai5_sk_pane

0xa727,	// (0x0005925a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa733,	// (0x00059266) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa748,	// (0x0005927b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa754,	// (0x00059287) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecc,	// (0x0005e9ff) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa760,	// (0x00059293) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4014,	// (0x00052b47) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf545,	// (0x0005e078) main_ai5_sk_pane_g1

0x5988,	// (0x000544bb) popup_query_code_window_g1

0xab4c,	// (0x0005967f) popup_fep_vkb_icf_pane

0xab60,	// (0x00059693) popup_fep_vtchi_icf_pane

0xac47,	// (0x0005977a) bg_icf_pane

0xac53,	// (0x00059786) list_vkb_icf_pane

0xac5f,	// (0x00059792) bg_icf_pane_cp01

0xac72,	// (0x000597a5) vtchi_icf_list_pane

0xac82,	// (0x000597b5) list_vkb_icf_pane_t1_ParamLimits

0xac82,	// (0x000597b5) list_vkb_icf_pane_t1

0xac9a,	// (0x000597cd) vtchi_icf_list_pane_t1_ParamLimits

0xac9a,	// (0x000597cd) vtchi_icf_list_pane_t1

0xab36,	// (0x00059669) popup_fep_ituss_window_ParamLimits

0xab60,	// (0x00059693) popup_fep_vtchi_icf_pane_ParamLimits

0xab86,	// (0x000596b9) ituss_keypad_pane_ParamLimits

0x2bb7,	// (0x000516ea) ituss_sks_pane

0xac47,	// (0x0005977a) bg_icf_pane_ParamLimits

0xab12,	// (0x00059645) icf_edit_indi_pane_ParamLimits

0xab12,	// (0x00059645) icf_edit_indi_pane

0xac53,	// (0x00059786) list_vkb_icf_pane_ParamLimits

0xac5f,	// (0x00059792) bg_icf_pane_cp01_ParamLimits

0xab21,	// (0x00059654) icf_edit_indi_pane_cp01_ParamLimits

0xab21,	// (0x00059654) icf_edit_indi_pane_cp01

0xac7a,	// (0x000597ad) vtchi_query_pane

0x7ced,	// (0x00056820) icf_edit_indi_pane_g1_ParamLimits

0x7ced,	// (0x00056820) icf_edit_indi_pane_g1

0xad13,	// (0x00059846) icf_edit_indi_pane_g2_ParamLimits

0xad13,	// (0x00059846) icf_edit_indi_pane_g2

0x0001,

0xff12,	// (0x0005ea45) icf_edit_indi_pane_g_ParamLimits

0xff12,	// (0x0005ea45) icf_edit_indi_pane_g

0xad22,	// (0x00059855) icf_edit_indi_pane_t1

0xacbc,	// (0x000597ef) bg_input_focus_pane_cp042

0x3f37,	// (0x00052a6a) vtchi_button_pane

0xacc5,	// (0x000597f8) vtchi_query_pane_t1

0xacd3,	// (0x00059806) vtchi_query_pane_t2

0xace1,	// (0x00059814) vtchi_query_pane_t3

0x0002,

0xff01,	// (0x0005ea34) vtchi_query_pane_t

0x0298,	// (0x0004edcb) bg_button_pane_cp13

0xacef,	// (0x00059822) vtchi_button_pane_g1

0x2cdf,	// (0x00051812) ituss_sks_pane_g1

0x2cea,	// (0x0005181d) ituss_sks_pane_g2

0x0001,

0xff08,	// (0x0005ea3b) ituss_sks_pane_g

0xacf7,	// (0x0005982a) ituss_sks_pane_t1

0xad05,	// (0x00059838) ituss_sks_pane_t2

0x0001,

0xff0d,	// (0x0005ea40) ituss_sks_pane_t

0x74c9,	// (0x00055ffc) indicator_nsta_pane_cp_g1

0x74d2,	// (0x00056005) indicator_nsta_pane_cp_g2

0x74da,	// (0x0005600d) indicator_nsta_pane_cp_g3

0x74e2,	// (0x00056015) indicator_nsta_pane_cp_g4

0x74ea,	// (0x0005601d) indicator_nsta_pane_cp_g5

0x74ea,	// (0x0005601d) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x0005e5dd) indicator_nsta_pane_cp_g

0xf0bb,	// (0x0005dbee) cell_graphic2_pane_t2_ParamLimits

0xf0bb,	// (0x0005dbee) cell_graphic2_pane_t2

0x0001,

0xfdc3,	// (0x0005e8f6) cell_graphic2_pane_t_ParamLimits

0xfdc3,	// (0x0005e8f6) cell_graphic2_pane_t

0xf0ee,	// (0x0005dc21) cell_graphic2_control_pane_t1

0xd471,	// (0x0005bfa4) signal_pane_g3_ParamLimits

0xd471,	// (0x0005bfa4) signal_pane_g3

0xd485,	// (0x0005bfb8) signal_pane_g4_ParamLimits

0xd485,	// (0x0005bfb8) signal_pane_g4

0xaafc,	// (0x0005962f) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xaafc,	// (0x0005962f) cell_ai5_widget_list_row_pane_t3

0xac14,	// (0x00059747) cell_ituss_key_pane_t1_ParamLimits

0xac14,	// (0x00059747) cell_ituss_key_pane_t1

0x55ba,	// (0x000540ed) form_field_data_wide_pane_vc_t2_ParamLimits

0x55ba,	// (0x000540ed) form_field_data_wide_pane_vc_t2

0x55ce,	// (0x00054101) form_field_data_wide_pane_vc_t3_ParamLimits

0x55ce,	// (0x00054101) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0005e337) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0005e337) form_field_data_wide_pane_vc_t

0x7195,	// (0x00055cc8) form_field_slider_wide_pane_vc_t3_ParamLimits

0x7195,	// (0x00055cc8) form_field_slider_wide_pane_vc_t3

0x726f,	// (0x00055da2) form_field_popup_wide_pane_vc_t2_ParamLimits

0x726f,	// (0x00055da2) form_field_popup_wide_pane_vc_t2

0x7286,	// (0x00055db9) form_field_popup_wide_pane_vc_t3_ParamLimits

0x7286,	// (0x00055db9) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x0005e5cc) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x0005e5cc) form_field_popup_wide_pane_vc_t

0xcdb8,	// (0x0005b8eb) aid_fshwr2_btn_pane_ParamLimits

0xcdc9,	// (0x0005b8fc) aid_fshwr2_syb_pane_ParamLimits

0xcdda,	// (0x0005b90d) aid_fshwr2_txt_pane_ParamLimits

0x223a,	// (0x00050d6d) fshwr2_bg_pane_ParamLimits

0xcde6,	// (0x0005b919) fshwr2_func_candi_pane_ParamLimits

0xce05,	// (0x0005b938) fshwr2_hwr_syb_pane_ParamLimits

0xce20,	// (0x0005b953) fshwr2_icf_pane_ParamLimits

0x3276,	// (0x00051da9) list_double_graphic_pane_vc_g4_ParamLimits

0x3276,	// (0x00051da9) list_double_graphic_pane_vc_g4

0x2c16,	// (0x00051749) cell_ituss_key_pane_g3_ParamLimits

0x2c16,	// (0x00051749) cell_ituss_key_pane_g3

0x2cbe,	// (0x000517f1) cell_ituss_key_t5_ParamLimits

0x2cbe,	// (0x000517f1) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large

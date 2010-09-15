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

#include "aknlayoutscalable_elaf_pqp_av_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0002a193 };

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
0xd993,	// (0x00037b26) Screen

0xd99d,	// (0x00037b30) application_window_ParamLimits

0xd99d,	// (0x00037b30) application_window

0xa0a9,	// (0x0003423c) screen_g1

0xd9ab,	// (0x00037b3e) area_bottom_pane_ParamLimits

0xd9ab,	// (0x00037b3e) area_bottom_pane

0xa0b3,	// (0x00034246) area_top_pane_ParamLimits

0xa0b3,	// (0x00034246) area_top_pane

0x757d,	// (0x00031710) main_pane_ParamLimits

0x757d,	// (0x00031710) main_pane

0xa12b,	// (0x000342be) misc_graphics

0xece0,	// (0x00038e73) battery_pane_ParamLimits

0xece0,	// (0x00038e73) battery_pane

0xbc6b,	// (0x00035dfe) bg_status_flat_pane_g8

0xbc73,	// (0x00035e06) bg_status_flat_pane_g9

0xb3a6,	// (0x00035539) context_pane_ParamLimits

0xb3a6,	// (0x00035539) context_pane

0xee18,	// (0x00038fab) navi_pane_ParamLimits

0xee18,	// (0x00038fab) navi_pane

0xee84,	// (0x00039017) signal_pane_ParamLimits

0xee84,	// (0x00039017) signal_pane

0x0008,

0xf852,	// (0x000399e5) bg_status_flat_pane_g

0xeee5,	// (0x00039078) status_pane_g1_ParamLimits

0xeee5,	// (0x00039078) status_pane_g1

0xeef1,	// (0x00039084) status_pane_g2_ParamLimits

0xeef1,	// (0x00039084) status_pane_g2

0xb40c,	// (0x0003559f) status_pane_g3_ParamLimits

0xb40c,	// (0x0003559f) status_pane_g3

0x0004,

0xf780,	// (0x00039913) status_pane_g_ParamLimits

0xf780,	// (0x00039913) status_pane_g

0xeefd,	// (0x00039090) title_pane_ParamLimits

0xeefd,	// (0x00039090) title_pane

0xef3a,	// (0x000390cd) uni_indicator_pane_ParamLimits

0xef3a,	// (0x000390cd) uni_indicator_pane

0xb2f1,	// (0x00035484) bg_list_pane_ParamLimits

0xb2f1,	// (0x00035484) bg_list_pane

0x7e4a,	// (0x00031fdd) find_pane

0xec83,	// (0x00038e16) listscroll_app_pane_ParamLimits

0xec83,	// (0x00038e16) listscroll_app_pane

0xb311,	// (0x000354a4) listscroll_form_pane

0x7e52,	// (0x00031fe5) listscroll_gen_pane_ParamLimits

0x7e52,	// (0x00031fe5) listscroll_gen_pane

0x7e67,	// (0x00031ffa) listscroll_set_pane

0xe968,	// (0x00038afb) main_idle_act_pane

0xb10f,	// (0x000352a2) main_idle_trad_pane

0xb10f,	// (0x000352a2) main_list_empty_pane

0xb32b,	// (0x000354be) main_midp_pane

0xb337,	// (0x000354ca) main_pane_g1_ParamLimits

0xb337,	// (0x000354ca) main_pane_g1

0x7e6f,	// (0x00032002) popup_ai_message_window_ParamLimits

0x7e6f,	// (0x00032002) popup_ai_message_window

0x7f05,	// (0x00032098) popup_fep_china_uni_window_ParamLimits

0x7f05,	// (0x00032098) popup_fep_china_uni_window

0x7f43,	// (0x000320d6) popup_fep_japan_candidate_window_ParamLimits

0x7f43,	// (0x000320d6) popup_fep_japan_candidate_window

0x7f61,	// (0x000320f4) popup_fep_japan_predictive_window_ParamLimits

0x7f61,	// (0x000320f4) popup_fep_japan_predictive_window

0x7f8d,	// (0x00032120) popup_find_window

0x7f9a,	// (0x0003212d) popup_grid_graphic_window_ParamLimits

0x7f9a,	// (0x0003212d) popup_grid_graphic_window

0x7fb8,	// (0x0003214b) popup_large_graphic_colour_window

0x7fda,	// (0x0003216d) popup_menu_window_ParamLimits

0x7fda,	// (0x0003216d) popup_menu_window

0x8112,	// (0x000322a5) popup_note_image_window

0x8100,	// (0x00032293) popup_note_wait_window_ParamLimits

0x8100,	// (0x00032293) popup_note_wait_window

0x8100,	// (0x00032293) popup_note_window_ParamLimits

0x8100,	// (0x00032293) popup_note_window

0x8166,	// (0x000322f9) popup_query_code_window_ParamLimits

0x8166,	// (0x000322f9) popup_query_code_window

0x8178,	// (0x0003230b) popup_query_data_code_window_ParamLimits

0x8178,	// (0x0003230b) popup_query_data_code_window

0x818d,	// (0x00032320) popup_query_data_window_ParamLimits

0x818d,	// (0x00032320) popup_query_data_window

0x81a3,	// (0x00032336) popup_query_sat_info_window_ParamLimits

0x81a3,	// (0x00032336) popup_query_sat_info_window

0x81d4,	// (0x00032367) popup_snote_single_graphic_window_ParamLimits

0x81d4,	// (0x00032367) popup_snote_single_graphic_window

0x81d4,	// (0x00032367) popup_snote_single_text_window_ParamLimits

0x81d4,	// (0x00032367) popup_snote_single_text_window

0x81e7,	// (0x0003237a) popup_sub_window_general

0x82eb,	// (0x0003247e) popup_window_general_ParamLimits

0x82eb,	// (0x0003247e) popup_window_general

0xb345,	// (0x000354d8) power_save_pane

0x7ce2,	// (0x00031e75) control_pane_g1_ParamLimits

0x7ce2,	// (0x00031e75) control_pane_g1

0x7d03,	// (0x00031e96) control_pane_g2_ParamLimits

0x7d03,	// (0x00031e96) control_pane_g2

0xb2e3,	// (0x00035476) control_pane_g3_ParamLimits

0xb2e3,	// (0x00035476) control_pane_g3

0x0007,

0xf768,	// (0x000398fb) control_pane_g_ParamLimits

0xf768,	// (0x000398fb) control_pane_g

0x7d45,	// (0x00031ed8) control_pane_t1_ParamLimits

0x7d45,	// (0x00031ed8) control_pane_t1

0x7d99,	// (0x00031f2c) control_pane_t2_ParamLimits

0x7d99,	// (0x00031f2c) control_pane_t2

0x0002,

0xf779,	// (0x0003990c) control_pane_t_ParamLimits

0xf779,	// (0x0003990c) control_pane_t

0xb23e,	// (0x000353d1) navi_navi_volume_pane_cp1

0xb246,	// (0x000353d9) status_small_icon_pane

0xb24e,	// (0x000353e1) status_small_pane_g1_ParamLimits

0xb24e,	// (0x000353e1) status_small_pane_g1

0xb282,	// (0x00035415) status_small_pane_g2_ParamLimits

0xb282,	// (0x00035415) status_small_pane_g2

0xb28e,	// (0x00035421) status_small_pane_g3_ParamLimits

0xb28e,	// (0x00035421) status_small_pane_g3

0xec28,	// (0x00038dbb) status_small_pane_g4_ParamLimits

0xec28,	// (0x00038dbb) status_small_pane_g4

0xec34,	// (0x00038dc7) status_small_pane_g5_ParamLimits

0xec34,	// (0x00038dc7) status_small_pane_g5

0xb29a,	// (0x0003542d) status_small_pane_g6_ParamLimits

0xb29a,	// (0x0003542d) status_small_pane_g6

0x0007,

0xf757,	// (0x000398ea) status_small_pane_g_ParamLimits

0xf757,	// (0x000398ea) status_small_pane_g

0xb2c9,	// (0x0003545c) status_small_pane_t1

0xec48,	// (0x00038ddb) status_small_wait_pane_ParamLimits

0xec48,	// (0x00038ddb) status_small_wait_pane

0xeab8,	// (0x00038c4b) aid_levels_signal_ParamLimits

0xeab8,	// (0x00038c4b) aid_levels_signal

0xeac9,	// (0x00038c5c) signal_pane_g1_ParamLimits

0xeac9,	// (0x00038c5c) signal_pane_g1

0xeadf,	// (0x00038c72) signal_pane_g2_ParamLimits

0xeadf,	// (0x00038c72) signal_pane_g2

0x0003,

0xf6e8,	// (0x0003987b) signal_pane_g_ParamLimits

0xf6e8,	// (0x0003987b) signal_pane_g

0xacad,	// (0x00034e40) context_pane_g1

0xda10,	// (0x00037ba3) title_pane_g1

0xda3a,	// (0x00037bcd) title_pane_t1

0xa141,	// (0x000342d4) title_pane_t2

0xa167,	// (0x000342fa) title_pane_t3

0x0002,

0xf532,	// (0x000396c5) title_pane_t

0xef50,	// (0x000390e3) aid_levels_battery_ParamLimits

0xef50,	// (0x000390e3) aid_levels_battery

0xef63,	// (0x000390f6) battery_pane_g1_ParamLimits

0xef63,	// (0x000390f6) battery_pane_g1

0xef78,	// (0x0003910b) battery_pane_g2_ParamLimits

0xef78,	// (0x0003910b) battery_pane_g2

0x0001,

0xf78b,	// (0x0003991e) battery_pane_g_ParamLimits

0xf78b,	// (0x0003991e) battery_pane_g

0xf0d4,	// (0x00039267) uni_indicator_pane_g1

0xf0e8,	// (0x0003927b) uni_indicator_pane_g2

0xf0fd,	// (0x00039290) uni_indicator_pane_g3

0x0005,

0xf8fa,	// (0x00039a8d) uni_indicator_pane_g

0xa86a,	// (0x000349fd) navi_icon_pane_ParamLimits

0xa86a,	// (0x000349fd) navi_icon_pane

0xa12b,	// (0x000342be) navi_midp_pane

0xa12b,	// (0x000342be) navi_navi_pane

0xa86a,	// (0x000349fd) navi_text_pane_ParamLimits

0xa86a,	// (0x000349fd) navi_text_pane

0xa0a9,	// (0x0003423c) status_small_wait_pane_g1

0xa47c,	// (0x0003460f) status_small_wait_pane_g2

0x0001,

0xf8f5,	// (0x00039a88) status_small_wait_pane_g

0xc213,	// (0x000363a6) navi_navi_icon_text_pane

0xc21b,	// (0x000363ae) navi_navi_pane_g1_ParamLimits

0xc21b,	// (0x000363ae) navi_navi_pane_g1

0xc22d,	// (0x000363c0) navi_navi_pane_g2_ParamLimits

0xc22d,	// (0x000363c0) navi_navi_pane_g2

0x0001,

0xf8c3,	// (0x00039a56) navi_navi_pane_g_ParamLimits

0xf8c3,	// (0x00039a56) navi_navi_pane_g

0xc23f,	// (0x000363d2) navi_navi_tabs_pane

0xc213,	// (0x000363a6) navi_navi_text_pane

0xc213,	// (0x000363a6) navi_navi_volume_pane

0xc1ef,	// (0x00036382) navi_text_pane_t1

0xc1e3,	// (0x00036376) navi_icon_pane_g1

0xc137,	// (0x000362ca) navi_navi_text_pane_t1

0x8552,	// (0x000326e5) navi_navi_volume_pane_g1

0x855a,	// (0x000326ed) volume_small_pane

0xf021,	// (0x000391b4) navi_navi_icon_text_pane_g1

0xf029,	// (0x000391bc) navi_navi_icon_text_pane_t1

0xbcb3,	// (0x00035e46) navi_tabs_2_long_pane

0xbcb3,	// (0x00035e46) navi_tabs_2_pane

0xbcb3,	// (0x00035e46) navi_tabs_3_long_pane

0xbcb3,	// (0x00035e46) navi_tabs_3_pane

0xbcb3,	// (0x00035e46) navi_tabs_4_pane

0x8532,	// (0x000326c5) tabs_2_active_pane_ParamLimits

0x8532,	// (0x000326c5) tabs_2_active_pane

0x8542,	// (0x000326d5) tabs_2_passive_pane_ParamLimits

0x8542,	// (0x000326d5) tabs_2_passive_pane

0x8500,	// (0x00032693) tabs_3_active_pane_ParamLimits

0x8500,	// (0x00032693) tabs_3_active_pane

0x8510,	// (0x000326a3) tabs_3_passive_pane_ParamLimits

0x8510,	// (0x000326a3) tabs_3_passive_pane

0x8521,	// (0x000326b4) tabs_3_passive_pane_cp_ParamLimits

0x8521,	// (0x000326b4) tabs_3_passive_pane_cp

0x84bc,	// (0x0003264f) tabs_4_active_pane_ParamLimits

0x84bc,	// (0x0003264f) tabs_4_active_pane

0x84cd,	// (0x00032660) tabs_4_passive_pane_ParamLimits

0x84cd,	// (0x00032660) tabs_4_passive_pane

0x84de,	// (0x00032671) tabs_4_passive_pane_cp_ParamLimits

0x84de,	// (0x00032671) tabs_4_passive_pane_cp

0x84ef,	// (0x00032682) tabs_4_passive_pane_cp2_ParamLimits

0x84ef,	// (0x00032682) tabs_4_passive_pane_cp2

0x849c,	// (0x0003262f) tabs_2_long_active_pane_ParamLimits

0x849c,	// (0x0003262f) tabs_2_long_active_pane

0x84ac,	// (0x0003263f) tabs_2_long_passive_pane_ParamLimits

0x84ac,	// (0x0003263f) tabs_2_long_passive_pane

0x8467,	// (0x000325fa) tabs_3_long_active_pane_ParamLimits

0x8467,	// (0x000325fa) tabs_3_long_active_pane

0x8478,	// (0x0003260b) tabs_3_long_passive_pane_ParamLimits

0x8478,	// (0x0003260b) tabs_3_long_passive_pane

0x848b,	// (0x0003261e) tabs_3_long_passive_pane_cp_ParamLimits

0x848b,	// (0x0003261e) tabs_3_long_passive_pane_cp

0x840d,	// (0x000325a0) volume_small_pane_g1

0x8416,	// (0x000325a9) volume_small_pane_g2

0x841f,	// (0x000325b2) volume_small_pane_g3

0x8428,	// (0x000325bb) volume_small_pane_g4

0x8431,	// (0x000325c4) volume_small_pane_g5

0x843a,	// (0x000325cd) volume_small_pane_g6

0x8443,	// (0x000325d6) volume_small_pane_g7

0x844c,	// (0x000325df) volume_small_pane_g8

0x8455,	// (0x000325e8) volume_small_pane_g9

0x845e,	// (0x000325f1) volume_small_pane_g10

0x0009,

0xf88f,	// (0x00039a22) volume_small_pane_g

0xa179,	// (0x0003430c) bg_active_tab_pane_cp2_ParamLimits

0xa179,	// (0x0003430c) bg_active_tab_pane_cp2

0xa187,	// (0x0003431a) tabs_3_active_pane_g1

0xdaa2,	// (0x00037c35) tabs_3_active_pane_t1

0xa179,	// (0x0003430c) bg_passive_tab_pane_cp2_ParamLimits

0xa179,	// (0x0003430c) bg_passive_tab_pane_cp2

0xa187,	// (0x0003431a) tabs_3_passive_pane_g1

0xdaa2,	// (0x00037c35) tabs_3_passive_pane_t1

0xa179,	// (0x0003430c) bg_active_tab_pane_cp3_ParamLimits

0xa179,	// (0x0003430c) bg_active_tab_pane_cp3

0xdab4,	// (0x00037c47) tabs_4_active_pane_g1

0xdabc,	// (0x00037c4f) tabs_4_active_pane_t1

0xa179,	// (0x0003430c) bg_passive_tab_pane_cp3_ParamLimits

0xa179,	// (0x0003430c) bg_passive_tab_pane_cp3

0xdab4,	// (0x00037c47) tabs_4_1_passive_pane_g1

0xdabc,	// (0x00037c4f) tabs_4_1_passive_pane_t1

0xb32b,	// (0x000354be) list_highlight_pane_cp2

0xf146,	// (0x000392d9) list_set_pane_ParamLimits

0xf146,	// (0x000392d9) list_set_pane

0xf1d4,	// (0x00039367) main_pane_set_t1_ParamLimits

0xf1d4,	// (0x00039367) main_pane_set_t1

0xf1f4,	// (0x00039387) main_pane_set_t2_ParamLimits

0xf1f4,	// (0x00039387) main_pane_set_t2

0xf206,	// (0x00039399) main_pane_set_t3_ParamLimits

0xf206,	// (0x00039399) main_pane_set_t3

0xf218,	// (0x000393ab) main_pane_set_t4_ParamLimits

0xf218,	// (0x000393ab) main_pane_set_t4

0x0003,

0xf95f,	// (0x00039af2) main_pane_set_t_ParamLimits

0xf95f,	// (0x00039af2) main_pane_set_t

0xf22a,	// (0x000393bd) setting_code_pane

0xf232,	// (0x000393c5) setting_slider_graphic_pane

0xf232,	// (0x000393c5) setting_slider_pane

0xf232,	// (0x000393c5) setting_text_pane

0xf232,	// (0x000393c5) setting_volume_pane

0x777c,	// (0x0003190f) volume_set_pane

0xa179,	// (0x0003430c) bg_set_opt_pane_cp

0x7784,	// (0x00031917) setting_slider_pane_t1

0x779a,	// (0x0003192d) setting_slider_pane_t2

0x77b3,	// (0x00031946) setting_slider_pane_t3

0x0002,

0xf539,	// (0x000396cc) setting_slider_pane_t

0x77ca,	// (0x0003195d) slider_set_pane

0xa12b,	// (0x000342be) bg_set_opt_pane_cp2

0xa18f,	// (0x00034322) setting_slider_graphic_pane_g1

0x77e0,	// (0x00031973) setting_slider_graphic_pane_t1

0x77ef,	// (0x00031982) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x000396d3) setting_slider_graphic_pane_t

0x77fe,	// (0x00031991) slider_set_pane_cp

0xa12b,	// (0x000342be) input_focus_pane_cp1

0xc660,	// (0x000367f3) list_set_text_pane

0xa0a9,	// (0x0003423c) setting_text_pane_g1

0xa12b,	// (0x000342be) input_focus_pane_cp2

0xa0a9,	// (0x0003423c) setting_code_pane_g1

0xa198,	// (0x0003432b) setting_code_pane_t1

0x66a4,	// (0x00030837) set_text_pane_t1_ParamLimits

0x66a4,	// (0x00030837) set_text_pane_t1

0xa7b8,	// (0x0003494b) set_opt_bg_pane_g1

0xa7c0,	// (0x00034953) set_opt_bg_pane_g2

0xf112,	// (0x000392a5) set_opt_bg_pane_g3

0xa7d0,	// (0x00034963) set_opt_bg_pane_g4

0xa7d8,	// (0x0003496b) set_opt_bg_pane_g5

0xa7e0,	// (0x00034973) set_opt_bg_pane_g6

0xf11a,	// (0x000392ad) set_opt_bg_pane_g7

0xf122,	// (0x000392b5) set_opt_bg_pane_g8

0xf12a,	// (0x000392bd) set_opt_bg_pane_g9

0x0008,

0xf94c,	// (0x00039adf) set_opt_bg_pane_g

0xc653,	// (0x000367e6) slider_set_pane_g1

0x85c7,	// (0x0003275a) slider_set_pane_g2

0x0006,

0xf93d,	// (0x00039ad0) slider_set_pane_g

0x8563,	// (0x000326f6) volume_set_pane_g1

0x856b,	// (0x000326fe) volume_set_pane_g2

0x8573,	// (0x00032706) volume_set_pane_g3

0x857b,	// (0x0003270e) volume_set_pane_g4

0x8583,	// (0x00032716) volume_set_pane_g5

0x858b,	// (0x0003271e) volume_set_pane_g6

0x8593,	// (0x00032726) volume_set_pane_g7

0x859b,	// (0x0003272e) volume_set_pane_g8

0x85a3,	// (0x00032736) volume_set_pane_g9

0x85ab,	// (0x0003273e) volume_set_pane_g10

0x0009,

0xf915,	// (0x00039aa8) volume_set_pane_g

0xdace,	// (0x00037c61) indicator_pane_ParamLimits

0xdace,	// (0x00037c61) indicator_pane

0xdada,	// (0x00037c6d) main_idle_pane_g2_ParamLimits

0xdada,	// (0x00037c6d) main_idle_pane_g2

0xdafe,	// (0x00037c91) main_pane_idle_g1_ParamLimits

0xdafe,	// (0x00037c91) main_pane_idle_g1

0xa1a6,	// (0x00034339) popup_clock_digital_analogue_window_ParamLimits

0xa1a6,	// (0x00034339) popup_clock_digital_analogue_window

0xdb0b,	// (0x00037c9e) soft_indicator_pane_ParamLimits

0xdb0b,	// (0x00037c9e) soft_indicator_pane

0xdb17,	// (0x00037caa) wallpaper_pane_ParamLimits

0xdb17,	// (0x00037caa) wallpaper_pane

0xa0a9,	// (0x0003423c) wallpaper_pane_g1

0xdb23,	// (0x00037cb6) indicator_pane_g1_ParamLimits

0xdb23,	// (0x00037cb6) indicator_pane_g1

0xc755,	// (0x000368e8) navi_navi_icon_text_pane_srt_g1

0xa1d4,	// (0x00034367) soft_indicator_pane_t1

0xa1ee,	// (0x00034381) aid_ps_area_pane

0xdb2f,	// (0x00037cc2) aid_ps_clock_pane

0xa1ff,	// (0x00034392) aid_ps_indicator_pane

0xa20b,	// (0x0003439e) indicator_ps_pane_ParamLimits

0xa20b,	// (0x0003439e) indicator_ps_pane

0xa21a,	// (0x000343ad) power_save_pane_g1_ParamLimits

0xa21a,	// (0x000343ad) power_save_pane_g1

0xa226,	// (0x000343b9) power_save_pane_g2_ParamLimits

0xa226,	// (0x000343b9) power_save_pane_g2

0x74f9,	// (0x0003168c) aid_navinavi_width_pane

0xa1ee,	// (0x00034381) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x000396d8) power_save_pane_g_ParamLimits

0xf545,	// (0x000396d8) power_save_pane_g

0xa234,	// (0x000343c7) power_save_pane_t1_ParamLimits

0xa234,	// (0x000343c7) power_save_pane_t1

0xdb2f,	// (0x00037cc2) aid_ps_clock_pane_ParamLimits

0xa1ff,	// (0x00034392) aid_ps_indicator_pane_ParamLimits

0xa246,	// (0x000343d9) power_save_pane_t4_ParamLimits

0xa246,	// (0x000343d9) power_save_pane_t4

0x0001,

0xf54a,	// (0x000396dd) power_save_pane_t_ParamLimits

0xf54a,	// (0x000396dd) power_save_pane_t

0xa270,	// (0x00034403) power_save_t3_ParamLimits

0xa270,	// (0x00034403) power_save_t3

0xa25b,	// (0x000343ee) power_save_t2_ParamLimits

0xa25b,	// (0x000343ee) power_save_t2

0xa285,	// (0x00034418) indicator_ps_pane_g1

0xdb3b,	// (0x00037cce) ai_gene_pane_ParamLimits

0xdb3b,	// (0x00037cce) ai_gene_pane

0xdb47,	// (0x00037cda) ai_links_pane_ParamLimits

0xdb47,	// (0x00037cda) ai_links_pane

0xdb53,	// (0x00037ce6) indicator_pane_cp1_ParamLimits

0xdb53,	// (0x00037ce6) indicator_pane_cp1

0xdb5f,	// (0x00037cf2) main_pane_idle_g1_cp_ParamLimits

0xdb5f,	// (0x00037cf2) main_pane_idle_g1_cp

0xa28e,	// (0x00034421) popup_ai_links_title_window

0xdb6b,	// (0x00037cfe) soft_indicator_pane_cp1_ParamLimits

0xdb6b,	// (0x00037cfe) soft_indicator_pane_cp1

0xc4a9,	// (0x0003663c) ai_links_pane_g1

0xc4b2,	// (0x00036645) grid_ai_links_pane

0xf0cb,	// (0x0003925e) ai_gene_pane_1

0xc497,	// (0x0003662a) ai_gene_pane_2

0xc4a0,	// (0x00036633) list_highlight_pane_cp4

0xf0af,	// (0x00039242) cell_ai_link_pane_ParamLimits

0xf0af,	// (0x00039242) cell_ai_link_pane

0xc48f,	// (0x00036622) cell_ai_link_pane_g1

0xa47c,	// (0x0003460f) cell_ai_link_pane_g2

0x0001,

0xf8f0,	// (0x00039a83) cell_ai_link_pane_g

0xa12b,	// (0x000342be) grid_highlight_cp2

0xa12b,	// (0x000342be) bg_popup_sub_pane_cp1

0xa2a5,	// (0x00034438) popup_ai_links_title_window_t1

0xc3e1,	// (0x00036574) ai_gene_pane_1_g1_ParamLimits

0xc3e1,	// (0x00036574) ai_gene_pane_1_g1

0xc3ed,	// (0x00036580) ai_gene_pane_1_g2_ParamLimits

0xc3ed,	// (0x00036580) ai_gene_pane_1_g2

0x0001,

0xf8e6,	// (0x00039a79) ai_gene_pane_1_g_ParamLimits

0xf8e6,	// (0x00039a79) ai_gene_pane_1_g

0xc3fa,	// (0x0003658d) ai_gene_pane_1_t1_ParamLimits

0xc3fa,	// (0x0003658d) ai_gene_pane_1_t1

0xc42e,	// (0x000365c1) grid_ai_soft_ind_pane

0xc3cc,	// (0x0003655f) ai_gene_pane_2_t1_ParamLimits

0xc3cc,	// (0x0003655f) ai_gene_pane_2_t1

0xdb77,	// (0x00037d0a) main_pane_empty_t1_ParamLimits

0xdb77,	// (0x00037d0a) main_pane_empty_t1

0xdb94,	// (0x00037d27) main_pane_empty_t2_ParamLimits

0xdb94,	// (0x00037d27) main_pane_empty_t2

0xdbac,	// (0x00037d3f) main_pane_empty_t3_ParamLimits

0xdbac,	// (0x00037d3f) main_pane_empty_t3

0xdbbf,	// (0x00037d52) main_pane_empty_t4_ParamLimits

0xdbbf,	// (0x00037d52) main_pane_empty_t4

0xdbd2,	// (0x00037d65) main_pane_empty_t5_ParamLimits

0xdbd2,	// (0x00037d65) main_pane_empty_t5

0x0004,

0xf54f,	// (0x000396e2) main_pane_empty_t_ParamLimits

0xf54f,	// (0x000396e2) main_pane_empty_t

0xa86a,	// (0x000349fd) bg_popup_window_pane_ParamLimits

0xa86a,	// (0x000349fd) bg_popup_window_pane

0xc146,	// (0x000362d9) find_popup_pane_cp2_ParamLimits

0xc146,	// (0x000362d9) find_popup_pane_cp2

0xc152,	// (0x000362e5) heading_pane_ParamLimits

0xc152,	// (0x000362e5) heading_pane

0xa12b,	// (0x000342be) bg_popup_sub_pane

0xf043,	// (0x000391d6) bg_popup_window_pane_g1_ParamLimits

0xf043,	// (0x000391d6) bg_popup_window_pane_g1

0xf04f,	// (0x000391e2) bg_popup_window_pane_g2_ParamLimits

0xf04f,	// (0x000391e2) bg_popup_window_pane_g2

0xf05b,	// (0x000391ee) bg_popup_window_pane_g3_ParamLimits

0xf05b,	// (0x000391ee) bg_popup_window_pane_g3

0xf067,	// (0x000391fa) bg_popup_window_pane_g4_ParamLimits

0xf067,	// (0x000391fa) bg_popup_window_pane_g4

0xf073,	// (0x00039206) bg_popup_window_pane_g5_ParamLimits

0xf073,	// (0x00039206) bg_popup_window_pane_g5

0xf07f,	// (0x00039212) bg_popup_window_pane_g6_ParamLimits

0xf07f,	// (0x00039212) bg_popup_window_pane_g6

0xf08b,	// (0x0003921e) bg_popup_window_pane_g7_ParamLimits

0xf08b,	// (0x0003921e) bg_popup_window_pane_g7

0xf097,	// (0x0003922a) bg_popup_window_pane_g8_ParamLimits

0xf097,	// (0x0003922a) bg_popup_window_pane_g8

0xf0a3,	// (0x00039236) bg_popup_window_pane_g9_ParamLimits

0xf0a3,	// (0x00039236) bg_popup_window_pane_g9

0xc12b,	// (0x000362be) bg_popup_window_pane_g10_ParamLimits

0xc12b,	// (0x000362be) bg_popup_window_pane_g10

0x0009,

0xf8ae,	// (0x00039a41) bg_popup_window_pane_g_ParamLimits

0xf8ae,	// (0x00039a41) bg_popup_window_pane_g

0xc0e2,	// (0x00036275) bg_popup_heading_pane_ParamLimits

0xc0e2,	// (0x00036275) bg_popup_heading_pane

0x86bd,	// (0x00032850) tabs_4_passive_pane_cp_srt_ParamLimits

0x86bd,	// (0x00032850) tabs_4_passive_pane_cp_srt

0x86cf,	// (0x00032862) tabs_4_passive_pane_srt_ParamLimits

0xc0f6,	// (0x00036289) heading_pane_g2

0x86cf,	// (0x00032862) tabs_4_passive_pane_srt

0xb32b,	// (0x000354be) bg_passive_tab_pane_cp3_srt_ParamLimits

0xb32b,	// (0x000354be) bg_passive_tab_pane_cp3_srt

0xc0fe,	// (0x00036291) heading_pane_t1_ParamLimits

0xc0fe,	// (0x00036291) heading_pane_t1

0xc115,	// (0x000362a8) heading_pane_t2_ParamLimits

0xc115,	// (0x000362a8) heading_pane_t2

0x0001,

0xf8a9,	// (0x00039a3c) heading_pane_t_ParamLimits

0xf8a9,	// (0x00039a3c) heading_pane_t

0xbc33,	// (0x00035dc6) bg_popup_heading_pane_g1

0xbcc4,	// (0x00035e57) bg_popup_heading_pane_g2

0xbccc,	// (0x00035e5f) bg_popup_heading_pane_g3

0xbcd4,	// (0x00035e67) bg_popup_heading_pane_g4

0xbcdc,	// (0x00035e6f) bg_popup_heading_pane_g5

0xbd22,	// (0x00035eb5) bg_popup_heading_pane_g6

0xbd2a,	// (0x00035ebd) bg_popup_heading_pane_g7

0xbd32,	// (0x00035ec5) bg_popup_heading_pane_g8

0xbd3a,	// (0x00035ecd) bg_popup_heading_pane_g9

0x0008,

0xf865,	// (0x000399f8) bg_popup_heading_pane_g

0xb4f4,	// (0x00035687) bg_popup_sub_pane_g1

0xb4fc,	// (0x0003568f) bg_popup_sub_pane_g2

0xb504,	// (0x00035697) bg_popup_sub_pane_g3

0xb50c,	// (0x0003569f) bg_popup_sub_pane_g4

0xb514,	// (0x000356a7) bg_popup_sub_pane_g5

0xb51c,	// (0x000356af) bg_popup_sub_pane_g6

0xb524,	// (0x000356b7) bg_popup_sub_pane_g7

0xb52c,	// (0x000356bf) bg_popup_sub_pane_g8

0xb534,	// (0x000356c7) bg_popup_sub_pane_g9

0x0008,

0xf83f,	// (0x000399d2) bg_popup_sub_pane_g

0xa2b4,	// (0x00034447) bg_popup_window_pane_cp5_ParamLimits

0xa2b4,	// (0x00034447) bg_popup_window_pane_cp5

0xa2d0,	// (0x00034463) popup_note_window_g1_ParamLimits

0xa2d0,	// (0x00034463) popup_note_window_g1

0xa2dc,	// (0x0003446f) popup_note_window_t1_ParamLimits

0xa2dc,	// (0x0003446f) popup_note_window_t1

0xa2f2,	// (0x00034485) popup_note_window_t2_ParamLimits

0xa2f2,	// (0x00034485) popup_note_window_t2

0xa308,	// (0x0003449b) popup_note_window_t3_ParamLimits

0xa308,	// (0x0003449b) popup_note_window_t3

0xa31e,	// (0x000344b1) popup_note_window_t4_ParamLimits

0xa31e,	// (0x000344b1) popup_note_window_t4

0xa346,	// (0x000344d9) popup_note_window_t5_ParamLimits

0xa346,	// (0x000344d9) popup_note_window_t5

0x0004,

0xf55a,	// (0x000396ed) popup_note_window_t_ParamLimits

0xf55a,	// (0x000396ed) popup_note_window_t

0xa390,	// (0x00034523) bg_popup_window_pane_cp6_ParamLimits

0xa390,	// (0x00034523) bg_popup_window_pane_cp6

0xbbaf,	// (0x00035d42) popup_note_image_window_g1_ParamLimits

0xbbaf,	// (0x00035d42) popup_note_image_window_g1

0xbbbb,	// (0x00035d4e) popup_note_image_window_g2_ParamLimits

0xbbbb,	// (0x00035d4e) popup_note_image_window_g2

0x0001,

0xf833,	// (0x000399c6) popup_note_image_window_g_ParamLimits

0xf833,	// (0x000399c6) popup_note_image_window_g

0xbbd4,	// (0x00035d67) popup_note_image_window_t1_ParamLimits

0xbbd4,	// (0x00035d67) popup_note_image_window_t1

0xbbed,	// (0x00035d80) popup_note_image_window_t2_ParamLimits

0xbbed,	// (0x00035d80) popup_note_image_window_t2

0xbc06,	// (0x00035d99) popup_note_image_window_t3_ParamLimits

0xbc06,	// (0x00035d99) popup_note_image_window_t3

0x0002,

0xf838,	// (0x000399cb) popup_note_image_window_t_ParamLimits

0xf838,	// (0x000399cb) popup_note_image_window_t

0xba9a,	// (0x00035c2d) bg_popup_window_pane_cp7_ParamLimits

0xba9a,	// (0x00035c2d) bg_popup_window_pane_cp7

0xbaca,	// (0x00035c5d) popup_note_wait_window_g1_ParamLimits

0xbaca,	// (0x00035c5d) popup_note_wait_window_g1

0xbad6,	// (0x00035c69) popup_note_wait_window_g2_ParamLimits

0xbad6,	// (0x00035c69) popup_note_wait_window_g2

0x0002,

0xf821,	// (0x000399b4) popup_note_wait_window_g_ParamLimits

0xf821,	// (0x000399b4) popup_note_wait_window_g

0xbaee,	// (0x00035c81) popup_note_wait_window_t1_ParamLimits

0xbaee,	// (0x00035c81) popup_note_wait_window_t1

0xbb15,	// (0x00035ca8) popup_note_wait_window_t2_ParamLimits

0xbb15,	// (0x00035ca8) popup_note_wait_window_t2

0xbb32,	// (0x00035cc5) popup_note_wait_window_t3_ParamLimits

0xbb32,	// (0x00035cc5) popup_note_wait_window_t3

0xbb45,	// (0x00035cd8) popup_note_wait_window_t4_ParamLimits

0xbb45,	// (0x00035cd8) popup_note_wait_window_t4

0x0004,

0xf828,	// (0x000399bb) popup_note_wait_window_t_ParamLimits

0xf828,	// (0x000399bb) popup_note_wait_window_t

0xbb6a,	// (0x00035cfd) wait_bar_pane_ParamLimits

0xbb6a,	// (0x00035cfd) wait_bar_pane

0xa12b,	// (0x000342be) wait_anim_pane

0xa12b,	// (0x000342be) wait_border_pane

0xa0a9,	// (0x0003423c) wait_anim_pane_g1

0xa0a9,	// (0x0003423c) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x00039876) wait_anim_pane_g

0xba4a,	// (0x00035bdd) wait_border_pane_g1

0xba53,	// (0x00035be6) wait_border_pane_g2

0xba5c,	// (0x00035bef) wait_border_pane_g3

0x0002,

0xf81a,	// (0x000399ad) wait_border_pane_g

0xb8ba,	// (0x00035a4d) bg_popup_window_pane_cp16_ParamLimits

0xb8ba,	// (0x00035a4d) bg_popup_window_pane_cp16

0xb9ba,	// (0x00035b4d) indicator_popup_pane_cp4_ParamLimits

0xb9ba,	// (0x00035b4d) indicator_popup_pane_cp4

0xb9ce,	// (0x00035b61) popup_query_data_window_t1_ParamLimits

0xb9ce,	// (0x00035b61) popup_query_data_window_t1

0xb9e0,	// (0x00035b73) popup_query_data_window_t2_ParamLimits

0xb9e0,	// (0x00035b73) popup_query_data_window_t2

0xb9f9,	// (0x00035b8c) popup_query_data_window_t3_ParamLimits

0xb9f9,	// (0x00035b8c) popup_query_data_window_t3

0x0002,

0xf813,	// (0x000399a6) popup_query_data_window_t_ParamLimits

0xf813,	// (0x000399a6) popup_query_data_window_t

0xba13,	// (0x00035ba6) query_popup_data_pane_ParamLimits

0xba13,	// (0x00035ba6) query_popup_data_pane

0xba27,	// (0x00035bba) query_popup_data_pane_cp1_ParamLimits

0xba27,	// (0x00035bba) query_popup_data_pane_cp1

0xb8ba,	// (0x00035a4d) bg_popup_window_pane_cp10_ParamLimits

0xb8ba,	// (0x00035a4d) bg_popup_window_pane_cp10

0xb8ec,	// (0x00035a7f) indicator_popup_pane_ParamLimits

0xb8ec,	// (0x00035a7f) indicator_popup_pane

0xb90e,	// (0x00035aa1) popup_query_code_window_t1_ParamLimits

0xb90e,	// (0x00035aa1) popup_query_code_window_t1

0xb928,	// (0x00035abb) popup_query_code_window_t2_ParamLimits

0xb928,	// (0x00035abb) popup_query_code_window_t2

0xb971,	// (0x00035b04) popup_query_code_window_t3_ParamLimits

0xb971,	// (0x00035b04) popup_query_code_window_t3

0x0002,

0xf80c,	// (0x0003999f) popup_query_code_window_t_ParamLimits

0xf80c,	// (0x0003999f) popup_query_code_window_t

0xb9a0,	// (0x00035b33) query_popup_pane_ParamLimits

0xb9a0,	// (0x00035b33) query_popup_pane

0xa390,	// (0x00034523) bg_popup_window_pane_cp15_ParamLimits

0xa390,	// (0x00034523) bg_popup_window_pane_cp15

0xa3ae,	// (0x00034541) indicator_popup_pane_cp1_ParamLimits

0xa3ae,	// (0x00034541) indicator_popup_pane_cp1

0xa3c1,	// (0x00034554) indicator_popup_pane_cp2_ParamLimits

0xa3c1,	// (0x00034554) indicator_popup_pane_cp2

0xa3d4,	// (0x00034567) popup_query_data_code_window_g1_ParamLimits

0xa3d4,	// (0x00034567) popup_query_data_code_window_g1

0xa3e7,	// (0x0003457a) popup_query_data_code_window_t1_ParamLimits

0xa3e7,	// (0x0003457a) popup_query_data_code_window_t1

0xa3f9,	// (0x0003458c) popup_query_data_code_window_t2_ParamLimits

0xa3f9,	// (0x0003458c) popup_query_data_code_window_t2

0xa40b,	// (0x0003459e) popup_query_data_code_window_t3_ParamLimits

0xa40b,	// (0x0003459e) popup_query_data_code_window_t3

0xa421,	// (0x000345b4) popup_query_data_code_window_t4_ParamLimits

0xa421,	// (0x000345b4) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x000396f8) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x000396f8) popup_query_data_code_window_t

0xaf89,	// (0x0003511c) list_single_midp_graphic_pane_g3

0xa439,	// (0x000345cc) query_popup_data_pane_cp2_ParamLimits

0xa44c,	// (0x000345df) query_popup_pane_cp2_ParamLimits

0xa44c,	// (0x000345df) query_popup_pane_cp2

0xa12b,	// (0x000342be) bg_popup_window_pane_cp11

0xb89e,	// (0x00035a31) heading_pane_cp5

0xb8a6,	// (0x00035a39) listscroll_popup_info_pane

0xa12b,	// (0x000342be) input_focus_pane_cp3

0xa45f,	// (0x000345f2) query_popup_pane_t1

0xa46d,	// (0x00034600) list_popup_info_pane_ParamLimits

0xa46d,	// (0x00034600) list_popup_info_pane

0xa47c,	// (0x0003460f) listscroll_popup_info_pane_g1

0xa484,	// (0x00034617) scroll_pane_cp7

0xa48c,	// (0x0003461f) popup_info_list_pane_t1_ParamLimits

0xa48c,	// (0x0003461f) popup_info_list_pane_t1

0xa4a6,	// (0x00034639) popup_info_list_pane_t2_ParamLimits

0xa4a6,	// (0x00034639) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00039701) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00039701) popup_info_list_pane_t

0xa12b,	// (0x000342be) bg_popup_window_pane_cp12

0xc76f,	// (0x00036902) find_popup_pane

0xa179,	// (0x0003430c) bg_popup_window_pane_cp3

0xa4c0,	// (0x00034653) heading_pane_cp3

0xa4cf,	// (0x00034662) listscroll_popup_graphic_pane

0xa12b,	// (0x000342be) bg_popup_window_pane_cp4

0xe8c7,	// (0x00038a5a) heading_pane_cp4

0xa4de,	// (0x00034671) listscroll_popup_colour_pane

0xa4e6,	// (0x00034679) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa4e6,	// (0x00034679) cell_large_graphic_colour_none_popup_pane

0xe8cf,	// (0x00038a62) grid_large_graphic_colour_popup_pane_ParamLimits

0xe8cf,	// (0x00038a62) grid_large_graphic_colour_popup_pane

0xa4f6,	// (0x00034689) listscroll_popup_colour_pane_g1_ParamLimits

0xa4f6,	// (0x00034689) listscroll_popup_colour_pane_g1

0xa50d,	// (0x000346a0) listscroll_popup_colour_pane_g2_ParamLimits

0xa50d,	// (0x000346a0) listscroll_popup_colour_pane_g2

0xa524,	// (0x000346b7) listscroll_popup_colour_pane_g3_ParamLimits

0xa524,	// (0x000346b7) listscroll_popup_colour_pane_g3

0xe8eb,	// (0x00038a7e) listscroll_popup_colour_pane_g4_ParamLimits

0xe8eb,	// (0x00038a7e) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00039706) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00039706) listscroll_popup_colour_pane_g

0xa534,	// (0x000346c7) scroll_pane_cp6_ParamLimits

0xa534,	// (0x000346c7) scroll_pane_cp6

0xe8fa,	// (0x00038a8d) cell_large_graphic_colour_popup_pane_ParamLimits

0xe8fa,	// (0x00038a8d) cell_large_graphic_colour_popup_pane

0xa546,	// (0x000346d9) cell_large_graphic_colour_none_popup_pane_t1

0xa12b,	// (0x000342be) grid_highlight_pane_cp5

0xa555,	// (0x000346e8) cell_large_graphic_colour_popup_pane_g1

0xa55d,	// (0x000346f0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0003970f) cell_large_graphic_colour_popup_pane_g

0xa565,	// (0x000346f8) cell_large_graphic_colour_popup_pane_g2_copy1

0xa56e,	// (0x00034701) grid_highlight_pane_cp4

0xa576,	// (0x00034709) bg_popup_window_pane_cp8_ParamLimits

0xa576,	// (0x00034709) bg_popup_window_pane_cp8

0xa591,	// (0x00034724) popup_snote_single_text_window_g1_ParamLimits

0xa591,	// (0x00034724) popup_snote_single_text_window_g1

0xa5a3,	// (0x00034736) popup_snote_single_text_window_t1_ParamLimits

0xa5a3,	// (0x00034736) popup_snote_single_text_window_t1

0xa5b6,	// (0x00034749) popup_snote_single_text_window_t2_ParamLimits

0xa5b6,	// (0x00034749) popup_snote_single_text_window_t2

0xa5c9,	// (0x0003475c) popup_snote_single_text_window_t3_ParamLimits

0xa5c9,	// (0x0003475c) popup_snote_single_text_window_t3

0xa602,	// (0x00034795) popup_snote_single_text_window_t4_ParamLimits

0xa602,	// (0x00034795) popup_snote_single_text_window_t4

0xa636,	// (0x000347c9) popup_snote_single_text_window_t5_ParamLimits

0xa636,	// (0x000347c9) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00039714) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00039714) popup_snote_single_text_window_t

0xa665,	// (0x000347f8) bg_popup_window_pane_cp9_ParamLimits

0xa665,	// (0x000347f8) bg_popup_window_pane_cp9

0xa591,	// (0x00034724) popup_snote_single_graphic_window_g1_ParamLimits

0xa591,	// (0x00034724) popup_snote_single_graphic_window_g1

0xa673,	// (0x00034806) popup_snote_single_graphic_window_g2_ParamLimits

0xa673,	// (0x00034806) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0003971f) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0003971f) popup_snote_single_graphic_window_g

0xa67f,	// (0x00034812) popup_snote_single_graphic_window_t1_ParamLimits

0xa67f,	// (0x00034812) popup_snote_single_graphic_window_t1

0xa692,	// (0x00034825) popup_snote_single_graphic_window_t2_ParamLimits

0xa692,	// (0x00034825) popup_snote_single_graphic_window_t2

0xa5c9,	// (0x0003475c) popup_snote_single_graphic_window_t3_ParamLimits

0xa5c9,	// (0x0003475c) popup_snote_single_graphic_window_t3

0xa602,	// (0x00034795) popup_snote_single_graphic_window_t4_ParamLimits

0xa602,	// (0x00034795) popup_snote_single_graphic_window_t4

0xa636,	// (0x000347c9) popup_snote_single_graphic_window_t5_ParamLimits

0xa636,	// (0x000347c9) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00039724) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00039724) popup_snote_single_graphic_window_t

0xf2f8,	// (0x0003948b) grid_graphic_popup_pane_ParamLimits

0xf2f8,	// (0x0003948b) grid_graphic_popup_pane

0xf31b,	// (0x000394ae) listscroll_popup_graphic_pane_g1_ParamLimits

0xf31b,	// (0x000394ae) listscroll_popup_graphic_pane_g1

0xf32f,	// (0x000394c2) listscroll_popup_graphic_pane_g2_ParamLimits

0xf32f,	// (0x000394c2) listscroll_popup_graphic_pane_g2

0x0001,

0xf989,	// (0x00039b1c) listscroll_popup_graphic_pane_g_ParamLimits

0xf989,	// (0x00039b1c) listscroll_popup_graphic_pane_g

0xbcec,	// (0x00035e7f) scroll_pane_cp5

0xf2b2,	// (0x00039445) cell_graphic_popup_pane_ParamLimits

0xf2b2,	// (0x00039445) cell_graphic_popup_pane

0xc718,	// (0x000368ab) cell_graphic_popup_pane_g1

0xc720,	// (0x000368b3) cell_graphic_popup_pane_g2

0xa565,	// (0x000346f8) cell_graphic_popup_pane_g3

0x0002,

0xf982,	// (0x00039b15) cell_graphic_popup_pane_g

0xc729,	// (0x000368bc) cell_graphic_popup_pane_t2

0xa56e,	// (0x00034701) grid_highlight_pane_cp3

0xa6b7,	// (0x0003484a) list_gen_pane_ParamLimits

0xa6b7,	// (0x0003484a) list_gen_pane

0xa6e0,	// (0x00034873) scroll_pane

0xf283,	// (0x00039416) bg_list_pane_g1_ParamLimits

0xf283,	// (0x00039416) bg_list_pane_g1

0xc6cf,	// (0x00036862) bg_list_pane_g2_ParamLimits

0xc6cf,	// (0x00036862) bg_list_pane_g2

0xc6e2,	// (0x00036875) bg_list_pane_g3_ParamLimits

0xc6e2,	// (0x00036875) bg_list_pane_g3

0xc6f4,	// (0x00036887) bg_list_pane_g4_ParamLimits

0xc6f4,	// (0x00036887) bg_list_pane_g4

0xf29a,	// (0x0003942d) bg_list_pane_g5_ParamLimits

0xf29a,	// (0x0003942d) bg_list_pane_g5

0x0004,

0xf977,	// (0x00039b0a) bg_list_pane_g_ParamLimits

0xf977,	// (0x00039b0a) bg_list_pane_g

0xf25f,	// (0x000393f2) list_double2_graphic_large_graphic_pane_ParamLimits

0xf25f,	// (0x000393f2) list_double2_graphic_large_graphic_pane

0xf25f,	// (0x000393f2) list_double2_graphic_pane_ParamLimits

0xf25f,	// (0x000393f2) list_double2_graphic_pane

0xf25f,	// (0x000393f2) list_double2_large_graphic_pane_ParamLimits

0xf25f,	// (0x000393f2) list_double2_large_graphic_pane

0xf25f,	// (0x000393f2) list_double2_pane_ParamLimits

0xf25f,	// (0x000393f2) list_double2_pane

0xf25f,	// (0x000393f2) list_double_graphic_heading_pane_ParamLimits

0xf25f,	// (0x000393f2) list_double_graphic_heading_pane

0xf25f,	// (0x000393f2) list_double_graphic_pane_ParamLimits

0xf25f,	// (0x000393f2) list_double_graphic_pane

0xf25f,	// (0x000393f2) list_double_heading_pane_ParamLimits

0xf25f,	// (0x000393f2) list_double_heading_pane

0xf25f,	// (0x000393f2) list_double_large_graphic_pane_ParamLimits

0xf25f,	// (0x000393f2) list_double_large_graphic_pane

0xf25f,	// (0x000393f2) list_double_number_pane_ParamLimits

0xf25f,	// (0x000393f2) list_double_number_pane

0xf25f,	// (0x000393f2) list_double_pane_ParamLimits

0xf25f,	// (0x000393f2) list_double_pane

0xf25f,	// (0x000393f2) list_double_time_pane_ParamLimits

0xf25f,	// (0x000393f2) list_double_time_pane

0xf25f,	// (0x000393f2) list_setting_number_pane_ParamLimits

0xf25f,	// (0x000393f2) list_setting_number_pane

0xf25f,	// (0x000393f2) list_setting_pane_ParamLimits

0xf25f,	// (0x000393f2) list_setting_pane

0x866d,	// (0x00032800) list_single_2graphic_pane_ParamLimits

0x866d,	// (0x00032800) list_single_2graphic_pane

0x866d,	// (0x00032800) list_single_graphic_heading_pane_ParamLimits

0x866d,	// (0x00032800) list_single_graphic_heading_pane

0x866d,	// (0x00032800) list_single_graphic_pane_ParamLimits

0x866d,	// (0x00032800) list_single_graphic_pane

0x866d,	// (0x00032800) list_single_heading_pane_ParamLimits

0x866d,	// (0x00032800) list_single_heading_pane

0x8683,	// (0x00032816) list_single_large_graphic_pane_ParamLimits

0x8683,	// (0x00032816) list_single_large_graphic_pane

0x866d,	// (0x00032800) list_single_number_heading_pane_ParamLimits

0x866d,	// (0x00032800) list_single_number_heading_pane

0x866d,	// (0x00032800) list_single_number_pane_ParamLimits

0x866d,	// (0x00032800) list_single_number_pane

0x866d,	// (0x00032800) list_single_pane_ParamLimits

0x866d,	// (0x00032800) list_single_pane

0xa12b,	// (0x000342be) list_highlight_pane_cp1

0xa715,	// (0x000348a8) list_single_pane_g1_ParamLimits

0xa715,	// (0x000348a8) list_single_pane_g1

0x7806,	// (0x00031999) list_single_pane_g2_ParamLimits

0x7806,	// (0x00031999) list_single_pane_g2

0x0001,

0xf5ad,	// (0x00039740) list_single_pane_g_ParamLimits

0xf5ad,	// (0x00039740) list_single_pane_g

0x6f4e,	// (0x000310e1) list_single_pane_t1_ParamLimits

0x6f4e,	// (0x000310e1) list_single_pane_t1

0xa715,	// (0x000348a8) list_single_number_pane_g1_ParamLimits

0xa715,	// (0x000348a8) list_single_number_pane_g1

0x7806,	// (0x00031999) list_single_number_pane_g2_ParamLimits

0x7806,	// (0x00031999) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x00039740) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x00039740) list_single_number_pane_g

0x66cb,	// (0x0003085e) list_single_number_pane_t1_ParamLimits

0x66cb,	// (0x0003085e) list_single_number_pane_t1

0x6f0d,	// (0x000310a0) list_single_number_pane_t2_ParamLimits

0x6f0d,	// (0x000310a0) list_single_number_pane_t2

0x0001,

0xf938,	// (0x00039acb) list_single_number_pane_t_ParamLimits

0xf938,	// (0x00039acb) list_single_number_pane_t

0x66bf,	// (0x00030852) list_single_graphic_pane_g1_ParamLimits

0x66bf,	// (0x00030852) list_single_graphic_pane_g1

0xa715,	// (0x000348a8) list_single_graphic_pane_g2_ParamLimits

0xa715,	// (0x000348a8) list_single_graphic_pane_g2

0x7806,	// (0x00031999) list_single_graphic_pane_g3_ParamLimits

0x7806,	// (0x00031999) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0003972f) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0003972f) list_single_graphic_pane_g

0x66cb,	// (0x0003085e) list_single_graphic_pane_t1_ParamLimits

0x66cb,	// (0x0003085e) list_single_graphic_pane_t1

0x66e1,	// (0x00030874) list_single_heading_pane_g1_ParamLimits

0x66e1,	// (0x00030874) list_single_heading_pane_g1

0x7806,	// (0x00031999) list_single_heading_pane_g2_ParamLimits

0x7806,	// (0x00031999) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00039736) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00039736) list_single_heading_pane_g

0x66f4,	// (0x00030887) list_single_heading_pane_t1_ParamLimits

0x66f4,	// (0x00030887) list_single_heading_pane_t1

0x7812,	// (0x000319a5) list_single_heading_pane_t2_ParamLimits

0x7812,	// (0x000319a5) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0003973b) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0003973b) list_single_heading_pane_t

0xa715,	// (0x000348a8) list_single_number_heading_pane_g1_ParamLimits

0xa715,	// (0x000348a8) list_single_number_heading_pane_g1

0x7806,	// (0x00031999) list_single_number_heading_pane_g2_ParamLimits

0x7806,	// (0x00031999) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x00039740) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x00039740) list_single_number_heading_pane_g

0x670a,	// (0x0003089d) list_single_number_heading_pane_t1_ParamLimits

0x670a,	// (0x0003089d) list_single_number_heading_pane_t1

0x6720,	// (0x000308b3) list_single_number_heading_pane_t2_ParamLimits

0x6720,	// (0x000308b3) list_single_number_heading_pane_t2

0x6732,	// (0x000308c5) list_single_number_heading_pane_t3_ParamLimits

0x6732,	// (0x000308c5) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x00039745) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x00039745) list_single_number_heading_pane_t

0x6744,	// (0x000308d7) list_single_graphic_heading_pane_g1_ParamLimits

0x6744,	// (0x000308d7) list_single_graphic_heading_pane_g1

0x7824,	// (0x000319b7) list_single_graphic_heading_pane_g4_ParamLimits

0x7824,	// (0x000319b7) list_single_graphic_heading_pane_g4

0x7806,	// (0x00031999) list_single_graphic_heading_pane_g5_ParamLimits

0x7806,	// (0x00031999) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0003974c) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0003974c) list_single_graphic_heading_pane_g

0x670a,	// (0x0003089d) list_single_graphic_heading_pane_t1_ParamLimits

0x670a,	// (0x0003089d) list_single_graphic_heading_pane_t1

0x6758,	// (0x000308eb) list_single_graphic_heading_pane_t2_ParamLimits

0x6758,	// (0x000308eb) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x00039753) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x00039753) list_single_graphic_heading_pane_t

0x7833,	// (0x000319c6) list_single_large_graphic_pane_g1_ParamLimits

0x7833,	// (0x000319c6) list_single_large_graphic_pane_g1

0x783f,	// (0x000319d2) list_single_large_graphic_pane_g2_ParamLimits

0x783f,	// (0x000319d2) list_single_large_graphic_pane_g2

0x784b,	// (0x000319de) list_single_large_graphic_pane_g3_ParamLimits

0x784b,	// (0x000319de) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x00039758) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x00039758) list_single_large_graphic_pane_g

0xba53,	// (0x00035be6) wait_border_pane_g2_copy1

0x7857,	// (0x000319ea) list_single_large_graphic_pane_g4_cp2

0x6770,	// (0x00030903) list_single_large_graphic_pane_t1_ParamLimits

0x6770,	// (0x00030903) list_single_large_graphic_pane_t1

0x785f,	// (0x000319f2) list_double_pane_g1_ParamLimits

0x785f,	// (0x000319f2) list_double_pane_g1

0x786b,	// (0x000319fe) list_double_pane_g2_ParamLimits

0x786b,	// (0x000319fe) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0003975f) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0003975f) list_double_pane_g

0x6786,	// (0x00030919) list_double_pane_t1_ParamLimits

0x6786,	// (0x00030919) list_double_pane_t1

0x679c,	// (0x0003092f) list_double_pane_t2_ParamLimits

0x679c,	// (0x0003092f) list_double_pane_t2

0x0001,

0xf5d1,	// (0x00039764) list_double_pane_t_ParamLimits

0xf5d1,	// (0x00039764) list_double_pane_t

0x67ae,	// (0x00030941) list_double2_pane_g1_ParamLimits

0x67ae,	// (0x00030941) list_double2_pane_g1

0x67bd,	// (0x00030950) list_double2_pane_g2_ParamLimits

0x67bd,	// (0x00030950) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x00039769) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x00039769) list_double2_pane_g

0x67c9,	// (0x0003095c) list_double2_pane_t1_ParamLimits

0x67c9,	// (0x0003095c) list_double2_pane_t1

0x67df,	// (0x00030972) list_double2_pane_t2_ParamLimits

0x67df,	// (0x00030972) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0003976e) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0003976e) list_double2_pane_t

0x785f,	// (0x000319f2) list_double_number_pane_g1_ParamLimits

0x785f,	// (0x000319f2) list_double_number_pane_g1

0x786b,	// (0x000319fe) list_double_number_pane_g2_ParamLimits

0x786b,	// (0x000319fe) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0003975f) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0003975f) list_double_number_pane_g

0x67f1,	// (0x00030984) list_double_number_pane_t1_ParamLimits

0x67f1,	// (0x00030984) list_double_number_pane_t1

0x6803,	// (0x00030996) list_double_number_pane_t2_ParamLimits

0x6803,	// (0x00030996) list_double_number_pane_t2

0x6819,	// (0x000309ac) list_double_number_pane_t3_ParamLimits

0x6819,	// (0x000309ac) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x00039773) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x00039773) list_double_number_pane_t

0x682b,	// (0x000309be) list_double_graphic_pane_g1_ParamLimits

0x682b,	// (0x000309be) list_double_graphic_pane_g1

0x6837,	// (0x000309ca) list_double_graphic_pane_g2_ParamLimits

0x6837,	// (0x000309ca) list_double_graphic_pane_g2

0x6846,	// (0x000309d9) list_double_graphic_pane_g3_ParamLimits

0x6846,	// (0x000309d9) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x0003977a) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x0003977a) list_double_graphic_pane_g

0x6852,	// (0x000309e5) list_double_graphic_pane_t1_ParamLimits

0x6852,	// (0x000309e5) list_double_graphic_pane_t1

0x6868,	// (0x000309fb) list_double_graphic_pane_t2_ParamLimits

0x6868,	// (0x000309fb) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x00039783) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x00039783) list_double_graphic_pane_t

0x687a,	// (0x00030a0d) list_double2_graphic_pane_g1_ParamLimits

0x687a,	// (0x00030a0d) list_double2_graphic_pane_g1

0x7883,	// (0x00031a16) list_double2_graphic_pane_g2_ParamLimits

0x7883,	// (0x00031a16) list_double2_graphic_pane_g2

0x788f,	// (0x00031a22) list_double2_graphic_pane_g3_ParamLimits

0x788f,	// (0x00031a22) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x00039788) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x00039788) list_double2_graphic_pane_g

0x6886,	// (0x00030a19) list_double2_graphic_pane_t1_ParamLimits

0x6886,	// (0x00030a19) list_double2_graphic_pane_t1

0x689c,	// (0x00030a2f) list_double2_graphic_pane_t2_ParamLimits

0x689c,	// (0x00030a2f) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0003978f) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0003978f) list_double2_graphic_pane_t

0x68ae,	// (0x00030a41) list_double_large_graphic_pane_g1_ParamLimits

0x68ae,	// (0x00030a41) list_double_large_graphic_pane_g1

0x68d7,	// (0x00030a6a) list_double_large_graphic_pane_g2_ParamLimits

0x68d7,	// (0x00030a6a) list_double_large_graphic_pane_g2

0x786b,	// (0x000319fe) list_double_large_graphic_pane_g3_ParamLimits

0x786b,	// (0x000319fe) list_double_large_graphic_pane_g3

0x68eb,	// (0x00030a7e) list_double_large_graphic_pane_g4_ParamLimits

0x68eb,	// (0x00030a7e) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x00039794) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00039794) list_double_large_graphic_pane_g

0x68fc,	// (0x00030a8f) list_double_large_graphic_pane_t1_ParamLimits

0x68fc,	// (0x00030a8f) list_double_large_graphic_pane_t1

0x6915,	// (0x00030aa8) list_double_large_graphic_pane_t2_ParamLimits

0x6915,	// (0x00030aa8) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x0003979f) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x0003979f) list_double_large_graphic_pane_t

0x78b0,	// (0x00031a43) list_double2_large_graphic_pane_g1_ParamLimits

0x78b0,	// (0x00031a43) list_double2_large_graphic_pane_g1

0x6927,	// (0x00030aba) list_double2_large_graphic_pane_g2_ParamLimits

0x6927,	// (0x00030aba) list_double2_large_graphic_pane_g2

0x788f,	// (0x00031a22) list_double2_large_graphic_pane_g3_ParamLimits

0x788f,	// (0x00031a22) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x000397a4) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x000397a4) list_double2_large_graphic_pane_g

0x6936,	// (0x00030ac9) list_double2_large_graphic_pane_t1_ParamLimits

0x6936,	// (0x00030ac9) list_double2_large_graphic_pane_t1

0x694c,	// (0x00030adf) list_double2_large_graphic_pane_t2_ParamLimits

0x694c,	// (0x00030adf) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x000397ab) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x000397ab) list_double2_large_graphic_pane_t

0x695e,	// (0x00030af1) list_double_heading_pane_g1_ParamLimits

0x695e,	// (0x00030af1) list_double_heading_pane_g1

0x696d,	// (0x00030b00) list_double_heading_pane_g2_ParamLimits

0x696d,	// (0x00030b00) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x000397b0) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x000397b0) list_double_heading_pane_g

0x6979,	// (0x00030b0c) list_double_heading_pane_t1_ParamLimits

0x6979,	// (0x00030b0c) list_double_heading_pane_t1

0x67df,	// (0x00030972) list_double_heading_pane_t2_ParamLimits

0x67df,	// (0x00030972) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x000397b5) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x000397b5) list_double_heading_pane_t

0x698f,	// (0x00030b22) list_double_graphic_heading_pane_g1_ParamLimits

0x698f,	// (0x00030b22) list_double_graphic_heading_pane_g1

0x695e,	// (0x00030af1) list_double_graphic_heading_pane_g2_ParamLimits

0x695e,	// (0x00030af1) list_double_graphic_heading_pane_g2

0x696d,	// (0x00030b00) list_double_graphic_heading_pane_g3_ParamLimits

0x696d,	// (0x00030b00) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x000397ba) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x000397ba) list_double_graphic_heading_pane_g

0x699b,	// (0x00030b2e) list_double_graphic_heading_pane_t1_ParamLimits

0x699b,	// (0x00030b2e) list_double_graphic_heading_pane_t1

0x689c,	// (0x00030a2f) list_double_graphic_heading_pane_t2_ParamLimits

0x689c,	// (0x00030a2f) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x000397c1) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x000397c1) list_double_graphic_heading_pane_t

0x69b1,	// (0x00030b44) list_double_time_pane_g1_ParamLimits

0x69b1,	// (0x00030b44) list_double_time_pane_g1

0x69c0,	// (0x00030b53) list_double_time_pane_g2_ParamLimits

0x69c0,	// (0x00030b53) list_double_time_pane_g2

0x0001,

0xf633,	// (0x000397c6) list_double_time_pane_g_ParamLimits

0xf633,	// (0x000397c6) list_double_time_pane_g

0x69cc,	// (0x00030b5f) list_double_time_pane_t1_ParamLimits

0x69cc,	// (0x00030b5f) list_double_time_pane_t1

0x69e2,	// (0x00030b75) list_double_time_pane_t2_ParamLimits

0x69e2,	// (0x00030b75) list_double_time_pane_t2

0x69f4,	// (0x00030b87) list_double_time_pane_t3_ParamLimits

0x69f4,	// (0x00030b87) list_double_time_pane_t3

0x6a06,	// (0x00030b99) list_double_time_pane_t4_ParamLimits

0x6a06,	// (0x00030b99) list_double_time_pane_t4

0x0003,

0xf638,	// (0x000397cb) list_double_time_pane_t_ParamLimits

0xf638,	// (0x000397cb) list_double_time_pane_t

0x6a18,	// (0x00030bab) list_setting_pane_g1_ParamLimits

0x6a18,	// (0x00030bab) list_setting_pane_g1

0x6a24,	// (0x00030bb7) list_setting_pane_g2_ParamLimits

0x6a24,	// (0x00030bb7) list_setting_pane_g2

0x0001,

0xf641,	// (0x000397d4) list_setting_pane_g_ParamLimits

0xf641,	// (0x000397d4) list_setting_pane_g

0x6a30,	// (0x00030bc3) list_setting_pane_t1_ParamLimits

0x6a30,	// (0x00030bc3) list_setting_pane_t1

0x6a4a,	// (0x00030bdd) list_setting_pane_t2_ParamLimits

0x6a4a,	// (0x00030bdd) list_setting_pane_t2

0x0002,

0xf646,	// (0x000397d9) list_setting_pane_t_ParamLimits

0xf646,	// (0x000397d9) list_setting_pane_t

0x6a87,	// (0x00030c1a) set_value_pane_cp_ParamLimits

0x6a87,	// (0x00030c1a) set_value_pane_cp

0x6a93,	// (0x00030c26) list_setting_number_pane_g1_ParamLimits

0x6a93,	// (0x00030c26) list_setting_number_pane_g1

0x6a9f,	// (0x00030c32) list_setting_number_pane_g2_ParamLimits

0x6a9f,	// (0x00030c32) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x000397e0) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x000397e0) list_setting_number_pane_g

0x6aab,	// (0x00030c3e) list_setting_number_pane_t1_ParamLimits

0x6aab,	// (0x00030c3e) list_setting_number_pane_t1

0x6ac2,	// (0x00030c55) list_setting_number_pane_t2_ParamLimits

0x6ac2,	// (0x00030c55) list_setting_number_pane_t2

0x6adc,	// (0x00030c6f) list_setting_number_pane_t3_ParamLimits

0x6adc,	// (0x00030c6f) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x000397e5) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x000397e5) list_setting_number_pane_t

0x6a87,	// (0x00030c1a) set_value_pane_ParamLimits

0x6a87,	// (0x00030c1a) set_value_pane

0xa721,	// (0x000348b4) bg_set_opt_pane_ParamLimits

0xa721,	// (0x000348b4) bg_set_opt_pane

0x6b1d,	// (0x00030cb0) set_value_pane_t1

0xa742,	// (0x000348d5) slider_set_pane_cp3

0xa74b,	// (0x000348de) volume_small_pane_cp

0xa754,	// (0x000348e7) list_form_gen_pane

0xa704,	// (0x00034897) scroll_pane_cp8

0x6b3b,	// (0x00030cce) form_field_data_pane_ParamLimits

0x6b3b,	// (0x00030cce) form_field_data_pane

0x6b5b,	// (0x00030cee) form_field_data_wide_pane_ParamLimits

0x6b5b,	// (0x00030cee) form_field_data_wide_pane

0x6b7a,	// (0x00030d0d) form_field_popup_pane_ParamLimits

0x6b7a,	// (0x00030d0d) form_field_popup_pane

0x6b92,	// (0x00030d25) form_field_popup_wide_pane_ParamLimits

0x6b92,	// (0x00030d25) form_field_popup_wide_pane

0x6ba9,	// (0x00030d3c) form_field_slider_pane_ParamLimits

0x6ba9,	// (0x00030d3c) form_field_slider_pane

0x6bbc,	// (0x00030d4f) form_field_slider_wide_pane_ParamLimits

0x6bbc,	// (0x00030d4f) form_field_slider_wide_pane

0xa75d,	// (0x000348f0) data_form_pane

0x6bd7,	// (0x00030d6a) form_field_data_pane_t1

0xa769,	// (0x000348fc) input_focus_pane

0xa777,	// (0x0003490a) data_form_wide_pane

0x6bfb,	// (0x00030d8e) form_field_data_wide_pane_t1

0xa583,	// (0x00034716) input_focus_pane_cp6

0x6c1d,	// (0x00030db0) form_field_popup_pane_t1

0xa769,	// (0x000348fc) input_focus_pane_cp7

0xa75d,	// (0x000348f0) list_form_pane

0x6c3d,	// (0x00030dd0) form_field_popup_wide_pane_t1

0xa769,	// (0x000348fc) input_focus_pane_cp8

0xa797,	// (0x0003492a) list_form_wide_pane

0x6c5a,	// (0x00030ded) form_field_slider_pane_t1_ParamLimits

0x6c5a,	// (0x00030ded) form_field_slider_pane_t1

0x6c70,	// (0x00030e03) form_field_slider_pane_t2_ParamLimits

0x6c70,	// (0x00030e03) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x000397f5) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x000397f5) form_field_slider_pane_t

0xa2b4,	// (0x00034447) input_focus_pane_cp9_ParamLimits

0xa2b4,	// (0x00034447) input_focus_pane_cp9

0x6c85,	// (0x00030e18) slider_cont_pane_ParamLimits

0x6c85,	// (0x00030e18) slider_cont_pane

0xa7a6,	// (0x00034939) form_field_slider_wide_pane_t1_ParamLimits

0xa7a6,	// (0x00034939) form_field_slider_wide_pane_t1

0x6c99,	// (0x00030e2c) form_field_slider_wide_pane_t2_ParamLimits

0x6c99,	// (0x00030e2c) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x000397fa) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x000397fa) form_field_slider_wide_pane_t

0xa2b4,	// (0x00034447) input_focus_pane_cp10_ParamLimits

0xa2b4,	// (0x00034447) input_focus_pane_cp10

0x6cab,	// (0x00030e3e) slider_cont_pane_cp1_ParamLimits

0x6cab,	// (0x00030e3e) slider_cont_pane_cp1

0x6cc1,	// (0x00030e54) slider_form_pane_cp

0xa7b8,	// (0x0003494b) input_focus_pane_g1

0xa7c0,	// (0x00034953) input_focus_pane_g2

0xa7c8,	// (0x0003495b) input_focus_pane_g3

0xa7d0,	// (0x00034963) input_focus_pane_g4

0xa7d8,	// (0x0003496b) input_focus_pane_g5

0xa7e0,	// (0x00034973) input_focus_pane_g6

0xa7e8,	// (0x0003497b) input_focus_pane_g7

0xa7f0,	// (0x00034983) input_focus_pane_g8

0xa7f8,	// (0x0003498b) input_focus_pane_g9

0xa0a9,	// (0x0003423c) input_focus_pane_g10

0x0009,

0xf66c,	// (0x000397ff) input_focus_pane_g

0xba5c,	// (0x00035bef) wait_border_pane_g3_copy1

0x6cc9,	// (0x00030e5c) data_form_pane_t1

0xa0a9,	// (0x0003423c) wait_anim_pane_g1_copy1

0x6f1f,	// (0x000310b2) data_form_wide_pane_t1

0x6ce3,	// (0x00030e76) list_form_graphic_pane_cp_ParamLimits

0x6ce3,	// (0x00030e76) list_form_graphic_pane_cp

0xc686,	// (0x00036819) slider_form_pane_g1

0xc68f,	// (0x00036822) slider_form_pane_g2

0x0006,

0xf968,	// (0x00039afb) slider_form_pane_g

0x6cf7,	// (0x00030e8a) list_form_graphic_pane_ParamLimits

0x6cf7,	// (0x00030e8a) list_form_graphic_pane

0x6d0d,	// (0x00030ea0) list_form_graphic_pane_g1

0x6d15,	// (0x00030ea8) list_form_graphic_pane_t1_ParamLimits

0x6d15,	// (0x00030ea8) list_form_graphic_pane_t1

0xa179,	// (0x0003430c) list_highlight_pane_cp5_ParamLimits

0xa179,	// (0x0003430c) list_highlight_pane_cp5

0x6d2a,	// (0x00030ebd) find_pane_g1

0xa800,	// (0x00034993) input_find_pane

0x6d33,	// (0x00030ec6) input_find_pane_g1_ParamLimits

0x6d33,	// (0x00030ec6) input_find_pane_g1

0x6d3f,	// (0x00030ed2) input_find_pane_t1_ParamLimits

0x6d3f,	// (0x00030ed2) input_find_pane_t1

0x6d54,	// (0x00030ee7) input_find_pane_t2_ParamLimits

0x6d54,	// (0x00030ee7) input_find_pane_t2

0x0001,

0xf681,	// (0x00039814) input_find_pane_t_ParamLimits

0xf681,	// (0x00039814) input_find_pane_t

0xa809,	// (0x0003499c) input_focus_pane_cp5_ParamLimits

0xa809,	// (0x0003499c) input_focus_pane_cp5

0xa2b4,	// (0x00034447) bg_popup_window_pane_cp2_ParamLimits

0xa2b4,	// (0x00034447) bg_popup_window_pane_cp2

0xa828,	// (0x000349bb) listscroll_menu_pane_ParamLimits

0xa828,	// (0x000349bb) listscroll_menu_pane

0xa834,	// (0x000349c7) popup_submenu_window_ParamLimits

0xa834,	// (0x000349c7) popup_submenu_window

0xa858,	// (0x000349eb) find_popup_pane_g1

0xa860,	// (0x000349f3) input_popup_find_pane_cp

0xa86a,	// (0x000349fd) input_focus_pane_cp4_ParamLimits

0xa86a,	// (0x000349fd) input_focus_pane_cp4

0xa878,	// (0x00034a0b) input_popup_find_pane_t1_ParamLimits

0xa878,	// (0x00034a0b) input_popup_find_pane_t1

0xa12b,	// (0x000342be) bg_popup_sub_pane_cp

0xa8a6,	// (0x00034a39) listscroll_popup_sub_pane

0xa8ae,	// (0x00034a41) list_submenu_pane_ParamLimits

0xa8ae,	// (0x00034a41) list_submenu_pane

0xa8bf,	// (0x00034a52) scroll_pane_cp4

0xa8c7,	// (0x00034a5a) list_single_popup_submenu_pane_ParamLimits

0xa8c7,	// (0x00034a5a) list_single_popup_submenu_pane

0xa8d9,	// (0x00034a6c) list_single_popup_submenu_pane_g1

0xa8e1,	// (0x00034a74) list_single_popup_submenu_pane_t1_ParamLimits

0xa8e1,	// (0x00034a74) list_single_popup_submenu_pane_t1

0xa179,	// (0x0003430c) bg_active_tab_pane_cp1_ParamLimits

0xa179,	// (0x0003430c) bg_active_tab_pane_cp1

0xe92d,	// (0x00038ac0) tabs_2_active_pane_g1

0xe935,	// (0x00038ac8) tabs_2_active_pane_t1

0xa179,	// (0x0003430c) bg_passive_tab_pane_cp1_ParamLimits

0xa179,	// (0x0003430c) bg_passive_tab_pane_cp1

0xe92d,	// (0x00038ac0) tabs_2_passive_pane_g1

0xe935,	// (0x00038ac8) tabs_2_passive_pane_t1

0xe947,	// (0x00038ada) bg_active_tab_pane_cp4

0xe955,	// (0x00038ae8) tabs_2_long_active_pane_t1

0xe968,	// (0x00038afb) bg_passive_tab_pane_cp4

0xb53c,	// (0x000356cf) list_single_midp_graphic_pane_g4_ParamLimits

0xe947,	// (0x00038ada) bg_active_tab_pane_cp5

0xe974,	// (0x00038b07) tabs_3_long_active_pane_t1

0xe968,	// (0x00038afb) bg_passive_tab_pane_cp5

0xb53c,	// (0x000356cf) list_single_midp_graphic_pane_g4

0xa179,	// (0x0003430c) bg_popup_window_pane_cp13_ParamLimits

0xa179,	// (0x0003430c) bg_popup_window_pane_cp13

0xa8ff,	// (0x00034a92) listscroll_popup_fast_pane_ParamLimits

0xa8ff,	// (0x00034a92) listscroll_popup_fast_pane

0xa90e,	// (0x00034aa1) grid_popup_fast_pane_ParamLimits

0xa90e,	// (0x00034aa1) grid_popup_fast_pane

0xa920,	// (0x00034ab3) scroll_pane_cp9_ParamLimits

0xa920,	// (0x00034ab3) scroll_pane_cp9

0xd950,	// (0x00037ae3) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xd950,	// (0x00037ae3) list_single_graphic_hl_pane_t1_cp2

0xa944,	// (0x00034ad7) input_focus_pane_cp20_ParamLimits

0xa944,	// (0x00034ad7) input_focus_pane_cp20

0xa952,	// (0x00034ae5) query_popup_data_pane_t1_ParamLimits

0xa952,	// (0x00034ae5) query_popup_data_pane_t1

0xa965,	// (0x00034af8) query_popup_data_pane_t2_ParamLimits

0xa965,	// (0x00034af8) query_popup_data_pane_t2

0xa9ab,	// (0x00034b3e) query_popup_data_pane_t3_ParamLimits

0xa9ab,	// (0x00034b3e) query_popup_data_pane_t3

0xa9ec,	// (0x00034b7f) query_popup_data_pane_t4_ParamLimits

0xa9ec,	// (0x00034b7f) query_popup_data_pane_t4

0xaa28,	// (0x00034bbb) query_popup_data_pane_t5_ParamLimits

0xaa28,	// (0x00034bbb) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x00039819) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x00039819) query_popup_data_pane_t

0xa7b8,	// (0x0003494b) bg_set_opt_pane_g1

0xa7c0,	// (0x00034953) bg_set_opt_pane_g2

0xa7c8,	// (0x0003495b) bg_set_opt_pane_g3

0xa7d0,	// (0x00034963) bg_set_opt_pane_g4

0xa7d8,	// (0x0003496b) bg_set_opt_pane_g5

0xa7e0,	// (0x00034973) bg_set_opt_pane_g6

0xa7e8,	// (0x0003497b) bg_set_opt_pane_g7

0xa7f0,	// (0x00034983) bg_set_opt_pane_g8

0xa7f8,	// (0x0003498b) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x00039824) bg_set_opt_pane_g

0x7b0c,	// (0x00031c9f) control_top_pane_stacon_ParamLimits

0x7b0c,	// (0x00031c9f) control_top_pane_stacon

0x7b5f,	// (0x00031cf2) signal_pane_stacon_ParamLimits

0x7b5f,	// (0x00031cf2) signal_pane_stacon

0xae1b,	// (0x00034fae) stacon_top_pane_g1_ParamLimits

0xae1b,	// (0x00034fae) stacon_top_pane_g1

0x7b84,	// (0x00031d17) title_pane_stacon_ParamLimits

0x7b84,	// (0x00031d17) title_pane_stacon

0x7ba6,	// (0x00031d39) uni_indicator_pane_stacon_ParamLimits

0x7ba6,	// (0x00031d39) uni_indicator_pane_stacon

0x7bbb,	// (0x00031d4e) battery_pane_stacon_ParamLimits

0x7bbb,	// (0x00031d4e) battery_pane_stacon

0x7bfb,	// (0x00031d8e) control_bottom_pane_stacon_ParamLimits

0x7bfb,	// (0x00031d8e) control_bottom_pane_stacon

0x7c1a,	// (0x00031dad) navi_pane_stacon_ParamLimits

0x7c1a,	// (0x00031dad) navi_pane_stacon

0xae3d,	// (0x00034fd0) stacon_bottom_pane_g1_ParamLimits

0xae3d,	// (0x00034fd0) stacon_bottom_pane_g1

0xaa5f,	// (0x00034bf2) aid_levels_signal_lsc_ParamLimits

0xaa5f,	// (0x00034bf2) aid_levels_signal_lsc

0x78bc,	// (0x00031a4f) signal_pane_stacon_g1_ParamLimits

0x78bc,	// (0x00031a4f) signal_pane_stacon_g1

0x78c8,	// (0x00031a5b) signal_pane_stacon_g2_ParamLimits

0x78c8,	// (0x00031a5b) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x00039837) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00039837) signal_pane_stacon_g

0x78fc,	// (0x00031a8f) title_pane_stacon_t1_ParamLimits

0x78fc,	// (0x00031a8f) title_pane_stacon_t1

0xaa79,	// (0x00034c0c) uni_indicator_pane_stacon_g1

0xaa83,	// (0x00034c16) uni_indicator_pane_stacon_g2

0xaa8d,	// (0x00034c20) uni_indicator_pane_stacon_g3

0xaa97,	// (0x00034c2a) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x00039843) uni_indicator_pane_stacon_g

0x7921,	// (0x00031ab4) control_top_pane_stacon_g1

0x7929,	// (0x00031abc) control_top_pane_stacon_t1_ParamLimits

0x7929,	// (0x00031abc) control_top_pane_stacon_t1

0xaaa1,	// (0x00034c34) aid_levels_battery_lsc_ParamLimits

0xaaa1,	// (0x00034c34) aid_levels_battery_lsc

0x795a,	// (0x00031aed) battery_pane_stacon_g1_ParamLimits

0x795a,	// (0x00031aed) battery_pane_stacon_g1

0x7966,	// (0x00031af9) battery_pane_stacon_g2_ParamLimits

0x7966,	// (0x00031af9) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x0003984c) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x0003984c) battery_pane_stacon_g

0x7995,	// (0x00031b28) navi_icon_pane_stacon

0x79a5,	// (0x00031b38) navi_navi_pane_stacon

0x7995,	// (0x00031b28) navi_text_pane_stacon

0x7921,	// (0x00031ab4) control_bottom_pane_stacon_g1

0x79b5,	// (0x00031b48) control_bottom_pane_stacon_t1_ParamLimits

0x79b5,	// (0x00031b48) control_bottom_pane_stacon_t1

0xe986,	// (0x00038b19) grid_app_pane_ParamLimits

0xe986,	// (0x00038b19) grid_app_pane

0xe9a2,	// (0x00038b35) scroll_pane_cp15_ParamLimits

0xe9a2,	// (0x00038b35) scroll_pane_cp15

0xe9b3,	// (0x00038b46) cell_app_pane_ParamLimits

0xe9b3,	// (0x00038b46) cell_app_pane

0xe9d7,	// (0x00038b6a) cell_app_pane_g1_ParamLimits

0xe9d7,	// (0x00038b6a) cell_app_pane_g1

0xaac9,	// (0x00034c5c) cell_app_pane_g2_ParamLimits

0xaac9,	// (0x00034c5c) cell_app_pane_g2

0x0001,

0xf6be,	// (0x00039851) cell_app_pane_g_ParamLimits

0xf6be,	// (0x00039851) cell_app_pane_g

0xe9fb,	// (0x00038b8e) cell_app_pane_t1_ParamLimits

0xe9fb,	// (0x00038b8e) cell_app_pane_t1

0xaad5,	// (0x00034c68) grid_highlight_pane_ParamLimits

0xaad5,	// (0x00034c68) grid_highlight_pane

0xa7b8,	// (0x0003494b) cell_highlight_pane_g1

0xa7c0,	// (0x00034953) cell_highlight_pane_g2

0xa7c8,	// (0x0003495b) cell_highlight_pane_g3

0xa7d0,	// (0x00034963) cell_highlight_pane_g4

0xa7d8,	// (0x0003496b) cell_highlight_pane_g5

0xa7e0,	// (0x00034973) cell_highlight_pane_g6

0xa7e8,	// (0x0003497b) cell_highlight_pane_g7

0xa7f0,	// (0x00034983) cell_highlight_pane_g8

0xa7f8,	// (0x0003498b) cell_highlight_pane_g9

0xa0a9,	// (0x0003423c) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x000397ff) cell_highlight_pane_g

0xaae6,	// (0x00034c79) bg_scroll_pane

0x79f9,	// (0x00031b8c) scroll_handle_pane

0xab2d,	// (0x00034cc0) scroll_bg_pane_g1

0xab42,	// (0x00034cd5) scroll_bg_pane_g2

0xab5a,	// (0x00034ced) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x00039856) scroll_bg_pane_g

0xab6f,	// (0x00034d02) scroll_handle_focus_pane_ParamLimits

0xab6f,	// (0x00034d02) scroll_handle_focus_pane

0xab2d,	// (0x00034cc0) scroll_handle_pane_g1

0xab7c,	// (0x00034d0f) scroll_handle_pane_g2

0xab5a,	// (0x00034ced) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x0003985d) scroll_handle_pane_g

0xa86a,	// (0x000349fd) bg_popup_sub_pane_cp21_ParamLimits

0xa86a,	// (0x000349fd) bg_popup_sub_pane_cp21

0xab90,	// (0x00034d23) popup_fep_japan_predictive_window_t1_ParamLimits

0xab90,	// (0x00034d23) popup_fep_japan_predictive_window_t1

0xaba7,	// (0x00034d3a) popup_fep_japan_predictive_window_t2_ParamLimits

0xaba7,	// (0x00034d3a) popup_fep_japan_predictive_window_t2

0xabda,	// (0x00034d6d) popup_fep_japan_predictive_window_t3_ParamLimits

0xabda,	// (0x00034d6d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x00039864) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x00039864) popup_fep_japan_predictive_window_t

0xa12b,	// (0x000342be) bg_popup_sub_pane_cp23

0xac11,	// (0x00034da4) listscroll_japin_cand_pane

0xac19,	// (0x00034dac) popup_fep_japan_candidate_window_t1

0xac27,	// (0x00034dba) candidate_pane_ParamLimits

0xac27,	// (0x00034dba) candidate_pane

0xac3a,	// (0x00034dcd) scroll_pane_cp30

0xac42,	// (0x00034dd5) list_single_popup_jap_candidate_pane_ParamLimits

0xac42,	// (0x00034dd5) list_single_popup_jap_candidate_pane

0xa12b,	// (0x000342be) list_highlight_pane_cp30

0xac57,	// (0x00034dea) list_single_popup_jap_candidate_pane_t1

0xea12,	// (0x00038ba5) level_1_signal

0xea1f,	// (0x00038bb2) level_2_signal

0xea2c,	// (0x00038bbf) level_3_signal

0xea39,	// (0x00038bcc) level_4_signal

0xea46,	// (0x00038bd9) level_5_signal

0xea53,	// (0x00038be6) level_6_signal

0xea60,	// (0x00038bf3) level_7_signal

0xea12,	// (0x00038ba5) level_1_battery

0xea1f,	// (0x00038bb2) level_2_battery

0xea2c,	// (0x00038bbf) level_3_battery

0xea39,	// (0x00038bcc) level_4_battery

0xea46,	// (0x00038bd9) level_5_battery

0xea53,	// (0x00038be6) level_6_battery

0xea60,	// (0x00038bf3) level_7_battery

0xac7e,	// (0x00034e11) list_menu_pane_ParamLimits

0xac7e,	// (0x00034e11) list_menu_pane

0xac94,	// (0x00034e27) scroll_pane_cp25_ParamLimits

0xac94,	// (0x00034e27) scroll_pane_cp25

0xea6d,	// (0x00038c00) list_double2_graphic_pane_cp2_ParamLimits

0xea6d,	// (0x00038c00) list_double2_graphic_pane_cp2

0xea6d,	// (0x00038c00) list_double2_large_graphic_pane_cp2_ParamLimits

0xea6d,	// (0x00038c00) list_double2_large_graphic_pane_cp2

0xea6d,	// (0x00038c00) list_double2_pane_cp2_ParamLimits

0xea6d,	// (0x00038c00) list_double2_pane_cp2

0xea6d,	// (0x00038c00) list_double_graphic_pane_cp2_ParamLimits

0xea6d,	// (0x00038c00) list_double_graphic_pane_cp2

0xea6d,	// (0x00038c00) list_double_large_graphic_pane_cp2_ParamLimits

0xea6d,	// (0x00038c00) list_double_large_graphic_pane_cp2

0xea6d,	// (0x00038c00) list_double_number_pane_cp2_ParamLimits

0xea6d,	// (0x00038c00) list_double_number_pane_cp2

0xea6d,	// (0x00038c00) list_double_pane_cp2_ParamLimits

0xea6d,	// (0x00038c00) list_double_pane_cp2

0xea7d,	// (0x00038c10) list_single_2graphic_pane_cp2_ParamLimits

0xea7d,	// (0x00038c10) list_single_2graphic_pane_cp2

0xea7d,	// (0x00038c10) list_single_graphic_heading_pane_cp2_ParamLimits

0xea7d,	// (0x00038c10) list_single_graphic_heading_pane_cp2

0xea7d,	// (0x00038c10) list_single_graphic_pane_cp2_ParamLimits

0xea7d,	// (0x00038c10) list_single_graphic_pane_cp2

0xea7d,	// (0x00038c10) list_single_heading_pane_cp2_ParamLimits

0xea7d,	// (0x00038c10) list_single_heading_pane_cp2

0xea92,	// (0x00038c25) list_single_large_graphic_pane_cp2_ParamLimits

0xea92,	// (0x00038c25) list_single_large_graphic_pane_cp2

0xea7d,	// (0x00038c10) list_single_number_heading_pane_cp2_ParamLimits

0xea7d,	// (0x00038c10) list_single_number_heading_pane_cp2

0xea7d,	// (0x00038c10) list_single_number_pane_cp2_ParamLimits

0xea7d,	// (0x00038c10) list_single_number_pane_cp2

0xeaa3,	// (0x00038c36) list_single_pane_cp2_ParamLimits

0xeaa3,	// (0x00038c36) list_single_pane_cp2

0xacb6,	// (0x00034e49) bg_popup_sub_pane_cp22

0x7aa8,	// (0x00031c3b) popup_side_volume_key_window_g1

0x7acc,	// (0x00031c5f) popup_side_volume_key_window_t1

0x7ae8,	// (0x00031c7b) volume_small_pane_cp1

0xa2b4,	// (0x00034447) bg_popup_sub_pane_cp24_ParamLimits

0xa2b4,	// (0x00034447) bg_popup_sub_pane_cp24

0xaccc,	// (0x00034e5f) fep_china_uni_candidate_pane_ParamLimits

0xaccc,	// (0x00034e5f) fep_china_uni_candidate_pane

0xace0,	// (0x00034e73) fep_china_uni_entry_pane

0xacf0,	// (0x00034e83) popup_fep_china_uni_window_g1

0xad0c,	// (0x00034e9f) fep_china_uni_entry_pane_g1

0xad14,	// (0x00034ea7) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x00039895) fep_china_uni_entry_pane_g

0xad1c,	// (0x00034eaf) fep_entry_item_pane

0xad26,	// (0x00034eb9) fep_candidate_item_pane

0xad2e,	// (0x00034ec1) fep_china_uni_candidate_pane_g1

0xad36,	// (0x00034ec9) fep_china_uni_candidate_pane_g2

0xad3e,	// (0x00034ed1) fep_china_uni_candidate_pane_g3

0xad46,	// (0x00034ed9) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x0003989a) fep_china_uni_candidate_pane_g

0xa0a9,	// (0x0003423c) fep_entry_item_pane_g1

0xad4e,	// (0x00034ee1) fep_entry_item_pane_t1_ParamLimits

0xad4e,	// (0x00034ee1) fep_entry_item_pane_t1

0xad64,	// (0x00034ef7) fep_candidate_item_pane_t1_ParamLimits

0xad64,	// (0x00034ef7) fep_candidate_item_pane_t1

0xad79,	// (0x00034f0c) fep_candidate_item_pane_t2_ParamLimits

0xad79,	// (0x00034f0c) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x000398a3) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x000398a3) fep_candidate_item_pane_t

0xa179,	// (0x0003430c) list_highlight_pane_cp31_ParamLimits

0xa179,	// (0x0003430c) list_highlight_pane_cp31

0xad8b,	// (0x00034f1e) level_1_signal_lsc

0xad94,	// (0x00034f27) level_2_signal_lsc

0xad9d,	// (0x00034f30) level_3_signal_lsc

0xada6,	// (0x00034f39) level_4_signal_lsc

0xadaf,	// (0x00034f42) level_5_signal_lsc

0xadb8,	// (0x00034f4b) level_6_signal_lsc

0xadc1,	// (0x00034f54) level_7_signal_lsc

0xadc1,	// (0x00034f54) level_1_battery_lsc

0xadca,	// (0x00034f5d) level_2_battery_lsc

0xadd3,	// (0x00034f66) level_3_battery_lsc

0xaddc,	// (0x00034f6f) level_4_battery_lsc

0xade5,	// (0x00034f78) level_5_battery_lsc

0xadee,	// (0x00034f81) level_6_battery_lsc

0xad8b,	// (0x00034f1e) level_7_battery_lsc

0xadf7,	// (0x00034f8a) scroll_handle_focus_pane_g1

0xae00,	// (0x00034f93) scroll_handle_focus_pane_g2

0xae09,	// (0x00034f9c) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x000398a8) scroll_handle_focus_pane_g

0x6d69,	// (0x00030efc) list_single_2graphic_pane_g1_ParamLimits

0x6d69,	// (0x00030efc) list_single_2graphic_pane_g1

0x7824,	// (0x000319b7) list_single_2graphic_pane_g2_ParamLimits

0x7824,	// (0x000319b7) list_single_2graphic_pane_g2

0x7806,	// (0x00031999) list_single_2graphic_pane_g3_ParamLimits

0x7806,	// (0x00031999) list_single_2graphic_pane_g3

0x7af0,	// (0x00031c83) list_single_2graphic_pane_g4_ParamLimits

0x7af0,	// (0x00031c83) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x000398af) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x000398af) list_single_2graphic_pane_g

0x6d75,	// (0x00030f08) list_single_2graphic_pane_t1_ParamLimits

0x6d75,	// (0x00030f08) list_single_2graphic_pane_t1

0x7afc,	// (0x00031c8f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7afc,	// (0x00031c8f) list_double2_graphic_large_graphic_pane_g1

0x6927,	// (0x00030aba) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x6927,	// (0x00030aba) list_double2_graphic_large_graphic_pane_g2

0x788f,	// (0x00031a22) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x788f,	// (0x00031a22) list_double2_graphic_large_graphic_pane_g3

0x6da3,	// (0x00030f36) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6da3,	// (0x00030f36) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x000398b8) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x000398b8) list_double2_graphic_large_graphic_pane_g

0x6daf,	// (0x00030f42) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x6daf,	// (0x00030f42) list_double2_graphic_large_graphic_pane_t1

0x6dc5,	// (0x00030f58) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x6dc5,	// (0x00030f58) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x000398c1) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x000398c1) list_double2_graphic_large_graphic_pane_t

0xaee4,	// (0x00035077) popup_fast_swap_window_ParamLimits

0xaee4,	// (0x00035077) popup_fast_swap_window

0xaf00,	// (0x00035093) popup_side_volume_key_window

0xaf1a,	// (0x000350ad) stacon_top_pane

0xaf24,	// (0x000350b7) status_pane_ParamLimits

0xaf24,	// (0x000350b7) status_pane

0xa09f,	// (0x00034232) status_small_pane

0xa12b,	// (0x000342be) control_pane

0xa12b,	// (0x000342be) stacon_bottom_pane

0xa704,	// (0x00034897) scroll_pane_cp121

0xa754,	// (0x000348e7) set_content_pane

0xeb1a,	// (0x00038cad) bg_active_tab_pane_g1_cp1

0xae12,	// (0x00034fa5) bg_active_tab_pane_g2_cp1

0xeb23,	// (0x00038cb6) bg_active_tab_pane_g3_cp1

0xeb1a,	// (0x00038cad) bg_passive_tab_pane_g1_cp1

0xae12,	// (0x00034fa5) bg_passive_tab_pane_g2_cp1

0xeb23,	// (0x00038cb6) bg_passive_tab_pane_g3_cp1

0xeb2c,	// (0x00038cbf) bg_active_tab_pane_g1_cp2

0xae12,	// (0x00034fa5) bg_active_tab_pane_g2_cp2

0xeb35,	// (0x00038cc8) bg_active_tab_pane_g3_cp2

0xeb2c,	// (0x00038cbf) bg_passive_tab_pane_g1_cp2

0xae12,	// (0x00034fa5) bg_passive_tab_pane_g2_cp2

0xeb35,	// (0x00038cc8) bg_passive_tab_pane_g3_cp2

0xeb3e,	// (0x00038cd1) bg_active_tab_pane_g1_cp3

0xae12,	// (0x00034fa5) bg_active_tab_pane_g2_cp3

0xeb47,	// (0x00038cda) bg_active_tab_pane_g3_cp3

0xeb3e,	// (0x00038cd1) bg_passive_tab_pane_g1_cp3

0xae12,	// (0x00034fa5) bg_passive_tab_pane_g2_cp3

0xeb47,	// (0x00038cda) bg_passive_tab_pane_g3_cp3

0xeb50,	// (0x00038ce3) bg_active_tab_pane_g1_cp4

0xae12,	// (0x00034fa5) bg_active_tab_pane_g2_cp4

0xeb59,	// (0x00038cec) bg_active_tab_pane_g3_cp4

0xeb50,	// (0x00038ce3) bg_passive_tab_pane_g1_cp4

0xae12,	// (0x00034fa5) bg_passive_tab_pane_g2_cp4

0xeb59,	// (0x00038cec) bg_passive_tab_pane_g3_cp4

0xae59,	// (0x00034fec) bg_active_tab_pane_g1_cp5

0xae12,	// (0x00034fa5) bg_active_tab_pane_g2_cp5

0xae62,	// (0x00034ff5) bg_active_tab_pane_g3_cp5

0xae59,	// (0x00034fec) bg_passive_tab_pane_g1_cp5

0xae12,	// (0x00034fa5) bg_passive_tab_pane_g2_cp5

0xae62,	// (0x00034ff5) bg_passive_tab_pane_g3_cp5

0xeb62,	// (0x00038cf5) list_set_graphic_pane_ParamLimits

0xeb62,	// (0x00038cf5) list_set_graphic_pane

0xa12b,	// (0x000342be) bg_set_opt_pane_cp4

0xae6b,	// (0x00034ffe) list_set_graphic_pane_g1_ParamLimits

0xae6b,	// (0x00034ffe) list_set_graphic_pane_g1

0xae77,	// (0x0003500a) list_set_graphic_pane_g2_ParamLimits

0xae77,	// (0x0003500a) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x000398c6) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x000398c6) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x00039c3d) volume_small_pane_cp_g

0xae99,	// (0x0003502c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xae99,	// (0x0003502c) list_double2_large_graphic_pane_g1_cp2

0xaea5,	// (0x00035038) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xaea5,	// (0x00035038) list_double2_large_graphic_pane_g2_cp2

0xaeb4,	// (0x00035047) list_double2_large_graphic_pane_g3_cp2

0xaebc,	// (0x0003504f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xaebc,	// (0x0003504f) list_double2_large_graphic_pane_t1_cp2

0xaed2,	// (0x00035065) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xaed2,	// (0x00035065) list_double2_large_graphic_pane_t2_cp2

0xc43e,	// (0x000365d1) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc43e,	// (0x000365d1) list_double_large_graphic_pane_g1_cp2

0xc44f,	// (0x000365e2) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc44f,	// (0x000365e2) list_double_large_graphic_pane_g2_cp2

0xafff,	// (0x00035192) list_double_large_graphic_pane_g3_cp2

0xc45e,	// (0x000365f1) list_double_large_graphic_pane_g4_cp

0xc466,	// (0x000365f9) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xc466,	// (0x000365f9) list_double_large_graphic_pane_t1_cp2

0xc47d,	// (0x00036610) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xc47d,	// (0x00036610) list_double_large_graphic_pane_t2_cp2

0xaf32,	// (0x000350c5) list_double2_graphic_pane_g1_cp2_ParamLimits

0xaf32,	// (0x000350c5) list_double2_graphic_pane_g1_cp2

0xaf3e,	// (0x000350d1) list_double2_graphic_pane_g2_cp2_ParamLimits

0xaf3e,	// (0x000350d1) list_double2_graphic_pane_g2_cp2

0xaf4d,	// (0x000350e0) list_double2_graphic_pane_g3_cp2

0xaf55,	// (0x000350e8) list_double2_graphic_pane_t1_cp2_ParamLimits

0xaf55,	// (0x000350e8) list_double2_graphic_pane_t1_cp2

0xaf6b,	// (0x000350fe) list_double2_graphic_pane_t2_cp2_ParamLimits

0xaf6b,	// (0x000350fe) list_double2_graphic_pane_t2_cp2

0xaf7d,	// (0x00035110) list_single_number_heading_pane_g1_cp2_ParamLimits

0xaf7d,	// (0x00035110) list_single_number_heading_pane_g1_cp2

0xaf89,	// (0x0003511c) list_single_number_heading_pane_g2_cp2

0xaf91,	// (0x00035124) list_single_number_heading_pane_t1_cp2_ParamLimits

0xaf91,	// (0x00035124) list_single_number_heading_pane_t1_cp2

0xafa7,	// (0x0003513a) list_single_number_heading_pane_t2_cp2_ParamLimits

0xafa7,	// (0x0003513a) list_single_number_heading_pane_t2_cp2

0xafb9,	// (0x0003514c) list_single_number_heading_pane_t3_cp2_ParamLimits

0xafb9,	// (0x0003514c) list_single_number_heading_pane_t3_cp2

0xaf7d,	// (0x00035110) list_single_heading_pane_g1_cp2_ParamLimits

0xaf7d,	// (0x00035110) list_single_heading_pane_g1_cp2

0xaf89,	// (0x0003511c) list_single_heading_pane_g2_cp2

0xaf91,	// (0x00035124) list_single_heading_pane_t1_cp2_ParamLimits

0xaf91,	// (0x00035124) list_single_heading_pane_t1_cp2

0xc248,	// (0x000363db) list_single_heading_pane_t2_cp2_ParamLimits

0xc248,	// (0x000363db) list_single_heading_pane_t2_cp2

0xc198,	// (0x0003632b) list_double_graphic_pane_g1_cp2_ParamLimits

0xc198,	// (0x0003632b) list_double_graphic_pane_g1_cp2

0xc1a4,	// (0x00036337) list_double_graphic_pane_g2_cp2_ParamLimits

0xc1a4,	// (0x00036337) list_double_graphic_pane_g2_cp2

0xc1b3,	// (0x00036346) list_double_graphic_pane_g3_cp2

0xc1bb,	// (0x0003634e) list_double_graphic_pane_t1_cp2_ParamLimits

0xc1bb,	// (0x0003634e) list_double_graphic_pane_t1_cp2

0xc1d1,	// (0x00036364) list_double_graphic_pane_t2_cp2_ParamLimits

0xc1d1,	// (0x00036364) list_double_graphic_pane_t2_cp2

0xaff3,	// (0x00035186) list_double_number_pane_g1_cp2_ParamLimits

0xaff3,	// (0x00035186) list_double_number_pane_g1_cp2

0xafff,	// (0x00035192) list_double_number_pane_g2_cp2

0xc15e,	// (0x000362f1) list_double_number_pane_t1_cp2_ParamLimits

0xc15e,	// (0x000362f1) list_double_number_pane_t1_cp2

0xc170,	// (0x00036303) list_double_number_pane_t2_cp2_ParamLimits

0xc170,	// (0x00036303) list_double_number_pane_t2_cp2

0xc186,	// (0x00036319) list_double_number_pane_t3_cp2_ParamLimits

0xc186,	// (0x00036319) list_double_number_pane_t3_cp2

0xc0d6,	// (0x00036269) list_single_graphic_pane_g1_cp2_ParamLimits

0xc0d6,	// (0x00036269) list_single_graphic_pane_g1_cp2

0xaf7d,	// (0x00035110) list_single_graphic_pane_g2_cp2_ParamLimits

0xaf7d,	// (0x00035110) list_single_graphic_pane_g2_cp2

0xaf89,	// (0x0003511c) list_single_graphic_pane_g3_cp2

0xc0ae,	// (0x00036241) list_single_graphic_pane_t1_cp2_ParamLimits

0xc0ae,	// (0x00036241) list_single_graphic_pane_t1_cp2

0xaf7d,	// (0x00035110) list_single_number_pane_g1_cp2_ParamLimits

0xaf7d,	// (0x00035110) list_single_number_pane_g1_cp2

0xaf89,	// (0x0003511c) list_single_number_pane_g2_cp2

0xc0ae,	// (0x00036241) list_single_number_pane_t1_cp2_ParamLimits

0xc0ae,	// (0x00036241) list_single_number_pane_t1_cp2

0xc0c4,	// (0x00036257) list_single_number_pane_t2_cp2_ParamLimits

0xc0c4,	// (0x00036257) list_single_number_pane_t2_cp2

0xaea5,	// (0x00035038) list_double2_pane_g1_cp2_ParamLimits

0xaea5,	// (0x00035038) list_double2_pane_g1_cp2

0xaeb4,	// (0x00035047) list_double2_pane_g2_cp2

0xafcb,	// (0x0003515e) list_double2_pane_t1_cp2_ParamLimits

0xafcb,	// (0x0003515e) list_double2_pane_t1_cp2

0xafe1,	// (0x00035174) list_double2_pane_t2_cp2_ParamLimits

0xafe1,	// (0x00035174) list_double2_pane_t2_cp2

0xaff3,	// (0x00035186) list_double_pane_g1_cp2_ParamLimits

0xaff3,	// (0x00035186) list_double_pane_g1_cp2

0xafff,	// (0x00035192) list_double_pane_g2_cp2

0xb007,	// (0x0003519a) list_double_pane_t1_cp2_ParamLimits

0xb007,	// (0x0003519a) list_double_pane_t1_cp2

0xb01d,	// (0x000351b0) list_double_pane_t2_cp2_ParamLimits

0xb01d,	// (0x000351b0) list_double_pane_t2_cp2

0xb04c,	// (0x000351df) list_single_pane_cp2_g3

0xaf7d,	// (0x00035110) list_single_pane_g1_cp2_ParamLimits

0xaf7d,	// (0x00035110) list_single_pane_g1_cp2

0xaf89,	// (0x0003511c) list_single_pane_g2_cp2

0xb05c,	// (0x000351ef) list_single_pane_t1_cp2_ParamLimits

0xb05c,	// (0x000351ef) list_single_pane_t1_cp2

0xb074,	// (0x00035207) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xb074,	// (0x00035207) list_single_large_graphic_pane_g1_cp2

0xb080,	// (0x00035213) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xb080,	// (0x00035213) list_single_large_graphic_pane_g2_cp2

0xb08c,	// (0x0003521f) list_single_large_graphic_pane_g3_cp2

0xb094,	// (0x00035227) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xb094,	// (0x00035227) list_single_large_graphic_pane_g4_cp1

0xb0ae,	// (0x00035241) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xb0ae,	// (0x00035241) list_single_large_graphic_pane_t1_cp2

0xc090,	// (0x00036223) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xc090,	// (0x00036223) list_single_graphic_heading_pane_g1_cp2

0xc06b,	// (0x000361fe) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xc06b,	// (0x000361fe) list_single_graphic_heading_pane_g4_cp2

0xaf89,	// (0x0003511c) list_single_graphic_heading_pane_g5_cp2

0xaf91,	// (0x00035124) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xaf91,	// (0x00035124) list_single_graphic_heading_pane_t1_cp2

0xc09c,	// (0x0003622f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xc09c,	// (0x0003622f) list_single_graphic_heading_pane_t2_cp2

0xc05f,	// (0x000361f2) list_single_2graphic_pane_g1_cp2_ParamLimits

0xc05f,	// (0x000361f2) list_single_2graphic_pane_g1_cp2

0xc06b,	// (0x000361fe) list_single_2graphic_pane_g2_cp2_ParamLimits

0xc06b,	// (0x000361fe) list_single_2graphic_pane_g2_cp2

0xaf89,	// (0x0003511c) list_single_2graphic_pane_g3_cp2

0xb53c,	// (0x000356cf) list_single_2graphic_pane_g4_cp2_ParamLimits

0xb53c,	// (0x000356cf) list_single_2graphic_pane_g4_cp2

0xc07a,	// (0x0003620d) list_single_2graphic_pane_t1_cp2_ParamLimits

0xc07a,	// (0x0003620d) list_single_2graphic_pane_t1_cp2

0xa0a9,	// (0x0003423c) list_highlight_pane_g10_cp1

0xbc33,	// (0x00035dc6) list_highlight_pane_g1_cp1

0xbc3b,	// (0x00035dce) list_highlight_pane_g2_cp1

0xbc43,	// (0x00035dd6) list_highlight_pane_g3_cp1

0xbc4b,	// (0x00035dde) list_highlight_pane_g4_cp1

0xbc53,	// (0x00035de6) list_highlight_pane_g5_cp1

0xbc5b,	// (0x00035dee) list_highlight_pane_g6_cp1

0xbc63,	// (0x00035df6) list_highlight_pane_g7_cp1

0xbc6b,	// (0x00035dfe) list_highlight_pane_g8_cp1

0xbc73,	// (0x00035e06) list_highlight_pane_g9_cp1

0xefed,	// (0x00039180) form_field_slider_pane_t3

0xeffb,	// (0x0003918e) form_field_slider_pane_t4

0xbb7d,	// (0x00035d10) slider_form_pane_ParamLimits

0xbb7d,	// (0x00035d10) slider_form_pane

0xa12b,	// (0x000342be) control_abbreviations

0xa12b,	// (0x000342be) control_conventions

0xa12b,	// (0x000342be) control_definitions

0xa12b,	// (0x000342be) format_table_attribute

0xc292,	// (0x00036425) bg_popup_preview_window_pane_g9

0xa12b,	// (0x000342be) format_table_data2

0xa12b,	// (0x000342be) format_table_data3

0xa12b,	// (0x000342be) format_table_data_example

0x0008,

0xa12b,	// (0x000342be) intro_purpose

0xf8c8,	// (0x00039a5b) bg_popup_preview_window_pane_g

0xa12b,	// (0x000342be) texts_category

0xa12b,	// (0x000342be) texts_graphics

0xb0c4,	// (0x00035257) text_digital

0xb0d3,	// (0x00035266) text_primary

0xb0e2,	// (0x00035275) text_primary_small

0xb0f1,	// (0x00035284) text_secondary

0xb100,	// (0x00035293) text_title

0xc706,	// (0x00036899) bg_passive_tab_pane_g1_cp3_srt

0xae12,	// (0x00034fa5) bg_passive_tab_pane_g2_cp3_srt

0xc70f,	// (0x000368a2) bg_passive_tab_pane_g3_cp3_srt

0xa179,	// (0x0003430c) bg_active_tab_pane_cp3_srt_ParamLimits

0xa179,	// (0x0003430c) bg_active_tab_pane_cp3_srt

0xbce4,	// (0x00035e77) tabs_4_active_pane_srt_g1

0xdabc,	// (0x00037c4f) tabs_4_active_pane_srt_t1_ParamLimits

0xdabc,	// (0x00037c4f) tabs_4_active_pane_srt_t1

0xc706,	// (0x00036899) bg_active_tab_pane_g1_cp3_copy1

0xae12,	// (0x00034fa5) bg_active_tab_pane_g2_cp3_copy1

0xc70f,	// (0x000368a2) bg_active_tab_pane_g3_cp3_copy1

0xa179,	// (0x0003430c) tabs_2_long_active_pane_srt_ParamLimits

0xa179,	// (0x0003430c) tabs_2_long_active_pane_srt

0xa179,	// (0x0003430c) tabs_2_long_passive_pane_srt_ParamLimits

0xa179,	// (0x0003430c) tabs_2_long_passive_pane_srt

0xe968,	// (0x00038afb) bg_passive_tab_pane_cp4_srt_ParamLimits

0xe968,	// (0x00038afb) bg_passive_tab_pane_cp4_srt

0xc641,	// (0x000367d4) bg_passive_tab_pane_g1_cp4_srt

0xae12,	// (0x00034fa5) bg_passive_tab_pane_g2_cp4_srt

0xc64a,	// (0x000367dd) bg_passive_tab_pane_g3_cp4_srt

0xe947,	// (0x00038ada) bg_active_tab_pane_cp4_srt_ParamLimits

0xe947,	// (0x00038ada) bg_active_tab_pane_cp4_srt

0xe955,	// (0x00038ae8) tabs_2_long_active_pane_srt_t1_ParamLimits

0xe955,	// (0x00038ae8) tabs_2_long_active_pane_srt_t1

0xc641,	// (0x000367d4) bg_active_tab_pane_g1_cp4_srt

0xae12,	// (0x00034fa5) bg_active_tab_pane_g2_cp4_srt

0xc64a,	// (0x000367dd) bg_active_tab_pane_g3_cp4_srt

0xa2b4,	// (0x00034447) tabs_3_long_active_pane_srt_ParamLimits

0xa2b4,	// (0x00034447) tabs_3_long_active_pane_srt

0xa2b4,	// (0x00034447) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xa2b4,	// (0x00034447) tabs_3_long_passive_pane_cp_srt

0xa2b4,	// (0x00034447) tabs_3_long_passive_pane_srt_ParamLimits

0xa2b4,	// (0x00034447) tabs_3_long_passive_pane_srt

0xe968,	// (0x00038afb) bg_passive_tab_pane_cp5_srt_ParamLimits

0xe968,	// (0x00038afb) bg_passive_tab_pane_cp5_srt

0xae59,	// (0x00034fec) bg_passive_tab_pane_g1_cp5_srt

0xae12,	// (0x00034fa5) bg_passive_tab_pane_g2_cp5_srt

0xae62,	// (0x00034ff5) bg_passive_tab_pane_g3_cp5_srt

0xe947,	// (0x00038ada) bg_active_tab_pane_cp5_srt_ParamLimits

0xe947,	// (0x00038ada) bg_active_tab_pane_cp5_srt

0xe974,	// (0x00038b07) tabs_3_long_active_pane_srt_t1_ParamLimits

0xe974,	// (0x00038b07) tabs_3_long_active_pane_srt_t1

0xae59,	// (0x00034fec) bg_active_tab_pane_g1_cp5_srt

0xae12,	// (0x00034fa5) bg_active_tab_pane_g2_cp5_srt

0xae62,	// (0x00034ff5) bg_active_tab_pane_g3_cp5_srt

0xc633,	// (0x000367c6) navi_text_pane_srt_t1

0xc62b,	// (0x000367be) navi_icon_pane_srt_g1

0xb218,	// (0x000353ab) midp_editing_number_pane_srt

0xb10f,	// (0x000352a2) midp_ticker_pane_srt

0xb220,	// (0x000353b3) midp_ticker_pane_srt_g1

0xb228,	// (0x000353bb) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x000398e5) midp_ticker_pane_srt_g

0xb230,	// (0x000353c3) midp_ticker_pane_srt_t1

0xc61c,	// (0x000367af) midp_editing_number_pane_t1_copy1

0xeb79,	// (0x00038d0c) listscroll_midp_pane

0xeb79,	// (0x00038d0c) midp_form_pane

0xb117,	// (0x000352aa) midp_info_popup_window_ParamLimits

0xb117,	// (0x000352aa) midp_info_popup_window

0xa86a,	// (0x000349fd) bg_popup_sub_pane_cp50_ParamLimits

0xa86a,	// (0x000349fd) bg_popup_sub_pane_cp50

0xb892,	// (0x00035a25) listscroll_midp_info_pane_ParamLimits

0xb892,	// (0x00035a25) listscroll_midp_info_pane

0xb87a,	// (0x00035a0d) listscroll_form_midp_pane_ParamLimits

0xb87a,	// (0x00035a0d) listscroll_form_midp_pane

0xb886,	// (0x00035a19) scroll_bar_cp050

0xefd5,	// (0x00039168) list_midp_pane

0xcef8,	// (0x0003708b) signal_pane_g2_cp

0xb7ac,	// (0x0003593f) listscroll_midp_info_pane_t1_ParamLimits

0xb7ac,	// (0x0003593f) listscroll_midp_info_pane_t1

0xb7c4,	// (0x00035957) listscroll_midp_info_pane_t2_ParamLimits

0xb7c4,	// (0x00035957) listscroll_midp_info_pane_t2

0xb802,	// (0x00035995) listscroll_midp_info_pane_t3_ParamLimits

0xb802,	// (0x00035995) listscroll_midp_info_pane_t3

0xb83c,	// (0x000359cf) listscroll_midp_info_pane_t4_ParamLimits

0xb83c,	// (0x000359cf) listscroll_midp_info_pane_t4

0x0003,

0xf803,	// (0x00039996) listscroll_midp_info_pane_t_ParamLimits

0xf803,	// (0x00039996) listscroll_midp_info_pane_t

0xa8bf,	// (0x00034a52) scroll_pane_cp21

0xb750,	// (0x000358e3) form_midp_field_choice_group_pane

0xb759,	// (0x000358ec) form_midp_field_text_pane

0xb792,	// (0x00035925) form_midp_field_time_pane

0xb79a,	// (0x0003592d) form_midp_gauge_slider_pane

0xb7a3,	// (0x00035936) form_midp_gauge_wait_pane

0xa12b,	// (0x000342be) form_midp_image_pane

0x6ef8,	// (0x0003108b) list_single_midp_pane_ParamLimits

0x6ef8,	// (0x0003108b) list_single_midp_pane

0xb71e,	// (0x000358b1) form_midp_field_text_pane_t1

0xb574,	// (0x00035707) input_focus_pane_cp050

0xb73f,	// (0x000358d2) list_midp_form_text_pane

0xb6ed,	// (0x00035880) form_midp_field_choice_group_pane_t1

0xb6fb,	// (0x0003588e) input_focus_pane_cp051

0xb70f,	// (0x000358a2) list_midp_choice_pane

0xa12b,	// (0x000342be) status_idle_pane

0xb6d1,	// (0x00035864) form_midp_field_time_pane_t1

0xa0a9,	// (0x0003423c) wait_anim_pane_g2_copy1

0xb6df,	// (0x00035872) form_midp_field_time_pane_t2

0x0001,

0xb182,	// (0x00035315) aid_navinavi_width_2_pane

0xf7fe,	// (0x00039991) form_midp_field_time_pane_t

0xa12b,	// (0x000342be) input_focus_pane_cp052

0xa12b,	// (0x000342be) bg_input_focus_pane_cp040

0xb6ad,	// (0x00035840) form_midp_gauge_slider_pane_t1

0xb6bb,	// (0x0003584e) form_midp_gauge_slider_pane_t2

0xefb9,	// (0x0003914c) form_midp_gauge_slider_pane_t3

0xefc7,	// (0x0003915a) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f5,	// (0x00039988) form_midp_gauge_slider_pane_t

0xb6c9,	// (0x0003585c) form_midp_slider_pane

0xa179,	// (0x0003430c) bg_input_focus_pane_cp041_ParamLimits

0xa179,	// (0x0003430c) bg_input_focus_pane_cp041

0xb67d,	// (0x00035810) form_midp_gauge_wait_pane_t1_ParamLimits

0xb67d,	// (0x00035810) form_midp_gauge_wait_pane_t1

0xb68f,	// (0x00035822) form_midp_gauge_wait_pane_t2_ParamLimits

0xb68f,	// (0x00035822) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f0,	// (0x00039983) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f0,	// (0x00039983) form_midp_gauge_wait_pane_t

0xb6a1,	// (0x00035834) form_midp_wait_pane_ParamLimits

0xb6a1,	// (0x00035834) form_midp_wait_pane

0xb647,	// (0x000357da) form_midp_image_pane_g1

0xb650,	// (0x000357e3) form_midp_image_pane_t1

0xb65f,	// (0x000357f2) form_midp_image_pane_t2

0xb66e,	// (0x00035801) form_midp_image_pane_t3

0x0002,

0xf7e9,	// (0x0003997c) form_midp_image_pane_t

0xb63e,	// (0x000357d1) list_single_midp_pane_g1

0x6ee9,	// (0x0003107c) list_single_midp_pane_t1

0xb62a,	// (0x000357bd) list_midp_form_item_pane_ParamLimits

0xb62a,	// (0x000357bd) list_midp_form_item_pane

0xb12a,	// (0x000352bd) list_midp_form_item_pane_t1

0xb139,	// (0x000352cc) midp_ticker_pane_g1

0xb145,	// (0x000352d8) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x000398cb) midp_ticker_pane_g

0xb151,	// (0x000352e4) midp_ticker_pane_t1

0xc61c,	// (0x000367af) midp_editing_number_pane_t1

0xc6b0,	// (0x00036843) midp_editing_number_pane

0xc6bc,	// (0x0003684f) midp_ticker_pane

0xc60c,	// (0x0003679f) ai_message_heading_pane

0xa12b,	// (0x000342be) bg_popup_window_pane_cp14

0xc614,	// (0x000367a7) listscroll_ai_message_pane

0xc596,	// (0x00036729) ai_message_heading_pane_g1_ParamLimits

0xc596,	// (0x00036729) ai_message_heading_pane_g1

0xc5a2,	// (0x00036735) ai_message_heading_pane_g2_ParamLimits

0xc5a2,	// (0x00036735) ai_message_heading_pane_g2

0xc5ae,	// (0x00036741) ai_message_heading_pane_g3_ParamLimits

0xc5ae,	// (0x00036741) ai_message_heading_pane_g3

0xc5ba,	// (0x0003674d) ai_message_heading_pane_g4_ParamLimits

0xc5ba,	// (0x0003674d) ai_message_heading_pane_g4

0x0003,

0xf92a,	// (0x00039abd) ai_message_heading_pane_g_ParamLimits

0xf92a,	// (0x00039abd) ai_message_heading_pane_g

0xc5c6,	// (0x00036759) ai_message_heading_pane_t1_ParamLimits

0xc5c6,	// (0x00036759) ai_message_heading_pane_t1

0xc5e0,	// (0x00036773) ai_message_heading_pane_t2_ParamLimits

0xc5e0,	// (0x00036773) ai_message_heading_pane_t2

0x0001,

0xf933,	// (0x00039ac6) ai_message_heading_pane_t_ParamLimits

0xf933,	// (0x00039ac6) ai_message_heading_pane_t

0xc5f2,	// (0x00036785) bg_popup_heading_pane_cp1_ParamLimits

0xc5f2,	// (0x00036785) bg_popup_heading_pane_cp1

0xc584,	// (0x00036717) list_ai_message_pane_ParamLimits

0xc584,	// (0x00036717) list_ai_message_pane

0xa8bf,	// (0x00034a52) scroll_pane_cp10

0xc520,	// (0x000366b3) list_ai_message_pane_g1

0xc528,	// (0x000366bb) list_ai_message_pane_g2

0x0001,

0xf907,	// (0x00039a9a) list_ai_message_pane_g

0xc530,	// (0x000366c3) list_ai_message_pane_t1_ParamLimits

0xc530,	// (0x000366c3) list_ai_message_pane_t1

0xc545,	// (0x000366d8) list_ai_message_pane_t2_ParamLimits

0xc545,	// (0x000366d8) list_ai_message_pane_t2

0xc55a,	// (0x000366ed) list_ai_message_pane_t3_ParamLimits

0xc55a,	// (0x000366ed) list_ai_message_pane_t3

0xc56f,	// (0x00036702) list_ai_message_pane_t4_ParamLimits

0xc56f,	// (0x00036702) list_ai_message_pane_t4

0x0003,

0xf90c,	// (0x00039a9f) list_ai_message_pane_t_ParamLimits

0xf90c,	// (0x00039a9f) list_ai_message_pane_t

0xc50e,	// (0x000366a1) cell_ai_soft_ind_pane_ParamLimits

0xc50e,	// (0x000366a1) cell_ai_soft_ind_pane

0xb163,	// (0x000352f6) cell_ai_soft_ind_pane_g1_ParamLimits

0xb163,	// (0x000352f6) cell_ai_soft_ind_pane_g1

0xa12b,	// (0x000342be) grid_highlight_cp1

0xb170,	// (0x00035303) text_secondary_cp56_ParamLimits

0xb170,	// (0x00035303) text_secondary_cp56

0xc4e3,	// (0x00036676) example_general_pane_ParamLimits

0xc4e3,	// (0x00036676) example_general_pane

0xc4ef,	// (0x00036682) example_parent_pane_g1_ParamLimits

0xc4ef,	// (0x00036682) example_parent_pane_g1

0xc4fb,	// (0x0003668e) example_parent_pane_t1_ParamLimits

0xc4fb,	// (0x0003668e) example_parent_pane_t1

0x811e,	// (0x000322b1) popup_preview_text_window_ParamLimits

0x811e,	// (0x000322b1) popup_preview_text_window

0xb054,	// (0x000351e7) list_single_pane_cp2_g4

0xa390,	// (0x00034523) bg_popup_preview_window_pane_ParamLimits

0xa390,	// (0x00034523) bg_popup_preview_window_pane

0xc29a,	// (0x0003642d) popup_preview_text_window_t1_ParamLimits

0xc29a,	// (0x0003642d) popup_preview_text_window_t1

0xc2b8,	// (0x0003644b) popup_preview_text_window_t2_ParamLimits

0xc2b8,	// (0x0003644b) popup_preview_text_window_t2

0xc301,	// (0x00036494) popup_preview_text_window_t3_ParamLimits

0xc301,	// (0x00036494) popup_preview_text_window_t3

0xc346,	// (0x000364d9) popup_preview_text_window_t4_ParamLimits

0xc346,	// (0x000364d9) popup_preview_text_window_t4

0x0004,

0xf8db,	// (0x00039a6e) popup_preview_text_window_t_ParamLimits

0xf8db,	// (0x00039a6e) popup_preview_text_window_t

0xc3c4,	// (0x00036557) scroll_pane_cp11

0xb4f4,	// (0x00035687) bg_popup_preview_window_pane_g1

0xc25a,	// (0x000363ed) bg_popup_preview_window_pane_g2

0xc262,	// (0x000363f5) bg_popup_preview_window_pane_g3

0xc26a,	// (0x000363fd) bg_popup_preview_window_pane_g4

0xc272,	// (0x00036405) bg_popup_preview_window_pane_g5

0xc27a,	// (0x0003640d) bg_popup_preview_window_pane_g6

0xc282,	// (0x00036415) bg_popup_preview_window_pane_g7

0xc28a,	// (0x0003641d) bg_popup_preview_window_pane_g8

0x7501,	// (0x00031694) aid_popup_width_pane

0x8100,	// (0x00032293) popup_midp_note_alarm_window_ParamLimits

0x8100,	// (0x00032293) popup_midp_note_alarm_window

0xa75d,	// (0x000348f0) data_form_pane_ParamLimits

0x6bcf,	// (0x00030d62) form_field_data_pane_g1

0x6bd7,	// (0x00030d6a) form_field_data_pane_t1_ParamLimits

0xa769,	// (0x000348fc) input_focus_pane_ParamLimits

0xa777,	// (0x0003490a) data_form_wide_pane_ParamLimits

0x6bef,	// (0x00030d82) form_field_data_wide_pane_g1

0x6bfb,	// (0x00030d8e) form_field_data_wide_pane_t1_ParamLimits

0xa583,	// (0x00034716) input_focus_pane_cp6_ParamLimits

0xe921,	// (0x00038ab4) input_popup_find_pane_g1_ParamLimits

0xe921,	// (0x00038ab4) input_popup_find_pane_g1

0x7976,	// (0x00031b09) aid_navi_side_left_pane

0x7986,	// (0x00031b19) aid_navi_side_right_pane

0xbd42,	// (0x00035ed5) bg_popup_window_pane_cp30_ParamLimits

0xbd42,	// (0x00035ed5) bg_popup_window_pane_cp30

0xbdbc,	// (0x00035f4f) popup_midp_note_alarm_window_g1_ParamLimits

0xbdbc,	// (0x00035f4f) popup_midp_note_alarm_window_g1

0xbdec,	// (0x00035f7f) popup_midp_note_alarm_window_t1_ParamLimits

0xbdec,	// (0x00035f7f) popup_midp_note_alarm_window_t1

0xbe8d,	// (0x00036020) popup_midp_note_alarm_window_t2_ParamLimits

0xbe8d,	// (0x00036020) popup_midp_note_alarm_window_t2

0xbf3b,	// (0x000360ce) popup_midp_note_alarm_window_t3_ParamLimits

0xbf3b,	// (0x000360ce) popup_midp_note_alarm_window_t3

0xbf63,	// (0x000360f6) popup_midp_note_alarm_window_t4_ParamLimits

0xbf63,	// (0x000360f6) popup_midp_note_alarm_window_t4

0xbf83,	// (0x00036116) popup_midp_note_alarm_window_t5_ParamLimits

0xbf83,	// (0x00036116) popup_midp_note_alarm_window_t5

0x000a,

0xf878,	// (0x00039a0b) popup_midp_note_alarm_window_t_ParamLimits

0xf878,	// (0x00039a0b) popup_midp_note_alarm_window_t

0xc02f,	// (0x000361c2) wait_bar_pane_cp1_ParamLimits

0xc02f,	// (0x000361c2) wait_bar_pane_cp1

0xa12b,	// (0x000342be) wait_anim_pane_copy1

0xa12b,	// (0x000342be) wait_border_pane_copy1

0xba4a,	// (0x00035bdd) wait_border_pane_g1_copy1

0x6c15,	// (0x00030da8) form_field_popup_pane_g1

0x6c1d,	// (0x00030db0) form_field_popup_pane_t1_ParamLimits

0xa769,	// (0x000348fc) input_focus_pane_cp7_ParamLimits

0xa75d,	// (0x000348f0) list_form_pane_ParamLimits

0x6c35,	// (0x00030dc8) form_field_popup_wide_pane_g1

0x6c3d,	// (0x00030dd0) form_field_popup_wide_pane_t1_ParamLimits

0xa769,	// (0x000348fc) input_focus_pane_cp8_ParamLimits

0xa797,	// (0x0003492a) list_form_wide_pane_ParamLimits

0xc737,	// (0x000368ca) aid_size_cell_graphic_pane

0x6cc9,	// (0x00030e5c) data_form_pane_t1_ParamLimits

0x6f1f,	// (0x000310b2) data_form_wide_pane_t1_ParamLimits

0xed1f,	// (0x00038eb2) bg_status_flat_pane

0xda3a,	// (0x00037bcd) title_pane_t1_ParamLimits

0xa141,	// (0x000342d4) title_pane_t2_ParamLimits

0xa167,	// (0x000342fa) title_pane_t3_ParamLimits

0xf532,	// (0x000396c5) title_pane_t_ParamLimits

0xea12,	// (0x00038ba5) level_1_signal_ParamLimits

0xea1f,	// (0x00038bb2) level_2_signal_ParamLimits

0xea2c,	// (0x00038bbf) level_3_signal_ParamLimits

0xea39,	// (0x00038bcc) level_4_signal_ParamLimits

0xea46,	// (0x00038bd9) level_5_signal_ParamLimits

0xea53,	// (0x00038be6) level_6_signal_ParamLimits

0xea60,	// (0x00038bf3) level_7_signal_ParamLimits

0xea12,	// (0x00038ba5) level_1_battery_ParamLimits

0xea1f,	// (0x00038bb2) level_2_battery_ParamLimits

0xea2c,	// (0x00038bbf) level_3_battery_ParamLimits

0xea39,	// (0x00038bcc) level_4_battery_ParamLimits

0xea46,	// (0x00038bd9) level_5_battery_ParamLimits

0xea53,	// (0x00038be6) level_6_battery_ParamLimits

0xea60,	// (0x00038bf3) level_7_battery_ParamLimits

0xbc33,	// (0x00035dc6) bg_status_flat_pane_g1

0xbc3b,	// (0x00035dce) bg_status_flat_pane_g2

0xbc43,	// (0x00035dd6) bg_status_flat_pane_g3

0xbc4b,	// (0x00035dde) bg_status_flat_pane_g4

0xbc53,	// (0x00035de6) bg_status_flat_pane_g5

0xbc5b,	// (0x00035dee) bg_status_flat_pane_g6

0xbc63,	// (0x00035df6) bg_status_flat_pane_g7

0xdaa2,	// (0x00037c35) tabs_3_active_pane_t1_ParamLimits

0xdaa2,	// (0x00037c35) tabs_3_passive_pane_t1_ParamLimits

0xdabc,	// (0x00037c4f) tabs_4_active_pane_t1_ParamLimits

0xdabc,	// (0x00037c4f) tabs_4_1_passive_pane_t1_ParamLimits

0xe935,	// (0x00038ac8) tabs_2_active_pane_t1_ParamLimits

0xe935,	// (0x00038ac8) tabs_2_passive_pane_t1_ParamLimits

0xe947,	// (0x00038ada) bg_active_tab_pane_cp4_ParamLimits

0xe955,	// (0x00038ae8) tabs_2_long_active_pane_t1_ParamLimits

0xe968,	// (0x00038afb) bg_passive_tab_pane_cp4_ParamLimits

0x8362,	// (0x000324f5) list_single_midp_graphic_pane_t1_ParamLimits

0xe947,	// (0x00038ada) bg_active_tab_pane_cp5_ParamLimits

0xe974,	// (0x00038b07) tabs_3_long_active_pane_t1_ParamLimits

0xe968,	// (0x00038afb) bg_passive_tab_pane_cp5_ParamLimits

0x8362,	// (0x000324f5) list_single_midp_graphic_pane_t1

0xed1f,	// (0x00038eb2) bg_status_flat_pane_ParamLimits

0xb3d3,	// (0x00035566) indicator_pane_cp2_ParamLimits

0xb3d3,	// (0x00035566) indicator_pane_cp2

0xee68,	// (0x00038ffb) navi_pane_srt_ParamLimits

0xee68,	// (0x00038ffb) navi_pane_srt

0xb3fb,	// (0x0003558e) popup_clock_digital_analogue_window_cp1

0xa1c5,	// (0x00034358) indicator_pane_t1

0xb10f,	// (0x000352a2) copy_highlight_pane

0xb10f,	// (0x000352a2) cursor_graphics_pane

0xb10f,	// (0x000352a2) graphic_within_text_pane

0xb10f,	// (0x000352a2) link_highlight_pane

0xc387,	// (0x0003651a) popup_preview_text_window_t5_ParamLimits

0xc387,	// (0x0003651a) popup_preview_text_window_t5

0xb18a,	// (0x0003531d) cursor_digital_pane

0xb18a,	// (0x0003531d) cursor_primary_pane

0xb19b,	// (0x0003532e) cursor_primary_small_pane

0xb1a3,	// (0x00035336) cursor_secondary_pane

0xb1ab,	// (0x0003533e) cursor_title_pane

0xb18a,	// (0x0003531d) link_highlight_digital_pane

0xb192,	// (0x00035325) link_highlight_primary_pane

0xb19b,	// (0x0003532e) link_highlight_primary_small_pane

0xb1a3,	// (0x00035336) link_highlight_secondary_pane

0xb1ab,	// (0x0003533e) link_highlight_title_pane

0xb18a,	// (0x0003531d) copy_highlight_digital_pane

0xb18a,	// (0x0003531d) copy_highlight_primary_pane

0xb19b,	// (0x0003532e) copy_highlight_primary_small_pane

0xb1a3,	// (0x00035336) copy_highlight_secondary_pane

0xb1ab,	// (0x0003533e) copy_highlight_title_pane

0xb1a3,	// (0x00035336) graphic_text_digital_pane

0xbcb3,	// (0x00035e46) graphic_text_primary_pane

0xbcbc,	// (0x00035e4f) graphic_text_primary_small_pane

0xb19b,	// (0x0003532e) graphic_text_secondary_pane

0xb18a,	// (0x0003531d) graphic_text_title_pane

0xec20,	// (0x00038db3) cursor_primary_pane_g1

0xbca5,	// (0x00035e38) cursor_text_primary_t1

0xf019,	// (0x000391ac) cursor_primary_small_pane_g1

0xbc97,	// (0x00035e2a) cursor_text_primary_small_t1

0xf011,	// (0x000391a4) cursor_primary_small_pane_g1_copy1

0xbc89,	// (0x00035e1c) cursor_text_primary_small_t1_copy1

0xbc7b,	// (0x00035e0e) cursor_text_title_t1

0xf009,	// (0x0003919c) cursor_title_pane_g1

0xec20,	// (0x00038db3) cursor_digital_pane_g1

0xb1b3,	// (0x00035346) cursor_text_digital_t1

0xb1c1,	// (0x00035354) link_highlight_primary_pane_g1

0xbc24,	// (0x00035db7) link_highlight_primary_pane_t1

0xb1c1,	// (0x00035354) link_highlight_primary_small_pane_g1

0xb1c9,	// (0x0003535c) link_highlight_primary_small_pane_t1

0xb1d8,	// (0x0003536b) link_highlight_secondary_pane_g1

0xb1e0,	// (0x00035373) link_highlight_secondary_pane_t1

0xbb89,	// (0x00035d1c) link_highlight_title_pane_g1

0xbba0,	// (0x00035d33) link_highlight_title_pane_t1

0xbb89,	// (0x00035d1c) link_highlight_digital_pane_g1

0xbb91,	// (0x00035d24) link_highlight_digital_pane_t1

0xba65,	// (0x00035bf8) copy_highlight_primary_pane_g1

0xba8b,	// (0x00035c1e) copy_highlight_primary_pane_t1

0xba65,	// (0x00035bf8) copy_highlight_primary_small_pane_g1

0xba7c,	// (0x00035c0f) copy_highlight_primary_small_pane_t1

0xb1ef,	// (0x00035382) copy_highlight_secondary_pane_g1

0xb1f7,	// (0x0003538a) copy_highlight_secondary_pane_t1

0xba65,	// (0x00035bf8) copy_highlight_title_pane_g1

0xba6d,	// (0x00035c00) copy_highlight_title_pane_t1

0xba65,	// (0x00035bf8) copy_highlight_digital_pane_g1

0xc832,	// (0x000369c5) copy_highlight_digital_pane_t1

0xc786,	// (0x00036919) graphic_text_primary_pane_g1

0xc816,	// (0x000369a9) graphic_text_primary_pane_t1

0xc824,	// (0x000369b7) graphic_text_primary_pane_t2

0x0001,

0xf9a2,	// (0x00039b35) graphic_text_primary_pane_t

0xc7f2,	// (0x00036985) graphic_text_primary_small_pane_g1

0xc7fa,	// (0x0003698d) graphic_text_primary_small_pane_t1

0xc808,	// (0x0003699b) graphic_text_primary_small_pane_t2

0x0001,

0xf99d,	// (0x00039b30) graphic_text_primary_small_pane_t

0xc7ce,	// (0x00036961) graphic_text_secondary_pane_g1

0xc7d6,	// (0x00036969) graphic_text_secondary_pane_t1

0xc7e4,	// (0x00036977) graphic_text_secondary_pane_t2

0x0001,

0xf998,	// (0x00039b2b) graphic_text_secondary_pane_t

0xc7aa,	// (0x0003693d) graphic_text_title_pane_g1

0xc7b2,	// (0x00036945) graphic_text_title_pane_t1

0xc7c0,	// (0x00036953) graphic_text_title_pane_t2

0x0001,

0xf993,	// (0x00039b26) graphic_text_title_pane_t

0xc786,	// (0x00036919) graphic_text_digital_pane_g1

0xc78e,	// (0x00036921) graphic_text_digital_pane_t1

0xc79c,	// (0x0003692f) graphic_text_digital_pane_t2

0x0001,

0xf98e,	// (0x00039b21) graphic_text_digital_pane_t

0xa179,	// (0x0003430c) navi_icon_pane_srt_ParamLimits

0xa179,	// (0x0003430c) navi_icon_pane_srt

0xa12b,	// (0x000342be) navi_midp_pane_srt

0xa12b,	// (0x000342be) navi_navi_pane_srt

0xa179,	// (0x0003430c) navi_text_pane_srt_ParamLimits

0xa179,	// (0x0003430c) navi_text_pane_srt

0xc213,	// (0x000363a6) navi_navi_icon_text_pane_srt

0xc21b,	// (0x000363ae) navi_navi_pane_srt_g1_ParamLimits

0xc21b,	// (0x000363ae) navi_navi_pane_srt_g1

0xc22d,	// (0x000363c0) navi_navi_pane_srt_g2_ParamLimits

0xc22d,	// (0x000363c0) navi_navi_pane_srt_g2

0x0001,

0xf8c3,	// (0x00039a56) navi_navi_pane_srt_g_ParamLimits

0xf8c3,	// (0x00039a56) navi_navi_pane_srt_g

0xc23f,	// (0x000363d2) navi_navi_tabs_pane_srt

0xc213,	// (0x000363a6) navi_navi_text_pane_srt

0xc213,	// (0x000363a6) navi_navi_volume_pane_srt

0xc777,	// (0x0003690a) navi_navi_text_pane_srt_t1

0x8734,	// (0x000328c7) navi_navi_volume_pane_srt_g1

0x873c,	// (0x000328cf) volume_small_pane_srt_ParamLimits

0x873c,	// (0x000328cf) volume_small_pane_srt

0x7c39,	// (0x00031dcc) volume_small_pane_srt_g1_ParamLimits

0x7c39,	// (0x00031dcc) volume_small_pane_srt_g1

0x7c49,	// (0x00031ddc) volume_small_pane_srt_g2_ParamLimits

0x7c49,	// (0x00031ddc) volume_small_pane_srt_g2

0x7c5a,	// (0x00031ded) volume_small_pane_srt_g3_ParamLimits

0x7c5a,	// (0x00031ded) volume_small_pane_srt_g3

0x7c6b,	// (0x00031dfe) volume_small_pane_srt_g4_ParamLimits

0x7c6b,	// (0x00031dfe) volume_small_pane_srt_g4

0x7c7c,	// (0x00031e0f) volume_small_pane_srt_g5_ParamLimits

0x7c7c,	// (0x00031e0f) volume_small_pane_srt_g5

0x7c8d,	// (0x00031e20) volume_small_pane_srt_g6_ParamLimits

0x7c8d,	// (0x00031e20) volume_small_pane_srt_g6

0x7c9e,	// (0x00031e31) volume_small_pane_srt_g7_ParamLimits

0x7c9e,	// (0x00031e31) volume_small_pane_srt_g7

0x7caf,	// (0x00031e42) volume_small_pane_srt_g8_ParamLimits

0x7caf,	// (0x00031e42) volume_small_pane_srt_g8

0x7cc0,	// (0x00031e53) volume_small_pane_srt_g9_ParamLimits

0x7cc0,	// (0x00031e53) volume_small_pane_srt_g9

0x7cd1,	// (0x00031e64) volume_small_pane_srt_g10_ParamLimits

0x7cd1,	// (0x00031e64) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x000398d0) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x000398d0) volume_small_pane_srt_g

0xa439,	// (0x000345cc) query_popup_data_pane_cp2

0xc75d,	// (0x000368f0) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xc75d,	// (0x000368f0) navi_navi_icon_text_pane_srt_t1

0xbcb3,	// (0x00035e46) navi_tabs_2_long_pane_srt

0xbcb3,	// (0x00035e46) navi_tabs_2_pane_srt

0xbcb3,	// (0x00035e46) navi_tabs_3_long_pane_srt

0xbcb3,	// (0x00035e46) navi_tabs_3_pane_srt

0xbcb3,	// (0x00035e46) navi_tabs_4_pane_srt

0x8714,	// (0x000328a7) tabs_2_active_pane_srt_ParamLimits

0x8714,	// (0x000328a7) tabs_2_active_pane_srt

0x8724,	// (0x000328b7) tabs_2_passive_pane_srt_ParamLimits

0x8724,	// (0x000328b7) tabs_2_passive_pane_srt

0xb32b,	// (0x000354be) bg_passive_tab_pane_cp1_srt_ParamLimits

0xb32b,	// (0x000354be) bg_passive_tab_pane_cp1_srt

0xbcf8,	// (0x00035e8b) bg_passive_tab_pane_g1_cp1_srt

0xae12,	// (0x00034fa5) bg_passive_tab_pane_g2_cp1_srt

0xbd01,	// (0x00035e94) bg_passive_tab_pane_g3_cp1_srt

0xa179,	// (0x0003430c) bg_active_tab_pane_cp1_srt_ParamLimits

0xa179,	// (0x0003430c) bg_active_tab_pane_cp1_srt

0xbd0a,	// (0x00035e9d) tabs_2_active_pane_srt_g1

0xe935,	// (0x00038ac8) tabs_2_active_pane_srt_t1_ParamLimits

0xe935,	// (0x00038ac8) tabs_2_active_pane_srt_t1

0xbcf8,	// (0x00035e8b) bg_active_tab_pane_g1_cp1_srt

0xae12,	// (0x00034fa5) bg_active_tab_pane_g2_cp1_srt

0xbd01,	// (0x00035e94) bg_active_tab_pane_g3_cp1_srt

0x86e1,	// (0x00032874) tabs_3_active_pane_srt_ParamLimits

0x86e1,	// (0x00032874) tabs_3_active_pane_srt

0x86f2,	// (0x00032885) tabs_3_passive_pane_cp_srt_ParamLimits

0x86f2,	// (0x00032885) tabs_3_passive_pane_cp_srt

0x8703,	// (0x00032896) tabs_3_passive_pane_srt_ParamLimits

0x8703,	// (0x00032896) tabs_3_passive_pane_srt

0xb32b,	// (0x000354be) bg_passive_tab_pane_cp2_srt_ParamLimits

0xb32b,	// (0x000354be) bg_passive_tab_pane_cp2_srt

0xb206,	// (0x00035399) bg_passive_tab_pane_g1_cp2_srt

0xae12,	// (0x00034fa5) bg_passive_tab_pane_g2_cp2_srt

0xb20f,	// (0x000353a2) bg_passive_tab_pane_g3_cp2_srt

0xa179,	// (0x0003430c) bg_active_tab_pane_cp2_srt_ParamLimits

0xa179,	// (0x0003430c) bg_active_tab_pane_cp2_srt

0xc74d,	// (0x000368e0) tabs_3_active_pane_srt_g1

0xdaa2,	// (0x00037c35) tabs_3_active_pane_srt_t1_ParamLimits

0xdaa2,	// (0x00037c35) tabs_3_active_pane_srt_t1

0xb206,	// (0x00035399) bg_active_tab_pane_g1_cp2_srt

0xae12,	// (0x00034fa5) bg_active_tab_pane_g2_cp2_srt

0xb20f,	// (0x000353a2) bg_active_tab_pane_g3_cp2_srt

0x8699,	// (0x0003282c) tabs_4_active_pane_srt_ParamLimits

0x8699,	// (0x0003282c) tabs_4_active_pane_srt

0x86ab,	// (0x0003283e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x86ab,	// (0x0003283e) tabs_4_passive_pane_cp2_srt

0x7e3a,	// (0x00031fcd) aid_size_cell_toolbar

0xe968,	// (0x00038afb) main_idle_act_pane_ParamLimits

0x7fb8,	// (0x0003214b) popup_large_graphic_colour_window_ParamLimits

0x826f,	// (0x00032402) popup_toolbar_window_ParamLimits

0x826f,	// (0x00032402) popup_toolbar_window

0x6f64,	// (0x000310f7) list_single_graphic_2heading_pane_ParamLimits

0x6f64,	// (0x000310f7) list_single_graphic_2heading_pane

0xaaaf,	// (0x00034c42) aid_size_cell_apps_grid_lsc_pane

0xaac1,	// (0x00034c54) aid_size_cell_apps_grid_prt_pane

0xb32b,	// (0x000354be) bg_wml_button_pane_cp1_ParamLimits

0xb32b,	// (0x000354be) bg_wml_button_pane_cp1

0xb71e,	// (0x000358b1) form_midp_field_text_pane_t1_ParamLimits

0xb574,	// (0x00035707) input_focus_pane_cp050_ParamLimits

0xb73f,	// (0x000358d2) list_midp_form_text_pane_ParamLimits

0xb6fb,	// (0x0003588e) input_focus_pane_cp051_ParamLimits

0xb70f,	// (0x000358a2) list_midp_choice_pane_ParamLimits

0xb5f8,	// (0x0003578b) list_single_2graphic_pane_cp3_ParamLimits

0xb5f8,	// (0x0003578b) list_single_2graphic_pane_cp3

0xb60b,	// (0x0003579e) list_single_midp_graphic_pane_ParamLimits

0xb60b,	// (0x0003579e) list_single_midp_graphic_pane

0x6de7,	// (0x00030f7a) list_single_graphic_2heading_pane_g1_ParamLimits

0x6de7,	// (0x00030f7a) list_single_graphic_2heading_pane_g1

0x6df3,	// (0x00030f86) list_single_graphic_2heading_pane_g4_ParamLimits

0x6df3,	// (0x00030f86) list_single_graphic_2heading_pane_g4

0x67bd,	// (0x00030950) list_single_graphic_2heading_pane_g5_ParamLimits

0x67bd,	// (0x00030950) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x00039923) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x00039923) list_single_graphic_2heading_pane_g

0x6dff,	// (0x00030f92) list_single_graphic_2heading_pane_t1_ParamLimits

0x6dff,	// (0x00030f92) list_single_graphic_2heading_pane_t1

0x6e13,	// (0x00030fa6) list_single_graphic_2heading_pane_t2_ParamLimits

0x6e13,	// (0x00030fa6) list_single_graphic_2heading_pane_t2

0x6e2d,	// (0x00030fc0) list_single_graphic_2heading_pane_t3_ParamLimits

0x6e2d,	// (0x00030fc0) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x0003992a) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x0003992a) list_single_graphic_2heading_pane_t

0xb43e,	// (0x000355d1) bg_popup_sub_pane_cp2

0xb464,	// (0x000355f7) grid_toobar_pane

0x82fe,	// (0x00032491) cell_toolbar_pane_ParamLimits

0x82fe,	// (0x00032491) cell_toolbar_pane

0xb49a,	// (0x0003562d) cell_toolbar_pane_g1_ParamLimits

0xb49a,	// (0x0003562d) cell_toolbar_pane_g1

0xb4ac,	// (0x0003563f) cell_toolbar_pane_g2_ParamLimits

0xb4ac,	// (0x0003563f) cell_toolbar_pane_g2

0x0001,

0xf79e,	// (0x00039931) cell_toolbar_pane_g_ParamLimits

0xf79e,	// (0x00039931) cell_toolbar_pane_g

0xb4ce,	// (0x00035661) grid_highlight_pane_cp2_ParamLimits

0xb4ce,	// (0x00035661) grid_highlight_pane_cp2

0xb4e8,	// (0x0003567b) toolbar_button_pane

0xb4f4,	// (0x00035687) toolbar_button_pane_g1

0xb4fc,	// (0x0003568f) toolbar_button_pane_g2

0xb504,	// (0x00035697) toolbar_button_pane_g3

0xb50c,	// (0x0003569f) toolbar_button_pane_g4

0xb514,	// (0x000356a7) toolbar_button_pane_g5

0xb51c,	// (0x000356af) toolbar_button_pane_g6

0xb524,	// (0x000356b7) toolbar_button_pane_g7

0xb52c,	// (0x000356bf) toolbar_button_pane_g8

0xb534,	// (0x000356c7) toolbar_button_pane_g9

0x0009,

0xf7a3,	// (0x00039936) toolbar_button_pane_g

0x832d,	// (0x000324c0) list_single_2graphic_pane_g1_cp3_ParamLimits

0x832d,	// (0x000324c0) list_single_2graphic_pane_g1_cp3

0x8339,	// (0x000324cc) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8339,	// (0x000324cc) list_single_2graphic_pane_g2_cp3

0xaf89,	// (0x0003511c) list_single_2graphic_pane_g3_cp3

0xb53c,	// (0x000356cf) list_single_2graphic_pane_g4_cp3_ParamLimits

0xb53c,	// (0x000356cf) list_single_2graphic_pane_g4_cp3

0x8348,	// (0x000324db) list_single_2graphic_pane_t1_cp3_ParamLimits

0x8348,	// (0x000324db) list_single_2graphic_pane_t1_cp3

0xaf7d,	// (0x00035110) list_single_midp_graphic_pane_g2_ParamLimits

0xaf7d,	// (0x00035110) list_single_midp_graphic_pane_g2

0x6dd7,	// (0x00030f6a) aid_zoom_text_primary

0x7e42,	// (0x00031fd5) aid_zoom_text_secondary

0xb2a6,	// (0x00035439) status_small_pane_g7_ParamLimits

0xb2a6,	// (0x00035439) status_small_pane_g7

0xb2c9,	// (0x0003545c) status_small_pane_t1_ParamLimits

0xda1d,	// (0x00037bb0) title_pane_g2

0x0003,

0xf529,	// (0x000396bc) title_pane_g

0xdbe5,	// (0x00037d78) aid_size_cell_colour_1_pane_ParamLimits

0xdbe5,	// (0x00037d78) aid_size_cell_colour_1_pane

0xdbf9,	// (0x00037d8c) aid_size_cell_colour_2_pane_ParamLimits

0xdbf9,	// (0x00037d8c) aid_size_cell_colour_2_pane

0xdc0d,	// (0x00037da0) aid_size_cell_colour_3_pane_ParamLimits

0xdc0d,	// (0x00037da0) aid_size_cell_colour_3_pane

0xe8b3,	// (0x00038a46) aid_size_cell_colour_4_pane_ParamLimits

0xe8b3,	// (0x00038a46) aid_size_cell_colour_4_pane

0x78d8,	// (0x00031a6b) title_pane_stacon_g1_ParamLimits

0x78d8,	// (0x00031a6b) title_pane_stacon_g1

0xbae2,	// (0x00035c75) popup_note_wait_window_g3_ParamLimits

0xbae2,	// (0x00035c75) popup_note_wait_window_g3

0xbb58,	// (0x00035ceb) popup_note_wait_window_t5_ParamLimits

0xbb58,	// (0x00035ceb) popup_note_wait_window_t5

0xa12b,	// (0x000342be) main_feb_china_hwr_fs_writing_pane

0x7ecd,	// (0x00032060) popup_feb_china_hwr_fs_window_ParamLimits

0x7ecd,	// (0x00032060) popup_feb_china_hwr_fs_window

0x8378,	// (0x0003250b) aid_size_cell_hwr_fs_ParamLimits

0x8378,	// (0x0003250b) aid_size_cell_hwr_fs

0xb574,	// (0x00035707) bg_popup_sub_pane_cp3_ParamLimits

0xb574,	// (0x00035707) bg_popup_sub_pane_cp3

0x838d,	// (0x00032520) grid_hwr_fs_pane_ParamLimits

0x838d,	// (0x00032520) grid_hwr_fs_pane

0x83a1,	// (0x00032534) linegrid_hwr_fs_pane_ParamLimits

0x83a1,	// (0x00032534) linegrid_hwr_fs_pane

0x83b1,	// (0x00032544) cell_hwr_fs_pane_ParamLimits

0x83b1,	// (0x00032544) cell_hwr_fs_pane

0xb580,	// (0x00035713) linegrid_hwr_fs_pane_g1_ParamLimits

0xb580,	// (0x00035713) linegrid_hwr_fs_pane_g1

0xef8d,	// (0x00039120) linegrid_hwr_fs_pane_g2_ParamLimits

0xef8d,	// (0x00039120) linegrid_hwr_fs_pane_g2

0xb58c,	// (0x0003571f) linegrid_hwr_fs_pane_g3_ParamLimits

0xb58c,	// (0x0003571f) linegrid_hwr_fs_pane_g3

0x83cf,	// (0x00032562) linegrid_hwr_fs_pane_g4_ParamLimits

0x83cf,	// (0x00032562) linegrid_hwr_fs_pane_g4

0x83e9,	// (0x0003257c) linegrid_hwr_fs_pane_g5_ParamLimits

0x83e9,	// (0x0003257c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ce,	// (0x00039961) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ce,	// (0x00039961) linegrid_hwr_fs_pane_g

0xb598,	// (0x0003572b) cell_hwr_fs_pane_g1_ParamLimits

0xb598,	// (0x0003572b) cell_hwr_fs_pane_g1

0xb40c,	// (0x0003559f) cell_hwr_fs_pane_g2_ParamLimits

0xb40c,	// (0x0003559f) cell_hwr_fs_pane_g2

0xef9f,	// (0x00039132) cell_hwr_fs_pane_g3_ParamLimits

0xef9f,	// (0x00039132) cell_hwr_fs_pane_g3

0xefac,	// (0x0003913f) cell_hwr_fs_pane_g4_ParamLimits

0xefac,	// (0x0003913f) cell_hwr_fs_pane_g4

0x0003,

0xf7d9,	// (0x0003996c) cell_hwr_fs_pane_g_ParamLimits

0xf7d9,	// (0x0003996c) cell_hwr_fs_pane_g

0x83ff,	// (0x00032592) cell_hwr_fs_pane_t1

0xa12b,	// (0x000342be) grid_highlight_pane_cp6

0xa12b,	// (0x000342be) main_idle_act2_pane

0xa8a6,	// (0x00034a39) aid_inside_area_popup_secondary

0xf037,	// (0x000391ca) aid_inside_area_window_primary_ParamLimits

0xf037,	// (0x000391ca) aid_inside_area_window_primary

0xc841,	// (0x000369d4) ai2_news_ticker_pane

0xc849,	// (0x000369dc) aid_size_cell_ai1_link_ParamLimits

0xc849,	// (0x000369dc) aid_size_cell_ai1_link

0xf343,	// (0x000394d6) popup_ai2_data_window_ParamLimits

0xf343,	// (0x000394d6) popup_ai2_data_window

0xc863,	// (0x000369f6) popup_ai2_link_window_ParamLimits

0xc863,	// (0x000369f6) popup_ai2_link_window

0xb574,	// (0x00035707) bg_popup_sub_pane_cp4_ParamLimits

0xb574,	// (0x00035707) bg_popup_sub_pane_cp4

0xc877,	// (0x00036a0a) grid_ai2_link_pane_ParamLimits

0xc877,	// (0x00036a0a) grid_ai2_link_pane

0xc88e,	// (0x00036a21) popup_ai2_link_window_g1_ParamLimits

0xc88e,	// (0x00036a21) popup_ai2_link_window_g1

0xc89a,	// (0x00036a2d) popup_ai2_link_window_g2_ParamLimits

0xc89a,	// (0x00036a2d) popup_ai2_link_window_g2

0x0001,

0xf9a7,	// (0x00039b3a) popup_ai2_link_window_g_ParamLimits

0xf9a7,	// (0x00039b3a) popup_ai2_link_window_g

0xc8a9,	// (0x00036a3c) ai2_mp_button_pane

0xc8b1,	// (0x00036a44) ai2_mp_volume_pane

0xb6fb,	// (0x0003588e) bg_popup_sub_pane_cp5_ParamLimits

0xb6fb,	// (0x0003588e) bg_popup_sub_pane_cp5

0xc8b9,	// (0x00036a4c) heading_ai2_gene_pane_ParamLimits

0xc8b9,	// (0x00036a4c) heading_ai2_gene_pane

0xc8c5,	// (0x00036a58) list_ai2_gene_pane_ParamLimits

0xc8c5,	// (0x00036a58) list_ai2_gene_pane

0xc90d,	// (0x00036aa0) cell_ai2_link_pane_ParamLimits

0xc90d,	// (0x00036aa0) cell_ai2_link_pane

0xc923,	// (0x00036ab6) cell_ai2_link_pane_g1

0xa12b,	// (0x000342be) grid_highlight_pane_cp7

0x8751,	// (0x000328e4) ai2_mp_volume_pane_g1

0xc9c0,	// (0x00036b53) ai2_mp_volume_pane_g2

0xf36e,	// (0x00039501) list_ai2_gene_pane_t1

0xc9c8,	// (0x00036b5b) ai2_mp_volume_pane_g3

0x0002,

0xf9c0,	// (0x00039b53) ai2_mp_volume_pane_g

0x8759,	// (0x000328ec) volume_small_pane_cp3

0xc9d0,	// (0x00036b63) aid_size_cell_ai2_button

0xc9d8,	// (0x00036b6b) grid_ai2_button_pane

0xc9e1,	// (0x00036b74) cell_ai2_button_pane_ParamLimits

0xc9e1,	// (0x00036b74) cell_ai2_button_pane

0xa0a9,	// (0x0003423c) cell_ai2_button_pane_g1

0xa12b,	// (0x000342be) grid_highlight_pane_cp8

0xc980,	// (0x00036b13) ai2_gene_pane_t1_ParamLimits

0xc980,	// (0x00036b13) ai2_gene_pane_t1

0x7e30,	// (0x00031fc3) aid_height_parent_landscape

0xc668,	// (0x000367fb) aid_height_set_list

0xc674,	// (0x00036807) aid_size_parent

0xc737,	// (0x000368ca) aid_size_cell_graphic_pane_ParamLimits

0xc8d5,	// (0x00036a68) popup_ai2_data_window_g1_ParamLimits

0xc8d5,	// (0x00036a68) popup_ai2_data_window_g1

0xc8e1,	// (0x00036a74) ai2_news_ticker_pane_g1

0xc8e9,	// (0x00036a7c) ai2_news_ticker_pane_g2

0x0001,

0xf9ac,	// (0x00039b3f) ai2_news_ticker_pane_g

0xc8f1,	// (0x00036a84) ai2_news_ticker_pane_t1

0xc8ff,	// (0x00036a92) ai2_news_ticker_pane_t2

0x0001,

0xf9b1,	// (0x00039b44) ai2_news_ticker_pane_t

0xc92c,	// (0x00036abf) heading_ai2_gene_pane_g1

0xc934,	// (0x00036ac7) heading_ai2_gene_pane_t1_ParamLimits

0xc934,	// (0x00036ac7) heading_ai2_gene_pane_t1

0xc949,	// (0x00036adc) list_highlight_pane_cp6

0xf357,	// (0x000394ea) ai2_gene_pane_ParamLimits

0xf357,	// (0x000394ea) ai2_gene_pane

0xf37c,	// (0x0003950f) list_ai2_gene_pane_t2

0x0001,

0xf9b6,	// (0x00039b49) list_ai2_gene_pane_t

0xc951,	// (0x00036ae4) list_highlight_pane_cp8_ParamLimits

0xc951,	// (0x00036ae4) list_highlight_pane_cp8

0xc962,	// (0x00036af5) ai2_gene_pane_g1_ParamLimits

0xc962,	// (0x00036af5) ai2_gene_pane_g1

0xc974,	// (0x00036b07) ai2_gene_pane_g2_ParamLimits

0xc974,	// (0x00036b07) ai2_gene_pane_g2

0x0001,

0xf9bb,	// (0x00039b4e) ai2_gene_pane_g_ParamLimits

0xf9bb,	// (0x00039b4e) ai2_gene_pane_g

0xa704,	// (0x00034897) scroll_pane_cp12

0x7de7,	// (0x00031f7a) control_pane_t3_ParamLimits

0x7de7,	// (0x00031f7a) control_pane_t3

0xb2ba,	// (0x0003544d) status_small_pane_g8_ParamLimits

0xb2ba,	// (0x0003544d) status_small_pane_g8

0x7f8d,	// (0x00032120) popup_find_window_ParamLimits

0x8112,	// (0x000322a5) popup_note_image_window_ParamLimits

0x687a,	// (0x00030a0d) list_double2_graphic_pane_vc_g1_ParamLimits

0x687a,	// (0x00030a0d) list_double2_graphic_pane_vc_g1

0x7883,	// (0x00031a16) list_double2_graphic_pane_vc_g2_ParamLimits

0x7883,	// (0x00031a16) list_double2_graphic_pane_vc_g2

0x788f,	// (0x00031a22) list_double2_graphic_pane_vc_g3_ParamLimits

0x788f,	// (0x00031a22) list_double2_graphic_pane_vc_g3

0x0002,

0xf5f5,	// (0x00039788) list_double2_graphic_pane_vc_g_ParamLimits

0xf5f5,	// (0x00039788) list_double2_graphic_pane_vc_g

0x6886,	// (0x00030a19) list_double2_graphic_pane_vc_t1_ParamLimits

0x6886,	// (0x00030a19) list_double2_graphic_pane_vc_t1

0x7883,	// (0x00031a16) list_single_heading_pane_vc_g1_ParamLimits

0x7883,	// (0x00031a16) list_single_heading_pane_vc_g1

0x788f,	// (0x00031a22) list_single_heading_pane_vc_g2_ParamLimits

0x788f,	// (0x00031a22) list_single_heading_pane_vc_g2

0x0001,

0xf7b8,	// (0x0003994b) list_single_heading_pane_vc_g_ParamLimits

0xf7b8,	// (0x0003994b) list_single_heading_pane_vc_g

0x6e45,	// (0x00030fd8) list_single_heading_pane_vc_t1_ParamLimits

0x6e45,	// (0x00030fd8) list_single_heading_pane_vc_t1

0x6e5b,	// (0x00030fee) list_single_heading_pane_vc_t2_ParamLimits

0x6e5b,	// (0x00030fee) list_single_heading_pane_vc_t2

0x0001,

0xf7bd,	// (0x00039950) list_single_heading_pane_vc_t_ParamLimits

0xf7bd,	// (0x00039950) list_single_heading_pane_vc_t

0x6e6d,	// (0x00031000) list_setting_number_pane_vc_g1_ParamLimits

0x6e6d,	// (0x00031000) list_setting_number_pane_vc_g1

0x6e79,	// (0x0003100c) list_setting_number_pane_vc_g2_ParamLimits

0x6e79,	// (0x0003100c) list_setting_number_pane_vc_g2

0x0001,

0xf7c2,	// (0x00039955) list_setting_number_pane_vc_g_ParamLimits

0xf7c2,	// (0x00039955) list_setting_number_pane_vc_g

0x6e85,	// (0x00031018) list_setting_number_pane_vc_t1_ParamLimits

0x6e85,	// (0x00031018) list_setting_number_pane_vc_t1

0x6e99,	// (0x0003102c) list_setting_number_pane_vc_t2_ParamLimits

0x6e99,	// (0x0003102c) list_setting_number_pane_vc_t2

0x6eb5,	// (0x00031048) list_setting_number_pane_vc_t3_ParamLimits

0x6eb5,	// (0x00031048) list_setting_number_pane_vc_t3

0x0002,

0xf7c7,	// (0x0003995a) list_setting_number_pane_vc_t_ParamLimits

0xf7c7,	// (0x0003995a) list_setting_number_pane_vc_t

0x6edd,	// (0x00031070) set_value_pane_vc_ParamLimits

0x6edd,	// (0x00031070) set_value_pane_vc

0x6f64,	// (0x000310f7) list_double2_graphic_pane_vc_ParamLimits

0x6f64,	// (0x000310f7) list_double2_graphic_pane_vc

0x862b,	// (0x000327be) list_double2_large_graphic_pane_vc_ParamLimits

0x862b,	// (0x000327be) list_double2_large_graphic_pane_vc

0x6f64,	// (0x000310f7) list_double2_pane_vc_ParamLimits

0x6f64,	// (0x000310f7) list_double2_pane_vc

0x6f64,	// (0x000310f7) list_double_graphic_heading_pane_vc_ParamLimits

0x6f64,	// (0x000310f7) list_double_graphic_heading_pane_vc

0x6f64,	// (0x000310f7) list_double_graphic_pane_vc_ParamLimits

0x6f64,	// (0x000310f7) list_double_graphic_pane_vc

0x6f64,	// (0x000310f7) list_double_heading_pane_vc_ParamLimits

0x6f64,	// (0x000310f7) list_double_heading_pane_vc

0x863c,	// (0x000327cf) list_double_large_graphic_pane_vc_ParamLimits

0x863c,	// (0x000327cf) list_double_large_graphic_pane_vc

0x6f64,	// (0x000310f7) list_double_number_pane_vc_ParamLimits

0x6f64,	// (0x000310f7) list_double_number_pane_vc

0x6f64,	// (0x000310f7) list_double_pane_vc_ParamLimits

0x6f64,	// (0x000310f7) list_double_pane_vc

0x6f64,	// (0x000310f7) list_double_time_pane_vc_ParamLimits

0x6f64,	// (0x000310f7) list_double_time_pane_vc

0x6f64,	// (0x000310f7) list_setting_number_pane_vc_ParamLimits

0x6f64,	// (0x000310f7) list_setting_number_pane_vc

0x6f64,	// (0x000310f7) list_setting_pane_vc_ParamLimits

0x6f64,	// (0x000310f7) list_setting_pane_vc

0x6f64,	// (0x000310f7) list_single_graphic_heading_pane_vc_ParamLimits

0x6f64,	// (0x000310f7) list_single_graphic_heading_pane_vc

0x6f64,	// (0x000310f7) list_single_heading_pane_vc_ParamLimits

0x6f64,	// (0x000310f7) list_single_heading_pane_vc

0x8658,	// (0x000327eb) list_single_number_heading_pane_vc_ParamLimits

0x8658,	// (0x000327eb) list_single_number_heading_pane_vc

0x687a,	// (0x00030a0d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x687a,	// (0x00030a0d) list_double_graphic_heading_pane_vc_g1

0x7883,	// (0x00031a16) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x7883,	// (0x00031a16) list_double_graphic_heading_pane_vc_g2

0x788f,	// (0x00031a22) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x788f,	// (0x00031a22) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf5f5,	// (0x00039788) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf5f5,	// (0x00039788) list_double_graphic_heading_pane_vc_g

0x6fa1,	// (0x00031134) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x6fa1,	// (0x00031134) list_double_graphic_heading_pane_vc_t1

0x6fb7,	// (0x0003114a) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x6fb7,	// (0x0003114a) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c7,	// (0x00039b5a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c7,	// (0x00039b5a) list_double_graphic_heading_pane_vc_t

0x6e6d,	// (0x00031000) list_setting_pane_vc_g1_ParamLimits

0x6e6d,	// (0x00031000) list_setting_pane_vc_g1

0x6e79,	// (0x0003100c) list_setting_pane_vc_g2_ParamLimits

0x6e79,	// (0x0003100c) list_setting_pane_vc_g2

0x0001,

0xf7c2,	// (0x00039955) list_setting_pane_vc_g_ParamLimits

0xf7c2,	// (0x00039955) list_setting_pane_vc_g

0x6fcf,	// (0x00031162) list_setting_pane_vc_t1_ParamLimits

0x6fcf,	// (0x00031162) list_setting_pane_vc_t1

0x6fe3,	// (0x00031176) list_setting_pane_vc_t2_ParamLimits

0x6fe3,	// (0x00031176) list_setting_pane_vc_t2

0x0001,

0xfa0a,	// (0x00039b9d) list_setting_pane_vc_t_ParamLimits

0xfa0a,	// (0x00039b9d) list_setting_pane_vc_t

0x6edd,	// (0x00031070) set_value_pane_cp_vc_ParamLimits

0x6edd,	// (0x00031070) set_value_pane_cp_vc

0x7883,	// (0x00031a16) list_single_number_heading_pane_vc_g1_ParamLimits

0x7883,	// (0x00031a16) list_single_number_heading_pane_vc_g1

0x788f,	// (0x00031a22) list_single_number_heading_pane_vc_g2_ParamLimits

0x788f,	// (0x00031a22) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b8,	// (0x0003994b) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b8,	// (0x0003994b) list_single_number_heading_pane_vc_g

0x6e45,	// (0x00030fd8) list_single_number_heading_pane_vc_t1_ParamLimits

0x6e45,	// (0x00030fd8) list_single_number_heading_pane_vc_t1

0x6ff7,	// (0x0003118a) list_single_number_heading_pane_vc_t2_ParamLimits

0x6ff7,	// (0x0003118a) list_single_number_heading_pane_vc_t2

0x7009,	// (0x0003119c) list_single_number_heading_pane_vc_t3_ParamLimits

0x7009,	// (0x0003119c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0f,	// (0x00039ba2) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0f,	// (0x00039ba2) list_single_number_heading_pane_vc_t

0x687a,	// (0x00030a0d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x687a,	// (0x00030a0d) list_single_graphic_heading_pane_vc_g1

0x7883,	// (0x00031a16) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x7883,	// (0x00031a16) list_single_graphic_heading_pane_vc_g4

0x788f,	// (0x00031a22) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x788f,	// (0x00031a22) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf5f5,	// (0x00039788) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf5f5,	// (0x00039788) list_single_graphic_heading_pane_vc_g

0x6e45,	// (0x00030fd8) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6e45,	// (0x00030fd8) list_single_graphic_heading_pane_vc_t1

0x701b,	// (0x000311ae) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x701b,	// (0x000311ae) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa16,	// (0x00039ba9) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa16,	// (0x00039ba9) list_single_graphic_heading_pane_vc_t

0x7883,	// (0x00031a16) list_double2_pane_vc_g1_ParamLimits

0x7883,	// (0x00031a16) list_double2_pane_vc_g1

0x788f,	// (0x00031a22) list_double2_pane_vc_g2_ParamLimits

0x788f,	// (0x00031a22) list_double2_pane_vc_g2

0x0001,

0xf7b8,	// (0x0003994b) list_double2_pane_vc_g_ParamLimits

0xf7b8,	// (0x0003994b) list_double2_pane_vc_g

0x702d,	// (0x000311c0) list_double2_pane_vc_t1_ParamLimits

0x702d,	// (0x000311c0) list_double2_pane_vc_t1

0x7833,	// (0x000319c6) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7833,	// (0x000319c6) list_double2_large_graphic_pane_vc_g1

0x783f,	// (0x000319d2) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x783f,	// (0x000319d2) list_double2_large_graphic_pane_vc_g2

0x784b,	// (0x000319de) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x784b,	// (0x000319de) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x00039758) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x00039758) list_double2_large_graphic_pane_vc_g

0x6770,	// (0x00030903) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6770,	// (0x00030903) list_double2_large_graphic_pane_vc_t1

0x7043,	// (0x000311d6) list_double_time_pane_vc_g1_ParamLimits

0x7043,	// (0x000311d6) list_double_time_pane_vc_g1

0x704f,	// (0x000311e2) list_double_time_pane_vc_g2_ParamLimits

0x704f,	// (0x000311e2) list_double_time_pane_vc_g2

0x0001,

0xfa1b,	// (0x00039bae) list_double_time_pane_vc_g_ParamLimits

0xfa1b,	// (0x00039bae) list_double_time_pane_vc_g

0x705b,	// (0x000311ee) list_double_time_pane_vc_t1_ParamLimits

0x705b,	// (0x000311ee) list_double_time_pane_vc_t1

0x7079,	// (0x0003120c) list_double_time_pane_vc_t2_ParamLimits

0x7079,	// (0x0003120c) list_double_time_pane_vc_t2

0x70c2,	// (0x00031255) list_double_time_pane_vc_t3_ParamLimits

0x70c2,	// (0x00031255) list_double_time_pane_vc_t3

0x70d4,	// (0x00031267) list_double_time_pane_vc_t4_ParamLimits

0x70d4,	// (0x00031267) list_double_time_pane_vc_t4

0x0003,

0xfa20,	// (0x00039bb3) list_double_time_pane_vc_t_ParamLimits

0xfa20,	// (0x00039bb3) list_double_time_pane_vc_t

0x7883,	// (0x00031a16) list_double_pane_vc_g1_ParamLimits

0x7883,	// (0x00031a16) list_double_pane_vc_g1

0x788f,	// (0x00031a22) list_double_pane_vc_g2_ParamLimits

0x788f,	// (0x00031a22) list_double_pane_vc_g2

0x0001,

0xf7b8,	// (0x0003994b) list_double_pane_vc_g_ParamLimits

0xf7b8,	// (0x0003994b) list_double_pane_vc_g

0x70e6,	// (0x00031279) list_double_pane_vc_t1_ParamLimits

0x70e6,	// (0x00031279) list_double_pane_vc_t1

0x70f8,	// (0x0003128b) list_double_pane_vc_t2_ParamLimits

0x70f8,	// (0x0003128b) list_double_pane_vc_t2

0x0001,

0xfa29,	// (0x00039bbc) list_double_pane_vc_t_ParamLimits

0xfa29,	// (0x00039bbc) list_double_pane_vc_t

0x7883,	// (0x00031a16) list_double_number_pane_vc_g1_ParamLimits

0x7883,	// (0x00031a16) list_double_number_pane_vc_g1

0x788f,	// (0x00031a22) list_double_number_pane_vc_g2_ParamLimits

0x788f,	// (0x00031a22) list_double_number_pane_vc_g2

0x0001,

0xf7b8,	// (0x0003994b) list_double_number_pane_vc_g_ParamLimits

0xf7b8,	// (0x0003994b) list_double_number_pane_vc_g

0x710e,	// (0x000312a1) list_double_number_pane_vc_t1_ParamLimits

0x710e,	// (0x000312a1) list_double_number_pane_vc_t1

0x7122,	// (0x000312b5) list_double_number_pane_vc_t2_ParamLimits

0x7122,	// (0x000312b5) list_double_number_pane_vc_t2

0x7134,	// (0x000312c7) list_double_number_pane_vc_t3_ParamLimits

0x7134,	// (0x000312c7) list_double_number_pane_vc_t3

0x0002,

0xfa2e,	// (0x00039bc1) list_double_number_pane_vc_t_ParamLimits

0xfa2e,	// (0x00039bc1) list_double_number_pane_vc_t

0x87b3,	// (0x00032946) list_double_large_graphic_pane_vc_g1_ParamLimits

0x87b3,	// (0x00032946) list_double_large_graphic_pane_vc_g1

0x87db,	// (0x0003296e) list_double_large_graphic_pane_vc_g2_ParamLimits

0x87db,	// (0x0003296e) list_double_large_graphic_pane_vc_g2

0x87ef,	// (0x00032982) list_double_large_graphic_pane_vc_g3_ParamLimits

0x87ef,	// (0x00032982) list_double_large_graphic_pane_vc_g3

0x714a,	// (0x000312dd) list_double_large_graphic_pane_vc_g4_ParamLimits

0x714a,	// (0x000312dd) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa35,	// (0x00039bc8) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x00039bc8) list_double_large_graphic_pane_vc_g

0x715a,	// (0x000312ed) list_double_large_graphic_pane_vc_t1_ParamLimits

0x715a,	// (0x000312ed) list_double_large_graphic_pane_vc_t1

0x7174,	// (0x00031307) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7174,	// (0x00031307) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x00039bd1) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x00039bd1) list_double_large_graphic_pane_vc_t

0x7883,	// (0x00031a16) list_double_heading_pane_vc_g1_ParamLimits

0x7883,	// (0x00031a16) list_double_heading_pane_vc_g1

0x788f,	// (0x00031a22) list_double_heading_pane_vc_g2_ParamLimits

0x788f,	// (0x00031a22) list_double_heading_pane_vc_g2

0x0001,

0xf7b8,	// (0x0003994b) list_double_heading_pane_vc_g_ParamLimits

0xf7b8,	// (0x0003994b) list_double_heading_pane_vc_g

0x7194,	// (0x00031327) list_double_heading_pane_vc_t1_ParamLimits

0x7194,	// (0x00031327) list_double_heading_pane_vc_t1

0x6e45,	// (0x00030fd8) list_double_heading_pane_vc_t2_ParamLimits

0x6e45,	// (0x00030fd8) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x00039bd6) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x00039bd6) list_double_heading_pane_vc_t

0x71a6,	// (0x00031339) list_double_graphic_pane_vc_g1_ParamLimits

0x71a6,	// (0x00031339) list_double_graphic_pane_vc_g1

0x71b2,	// (0x00031345) list_double_graphic_pane_vc_g2_ParamLimits

0x71b2,	// (0x00031345) list_double_graphic_pane_vc_g2

0x7883,	// (0x00031a16) list_double_graphic_pane_vc_g3_ParamLimits

0x7883,	// (0x00031a16) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x00039bdb) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x00039bdb) list_double_graphic_pane_vc_g

0x71cf,	// (0x00031362) list_double_graphic_pane_vc_t1_ParamLimits

0x71cf,	// (0x00031362) list_double_graphic_pane_vc_t1

0x71ed,	// (0x00031380) list_double_graphic_pane_vc_t2_ParamLimits

0x71ed,	// (0x00031380) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x00039be4) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x00039be4) list_double_graphic_pane_vc_t

0x7509,	// (0x0003169c) aid_size_cell_fastswap

0x7511,	// (0x000316a4) aid_size_cell_touch_ParamLimits

0x7511,	// (0x000316a4) aid_size_cell_touch

0x7656,	// (0x000317e9) popup_fast_swap_wide_window_ParamLimits

0x7656,	// (0x000317e9) popup_fast_swap_wide_window

0x771c,	// (0x000318af) touch_pane_ParamLimits

0x771c,	// (0x000318af) touch_pane

0x6b2b,	// (0x00030cbe) button_value_adjust_pane_cp2

0x6b33,	// (0x00030cc6) button_value_adjust_pane_cp4

0x6b53,	// (0x00030ce6) form_field_data_pane_cp2

0x6b72,	// (0x00030d05) form_field_data_wide_pane_cp2

0xaae6,	// (0x00034c79) bg_scroll_pane_ParamLimits

0x79f9,	// (0x00031b8c) scroll_handle_pane_ParamLimits

0x7a0d,	// (0x00031ba0) scroll_sc2_down_pane_ParamLimits

0x7a0d,	// (0x00031ba0) scroll_sc2_down_pane

0xab17,	// (0x00034caa) scroll_sc2_up_pane_ParamLimits

0xab17,	// (0x00034caa) scroll_sc2_up_pane

0xf4b3,	// (0x00039646) grid_wheel_folder_pane_g1_ParamLimits

0xf4b3,	// (0x00039646) grid_wheel_folder_pane_g1

0x7bdd,	// (0x00031d70) clock_nsta_pane_cp2_ParamLimits

0x7bdd,	// (0x00031d70) clock_nsta_pane_cp2

0xeb79,	// (0x00038d0c) listscroll_midp_pane_ParamLimits

0xeb85,	// (0x00038d18) midp_canvas_pane

0x7e28,	// (0x00031fbb) nsta_clock_indic_pane

0xb311,	// (0x000354a4) listscroll_form_pane_vc

0xb319,	// (0x000354ac) listscroll_set_pane_vc_ParamLimits

0xb319,	// (0x000354ac) listscroll_set_pane_vc

0xed3b,	// (0x00038ece) clock_nsta_pane

0xed4e,	// (0x00038ee1) indicator_nsta_pane

0xb43e,	// (0x000355d1) bg_popup_sub_pane_cp2_ParamLimits

0xb452,	// (0x000355e5) find_pane_cp2_ParamLimits

0xb452,	// (0x000355e5) find_pane_cp2

0xb464,	// (0x000355f7) grid_toobar_pane_ParamLimits

0xb548,	// (0x000356db) list_form_gen_pane_vc_ParamLimits

0xb548,	// (0x000356db) list_form_gen_pane_vc

0xb55e,	// (0x000356f1) scroll_pane_cp8_vc_ParamLimits

0xb55e,	// (0x000356f1) scroll_pane_cp8_vc

0xb5ae,	// (0x00035741) data_form_wide_pane_vc_ParamLimits

0xb5ae,	// (0x00035741) data_form_wide_pane_vc

0xb5ba,	// (0x0003574d) form_field_data_wide_pane_vc_g1

0xb5c2,	// (0x00035755) form_field_data_wide_pane_vc_t1_ParamLimits

0xb5c2,	// (0x00035755) form_field_data_wide_pane_vc_t1

0xa769,	// (0x000348fc) input_focus_pane_cp6_vc_ParamLimits

0xa769,	// (0x000348fc) input_focus_pane_cp6_vc

0xefd5,	// (0x00039168) list_midp_pane_ParamLimits

0xefe1,	// (0x00039174) scroll_pane_cp16_ParamLimits

0xefe1,	// (0x00039174) scroll_pane_cp16

0xb8c8,	// (0x00035a5b) button_value_adjust_pane_ParamLimits

0xb8c8,	// (0x00035a5b) button_value_adjust_pane

0xf132,	// (0x000392c5) button_value_adjust_pane_cp6_ParamLimits

0xf132,	// (0x000392c5) button_value_adjust_pane_cp6

0xf23a,	// (0x000393cd) settings_code_pane_cp_ParamLimits

0xf23a,	// (0x000393cd) settings_code_pane_cp

0xa0a9,	// (0x0003423c) cell_touch_pane_g1

0xa0a9,	// (0x0003423c) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x00039876) cell_touch_pane_g

0xf38a,	// (0x0003951d) cell_touch_pane_cp_ParamLimits

0xf38a,	// (0x0003951d) cell_touch_pane_cp

0xf39a,	// (0x0003952d) cell_touch_pane_ParamLimits

0xf39a,	// (0x0003952d) cell_touch_pane

0xa0a9,	// (0x0003423c) scroll_sc2_down_pane_g1

0xa0a9,	// (0x0003423c) scroll_sc2_up_pane_g1

0xa12b,	// (0x000342be) bg_set_opt_pane_cp4_vc

0xc9f3,	// (0x00036b86) list_set_graphic_pane_vc_g1_ParamLimits

0xc9f3,	// (0x00036b86) list_set_graphic_pane_vc_g1

0xc9ff,	// (0x00036b92) list_set_graphic_pane_vc_g2_ParamLimits

0xc9ff,	// (0x00036b92) list_set_graphic_pane_vc_g2

0x0001,

0xf9cc,	// (0x00039b5f) list_set_graphic_pane_vc_g_ParamLimits

0xf9cc,	// (0x00039b5f) list_set_graphic_pane_vc_g

0xca0b,	// (0x00036b9e) text_primary_small_cp13_vc_ParamLimits

0xca0b,	// (0x00036b9e) text_primary_small_cp13_vc

0xca23,	// (0x00036bb6) list_set_graphic_pane_vc_ParamLimits

0xca23,	// (0x00036bb6) list_set_graphic_pane_vc

0xa12b,	// (0x000342be) input_focus_pane_cp2_vc

0xa0a9,	// (0x0003423c) setting_code_pane_vc_g1

0xca36,	// (0x00036bc9) setting_code_pane_vc_t1

0xca44,	// (0x00036bd7) set_text_pane_vc_t1_ParamLimits

0xca44,	// (0x00036bd7) set_text_pane_vc_t1

0xa12b,	// (0x000342be) input_focus_pane_cp1_vc

0xca5f,	// (0x00036bf2) list_set_text_pane_vc

0xa0a9,	// (0x0003423c) setting_text_pane_vc_g1

0xa12b,	// (0x000342be) bg_set_opt_pane_cp2_vc

0xca69,	// (0x00036bfc) setting_slider_graphic_pane_vc_g1

0xca71,	// (0x00036c04) setting_slider_graphic_pane_vc_t1

0xca7f,	// (0x00036c12) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d1,	// (0x00039b64) setting_slider_graphic_pane_vc_t

0xca8d,	// (0x00036c20) slider_set_pane_cp_vc

0xca95,	// (0x00036c28) slider_set_pane_vc_g1

0xca9e,	// (0x00036c31) slider_set_pane_vc_g2

0x0006,

0xf9d6,	// (0x00039b69) slider_set_pane_vc_g

0xa7b8,	// (0x0003494b) set_opt_bg_pane_g1_copy1

0xa7c0,	// (0x00034953) set_opt_bg_pane_g2_copy1

0xcaca,	// (0x00036c5d) set_opt_bg_pane_g3_copy1

0xa7d0,	// (0x00034963) set_opt_bg_pane_g4_copy1

0xa7d8,	// (0x0003496b) set_opt_bg_pane_g5_copy1

0xa7e0,	// (0x00034973) set_opt_bg_pane_g6_copy1

0xcad2,	// (0x00036c65) set_opt_bg_pane_g7_copy1

0xcada,	// (0x00036c6d) set_opt_bg_pane_g8_copy1

0xcae2,	// (0x00036c75) set_opt_bg_pane_g9_copy1

0xa12b,	// (0x000342be) bg_set_opt_pane_cp_vc

0xcaea,	// (0x00036c7d) setting_slider_pane_vc_t1

0xca71,	// (0x00036c04) setting_slider_pane_vc_t2

0xca7f,	// (0x00036c12) setting_slider_pane_vc_t3

0x0002,

0xf9e5,	// (0x00039b78) setting_slider_pane_vc_t

0xca8d,	// (0x00036c20) slider_set_pane_vc

0x840d,	// (0x000325a0) volume_set_pane_vc_g1

0x8762,	// (0x000328f5) volume_set_pane_vc_g2

0x876b,	// (0x000328fe) volume_set_pane_vc_g3

0x8774,	// (0x00032907) volume_set_pane_vc_g4

0x877d,	// (0x00032910) volume_set_pane_vc_g5

0x8786,	// (0x00032919) volume_set_pane_vc_g6

0x878f,	// (0x00032922) volume_set_pane_vc_g7

0x8798,	// (0x0003292b) volume_set_pane_vc_g8

0x87a1,	// (0x00032934) volume_set_pane_vc_g9

0x87aa,	// (0x0003293d) volume_set_pane_vc_g10

0x0009,

0xf9ec,	// (0x00039b7f) volume_set_pane_vc_g

0xcaf9,	// (0x00036c8c) volume_set_pane_vc

0xcb01,	// (0x00036c94) button_value_adjust_pane_cp1_vc

0xcb0b,	// (0x00036c9e) list_highlight_pane_cp2_vc

0xcb14,	// (0x00036ca7) list_set_pane_vc_ParamLimits

0xcb14,	// (0x00036ca7) list_set_pane_vc

0xcb66,	// (0x00036cf9) main_pane_set_vc_t1_ParamLimits

0xcb66,	// (0x00036cf9) main_pane_set_vc_t1

0xcb7b,	// (0x00036d0e) main_pane_set_vc_t2_ParamLimits

0xcb7b,	// (0x00036d0e) main_pane_set_vc_t2

0xcb8d,	// (0x00036d20) main_pane_set_vc_t3_ParamLimits

0xcb8d,	// (0x00036d20) main_pane_set_vc_t3

0xcb9f,	// (0x00036d32) main_pane_set_vc_t4_ParamLimits

0xcb9f,	// (0x00036d32) main_pane_set_vc_t4

0x0003,

0xfa01,	// (0x00039b94) main_pane_set_vc_t_ParamLimits

0xfa01,	// (0x00039b94) main_pane_set_vc_t

0xcbb1,	// (0x00036d44) setting_code_pane_vc_ParamLimits

0xcbb1,	// (0x00036d44) setting_code_pane_vc

0xcbc0,	// (0x00036d53) setting_slider_graphic_pane_vc

0xcbc0,	// (0x00036d53) setting_slider_pane_vc

0xcbc0,	// (0x00036d53) setting_text_pane_vc

0xcbc0,	// (0x00036d53) setting_volume_pane_vc

0xcbc8,	// (0x00036d5b) scroll_pane_cp121_vc

0xa754,	// (0x000348e7) set_content_pane_vc

0xcbd0,	// (0x00036d63) button_value_adjust_pane_g1

0xcbd9,	// (0x00036d6c) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x00039be9) button_value_adjust_pane_g

0xcbe2,	// (0x00036d75) form_field_slider_wide_pane_vc_t1_ParamLimits

0xcbe2,	// (0x00036d75) form_field_slider_wide_pane_vc_t1

0xcbf8,	// (0x00036d8b) form_field_slider_wide_pane_vc_t2_ParamLimits

0xcbf8,	// (0x00036d8b) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x00039bee) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x00039bee) form_field_slider_wide_pane_vc_t

0xa2b4,	// (0x00034447) input_focus_pane_cp10_vc_ParamLimits

0xa2b4,	// (0x00034447) input_focus_pane_cp10_vc

0xcc23,	// (0x00036db6) slider_cont_pane_cp1_vc_ParamLimits

0xcc23,	// (0x00036db6) slider_cont_pane_cp1_vc

0xca95,	// (0x00036c28) slider_form_pane_g1_cp2

0xca9e,	// (0x00036c31) slider_form_pane_g2_cp2

0xcc3e,	// (0x00036dd1) form_field_slider_pane_vc_t3

0xcc4c,	// (0x00036ddf) form_field_slider_pane_vc_t4

0xcc5a,	// (0x00036ded) slider_form_pane_vc_ParamLimits

0xcc5a,	// (0x00036ded) slider_form_pane_vc

0xcc67,	// (0x00036dfa) form_field_slider_pane_vc_t1_ParamLimits

0xcc67,	// (0x00036dfa) form_field_slider_pane_vc_t1

0xcc7d,	// (0x00036e10) form_field_slider_pane_vc_t2_ParamLimits

0xcc7d,	// (0x00036e10) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x00039c00) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x00039c00) form_field_slider_pane_vc_t

0xa2b4,	// (0x00034447) input_focus_pane_cp9_vc_ParamLimits

0xa2b4,	// (0x00034447) input_focus_pane_cp9_vc

0xcc8f,	// (0x00036e22) slider_cont_pane_vc_ParamLimits

0xcc8f,	// (0x00036e22) slider_cont_pane_vc

0xcca1,	// (0x00036e34) list_form_graphic_pane_cp_vc_ParamLimits

0xcca1,	// (0x00036e34) list_form_graphic_pane_cp_vc

0xb5ba,	// (0x0003574d) form_field_popup_wide_pane_vc_g1

0xccb6,	// (0x00036e49) form_field_popup_wide_pane_vc_t1_ParamLimits

0xccb6,	// (0x00036e49) form_field_popup_wide_pane_vc_t1

0xa769,	// (0x000348fc) input_focus_pane_cp8_vc_ParamLimits

0xa769,	// (0x000348fc) input_focus_pane_cp8_vc

0xccf5,	// (0x00036e88) list_form_wide_pane_vc_ParamLimits

0xccf5,	// (0x00036e88) list_form_wide_pane_vc

0xcd01,	// (0x00036e94) list_form_graphic_pane_vc_g1

0xcd09,	// (0x00036e9c) list_form_graphic_pane_vc_t1_ParamLimits

0xcd09,	// (0x00036e9c) list_form_graphic_pane_vc_t1

0xa179,	// (0x0003430c) list_highlight_pane_cp5_vc_ParamLimits

0xa179,	// (0x0003430c) list_highlight_pane_cp5_vc

0xcd25,	// (0x00036eb8) list_form_graphic_pane_vc_ParamLimits

0xcd25,	// (0x00036eb8) list_form_graphic_pane_vc

0xb5ba,	// (0x0003574d) form_field_popup_pane_vc_g1

0xcd3b,	// (0x00036ece) form_field_popup_pane_vc_t1_ParamLimits

0xcd3b,	// (0x00036ece) form_field_popup_pane_vc_t1

0xa769,	// (0x000348fc) input_focus_pane_cp7_vc_ParamLimits

0xa769,	// (0x000348fc) input_focus_pane_cp7_vc

0xcd50,	// (0x00036ee3) list_form_pane_vc_ParamLimits

0xcd50,	// (0x00036ee3) list_form_pane_vc

0xcd5c,	// (0x00036eef) data_form_pane_vc_t1_ParamLimits

0xcd5c,	// (0x00036eef) data_form_pane_vc_t1

0xa7b8,	// (0x0003494b) input_focus_pane_vc_g1

0xa7c0,	// (0x00034953) input_focus_pane_vc_g2

0xa7c8,	// (0x0003495b) input_focus_pane_vc_g3

0xa7d0,	// (0x00034963) input_focus_pane_vc_g4

0xa7d8,	// (0x0003496b) input_focus_pane_vc_g5

0xa7e0,	// (0x00034973) input_focus_pane_vc_g6

0xa7e8,	// (0x0003497b) input_focus_pane_vc_g7

0xa7f0,	// (0x00034983) input_focus_pane_vc_g8

0xa7f8,	// (0x0003498b) input_focus_pane_vc_g9

0xa0a9,	// (0x0003423c) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x000397ff) input_focus_pane_vc_g

0xb5ae,	// (0x00035741) data_form_pane_vc_ParamLimits

0xb5ae,	// (0x00035741) data_form_pane_vc

0xb5ba,	// (0x0003574d) form_field_data_pane_vc_g1

0xcd77,	// (0x00036f0a) form_field_data_pane_vc_t1_ParamLimits

0xcd77,	// (0x00036f0a) form_field_data_pane_vc_t1

0xa769,	// (0x000348fc) input_focus_pane_vc_ParamLimits

0xa769,	// (0x000348fc) input_focus_pane_vc

0xbd12,	// (0x00035ea5) button_value_adjust_pane_cp3_vc

0xcd8d,	// (0x00036f20) button_value_adjust_pane_cp5_vc

0xcd95,	// (0x00036f28) form_field_data_pane_vc_ParamLimits

0xcd95,	// (0x00036f28) form_field_data_pane_vc

0xbd1a,	// (0x00035ead) form_field_data_pane_vc_cp2

0xcdac,	// (0x00036f3f) form_field_data_wide_pane_vc_ParamLimits

0xcdac,	// (0x00036f3f) form_field_data_wide_pane_vc

0xcdc2,	// (0x00036f55) form_field_data_wide_pane_vc_cp2

0xcdca,	// (0x00036f5d) form_field_popup_pane_vc_ParamLimits

0xcdca,	// (0x00036f5d) form_field_popup_pane_vc

0xcde1,	// (0x00036f74) form_field_popup_wide_pane_vc_ParamLimits

0xcde1,	// (0x00036f74) form_field_popup_wide_pane_vc

0xcdf7,	// (0x00036f8a) form_field_slider_pane_vc_ParamLimits

0xcdf7,	// (0x00036f8a) form_field_slider_pane_vc

0xce0a,	// (0x00036f9d) form_field_slider_wide_pane_vc_ParamLimits

0xce0a,	// (0x00036f9d) form_field_slider_wide_pane_vc

0xf3ac,	// (0x0003953f) grid_touch_1_pane_ParamLimits

0xf3ac,	// (0x0003953f) grid_touch_1_pane

0xf3b8,	// (0x0003954b) grid_touch_2_pane_ParamLimits

0xf3b8,	// (0x0003954b) grid_touch_2_pane

0xb2e3,	// (0x00035476) touch_pane_g1_ParamLimits

0xb2e3,	// (0x00035476) touch_pane_g1

0xce1d,	// (0x00036fb0) cell_app_pane_cp_wide_ParamLimits

0xce1d,	// (0x00036fb0) cell_app_pane_cp_wide

0xce2d,	// (0x00036fc0) grid_popup_fast_wide_pane_ParamLimits

0xce2d,	// (0x00036fc0) grid_popup_fast_wide_pane

0xce41,	// (0x00036fd4) scroll_pane_cp19_ParamLimits

0xce41,	// (0x00036fd4) scroll_pane_cp19

0xa12b,	// (0x000342be) bg_popup_window_pane_cp20

0xce55,	// (0x00036fe8) listscroll_popup_fast_wide_pane

0xf3d0,	// (0x00039563) grid_indicator_nsta_pane

0xce5d,	// (0x00036ff0) clock_nsta_pane_g1

0xce66,	// (0x00036ff9) clock_nsta_pane_t1

0xf3e2,	// (0x00039575) cell_indicator_nsta_pane_ParamLimits

0xf3e2,	// (0x00039575) cell_indicator_nsta_pane

0xce82,	// (0x00037015) cell_indicator_nsta_pane_g1

0xf413,	// (0x000395a6) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x00039c11) cell_indicator_nsta_pane_g

0xce90,	// (0x00037023) clock_nsta_pane_cp

0xce98,	// (0x0003702b) indicator_nsta_pane_cp

0xcea1,	// (0x00037034) nsta_clock_indic_pane_g1

0xa1bd,	// (0x00034350) grid_indicator_pane

0xac09,	// (0x00034d9c) scroll_pane_cp29

0x7b34,	// (0x00031cc7) indicator_nsta_pane_cp2_ParamLimits

0x7b34,	// (0x00031cc7) indicator_nsta_pane_cp2

0xa179,	// (0x0003430c) main_apps_wheel_pane

0xb759,	// (0x000358ec) form_midp_field_text_pane_ParamLimits

0xb886,	// (0x00035a19) scroll_bar_cp050_ParamLimits

0xcf0a,	// (0x0003709d) cell_indicator_pane_ParamLimits

0xcf0a,	// (0x0003709d) cell_indicator_pane

0xcf20,	// (0x000370b3) cell_indicator_pane_g1

0xf423,	// (0x000395b6) grid_wheel_folder_pane_ParamLimits

0xf423,	// (0x000395b6) grid_wheel_folder_pane

0xf435,	// (0x000395c8) list_wheel_apps_pane_ParamLimits

0xf435,	// (0x000395c8) list_wheel_apps_pane

0xf444,	// (0x000395d7) main_apps_wheel_pane_g1_ParamLimits

0xf444,	// (0x000395d7) main_apps_wheel_pane_g1

0xf458,	// (0x000395eb) main_apps_wheel_pane_g2_ParamLimits

0xf458,	// (0x000395eb) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x00039c2d) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x00039c2d) main_apps_wheel_pane_g

0xf46c,	// (0x000395ff) main_apps_wheel_pane_t1_ParamLimits

0xf46c,	// (0x000395ff) main_apps_wheel_pane_t1

0xf48b,	// (0x0003961e) list_wheel_apps_pane_g1

0xf493,	// (0x00039626) list_wheel_apps_pane_g2

0xf49b,	// (0x0003962e) list_wheel_apps_pane_g3

0xf4a3,	// (0x00039636) list_wheel_apps_pane_g4

0xf4ab,	// (0x0003963e) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x00039c32) list_wheel_apps_pane_g

0xa179,	// (0x0003430c) navi_icon_text_pane

0xec8f,	// (0x00038e22) aid_fill_nsta

0xcf2a,	// (0x000370bd) navi_icon_text_pane_g1

0xcf36,	// (0x000370c9) navi_icon_text_pane_t1

0xae83,	// (0x00035016) list_set_graphic_pane_t1_ParamLimits

0xae83,	// (0x00035016) list_set_graphic_pane_t1

0xbfb2,	// (0x00036145) popup_midp_note_alarm_window_t6_ParamLimits

0xbfb2,	// (0x00036145) popup_midp_note_alarm_window_t6

0xbfc4,	// (0x00036157) popup_midp_note_alarm_window_t7_ParamLimits

0xbfc4,	// (0x00036157) popup_midp_note_alarm_window_t7

0xbfd6,	// (0x00036169) popup_midp_note_alarm_window_t8_ParamLimits

0xbfd6,	// (0x00036169) popup_midp_note_alarm_window_t8

0xbfe8,	// (0x0003617b) popup_midp_note_alarm_window_t9_ParamLimits

0xbfe8,	// (0x0003617b) popup_midp_note_alarm_window_t9

0xbffa,	// (0x0003618d) popup_midp_note_alarm_window_t10_ParamLimits

0xbffa,	// (0x0003618d) popup_midp_note_alarm_window_t10

0xc00c,	// (0x0003619f) popup_midp_note_alarm_window_t11_ParamLimits

0xc00c,	// (0x0003619f) popup_midp_note_alarm_window_t11

0xc01e,	// (0x000361b1) scroll_pane_cp17_ParamLimits

0xc01e,	// (0x000361b1) scroll_pane_cp17

0x840d,	// (0x000325a0) volume_small_pane_cp_g1

0x87fe,	// (0x00032991) volume_small_pane_cp_g2

0x8807,	// (0x0003299a) volume_small_pane_cp_g3

0x8810,	// (0x000329a3) volume_small_pane_cp_g4

0x843a,	// (0x000325cd) volume_small_pane_cp_g5

0x8819,	// (0x000329ac) volume_small_pane_cp_g6

0x8822,	// (0x000329b5) volume_small_pane_cp_g7

0x882b,	// (0x000329be) volume_small_pane_cp_g8

0x8834,	// (0x000329c7) volume_small_pane_cp_g9

0x883d,	// (0x000329d0) volume_small_pane_cp_g10

0xb139,	// (0x000352cc) midp_ticker_pane_g1_ParamLimits

0xb145,	// (0x000352d8) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x000398cb) midp_ticker_pane_g_ParamLimits

0xb151,	// (0x000352e4) midp_ticker_pane_t1_ParamLimits

0xec9f,	// (0x00038e32) aid_fill_nsta_2

0xb872,	// (0x00035a05) list_form2_midp_pane

0xc6b0,	// (0x00036843) midp_editing_number_pane_ParamLimits

0xc6bc,	// (0x0003684f) midp_ticker_pane_ParamLimits

0xcf48,	// (0x000370db) form2_midp_field_pane

0xcf50,	// (0x000370e3) scroll_pane_cp51

0xcf70,	// (0x00037103) form2_midp_button_pane_ParamLimits

0xcf70,	// (0x00037103) form2_midp_button_pane

0xcf82,	// (0x00037115) form2_midp_content_pane_ParamLimits

0xcf82,	// (0x00037115) form2_midp_content_pane

0xcf9c,	// (0x0003712f) form2_midp_field_choice_group_pane

0xcfa4,	// (0x00037137) form2_midp_field_pane_g1

0xcfac,	// (0x0003713f) form2_midp_field_pane_g2

0xcfb4,	// (0x00037147) form2_midp_field_pane_g3

0xcfbc,	// (0x0003714f) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x00039c57) form2_midp_field_pane_g

0xcfc4,	// (0x00037157) form2_midp_gauge_slider_pane

0xcfcc,	// (0x0003715f) form2_midp_gauge_wait_pane

0xcfd4,	// (0x00037167) form2_midp_image_pane_ParamLimits

0xcfd4,	// (0x00037167) form2_midp_image_pane

0xcfef,	// (0x00037182) form2_midp_label_pane_ParamLimits

0xcfef,	// (0x00037182) form2_midp_label_pane

0xf4e6,	// (0x00039679) form2_midp_label_pane_cp_ParamLimits

0xf4e6,	// (0x00039679) form2_midp_label_pane_cp

0xd008,	// (0x0003719b) form2_midp_string_pane_ParamLimits

0xd008,	// (0x0003719b) form2_midp_string_pane

0x720b,	// (0x0003139e) form2_midp_text_pane_ParamLimits

0x720b,	// (0x0003139e) form2_midp_text_pane

0xd01a,	// (0x000371ad) form2_midp_time_pane

0xd02a,	// (0x000371bd) input_focus_pane_cp51_ParamLimits

0xd02a,	// (0x000371bd) input_focus_pane_cp51

0xd042,	// (0x000371d5) form2_midp_label_pane_t1_ParamLimits

0xd042,	// (0x000371d5) form2_midp_label_pane_t1

0x7224,	// (0x000313b7) form2_mdip_text_pane_t1_ParamLimits

0x7224,	// (0x000313b7) form2_mdip_text_pane_t1

0x723d,	// (0x000313d0) form2_midp_time_pane_t1

0xd08a,	// (0x0003721d) form2_midp_gauge_slider_pane_t1

0xf505,	// (0x00039698) form2_midp_gauge_slider_pane_t2

0xf517,	// (0x000396aa) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x00039c60) form2_midp_gauge_slider_pane_t

0xd09c,	// (0x0003722f) form2_midp_slider_pane

0xd0a8,	// (0x0003723b) form2_midp_gauge_wait_pane_t1

0xd0b6,	// (0x00037249) form2_midp_wait_pane_ParamLimits

0xd0b6,	// (0x00037249) form2_midp_wait_pane

0xb5f8,	// (0x0003578b) list_single_2graphic_pane_cp4_ParamLimits

0xb5f8,	// (0x0003578b) list_single_2graphic_pane_cp4

0xd0e1,	// (0x00037274) list_single_midp_graphic_pane_cp_ParamLimits

0xd0e1,	// (0x00037274) list_single_midp_graphic_pane_cp

0xa12b,	// (0x000342be) list_highlight_pane_cp20

0xd0ff,	// (0x00037292) list_single_2graphic_pane_g1_cp4

0xc92c,	// (0x00036abf) list_single_2graphic_pane_g2_cp4

0xd107,	// (0x0003729a) list_single_2graphic_pane_t1_cp4

0xa179,	// (0x0003430c) list_highlight_pane_cp21

0xd116,	// (0x000372a9) list_single_midp_graphic_pane_g4_cp

0xd125,	// (0x000372b8) list_single_midp_graphic_pane_t1_cp

0xd13a,	// (0x000372cd) form2_mdip_string_pane_t1_ParamLimits

0xd13a,	// (0x000372cd) form2_mdip_string_pane_t1

0xa12b,	// (0x000342be) bg_wml_button_pane_cp2

0xa0a9,	// (0x0003423c) form2_midp_image_pane_g1

0x789b,	// (0x00031a2e) list_double_large_graphic_pane_g5_ParamLimits

0x789b,	// (0x00031a2e) list_double_large_graphic_pane_g5

0xeb79,	// (0x00038d0c) midp_form_pane_ParamLimits

0xa179,	// (0x0003430c) main_apps_wheel_pane_ParamLimits

0x8136,	// (0x000322c9) popup_preview_window_ParamLimits

0x8136,	// (0x000322c9) popup_preview_window

0x82b1,	// (0x00032444) popup_touch_info_window_ParamLimits

0x82b1,	// (0x00032444) popup_touch_info_window

0x82cf,	// (0x00032462) popup_touch_menu_window_ParamLimits

0x82cf,	// (0x00032462) popup_touch_menu_window

0xa09f,	// (0x00034232) bg_popup_sub_pane_cp6

0xd1a4,	// (0x00037337) list_touch_menu_pane

0xd1ac,	// (0x0003733f) list_single_touch_menu_pane_ParamLimits

0xd1ac,	// (0x0003733f) list_single_touch_menu_pane

0xd1c3,	// (0x00037356) list_single_touch_menu_pane_t1

0xa179,	// (0x0003430c) bg_popup_sub_pane_cp7_ParamLimits

0xa179,	// (0x0003430c) bg_popup_sub_pane_cp7

0xd1d1,	// (0x00037364) heading_sub_pane

0xd1d9,	// (0x0003736c) list_touch_info_pane_ParamLimits

0xd1d9,	// (0x0003736c) list_touch_info_pane

0xd1e8,	// (0x0003737b) list_single_touch_info_pane_ParamLimits

0xd1e8,	// (0x0003737b) list_single_touch_info_pane

0xd1f9,	// (0x0003738c) list_single_touch_info_pane_t1

0xd207,	// (0x0003739a) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x00039c6e) list_single_touch_info_pane_t

0xb10f,	// (0x000352a2) bg_popup_heading_pane_cp

0xd215,	// (0x000373a8) heading_sub_pane_t1

0xb574,	// (0x00035707) bg_popup_preview_window_pane_cp_ParamLimits

0xb574,	// (0x00035707) bg_popup_preview_window_pane_cp

0xd1d1,	// (0x00037364) heading_preview_pane

0xd1d9,	// (0x0003736c) list_preview_pane_ParamLimits

0xd1d9,	// (0x0003736c) list_preview_pane

0xd223,	// (0x000373b6) popup_preview_window_g1

0xd1e8,	// (0x0003737b) list_single_preview_pane_ParamLimits

0xd1e8,	// (0x0003737b) list_single_preview_pane

0xd22b,	// (0x000373be) list_single_preview_pane_g1

0xd233,	// (0x000373c6) list_single_preview_pane_t1

0xd1f9,	// (0x0003738c) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x00039c73) list_single_preview_pane_t

0xd241,	// (0x000373d4) bg_popup_heading_pane_cp2_ParamLimits

0xd241,	// (0x000373d4) bg_popup_heading_pane_cp2

0xd257,	// (0x000373ea) heading_preview_pane_g1

0xd25f,	// (0x000373f2) heading_preview_pane_t1_ParamLimits

0xd25f,	// (0x000373f2) heading_preview_pane_t1

0xa1d4,	// (0x00034367) soft_indicator_pane_t1_ParamLimits

0xa6e0,	// (0x00034873) scroll_pane_ParamLimits

0xab05,	// (0x00034c98) scroll_sc2_left_pane

0xab0e,	// (0x00034ca1) scroll_sc2_right_pane

0xab2d,	// (0x00034cc0) scroll_bg_pane_g1_ParamLimits

0xab42,	// (0x00034cd5) scroll_bg_pane_g2_ParamLimits

0xab5a,	// (0x00034ced) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x00039856) scroll_bg_pane_g_ParamLimits

0xab2d,	// (0x00034cc0) scroll_handle_pane_g1_ParamLimits

0xab7c,	// (0x00034d0f) scroll_handle_pane_g2_ParamLimits

0xab5a,	// (0x00034ced) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x0003985d) scroll_handle_pane_g_ParamLimits

0x7e7b,	// (0x0003200e) popup_choice_list_window_ParamLimits

0x7e7b,	// (0x0003200e) popup_choice_list_window

0xb44a,	// (0x000355dd) choice_list_pane

0xb4c0,	// (0x00035653) cell_toolbar_pane_t1

0xb4e8,	// (0x0003567b) toolbar_button_pane_ParamLimits

0xc419,	// (0x000365ac) ai_gene_pane_1_t2_ParamLimits

0xc419,	// (0x000365ac) ai_gene_pane_1_t2

0x0001,

0xf8eb,	// (0x00039a7e) ai_gene_pane_1_t_ParamLimits

0xf8eb,	// (0x00039a7e) ai_gene_pane_1_t

0xd27c,	// (0x0003740f) scroll_sc2_left_pane_g1

0xd27c,	// (0x0003740f) scroll_sc2_right_pane_g1

0xb32b,	// (0x000354be) bg_popup_sub_pane_cp10

0xd286,	// (0x00037419) list_choice_list_pane

0xd29d,	// (0x00037430) list_single_choice_list_pane_ParamLimits

0xd29d,	// (0x00037430) list_single_choice_list_pane

0xd2af,	// (0x00037442) list_single_choice_list_pane_g1

0xa8e1,	// (0x00034a74) list_single_choice_list_pane_t1_ParamLimits

0xa8e1,	// (0x00034a74) list_single_choice_list_pane_t1

0xd2b7,	// (0x0003744a) choice_list_pane_g1

0xd2bf,	// (0x00037452) choice_list_pane_t1

0xa09f,	// (0x00034232) input_focus_pane_cp11

0xaa6c,	// (0x00034bff) title_pane_stacon_g2_ParamLimits

0xaa6c,	// (0x00034bff) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x0003983c) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x0003983c) title_pane_stacon_g

0xb10f,	// (0x000352a2) cursor_press_pane

0x7f17,	// (0x000320aa) popup_fep_hwr_window_ParamLimits

0x7f17,	// (0x000320aa) popup_fep_hwr_window

0x7f73,	// (0x00032106) popup_fep_vkb_window_ParamLimits

0x7f73,	// (0x00032106) popup_fep_vkb_window

0xd2cd,	// (0x00037460) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x00039c9c) fep_vkb_side_pane_g_ParamLimits

0x887b,	// (0x00032a0e) fep_hwr_candidate_pane_ParamLimits

0x887b,	// (0x00032a0e) fep_hwr_candidate_pane

0x88a3,	// (0x00032a36) fep_hwr_side_pane_ParamLimits

0x88a3,	// (0x00032a36) fep_hwr_side_pane

0x88c3,	// (0x00032a56) fep_hwr_top_pane_ParamLimits

0x88c3,	// (0x00032a56) fep_hwr_top_pane

0x88db,	// (0x00032a6e) fep_hwr_write_pane_ParamLimits

0x88db,	// (0x00032a6e) fep_hwr_write_pane

0xfb09,	// (0x00039c9c) fep_vkb_side_pane_g

0xd2d5,	// (0x00037468) fep_hwr_top_pane_g1

0xd2e7,	// (0x0003747a) fep_hwr_top_pane_g2

0x8907,	// (0x00032a9a) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x00039c78) fep_hwr_top_pane_g

0x891c,	// (0x00032aaf) fep_hwr_top_text_pane

0xac76,	// (0x00034e09) fep_hwr_top_text_pane_g1

0xd31d,	// (0x000374b0) fep_hwr_top_text_pane_t1

0x8a0a,	// (0x00032b9d) fep_hwr_candidate_pane_g1

0xd4e6,	// (0x00037679) fep_vkb_keypad_pane_g3_ParamLimits

0xd4e6,	// (0x00037679) fep_vkb_keypad_pane_g3

0xd508,	// (0x0003769b) fep_vkb_keypad_pane_g4_ParamLimits

0xd508,	// (0x0003769b) fep_vkb_keypad_pane_g4

0xd577,	// (0x0003770a) fep_vkb_bottom_pane_g2_ParamLimits

0xd577,	// (0x0003770a) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x00039ca3) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x00039ca3) fep_vkb_bottom_pane_g

0xd27c,	// (0x0003740f) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x00039cad) cell_vkb_side_pane_g

0xd5bb,	// (0x0003774e) cell_vkb_side_pane_t1

0xd5c9,	// (0x0003775c) cell_vkb_side_pane_t1_copy1

0xd27c,	// (0x0003740f) bg_fep_vkb_candidate_pane_g2

0xd697,	// (0x0003782a) cell_vkb_candidate_pane_ParamLimits

0xd32b,	// (0x000374be) aid_size_cell_vkb_ParamLimits

0xd32b,	// (0x000374be) aid_size_cell_vkb

0xd697,	// (0x0003782a) cell_vkb_candidate_pane

0x8a24,	// (0x00032bb7) bg_popup_fep_shadow_pane_g1

0xd395,	// (0x00037528) fep_vkb_bottom_pane_ParamLimits

0xd395,	// (0x00037528) fep_vkb_bottom_pane

0xd3d2,	// (0x00037565) fep_vkb_candidate_pane_ParamLimits

0xd3d2,	// (0x00037565) fep_vkb_candidate_pane

0xd3ee,	// (0x00037581) fep_vkb_keypad_pane_ParamLimits

0xd3ee,	// (0x00037581) fep_vkb_keypad_pane

0xd422,	// (0x000375b5) fep_vkb_side_pane_ParamLimits

0xd422,	// (0x000375b5) fep_vkb_side_pane

0xd44e,	// (0x000375e1) fep_vkb_top_pane_ParamLimits

0xd44e,	// (0x000375e1) fep_vkb_top_pane

0xd47a,	// (0x0003760d) fep_vkb_top_pane_g1_ParamLimits

0xd47a,	// (0x0003760d) fep_vkb_top_pane_g1

0xd489,	// (0x0003761c) fep_vkb_top_pane_g2_ParamLimits

0xd489,	// (0x0003761c) fep_vkb_top_pane_g2

0xd498,	// (0x0003762b) fep_vkb_top_pane_g3_ParamLimits

0xd498,	// (0x0003762b) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x00039c93) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x00039c93) fep_vkb_top_pane_g

0xd4b6,	// (0x00037649) fep_vkb_top_text_pane_ParamLimits

0xd4b6,	// (0x00037649) fep_vkb_top_text_pane

0x01fb,	// (0x0002a38e) fep_vkb_side_pane_g1_ParamLimits

0x01fb,	// (0x0002a38e) fep_vkb_side_pane_g1

0xd4d5,	// (0x00037668) grid_vkb_side_pane_ParamLimits

0xd4d5,	// (0x00037668) grid_vkb_side_pane

0x8a2c,	// (0x00032bbf) bg_popup_fep_shadow_pane_g2

0x8a35,	// (0x00032bc8) bg_popup_fep_shadow_pane_g3

0x8a3d,	// (0x00032bd0) bg_popup_fep_shadow_pane_g4

0x8a46,	// (0x00032bd9) bg_popup_fep_shadow_pane_g5

0x8a4e,	// (0x00032be1) bg_popup_fep_shadow_pane_g6

0x8a56,	// (0x00032be9) bg_popup_fep_shadow_pane_g7

0xa7d8,	// (0x0003496b) bg_popup_fep_shadow_pane_g8

0xd526,	// (0x000376b9) grid_vkb_keypad_number_pane_ParamLimits

0xd526,	// (0x000376b9) grid_vkb_keypad_number_pane

0xd536,	// (0x000376c9) grid_vkb_keypad_pane_ParamLimits

0xd536,	// (0x000376c9) grid_vkb_keypad_pane

0xd55c,	// (0x000376ef) fep_vkb_bottom_pane_g1_ParamLimits

0xd55c,	// (0x000376ef) fep_vkb_bottom_pane_g1

0xd585,	// (0x00037718) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xd585,	// (0x00037718) grid_vkb_keypad_bottom_left_pane

0xd59a,	// (0x0003772d) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xd59a,	// (0x0003772d) grid_vkb_keypad_bottom_right_pane

0xd5af,	// (0x00037742) fep_vkb_top_text_pane_g1

0x0245,	// (0x0002a3d8) fep_vkb_top_text_pane_t1

0x025a,	// (0x0002a3ed) cell_vkb_side_pane_ParamLimits

0x025a,	// (0x0002a3ed) cell_vkb_side_pane

0xd27c,	// (0x0003740f) cell_vkb_side_pane_g1

0xd5d7,	// (0x0003776a) cell_vkb_keypad_pane_ParamLimits

0xd5d7,	// (0x0003776a) cell_vkb_keypad_pane

0xd644,	// (0x000377d7) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x00039cc0) bg_popup_fep_shadow_pane_g

0xd27c,	// (0x0003740f) cell_hwr_side_pane_g1

0xd27c,	// (0x0003740f) cell_hwr_side_pane_g2

0xd64e,	// (0x000377e1) cell_vkb_keypad_pane_t1

0x027d,	// (0x0002a410) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x027d,	// (0x0002a410) cell_vkb_keypad_bottom_left_pane

0x029a,	// (0x0002a42d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x029a,	// (0x0002a42d) cell_vkb_keypad_bottom_right_pane

0xd27c,	// (0x0003740f) cell_vkb_keypad_bottom_left_pane_g1

0xd27c,	// (0x0003740f) cell_vkb_keypad_bottom_right_pane_g1

0xd65c,	// (0x000377ef) cell_vkb_keypad_number_pane_ParamLimits

0xd65c,	// (0x000377ef) cell_vkb_keypad_number_pane

0xd67b,	// (0x0003780e) cell_vkb_keypad_number_pane_g1

0xd685,	// (0x00037818) cell_vkb_keypad_number_pane_g2

0xd68e,	// (0x00037821) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x00039cb2) cell_vkb_keypad_number_pane_g

0xd64e,	// (0x000377e1) cell_vkb_keypad_number_pane_t1

0xd6b0,	// (0x00037843) fep_vkb_candidate_pane_g1

0x0001,

0xfb1a,	// (0x00039cad) cell_hwr_side_pane_g

0xd6c9,	// (0x0003785c) cell_hwr_side_pane_t1

0x8a66,	// (0x00032bf9) cell_hwr_side_pane_t1_copy1

0xd4a8,	// (0x0003763b) cell_hwr_candidate_pane_g1

0x8a74,	// (0x00032c07) cell_hwr_candidate_pane_t1

0xd27c,	// (0x0003740f) cell_vkb_candidate_pane_g2

0xd74f,	// (0x000378e2) cell_vkb_candidate_pane_t1

0x8846,	// (0x000329d9) bg_popup_fep_shadow_pane_ParamLimits

0x8846,	// (0x000329d9) bg_popup_fep_shadow_pane

0x5001,	// (0x0002f194) bg_fep_hwr_top_pane_g4

0xd2f9,	// (0x0003748c) bg_hwr_side_pane_g1_ParamLimits

0xd2f9,	// (0x0003748c) bg_hwr_side_pane_g1

0x8958,	// (0x00032aeb) cell_hwr_side_pane_ParamLimits

0x8958,	// (0x00032aeb) cell_hwr_side_pane

0x8993,	// (0x00032b26) fep_hwr_write_pane_g1_ParamLimits

0x8993,	// (0x00032b26) fep_hwr_write_pane_g1

0x89a0,	// (0x00032b33) fep_hwr_write_pane_g2_ParamLimits

0x89a0,	// (0x00032b33) fep_hwr_write_pane_g2

0x89ad,	// (0x00032b40) fep_hwr_write_pane_g3_ParamLimits

0x89ad,	// (0x00032b40) fep_hwr_write_pane_g3

0x89bb,	// (0x00032b4e) fep_hwr_write_pane_g4_ParamLimits

0x89bb,	// (0x00032b4e) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x00039c7f) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x00039c7f) fep_hwr_write_pane_g

0x5001,	// (0x0002f194) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5001,	// (0x0002f194) bg_fep_hwr_candidate_pane_g2

0x89d0,	// (0x00032b63) cell_hwr_candidate_pane_ParamLimits

0x89d0,	// (0x00032b63) cell_hwr_candidate_pane

0x8a0a,	// (0x00032b9d) fep_hwr_candidate_pane_g1_ParamLimits

0xd359,	// (0x000374ec) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xd359,	// (0x000374ec) bg_popup_fep_shadow_pane_cp2

0xd4a8,	// (0x0003763b) fep_vkb_top_pane_g4_ParamLimits

0xd4a8,	// (0x0003763b) fep_vkb_top_pane_g4

0xd4c7,	// (0x0003765a) fep_vkb_side_pane_g2_ParamLimits

0xd4c7,	// (0x0003765a) fep_vkb_side_pane_g2

0x6a5c,	// (0x00030bef) list_setting_pane_t4_ParamLimits

0x6a5c,	// (0x00030bef) list_setting_pane_t4

0x6af2,	// (0x00030c85) list_setting_number_pane_t5_ParamLimits

0x6af2,	// (0x00030c85) list_setting_number_pane_t5

0xea6d,	// (0x00038c00) list_double_heading_pane_cp2_ParamLimits

0xea6d,	// (0x00038c00) list_double_heading_pane_cp2

0xaf7d,	// (0x00035110) list_double_heading_pane_g1_cp2_ParamLimits

0xaf7d,	// (0x00035110) list_double_heading_pane_g1_cp2

0xd75d,	// (0x000378f0) list_double_heading_pane_g2_cp2_ParamLimits

0xd75d,	// (0x000378f0) list_double_heading_pane_g2_cp2

0xd771,	// (0x00037904) list_double_heading_pane_t1_cp2_ParamLimits

0xd771,	// (0x00037904) list_double_heading_pane_t1_cp2

0xd787,	// (0x0003791a) list_double_heading_pane_t2_cp2_ParamLimits

0xd787,	// (0x0003791a) list_double_heading_pane_t2_cp2

0xa097,	// (0x0003422a) aid_value_unit2

0x7692,	// (0x00031825) popup_preview_fixed_window

0xa2c2,	// (0x00034455) bg_popup_preview_window_pane_cp02

0xd799,	// (0x0003792c) list_preview_fixed_pane

0xd7df,	// (0x00037972) list_empty_pane_fp_ParamLimits

0xd7df,	// (0x00037972) list_empty_pane_fp

0xd7df,	// (0x00037972) list_single_cale_day_pane_fp_ParamLimits

0xd7df,	// (0x00037972) list_single_cale_day_pane_fp

0xd7df,	// (0x00037972) list_single_graphic_heading_pane_fp_ParamLimits

0xd7df,	// (0x00037972) list_single_graphic_heading_pane_fp

0xd7df,	// (0x00037972) list_single_graphic_pane_fp_ParamLimits

0xd7df,	// (0x00037972) list_single_graphic_pane_fp

0xd7df,	// (0x00037972) list_single_heading_pane_fp_ParamLimits

0xd7df,	// (0x00037972) list_single_heading_pane_fp

0xd7df,	// (0x00037972) list_single_pane_fp_ParamLimits

0xd7df,	// (0x00037972) list_single_pane_fp

0xd7f3,	// (0x00037986) list_single_pane_fp_g1_ParamLimits

0xd7f3,	// (0x00037986) list_single_pane_fp_g1

0x7883,	// (0x00031a16) list_single_pane_fp_g2_ParamLimits

0x7883,	// (0x00031a16) list_single_pane_fp_g2

0x8a91,	// (0x00032c24) list_single_pane_fp_g3_ParamLimits

0x8a91,	// (0x00032c24) list_single_pane_fp_g3

0xd7ff,	// (0x00037992) list_single_pane_fp_g4_ParamLimits

0xd7ff,	// (0x00037992) list_single_pane_fp_g4

0x0003,

0xfb4e,	// (0x00039ce1) list_single_pane_fp_g_ParamLimits

0xfb4e,	// (0x00039ce1) list_single_pane_fp_g

0x7250,	// (0x000313e3) list_single_pane_fp_t1_ParamLimits

0x7250,	// (0x000313e3) list_single_pane_fp_t1

0x7267,	// (0x000313fa) list_single_graphic_pane_fp_g1_ParamLimits

0x7267,	// (0x000313fa) list_single_graphic_pane_fp_g1

0xd7f3,	// (0x00037986) list_single_graphic_pane_fp_g2_ParamLimits

0xd7f3,	// (0x00037986) list_single_graphic_pane_fp_g2

0x7883,	// (0x00031a16) list_single_graphic_pane_fp_g3_ParamLimits

0x7883,	// (0x00031a16) list_single_graphic_pane_fp_g3

0x8a91,	// (0x00032c24) list_single_graphic_pane_fp_g4_ParamLimits

0x8a91,	// (0x00032c24) list_single_graphic_pane_fp_g4

0xd7ff,	// (0x00037992) list_single_graphic_pane_fp_g5_ParamLimits

0xd7ff,	// (0x00037992) list_single_graphic_pane_fp_g5

0x0004,

0xfb57,	// (0x00039cea) list_single_graphic_pane_fp_g_ParamLimits

0xfb57,	// (0x00039cea) list_single_graphic_pane_fp_g

0x7273,	// (0x00031406) list_single_graphic_pane_fp_t1_ParamLimits

0x7273,	// (0x00031406) list_single_graphic_pane_fp_t1

0x7267,	// (0x000313fa) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7267,	// (0x000313fa) list_single_graphic_heading_pane_fp_g1

0xd7f3,	// (0x00037986) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xd7f3,	// (0x00037986) list_single_graphic_heading_pane_fp_g2

0x7883,	// (0x00031a16) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7883,	// (0x00031a16) list_single_graphic_heading_pane_fp_g3

0x8a91,	// (0x00032c24) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8a91,	// (0x00032c24) list_single_graphic_heading_pane_fp_g4

0xd7ff,	// (0x00037992) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xd7ff,	// (0x00037992) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb57,	// (0x00039cea) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb57,	// (0x00039cea) list_single_graphic_heading_pane_fp_g

0x7289,	// (0x0003141c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7289,	// (0x0003141c) list_single_graphic_heading_pane_fp_t1

0x729f,	// (0x00031432) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x729f,	// (0x00031432) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb62,	// (0x00039cf5) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb62,	// (0x00039cf5) list_single_graphic_heading_pane_fp_t

0x72b1,	// (0x00031444) list_single_cale_day_pane_fp_g1_ParamLimits

0x72b1,	// (0x00031444) list_single_cale_day_pane_fp_g1

0xd80b,	// (0x0003799e) list_single_cale_day_pane_fp_g2_ParamLimits

0xd80b,	// (0x0003799e) list_single_cale_day_pane_fp_g2

0x8aa5,	// (0x00032c38) list_single_cale_day_pane_fp_g3_ParamLimits

0x8aa5,	// (0x00032c38) list_single_cale_day_pane_fp_g3

0x8acd,	// (0x00032c60) list_single_cale_day_pane_fp_g4_ParamLimits

0x8acd,	// (0x00032c60) list_single_cale_day_pane_fp_g4

0x8af1,	// (0x00032c84) list_single_cale_day_pane_fp_g5_ParamLimits

0x8af1,	// (0x00032c84) list_single_cale_day_pane_fp_g5

0x0004,

0xfb67,	// (0x00039cfa) list_single_cale_day_pane_fp_g_ParamLimits

0xfb67,	// (0x00039cfa) list_single_cale_day_pane_fp_g

0x72e9,	// (0x0003147c) list_single_cale_day_pane_fp_t1_ParamLimits

0x72e9,	// (0x0003147c) list_single_cale_day_pane_fp_t1

0x730f,	// (0x000314a2) list_single_cale_day_pane_fp_t2_ParamLimits

0x730f,	// (0x000314a2) list_single_cale_day_pane_fp_t2

0x7328,	// (0x000314bb) list_single_cale_day_pane_fp_t3_ParamLimits

0x7328,	// (0x000314bb) list_single_cale_day_pane_fp_t3

0x0002,

0xfb72,	// (0x00039d05) list_single_cale_day_pane_fp_t_ParamLimits

0xfb72,	// (0x00039d05) list_single_cale_day_pane_fp_t

0xd7f3,	// (0x00037986) list_empty_pane_fp_g1_ParamLimits

0xd7f3,	// (0x00037986) list_empty_pane_fp_g1

0x7341,	// (0x000314d4) list_empty_pane_fp_t1

0x734f,	// (0x000314e2) list_empty_pane_fp_t2

0x0001,

0xfb79,	// (0x00039d0c) list_empty_pane_fp_t

0xd7f3,	// (0x00037986) list_single_heading_pane_fp_g1_ParamLimits

0xd7f3,	// (0x00037986) list_single_heading_pane_fp_g1

0x7883,	// (0x00031a16) list_single_heading_pane_fp_g2_ParamLimits

0x7883,	// (0x00031a16) list_single_heading_pane_fp_g2

0x8a91,	// (0x00032c24) list_single_heading_pane_fp_g3_ParamLimits

0x8a91,	// (0x00032c24) list_single_heading_pane_fp_g3

0x0002,

0xfb7e,	// (0x00039d11) list_single_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x00039d11) list_single_heading_pane_fp_g

0x735d,	// (0x000314f0) list_single_heading_pane_fp_t1_ParamLimits

0x735d,	// (0x000314f0) list_single_heading_pane_fp_t1

0x736f,	// (0x00031502) list_single_heading_pane_fp_t2_ParamLimits

0x736f,	// (0x00031502) list_single_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x00039d18) list_single_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x00039d18) list_single_heading_pane_fp_t

0xa8f6,	// (0x00034a89) aid_size_cell_fast

0xa297,	// (0x0003442a) soft_indicator_pane_cp1_t1

0xa933,	// (0x00034ac6) cell_app_pane_cp2_ParamLimits

0xa933,	// (0x00034ac6) cell_app_pane_cp2

0x8868,	// (0x000329fb) fep_hwr_candidate_drop_down_list_pane

0x531e,	// (0x0002f4b1) fep_hwr_candidate_pane_g3_ParamLimits

0x531e,	// (0x0002f4b1) fep_hwr_candidate_pane_g3

0x532b,	// (0x0002f4be) fep_hwr_candidate_pane_g4_ParamLimits

0x532b,	// (0x0002f4be) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x00039c8c) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x00039c8c) fep_hwr_candidate_pane_g

0xd3c1,	// (0x00037554) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xd3c1,	// (0x00037554) fep_vkb_candidate_drop_down_list_pane

0xd6b8,	// (0x0003784b) fep_vkb_candidate_pane_g3

0xd6c0,	// (0x00037853) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x00039cb9) fep_vkb_candidate_pane_g

0xd4a8,	// (0x0003763b) cell_hwr_candidate_pane_g1_ParamLimits

0xd6d7,	// (0x0003786a) cell_hwr_candidate_pane_g3_ParamLimits

0xd6d7,	// (0x0003786a) cell_hwr_candidate_pane_g3

0xd6f8,	// (0x0003788b) cell_hwr_candidate_pane_g4_ParamLimits

0xd6f8,	// (0x0003788b) cell_hwr_candidate_pane_g4

0x0002,

0xfb40,	// (0x00039cd3) cell_hwr_candidate_pane_g_ParamLimits

0xfb40,	// (0x00039cd3) cell_hwr_candidate_pane_g

0xd719,	// (0x000378ac) cell_vkb_candidate_pane_g3_ParamLimits

0xd719,	// (0x000378ac) cell_vkb_candidate_pane_g3

0xd734,	// (0x000378c7) cell_vkb_candidate_pane_g4_ParamLimits

0xd734,	// (0x000378c7) cell_vkb_candidate_pane_g4

0xd817,	// (0x000379aa) cell_app_pane_cp2_g1_ParamLimits

0xd817,	// (0x000379aa) cell_app_pane_cp2_g1

0xd835,	// (0x000379c8) cell_app_pane_cp2_g2_ParamLimits

0xd835,	// (0x000379c8) cell_app_pane_cp2_g2

0x0001,

0xfb8a,	// (0x00039d1d) cell_app_pane_cp2_g_ParamLimits

0xfb8a,	// (0x00039d1d) cell_app_pane_cp2_g

0xd841,	// (0x000379d4) cell_app_pane_cp2_t1_ParamLimits

0xd841,	// (0x000379d4) cell_app_pane_cp2_t1

0xa769,	// (0x000348fc) grid_highlight_pane_cp1_ParamLimits

0xa769,	// (0x000348fc) grid_highlight_pane_cp1

0x8b15,	// (0x00032ca8) cell_hwr_candidate_pane_cp1_ParamLimits

0x8b15,	// (0x00032ca8) cell_hwr_candidate_pane_cp1

0xd4a8,	// (0x0003763b) fep_hwr_candidate_drop_down_list_pane_g1

0xd853,	// (0x000379e6) fep_hwr_candidate_drop_down_list_pane_g2

0xd860,	// (0x000379f3) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x00039d22) fep_hwr_candidate_drop_down_list_pane_g

0x8b33,	// (0x00032cc6) fep_hwr_candidate_drop_down_list_scroll_pane

0x8b3c,	// (0x00032ccf) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8b3c,	// (0x00032ccf) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8b49,	// (0x00032cdc) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8b49,	// (0x00032cdc) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8b56,	// (0x00032ce9) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8b56,	// (0x00032ce9) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xd719,	// (0x000378ac) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xd719,	// (0x000378ac) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xd734,	// (0x000378c7) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xd734,	// (0x000378c7) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8b63,	// (0x00032cf6) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8b63,	// (0x00032cf6) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8b7e,	// (0x00032d11) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8b7e,	// (0x00032d11) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8b99,	// (0x00032d2c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8b99,	// (0x00032d2c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb96,	// (0x00039d29) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb96,	// (0x00039d29) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x0468,	// (0x0002a5fb) cell_vkb_candidate_pane_cp1_ParamLimits

0x0468,	// (0x0002a5fb) cell_vkb_candidate_pane_cp1

0xd4a8,	// (0x0003763b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xd4a8,	// (0x0003763b) fep_vkb_candidate_drop_down_list_pane_g1

0xd853,	// (0x000379e6) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xd853,	// (0x000379e6) fep_vkb_candidate_drop_down_list_pane_g2

0xd860,	// (0x000379f3) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xd860,	// (0x000379f3) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x00039d22) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb8f,	// (0x00039d22) fep_vkb_candidate_drop_down_list_pane_g

0xd86d,	// (0x00037a00) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xd86d,	// (0x00037a00) fep_vkb_candidate_drop_down_list_scroll_pane

0xd87a,	// (0x00037a0d) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xd87a,	// (0x00037a0d) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xd887,	// (0x00037a1a) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xd887,	// (0x00037a1a) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xd893,	// (0x00037a26) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xd893,	// (0x00037a26) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xd6d7,	// (0x0003786a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xd6d7,	// (0x0003786a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xd6f8,	// (0x0003788b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xd6f8,	// (0x0003788b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xd89f,	// (0x00037a32) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xd89f,	// (0x00037a32) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xd8c0,	// (0x00037a53) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xd8c0,	// (0x00037a53) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xd8e1,	// (0x00037a74) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xd8e1,	// (0x00037a74) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba7,	// (0x00039d3a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba7,	// (0x00039d3a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xda10,	// (0x00037ba3) title_pane_g1_ParamLimits

0xda1d,	// (0x00037bb0) title_pane_g2_ParamLimits

0xf529,	// (0x000396bc) title_pane_g_ParamLimits

0xac66,	// (0x00034df9) aid_call2_pane

0xac6e,	// (0x00034e01) aid_call_pane

0xac76,	// (0x00034e09) popup_clock_analogue_window_g1

0xac76,	// (0x00034e09) popup_clock_analogue_window_g2

0x7a22,	// (0x00031bb5) popup_clock_analogue_window_g3

0x7a2b,	// (0x00031bbe) popup_clock_analogue_window_g4

0xa0a9,	// (0x0003423c) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x0003986b) popup_clock_analogue_window_g

0x7a33,	// (0x00031bc6) popup_clock_analogue_window_t1

0x7a41,	// (0x00031bd4) clock_digital_number_pane_ParamLimits

0x7a41,	// (0x00031bd4) clock_digital_number_pane

0x7a4d,	// (0x00031be0) clock_digital_number_pane_cp02_ParamLimits

0x7a4d,	// (0x00031be0) clock_digital_number_pane_cp02

0x7a59,	// (0x00031bec) clock_digital_number_pane_cp03_ParamLimits

0x7a59,	// (0x00031bec) clock_digital_number_pane_cp03

0x7a65,	// (0x00031bf8) clock_digital_number_pane_cp04_ParamLimits

0x7a65,	// (0x00031bf8) clock_digital_number_pane_cp04

0x7a71,	// (0x00031c04) clock_digital_separator_pane_ParamLimits

0x7a71,	// (0x00031c04) clock_digital_separator_pane

0x7a7d,	// (0x00031c10) popup_clock_digital_window_t1_ParamLimits

0x7a7d,	// (0x00031c10) popup_clock_digital_window_t1

0xa0a9,	// (0x0003423c) clock_digital_number_pane_g1

0xa0a9,	// (0x0003423c) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x00039876) clock_digital_number_pane_g

0xa0a9,	// (0x0003423c) clock_digital_separator_pane_g1

0xa0a9,	// (0x0003423c) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x00039876) clock_digital_separator_pane_g

0xec8f,	// (0x00038e22) aid_fill_nsta_ParamLimits

0xed4e,	// (0x00038ee1) indicator_nsta_pane_ParamLimits

0xb3f3,	// (0x00035586) popup_clock_analogue_window

0xb3f3,	// (0x00035586) popup_clock_digital_window

0xf3d0,	// (0x00039563) grid_indicator_nsta_pane_ParamLimits

0xce74,	// (0x00037007) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x00039c0c) clock_nsta_pane_t

0x79e6,	// (0x00031b79) aid_size_max_handle

0x79f0,	// (0x00031b83) aid_size_min_handle

0xb10f,	// (0x000352a2) editor_scroll_pane

0xd8fc,	// (0x00037a8f) ex_editor_pane

0xa8bf,	// (0x00034a52) scroll_pane_cp13

0xa70d,	// (0x000348a0) scroll_pane_cp14

0xaca5,	// (0x00034e38) scroll_pane_cp36

0xea7d,	// (0x00038c10) list_single_graphic_hl_pane_cp2_ParamLimits

0xea7d,	// (0x00038c10) list_single_graphic_hl_pane_cp2

0x6f8d,	// (0x00031120) list_single_graphic_hl_pane_ParamLimits

0x6f8d,	// (0x00031120) list_single_graphic_hl_pane

0x7385,	// (0x00031518) aid_size_min_hl_cp1

0xd904,	// (0x00037a97) list_highlight_pane_cp34_ParamLimits

0xd904,	// (0x00037a97) list_highlight_pane_cp34

0xd915,	// (0x00037aa8) list_single_graphic_hl_pane_g1_ParamLimits

0xd915,	// (0x00037aa8) list_single_graphic_hl_pane_g1

0x738e,	// (0x00031521) list_single_graphic_hl_pane_g2_ParamLimits

0x738e,	// (0x00031521) list_single_graphic_hl_pane_g2

0x738e,	// (0x00031521) list_single_graphic_hl_pane_g3_ParamLimits

0x738e,	// (0x00031521) list_single_graphic_hl_pane_g3

0x7883,	// (0x00031a16) list_single_graphic_hl_pane_g4_ParamLimits

0x7883,	// (0x00031a16) list_single_graphic_hl_pane_g4

0x8a91,	// (0x00032c24) list_single_graphic_hl_pane_g5_ParamLimits

0x8a91,	// (0x00032c24) list_single_graphic_hl_pane_g5

0x0004,

0xfbb8,	// (0x00039d4b) list_single_graphic_hl_pane_g_ParamLimits

0xfbb8,	// (0x00039d4b) list_single_graphic_hl_pane_g

0x6852,	// (0x000309e5) list_single_graphic_hl_pane_t1_ParamLimits

0x6852,	// (0x000309e5) list_single_graphic_hl_pane_t1

0xd922,	// (0x00037ab5) aid_size_min_hl_cp2

0xd92b,	// (0x00037abe) list_highlight_pane_cp34_cp2_ParamLimits

0xd92b,	// (0x00037abe) list_highlight_pane_cp34_cp2

0xd915,	// (0x00037aa8) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xd915,	// (0x00037aa8) list_single_graphic_hl_pane_g1_cp2

0xd938,	// (0x00037acb) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xd938,	// (0x00037acb) list_single_graphic_hl_pane_g2_cp2

0xd944,	// (0x00037ad7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd944,	// (0x00037ad7) list_single_graphic_hl_pane_g3_cp2

0xaf7d,	// (0x00035110) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xaf7d,	// (0x00035110) list_single_graphic_hl_pane_g4_cp2

0xd75d,	// (0x000378f0) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xd75d,	// (0x000378f0) list_single_graphic_hl_pane_g5_cp2

0x7d24,	// (0x00031eb7) control_pane_g4_ParamLimits

0x7d24,	// (0x00031eb7) control_pane_g4

0xb32b,	// (0x000354be) bg_popup_sub_pane_cp10_ParamLimits

0xd286,	// (0x00037419) list_choice_list_pane_ParamLimits

0xd295,	// (0x00037428) scroll_pane_cp23

0xa2c2,	// (0x00034455) bg_popup_preview_window_pane_cp02_ParamLimits

0xd799,	// (0x0003792c) list_preview_fixed_pane_ParamLimits

0xd7af,	// (0x00037942) list_preview_fixed_pane_cp_ParamLimits

0xd7af,	// (0x00037942) list_preview_fixed_pane_cp

0xd7bb,	// (0x0003794e) popup_preview_fixed_window_g1_ParamLimits

0xd7bb,	// (0x0003794e) popup_preview_fixed_window_g1

0xd7c7,	// (0x0003795a) popup_preview_fixed_window_g2_ParamLimits

0xd7c7,	// (0x0003795a) popup_preview_fixed_window_g2

0x0002,

0xfb47,	// (0x00039cda) popup_preview_fixed_window_g_ParamLimits

0xfb47,	// (0x00039cda) popup_preview_fixed_window_g

0x7976,	// (0x00031b09) aid_navi_side_left_pane_ParamLimits

0x7986,	// (0x00031b19) aid_navi_side_right_pane_ParamLimits

0x7995,	// (0x00031b28) navi_icon_pane_stacon_ParamLimits

0x79a5,	// (0x00031b38) navi_navi_pane_stacon_ParamLimits

0x7995,	// (0x00031b28) navi_text_pane_stacon_ParamLimits

0xa09f,	// (0x00034232) main_text_info_pane

0xd966,	// (0x00037af9) listscroll_text_info_pane

0xd96e,	// (0x00037b01) list_text_info_pane_ParamLimits

0xd96e,	// (0x00037b01) list_text_info_pane

0xdc21,	// (0x00037db4) scroll_pane_cp24_ParamLimits

0xdc21,	// (0x00037db4) scroll_pane_cp24

0x048b,	// (0x0002a61e) list_text_info_pane_t1_ParamLimits

0x048b,	// (0x0002a61e) list_text_info_pane_t1

0x7e95,	// (0x00032028) popup_fast_swap2_window_ParamLimits

0x7e95,	// (0x00032028) popup_fast_swap2_window

0xdc3f,	// (0x00037dd2) aid_size_cell_fast2

0xa09f,	// (0x00034232) bg_popup_window_pane_cp17

0xb89e,	// (0x00035a31) heading_pane_cp2

0xb8a6,	// (0x00035a39) listscroll_fast2_pane

0xdc49,	// (0x00037ddc) grid_fast2_pane

0xdc51,	// (0x00037de4) listscroll_fast2_pane_g1

0xdc59,	// (0x00037dec) listscroll_fast2_pane_g2

0x0001,

0xfbc3,	// (0x00039d56) listscroll_fast2_pane_g

0xa8bf,	// (0x00034a52) scroll_pane_cp26

0xdc61,	// (0x00037df4) cell_fast2_pane_ParamLimits

0xdc61,	// (0x00037df4) cell_fast2_pane

0xdc77,	// (0x00037e0a) cell_fast2_pane_g1

0xdc80,	// (0x00037e13) cell_fast2_pane_g2

0xdc89,	// (0x00037e1c) cell_fast2_pane_g3

0x0002,

0xfbc8,	// (0x00039d5b) cell_fast2_pane_g

0xa56e,	// (0x00034701) grid_highlight_pane_cp9

0xa583,	// (0x00034716) main_eswt_pane_ParamLimits

0xa583,	// (0x00034716) main_eswt_pane

0xdc36,	// (0x00037dc9) list_single_text_info_pane

0xdc91,	// (0x00037e24) eswt_ctrl_button_pane

0xdc91,	// (0x00037e24) eswt_ctrl_canvas_pane

0xdc99,	// (0x00037e2c) eswt_ctrl_combo_pane

0xdc91,	// (0x00037e24) eswt_ctrl_default_pane

0xdc91,	// (0x00037e24) eswt_ctrl_label_pane

0xdca1,	// (0x00037e34) eswt_ctrl_wait_pane

0xdca9,	// (0x00037e3c) eswt_shell_pane

0xa09f,	// (0x00034232) listscroll_eswt_app_pane

0xdcc5,	// (0x00037e58) popup_eswt_tasktip_window_ParamLimits

0xdcc5,	// (0x00037e58) popup_eswt_tasktip_window

0xb574,	// (0x00035707) bg_popup_window_pane_cp18

0xdcd6,	// (0x00037e69) eswt_control_pane_g1_ParamLimits

0xdcd6,	// (0x00037e69) eswt_control_pane_g1

0xdce3,	// (0x00037e76) eswt_control_pane_g2_ParamLimits

0xdce3,	// (0x00037e76) eswt_control_pane_g2

0xdcf0,	// (0x00037e83) eswt_control_pane_g3_ParamLimits

0xdcf0,	// (0x00037e83) eswt_control_pane_g3

0xdcfd,	// (0x00037e90) eswt_control_pane_g4_ParamLimits

0xdcfd,	// (0x00037e90) eswt_control_pane_g4

0x0003,

0xfbcf,	// (0x00039d62) eswt_control_pane_g_ParamLimits

0xfbcf,	// (0x00039d62) eswt_control_pane_g

0xa769,	// (0x000348fc) bg_button_pane_ParamLimits

0xa769,	// (0x000348fc) bg_button_pane

0xa583,	// (0x00034716) common_borders_pane_copy2_ParamLimits

0xa583,	// (0x00034716) common_borders_pane_copy2

0xdd0a,	// (0x00037e9d) control_button_pane_g1_ParamLimits

0xdd0a,	// (0x00037e9d) control_button_pane_g1

0xdd16,	// (0x00037ea9) control_button_pane_g2_ParamLimits

0xdd16,	// (0x00037ea9) control_button_pane_g2

0xdd22,	// (0x00037eb5) control_button_pane_g3_ParamLimits

0xdd22,	// (0x00037eb5) control_button_pane_g3

0x0002,

0xfbd8,	// (0x00039d6b) control_button_pane_g_ParamLimits

0xfbd8,	// (0x00039d6b) control_button_pane_g

0xdd36,	// (0x00037ec9) control_button_pane_t1

0xdd44,	// (0x00037ed7) control_button_pane_t2

0x0001,

0xfbdf,	// (0x00039d72) control_button_pane_t

0xb4f4,	// (0x00035687) bg_button_pane_g1

0xb4fc,	// (0x0003568f) bg_button_pane_g2

0xb504,	// (0x00035697) bg_button_pane_g3

0xb50c,	// (0x0003569f) bg_button_pane_g4

0xb514,	// (0x000356a7) bg_button_pane_g5

0xb51c,	// (0x000356af) bg_button_pane_g6

0xb524,	// (0x000356b7) bg_button_pane_g7

0xb52c,	// (0x000356bf) bg_button_pane_g8

0xb534,	// (0x000356c7) bg_button_pane_g9

0x0008,

0xf83f,	// (0x000399d2) bg_button_pane_g

0xd241,	// (0x000373d4) common_borders_pane_ParamLimits

0xd241,	// (0x000373d4) common_borders_pane

0xdcd6,	// (0x00037e69) eswt_control_pane_g1_copy1_ParamLimits

0xdcd6,	// (0x00037e69) eswt_control_pane_g1_copy1

0xdce3,	// (0x00037e76) eswt_control_pane_g2_copy1_ParamLimits

0xdce3,	// (0x00037e76) eswt_control_pane_g2_copy1

0xdcf0,	// (0x00037e83) eswt_control_pane_g3_copy1_ParamLimits

0xdcf0,	// (0x00037e83) eswt_control_pane_g3_copy1

0xdcfd,	// (0x00037e90) eswt_control_pane_g4_copy1_ParamLimits

0xdcfd,	// (0x00037e90) eswt_control_pane_g4_copy1

0xd27c,	// (0x0003740f) bg_eswt_ctrl_canvas_pane_g1

0xd241,	// (0x000373d4) common_borders_pane_cp2_ParamLimits

0xd241,	// (0x000373d4) common_borders_pane_cp2

0xd241,	// (0x000373d4) common_borders_pane_cp3_ParamLimits

0xd241,	// (0x000373d4) common_borders_pane_cp3

0xdd52,	// (0x00037ee5) separator_horizontal_pane

0xab05,	// (0x00034c98) separator_vertical_pane

0xdcd6,	// (0x00037e69) eswt_control_pane_g1_copy2_ParamLimits

0xdcd6,	// (0x00037e69) eswt_control_pane_g1_copy2

0xdce3,	// (0x00037e76) eswt_control_pane_g2_copy2_ParamLimits

0xdce3,	// (0x00037e76) eswt_control_pane_g2_copy2

0xdcf0,	// (0x00037e83) eswt_control_pane_g3_copy2_ParamLimits

0xdcf0,	// (0x00037e83) eswt_control_pane_g3_copy2

0xdcfd,	// (0x00037e90) eswt_control_pane_g4_copy2_ParamLimits

0xdcfd,	// (0x00037e90) eswt_control_pane_g4_copy2

0xa09f,	// (0x00034232) common_borders_pane_cp4

0xdd5a,	// (0x00037eed) separator_horizontal_pane_g1

0xdd63,	// (0x00037ef6) separator_horizontal_pane_g2

0xdd6c,	// (0x00037eff) separator_horizontal_pane_g3

0x0002,

0xfbe4,	// (0x00039d77) separator_horizontal_pane_g

0xdcd6,	// (0x00037e69) eswt_control_pane_g1_copy3_ParamLimits

0xdcd6,	// (0x00037e69) eswt_control_pane_g1_copy3

0xdce3,	// (0x00037e76) eswt_control_pane_g2_copy3_ParamLimits

0xdce3,	// (0x00037e76) eswt_control_pane_g2_copy3

0xdcf0,	// (0x00037e83) eswt_control_pane_g3_copy3_ParamLimits

0xdcf0,	// (0x00037e83) eswt_control_pane_g3_copy3

0xdcfd,	// (0x00037e90) eswt_control_pane_g4_copy3_ParamLimits

0xdcfd,	// (0x00037e90) eswt_control_pane_g4_copy3

0xa09f,	// (0x00034232) common_borders_pane_cp5

0xdd75,	// (0x00037f08) separator_vertical_pane_g1

0xdd7e,	// (0x00037f11) separator_vertical_pane_g2

0xdd87,	// (0x00037f1a) separator_vertical_pane_g3

0x0002,

0xfbeb,	// (0x00039d7e) separator_vertical_pane_g

0xdcd6,	// (0x00037e69) eswt_control_pane_g1_copy4_ParamLimits

0xdcd6,	// (0x00037e69) eswt_control_pane_g1_copy4

0xdce3,	// (0x00037e76) eswt_control_pane_g2_copy4_ParamLimits

0xdce3,	// (0x00037e76) eswt_control_pane_g2_copy4

0xdcf0,	// (0x00037e83) eswt_control_pane_g3_copy4_ParamLimits

0xdcf0,	// (0x00037e83) eswt_control_pane_g3_copy4

0xdcfd,	// (0x00037e90) eswt_control_pane_g4_copy4_ParamLimits

0xdcfd,	// (0x00037e90) eswt_control_pane_g4_copy4

0x04a8,	// (0x0002a63b) eswt_ctrl_combo_button_pane

0x04b0,	// (0x0002a643) eswt_ctrl_input_pane

0x04b8,	// (0x0002a64b) popup_choice_list_window_cp70

0x04c0,	// (0x0002a653) eswt_ctrl_input_pane_t1

0xa09f,	// (0x00034232) input_focus_pane_cp70

0xd241,	// (0x000373d4) bg_button_pane_cp70_ParamLimits

0xd241,	// (0x000373d4) bg_button_pane_cp70

0x04ce,	// (0x0002a661) eswt_ctrl_combo_button_pane_g1

0xdd90,	// (0x00037f23) wait_bar_pane_cp70

0xb574,	// (0x00035707) bg_popup_window_pane_cp70_ParamLimits

0xb574,	// (0x00035707) bg_popup_window_pane_cp70

0xdd98,	// (0x00037f2b) popup_eswt_tasktip_window_t1

0xddae,	// (0x00037f41) wait_bar_pane_cp71_ParamLimits

0xddae,	// (0x00037f41) wait_bar_pane_cp71

0xddba,	// (0x00037f4d) grid_eswt_app_pane

0xab0e,	// (0x00034ca1) scroll_pane_cp70

0x04d6,	// (0x0002a669) cell_eswt_app_pane_ParamLimits

0x04d6,	// (0x0002a669) cell_eswt_app_pane

0x04fe,	// (0x0002a691) cell_eswt_app_pane_g1_ParamLimits

0x04fe,	// (0x0002a691) cell_eswt_app_pane_g1

0x052d,	// (0x0002a6c0) cell_eswt_app_pane_g2_ParamLimits

0x052d,	// (0x0002a6c0) cell_eswt_app_pane_g2

0x0001,

0xfbf2,	// (0x00039d85) cell_eswt_app_pane_g_ParamLimits

0xfbf2,	// (0x00039d85) cell_eswt_app_pane_g

0x0556,	// (0x0002a6e9) cell_eswt_app_pane_t1_ParamLimits

0x0556,	// (0x0002a6e9) cell_eswt_app_pane_t1

0xddc3,	// (0x00037f56) grid_highlight_pane_cp70_ParamLimits

0xddc3,	// (0x00037f56) grid_highlight_pane_cp70

0xa715,	// (0x000348a8) set_content_pane_g1

0xec40,	// (0x00038dd3) status_small_volume_pane

0x8bb4,	// (0x00032d47) status_small_volume_pane_g1

0x8bbc,	// (0x00032d4f) volume_small2_pane

0x8bc5,	// (0x00032d58) volume_small2_pane_g1

0x8bce,	// (0x00032d61) volume_small2_pane_g2

0x8bd7,	// (0x00032d6a) volume_small2_pane_g3

0x8be0,	// (0x00032d73) volume_small2_pane_g4

0x8be9,	// (0x00032d7c) volume_small2_pane_g5

0x8bf2,	// (0x00032d85) volume_small2_pane_g6

0x8bfb,	// (0x00032d8e) volume_small2_pane_g7

0x8c04,	// (0x00032d97) volume_small2_pane_g8

0x8c0d,	// (0x00032da0) volume_small2_pane_g9

0x8c16,	// (0x00032da9) volume_small2_pane_g10

0x0009,

0xfbf7,	// (0x00039d8a) volume_small2_pane_g

0xd5af,	// (0x00037742) fep_vkb_top_text_pane_g1_ParamLimits

0x0245,	// (0x0002a3d8) fep_vkb_top_text_pane_t1_ParamLimits

0xd7d3,	// (0x00037966) popup_preview_fixed_window_g3_ParamLimits

0xd7d3,	// (0x00037966) popup_preview_fixed_window_g3

0x825a,	// (0x000323ed) popup_toolbar_trans_pane

0xc668,	// (0x000367fb) aid_height_set_list_ParamLimits

0xc674,	// (0x00036807) aid_size_parent_ParamLimits

0xb32b,	// (0x000354be) list_highlight_pane_cp2_ParamLimits

0xa715,	// (0x000348a8) set_content_pane_g1_ParamLimits

0xf271,	// (0x00039404) list_single_image_pane_ParamLimits

0xf271,	// (0x00039404) list_single_image_pane

0x05f3,	// (0x0002a786) aid_size_cell_image_ParamLimits

0x05f3,	// (0x0002a786) aid_size_cell_image

0x0600,	// (0x0002a793) grid_single_image_pane_ParamLimits

0x0600,	// (0x0002a793) grid_single_image_pane

0xa715,	// (0x000348a8) list_single_image_pane_g1_ParamLimits

0xa715,	// (0x000348a8) list_single_image_pane_g1

0xa783,	// (0x00034916) list_single_image_pane_g2_ParamLimits

0xa783,	// (0x00034916) list_single_image_pane_g2

0x0001,

0xfc0c,	// (0x00039d9f) list_single_image_pane_g_ParamLimits

0xfc0c,	// (0x00039d9f) list_single_image_pane_g

0xd97d,	// (0x00037b10) list_single_image_pane_t1_ParamLimits

0xd97d,	// (0x00037b10) list_single_image_pane_t1

0x060c,	// (0x0002a79f) cell_image_list_pane_ParamLimits

0x060c,	// (0x0002a79f) cell_image_list_pane

0x061f,	// (0x0002a7b2) cell_image_list_pane_g1

0x0628,	// (0x0002a7bb) cell_image_list_pane_g2

0x0001,

0xfc11,	// (0x00039da4) cell_image_list_pane_g

0xddcf,	// (0x00037f62) aid_size_cell_tb_trans_pane

0xa769,	// (0x000348fc) bg_tb_trans_pane

0xdde1,	// (0x00037f74) grid_tb_trans_pane

0xb4f4,	// (0x00035687) bg_tb_trans_pane_g1

0xb4fc,	// (0x0003568f) bg_tb_trans_pane_g2

0xb504,	// (0x00035697) bg_tb_trans_pane_g3

0xb50c,	// (0x0003569f) bg_tb_trans_pane_g4

0xb514,	// (0x000356a7) bg_tb_trans_pane_g5

0xb52c,	// (0x000356bf) bg_tb_trans_pane_g6

0xb534,	// (0x000356c7) bg_tb_trans_pane_g7

0xb51c,	// (0x000356af) bg_tb_trans_pane_g8

0xb524,	// (0x000356b7) bg_tb_trans_pane_g9

0x0008,

0xfc16,	// (0x00039da9) bg_tb_trans_pane_g

0xddf5,	// (0x00037f88) cell_toolbar_trans_pane_ParamLimits

0xddf5,	// (0x00037f88) cell_toolbar_trans_pane

0xd27c,	// (0x0003740f) cell_toolbar_trans_pane_g1

0xf4ca,	// (0x0003965d) list_form2_midp_pane_t1

0xf4d8,	// (0x0003966b) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x00039c52) list_form2_midp_pane_t

0xcf50,	// (0x000370e3) scroll_pane_cp51_ParamLimits

0xd0c6,	// (0x00037259) form2_midp_wait_pane_g1

0xd0cf,	// (0x00037262) form2_midp_wait_pane_g2

0xd0d8,	// (0x0003726b) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x00039c67) form2_midp_wait_pane_g

0xa179,	// (0x0003430c) list_highlight_pane_cp21_ParamLimits

0xd116,	// (0x000372a9) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xd125,	// (0x000372b8) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x8658,	// (0x000327eb) list_single_2graphic_im_pane_ParamLimits

0x8658,	// (0x000327eb) list_single_2graphic_im_pane

0x0631,	// (0x0002a7c4) list_single_2graphic_im_pane_g1_ParamLimits

0x0631,	// (0x0002a7c4) list_single_2graphic_im_pane_g1

0x0642,	// (0x0002a7d5) list_single_2graphic_im_pane_g2_ParamLimits

0x0642,	// (0x0002a7d5) list_single_2graphic_im_pane_g2

0x064e,	// (0x0002a7e1) list_single_2graphic_im_pane_g3_ParamLimits

0x064e,	// (0x0002a7e1) list_single_2graphic_im_pane_g3

0x0003,

0xfc29,	// (0x00039dbc) list_single_2graphic_im_pane_g_ParamLimits

0xfc29,	// (0x00039dbc) list_single_2graphic_im_pane_g

0x0662,	// (0x0002a7f5) list_single_2graphic_im_pane_t1_ParamLimits

0x0662,	// (0x0002a7f5) list_single_2graphic_im_pane_t1

0xd7df,	// (0x00037972) list_single_graphic_2heading_pane_fp_ParamLimits

0xd7df,	// (0x00037972) list_single_graphic_2heading_pane_fp

0x7267,	// (0x000313fa) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7267,	// (0x000313fa) list_single_graphic_2heading_pane_fp_g1

0xd7f3,	// (0x00037986) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xd7f3,	// (0x00037986) list_single_graphic_2heading_pane_fp_g2

0x7883,	// (0x00031a16) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7883,	// (0x00031a16) list_single_graphic_2heading_pane_fp_g3

0x8a91,	// (0x00032c24) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8a91,	// (0x00032c24) list_single_graphic_2heading_pane_fp_g4

0xd7ff,	// (0x00037992) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xd7ff,	// (0x00037992) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb57,	// (0x00039cea) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb57,	// (0x00039cea) list_single_graphic_2heading_pane_fp_g

0x739a,	// (0x0003152d) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x739a,	// (0x0003152d) list_single_graphic_2heading_pane_fp_t1

0x729f,	// (0x00031432) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x729f,	// (0x00031432) list_single_graphic_2heading_pane_fp_t2

0x73b0,	// (0x00031543) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x73b0,	// (0x00031543) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc32,	// (0x00039dc5) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc32,	// (0x00039dc5) list_single_graphic_2heading_pane_fp_t

0xd305,	// (0x00037498) fep_hwr_write_pane_g5_ParamLimits

0xd305,	// (0x00037498) fep_hwr_write_pane_g5

0xd311,	// (0x000374a4) fep_hwr_write_pane_g6_ParamLimits

0xd311,	// (0x000374a4) fep_hwr_write_pane_g6

0xdca9,	// (0x00037e3c) eswt_shell_pane_ParamLimits

0xb574,	// (0x00035707) bg_popup_window_pane_cp18_ParamLimits

0xc60c,	// (0x0003679f) heading_pane_cp70

0xdd98,	// (0x00037f2b) popup_eswt_tasktip_window_t1_ParamLimits

0xecc5,	// (0x00038e58) aid_touch_tab_arrow_left

0xecd1,	// (0x00038e64) aid_touch_tab_arrow_right

0xda2e,	// (0x00037bc1) title_pane_g3_ParamLimits

0xda2e,	// (0x00037bc1) title_pane_g3

0xa739,	// (0x000348cc) set_value_pane_g1

0x825a,	// (0x000323ed) popup_toolbar_trans_pane_ParamLimits

0xddcf,	// (0x00037f62) aid_size_cell_tb_trans_pane_ParamLimits

0xa769,	// (0x000348fc) bg_tb_trans_pane_ParamLimits

0xdde1,	// (0x00037f74) grid_tb_trans_pane_ParamLimits

0xa2c2,	// (0x00034455) cont_note_pane_ParamLimits

0xa2c2,	// (0x00034455) cont_note_pane

0xa583,	// (0x00034716) cont_snote2_single_text_pane_ParamLimits

0xa583,	// (0x00034716) cont_snote2_single_text_pane

0xa583,	// (0x00034716) cont_snote2_single_graphic_pane_ParamLimits

0xa583,	// (0x00034716) cont_snote2_single_graphic_pane

0xbabc,	// (0x00035c4f) cont_note_wait_pane_ParamLimits

0xbabc,	// (0x00035c4f) cont_note_wait_pane

0xbabc,	// (0x00035c4f) cont_note_image_pane_ParamLimits

0xbabc,	// (0x00035c4f) cont_note_image_pane

0xde27,	// (0x00037fba) popup_note2_window_g1_ParamLimits

0xde27,	// (0x00037fba) popup_note2_window_g1

0xde58,	// (0x00037feb) popup_note2_window_t1_ParamLimits

0xde58,	// (0x00037feb) popup_note2_window_t1

0xde9d,	// (0x00038030) popup_note2_window_t2_ParamLimits

0xde9d,	// (0x00038030) popup_note2_window_t2

0xdee2,	// (0x00038075) popup_note2_window_t3_ParamLimits

0xdee2,	// (0x00038075) popup_note2_window_t3

0xdf27,	// (0x000380ba) popup_note2_window_t4_ParamLimits

0xdf27,	// (0x000380ba) popup_note2_window_t4

0xa346,	// (0x000344d9) popup_note2_window_t5_ParamLimits

0xa346,	// (0x000344d9) popup_note2_window_t5

0x0004,

0xfc3e,	// (0x00039dd1) popup_note2_window_t_ParamLimits

0xfc3e,	// (0x00039dd1) popup_note2_window_t

0xdf56,	// (0x000380e9) popup_note2_image_window_g1_ParamLimits

0xdf56,	// (0x000380e9) popup_note2_image_window_g1

0xdf62,	// (0x000380f5) popup_note2_image_window_g2_ParamLimits

0xdf62,	// (0x000380f5) popup_note2_image_window_g2

0x0001,

0xfc49,	// (0x00039ddc) popup_note2_image_window_g_ParamLimits

0xfc49,	// (0x00039ddc) popup_note2_image_window_g

0xdf74,	// (0x00038107) popup_note2_image_window_t1_ParamLimits

0xdf74,	// (0x00038107) popup_note2_image_window_t1

0xdf8c,	// (0x0003811f) popup_note2_image_window_t2_ParamLimits

0xdf8c,	// (0x0003811f) popup_note2_image_window_t2

0xdfa4,	// (0x00038137) popup_note2_image_window_t3_ParamLimits

0xdfa4,	// (0x00038137) popup_note2_image_window_t3

0x0002,

0xfc4e,	// (0x00039de1) popup_note2_image_window_t_ParamLimits

0xfc4e,	// (0x00039de1) popup_note2_image_window_t

0xbaca,	// (0x00035c5d) popup_note2_wait_window_g1_ParamLimits

0xbaca,	// (0x00035c5d) popup_note2_wait_window_g1

0xbad6,	// (0x00035c69) popup_note2_wait_window_g2_ParamLimits

0xbad6,	// (0x00035c69) popup_note2_wait_window_g2

0xbae2,	// (0x00035c75) popup_note2_wait_window_g3_ParamLimits

0xbae2,	// (0x00035c75) popup_note2_wait_window_g3

0x0002,

0xf821,	// (0x000399b4) popup_note2_wait_window_g_ParamLimits

0xf821,	// (0x000399b4) popup_note2_wait_window_g

0xdfc0,	// (0x00038153) popup_note2_wait_window_t1_ParamLimits

0xdfc0,	// (0x00038153) popup_note2_wait_window_t1

0xdfde,	// (0x00038171) popup_note2_wait_window_t2_ParamLimits

0xdfde,	// (0x00038171) popup_note2_wait_window_t2

0xdffc,	// (0x0003818f) popup_note2_wait_window_t3_ParamLimits

0xdffc,	// (0x0003818f) popup_note2_wait_window_t3

0xe00e,	// (0x000381a1) popup_note2_wait_window_t4_ParamLimits

0xe00e,	// (0x000381a1) popup_note2_wait_window_t4

0x0003,

0xfc55,	// (0x00039de8) popup_note2_wait_window_t_ParamLimits

0xfc55,	// (0x00039de8) popup_note2_wait_window_t

0xe020,	// (0x000381b3) wait_bar2_pane_ParamLimits

0xe020,	// (0x000381b3) wait_bar2_pane

0xe038,	// (0x000381cb) popup_snote2_single_text_window_g1_ParamLimits

0xe038,	// (0x000381cb) popup_snote2_single_text_window_g1

0xe060,	// (0x000381f3) popup_snote2_single_text_window_t1_ParamLimits

0xe060,	// (0x000381f3) popup_snote2_single_text_window_t1

0xe0ac,	// (0x0003823f) popup_snote2_single_text_window_t2_ParamLimits

0xe0ac,	// (0x0003823f) popup_snote2_single_text_window_t2

0xe0f8,	// (0x0003828b) popup_snote2_single_text_window_t3_ParamLimits

0xe0f8,	// (0x0003828b) popup_snote2_single_text_window_t3

0xe139,	// (0x000382cc) popup_snote2_single_text_window_t4_ParamLimits

0xe139,	// (0x000382cc) popup_snote2_single_text_window_t4

0xe16f,	// (0x00038302) popup_snote2_single_text_window_t5_ParamLimits

0xe16f,	// (0x00038302) popup_snote2_single_text_window_t5

0x0004,

0xfc5e,	// (0x00039df1) popup_snote2_single_text_window_t_ParamLimits

0xfc5e,	// (0x00039df1) popup_snote2_single_text_window_t

0xe19a,	// (0x0003832d) popup_snote2_single_graphic_window_g1_ParamLimits

0xe19a,	// (0x0003832d) popup_snote2_single_graphic_window_g1

0xe1c2,	// (0x00038355) popup_snote2_single_graphic_window_g2_ParamLimits

0xe1c2,	// (0x00038355) popup_snote2_single_graphic_window_g2

0x0001,

0xfc69,	// (0x00039dfc) popup_snote2_single_graphic_window_g_ParamLimits

0xfc69,	// (0x00039dfc) popup_snote2_single_graphic_window_g

0xe1ea,	// (0x0003837d) popup_snote2_single_graphic_window_t1_ParamLimits

0xe1ea,	// (0x0003837d) popup_snote2_single_graphic_window_t1

0xe236,	// (0x000383c9) popup_snote2_single_graphic_window_t2_ParamLimits

0xe236,	// (0x000383c9) popup_snote2_single_graphic_window_t2

0xe0f8,	// (0x0003828b) popup_snote2_single_graphic_window_t3_ParamLimits

0xe0f8,	// (0x0003828b) popup_snote2_single_graphic_window_t3

0xe139,	// (0x000382cc) popup_snote2_single_graphic_window_t4_ParamLimits

0xe139,	// (0x000382cc) popup_snote2_single_graphic_window_t4

0xe16f,	// (0x00038302) popup_snote2_single_graphic_window_t5_ParamLimits

0xe16f,	// (0x00038302) popup_snote2_single_graphic_window_t5

0x0004,

0xfc6e,	// (0x00039e01) popup_snote2_single_graphic_window_t_ParamLimits

0xfc6e,	// (0x00039e01) popup_snote2_single_graphic_window_t

0xcee9,	// (0x0003707c) clock_nsta_pane_cp2_t1

0xcee9,	// (0x0003707c) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x00039c28) clock_nsta_pane_cp2_t

0x6bef,	// (0x00030d82) form_field_data_wide_pane_g1_ParamLimits

0xa715,	// (0x000348a8) form_field_data_wide_pane_g2_ParamLimits

0xa715,	// (0x000348a8) form_field_data_wide_pane_g2

0xa783,	// (0x00034916) form_field_data_wide_pane_g3_ParamLimits

0xa783,	// (0x00034916) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x000397ee) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x000397ee) form_field_data_wide_pane_g

0xf3c4,	// (0x00039557) grid_touch_3_pane_ParamLimits

0xf3c4,	// (0x00039557) grid_touch_3_pane

0x0693,	// (0x0002a826) cell_touch_3_pane_ParamLimits

0x0693,	// (0x0002a826) cell_touch_3_pane

0xd27c,	// (0x0003740f) cell_touch_3_pane_g1

0xd27c,	// (0x0003740f) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x00039cad) cell_touch_3_pane_g

0xa39e,	// (0x00034531) cont_query_data_pane

0xa3a6,	// (0x00034539) cont_query_data_pane_cp1

0xe282,	// (0x00038415) button_value_adjust_pane_cp7

0xe28a,	// (0x0003841d) query_popup_pane_cp3

0xacb6,	// (0x00034e49) bg_popup_sub_pane_cp22_ParamLimits

0x7a9c,	// (0x00031c2f) navi_navi_volume_pane_cp2

0x7ab4,	// (0x00031c47) popup_side_volume_key_window_g2

0x7ac0,	// (0x00031c53) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x00039884) popup_side_volume_key_window_g

0x7ada,	// (0x00031c6d) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x0003988b) popup_side_volume_key_window_t

0xaf00,	// (0x00035093) popup_side_volume_key_window_ParamLimits

0x7877,	// (0x00031a0a) list_double_graphic_pane_g4_ParamLimits

0x7877,	// (0x00031a0a) list_double_graphic_pane_g4

0x6f77,	// (0x0003110a) list_single_2heading_msg_pane_ParamLimits

0x6f77,	// (0x0003110a) list_single_2heading_msg_pane

0x73ce,	// (0x00031561) list_single_2heading_msg_pane_g1_ParamLimits

0x73ce,	// (0x00031561) list_single_2heading_msg_pane_g1

0xa715,	// (0x000348a8) list_single_2heading_msg_pane_g2_ParamLimits

0xa715,	// (0x000348a8) list_single_2heading_msg_pane_g2

0x73da,	// (0x0003156d) list_single_2heading_msg_pane_g3_ParamLimits

0x73da,	// (0x0003156d) list_single_2heading_msg_pane_g3

0x73e6,	// (0x00031579) list_single_2heading_msg_pane_g4_ParamLimits

0x73e6,	// (0x00031579) list_single_2heading_msg_pane_g4

0x0003,

0xfc79,	// (0x00039e0c) list_single_2heading_msg_pane_g_ParamLimits

0xfc79,	// (0x00039e0c) list_single_2heading_msg_pane_g

0x73fe,	// (0x00031591) list_single_2heading_msg_pane_t1_ParamLimits

0x73fe,	// (0x00031591) list_single_2heading_msg_pane_t1

0x7426,	// (0x000315b9) list_single_2heading_msg_pane_t2_ParamLimits

0x7426,	// (0x000315b9) list_single_2heading_msg_pane_t2

0x7455,	// (0x000315e8) list_single_2heading_msg_pane_t3_ParamLimits

0x7455,	// (0x000315e8) list_single_2heading_msg_pane_t3

0x748e,	// (0x00031621) list_single_2heading_msg_pane_t4_ParamLimits

0x748e,	// (0x00031621) list_single_2heading_msg_pane_t4

0x0003,

0xfc82,	// (0x00039e15) list_single_2heading_msg_pane_t_ParamLimits

0xfc82,	// (0x00039e15) list_single_2heading_msg_pane_t

0xa135,	// (0x000342c8) title_pane_g4_ParamLimits

0xa135,	// (0x000342c8) title_pane_g4

0x78ec,	// (0x00031a7f) title_pane_stacon_g3_ParamLimits

0x78ec,	// (0x00031a7f) title_pane_stacon_g3

0xde1b,	// (0x00037fae) list_single_2graphic_im_pane_g4_ParamLimits

0xde1b,	// (0x00037fae) list_single_2graphic_im_pane_g4

0xc436,	// (0x000365c9) popup_side_volume_key_window_cp

0xc855,	// (0x000369e8) main_idle_act2_pane_t1

0x8325,	// (0x000324b8) toolbar_button_pane_g10

0xe919,	// (0x00038aac) popup_toolbar_window_cp1

0xceda,	// (0x0003706d) clock_nsta_pane_cp_t1

0xceda,	// (0x0003706d) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x00039c23) clock_nsta_pane_cp_t

0x7a9c,	// (0x00031c2f) navi_navi_volume_pane_cp2_ParamLimits

0x7aa8,	// (0x00031c3b) popup_side_volume_key_window_g1_ParamLimits

0x7ab4,	// (0x00031c47) popup_side_volume_key_window_g2_ParamLimits

0x7ac0,	// (0x00031c53) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x00039884) popup_side_volume_key_window_g_ParamLimits

0x8854,	// (0x000329e7) fep_hwr_aid_pane

0x5001,	// (0x0002f194) bg_fep_hwr_top_pane_g4_ParamLimits

0xd2d5,	// (0x00037468) fep_hwr_top_pane_g1_ParamLimits

0xd2e7,	// (0x0003747a) fep_hwr_top_pane_g2_ParamLimits

0x8907,	// (0x00032a9a) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x00039c78) fep_hwr_top_pane_g_ParamLimits

0x891c,	// (0x00032aaf) fep_hwr_top_text_pane_ParamLimits

0xc201,	// (0x00036394) aid_touch_tab_arrow_arrow_2

0xc20a,	// (0x0003639d) aid_touch_tab_arrow_left_2

0x8868,	// (0x000329fb) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x889b,	// (0x00032a2e) fep_hwr_prediction_pane

0xd41a,	// (0x000375ad) fep_vkb_prediction_pane

0x0222,	// (0x0002a3b5) fep_vkb_side_pane_g3_ParamLimits

0x0222,	// (0x0002a3b5) fep_vkb_side_pane_g3

0xd4a8,	// (0x0003763b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xd853,	// (0x000379e6) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xd860,	// (0x000379f3) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8f,	// (0x00039d22) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xe29b,	// (0x0003842e) fep_hwr_prediction_pane_g1

0x8c1f,	// (0x00032db2) fep_hwr_prediction_pane_g2

0x8c27,	// (0x00032dba) fep_hwr_prediction_pane_g3

0x8c2f,	// (0x00032dc2) fep_hwr_prediction_pane_g4

0x0003,

0xfc8b,	// (0x00039e1e) fep_hwr_prediction_pane_g

0xe29b,	// (0x0003842e) fep_vkb_prediction_pane_g1

0xe2a5,	// (0x00038438) fep_vkb_prediction_pane_g2

0xe2ad,	// (0x00038440) fep_vkb_prediction_pane_g3

0xe2b5,	// (0x00038448) fep_vkb_prediction_pane_g4

0x0003,

0xfc94,	// (0x00039e27) fep_vkb_prediction_pane_g

0x85d3,	// (0x00032766) slider_set_pane_g3

0x85e7,	// (0x0003277a) slider_set_pane_g4

0x85ff,	// (0x00032792) slider_set_pane_g5

0x85d3,	// (0x00032766) slider_set_pane_g6

0x8615,	// (0x000327a8) slider_set_pane_g7

0xc697,	// (0x0003682a) slider_form_pane_g3

0xc6a0,	// (0x00036833) slider_form_pane_g4

0xc6a8,	// (0x0003683b) slider_form_pane_g5

0xc697,	// (0x0003682a) slider_form_pane_g6

0xf256,	// (0x000393e9) slider_form_pane_g7

0xcaa6,	// (0x00036c39) slider_set_pane_vc_g3

0xcaaf,	// (0x00036c42) slider_set_pane_vc_g4

0xcab8,	// (0x00036c4b) slider_set_pane_vc_g5

0xcaa6,	// (0x00036c39) slider_set_pane_vc_g6

0xcac1,	// (0x00036c54) slider_set_pane_vc_g7

0xcaa6,	// (0x00036c39) slider_form_pane_vc_g1

0xcaaf,	// (0x00036c42) slider_form_pane_vc_g2

0xcab8,	// (0x00036c4b) slider_form_pane_vc_g3

0xcaa6,	// (0x00036c39) slider_form_pane_vc_g4

0xcc35,	// (0x00036dc8) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x00039bf5) slider_form_pane_vc_g

0xa09f,	// (0x00034232) main_idle_act3_pane

0xe2bd,	// (0x00038450) ai3_links_pane

0x06f6,	// (0x0002a889) popup_ai3_data_window_ParamLimits

0x06f6,	// (0x0002a889) popup_ai3_data_window

0xa09f,	// (0x00034232) grid_ai3_links_pane

0x070e,	// (0x0002a8a1) cell_ai3_links_pane_ParamLimits

0x070e,	// (0x0002a8a1) cell_ai3_links_pane

0xe2c6,	// (0x00038459) bg_popup_sub_pane_cp11

0xe2d3,	// (0x00038466) cell_ai3_links_pane_g1

0xa09f,	// (0x00034232) bg_popup_sub_pane_cp12

0xe2f8,	// (0x0003848b) heading_ai3_data_pane

0xe300,	// (0x00038493) list_ai3_gene_pane

0xe30c,	// (0x0003849f) popup_ai3_data_window_g1

0xe314,	// (0x000384a7) heading_ai3_data_pane_g1

0xe31c,	// (0x000384af) heading_ai3_data_pane_t1

0xe32a,	// (0x000384bd) list_double_ai3_gene_pane_ParamLimits

0xe32a,	// (0x000384bd) list_double_ai3_gene_pane

0xe337,	// (0x000384ca) list_single_ai3_gene_pane_ParamLimits

0xe337,	// (0x000384ca) list_single_ai3_gene_pane

0xd241,	// (0x000373d4) list_highlight_pane_cp7_ParamLimits

0xd241,	// (0x000373d4) list_highlight_pane_cp7

0xe344,	// (0x000384d7) list_single_a13_gene_pane_t1_ParamLimits

0xe344,	// (0x000384d7) list_single_a13_gene_pane_t1

0xe35b,	// (0x000384ee) list_single_ai3_gene_pane_g1

0xe364,	// (0x000384f7) list_single_ai3_gene_pane_g2

0x0001,

0xfc9d,	// (0x00039e30) list_single_ai3_gene_pane_g

0xe36c,	// (0x000384ff) list_double_ai3_gene_pane_g1_ParamLimits

0xe36c,	// (0x000384ff) list_double_ai3_gene_pane_g1

0xe378,	// (0x0003850b) list_double_ai3_gene_pane_t1_ParamLimits

0xe378,	// (0x0003850b) list_double_ai3_gene_pane_t1

0xe394,	// (0x00038527) list_double_ai3_gene_pane_t2_ParamLimits

0xe394,	// (0x00038527) list_double_ai3_gene_pane_t2

0xe3a9,	// (0x0003853c) list_double_ai3_gene_pane_t3_ParamLimits

0xe3a9,	// (0x0003853c) list_double_ai3_gene_pane_t3

0x0002,

0xfca2,	// (0x00039e35) list_double_ai3_gene_pane_t_ParamLimits

0xfca2,	// (0x00039e35) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x73c6,	// (0x00031559) aid_size_min_col_2

0x06c0,	// (0x0002a853) aid_size_min_msg_ParamLimits

0x06c0,	// (0x0002a853) aid_size_min_msg

0x0236,	// (0x0002a3c9) fep_vkb_top_text_pane_g2_ParamLimits

0x0236,	// (0x0002a3c9) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x00039ca8) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x00039ca8) fep_vkb_top_text_pane_g

0xa09f,	// (0x00034232) main_hc_apps_shell_pane

0xe3c6,	// (0x00038559) grid_hc_apps_pane_ParamLimits

0xe3c6,	// (0x00038559) grid_hc_apps_pane

0xe3d8,	// (0x0003856b) list_hc_apps_pane

0xe3e0,	// (0x00038573) scroll_pane_cp37_ParamLimits

0xe3e0,	// (0x00038573) scroll_pane_cp37

0x0722,	// (0x0002a8b5) cell_hc_apps_pane_ParamLimits

0x0722,	// (0x0002a8b5) cell_hc_apps_pane

0x07b0,	// (0x0002a943) cell_hc_apps_pane_g1_ParamLimits

0x07b0,	// (0x0002a943) cell_hc_apps_pane_g1

0xe3ec,	// (0x0003857f) cell_hc_apps_pane_g2_ParamLimits

0xe3ec,	// (0x0003857f) cell_hc_apps_pane_g2

0xe408,	// (0x0003859b) cell_hc_apps_pane_g3_ParamLimits

0xe408,	// (0x0003859b) cell_hc_apps_pane_g3

0x0002,

0xfca9,	// (0x00039e3c) cell_hc_apps_pane_g_ParamLimits

0xfca9,	// (0x00039e3c) cell_hc_apps_pane_g

0x07dc,	// (0x0002a96f) cell_hc_apps_pane_t1_ParamLimits

0x07dc,	// (0x0002a96f) cell_hc_apps_pane_t1

0xa2c2,	// (0x00034455) grid_highlight_pane_cp10_ParamLimits

0xa2c2,	// (0x00034455) grid_highlight_pane_cp10

0x081a,	// (0x0002a9ad) list_single_hc_apps_pane_ParamLimits

0x081a,	// (0x0002a9ad) list_single_hc_apps_pane

0x084a,	// (0x0002a9dd) list_single_hc_apps_pane_g1

0x8c37,	// (0x00032dca) list_single_hc_apps_pane_g2

0x0001,

0xfcb0,	// (0x00039e43) list_single_hc_apps_pane_g

0x8c50,	// (0x00032de3) list_single_hc_apps_pane_g2_copy1

0x74b3,	// (0x00031646) list_single_hc_apps_pane_t1

0xa179,	// (0x0003430c) bg_set_opt_pane_cp_ParamLimits

0x7784,	// (0x00031917) setting_slider_pane_t1_ParamLimits

0x779a,	// (0x0003192d) setting_slider_pane_t2_ParamLimits

0x77b3,	// (0x00031946) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x000396cc) setting_slider_pane_t_ParamLimits

0x77ca,	// (0x0003195d) slider_set_pane_ParamLimits

0x7d38,	// (0x00031ecb) control_pane_g5_ParamLimits

0x7d38,	// (0x00031ecb) control_pane_g5

0xc653,	// (0x000367e6) slider_set_pane_g1_ParamLimits

0x85c7,	// (0x0003275a) slider_set_pane_g2_ParamLimits

0x85d3,	// (0x00032766) slider_set_pane_g3_ParamLimits

0x85e7,	// (0x0003277a) slider_set_pane_g4_ParamLimits

0x85ff,	// (0x00032792) slider_set_pane_g5_ParamLimits

0x85d3,	// (0x00032766) slider_set_pane_g6_ParamLimits

0x8615,	// (0x000327a8) slider_set_pane_g7_ParamLimits

0xf93d,	// (0x00039ad0) slider_set_pane_g_ParamLimits

0xa179,	// (0x0003430c) navi_icon_text_pane_ParamLimits

0xec9f,	// (0x00038e32) aid_fill_nsta_2_ParamLimits

0xecc5,	// (0x00038e58) aid_touch_tab_arrow_left_ParamLimits

0xecd1,	// (0x00038e64) aid_touch_tab_arrow_right_ParamLimits

0xed3b,	// (0x00038ece) clock_nsta_pane_ParamLimits

0xc1e3,	// (0x00036376) navi_icon_pane_g1_ParamLimits

0xc1ef,	// (0x00036382) navi_text_pane_t1_ParamLimits

0xcf2a,	// (0x000370bd) navi_icon_text_pane_g1_ParamLimits

0xcf36,	// (0x000370c9) navi_icon_text_pane_t1_ParamLimits

0x084a,	// (0x0002a9dd) list_single_hc_apps_pane_g1_ParamLimits

0x8c37,	// (0x00032dca) list_single_hc_apps_pane_g2_ParamLimits

0xfcb0,	// (0x00039e43) list_single_hc_apps_pane_g_ParamLimits

0x8c50,	// (0x00032de3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x74b3,	// (0x00031646) list_single_hc_apps_pane_t1_ParamLimits

0x76b6,	// (0x00031849) popup_toolbar2_fixed_window_ParamLimits

0x76b6,	// (0x00031849) popup_toolbar2_fixed_window

0x8252,	// (0x000323e5) popup_toolbar2_float_window

0xa09f,	// (0x00034232) bg_popup_sub_pane_cp27

0xe42a,	// (0x000385bd) grid_toolbar2_float_pane

0xa09f,	// (0x00034232) bg_popup_sub_pane_cp26

0xe42a,	// (0x000385bd) grid_toolbar2_fixed_pane

0x0863,	// (0x0002a9f6) cell_toolbar2_fixed_pane_ParamLimits

0x0863,	// (0x0002a9f6) cell_toolbar2_fixed_pane

0x0874,	// (0x0002aa07) cell_toolbar2_fixed_pane_g1

0xe432,	// (0x000385c5) toolbar2_fixed_button_pane

0xb4f4,	// (0x00035687) toolbar2_fixed_button_pane_g1

0xb4fc,	// (0x0003568f) toolbar2_fixed_button_pane_g2

0xb504,	// (0x00035697) toolbar2_fixed_button_pane_g3

0xb50c,	// (0x0003569f) toolbar2_fixed_button_pane_g4

0xb514,	// (0x000356a7) toolbar2_fixed_button_pane_g5

0xb51c,	// (0x000356af) toolbar2_fixed_button_pane_g6

0xb524,	// (0x000356b7) toolbar2_fixed_button_pane_g7

0xb52c,	// (0x000356bf) toolbar2_fixed_button_pane_g8

0xb534,	// (0x000356c7) toolbar2_fixed_button_pane_g9

0x0008,

0xf83f,	// (0x000399d2) toolbar2_fixed_button_pane_g

0xe43a,	// (0x000385cd) cell_toolbar2_float_pane_ParamLimits

0xe43a,	// (0x000385cd) cell_toolbar2_float_pane

0xe44b,	// (0x000385de) cell_toolbar2_float_pane_g1

0xe432,	// (0x000385c5) toolbar2_fixed_button_pane_cp

0x01ef,	// (0x0002a382) fep_vkb_accented_list_pane_ParamLimits

0x01ef,	// (0x0002a382) fep_vkb_accented_list_pane

0x8a5e,	// (0x00032bf1) bg_popup_fep_shadow_pane_g9

0xb10f,	// (0x000352a2) bg_popup_fep_shadow_pane_cp3

0xa8a6,	// (0x00034a39) list_accented_list_pane

0xe454,	// (0x000385e7) list_single_accented_list_pane_ParamLimits

0xe454,	// (0x000385e7) list_single_accented_list_pane

0xb10f,	// (0x000352a2) list_highlight_pane_cp10

0xe465,	// (0x000385f8) list_single_accented_list_pane_t1

0x81b8,	// (0x0003234b) popup_slider_window_ParamLimits

0x81b8,	// (0x0003234b) popup_slider_window

0xe292,	// (0x00038425) aid_indentation_list_msg

0x090f,	// (0x0002aaa2) bg_popup_window_pane_cp19

0xe4cb,	// (0x0003865e) popup_slider_window_g1

0xe4e7,	// (0x0003867a) popup_slider_window_g2

0xe503,	// (0x00038696) popup_slider_window_g3

0x0005,

0xfcb5,	// (0x00039e48) popup_slider_window_g

0xe51f,	// (0x000386b2) popup_slider_window_t1

0xe563,	// (0x000386f6) small_volume_slider_vertical_pane

0xd27c,	// (0x0003740f) small_volume_slider_vertical_pane_g1

0xd27c,	// (0x0003740f) small_volume_slider_vertical_pane_g2

0xe57f,	// (0x00038712) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc7,	// (0x00039e5a) small_volume_slider_vertical_pane_g

0x7534,	// (0x000316c7) area_side_right_pane_ParamLimits

0x7534,	// (0x000316c7) area_side_right_pane

0x8c6c,	// (0x00032dff) aid_size_side_button_ParamLimits

0x8c6c,	// (0x00032dff) aid_size_side_button

0x8c80,	// (0x00032e13) grid_sctrl_middle_pane_ParamLimits

0x8c80,	// (0x00032e13) grid_sctrl_middle_pane

0x8c9c,	// (0x00032e2f) sctrl_sk_bottom_pane

0x8cad,	// (0x00032e40) sctrl_sk_top_pane

0x8cbf,	// (0x00032e52) aid_touch_sctrl_top

0xa2c2,	// (0x00034455) bg_sctrl_sk_pane_ParamLimits

0xa2c2,	// (0x00034455) bg_sctrl_sk_pane

0x8ccc,	// (0x00032e5f) sctrl_sk_top_pane_g1

0x8cd9,	// (0x00032e6c) sctrl_sk_top_pane_t1

0x8cbf,	// (0x00032e52) aid_touch_sctrl_bottom

0xa2c2,	// (0x00034455) bg_sctrl_sk_pane_cp_ParamLimits

0xa2c2,	// (0x00034455) bg_sctrl_sk_pane_cp

0x8cf4,	// (0x00032e87) sctrl_sk_bottom_pane_g1

0x8cd9,	// (0x00032e6c) sctrl_sk_bottom_pane_t1

0x8cfd,	// (0x00032e90) cell_sctrl_middle_pane_ParamLimits

0x8cfd,	// (0x00032e90) cell_sctrl_middle_pane

0x8d18,	// (0x00032eab) aid_touch_sctrl_middle_ParamLimits

0x8d18,	// (0x00032eab) aid_touch_sctrl_middle

0xa769,	// (0x000348fc) bg_sctrl_middle_pane_ParamLimits

0xa769,	// (0x000348fc) bg_sctrl_middle_pane

0xd4a8,	// (0x0003763b) cell_sctrl_middle_pane_g1_ParamLimits

0xd4a8,	// (0x0003763b) cell_sctrl_middle_pane_g1

0x8d29,	// (0x00032ebc) cell_sctrl_middle_pane_g2_ParamLimits

0x8d29,	// (0x00032ebc) cell_sctrl_middle_pane_g2

0x0001,

0xfcd3,	// (0x00039e66) cell_sctrl_middle_pane_g_ParamLimits

0xfcd3,	// (0x00039e66) cell_sctrl_middle_pane_g

0xb4f4,	// (0x00035687) bg_sctrl_middle_pane_g1

0xb4fc,	// (0x0003568f) bg_sctrl_middle_pane_g2

0xb504,	// (0x00035697) bg_sctrl_middle_pane_g3

0xb50c,	// (0x0003569f) bg_sctrl_middle_pane_g4

0xb514,	// (0x000356a7) bg_sctrl_middle_pane_g5

0xb51c,	// (0x000356af) bg_sctrl_middle_pane_g6

0xb524,	// (0x000356b7) bg_sctrl_middle_pane_g7

0xb52c,	// (0x000356bf) bg_sctrl_middle_pane_g8

0x0007,

0xfcd8,	// (0x00039e6b) bg_sctrl_middle_pane_g

0xb534,	// (0x000356c7) bg_sctrl_middle_pane_g8_copy1

0xb4f4,	// (0x00035687) bg_sctrl_sk_pane_g1

0xb4fc,	// (0x0003568f) bg_sctrl_sk_pane_g2

0xb504,	// (0x00035697) bg_sctrl_sk_pane_g3

0x0008,

0xf83f,	// (0x000399d2) bg_sctrl_sk_pane_g

0xa6a5,	// (0x00034838) aid_size_touch_scroll_bar

0xb50c,	// (0x0003569f) bg_sctrl_sk_pane_g4

0xb514,	// (0x000356a7) bg_sctrl_sk_pane_g5

0xb51c,	// (0x000356af) bg_sctrl_sk_pane_g6

0xb524,	// (0x000356b7) bg_sctrl_sk_pane_g7

0xb52c,	// (0x000356bf) bg_sctrl_sk_pane_g8

0xb534,	// (0x000356c7) bg_sctrl_sk_pane_g9

0x7eeb,	// (0x0003207e) popup_fep_china_hwr2_fs_candidate_window

0x7ef3,	// (0x00032086) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7ef3,	// (0x00032086) popup_fep_china_hwr2_fs_control_window

0xd4a8,	// (0x0003763b) sctrl_sk_top_pane_g2

0x0001,

0xfcce,	// (0x00039e61) sctrl_sk_top_pane_g

0x0a78,	// (0x0002ac0b) aid_fep_china_hwr2_fs_cell_ParamLimits

0x0a78,	// (0x0002ac0b) aid_fep_china_hwr2_fs_cell

0x0a89,	// (0x0002ac1c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x0a89,	// (0x0002ac1c) bg_popup_fep_shadow_pane_cp4

0x0aa0,	// (0x0002ac33) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x0aa0,	// (0x0002ac33) bg_popup_fep_shadow_pane_cp5

0x0ab2,	// (0x0002ac45) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x0ab2,	// (0x0002ac45) popup_fep_china_hwr2_fs_control_bar_grid

0x0ac2,	// (0x0002ac55) popup_fep_china_hwr2_fs_control_funtion_grid

0xe588,	// (0x0003871b) aid_fep_china_hwr2_fs_candi_cell

0xa09f,	// (0x00034232) bg_popup_fep_shadow_pane_cp6

0xe592,	// (0x00038725) popup_fep_china_hwr2_fs_candidate_grid

0x0aca,	// (0x0002ac5d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x0aca,	// (0x0002ac5d) cell_fep_china_hwr2_fs_funtion_grid

0xd27c,	// (0x0003740f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xe59a,	// (0x0003872d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xe59a,	// (0x0003872d) cell_fep_china_hwr2_fs_funtion_grid_g1

0xe5a8,	// (0x0003873b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xe5a8,	// (0x0003873b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce9,	// (0x00039e7c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce9,	// (0x00039e7c) cell_fep_china_hwr2_fs_funtion_grid_g

0x0ae2,	// (0x0002ac75) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x0ae2,	// (0x0002ac75) cell_fep_china_hwr2_fs_funtion_grid_t1

0x0af7,	// (0x0002ac8a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x0af7,	// (0x0002ac8a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcee,	// (0x00039e81) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcee,	// (0x00039e81) cell_fep_china_hwr2_fs_funtion_grid_t

0xe5be,	// (0x00038751) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xe5c6,	// (0x00038759) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xe5ce,	// (0x00038761) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf3,	// (0x00039e86) popup_fep_china_hwr2_fs_control_bar_grid_g

0xe5d6,	// (0x00038769) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xe5d6,	// (0x00038769) cell_fep_china_hwr2_fs_candidate_grid

0xe5ef,	// (0x00038782) popup_fep_china_hwr2_fs_candidate_grid_g20

0xe5f7,	// (0x0003878a) popup_fep_china_hwr2_fs_candidate_grid_g21

0xd27c,	// (0x0003740f) cell_fep_china_hwr2_fs_candidate_grid_g1

0xd27c,	// (0x0003740f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x00039cad) cell_fep_china_hwr2_fs_candidate_grid_g

0xe5ff,	// (0x00038792) cell_fep_china_hwr2_fs_candidate_grid_t1

0xb359,	// (0x000354ec) clock_nsta_pane_cp_24_ParamLimits

0xb359,	// (0x000354ec) clock_nsta_pane_cp_24

0xb3b6,	// (0x00035549) indicator_nsta_pane_cp_24_ParamLimits

0xb3b6,	// (0x00035549) indicator_nsta_pane_cp_24

0xc0ee,	// (0x00036281) heading_pane_g1

0x0001,

0xf8a4,	// (0x00039a37) heading_pane_g

0xf313,	// (0x000394a6) grid_sct_catagory_button_pane

0xbcec,	// (0x00035e7f) scroll_pane_cp5_ParamLimits

0xcf5c,	// (0x000370ef) button_value_adjust_pane_cp5_ParamLimits

0xcf5c,	// (0x000370ef) button_value_adjust_pane_cp5

0xd01a,	// (0x000371ad) form2_midp_time_pane_ParamLimits

0xe60d,	// (0x000387a0) cell_sct_catagory_button_pane_ParamLimits

0xe60d,	// (0x000387a0) cell_sct_catagory_button_pane

0xd241,	// (0x000373d4) bg_button_pane_cp01_ParamLimits

0xd241,	// (0x000373d4) bg_button_pane_cp01

0xd27c,	// (0x0003740f) cell_sct_catagory_button_pane_g1

0x81ef,	// (0x00032382) popup_tb_extension_window

0x0b13,	// (0x0002aca6) aid_size_cell_ext_ParamLimits

0x0b13,	// (0x0002aca6) aid_size_cell_ext

0xa2c2,	// (0x00034455) bg_tb_trans_pane_cp1_ParamLimits

0xa2c2,	// (0x00034455) bg_tb_trans_pane_cp1

0x0b33,	// (0x0002acc6) grid_tb_ext_pane_ParamLimits

0x0b33,	// (0x0002acc6) grid_tb_ext_pane

0x0b59,	// (0x0002acec) cell_tb_ext_pane_ParamLimits

0x0b59,	// (0x0002acec) cell_tb_ext_pane

0x0b6e,	// (0x0002ad01) cell_tb_ext_pane_g1_ParamLimits

0x0b6e,	// (0x0002ad01) cell_tb_ext_pane_g1

0xe61f,	// (0x000387b2) cell_tb_ext_pane_t1

0xa2c2,	// (0x00034455) list_highlight_pane_cp11_ParamLimits

0xa2c2,	// (0x00034455) list_highlight_pane_cp11

0x76d5,	// (0x00031868) popup_uni_indicator_window_ParamLimits

0x76d5,	// (0x00031868) popup_uni_indicator_window

0xa769,	// (0x000348fc) bg_popup_sub_pane_cp14

0xe63a,	// (0x000387cd) list_uniindi_pane

0xe646,	// (0x000387d9) uniindi_top_pane

0xa2c2,	// (0x00034455) bg_uniindi_top_pane

0xe665,	// (0x000387f8) uniindi_top_pane_g1

0xe67b,	// (0x0003880e) uniindi_top_pane_g2

0x0003,

0xfcfa,	// (0x00039e8d) uniindi_top_pane_g

0xe6a5,	// (0x00038838) uniindi_top_pane_t1

0xe6cf,	// (0x00038862) list_single_uniindi_pane_ParamLimits

0xe6cf,	// (0x00038862) list_single_uniindi_pane

0xd27c,	// (0x0003740f) bg_uniindi_top_pane_g1

0xe6e1,	// (0x00038874) list_single_uniindi_pane_g1

0xe6f4,	// (0x00038887) list_single_uniindi_pane_t1

0xa09f,	// (0x00034232) control_bg_pane

0xe719,	// (0x000388ac) bg_sctrl_sk_pane_cp1

0xe722,	// (0x000388b5) bg_sctrl_sk_pane_cp2

0xe72b,	// (0x000388be) control_bg_pane_g1

0xe734,	// (0x000388c7) control_bg_pane_g2

0x0001,

0xfd03,	// (0x00039e96) control_bg_pane_g

0xce82,	// (0x00037015) cell_indicator_nsta_pane_g1_ParamLimits

0xf413,	// (0x000395a6) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x00039c11) cell_indicator_nsta_pane_g_ParamLimits

0x723d,	// (0x000313d0) form2_midp_time_pane_t1_ParamLimits

0xa583,	// (0x00034716) main_idle_act4_pane_ParamLimits

0xa583,	// (0x00034716) main_idle_act4_pane

0x81ef,	// (0x00032382) popup_tb_extension_window_ParamLimits

0x0b4d,	// (0x0002ace0) tb_ext_find_pane_ParamLimits

0x0b4d,	// (0x0002ace0) tb_ext_find_pane

0xe73d,	// (0x000388d0) ai_gene_pane_1_cp1

0xb1a3,	// (0x00035336) ai_gene_pane_2_cp1

0xe745,	// (0x000388d8) list_single_idle_plugin_calendar_pane

0xe74e,	// (0x000388e1) list_single_idle_plugin_notification_pane

0xe757,	// (0x000388ea) list_single_idle_plugin_player_pane

0x0b8b,	// (0x0002ad1e) list_single_idle_plugin_shortcut_pane_ParamLimits

0x0b8b,	// (0x0002ad1e) list_single_idle_plugin_shortcut_pane

0x0bad,	// (0x0002ad40) main_idle_act4_pane_t1

0x0bbf,	// (0x0002ad52) main_idle_act4_pane_t2

0x0001,

0xfd08,	// (0x00039e9b) main_idle_act4_pane_t

0x0bd1,	// (0x0002ad64) middle_sk_idle_act4_pane_ParamLimits

0x0bd1,	// (0x0002ad64) middle_sk_idle_act4_pane

0x0be7,	// (0x0002ad7a) popup_clock_digital_analogue_window_cp2

0x0c01,	// (0x0002ad94) shortcut_wheel_idle_act4_pane_ParamLimits

0x0c01,	// (0x0002ad94) shortcut_wheel_idle_act4_pane

0xd27c,	// (0x0003740f) shortcut_wheel_idle_act4_pane_g1

0xd27c,	// (0x0003740f) shortcut_wheel_idle_act4_pane_g2

0xd27c,	// (0x0003740f) shortcut_wheel_idle_act4_pane_g3

0xd27c,	// (0x0003740f) shortcut_wheel_idle_act4_pane_g4

0xd27c,	// (0x0003740f) shortcut_wheel_idle_act4_pane_g5

0xe760,	// (0x000388f3) shortcut_wheel_idle_act4_pane_g6

0xe768,	// (0x000388fb) shortcut_wheel_idle_act4_pane_g7

0xe770,	// (0x00038903) shortcut_wheel_idle_act4_pane_g8

0xe778,	// (0x0003890b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd0d,	// (0x00039ea0) shortcut_wheel_idle_act4_pane_g

0xd4a8,	// (0x0003763b) middle_sk_idle_act4_pane_g1_ParamLimits

0xd4a8,	// (0x0003763b) middle_sk_idle_act4_pane_g1

0x0c71,	// (0x0002ae04) middle_sk_idle_act4_pane_g2_ParamLimits

0x0c71,	// (0x0002ae04) middle_sk_idle_act4_pane_g2

0x0001,

0xfd30,	// (0x00039ec3) middle_sk_idle_act4_pane_g_ParamLimits

0xfd30,	// (0x00039ec3) middle_sk_idle_act4_pane_g

0x0c7d,	// (0x0002ae10) middle_sk_idle_act4_pane_t1_ParamLimits

0x0c7d,	// (0x0002ae10) middle_sk_idle_act4_pane_t1

0x0c9a,	// (0x0002ae2d) grid_ai_shortcut_pane_ParamLimits

0x0c9a,	// (0x0002ae2d) grid_ai_shortcut_pane

0x0cb3,	// (0x0002ae46) list_highlight_pane_cp16_ParamLimits

0x0cb3,	// (0x0002ae46) list_highlight_pane_cp16

0x0cc0,	// (0x0002ae53) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x0cc0,	// (0x0002ae53) list_single_idle_plugin_shortcut_pane_g1

0x0ccc,	// (0x0002ae5f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x0ccc,	// (0x0002ae5f) list_single_idle_plugin_shortcut_pane_g2

0x0ce4,	// (0x0002ae77) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x0ce4,	// (0x0002ae77) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd35,	// (0x00039ec8) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd35,	// (0x00039ec8) list_single_idle_plugin_shortcut_pane_g

0x0cf7,	// (0x0002ae8a) cell_ai_shortcut_pane_ParamLimits

0x0cf7,	// (0x0002ae8a) cell_ai_shortcut_pane

0x0d18,	// (0x0002aeab) cell_ai_shortcut_pane_g1_ParamLimits

0x0d18,	// (0x0002aeab) cell_ai_shortcut_pane_g1

0xe73d,	// (0x000388d0) ai_gene_pane_1_cp2

0xe780,	// (0x00038913) ai_gene_pane_2_cp2

0xe788,	// (0x0003891b) list_highlight_pane_cp15

0xe791,	// (0x00038924) list_single_idle_plugin_calendar_pane_g1

0xe788,	// (0x0003891b) list_highlight_pane_cp17

0xe799,	// (0x0003892c) list_single_idle_plugin_calendar_pane_g1_copy1

0xe7a1,	// (0x00038934) list_single_idle_plugin_player_pane_g1

0xc8e1,	// (0x00036a74) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3c,	// (0x00039ecf) list_single_idle_plugin_player_pane_g

0xe7a9,	// (0x0003893c) list_single_idle_plugin_player_pane_t1

0xe7b7,	// (0x0003894a) list_single_idle_plugin_player_pane_t2

0xe7c5,	// (0x00038958) list_single_idle_plugin_player_pane_t3

0xe7d3,	// (0x00038966) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd41,	// (0x00039ed4) list_single_idle_plugin_player_pane_t

0xe7e1,	// (0x00038974) wait_bar_pane_cp15

0xe7e9,	// (0x0003897c) grid_ai_notification_pane

0xc8e1,	// (0x00036a74) list_single_idle_plugin_notification_pane_g1

0x0d3a,	// (0x0002aecd) cell_ai_notification_pane_ParamLimits

0x0d3a,	// (0x0002aecd) cell_ai_notification_pane

0xe7f2,	// (0x00038985) cell_ai_notification_pane_g1

0xe7fa,	// (0x0003898d) cell_ai_notification_pane_t1

0x0d47,	// (0x0002aeda) tb_ext_find_button_pane

0x0d4f,	// (0x0002aee2) tb_ext_find_pane_g1

0x0d57,	// (0x0002aeea) tb_ext_find_pane_t1

0xac76,	// (0x00034e09) tb_ext_find_button_pane_g1

0xe808,	// (0x0003899b) tb_ext_find_button_pane_g2

0x0001,

0xfd4a,	// (0x00039edd) tb_ext_find_button_pane_g

0x0bad,	// (0x0002ad40) main_idle_act4_pane_t1_ParamLimits

0x0bbf,	// (0x0002ad52) main_idle_act4_pane_t2_ParamLimits

0xfd08,	// (0x00039e9b) main_idle_act4_pane_t_ParamLimits

0x0be7,	// (0x0002ad7a) popup_clock_digital_analogue_window_cp2_ParamLimits

0x0bf5,	// (0x0002ad88) sat_plugin_idle_act4_pane_ParamLimits

0x0bf5,	// (0x0002ad88) sat_plugin_idle_act4_pane

0x0d65,	// (0x0002aef8) sat_plugin_idle_act4_pane_t1_ParamLimits

0x0d65,	// (0x0002aef8) sat_plugin_idle_act4_pane_t1

0x0d78,	// (0x0002af0b) sat_plugin_idle_act4_pane_t2_ParamLimits

0x0d78,	// (0x0002af0b) sat_plugin_idle_act4_pane_t2

0x0d8b,	// (0x0002af1e) sat_plugin_idle_act4_pane_t3_ParamLimits

0x0d8b,	// (0x0002af1e) sat_plugin_idle_act4_pane_t3

0x0d9e,	// (0x0002af31) sat_plugin_idle_act4_pane_t4_ParamLimits

0x0d9e,	// (0x0002af31) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4f,	// (0x00039ee2) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4f,	// (0x00039ee2) sat_plugin_idle_act4_pane_t

0x7636,	// (0x000317c9) popup_battery_window_ParamLimits

0x7636,	// (0x000317c9) popup_battery_window

0xa2c2,	// (0x00034455) bg_popup_sub_pane_cp25_ParamLimits

0xa2c2,	// (0x00034455) bg_popup_sub_pane_cp25

0xe811,	// (0x000389a4) popup_battery_window_g1_ParamLimits

0xe811,	// (0x000389a4) popup_battery_window_g1

0xe81d,	// (0x000389b0) popup_battery_window_t1_ParamLimits

0xe81d,	// (0x000389b0) popup_battery_window_t1

0xe82f,	// (0x000389c2) popup_battery_window_t2_ParamLimits

0xe82f,	// (0x000389c2) popup_battery_window_t2

0x0001,

0xfd58,	// (0x00039eeb) popup_battery_window_t_ParamLimits

0xfd58,	// (0x00039eeb) popup_battery_window_t

0xeb85,	// (0x00038d18) midp_canvas_pane_ParamLimits

0xebe1,	// (0x00038d74) midp_keypad_pane_ParamLimits

0xebe1,	// (0x00038d74) midp_keypad_pane

0xb32b,	// (0x000354be) main_midp_pane_ParamLimits

0xcef8,	// (0x0003708b) signal_pane_g2_cp_ParamLimits

0x0db1,	// (0x0002af44) aid_size_cell_midp_keypad_ParamLimits

0x0db1,	// (0x0002af44) aid_size_cell_midp_keypad

0x0dcb,	// (0x0002af5e) midp_keyp_game_grid_pane_ParamLimits

0x0dcb,	// (0x0002af5e) midp_keyp_game_grid_pane

0x0de5,	// (0x0002af78) midp_keyp_rocker_pane_ParamLimits

0x0de5,	// (0x0002af78) midp_keyp_rocker_pane

0x0e12,	// (0x0002afa5) midp_keyp_sk_left_pane_ParamLimits

0x0e12,	// (0x0002afa5) midp_keyp_sk_left_pane

0x0e6a,	// (0x0002affd) midp_keyp_sk_right_pane_ParamLimits

0x0e6a,	// (0x0002affd) midp_keyp_sk_right_pane

0xa09f,	// (0x00034232) bg_button_pane_cp03

0x0ebc,	// (0x0002b04f) midp_keyp_sk_left_pane_g1

0xa09f,	// (0x00034232) bg_button_pane_cp04

0x0ebc,	// (0x0002b04f) midp_keyp_sk_right_pane_g1

0xd27c,	// (0x0003740f) midp_keyp_rocker_pane_g1

0x0ec5,	// (0x0002b058) keyp_game_cell_pane_ParamLimits

0x0ec5,	// (0x0002b058) keyp_game_cell_pane

0xa09f,	// (0x00034232) bg_button_pane_cp02

0x0ed6,	// (0x0002b069) keyp_game_cell_pane_g1

0x766c,	// (0x000317ff) popup_fep_vkb2_window_ParamLimits

0x766c,	// (0x000317ff) popup_fep_vkb2_window

0x8d4d,	// (0x00032ee0) aid_size_cell_vkb2_ParamLimits

0x8d4d,	// (0x00032ee0) aid_size_cell_vkb2

0x8d99,	// (0x00032f2c) popup_fep_vkb2_window_g1_ParamLimits

0x8d99,	// (0x00032f2c) popup_fep_vkb2_window_g1

0x8de1,	// (0x00032f74) vkb2_area_bottom_pane_ParamLimits

0x8de1,	// (0x00032f74) vkb2_area_bottom_pane

0x8e19,	// (0x00032fac) vkb2_area_keypad_pane_ParamLimits

0x8e19,	// (0x00032fac) vkb2_area_keypad_pane

0x8e51,	// (0x00032fe4) vkb2_area_top_pane_ParamLimits

0x8e51,	// (0x00032fe4) vkb2_area_top_pane

0x8ec6,	// (0x00033059) vkb2_top_entry_pane_ParamLimits

0x8ec6,	// (0x00033059) vkb2_top_entry_pane

0x8ef0,	// (0x00033083) vkb2_top_grid_left_pane_ParamLimits

0x8ef0,	// (0x00033083) vkb2_top_grid_left_pane

0x8f0f,	// (0x000330a2) vkb2_top_grid_right_pane_ParamLimits

0x8f0f,	// (0x000330a2) vkb2_top_grid_right_pane

0x8f2e,	// (0x000330c1) vkb2_cell_keypad_pane_ParamLimits

0x8f2e,	// (0x000330c1) vkb2_cell_keypad_pane

0x8fdf,	// (0x00033172) vkb2_area_bottom_grid_pane_ParamLimits

0x8fdf,	// (0x00033172) vkb2_area_bottom_grid_pane

0x9003,	// (0x00033196) vkb2_area_bottom_pane_g1_ParamLimits

0x9003,	// (0x00033196) vkb2_area_bottom_pane_g1

0x9027,	// (0x000331ba) vkb2_area_bottom_pane_g2_ParamLimits

0x9027,	// (0x000331ba) vkb2_area_bottom_pane_g2

0x9055,	// (0x000331e8) vkb2_area_bottom_pane_g3_ParamLimits

0x9055,	// (0x000331e8) vkb2_area_bottom_pane_g3

0x0002,

0xfd5d,	// (0x00039ef0) vkb2_area_bottom_pane_g_ParamLimits

0xfd5d,	// (0x00039ef0) vkb2_area_bottom_pane_g

0x90a6,	// (0x00033239) vkb2_top_cell_left_pane_ParamLimits

0x90a6,	// (0x00033239) vkb2_top_cell_left_pane

0x1266,	// (0x0002b3f9) vkb2_top_entry_pane_g1_ParamLimits

0x1266,	// (0x0002b3f9) vkb2_top_entry_pane_g1

0x1274,	// (0x0002b407) vkb2_top_entry_pane_t1_ParamLimits

0x1274,	// (0x0002b407) vkb2_top_entry_pane_t1

0xe854,	// (0x000389e7) vkb2_top_entry_pane_t2_ParamLimits

0xe854,	// (0x000389e7) vkb2_top_entry_pane_t2

0xe886,	// (0x00038a19) vkb2_top_entry_pane_t3_ParamLimits

0xe886,	// (0x00038a19) vkb2_top_entry_pane_t3

0x0002,

0xfd64,	// (0x00039ef7) vkb2_top_entry_pane_t_ParamLimits

0xfd64,	// (0x00039ef7) vkb2_top_entry_pane_t

0x90f3,	// (0x00033286) vkb2_top_grid_right_pane_g1_ParamLimits

0x90f3,	// (0x00033286) vkb2_top_grid_right_pane_g1

0x9109,	// (0x0003329c) vkb2_top_grid_right_pane_g2_ParamLimits

0x9109,	// (0x0003329c) vkb2_top_grid_right_pane_g2

0x9121,	// (0x000332b4) vkb2_top_grid_right_pane_g3_ParamLimits

0x9121,	// (0x000332b4) vkb2_top_grid_right_pane_g3

0x9139,	// (0x000332cc) vkb2_top_grid_right_pane_g4_ParamLimits

0x9139,	// (0x000332cc) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6b,	// (0x00039efe) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6b,	// (0x00039efe) vkb2_top_grid_right_pane_g

0x914f,	// (0x000332e2) vkb2_top_cell_left_pane_g1

0x9166,	// (0x000332f9) vkb2_cell_keypad_pane_g1_ParamLimits

0x9166,	// (0x000332f9) vkb2_cell_keypad_pane_g1

0xe89c,	// (0x00038a2f) vkb2_cell_keypad_pane_t1_ParamLimits

0xe89c,	// (0x00038a2f) vkb2_cell_keypad_pane_t1

0x9174,	// (0x00033307) vkb2_cell_bottom_grid_pane_ParamLimits

0x9174,	// (0x00033307) vkb2_cell_bottom_grid_pane

0x91ad,	// (0x00033340) vkb2_cell_bottom_grid_pane_g1

0x0c15,	// (0x0002ada8) aid_call2_pane_cp02

0x0c1d,	// (0x0002adb0) aid_call_pane_cp02

0x0c25,	// (0x0002adb8) clock_digital_number_pane_cp10

0x0c2d,	// (0x0002adc0) clock_digital_number_pane_cp11

0x0c35,	// (0x0002adc8) clock_digital_number_pane_cp12

0x0c3d,	// (0x0002add0) clock_digital_number_pane_cp13

0x0c45,	// (0x0002add8) clock_digital_separator_pane_cp10

0xac76,	// (0x00034e09) popup_clock_digital_analogue_window_cp2_g1

0xac76,	// (0x00034e09) popup_clock_digital_analogue_window_cp2_g2

0x0c4d,	// (0x0002ade0) popup_clock_digital_analogue_window_cp2_g3

0xac76,	// (0x00034e09) popup_clock_digital_analogue_window_cp2_g4

0x0c4d,	// (0x0002ade0) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd20,	// (0x00039eb3) popup_clock_digital_analogue_window_cp2_g

0x0c55,	// (0x0002ade8) popup_clock_digital_analogue_window_cp2_t1

0x0c63,	// (0x0002adf6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2b,	// (0x00039ebe) popup_clock_digital_analogue_window_cp2_t

0xd27c,	// (0x0003740f) clock_digital_number_pane_cp10_g1

0xd27c,	// (0x0003740f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x00039cad) clock_digital_number_pane_cp10_g

0xd27c,	// (0x0003740f) clock_digital_separator_pane_cp10_g1

0xd27c,	// (0x0003740f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x00039cad) clock_digital_separator_pane_cp10_g

0xe687,	// (0x0003881a) uniindi_top_pane_g3

0xe698,	// (0x0003882b) uniindi_top_pane_g4

0x8f99,	// (0x0003312c) vkb2_row_keypad_pane_ParamLimits

0x8f99,	// (0x0003312c) vkb2_row_keypad_pane

0x91c9,	// (0x0003335c) vkb2_cell_t_keypad_pane_ParamLimits

0x91c9,	// (0x0003335c) vkb2_cell_t_keypad_pane

0x91d6,	// (0x00033369) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x91d6,	// (0x00033369) vkb2_cell_t_keypad_pane_cp08

0x91e6,	// (0x00033379) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x91e6,	// (0x00033379) vkb2_cell_t_keypad_pane_cp09

0x91f7,	// (0x0003338a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x91f7,	// (0x0003338a) vkb2_cell_t_keypad_pane_cp01

0x9207,	// (0x0003339a) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9207,	// (0x0003339a) vkb2_cell_t_keypad_pane_cp02

0x9217,	// (0x000333aa) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9217,	// (0x000333aa) vkb2_cell_t_keypad_pane_cp03

0x9227,	// (0x000333ba) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9227,	// (0x000333ba) vkb2_cell_t_keypad_pane_cp04

0x9237,	// (0x000333ca) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9237,	// (0x000333ca) vkb2_cell_t_keypad_pane_cp05

0x9247,	// (0x000333da) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9247,	// (0x000333da) vkb2_cell_t_keypad_pane_cp06

0x9257,	// (0x000333ea) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9257,	// (0x000333ea) vkb2_cell_t_keypad_pane_cp07

0x9267,	// (0x000333fa) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9267,	// (0x000333fa) vkb2_cell_t_keypad_pane_cp10

0xd4a8,	// (0x0003763b) vkb2_cell_t_keypad_pane_g1

0x289e,	// (0x0002ca31) vkb2_cell_t_keypad_pane_t1

0xa09f,	// (0x00034232) popup_grid_graphic2_window

0x927c,	// (0x0003340f) aid_size_cell_graphic2_ParamLimits

0x927c,	// (0x0003340f) aid_size_cell_graphic2

0x92b4,	// (0x00033447) bg_popup_window_pane_cp21_ParamLimits

0x92b4,	// (0x00033447) bg_popup_window_pane_cp21

0x92c2,	// (0x00033455) graphic2_pages_pane_ParamLimits

0x92c2,	// (0x00033455) graphic2_pages_pane

0x92fc,	// (0x0003348f) grid_graphic2_control_pane_ParamLimits

0x92fc,	// (0x0003348f) grid_graphic2_control_pane

0x9332,	// (0x000334c5) grid_graphic2_pane_ParamLimits

0x9332,	// (0x000334c5) grid_graphic2_pane

0x9392,	// (0x00033525) cell_graphic2_pane

0xa09f,	// (0x00034232) main_comp_mode_pane

0xe300,	// (0x00038493) list_ai3_gene_pane_ParamLimits

0x090f,	// (0x0002aaa2) bg_popup_window_pane_cp19_ParamLimits

0xe473,	// (0x00038606) bg_touch_area_indi_pane_ParamLimits

0xe473,	// (0x00038606) bg_touch_area_indi_pane

0xe489,	// (0x0003861c) bg_touch_area_indi_pane_cp01_ParamLimits

0xe489,	// (0x0003861c) bg_touch_area_indi_pane_cp01

0xe49f,	// (0x00038632) bg_touch_area_indi_pane_cp02_ParamLimits

0xe49f,	// (0x00038632) bg_touch_area_indi_pane_cp02

0xe4b5,	// (0x00038648) bg_touch_area_indi_pane_cp03_ParamLimits

0xe4b5,	// (0x00038648) bg_touch_area_indi_pane_cp03

0xe4cb,	// (0x0003865e) popup_slider_window_g1_ParamLimits

0xe4e7,	// (0x0003867a) popup_slider_window_g2_ParamLimits

0xe503,	// (0x00038696) popup_slider_window_g3_ParamLimits

0xfcb5,	// (0x00039e48) popup_slider_window_g_ParamLimits

0xe51f,	// (0x000386b2) popup_slider_window_t1_ParamLimits

0xe563,	// (0x000386f6) small_volume_slider_vertical_pane_ParamLimits

0x9392,	// (0x00033525) cell_graphic2_pane_ParamLimits

0x93ce,	// (0x00033561) bg_button_pane_cp10_ParamLimits

0x93ce,	// (0x00033561) bg_button_pane_cp10

0x93df,	// (0x00033572) bg_button_pane_cp11_ParamLimits

0x93df,	// (0x00033572) bg_button_pane_cp11

0x93f0,	// (0x00033583) graphic2_pages_pane_g1_ParamLimits

0x93f0,	// (0x00033583) graphic2_pages_pane_g1

0x9403,	// (0x00033596) graphic2_pages_pane_g2_ParamLimits

0x9403,	// (0x00033596) graphic2_pages_pane_g2

0x0001,

0xfd79,	// (0x00039f0c) graphic2_pages_pane_g_ParamLimits

0xfd79,	// (0x00039f0c) graphic2_pages_pane_g

0x9419,	// (0x000335ac) graphic2_pages_pane_t1_ParamLimits

0x9419,	// (0x000335ac) graphic2_pages_pane_t1

0x942f,	// (0x000335c2) cell_graphic2_control_pane_ParamLimits

0x942f,	// (0x000335c2) cell_graphic2_control_pane

0x944e,	// (0x000335e1) cell_graphic2_pane_g1_ParamLimits

0x944e,	// (0x000335e1) cell_graphic2_pane_g1

0x945b,	// (0x000335ee) cell_graphic2_pane_g2_ParamLimits

0x945b,	// (0x000335ee) cell_graphic2_pane_g2

0x9468,	// (0x000335fb) cell_graphic2_pane_g3_ParamLimits

0x9468,	// (0x000335fb) cell_graphic2_pane_g3

0x9475,	// (0x00033608) cell_graphic2_pane_g4_ParamLimits

0x9475,	// (0x00033608) cell_graphic2_pane_g4

0x9482,	// (0x00033615) cell_graphic2_pane_g5_ParamLimits

0x9482,	// (0x00033615) cell_graphic2_pane_g5

0x0004,

0xfd7e,	// (0x00039f11) cell_graphic2_pane_g_ParamLimits

0xfd7e,	// (0x00039f11) cell_graphic2_pane_g

0x949b,	// (0x0003362e) cell_graphic2_pane_t1_ParamLimits

0x949b,	// (0x0003362e) cell_graphic2_pane_t1

0xb574,	// (0x00035707) grid_highlight_pane_cp11_ParamLimits

0xb574,	// (0x00035707) grid_highlight_pane_cp11

0xa2c2,	// (0x00034455) bg_button_pane_cp05

0x94c3,	// (0x00033656) cell_graphic2_control_pane_g1

0xd27c,	// (0x0003740f) bg_touch_area_indi_pane_g1

0x28b0,	// (0x0002ca43) aid_cmod_rocker_key_size

0x28ba,	// (0x0002ca4d) aid_cmode_itu_key_size

0x28c4,	// (0x0002ca57) main_cmode_video_pane

0x28cc,	// (0x0002ca5f) main_comp_mode_itu_pane

0x28d6,	// (0x0002ca69) main_comp_mode_rocker_pane

0x28de,	// (0x0002ca71) cell_cmode_rocker_pane_ParamLimits

0x28de,	// (0x0002ca71) cell_cmode_rocker_pane

0x28f0,	// (0x0002ca83) cell_cmode_itu_pane_ParamLimits

0x28f0,	// (0x0002ca83) cell_cmode_itu_pane

0xa769,	// (0x000348fc) bg_button_pane_cp06_ParamLimits

0xa769,	// (0x000348fc) bg_button_pane_cp06

0xd4a8,	// (0x0003763b) cell_cmode_rocker_pane_g1_ParamLimits

0xd4a8,	// (0x0003763b) cell_cmode_rocker_pane_g1

0xe59a,	// (0x0003872d) cell_cmode_rocker_pane_g2_ParamLimits

0xe59a,	// (0x0003872d) cell_cmode_rocker_pane_g2

0x0001,

0xfd8e,	// (0x00039f21) cell_cmode_rocker_pane_g_ParamLimits

0xfd8e,	// (0x00039f21) cell_cmode_rocker_pane_g

0xa09f,	// (0x00034232) bg_button_pane_cp07

0x2905,	// (0x0002ca98) cell_cmode_itu_pane_g1

0x290e,	// (0x0002caa1) cell_cmode_itu_pane_t1

0x291c,	// (0x0002caaf) cell_cmode_itu_pane_t2

0x0001,

0xfd93,	// (0x00039f26) cell_cmode_itu_pane_t

0xe709,	// (0x0003889c) aid_touch_ctrl_left

0xe711,	// (0x000388a4) aid_touch_ctrl_right

0xa09f,	// (0x00034232) compa_mode_pane

0x94eb,	// (0x0003367e) aid_cmod_rocker_key_size_cp

0x94f5,	// (0x00033688) aid_cmode_itu_key_size_cp

0x292a,	// (0x0002cabd) compa_mode_pane_g1

0x2932,	// (0x0002cac5) compa_mode_pane_g2

0x293a,	// (0x0002cacd) compa_mode_pane_g3

0x0002,

0xfd98,	// (0x00039f2b) compa_mode_pane_g

0x94ff,	// (0x00033692) main_comp_mode_itu_pane_cp

0x9507,	// (0x0003369a) main_comp_mode_rocker_pane_cp

0x950f,	// (0x000336a2) cell_cmode_itu_pane_cp_ParamLimits

0x950f,	// (0x000336a2) cell_cmode_itu_pane_cp

0x9524,	// (0x000336b7) cell_cmode_rocker_pane_cp_ParamLimits

0x9524,	// (0x000336b7) cell_cmode_rocker_pane_cp

0xa769,	// (0x000348fc) bg_button_pane_cp06_cp_ParamLimits

0xa769,	// (0x000348fc) bg_button_pane_cp06_cp

0xd4a8,	// (0x0003763b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xd4a8,	// (0x0003763b) cell_cmode_rocker_pane_g1_cp

0xd27c,	// (0x0003740f) cell_cmode_rocker_pane_g2_cp

0xa09f,	// (0x00034232) bg_button_pane_cp07_cp

0x9536,	// (0x000336c9) cell_cmode_itu_pane_g1_cp

0x953f,	// (0x000336d2) cell_cmode_itu_pane_t1_cp

0x954d,	// (0x000336e0) cell_cmode_itu_pane_t2_cp

0xf24e,	// (0x000393e1) settings_code_pane_cp2

0xa179,	// (0x0003430c) bg_popup_window_pane_cp3_ParamLimits

0xa4c0,	// (0x00034653) heading_pane_cp3_ParamLimits

0xa4cf,	// (0x00034662) listscroll_popup_graphic_pane_ParamLimits

0x8854,	// (0x000329e7) fep_hwr_aid_pane_ParamLimits

0x8cbf,	// (0x00032e52) aid_touch_sctrl_top_ParamLimits

0x8ccc,	// (0x00032e5f) sctrl_sk_top_pane_g1_ParamLimits

0xd4a8,	// (0x0003763b) sctrl_sk_top_pane_g2_ParamLimits

0xfcce,	// (0x00039e61) sctrl_sk_top_pane_g_ParamLimits

0x8cd9,	// (0x00032e6c) sctrl_sk_top_pane_t1_ParamLimits

0x8cbf,	// (0x00032e52) aid_touch_sctrl_bottom_ParamLimits

0x8cd9,	// (0x00032e6c) sctrl_sk_bottom_pane_t1_ParamLimits

0xe653,	// (0x000387e6) aid_area_touch_clock

0x8e8d,	// (0x00033020) aid_vkb2_area_top_pane_cell_ParamLimits

0x8e8d,	// (0x00033020) aid_vkb2_area_top_pane_cell

0x8fbb,	// (0x0003314e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8fbb,	// (0x0003314e) aid_vkb2_area_bottom_pane_cell

0xe84c,	// (0x000389df) popup_char_count_window

0x2942,	// (0x0002cad5) popup_char_count_window_g1

0x294b,	// (0x0002cade) popup_char_count_window_g2

0x2954,	// (0x0002cae7) popup_char_count_window_g3

0x0002,

0xfd9f,	// (0x00039f32) popup_char_count_window_g

0x295d,	// (0x0002caf0) popup_char_count_window_t1

0x8d77,	// (0x00032f0a) popup_fep_char_preview_window_ParamLimits

0x8d77,	// (0x00032f0a) popup_fep_char_preview_window

0x8eab,	// (0x0003303e) vkb2_top_candi_pane_ParamLimits

0x8eab,	// (0x0003303e) vkb2_top_candi_pane

0x955b,	// (0x000336ee) cell_vkb2_top_candi_pane_ParamLimits

0x955b,	// (0x000336ee) cell_vkb2_top_candi_pane

0xbabc,	// (0x00035c4f) bg_popup_fep_char_preview_window_ParamLimits

0xbabc,	// (0x00035c4f) bg_popup_fep_char_preview_window

0x9591,	// (0x00033724) popup_fep_char_preview_window_t1_ParamLimits

0x9591,	// (0x00033724) popup_fep_char_preview_window_t1

0x297b,	// (0x0002cb0e) bg_popup_fep_char_preview_window_g1

0x2973,	// (0x0002cb06) bg_popup_fep_char_preview_window_g2

0x296b,	// (0x0002cafe) bg_popup_fep_char_preview_window_g3

0x29a3,	// (0x0002cb36) bg_popup_fep_char_preview_window_g4

0x299b,	// (0x0002cb2e) bg_popup_fep_char_preview_window_g5

0x2993,	// (0x0002cb26) bg_popup_fep_char_preview_window_g6

0x298b,	// (0x0002cb1e) bg_popup_fep_char_preview_window_g7

0x2983,	// (0x0002cb16) bg_popup_fep_char_preview_window_g8

0x29ab,	// (0x0002cb3e) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda6,	// (0x00039f39) bg_popup_fep_char_preview_window_g

0xd4a8,	// (0x0003763b) cell_vkb2_top_candi_pane_g1_ParamLimits

0xd4a8,	// (0x0003763b) cell_vkb2_top_candi_pane_g1

0xd6d7,	// (0x0003786a) cell_vkb2_top_candi_pane_g2_ParamLimits

0xd6d7,	// (0x0003786a) cell_vkb2_top_candi_pane_g2

0xd6f8,	// (0x0003788b) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd6f8,	// (0x0003788b) cell_vkb2_top_candi_pane_g3

0x95d3,	// (0x00033766) cell_vkb2_top_candi_pane_g4_ParamLimits

0x95d3,	// (0x00033766) cell_vkb2_top_candi_pane_g4

0x2639,	// (0x0002c7cc) cell_vkb2_top_candi_pane_g5_ParamLimits

0x2639,	// (0x0002c7cc) cell_vkb2_top_candi_pane_g5

0xe59a,	// (0x0003872d) cell_vkb2_top_candi_pane_g6_ParamLimits

0xe59a,	// (0x0003872d) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdbb,	// (0x00039f4e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdbb,	// (0x00039f4e) cell_vkb2_top_candi_pane_g

0x95f4,	// (0x00033787) cell_vkb2_top_candi_pane_t1

0x85b3,	// (0x00032746) aid_size_touch_slider_mark_ParamLimits

0x85b3,	// (0x00032746) aid_size_touch_slider_mark

0x92f0,	// (0x00033483) grid_graphic2_catg_pane_ParamLimits

0x92f0,	// (0x00033483) grid_graphic2_catg_pane

0x936e,	// (0x00033501) popup_grid_graphic2_window_t1_ParamLimits

0x936e,	// (0x00033501) popup_grid_graphic2_window_t1

0x9380,	// (0x00033513) popup_grid_graphic2_window_t2_ParamLimits

0x9380,	// (0x00033513) popup_grid_graphic2_window_t2

0x0001,

0xfd74,	// (0x00039f07) popup_grid_graphic2_window_t_ParamLimits

0xfd74,	// (0x00039f07) popup_grid_graphic2_window_t

0xa2c2,	// (0x00034455) bg_button_pane_cp05_ParamLimits

0x94c3,	// (0x00033656) cell_graphic2_control_pane_g1_ParamLimits

0x960b,	// (0x0003379e) cell_graphic2_catg_pane_ParamLimits

0x960b,	// (0x0003379e) cell_graphic2_catg_pane

0xa09f,	// (0x00034232) bg_button_pane_cp12

0x961d,	// (0x000337b0) cell_graphic2_catg_pane_g1

0xe61f,	// (0x000387b2) cell_tb_ext_pane_t1_ParamLimits

0x90c6,	// (0x00033259) vkb2_top_cell_right_narrow_pane_ParamLimits

0x90c6,	// (0x00033259) vkb2_top_cell_right_narrow_pane

0x90de,	// (0x00033271) vkb2_top_cell_right_wide_pane_ParamLimits

0x90de,	// (0x00033271) vkb2_top_cell_right_wide_pane

0x8846,	// (0x000329d9) bg_vkb2_func_pane_ParamLimits

0x8846,	// (0x000329d9) bg_vkb2_func_pane

0x914f,	// (0x000332e2) vkb2_top_cell_left_pane_g1_ParamLimits

0x8846,	// (0x000329d9) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8846,	// (0x000329d9) bg_vkb2_fuc_pane_cp03

0x91ad,	// (0x00033340) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xb4fc,	// (0x0003568f) bg_vkb2_func_pane_g1

0xb504,	// (0x00035697) bg_vkb2_func_pane_g2

0xb514,	// (0x000356a7) bg_vkb2_func_pane_g3

0xb50c,	// (0x0003569f) bg_vkb2_func_pane_g4

0xb51c,	// (0x000356af) bg_vkb2_func_pane_g5

0xb524,	// (0x000356b7) bg_vkb2_func_pane_g6

0xb52c,	// (0x000356bf) bg_vkb2_func_pane_g7

0xb534,	// (0x000356c7) bg_vkb2_func_pane_g8

0xb4f4,	// (0x00035687) bg_vkb2_func_pane_g9

0x0008,

0xfdc8,	// (0x00039f5b) bg_vkb2_func_pane_g

0x8846,	// (0x000329d9) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8846,	// (0x000329d9) bg_vkb2_fuc_pane_cp01

0x914f,	// (0x000332e2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x914f,	// (0x000332e2) vkb2_top_cell_right_wide_pane_g1

0x8846,	// (0x000329d9) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8846,	// (0x000329d9) bg_vkb2_fuc_pane_cp02

0x91ad,	// (0x00033340) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x91ad,	// (0x00033340) vkb2_top_cell_right_narrow_pane_g1

0x08a1,	// (0x0002aa34) aid_touch_area_decrease_ParamLimits

0x08a1,	// (0x0002aa34) aid_touch_area_decrease

0x08b9,	// (0x0002aa4c) aid_touch_area_increase_ParamLimits

0x08b9,	// (0x0002aa4c) aid_touch_area_increase

0x08c5,	// (0x0002aa58) aid_touch_area_mute_ParamLimits

0x08c5,	// (0x0002aa58) aid_touch_area_mute

0x08e1,	// (0x0002aa74) aid_touch_area_slider_ParamLimits

0x08e1,	// (0x0002aa74) aid_touch_area_slider

0x091b,	// (0x0002aaae) popup_slider_window_g4_ParamLimits

0x091b,	// (0x0002aaae) popup_slider_window_g4

0x0927,	// (0x0002aaba) popup_slider_window_g5_ParamLimits

0x0927,	// (0x0002aaba) popup_slider_window_g5

0x0949,	// (0x0002aadc) popup_slider_window_g6_ParamLimits

0x0949,	// (0x0002aadc) popup_slider_window_g6

0xe54b,	// (0x000386de) popup_slider_window_t2_ParamLimits

0xe54b,	// (0x000386de) popup_slider_window_t2

0x0001,

0xfcc2,	// (0x00039e55) popup_slider_window_t_ParamLimits

0xfcc2,	// (0x00039e55) popup_slider_window_t

0x095b,	// (0x0002aaee) slider_pane_ParamLimits

0x095b,	// (0x0002aaee) slider_pane

0x29b3,	// (0x0002cb46) slider_pane_g1_ParamLimits

0x29b3,	// (0x0002cb46) slider_pane_g1

0x29c7,	// (0x0002cb5a) slider_pane_g2_ParamLimits

0x29c7,	// (0x0002cb5a) slider_pane_g2

0x29dd,	// (0x0002cb70) slider_pane_g3_ParamLimits

0x29dd,	// (0x0002cb70) slider_pane_g3

0x0003,

0xfddb,	// (0x00039f6e) slider_pane_g_ParamLimits

0xfddb,	// (0x00039f6e) slider_pane_g

0x823f,	// (0x000323d2) popup_tb_float_extension_window_ParamLimits

0x823f,	// (0x000323d2) popup_tb_float_extension_window

0x2a09,	// (0x0002cb9c) aid_size_cell_tb_float_ext

0xa09f,	// (0x00034232) bg_popup_sub_window_cp28

0x2a14,	// (0x0002cba7) grid_tb_float_ext_pane

0x2a1c,	// (0x0002cbaf) cell_tb_float_ext_pane_ParamLimits

0x2a1c,	// (0x0002cbaf) cell_tb_float_ext_pane

0x2a34,	// (0x0002cbc7) cell_tb_float_ext_pane_g1

0x2a3d,	// (0x0002cbd0) grid_highlight_pane_cp12

0x8981,	// (0x00032b14) cell_last_hwr_side_pane_ParamLimits

0x8981,	// (0x00032b14) cell_last_hwr_side_pane

0xd27c,	// (0x0003740f) cell_last_hwr_side_pane_g1

0x2a46,	// (0x0002cbd9) cell_last_hwr_side_pane_g2

0x0001,

0xfde4,	// (0x00039f77) cell_last_hwr_side_pane_g

0x9083,	// (0x00033216) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9083,	// (0x00033216) vkb2_area_bottom_space_btn_pane

0xd4a8,	// (0x0003763b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x289e,	// (0x0002ca31) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x95f4,	// (0x00033787) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9626,	// (0x000337b9) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9626,	// (0x000337b9) vkb2_area_bottom_space_btn_pane_g1

0x965c,	// (0x000337ef) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x965c,	// (0x000337ef) vkb2_area_bottom_space_btn_pane_g2

0x9692,	// (0x00033825) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9692,	// (0x00033825) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde9,	// (0x00039f7c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde9,	// (0x00039f7c) vkb2_area_bottom_space_btn_pane_g

0x88f5,	// (0x00032a88) cel_fep_hwr_func_pane_ParamLimits

0x88f5,	// (0x00032a88) cel_fep_hwr_func_pane

0x8931,	// (0x00032ac4) cell_hwr_side_button_pane_ParamLimits

0x8931,	// (0x00032ac4) cell_hwr_side_button_pane

0xe653,	// (0x000387e6) aid_area_touch_clock_ParamLimits

0xa2c2,	// (0x00034455) bg_uniindi_top_pane_ParamLimits

0xe665,	// (0x000387f8) uniindi_top_pane_g1_ParamLimits

0xe67b,	// (0x0003880e) uniindi_top_pane_g2_ParamLimits

0xe687,	// (0x0003881a) uniindi_top_pane_g3_ParamLimits

0xe698,	// (0x0003882b) uniindi_top_pane_g4_ParamLimits

0xfcfa,	// (0x00039e8d) uniindi_top_pane_g_ParamLimits

0xe6a5,	// (0x00038838) uniindi_top_pane_t1_ParamLimits

0xa2c2,	// (0x00034455) bg_vkb2_func_pane_cp01_ParamLimits

0xa2c2,	// (0x00034455) bg_vkb2_func_pane_cp01

0x2a4f,	// (0x0002cbe2) cel_fep_hwr_func_pane_g1_ParamLimits

0x2a4f,	// (0x0002cbe2) cel_fep_hwr_func_pane_g1

0xa2c2,	// (0x00034455) bg_vkb2_func_pane_cp02_ParamLimits

0xa2c2,	// (0x00034455) bg_vkb2_func_pane_cp02

0x2a4f,	// (0x0002cbe2) cell_hwr_side_button_pane_g1_ParamLimits

0x2a4f,	// (0x0002cbe2) cell_hwr_side_button_pane_g1

0xb418,	// (0x000355ab) status_pane_g4_ParamLimits

0xb418,	// (0x000355ab) status_pane_g4

0xb430,	// (0x000355c3) status_pane_t1

0xd082,	// (0x00037215) form2_midp_gauge_slider_cont_pane

0xd08a,	// (0x0003721d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xf505,	// (0x00039698) form2_midp_gauge_slider_pane_t2_ParamLimits

0xf517,	// (0x000396aa) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x00039c60) form2_midp_gauge_slider_pane_t_ParamLimits

0xd09c,	// (0x0003722f) form2_midp_slider_pane_ParamLimits

0x8d3f,	// (0x00032ed2) aid_size_cell_func_vkb2_ParamLimits

0x8d3f,	// (0x00032ed2) aid_size_cell_func_vkb2

0x29f5,	// (0x0002cb88) slider_pane_g4_ParamLimits

0x29f5,	// (0x0002cb88) slider_pane_g4

0x96d8,	// (0x0003386b) form2_midp_gauge_slider_pane_t2_cp01

0x96e6,	// (0x00033879) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x96e6,	// (0x00033879) form2_midp_gauge_slider_pane_t3_cp01

0x9703,	// (0x00033896) form2_midp_slider_pane_cp01

0xa09f,	// (0x00034232) navi_smil_pane

0x2a7f,	// (0x0002cc12) navi_smil_pane_g1

0x2a87,	// (0x0002cc1a) navi_smil_pane_t1

0x2a5d,	// (0x0002cbf0) form2_midp_slider_pane_g1

0x2a66,	// (0x0002cbf9) form2_midp_slider_pane_g2

0x2a6e,	// (0x0002cc01) form2_midp_slider_pane_g3

0x2a5d,	// (0x0002cbf0) form2_midp_slider_pane_g4

0x970c,	// (0x0003389f) form2_midp_slider_pane_g5

0x0004,

0xfdf2,	// (0x00039f85) form2_midp_slider_pane_g

0x96c8,	// (0x0003385b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x96c8,	// (0x0003385b) vkb2_area_bottom_space_btn_pane_g4

0xed64,	// (0x00038ef7) lc0_navi_pane_ParamLimits

0xed64,	// (0x00038ef7) lc0_navi_pane

0xedda,	// (0x00038f6d) lc0_stat_indi_pane_ParamLimits

0xedda,	// (0x00038f6d) lc0_stat_indi_pane

0xedf1,	// (0x00038f84) ls0_title_pane_ParamLimits

0xedf1,	// (0x00038f84) ls0_title_pane

0xa769,	// (0x000348fc) bg_popup_sub_pane_cp14_ParamLimits

0xe63a,	// (0x000387cd) list_uniindi_pane_ParamLimits

0xe646,	// (0x000387d9) uniindi_top_pane_ParamLimits

0xe6e1,	// (0x00038874) list_single_uniindi_pane_g1_ParamLimits

0xe6f4,	// (0x00038887) list_single_uniindi_pane_t1_ParamLimits

0x9715,	// (0x000338a8) lc0_stat_clock_pane_ParamLimits

0x9715,	// (0x000338a8) lc0_stat_clock_pane

0x9722,	// (0x000338b5) lc0_stat_indi_pane_g1_ParamLimits

0x9722,	// (0x000338b5) lc0_stat_indi_pane_g1

0x972f,	// (0x000338c2) lc0_stat_indi_pane_g2_ParamLimits

0x972f,	// (0x000338c2) lc0_stat_indi_pane_g2

0x0001,

0xfdfd,	// (0x00039f90) lc0_stat_indi_pane_g_ParamLimits

0xfdfd,	// (0x00039f90) lc0_stat_indi_pane_g

0x973c,	// (0x000338cf) lc0_uni_indicator_pane_ParamLimits

0x973c,	// (0x000338cf) lc0_uni_indicator_pane

0x2a95,	// (0x0002cc28) ls0_title_pane_g1_ParamLimits

0x2a95,	// (0x0002cc28) ls0_title_pane_g1

0x9749,	// (0x000338dc) ls0_title_pane_t1_ParamLimits

0x9749,	// (0x000338dc) ls0_title_pane_t1

0x977f,	// (0x00033912) lc0_uni_indicator_pane_g1_ParamLimits

0x977f,	// (0x00033912) lc0_uni_indicator_pane_g1

0x2aa9,	// (0x0002cc3c) lc0_stat_clock_pane_t1

0xa09f,	// (0x00034232) main_ai5_pane

0x2ab7,	// (0x0002cc4a) ai5_sk_pane_ParamLimits

0x2ab7,	// (0x0002cc4a) ai5_sk_pane

0x9791,	// (0x00033924) cell_ai5_widget_pane_ParamLimits

0x9791,	// (0x00033924) cell_ai5_widget_pane

0x2ac4,	// (0x0002cc57) aid_size_cell_widget_grid

0x2ad1,	// (0x0002cc64) bg_ai5_widget_pane_ParamLimits

0x2ad1,	// (0x0002cc64) bg_ai5_widget_pane

0x9824,	// (0x000339b7) cell_ai5_widget_pane_g2

0x9838,	// (0x000339cb) cell_ai5_widget_pane_g3

0x9852,	// (0x000339e5) cell_ai5_widget_pane_g4

0x9862,	// (0x000339f5) cell_ai5_widget_pane_g5

0x9872,	// (0x00033a05) cell_ai5_widget_pane_g6

0x987e,	// (0x00033a11) cell_ai5_widget_pane_g7

0x98ea,	// (0x00033a7d) cell_ai5_widget_pane_t1_ParamLimits

0x98ea,	// (0x00033a7d) cell_ai5_widget_pane_t1

0x9907,	// (0x00033a9a) cell_ai5_widget_pane_t2_ParamLimits

0x9907,	// (0x00033a9a) cell_ai5_widget_pane_t2

0x991f,	// (0x00033ab2) cell_ai5_widget_pane_t3_ParamLimits

0x991f,	// (0x00033ab2) cell_ai5_widget_pane_t3

0x9937,	// (0x00033aca) cell_ai5_widget_pane_t4_ParamLimits

0x9937,	// (0x00033aca) cell_ai5_widget_pane_t4

0x995d,	// (0x00033af0) cell_ai5_widget_pane_t5_ParamLimits

0x995d,	// (0x00033af0) cell_ai5_widget_pane_t5

0x2b0b,	// (0x0002cc9e) cell_ai5_widget_pane_t6_ParamLimits

0x2b0b,	// (0x0002cc9e) cell_ai5_widget_pane_t6

0x2b1d,	// (0x0002ccb0) cell_ai5_widget_pane_t7_ParamLimits

0x2b1d,	// (0x0002ccb0) cell_ai5_widget_pane_t7

0x997c,	// (0x00033b0f) cell_ai5_widget_pane_t8_ParamLimits

0x997c,	// (0x00033b0f) cell_ai5_widget_pane_t8

0x000b,

0xfe1d,	// (0x00039fb0) cell_ai5_widget_pane_t_ParamLimits

0xfe1d,	// (0x00039fb0) cell_ai5_widget_pane_t

0x99ff,	// (0x00033b92) grid_ai5_widget_pane

0xa769,	// (0x000348fc) highlight_cell_ai5_widget_pane_ParamLimits

0xa769,	// (0x000348fc) highlight_cell_ai5_widget_pane

0x9a0b,	// (0x00033b9e) ai5_sk_left_pane

0x9a15,	// (0x00033ba8) ai5_sk_middle_pane

0x9a1f,	// (0x00033bb2) ai5_sk_right_pane

0x2b3c,	// (0x0002cccf) bg_ai5_widget_pane_g1_ParamLimits

0x2b3c,	// (0x0002cccf) bg_ai5_widget_pane_g1

0x2b48,	// (0x0002ccdb) bg_ai5_widget_pane_g2_ParamLimits

0x2b48,	// (0x0002ccdb) bg_ai5_widget_pane_g2

0x2b54,	// (0x0002cce7) bg_ai5_widget_pane_g3_ParamLimits

0x2b54,	// (0x0002cce7) bg_ai5_widget_pane_g3

0x2b60,	// (0x0002ccf3) bg_ai5_widget_pane_g4_ParamLimits

0x2b60,	// (0x0002ccf3) bg_ai5_widget_pane_g4

0x2b6c,	// (0x0002ccff) bg_ai5_widget_pane_g5_ParamLimits

0x2b6c,	// (0x0002ccff) bg_ai5_widget_pane_g5

0x2b78,	// (0x0002cd0b) bg_ai5_widget_pane_g6_ParamLimits

0x2b78,	// (0x0002cd0b) bg_ai5_widget_pane_g6

0x2b84,	// (0x0002cd17) bg_ai5_widget_pane_g7_ParamLimits

0x2b84,	// (0x0002cd17) bg_ai5_widget_pane_g7

0x2b90,	// (0x0002cd23) bg_ai5_widget_pane_g8_ParamLimits

0x2b90,	// (0x0002cd23) bg_ai5_widget_pane_g8

0x2b9c,	// (0x0002cd2f) bg_ai5_widget_pane_g9_ParamLimits

0x2b9c,	// (0x0002cd2f) bg_ai5_widget_pane_g9

0x0008,

0xfe36,	// (0x00039fc9) bg_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x00039fc9) bg_ai5_widget_pane_g

0x2bcc,	// (0x0002cd5f) cell_shortcut_ai5_widget_pane_ParamLimits

0x2bcc,	// (0x0002cd5f) cell_shortcut_ai5_widget_pane

0x2bdd,	// (0x0002cd70) bg_cell_shortcut_ai5_widget_pane

0xa47c,	// (0x0003460f) cell_grid_ai5_widget_pane_g1

0xb10f,	// (0x000352a2) highlight_cell_shortcut_ai5_widget_pane

0xb504,	// (0x00035697) ai5_sk_left_pane_g1

0x2be5,	// (0x0002cd78) ai5_sk_left_pane_g2

0x2bed,	// (0x0002cd80) ai5_sk_left_pane_g3

0x2bf5,	// (0x0002cd88) ai5_sk_left_pane_g4

0x0003,

0xfe49,	// (0x00039fdc) ai5_sk_left_pane_g

0x2bfd,	// (0x0002cd90) ai5_sk_left_pane_t1

0xb4fc,	// (0x0003568f) ai5_sk_right_pane_g1

0x2c0b,	// (0x0002cd9e) ai5_sk_right_pane_g2

0x2c13,	// (0x0002cda6) ai5_sk_right_pane_g3

0x2c1b,	// (0x0002cdae) ai5_sk_right_pane_g4

0x0003,

0xfe52,	// (0x00039fe5) ai5_sk_right_pane_g

0x2c23,	// (0x0002cdb6) ai5_sk_right_pane_t1

0xb4fc,	// (0x0003568f) ai5_sk_middle_pane_g1

0xb504,	// (0x00035697) ai5_sk_middle_pane_g2

0xb51c,	// (0x000356af) ai5_sk_middle_pane_g3

0x2c13,	// (0x0002cda6) ai5_sk_middle_pane_g4

0x2bed,	// (0x0002cd80) ai5_sk_middle_pane_g5

0x2c31,	// (0x0002cdc4) ai5_sk_middle_pane_g6

0x9a29,	// (0x00033bbc) ai5_sk_middle_pane_g7

0x0006,

0xfe5b,	// (0x00039fee) ai5_sk_middle_pane_g

0xecab,	// (0x00038e3e) aid_touch_area_size_lc0_ParamLimits

0xecab,	// (0x00038e3e) aid_touch_area_size_lc0

0x8a74,	// (0x00032c07) cell_hwr_candidate_pane_t1_ParamLimits

0xb34d,	// (0x000354e0) aid_touch_navi_pane

0xeec3,	// (0x00039056) status_dt_navi_pane_ParamLimits

0xeec3,	// (0x00039056) status_dt_navi_pane

0xeed0,	// (0x00039063) status_dt_sta_pane_ParamLimits

0xeed0,	// (0x00039063) status_dt_sta_pane

0x9a31,	// (0x00033bc4) dt_sta_controll_pane

0x9a3e,	// (0x00033bd1) dt_sta_indi_pane

0x9a4f,	// (0x00033be2) dt_sta_title_pane

0xa2c2,	// (0x00034455) bg_dt_sta_indi_pane_ParamLimits

0xa2c2,	// (0x00034455) bg_dt_sta_indi_pane

0x9a62,	// (0x00033bf5) dt_sta_battery_pane

0x9a6a,	// (0x00033bfd) dt_sta_indi_pane_g1

0x9a73,	// (0x00033c06) dt_sta_indi_pane_g2

0x9a7c,	// (0x00033c0f) dt_sta_indi_pane_g3

0x0002,

0xfe6a,	// (0x00039ffd) dt_sta_indi_pane_g

0x9a85,	// (0x00033c18) dt_sta_signal_pane

0xa769,	// (0x000348fc) bg_dt_sta_title_pane_ParamLimits

0xa769,	// (0x000348fc) bg_dt_sta_title_pane

0x9a8e,	// (0x00033c21) dt_sta_title_pane_g1

0x9a96,	// (0x00033c29) dt_sta_title_pane_t1_ParamLimits

0x9a96,	// (0x00033c29) dt_sta_title_pane_t1

0xa09f,	// (0x00034232) bg_dt_sta_control_pane

0x9aab,	// (0x00033c3e) dt_sta_controll_pane_g1

0x9ab4,	// (0x00033c47) bg_dt_sta_title_pane_g1

0x9abd,	// (0x00033c50) bg_dt_sta_title_pane_g2

0x9ac6,	// (0x00033c59) bg_dt_sta_title_pane_g3

0x0002,

0xfe71,	// (0x0003a004) bg_dt_sta_title_pane_g

0xd27c,	// (0x0003740f) bg_dt_sta_indi_pane_g1

0x9acf,	// (0x00033c62) dt_sta_signal_pane_g1

0x9ad7,	// (0x00033c6a) dt_sta_signal_pane_g2

0x0001,

0xfe78,	// (0x0003a00b) dt_sta_signal_pane_g

0x2c39,	// (0x0002cdcc) dt_sta_battery_pane_g1

0x2c42,	// (0x0002cdd5) dt_sta_battery_pane_t1

0xd27c,	// (0x0003740f) bg_dt_sta_control_pane_g1

0xacd8,	// (0x00034e6b) fep_china_uni_eep_pane

0xace0,	// (0x00034e73) fep_china_uni_entry_pane_ParamLimits

0xacf0,	// (0x00034e83) popup_fep_china_uni_window_g1_ParamLimits

0xad00,	// (0x00034e93) popup_fep_china_uni_window_g2_ParamLimits

0xad00,	// (0x00034e93) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x00039890) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x00039890) popup_fep_china_uni_window_g

0x2c51,	// (0x0002cde4) fep_china_uni_eep_pane_g1

0x2c59,	// (0x0002cdec) fep_china_uni_eep_pane_t1

0x2a76,	// (0x0002cc09) aid_touch_area_size_smil_player

0xb3eb,	// (0x0003557e) lc0_clock_pane

0xb424,	// (0x000355b7) status_pane_g5_ParamLimits

0xb424,	// (0x000355b7) status_pane_g5

0x7fb0,	// (0x00032143) popup_keymap_window

0xb404,	// (0x00035597) status_icon_pane

0x9838,	// (0x000339cb) cell_ai5_widget_pane_g3_ParamLimits

0x9852,	// (0x000339e5) cell_ai5_widget_pane_g4_ParamLimits

0x9862,	// (0x000339f5) cell_ai5_widget_pane_g5_ParamLimits

0x988a,	// (0x00033a1d) cell_ai5_widget_pane_g8_ParamLimits

0x988a,	// (0x00033a1d) cell_ai5_widget_pane_g8

0x989e,	// (0x00033a31) cell_ai5_widget_pane_g9_ParamLimits

0x989e,	// (0x00033a31) cell_ai5_widget_pane_g9

0x98b2,	// (0x00033a45) cell_ai5_widget_pane_g10_ParamLimits

0x98b2,	// (0x00033a45) cell_ai5_widget_pane_g10

0x2c68,	// (0x0002cdfb) status_icon_pane_g1

0xa09f,	// (0x00034232) bg_popup_sub_pane_cp13

0x2c70,	// (0x0002ce03) popup_keymap_window_t1

0xec5c,	// (0x00038def) control_pane_g6_ParamLimits

0xec5c,	// (0x00038def) control_pane_g6

0xec69,	// (0x00038dfc) control_pane_g7_ParamLimits

0xec69,	// (0x00038dfc) control_pane_g7

0xec76,	// (0x00038e09) control_pane_g8_ParamLimits

0xec76,	// (0x00038e09) control_pane_g8

0x9a31,	// (0x00033bc4) dt_sta_controll_pane_ParamLimits

0x9a3e,	// (0x00033bd1) dt_sta_indi_pane_ParamLimits

0x9a4f,	// (0x00033be2) dt_sta_title_pane_ParamLimits

0xa6ae,	// (0x00034841) aid_size_touch_scroll_bar_cale

0x764a,	// (0x000317dd) popup_discreet_window_ParamLimits

0x764a,	// (0x000317dd) popup_discreet_window

0x76ae,	// (0x00031841) popup_sk_window

0xbabc,	// (0x00035c4f) bg_popup_sub_pane_cp28_ParamLimits

0xbabc,	// (0x00035c4f) bg_popup_sub_pane_cp28

0x2c7e,	// (0x0002ce11) popup_discreet_window_g1_ParamLimits

0x2c7e,	// (0x0002ce11) popup_discreet_window_g1

0x2c9e,	// (0x0002ce31) popup_discreet_window_t1_ParamLimits

0x2c9e,	// (0x0002ce31) popup_discreet_window_t1

0x2cbc,	// (0x0002ce4f) popup_discreet_window_t2_ParamLimits

0x2cbc,	// (0x0002ce4f) popup_discreet_window_t2

0x0002,

0xfe7d,	// (0x0003a010) popup_discreet_window_t_ParamLimits

0xfe7d,	// (0x0003a010) popup_discreet_window_t

0x9adf,	// (0x00033c72) popup_sk_window_g1

0x9ae8,	// (0x00033c7b) popup_sk_window_g2

0x0001,

0xfe84,	// (0x0003a017) popup_sk_window_g

0x9af1,	// (0x00033c84) popup_sk_window_t1

0x9aff,	// (0x00033c92) popup_sk_window_t1_copy1

0x9824,	// (0x000339b7) cell_ai5_widget_pane_g2_ParamLimits

0x998e,	// (0x00033b21) cell_ai5_widget_pane_t9_ParamLimits

0x998e,	// (0x00033b21) cell_ai5_widget_pane_t9

0xa09f,	// (0x00034232) main_fep_fshwr2_pane

0x9b0d,	// (0x00033ca0) aid_fshwr2_btn_pane

0x9b1d,	// (0x00033cb0) aid_fshwr2_syb_pane

0x9b31,	// (0x00033cc4) aid_fshwr2_txt_pane

0x9b41,	// (0x00033cd4) fshwr2_func_candi_pane

0x9b59,	// (0x00033cec) fshwr2_hwr_syb_pane

0x9b6b,	// (0x00033cfe) fshwr2_icf_pane

0xa09f,	// (0x00034232) fshwr2_icf_bg_pane

0x9b93,	// (0x00033d26) fshwr2_icf_pane_t1_ParamLimits

0x9b93,	// (0x00033d26) fshwr2_icf_pane_t1

0xac76,	// (0x00034e09) fshwr2_func_candi_pane_g1

0x9bab,	// (0x00033d3e) fshwr2_func_candi_row_pane_ParamLimits

0x9bab,	// (0x00033d3e) fshwr2_func_candi_row_pane

0x9bce,	// (0x00033d61) cell_fshwr2_syb_pane_ParamLimits

0x9bce,	// (0x00033d61) cell_fshwr2_syb_pane

0x2a4f,	// (0x0002cbe2) fshwr2_hwr_syb_pane_g1_ParamLimits

0x2a4f,	// (0x0002cbe2) fshwr2_hwr_syb_pane_g1

0xa09f,	// (0x00034232) bg_popup_call_pane_cp01

0x9bed,	// (0x00033d80) fshwr2_func_candi_cell_pane_ParamLimits

0x9bed,	// (0x00033d80) fshwr2_func_candi_cell_pane

0xc0e2,	// (0x00036275) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xc0e2,	// (0x00036275) fshwr2_func_candi_cell_bg_pane

0x9c2c,	// (0x00033dbf) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9c2c,	// (0x00033dbf) fshwr2_func_candi_cell_pane_g1

0x9c57,	// (0x00033dea) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9c57,	// (0x00033dea) fshwr2_func_candi_cell_pane_t1

0xa09f,	// (0x00034232) bg_button_pane_cp08

0xb32b,	// (0x000354be) cell_fshwr2_syb_bg_pane

0x9c6a,	// (0x00033dfd) cell_fshwr2_syb_bg_pane_g1

0x9c7e,	// (0x00033e11) cell_fshwr2_syb_bg_pane_t1

0xa769,	// (0x000348fc) main_tmo_pane

0xf0d4,	// (0x00039267) uni_indicator_pane_g1_ParamLimits

0xf0e8,	// (0x0003927b) uni_indicator_pane_g2_ParamLimits

0xf0fd,	// (0x00039290) uni_indicator_pane_g3_ParamLimits

0xc4bb,	// (0x0003664e) uni_indicator_pane_g4_ParamLimits

0xc4bb,	// (0x0003664e) uni_indicator_pane_g4

0xc4cf,	// (0x00036662) uni_indicator_pane_g5_ParamLimits

0xc4cf,	// (0x00036662) uni_indicator_pane_g5

0xc4cf,	// (0x00036662) uni_indicator_pane_g6_ParamLimits

0xc4cf,	// (0x00036662) uni_indicator_pane_g6

0xf8fa,	// (0x00039a8d) uni_indicator_pane_g_ParamLimits

0x0885,	// (0x0002aa18) popup_tmo_note_window_ParamLimits

0x0885,	// (0x0002aa18) popup_tmo_note_window

0xa769,	// (0x000348fc) fshwr2_bg_pane

0x9c48,	// (0x00033ddb) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9c48,	// (0x00033ddb) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe89,	// (0x0003a01c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe89,	// (0x0003a01c) fshwr2_func_candi_cell_pane_g

0xd27c,	// (0x0003740f) bg_popup_window_pane_cp01

0x9c94,	// (0x00033e27) bg_popup_window_pane_g1_cp01

0x2d0e,	// (0x0002cea1) bg_popup_window_pane_cp22_ParamLimits

0x2d0e,	// (0x0002cea1) bg_popup_window_pane_cp22

0x2d1c,	// (0x0002ceaf) listscroll_tmo_link_pane_ParamLimits

0x2d1c,	// (0x0002ceaf) listscroll_tmo_link_pane

0x2d5c,	// (0x0002ceef) popup_tmo_note_window_g1_ParamLimits

0x2d5c,	// (0x0002ceef) popup_tmo_note_window_g1

0x2d69,	// (0x0002cefc) tmo_note_info_pane_ParamLimits

0x2d69,	// (0x0002cefc) tmo_note_info_pane

0x9c9d,	// (0x00033e30) list_tmo_note_info_pane_g1_ParamLimits

0x9c9d,	// (0x00033e30) list_tmo_note_info_pane_g1

0x2d83,	// (0x0002cf16) list_tmo_note_info_pane_g2_ParamLimits

0x2d83,	// (0x0002cf16) list_tmo_note_info_pane_g2

0x0001,

0xfe8e,	// (0x0003a021) list_tmo_note_info_pane_g_ParamLimits

0xfe8e,	// (0x0003a021) list_tmo_note_info_pane_g

0x2d9f,	// (0x0002cf32) list_tmo_note_info_text_pane_ParamLimits

0x2d9f,	// (0x0002cf32) list_tmo_note_info_text_pane

0x2de1,	// (0x0002cf74) list_tmo_link_pane

0x2dee,	// (0x0002cf81) scroll_pane_cp20

0x2dfb,	// (0x0002cf8e) list_single_tmo_link_pane_ParamLimits

0x2dfb,	// (0x0002cf8e) list_single_tmo_link_pane

0x2e0b,	// (0x0002cf9e) list_single_tmo_link_pane_t1

0x2e19,	// (0x0002cfac) list_tmo_note_info_text_pane_t1_ParamLimits

0x2e19,	// (0x0002cfac) list_tmo_note_info_text_pane_t1

0xa81c,	// (0x000349af) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa81c,	// (0x000349af) aid_size_touch_scroll_bar_cp01

0x6c52,	// (0x00030de5) aid_size_touch_slider_marker

0x769a,	// (0x0003182d) popup_settings_window_ParamLimits

0x769a,	// (0x0003182d) popup_settings_window

0x6ddf,	// (0x00030f72) popup_candi_list_indi_window

0xb34d,	// (0x000354e0) aid_touch_navi_pane_ParamLimits

0x8c93,	// (0x00032e26) rs_clock_indi_pane

0x8c9c,	// (0x00032e2f) sctrl_sk_bottom_pane_ParamLimits

0x8cad,	// (0x00032e40) sctrl_sk_top_pane_ParamLimits

0x8d91,	// (0x00032f24) popup_fep_tooltip_window

0x2ac4,	// (0x0002cc57) aid_size_cell_widget_grid_ParamLimits

0x9810,	// (0x000339a3) cell_ai5_widget_pane_g1_ParamLimits

0x9810,	// (0x000339a3) cell_ai5_widget_pane_g1

0x9872,	// (0x00033a05) cell_ai5_widget_pane_g6_ParamLimits

0x987e,	// (0x00033a11) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe02,	// (0x00039f95) cell_ai5_widget_pane_g_ParamLimits

0xfe02,	// (0x00039f95) cell_ai5_widget_pane_g

0x99bd,	// (0x00033b50) cell_ai5_widget_pane_t10_ParamLimits

0x99bd,	// (0x00033b50) cell_ai5_widget_pane_t10

0x99ff,	// (0x00033b92) grid_ai5_widget_pane_ParamLimits

0x2ba8,	// (0x0002cd3b) cell_contacts_ai5_widget_pane_ParamLimits

0x2ba8,	// (0x0002cd3b) cell_contacts_ai5_widget_pane

0x2cd1,	// (0x0002ce64) popup_discreet_window_t3_ParamLimits

0x2cd1,	// (0x0002ce64) popup_discreet_window_t3

0x9b81,	// (0x00033d14) popup_fshwr2_char_preview_window_ParamLimits

0x9b81,	// (0x00033d14) popup_fshwr2_char_preview_window

0x9cb4,	// (0x00033e47) tmo_note_info_pane_t1

0x9cc9,	// (0x00033e5c) tmo_note_info_pane_t2

0x9cde,	// (0x00033e71) tmo_note_info_pane_t3

0x2dbd,	// (0x0002cf50) tmo_note_info_pane_t4

0x2dcf,	// (0x0002cf62) tmo_note_info_pane_t5

0x0004,

0xfe93,	// (0x0003a026) tmo_note_info_pane_t

0x2de1,	// (0x0002cf74) list_tmo_link_pane_ParamLimits

0x2dee,	// (0x0002cf81) scroll_pane_cp20_ParamLimits

0xa09f,	// (0x00034232) bg_popup_fep_char_preview_window_cp01

0x2e32,	// (0x0002cfc5) popup_fshwr2_char_preview_window_t1

0x2e40,	// (0x0002cfd3) popup_candi_list_indi_window_g1

0x2e49,	// (0x0002cfdc) bg_cell_contacts_ai5_widget_pane

0x2e55,	// (0x0002cfe8) cell_contacts_ai5_widget_pane_g1

0x2e6a,	// (0x0002cffd) cell_contacts_ai5_widget_pane_g2

0x2e76,	// (0x0002d009) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9e,	// (0x0003a031) cell_contacts_ai5_widget_pane_g

0x2e82,	// (0x0002d015) cell_contacts_ai5_widget_pane_t1

0xa769,	// (0x000348fc) highlight_cell_shortcut_ai5_widget_pane_cp01

0x2ef7,	// (0x0002d08a) settings_container_pane

0xb10f,	// (0x000352a2) listscroll_set_pane_copy1

0xcbc8,	// (0x00036d5b) scroll_pane_cp121_copy1

0x2f03,	// (0x0002d096) set_content_pane_copy1

0x2f0b,	// (0x0002d09e) aid_height_set_list_copy1_ParamLimits

0x2f0b,	// (0x0002d09e) aid_height_set_list_copy1

0xc674,	// (0x00036807) aid_size_parent_copy1_ParamLimits

0xc674,	// (0x00036807) aid_size_parent_copy1

0x2f17,	// (0x0002d0aa) button_value_adjust_pane_cp6_copy1_ParamLimits

0x2f17,	// (0x0002d0aa) button_value_adjust_pane_cp6_copy1

0xb32b,	// (0x000354be) list_highlight_pane_cp2_copy1_ParamLimits

0xb32b,	// (0x000354be) list_highlight_pane_cp2_copy1

0x2f2b,	// (0x0002d0be) list_set_pane_copy1_ParamLimits

0x2f2b,	// (0x0002d0be) list_set_pane_copy1

0x2e94,	// (0x0002d027) main_pane_set_t1_copy1_ParamLimits

0x2e94,	// (0x0002d027) main_pane_set_t1_copy1

0x2ece,	// (0x0002d061) main_pane_set_t2_copy1_ParamLimits

0x2ece,	// (0x0002d061) main_pane_set_t2_copy1

0x2fb9,	// (0x0002d14c) main_pane_set_t3_copy1

0x2fc7,	// (0x0002d15a) main_pane_set_t4_copy1

0x2eeb,	// (0x0002d07e) set_content_pane_g1_copy1_ParamLimits

0x2eeb,	// (0x0002d07e) set_content_pane_g1_copy1

0x2fd5,	// (0x0002d168) setting_code_pane_copy1

0x2fdd,	// (0x0002d170) setting_slider_graphic_pane_copy1

0x2fdd,	// (0x0002d170) setting_slider_pane_copy1

0x2fdd,	// (0x0002d170) setting_text_pane_copy1

0x2fdd,	// (0x0002d170) setting_volume_pane_copy1

0x2fe5,	// (0x0002d178) settings_code_pane_cp2_copy1

0x2fed,	// (0x0002d180) settings_code_pane_cp_copy1_ParamLimits

0x2fed,	// (0x0002d180) settings_code_pane_cp_copy1

0x9cf3,	// (0x00033e86) volume_set_pane_copy1

0x3001,	// (0x0002d194) volume_set_pane_g10_copy1

0x3009,	// (0x0002d19c) volume_set_pane_g1_copy1

0x3011,	// (0x0002d1a4) volume_set_pane_g2_copy1

0x3019,	// (0x0002d1ac) volume_set_pane_g3_copy1

0x3021,	// (0x0002d1b4) volume_set_pane_g4_copy1

0x3029,	// (0x0002d1bc) volume_set_pane_g5_copy1

0x3031,	// (0x0002d1c4) volume_set_pane_g6_copy1

0x3039,	// (0x0002d1cc) volume_set_pane_g7_copy1

0x3041,	// (0x0002d1d4) volume_set_pane_g8_copy1

0x3049,	// (0x0002d1dc) volume_set_pane_g9_copy1

0xa179,	// (0x0003430c) bg_set_opt_pane_cp_copy1_ParamLimits

0xa179,	// (0x0003430c) bg_set_opt_pane_cp_copy1

0x9cfb,	// (0x00033e8e) setting_slider_pane_t1_copy1_ParamLimits

0x9cfb,	// (0x00033e8e) setting_slider_pane_t1_copy1

0x9d12,	// (0x00033ea5) setting_slider_pane_t2_copy1_ParamLimits

0x9d12,	// (0x00033ea5) setting_slider_pane_t2_copy1

0x9d2b,	// (0x00033ebe) setting_slider_pane_t3_copy1_ParamLimits

0x9d2b,	// (0x00033ebe) setting_slider_pane_t3_copy1

0x77ca,	// (0x0003195d) slider_set_pane_copy1_ParamLimits

0x77ca,	// (0x0003195d) slider_set_pane_copy1

0xa7b8,	// (0x0003494b) set_opt_bg_pane_g1_copy2

0xa7c0,	// (0x00034953) set_opt_bg_pane_g2_copy2

0x3051,	// (0x0002d1e4) set_opt_bg_pane_g3_copy2

0xa7d0,	// (0x00034963) set_opt_bg_pane_g4_copy2

0xa7d8,	// (0x0003496b) set_opt_bg_pane_g5_copy2

0xa7e0,	// (0x00034973) set_opt_bg_pane_g6_copy2

0x3059,	// (0x0002d1ec) set_opt_bg_pane_g7_copy2

0x3061,	// (0x0002d1f4) set_opt_bg_pane_g8_copy2

0x3069,	// (0x0002d1fc) set_opt_bg_pane_g9_copy2

0x85b3,	// (0x00032746) aid_size_touch_slider_mark_copy1_ParamLimits

0x85b3,	// (0x00032746) aid_size_touch_slider_mark_copy1

0xc686,	// (0x00036819) slider_set_pane_g1_copy1

0xc68f,	// (0x00036822) slider_set_pane_g2_copy1

0x85d3,	// (0x00032766) slider_set_pane_g3_copy1_ParamLimits

0x85d3,	// (0x00032766) slider_set_pane_g3_copy1

0x85e7,	// (0x0003277a) slider_set_pane_g4_copy1_ParamLimits

0x85e7,	// (0x0003277a) slider_set_pane_g4_copy1

0x85ff,	// (0x00032792) slider_set_pane_g5_copy1_ParamLimits

0x85ff,	// (0x00032792) slider_set_pane_g5_copy1

0x85d3,	// (0x00032766) slider_set_pane_g6_copy1_ParamLimits

0x85d3,	// (0x00032766) slider_set_pane_g6_copy1

0x9d42,	// (0x00033ed5) slider_set_pane_g7_copy1_ParamLimits

0x9d42,	// (0x00033ed5) slider_set_pane_g7_copy1

0xa12b,	// (0x000342be) bg_set_opt_pane_cp2_copy1

0xa18f,	// (0x00034322) setting_slider_graphic_pane_g1_copy1

0x9d58,	// (0x00033eeb) setting_slider_graphic_pane_t1_copy1

0x9d67,	// (0x00033efa) setting_slider_graphic_pane_t2_copy1

0x9d76,	// (0x00033f09) slider_set_pane_cp_copy1

0x3079,	// (0x0002d20c) input_focus_pane_cp1_copy1

0x3082,	// (0x0002d215) list_set_text_pane_copy1

0x308a,	// (0x0002d21d) setting_text_pane_g1_copy1

0x74e1,	// (0x00031674) set_text_pane_t1_copy1

0x3079,	// (0x0002d20c) input_focus_pane_cp2_copy1

0x308a,	// (0x0002d21d) setting_code_pane_g1_copy1

0x3093,	// (0x0002d226) setting_code_pane_t1_copy1

0x30a1,	// (0x0002d234) list_set_graphic_pane_copy1

0xa12b,	// (0x000342be) bg_set_opt_pane_cp4_copy1

0xae6b,	// (0x00034ffe) list_set_graphic_pane_g1_copy1_ParamLimits

0xae6b,	// (0x00034ffe) list_set_graphic_pane_g1_copy1

0x30b6,	// (0x0002d249) list_set_graphic_pane_g2_copy1

0xae83,	// (0x00035016) list_set_graphic_pane_t1_copy1_ParamLimits

0xae83,	// (0x00035016) list_set_graphic_pane_t1_copy1

0xd27c,	// (0x0003740f) rs_clock_indi_pane_g1

0x30be,	// (0x0002d251) rs_clock_indi_pane_t1

0x30cc,	// (0x0002d25f) rs_indi_pane

0x30d4,	// (0x0002d267) rs_indi_pane_g1

0x30dd,	// (0x0002d270) rs_indi_pane_g2

0x2e40,	// (0x0002cfd3) rs_indi_pane_g3

0x0002,

0xfea5,	// (0x0003a038) rs_indi_pane_g

0xb10f,	// (0x000352a2) bg_popup_preview_window_pane_cp03

0x30e6,	// (0x0002d279) popup_fep_tooltip_window_t1

0xde4b,	// (0x00037fde) popup_note2_window_g2_ParamLimits

0xde4b,	// (0x00037fde) popup_note2_window_g2

0x0001,

0xfc39,	// (0x00039dcc) popup_note2_window_g_ParamLimits

0xfc39,	// (0x00039dcc) popup_note2_window_g

0xe2c6,	// (0x00038459) bg_popup_sub_pane_cp11_ParamLimits

0xe2d3,	// (0x00038466) cell_ai3_links_pane_g1_ParamLimits

0xe2ea,	// (0x0003847d) cell_ai3_links_pane_t1

0x74e1,	// (0x00031674) set_text_pane_t1_copy1_ParamLimits

0xb02f,	// (0x000351c2) cell_graphic_popup_pane_cp2_ParamLimits

0xb02f,	// (0x000351c2) cell_graphic_popup_pane_cp2

0x30f4,	// (0x0002d287) cell_graphic_popup_pane_g1_cp2

0xa55d,	// (0x000346f0) cell_graphic_popup_pane_g2_cp2

0x30fc,	// (0x0002d28f) cell_graphic_popup_pane_g3_cp2

0x3104,	// (0x0002d297) cell_graphic_popup_pane_t2_cp2

0xa56e,	// (0x00034701) grid_highlight_pane_cp3_cp2

0xaaaf,	// (0x00034c42) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xa769,	// (0x000348fc) main_tmo_pane_ParamLimits

0x087d,	// (0x0002aa10) popup_tmo_big_image_note_window

0x2b03,	// (0x0002cc96) cell_ai5_widget_list_pane

0x9807,	// (0x0003399a) cell_ai5_widget_lrg_icon_pane

0x9cb4,	// (0x00033e47) tmo_note_info_pane_t1_ParamLimits

0x9cc9,	// (0x00033e5c) tmo_note_info_pane_t2_ParamLimits

0x9cde,	// (0x00033e71) tmo_note_info_pane_t3_ParamLimits

0x2dbd,	// (0x0002cf50) tmo_note_info_pane_t4_ParamLimits

0x2dcf,	// (0x0002cf62) tmo_note_info_pane_t5_ParamLimits

0xfe93,	// (0x0003a026) tmo_note_info_pane_t_ParamLimits

0x2ef7,	// (0x0002d08a) settings_container_pane_ParamLimits

0x3071,	// (0x0002d204) indicator_popup_pane_cp5

0x3071,	// (0x0002d204) indicator_popup_pane_cp6

0x30a1,	// (0x0002d234) list_set_graphic_pane_copy1_ParamLimits

0xa09f,	// (0x00034232) bg_popup_window_pane_cp23

0x3112,	// (0x0002d2a5) popup_tmo_big_image_note_window_g1

0x311b,	// (0x0002d2ae) popup_tmo_big_image_note_window_t1

0x3129,	// (0x0002d2bc) popup_tmo_big_image_note_window_t2

0x3137,	// (0x0002d2ca) popup_tmo_big_image_note_window_t3

0x0002,

0xfeac,	// (0x0003a03f) popup_tmo_big_image_note_window_t

0xd27c,	// (0x0003740f) cell_ai5_widget_lrg_icon_pane_g1

0x3145,	// (0x0002d2d8) cell_ai5_widget_lrg_icon_pane_t1

0x9d7e,	// (0x00033f11) cell_ai5_widget_list_row_pane_ParamLimits

0x9d7e,	// (0x00033f11) cell_ai5_widget_list_row_pane

0x9d95,	// (0x00033f28) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x9d95,	// (0x00033f28) cell_ai5_widget_list_row_pane_g1

0x9da2,	// (0x00033f35) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x9da2,	// (0x00033f35) cell_ai5_widget_list_row_pane_t1

0x9dd0,	// (0x00033f63) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x9dd0,	// (0x00033f63) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb3,	// (0x0003a046) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb3,	// (0x0003a046) cell_ai5_widget_list_row_pane_t

0xa09f,	// (0x00034232) main_fep_vtchi_ss_pane

0x3160,	// (0x0002d2f3) popup_fep_char_pre_window

0x3168,	// (0x0002d2fb) popup_fep_ituss_window

0x9e28,	// (0x00033fbb) popup_fep_vkbss_window

0x31a3,	// (0x0002d336) grid_vkbss_keypad_pane_ParamLimits

0x31a3,	// (0x0002d336) grid_vkbss_keypad_pane

0x31b3,	// (0x0002d346) ituss_keypad_pane

0x9e43,	// (0x00033fd6) aid_vkbss_key_offset_ParamLimits

0x9e43,	// (0x00033fd6) aid_vkbss_key_offset

0x9e4f,	// (0x00033fe2) cell_vkbss_key_pane_ParamLimits

0x9e4f,	// (0x00033fe2) cell_vkbss_key_pane

0x31bf,	// (0x0002d352) bg_cell_vkbss_key_g1_ParamLimits

0x31bf,	// (0x0002d352) bg_cell_vkbss_key_g1

0x31cb,	// (0x0002d35e) cell_vkbss_key_3p_pane_ParamLimits

0x31cb,	// (0x0002d35e) cell_vkbss_key_3p_pane

0x3201,	// (0x0002d394) cell_vkbss_key_g1_ParamLimits

0x3201,	// (0x0002d394) cell_vkbss_key_g1

0x3237,	// (0x0002d3ca) cell_vkbss_key_t1_ParamLimits

0x3237,	// (0x0002d3ca) cell_vkbss_key_t1

0x9e83,	// (0x00034016) cell_ituss_key_pane_ParamLimits

0x9e83,	// (0x00034016) cell_ituss_key_pane

0x32a7,	// (0x0002d43a) bg_cell_ituss_key_g1_ParamLimits

0x32a7,	// (0x0002d43a) bg_cell_ituss_key_g1

0x32b3,	// (0x0002d446) cell_ituss_key_pane_g1_ParamLimits

0x32b3,	// (0x0002d446) cell_ituss_key_pane_g1

0x9e94,	// (0x00034027) cell_ituss_key_pane_g2_ParamLimits

0x9e94,	// (0x00034027) cell_ituss_key_pane_g2

0x0005,

0xfeba,	// (0x0003a04d) cell_ituss_key_pane_g_ParamLimits

0xfeba,	// (0x0003a04d) cell_ituss_key_pane_g

0x9f18,	// (0x000340ab) cell_ituss_key_t1_ParamLimits

0x9f18,	// (0x000340ab) cell_ituss_key_t1

0x9f4e,	// (0x000340e1) cell_ituss_key_t2_ParamLimits

0x9f4e,	// (0x000340e1) cell_ituss_key_t2

0x9f80,	// (0x00034113) cell_ituss_key_t3_ParamLimits

0x9f80,	// (0x00034113) cell_ituss_key_t3

0x9fb1,	// (0x00034144) cell_ituss_key_t4_ParamLimits

0x9fb1,	// (0x00034144) cell_ituss_key_t4

0x0004,

0xfec7,	// (0x0003a05a) cell_ituss_key_t_ParamLimits

0xfec7,	// (0x0003a05a) cell_ituss_key_t

0x32e9,	// (0x0002d47c) cell_vkbss_key_3p_pane_g1

0x32e1,	// (0x0002d474) cell_vkbss_key_3p_pane_g2

0x32d9,	// (0x0002d46c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed2,	// (0x0003a065) cell_vkbss_key_3p_pane_g

0xb10f,	// (0x000352a2) bg_popup_fep_char_preview_window_cp02

0x32f1,	// (0x0002d484) popup_fep_char_pre_window_t1

0x97f4,	// (0x00033987) main_ai5_sk_pane

0x2e49,	// (0x0002cfdc) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x2e55,	// (0x0002cfe8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x2e6a,	// (0x0002cffd) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x2e76,	// (0x0002d009) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9e,	// (0x0003a031) cell_contacts_ai5_widget_pane_g_ParamLimits

0x2e82,	// (0x0002d015) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xa769,	// (0x000348fc) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x9ff4,	// (0x00034187) main_ai5_sk_pane_g1

0xb906,	// (0x00035a99) popup_query_code_window_g1

0x9e13,	// (0x00033fa6) popup_fep_vkb_icf_pane

0x317a,	// (0x0002d30d) popup_fep_vtchi_icf_pane

0x32ff,	// (0x0002d492) bg_icf_pane

0x32ff,	// (0x0002d492) list_vkb_icf_pane

0x330b,	// (0x0002d49e) bg_icf_pane_cp01

0x331e,	// (0x0002d4b1) vtchi_icf_list_pane

0xa03d,	// (0x000341d0) list_vkb_icf_pane_t1_ParamLimits

0xa03d,	// (0x000341d0) list_vkb_icf_pane_t1

0x332e,	// (0x0002d4c1) vtchi_icf_list_pane_t1_ParamLimits

0x332e,	// (0x0002d4c1) vtchi_icf_list_pane_t1

0x3168,	// (0x0002d2fb) popup_fep_ituss_window_ParamLimits

0x317a,	// (0x0002d30d) popup_fep_vtchi_icf_pane_ParamLimits

0x31b3,	// (0x0002d346) ituss_keypad_pane_ParamLimits

0x9e3b,	// (0x00033fce) ituss_sks_pane

0x32ff,	// (0x0002d492) bg_icf_pane_ParamLimits

0x9df8,	// (0x00033f8b) icf_edit_indi_pane_ParamLimits

0x9df8,	// (0x00033f8b) icf_edit_indi_pane

0x32ff,	// (0x0002d492) list_vkb_icf_pane_ParamLimits

0x330b,	// (0x0002d49e) bg_icf_pane_cp01_ParamLimits

0x3153,	// (0x0002d2e6) icf_edit_indi_pane_cp01_ParamLimits

0x3153,	// (0x0002d2e6) icf_edit_indi_pane_cp01

0x3326,	// (0x0002d4b9) vtchi_query_pane

0x2a4f,	// (0x0002cbe2) icf_edit_indi_pane_g1_ParamLimits

0x2a4f,	// (0x0002cbe2) icf_edit_indi_pane_g1

0xa067,	// (0x000341fa) icf_edit_indi_pane_g2_ParamLimits

0xa067,	// (0x000341fa) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x0003a090) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x0003a090) icf_edit_indi_pane_g

0xa079,	// (0x0003420c) icf_edit_indi_pane_t1

0x3346,	// (0x0002d4d9) bg_input_focus_pane_cp042

0x334f,	// (0x0002d4e2) vtchi_button_pane

0x3358,	// (0x0002d4eb) vtchi_query_pane_t1

0x3366,	// (0x0002d4f9) vtchi_query_pane_t2

0x3374,	// (0x0002d507) vtchi_query_pane_t3

0x0002,

0xfeec,	// (0x0003a07f) vtchi_query_pane_t

0xa09f,	// (0x00034232) bg_button_pane_cp13

0x3382,	// (0x0002d515) vtchi_button_pane_g1

0xa055,	// (0x000341e8) ituss_sks_pane_g1

0xa05e,	// (0x000341f1) ituss_sks_pane_g2

0x0001,

0xfef3,	// (0x0003a086) ituss_sks_pane_g

0x3398,	// (0x0002d52b) ituss_sks_pane_t1

0x338a,	// (0x0002d51d) ituss_sks_pane_t2

0x0001,

0xfef8,	// (0x0003a08b) ituss_sks_pane_t

0xcea9,	// (0x0003703c) indicator_nsta_pane_cp_g1

0xceb2,	// (0x00037045) indicator_nsta_pane_cp_g2

0xceba,	// (0x0003704d) indicator_nsta_pane_cp_g3

0xcec2,	// (0x00037055) indicator_nsta_pane_cp_g4

0xceca,	// (0x0003705d) indicator_nsta_pane_cp_g5

0xced2,	// (0x00037065) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x00039c16) indicator_nsta_pane_cp_g

0x94b1,	// (0x00033644) cell_graphic2_pane_t2_ParamLimits

0x94b1,	// (0x00033644) cell_graphic2_pane_t2

0x0001,

0xfd89,	// (0x00039f1c) cell_graphic2_pane_t_ParamLimits

0xfd89,	// (0x00039f1c) cell_graphic2_pane_t

0x94dd,	// (0x00033670) cell_graphic2_control_pane_t1

0xeaf5,	// (0x00038c88) signal_pane_g3_ParamLimits

0xeaf5,	// (0x00038c88) signal_pane_g3

0xeb06,	// (0x00038c99) signal_pane_g4_ParamLimits

0xeb06,	// (0x00038c99) signal_pane_g4

0x9de2,	// (0x00033f75) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x9de2,	// (0x00033f75) cell_ai5_widget_list_row_pane_t3

0x32c7,	// (0x0002d45a) cell_ituss_key_pane_t1_ParamLimits

0x32c7,	// (0x0002d45a) cell_ituss_key_pane_t1

0xb5d4,	// (0x00035767) form_field_data_wide_pane_vc_t2_ParamLimits

0xb5d4,	// (0x00035767) form_field_data_wide_pane_vc_t2

0xb5e6,	// (0x00035779) form_field_data_wide_pane_vc_t3_ParamLimits

0xb5e6,	// (0x00035779) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e2,	// (0x00039975) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e2,	// (0x00039975) form_field_data_wide_pane_vc_t

0xcc0d,	// (0x00036da0) form_field_slider_wide_pane_vc_t3_ParamLimits

0xcc0d,	// (0x00036da0) form_field_slider_wide_pane_vc_t3

0xcccb,	// (0x00036e5e) form_field_popup_wide_pane_vc_t2_ParamLimits

0xcccb,	// (0x00036e5e) form_field_popup_wide_pane_vc_t2

0xcce0,	// (0x00036e73) form_field_popup_wide_pane_vc_t3_ParamLimits

0xcce0,	// (0x00036e73) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x00039c05) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x00039c05) form_field_popup_wide_pane_vc_t

0x9b0d,	// (0x00033ca0) aid_fshwr2_btn_pane_ParamLimits

0x9b1d,	// (0x00033cb0) aid_fshwr2_syb_pane_ParamLimits

0x9b31,	// (0x00033cc4) aid_fshwr2_txt_pane_ParamLimits

0xa769,	// (0x000348fc) fshwr2_bg_pane_ParamLimits

0x9b41,	// (0x00033cd4) fshwr2_func_candi_pane_ParamLimits

0x9b59,	// (0x00033cec) fshwr2_hwr_syb_pane_ParamLimits

0x9b6b,	// (0x00033cfe) fshwr2_icf_pane_ParamLimits

0x71c3,	// (0x00031356) list_double_graphic_pane_vc_g4_ParamLimits

0x71c3,	// (0x00031356) list_double_graphic_pane_vc_g4

0x9eb4,	// (0x00034047) cell_ituss_key_pane_g3_ParamLimits

0x9eb4,	// (0x00034047) cell_ituss_key_pane_g3

0x9fe2,	// (0x00034175) cell_ituss_key_t5_ParamLimits

0x9fe2,	// (0x00034175) cell_ituss_key_t5

0x9e28,	// (0x00033fbb) popup_fep_vkbss_window_ParamLimits

0x97fe,	// (0x00033991) aid_cell_ai5_quarter

0xa079,	// (0x0003420c) icf_edit_indi_pane_t1_ParamLimits

0xa36a,	// (0x000344fd) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xa36a,	// (0x000344fd) aid_tch_indicator_popup_pane_cp2

0xa37d,	// (0x00034510) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xa37d,	// (0x00034510) aid_tch_query_popup_data_pane_cp2

0xb8ae,	// (0x00035a41) aid_tch_query_popup_pane_ParamLimits

0xb8ae,	// (0x00035a41) aid_tch_query_popup_pane

0xb8ae,	// (0x00035a41) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xb8ae,	// (0x00035a41) aid_tch_query_popup_data_pane_cp1

0xb32b,	// (0x000354be) cell_fshwr2_syb_bg_pane_ParamLimits

0x9c6a,	// (0x00033dfd) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x9c7e,	// (0x00033e11) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0x9e13,	// (0x00033fa6) popup_fep_vkb_icf_pane_ParamLimits

0x95cb,	// (0x0003375e) bg_popup_fep_char_preview_window_g10

0x98c6,	// (0x00033a59) cell_ai5_widget_pane_g11_ParamLimits

0x98c6,	// (0x00033a59) cell_ai5_widget_pane_g11

0x98d2,	// (0x00033a65) cell_ai5_widget_pane_g12_ParamLimits

0x98d2,	// (0x00033a65) cell_ai5_widget_pane_g12

0x98de,	// (0x00033a71) cell_ai5_widget_pane_g13_ParamLimits

0x98de,	// (0x00033a71) cell_ai5_widget_pane_g13

0x99db,	// (0x00033b6e) cell_ai5_widget_pane_t11_ParamLimits

0x99db,	// (0x00033b6e) cell_ai5_widget_pane_t11

0x99ed,	// (0x00033b80) cell_ai5_widget_pane_t12_ParamLimits

0x99ed,	// (0x00033b80) cell_ai5_widget_pane_t12

0x9ec0,	// (0x00034053) cell_ituss_key_pane_g4_ParamLimits

0x9ec0,	// (0x00034053) cell_ituss_key_pane_g4

0x9edc,	// (0x0003406f) cell_ituss_key_pane_g5_ParamLimits

0x9edc,	// (0x0003406f) cell_ituss_key_pane_g5

0x9ef8,	// (0x0003408b) cell_ituss_key_pane_g6_ParamLimits

0x9ef8,	// (0x0003408b) cell_ituss_key_pane_g6

0xb4f4,	// (0x00035687) bg_icf_pane_g1

0x9ffd,	// (0x00034190) bg_icf_pane_g2

0xa005,	// (0x00034198) bg_icf_pane_g3

0xa00d,	// (0x000341a0) bg_icf_pane_g4

0xa015,	// (0x000341a8) bg_icf_pane_g5

0xa01d,	// (0x000341b0) bg_icf_pane_g6

0xa025,	// (0x000341b8) bg_icf_pane_g7

0xa02d,	// (0x000341c0) bg_icf_pane_g8

0xa035,	// (0x000341c8) bg_icf_pane_g9

0x0008,

0xfed9,	// (0x0003a06c) bg_icf_pane_g

0x3190,	// (0x0002d323) popup_hyb_candi_window_ParamLimits

0x3190,	// (0x0002d323) popup_hyb_candi_window

0xb574,	// (0x00035707) bg_popup_sub_pane_cp01_ParamLimits

0xb574,	// (0x00035707) bg_popup_sub_pane_cp01

0x33a6,	// (0x0002d539) entry_hyb_candi_pane_ParamLimits

0x33a6,	// (0x0002d539) entry_hyb_candi_pane

0x33b5,	// (0x0002d548) grid_hyb_candi_pane_ParamLimits

0x33b5,	// (0x0002d548) grid_hyb_candi_pane

0x33ca,	// (0x0002d55d) grid_hyb_phrase_pane_ParamLimits

0x33ca,	// (0x0002d55d) grid_hyb_phrase_pane

0x33d9,	// (0x0002d56c) cell_hyb_candi_pane_ParamLimits

0x33d9,	// (0x0002d56c) cell_hyb_candi_pane

0x33f1,	// (0x0002d584) cell_hyb_candi_scroll_pane

0xac76,	// (0x00034e09) cell_hyb_candi_pane_g1

0x33fa,	// (0x0002d58d) cell_hyb_candi_pane_t1

0x3408,	// (0x0002d59b) cell_hyb_phrase_pane

0xac76,	// (0x00034e09) cell_hyb_phrase_pane_g1

0x3411,	// (0x0002d5a4) cell_hyb_phrase_pane_t1

0x341f,	// (0x0002d5b2) entry_hyb_candi_pane_t1

0xb10f,	// (0x000352a2) input_focus_pane_cp06

0x342d,	// (0x0002d5c0) cell_hyb_candi_scroll_pane_g1

0x3435,	// (0x0002d5c8) cell_hyb_candi_scroll_pane_g1_aid

0x343d,	// (0x0002d5d0) cell_hyb_candi_scroll_pane_g2

0x3445,	// (0x0002d5d8) cell_hyb_candi_scroll_pane_g2_aid

0x344d,	// (0x0002d5e0) cell_hyb_candi_scroll_pane_g3

0x3455,	// (0x0002d5e8) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Large

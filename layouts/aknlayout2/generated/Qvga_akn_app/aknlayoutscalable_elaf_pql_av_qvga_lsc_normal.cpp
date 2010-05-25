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

#include "aknlayoutscalable_elaf_pql_av_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x00000000 };

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
0xac1a,	// (0x0000ac1a) Screen

0xac24,	// (0x0000ac24) application_window_ParamLimits

0xac24,	// (0x0000ac24) application_window

0x002a,	// (0x0000002a) screen_g1

0xac5a,	// (0x0000ac5a) area_bottom_pane_ParamLimits

0xac5a,	// (0x0000ac5a) area_bottom_pane

0x0138,	// (0x00000138) area_top_pane_ParamLimits

0x0138,	// (0x00000138) area_top_pane

0x01c2,	// (0x000001c2) main_pane_ParamLimits

0x01c2,	// (0x000001c2) main_pane

0x027d,	// (0x0000027d) misc_graphics

0xc178,	// (0x0000c178) battery_pane_ParamLimits

0xc178,	// (0x0000c178) battery_pane

0x3d48,	// (0x00003d48) bg_status_flat_pane_g8

0x3d50,	// (0x00003d50) bg_status_flat_pane_g9

0x2f6b,	// (0x00002f6b) context_pane_ParamLimits

0x2f6b,	// (0x00002f6b) context_pane

0xc2e1,	// (0x0000c2e1) navi_pane_ParamLimits

0xc2e1,	// (0x0000c2e1) navi_pane

0xc357,	// (0x0000c357) signal_pane_ParamLimits

0xc357,	// (0x0000c357) signal_pane

0x0008,

0xa583,	// (0x0000a583) bg_status_flat_pane_g

0xc3e3,	// (0x0000c3e3) status_pane_g1_ParamLimits

0xc3e3,	// (0x0000c3e3) status_pane_g1

0xc3f9,	// (0x0000c3f9) status_pane_g2_ParamLimits

0xc3f9,	// (0x0000c3f9) status_pane_g2

0x3188,	// (0x00003188) status_pane_g3_ParamLimits

0x3188,	// (0x00003188) status_pane_g3

0x0004,

0xe609,	// (0x0000e609) status_pane_g_ParamLimits

0xe609,	// (0x0000e609) status_pane_g

0xc405,	// (0x0000c405) title_pane_ParamLimits

0xc405,	// (0x0000c405) title_pane

0xc460,	// (0x0000c460) uni_indicator_pane_ParamLimits

0xc460,	// (0x0000c460) uni_indicator_pane

0x28fc,	// (0x000028fc) bg_list_pane_ParamLimits

0x28fc,	// (0x000028fc) bg_list_pane

0xbb45,	// (0x0000bb45) find_pane

0xbb4d,	// (0x0000bb4d) listscroll_app_pane_ParamLimits

0xbb4d,	// (0x0000bb4d) listscroll_app_pane

0x2930,	// (0x00002930) listscroll_form_pane

0xbb5d,	// (0x0000bb5d) listscroll_gen_pane_ParamLimits

0xbb5d,	// (0x0000bb5d) listscroll_gen_pane

0x294c,	// (0x0000294c) listscroll_set_pane

0x4aaf,	// (0x00004aaf) main_idle_act_pane

0x23ec,	// (0x000023ec) main_idle_trad_pane

0x23ec,	// (0x000023ec) main_list_empty_pane

0x2966,	// (0x00002966) main_midp_pane

0x2972,	// (0x00002972) main_pane_g1_ParamLimits

0x2972,	// (0x00002972) main_pane_g1

0xbb71,	// (0x0000bb71) popup_ai_message_window_ParamLimits

0xbb71,	// (0x0000bb71) popup_ai_message_window

0xbbf6,	// (0x0000bbf6) popup_fep_china_uni_window_ParamLimits

0xbbf6,	// (0x0000bbf6) popup_fep_china_uni_window

0x2a5c,	// (0x00002a5c) popup_fep_japan_candidate_window_ParamLimits

0x2a5c,	// (0x00002a5c) popup_fep_japan_candidate_window

0x2a7a,	// (0x00002a7a) popup_fep_japan_predictive_window_ParamLimits

0x2a7a,	// (0x00002a7a) popup_fep_japan_predictive_window

0xbc34,	// (0x0000bc34) popup_find_window

0xbc4d,	// (0x0000bc4d) popup_grid_graphic_window_ParamLimits

0xbc4d,	// (0x0000bc4d) popup_grid_graphic_window

0x2ad9,	// (0x00002ad9) popup_large_graphic_colour_window

0xbcc9,	// (0x0000bcc9) popup_menu_window_ParamLimits

0xbcc9,	// (0x0000bcc9) popup_menu_window

0xbe27,	// (0x0000be27) popup_note_image_window

0xbdef,	// (0x0000bdef) popup_note_wait_window_ParamLimits

0xbdef,	// (0x0000bdef) popup_note_wait_window

0xbe3d,	// (0x0000be3d) popup_note_window_ParamLimits

0xbe3d,	// (0x0000be3d) popup_note_window

0xbed1,	// (0x0000bed1) popup_query_code_window_ParamLimits

0xbed1,	// (0x0000bed1) popup_query_code_window

0x2cab,	// (0x00002cab) popup_query_data_code_window_ParamLimits

0x2cab,	// (0x00002cab) popup_query_data_code_window

0xbf09,	// (0x0000bf09) popup_query_data_window_ParamLimits

0xbf09,	// (0x0000bf09) popup_query_data_window

0xbf7d,	// (0x0000bf7d) popup_query_sat_info_window_ParamLimits

0xbf7d,	// (0x0000bf7d) popup_query_sat_info_window

0xc00a,	// (0x0000c00a) popup_snote_single_graphic_window_ParamLimits

0xc00a,	// (0x0000c00a) popup_snote_single_graphic_window

0xc00a,	// (0x0000c00a) popup_snote_single_text_window_ParamLimits

0xc00a,	// (0x0000c00a) popup_snote_single_text_window

0x2d1a,	// (0x00002d1a) popup_sub_window_general

0x2e28,	// (0x00002e28) popup_window_general_ParamLimits

0x2e28,	// (0x00002e28) popup_window_general

0x2e3b,	// (0x00002e3b) power_save_pane

0xb9b2,	// (0x0000b9b2) control_pane_g1_ParamLimits

0xb9b2,	// (0x0000b9b2) control_pane_g1

0xb9d9,	// (0x0000b9d9) control_pane_g2_ParamLimits

0xb9d9,	// (0x0000b9d9) control_pane_g2

0x279a,	// (0x0000279a) control_pane_g3_ParamLimits

0x279a,	// (0x0000279a) control_pane_g3

0x0007,

0xe5f1,	// (0x0000e5f1) control_pane_g_ParamLimits

0xe5f1,	// (0x0000e5f1) control_pane_g

0xba3b,	// (0x0000ba3b) control_pane_t1_ParamLimits

0xba3b,	// (0x0000ba3b) control_pane_t1

0xba9e,	// (0x0000ba9e) control_pane_t2_ParamLimits

0xba9e,	// (0x0000ba9e) control_pane_t2

0x0002,

0xe602,	// (0x0000e602) control_pane_t_ParamLimits

0xe602,	// (0x0000e602) control_pane_t

0xb90d,	// (0x0000b90d) navi_navi_volume_pane_cp1

0xb915,	// (0x0000b915) status_small_icon_pane

0x2683,	// (0x00002683) status_small_pane_g1_ParamLimits

0x2683,	// (0x00002683) status_small_pane_g1

0xb91d,	// (0x0000b91d) status_small_pane_g2_ParamLimits

0xb91d,	// (0x0000b91d) status_small_pane_g2

0xb929,	// (0x0000b929) status_small_pane_g3_ParamLimits

0xb929,	// (0x0000b929) status_small_pane_g3

0xb935,	// (0x0000b935) status_small_pane_g4_ParamLimits

0xb935,	// (0x0000b935) status_small_pane_g4

0xb941,	// (0x0000b941) status_small_pane_g5_ParamLimits

0xb941,	// (0x0000b941) status_small_pane_g5

0xb94d,	// (0x0000b94d) status_small_pane_g6_ParamLimits

0xb94d,	// (0x0000b94d) status_small_pane_g6

0x0007,

0xe5e0,	// (0x0000e5e0) status_small_pane_g_ParamLimits

0xe5e0,	// (0x0000e5e0) status_small_pane_g

0xb97c,	// (0x0000b97c) status_small_pane_t1

0xb99e,	// (0x0000b99e) status_small_wait_pane_ParamLimits

0xb99e,	// (0x0000b99e) status_small_wait_pane

0xb768,	// (0x0000b768) aid_levels_signal_ParamLimits

0xb768,	// (0x0000b768) aid_levels_signal

0xb780,	// (0x0000b780) signal_pane_g1_ParamLimits

0xb780,	// (0x0000b780) signal_pane_g1

0xb79b,	// (0x0000b79b) signal_pane_g2_ParamLimits

0xb79b,	// (0x0000b79b) signal_pane_g2

0x0003,

0xe5c0,	// (0x0000e5c0) signal_pane_g_ParamLimits

0xe5c0,	// (0x0000e5c0) signal_pane_g

0x1ce0,	// (0x00001ce0) context_pane_g1

0xae04,	// (0x0000ae04) title_pane_g1

0xae3b,	// (0x0000ae3b) title_pane_t1

0x046b,	// (0x0000046b) title_pane_t2

0x0491,	// (0x00000491) title_pane_t3

0x0002,

0xe4e6,	// (0x0000e4e6) title_pane_t

0xc486,	// (0x0000c486) aid_levels_battery_ParamLimits

0xc486,	// (0x0000c486) aid_levels_battery

0xc4a2,	// (0x0000c4a2) battery_pane_g1_ParamLimits

0xc4a2,	// (0x0000c4a2) battery_pane_g1

0xc4bf,	// (0x0000c4bf) battery_pane_g2_ParamLimits

0xc4bf,	// (0x0000c4bf) battery_pane_g2

0x0001,

0xe614,	// (0x0000e614) battery_pane_g_ParamLimits

0xe614,	// (0x0000e614) battery_pane_g

0xc6ee,	// (0x0000c6ee) uni_indicator_pane_g1

0xc704,	// (0x0000c704) uni_indicator_pane_g2

0xc71a,	// (0x0000c71a) uni_indicator_pane_g3

0x0005,

0xe64b,	// (0x0000e64b) uni_indicator_pane_g

0x226c,	// (0x0000226c) navi_icon_pane_ParamLimits

0x226c,	// (0x0000226c) navi_icon_pane

0x21b2,	// (0x000021b2) navi_midp_pane

0x2288,	// (0x00002288) navi_navi_pane

0x2292,	// (0x00002292) navi_text_pane_ParamLimits

0x2292,	// (0x00002292) navi_text_pane

0x002a,	// (0x0000002a) status_small_wait_pane_g1

0x095d,	// (0x0000095d) status_small_wait_pane_g2

0x0001,

0xa626,	// (0x0000a626) status_small_wait_pane_g

0x44cd,	// (0x000044cd) navi_navi_icon_text_pane

0x44d5,	// (0x000044d5) navi_navi_pane_g1_ParamLimits

0x44d5,	// (0x000044d5) navi_navi_pane_g1

0x44e7,	// (0x000044e7) navi_navi_pane_g2_ParamLimits

0x44e7,	// (0x000044e7) navi_navi_pane_g2

0x0001,

0xa5f4,	// (0x0000a5f4) navi_navi_pane_g_ParamLimits

0xa5f4,	// (0x0000a5f4) navi_navi_pane_g

0x44f9,	// (0x000044f9) navi_navi_tabs_pane

0x4502,	// (0x00004502) navi_navi_text_pane

0x44cd,	// (0x000044cd) navi_navi_volume_pane

0x44a9,	// (0x000044a9) navi_text_pane_t1

0x449d,	// (0x0000449d) navi_icon_pane_g1

0x43f2,	// (0x000043f2) navi_navi_text_pane_t1

0x43e1,	// (0x000043e1) navi_navi_volume_pane_g1

0x43e9,	// (0x000043e9) volume_small_pane

0x4347,	// (0x00004347) navi_navi_icon_text_pane_g1

0x434f,	// (0x0000434f) navi_navi_icon_text_pane_t1

0x2288,	// (0x00002288) navi_tabs_2_long_pane

0x2288,	// (0x00002288) navi_tabs_2_pane

0x2288,	// (0x00002288) navi_tabs_3_long_pane

0x2288,	// (0x00002288) navi_tabs_3_pane

0x2288,	// (0x00002288) navi_tabs_4_pane

0x42aa,	// (0x000042aa) tabs_2_active_pane_ParamLimits

0x42aa,	// (0x000042aa) tabs_2_active_pane

0x42ba,	// (0x000042ba) tabs_2_passive_pane_ParamLimits

0x42ba,	// (0x000042ba) tabs_2_passive_pane

0x4278,	// (0x00004278) tabs_3_active_pane_ParamLimits

0x4278,	// (0x00004278) tabs_3_active_pane

0x4288,	// (0x00004288) tabs_3_passive_pane_ParamLimits

0x4288,	// (0x00004288) tabs_3_passive_pane

0x4299,	// (0x00004299) tabs_3_passive_pane_cp_ParamLimits

0x4299,	// (0x00004299) tabs_3_passive_pane_cp

0x4234,	// (0x00004234) tabs_4_active_pane_ParamLimits

0x4234,	// (0x00004234) tabs_4_active_pane

0x4245,	// (0x00004245) tabs_4_passive_pane_ParamLimits

0x4245,	// (0x00004245) tabs_4_passive_pane

0x4256,	// (0x00004256) tabs_4_passive_pane_cp_ParamLimits

0x4256,	// (0x00004256) tabs_4_passive_pane_cp

0x4267,	// (0x00004267) tabs_4_passive_pane_cp2_ParamLimits

0x4267,	// (0x00004267) tabs_4_passive_pane_cp2

0x4214,	// (0x00004214) tabs_2_long_active_pane_ParamLimits

0x4214,	// (0x00004214) tabs_2_long_active_pane

0x4224,	// (0x00004224) tabs_2_long_passive_pane_ParamLimits

0x4224,	// (0x00004224) tabs_2_long_passive_pane

0x41e1,	// (0x000041e1) tabs_3_long_active_pane_ParamLimits

0x41e1,	// (0x000041e1) tabs_3_long_active_pane

0x41f2,	// (0x000041f2) tabs_3_long_passive_pane_ParamLimits

0x41f2,	// (0x000041f2) tabs_3_long_passive_pane

0x4203,	// (0x00004203) tabs_3_long_passive_pane_cp_ParamLimits

0x4203,	// (0x00004203) tabs_3_long_passive_pane_cp

0x4187,	// (0x00004187) volume_small_pane_g1

0x4190,	// (0x00004190) volume_small_pane_g2

0x4199,	// (0x00004199) volume_small_pane_g3

0x41a2,	// (0x000041a2) volume_small_pane_g4

0x41ab,	// (0x000041ab) volume_small_pane_g5

0x41b4,	// (0x000041b4) volume_small_pane_g6

0x41bd,	// (0x000041bd) volume_small_pane_g7

0x41c6,	// (0x000041c6) volume_small_pane_g8

0x41cf,	// (0x000041cf) volume_small_pane_g9

0x41d8,	// (0x000041d8) volume_small_pane_g10

0x0009,

0xa5c0,	// (0x0000a5c0) volume_small_pane_g

0x07bb,	// (0x000007bb) bg_active_tab_pane_cp2_ParamLimits

0x07bb,	// (0x000007bb) bg_active_tab_pane_cp2

0x04b1,	// (0x000004b1) tabs_3_active_pane_g1

0xaec7,	// (0x0000aec7) tabs_3_active_pane_t1

0x07bb,	// (0x000007bb) bg_passive_tab_pane_cp2_ParamLimits

0x07bb,	// (0x000007bb) bg_passive_tab_pane_cp2

0x04b1,	// (0x000004b1) tabs_3_passive_pane_g1

0xaec7,	// (0x0000aec7) tabs_3_passive_pane_t1

0x07bb,	// (0x000007bb) bg_active_tab_pane_cp3_ParamLimits

0x07bb,	// (0x000007bb) bg_active_tab_pane_cp3

0x04cb,	// (0x000004cb) tabs_4_active_pane_g1

0xaed9,	// (0x0000aed9) tabs_4_active_pane_t1

0x07bb,	// (0x000007bb) bg_passive_tab_pane_cp3_ParamLimits

0x07bb,	// (0x000007bb) bg_passive_tab_pane_cp3

0x04cb,	// (0x000004cb) tabs_4_1_passive_pane_g1

0xaed9,	// (0x0000aed9) tabs_4_1_passive_pane_t1

0x2966,	// (0x00002966) list_highlight_pane_cp2

0xc81a,	// (0x0000c81a) list_set_pane_ParamLimits

0xc81a,	// (0x0000c81a) list_set_pane

0xc8a8,	// (0x0000c8a8) main_pane_set_t1_ParamLimits

0xc8a8,	// (0x0000c8a8) main_pane_set_t1

0xc8c8,	// (0x0000c8c8) main_pane_set_t2_ParamLimits

0xc8c8,	// (0x0000c8c8) main_pane_set_t2

0xc8dc,	// (0x0000c8dc) main_pane_set_t3_ParamLimits

0xc8dc,	// (0x0000c8dc) main_pane_set_t3

0xc8ee,	// (0x0000c8ee) main_pane_set_t4_ParamLimits

0xc8ee,	// (0x0000c8ee) main_pane_set_t4

0x0003,

0xe694,	// (0x0000e694) main_pane_set_t_ParamLimits

0xe694,	// (0x0000e694) main_pane_set_t

0xc900,	// (0x0000c900) setting_code_pane

0xc908,	// (0x0000c908) setting_slider_graphic_pane

0xc908,	// (0x0000c908) setting_slider_pane

0xc908,	// (0x0000c908) setting_text_pane

0xc908,	// (0x0000c908) setting_volume_pane

0xaeeb,	// (0x0000aeeb) volume_set_pane

0x04a3,	// (0x000004a3) bg_set_opt_pane_cp

0x04ed,	// (0x000004ed) setting_slider_pane_t1

0xaef3,	// (0x0000aef3) setting_slider_pane_t2

0xaf0c,	// (0x0000af0c) setting_slider_pane_t3

0x0002,

0xe4ed,	// (0x0000e4ed) setting_slider_pane_t

0x0536,	// (0x00000536) slider_set_pane

0x027d,	// (0x0000027d) bg_set_opt_pane_cp2

0x054c,	// (0x0000054c) setting_slider_graphic_pane_g1

0xaf23,	// (0x0000af23) setting_slider_graphic_pane_t1

0xaf32,	// (0x0000af32) setting_slider_graphic_pane_t2

0x0001,

0xe4f4,	// (0x0000e4f4) setting_slider_graphic_pane_t

0x0573,	// (0x00000573) slider_set_pane_cp

0x027d,	// (0x0000027d) input_focus_pane_cp1

0x4a96,	// (0x00004a96) list_set_text_pane

0x002a,	// (0x0000002a) setting_text_pane_g1

0x027d,	// (0x0000027d) input_focus_pane_cp2

0x002a,	// (0x0000002a) setting_code_pane_g1

0x057b,	// (0x0000057b) setting_code_pane_t1

0x0589,	// (0x00000589) set_text_pane_t1_ParamLimits

0x0589,	// (0x00000589) set_text_pane_t1

0x1362,	// (0x00001362) set_opt_bg_pane_g1

0x136a,	// (0x0000136a) set_opt_bg_pane_g2

0xc7dd,	// (0x0000c7dd) set_opt_bg_pane_g3

0x137a,	// (0x0000137a) set_opt_bg_pane_g4

0x1382,	// (0x00001382) set_opt_bg_pane_g5

0x138a,	// (0x0000138a) set_opt_bg_pane_g6

0x4a7e,	// (0x00004a7e) set_opt_bg_pane_g7

0xc7e5,	// (0x0000c7e5) set_opt_bg_pane_g8

0xc7ed,	// (0x0000c7ed) set_opt_bg_pane_g9

0x0008,

0xe681,	// (0x0000e681) set_opt_bg_pane_g

0x4a05,	// (0x00004a05) slider_set_pane_g1

0x4a12,	// (0x00004a12) slider_set_pane_g2

0x0006,

0xe672,	// (0x0000e672) slider_set_pane_g

0x489b,	// (0x0000489b) volume_set_pane_g1

0xc740,	// (0x0000c740) volume_set_pane_g2

0xc748,	// (0x0000c748) volume_set_pane_g3

0xc750,	// (0x0000c750) volume_set_pane_g4

0xc758,	// (0x0000c758) volume_set_pane_g5

0xc760,	// (0x0000c760) volume_set_pane_g6

0xc768,	// (0x0000c768) volume_set_pane_g7

0xc770,	// (0x0000c770) volume_set_pane_g8

0xc778,	// (0x0000c778) volume_set_pane_g9

0xc780,	// (0x0000c780) volume_set_pane_g10

0x0009,

0xe658,	// (0x0000e658) volume_set_pane_g

0xaf41,	// (0x0000af41) indicator_pane_ParamLimits

0xaf41,	// (0x0000af41) indicator_pane

0xaf69,	// (0x0000af69) main_idle_pane_g2_ParamLimits

0xaf69,	// (0x0000af69) main_idle_pane_g2

0xaf97,	// (0x0000af97) main_pane_idle_g1_ParamLimits

0xaf97,	// (0x0000af97) main_pane_idle_g1

0x05de,	// (0x000005de) popup_clock_digital_analogue_window_ParamLimits

0x05de,	// (0x000005de) popup_clock_digital_analogue_window

0xafbc,	// (0x0000afbc) soft_indicator_pane_ParamLimits

0xafbc,	// (0x0000afbc) soft_indicator_pane

0xafd6,	// (0x0000afd6) wallpaper_pane_ParamLimits

0xafd6,	// (0x0000afd6) wallpaper_pane

0x002a,	// (0x0000002a) wallpaper_pane_g1

0xafe8,	// (0x0000afe8) indicator_pane_g1_ParamLimits

0xafe8,	// (0x0000afe8) indicator_pane_g1

0x4f60,	// (0x00004f60) navi_navi_icon_text_pane_srt_g1

0x0630,	// (0x00000630) soft_indicator_pane_t1

0x064a,	// (0x0000064a) aid_ps_area_pane

0xb001,	// (0x0000b001) aid_ps_clock_pane

0x0667,	// (0x00000667) aid_ps_indicator_pane

0x0673,	// (0x00000673) indicator_ps_pane_ParamLimits

0x0673,	// (0x00000673) indicator_ps_pane

0x0682,	// (0x00000682) power_save_pane_g1_ParamLimits

0x0682,	// (0x00000682) power_save_pane_g1

0x068e,	// (0x0000068e) power_save_pane_g2_ParamLimits

0x068e,	// (0x0000068e) power_save_pane_g2

0x0034,	// (0x00000034) aid_navinavi_width_pane

0x064a,	// (0x0000064a) aid_ps_area_pane_ParamLimits

0x0001,

0xa279,	// (0x0000a279) power_save_pane_g_ParamLimits

0xa279,	// (0x0000a279) power_save_pane_g

0x069c,	// (0x0000069c) power_save_pane_t1_ParamLimits

0x069c,	// (0x0000069c) power_save_pane_t1

0xb001,	// (0x0000b001) aid_ps_clock_pane_ParamLimits

0x0667,	// (0x00000667) aid_ps_indicator_pane_ParamLimits

0x06ae,	// (0x000006ae) power_save_pane_t4_ParamLimits

0x06ae,	// (0x000006ae) power_save_pane_t4

0x0001,

0xa27e,	// (0x0000a27e) power_save_pane_t_ParamLimits

0xa27e,	// (0x0000a27e) power_save_pane_t

0x06d8,	// (0x000006d8) power_save_t3_ParamLimits

0x06d8,	// (0x000006d8) power_save_t3

0x06c3,	// (0x000006c3) power_save_t2_ParamLimits

0x06c3,	// (0x000006c3) power_save_t2

0x06ed,	// (0x000006ed) indicator_ps_pane_g1

0xb00d,	// (0x0000b00d) ai_gene_pane_ParamLimits

0xb00d,	// (0x0000b00d) ai_gene_pane

0xb024,	// (0x0000b024) ai_links_pane_ParamLimits

0xb024,	// (0x0000b024) ai_links_pane

0xb03c,	// (0x0000b03c) indicator_pane_cp1_ParamLimits

0xb03c,	// (0x0000b03c) indicator_pane_cp1

0xb04b,	// (0x0000b04b) main_pane_idle_g1_cp_ParamLimits

0xb04b,	// (0x0000b04b) main_pane_idle_g1_cp

0x0726,	// (0x00000726) popup_ai_links_title_window

0xb063,	// (0x0000b063) soft_indicator_pane_cp1_ParamLimits

0xb063,	// (0x0000b063) soft_indicator_pane_cp1

0x478c,	// (0x0000478c) ai_links_pane_g1

0x4795,	// (0x00004795) grid_ai_links_pane

0xc6e5,	// (0x0000c6e5) ai_gene_pane_1

0x477a,	// (0x0000477a) ai_gene_pane_2

0x4783,	// (0x00004783) list_highlight_pane_cp4

0xc6cb,	// (0x0000c6cb) cell_ai_link_pane_ParamLimits

0xc6cb,	// (0x0000c6cb) cell_ai_link_pane

0x4751,	// (0x00004751) cell_ai_link_pane_g1

0x095d,	// (0x0000095d) cell_ai_link_pane_g2

0x0001,

0xa621,	// (0x0000a621) cell_ai_link_pane_g

0x027d,	// (0x0000027d) grid_highlight_cp2

0x027d,	// (0x0000027d) bg_popup_sub_pane_cp1

0x0749,	// (0x00000749) popup_ai_links_title_window_t1

0x46a3,	// (0x000046a3) ai_gene_pane_1_g1_ParamLimits

0x46a3,	// (0x000046a3) ai_gene_pane_1_g1

0x46af,	// (0x000046af) ai_gene_pane_1_g2_ParamLimits

0x46af,	// (0x000046af) ai_gene_pane_1_g2

0x0001,

0xa617,	// (0x0000a617) ai_gene_pane_1_g_ParamLimits

0xa617,	// (0x0000a617) ai_gene_pane_1_g

0x46bc,	// (0x000046bc) ai_gene_pane_1_t1_ParamLimits

0x46bc,	// (0x000046bc) ai_gene_pane_1_t1

0x46f0,	// (0x000046f0) grid_ai_soft_ind_pane

0x468e,	// (0x0000468e) ai_gene_pane_2_t1_ParamLimits

0x468e,	// (0x0000468e) ai_gene_pane_2_t1

0xb077,	// (0x0000b077) main_pane_empty_t1_ParamLimits

0xb077,	// (0x0000b077) main_pane_empty_t1

0xb08f,	// (0x0000b08f) main_pane_empty_t2_ParamLimits

0xb08f,	// (0x0000b08f) main_pane_empty_t2

0xb0a4,	// (0x0000b0a4) main_pane_empty_t3_ParamLimits

0xb0a4,	// (0x0000b0a4) main_pane_empty_t3

0xb0b6,	// (0x0000b0b6) main_pane_empty_t4_ParamLimits

0xb0b6,	// (0x0000b0b6) main_pane_empty_t4

0xb0c8,	// (0x0000b0c8) main_pane_empty_t5_ParamLimits

0xb0c8,	// (0x0000b0c8) main_pane_empty_t5

0x0004,

0xe4f9,	// (0x0000e4f9) main_pane_empty_t_ParamLimits

0xe4f9,	// (0x0000e4f9) main_pane_empty_t

0x143a,	// (0x0000143a) bg_popup_window_pane_ParamLimits

0x143a,	// (0x0000143a) bg_popup_window_pane

0x4400,	// (0x00004400) find_popup_pane_cp2_ParamLimits

0x4400,	// (0x00004400) find_popup_pane_cp2

0x440c,	// (0x0000440c) heading_pane_ParamLimits

0x440c,	// (0x0000440c) heading_pane

0x027d,	// (0x0000027d) bg_popup_sub_pane

0xc64c,	// (0x0000c64c) bg_popup_window_pane_g1_ParamLimits

0xc64c,	// (0x0000c64c) bg_popup_window_pane_g1

0xc65b,	// (0x0000c65b) bg_popup_window_pane_g2_ParamLimits

0xc65b,	// (0x0000c65b) bg_popup_window_pane_g2

0xc667,	// (0x0000c667) bg_popup_window_pane_g3_ParamLimits

0xc667,	// (0x0000c667) bg_popup_window_pane_g3

0xc673,	// (0x0000c673) bg_popup_window_pane_g4_ParamLimits

0xc673,	// (0x0000c673) bg_popup_window_pane_g4

0xc682,	// (0x0000c682) bg_popup_window_pane_g5_ParamLimits

0xc682,	// (0x0000c682) bg_popup_window_pane_g5

0xc692,	// (0x0000c692) bg_popup_window_pane_g6_ParamLimits

0xc692,	// (0x0000c692) bg_popup_window_pane_g6

0xc69e,	// (0x0000c69e) bg_popup_window_pane_g7_ParamLimits

0xc69e,	// (0x0000c69e) bg_popup_window_pane_g7

0xc6ad,	// (0x0000c6ad) bg_popup_window_pane_g8_ParamLimits

0xc6ad,	// (0x0000c6ad) bg_popup_window_pane_g8

0xc6bc,	// (0x0000c6bc) bg_popup_window_pane_g9_ParamLimits

0xc6bc,	// (0x0000c6bc) bg_popup_window_pane_g9

0x43d5,	// (0x000043d5) bg_popup_window_pane_g10_ParamLimits

0x43d5,	// (0x000043d5) bg_popup_window_pane_g10

0x0009,

0xe636,	// (0x0000e636) bg_popup_window_pane_g_ParamLimits

0xe636,	// (0x0000e636) bg_popup_window_pane_g

0x42fe,	// (0x000042fe) bg_popup_heading_pane_ParamLimits

0x42fe,	// (0x000042fe) bg_popup_heading_pane

0x4ea3,	// (0x00004ea3) tabs_4_passive_pane_cp_srt_ParamLimits

0x4ea3,	// (0x00004ea3) tabs_4_passive_pane_cp_srt

0x4eb5,	// (0x00004eb5) tabs_4_passive_pane_srt_ParamLimits

0x4312,	// (0x00004312) heading_pane_g2

0x4eb5,	// (0x00004eb5) tabs_4_passive_pane_srt

0x353b,	// (0x0000353b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x353b,	// (0x0000353b) bg_passive_tab_pane_cp3_srt

0x431a,	// (0x0000431a) heading_pane_t1_ParamLimits

0x431a,	// (0x0000431a) heading_pane_t1

0x4331,	// (0x00004331) heading_pane_t2_ParamLimits

0x4331,	// (0x00004331) heading_pane_t2

0x0001,

0xa5da,	// (0x0000a5da) heading_pane_t_ParamLimits

0xa5da,	// (0x0000a5da) heading_pane_t

0x3d10,	// (0x00003d10) bg_popup_heading_pane_g1

0x3db9,	// (0x00003db9) bg_popup_heading_pane_g2

0x3dc1,	// (0x00003dc1) bg_popup_heading_pane_g3

0x3dc9,	// (0x00003dc9) bg_popup_heading_pane_g4

0x3dd1,	// (0x00003dd1) bg_popup_heading_pane_g5

0x3dd9,	// (0x00003dd9) bg_popup_heading_pane_g6

0x3de1,	// (0x00003de1) bg_popup_heading_pane_g7

0x3de9,	// (0x00003de9) bg_popup_heading_pane_g8

0x3df1,	// (0x00003df1) bg_popup_heading_pane_g9

0x0008,

0xa596,	// (0x0000a596) bg_popup_heading_pane_g

0x33b1,	// (0x000033b1) bg_popup_sub_pane_g1

0x33b9,	// (0x000033b9) bg_popup_sub_pane_g2

0x33c1,	// (0x000033c1) bg_popup_sub_pane_g3

0x33c9,	// (0x000033c9) bg_popup_sub_pane_g4

0x33d1,	// (0x000033d1) bg_popup_sub_pane_g5

0x33d9,	// (0x000033d9) bg_popup_sub_pane_g6

0x33e1,	// (0x000033e1) bg_popup_sub_pane_g7

0x33e9,	// (0x000033e9) bg_popup_sub_pane_g8

0x33f1,	// (0x000033f1) bg_popup_sub_pane_g9

0x0008,

0xa570,	// (0x0000a570) bg_popup_sub_pane_g

0x07bb,	// (0x000007bb) bg_popup_window_pane_cp5_ParamLimits

0x07bb,	// (0x000007bb) bg_popup_window_pane_cp5

0x07d7,	// (0x000007d7) popup_note_window_g1_ParamLimits

0x07d7,	// (0x000007d7) popup_note_window_g1

0x07e3,	// (0x000007e3) popup_note_window_t1_ParamLimits

0x07e3,	// (0x000007e3) popup_note_window_t1

0x07f9,	// (0x000007f9) popup_note_window_t2_ParamLimits

0x07f9,	// (0x000007f9) popup_note_window_t2

0x080f,	// (0x0000080f) popup_note_window_t3_ParamLimits

0x080f,	// (0x0000080f) popup_note_window_t3

0x0825,	// (0x00000825) popup_note_window_t4_ParamLimits

0x0825,	// (0x00000825) popup_note_window_t4

0x084d,	// (0x0000084d) popup_note_window_t5_ParamLimits

0x084d,	// (0x0000084d) popup_note_window_t5

0x0004,

0xa28e,	// (0x0000a28e) popup_note_window_t_ParamLimits

0xa28e,	// (0x0000a28e) popup_note_window_t

0x0871,	// (0x00000871) bg_popup_window_pane_cp6_ParamLimits

0x0871,	// (0x00000871) bg_popup_window_pane_cp6

0x3c8c,	// (0x00003c8c) popup_note_image_window_g1_ParamLimits

0x3c8c,	// (0x00003c8c) popup_note_image_window_g1

0x3c98,	// (0x00003c98) popup_note_image_window_g2_ParamLimits

0x3c98,	// (0x00003c98) popup_note_image_window_g2

0x0001,

0xa564,	// (0x0000a564) popup_note_image_window_g_ParamLimits

0xa564,	// (0x0000a564) popup_note_image_window_g

0x3cb1,	// (0x00003cb1) popup_note_image_window_t1_ParamLimits

0x3cb1,	// (0x00003cb1) popup_note_image_window_t1

0x3cca,	// (0x00003cca) popup_note_image_window_t2_ParamLimits

0x3cca,	// (0x00003cca) popup_note_image_window_t2

0x3ce3,	// (0x00003ce3) popup_note_image_window_t3_ParamLimits

0x3ce3,	// (0x00003ce3) popup_note_image_window_t3

0x0002,

0xa569,	// (0x0000a569) popup_note_image_window_t_ParamLimits

0xa569,	// (0x0000a569) popup_note_image_window_t

0x3b55,	// (0x00003b55) bg_popup_window_pane_cp7_ParamLimits

0x3b55,	// (0x00003b55) bg_popup_window_pane_cp7

0x3b85,	// (0x00003b85) popup_note_wait_window_g1_ParamLimits

0x3b85,	// (0x00003b85) popup_note_wait_window_g1

0x3b91,	// (0x00003b91) popup_note_wait_window_g2_ParamLimits

0x3b91,	// (0x00003b91) popup_note_wait_window_g2

0x0002,

0xa552,	// (0x0000a552) popup_note_wait_window_g_ParamLimits

0xa552,	// (0x0000a552) popup_note_wait_window_g

0x3ba9,	// (0x00003ba9) popup_note_wait_window_t1_ParamLimits

0x3ba9,	// (0x00003ba9) popup_note_wait_window_t1

0x3bd0,	// (0x00003bd0) popup_note_wait_window_t2_ParamLimits

0x3bd0,	// (0x00003bd0) popup_note_wait_window_t2

0x3bed,	// (0x00003bed) popup_note_wait_window_t3_ParamLimits

0x3bed,	// (0x00003bed) popup_note_wait_window_t3

0x3c00,	// (0x00003c00) popup_note_wait_window_t4_ParamLimits

0x3c00,	// (0x00003c00) popup_note_wait_window_t4

0x0004,

0xa559,	// (0x0000a559) popup_note_wait_window_t_ParamLimits

0xa559,	// (0x0000a559) popup_note_wait_window_t

0x3c25,	// (0x00003c25) wait_bar_pane_ParamLimits

0x3c25,	// (0x00003c25) wait_bar_pane

0x027d,	// (0x0000027d) wait_anim_pane

0x027d,	// (0x0000027d) wait_border_pane

0x002a,	// (0x0000002a) wait_anim_pane_g1

0x002a,	// (0x0000002a) wait_anim_pane_g2

0x0001,

0xa40d,	// (0x0000a40d) wait_anim_pane_g

0x3b05,	// (0x00003b05) wait_border_pane_g1

0x3b0e,	// (0x00003b0e) wait_border_pane_g2

0x3b17,	// (0x00003b17) wait_border_pane_g3

0x0002,

0xa54b,	// (0x0000a54b) wait_border_pane_g

0x3975,	// (0x00003975) bg_popup_window_pane_cp16_ParamLimits

0x3975,	// (0x00003975) bg_popup_window_pane_cp16

0x3a75,	// (0x00003a75) indicator_popup_pane_cp4_ParamLimits

0x3a75,	// (0x00003a75) indicator_popup_pane_cp4

0x3a89,	// (0x00003a89) popup_query_data_window_t1_ParamLimits

0x3a89,	// (0x00003a89) popup_query_data_window_t1

0x3a9b,	// (0x00003a9b) popup_query_data_window_t2_ParamLimits

0x3a9b,	// (0x00003a9b) popup_query_data_window_t2

0x3ab4,	// (0x00003ab4) popup_query_data_window_t3_ParamLimits

0x3ab4,	// (0x00003ab4) popup_query_data_window_t3

0x0002,

0xa544,	// (0x0000a544) popup_query_data_window_t_ParamLimits

0xa544,	// (0x0000a544) popup_query_data_window_t

0x3ace,	// (0x00003ace) query_popup_data_pane_ParamLimits

0x3ace,	// (0x00003ace) query_popup_data_pane

0x3ae2,	// (0x00003ae2) query_popup_data_pane_cp1_ParamLimits

0x3ae2,	// (0x00003ae2) query_popup_data_pane_cp1

0x3975,	// (0x00003975) bg_popup_window_pane_cp10_ParamLimits

0x3975,	// (0x00003975) bg_popup_window_pane_cp10

0x39a7,	// (0x000039a7) indicator_popup_pane_ParamLimits

0x39a7,	// (0x000039a7) indicator_popup_pane

0x39c9,	// (0x000039c9) popup_query_code_window_t1_ParamLimits

0x39c9,	// (0x000039c9) popup_query_code_window_t1

0x39e3,	// (0x000039e3) popup_query_code_window_t2_ParamLimits

0x39e3,	// (0x000039e3) popup_query_code_window_t2

0x3a2c,	// (0x00003a2c) popup_query_code_window_t3_ParamLimits

0x3a2c,	// (0x00003a2c) popup_query_code_window_t3

0x0002,

0xa53d,	// (0x0000a53d) popup_query_code_window_t_ParamLimits

0xa53d,	// (0x0000a53d) popup_query_code_window_t

0x3a5b,	// (0x00003a5b) query_popup_pane_ParamLimits

0x3a5b,	// (0x00003a5b) query_popup_pane

0x0871,	// (0x00000871) bg_popup_window_pane_cp15_ParamLimits

0x0871,	// (0x00000871) bg_popup_window_pane_cp15

0x088f,	// (0x0000088f) indicator_popup_pane_cp1_ParamLimits

0x088f,	// (0x0000088f) indicator_popup_pane_cp1

0x08a2,	// (0x000008a2) indicator_popup_pane_cp2_ParamLimits

0x08a2,	// (0x000008a2) indicator_popup_pane_cp2

0x08b5,	// (0x000008b5) popup_query_data_code_window_g1_ParamLimits

0x08b5,	// (0x000008b5) popup_query_data_code_window_g1

0x08c8,	// (0x000008c8) popup_query_data_code_window_t1_ParamLimits

0x08c8,	// (0x000008c8) popup_query_data_code_window_t1

0x08da,	// (0x000008da) popup_query_data_code_window_t2_ParamLimits

0x08da,	// (0x000008da) popup_query_data_code_window_t2

0x08ec,	// (0x000008ec) popup_query_data_code_window_t3_ParamLimits

0x08ec,	// (0x000008ec) popup_query_data_code_window_t3

0x0902,	// (0x00000902) popup_query_data_code_window_t4_ParamLimits

0x0902,	// (0x00000902) popup_query_data_code_window_t4

0x0003,

0xa299,	// (0x0000a299) popup_query_data_code_window_t_ParamLimits

0xa299,	// (0x0000a299) popup_query_data_code_window_t

0x222a,	// (0x0000222a) list_single_midp_graphic_pane_g3

0x091a,	// (0x0000091a) query_popup_data_pane_cp2_ParamLimits

0x092d,	// (0x0000092d) query_popup_pane_cp2_ParamLimits

0x092d,	// (0x0000092d) query_popup_pane_cp2

0x027d,	// (0x0000027d) bg_popup_window_pane_cp11

0x396d,	// (0x0000396d) heading_pane_cp5

0x0a14,	// (0x00000a14) listscroll_popup_info_pane

0x027d,	// (0x0000027d) input_focus_pane_cp3

0x0940,	// (0x00000940) query_popup_pane_t1

0x094e,	// (0x0000094e) list_popup_info_pane_ParamLimits

0x094e,	// (0x0000094e) list_popup_info_pane

0x095d,	// (0x0000095d) listscroll_popup_info_pane_g1

0x0965,	// (0x00000965) scroll_pane_cp7

0x096d,	// (0x0000096d) popup_info_list_pane_t1_ParamLimits

0x096d,	// (0x0000096d) popup_info_list_pane_t1

0x0987,	// (0x00000987) popup_info_list_pane_t2_ParamLimits

0x0987,	// (0x00000987) popup_info_list_pane_t2

0x0001,

0xa2a2,	// (0x0000a2a2) popup_info_list_pane_t_ParamLimits

0xa2a2,	// (0x0000a2a2) popup_info_list_pane_t

0x027d,	// (0x0000027d) bg_popup_window_pane_cp12

0x4f97,	// (0x00004f97) find_popup_pane

0x04a3,	// (0x000004a3) bg_popup_window_pane_cp3

0x09a1,	// (0x000009a1) heading_pane_cp3

0x09ad,	// (0x000009ad) listscroll_popup_graphic_pane

0x027d,	// (0x0000027d) bg_popup_window_pane_cp4

0xb12a,	// (0x0000b12a) heading_pane_cp4

0x0a14,	// (0x00000a14) listscroll_popup_colour_pane

0x0a1c,	// (0x00000a1c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0a1c,	// (0x00000a1c) cell_large_graphic_colour_none_popup_pane

0xb132,	// (0x0000b132) grid_large_graphic_colour_popup_pane_ParamLimits

0xb132,	// (0x0000b132) grid_large_graphic_colour_popup_pane

0x0a48,	// (0x00000a48) listscroll_popup_colour_pane_g1_ParamLimits

0x0a48,	// (0x00000a48) listscroll_popup_colour_pane_g1

0x0a5f,	// (0x00000a5f) listscroll_popup_colour_pane_g2_ParamLimits

0x0a5f,	// (0x00000a5f) listscroll_popup_colour_pane_g2

0x0a76,	// (0x00000a76) listscroll_popup_colour_pane_g3_ParamLimits

0x0a76,	// (0x00000a76) listscroll_popup_colour_pane_g3

0xb14e,	// (0x0000b14e) listscroll_popup_colour_pane_g4_ParamLimits

0xb14e,	// (0x0000b14e) listscroll_popup_colour_pane_g4

0x0003,

0xe504,	// (0x0000e504) listscroll_popup_colour_pane_g_ParamLimits

0xe504,	// (0x0000e504) listscroll_popup_colour_pane_g

0x0a95,	// (0x00000a95) scroll_pane_cp6_ParamLimits

0x0a95,	// (0x00000a95) scroll_pane_cp6

0xb15d,	// (0x0000b15d) cell_large_graphic_colour_popup_pane_ParamLimits

0xb15d,	// (0x0000b15d) cell_large_graphic_colour_popup_pane

0x0ac6,	// (0x00000ac6) cell_large_graphic_colour_none_popup_pane_t1

0x027d,	// (0x0000027d) grid_highlight_pane_cp5

0x0ad5,	// (0x00000ad5) cell_large_graphic_colour_popup_pane_g1

0x0add,	// (0x00000add) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xa2b0,	// (0x0000a2b0) cell_large_graphic_colour_popup_pane_g

0x0ae5,	// (0x00000ae5) cell_large_graphic_colour_popup_pane_g2_copy1

0x0aee,	// (0x00000aee) grid_highlight_pane_cp4

0x0af6,	// (0x00000af6) bg_popup_window_pane_cp8_ParamLimits

0x0af6,	// (0x00000af6) bg_popup_window_pane_cp8

0x0b11,	// (0x00000b11) popup_snote_single_text_window_g1_ParamLimits

0x0b11,	// (0x00000b11) popup_snote_single_text_window_g1

0x0b23,	// (0x00000b23) popup_snote_single_text_window_t1_ParamLimits

0x0b23,	// (0x00000b23) popup_snote_single_text_window_t1

0x0b36,	// (0x00000b36) popup_snote_single_text_window_t2_ParamLimits

0x0b36,	// (0x00000b36) popup_snote_single_text_window_t2

0x0b49,	// (0x00000b49) popup_snote_single_text_window_t3_ParamLimits

0x0b49,	// (0x00000b49) popup_snote_single_text_window_t3

0x0b82,	// (0x00000b82) popup_snote_single_text_window_t4_ParamLimits

0x0b82,	// (0x00000b82) popup_snote_single_text_window_t4

0x0bb6,	// (0x00000bb6) popup_snote_single_text_window_t5_ParamLimits

0x0bb6,	// (0x00000bb6) popup_snote_single_text_window_t5

0x0004,

0xa2b5,	// (0x0000a2b5) popup_snote_single_text_window_t_ParamLimits

0xa2b5,	// (0x0000a2b5) popup_snote_single_text_window_t

0x0be5,	// (0x00000be5) bg_popup_window_pane_cp9_ParamLimits

0x0be5,	// (0x00000be5) bg_popup_window_pane_cp9

0x0b11,	// (0x00000b11) popup_snote_single_graphic_window_g1_ParamLimits

0x0b11,	// (0x00000b11) popup_snote_single_graphic_window_g1

0x0bf3,	// (0x00000bf3) popup_snote_single_graphic_window_g2_ParamLimits

0x0bf3,	// (0x00000bf3) popup_snote_single_graphic_window_g2

0x0001,

0xa2c0,	// (0x0000a2c0) popup_snote_single_graphic_window_g_ParamLimits

0xa2c0,	// (0x0000a2c0) popup_snote_single_graphic_window_g

0x0bff,	// (0x00000bff) popup_snote_single_graphic_window_t1_ParamLimits

0x0bff,	// (0x00000bff) popup_snote_single_graphic_window_t1

0x0c12,	// (0x00000c12) popup_snote_single_graphic_window_t2_ParamLimits

0x0c12,	// (0x00000c12) popup_snote_single_graphic_window_t2

0x0b49,	// (0x00000b49) popup_snote_single_graphic_window_t3_ParamLimits

0x0b49,	// (0x00000b49) popup_snote_single_graphic_window_t3

0x0b82,	// (0x00000b82) popup_snote_single_graphic_window_t4_ParamLimits

0x0b82,	// (0x00000b82) popup_snote_single_graphic_window_t4

0x0bb6,	// (0x00000bb6) popup_snote_single_graphic_window_t5_ParamLimits

0x0bb6,	// (0x00000bb6) popup_snote_single_graphic_window_t5

0x0004,

0xa2c5,	// (0x0000a2c5) popup_snote_single_graphic_window_t_ParamLimits

0xa2c5,	// (0x0000a2c5) popup_snote_single_graphic_window_t

0x4e27,	// (0x00004e27) grid_graphic_popup_pane_ParamLimits

0x4e27,	// (0x00004e27) grid_graphic_popup_pane

0x4e4b,	// (0x00004e4b) listscroll_popup_graphic_pane_g1_ParamLimits

0x4e4b,	// (0x00004e4b) listscroll_popup_graphic_pane_g1

0xca26,	// (0x0000ca26) listscroll_popup_graphic_pane_g2_ParamLimits

0xca26,	// (0x0000ca26) listscroll_popup_graphic_pane_g2

0x0001,

0xe6b7,	// (0x0000e6b7) listscroll_popup_graphic_pane_g_ParamLimits

0xe6b7,	// (0x0000e6b7) listscroll_popup_graphic_pane_g

0x4e73,	// (0x00004e73) scroll_pane_cp5

0xc9e9,	// (0x0000c9e9) cell_graphic_popup_pane_ParamLimits

0xc9e9,	// (0x0000c9e9) cell_graphic_popup_pane

0x4db1,	// (0x00004db1) cell_graphic_popup_pane_g1

0x4db9,	// (0x00004db9) cell_graphic_popup_pane_g2

0x0ae5,	// (0x00000ae5) cell_graphic_popup_pane_g3

0x0002,

0xa6b3,	// (0x0000a6b3) cell_graphic_popup_pane_g

0x4dc2,	// (0x00004dc2) cell_graphic_popup_pane_t2

0x0aee,	// (0x00000aee) grid_highlight_pane_cp3

0x0c37,	// (0x00000c37) list_gen_pane_ParamLimits

0x0c37,	// (0x00000c37) list_gen_pane

0x0c69,	// (0x00000c69) scroll_pane

0xc9a6,	// (0x0000c9a6) bg_list_pane_g1_ParamLimits

0xc9a6,	// (0x0000c9a6) bg_list_pane_g1

0x4d38,	// (0x00004d38) bg_list_pane_g2_ParamLimits

0x4d38,	// (0x00004d38) bg_list_pane_g2

0x4d4b,	// (0x00004d4b) bg_list_pane_g3_ParamLimits

0x4d4b,	// (0x00004d4b) bg_list_pane_g3

0x4d5d,	// (0x00004d5d) bg_list_pane_g4_ParamLimits

0x4d5d,	// (0x00004d5d) bg_list_pane_g4

0xc9c1,	// (0x0000c9c1) bg_list_pane_g5_ParamLimits

0xc9c1,	// (0x0000c9c1) bg_list_pane_g5

0x0004,

0xe6ac,	// (0x0000e6ac) bg_list_pane_g_ParamLimits

0xe6ac,	// (0x0000e6ac) bg_list_pane_g

0xc950,	// (0x0000c950) list_double2_graphic_large_graphic_pane_ParamLimits

0xc950,	// (0x0000c950) list_double2_graphic_large_graphic_pane

0xc950,	// (0x0000c950) list_double2_graphic_pane_ParamLimits

0xc950,	// (0x0000c950) list_double2_graphic_pane

0xc950,	// (0x0000c950) list_double2_large_graphic_pane_ParamLimits

0xc950,	// (0x0000c950) list_double2_large_graphic_pane

0xc950,	// (0x0000c950) list_double2_pane_ParamLimits

0xc950,	// (0x0000c950) list_double2_pane

0xc950,	// (0x0000c950) list_double_graphic_heading_pane_ParamLimits

0xc950,	// (0x0000c950) list_double_graphic_heading_pane

0xc950,	// (0x0000c950) list_double_graphic_pane_ParamLimits

0xc950,	// (0x0000c950) list_double_graphic_pane

0xc950,	// (0x0000c950) list_double_heading_pane_ParamLimits

0xc950,	// (0x0000c950) list_double_heading_pane

0xc950,	// (0x0000c950) list_double_large_graphic_pane_ParamLimits

0xc950,	// (0x0000c950) list_double_large_graphic_pane

0xc950,	// (0x0000c950) list_double_number_pane_ParamLimits

0xc950,	// (0x0000c950) list_double_number_pane

0xc950,	// (0x0000c950) list_double_pane_ParamLimits

0xc950,	// (0x0000c950) list_double_pane

0xc950,	// (0x0000c950) list_double_time_pane_ParamLimits

0xc950,	// (0x0000c950) list_double_time_pane

0xc950,	// (0x0000c950) list_setting_number_pane_ParamLimits

0xc950,	// (0x0000c950) list_setting_number_pane

0xc950,	// (0x0000c950) list_setting_pane_ParamLimits

0xc950,	// (0x0000c950) list_setting_pane

0xc961,	// (0x0000c961) list_single_2graphic_pane_ParamLimits

0xc961,	// (0x0000c961) list_single_2graphic_pane

0xc961,	// (0x0000c961) list_single_graphic_heading_pane_ParamLimits

0xc961,	// (0x0000c961) list_single_graphic_heading_pane

0xc961,	// (0x0000c961) list_single_graphic_pane_ParamLimits

0xc961,	// (0x0000c961) list_single_graphic_pane

0xc961,	// (0x0000c961) list_single_heading_pane_ParamLimits

0xc961,	// (0x0000c961) list_single_heading_pane

0xc961,	// (0x0000c961) list_single_large_graphic_pane_ParamLimits

0xc961,	// (0x0000c961) list_single_large_graphic_pane

0xc961,	// (0x0000c961) list_single_number_heading_pane_ParamLimits

0xc961,	// (0x0000c961) list_single_number_heading_pane

0xc961,	// (0x0000c961) list_single_number_pane_ParamLimits

0xc961,	// (0x0000c961) list_single_number_pane

0xc961,	// (0x0000c961) list_single_pane_ParamLimits

0xc961,	// (0x0000c961) list_single_pane

0x027d,	// (0x0000027d) list_highlight_pane_cp1

0x2325,	// (0x00002325) list_single_pane_g1_ParamLimits

0x2325,	// (0x00002325) list_single_pane_g1

0x3253,	// (0x00003253) list_single_pane_g2_ParamLimits

0x3253,	// (0x00003253) list_single_pane_g2

0x0001,

0xa4e9,	// (0x0000a4e9) list_single_pane_g_ParamLimits

0xa4e9,	// (0x0000a4e9) list_single_pane_g

0x55c2,	// (0x000055c2) list_single_pane_t1_ParamLimits

0x55c2,	// (0x000055c2) list_single_pane_t1

0x2325,	// (0x00002325) list_single_number_pane_g1_ParamLimits

0x2325,	// (0x00002325) list_single_number_pane_g1

0x3253,	// (0x00003253) list_single_number_pane_g2_ParamLimits

0x3253,	// (0x00003253) list_single_number_pane_g2

0x0001,

0xa4e9,	// (0x0000a4e9) list_single_number_pane_g_ParamLimits

0xa4e9,	// (0x0000a4e9) list_single_number_pane_g

0x333f,	// (0x0000333f) list_single_number_pane_t1_ParamLimits

0x333f,	// (0x0000333f) list_single_number_pane_t1

0xc788,	// (0x0000c788) list_single_number_pane_t2_ParamLimits

0xc788,	// (0x0000c788) list_single_number_pane_t2

0x0001,

0xe66d,	// (0x0000e66d) list_single_number_pane_t_ParamLimits

0xe66d,	// (0x0000e66d) list_single_number_pane_t

0xb186,	// (0x0000b186) list_single_graphic_pane_g1_ParamLimits

0xb186,	// (0x0000b186) list_single_graphic_pane_g1

0x2325,	// (0x00002325) list_single_graphic_pane_g2_ParamLimits

0x2325,	// (0x00002325) list_single_graphic_pane_g2

0x3253,	// (0x00003253) list_single_graphic_pane_g3_ParamLimits

0x3253,	// (0x00003253) list_single_graphic_pane_g3

0x0002,

0xe50d,	// (0x0000e50d) list_single_graphic_pane_g_ParamLimits

0xe50d,	// (0x0000e50d) list_single_graphic_pane_g

0xb192,	// (0x0000b192) list_single_graphic_pane_t1_ParamLimits

0xb192,	// (0x0000b192) list_single_graphic_pane_t1

0x2325,	// (0x00002325) list_single_heading_pane_g1_ParamLimits

0x2325,	// (0x00002325) list_single_heading_pane_g1

0x3253,	// (0x00003253) list_single_heading_pane_g2_ParamLimits

0x3253,	// (0x00003253) list_single_heading_pane_g2

0x0001,

0xa4e9,	// (0x0000a4e9) list_single_heading_pane_g_ParamLimits

0xa4e9,	// (0x0000a4e9) list_single_heading_pane_g

0xb1a8,	// (0x0000b1a8) list_single_heading_pane_t1_ParamLimits

0xb1a8,	// (0x0000b1a8) list_single_heading_pane_t1

0xb1be,	// (0x0000b1be) list_single_heading_pane_t2_ParamLimits

0xb1be,	// (0x0000b1be) list_single_heading_pane_t2

0x0001,

0xe514,	// (0x0000e514) list_single_heading_pane_t_ParamLimits

0xe514,	// (0x0000e514) list_single_heading_pane_t

0x2325,	// (0x00002325) list_single_number_heading_pane_g1_ParamLimits

0x2325,	// (0x00002325) list_single_number_heading_pane_g1

0x3253,	// (0x00003253) list_single_number_heading_pane_g2_ParamLimits

0x3253,	// (0x00003253) list_single_number_heading_pane_g2

0x0001,

0xa4e9,	// (0x0000a4e9) list_single_number_heading_pane_g_ParamLimits

0xa4e9,	// (0x0000a4e9) list_single_number_heading_pane_g

0xb1a8,	// (0x0000b1a8) list_single_number_heading_pane_t1_ParamLimits

0xb1a8,	// (0x0000b1a8) list_single_number_heading_pane_t1

0x5576,	// (0x00005576) list_single_number_heading_pane_t2_ParamLimits

0x5576,	// (0x00005576) list_single_number_heading_pane_t2

0x5588,	// (0x00005588) list_single_number_heading_pane_t3_ParamLimits

0x5588,	// (0x00005588) list_single_number_heading_pane_t3

0x0002,

0xe519,	// (0x0000e519) list_single_number_heading_pane_t_ParamLimits

0xe519,	// (0x0000e519) list_single_number_heading_pane_t

0x3333,	// (0x00003333) list_single_graphic_heading_pane_g1_ParamLimits

0x3333,	// (0x00003333) list_single_graphic_heading_pane_g1

0xb1d0,	// (0x0000b1d0) list_single_graphic_heading_pane_g4_ParamLimits

0xb1d0,	// (0x0000b1d0) list_single_graphic_heading_pane_g4

0x3253,	// (0x00003253) list_single_graphic_heading_pane_g5_ParamLimits

0x3253,	// (0x00003253) list_single_graphic_heading_pane_g5

0x0002,

0xe520,	// (0x0000e520) list_single_graphic_heading_pane_g_ParamLimits

0xe520,	// (0x0000e520) list_single_graphic_heading_pane_g

0xb1a8,	// (0x0000b1a8) list_single_graphic_heading_pane_t1_ParamLimits

0xb1a8,	// (0x0000b1a8) list_single_graphic_heading_pane_t1

0xb1e1,	// (0x0000b1e1) list_single_graphic_heading_pane_t2_ParamLimits

0xb1e1,	// (0x0000b1e1) list_single_graphic_heading_pane_t2

0x0001,

0xe527,	// (0x0000e527) list_single_graphic_heading_pane_t_ParamLimits

0xe527,	// (0x0000e527) list_single_graphic_heading_pane_t

0x55d8,	// (0x000055d8) list_single_large_graphic_pane_g1_ParamLimits

0x55d8,	// (0x000055d8) list_single_large_graphic_pane_g1

0x2325,	// (0x00002325) list_single_large_graphic_pane_g2_ParamLimits

0x2325,	// (0x00002325) list_single_large_graphic_pane_g2

0x3253,	// (0x00003253) list_single_large_graphic_pane_g3_ParamLimits

0x3253,	// (0x00003253) list_single_large_graphic_pane_g3

0x0002,

0xa751,	// (0x0000a751) list_single_large_graphic_pane_g_ParamLimits

0xa751,	// (0x0000a751) list_single_large_graphic_pane_g

0x3b0e,	// (0x00003b0e) wait_border_pane_g2_copy1

0xb1f3,	// (0x0000b1f3) list_single_large_graphic_pane_g4_cp2

0x55e4,	// (0x000055e4) list_single_large_graphic_pane_t1_ParamLimits

0x55e4,	// (0x000055e4) list_single_large_graphic_pane_t1

0x124c,	// (0x0000124c) list_double_pane_g1_ParamLimits

0x124c,	// (0x0000124c) list_double_pane_g1

0xb1fb,	// (0x0000b1fb) list_double_pane_g2_ParamLimits

0xb1fb,	// (0x0000b1fb) list_double_pane_g2

0x0001,

0xe52c,	// (0x0000e52c) list_double_pane_g_ParamLimits

0xe52c,	// (0x0000e52c) list_double_pane_g

0x70c5,	// (0x000070c5) list_double_pane_t1_ParamLimits

0x70c5,	// (0x000070c5) list_double_pane_t1

0xb207,	// (0x0000b207) list_double_pane_t2_ParamLimits

0xb207,	// (0x0000b207) list_double_pane_t2

0x0001,

0xe531,	// (0x0000e531) list_double_pane_t_ParamLimits

0xe531,	// (0x0000e531) list_double_pane_t

0xb219,	// (0x0000b219) list_double2_pane_g1_ParamLimits

0xb219,	// (0x0000b219) list_double2_pane_g1

0xb22a,	// (0x0000b22a) list_double2_pane_g2_ParamLimits

0xb22a,	// (0x0000b22a) list_double2_pane_g2

0x0001,

0xe536,	// (0x0000e536) list_double2_pane_g_ParamLimits

0xe536,	// (0x0000e536) list_double2_pane_g

0xb236,	// (0x0000b236) list_double2_pane_t1_ParamLimits

0xb236,	// (0x0000b236) list_double2_pane_t1

0xb24c,	// (0x0000b24c) list_double2_pane_t2_ParamLimits

0xb24c,	// (0x0000b24c) list_double2_pane_t2

0x0001,

0xe53b,	// (0x0000e53b) list_double2_pane_t_ParamLimits

0xe53b,	// (0x0000e53b) list_double2_pane_t

0x124c,	// (0x0000124c) list_double_number_pane_g1_ParamLimits

0x124c,	// (0x0000124c) list_double_number_pane_g1

0xb1fb,	// (0x0000b1fb) list_double_number_pane_g2_ParamLimits

0xb1fb,	// (0x0000b1fb) list_double_number_pane_g2

0x0001,

0xe52c,	// (0x0000e52c) list_double_number_pane_g_ParamLimits

0xe52c,	// (0x0000e52c) list_double_number_pane_g

0xb25e,	// (0x0000b25e) list_double_number_pane_t1_ParamLimits

0xb25e,	// (0x0000b25e) list_double_number_pane_t1

0xb270,	// (0x0000b270) list_double_number_pane_t2_ParamLimits

0xb270,	// (0x0000b270) list_double_number_pane_t2

0xb286,	// (0x0000b286) list_double_number_pane_t3_ParamLimits

0xb286,	// (0x0000b286) list_double_number_pane_t3

0x0002,

0xe540,	// (0x0000e540) list_double_number_pane_t_ParamLimits

0xe540,	// (0x0000e540) list_double_number_pane_t

0xb298,	// (0x0000b298) list_double_graphic_pane_g1_ParamLimits

0xb298,	// (0x0000b298) list_double_graphic_pane_g1

0xb2a4,	// (0x0000b2a4) list_double_graphic_pane_g2_ParamLimits

0xb2a4,	// (0x0000b2a4) list_double_graphic_pane_g2

0xb2b3,	// (0x0000b2b3) list_double_graphic_pane_g3_ParamLimits

0xb2b3,	// (0x0000b2b3) list_double_graphic_pane_g3

0x0003,

0xe547,	// (0x0000e547) list_double_graphic_pane_g_ParamLimits

0xe547,	// (0x0000e547) list_double_graphic_pane_g

0xb2cb,	// (0x0000b2cb) list_double_graphic_pane_t1_ParamLimits

0xb2cb,	// (0x0000b2cb) list_double_graphic_pane_t1

0xb2e1,	// (0x0000b2e1) list_double_graphic_pane_t2_ParamLimits

0xb2e1,	// (0x0000b2e1) list_double_graphic_pane_t2

0x0001,

0xe550,	// (0x0000e550) list_double_graphic_pane_t_ParamLimits

0xe550,	// (0x0000e550) list_double_graphic_pane_t

0xb2f3,	// (0x0000b2f3) list_double2_graphic_pane_g1_ParamLimits

0xb2f3,	// (0x0000b2f3) list_double2_graphic_pane_g1

0x221e,	// (0x0000221e) list_double2_graphic_pane_g2_ParamLimits

0x221e,	// (0x0000221e) list_double2_graphic_pane_g2

0xb22a,	// (0x0000b22a) list_double2_graphic_pane_g3_ParamLimits

0xb22a,	// (0x0000b22a) list_double2_graphic_pane_g3

0x0002,

0xe555,	// (0x0000e555) list_double2_graphic_pane_g_ParamLimits

0xe555,	// (0x0000e555) list_double2_graphic_pane_g

0xb2ff,	// (0x0000b2ff) list_double2_graphic_pane_t1_ParamLimits

0xb2ff,	// (0x0000b2ff) list_double2_graphic_pane_t1

0xb315,	// (0x0000b315) list_double2_graphic_pane_t2_ParamLimits

0xb315,	// (0x0000b315) list_double2_graphic_pane_t2

0x0001,

0xe55c,	// (0x0000e55c) list_double2_graphic_pane_t_ParamLimits

0xe55c,	// (0x0000e55c) list_double2_graphic_pane_t

0xb327,	// (0x0000b327) list_double_large_graphic_pane_g1_ParamLimits

0xb327,	// (0x0000b327) list_double_large_graphic_pane_g1

0xb346,	// (0x0000b346) list_double_large_graphic_pane_g2_ParamLimits

0xb346,	// (0x0000b346) list_double_large_graphic_pane_g2

0xb1fb,	// (0x0000b1fb) list_double_large_graphic_pane_g3_ParamLimits

0xb1fb,	// (0x0000b1fb) list_double_large_graphic_pane_g3

0xb357,	// (0x0000b357) list_double_large_graphic_pane_g4_ParamLimits

0xb357,	// (0x0000b357) list_double_large_graphic_pane_g4

0x0004,

0xe561,	// (0x0000e561) list_double_large_graphic_pane_g_ParamLimits

0xe561,	// (0x0000e561) list_double_large_graphic_pane_g

0xb368,	// (0x0000b368) list_double_large_graphic_pane_t1_ParamLimits

0xb368,	// (0x0000b368) list_double_large_graphic_pane_t1

0xb381,	// (0x0000b381) list_double_large_graphic_pane_t2_ParamLimits

0xb381,	// (0x0000b381) list_double_large_graphic_pane_t2

0x0001,

0xe56c,	// (0x0000e56c) list_double_large_graphic_pane_t_ParamLimits

0xe56c,	// (0x0000e56c) list_double_large_graphic_pane_t

0xb393,	// (0x0000b393) list_double2_large_graphic_pane_g1_ParamLimits

0xb393,	// (0x0000b393) list_double2_large_graphic_pane_g1

0xb219,	// (0x0000b219) list_double2_large_graphic_pane_g2_ParamLimits

0xb219,	// (0x0000b219) list_double2_large_graphic_pane_g2

0xb22a,	// (0x0000b22a) list_double2_large_graphic_pane_g3_ParamLimits

0xb22a,	// (0x0000b22a) list_double2_large_graphic_pane_g3

0x0002,

0xe571,	// (0x0000e571) list_double2_large_graphic_pane_g_ParamLimits

0xe571,	// (0x0000e571) list_double2_large_graphic_pane_g

0xb39f,	// (0x0000b39f) list_double2_large_graphic_pane_t1_ParamLimits

0xb39f,	// (0x0000b39f) list_double2_large_graphic_pane_t1

0xb3b5,	// (0x0000b3b5) list_double2_large_graphic_pane_t2_ParamLimits

0xb3b5,	// (0x0000b3b5) list_double2_large_graphic_pane_t2

0x0001,

0xe578,	// (0x0000e578) list_double2_large_graphic_pane_t_ParamLimits

0xe578,	// (0x0000e578) list_double2_large_graphic_pane_t

0xb3c7,	// (0x0000b3c7) list_double_heading_pane_g1_ParamLimits

0xb3c7,	// (0x0000b3c7) list_double_heading_pane_g1

0x0de1,	// (0x00000de1) list_double_heading_pane_g2_ParamLimits

0x0de1,	// (0x00000de1) list_double_heading_pane_g2

0x0001,

0xe57d,	// (0x0000e57d) list_double_heading_pane_g_ParamLimits

0xe57d,	// (0x0000e57d) list_double_heading_pane_g

0xb3d8,	// (0x0000b3d8) list_double_heading_pane_t1_ParamLimits

0xb3d8,	// (0x0000b3d8) list_double_heading_pane_t1

0xb24c,	// (0x0000b24c) list_double_heading_pane_t2_ParamLimits

0xb24c,	// (0x0000b24c) list_double_heading_pane_t2

0x0001,

0xe582,	// (0x0000e582) list_double_heading_pane_t_ParamLimits

0xe582,	// (0x0000e582) list_double_heading_pane_t

0x0fce,	// (0x00000fce) list_double_graphic_heading_pane_g1_ParamLimits

0x0fce,	// (0x00000fce) list_double_graphic_heading_pane_g1

0xb3c7,	// (0x0000b3c7) list_double_graphic_heading_pane_g2_ParamLimits

0xb3c7,	// (0x0000b3c7) list_double_graphic_heading_pane_g2

0x0de1,	// (0x00000de1) list_double_graphic_heading_pane_g3_ParamLimits

0x0de1,	// (0x00000de1) list_double_graphic_heading_pane_g3

0x0002,

0xe587,	// (0x0000e587) list_double_graphic_heading_pane_g_ParamLimits

0xe587,	// (0x0000e587) list_double_graphic_heading_pane_g

0xb3ee,	// (0x0000b3ee) list_double_graphic_heading_pane_t1_ParamLimits

0xb3ee,	// (0x0000b3ee) list_double_graphic_heading_pane_t1

0xb315,	// (0x0000b315) list_double_graphic_heading_pane_t2_ParamLimits

0xb315,	// (0x0000b315) list_double_graphic_heading_pane_t2

0x0001,

0xe58e,	// (0x0000e58e) list_double_graphic_heading_pane_t_ParamLimits

0xe58e,	// (0x0000e58e) list_double_graphic_heading_pane_t

0xb346,	// (0x0000b346) list_double_time_pane_g1_ParamLimits

0xb346,	// (0x0000b346) list_double_time_pane_g1

0xb1fb,	// (0x0000b1fb) list_double_time_pane_g2_ParamLimits

0xb1fb,	// (0x0000b1fb) list_double_time_pane_g2

0x0001,

0xe593,	// (0x0000e593) list_double_time_pane_g_ParamLimits

0xe593,	// (0x0000e593) list_double_time_pane_g

0xb404,	// (0x0000b404) list_double_time_pane_t1_ParamLimits

0xb404,	// (0x0000b404) list_double_time_pane_t1

0xb41a,	// (0x0000b41a) list_double_time_pane_t2_ParamLimits

0xb41a,	// (0x0000b41a) list_double_time_pane_t2

0xb42c,	// (0x0000b42c) list_double_time_pane_t3_ParamLimits

0xb42c,	// (0x0000b42c) list_double_time_pane_t3

0xb43e,	// (0x0000b43e) list_double_time_pane_t4_ParamLimits

0xb43e,	// (0x0000b43e) list_double_time_pane_t4

0x0003,

0xe598,	// (0x0000e598) list_double_time_pane_t_ParamLimits

0xe598,	// (0x0000e598) list_double_time_pane_t

0x221e,	// (0x0000221e) list_setting_pane_g1_ParamLimits

0x221e,	// (0x0000221e) list_setting_pane_g1

0xb22a,	// (0x0000b22a) list_setting_pane_g2_ParamLimits

0xb22a,	// (0x0000b22a) list_setting_pane_g2

0x0001,

0xe5a1,	// (0x0000e5a1) list_setting_pane_g_ParamLimits

0xe5a1,	// (0x0000e5a1) list_setting_pane_g

0xb450,	// (0x0000b450) list_setting_pane_t1_ParamLimits

0xb450,	// (0x0000b450) list_setting_pane_t1

0xb467,	// (0x0000b467) list_setting_pane_t2_ParamLimits

0xb467,	// (0x0000b467) list_setting_pane_t2

0x0002,

0xe5a6,	// (0x0000e5a6) list_setting_pane_t_ParamLimits

0xe5a6,	// (0x0000e5a6) list_setting_pane_t

0xb4a4,	// (0x0000b4a4) set_value_pane_cp_ParamLimits

0xb4a4,	// (0x0000b4a4) set_value_pane_cp

0x221e,	// (0x0000221e) list_setting_number_pane_g1_ParamLimits

0x221e,	// (0x0000221e) list_setting_number_pane_g1

0xb22a,	// (0x0000b22a) list_setting_number_pane_g2_ParamLimits

0xb22a,	// (0x0000b22a) list_setting_number_pane_g2

0x0001,

0xe5a1,	// (0x0000e5a1) list_setting_number_pane_g_ParamLimits

0xe5a1,	// (0x0000e5a1) list_setting_number_pane_g

0xb4b0,	// (0x0000b4b0) list_setting_number_pane_t1_ParamLimits

0xb4b0,	// (0x0000b4b0) list_setting_number_pane_t1

0xb4c4,	// (0x0000b4c4) list_setting_number_pane_t2_ParamLimits

0xb4c4,	// (0x0000b4c4) list_setting_number_pane_t2

0xb4db,	// (0x0000b4db) list_setting_number_pane_t3_ParamLimits

0xb4db,	// (0x0000b4db) list_setting_number_pane_t3

0x0003,

0xe5ad,	// (0x0000e5ad) list_setting_number_pane_t_ParamLimits

0xe5ad,	// (0x0000e5ad) list_setting_number_pane_t

0xb4a4,	// (0x0000b4a4) set_value_pane_ParamLimits

0xb4a4,	// (0x0000b4a4) set_value_pane

0x1106,	// (0x00001106) bg_set_opt_pane_ParamLimits

0x1106,	// (0x00001106) bg_set_opt_pane

0x1127,	// (0x00001127) set_value_pane_t1

0x1135,	// (0x00001135) slider_set_pane_cp3

0xb51e,	// (0x0000b51e) volume_small_pane_cp

0x1147,	// (0x00001147) list_form_gen_pane

0x1150,	// (0x00001150) scroll_pane_cp8

0xb527,	// (0x0000b527) form_field_data_pane_ParamLimits

0xb527,	// (0x0000b527) form_field_data_pane

0xb53e,	// (0x0000b53e) form_field_data_wide_pane_ParamLimits

0xb53e,	// (0x0000b53e) form_field_data_wide_pane

0x11a0,	// (0x000011a0) form_field_popup_pane_ParamLimits

0x11a0,	// (0x000011a0) form_field_popup_pane

0x11b8,	// (0x000011b8) form_field_popup_wide_pane_ParamLimits

0x11b8,	// (0x000011b8) form_field_popup_wide_pane

0x11cf,	// (0x000011cf) form_field_slider_pane_ParamLimits

0x11cf,	// (0x000011cf) form_field_slider_pane

0x11e2,	// (0x000011e2) form_field_slider_wide_pane_ParamLimits

0x11e2,	// (0x000011e2) form_field_slider_wide_pane

0x11f5,	// (0x000011f5) data_form_pane

0xb566,	// (0x0000b566) form_field_data_pane_t1

0x1221,	// (0x00001221) input_focus_pane

0x122f,	// (0x0000122f) data_form_wide_pane

0x126c,	// (0x0000126c) form_field_data_wide_pane_t1

0x0b03,	// (0x00000b03) input_focus_pane_cp6

0xb57e,	// (0x0000b57e) form_field_popup_pane_t1

0x1221,	// (0x00001221) input_focus_pane_cp7

0x12a6,	// (0x000012a6) list_form_pane

0x12ba,	// (0x000012ba) form_field_popup_wide_pane_t1

0x1221,	// (0x00001221) input_focus_pane_cp8

0x12cf,	// (0x000012cf) list_form_wide_pane

0xb59e,	// (0x0000b59e) form_field_slider_pane_t1_ParamLimits

0xb59e,	// (0x0000b59e) form_field_slider_pane_t1

0xb5b4,	// (0x0000b5b4) form_field_slider_pane_t2_ParamLimits

0xb5b4,	// (0x0000b5b4) form_field_slider_pane_t2

0x0001,

0xe5b6,	// (0x0000e5b6) form_field_slider_pane_t_ParamLimits

0xe5b6,	// (0x0000e5b6) form_field_slider_pane_t

0x07bb,	// (0x000007bb) input_focus_pane_cp9_ParamLimits

0x07bb,	// (0x000007bb) input_focus_pane_cp9

0xb5c9,	// (0x0000b5c9) slider_cont_pane_ParamLimits

0xb5c9,	// (0x0000b5c9) slider_cont_pane

0x1322,	// (0x00001322) form_field_slider_wide_pane_t1_ParamLimits

0x1322,	// (0x00001322) form_field_slider_wide_pane_t1

0x1334,	// (0x00001334) form_field_slider_wide_pane_t2_ParamLimits

0x1334,	// (0x00001334) form_field_slider_wide_pane_t2

0x0001,

0xa391,	// (0x0000a391) form_field_slider_wide_pane_t_ParamLimits

0xa391,	// (0x0000a391) form_field_slider_wide_pane_t

0x07bb,	// (0x000007bb) input_focus_pane_cp10_ParamLimits

0x07bb,	// (0x000007bb) input_focus_pane_cp10

0xb5dd,	// (0x0000b5dd) slider_cont_pane_cp1_ParamLimits

0xb5dd,	// (0x0000b5dd) slider_cont_pane_cp1

0xb5f1,	// (0x0000b5f1) slider_form_pane_cp

0x1362,	// (0x00001362) input_focus_pane_g1

0x136a,	// (0x0000136a) input_focus_pane_g2

0x1372,	// (0x00001372) input_focus_pane_g3

0x137a,	// (0x0000137a) input_focus_pane_g4

0x1382,	// (0x00001382) input_focus_pane_g5

0x138a,	// (0x0000138a) input_focus_pane_g6

0x1392,	// (0x00001392) input_focus_pane_g7

0x139a,	// (0x0000139a) input_focus_pane_g8

0x13a2,	// (0x000013a2) input_focus_pane_g9

0x002a,	// (0x0000002a) input_focus_pane_g10

0x0009,

0xa396,	// (0x0000a396) input_focus_pane_g

0x3b17,	// (0x00003b17) wait_border_pane_g3_copy1

0xb5f9,	// (0x0000b5f9) data_form_pane_t1

0x002a,	// (0x0000002a) wait_anim_pane_g1_copy1

0xc935,	// (0x0000c935) data_form_wide_pane_t1

0x13c4,	// (0x000013c4) list_form_graphic_pane_cp_ParamLimits

0x13c4,	// (0x000013c4) list_form_graphic_pane_cp

0x4be5,	// (0x00004be5) slider_form_pane_g1

0x4bee,	// (0x00004bee) slider_form_pane_g2

0x0006,

0xe69d,	// (0x0000e69d) slider_form_pane_g

0x13c4,	// (0x000013c4) list_form_graphic_pane_ParamLimits

0x13c4,	// (0x000013c4) list_form_graphic_pane

0x13d5,	// (0x000013d5) list_form_graphic_pane_g1

0x13dd,	// (0x000013dd) list_form_graphic_pane_t1_ParamLimits

0x13dd,	// (0x000013dd) list_form_graphic_pane_t1

0x04a3,	// (0x000004a3) list_highlight_pane_cp5_ParamLimits

0x04a3,	// (0x000004a3) list_highlight_pane_cp5

0xb611,	// (0x0000b611) find_pane_g1

0x13fb,	// (0x000013fb) input_find_pane

0x1404,	// (0x00001404) input_find_pane_g1_ParamLimits

0x1404,	// (0x00001404) input_find_pane_g1

0x1410,	// (0x00001410) input_find_pane_t1_ParamLimits

0x1410,	// (0x00001410) input_find_pane_t1

0x1425,	// (0x00001425) input_find_pane_t2_ParamLimits

0x1425,	// (0x00001425) input_find_pane_t2

0x0001,

0xa3ab,	// (0x0000a3ab) input_find_pane_t_ParamLimits

0xa3ab,	// (0x0000a3ab) input_find_pane_t

0x143a,	// (0x0000143a) input_focus_pane_cp5_ParamLimits

0x143a,	// (0x0000143a) input_focus_pane_cp5

0x1454,	// (0x00001454) bg_popup_window_pane_cp2_ParamLimits

0x1454,	// (0x00001454) bg_popup_window_pane_cp2

0x1461,	// (0x00001461) listscroll_menu_pane_ParamLimits

0x1461,	// (0x00001461) listscroll_menu_pane

0xb626,	// (0x0000b626) popup_submenu_window_ParamLimits

0xb626,	// (0x0000b626) popup_submenu_window

0x1491,	// (0x00001491) find_popup_pane_g1

0x1499,	// (0x00001499) input_popup_find_pane_cp

0x143a,	// (0x0000143a) input_focus_pane_cp4_ParamLimits

0x143a,	// (0x0000143a) input_focus_pane_cp4

0x14af,	// (0x000014af) input_popup_find_pane_t1_ParamLimits

0x14af,	// (0x000014af) input_popup_find_pane_t1

0x027d,	// (0x0000027d) bg_popup_sub_pane_cp

0x14dd,	// (0x000014dd) listscroll_popup_sub_pane

0x14e5,	// (0x000014e5) list_submenu_pane_ParamLimits

0x14e5,	// (0x000014e5) list_submenu_pane

0x14f6,	// (0x000014f6) scroll_pane_cp4

0x14fe,	// (0x000014fe) list_single_popup_submenu_pane_ParamLimits

0x14fe,	// (0x000014fe) list_single_popup_submenu_pane

0x1511,	// (0x00001511) list_single_popup_submenu_pane_g1

0x1519,	// (0x00001519) list_single_popup_submenu_pane_t1_ParamLimits

0x1519,	// (0x00001519) list_single_popup_submenu_pane_t1

0x07bb,	// (0x000007bb) bg_active_tab_pane_cp1_ParamLimits

0x07bb,	// (0x000007bb) bg_active_tab_pane_cp1

0x152e,	// (0x0000152e) tabs_2_active_pane_g1

0xb656,	// (0x0000b656) tabs_2_active_pane_t1

0x07bb,	// (0x000007bb) bg_passive_tab_pane_cp1_ParamLimits

0x07bb,	// (0x000007bb) bg_passive_tab_pane_cp1

0x152e,	// (0x0000152e) tabs_2_passive_pane_g1

0xb656,	// (0x0000b656) tabs_2_passive_pane_t1

0x04a3,	// (0x000004a3) bg_active_tab_pane_cp4

0xb668,	// (0x0000b668) tabs_2_long_active_pane_t1

0x2966,	// (0x00002966) bg_passive_tab_pane_cp4

0x341c,	// (0x0000341c) list_single_midp_graphic_pane_g4_ParamLimits

0x04a3,	// (0x000004a3) bg_active_tab_pane_cp5

0xb67b,	// (0x0000b67b) tabs_3_long_active_pane_t1

0x2966,	// (0x00002966) bg_passive_tab_pane_cp5

0x341c,	// (0x0000341c) list_single_midp_graphic_pane_g4

0x04a3,	// (0x000004a3) bg_popup_window_pane_cp13_ParamLimits

0x04a3,	// (0x000004a3) bg_popup_window_pane_cp13

0x1590,	// (0x00001590) listscroll_popup_fast_pane_ParamLimits

0x1590,	// (0x00001590) listscroll_popup_fast_pane

0x159f,	// (0x0000159f) grid_popup_fast_pane_ParamLimits

0x159f,	// (0x0000159f) grid_popup_fast_pane

0x15b1,	// (0x000015b1) scroll_pane_cp9_ParamLimits

0x15b1,	// (0x000015b1) scroll_pane_cp9

0x6d63,	// (0x00006d63) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x6d63,	// (0x00006d63) list_single_graphic_hl_pane_t1_cp2

0x15d5,	// (0x000015d5) input_focus_pane_cp20_ParamLimits

0x15d5,	// (0x000015d5) input_focus_pane_cp20

0x15e3,	// (0x000015e3) query_popup_data_pane_t1_ParamLimits

0x15e3,	// (0x000015e3) query_popup_data_pane_t1

0x15f6,	// (0x000015f6) query_popup_data_pane_t2_ParamLimits

0x15f6,	// (0x000015f6) query_popup_data_pane_t2

0x163c,	// (0x0000163c) query_popup_data_pane_t3_ParamLimits

0x163c,	// (0x0000163c) query_popup_data_pane_t3

0x167d,	// (0x0000167d) query_popup_data_pane_t4_ParamLimits

0x167d,	// (0x0000167d) query_popup_data_pane_t4

0x16b9,	// (0x000016b9) query_popup_data_pane_t5_ParamLimits

0x16b9,	// (0x000016b9) query_popup_data_pane_t5

0x0004,

0xa3b0,	// (0x0000a3b0) query_popup_data_pane_t_ParamLimits

0xa3b0,	// (0x0000a3b0) query_popup_data_pane_t

0x1362,	// (0x00001362) bg_set_opt_pane_g1

0x136a,	// (0x0000136a) bg_set_opt_pane_g2

0x1372,	// (0x00001372) bg_set_opt_pane_g3

0x137a,	// (0x0000137a) bg_set_opt_pane_g4

0x1382,	// (0x00001382) bg_set_opt_pane_g5

0x138a,	// (0x0000138a) bg_set_opt_pane_g6

0x1392,	// (0x00001392) bg_set_opt_pane_g7

0x139a,	// (0x0000139a) bg_set_opt_pane_g8

0x13a2,	// (0x000013a2) bg_set_opt_pane_g9

0x0008,

0xa3bb,	// (0x0000a3bb) bg_set_opt_pane_g

0x1f74,	// (0x00001f74) control_top_pane_stacon_ParamLimits

0x1f74,	// (0x00001f74) control_top_pane_stacon

0x1fc7,	// (0x00001fc7) signal_pane_stacon_ParamLimits

0x1fc7,	// (0x00001fc7) signal_pane_stacon

0x1fec,	// (0x00001fec) stacon_top_pane_g1_ParamLimits

0x1fec,	// (0x00001fec) stacon_top_pane_g1

0x200e,	// (0x0000200e) title_pane_stacon_ParamLimits

0x200e,	// (0x0000200e) title_pane_stacon

0x2030,	// (0x00002030) uni_indicator_pane_stacon_ParamLimits

0x2030,	// (0x00002030) uni_indicator_pane_stacon

0x2045,	// (0x00002045) battery_pane_stacon_ParamLimits

0x2045,	// (0x00002045) battery_pane_stacon

0x2085,	// (0x00002085) control_bottom_pane_stacon_ParamLimits

0x2085,	// (0x00002085) control_bottom_pane_stacon

0x20a4,	// (0x000020a4) navi_pane_stacon_ParamLimits

0x20a4,	// (0x000020a4) navi_pane_stacon

0x20c3,	// (0x000020c3) stacon_bottom_pane_g1_ParamLimits

0x20c3,	// (0x000020c3) stacon_bottom_pane_g1

0x16f0,	// (0x000016f0) aid_levels_signal_lsc_ParamLimits

0x16f0,	// (0x000016f0) aid_levels_signal_lsc

0x1707,	// (0x00001707) signal_pane_stacon_g1_ParamLimits

0x1707,	// (0x00001707) signal_pane_stacon_g1

0x171b,	// (0x0000171b) signal_pane_stacon_g2_ParamLimits

0x171b,	// (0x0000171b) signal_pane_stacon_g2

0x0001,

0xa3ce,	// (0x0000a3ce) signal_pane_stacon_g_ParamLimits

0xa3ce,	// (0x0000a3ce) signal_pane_stacon_g

0x175d,	// (0x0000175d) title_pane_stacon_t1_ParamLimits

0x175d,	// (0x0000175d) title_pane_stacon_t1

0x1782,	// (0x00001782) uni_indicator_pane_stacon_g1

0x178c,	// (0x0000178c) uni_indicator_pane_stacon_g2

0x1796,	// (0x00001796) uni_indicator_pane_stacon_g3

0x17a0,	// (0x000017a0) uni_indicator_pane_stacon_g4

0x0003,

0xa3da,	// (0x0000a3da) uni_indicator_pane_stacon_g

0x17aa,	// (0x000017aa) control_top_pane_stacon_g1

0x17b2,	// (0x000017b2) control_top_pane_stacon_t1_ParamLimits

0x17b2,	// (0x000017b2) control_top_pane_stacon_t1

0x17e9,	// (0x000017e9) aid_levels_battery_lsc_ParamLimits

0x17e9,	// (0x000017e9) aid_levels_battery_lsc

0x1801,	// (0x00001801) battery_pane_stacon_g1_ParamLimits

0x1801,	// (0x00001801) battery_pane_stacon_g1

0x1814,	// (0x00001814) battery_pane_stacon_g2_ParamLimits

0x1814,	// (0x00001814) battery_pane_stacon_g2

0x0001,

0xa3e3,	// (0x0000a3e3) battery_pane_stacon_g_ParamLimits

0xa3e3,	// (0x0000a3e3) battery_pane_stacon_g

0x184a,	// (0x0000184a) navi_icon_pane_stacon

0x185e,	// (0x0000185e) navi_navi_pane_stacon

0x184a,	// (0x0000184a) navi_text_pane_stacon

0x17aa,	// (0x000017aa) control_bottom_pane_stacon_g1

0x1872,	// (0x00001872) control_bottom_pane_stacon_t1_ParamLimits

0x1872,	// (0x00001872) control_bottom_pane_stacon_t1

0xb68d,	// (0x0000b68d) grid_app_pane_ParamLimits

0xb68d,	// (0x0000b68d) grid_app_pane

0xb6bb,	// (0x0000b6bb) scroll_pane_cp15_ParamLimits

0xb6bb,	// (0x0000b6bb) scroll_pane_cp15

0xb6ce,	// (0x0000b6ce) cell_app_pane_ParamLimits

0xb6ce,	// (0x0000b6ce) cell_app_pane

0xb709,	// (0x0000b709) cell_app_pane_g1_ParamLimits

0xb709,	// (0x0000b709) cell_app_pane_g1

0x193a,	// (0x0000193a) cell_app_pane_g2_ParamLimits

0x193a,	// (0x0000193a) cell_app_pane_g2

0x0001,

0xe5bb,	// (0x0000e5bb) cell_app_pane_g_ParamLimits

0xe5bb,	// (0x0000e5bb) cell_app_pane_g

0xb72d,	// (0x0000b72d) cell_app_pane_t1_ParamLimits

0xb72d,	// (0x0000b72d) cell_app_pane_t1

0x195d,	// (0x0000195d) grid_highlight_pane_ParamLimits

0x195d,	// (0x0000195d) grid_highlight_pane

0x1362,	// (0x00001362) cell_highlight_pane_g1

0x136a,	// (0x0000136a) cell_highlight_pane_g2

0x1372,	// (0x00001372) cell_highlight_pane_g3

0x137a,	// (0x0000137a) cell_highlight_pane_g4

0x1382,	// (0x00001382) cell_highlight_pane_g5

0x138a,	// (0x0000138a) cell_highlight_pane_g6

0x1392,	// (0x00001392) cell_highlight_pane_g7

0x139a,	// (0x0000139a) cell_highlight_pane_g8

0x13a2,	// (0x000013a2) cell_highlight_pane_g9

0x002a,	// (0x0000002a) cell_highlight_pane_g10

0x0009,

0xa396,	// (0x0000a396) cell_highlight_pane_g

0x1981,	// (0x00001981) bg_scroll_pane

0x19a0,	// (0x000019a0) scroll_handle_pane

0x19f1,	// (0x000019f1) scroll_bg_pane_g1

0x1a06,	// (0x00001a06) scroll_bg_pane_g2

0x1a1e,	// (0x00001a1e) scroll_bg_pane_g3

0x0002,

0xa3ed,	// (0x0000a3ed) scroll_bg_pane_g

0x1a33,	// (0x00001a33) scroll_handle_focus_pane_ParamLimits

0x1a33,	// (0x00001a33) scroll_handle_focus_pane

0x19f1,	// (0x000019f1) scroll_handle_pane_g1

0x1a40,	// (0x00001a40) scroll_handle_pane_g2

0x1a1e,	// (0x00001a1e) scroll_handle_pane_g3

0x0002,

0xa3f4,	// (0x0000a3f4) scroll_handle_pane_g

0x143a,	// (0x0000143a) bg_popup_sub_pane_cp21_ParamLimits

0x143a,	// (0x0000143a) bg_popup_sub_pane_cp21

0x1a54,	// (0x00001a54) popup_fep_japan_predictive_window_t1_ParamLimits

0x1a54,	// (0x00001a54) popup_fep_japan_predictive_window_t1

0x1a6b,	// (0x00001a6b) popup_fep_japan_predictive_window_t2_ParamLimits

0x1a6b,	// (0x00001a6b) popup_fep_japan_predictive_window_t2

0x1a9e,	// (0x00001a9e) popup_fep_japan_predictive_window_t3_ParamLimits

0x1a9e,	// (0x00001a9e) popup_fep_japan_predictive_window_t3

0x0002,

0xa3fb,	// (0x0000a3fb) popup_fep_japan_predictive_window_t_ParamLimits

0xa3fb,	// (0x0000a3fb) popup_fep_japan_predictive_window_t

0x027d,	// (0x0000027d) bg_popup_sub_pane_cp23

0x1ad5,	// (0x00001ad5) listscroll_japin_cand_pane

0x1add,	// (0x00001add) popup_fep_japan_candidate_window_t1

0x1aeb,	// (0x00001aeb) candidate_pane_ParamLimits

0x1aeb,	// (0x00001aeb) candidate_pane

0x1afd,	// (0x00001afd) scroll_pane_cp30

0x1b05,	// (0x00001b05) list_single_popup_jap_candidate_pane_ParamLimits

0x1b05,	// (0x00001b05) list_single_popup_jap_candidate_pane

0x027d,	// (0x0000027d) list_highlight_pane_cp30

0x1b1a,	// (0x00001b1a) list_single_popup_jap_candidate_pane_t1

0x1b29,	// (0x00001b29) level_1_signal

0x1b36,	// (0x00001b36) level_2_signal

0x1b43,	// (0x00001b43) level_3_signal

0x1b50,	// (0x00001b50) level_4_signal

0x1b5d,	// (0x00001b5d) level_5_signal

0x1b6a,	// (0x00001b6a) level_6_signal

0x1b77,	// (0x00001b77) level_7_signal

0x1b29,	// (0x00001b29) level_1_battery

0x1b36,	// (0x00001b36) level_2_battery

0x1b43,	// (0x00001b43) level_3_battery

0x1b50,	// (0x00001b50) level_4_battery

0x1b5d,	// (0x00001b5d) level_5_battery

0x1b6a,	// (0x00001b6a) level_6_battery

0x1b77,	// (0x00001b77) level_7_battery

0x1bbb,	// (0x00001bbb) list_menu_pane_ParamLimits

0x1bbb,	// (0x00001bbb) list_menu_pane

0x1bd1,	// (0x00001bd1) scroll_pane_cp25_ParamLimits

0x1bd1,	// (0x00001bd1) scroll_pane_cp25

0x1bea,	// (0x00001bea) list_double2_graphic_pane_cp2_ParamLimits

0x1bea,	// (0x00001bea) list_double2_graphic_pane_cp2

0x1bea,	// (0x00001bea) list_double2_large_graphic_pane_cp2_ParamLimits

0x1bea,	// (0x00001bea) list_double2_large_graphic_pane_cp2

0x1bea,	// (0x00001bea) list_double2_pane_cp2_ParamLimits

0x1bea,	// (0x00001bea) list_double2_pane_cp2

0x1bea,	// (0x00001bea) list_double_graphic_pane_cp2_ParamLimits

0x1bea,	// (0x00001bea) list_double_graphic_pane_cp2

0x1bea,	// (0x00001bea) list_double_large_graphic_pane_cp2_ParamLimits

0x1bea,	// (0x00001bea) list_double_large_graphic_pane_cp2

0x1bea,	// (0x00001bea) list_double_number_pane_cp2_ParamLimits

0x1bea,	// (0x00001bea) list_double_number_pane_cp2

0x1bea,	// (0x00001bea) list_double_pane_cp2_ParamLimits

0x1bea,	// (0x00001bea) list_double_pane_cp2

0xb757,	// (0x0000b757) list_single_2graphic_pane_cp2_ParamLimits

0xb757,	// (0x0000b757) list_single_2graphic_pane_cp2

0xb757,	// (0x0000b757) list_single_graphic_heading_pane_cp2_ParamLimits

0xb757,	// (0x0000b757) list_single_graphic_heading_pane_cp2

0xb757,	// (0x0000b757) list_single_graphic_pane_cp2_ParamLimits

0xb757,	// (0x0000b757) list_single_graphic_pane_cp2

0xb757,	// (0x0000b757) list_single_heading_pane_cp2_ParamLimits

0xb757,	// (0x0000b757) list_single_heading_pane_cp2

0x1c1f,	// (0x00001c1f) list_single_large_graphic_pane_cp2_ParamLimits

0x1c1f,	// (0x00001c1f) list_single_large_graphic_pane_cp2

0xb757,	// (0x0000b757) list_single_number_heading_pane_cp2_ParamLimits

0xb757,	// (0x0000b757) list_single_number_heading_pane_cp2

0xb757,	// (0x0000b757) list_single_number_pane_cp2_ParamLimits

0xb757,	// (0x0000b757) list_single_number_pane_cp2

0xb757,	// (0x0000b757) list_single_pane_cp2_ParamLimits

0xb757,	// (0x0000b757) list_single_pane_cp2

0x1ce9,	// (0x00001ce9) bg_popup_sub_pane_cp22

0x1d0b,	// (0x00001d0b) popup_side_volume_key_window_g1

0x1d2f,	// (0x00001d2f) popup_side_volume_key_window_t1

0x1d4b,	// (0x00001d4b) volume_small_pane_cp1

0x07bb,	// (0x000007bb) bg_popup_sub_pane_cp24_ParamLimits

0x07bb,	// (0x000007bb) bg_popup_sub_pane_cp24

0x1d53,	// (0x00001d53) fep_china_uni_candidate_pane_ParamLimits

0x1d53,	// (0x00001d53) fep_china_uni_candidate_pane

0x1d67,	// (0x00001d67) fep_china_uni_entry_pane

0x1d77,	// (0x00001d77) popup_fep_china_uni_window_g1

0x1d93,	// (0x00001d93) fep_china_uni_entry_pane_g1

0x1d9b,	// (0x00001d9b) fep_china_uni_entry_pane_g2

0x0001,

0xa42c,	// (0x0000a42c) fep_china_uni_entry_pane_g

0x1da3,	// (0x00001da3) fep_entry_item_pane

0x1dad,	// (0x00001dad) fep_candidate_item_pane

0x1db5,	// (0x00001db5) fep_china_uni_candidate_pane_g1

0x1dbd,	// (0x00001dbd) fep_china_uni_candidate_pane_g2

0x1dc5,	// (0x00001dc5) fep_china_uni_candidate_pane_g3

0x1dcd,	// (0x00001dcd) fep_china_uni_candidate_pane_g4

0x0003,

0xa431,	// (0x0000a431) fep_china_uni_candidate_pane_g

0x002a,	// (0x0000002a) fep_entry_item_pane_g1

0x1dd5,	// (0x00001dd5) fep_entry_item_pane_t1_ParamLimits

0x1dd5,	// (0x00001dd5) fep_entry_item_pane_t1

0x1deb,	// (0x00001deb) fep_candidate_item_pane_t1_ParamLimits

0x1deb,	// (0x00001deb) fep_candidate_item_pane_t1

0x1e00,	// (0x00001e00) fep_candidate_item_pane_t2_ParamLimits

0x1e00,	// (0x00001e00) fep_candidate_item_pane_t2

0x0001,

0xa43a,	// (0x0000a43a) fep_candidate_item_pane_t_ParamLimits

0xa43a,	// (0x0000a43a) fep_candidate_item_pane_t

0x04a3,	// (0x000004a3) list_highlight_pane_cp31_ParamLimits

0x04a3,	// (0x000004a3) list_highlight_pane_cp31

0x1e12,	// (0x00001e12) level_1_signal_lsc

0x1e1b,	// (0x00001e1b) level_2_signal_lsc

0x1e24,	// (0x00001e24) level_3_signal_lsc

0x1e2d,	// (0x00001e2d) level_4_signal_lsc

0x1e36,	// (0x00001e36) level_5_signal_lsc

0x1e3f,	// (0x00001e3f) level_6_signal_lsc

0x1e48,	// (0x00001e48) level_7_signal_lsc

0x1e48,	// (0x00001e48) level_1_battery_lsc

0x1e51,	// (0x00001e51) level_2_battery_lsc

0x1e5a,	// (0x00001e5a) level_3_battery_lsc

0x1e63,	// (0x00001e63) level_4_battery_lsc

0x1e6c,	// (0x00001e6c) level_5_battery_lsc

0x1e75,	// (0x00001e75) level_6_battery_lsc

0x1e12,	// (0x00001e12) level_7_battery_lsc

0x1e7e,	// (0x00001e7e) scroll_handle_focus_pane_g1

0x1e87,	// (0x00001e87) scroll_handle_focus_pane_g2

0x1e90,	// (0x00001e90) scroll_handle_focus_pane_g3

0x0002,

0xa43f,	// (0x0000a43f) scroll_handle_focus_pane_g

0xb7e3,	// (0x0000b7e3) list_single_2graphic_pane_g1_ParamLimits

0xb7e3,	// (0x0000b7e3) list_single_2graphic_pane_g1

0xb1d0,	// (0x0000b1d0) list_single_2graphic_pane_g2_ParamLimits

0xb1d0,	// (0x0000b1d0) list_single_2graphic_pane_g2

0x3253,	// (0x00003253) list_single_2graphic_pane_g3_ParamLimits

0x3253,	// (0x00003253) list_single_2graphic_pane_g3

0xb7ef,	// (0x0000b7ef) list_single_2graphic_pane_g4_ParamLimits

0xb7ef,	// (0x0000b7ef) list_single_2graphic_pane_g4

0x0003,

0xe5c9,	// (0x0000e5c9) list_single_2graphic_pane_g_ParamLimits

0xe5c9,	// (0x0000e5c9) list_single_2graphic_pane_g

0xb7fb,	// (0x0000b7fb) list_single_2graphic_pane_t1_ParamLimits

0xb7fb,	// (0x0000b7fb) list_single_2graphic_pane_t1

0xb829,	// (0x0000b829) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb829,	// (0x0000b829) list_double2_graphic_large_graphic_pane_g1

0xb219,	// (0x0000b219) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb219,	// (0x0000b219) list_double2_graphic_large_graphic_pane_g2

0xb22a,	// (0x0000b22a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb22a,	// (0x0000b22a) list_double2_graphic_large_graphic_pane_g3

0x341c,	// (0x0000341c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x341c,	// (0x0000341c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xe5d2,	// (0x0000e5d2) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xe5d2,	// (0x0000e5d2) list_double2_graphic_large_graphic_pane_g

0xb839,	// (0x0000b839) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb839,	// (0x0000b839) list_double2_graphic_large_graphic_pane_t1

0xb84f,	// (0x0000b84f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb84f,	// (0x0000b84f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xe5db,	// (0x0000e5db) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xe5db,	// (0x0000e5db) list_double2_graphic_large_graphic_pane_t

0x217c,	// (0x0000217c) popup_fast_swap_window_ParamLimits

0x217c,	// (0x0000217c) popup_fast_swap_window

0x2198,	// (0x00002198) popup_side_volume_key_window

0x21b2,	// (0x000021b2) stacon_top_pane

0x21bc,	// (0x000021bc) status_pane_ParamLimits

0x21bc,	// (0x000021bc) status_pane

0xb861,	// (0x0000b861) status_small_pane

0x027d,	// (0x0000027d) control_pane

0x027d,	// (0x0000027d) stacon_bottom_pane

0x1150,	// (0x00001150) scroll_pane_cp121

0x1147,	// (0x00001147) set_content_pane

0x1f23,	// (0x00001f23) bg_active_tab_pane_g1_cp1

0x1f2c,	// (0x00001f2c) bg_active_tab_pane_g2_cp1

0x1f35,	// (0x00001f35) bg_active_tab_pane_g3_cp1

0x1f23,	// (0x00001f23) bg_passive_tab_pane_g1_cp1

0x1f2c,	// (0x00001f2c) bg_passive_tab_pane_g2_cp1

0x1f35,	// (0x00001f35) bg_passive_tab_pane_g3_cp1

0x1f3e,	// (0x00001f3e) bg_active_tab_pane_g1_cp2

0x1f2c,	// (0x00001f2c) bg_active_tab_pane_g2_cp2

0x1f47,	// (0x00001f47) bg_active_tab_pane_g3_cp2

0x1f3e,	// (0x00001f3e) bg_passive_tab_pane_g1_cp2

0x1f2c,	// (0x00001f2c) bg_passive_tab_pane_g2_cp2

0x1f47,	// (0x00001f47) bg_passive_tab_pane_g3_cp2

0x1f50,	// (0x00001f50) bg_active_tab_pane_g1_cp3

0x1f2c,	// (0x00001f2c) bg_active_tab_pane_g2_cp3

0x1f59,	// (0x00001f59) bg_active_tab_pane_g3_cp3

0x1f50,	// (0x00001f50) bg_passive_tab_pane_g1_cp3

0x1f2c,	// (0x00001f2c) bg_passive_tab_pane_g2_cp3

0x1f59,	// (0x00001f59) bg_passive_tab_pane_g3_cp3

0x1f62,	// (0x00001f62) bg_active_tab_pane_g1_cp4

0x1f2c,	// (0x00001f2c) bg_active_tab_pane_g2_cp4

0x1f6b,	// (0x00001f6b) bg_active_tab_pane_g3_cp4

0x1f62,	// (0x00001f62) bg_passive_tab_pane_g1_cp4

0x1f2c,	// (0x00001f2c) bg_passive_tab_pane_g2_cp4

0x1f6b,	// (0x00001f6b) bg_passive_tab_pane_g3_cp4

0x20df,	// (0x000020df) bg_active_tab_pane_g1_cp5

0x1f2c,	// (0x00001f2c) bg_active_tab_pane_g2_cp5

0x20e8,	// (0x000020e8) bg_active_tab_pane_g3_cp5

0x20df,	// (0x000020df) bg_passive_tab_pane_g1_cp5

0x1f2c,	// (0x00001f2c) bg_passive_tab_pane_g2_cp5

0x20e8,	// (0x000020e8) bg_passive_tab_pane_g3_cp5

0x5327,	// (0x00005327) list_set_graphic_pane_ParamLimits

0x5327,	// (0x00005327) list_set_graphic_pane

0x027d,	// (0x0000027d) bg_set_opt_pane_cp4

0x2103,	// (0x00002103) list_set_graphic_pane_g1_ParamLimits

0x2103,	// (0x00002103) list_set_graphic_pane_g1

0x210f,	// (0x0000210f) list_set_graphic_pane_g2_ParamLimits

0x210f,	// (0x0000210f) list_set_graphic_pane_g2

0x0001,

0xa45d,	// (0x0000a45d) list_set_graphic_pane_g_ParamLimits

0xa45d,	// (0x0000a45d) list_set_graphic_pane_g

0x0009,

0xa7e7,	// (0x0000a7e7) volume_small_pane_cp_g

0x2131,	// (0x00002131) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2131,	// (0x00002131) list_double2_large_graphic_pane_g1_cp2

0x213d,	// (0x0000213d) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x213d,	// (0x0000213d) list_double2_large_graphic_pane_g2_cp2

0x214c,	// (0x0000214c) list_double2_large_graphic_pane_g3_cp2

0x2154,	// (0x00002154) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2154,	// (0x00002154) list_double2_large_graphic_pane_t1_cp2

0x216a,	// (0x0000216a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x216a,	// (0x0000216a) list_double2_large_graphic_pane_t2_cp2

0x4700,	// (0x00004700) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4700,	// (0x00004700) list_double_large_graphic_pane_g1_cp2

0x4711,	// (0x00004711) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4711,	// (0x00004711) list_double_large_graphic_pane_g2_cp2

0x22cf,	// (0x000022cf) list_double_large_graphic_pane_g3_cp2

0x4720,	// (0x00004720) list_double_large_graphic_pane_g4_cp

0x4728,	// (0x00004728) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4728,	// (0x00004728) list_double_large_graphic_pane_t1_cp2

0x473f,	// (0x0000473f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x473f,	// (0x0000473f) list_double_large_graphic_pane_t2_cp2

0x21d3,	// (0x000021d3) list_double2_graphic_pane_g1_cp2_ParamLimits

0x21d3,	// (0x000021d3) list_double2_graphic_pane_g1_cp2

0x21df,	// (0x000021df) list_double2_graphic_pane_g2_cp2_ParamLimits

0x21df,	// (0x000021df) list_double2_graphic_pane_g2_cp2

0x21ee,	// (0x000021ee) list_double2_graphic_pane_g3_cp2

0x21f6,	// (0x000021f6) list_double2_graphic_pane_t1_cp2_ParamLimits

0x21f6,	// (0x000021f6) list_double2_graphic_pane_t1_cp2

0x220c,	// (0x0000220c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x220c,	// (0x0000220c) list_double2_graphic_pane_t2_cp2

0x221e,	// (0x0000221e) list_single_number_heading_pane_g1_cp2_ParamLimits

0x221e,	// (0x0000221e) list_single_number_heading_pane_g1_cp2

0x222a,	// (0x0000222a) list_single_number_heading_pane_g2_cp2

0x2232,	// (0x00002232) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2232,	// (0x00002232) list_single_number_heading_pane_t1_cp2

0x2248,	// (0x00002248) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2248,	// (0x00002248) list_single_number_heading_pane_t2_cp2

0x225a,	// (0x0000225a) list_single_number_heading_pane_t3_cp2_ParamLimits

0x225a,	// (0x0000225a) list_single_number_heading_pane_t3_cp2

0x221e,	// (0x0000221e) list_single_heading_pane_g1_cp2_ParamLimits

0x221e,	// (0x0000221e) list_single_heading_pane_g1_cp2

0x222a,	// (0x0000222a) list_single_heading_pane_g2_cp2

0x2232,	// (0x00002232) list_single_heading_pane_t1_cp2_ParamLimits

0x2232,	// (0x00002232) list_single_heading_pane_t1_cp2

0x450a,	// (0x0000450a) list_single_heading_pane_t2_cp2_ParamLimits

0x450a,	// (0x0000450a) list_single_heading_pane_t2_cp2

0x4452,	// (0x00004452) list_double_graphic_pane_g1_cp2_ParamLimits

0x4452,	// (0x00004452) list_double_graphic_pane_g1_cp2

0x445e,	// (0x0000445e) list_double_graphic_pane_g2_cp2_ParamLimits

0x445e,	// (0x0000445e) list_double_graphic_pane_g2_cp2

0x446d,	// (0x0000446d) list_double_graphic_pane_g3_cp2

0x4475,	// (0x00004475) list_double_graphic_pane_t1_cp2_ParamLimits

0x4475,	// (0x00004475) list_double_graphic_pane_t1_cp2

0x448b,	// (0x0000448b) list_double_graphic_pane_t2_cp2_ParamLimits

0x448b,	// (0x0000448b) list_double_graphic_pane_t2_cp2

0x0ca9,	// (0x00000ca9) list_double_number_pane_g1_cp2_ParamLimits

0x0ca9,	// (0x00000ca9) list_double_number_pane_g1_cp2

0x22cf,	// (0x000022cf) list_double_number_pane_g2_cp2

0x4418,	// (0x00004418) list_double_number_pane_t1_cp2_ParamLimits

0x4418,	// (0x00004418) list_double_number_pane_t1_cp2

0x442a,	// (0x0000442a) list_double_number_pane_t2_cp2_ParamLimits

0x442a,	// (0x0000442a) list_double_number_pane_t2_cp2

0x4440,	// (0x00004440) list_double_number_pane_t3_cp2_ParamLimits

0x4440,	// (0x00004440) list_double_number_pane_t3_cp2

0x42f2,	// (0x000042f2) list_single_graphic_pane_g1_cp2_ParamLimits

0x42f2,	// (0x000042f2) list_single_graphic_pane_g1_cp2

0x2325,	// (0x00002325) list_single_graphic_pane_g2_cp2_ParamLimits

0x2325,	// (0x00002325) list_single_graphic_pane_g2_cp2

0x2331,	// (0x00002331) list_single_graphic_pane_g3_cp2

0x42ca,	// (0x000042ca) list_single_graphic_pane_t1_cp2_ParamLimits

0x42ca,	// (0x000042ca) list_single_graphic_pane_t1_cp2

0x2325,	// (0x00002325) list_single_number_pane_g1_cp2_ParamLimits

0x2325,	// (0x00002325) list_single_number_pane_g1_cp2

0x2331,	// (0x00002331) list_single_number_pane_g2_cp2

0x42ca,	// (0x000042ca) list_single_number_pane_t1_cp2_ParamLimits

0x42ca,	// (0x000042ca) list_single_number_pane_t1_cp2

0x42e0,	// (0x000042e0) list_single_number_pane_t2_cp2_ParamLimits

0x42e0,	// (0x000042e0) list_single_number_pane_t2_cp2

0x213d,	// (0x0000213d) list_double2_pane_g1_cp2_ParamLimits

0x213d,	// (0x0000213d) list_double2_pane_g1_cp2

0x214c,	// (0x0000214c) list_double2_pane_g2_cp2

0x22a7,	// (0x000022a7) list_double2_pane_t1_cp2_ParamLimits

0x22a7,	// (0x000022a7) list_double2_pane_t1_cp2

0x22bd,	// (0x000022bd) list_double2_pane_t2_cp2_ParamLimits

0x22bd,	// (0x000022bd) list_double2_pane_t2_cp2

0x0ca9,	// (0x00000ca9) list_double_pane_g1_cp2_ParamLimits

0x0ca9,	// (0x00000ca9) list_double_pane_g1_cp2

0x22cf,	// (0x000022cf) list_double_pane_g2_cp2

0x22d7,	// (0x000022d7) list_double_pane_t1_cp2_ParamLimits

0x22d7,	// (0x000022d7) list_double_pane_t1_cp2

0x22ed,	// (0x000022ed) list_double_pane_t2_cp2_ParamLimits

0x22ed,	// (0x000022ed) list_double_pane_t2_cp2

0x2315,	// (0x00002315) list_single_pane_cp2_g3

0x2325,	// (0x00002325) list_single_pane_g1_cp2_ParamLimits

0x2325,	// (0x00002325) list_single_pane_g1_cp2

0x2331,	// (0x00002331) list_single_pane_g2_cp2

0x2339,	// (0x00002339) list_single_pane_t1_cp2_ParamLimits

0x2339,	// (0x00002339) list_single_pane_t1_cp2

0x2351,	// (0x00002351) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2351,	// (0x00002351) list_single_large_graphic_pane_g1_cp2

0x235d,	// (0x0000235d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x235d,	// (0x0000235d) list_single_large_graphic_pane_g2_cp2

0x2369,	// (0x00002369) list_single_large_graphic_pane_g3_cp2

0x2371,	// (0x00002371) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2371,	// (0x00002371) list_single_large_graphic_pane_g4_cp1

0x238b,	// (0x0000238b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x238b,	// (0x0000238b) list_single_large_graphic_pane_t1_cp2

0x4153,	// (0x00004153) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4153,	// (0x00004153) list_single_graphic_heading_pane_g1_cp2

0x4122,	// (0x00004122) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4122,	// (0x00004122) list_single_graphic_heading_pane_g4_cp2

0x2331,	// (0x00002331) list_single_graphic_heading_pane_g5_cp2

0x415f,	// (0x0000415f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x415f,	// (0x0000415f) list_single_graphic_heading_pane_t1_cp2

0x4175,	// (0x00004175) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4175,	// (0x00004175) list_single_graphic_heading_pane_t2_cp2

0x4116,	// (0x00004116) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4116,	// (0x00004116) list_single_2graphic_pane_g1_cp2

0x4122,	// (0x00004122) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4122,	// (0x00004122) list_single_2graphic_pane_g2_cp2

0x2331,	// (0x00002331) list_single_2graphic_pane_g3_cp2

0x4131,	// (0x00004131) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4131,	// (0x00004131) list_single_2graphic_pane_g4_cp2

0x413d,	// (0x0000413d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x413d,	// (0x0000413d) list_single_2graphic_pane_t1_cp2

0x002a,	// (0x0000002a) list_highlight_pane_g10_cp1

0x3d10,	// (0x00003d10) list_highlight_pane_g1_cp1

0x3d18,	// (0x00003d18) list_highlight_pane_g2_cp1

0x3d20,	// (0x00003d20) list_highlight_pane_g3_cp1

0x3d28,	// (0x00003d28) list_highlight_pane_g4_cp1

0x3d30,	// (0x00003d30) list_highlight_pane_g5_cp1

0x3d38,	// (0x00003d38) list_highlight_pane_g6_cp1

0x3d40,	// (0x00003d40) list_highlight_pane_g7_cp1

0x3d48,	// (0x00003d48) list_highlight_pane_g8_cp1

0x3d50,	// (0x00003d50) list_highlight_pane_g9_cp1

0xc603,	// (0x0000c603) form_field_slider_pane_t3

0xc611,	// (0x0000c611) form_field_slider_pane_t4

0x3c54,	// (0x00003c54) slider_form_pane_ParamLimits

0x3c54,	// (0x00003c54) slider_form_pane

0x027d,	// (0x0000027d) control_abbreviations

0x027d,	// (0x0000027d) control_conventions

0x027d,	// (0x0000027d) control_definitions

0x027d,	// (0x0000027d) format_table_attribute

0x4554,	// (0x00004554) bg_popup_preview_window_pane_g9

0x027d,	// (0x0000027d) format_table_data2

0x027d,	// (0x0000027d) format_table_data3

0x027d,	// (0x0000027d) format_table_data_example

0x0008,

0x027d,	// (0x0000027d) intro_purpose

0xa5f9,	// (0x0000a5f9) bg_popup_preview_window_pane_g

0x027d,	// (0x0000027d) texts_category

0x027d,	// (0x0000027d) texts_graphics

0x23a1,	// (0x000023a1) text_digital

0x23b0,	// (0x000023b0) text_primary

0x23bf,	// (0x000023bf) text_primary_small

0x23ce,	// (0x000023ce) text_secondary

0x23dd,	// (0x000023dd) text_title

0x4d85,	// (0x00004d85) bg_passive_tab_pane_g1_cp3_srt

0x1f2c,	// (0x00001f2c) bg_passive_tab_pane_g2_cp3_srt

0x4d8e,	// (0x00004d8e) bg_passive_tab_pane_g3_cp3_srt

0x07bb,	// (0x000007bb) bg_active_tab_pane_cp3_srt_ParamLimits

0x07bb,	// (0x000007bb) bg_active_tab_pane_cp3_srt

0x4d97,	// (0x00004d97) tabs_4_active_pane_srt_g1

0xc9d3,	// (0x0000c9d3) tabs_4_active_pane_srt_t1_ParamLimits

0xc9d3,	// (0x0000c9d3) tabs_4_active_pane_srt_t1

0x4d85,	// (0x00004d85) bg_active_tab_pane_g1_cp3_copy1

0x1f2c,	// (0x00001f2c) bg_active_tab_pane_g2_cp3_copy1

0x4d8e,	// (0x00004d8e) bg_active_tab_pane_g3_cp3_copy1

0x04a3,	// (0x000004a3) tabs_2_long_active_pane_srt_ParamLimits

0x04a3,	// (0x000004a3) tabs_2_long_active_pane_srt

0x04a3,	// (0x000004a3) tabs_2_long_passive_pane_srt_ParamLimits

0x04a3,	// (0x000004a3) tabs_2_long_passive_pane_srt

0x2966,	// (0x00002966) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2966,	// (0x00002966) bg_passive_tab_pane_cp4_srt

0x49cc,	// (0x000049cc) bg_passive_tab_pane_g1_cp4_srt

0x1f2c,	// (0x00001f2c) bg_passive_tab_pane_g2_cp4_srt

0x49d5,	// (0x000049d5) bg_passive_tab_pane_g3_cp4_srt

0x04a3,	// (0x000004a3) bg_active_tab_pane_cp4_srt_ParamLimits

0x04a3,	// (0x000004a3) bg_active_tab_pane_cp4_srt

0xc7b0,	// (0x0000c7b0) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc7b0,	// (0x0000c7b0) tabs_2_long_active_pane_srt_t1

0x49cc,	// (0x000049cc) bg_active_tab_pane_g1_cp4_srt

0x1f2c,	// (0x00001f2c) bg_active_tab_pane_g2_cp4_srt

0x49d5,	// (0x000049d5) bg_active_tab_pane_g3_cp4_srt

0x07bb,	// (0x000007bb) tabs_3_long_active_pane_srt_ParamLimits

0x07bb,	// (0x000007bb) tabs_3_long_active_pane_srt

0x07bb,	// (0x000007bb) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x07bb,	// (0x000007bb) tabs_3_long_passive_pane_cp_srt

0x07bb,	// (0x000007bb) tabs_3_long_passive_pane_srt_ParamLimits

0x07bb,	// (0x000007bb) tabs_3_long_passive_pane_srt

0x2966,	// (0x00002966) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2966,	// (0x00002966) bg_passive_tab_pane_cp5_srt

0x20df,	// (0x000020df) bg_passive_tab_pane_g1_cp5_srt

0x1f2c,	// (0x00001f2c) bg_passive_tab_pane_g2_cp5_srt

0x20e8,	// (0x000020e8) bg_passive_tab_pane_g3_cp5_srt

0x04a3,	// (0x000004a3) bg_active_tab_pane_cp5_srt_ParamLimits

0x04a3,	// (0x000004a3) bg_active_tab_pane_cp5_srt

0xc79a,	// (0x0000c79a) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc79a,	// (0x0000c79a) tabs_3_long_active_pane_srt_t1

0x20df,	// (0x000020df) bg_active_tab_pane_g1_cp5_srt

0x1f2c,	// (0x00001f2c) bg_active_tab_pane_g2_cp5_srt

0x20e8,	// (0x000020e8) bg_active_tab_pane_g3_cp5_srt

0x49ac,	// (0x000049ac) navi_text_pane_srt_t1

0x49a4,	// (0x000049a4) navi_icon_pane_srt_g1

0x264d,	// (0x0000264d) midp_editing_number_pane_srt

0x23ec,	// (0x000023ec) midp_ticker_pane_srt

0x2655,	// (0x00002655) midp_ticker_pane_srt_g1

0x265d,	// (0x0000265d) midp_ticker_pane_srt_g2

0x0001,

0xa47c,	// (0x0000a47c) midp_ticker_pane_srt_g

0x2665,	// (0x00002665) midp_ticker_pane_srt_t1

0x4995,	// (0x00004995) midp_editing_number_pane_t1_copy1

0xb86a,	// (0x0000b86a) listscroll_midp_pane

0xb86a,	// (0x0000b86a) midp_form_pane

0x245c,	// (0x0000245c) midp_info_popup_window_ParamLimits

0x245c,	// (0x0000245c) midp_info_popup_window

0x143a,	// (0x0000143a) bg_popup_sub_pane_cp50_ParamLimits

0x143a,	// (0x0000143a) bg_popup_sub_pane_cp50

0x3961,	// (0x00003961) listscroll_midp_info_pane_ParamLimits

0x3961,	// (0x00003961) listscroll_midp_info_pane

0x3941,	// (0x00003941) listscroll_form_midp_pane_ParamLimits

0x3941,	// (0x00003941) listscroll_form_midp_pane

0x394d,	// (0x0000394d) scroll_bar_cp050

0x3941,	// (0x00003941) list_midp_pane

0x5b5a,	// (0x00005b5a) signal_pane_g2_cp

0x385b,	// (0x0000385b) listscroll_midp_info_pane_t1_ParamLimits

0x385b,	// (0x0000385b) listscroll_midp_info_pane_t1

0x3873,	// (0x00003873) listscroll_midp_info_pane_t2_ParamLimits

0x3873,	// (0x00003873) listscroll_midp_info_pane_t2

0x38b1,	// (0x000038b1) listscroll_midp_info_pane_t3_ParamLimits

0x38b1,	// (0x000038b1) listscroll_midp_info_pane_t3

0x38eb,	// (0x000038eb) listscroll_midp_info_pane_t4_ParamLimits

0x38eb,	// (0x000038eb) listscroll_midp_info_pane_t4

0x0003,

0xa534,	// (0x0000a534) listscroll_midp_info_pane_t_ParamLimits

0xa534,	// (0x0000a534) listscroll_midp_info_pane_t

0x14f6,	// (0x000014f6) scroll_pane_cp21

0x37ff,	// (0x000037ff) form_midp_field_choice_group_pane

0x3808,	// (0x00003808) form_midp_field_text_pane

0x3841,	// (0x00003841) form_midp_field_time_pane

0x3849,	// (0x00003849) form_midp_gauge_slider_pane

0x3852,	// (0x00003852) form_midp_gauge_wait_pane

0x027d,	// (0x0000027d) form_midp_image_pane

0xc5ef,	// (0x0000c5ef) list_single_midp_pane_ParamLimits

0xc5ef,	// (0x0000c5ef) list_single_midp_pane

0xc5d0,	// (0x0000c5d0) form_midp_field_text_pane_t1

0x353b,	// (0x0000353b) input_focus_pane_cp050

0x37d9,	// (0x000037d9) list_midp_form_text_pane

0x3788,	// (0x00003788) form_midp_field_choice_group_pane_t1

0x3796,	// (0x00003796) input_focus_pane_cp051

0x37aa,	// (0x000037aa) list_midp_choice_pane

0x027d,	// (0x0000027d) status_idle_pane

0x376c,	// (0x0000376c) form_midp_field_time_pane_t1

0x002a,	// (0x0000002a) wait_anim_pane_g2_copy1

0x377a,	// (0x0000377a) form_midp_field_time_pane_t2

0x0001,

0x2506,	// (0x00002506) aid_navinavi_width_2_pane

0xa52f,	// (0x0000a52f) form_midp_field_time_pane_t

0x027d,	// (0x0000027d) input_focus_pane_cp052

0x027d,	// (0x0000027d) bg_input_focus_pane_cp040

0x372c,	// (0x0000372c) form_midp_gauge_slider_pane_t1

0x373a,	// (0x0000373a) form_midp_gauge_slider_pane_t2

0xc5b4,	// (0x0000c5b4) form_midp_gauge_slider_pane_t3

0xc5c2,	// (0x0000c5c2) form_midp_gauge_slider_pane_t4

0x0003,

0xe62d,	// (0x0000e62d) form_midp_gauge_slider_pane_t

0x3764,	// (0x00003764) form_midp_slider_pane

0x04a3,	// (0x000004a3) bg_input_focus_pane_cp041_ParamLimits

0x04a3,	// (0x000004a3) bg_input_focus_pane_cp041

0x36fc,	// (0x000036fc) form_midp_gauge_wait_pane_t1_ParamLimits

0x36fc,	// (0x000036fc) form_midp_gauge_wait_pane_t1

0x370e,	// (0x0000370e) form_midp_gauge_wait_pane_t2_ParamLimits

0x370e,	// (0x0000370e) form_midp_gauge_wait_pane_t2

0x0001,

0xa521,	// (0x0000a521) form_midp_gauge_wait_pane_t_ParamLimits

0xa521,	// (0x0000a521) form_midp_gauge_wait_pane_t

0x3720,	// (0x00003720) form_midp_wait_pane_ParamLimits

0x3720,	// (0x00003720) form_midp_wait_pane

0x36c6,	// (0x000036c6) form_midp_image_pane_g1

0x36cf,	// (0x000036cf) form_midp_image_pane_t1

0x36de,	// (0x000036de) form_midp_image_pane_t2

0x36ed,	// (0x000036ed) form_midp_image_pane_t3

0x0002,

0xa51a,	// (0x0000a51a) form_midp_image_pane_t

0x36ae,	// (0x000036ae) list_single_midp_pane_g1

0x36b7,	// (0x000036b7) list_single_midp_pane_t1

0xc5a2,	// (0x0000c5a2) list_midp_form_item_pane_ParamLimits

0xc5a2,	// (0x0000c5a2) list_midp_form_item_pane

0x24ae,	// (0x000024ae) list_midp_form_item_pane_t1

0x24bd,	// (0x000024bd) midp_ticker_pane_g1

0x24c9,	// (0x000024c9) midp_ticker_pane_g2

0x0001,

0xa462,	// (0x0000a462) midp_ticker_pane_g

0x24d5,	// (0x000024d5) midp_ticker_pane_t1

0x4c64,	// (0x00004c64) midp_editing_number_pane_t1

0x4c42,	// (0x00004c42) midp_editing_number_pane

0x4c51,	// (0x00004c51) midp_ticker_pane

0x4973,	// (0x00004973) ai_message_heading_pane

0x027d,	// (0x0000027d) bg_popup_window_pane_cp14

0x497b,	// (0x0000497b) listscroll_ai_message_pane

0x48fd,	// (0x000048fd) ai_message_heading_pane_g1_ParamLimits

0x48fd,	// (0x000048fd) ai_message_heading_pane_g1

0x4909,	// (0x00004909) ai_message_heading_pane_g2_ParamLimits

0x4909,	// (0x00004909) ai_message_heading_pane_g2

0x4915,	// (0x00004915) ai_message_heading_pane_g3_ParamLimits

0x4915,	// (0x00004915) ai_message_heading_pane_g3

0x4921,	// (0x00004921) ai_message_heading_pane_g4_ParamLimits

0x4921,	// (0x00004921) ai_message_heading_pane_g4

0x0003,

0xa65b,	// (0x0000a65b) ai_message_heading_pane_g_ParamLimits

0xa65b,	// (0x0000a65b) ai_message_heading_pane_g

0x492d,	// (0x0000492d) ai_message_heading_pane_t1_ParamLimits

0x492d,	// (0x0000492d) ai_message_heading_pane_t1

0x4947,	// (0x00004947) ai_message_heading_pane_t2_ParamLimits

0x4947,	// (0x00004947) ai_message_heading_pane_t2

0x0001,

0xa664,	// (0x0000a664) ai_message_heading_pane_t_ParamLimits

0xa664,	// (0x0000a664) ai_message_heading_pane_t

0x4959,	// (0x00004959) bg_popup_heading_pane_cp1_ParamLimits

0x4959,	// (0x00004959) bg_popup_heading_pane_cp1

0x48eb,	// (0x000048eb) list_ai_message_pane_ParamLimits

0x48eb,	// (0x000048eb) list_ai_message_pane

0x14f6,	// (0x000014f6) scroll_pane_cp10

0x4837,	// (0x00004837) list_ai_message_pane_g1

0x483f,	// (0x0000483f) list_ai_message_pane_g2

0x0001,

0xa638,	// (0x0000a638) list_ai_message_pane_g

0x4847,	// (0x00004847) list_ai_message_pane_t1_ParamLimits

0x4847,	// (0x00004847) list_ai_message_pane_t1

0x485c,	// (0x0000485c) list_ai_message_pane_t2_ParamLimits

0x485c,	// (0x0000485c) list_ai_message_pane_t2

0x4871,	// (0x00004871) list_ai_message_pane_t3_ParamLimits

0x4871,	// (0x00004871) list_ai_message_pane_t3

0x4886,	// (0x00004886) list_ai_message_pane_t4_ParamLimits

0x4886,	// (0x00004886) list_ai_message_pane_t4

0x0003,

0xa63d,	// (0x0000a63d) list_ai_message_pane_t_ParamLimits

0xa63d,	// (0x0000a63d) list_ai_message_pane_t

0xc72d,	// (0x0000c72d) cell_ai_soft_ind_pane_ParamLimits

0xc72d,	// (0x0000c72d) cell_ai_soft_ind_pane

0x24e7,	// (0x000024e7) cell_ai_soft_ind_pane_g1_ParamLimits

0x24e7,	// (0x000024e7) cell_ai_soft_ind_pane_g1

0x027d,	// (0x0000027d) grid_highlight_cp1

0x24f4,	// (0x000024f4) text_secondary_cp56_ParamLimits

0x24f4,	// (0x000024f4) text_secondary_cp56

0x47fa,	// (0x000047fa) example_general_pane_ParamLimits

0x47fa,	// (0x000047fa) example_general_pane

0x4806,	// (0x00004806) example_parent_pane_g1_ParamLimits

0x4806,	// (0x00004806) example_parent_pane_g1

0x4812,	// (0x00004812) example_parent_pane_t1_ParamLimits

0x4812,	// (0x00004812) example_parent_pane_t1

0xbe6d,	// (0x0000be6d) popup_preview_text_window_ParamLimits

0xbe6d,	// (0x0000be6d) popup_preview_text_window

0x231d,	// (0x0000231d) list_single_pane_cp2_g4

0x0871,	// (0x00000871) bg_popup_preview_window_pane_ParamLimits

0x0871,	// (0x00000871) bg_popup_preview_window_pane

0x455c,	// (0x0000455c) popup_preview_text_window_t1_ParamLimits

0x455c,	// (0x0000455c) popup_preview_text_window_t1

0x457a,	// (0x0000457a) popup_preview_text_window_t2_ParamLimits

0x457a,	// (0x0000457a) popup_preview_text_window_t2

0x45c3,	// (0x000045c3) popup_preview_text_window_t3_ParamLimits

0x45c3,	// (0x000045c3) popup_preview_text_window_t3

0x4608,	// (0x00004608) popup_preview_text_window_t4_ParamLimits

0x4608,	// (0x00004608) popup_preview_text_window_t4

0x0004,

0xa60c,	// (0x0000a60c) popup_preview_text_window_t_ParamLimits

0xa60c,	// (0x0000a60c) popup_preview_text_window_t

0x4686,	// (0x00004686) scroll_pane_cp11

0x33b1,	// (0x000033b1) bg_popup_preview_window_pane_g1

0x451c,	// (0x0000451c) bg_popup_preview_window_pane_g2

0x4524,	// (0x00004524) bg_popup_preview_window_pane_g3

0x452c,	// (0x0000452c) bg_popup_preview_window_pane_g4

0x4534,	// (0x00004534) bg_popup_preview_window_pane_g5

0x453c,	// (0x0000453c) bg_popup_preview_window_pane_g6

0x4544,	// (0x00004544) bg_popup_preview_window_pane_g7

0x454c,	// (0x0000454c) bg_popup_preview_window_pane_g8

0x003c,	// (0x0000003c) aid_popup_width_pane

0xbdef,	// (0x0000bdef) popup_midp_note_alarm_window_ParamLimits

0xbdef,	// (0x0000bdef) popup_midp_note_alarm_window

0x11f5,	// (0x000011f5) data_form_pane_ParamLimits

0xb55c,	// (0x0000b55c) form_field_data_pane_g1

0xb566,	// (0x0000b566) form_field_data_pane_t1_ParamLimits

0x1221,	// (0x00001221) input_focus_pane_ParamLimits

0x122f,	// (0x0000122f) data_form_wide_pane_ParamLimits

0x1240,	// (0x00001240) form_field_data_wide_pane_g1

0x126c,	// (0x0000126c) form_field_data_wide_pane_t1_ParamLimits

0x0b03,	// (0x00000b03) input_focus_pane_cp6_ParamLimits

0xb64a,	// (0x0000b64a) input_popup_find_pane_g1_ParamLimits

0xb64a,	// (0x0000b64a) input_popup_find_pane_g1

0x1825,	// (0x00001825) aid_navi_side_left_pane

0x1836,	// (0x00001836) aid_navi_side_right_pane

0x3df9,	// (0x00003df9) bg_popup_window_pane_cp30_ParamLimits

0x3df9,	// (0x00003df9) bg_popup_window_pane_cp30

0x3e73,	// (0x00003e73) popup_midp_note_alarm_window_g1_ParamLimits

0x3e73,	// (0x00003e73) popup_midp_note_alarm_window_g1

0x3ea3,	// (0x00003ea3) popup_midp_note_alarm_window_t1_ParamLimits

0x3ea3,	// (0x00003ea3) popup_midp_note_alarm_window_t1

0x3f44,	// (0x00003f44) popup_midp_note_alarm_window_t2_ParamLimits

0x3f44,	// (0x00003f44) popup_midp_note_alarm_window_t2

0x3ff2,	// (0x00003ff2) popup_midp_note_alarm_window_t3_ParamLimits

0x3ff2,	// (0x00003ff2) popup_midp_note_alarm_window_t3

0x401a,	// (0x0000401a) popup_midp_note_alarm_window_t4_ParamLimits

0x401a,	// (0x0000401a) popup_midp_note_alarm_window_t4

0x403a,	// (0x0000403a) popup_midp_note_alarm_window_t5_ParamLimits

0x403a,	// (0x0000403a) popup_midp_note_alarm_window_t5

0x000a,

0xa5a9,	// (0x0000a5a9) popup_midp_note_alarm_window_t_ParamLimits

0xa5a9,	// (0x0000a5a9) popup_midp_note_alarm_window_t

0x40e6,	// (0x000040e6) wait_bar_pane_cp1_ParamLimits

0x40e6,	// (0x000040e6) wait_bar_pane_cp1

0x027d,	// (0x0000027d) wait_anim_pane_copy1

0x027d,	// (0x0000027d) wait_border_pane_copy1

0x3b05,	// (0x00003b05) wait_border_pane_g1_copy1

0x1286,	// (0x00001286) form_field_popup_pane_g1

0xb57e,	// (0x0000b57e) form_field_popup_pane_t1_ParamLimits

0x1221,	// (0x00001221) input_focus_pane_cp7_ParamLimits

0x12a6,	// (0x000012a6) list_form_pane_ParamLimits

0x12b2,	// (0x000012b2) form_field_popup_wide_pane_g1

0x12ba,	// (0x000012ba) form_field_popup_wide_pane_t1_ParamLimits

0x1221,	// (0x00001221) input_focus_pane_cp8_ParamLimits

0x12cf,	// (0x000012cf) list_form_wide_pane_ParamLimits

0x4e11,	// (0x00004e11) aid_size_cell_graphic_pane

0xb5f9,	// (0x0000b5f9) data_form_pane_t1_ParamLimits

0xc935,	// (0x0000c935) data_form_wide_pane_t1_ParamLimits

0xc1d5,	// (0x0000c1d5) bg_status_flat_pane

0xae3b,	// (0x0000ae3b) title_pane_t1_ParamLimits

0x046b,	// (0x0000046b) title_pane_t2_ParamLimits

0x0491,	// (0x00000491) title_pane_t3_ParamLimits

0xe4e6,	// (0x0000e4e6) title_pane_t_ParamLimits

0x1b29,	// (0x00001b29) level_1_signal_ParamLimits

0x1b36,	// (0x00001b36) level_2_signal_ParamLimits

0x1b43,	// (0x00001b43) level_3_signal_ParamLimits

0x1b50,	// (0x00001b50) level_4_signal_ParamLimits

0x1b5d,	// (0x00001b5d) level_5_signal_ParamLimits

0x1b6a,	// (0x00001b6a) level_6_signal_ParamLimits

0x1b77,	// (0x00001b77) level_7_signal_ParamLimits

0x1b29,	// (0x00001b29) level_1_battery_ParamLimits

0x1b36,	// (0x00001b36) level_2_battery_ParamLimits

0x1b43,	// (0x00001b43) level_3_battery_ParamLimits

0x1b50,	// (0x00001b50) level_4_battery_ParamLimits

0x1b5d,	// (0x00001b5d) level_5_battery_ParamLimits

0x1b6a,	// (0x00001b6a) level_6_battery_ParamLimits

0x1b77,	// (0x00001b77) level_7_battery_ParamLimits

0x3d10,	// (0x00003d10) bg_status_flat_pane_g1

0x3d18,	// (0x00003d18) bg_status_flat_pane_g2

0x3d20,	// (0x00003d20) bg_status_flat_pane_g3

0x3d28,	// (0x00003d28) bg_status_flat_pane_g4

0x3d30,	// (0x00003d30) bg_status_flat_pane_g5

0x3d38,	// (0x00003d38) bg_status_flat_pane_g6

0x3d40,	// (0x00003d40) bg_status_flat_pane_g7

0xaec7,	// (0x0000aec7) tabs_3_active_pane_t1_ParamLimits

0xaec7,	// (0x0000aec7) tabs_3_passive_pane_t1_ParamLimits

0xaed9,	// (0x0000aed9) tabs_4_active_pane_t1_ParamLimits

0xaed9,	// (0x0000aed9) tabs_4_1_passive_pane_t1_ParamLimits

0xb656,	// (0x0000b656) tabs_2_active_pane_t1_ParamLimits

0xb656,	// (0x0000b656) tabs_2_passive_pane_t1_ParamLimits

0x04a3,	// (0x000004a3) bg_active_tab_pane_cp4_ParamLimits

0xb668,	// (0x0000b668) tabs_2_long_active_pane_t1_ParamLimits

0x2966,	// (0x00002966) bg_passive_tab_pane_cp4_ParamLimits

0x346a,	// (0x0000346a) list_single_midp_graphic_pane_t1_ParamLimits

0x04a3,	// (0x000004a3) bg_active_tab_pane_cp5_ParamLimits

0xb67b,	// (0x0000b67b) tabs_3_long_active_pane_t1_ParamLimits

0x2966,	// (0x00002966) bg_passive_tab_pane_cp5_ParamLimits

0x346a,	// (0x0000346a) list_single_midp_graphic_pane_t1

0xc1d5,	// (0x0000c1d5) bg_status_flat_pane_ParamLimits

0x2fad,	// (0x00002fad) indicator_pane_cp2_ParamLimits

0x2fad,	// (0x00002fad) indicator_pane_cp2

0xc34b,	// (0x0000c34b) navi_pane_srt_ParamLimits

0xc34b,	// (0x0000c34b) navi_pane_srt

0x30f6,	// (0x000030f6) popup_clock_digital_analogue_window_cp1

0x0621,	// (0x00000621) indicator_pane_t1

0x23ec,	// (0x000023ec) copy_highlight_pane

0x23ec,	// (0x000023ec) cursor_graphics_pane

0x23ec,	// (0x000023ec) graphic_within_text_pane

0x23ec,	// (0x000023ec) link_highlight_pane

0x4649,	// (0x00004649) popup_preview_text_window_t5_ParamLimits

0x4649,	// (0x00004649) popup_preview_text_window_t5

0x250e,	// (0x0000250e) cursor_digital_pane

0x250e,	// (0x0000250e) cursor_primary_pane

0x251f,	// (0x0000251f) cursor_primary_small_pane

0x2527,	// (0x00002527) cursor_secondary_pane

0x252f,	// (0x0000252f) cursor_title_pane

0x250e,	// (0x0000250e) link_highlight_digital_pane

0x2516,	// (0x00002516) link_highlight_primary_pane

0x251f,	// (0x0000251f) link_highlight_primary_small_pane

0x2527,	// (0x00002527) link_highlight_secondary_pane

0x252f,	// (0x0000252f) link_highlight_title_pane

0x250e,	// (0x0000250e) copy_highlight_digital_pane

0x250e,	// (0x0000250e) copy_highlight_primary_pane

0x251f,	// (0x0000251f) copy_highlight_primary_small_pane

0x2527,	// (0x00002527) copy_highlight_secondary_pane

0x252f,	// (0x0000252f) copy_highlight_title_pane

0x2527,	// (0x00002527) graphic_text_digital_pane

0x3da8,	// (0x00003da8) graphic_text_primary_pane

0x3db1,	// (0x00003db1) graphic_text_primary_small_pane

0x251f,	// (0x0000251f) graphic_text_secondary_pane

0x250e,	// (0x0000250e) graphic_text_title_pane

0xb903,	// (0x0000b903) cursor_primary_pane_g1

0x3d9a,	// (0x00003d9a) cursor_text_primary_t1

0xc633,	// (0x0000c633) cursor_primary_small_pane_g1

0x3d8c,	// (0x00003d8c) cursor_text_primary_small_t1

0xc629,	// (0x0000c629) cursor_primary_small_pane_g1_copy1

0x3d76,	// (0x00003d76) cursor_text_primary_small_t1_copy1

0x3d58,	// (0x00003d58) cursor_text_title_t1

0xc61f,	// (0x0000c61f) cursor_title_pane_g1

0xb903,	// (0x0000b903) cursor_digital_pane_g1

0x253f,	// (0x0000253f) cursor_text_digital_t1

0x254d,	// (0x0000254d) link_highlight_primary_pane_g1

0x3d01,	// (0x00003d01) link_highlight_primary_pane_t1

0x254d,	// (0x0000254d) link_highlight_primary_small_pane_g1

0x2555,	// (0x00002555) link_highlight_primary_small_pane_t1

0x2564,	// (0x00002564) link_highlight_secondary_pane_g1

0x256c,	// (0x0000256c) link_highlight_secondary_pane_t1

0x3c66,	// (0x00003c66) link_highlight_title_pane_g1

0x3c7d,	// (0x00003c7d) link_highlight_title_pane_t1

0x3c66,	// (0x00003c66) link_highlight_digital_pane_g1

0x3c6e,	// (0x00003c6e) link_highlight_digital_pane_t1

0x3b20,	// (0x00003b20) copy_highlight_primary_pane_g1

0x3b46,	// (0x00003b46) copy_highlight_primary_pane_t1

0x3b20,	// (0x00003b20) copy_highlight_primary_small_pane_g1

0x3b37,	// (0x00003b37) copy_highlight_primary_small_pane_t1

0x257b,	// (0x0000257b) copy_highlight_secondary_pane_g1

0x2583,	// (0x00002583) copy_highlight_secondary_pane_t1

0x3b20,	// (0x00003b20) copy_highlight_title_pane_g1

0x3b28,	// (0x00003b28) copy_highlight_title_pane_t1

0x3b20,	// (0x00003b20) copy_highlight_digital_pane_g1

0x508f,	// (0x0000508f) copy_highlight_digital_pane_t1

0x4fe3,	// (0x00004fe3) graphic_text_primary_pane_g1

0x5073,	// (0x00005073) graphic_text_primary_pane_t1

0x5081,	// (0x00005081) graphic_text_primary_pane_t2

0x0001,

0xa6d8,	// (0x0000a6d8) graphic_text_primary_pane_t

0x504f,	// (0x0000504f) graphic_text_primary_small_pane_g1

0x5057,	// (0x00005057) graphic_text_primary_small_pane_t1

0x5065,	// (0x00005065) graphic_text_primary_small_pane_t2

0x0001,

0xa6d3,	// (0x0000a6d3) graphic_text_primary_small_pane_t

0x502b,	// (0x0000502b) graphic_text_secondary_pane_g1

0x5033,	// (0x00005033) graphic_text_secondary_pane_t1

0x5041,	// (0x00005041) graphic_text_secondary_pane_t2

0x0001,

0xa6ce,	// (0x0000a6ce) graphic_text_secondary_pane_t

0x5007,	// (0x00005007) graphic_text_title_pane_g1

0x500f,	// (0x0000500f) graphic_text_title_pane_t1

0x501d,	// (0x0000501d) graphic_text_title_pane_t2

0x0001,

0xa6c9,	// (0x0000a6c9) graphic_text_title_pane_t

0x4fe3,	// (0x00004fe3) graphic_text_digital_pane_g1

0x4feb,	// (0x00004feb) graphic_text_digital_pane_t1

0x4ff9,	// (0x00004ff9) graphic_text_digital_pane_t2

0x0001,

0xa6c4,	// (0x0000a6c4) graphic_text_digital_pane_t

0x04a3,	// (0x000004a3) navi_icon_pane_srt_ParamLimits

0x04a3,	// (0x000004a3) navi_icon_pane_srt

0x027d,	// (0x0000027d) navi_midp_pane_srt

0x027d,	// (0x0000027d) navi_navi_pane_srt

0x04a3,	// (0x000004a3) navi_text_pane_srt_ParamLimits

0x04a3,	// (0x000004a3) navi_text_pane_srt

0x4fae,	// (0x00004fae) navi_navi_icon_text_pane_srt

0x4fb6,	// (0x00004fb6) navi_navi_pane_srt_g1_ParamLimits

0x4fb6,	// (0x00004fb6) navi_navi_pane_srt_g1

0x4fc8,	// (0x00004fc8) navi_navi_pane_srt_g2_ParamLimits

0x4fc8,	// (0x00004fc8) navi_navi_pane_srt_g2

0x0001,

0xa6bf,	// (0x0000a6bf) navi_navi_pane_srt_g_ParamLimits

0xa6bf,	// (0x0000a6bf) navi_navi_pane_srt_g

0x4fda,	// (0x00004fda) navi_navi_tabs_pane_srt

0x4fae,	// (0x00004fae) navi_navi_text_pane_srt

0x4fae,	// (0x00004fae) navi_navi_volume_pane_srt

0x4f9f,	// (0x00004f9f) navi_navi_text_pane_srt_t1

0x4f7a,	// (0x00004f7a) navi_navi_volume_pane_srt_g1

0x4f82,	// (0x00004f82) volume_small_pane_srt_ParamLimits

0x4f82,	// (0x00004f82) volume_small_pane_srt

0x2592,	// (0x00002592) volume_small_pane_srt_g1_ParamLimits

0x2592,	// (0x00002592) volume_small_pane_srt_g1

0x25a2,	// (0x000025a2) volume_small_pane_srt_g2_ParamLimits

0x25a2,	// (0x000025a2) volume_small_pane_srt_g2

0x25b3,	// (0x000025b3) volume_small_pane_srt_g3_ParamLimits

0x25b3,	// (0x000025b3) volume_small_pane_srt_g3

0x25c4,	// (0x000025c4) volume_small_pane_srt_g4_ParamLimits

0x25c4,	// (0x000025c4) volume_small_pane_srt_g4

0x25d5,	// (0x000025d5) volume_small_pane_srt_g5_ParamLimits

0x25d5,	// (0x000025d5) volume_small_pane_srt_g5

0x25e6,	// (0x000025e6) volume_small_pane_srt_g6_ParamLimits

0x25e6,	// (0x000025e6) volume_small_pane_srt_g6

0x25f7,	// (0x000025f7) volume_small_pane_srt_g7_ParamLimits

0x25f7,	// (0x000025f7) volume_small_pane_srt_g7

0x2608,	// (0x00002608) volume_small_pane_srt_g8_ParamLimits

0x2608,	// (0x00002608) volume_small_pane_srt_g8

0x2619,	// (0x00002619) volume_small_pane_srt_g9_ParamLimits

0x2619,	// (0x00002619) volume_small_pane_srt_g9

0x262a,	// (0x0000262a) volume_small_pane_srt_g10_ParamLimits

0x262a,	// (0x0000262a) volume_small_pane_srt_g10

0x0009,

0xa467,	// (0x0000a467) volume_small_pane_srt_g_ParamLimits

0xa467,	// (0x0000a467) volume_small_pane_srt_g

0x091a,	// (0x0000091a) query_popup_data_pane_cp2

0x4f68,	// (0x00004f68) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4f68,	// (0x00004f68) navi_navi_icon_text_pane_srt_t1

0x3da8,	// (0x00003da8) navi_tabs_2_long_pane_srt

0x3da8,	// (0x00003da8) navi_tabs_2_pane_srt

0x3da8,	// (0x00003da8) navi_tabs_3_long_pane_srt

0x3da8,	// (0x00003da8) navi_tabs_3_pane_srt

0x3da8,	// (0x00003da8) navi_tabs_4_pane_srt

0x4f40,	// (0x00004f40) tabs_2_active_pane_srt_ParamLimits

0x4f40,	// (0x00004f40) tabs_2_active_pane_srt

0x4f50,	// (0x00004f50) tabs_2_passive_pane_srt_ParamLimits

0x4f50,	// (0x00004f50) tabs_2_passive_pane_srt

0x353b,	// (0x0000353b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x353b,	// (0x0000353b) bg_passive_tab_pane_cp1_srt

0x4f14,	// (0x00004f14) bg_passive_tab_pane_g1_cp1_srt

0x1f2c,	// (0x00001f2c) bg_passive_tab_pane_g2_cp1_srt

0x4f1d,	// (0x00004f1d) bg_passive_tab_pane_g3_cp1_srt

0x07bb,	// (0x000007bb) bg_active_tab_pane_cp1_srt_ParamLimits

0x07bb,	// (0x000007bb) bg_active_tab_pane_cp1_srt

0x4f26,	// (0x00004f26) tabs_2_active_pane_srt_g1

0xca50,	// (0x0000ca50) tabs_2_active_pane_srt_t1_ParamLimits

0xca50,	// (0x0000ca50) tabs_2_active_pane_srt_t1

0x4f14,	// (0x00004f14) bg_active_tab_pane_g1_cp1_srt

0x1f2c,	// (0x00001f2c) bg_active_tab_pane_g2_cp1_srt

0x4f1d,	// (0x00004f1d) bg_active_tab_pane_g3_cp1_srt

0x4ee1,	// (0x00004ee1) tabs_3_active_pane_srt_ParamLimits

0x4ee1,	// (0x00004ee1) tabs_3_active_pane_srt

0x4ef2,	// (0x00004ef2) tabs_3_passive_pane_cp_srt_ParamLimits

0x4ef2,	// (0x00004ef2) tabs_3_passive_pane_cp_srt

0x4f03,	// (0x00004f03) tabs_3_passive_pane_srt_ParamLimits

0x4f03,	// (0x00004f03) tabs_3_passive_pane_srt

0x353b,	// (0x0000353b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x353b,	// (0x0000353b) bg_passive_tab_pane_cp2_srt

0x263b,	// (0x0000263b) bg_passive_tab_pane_g1_cp2_srt

0x1f2c,	// (0x00001f2c) bg_passive_tab_pane_g2_cp2_srt

0x2644,	// (0x00002644) bg_passive_tab_pane_g3_cp2_srt

0x07bb,	// (0x000007bb) bg_active_tab_pane_cp2_srt_ParamLimits

0x07bb,	// (0x000007bb) bg_active_tab_pane_cp2_srt

0x4ec7,	// (0x00004ec7) tabs_3_active_pane_srt_g1

0xca3a,	// (0x0000ca3a) tabs_3_active_pane_srt_t1_ParamLimits

0xca3a,	// (0x0000ca3a) tabs_3_active_pane_srt_t1

0x263b,	// (0x0000263b) bg_active_tab_pane_g1_cp2_srt

0x1f2c,	// (0x00001f2c) bg_active_tab_pane_g2_cp2_srt

0x2644,	// (0x00002644) bg_active_tab_pane_g3_cp2_srt

0x4e7f,	// (0x00004e7f) tabs_4_active_pane_srt_ParamLimits

0x4e7f,	// (0x00004e7f) tabs_4_active_pane_srt

0x4e91,	// (0x00004e91) tabs_4_passive_pane_cp2_srt_ParamLimits

0x4e91,	// (0x00004e91) tabs_4_passive_pane_cp2_srt

0x28e4,	// (0x000028e4) aid_size_cell_toolbar

0x4aaf,	// (0x00004aaf) main_idle_act_pane_ParamLimits

0x2ad9,	// (0x00002ad9) popup_large_graphic_colour_window_ParamLimits

0xc0b9,	// (0x0000c0b9) popup_toolbar_window_ParamLimits

0xc0b9,	// (0x0000c0b9) popup_toolbar_window

0x4c85,	// (0x00004c85) list_single_graphic_2heading_pane_ParamLimits

0x4c85,	// (0x00004c85) list_single_graphic_2heading_pane

0x18a9,	// (0x000018a9) aid_size_cell_apps_grid_lsc_pane

0x18bb,	// (0x000018bb) aid_size_cell_apps_grid_prt_pane

0x2966,	// (0x00002966) bg_wml_button_pane_cp1_ParamLimits

0x2966,	// (0x00002966) bg_wml_button_pane_cp1

0xc5d0,	// (0x0000c5d0) form_midp_field_text_pane_t1_ParamLimits

0x353b,	// (0x0000353b) input_focus_pane_cp050_ParamLimits

0x37d9,	// (0x000037d9) list_midp_form_text_pane_ParamLimits

0x3796,	// (0x00003796) input_focus_pane_cp051_ParamLimits

0x37aa,	// (0x000037aa) list_midp_choice_pane_ParamLimits

0xc574,	// (0x0000c574) list_single_2graphic_pane_cp3_ParamLimits

0xc574,	// (0x0000c574) list_single_2graphic_pane_cp3

0xc585,	// (0x0000c585) list_single_midp_graphic_pane_ParamLimits

0xc585,	// (0x0000c585) list_single_midp_graphic_pane

0x3247,	// (0x00003247) list_single_graphic_2heading_pane_g1_ParamLimits

0x3247,	// (0x00003247) list_single_graphic_2heading_pane_g1

0x2325,	// (0x00002325) list_single_graphic_2heading_pane_g4_ParamLimits

0x2325,	// (0x00002325) list_single_graphic_2heading_pane_g4

0x3253,	// (0x00003253) list_single_graphic_2heading_pane_g5_ParamLimits

0x3253,	// (0x00003253) list_single_graphic_2heading_pane_g5

0x0002,

0xa4ba,	// (0x0000a4ba) list_single_graphic_2heading_pane_g_ParamLimits

0xa4ba,	// (0x0000a4ba) list_single_graphic_2heading_pane_g

0x325f,	// (0x0000325f) list_single_graphic_2heading_pane_t1_ParamLimits

0x325f,	// (0x0000325f) list_single_graphic_2heading_pane_t1

0x3273,	// (0x00003273) list_single_graphic_2heading_pane_t2_ParamLimits

0x3273,	// (0x00003273) list_single_graphic_2heading_pane_t2

0x328d,	// (0x0000328d) list_single_graphic_2heading_pane_t3_ParamLimits

0x328d,	// (0x0000328d) list_single_graphic_2heading_pane_t3

0x0002,

0xa4c1,	// (0x0000a4c1) list_single_graphic_2heading_pane_t_ParamLimits

0xa4c1,	// (0x0000a4c1) list_single_graphic_2heading_pane_t

0x32a5,	// (0x000032a5) bg_popup_sub_pane_cp2

0x32cf,	// (0x000032cf) grid_toobar_pane

0x3309,	// (0x00003309) cell_toolbar_pane_ParamLimits

0x3309,	// (0x00003309) cell_toolbar_pane

0x3355,	// (0x00003355) cell_toolbar_pane_g1_ParamLimits

0x3355,	// (0x00003355) cell_toolbar_pane_g1

0x3369,	// (0x00003369) cell_toolbar_pane_g2_ParamLimits

0x3369,	// (0x00003369) cell_toolbar_pane_g2

0x0001,

0xa4cf,	// (0x0000a4cf) cell_toolbar_pane_g_ParamLimits

0xa4cf,	// (0x0000a4cf) cell_toolbar_pane_g

0x338b,	// (0x0000338b) grid_highlight_pane_cp2_ParamLimits

0x338b,	// (0x0000338b) grid_highlight_pane_cp2

0x33a5,	// (0x000033a5) toolbar_button_pane

0x33b1,	// (0x000033b1) toolbar_button_pane_g1

0x33b9,	// (0x000033b9) toolbar_button_pane_g2

0x33c1,	// (0x000033c1) toolbar_button_pane_g3

0x33c9,	// (0x000033c9) toolbar_button_pane_g4

0x33d1,	// (0x000033d1) toolbar_button_pane_g5

0x33d9,	// (0x000033d9) toolbar_button_pane_g6

0x33e1,	// (0x000033e1) toolbar_button_pane_g7

0x33e9,	// (0x000033e9) toolbar_button_pane_g8

0x33f1,	// (0x000033f1) toolbar_button_pane_g9

0x0009,

0xa4d4,	// (0x0000a4d4) toolbar_button_pane_g

0x3401,	// (0x00003401) list_single_2graphic_pane_g1_cp3_ParamLimits

0x3401,	// (0x00003401) list_single_2graphic_pane_g1_cp3

0xc4dc,	// (0x0000c4dc) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc4dc,	// (0x0000c4dc) list_single_2graphic_pane_g2_cp3

0x222a,	// (0x0000222a) list_single_2graphic_pane_g3_cp3

0x341c,	// (0x0000341c) list_single_2graphic_pane_g4_cp3_ParamLimits

0x341c,	// (0x0000341c) list_single_2graphic_pane_g4_cp3

0x3428,	// (0x00003428) list_single_2graphic_pane_t1_cp3_ParamLimits

0x3428,	// (0x00003428) list_single_2graphic_pane_t1_cp3

0x221e,	// (0x0000221e) list_single_midp_graphic_pane_g2_ParamLimits

0x221e,	// (0x0000221e) list_single_midp_graphic_pane_g2

0x28ec,	// (0x000028ec) aid_zoom_text_primary

0x28f4,	// (0x000028f4) aid_zoom_text_secondary

0xb959,	// (0x0000b959) status_small_pane_g7_ParamLimits

0xb959,	// (0x0000b959) status_small_pane_g7

0xb97c,	// (0x0000b97c) status_small_pane_t1_ParamLimits

0xae17,	// (0x0000ae17) title_pane_g2

0x0003,

0xe4dd,	// (0x0000e4dd) title_pane_g

0xb0da,	// (0x0000b0da) aid_size_cell_colour_1_pane_ParamLimits

0xb0da,	// (0x0000b0da) aid_size_cell_colour_1_pane

0xb0ee,	// (0x0000b0ee) aid_size_cell_colour_2_pane_ParamLimits

0xb0ee,	// (0x0000b0ee) aid_size_cell_colour_2_pane

0xb102,	// (0x0000b102) aid_size_cell_colour_3_pane_ParamLimits

0xb102,	// (0x0000b102) aid_size_cell_colour_3_pane

0xb116,	// (0x0000b116) aid_size_cell_colour_4_pane_ParamLimits

0xb116,	// (0x0000b116) aid_size_cell_colour_4_pane

0x172c,	// (0x0000172c) title_pane_stacon_g1_ParamLimits

0x172c,	// (0x0000172c) title_pane_stacon_g1

0x3b9d,	// (0x00003b9d) popup_note_wait_window_g3_ParamLimits

0x3b9d,	// (0x00003b9d) popup_note_wait_window_g3

0x3c13,	// (0x00003c13) popup_note_wait_window_t5_ParamLimits

0x3c13,	// (0x00003c13) popup_note_wait_window_t5

0x027d,	// (0x0000027d) main_feb_china_hwr_fs_writing_pane

0xbbbf,	// (0x0000bbbf) popup_feb_china_hwr_fs_window_ParamLimits

0xbbbf,	// (0x0000bbbf) popup_feb_china_hwr_fs_window

0xc4ed,	// (0x0000c4ed) aid_size_cell_hwr_fs_ParamLimits

0xc4ed,	// (0x0000c4ed) aid_size_cell_hwr_fs

0x353b,	// (0x0000353b) bg_popup_sub_pane_cp3_ParamLimits

0x353b,	// (0x0000353b) bg_popup_sub_pane_cp3

0xc502,	// (0x0000c502) grid_hwr_fs_pane_ParamLimits

0xc502,	// (0x0000c502) grid_hwr_fs_pane

0x355b,	// (0x0000355b) linegrid_hwr_fs_pane_ParamLimits

0x355b,	// (0x0000355b) linegrid_hwr_fs_pane

0xc51a,	// (0x0000c51a) cell_hwr_fs_pane_ParamLimits

0xc51a,	// (0x0000c51a) cell_hwr_fs_pane

0x3589,	// (0x00003589) linegrid_hwr_fs_pane_g1_ParamLimits

0x3589,	// (0x00003589) linegrid_hwr_fs_pane_g1

0xc53a,	// (0x0000c53a) linegrid_hwr_fs_pane_g2_ParamLimits

0xc53a,	// (0x0000c53a) linegrid_hwr_fs_pane_g2

0x35a7,	// (0x000035a7) linegrid_hwr_fs_pane_g3_ParamLimits

0x35a7,	// (0x000035a7) linegrid_hwr_fs_pane_g3

0x35b3,	// (0x000035b3) linegrid_hwr_fs_pane_g4_ParamLimits

0x35b3,	// (0x000035b3) linegrid_hwr_fs_pane_g4

0x35cd,	// (0x000035cd) linegrid_hwr_fs_pane_g5_ParamLimits

0x35cd,	// (0x000035cd) linegrid_hwr_fs_pane_g5

0x0004,

0xe619,	// (0x0000e619) linegrid_hwr_fs_pane_g_ParamLimits

0xe619,	// (0x0000e619) linegrid_hwr_fs_pane_g

0x35e3,	// (0x000035e3) cell_hwr_fs_pane_g1_ParamLimits

0x35e3,	// (0x000035e3) cell_hwr_fs_pane_g1

0x3188,	// (0x00003188) cell_hwr_fs_pane_g2_ParamLimits

0x3188,	// (0x00003188) cell_hwr_fs_pane_g2

0xc54c,	// (0x0000c54c) cell_hwr_fs_pane_g3_ParamLimits

0xc54c,	// (0x0000c54c) cell_hwr_fs_pane_g3

0xc559,	// (0x0000c559) cell_hwr_fs_pane_g4_ParamLimits

0xc559,	// (0x0000c559) cell_hwr_fs_pane_g4

0x0003,

0xe624,	// (0x0000e624) cell_hwr_fs_pane_g_ParamLimits

0xe624,	// (0x0000e624) cell_hwr_fs_pane_g

0xc566,	// (0x0000c566) cell_hwr_fs_pane_t1

0x027d,	// (0x0000027d) grid_highlight_pane_cp6

0x027d,	// (0x0000027d) main_idle_act2_pane

0x14dd,	// (0x000014dd) aid_inside_area_popup_secondary

0xc63d,	// (0x0000c63d) aid_inside_area_window_primary_ParamLimits

0xc63d,	// (0x0000c63d) aid_inside_area_window_primary

0x509e,	// (0x0000509e) ai2_news_ticker_pane

0x50a6,	// (0x000050a6) aid_size_cell_ai1_link_ParamLimits

0x50a6,	// (0x000050a6) aid_size_cell_ai1_link

0xca66,	// (0x0000ca66) popup_ai2_data_window_ParamLimits

0xca66,	// (0x0000ca66) popup_ai2_data_window

0x50d4,	// (0x000050d4) popup_ai2_link_window_ParamLimits

0x50d4,	// (0x000050d4) popup_ai2_link_window

0x353b,	// (0x0000353b) bg_popup_sub_pane_cp4_ParamLimits

0x353b,	// (0x0000353b) bg_popup_sub_pane_cp4

0x50e8,	// (0x000050e8) grid_ai2_link_pane_ParamLimits

0x50e8,	// (0x000050e8) grid_ai2_link_pane

0x50ff,	// (0x000050ff) popup_ai2_link_window_g1_ParamLimits

0x50ff,	// (0x000050ff) popup_ai2_link_window_g1

0x510b,	// (0x0000510b) popup_ai2_link_window_g2_ParamLimits

0x510b,	// (0x0000510b) popup_ai2_link_window_g2

0x0001,

0xa6dd,	// (0x0000a6dd) popup_ai2_link_window_g_ParamLimits

0xa6dd,	// (0x0000a6dd) popup_ai2_link_window_g

0x511a,	// (0x0000511a) ai2_mp_button_pane

0x5122,	// (0x00005122) ai2_mp_volume_pane

0x3796,	// (0x00003796) bg_popup_sub_pane_cp5_ParamLimits

0x3796,	// (0x00003796) bg_popup_sub_pane_cp5

0x512a,	// (0x0000512a) heading_ai2_gene_pane_ParamLimits

0x512a,	// (0x0000512a) heading_ai2_gene_pane

0x5136,	// (0x00005136) list_ai2_gene_pane_ParamLimits

0x5136,	// (0x00005136) list_ai2_gene_pane

0x517e,	// (0x0000517e) cell_ai2_link_pane_ParamLimits

0x517e,	// (0x0000517e) cell_ai2_link_pane

0x5194,	// (0x00005194) cell_ai2_link_pane_g1

0x027d,	// (0x0000027d) grid_highlight_pane_cp7

0x5263,	// (0x00005263) ai2_mp_volume_pane_g1

0x526b,	// (0x0000526b) ai2_mp_volume_pane_g2

0xca87,	// (0x0000ca87) list_ai2_gene_pane_t1

0x5273,	// (0x00005273) ai2_mp_volume_pane_g3

0x0002,

0xa6f6,	// (0x0000a6f6) ai2_mp_volume_pane_g

0x527b,	// (0x0000527b) volume_small_pane_cp3

0x5284,	// (0x00005284) aid_size_cell_ai2_button

0x528c,	// (0x0000528c) grid_ai2_button_pane

0x5295,	// (0x00005295) cell_ai2_button_pane_ParamLimits

0x5295,	// (0x00005295) cell_ai2_button_pane

0x002a,	// (0x0000002a) cell_ai2_button_pane_g1

0x027d,	// (0x0000027d) grid_highlight_pane_cp8

0x5223,	// (0x00005223) ai2_gene_pane_t1_ParamLimits

0x5223,	// (0x00005223) ai2_gene_pane_t1

0xbb3d,	// (0x0000bb3d) aid_height_parent_landscape

0xc7f5,	// (0x0000c7f5) aid_height_set_list

0x4aaf,	// (0x00004aaf) aid_size_parent

0x4e11,	// (0x00004e11) aid_size_cell_graphic_pane_ParamLimits

0x5146,	// (0x00005146) popup_ai2_data_window_g1_ParamLimits

0x5146,	// (0x00005146) popup_ai2_data_window_g1

0x5152,	// (0x00005152) ai2_news_ticker_pane_g1

0x515a,	// (0x0000515a) ai2_news_ticker_pane_g2

0x0001,

0xa6e2,	// (0x0000a6e2) ai2_news_ticker_pane_g

0x5162,	// (0x00005162) ai2_news_ticker_pane_t1

0x5170,	// (0x00005170) ai2_news_ticker_pane_t2

0x0001,

0xa6e7,	// (0x0000a6e7) ai2_news_ticker_pane_t

0x519d,	// (0x0000519d) heading_ai2_gene_pane_g1

0x51a5,	// (0x000051a5) heading_ai2_gene_pane_t1_ParamLimits

0x51a5,	// (0x000051a5) heading_ai2_gene_pane_t1

0x51ba,	// (0x000051ba) list_highlight_pane_cp6

0xca72,	// (0x0000ca72) ai2_gene_pane_ParamLimits

0xca72,	// (0x0000ca72) ai2_gene_pane

0xca95,	// (0x0000ca95) list_ai2_gene_pane_t2

0x0001,

0xe6bc,	// (0x0000e6bc) list_ai2_gene_pane_t

0x51f4,	// (0x000051f4) list_highlight_pane_cp8_ParamLimits

0x51f4,	// (0x000051f4) list_highlight_pane_cp8

0x5205,	// (0x00005205) ai2_gene_pane_g1_ParamLimits

0x5205,	// (0x00005205) ai2_gene_pane_g1

0x5217,	// (0x00005217) ai2_gene_pane_g2_ParamLimits

0x5217,	// (0x00005217) ai2_gene_pane_g2

0x0001,

0xa6f1,	// (0x0000a6f1) ai2_gene_pane_g_ParamLimits

0xa6f1,	// (0x0000a6f1) ai2_gene_pane_g

0x0c8c,	// (0x00000c8c) scroll_pane_cp12

0xbafa,	// (0x0000bafa) control_pane_t3_ParamLimits

0xbafa,	// (0x0000bafa) control_pane_t3

0xb96d,	// (0x0000b96d) status_small_pane_g8_ParamLimits

0xb96d,	// (0x0000b96d) status_small_pane_g8

0xbc34,	// (0x0000bc34) popup_find_window_ParamLimits

0xbe27,	// (0x0000be27) popup_note_image_window_ParamLimits

0x3333,	// (0x00003333) list_double2_graphic_pane_vc_g1_ParamLimits

0x3333,	// (0x00003333) list_double2_graphic_pane_vc_g1

0x2325,	// (0x00002325) list_double2_graphic_pane_vc_g2_ParamLimits

0x2325,	// (0x00002325) list_double2_graphic_pane_vc_g2

0x3253,	// (0x00003253) list_double2_graphic_pane_vc_g3_ParamLimits

0x3253,	// (0x00003253) list_double2_graphic_pane_vc_g3

0x0002,

0xa4c8,	// (0x0000a4c8) list_double2_graphic_pane_vc_g_ParamLimits

0xa4c8,	// (0x0000a4c8) list_double2_graphic_pane_vc_g

0x333f,	// (0x0000333f) list_double2_graphic_pane_vc_t1_ParamLimits

0x333f,	// (0x0000333f) list_double2_graphic_pane_vc_t1

0x2325,	// (0x00002325) list_single_heading_pane_vc_g1_ParamLimits

0x2325,	// (0x00002325) list_single_heading_pane_vc_g1

0x3253,	// (0x00003253) list_single_heading_pane_vc_g2_ParamLimits

0x3253,	// (0x00003253) list_single_heading_pane_vc_g2

0x0001,

0xa4e9,	// (0x0000a4e9) list_single_heading_pane_vc_g_ParamLimits

0xa4e9,	// (0x0000a4e9) list_single_heading_pane_vc_g

0x3442,	// (0x00003442) list_single_heading_pane_vc_t1_ParamLimits

0x3442,	// (0x00003442) list_single_heading_pane_vc_t1

0x3458,	// (0x00003458) list_single_heading_pane_vc_t2_ParamLimits

0x3458,	// (0x00003458) list_single_heading_pane_vc_t2

0x0001,

0xa4ee,	// (0x0000a4ee) list_single_heading_pane_vc_t_ParamLimits

0xa4ee,	// (0x0000a4ee) list_single_heading_pane_vc_t

0x3480,	// (0x00003480) list_setting_number_pane_vc_g1_ParamLimits

0x3480,	// (0x00003480) list_setting_number_pane_vc_g1

0x348c,	// (0x0000348c) list_setting_number_pane_vc_g2_ParamLimits

0x348c,	// (0x0000348c) list_setting_number_pane_vc_g2

0x0001,

0xa4f3,	// (0x0000a4f3) list_setting_number_pane_vc_g_ParamLimits

0xa4f3,	// (0x0000a4f3) list_setting_number_pane_vc_g

0x3498,	// (0x00003498) list_setting_number_pane_vc_t1_ParamLimits

0x3498,	// (0x00003498) list_setting_number_pane_vc_t1

0x34ac,	// (0x000034ac) list_setting_number_pane_vc_t2_ParamLimits

0x34ac,	// (0x000034ac) list_setting_number_pane_vc_t2

0x34c4,	// (0x000034c4) list_setting_number_pane_vc_t3_ParamLimits

0x34c4,	// (0x000034c4) list_setting_number_pane_vc_t3

0x0002,

0xa4f8,	// (0x0000a4f8) list_setting_number_pane_vc_t_ParamLimits

0xa4f8,	// (0x0000a4f8) list_setting_number_pane_vc_t

0x34ea,	// (0x000034ea) set_value_pane_vc_ParamLimits

0x34ea,	// (0x000034ea) set_value_pane_vc

0x4c85,	// (0x00004c85) list_double2_graphic_pane_vc_ParamLimits

0x4c85,	// (0x00004c85) list_double2_graphic_pane_vc

0x4c85,	// (0x00004c85) list_double2_large_graphic_pane_vc_ParamLimits

0x4c85,	// (0x00004c85) list_double2_large_graphic_pane_vc

0x4c85,	// (0x00004c85) list_double2_pane_vc_ParamLimits

0x4c85,	// (0x00004c85) list_double2_pane_vc

0x4c85,	// (0x00004c85) list_double_graphic_heading_pane_vc_ParamLimits

0x4c85,	// (0x00004c85) list_double_graphic_heading_pane_vc

0x4c85,	// (0x00004c85) list_double_graphic_pane_vc_ParamLimits

0x4c85,	// (0x00004c85) list_double_graphic_pane_vc

0x4c85,	// (0x00004c85) list_double_heading_pane_vc_ParamLimits

0x4c85,	// (0x00004c85) list_double_heading_pane_vc

0x4c96,	// (0x00004c96) list_double_large_graphic_pane_vc_ParamLimits

0x4c96,	// (0x00004c96) list_double_large_graphic_pane_vc

0x4c85,	// (0x00004c85) list_double_number_pane_vc_ParamLimits

0x4c85,	// (0x00004c85) list_double_number_pane_vc

0x4c85,	// (0x00004c85) list_double_pane_vc_ParamLimits

0x4c85,	// (0x00004c85) list_double_pane_vc

0x4c85,	// (0x00004c85) list_double_time_pane_vc_ParamLimits

0x4c85,	// (0x00004c85) list_double_time_pane_vc

0x4c85,	// (0x00004c85) list_setting_number_pane_vc_ParamLimits

0x4c85,	// (0x00004c85) list_setting_number_pane_vc

0x4c85,	// (0x00004c85) list_setting_pane_vc_ParamLimits

0x4c85,	// (0x00004c85) list_setting_pane_vc

0x4c85,	// (0x00004c85) list_single_graphic_heading_pane_vc_ParamLimits

0x4c85,	// (0x00004c85) list_single_graphic_heading_pane_vc

0x4c85,	// (0x00004c85) list_single_heading_pane_vc_ParamLimits

0x4c85,	// (0x00004c85) list_single_heading_pane_vc

0x4c85,	// (0x00004c85) list_single_number_heading_pane_vc_ParamLimits

0x4c85,	// (0x00004c85) list_single_number_heading_pane_vc

0x3333,	// (0x00003333) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3333,	// (0x00003333) list_double_graphic_heading_pane_vc_g1

0x2325,	// (0x00002325) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x2325,	// (0x00002325) list_double_graphic_heading_pane_vc_g2

0x3253,	// (0x00003253) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3253,	// (0x00003253) list_double_graphic_heading_pane_vc_g3

0x0002,

0xa4c8,	// (0x0000a4c8) list_double_graphic_heading_pane_vc_g_ParamLimits

0xa4c8,	// (0x0000a4c8) list_double_graphic_heading_pane_vc_g

0x52c9,	// (0x000052c9) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x52c9,	// (0x000052c9) list_double_graphic_heading_pane_vc_t1

0x52df,	// (0x000052df) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x52df,	// (0x000052df) list_double_graphic_heading_pane_vc_t2

0x0001,

0xa6fd,	// (0x0000a6fd) list_double_graphic_heading_pane_vc_t_ParamLimits

0xa6fd,	// (0x0000a6fd) list_double_graphic_heading_pane_vc_t

0x3480,	// (0x00003480) list_setting_pane_vc_g1_ParamLimits

0x3480,	// (0x00003480) list_setting_pane_vc_g1

0x348c,	// (0x0000348c) list_setting_pane_vc_g2_ParamLimits

0x348c,	// (0x0000348c) list_setting_pane_vc_g2

0x0001,

0xa4f3,	// (0x0000a4f3) list_setting_pane_vc_g_ParamLimits

0xa4f3,	// (0x0000a4f3) list_setting_pane_vc_g

0x5532,	// (0x00005532) list_setting_pane_vc_t1_ParamLimits

0x5532,	// (0x00005532) list_setting_pane_vc_t1

0x554a,	// (0x0000554a) list_setting_pane_vc_t2_ParamLimits

0x554a,	// (0x0000554a) list_setting_pane_vc_t2

0x0001,

0xa740,	// (0x0000a740) list_setting_pane_vc_t_ParamLimits

0xa740,	// (0x0000a740) list_setting_pane_vc_t

0x34ea,	// (0x000034ea) set_value_pane_cp_vc_ParamLimits

0x34ea,	// (0x000034ea) set_value_pane_cp_vc

0x2325,	// (0x00002325) list_single_number_heading_pane_vc_g1_ParamLimits

0x2325,	// (0x00002325) list_single_number_heading_pane_vc_g1

0x3253,	// (0x00003253) list_single_number_heading_pane_vc_g2_ParamLimits

0x3253,	// (0x00003253) list_single_number_heading_pane_vc_g2

0x0001,

0xa4e9,	// (0x0000a4e9) list_single_number_heading_pane_vc_g_ParamLimits

0xa4e9,	// (0x0000a4e9) list_single_number_heading_pane_vc_g

0x5560,	// (0x00005560) list_single_number_heading_pane_vc_t1_ParamLimits

0x5560,	// (0x00005560) list_single_number_heading_pane_vc_t1

0x5576,	// (0x00005576) list_single_number_heading_pane_vc_t2_ParamLimits

0x5576,	// (0x00005576) list_single_number_heading_pane_vc_t2

0x5588,	// (0x00005588) list_single_number_heading_pane_vc_t3_ParamLimits

0x5588,	// (0x00005588) list_single_number_heading_pane_vc_t3

0x0002,

0xa745,	// (0x0000a745) list_single_number_heading_pane_vc_t_ParamLimits

0xa745,	// (0x0000a745) list_single_number_heading_pane_vc_t

0x3333,	// (0x00003333) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3333,	// (0x00003333) list_single_graphic_heading_pane_vc_g1

0x2325,	// (0x00002325) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2325,	// (0x00002325) list_single_graphic_heading_pane_vc_g4

0x3253,	// (0x00003253) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3253,	// (0x00003253) list_single_graphic_heading_pane_vc_g5

0x0002,

0xa4c8,	// (0x0000a4c8) list_single_graphic_heading_pane_vc_g_ParamLimits

0xa4c8,	// (0x0000a4c8) list_single_graphic_heading_pane_vc_g

0x559a,	// (0x0000559a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x559a,	// (0x0000559a) list_single_graphic_heading_pane_vc_t1

0x55b0,	// (0x000055b0) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x55b0,	// (0x000055b0) list_single_graphic_heading_pane_vc_t2

0x0001,

0xa74c,	// (0x0000a74c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xa74c,	// (0x0000a74c) list_single_graphic_heading_pane_vc_t

0x2325,	// (0x00002325) list_double2_pane_vc_g1_ParamLimits

0x2325,	// (0x00002325) list_double2_pane_vc_g1

0x3253,	// (0x00003253) list_double2_pane_vc_g2_ParamLimits

0x3253,	// (0x00003253) list_double2_pane_vc_g2

0x0001,

0xa4e9,	// (0x0000a4e9) list_double2_pane_vc_g_ParamLimits

0xa4e9,	// (0x0000a4e9) list_double2_pane_vc_g

0x55c2,	// (0x000055c2) list_double2_pane_vc_t1_ParamLimits

0x55c2,	// (0x000055c2) list_double2_pane_vc_t1

0x55d8,	// (0x000055d8) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x55d8,	// (0x000055d8) list_double2_large_graphic_pane_vc_g1

0x2325,	// (0x00002325) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2325,	// (0x00002325) list_double2_large_graphic_pane_vc_g2

0x3253,	// (0x00003253) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3253,	// (0x00003253) list_double2_large_graphic_pane_vc_g3

0x0002,

0xa751,	// (0x0000a751) list_double2_large_graphic_pane_vc_g_ParamLimits

0xa751,	// (0x0000a751) list_double2_large_graphic_pane_vc_g

0x55e4,	// (0x000055e4) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x55e4,	// (0x000055e4) list_double2_large_graphic_pane_vc_t1

0x55fa,	// (0x000055fa) list_double_time_pane_vc_g1_ParamLimits

0x55fa,	// (0x000055fa) list_double_time_pane_vc_g1

0x5606,	// (0x00005606) list_double_time_pane_vc_g2_ParamLimits

0x5606,	// (0x00005606) list_double_time_pane_vc_g2

0x0001,

0xa758,	// (0x0000a758) list_double_time_pane_vc_g_ParamLimits

0xa758,	// (0x0000a758) list_double_time_pane_vc_g

0x5612,	// (0x00005612) list_double_time_pane_vc_t1_ParamLimits

0x5612,	// (0x00005612) list_double_time_pane_vc_t1

0x5630,	// (0x00005630) list_double_time_pane_vc_t2_ParamLimits

0x5630,	// (0x00005630) list_double_time_pane_vc_t2

0x564e,	// (0x0000564e) list_double_time_pane_vc_t3_ParamLimits

0x564e,	// (0x0000564e) list_double_time_pane_vc_t3

0x5660,	// (0x00005660) list_double_time_pane_vc_t4_ParamLimits

0x5660,	// (0x00005660) list_double_time_pane_vc_t4

0x0003,

0xa75d,	// (0x0000a75d) list_double_time_pane_vc_t_ParamLimits

0xa75d,	// (0x0000a75d) list_double_time_pane_vc_t

0x2325,	// (0x00002325) list_double_pane_vc_g1_ParamLimits

0x2325,	// (0x00002325) list_double_pane_vc_g1

0x3253,	// (0x00003253) list_double_pane_vc_g2_ParamLimits

0x3253,	// (0x00003253) list_double_pane_vc_g2

0x0001,

0xa4e9,	// (0x0000a4e9) list_double_pane_vc_g_ParamLimits

0xa4e9,	// (0x0000a4e9) list_double_pane_vc_g

0x5672,	// (0x00005672) list_double_pane_vc_t1_ParamLimits

0x5672,	// (0x00005672) list_double_pane_vc_t1

0x5684,	// (0x00005684) list_double_pane_vc_t2_ParamLimits

0x5684,	// (0x00005684) list_double_pane_vc_t2

0x0001,

0xa766,	// (0x0000a766) list_double_pane_vc_t_ParamLimits

0xa766,	// (0x0000a766) list_double_pane_vc_t

0x2325,	// (0x00002325) list_double_number_pane_vc_g1_ParamLimits

0x2325,	// (0x00002325) list_double_number_pane_vc_g1

0x3253,	// (0x00003253) list_double_number_pane_vc_g2_ParamLimits

0x3253,	// (0x00003253) list_double_number_pane_vc_g2

0x0001,

0xa4e9,	// (0x0000a4e9) list_double_number_pane_vc_g_ParamLimits

0xa4e9,	// (0x0000a4e9) list_double_number_pane_vc_g

0x569a,	// (0x0000569a) list_double_number_pane_vc_t1_ParamLimits

0x569a,	// (0x0000569a) list_double_number_pane_vc_t1

0x56ac,	// (0x000056ac) list_double_number_pane_vc_t2_ParamLimits

0x56ac,	// (0x000056ac) list_double_number_pane_vc_t2

0x5684,	// (0x00005684) list_double_number_pane_vc_t3_ParamLimits

0x5684,	// (0x00005684) list_double_number_pane_vc_t3

0x0002,

0xa76b,	// (0x0000a76b) list_double_number_pane_vc_t_ParamLimits

0xa76b,	// (0x0000a76b) list_double_number_pane_vc_t

0x56be,	// (0x000056be) list_double_large_graphic_pane_vc_g1_ParamLimits

0x56be,	// (0x000056be) list_double_large_graphic_pane_vc_g1

0x56da,	// (0x000056da) list_double_large_graphic_pane_vc_g2_ParamLimits

0x56da,	// (0x000056da) list_double_large_graphic_pane_vc_g2

0x56ee,	// (0x000056ee) list_double_large_graphic_pane_vc_g3_ParamLimits

0x56ee,	// (0x000056ee) list_double_large_graphic_pane_vc_g3

0x56fd,	// (0x000056fd) list_double_large_graphic_pane_vc_g4_ParamLimits

0x56fd,	// (0x000056fd) list_double_large_graphic_pane_vc_g4

0x0003,

0xa772,	// (0x0000a772) list_double_large_graphic_pane_vc_g_ParamLimits

0xa772,	// (0x0000a772) list_double_large_graphic_pane_vc_g

0x5709,	// (0x00005709) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5709,	// (0x00005709) list_double_large_graphic_pane_vc_t1

0x5723,	// (0x00005723) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5723,	// (0x00005723) list_double_large_graphic_pane_vc_t2

0x0001,

0xa77b,	// (0x0000a77b) list_double_large_graphic_pane_vc_t_ParamLimits

0xa77b,	// (0x0000a77b) list_double_large_graphic_pane_vc_t

0x2325,	// (0x00002325) list_double_heading_pane_vc_g1_ParamLimits

0x2325,	// (0x00002325) list_double_heading_pane_vc_g1

0x3253,	// (0x00003253) list_double_heading_pane_vc_g2_ParamLimits

0x3253,	// (0x00003253) list_double_heading_pane_vc_g2

0x0001,

0xa4e9,	// (0x0000a4e9) list_double_heading_pane_vc_g_ParamLimits

0xa4e9,	// (0x0000a4e9) list_double_heading_pane_vc_g

0x5743,	// (0x00005743) list_double_heading_pane_vc_t1_ParamLimits

0x5743,	// (0x00005743) list_double_heading_pane_vc_t1

0x5755,	// (0x00005755) list_double_heading_pane_vc_t2_ParamLimits

0x5755,	// (0x00005755) list_double_heading_pane_vc_t2

0x0001,

0xa780,	// (0x0000a780) list_double_heading_pane_vc_t_ParamLimits

0xa780,	// (0x0000a780) list_double_heading_pane_vc_t

0x576b,	// (0x0000576b) list_double_graphic_pane_vc_g1_ParamLimits

0x576b,	// (0x0000576b) list_double_graphic_pane_vc_g1

0x5777,	// (0x00005777) list_double_graphic_pane_vc_g2_ParamLimits

0x5777,	// (0x00005777) list_double_graphic_pane_vc_g2

0x2325,	// (0x00002325) list_double_graphic_pane_vc_g3_ParamLimits

0x2325,	// (0x00002325) list_double_graphic_pane_vc_g3

0x0003,

0xa785,	// (0x0000a785) list_double_graphic_pane_vc_g_ParamLimits

0xa785,	// (0x0000a785) list_double_graphic_pane_vc_g

0x5794,	// (0x00005794) list_double_graphic_pane_vc_t1_ParamLimits

0x5794,	// (0x00005794) list_double_graphic_pane_vc_t1

0x57b2,	// (0x000057b2) list_double_graphic_pane_vc_t2_ParamLimits

0x57b2,	// (0x000057b2) list_double_graphic_pane_vc_t2

0x0001,

0xa78e,	// (0x0000a78e) list_double_graphic_pane_vc_t_ParamLimits

0xa78e,	// (0x0000a78e) list_double_graphic_pane_vc_t

0x0044,	// (0x00000044) aid_size_cell_fastswap

0xac32,	// (0x0000ac32) aid_size_cell_touch_ParamLimits

0xac32,	// (0x0000ac32) aid_size_cell_touch

0x02a7,	// (0x000002a7) popup_fast_swap_wide_window_ParamLimits

0x02a7,	// (0x000002a7) popup_fast_swap_wide_window

0xadae,	// (0x0000adae) touch_pane_ParamLimits

0xadae,	// (0x0000adae) touch_pane

0x1159,	// (0x00001159) button_value_adjust_pane_cp2

0x1159,	// (0x00001159) button_value_adjust_pane_cp4

0x1179,	// (0x00001179) form_field_data_pane_cp2

0xb554,	// (0x0000b554) form_field_data_wide_pane_cp2

0x1981,	// (0x00001981) bg_scroll_pane_ParamLimits

0x19a0,	// (0x000019a0) scroll_handle_pane_ParamLimits

0x19b4,	// (0x000019b4) scroll_sc2_down_pane_ParamLimits

0x19b4,	// (0x000019b4) scroll_sc2_down_pane

0x19db,	// (0x000019db) scroll_sc2_up_pane_ParamLimits

0x19db,	// (0x000019db) scroll_sc2_up_pane

0xcbab,	// (0x0000cbab) grid_wheel_folder_pane_g1_ParamLimits

0xcbab,	// (0x0000cbab) grid_wheel_folder_pane_g1

0x2067,	// (0x00002067) clock_nsta_pane_cp2_ParamLimits

0x2067,	// (0x00002067) clock_nsta_pane_cp2

0xb86a,	// (0x0000b86a) listscroll_midp_pane_ParamLimits

0xb876,	// (0x0000b876) midp_canvas_pane

0x28d2,	// (0x000028d2) nsta_clock_indic_pane

0x2930,	// (0x00002930) listscroll_form_pane_vc

0x2954,	// (0x00002954) listscroll_set_pane_vc_ParamLimits

0x2954,	// (0x00002954) listscroll_set_pane_vc

0xc1fd,	// (0x0000c1fd) clock_nsta_pane

0xc227,	// (0x0000c227) indicator_nsta_pane

0x32a5,	// (0x000032a5) bg_popup_sub_pane_cp2_ParamLimits

0x32b9,	// (0x000032b9) find_pane_cp2_ParamLimits

0x32b9,	// (0x000032b9) find_pane_cp2

0x32cf,	// (0x000032cf) grid_toobar_pane_ParamLimits

0x34fa,	// (0x000034fa) list_form_gen_pane_vc_ParamLimits

0x34fa,	// (0x000034fa) list_form_gen_pane_vc

0x3510,	// (0x00003510) scroll_pane_cp8_vc_ParamLimits

0x3510,	// (0x00003510) scroll_pane_cp8_vc

0x3621,	// (0x00003621) data_form_wide_pane_vc_ParamLimits

0x3621,	// (0x00003621) data_form_wide_pane_vc

0x362d,	// (0x0000362d) form_field_data_wide_pane_vc_g1

0x3635,	// (0x00003635) form_field_data_wide_pane_vc_t1_ParamLimits

0x3635,	// (0x00003635) form_field_data_wide_pane_vc_t1

0x1221,	// (0x00001221) input_focus_pane_cp6_vc_ParamLimits

0x1221,	// (0x00001221) input_focus_pane_cp6_vc

0x3941,	// (0x00003941) list_midp_pane_ParamLimits

0x4e73,	// (0x00004e73) scroll_pane_cp16_ParamLimits

0x4e73,	// (0x00004e73) scroll_pane_cp16

0x3983,	// (0x00003983) button_value_adjust_pane_ParamLimits

0x3983,	// (0x00003983) button_value_adjust_pane

0xc806,	// (0x0000c806) button_value_adjust_pane_cp6_ParamLimits

0xc806,	// (0x0000c806) button_value_adjust_pane_cp6

0xc910,	// (0x0000c910) settings_code_pane_cp_ParamLimits

0xc910,	// (0x0000c910) settings_code_pane_cp

0x002a,	// (0x0000002a) cell_touch_pane_g1

0x002a,	// (0x0000002a) cell_touch_pane_g2

0x0001,

0xa40d,	// (0x0000a40d) cell_touch_pane_g

0xcaa3,	// (0x0000caa3) cell_touch_pane_cp_ParamLimits

0xcaa3,	// (0x0000caa3) cell_touch_pane_cp

0xcabf,	// (0x0000cabf) cell_touch_pane_ParamLimits

0xcabf,	// (0x0000cabf) cell_touch_pane

0x002a,	// (0x0000002a) scroll_sc2_down_pane_g1

0x002a,	// (0x0000002a) scroll_sc2_up_pane_g1

0x027d,	// (0x0000027d) bg_set_opt_pane_cp4_vc

0x52f7,	// (0x000052f7) list_set_graphic_pane_vc_g1_ParamLimits

0x52f7,	// (0x000052f7) list_set_graphic_pane_vc_g1

0x5303,	// (0x00005303) list_set_graphic_pane_vc_g2_ParamLimits

0x5303,	// (0x00005303) list_set_graphic_pane_vc_g2

0x0001,

0xa702,	// (0x0000a702) list_set_graphic_pane_vc_g_ParamLimits

0xa702,	// (0x0000a702) list_set_graphic_pane_vc_g

0x530f,	// (0x0000530f) text_primary_small_cp13_vc_ParamLimits

0x530f,	// (0x0000530f) text_primary_small_cp13_vc

0x5327,	// (0x00005327) list_set_graphic_pane_vc_ParamLimits

0x5327,	// (0x00005327) list_set_graphic_pane_vc

0x027d,	// (0x0000027d) input_focus_pane_cp2_vc

0x002a,	// (0x0000002a) setting_code_pane_vc_g1

0x057b,	// (0x0000057b) setting_code_pane_vc_t1

0x5338,	// (0x00005338) set_text_pane_vc_t1_ParamLimits

0x5338,	// (0x00005338) set_text_pane_vc_t1

0x027d,	// (0x0000027d) input_focus_pane_cp1_vc

0x5352,	// (0x00005352) list_set_text_pane_vc

0x002a,	// (0x0000002a) setting_text_pane_vc_g1

0x027d,	// (0x0000027d) bg_set_opt_pane_cp2_vc

0x054c,	// (0x0000054c) setting_slider_graphic_pane_vc_g1

0x535c,	// (0x0000535c) setting_slider_graphic_pane_vc_t1

0x536b,	// (0x0000536b) setting_slider_graphic_pane_vc_t2

0x0001,

0xa707,	// (0x0000a707) setting_slider_graphic_pane_vc_t

0x537a,	// (0x0000537a) slider_set_pane_cp_vc

0x5382,	// (0x00005382) slider_set_pane_vc_g1

0x538b,	// (0x0000538b) slider_set_pane_vc_g2

0x0006,

0xa70c,	// (0x0000a70c) slider_set_pane_vc_g

0x1362,	// (0x00001362) set_opt_bg_pane_g1_copy1

0x136a,	// (0x0000136a) set_opt_bg_pane_g2_copy1

0x53b7,	// (0x000053b7) set_opt_bg_pane_g3_copy1

0x137a,	// (0x0000137a) set_opt_bg_pane_g4_copy1

0x1382,	// (0x00001382) set_opt_bg_pane_g5_copy1

0x138a,	// (0x0000138a) set_opt_bg_pane_g6_copy1

0x53bf,	// (0x000053bf) set_opt_bg_pane_g7_copy1

0x53c7,	// (0x000053c7) set_opt_bg_pane_g8_copy1

0x53cf,	// (0x000053cf) set_opt_bg_pane_g9_copy1

0x027d,	// (0x0000027d) bg_set_opt_pane_cp_vc

0x53d7,	// (0x000053d7) setting_slider_pane_vc_t1

0x53e6,	// (0x000053e6) setting_slider_pane_vc_t2

0x53f5,	// (0x000053f5) setting_slider_pane_vc_t3

0x0002,

0xa71b,	// (0x0000a71b) setting_slider_pane_vc_t

0x5404,	// (0x00005404) slider_set_pane_vc

0x4187,	// (0x00004187) volume_set_pane_vc_g1

0x540c,	// (0x0000540c) volume_set_pane_vc_g2

0x5415,	// (0x00005415) volume_set_pane_vc_g3

0x541e,	// (0x0000541e) volume_set_pane_vc_g4

0x5427,	// (0x00005427) volume_set_pane_vc_g5

0x5430,	// (0x00005430) volume_set_pane_vc_g6

0x5439,	// (0x00005439) volume_set_pane_vc_g7

0x5442,	// (0x00005442) volume_set_pane_vc_g8

0x544b,	// (0x0000544b) volume_set_pane_vc_g9

0x5454,	// (0x00005454) volume_set_pane_vc_g10

0x0009,

0xa722,	// (0x0000a722) volume_set_pane_vc_g

0x545d,	// (0x0000545d) volume_set_pane_vc

0x5465,	// (0x00005465) button_value_adjust_pane_cp1_vc

0x546d,	// (0x0000546d) list_highlight_pane_cp2_vc

0x5476,	// (0x00005476) list_set_pane_vc_ParamLimits

0x5476,	// (0x00005476) list_set_pane_vc

0x54c8,	// (0x000054c8) main_pane_set_vc_t1_ParamLimits

0x54c8,	// (0x000054c8) main_pane_set_vc_t1

0x54dd,	// (0x000054dd) main_pane_set_vc_t2_ParamLimits

0x54dd,	// (0x000054dd) main_pane_set_vc_t2

0x54ef,	// (0x000054ef) main_pane_set_vc_t3_ParamLimits

0x54ef,	// (0x000054ef) main_pane_set_vc_t3

0x5501,	// (0x00005501) main_pane_set_vc_t4_ParamLimits

0x5501,	// (0x00005501) main_pane_set_vc_t4

0x0003,

0xa737,	// (0x0000a737) main_pane_set_vc_t_ParamLimits

0xa737,	// (0x0000a737) main_pane_set_vc_t

0x5513,	// (0x00005513) setting_code_pane_vc_ParamLimits

0x5513,	// (0x00005513) setting_code_pane_vc

0x5522,	// (0x00005522) setting_slider_graphic_pane_vc

0x5522,	// (0x00005522) setting_slider_pane_vc

0x5522,	// (0x00005522) setting_text_pane_vc

0x5522,	// (0x00005522) setting_volume_pane_vc

0x552a,	// (0x0000552a) scroll_pane_cp121_vc

0x1147,	// (0x00001147) set_content_pane_vc

0x57d0,	// (0x000057d0) button_value_adjust_pane_g1

0x57d9,	// (0x000057d9) button_value_adjust_pane_g2

0x0001,

0xa793,	// (0x0000a793) button_value_adjust_pane_g

0x57e2,	// (0x000057e2) form_field_slider_wide_pane_vc_t1_ParamLimits

0x57e2,	// (0x000057e2) form_field_slider_wide_pane_vc_t1

0x57f4,	// (0x000057f4) form_field_slider_wide_pane_vc_t2_ParamLimits

0x57f4,	// (0x000057f4) form_field_slider_wide_pane_vc_t2

0x0002,

0xa798,	// (0x0000a798) form_field_slider_wide_pane_vc_t_ParamLimits

0xa798,	// (0x0000a798) form_field_slider_wide_pane_vc_t

0x07bb,	// (0x000007bb) input_focus_pane_cp10_vc_ParamLimits

0x07bb,	// (0x000007bb) input_focus_pane_cp10_vc

0x581c,	// (0x0000581c) slider_cont_pane_cp1_vc_ParamLimits

0x581c,	// (0x0000581c) slider_cont_pane_cp1_vc

0x582c,	// (0x0000582c) slider_form_pane_g1_cp2

0x538b,	// (0x0000538b) slider_form_pane_g2_cp2

0x5859,	// (0x00005859) form_field_slider_pane_vc_t3

0x5867,	// (0x00005867) form_field_slider_pane_vc_t4

0x5875,	// (0x00005875) slider_form_pane_vc_ParamLimits

0x5875,	// (0x00005875) slider_form_pane_vc

0x5882,	// (0x00005882) form_field_slider_pane_vc_t1_ParamLimits

0x5882,	// (0x00005882) form_field_slider_pane_vc_t1

0x57f4,	// (0x000057f4) form_field_slider_pane_vc_t2_ParamLimits

0x57f4,	// (0x000057f4) form_field_slider_pane_vc_t2

0x0001,

0xa7aa,	// (0x0000a7aa) form_field_slider_pane_vc_t_ParamLimits

0xa7aa,	// (0x0000a7aa) form_field_slider_pane_vc_t

0x07bb,	// (0x000007bb) input_focus_pane_cp9_vc_ParamLimits

0x07bb,	// (0x000007bb) input_focus_pane_cp9_vc

0x5898,	// (0x00005898) slider_cont_pane_vc_ParamLimits

0x5898,	// (0x00005898) slider_cont_pane_vc

0x58aa,	// (0x000058aa) list_form_graphic_pane_cp_vc_ParamLimits

0x58aa,	// (0x000058aa) list_form_graphic_pane_cp_vc

0x362d,	// (0x0000362d) form_field_popup_wide_pane_vc_g1

0x58bf,	// (0x000058bf) form_field_popup_wide_pane_vc_t1_ParamLimits

0x58bf,	// (0x000058bf) form_field_popup_wide_pane_vc_t1

0x1221,	// (0x00001221) input_focus_pane_cp8_vc_ParamLimits

0x1221,	// (0x00001221) input_focus_pane_cp8_vc

0x58fe,	// (0x000058fe) list_form_wide_pane_vc_ParamLimits

0x58fe,	// (0x000058fe) list_form_wide_pane_vc

0x590a,	// (0x0000590a) list_form_graphic_pane_vc_g1

0x5912,	// (0x00005912) list_form_graphic_pane_vc_t1_ParamLimits

0x5912,	// (0x00005912) list_form_graphic_pane_vc_t1

0x04a3,	// (0x000004a3) list_highlight_pane_cp5_vc_ParamLimits

0x04a3,	// (0x000004a3) list_highlight_pane_cp5_vc

0x592e,	// (0x0000592e) list_form_graphic_pane_vc_ParamLimits

0x592e,	// (0x0000592e) list_form_graphic_pane_vc

0x362d,	// (0x0000362d) form_field_popup_pane_vc_g1

0x5944,	// (0x00005944) form_field_popup_pane_vc_t1_ParamLimits

0x5944,	// (0x00005944) form_field_popup_pane_vc_t1

0x1221,	// (0x00001221) input_focus_pane_cp7_vc_ParamLimits

0x1221,	// (0x00001221) input_focus_pane_cp7_vc

0x5959,	// (0x00005959) list_form_pane_vc_ParamLimits

0x5959,	// (0x00005959) list_form_pane_vc

0x5965,	// (0x00005965) data_form_pane_vc_t1_ParamLimits

0x5965,	// (0x00005965) data_form_pane_vc_t1

0x1362,	// (0x00001362) input_focus_pane_vc_g1

0x136a,	// (0x0000136a) input_focus_pane_vc_g2

0x1372,	// (0x00001372) input_focus_pane_vc_g3

0x137a,	// (0x0000137a) input_focus_pane_vc_g4

0x1382,	// (0x00001382) input_focus_pane_vc_g5

0x138a,	// (0x0000138a) input_focus_pane_vc_g6

0x1392,	// (0x00001392) input_focus_pane_vc_g7

0x139a,	// (0x0000139a) input_focus_pane_vc_g8

0x13a2,	// (0x000013a2) input_focus_pane_vc_g9

0x002a,	// (0x0000002a) input_focus_pane_vc_g10

0x0009,

0xa396,	// (0x0000a396) input_focus_pane_vc_g

0x3621,	// (0x00003621) data_form_pane_vc_ParamLimits

0x3621,	// (0x00003621) data_form_pane_vc

0x362d,	// (0x0000362d) form_field_data_pane_vc_g1

0x5980,	// (0x00005980) form_field_data_pane_vc_t1_ParamLimits

0x5980,	// (0x00005980) form_field_data_pane_vc_t1

0x1221,	// (0x00001221) input_focus_pane_vc_ParamLimits

0x1221,	// (0x00001221) input_focus_pane_vc

0x5996,	// (0x00005996) button_value_adjust_pane_cp3_vc

0x599e,	// (0x0000599e) button_value_adjust_pane_cp5_vc

0x59a6,	// (0x000059a6) form_field_data_pane_vc_ParamLimits

0x59a6,	// (0x000059a6) form_field_data_pane_vc

0x59bd,	// (0x000059bd) form_field_data_pane_vc_cp2

0x59c5,	// (0x000059c5) form_field_data_wide_pane_vc_ParamLimits

0x59c5,	// (0x000059c5) form_field_data_wide_pane_vc

0x59db,	// (0x000059db) form_field_data_wide_pane_vc_cp2

0x59e3,	// (0x000059e3) form_field_popup_pane_vc_ParamLimits

0x59e3,	// (0x000059e3) form_field_popup_pane_vc

0x59fa,	// (0x000059fa) form_field_popup_wide_pane_vc_ParamLimits

0x59fa,	// (0x000059fa) form_field_popup_wide_pane_vc

0x5a10,	// (0x00005a10) form_field_slider_pane_vc_ParamLimits

0x5a10,	// (0x00005a10) form_field_slider_pane_vc

0x5a23,	// (0x00005a23) form_field_slider_wide_pane_vc_ParamLimits

0x5a23,	// (0x00005a23) form_field_slider_wide_pane_vc

0xcadd,	// (0x0000cadd) grid_touch_1_pane_ParamLimits

0xcadd,	// (0x0000cadd) grid_touch_1_pane

0xcaf1,	// (0x0000caf1) grid_touch_2_pane_ParamLimits

0xcaf1,	// (0x0000caf1) grid_touch_2_pane

0x5af1,	// (0x00005af1) touch_pane_g1_ParamLimits

0x5af1,	// (0x00005af1) touch_pane_g1

0x5a5a,	// (0x00005a5a) cell_app_pane_cp_wide_ParamLimits

0x5a5a,	// (0x00005a5a) cell_app_pane_cp_wide

0x5a6b,	// (0x00005a6b) grid_popup_fast_wide_pane_ParamLimits

0x5a6b,	// (0x00005a6b) grid_popup_fast_wide_pane

0x5a7f,	// (0x00005a7f) scroll_pane_cp19_ParamLimits

0x5a7f,	// (0x00005a7f) scroll_pane_cp19

0x027d,	// (0x0000027d) bg_popup_window_pane_cp20

0x5a93,	// (0x00005a93) listscroll_popup_fast_wide_pane

0x1548,	// (0x00001548) grid_indicator_nsta_pane

0x5a9b,	// (0x00005a9b) clock_nsta_pane_g1

0x5aa4,	// (0x00005aa4) clock_nsta_pane_t1

0xcb1b,	// (0x0000cb1b) cell_indicator_nsta_pane_ParamLimits

0xcb1b,	// (0x0000cb1b) cell_indicator_nsta_pane

0x5af1,	// (0x00005af1) cell_indicator_nsta_pane_g1

0xcb32,	// (0x0000cb32) cell_indicator_nsta_pane_g2

0x0001,

0xe6c1,	// (0x0000e6c1) cell_indicator_nsta_pane_g

0x5b0c,	// (0x00005b0c) clock_nsta_pane_cp

0x5b14,	// (0x00005b14) indicator_nsta_pane_cp

0x5b1c,	// (0x00005b1c) nsta_clock_indic_pane_g1

0x060d,	// (0x0000060d) grid_indicator_pane

0x1acd,	// (0x00001acd) scroll_pane_cp29

0x1f9c,	// (0x00001f9c) indicator_nsta_pane_cp2_ParamLimits

0x1f9c,	// (0x00001f9c) indicator_nsta_pane_cp2

0x04a3,	// (0x000004a3) main_apps_wheel_pane

0x3808,	// (0x00003808) form_midp_field_text_pane_ParamLimits

0x394d,	// (0x0000394d) scroll_bar_cp050_ParamLimits

0x5b6c,	// (0x00005b6c) cell_indicator_pane_ParamLimits

0x5b6c,	// (0x00005b6c) cell_indicator_pane

0x5b80,	// (0x00005b80) cell_indicator_pane_g1

0xcb3f,	// (0x0000cb3f) grid_wheel_folder_pane_ParamLimits

0xcb3f,	// (0x0000cb3f) grid_wheel_folder_pane

0xcb4d,	// (0x0000cb4d) list_wheel_apps_pane_ParamLimits

0xcb4d,	// (0x0000cb4d) list_wheel_apps_pane

0xcb59,	// (0x0000cb59) main_apps_wheel_pane_g1_ParamLimits

0xcb59,	// (0x0000cb59) main_apps_wheel_pane_g1

0xcb65,	// (0x0000cb65) main_apps_wheel_pane_g2_ParamLimits

0xcb65,	// (0x0000cb65) main_apps_wheel_pane_g2

0x0001,

0xe6c6,	// (0x0000e6c6) main_apps_wheel_pane_g_ParamLimits

0xe6c6,	// (0x0000e6c6) main_apps_wheel_pane_g

0xcb71,	// (0x0000cb71) main_apps_wheel_pane_t1_ParamLimits

0xcb71,	// (0x0000cb71) main_apps_wheel_pane_t1

0xcb83,	// (0x0000cb83) list_wheel_apps_pane_g1

0xcb8b,	// (0x0000cb8b) list_wheel_apps_pane_g2

0xcb93,	// (0x0000cb93) list_wheel_apps_pane_g3

0xcb9b,	// (0x0000cb9b) list_wheel_apps_pane_g4

0xcba3,	// (0x0000cba3) list_wheel_apps_pane_g5

0x0004,

0xe6cb,	// (0x0000e6cb) list_wheel_apps_pane_g

0x227a,	// (0x0000227a) navi_icon_text_pane

0xc105,	// (0x0000c105) aid_fill_nsta

0x5c2f,	// (0x00005c2f) navi_icon_text_pane_g1

0x5c3b,	// (0x00005c3b) navi_icon_text_pane_t1

0x211b,	// (0x0000211b) list_set_graphic_pane_t1_ParamLimits

0x211b,	// (0x0000211b) list_set_graphic_pane_t1

0x4069,	// (0x00004069) popup_midp_note_alarm_window_t6_ParamLimits

0x4069,	// (0x00004069) popup_midp_note_alarm_window_t6

0x407b,	// (0x0000407b) popup_midp_note_alarm_window_t7_ParamLimits

0x407b,	// (0x0000407b) popup_midp_note_alarm_window_t7

0x408d,	// (0x0000408d) popup_midp_note_alarm_window_t8_ParamLimits

0x408d,	// (0x0000408d) popup_midp_note_alarm_window_t8

0x409f,	// (0x0000409f) popup_midp_note_alarm_window_t9_ParamLimits

0x409f,	// (0x0000409f) popup_midp_note_alarm_window_t9

0x40b1,	// (0x000040b1) popup_midp_note_alarm_window_t10_ParamLimits

0x40b1,	// (0x000040b1) popup_midp_note_alarm_window_t10

0x40c3,	// (0x000040c3) popup_midp_note_alarm_window_t11_ParamLimits

0x40c3,	// (0x000040c3) popup_midp_note_alarm_window_t11

0x40d5,	// (0x000040d5) scroll_pane_cp17_ParamLimits

0x40d5,	// (0x000040d5) scroll_pane_cp17

0x4187,	// (0x00004187) volume_small_pane_cp_g1

0x5c4d,	// (0x00005c4d) volume_small_pane_cp_g2

0x5c56,	// (0x00005c56) volume_small_pane_cp_g3

0x5c5f,	// (0x00005c5f) volume_small_pane_cp_g4

0x5c68,	// (0x00005c68) volume_small_pane_cp_g5

0x5c71,	// (0x00005c71) volume_small_pane_cp_g6

0x5c7a,	// (0x00005c7a) volume_small_pane_cp_g7

0x5c83,	// (0x00005c83) volume_small_pane_cp_g8

0x5c8c,	// (0x00005c8c) volume_small_pane_cp_g9

0x5c95,	// (0x00005c95) volume_small_pane_cp_g10

0x24bd,	// (0x000024bd) midp_ticker_pane_g1_ParamLimits

0x24c9,	// (0x000024c9) midp_ticker_pane_g2_ParamLimits

0xa462,	// (0x0000a462) midp_ticker_pane_g_ParamLimits

0x24d5,	// (0x000024d5) midp_ticker_pane_t1_ParamLimits

0xc121,	// (0x0000c121) aid_fill_nsta_2

0x3939,	// (0x00003939) list_form2_midp_pane

0x4c42,	// (0x00004c42) midp_editing_number_pane_ParamLimits

0x4c51,	// (0x00004c51) midp_ticker_pane_ParamLimits

0x5c9e,	// (0x00005c9e) form2_midp_field_pane

0x5cc2,	// (0x00005cc2) scroll_pane_cp51

0x5ce2,	// (0x00005ce2) form2_midp_button_pane_ParamLimits

0x5ce2,	// (0x00005ce2) form2_midp_button_pane

0x5cf4,	// (0x00005cf4) form2_midp_content_pane_ParamLimits

0x5cf4,	// (0x00005cf4) form2_midp_content_pane

0x5d0e,	// (0x00005d0e) form2_midp_field_choice_group_pane

0x5d16,	// (0x00005d16) form2_midp_field_pane_g1

0x5d1e,	// (0x00005d1e) form2_midp_field_pane_g2

0x5d26,	// (0x00005d26) form2_midp_field_pane_g3

0x5d2e,	// (0x00005d2e) form2_midp_field_pane_g4

0x0003,

0xa801,	// (0x0000a801) form2_midp_field_pane_g

0x5d36,	// (0x00005d36) form2_midp_gauge_slider_pane

0x5d3e,	// (0x00005d3e) form2_midp_gauge_wait_pane

0x5d46,	// (0x00005d46) form2_midp_image_pane_ParamLimits

0x5d46,	// (0x00005d46) form2_midp_image_pane

0xcbd8,	// (0x0000cbd8) form2_midp_label_pane_ParamLimits

0xcbd8,	// (0x0000cbd8) form2_midp_label_pane

0xcbf1,	// (0x0000cbf1) form2_midp_label_pane_cp_ParamLimits

0xcbf1,	// (0x0000cbf1) form2_midp_label_pane_cp

0x5d99,	// (0x00005d99) form2_midp_string_pane_ParamLimits

0x5d99,	// (0x00005d99) form2_midp_string_pane

0xcc10,	// (0x0000cc10) form2_midp_text_pane_ParamLimits

0xcc10,	// (0x0000cc10) form2_midp_text_pane

0x5dc4,	// (0x00005dc4) form2_midp_time_pane

0x5dd4,	// (0x00005dd4) input_focus_pane_cp51_ParamLimits

0x5dd4,	// (0x00005dd4) input_focus_pane_cp51

0xcc29,	// (0x0000cc29) form2_midp_label_pane_t1_ParamLimits

0xcc29,	// (0x0000cc29) form2_midp_label_pane_t1

0xcc64,	// (0x0000cc64) form2_mdip_text_pane_t1_ParamLimits

0xcc64,	// (0x0000cc64) form2_mdip_text_pane_t1

0x5e42,	// (0x00005e42) form2_midp_time_pane_t1

0x5e5d,	// (0x00005e5d) form2_midp_gauge_slider_pane_t1

0xcc7c,	// (0x0000cc7c) form2_midp_gauge_slider_pane_t2

0xcc8e,	// (0x0000cc8e) form2_midp_gauge_slider_pane_t3

0x0002,

0xe6db,	// (0x0000e6db) form2_midp_gauge_slider_pane_t

0x5e93,	// (0x00005e93) form2_midp_slider_pane

0x5e9f,	// (0x00005e9f) form2_midp_gauge_wait_pane_t1

0x5ead,	// (0x00005ead) form2_midp_wait_pane_ParamLimits

0x5ead,	// (0x00005ead) form2_midp_wait_pane

0x366b,	// (0x0000366b) list_single_2graphic_pane_cp4_ParamLimits

0x366b,	// (0x0000366b) list_single_2graphic_pane_cp4

0xc585,	// (0x0000c585) list_single_midp_graphic_pane_cp_ParamLimits

0xc585,	// (0x0000c585) list_single_midp_graphic_pane_cp

0x027d,	// (0x0000027d) list_highlight_pane_cp20

0x5eeb,	// (0x00005eeb) list_single_2graphic_pane_g1_cp4

0x519d,	// (0x0000519d) list_single_2graphic_pane_g2_cp4

0x5ef3,	// (0x00005ef3) list_single_2graphic_pane_t1_cp4

0x04a3,	// (0x000004a3) list_highlight_pane_cp21

0x5f02,	// (0x00005f02) list_single_midp_graphic_pane_g4_cp

0x5f11,	// (0x00005f11) list_single_midp_graphic_pane_t1_cp

0xcca0,	// (0x0000cca0) form2_mdip_string_pane_t1_ParamLimits

0xcca0,	// (0x0000cca0) form2_mdip_string_pane_t1

0x027d,	// (0x0000027d) bg_wml_button_pane_cp2

0x002a,	// (0x0000002a) form2_midp_image_pane_g1

0x0f29,	// (0x00000f29) list_double_large_graphic_pane_g5_ParamLimits

0x0f29,	// (0x00000f29) list_double_large_graphic_pane_g5

0xb86a,	// (0x0000b86a) midp_form_pane_ParamLimits

0x04a3,	// (0x000004a3) main_apps_wheel_pane_ParamLimits

0xbea1,	// (0x0000bea1) popup_preview_window_ParamLimits

0xbea1,	// (0x0000bea1) popup_preview_window

0x2dea,	// (0x00002dea) popup_touch_info_window_ParamLimits

0x2dea,	// (0x00002dea) popup_touch_info_window

0x2e08,	// (0x00002e08) popup_touch_menu_window_ParamLimits

0x2e08,	// (0x00002e08) popup_touch_menu_window

0x0020,	// (0x00000020) bg_popup_sub_pane_cp6

0x5f90,	// (0x00005f90) list_touch_menu_pane

0x5f98,	// (0x00005f98) list_single_touch_menu_pane_ParamLimits

0x5f98,	// (0x00005f98) list_single_touch_menu_pane

0x5fac,	// (0x00005fac) list_single_touch_menu_pane_t1

0x04a3,	// (0x000004a3) bg_popup_sub_pane_cp7_ParamLimits

0x04a3,	// (0x000004a3) bg_popup_sub_pane_cp7

0x5fba,	// (0x00005fba) heading_sub_pane

0x5fc2,	// (0x00005fc2) list_touch_info_pane_ParamLimits

0x5fc2,	// (0x00005fc2) list_touch_info_pane

0x5fd1,	// (0x00005fd1) list_single_touch_info_pane_ParamLimits

0x5fd1,	// (0x00005fd1) list_single_touch_info_pane

0x5fe2,	// (0x00005fe2) list_single_touch_info_pane_t1

0x5ff0,	// (0x00005ff0) list_single_touch_info_pane_t2

0x0001,

0xa818,	// (0x0000a818) list_single_touch_info_pane_t

0x23ec,	// (0x000023ec) bg_popup_heading_pane_cp

0x5ffe,	// (0x00005ffe) heading_sub_pane_t1

0x353b,	// (0x0000353b) bg_popup_preview_window_pane_cp_ParamLimits

0x353b,	// (0x0000353b) bg_popup_preview_window_pane_cp

0x5fba,	// (0x00005fba) heading_preview_pane

0x5fc2,	// (0x00005fc2) list_preview_pane_ParamLimits

0x5fc2,	// (0x00005fc2) list_preview_pane

0x600c,	// (0x0000600c) popup_preview_window_g1

0x5fd1,	// (0x00005fd1) list_single_preview_pane_ParamLimits

0x5fd1,	// (0x00005fd1) list_single_preview_pane

0x6014,	// (0x00006014) list_single_preview_pane_g1

0x601c,	// (0x0000601c) list_single_preview_pane_t1

0x5fe2,	// (0x00005fe2) list_single_preview_pane_t2

0x0001,

0xa81d,	// (0x0000a81d) list_single_preview_pane_t

0x602a,	// (0x0000602a) bg_popup_heading_pane_cp2_ParamLimits

0x602a,	// (0x0000602a) bg_popup_heading_pane_cp2

0x6040,	// (0x00006040) heading_preview_pane_g1

0x6048,	// (0x00006048) heading_preview_pane_t1_ParamLimits

0x6048,	// (0x00006048) heading_preview_pane_t1

0x0630,	// (0x00000630) soft_indicator_pane_t1_ParamLimits

0x0c69,	// (0x00000c69) scroll_pane_ParamLimits

0x19c9,	// (0x000019c9) scroll_sc2_left_pane

0x19d2,	// (0x000019d2) scroll_sc2_right_pane

0x19f1,	// (0x000019f1) scroll_bg_pane_g1_ParamLimits

0x1a06,	// (0x00001a06) scroll_bg_pane_g2_ParamLimits

0x1a1e,	// (0x00001a1e) scroll_bg_pane_g3_ParamLimits

0xa3ed,	// (0x0000a3ed) scroll_bg_pane_g_ParamLimits

0x19f1,	// (0x000019f1) scroll_handle_pane_g1_ParamLimits

0x1a40,	// (0x00001a40) scroll_handle_pane_g2_ParamLimits

0x1a1e,	// (0x00001a1e) scroll_handle_pane_g3_ParamLimits

0xa3f4,	// (0x0000a3f4) scroll_handle_pane_g_ParamLimits

0x2994,	// (0x00002994) popup_choice_list_window_ParamLimits

0x2994,	// (0x00002994) popup_choice_list_window

0x32b1,	// (0x000032b1) choice_list_pane

0x337d,	// (0x0000337d) cell_toolbar_pane_t1

0x33a5,	// (0x000033a5) toolbar_button_pane_ParamLimits

0x46db,	// (0x000046db) ai_gene_pane_1_t2_ParamLimits

0x46db,	// (0x000046db) ai_gene_pane_1_t2

0x0001,

0xa61c,	// (0x0000a61c) ai_gene_pane_1_t_ParamLimits

0xa61c,	// (0x0000a61c) ai_gene_pane_1_t

0x6065,	// (0x00006065) scroll_sc2_left_pane_g1

0x6065,	// (0x00006065) scroll_sc2_right_pane_g1

0x2966,	// (0x00002966) bg_popup_sub_pane_cp10

0x606f,	// (0x0000606f) list_choice_list_pane

0x6086,	// (0x00006086) list_single_choice_list_pane_ParamLimits

0x6086,	// (0x00006086) list_single_choice_list_pane

0x609a,	// (0x0000609a) list_single_choice_list_pane_g1

0x1519,	// (0x00001519) list_single_choice_list_pane_t1_ParamLimits

0x1519,	// (0x00001519) list_single_choice_list_pane_t1

0x60a2,	// (0x000060a2) choice_list_pane_g1

0x60aa,	// (0x000060aa) choice_list_pane_t1

0x0020,	// (0x00000020) input_focus_pane_cp11

0x1740,	// (0x00001740) title_pane_stacon_g2_ParamLimits

0x1740,	// (0x00001740) title_pane_stacon_g2

0x0002,

0xa3d3,	// (0x0000a3d3) title_pane_stacon_g_ParamLimits

0xa3d3,	// (0x0000a3d3) title_pane_stacon_g

0x23ec,	// (0x000023ec) cursor_press_pane

0xbc08,	// (0x0000bc08) popup_fep_hwr_window_ParamLimits

0xbc08,	// (0x0000bc08) popup_fep_hwr_window

0x2a8c,	// (0x00002a8c) popup_fep_vkb_window_ParamLimits

0x2a8c,	// (0x00002a8c) popup_fep_vkb_window

0x60b8,	// (0x000060b8) cursor_press_pane_g1

0x0002,

0xe6ef,	// (0x0000e6ef) fep_vkb_side_pane_g_ParamLimits

0x60f5,	// (0x000060f5) fep_hwr_candidate_pane_ParamLimits

0x60f5,	// (0x000060f5) fep_hwr_candidate_pane

0x611d,	// (0x0000611d) fep_hwr_side_pane_ParamLimits

0x611d,	// (0x0000611d) fep_hwr_side_pane

0x613d,	// (0x0000613d) fep_hwr_top_pane_ParamLimits

0x613d,	// (0x0000613d) fep_hwr_top_pane

0x6155,	// (0x00006155) fep_hwr_write_pane_ParamLimits

0x6155,	// (0x00006155) fep_hwr_write_pane

0xe6ef,	// (0x0000e6ef) fep_vkb_side_pane_g

0x618f,	// (0x0000618f) fep_hwr_top_pane_g1

0x61a1,	// (0x000061a1) fep_hwr_top_pane_g2

0x61b3,	// (0x000061b3) fep_hwr_top_pane_g3

0x0002,

0xa822,	// (0x0000a822) fep_hwr_top_pane_g

0x61c8,	// (0x000061c8) fep_hwr_top_text_pane

0x1b94,	// (0x00001b94) fep_hwr_top_text_pane_g1

0x62a0,	// (0x000062a0) fep_hwr_top_text_pane_t1

0x62e8,	// (0x000062e8) fep_hwr_candidate_pane_g1

0x651e,	// (0x0000651e) fep_vkb_keypad_pane_g3_ParamLimits

0x651e,	// (0x0000651e) fep_vkb_keypad_pane_g3

0x6540,	// (0x00006540) fep_vkb_keypad_pane_g4_ParamLimits

0x6540,	// (0x00006540) fep_vkb_keypad_pane_g4

0x65af,	// (0x000065af) fep_vkb_bottom_pane_g2_ParamLimits

0x65af,	// (0x000065af) fep_vkb_bottom_pane_g2

0x0001,

0xa84d,	// (0x0000a84d) fep_vkb_bottom_pane_g_ParamLimits

0xa84d,	// (0x0000a84d) fep_vkb_bottom_pane_g

0x6065,	// (0x00006065) cell_vkb_side_pane_g2

0x0001,

0xa857,	// (0x0000a857) cell_vkb_side_pane_g

0x663a,	// (0x0000663a) cell_vkb_side_pane_t1

0x6648,	// (0x00006648) cell_vkb_side_pane_t1_copy1

0x6065,	// (0x00006065) bg_fep_vkb_candidate_pane_g2

0x676c,	// (0x0000676c) cell_vkb_candidate_pane_ParamLimits

0x631c,	// (0x0000631c) aid_size_cell_vkb_ParamLimits

0x631c,	// (0x0000631c) aid_size_cell_vkb

0x676c,	// (0x0000676c) cell_vkb_candidate_pane

0x679e,	// (0x0000679e) bg_popup_fep_shadow_pane_g1

0x6392,	// (0x00006392) fep_vkb_bottom_pane_ParamLimits

0x6392,	// (0x00006392) fep_vkb_bottom_pane

0x63cf,	// (0x000063cf) fep_vkb_candidate_pane_ParamLimits

0x63cf,	// (0x000063cf) fep_vkb_candidate_pane

0x63eb,	// (0x000063eb) fep_vkb_keypad_pane_ParamLimits

0x63eb,	// (0x000063eb) fep_vkb_keypad_pane

0x641f,	// (0x0000641f) fep_vkb_side_pane_ParamLimits

0x641f,	// (0x0000641f) fep_vkb_side_pane

0x644b,	// (0x0000644b) fep_vkb_top_pane_ParamLimits

0x644b,	// (0x0000644b) fep_vkb_top_pane

0x6477,	// (0x00006477) fep_vkb_top_pane_g1_ParamLimits

0x6477,	// (0x00006477) fep_vkb_top_pane_g1

0x6486,	// (0x00006486) fep_vkb_top_pane_g2_ParamLimits

0x6486,	// (0x00006486) fep_vkb_top_pane_g2

0x6495,	// (0x00006495) fep_vkb_top_pane_g3_ParamLimits

0x6495,	// (0x00006495) fep_vkb_top_pane_g3

0x0003,

0xa83d,	// (0x0000a83d) fep_vkb_top_pane_g_ParamLimits

0xa83d,	// (0x0000a83d) fep_vkb_top_pane_g

0x64b3,	// (0x000064b3) fep_vkb_top_text_pane_ParamLimits

0x64b3,	// (0x000064b3) fep_vkb_top_text_pane

0xcd5e,	// (0x0000cd5e) fep_vkb_side_pane_g1_ParamLimits

0xcd5e,	// (0x0000cd5e) fep_vkb_side_pane_g1

0x650d,	// (0x0000650d) grid_vkb_side_pane_ParamLimits

0x650d,	// (0x0000650d) grid_vkb_side_pane

0x67a6,	// (0x000067a6) bg_popup_fep_shadow_pane_g2

0x67af,	// (0x000067af) bg_popup_fep_shadow_pane_g3

0x67b7,	// (0x000067b7) bg_popup_fep_shadow_pane_g4

0x67c0,	// (0x000067c0) bg_popup_fep_shadow_pane_g5

0x67c8,	// (0x000067c8) bg_popup_fep_shadow_pane_g6

0x67d0,	// (0x000067d0) bg_popup_fep_shadow_pane_g7

0x1382,	// (0x00001382) bg_popup_fep_shadow_pane_g8

0x655e,	// (0x0000655e) grid_vkb_keypad_number_pane_ParamLimits

0x655e,	// (0x0000655e) grid_vkb_keypad_number_pane

0x656e,	// (0x0000656e) grid_vkb_keypad_pane_ParamLimits

0x656e,	// (0x0000656e) grid_vkb_keypad_pane

0x6594,	// (0x00006594) fep_vkb_bottom_pane_g1_ParamLimits

0x6594,	// (0x00006594) fep_vkb_bottom_pane_g1

0x65bd,	// (0x000065bd) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x65bd,	// (0x000065bd) grid_vkb_keypad_bottom_left_pane

0x65d2,	// (0x000065d2) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x65d2,	// (0x000065d2) grid_vkb_keypad_bottom_right_pane

0x65e7,	// (0x000065e7) fep_vkb_top_text_pane_g1

0xcda5,	// (0x0000cda5) fep_vkb_top_text_pane_t1

0xcdb7,	// (0x0000cdb7) cell_vkb_side_pane_ParamLimits

0xcdb7,	// (0x0000cdb7) cell_vkb_side_pane

0x6065,	// (0x00006065) cell_vkb_side_pane_g1

0x6656,	// (0x00006656) cell_vkb_keypad_pane_ParamLimits

0x6656,	// (0x00006656) cell_vkb_keypad_pane

0x66c3,	// (0x000066c3) cell_vkb_keypad_pane_g1

0x0008,

0xa86a,	// (0x0000a86a) bg_popup_fep_shadow_pane_g

0x6065,	// (0x00006065) cell_hwr_side_pane_g1

0x6065,	// (0x00006065) cell_hwr_side_pane_g2

0x66cd,	// (0x000066cd) cell_vkb_keypad_pane_t1

0xcdcd,	// (0x0000cdcd) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcdcd,	// (0x0000cdcd) cell_vkb_keypad_bottom_left_pane

0xcde2,	// (0x0000cde2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcde2,	// (0x0000cde2) cell_vkb_keypad_bottom_right_pane

0x6065,	// (0x00006065) cell_vkb_keypad_bottom_left_pane_g1

0x6065,	// (0x00006065) cell_vkb_keypad_bottom_right_pane_g1

0x6731,	// (0x00006731) cell_vkb_keypad_number_pane_ParamLimits

0x6731,	// (0x00006731) cell_vkb_keypad_number_pane

0x6750,	// (0x00006750) cell_vkb_keypad_number_pane_g1

0x675a,	// (0x0000675a) cell_vkb_keypad_number_pane_g2

0x6763,	// (0x00006763) cell_vkb_keypad_number_pane_g3

0x0002,

0xa85c,	// (0x0000a85c) cell_vkb_keypad_number_pane_g

0x66cd,	// (0x000066cd) cell_vkb_keypad_number_pane_t1

0x6785,	// (0x00006785) fep_vkb_candidate_pane_g1

0x0001,

0xa857,	// (0x0000a857) cell_hwr_side_pane_g

0x67e0,	// (0x000067e0) cell_hwr_side_pane_t1

0x67ee,	// (0x000067ee) cell_hwr_side_pane_t1_copy1

0x64a5,	// (0x000064a5) cell_hwr_candidate_pane_g1

0x683e,	// (0x0000683e) cell_hwr_candidate_pane_t1

0x6065,	// (0x00006065) cell_vkb_candidate_pane_g2

0x6891,	// (0x00006891) cell_vkb_candidate_pane_t1

0x60c0,	// (0x000060c0) bg_popup_fep_shadow_pane_ParamLimits

0x60c0,	// (0x000060c0) bg_popup_fep_shadow_pane

0x616f,	// (0x0000616f) bg_fep_hwr_top_pane_g4

0x61dd,	// (0x000061dd) bg_hwr_side_pane_g1_ParamLimits

0x61dd,	// (0x000061dd) bg_hwr_side_pane_g1

0xcd19,	// (0x0000cd19) cell_hwr_side_pane_ParamLimits

0xcd19,	// (0x0000cd19) cell_hwr_side_pane

0x624b,	// (0x0000624b) fep_hwr_write_pane_g1_ParamLimits

0x624b,	// (0x0000624b) fep_hwr_write_pane_g1

0x6258,	// (0x00006258) fep_hwr_write_pane_g2_ParamLimits

0x6258,	// (0x00006258) fep_hwr_write_pane_g2

0x6265,	// (0x00006265) fep_hwr_write_pane_g3_ParamLimits

0x6265,	// (0x00006265) fep_hwr_write_pane_g3

0xcd39,	// (0x0000cd39) fep_hwr_write_pane_g4_ParamLimits

0xcd39,	// (0x0000cd39) fep_hwr_write_pane_g4

0x0005,

0xe6e2,	// (0x0000e6e2) fep_hwr_write_pane_g_ParamLimits

0xe6e2,	// (0x0000e6e2) fep_hwr_write_pane_g

0x616f,	// (0x0000616f) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x616f,	// (0x0000616f) bg_fep_hwr_candidate_pane_g2

0x62ae,	// (0x000062ae) cell_hwr_candidate_pane_ParamLimits

0x62ae,	// (0x000062ae) cell_hwr_candidate_pane

0x62e8,	// (0x000062e8) fep_hwr_candidate_pane_g1_ParamLimits

0x634a,	// (0x0000634a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x634a,	// (0x0000634a) bg_popup_fep_shadow_pane_cp2

0x64a5,	// (0x000064a5) fep_vkb_top_pane_g4_ParamLimits

0x64a5,	// (0x000064a5) fep_vkb_top_pane_g4

0x64eb,	// (0x000064eb) fep_vkb_side_pane_g2_ParamLimits

0x64eb,	// (0x000064eb) fep_vkb_side_pane_g2

0xb479,	// (0x0000b479) list_setting_pane_t4_ParamLimits

0xb479,	// (0x0000b479) list_setting_pane_t4

0xb4f3,	// (0x0000b4f3) list_setting_number_pane_t5_ParamLimits

0xb4f3,	// (0x0000b4f3) list_setting_number_pane_t5

0xb748,	// (0x0000b748) list_double_heading_pane_cp2_ParamLimits

0xb748,	// (0x0000b748) list_double_heading_pane_cp2

0x124c,	// (0x0000124c) list_double_heading_pane_g1_cp2_ParamLimits

0x124c,	// (0x0000124c) list_double_heading_pane_g1_cp2

0x1258,	// (0x00001258) list_double_heading_pane_g2_cp2_ParamLimits

0x1258,	// (0x00001258) list_double_heading_pane_g2_cp2

0x689f,	// (0x0000689f) list_double_heading_pane_t1_cp2_ParamLimits

0x689f,	// (0x0000689f) list_double_heading_pane_t1_cp2

0x68b5,	// (0x000068b5) list_double_heading_pane_t2_cp2_ParamLimits

0x68b5,	// (0x000068b5) list_double_heading_pane_t2_cp2

0x000a,	// (0x0000000a) aid_value_unit2

0x02e3,	// (0x000002e3) popup_preview_fixed_window

0x07c9,	// (0x000007c9) bg_popup_preview_window_pane_cp02

0x68c7,	// (0x000068c7) list_preview_fixed_pane

0x690d,	// (0x0000690d) list_empty_pane_fp_ParamLimits

0x690d,	// (0x0000690d) list_empty_pane_fp

0x690d,	// (0x0000690d) list_single_cale_day_pane_fp_ParamLimits

0x690d,	// (0x0000690d) list_single_cale_day_pane_fp

0x690d,	// (0x0000690d) list_single_graphic_heading_pane_fp_ParamLimits

0x690d,	// (0x0000690d) list_single_graphic_heading_pane_fp

0x690d,	// (0x0000690d) list_single_graphic_pane_fp_ParamLimits

0x690d,	// (0x0000690d) list_single_graphic_pane_fp

0x690d,	// (0x0000690d) list_single_heading_pane_fp_ParamLimits

0x690d,	// (0x0000690d) list_single_heading_pane_fp

0x690d,	// (0x0000690d) list_single_pane_fp_ParamLimits

0x690d,	// (0x0000690d) list_single_pane_fp

0x6920,	// (0x00006920) list_single_pane_fp_g1_ParamLimits

0x6920,	// (0x00006920) list_single_pane_fp_g1

0x692c,	// (0x0000692c) list_single_pane_fp_g2_ParamLimits

0x692c,	// (0x0000692c) list_single_pane_fp_g2

0x6938,	// (0x00006938) list_single_pane_fp_g3_ParamLimits

0x6938,	// (0x00006938) list_single_pane_fp_g3

0x694c,	// (0x0000694c) list_single_pane_fp_g4_ParamLimits

0x694c,	// (0x0000694c) list_single_pane_fp_g4

0x0003,

0xa88b,	// (0x0000a88b) list_single_pane_fp_g_ParamLimits

0xa88b,	// (0x0000a88b) list_single_pane_fp_g

0x6958,	// (0x00006958) list_single_pane_fp_t1_ParamLimits

0x6958,	// (0x00006958) list_single_pane_fp_t1

0x696f,	// (0x0000696f) list_single_graphic_pane_fp_g1_ParamLimits

0x696f,	// (0x0000696f) list_single_graphic_pane_fp_g1

0x6920,	// (0x00006920) list_single_graphic_pane_fp_g2_ParamLimits

0x6920,	// (0x00006920) list_single_graphic_pane_fp_g2

0x692c,	// (0x0000692c) list_single_graphic_pane_fp_g3_ParamLimits

0x692c,	// (0x0000692c) list_single_graphic_pane_fp_g3

0x6938,	// (0x00006938) list_single_graphic_pane_fp_g4_ParamLimits

0x6938,	// (0x00006938) list_single_graphic_pane_fp_g4

0x694c,	// (0x0000694c) list_single_graphic_pane_fp_g5_ParamLimits

0x694c,	// (0x0000694c) list_single_graphic_pane_fp_g5

0x0004,

0xa894,	// (0x0000a894) list_single_graphic_pane_fp_g_ParamLimits

0xa894,	// (0x0000a894) list_single_graphic_pane_fp_g

0x697b,	// (0x0000697b) list_single_graphic_pane_fp_t1_ParamLimits

0x697b,	// (0x0000697b) list_single_graphic_pane_fp_t1

0x696f,	// (0x0000696f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x696f,	// (0x0000696f) list_single_graphic_heading_pane_fp_g1

0x6920,	// (0x00006920) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6920,	// (0x00006920) list_single_graphic_heading_pane_fp_g2

0x692c,	// (0x0000692c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x692c,	// (0x0000692c) list_single_graphic_heading_pane_fp_g3

0x6938,	// (0x00006938) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6938,	// (0x00006938) list_single_graphic_heading_pane_fp_g4

0x694c,	// (0x0000694c) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x694c,	// (0x0000694c) list_single_graphic_heading_pane_fp_g5

0x0004,

0xa894,	// (0x0000a894) list_single_graphic_heading_pane_fp_g_ParamLimits

0xa894,	// (0x0000a894) list_single_graphic_heading_pane_fp_g

0x6991,	// (0x00006991) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6991,	// (0x00006991) list_single_graphic_heading_pane_fp_t1

0x69a7,	// (0x000069a7) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x69a7,	// (0x000069a7) list_single_graphic_heading_pane_fp_t2

0x0001,

0xa89f,	// (0x0000a89f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xa89f,	// (0x0000a89f) list_single_graphic_heading_pane_fp_t

0x69b9,	// (0x000069b9) list_single_cale_day_pane_fp_g1_ParamLimits

0x69b9,	// (0x000069b9) list_single_cale_day_pane_fp_g1

0x69f1,	// (0x000069f1) list_single_cale_day_pane_fp_g2_ParamLimits

0x69f1,	// (0x000069f1) list_single_cale_day_pane_fp_g2

0x69fd,	// (0x000069fd) list_single_cale_day_pane_fp_g3_ParamLimits

0x69fd,	// (0x000069fd) list_single_cale_day_pane_fp_g3

0x6a25,	// (0x00006a25) list_single_cale_day_pane_fp_g4_ParamLimits

0x6a25,	// (0x00006a25) list_single_cale_day_pane_fp_g4

0x6a49,	// (0x00006a49) list_single_cale_day_pane_fp_g5_ParamLimits

0x6a49,	// (0x00006a49) list_single_cale_day_pane_fp_g5

0x0004,

0xa8a4,	// (0x0000a8a4) list_single_cale_day_pane_fp_g_ParamLimits

0xa8a4,	// (0x0000a8a4) list_single_cale_day_pane_fp_g

0x6a6d,	// (0x00006a6d) list_single_cale_day_pane_fp_t1_ParamLimits

0x6a6d,	// (0x00006a6d) list_single_cale_day_pane_fp_t1

0x6a93,	// (0x00006a93) list_single_cale_day_pane_fp_t2_ParamLimits

0x6a93,	// (0x00006a93) list_single_cale_day_pane_fp_t2

0x6aac,	// (0x00006aac) list_single_cale_day_pane_fp_t3_ParamLimits

0x6aac,	// (0x00006aac) list_single_cale_day_pane_fp_t3

0x0002,

0xa8af,	// (0x0000a8af) list_single_cale_day_pane_fp_t_ParamLimits

0xa8af,	// (0x0000a8af) list_single_cale_day_pane_fp_t

0x6920,	// (0x00006920) list_empty_pane_fp_g1_ParamLimits

0x6920,	// (0x00006920) list_empty_pane_fp_g1

0x6ac5,	// (0x00006ac5) list_empty_pane_fp_t1

0x6ad3,	// (0x00006ad3) list_empty_pane_fp_t2

0x0001,

0xa8b6,	// (0x0000a8b6) list_empty_pane_fp_t

0x6920,	// (0x00006920) list_single_heading_pane_fp_g1_ParamLimits

0x6920,	// (0x00006920) list_single_heading_pane_fp_g1

0x692c,	// (0x0000692c) list_single_heading_pane_fp_g2_ParamLimits

0x692c,	// (0x0000692c) list_single_heading_pane_fp_g2

0x6938,	// (0x00006938) list_single_heading_pane_fp_g3_ParamLimits

0x6938,	// (0x00006938) list_single_heading_pane_fp_g3

0x0002,

0xa8bb,	// (0x0000a8bb) list_single_heading_pane_fp_g_ParamLimits

0xa8bb,	// (0x0000a8bb) list_single_heading_pane_fp_g

0x6ae1,	// (0x00006ae1) list_single_heading_pane_fp_t1_ParamLimits

0x6ae1,	// (0x00006ae1) list_single_heading_pane_fp_t1

0x6af3,	// (0x00006af3) list_single_heading_pane_fp_t2_ParamLimits

0x6af3,	// (0x00006af3) list_single_heading_pane_fp_t2

0x0001,

0xa8c2,	// (0x0000a8c2) list_single_heading_pane_fp_t_ParamLimits

0xa8c2,	// (0x0000a8c2) list_single_heading_pane_fp_t

0x1587,	// (0x00001587) aid_size_cell_fast

0x073b,	// (0x0000073b) soft_indicator_pane_cp1_t1

0x15c4,	// (0x000015c4) cell_app_pane_cp2_ParamLimits

0x15c4,	// (0x000015c4) cell_app_pane_cp2

0x60e2,	// (0x000060e2) fep_hwr_candidate_drop_down_list_pane

0x6302,	// (0x00006302) fep_hwr_candidate_pane_g3_ParamLimits

0x6302,	// (0x00006302) fep_hwr_candidate_pane_g3

0x630f,	// (0x0000630f) fep_hwr_candidate_pane_g4_ParamLimits

0x630f,	// (0x0000630f) fep_hwr_candidate_pane_g4

0x0002,

0xa836,	// (0x0000a836) fep_hwr_candidate_pane_g_ParamLimits

0xa836,	// (0x0000a836) fep_hwr_candidate_pane_g

0x63be,	// (0x000063be) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x63be,	// (0x000063be) fep_vkb_candidate_drop_down_list_pane

0x678d,	// (0x0000678d) fep_vkb_candidate_pane_g3

0x6795,	// (0x00006795) fep_vkb_candidate_pane_g4

0x0002,

0xa863,	// (0x0000a863) fep_vkb_candidate_pane_g

0x64a5,	// (0x000064a5) cell_hwr_candidate_pane_g1_ParamLimits

0x67fc,	// (0x000067fc) cell_hwr_candidate_pane_g3_ParamLimits

0x67fc,	// (0x000067fc) cell_hwr_candidate_pane_g3

0x681d,	// (0x0000681d) cell_hwr_candidate_pane_g4_ParamLimits

0x681d,	// (0x0000681d) cell_hwr_candidate_pane_g4

0x0002,

0xa87d,	// (0x0000a87d) cell_hwr_candidate_pane_g_ParamLimits

0xa87d,	// (0x0000a87d) cell_hwr_candidate_pane_g

0x685b,	// (0x0000685b) cell_vkb_candidate_pane_g3_ParamLimits

0x685b,	// (0x0000685b) cell_vkb_candidate_pane_g3

0x6876,	// (0x00006876) cell_vkb_candidate_pane_g4_ParamLimits

0x6876,	// (0x00006876) cell_vkb_candidate_pane_g4

0x6b09,	// (0x00006b09) cell_app_pane_cp2_g1_ParamLimits

0x6b09,	// (0x00006b09) cell_app_pane_cp2_g1

0x6b27,	// (0x00006b27) cell_app_pane_cp2_g2_ParamLimits

0x6b27,	// (0x00006b27) cell_app_pane_cp2_g2

0x0001,

0xa8c7,	// (0x0000a8c7) cell_app_pane_cp2_g_ParamLimits

0xa8c7,	// (0x0000a8c7) cell_app_pane_cp2_g

0x6b33,	// (0x00006b33) cell_app_pane_cp2_t1_ParamLimits

0x6b33,	// (0x00006b33) cell_app_pane_cp2_t1

0x1221,	// (0x00001221) grid_highlight_pane_cp1_ParamLimits

0x1221,	// (0x00001221) grid_highlight_pane_cp1

0x6b45,	// (0x00006b45) cell_hwr_candidate_pane_cp1_ParamLimits

0x6b45,	// (0x00006b45) cell_hwr_candidate_pane_cp1

0x64a5,	// (0x000064a5) fep_hwr_candidate_drop_down_list_pane_g1

0x6b63,	// (0x00006b63) fep_hwr_candidate_drop_down_list_pane_g2

0x6b70,	// (0x00006b70) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xa8cc,	// (0x0000a8cc) fep_hwr_candidate_drop_down_list_pane_g

0x6b7d,	// (0x00006b7d) fep_hwr_candidate_drop_down_list_scroll_pane

0x6b86,	// (0x00006b86) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6b86,	// (0x00006b86) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6b93,	// (0x00006b93) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6b93,	// (0x00006b93) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6ba0,	// (0x00006ba0) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6ba0,	// (0x00006ba0) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x685b,	// (0x0000685b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x685b,	// (0x0000685b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6876,	// (0x00006876) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6876,	// (0x00006876) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6bad,	// (0x00006bad) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6bad,	// (0x00006bad) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6bc8,	// (0x00006bc8) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6bc8,	// (0x00006bc8) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6be3,	// (0x00006be3) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6be3,	// (0x00006be3) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xa8d3,	// (0x0000a8d3) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xa8d3,	// (0x0000a8d3) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xcdfd,	// (0x0000cdfd) cell_vkb_candidate_pane_cp1_ParamLimits

0xcdfd,	// (0x0000cdfd) cell_vkb_candidate_pane_cp1

0x64a5,	// (0x000064a5) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x64a5,	// (0x000064a5) fep_vkb_candidate_drop_down_list_pane_g1

0x6b63,	// (0x00006b63) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6b63,	// (0x00006b63) fep_vkb_candidate_drop_down_list_pane_g2

0x6b70,	// (0x00006b70) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x6b70,	// (0x00006b70) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xa8cc,	// (0x0000a8cc) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xa8cc,	// (0x0000a8cc) fep_vkb_candidate_drop_down_list_pane_g

0x6c21,	// (0x00006c21) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x6c21,	// (0x00006c21) fep_vkb_candidate_drop_down_list_scroll_pane

0x6c2e,	// (0x00006c2e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6c2e,	// (0x00006c2e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x6c3b,	// (0x00006c3b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6c3b,	// (0x00006c3b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x6c47,	// (0x00006c47) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6c47,	// (0x00006c47) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x67fc,	// (0x000067fc) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x67fc,	// (0x000067fc) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x681d,	// (0x0000681d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x681d,	// (0x0000681d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6c53,	// (0x00006c53) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6c53,	// (0x00006c53) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6c74,	// (0x00006c74) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6c74,	// (0x00006c74) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6c95,	// (0x00006c95) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6c95,	// (0x00006c95) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xa8e4,	// (0x0000a8e4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xa8e4,	// (0x0000a8e4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xae04,	// (0x0000ae04) title_pane_g1_ParamLimits

0xae17,	// (0x0000ae17) title_pane_g2_ParamLimits

0xe4dd,	// (0x0000e4dd) title_pane_g_ParamLimits

0x1b84,	// (0x00001b84) aid_call2_pane

0x1b8c,	// (0x00001b8c) aid_call_pane

0x1b94,	// (0x00001b94) popup_clock_analogue_window_g1

0x1b94,	// (0x00001b94) popup_clock_analogue_window_g2

0x1b9c,	// (0x00001b9c) popup_clock_analogue_window_g3

0x1ba5,	// (0x00001ba5) popup_clock_analogue_window_g4

0x002a,	// (0x0000002a) popup_clock_analogue_window_g5

0x0004,

0xa402,	// (0x0000a402) popup_clock_analogue_window_g

0x1bad,	// (0x00001bad) popup_clock_analogue_window_t1

0x1c30,	// (0x00001c30) clock_digital_number_pane_ParamLimits

0x1c30,	// (0x00001c30) clock_digital_number_pane

0x1c3c,	// (0x00001c3c) clock_digital_number_pane_cp02_ParamLimits

0x1c3c,	// (0x00001c3c) clock_digital_number_pane_cp02

0x1c48,	// (0x00001c48) clock_digital_number_pane_cp03_ParamLimits

0x1c48,	// (0x00001c48) clock_digital_number_pane_cp03

0x1c54,	// (0x00001c54) clock_digital_number_pane_cp04_ParamLimits

0x1c54,	// (0x00001c54) clock_digital_number_pane_cp04

0x1c60,	// (0x00001c60) clock_digital_separator_pane_ParamLimits

0x1c60,	// (0x00001c60) clock_digital_separator_pane

0x1c6c,	// (0x00001c6c) popup_clock_digital_window_t1_ParamLimits

0x1c6c,	// (0x00001c6c) popup_clock_digital_window_t1

0x002a,	// (0x0000002a) clock_digital_number_pane_g1

0x002a,	// (0x0000002a) clock_digital_number_pane_g2

0x0001,

0xa40d,	// (0x0000a40d) clock_digital_number_pane_g

0x002a,	// (0x0000002a) clock_digital_separator_pane_g1

0x002a,	// (0x0000002a) clock_digital_separator_pane_g2

0x0001,

0xa40d,	// (0x0000a40d) clock_digital_separator_pane_g

0xc105,	// (0x0000c105) aid_fill_nsta_ParamLimits

0xc227,	// (0x0000c227) indicator_nsta_pane_ParamLimits

0x30ee,	// (0x000030ee) popup_clock_analogue_window

0x30ee,	// (0x000030ee) popup_clock_digital_window

0x1548,	// (0x00001548) grid_indicator_nsta_pane_ParamLimits

0x5ab2,	// (0x00005ab2) clock_nsta_pane_t2

0x0001,

0xa7b6,	// (0x0000a7b6) clock_nsta_pane_t

0x196e,	// (0x0000196e) aid_size_max_handle

0xb73f,	// (0x0000b73f) aid_size_min_handle

0x23ec,	// (0x000023ec) editor_scroll_pane

0x6cb0,	// (0x00006cb0) ex_editor_pane

0x14f6,	// (0x000014f6) scroll_pane_cp13

0x0c95,	// (0x00000c95) scroll_pane_cp14

0x1be2,	// (0x00001be2) scroll_pane_cp36

0xb757,	// (0x0000b757) list_single_graphic_hl_pane_cp2_ParamLimits

0xb757,	// (0x0000b757) list_single_graphic_hl_pane_cp2

0xc985,	// (0x0000c985) list_single_graphic_hl_pane_ParamLimits

0xc985,	// (0x0000c985) list_single_graphic_hl_pane

0x6cb8,	// (0x00006cb8) aid_size_min_hl_cp1

0x6cc1,	// (0x00006cc1) list_highlight_pane_cp34_ParamLimits

0x6cc1,	// (0x00006cc1) list_highlight_pane_cp34

0x6cd2,	// (0x00006cd2) list_single_graphic_hl_pane_g1_ParamLimits

0x6cd2,	// (0x00006cd2) list_single_graphic_hl_pane_g1

0xce1d,	// (0x0000ce1d) list_single_graphic_hl_pane_g2_ParamLimits

0xce1d,	// (0x0000ce1d) list_single_graphic_hl_pane_g2

0xce1d,	// (0x0000ce1d) list_single_graphic_hl_pane_g3_ParamLimits

0xce1d,	// (0x0000ce1d) list_single_graphic_hl_pane_g3

0x235d,	// (0x0000235d) list_single_graphic_hl_pane_g4_ParamLimits

0x235d,	// (0x0000235d) list_single_graphic_hl_pane_g4

0xce29,	// (0x0000ce29) list_single_graphic_hl_pane_g5_ParamLimits

0xce29,	// (0x0000ce29) list_single_graphic_hl_pane_g5

0x0004,

0xe6fb,	// (0x0000e6fb) list_single_graphic_hl_pane_g_ParamLimits

0xe6fb,	// (0x0000e6fb) list_single_graphic_hl_pane_g

0xce3d,	// (0x0000ce3d) list_single_graphic_hl_pane_t1_ParamLimits

0xce3d,	// (0x0000ce3d) list_single_graphic_hl_pane_t1

0x6d21,	// (0x00006d21) aid_size_min_hl_cp2

0x6d2a,	// (0x00006d2a) list_highlight_pane_cp34_cp2_ParamLimits

0x6d2a,	// (0x00006d2a) list_highlight_pane_cp34_cp2

0x6cd2,	// (0x00006cd2) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x6cd2,	// (0x00006cd2) list_single_graphic_hl_pane_g1_cp2

0x6d37,	// (0x00006d37) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x6d37,	// (0x00006d37) list_single_graphic_hl_pane_g2_cp2

0x6d43,	// (0x00006d43) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x6d43,	// (0x00006d43) list_single_graphic_hl_pane_g3_cp2

0x2325,	// (0x00002325) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2325,	// (0x00002325) list_single_graphic_hl_pane_g4_cp2

0x6d4f,	// (0x00006d4f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x6d4f,	// (0x00006d4f) list_single_graphic_hl_pane_g5_cp2

0xba00,	// (0x0000ba00) control_pane_g4_ParamLimits

0xba00,	// (0x0000ba00) control_pane_g4

0x2966,	// (0x00002966) bg_popup_sub_pane_cp10_ParamLimits

0x606f,	// (0x0000606f) list_choice_list_pane_ParamLimits

0x607e,	// (0x0000607e) scroll_pane_cp23

0x07c9,	// (0x000007c9) bg_popup_preview_window_pane_cp02_ParamLimits

0x68c7,	// (0x000068c7) list_preview_fixed_pane_ParamLimits

0x68dd,	// (0x000068dd) list_preview_fixed_pane_cp_ParamLimits

0x68dd,	// (0x000068dd) list_preview_fixed_pane_cp

0x68e9,	// (0x000068e9) popup_preview_fixed_window_g1_ParamLimits

0x68e9,	// (0x000068e9) popup_preview_fixed_window_g1

0x68f5,	// (0x000068f5) popup_preview_fixed_window_g2_ParamLimits

0x68f5,	// (0x000068f5) popup_preview_fixed_window_g2

0x0002,

0xa884,	// (0x0000a884) popup_preview_fixed_window_g_ParamLimits

0xa884,	// (0x0000a884) popup_preview_fixed_window_g

0x1825,	// (0x00001825) aid_navi_side_left_pane_ParamLimits

0x1836,	// (0x00001836) aid_navi_side_right_pane_ParamLimits

0x184a,	// (0x0000184a) navi_icon_pane_stacon_ParamLimits

0x185e,	// (0x0000185e) navi_navi_pane_stacon_ParamLimits

0x184a,	// (0x0000184a) navi_text_pane_stacon_ParamLimits

0x0020,	// (0x00000020) main_text_info_pane

0x6d79,	// (0x00006d79) listscroll_text_info_pane

0x6d81,	// (0x00006d81) list_text_info_pane_ParamLimits

0x6d81,	// (0x00006d81) list_text_info_pane

0x6d90,	// (0x00006d90) scroll_pane_cp24_ParamLimits

0x6d90,	// (0x00006d90) scroll_pane_cp24

0xce53,	// (0x0000ce53) list_text_info_pane_t1_ParamLimits

0xce53,	// (0x0000ce53) list_text_info_pane_t1

0xbb87,	// (0x0000bb87) popup_fast_swap2_window_ParamLimits

0xbb87,	// (0x0000bb87) popup_fast_swap2_window

0x6dc9,	// (0x00006dc9) aid_size_cell_fast2

0x0020,	// (0x00000020) bg_popup_window_pane_cp17

0x396d,	// (0x0000396d) heading_pane_cp2

0x0a14,	// (0x00000a14) listscroll_fast2_pane

0x6dd3,	// (0x00006dd3) grid_fast2_pane

0x6ddb,	// (0x00006ddb) listscroll_fast2_pane_g1

0x6de3,	// (0x00006de3) listscroll_fast2_pane_g2

0x0001,

0xa900,	// (0x0000a900) listscroll_fast2_pane_g

0x14f6,	// (0x000014f6) scroll_pane_cp26

0x6deb,	// (0x00006deb) cell_fast2_pane_ParamLimits

0x6deb,	// (0x00006deb) cell_fast2_pane

0x6e00,	// (0x00006e00) cell_fast2_pane_g1

0x6e09,	// (0x00006e09) cell_fast2_pane_g2

0x6e12,	// (0x00006e12) cell_fast2_pane_g3

0x0002,

0xa905,	// (0x0000a905) cell_fast2_pane_g

0x0aee,	// (0x00000aee) grid_highlight_pane_cp9

0x0b03,	// (0x00000b03) main_eswt_pane_ParamLimits

0x0b03,	// (0x00000b03) main_eswt_pane

0x6da5,	// (0x00006da5) list_single_text_info_pane

0x6e1a,	// (0x00006e1a) eswt_ctrl_button_pane

0x6e1a,	// (0x00006e1a) eswt_ctrl_canvas_pane

0x6e22,	// (0x00006e22) eswt_ctrl_combo_pane

0x6e1a,	// (0x00006e1a) eswt_ctrl_default_pane

0x6e1a,	// (0x00006e1a) eswt_ctrl_label_pane

0x6e2a,	// (0x00006e2a) eswt_ctrl_wait_pane

0x6e32,	// (0x00006e32) eswt_shell_pane

0x0020,	// (0x00000020) listscroll_eswt_app_pane

0x6e4e,	// (0x00006e4e) popup_eswt_tasktip_window_ParamLimits

0x6e4e,	// (0x00006e4e) popup_eswt_tasktip_window

0x353b,	// (0x0000353b) bg_popup_window_pane_cp18

0x6e5f,	// (0x00006e5f) eswt_control_pane_g1_ParamLimits

0x6e5f,	// (0x00006e5f) eswt_control_pane_g1

0x6e6c,	// (0x00006e6c) eswt_control_pane_g2_ParamLimits

0x6e6c,	// (0x00006e6c) eswt_control_pane_g2

0x6e79,	// (0x00006e79) eswt_control_pane_g3_ParamLimits

0x6e79,	// (0x00006e79) eswt_control_pane_g3

0x6e86,	// (0x00006e86) eswt_control_pane_g4_ParamLimits

0x6e86,	// (0x00006e86) eswt_control_pane_g4

0x0003,

0xa90c,	// (0x0000a90c) eswt_control_pane_g_ParamLimits

0xa90c,	// (0x0000a90c) eswt_control_pane_g

0x1221,	// (0x00001221) bg_button_pane_ParamLimits

0x1221,	// (0x00001221) bg_button_pane

0x0b03,	// (0x00000b03) common_borders_pane_copy2_ParamLimits

0x0b03,	// (0x00000b03) common_borders_pane_copy2

0x6e93,	// (0x00006e93) control_button_pane_g1_ParamLimits

0x6e93,	// (0x00006e93) control_button_pane_g1

0x6e9f,	// (0x00006e9f) control_button_pane_g2_ParamLimits

0x6e9f,	// (0x00006e9f) control_button_pane_g2

0x6eab,	// (0x00006eab) control_button_pane_g3_ParamLimits

0x6eab,	// (0x00006eab) control_button_pane_g3

0x0002,

0xa915,	// (0x0000a915) control_button_pane_g_ParamLimits

0xa915,	// (0x0000a915) control_button_pane_g

0x6ebf,	// (0x00006ebf) control_button_pane_t1

0x6ecd,	// (0x00006ecd) control_button_pane_t2

0x0001,

0xa91c,	// (0x0000a91c) control_button_pane_t

0x33b1,	// (0x000033b1) bg_button_pane_g1

0x33b9,	// (0x000033b9) bg_button_pane_g2

0x33c1,	// (0x000033c1) bg_button_pane_g3

0x33c9,	// (0x000033c9) bg_button_pane_g4

0x33d1,	// (0x000033d1) bg_button_pane_g5

0x33d9,	// (0x000033d9) bg_button_pane_g6

0x33e1,	// (0x000033e1) bg_button_pane_g7

0x33e9,	// (0x000033e9) bg_button_pane_g8

0x33f1,	// (0x000033f1) bg_button_pane_g9

0x0008,

0xa570,	// (0x0000a570) bg_button_pane_g

0x602a,	// (0x0000602a) common_borders_pane_ParamLimits

0x602a,	// (0x0000602a) common_borders_pane

0x6e5f,	// (0x00006e5f) eswt_control_pane_g1_copy1_ParamLimits

0x6e5f,	// (0x00006e5f) eswt_control_pane_g1_copy1

0x6e6c,	// (0x00006e6c) eswt_control_pane_g2_copy1_ParamLimits

0x6e6c,	// (0x00006e6c) eswt_control_pane_g2_copy1

0x6e79,	// (0x00006e79) eswt_control_pane_g3_copy1_ParamLimits

0x6e79,	// (0x00006e79) eswt_control_pane_g3_copy1

0x6e86,	// (0x00006e86) eswt_control_pane_g4_copy1_ParamLimits

0x6e86,	// (0x00006e86) eswt_control_pane_g4_copy1

0x6065,	// (0x00006065) bg_eswt_ctrl_canvas_pane_g1

0x602a,	// (0x0000602a) common_borders_pane_cp2_ParamLimits

0x602a,	// (0x0000602a) common_borders_pane_cp2

0x602a,	// (0x0000602a) common_borders_pane_cp3_ParamLimits

0x602a,	// (0x0000602a) common_borders_pane_cp3

0x6edb,	// (0x00006edb) separator_horizontal_pane

0x6ee3,	// (0x00006ee3) separator_vertical_pane

0x6e5f,	// (0x00006e5f) eswt_control_pane_g1_copy2_ParamLimits

0x6e5f,	// (0x00006e5f) eswt_control_pane_g1_copy2

0x6e6c,	// (0x00006e6c) eswt_control_pane_g2_copy2_ParamLimits

0x6e6c,	// (0x00006e6c) eswt_control_pane_g2_copy2

0x6e79,	// (0x00006e79) eswt_control_pane_g3_copy2_ParamLimits

0x6e79,	// (0x00006e79) eswt_control_pane_g3_copy2

0x6e86,	// (0x00006e86) eswt_control_pane_g4_copy2_ParamLimits

0x6e86,	// (0x00006e86) eswt_control_pane_g4_copy2

0x0020,	// (0x00000020) common_borders_pane_cp4

0x6eec,	// (0x00006eec) separator_horizontal_pane_g1

0x6ef5,	// (0x00006ef5) separator_horizontal_pane_g2

0x6efe,	// (0x00006efe) separator_horizontal_pane_g3

0x0002,

0xa921,	// (0x0000a921) separator_horizontal_pane_g

0x6e5f,	// (0x00006e5f) eswt_control_pane_g1_copy3_ParamLimits

0x6e5f,	// (0x00006e5f) eswt_control_pane_g1_copy3

0x6e6c,	// (0x00006e6c) eswt_control_pane_g2_copy3_ParamLimits

0x6e6c,	// (0x00006e6c) eswt_control_pane_g2_copy3

0x6e79,	// (0x00006e79) eswt_control_pane_g3_copy3_ParamLimits

0x6e79,	// (0x00006e79) eswt_control_pane_g3_copy3

0x6e86,	// (0x00006e86) eswt_control_pane_g4_copy3_ParamLimits

0x6e86,	// (0x00006e86) eswt_control_pane_g4_copy3

0x0020,	// (0x00000020) common_borders_pane_cp5

0x6f07,	// (0x00006f07) separator_vertical_pane_g1

0x6f10,	// (0x00006f10) separator_vertical_pane_g2

0x6f19,	// (0x00006f19) separator_vertical_pane_g3

0x0002,

0xa928,	// (0x0000a928) separator_vertical_pane_g

0x6e5f,	// (0x00006e5f) eswt_control_pane_g1_copy4_ParamLimits

0x6e5f,	// (0x00006e5f) eswt_control_pane_g1_copy4

0x6e6c,	// (0x00006e6c) eswt_control_pane_g2_copy4_ParamLimits

0x6e6c,	// (0x00006e6c) eswt_control_pane_g2_copy4

0x6e79,	// (0x00006e79) eswt_control_pane_g3_copy4_ParamLimits

0x6e79,	// (0x00006e79) eswt_control_pane_g3_copy4

0x6e86,	// (0x00006e86) eswt_control_pane_g4_copy4_ParamLimits

0x6e86,	// (0x00006e86) eswt_control_pane_g4_copy4

0xce6c,	// (0x0000ce6c) eswt_ctrl_combo_button_pane

0xce74,	// (0x0000ce74) eswt_ctrl_input_pane

0xce7c,	// (0x0000ce7c) popup_choice_list_window_cp70

0xce84,	// (0x0000ce84) eswt_ctrl_input_pane_t1

0x0020,	// (0x00000020) input_focus_pane_cp70

0x602a,	// (0x0000602a) bg_button_pane_cp70_ParamLimits

0x602a,	// (0x0000602a) bg_button_pane_cp70

0xce92,	// (0x0000ce92) eswt_ctrl_combo_button_pane_g1

0x6f50,	// (0x00006f50) wait_bar_pane_cp70

0x353b,	// (0x0000353b) bg_popup_window_pane_cp70_ParamLimits

0x353b,	// (0x0000353b) bg_popup_window_pane_cp70

0x6f58,	// (0x00006f58) popup_eswt_tasktip_window_t1

0x6f6e,	// (0x00006f6e) wait_bar_pane_cp71_ParamLimits

0x6f6e,	// (0x00006f6e) wait_bar_pane_cp71

0x6f7a,	// (0x00006f7a) grid_eswt_app_pane

0x19d2,	// (0x000019d2) scroll_pane_cp70

0xce9a,	// (0x0000ce9a) cell_eswt_app_pane_ParamLimits

0xce9a,	// (0x0000ce9a) cell_eswt_app_pane

0xcec2,	// (0x0000cec2) cell_eswt_app_pane_g1_ParamLimits

0xcec2,	// (0x0000cec2) cell_eswt_app_pane_g1

0xcef1,	// (0x0000cef1) cell_eswt_app_pane_g2_ParamLimits

0xcef1,	// (0x0000cef1) cell_eswt_app_pane_g2

0x0001,

0xe706,	// (0x0000e706) cell_eswt_app_pane_g_ParamLimits

0xe706,	// (0x0000e706) cell_eswt_app_pane_g

0xcf1a,	// (0x0000cf1a) cell_eswt_app_pane_t1_ParamLimits

0xcf1a,	// (0x0000cf1a) cell_eswt_app_pane_t1

0x7035,	// (0x00007035) grid_highlight_pane_cp70_ParamLimits

0x7035,	// (0x00007035) grid_highlight_pane_cp70

0x0ca9,	// (0x00000ca9) set_content_pane_g1

0xb996,	// (0x0000b996) status_small_volume_pane

0x7041,	// (0x00007041) status_small_volume_pane_g1

0x7049,	// (0x00007049) volume_small2_pane

0x7052,	// (0x00007052) volume_small2_pane_g1

0x705b,	// (0x0000705b) volume_small2_pane_g2

0x7064,	// (0x00007064) volume_small2_pane_g3

0x706d,	// (0x0000706d) volume_small2_pane_g4

0x7076,	// (0x00007076) volume_small2_pane_g5

0x707f,	// (0x0000707f) volume_small2_pane_g6

0x7088,	// (0x00007088) volume_small2_pane_g7

0x7091,	// (0x00007091) volume_small2_pane_g8

0x709a,	// (0x0000709a) volume_small2_pane_g9

0x70a3,	// (0x000070a3) volume_small2_pane_g10

0x0009,

0xa934,	// (0x0000a934) volume_small2_pane_g

0x65e7,	// (0x000065e7) fep_vkb_top_text_pane_g1_ParamLimits

0xcda5,	// (0x0000cda5) fep_vkb_top_text_pane_t1_ParamLimits

0x6901,	// (0x00006901) popup_preview_fixed_window_g3_ParamLimits

0x6901,	// (0x00006901) popup_preview_fixed_window_g3

0xc0a4,	// (0x0000c0a4) popup_toolbar_trans_pane

0xc7f5,	// (0x0000c7f5) aid_height_set_list_ParamLimits

0x4aaf,	// (0x00004aaf) aid_size_parent_ParamLimits

0x2966,	// (0x00002966) list_highlight_pane_cp2_ParamLimits

0x0ca9,	// (0x00000ca9) set_content_pane_g1_ParamLimits

0xc995,	// (0x0000c995) list_single_image_pane_ParamLimits

0xc995,	// (0x0000c995) list_single_image_pane

0xcf4c,	// (0x0000cf4c) aid_size_cell_image_ParamLimits

0xcf4c,	// (0x0000cf4c) aid_size_cell_image

0xcf59,	// (0x0000cf59) grid_single_image_pane_ParamLimits

0xcf59,	// (0x0000cf59) grid_single_image_pane

0x124c,	// (0x0000124c) list_single_image_pane_g1_ParamLimits

0x124c,	// (0x0000124c) list_single_image_pane_g1

0x1258,	// (0x00001258) list_single_image_pane_g2_ParamLimits

0x1258,	// (0x00001258) list_single_image_pane_g2

0x0001,

0xa949,	// (0x0000a949) list_single_image_pane_g_ParamLimits

0xa949,	// (0x0000a949) list_single_image_pane_g

0x70c5,	// (0x000070c5) list_single_image_pane_t1_ParamLimits

0x70c5,	// (0x000070c5) list_single_image_pane_t1

0xcf65,	// (0x0000cf65) cell_image_list_pane_ParamLimits

0xcf65,	// (0x0000cf65) cell_image_list_pane

0xcf79,	// (0x0000cf79) cell_image_list_pane_g1

0xcf82,	// (0x0000cf82) cell_image_list_pane_g2

0x0001,

0xe70b,	// (0x0000e70b) cell_image_list_pane_g

0x7100,	// (0x00007100) aid_size_cell_tb_trans_pane

0x1221,	// (0x00001221) bg_tb_trans_pane

0x7112,	// (0x00007112) grid_tb_trans_pane

0x33b1,	// (0x000033b1) bg_tb_trans_pane_g1

0x33b9,	// (0x000033b9) bg_tb_trans_pane_g2

0x33c1,	// (0x000033c1) bg_tb_trans_pane_g3

0x33c9,	// (0x000033c9) bg_tb_trans_pane_g4

0x33d1,	// (0x000033d1) bg_tb_trans_pane_g5

0x33e9,	// (0x000033e9) bg_tb_trans_pane_g6

0x33f1,	// (0x000033f1) bg_tb_trans_pane_g7

0x33d9,	// (0x000033d9) bg_tb_trans_pane_g8

0x33e1,	// (0x000033e1) bg_tb_trans_pane_g9

0x0008,

0xa953,	// (0x0000a953) bg_tb_trans_pane_g

0x7126,	// (0x00007126) cell_toolbar_trans_pane_ParamLimits

0x7126,	// (0x00007126) cell_toolbar_trans_pane

0x6065,	// (0x00006065) cell_toolbar_trans_pane_g1

0xcbbc,	// (0x0000cbbc) list_form2_midp_pane_t1

0xcbca,	// (0x0000cbca) list_form2_midp_pane_t2

0x0001,

0xe6d6,	// (0x0000e6d6) list_form2_midp_pane_t

0x5cc2,	// (0x00005cc2) scroll_pane_cp51_ParamLimits

0x5ebd,	// (0x00005ebd) form2_midp_wait_pane_g1

0x5ec6,	// (0x00005ec6) form2_midp_wait_pane_g2

0x5ecf,	// (0x00005ecf) form2_midp_wait_pane_g3

0x0002,

0xa811,	// (0x0000a811) form2_midp_wait_pane_g

0x04a3,	// (0x000004a3) list_highlight_pane_cp21_ParamLimits

0x5f02,	// (0x00005f02) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5f11,	// (0x00005f11) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4c85,	// (0x00004c85) list_single_2graphic_im_pane_ParamLimits

0x4c85,	// (0x00004c85) list_single_2graphic_im_pane

0xcf8b,	// (0x0000cf8b) list_single_2graphic_im_pane_g1_ParamLimits

0xcf8b,	// (0x0000cf8b) list_single_2graphic_im_pane_g1

0x715d,	// (0x0000715d) list_single_2graphic_im_pane_g2_ParamLimits

0x715d,	// (0x0000715d) list_single_2graphic_im_pane_g2

0x7169,	// (0x00007169) list_single_2graphic_im_pane_g3_ParamLimits

0x7169,	// (0x00007169) list_single_2graphic_im_pane_g3

0x0003,

0xe710,	// (0x0000e710) list_single_2graphic_im_pane_g_ParamLimits

0xe710,	// (0x0000e710) list_single_2graphic_im_pane_g

0xcf9c,	// (0x0000cf9c) list_single_2graphic_im_pane_t1_ParamLimits

0xcf9c,	// (0x0000cf9c) list_single_2graphic_im_pane_t1

0x690d,	// (0x0000690d) list_single_graphic_2heading_pane_fp_ParamLimits

0x690d,	// (0x0000690d) list_single_graphic_2heading_pane_fp

0x696f,	// (0x0000696f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x696f,	// (0x0000696f) list_single_graphic_2heading_pane_fp_g1

0x6920,	// (0x00006920) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6920,	// (0x00006920) list_single_graphic_2heading_pane_fp_g2

0x692c,	// (0x0000692c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x692c,	// (0x0000692c) list_single_graphic_2heading_pane_fp_g3

0x6938,	// (0x00006938) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6938,	// (0x00006938) list_single_graphic_2heading_pane_fp_g4

0x694c,	// (0x0000694c) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x694c,	// (0x0000694c) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xa894,	// (0x0000a894) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xa894,	// (0x0000a894) list_single_graphic_2heading_pane_fp_g

0x71ba,	// (0x000071ba) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x71ba,	// (0x000071ba) list_single_graphic_2heading_pane_fp_t1

0x69a7,	// (0x000069a7) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x69a7,	// (0x000069a7) list_single_graphic_2heading_pane_fp_t2

0x71d0,	// (0x000071d0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x71d0,	// (0x000071d0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xa96f,	// (0x0000a96f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xa96f,	// (0x0000a96f) list_single_graphic_2heading_pane_fp_t

0x6288,	// (0x00006288) fep_hwr_write_pane_g5_ParamLimits

0x6288,	// (0x00006288) fep_hwr_write_pane_g5

0x6294,	// (0x00006294) fep_hwr_write_pane_g6_ParamLimits

0x6294,	// (0x00006294) fep_hwr_write_pane_g6

0x6e32,	// (0x00006e32) eswt_shell_pane_ParamLimits

0x353b,	// (0x0000353b) bg_popup_window_pane_cp18_ParamLimits

0x4973,	// (0x00004973) heading_pane_cp70

0x6f58,	// (0x00006f58) popup_eswt_tasktip_window_t1_ParamLimits

0xc150,	// (0x0000c150) aid_touch_tab_arrow_left

0xc164,	// (0x0000c164) aid_touch_tab_arrow_right

0xae2f,	// (0x0000ae2f) title_pane_g3_ParamLimits

0xae2f,	// (0x0000ae2f) title_pane_g3

0x111e,	// (0x0000111e) set_value_pane_g1

0xc0a4,	// (0x0000c0a4) popup_toolbar_trans_pane_ParamLimits

0x7100,	// (0x00007100) aid_size_cell_tb_trans_pane_ParamLimits

0x1221,	// (0x00001221) bg_tb_trans_pane_ParamLimits

0x7112,	// (0x00007112) grid_tb_trans_pane_ParamLimits

0x07c9,	// (0x000007c9) cont_note_pane_ParamLimits

0x07c9,	// (0x000007c9) cont_note_pane

0x0b03,	// (0x00000b03) cont_snote2_single_text_pane_ParamLimits

0x0b03,	// (0x00000b03) cont_snote2_single_text_pane

0x0b03,	// (0x00000b03) cont_snote2_single_graphic_pane_ParamLimits

0x0b03,	// (0x00000b03) cont_snote2_single_graphic_pane

0x3b77,	// (0x00003b77) cont_note_wait_pane_ParamLimits

0x3b77,	// (0x00003b77) cont_note_wait_pane

0x3b77,	// (0x00003b77) cont_note_image_pane_ParamLimits

0x3b77,	// (0x00003b77) cont_note_image_pane

0x71e6,	// (0x000071e6) popup_note2_window_g1_ParamLimits

0x71e6,	// (0x000071e6) popup_note2_window_g1

0x7217,	// (0x00007217) popup_note2_window_t1_ParamLimits

0x7217,	// (0x00007217) popup_note2_window_t1

0x725c,	// (0x0000725c) popup_note2_window_t2_ParamLimits

0x725c,	// (0x0000725c) popup_note2_window_t2

0x72a1,	// (0x000072a1) popup_note2_window_t3_ParamLimits

0x72a1,	// (0x000072a1) popup_note2_window_t3

0x72e6,	// (0x000072e6) popup_note2_window_t4_ParamLimits

0x72e6,	// (0x000072e6) popup_note2_window_t4

0x084d,	// (0x0000084d) popup_note2_window_t5_ParamLimits

0x084d,	// (0x0000084d) popup_note2_window_t5

0x0004,

0xa97b,	// (0x0000a97b) popup_note2_window_t_ParamLimits

0xa97b,	// (0x0000a97b) popup_note2_window_t

0x7315,	// (0x00007315) popup_note2_image_window_g1_ParamLimits

0x7315,	// (0x00007315) popup_note2_image_window_g1

0x7321,	// (0x00007321) popup_note2_image_window_g2_ParamLimits

0x7321,	// (0x00007321) popup_note2_image_window_g2

0x0001,

0xa986,	// (0x0000a986) popup_note2_image_window_g_ParamLimits

0xa986,	// (0x0000a986) popup_note2_image_window_g

0x7333,	// (0x00007333) popup_note2_image_window_t1_ParamLimits

0x7333,	// (0x00007333) popup_note2_image_window_t1

0x734b,	// (0x0000734b) popup_note2_image_window_t2_ParamLimits

0x734b,	// (0x0000734b) popup_note2_image_window_t2

0x7363,	// (0x00007363) popup_note2_image_window_t3_ParamLimits

0x7363,	// (0x00007363) popup_note2_image_window_t3

0x0002,

0xa98b,	// (0x0000a98b) popup_note2_image_window_t_ParamLimits

0xa98b,	// (0x0000a98b) popup_note2_image_window_t

0x3b85,	// (0x00003b85) popup_note2_wait_window_g1_ParamLimits

0x3b85,	// (0x00003b85) popup_note2_wait_window_g1

0x3b91,	// (0x00003b91) popup_note2_wait_window_g2_ParamLimits

0x3b91,	// (0x00003b91) popup_note2_wait_window_g2

0x3b9d,	// (0x00003b9d) popup_note2_wait_window_g3_ParamLimits

0x3b9d,	// (0x00003b9d) popup_note2_wait_window_g3

0x0002,

0xa552,	// (0x0000a552) popup_note2_wait_window_g_ParamLimits

0xa552,	// (0x0000a552) popup_note2_wait_window_g

0x737f,	// (0x0000737f) popup_note2_wait_window_t1_ParamLimits

0x737f,	// (0x0000737f) popup_note2_wait_window_t1

0x739d,	// (0x0000739d) popup_note2_wait_window_t2_ParamLimits

0x739d,	// (0x0000739d) popup_note2_wait_window_t2

0x73bb,	// (0x000073bb) popup_note2_wait_window_t3_ParamLimits

0x73bb,	// (0x000073bb) popup_note2_wait_window_t3

0x73cd,	// (0x000073cd) popup_note2_wait_window_t4_ParamLimits

0x73cd,	// (0x000073cd) popup_note2_wait_window_t4

0x0003,

0xa992,	// (0x0000a992) popup_note2_wait_window_t_ParamLimits

0xa992,	// (0x0000a992) popup_note2_wait_window_t

0x73df,	// (0x000073df) wait_bar2_pane_ParamLimits

0x73df,	// (0x000073df) wait_bar2_pane

0x73f7,	// (0x000073f7) popup_snote2_single_text_window_g1_ParamLimits

0x73f7,	// (0x000073f7) popup_snote2_single_text_window_g1

0x741f,	// (0x0000741f) popup_snote2_single_text_window_t1_ParamLimits

0x741f,	// (0x0000741f) popup_snote2_single_text_window_t1

0x746b,	// (0x0000746b) popup_snote2_single_text_window_t2_ParamLimits

0x746b,	// (0x0000746b) popup_snote2_single_text_window_t2

0x74b7,	// (0x000074b7) popup_snote2_single_text_window_t3_ParamLimits

0x74b7,	// (0x000074b7) popup_snote2_single_text_window_t3

0x74f8,	// (0x000074f8) popup_snote2_single_text_window_t4_ParamLimits

0x74f8,	// (0x000074f8) popup_snote2_single_text_window_t4

0x752e,	// (0x0000752e) popup_snote2_single_text_window_t5_ParamLimits

0x752e,	// (0x0000752e) popup_snote2_single_text_window_t5

0x0004,

0xa99b,	// (0x0000a99b) popup_snote2_single_text_window_t_ParamLimits

0xa99b,	// (0x0000a99b) popup_snote2_single_text_window_t

0x7559,	// (0x00007559) popup_snote2_single_graphic_window_g1_ParamLimits

0x7559,	// (0x00007559) popup_snote2_single_graphic_window_g1

0x7581,	// (0x00007581) popup_snote2_single_graphic_window_g2_ParamLimits

0x7581,	// (0x00007581) popup_snote2_single_graphic_window_g2

0x0001,

0xa9a6,	// (0x0000a9a6) popup_snote2_single_graphic_window_g_ParamLimits

0xa9a6,	// (0x0000a9a6) popup_snote2_single_graphic_window_g

0x75a9,	// (0x000075a9) popup_snote2_single_graphic_window_t1_ParamLimits

0x75a9,	// (0x000075a9) popup_snote2_single_graphic_window_t1

0x75f5,	// (0x000075f5) popup_snote2_single_graphic_window_t2_ParamLimits

0x75f5,	// (0x000075f5) popup_snote2_single_graphic_window_t2

0x74b7,	// (0x000074b7) popup_snote2_single_graphic_window_t3_ParamLimits

0x74b7,	// (0x000074b7) popup_snote2_single_graphic_window_t3

0x74f8,	// (0x000074f8) popup_snote2_single_graphic_window_t4_ParamLimits

0x74f8,	// (0x000074f8) popup_snote2_single_graphic_window_t4

0x752e,	// (0x0000752e) popup_snote2_single_graphic_window_t5_ParamLimits

0x752e,	// (0x0000752e) popup_snote2_single_graphic_window_t5

0x0004,

0xa9ab,	// (0x0000a9ab) popup_snote2_single_graphic_window_t_ParamLimits

0xa9ab,	// (0x0000a9ab) popup_snote2_single_graphic_window_t

0x5b4b,	// (0x00005b4b) clock_nsta_pane_cp2_t1

0x5b4b,	// (0x00005b4b) clock_nsta_pane_cp2_t2

0x0001,

0xa7d2,	// (0x0000a7d2) clock_nsta_pane_cp2_t

0x1240,	// (0x00001240) form_field_data_wide_pane_g1_ParamLimits

0x124c,	// (0x0000124c) form_field_data_wide_pane_g2_ParamLimits

0x124c,	// (0x0000124c) form_field_data_wide_pane_g2

0x1258,	// (0x00001258) form_field_data_wide_pane_g3_ParamLimits

0x1258,	// (0x00001258) form_field_data_wide_pane_g3

0x0002,

0xa385,	// (0x0000a385) form_field_data_wide_pane_g_ParamLimits

0xa385,	// (0x0000a385) form_field_data_wide_pane_g

0xcb05,	// (0x0000cb05) grid_touch_3_pane_ParamLimits

0xcb05,	// (0x0000cb05) grid_touch_3_pane

0xcfcd,	// (0x0000cfcd) cell_touch_3_pane_ParamLimits

0xcfcd,	// (0x0000cfcd) cell_touch_3_pane

0x6065,	// (0x00006065) cell_touch_3_pane_g1

0x6065,	// (0x00006065) cell_touch_3_pane_g2

0x0001,

0xa857,	// (0x0000a857) cell_touch_3_pane_g

0x087f,	// (0x0000087f) cont_query_data_pane

0x0887,	// (0x00000887) cont_query_data_pane_cp1

0x766e,	// (0x0000766e) button_value_adjust_pane_cp7

0x7676,	// (0x00007676) query_popup_pane_cp3

0x1ce9,	// (0x00001ce9) bg_popup_sub_pane_cp22_ParamLimits

0x1cff,	// (0x00001cff) navi_navi_volume_pane_cp2

0x1d17,	// (0x00001d17) popup_side_volume_key_window_g2

0x1d23,	// (0x00001d23) popup_side_volume_key_window_g3

0x0002,

0xa41b,	// (0x0000a41b) popup_side_volume_key_window_g

0x1d3d,	// (0x00001d3d) popup_side_volume_key_window_t2

0x0001,

0xa422,	// (0x0000a422) popup_side_volume_key_window_t

0x2198,	// (0x00002198) popup_side_volume_key_window_ParamLimits

0xb2bf,	// (0x0000b2bf) list_double_graphic_pane_g4_ParamLimits

0xb2bf,	// (0x0000b2bf) list_double_graphic_pane_g4

0xc973,	// (0x0000c973) list_single_2heading_msg_pane_ParamLimits

0xc973,	// (0x0000c973) list_single_2heading_msg_pane

0xd013,	// (0x0000d013) list_single_2heading_msg_pane_g1_ParamLimits

0xd013,	// (0x0000d013) list_single_2heading_msg_pane_g1

0xd01f,	// (0x0000d01f) list_single_2heading_msg_pane_g2_ParamLimits

0xd01f,	// (0x0000d01f) list_single_2heading_msg_pane_g2

0xd032,	// (0x0000d032) list_single_2heading_msg_pane_g3_ParamLimits

0xd032,	// (0x0000d032) list_single_2heading_msg_pane_g3

0x76bb,	// (0x000076bb) list_single_2heading_msg_pane_g4_ParamLimits

0x76bb,	// (0x000076bb) list_single_2heading_msg_pane_g4

0x0003,

0xe719,	// (0x0000e719) list_single_2heading_msg_pane_g_ParamLimits

0xe719,	// (0x0000e719) list_single_2heading_msg_pane_g

0xd03e,	// (0x0000d03e) list_single_2heading_msg_pane_t1_ParamLimits

0xd03e,	// (0x0000d03e) list_single_2heading_msg_pane_t1

0xd066,	// (0x0000d066) list_single_2heading_msg_pane_t2_ParamLimits

0xd066,	// (0x0000d066) list_single_2heading_msg_pane_t2

0xd0d1,	// (0x0000d0d1) list_single_2heading_msg_pane_t3_ParamLimits

0xd0d1,	// (0x0000d0d1) list_single_2heading_msg_pane_t3

0x7763,	// (0x00007763) list_single_2heading_msg_pane_t4_ParamLimits

0x7763,	// (0x00007763) list_single_2heading_msg_pane_t4

0x0003,

0xe722,	// (0x0000e722) list_single_2heading_msg_pane_t_ParamLimits

0xe722,	// (0x0000e722) list_single_2heading_msg_pane_t

0x03f7,	// (0x000003f7) title_pane_g4_ParamLimits

0x03f7,	// (0x000003f7) title_pane_g4

0x174d,	// (0x0000174d) title_pane_stacon_g3_ParamLimits

0x174d,	// (0x0000174d) title_pane_stacon_g3

0x717d,	// (0x0000717d) list_single_2graphic_im_pane_g4_ParamLimits

0x717d,	// (0x0000717d) list_single_2graphic_im_pane_g4

0x46f8,	// (0x000046f8) popup_side_volume_key_window_cp

0x50b2,	// (0x000050b2) main_idle_act2_pane_t1

0x33f9,	// (0x000033f9) toolbar_button_pane_g10

0xb17c,	// (0x0000b17c) popup_toolbar_window_cp1

0x5b3c,	// (0x00005b3c) clock_nsta_pane_cp_t1

0x5b3c,	// (0x00005b3c) clock_nsta_pane_cp_t2

0x0001,

0xa7cd,	// (0x0000a7cd) clock_nsta_pane_cp_t

0x1cff,	// (0x00001cff) navi_navi_volume_pane_cp2_ParamLimits

0x1d0b,	// (0x00001d0b) popup_side_volume_key_window_g1_ParamLimits

0x1d17,	// (0x00001d17) popup_side_volume_key_window_g2_ParamLimits

0x1d23,	// (0x00001d23) popup_side_volume_key_window_g3_ParamLimits

0xa41b,	// (0x0000a41b) popup_side_volume_key_window_g_ParamLimits

0x60ce,	// (0x000060ce) fep_hwr_aid_pane

0x616f,	// (0x0000616f) bg_fep_hwr_top_pane_g4_ParamLimits

0x618f,	// (0x0000618f) fep_hwr_top_pane_g1_ParamLimits

0x61a1,	// (0x000061a1) fep_hwr_top_pane_g2_ParamLimits

0x61b3,	// (0x000061b3) fep_hwr_top_pane_g3_ParamLimits

0xa822,	// (0x0000a822) fep_hwr_top_pane_g_ParamLimits

0x61c8,	// (0x000061c8) fep_hwr_top_text_pane_ParamLimits

0x44bb,	// (0x000044bb) aid_touch_tab_arrow_arrow_2

0x44c4,	// (0x000044c4) aid_touch_tab_arrow_left_2

0x60e2,	// (0x000060e2) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6115,	// (0x00006115) fep_hwr_prediction_pane

0x6417,	// (0x00006417) fep_vkb_prediction_pane

0xcd85,	// (0x0000cd85) fep_vkb_side_pane_g3_ParamLimits

0xcd85,	// (0x0000cd85) fep_vkb_side_pane_g3

0x64a5,	// (0x000064a5) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6b63,	// (0x00006b63) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6b70,	// (0x00006b70) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xa8cc,	// (0x0000a8cc) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7788,	// (0x00007788) fep_hwr_prediction_pane_g1

0x7792,	// (0x00007792) fep_hwr_prediction_pane_g2

0x4bff,	// (0x00004bff) fep_hwr_prediction_pane_g3

0x779a,	// (0x0000779a) fep_hwr_prediction_pane_g4

0x0003,

0xa9c8,	// (0x0000a9c8) fep_hwr_prediction_pane_g

0x7788,	// (0x00007788) fep_vkb_prediction_pane_g1

0x77a2,	// (0x000077a2) fep_vkb_prediction_pane_g2

0x77aa,	// (0x000077aa) fep_vkb_prediction_pane_g3

0x77b2,	// (0x000077b2) fep_vkb_prediction_pane_g4

0x0003,

0xa9d1,	// (0x0000a9d1) fep_vkb_prediction_pane_g

0x4a1e,	// (0x00004a1e) slider_set_pane_g3

0x4a32,	// (0x00004a32) slider_set_pane_g4

0x4a4a,	// (0x00004a4a) slider_set_pane_g5

0x4a1e,	// (0x00004a1e) slider_set_pane_g6

0xc7c7,	// (0x0000c7c7) slider_set_pane_g7

0x4bee,	// (0x00004bee) slider_form_pane_g3

0x4bf7,	// (0x00004bf7) slider_form_pane_g4

0x4bff,	// (0x00004bff) slider_form_pane_g5

0x4bee,	// (0x00004bee) slider_form_pane_g6

0xc92c,	// (0x0000c92c) slider_form_pane_g7

0x5393,	// (0x00005393) slider_set_pane_vc_g3

0x539c,	// (0x0000539c) slider_set_pane_vc_g4

0x53a5,	// (0x000053a5) slider_set_pane_vc_g5

0x5393,	// (0x00005393) slider_set_pane_vc_g6

0x53ae,	// (0x000053ae) slider_set_pane_vc_g7

0x5835,	// (0x00005835) slider_form_pane_vc_g1

0x583e,	// (0x0000583e) slider_form_pane_vc_g2

0x5847,	// (0x00005847) slider_form_pane_vc_g3

0x5835,	// (0x00005835) slider_form_pane_vc_g4

0x5850,	// (0x00005850) slider_form_pane_vc_g5

0x0004,

0xa79f,	// (0x0000a79f) slider_form_pane_vc_g

0x0020,	// (0x00000020) main_idle_act3_pane

0x77ba,	// (0x000077ba) ai3_links_pane

0xd13f,	// (0x0000d13f) popup_ai3_data_window_ParamLimits

0xd13f,	// (0x0000d13f) popup_ai3_data_window

0x0020,	// (0x00000020) grid_ai3_links_pane

0xd157,	// (0x0000d157) cell_ai3_links_pane_ParamLimits

0xd157,	// (0x0000d157) cell_ai3_links_pane

0x77ef,	// (0x000077ef) bg_popup_sub_pane_cp11

0x77fc,	// (0x000077fc) cell_ai3_links_pane_g1

0x0020,	// (0x00000020) bg_popup_sub_pane_cp12

0x7821,	// (0x00007821) heading_ai3_data_pane

0x7829,	// (0x00007829) list_ai3_gene_pane

0x7835,	// (0x00007835) popup_ai3_data_window_g1

0x783d,	// (0x0000783d) heading_ai3_data_pane_g1

0x7845,	// (0x00007845) heading_ai3_data_pane_t1

0x7853,	// (0x00007853) list_double_ai3_gene_pane_ParamLimits

0x7853,	// (0x00007853) list_double_ai3_gene_pane

0x7860,	// (0x00007860) list_single_ai3_gene_pane_ParamLimits

0x7860,	// (0x00007860) list_single_ai3_gene_pane

0x602a,	// (0x0000602a) list_highlight_pane_cp7_ParamLimits

0x602a,	// (0x0000602a) list_highlight_pane_cp7

0x786d,	// (0x0000786d) list_single_a13_gene_pane_t1_ParamLimits

0x786d,	// (0x0000786d) list_single_a13_gene_pane_t1

0x7884,	// (0x00007884) list_single_ai3_gene_pane_g1

0x788d,	// (0x0000788d) list_single_ai3_gene_pane_g2

0x0001,

0xa9da,	// (0x0000a9da) list_single_ai3_gene_pane_g

0x7895,	// (0x00007895) list_double_ai3_gene_pane_g1_ParamLimits

0x7895,	// (0x00007895) list_double_ai3_gene_pane_g1

0x78a1,	// (0x000078a1) list_double_ai3_gene_pane_t1_ParamLimits

0x78a1,	// (0x000078a1) list_double_ai3_gene_pane_t1

0x78bd,	// (0x000078bd) list_double_ai3_gene_pane_t2_ParamLimits

0x78bd,	// (0x000078bd) list_double_ai3_gene_pane_t2

0x78d3,	// (0x000078d3) list_double_ai3_gene_pane_t3_ParamLimits

0x78d3,	// (0x000078d3) list_double_ai3_gene_pane_t3

0x0002,

0xa9df,	// (0x0000a9df) list_double_ai3_gene_pane_t_ParamLimits

0xa9df,	// (0x0000a9df) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7687,	// (0x00007687) aid_size_min_col_2

0xcfff,	// (0x0000cfff) aid_size_min_msg_ParamLimits

0xcfff,	// (0x0000cfff) aid_size_min_msg

0xcd99,	// (0x0000cd99) fep_vkb_top_text_pane_g2_ParamLimits

0xcd99,	// (0x0000cd99) fep_vkb_top_text_pane_g2

0x0001,

0xe6f6,	// (0x0000e6f6) fep_vkb_top_text_pane_g_ParamLimits

0xe6f6,	// (0x0000e6f6) fep_vkb_top_text_pane_g

0x0020,	// (0x00000020) main_hc_apps_shell_pane

0x78f0,	// (0x000078f0) grid_hc_apps_pane_ParamLimits

0x78f0,	// (0x000078f0) grid_hc_apps_pane

0x78ff,	// (0x000078ff) list_hc_apps_pane

0x7907,	// (0x00007907) scroll_pane_cp37_ParamLimits

0x7907,	// (0x00007907) scroll_pane_cp37

0xd16d,	// (0x0000d16d) cell_hc_apps_pane_ParamLimits

0xd16d,	// (0x0000d16d) cell_hc_apps_pane

0xd207,	// (0x0000d207) cell_hc_apps_pane_g1_ParamLimits

0xd207,	// (0x0000d207) cell_hc_apps_pane_g1

0x79ce,	// (0x000079ce) cell_hc_apps_pane_g2_ParamLimits

0x79ce,	// (0x000079ce) cell_hc_apps_pane_g2

0x79ea,	// (0x000079ea) cell_hc_apps_pane_g3_ParamLimits

0x79ea,	// (0x000079ea) cell_hc_apps_pane_g3

0x0002,

0xe72b,	// (0x0000e72b) cell_hc_apps_pane_g_ParamLimits

0xe72b,	// (0x0000e72b) cell_hc_apps_pane_g

0xd234,	// (0x0000d234) cell_hc_apps_pane_t1_ParamLimits

0xd234,	// (0x0000d234) cell_hc_apps_pane_t1

0x07c9,	// (0x000007c9) grid_highlight_pane_cp10_ParamLimits

0x07c9,	// (0x000007c9) grid_highlight_pane_cp10

0xd272,	// (0x0000d272) list_single_hc_apps_pane_ParamLimits

0xd272,	// (0x0000d272) list_single_hc_apps_pane

0xd29d,	// (0x0000d29d) list_single_hc_apps_pane_g1

0xd2b6,	// (0x0000d2b6) list_single_hc_apps_pane_g2

0x0001,

0xe732,	// (0x0000e732) list_single_hc_apps_pane_g

0xd2cf,	// (0x0000d2cf) list_single_hc_apps_pane_g2_copy1

0xd2eb,	// (0x0000d2eb) list_single_hc_apps_pane_t1

0x04a3,	// (0x000004a3) bg_set_opt_pane_cp_ParamLimits

0x04ed,	// (0x000004ed) setting_slider_pane_t1_ParamLimits

0xaef3,	// (0x0000aef3) setting_slider_pane_t2_ParamLimits

0xaf0c,	// (0x0000af0c) setting_slider_pane_t3_ParamLimits

0xe4ed,	// (0x0000e4ed) setting_slider_pane_t_ParamLimits

0x0536,	// (0x00000536) slider_set_pane_ParamLimits

0x27bc,	// (0x000027bc) control_pane_g5_ParamLimits

0x27bc,	// (0x000027bc) control_pane_g5

0x4a05,	// (0x00004a05) slider_set_pane_g1_ParamLimits

0x4a12,	// (0x00004a12) slider_set_pane_g2_ParamLimits

0x4a1e,	// (0x00004a1e) slider_set_pane_g3_ParamLimits

0x4a32,	// (0x00004a32) slider_set_pane_g4_ParamLimits

0x4a4a,	// (0x00004a4a) slider_set_pane_g5_ParamLimits

0x4a1e,	// (0x00004a1e) slider_set_pane_g6_ParamLimits

0xc7c7,	// (0x0000c7c7) slider_set_pane_g7_ParamLimits

0xe672,	// (0x0000e672) slider_set_pane_g_ParamLimits

0x227a,	// (0x0000227a) navi_icon_text_pane_ParamLimits

0xc121,	// (0x0000c121) aid_fill_nsta_2_ParamLimits

0xc150,	// (0x0000c150) aid_touch_tab_arrow_left_ParamLimits

0xc164,	// (0x0000c164) aid_touch_tab_arrow_right_ParamLimits

0xc1fd,	// (0x0000c1fd) clock_nsta_pane_ParamLimits

0x449d,	// (0x0000449d) navi_icon_pane_g1_ParamLimits

0x44a9,	// (0x000044a9) navi_text_pane_t1_ParamLimits

0x5c2f,	// (0x00005c2f) navi_icon_text_pane_g1_ParamLimits

0x5c3b,	// (0x00005c3b) navi_icon_text_pane_t1_ParamLimits

0xd29d,	// (0x0000d29d) list_single_hc_apps_pane_g1_ParamLimits

0xd2b6,	// (0x0000d2b6) list_single_hc_apps_pane_g2_ParamLimits

0xe732,	// (0x0000e732) list_single_hc_apps_pane_g_ParamLimits

0xd2cf,	// (0x0000d2cf) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd2eb,	// (0x0000d2eb) list_single_hc_apps_pane_t1_ParamLimits

0xad52,	// (0x0000ad52) popup_toolbar2_fixed_window_ParamLimits

0xad52,	// (0x0000ad52) popup_toolbar2_fixed_window

0xc09c,	// (0x0000c09c) popup_toolbar2_float_window

0x0020,	// (0x00000020) bg_popup_sub_pane_cp27

0x7af2,	// (0x00007af2) grid_toolbar2_float_pane

0x0020,	// (0x00000020) bg_popup_sub_pane_cp26

0x7af2,	// (0x00007af2) grid_toolbar2_fixed_pane

0xd319,	// (0x0000d319) cell_toolbar2_fixed_pane_ParamLimits

0xd319,	// (0x0000d319) cell_toolbar2_fixed_pane

0xd334,	// (0x0000d334) cell_toolbar2_fixed_pane_g1

0x7b14,	// (0x00007b14) toolbar2_fixed_button_pane

0x33b1,	// (0x000033b1) toolbar2_fixed_button_pane_g1

0x33b9,	// (0x000033b9) toolbar2_fixed_button_pane_g2

0x33c1,	// (0x000033c1) toolbar2_fixed_button_pane_g3

0x33c9,	// (0x000033c9) toolbar2_fixed_button_pane_g4

0x33d1,	// (0x000033d1) toolbar2_fixed_button_pane_g5

0x33d9,	// (0x000033d9) toolbar2_fixed_button_pane_g6

0x33e1,	// (0x000033e1) toolbar2_fixed_button_pane_g7

0x33e9,	// (0x000033e9) toolbar2_fixed_button_pane_g8

0x33f1,	// (0x000033f1) toolbar2_fixed_button_pane_g9

0x0008,

0xa570,	// (0x0000a570) toolbar2_fixed_button_pane_g

0x7b1c,	// (0x00007b1c) cell_toolbar2_float_pane_ParamLimits

0x7b1c,	// (0x00007b1c) cell_toolbar2_float_pane

0x7b2d,	// (0x00007b2d) cell_toolbar2_float_pane_g1

0x7b14,	// (0x00007b14) toolbar2_fixed_button_pane_cp

0xcd4e,	// (0x0000cd4e) fep_vkb_accented_list_pane_ParamLimits

0xcd4e,	// (0x0000cd4e) fep_vkb_accented_list_pane

0x67d8,	// (0x000067d8) bg_popup_fep_shadow_pane_g9

0x23ec,	// (0x000023ec) bg_popup_fep_shadow_pane_cp3

0x14dd,	// (0x000014dd) list_accented_list_pane

0x7b36,	// (0x00007b36) list_single_accented_list_pane_ParamLimits

0x7b36,	// (0x00007b36) list_single_accented_list_pane

0x23ec,	// (0x000023ec) list_highlight_pane_cp10

0x7b47,	// (0x00007b47) list_single_accented_list_pane_t1

0xbfe2,	// (0x0000bfe2) popup_slider_window_ParamLimits

0xbfe2,	// (0x0000bfe2) popup_slider_window

0x767e,	// (0x0000767e) aid_indentation_list_msg

0xd413,	// (0x0000d413) bg_popup_window_pane_cp19

0x7c4b,	// (0x00007c4b) popup_slider_window_g1

0x7c67,	// (0x00007c67) popup_slider_window_g2

0x7c83,	// (0x00007c83) popup_slider_window_g3

0x0005,

0xe737,	// (0x0000e737) popup_slider_window_g

0x7cdf,	// (0x00007cdf) popup_slider_window_t1

0x7d51,	// (0x00007d51) small_volume_slider_vertical_pane

0x6065,	// (0x00006065) small_volume_slider_vertical_pane_g1

0x6065,	// (0x00006065) small_volume_slider_vertical_pane_g2

0x7d6d,	// (0x00007d6d) small_volume_slider_vertical_pane_g3

0x0002,

0xaa04,	// (0x0000aa04) small_volume_slider_vertical_pane_g

0xacd6,	// (0x0000acd6) area_side_right_pane_ParamLimits

0xacd6,	// (0x0000acd6) area_side_right_pane

0xd4cb,	// (0x0000d4cb) aid_size_side_button_ParamLimits

0xd4cb,	// (0x0000d4cb) aid_size_side_button

0xd4e4,	// (0x0000d4e4) grid_sctrl_middle_pane_ParamLimits

0xd4e4,	// (0x0000d4e4) grid_sctrl_middle_pane

0x7da5,	// (0x00007da5) sctrl_sk_bottom_pane

0x7db6,	// (0x00007db6) sctrl_sk_top_pane

0x7dc8,	// (0x00007dc8) aid_touch_sctrl_top

0x07c9,	// (0x000007c9) bg_sctrl_sk_pane_ParamLimits

0x07c9,	// (0x000007c9) bg_sctrl_sk_pane

0x7dd5,	// (0x00007dd5) sctrl_sk_top_pane_g1

0x7de2,	// (0x00007de2) sctrl_sk_top_pane_t1

0x7dc8,	// (0x00007dc8) aid_touch_sctrl_bottom

0x07c9,	// (0x000007c9) bg_sctrl_sk_pane_cp_ParamLimits

0x07c9,	// (0x000007c9) bg_sctrl_sk_pane_cp

0x7dfd,	// (0x00007dfd) sctrl_sk_bottom_pane_g1

0x7de2,	// (0x00007de2) sctrl_sk_bottom_pane_t1

0xd4fa,	// (0x0000d4fa) cell_sctrl_middle_pane_ParamLimits

0xd4fa,	// (0x0000d4fa) cell_sctrl_middle_pane

0xd50b,	// (0x0000d50b) aid_touch_sctrl_middle_ParamLimits

0xd50b,	// (0x0000d50b) aid_touch_sctrl_middle

0xd518,	// (0x0000d518) bg_sctrl_middle_pane_ParamLimits

0xd518,	// (0x0000d518) bg_sctrl_middle_pane

0x7ebf,	// (0x00007ebf) cell_sctrl_middle_pane_g1_ParamLimits

0x7ebf,	// (0x00007ebf) cell_sctrl_middle_pane_g1

0xd526,	// (0x0000d526) cell_sctrl_middle_pane_g2_ParamLimits

0xd526,	// (0x0000d526) cell_sctrl_middle_pane_g2

0x0001,

0xe744,	// (0x0000e744) cell_sctrl_middle_pane_g_ParamLimits

0xe744,	// (0x0000e744) cell_sctrl_middle_pane_g

0x33b1,	// (0x000033b1) bg_sctrl_middle_pane_g1

0x33b9,	// (0x000033b9) bg_sctrl_middle_pane_g2

0x33c1,	// (0x000033c1) bg_sctrl_middle_pane_g3

0x33c9,	// (0x000033c9) bg_sctrl_middle_pane_g4

0x33d1,	// (0x000033d1) bg_sctrl_middle_pane_g5

0x33d9,	// (0x000033d9) bg_sctrl_middle_pane_g6

0x33e1,	// (0x000033e1) bg_sctrl_middle_pane_g7

0x33e9,	// (0x000033e9) bg_sctrl_middle_pane_g8

0x0007,

0xaa15,	// (0x0000aa15) bg_sctrl_middle_pane_g

0x33f1,	// (0x000033f1) bg_sctrl_middle_pane_g8_copy1

0x33b1,	// (0x000033b1) bg_sctrl_sk_pane_g1

0x33b9,	// (0x000033b9) bg_sctrl_sk_pane_g2

0x33c1,	// (0x000033c1) bg_sctrl_sk_pane_g3

0x0008,

0xa570,	// (0x0000a570) bg_sctrl_sk_pane_g

0x0c25,	// (0x00000c25) aid_size_touch_scroll_bar

0x33c9,	// (0x000033c9) bg_sctrl_sk_pane_g4

0x33d1,	// (0x000033d1) bg_sctrl_sk_pane_g5

0x33d9,	// (0x000033d9) bg_sctrl_sk_pane_g6

0x33e1,	// (0x000033e1) bg_sctrl_sk_pane_g7

0x33e9,	// (0x000033e9) bg_sctrl_sk_pane_g8

0x33f1,	// (0x000033f1) bg_sctrl_sk_pane_g9

0x2a04,	// (0x00002a04) popup_fep_china_hwr2_fs_candidate_window

0xbbda,	// (0x0000bbda) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbbda,	// (0x0000bbda) popup_fep_china_hwr2_fs_control_window

0x64a5,	// (0x000064a5) sctrl_sk_top_pane_g2

0x0001,

0xaa0b,	// (0x0000aa0b) sctrl_sk_top_pane_g

0xd532,	// (0x0000d532) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd532,	// (0x0000d532) aid_fep_china_hwr2_fs_cell

0xd546,	// (0x0000d546) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd546,	// (0x0000d546) bg_popup_fep_shadow_pane_cp4

0xd55d,	// (0x0000d55d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd55d,	// (0x0000d55d) bg_popup_fep_shadow_pane_cp5

0xd56f,	// (0x0000d56f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd56f,	// (0x0000d56f) popup_fep_china_hwr2_fs_control_bar_grid

0xd583,	// (0x0000d583) popup_fep_china_hwr2_fs_control_funtion_grid

0x7e95,	// (0x00007e95) aid_fep_china_hwr2_fs_candi_cell

0x0020,	// (0x00000020) bg_popup_fep_shadow_pane_cp6

0x7e9f,	// (0x00007e9f) popup_fep_china_hwr2_fs_candidate_grid

0xd58b,	// (0x0000d58b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd58b,	// (0x0000d58b) cell_fep_china_hwr2_fs_funtion_grid

0x6065,	// (0x00006065) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x7ebf,	// (0x00007ebf) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x7ebf,	// (0x00007ebf) cell_fep_china_hwr2_fs_funtion_grid_g1

0x7ecd,	// (0x00007ecd) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x7ecd,	// (0x00007ecd) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xaa26,	// (0x0000aa26) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xaa26,	// (0x0000aa26) cell_fep_china_hwr2_fs_funtion_grid_g

0xd5a3,	// (0x0000d5a3) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd5a3,	// (0x0000d5a3) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd5b8,	// (0x0000d5b8) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd5b8,	// (0x0000d5b8) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xe749,	// (0x0000e749) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xe749,	// (0x0000e749) cell_fep_china_hwr2_fs_funtion_grid_t

0x7f14,	// (0x00007f14) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x7f1c,	// (0x00007f1c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x7f24,	// (0x00007f24) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xaa30,	// (0x0000aa30) popup_fep_china_hwr2_fs_control_bar_grid_g

0x7f2c,	// (0x00007f2c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x7f2c,	// (0x00007f2c) cell_fep_china_hwr2_fs_candidate_grid

0x7f45,	// (0x00007f45) popup_fep_china_hwr2_fs_candidate_grid_g20

0x7f4d,	// (0x00007f4d) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6065,	// (0x00006065) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6065,	// (0x00006065) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xa857,	// (0x0000a857) cell_fep_china_hwr2_fs_candidate_grid_g

0x7f55,	// (0x00007f55) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2f13,	// (0x00002f13) clock_nsta_pane_cp_24_ParamLimits

0x2f13,	// (0x00002f13) clock_nsta_pane_cp_24

0x2f91,	// (0x00002f91) indicator_nsta_pane_cp_24_ParamLimits

0x2f91,	// (0x00002f91) indicator_nsta_pane_cp_24

0x430a,	// (0x0000430a) heading_pane_g1

0x0001,

0xa5d5,	// (0x0000a5d5) heading_pane_g

0x4e43,	// (0x00004e43) grid_sct_catagory_button_pane

0x4e73,	// (0x00004e73) scroll_pane_cp5_ParamLimits

0x5cce,	// (0x00005cce) button_value_adjust_pane_cp5_ParamLimits

0x5cce,	// (0x00005cce) button_value_adjust_pane_cp5

0x5dc4,	// (0x00005dc4) form2_midp_time_pane_ParamLimits

0x7f63,	// (0x00007f63) cell_sct_catagory_button_pane_ParamLimits

0x7f63,	// (0x00007f63) cell_sct_catagory_button_pane

0x602a,	// (0x0000602a) bg_button_pane_cp01_ParamLimits

0x602a,	// (0x0000602a) bg_button_pane_cp01

0x6065,	// (0x00006065) cell_sct_catagory_button_pane_g1

0xc051,	// (0x0000c051) popup_tb_extension_window

0xd5d4,	// (0x0000d5d4) aid_size_cell_ext_ParamLimits

0xd5d4,	// (0x0000d5d4) aid_size_cell_ext

0x0b03,	// (0x00000b03) bg_tb_trans_pane_cp1_ParamLimits

0x0b03,	// (0x00000b03) bg_tb_trans_pane_cp1

0xd5f6,	// (0x0000d5f6) grid_tb_ext_pane_ParamLimits

0xd5f6,	// (0x0000d5f6) grid_tb_ext_pane

0xd626,	// (0x0000d626) cell_tb_ext_pane_ParamLimits

0xd626,	// (0x0000d626) cell_tb_ext_pane

0xd64a,	// (0x0000d64a) cell_tb_ext_pane_g1_ParamLimits

0xd64a,	// (0x0000d64a) cell_tb_ext_pane_g1

0x7fe8,	// (0x00007fe8) cell_tb_ext_pane_t1

0x07c9,	// (0x000007c9) list_highlight_pane_cp11_ParamLimits

0x07c9,	// (0x000007c9) list_highlight_pane_cp11

0xad67,	// (0x0000ad67) popup_uni_indicator_window_ParamLimits

0xad67,	// (0x0000ad67) popup_uni_indicator_window

0x1221,	// (0x00001221) bg_popup_sub_pane_cp14

0x8003,	// (0x00008003) list_uniindi_pane

0x800f,	// (0x0000800f) uniindi_top_pane

0x07c9,	// (0x000007c9) bg_uniindi_top_pane

0x802e,	// (0x0000802e) uniindi_top_pane_g1

0x8044,	// (0x00008044) uniindi_top_pane_g2

0x0003,

0xaa37,	// (0x0000aa37) uniindi_top_pane_g

0x806e,	// (0x0000806e) uniindi_top_pane_t1

0x8098,	// (0x00008098) list_single_uniindi_pane_ParamLimits

0x8098,	// (0x00008098) list_single_uniindi_pane

0x6065,	// (0x00006065) bg_uniindi_top_pane_g1

0x80aa,	// (0x000080aa) list_single_uniindi_pane_g1

0x80bd,	// (0x000080bd) list_single_uniindi_pane_t1

0x0020,	// (0x00000020) control_bg_pane

0x80e2,	// (0x000080e2) bg_sctrl_sk_pane_cp1

0x80eb,	// (0x000080eb) bg_sctrl_sk_pane_cp2

0x80f4,	// (0x000080f4) control_bg_pane_g1

0x80fd,	// (0x000080fd) control_bg_pane_g2

0x0001,

0xaa40,	// (0x0000aa40) control_bg_pane_g

0x5af1,	// (0x00005af1) cell_indicator_nsta_pane_g1_ParamLimits

0xcb32,	// (0x0000cb32) cell_indicator_nsta_pane_g2_ParamLimits

0xe6c1,	// (0x0000e6c1) cell_indicator_nsta_pane_g_ParamLimits

0x5e42,	// (0x00005e42) form2_midp_time_pane_t1_ParamLimits

0x60c0,	// (0x000060c0) main_idle_act4_pane_ParamLimits

0x60c0,	// (0x000060c0) main_idle_act4_pane

0xc051,	// (0x0000c051) popup_tb_extension_window_ParamLimits

0xd612,	// (0x0000d612) tb_ext_find_pane_ParamLimits

0xd612,	// (0x0000d612) tb_ext_find_pane

0x8106,	// (0x00008106) ai_gene_pane_1_cp1

0x2527,	// (0x00002527) ai_gene_pane_2_cp1

0x810e,	// (0x0000810e) list_single_idle_plugin_calendar_pane

0x8117,	// (0x00008117) list_single_idle_plugin_notification_pane

0x8120,	// (0x00008120) list_single_idle_plugin_player_pane

0xd667,	// (0x0000d667) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd667,	// (0x0000d667) list_single_idle_plugin_shortcut_pane

0xd687,	// (0x0000d687) main_idle_act4_pane_t1

0xd69d,	// (0x0000d69d) main_idle_act4_pane_t2

0x0001,

0xe74e,	// (0x0000e74e) main_idle_act4_pane_t

0xd6b3,	// (0x0000d6b3) middle_sk_idle_act4_pane_ParamLimits

0xd6b3,	// (0x0000d6b3) middle_sk_idle_act4_pane

0xd6cf,	// (0x0000d6cf) popup_clock_digital_analogue_window_cp2

0xd6f5,	// (0x0000d6f5) shortcut_wheel_idle_act4_pane_ParamLimits

0xd6f5,	// (0x0000d6f5) shortcut_wheel_idle_act4_pane

0x6065,	// (0x00006065) shortcut_wheel_idle_act4_pane_g1

0x6065,	// (0x00006065) shortcut_wheel_idle_act4_pane_g2

0x6065,	// (0x00006065) shortcut_wheel_idle_act4_pane_g3

0x6065,	// (0x00006065) shortcut_wheel_idle_act4_pane_g4

0x6065,	// (0x00006065) shortcut_wheel_idle_act4_pane_g5

0x81ad,	// (0x000081ad) shortcut_wheel_idle_act4_pane_g6

0x81b5,	// (0x000081b5) shortcut_wheel_idle_act4_pane_g7

0x81bd,	// (0x000081bd) shortcut_wheel_idle_act4_pane_g8

0x81c5,	// (0x000081c5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xaa4a,	// (0x0000aa4a) shortcut_wheel_idle_act4_pane_g

0x616f,	// (0x0000616f) middle_sk_idle_act4_pane_g1_ParamLimits

0x616f,	// (0x0000616f) middle_sk_idle_act4_pane_g1

0xd770,	// (0x0000d770) middle_sk_idle_act4_pane_g2_ParamLimits

0xd770,	// (0x0000d770) middle_sk_idle_act4_pane_g2

0x0001,

0xe763,	// (0x0000e763) middle_sk_idle_act4_pane_g_ParamLimits

0xe763,	// (0x0000e763) middle_sk_idle_act4_pane_g

0xd788,	// (0x0000d788) middle_sk_idle_act4_pane_t1_ParamLimits

0xd788,	// (0x0000d788) middle_sk_idle_act4_pane_t1

0xd7b7,	// (0x0000d7b7) grid_ai_shortcut_pane_ParamLimits

0xd7b7,	// (0x0000d7b7) grid_ai_shortcut_pane

0xd7d4,	// (0x0000d7d4) list_highlight_pane_cp16_ParamLimits

0xd7d4,	// (0x0000d7d4) list_highlight_pane_cp16

0xd7e1,	// (0x0000d7e1) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd7e1,	// (0x0000d7e1) list_single_idle_plugin_shortcut_pane_g1

0xd7ed,	// (0x0000d7ed) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd7ed,	// (0x0000d7ed) list_single_idle_plugin_shortcut_pane_g2

0xd809,	// (0x0000d809) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd809,	// (0x0000d809) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xe768,	// (0x0000e768) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xe768,	// (0x0000e768) list_single_idle_plugin_shortcut_pane_g

0xd81e,	// (0x0000d81e) cell_ai_shortcut_pane_ParamLimits

0xd81e,	// (0x0000d81e) cell_ai_shortcut_pane

0xd834,	// (0x0000d834) cell_ai_shortcut_pane_g1_ParamLimits

0xd834,	// (0x0000d834) cell_ai_shortcut_pane_g1

0x8106,	// (0x00008106) ai_gene_pane_1_cp2

0x82f2,	// (0x000082f2) ai_gene_pane_2_cp2

0x82fa,	// (0x000082fa) list_highlight_pane_cp15

0x8303,	// (0x00008303) list_single_idle_plugin_calendar_pane_g1

0x82fa,	// (0x000082fa) list_highlight_pane_cp17

0x830b,	// (0x0000830b) list_single_idle_plugin_calendar_pane_g1_copy1

0x8313,	// (0x00008313) list_single_idle_plugin_player_pane_g1

0x5152,	// (0x00005152) list_single_idle_plugin_player_pane_g2

0x0001,

0xaa79,	// (0x0000aa79) list_single_idle_plugin_player_pane_g

0x831b,	// (0x0000831b) list_single_idle_plugin_player_pane_t1

0x8329,	// (0x00008329) list_single_idle_plugin_player_pane_t2

0x8337,	// (0x00008337) list_single_idle_plugin_player_pane_t3

0x8345,	// (0x00008345) list_single_idle_plugin_player_pane_t4

0x0003,

0xaa7e,	// (0x0000aa7e) list_single_idle_plugin_player_pane_t

0x8353,	// (0x00008353) wait_bar_pane_cp15

0x835b,	// (0x0000835b) grid_ai_notification_pane

0x5152,	// (0x00005152) list_single_idle_plugin_notification_pane_g1

0xd856,	// (0x0000d856) cell_ai_notification_pane_ParamLimits

0xd856,	// (0x0000d856) cell_ai_notification_pane

0x8371,	// (0x00008371) cell_ai_notification_pane_g1

0x8379,	// (0x00008379) cell_ai_notification_pane_t1

0xd863,	// (0x0000d863) tb_ext_find_button_pane

0xd86b,	// (0x0000d86b) tb_ext_find_pane_g1

0xd873,	// (0x0000d873) tb_ext_find_pane_t1

0x1b94,	// (0x00001b94) tb_ext_find_button_pane_g1

0x83a5,	// (0x000083a5) tb_ext_find_button_pane_g2

0x0001,

0xaa87,	// (0x0000aa87) tb_ext_find_button_pane_g

0xd687,	// (0x0000d687) main_idle_act4_pane_t1_ParamLimits

0xd69d,	// (0x0000d69d) main_idle_act4_pane_t2_ParamLimits

0xe74e,	// (0x0000e74e) main_idle_act4_pane_t_ParamLimits

0xd6cf,	// (0x0000d6cf) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd6e5,	// (0x0000d6e5) sat_plugin_idle_act4_pane_ParamLimits

0xd6e5,	// (0x0000d6e5) sat_plugin_idle_act4_pane

0xd881,	// (0x0000d881) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd881,	// (0x0000d881) sat_plugin_idle_act4_pane_t1

0xd899,	// (0x0000d899) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd899,	// (0x0000d899) sat_plugin_idle_act4_pane_t2

0xd8b1,	// (0x0000d8b1) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd8b1,	// (0x0000d8b1) sat_plugin_idle_act4_pane_t3

0xd8c9,	// (0x0000d8c9) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd8c9,	// (0x0000d8c9) sat_plugin_idle_act4_pane_t4

0x0003,

0xe76f,	// (0x0000e76f) sat_plugin_idle_act4_pane_t_ParamLimits

0xe76f,	// (0x0000e76f) sat_plugin_idle_act4_pane_t

0x0287,	// (0x00000287) popup_battery_window_ParamLimits

0x0287,	// (0x00000287) popup_battery_window

0x07c9,	// (0x000007c9) bg_popup_sub_pane_cp25_ParamLimits

0x07c9,	// (0x000007c9) bg_popup_sub_pane_cp25

0x83fa,	// (0x000083fa) popup_battery_window_g1_ParamLimits

0x83fa,	// (0x000083fa) popup_battery_window_g1

0x8406,	// (0x00008406) popup_battery_window_t1_ParamLimits

0x8406,	// (0x00008406) popup_battery_window_t1

0x8418,	// (0x00008418) popup_battery_window_t2_ParamLimits

0x8418,	// (0x00008418) popup_battery_window_t2

0x0001,

0xaa95,	// (0x0000aa95) popup_battery_window_t_ParamLimits

0xaa95,	// (0x0000aa95) popup_battery_window_t

0xb876,	// (0x0000b876) midp_canvas_pane_ParamLimits

0xb8cb,	// (0x0000b8cb) midp_keypad_pane_ParamLimits

0xb8cb,	// (0x0000b8cb) midp_keypad_pane

0x2966,	// (0x00002966) main_midp_pane_ParamLimits

0x5b5a,	// (0x00005b5a) signal_pane_g2_cp_ParamLimits

0xd8e1,	// (0x0000d8e1) aid_size_cell_midp_keypad_ParamLimits

0xd8e1,	// (0x0000d8e1) aid_size_cell_midp_keypad

0xd8fe,	// (0x0000d8fe) midp_keyp_game_grid_pane_ParamLimits

0xd8fe,	// (0x0000d8fe) midp_keyp_game_grid_pane

0xd91d,	// (0x0000d91d) midp_keyp_rocker_pane_ParamLimits

0xd91d,	// (0x0000d91d) midp_keyp_rocker_pane

0xd95e,	// (0x0000d95e) midp_keyp_sk_left_pane_ParamLimits

0xd95e,	// (0x0000d95e) midp_keyp_sk_left_pane

0xd9b0,	// (0x0000d9b0) midp_keyp_sk_right_pane_ParamLimits

0xd9b0,	// (0x0000d9b0) midp_keyp_sk_right_pane

0x0020,	// (0x00000020) bg_button_pane_cp03

0xd9fc,	// (0x0000d9fc) midp_keyp_sk_left_pane_g1

0x0020,	// (0x00000020) bg_button_pane_cp04

0xd9fc,	// (0x0000d9fc) midp_keyp_sk_right_pane_g1

0x6065,	// (0x00006065) midp_keyp_rocker_pane_g1

0xda05,	// (0x0000da05) keyp_game_cell_pane_ParamLimits

0xda05,	// (0x0000da05) keyp_game_cell_pane

0x0020,	// (0x00000020) bg_button_pane_cp02

0xda27,	// (0x0000da27) keyp_game_cell_pane_g1

0xad18,	// (0x0000ad18) popup_fep_vkb2_window_ParamLimits

0xad18,	// (0x0000ad18) popup_fep_vkb2_window

0xda30,	// (0x0000da30) aid_size_cell_vkb2_ParamLimits

0xda30,	// (0x0000da30) aid_size_cell_vkb2

0xda66,	// (0x0000da66) popup_fep_vkb2_window_g1_ParamLimits

0xda66,	// (0x0000da66) popup_fep_vkb2_window_g1

0xdab6,	// (0x0000dab6) vkb2_area_bottom_pane_ParamLimits

0xdab6,	// (0x0000dab6) vkb2_area_bottom_pane

0xdaf4,	// (0x0000daf4) vkb2_area_keypad_pane_ParamLimits

0xdaf4,	// (0x0000daf4) vkb2_area_keypad_pane

0xdb32,	// (0x0000db32) vkb2_area_top_pane_ParamLimits

0xdb32,	// (0x0000db32) vkb2_area_top_pane

0xdbae,	// (0x0000dbae) vkb2_top_entry_pane_ParamLimits

0xdbae,	// (0x0000dbae) vkb2_top_entry_pane

0xdbdb,	// (0x0000dbdb) vkb2_top_grid_left_pane_ParamLimits

0xdbdb,	// (0x0000dbdb) vkb2_top_grid_left_pane

0xdbfb,	// (0x0000dbfb) vkb2_top_grid_right_pane_ParamLimits

0xdbfb,	// (0x0000dbfb) vkb2_top_grid_right_pane

0x8753,	// (0x00008753) vkb2_cell_keypad_pane_ParamLimits

0x8753,	// (0x00008753) vkb2_cell_keypad_pane

0xdc41,	// (0x0000dc41) vkb2_area_bottom_grid_pane_ParamLimits

0xdc41,	// (0x0000dc41) vkb2_area_bottom_grid_pane

0xdc67,	// (0x0000dc67) vkb2_area_bottom_pane_g1_ParamLimits

0xdc67,	// (0x0000dc67) vkb2_area_bottom_pane_g1

0xdc8d,	// (0x0000dc8d) vkb2_area_bottom_pane_g2_ParamLimits

0xdc8d,	// (0x0000dc8d) vkb2_area_bottom_pane_g2

0xdcbe,	// (0x0000dcbe) vkb2_area_bottom_pane_g3_ParamLimits

0xdcbe,	// (0x0000dcbe) vkb2_area_bottom_pane_g3

0x0002,

0xe778,	// (0x0000e778) vkb2_area_bottom_pane_g_ParamLimits

0xe778,	// (0x0000e778) vkb2_area_bottom_pane_g

0x88cb,	// (0x000088cb) vkb2_top_cell_left_pane_ParamLimits

0x88cb,	// (0x000088cb) vkb2_top_cell_left_pane

0xdd14,	// (0x0000dd14) vkb2_top_entry_pane_g1_ParamLimits

0xdd14,	// (0x0000dd14) vkb2_top_entry_pane_g1

0xdd22,	// (0x0000dd22) vkb2_top_entry_pane_t1_ParamLimits

0xdd22,	// (0x0000dd22) vkb2_top_entry_pane_t1

0x8933,	// (0x00008933) vkb2_top_entry_pane_t2_ParamLimits

0x8933,	// (0x00008933) vkb2_top_entry_pane_t2

0x8965,	// (0x00008965) vkb2_top_entry_pane_t3_ParamLimits

0x8965,	// (0x00008965) vkb2_top_entry_pane_t3

0x0002,

0xe77f,	// (0x0000e77f) vkb2_top_entry_pane_t_ParamLimits

0xe77f,	// (0x0000e77f) vkb2_top_entry_pane_t

0xdd5b,	// (0x0000dd5b) vkb2_top_grid_right_pane_g1_ParamLimits

0xdd5b,	// (0x0000dd5b) vkb2_top_grid_right_pane_g1

0x89cc,	// (0x000089cc) vkb2_top_grid_right_pane_g2_ParamLimits

0x89cc,	// (0x000089cc) vkb2_top_grid_right_pane_g2

0x89e4,	// (0x000089e4) vkb2_top_grid_right_pane_g3_ParamLimits

0x89e4,	// (0x000089e4) vkb2_top_grid_right_pane_g3

0xdd71,	// (0x0000dd71) vkb2_top_grid_right_pane_g4_ParamLimits

0xdd71,	// (0x0000dd71) vkb2_top_grid_right_pane_g4

0x0003,

0xe786,	// (0x0000e786) vkb2_top_grid_right_pane_g_ParamLimits

0xe786,	// (0x0000e786) vkb2_top_grid_right_pane_g

0x8a12,	// (0x00008a12) vkb2_top_cell_left_pane_g1

0x8a29,	// (0x00008a29) vkb2_cell_keypad_pane_g1_ParamLimits

0x8a29,	// (0x00008a29) vkb2_cell_keypad_pane_g1

0x8a37,	// (0x00008a37) vkb2_cell_keypad_pane_t1_ParamLimits

0x8a37,	// (0x00008a37) vkb2_cell_keypad_pane_t1

0x8a4e,	// (0x00008a4e) vkb2_cell_bottom_grid_pane_ParamLimits

0x8a4e,	// (0x00008a4e) vkb2_cell_bottom_grid_pane

0x8a87,	// (0x00008a87) vkb2_cell_bottom_grid_pane_g1

0xd714,	// (0x0000d714) aid_call2_pane_cp02

0xd71c,	// (0x0000d71c) aid_call_pane_cp02

0xd724,	// (0x0000d724) clock_digital_number_pane_cp10

0xd72c,	// (0x0000d72c) clock_digital_number_pane_cp11

0xd734,	// (0x0000d734) clock_digital_number_pane_cp12

0xd73c,	// (0x0000d73c) clock_digital_number_pane_cp13

0xd744,	// (0x0000d744) clock_digital_separator_pane_cp10

0x1b94,	// (0x00001b94) popup_clock_digital_analogue_window_cp2_g1

0x1b94,	// (0x00001b94) popup_clock_digital_analogue_window_cp2_g2

0xd74c,	// (0x0000d74c) popup_clock_digital_analogue_window_cp2_g3

0x1b94,	// (0x00001b94) popup_clock_digital_analogue_window_cp2_g4

0xd74c,	// (0x0000d74c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xe753,	// (0x0000e753) popup_clock_digital_analogue_window_cp2_g

0xd754,	// (0x0000d754) popup_clock_digital_analogue_window_cp2_t1

0xd762,	// (0x0000d762) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xe75e,	// (0x0000e75e) popup_clock_digital_analogue_window_cp2_t

0x6065,	// (0x00006065) clock_digital_number_pane_cp10_g1

0x6065,	// (0x00006065) clock_digital_number_pane_cp10_g2

0x0001,

0xa857,	// (0x0000a857) clock_digital_number_pane_cp10_g

0x6065,	// (0x00006065) clock_digital_separator_pane_cp10_g1

0x6065,	// (0x00006065) clock_digital_separator_pane_cp10_g2

0x0001,

0xa857,	// (0x0000a857) clock_digital_separator_pane_cp10_g

0x8050,	// (0x00008050) uniindi_top_pane_g3

0x8061,	// (0x00008061) uniindi_top_pane_g4

0x87be,	// (0x000087be) vkb2_row_keypad_pane_ParamLimits

0x87be,	// (0x000087be) vkb2_row_keypad_pane

0x8aa3,	// (0x00008aa3) vkb2_cell_t_keypad_pane_ParamLimits

0x8aa3,	// (0x00008aa3) vkb2_cell_t_keypad_pane

0x8ab0,	// (0x00008ab0) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8ab0,	// (0x00008ab0) vkb2_cell_t_keypad_pane_cp08

0x8ac0,	// (0x00008ac0) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8ac0,	// (0x00008ac0) vkb2_cell_t_keypad_pane_cp09

0x8ad1,	// (0x00008ad1) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8ad1,	// (0x00008ad1) vkb2_cell_t_keypad_pane_cp01

0x8ae1,	// (0x00008ae1) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8ae1,	// (0x00008ae1) vkb2_cell_t_keypad_pane_cp02

0x8af1,	// (0x00008af1) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8af1,	// (0x00008af1) vkb2_cell_t_keypad_pane_cp03

0x8b01,	// (0x00008b01) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8b01,	// (0x00008b01) vkb2_cell_t_keypad_pane_cp04

0x8b11,	// (0x00008b11) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8b11,	// (0x00008b11) vkb2_cell_t_keypad_pane_cp05

0x8b21,	// (0x00008b21) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8b21,	// (0x00008b21) vkb2_cell_t_keypad_pane_cp06

0x8b31,	// (0x00008b31) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8b31,	// (0x00008b31) vkb2_cell_t_keypad_pane_cp07

0x8b41,	// (0x00008b41) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8b41,	// (0x00008b41) vkb2_cell_t_keypad_pane_cp10

0x64a5,	// (0x000064a5) vkb2_cell_t_keypad_pane_g1

0x8b56,	// (0x00008b56) vkb2_cell_t_keypad_pane_t1

0x0020,	// (0x00000020) popup_grid_graphic2_window

0xdd87,	// (0x0000dd87) aid_size_cell_graphic2_ParamLimits

0xdd87,	// (0x0000dd87) aid_size_cell_graphic2

0xddc5,	// (0x0000ddc5) bg_popup_window_pane_cp21_ParamLimits

0xddc5,	// (0x0000ddc5) bg_popup_window_pane_cp21

0xddd3,	// (0x0000ddd3) graphic2_pages_pane_ParamLimits

0xddd3,	// (0x0000ddd3) graphic2_pages_pane

0xde1c,	// (0x0000de1c) grid_graphic2_control_pane_ParamLimits

0xde1c,	// (0x0000de1c) grid_graphic2_control_pane

0xde5a,	// (0x0000de5a) grid_graphic2_pane_ParamLimits

0xde5a,	// (0x0000de5a) grid_graphic2_pane

0xdec9,	// (0x0000dec9) cell_graphic2_pane

0x0020,	// (0x00000020) main_comp_mode_pane

0x7829,	// (0x00007829) list_ai3_gene_pane_ParamLimits

0xd413,	// (0x0000d413) bg_popup_window_pane_cp19_ParamLimits

0x7bf3,	// (0x00007bf3) bg_touch_area_indi_pane_ParamLimits

0x7bf3,	// (0x00007bf3) bg_touch_area_indi_pane

0x7c09,	// (0x00007c09) bg_touch_area_indi_pane_cp01_ParamLimits

0x7c09,	// (0x00007c09) bg_touch_area_indi_pane_cp01

0x7c1f,	// (0x00007c1f) bg_touch_area_indi_pane_cp02_ParamLimits

0x7c1f,	// (0x00007c1f) bg_touch_area_indi_pane_cp02

0x7c35,	// (0x00007c35) bg_touch_area_indi_pane_cp03_ParamLimits

0x7c35,	// (0x00007c35) bg_touch_area_indi_pane_cp03

0x7c4b,	// (0x00007c4b) popup_slider_window_g1_ParamLimits

0x7c67,	// (0x00007c67) popup_slider_window_g2_ParamLimits

0x7c83,	// (0x00007c83) popup_slider_window_g3_ParamLimits

0xe737,	// (0x0000e737) popup_slider_window_g_ParamLimits

0x7cdf,	// (0x00007cdf) popup_slider_window_t1_ParamLimits

0x7d51,	// (0x00007d51) small_volume_slider_vertical_pane_ParamLimits

0xdec9,	// (0x0000dec9) cell_graphic2_pane_ParamLimits

0xdf12,	// (0x0000df12) bg_button_pane_cp10_ParamLimits

0xdf12,	// (0x0000df12) bg_button_pane_cp10

0xdf25,	// (0x0000df25) bg_button_pane_cp11_ParamLimits

0xdf25,	// (0x0000df25) bg_button_pane_cp11

0xdf38,	// (0x0000df38) graphic2_pages_pane_g1_ParamLimits

0xdf38,	// (0x0000df38) graphic2_pages_pane_g1

0xdf53,	// (0x0000df53) graphic2_pages_pane_g2_ParamLimits

0xdf53,	// (0x0000df53) graphic2_pages_pane_g2

0x0001,

0xe794,	// (0x0000e794) graphic2_pages_pane_g_ParamLimits

0xe794,	// (0x0000e794) graphic2_pages_pane_g

0xdf6b,	// (0x0000df6b) graphic2_pages_pane_t1_ParamLimits

0xdf6b,	// (0x0000df6b) graphic2_pages_pane_t1

0xdf83,	// (0x0000df83) cell_graphic2_control_pane_ParamLimits

0xdf83,	// (0x0000df83) cell_graphic2_control_pane

0xdfad,	// (0x0000dfad) cell_graphic2_pane_g1_ParamLimits

0xdfad,	// (0x0000dfad) cell_graphic2_pane_g1

0x6302,	// (0x00006302) cell_graphic2_pane_g2_ParamLimits

0x6302,	// (0x00006302) cell_graphic2_pane_g2

0xdfba,	// (0x0000dfba) cell_graphic2_pane_g3_ParamLimits

0xdfba,	// (0x0000dfba) cell_graphic2_pane_g3

0x630f,	// (0x0000630f) cell_graphic2_pane_g4_ParamLimits

0x630f,	// (0x0000630f) cell_graphic2_pane_g4

0xdfc7,	// (0x0000dfc7) cell_graphic2_pane_g5_ParamLimits

0xdfc7,	// (0x0000dfc7) cell_graphic2_pane_g5

0x0004,

0xe799,	// (0x0000e799) cell_graphic2_pane_g_ParamLimits

0xe799,	// (0x0000e799) cell_graphic2_pane_g

0xdfe7,	// (0x0000dfe7) cell_graphic2_pane_t1_ParamLimits

0xdfe7,	// (0x0000dfe7) cell_graphic2_pane_t1

0x42fe,	// (0x000042fe) grid_highlight_pane_cp11_ParamLimits

0x42fe,	// (0x000042fe) grid_highlight_pane_cp11

0x07c9,	// (0x000007c9) bg_button_pane_cp05

0xe02f,	// (0x0000e02f) cell_graphic2_control_pane_g1

0x6065,	// (0x00006065) bg_touch_area_indi_pane_g1

0x8df4,	// (0x00008df4) aid_cmod_rocker_key_size

0x8dfe,	// (0x00008dfe) aid_cmode_itu_key_size

0x8e08,	// (0x00008e08) main_cmode_video_pane

0x8e10,	// (0x00008e10) main_comp_mode_itu_pane

0x8e1a,	// (0x00008e1a) main_comp_mode_rocker_pane

0x8e22,	// (0x00008e22) cell_cmode_rocker_pane_ParamLimits

0x8e22,	// (0x00008e22) cell_cmode_rocker_pane

0x8e34,	// (0x00008e34) cell_cmode_itu_pane_ParamLimits

0x8e34,	// (0x00008e34) cell_cmode_itu_pane

0x1221,	// (0x00001221) bg_button_pane_cp06_ParamLimits

0x1221,	// (0x00001221) bg_button_pane_cp06

0x64a5,	// (0x000064a5) cell_cmode_rocker_pane_g1_ParamLimits

0x64a5,	// (0x000064a5) cell_cmode_rocker_pane_g1

0x7ebf,	// (0x00007ebf) cell_cmode_rocker_pane_g2_ParamLimits

0x7ebf,	// (0x00007ebf) cell_cmode_rocker_pane_g2

0x0001,

0xaacb,	// (0x0000aacb) cell_cmode_rocker_pane_g_ParamLimits

0xaacb,	// (0x0000aacb) cell_cmode_rocker_pane_g

0x0020,	// (0x00000020) bg_button_pane_cp07

0x8e49,	// (0x00008e49) cell_cmode_itu_pane_g1

0x8e52,	// (0x00008e52) cell_cmode_itu_pane_t1

0x8e60,	// (0x00008e60) cell_cmode_itu_pane_t2

0x0001,

0xaad0,	// (0x0000aad0) cell_cmode_itu_pane_t

0x80d2,	// (0x000080d2) aid_touch_ctrl_left

0x80da,	// (0x000080da) aid_touch_ctrl_right

0x0020,	// (0x00000020) compa_mode_pane

0xe057,	// (0x0000e057) aid_cmod_rocker_key_size_cp

0xe061,	// (0x0000e061) aid_cmode_itu_key_size_cp

0x8e82,	// (0x00008e82) compa_mode_pane_g1

0x8e8a,	// (0x00008e8a) compa_mode_pane_g2

0x8e92,	// (0x00008e92) compa_mode_pane_g3

0x0002,

0xaad5,	// (0x0000aad5) compa_mode_pane_g

0xe06b,	// (0x0000e06b) main_comp_mode_itu_pane_cp

0xe073,	// (0x0000e073) main_comp_mode_rocker_pane_cp

0xe07b,	// (0x0000e07b) cell_cmode_itu_pane_cp_ParamLimits

0xe07b,	// (0x0000e07b) cell_cmode_itu_pane_cp

0xe090,	// (0x0000e090) cell_cmode_rocker_pane_cp_ParamLimits

0xe090,	// (0x0000e090) cell_cmode_rocker_pane_cp

0x1221,	// (0x00001221) bg_button_pane_cp06_cp_ParamLimits

0x1221,	// (0x00001221) bg_button_pane_cp06_cp

0x64a5,	// (0x000064a5) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x64a5,	// (0x000064a5) cell_cmode_rocker_pane_g1_cp

0x6065,	// (0x00006065) cell_cmode_rocker_pane_g2_cp

0x0020,	// (0x00000020) bg_button_pane_cp07_cp

0xe0a2,	// (0x0000e0a2) cell_cmode_itu_pane_g1_cp

0xe0ab,	// (0x0000e0ab) cell_cmode_itu_pane_t1_cp

0xe0ab,	// (0x0000e0ab) cell_cmode_itu_pane_t2_cp

0xc924,	// (0x0000c924) settings_code_pane_cp2

0x04a3,	// (0x000004a3) bg_popup_window_pane_cp3_ParamLimits

0x09a1,	// (0x000009a1) heading_pane_cp3_ParamLimits

0x09ad,	// (0x000009ad) listscroll_popup_graphic_pane_ParamLimits

0x60ce,	// (0x000060ce) fep_hwr_aid_pane_ParamLimits

0x7dc8,	// (0x00007dc8) aid_touch_sctrl_top_ParamLimits

0x7dd5,	// (0x00007dd5) sctrl_sk_top_pane_g1_ParamLimits

0x64a5,	// (0x000064a5) sctrl_sk_top_pane_g2_ParamLimits

0xaa0b,	// (0x0000aa0b) sctrl_sk_top_pane_g_ParamLimits

0x7de2,	// (0x00007de2) sctrl_sk_top_pane_t1_ParamLimits

0x7dc8,	// (0x00007dc8) aid_touch_sctrl_bottom_ParamLimits

0x7de2,	// (0x00007de2) sctrl_sk_bottom_pane_t1_ParamLimits

0x801c,	// (0x0000801c) aid_area_touch_clock

0xdb70,	// (0x0000db70) aid_vkb2_area_top_pane_cell_ParamLimits

0xdb70,	// (0x0000db70) aid_vkb2_area_top_pane_cell

0xdc1b,	// (0x0000dc1b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xdc1b,	// (0x0000dc1b) aid_vkb2_area_bottom_pane_cell

0x88eb,	// (0x000088eb) popup_char_count_window

0x8ee8,	// (0x00008ee8) popup_char_count_window_g1

0x8ef1,	// (0x00008ef1) popup_char_count_window_g2

0x8efa,	// (0x00008efa) popup_char_count_window_g3

0x0002,

0xaadc,	// (0x0000aadc) popup_char_count_window_g

0x8f03,	// (0x00008f03) popup_char_count_window_t1

0x85a3,	// (0x000085a3) popup_fep_char_preview_window_ParamLimits

0x85a3,	// (0x000085a3) popup_fep_char_preview_window

0xdb90,	// (0x0000db90) vkb2_top_candi_pane_ParamLimits

0xdb90,	// (0x0000db90) vkb2_top_candi_pane

0xe0b9,	// (0x0000e0b9) cell_vkb2_top_candi_pane_ParamLimits

0xe0b9,	// (0x0000e0b9) cell_vkb2_top_candi_pane

0x3b77,	// (0x00003b77) bg_popup_fep_char_preview_window_ParamLimits

0x3b77,	// (0x00003b77) bg_popup_fep_char_preview_window

0x8f4a,	// (0x00008f4a) popup_fep_char_preview_window_t1_ParamLimits

0x8f4a,	// (0x00008f4a) popup_fep_char_preview_window_t1

0x8f84,	// (0x00008f84) bg_popup_fep_char_preview_window_g1

0x8f8c,	// (0x00008f8c) bg_popup_fep_char_preview_window_g2

0x8f94,	// (0x00008f94) bg_popup_fep_char_preview_window_g3

0x8f9c,	// (0x00008f9c) bg_popup_fep_char_preview_window_g4

0x8fa4,	// (0x00008fa4) bg_popup_fep_char_preview_window_g5

0x8fac,	// (0x00008fac) bg_popup_fep_char_preview_window_g6

0x8fb4,	// (0x00008fb4) bg_popup_fep_char_preview_window_g7

0x8fbc,	// (0x00008fbc) bg_popup_fep_char_preview_window_g8

0x8fc4,	// (0x00008fc4) bg_popup_fep_char_preview_window_g9

0x0008,

0xaae3,	// (0x0000aae3) bg_popup_fep_char_preview_window_g

0x64a5,	// (0x000064a5) cell_vkb2_top_candi_pane_g1_ParamLimits

0x64a5,	// (0x000064a5) cell_vkb2_top_candi_pane_g1

0x67fc,	// (0x000067fc) cell_vkb2_top_candi_pane_g2_ParamLimits

0x67fc,	// (0x000067fc) cell_vkb2_top_candi_pane_g2

0x681d,	// (0x0000681d) cell_vkb2_top_candi_pane_g3_ParamLimits

0x681d,	// (0x0000681d) cell_vkb2_top_candi_pane_g3

0x8fcc,	// (0x00008fcc) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8fcc,	// (0x00008fcc) cell_vkb2_top_candi_pane_g4

0x8fed,	// (0x00008fed) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8fed,	// (0x00008fed) cell_vkb2_top_candi_pane_g5

0x7ebf,	// (0x00007ebf) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7ebf,	// (0x00007ebf) cell_vkb2_top_candi_pane_g6

0x0005,

0xaaf6,	// (0x0000aaf6) cell_vkb2_top_candi_pane_g_ParamLimits

0xaaf6,	// (0x0000aaf6) cell_vkb2_top_candi_pane_g

0x900e,	// (0x0000900e) cell_vkb2_top_candi_pane_t1

0x49f1,	// (0x000049f1) aid_size_touch_slider_mark_ParamLimits

0x49f1,	// (0x000049f1) aid_size_touch_slider_mark

0xde07,	// (0x0000de07) grid_graphic2_catg_pane_ParamLimits

0xde07,	// (0x0000de07) grid_graphic2_catg_pane

0xde9e,	// (0x0000de9e) popup_grid_graphic2_window_t1_ParamLimits

0xde9e,	// (0x0000de9e) popup_grid_graphic2_window_t1

0xdeb3,	// (0x0000deb3) popup_grid_graphic2_window_t2_ParamLimits

0xdeb3,	// (0x0000deb3) popup_grid_graphic2_window_t2

0x0001,

0xe78f,	// (0x0000e78f) popup_grid_graphic2_window_t_ParamLimits

0xe78f,	// (0x0000e78f) popup_grid_graphic2_window_t

0x07c9,	// (0x000007c9) bg_button_pane_cp05_ParamLimits

0xe02f,	// (0x0000e02f) cell_graphic2_control_pane_g1_ParamLimits

0x8098,	// (0x00008098) cell_graphic2_catg_pane_ParamLimits

0x8098,	// (0x00008098) cell_graphic2_catg_pane

0x0020,	// (0x00000020) bg_button_pane_cp12

0xe103,	// (0x0000e103) cell_graphic2_catg_pane_g1

0x7fe8,	// (0x00007fe8) cell_tb_ext_pane_t1_ParamLimits

0x8989,	// (0x00008989) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8989,	// (0x00008989) vkb2_top_cell_right_narrow_pane

0x89a1,	// (0x000089a1) vkb2_top_cell_right_wide_pane_ParamLimits

0x89a1,	// (0x000089a1) vkb2_top_cell_right_wide_pane

0x60c0,	// (0x000060c0) bg_vkb2_func_pane_ParamLimits

0x60c0,	// (0x000060c0) bg_vkb2_func_pane

0x8a12,	// (0x00008a12) vkb2_top_cell_left_pane_g1_ParamLimits

0x60c0,	// (0x000060c0) bg_vkb2_fuc_pane_cp03_ParamLimits

0x60c0,	// (0x000060c0) bg_vkb2_fuc_pane_cp03

0x8a87,	// (0x00008a87) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x33b9,	// (0x000033b9) bg_vkb2_func_pane_g1

0x33c1,	// (0x000033c1) bg_vkb2_func_pane_g2

0x33d1,	// (0x000033d1) bg_vkb2_func_pane_g3

0x33c9,	// (0x000033c9) bg_vkb2_func_pane_g4

0x33d9,	// (0x000033d9) bg_vkb2_func_pane_g5

0x33e1,	// (0x000033e1) bg_vkb2_func_pane_g6

0x33e9,	// (0x000033e9) bg_vkb2_func_pane_g7

0x33f1,	// (0x000033f1) bg_vkb2_func_pane_g8

0x33b1,	// (0x000033b1) bg_vkb2_func_pane_g9

0x0008,

0xab03,	// (0x0000ab03) bg_vkb2_func_pane_g

0x60c0,	// (0x000060c0) bg_vkb2_fuc_pane_cp01_ParamLimits

0x60c0,	// (0x000060c0) bg_vkb2_fuc_pane_cp01

0x8a12,	// (0x00008a12) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8a12,	// (0x00008a12) vkb2_top_cell_right_wide_pane_g1

0x60c0,	// (0x000060c0) bg_vkb2_fuc_pane_cp02_ParamLimits

0x60c0,	// (0x000060c0) bg_vkb2_fuc_pane_cp02

0x8a87,	// (0x00008a87) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8a87,	// (0x00008a87) vkb2_top_cell_right_narrow_pane_g1

0xd361,	// (0x0000d361) aid_touch_area_decrease_ParamLimits

0xd361,	// (0x0000d361) aid_touch_area_decrease

0xd38f,	// (0x0000d38f) aid_touch_area_increase_ParamLimits

0xd38f,	// (0x0000d38f) aid_touch_area_increase

0xd3b7,	// (0x0000d3b7) aid_touch_area_mute_ParamLimits

0xd3b7,	// (0x0000d3b7) aid_touch_area_mute

0xd3df,	// (0x0000d3df) aid_touch_area_slider_ParamLimits

0xd3df,	// (0x0000d3df) aid_touch_area_slider

0xd41f,	// (0x0000d41f) popup_slider_window_g4_ParamLimits

0xd41f,	// (0x0000d41f) popup_slider_window_g4

0xd447,	// (0x0000d447) popup_slider_window_g5_ParamLimits

0xd447,	// (0x0000d447) popup_slider_window_g5

0xd47b,	// (0x0000d47b) popup_slider_window_g6_ParamLimits

0xd47b,	// (0x0000d47b) popup_slider_window_g6

0x7d0b,	// (0x00007d0b) popup_slider_window_t2_ParamLimits

0x7d0b,	// (0x00007d0b) popup_slider_window_t2

0x0001,

0xa9ff,	// (0x0000a9ff) popup_slider_window_t_ParamLimits

0xa9ff,	// (0x0000a9ff) popup_slider_window_t

0xd497,	// (0x0000d497) slider_pane_ParamLimits

0xd497,	// (0x0000d497) slider_pane

0x9047,	// (0x00009047) slider_pane_g1_ParamLimits

0x9047,	// (0x00009047) slider_pane_g1

0x905b,	// (0x0000905b) slider_pane_g2_ParamLimits

0x905b,	// (0x0000905b) slider_pane_g2

0x9071,	// (0x00009071) slider_pane_g3_ParamLimits

0x9071,	// (0x00009071) slider_pane_g3

0x0003,

0xab16,	// (0x0000ab16) slider_pane_g_ParamLimits

0xab16,	// (0x0000ab16) slider_pane_g

0xc089,	// (0x0000c089) popup_tb_float_extension_window_ParamLimits

0xc089,	// (0x0000c089) popup_tb_float_extension_window

0x909d,	// (0x0000909d) aid_size_cell_tb_float_ext

0x0020,	// (0x00000020) bg_popup_sub_window_cp28

0x90a8,	// (0x000090a8) grid_tb_float_ext_pane

0x90b0,	// (0x000090b0) cell_tb_float_ext_pane_ParamLimits

0x90b0,	// (0x000090b0) cell_tb_float_ext_pane

0x90c8,	// (0x000090c8) cell_tb_float_ext_pane_g1

0x90d1,	// (0x000090d1) grid_highlight_pane_cp12

0xcd2c,	// (0x0000cd2c) cell_last_hwr_side_pane_ParamLimits

0xcd2c,	// (0x0000cd2c) cell_last_hwr_side_pane

0x6065,	// (0x00006065) cell_last_hwr_side_pane_g1

0x90da,	// (0x000090da) cell_last_hwr_side_pane_g2

0x0001,

0xab1f,	// (0x0000ab1f) cell_last_hwr_side_pane_g

0xdcef,	// (0x0000dcef) vkb2_area_bottom_space_btn_pane_ParamLimits

0xdcef,	// (0x0000dcef) vkb2_area_bottom_space_btn_pane

0x64a5,	// (0x000064a5) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x8b56,	// (0x00008b56) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x900e,	// (0x0000900e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x90e3,	// (0x000090e3) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x90e3,	// (0x000090e3) vkb2_area_bottom_space_btn_pane_g1

0x9119,	// (0x00009119) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9119,	// (0x00009119) vkb2_area_bottom_space_btn_pane_g2

0x914f,	// (0x0000914f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x914f,	// (0x0000914f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xab24,	// (0x0000ab24) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xab24,	// (0x0000ab24) vkb2_area_bottom_space_btn_pane_g

0x617d,	// (0x0000617d) cel_fep_hwr_func_pane_ParamLimits

0x617d,	// (0x0000617d) cel_fep_hwr_func_pane

0xcd01,	// (0x0000cd01) cell_hwr_side_button_pane_ParamLimits

0xcd01,	// (0x0000cd01) cell_hwr_side_button_pane

0x801c,	// (0x0000801c) aid_area_touch_clock_ParamLimits

0x07c9,	// (0x000007c9) bg_uniindi_top_pane_ParamLimits

0x802e,	// (0x0000802e) uniindi_top_pane_g1_ParamLimits

0x8044,	// (0x00008044) uniindi_top_pane_g2_ParamLimits

0x8050,	// (0x00008050) uniindi_top_pane_g3_ParamLimits

0x8061,	// (0x00008061) uniindi_top_pane_g4_ParamLimits

0xaa37,	// (0x0000aa37) uniindi_top_pane_g_ParamLimits

0x806e,	// (0x0000806e) uniindi_top_pane_t1_ParamLimits

0x07c9,	// (0x000007c9) bg_vkb2_func_pane_cp01_ParamLimits

0x07c9,	// (0x000007c9) bg_vkb2_func_pane_cp01

0x9195,	// (0x00009195) cel_fep_hwr_func_pane_g1_ParamLimits

0x9195,	// (0x00009195) cel_fep_hwr_func_pane_g1

0x07c9,	// (0x000007c9) bg_vkb2_func_pane_cp02_ParamLimits

0x07c9,	// (0x000007c9) bg_vkb2_func_pane_cp02

0x9195,	// (0x00009195) cell_hwr_side_button_pane_g1_ParamLimits

0x9195,	// (0x00009195) cell_hwr_side_button_pane_g1

0x3194,	// (0x00003194) status_pane_g4_ParamLimits

0x3194,	// (0x00003194) status_pane_g4

0x31ac,	// (0x000031ac) status_pane_t1

0x5e55,	// (0x00005e55) form2_midp_gauge_slider_cont_pane

0x5e5d,	// (0x00005e5d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcc7c,	// (0x0000cc7c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcc8e,	// (0x0000cc8e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xe6db,	// (0x0000e6db) form2_midp_gauge_slider_pane_t_ParamLimits

0x5e93,	// (0x00005e93) form2_midp_slider_pane_ParamLimits

0x8563,	// (0x00008563) aid_size_cell_func_vkb2_ParamLimits

0x8563,	// (0x00008563) aid_size_cell_func_vkb2

0x9089,	// (0x00009089) slider_pane_g4_ParamLimits

0x9089,	// (0x00009089) slider_pane_g4

0xe10c,	// (0x0000e10c) form2_midp_gauge_slider_pane_t2_cp01

0xe11a,	// (0x0000e11a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe11a,	// (0x0000e11a) form2_midp_gauge_slider_pane_t3_cp01

0x91ce,	// (0x000091ce) form2_midp_slider_pane_cp01

0x0020,	// (0x00000020) navi_smil_pane

0x9202,	// (0x00009202) navi_smil_pane_g1

0x920a,	// (0x0000920a) navi_smil_pane_t1

0x91d7,	// (0x000091d7) form2_midp_slider_pane_g1

0x91e0,	// (0x000091e0) form2_midp_slider_pane_g2

0x91e8,	// (0x000091e8) form2_midp_slider_pane_g3

0x91d7,	// (0x000091d7) form2_midp_slider_pane_g4

0xe137,	// (0x0000e137) form2_midp_slider_pane_g5

0x0004,

0xe7a9,	// (0x0000e7a9) form2_midp_slider_pane_g

0x9185,	// (0x00009185) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9185,	// (0x00009185) vkb2_area_bottom_space_btn_pane_g4

0xc248,	// (0x0000c248) lc0_navi_pane_ParamLimits

0xc248,	// (0x0000c248) lc0_navi_pane

0xc2b2,	// (0x0000c2b2) lc0_stat_indi_pane_ParamLimits

0xc2b2,	// (0x0000c2b2) lc0_stat_indi_pane

0xc2c7,	// (0x0000c2c7) ls0_title_pane_ParamLimits

0xc2c7,	// (0x0000c2c7) ls0_title_pane

0x1221,	// (0x00001221) bg_popup_sub_pane_cp14_ParamLimits

0x8003,	// (0x00008003) list_uniindi_pane_ParamLimits

0x800f,	// (0x0000800f) uniindi_top_pane_ParamLimits

0x80aa,	// (0x000080aa) list_single_uniindi_pane_g1_ParamLimits

0x80bd,	// (0x000080bd) list_single_uniindi_pane_t1_ParamLimits

0xe140,	// (0x0000e140) lc0_stat_clock_pane_ParamLimits

0xe140,	// (0x0000e140) lc0_stat_clock_pane

0xe14d,	// (0x0000e14d) lc0_stat_indi_pane_g1_ParamLimits

0xe14d,	// (0x0000e14d) lc0_stat_indi_pane_g1

0xe15a,	// (0x0000e15a) lc0_stat_indi_pane_g2_ParamLimits

0xe15a,	// (0x0000e15a) lc0_stat_indi_pane_g2

0x0001,

0xe7b4,	// (0x0000e7b4) lc0_stat_indi_pane_g_ParamLimits

0xe7b4,	// (0x0000e7b4) lc0_stat_indi_pane_g

0xe167,	// (0x0000e167) lc0_uni_indicator_pane_ParamLimits

0xe167,	// (0x0000e167) lc0_uni_indicator_pane

0x924c,	// (0x0000924c) ls0_title_pane_g1_ParamLimits

0x924c,	// (0x0000924c) ls0_title_pane_g1

0xe174,	// (0x0000e174) ls0_title_pane_t1_ParamLimits

0xe174,	// (0x0000e174) ls0_title_pane_t1

0xe1a2,	// (0x0000e1a2) lc0_uni_indicator_pane_g1_ParamLimits

0xe1a2,	// (0x0000e1a2) lc0_uni_indicator_pane_g1

0x92a8,	// (0x000092a8) lc0_stat_clock_pane_t1

0x0020,	// (0x00000020) main_ai5_pane

0x92b6,	// (0x000092b6) ai5_sk_pane_ParamLimits

0x92b6,	// (0x000092b6) ai5_sk_pane

0xe1b7,	// (0x0000e1b7) cell_ai5_widget_pane_ParamLimits

0xe1b7,	// (0x0000e1b7) cell_ai5_widget_pane

0x932b,	// (0x0000932b) aid_size_cell_widget_grid

0x9339,	// (0x00009339) bg_ai5_widget_pane_ParamLimits

0x9339,	// (0x00009339) bg_ai5_widget_pane

0x938d,	// (0x0000938d) cell_ai5_widget_pane_g2

0x939d,	// (0x0000939d) cell_ai5_widget_pane_g3

0x93b4,	// (0x000093b4) cell_ai5_widget_pane_g4

0x93c0,	// (0x000093c0) cell_ai5_widget_pane_g5

0x93cc,	// (0x000093cc) cell_ai5_widget_pane_g6

0x93d8,	// (0x000093d8) cell_ai5_widget_pane_g7

0x9420,	// (0x00009420) cell_ai5_widget_pane_t1_ParamLimits

0x9420,	// (0x00009420) cell_ai5_widget_pane_t1

0x943d,	// (0x0000943d) cell_ai5_widget_pane_t2_ParamLimits

0x943d,	// (0x0000943d) cell_ai5_widget_pane_t2

0x9455,	// (0x00009455) cell_ai5_widget_pane_t3_ParamLimits

0x9455,	// (0x00009455) cell_ai5_widget_pane_t3

0x946d,	// (0x0000946d) cell_ai5_widget_pane_t4_ParamLimits

0x946d,	// (0x0000946d) cell_ai5_widget_pane_t4

0x948a,	// (0x0000948a) cell_ai5_widget_pane_t5_ParamLimits

0x948a,	// (0x0000948a) cell_ai5_widget_pane_t5

0x94a9,	// (0x000094a9) cell_ai5_widget_pane_t6_ParamLimits

0x94a9,	// (0x000094a9) cell_ai5_widget_pane_t6

0x94bb,	// (0x000094bb) cell_ai5_widget_pane_t7_ParamLimits

0x94bb,	// (0x000094bb) cell_ai5_widget_pane_t7

0x94d4,	// (0x000094d4) cell_ai5_widget_pane_t8_ParamLimits

0x94d4,	// (0x000094d4) cell_ai5_widget_pane_t8

0x0009,

0xab52,	// (0x0000ab52) cell_ai5_widget_pane_t_ParamLimits

0xab52,	// (0x0000ab52) cell_ai5_widget_pane_t

0x9528,	// (0x00009528) grid_ai5_widget_pane

0x1221,	// (0x00001221) highlight_cell_ai5_widget_pane_ParamLimits

0x1221,	// (0x00001221) highlight_cell_ai5_widget_pane

0xe215,	// (0x0000e215) ai5_sk_left_pane

0xe21f,	// (0x0000e21f) ai5_sk_middle_pane

0xe229,	// (0x0000e229) ai5_sk_right_pane

0x9552,	// (0x00009552) bg_ai5_widget_pane_g1_ParamLimits

0x9552,	// (0x00009552) bg_ai5_widget_pane_g1

0x955e,	// (0x0000955e) bg_ai5_widget_pane_g2_ParamLimits

0x955e,	// (0x0000955e) bg_ai5_widget_pane_g2

0x956a,	// (0x0000956a) bg_ai5_widget_pane_g3_ParamLimits

0x956a,	// (0x0000956a) bg_ai5_widget_pane_g3

0x9576,	// (0x00009576) bg_ai5_widget_pane_g4_ParamLimits

0x9576,	// (0x00009576) bg_ai5_widget_pane_g4

0x9582,	// (0x00009582) bg_ai5_widget_pane_g5_ParamLimits

0x9582,	// (0x00009582) bg_ai5_widget_pane_g5

0x958e,	// (0x0000958e) bg_ai5_widget_pane_g6_ParamLimits

0x958e,	// (0x0000958e) bg_ai5_widget_pane_g6

0x959a,	// (0x0000959a) bg_ai5_widget_pane_g7_ParamLimits

0x959a,	// (0x0000959a) bg_ai5_widget_pane_g7

0x95a6,	// (0x000095a6) bg_ai5_widget_pane_g8_ParamLimits

0x95a6,	// (0x000095a6) bg_ai5_widget_pane_g8

0x95b2,	// (0x000095b2) bg_ai5_widget_pane_g9_ParamLimits

0x95b2,	// (0x000095b2) bg_ai5_widget_pane_g9

0x0008,

0xab67,	// (0x0000ab67) bg_ai5_widget_pane_g_ParamLimits

0xab67,	// (0x0000ab67) bg_ai5_widget_pane_g

0x95e4,	// (0x000095e4) cell_shortcut_ai5_widget_pane_ParamLimits

0x95e4,	// (0x000095e4) cell_shortcut_ai5_widget_pane

0x23ec,	// (0x000023ec) bg_cell_shortcut_ai5_widget_pane

0x95f5,	// (0x000095f5) cell_grid_ai5_widget_pane_g1

0x23ec,	// (0x000023ec) highlight_cell_shortcut_ai5_widget_pane

0x33c1,	// (0x000033c1) ai5_sk_left_pane_g1

0x95fe,	// (0x000095fe) ai5_sk_left_pane_g2

0x9606,	// (0x00009606) ai5_sk_left_pane_g3

0x960e,	// (0x0000960e) ai5_sk_left_pane_g4

0x0003,

0xab7a,	// (0x0000ab7a) ai5_sk_left_pane_g

0x9616,	// (0x00009616) ai5_sk_left_pane_t1

0x33b9,	// (0x000033b9) ai5_sk_right_pane_g1

0x9624,	// (0x00009624) ai5_sk_right_pane_g2

0x962c,	// (0x0000962c) ai5_sk_right_pane_g3

0x9634,	// (0x00009634) ai5_sk_right_pane_g4

0x0003,

0xab83,	// (0x0000ab83) ai5_sk_right_pane_g

0x963c,	// (0x0000963c) ai5_sk_right_pane_t1

0x33b9,	// (0x000033b9) ai5_sk_middle_pane_g1

0x33c1,	// (0x000033c1) ai5_sk_middle_pane_g2

0x33d9,	// (0x000033d9) ai5_sk_middle_pane_g3

0x962c,	// (0x0000962c) ai5_sk_middle_pane_g4

0x9606,	// (0x00009606) ai5_sk_middle_pane_g5

0x964a,	// (0x0000964a) ai5_sk_middle_pane_g6

0xe233,	// (0x0000e233) ai5_sk_middle_pane_g7

0x0006,

0xe7b9,	// (0x0000e7b9) ai5_sk_middle_pane_g

0xc13a,	// (0x0000c13a) aid_touch_area_size_lc0_ParamLimits

0xc13a,	// (0x0000c13a) aid_touch_area_size_lc0

0x683e,	// (0x0000683e) cell_hwr_candidate_pane_t1_ParamLimits

0x2e79,	// (0x00002e79) aid_touch_navi_pane

0xc3b4,	// (0x0000c3b4) status_dt_navi_pane_ParamLimits

0xc3b4,	// (0x0000c3b4) status_dt_navi_pane

0xc3cc,	// (0x0000c3cc) status_dt_sta_pane_ParamLimits

0xc3cc,	// (0x0000c3cc) status_dt_sta_pane

0xe23b,	// (0x0000e23b) dt_sta_controll_pane

0xe248,	// (0x0000e248) dt_sta_indi_pane

0xe255,	// (0x0000e255) dt_sta_title_pane

0x07c9,	// (0x000007c9) bg_dt_sta_indi_pane_ParamLimits

0x07c9,	// (0x000007c9) bg_dt_sta_indi_pane

0x9685,	// (0x00009685) dt_sta_battery_pane

0x968d,	// (0x0000968d) dt_sta_indi_pane_g1

0x9696,	// (0x00009696) dt_sta_indi_pane_g2

0x969f,	// (0x0000969f) dt_sta_indi_pane_g3

0x0002,

0xab9b,	// (0x0000ab9b) dt_sta_indi_pane_g

0x96a8,	// (0x000096a8) dt_sta_signal_pane

0x1221,	// (0x00001221) bg_dt_sta_title_pane_ParamLimits

0x1221,	// (0x00001221) bg_dt_sta_title_pane

0x96b1,	// (0x000096b1) dt_sta_title_pane_g1

0x96b9,	// (0x000096b9) dt_sta_title_pane_t1_ParamLimits

0x96b9,	// (0x000096b9) dt_sta_title_pane_t1

0x0020,	// (0x00000020) bg_dt_sta_control_pane

0x96ce,	// (0x000096ce) dt_sta_controll_pane_g1

0x96d7,	// (0x000096d7) bg_dt_sta_title_pane_g1

0x96e0,	// (0x000096e0) bg_dt_sta_title_pane_g2

0x96e9,	// (0x000096e9) bg_dt_sta_title_pane_g3

0x0002,

0xaba2,	// (0x0000aba2) bg_dt_sta_title_pane_g

0x6065,	// (0x00006065) bg_dt_sta_indi_pane_g1

0x96f2,	// (0x000096f2) dt_sta_signal_pane_g1

0x96fa,	// (0x000096fa) dt_sta_signal_pane_g2

0x0001,

0xaba9,	// (0x0000aba9) dt_sta_signal_pane_g

0x9702,	// (0x00009702) dt_sta_battery_pane_g1

0x970b,	// (0x0000970b) dt_sta_battery_pane_t1

0x6065,	// (0x00006065) bg_dt_sta_control_pane_g1

0x1d5f,	// (0x00001d5f) fep_china_uni_eep_pane

0x1d67,	// (0x00001d67) fep_china_uni_entry_pane_ParamLimits

0x1d77,	// (0x00001d77) popup_fep_china_uni_window_g1_ParamLimits

0x1d87,	// (0x00001d87) popup_fep_china_uni_window_g2_ParamLimits

0x1d87,	// (0x00001d87) popup_fep_china_uni_window_g2

0x0001,

0xa427,	// (0x0000a427) popup_fep_china_uni_window_g_ParamLimits

0xa427,	// (0x0000a427) popup_fep_china_uni_window_g

0x971a,	// (0x0000971a) fep_china_uni_eep_pane_g1

0x9722,	// (0x00009722) fep_china_uni_eep_pane_t1

0x91f9,	// (0x000091f9) aid_touch_area_size_smil_player

0x2fc5,	// (0x00002fc5) lc0_clock_pane

0x31a0,	// (0x000031a0) status_pane_g5_ParamLimits

0x31a0,	// (0x000031a0) status_pane_g5

0xbcc1,	// (0x0000bcc1) popup_keymap_window

0x3160,	// (0x00003160) status_icon_pane

0x939d,	// (0x0000939d) cell_ai5_widget_pane_g3_ParamLimits

0x93b4,	// (0x000093b4) cell_ai5_widget_pane_g4_ParamLimits

0x93c0,	// (0x000093c0) cell_ai5_widget_pane_g5_ParamLimits

0x93e4,	// (0x000093e4) cell_ai5_widget_pane_g8_ParamLimits

0x93e4,	// (0x000093e4) cell_ai5_widget_pane_g8

0x93f8,	// (0x000093f8) cell_ai5_widget_pane_g9_ParamLimits

0x93f8,	// (0x000093f8) cell_ai5_widget_pane_g9

0x940c,	// (0x0000940c) cell_ai5_widget_pane_g10_ParamLimits

0x940c,	// (0x0000940c) cell_ai5_widget_pane_g10

0x9731,	// (0x00009731) status_icon_pane_g1

0x0020,	// (0x00000020) bg_popup_sub_pane_cp13

0x9739,	// (0x00009739) popup_keymap_window_t1

0xba14,	// (0x0000ba14) control_pane_g6_ParamLimits

0xba14,	// (0x0000ba14) control_pane_g6

0xba21,	// (0x0000ba21) control_pane_g7_ParamLimits

0xba21,	// (0x0000ba21) control_pane_g7

0xba2e,	// (0x0000ba2e) control_pane_g8_ParamLimits

0xba2e,	// (0x0000ba2e) control_pane_g8

0xe23b,	// (0x0000e23b) dt_sta_controll_pane_ParamLimits

0xe248,	// (0x0000e248) dt_sta_indi_pane_ParamLimits

0xe255,	// (0x0000e255) dt_sta_title_pane_ParamLimits

0x0c2e,	// (0x00000c2e) aid_size_touch_scroll_bar_cale

0x029b,	// (0x0000029b) popup_discreet_window_ParamLimits

0x029b,	// (0x0000029b) popup_discreet_window

0xad4a,	// (0x0000ad4a) popup_sk_window

0x3b77,	// (0x00003b77) bg_popup_sub_pane_cp28_ParamLimits

0x3b77,	// (0x00003b77) bg_popup_sub_pane_cp28

0x9747,	// (0x00009747) popup_discreet_window_g1_ParamLimits

0x9747,	// (0x00009747) popup_discreet_window_g1

0x9767,	// (0x00009767) popup_discreet_window_t1_ParamLimits

0x9767,	// (0x00009767) popup_discreet_window_t1

0x9785,	// (0x00009785) popup_discreet_window_t2_ParamLimits

0x9785,	// (0x00009785) popup_discreet_window_t2

0x0002,

0xabae,	// (0x0000abae) popup_discreet_window_t_ParamLimits

0xabae,	// (0x0000abae) popup_discreet_window_t

0x97d7,	// (0x000097d7) popup_sk_window_g1

0x97e1,	// (0x000097e1) popup_sk_window_g2

0x0001,

0xabb5,	// (0x0000abb5) popup_sk_window_g

0x97e9,	// (0x000097e9) popup_sk_window_t1

0x97f7,	// (0x000097f7) popup_sk_window_t1_copy1

0x938d,	// (0x0000938d) cell_ai5_widget_pane_g2_ParamLimits

0x94e6,	// (0x000094e6) cell_ai5_widget_pane_t9_ParamLimits

0x94e6,	// (0x000094e6) cell_ai5_widget_pane_t9

0x0020,	// (0x00000020) main_fep_fshwr2_pane

0xe267,	// (0x0000e267) aid_fshwr2_btn_pane

0xe278,	// (0x0000e278) aid_fshwr2_syb_pane

0xe289,	// (0x0000e289) aid_fshwr2_txt_pane

0xe295,	// (0x0000e295) fshwr2_func_candi_pane

0xe2af,	// (0x0000e2af) fshwr2_hwr_syb_pane

0xe2c4,	// (0x0000e2c4) fshwr2_icf_pane

0x0020,	// (0x00000020) fshwr2_icf_bg_pane

0xe2ea,	// (0x0000e2ea) fshwr2_icf_pane_t1_ParamLimits

0xe2ea,	// (0x0000e2ea) fshwr2_icf_pane_t1

0x1b94,	// (0x00001b94) fshwr2_func_candi_pane_g1

0xe301,	// (0x0000e301) fshwr2_func_candi_row_pane_ParamLimits

0xe301,	// (0x0000e301) fshwr2_func_candi_row_pane

0xe324,	// (0x0000e324) cell_fshwr2_syb_pane_ParamLimits

0xe324,	// (0x0000e324) cell_fshwr2_syb_pane

0x64a5,	// (0x000064a5) fshwr2_hwr_syb_pane_g1_ParamLimits

0x64a5,	// (0x000064a5) fshwr2_hwr_syb_pane_g1

0x0020,	// (0x00000020) bg_popup_call_pane_cp01

0xe338,	// (0x0000e338) fshwr2_func_candi_cell_pane_ParamLimits

0xe338,	// (0x0000e338) fshwr2_func_candi_cell_pane

0xe377,	// (0x0000e377) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe377,	// (0x0000e377) fshwr2_func_candi_cell_bg_pane

0xe383,	// (0x0000e383) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe383,	// (0x0000e383) fshwr2_func_candi_cell_pane_g1

0xe3ba,	// (0x0000e3ba) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe3ba,	// (0x0000e3ba) fshwr2_func_candi_cell_pane_t1

0x0020,	// (0x00000020) bg_button_pane_cp08

0x23ec,	// (0x000023ec) cell_fshwr2_syb_bg_pane

0xe3d5,	// (0x0000e3d5) cell_fshwr2_syb_bg_pane_g1

0xe3dd,	// (0x0000e3dd) cell_fshwr2_syb_bg_pane_t1

0x1221,	// (0x00001221) main_tmo_pane

0xc6ee,	// (0x0000c6ee) uni_indicator_pane_g1_ParamLimits

0xc704,	// (0x0000c704) uni_indicator_pane_g2_ParamLimits

0xc71a,	// (0x0000c71a) uni_indicator_pane_g3_ParamLimits

0x47d2,	// (0x000047d2) uni_indicator_pane_g4_ParamLimits

0x47d2,	// (0x000047d2) uni_indicator_pane_g4

0x47e6,	// (0x000047e6) uni_indicator_pane_g5_ParamLimits

0x47e6,	// (0x000047e6) uni_indicator_pane_g5

0x47e6,	// (0x000047e6) uni_indicator_pane_g6_ParamLimits

0x47e6,	// (0x000047e6) uni_indicator_pane_g6

0xe64b,	// (0x0000e64b) uni_indicator_pane_g_ParamLimits

0xd345,	// (0x0000d345) popup_tmo_note_window_ParamLimits

0xd345,	// (0x0000d345) popup_tmo_note_window

0x1221,	// (0x00001221) fshwr2_bg_pane

0xe3ab,	// (0x0000e3ab) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe3ab,	// (0x0000e3ab) fshwr2_func_candi_cell_pane_g2

0x0001,

0xe7c8,	// (0x0000e7c8) fshwr2_func_candi_cell_pane_g_ParamLimits

0xe7c8,	// (0x0000e7c8) fshwr2_func_candi_cell_pane_g

0x6065,	// (0x00006065) bg_popup_window_pane_cp01

0x9930,	// (0x00009930) bg_popup_window_pane_g1_cp01

0x9939,	// (0x00009939) bg_popup_window_pane_cp22_ParamLimits

0x9939,	// (0x00009939) bg_popup_window_pane_cp22

0x9947,	// (0x00009947) listscroll_tmo_link_pane_ParamLimits

0x9947,	// (0x00009947) listscroll_tmo_link_pane

0x9987,	// (0x00009987) popup_tmo_note_window_g1_ParamLimits

0x9987,	// (0x00009987) popup_tmo_note_window_g1

0x9994,	// (0x00009994) tmo_note_info_pane_ParamLimits

0x9994,	// (0x00009994) tmo_note_info_pane

0xe3ec,	// (0x0000e3ec) list_tmo_note_info_pane_g1_ParamLimits

0xe3ec,	// (0x0000e3ec) list_tmo_note_info_pane_g1

0x99c5,	// (0x000099c5) list_tmo_note_info_pane_g2_ParamLimits

0x99c5,	// (0x000099c5) list_tmo_note_info_pane_g2

0x0001,

0xe7cd,	// (0x0000e7cd) list_tmo_note_info_pane_g_ParamLimits

0xe7cd,	// (0x0000e7cd) list_tmo_note_info_pane_g

0x99e1,	// (0x000099e1) list_tmo_note_info_text_pane_ParamLimits

0x99e1,	// (0x000099e1) list_tmo_note_info_text_pane

0x9a62,	// (0x00009a62) list_tmo_link_pane

0x9a6f,	// (0x00009a6f) scroll_pane_cp20

0x9a7c,	// (0x00009a7c) list_single_tmo_link_pane_ParamLimits

0x9a7c,	// (0x00009a7c) list_single_tmo_link_pane

0x9a8c,	// (0x00009a8c) list_single_tmo_link_pane_t1

0x9a9a,	// (0x00009a9a) list_tmo_note_info_text_pane_t1_ParamLimits

0x9a9a,	// (0x00009a9a) list_tmo_note_info_text_pane_t1

0xb61a,	// (0x0000b61a) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb61a,	// (0x0000b61a) aid_size_touch_scroll_bar_cp01

0xb596,	// (0x0000b596) aid_size_touch_slider_marker

0xad3e,	// (0x0000ad3e) popup_settings_window_ParamLimits

0xad3e,	// (0x0000ad3e) popup_settings_window

0x298c,	// (0x0000298c) popup_candi_list_indi_window

0x2e79,	// (0x00002e79) aid_touch_navi_pane_ParamLimits

0x7d9c,	// (0x00007d9c) rs_clock_indi_pane

0x7da5,	// (0x00007da5) sctrl_sk_bottom_pane_ParamLimits

0x7db6,	// (0x00007db6) sctrl_sk_top_pane_ParamLimits

0x85bd,	// (0x000085bd) popup_fep_tooltip_window

0x932b,	// (0x0000932b) aid_size_cell_widget_grid_ParamLimits

0x9378,	// (0x00009378) cell_ai5_widget_pane_g1_ParamLimits

0x9378,	// (0x00009378) cell_ai5_widget_pane_g1

0x93cc,	// (0x000093cc) cell_ai5_widget_pane_g6_ParamLimits

0x93d8,	// (0x000093d8) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xab3d,	// (0x0000ab3d) cell_ai5_widget_pane_g_ParamLimits

0xab3d,	// (0x0000ab3d) cell_ai5_widget_pane_g

0x950a,	// (0x0000950a) cell_ai5_widget_pane_t10_ParamLimits

0x950a,	// (0x0000950a) cell_ai5_widget_pane_t10

0x9528,	// (0x00009528) grid_ai5_widget_pane_ParamLimits

0x95be,	// (0x000095be) cell_contacts_ai5_widget_pane_ParamLimits

0x95be,	// (0x000095be) cell_contacts_ai5_widget_pane

0x979a,	// (0x0000979a) popup_discreet_window_t3_ParamLimits

0x979a,	// (0x0000979a) popup_discreet_window_t3

0xe2d8,	// (0x0000e2d8) popup_fshwr2_char_preview_window_ParamLimits

0xe2d8,	// (0x0000e2d8) popup_fshwr2_char_preview_window

0xe403,	// (0x0000e403) tmo_note_info_pane_t1

0xe418,	// (0x0000e418) tmo_note_info_pane_t2

0xe42d,	// (0x0000e42d) tmo_note_info_pane_t3

0x9a3e,	// (0x00009a3e) tmo_note_info_pane_t4

0x9a50,	// (0x00009a50) tmo_note_info_pane_t5

0x0004,

0xe7d2,	// (0x0000e7d2) tmo_note_info_pane_t

0x9a62,	// (0x00009a62) list_tmo_link_pane_ParamLimits

0x9a6f,	// (0x00009a6f) scroll_pane_cp20_ParamLimits

0x0020,	// (0x00000020) bg_popup_fep_char_preview_window_cp01

0x9ab3,	// (0x00009ab3) popup_fshwr2_char_preview_window_t1

0x9ac1,	// (0x00009ac1) popup_candi_list_indi_window_g1

0x9aca,	// (0x00009aca) bg_cell_contacts_ai5_widget_pane

0x9ad6,	// (0x00009ad6) cell_contacts_ai5_widget_pane_g1

0x9aeb,	// (0x00009aeb) cell_contacts_ai5_widget_pane_g2

0x9af7,	// (0x00009af7) cell_contacts_ai5_widget_pane_g3

0x0002,

0xabcf,	// (0x0000abcf) cell_contacts_ai5_widget_pane_g

0x9b03,	// (0x00009b03) cell_contacts_ai5_widget_pane_t1

0x1221,	// (0x00001221) highlight_cell_shortcut_ai5_widget_pane_cp01

0x9b78,	// (0x00009b78) settings_container_pane

0x23ec,	// (0x000023ec) listscroll_set_pane_copy1

0x552a,	// (0x0000552a) scroll_pane_cp121_copy1

0x3939,	// (0x00003939) set_content_pane_copy1

0x9b84,	// (0x00009b84) aid_height_set_list_copy1_ParamLimits

0x9b84,	// (0x00009b84) aid_height_set_list_copy1

0x4aaf,	// (0x00004aaf) aid_size_parent_copy1_ParamLimits

0x4aaf,	// (0x00004aaf) aid_size_parent_copy1

0x9b90,	// (0x00009b90) button_value_adjust_pane_cp6_copy1_ParamLimits

0x9b90,	// (0x00009b90) button_value_adjust_pane_cp6_copy1

0x2966,	// (0x00002966) list_highlight_pane_cp2_copy1_ParamLimits

0x2966,	// (0x00002966) list_highlight_pane_cp2_copy1

0x9ba4,	// (0x00009ba4) list_set_pane_copy1_ParamLimits

0x9ba4,	// (0x00009ba4) list_set_pane_copy1

0x9b15,	// (0x00009b15) main_pane_set_t1_copy1_ParamLimits

0x9b15,	// (0x00009b15) main_pane_set_t1_copy1

0x9b4f,	// (0x00009b4f) main_pane_set_t2_copy1_ParamLimits

0x9b4f,	// (0x00009b4f) main_pane_set_t2_copy1

0x9c33,	// (0x00009c33) main_pane_set_t3_copy1

0x9c41,	// (0x00009c41) main_pane_set_t4_copy1

0x9b6c,	// (0x00009b6c) set_content_pane_g1_copy1_ParamLimits

0x9b6c,	// (0x00009b6c) set_content_pane_g1_copy1

0x9c4f,	// (0x00009c4f) setting_code_pane_copy1

0x9c57,	// (0x00009c57) setting_slider_graphic_pane_copy1

0x9c57,	// (0x00009c57) setting_slider_pane_copy1

0x9c57,	// (0x00009c57) setting_text_pane_copy1

0x9c57,	// (0x00009c57) setting_volume_pane_copy1

0x9c4f,	// (0x00009c4f) settings_code_pane_cp2_copy1

0x9c5f,	// (0x00009c5f) settings_code_pane_cp_copy1_ParamLimits

0x9c5f,	// (0x00009c5f) settings_code_pane_cp_copy1

0x9c73,	// (0x00009c73) volume_set_pane_copy1

0x9c7b,	// (0x00009c7b) volume_set_pane_g10_copy1

0x9c83,	// (0x00009c83) volume_set_pane_g1_copy1

0x9c8b,	// (0x00009c8b) volume_set_pane_g2_copy1

0x9c93,	// (0x00009c93) volume_set_pane_g3_copy1

0x9c9b,	// (0x00009c9b) volume_set_pane_g4_copy1

0x9ca3,	// (0x00009ca3) volume_set_pane_g5_copy1

0x9cab,	// (0x00009cab) volume_set_pane_g6_copy1

0x9cb3,	// (0x00009cb3) volume_set_pane_g7_copy1

0x9cbb,	// (0x00009cbb) volume_set_pane_g8_copy1

0x9cc3,	// (0x00009cc3) volume_set_pane_g9_copy1

0x04a3,	// (0x000004a3) bg_set_opt_pane_cp_copy1_ParamLimits

0x04a3,	// (0x000004a3) bg_set_opt_pane_cp_copy1

0x9ccb,	// (0x00009ccb) setting_slider_pane_t1_copy1_ParamLimits

0x9ccb,	// (0x00009ccb) setting_slider_pane_t1_copy1

0x9ce9,	// (0x00009ce9) setting_slider_pane_t2_copy1_ParamLimits

0x9ce9,	// (0x00009ce9) setting_slider_pane_t2_copy1

0x9d02,	// (0x00009d02) setting_slider_pane_t3_copy1_ParamLimits

0x9d02,	// (0x00009d02) setting_slider_pane_t3_copy1

0x9d19,	// (0x00009d19) slider_set_pane_copy1_ParamLimits

0x9d19,	// (0x00009d19) slider_set_pane_copy1

0x1362,	// (0x00001362) set_opt_bg_pane_g1_copy2

0x136a,	// (0x0000136a) set_opt_bg_pane_g2_copy2

0x9d2f,	// (0x00009d2f) set_opt_bg_pane_g3_copy2

0x137a,	// (0x0000137a) set_opt_bg_pane_g4_copy2

0x1382,	// (0x00001382) set_opt_bg_pane_g5_copy2

0x138a,	// (0x0000138a) set_opt_bg_pane_g6_copy2

0x9d37,	// (0x00009d37) set_opt_bg_pane_g7_copy2

0x9d3f,	// (0x00009d3f) set_opt_bg_pane_g8_copy2

0x9d47,	// (0x00009d47) set_opt_bg_pane_g9_copy2

0x9d4f,	// (0x00009d4f) aid_size_touch_slider_mark_copy1_ParamLimits

0x9d4f,	// (0x00009d4f) aid_size_touch_slider_mark_copy1

0x9d63,	// (0x00009d63) slider_set_pane_g1_copy1

0x9d6c,	// (0x00009d6c) slider_set_pane_g2_copy1

0x4a1e,	// (0x00004a1e) slider_set_pane_g3_copy1_ParamLimits

0x4a1e,	// (0x00004a1e) slider_set_pane_g3_copy1

0x4a32,	// (0x00004a32) slider_set_pane_g4_copy1_ParamLimits

0x4a32,	// (0x00004a32) slider_set_pane_g4_copy1

0x4a4a,	// (0x00004a4a) slider_set_pane_g5_copy1_ParamLimits

0x4a4a,	// (0x00004a4a) slider_set_pane_g5_copy1

0x4a1e,	// (0x00004a1e) slider_set_pane_g6_copy1_ParamLimits

0x4a1e,	// (0x00004a1e) slider_set_pane_g6_copy1

0x9d74,	// (0x00009d74) slider_set_pane_g7_copy1_ParamLimits

0x9d74,	// (0x00009d74) slider_set_pane_g7_copy1

0x027d,	// (0x0000027d) bg_set_opt_pane_cp2_copy1

0x9d8a,	// (0x00009d8a) setting_slider_graphic_pane_g1_copy1

0x9d93,	// (0x00009d93) setting_slider_graphic_pane_t1_copy1

0x9da2,	// (0x00009da2) setting_slider_graphic_pane_t2_copy1

0x9db1,	// (0x00009db1) slider_set_pane_cp_copy1

0x9dc1,	// (0x00009dc1) input_focus_pane_cp1_copy1

0x9dca,	// (0x00009dca) list_set_text_pane_copy1

0x9dd2,	// (0x00009dd2) setting_text_pane_g1_copy1

0x9ddb,	// (0x00009ddb) set_text_pane_t1_copy1

0x9dc1,	// (0x00009dc1) input_focus_pane_cp2_copy1

0x9dd2,	// (0x00009dd2) setting_code_pane_g1_copy1

0x9df3,	// (0x00009df3) setting_code_pane_t1_copy1

0x20f1,	// (0x000020f1) list_set_graphic_pane_copy1

0x027d,	// (0x0000027d) bg_set_opt_pane_cp4_copy1

0x2103,	// (0x00002103) list_set_graphic_pane_g1_copy1_ParamLimits

0x2103,	// (0x00002103) list_set_graphic_pane_g1_copy1

0x9e01,	// (0x00009e01) list_set_graphic_pane_g2_copy1

0x211b,	// (0x0000211b) list_set_graphic_pane_t1_copy1_ParamLimits

0x211b,	// (0x0000211b) list_set_graphic_pane_t1_copy1

0x6065,	// (0x00006065) rs_clock_indi_pane_g1

0x9e09,	// (0x00009e09) rs_clock_indi_pane_t1

0x9e17,	// (0x00009e17) rs_indi_pane

0x9e1f,	// (0x00009e1f) rs_indi_pane_g1

0x9e28,	// (0x00009e28) rs_indi_pane_g2

0x9e31,	// (0x00009e31) rs_indi_pane_g3

0x0002,

0xabd6,	// (0x0000abd6) rs_indi_pane_g

0x23ec,	// (0x000023ec) bg_popup_preview_window_pane_cp03

0x9e3a,	// (0x00009e3a) popup_fep_tooltip_window_t1

0x720a,	// (0x0000720a) popup_note2_window_g2_ParamLimits

0x720a,	// (0x0000720a) popup_note2_window_g2

0x0001,

0xa976,	// (0x0000a976) popup_note2_window_g_ParamLimits

0xa976,	// (0x0000a976) popup_note2_window_g

0x77ef,	// (0x000077ef) bg_popup_sub_pane_cp11_ParamLimits

0x77fc,	// (0x000077fc) cell_ai3_links_pane_g1_ParamLimits

0x7813,	// (0x00007813) cell_ai3_links_pane_t1

0x9ddb,	// (0x00009ddb) set_text_pane_t1_copy1_ParamLimits

0x22ff,	// (0x000022ff) cell_graphic_popup_pane_cp2_ParamLimits

0x22ff,	// (0x000022ff) cell_graphic_popup_pane_cp2

0x9e48,	// (0x00009e48) cell_graphic_popup_pane_g1_cp2

0x0add,	// (0x00000add) cell_graphic_popup_pane_g2_cp2

0x9e50,	// (0x00009e50) cell_graphic_popup_pane_g3_cp2

0x9e58,	// (0x00009e58) cell_graphic_popup_pane_t2_cp2

0x0aee,	// (0x00000aee) grid_highlight_pane_cp3_cp2

0x18a9,	// (0x000018a9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1221,	// (0x00001221) main_tmo_pane_ParamLimits

0xd33d,	// (0x0000d33d) popup_tmo_big_image_note_window

0x9367,	// (0x00009367) cell_ai5_widget_list_pane

0x936f,	// (0x0000936f) cell_ai5_widget_lrg_icon_pane

0xe403,	// (0x0000e403) tmo_note_info_pane_t1_ParamLimits

0xe418,	// (0x0000e418) tmo_note_info_pane_t2_ParamLimits

0xe42d,	// (0x0000e42d) tmo_note_info_pane_t3_ParamLimits

0x9a3e,	// (0x00009a3e) tmo_note_info_pane_t4_ParamLimits

0x9a50,	// (0x00009a50) tmo_note_info_pane_t5_ParamLimits

0xe7d2,	// (0x0000e7d2) tmo_note_info_pane_t_ParamLimits

0x9b78,	// (0x00009b78) settings_container_pane_ParamLimits

0x9db9,	// (0x00009db9) indicator_popup_pane_cp5

0x9db9,	// (0x00009db9) indicator_popup_pane_cp6

0x20f1,	// (0x000020f1) list_set_graphic_pane_copy1_ParamLimits

0x0020,	// (0x00000020) bg_popup_window_pane_cp23

0x9e66,	// (0x00009e66) popup_tmo_big_image_note_window_g1

0x9e6f,	// (0x00009e6f) popup_tmo_big_image_note_window_t1

0x9e7d,	// (0x00009e7d) popup_tmo_big_image_note_window_t2

0x9e8b,	// (0x00009e8b) popup_tmo_big_image_note_window_t3

0x0002,

0xabdd,	// (0x0000abdd) popup_tmo_big_image_note_window_t

0x6065,	// (0x00006065) cell_ai5_widget_lrg_icon_pane_g1

0x9e99,	// (0x00009e99) cell_ai5_widget_lrg_icon_pane_t1

0x9ea7,	// (0x00009ea7) cell_ai5_widget_list_row_pane_ParamLimits

0x9ea7,	// (0x00009ea7) cell_ai5_widget_list_row_pane

0x9ebe,	// (0x00009ebe) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x9ebe,	// (0x00009ebe) cell_ai5_widget_list_row_pane_g1

0x9ecb,	// (0x00009ecb) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x9ecb,	// (0x00009ecb) cell_ai5_widget_list_row_pane_t1

0x9ef9,	// (0x00009ef9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x9ef9,	// (0x00009ef9) cell_ai5_widget_list_row_pane_t2

0x0002,

0xabe4,	// (0x0000abe4) cell_ai5_widget_list_row_pane_t_ParamLimits

0xabe4,	// (0x0000abe4) cell_ai5_widget_list_row_pane_t

0x0020,	// (0x00000020) main_fep_vtchi_ss_pane

0x9f3d,	// (0x00009f3d) popup_fep_char_pre_window

0x9f45,	// (0x00009f45) popup_fep_ituss_window

0xe442,	// (0x0000e442) popup_fep_vkbss_window

0xe44f,	// (0x0000e44f) grid_vkbss_keypad_pane_ParamLimits

0xe44f,	// (0x0000e44f) grid_vkbss_keypad_pane

0x9f96,	// (0x00009f96) ituss_keypad_pane

0x9faf,	// (0x00009faf) aid_vkbss_key_offset_ParamLimits

0x9faf,	// (0x00009faf) aid_vkbss_key_offset

0xe45f,	// (0x0000e45f) cell_vkbss_key_pane_ParamLimits

0xe45f,	// (0x0000e45f) cell_vkbss_key_pane

0x317c,	// (0x0000317c) bg_cell_vkbss_key_g1_ParamLimits

0x317c,	// (0x0000317c) bg_cell_vkbss_key_g1

0xe475,	// (0x0000e475) cell_vkbss_key_3p_pane_ParamLimits

0xe475,	// (0x0000e475) cell_vkbss_key_3p_pane

0xe48f,	// (0x0000e48f) cell_vkbss_key_g1_ParamLimits

0xe48f,	// (0x0000e48f) cell_vkbss_key_g1

0xe4a9,	// (0x0000e4a9) cell_vkbss_key_t1_ParamLimits

0xe4a9,	// (0x0000e4a9) cell_vkbss_key_t1

0xa024,	// (0x0000a024) cell_ituss_key_pane_ParamLimits

0xa024,	// (0x0000a024) cell_ituss_key_pane

0xa035,	// (0x0000a035) bg_cell_ituss_key_g1_ParamLimits

0xa035,	// (0x0000a035) bg_cell_ituss_key_g1

0xa041,	// (0x0000a041) cell_ituss_key_pane_g1_ParamLimits

0xa041,	// (0x0000a041) cell_ituss_key_pane_g1

0xa055,	// (0x0000a055) cell_ituss_key_pane_g2_ParamLimits

0xa055,	// (0x0000a055) cell_ituss_key_pane_g2

0x0002,

0xabeb,	// (0x0000abeb) cell_ituss_key_pane_g_ParamLimits

0xabeb,	// (0x0000abeb) cell_ituss_key_pane_g

0xa08f,	// (0x0000a08f) cell_ituss_key_t1_ParamLimits

0xa08f,	// (0x0000a08f) cell_ituss_key_t1

0xa0c9,	// (0x0000a0c9) cell_ituss_key_t2_ParamLimits

0xa0c9,	// (0x0000a0c9) cell_ituss_key_t2

0xa0fa,	// (0x0000a0fa) cell_ituss_key_t3_ParamLimits

0xa0fa,	// (0x0000a0fa) cell_ituss_key_t3

0xa0c9,	// (0x0000a0c9) cell_ituss_key_t4_ParamLimits

0xa0c9,	// (0x0000a0c9) cell_ituss_key_t4

0x0004,

0xabf2,	// (0x0000abf2) cell_ituss_key_t_ParamLimits

0xabf2,	// (0x0000abf2) cell_ituss_key_t

0xa13d,	// (0x0000a13d) cell_vkbss_key_3p_pane_g1

0xa145,	// (0x0000a145) cell_vkbss_key_3p_pane_g2

0xa14d,	// (0x0000a14d) cell_vkbss_key_3p_pane_g3

0x0002,

0xabfd,	// (0x0000abfd) cell_vkbss_key_3p_pane_g

0x0020,	// (0x00000020) bg_popup_fep_char_preview_window_cp02

0xa155,	// (0x0000a155) popup_fep_char_pre_window_t1

0xe20b,	// (0x0000e20b) main_ai5_sk_pane

0x9aca,	// (0x00009aca) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9ad6,	// (0x00009ad6) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9aeb,	// (0x00009aeb) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9af7,	// (0x00009af7) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xabcf,	// (0x0000abcf) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9b03,	// (0x00009b03) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1221,	// (0x00001221) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe4d4,	// (0x0000e4d4) main_ai5_sk_pane_g1

0x39c1,	// (0x000039c1) popup_query_code_window_g1

0x9f57,	// (0x00009f57) popup_fep_vkb_icf_pane

0x9f74,	// (0x00009f74) popup_fep_vtchi_icf_pane

0xa16d,	// (0x0000a16d) bg_icf_pane

0xa179,	// (0x0000a179) list_vkb_icf_pane

0xa188,	// (0x0000a188) bg_icf_pane_cp01

0xa19b,	// (0x0000a19b) vtchi_icf_list_pane

0xa1ab,	// (0x0000a1ab) list_vkb_icf_pane_t1_ParamLimits

0xa1ab,	// (0x0000a1ab) list_vkb_icf_pane_t1

0xa1c0,	// (0x0000a1c0) vtchi_icf_list_pane_t1_ParamLimits

0xa1c0,	// (0x0000a1c0) vtchi_icf_list_pane_t1

0x9f45,	// (0x00009f45) popup_fep_ituss_window_ParamLimits

0x9f74,	// (0x00009f74) popup_fep_vtchi_icf_pane_ParamLimits

0x9f96,	// (0x00009f96) ituss_keypad_pane_ParamLimits

0x9fa5,	// (0x00009fa5) ituss_sks_pane

0xa16d,	// (0x0000a16d) bg_icf_pane_ParamLimits

0x9f21,	// (0x00009f21) icf_edit_indi_pane_ParamLimits

0x9f21,	// (0x00009f21) icf_edit_indi_pane

0xa179,	// (0x0000a179) list_vkb_icf_pane_ParamLimits

0xa188,	// (0x0000a188) bg_icf_pane_cp01_ParamLimits

0x9f30,	// (0x00009f30) icf_edit_indi_pane_cp01_ParamLimits

0x9f30,	// (0x00009f30) icf_edit_indi_pane_cp01

0xa1a3,	// (0x0000a1a3) vtchi_query_pane

0x64a5,	// (0x000064a5) icf_edit_indi_pane_g1_ParamLimits

0x64a5,	// (0x000064a5) icf_edit_indi_pane_g1

0xa240,	// (0x0000a240) icf_edit_indi_pane_g2_ParamLimits

0xa240,	// (0x0000a240) icf_edit_indi_pane_g2

0x0001,

0xac15,	// (0x0000ac15) icf_edit_indi_pane_g_ParamLimits

0xac15,	// (0x0000ac15) icf_edit_indi_pane_g

0xa24f,	// (0x0000a24f) icf_edit_indi_pane_t1

0xa1d7,	// (0x0000a1d7) bg_input_focus_pane_cp042

0x0c25,	// (0x00000c25) vtchi_button_pane

0xa1e0,	// (0x0000a1e0) vtchi_query_pane_t1

0xa1ee,	// (0x0000a1ee) vtchi_query_pane_t2

0xa1fc,	// (0x0000a1fc) vtchi_query_pane_t3

0x0002,

0xac04,	// (0x0000ac04) vtchi_query_pane_t

0x0020,	// (0x00000020) bg_button_pane_cp13

0xa20a,	// (0x0000a20a) vtchi_button_pane_g1

0xa212,	// (0x0000a212) ituss_sks_pane_g1

0xa21c,	// (0x0000a21c) ituss_sks_pane_g2

0x0001,

0xac0b,	// (0x0000ac0b) ituss_sks_pane_g

0xa224,	// (0x0000a224) ituss_sks_pane_t1

0xa232,	// (0x0000a232) ituss_sks_pane_t2

0x0001,

0xac10,	// (0x0000ac10) ituss_sks_pane_t

0x5b24,	// (0x00005b24) indicator_nsta_pane_cp_g1

0x5b2c,	// (0x00005b2c) indicator_nsta_pane_cp_g2

0x5b34,	// (0x00005b34) indicator_nsta_pane_cp_g3

0x5b24,	// (0x00005b24) indicator_nsta_pane_cp_g4

0x5b2c,	// (0x00005b2c) indicator_nsta_pane_cp_g5

0x5b34,	// (0x00005b34) indicator_nsta_pane_cp_g6

0x0005,

0xa7c0,	// (0x0000a7c0) indicator_nsta_pane_cp_g

0xe012,	// (0x0000e012) cell_graphic2_pane_t2_ParamLimits

0xe012,	// (0x0000e012) cell_graphic2_pane_t2

0x0001,

0xe7a4,	// (0x0000e7a4) cell_graphic2_pane_t_ParamLimits

0xe7a4,	// (0x0000e7a4) cell_graphic2_pane_t

0xe049,	// (0x0000e049) cell_graphic2_control_pane_t1

0xb7b7,	// (0x0000b7b7) signal_pane_g3_ParamLimits

0xb7b7,	// (0x0000b7b7) signal_pane_g3

0xb7cb,	// (0x0000b7cb) signal_pane_g4_ParamLimits

0xb7cb,	// (0x0000b7cb) signal_pane_g4

0x9f0b,	// (0x00009f0b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x9f0b,	// (0x00009f0b) cell_ai5_widget_list_row_pane_t3

0xa07d,	// (0x0000a07d) cell_ituss_key_pane_t1_ParamLimits

0xa07d,	// (0x0000a07d) cell_ituss_key_pane_t1

0x3647,	// (0x00003647) form_field_data_wide_pane_vc_t2_ParamLimits

0x3647,	// (0x00003647) form_field_data_wide_pane_vc_t2

0x3659,	// (0x00003659) form_field_data_wide_pane_vc_t3_ParamLimits

0x3659,	// (0x00003659) form_field_data_wide_pane_vc_t3

0x0002,

0xa513,	// (0x0000a513) form_field_data_wide_pane_vc_t_ParamLimits

0xa513,	// (0x0000a513) form_field_data_wide_pane_vc_t

0x5806,	// (0x00005806) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5806,	// (0x00005806) form_field_slider_wide_pane_vc_t3

0x58d4,	// (0x000058d4) form_field_popup_wide_pane_vc_t2_ParamLimits

0x58d4,	// (0x000058d4) form_field_popup_wide_pane_vc_t2

0x58e9,	// (0x000058e9) form_field_popup_wide_pane_vc_t3_ParamLimits

0x58e9,	// (0x000058e9) form_field_popup_wide_pane_vc_t3

0x0002,

0xa7af,	// (0x0000a7af) form_field_popup_wide_pane_vc_t_ParamLimits

0xa7af,	// (0x0000a7af) form_field_popup_wide_pane_vc_t

0xe267,	// (0x0000e267) aid_fshwr2_btn_pane_ParamLimits

0xe278,	// (0x0000e278) aid_fshwr2_syb_pane_ParamLimits

0xe289,	// (0x0000e289) aid_fshwr2_txt_pane_ParamLimits

0x1221,	// (0x00001221) fshwr2_bg_pane_ParamLimits

0xe295,	// (0x0000e295) fshwr2_func_candi_pane_ParamLimits

0xe2af,	// (0x0000e2af) fshwr2_hwr_syb_pane_ParamLimits

0xe2c4,	// (0x0000e2c4) fshwr2_icf_pane_ParamLimits

0x5788,	// (0x00005788) list_double_graphic_pane_vc_g4_ParamLimits

0x5788,	// (0x00005788) list_double_graphic_pane_vc_g4

0xa071,	// (0x0000a071) cell_ituss_key_pane_g3_ParamLimits

0xa071,	// (0x0000a071) cell_ituss_key_pane_g3

0xa12b,	// (0x0000a12b) cell_ituss_key_t5_ParamLimits

0xa12b,	// (0x0000a12b) cell_ituss_key_t5

0xe442,	// (0x0000e442) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Normal

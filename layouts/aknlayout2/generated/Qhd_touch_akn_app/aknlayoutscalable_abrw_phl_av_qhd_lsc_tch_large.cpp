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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004eabf };

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
0xcf49,	// (0x0005ba08) Screen

0xcf55,	// (0x0005ba14) application_window_ParamLimits

0xcf55,	// (0x0005ba14) application_window

0x3652,	// (0x00052111) screen_g1

0xb6dc,	// (0x0005a19b) area_bottom_pane_ParamLimits

0xb6dc,	// (0x0005a19b) area_bottom_pane

0x00c4,	// (0x0004eb83) area_top_pane_ParamLimits

0x00c4,	// (0x0004eb83) area_top_pane

0x0162,	// (0x0004ec21) main_pane_ParamLimits

0x0162,	// (0x0004ec21) main_pane

0x365c,	// (0x0005211b) misc_graphics

0xd6ea,	// (0x0005c1a9) battery_pane_ParamLimits

0xd6ea,	// (0x0005c1a9) battery_pane

0x5cfb,	// (0x000547ba) bg_status_flat_pane_g8

0x5d03,	// (0x000547c2) bg_status_flat_pane_g9

0x50f5,	// (0x00053bb4) context_pane_ParamLimits

0x50f5,	// (0x00053bb4) context_pane

0xd855,	// (0x0005c314) navi_pane_ParamLimits

0xd855,	// (0x0005c314) navi_pane

0xd96d,	// (0x0005c42c) signal_pane_ParamLimits

0xd96d,	// (0x0005c42c) signal_pane

0x0008,

0xf879,	// (0x0005e338) bg_status_flat_pane_g

0xd9fd,	// (0x0005c4bc) status_pane_g1_ParamLimits

0xd9fd,	// (0x0005c4bc) status_pane_g1

0xda13,	// (0x0005c4d2) status_pane_g2_ParamLimits

0xda13,	// (0x0005c4d2) status_pane_g2

0x531c,	// (0x00053ddb) status_pane_g3_ParamLimits

0x531c,	// (0x00053ddb) status_pane_g3

0x0004,

0xf7a5,	// (0x0005e264) status_pane_g_ParamLimits

0xf7a5,	// (0x0005e264) status_pane_g

0xda1f,	// (0x0005c4de) title_pane_ParamLimits

0xda1f,	// (0x0005c4de) title_pane

0xda82,	// (0x0005c541) uni_indicator_pane_ParamLimits

0xda82,	// (0x0005c541) uni_indicator_pane

0x4f46,	// (0x00053a05) bg_list_pane_ParamLimits

0x4f46,	// (0x00053a05) bg_list_pane

0xd65d,	// (0x0005c11c) find_pane

0xc075,	// (0x0005ab34) listscroll_app_pane_ParamLimits

0xc075,	// (0x0005ab34) listscroll_app_pane

0x4f77,	// (0x00053a36) listscroll_form_pane

0xc089,	// (0x0005ab48) listscroll_gen_pane_ParamLimits

0xc089,	// (0x0005ab48) listscroll_gen_pane

0x11a5,	// (0x0004fc64) listscroll_set_pane

0x687c,	// (0x0005533b) main_idle_act_pane

0x4c42,	// (0x00053701) main_idle_trad_pane

0x4c42,	// (0x00053701) main_list_empty_pane

0x4f91,	// (0x00053a50) main_midp_pane

0x4f9d,	// (0x00053a5c) main_pane_g1_ParamLimits

0x4f9d,	// (0x00053a5c) main_pane_g1

0xc09d,	// (0x0005ab5c) popup_ai_message_window_ParamLimits

0xc09d,	// (0x0005ab5c) popup_ai_message_window

0xc12e,	// (0x0005abed) popup_fep_china_uni_window_ParamLimits

0xc12e,	// (0x0005abed) popup_fep_china_uni_window

0x12c5,	// (0x0004fd84) popup_fep_japan_candidate_window_ParamLimits

0x12c5,	// (0x0004fd84) popup_fep_japan_candidate_window

0x12e5,	// (0x0004fda4) popup_fep_japan_predictive_window_ParamLimits

0x12e5,	// (0x0004fda4) popup_fep_japan_predictive_window

0xc18a,	// (0x0005ac49) popup_find_window

0xc1a7,	// (0x0005ac66) popup_grid_graphic_window_ParamLimits

0xc1a7,	// (0x0005ac66) popup_grid_graphic_window

0x134c,	// (0x0004fe0b) popup_large_graphic_colour_window

0xc245,	// (0x0005ad04) popup_menu_window_ParamLimits

0xc245,	// (0x0005ad04) popup_menu_window

0xc417,	// (0x0005aed6) popup_note_image_window

0xc3dd,	// (0x0005ae9c) popup_note_wait_window_ParamLimits

0xc3dd,	// (0x0005ae9c) popup_note_wait_window

0xc42f,	// (0x0005aeee) popup_note_window_ParamLimits

0xc42f,	// (0x0005aeee) popup_note_window

0xc4d5,	// (0x0005af94) popup_query_code_window_ParamLimits

0xc4d5,	// (0x0005af94) popup_query_code_window

0x1594,	// (0x00050053) popup_query_data_code_window_ParamLimits

0x1594,	// (0x00050053) popup_query_data_code_window

0xc50f,	// (0x0005afce) popup_query_data_window_ParamLimits

0xc50f,	// (0x0005afce) popup_query_data_window

0xc591,	// (0x0005b050) popup_query_sat_info_window_ParamLimits

0xc591,	// (0x0005b050) popup_query_sat_info_window

0xc628,	// (0x0005b0e7) popup_snote_single_graphic_window_ParamLimits

0xc628,	// (0x0005b0e7) popup_snote_single_graphic_window

0xc628,	// (0x0005b0e7) popup_snote_single_text_window_ParamLimits

0xc628,	// (0x0005b0e7) popup_snote_single_text_window

0x161b,	// (0x000500da) popup_sub_window_general

0x174b,	// (0x0005020a) popup_window_general_ParamLimits

0x174b,	// (0x0005020a) popup_window_general

0x4fab,	// (0x00053a6a) power_save_pane

0xbefa,	// (0x0005a9b9) control_pane_g1_ParamLimits

0xbefa,	// (0x0005a9b9) control_pane_g1

0xbf23,	// (0x0005a9e2) control_pane_g2_ParamLimits

0xbf23,	// (0x0005a9e2) control_pane_g2

0x4f09,	// (0x000539c8) control_pane_g3_ParamLimits

0x4f09,	// (0x000539c8) control_pane_g3

0x0007,

0xf78d,	// (0x0005e24c) control_pane_g_ParamLimits

0xf78d,	// (0x0005e24c) control_pane_g

0xbf64,	// (0x0005aa23) control_pane_t1_ParamLimits

0xbf64,	// (0x0005aa23) control_pane_t1

0xbfca,	// (0x0005aa89) control_pane_t2_ParamLimits

0xbfca,	// (0x0005aa89) control_pane_t2

0x0002,

0xf79e,	// (0x0005e25d) control_pane_t_ParamLimits

0xf79e,	// (0x0005e25d) control_pane_t

0xd58f,	// (0x0005c04e) navi_navi_volume_pane_cp1

0xd597,	// (0x0005c056) status_small_icon_pane

0x4e3e,	// (0x000538fd) status_small_pane_g1_ParamLimits

0x4e3e,	// (0x000538fd) status_small_pane_g1

0xd59f,	// (0x0005c05e) status_small_pane_g2_ParamLimits

0xd59f,	// (0x0005c05e) status_small_pane_g2

0xd5ab,	// (0x0005c06a) status_small_pane_g3_ParamLimits

0xd5ab,	// (0x0005c06a) status_small_pane_g3

0xd5b7,	// (0x0005c076) status_small_pane_g4_ParamLimits

0xd5b7,	// (0x0005c076) status_small_pane_g4

0xd5c3,	// (0x0005c082) status_small_pane_g5_ParamLimits

0xd5c3,	// (0x0005c082) status_small_pane_g5

0xd5d1,	// (0x0005c090) status_small_pane_g6_ParamLimits

0xd5d1,	// (0x0005c090) status_small_pane_g6

0x0007,

0xf77c,	// (0x0005e23b) status_small_pane_g_ParamLimits

0xf77c,	// (0x0005e23b) status_small_pane_g

0xd600,	// (0x0005c0bf) status_small_pane_t1

0xd622,	// (0x0005c0e1) status_small_wait_pane_ParamLimits

0xd622,	// (0x0005c0e1) status_small_wait_pane

0xd448,	// (0x0005bf07) aid_levels_signal_ParamLimits

0xd448,	// (0x0005bf07) aid_levels_signal

0xd460,	// (0x0005bf1f) signal_pane_g1_ParamLimits

0xd460,	// (0x0005bf1f) signal_pane_g1

0xd47b,	// (0x0005bf3a) signal_pane_g2_ParamLimits

0xd47b,	// (0x0005bf3a) signal_pane_g2

0x0003,

0xf70d,	// (0x0005e1cc) signal_pane_g_ParamLimits

0xf70d,	// (0x0005e1cc) signal_pane_g

0x4716,	// (0x000531d5) context_pane_g1

0xcf65,	// (0x0005ba24) title_pane_g1

0xcf9c,	// (0x0005ba5b) title_pane_t1

0x3704,	// (0x000521c3) title_pane_t2

0x372a,	// (0x000521e9) title_pane_t3

0x0002,

0xf557,	// (0x0005e016) title_pane_t

0xdaaa,	// (0x0005c569) aid_levels_battery_ParamLimits

0xdaaa,	// (0x0005c569) aid_levels_battery

0xdac6,	// (0x0005c585) battery_pane_g1_ParamLimits

0xdac6,	// (0x0005c585) battery_pane_g1

0xdae3,	// (0x0005c5a2) battery_pane_g2_ParamLimits

0xdae3,	// (0x0005c5a2) battery_pane_g2

0x0001,

0xf7b0,	// (0x0005e26f) battery_pane_g_ParamLimits

0xf7b0,	// (0x0005e26f) battery_pane_g

0xdca4,	// (0x0005c763) uni_indicator_pane_g1

0xdcba,	// (0x0005c779) uni_indicator_pane_g2

0xdcd0,	// (0x0005c78f) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0005e3e0) uni_indicator_pane_g

0x4ab4,	// (0x00053573) navi_icon_pane_ParamLimits

0x4ab4,	// (0x00053573) navi_icon_pane

0x49f2,	// (0x000534b1) navi_midp_pane

0x4ad0,	// (0x0005358f) navi_navi_pane

0x4ada,	// (0x00053599) navi_text_pane_ParamLimits

0x4ada,	// (0x00053599) navi_text_pane

0x3652,	// (0x00052111) status_small_wait_pane_g1

0x3b59,	// (0x00052618) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0005e3db) status_small_wait_pane_g

0x6356,	// (0x00054e15) navi_navi_icon_text_pane

0x635e,	// (0x00054e1d) navi_navi_pane_g1_ParamLimits

0x635e,	// (0x00054e1d) navi_navi_pane_g1

0x6370,	// (0x00054e2f) navi_navi_pane_g2_ParamLimits

0x6370,	// (0x00054e2f) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0005e3a9) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0005e3a9) navi_navi_pane_g

0x6382,	// (0x00054e41) navi_navi_tabs_pane

0x638b,	// (0x00054e4a) navi_navi_text_pane

0x6356,	// (0x00054e15) navi_navi_volume_pane

0x6332,	// (0x00054df1) navi_text_pane_t1

0x6326,	// (0x00054de5) navi_icon_pane_g1

0x6279,	// (0x00054d38) navi_navi_text_pane_t1

0x1a71,	// (0x00050530) navi_navi_volume_pane_g1

0x1a79,	// (0x00050538) volume_small_pane

0x61df,	// (0x00054c9e) navi_navi_icon_text_pane_g1

0x61e7,	// (0x00054ca6) navi_navi_icon_text_pane_t1

0x4ad0,	// (0x0005358f) navi_tabs_2_long_pane

0x4ad0,	// (0x0005358f) navi_tabs_2_pane

0x4ad0,	// (0x0005358f) navi_tabs_3_long_pane

0x4ad0,	// (0x0005358f) navi_tabs_3_pane

0x4ad0,	// (0x0005358f) navi_tabs_4_pane

0x1a51,	// (0x00050510) tabs_2_active_pane_ParamLimits

0x1a51,	// (0x00050510) tabs_2_active_pane

0x1a61,	// (0x00050520) tabs_2_passive_pane_ParamLimits

0x1a61,	// (0x00050520) tabs_2_passive_pane

0x1a1f,	// (0x000504de) tabs_3_active_pane_ParamLimits

0x1a1f,	// (0x000504de) tabs_3_active_pane

0x1a2f,	// (0x000504ee) tabs_3_passive_pane_ParamLimits

0x1a2f,	// (0x000504ee) tabs_3_passive_pane

0x1a40,	// (0x000504ff) tabs_3_passive_pane_cp_ParamLimits

0x1a40,	// (0x000504ff) tabs_3_passive_pane_cp

0x19db,	// (0x0005049a) tabs_4_active_pane_ParamLimits

0x19db,	// (0x0005049a) tabs_4_active_pane

0x19ec,	// (0x000504ab) tabs_4_passive_pane_ParamLimits

0x19ec,	// (0x000504ab) tabs_4_passive_pane

0x19fd,	// (0x000504bc) tabs_4_passive_pane_cp_ParamLimits

0x19fd,	// (0x000504bc) tabs_4_passive_pane_cp

0x1a0e,	// (0x000504cd) tabs_4_passive_pane_cp2_ParamLimits

0x1a0e,	// (0x000504cd) tabs_4_passive_pane_cp2

0x19b7,	// (0x00050476) tabs_2_long_active_pane_ParamLimits

0x19b7,	// (0x00050476) tabs_2_long_active_pane

0x19c9,	// (0x00050488) tabs_2_long_passive_pane_ParamLimits

0x19c9,	// (0x00050488) tabs_2_long_passive_pane

0x1978,	// (0x00050437) tabs_3_long_active_pane_ParamLimits

0x1978,	// (0x00050437) tabs_3_long_active_pane

0x198b,	// (0x0005044a) tabs_3_long_passive_pane_ParamLimits

0x198b,	// (0x0005044a) tabs_3_long_passive_pane

0x19a4,	// (0x00050463) tabs_3_long_passive_pane_cp_ParamLimits

0x19a4,	// (0x00050463) tabs_3_long_passive_pane_cp

0x191e,	// (0x000503dd) volume_small_pane_g1

0x1927,	// (0x000503e6) volume_small_pane_g2

0x1930,	// (0x000503ef) volume_small_pane_g3

0x1939,	// (0x000503f8) volume_small_pane_g4

0x1942,	// (0x00050401) volume_small_pane_g5

0x194b,	// (0x0005040a) volume_small_pane_g6

0x1954,	// (0x00050413) volume_small_pane_g7

0x195d,	// (0x0005041c) volume_small_pane_g8

0x1966,	// (0x00050425) volume_small_pane_g9

0x196f,	// (0x0005042e) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0005e375) volume_small_pane_g

0x39b7,	// (0x00052476) bg_active_tab_pane_cp2_ParamLimits

0x39b7,	// (0x00052476) bg_active_tab_pane_cp2

0x374a,	// (0x00052209) tabs_3_active_pane_g1

0xd028,	// (0x0005bae7) tabs_3_active_pane_t1

0x39b7,	// (0x00052476) bg_passive_tab_pane_cp2_ParamLimits

0x39b7,	// (0x00052476) bg_passive_tab_pane_cp2

0x374a,	// (0x00052209) tabs_3_passive_pane_g1

0xd028,	// (0x0005bae7) tabs_3_passive_pane_t1

0x39b7,	// (0x00052476) bg_active_tab_pane_cp3_ParamLimits

0x39b7,	// (0x00052476) bg_active_tab_pane_cp3

0x3764,	// (0x00052223) tabs_4_active_pane_g1

0xd03a,	// (0x0005baf9) tabs_4_active_pane_t1

0x39b7,	// (0x00052476) bg_passive_tab_pane_cp3_ParamLimits

0x39b7,	// (0x00052476) bg_passive_tab_pane_cp3

0x3764,	// (0x00052223) tabs_4_1_passive_pane_g1

0xd03a,	// (0x0005baf9) tabs_4_1_passive_pane_t1

0x4f91,	// (0x00053a50) list_highlight_pane_cp2

0xdd56,	// (0x0005c815) list_set_pane_ParamLimits

0xdd56,	// (0x0005c815) list_set_pane

0xddf0,	// (0x0005c8af) main_pane_set_t1_ParamLimits

0xddf0,	// (0x0005c8af) main_pane_set_t1

0xde10,	// (0x0005c8cf) main_pane_set_t2_ParamLimits

0xde10,	// (0x0005c8cf) main_pane_set_t2

0xde24,	// (0x0005c8e3) main_pane_set_t3_ParamLimits

0xde24,	// (0x0005c8e3) main_pane_set_t3

0xde36,	// (0x0005c8f5) main_pane_set_t4_ParamLimits

0xde36,	// (0x0005c8f5) main_pane_set_t4

0x0003,

0xf986,	// (0x0005e445) main_pane_set_t_ParamLimits

0xf986,	// (0x0005e445) main_pane_set_t

0xde48,	// (0x0005c907) setting_code_pane

0xde52,	// (0x0005c911) setting_slider_graphic_pane

0xde52,	// (0x0005c911) setting_slider_pane

0xde52,	// (0x0005c911) setting_text_pane

0xde52,	// (0x0005c911) setting_volume_pane

0x03b1,	// (0x0004ee70) volume_set_pane

0x373c,	// (0x000521fb) bg_set_opt_pane_cp

0x03b9,	// (0x0004ee78) setting_slider_pane_t1

0x03d2,	// (0x0004ee91) setting_slider_pane_t2

0x03ec,	// (0x0004eeab) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0005e01d) setting_slider_pane_t

0x0404,	// (0x0004eec3) slider_set_pane

0x365c,	// (0x0005211b) bg_set_opt_pane_cp2

0x377e,	// (0x0005223d) setting_slider_graphic_pane_g1

0x041a,	// (0x0004eed9) setting_slider_graphic_pane_t1

0x042a,	// (0x0004eee9) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0005e024) setting_slider_graphic_pane_t

0x043a,	// (0x0004eef9) slider_set_pane_cp

0x365c,	// (0x0005211b) input_focus_pane_cp1

0x6863,	// (0x00055322) list_set_text_pane

0x3652,	// (0x00052111) setting_text_pane_g1

0x365c,	// (0x0005211b) input_focus_pane_cp2

0x3652,	// (0x00052111) setting_code_pane_g1

0x3787,	// (0x00052246) setting_code_pane_t1

0x0442,	// (0x0004ef01) set_text_pane_t1_ParamLimits

0x0442,	// (0x0004ef01) set_text_pane_t1

0x4003,	// (0x00052ac2) set_opt_bg_pane_g1

0x400b,	// (0x00052aca) set_opt_bg_pane_g2

0x683d,	// (0x000552fc) set_opt_bg_pane_g3

0x401b,	// (0x00052ada) set_opt_bg_pane_g4

0x4023,	// (0x00052ae2) set_opt_bg_pane_g5

0x402b,	// (0x00052aea) set_opt_bg_pane_g6

0x6847,	// (0x00055306) set_opt_bg_pane_g7

0x684f,	// (0x0005530e) set_opt_bg_pane_g8

0x6859,	// (0x00055318) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0005e432) set_opt_bg_pane_g

0x6830,	// (0x000552ef) slider_set_pane_g1

0x1ae6,	// (0x000505a5) slider_set_pane_g2

0x0006,

0xf964,	// (0x0005e423) slider_set_pane_g

0x1a82,	// (0x00050541) volume_set_pane_g1

0x1a8a,	// (0x00050549) volume_set_pane_g2

0x1a92,	// (0x00050551) volume_set_pane_g3

0x1a9a,	// (0x00050559) volume_set_pane_g4

0x1aa2,	// (0x00050561) volume_set_pane_g5

0x1aaa,	// (0x00050569) volume_set_pane_g6

0x1ab2,	// (0x00050571) volume_set_pane_g7

0x1aba,	// (0x00050579) volume_set_pane_g8

0x1ac2,	// (0x00050581) volume_set_pane_g9

0x1aca,	// (0x00050589) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0005e3fb) volume_set_pane_g

0xd04c,	// (0x0005bb0b) indicator_pane_ParamLimits

0xd04c,	// (0x0005bb0b) indicator_pane

0xd074,	// (0x0005bb33) main_idle_pane_g2_ParamLimits

0xd074,	// (0x0005bb33) main_idle_pane_g2

0xd0ac,	// (0x0005bb6b) main_pane_idle_g1_ParamLimits

0xd0ac,	// (0x0005bb6b) main_pane_idle_g1

0x37d6,	// (0x00052295) popup_clock_digital_analogue_window_ParamLimits

0x37d6,	// (0x00052295) popup_clock_digital_analogue_window

0xd0d3,	// (0x0005bb92) soft_indicator_pane_ParamLimits

0xd0d3,	// (0x0005bb92) soft_indicator_pane

0xd0ed,	// (0x0005bbac) wallpaper_pane_ParamLimits

0xd0ed,	// (0x0005bbac) wallpaper_pane

0x3652,	// (0x00052111) wallpaper_pane_g1

0xd0ff,	// (0x0005bbbe) indicator_pane_g1_ParamLimits

0xd0ff,	// (0x0005bbbe) indicator_pane_g1

0x6c12,	// (0x000556d1) navi_navi_icon_text_pane_srt_g1

0x3828,	// (0x000522e7) soft_indicator_pane_t1

0x3842,	// (0x00052301) aid_ps_area_pane

0xd115,	// (0x0005bbd4) aid_ps_clock_pane

0x3861,	// (0x00052320) aid_ps_indicator_pane

0x386d,	// (0x0005232c) indicator_ps_pane_ParamLimits

0x386d,	// (0x0005232c) indicator_ps_pane

0x387c,	// (0x0005233b) power_save_pane_g1_ParamLimits

0x387c,	// (0x0005233b) power_save_pane_g1

0x3888,	// (0x00052347) power_save_pane_g2_ParamLimits

0x3888,	// (0x00052347) power_save_pane_g2

0xf516,	// (0x0005dfd5) aid_navinavi_width_pane

0x3842,	// (0x00052301) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0005e029) power_save_pane_g_ParamLimits

0xf56a,	// (0x0005e029) power_save_pane_g

0x3896,	// (0x00052355) power_save_pane_t1_ParamLimits

0x3896,	// (0x00052355) power_save_pane_t1

0xd115,	// (0x0005bbd4) aid_ps_clock_pane_ParamLimits

0x3861,	// (0x00052320) aid_ps_indicator_pane_ParamLimits

0x38a8,	// (0x00052367) power_save_pane_t4_ParamLimits

0x38a8,	// (0x00052367) power_save_pane_t4

0x0001,

0xf56f,	// (0x0005e02e) power_save_pane_t_ParamLimits

0xf56f,	// (0x0005e02e) power_save_pane_t

0x38d2,	// (0x00052391) power_save_t3_ParamLimits

0x38d2,	// (0x00052391) power_save_t3

0x38bd,	// (0x0005237c) power_save_t2_ParamLimits

0x38bd,	// (0x0005237c) power_save_t2

0x38e7,	// (0x000523a6) indicator_ps_pane_g1

0xd123,	// (0x0005bbe2) ai_gene_pane_ParamLimits

0xd123,	// (0x0005bbe2) ai_gene_pane

0xd13a,	// (0x0005bbf9) ai_links_pane_ParamLimits

0xd13a,	// (0x0005bbf9) ai_links_pane

0xd152,	// (0x0005bc11) indicator_pane_cp1_ParamLimits

0xd152,	// (0x0005bc11) indicator_pane_cp1

0xd161,	// (0x0005bc20) main_pane_idle_g1_cp_ParamLimits

0xd161,	// (0x0005bc20) main_pane_idle_g1_cp

0x3920,	// (0x000523df) popup_ai_links_title_window

0xd179,	// (0x0005bc38) soft_indicator_pane_cp1_ParamLimits

0xd179,	// (0x0005bc38) soft_indicator_pane_cp1

0x661f,	// (0x000550de) ai_links_pane_g1

0x6628,	// (0x000550e7) grid_ai_links_pane

0xdc9b,	// (0x0005c75a) ai_gene_pane_1

0x660d,	// (0x000550cc) ai_gene_pane_2

0x6616,	// (0x000550d5) list_highlight_pane_cp4

0xdc77,	// (0x0005c736) cell_ai_link_pane_ParamLimits

0xdc77,	// (0x0005c736) cell_ai_link_pane

0x65de,	// (0x0005509d) cell_ai_link_pane_g1

0x3b59,	// (0x00052618) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0005e3d6) cell_ai_link_pane_g

0x365c,	// (0x0005211b) grid_highlight_cp2

0x365c,	// (0x0005211b) bg_popup_sub_pane_cp1

0x3943,	// (0x00052402) popup_ai_links_title_window_t1

0x652c,	// (0x00054feb) ai_gene_pane_1_g1_ParamLimits

0x652c,	// (0x00054feb) ai_gene_pane_1_g1

0x6538,	// (0x00054ff7) ai_gene_pane_1_g2_ParamLimits

0x6538,	// (0x00054ff7) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0005e3cc) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0005e3cc) ai_gene_pane_1_g

0x6545,	// (0x00055004) ai_gene_pane_1_t1_ParamLimits

0x6545,	// (0x00055004) ai_gene_pane_1_t1

0x6579,	// (0x00055038) grid_ai_soft_ind_pane

0x6517,	// (0x00054fd6) ai_gene_pane_2_t1_ParamLimits

0x6517,	// (0x00054fd6) ai_gene_pane_2_t1

0xd18d,	// (0x0005bc4c) main_pane_empty_t1_ParamLimits

0xd18d,	// (0x0005bc4c) main_pane_empty_t1

0xd1a5,	// (0x0005bc64) main_pane_empty_t2_ParamLimits

0xd1a5,	// (0x0005bc64) main_pane_empty_t2

0xd1ba,	// (0x0005bc79) main_pane_empty_t3_ParamLimits

0xd1ba,	// (0x0005bc79) main_pane_empty_t3

0xd1cc,	// (0x0005bc8b) main_pane_empty_t4_ParamLimits

0xd1cc,	// (0x0005bc8b) main_pane_empty_t4

0xd1de,	// (0x0005bc9d) main_pane_empty_t5_ParamLimits

0xd1de,	// (0x0005bc9d) main_pane_empty_t5

0x0004,

0xf574,	// (0x0005e033) main_pane_empty_t_ParamLimits

0xf574,	// (0x0005e033) main_pane_empty_t

0x4054,	// (0x00052b13) bg_popup_window_pane_ParamLimits

0x4054,	// (0x00052b13) bg_popup_window_pane

0x6287,	// (0x00054d46) find_popup_pane_cp2_ParamLimits

0x6287,	// (0x00054d46) find_popup_pane_cp2

0x6293,	// (0x00054d52) heading_pane_ParamLimits

0x6293,	// (0x00054d52) heading_pane

0x365c,	// (0x0005211b) bg_popup_sub_pane

0xdbf8,	// (0x0005c6b7) bg_popup_window_pane_g1_ParamLimits

0xdbf8,	// (0x0005c6b7) bg_popup_window_pane_g1

0xdc07,	// (0x0005c6c6) bg_popup_window_pane_g2_ParamLimits

0xdc07,	// (0x0005c6c6) bg_popup_window_pane_g2

0xdc13,	// (0x0005c6d2) bg_popup_window_pane_g3_ParamLimits

0xdc13,	// (0x0005c6d2) bg_popup_window_pane_g3

0xdc1f,	// (0x0005c6de) bg_popup_window_pane_g4_ParamLimits

0xdc1f,	// (0x0005c6de) bg_popup_window_pane_g4

0xdc2e,	// (0x0005c6ed) bg_popup_window_pane_g5_ParamLimits

0xdc2e,	// (0x0005c6ed) bg_popup_window_pane_g5

0xdc3e,	// (0x0005c6fd) bg_popup_window_pane_g6_ParamLimits

0xdc3e,	// (0x0005c6fd) bg_popup_window_pane_g6

0xdc4a,	// (0x0005c709) bg_popup_window_pane_g7_ParamLimits

0xdc4a,	// (0x0005c709) bg_popup_window_pane_g7

0xdc59,	// (0x0005c718) bg_popup_window_pane_g8_ParamLimits

0xdc59,	// (0x0005c718) bg_popup_window_pane_g8

0xdc68,	// (0x0005c727) bg_popup_window_pane_g9_ParamLimits

0xdc68,	// (0x0005c727) bg_popup_window_pane_g9

0x626d,	// (0x00054d2c) bg_popup_window_pane_g10_ParamLimits

0x626d,	// (0x00054d2c) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0005e394) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0005e394) bg_popup_window_pane_g

0x6196,	// (0x00054c55) bg_popup_heading_pane_ParamLimits

0x6196,	// (0x00054c55) bg_popup_heading_pane

0x1b6e,	// (0x0005062d) tabs_4_passive_pane_cp_srt_ParamLimits

0x1b6e,	// (0x0005062d) tabs_4_passive_pane_cp_srt

0x1b80,	// (0x0005063f) tabs_4_passive_pane_srt_ParamLimits

0x61aa,	// (0x00054c69) heading_pane_g2

0x1b80,	// (0x0005063f) tabs_4_passive_pane_srt

0x551b,	// (0x00053fda) bg_passive_tab_pane_cp3_srt_ParamLimits

0x551b,	// (0x00053fda) bg_passive_tab_pane_cp3_srt

0x61b2,	// (0x00054c71) heading_pane_t1_ParamLimits

0x61b2,	// (0x00054c71) heading_pane_t1

0x61c9,	// (0x00054c88) heading_pane_t2_ParamLimits

0x61c9,	// (0x00054c88) heading_pane_t2

0x0001,

0xf8d0,	// (0x0005e38f) heading_pane_t_ParamLimits

0xf8d0,	// (0x0005e38f) heading_pane_t

0x5cc3,	// (0x00054782) bg_popup_heading_pane_g1

0x5d72,	// (0x00054831) bg_popup_heading_pane_g2

0x5d7c,	// (0x0005483b) bg_popup_heading_pane_g3

0x5d86,	// (0x00054845) bg_popup_heading_pane_g4

0x5d90,	// (0x0005484f) bg_popup_heading_pane_g5

0x5d9a,	// (0x00054859) bg_popup_heading_pane_g6

0x5da2,	// (0x00054861) bg_popup_heading_pane_g7

0x5daa,	// (0x00054869) bg_popup_heading_pane_g8

0x5db4,	// (0x00054873) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0005e34b) bg_popup_heading_pane_g

0x54a7,	// (0x00053f66) bg_popup_sub_pane_g1

0x54b7,	// (0x00053f76) bg_popup_sub_pane_g2

0x54af,	// (0x00053f6e) bg_popup_sub_pane_g3

0x54c7,	// (0x00053f86) bg_popup_sub_pane_g4

0x54bf,	// (0x00053f7e) bg_popup_sub_pane_g5

0x54cf,	// (0x00053f8e) bg_popup_sub_pane_g6

0x54d7,	// (0x00053f96) bg_popup_sub_pane_g7

0x54e7,	// (0x00053fa6) bg_popup_sub_pane_g8

0x54df,	// (0x00053f9e) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0005e325) bg_popup_sub_pane_g

0x39b7,	// (0x00052476) bg_popup_window_pane_cp5_ParamLimits

0x39b7,	// (0x00052476) bg_popup_window_pane_cp5

0x39d3,	// (0x00052492) popup_note_window_g1_ParamLimits

0x39d3,	// (0x00052492) popup_note_window_g1

0x39df,	// (0x0005249e) popup_note_window_t1_ParamLimits

0x39df,	// (0x0005249e) popup_note_window_t1

0x39f5,	// (0x000524b4) popup_note_window_t2_ParamLimits

0x39f5,	// (0x000524b4) popup_note_window_t2

0x3a0b,	// (0x000524ca) popup_note_window_t3_ParamLimits

0x3a0b,	// (0x000524ca) popup_note_window_t3

0x3a21,	// (0x000524e0) popup_note_window_t4_ParamLimits

0x3a21,	// (0x000524e0) popup_note_window_t4

0x3a49,	// (0x00052508) popup_note_window_t5_ParamLimits

0x3a49,	// (0x00052508) popup_note_window_t5

0x0004,

0xf57f,	// (0x0005e03e) popup_note_window_t_ParamLimits

0xf57f,	// (0x0005e03e) popup_note_window_t

0x3a6d,	// (0x0005252c) bg_popup_window_pane_cp6_ParamLimits

0x3a6d,	// (0x0005252c) bg_popup_window_pane_cp6

0x5c3f,	// (0x000546fe) popup_note_image_window_g1_ParamLimits

0x5c3f,	// (0x000546fe) popup_note_image_window_g1

0x5c4b,	// (0x0005470a) popup_note_image_window_g2_ParamLimits

0x5c4b,	// (0x0005470a) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0005e319) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0005e319) popup_note_image_window_g

0x5c64,	// (0x00054723) popup_note_image_window_t1_ParamLimits

0x5c64,	// (0x00054723) popup_note_image_window_t1

0x5c7d,	// (0x0005473c) popup_note_image_window_t2_ParamLimits

0x5c7d,	// (0x0005473c) popup_note_image_window_t2

0x5c96,	// (0x00054755) popup_note_image_window_t3_ParamLimits

0x5c96,	// (0x00054755) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0005e31e) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0005e31e) popup_note_image_window_t

0x5b00,	// (0x000545bf) bg_popup_window_pane_cp7_ParamLimits

0x5b00,	// (0x000545bf) bg_popup_window_pane_cp7

0x5b30,	// (0x000545ef) popup_note_wait_window_g1_ParamLimits

0x5b30,	// (0x000545ef) popup_note_wait_window_g1

0x5b3c,	// (0x000545fb) popup_note_wait_window_g2_ParamLimits

0x5b3c,	// (0x000545fb) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0005e307) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0005e307) popup_note_wait_window_g

0x5b54,	// (0x00054613) popup_note_wait_window_t1_ParamLimits

0x5b54,	// (0x00054613) popup_note_wait_window_t1

0x5b7b,	// (0x0005463a) popup_note_wait_window_t2_ParamLimits

0x5b7b,	// (0x0005463a) popup_note_wait_window_t2

0x5b98,	// (0x00054657) popup_note_wait_window_t3_ParamLimits

0x5b98,	// (0x00054657) popup_note_wait_window_t3

0x5bab,	// (0x0005466a) popup_note_wait_window_t4_ParamLimits

0x5bab,	// (0x0005466a) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0005e30e) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0005e30e) popup_note_wait_window_t

0x5bd0,	// (0x0005468f) wait_bar_pane_ParamLimits

0x5bd0,	// (0x0005468f) wait_bar_pane

0x365c,	// (0x0005211b) wait_anim_pane

0x365c,	// (0x0005211b) wait_border_pane

0x3652,	// (0x00052111) wait_anim_pane_g1

0x3652,	// (0x00052111) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0005e1c7) wait_anim_pane_g

0x5aa4,	// (0x00054563) wait_border_pane_g1

0x5aaf,	// (0x0005456e) wait_border_pane_g2

0x5ab8,	// (0x00054577) wait_border_pane_g3

0x0002,

0xf841,	// (0x0005e300) wait_border_pane_g

0x590f,	// (0x000543ce) bg_popup_window_pane_cp16_ParamLimits

0x590f,	// (0x000543ce) bg_popup_window_pane_cp16

0x5a0f,	// (0x000544ce) indicator_popup_pane_cp4_ParamLimits

0x5a0f,	// (0x000544ce) indicator_popup_pane_cp4

0x5a23,	// (0x000544e2) popup_query_data_window_t1_ParamLimits

0x5a23,	// (0x000544e2) popup_query_data_window_t1

0x5a35,	// (0x000544f4) popup_query_data_window_t2_ParamLimits

0x5a35,	// (0x000544f4) popup_query_data_window_t2

0x5a4e,	// (0x0005450d) popup_query_data_window_t3_ParamLimits

0x5a4e,	// (0x0005450d) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0005e2f9) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0005e2f9) popup_query_data_window_t

0x5a68,	// (0x00054527) query_popup_data_pane_ParamLimits

0x5a68,	// (0x00054527) query_popup_data_pane

0x5a7c,	// (0x0005453b) query_popup_data_pane_cp1_ParamLimits

0x5a7c,	// (0x0005453b) query_popup_data_pane_cp1

0x590f,	// (0x000543ce) bg_popup_window_pane_cp10_ParamLimits

0x590f,	// (0x000543ce) bg_popup_window_pane_cp10

0x5941,	// (0x00054400) indicator_popup_pane_ParamLimits

0x5941,	// (0x00054400) indicator_popup_pane

0x5963,	// (0x00054422) popup_query_code_window_t1_ParamLimits

0x5963,	// (0x00054422) popup_query_code_window_t1

0x597d,	// (0x0005443c) popup_query_code_window_t2_ParamLimits

0x597d,	// (0x0005443c) popup_query_code_window_t2

0x59c6,	// (0x00054485) popup_query_code_window_t3_ParamLimits

0x59c6,	// (0x00054485) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0005e2f2) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0005e2f2) popup_query_code_window_t

0x59f5,	// (0x000544b4) query_popup_pane_ParamLimits

0x59f5,	// (0x000544b4) query_popup_pane

0x3a6d,	// (0x0005252c) bg_popup_window_pane_cp15_ParamLimits

0x3a6d,	// (0x0005252c) bg_popup_window_pane_cp15

0x3a8b,	// (0x0005254a) indicator_popup_pane_cp1_ParamLimits

0x3a8b,	// (0x0005254a) indicator_popup_pane_cp1

0x3a9e,	// (0x0005255d) indicator_popup_pane_cp2_ParamLimits

0x3a9e,	// (0x0005255d) indicator_popup_pane_cp2

0x3ab1,	// (0x00052570) popup_query_data_code_window_g1_ParamLimits

0x3ab1,	// (0x00052570) popup_query_data_code_window_g1

0x3ac4,	// (0x00052583) popup_query_data_code_window_t1_ParamLimits

0x3ac4,	// (0x00052583) popup_query_data_code_window_t1

0x3ad6,	// (0x00052595) popup_query_data_code_window_t2_ParamLimits

0x3ad6,	// (0x00052595) popup_query_data_code_window_t2

0x3ae8,	// (0x000525a7) popup_query_data_code_window_t3_ParamLimits

0x3ae8,	// (0x000525a7) popup_query_data_code_window_t3

0x3afe,	// (0x000525bd) popup_query_data_code_window_t4_ParamLimits

0x3afe,	// (0x000525bd) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0005e049) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0005e049) popup_query_data_code_window_t

0x17d7,	// (0x00050296) list_single_midp_graphic_pane_g3

0x3b16,	// (0x000525d5) query_popup_data_pane_cp2_ParamLimits

0x3b29,	// (0x000525e8) query_popup_pane_cp2_ParamLimits

0x3b29,	// (0x000525e8) query_popup_pane_cp2

0x365c,	// (0x0005211b) bg_popup_window_pane_cp11

0x5907,	// (0x000543c6) heading_pane_cp5

0x3c14,	// (0x000526d3) listscroll_popup_info_pane

0x365c,	// (0x0005211b) input_focus_pane_cp3

0x3b3c,	// (0x000525fb) query_popup_pane_t1

0x3b4a,	// (0x00052609) list_popup_info_pane_ParamLimits

0x3b4a,	// (0x00052609) list_popup_info_pane

0x3b59,	// (0x00052618) listscroll_popup_info_pane_g1

0x3b61,	// (0x00052620) scroll_pane_cp7

0x3b6b,	// (0x0005262a) popup_info_list_pane_t1_ParamLimits

0x3b6b,	// (0x0005262a) popup_info_list_pane_t1

0x3b85,	// (0x00052644) popup_info_list_pane_t2_ParamLimits

0x3b85,	// (0x00052644) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0005e052) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0005e052) popup_info_list_pane_t

0x365c,	// (0x0005211b) bg_popup_window_pane_cp12

0x6c2c,	// (0x000556eb) find_popup_pane

0x373c,	// (0x000521fb) bg_popup_window_pane_cp3

0x3b9f,	// (0x0005265e) heading_pane_cp3

0x3bab,	// (0x0005266a) listscroll_popup_graphic_pane

0x365c,	// (0x0005211b) bg_popup_window_pane_cp4

0xd240,	// (0x0005bcff) heading_pane_cp4

0x3c14,	// (0x000526d3) listscroll_popup_colour_pane

0x3c1c,	// (0x000526db) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3c1c,	// (0x000526db) cell_large_graphic_colour_none_popup_pane

0xd248,	// (0x0005bd07) grid_large_graphic_colour_popup_pane_ParamLimits

0xd248,	// (0x0005bd07) grid_large_graphic_colour_popup_pane

0x3c5c,	// (0x0005271b) listscroll_popup_colour_pane_g1_ParamLimits

0x3c5c,	// (0x0005271b) listscroll_popup_colour_pane_g1

0x3c73,	// (0x00052732) listscroll_popup_colour_pane_g2_ParamLimits

0x3c73,	// (0x00052732) listscroll_popup_colour_pane_g2

0x3c8a,	// (0x00052749) listscroll_popup_colour_pane_g3_ParamLimits

0x3c8a,	// (0x00052749) listscroll_popup_colour_pane_g3

0xd26c,	// (0x0005bd2b) listscroll_popup_colour_pane_g4_ParamLimits

0xd26c,	// (0x0005bd2b) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0005e057) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0005e057) listscroll_popup_colour_pane_g

0x3cae,	// (0x0005276d) scroll_pane_cp6_ParamLimits

0x3cae,	// (0x0005276d) scroll_pane_cp6

0xd27c,	// (0x0005bd3b) cell_large_graphic_colour_popup_pane_ParamLimits

0xd27c,	// (0x0005bd3b) cell_large_graphic_colour_popup_pane

0x3cdf,	// (0x0005279e) cell_large_graphic_colour_none_popup_pane_t1

0x365c,	// (0x0005211b) grid_highlight_pane_cp5

0x3cee,	// (0x000527ad) cell_large_graphic_colour_popup_pane_g1

0x3cf6,	// (0x000527b5) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0005e060) cell_large_graphic_colour_popup_pane_g

0x3cfe,	// (0x000527bd) cell_large_graphic_colour_popup_pane_g2_copy1

0x3d07,	// (0x000527c6) grid_highlight_pane_cp4

0x3d0f,	// (0x000527ce) bg_popup_window_pane_cp8_ParamLimits

0x3d0f,	// (0x000527ce) bg_popup_window_pane_cp8

0x3d2a,	// (0x000527e9) popup_snote_single_text_window_g1_ParamLimits

0x3d2a,	// (0x000527e9) popup_snote_single_text_window_g1

0x3d3c,	// (0x000527fb) popup_snote_single_text_window_t1_ParamLimits

0x3d3c,	// (0x000527fb) popup_snote_single_text_window_t1

0x3d4f,	// (0x0005280e) popup_snote_single_text_window_t2_ParamLimits

0x3d4f,	// (0x0005280e) popup_snote_single_text_window_t2

0x3d62,	// (0x00052821) popup_snote_single_text_window_t3_ParamLimits

0x3d62,	// (0x00052821) popup_snote_single_text_window_t3

0x3d9b,	// (0x0005285a) popup_snote_single_text_window_t4_ParamLimits

0x3d9b,	// (0x0005285a) popup_snote_single_text_window_t4

0x3dcf,	// (0x0005288e) popup_snote_single_text_window_t5_ParamLimits

0x3dcf,	// (0x0005288e) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0005e065) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0005e065) popup_snote_single_text_window_t

0x3dfe,	// (0x000528bd) bg_popup_window_pane_cp9_ParamLimits

0x3dfe,	// (0x000528bd) bg_popup_window_pane_cp9

0x3d2a,	// (0x000527e9) popup_snote_single_graphic_window_g1_ParamLimits

0x3d2a,	// (0x000527e9) popup_snote_single_graphic_window_g1

0x3e0c,	// (0x000528cb) popup_snote_single_graphic_window_g2_ParamLimits

0x3e0c,	// (0x000528cb) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0005e070) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0005e070) popup_snote_single_graphic_window_g

0x3e18,	// (0x000528d7) popup_snote_single_graphic_window_t1_ParamLimits

0x3e18,	// (0x000528d7) popup_snote_single_graphic_window_t1

0x3e2b,	// (0x000528ea) popup_snote_single_graphic_window_t2_ParamLimits

0x3e2b,	// (0x000528ea) popup_snote_single_graphic_window_t2

0x3e3e,	// (0x000528fd) popup_snote_single_graphic_window_t3_ParamLimits

0x3e3e,	// (0x000528fd) popup_snote_single_graphic_window_t3

0x3e77,	// (0x00052936) popup_snote_single_graphic_window_t4_ParamLimits

0x3e77,	// (0x00052936) popup_snote_single_graphic_window_t4

0x3eab,	// (0x0005296a) popup_snote_single_graphic_window_t5_ParamLimits

0x3eab,	// (0x0005296a) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0005e075) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0005e075) popup_snote_single_graphic_window_t

0x6b6e,	// (0x0005562d) grid_graphic_popup_pane_ParamLimits

0x6b6e,	// (0x0005562d) grid_graphic_popup_pane

0x6b98,	// (0x00055657) listscroll_popup_graphic_pane_g1_ParamLimits

0x6b98,	// (0x00055657) listscroll_popup_graphic_pane_g1

0xdf61,	// (0x0005ca20) listscroll_popup_graphic_pane_g2_ParamLimits

0xdf61,	// (0x0005ca20) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0005e46f) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0005e46f) listscroll_popup_graphic_pane_g

0x6bc0,	// (0x0005567f) scroll_pane_cp5

0xdf06,	// (0x0005c9c5) cell_graphic_popup_pane_ParamLimits

0xdf06,	// (0x0005c9c5) cell_graphic_popup_pane

0x6aee,	// (0x000555ad) cell_graphic_popup_pane_g1

0x6af6,	// (0x000555b5) cell_graphic_popup_pane_g2

0x3cfe,	// (0x000527bd) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0005e468) cell_graphic_popup_pane_g

0x6aff,	// (0x000555be) cell_graphic_popup_pane_t2

0x3d07,	// (0x000527c6) grid_highlight_pane_cp3

0x3eec,	// (0x000529ab) list_gen_pane_ParamLimits

0x3eec,	// (0x000529ab) list_gen_pane

0x3f1e,	// (0x000529dd) scroll_pane

0xdebd,	// (0x0005c97c) bg_list_pane_g1_ParamLimits

0xdebd,	// (0x0005c97c) bg_list_pane_g1

0x6a63,	// (0x00055522) bg_list_pane_g2_ParamLimits

0x6a63,	// (0x00055522) bg_list_pane_g2

0x6a78,	// (0x00055537) bg_list_pane_g3_ParamLimits

0x6a78,	// (0x00055537) bg_list_pane_g3

0x6a8c,	// (0x0005554b) bg_list_pane_g4_ParamLimits

0x6a8c,	// (0x0005554b) bg_list_pane_g4

0xdeda,	// (0x0005c999) bg_list_pane_g5_ParamLimits

0xdeda,	// (0x0005c999) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0005e45d) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0005e45d) bg_list_pane_g

0xde85,	// (0x0005c944) list_double2_graphic_large_graphic_pane_ParamLimits

0xde85,	// (0x0005c944) list_double2_graphic_large_graphic_pane

0xde85,	// (0x0005c944) list_double2_graphic_pane_ParamLimits

0xde85,	// (0x0005c944) list_double2_graphic_pane

0xde85,	// (0x0005c944) list_double2_large_graphic_pane_ParamLimits

0xde85,	// (0x0005c944) list_double2_large_graphic_pane

0xde85,	// (0x0005c944) list_double2_pane_ParamLimits

0xde85,	// (0x0005c944) list_double2_pane

0xde85,	// (0x0005c944) list_double_graphic_heading_pane_ParamLimits

0xde85,	// (0x0005c944) list_double_graphic_heading_pane

0xde85,	// (0x0005c944) list_double_graphic_pane_ParamLimits

0xde85,	// (0x0005c944) list_double_graphic_pane

0xde85,	// (0x0005c944) list_double_heading_pane_ParamLimits

0xde85,	// (0x0005c944) list_double_heading_pane

0xde85,	// (0x0005c944) list_double_large_graphic_pane_ParamLimits

0xde85,	// (0x0005c944) list_double_large_graphic_pane

0xde85,	// (0x0005c944) list_double_number_pane_ParamLimits

0xde85,	// (0x0005c944) list_double_number_pane

0xde85,	// (0x0005c944) list_double_pane_ParamLimits

0xde85,	// (0x0005c944) list_double_pane

0xde85,	// (0x0005c944) list_double_time_pane_ParamLimits

0xde85,	// (0x0005c944) list_double_time_pane

0xde85,	// (0x0005c944) list_setting_number_pane_ParamLimits

0xde85,	// (0x0005c944) list_setting_number_pane

0xde85,	// (0x0005c944) list_setting_pane_ParamLimits

0xde85,	// (0x0005c944) list_setting_pane

0xde97,	// (0x0005c956) list_single_2graphic_pane_ParamLimits

0xde97,	// (0x0005c956) list_single_2graphic_pane

0xde97,	// (0x0005c956) list_single_graphic_heading_pane_ParamLimits

0xde97,	// (0x0005c956) list_single_graphic_heading_pane

0xde97,	// (0x0005c956) list_single_graphic_pane_ParamLimits

0xde97,	// (0x0005c956) list_single_graphic_pane

0xde97,	// (0x0005c956) list_single_heading_pane_ParamLimits

0xde97,	// (0x0005c956) list_single_heading_pane

0xde85,	// (0x0005c944) list_single_large_graphic_pane_ParamLimits

0xde85,	// (0x0005c944) list_single_large_graphic_pane

0xde97,	// (0x0005c956) list_single_number_heading_pane_ParamLimits

0xde97,	// (0x0005c956) list_single_number_heading_pane

0xde97,	// (0x0005c956) list_single_number_pane_ParamLimits

0xde97,	// (0x0005c956) list_single_number_pane

0xde97,	// (0x0005c956) list_single_pane_ParamLimits

0xde97,	// (0x0005c956) list_single_pane

0x365c,	// (0x0005211b) list_highlight_pane_cp1

0x4b7b,	// (0x0005363a) list_single_pane_g1_ParamLimits

0x4b7b,	// (0x0005363a) list_single_pane_g1

0x2d01,	// (0x000517c0) list_single_pane_g2_ParamLimits

0x2d01,	// (0x000517c0) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0005e091) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0005e091) list_single_pane_g

0x2fbc,	// (0x00051a7b) list_single_pane_t1_ParamLimits

0x2fbc,	// (0x00051a7b) list_single_pane_t1

0x4b7b,	// (0x0005363a) list_single_number_pane_g1_ParamLimits

0x4b7b,	// (0x0005363a) list_single_number_pane_g1

0x2d01,	// (0x000517c0) list_single_number_pane_g2_ParamLimits

0x2d01,	// (0x000517c0) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0005e091) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0005e091) list_single_number_pane_g

0x179c,	// (0x0005025b) list_single_number_pane_t1_ParamLimits

0x179c,	// (0x0005025b) list_single_number_pane_t1

0xc7cc,	// (0x0005b28b) list_single_number_pane_t2_ParamLimits

0xc7cc,	// (0x0005b28b) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0005e41e) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0005e41e) list_single_number_pane_t

0xb8ba,	// (0x0005a379) list_single_graphic_pane_g1_ParamLimits

0xb8ba,	// (0x0005a379) list_single_graphic_pane_g1

0x4b7b,	// (0x0005363a) list_single_graphic_pane_g2_ParamLimits

0x4b7b,	// (0x0005363a) list_single_graphic_pane_g2

0x2d01,	// (0x000517c0) list_single_graphic_pane_g3_ParamLimits

0x2d01,	// (0x000517c0) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0005e080) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0005e080) list_single_graphic_pane_g

0xb8c6,	// (0x0005a385) list_single_graphic_pane_t1_ParamLimits

0xb8c6,	// (0x0005a385) list_single_graphic_pane_t1

0xb8dc,	// (0x0005a39b) list_single_heading_pane_g1_ParamLimits

0xb8dc,	// (0x0005a39b) list_single_heading_pane_g1

0x2d01,	// (0x000517c0) list_single_heading_pane_g2_ParamLimits

0x2d01,	// (0x000517c0) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0005e087) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0005e087) list_single_heading_pane_g

0xb8ef,	// (0x0005a3ae) list_single_heading_pane_t1_ParamLimits

0xb8ef,	// (0x0005a3ae) list_single_heading_pane_t1

0xd2a5,	// (0x0005bd64) list_single_heading_pane_t2_ParamLimits

0xd2a5,	// (0x0005bd64) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0005e08c) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0005e08c) list_single_heading_pane_t

0x4b7b,	// (0x0005363a) list_single_number_heading_pane_g1_ParamLimits

0x4b7b,	// (0x0005363a) list_single_number_heading_pane_g1

0x2d01,	// (0x000517c0) list_single_number_heading_pane_g2_ParamLimits

0x2d01,	// (0x000517c0) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0005e091) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0005e091) list_single_number_heading_pane_g

0xb905,	// (0x0005a3c4) list_single_number_heading_pane_t1_ParamLimits

0xb905,	// (0x0005a3c4) list_single_number_heading_pane_t1

0x2f86,	// (0x00051a45) list_single_number_heading_pane_t2_ParamLimits

0x2f86,	// (0x00051a45) list_single_number_heading_pane_t2

0x2f98,	// (0x00051a57) list_single_number_heading_pane_t3_ParamLimits

0x2f98,	// (0x00051a57) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0005e096) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0005e096) list_single_number_heading_pane_t

0xb91b,	// (0x0005a3da) list_single_graphic_heading_pane_g1_ParamLimits

0xb91b,	// (0x0005a3da) list_single_graphic_heading_pane_g1

0xd2b7,	// (0x0005bd76) list_single_graphic_heading_pane_g4_ParamLimits

0xd2b7,	// (0x0005bd76) list_single_graphic_heading_pane_g4

0x2d01,	// (0x000517c0) list_single_graphic_heading_pane_g5_ParamLimits

0x2d01,	// (0x000517c0) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0005e09d) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0005e09d) list_single_graphic_heading_pane_g

0xb905,	// (0x0005a3c4) list_single_graphic_heading_pane_t1_ParamLimits

0xb905,	// (0x0005a3c4) list_single_graphic_heading_pane_t1

0xb933,	// (0x0005a3f2) list_single_graphic_heading_pane_t2_ParamLimits

0xb933,	// (0x0005a3f2) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0005e0a4) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0005e0a4) list_single_graphic_heading_pane_t

0x2fd2,	// (0x00051a91) list_single_large_graphic_pane_g1_ParamLimits

0x2fd2,	// (0x00051a91) list_single_large_graphic_pane_g1

0x2fde,	// (0x00051a9d) list_single_large_graphic_pane_g2_ParamLimits

0x2fde,	// (0x00051a9d) list_single_large_graphic_pane_g2

0x2fea,	// (0x00051aa9) list_single_large_graphic_pane_g3_ParamLimits

0x2fea,	// (0x00051aa9) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0005e0a9) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0005e0a9) list_single_large_graphic_pane_g

0x5aaf,	// (0x0005456e) wait_border_pane_g2_copy1

0x2c90,	// (0x0005174f) list_single_large_graphic_pane_g4_cp2

0x2ff6,	// (0x00051ab5) list_single_large_graphic_pane_t1_ParamLimits

0x2ff6,	// (0x00051ab5) list_single_large_graphic_pane_t1

0x4a66,	// (0x00053525) list_double_pane_g1_ParamLimits

0x4a66,	// (0x00053525) list_double_pane_g1

0xd2c8,	// (0x0005bd87) list_double_pane_g2_ParamLimits

0xd2c8,	// (0x0005bd87) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0005e0b0) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0005e0b0) list_double_pane_g

0xb949,	// (0x0005a408) list_double_pane_t1_ParamLimits

0xb949,	// (0x0005a408) list_double_pane_t1

0xb95f,	// (0x0005a41e) list_double_pane_t2_ParamLimits

0xb95f,	// (0x0005a41e) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0005e0b5) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0005e0b5) list_double_pane_t

0xb971,	// (0x0005a430) list_double2_pane_g1_ParamLimits

0xb971,	// (0x0005a430) list_double2_pane_g1

0xb982,	// (0x0005a441) list_double2_pane_g2_ParamLimits

0xb982,	// (0x0005a441) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0005e0ba) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0005e0ba) list_double2_pane_g

0xb98e,	// (0x0005a44d) list_double2_pane_t1_ParamLimits

0xb98e,	// (0x0005a44d) list_double2_pane_t1

0xb9a4,	// (0x0005a463) list_double2_pane_t2_ParamLimits

0xb9a4,	// (0x0005a463) list_double2_pane_t2

0x0001,

0xf600,	// (0x0005e0bf) list_double2_pane_t_ParamLimits

0xf600,	// (0x0005e0bf) list_double2_pane_t

0x4a66,	// (0x00053525) list_double_number_pane_g1_ParamLimits

0x4a66,	// (0x00053525) list_double_number_pane_g1

0xd2c8,	// (0x0005bd87) list_double_number_pane_g2_ParamLimits

0xd2c8,	// (0x0005bd87) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0005e0b0) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0005e0b0) list_double_number_pane_g

0xb9b6,	// (0x0005a475) list_double_number_pane_t1_ParamLimits

0xb9b6,	// (0x0005a475) list_double_number_pane_t1

0xb9c8,	// (0x0005a487) list_double_number_pane_t2_ParamLimits

0xb9c8,	// (0x0005a487) list_double_number_pane_t2

0xb9de,	// (0x0005a49d) list_double_number_pane_t3_ParamLimits

0xb9de,	// (0x0005a49d) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0005e0c4) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0005e0c4) list_double_number_pane_t

0xb9f0,	// (0x0005a4af) list_double_graphic_pane_g1_ParamLimits

0xb9f0,	// (0x0005a4af) list_double_graphic_pane_g1

0xb9fc,	// (0x0005a4bb) list_double_graphic_pane_g2_ParamLimits

0xb9fc,	// (0x0005a4bb) list_double_graphic_pane_g2

0xba0b,	// (0x0005a4ca) list_double_graphic_pane_g3_ParamLimits

0xba0b,	// (0x0005a4ca) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0005e0cb) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0005e0cb) list_double_graphic_pane_g

0xba17,	// (0x0005a4d6) list_double_graphic_pane_t1_ParamLimits

0xba17,	// (0x0005a4d6) list_double_graphic_pane_t1

0xba2d,	// (0x0005a4ec) list_double_graphic_pane_t2_ParamLimits

0xba2d,	// (0x0005a4ec) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0005e0d4) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0005e0d4) list_double_graphic_pane_t

0xba3f,	// (0x0005a4fe) list_double2_graphic_pane_g1_ParamLimits

0xba3f,	// (0x0005a4fe) list_double2_graphic_pane_g1

0xba4b,	// (0x0005a50a) list_double2_graphic_pane_g2_ParamLimits

0xba4b,	// (0x0005a50a) list_double2_graphic_pane_g2

0xd2e0,	// (0x0005bd9f) list_double2_graphic_pane_g3_ParamLimits

0xd2e0,	// (0x0005bd9f) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0005e0d9) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0005e0d9) list_double2_graphic_pane_g

0xba57,	// (0x0005a516) list_double2_graphic_pane_t1_ParamLimits

0xba57,	// (0x0005a516) list_double2_graphic_pane_t1

0xba6d,	// (0x0005a52c) list_double2_graphic_pane_t2_ParamLimits

0xba6d,	// (0x0005a52c) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0005e0e0) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0005e0e0) list_double2_graphic_pane_t

0xba7f,	// (0x0005a53e) list_double_large_graphic_pane_g1_ParamLimits

0xba7f,	// (0x0005a53e) list_double_large_graphic_pane_g1

0xba9e,	// (0x0005a55d) list_double_large_graphic_pane_g2_ParamLimits

0xba9e,	// (0x0005a55d) list_double_large_graphic_pane_g2

0xd2c8,	// (0x0005bd87) list_double_large_graphic_pane_g3_ParamLimits

0xd2c8,	// (0x0005bd87) list_double_large_graphic_pane_g3

0xbab4,	// (0x0005a573) list_double_large_graphic_pane_g4_ParamLimits

0xbab4,	// (0x0005a573) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0005e0e5) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0005e0e5) list_double_large_graphic_pane_g

0xbac6,	// (0x0005a585) list_double_large_graphic_pane_t1_ParamLimits

0xbac6,	// (0x0005a585) list_double_large_graphic_pane_t1

0xbadf,	// (0x0005a59e) list_double_large_graphic_pane_t2_ParamLimits

0xbadf,	// (0x0005a59e) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0005e0f0) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0005e0f0) list_double_large_graphic_pane_t

0xbaf1,	// (0x0005a5b0) list_double2_large_graphic_pane_g1_ParamLimits

0xbaf1,	// (0x0005a5b0) list_double2_large_graphic_pane_g1

0xbafd,	// (0x0005a5bc) list_double2_large_graphic_pane_g2_ParamLimits

0xbafd,	// (0x0005a5bc) list_double2_large_graphic_pane_g2

0xd2e0,	// (0x0005bd9f) list_double2_large_graphic_pane_g3_ParamLimits

0xd2e0,	// (0x0005bd9f) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0005e0f5) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0005e0f5) list_double2_large_graphic_pane_g

0xbb0e,	// (0x0005a5cd) list_double2_large_graphic_pane_t1_ParamLimits

0xbb0e,	// (0x0005a5cd) list_double2_large_graphic_pane_t1

0xbb24,	// (0x0005a5e3) list_double2_large_graphic_pane_t2_ParamLimits

0xbb24,	// (0x0005a5e3) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0005e0fc) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0005e0fc) list_double2_large_graphic_pane_t

0xbb36,	// (0x0005a5f5) list_double_heading_pane_g1_ParamLimits

0xbb36,	// (0x0005a5f5) list_double_heading_pane_g1

0xbb47,	// (0x0005a606) list_double_heading_pane_g2_ParamLimits

0xbb47,	// (0x0005a606) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0005e101) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0005e101) list_double_heading_pane_g

0xbb53,	// (0x0005a612) list_double_heading_pane_t1_ParamLimits

0xbb53,	// (0x0005a612) list_double_heading_pane_t1

0xb9a4,	// (0x0005a463) list_double_heading_pane_t2_ParamLimits

0xb9a4,	// (0x0005a463) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0005e106) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0005e106) list_double_heading_pane_t

0xbb69,	// (0x0005a628) list_double_graphic_heading_pane_g1_ParamLimits

0xbb69,	// (0x0005a628) list_double_graphic_heading_pane_g1

0xbb36,	// (0x0005a5f5) list_double_graphic_heading_pane_g2_ParamLimits

0xbb36,	// (0x0005a5f5) list_double_graphic_heading_pane_g2

0xbb47,	// (0x0005a606) list_double_graphic_heading_pane_g3_ParamLimits

0xbb47,	// (0x0005a606) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0005e10b) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0005e10b) list_double_graphic_heading_pane_g

0xbb75,	// (0x0005a634) list_double_graphic_heading_pane_t1_ParamLimits

0xbb75,	// (0x0005a634) list_double_graphic_heading_pane_t1

0xba6d,	// (0x0005a52c) list_double_graphic_heading_pane_t2_ParamLimits

0xba6d,	// (0x0005a52c) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0005e112) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0005e112) list_double_graphic_heading_pane_t

0xbb8b,	// (0x0005a64a) list_double_time_pane_g1_ParamLimits

0xbb8b,	// (0x0005a64a) list_double_time_pane_g1

0xbb9c,	// (0x0005a65b) list_double_time_pane_g2_ParamLimits

0xbb9c,	// (0x0005a65b) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0005e117) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0005e117) list_double_time_pane_g

0xbba8,	// (0x0005a667) list_double_time_pane_t1_ParamLimits

0xbba8,	// (0x0005a667) list_double_time_pane_t1

0xbbbe,	// (0x0005a67d) list_double_time_pane_t2_ParamLimits

0xbbbe,	// (0x0005a67d) list_double_time_pane_t2

0xbbd0,	// (0x0005a68f) list_double_time_pane_t3_ParamLimits

0xbbd0,	// (0x0005a68f) list_double_time_pane_t3

0xbbe2,	// (0x0005a6a1) list_double_time_pane_t4_ParamLimits

0xbbe2,	// (0x0005a6a1) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0005e11c) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0005e11c) list_double_time_pane_t

0xbbf4,	// (0x0005a6b3) list_setting_pane_g1_ParamLimits

0xbbf4,	// (0x0005a6b3) list_setting_pane_g1

0xb982,	// (0x0005a441) list_setting_pane_g2_ParamLimits

0xb982,	// (0x0005a441) list_setting_pane_g2

0x0001,

0xf666,	// (0x0005e125) list_setting_pane_g_ParamLimits

0xf666,	// (0x0005e125) list_setting_pane_g

0xbc00,	// (0x0005a6bf) list_setting_pane_t1_ParamLimits

0xbc00,	// (0x0005a6bf) list_setting_pane_t1

0xbc1a,	// (0x0005a6d9) list_setting_pane_t2_ParamLimits

0xbc1a,	// (0x0005a6d9) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0005e12a) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0005e12a) list_setting_pane_t

0xbc59,	// (0x0005a718) set_value_pane_cp_ParamLimits

0xbc59,	// (0x0005a718) set_value_pane_cp

0xbc65,	// (0x0005a724) list_setting_number_pane_g1_ParamLimits

0xbc65,	// (0x0005a724) list_setting_number_pane_g1

0xbc71,	// (0x0005a730) list_setting_number_pane_g2_ParamLimits

0xbc71,	// (0x0005a730) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0005e131) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0005e131) list_setting_number_pane_g

0xbc7d,	// (0x0005a73c) list_setting_number_pane_t1_ParamLimits

0xbc7d,	// (0x0005a73c) list_setting_number_pane_t1

0xbc96,	// (0x0005a755) list_setting_number_pane_t2_ParamLimits

0xbc96,	// (0x0005a755) list_setting_number_pane_t2

0xbcb0,	// (0x0005a76f) list_setting_number_pane_t3_ParamLimits

0xbcb0,	// (0x0005a76f) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0005e136) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0005e136) list_setting_number_pane_t

0xbc59,	// (0x0005a718) set_value_pane_ParamLimits

0xbc59,	// (0x0005a718) set_value_pane

0x3f5e,	// (0x00052a1d) bg_set_opt_pane_ParamLimits

0x3f5e,	// (0x00052a1d) bg_set_opt_pane

0x08b5,	// (0x0004f374) set_value_pane_t1

0x3f7f,	// (0x00052a3e) slider_set_pane_cp3

0x3f88,	// (0x00052a47) volume_small_pane_cp

0x3f91,	// (0x00052a50) list_form_gen_pane

0x3f9a,	// (0x00052a59) scroll_pane_cp8

0xbcf3,	// (0x0005a7b2) form_field_data_pane_ParamLimits

0xbcf3,	// (0x0005a7b2) form_field_data_pane

0xbd0a,	// (0x0005a7c9) form_field_data_wide_pane_ParamLimits

0xbd0a,	// (0x0005a7c9) form_field_data_wide_pane

0xbd2a,	// (0x0005a7e9) form_field_popup_pane_ParamLimits

0xbd2a,	// (0x0005a7e9) form_field_popup_pane

0xbd42,	// (0x0005a801) form_field_popup_wide_pane_ParamLimits

0xbd42,	// (0x0005a801) form_field_popup_wide_pane

0x0951,	// (0x0004f410) form_field_slider_pane_ParamLimits

0x0951,	// (0x0004f410) form_field_slider_pane

0x0964,	// (0x0004f423) form_field_slider_wide_pane_ParamLimits

0x0964,	// (0x0004f423) form_field_slider_wide_pane

0x3fab,	// (0x00052a6a) data_form_pane

0xbd63,	// (0x0005a822) form_field_data_pane_t1

0x3fb7,	// (0x00052a76) input_focus_pane

0x0999,	// (0x0004f458) data_form_wide_pane

0x09b6,	// (0x0004f475) form_field_data_wide_pane_t1

0x3d1c,	// (0x000527db) input_focus_pane_cp6

0xbd7d,	// (0x0005a83c) form_field_popup_pane_t1

0x3fb7,	// (0x00052a76) input_focus_pane_cp7

0x3fd9,	// (0x00052a98) list_form_pane

0x09f8,	// (0x0004f4b7) form_field_popup_wide_pane_t1

0x3fb7,	// (0x00052a76) input_focus_pane_cp8

0x3fe5,	// (0x00052aa4) list_form_wide_pane

0xbd9f,	// (0x0005a85e) form_field_slider_pane_t1_ParamLimits

0xbd9f,	// (0x0005a85e) form_field_slider_pane_t1

0xbdb7,	// (0x0005a876) form_field_slider_pane_t2_ParamLimits

0xbdb7,	// (0x0005a876) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0005e146) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0005e146) form_field_slider_pane_t

0x39b7,	// (0x00052476) input_focus_pane_cp9_ParamLimits

0x39b7,	// (0x00052476) input_focus_pane_cp9

0xbdcc,	// (0x0005a88b) slider_cont_pane_ParamLimits

0xbdcc,	// (0x0005a88b) slider_cont_pane

0x3ff1,	// (0x00052ab0) form_field_slider_wide_pane_t1_ParamLimits

0x3ff1,	// (0x00052ab0) form_field_slider_wide_pane_t1

0x0a54,	// (0x0004f513) form_field_slider_wide_pane_t2_ParamLimits

0x0a54,	// (0x0004f513) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0005e14b) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0005e14b) form_field_slider_wide_pane_t

0x39b7,	// (0x00052476) input_focus_pane_cp10_ParamLimits

0x39b7,	// (0x00052476) input_focus_pane_cp10

0xbde0,	// (0x0005a89f) slider_cont_pane_cp1_ParamLimits

0xbde0,	// (0x0005a89f) slider_cont_pane_cp1

0xbdf4,	// (0x0005a8b3) slider_form_pane_cp

0x4003,	// (0x00052ac2) input_focus_pane_g1

0x400b,	// (0x00052aca) input_focus_pane_g2

0x4013,	// (0x00052ad2) input_focus_pane_g3

0x401b,	// (0x00052ada) input_focus_pane_g4

0x4023,	// (0x00052ae2) input_focus_pane_g5

0x402b,	// (0x00052aea) input_focus_pane_g6

0x4033,	// (0x00052af2) input_focus_pane_g7

0x403b,	// (0x00052afa) input_focus_pane_g8

0x4043,	// (0x00052b02) input_focus_pane_g9

0x3652,	// (0x00052111) input_focus_pane_g10

0x0009,

0xf691,	// (0x0005e150) input_focus_pane_g

0x5ab8,	// (0x00054577) wait_border_pane_g3_copy1

0xbdfc,	// (0x0005a8bb) data_form_pane_t1

0x3652,	// (0x00052111) wait_anim_pane_g1_copy1

0xc7de,	// (0x0005b29d) data_form_wide_pane_t1

0xbe15,	// (0x0005a8d4) list_form_graphic_pane_cp_ParamLimits

0xbe15,	// (0x0005a8d4) list_form_graphic_pane_cp

0x69d8,	// (0x00055497) slider_form_pane_g1

0x69e1,	// (0x000554a0) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0005e44e) slider_form_pane_g

0xbe26,	// (0x0005a8e5) list_form_graphic_pane_ParamLimits

0xbe26,	// (0x0005a8e5) list_form_graphic_pane

0x0ad2,	// (0x0004f591) list_form_graphic_pane_g1

0x0ada,	// (0x0004f599) list_form_graphic_pane_t1_ParamLimits

0x0ada,	// (0x0004f599) list_form_graphic_pane_t1

0x373c,	// (0x000521fb) list_highlight_pane_cp5_ParamLimits

0x373c,	// (0x000521fb) list_highlight_pane_cp5

0xbe38,	// (0x0005a8f7) find_pane_g1

0x404b,	// (0x00052b0a) input_find_pane

0xbe41,	// (0x0005a900) input_find_pane_g1_ParamLimits

0xbe41,	// (0x0005a900) input_find_pane_g1

0xbe4d,	// (0x0005a90c) input_find_pane_t1_ParamLimits

0xbe4d,	// (0x0005a90c) input_find_pane_t1

0xbe62,	// (0x0005a921) input_find_pane_t2_ParamLimits

0xbe62,	// (0x0005a921) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0005e165) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0005e165) input_find_pane_t

0x4054,	// (0x00052b13) input_focus_pane_cp5_ParamLimits

0x4054,	// (0x00052b13) input_focus_pane_cp5

0x406e,	// (0x00052b2d) bg_popup_window_pane_cp2_ParamLimits

0x406e,	// (0x00052b2d) bg_popup_window_pane_cp2

0x407b,	// (0x00052b3a) listscroll_menu_pane_ParamLimits

0x407b,	// (0x00052b3a) listscroll_menu_pane

0xd2f8,	// (0x0005bdb7) popup_submenu_window_ParamLimits

0xd2f8,	// (0x0005bdb7) popup_submenu_window

0x40b3,	// (0x00052b72) find_popup_pane_g1

0x40bb,	// (0x00052b7a) input_popup_find_pane_cp

0x4054,	// (0x00052b13) input_focus_pane_cp4_ParamLimits

0x4054,	// (0x00052b13) input_focus_pane_cp4

0x40d1,	// (0x00052b90) input_popup_find_pane_t1_ParamLimits

0x40d1,	// (0x00052b90) input_popup_find_pane_t1

0x365c,	// (0x0005211b) bg_popup_sub_pane_cp

0x40ff,	// (0x00052bbe) listscroll_popup_sub_pane

0x4107,	// (0x00052bc6) list_submenu_pane_ParamLimits

0x4107,	// (0x00052bc6) list_submenu_pane

0x4118,	// (0x00052bd7) scroll_pane_cp4

0x4120,	// (0x00052bdf) list_single_popup_submenu_pane_ParamLimits

0x4120,	// (0x00052bdf) list_single_popup_submenu_pane

0x4134,	// (0x00052bf3) list_single_popup_submenu_pane_g1

0x413c,	// (0x00052bfb) list_single_popup_submenu_pane_t1_ParamLimits

0x413c,	// (0x00052bfb) list_single_popup_submenu_pane_t1

0x39b7,	// (0x00052476) bg_active_tab_pane_cp1_ParamLimits

0x39b7,	// (0x00052476) bg_active_tab_pane_cp1

0x4151,	// (0x00052c10) tabs_2_active_pane_g1

0xd332,	// (0x0005bdf1) tabs_2_active_pane_t1

0x39b7,	// (0x00052476) bg_passive_tab_pane_cp1_ParamLimits

0x39b7,	// (0x00052476) bg_passive_tab_pane_cp1

0x4151,	// (0x00052c10) tabs_2_passive_pane_g1

0xd332,	// (0x0005bdf1) tabs_2_passive_pane_t1

0x373c,	// (0x000521fb) bg_active_tab_pane_cp4

0xd344,	// (0x0005be03) tabs_2_long_active_pane_t1

0x4f91,	// (0x00053a50) bg_passive_tab_pane_cp4

0x17df,	// (0x0005029e) list_single_midp_graphic_pane_g4_ParamLimits

0x373c,	// (0x000521fb) bg_active_tab_pane_cp5

0xd357,	// (0x0005be16) tabs_3_long_active_pane_t1

0x4f91,	// (0x00053a50) bg_passive_tab_pane_cp5

0x17df,	// (0x0005029e) list_single_midp_graphic_pane_g4

0x373c,	// (0x000521fb) bg_popup_window_pane_cp13_ParamLimits

0x373c,	// (0x000521fb) bg_popup_window_pane_cp13

0x41b3,	// (0x00052c72) listscroll_popup_fast_pane_ParamLimits

0x41b3,	// (0x00052c72) listscroll_popup_fast_pane

0x41c2,	// (0x00052c81) grid_popup_fast_pane_ParamLimits

0x41c2,	// (0x00052c81) grid_popup_fast_pane

0x41d4,	// (0x00052c93) scroll_pane_cp9_ParamLimits

0x41d4,	// (0x00052c93) scroll_pane_cp9

0x8281,	// (0x00056d40) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8281,	// (0x00056d40) list_single_graphic_hl_pane_t1_cp2

0x41f8,	// (0x00052cb7) input_focus_pane_cp20_ParamLimits

0x41f8,	// (0x00052cb7) input_focus_pane_cp20

0x4206,	// (0x00052cc5) query_popup_data_pane_t1_ParamLimits

0x4206,	// (0x00052cc5) query_popup_data_pane_t1

0x4219,	// (0x00052cd8) query_popup_data_pane_t2_ParamLimits

0x4219,	// (0x00052cd8) query_popup_data_pane_t2

0x425f,	// (0x00052d1e) query_popup_data_pane_t3_ParamLimits

0x425f,	// (0x00052d1e) query_popup_data_pane_t3

0x42a0,	// (0x00052d5f) query_popup_data_pane_t4_ParamLimits

0x42a0,	// (0x00052d5f) query_popup_data_pane_t4

0x42dc,	// (0x00052d9b) query_popup_data_pane_t5_ParamLimits

0x42dc,	// (0x00052d9b) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0005e16a) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0005e16a) query_popup_data_pane_t

0x4003,	// (0x00052ac2) bg_set_opt_pane_g1

0x400b,	// (0x00052aca) bg_set_opt_pane_g2

0x4013,	// (0x00052ad2) bg_set_opt_pane_g3

0x401b,	// (0x00052ada) bg_set_opt_pane_g4

0x4023,	// (0x00052ae2) bg_set_opt_pane_g5

0x402b,	// (0x00052aea) bg_set_opt_pane_g6

0x4033,	// (0x00052af2) bg_set_opt_pane_g7

0x403b,	// (0x00052afa) bg_set_opt_pane_g8

0x4043,	// (0x00052b02) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0005e175) bg_set_opt_pane_g

0x0e39,	// (0x0004f8f8) control_top_pane_stacon_ParamLimits

0x0e39,	// (0x0004f8f8) control_top_pane_stacon

0x0e8c,	// (0x0004f94b) signal_pane_stacon_ParamLimits

0x0e8c,	// (0x0004f94b) signal_pane_stacon

0x48d0,	// (0x0005338f) stacon_top_pane_g1_ParamLimits

0x48d0,	// (0x0005338f) stacon_top_pane_g1

0x0eb1,	// (0x0004f970) title_pane_stacon_ParamLimits

0x0eb1,	// (0x0004f970) title_pane_stacon

0x0edb,	// (0x0004f99a) uni_indicator_pane_stacon_ParamLimits

0x0edb,	// (0x0004f99a) uni_indicator_pane_stacon

0x0ef0,	// (0x0004f9af) battery_pane_stacon_ParamLimits

0x0ef0,	// (0x0004f9af) battery_pane_stacon

0x0f34,	// (0x0004f9f3) control_bottom_pane_stacon_ParamLimits

0x0f34,	// (0x0004f9f3) control_bottom_pane_stacon

0x0f57,	// (0x0004fa16) navi_pane_stacon_ParamLimits

0x0f57,	// (0x0004fa16) navi_pane_stacon

0x48f2,	// (0x000533b1) stacon_bottom_pane_g1_ParamLimits

0x48f2,	// (0x000533b1) stacon_bottom_pane_g1

0x0b2e,	// (0x0004f5ed) aid_levels_signal_lsc_ParamLimits

0x0b2e,	// (0x0004f5ed) aid_levels_signal_lsc

0x0b44,	// (0x0004f603) signal_pane_stacon_g1_ParamLimits

0x0b44,	// (0x0004f603) signal_pane_stacon_g1

0x0b58,	// (0x0004f617) signal_pane_stacon_g2_ParamLimits

0x0b58,	// (0x0004f617) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0005e188) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0005e188) signal_pane_stacon_g

0x0b8d,	// (0x0004f64c) title_pane_stacon_t1_ParamLimits

0x0b8d,	// (0x0004f64c) title_pane_stacon_t1

0x4320,	// (0x00052ddf) uni_indicator_pane_stacon_g1

0x432a,	// (0x00052de9) uni_indicator_pane_stacon_g2

0x4334,	// (0x00052df3) uni_indicator_pane_stacon_g3

0x433e,	// (0x00052dfd) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0005e194) uni_indicator_pane_stacon_g

0x0bb2,	// (0x0004f671) control_top_pane_stacon_g1

0x0bba,	// (0x0004f679) control_top_pane_stacon_t1_ParamLimits

0x0bba,	// (0x0004f679) control_top_pane_stacon_t1

0x0bf1,	// (0x0004f6b0) aid_levels_battery_lsc_ParamLimits

0x0bf1,	// (0x0004f6b0) aid_levels_battery_lsc

0x0c08,	// (0x0004f6c7) battery_pane_stacon_g1_ParamLimits

0x0c08,	// (0x0004f6c7) battery_pane_stacon_g1

0x0c1b,	// (0x0004f6da) battery_pane_stacon_g2_ParamLimits

0x0c1b,	// (0x0004f6da) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0005e19d) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0005e19d) battery_pane_stacon_g

0x0c59,	// (0x0004f718) navi_icon_pane_stacon

0x0c6d,	// (0x0004f72c) navi_navi_pane_stacon

0x0c59,	// (0x0004f718) navi_text_pane_stacon

0x0bb2,	// (0x0004f671) control_bottom_pane_stacon_g1

0x0c81,	// (0x0004f740) control_bottom_pane_stacon_t1_ParamLimits

0x0c81,	// (0x0004f740) control_bottom_pane_stacon_t1

0xd369,	// (0x0005be28) grid_app_pane_ParamLimits

0xd369,	// (0x0005be28) grid_app_pane

0xd3a1,	// (0x0005be60) scroll_pane_cp15_ParamLimits

0xd3a1,	// (0x0005be60) scroll_pane_cp15

0xd3b6,	// (0x0005be75) cell_app_pane_ParamLimits

0xd3b6,	// (0x0005be75) cell_app_pane

0xd3fb,	// (0x0005beba) cell_app_pane_g1_ParamLimits

0xd3fb,	// (0x0005beba) cell_app_pane_g1

0x43e5,	// (0x00052ea4) cell_app_pane_g2_ParamLimits

0x43e5,	// (0x00052ea4) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0005e1a2) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0005e1a2) cell_app_pane_g

0xd41f,	// (0x0005bede) cell_app_pane_t1_ParamLimits

0xd41f,	// (0x0005bede) cell_app_pane_t1

0x4408,	// (0x00052ec7) grid_highlight_pane_ParamLimits

0x4408,	// (0x00052ec7) grid_highlight_pane

0x4003,	// (0x00052ac2) cell_highlight_pane_g1

0x400b,	// (0x00052aca) cell_highlight_pane_g2

0x4013,	// (0x00052ad2) cell_highlight_pane_g3

0x401b,	// (0x00052ada) cell_highlight_pane_g4

0x4023,	// (0x00052ae2) cell_highlight_pane_g5

0x402b,	// (0x00052aea) cell_highlight_pane_g6

0x4033,	// (0x00052af2) cell_highlight_pane_g7

0x403b,	// (0x00052afa) cell_highlight_pane_g8

0x4043,	// (0x00052b02) cell_highlight_pane_g9

0x3652,	// (0x00052111) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0005e150) cell_highlight_pane_g

0x4419,	// (0x00052ed8) bg_scroll_pane

0x0ccb,	// (0x0004f78a) scroll_handle_pane

0x4460,	// (0x00052f1f) scroll_bg_pane_g1

0x4475,	// (0x00052f34) scroll_bg_pane_g2

0x448d,	// (0x00052f4c) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0005e1a7) scroll_bg_pane_g

0x44a2,	// (0x00052f61) scroll_handle_focus_pane_ParamLimits

0x44a2,	// (0x00052f61) scroll_handle_focus_pane

0x4460,	// (0x00052f1f) scroll_handle_pane_g1

0x44af,	// (0x00052f6e) scroll_handle_pane_g2

0x448d,	// (0x00052f4c) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0005e1ae) scroll_handle_pane_g

0x4054,	// (0x00052b13) bg_popup_sub_pane_cp21_ParamLimits

0x4054,	// (0x00052b13) bg_popup_sub_pane_cp21

0x44c3,	// (0x00052f82) popup_fep_japan_predictive_window_t1_ParamLimits

0x44c3,	// (0x00052f82) popup_fep_japan_predictive_window_t1

0x44dd,	// (0x00052f9c) popup_fep_japan_predictive_window_t2_ParamLimits

0x44dd,	// (0x00052f9c) popup_fep_japan_predictive_window_t2

0x4510,	// (0x00052fcf) popup_fep_japan_predictive_window_t3_ParamLimits

0x4510,	// (0x00052fcf) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0005e1b5) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0005e1b5) popup_fep_japan_predictive_window_t

0x365c,	// (0x0005211b) bg_popup_sub_pane_cp23

0x4547,	// (0x00053006) listscroll_japin_cand_pane

0x454f,	// (0x0005300e) popup_fep_japan_candidate_window_t1

0x455d,	// (0x0005301c) candidate_pane_ParamLimits

0x455d,	// (0x0005301c) candidate_pane

0x456f,	// (0x0005302e) scroll_pane_cp30

0x4577,	// (0x00053036) list_single_popup_jap_candidate_pane_ParamLimits

0x4577,	// (0x00053036) list_single_popup_jap_candidate_pane

0x365c,	// (0x0005211b) list_highlight_pane_cp30

0x458c,	// (0x0005304b) list_single_popup_jap_candidate_pane_t1

0x459b,	// (0x0005305a) level_1_signal

0x45ad,	// (0x0005306c) level_2_signal

0x45c0,	// (0x0005307f) level_3_signal

0x45d3,	// (0x00053092) level_4_signal

0x45e6,	// (0x000530a5) level_5_signal

0x45f9,	// (0x000530b8) level_6_signal

0x460c,	// (0x000530cb) level_7_signal

0x459b,	// (0x0005305a) level_1_battery

0x45ad,	// (0x0005306c) level_2_battery

0x45c0,	// (0x0005307f) level_3_battery

0x45d3,	// (0x00053092) level_4_battery

0x45e6,	// (0x000530a5) level_5_battery

0x45f9,	// (0x000530b8) level_6_battery

0x460c,	// (0x000530cb) level_7_battery

0x4637,	// (0x000530f6) list_menu_pane_ParamLimits

0x4637,	// (0x000530f6) list_menu_pane

0x464d,	// (0x0005310c) scroll_pane_cp25_ParamLimits

0x464d,	// (0x0005310c) scroll_pane_cp25

0x4666,	// (0x00053125) list_double2_graphic_pane_cp2_ParamLimits

0x4666,	// (0x00053125) list_double2_graphic_pane_cp2

0x4666,	// (0x00053125) list_double2_large_graphic_pane_cp2_ParamLimits

0x4666,	// (0x00053125) list_double2_large_graphic_pane_cp2

0x4666,	// (0x00053125) list_double2_pane_cp2_ParamLimits

0x4666,	// (0x00053125) list_double2_pane_cp2

0x4666,	// (0x00053125) list_double_graphic_pane_cp2_ParamLimits

0x4666,	// (0x00053125) list_double_graphic_pane_cp2

0x4666,	// (0x00053125) list_double_large_graphic_pane_cp2_ParamLimits

0x4666,	// (0x00053125) list_double_large_graphic_pane_cp2

0x4666,	// (0x00053125) list_double_number_pane_cp2_ParamLimits

0x4666,	// (0x00053125) list_double_number_pane_cp2

0x4666,	// (0x00053125) list_double_pane_cp2_ParamLimits

0x4666,	// (0x00053125) list_double_pane_cp2

0xd436,	// (0x0005bef5) list_single_2graphic_pane_cp2_ParamLimits

0xd436,	// (0x0005bef5) list_single_2graphic_pane_cp2

0xd436,	// (0x0005bef5) list_single_graphic_heading_pane_cp2_ParamLimits

0xd436,	// (0x0005bef5) list_single_graphic_heading_pane_cp2

0xd436,	// (0x0005bef5) list_single_graphic_pane_cp2_ParamLimits

0xd436,	// (0x0005bef5) list_single_graphic_pane_cp2

0xd436,	// (0x0005bef5) list_single_heading_pane_cp2_ParamLimits

0xd436,	// (0x0005bef5) list_single_heading_pane_cp2

0x46a3,	// (0x00053162) list_single_large_graphic_pane_cp2_ParamLimits

0x46a3,	// (0x00053162) list_single_large_graphic_pane_cp2

0xd436,	// (0x0005bef5) list_single_number_heading_pane_cp2_ParamLimits

0xd436,	// (0x0005bef5) list_single_number_heading_pane_cp2

0xd436,	// (0x0005bef5) list_single_number_pane_cp2_ParamLimits

0xd436,	// (0x0005bef5) list_single_number_pane_cp2

0xd436,	// (0x0005bef5) list_single_pane_cp2_ParamLimits

0xd436,	// (0x0005bef5) list_single_pane_cp2

0x471f,	// (0x000531de) bg_popup_sub_pane_cp22

0x0d7d,	// (0x0004f83c) popup_side_volume_key_window_g1

0x0da7,	// (0x0004f866) popup_side_volume_key_window_t1

0x0dc3,	// (0x0004f882) volume_small_pane_cp1

0x39b7,	// (0x00052476) bg_popup_sub_pane_cp24_ParamLimits

0x39b7,	// (0x00052476) bg_popup_sub_pane_cp24

0x4735,	// (0x000531f4) fep_china_uni_candidate_pane_ParamLimits

0x4735,	// (0x000531f4) fep_china_uni_candidate_pane

0x4749,	// (0x00053208) fep_china_uni_entry_pane

0x4759,	// (0x00053218) popup_fep_china_uni_window_g1

0x4775,	// (0x00053234) fep_china_uni_entry_pane_g1

0x477d,	// (0x0005323c) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0005e1e6) fep_china_uni_entry_pane_g

0x4785,	// (0x00053244) fep_entry_item_pane

0x478f,	// (0x0005324e) fep_candidate_item_pane

0x4797,	// (0x00053256) fep_china_uni_candidate_pane_g1

0x479f,	// (0x0005325e) fep_china_uni_candidate_pane_g2

0x47a7,	// (0x00053266) fep_china_uni_candidate_pane_g3

0x47af,	// (0x0005326e) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0005e1eb) fep_china_uni_candidate_pane_g

0x3652,	// (0x00052111) fep_entry_item_pane_g1

0x47b7,	// (0x00053276) fep_entry_item_pane_t1_ParamLimits

0x47b7,	// (0x00053276) fep_entry_item_pane_t1

0x47cd,	// (0x0005328c) fep_candidate_item_pane_t1_ParamLimits

0x47cd,	// (0x0005328c) fep_candidate_item_pane_t1

0x47e2,	// (0x000532a1) fep_candidate_item_pane_t2_ParamLimits

0x47e2,	// (0x000532a1) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0005e1f4) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0005e1f4) fep_candidate_item_pane_t

0x373c,	// (0x000521fb) list_highlight_pane_cp31_ParamLimits

0x373c,	// (0x000521fb) list_highlight_pane_cp31

0x47f4,	// (0x000532b3) level_1_signal_lsc

0x47fd,	// (0x000532bc) level_2_signal_lsc

0x4806,	// (0x000532c5) level_3_signal_lsc

0x480f,	// (0x000532ce) level_4_signal_lsc

0x4818,	// (0x000532d7) level_5_signal_lsc

0x4821,	// (0x000532e0) level_6_signal_lsc

0x482a,	// (0x000532e9) level_7_signal_lsc

0x482a,	// (0x000532e9) level_1_battery_lsc

0x4833,	// (0x000532f2) level_2_battery_lsc

0x483c,	// (0x000532fb) level_3_battery_lsc

0x4845,	// (0x00053304) level_4_battery_lsc

0x484e,	// (0x0005330d) level_5_battery_lsc

0x4857,	// (0x00053316) level_6_battery_lsc

0x47f4,	// (0x000532b3) level_7_battery_lsc

0x4860,	// (0x0005331f) scroll_handle_focus_pane_g1

0x4869,	// (0x00053328) scroll_handle_focus_pane_g2

0x4872,	// (0x00053331) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0005e1f9) scroll_handle_focus_pane_g

0xbe80,	// (0x0005a93f) list_single_2graphic_pane_g1_ParamLimits

0xbe80,	// (0x0005a93f) list_single_2graphic_pane_g1

0xd2b7,	// (0x0005bd76) list_single_2graphic_pane_g2_ParamLimits

0xd2b7,	// (0x0005bd76) list_single_2graphic_pane_g2

0x2d01,	// (0x000517c0) list_single_2graphic_pane_g3_ParamLimits

0x2d01,	// (0x000517c0) list_single_2graphic_pane_g3

0xbe8c,	// (0x0005a94b) list_single_2graphic_pane_g4_ParamLimits

0xbe8c,	// (0x0005a94b) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0005e200) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0005e200) list_single_2graphic_pane_g

0xbe98,	// (0x0005a957) list_single_2graphic_pane_t1_ParamLimits

0xbe98,	// (0x0005a957) list_single_2graphic_pane_t1

0xd4c3,	// (0x0005bf82) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd4c3,	// (0x0005bf82) list_double2_graphic_large_graphic_pane_g1

0xbafd,	// (0x0005a5bc) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbafd,	// (0x0005a5bc) list_double2_graphic_large_graphic_pane_g2

0xd2e0,	// (0x0005bd9f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xd2e0,	// (0x0005bd9f) list_double2_graphic_large_graphic_pane_g3

0xbec6,	// (0x0005a985) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbec6,	// (0x0005a985) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0005e209) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0005e209) list_double2_graphic_large_graphic_pane_g

0xbed2,	// (0x0005a991) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbed2,	// (0x0005a991) list_double2_graphic_large_graphic_pane_t1

0xbee8,	// (0x0005a9a7) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbee8,	// (0x0005a9a7) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0005e212) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0005e212) list_double2_graphic_large_graphic_pane_t

0x49ba,	// (0x00053479) popup_fast_swap_window_ParamLimits

0x49ba,	// (0x00053479) popup_fast_swap_window

0x49d6,	// (0x00053495) popup_side_volume_key_window

0x49f2,	// (0x000534b1) stacon_top_pane

0x49fc,	// (0x000534bb) status_pane_ParamLimits

0x49fc,	// (0x000534bb) status_pane

0xd4d5,	// (0x0005bf94) status_small_pane

0x365c,	// (0x0005211b) control_pane

0x365c,	// (0x0005211b) stacon_bottom_pane

0x3f9a,	// (0x00052a59) scroll_pane_cp121

0x3f91,	// (0x00052a50) set_content_pane

0x487b,	// (0x0005333a) bg_active_tab_pane_g1_cp1

0x4884,	// (0x00053343) bg_active_tab_pane_g2_cp1

0x488d,	// (0x0005334c) bg_active_tab_pane_g3_cp1

0x487b,	// (0x0005333a) bg_passive_tab_pane_g1_cp1

0x4884,	// (0x00053343) bg_passive_tab_pane_g2_cp1

0x488d,	// (0x0005334c) bg_passive_tab_pane_g3_cp1

0x4896,	// (0x00053355) bg_active_tab_pane_g1_cp2

0x4884,	// (0x00053343) bg_active_tab_pane_g2_cp2

0x489f,	// (0x0005335e) bg_active_tab_pane_g3_cp2

0x4896,	// (0x00053355) bg_passive_tab_pane_g1_cp2

0x4884,	// (0x00053343) bg_passive_tab_pane_g2_cp2

0x489f,	// (0x0005335e) bg_passive_tab_pane_g3_cp2

0x48a8,	// (0x00053367) bg_active_tab_pane_g1_cp3

0x4884,	// (0x00053343) bg_active_tab_pane_g2_cp3

0x48b1,	// (0x00053370) bg_active_tab_pane_g3_cp3

0x48a8,	// (0x00053367) bg_passive_tab_pane_g1_cp3

0x4884,	// (0x00053343) bg_passive_tab_pane_g2_cp3

0x48b1,	// (0x00053370) bg_passive_tab_pane_g3_cp3

0x48ba,	// (0x00053379) bg_active_tab_pane_g1_cp4

0x4884,	// (0x00053343) bg_active_tab_pane_g2_cp4

0x48c5,	// (0x00053384) bg_active_tab_pane_g3_cp4

0x48ba,	// (0x00053379) bg_passive_tab_pane_g1_cp4

0x4884,	// (0x00053343) bg_passive_tab_pane_g2_cp4

0x48c5,	// (0x00053384) bg_passive_tab_pane_g3_cp4

0x490e,	// (0x000533cd) bg_active_tab_pane_g1_cp5

0x4884,	// (0x00053343) bg_active_tab_pane_g2_cp5

0x4917,	// (0x000533d6) bg_active_tab_pane_g3_cp5

0x490e,	// (0x000533cd) bg_passive_tab_pane_g1_cp5

0x4884,	// (0x00053343) bg_passive_tab_pane_g2_cp5

0x4917,	// (0x000533d6) bg_passive_tab_pane_g3_cp5

0x6f80,	// (0x00055a3f) list_set_graphic_pane_ParamLimits

0x6f80,	// (0x00055a3f) list_set_graphic_pane

0x365c,	// (0x0005211b) bg_set_opt_pane_cp4

0x493d,	// (0x000533fc) list_set_graphic_pane_g1_ParamLimits

0x493d,	// (0x000533fc) list_set_graphic_pane_g1

0x4949,	// (0x00053408) list_set_graphic_pane_g2_ParamLimits

0x4949,	// (0x00053408) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0005e217) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0005e217) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x0005e580) volume_small_pane_cp_g

0x496d,	// (0x0005342c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x496d,	// (0x0005342c) list_double2_large_graphic_pane_g1_cp2

0x4979,	// (0x00053438) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4979,	// (0x00053438) list_double2_large_graphic_pane_g2_cp2

0x498a,	// (0x00053449) list_double2_large_graphic_pane_g3_cp2

0x4992,	// (0x00053451) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4992,	// (0x00053451) list_double2_large_graphic_pane_t1_cp2

0x49a8,	// (0x00053467) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x49a8,	// (0x00053467) list_double2_large_graphic_pane_t2_cp2

0x658b,	// (0x0005504a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x658b,	// (0x0005504a) list_double_large_graphic_pane_g1_cp2

0x659c,	// (0x0005505b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x659c,	// (0x0005505b) list_double_large_graphic_pane_g2_cp2

0x4b23,	// (0x000535e2) list_double_large_graphic_pane_g3_cp2

0x65ad,	// (0x0005506c) list_double_large_graphic_pane_g4_cp

0x65b5,	// (0x00055074) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x65b5,	// (0x00055074) list_double_large_graphic_pane_t1_cp2

0x65cc,	// (0x0005508b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x65cc,	// (0x0005508b) list_double_large_graphic_pane_t2_cp2

0x4a15,	// (0x000534d4) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4a15,	// (0x000534d4) list_double2_graphic_pane_g1_cp2

0x4a23,	// (0x000534e2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4a23,	// (0x000534e2) list_double2_graphic_pane_g2_cp2

0x4a34,	// (0x000534f3) list_double2_graphic_pane_g3_cp2

0x4a3e,	// (0x000534fd) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4a3e,	// (0x000534fd) list_double2_graphic_pane_t1_cp2

0x4a54,	// (0x00053513) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4a54,	// (0x00053513) list_double2_graphic_pane_t2_cp2

0x4a66,	// (0x00053525) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4a66,	// (0x00053525) list_single_number_heading_pane_g1_cp2

0x4a72,	// (0x00053531) list_single_number_heading_pane_g2_cp2

0x4a7a,	// (0x00053539) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4a7a,	// (0x00053539) list_single_number_heading_pane_t1_cp2

0x4a90,	// (0x0005354f) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4a90,	// (0x0005354f) list_single_number_heading_pane_t2_cp2

0x4aa2,	// (0x00053561) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4aa2,	// (0x00053561) list_single_number_heading_pane_t3_cp2

0x4a66,	// (0x00053525) list_single_heading_pane_g1_cp2_ParamLimits

0x4a66,	// (0x00053525) list_single_heading_pane_g1_cp2

0x4a72,	// (0x00053531) list_single_heading_pane_g2_cp2

0x4a7a,	// (0x00053539) list_single_heading_pane_t1_cp2_ParamLimits

0x4a7a,	// (0x00053539) list_single_heading_pane_t1_cp2

0x6393,	// (0x00054e52) list_single_heading_pane_t2_cp2_ParamLimits

0x6393,	// (0x00054e52) list_single_heading_pane_t2_cp2

0x62db,	// (0x00054d9a) list_double_graphic_pane_g1_cp2_ParamLimits

0x62db,	// (0x00054d9a) list_double_graphic_pane_g1_cp2

0x62e7,	// (0x00054da6) list_double_graphic_pane_g2_cp2_ParamLimits

0x62e7,	// (0x00054da6) list_double_graphic_pane_g2_cp2

0x62f6,	// (0x00054db5) list_double_graphic_pane_g3_cp2

0x62fe,	// (0x00054dbd) list_double_graphic_pane_t1_cp2_ParamLimits

0x62fe,	// (0x00054dbd) list_double_graphic_pane_t1_cp2

0x6314,	// (0x00054dd3) list_double_graphic_pane_t2_cp2_ParamLimits

0x6314,	// (0x00054dd3) list_double_graphic_pane_t2_cp2

0x4b17,	// (0x000535d6) list_double_number_pane_g1_cp2_ParamLimits

0x4b17,	// (0x000535d6) list_double_number_pane_g1_cp2

0x4b23,	// (0x000535e2) list_double_number_pane_g2_cp2

0x629f,	// (0x00054d5e) list_double_number_pane_t1_cp2_ParamLimits

0x629f,	// (0x00054d5e) list_double_number_pane_t1_cp2

0x62b3,	// (0x00054d72) list_double_number_pane_t2_cp2_ParamLimits

0x62b3,	// (0x00054d72) list_double_number_pane_t2_cp2

0x62c9,	// (0x00054d88) list_double_number_pane_t3_cp2_ParamLimits

0x62c9,	// (0x00054d88) list_double_number_pane_t3_cp2

0x6188,	// (0x00054c47) list_single_graphic_pane_g1_cp2_ParamLimits

0x6188,	// (0x00054c47) list_single_graphic_pane_g1_cp2

0x4b7b,	// (0x0005363a) list_single_graphic_pane_g2_cp2_ParamLimits

0x4b7b,	// (0x0005363a) list_single_graphic_pane_g2_cp2

0x4b87,	// (0x00053646) list_single_graphic_pane_g3_cp2

0x615e,	// (0x00054c1d) list_single_graphic_pane_t1_cp2_ParamLimits

0x615e,	// (0x00054c1d) list_single_graphic_pane_t1_cp2

0x4b7b,	// (0x0005363a) list_single_number_pane_g1_cp2_ParamLimits

0x4b7b,	// (0x0005363a) list_single_number_pane_g1_cp2

0x4b87,	// (0x00053646) list_single_number_pane_g2_cp2

0x615e,	// (0x00054c1d) list_single_number_pane_t1_cp2_ParamLimits

0x615e,	// (0x00054c1d) list_single_number_pane_t1_cp2

0x6174,	// (0x00054c33) list_single_number_pane_t2_cp2_ParamLimits

0x6174,	// (0x00054c33) list_single_number_pane_t2_cp2

0x4979,	// (0x00053438) list_double2_pane_g1_cp2_ParamLimits

0x4979,	// (0x00053438) list_double2_pane_g1_cp2

0x498a,	// (0x00053449) list_double2_pane_g2_cp2

0x4aef,	// (0x000535ae) list_double2_pane_t1_cp2_ParamLimits

0x4aef,	// (0x000535ae) list_double2_pane_t1_cp2

0x4b05,	// (0x000535c4) list_double2_pane_t2_cp2_ParamLimits

0x4b05,	// (0x000535c4) list_double2_pane_t2_cp2

0x4b17,	// (0x000535d6) list_double_pane_g1_cp2_ParamLimits

0x4b17,	// (0x000535d6) list_double_pane_g1_cp2

0x4b23,	// (0x000535e2) list_double_pane_g2_cp2

0x4b2b,	// (0x000535ea) list_double_pane_t1_cp2_ParamLimits

0x4b2b,	// (0x000535ea) list_double_pane_t1_cp2

0x4b41,	// (0x00053600) list_double_pane_t2_cp2_ParamLimits

0x4b41,	// (0x00053600) list_double_pane_t2_cp2

0x4b6b,	// (0x0005362a) list_single_pane_cp2_g3

0x4b7b,	// (0x0005363a) list_single_pane_g1_cp2_ParamLimits

0x4b7b,	// (0x0005363a) list_single_pane_g1_cp2

0x4b87,	// (0x00053646) list_single_pane_g2_cp2

0x4b8f,	// (0x0005364e) list_single_pane_t1_cp2_ParamLimits

0x4b8f,	// (0x0005364e) list_single_pane_t1_cp2

0x4ba7,	// (0x00053666) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4ba7,	// (0x00053666) list_single_large_graphic_pane_g1_cp2

0x4bb3,	// (0x00053672) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4bb3,	// (0x00053672) list_single_large_graphic_pane_g2_cp2

0x4bbf,	// (0x0005367e) list_single_large_graphic_pane_g3_cp2

0x4bc7,	// (0x00053686) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4bc7,	// (0x00053686) list_single_large_graphic_pane_g4_cp1

0x4be1,	// (0x000536a0) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4be1,	// (0x000536a0) list_single_large_graphic_pane_t1_cp2

0x612a,	// (0x00054be9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x612a,	// (0x00054be9) list_single_graphic_heading_pane_g1_cp2

0x60f7,	// (0x00054bb6) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x60f7,	// (0x00054bb6) list_single_graphic_heading_pane_g4_cp2

0x4b87,	// (0x00053646) list_single_graphic_heading_pane_g5_cp2

0x6136,	// (0x00054bf5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6136,	// (0x00054bf5) list_single_graphic_heading_pane_t1_cp2

0x614c,	// (0x00054c0b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x614c,	// (0x00054c0b) list_single_graphic_heading_pane_t2_cp2

0x60eb,	// (0x00054baa) list_single_2graphic_pane_g1_cp2_ParamLimits

0x60eb,	// (0x00054baa) list_single_2graphic_pane_g1_cp2

0x60f7,	// (0x00054bb6) list_single_2graphic_pane_g2_cp2_ParamLimits

0x60f7,	// (0x00054bb6) list_single_2graphic_pane_g2_cp2

0x4b87,	// (0x00053646) list_single_2graphic_pane_g3_cp2

0x6108,	// (0x00054bc7) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6108,	// (0x00054bc7) list_single_2graphic_pane_g4_cp2

0x6114,	// (0x00054bd3) list_single_2graphic_pane_t1_cp2_ParamLimits

0x6114,	// (0x00054bd3) list_single_2graphic_pane_t1_cp2

0x3652,	// (0x00052111) list_highlight_pane_g10_cp1

0x5cc3,	// (0x00054782) list_highlight_pane_g1_cp1

0x5ccb,	// (0x0005478a) list_highlight_pane_g2_cp1

0x5cd3,	// (0x00054792) list_highlight_pane_g3_cp1

0x5cdb,	// (0x0005479a) list_highlight_pane_g4_cp1

0x5ce3,	// (0x000547a2) list_highlight_pane_g5_cp1

0x5ceb,	// (0x000547aa) list_highlight_pane_g6_cp1

0x5cf3,	// (0x000547b2) list_highlight_pane_g7_cp1

0x5cfb,	// (0x000547ba) list_highlight_pane_g8_cp1

0x5d03,	// (0x000547c2) list_highlight_pane_g9_cp1

0xdbaf,	// (0x0005c66e) form_field_slider_pane_t3

0xdbbd,	// (0x0005c67c) form_field_slider_pane_t4

0x5bff,	// (0x000546be) slider_form_pane_ParamLimits

0x5bff,	// (0x000546be) slider_form_pane

0x365c,	// (0x0005211b) control_abbreviations

0x365c,	// (0x0005211b) control_conventions

0x365c,	// (0x0005211b) control_definitions

0x365c,	// (0x0005211b) format_table_attribute

0x63dd,	// (0x00054e9c) bg_popup_preview_window_pane_g9

0x365c,	// (0x0005211b) format_table_data2

0x365c,	// (0x0005211b) format_table_data3

0x365c,	// (0x0005211b) format_table_data_example

0x0008,

0x365c,	// (0x0005211b) intro_purpose

0xf8ef,	// (0x0005e3ae) bg_popup_preview_window_pane_g

0x365c,	// (0x0005211b) texts_category

0x365c,	// (0x0005211b) texts_graphics

0x4bf7,	// (0x000536b6) text_digital

0x4c06,	// (0x000536c5) text_primary

0x4c15,	// (0x000536d4) text_primary_small

0x4c24,	// (0x000536e3) text_secondary

0x4c33,	// (0x000536f2) text_title

0x6ac2,	// (0x00055581) bg_passive_tab_pane_g1_cp3_srt

0x4884,	// (0x00053343) bg_passive_tab_pane_g2_cp3_srt

0x6acb,	// (0x0005558a) bg_passive_tab_pane_g3_cp3_srt

0x39b7,	// (0x00052476) bg_active_tab_pane_cp3_srt_ParamLimits

0x39b7,	// (0x00052476) bg_active_tab_pane_cp3_srt

0x6ad4,	// (0x00055593) tabs_4_active_pane_srt_g1

0xdef0,	// (0x0005c9af) tabs_4_active_pane_srt_t1_ParamLimits

0xdef0,	// (0x0005c9af) tabs_4_active_pane_srt_t1

0x6ac2,	// (0x00055581) bg_active_tab_pane_g1_cp3_copy1

0x4884,	// (0x00053343) bg_active_tab_pane_g2_cp3_copy1

0x6acb,	// (0x0005558a) bg_active_tab_pane_g3_cp3_copy1

0x373c,	// (0x000521fb) tabs_2_long_active_pane_srt_ParamLimits

0x373c,	// (0x000521fb) tabs_2_long_active_pane_srt

0x373c,	// (0x000521fb) tabs_2_long_passive_pane_srt_ParamLimits

0x373c,	// (0x000521fb) tabs_2_long_passive_pane_srt

0x4f91,	// (0x00053a50) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4f91,	// (0x00053a50) bg_passive_tab_pane_cp4_srt

0x680b,	// (0x000552ca) bg_passive_tab_pane_g1_cp4_srt

0x4884,	// (0x00053343) bg_passive_tab_pane_g2_cp4_srt

0x6814,	// (0x000552d3) bg_passive_tab_pane_g3_cp4_srt

0x373c,	// (0x000521fb) bg_active_tab_pane_cp4_srt_ParamLimits

0x373c,	// (0x000521fb) bg_active_tab_pane_cp4_srt

0xdd1a,	// (0x0005c7d9) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdd1a,	// (0x0005c7d9) tabs_2_long_active_pane_srt_t1

0x680b,	// (0x000552ca) bg_active_tab_pane_g1_cp4_srt

0x4884,	// (0x00053343) bg_active_tab_pane_g2_cp4_srt

0x6814,	// (0x000552d3) bg_active_tab_pane_g3_cp4_srt

0x39b7,	// (0x00052476) tabs_3_long_active_pane_srt_ParamLimits

0x39b7,	// (0x00052476) tabs_3_long_active_pane_srt

0x39b7,	// (0x00052476) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x39b7,	// (0x00052476) tabs_3_long_passive_pane_cp_srt

0x39b7,	// (0x00052476) tabs_3_long_passive_pane_srt_ParamLimits

0x39b7,	// (0x00052476) tabs_3_long_passive_pane_srt

0x4f91,	// (0x00053a50) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4f91,	// (0x00053a50) bg_passive_tab_pane_cp5_srt

0x490e,	// (0x000533cd) bg_passive_tab_pane_g1_cp5_srt

0x4884,	// (0x00053343) bg_passive_tab_pane_g2_cp5_srt

0x4917,	// (0x000533d6) bg_passive_tab_pane_g3_cp5_srt

0x373c,	// (0x000521fb) bg_active_tab_pane_cp5_srt_ParamLimits

0x373c,	// (0x000521fb) bg_active_tab_pane_cp5_srt

0xdd04,	// (0x0005c7c3) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdd04,	// (0x0005c7c3) tabs_3_long_active_pane_srt_t1

0x490e,	// (0x000533cd) bg_active_tab_pane_g1_cp5_srt

0x4884,	// (0x00053343) bg_active_tab_pane_g2_cp5_srt

0x4917,	// (0x000533d6) bg_active_tab_pane_g3_cp5_srt

0x67eb,	// (0x000552aa) navi_text_pane_srt_t1

0x67e3,	// (0x000552a2) navi_icon_pane_srt_g1

0x4e08,	// (0x000538c7) midp_editing_number_pane_srt

0x4c42,	// (0x00053701) midp_ticker_pane_srt

0x4e10,	// (0x000538cf) midp_ticker_pane_srt_g1

0x4e18,	// (0x000538d7) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0005e236) midp_ticker_pane_srt_g

0x4e20,	// (0x000538df) midp_ticker_pane_srt_t1

0x67d4,	// (0x00055293) midp_editing_number_pane_t1_copy1

0xd4e0,	// (0x0005bf9f) listscroll_midp_pane

0xd4e0,	// (0x0005bf9f) midp_form_pane

0x4cba,	// (0x00053779) midp_info_popup_window_ParamLimits

0x4cba,	// (0x00053779) midp_info_popup_window

0x4054,	// (0x00052b13) bg_popup_sub_pane_cp50_ParamLimits

0x4054,	// (0x00052b13) bg_popup_sub_pane_cp50

0x58fb,	// (0x000543ba) listscroll_midp_info_pane_ParamLimits

0x58fb,	// (0x000543ba) listscroll_midp_info_pane

0x58db,	// (0x0005439a) listscroll_form_midp_pane_ParamLimits

0x58db,	// (0x0005439a) listscroll_form_midp_pane

0x58e7,	// (0x000543a6) scroll_bar_cp050

0x58db,	// (0x0005439a) list_midp_pane

0x7505,	// (0x00055fc4) signal_pane_g2_cp

0x57f5,	// (0x000542b4) listscroll_midp_info_pane_t1_ParamLimits

0x57f5,	// (0x000542b4) listscroll_midp_info_pane_t1

0x580d,	// (0x000542cc) listscroll_midp_info_pane_t2_ParamLimits

0x580d,	// (0x000542cc) listscroll_midp_info_pane_t2

0x584b,	// (0x0005430a) listscroll_midp_info_pane_t3_ParamLimits

0x584b,	// (0x0005430a) listscroll_midp_info_pane_t3

0x5885,	// (0x00054344) listscroll_midp_info_pane_t4_ParamLimits

0x5885,	// (0x00054344) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0005e2e9) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0005e2e9) listscroll_midp_info_pane_t

0x4118,	// (0x00052bd7) scroll_pane_cp21

0x5793,	// (0x00054252) form_midp_field_choice_group_pane

0x579c,	// (0x0005425b) form_midp_field_text_pane

0x57db,	// (0x0005429a) form_midp_field_time_pane

0x57e3,	// (0x000542a2) form_midp_gauge_slider_pane

0x57ec,	// (0x000542ab) form_midp_gauge_wait_pane

0x365c,	// (0x0005211b) form_midp_image_pane

0xc7b7,	// (0x0005b276) list_single_midp_pane_ParamLimits

0xc7b7,	// (0x0005b276) list_single_midp_pane

0xdb8e,	// (0x0005c64d) form_midp_field_text_pane_t1

0x551b,	// (0x00053fda) input_focus_pane_cp050

0x5782,	// (0x00054241) list_midp_form_text_pane

0x571a,	// (0x000541d9) form_midp_field_choice_group_pane_t1

0x5728,	// (0x000541e7) input_focus_pane_cp051

0x573c,	// (0x000541fb) list_midp_choice_pane

0x365c,	// (0x0005211b) status_idle_pane

0x56fe,	// (0x000541bd) form_midp_field_time_pane_t1

0x3652,	// (0x00052111) wait_anim_pane_g2_copy1

0x570c,	// (0x000541cb) form_midp_field_time_pane_t2

0x0001,

0x4d68,	// (0x00053827) aid_navinavi_width_2_pane

0xf825,	// (0x0005e2e4) form_midp_field_time_pane_t

0x365c,	// (0x0005211b) input_focus_pane_cp052

0x365c,	// (0x0005211b) bg_input_focus_pane_cp040

0x56be,	// (0x0005417d) form_midp_gauge_slider_pane_t1

0x56cc,	// (0x0005418b) form_midp_gauge_slider_pane_t2

0xdb72,	// (0x0005c631) form_midp_gauge_slider_pane_t3

0xdb80,	// (0x0005c63f) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0005e2db) form_midp_gauge_slider_pane_t

0x56f6,	// (0x000541b5) form_midp_slider_pane

0x373c,	// (0x000521fb) bg_input_focus_pane_cp041_ParamLimits

0x373c,	// (0x000521fb) bg_input_focus_pane_cp041

0x568b,	// (0x0005414a) form_midp_gauge_wait_pane_t1_ParamLimits

0x568b,	// (0x0005414a) form_midp_gauge_wait_pane_t1

0x569d,	// (0x0005415c) form_midp_gauge_wait_pane_t2_ParamLimits

0x569d,	// (0x0005415c) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0005e2d6) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0005e2d6) form_midp_gauge_wait_pane_t

0x56af,	// (0x0005416e) form_midp_wait_pane_ParamLimits

0x56af,	// (0x0005416e) form_midp_wait_pane

0x5655,	// (0x00054114) form_midp_image_pane_g1

0x565e,	// (0x0005411d) form_midp_image_pane_t1

0x566d,	// (0x0005412c) form_midp_image_pane_t2

0x567c,	// (0x0005413b) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0005e2cf) form_midp_image_pane_t

0x564c,	// (0x0005410b) list_single_midp_pane_g1

0x2d61,	// (0x00051820) list_single_midp_pane_t1

0xdb5e,	// (0x0005c61d) list_midp_form_item_pane_ParamLimits

0xdb5e,	// (0x0005c61d) list_midp_form_item_pane

0x4d10,	// (0x000537cf) list_midp_form_item_pane_t1

0x4d1f,	// (0x000537de) midp_ticker_pane_g1

0x4d2b,	// (0x000537ea) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0005e21c) midp_ticker_pane_g

0x4d37,	// (0x000537f6) midp_ticker_pane_t1

0x6a25,	// (0x000554e4) midp_editing_number_pane_t1

0x6a03,	// (0x000554c2) midp_editing_number_pane

0x6a12,	// (0x000554d1) midp_ticker_pane

0x67c4,	// (0x00055283) ai_message_heading_pane

0x365c,	// (0x0005211b) bg_popup_window_pane_cp14

0x67cc,	// (0x0005528b) listscroll_ai_message_pane

0x674e,	// (0x0005520d) ai_message_heading_pane_g1_ParamLimits

0x674e,	// (0x0005520d) ai_message_heading_pane_g1

0x675a,	// (0x00055219) ai_message_heading_pane_g2_ParamLimits

0x675a,	// (0x00055219) ai_message_heading_pane_g2

0x6766,	// (0x00055225) ai_message_heading_pane_g3_ParamLimits

0x6766,	// (0x00055225) ai_message_heading_pane_g3

0x6772,	// (0x00055231) ai_message_heading_pane_g4_ParamLimits

0x6772,	// (0x00055231) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0005e410) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0005e410) ai_message_heading_pane_g

0x677e,	// (0x0005523d) ai_message_heading_pane_t1_ParamLimits

0x677e,	// (0x0005523d) ai_message_heading_pane_t1

0x6798,	// (0x00055257) ai_message_heading_pane_t2_ParamLimits

0x6798,	// (0x00055257) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0005e419) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0005e419) ai_message_heading_pane_t

0x67aa,	// (0x00055269) bg_popup_heading_pane_cp1_ParamLimits

0x67aa,	// (0x00055269) bg_popup_heading_pane_cp1

0x673c,	// (0x000551fb) list_ai_message_pane_ParamLimits

0x673c,	// (0x000551fb) list_ai_message_pane

0x4118,	// (0x00052bd7) scroll_pane_cp10

0x66d8,	// (0x00055197) list_ai_message_pane_g1

0x66e0,	// (0x0005519f) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0005e3ed) list_ai_message_pane_g

0x66e8,	// (0x000551a7) list_ai_message_pane_t1_ParamLimits

0x66e8,	// (0x000551a7) list_ai_message_pane_t1

0x66fd,	// (0x000551bc) list_ai_message_pane_t2_ParamLimits

0x66fd,	// (0x000551bc) list_ai_message_pane_t2

0x6712,	// (0x000551d1) list_ai_message_pane_t3_ParamLimits

0x6712,	// (0x000551d1) list_ai_message_pane_t3

0x6727,	// (0x000551e6) list_ai_message_pane_t4_ParamLimits

0x6727,	// (0x000551e6) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0005e3f2) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0005e3f2) list_ai_message_pane_t

0xdce3,	// (0x0005c7a2) cell_ai_soft_ind_pane_ParamLimits

0xdce3,	// (0x0005c7a2) cell_ai_soft_ind_pane

0x4d49,	// (0x00053808) cell_ai_soft_ind_pane_g1_ParamLimits

0x4d49,	// (0x00053808) cell_ai_soft_ind_pane_g1

0x365c,	// (0x0005211b) grid_highlight_cp1

0x4d56,	// (0x00053815) text_secondary_cp56_ParamLimits

0x4d56,	// (0x00053815) text_secondary_cp56

0x6698,	// (0x00055157) example_general_pane_ParamLimits

0x6698,	// (0x00055157) example_general_pane

0x66a4,	// (0x00055163) example_parent_pane_g1_ParamLimits

0x66a4,	// (0x00055163) example_parent_pane_g1

0x66b0,	// (0x0005516f) example_parent_pane_t1_ParamLimits

0x66b0,	// (0x0005516f) example_parent_pane_t1

0xc461,	// (0x0005af20) popup_preview_text_window_ParamLimits

0xc461,	// (0x0005af20) popup_preview_text_window

0x4b73,	// (0x00053632) list_single_pane_cp2_g4

0x3a6d,	// (0x0005252c) bg_popup_preview_window_pane_ParamLimits

0x3a6d,	// (0x0005252c) bg_popup_preview_window_pane

0x63e5,	// (0x00054ea4) popup_preview_text_window_t1_ParamLimits

0x63e5,	// (0x00054ea4) popup_preview_text_window_t1

0x6403,	// (0x00054ec2) popup_preview_text_window_t2_ParamLimits

0x6403,	// (0x00054ec2) popup_preview_text_window_t2

0x644c,	// (0x00054f0b) popup_preview_text_window_t3_ParamLimits

0x644c,	// (0x00054f0b) popup_preview_text_window_t3

0x6491,	// (0x00054f50) popup_preview_text_window_t4_ParamLimits

0x6491,	// (0x00054f50) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0005e3c1) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0005e3c1) popup_preview_text_window_t

0x650f,	// (0x00054fce) scroll_pane_cp11

0x54a7,	// (0x00053f66) bg_popup_preview_window_pane_g1

0x63a5,	// (0x00054e64) bg_popup_preview_window_pane_g2

0x63ad,	// (0x00054e6c) bg_popup_preview_window_pane_g3

0x63b5,	// (0x00054e74) bg_popup_preview_window_pane_g4

0x63bd,	// (0x00054e7c) bg_popup_preview_window_pane_g5

0x63c5,	// (0x00054e84) bg_popup_preview_window_pane_g6

0x63cd,	// (0x00054e8c) bg_popup_preview_window_pane_g7

0x63d5,	// (0x00054e94) bg_popup_preview_window_pane_g8

0xf522,	// (0x0005dfe1) aid_popup_width_pane

0xc3dd,	// (0x0005ae9c) popup_midp_note_alarm_window_ParamLimits

0xc3dd,	// (0x0005ae9c) popup_midp_note_alarm_window

0x3fab,	// (0x00052a6a) data_form_pane_ParamLimits

0xbd59,	// (0x0005a818) form_field_data_pane_g1

0xbd63,	// (0x0005a822) form_field_data_pane_t1_ParamLimits

0x3fb7,	// (0x00052a76) input_focus_pane_ParamLimits

0x0999,	// (0x0004f458) data_form_wide_pane_ParamLimits

0x09aa,	// (0x0004f469) form_field_data_wide_pane_g1

0x09b6,	// (0x0004f475) form_field_data_wide_pane_t1_ParamLimits

0x3d1c,	// (0x000527db) input_focus_pane_cp6_ParamLimits

0xd324,	// (0x0005bde3) input_popup_find_pane_g1_ParamLimits

0xd324,	// (0x0005bde3) input_popup_find_pane_g1

0x0c2c,	// (0x0004f6eb) aid_navi_side_left_pane

0x0c41,	// (0x0004f700) aid_navi_side_right_pane

0x5dbe,	// (0x0005487d) bg_popup_window_pane_cp30_ParamLimits

0x5dbe,	// (0x0005487d) bg_popup_window_pane_cp30

0x5e38,	// (0x000548f7) popup_midp_note_alarm_window_g1_ParamLimits

0x5e38,	// (0x000548f7) popup_midp_note_alarm_window_g1

0x5e68,	// (0x00054927) popup_midp_note_alarm_window_t1_ParamLimits

0x5e68,	// (0x00054927) popup_midp_note_alarm_window_t1

0x5f09,	// (0x000549c8) popup_midp_note_alarm_window_t2_ParamLimits

0x5f09,	// (0x000549c8) popup_midp_note_alarm_window_t2

0x5fb7,	// (0x00054a76) popup_midp_note_alarm_window_t3_ParamLimits

0x5fb7,	// (0x00054a76) popup_midp_note_alarm_window_t3

0x5fe9,	// (0x00054aa8) popup_midp_note_alarm_window_t4_ParamLimits

0x5fe9,	// (0x00054aa8) popup_midp_note_alarm_window_t4

0x600f,	// (0x00054ace) popup_midp_note_alarm_window_t5_ParamLimits

0x600f,	// (0x00054ace) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0005e35e) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0005e35e) popup_midp_note_alarm_window_t

0x60bb,	// (0x00054b7a) wait_bar_pane_cp1_ParamLimits

0x60bb,	// (0x00054b7a) wait_bar_pane_cp1

0x365c,	// (0x0005211b) wait_anim_pane_copy1

0x365c,	// (0x0005211b) wait_border_pane_copy1

0x5aa4,	// (0x00054563) wait_border_pane_g1_copy1

0x09d0,	// (0x0004f48f) form_field_popup_pane_g1

0xbd7d,	// (0x0005a83c) form_field_popup_pane_t1_ParamLimits

0x3fb7,	// (0x00052a76) input_focus_pane_cp7_ParamLimits

0x3fd9,	// (0x00052a98) list_form_pane_ParamLimits

0x09f0,	// (0x0004f4af) form_field_popup_wide_pane_g1

0x09f8,	// (0x0004f4b7) form_field_popup_wide_pane_t1_ParamLimits

0x3fb7,	// (0x00052a76) input_focus_pane_cp8_ParamLimits

0x3fe5,	// (0x00052aa4) list_form_wide_pane_ParamLimits

0xdf49,	// (0x0005ca08) aid_size_cell_graphic_pane

0xbdfc,	// (0x0005a8bb) data_form_pane_t1_ParamLimits

0xc7de,	// (0x0005b29d) data_form_wide_pane_t1_ParamLimits

0xd749,	// (0x0005c208) bg_status_flat_pane

0xcf9c,	// (0x0005ba5b) title_pane_t1_ParamLimits

0x3704,	// (0x000521c3) title_pane_t2_ParamLimits

0x372a,	// (0x000521e9) title_pane_t3_ParamLimits

0xf557,	// (0x0005e016) title_pane_t_ParamLimits

0x459b,	// (0x0005305a) level_1_signal_ParamLimits

0x45ad,	// (0x0005306c) level_2_signal_ParamLimits

0x45c0,	// (0x0005307f) level_3_signal_ParamLimits

0x45d3,	// (0x00053092) level_4_signal_ParamLimits

0x45e6,	// (0x000530a5) level_5_signal_ParamLimits

0x45f9,	// (0x000530b8) level_6_signal_ParamLimits

0x460c,	// (0x000530cb) level_7_signal_ParamLimits

0x459b,	// (0x0005305a) level_1_battery_ParamLimits

0x45ad,	// (0x0005306c) level_2_battery_ParamLimits

0x45c0,	// (0x0005307f) level_3_battery_ParamLimits

0x45d3,	// (0x00053092) level_4_battery_ParamLimits

0x45e6,	// (0x000530a5) level_5_battery_ParamLimits

0x45f9,	// (0x000530b8) level_6_battery_ParamLimits

0x460c,	// (0x000530cb) level_7_battery_ParamLimits

0x5cc3,	// (0x00054782) bg_status_flat_pane_g1

0x5ccb,	// (0x0005478a) bg_status_flat_pane_g2

0x5cd3,	// (0x00054792) bg_status_flat_pane_g3

0x5cdb,	// (0x0005479a) bg_status_flat_pane_g4

0x5ce3,	// (0x000547a2) bg_status_flat_pane_g5

0x5ceb,	// (0x000547aa) bg_status_flat_pane_g6

0x5cf3,	// (0x000547b2) bg_status_flat_pane_g7

0xd028,	// (0x0005bae7) tabs_3_active_pane_t1_ParamLimits

0xd028,	// (0x0005bae7) tabs_3_passive_pane_t1_ParamLimits

0xd03a,	// (0x0005baf9) tabs_4_active_pane_t1_ParamLimits

0xd03a,	// (0x0005baf9) tabs_4_1_passive_pane_t1_ParamLimits

0xd332,	// (0x0005bdf1) tabs_2_active_pane_t1_ParamLimits

0xd332,	// (0x0005bdf1) tabs_2_passive_pane_t1_ParamLimits

0x373c,	// (0x000521fb) bg_active_tab_pane_cp4_ParamLimits

0xd344,	// (0x0005be03) tabs_2_long_active_pane_t1_ParamLimits

0x4f91,	// (0x00053a50) bg_passive_tab_pane_cp4_ParamLimits

0x183b,	// (0x000502fa) list_single_midp_graphic_pane_t1_ParamLimits

0x373c,	// (0x000521fb) bg_active_tab_pane_cp5_ParamLimits

0xd357,	// (0x0005be16) tabs_3_long_active_pane_t1_ParamLimits

0x4f91,	// (0x00053a50) bg_passive_tab_pane_cp5_ParamLimits

0x183b,	// (0x000502fa) list_single_midp_graphic_pane_t1

0xd749,	// (0x0005c208) bg_status_flat_pane_ParamLimits

0x5137,	// (0x00053bf6) indicator_pane_cp2_ParamLimits

0x5137,	// (0x00053bf6) indicator_pane_cp2

0xd961,	// (0x0005c420) navi_pane_srt_ParamLimits

0xd961,	// (0x0005c420) navi_pane_srt

0x5286,	// (0x00053d45) popup_clock_digital_analogue_window_cp1

0x3819,	// (0x000522d8) indicator_pane_t1

0x4c42,	// (0x00053701) copy_highlight_pane

0x4c42,	// (0x00053701) cursor_graphics_pane

0x4c42,	// (0x00053701) graphic_within_text_pane

0x4c42,	// (0x00053701) link_highlight_pane

0x64d2,	// (0x00054f91) popup_preview_text_window_t5_ParamLimits

0x64d2,	// (0x00054f91) popup_preview_text_window_t5

0x4d70,	// (0x0005382f) cursor_digital_pane

0x4d70,	// (0x0005382f) cursor_primary_pane

0x4d81,	// (0x00053840) cursor_primary_small_pane

0x4d89,	// (0x00053848) cursor_secondary_pane

0x4d91,	// (0x00053850) cursor_title_pane

0x4d70,	// (0x0005382f) link_highlight_digital_pane

0x4d78,	// (0x00053837) link_highlight_primary_pane

0x4d81,	// (0x00053840) link_highlight_primary_small_pane

0x4d89,	// (0x00053848) link_highlight_secondary_pane

0x4d91,	// (0x00053850) link_highlight_title_pane

0x4d70,	// (0x0005382f) copy_highlight_digital_pane

0x4d70,	// (0x0005382f) copy_highlight_primary_pane

0x4d81,	// (0x00053840) copy_highlight_primary_small_pane

0x4d89,	// (0x00053848) copy_highlight_secondary_pane

0x4d91,	// (0x00053850) copy_highlight_title_pane

0x4d89,	// (0x00053848) graphic_text_digital_pane

0x5d61,	// (0x00054820) graphic_text_primary_pane

0x5d6a,	// (0x00054829) graphic_text_primary_small_pane

0x4d81,	// (0x00053840) graphic_text_secondary_pane

0x4d70,	// (0x0005382f) graphic_text_title_pane

0xd585,	// (0x0005c044) cursor_primary_pane_g1

0x5d53,	// (0x00054812) cursor_text_primary_t1

0xdbdf,	// (0x0005c69e) cursor_primary_small_pane_g1

0x5d45,	// (0x00054804) cursor_text_primary_small_t1

0xdbd5,	// (0x0005c694) cursor_primary_small_pane_g1_copy1

0x5d2d,	// (0x000547ec) cursor_text_primary_small_t1_copy1

0x5d0b,	// (0x000547ca) cursor_text_title_t1

0xdbcb,	// (0x0005c68a) cursor_title_pane_g1

0xd585,	// (0x0005c044) cursor_digital_pane_g1

0x4da3,	// (0x00053862) cursor_text_digital_t1

0x4dc8,	// (0x00053887) link_highlight_primary_pane_g1

0x5cb4,	// (0x00054773) link_highlight_primary_pane_t1

0x4db1,	// (0x00053870) link_highlight_primary_small_pane_g1

0x4db9,	// (0x00053878) link_highlight_primary_small_pane_t1

0x4dc8,	// (0x00053887) link_highlight_secondary_pane_g1

0x4dd0,	// (0x0005388f) link_highlight_secondary_pane_t1

0x5c28,	// (0x000546e7) link_highlight_title_pane_g1

0x5c30,	// (0x000546ef) link_highlight_title_pane_t1

0x5c11,	// (0x000546d0) link_highlight_digital_pane_g1

0x5c19,	// (0x000546d8) link_highlight_digital_pane_t1

0x5ae9,	// (0x000545a8) copy_highlight_primary_pane_g1

0x5af1,	// (0x000545b0) copy_highlight_primary_pane_t1

0x5ac3,	// (0x00054582) copy_highlight_primary_small_pane_g1

0x5ada,	// (0x00054599) copy_highlight_primary_small_pane_t1

0x4ddf,	// (0x0005389e) copy_highlight_secondary_pane_g1

0x4de7,	// (0x000538a6) copy_highlight_secondary_pane_t1

0x5ac3,	// (0x00054582) copy_highlight_title_pane_g1

0x5acb,	// (0x0005458a) copy_highlight_title_pane_t1

0x5ae9,	// (0x000545a8) copy_highlight_digital_pane_g1

0x6d24,	// (0x000557e3) copy_highlight_digital_pane_t1

0x6c78,	// (0x00055737) graphic_text_primary_pane_g1

0x6d08,	// (0x000557c7) graphic_text_primary_pane_t1

0x6d16,	// (0x000557d5) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0005e48d) graphic_text_primary_pane_t

0x6ce4,	// (0x000557a3) graphic_text_primary_small_pane_g1

0x6cec,	// (0x000557ab) graphic_text_primary_small_pane_t1

0x6cfa,	// (0x000557b9) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0005e488) graphic_text_primary_small_pane_t

0x6cc0,	// (0x0005577f) graphic_text_secondary_pane_g1

0x6cc8,	// (0x00055787) graphic_text_secondary_pane_t1

0x6cd6,	// (0x00055795) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0005e483) graphic_text_secondary_pane_t

0x6c9c,	// (0x0005575b) graphic_text_title_pane_g1

0x6ca4,	// (0x00055763) graphic_text_title_pane_t1

0x6cb2,	// (0x00055771) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0005e47e) graphic_text_title_pane_t

0x6c78,	// (0x00055737) graphic_text_digital_pane_g1

0x6c80,	// (0x0005573f) graphic_text_digital_pane_t1

0x6c8e,	// (0x0005574d) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0005e479) graphic_text_digital_pane_t

0x373c,	// (0x000521fb) navi_icon_pane_srt_ParamLimits

0x373c,	// (0x000521fb) navi_icon_pane_srt

0x365c,	// (0x0005211b) navi_midp_pane_srt

0x365c,	// (0x0005211b) navi_navi_pane_srt

0x373c,	// (0x000521fb) navi_text_pane_srt_ParamLimits

0x373c,	// (0x000521fb) navi_text_pane_srt

0x6c43,	// (0x00055702) navi_navi_icon_text_pane_srt

0x6c4b,	// (0x0005570a) navi_navi_pane_srt_g1_ParamLimits

0x6c4b,	// (0x0005570a) navi_navi_pane_srt_g1

0x6c5d,	// (0x0005571c) navi_navi_pane_srt_g2_ParamLimits

0x6c5d,	// (0x0005571c) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0005e474) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0005e474) navi_navi_pane_srt_g

0x6c6f,	// (0x0005572e) navi_navi_tabs_pane_srt

0x6c43,	// (0x00055702) navi_navi_text_pane_srt

0x6c43,	// (0x00055702) navi_navi_volume_pane_srt

0x6c34,	// (0x000556f3) navi_navi_text_pane_srt_t1

0x1be5,	// (0x000506a4) navi_navi_volume_pane_srt_g1

0x1bed,	// (0x000506ac) volume_small_pane_srt_ParamLimits

0x1bed,	// (0x000506ac) volume_small_pane_srt

0x0f7a,	// (0x0004fa39) volume_small_pane_srt_g1_ParamLimits

0x0f7a,	// (0x0004fa39) volume_small_pane_srt_g1

0x0f8a,	// (0x0004fa49) volume_small_pane_srt_g2_ParamLimits

0x0f8a,	// (0x0004fa49) volume_small_pane_srt_g2

0x0f9b,	// (0x0004fa5a) volume_small_pane_srt_g3_ParamLimits

0x0f9b,	// (0x0004fa5a) volume_small_pane_srt_g3

0x0fac,	// (0x0004fa6b) volume_small_pane_srt_g4_ParamLimits

0x0fac,	// (0x0004fa6b) volume_small_pane_srt_g4

0x0fbd,	// (0x0004fa7c) volume_small_pane_srt_g5_ParamLimits

0x0fbd,	// (0x0004fa7c) volume_small_pane_srt_g5

0x0fce,	// (0x0004fa8d) volume_small_pane_srt_g6_ParamLimits

0x0fce,	// (0x0004fa8d) volume_small_pane_srt_g6

0x0fdf,	// (0x0004fa9e) volume_small_pane_srt_g7_ParamLimits

0x0fdf,	// (0x0004fa9e) volume_small_pane_srt_g7

0x0ff0,	// (0x0004faaf) volume_small_pane_srt_g8_ParamLimits

0x0ff0,	// (0x0004faaf) volume_small_pane_srt_g8

0x1001,	// (0x0004fac0) volume_small_pane_srt_g9_ParamLimits

0x1001,	// (0x0004fac0) volume_small_pane_srt_g9

0x1012,	// (0x0004fad1) volume_small_pane_srt_g10_ParamLimits

0x1012,	// (0x0004fad1) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0005e221) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0005e221) volume_small_pane_srt_g

0x3b16,	// (0x000525d5) query_popup_data_pane_cp2

0x6c1a,	// (0x000556d9) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6c1a,	// (0x000556d9) navi_navi_icon_text_pane_srt_t1

0x5d61,	// (0x00054820) navi_tabs_2_long_pane_srt

0x5d61,	// (0x00054820) navi_tabs_2_pane_srt

0x5d61,	// (0x00054820) navi_tabs_3_long_pane_srt

0x5d61,	// (0x00054820) navi_tabs_3_pane_srt

0x5d61,	// (0x00054820) navi_tabs_4_pane_srt

0x1bc5,	// (0x00050684) tabs_2_active_pane_srt_ParamLimits

0x1bc5,	// (0x00050684) tabs_2_active_pane_srt

0x1bd5,	// (0x00050694) tabs_2_passive_pane_srt_ParamLimits

0x1bd5,	// (0x00050694) tabs_2_passive_pane_srt

0x551b,	// (0x00053fda) bg_passive_tab_pane_cp1_srt_ParamLimits

0x551b,	// (0x00053fda) bg_passive_tab_pane_cp1_srt

0x6be6,	// (0x000556a5) bg_passive_tab_pane_g1_cp1_srt

0x4884,	// (0x00053343) bg_passive_tab_pane_g2_cp1_srt

0x6bef,	// (0x000556ae) bg_passive_tab_pane_g3_cp1_srt

0x39b7,	// (0x00052476) bg_active_tab_pane_cp1_srt_ParamLimits

0x39b7,	// (0x00052476) bg_active_tab_pane_cp1_srt

0x6bf8,	// (0x000556b7) tabs_2_active_pane_srt_g1

0xdf8b,	// (0x0005ca4a) tabs_2_active_pane_srt_t1_ParamLimits

0xdf8b,	// (0x0005ca4a) tabs_2_active_pane_srt_t1

0x6be6,	// (0x000556a5) bg_active_tab_pane_g1_cp1_srt

0x4884,	// (0x00053343) bg_active_tab_pane_g2_cp1_srt

0x6bef,	// (0x000556ae) bg_active_tab_pane_g3_cp1_srt

0x1b92,	// (0x00050651) tabs_3_active_pane_srt_ParamLimits

0x1b92,	// (0x00050651) tabs_3_active_pane_srt

0x1ba3,	// (0x00050662) tabs_3_passive_pane_cp_srt_ParamLimits

0x1ba3,	// (0x00050662) tabs_3_passive_pane_cp_srt

0x1bb4,	// (0x00050673) tabs_3_passive_pane_srt_ParamLimits

0x1bb4,	// (0x00050673) tabs_3_passive_pane_srt

0x551b,	// (0x00053fda) bg_passive_tab_pane_cp2_srt_ParamLimits

0x551b,	// (0x00053fda) bg_passive_tab_pane_cp2_srt

0x4df6,	// (0x000538b5) bg_passive_tab_pane_g1_cp2_srt

0x4884,	// (0x00053343) bg_passive_tab_pane_g2_cp2_srt

0x4dff,	// (0x000538be) bg_passive_tab_pane_g3_cp2_srt

0x39b7,	// (0x00052476) bg_active_tab_pane_cp2_srt_ParamLimits

0x39b7,	// (0x00052476) bg_active_tab_pane_cp2_srt

0x6bcc,	// (0x0005568b) tabs_3_active_pane_srt_g1

0xdf75,	// (0x0005ca34) tabs_3_active_pane_srt_t1_ParamLimits

0xdf75,	// (0x0005ca34) tabs_3_active_pane_srt_t1

0x4df6,	// (0x000538b5) bg_active_tab_pane_g1_cp2_srt

0x4884,	// (0x00053343) bg_active_tab_pane_g2_cp2_srt

0x4dff,	// (0x000538be) bg_active_tab_pane_g3_cp2_srt

0x1b4a,	// (0x00050609) tabs_4_active_pane_srt_ParamLimits

0x1b4a,	// (0x00050609) tabs_4_active_pane_srt

0x1b5c,	// (0x0005061b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1b5c,	// (0x0005061b) tabs_4_passive_pane_cp2_srt

0x1181,	// (0x0004fc40) aid_size_cell_toolbar

0x687c,	// (0x0005533b) main_idle_act_pane_ParamLimits

0x134c,	// (0x0004fe0b) popup_large_graphic_colour_window_ParamLimits

0xc6ed,	// (0x0005b1ac) popup_toolbar_window_ParamLimits

0xc6ed,	// (0x0005b1ac) popup_toolbar_window

0x6a34,	// (0x000554f3) list_single_graphic_2heading_pane_ParamLimits

0x6a34,	// (0x000554f3) list_single_graphic_2heading_pane

0x4348,	// (0x00052e07) aid_size_cell_apps_grid_lsc_pane

0x435a,	// (0x00052e19) aid_size_cell_apps_grid_prt_pane

0x4f91,	// (0x00053a50) bg_wml_button_pane_cp1_ParamLimits

0x4f91,	// (0x00053a50) bg_wml_button_pane_cp1

0xdb8e,	// (0x0005c64d) form_midp_field_text_pane_t1_ParamLimits

0x551b,	// (0x00053fda) input_focus_pane_cp050_ParamLimits

0x5782,	// (0x00054241) list_midp_form_text_pane_ParamLimits

0x5728,	// (0x000541e7) input_focus_pane_cp051_ParamLimits

0x573c,	// (0x000541fb) list_midp_choice_pane_ParamLimits

0xdb2c,	// (0x0005c5eb) list_single_2graphic_pane_cp3_ParamLimits

0xdb2c,	// (0x0005c5eb) list_single_2graphic_pane_cp3

0xdb3f,	// (0x0005c5fe) list_single_midp_graphic_pane_ParamLimits

0xdb3f,	// (0x0005c5fe) list_single_midp_graphic_pane

0xf4c2,	// (0x0005df81) list_single_graphic_2heading_pane_g1_ParamLimits

0xf4c2,	// (0x0005df81) list_single_graphic_2heading_pane_g1

0xf4ce,	// (0x0005df8d) list_single_graphic_2heading_pane_g4_ParamLimits

0xf4ce,	// (0x0005df8d) list_single_graphic_2heading_pane_g4

0xf4da,	// (0x0005df99) list_single_graphic_2heading_pane_g5_ParamLimits

0xf4da,	// (0x0005df99) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0005e274) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0005e274) list_single_graphic_2heading_pane_g

0xf4e6,	// (0x0005dfa5) list_single_graphic_2heading_pane_t1_ParamLimits

0xf4e6,	// (0x0005dfa5) list_single_graphic_2heading_pane_t1

0xf4fa,	// (0x0005dfb9) list_single_graphic_2heading_pane_t2_ParamLimits

0xf4fa,	// (0x0005dfb9) list_single_graphic_2heading_pane_t2

0xf52e,	// (0x0005dfed) list_single_graphic_2heading_pane_t3_ParamLimits

0xf52e,	// (0x0005dfed) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0005e27b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0005e27b) list_single_graphic_2heading_pane_t

0x53e5,	// (0x00053ea4) bg_popup_sub_pane_cp2

0x540f,	// (0x00053ece) grid_toobar_pane

0x1760,	// (0x0005021f) cell_toolbar_pane_ParamLimits

0x1760,	// (0x0005021f) cell_toolbar_pane

0x544b,	// (0x00053f0a) cell_toolbar_pane_g1_ParamLimits

0x544b,	// (0x00053f0a) cell_toolbar_pane_g1

0x545f,	// (0x00053f1e) cell_toolbar_pane_g2_ParamLimits

0x545f,	// (0x00053f1e) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0005e289) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0005e289) cell_toolbar_pane_g

0x5481,	// (0x00053f40) grid_highlight_pane_cp2_ParamLimits

0x5481,	// (0x00053f40) grid_highlight_pane_cp2

0x549b,	// (0x00053f5a) toolbar_button_pane

0x54a7,	// (0x00053f66) toolbar_button_pane_g1

0x54af,	// (0x00053f6e) toolbar_button_pane_g2

0x54b7,	// (0x00053f76) toolbar_button_pane_g3

0x54bf,	// (0x00053f7e) toolbar_button_pane_g4

0x54c7,	// (0x00053f86) toolbar_button_pane_g5

0x54cf,	// (0x00053f8e) toolbar_button_pane_g6

0x54d7,	// (0x00053f96) toolbar_button_pane_g7

0x54df,	// (0x00053f9e) toolbar_button_pane_g8

0x54e7,	// (0x00053fa6) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0005e28e) toolbar_button_pane_g

0x17ba,	// (0x00050279) list_single_2graphic_pane_g1_cp3_ParamLimits

0x17ba,	// (0x00050279) list_single_2graphic_pane_g1_cp3

0xc745,	// (0x0005b204) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc745,	// (0x0005b204) list_single_2graphic_pane_g2_cp3

0x17d7,	// (0x00050296) list_single_2graphic_pane_g3_cp3

0x17df,	// (0x0005029e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x17df,	// (0x0005029e) list_single_2graphic_pane_g4_cp3

0x17eb,	// (0x000502aa) list_single_2graphic_pane_t1_cp3_ParamLimits

0x17eb,	// (0x000502aa) list_single_2graphic_pane_t1_cp3

0x182f,	// (0x000502ee) list_single_midp_graphic_pane_g2_ParamLimits

0x182f,	// (0x000502ee) list_single_midp_graphic_pane_g2

0xf4ba,	// (0x0005df79) aid_zoom_text_primary

0x1189,	// (0x0004fc48) aid_zoom_text_secondary

0xd5dd,	// (0x0005c09c) status_small_pane_g7_ParamLimits

0xd5dd,	// (0x0005c09c) status_small_pane_g7

0xd600,	// (0x0005c0bf) status_small_pane_t1_ParamLimits

0xcf78,	// (0x0005ba37) title_pane_g2

0x0003,

0xf54e,	// (0x0005e00d) title_pane_g

0xd1f0,	// (0x0005bcaf) aid_size_cell_colour_1_pane_ParamLimits

0xd1f0,	// (0x0005bcaf) aid_size_cell_colour_1_pane

0xd204,	// (0x0005bcc3) aid_size_cell_colour_2_pane_ParamLimits

0xd204,	// (0x0005bcc3) aid_size_cell_colour_2_pane

0xd218,	// (0x0005bcd7) aid_size_cell_colour_3_pane_ParamLimits

0xd218,	// (0x0005bcd7) aid_size_cell_colour_3_pane

0xd22c,	// (0x0005bceb) aid_size_cell_colour_4_pane_ParamLimits

0xd22c,	// (0x0005bceb) aid_size_cell_colour_4_pane

0x0b69,	// (0x0004f628) title_pane_stacon_g1_ParamLimits

0x0b69,	// (0x0004f628) title_pane_stacon_g1

0x5b48,	// (0x00054607) popup_note_wait_window_g3_ParamLimits

0x5b48,	// (0x00054607) popup_note_wait_window_g3

0x5bbe,	// (0x0005467d) popup_note_wait_window_t5_ParamLimits

0x5bbe,	// (0x0005467d) popup_note_wait_window_t5

0x365c,	// (0x0005211b) main_feb_china_hwr_fs_writing_pane

0xc0f5,	// (0x0005abb4) popup_feb_china_hwr_fs_window_ParamLimits

0xc0f5,	// (0x0005abb4) popup_feb_china_hwr_fs_window

0xc756,	// (0x0005b215) aid_size_cell_hwr_fs_ParamLimits

0xc756,	// (0x0005b215) aid_size_cell_hwr_fs

0x551b,	// (0x00053fda) bg_popup_sub_pane_cp3_ParamLimits

0x551b,	// (0x00053fda) bg_popup_sub_pane_cp3

0xc76b,	// (0x0005b22a) grid_hwr_fs_pane_ParamLimits

0xc76b,	// (0x0005b22a) grid_hwr_fs_pane

0x18ae,	// (0x0005036d) linegrid_hwr_fs_pane_ParamLimits

0x18ae,	// (0x0005036d) linegrid_hwr_fs_pane

0xc783,	// (0x0005b242) cell_hwr_fs_pane_ParamLimits

0xc783,	// (0x0005b242) cell_hwr_fs_pane

0x5527,	// (0x00053fe6) linegrid_hwr_fs_pane_g1_ParamLimits

0x5527,	// (0x00053fe6) linegrid_hwr_fs_pane_g1

0xdb00,	// (0x0005c5bf) linegrid_hwr_fs_pane_g2_ParamLimits

0xdb00,	// (0x0005c5bf) linegrid_hwr_fs_pane_g2

0x5545,	// (0x00054004) linegrid_hwr_fs_pane_g3_ParamLimits

0x5545,	// (0x00054004) linegrid_hwr_fs_pane_g3

0x18e0,	// (0x0005039f) linegrid_hwr_fs_pane_g4_ParamLimits

0x18e0,	// (0x0005039f) linegrid_hwr_fs_pane_g4

0x18fa,	// (0x000503b9) linegrid_hwr_fs_pane_g5_ParamLimits

0x18fa,	// (0x000503b9) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0005e2b4) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0005e2b4) linegrid_hwr_fs_pane_g

0x5551,	// (0x00054010) cell_hwr_fs_pane_g1_ParamLimits

0x5551,	// (0x00054010) cell_hwr_fs_pane_g1

0x531c,	// (0x00053ddb) cell_hwr_fs_pane_g2_ParamLimits

0x531c,	// (0x00053ddb) cell_hwr_fs_pane_g2

0xdb12,	// (0x0005c5d1) cell_hwr_fs_pane_g3_ParamLimits

0xdb12,	// (0x0005c5d1) cell_hwr_fs_pane_g3

0xdb1f,	// (0x0005c5de) cell_hwr_fs_pane_g4_ParamLimits

0xdb1f,	// (0x0005c5de) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0005e2bf) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0005e2bf) cell_hwr_fs_pane_g

0xc7a9,	// (0x0005b268) cell_hwr_fs_pane_t1

0x365c,	// (0x0005211b) grid_highlight_pane_cp6

0x365c,	// (0x0005211b) main_idle_act2_pane

0x40ff,	// (0x00052bbe) aid_inside_area_popup_secondary

0xdbe9,	// (0x0005c6a8) aid_inside_area_window_primary_ParamLimits

0xdbe9,	// (0x0005c6a8) aid_inside_area_window_primary

0x6d33,	// (0x000557f2) ai2_news_ticker_pane

0x6d3b,	// (0x000557fa) aid_size_cell_ai1_link_ParamLimits

0x6d3b,	// (0x000557fa) aid_size_cell_ai1_link

0xdfa1,	// (0x0005ca60) popup_ai2_data_window_ParamLimits

0xdfa1,	// (0x0005ca60) popup_ai2_data_window

0x6d6b,	// (0x0005582a) popup_ai2_link_window_ParamLimits

0x6d6b,	// (0x0005582a) popup_ai2_link_window

0x551b,	// (0x00053fda) bg_popup_sub_pane_cp4_ParamLimits

0x551b,	// (0x00053fda) bg_popup_sub_pane_cp4

0x6d7f,	// (0x0005583e) grid_ai2_link_pane_ParamLimits

0x6d7f,	// (0x0005583e) grid_ai2_link_pane

0x6d96,	// (0x00055855) popup_ai2_link_window_g1_ParamLimits

0x6d96,	// (0x00055855) popup_ai2_link_window_g1

0x6da2,	// (0x00055861) popup_ai2_link_window_g2_ParamLimits

0x6da2,	// (0x00055861) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0005e492) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0005e492) popup_ai2_link_window_g

0x6db1,	// (0x00055870) ai2_mp_button_pane

0x6db9,	// (0x00055878) ai2_mp_volume_pane

0x5728,	// (0x000541e7) bg_popup_sub_pane_cp5_ParamLimits

0x5728,	// (0x000541e7) bg_popup_sub_pane_cp5

0x6dc1,	// (0x00055880) heading_ai2_gene_pane_ParamLimits

0x6dc1,	// (0x00055880) heading_ai2_gene_pane

0x6dcd,	// (0x0005588c) list_ai2_gene_pane_ParamLimits

0x6dcd,	// (0x0005588c) list_ai2_gene_pane

0x6e15,	// (0x000558d4) cell_ai2_link_pane_ParamLimits

0x6e15,	// (0x000558d4) cell_ai2_link_pane

0x6e2b,	// (0x000558ea) cell_ai2_link_pane_g1

0x365c,	// (0x0005211b) grid_highlight_pane_cp7

0x1c02,	// (0x000506c1) ai2_mp_volume_pane_g1

0x6efb,	// (0x000559ba) ai2_mp_volume_pane_g2

0xdfcb,	// (0x0005ca8a) list_ai2_gene_pane_t1

0x6f03,	// (0x000559c2) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0005e4ab) ai2_mp_volume_pane_g

0x1c0a,	// (0x000506c9) volume_small_pane_cp3

0x6f0b,	// (0x000559ca) aid_size_cell_ai2_button

0x6f13,	// (0x000559d2) grid_ai2_button_pane

0x6f1c,	// (0x000559db) cell_ai2_button_pane_ParamLimits

0x6f1c,	// (0x000559db) cell_ai2_button_pane

0x3652,	// (0x00052111) cell_ai2_button_pane_g1

0x365c,	// (0x0005211b) grid_highlight_pane_cp8

0x6ebb,	// (0x0005597a) ai2_gene_pane_t1_ParamLimits

0x6ebb,	// (0x0005597a) ai2_gene_pane_t1

0xc06b,	// (0x0005ab2a) aid_height_parent_landscape

0xdd31,	// (0x0005c7f0) aid_height_set_list

0x687c,	// (0x0005533b) aid_size_parent

0xdf49,	// (0x0005ca08) aid_size_cell_graphic_pane_ParamLimits

0x6ddd,	// (0x0005589c) popup_ai2_data_window_g1_ParamLimits

0x6ddd,	// (0x0005589c) popup_ai2_data_window_g1

0x6de9,	// (0x000558a8) ai2_news_ticker_pane_g1

0x6df1,	// (0x000558b0) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0005e497) ai2_news_ticker_pane_g

0x6df9,	// (0x000558b8) ai2_news_ticker_pane_t1

0x6e07,	// (0x000558c6) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0005e49c) ai2_news_ticker_pane_t

0x6e34,	// (0x000558f3) heading_ai2_gene_pane_g1

0x6e3c,	// (0x000558fb) heading_ai2_gene_pane_t1_ParamLimits

0x6e3c,	// (0x000558fb) heading_ai2_gene_pane_t1

0x6e51,	// (0x00055910) list_highlight_pane_cp6

0xdfb5,	// (0x0005ca74) ai2_gene_pane_ParamLimits

0xdfb5,	// (0x0005ca74) ai2_gene_pane

0xdfd9,	// (0x0005ca98) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0005e4a1) list_ai2_gene_pane_t

0x6e8c,	// (0x0005594b) list_highlight_pane_cp8_ParamLimits

0x6e8c,	// (0x0005594b) list_highlight_pane_cp8

0x6e9d,	// (0x0005595c) ai2_gene_pane_g1_ParamLimits

0x6e9d,	// (0x0005595c) ai2_gene_pane_g1

0x6eaf,	// (0x0005596e) ai2_gene_pane_g2_ParamLimits

0x6eaf,	// (0x0005596e) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0005e4a6) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0005e4a6) ai2_gene_pane_g

0x3f41,	// (0x00052a00) scroll_pane_cp12

0xc028,	// (0x0005aae7) control_pane_t3_ParamLimits

0xc028,	// (0x0005aae7) control_pane_t3

0xd5f1,	// (0x0005c0b0) status_small_pane_g8_ParamLimits

0xd5f1,	// (0x0005c0b0) status_small_pane_g8

0xc18a,	// (0x0005ac49) popup_find_window_ParamLimits

0xc417,	// (0x0005aed6) popup_note_image_window_ParamLimits

0x1790,	// (0x0005024f) list_double2_graphic_pane_vc_g1_ParamLimits

0x1790,	// (0x0005024f) list_double2_graphic_pane_vc_g1

0x4b7b,	// (0x0005363a) list_double2_graphic_pane_vc_g2_ParamLimits

0x4b7b,	// (0x0005363a) list_double2_graphic_pane_vc_g2

0x2d01,	// (0x000517c0) list_double2_graphic_pane_vc_g3_ParamLimits

0x2d01,	// (0x000517c0) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005e282) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005e282) list_double2_graphic_pane_vc_g

0x179c,	// (0x0005025b) list_double2_graphic_pane_vc_t1_ParamLimits

0x179c,	// (0x0005025b) list_double2_graphic_pane_vc_t1

0x4b7b,	// (0x0005363a) list_single_heading_pane_vc_g1_ParamLimits

0x4b7b,	// (0x0005363a) list_single_heading_pane_vc_g1

0x2d01,	// (0x000517c0) list_single_heading_pane_vc_g2_ParamLimits

0x2d01,	// (0x000517c0) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e091) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e091) list_single_heading_pane_vc_g

0x1807,	// (0x000502c6) list_single_heading_pane_vc_t1_ParamLimits

0x1807,	// (0x000502c6) list_single_heading_pane_vc_t1

0x181d,	// (0x000502dc) list_single_heading_pane_vc_t2_ParamLimits

0x181d,	// (0x000502dc) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0005e2a3) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0005e2a3) list_single_heading_pane_vc_t

0x2d0d,	// (0x000517cc) list_setting_number_pane_vc_g1_ParamLimits

0x2d0d,	// (0x000517cc) list_setting_number_pane_vc_g1

0x2d19,	// (0x000517d8) list_setting_number_pane_vc_g2_ParamLimits

0x2d19,	// (0x000517d8) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0005e2a8) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0005e2a8) list_setting_number_pane_vc_g

0x1851,	// (0x00050310) list_setting_number_pane_vc_t1_ParamLimits

0x1851,	// (0x00050310) list_setting_number_pane_vc_t1

0x1865,	// (0x00050324) list_setting_number_pane_vc_t2_ParamLimits

0x1865,	// (0x00050324) list_setting_number_pane_vc_t2

0x2d25,	// (0x000517e4) list_setting_number_pane_vc_t3_ParamLimits

0x2d25,	// (0x000517e4) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0005e2ad) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0005e2ad) list_setting_number_pane_vc_t

0x2d51,	// (0x00051810) set_value_pane_vc_ParamLimits

0x2d51,	// (0x00051810) set_value_pane_vc

0x6a34,	// (0x000554f3) list_double2_graphic_pane_vc_ParamLimits

0x6a34,	// (0x000554f3) list_double2_graphic_pane_vc

0x2e23,	// (0x000518e2) list_double2_large_graphic_pane_vc_ParamLimits

0x2e23,	// (0x000518e2) list_double2_large_graphic_pane_vc

0x6a34,	// (0x000554f3) list_double2_pane_vc_ParamLimits

0x6a34,	// (0x000554f3) list_double2_pane_vc

0x6a34,	// (0x000554f3) list_double_graphic_heading_pane_vc_ParamLimits

0x6a34,	// (0x000554f3) list_double_graphic_heading_pane_vc

0x6a34,	// (0x000554f3) list_double_graphic_pane_vc_ParamLimits

0x6a34,	// (0x000554f3) list_double_graphic_pane_vc

0x6a34,	// (0x000554f3) list_double_heading_pane_vc_ParamLimits

0x6a34,	// (0x000554f3) list_double_heading_pane_vc

0x2e34,	// (0x000518f3) list_double_large_graphic_pane_vc_ParamLimits

0x2e34,	// (0x000518f3) list_double_large_graphic_pane_vc

0x6a34,	// (0x000554f3) list_double_number_pane_vc_ParamLimits

0x6a34,	// (0x000554f3) list_double_number_pane_vc

0x6a34,	// (0x000554f3) list_double_pane_vc_ParamLimits

0x6a34,	// (0x000554f3) list_double_pane_vc

0x6a34,	// (0x000554f3) list_double_time_pane_vc_ParamLimits

0x6a34,	// (0x000554f3) list_double_time_pane_vc

0x6a34,	// (0x000554f3) list_setting_number_pane_vc_ParamLimits

0x6a34,	// (0x000554f3) list_setting_number_pane_vc

0x6a34,	// (0x000554f3) list_setting_pane_vc_ParamLimits

0x6a34,	// (0x000554f3) list_setting_pane_vc

0x6a34,	// (0x000554f3) list_single_graphic_heading_pane_vc_ParamLimits

0x6a34,	// (0x000554f3) list_single_graphic_heading_pane_vc

0x6a34,	// (0x000554f3) list_single_heading_pane_vc_ParamLimits

0x6a34,	// (0x000554f3) list_single_heading_pane_vc

0x6a34,	// (0x000554f3) list_single_number_heading_pane_vc_ParamLimits

0x6a34,	// (0x000554f3) list_single_number_heading_pane_vc

0x1790,	// (0x0005024f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1790,	// (0x0005024f) list_double_graphic_heading_pane_vc_g1

0x4b7b,	// (0x0005363a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4b7b,	// (0x0005363a) list_double_graphic_heading_pane_vc_g2

0x2d01,	// (0x000517c0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2d01,	// (0x000517c0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005e282) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005e282) list_double_graphic_heading_pane_vc_g

0x2efe,	// (0x000519bd) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2efe,	// (0x000519bd) list_double_graphic_heading_pane_vc_t1

0x2f1a,	// (0x000519d9) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x2f1a,	// (0x000519d9) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0005e4b2) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0005e4b2) list_double_graphic_heading_pane_vc_t

0x2d0d,	// (0x000517cc) list_setting_pane_vc_g1_ParamLimits

0x2d0d,	// (0x000517cc) list_setting_pane_vc_g1

0x2d19,	// (0x000517d8) list_setting_pane_vc_g2_ParamLimits

0x2d19,	// (0x000517d8) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0005e2a8) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0005e2a8) list_setting_pane_vc_g

0x2f38,	// (0x000519f7) list_setting_pane_vc_t1_ParamLimits

0x2f38,	// (0x000519f7) list_setting_pane_vc_t1

0x2f54,	// (0x00051a13) list_setting_pane_vc_t2_ParamLimits

0x2f54,	// (0x00051a13) list_setting_pane_vc_t2

0x0001,

0xfa21,	// (0x0005e4e0) list_setting_pane_vc_t_ParamLimits

0xfa21,	// (0x0005e4e0) list_setting_pane_vc_t

0x2d51,	// (0x00051810) set_value_pane_cp_vc_ParamLimits

0x2d51,	// (0x00051810) set_value_pane_cp_vc

0x4b7b,	// (0x0005363a) list_single_number_heading_pane_vc_g1_ParamLimits

0x4b7b,	// (0x0005363a) list_single_number_heading_pane_vc_g1

0x2d01,	// (0x000517c0) list_single_number_heading_pane_vc_g2_ParamLimits

0x2d01,	// (0x000517c0) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e091) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e091) list_single_number_heading_pane_vc_g

0x2f70,	// (0x00051a2f) list_single_number_heading_pane_vc_t1_ParamLimits

0x2f70,	// (0x00051a2f) list_single_number_heading_pane_vc_t1

0x2f86,	// (0x00051a45) list_single_number_heading_pane_vc_t2_ParamLimits

0x2f86,	// (0x00051a45) list_single_number_heading_pane_vc_t2

0x2f98,	// (0x00051a57) list_single_number_heading_pane_vc_t3_ParamLimits

0x2f98,	// (0x00051a57) list_single_number_heading_pane_vc_t3

0x0002,

0xfa26,	// (0x0005e4e5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0005e4e5) list_single_number_heading_pane_vc_t

0x1790,	// (0x0005024f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1790,	// (0x0005024f) list_single_graphic_heading_pane_vc_g1

0x4b7b,	// (0x0005363a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4b7b,	// (0x0005363a) list_single_graphic_heading_pane_vc_g4

0x2d01,	// (0x000517c0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2d01,	// (0x000517c0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0005e282) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005e282) list_single_graphic_heading_pane_vc_g

0x2f70,	// (0x00051a2f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x2f70,	// (0x00051a2f) list_single_graphic_heading_pane_vc_t1

0x2faa,	// (0x00051a69) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x2faa,	// (0x00051a69) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2d,	// (0x0005e4ec) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2d,	// (0x0005e4ec) list_single_graphic_heading_pane_vc_t

0x4b7b,	// (0x0005363a) list_double2_pane_vc_g1_ParamLimits

0x4b7b,	// (0x0005363a) list_double2_pane_vc_g1

0x2d01,	// (0x000517c0) list_double2_pane_vc_g2_ParamLimits

0x2d01,	// (0x000517c0) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e091) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e091) list_double2_pane_vc_g

0x2fbc,	// (0x00051a7b) list_double2_pane_vc_t1_ParamLimits

0x2fbc,	// (0x00051a7b) list_double2_pane_vc_t1

0x2fd2,	// (0x00051a91) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2fd2,	// (0x00051a91) list_double2_large_graphic_pane_vc_g1

0x2fde,	// (0x00051a9d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2fde,	// (0x00051a9d) list_double2_large_graphic_pane_vc_g2

0x2fea,	// (0x00051aa9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2fea,	// (0x00051aa9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0005e0a9) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0005e0a9) list_double2_large_graphic_pane_vc_g

0x2ff6,	// (0x00051ab5) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x2ff6,	// (0x00051ab5) list_double2_large_graphic_pane_vc_t1

0x300c,	// (0x00051acb) list_double_time_pane_vc_g1_ParamLimits

0x300c,	// (0x00051acb) list_double_time_pane_vc_g1

0x3018,	// (0x00051ad7) list_double_time_pane_vc_g2_ParamLimits

0x3018,	// (0x00051ad7) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x0005e4f1) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x0005e4f1) list_double_time_pane_vc_g

0x3024,	// (0x00051ae3) list_double_time_pane_vc_t1_ParamLimits

0x3024,	// (0x00051ae3) list_double_time_pane_vc_t1

0x3048,	// (0x00051b07) list_double_time_pane_vc_t2_ParamLimits

0x3048,	// (0x00051b07) list_double_time_pane_vc_t2

0x3097,	// (0x00051b56) list_double_time_pane_vc_t3_ParamLimits

0x3097,	// (0x00051b56) list_double_time_pane_vc_t3

0x30a9,	// (0x00051b68) list_double_time_pane_vc_t4_ParamLimits

0x30a9,	// (0x00051b68) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0005e4f6) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0005e4f6) list_double_time_pane_vc_t

0x4b7b,	// (0x0005363a) list_double_pane_vc_g1_ParamLimits

0x4b7b,	// (0x0005363a) list_double_pane_vc_g1

0x2d01,	// (0x000517c0) list_double_pane_vc_g2_ParamLimits

0x2d01,	// (0x000517c0) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e091) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e091) list_double_pane_vc_g

0x30bd,	// (0x00051b7c) list_double_pane_vc_t1_ParamLimits

0x30bd,	// (0x00051b7c) list_double_pane_vc_t1

0x30d1,	// (0x00051b90) list_double_pane_vc_t2_ParamLimits

0x30d1,	// (0x00051b90) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x0005e4ff) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x0005e4ff) list_double_pane_vc_t

0x4b7b,	// (0x0005363a) list_double_number_pane_vc_g1_ParamLimits

0x4b7b,	// (0x0005363a) list_double_number_pane_vc_g1

0x2d01,	// (0x000517c0) list_double_number_pane_vc_g2_ParamLimits

0x2d01,	// (0x000517c0) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e091) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e091) list_double_number_pane_vc_g

0x30e9,	// (0x00051ba8) list_double_number_pane_vc_t1_ParamLimits

0x30e9,	// (0x00051ba8) list_double_number_pane_vc_t1

0x30fb,	// (0x00051bba) list_double_number_pane_vc_t2_ParamLimits

0x30fb,	// (0x00051bba) list_double_number_pane_vc_t2

0x310f,	// (0x00051bce) list_double_number_pane_vc_t3_ParamLimits

0x310f,	// (0x00051bce) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x0005e504) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x0005e504) list_double_number_pane_vc_t

0x3127,	// (0x00051be6) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3127,	// (0x00051be6) list_double_large_graphic_pane_vc_g1

0x3149,	// (0x00051c08) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3149,	// (0x00051c08) list_double_large_graphic_pane_vc_g2

0x315d,	// (0x00051c1c) list_double_large_graphic_pane_vc_g3_ParamLimits

0x315d,	// (0x00051c1c) list_double_large_graphic_pane_vc_g3

0x316c,	// (0x00051c2b) list_double_large_graphic_pane_vc_g4_ParamLimits

0x316c,	// (0x00051c2b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x0005e50b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0005e50b) list_double_large_graphic_pane_vc_g

0x3178,	// (0x00051c37) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3178,	// (0x00051c37) list_double_large_graphic_pane_vc_t1

0x3194,	// (0x00051c53) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3194,	// (0x00051c53) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0005e514) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0005e514) list_double_large_graphic_pane_vc_t

0x4b7b,	// (0x0005363a) list_double_heading_pane_vc_g1_ParamLimits

0x4b7b,	// (0x0005363a) list_double_heading_pane_vc_g1

0x2d01,	// (0x000517c0) list_double_heading_pane_vc_g2_ParamLimits

0x2d01,	// (0x000517c0) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e091) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e091) list_double_heading_pane_vc_g

0x31b6,	// (0x00051c75) list_double_heading_pane_vc_t1_ParamLimits

0x31b6,	// (0x00051c75) list_double_heading_pane_vc_t1

0x31ca,	// (0x00051c89) list_double_heading_pane_vc_t2_ParamLimits

0x31ca,	// (0x00051c89) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x0005e519) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x0005e519) list_double_heading_pane_vc_t

0x31e2,	// (0x00051ca1) list_double_graphic_pane_vc_g1_ParamLimits

0x31e2,	// (0x00051ca1) list_double_graphic_pane_vc_g1

0x31ee,	// (0x00051cad) list_double_graphic_pane_vc_g2_ParamLimits

0x31ee,	// (0x00051cad) list_double_graphic_pane_vc_g2

0x4b7b,	// (0x0005363a) list_double_graphic_pane_vc_g3_ParamLimits

0x4b7b,	// (0x0005363a) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x0005e51e) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0005e51e) list_double_graphic_pane_vc_g

0x320b,	// (0x00051cca) list_double_graphic_pane_vc_t1_ParamLimits

0x320b,	// (0x00051cca) list_double_graphic_pane_vc_t1

0x3235,	// (0x00051cf4) list_double_graphic_pane_vc_t2_ParamLimits

0x3235,	// (0x00051cf4) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0005e527) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0005e527) list_double_graphic_pane_vc_t

0xf546,	// (0x0005e005) aid_size_cell_fastswap

0xb6b4,	// (0x0005a173) aid_size_cell_touch_ParamLimits

0xb6b4,	// (0x0005a173) aid_size_cell_touch

0x023d,	// (0x0004ecfc) popup_fast_swap_wide_window_ParamLimits

0x023d,	// (0x0004ecfc) popup_fast_swap_wide_window

0xb864,	// (0x0005a323) touch_pane_ParamLimits

0xb864,	// (0x0005a323) touch_pane

0x3fa3,	// (0x00052a62) button_value_adjust_pane_cp2

0x08c3,	// (0x0004f382) button_value_adjust_pane_cp4

0x08e7,	// (0x0004f3a6) form_field_data_pane_cp2

0xbd20,	// (0x0005a7df) form_field_data_wide_pane_cp2

0x4419,	// (0x00052ed8) bg_scroll_pane_ParamLimits

0x0ccb,	// (0x0004f78a) scroll_handle_pane_ParamLimits

0x0cdf,	// (0x0004f79e) scroll_sc2_down_pane_ParamLimits

0x0cdf,	// (0x0004f79e) scroll_sc2_down_pane

0x444a,	// (0x00052f09) scroll_sc2_up_pane_ParamLimits

0x444a,	// (0x00052f09) scroll_sc2_up_pane

0xe0f9,	// (0x0005cbb8) grid_wheel_folder_pane_g1_ParamLimits

0xe0f9,	// (0x0005cbb8) grid_wheel_folder_pane_g1

0x0f12,	// (0x0004f9d1) clock_nsta_pane_cp2_ParamLimits

0x0f12,	// (0x0004f9d1) clock_nsta_pane_cp2

0xd4e0,	// (0x0005bf9f) listscroll_midp_pane_ParamLimits

0xd4ec,	// (0x0005bfab) midp_canvas_pane

0x4f3e,	// (0x000539fd) nsta_clock_indic_pane

0x4f77,	// (0x00053a36) listscroll_form_pane_vc

0x4f7f,	// (0x00053a3e) listscroll_set_pane_vc_ParamLimits

0x4f7f,	// (0x00053a3e) listscroll_set_pane_vc

0xd771,	// (0x0005c230) clock_nsta_pane

0xd79b,	// (0x0005c25a) indicator_nsta_pane

0x53e5,	// (0x00053ea4) bg_popup_sub_pane_cp2_ParamLimits

0x53f9,	// (0x00053eb8) find_pane_cp2_ParamLimits

0x53f9,	// (0x00053eb8) find_pane_cp2

0x540f,	// (0x00053ece) grid_toobar_pane_ParamLimits

0x54ef,	// (0x00053fae) list_form_gen_pane_vc_ParamLimits

0x54ef,	// (0x00053fae) list_form_gen_pane_vc

0x5505,	// (0x00053fc4) scroll_pane_cp8_vc_ParamLimits

0x5505,	// (0x00053fc4) scroll_pane_cp8_vc

0x5581,	// (0x00054040) data_form_wide_pane_vc_ParamLimits

0x5581,	// (0x00054040) data_form_wide_pane_vc

0x558d,	// (0x0005404c) form_field_data_wide_pane_vc_g1

0x5595,	// (0x00054054) form_field_data_wide_pane_vc_t1_ParamLimits

0x5595,	// (0x00054054) form_field_data_wide_pane_vc_t1

0x3fb7,	// (0x00052a76) input_focus_pane_cp6_vc_ParamLimits

0x3fb7,	// (0x00052a76) input_focus_pane_cp6_vc

0x58db,	// (0x0005439a) list_midp_pane_ParamLimits

0x6bc0,	// (0x0005567f) scroll_pane_cp16_ParamLimits

0x6bc0,	// (0x0005567f) scroll_pane_cp16

0x591d,	// (0x000543dc) button_value_adjust_pane_ParamLimits

0x591d,	// (0x000543dc) button_value_adjust_pane

0xdd42,	// (0x0005c801) button_value_adjust_pane_cp6_ParamLimits

0xdd42,	// (0x0005c801) button_value_adjust_pane_cp6

0xde5c,	// (0x0005c91b) settings_code_pane_cp_ParamLimits

0xde5c,	// (0x0005c91b) settings_code_pane_cp

0x3652,	// (0x00052111) cell_touch_pane_g1

0x3652,	// (0x00052111) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0005e1c7) cell_touch_pane_g

0xdfe7,	// (0x0005caa6) cell_touch_pane_cp_ParamLimits

0xdfe7,	// (0x0005caa6) cell_touch_pane_cp

0xe003,	// (0x0005cac2) cell_touch_pane_ParamLimits

0xe003,	// (0x0005cac2) cell_touch_pane

0x3652,	// (0x00052111) scroll_sc2_down_pane_g1

0x3652,	// (0x00052111) scroll_sc2_up_pane_g1

0x365c,	// (0x0005211b) bg_set_opt_pane_cp4_vc

0x6f50,	// (0x00055a0f) list_set_graphic_pane_vc_g1_ParamLimits

0x6f50,	// (0x00055a0f) list_set_graphic_pane_vc_g1

0x6f5c,	// (0x00055a1b) list_set_graphic_pane_vc_g2_ParamLimits

0x6f5c,	// (0x00055a1b) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0005e4b7) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0005e4b7) list_set_graphic_pane_vc_g

0x6f68,	// (0x00055a27) text_primary_small_cp13_vc_ParamLimits

0x6f68,	// (0x00055a27) text_primary_small_cp13_vc

0x6f80,	// (0x00055a3f) list_set_graphic_pane_vc_ParamLimits

0x6f80,	// (0x00055a3f) list_set_graphic_pane_vc

0x365c,	// (0x0005211b) input_focus_pane_cp2_vc

0x3652,	// (0x00052111) setting_code_pane_vc_g1

0x3787,	// (0x00052246) setting_code_pane_vc_t1

0x6f92,	// (0x00055a51) set_text_pane_vc_t1_ParamLimits

0x6f92,	// (0x00055a51) set_text_pane_vc_t1

0x365c,	// (0x0005211b) input_focus_pane_cp1_vc

0x6fae,	// (0x00055a6d) list_set_text_pane_vc

0x3652,	// (0x00052111) setting_text_pane_vc_g1

0x365c,	// (0x0005211b) bg_set_opt_pane_cp2_vc

0x377e,	// (0x0005223d) setting_slider_graphic_pane_vc_g1

0x6fb8,	// (0x00055a77) setting_slider_graphic_pane_vc_t1

0x6fc8,	// (0x00055a87) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0005e4bc) setting_slider_graphic_pane_vc_t

0x6fd8,	// (0x00055a97) slider_set_pane_cp_vc

0x6fe0,	// (0x00055a9f) slider_set_pane_vc_g1

0x6fe9,	// (0x00055aa8) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0005e4c1) slider_set_pane_vc_g

0x4003,	// (0x00052ac2) set_opt_bg_pane_g1_copy1

0x400b,	// (0x00052aca) set_opt_bg_pane_g2_copy1

0x7015,	// (0x00055ad4) set_opt_bg_pane_g3_copy1

0x401b,	// (0x00052ada) set_opt_bg_pane_g4_copy1

0x4023,	// (0x00052ae2) set_opt_bg_pane_g5_copy1

0x402b,	// (0x00052aea) set_opt_bg_pane_g6_copy1

0x701f,	// (0x00055ade) set_opt_bg_pane_g7_copy1

0x7027,	// (0x00055ae6) set_opt_bg_pane_g8_copy1

0x7031,	// (0x00055af0) set_opt_bg_pane_g9_copy1

0x365c,	// (0x0005211b) bg_set_opt_pane_cp_vc

0x703b,	// (0x00055afa) setting_slider_pane_vc_t1

0x704a,	// (0x00055b09) setting_slider_pane_vc_t2

0x705a,	// (0x00055b19) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0005e4d0) setting_slider_pane_vc_t

0x706a,	// (0x00055b29) slider_set_pane_vc

0x191e,	// (0x000503dd) volume_set_pane_vc_g1

0x1927,	// (0x000503e6) volume_set_pane_vc_g2

0x1930,	// (0x000503ef) volume_set_pane_vc_g3

0x1939,	// (0x000503f8) volume_set_pane_vc_g4

0x1942,	// (0x00050401) volume_set_pane_vc_g5

0x194b,	// (0x0005040a) volume_set_pane_vc_g6

0x1954,	// (0x00050413) volume_set_pane_vc_g7

0x195d,	// (0x0005041c) volume_set_pane_vc_g8

0x1966,	// (0x00050425) volume_set_pane_vc_g9

0x196f,	// (0x0005042e) volume_set_pane_vc_g10

0x0009,

0xf8b6,	// (0x0005e375) volume_set_pane_vc_g

0x7072,	// (0x00055b31) volume_set_pane_vc

0x707a,	// (0x00055b39) button_value_adjust_pane_cp1_vc

0x7084,	// (0x00055b43) list_highlight_pane_cp2_vc

0x708d,	// (0x00055b4c) list_set_pane_vc_ParamLimits

0x708d,	// (0x00055b4c) list_set_pane_vc

0x70eb,	// (0x00055baa) main_pane_set_vc_t1_ParamLimits

0x70eb,	// (0x00055baa) main_pane_set_vc_t1

0x7100,	// (0x00055bbf) main_pane_set_vc_t2_ParamLimits

0x7100,	// (0x00055bbf) main_pane_set_vc_t2

0x7112,	// (0x00055bd1) main_pane_set_vc_t3_ParamLimits

0x7112,	// (0x00055bd1) main_pane_set_vc_t3

0x7126,	// (0x00055be5) main_pane_set_vc_t4_ParamLimits

0x7126,	// (0x00055be5) main_pane_set_vc_t4

0x0003,

0xfa18,	// (0x0005e4d7) main_pane_set_vc_t_ParamLimits

0xfa18,	// (0x0005e4d7) main_pane_set_vc_t

0x713a,	// (0x00055bf9) setting_code_pane_vc_ParamLimits

0x713a,	// (0x00055bf9) setting_code_pane_vc

0x714b,	// (0x00055c0a) setting_slider_graphic_pane_vc

0x714b,	// (0x00055c0a) setting_slider_pane_vc

0x714b,	// (0x00055c0a) setting_text_pane_vc

0x714b,	// (0x00055c0a) setting_volume_pane_vc

0x7155,	// (0x00055c14) scroll_pane_cp121_vc

0x3f91,	// (0x00052a50) set_content_pane_vc

0x715d,	// (0x00055c1c) button_value_adjust_pane_g1

0x7166,	// (0x00055c25) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x0005e52c) button_value_adjust_pane_g

0x716f,	// (0x00055c2e) form_field_slider_wide_pane_vc_t1_ParamLimits

0x716f,	// (0x00055c2e) form_field_slider_wide_pane_vc_t1

0x7183,	// (0x00055c42) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7183,	// (0x00055c42) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x0005e531) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0005e531) form_field_slider_wide_pane_vc_t

0x39b7,	// (0x00052476) input_focus_pane_cp10_vc_ParamLimits

0x39b7,	// (0x00052476) input_focus_pane_cp10_vc

0x71b1,	// (0x00055c70) slider_cont_pane_cp1_vc_ParamLimits

0x71b1,	// (0x00055c70) slider_cont_pane_cp1_vc

0x71c3,	// (0x00055c82) slider_form_pane_g1_cp2

0x6fe9,	// (0x00055aa8) slider_form_pane_g2_cp2

0x71f0,	// (0x00055caf) form_field_slider_pane_vc_t3

0x71fe,	// (0x00055cbd) form_field_slider_pane_vc_t4

0x720c,	// (0x00055ccb) slider_form_pane_vc_ParamLimits

0x720c,	// (0x00055ccb) slider_form_pane_vc

0x7219,	// (0x00055cd8) form_field_slider_pane_vc_t1_ParamLimits

0x7219,	// (0x00055cd8) form_field_slider_pane_vc_t1

0x7183,	// (0x00055c42) form_field_slider_pane_vc_t2_ParamLimits

0x7183,	// (0x00055c42) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x0005e543) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x0005e543) form_field_slider_pane_vc_t

0x39b7,	// (0x00052476) input_focus_pane_cp9_vc_ParamLimits

0x39b7,	// (0x00052476) input_focus_pane_cp9_vc

0x7235,	// (0x00055cf4) slider_cont_pane_vc_ParamLimits

0x7235,	// (0x00055cf4) slider_cont_pane_vc

0x7249,	// (0x00055d08) list_form_graphic_pane_cp_vc_ParamLimits

0x7249,	// (0x00055d08) list_form_graphic_pane_cp_vc

0x558d,	// (0x0005404c) form_field_popup_wide_pane_vc_g1

0x725e,	// (0x00055d1d) form_field_popup_wide_pane_vc_t1_ParamLimits

0x725e,	// (0x00055d1d) form_field_popup_wide_pane_vc_t1

0x3fb7,	// (0x00052a76) input_focus_pane_cp8_vc_ParamLimits

0x3fb7,	// (0x00052a76) input_focus_pane_cp8_vc

0x72a3,	// (0x00055d62) list_form_wide_pane_vc_ParamLimits

0x72a3,	// (0x00055d62) list_form_wide_pane_vc

0x72af,	// (0x00055d6e) list_form_graphic_pane_vc_g1

0x72b7,	// (0x00055d76) list_form_graphic_pane_vc_t1_ParamLimits

0x72b7,	// (0x00055d76) list_form_graphic_pane_vc_t1

0x373c,	// (0x000521fb) list_highlight_pane_cp5_vc_ParamLimits

0x373c,	// (0x000521fb) list_highlight_pane_cp5_vc

0x72d3,	// (0x00055d92) list_form_graphic_pane_vc_ParamLimits

0x72d3,	// (0x00055d92) list_form_graphic_pane_vc

0x558d,	// (0x0005404c) form_field_popup_pane_vc_g1

0x72e9,	// (0x00055da8) form_field_popup_pane_vc_t1_ParamLimits

0x72e9,	// (0x00055da8) form_field_popup_pane_vc_t1

0x3fb7,	// (0x00052a76) input_focus_pane_cp7_vc_ParamLimits

0x3fb7,	// (0x00052a76) input_focus_pane_cp7_vc

0x7300,	// (0x00055dbf) list_form_pane_vc_ParamLimits

0x7300,	// (0x00055dbf) list_form_pane_vc

0x730c,	// (0x00055dcb) data_form_pane_vc_t1_ParamLimits

0x730c,	// (0x00055dcb) data_form_pane_vc_t1

0x4003,	// (0x00052ac2) input_focus_pane_vc_g1

0x400b,	// (0x00052aca) input_focus_pane_vc_g2

0x4013,	// (0x00052ad2) input_focus_pane_vc_g3

0x401b,	// (0x00052ada) input_focus_pane_vc_g4

0x4023,	// (0x00052ae2) input_focus_pane_vc_g5

0x402b,	// (0x00052aea) input_focus_pane_vc_g6

0x4033,	// (0x00052af2) input_focus_pane_vc_g7

0x403b,	// (0x00052afa) input_focus_pane_vc_g8

0x4043,	// (0x00052b02) input_focus_pane_vc_g9

0x3652,	// (0x00052111) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0005e150) input_focus_pane_vc_g

0x5581,	// (0x00054040) data_form_pane_vc_ParamLimits

0x5581,	// (0x00054040) data_form_pane_vc

0x558d,	// (0x0005404c) form_field_data_pane_vc_g1

0x7327,	// (0x00055de6) form_field_data_pane_vc_t1_ParamLimits

0x7327,	// (0x00055de6) form_field_data_pane_vc_t1

0x3fb7,	// (0x00052a76) input_focus_pane_vc_ParamLimits

0x3fb7,	// (0x00052a76) input_focus_pane_vc

0x7341,	// (0x00055e00) button_value_adjust_pane_cp3_vc

0x7349,	// (0x00055e08) button_value_adjust_pane_cp5_vc

0x7351,	// (0x00055e10) form_field_data_pane_vc_ParamLimits

0x7351,	// (0x00055e10) form_field_data_pane_vc

0x7368,	// (0x00055e27) form_field_data_pane_vc_cp2

0x7370,	// (0x00055e2f) form_field_data_wide_pane_vc_ParamLimits

0x7370,	// (0x00055e2f) form_field_data_wide_pane_vc

0x7386,	// (0x00055e45) form_field_data_wide_pane_vc_cp2

0x738e,	// (0x00055e4d) form_field_popup_pane_vc_ParamLimits

0x738e,	// (0x00055e4d) form_field_popup_pane_vc

0x73a5,	// (0x00055e64) form_field_popup_wide_pane_vc_ParamLimits

0x73a5,	// (0x00055e64) form_field_popup_wide_pane_vc

0x73bb,	// (0x00055e7a) form_field_slider_pane_vc_ParamLimits

0x73bb,	// (0x00055e7a) form_field_slider_pane_vc

0x73ce,	// (0x00055e8d) form_field_slider_wide_pane_vc_ParamLimits

0x73ce,	// (0x00055e8d) form_field_slider_wide_pane_vc

0xe021,	// (0x0005cae0) grid_touch_1_pane_ParamLimits

0xe021,	// (0x0005cae0) grid_touch_1_pane

0xe035,	// (0x0005caf4) grid_touch_2_pane_ParamLimits

0xe035,	// (0x0005caf4) grid_touch_2_pane

0x749c,	// (0x00055f5b) touch_pane_g1_ParamLimits

0x749c,	// (0x00055f5b) touch_pane_g1

0x7405,	// (0x00055ec4) cell_app_pane_cp_wide_ParamLimits

0x7405,	// (0x00055ec4) cell_app_pane_cp_wide

0x7416,	// (0x00055ed5) grid_popup_fast_wide_pane_ParamLimits

0x7416,	// (0x00055ed5) grid_popup_fast_wide_pane

0x742a,	// (0x00055ee9) scroll_pane_cp19_ParamLimits

0x742a,	// (0x00055ee9) scroll_pane_cp19

0x365c,	// (0x0005211b) bg_popup_window_pane_cp20

0x743e,	// (0x00055efd) listscroll_popup_fast_wide_pane

0x416b,	// (0x00052c2a) grid_indicator_nsta_pane

0x7446,	// (0x00055f05) clock_nsta_pane_g1

0x744f,	// (0x00055f0e) clock_nsta_pane_t1

0xe05f,	// (0x0005cb1e) cell_indicator_nsta_pane_ParamLimits

0xe05f,	// (0x0005cb1e) cell_indicator_nsta_pane

0x749c,	// (0x00055f5b) cell_indicator_nsta_pane_g1

0xe076,	// (0x0005cb35) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x0005e554) cell_indicator_nsta_pane_g

0x74b7,	// (0x00055f76) clock_nsta_pane_cp

0x74bf,	// (0x00055f7e) indicator_nsta_pane_cp

0x74c7,	// (0x00055f86) nsta_clock_indic_pane_g1

0x3805,	// (0x000522c4) grid_indicator_pane

0x453f,	// (0x00052ffe) scroll_pane_cp29

0x0e61,	// (0x0004f920) indicator_nsta_pane_cp2_ParamLimits

0x0e61,	// (0x0004f920) indicator_nsta_pane_cp2

0x373c,	// (0x000521fb) main_apps_wheel_pane

0x579c,	// (0x0005425b) form_midp_field_text_pane_ParamLimits

0x58e7,	// (0x000543a6) scroll_bar_cp050_ParamLimits

0x7517,	// (0x00055fd6) cell_indicator_pane_ParamLimits

0x7517,	// (0x00055fd6) cell_indicator_pane

0x752e,	// (0x00055fed) cell_indicator_pane_g1

0xe083,	// (0x0005cb42) grid_wheel_folder_pane_ParamLimits

0xe083,	// (0x0005cb42) grid_wheel_folder_pane

0xe091,	// (0x0005cb50) list_wheel_apps_pane_ParamLimits

0xe091,	// (0x0005cb50) list_wheel_apps_pane

0xe09f,	// (0x0005cb5e) main_apps_wheel_pane_g1_ParamLimits

0xe09f,	// (0x0005cb5e) main_apps_wheel_pane_g1

0xe0ab,	// (0x0005cb6a) main_apps_wheel_pane_g2_ParamLimits

0xe0ab,	// (0x0005cb6a) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0005e570) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0005e570) main_apps_wheel_pane_g

0xe0b9,	// (0x0005cb78) main_apps_wheel_pane_t1_ParamLimits

0xe0b9,	// (0x0005cb78) main_apps_wheel_pane_t1

0xe0cd,	// (0x0005cb8c) list_wheel_apps_pane_g1

0xe0d5,	// (0x0005cb94) list_wheel_apps_pane_g2

0xe0dd,	// (0x0005cb9c) list_wheel_apps_pane_g3

0xe0e5,	// (0x0005cba4) list_wheel_apps_pane_g4

0xe0ef,	// (0x0005cbae) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x0005e575) list_wheel_apps_pane_g

0x4ac2,	// (0x00053581) navi_icon_text_pane

0xd665,	// (0x0005c124) aid_fill_nsta

0x75f3,	// (0x000560b2) navi_icon_text_pane_g1

0x75ff,	// (0x000560be) navi_icon_text_pane_t1

0x4955,	// (0x00053414) list_set_graphic_pane_t1_ParamLimits

0x4955,	// (0x00053414) list_set_graphic_pane_t1

0x603e,	// (0x00054afd) popup_midp_note_alarm_window_t6_ParamLimits

0x603e,	// (0x00054afd) popup_midp_note_alarm_window_t6

0x6050,	// (0x00054b0f) popup_midp_note_alarm_window_t7_ParamLimits

0x6050,	// (0x00054b0f) popup_midp_note_alarm_window_t7

0x6062,	// (0x00054b21) popup_midp_note_alarm_window_t8_ParamLimits

0x6062,	// (0x00054b21) popup_midp_note_alarm_window_t8

0x6074,	// (0x00054b33) popup_midp_note_alarm_window_t9_ParamLimits

0x6074,	// (0x00054b33) popup_midp_note_alarm_window_t9

0x6086,	// (0x00054b45) popup_midp_note_alarm_window_t10_ParamLimits

0x6086,	// (0x00054b45) popup_midp_note_alarm_window_t10

0x6098,	// (0x00054b57) popup_midp_note_alarm_window_t11_ParamLimits

0x6098,	// (0x00054b57) popup_midp_note_alarm_window_t11

0x60aa,	// (0x00054b69) scroll_pane_cp17_ParamLimits

0x60aa,	// (0x00054b69) scroll_pane_cp17

0x191e,	// (0x000503dd) volume_small_pane_cp_g1

0x1c13,	// (0x000506d2) volume_small_pane_cp_g2

0x1c1c,	// (0x000506db) volume_small_pane_cp_g3

0x1c25,	// (0x000506e4) volume_small_pane_cp_g4

0x1c2e,	// (0x000506ed) volume_small_pane_cp_g5

0x1c37,	// (0x000506f6) volume_small_pane_cp_g6

0x1c40,	// (0x000506ff) volume_small_pane_cp_g7

0x1c49,	// (0x00050708) volume_small_pane_cp_g8

0x1c52,	// (0x00050711) volume_small_pane_cp_g9

0x1c5b,	// (0x0005071a) volume_small_pane_cp_g10

0x4d1f,	// (0x000537de) midp_ticker_pane_g1_ParamLimits

0x4d2b,	// (0x000537ea) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0005e21c) midp_ticker_pane_g_ParamLimits

0x4d37,	// (0x000537f6) midp_ticker_pane_t1_ParamLimits

0xd689,	// (0x0005c148) aid_fill_nsta_2

0x58d3,	// (0x00054392) list_form2_midp_pane

0x6a03,	// (0x000554c2) midp_editing_number_pane_ParamLimits

0x6a12,	// (0x000554d1) midp_ticker_pane_ParamLimits

0x7611,	// (0x000560d0) form2_midp_field_pane

0x7635,	// (0x000560f4) scroll_pane_cp51

0x7655,	// (0x00056114) form2_midp_button_pane_ParamLimits

0x7655,	// (0x00056114) form2_midp_button_pane

0x7667,	// (0x00056126) form2_midp_content_pane_ParamLimits

0x7667,	// (0x00056126) form2_midp_content_pane

0x7681,	// (0x00056140) form2_midp_field_choice_group_pane

0x7689,	// (0x00056148) form2_midp_field_pane_g1

0x7691,	// (0x00056150) form2_midp_field_pane_g2

0x7699,	// (0x00056158) form2_midp_field_pane_g3

0x76a1,	// (0x00056160) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x0005e59a) form2_midp_field_pane_g

0x76a9,	// (0x00056168) form2_midp_gauge_slider_pane

0x76b1,	// (0x00056170) form2_midp_gauge_wait_pane

0x76b9,	// (0x00056178) form2_midp_image_pane_ParamLimits

0x76b9,	// (0x00056178) form2_midp_image_pane

0x76d4,	// (0x00056193) form2_midp_label_pane_ParamLimits

0x76d4,	// (0x00056193) form2_midp_label_pane

0xe122,	// (0x0005cbe1) form2_midp_label_pane_cp_ParamLimits

0xe122,	// (0x0005cbe1) form2_midp_label_pane_cp

0x770e,	// (0x000561cd) form2_midp_string_pane_ParamLimits

0x770e,	// (0x000561cd) form2_midp_string_pane

0xc80a,	// (0x0005b2c9) form2_midp_text_pane_ParamLimits

0xc80a,	// (0x0005b2c9) form2_midp_text_pane

0x7720,	// (0x000561df) form2_midp_time_pane

0x7730,	// (0x000561ef) input_focus_pane_cp51_ParamLimits

0x7730,	// (0x000561ef) input_focus_pane_cp51

0x7748,	// (0x00056207) form2_midp_label_pane_t1_ParamLimits

0x7748,	// (0x00056207) form2_midp_label_pane_t1

0xc823,	// (0x0005b2e2) form2_mdip_text_pane_t1_ParamLimits

0xc823,	// (0x0005b2e2) form2_mdip_text_pane_t1

0x329c,	// (0x00051d5b) form2_midp_time_pane_t1

0x7791,	// (0x00056250) form2_midp_gauge_slider_pane_t1

0xe141,	// (0x0005cc00) form2_midp_gauge_slider_pane_t2

0xe153,	// (0x0005cc12) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x0005e5a3) form2_midp_gauge_slider_pane_t

0x77c7,	// (0x00056286) form2_midp_slider_pane

0x77d3,	// (0x00056292) form2_midp_gauge_wait_pane_t1

0x77e1,	// (0x000562a0) form2_midp_wait_pane_ParamLimits

0x77e1,	// (0x000562a0) form2_midp_wait_pane

0xe165,	// (0x0005cc24) list_single_2graphic_pane_cp4_ParamLimits

0xe165,	// (0x0005cc24) list_single_2graphic_pane_cp4

0xdb3f,	// (0x0005c5fe) list_single_midp_graphic_pane_cp_ParamLimits

0xdb3f,	// (0x0005c5fe) list_single_midp_graphic_pane_cp

0x365c,	// (0x0005211b) list_highlight_pane_cp20

0x7830,	// (0x000562ef) list_single_2graphic_pane_g1_cp4

0x7838,	// (0x000562f7) list_single_2graphic_pane_g2_cp4

0x7840,	// (0x000562ff) list_single_2graphic_pane_t1_cp4

0x373c,	// (0x000521fb) list_highlight_pane_cp21

0x784f,	// (0x0005630e) list_single_midp_graphic_pane_g4_cp

0x785e,	// (0x0005631d) list_single_midp_graphic_pane_t1_cp

0xe179,	// (0x0005cc38) form2_mdip_string_pane_t1_ParamLimits

0xe179,	// (0x0005cc38) form2_mdip_string_pane_t1

0x365c,	// (0x0005211b) bg_wml_button_pane_cp2

0x3652,	// (0x00052111) form2_midp_image_pane_g1

0x2cb0,	// (0x0005176f) list_double_large_graphic_pane_g5_ParamLimits

0x2cb0,	// (0x0005176f) list_double_large_graphic_pane_g5

0xd4e0,	// (0x0005bf9f) midp_form_pane_ParamLimits

0x373c,	// (0x000521fb) main_apps_wheel_pane_ParamLimits

0xc495,	// (0x0005af54) popup_preview_window_ParamLimits

0xc495,	// (0x0005af54) popup_preview_window

0x170b,	// (0x000501ca) popup_touch_info_window_ParamLimits

0x170b,	// (0x000501ca) popup_touch_info_window

0x1729,	// (0x000501e8) popup_touch_menu_window_ParamLimits

0x1729,	// (0x000501e8) popup_touch_menu_window

0x3648,	// (0x00052107) bg_popup_sub_pane_cp6

0x796c,	// (0x0005642b) list_touch_menu_pane

0x7974,	// (0x00056433) list_single_touch_menu_pane_ParamLimits

0x7974,	// (0x00056433) list_single_touch_menu_pane

0x798a,	// (0x00056449) list_single_touch_menu_pane_t1

0x373c,	// (0x000521fb) bg_popup_sub_pane_cp7_ParamLimits

0x373c,	// (0x000521fb) bg_popup_sub_pane_cp7

0x7998,	// (0x00056457) heading_sub_pane

0x79a0,	// (0x0005645f) list_touch_info_pane_ParamLimits

0x79a0,	// (0x0005645f) list_touch_info_pane

0x79af,	// (0x0005646e) list_single_touch_info_pane_ParamLimits

0x79af,	// (0x0005646e) list_single_touch_info_pane

0x79c1,	// (0x00056480) list_single_touch_info_pane_t1

0x79cf,	// (0x0005648e) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x0005e5b1) list_single_touch_info_pane_t

0x4c42,	// (0x00053701) bg_popup_heading_pane_cp

0x79dd,	// (0x0005649c) heading_sub_pane_t1

0x551b,	// (0x00053fda) bg_popup_preview_window_pane_cp_ParamLimits

0x551b,	// (0x00053fda) bg_popup_preview_window_pane_cp

0x7998,	// (0x00056457) heading_preview_pane

0x79a0,	// (0x0005645f) list_preview_pane_ParamLimits

0x79a0,	// (0x0005645f) list_preview_pane

0x79eb,	// (0x000564aa) popup_preview_window_g1

0x79af,	// (0x0005646e) list_single_preview_pane_ParamLimits

0x79af,	// (0x0005646e) list_single_preview_pane

0x79f3,	// (0x000564b2) list_single_preview_pane_g1

0x79fb,	// (0x000564ba) list_single_preview_pane_t1

0x79c1,	// (0x00056480) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x0005e5b6) list_single_preview_pane_t

0x7a09,	// (0x000564c8) bg_popup_heading_pane_cp2_ParamLimits

0x7a09,	// (0x000564c8) bg_popup_heading_pane_cp2

0x7a1f,	// (0x000564de) heading_preview_pane_g1

0x7a27,	// (0x000564e6) heading_preview_pane_t1_ParamLimits

0x7a27,	// (0x000564e6) heading_preview_pane_t1

0x3828,	// (0x000522e7) soft_indicator_pane_t1_ParamLimits

0x3f1e,	// (0x000529dd) scroll_pane_ParamLimits

0x4438,	// (0x00052ef7) scroll_sc2_left_pane

0x4441,	// (0x00052f00) scroll_sc2_right_pane

0x4460,	// (0x00052f1f) scroll_bg_pane_g1_ParamLimits

0x4475,	// (0x00052f34) scroll_bg_pane_g2_ParamLimits

0x448d,	// (0x00052f4c) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0005e1a7) scroll_bg_pane_g_ParamLimits

0x4460,	// (0x00052f1f) scroll_handle_pane_g1_ParamLimits

0x44af,	// (0x00052f6e) scroll_handle_pane_g2_ParamLimits

0x448d,	// (0x00052f4c) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0005e1ae) scroll_handle_pane_g_ParamLimits

0x11d1,	// (0x0004fc90) popup_choice_list_window_ParamLimits

0x11d1,	// (0x0004fc90) popup_choice_list_window

0x53f1,	// (0x00053eb0) choice_list_pane

0x5473,	// (0x00053f32) cell_toolbar_pane_t1

0x549b,	// (0x00053f5a) toolbar_button_pane_ParamLimits

0x6564,	// (0x00055023) ai_gene_pane_1_t2_ParamLimits

0x6564,	// (0x00055023) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0005e3d1) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0005e3d1) ai_gene_pane_1_t

0x7a44,	// (0x00056503) scroll_sc2_left_pane_g1

0x7a44,	// (0x00056503) scroll_sc2_right_pane_g1

0x4f91,	// (0x00053a50) bg_popup_sub_pane_cp10

0x7a4e,	// (0x0005650d) list_choice_list_pane

0x7a67,	// (0x00056526) list_single_choice_list_pane_ParamLimits

0x7a67,	// (0x00056526) list_single_choice_list_pane

0x7a7a,	// (0x00056539) list_single_choice_list_pane_g1

0x413c,	// (0x00052bfb) list_single_choice_list_pane_t1_ParamLimits

0x413c,	// (0x00052bfb) list_single_choice_list_pane_t1

0x7a82,	// (0x00056541) choice_list_pane_g1

0x7a8a,	// (0x00056549) choice_list_pane_t1

0x3648,	// (0x00052107) input_focus_pane_cp11

0x4313,	// (0x00052dd2) title_pane_stacon_g2_ParamLimits

0x4313,	// (0x00052dd2) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0005e18d) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0005e18d) title_pane_stacon_g

0x4c42,	// (0x00053701) cursor_press_pane

0xc142,	// (0x0005ac01) popup_fep_hwr_window_ParamLimits

0xc142,	// (0x0005ac01) popup_fep_hwr_window

0x12f7,	// (0x0004fdb6) popup_fep_vkb_window_ParamLimits

0x12f7,	// (0x0004fdb6) popup_fep_vkb_window

0x7a98,	// (0x00056557) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x0005e5df) fep_vkb_side_pane_g_ParamLimits

0x1c9d,	// (0x0005075c) fep_hwr_candidate_pane_ParamLimits

0x1c9d,	// (0x0005075c) fep_hwr_candidate_pane

0x1cc7,	// (0x00050786) fep_hwr_side_pane_ParamLimits

0x1cc7,	// (0x00050786) fep_hwr_side_pane

0x1ce7,	// (0x000507a6) fep_hwr_top_pane_ParamLimits

0x1ce7,	// (0x000507a6) fep_hwr_top_pane

0x1cff,	// (0x000507be) fep_hwr_write_pane_ParamLimits

0x1cff,	// (0x000507be) fep_hwr_write_pane

0xfb20,	// (0x0005e5df) fep_vkb_side_pane_g

0x7aa0,	// (0x0005655f) fep_hwr_top_pane_g1

0x7ab2,	// (0x00056571) fep_hwr_top_pane_g2

0x1d39,	// (0x000507f8) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x0005e5bb) fep_hwr_top_pane_g

0x1d4e,	// (0x0005080d) fep_hwr_top_text_pane

0x462f,	// (0x000530ee) fep_hwr_top_text_pane_g1

0x7ae8,	// (0x000565a7) fep_hwr_top_text_pane_t1

0x1e44,	// (0x00050903) fep_hwr_candidate_pane_g1

0x7d3b,	// (0x000567fa) fep_vkb_keypad_pane_g3_ParamLimits

0x7d3b,	// (0x000567fa) fep_vkb_keypad_pane_g3

0x7d63,	// (0x00056822) fep_vkb_keypad_pane_g4_ParamLimits

0x7d63,	// (0x00056822) fep_vkb_keypad_pane_g4

0x7dde,	// (0x0005689d) fep_vkb_bottom_pane_g2_ParamLimits

0x7dde,	// (0x0005689d) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x0005e5e6) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x0005e5e6) fep_vkb_bottom_pane_g

0x7a44,	// (0x00056503) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x0005e5f0) cell_vkb_side_pane_g

0x7e69,	// (0x00056928) cell_vkb_side_pane_t1

0x7e77,	// (0x00056936) cell_vkb_side_pane_t1_copy1

0x7a44,	// (0x00056503) bg_fep_vkb_candidate_pane_g2

0x7fa3,	// (0x00056a62) cell_vkb_candidate_pane_ParamLimits

0x7af6,	// (0x000565b5) aid_size_cell_vkb_ParamLimits

0x7af6,	// (0x000565b5) aid_size_cell_vkb

0x7fa3,	// (0x00056a62) cell_vkb_candidate_pane

0x1e6b,	// (0x0005092a) bg_popup_fep_shadow_pane_g1

0xe1fb,	// (0x0005ccba) fep_vkb_bottom_pane_ParamLimits

0xe1fb,	// (0x0005ccba) fep_vkb_bottom_pane

0x7bba,	// (0x00056679) fep_vkb_candidate_pane_ParamLimits

0x7bba,	// (0x00056679) fep_vkb_candidate_pane

0xe220,	// (0x0005ccdf) fep_vkb_keypad_pane_ParamLimits

0xe220,	// (0x0005ccdf) fep_vkb_keypad_pane

0xe25c,	// (0x0005cd1b) fep_vkb_side_pane_ParamLimits

0xe25c,	// (0x0005cd1b) fep_vkb_side_pane

0xe298,	// (0x0005cd57) fep_vkb_top_pane_ParamLimits

0xe298,	// (0x0005cd57) fep_vkb_top_pane

0x7c94,	// (0x00056753) fep_vkb_top_pane_g1_ParamLimits

0x7c94,	// (0x00056753) fep_vkb_top_pane_g1

0x7ca3,	// (0x00056762) fep_vkb_top_pane_g2_ParamLimits

0x7ca3,	// (0x00056762) fep_vkb_top_pane_g2

0x7cb2,	// (0x00056771) fep_vkb_top_pane_g3_ParamLimits

0x7cb2,	// (0x00056771) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x0005e5d6) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x0005e5d6) fep_vkb_top_pane_g

0x7cd0,	// (0x0005678f) fep_vkb_top_text_pane_ParamLimits

0x7cd0,	// (0x0005678f) fep_vkb_top_text_pane

0xe2d4,	// (0x0005cd93) fep_vkb_side_pane_g1_ParamLimits

0xe2d4,	// (0x0005cd93) fep_vkb_side_pane_g1

0x7d2a,	// (0x000567e9) grid_vkb_side_pane_ParamLimits

0x7d2a,	// (0x000567e9) grid_vkb_side_pane

0x1e73,	// (0x00050932) bg_popup_fep_shadow_pane_g2

0x1e7c,	// (0x0005093b) bg_popup_fep_shadow_pane_g3

0x1e84,	// (0x00050943) bg_popup_fep_shadow_pane_g4

0x1e8d,	// (0x0005094c) bg_popup_fep_shadow_pane_g5

0x1e97,	// (0x00050956) bg_popup_fep_shadow_pane_g6

0x1e9f,	// (0x0005095e) bg_popup_fep_shadow_pane_g7

0x401b,	// (0x00052ada) bg_popup_fep_shadow_pane_g8

0x7d8d,	// (0x0005684c) grid_vkb_keypad_number_pane_ParamLimits

0x7d8d,	// (0x0005684c) grid_vkb_keypad_number_pane

0x7d9d,	// (0x0005685c) grid_vkb_keypad_pane_ParamLimits

0x7d9d,	// (0x0005685c) grid_vkb_keypad_pane

0x7dc3,	// (0x00056882) fep_vkb_bottom_pane_g1_ParamLimits

0x7dc3,	// (0x00056882) fep_vkb_bottom_pane_g1

0x7dec,	// (0x000568ab) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7dec,	// (0x000568ab) grid_vkb_keypad_bottom_left_pane

0x7e01,	// (0x000568c0) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7e01,	// (0x000568c0) grid_vkb_keypad_bottom_right_pane

0x7e16,	// (0x000568d5) fep_vkb_top_text_pane_g1

0xe343,	// (0x0005ce02) fep_vkb_top_text_pane_t1

0xe355,	// (0x0005ce14) cell_vkb_side_pane_ParamLimits

0xe355,	// (0x0005ce14) cell_vkb_side_pane

0x7a44,	// (0x00056503) cell_vkb_side_pane_g1

0x7e85,	// (0x00056944) cell_vkb_keypad_pane_ParamLimits

0x7e85,	// (0x00056944) cell_vkb_keypad_pane

0x7efa,	// (0x000569b9) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x0005e603) bg_popup_fep_shadow_pane_g

0x1eb1,	// (0x00050970) cell_hwr_side_pane_g1

0x1eb1,	// (0x00050970) cell_hwr_side_pane_g2

0x7f04,	// (0x000569c3) cell_vkb_keypad_pane_t1

0xe36b,	// (0x0005ce2a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe36b,	// (0x0005ce2a) cell_vkb_keypad_bottom_left_pane

0xe380,	// (0x0005ce3f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe380,	// (0x0005ce3f) cell_vkb_keypad_bottom_right_pane

0x7a44,	// (0x00056503) cell_vkb_keypad_bottom_left_pane_g1

0x7a44,	// (0x00056503) cell_vkb_keypad_bottom_right_pane_g1

0x7f68,	// (0x00056a27) cell_vkb_keypad_number_pane_ParamLimits

0x7f68,	// (0x00056a27) cell_vkb_keypad_number_pane

0x7f87,	// (0x00056a46) cell_vkb_keypad_number_pane_g1

0x7f91,	// (0x00056a50) cell_vkb_keypad_number_pane_g2

0x7f9a,	// (0x00056a59) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x0005e5f5) cell_vkb_keypad_number_pane_g

0x7f04,	// (0x000569c3) cell_vkb_keypad_number_pane_t1

0x7fbe,	// (0x00056a7d) fep_vkb_candidate_pane_g1

0x0001,

0xfb57,	// (0x0005e616) cell_hwr_side_pane_g

0x7fd7,	// (0x00056a96) cell_hwr_side_pane_t1

0x1ebb,	// (0x0005097a) cell_hwr_side_pane_t1_copy1

0x1ec9,	// (0x00050988) cell_hwr_candidate_pane_g1

0x1ef8,	// (0x000509b7) cell_hwr_candidate_pane_t1

0x7a44,	// (0x00056503) cell_vkb_candidate_pane_g2

0x801b,	// (0x00056ada) cell_vkb_candidate_pane_t1

0x1c64,	// (0x00050723) bg_popup_fep_shadow_pane_ParamLimits

0x1c64,	// (0x00050723) bg_popup_fep_shadow_pane

0x1d19,	// (0x000507d8) bg_fep_hwr_top_pane_g4

0x7ac4,	// (0x00056583) bg_hwr_side_pane_g1_ParamLimits

0x7ac4,	// (0x00056583) bg_hwr_side_pane_g1

0xc854,	// (0x0005b313) cell_hwr_side_pane_ParamLimits

0xc854,	// (0x0005b313) cell_hwr_side_pane

0x1dc5,	// (0x00050884) fep_hwr_write_pane_g1_ParamLimits

0x1dc5,	// (0x00050884) fep_hwr_write_pane_g1

0x1dd2,	// (0x00050891) fep_hwr_write_pane_g2_ParamLimits

0x1dd2,	// (0x00050891) fep_hwr_write_pane_g2

0x1ddf,	// (0x0005089e) fep_hwr_write_pane_g3_ParamLimits

0x1ddf,	// (0x0005089e) fep_hwr_write_pane_g3

0xc874,	// (0x0005b333) fep_hwr_write_pane_g4_ParamLimits

0xc874,	// (0x0005b333) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x0005e5c2) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x0005e5c2) fep_hwr_write_pane_g

0x1d19,	// (0x000507d8) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1d19,	// (0x000507d8) bg_fep_hwr_candidate_pane_g2

0x1e02,	// (0x000508c1) cell_hwr_candidate_pane_ParamLimits

0x1e02,	// (0x000508c1) cell_hwr_candidate_pane

0x1e44,	// (0x00050903) fep_hwr_candidate_pane_g1_ParamLimits

0x7b24,	// (0x000565e3) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7b24,	// (0x000565e3) bg_popup_fep_shadow_pane_cp2

0x7cc2,	// (0x00056781) fep_vkb_top_pane_g4_ParamLimits

0x7cc2,	// (0x00056781) fep_vkb_top_pane_g4

0x7d08,	// (0x000567c7) fep_vkb_side_pane_g2_ParamLimits

0x7d08,	// (0x000567c7) fep_vkb_side_pane_g2

0xbc2e,	// (0x0005a6ed) list_setting_pane_t4_ParamLimits

0xbc2e,	// (0x0005a6ed) list_setting_pane_t4

0xbcc8,	// (0x0005a787) list_setting_number_pane_t5_ParamLimits

0xbcc8,	// (0x0005a787) list_setting_number_pane_t5

0x4666,	// (0x00053125) list_double_heading_pane_cp2_ParamLimits

0x4666,	// (0x00053125) list_double_heading_pane_cp2

0x3f52,	// (0x00052a11) list_double_heading_pane_g1_cp2_ParamLimits

0x3f52,	// (0x00052a11) list_double_heading_pane_g1_cp2

0x3fc5,	// (0x00052a84) list_double_heading_pane_g2_cp2_ParamLimits

0x3fc5,	// (0x00052a84) list_double_heading_pane_g2_cp2

0x8029,	// (0x00056ae8) list_double_heading_pane_t1_cp2_ParamLimits

0x8029,	// (0x00056ae8) list_double_heading_pane_t1_cp2

0x803f,	// (0x00056afe) list_double_heading_pane_t2_cp2_ParamLimits

0x803f,	// (0x00056afe) list_double_heading_pane_t2_cp2

0x3630,	// (0x000520ef) aid_value_unit2

0x0297,	// (0x0004ed56) popup_preview_fixed_window

0x39c5,	// (0x00052484) bg_popup_preview_window_pane_cp02

0x8051,	// (0x00056b10) list_preview_fixed_pane

0x8097,	// (0x00056b56) list_empty_pane_fp_ParamLimits

0x8097,	// (0x00056b56) list_empty_pane_fp

0x8097,	// (0x00056b56) list_single_cale_day_pane_fp_ParamLimits

0x8097,	// (0x00056b56) list_single_cale_day_pane_fp

0x8097,	// (0x00056b56) list_single_graphic_heading_pane_fp_ParamLimits

0x8097,	// (0x00056b56) list_single_graphic_heading_pane_fp

0x8097,	// (0x00056b56) list_single_graphic_pane_fp_ParamLimits

0x8097,	// (0x00056b56) list_single_graphic_pane_fp

0x8097,	// (0x00056b56) list_single_heading_pane_fp_ParamLimits

0x8097,	// (0x00056b56) list_single_heading_pane_fp

0x8097,	// (0x00056b56) list_single_pane_fp_ParamLimits

0x8097,	// (0x00056b56) list_single_pane_fp

0x80ac,	// (0x00056b6b) list_single_pane_fp_g1_ParamLimits

0x80ac,	// (0x00056b6b) list_single_pane_fp_g1

0x3f52,	// (0x00052a11) list_single_pane_fp_g2_ParamLimits

0x3f52,	// (0x00052a11) list_single_pane_fp_g2

0x3fc5,	// (0x00052a84) list_single_pane_fp_g3_ParamLimits

0x3fc5,	// (0x00052a84) list_single_pane_fp_g3

0x80b8,	// (0x00056b77) list_single_pane_fp_g4_ParamLimits

0x80b8,	// (0x00056b77) list_single_pane_fp_g4

0x0003,

0xfb6a,	// (0x0005e629) list_single_pane_fp_g_ParamLimits

0xfb6a,	// (0x0005e629) list_single_pane_fp_g

0x32af,	// (0x00051d6e) list_single_pane_fp_t1_ParamLimits

0x32af,	// (0x00051d6e) list_single_pane_fp_t1

0x32c6,	// (0x00051d85) list_single_graphic_pane_fp_g1_ParamLimits

0x32c6,	// (0x00051d85) list_single_graphic_pane_fp_g1

0x80ac,	// (0x00056b6b) list_single_graphic_pane_fp_g2_ParamLimits

0x80ac,	// (0x00056b6b) list_single_graphic_pane_fp_g2

0x3f52,	// (0x00052a11) list_single_graphic_pane_fp_g3_ParamLimits

0x3f52,	// (0x00052a11) list_single_graphic_pane_fp_g3

0x3fc5,	// (0x00052a84) list_single_graphic_pane_fp_g4_ParamLimits

0x3fc5,	// (0x00052a84) list_single_graphic_pane_fp_g4

0x80b8,	// (0x00056b77) list_single_graphic_pane_fp_g5_ParamLimits

0x80b8,	// (0x00056b77) list_single_graphic_pane_fp_g5

0x0004,

0xfb73,	// (0x0005e632) list_single_graphic_pane_fp_g_ParamLimits

0xfb73,	// (0x0005e632) list_single_graphic_pane_fp_g

0x32d2,	// (0x00051d91) list_single_graphic_pane_fp_t1_ParamLimits

0x32d2,	// (0x00051d91) list_single_graphic_pane_fp_t1

0x32c6,	// (0x00051d85) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x32c6,	// (0x00051d85) list_single_graphic_heading_pane_fp_g1

0x80ac,	// (0x00056b6b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x80ac,	// (0x00056b6b) list_single_graphic_heading_pane_fp_g2

0x3f52,	// (0x00052a11) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3f52,	// (0x00052a11) list_single_graphic_heading_pane_fp_g3

0x3fc5,	// (0x00052a84) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3fc5,	// (0x00052a84) list_single_graphic_heading_pane_fp_g4

0x80b8,	// (0x00056b77) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x80b8,	// (0x00056b77) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb73,	// (0x0005e632) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb73,	// (0x0005e632) list_single_graphic_heading_pane_fp_g

0x32e8,	// (0x00051da7) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x32e8,	// (0x00051da7) list_single_graphic_heading_pane_fp_t1

0x32fe,	// (0x00051dbd) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x32fe,	// (0x00051dbd) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7e,	// (0x0005e63d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7e,	// (0x0005e63d) list_single_graphic_heading_pane_fp_t

0x3310,	// (0x00051dcf) list_single_cale_day_pane_fp_g1_ParamLimits

0x3310,	// (0x00051dcf) list_single_cale_day_pane_fp_g1

0x80c4,	// (0x00056b83) list_single_cale_day_pane_fp_g2_ParamLimits

0x80c4,	// (0x00056b83) list_single_cale_day_pane_fp_g2

0x3348,	// (0x00051e07) list_single_cale_day_pane_fp_g3_ParamLimits

0x3348,	// (0x00051e07) list_single_cale_day_pane_fp_g3

0x3370,	// (0x00051e2f) list_single_cale_day_pane_fp_g4_ParamLimits

0x3370,	// (0x00051e2f) list_single_cale_day_pane_fp_g4

0x3394,	// (0x00051e53) list_single_cale_day_pane_fp_g5_ParamLimits

0x3394,	// (0x00051e53) list_single_cale_day_pane_fp_g5

0x0004,

0xfb83,	// (0x0005e642) list_single_cale_day_pane_fp_g_ParamLimits

0xfb83,	// (0x0005e642) list_single_cale_day_pane_fp_g

0x33b8,	// (0x00051e77) list_single_cale_day_pane_fp_t1_ParamLimits

0x33b8,	// (0x00051e77) list_single_cale_day_pane_fp_t1

0x33de,	// (0x00051e9d) list_single_cale_day_pane_fp_t2_ParamLimits

0x33de,	// (0x00051e9d) list_single_cale_day_pane_fp_t2

0x33f7,	// (0x00051eb6) list_single_cale_day_pane_fp_t3_ParamLimits

0x33f7,	// (0x00051eb6) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8e,	// (0x0005e64d) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8e,	// (0x0005e64d) list_single_cale_day_pane_fp_t

0x80ac,	// (0x00056b6b) list_empty_pane_fp_g1_ParamLimits

0x80ac,	// (0x00056b6b) list_empty_pane_fp_g1

0x3410,	// (0x00051ecf) list_empty_pane_fp_t1

0x341e,	// (0x00051edd) list_empty_pane_fp_t2

0x0001,

0xfb95,	// (0x0005e654) list_empty_pane_fp_t

0x80ac,	// (0x00056b6b) list_single_heading_pane_fp_g1_ParamLimits

0x80ac,	// (0x00056b6b) list_single_heading_pane_fp_g1

0x3f52,	// (0x00052a11) list_single_heading_pane_fp_g2_ParamLimits

0x3f52,	// (0x00052a11) list_single_heading_pane_fp_g2

0x3fc5,	// (0x00052a84) list_single_heading_pane_fp_g3_ParamLimits

0x3fc5,	// (0x00052a84) list_single_heading_pane_fp_g3

0x0002,

0xfb9a,	// (0x0005e659) list_single_heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x0005e659) list_single_heading_pane_fp_g

0x342c,	// (0x00051eeb) list_single_heading_pane_fp_t1_ParamLimits

0x342c,	// (0x00051eeb) list_single_heading_pane_fp_t1

0x343e,	// (0x00051efd) list_single_heading_pane_fp_t2_ParamLimits

0x343e,	// (0x00051efd) list_single_heading_pane_fp_t2

0x0001,

0xfba1,	// (0x0005e660) list_single_heading_pane_fp_t_ParamLimits

0xfba1,	// (0x0005e660) list_single_heading_pane_fp_t

0x41aa,	// (0x00052c69) aid_size_cell_fast

0x3935,	// (0x000523f4) soft_indicator_pane_cp1_t1

0x41e7,	// (0x00052ca6) cell_app_pane_cp2_ParamLimits

0x41e7,	// (0x00052ca6) cell_app_pane_cp2

0x1c86,	// (0x00050745) fep_hwr_candidate_drop_down_list_pane

0x1e5e,	// (0x0005091d) fep_hwr_candidate_pane_g3_ParamLimits

0x1e5e,	// (0x0005091d) fep_hwr_candidate_pane_g3

0xecdf,	// (0x0005d79e) fep_hwr_candidate_pane_g4_ParamLimits

0xecdf,	// (0x0005d79e) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x0005e5cf) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x0005e5cf) fep_hwr_candidate_pane_g

0x7ba9,	// (0x00056668) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7ba9,	// (0x00056668) fep_vkb_candidate_drop_down_list_pane

0x7fc6,	// (0x00056a85) fep_vkb_candidate_pane_g3

0x7fce,	// (0x00056a8d) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0005e5fc) fep_vkb_candidate_pane_g

0x1ec9,	// (0x00050988) cell_hwr_candidate_pane_g1_ParamLimits

0x1ed7,	// (0x00050996) cell_hwr_candidate_pane_g3_ParamLimits

0x1ed7,	// (0x00050996) cell_hwr_candidate_pane_g3

0x9897,	// (0x00058356) cell_hwr_candidate_pane_g4_ParamLimits

0x9897,	// (0x00058356) cell_hwr_candidate_pane_g4

0x0002,

0xfb5c,	// (0x0005e61b) cell_hwr_candidate_pane_g_ParamLimits

0xfb5c,	// (0x0005e61b) cell_hwr_candidate_pane_g

0x7fe5,	// (0x00056aa4) cell_vkb_candidate_pane_g3_ParamLimits

0x7fe5,	// (0x00056aa4) cell_vkb_candidate_pane_g3

0x8000,	// (0x00056abf) cell_vkb_candidate_pane_g4_ParamLimits

0x8000,	// (0x00056abf) cell_vkb_candidate_pane_g4

0x80d0,	// (0x00056b8f) cell_app_pane_cp2_g1_ParamLimits

0x80d0,	// (0x00056b8f) cell_app_pane_cp2_g1

0x80ee,	// (0x00056bad) cell_app_pane_cp2_g2_ParamLimits

0x80ee,	// (0x00056bad) cell_app_pane_cp2_g2

0x0001,

0xfba6,	// (0x0005e665) cell_app_pane_cp2_g_ParamLimits

0xfba6,	// (0x0005e665) cell_app_pane_cp2_g

0x80fa,	// (0x00056bb9) cell_app_pane_cp2_t1_ParamLimits

0x80fa,	// (0x00056bb9) cell_app_pane_cp2_t1

0x3fb7,	// (0x00052a76) grid_highlight_pane_cp1_ParamLimits

0x3fb7,	// (0x00052a76) grid_highlight_pane_cp1

0x1f16,	// (0x000509d5) cell_hwr_candidate_pane_cp1_ParamLimits

0x1f16,	// (0x000509d5) cell_hwr_candidate_pane_cp1

0x1ec9,	// (0x00050988) fep_hwr_candidate_drop_down_list_pane_g1

0x1f35,	// (0x000509f4) fep_hwr_candidate_drop_down_list_pane_g2

0x1f42,	// (0x00050a01) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbab,	// (0x0005e66a) fep_hwr_candidate_drop_down_list_pane_g

0x1f4f,	// (0x00050a0e) fep_hwr_candidate_drop_down_list_scroll_pane

0x1f58,	// (0x00050a17) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1f58,	// (0x00050a17) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1f65,	// (0x00050a24) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1f65,	// (0x00050a24) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1f72,	// (0x00050a31) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1f72,	// (0x00050a31) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1f7f,	// (0x00050a3e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1f7f,	// (0x00050a3e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1f9a,	// (0x00050a59) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1f9a,	// (0x00050a59) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1fb5,	// (0x00050a74) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1fb5,	// (0x00050a74) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1fd0,	// (0x00050a8f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1fd0,	// (0x00050a8f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1feb,	// (0x00050aaa) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1feb,	// (0x00050aaa) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x0005e671) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x0005e671) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x810c,	// (0x00056bcb) cell_vkb_candidate_pane_cp1_ParamLimits

0x810c,	// (0x00056bcb) cell_vkb_candidate_pane_cp1

0x7cc2,	// (0x00056781) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7cc2,	// (0x00056781) fep_vkb_candidate_drop_down_list_pane_g1

0x812c,	// (0x00056beb) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x812c,	// (0x00056beb) fep_vkb_candidate_drop_down_list_pane_g2

0x8139,	// (0x00056bf8) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8139,	// (0x00056bf8) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x0005e682) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc3,	// (0x0005e682) fep_vkb_candidate_drop_down_list_pane_g

0x8146,	// (0x00056c05) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8146,	// (0x00056c05) fep_vkb_candidate_drop_down_list_scroll_pane

0x8153,	// (0x00056c12) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8153,	// (0x00056c12) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8160,	// (0x00056c1f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8160,	// (0x00056c1f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x816c,	// (0x00056c2b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x816c,	// (0x00056c2b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8178,	// (0x00056c37) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8178,	// (0x00056c37) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8199,	// (0x00056c58) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8199,	// (0x00056c58) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x81ba,	// (0x00056c79) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x81ba,	// (0x00056c79) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x81db,	// (0x00056c9a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x81db,	// (0x00056c9a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x81fc,	// (0x00056cbb) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x81fc,	// (0x00056cbb) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x0005e689) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x0005e689) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xcf65,	// (0x0005ba24) title_pane_g1_ParamLimits

0xcf78,	// (0x0005ba37) title_pane_g2_ParamLimits

0xf54e,	// (0x0005e00d) title_pane_g_ParamLimits

0x461f,	// (0x000530de) aid_call2_pane

0x4627,	// (0x000530e6) aid_call_pane

0x462f,	// (0x000530ee) popup_clock_analogue_window_g1

0x462f,	// (0x000530ee) popup_clock_analogue_window_g2

0x0cf4,	// (0x0004f7b3) popup_clock_analogue_window_g3

0x0cfd,	// (0x0004f7bc) popup_clock_analogue_window_g4

0x3652,	// (0x00052111) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0005e1bc) popup_clock_analogue_window_g

0x0d05,	// (0x0004f7c4) popup_clock_analogue_window_t1

0x0d13,	// (0x0004f7d2) clock_digital_number_pane_ParamLimits

0x0d13,	// (0x0004f7d2) clock_digital_number_pane

0x0d1f,	// (0x0004f7de) clock_digital_number_pane_cp02_ParamLimits

0x0d1f,	// (0x0004f7de) clock_digital_number_pane_cp02

0x0d2b,	// (0x0004f7ea) clock_digital_number_pane_cp03_ParamLimits

0x0d2b,	// (0x0004f7ea) clock_digital_number_pane_cp03

0x0d37,	// (0x0004f7f6) clock_digital_number_pane_cp04_ParamLimits

0x0d37,	// (0x0004f7f6) clock_digital_number_pane_cp04

0x0d43,	// (0x0004f802) clock_digital_separator_pane_ParamLimits

0x0d43,	// (0x0004f802) clock_digital_separator_pane

0x0d4f,	// (0x0004f80e) popup_clock_digital_window_t1_ParamLimits

0x0d4f,	// (0x0004f80e) popup_clock_digital_window_t1

0x3652,	// (0x00052111) clock_digital_number_pane_g1

0x3652,	// (0x00052111) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0005e1c7) clock_digital_number_pane_g

0x3652,	// (0x00052111) clock_digital_separator_pane_g1

0x3652,	// (0x00052111) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0005e1c7) clock_digital_separator_pane_g

0xd665,	// (0x0005c124) aid_fill_nsta_ParamLimits

0xd79b,	// (0x0005c25a) indicator_nsta_pane_ParamLimits

0x527e,	// (0x00053d3d) popup_clock_analogue_window

0x527e,	// (0x00053d3d) popup_clock_digital_window

0x416b,	// (0x00052c2a) grid_indicator_nsta_pane_ParamLimits

0x745d,	// (0x00055f1c) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0005e54f) clock_nsta_pane_t

0x0cb8,	// (0x0004f777) aid_size_max_handle

0xbe77,	// (0x0005a936) aid_size_min_handle

0x4c42,	// (0x00053701) editor_scroll_pane

0x8217,	// (0x00056cd6) ex_editor_pane

0x4118,	// (0x00052bd7) scroll_pane_cp13

0x3f4a,	// (0x00052a09) scroll_pane_cp14

0x465e,	// (0x0005311d) scroll_pane_cp36

0xd436,	// (0x0005bef5) list_single_graphic_hl_pane_cp2_ParamLimits

0xd436,	// (0x0005bef5) list_single_graphic_hl_pane_cp2

0xd8c7,	// (0x0005c386) list_single_graphic_hl_pane_ParamLimits

0xd8c7,	// (0x0005c386) list_single_graphic_hl_pane

0x3454,	// (0x00051f13) aid_size_min_hl_cp1

0x821f,	// (0x00056cde) list_highlight_pane_cp34_ParamLimits

0x821f,	// (0x00056cde) list_highlight_pane_cp34

0x8230,	// (0x00056cef) list_single_graphic_hl_pane_g1_ParamLimits

0x8230,	// (0x00056cef) list_single_graphic_hl_pane_g1

0xc889,	// (0x0005b348) list_single_graphic_hl_pane_g2_ParamLimits

0xc889,	// (0x0005b348) list_single_graphic_hl_pane_g2

0xc889,	// (0x0005b348) list_single_graphic_hl_pane_g3_ParamLimits

0xc889,	// (0x0005b348) list_single_graphic_hl_pane_g3

0x4bb3,	// (0x00053672) list_single_graphic_hl_pane_g4_ParamLimits

0x4bb3,	// (0x00053672) list_single_graphic_hl_pane_g4

0x3469,	// (0x00051f28) list_single_graphic_hl_pane_g5_ParamLimits

0x3469,	// (0x00051f28) list_single_graphic_hl_pane_g5

0x0004,

0xfbdb,	// (0x0005e69a) list_single_graphic_hl_pane_g_ParamLimits

0xfbdb,	// (0x0005e69a) list_single_graphic_hl_pane_g

0xc895,	// (0x0005b354) list_single_graphic_hl_pane_t1_ParamLimits

0xc895,	// (0x0005b354) list_single_graphic_hl_pane_t1

0x823d,	// (0x00056cfc) aid_size_min_hl_cp2

0x8246,	// (0x00056d05) list_highlight_pane_cp34_cp2_ParamLimits

0x8246,	// (0x00056d05) list_highlight_pane_cp34_cp2

0x8230,	// (0x00056cef) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8230,	// (0x00056cef) list_single_graphic_hl_pane_g1_cp2

0x8253,	// (0x00056d12) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8253,	// (0x00056d12) list_single_graphic_hl_pane_g2_cp2

0x825f,	// (0x00056d1e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x825f,	// (0x00056d1e) list_single_graphic_hl_pane_g3_cp2

0x7d81,	// (0x00056840) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7d81,	// (0x00056840) list_single_graphic_hl_pane_g4_cp2

0x826d,	// (0x00056d2c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x826d,	// (0x00056d2c) list_single_graphic_hl_pane_g5_cp2

0xbf4c,	// (0x0005aa0b) control_pane_g4_ParamLimits

0xbf4c,	// (0x0005aa0b) control_pane_g4

0x4f91,	// (0x00053a50) bg_popup_sub_pane_cp10_ParamLimits

0x7a4e,	// (0x0005650d) list_choice_list_pane_ParamLimits

0x7a5d,	// (0x0005651c) scroll_pane_cp23

0x39c5,	// (0x00052484) bg_popup_preview_window_pane_cp02_ParamLimits

0x8051,	// (0x00056b10) list_preview_fixed_pane_ParamLimits

0x8067,	// (0x00056b26) list_preview_fixed_pane_cp_ParamLimits

0x8067,	// (0x00056b26) list_preview_fixed_pane_cp

0x8073,	// (0x00056b32) popup_preview_fixed_window_g1_ParamLimits

0x8073,	// (0x00056b32) popup_preview_fixed_window_g1

0x807f,	// (0x00056b3e) popup_preview_fixed_window_g2_ParamLimits

0x807f,	// (0x00056b3e) popup_preview_fixed_window_g2

0x0002,

0xfb63,	// (0x0005e622) popup_preview_fixed_window_g_ParamLimits

0xfb63,	// (0x0005e622) popup_preview_fixed_window_g

0x0c2c,	// (0x0004f6eb) aid_navi_side_left_pane_ParamLimits

0x0c41,	// (0x0004f700) aid_navi_side_right_pane_ParamLimits

0x0c59,	// (0x0004f718) navi_icon_pane_stacon_ParamLimits

0x0c6d,	// (0x0004f72c) navi_navi_pane_stacon_ParamLimits

0x0c59,	// (0x0004f718) navi_text_pane_stacon_ParamLimits

0x0158,	// (0x0004ec17) main_text_info_pane

0x8297,	// (0x00056d56) listscroll_text_info_pane

0x829f,	// (0x00056d5e) list_text_info_pane_ParamLimits

0x829f,	// (0x00056d5e) list_text_info_pane

0x82ae,	// (0x00056d6d) scroll_pane_cp24_ParamLimits

0x82ae,	// (0x00056d6d) scroll_pane_cp24

0xe39b,	// (0x0005ce5a) list_text_info_pane_t1_ParamLimits

0xe39b,	// (0x0005ce5a) list_text_info_pane_t1

0xc0b5,	// (0x0005ab74) popup_fast_swap2_window_ParamLimits

0xc0b5,	// (0x0005ab74) popup_fast_swap2_window

0x82fd,	// (0x00056dbc) aid_size_cell_fast2

0x3648,	// (0x00052107) bg_popup_window_pane_cp17

0x5907,	// (0x000543c6) heading_pane_cp2

0x3c14,	// (0x000526d3) listscroll_fast2_pane

0x8307,	// (0x00056dc6) grid_fast2_pane

0x8311,	// (0x00056dd0) listscroll_fast2_pane_g1

0x8319,	// (0x00056dd8) listscroll_fast2_pane_g2

0x0001,

0xfbe6,	// (0x0005e6a5) listscroll_fast2_pane_g

0x4118,	// (0x00052bd7) scroll_pane_cp26

0x8323,	// (0x00056de2) cell_fast2_pane_ParamLimits

0x8323,	// (0x00056de2) cell_fast2_pane

0x8338,	// (0x00056df7) cell_fast2_pane_g1

0x8341,	// (0x00056e00) cell_fast2_pane_g2

0x834a,	// (0x00056e09) cell_fast2_pane_g3

0x0002,

0xfbeb,	// (0x0005e6aa) cell_fast2_pane_g

0x3d07,	// (0x000527c6) grid_highlight_pane_cp9

0x11ad,	// (0x0004fc6c) main_eswt_pane_ParamLimits

0x11ad,	// (0x0004fc6c) main_eswt_pane

0x82c3,	// (0x00056d82) list_single_text_info_pane

0x8352,	// (0x00056e11) eswt_ctrl_button_pane

0x8352,	// (0x00056e11) eswt_ctrl_canvas_pane

0x835a,	// (0x00056e19) eswt_ctrl_combo_pane

0x8352,	// (0x00056e11) eswt_ctrl_default_pane

0x8352,	// (0x00056e11) eswt_ctrl_label_pane

0x8362,	// (0x00056e21) eswt_ctrl_wait_pane

0x836a,	// (0x00056e29) eswt_shell_pane

0x3648,	// (0x00052107) listscroll_eswt_app_pane

0x838a,	// (0x00056e49) popup_eswt_tasktip_window_ParamLimits

0x838a,	// (0x00056e49) popup_eswt_tasktip_window

0x551b,	// (0x00053fda) bg_popup_window_pane_cp18

0x839b,	// (0x00056e5a) eswt_control_pane_g1_ParamLimits

0x839b,	// (0x00056e5a) eswt_control_pane_g1

0x83a8,	// (0x00056e67) eswt_control_pane_g2_ParamLimits

0x83a8,	// (0x00056e67) eswt_control_pane_g2

0x83b5,	// (0x00056e74) eswt_control_pane_g3_ParamLimits

0x83b5,	// (0x00056e74) eswt_control_pane_g3

0x83c2,	// (0x00056e81) eswt_control_pane_g4_ParamLimits

0x83c2,	// (0x00056e81) eswt_control_pane_g4

0x0003,

0xfbf2,	// (0x0005e6b1) eswt_control_pane_g_ParamLimits

0xfbf2,	// (0x0005e6b1) eswt_control_pane_g

0x3fb7,	// (0x00052a76) bg_button_pane_ParamLimits

0x3fb7,	// (0x00052a76) bg_button_pane

0x3d1c,	// (0x000527db) common_borders_pane_copy2_ParamLimits

0x3d1c,	// (0x000527db) common_borders_pane_copy2

0x83cf,	// (0x00056e8e) control_button_pane_g1_ParamLimits

0x83cf,	// (0x00056e8e) control_button_pane_g1

0x83db,	// (0x00056e9a) control_button_pane_g2_ParamLimits

0x83db,	// (0x00056e9a) control_button_pane_g2

0x83e7,	// (0x00056ea6) control_button_pane_g3_ParamLimits

0x83e7,	// (0x00056ea6) control_button_pane_g3

0x0002,

0xfbfb,	// (0x0005e6ba) control_button_pane_g_ParamLimits

0xfbfb,	// (0x0005e6ba) control_button_pane_g

0x83fb,	// (0x00056eba) control_button_pane_t1

0x8409,	// (0x00056ec8) control_button_pane_t2

0x0001,

0xfc02,	// (0x0005e6c1) control_button_pane_t

0x54a7,	// (0x00053f66) bg_button_pane_g1

0x54b7,	// (0x00053f76) bg_button_pane_g2

0x54af,	// (0x00053f6e) bg_button_pane_g3

0x54c7,	// (0x00053f86) bg_button_pane_g4

0x54bf,	// (0x00053f7e) bg_button_pane_g5

0x54cf,	// (0x00053f8e) bg_button_pane_g6

0x54d7,	// (0x00053f96) bg_button_pane_g7

0x54e7,	// (0x00053fa6) bg_button_pane_g8

0x54df,	// (0x00053f9e) bg_button_pane_g9

0x0008,

0xf866,	// (0x0005e325) bg_button_pane_g

0x7a09,	// (0x000564c8) common_borders_pane_ParamLimits

0x7a09,	// (0x000564c8) common_borders_pane

0x839b,	// (0x00056e5a) eswt_control_pane_g1_copy1_ParamLimits

0x839b,	// (0x00056e5a) eswt_control_pane_g1_copy1

0x83a8,	// (0x00056e67) eswt_control_pane_g2_copy1_ParamLimits

0x83a8,	// (0x00056e67) eswt_control_pane_g2_copy1

0x83b5,	// (0x00056e74) eswt_control_pane_g3_copy1_ParamLimits

0x83b5,	// (0x00056e74) eswt_control_pane_g3_copy1

0x83c2,	// (0x00056e81) eswt_control_pane_g4_copy1_ParamLimits

0x83c2,	// (0x00056e81) eswt_control_pane_g4_copy1

0x7a44,	// (0x00056503) bg_eswt_ctrl_canvas_pane_g1

0x7a09,	// (0x000564c8) common_borders_pane_cp2_ParamLimits

0x7a09,	// (0x000564c8) common_borders_pane_cp2

0x7a09,	// (0x000564c8) common_borders_pane_cp3_ParamLimits

0x7a09,	// (0x000564c8) common_borders_pane_cp3

0x8417,	// (0x00056ed6) separator_horizontal_pane

0x841f,	// (0x00056ede) separator_vertical_pane

0x839b,	// (0x00056e5a) eswt_control_pane_g1_copy2_ParamLimits

0x839b,	// (0x00056e5a) eswt_control_pane_g1_copy2

0x83a8,	// (0x00056e67) eswt_control_pane_g2_copy2_ParamLimits

0x83a8,	// (0x00056e67) eswt_control_pane_g2_copy2

0x83b5,	// (0x00056e74) eswt_control_pane_g3_copy2_ParamLimits

0x83b5,	// (0x00056e74) eswt_control_pane_g3_copy2

0x83c2,	// (0x00056e81) eswt_control_pane_g4_copy2_ParamLimits

0x83c2,	// (0x00056e81) eswt_control_pane_g4_copy2

0x3648,	// (0x00052107) common_borders_pane_cp4

0x8428,	// (0x00056ee7) separator_horizontal_pane_g1

0x8431,	// (0x00056ef0) separator_horizontal_pane_g2

0x843a,	// (0x00056ef9) separator_horizontal_pane_g3

0x0002,

0xfc07,	// (0x0005e6c6) separator_horizontal_pane_g

0x839b,	// (0x00056e5a) eswt_control_pane_g1_copy3_ParamLimits

0x839b,	// (0x00056e5a) eswt_control_pane_g1_copy3

0x83a8,	// (0x00056e67) eswt_control_pane_g2_copy3_ParamLimits

0x83a8,	// (0x00056e67) eswt_control_pane_g2_copy3

0x83b5,	// (0x00056e74) eswt_control_pane_g3_copy3_ParamLimits

0x83b5,	// (0x00056e74) eswt_control_pane_g3_copy3

0x83c2,	// (0x00056e81) eswt_control_pane_g4_copy3_ParamLimits

0x83c2,	// (0x00056e81) eswt_control_pane_g4_copy3

0x3648,	// (0x00052107) common_borders_pane_cp5

0x8443,	// (0x00056f02) separator_vertical_pane_g1

0x844c,	// (0x00056f0b) separator_vertical_pane_g2

0x8455,	// (0x00056f14) separator_vertical_pane_g3

0x0002,

0xfc0e,	// (0x0005e6cd) separator_vertical_pane_g

0x839b,	// (0x00056e5a) eswt_control_pane_g1_copy4_ParamLimits

0x839b,	// (0x00056e5a) eswt_control_pane_g1_copy4

0x83a8,	// (0x00056e67) eswt_control_pane_g2_copy4_ParamLimits

0x83a8,	// (0x00056e67) eswt_control_pane_g2_copy4

0x83b5,	// (0x00056e74) eswt_control_pane_g3_copy4_ParamLimits

0x83b5,	// (0x00056e74) eswt_control_pane_g3_copy4

0x83c2,	// (0x00056e81) eswt_control_pane_g4_copy4_ParamLimits

0x83c2,	// (0x00056e81) eswt_control_pane_g4_copy4

0xe3b6,	// (0x0005ce75) eswt_ctrl_combo_button_pane

0xe3be,	// (0x0005ce7d) eswt_ctrl_input_pane

0xe3c6,	// (0x0005ce85) popup_choice_list_window_cp70

0xe3ce,	// (0x0005ce8d) eswt_ctrl_input_pane_t1

0x3648,	// (0x00052107) input_focus_pane_cp70

0x7a09,	// (0x000564c8) bg_button_pane_cp70_ParamLimits

0x7a09,	// (0x000564c8) bg_button_pane_cp70

0xe3dc,	// (0x0005ce9b) eswt_ctrl_combo_button_pane_g1

0x848c,	// (0x00056f4b) wait_bar_pane_cp70

0x551b,	// (0x00053fda) bg_popup_window_pane_cp70_ParamLimits

0x551b,	// (0x00053fda) bg_popup_window_pane_cp70

0x8494,	// (0x00056f53) popup_eswt_tasktip_window_t1

0x84aa,	// (0x00056f69) wait_bar_pane_cp71_ParamLimits

0x84aa,	// (0x00056f69) wait_bar_pane_cp71

0x84b6,	// (0x00056f75) grid_eswt_app_pane

0x4438,	// (0x00052ef7) scroll_pane_cp70

0xe3e4,	// (0x0005cea3) cell_eswt_app_pane_ParamLimits

0xe3e4,	// (0x0005cea3) cell_eswt_app_pane

0xe40e,	// (0x0005cecd) cell_eswt_app_pane_g1_ParamLimits

0xe40e,	// (0x0005cecd) cell_eswt_app_pane_g1

0xe43d,	// (0x0005cefc) cell_eswt_app_pane_g2_ParamLimits

0xe43d,	// (0x0005cefc) cell_eswt_app_pane_g2

0x0001,

0xfc15,	// (0x0005e6d4) cell_eswt_app_pane_g_ParamLimits

0xfc15,	// (0x0005e6d4) cell_eswt_app_pane_g

0xe466,	// (0x0005cf25) cell_eswt_app_pane_t1_ParamLimits

0xe466,	// (0x0005cf25) cell_eswt_app_pane_t1

0x8579,	// (0x00057038) grid_highlight_pane_cp70_ParamLimits

0x8579,	// (0x00057038) grid_highlight_pane_cp70

0x4b17,	// (0x000535d6) set_content_pane_g1

0xd61a,	// (0x0005c0d9) status_small_volume_pane

0x2006,	// (0x00050ac5) status_small_volume_pane_g1

0x200e,	// (0x00050acd) volume_small2_pane

0x2017,	// (0x00050ad6) volume_small2_pane_g1

0x2020,	// (0x00050adf) volume_small2_pane_g2

0x2029,	// (0x00050ae8) volume_small2_pane_g3

0x2032,	// (0x00050af1) volume_small2_pane_g4

0x203b,	// (0x00050afa) volume_small2_pane_g5

0x2044,	// (0x00050b03) volume_small2_pane_g6

0x204d,	// (0x00050b0c) volume_small2_pane_g7

0x2056,	// (0x00050b15) volume_small2_pane_g8

0x205f,	// (0x00050b1e) volume_small2_pane_g9

0x2068,	// (0x00050b27) volume_small2_pane_g10

0x0009,

0xfc1a,	// (0x0005e6d9) volume_small2_pane_g

0x7e16,	// (0x000568d5) fep_vkb_top_text_pane_g1_ParamLimits

0xe343,	// (0x0005ce02) fep_vkb_top_text_pane_t1_ParamLimits

0x808b,	// (0x00056b4a) popup_preview_fixed_window_g3_ParamLimits

0x808b,	// (0x00056b4a) popup_preview_fixed_window_g3

0xc6d8,	// (0x0005b197) popup_toolbar_trans_pane

0xdd31,	// (0x0005c7f0) aid_height_set_list_ParamLimits

0x687c,	// (0x0005533b) aid_size_parent_ParamLimits

0x4f91,	// (0x00053a50) list_highlight_pane_cp2_ParamLimits

0x4b17,	// (0x000535d6) set_content_pane_g1_ParamLimits

0xd8d8,	// (0x0005c397) list_single_image_pane_ParamLimits

0xd8d8,	// (0x0005c397) list_single_image_pane

0xe498,	// (0x0005cf57) aid_size_cell_image_ParamLimits

0xe498,	// (0x0005cf57) aid_size_cell_image

0xe4a5,	// (0x0005cf64) grid_single_image_pane_ParamLimits

0xe4a5,	// (0x0005cf64) grid_single_image_pane

0x50e9,	// (0x00053ba8) list_single_image_pane_g1_ParamLimits

0x50e9,	// (0x00053ba8) list_single_image_pane_g1

0x859e,	// (0x0005705d) list_single_image_pane_g2_ParamLimits

0x859e,	// (0x0005705d) list_single_image_pane_g2

0x0001,

0xfc2f,	// (0x0005e6ee) list_single_image_pane_g_ParamLimits

0xfc2f,	// (0x0005e6ee) list_single_image_pane_g

0x85b2,	// (0x00057071) list_single_image_pane_t1_ParamLimits

0x85b2,	// (0x00057071) list_single_image_pane_t1

0xe4b3,	// (0x0005cf72) cell_image_list_pane_ParamLimits

0xe4b3,	// (0x0005cf72) cell_image_list_pane

0xe4c9,	// (0x0005cf88) cell_image_list_pane_g1

0xe4d2,	// (0x0005cf91) cell_image_list_pane_g2

0x0001,

0xfc34,	// (0x0005e6f3) cell_image_list_pane_g

0x85ee,	// (0x000570ad) aid_size_cell_tb_trans_pane

0x3fb7,	// (0x00052a76) bg_tb_trans_pane

0x8600,	// (0x000570bf) grid_tb_trans_pane

0x54a7,	// (0x00053f66) bg_tb_trans_pane_g1

0x54b7,	// (0x00053f76) bg_tb_trans_pane_g2

0x54af,	// (0x00053f6e) bg_tb_trans_pane_g3

0x54c7,	// (0x00053f86) bg_tb_trans_pane_g4

0x54bf,	// (0x00053f7e) bg_tb_trans_pane_g5

0x54e7,	// (0x00053fa6) bg_tb_trans_pane_g6

0x54df,	// (0x00053f9e) bg_tb_trans_pane_g7

0x54cf,	// (0x00053f8e) bg_tb_trans_pane_g8

0x54d7,	// (0x00053f96) bg_tb_trans_pane_g9

0x0008,

0xfc39,	// (0x0005e6f8) bg_tb_trans_pane_g

0x8614,	// (0x000570d3) cell_toolbar_trans_pane_ParamLimits

0x8614,	// (0x000570d3) cell_toolbar_trans_pane

0x7a44,	// (0x00056503) cell_toolbar_trans_pane_g1

0xe106,	// (0x0005cbc5) list_form2_midp_pane_t1

0xe114,	// (0x0005cbd3) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x0005e595) list_form2_midp_pane_t

0x7635,	// (0x000560f4) scroll_pane_cp51_ParamLimits

0x77f1,	// (0x000562b0) form2_midp_wait_pane_g1

0x77fa,	// (0x000562b9) form2_midp_wait_pane_g2

0x7803,	// (0x000562c2) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x0005e5aa) form2_midp_wait_pane_g

0x373c,	// (0x000521fb) list_highlight_pane_cp21_ParamLimits

0x784f,	// (0x0005630e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x785e,	// (0x0005631d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6a34,	// (0x000554f3) list_single_2graphic_im_pane_ParamLimits

0x6a34,	// (0x000554f3) list_single_2graphic_im_pane

0xe4db,	// (0x0005cf9a) list_single_2graphic_im_pane_g1_ParamLimits

0xe4db,	// (0x0005cf9a) list_single_2graphic_im_pane_g1

0xe4ec,	// (0x0005cfab) list_single_2graphic_im_pane_g2_ParamLimits

0xe4ec,	// (0x0005cfab) list_single_2graphic_im_pane_g2

0xe4f8,	// (0x0005cfb7) list_single_2graphic_im_pane_g3_ParamLimits

0xe4f8,	// (0x0005cfb7) list_single_2graphic_im_pane_g3

0x0003,

0xfc4c,	// (0x0005e70b) list_single_2graphic_im_pane_g_ParamLimits

0xfc4c,	// (0x0005e70b) list_single_2graphic_im_pane_g

0xe50c,	// (0x0005cfcb) list_single_2graphic_im_pane_t1_ParamLimits

0xe50c,	// (0x0005cfcb) list_single_2graphic_im_pane_t1

0x8097,	// (0x00056b56) list_single_graphic_2heading_pane_fp_ParamLimits

0x8097,	// (0x00056b56) list_single_graphic_2heading_pane_fp

0x32c6,	// (0x00051d85) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x32c6,	// (0x00051d85) list_single_graphic_2heading_pane_fp_g1

0x80ac,	// (0x00056b6b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x80ac,	// (0x00056b6b) list_single_graphic_2heading_pane_fp_g2

0x3f52,	// (0x00052a11) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3f52,	// (0x00052a11) list_single_graphic_2heading_pane_fp_g3

0x3fc5,	// (0x00052a84) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3fc5,	// (0x00052a84) list_single_graphic_2heading_pane_fp_g4

0x80b8,	// (0x00056b77) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x80b8,	// (0x00056b77) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb73,	// (0x0005e632) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb73,	// (0x0005e632) list_single_graphic_2heading_pane_fp_g

0x3493,	// (0x00051f52) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3493,	// (0x00051f52) list_single_graphic_2heading_pane_fp_t1

0x32fe,	// (0x00051dbd) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x32fe,	// (0x00051dbd) list_single_graphic_2heading_pane_fp_t2

0x34a9,	// (0x00051f68) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x34a9,	// (0x00051f68) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc55,	// (0x0005e714) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc55,	// (0x0005e714) list_single_graphic_2heading_pane_fp_t

0x7ad0,	// (0x0005658f) fep_hwr_write_pane_g5_ParamLimits

0x7ad0,	// (0x0005658f) fep_hwr_write_pane_g5

0x7adc,	// (0x0005659b) fep_hwr_write_pane_g6_ParamLimits

0x7adc,	// (0x0005659b) fep_hwr_write_pane_g6

0x836a,	// (0x00056e29) eswt_shell_pane_ParamLimits

0x551b,	// (0x00053fda) bg_popup_window_pane_cp18_ParamLimits

0x67c4,	// (0x00055283) heading_pane_cp70

0x8494,	// (0x00056f53) popup_eswt_tasktip_window_t1_ParamLimits

0xd6c0,	// (0x0005c17f) aid_touch_tab_arrow_left

0xd6d6,	// (0x0005c195) aid_touch_tab_arrow_right

0xcf90,	// (0x0005ba4f) title_pane_g3_ParamLimits

0xcf90,	// (0x0005ba4f) title_pane_g3

0x3f76,	// (0x00052a35) set_value_pane_g1

0xc6d8,	// (0x0005b197) popup_toolbar_trans_pane_ParamLimits

0x85ee,	// (0x000570ad) aid_size_cell_tb_trans_pane_ParamLimits

0x3fb7,	// (0x00052a76) bg_tb_trans_pane_ParamLimits

0x8600,	// (0x000570bf) grid_tb_trans_pane_ParamLimits

0x39c5,	// (0x00052484) cont_note_pane_ParamLimits

0x39c5,	// (0x00052484) cont_note_pane

0x3d1c,	// (0x000527db) cont_snote2_single_text_pane_ParamLimits

0x3d1c,	// (0x000527db) cont_snote2_single_text_pane

0x3d1c,	// (0x000527db) cont_snote2_single_graphic_pane_ParamLimits

0x3d1c,	// (0x000527db) cont_snote2_single_graphic_pane

0x5b22,	// (0x000545e1) cont_note_wait_pane_ParamLimits

0x5b22,	// (0x000545e1) cont_note_wait_pane

0x5b22,	// (0x000545e1) cont_note_image_pane_ParamLimits

0x5b22,	// (0x000545e1) cont_note_image_pane

0x86a8,	// (0x00057167) popup_note2_window_g1_ParamLimits

0x86a8,	// (0x00057167) popup_note2_window_g1

0x86d9,	// (0x00057198) popup_note2_window_t1_ParamLimits

0x86d9,	// (0x00057198) popup_note2_window_t1

0x871e,	// (0x000571dd) popup_note2_window_t2_ParamLimits

0x871e,	// (0x000571dd) popup_note2_window_t2

0x8763,	// (0x00057222) popup_note2_window_t3_ParamLimits

0x8763,	// (0x00057222) popup_note2_window_t3

0x87a8,	// (0x00057267) popup_note2_window_t4_ParamLimits

0x87a8,	// (0x00057267) popup_note2_window_t4

0x3a49,	// (0x00052508) popup_note2_window_t5_ParamLimits

0x3a49,	// (0x00052508) popup_note2_window_t5

0x0004,

0xfc61,	// (0x0005e720) popup_note2_window_t_ParamLimits

0xfc61,	// (0x0005e720) popup_note2_window_t

0x87d7,	// (0x00057296) popup_note2_image_window_g1_ParamLimits

0x87d7,	// (0x00057296) popup_note2_image_window_g1

0x87e3,	// (0x000572a2) popup_note2_image_window_g2_ParamLimits

0x87e3,	// (0x000572a2) popup_note2_image_window_g2

0x0001,

0xfc6c,	// (0x0005e72b) popup_note2_image_window_g_ParamLimits

0xfc6c,	// (0x0005e72b) popup_note2_image_window_g

0x87f5,	// (0x000572b4) popup_note2_image_window_t1_ParamLimits

0x87f5,	// (0x000572b4) popup_note2_image_window_t1

0x880d,	// (0x000572cc) popup_note2_image_window_t2_ParamLimits

0x880d,	// (0x000572cc) popup_note2_image_window_t2

0x8825,	// (0x000572e4) popup_note2_image_window_t3_ParamLimits

0x8825,	// (0x000572e4) popup_note2_image_window_t3

0x0002,

0xfc71,	// (0x0005e730) popup_note2_image_window_t_ParamLimits

0xfc71,	// (0x0005e730) popup_note2_image_window_t

0x5b30,	// (0x000545ef) popup_note2_wait_window_g1_ParamLimits

0x5b30,	// (0x000545ef) popup_note2_wait_window_g1

0x8841,	// (0x00057300) popup_note2_wait_window_g2_ParamLimits

0x8841,	// (0x00057300) popup_note2_wait_window_g2

0x5b48,	// (0x00054607) popup_note2_wait_window_g3_ParamLimits

0x5b48,	// (0x00054607) popup_note2_wait_window_g3

0x0002,

0xfc78,	// (0x0005e737) popup_note2_wait_window_g_ParamLimits

0xfc78,	// (0x0005e737) popup_note2_wait_window_g

0x884d,	// (0x0005730c) popup_note2_wait_window_t1_ParamLimits

0x884d,	// (0x0005730c) popup_note2_wait_window_t1

0x886b,	// (0x0005732a) popup_note2_wait_window_t2_ParamLimits

0x886b,	// (0x0005732a) popup_note2_wait_window_t2

0x8889,	// (0x00057348) popup_note2_wait_window_t3_ParamLimits

0x8889,	// (0x00057348) popup_note2_wait_window_t3

0x889b,	// (0x0005735a) popup_note2_wait_window_t4_ParamLimits

0x889b,	// (0x0005735a) popup_note2_wait_window_t4

0x0003,

0xfc7f,	// (0x0005e73e) popup_note2_wait_window_t_ParamLimits

0xfc7f,	// (0x0005e73e) popup_note2_wait_window_t

0x88ad,	// (0x0005736c) wait_bar2_pane_ParamLimits

0x88ad,	// (0x0005736c) wait_bar2_pane

0x88c5,	// (0x00057384) popup_snote2_single_text_window_g1_ParamLimits

0x88c5,	// (0x00057384) popup_snote2_single_text_window_g1

0x88ed,	// (0x000573ac) popup_snote2_single_text_window_t1_ParamLimits

0x88ed,	// (0x000573ac) popup_snote2_single_text_window_t1

0x8939,	// (0x000573f8) popup_snote2_single_text_window_t2_ParamLimits

0x8939,	// (0x000573f8) popup_snote2_single_text_window_t2

0x8985,	// (0x00057444) popup_snote2_single_text_window_t3_ParamLimits

0x8985,	// (0x00057444) popup_snote2_single_text_window_t3

0x89c6,	// (0x00057485) popup_snote2_single_text_window_t4_ParamLimits

0x89c6,	// (0x00057485) popup_snote2_single_text_window_t4

0x89fc,	// (0x000574bb) popup_snote2_single_text_window_t5_ParamLimits

0x89fc,	// (0x000574bb) popup_snote2_single_text_window_t5

0x0004,

0xfc88,	// (0x0005e747) popup_snote2_single_text_window_t_ParamLimits

0xfc88,	// (0x0005e747) popup_snote2_single_text_window_t

0x8a27,	// (0x000574e6) popup_snote2_single_graphic_window_g1_ParamLimits

0x8a27,	// (0x000574e6) popup_snote2_single_graphic_window_g1

0x8a4f,	// (0x0005750e) popup_snote2_single_graphic_window_g2_ParamLimits

0x8a4f,	// (0x0005750e) popup_snote2_single_graphic_window_g2

0x0001,

0xfc93,	// (0x0005e752) popup_snote2_single_graphic_window_g_ParamLimits

0xfc93,	// (0x0005e752) popup_snote2_single_graphic_window_g

0x8a77,	// (0x00057536) popup_snote2_single_graphic_window_t1_ParamLimits

0x8a77,	// (0x00057536) popup_snote2_single_graphic_window_t1

0x8ac3,	// (0x00057582) popup_snote2_single_graphic_window_t2_ParamLimits

0x8ac3,	// (0x00057582) popup_snote2_single_graphic_window_t2

0x8985,	// (0x00057444) popup_snote2_single_graphic_window_t3_ParamLimits

0x8985,	// (0x00057444) popup_snote2_single_graphic_window_t3

0x89c6,	// (0x00057485) popup_snote2_single_graphic_window_t4_ParamLimits

0x89c6,	// (0x00057485) popup_snote2_single_graphic_window_t4

0x89fc,	// (0x000574bb) popup_snote2_single_graphic_window_t5_ParamLimits

0x89fc,	// (0x000574bb) popup_snote2_single_graphic_window_t5

0x0004,

0xfc98,	// (0x0005e757) popup_snote2_single_graphic_window_t_ParamLimits

0xfc98,	// (0x0005e757) popup_snote2_single_graphic_window_t

0x74f6,	// (0x00055fb5) clock_nsta_pane_cp2_t1

0x74f6,	// (0x00055fb5) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0005e56b) clock_nsta_pane_cp2_t

0x09aa,	// (0x0004f469) form_field_data_wide_pane_g1_ParamLimits

0x3f52,	// (0x00052a11) form_field_data_wide_pane_g2_ParamLimits

0x3f52,	// (0x00052a11) form_field_data_wide_pane_g2

0x3fc5,	// (0x00052a84) form_field_data_wide_pane_g3_ParamLimits

0x3fc5,	// (0x00052a84) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0005e13f) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0005e13f) form_field_data_wide_pane_g

0xe049,	// (0x0005cb08) grid_touch_3_pane_ParamLimits

0xe049,	// (0x0005cb08) grid_touch_3_pane

0xe53d,	// (0x0005cffc) cell_touch_3_pane_ParamLimits

0xe53d,	// (0x0005cffc) cell_touch_3_pane

0x7a44,	// (0x00056503) cell_touch_3_pane_g1

0x7a44,	// (0x00056503) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x0005e5f0) cell_touch_3_pane_g

0x3a7b,	// (0x0005253a) cont_query_data_pane

0x3a83,	// (0x00052542) cont_query_data_pane_cp1

0x8b3d,	// (0x000575fc) button_value_adjust_pane_cp7

0x8b45,	// (0x00057604) query_popup_pane_cp3

0x471f,	// (0x000531de) bg_popup_sub_pane_cp22_ParamLimits

0x0d6e,	// (0x0004f82d) navi_navi_volume_pane_cp2

0x0d89,	// (0x0004f848) popup_side_volume_key_window_g2

0x0d98,	// (0x0004f857) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0005e1d5) popup_side_volume_key_window_g

0x0db5,	// (0x0004f874) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0005e1dc) popup_side_volume_key_window_t

0x49d6,	// (0x00053495) popup_side_volume_key_window_ParamLimits

0xd2d4,	// (0x0005bd93) list_double_graphic_pane_g4_ParamLimits

0xd2d4,	// (0x0005bd93) list_double_graphic_pane_g4

0xdeaa,	// (0x0005c969) list_single_2heading_msg_pane_ParamLimits

0xdeaa,	// (0x0005c969) list_single_2heading_msg_pane

0xd8e9,	// (0x0005c3a8) list_single_2heading_msg_pane_g1_ParamLimits

0xd8e9,	// (0x0005c3a8) list_single_2heading_msg_pane_g1

0xd8f5,	// (0x0005c3b4) list_single_2heading_msg_pane_g2_ParamLimits

0xd8f5,	// (0x0005c3b4) list_single_2heading_msg_pane_g2

0xd908,	// (0x0005c3c7) list_single_2heading_msg_pane_g3_ParamLimits

0xd908,	// (0x0005c3c7) list_single_2heading_msg_pane_g3

0xd914,	// (0x0005c3d3) list_single_2heading_msg_pane_g4_ParamLimits

0xd914,	// (0x0005c3d3) list_single_2heading_msg_pane_g4

0x0003,

0xfca3,	// (0x0005e762) list_single_2heading_msg_pane_g_ParamLimits

0xfca3,	// (0x0005e762) list_single_2heading_msg_pane_g

0xc8ab,	// (0x0005b36a) list_single_2heading_msg_pane_t1_ParamLimits

0xc8ab,	// (0x0005b36a) list_single_2heading_msg_pane_t1

0xc8d3,	// (0x0005b392) list_single_2heading_msg_pane_t2_ParamLimits

0xc8d3,	// (0x0005b392) list_single_2heading_msg_pane_t2

0xc93e,	// (0x0005b3fd) list_single_2heading_msg_pane_t3_ParamLimits

0xc93e,	// (0x0005b3fd) list_single_2heading_msg_pane_t3

0x3582,	// (0x00052041) list_single_2heading_msg_pane_t4_ParamLimits

0x3582,	// (0x00052041) list_single_2heading_msg_pane_t4

0x0003,

0xfcac,	// (0x0005e76b) list_single_2heading_msg_pane_t_ParamLimits

0xfcac,	// (0x0005e76b) list_single_2heading_msg_pane_t

0x3690,	// (0x0005214f) title_pane_g4_ParamLimits

0x3690,	// (0x0005214f) title_pane_g4

0x0b7d,	// (0x0004f63c) title_pane_stacon_g3_ParamLimits

0x0b7d,	// (0x0004f63c) title_pane_stacon_g3

0x866b,	// (0x0005712a) list_single_2graphic_im_pane_g4_ParamLimits

0x866b,	// (0x0005712a) list_single_2graphic_im_pane_g4

0x6581,	// (0x00055040) popup_side_volume_key_window_cp

0x6d47,	// (0x00055806) main_idle_act2_pane_t1

0x17b2,	// (0x00050271) toolbar_button_pane_g10

0xd29b,	// (0x0005bd5a) popup_toolbar_window_cp1

0x74e7,	// (0x00055fa6) clock_nsta_pane_cp_t1

0x74e7,	// (0x00055fa6) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x0005e566) clock_nsta_pane_cp_t

0x0d6e,	// (0x0004f82d) navi_navi_volume_pane_cp2_ParamLimits

0x0d7d,	// (0x0004f83c) popup_side_volume_key_window_g1_ParamLimits

0x0d89,	// (0x0004f848) popup_side_volume_key_window_g2_ParamLimits

0x0d98,	// (0x0004f857) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0005e1d5) popup_side_volume_key_window_g_ParamLimits

0x1c72,	// (0x00050731) fep_hwr_aid_pane

0x1d19,	// (0x000507d8) bg_fep_hwr_top_pane_g4_ParamLimits

0x7aa0,	// (0x0005655f) fep_hwr_top_pane_g1_ParamLimits

0x7ab2,	// (0x00056571) fep_hwr_top_pane_g2_ParamLimits

0x1d39,	// (0x000507f8) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x0005e5bb) fep_hwr_top_pane_g_ParamLimits

0x1d4e,	// (0x0005080d) fep_hwr_top_text_pane_ParamLimits

0x6344,	// (0x00054e03) aid_touch_tab_arrow_arrow_2

0x634d,	// (0x00054e0c) aid_touch_tab_arrow_left_2

0x1c86,	// (0x00050745) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1cbd,	// (0x0005077c) fep_hwr_prediction_pane

0x7c12,	// (0x000566d1) fep_vkb_prediction_pane

0xe323,	// (0x0005cde2) fep_vkb_side_pane_g3_ParamLimits

0xe323,	// (0x0005cde2) fep_vkb_side_pane_g3

0x1ec9,	// (0x00050988) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1f35,	// (0x000509f4) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1f42,	// (0x00050a01) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbab,	// (0x0005e66a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x2071,	// (0x00050b30) fep_hwr_prediction_pane_g1

0x207b,	// (0x00050b3a) fep_hwr_prediction_pane_g2

0x2083,	// (0x00050b42) fep_hwr_prediction_pane_g3

0x208b,	// (0x00050b4a) fep_hwr_prediction_pane_g4

0x0003,

0xfcb5,	// (0x0005e774) fep_hwr_prediction_pane_g

0x8b6a,	// (0x00057629) fep_vkb_prediction_pane_g1

0x8b74,	// (0x00057633) fep_vkb_prediction_pane_g2

0x8b7c,	// (0x0005763b) fep_vkb_prediction_pane_g3

0x8b84,	// (0x00057643) fep_vkb_prediction_pane_g4

0x0003,

0xfcbe,	// (0x0005e77d) fep_vkb_prediction_pane_g

0x1af2,	// (0x000505b1) slider_set_pane_g3

0x1b06,	// (0x000505c5) slider_set_pane_g4

0x1b1e,	// (0x000505dd) slider_set_pane_g5

0x1af2,	// (0x000505b1) slider_set_pane_g6

0x1b34,	// (0x000505f3) slider_set_pane_g7

0x69e1,	// (0x000554a0) slider_form_pane_g3

0x69ea,	// (0x000554a9) slider_form_pane_g4

0x69f2,	// (0x000554b1) slider_form_pane_g5

0x69e1,	// (0x000554a0) slider_form_pane_g6

0xde7c,	// (0x0005c93b) slider_form_pane_g7

0x6ff1,	// (0x00055ab0) slider_set_pane_vc_g3

0x6ffa,	// (0x00055ab9) slider_set_pane_vc_g4

0x7003,	// (0x00055ac2) slider_set_pane_vc_g5

0x6ff1,	// (0x00055ab0) slider_set_pane_vc_g6

0x700c,	// (0x00055acb) slider_set_pane_vc_g7

0x71cc,	// (0x00055c8b) slider_form_pane_vc_g1

0x71d5,	// (0x00055c94) slider_form_pane_vc_g2

0x71de,	// (0x00055c9d) slider_form_pane_vc_g3

0x71cc,	// (0x00055c8b) slider_form_pane_vc_g4

0x71e7,	// (0x00055ca6) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x0005e538) slider_form_pane_vc_g

0x0158,	// (0x0004ec17) main_idle_act3_pane

0x8b8c,	// (0x0005764b) ai3_links_pane

0xe585,	// (0x0005d044) popup_ai3_data_window_ParamLimits

0xe585,	// (0x0005d044) popup_ai3_data_window

0x3648,	// (0x00052107) grid_ai3_links_pane

0xe59f,	// (0x0005d05e) cell_ai3_links_pane_ParamLimits

0xe59f,	// (0x0005d05e) cell_ai3_links_pane

0x8bc7,	// (0x00057686) bg_popup_sub_pane_cp11

0x8bd4,	// (0x00057693) cell_ai3_links_pane_g1

0x3648,	// (0x00052107) bg_popup_sub_pane_cp12

0x8bf9,	// (0x000576b8) heading_ai3_data_pane

0x8c01,	// (0x000576c0) list_ai3_gene_pane

0x8c0d,	// (0x000576cc) popup_ai3_data_window_g1

0x8c15,	// (0x000576d4) heading_ai3_data_pane_g1

0x8c1d,	// (0x000576dc) heading_ai3_data_pane_t1

0x8c2b,	// (0x000576ea) list_double_ai3_gene_pane_ParamLimits

0x8c2b,	// (0x000576ea) list_double_ai3_gene_pane

0x8c38,	// (0x000576f7) list_single_ai3_gene_pane_ParamLimits

0x8c38,	// (0x000576f7) list_single_ai3_gene_pane

0x7a09,	// (0x000564c8) list_highlight_pane_cp7_ParamLimits

0x7a09,	// (0x000564c8) list_highlight_pane_cp7

0x8c45,	// (0x00057704) list_single_a13_gene_pane_t1_ParamLimits

0x8c45,	// (0x00057704) list_single_a13_gene_pane_t1

0x8c5c,	// (0x0005771b) list_single_ai3_gene_pane_g1

0x8c65,	// (0x00057724) list_single_ai3_gene_pane_g2

0x0001,

0xfcc7,	// (0x0005e786) list_single_ai3_gene_pane_g

0x8c6d,	// (0x0005772c) list_double_ai3_gene_pane_g1_ParamLimits

0x8c6d,	// (0x0005772c) list_double_ai3_gene_pane_g1

0x8c79,	// (0x00057738) list_double_ai3_gene_pane_t1_ParamLimits

0x8c79,	// (0x00057738) list_double_ai3_gene_pane_t1

0x8c95,	// (0x00057754) list_double_ai3_gene_pane_t2_ParamLimits

0x8c95,	// (0x00057754) list_double_ai3_gene_pane_t2

0x8cab,	// (0x0005776a) list_double_ai3_gene_pane_t3_ParamLimits

0x8cab,	// (0x0005776a) list_double_ai3_gene_pane_t3

0x0002,

0xfccc,	// (0x0005e78b) list_double_ai3_gene_pane_t_ParamLimits

0xfccc,	// (0x0005e78b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x34bf,	// (0x00051f7e) aid_size_min_col_2

0xe56f,	// (0x0005d02e) aid_size_min_msg_ParamLimits

0xe56f,	// (0x0005d02e) aid_size_min_msg

0xe337,	// (0x0005cdf6) fep_vkb_top_text_pane_g2_ParamLimits

0xe337,	// (0x0005cdf6) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x0005e5eb) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x0005e5eb) fep_vkb_top_text_pane_g

0x0158,	// (0x0004ec17) main_hc_apps_shell_pane

0x8cc8,	// (0x00057787) grid_hc_apps_pane_ParamLimits

0x8cc8,	// (0x00057787) grid_hc_apps_pane

0x8cd7,	// (0x00057796) list_hc_apps_pane

0x8cdf,	// (0x0005779e) scroll_pane_cp37_ParamLimits

0x8cdf,	// (0x0005779e) scroll_pane_cp37

0xe5b9,	// (0x0005d078) cell_hc_apps_pane_ParamLimits

0xe5b9,	// (0x0005d078) cell_hc_apps_pane

0xe677,	// (0x0005d136) cell_hc_apps_pane_g1_ParamLimits

0xe677,	// (0x0005d136) cell_hc_apps_pane_g1

0x8dca,	// (0x00057889) cell_hc_apps_pane_g2_ParamLimits

0x8dca,	// (0x00057889) cell_hc_apps_pane_g2

0x8de6,	// (0x000578a5) cell_hc_apps_pane_g3_ParamLimits

0x8de6,	// (0x000578a5) cell_hc_apps_pane_g3

0x0002,

0xfcd3,	// (0x0005e792) cell_hc_apps_pane_g_ParamLimits

0xfcd3,	// (0x0005e792) cell_hc_apps_pane_g

0xe6a4,	// (0x0005d163) cell_hc_apps_pane_t1_ParamLimits

0xe6a4,	// (0x0005d163) cell_hc_apps_pane_t1

0x39c5,	// (0x00052484) grid_highlight_pane_cp10_ParamLimits

0x39c5,	// (0x00052484) grid_highlight_pane_cp10

0xe6e2,	// (0x0005d1a1) list_single_hc_apps_pane_ParamLimits

0xe6e2,	// (0x0005d1a1) list_single_hc_apps_pane

0xe70f,	// (0x0005d1ce) list_single_hc_apps_pane_g1

0xd92c,	// (0x0005c3eb) list_single_hc_apps_pane_g2

0x0001,

0xfcda,	// (0x0005e799) list_single_hc_apps_pane_g

0xd945,	// (0x0005c404) list_single_hc_apps_pane_g2_copy1

0x35dc,	// (0x0005209b) list_single_hc_apps_pane_t1

0x373c,	// (0x000521fb) bg_set_opt_pane_cp_ParamLimits

0x03b9,	// (0x0004ee78) setting_slider_pane_t1_ParamLimits

0x03d2,	// (0x0004ee91) setting_slider_pane_t2_ParamLimits

0x03ec,	// (0x0004eeab) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0005e01d) setting_slider_pane_t_ParamLimits

0x0404,	// (0x0004eec3) slider_set_pane_ParamLimits

0x1085,	// (0x0004fb44) control_pane_g5_ParamLimits

0x1085,	// (0x0004fb44) control_pane_g5

0x6830,	// (0x000552ef) slider_set_pane_g1_ParamLimits

0x1ae6,	// (0x000505a5) slider_set_pane_g2_ParamLimits

0x1af2,	// (0x000505b1) slider_set_pane_g3_ParamLimits

0x1b06,	// (0x000505c5) slider_set_pane_g4_ParamLimits

0x1b1e,	// (0x000505dd) slider_set_pane_g5_ParamLimits

0x1af2,	// (0x000505b1) slider_set_pane_g6_ParamLimits

0x1b34,	// (0x000505f3) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0005e423) slider_set_pane_g_ParamLimits

0x4ac2,	// (0x00053581) navi_icon_text_pane_ParamLimits

0xd689,	// (0x0005c148) aid_fill_nsta_2_ParamLimits

0xd6c0,	// (0x0005c17f) aid_touch_tab_arrow_left_ParamLimits

0xd6d6,	// (0x0005c195) aid_touch_tab_arrow_right_ParamLimits

0xd771,	// (0x0005c230) clock_nsta_pane_ParamLimits

0x6326,	// (0x00054de5) navi_icon_pane_g1_ParamLimits

0x6332,	// (0x00054df1) navi_text_pane_t1_ParamLimits

0x75f3,	// (0x000560b2) navi_icon_text_pane_g1_ParamLimits

0x75ff,	// (0x000560be) navi_icon_text_pane_t1_ParamLimits

0xe70f,	// (0x0005d1ce) list_single_hc_apps_pane_g1_ParamLimits

0xd92c,	// (0x0005c3eb) list_single_hc_apps_pane_g2_ParamLimits

0xfcda,	// (0x0005e799) list_single_hc_apps_pane_g_ParamLimits

0xd945,	// (0x0005c404) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x35dc,	// (0x0005209b) list_single_hc_apps_pane_t1_ParamLimits

0xb7ea,	// (0x0005a2a9) popup_toolbar2_fixed_window_ParamLimits

0xb7ea,	// (0x0005a2a9) popup_toolbar2_fixed_window

0xc6ce,	// (0x0005b18d) popup_toolbar2_float_window

0x3648,	// (0x00052107) bg_popup_sub_pane_cp27

0x8ebd,	// (0x0005797c) grid_toolbar2_float_pane

0x3648,	// (0x00052107) bg_popup_sub_pane_cp26

0x8ebd,	// (0x0005797c) grid_toolbar2_fixed_pane

0xe728,	// (0x0005d1e7) cell_toolbar2_fixed_pane_ParamLimits

0xe728,	// (0x0005d1e7) cell_toolbar2_fixed_pane

0xe742,	// (0x0005d201) cell_toolbar2_fixed_pane_g1

0x8ede,	// (0x0005799d) toolbar2_fixed_button_pane

0x54a7,	// (0x00053f66) toolbar2_fixed_button_pane_g1

0x54b7,	// (0x00053f76) toolbar2_fixed_button_pane_g2

0x54af,	// (0x00053f6e) toolbar2_fixed_button_pane_g3

0x54c7,	// (0x00053f86) toolbar2_fixed_button_pane_g4

0x54bf,	// (0x00053f7e) toolbar2_fixed_button_pane_g5

0x54cf,	// (0x00053f8e) toolbar2_fixed_button_pane_g6

0x54d7,	// (0x00053f96) toolbar2_fixed_button_pane_g7

0x54e7,	// (0x00053fa6) toolbar2_fixed_button_pane_g8

0x54df,	// (0x00053f9e) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0005e325) toolbar2_fixed_button_pane_g

0x8ee6,	// (0x000579a5) cell_toolbar2_float_pane_ParamLimits

0x8ee6,	// (0x000579a5) cell_toolbar2_float_pane

0x8ef7,	// (0x000579b6) cell_toolbar2_float_pane_g1

0x8ede,	// (0x0005799d) toolbar2_fixed_button_pane_cp

0xe1e9,	// (0x0005cca8) fep_vkb_accented_list_pane_ParamLimits

0xe1e9,	// (0x0005cca8) fep_vkb_accented_list_pane

0x1ea9,	// (0x00050968) bg_popup_fep_shadow_pane_g9

0x4c42,	// (0x00053701) bg_popup_fep_shadow_pane_cp3

0x40ff,	// (0x00052bbe) list_accented_list_pane

0x8f00,	// (0x000579bf) list_single_accented_list_pane_ParamLimits

0x8f00,	// (0x000579bf) list_single_accented_list_pane

0x4c42,	// (0x00053701) list_highlight_pane_cp10

0x8f11,	// (0x000579d0) list_single_accented_list_pane_t1

0xc5f8,	// (0x0005b0b7) popup_slider_window_ParamLimits

0xc5f8,	// (0x0005b0b7) popup_slider_window

0x8b4d,	// (0x0005760c) aid_indentation_list_msg

0xe83b,	// (0x0005d2fa) bg_popup_window_pane_cp19

0x9035,	// (0x00057af4) popup_slider_window_g1

0x9051,	// (0x00057b10) popup_slider_window_g2

0x906d,	// (0x00057b2c) popup_slider_window_g3

0x0005,

0xfcdf,	// (0x0005e79e) popup_slider_window_g

0x90c9,	// (0x00057b88) popup_slider_window_t1

0x913d,	// (0x00057bfc) small_volume_slider_vertical_pane

0x7a44,	// (0x00056503) small_volume_slider_vertical_pane_g1

0x7a44,	// (0x00056503) small_volume_slider_vertical_pane_g2

0x9159,	// (0x00057c18) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf1,	// (0x0005e7b0) small_volume_slider_vertical_pane_g

0xb758,	// (0x0005a217) area_side_right_pane_ParamLimits

0xb758,	// (0x0005a217) area_side_right_pane

0xc9ac,	// (0x0005b46b) aid_size_side_button_ParamLimits

0xc9ac,	// (0x0005b46b) aid_size_side_button

0xc9c5,	// (0x0005b484) grid_sctrl_middle_pane_ParamLimits

0xc9c5,	// (0x0005b484) grid_sctrl_middle_pane

0x20c6,	// (0x00050b85) sctrl_sk_bottom_pane

0x20d7,	// (0x00050b96) sctrl_sk_top_pane

0x20e9,	// (0x00050ba8) aid_touch_sctrl_top

0x20f6,	// (0x00050bb5) bg_sctrl_sk_pane_ParamLimits

0x20f6,	// (0x00050bb5) bg_sctrl_sk_pane

0x2104,	// (0x00050bc3) sctrl_sk_top_pane_g1

0x2111,	// (0x00050bd0) sctrl_sk_top_pane_t1

0x20e9,	// (0x00050ba8) aid_touch_sctrl_bottom

0x20f6,	// (0x00050bb5) bg_sctrl_sk_pane_cp_ParamLimits

0x20f6,	// (0x00050bb5) bg_sctrl_sk_pane_cp

0x212c,	// (0x00050beb) sctrl_sk_bottom_pane_g1

0x2111,	// (0x00050bd0) sctrl_sk_bottom_pane_t1

0xc9df,	// (0x0005b49e) cell_sctrl_middle_pane_ParamLimits

0xc9df,	// (0x0005b49e) cell_sctrl_middle_pane

0xc9f0,	// (0x0005b4af) aid_touch_sctrl_middle_ParamLimits

0xc9f0,	// (0x0005b4af) aid_touch_sctrl_middle

0xc9fd,	// (0x0005b4bc) bg_sctrl_middle_pane_ParamLimits

0xc9fd,	// (0x0005b4bc) bg_sctrl_middle_pane

0x2799,	// (0x00051258) cell_sctrl_middle_pane_g1_ParamLimits

0x2799,	// (0x00051258) cell_sctrl_middle_pane_g1

0xca0b,	// (0x0005b4ca) cell_sctrl_middle_pane_g2_ParamLimits

0xca0b,	// (0x0005b4ca) cell_sctrl_middle_pane_g2

0x0001,

0xfcfd,	// (0x0005e7bc) cell_sctrl_middle_pane_g_ParamLimits

0xfcfd,	// (0x0005e7bc) cell_sctrl_middle_pane_g

0x54a7,	// (0x00053f66) bg_sctrl_middle_pane_g1

0x54af,	// (0x00053f6e) bg_sctrl_middle_pane_g2

0x54b7,	// (0x00053f76) bg_sctrl_middle_pane_g3

0x54bf,	// (0x00053f7e) bg_sctrl_middle_pane_g4

0x54c7,	// (0x00053f86) bg_sctrl_middle_pane_g5

0x54cf,	// (0x00053f8e) bg_sctrl_middle_pane_g6

0x54d7,	// (0x00053f96) bg_sctrl_middle_pane_g7

0x54df,	// (0x00053f9e) bg_sctrl_middle_pane_g8

0x0007,

0xfd02,	// (0x0005e7c1) bg_sctrl_middle_pane_g

0x54e7,	// (0x00053fa6) bg_sctrl_middle_pane_g8_copy1

0x54a7,	// (0x00053f66) bg_sctrl_sk_pane_g1

0x54b7,	// (0x00053f76) bg_sctrl_sk_pane_g2

0x54af,	// (0x00053f6e) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0005e325) bg_sctrl_sk_pane_g

0x3eda,	// (0x00052999) aid_size_touch_scroll_bar

0x54c7,	// (0x00053f86) bg_sctrl_sk_pane_g4

0x54bf,	// (0x00053f7e) bg_sctrl_sk_pane_g5

0x54cf,	// (0x00053f8e) bg_sctrl_sk_pane_g6

0x54d7,	// (0x00053f96) bg_sctrl_sk_pane_g7

0x54e7,	// (0x00053fa6) bg_sctrl_sk_pane_g8

0x54df,	// (0x00053f9e) bg_sctrl_sk_pane_g9

0x124d,	// (0x0004fd0c) popup_fep_china_hwr2_fs_candidate_window

0xc112,	// (0x0005abd1) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc112,	// (0x0005abd1) popup_fep_china_hwr2_fs_control_window

0x1ec9,	// (0x00050988) sctrl_sk_top_pane_g2

0x0001,

0xfcf8,	// (0x0005e7b7) sctrl_sk_top_pane_g

0xe8f3,	// (0x0005d3b2) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe8f3,	// (0x0005d3b2) aid_fep_china_hwr2_fs_cell

0xe907,	// (0x0005d3c6) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe907,	// (0x0005d3c6) bg_popup_fep_shadow_pane_cp4

0xe91e,	// (0x0005d3dd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe91e,	// (0x0005d3dd) bg_popup_fep_shadow_pane_cp5

0xe930,	// (0x0005d3ef) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe930,	// (0x0005d3ef) popup_fep_china_hwr2_fs_control_bar_grid

0xe944,	// (0x0005d403) popup_fep_china_hwr2_fs_control_funtion_grid

0x91b5,	// (0x00057c74) aid_fep_china_hwr2_fs_candi_cell

0x3648,	// (0x00052107) bg_popup_fep_shadow_pane_cp6

0x91bf,	// (0x00057c7e) popup_fep_china_hwr2_fs_candidate_grid

0xe94c,	// (0x0005d40b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe94c,	// (0x0005d40b) cell_fep_china_hwr2_fs_funtion_grid

0x7a44,	// (0x00056503) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x91e1,	// (0x00057ca0) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x91e1,	// (0x00057ca0) cell_fep_china_hwr2_fs_funtion_grid_g1

0x91ef,	// (0x00057cae) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x91ef,	// (0x00057cae) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd13,	// (0x0005e7d2) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd13,	// (0x0005e7d2) cell_fep_china_hwr2_fs_funtion_grid_g

0xe964,	// (0x0005d423) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe964,	// (0x0005d423) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe979,	// (0x0005d438) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe979,	// (0x0005d438) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd18,	// (0x0005e7d7) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd18,	// (0x0005e7d7) cell_fep_china_hwr2_fs_funtion_grid_t

0x9236,	// (0x00057cf5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x923e,	// (0x00057cfd) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9246,	// (0x00057d05) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1d,	// (0x0005e7dc) popup_fep_china_hwr2_fs_control_bar_grid_g

0x924e,	// (0x00057d0d) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x924e,	// (0x00057d0d) cell_fep_china_hwr2_fs_candidate_grid

0x9267,	// (0x00057d26) popup_fep_china_hwr2_fs_candidate_grid_g20

0x926f,	// (0x00057d2e) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7a44,	// (0x00056503) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7a44,	// (0x00056503) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x0005e5f0) cell_fep_china_hwr2_fs_candidate_grid_g

0x9277,	// (0x00057d36) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5091,	// (0x00053b50) clock_nsta_pane_cp_24_ParamLimits

0x5091,	// (0x00053b50) clock_nsta_pane_cp_24

0x511b,	// (0x00053bda) indicator_nsta_pane_cp_24_ParamLimits

0x511b,	// (0x00053bda) indicator_nsta_pane_cp_24

0x61a2,	// (0x00054c61) heading_pane_g1

0x0001,

0xf8cb,	// (0x0005e38a) heading_pane_g

0x6b90,	// (0x0005564f) grid_sct_catagory_button_pane

0x6bc0,	// (0x0005567f) scroll_pane_cp5_ParamLimits

0x7641,	// (0x00056100) button_value_adjust_pane_cp5_ParamLimits

0x7641,	// (0x00056100) button_value_adjust_pane_cp5

0x7720,	// (0x000561df) form2_midp_time_pane_ParamLimits

0x9285,	// (0x00057d44) cell_sct_catagory_button_pane_ParamLimits

0x9285,	// (0x00057d44) cell_sct_catagory_button_pane

0x7a09,	// (0x000564c8) bg_button_pane_cp01_ParamLimits

0x7a09,	// (0x000564c8) bg_button_pane_cp01

0x7a44,	// (0x00056503) cell_sct_catagory_button_pane_g1

0xc671,	// (0x0005b130) popup_tb_extension_window

0xe995,	// (0x0005d454) aid_size_cell_ext_ParamLimits

0xe995,	// (0x0005d454) aid_size_cell_ext

0x3d1c,	// (0x000527db) bg_tb_trans_pane_cp1_ParamLimits

0x3d1c,	// (0x000527db) bg_tb_trans_pane_cp1

0xe9bb,	// (0x0005d47a) grid_tb_ext_pane_ParamLimits

0xe9bb,	// (0x0005d47a) grid_tb_ext_pane

0xe9f6,	// (0x0005d4b5) cell_tb_ext_pane_ParamLimits

0xe9f6,	// (0x0005d4b5) cell_tb_ext_pane

0xea1e,	// (0x0005d4dd) cell_tb_ext_pane_g1_ParamLimits

0xea1e,	// (0x0005d4dd) cell_tb_ext_pane_g1

0x9319,	// (0x00057dd8) cell_tb_ext_pane_t1

0x39c5,	// (0x00052484) list_highlight_pane_cp11_ParamLimits

0x39c5,	// (0x00052484) list_highlight_pane_cp11

0xb7ff,	// (0x0005a2be) popup_uni_indicator_window_ParamLimits

0xb7ff,	// (0x0005a2be) popup_uni_indicator_window

0x3fb7,	// (0x00052a76) bg_popup_sub_pane_cp14

0x9334,	// (0x00057df3) list_uniindi_pane

0x9340,	// (0x00057dff) uniindi_top_pane

0x39c5,	// (0x00052484) bg_uniindi_top_pane

0x935f,	// (0x00057e1e) uniindi_top_pane_g1

0x9375,	// (0x00057e34) uniindi_top_pane_g2

0x0003,

0xfd24,	// (0x0005e7e3) uniindi_top_pane_g

0x939f,	// (0x00057e5e) uniindi_top_pane_t1

0x93c9,	// (0x00057e88) list_single_uniindi_pane_ParamLimits

0x93c9,	// (0x00057e88) list_single_uniindi_pane

0x7a44,	// (0x00056503) bg_uniindi_top_pane_g1

0x93dc,	// (0x00057e9b) list_single_uniindi_pane_g1

0x93ef,	// (0x00057eae) list_single_uniindi_pane_t1

0x0158,	// (0x0004ec17) control_bg_pane

0x9414,	// (0x00057ed3) bg_sctrl_sk_pane_cp1

0x941d,	// (0x00057edc) bg_sctrl_sk_pane_cp2

0x9426,	// (0x00057ee5) control_bg_pane_g1

0x942f,	// (0x00057eee) control_bg_pane_g2

0x0001,

0xfd2d,	// (0x0005e7ec) control_bg_pane_g

0x749c,	// (0x00055f5b) cell_indicator_nsta_pane_g1_ParamLimits

0xe076,	// (0x0005cb35) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x0005e554) cell_indicator_nsta_pane_g_ParamLimits

0x329c,	// (0x00051d5b) form2_midp_time_pane_t1_ParamLimits

0x1c64,	// (0x00050723) main_idle_act4_pane_ParamLimits

0x1c64,	// (0x00050723) main_idle_act4_pane

0xc671,	// (0x0005b130) popup_tb_extension_window_ParamLimits

0xe9dd,	// (0x0005d49c) tb_ext_find_pane_ParamLimits

0xe9dd,	// (0x0005d49c) tb_ext_find_pane

0x9438,	// (0x00057ef7) ai_gene_pane_1_cp1

0x4d89,	// (0x00053848) ai_gene_pane_2_cp1

0x9440,	// (0x00057eff) list_single_idle_plugin_calendar_pane

0x9449,	// (0x00057f08) list_single_idle_plugin_notification_pane

0x9452,	// (0x00057f11) list_single_idle_plugin_player_pane

0xea3b,	// (0x0005d4fa) list_single_idle_plugin_shortcut_pane_ParamLimits

0xea3b,	// (0x0005d4fa) list_single_idle_plugin_shortcut_pane

0xea63,	// (0x0005d522) main_idle_act4_pane_t1

0xea79,	// (0x0005d538) main_idle_act4_pane_t2

0x0001,

0xfd32,	// (0x0005e7f1) main_idle_act4_pane_t

0xea8f,	// (0x0005d54e) middle_sk_idle_act4_pane_ParamLimits

0xea8f,	// (0x0005d54e) middle_sk_idle_act4_pane

0xeaab,	// (0x0005d56a) popup_clock_digital_analogue_window_cp2

0xead3,	// (0x0005d592) shortcut_wheel_idle_act4_pane_ParamLimits

0xead3,	// (0x0005d592) shortcut_wheel_idle_act4_pane

0x7a44,	// (0x00056503) shortcut_wheel_idle_act4_pane_g1

0x7a44,	// (0x00056503) shortcut_wheel_idle_act4_pane_g2

0x7a44,	// (0x00056503) shortcut_wheel_idle_act4_pane_g3

0x7a44,	// (0x00056503) shortcut_wheel_idle_act4_pane_g4

0x7a44,	// (0x00056503) shortcut_wheel_idle_act4_pane_g5

0x94e5,	// (0x00057fa4) shortcut_wheel_idle_act4_pane_g6

0x94ed,	// (0x00057fac) shortcut_wheel_idle_act4_pane_g7

0x94f5,	// (0x00057fb4) shortcut_wheel_idle_act4_pane_g8

0x94fd,	// (0x00057fbc) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd37,	// (0x0005e7f6) shortcut_wheel_idle_act4_pane_g

0xe2fb,	// (0x0005cdba) middle_sk_idle_act4_pane_g1_ParamLimits

0xe2fb,	// (0x0005cdba) middle_sk_idle_act4_pane_g1

0xeb50,	// (0x0005d60f) middle_sk_idle_act4_pane_g2_ParamLimits

0xeb50,	// (0x0005d60f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5a,	// (0x0005e819) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5a,	// (0x0005e819) middle_sk_idle_act4_pane_g

0xeb68,	// (0x0005d627) middle_sk_idle_act4_pane_t1_ParamLimits

0xeb68,	// (0x0005d627) middle_sk_idle_act4_pane_t1

0xeb97,	// (0x0005d656) grid_ai_shortcut_pane_ParamLimits

0xeb97,	// (0x0005d656) grid_ai_shortcut_pane

0xebb4,	// (0x0005d673) list_highlight_pane_cp16_ParamLimits

0xebb4,	// (0x0005d673) list_highlight_pane_cp16

0xebc1,	// (0x0005d680) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xebc1,	// (0x0005d680) list_single_idle_plugin_shortcut_pane_g1

0xebcd,	// (0x0005d68c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xebcd,	// (0x0005d68c) list_single_idle_plugin_shortcut_pane_g2

0xebe9,	// (0x0005d6a8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xebe9,	// (0x0005d6a8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5f,	// (0x0005e81e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5f,	// (0x0005e81e) list_single_idle_plugin_shortcut_pane_g

0xebfe,	// (0x0005d6bd) cell_ai_shortcut_pane_ParamLimits

0xebfe,	// (0x0005d6bd) cell_ai_shortcut_pane

0xec14,	// (0x0005d6d3) cell_ai_shortcut_pane_g1_ParamLimits

0xec14,	// (0x0005d6d3) cell_ai_shortcut_pane_g1

0x9438,	// (0x00057ef7) ai_gene_pane_1_cp2

0x962d,	// (0x000580ec) ai_gene_pane_2_cp2

0x9635,	// (0x000580f4) list_highlight_pane_cp15

0x963e,	// (0x000580fd) list_single_idle_plugin_calendar_pane_g1

0x9635,	// (0x000580f4) list_highlight_pane_cp17

0x9646,	// (0x00058105) list_single_idle_plugin_calendar_pane_g1_copy1

0x964e,	// (0x0005810d) list_single_idle_plugin_player_pane_g1

0x6de9,	// (0x000558a8) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd66,	// (0x0005e825) list_single_idle_plugin_player_pane_g

0x9656,	// (0x00058115) list_single_idle_plugin_player_pane_t1

0x9664,	// (0x00058123) list_single_idle_plugin_player_pane_t2

0x9672,	// (0x00058131) list_single_idle_plugin_player_pane_t3

0x9680,	// (0x0005813f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6b,	// (0x0005e82a) list_single_idle_plugin_player_pane_t

0x968e,	// (0x0005814d) wait_bar_pane_cp15

0x9696,	// (0x00058155) grid_ai_notification_pane

0x6de9,	// (0x000558a8) list_single_idle_plugin_notification_pane_g1

0xec36,	// (0x0005d6f5) cell_ai_notification_pane_ParamLimits

0xec36,	// (0x0005d6f5) cell_ai_notification_pane

0x96ac,	// (0x0005816b) cell_ai_notification_pane_g1

0x96b4,	// (0x00058173) cell_ai_notification_pane_t1

0xec43,	// (0x0005d702) tb_ext_find_button_pane

0xec4b,	// (0x0005d70a) tb_ext_find_pane_g1

0xec53,	// (0x0005d712) tb_ext_find_pane_t1

0x462f,	// (0x000530ee) tb_ext_find_button_pane_g1

0x96e0,	// (0x0005819f) tb_ext_find_button_pane_g2

0x0001,

0xfd74,	// (0x0005e833) tb_ext_find_button_pane_g

0xea63,	// (0x0005d522) main_idle_act4_pane_t1_ParamLimits

0xea79,	// (0x0005d538) main_idle_act4_pane_t2_ParamLimits

0xfd32,	// (0x0005e7f1) main_idle_act4_pane_t_ParamLimits

0xeaab,	// (0x0005d56a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xeac3,	// (0x0005d582) sat_plugin_idle_act4_pane_ParamLimits

0xeac3,	// (0x0005d582) sat_plugin_idle_act4_pane

0xec61,	// (0x0005d720) sat_plugin_idle_act4_pane_t1_ParamLimits

0xec61,	// (0x0005d720) sat_plugin_idle_act4_pane_t1

0xec79,	// (0x0005d738) sat_plugin_idle_act4_pane_t2_ParamLimits

0xec79,	// (0x0005d738) sat_plugin_idle_act4_pane_t2

0xec91,	// (0x0005d750) sat_plugin_idle_act4_pane_t3_ParamLimits

0xec91,	// (0x0005d750) sat_plugin_idle_act4_pane_t3

0xeca9,	// (0x0005d768) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeca9,	// (0x0005d768) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd79,	// (0x0005e838) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd79,	// (0x0005e838) sat_plugin_idle_act4_pane_t

0x021d,	// (0x0004ecdc) popup_battery_window_ParamLimits

0x021d,	// (0x0004ecdc) popup_battery_window

0x39c5,	// (0x00052484) bg_popup_sub_pane_cp25_ParamLimits

0x39c5,	// (0x00052484) bg_popup_sub_pane_cp25

0x9735,	// (0x000581f4) popup_battery_window_g1_ParamLimits

0x9735,	// (0x000581f4) popup_battery_window_g1

0x9741,	// (0x00058200) popup_battery_window_t1_ParamLimits

0x9741,	// (0x00058200) popup_battery_window_t1

0x9753,	// (0x00058212) popup_battery_window_t2_ParamLimits

0x9753,	// (0x00058212) popup_battery_window_t2

0x0001,

0xfd82,	// (0x0005e841) popup_battery_window_t_ParamLimits

0xfd82,	// (0x0005e841) popup_battery_window_t

0xd4ec,	// (0x0005bfab) midp_canvas_pane_ParamLimits

0xd549,	// (0x0005c008) midp_keypad_pane_ParamLimits

0xd549,	// (0x0005c008) midp_keypad_pane

0x4f91,	// (0x00053a50) main_midp_pane_ParamLimits

0x7505,	// (0x00055fc4) signal_pane_g2_cp_ParamLimits

0xecc1,	// (0x0005d780) aid_size_cell_midp_keypad_ParamLimits

0xecc1,	// (0x0005d780) aid_size_cell_midp_keypad

0xecec,	// (0x0005d7ab) midp_keyp_game_grid_pane_ParamLimits

0xecec,	// (0x0005d7ab) midp_keyp_game_grid_pane

0xed13,	// (0x0005d7d2) midp_keyp_rocker_pane_ParamLimits

0xed13,	// (0x0005d7d2) midp_keyp_rocker_pane

0xed64,	// (0x0005d823) midp_keyp_sk_left_pane_ParamLimits

0xed64,	// (0x0005d823) midp_keyp_sk_left_pane

0xedb8,	// (0x0005d877) midp_keyp_sk_right_pane_ParamLimits

0xedb8,	// (0x0005d877) midp_keyp_sk_right_pane

0x3648,	// (0x00052107) bg_button_pane_cp03

0xee0c,	// (0x0005d8cb) midp_keyp_sk_left_pane_g1

0x3648,	// (0x00052107) bg_button_pane_cp04

0xee0c,	// (0x0005d8cb) midp_keyp_sk_right_pane_g1

0x7a44,	// (0x00056503) midp_keyp_rocker_pane_g1

0xee15,	// (0x0005d8d4) keyp_game_cell_pane_ParamLimits

0xee15,	// (0x0005d8d4) keyp_game_cell_pane

0x3648,	// (0x00052107) bg_button_pane_cp02

0xee39,	// (0x0005d8f8) keyp_game_cell_pane_g1

0xb79a,	// (0x0005a259) popup_fep_vkb2_window_ParamLimits

0xb79a,	// (0x0005a259) popup_fep_vkb2_window

0xca17,	// (0x0005b4d6) aid_size_cell_vkb2_ParamLimits

0xca17,	// (0x0005b4d6) aid_size_cell_vkb2

0xca4d,	// (0x0005b50c) popup_fep_vkb2_window_g1_ParamLimits

0xca4d,	// (0x0005b50c) popup_fep_vkb2_window_g1

0xca9d,	// (0x0005b55c) vkb2_area_bottom_pane_ParamLimits

0xca9d,	// (0x0005b55c) vkb2_area_bottom_pane

0xcaf1,	// (0x0005b5b0) vkb2_area_keypad_pane_ParamLimits

0xcaf1,	// (0x0005b5b0) vkb2_area_keypad_pane

0xcb39,	// (0x0005b5f8) vkb2_area_top_pane_ParamLimits

0xcb39,	// (0x0005b5f8) vkb2_area_top_pane

0xcbbf,	// (0x0005b67e) vkb2_top_entry_pane_ParamLimits

0xcbbf,	// (0x0005b67e) vkb2_top_entry_pane

0xcbec,	// (0x0005b6ab) vkb2_top_grid_left_pane_ParamLimits

0xcbec,	// (0x0005b6ab) vkb2_top_grid_left_pane

0xcc0c,	// (0x0005b6cb) vkb2_top_grid_right_pane_ParamLimits

0xcc0c,	// (0x0005b6cb) vkb2_top_grid_right_pane

0x2398,	// (0x00050e57) vkb2_cell_keypad_pane_ParamLimits

0x2398,	// (0x00050e57) vkb2_cell_keypad_pane

0xcc52,	// (0x0005b711) vkb2_area_bottom_grid_pane_ParamLimits

0xcc52,	// (0x0005b711) vkb2_area_bottom_grid_pane

0xcc7c,	// (0x0005b73b) vkb2_area_bottom_pane_g1_ParamLimits

0xcc7c,	// (0x0005b73b) vkb2_area_bottom_pane_g1

0xcca2,	// (0x0005b761) vkb2_area_bottom_pane_g2_ParamLimits

0xcca2,	// (0x0005b761) vkb2_area_bottom_pane_g2

0xccd3,	// (0x0005b792) vkb2_area_bottom_pane_g3_ParamLimits

0xccd3,	// (0x0005b792) vkb2_area_bottom_pane_g3

0x0002,

0xfd87,	// (0x0005e846) vkb2_area_bottom_pane_g_ParamLimits

0xfd87,	// (0x0005e846) vkb2_area_bottom_pane_g

0x2542,	// (0x00051001) vkb2_top_cell_left_pane_ParamLimits

0x2542,	// (0x00051001) vkb2_top_cell_left_pane

0xee42,	// (0x0005d901) vkb2_top_entry_pane_g1_ParamLimits

0xee42,	// (0x0005d901) vkb2_top_entry_pane_g1

0xee50,	// (0x0005d90f) vkb2_top_entry_pane_t1_ParamLimits

0xee50,	// (0x0005d90f) vkb2_top_entry_pane_t1

0x9925,	// (0x000583e4) vkb2_top_entry_pane_t2_ParamLimits

0x9925,	// (0x000583e4) vkb2_top_entry_pane_t2

0x9957,	// (0x00058416) vkb2_top_entry_pane_t3_ParamLimits

0x9957,	// (0x00058416) vkb2_top_entry_pane_t3

0x0002,

0xfd8e,	// (0x0005e84d) vkb2_top_entry_pane_t_ParamLimits

0xfd8e,	// (0x0005e84d) vkb2_top_entry_pane_t

0xcd3d,	// (0x0005b7fc) vkb2_top_grid_right_pane_g1_ParamLimits

0xcd3d,	// (0x0005b7fc) vkb2_top_grid_right_pane_g1

0x25a5,	// (0x00051064) vkb2_top_grid_right_pane_g2_ParamLimits

0x25a5,	// (0x00051064) vkb2_top_grid_right_pane_g2

0x25bd,	// (0x0005107c) vkb2_top_grid_right_pane_g3_ParamLimits

0x25bd,	// (0x0005107c) vkb2_top_grid_right_pane_g3

0xcd53,	// (0x0005b812) vkb2_top_grid_right_pane_g4_ParamLimits

0xcd53,	// (0x0005b812) vkb2_top_grid_right_pane_g4

0x0003,

0xfd95,	// (0x0005e854) vkb2_top_grid_right_pane_g_ParamLimits

0xfd95,	// (0x0005e854) vkb2_top_grid_right_pane_g

0x25eb,	// (0x000510aa) vkb2_top_cell_left_pane_g1

0x2602,	// (0x000510c1) vkb2_cell_keypad_pane_g1_ParamLimits

0x2602,	// (0x000510c1) vkb2_cell_keypad_pane_g1

0x997b,	// (0x0005843a) vkb2_cell_keypad_pane_t1_ParamLimits

0x997b,	// (0x0005843a) vkb2_cell_keypad_pane_t1

0x2610,	// (0x000510cf) vkb2_cell_bottom_grid_pane_ParamLimits

0x2610,	// (0x000510cf) vkb2_cell_bottom_grid_pane

0x2649,	// (0x00051108) vkb2_cell_bottom_grid_pane_g1

0xeaf4,	// (0x0005d5b3) aid_call2_pane_cp02

0xeafc,	// (0x0005d5bb) aid_call_pane_cp02

0xeb04,	// (0x0005d5c3) clock_digital_number_pane_cp10

0xeb0c,	// (0x0005d5cb) clock_digital_number_pane_cp11

0xeb14,	// (0x0005d5d3) clock_digital_number_pane_cp12

0xeb1c,	// (0x0005d5db) clock_digital_number_pane_cp13

0xeb24,	// (0x0005d5e3) clock_digital_separator_pane_cp10

0x462f,	// (0x000530ee) popup_clock_digital_analogue_window_cp2_g1

0x462f,	// (0x000530ee) popup_clock_digital_analogue_window_cp2_g2

0xeb2c,	// (0x0005d5eb) popup_clock_digital_analogue_window_cp2_g3

0x462f,	// (0x000530ee) popup_clock_digital_analogue_window_cp2_g4

0xeb2c,	// (0x0005d5eb) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4a,	// (0x0005e809) popup_clock_digital_analogue_window_cp2_g

0xeb34,	// (0x0005d5f3) popup_clock_digital_analogue_window_cp2_t1

0xeb42,	// (0x0005d601) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd55,	// (0x0005e814) popup_clock_digital_analogue_window_cp2_t

0x7a44,	// (0x00056503) clock_digital_number_pane_cp10_g1

0x7a44,	// (0x00056503) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x0005e5f0) clock_digital_number_pane_cp10_g

0x7a44,	// (0x00056503) clock_digital_separator_pane_cp10_g1

0x7a44,	// (0x00056503) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x0005e5f0) clock_digital_separator_pane_cp10_g

0x9381,	// (0x00057e40) uniindi_top_pane_g3

0x9392,	// (0x00057e51) uniindi_top_pane_g4

0x2423,	// (0x00050ee2) vkb2_row_keypad_pane_ParamLimits

0x2423,	// (0x00050ee2) vkb2_row_keypad_pane

0x2665,	// (0x00051124) vkb2_cell_t_keypad_pane_ParamLimits

0x2665,	// (0x00051124) vkb2_cell_t_keypad_pane

0x2675,	// (0x00051134) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2675,	// (0x00051134) vkb2_cell_t_keypad_pane_cp08

0x2688,	// (0x00051147) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2688,	// (0x00051147) vkb2_cell_t_keypad_pane_cp09

0x269c,	// (0x0005115b) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x269c,	// (0x0005115b) vkb2_cell_t_keypad_pane_cp01

0x26ad,	// (0x0005116c) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x26ad,	// (0x0005116c) vkb2_cell_t_keypad_pane_cp02

0x26be,	// (0x0005117d) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x26be,	// (0x0005117d) vkb2_cell_t_keypad_pane_cp03

0x26cf,	// (0x0005118e) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x26cf,	// (0x0005118e) vkb2_cell_t_keypad_pane_cp04

0x26e0,	// (0x0005119f) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x26e0,	// (0x0005119f) vkb2_cell_t_keypad_pane_cp05

0x26f1,	// (0x000511b0) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x26f1,	// (0x000511b0) vkb2_cell_t_keypad_pane_cp06

0x2702,	// (0x000511c1) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2702,	// (0x000511c1) vkb2_cell_t_keypad_pane_cp07

0x2713,	// (0x000511d2) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2713,	// (0x000511d2) vkb2_cell_t_keypad_pane_cp10

0x1ec9,	// (0x00050988) vkb2_cell_t_keypad_pane_g1

0x9992,	// (0x00058451) vkb2_cell_t_keypad_pane_t1

0x0158,	// (0x0004ec17) popup_grid_graphic2_window

0xee89,	// (0x0005d948) aid_size_cell_graphic2_ParamLimits

0xee89,	// (0x0005d948) aid_size_cell_graphic2

0xeec7,	// (0x0005d986) bg_popup_window_pane_cp21_ParamLimits

0xeec7,	// (0x0005d986) bg_popup_window_pane_cp21

0xeed5,	// (0x0005d994) graphic2_pages_pane_ParamLimits

0xeed5,	// (0x0005d994) graphic2_pages_pane

0xef2b,	// (0x0005d9ea) grid_graphic2_control_pane_ParamLimits

0xef2b,	// (0x0005d9ea) grid_graphic2_control_pane

0xef73,	// (0x0005da32) grid_graphic2_pane_ParamLimits

0xef73,	// (0x0005da32) grid_graphic2_pane

0xeffa,	// (0x0005dab9) cell_graphic2_pane

0x0158,	// (0x0004ec17) main_comp_mode_pane

0x8c01,	// (0x000576c0) list_ai3_gene_pane_ParamLimits

0xe83b,	// (0x0005d2fa) bg_popup_window_pane_cp19_ParamLimits

0x8fd7,	// (0x00057a96) bg_touch_area_indi_pane_ParamLimits

0x8fd7,	// (0x00057a96) bg_touch_area_indi_pane

0x8fed,	// (0x00057aac) bg_touch_area_indi_pane_cp01_ParamLimits

0x8fed,	// (0x00057aac) bg_touch_area_indi_pane_cp01

0x9003,	// (0x00057ac2) bg_touch_area_indi_pane_cp02_ParamLimits

0x9003,	// (0x00057ac2) bg_touch_area_indi_pane_cp02

0x901b,	// (0x00057ada) bg_touch_area_indi_pane_cp03_ParamLimits

0x901b,	// (0x00057ada) bg_touch_area_indi_pane_cp03

0x9035,	// (0x00057af4) popup_slider_window_g1_ParamLimits

0x9051,	// (0x00057b10) popup_slider_window_g2_ParamLimits

0x906d,	// (0x00057b2c) popup_slider_window_g3_ParamLimits

0xfcdf,	// (0x0005e79e) popup_slider_window_g_ParamLimits

0x90c9,	// (0x00057b88) popup_slider_window_t1_ParamLimits

0x913d,	// (0x00057bfc) small_volume_slider_vertical_pane_ParamLimits

0xeffa,	// (0x0005dab9) cell_graphic2_pane_ParamLimits

0xf055,	// (0x0005db14) bg_button_pane_cp10_ParamLimits

0xf055,	// (0x0005db14) bg_button_pane_cp10

0xf068,	// (0x0005db27) bg_button_pane_cp11_ParamLimits

0xf068,	// (0x0005db27) bg_button_pane_cp11

0xf07b,	// (0x0005db3a) graphic2_pages_pane_g1_ParamLimits

0xf07b,	// (0x0005db3a) graphic2_pages_pane_g1

0xf096,	// (0x0005db55) graphic2_pages_pane_g2_ParamLimits

0xf096,	// (0x0005db55) graphic2_pages_pane_g2

0x0001,

0xfda3,	// (0x0005e862) graphic2_pages_pane_g_ParamLimits

0xfda3,	// (0x0005e862) graphic2_pages_pane_g

0xf0ae,	// (0x0005db6d) graphic2_pages_pane_t1_ParamLimits

0xf0ae,	// (0x0005db6d) graphic2_pages_pane_t1

0xf0c6,	// (0x0005db85) cell_graphic2_control_pane_ParamLimits

0xf0c6,	// (0x0005db85) cell_graphic2_control_pane

0xf0f8,	// (0x0005dbb7) cell_graphic2_pane_g1_ParamLimits

0xf0f8,	// (0x0005dbb7) cell_graphic2_pane_g1

0xe309,	// (0x0005cdc8) cell_graphic2_pane_g2_ParamLimits

0xe309,	// (0x0005cdc8) cell_graphic2_pane_g2

0xecdf,	// (0x0005d79e) cell_graphic2_pane_g3_ParamLimits

0xecdf,	// (0x0005d79e) cell_graphic2_pane_g3

0xe316,	// (0x0005cdd5) cell_graphic2_pane_g4_ParamLimits

0xe316,	// (0x0005cdd5) cell_graphic2_pane_g4

0xf105,	// (0x0005dbc4) cell_graphic2_pane_g5_ParamLimits

0xf105,	// (0x0005dbc4) cell_graphic2_pane_g5

0x0004,

0xfda8,	// (0x0005e867) cell_graphic2_pane_g_ParamLimits

0xfda8,	// (0x0005e867) cell_graphic2_pane_g

0xf125,	// (0x0005dbe4) cell_graphic2_pane_t1_ParamLimits

0xf125,	// (0x0005dbe4) cell_graphic2_pane_t1

0x6196,	// (0x00054c55) grid_highlight_pane_cp11_ParamLimits

0x6196,	// (0x00054c55) grid_highlight_pane_cp11

0x39c5,	// (0x00052484) bg_button_pane_cp05

0xf16e,	// (0x0005dc2d) cell_graphic2_control_pane_g1

0x7a44,	// (0x00056503) bg_touch_area_indi_pane_g1

0x9c6e,	// (0x0005872d) aid_cmod_rocker_key_size

0x9c78,	// (0x00058737) aid_cmode_itu_key_size

0x9c82,	// (0x00058741) main_cmode_video_pane

0x9c8c,	// (0x0005874b) main_comp_mode_itu_pane

0x9c98,	// (0x00058757) main_comp_mode_rocker_pane

0x9ca4,	// (0x00058763) cell_cmode_rocker_pane_ParamLimits

0x9ca4,	// (0x00058763) cell_cmode_rocker_pane

0x9cb6,	// (0x00058775) cell_cmode_itu_pane_ParamLimits

0x9cb6,	// (0x00058775) cell_cmode_itu_pane

0x3fb7,	// (0x00052a76) bg_button_pane_cp06_ParamLimits

0x3fb7,	// (0x00052a76) bg_button_pane_cp06

0x7cc2,	// (0x00056781) cell_cmode_rocker_pane_g1_ParamLimits

0x7cc2,	// (0x00056781) cell_cmode_rocker_pane_g1

0x91e1,	// (0x00057ca0) cell_cmode_rocker_pane_g2_ParamLimits

0x91e1,	// (0x00057ca0) cell_cmode_rocker_pane_g2

0x0001,

0xfdb8,	// (0x0005e877) cell_cmode_rocker_pane_g_ParamLimits

0xfdb8,	// (0x0005e877) cell_cmode_rocker_pane_g

0x3648,	// (0x00052107) bg_button_pane_cp07

0x9ccb,	// (0x0005878a) cell_cmode_itu_pane_g1

0x9cd4,	// (0x00058793) cell_cmode_itu_pane_t1

0x9ce2,	// (0x000587a1) cell_cmode_itu_pane_t2

0x0001,

0xfdbd,	// (0x0005e87c) cell_cmode_itu_pane_t

0x9404,	// (0x00057ec3) aid_touch_ctrl_left

0x940c,	// (0x00057ecb) aid_touch_ctrl_right

0x3648,	// (0x00052107) compa_mode_pane

0xf192,	// (0x0005dc51) aid_cmod_rocker_key_size_cp

0xf19c,	// (0x0005dc5b) aid_cmode_itu_key_size_cp

0x9d04,	// (0x000587c3) compa_mode_pane_g1

0x9d0c,	// (0x000587cb) compa_mode_pane_g2

0x9d14,	// (0x000587d3) compa_mode_pane_g3

0x0002,

0xfdc2,	// (0x0005e881) compa_mode_pane_g

0xf1a6,	// (0x0005dc65) main_comp_mode_itu_pane_cp

0xf1ae,	// (0x0005dc6d) main_comp_mode_rocker_pane_cp

0xf1b6,	// (0x0005dc75) cell_cmode_itu_pane_cp_ParamLimits

0xf1b6,	// (0x0005dc75) cell_cmode_itu_pane_cp

0xf1cb,	// (0x0005dc8a) cell_cmode_rocker_pane_cp_ParamLimits

0xf1cb,	// (0x0005dc8a) cell_cmode_rocker_pane_cp

0x3fb7,	// (0x00052a76) bg_button_pane_cp06_cp_ParamLimits

0x3fb7,	// (0x00052a76) bg_button_pane_cp06_cp

0x7cc2,	// (0x00056781) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7cc2,	// (0x00056781) cell_cmode_rocker_pane_g1_cp

0x7a44,	// (0x00056503) cell_cmode_rocker_pane_g2_cp

0x3648,	// (0x00052107) bg_button_pane_cp07_cp

0xf1dd,	// (0x0005dc9c) cell_cmode_itu_pane_g1_cp

0xf1e6,	// (0x0005dca5) cell_cmode_itu_pane_t1_cp

0xf1e6,	// (0x0005dca5) cell_cmode_itu_pane_t2_cp

0xde72,	// (0x0005c931) settings_code_pane_cp2

0x373c,	// (0x000521fb) bg_popup_window_pane_cp3_ParamLimits

0x3b9f,	// (0x0005265e) heading_pane_cp3_ParamLimits

0x3bab,	// (0x0005266a) listscroll_popup_graphic_pane_ParamLimits

0x1c72,	// (0x00050731) fep_hwr_aid_pane_ParamLimits

0x20e9,	// (0x00050ba8) aid_touch_sctrl_top_ParamLimits

0x2104,	// (0x00050bc3) sctrl_sk_top_pane_g1_ParamLimits

0x1ec9,	// (0x00050988) sctrl_sk_top_pane_g2_ParamLimits

0xfcf8,	// (0x0005e7b7) sctrl_sk_top_pane_g_ParamLimits

0x2111,	// (0x00050bd0) sctrl_sk_top_pane_t1_ParamLimits

0x20e9,	// (0x00050ba8) aid_touch_sctrl_bottom_ParamLimits

0x2111,	// (0x00050bd0) sctrl_sk_bottom_pane_t1_ParamLimits

0x934d,	// (0x00057e0c) aid_area_touch_clock

0xcb81,	// (0x0005b640) aid_vkb2_area_top_pane_cell_ParamLimits

0xcb81,	// (0x0005b640) aid_vkb2_area_top_pane_cell

0xcc2c,	// (0x0005b6eb) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcc2c,	// (0x0005b6eb) aid_vkb2_area_bottom_pane_cell

0x98dd,	// (0x0005839c) popup_char_count_window

0x9d61,	// (0x00058820) popup_char_count_window_g1

0x9d6a,	// (0x00058829) popup_char_count_window_g2

0x9d73,	// (0x00058832) popup_char_count_window_g3

0x0002,

0xfdc9,	// (0x0005e888) popup_char_count_window_g

0x9d7c,	// (0x0005883b) popup_char_count_window_t1

0x21c0,	// (0x00050c7f) popup_fep_char_preview_window_ParamLimits

0x21c0,	// (0x00050c7f) popup_fep_char_preview_window

0xcba1,	// (0x0005b660) vkb2_top_candi_pane_ParamLimits

0xcba1,	// (0x0005b660) vkb2_top_candi_pane

0xf1f4,	// (0x0005dcb3) cell_vkb2_top_candi_pane_ParamLimits

0xf1f4,	// (0x0005dcb3) cell_vkb2_top_candi_pane

0x2728,	// (0x000511e7) bg_popup_fep_char_preview_window_ParamLimits

0x2728,	// (0x000511e7) bg_popup_fep_char_preview_window

0x2736,	// (0x000511f5) popup_fep_char_preview_window_t1_ParamLimits

0x2736,	// (0x000511f5) popup_fep_char_preview_window_t1

0x9dd7,	// (0x00058896) bg_popup_fep_char_preview_window_g1

0x9ddf,	// (0x0005889e) bg_popup_fep_char_preview_window_g2

0x9de7,	// (0x000588a6) bg_popup_fep_char_preview_window_g3

0x9def,	// (0x000588ae) bg_popup_fep_char_preview_window_g4

0x9df7,	// (0x000588b6) bg_popup_fep_char_preview_window_g5

0x2770,	// (0x0005122f) bg_popup_fep_char_preview_window_g6

0x9dff,	// (0x000588be) bg_popup_fep_char_preview_window_g7

0x9e07,	// (0x000588c6) bg_popup_fep_char_preview_window_g8

0x9e0f,	// (0x000588ce) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd0,	// (0x0005e88f) bg_popup_fep_char_preview_window_g

0x1ec9,	// (0x00050988) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1ec9,	// (0x00050988) cell_vkb2_top_candi_pane_g1

0x1ed7,	// (0x00050996) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1ed7,	// (0x00050996) cell_vkb2_top_candi_pane_g2

0x9897,	// (0x00058356) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9897,	// (0x00058356) cell_vkb2_top_candi_pane_g3

0x2778,	// (0x00051237) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2778,	// (0x00051237) cell_vkb2_top_candi_pane_g4

0x8199,	// (0x00056c58) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8199,	// (0x00056c58) cell_vkb2_top_candi_pane_g5

0x2799,	// (0x00051258) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2799,	// (0x00051258) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde3,	// (0x0005e8a2) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde3,	// (0x0005e8a2) cell_vkb2_top_candi_pane_g

0x27a7,	// (0x00051266) cell_vkb2_top_candi_pane_t1

0x1ad2,	// (0x00050591) aid_size_touch_slider_mark_ParamLimits

0x1ad2,	// (0x00050591) aid_size_touch_slider_mark

0xef11,	// (0x0005d9d0) grid_graphic2_catg_pane_ParamLimits

0xef11,	// (0x0005d9d0) grid_graphic2_catg_pane

0xefcd,	// (0x0005da8c) popup_grid_graphic2_window_t1_ParamLimits

0xefcd,	// (0x0005da8c) popup_grid_graphic2_window_t1

0xefe3,	// (0x0005daa2) popup_grid_graphic2_window_t2_ParamLimits

0xefe3,	// (0x0005daa2) popup_grid_graphic2_window_t2

0x0001,

0xfd9e,	// (0x0005e85d) popup_grid_graphic2_window_t_ParamLimits

0xfd9e,	// (0x0005e85d) popup_grid_graphic2_window_t

0x39c5,	// (0x00052484) bg_button_pane_cp05_ParamLimits

0xf16e,	// (0x0005dc2d) cell_graphic2_control_pane_g1_ParamLimits

0xf25a,	// (0x0005dd19) cell_graphic2_catg_pane_ParamLimits

0xf25a,	// (0x0005dd19) cell_graphic2_catg_pane

0x3648,	// (0x00052107) bg_button_pane_cp12

0xf26c,	// (0x0005dd2b) cell_graphic2_catg_pane_g1

0x9319,	// (0x00057dd8) cell_tb_ext_pane_t1_ParamLimits

0x2562,	// (0x00051021) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2562,	// (0x00051021) vkb2_top_cell_right_narrow_pane

0x257a,	// (0x00051039) vkb2_top_cell_right_wide_pane_ParamLimits

0x257a,	// (0x00051039) vkb2_top_cell_right_wide_pane

0x1c64,	// (0x00050723) bg_vkb2_func_pane_ParamLimits

0x1c64,	// (0x00050723) bg_vkb2_func_pane

0x25eb,	// (0x000510aa) vkb2_top_cell_left_pane_g1_ParamLimits

0x1c64,	// (0x00050723) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1c64,	// (0x00050723) bg_vkb2_fuc_pane_cp03

0x2649,	// (0x00051108) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x54af,	// (0x00053f6e) bg_vkb2_func_pane_g1

0x54b7,	// (0x00053f76) bg_vkb2_func_pane_g2

0x54c7,	// (0x00053f86) bg_vkb2_func_pane_g3

0x54bf,	// (0x00053f7e) bg_vkb2_func_pane_g4

0x54cf,	// (0x00053f8e) bg_vkb2_func_pane_g5

0x54d7,	// (0x00053f96) bg_vkb2_func_pane_g6

0x54df,	// (0x00053f9e) bg_vkb2_func_pane_g7

0x54e7,	// (0x00053fa6) bg_vkb2_func_pane_g8

0x54a7,	// (0x00053f66) bg_vkb2_func_pane_g9

0x0008,

0xfdf0,	// (0x0005e8af) bg_vkb2_func_pane_g

0x1c64,	// (0x00050723) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1c64,	// (0x00050723) bg_vkb2_fuc_pane_cp01

0x25eb,	// (0x000510aa) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x25eb,	// (0x000510aa) vkb2_top_cell_right_wide_pane_g1

0x1c64,	// (0x00050723) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1c64,	// (0x00050723) bg_vkb2_fuc_pane_cp02

0x2649,	// (0x00051108) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2649,	// (0x00051108) vkb2_top_cell_right_narrow_pane_g1

0xe77b,	// (0x0005d23a) aid_touch_area_decrease_ParamLimits

0xe77b,	// (0x0005d23a) aid_touch_area_decrease

0xe7af,	// (0x0005d26e) aid_touch_area_increase_ParamLimits

0xe7af,	// (0x0005d26e) aid_touch_area_increase

0xe7d7,	// (0x0005d296) aid_touch_area_mute_ParamLimits

0xe7d7,	// (0x0005d296) aid_touch_area_mute

0xe807,	// (0x0005d2c6) aid_touch_area_slider_ParamLimits

0xe807,	// (0x0005d2c6) aid_touch_area_slider

0xe847,	// (0x0005d306) popup_slider_window_g4_ParamLimits

0xe847,	// (0x0005d306) popup_slider_window_g4

0xe86f,	// (0x0005d32e) popup_slider_window_g5_ParamLimits

0xe86f,	// (0x0005d32e) popup_slider_window_g5

0xe8a3,	// (0x0005d362) popup_slider_window_g6_ParamLimits

0xe8a3,	// (0x0005d362) popup_slider_window_g6

0x90f7,	// (0x00057bb6) popup_slider_window_t2_ParamLimits

0x90f7,	// (0x00057bb6) popup_slider_window_t2

0x0001,

0xfcec,	// (0x0005e7ab) popup_slider_window_t_ParamLimits

0xfcec,	// (0x0005e7ab) popup_slider_window_t

0xe8bf,	// (0x0005d37e) slider_pane_ParamLimits

0xe8bf,	// (0x0005d37e) slider_pane

0x9e32,	// (0x000588f1) slider_pane_g1_ParamLimits

0x9e32,	// (0x000588f1) slider_pane_g1

0x9e46,	// (0x00058905) slider_pane_g2_ParamLimits

0x9e46,	// (0x00058905) slider_pane_g2

0x9e5c,	// (0x0005891b) slider_pane_g3_ParamLimits

0x9e5c,	// (0x0005891b) slider_pane_g3

0x0003,

0xfe03,	// (0x0005e8c2) slider_pane_g_ParamLimits

0xfe03,	// (0x0005e8c2) slider_pane_g

0xc6b9,	// (0x0005b178) popup_tb_float_extension_window_ParamLimits

0xc6b9,	// (0x0005b178) popup_tb_float_extension_window

0x9e88,	// (0x00058947) aid_size_cell_tb_float_ext

0x3648,	// (0x00052107) bg_popup_sub_window_cp28

0x9e94,	// (0x00058953) grid_tb_float_ext_pane

0x9e9e,	// (0x0005895d) cell_tb_float_ext_pane_ParamLimits

0x9e9e,	// (0x0005895d) cell_tb_float_ext_pane

0x9eb8,	// (0x00058977) cell_tb_float_ext_pane_g1

0x9ec1,	// (0x00058980) grid_highlight_pane_cp12

0xc867,	// (0x0005b326) cell_last_hwr_side_pane_ParamLimits

0xc867,	// (0x0005b326) cell_last_hwr_side_pane

0x7a44,	// (0x00056503) cell_last_hwr_side_pane_g1

0x9eca,	// (0x00058989) cell_last_hwr_side_pane_g2

0x0001,

0xfe0c,	// (0x0005e8cb) cell_last_hwr_side_pane_g

0xcd08,	// (0x0005b7c7) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcd08,	// (0x0005b7c7) vkb2_area_bottom_space_btn_pane

0x1ec9,	// (0x00050988) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9992,	// (0x00058451) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x27a7,	// (0x00051266) cell_vkb2_top_candi_pane_t1_ParamLimits

0x27c6,	// (0x00051285) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x27c6,	// (0x00051285) vkb2_area_bottom_space_btn_pane_g1

0x2800,	// (0x000512bf) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2800,	// (0x000512bf) vkb2_area_bottom_space_btn_pane_g2

0x2836,	// (0x000512f5) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2836,	// (0x000512f5) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe11,	// (0x0005e8d0) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe11,	// (0x0005e8d0) vkb2_area_bottom_space_btn_pane_g

0x1d27,	// (0x000507e6) cel_fep_hwr_func_pane_ParamLimits

0x1d27,	// (0x000507e6) cel_fep_hwr_func_pane

0xc83c,	// (0x0005b2fb) cell_hwr_side_button_pane_ParamLimits

0xc83c,	// (0x0005b2fb) cell_hwr_side_button_pane

0x934d,	// (0x00057e0c) aid_area_touch_clock_ParamLimits

0x39c5,	// (0x00052484) bg_uniindi_top_pane_ParamLimits

0x935f,	// (0x00057e1e) uniindi_top_pane_g1_ParamLimits

0x9375,	// (0x00057e34) uniindi_top_pane_g2_ParamLimits

0x9381,	// (0x00057e40) uniindi_top_pane_g3_ParamLimits

0x9392,	// (0x00057e51) uniindi_top_pane_g4_ParamLimits

0xfd24,	// (0x0005e7e3) uniindi_top_pane_g_ParamLimits

0x939f,	// (0x00057e5e) uniindi_top_pane_t1_ParamLimits

0x39c5,	// (0x00052484) bg_vkb2_func_pane_cp01_ParamLimits

0x39c5,	// (0x00052484) bg_vkb2_func_pane_cp01

0x9ed3,	// (0x00058992) cel_fep_hwr_func_pane_g1_ParamLimits

0x9ed3,	// (0x00058992) cel_fep_hwr_func_pane_g1

0x39c5,	// (0x00052484) bg_vkb2_func_pane_cp02_ParamLimits

0x39c5,	// (0x00052484) bg_vkb2_func_pane_cp02

0x9ed3,	// (0x00058992) cell_hwr_side_button_pane_g1_ParamLimits

0x9ed3,	// (0x00058992) cell_hwr_side_button_pane_g1

0x5328,	// (0x00053de7) status_pane_g4_ParamLimits

0x5328,	// (0x00053de7) status_pane_g4

0x5342,	// (0x00053e01) status_pane_t1

0x7789,	// (0x00056248) form2_midp_gauge_slider_cont_pane

0x7791,	// (0x00056250) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe141,	// (0x0005cc00) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe153,	// (0x0005cc12) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x0005e5a3) form2_midp_gauge_slider_pane_t_ParamLimits

0x77c7,	// (0x00056286) form2_midp_slider_pane_ParamLimits

0x2180,	// (0x00050c3f) aid_size_cell_func_vkb2_ParamLimits

0x2180,	// (0x00050c3f) aid_size_cell_func_vkb2

0x9e74,	// (0x00058933) slider_pane_g4_ParamLimits

0x9e74,	// (0x00058933) slider_pane_g4

0xcd69,	// (0x0005b828) form2_midp_gauge_slider_pane_t2_cp01

0xcd77,	// (0x0005b836) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcd77,	// (0x0005b836) form2_midp_gauge_slider_pane_t3_cp01

0x28ab,	// (0x0005136a) form2_midp_slider_pane_cp01

0x3648,	// (0x00052107) navi_smil_pane

0x9f0c,	// (0x000589cb) navi_smil_pane_g1

0x9f14,	// (0x000589d3) navi_smil_pane_t1

0x9ee1,	// (0x000589a0) form2_midp_slider_pane_g1

0x9eea,	// (0x000589a9) form2_midp_slider_pane_g2

0x9ef2,	// (0x000589b1) form2_midp_slider_pane_g3

0x9ee1,	// (0x000589a0) form2_midp_slider_pane_g4

0xf275,	// (0x0005dd34) form2_midp_slider_pane_g5

0x0004,

0xfe1a,	// (0x0005e8d9) form2_midp_slider_pane_g

0x2870,	// (0x0005132f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2870,	// (0x0005132f) vkb2_area_bottom_space_btn_pane_g4

0xd7bc,	// (0x0005c27b) lc0_navi_pane_ParamLimits

0xd7bc,	// (0x0005c27b) lc0_navi_pane

0xd826,	// (0x0005c2e5) lc0_stat_indi_pane_ParamLimits

0xd826,	// (0x0005c2e5) lc0_stat_indi_pane

0xd83b,	// (0x0005c2fa) ls0_title_pane_ParamLimits

0xd83b,	// (0x0005c2fa) ls0_title_pane

0x3fb7,	// (0x00052a76) bg_popup_sub_pane_cp14_ParamLimits

0x9334,	// (0x00057df3) list_uniindi_pane_ParamLimits

0x9340,	// (0x00057dff) uniindi_top_pane_ParamLimits

0x93dc,	// (0x00057e9b) list_single_uniindi_pane_g1_ParamLimits

0x93ef,	// (0x00057eae) list_single_uniindi_pane_t1_ParamLimits

0xcd94,	// (0x0005b853) lc0_stat_clock_pane_ParamLimits

0xcd94,	// (0x0005b853) lc0_stat_clock_pane

0xf280,	// (0x0005dd3f) lc0_stat_indi_pane_g1_ParamLimits

0xf280,	// (0x0005dd3f) lc0_stat_indi_pane_g1

0xf28d,	// (0x0005dd4c) lc0_stat_indi_pane_g2_ParamLimits

0xf28d,	// (0x0005dd4c) lc0_stat_indi_pane_g2

0x0001,

0xfe25,	// (0x0005e8e4) lc0_stat_indi_pane_g_ParamLimits

0xfe25,	// (0x0005e8e4) lc0_stat_indi_pane_g

0xcda1,	// (0x0005b860) lc0_uni_indicator_pane_ParamLimits

0xcda1,	// (0x0005b860) lc0_uni_indicator_pane

0xf29a,	// (0x0005dd59) ls0_title_pane_g1_ParamLimits

0xf29a,	// (0x0005dd59) ls0_title_pane_g1

0xf2ae,	// (0x0005dd6d) ls0_title_pane_t1_ParamLimits

0xf2ae,	// (0x0005dd6d) ls0_title_pane_t1

0xcdae,	// (0x0005b86d) lc0_uni_indicator_pane_g1_ParamLimits

0xcdae,	// (0x0005b86d) lc0_uni_indicator_pane_g1

0x9f86,	// (0x00058a45) lc0_stat_clock_pane_t1

0x0158,	// (0x0004ec17) main_ai5_pane

0x9f94,	// (0x00058a53) ai5_sk_pane_ParamLimits

0x9f94,	// (0x00058a53) ai5_sk_pane

0xf2dc,	// (0x0005dd9b) cell_ai5_widget_pane_ParamLimits

0xf2dc,	// (0x0005dd9b) cell_ai5_widget_pane

0xa053,	// (0x00058b12) aid_size_cell_widget_grid

0xa069,	// (0x00058b28) bg_ai5_widget_pane_ParamLimits

0xa069,	// (0x00058b28) bg_ai5_widget_pane

0xa0dd,	// (0x00058b9c) cell_ai5_widget_pane_g2

0xa0ed,	// (0x00058bac) cell_ai5_widget_pane_g3

0xa104,	// (0x00058bc3) cell_ai5_widget_pane_g4

0xa110,	// (0x00058bcf) cell_ai5_widget_pane_g5

0xa11c,	// (0x00058bdb) cell_ai5_widget_pane_g6

0xa128,	// (0x00058be7) cell_ai5_widget_pane_g7

0xa170,	// (0x00058c2f) cell_ai5_widget_pane_t1_ParamLimits

0xa170,	// (0x00058c2f) cell_ai5_widget_pane_t1

0xa18d,	// (0x00058c4c) cell_ai5_widget_pane_t2_ParamLimits

0xa18d,	// (0x00058c4c) cell_ai5_widget_pane_t2

0xa1a5,	// (0x00058c64) cell_ai5_widget_pane_t3_ParamLimits

0xa1a5,	// (0x00058c64) cell_ai5_widget_pane_t3

0xa1bd,	// (0x00058c7c) cell_ai5_widget_pane_t4_ParamLimits

0xa1bd,	// (0x00058c7c) cell_ai5_widget_pane_t4

0xa1da,	// (0x00058c99) cell_ai5_widget_pane_t5_ParamLimits

0xa1da,	// (0x00058c99) cell_ai5_widget_pane_t5

0xa1f9,	// (0x00058cb8) cell_ai5_widget_pane_t6_ParamLimits

0xa1f9,	// (0x00058cb8) cell_ai5_widget_pane_t6

0xa20b,	// (0x00058cca) cell_ai5_widget_pane_t7_ParamLimits

0xa20b,	// (0x00058cca) cell_ai5_widget_pane_t7

0xa224,	// (0x00058ce3) cell_ai5_widget_pane_t8_ParamLimits

0xa224,	// (0x00058ce3) cell_ai5_widget_pane_t8

0x0009,

0xfe3f,	// (0x0005e8fe) cell_ai5_widget_pane_t_ParamLimits

0xfe3f,	// (0x0005e8fe) cell_ai5_widget_pane_t

0xa278,	// (0x00058d37) grid_ai5_widget_pane

0x3fb7,	// (0x00052a76) highlight_cell_ai5_widget_pane_ParamLimits

0x3fb7,	// (0x00052a76) highlight_cell_ai5_widget_pane

0xf342,	// (0x0005de01) ai5_sk_left_pane

0xf34c,	// (0x0005de0b) ai5_sk_middle_pane

0xf356,	// (0x0005de15) ai5_sk_right_pane

0xa2ad,	// (0x00058d6c) bg_ai5_widget_pane_g1_ParamLimits

0xa2ad,	// (0x00058d6c) bg_ai5_widget_pane_g1

0xa2b9,	// (0x00058d78) bg_ai5_widget_pane_g2_ParamLimits

0xa2b9,	// (0x00058d78) bg_ai5_widget_pane_g2

0xa2c5,	// (0x00058d84) bg_ai5_widget_pane_g3_ParamLimits

0xa2c5,	// (0x00058d84) bg_ai5_widget_pane_g3

0xa2d1,	// (0x00058d90) bg_ai5_widget_pane_g4_ParamLimits

0xa2d1,	// (0x00058d90) bg_ai5_widget_pane_g4

0xa2dd,	// (0x00058d9c) bg_ai5_widget_pane_g5_ParamLimits

0xa2dd,	// (0x00058d9c) bg_ai5_widget_pane_g5

0xa2e9,	// (0x00058da8) bg_ai5_widget_pane_g6_ParamLimits

0xa2e9,	// (0x00058da8) bg_ai5_widget_pane_g6

0xa2f5,	// (0x00058db4) bg_ai5_widget_pane_g7_ParamLimits

0xa2f5,	// (0x00058db4) bg_ai5_widget_pane_g7

0xa301,	// (0x00058dc0) bg_ai5_widget_pane_g8_ParamLimits

0xa301,	// (0x00058dc0) bg_ai5_widget_pane_g8

0xa30d,	// (0x00058dcc) bg_ai5_widget_pane_g9_ParamLimits

0xa30d,	// (0x00058dcc) bg_ai5_widget_pane_g9

0x0008,

0xfe54,	// (0x0005e913) bg_ai5_widget_pane_g_ParamLimits

0xfe54,	// (0x0005e913) bg_ai5_widget_pane_g

0xa33f,	// (0x00058dfe) cell_shortcut_ai5_widget_pane_ParamLimits

0xa33f,	// (0x00058dfe) cell_shortcut_ai5_widget_pane

0x4c42,	// (0x00053701) bg_cell_shortcut_ai5_widget_pane

0xa350,	// (0x00058e0f) cell_grid_ai5_widget_pane_g1

0x4c42,	// (0x00053701) highlight_cell_shortcut_ai5_widget_pane

0x54af,	// (0x00053f6e) ai5_sk_left_pane_g1

0xa359,	// (0x00058e18) ai5_sk_left_pane_g2

0xa361,	// (0x00058e20) ai5_sk_left_pane_g3

0xa369,	// (0x00058e28) ai5_sk_left_pane_g4

0x0003,

0xfe67,	// (0x0005e926) ai5_sk_left_pane_g

0xa371,	// (0x00058e30) ai5_sk_left_pane_t1

0x54b7,	// (0x00053f76) ai5_sk_right_pane_g1

0xa37f,	// (0x00058e3e) ai5_sk_right_pane_g2

0xa387,	// (0x00058e46) ai5_sk_right_pane_g3

0xa38f,	// (0x00058e4e) ai5_sk_right_pane_g4

0x0003,

0xfe70,	// (0x0005e92f) ai5_sk_right_pane_g

0xa397,	// (0x00058e56) ai5_sk_right_pane_t1

0x54b7,	// (0x00053f76) ai5_sk_middle_pane_g1

0x54af,	// (0x00053f6e) ai5_sk_middle_pane_g2

0x54cf,	// (0x00053f8e) ai5_sk_middle_pane_g3

0xa387,	// (0x00058e46) ai5_sk_middle_pane_g4

0xa361,	// (0x00058e20) ai5_sk_middle_pane_g5

0xa3a5,	// (0x00058e64) ai5_sk_middle_pane_g6

0xf360,	// (0x0005de1f) ai5_sk_middle_pane_g7

0x0006,

0xfe79,	// (0x0005e938) ai5_sk_middle_pane_g

0xd6a8,	// (0x0005c167) aid_touch_area_size_lc0_ParamLimits

0xd6a8,	// (0x0005c167) aid_touch_area_size_lc0

0x1ef8,	// (0x000509b7) cell_hwr_candidate_pane_t1_ParamLimits

0x4ff3,	// (0x00053ab2) aid_touch_navi_pane

0xd9ce,	// (0x0005c48d) status_dt_navi_pane_ParamLimits

0xd9ce,	// (0x0005c48d) status_dt_navi_pane

0xd9e6,	// (0x0005c4a5) status_dt_sta_pane_ParamLimits

0xd9e6,	// (0x0005c4a5) status_dt_sta_pane

0xf368,	// (0x0005de27) dt_sta_controll_pane

0xf375,	// (0x0005de34) dt_sta_indi_pane

0xf382,	// (0x0005de41) dt_sta_title_pane

0x39c5,	// (0x00052484) bg_dt_sta_indi_pane_ParamLimits

0x39c5,	// (0x00052484) bg_dt_sta_indi_pane

0xf394,	// (0x0005de53) dt_sta_battery_pane

0xf39c,	// (0x0005de5b) dt_sta_indi_pane_g1

0xa3f7,	// (0x00058eb6) dt_sta_indi_pane_g2

0xa400,	// (0x00058ebf) dt_sta_indi_pane_g3

0x0002,

0xfe88,	// (0x0005e947) dt_sta_indi_pane_g

0xa409,	// (0x00058ec8) dt_sta_signal_pane

0x3fb7,	// (0x00052a76) bg_dt_sta_title_pane_ParamLimits

0x3fb7,	// (0x00052a76) bg_dt_sta_title_pane

0xa412,	// (0x00058ed1) dt_sta_title_pane_g1

0xa41a,	// (0x00058ed9) dt_sta_title_pane_t1_ParamLimits

0xa41a,	// (0x00058ed9) dt_sta_title_pane_t1

0x3648,	// (0x00052107) bg_dt_sta_control_pane

0xf3a5,	// (0x0005de64) dt_sta_controll_pane_g1

0xa438,	// (0x00058ef7) bg_dt_sta_title_pane_g1

0xa441,	// (0x00058f00) bg_dt_sta_title_pane_g2

0xa44a,	// (0x00058f09) bg_dt_sta_title_pane_g3

0x0002,

0xfe8f,	// (0x0005e94e) bg_dt_sta_title_pane_g

0x7a44,	// (0x00056503) bg_dt_sta_indi_pane_g1

0xa453,	// (0x00058f12) dt_sta_signal_pane_g1

0xa45b,	// (0x00058f1a) dt_sta_signal_pane_g2

0x0001,

0xfe96,	// (0x0005e955) dt_sta_signal_pane_g

0xa463,	// (0x00058f22) dt_sta_battery_pane_g1

0xa46c,	// (0x00058f2b) dt_sta_battery_pane_t1

0x7a44,	// (0x00056503) bg_dt_sta_control_pane_g1

0x4741,	// (0x00053200) fep_china_uni_eep_pane

0x4749,	// (0x00053208) fep_china_uni_entry_pane_ParamLimits

0x4759,	// (0x00053218) popup_fep_china_uni_window_g1_ParamLimits

0x4769,	// (0x00053228) popup_fep_china_uni_window_g2_ParamLimits

0x4769,	// (0x00053228) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0005e1e1) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0005e1e1) popup_fep_china_uni_window_g

0xa47b,	// (0x00058f3a) fep_china_uni_eep_pane_g1

0xa483,	// (0x00058f42) fep_china_uni_eep_pane_t1

0x9f03,	// (0x000589c2) aid_touch_area_size_smil_player

0x514f,	// (0x00053c0e) lc0_clock_pane

0x5336,	// (0x00053df5) status_pane_g5_ParamLimits

0x5336,	// (0x00053df5) status_pane_g5

0xc23b,	// (0x0005acfa) popup_keymap_window

0x52f4,	// (0x00053db3) status_icon_pane

0xa0ed,	// (0x00058bac) cell_ai5_widget_pane_g3_ParamLimits

0xa104,	// (0x00058bc3) cell_ai5_widget_pane_g4_ParamLimits

0xa110,	// (0x00058bcf) cell_ai5_widget_pane_g5_ParamLimits

0xa134,	// (0x00058bf3) cell_ai5_widget_pane_g8_ParamLimits

0xa134,	// (0x00058bf3) cell_ai5_widget_pane_g8

0xa148,	// (0x00058c07) cell_ai5_widget_pane_g9_ParamLimits

0xa148,	// (0x00058c07) cell_ai5_widget_pane_g9

0xa15c,	// (0x00058c1b) cell_ai5_widget_pane_g10_ParamLimits

0xa15c,	// (0x00058c1b) cell_ai5_widget_pane_g10

0xa492,	// (0x00058f51) status_icon_pane_g1

0x3648,	// (0x00052107) bg_popup_sub_pane_cp13

0xa49a,	// (0x00058f59) popup_keymap_window_t1

0xd636,	// (0x0005c0f5) control_pane_g6_ParamLimits

0xd636,	// (0x0005c0f5) control_pane_g6

0xd643,	// (0x0005c102) control_pane_g7_ParamLimits

0xd643,	// (0x0005c102) control_pane_g7

0xd650,	// (0x0005c10f) control_pane_g8_ParamLimits

0xd650,	// (0x0005c10f) control_pane_g8

0xf368,	// (0x0005de27) dt_sta_controll_pane_ParamLimits

0xf375,	// (0x0005de34) dt_sta_indi_pane_ParamLimits

0xf382,	// (0x0005de41) dt_sta_title_pane_ParamLimits

0x3ee3,	// (0x000529a2) aid_size_touch_scroll_bar_cale

0x0231,	// (0x0004ecf0) popup_discreet_window_ParamLimits

0x0231,	// (0x0004ecf0) popup_discreet_window

0xb7e0,	// (0x0005a29f) popup_sk_window

0x5b22,	// (0x000545e1) bg_popup_sub_pane_cp28_ParamLimits

0x5b22,	// (0x000545e1) bg_popup_sub_pane_cp28

0xa4a8,	// (0x00058f67) popup_discreet_window_g1_ParamLimits

0xa4a8,	// (0x00058f67) popup_discreet_window_g1

0xa4c8,	// (0x00058f87) popup_discreet_window_t1_ParamLimits

0xa4c8,	// (0x00058f87) popup_discreet_window_t1

0xa4e6,	// (0x00058fa5) popup_discreet_window_t2_ParamLimits

0xa4e6,	// (0x00058fa5) popup_discreet_window_t2

0x0002,

0xfe9b,	// (0x0005e95a) popup_discreet_window_t_ParamLimits

0xfe9b,	// (0x0005e95a) popup_discreet_window_t

0x28e2,	// (0x000513a1) popup_sk_window_g1

0x28ec,	// (0x000513ab) popup_sk_window_g2

0x0001,

0xfea2,	// (0x0005e961) popup_sk_window_g

0x28f4,	// (0x000513b3) popup_sk_window_t1

0x2902,	// (0x000513c1) popup_sk_window_t1_copy1

0xa0dd,	// (0x00058b9c) cell_ai5_widget_pane_g2_ParamLimits

0xa236,	// (0x00058cf5) cell_ai5_widget_pane_t9_ParamLimits

0xa236,	// (0x00058cf5) cell_ai5_widget_pane_t9

0x3648,	// (0x00052107) main_fep_fshwr2_pane

0xcdd5,	// (0x0005b894) aid_fshwr2_btn_pane

0xcde6,	// (0x0005b8a5) aid_fshwr2_syb_pane

0xcdf7,	// (0x0005b8b6) aid_fshwr2_txt_pane

0xce03,	// (0x0005b8c2) fshwr2_func_candi_pane

0xce22,	// (0x0005b8e1) fshwr2_hwr_syb_pane

0xce3d,	// (0x0005b8fc) fshwr2_icf_pane

0x0158,	// (0x0004ec17) fshwr2_icf_bg_pane

0x2982,	// (0x00051441) fshwr2_icf_pane_t1_ParamLimits

0x2982,	// (0x00051441) fshwr2_icf_pane_t1

0x462f,	// (0x000530ee) fshwr2_func_candi_pane_g1

0xf3ae,	// (0x0005de6d) fshwr2_func_candi_row_pane_ParamLimits

0xf3ae,	// (0x0005de6d) fshwr2_func_candi_row_pane

0xce69,	// (0x0005b928) cell_fshwr2_syb_pane_ParamLimits

0xce69,	// (0x0005b928) cell_fshwr2_syb_pane

0x1ec9,	// (0x00050988) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1ec9,	// (0x00050988) fshwr2_hwr_syb_pane_g1

0x0158,	// (0x0004ec17) bg_popup_call_pane_cp01

0xce7f,	// (0x0005b93e) fshwr2_func_candi_cell_pane_ParamLimits

0xce7f,	// (0x0005b93e) fshwr2_func_candi_cell_pane

0xf3d1,	// (0x0005de90) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf3d1,	// (0x0005de90) fshwr2_func_candi_cell_bg_pane

0xceca,	// (0x0005b989) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xceca,	// (0x0005b989) fshwr2_func_candi_cell_pane_g1

0xcf01,	// (0x0005b9c0) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcf01,	// (0x0005b9c0) fshwr2_func_candi_cell_pane_t1

0x0158,	// (0x0004ec17) bg_button_pane_cp08

0xa554,	// (0x00059013) cell_fshwr2_syb_bg_pane

0xcf1c,	// (0x0005b9db) cell_fshwr2_syb_bg_pane_g1

0xcf24,	// (0x0005b9e3) cell_fshwr2_syb_bg_pane_t1

0x3fb7,	// (0x00052a76) main_tmo_pane

0xdca4,	// (0x0005c763) uni_indicator_pane_g1_ParamLimits

0xdcba,	// (0x0005c779) uni_indicator_pane_g2_ParamLimits

0xdcd0,	// (0x0005c78f) uni_indicator_pane_g3_ParamLimits

0x6670,	// (0x0005512f) uni_indicator_pane_g4_ParamLimits

0x6670,	// (0x0005512f) uni_indicator_pane_g4

0x6684,	// (0x00055143) uni_indicator_pane_g5_ParamLimits

0x6684,	// (0x00055143) uni_indicator_pane_g5

0x6684,	// (0x00055143) uni_indicator_pane_g6_ParamLimits

0x6684,	// (0x00055143) uni_indicator_pane_g6

0xf921,	// (0x0005e3e0) uni_indicator_pane_g_ParamLimits

0xe757,	// (0x0005d216) popup_tmo_note_window_ParamLimits

0xe757,	// (0x0005d216) popup_tmo_note_window

0x2162,	// (0x00050c21) fshwr2_bg_pane

0xcef2,	// (0x0005b9b1) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcef2,	// (0x0005b9b1) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea7,	// (0x0005e966) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea7,	// (0x0005e966) fshwr2_func_candi_cell_pane_g

0x1eb1,	// (0x00050970) bg_popup_window_pane_cp01

0x2a4d,	// (0x0005150c) bg_popup_window_pane_g1_cp01

0xa55c,	// (0x0005901b) bg_popup_window_pane_cp22_ParamLimits

0xa55c,	// (0x0005901b) bg_popup_window_pane_cp22

0xa56a,	// (0x00059029) listscroll_tmo_link_pane_ParamLimits

0xa56a,	// (0x00059029) listscroll_tmo_link_pane

0xa5aa,	// (0x00059069) popup_tmo_note_window_g1_ParamLimits

0xa5aa,	// (0x00059069) popup_tmo_note_window_g1

0xa5b7,	// (0x00059076) tmo_note_info_pane_ParamLimits

0xa5b7,	// (0x00059076) tmo_note_info_pane

0xf3dd,	// (0x0005de9c) list_tmo_note_info_pane_g1_ParamLimits

0xf3dd,	// (0x0005de9c) list_tmo_note_info_pane_g1

0xa5e8,	// (0x000590a7) list_tmo_note_info_pane_g2_ParamLimits

0xa5e8,	// (0x000590a7) list_tmo_note_info_pane_g2

0x0001,

0xfeac,	// (0x0005e96b) list_tmo_note_info_pane_g_ParamLimits

0xfeac,	// (0x0005e96b) list_tmo_note_info_pane_g

0xa604,	// (0x000590c3) list_tmo_note_info_text_pane_ParamLimits

0xa604,	// (0x000590c3) list_tmo_note_info_text_pane

0xa685,	// (0x00059144) list_tmo_link_pane

0xa692,	// (0x00059151) scroll_pane_cp20

0xa69f,	// (0x0005915e) list_single_tmo_link_pane_ParamLimits

0xa69f,	// (0x0005915e) list_single_tmo_link_pane

0xa6af,	// (0x0005916e) list_single_tmo_link_pane_t1

0xa6bd,	// (0x0005917c) list_tmo_note_info_text_pane_t1_ParamLimits

0xa6bd,	// (0x0005917c) list_tmo_note_info_text_pane_t1

0xd2ec,	// (0x0005bdab) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd2ec,	// (0x0005bdab) aid_size_touch_scroll_bar_cp01

0xbd97,	// (0x0005a856) aid_size_touch_slider_marker

0xb7d0,	// (0x0005a28f) popup_settings_window_ParamLimits

0xb7d0,	// (0x0005a28f) popup_settings_window

0x11c9,	// (0x0004fc88) popup_candi_list_indi_window

0x4ff3,	// (0x00053ab2) aid_touch_navi_pane_ParamLimits

0x20bd,	// (0x00050b7c) rs_clock_indi_pane

0x20c6,	// (0x00050b85) sctrl_sk_bottom_pane_ParamLimits

0x20d7,	// (0x00050b96) sctrl_sk_top_pane_ParamLimits

0x21da,	// (0x00050c99) popup_fep_tooltip_window

0xa053,	// (0x00058b12) aid_size_cell_widget_grid_ParamLimits

0xa0c8,	// (0x00058b87) cell_ai5_widget_pane_g1_ParamLimits

0xa0c8,	// (0x00058b87) cell_ai5_widget_pane_g1

0xa11c,	// (0x00058bdb) cell_ai5_widget_pane_g6_ParamLimits

0xa128,	// (0x00058be7) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2a,	// (0x0005e8e9) cell_ai5_widget_pane_g_ParamLimits

0xfe2a,	// (0x0005e8e9) cell_ai5_widget_pane_g

0xa25a,	// (0x00058d19) cell_ai5_widget_pane_t10_ParamLimits

0xa25a,	// (0x00058d19) cell_ai5_widget_pane_t10

0xa278,	// (0x00058d37) grid_ai5_widget_pane_ParamLimits

0xa319,	// (0x00058dd8) cell_contacts_ai5_widget_pane_ParamLimits

0xa319,	// (0x00058dd8) cell_contacts_ai5_widget_pane

0xa4fb,	// (0x00058fba) popup_discreet_window_t3_ParamLimits

0xa4fb,	// (0x00058fba) popup_discreet_window_t3

0xce55,	// (0x0005b914) popup_fshwr2_char_preview_window_ParamLimits

0xce55,	// (0x0005b914) popup_fshwr2_char_preview_window

0xf3f4,	// (0x0005deb3) tmo_note_info_pane_t1

0xf409,	// (0x0005dec8) tmo_note_info_pane_t2

0xf420,	// (0x0005dedf) tmo_note_info_pane_t3

0xa661,	// (0x00059120) tmo_note_info_pane_t4

0xa673,	// (0x00059132) tmo_note_info_pane_t5

0x0004,

0xfeb1,	// (0x0005e970) tmo_note_info_pane_t

0xa685,	// (0x00059144) list_tmo_link_pane_ParamLimits

0xa692,	// (0x00059151) scroll_pane_cp20_ParamLimits

0x0158,	// (0x0004ec17) bg_popup_fep_char_preview_window_cp01

0xa6d6,	// (0x00059195) popup_fshwr2_char_preview_window_t1

0xa6e4,	// (0x000591a3) popup_candi_list_indi_window_g1

0xa6ed,	// (0x000591ac) bg_cell_contacts_ai5_widget_pane

0xa6f9,	// (0x000591b8) cell_contacts_ai5_widget_pane_g1

0x80ee,	// (0x00056bad) cell_contacts_ai5_widget_pane_g2

0xa70e,	// (0x000591cd) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebc,	// (0x0005e97b) cell_contacts_ai5_widget_pane_g

0xa71a,	// (0x000591d9) cell_contacts_ai5_widget_pane_t1

0x3fb7,	// (0x00052a76) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa791,	// (0x00059250) settings_container_pane

0x4c42,	// (0x00053701) listscroll_set_pane_copy1

0x7155,	// (0x00055c14) scroll_pane_cp121_copy1

0x58d3,	// (0x00054392) set_content_pane_copy1

0xa79d,	// (0x0005925c) aid_height_set_list_copy1_ParamLimits

0xa79d,	// (0x0005925c) aid_height_set_list_copy1

0x687c,	// (0x0005533b) aid_size_parent_copy1_ParamLimits

0x687c,	// (0x0005533b) aid_size_parent_copy1

0xa7a9,	// (0x00059268) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa7a9,	// (0x00059268) button_value_adjust_pane_cp6_copy1

0x4f91,	// (0x00053a50) list_highlight_pane_cp2_copy1_ParamLimits

0x4f91,	// (0x00053a50) list_highlight_pane_cp2_copy1

0xa7bd,	// (0x0005927c) list_set_pane_copy1_ParamLimits

0xa7bd,	// (0x0005927c) list_set_pane_copy1

0xa72c,	// (0x000591eb) main_pane_set_t1_copy1_ParamLimits

0xa72c,	// (0x000591eb) main_pane_set_t1_copy1

0xa766,	// (0x00059225) main_pane_set_t2_copy1_ParamLimits

0xa766,	// (0x00059225) main_pane_set_t2_copy1

0xa86a,	// (0x00059329) main_pane_set_t3_copy1

0xa878,	// (0x00059337) main_pane_set_t4_copy1

0xa785,	// (0x00059244) set_content_pane_g1_copy1_ParamLimits

0xa785,	// (0x00059244) set_content_pane_g1_copy1

0xa886,	// (0x00059345) setting_code_pane_copy1

0xa88e,	// (0x0005934d) setting_slider_graphic_pane_copy1

0xa88e,	// (0x0005934d) setting_slider_pane_copy1

0xa88e,	// (0x0005934d) setting_text_pane_copy1

0xa88e,	// (0x0005934d) setting_volume_pane_copy1

0xa886,	// (0x00059345) settings_code_pane_cp2_copy1

0xa896,	// (0x00059355) settings_code_pane_cp_copy1_ParamLimits

0xa896,	// (0x00059355) settings_code_pane_cp_copy1

0x2a56,	// (0x00051515) volume_set_pane_copy1

0xa8aa,	// (0x00059369) volume_set_pane_g10_copy1

0xa8b2,	// (0x00059371) volume_set_pane_g1_copy1

0xa8ba,	// (0x00059379) volume_set_pane_g2_copy1

0xa8c2,	// (0x00059381) volume_set_pane_g3_copy1

0xa8ca,	// (0x00059389) volume_set_pane_g4_copy1

0xa8d2,	// (0x00059391) volume_set_pane_g5_copy1

0xa8da,	// (0x00059399) volume_set_pane_g6_copy1

0xa8e2,	// (0x000593a1) volume_set_pane_g7_copy1

0xa8ea,	// (0x000593a9) volume_set_pane_g8_copy1

0xa8f2,	// (0x000593b1) volume_set_pane_g9_copy1

0x373c,	// (0x000521fb) bg_set_opt_pane_cp_copy1_ParamLimits

0x373c,	// (0x000521fb) bg_set_opt_pane_cp_copy1

0x2a5e,	// (0x0005151d) setting_slider_pane_t1_copy1_ParamLimits

0x2a5e,	// (0x0005151d) setting_slider_pane_t1_copy1

0x2a7c,	// (0x0005153b) setting_slider_pane_t2_copy1_ParamLimits

0x2a7c,	// (0x0005153b) setting_slider_pane_t2_copy1

0x2a96,	// (0x00051555) setting_slider_pane_t3_copy1_ParamLimits

0x2a96,	// (0x00051555) setting_slider_pane_t3_copy1

0x2aae,	// (0x0005156d) slider_set_pane_copy1_ParamLimits

0x2aae,	// (0x0005156d) slider_set_pane_copy1

0x4003,	// (0x00052ac2) set_opt_bg_pane_g1_copy2

0x400b,	// (0x00052aca) set_opt_bg_pane_g2_copy2

0xa8fa,	// (0x000593b9) set_opt_bg_pane_g3_copy2

0x401b,	// (0x00052ada) set_opt_bg_pane_g4_copy2

0x4023,	// (0x00052ae2) set_opt_bg_pane_g5_copy2

0x402b,	// (0x00052aea) set_opt_bg_pane_g6_copy2

0xa904,	// (0x000593c3) set_opt_bg_pane_g7_copy2

0xa90c,	// (0x000593cb) set_opt_bg_pane_g8_copy2

0xa916,	// (0x000593d5) set_opt_bg_pane_g9_copy2

0x2ac4,	// (0x00051583) aid_size_touch_slider_mark_copy1_ParamLimits

0x2ac4,	// (0x00051583) aid_size_touch_slider_mark_copy1

0xa920,	// (0x000593df) slider_set_pane_g1_copy1

0x2ad8,	// (0x00051597) slider_set_pane_g2_copy1

0x1af2,	// (0x000505b1) slider_set_pane_g3_copy1_ParamLimits

0x1af2,	// (0x000505b1) slider_set_pane_g3_copy1

0x1b06,	// (0x000505c5) slider_set_pane_g4_copy1_ParamLimits

0x1b06,	// (0x000505c5) slider_set_pane_g4_copy1

0x1b1e,	// (0x000505dd) slider_set_pane_g5_copy1_ParamLimits

0x1b1e,	// (0x000505dd) slider_set_pane_g5_copy1

0x1af2,	// (0x000505b1) slider_set_pane_g6_copy1_ParamLimits

0x1af2,	// (0x000505b1) slider_set_pane_g6_copy1

0x2ae0,	// (0x0005159f) slider_set_pane_g7_copy1_ParamLimits

0x2ae0,	// (0x0005159f) slider_set_pane_g7_copy1

0x365c,	// (0x0005211b) bg_set_opt_pane_cp2_copy1

0xa929,	// (0x000593e8) setting_slider_graphic_pane_g1_copy1

0xa932,	// (0x000593f1) setting_slider_graphic_pane_t1_copy1

0xa942,	// (0x00059401) setting_slider_graphic_pane_t2_copy1

0xa952,	// (0x00059411) slider_set_pane_cp_copy1

0xa962,	// (0x00059421) input_focus_pane_cp1_copy1

0xa96b,	// (0x0005942a) list_set_text_pane_copy1

0xa973,	// (0x00059432) setting_text_pane_g1_copy1

0x360a,	// (0x000520c9) set_text_pane_t1_copy1

0xa962,	// (0x00059421) input_focus_pane_cp2_copy1

0xa973,	// (0x00059432) setting_code_pane_g1_copy1

0xa97c,	// (0x0005943b) setting_code_pane_t1_copy1

0xa98a,	// (0x00059449) list_set_graphic_pane_copy1

0x365c,	// (0x0005211b) bg_set_opt_pane_cp4_copy1

0x493d,	// (0x000533fc) list_set_graphic_pane_g1_copy1_ParamLimits

0x493d,	// (0x000533fc) list_set_graphic_pane_g1_copy1

0xa99d,	// (0x0005945c) list_set_graphic_pane_g2_copy1

0x4955,	// (0x00053414) list_set_graphic_pane_t1_copy1_ParamLimits

0x4955,	// (0x00053414) list_set_graphic_pane_t1_copy1

0x7a44,	// (0x00056503) rs_clock_indi_pane_g1

0xa9a5,	// (0x00059464) rs_clock_indi_pane_t1

0xa9b3,	// (0x00059472) rs_indi_pane

0xa9bb,	// (0x0005947a) rs_indi_pane_g1

0xa9c4,	// (0x00059483) rs_indi_pane_g2

0xa9cd,	// (0x0005948c) rs_indi_pane_g3

0x0002,

0xfec3,	// (0x0005e982) rs_indi_pane_g

0x4c42,	// (0x00053701) bg_popup_preview_window_pane_cp03

0xa9d6,	// (0x00059495) popup_fep_tooltip_window_t1

0x86cc,	// (0x0005718b) popup_note2_window_g2_ParamLimits

0x86cc,	// (0x0005718b) popup_note2_window_g2

0x0001,

0xfc5c,	// (0x0005e71b) popup_note2_window_g_ParamLimits

0xfc5c,	// (0x0005e71b) popup_note2_window_g

0x8bc7,	// (0x00057686) bg_popup_sub_pane_cp11_ParamLimits

0x8bd4,	// (0x00057693) cell_ai3_links_pane_g1_ParamLimits

0x8beb,	// (0x000576aa) cell_ai3_links_pane_t1

0x360a,	// (0x000520c9) set_text_pane_t1_copy1_ParamLimits

0x4b53,	// (0x00053612) cell_graphic_popup_pane_cp2_ParamLimits

0x4b53,	// (0x00053612) cell_graphic_popup_pane_cp2

0xa9e4,	// (0x000594a3) cell_graphic_popup_pane_g1_cp2

0x3cf6,	// (0x000527b5) cell_graphic_popup_pane_g2_cp2

0xa9ec,	// (0x000594ab) cell_graphic_popup_pane_g3_cp2

0xa9f4,	// (0x000594b3) cell_graphic_popup_pane_t2_cp2

0x3d07,	// (0x000527c6) grid_highlight_pane_cp3_cp2

0x4348,	// (0x00052e07) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3fb7,	// (0x00052a76) main_tmo_pane_ParamLimits

0xe74b,	// (0x0005d20a) popup_tmo_big_image_note_window

0xa0b7,	// (0x00058b76) cell_ai5_widget_list_pane

0xa0bf,	// (0x00058b7e) cell_ai5_widget_lrg_icon_pane

0xf3f4,	// (0x0005deb3) tmo_note_info_pane_t1_ParamLimits

0xf409,	// (0x0005dec8) tmo_note_info_pane_t2_ParamLimits

0xf420,	// (0x0005dedf) tmo_note_info_pane_t3_ParamLimits

0xa661,	// (0x00059120) tmo_note_info_pane_t4_ParamLimits

0xa673,	// (0x00059132) tmo_note_info_pane_t5_ParamLimits

0xfeb1,	// (0x0005e970) tmo_note_info_pane_t_ParamLimits

0xa791,	// (0x00059250) settings_container_pane_ParamLimits

0xa95a,	// (0x00059419) indicator_popup_pane_cp5

0xa95a,	// (0x00059419) indicator_popup_pane_cp6

0xa98a,	// (0x00059449) list_set_graphic_pane_copy1_ParamLimits

0x3648,	// (0x00052107) bg_popup_window_pane_cp23

0xaa02,	// (0x000594c1) popup_tmo_big_image_note_window_g1

0xaa0c,	// (0x000594cb) popup_tmo_big_image_note_window_t1

0xaa1c,	// (0x000594db) popup_tmo_big_image_note_window_t2

0xaa2c,	// (0x000594eb) popup_tmo_big_image_note_window_t3

0x0002,

0xfeca,	// (0x0005e989) popup_tmo_big_image_note_window_t

0x7a44,	// (0x00056503) cell_ai5_widget_lrg_icon_pane_g1

0xaa3c,	// (0x000594fb) cell_ai5_widget_lrg_icon_pane_t1

0xaa4a,	// (0x00059509) cell_ai5_widget_list_row_pane_ParamLimits

0xaa4a,	// (0x00059509) cell_ai5_widget_list_row_pane

0xaa61,	// (0x00059520) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xaa61,	// (0x00059520) cell_ai5_widget_list_row_pane_g1

0xaa6e,	// (0x0005952d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xaa6e,	// (0x0005952d) cell_ai5_widget_list_row_pane_t1

0xaa9f,	// (0x0005955e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xaa9f,	// (0x0005955e) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed1,	// (0x0005e990) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed1,	// (0x0005e990) cell_ai5_widget_list_row_pane_t

0x0158,	// (0x0004ec17) main_fep_vtchi_ss_pane

0xaae3,	// (0x000595a2) popup_fep_char_pre_window

0xaaeb,	// (0x000595aa) popup_fep_ituss_window

0xf435,	// (0x0005def4) popup_fep_vkbss_window

0xf442,	// (0x0005df01) grid_vkbss_keypad_pane_ParamLimits

0xf442,	// (0x0005df01) grid_vkbss_keypad_pane

0xab46,	// (0x00059605) ituss_keypad_pane

0x2b02,	// (0x000515c1) aid_vkbss_key_offset_ParamLimits

0x2b02,	// (0x000515c1) aid_vkbss_key_offset

0xcf33,	// (0x0005b9f2) cell_vkbss_key_pane_ParamLimits

0xcf33,	// (0x0005b9f2) cell_vkbss_key_pane

0xab55,	// (0x00059614) bg_cell_vkbss_key_g1_ParamLimits

0xab55,	// (0x00059614) bg_cell_vkbss_key_g1

0xf452,	// (0x0005df11) cell_vkbss_key_3p_pane_ParamLimits

0xf452,	// (0x0005df11) cell_vkbss_key_3p_pane

0xf46c,	// (0x0005df2b) cell_vkbss_key_g1_ParamLimits

0xf46c,	// (0x0005df2b) cell_vkbss_key_g1

0xf486,	// (0x0005df45) cell_vkbss_key_t1_ParamLimits

0xf486,	// (0x0005df45) cell_vkbss_key_t1

0x2b24,	// (0x000515e3) cell_ituss_key_pane_ParamLimits

0x2b24,	// (0x000515e3) cell_ituss_key_pane

0xabb4,	// (0x00059673) bg_cell_ituss_key_g1_ParamLimits

0xabb4,	// (0x00059673) bg_cell_ituss_key_g1

0xabc0,	// (0x0005967f) cell_ituss_key_pane_g1_ParamLimits

0xabc0,	// (0x0005967f) cell_ituss_key_pane_g1

0x2b35,	// (0x000515f4) cell_ituss_key_pane_g2_ParamLimits

0x2b35,	// (0x000515f4) cell_ituss_key_pane_g2

0x0002,

0xfed8,	// (0x0005e997) cell_ituss_key_pane_g_ParamLimits

0xfed8,	// (0x0005e997) cell_ituss_key_pane_g

0x2b61,	// (0x00051620) cell_ituss_key_t1_ParamLimits

0x2b61,	// (0x00051620) cell_ituss_key_t1

0x2b9b,	// (0x0005165a) cell_ituss_key_t2_ParamLimits

0x2b9b,	// (0x0005165a) cell_ituss_key_t2

0x2bcc,	// (0x0005168b) cell_ituss_key_t3_ParamLimits

0x2bcc,	// (0x0005168b) cell_ituss_key_t3

0x2b9b,	// (0x0005165a) cell_ituss_key_t4_ParamLimits

0x2b9b,	// (0x0005165a) cell_ituss_key_t4

0x0004,

0xfedf,	// (0x0005e99e) cell_ituss_key_t_ParamLimits

0xfedf,	// (0x0005e99e) cell_ituss_key_t

0xabec,	// (0x000596ab) cell_vkbss_key_3p_pane_g1

0xabf4,	// (0x000596b3) cell_vkbss_key_3p_pane_g2

0xabfc,	// (0x000596bb) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeea,	// (0x0005e9a9) cell_vkbss_key_3p_pane_g

0x0158,	// (0x0004ec17) bg_popup_fep_char_preview_window_cp02

0x2c0f,	// (0x000516ce) popup_fep_char_pre_window_t1

0xf338,	// (0x0005ddf7) main_ai5_sk_pane

0xa6ed,	// (0x000591ac) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa6f9,	// (0x000591b8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x80ee,	// (0x00056bad) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa70e,	// (0x000591cd) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebc,	// (0x0005e97b) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa71a,	// (0x000591d9) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3fb7,	// (0x00052a76) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf4b1,	// (0x0005df70) main_ai5_sk_pane_g1

0x595b,	// (0x0005441a) popup_query_code_window_g1

0xab01,	// (0x000595c0) popup_fep_vkb_icf_pane

0xab20,	// (0x000595df) popup_fep_vtchi_icf_pane

0xac0d,	// (0x000596cc) bg_icf_pane

0xac19,	// (0x000596d8) list_vkb_icf_pane

0xac28,	// (0x000596e7) bg_icf_pane_cp01

0xac3b,	// (0x000596fa) vtchi_icf_list_pane

0xac4b,	// (0x0005970a) list_vkb_icf_pane_t1_ParamLimits

0xac4b,	// (0x0005970a) list_vkb_icf_pane_t1

0xac61,	// (0x00059720) vtchi_icf_list_pane_t1_ParamLimits

0xac61,	// (0x00059720) vtchi_icf_list_pane_t1

0xaaeb,	// (0x000595aa) popup_fep_ituss_window_ParamLimits

0xab20,	// (0x000595df) popup_fep_vtchi_icf_pane_ParamLimits

0xab46,	// (0x00059605) ituss_keypad_pane_ParamLimits

0x2af6,	// (0x000515b5) ituss_sks_pane

0xac0d,	// (0x000596cc) bg_icf_pane_ParamLimits

0xaac7,	// (0x00059586) icf_edit_indi_pane_ParamLimits

0xaac7,	// (0x00059586) icf_edit_indi_pane

0xac19,	// (0x000596d8) list_vkb_icf_pane_ParamLimits

0xac28,	// (0x000596e7) bg_icf_pane_cp01_ParamLimits

0xaad6,	// (0x00059595) icf_edit_indi_pane_cp01_ParamLimits

0xaad6,	// (0x00059595) icf_edit_indi_pane_cp01

0xac43,	// (0x00059702) vtchi_query_pane

0x7cc2,	// (0x00056781) icf_edit_indi_pane_g1_ParamLimits

0x7cc2,	// (0x00056781) icf_edit_indi_pane_g1

0xacd2,	// (0x00059791) icf_edit_indi_pane_g2_ParamLimits

0xacd2,	// (0x00059791) icf_edit_indi_pane_g2

0x0001,

0xff02,	// (0x0005e9c1) icf_edit_indi_pane_g_ParamLimits

0xff02,	// (0x0005e9c1) icf_edit_indi_pane_g

0xace1,	// (0x000597a0) icf_edit_indi_pane_t1

0xac7b,	// (0x0005973a) bg_input_focus_pane_cp042

0x3eda,	// (0x00052999) vtchi_button_pane

0xac84,	// (0x00059743) vtchi_query_pane_t1

0xac92,	// (0x00059751) vtchi_query_pane_t2

0xaca0,	// (0x0005975f) vtchi_query_pane_t3

0x0002,

0xfef1,	// (0x0005e9b0) vtchi_query_pane_t

0x0158,	// (0x0004ec17) bg_button_pane_cp13

0xacae,	// (0x0005976d) vtchi_button_pane_g1

0x2c1e,	// (0x000516dd) ituss_sks_pane_g1

0x2c29,	// (0x000516e8) ituss_sks_pane_g2

0x0001,

0xfef8,	// (0x0005e9b7) ituss_sks_pane_g

0xacb6,	// (0x00059775) ituss_sks_pane_t1

0xacc4,	// (0x00059783) ituss_sks_pane_t2

0x0001,

0xfefd,	// (0x0005e9bc) ituss_sks_pane_t

0x74cf,	// (0x00055f8e) indicator_nsta_pane_cp_g1

0x74d7,	// (0x00055f96) indicator_nsta_pane_cp_g2

0x74df,	// (0x00055f9e) indicator_nsta_pane_cp_g3

0x74cf,	// (0x00055f8e) indicator_nsta_pane_cp_g4

0x74d7,	// (0x00055f96) indicator_nsta_pane_cp_g5

0x74df,	// (0x00055f9e) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x0005e559) indicator_nsta_pane_cp_g

0xf150,	// (0x0005dc0f) cell_graphic2_pane_t2_ParamLimits

0xf150,	// (0x0005dc0f) cell_graphic2_pane_t2

0x0001,

0xfdb3,	// (0x0005e872) cell_graphic2_pane_t_ParamLimits

0xfdb3,	// (0x0005e872) cell_graphic2_pane_t

0xf184,	// (0x0005dc43) cell_graphic2_control_pane_t1

0xd497,	// (0x0005bf56) signal_pane_g3_ParamLimits

0xd497,	// (0x0005bf56) signal_pane_g3

0xd4ab,	// (0x0005bf6a) signal_pane_g4_ParamLimits

0xd4ab,	// (0x0005bf6a) signal_pane_g4

0xaab1,	// (0x00059570) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xaab1,	// (0x00059570) cell_ai5_widget_list_row_pane_t3

0xabda,	// (0x00059699) cell_ituss_key_pane_t1_ParamLimits

0xabda,	// (0x00059699) cell_ituss_key_pane_t1

0x55ac,	// (0x0005406b) form_field_data_wide_pane_vc_t2_ParamLimits

0x55ac,	// (0x0005406b) form_field_data_wide_pane_vc_t2

0x55c0,	// (0x0005407f) form_field_data_wide_pane_vc_t3_ParamLimits

0x55c0,	// (0x0005407f) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0005e2c8) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0005e2c8) form_field_data_wide_pane_vc_t

0x7197,	// (0x00055c56) form_field_slider_wide_pane_vc_t3_ParamLimits

0x7197,	// (0x00055c56) form_field_slider_wide_pane_vc_t3

0x7275,	// (0x00055d34) form_field_popup_wide_pane_vc_t2_ParamLimits

0x7275,	// (0x00055d34) form_field_popup_wide_pane_vc_t2

0x728c,	// (0x00055d4b) form_field_popup_wide_pane_vc_t3_ParamLimits

0x728c,	// (0x00055d4b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x0005e548) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0005e548) form_field_popup_wide_pane_vc_t

0xcdd5,	// (0x0005b894) aid_fshwr2_btn_pane_ParamLimits

0xcde6,	// (0x0005b8a5) aid_fshwr2_syb_pane_ParamLimits

0xcdf7,	// (0x0005b8b6) aid_fshwr2_txt_pane_ParamLimits

0x2162,	// (0x00050c21) fshwr2_bg_pane_ParamLimits

0xce03,	// (0x0005b8c2) fshwr2_func_candi_pane_ParamLimits

0xce22,	// (0x0005b8e1) fshwr2_hwr_syb_pane_ParamLimits

0xce3d,	// (0x0005b8fc) fshwr2_icf_pane_ParamLimits

0x31ff,	// (0x00051cbe) list_double_graphic_pane_vc_g4_ParamLimits

0x31ff,	// (0x00051cbe) list_double_graphic_pane_vc_g4

0x2b55,	// (0x00051614) cell_ituss_key_pane_g3_ParamLimits

0x2b55,	// (0x00051614) cell_ituss_key_pane_g3

0x2bfd,	// (0x000516bc) cell_ituss_key_t5_ParamLimits

0x2bfd,	// (0x000516bc) cell_ituss_key_t5

0xf435,	// (0x0005def4) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large

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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00037857 };

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
0x768f,	// (0x0003eee6) Screen

0x769b,	// (0x0003eef2) application_window_ParamLimits

0x769b,	// (0x0003eef2) application_window

0x8b2e,	// (0x00040385) screen_g1

0x76d3,	// (0x0003ef2a) area_bottom_pane_ParamLimits

0x76d3,	// (0x0003ef2a) area_bottom_pane

0x11bb,	// (0x00038a12) area_top_pane_ParamLimits

0x11bb,	// (0x00038a12) area_top_pane

0x124f,	// (0x00038aa6) main_pane_ParamLimits

0x124f,	// (0x00038aa6) main_pane

0x8b38,	// (0x0004038f) misc_graphics

0x9181,	// (0x000409d8) battery_pane_ParamLimits

0x9181,	// (0x000409d8) battery_pane

0xcbad,	// (0x00044404) bg_status_flat_pane_g8

0xcbb5,	// (0x0004440c) bg_status_flat_pane_g9

0xc29f,	// (0x00043af6) context_pane_ParamLimits

0xc29f,	// (0x00043af6) context_pane

0x92ec,	// (0x00040b43) navi_pane_ParamLimits

0x92ec,	// (0x00040b43) navi_pane

0x9364,	// (0x00040bbb) signal_pane_ParamLimits

0x9364,	// (0x00040bbb) signal_pane

0x0008,

0xf883,	// (0x000470da) bg_status_flat_pane_g

0x93f4,	// (0x00040c4b) status_pane_g1_ParamLimits

0x93f4,	// (0x00040c4b) status_pane_g1

0x940a,	// (0x00040c61) status_pane_g2_ParamLimits

0x940a,	// (0x00040c61) status_pane_g2

0xc304,	// (0x00043b5b) status_pane_g3_ParamLimits

0xc304,	// (0x00043b5b) status_pane_g3

0x0004,

0xf7bd,	// (0x00047014) status_pane_g_ParamLimits

0xf7bd,	// (0x00047014) status_pane_g

0x9416,	// (0x00040c6d) title_pane_ParamLimits

0x9416,	// (0x00040c6d) title_pane

0x9479,	// (0x00040cd0) uni_indicator_pane_ParamLimits

0x9479,	// (0x00040cd0) uni_indicator_pane

0xc0ca,	// (0x00043921) bg_list_pane_ParamLimits

0xc0ca,	// (0x00043921) bg_list_pane

0x80e1,	// (0x0003f938) find_pane

0x80e9,	// (0x0003f940) listscroll_app_pane_ParamLimits

0x80e9,	// (0x0003f940) listscroll_app_pane

0xc0ea,	// (0x00043941) listscroll_form_pane

0x80f5,	// (0x0003f94c) listscroll_gen_pane_ParamLimits

0x80f5,	// (0x0003f94c) listscroll_gen_pane

0xc0ea,	// (0x00043941) listscroll_set_pane

0xc9b0,	// (0x00044207) main_idle_act_pane

0xbe9e,	// (0x000436f5) main_idle_trad_pane

0xbe9e,	// (0x000436f5) main_list_empty_pane

0xb1d8,	// (0x00042a2f) main_midp_pane

0xc104,	// (0x0004395b) main_pane_g1_ParamLimits

0xc104,	// (0x0004395b) main_pane_g1

0x8117,	// (0x0003f96e) popup_ai_message_window_ParamLimits

0x8117,	// (0x0003f96e) popup_ai_message_window

0x81a8,	// (0x0003f9ff) popup_fep_china_uni_window_ParamLimits

0x81a8,	// (0x0003f9ff) popup_fep_china_uni_window

0xc13a,	// (0x00043991) popup_fep_japan_candidate_window_ParamLimits

0xc13a,	// (0x00043991) popup_fep_japan_candidate_window

0xc15a,	// (0x000439b1) popup_fep_japan_predictive_window_ParamLimits

0xc15a,	// (0x000439b1) popup_fep_japan_predictive_window

0x8204,	// (0x0003fa5b) popup_find_window

0x8221,	// (0x0003fa78) popup_grid_graphic_window_ParamLimits

0x8221,	// (0x0003fa78) popup_grid_graphic_window

0xc18a,	// (0x000439e1) popup_large_graphic_colour_window

0x82b9,	// (0x0003fb10) popup_menu_window_ParamLimits

0x82b9,	// (0x0003fb10) popup_menu_window

0x8dda,	// (0x00040631) popup_note_image_window

0x8da0,	// (0x000405f7) popup_note_wait_window_ParamLimits

0x8da0,	// (0x000405f7) popup_note_wait_window

0x8df2,	// (0x00040649) popup_note_window_ParamLimits

0x8df2,	// (0x00040649) popup_note_window

0x8e98,	// (0x000406ef) popup_query_code_window_ParamLimits

0x8e98,	// (0x000406ef) popup_query_code_window

0xc1b0,	// (0x00043a07) popup_query_data_code_window_ParamLimits

0xc1b0,	// (0x00043a07) popup_query_data_code_window

0x8ed2,	// (0x00040729) popup_query_data_window_ParamLimits

0x8ed2,	// (0x00040729) popup_query_data_window

0x8f48,	// (0x0004079f) popup_query_sat_info_window_ParamLimits

0x8f48,	// (0x0004079f) popup_query_sat_info_window

0x8fdf,	// (0x00040836) popup_snote_single_graphic_window_ParamLimits

0x8fdf,	// (0x00040836) popup_snote_single_graphic_window

0x8fdf,	// (0x00040836) popup_snote_single_text_window_ParamLimits

0x8fdf,	// (0x00040836) popup_snote_single_text_window

0xc1cd,	// (0x00043a24) popup_sub_window_general

0xc215,	// (0x00043a6c) popup_window_general_ParamLimits

0xc215,	// (0x00043a6c) popup_window_general

0xc22a,	// (0x00043a81) power_save_pane

0x7f4d,	// (0x0003f7a4) control_pane_g1_ParamLimits

0x7f4d,	// (0x0003f7a4) control_pane_g1

0x7f76,	// (0x0003f7cd) control_pane_g2_ParamLimits

0x7f76,	// (0x0003f7cd) control_pane_g2

0xc0ac,	// (0x00043903) control_pane_g3_ParamLimits

0xc0ac,	// (0x00043903) control_pane_g3

0x0007,

0xf7a5,	// (0x00046ffc) control_pane_g_ParamLimits

0xf7a5,	// (0x00046ffc) control_pane_g

0x7fda,	// (0x0003f831) control_pane_t1_ParamLimits

0x7fda,	// (0x0003f831) control_pane_t1

0x8038,	// (0x0003f88f) control_pane_t2_ParamLimits

0x8038,	// (0x0003f88f) control_pane_t2

0x0002,

0xf7b6,	// (0x0004700d) control_pane_t_ParamLimits

0xf7b6,	// (0x0004700d) control_pane_t

0xbfcd,	// (0x00043824) navi_navi_volume_pane_cp1

0xbfd6,	// (0x0004382d) status_small_icon_pane

0xbfde,	// (0x00043835) status_small_pane_g1_ParamLimits

0xbfde,	// (0x00043835) status_small_pane_g1

0xc012,	// (0x00043869) status_small_pane_g2_ParamLimits

0xc012,	// (0x00043869) status_small_pane_g2

0xc01e,	// (0x00043875) status_small_pane_g3_ParamLimits

0xc01e,	// (0x00043875) status_small_pane_g3

0xc02a,	// (0x00043881) status_small_pane_g4_ParamLimits

0xc02a,	// (0x00043881) status_small_pane_g4

0xc036,	// (0x0004388d) status_small_pane_g5_ParamLimits

0xc036,	// (0x0004388d) status_small_pane_g5

0xc045,	// (0x0004389c) status_small_pane_g6_ParamLimits

0xc045,	// (0x0004389c) status_small_pane_g6

0x0007,

0xf794,	// (0x00046feb) status_small_pane_g_ParamLimits

0xf794,	// (0x00046feb) status_small_pane_g

0xc075,	// (0x000438cc) status_small_pane_t1

0xc098,	// (0x000438ef) status_small_wait_pane_ParamLimits

0xc098,	// (0x000438ef) status_small_wait_pane

0x7dad,	// (0x0003f604) aid_levels_signal_ParamLimits

0x7dad,	// (0x0003f604) aid_levels_signal

0x7dc5,	// (0x0003f61c) signal_pane_g1_ParamLimits

0x7dc5,	// (0x0003f61c) signal_pane_g1

0x7de0,	// (0x0003f637) signal_pane_g2_ParamLimits

0x7de0,	// (0x0003f637) signal_pane_g2

0x0003,

0xf725,	// (0x00046f7c) signal_pane_g_ParamLimits

0xf725,	// (0x00046f7c) signal_pane_g

0xb8f9,	// (0x00043150) context_pane_g1

0x784c,	// (0x0003f0a3) title_pane_g1

0x7883,	// (0x0003f0da) title_pane_t1

0x8b4e,	// (0x000403a5) title_pane_t2

0x8b74,	// (0x000403cb) title_pane_t3

0x0002,

0xf56f,	// (0x00046dc6) title_pane_t

0x94a1,	// (0x00040cf8) aid_levels_battery_ParamLimits

0x94a1,	// (0x00040cf8) aid_levels_battery

0x94bd,	// (0x00040d14) battery_pane_g1_ParamLimits

0x94bd,	// (0x00040d14) battery_pane_g1

0x94da,	// (0x00040d31) battery_pane_g2_ParamLimits

0x94da,	// (0x00040d31) battery_pane_g2

0x0001,

0xf7c8,	// (0x0004701f) battery_pane_g_ParamLimits

0xf7c8,	// (0x0004701f) battery_pane_g

0xd434,	// (0x00044c8b) uni_indicator_pane_g1

0xd449,	// (0x00044ca0) uni_indicator_pane_g2

0xd45f,	// (0x00044cb6) uni_indicator_pane_g3

0x0005,

0xf92b,	// (0x00047182) uni_indicator_pane_g

0xbd1c,	// (0x00043573) navi_icon_pane_ParamLimits

0xbd1c,	// (0x00043573) navi_icon_pane

0xbc65,	// (0x000434bc) navi_midp_pane

0xbd38,	// (0x0004358f) navi_navi_pane

0xbd42,	// (0x00043599) navi_text_pane_ParamLimits

0xbd42,	// (0x00043599) navi_text_pane

0x8b2e,	// (0x00040385) status_small_wait_pane_g1

0x96d1,	// (0x00040f28) status_small_wait_pane_g2

0x0001,

0xf926,	// (0x0004717d) status_small_wait_pane_g

0xd180,	// (0x000449d7) navi_navi_icon_text_pane

0xd188,	// (0x000449df) navi_navi_pane_g1_ParamLimits

0xd188,	// (0x000449df) navi_navi_pane_g1

0xd19a,	// (0x000449f1) navi_navi_pane_g2_ParamLimits

0xd19a,	// (0x000449f1) navi_navi_pane_g2

0x0001,

0xf8f4,	// (0x0004714b) navi_navi_pane_g_ParamLimits

0xf8f4,	// (0x0004714b) navi_navi_pane_g

0xd1ac,	// (0x00044a03) navi_navi_tabs_pane

0xd1b5,	// (0x00044a0c) navi_navi_text_pane

0xd180,	// (0x000449d7) navi_navi_volume_pane

0xd15c,	// (0x000449b3) navi_text_pane_t1

0xd150,	// (0x000449a7) navi_icon_pane_g1

0xd0a3,	// (0x000448fa) navi_navi_text_pane_t1

0x85e5,	// (0x0003fe3c) navi_navi_volume_pane_g1

0x85ed,	// (0x0003fe44) volume_small_pane

0x99b2,	// (0x00041209) navi_navi_icon_text_pane_g1

0x99ba,	// (0x00041211) navi_navi_icon_text_pane_t1

0xbd38,	// (0x0004358f) navi_tabs_2_long_pane

0xbd38,	// (0x0004358f) navi_tabs_2_pane

0xbd38,	// (0x0004358f) navi_tabs_3_long_pane

0xbd38,	// (0x0004358f) navi_tabs_3_pane

0xbd38,	// (0x0004358f) navi_tabs_4_pane

0x85c5,	// (0x0003fe1c) tabs_2_active_pane_ParamLimits

0x85c5,	// (0x0003fe1c) tabs_2_active_pane

0x85d5,	// (0x0003fe2c) tabs_2_passive_pane_ParamLimits

0x85d5,	// (0x0003fe2c) tabs_2_passive_pane

0x8593,	// (0x0003fdea) tabs_3_active_pane_ParamLimits

0x8593,	// (0x0003fdea) tabs_3_active_pane

0x85a3,	// (0x0003fdfa) tabs_3_passive_pane_ParamLimits

0x85a3,	// (0x0003fdfa) tabs_3_passive_pane

0x85b4,	// (0x0003fe0b) tabs_3_passive_pane_cp_ParamLimits

0x85b4,	// (0x0003fe0b) tabs_3_passive_pane_cp

0x854f,	// (0x0003fda6) tabs_4_active_pane_ParamLimits

0x854f,	// (0x0003fda6) tabs_4_active_pane

0x8560,	// (0x0003fdb7) tabs_4_passive_pane_ParamLimits

0x8560,	// (0x0003fdb7) tabs_4_passive_pane

0x8571,	// (0x0003fdc8) tabs_4_passive_pane_cp_ParamLimits

0x8571,	// (0x0003fdc8) tabs_4_passive_pane_cp

0x8582,	// (0x0003fdd9) tabs_4_passive_pane_cp2_ParamLimits

0x8582,	// (0x0003fdd9) tabs_4_passive_pane_cp2

0x852f,	// (0x0003fd86) tabs_2_long_active_pane_ParamLimits

0x852f,	// (0x0003fd86) tabs_2_long_active_pane

0x853f,	// (0x0003fd96) tabs_2_long_passive_pane_ParamLimits

0x853f,	// (0x0003fd96) tabs_2_long_passive_pane

0x84fc,	// (0x0003fd53) tabs_3_long_active_pane_ParamLimits

0x84fc,	// (0x0003fd53) tabs_3_long_active_pane

0x850d,	// (0x0003fd64) tabs_3_long_passive_pane_ParamLimits

0x850d,	// (0x0003fd64) tabs_3_long_passive_pane

0x851e,	// (0x0003fd75) tabs_3_long_passive_pane_cp_ParamLimits

0x851e,	// (0x0003fd75) tabs_3_long_passive_pane_cp

0x22c2,	// (0x00039b19) volume_small_pane_g1

0x84ab,	// (0x0003fd02) volume_small_pane_g2

0x84b4,	// (0x0003fd0b) volume_small_pane_g3

0x84bd,	// (0x0003fd14) volume_small_pane_g4

0x84c6,	// (0x0003fd1d) volume_small_pane_g5

0x84cf,	// (0x0003fd26) volume_small_pane_g6

0x84d8,	// (0x0003fd2f) volume_small_pane_g7

0x84e1,	// (0x0003fd38) volume_small_pane_g8

0x84ea,	// (0x0003fd41) volume_small_pane_g9

0x84f3,	// (0x0003fd4a) volume_small_pane_g10

0x0009,

0xf8c0,	// (0x00047117) volume_small_pane_g

0x8b86,	// (0x000403dd) bg_active_tab_pane_cp2_ParamLimits

0x8b86,	// (0x000403dd) bg_active_tab_pane_cp2

0x790f,	// (0x0003f166) tabs_3_active_pane_g1

0x7917,	// (0x0003f16e) tabs_3_active_pane_t1

0x8b86,	// (0x000403dd) bg_passive_tab_pane_cp2_ParamLimits

0x8b86,	// (0x000403dd) bg_passive_tab_pane_cp2

0x790f,	// (0x0003f166) tabs_3_passive_pane_g1

0x7917,	// (0x0003f16e) tabs_3_passive_pane_t1

0x8b86,	// (0x000403dd) bg_active_tab_pane_cp3_ParamLimits

0x8b86,	// (0x000403dd) bg_active_tab_pane_cp3

0x7929,	// (0x0003f180) tabs_4_active_pane_g1

0x7931,	// (0x0003f188) tabs_4_active_pane_t1

0x8b86,	// (0x000403dd) bg_passive_tab_pane_cp3_ParamLimits

0x8b86,	// (0x000403dd) bg_passive_tab_pane_cp3

0x7929,	// (0x0003f180) tabs_4_1_passive_pane_g1

0x7931,	// (0x0003f188) tabs_4_1_passive_pane_t1

0xb1d8,	// (0x00042a2f) list_highlight_pane_cp2

0x9af6,	// (0x0004134d) list_set_pane_ParamLimits

0x9af6,	// (0x0004134d) list_set_pane

0x9b90,	// (0x000413e7) main_pane_set_t1_ParamLimits

0x9b90,	// (0x000413e7) main_pane_set_t1

0x9bb0,	// (0x00041407) main_pane_set_t2_ParamLimits

0x9bb0,	// (0x00041407) main_pane_set_t2

0x9bc4,	// (0x0004141b) main_pane_set_t3_ParamLimits

0x9bc4,	// (0x0004141b) main_pane_set_t3

0x9bd6,	// (0x0004142d) main_pane_set_t4_ParamLimits

0x9bd6,	// (0x0004142d) main_pane_set_t4

0x0003,

0xf990,	// (0x000471e7) main_pane_set_t_ParamLimits

0xf990,	// (0x000471e7) main_pane_set_t

0x9be8,	// (0x0004143f) setting_code_pane

0x9bf2,	// (0x00041449) setting_slider_graphic_pane

0x9bf2,	// (0x00041449) setting_slider_pane

0x9bf2,	// (0x00041449) setting_text_pane

0x9bf2,	// (0x00041449) setting_volume_pane

0x155a,	// (0x00038db1) volume_set_pane

0x8b94,	// (0x000403eb) bg_set_opt_pane_cp

0x1562,	// (0x00038db9) setting_slider_pane_t1

0x157b,	// (0x00038dd2) setting_slider_pane_t2

0x1595,	// (0x00038dec) setting_slider_pane_t3

0x0002,

0xf576,	// (0x00046dcd) setting_slider_pane_t

0x15ad,	// (0x00038e04) slider_set_pane

0x8b38,	// (0x0004038f) bg_set_opt_pane_cp2

0x8ba2,	// (0x000403f9) setting_slider_graphic_pane_g1

0x15c3,	// (0x00038e1a) setting_slider_graphic_pane_t1

0x15d3,	// (0x00038e2a) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x00046dd4) setting_slider_graphic_pane_t

0x15e3,	// (0x00038e3a) slider_set_pane_cp

0x8b38,	// (0x0004038f) input_focus_pane_cp1

0xd642,	// (0x00044e99) list_set_text_pane

0x8b2e,	// (0x00040385) setting_text_pane_g1

0x8b38,	// (0x0004038f) input_focus_pane_cp2

0x8b2e,	// (0x00040385) setting_code_pane_g1

0x8bab,	// (0x00040402) setting_code_pane_t1

0x02bc,	// (0x00037b13) set_text_pane_t1_ParamLimits

0x02bc,	// (0x00037b13) set_text_pane_t1

0xb0e7,	// (0x0004293e) set_opt_bg_pane_g1

0xb0ef,	// (0x00042946) set_opt_bg_pane_g2

0xd61c,	// (0x00044e73) set_opt_bg_pane_g3

0xb0ff,	// (0x00042956) set_opt_bg_pane_g4

0xb107,	// (0x0004295e) set_opt_bg_pane_g5

0xb10f,	// (0x00042966) set_opt_bg_pane_g6

0xd626,	// (0x00044e7d) set_opt_bg_pane_g7

0xd62e,	// (0x00044e85) set_opt_bg_pane_g8

0xd638,	// (0x00044e8f) set_opt_bg_pane_g9

0x0008,

0xf97d,	// (0x000471d4) set_opt_bg_pane_g

0xd60f,	// (0x00044e66) slider_set_pane_g1

0x248a,	// (0x00039ce1) slider_set_pane_g2

0x0006,

0xf96e,	// (0x000471c5) slider_set_pane_g

0x2426,	// (0x00039c7d) volume_set_pane_g1

0x242e,	// (0x00039c85) volume_set_pane_g2

0x2436,	// (0x00039c8d) volume_set_pane_g3

0x243e,	// (0x00039c95) volume_set_pane_g4

0x2446,	// (0x00039c9d) volume_set_pane_g5

0x244e,	// (0x00039ca5) volume_set_pane_g6

0x2456,	// (0x00039cad) volume_set_pane_g7

0x245e,	// (0x00039cb5) volume_set_pane_g8

0x2466,	// (0x00039cbd) volume_set_pane_g9

0x246e,	// (0x00039cc5) volume_set_pane_g10

0x0009,

0xf946,	// (0x0004719d) volume_set_pane_g

0x7943,	// (0x0003f19a) indicator_pane_ParamLimits

0x7943,	// (0x0003f19a) indicator_pane

0x796b,	// (0x0003f1c2) main_idle_pane_g2_ParamLimits

0x796b,	// (0x0003f1c2) main_idle_pane_g2

0x79a3,	// (0x0003f1fa) main_pane_idle_g1_ParamLimits

0x79a3,	// (0x0003f1fa) main_pane_idle_g1

0x8bb9,	// (0x00040410) popup_clock_digital_analogue_window_ParamLimits

0x8bb9,	// (0x00040410) popup_clock_digital_analogue_window

0x79ca,	// (0x0003f221) soft_indicator_pane_ParamLimits

0x79ca,	// (0x0003f221) soft_indicator_pane

0x79e4,	// (0x0003f23b) wallpaper_pane_ParamLimits

0x79e4,	// (0x0003f23b) wallpaper_pane

0x8b2e,	// (0x00040385) wallpaper_pane_g1

0x79f6,	// (0x0003f24d) indicator_pane_g1_ParamLimits

0x79f6,	// (0x0003f24d) indicator_pane_g1

0xd799,	// (0x00044ff0) navi_navi_icon_text_pane_srt_g1

0x8be7,	// (0x0004043e) soft_indicator_pane_t1

0x8c01,	// (0x00040458) aid_ps_area_pane

0x7a0c,	// (0x0003f263) aid_ps_clock_pane

0x8c12,	// (0x00040469) aid_ps_indicator_pane

0x8c1e,	// (0x00040475) indicator_ps_pane_ParamLimits

0x8c1e,	// (0x00040475) indicator_ps_pane

0x8c2d,	// (0x00040484) power_save_pane_g1_ParamLimits

0x8c2d,	// (0x00040484) power_save_pane_g1

0x8c39,	// (0x00040490) power_save_pane_g2_ParamLimits

0x8c39,	// (0x00040490) power_save_pane_g2

0x10af,	// (0x00038906) aid_navinavi_width_pane

0x8c01,	// (0x00040458) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x00046dd9) power_save_pane_g_ParamLimits

0xf582,	// (0x00046dd9) power_save_pane_g

0x8c47,	// (0x0004049e) power_save_pane_t1_ParamLimits

0x8c47,	// (0x0004049e) power_save_pane_t1

0x7a0c,	// (0x0003f263) aid_ps_clock_pane_ParamLimits

0x8c12,	// (0x00040469) aid_ps_indicator_pane_ParamLimits

0x8c59,	// (0x000404b0) power_save_pane_t4_ParamLimits

0x8c59,	// (0x000404b0) power_save_pane_t4

0x0001,

0xf587,	// (0x00046dde) power_save_pane_t_ParamLimits

0xf587,	// (0x00046dde) power_save_pane_t

0x8c83,	// (0x000404da) power_save_t3_ParamLimits

0x8c83,	// (0x000404da) power_save_t3

0x8c6e,	// (0x000404c5) power_save_t2_ParamLimits

0x8c6e,	// (0x000404c5) power_save_t2

0x8c98,	// (0x000404ef) indicator_ps_pane_g1

0x7a1a,	// (0x0003f271) ai_gene_pane_ParamLimits

0x7a1a,	// (0x0003f271) ai_gene_pane

0x7a31,	// (0x0003f288) ai_links_pane_ParamLimits

0x7a31,	// (0x0003f288) ai_links_pane

0x7a49,	// (0x0003f2a0) indicator_pane_cp1_ParamLimits

0x7a49,	// (0x0003f2a0) indicator_pane_cp1

0x7a58,	// (0x0003f2af) main_pane_idle_g1_cp_ParamLimits

0x7a58,	// (0x0003f2af) main_pane_idle_g1_cp

0x8ca1,	// (0x000404f8) popup_ai_links_title_window

0x7a70,	// (0x0003f2c7) soft_indicator_pane_cp1_ParamLimits

0x7a70,	// (0x0003f2c7) soft_indicator_pane_cp1

0xd422,	// (0x00044c79) ai_links_pane_g1

0xd42b,	// (0x00044c82) grid_ai_links_pane

0x9a7a,	// (0x000412d1) ai_gene_pane_1

0xd410,	// (0x00044c67) ai_gene_pane_2

0xd419,	// (0x00044c70) list_highlight_pane_cp4

0x9a56,	// (0x000412ad) cell_ai_link_pane_ParamLimits

0x9a56,	// (0x000412ad) cell_ai_link_pane

0xd408,	// (0x00044c5f) cell_ai_link_pane_g1

0x96d1,	// (0x00040f28) cell_ai_link_pane_g2

0x0001,

0xf921,	// (0x00047178) cell_ai_link_pane_g

0x8b38,	// (0x0004038f) grid_highlight_cp2

0x8b38,	// (0x0004038f) bg_popup_sub_pane_cp1

0x8cb8,	// (0x0004050f) popup_ai_links_title_window_t1

0xd356,	// (0x00044bad) ai_gene_pane_1_g1_ParamLimits

0xd356,	// (0x00044bad) ai_gene_pane_1_g1

0xd362,	// (0x00044bb9) ai_gene_pane_1_g2_ParamLimits

0xd362,	// (0x00044bb9) ai_gene_pane_1_g2

0x0001,

0xf917,	// (0x0004716e) ai_gene_pane_1_g_ParamLimits

0xf917,	// (0x0004716e) ai_gene_pane_1_g

0xd36f,	// (0x00044bc6) ai_gene_pane_1_t1_ParamLimits

0xd36f,	// (0x00044bc6) ai_gene_pane_1_t1

0xd3a3,	// (0x00044bfa) grid_ai_soft_ind_pane

0xd341,	// (0x00044b98) ai_gene_pane_2_t1_ParamLimits

0xd341,	// (0x00044b98) ai_gene_pane_2_t1

0x7a84,	// (0x0003f2db) main_pane_empty_t1_ParamLimits

0x7a84,	// (0x0003f2db) main_pane_empty_t1

0x7a9c,	// (0x0003f2f3) main_pane_empty_t2_ParamLimits

0x7a9c,	// (0x0003f2f3) main_pane_empty_t2

0x7ab1,	// (0x0003f308) main_pane_empty_t3_ParamLimits

0x7ab1,	// (0x0003f308) main_pane_empty_t3

0x7ac3,	// (0x0003f31a) main_pane_empty_t4_ParamLimits

0x7ac3,	// (0x0003f31a) main_pane_empty_t4

0x7ad5,	// (0x0003f32c) main_pane_empty_t5_ParamLimits

0x7ad5,	// (0x0003f32c) main_pane_empty_t5

0x0004,

0xf58c,	// (0x00046de3) main_pane_empty_t_ParamLimits

0xf58c,	// (0x00046de3) main_pane_empty_t

0xb138,	// (0x0004298f) bg_popup_window_pane_ParamLimits

0xb138,	// (0x0004298f) bg_popup_window_pane

0xd0b1,	// (0x00044908) find_popup_pane_cp2_ParamLimits

0xd0b1,	// (0x00044908) find_popup_pane_cp2

0xd0bd,	// (0x00044914) heading_pane_ParamLimits

0xd0bd,	// (0x00044914) heading_pane

0x8b38,	// (0x0004038f) bg_popup_sub_pane

0x99d7,	// (0x0004122e) bg_popup_window_pane_g1_ParamLimits

0x99d7,	// (0x0004122e) bg_popup_window_pane_g1

0x99e6,	// (0x0004123d) bg_popup_window_pane_g2_ParamLimits

0x99e6,	// (0x0004123d) bg_popup_window_pane_g2

0x99f2,	// (0x00041249) bg_popup_window_pane_g3_ParamLimits

0x99f2,	// (0x00041249) bg_popup_window_pane_g3

0x99fe,	// (0x00041255) bg_popup_window_pane_g4_ParamLimits

0x99fe,	// (0x00041255) bg_popup_window_pane_g4

0x9a0d,	// (0x00041264) bg_popup_window_pane_g5_ParamLimits

0x9a0d,	// (0x00041264) bg_popup_window_pane_g5

0x9a1d,	// (0x00041274) bg_popup_window_pane_g6_ParamLimits

0x9a1d,	// (0x00041274) bg_popup_window_pane_g6

0x9a29,	// (0x00041280) bg_popup_window_pane_g7_ParamLimits

0x9a29,	// (0x00041280) bg_popup_window_pane_g7

0x9a38,	// (0x0004128f) bg_popup_window_pane_g8_ParamLimits

0x9a38,	// (0x0004128f) bg_popup_window_pane_g8

0x9a47,	// (0x0004129e) bg_popup_window_pane_g9_ParamLimits

0x9a47,	// (0x0004129e) bg_popup_window_pane_g9

0xd097,	// (0x000448ee) bg_popup_window_pane_g10_ParamLimits

0xd097,	// (0x000448ee) bg_popup_window_pane_g10

0x0009,

0xf8df,	// (0x00047136) bg_popup_window_pane_g_ParamLimits

0xf8df,	// (0x00047136) bg_popup_window_pane_g

0xd04e,	// (0x000448a5) bg_popup_heading_pane_ParamLimits

0xd04e,	// (0x000448a5) bg_popup_heading_pane

0x25b6,	// (0x00039e0d) tabs_4_passive_pane_cp_srt_ParamLimits

0x25b6,	// (0x00039e0d) tabs_4_passive_pane_cp_srt

0x25c8,	// (0x00039e1f) tabs_4_passive_pane_srt_ParamLimits

0xd062,	// (0x000448b9) heading_pane_g2

0x25c8,	// (0x00039e1f) tabs_4_passive_pane_srt

0xc4fe,	// (0x00043d55) bg_passive_tab_pane_cp3_srt_ParamLimits

0xc4fe,	// (0x00043d55) bg_passive_tab_pane_cp3_srt

0xd06a,	// (0x000448c1) heading_pane_t1_ParamLimits

0xd06a,	// (0x000448c1) heading_pane_t1

0xd081,	// (0x000448d8) heading_pane_t2_ParamLimits

0xd081,	// (0x000448d8) heading_pane_t2

0x0001,

0xf8da,	// (0x00047131) heading_pane_t_ParamLimits

0xf8da,	// (0x00047131) heading_pane_t

0xcb75,	// (0x000443cc) bg_popup_heading_pane_g1

0xcc06,	// (0x0004445d) bg_popup_heading_pane_g2

0xcc10,	// (0x00044467) bg_popup_heading_pane_g3

0xcc1a,	// (0x00044471) bg_popup_heading_pane_g4

0xcc24,	// (0x0004447b) bg_popup_heading_pane_g5

0xcc2e,	// (0x00044485) bg_popup_heading_pane_g6

0xcc36,	// (0x0004448d) bg_popup_heading_pane_g7

0xcc3e,	// (0x00044495) bg_popup_heading_pane_g8

0xcc48,	// (0x0004449f) bg_popup_heading_pane_g9

0x0008,

0xf896,	// (0x000470ed) bg_popup_heading_pane_g

0xc3fa,	// (0x00043c51) bg_popup_sub_pane_g1

0xc402,	// (0x00043c59) bg_popup_sub_pane_g2

0xc40a,	// (0x00043c61) bg_popup_sub_pane_g3

0xc412,	// (0x00043c69) bg_popup_sub_pane_g4

0xc41a,	// (0x00043c71) bg_popup_sub_pane_g5

0xc422,	// (0x00043c79) bg_popup_sub_pane_g6

0xc42a,	// (0x00043c81) bg_popup_sub_pane_g7

0xc432,	// (0x00043c89) bg_popup_sub_pane_g8

0xc43a,	// (0x00043c91) bg_popup_sub_pane_g9

0x0008,

0xf870,	// (0x000470c7) bg_popup_sub_pane_g

0x8b86,	// (0x000403dd) bg_popup_window_pane_cp5_ParamLimits

0x8b86,	// (0x000403dd) bg_popup_window_pane_cp5

0x8cd5,	// (0x0004052c) popup_note_window_g1_ParamLimits

0x8cd5,	// (0x0004052c) popup_note_window_g1

0x8ce1,	// (0x00040538) popup_note_window_t1_ParamLimits

0x8ce1,	// (0x00040538) popup_note_window_t1

0x8cf7,	// (0x0004054e) popup_note_window_t2_ParamLimits

0x8cf7,	// (0x0004054e) popup_note_window_t2

0x8d0d,	// (0x00040564) popup_note_window_t3_ParamLimits

0x8d0d,	// (0x00040564) popup_note_window_t3

0x8d23,	// (0x0004057a) popup_note_window_t4_ParamLimits

0x8d23,	// (0x0004057a) popup_note_window_t4

0x8d4b,	// (0x000405a2) popup_note_window_t5_ParamLimits

0x8d4b,	// (0x000405a2) popup_note_window_t5

0x0004,

0xf597,	// (0x00046dee) popup_note_window_t_ParamLimits

0xf597,	// (0x00046dee) popup_note_window_t

0x8d6f,	// (0x000405c6) bg_popup_window_pane_cp6_ParamLimits

0x8d6f,	// (0x000405c6) bg_popup_window_pane_cp6

0xcaf1,	// (0x00044348) popup_note_image_window_g1_ParamLimits

0xcaf1,	// (0x00044348) popup_note_image_window_g1

0xcafd,	// (0x00044354) popup_note_image_window_g2_ParamLimits

0xcafd,	// (0x00044354) popup_note_image_window_g2

0x0001,

0xf864,	// (0x000470bb) popup_note_image_window_g_ParamLimits

0xf864,	// (0x000470bb) popup_note_image_window_g

0xcb16,	// (0x0004436d) popup_note_image_window_t1_ParamLimits

0xcb16,	// (0x0004436d) popup_note_image_window_t1

0xcb2f,	// (0x00044386) popup_note_image_window_t2_ParamLimits

0xcb2f,	// (0x00044386) popup_note_image_window_t2

0xcb48,	// (0x0004439f) popup_note_image_window_t3_ParamLimits

0xcb48,	// (0x0004439f) popup_note_image_window_t3

0x0002,

0xf869,	// (0x000470c0) popup_note_image_window_t_ParamLimits

0xf869,	// (0x000470c0) popup_note_image_window_t

0xc9ce,	// (0x00044225) bg_popup_window_pane_cp7_ParamLimits

0xc9ce,	// (0x00044225) bg_popup_window_pane_cp7

0xc9fe,	// (0x00044255) popup_note_wait_window_g1_ParamLimits

0xc9fe,	// (0x00044255) popup_note_wait_window_g1

0xca0a,	// (0x00044261) popup_note_wait_window_g2_ParamLimits

0xca0a,	// (0x00044261) popup_note_wait_window_g2

0x0002,

0xf852,	// (0x000470a9) popup_note_wait_window_g_ParamLimits

0xf852,	// (0x000470a9) popup_note_wait_window_g

0xca22,	// (0x00044279) popup_note_wait_window_t1_ParamLimits

0xca22,	// (0x00044279) popup_note_wait_window_t1

0xca49,	// (0x000442a0) popup_note_wait_window_t2_ParamLimits

0xca49,	// (0x000442a0) popup_note_wait_window_t2

0xca66,	// (0x000442bd) popup_note_wait_window_t3_ParamLimits

0xca66,	// (0x000442bd) popup_note_wait_window_t3

0xca79,	// (0x000442d0) popup_note_wait_window_t4_ParamLimits

0xca79,	// (0x000442d0) popup_note_wait_window_t4

0x0004,

0xf859,	// (0x000470b0) popup_note_wait_window_t_ParamLimits

0xf859,	// (0x000470b0) popup_note_wait_window_t

0xca9e,	// (0x000442f5) wait_bar_pane_ParamLimits

0xca9e,	// (0x000442f5) wait_bar_pane

0x8b38,	// (0x0004038f) wait_anim_pane

0x8b38,	// (0x0004038f) wait_border_pane

0x8b2e,	// (0x00040385) wait_anim_pane_g1

0x8b2e,	// (0x00040385) wait_anim_pane_g2

0x0001,

0xf720,	// (0x00046f77) wait_anim_pane_g

0xc948,	// (0x0004419f) wait_border_pane_g1

0xc953,	// (0x000441aa) wait_border_pane_g2

0xc95c,	// (0x000441b3) wait_border_pane_g3

0x0002,

0xf84b,	// (0x000470a2) wait_border_pane_g

0xc7b3,	// (0x0004400a) bg_popup_window_pane_cp16_ParamLimits

0xc7b3,	// (0x0004400a) bg_popup_window_pane_cp16

0xc8b3,	// (0x0004410a) indicator_popup_pane_cp4_ParamLimits

0xc8b3,	// (0x0004410a) indicator_popup_pane_cp4

0xc8c7,	// (0x0004411e) popup_query_data_window_t1_ParamLimits

0xc8c7,	// (0x0004411e) popup_query_data_window_t1

0xc8d9,	// (0x00044130) popup_query_data_window_t2_ParamLimits

0xc8d9,	// (0x00044130) popup_query_data_window_t2

0xc8f2,	// (0x00044149) popup_query_data_window_t3_ParamLimits

0xc8f2,	// (0x00044149) popup_query_data_window_t3

0x0002,

0xf844,	// (0x0004709b) popup_query_data_window_t_ParamLimits

0xf844,	// (0x0004709b) popup_query_data_window_t

0xc90c,	// (0x00044163) query_popup_data_pane_ParamLimits

0xc90c,	// (0x00044163) query_popup_data_pane

0xc920,	// (0x00044177) query_popup_data_pane_cp1_ParamLimits

0xc920,	// (0x00044177) query_popup_data_pane_cp1

0xc7b3,	// (0x0004400a) bg_popup_window_pane_cp10_ParamLimits

0xc7b3,	// (0x0004400a) bg_popup_window_pane_cp10

0xc7e5,	// (0x0004403c) indicator_popup_pane_ParamLimits

0xc7e5,	// (0x0004403c) indicator_popup_pane

0xc807,	// (0x0004405e) popup_query_code_window_t1_ParamLimits

0xc807,	// (0x0004405e) popup_query_code_window_t1

0xc821,	// (0x00044078) popup_query_code_window_t2_ParamLimits

0xc821,	// (0x00044078) popup_query_code_window_t2

0xc86a,	// (0x000440c1) popup_query_code_window_t3_ParamLimits

0xc86a,	// (0x000440c1) popup_query_code_window_t3

0x0002,

0xf83d,	// (0x00047094) popup_query_code_window_t_ParamLimits

0xf83d,	// (0x00047094) popup_query_code_window_t

0xc899,	// (0x000440f0) query_popup_pane_ParamLimits

0xc899,	// (0x000440f0) query_popup_pane

0x8d6f,	// (0x000405c6) bg_popup_window_pane_cp15_ParamLimits

0x8d6f,	// (0x000405c6) bg_popup_window_pane_cp15

0x8d8d,	// (0x000405e4) indicator_popup_pane_cp1_ParamLimits

0x8d8d,	// (0x000405e4) indicator_popup_pane_cp1

0x9616,	// (0x00040e6d) indicator_popup_pane_cp2_ParamLimits

0x9616,	// (0x00040e6d) indicator_popup_pane_cp2

0x9629,	// (0x00040e80) popup_query_data_code_window_g1_ParamLimits

0x9629,	// (0x00040e80) popup_query_data_code_window_g1

0x963c,	// (0x00040e93) popup_query_data_code_window_t1_ParamLimits

0x963c,	// (0x00040e93) popup_query_data_code_window_t1

0x964e,	// (0x00040ea5) popup_query_data_code_window_t2_ParamLimits

0x964e,	// (0x00040ea5) popup_query_data_code_window_t2

0x9660,	// (0x00040eb7) popup_query_data_code_window_t3_ParamLimits

0x9660,	// (0x00040eb7) popup_query_data_code_window_t3

0x9676,	// (0x00040ecd) popup_query_data_code_window_t4_ParamLimits

0x9676,	// (0x00040ecd) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x00046df9) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x00046df9) popup_query_data_code_window_t

0x21df,	// (0x00039a36) list_single_midp_graphic_pane_g3

0x968e,	// (0x00040ee5) query_popup_data_pane_cp2_ParamLimits

0x96a1,	// (0x00040ef8) query_popup_pane_cp2_ParamLimits

0x96a1,	// (0x00040ef8) query_popup_pane_cp2

0x8b38,	// (0x0004038f) bg_popup_window_pane_cp11

0xc7ab,	// (0x00044002) heading_pane_cp5

0x972f,	// (0x00040f86) listscroll_popup_info_pane

0x8b38,	// (0x0004038f) input_focus_pane_cp3

0x96b4,	// (0x00040f0b) query_popup_pane_t1

0x96c2,	// (0x00040f19) list_popup_info_pane_ParamLimits

0x96c2,	// (0x00040f19) list_popup_info_pane

0x96d1,	// (0x00040f28) listscroll_popup_info_pane_g1

0x96d9,	// (0x00040f30) scroll_pane_cp7

0x96e3,	// (0x00040f3a) popup_info_list_pane_t1_ParamLimits

0x96e3,	// (0x00040f3a) popup_info_list_pane_t1

0x96fd,	// (0x00040f54) popup_info_list_pane_t2_ParamLimits

0x96fd,	// (0x00040f54) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x00046e02) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x00046e02) popup_info_list_pane_t

0x8b38,	// (0x0004038f) bg_popup_window_pane_cp12

0xd7b3,	// (0x0004500a) find_popup_pane

0x8b94,	// (0x000403eb) bg_popup_window_pane_cp3

0x9717,	// (0x00040f6e) heading_pane_cp3

0x9723,	// (0x00040f7a) listscroll_popup_graphic_pane

0x8b38,	// (0x0004038f) bg_popup_window_pane_cp4

0x7b37,	// (0x0003f38e) heading_pane_cp4

0x972f,	// (0x00040f86) listscroll_popup_colour_pane

0x7b3f,	// (0x0003f396) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7b3f,	// (0x0003f396) cell_large_graphic_colour_none_popup_pane

0x7b53,	// (0x0003f3aa) grid_large_graphic_colour_popup_pane_ParamLimits

0x7b53,	// (0x0003f3aa) grid_large_graphic_colour_popup_pane

0x7b77,	// (0x0003f3ce) listscroll_popup_colour_pane_g1_ParamLimits

0x7b77,	// (0x0003f3ce) listscroll_popup_colour_pane_g1

0x7b8e,	// (0x0003f3e5) listscroll_popup_colour_pane_g2_ParamLimits

0x7b8e,	// (0x0003f3e5) listscroll_popup_colour_pane_g2

0x7ba5,	// (0x0003f3fc) listscroll_popup_colour_pane_g3_ParamLimits

0x7ba5,	// (0x0003f3fc) listscroll_popup_colour_pane_g3

0x7bb5,	// (0x0003f40c) listscroll_popup_colour_pane_g4_ParamLimits

0x7bb5,	// (0x0003f40c) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x00046e07) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x00046e07) listscroll_popup_colour_pane_g

0x9737,	// (0x00040f8e) scroll_pane_cp6_ParamLimits

0x9737,	// (0x00040f8e) scroll_pane_cp6

0x7bc5,	// (0x0003f41c) cell_large_graphic_colour_popup_pane_ParamLimits

0x7bc5,	// (0x0003f41c) cell_large_graphic_colour_popup_pane

0x9749,	// (0x00040fa0) cell_large_graphic_colour_none_popup_pane_t1

0x8b38,	// (0x0004038f) grid_highlight_pane_cp5

0x9758,	// (0x00040faf) cell_large_graphic_colour_popup_pane_g1

0x9760,	// (0x00040fb7) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x00046e10) cell_large_graphic_colour_popup_pane_g

0x9768,	// (0x00040fbf) cell_large_graphic_colour_popup_pane_g2_copy1

0x9771,	// (0x00040fc8) grid_highlight_pane_cp4

0x9779,	// (0x00040fd0) bg_popup_window_pane_cp8_ParamLimits

0x9779,	// (0x00040fd0) bg_popup_window_pane_cp8

0x9794,	// (0x00040feb) popup_snote_single_text_window_g1_ParamLimits

0x9794,	// (0x00040feb) popup_snote_single_text_window_g1

0x97a6,	// (0x00040ffd) popup_snote_single_text_window_t1_ParamLimits

0x97a6,	// (0x00040ffd) popup_snote_single_text_window_t1

0x97b9,	// (0x00041010) popup_snote_single_text_window_t2_ParamLimits

0x97b9,	// (0x00041010) popup_snote_single_text_window_t2

0x97cc,	// (0x00041023) popup_snote_single_text_window_t3_ParamLimits

0x97cc,	// (0x00041023) popup_snote_single_text_window_t3

0x9805,	// (0x0004105c) popup_snote_single_text_window_t4_ParamLimits

0x9805,	// (0x0004105c) popup_snote_single_text_window_t4

0x9839,	// (0x00041090) popup_snote_single_text_window_t5_ParamLimits

0x9839,	// (0x00041090) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x00046e15) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x00046e15) popup_snote_single_text_window_t

0x9868,	// (0x000410bf) bg_popup_window_pane_cp9_ParamLimits

0x9868,	// (0x000410bf) bg_popup_window_pane_cp9

0x9794,	// (0x00040feb) popup_snote_single_graphic_window_g1_ParamLimits

0x9794,	// (0x00040feb) popup_snote_single_graphic_window_g1

0x9876,	// (0x000410cd) popup_snote_single_graphic_window_g2_ParamLimits

0x9876,	// (0x000410cd) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x00046e20) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x00046e20) popup_snote_single_graphic_window_g

0x9882,	// (0x000410d9) popup_snote_single_graphic_window_t1_ParamLimits

0x9882,	// (0x000410d9) popup_snote_single_graphic_window_t1

0x9895,	// (0x000410ec) popup_snote_single_graphic_window_t2_ParamLimits

0x9895,	// (0x000410ec) popup_snote_single_graphic_window_t2

0x98a8,	// (0x000410ff) popup_snote_single_graphic_window_t3_ParamLimits

0x98a8,	// (0x000410ff) popup_snote_single_graphic_window_t3

0x98e1,	// (0x00041138) popup_snote_single_graphic_window_t4_ParamLimits

0x98e1,	// (0x00041138) popup_snote_single_graphic_window_t4

0x9915,	// (0x0004116c) popup_snote_single_graphic_window_t5_ParamLimits

0x9915,	// (0x0004116c) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x00046e25) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x00046e25) popup_snote_single_graphic_window_t

0xd73b,	// (0x00044f92) grid_graphic_popup_pane_ParamLimits

0xd73b,	// (0x00044f92) grid_graphic_popup_pane

0xd763,	// (0x00044fba) listscroll_popup_graphic_pane_g1_ParamLimits

0xd763,	// (0x00044fba) listscroll_popup_graphic_pane_g1

0x9ce2,	// (0x00041539) listscroll_popup_graphic_pane_g2_ParamLimits

0x9ce2,	// (0x00041539) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ba,	// (0x00047211) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ba,	// (0x00047211) listscroll_popup_graphic_pane_g

0xc9c2,	// (0x00044219) scroll_pane_cp5

0x9ca6,	// (0x000414fd) cell_graphic_popup_pane_ParamLimits

0x9ca6,	// (0x000414fd) cell_graphic_popup_pane

0xd706,	// (0x00044f5d) cell_graphic_popup_pane_g1

0xd70e,	// (0x00044f65) cell_graphic_popup_pane_g2

0x9768,	// (0x00040fbf) cell_graphic_popup_pane_g3

0x0002,

0xf9b3,	// (0x0004720a) cell_graphic_popup_pane_g

0xd717,	// (0x00044f6e) cell_graphic_popup_pane_t2

0x9771,	// (0x00040fc8) grid_highlight_pane_cp3

0x9956,	// (0x000411ad) list_gen_pane_ParamLimits

0x9956,	// (0x000411ad) list_gen_pane

0x997e,	// (0x000411d5) scroll_pane

0x9c5d,	// (0x000414b4) bg_list_pane_g1_ParamLimits

0x9c5d,	// (0x000414b4) bg_list_pane_g1

0xd6af,	// (0x00044f06) bg_list_pane_g2_ParamLimits

0xd6af,	// (0x00044f06) bg_list_pane_g2

0xd6c4,	// (0x00044f1b) bg_list_pane_g3_ParamLimits

0xd6c4,	// (0x00044f1b) bg_list_pane_g3

0xd6d8,	// (0x00044f2f) bg_list_pane_g4_ParamLimits

0xd6d8,	// (0x00044f2f) bg_list_pane_g4

0x9c7a,	// (0x000414d1) bg_list_pane_g5_ParamLimits

0x9c7a,	// (0x000414d1) bg_list_pane_g5

0x0004,

0xf9a8,	// (0x000471ff) bg_list_pane_g_ParamLimits

0xf9a8,	// (0x000471ff) bg_list_pane_g

0x7544,	// (0x0003ed9b) list_double2_graphic_large_graphic_pane_ParamLimits

0x7544,	// (0x0003ed9b) list_double2_graphic_large_graphic_pane

0x7544,	// (0x0003ed9b) list_double2_graphic_pane_ParamLimits

0x7544,	// (0x0003ed9b) list_double2_graphic_pane

0x7544,	// (0x0003ed9b) list_double2_large_graphic_pane_ParamLimits

0x7544,	// (0x0003ed9b) list_double2_large_graphic_pane

0x7544,	// (0x0003ed9b) list_double2_pane_ParamLimits

0x7544,	// (0x0003ed9b) list_double2_pane

0x7544,	// (0x0003ed9b) list_double_graphic_heading_pane_ParamLimits

0x7544,	// (0x0003ed9b) list_double_graphic_heading_pane

0x7544,	// (0x0003ed9b) list_double_graphic_pane_ParamLimits

0x7544,	// (0x0003ed9b) list_double_graphic_pane

0x7544,	// (0x0003ed9b) list_double_heading_pane_ParamLimits

0x7544,	// (0x0003ed9b) list_double_heading_pane

0x7544,	// (0x0003ed9b) list_double_large_graphic_pane_ParamLimits

0x7544,	// (0x0003ed9b) list_double_large_graphic_pane

0x7544,	// (0x0003ed9b) list_double_number_pane_ParamLimits

0x7544,	// (0x0003ed9b) list_double_number_pane

0x7544,	// (0x0003ed9b) list_double_pane_ParamLimits

0x7544,	// (0x0003ed9b) list_double_pane

0x7544,	// (0x0003ed9b) list_double_time_pane_ParamLimits

0x7544,	// (0x0003ed9b) list_double_time_pane

0x7544,	// (0x0003ed9b) list_setting_number_pane_ParamLimits

0x7544,	// (0x0003ed9b) list_setting_number_pane

0x7544,	// (0x0003ed9b) list_setting_pane_ParamLimits

0x7544,	// (0x0003ed9b) list_setting_pane

0x9c25,	// (0x0004147c) list_single_2graphic_pane_ParamLimits

0x9c25,	// (0x0004147c) list_single_2graphic_pane

0x9c25,	// (0x0004147c) list_single_graphic_heading_pane_ParamLimits

0x9c25,	// (0x0004147c) list_single_graphic_heading_pane

0x9c25,	// (0x0004147c) list_single_graphic_pane_ParamLimits

0x9c25,	// (0x0004147c) list_single_graphic_pane

0x9c25,	// (0x0004147c) list_single_heading_pane_ParamLimits

0x9c25,	// (0x0004147c) list_single_heading_pane

0x9c4b,	// (0x000414a2) list_single_large_graphic_pane_ParamLimits

0x9c4b,	// (0x000414a2) list_single_large_graphic_pane

0x9c25,	// (0x0004147c) list_single_number_heading_pane_ParamLimits

0x9c25,	// (0x0004147c) list_single_number_heading_pane

0x9c25,	// (0x0004147c) list_single_number_pane_ParamLimits

0x9c25,	// (0x0004147c) list_single_number_pane

0x9c25,	// (0x0004147c) list_single_pane_ParamLimits

0x9c25,	// (0x0004147c) list_single_pane

0x8b38,	// (0x0004038f) list_highlight_pane_cp1

0xc9a4,	// (0x000441fb) list_single_pane_g1_ParamLimits

0xc9a4,	// (0x000441fb) list_single_pane_g1

0x21ae,	// (0x00039a05) list_single_pane_g2_ParamLimits

0x21ae,	// (0x00039a05) list_single_pane_g2

0x0001,

0xf5ea,	// (0x00046e41) list_single_pane_g_ParamLimits

0xf5ea,	// (0x00046e41) list_single_pane_g

0x0c5d,	// (0x000384b4) list_single_pane_t1_ParamLimits

0x0c5d,	// (0x000384b4) list_single_pane_t1

0xc9a4,	// (0x000441fb) list_single_number_pane_g1_ParamLimits

0xc9a4,	// (0x000441fb) list_single_number_pane_g1

0x21ae,	// (0x00039a05) list_single_number_pane_g2_ParamLimits

0x21ae,	// (0x00039a05) list_single_number_pane_g2

0x0001,

0xf5ea,	// (0x00046e41) list_single_number_pane_g_ParamLimits

0xf5ea,	// (0x00046e41) list_single_number_pane_g

0x0af2,	// (0x00038349) list_single_number_pane_t1_ParamLimits

0x0af2,	// (0x00038349) list_single_number_pane_t1

0x7506,	// (0x0003ed5d) list_single_number_pane_t2_ParamLimits

0x7506,	// (0x0003ed5d) list_single_number_pane_t2

0x0001,

0xf969,	// (0x000471c0) list_single_number_pane_t_ParamLimits

0xf969,	// (0x000471c0) list_single_number_pane_t

0x6ef8,	// (0x0003e74f) list_single_graphic_pane_g1_ParamLimits

0x6ef8,	// (0x0003e74f) list_single_graphic_pane_g1

0xc9a4,	// (0x000441fb) list_single_graphic_pane_g2_ParamLimits

0xc9a4,	// (0x000441fb) list_single_graphic_pane_g2

0x21ae,	// (0x00039a05) list_single_graphic_pane_g3_ParamLimits

0x21ae,	// (0x00039a05) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x00046e30) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x00046e30) list_single_graphic_pane_g

0x6f04,	// (0x0003e75b) list_single_graphic_pane_t1_ParamLimits

0x6f04,	// (0x0003e75b) list_single_graphic_pane_t1

0x6f1a,	// (0x0003e771) list_single_heading_pane_g1_ParamLimits

0x6f1a,	// (0x0003e771) list_single_heading_pane_g1

0x21ae,	// (0x00039a05) list_single_heading_pane_g2_ParamLimits

0x21ae,	// (0x00039a05) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x00046e37) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x00046e37) list_single_heading_pane_g

0x6f2d,	// (0x0003e784) list_single_heading_pane_t1_ParamLimits

0x6f2d,	// (0x0003e784) list_single_heading_pane_t1

0x7bee,	// (0x0003f445) list_single_heading_pane_t2_ParamLimits

0x7bee,	// (0x0003f445) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x00046e3c) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x00046e3c) list_single_heading_pane_t

0xc9a4,	// (0x000441fb) list_single_number_heading_pane_g1_ParamLimits

0xc9a4,	// (0x000441fb) list_single_number_heading_pane_g1

0x21ae,	// (0x00039a05) list_single_number_heading_pane_g2_ParamLimits

0x21ae,	// (0x00039a05) list_single_number_heading_pane_g2

0x0001,

0xf5ea,	// (0x00046e41) list_single_number_heading_pane_g_ParamLimits

0xf5ea,	// (0x00046e41) list_single_number_heading_pane_g

0x6f43,	// (0x0003e79a) list_single_number_heading_pane_t1_ParamLimits

0x6f43,	// (0x0003e79a) list_single_number_heading_pane_t1

0x6f59,	// (0x0003e7b0) list_single_number_heading_pane_t2_ParamLimits

0x6f59,	// (0x0003e7b0) list_single_number_heading_pane_t2

0x0c37,	// (0x0003848e) list_single_number_heading_pane_t3_ParamLimits

0x0c37,	// (0x0003848e) list_single_number_heading_pane_t3

0x0002,

0xf5ef,	// (0x00046e46) list_single_number_heading_pane_t_ParamLimits

0xf5ef,	// (0x00046e46) list_single_number_heading_pane_t

0x6f6b,	// (0x0003e7c2) list_single_graphic_heading_pane_g1_ParamLimits

0x6f6b,	// (0x0003e7c2) list_single_graphic_heading_pane_g1

0x7c00,	// (0x0003f457) list_single_graphic_heading_pane_g4_ParamLimits

0x7c00,	// (0x0003f457) list_single_graphic_heading_pane_g4

0x21ae,	// (0x00039a05) list_single_graphic_heading_pane_g5_ParamLimits

0x21ae,	// (0x00039a05) list_single_graphic_heading_pane_g5

0x0002,

0xf5f6,	// (0x00046e4d) list_single_graphic_heading_pane_g_ParamLimits

0xf5f6,	// (0x00046e4d) list_single_graphic_heading_pane_g

0x6f43,	// (0x0003e79a) list_single_graphic_heading_pane_t1_ParamLimits

0x6f43,	// (0x0003e79a) list_single_graphic_heading_pane_t1

0x6f81,	// (0x0003e7d8) list_single_graphic_heading_pane_t2_ParamLimits

0x6f81,	// (0x0003e7d8) list_single_graphic_heading_pane_t2

0x0001,

0xf5fd,	// (0x00046e54) list_single_graphic_heading_pane_t_ParamLimits

0xf5fd,	// (0x00046e54) list_single_graphic_heading_pane_t

0x265b,	// (0x00039eb2) list_single_large_graphic_pane_g1_ParamLimits

0x265b,	// (0x00039eb2) list_single_large_graphic_pane_g1

0x2667,	// (0x00039ebe) list_single_large_graphic_pane_g2_ParamLimits

0x2667,	// (0x00039ebe) list_single_large_graphic_pane_g2

0x2673,	// (0x00039eca) list_single_large_graphic_pane_g3_ParamLimits

0x2673,	// (0x00039eca) list_single_large_graphic_pane_g3

0x0002,

0xf602,	// (0x00046e59) list_single_large_graphic_pane_g_ParamLimits

0xf602,	// (0x00046e59) list_single_large_graphic_pane_g

0xc953,	// (0x000441aa) wait_border_pane_g2_copy1

0x7c11,	// (0x0003f468) list_single_large_graphic_pane_g4_cp2

0x0c73,	// (0x000384ca) list_single_large_graphic_pane_t1_ParamLimits

0x0c73,	// (0x000384ca) list_single_large_graphic_pane_t1

0xba57,	// (0x000432ae) list_double_pane_g1_ParamLimits

0xba57,	// (0x000432ae) list_double_pane_g1

0x6f97,	// (0x0003e7ee) list_double_pane_g2_ParamLimits

0x6f97,	// (0x0003e7ee) list_double_pane_g2

0x0001,

0xf609,	// (0x00046e60) list_double_pane_g_ParamLimits

0xf609,	// (0x00046e60) list_double_pane_g

0x6fa3,	// (0x0003e7fa) list_double_pane_t1_ParamLimits

0x6fa3,	// (0x0003e7fa) list_double_pane_t1

0x6fb9,	// (0x0003e810) list_double_pane_t2_ParamLimits

0x6fb9,	// (0x0003e810) list_double_pane_t2

0x0001,

0xf60e,	// (0x00046e65) list_double_pane_t_ParamLimits

0xf60e,	// (0x00046e65) list_double_pane_t

0x6fcb,	// (0x0003e822) list_double2_pane_g1_ParamLimits

0x6fcb,	// (0x0003e822) list_double2_pane_g1

0x0a92,	// (0x000382e9) list_double2_pane_g2_ParamLimits

0x0a92,	// (0x000382e9) list_double2_pane_g2

0x0001,

0xf613,	// (0x00046e6a) list_double2_pane_g_ParamLimits

0xf613,	// (0x00046e6a) list_double2_pane_g

0x6fdc,	// (0x0003e833) list_double2_pane_t1_ParamLimits

0x6fdc,	// (0x0003e833) list_double2_pane_t1

0x6ff2,	// (0x0003e849) list_double2_pane_t2_ParamLimits

0x6ff2,	// (0x0003e849) list_double2_pane_t2

0x0001,

0xf618,	// (0x00046e6f) list_double2_pane_t_ParamLimits

0xf618,	// (0x00046e6f) list_double2_pane_t

0xba57,	// (0x000432ae) list_double_number_pane_g1_ParamLimits

0xba57,	// (0x000432ae) list_double_number_pane_g1

0x6f97,	// (0x0003e7ee) list_double_number_pane_g2_ParamLimits

0x6f97,	// (0x0003e7ee) list_double_number_pane_g2

0x0001,

0xf609,	// (0x00046e60) list_double_number_pane_g_ParamLimits

0xf609,	// (0x00046e60) list_double_number_pane_g

0x7004,	// (0x0003e85b) list_double_number_pane_t1_ParamLimits

0x7004,	// (0x0003e85b) list_double_number_pane_t1

0x7016,	// (0x0003e86d) list_double_number_pane_t2_ParamLimits

0x7016,	// (0x0003e86d) list_double_number_pane_t2

0x702c,	// (0x0003e883) list_double_number_pane_t3_ParamLimits

0x702c,	// (0x0003e883) list_double_number_pane_t3

0x0002,

0xf61d,	// (0x00046e74) list_double_number_pane_t_ParamLimits

0xf61d,	// (0x00046e74) list_double_number_pane_t

0x703e,	// (0x0003e895) list_double_graphic_pane_g1_ParamLimits

0x703e,	// (0x0003e895) list_double_graphic_pane_g1

0x704a,	// (0x0003e8a1) list_double_graphic_pane_g2_ParamLimits

0x704a,	// (0x0003e8a1) list_double_graphic_pane_g2

0x7059,	// (0x0003e8b0) list_double_graphic_pane_g3_ParamLimits

0x7059,	// (0x0003e8b0) list_double_graphic_pane_g3

0x0003,

0xf624,	// (0x00046e7b) list_double_graphic_pane_g_ParamLimits

0xf624,	// (0x00046e7b) list_double_graphic_pane_g

0x7071,	// (0x0003e8c8) list_double_graphic_pane_t1_ParamLimits

0x7071,	// (0x0003e8c8) list_double_graphic_pane_t1

0x7087,	// (0x0003e8de) list_double_graphic_pane_t2_ParamLimits

0x7087,	// (0x0003e8de) list_double_graphic_pane_t2

0x0001,

0xf62d,	// (0x00046e84) list_double_graphic_pane_t_ParamLimits

0xf62d,	// (0x00046e84) list_double_graphic_pane_t

0x0ae6,	// (0x0003833d) list_double2_graphic_pane_g1_ParamLimits

0x0ae6,	// (0x0003833d) list_double2_graphic_pane_g1

0xc9a4,	// (0x000441fb) list_double2_graphic_pane_g2_ParamLimits

0xc9a4,	// (0x000441fb) list_double2_graphic_pane_g2

0x21ae,	// (0x00039a05) list_double2_graphic_pane_g3_ParamLimits

0x21ae,	// (0x00039a05) list_double2_graphic_pane_g3

0x0002,

0xf632,	// (0x00046e89) list_double2_graphic_pane_g_ParamLimits

0xf632,	// (0x00046e89) list_double2_graphic_pane_g

0x0af2,	// (0x00038349) list_double2_graphic_pane_t1_ParamLimits

0x0af2,	// (0x00038349) list_double2_graphic_pane_t1

0x7099,	// (0x0003e8f0) list_double2_graphic_pane_t2_ParamLimits

0x7099,	// (0x0003e8f0) list_double2_graphic_pane_t2

0x0001,

0xf639,	// (0x00046e90) list_double2_graphic_pane_t_ParamLimits

0xf639,	// (0x00046e90) list_double2_graphic_pane_t

0x70ab,	// (0x0003e902) list_double_large_graphic_pane_g1_ParamLimits

0x70ab,	// (0x0003e902) list_double_large_graphic_pane_g1

0x70d6,	// (0x0003e92d) list_double_large_graphic_pane_g2_ParamLimits

0x70d6,	// (0x0003e92d) list_double_large_graphic_pane_g2

0x6f97,	// (0x0003e7ee) list_double_large_graphic_pane_g3_ParamLimits

0x6f97,	// (0x0003e7ee) list_double_large_graphic_pane_g3

0x70ec,	// (0x0003e943) list_double_large_graphic_pane_g4_ParamLimits

0x70ec,	// (0x0003e943) list_double_large_graphic_pane_g4

0x0004,

0xf63e,	// (0x00046e95) list_double_large_graphic_pane_g_ParamLimits

0xf63e,	// (0x00046e95) list_double_large_graphic_pane_g

0x70ff,	// (0x0003e956) list_double_large_graphic_pane_t1_ParamLimits

0x70ff,	// (0x0003e956) list_double_large_graphic_pane_t1

0x7118,	// (0x0003e96f) list_double_large_graphic_pane_t2_ParamLimits

0x7118,	// (0x0003e96f) list_double_large_graphic_pane_t2

0x0001,

0xf649,	// (0x00046ea0) list_double_large_graphic_pane_t_ParamLimits

0xf649,	// (0x00046ea0) list_double_large_graphic_pane_t

0x712a,	// (0x0003e981) list_double2_large_graphic_pane_g1_ParamLimits

0x712a,	// (0x0003e981) list_double2_large_graphic_pane_g1

0x7c00,	// (0x0003f457) list_double2_large_graphic_pane_g2_ParamLimits

0x7c00,	// (0x0003f457) list_double2_large_graphic_pane_g2

0x21ae,	// (0x00039a05) list_double2_large_graphic_pane_g3_ParamLimits

0x21ae,	// (0x00039a05) list_double2_large_graphic_pane_g3

0x0002,

0xf64e,	// (0x00046ea5) list_double2_large_graphic_pane_g_ParamLimits

0xf64e,	// (0x00046ea5) list_double2_large_graphic_pane_g

0x6f43,	// (0x0003e79a) list_double2_large_graphic_pane_t1_ParamLimits

0x6f43,	// (0x0003e79a) list_double2_large_graphic_pane_t1

0x7136,	// (0x0003e98d) list_double2_large_graphic_pane_t2_ParamLimits

0x7136,	// (0x0003e98d) list_double2_large_graphic_pane_t2

0x0001,

0xf655,	// (0x00046eac) list_double2_large_graphic_pane_t_ParamLimits

0xf655,	// (0x00046eac) list_double2_large_graphic_pane_t

0x7148,	// (0x0003e99f) list_double_heading_pane_g1_ParamLimits

0x7148,	// (0x0003e99f) list_double_heading_pane_g1

0x7159,	// (0x0003e9b0) list_double_heading_pane_g2_ParamLimits

0x7159,	// (0x0003e9b0) list_double_heading_pane_g2

0x0001,

0xf65a,	// (0x00046eb1) list_double_heading_pane_g_ParamLimits

0xf65a,	// (0x00046eb1) list_double_heading_pane_g

0x7165,	// (0x0003e9bc) list_double_heading_pane_t1_ParamLimits

0x7165,	// (0x0003e9bc) list_double_heading_pane_t1

0x6ff2,	// (0x0003e849) list_double_heading_pane_t2_ParamLimits

0x6ff2,	// (0x0003e849) list_double_heading_pane_t2

0x0001,

0xf65f,	// (0x00046eb6) list_double_heading_pane_t_ParamLimits

0xf65f,	// (0x00046eb6) list_double_heading_pane_t

0x049d,	// (0x00037cf4) list_double_graphic_heading_pane_g1_ParamLimits

0x049d,	// (0x00037cf4) list_double_graphic_heading_pane_g1

0x7148,	// (0x0003e99f) list_double_graphic_heading_pane_g2_ParamLimits

0x7148,	// (0x0003e99f) list_double_graphic_heading_pane_g2

0x7159,	// (0x0003e9b0) list_double_graphic_heading_pane_g3_ParamLimits

0x7159,	// (0x0003e9b0) list_double_graphic_heading_pane_g3

0x0002,

0xf664,	// (0x00046ebb) list_double_graphic_heading_pane_g_ParamLimits

0xf664,	// (0x00046ebb) list_double_graphic_heading_pane_g

0x717b,	// (0x0003e9d2) list_double_graphic_heading_pane_t1_ParamLimits

0x717b,	// (0x0003e9d2) list_double_graphic_heading_pane_t1

0x7099,	// (0x0003e8f0) list_double_graphic_heading_pane_t2_ParamLimits

0x7099,	// (0x0003e8f0) list_double_graphic_heading_pane_t2

0x0001,

0xf66b,	// (0x00046ec2) list_double_graphic_heading_pane_t_ParamLimits

0xf66b,	// (0x00046ec2) list_double_graphic_heading_pane_t

0x7191,	// (0x0003e9e8) list_double_time_pane_g1_ParamLimits

0x7191,	// (0x0003e9e8) list_double_time_pane_g1

0x71a2,	// (0x0003e9f9) list_double_time_pane_g2_ParamLimits

0x71a2,	// (0x0003e9f9) list_double_time_pane_g2

0x0001,

0xf670,	// (0x00046ec7) list_double_time_pane_g_ParamLimits

0xf670,	// (0x00046ec7) list_double_time_pane_g

0x71ae,	// (0x0003ea05) list_double_time_pane_t1_ParamLimits

0x71ae,	// (0x0003ea05) list_double_time_pane_t1

0x71c4,	// (0x0003ea1b) list_double_time_pane_t2_ParamLimits

0x71c4,	// (0x0003ea1b) list_double_time_pane_t2

0x71d6,	// (0x0003ea2d) list_double_time_pane_t3_ParamLimits

0x71d6,	// (0x0003ea2d) list_double_time_pane_t3

0x71e8,	// (0x0003ea3f) list_double_time_pane_t4_ParamLimits

0x71e8,	// (0x0003ea3f) list_double_time_pane_t4

0x0003,

0xf675,	// (0x00046ecc) list_double_time_pane_t_ParamLimits

0xf675,	// (0x00046ecc) list_double_time_pane_t

0x0a86,	// (0x000382dd) list_setting_pane_g1_ParamLimits

0x0a86,	// (0x000382dd) list_setting_pane_g1

0x0a92,	// (0x000382e9) list_setting_pane_g2_ParamLimits

0x0a92,	// (0x000382e9) list_setting_pane_g2

0x0001,

0xf67e,	// (0x00046ed5) list_setting_pane_g_ParamLimits

0xf67e,	// (0x00046ed5) list_setting_pane_g

0x71fa,	// (0x0003ea51) list_setting_pane_t1_ParamLimits

0x71fa,	// (0x0003ea51) list_setting_pane_t1

0x7214,	// (0x0003ea6b) list_setting_pane_t2_ParamLimits

0x7214,	// (0x0003ea6b) list_setting_pane_t2

0x0002,

0xf683,	// (0x00046eda) list_setting_pane_t_ParamLimits

0xf683,	// (0x00046eda) list_setting_pane_t

0x7253,	// (0x0003eaaa) set_value_pane_cp_ParamLimits

0x7253,	// (0x0003eaaa) set_value_pane_cp

0x725f,	// (0x0003eab6) list_setting_number_pane_g1_ParamLimits

0x725f,	// (0x0003eab6) list_setting_number_pane_g1

0x726b,	// (0x0003eac2) list_setting_number_pane_g2_ParamLimits

0x726b,	// (0x0003eac2) list_setting_number_pane_g2

0x0001,

0xf68a,	// (0x00046ee1) list_setting_number_pane_g_ParamLimits

0xf68a,	// (0x00046ee1) list_setting_number_pane_g

0x7277,	// (0x0003eace) list_setting_number_pane_t1_ParamLimits

0x7277,	// (0x0003eace) list_setting_number_pane_t1

0x7290,	// (0x0003eae7) list_setting_number_pane_t2_ParamLimits

0x7290,	// (0x0003eae7) list_setting_number_pane_t2

0x72aa,	// (0x0003eb01) list_setting_number_pane_t3_ParamLimits

0x72aa,	// (0x0003eb01) list_setting_number_pane_t3

0x0003,

0xf68f,	// (0x00046ee6) list_setting_number_pane_t_ParamLimits

0xf68f,	// (0x00046ee6) list_setting_number_pane_t

0x7253,	// (0x0003eaaa) set_value_pane_ParamLimits

0x7253,	// (0x0003eaaa) set_value_pane

0xb027,	// (0x0004287e) bg_set_opt_pane_ParamLimits

0xb027,	// (0x0004287e) bg_set_opt_pane

0x0778,	// (0x00037fcf) set_value_pane_t1

0xb048,	// (0x0004289f) slider_set_pane_cp3

0xb051,	// (0x000428a8) volume_small_pane_cp

0xb05a,	// (0x000428b1) list_form_gen_pane

0xb063,	// (0x000428ba) scroll_pane_cp8

0x72ed,	// (0x0003eb44) form_field_data_pane_ParamLimits

0x72ed,	// (0x0003eb44) form_field_data_pane

0x7304,	// (0x0003eb5b) form_field_data_wide_pane_ParamLimits

0x7304,	// (0x0003eb5b) form_field_data_wide_pane

0x7324,	// (0x0003eb7b) form_field_popup_pane_ParamLimits

0x7324,	// (0x0003eb7b) form_field_popup_pane

0x733c,	// (0x0003eb93) form_field_popup_wide_pane_ParamLimits

0x733c,	// (0x0003eb93) form_field_popup_wide_pane

0x0814,	// (0x0003806b) form_field_slider_pane_ParamLimits

0x0814,	// (0x0003806b) form_field_slider_pane

0x0827,	// (0x0003807e) form_field_slider_wide_pane_ParamLimits

0x0827,	// (0x0003807e) form_field_slider_wide_pane

0xb074,	// (0x000428cb) data_form_pane

0x735d,	// (0x0003ebb4) form_field_data_pane_t1

0xb080,	// (0x000428d7) input_focus_pane

0xb08e,	// (0x000428e5) data_form_wide_pane

0x0868,	// (0x000380bf) form_field_data_wide_pane_t1

0x9786,	// (0x00040fdd) input_focus_pane_cp6

0x7377,	// (0x0003ebce) form_field_popup_pane_t1

0xb080,	// (0x000428d7) input_focus_pane_cp7

0xb0ba,	// (0x00042911) list_form_pane

0x08aa,	// (0x00038101) form_field_popup_wide_pane_t1

0xb080,	// (0x000428d7) input_focus_pane_cp8

0xb0c6,	// (0x0004291d) list_form_wide_pane

0x7399,	// (0x0003ebf0) form_field_slider_pane_t1_ParamLimits

0x7399,	// (0x0003ebf0) form_field_slider_pane_t1

0x73b1,	// (0x0003ec08) form_field_slider_pane_t2_ParamLimits

0x73b1,	// (0x0003ec08) form_field_slider_pane_t2

0x0001,

0xf69f,	// (0x00046ef6) form_field_slider_pane_t_ParamLimits

0xf69f,	// (0x00046ef6) form_field_slider_pane_t

0x8b86,	// (0x000403dd) input_focus_pane_cp9_ParamLimits

0x8b86,	// (0x000403dd) input_focus_pane_cp9

0x73c6,	// (0x0003ec1d) slider_cont_pane_ParamLimits

0x73c6,	// (0x0003ec1d) slider_cont_pane

0xb0d5,	// (0x0004292c) form_field_slider_wide_pane_t1_ParamLimits

0xb0d5,	// (0x0004292c) form_field_slider_wide_pane_t1

0x0906,	// (0x0003815d) form_field_slider_wide_pane_t2_ParamLimits

0x0906,	// (0x0003815d) form_field_slider_wide_pane_t2

0x0001,

0xf6a4,	// (0x00046efb) form_field_slider_wide_pane_t_ParamLimits

0xf6a4,	// (0x00046efb) form_field_slider_wide_pane_t

0x8b86,	// (0x000403dd) input_focus_pane_cp10_ParamLimits

0x8b86,	// (0x000403dd) input_focus_pane_cp10

0x73da,	// (0x0003ec31) slider_cont_pane_cp1_ParamLimits

0x73da,	// (0x0003ec31) slider_cont_pane_cp1

0x73ee,	// (0x0003ec45) slider_form_pane_cp

0xb0e7,	// (0x0004293e) input_focus_pane_g1

0xb0ef,	// (0x00042946) input_focus_pane_g2

0xb0f7,	// (0x0004294e) input_focus_pane_g3

0xb0ff,	// (0x00042956) input_focus_pane_g4

0xb107,	// (0x0004295e) input_focus_pane_g5

0xb10f,	// (0x00042966) input_focus_pane_g6

0xb117,	// (0x0004296e) input_focus_pane_g7

0xb11f,	// (0x00042976) input_focus_pane_g8

0xb127,	// (0x0004297e) input_focus_pane_g9

0x8b2e,	// (0x00040385) input_focus_pane_g10

0x0009,

0xf6a9,	// (0x00046f00) input_focus_pane_g

0xc95c,	// (0x000441b3) wait_border_pane_g3_copy1

0x73f6,	// (0x0003ec4d) data_form_pane_t1

0x8b2e,	// (0x00040385) wait_anim_pane_g1_copy1

0x7518,	// (0x0003ed6f) data_form_wide_pane_t1

0x740f,	// (0x0003ec66) list_form_graphic_pane_cp_ParamLimits

0x740f,	// (0x0003ec66) list_form_graphic_pane_cp

0xd64a,	// (0x00044ea1) slider_form_pane_g1

0xd653,	// (0x00044eaa) slider_form_pane_g2

0x0006,

0xf999,	// (0x000471f0) slider_form_pane_g

0x7420,	// (0x0003ec77) list_form_graphic_pane_ParamLimits

0x7420,	// (0x0003ec77) list_form_graphic_pane

0x0984,	// (0x000381db) list_form_graphic_pane_g1

0x098c,	// (0x000381e3) list_form_graphic_pane_t1_ParamLimits

0x098c,	// (0x000381e3) list_form_graphic_pane_t1

0x8b94,	// (0x000403eb) list_highlight_pane_cp5_ParamLimits

0x8b94,	// (0x000403eb) list_highlight_pane_cp5

0x7432,	// (0x0003ec89) find_pane_g1

0xb12f,	// (0x00042986) input_find_pane

0x743b,	// (0x0003ec92) input_find_pane_g1_ParamLimits

0x743b,	// (0x0003ec92) input_find_pane_g1

0x7447,	// (0x0003ec9e) input_find_pane_t1_ParamLimits

0x7447,	// (0x0003ec9e) input_find_pane_t1

0x745c,	// (0x0003ecb3) input_find_pane_t2_ParamLimits

0x745c,	// (0x0003ecb3) input_find_pane_t2

0x0001,

0xf6be,	// (0x00046f15) input_find_pane_t_ParamLimits

0xf6be,	// (0x00046f15) input_find_pane_t

0xb138,	// (0x0004298f) input_focus_pane_cp5_ParamLimits

0xb138,	// (0x0004298f) input_focus_pane_cp5

0x7c25,	// (0x0003f47c) bg_popup_window_pane_cp2_ParamLimits

0x7c25,	// (0x0003f47c) bg_popup_window_pane_cp2

0x7c32,	// (0x0003f489) listscroll_menu_pane_ParamLimits

0x7c32,	// (0x0003f489) listscroll_menu_pane

0x7c3e,	// (0x0003f495) popup_submenu_window_ParamLimits

0x7c3e,	// (0x0003f495) popup_submenu_window

0xb146,	// (0x0004299d) find_popup_pane_g1

0xb14e,	// (0x000429a5) input_popup_find_pane_cp

0xb138,	// (0x0004298f) input_focus_pane_cp4_ParamLimits

0xb138,	// (0x0004298f) input_focus_pane_cp4

0xb158,	// (0x000429af) input_popup_find_pane_t1_ParamLimits

0xb158,	// (0x000429af) input_popup_find_pane_t1

0x8b38,	// (0x0004038f) bg_popup_sub_pane_cp

0xb186,	// (0x000429dd) listscroll_popup_sub_pane

0xb18e,	// (0x000429e5) list_submenu_pane_ParamLimits

0xb18e,	// (0x000429e5) list_submenu_pane

0xb19f,	// (0x000429f6) scroll_pane_cp4

0xb1a7,	// (0x000429fe) list_single_popup_submenu_pane_ParamLimits

0xb1a7,	// (0x000429fe) list_single_popup_submenu_pane

0xb1bb,	// (0x00042a12) list_single_popup_submenu_pane_g1

0xb1c3,	// (0x00042a1a) list_single_popup_submenu_pane_t1_ParamLimits

0xb1c3,	// (0x00042a1a) list_single_popup_submenu_pane_t1

0x8b86,	// (0x000403dd) bg_active_tab_pane_cp1_ParamLimits

0x8b86,	// (0x000403dd) bg_active_tab_pane_cp1

0x7c78,	// (0x0003f4cf) tabs_2_active_pane_g1

0x7c80,	// (0x0003f4d7) tabs_2_active_pane_t1

0x8b86,	// (0x000403dd) bg_passive_tab_pane_cp1_ParamLimits

0x8b86,	// (0x000403dd) bg_passive_tab_pane_cp1

0x7c78,	// (0x0003f4cf) tabs_2_passive_pane_g1

0x7c80,	// (0x0003f4d7) tabs_2_passive_pane_t1

0x8b94,	// (0x000403eb) bg_active_tab_pane_cp4

0x7c92,	// (0x0003f4e9) tabs_2_long_active_pane_t1

0xb1d8,	// (0x00042a2f) bg_passive_tab_pane_cp4

0x21e7,	// (0x00039a3e) list_single_midp_graphic_pane_g4_ParamLimits

0x8b94,	// (0x000403eb) bg_active_tab_pane_cp5

0x7ca5,	// (0x0003f4fc) tabs_3_long_active_pane_t1

0xb1d8,	// (0x00042a2f) bg_passive_tab_pane_cp5

0x21e7,	// (0x00039a3e) list_single_midp_graphic_pane_g4

0x8b94,	// (0x000403eb) bg_popup_window_pane_cp13_ParamLimits

0x8b94,	// (0x000403eb) bg_popup_window_pane_cp13

0xb1ed,	// (0x00042a44) listscroll_popup_fast_pane_ParamLimits

0xb1ed,	// (0x00042a44) listscroll_popup_fast_pane

0xb1fc,	// (0x00042a53) grid_popup_fast_pane_ParamLimits

0xb1fc,	// (0x00042a53) grid_popup_fast_pane

0xb20e,	// (0x00042a65) scroll_pane_cp9_ParamLimits

0xb20e,	// (0x00042a65) scroll_pane_cp9

0xe910,	// (0x00046167) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xe910,	// (0x00046167) list_single_graphic_hl_pane_t1_cp2

0xb232,	// (0x00042a89) input_focus_pane_cp20_ParamLimits

0xb232,	// (0x00042a89) input_focus_pane_cp20

0xb53b,	// (0x00042d92) query_popup_data_pane_t1_ParamLimits

0xb53b,	// (0x00042d92) query_popup_data_pane_t1

0xb54e,	// (0x00042da5) query_popup_data_pane_t2_ParamLimits

0xb54e,	// (0x00042da5) query_popup_data_pane_t2

0xb594,	// (0x00042deb) query_popup_data_pane_t3_ParamLimits

0xb594,	// (0x00042deb) query_popup_data_pane_t3

0xb5d5,	// (0x00042e2c) query_popup_data_pane_t4_ParamLimits

0xb5d5,	// (0x00042e2c) query_popup_data_pane_t4

0xb611,	// (0x00042e68) query_popup_data_pane_t5_ParamLimits

0xb611,	// (0x00042e68) query_popup_data_pane_t5

0x0004,

0xf6c3,	// (0x00046f1a) query_popup_data_pane_t_ParamLimits

0xf6c3,	// (0x00046f1a) query_popup_data_pane_t

0xb0e7,	// (0x0004293e) bg_set_opt_pane_g1

0xb0ef,	// (0x00042946) bg_set_opt_pane_g2

0xb0f7,	// (0x0004294e) bg_set_opt_pane_g3

0xb0ff,	// (0x00042956) bg_set_opt_pane_g4

0xb107,	// (0x0004295e) bg_set_opt_pane_g5

0xb10f,	// (0x00042966) bg_set_opt_pane_g6

0xb117,	// (0x0004296e) bg_set_opt_pane_g7

0xb11f,	// (0x00042976) bg_set_opt_pane_g8

0xb127,	// (0x0004297e) bg_set_opt_pane_g9

0x0008,

0xf6ce,	// (0x00046f25) bg_set_opt_pane_g

0x1d2e,	// (0x00039585) control_top_pane_stacon_ParamLimits

0x1d2e,	// (0x00039585) control_top_pane_stacon

0x1d81,	// (0x000395d8) signal_pane_stacon_ParamLimits

0x1d81,	// (0x000395d8) signal_pane_stacon

0xbb90,	// (0x000433e7) stacon_top_pane_g1_ParamLimits

0xbb90,	// (0x000433e7) stacon_top_pane_g1

0x1da6,	// (0x000395fd) title_pane_stacon_ParamLimits

0x1da6,	// (0x000395fd) title_pane_stacon

0x1dd0,	// (0x00039627) uni_indicator_pane_stacon_ParamLimits

0x1dd0,	// (0x00039627) uni_indicator_pane_stacon

0x1de5,	// (0x0003963c) battery_pane_stacon_ParamLimits

0x1de5,	// (0x0003963c) battery_pane_stacon

0x1e29,	// (0x00039680) control_bottom_pane_stacon_ParamLimits

0x1e29,	// (0x00039680) control_bottom_pane_stacon

0x1e4c,	// (0x000396a3) navi_pane_stacon_ParamLimits

0x1e4c,	// (0x000396a3) navi_pane_stacon

0xbbb2,	// (0x00043409) stacon_bottom_pane_g1_ParamLimits

0xbbb2,	// (0x00043409) stacon_bottom_pane_g1

0x1938,	// (0x0003918f) aid_levels_signal_lsc_ParamLimits

0x1938,	// (0x0003918f) aid_levels_signal_lsc

0x194f,	// (0x000391a6) signal_pane_stacon_g1_ParamLimits

0x194f,	// (0x000391a6) signal_pane_stacon_g1

0x1963,	// (0x000391ba) signal_pane_stacon_g2_ParamLimits

0x1963,	// (0x000391ba) signal_pane_stacon_g2

0x0001,

0xf6e1,	// (0x00046f38) signal_pane_stacon_g_ParamLimits

0xf6e1,	// (0x00046f38) signal_pane_stacon_g

0x1998,	// (0x000391ef) title_pane_stacon_t1_ParamLimits

0x1998,	// (0x000391ef) title_pane_stacon_t1

0xb655,	// (0x00042eac) uni_indicator_pane_stacon_g1

0xb65f,	// (0x00042eb6) uni_indicator_pane_stacon_g2

0xb669,	// (0x00042ec0) uni_indicator_pane_stacon_g3

0xb673,	// (0x00042eca) uni_indicator_pane_stacon_g4

0x0003,

0xf6ed,	// (0x00046f44) uni_indicator_pane_stacon_g

0x19bd,	// (0x00039214) control_top_pane_stacon_g1

0x19c5,	// (0x0003921c) control_top_pane_stacon_t1_ParamLimits

0x19c5,	// (0x0003921c) control_top_pane_stacon_t1

0x19fc,	// (0x00039253) aid_levels_battery_lsc_ParamLimits

0x19fc,	// (0x00039253) aid_levels_battery_lsc

0x1a14,	// (0x0003926b) battery_pane_stacon_g1_ParamLimits

0x1a14,	// (0x0003926b) battery_pane_stacon_g1

0x1a27,	// (0x0003927e) battery_pane_stacon_g2_ParamLimits

0x1a27,	// (0x0003927e) battery_pane_stacon_g2

0x0001,

0xf6f6,	// (0x00046f4d) battery_pane_stacon_g_ParamLimits

0xf6f6,	// (0x00046f4d) battery_pane_stacon_g

0x1a65,	// (0x000392bc) navi_icon_pane_stacon

0x1a79,	// (0x000392d0) navi_navi_pane_stacon

0x1a65,	// (0x000392bc) navi_text_pane_stacon

0x19bd,	// (0x00039214) control_bottom_pane_stacon_g1

0x1a8d,	// (0x000392e4) control_bottom_pane_stacon_t1_ParamLimits

0x1a8d,	// (0x000392e4) control_bottom_pane_stacon_t1

0x7cb7,	// (0x0003f50e) grid_app_pane_ParamLimits

0x7cb7,	// (0x0003f50e) grid_app_pane

0x7cef,	// (0x0003f546) scroll_pane_cp15_ParamLimits

0x7cef,	// (0x0003f546) scroll_pane_cp15

0x7d08,	// (0x0003f55f) cell_app_pane_ParamLimits

0x7d08,	// (0x0003f55f) cell_app_pane

0x7d4d,	// (0x0003f5a4) cell_app_pane_g1_ParamLimits

0x7d4d,	// (0x0003f5a4) cell_app_pane_g1

0xb697,	// (0x00042eee) cell_app_pane_g2_ParamLimits

0xb697,	// (0x00042eee) cell_app_pane_g2

0x0001,

0xf6fb,	// (0x00046f52) cell_app_pane_g_ParamLimits

0xf6fb,	// (0x00046f52) cell_app_pane_g

0x7d6d,	// (0x0003f5c4) cell_app_pane_t1_ParamLimits

0x7d6d,	// (0x0003f5c4) cell_app_pane_t1

0xb6a3,	// (0x00042efa) grid_highlight_pane_ParamLimits

0xb6a3,	// (0x00042efa) grid_highlight_pane

0xb0e7,	// (0x0004293e) cell_highlight_pane_g1

0xb0ef,	// (0x00042946) cell_highlight_pane_g2

0xb0f7,	// (0x0004294e) cell_highlight_pane_g3

0xb0ff,	// (0x00042956) cell_highlight_pane_g4

0xb107,	// (0x0004295e) cell_highlight_pane_g5

0xb10f,	// (0x00042966) cell_highlight_pane_g6

0xb117,	// (0x0004296e) cell_highlight_pane_g7

0xb11f,	// (0x00042976) cell_highlight_pane_g8

0xb127,	// (0x0004297e) cell_highlight_pane_g9

0x8b2e,	// (0x00040385) cell_highlight_pane_g10

0x0009,

0xf6a9,	// (0x00046f00) cell_highlight_pane_g

0xb6b4,	// (0x00042f0b) bg_scroll_pane

0x1b6b,	// (0x000393c2) scroll_handle_pane

0xb6fb,	// (0x00042f52) scroll_bg_pane_g1

0xb710,	// (0x00042f67) scroll_bg_pane_g2

0xb728,	// (0x00042f7f) scroll_bg_pane_g3

0x0002,

0xf700,	// (0x00046f57) scroll_bg_pane_g

0xb73d,	// (0x00042f94) scroll_handle_focus_pane_ParamLimits

0xb73d,	// (0x00042f94) scroll_handle_focus_pane

0xb6fb,	// (0x00042f52) scroll_handle_pane_g1

0xb74a,	// (0x00042fa1) scroll_handle_pane_g2

0xb728,	// (0x00042f7f) scroll_handle_pane_g3

0x0002,

0xf707,	// (0x00046f5e) scroll_handle_pane_g

0xb138,	// (0x0004298f) bg_popup_sub_pane_cp21_ParamLimits

0xb138,	// (0x0004298f) bg_popup_sub_pane_cp21

0xb75e,	// (0x00042fb5) popup_fep_japan_predictive_window_t1_ParamLimits

0xb75e,	// (0x00042fb5) popup_fep_japan_predictive_window_t1

0xb778,	// (0x00042fcf) popup_fep_japan_predictive_window_t2_ParamLimits

0xb778,	// (0x00042fcf) popup_fep_japan_predictive_window_t2

0xb7ab,	// (0x00043002) popup_fep_japan_predictive_window_t3_ParamLimits

0xb7ab,	// (0x00043002) popup_fep_japan_predictive_window_t3

0x0002,

0xf70e,	// (0x00046f65) popup_fep_japan_predictive_window_t_ParamLimits

0xf70e,	// (0x00046f65) popup_fep_japan_predictive_window_t

0x8b38,	// (0x0004038f) bg_popup_sub_pane_cp23

0xb7e2,	// (0x00043039) listscroll_japin_cand_pane

0xb7ea,	// (0x00043041) popup_fep_japan_candidate_window_t1

0xb7f8,	// (0x0004304f) candidate_pane_ParamLimits

0xb7f8,	// (0x0004304f) candidate_pane

0xb80a,	// (0x00043061) scroll_pane_cp30

0xb812,	// (0x00043069) list_single_popup_jap_candidate_pane_ParamLimits

0xb812,	// (0x00043069) list_single_popup_jap_candidate_pane

0x8b38,	// (0x0004038f) list_highlight_pane_cp30

0xb827,	// (0x0004307e) list_single_popup_jap_candidate_pane_t1

0xb836,	// (0x0004308d) level_1_signal

0xb843,	// (0x0004309a) level_2_signal

0xb850,	// (0x000430a7) level_3_signal

0xb85d,	// (0x000430b4) level_4_signal

0xb86a,	// (0x000430c1) level_5_signal

0xb877,	// (0x000430ce) level_6_signal

0xb884,	// (0x000430db) level_7_signal

0xb836,	// (0x0004308d) level_1_battery

0xb843,	// (0x0004309a) level_2_battery

0xb850,	// (0x000430a7) level_3_battery

0xb85d,	// (0x000430b4) level_4_battery

0xb86a,	// (0x000430c1) level_5_battery

0xb877,	// (0x000430ce) level_6_battery

0xb884,	// (0x000430db) level_7_battery

0xb8a9,	// (0x00043100) list_menu_pane_ParamLimits

0xb8a9,	// (0x00043100) list_menu_pane

0xb8bf,	// (0x00043116) scroll_pane_cp25_ParamLimits

0xb8bf,	// (0x00043116) scroll_pane_cp25

0xb8d8,	// (0x0004312f) list_double2_graphic_pane_cp2_ParamLimits

0xb8d8,	// (0x0004312f) list_double2_graphic_pane_cp2

0xb8d8,	// (0x0004312f) list_double2_large_graphic_pane_cp2_ParamLimits

0xb8d8,	// (0x0004312f) list_double2_large_graphic_pane_cp2

0xb8d8,	// (0x0004312f) list_double2_pane_cp2_ParamLimits

0xb8d8,	// (0x0004312f) list_double2_pane_cp2

0xb8d8,	// (0x0004312f) list_double_graphic_pane_cp2_ParamLimits

0xb8d8,	// (0x0004312f) list_double_graphic_pane_cp2

0xb8d8,	// (0x0004312f) list_double_large_graphic_pane_cp2_ParamLimits

0xb8d8,	// (0x0004312f) list_double_large_graphic_pane_cp2

0xb8d8,	// (0x0004312f) list_double_number_pane_cp2_ParamLimits

0xb8d8,	// (0x0004312f) list_double_number_pane_cp2

0xb8d8,	// (0x0004312f) list_double_pane_cp2_ParamLimits

0xb8d8,	// (0x0004312f) list_double_pane_cp2

0x7d9c,	// (0x0003f5f3) list_single_2graphic_pane_cp2_ParamLimits

0x7d9c,	// (0x0003f5f3) list_single_2graphic_pane_cp2

0x7d9c,	// (0x0003f5f3) list_single_graphic_heading_pane_cp2_ParamLimits

0x7d9c,	// (0x0003f5f3) list_single_graphic_heading_pane_cp2

0x7d9c,	// (0x0003f5f3) list_single_graphic_pane_cp2_ParamLimits

0x7d9c,	// (0x0003f5f3) list_single_graphic_pane_cp2

0x7d9c,	// (0x0003f5f3) list_single_heading_pane_cp2_ParamLimits

0x7d9c,	// (0x0003f5f3) list_single_heading_pane_cp2

0xb8e8,	// (0x0004313f) list_single_large_graphic_pane_cp2_ParamLimits

0xb8e8,	// (0x0004313f) list_single_large_graphic_pane_cp2

0x7d9c,	// (0x0003f5f3) list_single_number_heading_pane_cp2_ParamLimits

0x7d9c,	// (0x0003f5f3) list_single_number_heading_pane_cp2

0x7d9c,	// (0x0003f5f3) list_single_number_pane_cp2_ParamLimits

0x7d9c,	// (0x0003f5f3) list_single_number_pane_cp2

0x7d9c,	// (0x0003f5f3) list_single_pane_cp2_ParamLimits

0x7d9c,	// (0x0003f5f3) list_single_pane_cp2

0xb902,	// (0x00043159) bg_popup_sub_pane_cp22

0x1ca6,	// (0x000394fd) popup_side_volume_key_window_g1

0x1cd0,	// (0x00039527) popup_side_volume_key_window_t1

0x1cec,	// (0x00039543) volume_small_pane_cp1

0x8b86,	// (0x000403dd) bg_popup_sub_pane_cp24_ParamLimits

0x8b86,	// (0x000403dd) bg_popup_sub_pane_cp24

0xb918,	// (0x0004316f) fep_china_uni_candidate_pane_ParamLimits

0xb918,	// (0x0004316f) fep_china_uni_candidate_pane

0xb92c,	// (0x00043183) fep_china_uni_entry_pane

0xb93c,	// (0x00043193) popup_fep_china_uni_window_g1

0xba6f,	// (0x000432c6) fep_china_uni_entry_pane_g1

0xba77,	// (0x000432ce) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x00046f96) fep_china_uni_entry_pane_g

0xba7f,	// (0x000432d6) fep_entry_item_pane

0xba89,	// (0x000432e0) fep_candidate_item_pane

0xba91,	// (0x000432e8) fep_china_uni_candidate_pane_g1

0xba99,	// (0x000432f0) fep_china_uni_candidate_pane_g2

0xbaa1,	// (0x000432f8) fep_china_uni_candidate_pane_g3

0xbaa9,	// (0x00043300) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x00046f9b) fep_china_uni_candidate_pane_g

0x8b2e,	// (0x00040385) fep_entry_item_pane_g1

0xbab1,	// (0x00043308) fep_entry_item_pane_t1_ParamLimits

0xbab1,	// (0x00043308) fep_entry_item_pane_t1

0xbac7,	// (0x0004331e) fep_candidate_item_pane_t1_ParamLimits

0xbac7,	// (0x0004331e) fep_candidate_item_pane_t1

0xbadc,	// (0x00043333) fep_candidate_item_pane_t2_ParamLimits

0xbadc,	// (0x00043333) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x00046fa4) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x00046fa4) fep_candidate_item_pane_t

0x8b94,	// (0x000403eb) list_highlight_pane_cp31_ParamLimits

0x8b94,	// (0x000403eb) list_highlight_pane_cp31

0xbaee,	// (0x00043345) level_1_signal_lsc

0xbaf7,	// (0x0004334e) level_2_signal_lsc

0xbb00,	// (0x00043357) level_3_signal_lsc

0xbb09,	// (0x00043360) level_4_signal_lsc

0xbb12,	// (0x00043369) level_5_signal_lsc

0xbb1b,	// (0x00043372) level_6_signal_lsc

0xbb24,	// (0x0004337b) level_7_signal_lsc

0xbb24,	// (0x0004337b) level_1_battery_lsc

0xbb2d,	// (0x00043384) level_2_battery_lsc

0xbb36,	// (0x0004338d) level_3_battery_lsc

0xbb3f,	// (0x00043396) level_4_battery_lsc

0xbb48,	// (0x0004339f) level_5_battery_lsc

0xbb51,	// (0x000433a8) level_6_battery_lsc

0xbaee,	// (0x00043345) level_7_battery_lsc

0xbb5a,	// (0x000433b1) scroll_handle_focus_pane_g1

0xbb63,	// (0x000433ba) scroll_handle_focus_pane_g2

0xbb6c,	// (0x000433c3) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x00046fa9) scroll_handle_focus_pane_g

0x7471,	// (0x0003ecc8) list_single_2graphic_pane_g1_ParamLimits

0x7471,	// (0x0003ecc8) list_single_2graphic_pane_g1

0x7c00,	// (0x0003f457) list_single_2graphic_pane_g2_ParamLimits

0x7c00,	// (0x0003f457) list_single_2graphic_pane_g2

0x21ae,	// (0x00039a05) list_single_2graphic_pane_g3_ParamLimits

0x21ae,	// (0x00039a05) list_single_2graphic_pane_g3

0x7e28,	// (0x0003f67f) list_single_2graphic_pane_g4_ParamLimits

0x7e28,	// (0x0003f67f) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x00046fb0) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x00046fb0) list_single_2graphic_pane_g

0x747d,	// (0x0003ecd4) list_single_2graphic_pane_t1_ParamLimits

0x747d,	// (0x0003ecd4) list_single_2graphic_pane_t1

0x74ab,	// (0x0003ed02) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x74ab,	// (0x0003ed02) list_double2_graphic_large_graphic_pane_g1

0x7c00,	// (0x0003f457) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7c00,	// (0x0003f457) list_double2_graphic_large_graphic_pane_g2

0x21ae,	// (0x00039a05) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x21ae,	// (0x00039a05) list_double2_graphic_large_graphic_pane_g3

0x74bd,	// (0x0003ed14) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x74bd,	// (0x0003ed14) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x00046fb9) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x00046fb9) list_double2_graphic_large_graphic_pane_g

0x74c9,	// (0x0003ed20) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x74c9,	// (0x0003ed20) list_double2_graphic_large_graphic_pane_t1

0x74df,	// (0x0003ed36) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x74df,	// (0x0003ed36) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x00046fc2) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x00046fc2) list_double2_graphic_large_graphic_pane_t

0xbc2d,	// (0x00043484) popup_fast_swap_window_ParamLimits

0xbc2d,	// (0x00043484) popup_fast_swap_window

0xbc49,	// (0x000434a0) popup_side_volume_key_window

0xbc65,	// (0x000434bc) stacon_top_pane

0xbc6f,	// (0x000434c6) status_pane_ParamLimits

0xbc6f,	// (0x000434c6) status_pane

0xbc65,	// (0x000434bc) status_small_pane

0x8b38,	// (0x0004038f) control_pane

0x8b38,	// (0x0004038f) stacon_bottom_pane

0xb063,	// (0x000428ba) scroll_pane_cp121

0xb05a,	// (0x000428b1) set_content_pane

0xbb75,	// (0x000433cc) bg_active_tab_pane_g1_cp1

0xbb7e,	// (0x000433d5) bg_active_tab_pane_g2_cp1

0xbb87,	// (0x000433de) bg_active_tab_pane_g3_cp1

0xbb75,	// (0x000433cc) bg_passive_tab_pane_g1_cp1

0xbb7e,	// (0x000433d5) bg_passive_tab_pane_g2_cp1

0xbb87,	// (0x000433de) bg_passive_tab_pane_g3_cp1

0x7e34,	// (0x0003f68b) bg_active_tab_pane_g1_cp2

0xbb7e,	// (0x000433d5) bg_active_tab_pane_g2_cp2

0x7e3d,	// (0x0003f694) bg_active_tab_pane_g3_cp2

0x7e34,	// (0x0003f68b) bg_passive_tab_pane_g1_cp2

0xbb7e,	// (0x000433d5) bg_passive_tab_pane_g2_cp2

0x7e3d,	// (0x0003f694) bg_passive_tab_pane_g3_cp2

0x7e46,	// (0x0003f69d) bg_active_tab_pane_g1_cp3

0xbb7e,	// (0x000433d5) bg_active_tab_pane_g2_cp3

0x7e4f,	// (0x0003f6a6) bg_active_tab_pane_g3_cp3

0x7e46,	// (0x0003f69d) bg_passive_tab_pane_g1_cp3

0xbb7e,	// (0x000433d5) bg_passive_tab_pane_g2_cp3

0x7e4f,	// (0x0003f6a6) bg_passive_tab_pane_g3_cp3

0x7e58,	// (0x0003f6af) bg_active_tab_pane_g1_cp4

0xbb7e,	// (0x000433d5) bg_active_tab_pane_g2_cp4

0x7e61,	// (0x0003f6b8) bg_active_tab_pane_g3_cp4

0x7e58,	// (0x0003f6af) bg_passive_tab_pane_g1_cp4

0xbb7e,	// (0x000433d5) bg_passive_tab_pane_g2_cp4

0x7e61,	// (0x0003f6b8) bg_passive_tab_pane_g3_cp4

0xbbce,	// (0x00043425) bg_active_tab_pane_g1_cp5

0xbb7e,	// (0x000433d5) bg_active_tab_pane_g2_cp5

0xbbd7,	// (0x0004342e) bg_active_tab_pane_g3_cp5

0xbbce,	// (0x00043425) bg_passive_tab_pane_g1_cp5

0xbb7e,	// (0x000433d5) bg_passive_tab_pane_g2_cp5

0xbbd7,	// (0x0004342e) bg_passive_tab_pane_g3_cp5

0x7e6a,	// (0x0003f6c1) list_set_graphic_pane_ParamLimits

0x7e6a,	// (0x0003f6c1) list_set_graphic_pane

0x8b38,	// (0x0004038f) bg_set_opt_pane_cp4

0x7e7c,	// (0x0003f6d3) list_set_graphic_pane_g1_ParamLimits

0x7e7c,	// (0x0003f6d3) list_set_graphic_pane_g1

0x7e88,	// (0x0003f6df) list_set_graphic_pane_g2_ParamLimits

0x7e88,	// (0x0003f6df) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x00046fc7) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x00046fc7) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x0004732c) volume_small_pane_cp_g

0xbbe0,	// (0x00043437) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xbbe0,	// (0x00043437) list_double2_large_graphic_pane_g1_cp2

0xbbec,	// (0x00043443) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xbbec,	// (0x00043443) list_double2_large_graphic_pane_g2_cp2

0xbbfd,	// (0x00043454) list_double2_large_graphic_pane_g3_cp2

0xbc05,	// (0x0004345c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbc05,	// (0x0004345c) list_double2_large_graphic_pane_t1_cp2

0xbc1b,	// (0x00043472) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xbc1b,	// (0x00043472) list_double2_large_graphic_pane_t2_cp2

0xd3b5,	// (0x00044c0c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd3b5,	// (0x00044c0c) list_double_large_graphic_pane_g1_cp2

0xd3c6,	// (0x00044c1d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd3c6,	// (0x00044c1d) list_double_large_graphic_pane_g2_cp2

0xbd8b,	// (0x000435e2) list_double_large_graphic_pane_g3_cp2

0xd3d7,	// (0x00044c2e) list_double_large_graphic_pane_g4_cp

0xd3df,	// (0x00044c36) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xd3df,	// (0x00044c36) list_double_large_graphic_pane_t1_cp2

0xd3f6,	// (0x00044c4d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xd3f6,	// (0x00044c4d) list_double_large_graphic_pane_t2_cp2

0xbc7d,	// (0x000434d4) list_double2_graphic_pane_g1_cp2_ParamLimits

0xbc7d,	// (0x000434d4) list_double2_graphic_pane_g1_cp2

0xbc8b,	// (0x000434e2) list_double2_graphic_pane_g2_cp2_ParamLimits

0xbc8b,	// (0x000434e2) list_double2_graphic_pane_g2_cp2

0xbc9c,	// (0x000434f3) list_double2_graphic_pane_g3_cp2

0xbca6,	// (0x000434fd) list_double2_graphic_pane_t1_cp2_ParamLimits

0xbca6,	// (0x000434fd) list_double2_graphic_pane_t1_cp2

0xbcbc,	// (0x00043513) list_double2_graphic_pane_t2_cp2_ParamLimits

0xbcbc,	// (0x00043513) list_double2_graphic_pane_t2_cp2

0xbcce,	// (0x00043525) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbcce,	// (0x00043525) list_single_number_heading_pane_g1_cp2

0xbcda,	// (0x00043531) list_single_number_heading_pane_g2_cp2

0xbce2,	// (0x00043539) list_single_number_heading_pane_t1_cp2_ParamLimits

0xbce2,	// (0x00043539) list_single_number_heading_pane_t1_cp2

0xbcf8,	// (0x0004354f) list_single_number_heading_pane_t2_cp2_ParamLimits

0xbcf8,	// (0x0004354f) list_single_number_heading_pane_t2_cp2

0xbd0a,	// (0x00043561) list_single_number_heading_pane_t3_cp2_ParamLimits

0xbd0a,	// (0x00043561) list_single_number_heading_pane_t3_cp2

0xbcce,	// (0x00043525) list_single_heading_pane_g1_cp2_ParamLimits

0xbcce,	// (0x00043525) list_single_heading_pane_g1_cp2

0xbcda,	// (0x00043531) list_single_heading_pane_g2_cp2

0xbce2,	// (0x00043539) list_single_heading_pane_t1_cp2_ParamLimits

0xbce2,	// (0x00043539) list_single_heading_pane_t1_cp2

0xd1bd,	// (0x00044a14) list_single_heading_pane_t2_cp2_ParamLimits

0xd1bd,	// (0x00044a14) list_single_heading_pane_t2_cp2

0xd105,	// (0x0004495c) list_double_graphic_pane_g1_cp2_ParamLimits

0xd105,	// (0x0004495c) list_double_graphic_pane_g1_cp2

0xd111,	// (0x00044968) list_double_graphic_pane_g2_cp2_ParamLimits

0xd111,	// (0x00044968) list_double_graphic_pane_g2_cp2

0xd120,	// (0x00044977) list_double_graphic_pane_g3_cp2

0xd128,	// (0x0004497f) list_double_graphic_pane_t1_cp2_ParamLimits

0xd128,	// (0x0004497f) list_double_graphic_pane_t1_cp2

0xd13e,	// (0x00044995) list_double_graphic_pane_t2_cp2_ParamLimits

0xd13e,	// (0x00044995) list_double_graphic_pane_t2_cp2

0xbd7f,	// (0x000435d6) list_double_number_pane_g1_cp2_ParamLimits

0xbd7f,	// (0x000435d6) list_double_number_pane_g1_cp2

0xbd8b,	// (0x000435e2) list_double_number_pane_g2_cp2

0xd0c9,	// (0x00044920) list_double_number_pane_t1_cp2_ParamLimits

0xd0c9,	// (0x00044920) list_double_number_pane_t1_cp2

0xd0dd,	// (0x00044934) list_double_number_pane_t2_cp2_ParamLimits

0xd0dd,	// (0x00044934) list_double_number_pane_t2_cp2

0xd0f3,	// (0x0004494a) list_double_number_pane_t3_cp2_ParamLimits

0xd0f3,	// (0x0004494a) list_double_number_pane_t3_cp2

0xd040,	// (0x00044897) list_single_graphic_pane_g1_cp2_ParamLimits

0xd040,	// (0x00044897) list_single_graphic_pane_g1_cp2

0xba57,	// (0x000432ae) list_single_graphic_pane_g2_cp2_ParamLimits

0xba57,	// (0x000432ae) list_single_graphic_pane_g2_cp2

0xbde3,	// (0x0004363a) list_single_graphic_pane_g3_cp2

0xd016,	// (0x0004486d) list_single_graphic_pane_t1_cp2_ParamLimits

0xd016,	// (0x0004486d) list_single_graphic_pane_t1_cp2

0xba57,	// (0x000432ae) list_single_number_pane_g1_cp2_ParamLimits

0xba57,	// (0x000432ae) list_single_number_pane_g1_cp2

0xbde3,	// (0x0004363a) list_single_number_pane_g2_cp2

0xd016,	// (0x0004486d) list_single_number_pane_t1_cp2_ParamLimits

0xd016,	// (0x0004486d) list_single_number_pane_t1_cp2

0xd02c,	// (0x00044883) list_single_number_pane_t2_cp2_ParamLimits

0xd02c,	// (0x00044883) list_single_number_pane_t2_cp2

0xbbec,	// (0x00043443) list_double2_pane_g1_cp2_ParamLimits

0xbbec,	// (0x00043443) list_double2_pane_g1_cp2

0xbbfd,	// (0x00043454) list_double2_pane_g2_cp2

0xbd57,	// (0x000435ae) list_double2_pane_t1_cp2_ParamLimits

0xbd57,	// (0x000435ae) list_double2_pane_t1_cp2

0xbd6d,	// (0x000435c4) list_double2_pane_t2_cp2_ParamLimits

0xbd6d,	// (0x000435c4) list_double2_pane_t2_cp2

0xbd7f,	// (0x000435d6) list_double_pane_g1_cp2_ParamLimits

0xbd7f,	// (0x000435d6) list_double_pane_g1_cp2

0xbd8b,	// (0x000435e2) list_double_pane_g2_cp2

0xbd93,	// (0x000435ea) list_double_pane_t1_cp2_ParamLimits

0xbd93,	// (0x000435ea) list_double_pane_t1_cp2

0xbda9,	// (0x00043600) list_double_pane_t2_cp2_ParamLimits

0xbda9,	// (0x00043600) list_double_pane_t2_cp2

0xbdd3,	// (0x0004362a) list_single_pane_cp2_g3

0xba57,	// (0x000432ae) list_single_pane_g1_cp2_ParamLimits

0xba57,	// (0x000432ae) list_single_pane_g1_cp2

0xbde3,	// (0x0004363a) list_single_pane_g2_cp2

0xbdeb,	// (0x00043642) list_single_pane_t1_cp2_ParamLimits

0xbdeb,	// (0x00043642) list_single_pane_t1_cp2

0xbe03,	// (0x0004365a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xbe03,	// (0x0004365a) list_single_large_graphic_pane_g1_cp2

0xbe0f,	// (0x00043666) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xbe0f,	// (0x00043666) list_single_large_graphic_pane_g2_cp2

0xbe1b,	// (0x00043672) list_single_large_graphic_pane_g3_cp2

0xbe23,	// (0x0004367a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xbe23,	// (0x0004367a) list_single_large_graphic_pane_g4_cp1

0xbe3d,	// (0x00043694) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xbe3d,	// (0x00043694) list_single_large_graphic_pane_t1_cp2

0xcfe2,	// (0x00044839) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xcfe2,	// (0x00044839) list_single_graphic_heading_pane_g1_cp2

0xcfaf,	// (0x00044806) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xcfaf,	// (0x00044806) list_single_graphic_heading_pane_g4_cp2

0xbde3,	// (0x0004363a) list_single_graphic_heading_pane_g5_cp2

0xcfee,	// (0x00044845) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xcfee,	// (0x00044845) list_single_graphic_heading_pane_t1_cp2

0xd004,	// (0x0004485b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd004,	// (0x0004485b) list_single_graphic_heading_pane_t2_cp2

0xcfa3,	// (0x000447fa) list_single_2graphic_pane_g1_cp2_ParamLimits

0xcfa3,	// (0x000447fa) list_single_2graphic_pane_g1_cp2

0xcfaf,	// (0x00044806) list_single_2graphic_pane_g2_cp2_ParamLimits

0xcfaf,	// (0x00044806) list_single_2graphic_pane_g2_cp2

0xbde3,	// (0x0004363a) list_single_2graphic_pane_g3_cp2

0xcfc0,	// (0x00044817) list_single_2graphic_pane_g4_cp2_ParamLimits

0xcfc0,	// (0x00044817) list_single_2graphic_pane_g4_cp2

0xcfcc,	// (0x00044823) list_single_2graphic_pane_t1_cp2_ParamLimits

0xcfcc,	// (0x00044823) list_single_2graphic_pane_t1_cp2

0x8b2e,	// (0x00040385) list_highlight_pane_g10_cp1

0xcb75,	// (0x000443cc) list_highlight_pane_g1_cp1

0xcb7d,	// (0x000443d4) list_highlight_pane_g2_cp1

0xcb85,	// (0x000443dc) list_highlight_pane_g3_cp1

0xcb8d,	// (0x000443e4) list_highlight_pane_g4_cp1

0xcb95,	// (0x000443ec) list_highlight_pane_g5_cp1

0xcb9d,	// (0x000443f4) list_highlight_pane_g6_cp1

0xcba5,	// (0x000443fc) list_highlight_pane_g7_cp1

0xcbad,	// (0x00044404) list_highlight_pane_g8_cp1

0xcbb5,	// (0x0004440c) list_highlight_pane_g9_cp1

0x95b4,	// (0x00040e0b) form_field_slider_pane_t3

0x95c2,	// (0x00040e19) form_field_slider_pane_t4

0xcab1,	// (0x00044308) slider_form_pane_ParamLimits

0xcab1,	// (0x00044308) slider_form_pane

0x8b38,	// (0x0004038f) control_abbreviations

0x8b38,	// (0x0004038f) control_conventions

0x8b38,	// (0x0004038f) control_definitions

0x8b38,	// (0x0004038f) format_table_attribute

0xd207,	// (0x00044a5e) bg_popup_preview_window_pane_g9

0x8b38,	// (0x0004038f) format_table_data2

0x8b38,	// (0x0004038f) format_table_data3

0x8b38,	// (0x0004038f) format_table_data_example

0x0008,

0x8b38,	// (0x0004038f) intro_purpose

0xf8f9,	// (0x00047150) bg_popup_preview_window_pane_g

0x8b38,	// (0x0004038f) texts_category

0x8b38,	// (0x0004038f) texts_graphics

0xbe53,	// (0x000436aa) text_digital

0xbe62,	// (0x000436b9) text_primary

0xbe71,	// (0x000436c8) text_primary_small

0xbe80,	// (0x000436d7) text_secondary

0xbe8f,	// (0x000436e6) text_title

0xd6ec,	// (0x00044f43) bg_passive_tab_pane_g1_cp3_srt

0xbb7e,	// (0x000433d5) bg_passive_tab_pane_g2_cp3_srt

0xd6f5,	// (0x00044f4c) bg_passive_tab_pane_g3_cp3_srt

0x8b86,	// (0x000403dd) bg_active_tab_pane_cp3_srt_ParamLimits

0x8b86,	// (0x000403dd) bg_active_tab_pane_cp3_srt

0xd6fe,	// (0x00044f55) tabs_4_active_pane_srt_g1

0x9c90,	// (0x000414e7) tabs_4_active_pane_srt_t1_ParamLimits

0x9c90,	// (0x000414e7) tabs_4_active_pane_srt_t1

0xd6ec,	// (0x00044f43) bg_active_tab_pane_g1_cp3_copy1

0xbb7e,	// (0x000433d5) bg_active_tab_pane_g2_cp3_copy1

0xd6f5,	// (0x00044f4c) bg_active_tab_pane_g3_cp3_copy1

0x8b94,	// (0x000403eb) tabs_2_long_active_pane_srt_ParamLimits

0x8b94,	// (0x000403eb) tabs_2_long_active_pane_srt

0x8b94,	// (0x000403eb) tabs_2_long_passive_pane_srt_ParamLimits

0x8b94,	// (0x000403eb) tabs_2_long_passive_pane_srt

0xb1d8,	// (0x00042a2f) bg_passive_tab_pane_cp4_srt_ParamLimits

0xb1d8,	// (0x00042a2f) bg_passive_tab_pane_cp4_srt

0xd5fd,	// (0x00044e54) bg_passive_tab_pane_g1_cp4_srt

0xbb7e,	// (0x000433d5) bg_passive_tab_pane_g2_cp4_srt

0xd606,	// (0x00044e5d) bg_passive_tab_pane_g3_cp4_srt

0x8b94,	// (0x000403eb) bg_active_tab_pane_cp4_srt_ParamLimits

0x8b94,	// (0x000403eb) bg_active_tab_pane_cp4_srt

0x9aba,	// (0x00041311) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9aba,	// (0x00041311) tabs_2_long_active_pane_srt_t1

0xd5fd,	// (0x00044e54) bg_active_tab_pane_g1_cp4_srt

0xbb7e,	// (0x000433d5) bg_active_tab_pane_g2_cp4_srt

0xd606,	// (0x00044e5d) bg_active_tab_pane_g3_cp4_srt

0x8b86,	// (0x000403dd) tabs_3_long_active_pane_srt_ParamLimits

0x8b86,	// (0x000403dd) tabs_3_long_active_pane_srt

0x8b86,	// (0x000403dd) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8b86,	// (0x000403dd) tabs_3_long_passive_pane_cp_srt

0x8b86,	// (0x000403dd) tabs_3_long_passive_pane_srt_ParamLimits

0x8b86,	// (0x000403dd) tabs_3_long_passive_pane_srt

0xb1d8,	// (0x00042a2f) bg_passive_tab_pane_cp5_srt_ParamLimits

0xb1d8,	// (0x00042a2f) bg_passive_tab_pane_cp5_srt

0xbbce,	// (0x00043425) bg_passive_tab_pane_g1_cp5_srt

0xbb7e,	// (0x000433d5) bg_passive_tab_pane_g2_cp5_srt

0xbbd7,	// (0x0004342e) bg_passive_tab_pane_g3_cp5_srt

0x8b94,	// (0x000403eb) bg_active_tab_pane_cp5_srt_ParamLimits

0x8b94,	// (0x000403eb) bg_active_tab_pane_cp5_srt

0x9aa4,	// (0x000412fb) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9aa4,	// (0x000412fb) tabs_3_long_active_pane_srt_t1

0xbbce,	// (0x00043425) bg_active_tab_pane_g1_cp5_srt

0xbb7e,	// (0x000433d5) bg_active_tab_pane_g2_cp5_srt

0xbbd7,	// (0x0004342e) bg_active_tab_pane_g3_cp5_srt

0xd5ef,	// (0x00044e46) navi_text_pane_srt_t1

0xd5e7,	// (0x00044e3e) navi_icon_pane_srt_g1

0xbfa7,	// (0x000437fe) midp_editing_number_pane_srt

0xbe9e,	// (0x000436f5) midp_ticker_pane_srt

0xbfaf,	// (0x00043806) midp_ticker_pane_srt_g1

0xbfb7,	// (0x0004380e) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x00046fe6) midp_ticker_pane_srt_g

0xbfbf,	// (0x00043816) midp_ticker_pane_srt_t1

0xd5d8,	// (0x00044e2f) midp_editing_number_pane_t1_copy1

0xb1d8,	// (0x00042a2f) listscroll_midp_pane

0xb1d8,	// (0x00042a2f) midp_form_pane

0xbea6,	// (0x000436fd) midp_info_popup_window_ParamLimits

0xbea6,	// (0x000436fd) midp_info_popup_window

0xb138,	// (0x0004298f) bg_popup_sub_pane_cp50_ParamLimits

0xb138,	// (0x0004298f) bg_popup_sub_pane_cp50

0xc79f,	// (0x00043ff6) listscroll_midp_info_pane_ParamLimits

0xc79f,	// (0x00043ff6) listscroll_midp_info_pane

0xc787,	// (0x00043fde) listscroll_form_midp_pane_ParamLimits

0xc787,	// (0x00043fde) listscroll_form_midp_pane

0xc793,	// (0x00043fea) scroll_bar_cp050

0x95a8,	// (0x00040dff) list_midp_pane

0xdf9c,	// (0x000457f3) signal_pane_g2_cp

0xc6b9,	// (0x00043f10) listscroll_midp_info_pane_t1_ParamLimits

0xc6b9,	// (0x00043f10) listscroll_midp_info_pane_t1

0xc6d1,	// (0x00043f28) listscroll_midp_info_pane_t2_ParamLimits

0xc6d1,	// (0x00043f28) listscroll_midp_info_pane_t2

0xc70f,	// (0x00043f66) listscroll_midp_info_pane_t3_ParamLimits

0xc70f,	// (0x00043f66) listscroll_midp_info_pane_t3

0xc749,	// (0x00043fa0) listscroll_midp_info_pane_t4_ParamLimits

0xc749,	// (0x00043fa0) listscroll_midp_info_pane_t4

0x0003,

0xf834,	// (0x0004708b) listscroll_midp_info_pane_t_ParamLimits

0xf834,	// (0x0004708b) listscroll_midp_info_pane_t

0xb19f,	// (0x000429f6) scroll_pane_cp21

0xc657,	// (0x00043eae) form_midp_field_choice_group_pane

0xc660,	// (0x00043eb7) form_midp_field_text_pane

0xc69f,	// (0x00043ef6) form_midp_field_time_pane

0xc6a7,	// (0x00043efe) form_midp_gauge_slider_pane

0xc6b0,	// (0x00043f07) form_midp_gauge_wait_pane

0x8b38,	// (0x0004038f) form_midp_image_pane

0x74f1,	// (0x0003ed48) list_single_midp_pane_ParamLimits

0x74f1,	// (0x0003ed48) list_single_midp_pane

0x9586,	// (0x00040ddd) form_midp_field_text_pane_t1

0xc4fe,	// (0x00043d55) input_focus_pane_cp050

0xc646,	// (0x00043e9d) list_midp_form_text_pane

0xc615,	// (0x00043e6c) form_midp_field_choice_group_pane_t1

0xc623,	// (0x00043e7a) input_focus_pane_cp051

0xc637,	// (0x00043e8e) list_midp_choice_pane

0x8b38,	// (0x0004038f) status_idle_pane

0xc5f9,	// (0x00043e50) form_midp_field_time_pane_t1

0x8b2e,	// (0x00040385) wait_anim_pane_g2_copy1

0xc607,	// (0x00043e5e) form_midp_field_time_pane_t2

0x0001,

0xbf11,	// (0x00043768) aid_navinavi_width_2_pane

0xf82f,	// (0x00047086) form_midp_field_time_pane_t

0x8b38,	// (0x0004038f) input_focus_pane_cp052

0x8b38,	// (0x0004038f) bg_input_focus_pane_cp040

0xc5d5,	// (0x00043e2c) form_midp_gauge_slider_pane_t1

0xc5e3,	// (0x00043e3a) form_midp_gauge_slider_pane_t2

0x956a,	// (0x00040dc1) form_midp_gauge_slider_pane_t3

0x9578,	// (0x00040dcf) form_midp_gauge_slider_pane_t4

0x0003,

0xf826,	// (0x0004707d) form_midp_gauge_slider_pane_t

0xc5f1,	// (0x00043e48) form_midp_slider_pane

0x8b94,	// (0x000403eb) bg_input_focus_pane_cp041_ParamLimits

0x8b94,	// (0x000403eb) bg_input_focus_pane_cp041

0xc5a2,	// (0x00043df9) form_midp_gauge_wait_pane_t1_ParamLimits

0xc5a2,	// (0x00043df9) form_midp_gauge_wait_pane_t1

0xc5b4,	// (0x00043e0b) form_midp_gauge_wait_pane_t2_ParamLimits

0xc5b4,	// (0x00043e0b) form_midp_gauge_wait_pane_t2

0x0001,

0xf821,	// (0x00047078) form_midp_gauge_wait_pane_t_ParamLimits

0xf821,	// (0x00047078) form_midp_gauge_wait_pane_t

0xc5c6,	// (0x00043e1d) form_midp_wait_pane_ParamLimits

0xc5c6,	// (0x00043e1d) form_midp_wait_pane

0xc56c,	// (0x00043dc3) form_midp_image_pane_g1

0xc575,	// (0x00043dcc) form_midp_image_pane_t1

0xc584,	// (0x00043ddb) form_midp_image_pane_t2

0xc593,	// (0x00043dea) form_midp_image_pane_t3

0x0002,

0xf81a,	// (0x00047071) form_midp_image_pane_t

0xc563,	// (0x00043dba) list_single_midp_pane_g1

0x0b34,	// (0x0003838b) list_single_midp_pane_t1

0x9555,	// (0x00040dac) list_midp_form_item_pane_ParamLimits

0x9555,	// (0x00040dac) list_midp_form_item_pane

0xbeb9,	// (0x00043710) list_midp_form_item_pane_t1

0xbec8,	// (0x0004371f) midp_ticker_pane_g1

0xbed4,	// (0x0004372b) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x00046fcc) midp_ticker_pane_g

0xbee0,	// (0x00043737) midp_ticker_pane_t1

0xd68e,	// (0x00044ee5) midp_editing_number_pane_t1

0xd66c,	// (0x00044ec3) midp_editing_number_pane

0xd67b,	// (0x00044ed2) midp_ticker_pane

0xd5c8,	// (0x00044e1f) ai_message_heading_pane

0x8b38,	// (0x0004038f) bg_popup_window_pane_cp14

0xd5d0,	// (0x00044e27) listscroll_ai_message_pane

0xd552,	// (0x00044da9) ai_message_heading_pane_g1_ParamLimits

0xd552,	// (0x00044da9) ai_message_heading_pane_g1

0xd55e,	// (0x00044db5) ai_message_heading_pane_g2_ParamLimits

0xd55e,	// (0x00044db5) ai_message_heading_pane_g2

0xd56a,	// (0x00044dc1) ai_message_heading_pane_g3_ParamLimits

0xd56a,	// (0x00044dc1) ai_message_heading_pane_g3

0xd576,	// (0x00044dcd) ai_message_heading_pane_g4_ParamLimits

0xd576,	// (0x00044dcd) ai_message_heading_pane_g4

0x0003,

0xf95b,	// (0x000471b2) ai_message_heading_pane_g_ParamLimits

0xf95b,	// (0x000471b2) ai_message_heading_pane_g

0xd582,	// (0x00044dd9) ai_message_heading_pane_t1_ParamLimits

0xd582,	// (0x00044dd9) ai_message_heading_pane_t1

0xd59c,	// (0x00044df3) ai_message_heading_pane_t2_ParamLimits

0xd59c,	// (0x00044df3) ai_message_heading_pane_t2

0x0001,

0xf964,	// (0x000471bb) ai_message_heading_pane_t_ParamLimits

0xf964,	// (0x000471bb) ai_message_heading_pane_t

0xd5ae,	// (0x00044e05) bg_popup_heading_pane_cp1_ParamLimits

0xd5ae,	// (0x00044e05) bg_popup_heading_pane_cp1

0xd540,	// (0x00044d97) list_ai_message_pane_ParamLimits

0xd540,	// (0x00044d97) list_ai_message_pane

0xb19f,	// (0x000429f6) scroll_pane_cp10

0xd4dc,	// (0x00044d33) list_ai_message_pane_g1

0xd4e4,	// (0x00044d3b) list_ai_message_pane_g2

0x0001,

0xf938,	// (0x0004718f) list_ai_message_pane_g

0xd4ec,	// (0x00044d43) list_ai_message_pane_t1_ParamLimits

0xd4ec,	// (0x00044d43) list_ai_message_pane_t1

0xd501,	// (0x00044d58) list_ai_message_pane_t2_ParamLimits

0xd501,	// (0x00044d58) list_ai_message_pane_t2

0xd516,	// (0x00044d6d) list_ai_message_pane_t3_ParamLimits

0xd516,	// (0x00044d6d) list_ai_message_pane_t3

0xd52b,	// (0x00044d82) list_ai_message_pane_t4_ParamLimits

0xd52b,	// (0x00044d82) list_ai_message_pane_t4

0x0003,

0xf93d,	// (0x00047194) list_ai_message_pane_t_ParamLimits

0xf93d,	// (0x00047194) list_ai_message_pane_t

0x9a83,	// (0x000412da) cell_ai_soft_ind_pane_ParamLimits

0x9a83,	// (0x000412da) cell_ai_soft_ind_pane

0xbef2,	// (0x00043749) cell_ai_soft_ind_pane_g1_ParamLimits

0xbef2,	// (0x00043749) cell_ai_soft_ind_pane_g1

0x8b38,	// (0x0004038f) grid_highlight_cp1

0xbeff,	// (0x00043756) text_secondary_cp56_ParamLimits

0xbeff,	// (0x00043756) text_secondary_cp56

0xd4b1,	// (0x00044d08) example_general_pane_ParamLimits

0xd4b1,	// (0x00044d08) example_general_pane

0xd4bd,	// (0x00044d14) example_parent_pane_g1_ParamLimits

0xd4bd,	// (0x00044d14) example_parent_pane_g1

0xd4c9,	// (0x00044d20) example_parent_pane_t1_ParamLimits

0xd4c9,	// (0x00044d20) example_parent_pane_t1

0x8e24,	// (0x0004067b) popup_preview_text_window_ParamLimits

0x8e24,	// (0x0004067b) popup_preview_text_window

0xbddb,	// (0x00043632) list_single_pane_cp2_g4

0x8d6f,	// (0x000405c6) bg_popup_preview_window_pane_ParamLimits

0x8d6f,	// (0x000405c6) bg_popup_preview_window_pane

0xd20f,	// (0x00044a66) popup_preview_text_window_t1_ParamLimits

0xd20f,	// (0x00044a66) popup_preview_text_window_t1

0xd22d,	// (0x00044a84) popup_preview_text_window_t2_ParamLimits

0xd22d,	// (0x00044a84) popup_preview_text_window_t2

0xd276,	// (0x00044acd) popup_preview_text_window_t3_ParamLimits

0xd276,	// (0x00044acd) popup_preview_text_window_t3

0xd2bb,	// (0x00044b12) popup_preview_text_window_t4_ParamLimits

0xd2bb,	// (0x00044b12) popup_preview_text_window_t4

0x0004,

0xf90c,	// (0x00047163) popup_preview_text_window_t_ParamLimits

0xf90c,	// (0x00047163) popup_preview_text_window_t

0xd339,	// (0x00044b90) scroll_pane_cp11

0xc3fa,	// (0x00043c51) bg_popup_preview_window_pane_g1

0xd1cf,	// (0x00044a26) bg_popup_preview_window_pane_g2

0xd1d7,	// (0x00044a2e) bg_popup_preview_window_pane_g3

0xd1df,	// (0x00044a36) bg_popup_preview_window_pane_g4

0xd1e7,	// (0x00044a3e) bg_popup_preview_window_pane_g5

0xd1ef,	// (0x00044a46) bg_popup_preview_window_pane_g6

0xd1f7,	// (0x00044a4e) bg_popup_preview_window_pane_g7

0xd1ff,	// (0x00044a56) bg_popup_preview_window_pane_g8

0x10bb,	// (0x00038912) aid_popup_width_pane

0x8da0,	// (0x000405f7) popup_midp_note_alarm_window_ParamLimits

0x8da0,	// (0x000405f7) popup_midp_note_alarm_window

0xb074,	// (0x000428cb) data_form_pane_ParamLimits

0x7353,	// (0x0003ebaa) form_field_data_pane_g1

0x735d,	// (0x0003ebb4) form_field_data_pane_t1_ParamLimits

0xb080,	// (0x000428d7) input_focus_pane_ParamLimits

0xb08e,	// (0x000428e5) data_form_wide_pane_ParamLimits

0x085c,	// (0x000380b3) form_field_data_wide_pane_g1

0x0868,	// (0x000380bf) form_field_data_wide_pane_t1_ParamLimits

0x9786,	// (0x00040fdd) input_focus_pane_cp6_ParamLimits

0x7c6a,	// (0x0003f4c1) input_popup_find_pane_g1_ParamLimits

0x7c6a,	// (0x0003f4c1) input_popup_find_pane_g1

0x1a38,	// (0x0003928f) aid_navi_side_left_pane

0x1a4d,	// (0x000392a4) aid_navi_side_right_pane

0xcc52,	// (0x000444a9) bg_popup_window_pane_cp30_ParamLimits

0xcc52,	// (0x000444a9) bg_popup_window_pane_cp30

0xcccc,	// (0x00044523) popup_midp_note_alarm_window_g1_ParamLimits

0xcccc,	// (0x00044523) popup_midp_note_alarm_window_g1

0xccfc,	// (0x00044553) popup_midp_note_alarm_window_t1_ParamLimits

0xccfc,	// (0x00044553) popup_midp_note_alarm_window_t1

0xcd9d,	// (0x000445f4) popup_midp_note_alarm_window_t2_ParamLimits

0xcd9d,	// (0x000445f4) popup_midp_note_alarm_window_t2

0xce4b,	// (0x000446a2) popup_midp_note_alarm_window_t3_ParamLimits

0xce4b,	// (0x000446a2) popup_midp_note_alarm_window_t3

0xce7d,	// (0x000446d4) popup_midp_note_alarm_window_t4_ParamLimits

0xce7d,	// (0x000446d4) popup_midp_note_alarm_window_t4

0xcec7,	// (0x0004471e) popup_midp_note_alarm_window_t5_ParamLimits

0xcec7,	// (0x0004471e) popup_midp_note_alarm_window_t5

0x000a,

0xf8a9,	// (0x00047100) popup_midp_note_alarm_window_t_ParamLimits

0xf8a9,	// (0x00047100) popup_midp_note_alarm_window_t

0xcf73,	// (0x000447ca) wait_bar_pane_cp1_ParamLimits

0xcf73,	// (0x000447ca) wait_bar_pane_cp1

0x8b38,	// (0x0004038f) wait_anim_pane_copy1

0x8b38,	// (0x0004038f) wait_border_pane_copy1

0xc948,	// (0x0004419f) wait_border_pane_g1_copy1

0x0882,	// (0x000380d9) form_field_popup_pane_g1

0x7377,	// (0x0003ebce) form_field_popup_pane_t1_ParamLimits

0xb080,	// (0x000428d7) input_focus_pane_cp7_ParamLimits

0xb0ba,	// (0x00042911) list_form_pane_ParamLimits

0x08a2,	// (0x000380f9) form_field_popup_wide_pane_g1

0x08aa,	// (0x00038101) form_field_popup_wide_pane_t1_ParamLimits

0xb080,	// (0x000428d7) input_focus_pane_cp8_ParamLimits

0xb0c6,	// (0x0004291d) list_form_wide_pane_ParamLimits

0xd725,	// (0x00044f7c) aid_size_cell_graphic_pane

0x73f6,	// (0x0003ec4d) data_form_pane_t1_ParamLimits

0x7518,	// (0x0003ed6f) data_form_wide_pane_t1_ParamLimits

0x91e0,	// (0x00040a37) bg_status_flat_pane

0x7883,	// (0x0003f0da) title_pane_t1_ParamLimits

0x8b4e,	// (0x000403a5) title_pane_t2_ParamLimits

0x8b74,	// (0x000403cb) title_pane_t3_ParamLimits

0xf56f,	// (0x00046dc6) title_pane_t_ParamLimits

0xb836,	// (0x0004308d) level_1_signal_ParamLimits

0xb843,	// (0x0004309a) level_2_signal_ParamLimits

0xb850,	// (0x000430a7) level_3_signal_ParamLimits

0xb85d,	// (0x000430b4) level_4_signal_ParamLimits

0xb86a,	// (0x000430c1) level_5_signal_ParamLimits

0xb877,	// (0x000430ce) level_6_signal_ParamLimits

0xb884,	// (0x000430db) level_7_signal_ParamLimits

0xb836,	// (0x0004308d) level_1_battery_ParamLimits

0xb843,	// (0x0004309a) level_2_battery_ParamLimits

0xb850,	// (0x000430a7) level_3_battery_ParamLimits

0xb85d,	// (0x000430b4) level_4_battery_ParamLimits

0xb86a,	// (0x000430c1) level_5_battery_ParamLimits

0xb877,	// (0x000430ce) level_6_battery_ParamLimits

0xb884,	// (0x000430db) level_7_battery_ParamLimits

0xcb75,	// (0x000443cc) bg_status_flat_pane_g1

0xcb7d,	// (0x000443d4) bg_status_flat_pane_g2

0xcb85,	// (0x000443dc) bg_status_flat_pane_g3

0xcb8d,	// (0x000443e4) bg_status_flat_pane_g4

0xcb95,	// (0x000443ec) bg_status_flat_pane_g5

0xcb9d,	// (0x000443f4) bg_status_flat_pane_g6

0xcba5,	// (0x000443fc) bg_status_flat_pane_g7

0x7917,	// (0x0003f16e) tabs_3_active_pane_t1_ParamLimits

0x7917,	// (0x0003f16e) tabs_3_passive_pane_t1_ParamLimits

0x7931,	// (0x0003f188) tabs_4_active_pane_t1_ParamLimits

0x7931,	// (0x0003f188) tabs_4_1_passive_pane_t1_ParamLimits

0x7c80,	// (0x0003f4d7) tabs_2_active_pane_t1_ParamLimits

0x7c80,	// (0x0003f4d7) tabs_2_passive_pane_t1_ParamLimits

0x8b94,	// (0x000403eb) bg_active_tab_pane_cp4_ParamLimits

0x7c92,	// (0x0003f4e9) tabs_2_long_active_pane_t1_ParamLimits

0xb1d8,	// (0x00042a2f) bg_passive_tab_pane_cp4_ParamLimits

0x220f,	// (0x00039a66) list_single_midp_graphic_pane_t1_ParamLimits

0x8b94,	// (0x000403eb) bg_active_tab_pane_cp5_ParamLimits

0x7ca5,	// (0x0003f4fc) tabs_3_long_active_pane_t1_ParamLimits

0xb1d8,	// (0x00042a2f) bg_passive_tab_pane_cp5_ParamLimits

0x220f,	// (0x00039a66) list_single_midp_graphic_pane_t1

0x91e0,	// (0x00040a37) bg_status_flat_pane_ParamLimits

0xc2cb,	// (0x00043b22) indicator_pane_cp2_ParamLimits

0xc2cb,	// (0x00043b22) indicator_pane_cp2

0x9358,	// (0x00040baf) navi_pane_srt_ParamLimits

0x9358,	// (0x00040baf) navi_pane_srt

0xc2f3,	// (0x00043b4a) popup_clock_digital_analogue_window_cp1

0x8bd8,	// (0x0004042f) indicator_pane_t1

0xbe9e,	// (0x000436f5) copy_highlight_pane

0xbe9e,	// (0x000436f5) cursor_graphics_pane

0xbe9e,	// (0x000436f5) graphic_within_text_pane

0xbe9e,	// (0x000436f5) link_highlight_pane

0xd2fc,	// (0x00044b53) popup_preview_text_window_t5_ParamLimits

0xd2fc,	// (0x00044b53) popup_preview_text_window_t5

0xbf19,	// (0x00043770) cursor_digital_pane

0xbf19,	// (0x00043770) cursor_primary_pane

0xbf2a,	// (0x00043781) cursor_primary_small_pane

0xbf32,	// (0x00043789) cursor_secondary_pane

0xbf3a,	// (0x00043791) cursor_title_pane

0xbf19,	// (0x00043770) link_highlight_digital_pane

0xbf21,	// (0x00043778) link_highlight_primary_pane

0xbf2a,	// (0x00043781) link_highlight_primary_small_pane

0xbf32,	// (0x00043789) link_highlight_secondary_pane

0xbf3a,	// (0x00043791) link_highlight_title_pane

0xbf19,	// (0x00043770) copy_highlight_digital_pane

0xbf19,	// (0x00043770) copy_highlight_primary_pane

0xbf2a,	// (0x00043781) copy_highlight_primary_small_pane

0xbf32,	// (0x00043789) copy_highlight_secondary_pane

0xbf3a,	// (0x00043791) copy_highlight_title_pane

0xbf32,	// (0x00043789) graphic_text_digital_pane

0xcbf5,	// (0x0004444c) graphic_text_primary_pane

0xcbfe,	// (0x00044455) graphic_text_primary_small_pane

0xbf2a,	// (0x00043781) graphic_text_secondary_pane

0xbf19,	// (0x00043770) graphic_text_title_pane

0x7f43,	// (0x0003f79a) cursor_primary_pane_g1

0xcbe7,	// (0x0004443e) cursor_text_primary_t1

0x95e4,	// (0x00040e3b) cursor_primary_small_pane_g1

0xcbd9,	// (0x00044430) cursor_text_primary_small_t1

0x95da,	// (0x00040e31) cursor_primary_small_pane_g1_copy1

0xcbcb,	// (0x00044422) cursor_text_primary_small_t1_copy1

0xcbbd,	// (0x00044414) cursor_text_title_t1

0x95d0,	// (0x00040e27) cursor_title_pane_g1

0x7f43,	// (0x0003f79a) cursor_digital_pane_g1

0xbf42,	// (0x00043799) cursor_text_digital_t1

0xbf67,	// (0x000437be) link_highlight_primary_pane_g1

0xcb66,	// (0x000443bd) link_highlight_primary_pane_t1

0xbf50,	// (0x000437a7) link_highlight_primary_small_pane_g1

0xbf58,	// (0x000437af) link_highlight_primary_small_pane_t1

0xbf67,	// (0x000437be) link_highlight_secondary_pane_g1

0xbf6f,	// (0x000437c6) link_highlight_secondary_pane_t1

0xcada,	// (0x00044331) link_highlight_title_pane_g1

0xcae2,	// (0x00044339) link_highlight_title_pane_t1

0xcac3,	// (0x0004431a) link_highlight_digital_pane_g1

0xcacb,	// (0x00044322) link_highlight_digital_pane_t1

0xc98d,	// (0x000441e4) copy_highlight_primary_pane_g1

0xc995,	// (0x000441ec) copy_highlight_primary_pane_t1

0xc967,	// (0x000441be) copy_highlight_primary_small_pane_g1

0xc97e,	// (0x000441d5) copy_highlight_primary_small_pane_t1

0xbf7e,	// (0x000437d5) copy_highlight_secondary_pane_g1

0xbf86,	// (0x000437dd) copy_highlight_secondary_pane_t1

0xc967,	// (0x000441be) copy_highlight_title_pane_g1

0xc96f,	// (0x000441c6) copy_highlight_title_pane_t1

0xc98d,	// (0x000441e4) copy_highlight_digital_pane_g1

0xd8ab,	// (0x00045102) copy_highlight_digital_pane_t1

0xd7ff,	// (0x00045056) graphic_text_primary_pane_g1

0xd88f,	// (0x000450e6) graphic_text_primary_pane_t1

0xd89d,	// (0x000450f4) graphic_text_primary_pane_t2

0x0001,

0xf9d8,	// (0x0004722f) graphic_text_primary_pane_t

0xd86b,	// (0x000450c2) graphic_text_primary_small_pane_g1

0xd873,	// (0x000450ca) graphic_text_primary_small_pane_t1

0xd881,	// (0x000450d8) graphic_text_primary_small_pane_t2

0x0001,

0xf9d3,	// (0x0004722a) graphic_text_primary_small_pane_t

0xd847,	// (0x0004509e) graphic_text_secondary_pane_g1

0xd84f,	// (0x000450a6) graphic_text_secondary_pane_t1

0xd85d,	// (0x000450b4) graphic_text_secondary_pane_t2

0x0001,

0xf9ce,	// (0x00047225) graphic_text_secondary_pane_t

0xd823,	// (0x0004507a) graphic_text_title_pane_g1

0xd82b,	// (0x00045082) graphic_text_title_pane_t1

0xd839,	// (0x00045090) graphic_text_title_pane_t2

0x0001,

0xf9c9,	// (0x00047220) graphic_text_title_pane_t

0xd7ff,	// (0x00045056) graphic_text_digital_pane_g1

0xd807,	// (0x0004505e) graphic_text_digital_pane_t1

0xd815,	// (0x0004506c) graphic_text_digital_pane_t2

0x0001,

0xf9c4,	// (0x0004721b) graphic_text_digital_pane_t

0x8b94,	// (0x000403eb) navi_icon_pane_srt_ParamLimits

0x8b94,	// (0x000403eb) navi_icon_pane_srt

0x8b38,	// (0x0004038f) navi_midp_pane_srt

0x8b38,	// (0x0004038f) navi_navi_pane_srt

0x8b94,	// (0x000403eb) navi_text_pane_srt_ParamLimits

0x8b94,	// (0x000403eb) navi_text_pane_srt

0xd7ca,	// (0x00045021) navi_navi_icon_text_pane_srt

0xd7d2,	// (0x00045029) navi_navi_pane_srt_g1_ParamLimits

0xd7d2,	// (0x00045029) navi_navi_pane_srt_g1

0xd7e4,	// (0x0004503b) navi_navi_pane_srt_g2_ParamLimits

0xd7e4,	// (0x0004503b) navi_navi_pane_srt_g2

0x0001,

0xf9bf,	// (0x00047216) navi_navi_pane_srt_g_ParamLimits

0xf9bf,	// (0x00047216) navi_navi_pane_srt_g

0xd7f6,	// (0x0004504d) navi_navi_tabs_pane_srt

0xd7ca,	// (0x00045021) navi_navi_text_pane_srt

0xd7ca,	// (0x00045021) navi_navi_volume_pane_srt

0xd7bb,	// (0x00045012) navi_navi_text_pane_srt_t1

0x262d,	// (0x00039e84) navi_navi_volume_pane_srt_g1

0x2635,	// (0x00039e8c) volume_small_pane_srt_ParamLimits

0x2635,	// (0x00039e8c) volume_small_pane_srt

0x1f6b,	// (0x000397c2) volume_small_pane_srt_g1_ParamLimits

0x1f6b,	// (0x000397c2) volume_small_pane_srt_g1

0x1f7b,	// (0x000397d2) volume_small_pane_srt_g2_ParamLimits

0x1f7b,	// (0x000397d2) volume_small_pane_srt_g2

0x1f8c,	// (0x000397e3) volume_small_pane_srt_g3_ParamLimits

0x1f8c,	// (0x000397e3) volume_small_pane_srt_g3

0x1f9d,	// (0x000397f4) volume_small_pane_srt_g4_ParamLimits

0x1f9d,	// (0x000397f4) volume_small_pane_srt_g4

0x1fae,	// (0x00039805) volume_small_pane_srt_g5_ParamLimits

0x1fae,	// (0x00039805) volume_small_pane_srt_g5

0x1fbf,	// (0x00039816) volume_small_pane_srt_g6_ParamLimits

0x1fbf,	// (0x00039816) volume_small_pane_srt_g6

0x1fd0,	// (0x00039827) volume_small_pane_srt_g7_ParamLimits

0x1fd0,	// (0x00039827) volume_small_pane_srt_g7

0x1fe1,	// (0x00039838) volume_small_pane_srt_g8_ParamLimits

0x1fe1,	// (0x00039838) volume_small_pane_srt_g8

0x1ff2,	// (0x00039849) volume_small_pane_srt_g9_ParamLimits

0x1ff2,	// (0x00039849) volume_small_pane_srt_g9

0x2003,	// (0x0003985a) volume_small_pane_srt_g10_ParamLimits

0x2003,	// (0x0003985a) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x00046fd1) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x00046fd1) volume_small_pane_srt_g

0x968e,	// (0x00040ee5) query_popup_data_pane_cp2

0xd7a1,	// (0x00044ff8) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xd7a1,	// (0x00044ff8) navi_navi_icon_text_pane_srt_t1

0xcbf5,	// (0x0004444c) navi_tabs_2_long_pane_srt

0xcbf5,	// (0x0004444c) navi_tabs_2_pane_srt

0xcbf5,	// (0x0004444c) navi_tabs_3_long_pane_srt

0xcbf5,	// (0x0004444c) navi_tabs_3_pane_srt

0xcbf5,	// (0x0004444c) navi_tabs_4_pane_srt

0x260d,	// (0x00039e64) tabs_2_active_pane_srt_ParamLimits

0x260d,	// (0x00039e64) tabs_2_active_pane_srt

0x261d,	// (0x00039e74) tabs_2_passive_pane_srt_ParamLimits

0x261d,	// (0x00039e74) tabs_2_passive_pane_srt

0xc4fe,	// (0x00043d55) bg_passive_tab_pane_cp1_srt_ParamLimits

0xc4fe,	// (0x00043d55) bg_passive_tab_pane_cp1_srt

0xd77f,	// (0x00044fd6) bg_passive_tab_pane_g1_cp1_srt

0xbb7e,	// (0x000433d5) bg_passive_tab_pane_g2_cp1_srt

0xd788,	// (0x00044fdf) bg_passive_tab_pane_g3_cp1_srt

0x8b86,	// (0x000403dd) bg_active_tab_pane_cp1_srt_ParamLimits

0x8b86,	// (0x000403dd) bg_active_tab_pane_cp1_srt

0xd791,	// (0x00044fe8) tabs_2_active_pane_srt_g1

0x9d0c,	// (0x00041563) tabs_2_active_pane_srt_t1_ParamLimits

0x9d0c,	// (0x00041563) tabs_2_active_pane_srt_t1

0xd77f,	// (0x00044fd6) bg_active_tab_pane_g1_cp1_srt

0xbb7e,	// (0x000433d5) bg_active_tab_pane_g2_cp1_srt

0xd788,	// (0x00044fdf) bg_active_tab_pane_g3_cp1_srt

0x25da,	// (0x00039e31) tabs_3_active_pane_srt_ParamLimits

0x25da,	// (0x00039e31) tabs_3_active_pane_srt

0x25eb,	// (0x00039e42) tabs_3_passive_pane_cp_srt_ParamLimits

0x25eb,	// (0x00039e42) tabs_3_passive_pane_cp_srt

0x25fc,	// (0x00039e53) tabs_3_passive_pane_srt_ParamLimits

0x25fc,	// (0x00039e53) tabs_3_passive_pane_srt

0xc4fe,	// (0x00043d55) bg_passive_tab_pane_cp2_srt_ParamLimits

0xc4fe,	// (0x00043d55) bg_passive_tab_pane_cp2_srt

0xbf95,	// (0x000437ec) bg_passive_tab_pane_g1_cp2_srt

0xbb7e,	// (0x000433d5) bg_passive_tab_pane_g2_cp2_srt

0xbf9e,	// (0x000437f5) bg_passive_tab_pane_g3_cp2_srt

0x8b86,	// (0x000403dd) bg_active_tab_pane_cp2_srt_ParamLimits

0x8b86,	// (0x000403dd) bg_active_tab_pane_cp2_srt

0xd777,	// (0x00044fce) tabs_3_active_pane_srt_g1

0x9cf6,	// (0x0004154d) tabs_3_active_pane_srt_t1_ParamLimits

0x9cf6,	// (0x0004154d) tabs_3_active_pane_srt_t1

0xbf95,	// (0x000437ec) bg_active_tab_pane_g1_cp2_srt

0xbb7e,	// (0x000433d5) bg_active_tab_pane_g2_cp2_srt

0xbf9e,	// (0x000437f5) bg_active_tab_pane_g3_cp2_srt

0x2592,	// (0x00039de9) tabs_4_active_pane_srt_ParamLimits

0x2592,	// (0x00039de9) tabs_4_active_pane_srt

0x25a4,	// (0x00039dfb) tabs_4_passive_pane_cp2_srt_ParamLimits

0x25a4,	// (0x00039dfb) tabs_4_passive_pane_cp2_srt

0xc0c2,	// (0x00043919) aid_size_cell_toolbar

0xc9b0,	// (0x00044207) main_idle_act_pane_ParamLimits

0xc18a,	// (0x000439e1) popup_large_graphic_colour_window_ParamLimits

0x90a4,	// (0x000408fb) popup_toolbar_window_ParamLimits

0x90a4,	// (0x000408fb) popup_toolbar_window

0xd69d,	// (0x00044ef4) list_single_graphic_2heading_pane_ParamLimits

0xd69d,	// (0x00044ef4) list_single_graphic_2heading_pane

0xb67d,	// (0x00042ed4) aid_size_cell_apps_grid_lsc_pane

0xb68f,	// (0x00042ee6) aid_size_cell_apps_grid_prt_pane

0xb1d8,	// (0x00042a2f) bg_wml_button_pane_cp1_ParamLimits

0xb1d8,	// (0x00042a2f) bg_wml_button_pane_cp1

0x9586,	// (0x00040ddd) form_midp_field_text_pane_t1_ParamLimits

0xc4fe,	// (0x00043d55) input_focus_pane_cp050_ParamLimits

0xc646,	// (0x00043e9d) list_midp_form_text_pane_ParamLimits

0xc623,	// (0x00043e7a) input_focus_pane_cp051_ParamLimits

0xc637,	// (0x00043e8e) list_midp_choice_pane_ParamLimits

0x9523,	// (0x00040d7a) list_single_2graphic_pane_cp3_ParamLimits

0x9523,	// (0x00040d7a) list_single_2graphic_pane_cp3

0x9536,	// (0x00040d8d) list_single_midp_graphic_pane_ParamLimits

0x9536,	// (0x00040d8d) list_single_midp_graphic_pane

0x0a7a,	// (0x000382d1) list_single_graphic_2heading_pane_g1_ParamLimits

0x0a7a,	// (0x000382d1) list_single_graphic_2heading_pane_g1

0x0a86,	// (0x000382dd) list_single_graphic_2heading_pane_g4_ParamLimits

0x0a86,	// (0x000382dd) list_single_graphic_2heading_pane_g4

0x0a92,	// (0x000382e9) list_single_graphic_2heading_pane_g5_ParamLimits

0x0a92,	// (0x000382e9) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x00047024) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x00047024) list_single_graphic_2heading_pane_g

0x0a9e,	// (0x000382f5) list_single_graphic_2heading_pane_t1_ParamLimits

0x0a9e,	// (0x000382f5) list_single_graphic_2heading_pane_t1

0x0ab2,	// (0x00038309) list_single_graphic_2heading_pane_t2_ParamLimits

0x0ab2,	// (0x00038309) list_single_graphic_2heading_pane_t2

0x0ace,	// (0x00038325) list_single_graphic_2heading_pane_t3_ParamLimits

0x0ace,	// (0x00038325) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x0004702b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x0004702b) list_single_graphic_2heading_pane_t

0xc338,	// (0x00043b8f) bg_popup_sub_pane_cp2

0xc362,	// (0x00043bb9) grid_toobar_pane

0x217e,	// (0x000399d5) cell_toolbar_pane_ParamLimits

0x217e,	// (0x000399d5) cell_toolbar_pane

0xc39e,	// (0x00043bf5) cell_toolbar_pane_g1_ParamLimits

0xc39e,	// (0x00043bf5) cell_toolbar_pane_g1

0xc3b2,	// (0x00043c09) cell_toolbar_pane_g2_ParamLimits

0xc3b2,	// (0x00043c09) cell_toolbar_pane_g2

0x0001,

0xf7db,	// (0x00047032) cell_toolbar_pane_g_ParamLimits

0xf7db,	// (0x00047032) cell_toolbar_pane_g

0xc3d4,	// (0x00043c2b) grid_highlight_pane_cp2_ParamLimits

0xc3d4,	// (0x00043c2b) grid_highlight_pane_cp2

0xc3ee,	// (0x00043c45) toolbar_button_pane

0xc3fa,	// (0x00043c51) toolbar_button_pane_g1

0xc402,	// (0x00043c59) toolbar_button_pane_g2

0xc40a,	// (0x00043c61) toolbar_button_pane_g3

0xc412,	// (0x00043c69) toolbar_button_pane_g4

0xc41a,	// (0x00043c71) toolbar_button_pane_g5

0xc422,	// (0x00043c79) toolbar_button_pane_g6

0xc42a,	// (0x00043c81) toolbar_button_pane_g7

0xc432,	// (0x00043c89) toolbar_button_pane_g8

0xc43a,	// (0x00043c91) toolbar_button_pane_g9

0x0009,

0xf7e0,	// (0x00047037) toolbar_button_pane_g

0x21c2,	// (0x00039a19) list_single_2graphic_pane_g1_cp3_ParamLimits

0x21c2,	// (0x00039a19) list_single_2graphic_pane_g1_cp3

0x8439,	// (0x0003fc90) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8439,	// (0x0003fc90) list_single_2graphic_pane_g2_cp3

0x21df,	// (0x00039a36) list_single_2graphic_pane_g3_cp3

0x21e7,	// (0x00039a3e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x21e7,	// (0x00039a3e) list_single_2graphic_pane_g4_cp3

0x21f3,	// (0x00039a4a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x21f3,	// (0x00039a4a) list_single_2graphic_pane_t1_cp3

0xc48a,	// (0x00043ce1) list_single_midp_graphic_pane_g2_ParamLimits

0xc48a,	// (0x00043ce1) list_single_midp_graphic_pane_g2

0x0a6a,	// (0x000382c1) aid_zoom_text_primary

0x215a,	// (0x000399b1) aid_zoom_text_secondary

0xc052,	// (0x000438a9) status_small_pane_g7_ParamLimits

0xc052,	// (0x000438a9) status_small_pane_g7

0xc075,	// (0x000438cc) status_small_pane_t1_ParamLimits

0x785f,	// (0x0003f0b6) title_pane_g2

0x0003,

0xf566,	// (0x00046dbd) title_pane_g

0x7ae7,	// (0x0003f33e) aid_size_cell_colour_1_pane_ParamLimits

0x7ae7,	// (0x0003f33e) aid_size_cell_colour_1_pane

0x7afb,	// (0x0003f352) aid_size_cell_colour_2_pane_ParamLimits

0x7afb,	// (0x0003f352) aid_size_cell_colour_2_pane

0x7b0f,	// (0x0003f366) aid_size_cell_colour_3_pane_ParamLimits

0x7b0f,	// (0x0003f366) aid_size_cell_colour_3_pane

0x7b23,	// (0x0003f37a) aid_size_cell_colour_4_pane_ParamLimits

0x7b23,	// (0x0003f37a) aid_size_cell_colour_4_pane

0x1974,	// (0x000391cb) title_pane_stacon_g1_ParamLimits

0x1974,	// (0x000391cb) title_pane_stacon_g1

0xca16,	// (0x0004426d) popup_note_wait_window_g3_ParamLimits

0xca16,	// (0x0004426d) popup_note_wait_window_g3

0xca8c,	// (0x000442e3) popup_note_wait_window_t5_ParamLimits

0xca8c,	// (0x000442e3) popup_note_wait_window_t5

0x8b38,	// (0x0004038f) main_feb_china_hwr_fs_writing_pane

0x816f,	// (0x0003f9c6) popup_feb_china_hwr_fs_window_ParamLimits

0x816f,	// (0x0003f9c6) popup_feb_china_hwr_fs_window

0x844a,	// (0x0003fca1) aid_size_cell_hwr_fs_ParamLimits

0x844a,	// (0x0003fca1) aid_size_cell_hwr_fs

0xc4fe,	// (0x00043d55) bg_popup_sub_pane_cp3_ParamLimits

0xc4fe,	// (0x00043d55) bg_popup_sub_pane_cp3

0x845f,	// (0x0003fcb6) grid_hwr_fs_pane_ParamLimits

0x845f,	// (0x0003fcb6) grid_hwr_fs_pane

0x2252,	// (0x00039aa9) linegrid_hwr_fs_pane_ParamLimits

0x2252,	// (0x00039aa9) linegrid_hwr_fs_pane

0x8477,	// (0x0003fcce) cell_hwr_fs_pane_ParamLimits

0x8477,	// (0x0003fcce) cell_hwr_fs_pane

0xc50a,	// (0x00043d61) linegrid_hwr_fs_pane_g1_ParamLimits

0xc50a,	// (0x00043d61) linegrid_hwr_fs_pane_g1

0x94f7,	// (0x00040d4e) linegrid_hwr_fs_pane_g2_ParamLimits

0x94f7,	// (0x00040d4e) linegrid_hwr_fs_pane_g2

0xc516,	// (0x00043d6d) linegrid_hwr_fs_pane_g3_ParamLimits

0xc516,	// (0x00043d6d) linegrid_hwr_fs_pane_g3

0x2284,	// (0x00039adb) linegrid_hwr_fs_pane_g4_ParamLimits

0x2284,	// (0x00039adb) linegrid_hwr_fs_pane_g4

0x229e,	// (0x00039af5) linegrid_hwr_fs_pane_g5_ParamLimits

0x229e,	// (0x00039af5) linegrid_hwr_fs_pane_g5

0x0004,

0xf806,	// (0x0004705d) linegrid_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x0004705d) linegrid_hwr_fs_pane_g

0xc522,	// (0x00043d79) cell_hwr_fs_pane_g1_ParamLimits

0xc522,	// (0x00043d79) cell_hwr_fs_pane_g1

0xc304,	// (0x00043b5b) cell_hwr_fs_pane_g2_ParamLimits

0xc304,	// (0x00043b5b) cell_hwr_fs_pane_g2

0x9509,	// (0x00040d60) cell_hwr_fs_pane_g3_ParamLimits

0x9509,	// (0x00040d60) cell_hwr_fs_pane_g3

0x9516,	// (0x00040d6d) cell_hwr_fs_pane_g4_ParamLimits

0x9516,	// (0x00040d6d) cell_hwr_fs_pane_g4

0x0003,

0xf811,	// (0x00047068) cell_hwr_fs_pane_g_ParamLimits

0xf811,	// (0x00047068) cell_hwr_fs_pane_g

0x849d,	// (0x0003fcf4) cell_hwr_fs_pane_t1

0x8b38,	// (0x0004038f) grid_highlight_pane_cp6

0x8b38,	// (0x0004038f) main_idle_act2_pane

0xb186,	// (0x000429dd) aid_inside_area_popup_secondary

0x99c8,	// (0x0004121f) aid_inside_area_window_primary_ParamLimits

0x99c8,	// (0x0004121f) aid_inside_area_window_primary

0xd8ba,	// (0x00045111) ai2_news_ticker_pane

0xd8c2,	// (0x00045119) aid_size_cell_ai1_link_ParamLimits

0xd8c2,	// (0x00045119) aid_size_cell_ai1_link

0x9d22,	// (0x00041579) popup_ai2_data_window_ParamLimits

0x9d22,	// (0x00041579) popup_ai2_data_window

0xd8dc,	// (0x00045133) popup_ai2_link_window_ParamLimits

0xd8dc,	// (0x00045133) popup_ai2_link_window

0xc4fe,	// (0x00043d55) bg_popup_sub_pane_cp4_ParamLimits

0xc4fe,	// (0x00043d55) bg_popup_sub_pane_cp4

0xd8f0,	// (0x00045147) grid_ai2_link_pane_ParamLimits

0xd8f0,	// (0x00045147) grid_ai2_link_pane

0xd907,	// (0x0004515e) popup_ai2_link_window_g1_ParamLimits

0xd907,	// (0x0004515e) popup_ai2_link_window_g1

0xd913,	// (0x0004516a) popup_ai2_link_window_g2_ParamLimits

0xd913,	// (0x0004516a) popup_ai2_link_window_g2

0x0001,

0xf9dd,	// (0x00047234) popup_ai2_link_window_g_ParamLimits

0xf9dd,	// (0x00047234) popup_ai2_link_window_g

0xd922,	// (0x00045179) ai2_mp_button_pane

0xd92a,	// (0x00045181) ai2_mp_volume_pane

0xc623,	// (0x00043e7a) bg_popup_sub_pane_cp5_ParamLimits

0xc623,	// (0x00043e7a) bg_popup_sub_pane_cp5

0xd932,	// (0x00045189) heading_ai2_gene_pane_ParamLimits

0xd932,	// (0x00045189) heading_ai2_gene_pane

0xd93e,	// (0x00045195) list_ai2_gene_pane_ParamLimits

0xd93e,	// (0x00045195) list_ai2_gene_pane

0xd986,	// (0x000451dd) cell_ai2_link_pane_ParamLimits

0xd986,	// (0x000451dd) cell_ai2_link_pane

0xd99c,	// (0x000451f3) cell_ai2_link_pane_g1

0x8b38,	// (0x0004038f) grid_highlight_pane_cp7

0x264a,	// (0x00039ea1) ai2_mp_volume_pane_g1

0xda39,	// (0x00045290) ai2_mp_volume_pane_g2

0x9d4c,	// (0x000415a3) list_ai2_gene_pane_t1

0xda41,	// (0x00045298) ai2_mp_volume_pane_g3

0x0002,

0xf9f6,	// (0x0004724d) ai2_mp_volume_pane_g

0x2652,	// (0x00039ea9) volume_small_pane_cp3

0xda49,	// (0x000452a0) aid_size_cell_ai2_button

0xda51,	// (0x000452a8) grid_ai2_button_pane

0xda5a,	// (0x000452b1) cell_ai2_button_pane_ParamLimits

0xda5a,	// (0x000452b1) cell_ai2_button_pane

0x8b2e,	// (0x00040385) cell_ai2_button_pane_g1

0x8b38,	// (0x0004038f) grid_highlight_pane_cp8

0xd9f9,	// (0x00045250) ai2_gene_pane_t1_ParamLimits

0xd9f9,	// (0x00045250) ai2_gene_pane_t1

0x80d7,	// (0x0003f92e) aid_height_parent_landscape

0x9ad1,	// (0x00041328) aid_height_set_list

0xc9b0,	// (0x00044207) aid_size_parent

0xd725,	// (0x00044f7c) aid_size_cell_graphic_pane_ParamLimits

0xd94e,	// (0x000451a5) popup_ai2_data_window_g1_ParamLimits

0xd94e,	// (0x000451a5) popup_ai2_data_window_g1

0xd95a,	// (0x000451b1) ai2_news_ticker_pane_g1

0xd962,	// (0x000451b9) ai2_news_ticker_pane_g2

0x0001,

0xf9e2,	// (0x00047239) ai2_news_ticker_pane_g

0xd96a,	// (0x000451c1) ai2_news_ticker_pane_t1

0xd978,	// (0x000451cf) ai2_news_ticker_pane_t2

0x0001,

0xf9e7,	// (0x0004723e) ai2_news_ticker_pane_t

0xd9a5,	// (0x000451fc) heading_ai2_gene_pane_g1

0xd9ad,	// (0x00045204) heading_ai2_gene_pane_t1_ParamLimits

0xd9ad,	// (0x00045204) heading_ai2_gene_pane_t1

0xd9c2,	// (0x00045219) list_highlight_pane_cp6

0x9d36,	// (0x0004158d) ai2_gene_pane_ParamLimits

0x9d36,	// (0x0004158d) ai2_gene_pane

0x9d5a,	// (0x000415b1) list_ai2_gene_pane_t2

0x0001,

0xf9ec,	// (0x00047243) list_ai2_gene_pane_t

0xd9ca,	// (0x00045221) list_highlight_pane_cp8_ParamLimits

0xd9ca,	// (0x00045221) list_highlight_pane_cp8

0xd9db,	// (0x00045232) ai2_gene_pane_g1_ParamLimits

0xd9db,	// (0x00045232) ai2_gene_pane_g1

0xd9ed,	// (0x00045244) ai2_gene_pane_g2_ParamLimits

0xd9ed,	// (0x00045244) ai2_gene_pane_g2

0x0001,

0xf9f1,	// (0x00047248) ai2_gene_pane_g_ParamLimits

0xf9f1,	// (0x00047248) ai2_gene_pane_g

0x99a1,	// (0x000411f8) scroll_pane_cp12

0x8096,	// (0x0003f8ed) control_pane_t3_ParamLimits

0x8096,	// (0x0003f8ed) control_pane_t3

0xc066,	// (0x000438bd) status_small_pane_g8_ParamLimits

0xc066,	// (0x000438bd) status_small_pane_g8

0x8204,	// (0x0003fa5b) popup_find_window_ParamLimits

0x8dda,	// (0x00040631) popup_note_image_window_ParamLimits

0x0ae6,	// (0x0003833d) list_double2_graphic_pane_vc_g1_ParamLimits

0x0ae6,	// (0x0003833d) list_double2_graphic_pane_vc_g1

0xc9a4,	// (0x000441fb) list_double2_graphic_pane_vc_g2_ParamLimits

0xc9a4,	// (0x000441fb) list_double2_graphic_pane_vc_g2

0x21ae,	// (0x00039a05) list_double2_graphic_pane_vc_g3_ParamLimits

0x21ae,	// (0x00039a05) list_double2_graphic_pane_vc_g3

0x0002,

0xf632,	// (0x00046e89) list_double2_graphic_pane_vc_g_ParamLimits

0xf632,	// (0x00046e89) list_double2_graphic_pane_vc_g

0x0af2,	// (0x00038349) list_double2_graphic_pane_vc_t1_ParamLimits

0x0af2,	// (0x00038349) list_double2_graphic_pane_vc_t1

0xc9a4,	// (0x000441fb) list_single_heading_pane_vc_g1_ParamLimits

0xc9a4,	// (0x000441fb) list_single_heading_pane_vc_g1

0x21ae,	// (0x00039a05) list_single_heading_pane_vc_g2_ParamLimits

0x21ae,	// (0x00039a05) list_single_heading_pane_vc_g2

0x0001,

0xf5ea,	// (0x00046e41) list_single_heading_pane_vc_g_ParamLimits

0xf5ea,	// (0x00046e41) list_single_heading_pane_vc_g

0x0b08,	// (0x0003835f) list_single_heading_pane_vc_t1_ParamLimits

0x0b08,	// (0x0003835f) list_single_heading_pane_vc_t1

0x0b20,	// (0x00038377) list_single_heading_pane_vc_t2_ParamLimits

0x0b20,	// (0x00038377) list_single_heading_pane_vc_t2

0x0001,

0xf7f5,	// (0x0004704c) list_single_heading_pane_vc_t_ParamLimits

0xf7f5,	// (0x0004704c) list_single_heading_pane_vc_t

0xc442,	// (0x00043c99) list_setting_number_pane_vc_g1_ParamLimits

0xc442,	// (0x00043c99) list_setting_number_pane_vc_g1

0xc44e,	// (0x00043ca5) list_setting_number_pane_vc_g2_ParamLimits

0xc44e,	// (0x00043ca5) list_setting_number_pane_vc_g2

0x0001,

0xf7fa,	// (0x00047051) list_setting_number_pane_vc_g_ParamLimits

0xf7fa,	// (0x00047051) list_setting_number_pane_vc_g

0xc45a,	// (0x00043cb1) list_setting_number_pane_vc_t1_ParamLimits

0xc45a,	// (0x00043cb1) list_setting_number_pane_vc_t1

0xc46e,	// (0x00043cc5) list_setting_number_pane_vc_t2_ParamLimits

0xc46e,	// (0x00043cc5) list_setting_number_pane_vc_t2

0xc496,	// (0x00043ced) list_setting_number_pane_vc_t3_ParamLimits

0xc496,	// (0x00043ced) list_setting_number_pane_vc_t3

0x0002,

0xf7ff,	// (0x00047056) list_setting_number_pane_vc_t_ParamLimits

0xf7ff,	// (0x00047056) list_setting_number_pane_vc_t

0xc4c2,	// (0x00043d19) set_value_pane_vc_ParamLimits

0xc4c2,	// (0x00043d19) set_value_pane_vc

0xd69d,	// (0x00044ef4) list_double2_graphic_pane_vc_ParamLimits

0xd69d,	// (0x00044ef4) list_double2_graphic_pane_vc

0x24ee,	// (0x00039d45) list_double2_large_graphic_pane_vc_ParamLimits

0x24ee,	// (0x00039d45) list_double2_large_graphic_pane_vc

0xd69d,	// (0x00044ef4) list_double2_pane_vc_ParamLimits

0xd69d,	// (0x00044ef4) list_double2_pane_vc

0xd69d,	// (0x00044ef4) list_double_graphic_heading_pane_vc_ParamLimits

0xd69d,	// (0x00044ef4) list_double_graphic_heading_pane_vc

0xd69d,	// (0x00044ef4) list_double_graphic_pane_vc_ParamLimits

0xd69d,	// (0x00044ef4) list_double_graphic_pane_vc

0xd69d,	// (0x00044ef4) list_double_heading_pane_vc_ParamLimits

0xd69d,	// (0x00044ef4) list_double_heading_pane_vc

0x24ee,	// (0x00039d45) list_double_large_graphic_pane_vc_ParamLimits

0x24ee,	// (0x00039d45) list_double_large_graphic_pane_vc

0xd69d,	// (0x00044ef4) list_double_number_pane_vc_ParamLimits

0xd69d,	// (0x00044ef4) list_double_number_pane_vc

0xd69d,	// (0x00044ef4) list_double_pane_vc_ParamLimits

0xd69d,	// (0x00044ef4) list_double_pane_vc

0xd69d,	// (0x00044ef4) list_double_time_pane_vc_ParamLimits

0xd69d,	// (0x00044ef4) list_double_time_pane_vc

0xd69d,	// (0x00044ef4) list_setting_number_pane_vc_ParamLimits

0xd69d,	// (0x00044ef4) list_setting_number_pane_vc

0xd69d,	// (0x00044ef4) list_setting_pane_vc_ParamLimits

0xd69d,	// (0x00044ef4) list_setting_pane_vc

0xd69d,	// (0x00044ef4) list_single_graphic_heading_pane_vc_ParamLimits

0xd69d,	// (0x00044ef4) list_single_graphic_heading_pane_vc

0xd69d,	// (0x00044ef4) list_single_heading_pane_vc_ParamLimits

0xd69d,	// (0x00044ef4) list_single_heading_pane_vc

0xd69d,	// (0x00044ef4) list_single_number_heading_pane_vc_ParamLimits

0xd69d,	// (0x00044ef4) list_single_number_heading_pane_vc

0x0ae6,	// (0x0003833d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0ae6,	// (0x0003833d) list_double_graphic_heading_pane_vc_g1

0xc9a4,	// (0x000441fb) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc9a4,	// (0x000441fb) list_double_graphic_heading_pane_vc_g2

0x21ae,	// (0x00039a05) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x21ae,	// (0x00039a05) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf632,	// (0x00046e89) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf632,	// (0x00046e89) list_double_graphic_heading_pane_vc_g

0x0c0f,	// (0x00038466) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0c0f,	// (0x00038466) list_double_graphic_heading_pane_vc_t1

0x0b08,	// (0x0003835f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0b08,	// (0x0003835f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fd,	// (0x00047254) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fd,	// (0x00047254) list_double_graphic_heading_pane_vc_t

0xc442,	// (0x00043c99) list_setting_pane_vc_g1_ParamLimits

0xc442,	// (0x00043c99) list_setting_pane_vc_g1

0xc44e,	// (0x00043ca5) list_setting_pane_vc_g2_ParamLimits

0xc44e,	// (0x00043ca5) list_setting_pane_vc_g2

0x0001,

0xf7fa,	// (0x00047051) list_setting_pane_vc_g_ParamLimits

0xf7fa,	// (0x00047051) list_setting_pane_vc_g

0xdc70,	// (0x000454c7) list_setting_pane_vc_t1_ParamLimits

0xdc70,	// (0x000454c7) list_setting_pane_vc_t1

0xdc8c,	// (0x000454e3) list_setting_pane_vc_t2_ParamLimits

0xdc8c,	// (0x000454e3) list_setting_pane_vc_t2

0x0001,

0xfa40,	// (0x00047297) list_setting_pane_vc_t_ParamLimits

0xfa40,	// (0x00047297) list_setting_pane_vc_t

0xc4c2,	// (0x00043d19) set_value_pane_cp_vc_ParamLimits

0xc4c2,	// (0x00043d19) set_value_pane_cp_vc

0xc9a4,	// (0x000441fb) list_single_number_heading_pane_vc_g1_ParamLimits

0xc9a4,	// (0x000441fb) list_single_number_heading_pane_vc_g1

0x21ae,	// (0x00039a05) list_single_number_heading_pane_vc_g2_ParamLimits

0x21ae,	// (0x00039a05) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ea,	// (0x00046e41) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ea,	// (0x00046e41) list_single_number_heading_pane_vc_g

0x0b08,	// (0x0003835f) list_single_number_heading_pane_vc_t1_ParamLimits

0x0b08,	// (0x0003835f) list_single_number_heading_pane_vc_t1

0x0c23,	// (0x0003847a) list_single_number_heading_pane_vc_t2_ParamLimits

0x0c23,	// (0x0003847a) list_single_number_heading_pane_vc_t2

0x0c37,	// (0x0003848e) list_single_number_heading_pane_vc_t3_ParamLimits

0x0c37,	// (0x0003848e) list_single_number_heading_pane_vc_t3

0x0002,

0xfa45,	// (0x0004729c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x0004729c) list_single_number_heading_pane_vc_t

0x0ae6,	// (0x0003833d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0ae6,	// (0x0003833d) list_single_graphic_heading_pane_vc_g1

0xc9a4,	// (0x000441fb) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc9a4,	// (0x000441fb) list_single_graphic_heading_pane_vc_g4

0x21ae,	// (0x00039a05) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x21ae,	// (0x00039a05) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf632,	// (0x00046e89) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf632,	// (0x00046e89) list_single_graphic_heading_pane_vc_g

0x0b08,	// (0x0003835f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0b08,	// (0x0003835f) list_single_graphic_heading_pane_vc_t1

0x0c49,	// (0x000384a0) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0c49,	// (0x000384a0) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4c,	// (0x000472a3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4c,	// (0x000472a3) list_single_graphic_heading_pane_vc_t

0xc9a4,	// (0x000441fb) list_double2_pane_vc_g1_ParamLimits

0xc9a4,	// (0x000441fb) list_double2_pane_vc_g1

0x21ae,	// (0x00039a05) list_double2_pane_vc_g2_ParamLimits

0x21ae,	// (0x00039a05) list_double2_pane_vc_g2

0x0001,

0xf5ea,	// (0x00046e41) list_double2_pane_vc_g_ParamLimits

0xf5ea,	// (0x00046e41) list_double2_pane_vc_g

0x0c5d,	// (0x000384b4) list_double2_pane_vc_t1_ParamLimits

0x0c5d,	// (0x000384b4) list_double2_pane_vc_t1

0x265b,	// (0x00039eb2) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x265b,	// (0x00039eb2) list_double2_large_graphic_pane_vc_g1

0x2667,	// (0x00039ebe) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2667,	// (0x00039ebe) list_double2_large_graphic_pane_vc_g2

0x2673,	// (0x00039eca) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2673,	// (0x00039eca) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf602,	// (0x00046e59) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf602,	// (0x00046e59) list_double2_large_graphic_pane_vc_g

0x0c73,	// (0x000384ca) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0c73,	// (0x000384ca) list_double2_large_graphic_pane_vc_t1

0x267f,	// (0x00039ed6) list_double_time_pane_vc_g1_ParamLimits

0x267f,	// (0x00039ed6) list_double_time_pane_vc_g1

0x268b,	// (0x00039ee2) list_double_time_pane_vc_g2_ParamLimits

0x268b,	// (0x00039ee2) list_double_time_pane_vc_g2

0x0001,

0xfa51,	// (0x000472a8) list_double_time_pane_vc_g_ParamLimits

0xfa51,	// (0x000472a8) list_double_time_pane_vc_g

0x0c89,	// (0x000384e0) list_double_time_pane_vc_t1_ParamLimits

0x0c89,	// (0x000384e0) list_double_time_pane_vc_t1

0x0ca4,	// (0x000384fb) list_double_time_pane_vc_t2_ParamLimits

0x0ca4,	// (0x000384fb) list_double_time_pane_vc_t2

0x0ce4,	// (0x0003853b) list_double_time_pane_vc_t3_ParamLimits

0x0ce4,	// (0x0003853b) list_double_time_pane_vc_t3

0x0cfc,	// (0x00038553) list_double_time_pane_vc_t4_ParamLimits

0x0cfc,	// (0x00038553) list_double_time_pane_vc_t4

0x0003,

0xfa56,	// (0x000472ad) list_double_time_pane_vc_t_ParamLimits

0xfa56,	// (0x000472ad) list_double_time_pane_vc_t

0xc9a4,	// (0x000441fb) list_double_pane_vc_g1_ParamLimits

0xc9a4,	// (0x000441fb) list_double_pane_vc_g1

0x21ae,	// (0x00039a05) list_double_pane_vc_g2_ParamLimits

0x21ae,	// (0x00039a05) list_double_pane_vc_g2

0x0001,

0xf5ea,	// (0x00046e41) list_double_pane_vc_g_ParamLimits

0xf5ea,	// (0x00046e41) list_double_pane_vc_g

0x0d10,	// (0x00038567) list_double_pane_vc_t1_ParamLimits

0x0d10,	// (0x00038567) list_double_pane_vc_t1

0x0d24,	// (0x0003857b) list_double_pane_vc_t2_ParamLimits

0x0d24,	// (0x0003857b) list_double_pane_vc_t2

0x0001,

0xfa5f,	// (0x000472b6) list_double_pane_vc_t_ParamLimits

0xfa5f,	// (0x000472b6) list_double_pane_vc_t

0xc9a4,	// (0x000441fb) list_double_number_pane_vc_g1_ParamLimits

0xc9a4,	// (0x000441fb) list_double_number_pane_vc_g1

0x21ae,	// (0x00039a05) list_double_number_pane_vc_g2_ParamLimits

0x21ae,	// (0x00039a05) list_double_number_pane_vc_g2

0x0001,

0xf5ea,	// (0x00046e41) list_double_number_pane_vc_g_ParamLimits

0xf5ea,	// (0x00046e41) list_double_number_pane_vc_g

0x0d3c,	// (0x00038593) list_double_number_pane_vc_t1_ParamLimits

0x0d3c,	// (0x00038593) list_double_number_pane_vc_t1

0x0d50,	// (0x000385a7) list_double_number_pane_vc_t2_ParamLimits

0x0d50,	// (0x000385a7) list_double_number_pane_vc_t2

0x0d24,	// (0x0003857b) list_double_number_pane_vc_t3_ParamLimits

0x0d24,	// (0x0003857b) list_double_number_pane_vc_t3

0x0002,

0xfa64,	// (0x000472bb) list_double_number_pane_vc_t_ParamLimits

0xfa64,	// (0x000472bb) list_double_number_pane_vc_t

0x2697,	// (0x00039eee) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2697,	// (0x00039eee) list_double_large_graphic_pane_vc_g1

0x26a3,	// (0x00039efa) list_double_large_graphic_pane_vc_g2_ParamLimits

0x26a3,	// (0x00039efa) list_double_large_graphic_pane_vc_g2

0x2673,	// (0x00039eca) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2673,	// (0x00039eca) list_double_large_graphic_pane_vc_g3

0x0d64,	// (0x000385bb) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0d64,	// (0x000385bb) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6b,	// (0x000472c2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x000472c2) list_double_large_graphic_pane_vc_g

0x0d70,	// (0x000385c7) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0d70,	// (0x000385c7) list_double_large_graphic_pane_vc_t1

0x0d84,	// (0x000385db) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0d84,	// (0x000385db) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x000472cb) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x000472cb) list_double_large_graphic_pane_vc_t

0xc9a4,	// (0x000441fb) list_double_heading_pane_vc_g1_ParamLimits

0xc9a4,	// (0x000441fb) list_double_heading_pane_vc_g1

0x21ae,	// (0x00039a05) list_double_heading_pane_vc_g2_ParamLimits

0x21ae,	// (0x00039a05) list_double_heading_pane_vc_g2

0x0001,

0xf5ea,	// (0x00046e41) list_double_heading_pane_vc_g_ParamLimits

0xf5ea,	// (0x00046e41) list_double_heading_pane_vc_g

0x0d9d,	// (0x000385f4) list_double_heading_pane_vc_t1_ParamLimits

0x0d9d,	// (0x000385f4) list_double_heading_pane_vc_t1

0x0b08,	// (0x0003835f) list_double_heading_pane_vc_t2_ParamLimits

0x0b08,	// (0x0003835f) list_double_heading_pane_vc_t2

0x0001,

0xfa79,	// (0x000472d0) list_double_heading_pane_vc_t_ParamLimits

0xfa79,	// (0x000472d0) list_double_heading_pane_vc_t

0x0ae6,	// (0x0003833d) list_double_graphic_pane_vc_g1_ParamLimits

0x0ae6,	// (0x0003833d) list_double_graphic_pane_vc_g1

0x26b2,	// (0x00039f09) list_double_graphic_pane_vc_g2_ParamLimits

0x26b2,	// (0x00039f09) list_double_graphic_pane_vc_g2

0x26c1,	// (0x00039f18) list_double_graphic_pane_vc_g3_ParamLimits

0x26c1,	// (0x00039f18) list_double_graphic_pane_vc_g3

0x0002,

0xfa7e,	// (0x000472d5) list_double_graphic_pane_vc_g_ParamLimits

0xfa7e,	// (0x000472d5) list_double_graphic_pane_vc_g

0x0db1,	// (0x00038608) list_double_graphic_pane_vc_t1_ParamLimits

0x0db1,	// (0x00038608) list_double_graphic_pane_vc_t1

0x0d24,	// (0x0003857b) list_double_graphic_pane_vc_t2_ParamLimits

0x0d24,	// (0x0003857b) list_double_graphic_pane_vc_t2

0x0001,

0xfa85,	// (0x000472dc) list_double_graphic_pane_vc_t_ParamLimits

0xfa85,	// (0x000472dc) list_double_graphic_pane_vc_t

0x10c7,	// (0x0003891e) aid_size_cell_fastswap

0x76ab,	// (0x0003ef02) aid_size_cell_touch_ParamLimits

0x76ab,	// (0x0003ef02) aid_size_cell_touch

0x132a,	// (0x00038b81) popup_fast_swap_wide_window_ParamLimits

0x132a,	// (0x00038b81) popup_fast_swap_wide_window

0x77f6,	// (0x0003f04d) touch_pane_ParamLimits

0x77f6,	// (0x0003f04d) touch_pane

0xb06c,	// (0x000428c3) button_value_adjust_pane_cp2

0x0786,	// (0x00037fdd) button_value_adjust_pane_cp4

0x07aa,	// (0x00038001) form_field_data_pane_cp2

0x731a,	// (0x0003eb71) form_field_data_wide_pane_cp2

0xb6b4,	// (0x00042f0b) bg_scroll_pane_ParamLimits

0x1b6b,	// (0x000393c2) scroll_handle_pane_ParamLimits

0x1b7f,	// (0x000393d6) scroll_sc2_down_pane_ParamLimits

0x1b7f,	// (0x000393d6) scroll_sc2_down_pane

0xb6e5,	// (0x00042f3c) scroll_sc2_up_pane_ParamLimits

0xb6e5,	// (0x00042f3c) scroll_sc2_up_pane

0x9e84,	// (0x000416db) grid_wheel_folder_pane_g1_ParamLimits

0x9e84,	// (0x000416db) grid_wheel_folder_pane_g1

0x1e07,	// (0x0003965e) clock_nsta_pane_cp2_ParamLimits

0x1e07,	// (0x0003965e) clock_nsta_pane_cp2

0xb1d8,	// (0x00042a2f) listscroll_midp_pane_ParamLimits

0x7eac,	// (0x0003f703) midp_canvas_pane

0xc0ba,	// (0x00043911) nsta_clock_indic_pane

0xc0ea,	// (0x00043941) listscroll_form_pane_vc

0xc0f2,	// (0x00043949) listscroll_set_pane_vc_ParamLimits

0xc0f2,	// (0x00043949) listscroll_set_pane_vc

0x9208,	// (0x00040a5f) clock_nsta_pane

0x9232,	// (0x00040a89) indicator_nsta_pane

0xc338,	// (0x00043b8f) bg_popup_sub_pane_cp2_ParamLimits

0xc34c,	// (0x00043ba3) find_pane_cp2_ParamLimits

0xc34c,	// (0x00043ba3) find_pane_cp2

0xc362,	// (0x00043bb9) grid_toobar_pane_ParamLimits

0xc4d2,	// (0x00043d29) list_form_gen_pane_vc_ParamLimits

0xc4d2,	// (0x00043d29) list_form_gen_pane_vc

0xc4e8,	// (0x00043d3f) scroll_pane_cp8_vc_ParamLimits

0xc4e8,	// (0x00043d3f) scroll_pane_cp8_vc

0xc538,	// (0x00043d8f) data_form_wide_pane_vc_ParamLimits

0xc538,	// (0x00043d8f) data_form_wide_pane_vc

0xc544,	// (0x00043d9b) form_field_data_wide_pane_vc_g1

0xc54c,	// (0x00043da3) form_field_data_wide_pane_vc_t1_ParamLimits

0xc54c,	// (0x00043da3) form_field_data_wide_pane_vc_t1

0xb080,	// (0x000428d7) input_focus_pane_cp6_vc_ParamLimits

0xb080,	// (0x000428d7) input_focus_pane_cp6_vc

0x95a8,	// (0x00040dff) list_midp_pane_ParamLimits

0xc9c2,	// (0x00044219) scroll_pane_cp16_ParamLimits

0xc9c2,	// (0x00044219) scroll_pane_cp16

0xc7c1,	// (0x00044018) button_value_adjust_pane_ParamLimits

0xc7c1,	// (0x00044018) button_value_adjust_pane

0x9ae2,	// (0x00041339) button_value_adjust_pane_cp6_ParamLimits

0x9ae2,	// (0x00041339) button_value_adjust_pane_cp6

0x9bfc,	// (0x00041453) settings_code_pane_cp_ParamLimits

0x9bfc,	// (0x00041453) settings_code_pane_cp

0x8b2e,	// (0x00040385) cell_touch_pane_g1

0x8b2e,	// (0x00040385) cell_touch_pane_g2

0x0001,

0xf720,	// (0x00046f77) cell_touch_pane_g

0x9d68,	// (0x000415bf) cell_touch_pane_cp_ParamLimits

0x9d68,	// (0x000415bf) cell_touch_pane_cp

0x9d84,	// (0x000415db) cell_touch_pane_ParamLimits

0x9d84,	// (0x000415db) cell_touch_pane

0x8b2e,	// (0x00040385) scroll_sc2_down_pane_g1

0x8b2e,	// (0x00040385) scroll_sc2_up_pane_g1

0x8b38,	// (0x0004038f) bg_set_opt_pane_cp4_vc

0xda6c,	// (0x000452c3) list_set_graphic_pane_vc_g1_ParamLimits

0xda6c,	// (0x000452c3) list_set_graphic_pane_vc_g1

0xda78,	// (0x000452cf) list_set_graphic_pane_vc_g2_ParamLimits

0xda78,	// (0x000452cf) list_set_graphic_pane_vc_g2

0x0001,

0xfa02,	// (0x00047259) list_set_graphic_pane_vc_g_ParamLimits

0xfa02,	// (0x00047259) list_set_graphic_pane_vc_g

0xda84,	// (0x000452db) text_primary_small_cp13_vc_ParamLimits

0xda84,	// (0x000452db) text_primary_small_cp13_vc

0xda9c,	// (0x000452f3) list_set_graphic_pane_vc_ParamLimits

0xda9c,	// (0x000452f3) list_set_graphic_pane_vc

0x8b38,	// (0x0004038f) input_focus_pane_cp2_vc

0x8b2e,	// (0x00040385) setting_code_pane_vc_g1

0xdab0,	// (0x00045307) setting_code_pane_vc_t1

0xdabe,	// (0x00045315) set_text_pane_vc_t1_ParamLimits

0xdabe,	// (0x00045315) set_text_pane_vc_t1

0x8b38,	// (0x0004038f) input_focus_pane_cp1_vc

0xdad9,	// (0x00045330) list_set_text_pane_vc

0x8b2e,	// (0x00040385) setting_text_pane_vc_g1

0x8b38,	// (0x0004038f) bg_set_opt_pane_cp2_vc

0xdae3,	// (0x0004533a) setting_slider_graphic_pane_vc_g1

0xdaeb,	// (0x00045342) setting_slider_graphic_pane_vc_t1

0xdaf9,	// (0x00045350) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa07,	// (0x0004725e) setting_slider_graphic_pane_vc_t

0xdb07,	// (0x0004535e) slider_set_pane_cp_vc

0xdb0f,	// (0x00045366) slider_set_pane_vc_g1

0xdb18,	// (0x0004536f) slider_set_pane_vc_g2

0x0006,

0xfa0c,	// (0x00047263) slider_set_pane_vc_g

0xb0e7,	// (0x0004293e) set_opt_bg_pane_g1_copy1

0xb0ef,	// (0x00042946) set_opt_bg_pane_g2_copy1

0xdb44,	// (0x0004539b) set_opt_bg_pane_g3_copy1

0xb0ff,	// (0x00042956) set_opt_bg_pane_g4_copy1

0xb107,	// (0x0004295e) set_opt_bg_pane_g5_copy1

0xb10f,	// (0x00042966) set_opt_bg_pane_g6_copy1

0xdb4e,	// (0x000453a5) set_opt_bg_pane_g7_copy1

0xdb56,	// (0x000453ad) set_opt_bg_pane_g8_copy1

0xdb60,	// (0x000453b7) set_opt_bg_pane_g9_copy1

0x8b38,	// (0x0004038f) bg_set_opt_pane_cp_vc

0xdb6a,	// (0x000453c1) setting_slider_pane_vc_t1

0xdaeb,	// (0x00045342) setting_slider_pane_vc_t2

0xdaf9,	// (0x00045350) setting_slider_pane_vc_t3

0x0002,

0xfa1b,	// (0x00047272) setting_slider_pane_vc_t

0xdb07,	// (0x0004535e) slider_set_pane_vc

0x22c2,	// (0x00039b19) volume_set_pane_vc_g1

0x22cb,	// (0x00039b22) volume_set_pane_vc_g2

0x22d4,	// (0x00039b2b) volume_set_pane_vc_g3

0x22dd,	// (0x00039b34) volume_set_pane_vc_g4

0x22e6,	// (0x00039b3d) volume_set_pane_vc_g5

0x22ef,	// (0x00039b46) volume_set_pane_vc_g6

0x22f8,	// (0x00039b4f) volume_set_pane_vc_g7

0x2301,	// (0x00039b58) volume_set_pane_vc_g8

0x230a,	// (0x00039b61) volume_set_pane_vc_g9

0x2313,	// (0x00039b6a) volume_set_pane_vc_g10

0x0009,

0xfa22,	// (0x00047279) volume_set_pane_vc_g

0xdb79,	// (0x000453d0) volume_set_pane_vc

0xdb81,	// (0x000453d8) button_value_adjust_pane_cp1_vc

0xdb8b,	// (0x000453e2) list_highlight_pane_cp2_vc

0xdb94,	// (0x000453eb) list_set_pane_vc_ParamLimits

0xdb94,	// (0x000453eb) list_set_pane_vc

0xdbfe,	// (0x00045455) main_pane_set_vc_t1_ParamLimits

0xdbfe,	// (0x00045455) main_pane_set_vc_t1

0xdc13,	// (0x0004546a) main_pane_set_vc_t2_ParamLimits

0xdc13,	// (0x0004546a) main_pane_set_vc_t2

0xdc25,	// (0x0004547c) main_pane_set_vc_t3_ParamLimits

0xdc25,	// (0x0004547c) main_pane_set_vc_t3

0xdc39,	// (0x00045490) main_pane_set_vc_t4_ParamLimits

0xdc39,	// (0x00045490) main_pane_set_vc_t4

0x0003,

0xfa37,	// (0x0004728e) main_pane_set_vc_t_ParamLimits

0xfa37,	// (0x0004728e) main_pane_set_vc_t

0xdc4d,	// (0x000454a4) setting_code_pane_vc_ParamLimits

0xdc4d,	// (0x000454a4) setting_code_pane_vc

0xdc5e,	// (0x000454b5) setting_slider_graphic_pane_vc

0xdc5e,	// (0x000454b5) setting_slider_pane_vc

0xdc5e,	// (0x000454b5) setting_text_pane_vc

0xdc5e,	// (0x000454b5) setting_volume_pane_vc

0xdc68,	// (0x000454bf) scroll_pane_cp121_vc

0xb05a,	// (0x000428b1) set_content_pane_vc

0xdca8,	// (0x000454ff) button_value_adjust_pane_g1

0xdcb1,	// (0x00045508) button_value_adjust_pane_g2

0x0001,

0xfa8a,	// (0x000472e1) button_value_adjust_pane_g

0xdcba,	// (0x00045511) form_field_slider_wide_pane_vc_t1_ParamLimits

0xdcba,	// (0x00045511) form_field_slider_wide_pane_vc_t1

0xdcce,	// (0x00045525) form_field_slider_wide_pane_vc_t2_ParamLimits

0xdcce,	// (0x00045525) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8f,	// (0x000472e6) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8f,	// (0x000472e6) form_field_slider_wide_pane_vc_t

0x8b86,	// (0x000403dd) input_focus_pane_cp10_vc_ParamLimits

0x8b86,	// (0x000403dd) input_focus_pane_cp10_vc

0xdce2,	// (0x00045539) slider_cont_pane_cp1_vc_ParamLimits

0xdce2,	// (0x00045539) slider_cont_pane_cp1_vc

0xdb0f,	// (0x00045366) slider_form_pane_g1_cp2

0xdb18,	// (0x0004536f) slider_form_pane_g2_cp2

0xdcfd,	// (0x00045554) form_field_slider_pane_vc_t3

0xdd0b,	// (0x00045562) form_field_slider_pane_vc_t4

0xdd19,	// (0x00045570) slider_form_pane_vc_ParamLimits

0xdd19,	// (0x00045570) slider_form_pane_vc

0xdd26,	// (0x0004557d) form_field_slider_pane_vc_t1_ParamLimits

0xdd26,	// (0x0004557d) form_field_slider_pane_vc_t1

0xdcce,	// (0x00045525) form_field_slider_pane_vc_t2_ParamLimits

0xdcce,	// (0x00045525) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x000472f6) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x000472f6) form_field_slider_pane_vc_t

0x8b86,	// (0x000403dd) input_focus_pane_cp9_vc_ParamLimits

0x8b86,	// (0x000403dd) input_focus_pane_cp9_vc

0xdd42,	// (0x00045599) slider_cont_pane_vc_ParamLimits

0xdd42,	// (0x00045599) slider_cont_pane_vc

0xdd56,	// (0x000455ad) list_form_graphic_pane_cp_vc_ParamLimits

0xdd56,	// (0x000455ad) list_form_graphic_pane_cp_vc

0xc544,	// (0x00043d9b) form_field_popup_wide_pane_vc_g1

0xdd6b,	// (0x000455c2) form_field_popup_wide_pane_vc_t1_ParamLimits

0xdd6b,	// (0x000455c2) form_field_popup_wide_pane_vc_t1

0xb080,	// (0x000428d7) input_focus_pane_cp8_vc_ParamLimits

0xb080,	// (0x000428d7) input_focus_pane_cp8_vc

0xdd82,	// (0x000455d9) list_form_wide_pane_vc_ParamLimits

0xdd82,	// (0x000455d9) list_form_wide_pane_vc

0xdd8e,	// (0x000455e5) list_form_graphic_pane_vc_g1

0xdd96,	// (0x000455ed) list_form_graphic_pane_vc_t1_ParamLimits

0xdd96,	// (0x000455ed) list_form_graphic_pane_vc_t1

0x8b94,	// (0x000403eb) list_highlight_pane_cp5_vc_ParamLimits

0x8b94,	// (0x000403eb) list_highlight_pane_cp5_vc

0xddb2,	// (0x00045609) list_form_graphic_pane_vc_ParamLimits

0xddb2,	// (0x00045609) list_form_graphic_pane_vc

0xc544,	// (0x00043d9b) form_field_popup_pane_vc_g1

0xddc8,	// (0x0004561f) form_field_popup_pane_vc_t1_ParamLimits

0xddc8,	// (0x0004561f) form_field_popup_pane_vc_t1

0xb080,	// (0x000428d7) input_focus_pane_cp7_vc_ParamLimits

0xb080,	// (0x000428d7) input_focus_pane_cp7_vc

0xdddf,	// (0x00045636) list_form_pane_vc_ParamLimits

0xdddf,	// (0x00045636) list_form_pane_vc

0xddeb,	// (0x00045642) data_form_pane_vc_t1_ParamLimits

0xddeb,	// (0x00045642) data_form_pane_vc_t1

0xb0e7,	// (0x0004293e) input_focus_pane_vc_g1

0xb0ef,	// (0x00042946) input_focus_pane_vc_g2

0xb0f7,	// (0x0004294e) input_focus_pane_vc_g3

0xb0ff,	// (0x00042956) input_focus_pane_vc_g4

0xb107,	// (0x0004295e) input_focus_pane_vc_g5

0xb10f,	// (0x00042966) input_focus_pane_vc_g6

0xb117,	// (0x0004296e) input_focus_pane_vc_g7

0xb11f,	// (0x00042976) input_focus_pane_vc_g8

0xb127,	// (0x0004297e) input_focus_pane_vc_g9

0x8b2e,	// (0x00040385) input_focus_pane_vc_g10

0x0009,

0xf6a9,	// (0x00046f00) input_focus_pane_vc_g

0xc538,	// (0x00043d8f) data_form_pane_vc_ParamLimits

0xc538,	// (0x00043d8f) data_form_pane_vc

0xc544,	// (0x00043d9b) form_field_data_pane_vc_g1

0xde06,	// (0x0004565d) form_field_data_pane_vc_t1_ParamLimits

0xde06,	// (0x0004565d) form_field_data_pane_vc_t1

0xb080,	// (0x000428d7) input_focus_pane_vc_ParamLimits

0xb080,	// (0x000428d7) input_focus_pane_vc

0xde20,	// (0x00045677) button_value_adjust_pane_cp3_vc

0xde28,	// (0x0004567f) button_value_adjust_pane_cp5_vc

0xde30,	// (0x00045687) form_field_data_pane_vc_ParamLimits

0xde30,	// (0x00045687) form_field_data_pane_vc

0xde47,	// (0x0004569e) form_field_data_pane_vc_cp2

0xde4f,	// (0x000456a6) form_field_data_wide_pane_vc_ParamLimits

0xde4f,	// (0x000456a6) form_field_data_wide_pane_vc

0xde65,	// (0x000456bc) form_field_data_wide_pane_vc_cp2

0xde6d,	// (0x000456c4) form_field_popup_pane_vc_ParamLimits

0xde6d,	// (0x000456c4) form_field_popup_pane_vc

0xde84,	// (0x000456db) form_field_popup_wide_pane_vc_ParamLimits

0xde84,	// (0x000456db) form_field_popup_wide_pane_vc

0xde9a,	// (0x000456f1) form_field_slider_pane_vc_ParamLimits

0xde9a,	// (0x000456f1) form_field_slider_pane_vc

0xdead,	// (0x00045704) form_field_slider_wide_pane_vc_ParamLimits

0xdead,	// (0x00045704) form_field_slider_wide_pane_vc

0x9da2,	// (0x000415f9) grid_touch_1_pane_ParamLimits

0x9da2,	// (0x000415f9) grid_touch_1_pane

0x9db6,	// (0x0004160d) grid_touch_2_pane_ParamLimits

0x9db6,	// (0x0004160d) grid_touch_2_pane

0xdec0,	// (0x00045717) touch_pane_g1_ParamLimits

0xdec0,	// (0x00045717) touch_pane_g1

0xdece,	// (0x00045725) cell_app_pane_cp_wide_ParamLimits

0xdece,	// (0x00045725) cell_app_pane_cp_wide

0xdedf,	// (0x00045736) grid_popup_fast_wide_pane_ParamLimits

0xdedf,	// (0x00045736) grid_popup_fast_wide_pane

0xdef3,	// (0x0004574a) scroll_pane_cp19_ParamLimits

0xdef3,	// (0x0004574a) scroll_pane_cp19

0x8b38,	// (0x0004038f) bg_popup_window_pane_cp20

0xdf07,	// (0x0004575e) listscroll_popup_fast_wide_pane

0xcea3,	// (0x000446fa) grid_indicator_nsta_pane

0xdf0f,	// (0x00045766) clock_nsta_pane_g1

0xdf18,	// (0x0004576f) clock_nsta_pane_t1

0x9de0,	// (0x00041637) cell_indicator_nsta_pane_ParamLimits

0x9de0,	// (0x00041637) cell_indicator_nsta_pane

0xdec0,	// (0x00045717) cell_indicator_nsta_pane_g1

0x9df9,	// (0x00041650) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x00047300) cell_indicator_nsta_pane_g

0xdf34,	// (0x0004578b) clock_nsta_pane_cp

0xdf3c,	// (0x00045793) indicator_nsta_pane_cp

0xdf45,	// (0x0004579c) nsta_clock_indic_pane_g1

0x8bd0,	// (0x00040427) grid_indicator_pane

0xb7da,	// (0x00043031) scroll_pane_cp29

0x1d56,	// (0x000395ad) indicator_nsta_pane_cp2_ParamLimits

0x1d56,	// (0x000395ad) indicator_nsta_pane_cp2

0x8b94,	// (0x000403eb) main_apps_wheel_pane

0xc660,	// (0x00043eb7) form_midp_field_text_pane_ParamLimits

0xc793,	// (0x00043fea) scroll_bar_cp050_ParamLimits

0xdfae,	// (0x00045805) cell_indicator_pane_ParamLimits

0xdfae,	// (0x00045805) cell_indicator_pane

0xdfc5,	// (0x0004581c) cell_indicator_pane_g1

0x9e0e,	// (0x00041665) grid_wheel_folder_pane_ParamLimits

0x9e0e,	// (0x00041665) grid_wheel_folder_pane

0x9e1c,	// (0x00041673) list_wheel_apps_pane_ParamLimits

0x9e1c,	// (0x00041673) list_wheel_apps_pane

0x9e2a,	// (0x00041681) main_apps_wheel_pane_g1_ParamLimits

0x9e2a,	// (0x00041681) main_apps_wheel_pane_g1

0x9e36,	// (0x0004168d) main_apps_wheel_pane_g2_ParamLimits

0x9e36,	// (0x0004168d) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x0004731c) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x0004731c) main_apps_wheel_pane_g

0x9e44,	// (0x0004169b) main_apps_wheel_pane_t1_ParamLimits

0x9e44,	// (0x0004169b) main_apps_wheel_pane_t1

0x9e58,	// (0x000416af) list_wheel_apps_pane_g1

0x9e60,	// (0x000416b7) list_wheel_apps_pane_g2

0x9e68,	// (0x000416bf) list_wheel_apps_pane_g3

0x9e70,	// (0x000416c7) list_wheel_apps_pane_g4

0x9e7a,	// (0x000416d1) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x00047321) list_wheel_apps_pane_g

0xbd2a,	// (0x00043581) navi_icon_text_pane

0x90fc,	// (0x00040953) aid_fill_nsta

0xdfcf,	// (0x00045826) navi_icon_text_pane_g1

0xdfdb,	// (0x00045832) navi_icon_text_pane_t1

0x7e94,	// (0x0003f6eb) list_set_graphic_pane_t1_ParamLimits

0x7e94,	// (0x0003f6eb) list_set_graphic_pane_t1

0xcef6,	// (0x0004474d) popup_midp_note_alarm_window_t6_ParamLimits

0xcef6,	// (0x0004474d) popup_midp_note_alarm_window_t6

0xcf08,	// (0x0004475f) popup_midp_note_alarm_window_t7_ParamLimits

0xcf08,	// (0x0004475f) popup_midp_note_alarm_window_t7

0xcf1a,	// (0x00044771) popup_midp_note_alarm_window_t8_ParamLimits

0xcf1a,	// (0x00044771) popup_midp_note_alarm_window_t8

0xcf2c,	// (0x00044783) popup_midp_note_alarm_window_t9_ParamLimits

0xcf2c,	// (0x00044783) popup_midp_note_alarm_window_t9

0xcf3e,	// (0x00044795) popup_midp_note_alarm_window_t10_ParamLimits

0xcf3e,	// (0x00044795) popup_midp_note_alarm_window_t10

0xcf50,	// (0x000447a7) popup_midp_note_alarm_window_t11_ParamLimits

0xcf50,	// (0x000447a7) popup_midp_note_alarm_window_t11

0xcf62,	// (0x000447b9) scroll_pane_cp17_ParamLimits

0xcf62,	// (0x000447b9) scroll_pane_cp17

0x22c2,	// (0x00039b19) volume_small_pane_cp_g1

0x26cd,	// (0x00039f24) volume_small_pane_cp_g2

0x26d6,	// (0x00039f2d) volume_small_pane_cp_g3

0x26df,	// (0x00039f36) volume_small_pane_cp_g4

0x26e8,	// (0x00039f3f) volume_small_pane_cp_g5

0x26f1,	// (0x00039f48) volume_small_pane_cp_g6

0x26fa,	// (0x00039f51) volume_small_pane_cp_g7

0x2703,	// (0x00039f5a) volume_small_pane_cp_g8

0x270c,	// (0x00039f63) volume_small_pane_cp_g9

0x2715,	// (0x00039f6c) volume_small_pane_cp_g10

0xbec8,	// (0x0004371f) midp_ticker_pane_g1_ParamLimits

0xbed4,	// (0x0004372b) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x00046fcc) midp_ticker_pane_g_ParamLimits

0xbee0,	// (0x00043737) midp_ticker_pane_t1_ParamLimits

0x9120,	// (0x00040977) aid_fill_nsta_2

0xc77f,	// (0x00043fd6) list_form2_midp_pane

0xd66c,	// (0x00044ec3) midp_editing_number_pane_ParamLimits

0xd67b,	// (0x00044ed2) midp_ticker_pane_ParamLimits

0xdfed,	// (0x00045844) form2_midp_field_pane

0xdff5,	// (0x0004584c) scroll_pane_cp51

0xe015,	// (0x0004586c) form2_midp_button_pane_ParamLimits

0xe015,	// (0x0004586c) form2_midp_button_pane

0xe027,	// (0x0004587e) form2_midp_content_pane_ParamLimits

0xe027,	// (0x0004587e) form2_midp_content_pane

0xe041,	// (0x00045898) form2_midp_field_choice_group_pane

0xe049,	// (0x000458a0) form2_midp_field_pane_g1

0xe051,	// (0x000458a8) form2_midp_field_pane_g2

0xe059,	// (0x000458b0) form2_midp_field_pane_g3

0xe061,	// (0x000458b8) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x00047346) form2_midp_field_pane_g

0xe069,	// (0x000458c0) form2_midp_gauge_slider_pane

0xe071,	// (0x000458c8) form2_midp_gauge_wait_pane

0xe079,	// (0x000458d0) form2_midp_image_pane_ParamLimits

0xe079,	// (0x000458d0) form2_midp_image_pane

0xe094,	// (0x000458eb) form2_midp_label_pane_ParamLimits

0xe094,	// (0x000458eb) form2_midp_label_pane

0x9ead,	// (0x00041704) form2_midp_label_pane_cp_ParamLimits

0x9ead,	// (0x00041704) form2_midp_label_pane_cp

0xe0ad,	// (0x00045904) form2_midp_string_pane_ParamLimits

0xe0ad,	// (0x00045904) form2_midp_string_pane

0x7555,	// (0x0003edac) form2_midp_text_pane_ParamLimits

0x7555,	// (0x0003edac) form2_midp_text_pane

0xe0bf,	// (0x00045916) form2_midp_time_pane

0xe0cf,	// (0x00045926) input_focus_pane_cp51_ParamLimits

0xe0cf,	// (0x00045926) input_focus_pane_cp51

0xe0e7,	// (0x0004593e) form2_midp_label_pane_t1_ParamLimits

0xe0e7,	// (0x0004593e) form2_midp_label_pane_t1

0x7574,	// (0x0003edcb) form2_mdip_text_pane_t1_ParamLimits

0x7574,	// (0x0003edcb) form2_mdip_text_pane_t1

0x0e02,	// (0x00038659) form2_midp_time_pane_t1

0xe130,	// (0x00045987) form2_midp_gauge_slider_pane_t1

0x9ecc,	// (0x00041723) form2_midp_gauge_slider_pane_t2

0x9ede,	// (0x00041735) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x0004734f) form2_midp_gauge_slider_pane_t

0xe142,	// (0x00045999) form2_midp_slider_pane

0xe14e,	// (0x000459a5) form2_midp_gauge_wait_pane_t1

0xe15c,	// (0x000459b3) form2_midp_wait_pane_ParamLimits

0xe15c,	// (0x000459b3) form2_midp_wait_pane

0x9ef0,	// (0x00041747) list_single_2graphic_pane_cp4_ParamLimits

0x9ef0,	// (0x00041747) list_single_2graphic_pane_cp4

0x9536,	// (0x00040d8d) list_single_midp_graphic_pane_cp_ParamLimits

0x9536,	// (0x00040d8d) list_single_midp_graphic_pane_cp

0x8b38,	// (0x0004038f) list_highlight_pane_cp20

0xe187,	// (0x000459de) list_single_2graphic_pane_g1_cp4

0xe18f,	// (0x000459e6) list_single_2graphic_pane_g2_cp4

0xe197,	// (0x000459ee) list_single_2graphic_pane_t1_cp4

0x8b94,	// (0x000403eb) list_highlight_pane_cp21

0xe1a6,	// (0x000459fd) list_single_midp_graphic_pane_g4_cp

0xe1b5,	// (0x00045a0c) list_single_midp_graphic_pane_t1_cp

0x9f04,	// (0x0004175b) form2_mdip_string_pane_t1_ParamLimits

0x9f04,	// (0x0004175b) form2_mdip_string_pane_t1

0x8b38,	// (0x0004038f) bg_wml_button_pane_cp2

0x8b2e,	// (0x00040385) form2_midp_image_pane_g1

0x187b,	// (0x000390d2) list_double_large_graphic_pane_g5_ParamLimits

0x187b,	// (0x000390d2) list_double_large_graphic_pane_g5

0xb1d8,	// (0x00042a2f) midp_form_pane_ParamLimits

0x8b94,	// (0x000403eb) main_apps_wheel_pane_ParamLimits

0x8e58,	// (0x000406af) popup_preview_window_ParamLimits

0x8e58,	// (0x000406af) popup_preview_window

0xc1d5,	// (0x00043a2c) popup_touch_info_window_ParamLimits

0xc1d5,	// (0x00043a2c) popup_touch_info_window

0xc1f3,	// (0x00043a4a) popup_touch_menu_window_ParamLimits

0xc1f3,	// (0x00043a4a) popup_touch_menu_window

0x8b24,	// (0x0004037b) bg_popup_sub_pane_cp6

0xe1ca,	// (0x00045a21) list_touch_menu_pane

0xe1d2,	// (0x00045a29) list_single_touch_menu_pane_ParamLimits

0xe1d2,	// (0x00045a29) list_single_touch_menu_pane

0xe1e8,	// (0x00045a3f) list_single_touch_menu_pane_t1

0x8b94,	// (0x000403eb) bg_popup_sub_pane_cp7_ParamLimits

0x8b94,	// (0x000403eb) bg_popup_sub_pane_cp7

0xe1f6,	// (0x00045a4d) heading_sub_pane

0xe1fe,	// (0x00045a55) list_touch_info_pane_ParamLimits

0xe1fe,	// (0x00045a55) list_touch_info_pane

0xe20d,	// (0x00045a64) list_single_touch_info_pane_ParamLimits

0xe20d,	// (0x00045a64) list_single_touch_info_pane

0xe21f,	// (0x00045a76) list_single_touch_info_pane_t1

0xe22d,	// (0x00045a84) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x0004735d) list_single_touch_info_pane_t

0xbe9e,	// (0x000436f5) bg_popup_heading_pane_cp

0xe23b,	// (0x00045a92) heading_sub_pane_t1

0xc4fe,	// (0x00043d55) bg_popup_preview_window_pane_cp_ParamLimits

0xc4fe,	// (0x00043d55) bg_popup_preview_window_pane_cp

0xe1f6,	// (0x00045a4d) heading_preview_pane

0xe1fe,	// (0x00045a55) list_preview_pane_ParamLimits

0xe1fe,	// (0x00045a55) list_preview_pane

0xe249,	// (0x00045aa0) popup_preview_window_g1

0xe20d,	// (0x00045a64) list_single_preview_pane_ParamLimits

0xe20d,	// (0x00045a64) list_single_preview_pane

0xe251,	// (0x00045aa8) list_single_preview_pane_g1

0xe259,	// (0x00045ab0) list_single_preview_pane_t1

0xe21f,	// (0x00045a76) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x00047362) list_single_preview_pane_t

0xe267,	// (0x00045abe) bg_popup_heading_pane_cp2_ParamLimits

0xe267,	// (0x00045abe) bg_popup_heading_pane_cp2

0xe27d,	// (0x00045ad4) heading_preview_pane_g1

0xe285,	// (0x00045adc) heading_preview_pane_t1_ParamLimits

0xe285,	// (0x00045adc) heading_preview_pane_t1

0x8be7,	// (0x0004043e) soft_indicator_pane_t1_ParamLimits

0x997e,	// (0x000411d5) scroll_pane_ParamLimits

0xb6d3,	// (0x00042f2a) scroll_sc2_left_pane

0xb6dc,	// (0x00042f33) scroll_sc2_right_pane

0xb6fb,	// (0x00042f52) scroll_bg_pane_g1_ParamLimits

0xb710,	// (0x00042f67) scroll_bg_pane_g2_ParamLimits

0xb728,	// (0x00042f7f) scroll_bg_pane_g3_ParamLimits

0xf700,	// (0x00046f57) scroll_bg_pane_g_ParamLimits

0xb6fb,	// (0x00042f52) scroll_handle_pane_g1_ParamLimits

0xb74a,	// (0x00042fa1) scroll_handle_pane_g2_ParamLimits

0xb728,	// (0x00042f7f) scroll_handle_pane_g3_ParamLimits

0xf707,	// (0x00046f5e) scroll_handle_pane_g_ParamLimits

0xc112,	// (0x00043969) popup_choice_list_window_ParamLimits

0xc112,	// (0x00043969) popup_choice_list_window

0xc344,	// (0x00043b9b) choice_list_pane

0xc3c6,	// (0x00043c1d) cell_toolbar_pane_t1

0xc3ee,	// (0x00043c45) toolbar_button_pane_ParamLimits

0xd38e,	// (0x00044be5) ai_gene_pane_1_t2_ParamLimits

0xd38e,	// (0x00044be5) ai_gene_pane_1_t2

0x0001,

0xf91c,	// (0x00047173) ai_gene_pane_1_t_ParamLimits

0xf91c,	// (0x00047173) ai_gene_pane_1_t

0xe2a2,	// (0x00045af9) scroll_sc2_left_pane_g1

0xe2a2,	// (0x00045af9) scroll_sc2_right_pane_g1

0xb1d8,	// (0x00042a2f) bg_popup_sub_pane_cp10

0xe2ac,	// (0x00045b03) list_choice_list_pane

0xe2c5,	// (0x00045b1c) list_single_choice_list_pane_ParamLimits

0xe2c5,	// (0x00045b1c) list_single_choice_list_pane

0xe2d8,	// (0x00045b2f) list_single_choice_list_pane_g1

0xb1c3,	// (0x00042a1a) list_single_choice_list_pane_t1_ParamLimits

0xb1c3,	// (0x00042a1a) list_single_choice_list_pane_t1

0xe2e0,	// (0x00045b37) choice_list_pane_g1

0xe2e8,	// (0x00045b3f) choice_list_pane_t1

0x8b24,	// (0x0004037b) input_focus_pane_cp11

0xb648,	// (0x00042e9f) title_pane_stacon_g2_ParamLimits

0xb648,	// (0x00042e9f) title_pane_stacon_g2

0x0002,

0xf6e6,	// (0x00046f3d) title_pane_stacon_g_ParamLimits

0xf6e6,	// (0x00046f3d) title_pane_stacon_g

0xbe9e,	// (0x000436f5) cursor_press_pane

0x81bc,	// (0x0003fa13) popup_fep_hwr_window_ParamLimits

0x81bc,	// (0x0003fa13) popup_fep_hwr_window

0xc16c,	// (0x000439c3) popup_fep_vkb_window_ParamLimits

0xc16c,	// (0x000439c3) popup_fep_vkb_window

0xe2f6,	// (0x00045b4d) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x0004738b) fep_vkb_side_pane_g_ParamLimits

0x2749,	// (0x00039fa0) fep_hwr_candidate_pane_ParamLimits

0x2749,	// (0x00039fa0) fep_hwr_candidate_pane

0x2773,	// (0x00039fca) fep_hwr_side_pane_ParamLimits

0x2773,	// (0x00039fca) fep_hwr_side_pane

0x2793,	// (0x00039fea) fep_hwr_top_pane_ParamLimits

0x2793,	// (0x00039fea) fep_hwr_top_pane

0x27ab,	// (0x0003a002) fep_hwr_write_pane_ParamLimits

0x27ab,	// (0x0003a002) fep_hwr_write_pane

0xfb34,	// (0x0004738b) fep_vkb_side_pane_g

0xe2fe,	// (0x00045b55) fep_hwr_top_pane_g1

0xe310,	// (0x00045b67) fep_hwr_top_pane_g2

0x27d7,	// (0x0003a02e) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x00047367) fep_hwr_top_pane_g

0x27ec,	// (0x0003a043) fep_hwr_top_text_pane

0xb8a1,	// (0x000430f8) fep_hwr_top_text_pane_g1

0xe346,	// (0x00045b9d) fep_hwr_top_text_pane_t1

0x28e2,	// (0x0003a139) fep_hwr_candidate_pane_g1

0xe473,	// (0x00045cca) fep_vkb_keypad_pane_g3_ParamLimits

0xe473,	// (0x00045cca) fep_vkb_keypad_pane_g3

0xe49b,	// (0x00045cf2) fep_vkb_keypad_pane_g4_ParamLimits

0xe49b,	// (0x00045cf2) fep_vkb_keypad_pane_g4

0xe50a,	// (0x00045d61) fep_vkb_bottom_pane_g2_ParamLimits

0xe50a,	// (0x00045d61) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x00047392) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x00047392) fep_vkb_bottom_pane_g

0xe2a2,	// (0x00045af9) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x0004739c) cell_vkb_side_pane_g

0xe54e,	// (0x00045da5) cell_vkb_side_pane_t1

0xe55c,	// (0x00045db3) cell_vkb_side_pane_t1_copy1

0xe2a2,	// (0x00045af9) bg_fep_vkb_candidate_pane_g2

0xe632,	// (0x00045e89) cell_vkb_candidate_pane_ParamLimits

0xe354,	// (0x00045bab) aid_size_cell_vkb_ParamLimits

0xe354,	// (0x00045bab) aid_size_cell_vkb

0xe632,	// (0x00045e89) cell_vkb_candidate_pane

0x28fc,	// (0x0003a153) bg_popup_fep_shadow_pane_g1

0x9f88,	// (0x000417df) fep_vkb_bottom_pane_ParamLimits

0x9f88,	// (0x000417df) fep_vkb_bottom_pane

0xe3e1,	// (0x00045c38) fep_vkb_candidate_pane_ParamLimits

0xe3e1,	// (0x00045c38) fep_vkb_candidate_pane

0x9fad,	// (0x00041804) fep_vkb_keypad_pane_ParamLimits

0x9fad,	// (0x00041804) fep_vkb_keypad_pane

0x9fe9,	// (0x00041840) fep_vkb_side_pane_ParamLimits

0x9fe9,	// (0x00041840) fep_vkb_side_pane

0xa025,	// (0x0004187c) fep_vkb_top_pane_ParamLimits

0xa025,	// (0x0004187c) fep_vkb_top_pane

0xe407,	// (0x00045c5e) fep_vkb_top_pane_g1_ParamLimits

0xe407,	// (0x00045c5e) fep_vkb_top_pane_g1

0xe416,	// (0x00045c6d) fep_vkb_top_pane_g2_ParamLimits

0xe416,	// (0x00045c6d) fep_vkb_top_pane_g2

0xe425,	// (0x00045c7c) fep_vkb_top_pane_g3_ParamLimits

0xe425,	// (0x00045c7c) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x00047382) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x00047382) fep_vkb_top_pane_g

0xe443,	// (0x00045c9a) fep_vkb_top_text_pane_ParamLimits

0xe443,	// (0x00045c9a) fep_vkb_top_text_pane

0xa061,	// (0x000418b8) fep_vkb_side_pane_g1_ParamLimits

0xa061,	// (0x000418b8) fep_vkb_side_pane_g1

0xe462,	// (0x00045cb9) grid_vkb_side_pane_ParamLimits

0xe462,	// (0x00045cb9) grid_vkb_side_pane

0x2904,	// (0x0003a15b) bg_popup_fep_shadow_pane_g2

0x290d,	// (0x0003a164) bg_popup_fep_shadow_pane_g3

0x2915,	// (0x0003a16c) bg_popup_fep_shadow_pane_g4

0x291e,	// (0x0003a175) bg_popup_fep_shadow_pane_g5

0x2928,	// (0x0003a17f) bg_popup_fep_shadow_pane_g6

0x2930,	// (0x0003a187) bg_popup_fep_shadow_pane_g7

0xb107,	// (0x0004295e) bg_popup_fep_shadow_pane_g8

0xe4b9,	// (0x00045d10) grid_vkb_keypad_number_pane_ParamLimits

0xe4b9,	// (0x00045d10) grid_vkb_keypad_number_pane

0xe4c9,	// (0x00045d20) grid_vkb_keypad_pane_ParamLimits

0xe4c9,	// (0x00045d20) grid_vkb_keypad_pane

0xe4ef,	// (0x00045d46) fep_vkb_bottom_pane_g1_ParamLimits

0xe4ef,	// (0x00045d46) fep_vkb_bottom_pane_g1

0xe518,	// (0x00045d6f) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xe518,	// (0x00045d6f) grid_vkb_keypad_bottom_left_pane

0xe52d,	// (0x00045d84) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xe52d,	// (0x00045d84) grid_vkb_keypad_bottom_right_pane

0xe542,	// (0x00045d99) fep_vkb_top_text_pane_g1

0xa0a8,	// (0x000418ff) fep_vkb_top_text_pane_t1

0xa0ba,	// (0x00041911) cell_vkb_side_pane_ParamLimits

0xa0ba,	// (0x00041911) cell_vkb_side_pane

0xe2a2,	// (0x00045af9) cell_vkb_side_pane_g1

0xe56a,	// (0x00045dc1) cell_vkb_keypad_pane_ParamLimits

0xe56a,	// (0x00045dc1) cell_vkb_keypad_pane

0xe5df,	// (0x00045e36) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x000473af) bg_popup_fep_shadow_pane_g

0xe2a2,	// (0x00045af9) cell_hwr_side_pane_g1

0xe2a2,	// (0x00045af9) cell_hwr_side_pane_g2

0xe5e9,	// (0x00045e40) cell_vkb_keypad_pane_t1

0xa0d0,	// (0x00041927) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa0d0,	// (0x00041927) cell_vkb_keypad_bottom_left_pane

0xa0e5,	// (0x0004193c) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa0e5,	// (0x0004193c) cell_vkb_keypad_bottom_right_pane

0xe2a2,	// (0x00045af9) cell_vkb_keypad_bottom_left_pane_g1

0xe2a2,	// (0x00045af9) cell_vkb_keypad_bottom_right_pane_g1

0xe5f7,	// (0x00045e4e) cell_vkb_keypad_number_pane_ParamLimits

0xe5f7,	// (0x00045e4e) cell_vkb_keypad_number_pane

0xe616,	// (0x00045e6d) cell_vkb_keypad_number_pane_g1

0xe620,	// (0x00045e77) cell_vkb_keypad_number_pane_g2

0xe629,	// (0x00045e80) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x000473a1) cell_vkb_keypad_number_pane_g

0xe5e9,	// (0x00045e40) cell_vkb_keypad_number_pane_t1

0xe64d,	// (0x00045ea4) fep_vkb_candidate_pane_g1

0x0001,

0xfb45,	// (0x0004739c) cell_hwr_side_pane_g

0xe666,	// (0x00045ebd) cell_hwr_side_pane_t1

0x2942,	// (0x0003a199) cell_hwr_side_pane_t1_copy1

0xe435,	// (0x00045c8c) cell_hwr_candidate_pane_g1

0x2950,	// (0x0003a1a7) cell_hwr_candidate_pane_t1

0xe2a2,	// (0x00045af9) cell_vkb_candidate_pane_g2

0xe6ec,	// (0x00045f43) cell_vkb_candidate_pane_t1

0x8109,	// (0x0003f960) bg_popup_fep_shadow_pane_ParamLimits

0x8109,	// (0x0003f960) bg_popup_fep_shadow_pane

0x95ee,	// (0x00040e45) bg_fep_hwr_top_pane_g4

0xe322,	// (0x00045b79) bg_hwr_side_pane_g1_ParamLimits

0xe322,	// (0x00045b79) bg_hwr_side_pane_g1

0x8630,	// (0x0003fe87) cell_hwr_side_pane_ParamLimits

0x8630,	// (0x0003fe87) cell_hwr_side_pane

0x2863,	// (0x0003a0ba) fep_hwr_write_pane_g1_ParamLimits

0x2863,	// (0x0003a0ba) fep_hwr_write_pane_g1

0x2870,	// (0x0003a0c7) fep_hwr_write_pane_g2_ParamLimits

0x2870,	// (0x0003a0c7) fep_hwr_write_pane_g2

0x287d,	// (0x0003a0d4) fep_hwr_write_pane_g3_ParamLimits

0x287d,	// (0x0003a0d4) fep_hwr_write_pane_g3

0x8650,	// (0x0003fea7) fep_hwr_write_pane_g4_ParamLimits

0x8650,	// (0x0003fea7) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x0004736e) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x0004736e) fep_hwr_write_pane_g

0x95ee,	// (0x00040e45) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x95ee,	// (0x00040e45) bg_fep_hwr_candidate_pane_g2

0x28a0,	// (0x0003a0f7) cell_hwr_candidate_pane_ParamLimits

0x28a0,	// (0x0003a0f7) cell_hwr_candidate_pane

0x28e2,	// (0x0003a139) fep_hwr_candidate_pane_g1_ParamLimits

0xe382,	// (0x00045bd9) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe382,	// (0x00045bd9) bg_popup_fep_shadow_pane_cp2

0xe435,	// (0x00045c8c) fep_vkb_top_pane_g4_ParamLimits

0xe435,	// (0x00045c8c) fep_vkb_top_pane_g4

0xe454,	// (0x00045cab) fep_vkb_side_pane_g2_ParamLimits

0xe454,	// (0x00045cab) fep_vkb_side_pane_g2

0x7228,	// (0x0003ea7f) list_setting_pane_t4_ParamLimits

0x7228,	// (0x0003ea7f) list_setting_pane_t4

0x72c2,	// (0x0003eb19) list_setting_number_pane_t5_ParamLimits

0x72c2,	// (0x0003eb19) list_setting_number_pane_t5

0x7d8d,	// (0x0003f5e4) list_double_heading_pane_cp2_ParamLimits

0x7d8d,	// (0x0003f5e4) list_double_heading_pane_cp2

0xb09a,	// (0x000428f1) list_double_heading_pane_g1_cp2_ParamLimits

0xb09a,	// (0x000428f1) list_double_heading_pane_g1_cp2

0xb0a6,	// (0x000428fd) list_double_heading_pane_g2_cp2_ParamLimits

0xb0a6,	// (0x000428fd) list_double_heading_pane_g2_cp2

0xe6fa,	// (0x00045f51) list_double_heading_pane_t1_cp2_ParamLimits

0xe6fa,	// (0x00045f51) list_double_heading_pane_t1_cp2

0xe710,	// (0x00045f67) list_double_heading_pane_t2_cp2_ParamLimits

0xe710,	// (0x00045f67) list_double_heading_pane_t2_cp2

0x8b1c,	// (0x00040373) aid_value_unit2

0x1384,	// (0x00038bdb) popup_preview_fixed_window

0x8cc7,	// (0x0004051e) bg_popup_preview_window_pane_cp02

0xe722,	// (0x00045f79) list_preview_fixed_pane

0xe768,	// (0x00045fbf) list_empty_pane_fp_ParamLimits

0xe768,	// (0x00045fbf) list_empty_pane_fp

0xe768,	// (0x00045fbf) list_single_cale_day_pane_fp_ParamLimits

0xe768,	// (0x00045fbf) list_single_cale_day_pane_fp

0xe768,	// (0x00045fbf) list_single_graphic_heading_pane_fp_ParamLimits

0xe768,	// (0x00045fbf) list_single_graphic_heading_pane_fp

0xe768,	// (0x00045fbf) list_single_graphic_pane_fp_ParamLimits

0xe768,	// (0x00045fbf) list_single_graphic_pane_fp

0xe768,	// (0x00045fbf) list_single_heading_pane_fp_ParamLimits

0xe768,	// (0x00045fbf) list_single_heading_pane_fp

0xe768,	// (0x00045fbf) list_single_pane_fp_ParamLimits

0xe768,	// (0x00045fbf) list_single_pane_fp

0xe77d,	// (0x00045fd4) list_single_pane_fp_g1_ParamLimits

0xe77d,	// (0x00045fd4) list_single_pane_fp_g1

0xb09a,	// (0x000428f1) list_single_pane_fp_g2_ParamLimits

0xb09a,	// (0x000428f1) list_single_pane_fp_g2

0xb0a6,	// (0x000428fd) list_single_pane_fp_g3_ParamLimits

0xb0a6,	// (0x000428fd) list_single_pane_fp_g3

0xe789,	// (0x00045fe0) list_single_pane_fp_g4_ParamLimits

0xe789,	// (0x00045fe0) list_single_pane_fp_g4

0x0003,

0xfb79,	// (0x000473d0) list_single_pane_fp_g_ParamLimits

0xfb79,	// (0x000473d0) list_single_pane_fp_g

0x0e15,	// (0x0003866c) list_single_pane_fp_t1_ParamLimits

0x0e15,	// (0x0003866c) list_single_pane_fp_t1

0x0e2c,	// (0x00038683) list_single_graphic_pane_fp_g1_ParamLimits

0x0e2c,	// (0x00038683) list_single_graphic_pane_fp_g1

0xe77d,	// (0x00045fd4) list_single_graphic_pane_fp_g2_ParamLimits

0xe77d,	// (0x00045fd4) list_single_graphic_pane_fp_g2

0xb09a,	// (0x000428f1) list_single_graphic_pane_fp_g3_ParamLimits

0xb09a,	// (0x000428f1) list_single_graphic_pane_fp_g3

0xb0a6,	// (0x000428fd) list_single_graphic_pane_fp_g4_ParamLimits

0xb0a6,	// (0x000428fd) list_single_graphic_pane_fp_g4

0xe789,	// (0x00045fe0) list_single_graphic_pane_fp_g5_ParamLimits

0xe789,	// (0x00045fe0) list_single_graphic_pane_fp_g5

0x0004,

0xfb82,	// (0x000473d9) list_single_graphic_pane_fp_g_ParamLimits

0xfb82,	// (0x000473d9) list_single_graphic_pane_fp_g

0x0e38,	// (0x0003868f) list_single_graphic_pane_fp_t1_ParamLimits

0x0e38,	// (0x0003868f) list_single_graphic_pane_fp_t1

0x0e2c,	// (0x00038683) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0e2c,	// (0x00038683) list_single_graphic_heading_pane_fp_g1

0xe77d,	// (0x00045fd4) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xe77d,	// (0x00045fd4) list_single_graphic_heading_pane_fp_g2

0xb09a,	// (0x000428f1) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xb09a,	// (0x000428f1) list_single_graphic_heading_pane_fp_g3

0xb0a6,	// (0x000428fd) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xb0a6,	// (0x000428fd) list_single_graphic_heading_pane_fp_g4

0xe789,	// (0x00045fe0) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xe789,	// (0x00045fe0) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb82,	// (0x000473d9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x000473d9) list_single_graphic_heading_pane_fp_g

0x0e4e,	// (0x000386a5) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0e4e,	// (0x000386a5) list_single_graphic_heading_pane_fp_t1

0x0e64,	// (0x000386bb) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0e64,	// (0x000386bb) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8d,	// (0x000473e4) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8d,	// (0x000473e4) list_single_graphic_heading_pane_fp_t

0x0e76,	// (0x000386cd) list_single_cale_day_pane_fp_g1_ParamLimits

0x0e76,	// (0x000386cd) list_single_cale_day_pane_fp_g1

0xe795,	// (0x00045fec) list_single_cale_day_pane_fp_g2_ParamLimits

0xe795,	// (0x00045fec) list_single_cale_day_pane_fp_g2

0x296e,	// (0x0003a1c5) list_single_cale_day_pane_fp_g3_ParamLimits

0x296e,	// (0x0003a1c5) list_single_cale_day_pane_fp_g3

0x2996,	// (0x0003a1ed) list_single_cale_day_pane_fp_g4_ParamLimits

0x2996,	// (0x0003a1ed) list_single_cale_day_pane_fp_g4

0x29ba,	// (0x0003a211) list_single_cale_day_pane_fp_g5_ParamLimits

0x29ba,	// (0x0003a211) list_single_cale_day_pane_fp_g5

0x0004,

0xfb92,	// (0x000473e9) list_single_cale_day_pane_fp_g_ParamLimits

0xfb92,	// (0x000473e9) list_single_cale_day_pane_fp_g

0x0eae,	// (0x00038705) list_single_cale_day_pane_fp_t1_ParamLimits

0x0eae,	// (0x00038705) list_single_cale_day_pane_fp_t1

0x0ed4,	// (0x0003872b) list_single_cale_day_pane_fp_t2_ParamLimits

0x0ed4,	// (0x0003872b) list_single_cale_day_pane_fp_t2

0x0eed,	// (0x00038744) list_single_cale_day_pane_fp_t3_ParamLimits

0x0eed,	// (0x00038744) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9d,	// (0x000473f4) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9d,	// (0x000473f4) list_single_cale_day_pane_fp_t

0xe77d,	// (0x00045fd4) list_empty_pane_fp_g1_ParamLimits

0xe77d,	// (0x00045fd4) list_empty_pane_fp_g1

0x0f06,	// (0x0003875d) list_empty_pane_fp_t1

0x0f14,	// (0x0003876b) list_empty_pane_fp_t2

0x0001,

0xfba4,	// (0x000473fb) list_empty_pane_fp_t

0xe77d,	// (0x00045fd4) list_single_heading_pane_fp_g1_ParamLimits

0xe77d,	// (0x00045fd4) list_single_heading_pane_fp_g1

0xb09a,	// (0x000428f1) list_single_heading_pane_fp_g2_ParamLimits

0xb09a,	// (0x000428f1) list_single_heading_pane_fp_g2

0xb0a6,	// (0x000428fd) list_single_heading_pane_fp_g3_ParamLimits

0xb0a6,	// (0x000428fd) list_single_heading_pane_fp_g3

0x0002,

0xfba9,	// (0x00047400) list_single_heading_pane_fp_g_ParamLimits

0xfba9,	// (0x00047400) list_single_heading_pane_fp_g

0x0f22,	// (0x00038779) list_single_heading_pane_fp_t1_ParamLimits

0x0f22,	// (0x00038779) list_single_heading_pane_fp_t1

0x0f34,	// (0x0003878b) list_single_heading_pane_fp_t2_ParamLimits

0x0f34,	// (0x0003878b) list_single_heading_pane_fp_t2

0x0001,

0xfbb0,	// (0x00047407) list_single_heading_pane_fp_t_ParamLimits

0xfbb0,	// (0x00047407) list_single_heading_pane_fp_t

0xb1e4,	// (0x00042a3b) aid_size_cell_fast

0x8caa,	// (0x00040501) soft_indicator_pane_cp1_t1

0xb221,	// (0x00042a78) cell_app_pane_cp2_ParamLimits

0xb221,	// (0x00042a78) cell_app_pane_cp2

0x2732,	// (0x00039f89) fep_hwr_candidate_drop_down_list_pane

0x95fc,	// (0x00040e53) fep_hwr_candidate_pane_g3_ParamLimits

0x95fc,	// (0x00040e53) fep_hwr_candidate_pane_g3

0x9609,	// (0x00040e60) fep_hwr_candidate_pane_g4_ParamLimits

0x9609,	// (0x00040e60) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x0004737b) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x0004737b) fep_hwr_candidate_pane_g

0xe3d0,	// (0x00045c27) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe3d0,	// (0x00045c27) fep_vkb_candidate_drop_down_list_pane

0xe655,	// (0x00045eac) fep_vkb_candidate_pane_g3

0xe65d,	// (0x00045eb4) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x000473a8) fep_vkb_candidate_pane_g

0xe435,	// (0x00045c8c) cell_hwr_candidate_pane_g1_ParamLimits

0xe674,	// (0x00045ecb) cell_hwr_candidate_pane_g3_ParamLimits

0xe674,	// (0x00045ecb) cell_hwr_candidate_pane_g3

0xe695,	// (0x00045eec) cell_hwr_candidate_pane_g4_ParamLimits

0xe695,	// (0x00045eec) cell_hwr_candidate_pane_g4

0x0002,

0xfb6b,	// (0x000473c2) cell_hwr_candidate_pane_g_ParamLimits

0xfb6b,	// (0x000473c2) cell_hwr_candidate_pane_g

0xe6b6,	// (0x00045f0d) cell_vkb_candidate_pane_g3_ParamLimits

0xe6b6,	// (0x00045f0d) cell_vkb_candidate_pane_g3

0xe6d1,	// (0x00045f28) cell_vkb_candidate_pane_g4_ParamLimits

0xe6d1,	// (0x00045f28) cell_vkb_candidate_pane_g4

0xe7a1,	// (0x00045ff8) cell_app_pane_cp2_g1_ParamLimits

0xe7a1,	// (0x00045ff8) cell_app_pane_cp2_g1

0xe7bf,	// (0x00046016) cell_app_pane_cp2_g2_ParamLimits

0xe7bf,	// (0x00046016) cell_app_pane_cp2_g2

0x0001,

0xfbb5,	// (0x0004740c) cell_app_pane_cp2_g_ParamLimits

0xfbb5,	// (0x0004740c) cell_app_pane_cp2_g

0xe7cb,	// (0x00046022) cell_app_pane_cp2_t1_ParamLimits

0xe7cb,	// (0x00046022) cell_app_pane_cp2_t1

0xb080,	// (0x000428d7) grid_highlight_pane_cp1_ParamLimits

0xb080,	// (0x000428d7) grid_highlight_pane_cp1

0x29de,	// (0x0003a235) cell_hwr_candidate_pane_cp1_ParamLimits

0x29de,	// (0x0003a235) cell_hwr_candidate_pane_cp1

0xe435,	// (0x00045c8c) fep_hwr_candidate_drop_down_list_pane_g1

0xe7dd,	// (0x00046034) fep_hwr_candidate_drop_down_list_pane_g2

0xe7ea,	// (0x00046041) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x00047411) fep_hwr_candidate_drop_down_list_pane_g

0x29fd,	// (0x0003a254) fep_hwr_candidate_drop_down_list_scroll_pane

0x2a06,	// (0x0003a25d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2a06,	// (0x0003a25d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2a13,	// (0x0003a26a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2a13,	// (0x0003a26a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2a20,	// (0x0003a277) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2a20,	// (0x0003a277) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xe6b6,	// (0x00045f0d) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe6b6,	// (0x00045f0d) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xe6d1,	// (0x00045f28) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe6d1,	// (0x00045f28) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2a2d,	// (0x0003a284) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2a2d,	// (0x0003a284) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2a48,	// (0x0003a29f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2a48,	// (0x0003a29f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2a63,	// (0x0003a2ba) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2a63,	// (0x0003a2ba) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc1,	// (0x00047418) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc1,	// (0x00047418) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xe7f7,	// (0x0004604e) cell_vkb_candidate_pane_cp1_ParamLimits

0xe7f7,	// (0x0004604e) cell_vkb_candidate_pane_cp1

0xe435,	// (0x00045c8c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe435,	// (0x00045c8c) fep_vkb_candidate_drop_down_list_pane_g1

0xe7dd,	// (0x00046034) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xe7dd,	// (0x00046034) fep_vkb_candidate_drop_down_list_pane_g2

0xe7ea,	// (0x00046041) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xe7ea,	// (0x00046041) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x00047411) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbba,	// (0x00047411) fep_vkb_candidate_drop_down_list_pane_g

0xe817,	// (0x0004606e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xe817,	// (0x0004606e) fep_vkb_candidate_drop_down_list_scroll_pane

0xe824,	// (0x0004607b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe824,	// (0x0004607b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xe831,	// (0x00046088) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe831,	// (0x00046088) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xe83d,	// (0x00046094) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe83d,	// (0x00046094) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xe674,	// (0x00045ecb) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe674,	// (0x00045ecb) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xe695,	// (0x00045eec) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe695,	// (0x00045eec) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xe849,	// (0x000460a0) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe849,	// (0x000460a0) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xe86a,	// (0x000460c1) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe86a,	// (0x000460c1) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xe88b,	// (0x000460e2) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe88b,	// (0x000460e2) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x00047429) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x00047429) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x784c,	// (0x0003f0a3) title_pane_g1_ParamLimits

0x785f,	// (0x0003f0b6) title_pane_g2_ParamLimits

0xf566,	// (0x00046dbd) title_pane_g_ParamLimits

0xb891,	// (0x000430e8) aid_call2_pane

0xb899,	// (0x000430f0) aid_call_pane

0xb8a1,	// (0x000430f8) popup_clock_analogue_window_g1

0xb8a1,	// (0x000430f8) popup_clock_analogue_window_g2

0x1b94,	// (0x000393eb) popup_clock_analogue_window_g3

0x1b9d,	// (0x000393f4) popup_clock_analogue_window_g4

0x8b2e,	// (0x00040385) popup_clock_analogue_window_g5

0x0004,

0xf715,	// (0x00046f6c) popup_clock_analogue_window_g

0x1ba5,	// (0x000393fc) popup_clock_analogue_window_t1

0x1be0,	// (0x00039437) clock_digital_number_pane_ParamLimits

0x1be0,	// (0x00039437) clock_digital_number_pane

0x1bec,	// (0x00039443) clock_digital_number_pane_cp02_ParamLimits

0x1bec,	// (0x00039443) clock_digital_number_pane_cp02

0x1bf8,	// (0x0003944f) clock_digital_number_pane_cp03_ParamLimits

0x1bf8,	// (0x0003944f) clock_digital_number_pane_cp03

0x1c04,	// (0x0003945b) clock_digital_number_pane_cp04_ParamLimits

0x1c04,	// (0x0003945b) clock_digital_number_pane_cp04

0x1c10,	// (0x00039467) clock_digital_separator_pane_ParamLimits

0x1c10,	// (0x00039467) clock_digital_separator_pane

0x1c1c,	// (0x00039473) popup_clock_digital_window_t1_ParamLimits

0x1c1c,	// (0x00039473) popup_clock_digital_window_t1

0x8b2e,	// (0x00040385) clock_digital_number_pane_g1

0x8b2e,	// (0x00040385) clock_digital_number_pane_g2

0x0001,

0xf720,	// (0x00046f77) clock_digital_number_pane_g

0x8b2e,	// (0x00040385) clock_digital_separator_pane_g1

0x8b2e,	// (0x00040385) clock_digital_separator_pane_g2

0x0001,

0xf720,	// (0x00046f77) clock_digital_separator_pane_g

0x90fc,	// (0x00040953) aid_fill_nsta_ParamLimits

0x9232,	// (0x00040a89) indicator_nsta_pane_ParamLimits

0xc2eb,	// (0x00043b42) popup_clock_analogue_window

0xc2eb,	// (0x00043b42) popup_clock_digital_window

0xcea3,	// (0x000446fa) grid_indicator_nsta_pane_ParamLimits

0xdf26,	// (0x0004577d) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x000472fb) clock_nsta_pane_t

0x1b58,	// (0x000393af) aid_size_max_handle

0x7d84,	// (0x0003f5db) aid_size_min_handle

0xbe9e,	// (0x000436f5) editor_scroll_pane

0xe8a6,	// (0x000460fd) ex_editor_pane

0xb19f,	// (0x000429f6) scroll_pane_cp13

0x99aa,	// (0x00041201) scroll_pane_cp14

0xb8d0,	// (0x00043127) scroll_pane_cp36

0x7d9c,	// (0x0003f5f3) list_single_graphic_hl_pane_cp2_ParamLimits

0x7d9c,	// (0x0003f5f3) list_single_graphic_hl_pane_cp2

0x85f6,	// (0x0003fe4d) list_single_graphic_hl_pane_ParamLimits

0x85f6,	// (0x0003fe4d) list_single_graphic_hl_pane

0x0f4a,	// (0x000387a1) aid_size_min_hl_cp1

0xe8ae,	// (0x00046105) list_highlight_pane_cp34_ParamLimits

0xe8ae,	// (0x00046105) list_highlight_pane_cp34

0xe8bf,	// (0x00046116) list_single_graphic_hl_pane_g1_ParamLimits

0xe8bf,	// (0x00046116) list_single_graphic_hl_pane_g1

0x0f53,	// (0x000387aa) list_single_graphic_hl_pane_g2_ParamLimits

0x0f53,	// (0x000387aa) list_single_graphic_hl_pane_g2

0x0f53,	// (0x000387aa) list_single_graphic_hl_pane_g3_ParamLimits

0x0f53,	// (0x000387aa) list_single_graphic_hl_pane_g3

0xbe0f,	// (0x00043666) list_single_graphic_hl_pane_g4_ParamLimits

0xbe0f,	// (0x00043666) list_single_graphic_hl_pane_g4

0x2a7e,	// (0x0003a2d5) list_single_graphic_hl_pane_g5_ParamLimits

0x2a7e,	// (0x0003a2d5) list_single_graphic_hl_pane_g5

0x0004,

0xfbe3,	// (0x0004743a) list_single_graphic_hl_pane_g_ParamLimits

0xfbe3,	// (0x0004743a) list_single_graphic_hl_pane_g

0x0f5f,	// (0x000387b6) list_single_graphic_hl_pane_t1_ParamLimits

0x0f5f,	// (0x000387b6) list_single_graphic_hl_pane_t1

0xe8cc,	// (0x00046123) aid_size_min_hl_cp2

0xe8d5,	// (0x0004612c) list_highlight_pane_cp34_cp2_ParamLimits

0xe8d5,	// (0x0004612c) list_highlight_pane_cp34_cp2

0xe8bf,	// (0x00046116) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xe8bf,	// (0x00046116) list_single_graphic_hl_pane_g1_cp2

0xe8e2,	// (0x00046139) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xe8e2,	// (0x00046139) list_single_graphic_hl_pane_g2_cp2

0xe8ee,	// (0x00046145) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe8ee,	// (0x00046145) list_single_graphic_hl_pane_g3_cp2

0xc9a4,	// (0x000441fb) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc9a4,	// (0x000441fb) list_single_graphic_hl_pane_g4_cp2

0xe8fc,	// (0x00046153) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xe8fc,	// (0x00046153) list_single_graphic_hl_pane_g5_cp2

0x7f9b,	// (0x0003f7f2) control_pane_g4_ParamLimits

0x7f9b,	// (0x0003f7f2) control_pane_g4

0xb1d8,	// (0x00042a2f) bg_popup_sub_pane_cp10_ParamLimits

0xe2ac,	// (0x00045b03) list_choice_list_pane_ParamLimits

0xe2bb,	// (0x00045b12) scroll_pane_cp23

0x8cc7,	// (0x0004051e) bg_popup_preview_window_pane_cp02_ParamLimits

0xe722,	// (0x00045f79) list_preview_fixed_pane_ParamLimits

0xe738,	// (0x00045f8f) list_preview_fixed_pane_cp_ParamLimits

0xe738,	// (0x00045f8f) list_preview_fixed_pane_cp

0xe744,	// (0x00045f9b) popup_preview_fixed_window_g1_ParamLimits

0xe744,	// (0x00045f9b) popup_preview_fixed_window_g1

0xe750,	// (0x00045fa7) popup_preview_fixed_window_g2_ParamLimits

0xe750,	// (0x00045fa7) popup_preview_fixed_window_g2

0x0002,

0xfb72,	// (0x000473c9) popup_preview_fixed_window_g_ParamLimits

0xfb72,	// (0x000473c9) popup_preview_fixed_window_g

0x1a38,	// (0x0003928f) aid_navi_side_left_pane_ParamLimits

0x1a4d,	// (0x000392a4) aid_navi_side_right_pane_ParamLimits

0x1a65,	// (0x000392bc) navi_icon_pane_stacon_ParamLimits

0x1a79,	// (0x000392d0) navi_navi_pane_stacon_ParamLimits

0x1a65,	// (0x000392bc) navi_text_pane_stacon_ParamLimits

0x8b24,	// (0x0004037b) main_text_info_pane

0xe926,	// (0x0004617d) listscroll_text_info_pane

0xe92e,	// (0x00046185) list_text_info_pane_ParamLimits

0xe92e,	// (0x00046185) list_text_info_pane

0xe93d,	// (0x00046194) scroll_pane_cp24_ParamLimits

0xe93d,	// (0x00046194) scroll_pane_cp24

0xa100,	// (0x00041957) list_text_info_pane_t1_ParamLimits

0xa100,	// (0x00041957) list_text_info_pane_t1

0x812f,	// (0x0003f986) popup_fast_swap2_window_ParamLimits

0x812f,	// (0x0003f986) popup_fast_swap2_window

0xe95b,	// (0x000461b2) aid_size_cell_fast2

0x8b24,	// (0x0004037b) bg_popup_window_pane_cp17

0xc7ab,	// (0x00044002) heading_pane_cp2

0x972f,	// (0x00040f86) listscroll_fast2_pane

0xe965,	// (0x000461bc) grid_fast2_pane

0xe96f,	// (0x000461c6) listscroll_fast2_pane_g1

0xe977,	// (0x000461ce) listscroll_fast2_pane_g2

0x0001,

0xfbee,	// (0x00047445) listscroll_fast2_pane_g

0xb19f,	// (0x000429f6) scroll_pane_cp26

0xe981,	// (0x000461d8) cell_fast2_pane_ParamLimits

0xe981,	// (0x000461d8) cell_fast2_pane

0xe996,	// (0x000461ed) cell_fast2_pane_g1

0xe99f,	// (0x000461f6) cell_fast2_pane_g2

0xe9a8,	// (0x000461ff) cell_fast2_pane_g3

0x0002,

0xfbf3,	// (0x0004744a) cell_fast2_pane_g

0x9771,	// (0x00040fc8) grid_highlight_pane_cp9

0x9786,	// (0x00040fdd) main_eswt_pane_ParamLimits

0x9786,	// (0x00040fdd) main_eswt_pane

0xe952,	// (0x000461a9) list_single_text_info_pane

0xe9b0,	// (0x00046207) eswt_ctrl_button_pane

0xe9b0,	// (0x00046207) eswt_ctrl_canvas_pane

0xe9b8,	// (0x0004620f) eswt_ctrl_combo_pane

0xe9b0,	// (0x00046207) eswt_ctrl_default_pane

0xe9b0,	// (0x00046207) eswt_ctrl_label_pane

0xe9c0,	// (0x00046217) eswt_ctrl_wait_pane

0xe9c8,	// (0x0004621f) eswt_shell_pane

0x8b24,	// (0x0004037b) listscroll_eswt_app_pane

0xe9e8,	// (0x0004623f) popup_eswt_tasktip_window_ParamLimits

0xe9e8,	// (0x0004623f) popup_eswt_tasktip_window

0xc4fe,	// (0x00043d55) bg_popup_window_pane_cp18

0xe9f9,	// (0x00046250) eswt_control_pane_g1_ParamLimits

0xe9f9,	// (0x00046250) eswt_control_pane_g1

0xea06,	// (0x0004625d) eswt_control_pane_g2_ParamLimits

0xea06,	// (0x0004625d) eswt_control_pane_g2

0xea13,	// (0x0004626a) eswt_control_pane_g3_ParamLimits

0xea13,	// (0x0004626a) eswt_control_pane_g3

0xea20,	// (0x00046277) eswt_control_pane_g4_ParamLimits

0xea20,	// (0x00046277) eswt_control_pane_g4

0x0003,

0xfbfa,	// (0x00047451) eswt_control_pane_g_ParamLimits

0xfbfa,	// (0x00047451) eswt_control_pane_g

0xb080,	// (0x000428d7) bg_button_pane_ParamLimits

0xb080,	// (0x000428d7) bg_button_pane

0x9786,	// (0x00040fdd) common_borders_pane_copy2_ParamLimits

0x9786,	// (0x00040fdd) common_borders_pane_copy2

0xea2d,	// (0x00046284) control_button_pane_g1_ParamLimits

0xea2d,	// (0x00046284) control_button_pane_g1

0xea39,	// (0x00046290) control_button_pane_g2_ParamLimits

0xea39,	// (0x00046290) control_button_pane_g2

0xea45,	// (0x0004629c) control_button_pane_g3_ParamLimits

0xea45,	// (0x0004629c) control_button_pane_g3

0x0002,

0xfc03,	// (0x0004745a) control_button_pane_g_ParamLimits

0xfc03,	// (0x0004745a) control_button_pane_g

0xea59,	// (0x000462b0) control_button_pane_t1

0xea67,	// (0x000462be) control_button_pane_t2

0x0001,

0xfc0a,	// (0x00047461) control_button_pane_t

0xc3fa,	// (0x00043c51) bg_button_pane_g1

0xc402,	// (0x00043c59) bg_button_pane_g2

0xc40a,	// (0x00043c61) bg_button_pane_g3

0xc412,	// (0x00043c69) bg_button_pane_g4

0xc41a,	// (0x00043c71) bg_button_pane_g5

0xc422,	// (0x00043c79) bg_button_pane_g6

0xc42a,	// (0x00043c81) bg_button_pane_g7

0xc432,	// (0x00043c89) bg_button_pane_g8

0xc43a,	// (0x00043c91) bg_button_pane_g9

0x0008,

0xf870,	// (0x000470c7) bg_button_pane_g

0xe267,	// (0x00045abe) common_borders_pane_ParamLimits

0xe267,	// (0x00045abe) common_borders_pane

0xe9f9,	// (0x00046250) eswt_control_pane_g1_copy1_ParamLimits

0xe9f9,	// (0x00046250) eswt_control_pane_g1_copy1

0xea06,	// (0x0004625d) eswt_control_pane_g2_copy1_ParamLimits

0xea06,	// (0x0004625d) eswt_control_pane_g2_copy1

0xea13,	// (0x0004626a) eswt_control_pane_g3_copy1_ParamLimits

0xea13,	// (0x0004626a) eswt_control_pane_g3_copy1

0xea20,	// (0x00046277) eswt_control_pane_g4_copy1_ParamLimits

0xea20,	// (0x00046277) eswt_control_pane_g4_copy1

0xe2a2,	// (0x00045af9) bg_eswt_ctrl_canvas_pane_g1

0xe267,	// (0x00045abe) common_borders_pane_cp2_ParamLimits

0xe267,	// (0x00045abe) common_borders_pane_cp2

0xe267,	// (0x00045abe) common_borders_pane_cp3_ParamLimits

0xe267,	// (0x00045abe) common_borders_pane_cp3

0xea75,	// (0x000462cc) separator_horizontal_pane

0xea7d,	// (0x000462d4) separator_vertical_pane

0xe9f9,	// (0x00046250) eswt_control_pane_g1_copy2_ParamLimits

0xe9f9,	// (0x00046250) eswt_control_pane_g1_copy2

0xea06,	// (0x0004625d) eswt_control_pane_g2_copy2_ParamLimits

0xea06,	// (0x0004625d) eswt_control_pane_g2_copy2

0xea13,	// (0x0004626a) eswt_control_pane_g3_copy2_ParamLimits

0xea13,	// (0x0004626a) eswt_control_pane_g3_copy2

0xea20,	// (0x00046277) eswt_control_pane_g4_copy2_ParamLimits

0xea20,	// (0x00046277) eswt_control_pane_g4_copy2

0x8b24,	// (0x0004037b) common_borders_pane_cp4

0xea86,	// (0x000462dd) separator_horizontal_pane_g1

0xea8f,	// (0x000462e6) separator_horizontal_pane_g2

0xea98,	// (0x000462ef) separator_horizontal_pane_g3

0x0002,

0xfc0f,	// (0x00047466) separator_horizontal_pane_g

0xe9f9,	// (0x00046250) eswt_control_pane_g1_copy3_ParamLimits

0xe9f9,	// (0x00046250) eswt_control_pane_g1_copy3

0xea06,	// (0x0004625d) eswt_control_pane_g2_copy3_ParamLimits

0xea06,	// (0x0004625d) eswt_control_pane_g2_copy3

0xea13,	// (0x0004626a) eswt_control_pane_g3_copy3_ParamLimits

0xea13,	// (0x0004626a) eswt_control_pane_g3_copy3

0xea20,	// (0x00046277) eswt_control_pane_g4_copy3_ParamLimits

0xea20,	// (0x00046277) eswt_control_pane_g4_copy3

0x8b24,	// (0x0004037b) common_borders_pane_cp5

0xeaa1,	// (0x000462f8) separator_vertical_pane_g1

0xeaaa,	// (0x00046301) separator_vertical_pane_g2

0xeab3,	// (0x0004630a) separator_vertical_pane_g3

0x0002,

0xfc16,	// (0x0004746d) separator_vertical_pane_g

0xe9f9,	// (0x00046250) eswt_control_pane_g1_copy4_ParamLimits

0xe9f9,	// (0x00046250) eswt_control_pane_g1_copy4

0xea06,	// (0x0004625d) eswt_control_pane_g2_copy4_ParamLimits

0xea06,	// (0x0004625d) eswt_control_pane_g2_copy4

0xea13,	// (0x0004626a) eswt_control_pane_g3_copy4_ParamLimits

0xea13,	// (0x0004626a) eswt_control_pane_g3_copy4

0xea20,	// (0x00046277) eswt_control_pane_g4_copy4_ParamLimits

0xea20,	// (0x00046277) eswt_control_pane_g4_copy4

0xa11b,	// (0x00041972) eswt_ctrl_combo_button_pane

0xa123,	// (0x0004197a) eswt_ctrl_input_pane

0xa12b,	// (0x00041982) popup_choice_list_window_cp70

0xa133,	// (0x0004198a) eswt_ctrl_input_pane_t1

0x8b24,	// (0x0004037b) input_focus_pane_cp70

0xe267,	// (0x00045abe) bg_button_pane_cp70_ParamLimits

0xe267,	// (0x00045abe) bg_button_pane_cp70

0xa141,	// (0x00041998) eswt_ctrl_combo_button_pane_g1

0xeabc,	// (0x00046313) wait_bar_pane_cp70

0xc4fe,	// (0x00043d55) bg_popup_window_pane_cp70_ParamLimits

0xc4fe,	// (0x00043d55) bg_popup_window_pane_cp70

0xeac4,	// (0x0004631b) popup_eswt_tasktip_window_t1

0xeada,	// (0x00046331) wait_bar_pane_cp71_ParamLimits

0xeada,	// (0x00046331) wait_bar_pane_cp71

0xeae6,	// (0x0004633d) grid_eswt_app_pane

0xb6dc,	// (0x00042f33) scroll_pane_cp70

0xa149,	// (0x000419a0) cell_eswt_app_pane_ParamLimits

0xa149,	// (0x000419a0) cell_eswt_app_pane

0xa173,	// (0x000419ca) cell_eswt_app_pane_g1_ParamLimits

0xa173,	// (0x000419ca) cell_eswt_app_pane_g1

0xa1a2,	// (0x000419f9) cell_eswt_app_pane_g2_ParamLimits

0xa1a2,	// (0x000419f9) cell_eswt_app_pane_g2

0x0001,

0xfc1d,	// (0x00047474) cell_eswt_app_pane_g_ParamLimits

0xfc1d,	// (0x00047474) cell_eswt_app_pane_g

0xa1cb,	// (0x00041a22) cell_eswt_app_pane_t1_ParamLimits

0xa1cb,	// (0x00041a22) cell_eswt_app_pane_t1

0xeaef,	// (0x00046346) grid_highlight_pane_cp70_ParamLimits

0xeaef,	// (0x00046346) grid_highlight_pane_cp70

0xbd7f,	// (0x000435d6) set_content_pane_g1

0xc08f,	// (0x000438e6) status_small_volume_pane

0x2a92,	// (0x0003a2e9) status_small_volume_pane_g1

0x2a9a,	// (0x0003a2f1) volume_small2_pane

0x2aa3,	// (0x0003a2fa) volume_small2_pane_g1

0x2aac,	// (0x0003a303) volume_small2_pane_g2

0x2ab5,	// (0x0003a30c) volume_small2_pane_g3

0x2abe,	// (0x0003a315) volume_small2_pane_g4

0x2ac7,	// (0x0003a31e) volume_small2_pane_g5

0x2ad0,	// (0x0003a327) volume_small2_pane_g6

0x2ad9,	// (0x0003a330) volume_small2_pane_g7

0x2ae2,	// (0x0003a339) volume_small2_pane_g8

0x2aeb,	// (0x0003a342) volume_small2_pane_g9

0x2af4,	// (0x0003a34b) volume_small2_pane_g10

0x0009,

0xfc22,	// (0x00047479) volume_small2_pane_g

0xe542,	// (0x00045d99) fep_vkb_top_text_pane_g1_ParamLimits

0xa0a8,	// (0x000418ff) fep_vkb_top_text_pane_t1_ParamLimits

0xe75c,	// (0x00045fb3) popup_preview_fixed_window_g3_ParamLimits

0xe75c,	// (0x00045fb3) popup_preview_fixed_window_g3

0x908f,	// (0x000408e6) popup_toolbar_trans_pane

0x9ad1,	// (0x00041328) aid_height_set_list_ParamLimits

0xc9b0,	// (0x00044207) aid_size_parent_ParamLimits

0xb1d8,	// (0x00042a2f) list_highlight_pane_cp2_ParamLimits

0xbd7f,	// (0x000435d6) set_content_pane_g1_ParamLimits

0x8607,	// (0x0003fe5e) list_single_image_pane_ParamLimits

0x8607,	// (0x0003fe5e) list_single_image_pane

0xa1fd,	// (0x00041a54) aid_size_cell_image_ParamLimits

0xa1fd,	// (0x00041a54) aid_size_cell_image

0xa20a,	// (0x00041a61) grid_single_image_pane_ParamLimits

0xa20a,	// (0x00041a61) grid_single_image_pane

0xc48a,	// (0x00043ce1) list_single_image_pane_g1_ParamLimits

0xc48a,	// (0x00043ce1) list_single_image_pane_g1

0xeafb,	// (0x00046352) list_single_image_pane_g2_ParamLimits

0xeafb,	// (0x00046352) list_single_image_pane_g2

0x0001,

0xfc37,	// (0x0004748e) list_single_image_pane_g_ParamLimits

0xfc37,	// (0x0004748e) list_single_image_pane_g

0xceb1,	// (0x00044708) list_single_image_pane_t1_ParamLimits

0xceb1,	// (0x00044708) list_single_image_pane_t1

0xa218,	// (0x00041a6f) cell_image_list_pane_ParamLimits

0xa218,	// (0x00041a6f) cell_image_list_pane

0xa22e,	// (0x00041a85) cell_image_list_pane_g1

0xa237,	// (0x00041a8e) cell_image_list_pane_g2

0x0001,

0xfc3c,	// (0x00047493) cell_image_list_pane_g

0xeb0f,	// (0x00046366) aid_size_cell_tb_trans_pane

0xb080,	// (0x000428d7) bg_tb_trans_pane

0xeb21,	// (0x00046378) grid_tb_trans_pane

0xc3fa,	// (0x00043c51) bg_tb_trans_pane_g1

0xc402,	// (0x00043c59) bg_tb_trans_pane_g2

0xc40a,	// (0x00043c61) bg_tb_trans_pane_g3

0xc412,	// (0x00043c69) bg_tb_trans_pane_g4

0xc41a,	// (0x00043c71) bg_tb_trans_pane_g5

0xc432,	// (0x00043c89) bg_tb_trans_pane_g6

0xc43a,	// (0x00043c91) bg_tb_trans_pane_g7

0xc422,	// (0x00043c79) bg_tb_trans_pane_g8

0xc42a,	// (0x00043c81) bg_tb_trans_pane_g9

0x0008,

0xfc41,	// (0x00047498) bg_tb_trans_pane_g

0xeb35,	// (0x0004638c) cell_toolbar_trans_pane_ParamLimits

0xeb35,	// (0x0004638c) cell_toolbar_trans_pane

0xe2a2,	// (0x00045af9) cell_toolbar_trans_pane_g1

0x9e91,	// (0x000416e8) list_form2_midp_pane_t1

0x9e9f,	// (0x000416f6) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x00047341) list_form2_midp_pane_t

0xdff5,	// (0x0004584c) scroll_pane_cp51_ParamLimits

0xe16c,	// (0x000459c3) form2_midp_wait_pane_g1

0xe175,	// (0x000459cc) form2_midp_wait_pane_g2

0xe17e,	// (0x000459d5) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x00047356) form2_midp_wait_pane_g

0x8b94,	// (0x000403eb) list_highlight_pane_cp21_ParamLimits

0xe1a6,	// (0x000459fd) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe1b5,	// (0x00045a0c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd69d,	// (0x00044ef4) list_single_2graphic_im_pane_ParamLimits

0xd69d,	// (0x00044ef4) list_single_2graphic_im_pane

0xa240,	// (0x00041a97) list_single_2graphic_im_pane_g1_ParamLimits

0xa240,	// (0x00041a97) list_single_2graphic_im_pane_g1

0xa251,	// (0x00041aa8) list_single_2graphic_im_pane_g2_ParamLimits

0xa251,	// (0x00041aa8) list_single_2graphic_im_pane_g2

0xa25d,	// (0x00041ab4) list_single_2graphic_im_pane_g3_ParamLimits

0xa25d,	// (0x00041ab4) list_single_2graphic_im_pane_g3

0x0003,

0xfc54,	// (0x000474ab) list_single_2graphic_im_pane_g_ParamLimits

0xfc54,	// (0x000474ab) list_single_2graphic_im_pane_g

0xa271,	// (0x00041ac8) list_single_2graphic_im_pane_t1_ParamLimits

0xa271,	// (0x00041ac8) list_single_2graphic_im_pane_t1

0xe768,	// (0x00045fbf) list_single_graphic_2heading_pane_fp_ParamLimits

0xe768,	// (0x00045fbf) list_single_graphic_2heading_pane_fp

0x0e2c,	// (0x00038683) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0e2c,	// (0x00038683) list_single_graphic_2heading_pane_fp_g1

0xe77d,	// (0x00045fd4) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xe77d,	// (0x00045fd4) list_single_graphic_2heading_pane_fp_g2

0xb09a,	// (0x000428f1) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xb09a,	// (0x000428f1) list_single_graphic_2heading_pane_fp_g3

0xb0a6,	// (0x000428fd) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xb0a6,	// (0x000428fd) list_single_graphic_2heading_pane_fp_g4

0xe789,	// (0x00045fe0) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xe789,	// (0x00045fe0) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb82,	// (0x000473d9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb82,	// (0x000473d9) list_single_graphic_2heading_pane_fp_g

0x0f75,	// (0x000387cc) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0f75,	// (0x000387cc) list_single_graphic_2heading_pane_fp_t1

0x0e64,	// (0x000386bb) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0e64,	// (0x000386bb) list_single_graphic_2heading_pane_fp_t2

0x0f8b,	// (0x000387e2) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0f8b,	// (0x000387e2) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5d,	// (0x000474b4) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5d,	// (0x000474b4) list_single_graphic_2heading_pane_fp_t

0xe32e,	// (0x00045b85) fep_hwr_write_pane_g5_ParamLimits

0xe32e,	// (0x00045b85) fep_hwr_write_pane_g5

0xe33a,	// (0x00045b91) fep_hwr_write_pane_g6_ParamLimits

0xe33a,	// (0x00045b91) fep_hwr_write_pane_g6

0xe9c8,	// (0x0004621f) eswt_shell_pane_ParamLimits

0xc4fe,	// (0x00043d55) bg_popup_window_pane_cp18_ParamLimits

0xd5c8,	// (0x00044e1f) heading_pane_cp70

0xeac4,	// (0x0004631b) popup_eswt_tasktip_window_t1_ParamLimits

0x9157,	// (0x000409ae) aid_touch_tab_arrow_left

0x916d,	// (0x000409c4) aid_touch_tab_arrow_right

0x7877,	// (0x0003f0ce) title_pane_g3_ParamLimits

0x7877,	// (0x0003f0ce) title_pane_g3

0xb03f,	// (0x00042896) set_value_pane_g1

0x908f,	// (0x000408e6) popup_toolbar_trans_pane_ParamLimits

0xeb0f,	// (0x00046366) aid_size_cell_tb_trans_pane_ParamLimits

0xb080,	// (0x000428d7) bg_tb_trans_pane_ParamLimits

0xeb21,	// (0x00046378) grid_tb_trans_pane_ParamLimits

0x8cc7,	// (0x0004051e) cont_note_pane_ParamLimits

0x8cc7,	// (0x0004051e) cont_note_pane

0x9786,	// (0x00040fdd) cont_snote2_single_text_pane_ParamLimits

0x9786,	// (0x00040fdd) cont_snote2_single_text_pane

0x9786,	// (0x00040fdd) cont_snote2_single_graphic_pane_ParamLimits

0x9786,	// (0x00040fdd) cont_snote2_single_graphic_pane

0xc9f0,	// (0x00044247) cont_note_wait_pane_ParamLimits

0xc9f0,	// (0x00044247) cont_note_wait_pane

0xc9f0,	// (0x00044247) cont_note_image_pane_ParamLimits

0xc9f0,	// (0x00044247) cont_note_image_pane

0xeb67,	// (0x000463be) popup_note2_window_g1_ParamLimits

0xeb67,	// (0x000463be) popup_note2_window_g1

0xeb98,	// (0x000463ef) popup_note2_window_t1_ParamLimits

0xeb98,	// (0x000463ef) popup_note2_window_t1

0xebdd,	// (0x00046434) popup_note2_window_t2_ParamLimits

0xebdd,	// (0x00046434) popup_note2_window_t2

0xec22,	// (0x00046479) popup_note2_window_t3_ParamLimits

0xec22,	// (0x00046479) popup_note2_window_t3

0xec67,	// (0x000464be) popup_note2_window_t4_ParamLimits

0xec67,	// (0x000464be) popup_note2_window_t4

0x8d4b,	// (0x000405a2) popup_note2_window_t5_ParamLimits

0x8d4b,	// (0x000405a2) popup_note2_window_t5

0x0004,

0xfc69,	// (0x000474c0) popup_note2_window_t_ParamLimits

0xfc69,	// (0x000474c0) popup_note2_window_t

0xec96,	// (0x000464ed) popup_note2_image_window_g1_ParamLimits

0xec96,	// (0x000464ed) popup_note2_image_window_g1

0xeca2,	// (0x000464f9) popup_note2_image_window_g2_ParamLimits

0xeca2,	// (0x000464f9) popup_note2_image_window_g2

0x0001,

0xfc74,	// (0x000474cb) popup_note2_image_window_g_ParamLimits

0xfc74,	// (0x000474cb) popup_note2_image_window_g

0xecb4,	// (0x0004650b) popup_note2_image_window_t1_ParamLimits

0xecb4,	// (0x0004650b) popup_note2_image_window_t1

0xeccc,	// (0x00046523) popup_note2_image_window_t2_ParamLimits

0xeccc,	// (0x00046523) popup_note2_image_window_t2

0xece4,	// (0x0004653b) popup_note2_image_window_t3_ParamLimits

0xece4,	// (0x0004653b) popup_note2_image_window_t3

0x0002,

0xfc79,	// (0x000474d0) popup_note2_image_window_t_ParamLimits

0xfc79,	// (0x000474d0) popup_note2_image_window_t

0xc9fe,	// (0x00044255) popup_note2_wait_window_g1_ParamLimits

0xc9fe,	// (0x00044255) popup_note2_wait_window_g1

0xed00,	// (0x00046557) popup_note2_wait_window_g2_ParamLimits

0xed00,	// (0x00046557) popup_note2_wait_window_g2

0xca16,	// (0x0004426d) popup_note2_wait_window_g3_ParamLimits

0xca16,	// (0x0004426d) popup_note2_wait_window_g3

0x0002,

0xfc80,	// (0x000474d7) popup_note2_wait_window_g_ParamLimits

0xfc80,	// (0x000474d7) popup_note2_wait_window_g

0xed0c,	// (0x00046563) popup_note2_wait_window_t1_ParamLimits

0xed0c,	// (0x00046563) popup_note2_wait_window_t1

0xed2a,	// (0x00046581) popup_note2_wait_window_t2_ParamLimits

0xed2a,	// (0x00046581) popup_note2_wait_window_t2

0xed48,	// (0x0004659f) popup_note2_wait_window_t3_ParamLimits

0xed48,	// (0x0004659f) popup_note2_wait_window_t3

0xed5a,	// (0x000465b1) popup_note2_wait_window_t4_ParamLimits

0xed5a,	// (0x000465b1) popup_note2_wait_window_t4

0x0003,

0xfc87,	// (0x000474de) popup_note2_wait_window_t_ParamLimits

0xfc87,	// (0x000474de) popup_note2_wait_window_t

0xed6c,	// (0x000465c3) wait_bar2_pane_ParamLimits

0xed6c,	// (0x000465c3) wait_bar2_pane

0xed84,	// (0x000465db) popup_snote2_single_text_window_g1_ParamLimits

0xed84,	// (0x000465db) popup_snote2_single_text_window_g1

0xedac,	// (0x00046603) popup_snote2_single_text_window_t1_ParamLimits

0xedac,	// (0x00046603) popup_snote2_single_text_window_t1

0xedf8,	// (0x0004664f) popup_snote2_single_text_window_t2_ParamLimits

0xedf8,	// (0x0004664f) popup_snote2_single_text_window_t2

0xee44,	// (0x0004669b) popup_snote2_single_text_window_t3_ParamLimits

0xee44,	// (0x0004669b) popup_snote2_single_text_window_t3

0xee85,	// (0x000466dc) popup_snote2_single_text_window_t4_ParamLimits

0xee85,	// (0x000466dc) popup_snote2_single_text_window_t4

0xeebb,	// (0x00046712) popup_snote2_single_text_window_t5_ParamLimits

0xeebb,	// (0x00046712) popup_snote2_single_text_window_t5

0x0004,

0xfc90,	// (0x000474e7) popup_snote2_single_text_window_t_ParamLimits

0xfc90,	// (0x000474e7) popup_snote2_single_text_window_t

0xeee6,	// (0x0004673d) popup_snote2_single_graphic_window_g1_ParamLimits

0xeee6,	// (0x0004673d) popup_snote2_single_graphic_window_g1

0xef0e,	// (0x00046765) popup_snote2_single_graphic_window_g2_ParamLimits

0xef0e,	// (0x00046765) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9b,	// (0x000474f2) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9b,	// (0x000474f2) popup_snote2_single_graphic_window_g

0xef36,	// (0x0004678d) popup_snote2_single_graphic_window_t1_ParamLimits

0xef36,	// (0x0004678d) popup_snote2_single_graphic_window_t1

0xef82,	// (0x000467d9) popup_snote2_single_graphic_window_t2_ParamLimits

0xef82,	// (0x000467d9) popup_snote2_single_graphic_window_t2

0xee44,	// (0x0004669b) popup_snote2_single_graphic_window_t3_ParamLimits

0xee44,	// (0x0004669b) popup_snote2_single_graphic_window_t3

0xee85,	// (0x000466dc) popup_snote2_single_graphic_window_t4_ParamLimits

0xee85,	// (0x000466dc) popup_snote2_single_graphic_window_t4

0xeebb,	// (0x00046712) popup_snote2_single_graphic_window_t5_ParamLimits

0xeebb,	// (0x00046712) popup_snote2_single_graphic_window_t5

0x0004,

0xfca0,	// (0x000474f7) popup_snote2_single_graphic_window_t_ParamLimits

0xfca0,	// (0x000474f7) popup_snote2_single_graphic_window_t

0xdf8d,	// (0x000457e4) clock_nsta_pane_cp2_t1

0xdf8d,	// (0x000457e4) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x00047317) clock_nsta_pane_cp2_t

0x085c,	// (0x000380b3) form_field_data_wide_pane_g1_ParamLimits

0xb09a,	// (0x000428f1) form_field_data_wide_pane_g2_ParamLimits

0xb09a,	// (0x000428f1) form_field_data_wide_pane_g2

0xb0a6,	// (0x000428fd) form_field_data_wide_pane_g3_ParamLimits

0xb0a6,	// (0x000428fd) form_field_data_wide_pane_g3

0x0002,

0xf698,	// (0x00046eef) form_field_data_wide_pane_g_ParamLimits

0xf698,	// (0x00046eef) form_field_data_wide_pane_g

0x9dca,	// (0x00041621) grid_touch_3_pane_ParamLimits

0x9dca,	// (0x00041621) grid_touch_3_pane

0xa2a2,	// (0x00041af9) cell_touch_3_pane_ParamLimits

0xa2a2,	// (0x00041af9) cell_touch_3_pane

0xe2a2,	// (0x00045af9) cell_touch_3_pane_g1

0xe2a2,	// (0x00045af9) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x0004739c) cell_touch_3_pane_g

0x8d7d,	// (0x000405d4) cont_query_data_pane

0x8d85,	// (0x000405dc) cont_query_data_pane_cp1

0xefce,	// (0x00046825) button_value_adjust_pane_cp7

0xefd6,	// (0x0004682d) query_popup_pane_cp3

0xb902,	// (0x00043159) bg_popup_sub_pane_cp22_ParamLimits

0x1c97,	// (0x000394ee) navi_navi_volume_pane_cp2

0x1cb2,	// (0x00039509) popup_side_volume_key_window_g2

0x1cc1,	// (0x00039518) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x00046f85) popup_side_volume_key_window_g

0x1cde,	// (0x00039535) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x00046f8c) popup_side_volume_key_window_t

0xbc49,	// (0x000434a0) popup_side_volume_key_window_ParamLimits

0x7065,	// (0x0003e8bc) list_double_graphic_pane_g4_ParamLimits

0x7065,	// (0x0003e8bc) list_double_graphic_pane_g4

0x9c38,	// (0x0004148f) list_single_2heading_msg_pane_ParamLimits

0x9c38,	// (0x0004148f) list_single_2heading_msg_pane

0x8665,	// (0x0003febc) list_single_2heading_msg_pane_g1_ParamLimits

0x8665,	// (0x0003febc) list_single_2heading_msg_pane_g1

0x8671,	// (0x0003fec8) list_single_2heading_msg_pane_g2_ParamLimits

0x8671,	// (0x0003fec8) list_single_2heading_msg_pane_g2

0x8684,	// (0x0003fedb) list_single_2heading_msg_pane_g3_ParamLimits

0x8684,	// (0x0003fedb) list_single_2heading_msg_pane_g3

0x8690,	// (0x0003fee7) list_single_2heading_msg_pane_g4_ParamLimits

0x8690,	// (0x0003fee7) list_single_2heading_msg_pane_g4

0x0003,

0xfcab,	// (0x00047502) list_single_2heading_msg_pane_g_ParamLimits

0xfcab,	// (0x00047502) list_single_2heading_msg_pane_g

0x758e,	// (0x0003ede5) list_single_2heading_msg_pane_t1_ParamLimits

0x758e,	// (0x0003ede5) list_single_2heading_msg_pane_t1

0x75b6,	// (0x0003ee0d) list_single_2heading_msg_pane_t2_ParamLimits

0x75b6,	// (0x0003ee0d) list_single_2heading_msg_pane_t2

0x7621,	// (0x0003ee78) list_single_2heading_msg_pane_t3_ParamLimits

0x7621,	// (0x0003ee78) list_single_2heading_msg_pane_t3

0x1040,	// (0x00038897) list_single_2heading_msg_pane_t4_ParamLimits

0x1040,	// (0x00038897) list_single_2heading_msg_pane_t4

0x0003,

0xfcb4,	// (0x0004750b) list_single_2heading_msg_pane_t_ParamLimits

0xfcb4,	// (0x0004750b) list_single_2heading_msg_pane_t

0x8b42,	// (0x00040399) title_pane_g4_ParamLimits

0x8b42,	// (0x00040399) title_pane_g4

0x1988,	// (0x000391df) title_pane_stacon_g3_ParamLimits

0x1988,	// (0x000391df) title_pane_stacon_g3

0xeb5b,	// (0x000463b2) list_single_2graphic_im_pane_g4_ParamLimits

0xeb5b,	// (0x000463b2) list_single_2graphic_im_pane_g4

0xd3ab,	// (0x00044c02) popup_side_volume_key_window_cp

0xd8ce,	// (0x00045125) main_idle_act2_pane_t1

0x21ba,	// (0x00039a11) toolbar_button_pane_g10

0x7be4,	// (0x0003f43b) popup_toolbar_window_cp1

0xdf7e,	// (0x000457d5) clock_nsta_pane_cp_t1

0xdf7e,	// (0x000457d5) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x00047312) clock_nsta_pane_cp_t

0x1c97,	// (0x000394ee) navi_navi_volume_pane_cp2_ParamLimits

0x1ca6,	// (0x000394fd) popup_side_volume_key_window_g1_ParamLimits

0x1cb2,	// (0x00039509) popup_side_volume_key_window_g2_ParamLimits

0x1cc1,	// (0x00039518) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x00046f85) popup_side_volume_key_window_g_ParamLimits

0x271e,	// (0x00039f75) fep_hwr_aid_pane

0x95ee,	// (0x00040e45) bg_fep_hwr_top_pane_g4_ParamLimits

0xe2fe,	// (0x00045b55) fep_hwr_top_pane_g1_ParamLimits

0xe310,	// (0x00045b67) fep_hwr_top_pane_g2_ParamLimits

0x27d7,	// (0x0003a02e) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x00047367) fep_hwr_top_pane_g_ParamLimits

0x27ec,	// (0x0003a043) fep_hwr_top_text_pane_ParamLimits

0xd16e,	// (0x000449c5) aid_touch_tab_arrow_arrow_2

0xd177,	// (0x000449ce) aid_touch_tab_arrow_left_2

0x2732,	// (0x00039f89) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2769,	// (0x00039fc0) fep_hwr_prediction_pane

0xe3fd,	// (0x00045c54) fep_vkb_prediction_pane

0xa088,	// (0x000418df) fep_vkb_side_pane_g3_ParamLimits

0xa088,	// (0x000418df) fep_vkb_side_pane_g3

0xe435,	// (0x00045c8c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xe7dd,	// (0x00046034) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xe7ea,	// (0x00046041) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbba,	// (0x00047411) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xefe7,	// (0x0004683e) fep_hwr_prediction_pane_g1

0x2b2d,	// (0x0003a384) fep_hwr_prediction_pane_g2

0x2b35,	// (0x0003a38c) fep_hwr_prediction_pane_g3

0x2b3d,	// (0x0003a394) fep_hwr_prediction_pane_g4

0x0003,

0xfcbd,	// (0x00047514) fep_hwr_prediction_pane_g

0xefe7,	// (0x0004683e) fep_vkb_prediction_pane_g1

0xeff1,	// (0x00046848) fep_vkb_prediction_pane_g2

0xeff9,	// (0x00046850) fep_vkb_prediction_pane_g3

0xf001,	// (0x00046858) fep_vkb_prediction_pane_g4

0x0003,

0xfcc6,	// (0x0004751d) fep_vkb_prediction_pane_g

0x2496,	// (0x00039ced) slider_set_pane_g3

0x24aa,	// (0x00039d01) slider_set_pane_g4

0x24c2,	// (0x00039d19) slider_set_pane_g5

0x2496,	// (0x00039ced) slider_set_pane_g6

0x24d8,	// (0x00039d2f) slider_set_pane_g7

0xd653,	// (0x00044eaa) slider_form_pane_g3

0xd65c,	// (0x00044eb3) slider_form_pane_g4

0xd664,	// (0x00044ebb) slider_form_pane_g5

0xd653,	// (0x00044eaa) slider_form_pane_g6

0x9c1c,	// (0x00041473) slider_form_pane_g7

0xdb20,	// (0x00045377) slider_set_pane_vc_g3

0xdb29,	// (0x00045380) slider_set_pane_vc_g4

0xdb32,	// (0x00045389) slider_set_pane_vc_g5

0xdb20,	// (0x00045377) slider_set_pane_vc_g6

0xdb3b,	// (0x00045392) slider_set_pane_vc_g7

0xdb20,	// (0x00045377) slider_form_pane_vc_g1

0xdb29,	// (0x00045380) slider_form_pane_vc_g2

0xdb32,	// (0x00045389) slider_form_pane_vc_g3

0xdb20,	// (0x00045377) slider_form_pane_vc_g4

0xdcf4,	// (0x0004554b) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x000472eb) slider_form_pane_vc_g

0x8b24,	// (0x0004037b) main_idle_act3_pane

0xf009,	// (0x00046860) ai3_links_pane

0xa2ec,	// (0x00041b43) popup_ai3_data_window_ParamLimits

0xa2ec,	// (0x00041b43) popup_ai3_data_window

0x8b24,	// (0x0004037b) grid_ai3_links_pane

0xa306,	// (0x00041b5d) cell_ai3_links_pane_ParamLimits

0xa306,	// (0x00041b5d) cell_ai3_links_pane

0xf012,	// (0x00046869) bg_popup_sub_pane_cp11

0xf01f,	// (0x00046876) cell_ai3_links_pane_g1

0x8b24,	// (0x0004037b) bg_popup_sub_pane_cp12

0xf044,	// (0x0004689b) heading_ai3_data_pane

0xf04c,	// (0x000468a3) list_ai3_gene_pane

0xf058,	// (0x000468af) popup_ai3_data_window_g1

0xf060,	// (0x000468b7) heading_ai3_data_pane_g1

0xf068,	// (0x000468bf) heading_ai3_data_pane_t1

0xf076,	// (0x000468cd) list_double_ai3_gene_pane_ParamLimits

0xf076,	// (0x000468cd) list_double_ai3_gene_pane

0xf083,	// (0x000468da) list_single_ai3_gene_pane_ParamLimits

0xf083,	// (0x000468da) list_single_ai3_gene_pane

0xe267,	// (0x00045abe) list_highlight_pane_cp7_ParamLimits

0xe267,	// (0x00045abe) list_highlight_pane_cp7

0xf090,	// (0x000468e7) list_single_a13_gene_pane_t1_ParamLimits

0xf090,	// (0x000468e7) list_single_a13_gene_pane_t1

0xf0a7,	// (0x000468fe) list_single_ai3_gene_pane_g1

0xf0b0,	// (0x00046907) list_single_ai3_gene_pane_g2

0x0001,

0xfccf,	// (0x00047526) list_single_ai3_gene_pane_g

0xf0b8,	// (0x0004690f) list_double_ai3_gene_pane_g1_ParamLimits

0xf0b8,	// (0x0004690f) list_double_ai3_gene_pane_g1

0xf0c4,	// (0x0004691b) list_double_ai3_gene_pane_t1_ParamLimits

0xf0c4,	// (0x0004691b) list_double_ai3_gene_pane_t1

0xf0e0,	// (0x00046937) list_double_ai3_gene_pane_t2_ParamLimits

0xf0e0,	// (0x00046937) list_double_ai3_gene_pane_t2

0xf0f6,	// (0x0004694d) list_double_ai3_gene_pane_t3_ParamLimits

0xf0f6,	// (0x0004694d) list_double_ai3_gene_pane_t3

0x0002,

0xfcd4,	// (0x0004752b) list_double_ai3_gene_pane_t_ParamLimits

0xfcd4,	// (0x0004752b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0fa1,	// (0x000387f8) aid_size_min_col_2

0xa2d6,	// (0x00041b2d) aid_size_min_msg_ParamLimits

0xa2d6,	// (0x00041b2d) aid_size_min_msg

0xa09c,	// (0x000418f3) fep_vkb_top_text_pane_g2_ParamLimits

0xa09c,	// (0x000418f3) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x00047397) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x00047397) fep_vkb_top_text_pane_g

0x8b24,	// (0x0004037b) main_hc_apps_shell_pane

0xf113,	// (0x0004696a) grid_hc_apps_pane_ParamLimits

0xf113,	// (0x0004696a) grid_hc_apps_pane

0xf122,	// (0x00046979) list_hc_apps_pane

0xf12a,	// (0x00046981) scroll_pane_cp37_ParamLimits

0xf12a,	// (0x00046981) scroll_pane_cp37

0xa320,	// (0x00041b77) cell_hc_apps_pane_ParamLimits

0xa320,	// (0x00041b77) cell_hc_apps_pane

0xa3de,	// (0x00041c35) cell_hc_apps_pane_g1_ParamLimits

0xa3de,	// (0x00041c35) cell_hc_apps_pane_g1

0xf136,	// (0x0004698d) cell_hc_apps_pane_g2_ParamLimits

0xf136,	// (0x0004698d) cell_hc_apps_pane_g2

0xf152,	// (0x000469a9) cell_hc_apps_pane_g3_ParamLimits

0xf152,	// (0x000469a9) cell_hc_apps_pane_g3

0x0002,

0xfcdb,	// (0x00047532) cell_hc_apps_pane_g_ParamLimits

0xfcdb,	// (0x00047532) cell_hc_apps_pane_g

0xa40b,	// (0x00041c62) cell_hc_apps_pane_t1_ParamLimits

0xa40b,	// (0x00041c62) cell_hc_apps_pane_t1

0x8cc7,	// (0x0004051e) grid_highlight_pane_cp10_ParamLimits

0x8cc7,	// (0x0004051e) grid_highlight_pane_cp10

0xa449,	// (0x00041ca0) list_single_hc_apps_pane_ParamLimits

0xa449,	// (0x00041ca0) list_single_hc_apps_pane

0xa476,	// (0x00041ccd) list_single_hc_apps_pane_g1

0x86a8,	// (0x0003feff) list_single_hc_apps_pane_g2

0x0001,

0xfce2,	// (0x00047539) list_single_hc_apps_pane_g

0x86c1,	// (0x0003ff18) list_single_hc_apps_pane_g2_copy1

0x1065,	// (0x000388bc) list_single_hc_apps_pane_t1

0x8b94,	// (0x000403eb) bg_set_opt_pane_cp_ParamLimits

0x1562,	// (0x00038db9) setting_slider_pane_t1_ParamLimits

0x157b,	// (0x00038dd2) setting_slider_pane_t2_ParamLimits

0x1595,	// (0x00038dec) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x00046dcd) setting_slider_pane_t_ParamLimits

0x15ad,	// (0x00038e04) slider_set_pane_ParamLimits

0x2072,	// (0x000398c9) control_pane_g5_ParamLimits

0x2072,	// (0x000398c9) control_pane_g5

0xd60f,	// (0x00044e66) slider_set_pane_g1_ParamLimits

0x248a,	// (0x00039ce1) slider_set_pane_g2_ParamLimits

0x2496,	// (0x00039ced) slider_set_pane_g3_ParamLimits

0x24aa,	// (0x00039d01) slider_set_pane_g4_ParamLimits

0x24c2,	// (0x00039d19) slider_set_pane_g5_ParamLimits

0x2496,	// (0x00039ced) slider_set_pane_g6_ParamLimits

0x24d8,	// (0x00039d2f) slider_set_pane_g7_ParamLimits

0xf96e,	// (0x000471c5) slider_set_pane_g_ParamLimits

0xbd2a,	// (0x00043581) navi_icon_text_pane_ParamLimits

0x9120,	// (0x00040977) aid_fill_nsta_2_ParamLimits

0x9157,	// (0x000409ae) aid_touch_tab_arrow_left_ParamLimits

0x916d,	// (0x000409c4) aid_touch_tab_arrow_right_ParamLimits

0x9208,	// (0x00040a5f) clock_nsta_pane_ParamLimits

0xd150,	// (0x000449a7) navi_icon_pane_g1_ParamLimits

0xd15c,	// (0x000449b3) navi_text_pane_t1_ParamLimits

0xdfcf,	// (0x00045826) navi_icon_text_pane_g1_ParamLimits

0xdfdb,	// (0x00045832) navi_icon_text_pane_t1_ParamLimits

0xa476,	// (0x00041ccd) list_single_hc_apps_pane_g1_ParamLimits

0x86a8,	// (0x0003feff) list_single_hc_apps_pane_g2_ParamLimits

0xfce2,	// (0x00047539) list_single_hc_apps_pane_g_ParamLimits

0x86c1,	// (0x0003ff18) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x1065,	// (0x000388bc) list_single_hc_apps_pane_t1_ParamLimits

0x77e1,	// (0x0003f038) popup_toolbar2_fixed_window_ParamLimits

0x77e1,	// (0x0003f038) popup_toolbar2_fixed_window

0x9085,	// (0x000408dc) popup_toolbar2_float_window

0x8b24,	// (0x0004037b) bg_popup_sub_pane_cp27

0xf174,	// (0x000469cb) grid_toolbar2_float_pane

0x8b24,	// (0x0004037b) bg_popup_sub_pane_cp26

0xf174,	// (0x000469cb) grid_toolbar2_fixed_pane

0xa48f,	// (0x00041ce6) cell_toolbar2_fixed_pane_ParamLimits

0xa48f,	// (0x00041ce6) cell_toolbar2_fixed_pane

0xa4aa,	// (0x00041d01) cell_toolbar2_fixed_pane_g1

0xf17c,	// (0x000469d3) toolbar2_fixed_button_pane

0xc3fa,	// (0x00043c51) toolbar2_fixed_button_pane_g1

0xc402,	// (0x00043c59) toolbar2_fixed_button_pane_g2

0xc40a,	// (0x00043c61) toolbar2_fixed_button_pane_g3

0xc412,	// (0x00043c69) toolbar2_fixed_button_pane_g4

0xc41a,	// (0x00043c71) toolbar2_fixed_button_pane_g5

0xc422,	// (0x00043c79) toolbar2_fixed_button_pane_g6

0xc42a,	// (0x00043c81) toolbar2_fixed_button_pane_g7

0xc432,	// (0x00043c89) toolbar2_fixed_button_pane_g8

0xc43a,	// (0x00043c91) toolbar2_fixed_button_pane_g9

0x0008,

0xf870,	// (0x000470c7) toolbar2_fixed_button_pane_g

0xf184,	// (0x000469db) cell_toolbar2_float_pane_ParamLimits

0xf184,	// (0x000469db) cell_toolbar2_float_pane

0xf195,	// (0x000469ec) cell_toolbar2_float_pane_g1

0xf17c,	// (0x000469d3) toolbar2_fixed_button_pane_cp

0x9f76,	// (0x000417cd) fep_vkb_accented_list_pane_ParamLimits

0x9f76,	// (0x000417cd) fep_vkb_accented_list_pane

0x293a,	// (0x0003a191) bg_popup_fep_shadow_pane_g9

0xbe9e,	// (0x000436f5) bg_popup_fep_shadow_pane_cp3

0xb186,	// (0x000429dd) list_accented_list_pane

0xf19e,	// (0x000469f5) list_single_accented_list_pane_ParamLimits

0xf19e,	// (0x000469f5) list_single_accented_list_pane

0xbe9e,	// (0x000436f5) list_highlight_pane_cp10

0xf1af,	// (0x00046a06) list_single_accented_list_pane_t1

0x8faf,	// (0x00040806) popup_slider_window_ParamLimits

0x8faf,	// (0x00040806) popup_slider_window

0xefde,	// (0x00046835) aid_indentation_list_msg

0xa5a3,	// (0x00041dfa) bg_popup_window_pane_cp19

0xf21b,	// (0x00046a72) popup_slider_window_g1

0xf237,	// (0x00046a8e) popup_slider_window_g2

0xf253,	// (0x00046aaa) popup_slider_window_g3

0x0005,

0xfce7,	// (0x0004753e) popup_slider_window_g

0xf26f,	// (0x00046ac6) popup_slider_window_t1

0xf2b5,	// (0x00046b0c) small_volume_slider_vertical_pane

0xe2a2,	// (0x00045af9) small_volume_slider_vertical_pane_g1

0xe2a2,	// (0x00045af9) small_volume_slider_vertical_pane_g2

0xf2d1,	// (0x00046b28) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf9,	// (0x00047550) small_volume_slider_vertical_pane_g

0x774f,	// (0x0003efa6) area_side_right_pane_ParamLimits

0x774f,	// (0x0003efa6) area_side_right_pane

0x86dd,	// (0x0003ff34) aid_size_side_button_ParamLimits

0x86dd,	// (0x0003ff34) aid_size_side_button

0x86f6,	// (0x0003ff4d) grid_sctrl_middle_pane_ParamLimits

0x86f6,	// (0x0003ff4d) grid_sctrl_middle_pane

0x2bae,	// (0x0003a405) sctrl_sk_bottom_pane

0x2bbf,	// (0x0003a416) sctrl_sk_top_pane

0x2bd1,	// (0x0003a428) aid_touch_sctrl_top

0x8cc7,	// (0x0004051e) bg_sctrl_sk_pane_ParamLimits

0x8cc7,	// (0x0004051e) bg_sctrl_sk_pane

0x2bde,	// (0x0003a435) sctrl_sk_top_pane_g1

0x2beb,	// (0x0003a442) sctrl_sk_top_pane_t1

0x2bd1,	// (0x0003a428) aid_touch_sctrl_bottom

0x8cc7,	// (0x0004051e) bg_sctrl_sk_pane_cp_ParamLimits

0x8cc7,	// (0x0004051e) bg_sctrl_sk_pane_cp

0x2c06,	// (0x0003a45d) sctrl_sk_bottom_pane_g1

0x2beb,	// (0x0003a442) sctrl_sk_bottom_pane_t1

0x8710,	// (0x0003ff67) cell_sctrl_middle_pane_ParamLimits

0x8710,	// (0x0003ff67) cell_sctrl_middle_pane

0x8721,	// (0x0003ff78) aid_touch_sctrl_middle_ParamLimits

0x8721,	// (0x0003ff78) aid_touch_sctrl_middle

0x872e,	// (0x0003ff85) bg_sctrl_middle_pane_ParamLimits

0x872e,	// (0x0003ff85) bg_sctrl_middle_pane

0xf2da,	// (0x00046b31) cell_sctrl_middle_pane_g1_ParamLimits

0xf2da,	// (0x00046b31) cell_sctrl_middle_pane_g1

0x873c,	// (0x0003ff93) cell_sctrl_middle_pane_g2_ParamLimits

0x873c,	// (0x0003ff93) cell_sctrl_middle_pane_g2

0x0001,

0xfd05,	// (0x0004755c) cell_sctrl_middle_pane_g_ParamLimits

0xfd05,	// (0x0004755c) cell_sctrl_middle_pane_g

0xc3fa,	// (0x00043c51) bg_sctrl_middle_pane_g1

0xc402,	// (0x00043c59) bg_sctrl_middle_pane_g2

0xc40a,	// (0x00043c61) bg_sctrl_middle_pane_g3

0xc412,	// (0x00043c69) bg_sctrl_middle_pane_g4

0xc41a,	// (0x00043c71) bg_sctrl_middle_pane_g5

0xc422,	// (0x00043c79) bg_sctrl_middle_pane_g6

0xc42a,	// (0x00043c81) bg_sctrl_middle_pane_g7

0xc432,	// (0x00043c89) bg_sctrl_middle_pane_g8

0x0007,

0x00f3,	// (0x0003794a) bg_sctrl_middle_pane_g

0xc43a,	// (0x00043c91) bg_sctrl_middle_pane_g8_copy1

0xc3fa,	// (0x00043c51) bg_sctrl_sk_pane_g1

0xc402,	// (0x00043c59) bg_sctrl_sk_pane_g2

0xc40a,	// (0x00043c61) bg_sctrl_sk_pane_g3

0x0008,

0xf870,	// (0x000470c7) bg_sctrl_sk_pane_g

0x9944,	// (0x0004119b) aid_size_touch_scroll_bar

0xc412,	// (0x00043c69) bg_sctrl_sk_pane_g4

0xc41a,	// (0x00043c71) bg_sctrl_sk_pane_g5

0xc422,	// (0x00043c79) bg_sctrl_sk_pane_g6

0xc42a,	// (0x00043c81) bg_sctrl_sk_pane_g7

0xc432,	// (0x00043c89) bg_sctrl_sk_pane_g8

0xc43a,	// (0x00043c91) bg_sctrl_sk_pane_g9

0xc130,	// (0x00043987) popup_fep_china_hwr2_fs_candidate_window

0x818c,	// (0x0003f9e3) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x818c,	// (0x0003f9e3) popup_fep_china_hwr2_fs_control_window

0xe435,	// (0x00045c8c) sctrl_sk_top_pane_g2

0x0001,

0xfd00,	// (0x00047557) sctrl_sk_top_pane_g

0xa65b,	// (0x00041eb2) aid_fep_china_hwr2_fs_cell_ParamLimits

0xa65b,	// (0x00041eb2) aid_fep_china_hwr2_fs_cell

0xa66f,	// (0x00041ec6) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xa66f,	// (0x00041ec6) bg_popup_fep_shadow_pane_cp4

0xa686,	// (0x00041edd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xa686,	// (0x00041edd) bg_popup_fep_shadow_pane_cp5

0xa698,	// (0x00041eef) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xa698,	// (0x00041eef) popup_fep_china_hwr2_fs_control_bar_grid

0xa6ac,	// (0x00041f03) popup_fep_china_hwr2_fs_control_funtion_grid

0xf2e8,	// (0x00046b3f) aid_fep_china_hwr2_fs_candi_cell

0x8b24,	// (0x0004037b) bg_popup_fep_shadow_pane_cp6

0xf2f2,	// (0x00046b49) popup_fep_china_hwr2_fs_candidate_grid

0xa6b4,	// (0x00041f0b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xa6b4,	// (0x00041f0b) cell_fep_china_hwr2_fs_funtion_grid

0xe2a2,	// (0x00045af9) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xf2da,	// (0x00046b31) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xf2da,	// (0x00046b31) cell_fep_china_hwr2_fs_funtion_grid_g1

0xf2fc,	// (0x00046b53) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xf2fc,	// (0x00046b53) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0a,	// (0x00047561) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0a,	// (0x00047561) cell_fep_china_hwr2_fs_funtion_grid_g

0xa6cc,	// (0x00041f23) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xa6cc,	// (0x00041f23) cell_fep_china_hwr2_fs_funtion_grid_t1

0xa6e1,	// (0x00041f38) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xa6e1,	// (0x00041f38) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0f,	// (0x00047566) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0f,	// (0x00047566) cell_fep_china_hwr2_fs_funtion_grid_t

0xf312,	// (0x00046b69) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xf31a,	// (0x00046b71) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xf322,	// (0x00046b79) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd14,	// (0x0004756b) popup_fep_china_hwr2_fs_control_bar_grid_g

0xf32a,	// (0x00046b81) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xf32a,	// (0x00046b81) cell_fep_china_hwr2_fs_candidate_grid

0xf343,	// (0x00046b9a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xf34b,	// (0x00046ba2) popup_fep_china_hwr2_fs_candidate_grid_g21

0xe2a2,	// (0x00045af9) cell_fep_china_hwr2_fs_candidate_grid_g1

0xe2a2,	// (0x00045af9) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x0004739c) cell_fep_china_hwr2_fs_candidate_grid_g

0xf353,	// (0x00046baa) cell_fep_china_hwr2_fs_candidate_grid_t1

0xc247,	// (0x00043a9e) clock_nsta_pane_cp_24_ParamLimits

0xc247,	// (0x00043a9e) clock_nsta_pane_cp_24

0xc2af,	// (0x00043b06) indicator_nsta_pane_cp_24_ParamLimits

0xc2af,	// (0x00043b06) indicator_nsta_pane_cp_24

0xd05a,	// (0x000448b1) heading_pane_g1

0x0001,

0xf8d5,	// (0x0004712c) heading_pane_g

0xd75b,	// (0x00044fb2) grid_sct_catagory_button_pane

0xc9c2,	// (0x00044219) scroll_pane_cp5_ParamLimits

0xe001,	// (0x00045858) button_value_adjust_pane_cp5_ParamLimits

0xe001,	// (0x00045858) button_value_adjust_pane_cp5

0xe0bf,	// (0x00045916) form2_midp_time_pane_ParamLimits

0xf361,	// (0x00046bb8) cell_sct_catagory_button_pane_ParamLimits

0xf361,	// (0x00046bb8) cell_sct_catagory_button_pane

0xe267,	// (0x00045abe) bg_button_pane_cp01_ParamLimits

0xe267,	// (0x00045abe) bg_button_pane_cp01

0xe2a2,	// (0x00045af9) cell_sct_catagory_button_pane_g1

0x9028,	// (0x0004087f) popup_tb_extension_window

0xa6fd,	// (0x00041f54) aid_size_cell_ext_ParamLimits

0xa6fd,	// (0x00041f54) aid_size_cell_ext

0x9786,	// (0x00040fdd) bg_tb_trans_pane_cp1_ParamLimits

0x9786,	// (0x00040fdd) bg_tb_trans_pane_cp1

0xa723,	// (0x00041f7a) grid_tb_ext_pane_ParamLimits

0xa723,	// (0x00041f7a) grid_tb_ext_pane

0xa761,	// (0x00041fb8) cell_tb_ext_pane_ParamLimits

0xa761,	// (0x00041fb8) cell_tb_ext_pane

0xa789,	// (0x00041fe0) cell_tb_ext_pane_g1_ParamLimits

0xa789,	// (0x00041fe0) cell_tb_ext_pane_g1

0xf373,	// (0x00046bca) cell_tb_ext_pane_t1

0x8cc7,	// (0x0004051e) list_highlight_pane_cp11_ParamLimits

0x8cc7,	// (0x0004051e) list_highlight_pane_cp11

0x13cf,	// (0x00038c26) popup_uni_indicator_window_ParamLimits

0x13cf,	// (0x00038c26) popup_uni_indicator_window

0xb080,	// (0x000428d7) bg_popup_sub_pane_cp14

0xf38e,	// (0x00046be5) list_uniindi_pane

0xf39a,	// (0x00046bf1) uniindi_top_pane

0x8cc7,	// (0x0004051e) bg_uniindi_top_pane

0xf3b9,	// (0x00046c10) uniindi_top_pane_g1

0xf3cf,	// (0x00046c26) uniindi_top_pane_g2

0x0003,

0xfd1b,	// (0x00047572) uniindi_top_pane_g

0xf3f9,	// (0x00046c50) uniindi_top_pane_t1

0xf423,	// (0x00046c7a) list_single_uniindi_pane_ParamLimits

0xf423,	// (0x00046c7a) list_single_uniindi_pane

0xe2a2,	// (0x00045af9) bg_uniindi_top_pane_g1

0xf436,	// (0x00046c8d) list_single_uniindi_pane_g1

0xf449,	// (0x00046ca0) list_single_uniindi_pane_t1

0x8b24,	// (0x0004037b) control_bg_pane

0xf46e,	// (0x00046cc5) bg_sctrl_sk_pane_cp1

0xf477,	// (0x00046cce) bg_sctrl_sk_pane_cp2

0xf480,	// (0x00046cd7) control_bg_pane_g1

0xf489,	// (0x00046ce0) control_bg_pane_g2

0x0001,

0xfd24,	// (0x0004757b) control_bg_pane_g

0xdec0,	// (0x00045717) cell_indicator_nsta_pane_g1_ParamLimits

0x9df9,	// (0x00041650) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x00047300) cell_indicator_nsta_pane_g_ParamLimits

0x0e02,	// (0x00038659) form2_midp_time_pane_t1_ParamLimits

0x8109,	// (0x0003f960) main_idle_act4_pane_ParamLimits

0x8109,	// (0x0003f960) main_idle_act4_pane

0x9028,	// (0x0004087f) popup_tb_extension_window_ParamLimits

0xa748,	// (0x00041f9f) tb_ext_find_pane_ParamLimits

0xa748,	// (0x00041f9f) tb_ext_find_pane

0xf492,	// (0x00046ce9) ai_gene_pane_1_cp1

0xbf32,	// (0x00043789) ai_gene_pane_2_cp1

0xf49a,	// (0x00046cf1) list_single_idle_plugin_calendar_pane

0xf4a3,	// (0x00046cfa) list_single_idle_plugin_notification_pane

0xf4ac,	// (0x00046d03) list_single_idle_plugin_player_pane

0xa7a6,	// (0x00041ffd) list_single_idle_plugin_shortcut_pane_ParamLimits

0xa7a6,	// (0x00041ffd) list_single_idle_plugin_shortcut_pane

0xa7ce,	// (0x00042025) main_idle_act4_pane_t1

0xa7e4,	// (0x0004203b) main_idle_act4_pane_t2

0x0001,

0xfd29,	// (0x00047580) main_idle_act4_pane_t

0xa7fa,	// (0x00042051) middle_sk_idle_act4_pane_ParamLimits

0xa7fa,	// (0x00042051) middle_sk_idle_act4_pane

0xa816,	// (0x0004206d) popup_clock_digital_analogue_window_cp2

0xa83e,	// (0x00042095) shortcut_wheel_idle_act4_pane_ParamLimits

0xa83e,	// (0x00042095) shortcut_wheel_idle_act4_pane

0xe2a2,	// (0x00045af9) shortcut_wheel_idle_act4_pane_g1

0xe2a2,	// (0x00045af9) shortcut_wheel_idle_act4_pane_g2

0xe2a2,	// (0x00045af9) shortcut_wheel_idle_act4_pane_g3

0xe2a2,	// (0x00045af9) shortcut_wheel_idle_act4_pane_g4

0xe2a2,	// (0x00045af9) shortcut_wheel_idle_act4_pane_g5

0xf4b5,	// (0x00046d0c) shortcut_wheel_idle_act4_pane_g6

0xf4bd,	// (0x00046d14) shortcut_wheel_idle_act4_pane_g7

0xf4c5,	// (0x00046d1c) shortcut_wheel_idle_act4_pane_g8

0xf4cd,	// (0x00046d24) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2e,	// (0x00047585) shortcut_wheel_idle_act4_pane_g

0x95ee,	// (0x00040e45) middle_sk_idle_act4_pane_g1_ParamLimits

0x95ee,	// (0x00040e45) middle_sk_idle_act4_pane_g1

0xa8bb,	// (0x00042112) middle_sk_idle_act4_pane_g2_ParamLimits

0xa8bb,	// (0x00042112) middle_sk_idle_act4_pane_g2

0x0001,

0xfd51,	// (0x000475a8) middle_sk_idle_act4_pane_g_ParamLimits

0xfd51,	// (0x000475a8) middle_sk_idle_act4_pane_g

0xa8d3,	// (0x0004212a) middle_sk_idle_act4_pane_t1_ParamLimits

0xa8d3,	// (0x0004212a) middle_sk_idle_act4_pane_t1

0xa902,	// (0x00042159) grid_ai_shortcut_pane_ParamLimits

0xa902,	// (0x00042159) grid_ai_shortcut_pane

0xa91f,	// (0x00042176) list_highlight_pane_cp16_ParamLimits

0xa91f,	// (0x00042176) list_highlight_pane_cp16

0xa92c,	// (0x00042183) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xa92c,	// (0x00042183) list_single_idle_plugin_shortcut_pane_g1

0xa938,	// (0x0004218f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xa938,	// (0x0004218f) list_single_idle_plugin_shortcut_pane_g2

0xa954,	// (0x000421ab) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xa954,	// (0x000421ab) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd56,	// (0x000475ad) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd56,	// (0x000475ad) list_single_idle_plugin_shortcut_pane_g

0xa969,	// (0x000421c0) cell_ai_shortcut_pane_ParamLimits

0xa969,	// (0x000421c0) cell_ai_shortcut_pane

0xa97f,	// (0x000421d6) cell_ai_shortcut_pane_g1_ParamLimits

0xa97f,	// (0x000421d6) cell_ai_shortcut_pane_g1

0xf492,	// (0x00046ce9) ai_gene_pane_1_cp2

0xf4d5,	// (0x00046d2c) ai_gene_pane_2_cp2

0xf4dd,	// (0x00046d34) list_highlight_pane_cp15

0xf4e6,	// (0x00046d3d) list_single_idle_plugin_calendar_pane_g1

0xf4dd,	// (0x00046d34) list_highlight_pane_cp17

0xf4ee,	// (0x00046d45) list_single_idle_plugin_calendar_pane_g1_copy1

0xf4f6,	// (0x00046d4d) list_single_idle_plugin_player_pane_g1

0xd95a,	// (0x000451b1) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5d,	// (0x000475b4) list_single_idle_plugin_player_pane_g

0xf4fe,	// (0x00046d55) list_single_idle_plugin_player_pane_t1

0xf50c,	// (0x00046d63) list_single_idle_plugin_player_pane_t2

0xf51a,	// (0x00046d71) list_single_idle_plugin_player_pane_t3

0xf528,	// (0x00046d7f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd62,	// (0x000475b9) list_single_idle_plugin_player_pane_t

0xf536,	// (0x00046d8d) wait_bar_pane_cp15

0xf53e,	// (0x00046d95) grid_ai_notification_pane

0xd95a,	// (0x000451b1) list_single_idle_plugin_notification_pane_g1

0xa9a1,	// (0x000421f8) cell_ai_notification_pane_ParamLimits

0xa9a1,	// (0x000421f8) cell_ai_notification_pane

0xf547,	// (0x00046d9e) cell_ai_notification_pane_g1

0xf54f,	// (0x00046da6) cell_ai_notification_pane_t1

0xa9ae,	// (0x00042205) tb_ext_find_button_pane

0xa9b6,	// (0x0004220d) tb_ext_find_pane_g1

0xa9be,	// (0x00042215) tb_ext_find_pane_t1

0xb8a1,	// (0x000430f8) tb_ext_find_button_pane_g1

0xf55d,	// (0x00046db4) tb_ext_find_button_pane_g2

0x0001,

0xfd6b,	// (0x000475c2) tb_ext_find_button_pane_g

0xa7ce,	// (0x00042025) main_idle_act4_pane_t1_ParamLimits

0xa7e4,	// (0x0004203b) main_idle_act4_pane_t2_ParamLimits

0xfd29,	// (0x00047580) main_idle_act4_pane_t_ParamLimits

0xa816,	// (0x0004206d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xa82e,	// (0x00042085) sat_plugin_idle_act4_pane_ParamLimits

0xa82e,	// (0x00042085) sat_plugin_idle_act4_pane

0xa9cc,	// (0x00042223) sat_plugin_idle_act4_pane_t1_ParamLimits

0xa9cc,	// (0x00042223) sat_plugin_idle_act4_pane_t1

0xa9e4,	// (0x0004223b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xa9e4,	// (0x0004223b) sat_plugin_idle_act4_pane_t2

0xa9fc,	// (0x00042253) sat_plugin_idle_act4_pane_t3_ParamLimits

0xa9fc,	// (0x00042253) sat_plugin_idle_act4_pane_t3

0xaa14,	// (0x0004226b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xaa14,	// (0x0004226b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd70,	// (0x000475c7) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd70,	// (0x000475c7) sat_plugin_idle_act4_pane_t

0x130a,	// (0x00038b61) popup_battery_window_ParamLimits

0x130a,	// (0x00038b61) popup_battery_window

0x8cc7,	// (0x0004051e) bg_popup_sub_pane_cp25_ParamLimits

0x8cc7,	// (0x0004051e) bg_popup_sub_pane_cp25

0x5240,	// (0x0003ca97) popup_battery_window_g1_ParamLimits

0x5240,	// (0x0003ca97) popup_battery_window_g1

0x524c,	// (0x0003caa3) popup_battery_window_t1_ParamLimits

0x524c,	// (0x0003caa3) popup_battery_window_t1

0x525e,	// (0x0003cab5) popup_battery_window_t2_ParamLimits

0x525e,	// (0x0003cab5) popup_battery_window_t2

0x0001,

0xfd79,	// (0x000475d0) popup_battery_window_t_ParamLimits

0xfd79,	// (0x000475d0) popup_battery_window_t

0x7eac,	// (0x0003f703) midp_canvas_pane_ParamLimits

0x7f07,	// (0x0003f75e) midp_keypad_pane_ParamLimits

0x7f07,	// (0x0003f75e) midp_keypad_pane

0xb1d8,	// (0x00042a2f) main_midp_pane_ParamLimits

0xdf9c,	// (0x000457f3) signal_pane_g2_cp_ParamLimits

0xaa2c,	// (0x00042283) aid_size_cell_midp_keypad_ParamLimits

0xaa2c,	// (0x00042283) aid_size_cell_midp_keypad

0xaa4a,	// (0x000422a1) midp_keyp_game_grid_pane_ParamLimits

0xaa4a,	// (0x000422a1) midp_keyp_game_grid_pane

0xaa71,	// (0x000422c8) midp_keyp_rocker_pane_ParamLimits

0xaa71,	// (0x000422c8) midp_keyp_rocker_pane

0xaab2,	// (0x00042309) midp_keyp_sk_left_pane_ParamLimits

0xaab2,	// (0x00042309) midp_keyp_sk_left_pane

0xab06,	// (0x0004235d) midp_keyp_sk_right_pane_ParamLimits

0xab06,	// (0x0004235d) midp_keyp_sk_right_pane

0x8b24,	// (0x0004037b) bg_button_pane_cp03

0xab5a,	// (0x000423b1) midp_keyp_sk_left_pane_g1

0x8b24,	// (0x0004037b) bg_button_pane_cp04

0xab5a,	// (0x000423b1) midp_keyp_sk_right_pane_g1

0xe2a2,	// (0x00045af9) midp_keyp_rocker_pane_g1

0xab63,	// (0x000423ba) keyp_game_cell_pane_ParamLimits

0xab63,	// (0x000423ba) keyp_game_cell_pane

0x8b24,	// (0x0004037b) bg_button_pane_cp02

0xab87,	// (0x000423de) keyp_game_cell_pane_g1

0x7791,	// (0x0003efe8) popup_fep_vkb2_window_ParamLimits

0x7791,	// (0x0003efe8) popup_fep_vkb2_window

0x8748,	// (0x0003ff9f) aid_size_cell_vkb2_ParamLimits

0x8748,	// (0x0003ff9f) aid_size_cell_vkb2

0x877e,	// (0x0003ffd5) popup_fep_vkb2_window_g1_ParamLimits

0x877e,	// (0x0003ffd5) popup_fep_vkb2_window_g1

0x87ce,	// (0x00040025) vkb2_area_bottom_pane_ParamLimits

0x87ce,	// (0x00040025) vkb2_area_bottom_pane

0x8822,	// (0x00040079) vkb2_area_keypad_pane_ParamLimits

0x8822,	// (0x00040079) vkb2_area_keypad_pane

0x886a,	// (0x000400c1) vkb2_area_top_pane_ParamLimits

0x886a,	// (0x000400c1) vkb2_area_top_pane

0x88f0,	// (0x00040147) vkb2_top_entry_pane_ParamLimits

0x88f0,	// (0x00040147) vkb2_top_entry_pane

0x891d,	// (0x00040174) vkb2_top_grid_left_pane_ParamLimits

0x891d,	// (0x00040174) vkb2_top_grid_left_pane

0x893d,	// (0x00040194) vkb2_top_grid_right_pane_ParamLimits

0x893d,	// (0x00040194) vkb2_top_grid_right_pane

0x2e64,	// (0x0003a6bb) vkb2_cell_keypad_pane_ParamLimits

0x2e64,	// (0x0003a6bb) vkb2_cell_keypad_pane

0x8983,	// (0x000401da) vkb2_area_bottom_grid_pane_ParamLimits

0x8983,	// (0x000401da) vkb2_area_bottom_grid_pane

0x89ad,	// (0x00040204) vkb2_area_bottom_pane_g1_ParamLimits

0x89ad,	// (0x00040204) vkb2_area_bottom_pane_g1

0x89d3,	// (0x0004022a) vkb2_area_bottom_pane_g2_ParamLimits

0x89d3,	// (0x0004022a) vkb2_area_bottom_pane_g2

0x8a04,	// (0x0004025b) vkb2_area_bottom_pane_g3_ParamLimits

0x8a04,	// (0x0004025b) vkb2_area_bottom_pane_g3

0x0002,

0xfd7e,	// (0x000475d5) vkb2_area_bottom_pane_g_ParamLimits

0xfd7e,	// (0x000475d5) vkb2_area_bottom_pane_g

0x300e,	// (0x0003a865) vkb2_top_cell_left_pane_ParamLimits

0x300e,	// (0x0003a865) vkb2_top_cell_left_pane

0xab90,	// (0x000423e7) vkb2_top_entry_pane_g1_ParamLimits

0xab90,	// (0x000423e7) vkb2_top_entry_pane_g1

0xab9e,	// (0x000423f5) vkb2_top_entry_pane_t1_ParamLimits

0xab9e,	// (0x000423f5) vkb2_top_entry_pane_t1

0x5422,	// (0x0003cc79) vkb2_top_entry_pane_t2_ParamLimits

0x5422,	// (0x0003cc79) vkb2_top_entry_pane_t2

0x5454,	// (0x0003ccab) vkb2_top_entry_pane_t3_ParamLimits

0x5454,	// (0x0003ccab) vkb2_top_entry_pane_t3

0x0002,

0xfd85,	// (0x000475dc) vkb2_top_entry_pane_t_ParamLimits

0xfd85,	// (0x000475dc) vkb2_top_entry_pane_t

0x8a6e,	// (0x000402c5) vkb2_top_grid_right_pane_g1_ParamLimits

0x8a6e,	// (0x000402c5) vkb2_top_grid_right_pane_g1

0x3071,	// (0x0003a8c8) vkb2_top_grid_right_pane_g2_ParamLimits

0x3071,	// (0x0003a8c8) vkb2_top_grid_right_pane_g2

0x3089,	// (0x0003a8e0) vkb2_top_grid_right_pane_g3_ParamLimits

0x3089,	// (0x0003a8e0) vkb2_top_grid_right_pane_g3

0x8a84,	// (0x000402db) vkb2_top_grid_right_pane_g4_ParamLimits

0x8a84,	// (0x000402db) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8c,	// (0x000475e3) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8c,	// (0x000475e3) vkb2_top_grid_right_pane_g

0x30b7,	// (0x0003a90e) vkb2_top_cell_left_pane_g1

0x30ce,	// (0x0003a925) vkb2_cell_keypad_pane_g1_ParamLimits

0x30ce,	// (0x0003a925) vkb2_cell_keypad_pane_g1

0x5478,	// (0x0003cccf) vkb2_cell_keypad_pane_t1_ParamLimits

0x5478,	// (0x0003cccf) vkb2_cell_keypad_pane_t1

0x30dc,	// (0x0003a933) vkb2_cell_bottom_grid_pane_ParamLimits

0x30dc,	// (0x0003a933) vkb2_cell_bottom_grid_pane

0x3115,	// (0x0003a96c) vkb2_cell_bottom_grid_pane_g1

0xa85f,	// (0x000420b6) aid_call2_pane_cp02

0xa867,	// (0x000420be) aid_call_pane_cp02

0xa86f,	// (0x000420c6) clock_digital_number_pane_cp10

0xa877,	// (0x000420ce) clock_digital_number_pane_cp11

0xa87f,	// (0x000420d6) clock_digital_number_pane_cp12

0xa887,	// (0x000420de) clock_digital_number_pane_cp13

0xa88f,	// (0x000420e6) clock_digital_separator_pane_cp10

0xb8a1,	// (0x000430f8) popup_clock_digital_analogue_window_cp2_g1

0xb8a1,	// (0x000430f8) popup_clock_digital_analogue_window_cp2_g2

0xa897,	// (0x000420ee) popup_clock_digital_analogue_window_cp2_g3

0xb8a1,	// (0x000430f8) popup_clock_digital_analogue_window_cp2_g4

0xa897,	// (0x000420ee) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd41,	// (0x00047598) popup_clock_digital_analogue_window_cp2_g

0xa89f,	// (0x000420f6) popup_clock_digital_analogue_window_cp2_t1

0xa8ad,	// (0x00042104) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4c,	// (0x000475a3) popup_clock_digital_analogue_window_cp2_t

0xe2a2,	// (0x00045af9) clock_digital_number_pane_cp10_g1

0xe2a2,	// (0x00045af9) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x0004739c) clock_digital_number_pane_cp10_g

0xe2a2,	// (0x00045af9) clock_digital_separator_pane_cp10_g1

0xe2a2,	// (0x00045af9) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x0004739c) clock_digital_separator_pane_cp10_g

0xf3db,	// (0x00046c32) uniindi_top_pane_g3

0xf3ec,	// (0x00046c43) uniindi_top_pane_g4

0x2eef,	// (0x0003a746) vkb2_row_keypad_pane_ParamLimits

0x2eef,	// (0x0003a746) vkb2_row_keypad_pane

0x3131,	// (0x0003a988) vkb2_cell_t_keypad_pane_ParamLimits

0x3131,	// (0x0003a988) vkb2_cell_t_keypad_pane

0x3141,	// (0x0003a998) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x3141,	// (0x0003a998) vkb2_cell_t_keypad_pane_cp08

0x3154,	// (0x0003a9ab) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x3154,	// (0x0003a9ab) vkb2_cell_t_keypad_pane_cp09

0x3168,	// (0x0003a9bf) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x3168,	// (0x0003a9bf) vkb2_cell_t_keypad_pane_cp01

0x3179,	// (0x0003a9d0) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x3179,	// (0x0003a9d0) vkb2_cell_t_keypad_pane_cp02

0x318a,	// (0x0003a9e1) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x318a,	// (0x0003a9e1) vkb2_cell_t_keypad_pane_cp03

0x319b,	// (0x0003a9f2) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x319b,	// (0x0003a9f2) vkb2_cell_t_keypad_pane_cp04

0x31ac,	// (0x0003aa03) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x31ac,	// (0x0003aa03) vkb2_cell_t_keypad_pane_cp05

0x31bd,	// (0x0003aa14) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x31bd,	// (0x0003aa14) vkb2_cell_t_keypad_pane_cp06

0x31ce,	// (0x0003aa25) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x31ce,	// (0x0003aa25) vkb2_cell_t_keypad_pane_cp07

0x31df,	// (0x0003aa36) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x31df,	// (0x0003aa36) vkb2_cell_t_keypad_pane_cp10

0xe435,	// (0x00045c8c) vkb2_cell_t_keypad_pane_g1

0x548f,	// (0x0003cce6) vkb2_cell_t_keypad_pane_t1

0x8b24,	// (0x0004037b) popup_grid_graphic2_window

0xabd7,	// (0x0004242e) aid_size_cell_graphic2_ParamLimits

0xabd7,	// (0x0004242e) aid_size_cell_graphic2

0xac15,	// (0x0004246c) bg_popup_window_pane_cp21_ParamLimits

0xac15,	// (0x0004246c) bg_popup_window_pane_cp21

0xac23,	// (0x0004247a) graphic2_pages_pane_ParamLimits

0xac23,	// (0x0004247a) graphic2_pages_pane

0xac79,	// (0x000424d0) grid_graphic2_control_pane_ParamLimits

0xac79,	// (0x000424d0) grid_graphic2_control_pane

0xacc1,	// (0x00042518) grid_graphic2_pane_ParamLimits

0xacc1,	// (0x00042518) grid_graphic2_pane

0xad48,	// (0x0004259f) cell_graphic2_pane

0x8b24,	// (0x0004037b) main_comp_mode_pane

0xf04c,	// (0x000468a3) list_ai3_gene_pane_ParamLimits

0xa5a3,	// (0x00041dfa) bg_popup_window_pane_cp19_ParamLimits

0xf1bd,	// (0x00046a14) bg_touch_area_indi_pane_ParamLimits

0xf1bd,	// (0x00046a14) bg_touch_area_indi_pane

0xf1d3,	// (0x00046a2a) bg_touch_area_indi_pane_cp01_ParamLimits

0xf1d3,	// (0x00046a2a) bg_touch_area_indi_pane_cp01

0xf1e9,	// (0x00046a40) bg_touch_area_indi_pane_cp02_ParamLimits

0xf1e9,	// (0x00046a40) bg_touch_area_indi_pane_cp02

0xf201,	// (0x00046a58) bg_touch_area_indi_pane_cp03_ParamLimits

0xf201,	// (0x00046a58) bg_touch_area_indi_pane_cp03

0xf21b,	// (0x00046a72) popup_slider_window_g1_ParamLimits

0xf237,	// (0x00046a8e) popup_slider_window_g2_ParamLimits

0xf253,	// (0x00046aaa) popup_slider_window_g3_ParamLimits

0xfce7,	// (0x0004753e) popup_slider_window_g_ParamLimits

0xf26f,	// (0x00046ac6) popup_slider_window_t1_ParamLimits

0xf2b5,	// (0x00046b0c) small_volume_slider_vertical_pane_ParamLimits

0xad48,	// (0x0004259f) cell_graphic2_pane_ParamLimits

0xada5,	// (0x000425fc) bg_button_pane_cp10_ParamLimits

0xada5,	// (0x000425fc) bg_button_pane_cp10

0xadb8,	// (0x0004260f) bg_button_pane_cp11_ParamLimits

0xadb8,	// (0x0004260f) bg_button_pane_cp11

0xadcb,	// (0x00042622) graphic2_pages_pane_g1_ParamLimits

0xadcb,	// (0x00042622) graphic2_pages_pane_g1

0xade6,	// (0x0004263d) graphic2_pages_pane_g2_ParamLimits

0xade6,	// (0x0004263d) graphic2_pages_pane_g2

0x0001,

0xfd9a,	// (0x000475f1) graphic2_pages_pane_g_ParamLimits

0xfd9a,	// (0x000475f1) graphic2_pages_pane_g

0xadfe,	// (0x00042655) graphic2_pages_pane_t1_ParamLimits

0xadfe,	// (0x00042655) graphic2_pages_pane_t1

0xae16,	// (0x0004266d) cell_graphic2_control_pane_ParamLimits

0xae16,	// (0x0004266d) cell_graphic2_control_pane

0xae48,	// (0x0004269f) cell_graphic2_pane_g1_ParamLimits

0xae48,	// (0x0004269f) cell_graphic2_pane_g1

0x95fc,	// (0x00040e53) cell_graphic2_pane_g2_ParamLimits

0x95fc,	// (0x00040e53) cell_graphic2_pane_g2

0xae55,	// (0x000426ac) cell_graphic2_pane_g3_ParamLimits

0xae55,	// (0x000426ac) cell_graphic2_pane_g3

0x9609,	// (0x00040e60) cell_graphic2_pane_g4_ParamLimits

0x9609,	// (0x00040e60) cell_graphic2_pane_g4

0xae62,	// (0x000426b9) cell_graphic2_pane_g5_ParamLimits

0xae62,	// (0x000426b9) cell_graphic2_pane_g5

0x0004,

0xfd9f,	// (0x000475f6) cell_graphic2_pane_g_ParamLimits

0xfd9f,	// (0x000475f6) cell_graphic2_pane_g

0xae82,	// (0x000426d9) cell_graphic2_pane_t1_ParamLimits

0xae82,	// (0x000426d9) cell_graphic2_pane_t1

0xd04e,	// (0x000448a5) grid_highlight_pane_cp11_ParamLimits

0xd04e,	// (0x000448a5) grid_highlight_pane_cp11

0x8cc7,	// (0x0004051e) bg_button_pane_cp05

0xaeb7,	// (0x0004270e) cell_graphic2_control_pane_g1

0xe2a2,	// (0x00045af9) bg_touch_area_indi_pane_g1

0x575f,	// (0x0003cfb6) aid_cmod_rocker_key_size

0x5769,	// (0x0003cfc0) aid_cmode_itu_key_size

0x5773,	// (0x0003cfca) main_cmode_video_pane

0x577d,	// (0x0003cfd4) main_comp_mode_itu_pane

0x5789,	// (0x0003cfe0) main_comp_mode_rocker_pane

0x5795,	// (0x0003cfec) cell_cmode_rocker_pane_ParamLimits

0x5795,	// (0x0003cfec) cell_cmode_rocker_pane

0x57a7,	// (0x0003cffe) cell_cmode_itu_pane_ParamLimits

0x57a7,	// (0x0003cffe) cell_cmode_itu_pane

0xb080,	// (0x000428d7) bg_button_pane_cp06_ParamLimits

0xb080,	// (0x000428d7) bg_button_pane_cp06

0xe435,	// (0x00045c8c) cell_cmode_rocker_pane_g1_ParamLimits

0xe435,	// (0x00045c8c) cell_cmode_rocker_pane_g1

0xf2da,	// (0x00046b31) cell_cmode_rocker_pane_g2_ParamLimits

0xf2da,	// (0x00046b31) cell_cmode_rocker_pane_g2

0x0001,

0xfdaf,	// (0x00047606) cell_cmode_rocker_pane_g_ParamLimits

0xfdaf,	// (0x00047606) cell_cmode_rocker_pane_g

0x8b24,	// (0x0004037b) bg_button_pane_cp07

0x57bc,	// (0x0003d013) cell_cmode_itu_pane_g1

0x57c5,	// (0x0003d01c) cell_cmode_itu_pane_t1

0x57d3,	// (0x0003d02a) cell_cmode_itu_pane_t2

0x0001,

0xfdb4,	// (0x0004760b) cell_cmode_itu_pane_t

0xf45e,	// (0x00046cb5) aid_touch_ctrl_left

0xf466,	// (0x00046cbd) aid_touch_ctrl_right

0x8b24,	// (0x0004037b) compa_mode_pane

0xaedd,	// (0x00042734) aid_cmod_rocker_key_size_cp

0xaee7,	// (0x0004273e) aid_cmode_itu_key_size_cp

0x57f5,	// (0x0003d04c) compa_mode_pane_g1

0x57fd,	// (0x0003d054) compa_mode_pane_g2

0x5805,	// (0x0003d05c) compa_mode_pane_g3

0x0002,

0xfdb9,	// (0x00047610) compa_mode_pane_g

0xaef1,	// (0x00042748) main_comp_mode_itu_pane_cp

0xaef9,	// (0x00042750) main_comp_mode_rocker_pane_cp

0xaf01,	// (0x00042758) cell_cmode_itu_pane_cp_ParamLimits

0xaf01,	// (0x00042758) cell_cmode_itu_pane_cp

0xaf16,	// (0x0004276d) cell_cmode_rocker_pane_cp_ParamLimits

0xaf16,	// (0x0004276d) cell_cmode_rocker_pane_cp

0xb080,	// (0x000428d7) bg_button_pane_cp06_cp_ParamLimits

0xb080,	// (0x000428d7) bg_button_pane_cp06_cp

0xe435,	// (0x00045c8c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe435,	// (0x00045c8c) cell_cmode_rocker_pane_g1_cp

0xe2a2,	// (0x00045af9) cell_cmode_rocker_pane_g2_cp

0x8b24,	// (0x0004037b) bg_button_pane_cp07_cp

0xaf28,	// (0x0004277f) cell_cmode_itu_pane_g1_cp

0xaf31,	// (0x00042788) cell_cmode_itu_pane_t1_cp

0xaf31,	// (0x00042788) cell_cmode_itu_pane_t2_cp

0x9c12,	// (0x00041469) settings_code_pane_cp2

0x8b94,	// (0x000403eb) bg_popup_window_pane_cp3_ParamLimits

0x9717,	// (0x00040f6e) heading_pane_cp3_ParamLimits

0x9723,	// (0x00040f7a) listscroll_popup_graphic_pane_ParamLimits

0x271e,	// (0x00039f75) fep_hwr_aid_pane_ParamLimits

0x2bd1,	// (0x0003a428) aid_touch_sctrl_top_ParamLimits

0x2bde,	// (0x0003a435) sctrl_sk_top_pane_g1_ParamLimits

0xe435,	// (0x00045c8c) sctrl_sk_top_pane_g2_ParamLimits

0xfd00,	// (0x00047557) sctrl_sk_top_pane_g_ParamLimits

0x2beb,	// (0x0003a442) sctrl_sk_top_pane_t1_ParamLimits

0x2bd1,	// (0x0003a428) aid_touch_sctrl_bottom_ParamLimits

0x2beb,	// (0x0003a442) sctrl_sk_bottom_pane_t1_ParamLimits

0xf3a7,	// (0x00046bfe) aid_area_touch_clock

0x88b2,	// (0x00040109) aid_vkb2_area_top_pane_cell_ParamLimits

0x88b2,	// (0x00040109) aid_vkb2_area_top_pane_cell

0x895d,	// (0x000401b4) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x895d,	// (0x000401b4) aid_vkb2_area_bottom_pane_cell

0x53da,	// (0x0003cc31) popup_char_count_window

0x5852,	// (0x0003d0a9) popup_char_count_window_g1

0x585b,	// (0x0003d0b2) popup_char_count_window_g2

0x5864,	// (0x0003d0bb) popup_char_count_window_g3

0x0002,

0xfdc0,	// (0x00047617) popup_char_count_window_g

0x586d,	// (0x0003d0c4) popup_char_count_window_t1

0x2c8c,	// (0x0003a4e3) popup_fep_char_preview_window_ParamLimits

0x2c8c,	// (0x0003a4e3) popup_fep_char_preview_window

0x88d2,	// (0x00040129) vkb2_top_candi_pane_ParamLimits

0x88d2,	// (0x00040129) vkb2_top_candi_pane

0xaf3f,	// (0x00042796) cell_vkb2_top_candi_pane_ParamLimits

0xaf3f,	// (0x00042796) cell_vkb2_top_candi_pane

0xc9f0,	// (0x00044247) bg_popup_fep_char_preview_window_ParamLimits

0xc9f0,	// (0x00044247) bg_popup_fep_char_preview_window

0x31f4,	// (0x0003aa4b) popup_fep_char_preview_window_t1_ParamLimits

0x31f4,	// (0x0003aa4b) popup_fep_char_preview_window_t1

0x58c8,	// (0x0003d11f) bg_popup_fep_char_preview_window_g1

0x58d0,	// (0x0003d127) bg_popup_fep_char_preview_window_g2

0x58d8,	// (0x0003d12f) bg_popup_fep_char_preview_window_g3

0x58e0,	// (0x0003d137) bg_popup_fep_char_preview_window_g4

0x58e8,	// (0x0003d13f) bg_popup_fep_char_preview_window_g5

0x322e,	// (0x0003aa85) bg_popup_fep_char_preview_window_g6

0x58f0,	// (0x0003d147) bg_popup_fep_char_preview_window_g7

0x58f8,	// (0x0003d14f) bg_popup_fep_char_preview_window_g8

0x5900,	// (0x0003d157) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc7,	// (0x0004761e) bg_popup_fep_char_preview_window_g

0xe435,	// (0x00045c8c) cell_vkb2_top_candi_pane_g1_ParamLimits

0xe435,	// (0x00045c8c) cell_vkb2_top_candi_pane_g1

0xe674,	// (0x00045ecb) cell_vkb2_top_candi_pane_g2_ParamLimits

0xe674,	// (0x00045ecb) cell_vkb2_top_candi_pane_g2

0xe695,	// (0x00045eec) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe695,	// (0x00045eec) cell_vkb2_top_candi_pane_g3

0x3236,	// (0x0003aa8d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x3236,	// (0x0003aa8d) cell_vkb2_top_candi_pane_g4

0x53b9,	// (0x0003cc10) cell_vkb2_top_candi_pane_g5_ParamLimits

0x53b9,	// (0x0003cc10) cell_vkb2_top_candi_pane_g5

0xf2da,	// (0x00046b31) cell_vkb2_top_candi_pane_g6_ParamLimits

0xf2da,	// (0x00046b31) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdda,	// (0x00047631) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdda,	// (0x00047631) cell_vkb2_top_candi_pane_g

0x3257,	// (0x0003aaae) cell_vkb2_top_candi_pane_t1

0x2476,	// (0x00039ccd) aid_size_touch_slider_mark_ParamLimits

0x2476,	// (0x00039ccd) aid_size_touch_slider_mark

0xac5f,	// (0x000424b6) grid_graphic2_catg_pane_ParamLimits

0xac5f,	// (0x000424b6) grid_graphic2_catg_pane

0xad1b,	// (0x00042572) popup_grid_graphic2_window_t1_ParamLimits

0xad1b,	// (0x00042572) popup_grid_graphic2_window_t1

0xad31,	// (0x00042588) popup_grid_graphic2_window_t2_ParamLimits

0xad31,	// (0x00042588) popup_grid_graphic2_window_t2

0x0001,

0xfd95,	// (0x000475ec) popup_grid_graphic2_window_t_ParamLimits

0xfd95,	// (0x000475ec) popup_grid_graphic2_window_t

0x8cc7,	// (0x0004051e) bg_button_pane_cp05_ParamLimits

0xaeb7,	// (0x0004270e) cell_graphic2_control_pane_g1_ParamLimits

0xafa5,	// (0x000427fc) cell_graphic2_catg_pane_ParamLimits

0xafa5,	// (0x000427fc) cell_graphic2_catg_pane

0x8b24,	// (0x0004037b) bg_button_pane_cp12

0xafb7,	// (0x0004280e) cell_graphic2_catg_pane_g1

0xf373,	// (0x00046bca) cell_tb_ext_pane_t1_ParamLimits

0x302e,	// (0x0003a885) vkb2_top_cell_right_narrow_pane_ParamLimits

0x302e,	// (0x0003a885) vkb2_top_cell_right_narrow_pane

0x3046,	// (0x0003a89d) vkb2_top_cell_right_wide_pane_ParamLimits

0x3046,	// (0x0003a89d) vkb2_top_cell_right_wide_pane

0x8109,	// (0x0003f960) bg_vkb2_func_pane_ParamLimits

0x8109,	// (0x0003f960) bg_vkb2_func_pane

0x30b7,	// (0x0003a90e) vkb2_top_cell_left_pane_g1_ParamLimits

0x8109,	// (0x0003f960) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8109,	// (0x0003f960) bg_vkb2_fuc_pane_cp03

0x3115,	// (0x0003a96c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xc402,	// (0x00043c59) bg_vkb2_func_pane_g1

0xc40a,	// (0x00043c61) bg_vkb2_func_pane_g2

0xc41a,	// (0x00043c71) bg_vkb2_func_pane_g3

0xc412,	// (0x00043c69) bg_vkb2_func_pane_g4

0xc422,	// (0x00043c79) bg_vkb2_func_pane_g5

0xc42a,	// (0x00043c81) bg_vkb2_func_pane_g6

0xc432,	// (0x00043c89) bg_vkb2_func_pane_g7

0xc43a,	// (0x00043c91) bg_vkb2_func_pane_g8

0xc3fa,	// (0x00043c51) bg_vkb2_func_pane_g9

0x0008,

0x01ab,	// (0x00037a02) bg_vkb2_func_pane_g

0x8109,	// (0x0003f960) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8109,	// (0x0003f960) bg_vkb2_fuc_pane_cp01

0x30b7,	// (0x0003a90e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x30b7,	// (0x0003a90e) vkb2_top_cell_right_wide_pane_g1

0x8109,	// (0x0003f960) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8109,	// (0x0003f960) bg_vkb2_fuc_pane_cp02

0x3115,	// (0x0003a96c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x3115,	// (0x0003a96c) vkb2_top_cell_right_narrow_pane_g1

0xa4e3,	// (0x00041d3a) aid_touch_area_decrease_ParamLimits

0xa4e3,	// (0x00041d3a) aid_touch_area_decrease

0xa517,	// (0x00041d6e) aid_touch_area_increase_ParamLimits

0xa517,	// (0x00041d6e) aid_touch_area_increase

0xa53f,	// (0x00041d96) aid_touch_area_mute_ParamLimits

0xa53f,	// (0x00041d96) aid_touch_area_mute

0xa56f,	// (0x00041dc6) aid_touch_area_slider_ParamLimits

0xa56f,	// (0x00041dc6) aid_touch_area_slider

0xa5af,	// (0x00041e06) popup_slider_window_g4_ParamLimits

0xa5af,	// (0x00041e06) popup_slider_window_g4

0xa5d7,	// (0x00041e2e) popup_slider_window_g5_ParamLimits

0xa5d7,	// (0x00041e2e) popup_slider_window_g5

0xa60b,	// (0x00041e62) popup_slider_window_g6_ParamLimits

0xa60b,	// (0x00041e62) popup_slider_window_g6

0xf29d,	// (0x00046af4) popup_slider_window_t2_ParamLimits

0xf29d,	// (0x00046af4) popup_slider_window_t2

0x0001,

0xfcf4,	// (0x0004754b) popup_slider_window_t_ParamLimits

0xfcf4,	// (0x0004754b) popup_slider_window_t

0xa627,	// (0x00041e7e) slider_pane_ParamLimits

0xa627,	// (0x00041e7e) slider_pane

0x5923,	// (0x0003d17a) slider_pane_g1_ParamLimits

0x5923,	// (0x0003d17a) slider_pane_g1

0x5937,	// (0x0003d18e) slider_pane_g2_ParamLimits

0x5937,	// (0x0003d18e) slider_pane_g2

0x594d,	// (0x0003d1a4) slider_pane_g3_ParamLimits

0x594d,	// (0x0003d1a4) slider_pane_g3

0x0003,

0xfde7,	// (0x0004763e) slider_pane_g_ParamLimits

0xfde7,	// (0x0004763e) slider_pane_g

0x9070,	// (0x000408c7) popup_tb_float_extension_window_ParamLimits

0x9070,	// (0x000408c7) popup_tb_float_extension_window

0x5979,	// (0x0003d1d0) aid_size_cell_tb_float_ext

0x8b24,	// (0x0004037b) bg_popup_sub_window_cp28

0x5985,	// (0x0003d1dc) grid_tb_float_ext_pane

0x598f,	// (0x0003d1e6) cell_tb_float_ext_pane_ParamLimits

0x598f,	// (0x0003d1e6) cell_tb_float_ext_pane

0x59a9,	// (0x0003d200) cell_tb_float_ext_pane_g1

0x59b2,	// (0x0003d209) grid_highlight_pane_cp12

0x8643,	// (0x0003fe9a) cell_last_hwr_side_pane_ParamLimits

0x8643,	// (0x0003fe9a) cell_last_hwr_side_pane

0xe2a2,	// (0x00045af9) cell_last_hwr_side_pane_g1

0x59bb,	// (0x0003d212) cell_last_hwr_side_pane_g2

0x0001,

0xfdf0,	// (0x00047647) cell_last_hwr_side_pane_g

0x8a39,	// (0x00040290) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8a39,	// (0x00040290) vkb2_area_bottom_space_btn_pane

0xe435,	// (0x00045c8c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x548f,	// (0x0003cce6) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x3257,	// (0x0003aaae) cell_vkb2_top_candi_pane_t1_ParamLimits

0x3276,	// (0x0003aacd) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x3276,	// (0x0003aacd) vkb2_area_bottom_space_btn_pane_g1

0x32b0,	// (0x0003ab07) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x32b0,	// (0x0003ab07) vkb2_area_bottom_space_btn_pane_g2

0x32e6,	// (0x0003ab3d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x32e6,	// (0x0003ab3d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf5,	// (0x0004764c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf5,	// (0x0004764c) vkb2_area_bottom_space_btn_pane_g

0x27c5,	// (0x0003a01c) cel_fep_hwr_func_pane_ParamLimits

0x27c5,	// (0x0003a01c) cel_fep_hwr_func_pane

0x8618,	// (0x0003fe6f) cell_hwr_side_button_pane_ParamLimits

0x8618,	// (0x0003fe6f) cell_hwr_side_button_pane

0xf3a7,	// (0x00046bfe) aid_area_touch_clock_ParamLimits

0x8cc7,	// (0x0004051e) bg_uniindi_top_pane_ParamLimits

0xf3b9,	// (0x00046c10) uniindi_top_pane_g1_ParamLimits

0xf3cf,	// (0x00046c26) uniindi_top_pane_g2_ParamLimits

0xf3db,	// (0x00046c32) uniindi_top_pane_g3_ParamLimits

0xf3ec,	// (0x00046c43) uniindi_top_pane_g4_ParamLimits

0xfd1b,	// (0x00047572) uniindi_top_pane_g_ParamLimits

0xf3f9,	// (0x00046c50) uniindi_top_pane_t1_ParamLimits

0x8cc7,	// (0x0004051e) bg_vkb2_func_pane_cp01_ParamLimits

0x8cc7,	// (0x0004051e) bg_vkb2_func_pane_cp01

0x59c4,	// (0x0003d21b) cel_fep_hwr_func_pane_g1_ParamLimits

0x59c4,	// (0x0003d21b) cel_fep_hwr_func_pane_g1

0x8cc7,	// (0x0004051e) bg_vkb2_func_pane_cp02_ParamLimits

0x8cc7,	// (0x0004051e) bg_vkb2_func_pane_cp02

0x59c4,	// (0x0003d21b) cell_hwr_side_button_pane_g1_ParamLimits

0x59c4,	// (0x0003d21b) cell_hwr_side_button_pane_g1

0xc310,	// (0x00043b67) status_pane_g4_ParamLimits

0xc310,	// (0x00043b67) status_pane_g4

0xc32a,	// (0x00043b81) status_pane_t1

0xe128,	// (0x0004597f) form2_midp_gauge_slider_cont_pane

0xe130,	// (0x00045987) form2_midp_gauge_slider_pane_t1_ParamLimits

0x9ecc,	// (0x00041723) form2_midp_gauge_slider_pane_t2_ParamLimits

0x9ede,	// (0x00041735) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x0004734f) form2_midp_gauge_slider_pane_t_ParamLimits

0xe142,	// (0x00045999) form2_midp_slider_pane_ParamLimits

0x2c4c,	// (0x0003a4a3) aid_size_cell_func_vkb2_ParamLimits

0x2c4c,	// (0x0003a4a3) aid_size_cell_func_vkb2

0x5965,	// (0x0003d1bc) slider_pane_g4_ParamLimits

0x5965,	// (0x0003d1bc) slider_pane_g4

0x8a9a,	// (0x000402f1) form2_midp_gauge_slider_pane_t2_cp01

0x8aa8,	// (0x000402ff) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8aa8,	// (0x000402ff) form2_midp_gauge_slider_pane_t3_cp01

0x335b,	// (0x0003abb2) form2_midp_slider_pane_cp01

0x8b24,	// (0x0004037b) navi_smil_pane

0x59f4,	// (0x0003d24b) navi_smil_pane_g1

0x59fc,	// (0x0003d253) navi_smil_pane_t1

0x59d2,	// (0x0003d229) form2_midp_slider_pane_g1

0x59db,	// (0x0003d232) form2_midp_slider_pane_g2

0x59e3,	// (0x0003d23a) form2_midp_slider_pane_g3

0x59d2,	// (0x0003d229) form2_midp_slider_pane_g4

0xafc0,	// (0x00042817) form2_midp_slider_pane_g5

0x0004,

0xfdfe,	// (0x00047655) form2_midp_slider_pane_g

0x3320,	// (0x0003ab77) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x3320,	// (0x0003ab77) vkb2_area_bottom_space_btn_pane_g4

0x9253,	// (0x00040aaa) lc0_navi_pane_ParamLimits

0x9253,	// (0x00040aaa) lc0_navi_pane

0x92bd,	// (0x00040b14) lc0_stat_indi_pane_ParamLimits

0x92bd,	// (0x00040b14) lc0_stat_indi_pane

0x92d2,	// (0x00040b29) ls0_title_pane_ParamLimits

0x92d2,	// (0x00040b29) ls0_title_pane

0xb080,	// (0x000428d7) bg_popup_sub_pane_cp14_ParamLimits

0xf38e,	// (0x00046be5) list_uniindi_pane_ParamLimits

0xf39a,	// (0x00046bf1) uniindi_top_pane_ParamLimits

0xf436,	// (0x00046c8d) list_single_uniindi_pane_g1_ParamLimits

0xf449,	// (0x00046ca0) list_single_uniindi_pane_t1_ParamLimits

0x8ac5,	// (0x0004031c) lc0_stat_clock_pane_ParamLimits

0x8ac5,	// (0x0004031c) lc0_stat_clock_pane

0xafcb,	// (0x00042822) lc0_stat_indi_pane_g1_ParamLimits

0xafcb,	// (0x00042822) lc0_stat_indi_pane_g1

0xafd8,	// (0x0004282f) lc0_stat_indi_pane_g2_ParamLimits

0xafd8,	// (0x0004282f) lc0_stat_indi_pane_g2

0x0001,

0xfe09,	// (0x00047660) lc0_stat_indi_pane_g_ParamLimits

0xfe09,	// (0x00047660) lc0_stat_indi_pane_g

0x8ad2,	// (0x00040329) lc0_uni_indicator_pane_ParamLimits

0x8ad2,	// (0x00040329) lc0_uni_indicator_pane

0xafe5,	// (0x0004283c) ls0_title_pane_g1_ParamLimits

0xafe5,	// (0x0004283c) ls0_title_pane_g1

0xaff9,	// (0x00042850) ls0_title_pane_t1_ParamLimits

0xaff9,	// (0x00042850) ls0_title_pane_t1

0x8adf,	// (0x00040336) lc0_uni_indicator_pane_g1_ParamLimits

0x8adf,	// (0x00040336) lc0_uni_indicator_pane_g1

0x5a0a,	// (0x0003d261) lc0_stat_clock_pane_t1

0x8b24,	// (0x0004037b) main_ai5_pane

0x5a18,	// (0x0003d26f) ai5_sk_pane_ParamLimits

0x5a18,	// (0x0003d26f) ai5_sk_pane

0xb240,	// (0x00042a97) cell_ai5_widget_pane_ParamLimits

0xb240,	// (0x00042a97) cell_ai5_widget_pane

0x5a25,	// (0x0003d27c) aid_size_cell_widget_grid

0x5a39,	// (0x0003d290) bg_ai5_widget_pane_ParamLimits

0x5a39,	// (0x0003d290) bg_ai5_widget_pane

0x5a83,	// (0x0003d2da) cell_ai5_widget_pane_g2

0x5a93,	// (0x0003d2ea) cell_ai5_widget_pane_g3

0x5ab2,	// (0x0003d309) cell_ai5_widget_pane_g4

0x5abe,	// (0x0003d315) cell_ai5_widget_pane_g5

0x5aca,	// (0x0003d321) cell_ai5_widget_pane_g6

0x5ad6,	// (0x0003d32d) cell_ai5_widget_pane_g7

0x5b1e,	// (0x0003d375) cell_ai5_widget_pane_t1_ParamLimits

0x5b1e,	// (0x0003d375) cell_ai5_widget_pane_t1

0x5b3b,	// (0x0003d392) cell_ai5_widget_pane_t2_ParamLimits

0x5b3b,	// (0x0003d392) cell_ai5_widget_pane_t2

0x5b53,	// (0x0003d3aa) cell_ai5_widget_pane_t3_ParamLimits

0x5b53,	// (0x0003d3aa) cell_ai5_widget_pane_t3

0x5b6b,	// (0x0003d3c2) cell_ai5_widget_pane_t4_ParamLimits

0x5b6b,	// (0x0003d3c2) cell_ai5_widget_pane_t4

0x5b85,	// (0x0003d3dc) cell_ai5_widget_pane_t5_ParamLimits

0x5b85,	// (0x0003d3dc) cell_ai5_widget_pane_t5

0x5ba4,	// (0x0003d3fb) cell_ai5_widget_pane_t6_ParamLimits

0x5ba4,	// (0x0003d3fb) cell_ai5_widget_pane_t6

0x5bb6,	// (0x0003d40d) cell_ai5_widget_pane_t7_ParamLimits

0x5bb6,	// (0x0003d40d) cell_ai5_widget_pane_t7

0x5bcf,	// (0x0003d426) cell_ai5_widget_pane_t8_ParamLimits

0x5bcf,	// (0x0003d426) cell_ai5_widget_pane_t8

0x0009,

0xfe23,	// (0x0004767a) cell_ai5_widget_pane_t_ParamLimits

0xfe23,	// (0x0004767a) cell_ai5_widget_pane_t

0x5c1b,	// (0x0003d472) grid_ai5_widget_pane

0xb080,	// (0x000428d7) highlight_cell_ai5_widget_pane_ParamLimits

0xb080,	// (0x000428d7) highlight_cell_ai5_widget_pane

0xb2aa,	// (0x00042b01) ai5_sk_left_pane

0xb2b4,	// (0x00042b0b) ai5_sk_middle_pane

0xb2be,	// (0x00042b15) ai5_sk_right_pane

0x5c33,	// (0x0003d48a) bg_ai5_widget_pane_g1_ParamLimits

0x5c33,	// (0x0003d48a) bg_ai5_widget_pane_g1

0x5c3f,	// (0x0003d496) bg_ai5_widget_pane_g2_ParamLimits

0x5c3f,	// (0x0003d496) bg_ai5_widget_pane_g2

0x5c4b,	// (0x0003d4a2) bg_ai5_widget_pane_g3_ParamLimits

0x5c4b,	// (0x0003d4a2) bg_ai5_widget_pane_g3

0x5c57,	// (0x0003d4ae) bg_ai5_widget_pane_g4_ParamLimits

0x5c57,	// (0x0003d4ae) bg_ai5_widget_pane_g4

0x5c63,	// (0x0003d4ba) bg_ai5_widget_pane_g5_ParamLimits

0x5c63,	// (0x0003d4ba) bg_ai5_widget_pane_g5

0x5c6f,	// (0x0003d4c6) bg_ai5_widget_pane_g6_ParamLimits

0x5c6f,	// (0x0003d4c6) bg_ai5_widget_pane_g6

0x5c7b,	// (0x0003d4d2) bg_ai5_widget_pane_g7_ParamLimits

0x5c7b,	// (0x0003d4d2) bg_ai5_widget_pane_g7

0x5c87,	// (0x0003d4de) bg_ai5_widget_pane_g8_ParamLimits

0x5c87,	// (0x0003d4de) bg_ai5_widget_pane_g8

0x5c93,	// (0x0003d4ea) bg_ai5_widget_pane_g9_ParamLimits

0x5c93,	// (0x0003d4ea) bg_ai5_widget_pane_g9

0x0008,

0xfe38,	// (0x0004768f) bg_ai5_widget_pane_g_ParamLimits

0xfe38,	// (0x0004768f) bg_ai5_widget_pane_g

0x5cc6,	// (0x0003d51d) cell_shortcut_ai5_widget_pane_ParamLimits

0x5cc6,	// (0x0003d51d) cell_shortcut_ai5_widget_pane

0x8bd0,	// (0x00040427) bg_cell_shortcut_ai5_widget_pane

0x5cd7,	// (0x0003d52e) cell_grid_ai5_widget_pane_g1

0x5ce0,	// (0x0003d537) highlight_cell_shortcut_ai5_widget_pane

0xc40a,	// (0x00043c61) ai5_sk_left_pane_g1

0x5ce8,	// (0x0003d53f) ai5_sk_left_pane_g2

0x5cf0,	// (0x0003d547) ai5_sk_left_pane_g3

0x5cf8,	// (0x0003d54f) ai5_sk_left_pane_g4

0x0003,

0xfe4b,	// (0x000476a2) ai5_sk_left_pane_g

0x5d00,	// (0x0003d557) ai5_sk_left_pane_t1

0xc402,	// (0x00043c59) ai5_sk_right_pane_g1

0x5d0e,	// (0x0003d565) ai5_sk_right_pane_g2

0x5d16,	// (0x0003d56d) ai5_sk_right_pane_g3

0x5d1e,	// (0x0003d575) ai5_sk_right_pane_g4

0x0003,

0xfe54,	// (0x000476ab) ai5_sk_right_pane_g

0x5d26,	// (0x0003d57d) ai5_sk_right_pane_t1

0xc402,	// (0x00043c59) ai5_sk_middle_pane_g1

0xc40a,	// (0x00043c61) ai5_sk_middle_pane_g2

0xc422,	// (0x00043c79) ai5_sk_middle_pane_g3

0x5d16,	// (0x0003d56d) ai5_sk_middle_pane_g4

0x5cf0,	// (0x0003d547) ai5_sk_middle_pane_g5

0x5d34,	// (0x0003d58b) ai5_sk_middle_pane_g6

0xb2c8,	// (0x00042b1f) ai5_sk_middle_pane_g7

0x0006,

0xfe5d,	// (0x000476b4) ai5_sk_middle_pane_g

0x913f,	// (0x00040996) aid_touch_area_size_lc0_ParamLimits

0x913f,	// (0x00040996) aid_touch_area_size_lc0

0x2950,	// (0x0003a1a7) cell_hwr_candidate_pane_t1_ParamLimits

0xc232,	// (0x00043a89) aid_touch_navi_pane

0x93c5,	// (0x00040c1c) status_dt_navi_pane_ParamLimits

0x93c5,	// (0x00040c1c) status_dt_navi_pane

0x93dd,	// (0x00040c34) status_dt_sta_pane_ParamLimits

0x93dd,	// (0x00040c34) status_dt_sta_pane

0xb2d0,	// (0x00042b27) dt_sta_controll_pane

0xb2dd,	// (0x00042b34) dt_sta_indi_pane

0xb2ea,	// (0x00042b41) dt_sta_title_pane

0x8cc7,	// (0x0004051e) bg_dt_sta_indi_pane_ParamLimits

0x8cc7,	// (0x0004051e) bg_dt_sta_indi_pane

0x5d3c,	// (0x0003d593) dt_sta_battery_pane

0x5d44,	// (0x0003d59b) dt_sta_indi_pane_g1

0x5d4d,	// (0x0003d5a4) dt_sta_indi_pane_g2

0x5d56,	// (0x0003d5ad) dt_sta_indi_pane_g3

0x0002,

0xfe6c,	// (0x000476c3) dt_sta_indi_pane_g

0x5d5f,	// (0x0003d5b6) dt_sta_signal_pane

0xb080,	// (0x000428d7) bg_dt_sta_title_pane_ParamLimits

0xb080,	// (0x000428d7) bg_dt_sta_title_pane

0x5d68,	// (0x0003d5bf) dt_sta_title_pane_g1

0x5d70,	// (0x0003d5c7) dt_sta_title_pane_t1_ParamLimits

0x5d70,	// (0x0003d5c7) dt_sta_title_pane_t1

0x8b24,	// (0x0004037b) bg_dt_sta_control_pane

0x5d85,	// (0x0003d5dc) dt_sta_controll_pane_g1

0x5d8e,	// (0x0003d5e5) bg_dt_sta_title_pane_g1

0x5d97,	// (0x0003d5ee) bg_dt_sta_title_pane_g2

0x5da0,	// (0x0003d5f7) bg_dt_sta_title_pane_g3

0x0002,

0xfe73,	// (0x000476ca) bg_dt_sta_title_pane_g

0xe2a2,	// (0x00045af9) bg_dt_sta_indi_pane_g1

0x5da9,	// (0x0003d600) dt_sta_signal_pane_g1

0x5db1,	// (0x0003d608) dt_sta_signal_pane_g2

0x0001,

0xfe7a,	// (0x000476d1) dt_sta_signal_pane_g

0x5db9,	// (0x0003d610) dt_sta_battery_pane_g1

0x5dc2,	// (0x0003d619) dt_sta_battery_pane_t1

0xe2a2,	// (0x00045af9) bg_dt_sta_control_pane_g1

0xb924,	// (0x0004317b) fep_china_uni_eep_pane

0xb92c,	// (0x00043183) fep_china_uni_entry_pane_ParamLimits

0xb93c,	// (0x00043193) popup_fep_china_uni_window_g1_ParamLimits

0xba63,	// (0x000432ba) popup_fep_china_uni_window_g2_ParamLimits

0xba63,	// (0x000432ba) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x00046f91) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x00046f91) popup_fep_china_uni_window_g

0x5dd1,	// (0x0003d628) fep_china_uni_eep_pane_g1

0x5dd9,	// (0x0003d630) fep_china_uni_eep_pane_t1

0x59eb,	// (0x0003d242) aid_touch_area_size_smil_player

0xc2e3,	// (0x00043b3a) lc0_clock_pane

0xc31e,	// (0x00043b75) status_pane_g5_ParamLimits

0xc31e,	// (0x00043b75) status_pane_g5

0x82af,	// (0x0003fb06) popup_keymap_window

0xc2fc,	// (0x00043b53) status_icon_pane

0x5a93,	// (0x0003d2ea) cell_ai5_widget_pane_g3_ParamLimits

0x5ab2,	// (0x0003d309) cell_ai5_widget_pane_g4_ParamLimits

0x5abe,	// (0x0003d315) cell_ai5_widget_pane_g5_ParamLimits

0x5ae2,	// (0x0003d339) cell_ai5_widget_pane_g8_ParamLimits

0x5ae2,	// (0x0003d339) cell_ai5_widget_pane_g8

0x5af6,	// (0x0003d34d) cell_ai5_widget_pane_g9_ParamLimits

0x5af6,	// (0x0003d34d) cell_ai5_widget_pane_g9

0x5b0a,	// (0x0003d361) cell_ai5_widget_pane_g10_ParamLimits

0x5b0a,	// (0x0003d361) cell_ai5_widget_pane_g10

0x5de8,	// (0x0003d63f) status_icon_pane_g1

0x8b24,	// (0x0004037b) bg_popup_sub_pane_cp13

0x5df0,	// (0x0003d647) popup_keymap_window_t1

0x7fb3,	// (0x0003f80a) control_pane_g6_ParamLimits

0x7fb3,	// (0x0003f80a) control_pane_g6

0x7fc0,	// (0x0003f817) control_pane_g7_ParamLimits

0x7fc0,	// (0x0003f817) control_pane_g7

0x7fcd,	// (0x0003f824) control_pane_g8_ParamLimits

0x7fcd,	// (0x0003f824) control_pane_g8

0xb2d0,	// (0x00042b27) dt_sta_controll_pane_ParamLimits

0xb2dd,	// (0x00042b34) dt_sta_indi_pane_ParamLimits

0xb2ea,	// (0x00042b41) dt_sta_title_pane_ParamLimits

0x994d,	// (0x000411a4) aid_size_touch_scroll_bar_cale

0x131e,	// (0x00038b75) popup_discreet_window_ParamLimits

0x131e,	// (0x00038b75) popup_discreet_window

0x77d7,	// (0x0003f02e) popup_sk_window

0xc9f0,	// (0x00044247) bg_popup_sub_pane_cp28_ParamLimits

0xc9f0,	// (0x00044247) bg_popup_sub_pane_cp28

0x5dfe,	// (0x0003d655) popup_discreet_window_g1_ParamLimits

0x5dfe,	// (0x0003d655) popup_discreet_window_g1

0x5e1e,	// (0x0003d675) popup_discreet_window_t1_ParamLimits

0x5e1e,	// (0x0003d675) popup_discreet_window_t1

0x5e3c,	// (0x0003d693) popup_discreet_window_t2_ParamLimits

0x5e3c,	// (0x0003d693) popup_discreet_window_t2

0x0002,

0xfe7f,	// (0x000476d6) popup_discreet_window_t_ParamLimits

0xfe7f,	// (0x000476d6) popup_discreet_window_t

0x3506,	// (0x0003ad5d) popup_sk_window_g1

0x3510,	// (0x0003ad67) popup_sk_window_g2

0x0001,

0xfe86,	// (0x000476dd) popup_sk_window_g

0x351a,	// (0x0003ad71) popup_sk_window_t1

0x3528,	// (0x0003ad7f) popup_sk_window_t1_copy1

0x5a83,	// (0x0003d2da) cell_ai5_widget_pane_g2_ParamLimits

0x5be1,	// (0x0003d438) cell_ai5_widget_pane_t9_ParamLimits

0x5be1,	// (0x0003d438) cell_ai5_widget_pane_t9

0x8b24,	// (0x0004037b) main_fep_fshwr2_pane

0xb2fc,	// (0x00042b53) aid_fshwr2_btn_pane

0xb304,	// (0x00042b5b) aid_fshwr2_syb_pane

0xb30c,	// (0x00042b63) aid_fshwr2_txt_pane

0xb314,	// (0x00042b6b) fshwr2_func_candi_pane

0xb31e,	// (0x00042b75) fshwr2_hwr_syb_pane

0xb32c,	// (0x00042b83) fshwr2_icf_pane

0x8b24,	// (0x0004037b) fshwr2_icf_bg_pane

0xb336,	// (0x00042b8d) fshwr2_icf_pane_t1_ParamLimits

0xb336,	// (0x00042b8d) fshwr2_icf_pane_t1

0xe2a2,	// (0x00045af9) fshwr2_func_candi_pane_g1

0x5ea2,	// (0x0003d6f9) fshwr2_func_candi_row_pane_ParamLimits

0x5ea2,	// (0x0003d6f9) fshwr2_func_candi_row_pane

0xb34e,	// (0x00042ba5) cell_fshwr2_syb_pane_ParamLimits

0xb34e,	// (0x00042ba5) cell_fshwr2_syb_pane

0xe435,	// (0x00045c8c) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe435,	// (0x00045c8c) fshwr2_hwr_syb_pane_g1

0x8b24,	// (0x0004037b) bg_popup_call_pane_cp01

0x5eb3,	// (0x0003d70a) fshwr2_func_candi_cell_pane_ParamLimits

0x5eb3,	// (0x0003d70a) fshwr2_func_candi_cell_pane

0x5ee4,	// (0x0003d73b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x5ee4,	// (0x0003d73b) fshwr2_func_candi_cell_bg_pane

0x5efe,	// (0x0003d755) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x5efe,	// (0x0003d755) fshwr2_func_candi_cell_pane_g1

0x5f26,	// (0x0003d77d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x5f26,	// (0x0003d77d) fshwr2_func_candi_cell_pane_t1

0x8b24,	// (0x0004037b) bg_button_pane_cp08

0xbe9e,	// (0x000436f5) cell_fshwr2_syb_bg_pane

0xb368,	// (0x00042bbf) cell_fshwr2_syb_bg_pane_g1

0xb370,	// (0x00042bc7) cell_fshwr2_syb_bg_pane_t1

0xb080,	// (0x000428d7) main_tmo_pane

0xd434,	// (0x00044c8b) uni_indicator_pane_g1_ParamLimits

0xd449,	// (0x00044ca0) uni_indicator_pane_g2_ParamLimits

0xd45f,	// (0x00044cb6) uni_indicator_pane_g3_ParamLimits

0xd475,	// (0x00044ccc) uni_indicator_pane_g4_ParamLimits

0xd475,	// (0x00044ccc) uni_indicator_pane_g4

0xd489,	// (0x00044ce0) uni_indicator_pane_g5_ParamLimits

0xd489,	// (0x00044ce0) uni_indicator_pane_g5

0xd49d,	// (0x00044cf4) uni_indicator_pane_g6_ParamLimits

0xd49d,	// (0x00044cf4) uni_indicator_pane_g6

0xf92b,	// (0x00047182) uni_indicator_pane_g_ParamLimits

0xa4bf,	// (0x00041d16) popup_tmo_note_window_ParamLimits

0xa4bf,	// (0x00041d16) popup_tmo_note_window

0x8b24,	// (0x0004037b) fshwr2_bg_pane

0x5f17,	// (0x0003d76e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x5f17,	// (0x0003d76e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8b,	// (0x000476e2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8b,	// (0x000476e2) fshwr2_func_candi_cell_pane_g

0xe2a2,	// (0x00045af9) bg_popup_window_pane_cp01

0x5f39,	// (0x0003d790) bg_popup_window_pane_g1_cp01

0x5f42,	// (0x0003d799) bg_popup_window_pane_cp22_ParamLimits

0x5f42,	// (0x0003d799) bg_popup_window_pane_cp22

0x5f50,	// (0x0003d7a7) listscroll_tmo_link_pane_ParamLimits

0x5f50,	// (0x0003d7a7) listscroll_tmo_link_pane

0x5f90,	// (0x0003d7e7) popup_tmo_note_window_g1_ParamLimits

0x5f90,	// (0x0003d7e7) popup_tmo_note_window_g1

0x5f9d,	// (0x0003d7f4) tmo_note_info_pane_ParamLimits

0x5f9d,	// (0x0003d7f4) tmo_note_info_pane

0xb37f,	// (0x00042bd6) list_tmo_note_info_pane_g1_ParamLimits

0xb37f,	// (0x00042bd6) list_tmo_note_info_pane_g1

0x5fb7,	// (0x0003d80e) list_tmo_note_info_pane_g2_ParamLimits

0x5fb7,	// (0x0003d80e) list_tmo_note_info_pane_g2

0x0001,

0xfe90,	// (0x000476e7) list_tmo_note_info_pane_g_ParamLimits

0xfe90,	// (0x000476e7) list_tmo_note_info_pane_g

0x5fd3,	// (0x0003d82a) list_tmo_note_info_text_pane_ParamLimits

0x5fd3,	// (0x0003d82a) list_tmo_note_info_text_pane

0x6015,	// (0x0003d86c) list_tmo_link_pane

0x6022,	// (0x0003d879) scroll_pane_cp20

0x602f,	// (0x0003d886) list_single_tmo_link_pane_ParamLimits

0x602f,	// (0x0003d886) list_single_tmo_link_pane

0x603f,	// (0x0003d896) list_single_tmo_link_pane_t1

0x604d,	// (0x0003d8a4) list_tmo_note_info_text_pane_t1_ParamLimits

0x604d,	// (0x0003d8a4) list_tmo_note_info_text_pane_t1

0x7c19,	// (0x0003f470) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7c19,	// (0x0003f470) aid_size_touch_scroll_bar_cp01

0x7391,	// (0x0003ebe8) aid_size_touch_slider_marker

0x77c7,	// (0x0003f01e) popup_settings_window_ParamLimits

0x77c7,	// (0x0003f01e) popup_settings_window

0x0a72,	// (0x000382c9) popup_candi_list_indi_window

0xc232,	// (0x00043a89) aid_touch_navi_pane_ParamLimits

0x2ba5,	// (0x0003a3fc) rs_clock_indi_pane

0x2bae,	// (0x0003a405) sctrl_sk_bottom_pane_ParamLimits

0x2bbf,	// (0x0003a416) sctrl_sk_top_pane_ParamLimits

0x2ca6,	// (0x0003a4fd) popup_fep_tooltip_window

0x5a25,	// (0x0003d27c) aid_size_cell_widget_grid_ParamLimits

0x5a77,	// (0x0003d2ce) cell_ai5_widget_pane_g1_ParamLimits

0x5a77,	// (0x0003d2ce) cell_ai5_widget_pane_g1

0x5aca,	// (0x0003d321) cell_ai5_widget_pane_g6_ParamLimits

0x5ad6,	// (0x0003d32d) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe0e,	// (0x00047665) cell_ai5_widget_pane_g_ParamLimits

0xfe0e,	// (0x00047665) cell_ai5_widget_pane_g

0x5c05,	// (0x0003d45c) cell_ai5_widget_pane_t10_ParamLimits

0x5c05,	// (0x0003d45c) cell_ai5_widget_pane_t10

0x5c1b,	// (0x0003d472) grid_ai5_widget_pane_ParamLimits

0x5c9f,	// (0x0003d4f6) cell_contacts_ai5_widget_pane_ParamLimits

0x5c9f,	// (0x0003d4f6) cell_contacts_ai5_widget_pane

0x5e51,	// (0x0003d6a8) popup_discreet_window_t3_ParamLimits

0x5e51,	// (0x0003d6a8) popup_discreet_window_t3

0x5e8e,	// (0x0003d6e5) popup_fshwr2_char_preview_window_ParamLimits

0x5e8e,	// (0x0003d6e5) popup_fshwr2_char_preview_window

0xb396,	// (0x00042bed) tmo_note_info_pane_t1

0xb3ab,	// (0x00042c02) tmo_note_info_pane_t2

0xb3c2,	// (0x00042c19) tmo_note_info_pane_t3

0x5ff1,	// (0x0003d848) tmo_note_info_pane_t4

0x6003,	// (0x0003d85a) tmo_note_info_pane_t5

0x0004,

0xfe95,	// (0x000476ec) tmo_note_info_pane_t

0x6015,	// (0x0003d86c) list_tmo_link_pane_ParamLimits

0x6022,	// (0x0003d879) scroll_pane_cp20_ParamLimits

0x8b24,	// (0x0004037b) bg_popup_fep_char_preview_window_cp01

0x6066,	// (0x0003d8bd) popup_fshwr2_char_preview_window_t1

0x6074,	// (0x0003d8cb) popup_candi_list_indi_window_g1

0x607d,	// (0x0003d8d4) bg_cell_contacts_ai5_widget_pane

0x6089,	// (0x0003d8e0) cell_contacts_ai5_widget_pane_g1

0x609d,	// (0x0003d8f4) cell_contacts_ai5_widget_pane_g2

0x60ac,	// (0x0003d903) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea0,	// (0x000476f7) cell_contacts_ai5_widget_pane_g

0x60bf,	// (0x0003d916) cell_contacts_ai5_widget_pane_t1

0xb080,	// (0x000428d7) highlight_cell_shortcut_ai5_widget_pane_cp01

0xb43c,	// (0x00042c93) settings_container_pane

0xbe9e,	// (0x000436f5) listscroll_set_pane_copy1

0xdc68,	// (0x000454bf) scroll_pane_cp121_copy1

0x60d1,	// (0x0003d928) set_content_pane_copy1

0xb448,	// (0x00042c9f) aid_height_set_list_copy1_ParamLimits

0xb448,	// (0x00042c9f) aid_height_set_list_copy1

0xc9b0,	// (0x00044207) aid_size_parent_copy1_ParamLimits

0xc9b0,	// (0x00044207) aid_size_parent_copy1

0xb454,	// (0x00042cab) button_value_adjust_pane_cp6_copy1_ParamLimits

0xb454,	// (0x00042cab) button_value_adjust_pane_cp6_copy1

0xb1d8,	// (0x00042a2f) list_highlight_pane_cp2_copy1_ParamLimits

0xb1d8,	// (0x00042a2f) list_highlight_pane_cp2_copy1

0xb468,	// (0x00042cbf) list_set_pane_copy1_ParamLimits

0xb468,	// (0x00042cbf) list_set_pane_copy1

0xb3d7,	// (0x00042c2e) main_pane_set_t1_copy1_ParamLimits

0xb3d7,	// (0x00042c2e) main_pane_set_t1_copy1

0xb411,	// (0x00042c68) main_pane_set_t2_copy1_ParamLimits

0xb411,	// (0x00042c68) main_pane_set_t2_copy1

0xb515,	// (0x00042d6c) main_pane_set_t3_copy1

0xb523,	// (0x00042d7a) main_pane_set_t4_copy1

0xb430,	// (0x00042c87) set_content_pane_g1_copy1_ParamLimits

0xb430,	// (0x00042c87) set_content_pane_g1_copy1

0xb531,	// (0x00042d88) setting_code_pane_copy1

0x60d9,	// (0x0003d930) setting_slider_graphic_pane_copy1

0x60d9,	// (0x0003d930) setting_slider_pane_copy1

0x60d9,	// (0x0003d930) setting_text_pane_copy1

0x60e3,	// (0x0003d93a) setting_volume_pane_copy1

0xb94c,	// (0x000431a3) settings_code_pane_cp2_copy1

0xb954,	// (0x000431ab) settings_code_pane_cp_copy1_ParamLimits

0xb954,	// (0x000431ab) settings_code_pane_cp_copy1

0xb968,	// (0x000431bf) volume_set_pane_copy1

0xb970,	// (0x000431c7) volume_set_pane_g10_copy1

0xb978,	// (0x000431cf) volume_set_pane_g1_copy1

0xb980,	// (0x000431d7) volume_set_pane_g2_copy1

0xb988,	// (0x000431df) volume_set_pane_g3_copy1

0xb990,	// (0x000431e7) volume_set_pane_g4_copy1

0xb998,	// (0x000431ef) volume_set_pane_g5_copy1

0xb9a0,	// (0x000431f7) volume_set_pane_g6_copy1

0xb9a8,	// (0x000431ff) volume_set_pane_g7_copy1

0xb9b0,	// (0x00043207) volume_set_pane_g8_copy1

0xb9b8,	// (0x0004320f) volume_set_pane_g9_copy1

0x8b94,	// (0x000403eb) bg_set_opt_pane_cp_copy1_ParamLimits

0x8b94,	// (0x000403eb) bg_set_opt_pane_cp_copy1

0x60ec,	// (0x0003d943) setting_slider_pane_t1_copy1_ParamLimits

0x60ec,	// (0x0003d943) setting_slider_pane_t1_copy1

0xb9c0,	// (0x00043217) setting_slider_pane_t2_copy1_ParamLimits

0xb9c0,	// (0x00043217) setting_slider_pane_t2_copy1

0xb9da,	// (0x00043231) setting_slider_pane_t3_copy1_ParamLimits

0xb9da,	// (0x00043231) setting_slider_pane_t3_copy1

0xb9f2,	// (0x00043249) slider_set_pane_copy1_ParamLimits

0xb9f2,	// (0x00043249) slider_set_pane_copy1

0xb0e7,	// (0x0004293e) set_opt_bg_pane_g1_copy2

0xb0ef,	// (0x00042946) set_opt_bg_pane_g2_copy2

0x610a,	// (0x0003d961) set_opt_bg_pane_g3_copy2

0xb0ff,	// (0x00042956) set_opt_bg_pane_g4_copy2

0xb107,	// (0x0004295e) set_opt_bg_pane_g5_copy2

0xb10f,	// (0x00042966) set_opt_bg_pane_g6_copy2

0xba08,	// (0x0004325f) set_opt_bg_pane_g7_copy2

0x6114,	// (0x0003d96b) set_opt_bg_pane_g8_copy2

0x611e,	// (0x0003d975) set_opt_bg_pane_g9_copy2

0x3836,	// (0x0003b08d) aid_size_touch_slider_mark_copy1_ParamLimits

0x3836,	// (0x0003b08d) aid_size_touch_slider_mark_copy1

0x6128,	// (0x0003d97f) slider_set_pane_g1_copy1

0x384a,	// (0x0003b0a1) slider_set_pane_g2_copy1

0x2496,	// (0x00039ced) slider_set_pane_g3_copy1_ParamLimits

0x2496,	// (0x00039ced) slider_set_pane_g3_copy1

0x24aa,	// (0x00039d01) slider_set_pane_g4_copy1_ParamLimits

0x24aa,	// (0x00039d01) slider_set_pane_g4_copy1

0x24c2,	// (0x00039d19) slider_set_pane_g5_copy1_ParamLimits

0x24c2,	// (0x00039d19) slider_set_pane_g5_copy1

0x2496,	// (0x00039ced) slider_set_pane_g6_copy1_ParamLimits

0x2496,	// (0x00039ced) slider_set_pane_g6_copy1

0x8b06,	// (0x0004035d) slider_set_pane_g7_copy1_ParamLimits

0x8b06,	// (0x0004035d) slider_set_pane_g7_copy1

0x8b38,	// (0x0004038f) bg_set_opt_pane_cp2_copy1

0x6131,	// (0x0003d988) setting_slider_graphic_pane_g1_copy1

0xba10,	// (0x00043267) setting_slider_graphic_pane_t1_copy1

0xba20,	// (0x00043277) setting_slider_graphic_pane_t2_copy1

0xba30,	// (0x00043287) slider_set_pane_cp_copy1

0x6142,	// (0x0003d999) input_focus_pane_cp1_copy1

0x614b,	// (0x0003d9a2) list_set_text_pane_copy1

0x6153,	// (0x0003d9aa) setting_text_pane_g1_copy1

0x02bc,	// (0x00037b13) set_text_pane_t1_copy1

0x6142,	// (0x0003d999) input_focus_pane_cp2_copy1

0x6153,	// (0x0003d9aa) setting_code_pane_g1_copy1

0xba38,	// (0x0004328f) setting_code_pane_t1_copy1

0x7e6a,	// (0x0003f6c1) list_set_graphic_pane_copy1

0x8b38,	// (0x0004038f) bg_set_opt_pane_cp4_copy1

0x7e7c,	// (0x0003f6d3) list_set_graphic_pane_g1_copy1_ParamLimits

0x7e7c,	// (0x0003f6d3) list_set_graphic_pane_g1_copy1

0xba46,	// (0x0004329d) list_set_graphic_pane_g2_copy1

0x7e94,	// (0x0003f6eb) list_set_graphic_pane_t1_copy1_ParamLimits

0x7e94,	// (0x0003f6eb) list_set_graphic_pane_t1_copy1

0xe2a2,	// (0x00045af9) rs_clock_indi_pane_g1

0x615c,	// (0x0003d9b3) rs_clock_indi_pane_t1

0x616a,	// (0x0003d9c1) rs_indi_pane

0x6172,	// (0x0003d9c9) rs_indi_pane_g1

0x617b,	// (0x0003d9d2) rs_indi_pane_g2

0x6184,	// (0x0003d9db) rs_indi_pane_g3

0x0002,

0xfea7,	// (0x000476fe) rs_indi_pane_g

0xbe9e,	// (0x000436f5) bg_popup_preview_window_pane_cp03

0x618d,	// (0x0003d9e4) popup_fep_tooltip_window_t1

0xeb8b,	// (0x000463e2) popup_note2_window_g2_ParamLimits

0xeb8b,	// (0x000463e2) popup_note2_window_g2

0x0001,

0xfc64,	// (0x000474bb) popup_note2_window_g_ParamLimits

0xfc64,	// (0x000474bb) popup_note2_window_g

0xf012,	// (0x00046869) bg_popup_sub_pane_cp11_ParamLimits

0xf01f,	// (0x00046876) cell_ai3_links_pane_g1_ParamLimits

0xf036,	// (0x0004688d) cell_ai3_links_pane_t1

0x02bc,	// (0x00037b13) set_text_pane_t1_copy1_ParamLimits

0xbdbb,	// (0x00043612) cell_graphic_popup_pane_cp2_ParamLimits

0xbdbb,	// (0x00043612) cell_graphic_popup_pane_cp2

0x619b,	// (0x0003d9f2) cell_graphic_popup_pane_g1_cp2

0x9760,	// (0x00040fb7) cell_graphic_popup_pane_g2_cp2

0x61a3,	// (0x0003d9fa) cell_graphic_popup_pane_g3_cp2

0x61ab,	// (0x0003da02) cell_graphic_popup_pane_t2_cp2

0x9771,	// (0x00040fc8) grid_highlight_pane_cp3_cp2

0xb67d,	// (0x00042ed4) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb080,	// (0x000428d7) main_tmo_pane_ParamLimits

0xa4b3,	// (0x00041d0a) popup_tmo_big_image_note_window

0x5a67,	// (0x0003d2be) cell_ai5_widget_list_pane

0x5a6f,	// (0x0003d2c6) cell_ai5_widget_lrg_icon_pane

0xb396,	// (0x00042bed) tmo_note_info_pane_t1_ParamLimits

0xb3ab,	// (0x00042c02) tmo_note_info_pane_t2_ParamLimits

0xb3c2,	// (0x00042c19) tmo_note_info_pane_t3_ParamLimits

0x5ff1,	// (0x0003d848) tmo_note_info_pane_t4_ParamLimits

0x6003,	// (0x0003d85a) tmo_note_info_pane_t5_ParamLimits

0xfe95,	// (0x000476ec) tmo_note_info_pane_t_ParamLimits

0xb43c,	// (0x00042c93) settings_container_pane_ParamLimits

0x613a,	// (0x0003d991) indicator_popup_pane_cp5

0x613a,	// (0x0003d991) indicator_popup_pane_cp6

0x7e6a,	// (0x0003f6c1) list_set_graphic_pane_copy1_ParamLimits

0x8b24,	// (0x0004037b) bg_popup_window_pane_cp23

0x61b9,	// (0x0003da10) popup_tmo_big_image_note_window_g1

0x61c3,	// (0x0003da1a) popup_tmo_big_image_note_window_t1

0x61d3,	// (0x0003da2a) popup_tmo_big_image_note_window_t2

0x61e3,	// (0x0003da3a) popup_tmo_big_image_note_window_t3

0x0002,

0xfeae,	// (0x00047705) popup_tmo_big_image_note_window_t

0x61f3,	// (0x0003da4a) cell_ai5_widget_lrg_icon_pane_g1

0x61fb,	// (0x0003da52) cell_ai5_widget_lrg_icon_pane_t1

0x6209,	// (0x0003da60) cell_ai5_widget_list_row_pane_ParamLimits

0x6209,	// (0x0003da60) cell_ai5_widget_list_row_pane

0x6222,	// (0x0003da79) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x6222,	// (0x0003da79) cell_ai5_widget_list_row_pane_g1

0x622f,	// (0x0003da86) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x622f,	// (0x0003da86) cell_ai5_widget_list_row_pane_t1

0x6247,	// (0x0003da9e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x6247,	// (0x0003da9e) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeb5,	// (0x0004770c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb5,	// (0x0004770c) cell_ai5_widget_list_row_pane_t

0x8b24,	// (0x0004037b) main_fep_vtchi_ss_pane

0x6259,	// (0x0003dab0) popup_fep_char_pre_window

0x6261,	// (0x0003dab8) popup_fep_ituss_window

0x627b,	// (0x0003dad2) popup_fep_vkbss_window

0x6299,	// (0x0003daf0) grid_vkbss_keypad_pane_ParamLimits

0x6299,	// (0x0003daf0) grid_vkbss_keypad_pane

0x62a9,	// (0x0003db00) ituss_keypad_pane

0x62bf,	// (0x0003db16) aid_vkbss_key_offset_ParamLimits

0x62bf,	// (0x0003db16) aid_vkbss_key_offset

0x62cb,	// (0x0003db22) cell_vkbss_key_pane_ParamLimits

0x62cb,	// (0x0003db22) cell_vkbss_key_pane

0x62e1,	// (0x0003db38) bg_cell_vkbss_key_g1_ParamLimits

0x62e1,	// (0x0003db38) bg_cell_vkbss_key_g1

0x62ed,	// (0x0003db44) cell_vkbss_key_3p_pane_ParamLimits

0x62ed,	// (0x0003db44) cell_vkbss_key_3p_pane

0x6307,	// (0x0003db5e) cell_vkbss_key_g1_ParamLimits

0x6307,	// (0x0003db5e) cell_vkbss_key_g1

0x6321,	// (0x0003db78) cell_vkbss_key_t1_ParamLimits

0x6321,	// (0x0003db78) cell_vkbss_key_t1

0x634c,	// (0x0003dba3) cell_ituss_key_pane_ParamLimits

0x634c,	// (0x0003dba3) cell_ituss_key_pane

0x635c,	// (0x0003dbb3) bg_cell_ituss_key_g1_ParamLimits

0x635c,	// (0x0003dbb3) bg_cell_ituss_key_g1

0x6368,	// (0x0003dbbf) cell_ituss_key_pane_g1_ParamLimits

0x6368,	// (0x0003dbbf) cell_ituss_key_pane_g1

0x6374,	// (0x0003dbcb) cell_ituss_key_pane_g2_ParamLimits

0x6374,	// (0x0003dbcb) cell_ituss_key_pane_g2

0x0001,

0xfeba,	// (0x00047711) cell_ituss_key_pane_g_ParamLimits

0xfeba,	// (0x00047711) cell_ituss_key_pane_g

0x638d,	// (0x0003dbe4) cell_ituss_key_t1_ParamLimits

0x638d,	// (0x0003dbe4) cell_ituss_key_t1

0x63bb,	// (0x0003dc12) cell_ituss_key_t2_ParamLimits

0x63bb,	// (0x0003dc12) cell_ituss_key_t2

0x63ec,	// (0x0003dc43) cell_ituss_key_t3_ParamLimits

0x63ec,	// (0x0003dc43) cell_ituss_key_t3

0x641d,	// (0x0003dc74) cell_ituss_key_t4_ParamLimits

0x641d,	// (0x0003dc74) cell_ituss_key_t4

0x0003,

0xfebf,	// (0x00047716) cell_ituss_key_t_ParamLimits

0xfebf,	// (0x00047716) cell_ituss_key_t

0x644e,	// (0x0003dca5) cell_vkbss_key_3p_pane_g1

0x6456,	// (0x0003dcad) cell_vkbss_key_3p_pane_g2

0x645e,	// (0x0003dcb5) cell_vkbss_key_3p_pane_g3

0x0002,

0xfec8,	// (0x0004771f) cell_vkbss_key_3p_pane_g

0x8b24,	// (0x0004037b) bg_popup_fep_char_preview_window_cp02

0x6466,	// (0x0003dcbd) popup_fep_char_pre_window_t1

0xb2a0,	// (0x00042af7) main_ai5_sk_pane

0x607d,	// (0x0003d8d4) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x6089,	// (0x0003d8e0) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x609d,	// (0x0003d8f4) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x60ac,	// (0x0003d903) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea0,	// (0x000476f7) cell_contacts_ai5_widget_pane_g_ParamLimits

0x60bf,	// (0x0003d916) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb080,	// (0x000428d7) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xba4e,	// (0x000432a5) main_ai5_sk_pane_g1

0xc7ff,	// (0x00044056) popup_query_code_window_g1

0x6270,	// (0x0003dac7) popup_fep_vkb_icf_pane

0x6284,	// (0x0003dadb) popup_fep_vtchi_icf_pane

0xb080,	// (0x000428d7) bg_icf_pane

0x62a9,	// (0x0003db00) list_vkb_icf_pane

0xb080,	// (0x000428d7) bg_icf_pane_cp01

0x6490,	// (0x0003dce7) vtchi_icf_list_pane

0x64a0,	// (0x0003dcf7) list_vkb_icf_pane_t1_ParamLimits

0x64a0,	// (0x0003dcf7) list_vkb_icf_pane_t1

0x64b7,	// (0x0003dd0e) vtchi_icf_list_pane_t1_ParamLimits

0x64b7,	// (0x0003dd0e) vtchi_icf_list_pane_t1

0x6261,	// (0x0003dab8) popup_fep_ituss_window_ParamLimits

0x6284,	// (0x0003dadb) popup_fep_vtchi_icf_pane_ParamLimits

0x62a9,	// (0x0003db00) ituss_keypad_pane_ParamLimits

0x62b5,	// (0x0003db0c) ituss_sks_pane

0xb080,	// (0x000428d7) bg_icf_pane_ParamLimits

0x6475,	// (0x0003dccc) icf_edit_indi_pane_ParamLimits

0x6475,	// (0x0003dccc) icf_edit_indi_pane

0x62a9,	// (0x0003db00) list_vkb_icf_pane_ParamLimits

0xb080,	// (0x000428d7) bg_icf_pane_cp01_ParamLimits

0x6484,	// (0x0003dcdb) icf_edit_indi_pane_cp01_ParamLimits

0x6484,	// (0x0003dcdb) icf_edit_indi_pane_cp01

0x6498,	// (0x0003dcef) vtchi_query_pane

0xe435,	// (0x00045c8c) icf_edit_indi_pane_g1_ParamLimits

0xe435,	// (0x00045c8c) icf_edit_indi_pane_g1

0x64d3,	// (0x0003dd2a) icf_edit_indi_pane_g2_ParamLimits

0x64d3,	// (0x0003dd2a) icf_edit_indi_pane_g2

0x0001,

0xfecf,	// (0x00047726) icf_edit_indi_pane_g_ParamLimits

0xfecf,	// (0x00047726) icf_edit_indi_pane_g

0x64df,	// (0x0003dd36) icf_edit_indi_pane_t1

0x64ed,	// (0x0003dd44) bg_input_focus_pane_cp042

0x9944,	// (0x0004119b) vtchi_button_pane

0x64f6,	// (0x0003dd4d) vtchi_query_pane_t1

0x6504,	// (0x0003dd5b) vtchi_query_pane_t2

0x6512,	// (0x0003dd69) vtchi_query_pane_t3

0x0002,

0xfed4,	// (0x0004772b) vtchi_query_pane_t

0x8b24,	// (0x0004037b) bg_button_pane_cp13

0x6520,	// (0x0003dd77) vtchi_button_pane_g1

0x6528,	// (0x0003dd7f) ituss_sks_pane_g1

0x6533,	// (0x0003dd8a) ituss_sks_pane_g2

0x0001,

0xfedb,	// (0x00047732) ituss_sks_pane_g

0x653b,	// (0x0003dd92) ituss_sks_pane_t1

0x6549,	// (0x0003dda0) ituss_sks_pane_t2

0x0001,

0xfee0,	// (0x00047737) ituss_sks_pane_t

0xdf4d,	// (0x000457a4) indicator_nsta_pane_cp_g1

0xdf56,	// (0x000457ad) indicator_nsta_pane_cp_g2

0xdf5e,	// (0x000457b5) indicator_nsta_pane_cp_g3

0xdf66,	// (0x000457bd) indicator_nsta_pane_cp_g4

0xdf6e,	// (0x000457c5) indicator_nsta_pane_cp_g5

0xdf76,	// (0x000457cd) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x00047305) indicator_nsta_pane_cp_g

0xae99,	// (0x000426f0) cell_graphic2_pane_t2_ParamLimits

0xae99,	// (0x000426f0) cell_graphic2_pane_t2

0x0001,

0xfdaa,	// (0x00047601) cell_graphic2_pane_t_ParamLimits

0xfdaa,	// (0x00047601) cell_graphic2_pane_t

0xaecf,	// (0x00042726) cell_graphic2_control_pane_t1

0x7dfc,	// (0x0003f653) signal_pane_g3_ParamLimits

0x7dfc,	// (0x0003f653) signal_pane_g3

0x7e10,	// (0x0003f667) signal_pane_g4_ParamLimits

0x7e10,	// (0x0003f667) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large

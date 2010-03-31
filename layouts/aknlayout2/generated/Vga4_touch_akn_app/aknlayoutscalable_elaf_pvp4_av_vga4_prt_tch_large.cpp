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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00041fdc };

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
0x60e0,	// (0x000480bc) Screen

0x60ec,	// (0x000480c8) application_window_ParamLimits

0x60ec,	// (0x000480c8) application_window

0xd7e8,	// (0x0004f7c4) screen_g1

0x6148,	// (0x00048124) area_bottom_pane_ParamLimits

0x6148,	// (0x00048124) area_bottom_pane

0x6208,	// (0x000481e4) area_top_pane_ParamLimits

0x6208,	// (0x000481e4) area_top_pane

0x629c,	// (0x00048278) main_pane_ParamLimits

0x629c,	// (0x00048278) main_pane

0xd7f2,	// (0x0004f7ce) misc_graphics

0x8fbd,	// (0x0004af99) battery_pane_ParamLimits

0x8fbd,	// (0x0004af99) battery_pane

0x9c7b,	// (0x0004bc57) bg_status_flat_pane_g8

0x9c83,	// (0x0004bc5f) bg_status_flat_pane_g9

0x9085,	// (0x0004b061) context_pane_ParamLimits

0x9085,	// (0x0004b061) context_pane

0x91a9,	// (0x0004b185) navi_pane_ParamLimits

0x91a9,	// (0x0004b185) navi_pane

0x9239,	// (0x0004b215) signal_pane_ParamLimits

0x9239,	// (0x0004b215) signal_pane

0x0008,

0xf884,	// (0x00051860) bg_status_flat_pane_g

0x92a6,	// (0x0004b282) status_pane_g1_ParamLimits

0x92a6,	// (0x0004b282) status_pane_g1

0x92ba,	// (0x0004b296) status_pane_g2_ParamLimits

0x92ba,	// (0x0004b296) status_pane_g2

0x92c6,	// (0x0004b2a2) status_pane_g3_ParamLimits

0x92c6,	// (0x0004b2a2) status_pane_g3

0x0004,

0xf7ab,	// (0x00051787) status_pane_g_ParamLimits

0xf7ab,	// (0x00051787) status_pane_g

0x92fa,	// (0x0004b2d6) title_pane_ParamLimits

0x92fa,	// (0x0004b2d6) title_pane

0x9337,	// (0x0004b313) uni_indicator_pane_ParamLimits

0x9337,	// (0x0004b313) uni_indicator_pane

0x88a6,	// (0x0004a882) bg_list_pane_ParamLimits

0x88a6,	// (0x0004a882) bg_list_pane

0x88c6,	// (0x0004a8a2) find_pane

0x88ce,	// (0x0004a8aa) listscroll_app_pane_ParamLimits

0x88ce,	// (0x0004a8aa) listscroll_app_pane

0x88da,	// (0x0004a8b6) listscroll_form_pane

0x88e2,	// (0x0004a8be) listscroll_gen_pane_ParamLimits

0x88e2,	// (0x0004a8be) listscroll_gen_pane

0x88f6,	// (0x0004a8d2) listscroll_set_pane

0x69b0,	// (0x0004898c) main_idle_act_pane

0x47a7,	// (0x00046783) main_idle_trad_pane

0x47a7,	// (0x00046783) main_list_empty_pane

0x8910,	// (0x0004a8ec) main_midp_pane

0x891c,	// (0x0004a8f8) main_pane_g1_ParamLimits

0x891c,	// (0x0004a8f8) main_pane_g1

0x892a,	// (0x0004a906) popup_ai_message_window_ParamLimits

0x892a,	// (0x0004a906) popup_ai_message_window

0x89de,	// (0x0004a9ba) popup_fep_china_uni_window_ParamLimits

0x89de,	// (0x0004a9ba) popup_fep_china_uni_window

0x8a3e,	// (0x0004aa1a) popup_fep_japan_candidate_window_ParamLimits

0x8a3e,	// (0x0004aa1a) popup_fep_japan_candidate_window

0x8a68,	// (0x0004aa44) popup_fep_japan_predictive_window_ParamLimits

0x8a68,	// (0x0004aa44) popup_fep_japan_predictive_window

0x8a9e,	// (0x0004aa7a) popup_find_window

0x8aab,	// (0x0004aa87) popup_grid_graphic_window_ParamLimits

0x8aab,	// (0x0004aa87) popup_grid_graphic_window

0x8ad9,	// (0x0004aab5) popup_large_graphic_colour_window

0x8aff,	// (0x0004aadb) popup_menu_window_ParamLimits

0x8aff,	// (0x0004aadb) popup_menu_window

0x8cc9,	// (0x0004aca5) popup_note_image_window

0x8cb3,	// (0x0004ac8f) popup_note_wait_window_ParamLimits

0x8cb3,	// (0x0004ac8f) popup_note_wait_window

0x8cb3,	// (0x0004ac8f) popup_note_window_ParamLimits

0x8cb3,	// (0x0004ac8f) popup_note_window

0x8d2f,	// (0x0004ad0b) popup_query_code_window_ParamLimits

0x8d2f,	// (0x0004ad0b) popup_query_code_window

0x8d45,	// (0x0004ad21) popup_query_data_code_window_ParamLimits

0x8d45,	// (0x0004ad21) popup_query_data_code_window

0x8d68,	// (0x0004ad44) popup_query_data_window_ParamLimits

0x8d68,	// (0x0004ad44) popup_query_data_window

0x8d8a,	// (0x0004ad66) popup_query_sat_info_window_ParamLimits

0x8d8a,	// (0x0004ad66) popup_query_sat_info_window

0x8dc9,	// (0x0004ada5) popup_snote_single_graphic_window_ParamLimits

0x8dc9,	// (0x0004ada5) popup_snote_single_graphic_window

0x8dc9,	// (0x0004ada5) popup_snote_single_text_window_ParamLimits

0x8dc9,	// (0x0004ada5) popup_snote_single_text_window

0x8de0,	// (0x0004adbc) popup_sub_window_general

0x8f26,	// (0x0004af02) popup_window_general_ParamLimits

0x8f26,	// (0x0004af02) popup_window_general

0x8f3f,	// (0x0004af1b) power_save_pane

0x7381,	// (0x0004935d) control_pane_g1_ParamLimits

0x7381,	// (0x0004935d) control_pane_g1

0x73aa,	// (0x00049386) control_pane_g2_ParamLimits

0x73aa,	// (0x00049386) control_pane_g2

0x73cf,	// (0x000493ab) control_pane_g3_ParamLimits

0x73cf,	// (0x000493ab) control_pane_g3

0x0007,

0xf793,	// (0x0005176f) control_pane_g_ParamLimits

0xf793,	// (0x0005176f) control_pane_g

0x7427,	// (0x00049403) control_pane_t1_ParamLimits

0x7427,	// (0x00049403) control_pane_t1

0x7473,	// (0x0004944f) control_pane_t2_ParamLimits

0x7473,	// (0x0004944f) control_pane_t2

0x0002,

0xf7a4,	// (0x00051780) control_pane_t_ParamLimits

0xf7a4,	// (0x00051780) control_pane_t

0x72a2,	// (0x0004927e) navi_navi_volume_pane_cp1

0x72ab,	// (0x00049287) status_small_icon_pane

0x72b3,	// (0x0004928f) status_small_pane_g1_ParamLimits

0x72b3,	// (0x0004928f) status_small_pane_g1

0x72e7,	// (0x000492c3) status_small_pane_g2_ParamLimits

0x72e7,	// (0x000492c3) status_small_pane_g2

0x72f3,	// (0x000492cf) status_small_pane_g3_ParamLimits

0x72f3,	// (0x000492cf) status_small_pane_g3

0x72ff,	// (0x000492db) status_small_pane_g4_ParamLimits

0x72ff,	// (0x000492db) status_small_pane_g4

0x730b,	// (0x000492e7) status_small_pane_g5_ParamLimits

0x730b,	// (0x000492e7) status_small_pane_g5

0x731a,	// (0x000492f6) status_small_pane_g6_ParamLimits

0x731a,	// (0x000492f6) status_small_pane_g6

0x0007,

0xf782,	// (0x0005175e) status_small_pane_g_ParamLimits

0xf782,	// (0x0005175e) status_small_pane_g

0x734a,	// (0x00049326) status_small_pane_t1

0x736d,	// (0x00049349) status_small_wait_pane_ParamLimits

0x736d,	// (0x00049349) status_small_wait_pane

0x6d23,	// (0x00048cff) aid_levels_signal_ParamLimits

0x6d23,	// (0x00048cff) aid_levels_signal

0x6d35,	// (0x00048d11) signal_pane_g1_ParamLimits

0x6d35,	// (0x00048d11) signal_pane_g1

0x6d4a,	// (0x00048d26) signal_pane_g2_ParamLimits

0x6d4a,	// (0x00048d26) signal_pane_g2

0x0003,

0xf713,	// (0x000516ef) signal_pane_g_ParamLimits

0xf713,	// (0x000516ef) signal_pane_g

0x2357,	// (0x00044333) context_pane_g1

0x64fb,	// (0x000484d7) title_pane_g1

0x6519,	// (0x000484f5) title_pane_t1

0xd814,	// (0x0004f7f0) title_pane_t2

0xd83a,	// (0x0004f816) title_pane_t3

0x0002,

0xf55d,	// (0x00051539) title_pane_t

0x934f,	// (0x0004b32b) aid_levels_battery_ParamLimits

0x934f,	// (0x0004b32b) aid_levels_battery

0x9363,	// (0x0004b33f) battery_pane_g1_ParamLimits

0x9363,	// (0x0004b33f) battery_pane_g1

0x9379,	// (0x0004b355) battery_pane_g2_ParamLimits

0x9379,	// (0x0004b355) battery_pane_g2

0x0001,

0xf7b6,	// (0x00051792) battery_pane_g_ParamLimits

0xf7b6,	// (0x00051792) battery_pane_g

0xa5c5,	// (0x0004c5a1) uni_indicator_pane_g1

0xa5dc,	// (0x0004c5b8) uni_indicator_pane_g2

0xa5f2,	// (0x0004c5ce) uni_indicator_pane_g3

0x0005,

0xf92c,	// (0x00051908) uni_indicator_pane_g

0x463d,	// (0x00046619) navi_icon_pane_ParamLimits

0x463d,	// (0x00046619) navi_icon_pane

0x45c1,	// (0x0004659d) navi_midp_pane

0x4659,	// (0x00046635) navi_navi_pane

0x4663,	// (0x0004663f) navi_text_pane_ParamLimits

0x4663,	// (0x0004663f) navi_text_pane

0xd7e8,	// (0x0004f7c4) status_small_wait_pane_g1

0x07ce,	// (0x000427aa) status_small_wait_pane_g2

0x0001,

0xf927,	// (0x00051903) status_small_wait_pane_g

0xa2d8,	// (0x0004c2b4) navi_navi_icon_text_pane

0xa2e0,	// (0x0004c2bc) navi_navi_pane_g1_ParamLimits

0xa2e0,	// (0x0004c2bc) navi_navi_pane_g1

0xa2f2,	// (0x0004c2ce) navi_navi_pane_g2_ParamLimits

0xa2f2,	// (0x0004c2ce) navi_navi_pane_g2

0x0001,

0xf8f5,	// (0x000518d1) navi_navi_pane_g_ParamLimits

0xf8f5,	// (0x000518d1) navi_navi_pane_g

0xa304,	// (0x0004c2e0) navi_navi_tabs_pane

0xa30d,	// (0x0004c2e9) navi_navi_text_pane

0xa2d8,	// (0x0004c2b4) navi_navi_volume_pane

0xa2b4,	// (0x0004c290) navi_text_pane_t1

0xa2a8,	// (0x0004c284) navi_icon_pane_g1

0xa1fb,	// (0x0004c1d7) navi_navi_text_pane_t1

0x77b4,	// (0x00049790) navi_navi_volume_pane_g1

0x77bc,	// (0x00049798) volume_small_pane

0xa161,	// (0x0004c13d) navi_navi_icon_text_pane_g1

0xa169,	// (0x0004c145) navi_navi_icon_text_pane_t1

0x4659,	// (0x00046635) navi_tabs_2_long_pane

0x4659,	// (0x00046635) navi_tabs_2_pane

0x4659,	// (0x00046635) navi_tabs_3_long_pane

0x4659,	// (0x00046635) navi_tabs_3_pane

0x4659,	// (0x00046635) navi_tabs_4_pane

0x7794,	// (0x00049770) tabs_2_active_pane_ParamLimits

0x7794,	// (0x00049770) tabs_2_active_pane

0x77a4,	// (0x00049780) tabs_2_passive_pane_ParamLimits

0x77a4,	// (0x00049780) tabs_2_passive_pane

0x7762,	// (0x0004973e) tabs_3_active_pane_ParamLimits

0x7762,	// (0x0004973e) tabs_3_active_pane

0x7772,	// (0x0004974e) tabs_3_passive_pane_ParamLimits

0x7772,	// (0x0004974e) tabs_3_passive_pane

0x7783,	// (0x0004975f) tabs_3_passive_pane_cp_ParamLimits

0x7783,	// (0x0004975f) tabs_3_passive_pane_cp

0x7716,	// (0x000496f2) tabs_4_active_pane_ParamLimits

0x7716,	// (0x000496f2) tabs_4_active_pane

0x7729,	// (0x00049705) tabs_4_passive_pane_ParamLimits

0x7729,	// (0x00049705) tabs_4_passive_pane

0x773a,	// (0x00049716) tabs_4_passive_pane_cp_ParamLimits

0x773a,	// (0x00049716) tabs_4_passive_pane_cp

0x774b,	// (0x00049727) tabs_4_passive_pane_cp2_ParamLimits

0x774b,	// (0x00049727) tabs_4_passive_pane_cp2

0x76f2,	// (0x000496ce) tabs_2_long_active_pane_ParamLimits

0x76f2,	// (0x000496ce) tabs_2_long_active_pane

0x7704,	// (0x000496e0) tabs_2_long_passive_pane_ParamLimits

0x7704,	// (0x000496e0) tabs_2_long_passive_pane

0x76b3,	// (0x0004968f) tabs_3_long_active_pane_ParamLimits

0x76b3,	// (0x0004968f) tabs_3_long_active_pane

0x76c6,	// (0x000496a2) tabs_3_long_passive_pane_ParamLimits

0x76c6,	// (0x000496a2) tabs_3_long_passive_pane

0x76df,	// (0x000496bb) tabs_3_long_passive_pane_cp_ParamLimits

0x76df,	// (0x000496bb) tabs_3_long_passive_pane_cp

0x7659,	// (0x00049635) volume_small_pane_g1

0x7662,	// (0x0004963e) volume_small_pane_g2

0x766b,	// (0x00049647) volume_small_pane_g3

0x7674,	// (0x00049650) volume_small_pane_g4

0x767d,	// (0x00049659) volume_small_pane_g5

0x7686,	// (0x00049662) volume_small_pane_g6

0x768f,	// (0x0004966b) volume_small_pane_g7

0x7698,	// (0x00049674) volume_small_pane_g8

0x76a1,	// (0x0004967d) volume_small_pane_g9

0x76aa,	// (0x00049686) volume_small_pane_g10

0x0009,

0xf8c1,	// (0x0005189d) volume_small_pane_g

0xd84c,	// (0x0004f828) bg_active_tab_pane_cp2_ParamLimits

0xd84c,	// (0x0004f828) bg_active_tab_pane_cp2

0x6581,	// (0x0004855d) tabs_3_active_pane_g1

0x6589,	// (0x00048565) tabs_3_active_pane_t1

0xd84c,	// (0x0004f828) bg_passive_tab_pane_cp2_ParamLimits

0xd84c,	// (0x0004f828) bg_passive_tab_pane_cp2

0x6581,	// (0x0004855d) tabs_3_passive_pane_g1

0x6589,	// (0x00048565) tabs_3_passive_pane_t1

0xd84c,	// (0x0004f828) bg_active_tab_pane_cp3_ParamLimits

0xd84c,	// (0x0004f828) bg_active_tab_pane_cp3

0x659b,	// (0x00048577) tabs_4_active_pane_g1

0x65a3,	// (0x0004857f) tabs_4_active_pane_t1

0xd84c,	// (0x0004f828) bg_passive_tab_pane_cp3_ParamLimits

0xd84c,	// (0x0004f828) bg_passive_tab_pane_cp3

0x659b,	// (0x00048577) tabs_4_1_passive_pane_g1

0x65a3,	// (0x0004857f) tabs_4_1_passive_pane_t1

0x8910,	// (0x0004a8ec) list_highlight_pane_cp2

0xa841,	// (0x0004c81d) list_set_pane_ParamLimits

0xa841,	// (0x0004c81d) list_set_pane

0xa909,	// (0x0004c8e5) main_pane_set_t1_ParamLimits

0xa909,	// (0x0004c8e5) main_pane_set_t1

0xa929,	// (0x0004c905) main_pane_set_t2_ParamLimits

0xa929,	// (0x0004c905) main_pane_set_t2

0xa93d,	// (0x0004c919) main_pane_set_t3_ParamLimits

0xa93d,	// (0x0004c919) main_pane_set_t3

0xa951,	// (0x0004c92d) main_pane_set_t4_ParamLimits

0xa951,	// (0x0004c92d) main_pane_set_t4

0x0003,

0xf991,	// (0x0005196d) main_pane_set_t_ParamLimits

0xf991,	// (0x0005196d) main_pane_set_t

0xa965,	// (0x0004c941) setting_code_pane

0xa96f,	// (0x0004c94b) setting_slider_graphic_pane

0xa96f,	// (0x0004c94b) setting_slider_pane

0xa96f,	// (0x0004c94b) setting_text_pane

0xa96f,	// (0x0004c94b) setting_volume_pane

0x65b5,	// (0x00048591) volume_set_pane

0xd84c,	// (0x0004f828) bg_set_opt_pane_cp

0x65bf,	// (0x0004859b) setting_slider_pane_t1

0x65d8,	// (0x000485b4) setting_slider_pane_t2

0x65f2,	// (0x000485ce) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00051540) setting_slider_pane_t

0x660a,	// (0x000485e6) slider_set_pane

0xd7f2,	// (0x0004f7ce) bg_set_opt_pane_cp2

0xd85a,	// (0x0004f836) setting_slider_graphic_pane_g1

0x6620,	// (0x000485fc) setting_slider_graphic_pane_t1

0x6630,	// (0x0004860c) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00051547) setting_slider_graphic_pane_t

0x6640,	// (0x0004861c) slider_set_pane_cp

0xd7f2,	// (0x0004f7ce) input_focus_pane_cp1

0xa802,	// (0x0004c7de) list_set_text_pane

0xd7e8,	// (0x0004f7c4) setting_text_pane_g1

0xd7f2,	// (0x0004f7ce) input_focus_pane_cp2

0xd7e8,	// (0x0004f7c4) setting_code_pane_g1

0xd863,	// (0x0004f83f) setting_code_pane_t1

0x525e,	// (0x0004723a) set_text_pane_t1_ParamLimits

0x525e,	// (0x0004723a) set_text_pane_t1

0x0b63,	// (0x00042b3f) set_opt_bg_pane_g1

0x0b6b,	// (0x00042b47) set_opt_bg_pane_g2

0xa7da,	// (0x0004c7b6) set_opt_bg_pane_g3

0x0b7b,	// (0x00042b57) set_opt_bg_pane_g4

0x0b83,	// (0x00042b5f) set_opt_bg_pane_g5

0x0b8b,	// (0x00042b67) set_opt_bg_pane_g6

0xa7e4,	// (0x0004c7c0) set_opt_bg_pane_g7

0xa7ee,	// (0x0004c7ca) set_opt_bg_pane_g8

0xa7f8,	// (0x0004c7d4) set_opt_bg_pane_g9

0x0008,

0xf97e,	// (0x0005195a) set_opt_bg_pane_g

0xa7cd,	// (0x0004c7a9) slider_set_pane_g1

0x783d,	// (0x00049819) slider_set_pane_g2

0x0006,

0xf96f,	// (0x0005194b) slider_set_pane_g

0x77c5,	// (0x000497a1) volume_set_pane_g1

0x77cf,	// (0x000497ab) volume_set_pane_g2

0x77d9,	// (0x000497b5) volume_set_pane_g3

0x77e3,	// (0x000497bf) volume_set_pane_g4

0x77ed,	// (0x000497c9) volume_set_pane_g5

0x77f7,	// (0x000497d3) volume_set_pane_g6

0x7801,	// (0x000497dd) volume_set_pane_g7

0x780b,	// (0x000497e7) volume_set_pane_g8

0x7815,	// (0x000497f1) volume_set_pane_g9

0x781f,	// (0x000497fb) volume_set_pane_g10

0x0009,

0xf947,	// (0x00051923) volume_set_pane_g

0x6648,	// (0x00048624) indicator_pane_ParamLimits

0x6648,	// (0x00048624) indicator_pane

0x6654,	// (0x00048630) main_idle_pane_g2_ParamLimits

0x6654,	// (0x00048630) main_idle_pane_g2

0x667c,	// (0x00048658) main_pane_idle_g1_ParamLimits

0x667c,	// (0x00048658) main_pane_idle_g1

0xd871,	// (0x0004f84d) popup_clock_digital_analogue_window_ParamLimits

0xd871,	// (0x0004f84d) popup_clock_digital_analogue_window

0x668a,	// (0x00048666) soft_indicator_pane_ParamLimits

0x668a,	// (0x00048666) soft_indicator_pane

0x6698,	// (0x00048674) wallpaper_pane_ParamLimits

0x6698,	// (0x00048674) wallpaper_pane

0xd7e8,	// (0x0004f7c4) wallpaper_pane_g1

0x66a4,	// (0x00048680) indicator_pane_g1_ParamLimits

0x66a4,	// (0x00048680) indicator_pane_g1

0xac29,	// (0x0004cc05) navi_navi_icon_text_pane_srt_g1

0xd89f,	// (0x0004f87b) soft_indicator_pane_t1

0x0560,	// (0x0004253c) aid_ps_area_pane

0x66b0,	// (0x0004868c) aid_ps_clock_pane

0x0571,	// (0x0004254d) aid_ps_indicator_pane

0x057d,	// (0x00042559) indicator_ps_pane_ParamLimits

0x057d,	// (0x00042559) indicator_ps_pane

0x058c,	// (0x00042568) power_save_pane_g1_ParamLimits

0x058c,	// (0x00042568) power_save_pane_g1

0x0598,	// (0x00042574) power_save_pane_g2_ParamLimits

0x0598,	// (0x00042574) power_save_pane_g2

0x60fc,	// (0x000480d8) aid_navinavi_width_pane

0x0560,	// (0x0004253c) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0005154c) power_save_pane_g_ParamLimits

0xf570,	// (0x0005154c) power_save_pane_g

0x05a6,	// (0x00042582) power_save_pane_t1_ParamLimits

0x05a6,	// (0x00042582) power_save_pane_t1

0x66b0,	// (0x0004868c) aid_ps_clock_pane_ParamLimits

0x0571,	// (0x0004254d) aid_ps_indicator_pane_ParamLimits

0x05b8,	// (0x00042594) power_save_pane_t4_ParamLimits

0x05b8,	// (0x00042594) power_save_pane_t4

0x0001,

0xf575,	// (0x00051551) power_save_pane_t_ParamLimits

0xf575,	// (0x00051551) power_save_pane_t

0x05e2,	// (0x000425be) power_save_t3_ParamLimits

0x05e2,	// (0x000425be) power_save_t3

0x05cd,	// (0x000425a9) power_save_t2_ParamLimits

0x05cd,	// (0x000425a9) power_save_t2

0x05f7,	// (0x000425d3) indicator_ps_pane_g1

0x66be,	// (0x0004869a) ai_gene_pane_ParamLimits

0x66be,	// (0x0004869a) ai_gene_pane

0x66ca,	// (0x000486a6) ai_links_pane_ParamLimits

0x66ca,	// (0x000486a6) ai_links_pane

0x66d6,	// (0x000486b2) indicator_pane_cp1_ParamLimits

0x66d6,	// (0x000486b2) indicator_pane_cp1

0x66e2,	// (0x000486be) main_pane_idle_g1_cp_ParamLimits

0x66e2,	// (0x000486be) main_pane_idle_g1_cp

0x0600,	// (0x000425dc) popup_ai_links_title_window

0x66ee,	// (0x000486ca) soft_indicator_pane_cp1_ParamLimits

0x66ee,	// (0x000486ca) soft_indicator_pane_cp1

0xa5b3,	// (0x0004c58f) ai_links_pane_g1

0xa5bc,	// (0x0004c598) grid_ai_links_pane

0xa598,	// (0x0004c574) ai_gene_pane_1

0xa5a1,	// (0x0004c57d) ai_gene_pane_2

0xa5aa,	// (0x0004c586) list_highlight_pane_cp4

0xa578,	// (0x0004c554) cell_ai_link_pane_ParamLimits

0xa578,	// (0x0004c554) cell_ai_link_pane

0xa570,	// (0x0004c54c) cell_ai_link_pane_g1

0x07ce,	// (0x000427aa) cell_ai_link_pane_g2

0x0001,

0xf922,	// (0x000518fe) cell_ai_link_pane_g

0xd7f2,	// (0x0004f7ce) grid_highlight_cp2

0xd7f2,	// (0x0004f7ce) bg_popup_sub_pane_cp1

0x0617,	// (0x000425f3) popup_ai_links_title_window_t1

0xa4bc,	// (0x0004c498) ai_gene_pane_1_g1_ParamLimits

0xa4bc,	// (0x0004c498) ai_gene_pane_1_g1

0xa4c8,	// (0x0004c4a4) ai_gene_pane_1_g2_ParamLimits

0xa4c8,	// (0x0004c4a4) ai_gene_pane_1_g2

0x0001,

0xf918,	// (0x000518f4) ai_gene_pane_1_g_ParamLimits

0xf918,	// (0x000518f4) ai_gene_pane_1_g

0xa4d5,	// (0x0004c4b1) ai_gene_pane_1_t1_ParamLimits

0xa4d5,	// (0x0004c4b1) ai_gene_pane_1_t1

0xa509,	// (0x0004c4e5) grid_ai_soft_ind_pane

0xa4a7,	// (0x0004c483) ai_gene_pane_2_t1_ParamLimits

0xa4a7,	// (0x0004c483) ai_gene_pane_2_t1

0x66fa,	// (0x000486d6) main_pane_empty_t1_ParamLimits

0x66fa,	// (0x000486d6) main_pane_empty_t1

0x6712,	// (0x000486ee) main_pane_empty_t2_ParamLimits

0x6712,	// (0x000486ee) main_pane_empty_t2

0x6727,	// (0x00048703) main_pane_empty_t3_ParamLimits

0x6727,	// (0x00048703) main_pane_empty_t3

0x6739,	// (0x00048715) main_pane_empty_t4_ParamLimits

0x6739,	// (0x00048715) main_pane_empty_t4

0x674b,	// (0x00048727) main_pane_empty_t5_ParamLimits

0x674b,	// (0x00048727) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00051556) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00051556) main_pane_empty_t

0x0bb4,	// (0x00042b90) bg_popup_window_pane_ParamLimits

0x0bb4,	// (0x00042b90) bg_popup_window_pane

0xa209,	// (0x0004c1e5) find_popup_pane_cp2_ParamLimits

0xa209,	// (0x0004c1e5) find_popup_pane_cp2

0xa215,	// (0x0004c1f1) heading_pane_ParamLimits

0xa215,	// (0x0004c1f1) heading_pane

0xd7f2,	// (0x0004f7ce) bg_popup_sub_pane

0xa183,	// (0x0004c15f) bg_popup_window_pane_g1_ParamLimits

0xa183,	// (0x0004c15f) bg_popup_window_pane_g1

0xa18f,	// (0x0004c16b) bg_popup_window_pane_g2_ParamLimits

0xa18f,	// (0x0004c16b) bg_popup_window_pane_g2

0xa19b,	// (0x0004c177) bg_popup_window_pane_g3_ParamLimits

0xa19b,	// (0x0004c177) bg_popup_window_pane_g3

0xa1a7,	// (0x0004c183) bg_popup_window_pane_g4_ParamLimits

0xa1a7,	// (0x0004c183) bg_popup_window_pane_g4

0xa1b3,	// (0x0004c18f) bg_popup_window_pane_g5_ParamLimits

0xa1b3,	// (0x0004c18f) bg_popup_window_pane_g5

0xa1bf,	// (0x0004c19b) bg_popup_window_pane_g6_ParamLimits

0xa1bf,	// (0x0004c19b) bg_popup_window_pane_g6

0xa1cb,	// (0x0004c1a7) bg_popup_window_pane_g7_ParamLimits

0xa1cb,	// (0x0004c1a7) bg_popup_window_pane_g7

0xa1d7,	// (0x0004c1b3) bg_popup_window_pane_g8_ParamLimits

0xa1d7,	// (0x0004c1b3) bg_popup_window_pane_g8

0xa1e3,	// (0x0004c1bf) bg_popup_window_pane_g9_ParamLimits

0xa1e3,	// (0x0004c1bf) bg_popup_window_pane_g9

0xa1ef,	// (0x0004c1cb) bg_popup_window_pane_g10_ParamLimits

0xa1ef,	// (0x0004c1cb) bg_popup_window_pane_g10

0x0009,

0xf8e0,	// (0x000518bc) bg_popup_window_pane_g_ParamLimits

0xf8e0,	// (0x000518bc) bg_popup_window_pane_g

0xa118,	// (0x0004c0f4) bg_popup_heading_pane_ParamLimits

0xa118,	// (0x0004c0f4) bg_popup_heading_pane

0x78c3,	// (0x0004989f) tabs_4_passive_pane_cp_srt_ParamLimits

0x78c3,	// (0x0004989f) tabs_4_passive_pane_cp_srt

0x78d5,	// (0x000498b1) tabs_4_passive_pane_srt_ParamLimits

0xa12c,	// (0x0004c108) heading_pane_g2

0x78d5,	// (0x000498b1) tabs_4_passive_pane_srt

0x8910,	// (0x0004a8ec) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8910,	// (0x0004a8ec) bg_passive_tab_pane_cp3_srt

0xa134,	// (0x0004c110) heading_pane_t1_ParamLimits

0xa134,	// (0x0004c110) heading_pane_t1

0xa14b,	// (0x0004c127) heading_pane_t2_ParamLimits

0xa14b,	// (0x0004c127) heading_pane_t2

0x0001,

0xf8db,	// (0x000518b7) heading_pane_t_ParamLimits

0xf8db,	// (0x000518b7) heading_pane_t

0x9c43,	// (0x0004bc1f) bg_popup_heading_pane_g1

0x9cf2,	// (0x0004bcce) bg_popup_heading_pane_g2

0x9cfc,	// (0x0004bcd8) bg_popup_heading_pane_g3

0x9d06,	// (0x0004bce2) bg_popup_heading_pane_g4

0x9d10,	// (0x0004bcec) bg_popup_heading_pane_g5

0x9d1a,	// (0x0004bcf6) bg_popup_heading_pane_g6

0x9d22,	// (0x0004bcfe) bg_popup_heading_pane_g7

0x9d2a,	// (0x0004bd06) bg_popup_heading_pane_g8

0x9d34,	// (0x0004bd10) bg_popup_heading_pane_g9

0x0008,

0xf897,	// (0x00051873) bg_popup_heading_pane_g

0x9451,	// (0x0004b42d) bg_popup_sub_pane_g1

0x9459,	// (0x0004b435) bg_popup_sub_pane_g2

0x9461,	// (0x0004b43d) bg_popup_sub_pane_g3

0x9469,	// (0x0004b445) bg_popup_sub_pane_g4

0x9471,	// (0x0004b44d) bg_popup_sub_pane_g5

0x9479,	// (0x0004b455) bg_popup_sub_pane_g6

0x9481,	// (0x0004b45d) bg_popup_sub_pane_g7

0x9489,	// (0x0004b465) bg_popup_sub_pane_g8

0x9491,	// (0x0004b46d) bg_popup_sub_pane_g9

0x0008,

0xf871,	// (0x0005184d) bg_popup_sub_pane_g

0xd8b9,	// (0x0004f895) bg_popup_window_pane_cp5_ParamLimits

0xd8b9,	// (0x0004f895) bg_popup_window_pane_cp5

0x0634,	// (0x00042610) popup_note_window_g1_ParamLimits

0x0634,	// (0x00042610) popup_note_window_g1

0x0640,	// (0x0004261c) popup_note_window_t1_ParamLimits

0x0640,	// (0x0004261c) popup_note_window_t1

0x0656,	// (0x00042632) popup_note_window_t2_ParamLimits

0x0656,	// (0x00042632) popup_note_window_t2

0x066c,	// (0x00042648) popup_note_window_t3_ParamLimits

0x066c,	// (0x00042648) popup_note_window_t3

0x0682,	// (0x0004265e) popup_note_window_t4_ParamLimits

0x0682,	// (0x0004265e) popup_note_window_t4

0x06aa,	// (0x00042686) popup_note_window_t5_ParamLimits

0x06aa,	// (0x00042686) popup_note_window_t5

0x0004,

0xf585,	// (0x00051561) popup_note_window_t_ParamLimits

0xf585,	// (0x00051561) popup_note_window_t

0x06ce,	// (0x000426aa) bg_popup_window_pane_cp6_ParamLimits

0x06ce,	// (0x000426aa) bg_popup_window_pane_cp6

0x9bbf,	// (0x0004bb9b) popup_note_image_window_g1_ParamLimits

0x9bbf,	// (0x0004bb9b) popup_note_image_window_g1

0x9bcb,	// (0x0004bba7) popup_note_image_window_g2_ParamLimits

0x9bcb,	// (0x0004bba7) popup_note_image_window_g2

0x0001,

0xf865,	// (0x00051841) popup_note_image_window_g_ParamLimits

0xf865,	// (0x00051841) popup_note_image_window_g

0x9be4,	// (0x0004bbc0) popup_note_image_window_t1_ParamLimits

0x9be4,	// (0x0004bbc0) popup_note_image_window_t1

0x9bfd,	// (0x0004bbd9) popup_note_image_window_t2_ParamLimits

0x9bfd,	// (0x0004bbd9) popup_note_image_window_t2

0x9c16,	// (0x0004bbf2) popup_note_image_window_t3_ParamLimits

0x9c16,	// (0x0004bbf2) popup_note_image_window_t3

0x0002,

0xf86a,	// (0x00051846) popup_note_image_window_t_ParamLimits

0xf86a,	// (0x00051846) popup_note_image_window_t

0x9a7f,	// (0x0004ba5b) bg_popup_window_pane_cp7_ParamLimits

0x9a7f,	// (0x0004ba5b) bg_popup_window_pane_cp7

0x9aaf,	// (0x0004ba8b) popup_note_wait_window_g1_ParamLimits

0x9aaf,	// (0x0004ba8b) popup_note_wait_window_g1

0x9abb,	// (0x0004ba97) popup_note_wait_window_g2_ParamLimits

0x9abb,	// (0x0004ba97) popup_note_wait_window_g2

0x0002,

0xf853,	// (0x0005182f) popup_note_wait_window_g_ParamLimits

0xf853,	// (0x0005182f) popup_note_wait_window_g

0x9ad3,	// (0x0004baaf) popup_note_wait_window_t1_ParamLimits

0x9ad3,	// (0x0004baaf) popup_note_wait_window_t1

0x9afa,	// (0x0004bad6) popup_note_wait_window_t2_ParamLimits

0x9afa,	// (0x0004bad6) popup_note_wait_window_t2

0x9b18,	// (0x0004baf4) popup_note_wait_window_t3_ParamLimits

0x9b18,	// (0x0004baf4) popup_note_wait_window_t3

0x9b2b,	// (0x0004bb07) popup_note_wait_window_t4_ParamLimits

0x9b2b,	// (0x0004bb07) popup_note_wait_window_t4

0x0004,

0xf85a,	// (0x00051836) popup_note_wait_window_t_ParamLimits

0xf85a,	// (0x00051836) popup_note_wait_window_t

0x9b50,	// (0x0004bb2c) wait_bar_pane_ParamLimits

0x9b50,	// (0x0004bb2c) wait_bar_pane

0xd7f2,	// (0x0004f7ce) wait_anim_pane

0xd7f2,	// (0x0004f7ce) wait_border_pane

0xd7e8,	// (0x0004f7c4) wait_anim_pane_g1

0xd7e8,	// (0x0004f7c4) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x000516ea) wait_anim_pane_g

0x9a23,	// (0x0004b9ff) wait_border_pane_g1

0x9a2e,	// (0x0004ba0a) wait_border_pane_g2

0x9a37,	// (0x0004ba13) wait_border_pane_g3

0x0002,

0xf84c,	// (0x00051828) wait_border_pane_g

0x988d,	// (0x0004b869) bg_popup_window_pane_cp16_ParamLimits

0x988d,	// (0x0004b869) bg_popup_window_pane_cp16

0x998d,	// (0x0004b969) indicator_popup_pane_cp4_ParamLimits

0x998d,	// (0x0004b969) indicator_popup_pane_cp4

0x99a1,	// (0x0004b97d) popup_query_data_window_t1_ParamLimits

0x99a1,	// (0x0004b97d) popup_query_data_window_t1

0x99b3,	// (0x0004b98f) popup_query_data_window_t2_ParamLimits

0x99b3,	// (0x0004b98f) popup_query_data_window_t2

0x99cc,	// (0x0004b9a8) popup_query_data_window_t3_ParamLimits

0x99cc,	// (0x0004b9a8) popup_query_data_window_t3

0x0002,

0xf845,	// (0x00051821) popup_query_data_window_t_ParamLimits

0xf845,	// (0x00051821) popup_query_data_window_t

0x99e6,	// (0x0004b9c2) query_popup_data_pane_ParamLimits

0x99e6,	// (0x0004b9c2) query_popup_data_pane

0x99fa,	// (0x0004b9d6) query_popup_data_pane_cp1_ParamLimits

0x99fa,	// (0x0004b9d6) query_popup_data_pane_cp1

0x988d,	// (0x0004b869) bg_popup_window_pane_cp10_ParamLimits

0x988d,	// (0x0004b869) bg_popup_window_pane_cp10

0x98bf,	// (0x0004b89b) indicator_popup_pane_ParamLimits

0x98bf,	// (0x0004b89b) indicator_popup_pane

0x98e1,	// (0x0004b8bd) popup_query_code_window_t1_ParamLimits

0x98e1,	// (0x0004b8bd) popup_query_code_window_t1

0x98fb,	// (0x0004b8d7) popup_query_code_window_t2_ParamLimits

0x98fb,	// (0x0004b8d7) popup_query_code_window_t2

0x9944,	// (0x0004b920) popup_query_code_window_t3_ParamLimits

0x9944,	// (0x0004b920) popup_query_code_window_t3

0x0002,

0xf83e,	// (0x0005181a) popup_query_code_window_t_ParamLimits

0xf83e,	// (0x0005181a) popup_query_code_window_t

0x9973,	// (0x0004b94f) query_popup_pane_ParamLimits

0x9973,	// (0x0004b94f) query_popup_pane

0x06ce,	// (0x000426aa) bg_popup_window_pane_cp15_ParamLimits

0x06ce,	// (0x000426aa) bg_popup_window_pane_cp15

0x06ee,	// (0x000426ca) indicator_popup_pane_cp1_ParamLimits

0x06ee,	// (0x000426ca) indicator_popup_pane_cp1

0x0701,	// (0x000426dd) indicator_popup_pane_cp2_ParamLimits

0x0701,	// (0x000426dd) indicator_popup_pane_cp2

0x071c,	// (0x000426f8) popup_query_data_code_window_g1_ParamLimits

0x071c,	// (0x000426f8) popup_query_data_code_window_g1

0x072f,	// (0x0004270b) popup_query_data_code_window_t1_ParamLimits

0x072f,	// (0x0004270b) popup_query_data_code_window_t1

0x0741,	// (0x0004271d) popup_query_data_code_window_t2_ParamLimits

0x0741,	// (0x0004271d) popup_query_data_code_window_t2

0x0753,	// (0x0004272f) popup_query_data_code_window_t3_ParamLimits

0x0753,	// (0x0004272f) popup_query_data_code_window_t3

0x0769,	// (0x00042745) popup_query_data_code_window_t4_ParamLimits

0x0769,	// (0x00042745) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0005156c) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0005156c) popup_query_data_code_window_t

0x460d,	// (0x000465e9) list_single_midp_graphic_pane_g3

0x0783,	// (0x0004275f) query_popup_data_pane_cp2_ParamLimits

0x0796,	// (0x00042772) query_popup_pane_cp2_ParamLimits

0x0796,	// (0x00042772) query_popup_pane_cp2

0xd7f2,	// (0x0004f7ce) bg_popup_window_pane_cp11

0x9885,	// (0x0004b861) heading_pane_cp5

0x082c,	// (0x00042808) listscroll_popup_info_pane

0xd7f2,	// (0x0004f7ce) input_focus_pane_cp3

0x07b1,	// (0x0004278d) query_popup_pane_t1

0x07bf,	// (0x0004279b) list_popup_info_pane_ParamLimits

0x07bf,	// (0x0004279b) list_popup_info_pane

0x07ce,	// (0x000427aa) listscroll_popup_info_pane_g1

0x07d6,	// (0x000427b2) scroll_pane_cp7

0x07e0,	// (0x000427bc) popup_info_list_pane_t1_ParamLimits

0x07e0,	// (0x000427bc) popup_info_list_pane_t1

0x07fa,	// (0x000427d6) popup_info_list_pane_t2_ParamLimits

0x07fa,	// (0x000427d6) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00051575) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00051575) popup_info_list_pane_t

0xd7f2,	// (0x0004f7ce) bg_popup_window_pane_cp12

0xac43,	// (0x0004cc1f) find_popup_pane

0xd84c,	// (0x0004f828) bg_popup_window_pane_cp3

0x0814,	// (0x000427f0) heading_pane_cp3

0x0820,	// (0x000427fc) listscroll_popup_graphic_pane

0xd7f2,	// (0x0004f7ce) bg_popup_window_pane_cp4

0x67ad,	// (0x00048789) heading_pane_cp4

0x082c,	// (0x00042808) listscroll_popup_colour_pane

0x67b7,	// (0x00048793) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x67b7,	// (0x00048793) cell_large_graphic_colour_none_popup_pane

0x67cb,	// (0x000487a7) grid_large_graphic_colour_popup_pane_ParamLimits

0x67cb,	// (0x000487a7) grid_large_graphic_colour_popup_pane

0x67f7,	// (0x000487d3) listscroll_popup_colour_pane_g1_ParamLimits

0x67f7,	// (0x000487d3) listscroll_popup_colour_pane_g1

0x680e,	// (0x000487ea) listscroll_popup_colour_pane_g2_ParamLimits

0x680e,	// (0x000487ea) listscroll_popup_colour_pane_g2

0x6825,	// (0x00048801) listscroll_popup_colour_pane_g3_ParamLimits

0x6825,	// (0x00048801) listscroll_popup_colour_pane_g3

0x6835,	// (0x00048811) listscroll_popup_colour_pane_g4_ParamLimits

0x6835,	// (0x00048811) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0005157a) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0005157a) listscroll_popup_colour_pane_g

0x0834,	// (0x00042810) scroll_pane_cp6_ParamLimits

0x0834,	// (0x00042810) scroll_pane_cp6

0x6849,	// (0x00048825) cell_large_graphic_colour_popup_pane_ParamLimits

0x6849,	// (0x00048825) cell_large_graphic_colour_popup_pane

0x0846,	// (0x00042822) cell_large_graphic_colour_none_popup_pane_t1

0xd7f2,	// (0x0004f7ce) grid_highlight_pane_cp5

0x0855,	// (0x00042831) cell_large_graphic_colour_popup_pane_g1

0x085d,	// (0x00042839) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00051583) cell_large_graphic_colour_popup_pane_g

0x0865,	// (0x00042841) cell_large_graphic_colour_popup_pane_g2_copy1

0x086e,	// (0x0004284a) grid_highlight_pane_cp4

0x0876,	// (0x00042852) bg_popup_window_pane_cp8_ParamLimits

0x0876,	// (0x00042852) bg_popup_window_pane_cp8

0x0891,	// (0x0004286d) popup_snote_single_text_window_g1_ParamLimits

0x0891,	// (0x0004286d) popup_snote_single_text_window_g1

0x08a3,	// (0x0004287f) popup_snote_single_text_window_t1_ParamLimits

0x08a3,	// (0x0004287f) popup_snote_single_text_window_t1

0x08b6,	// (0x00042892) popup_snote_single_text_window_t2_ParamLimits

0x08b6,	// (0x00042892) popup_snote_single_text_window_t2

0x08c9,	// (0x000428a5) popup_snote_single_text_window_t3_ParamLimits

0x08c9,	// (0x000428a5) popup_snote_single_text_window_t3

0x0902,	// (0x000428de) popup_snote_single_text_window_t4_ParamLimits

0x0902,	// (0x000428de) popup_snote_single_text_window_t4

0x0936,	// (0x00042912) popup_snote_single_text_window_t5_ParamLimits

0x0936,	// (0x00042912) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x00051588) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x00051588) popup_snote_single_text_window_t

0x0965,	// (0x00042941) bg_popup_window_pane_cp9_ParamLimits

0x0965,	// (0x00042941) bg_popup_window_pane_cp9

0x0891,	// (0x0004286d) popup_snote_single_graphic_window_g1_ParamLimits

0x0891,	// (0x0004286d) popup_snote_single_graphic_window_g1

0x0973,	// (0x0004294f) popup_snote_single_graphic_window_g2_ParamLimits

0x0973,	// (0x0004294f) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00051593) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00051593) popup_snote_single_graphic_window_g

0x097f,	// (0x0004295b) popup_snote_single_graphic_window_t1_ParamLimits

0x097f,	// (0x0004295b) popup_snote_single_graphic_window_t1

0x0992,	// (0x0004296e) popup_snote_single_graphic_window_t2_ParamLimits

0x0992,	// (0x0004296e) popup_snote_single_graphic_window_t2

0x09a5,	// (0x00042981) popup_snote_single_graphic_window_t3_ParamLimits

0x09a5,	// (0x00042981) popup_snote_single_graphic_window_t3

0x09de,	// (0x000429ba) popup_snote_single_graphic_window_t4_ParamLimits

0x09de,	// (0x000429ba) popup_snote_single_graphic_window_t4

0x0a12,	// (0x000429ee) popup_snote_single_graphic_window_t5_ParamLimits

0x0a12,	// (0x000429ee) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x00051598) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x00051598) popup_snote_single_graphic_window_t

0xab81,	// (0x0004cb5d) grid_graphic_popup_pane_ParamLimits

0xab81,	// (0x0004cb5d) grid_graphic_popup_pane

0xabaf,	// (0x0004cb8b) listscroll_popup_graphic_pane_g1_ParamLimits

0xabaf,	// (0x0004cb8b) listscroll_popup_graphic_pane_g1

0xabc3,	// (0x0004cb9f) listscroll_popup_graphic_pane_g2_ParamLimits

0xabc3,	// (0x0004cb9f) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bb,	// (0x00051997) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bb,	// (0x00051997) listscroll_popup_graphic_pane_g

0xabd7,	// (0x0004cbb3) scroll_pane_cp5

0xab29,	// (0x0004cb05) cell_graphic_popup_pane_ParamLimits

0xab29,	// (0x0004cb05) cell_graphic_popup_pane

0xab0a,	// (0x0004cae6) cell_graphic_popup_pane_g1

0xab12,	// (0x0004caee) cell_graphic_popup_pane_g2

0x0865,	// (0x00042841) cell_graphic_popup_pane_g3

0x0002,

0xf9b4,	// (0x00051990) cell_graphic_popup_pane_g

0xab1b,	// (0x0004caf7) cell_graphic_popup_pane_t2

0x086e,	// (0x0004284a) grid_highlight_pane_cp3

0x0a53,	// (0x00042a2f) list_gen_pane_ParamLimits

0x0a53,	// (0x00042a2f) list_gen_pane

0x0a7b,	// (0x00042a57) scroll_pane

0xaa62,	// (0x0004ca3e) bg_list_pane_g1_ParamLimits

0xaa62,	// (0x0004ca3e) bg_list_pane_g1

0xaa7f,	// (0x0004ca5b) bg_list_pane_g2_ParamLimits

0xaa7f,	// (0x0004ca5b) bg_list_pane_g2

0xaa94,	// (0x0004ca70) bg_list_pane_g3_ParamLimits

0xaa94,	// (0x0004ca70) bg_list_pane_g3

0xaaa8,	// (0x0004ca84) bg_list_pane_g4_ParamLimits

0xaaa8,	// (0x0004ca84) bg_list_pane_g4

0xaabc,	// (0x0004ca98) bg_list_pane_g5_ParamLimits

0xaabc,	// (0x0004ca98) bg_list_pane_g5

0x0004,

0xf9a9,	// (0x00051985) bg_list_pane_g_ParamLimits

0xf9a9,	// (0x00051985) bg_list_pane_g

0x785f,	// (0x0004983b) list_double2_graphic_large_graphic_pane_ParamLimits

0x785f,	// (0x0004983b) list_double2_graphic_large_graphic_pane

0x785f,	// (0x0004983b) list_double2_graphic_pane_ParamLimits

0x785f,	// (0x0004983b) list_double2_graphic_pane

0x785f,	// (0x0004983b) list_double2_large_graphic_pane_ParamLimits

0x785f,	// (0x0004983b) list_double2_large_graphic_pane

0x785f,	// (0x0004983b) list_double2_pane_ParamLimits

0x785f,	// (0x0004983b) list_double2_pane

0x785f,	// (0x0004983b) list_double_graphic_heading_pane_ParamLimits

0x785f,	// (0x0004983b) list_double_graphic_heading_pane

0x785f,	// (0x0004983b) list_double_graphic_pane_ParamLimits

0x785f,	// (0x0004983b) list_double_graphic_pane

0x785f,	// (0x0004983b) list_double_heading_pane_ParamLimits

0x785f,	// (0x0004983b) list_double_heading_pane

0x785f,	// (0x0004983b) list_double_large_graphic_pane_ParamLimits

0x785f,	// (0x0004983b) list_double_large_graphic_pane

0x785f,	// (0x0004983b) list_double_number_pane_ParamLimits

0x785f,	// (0x0004983b) list_double_number_pane

0x785f,	// (0x0004983b) list_double_pane_ParamLimits

0x785f,	// (0x0004983b) list_double_pane

0x785f,	// (0x0004983b) list_double_time_pane_ParamLimits

0x785f,	// (0x0004983b) list_double_time_pane

0x785f,	// (0x0004983b) list_setting_number_pane_ParamLimits

0x785f,	// (0x0004983b) list_setting_number_pane

0x785f,	// (0x0004983b) list_setting_pane_ParamLimits

0x785f,	// (0x0004983b) list_setting_pane

0xaa1e,	// (0x0004c9fa) list_single_2graphic_pane_ParamLimits

0xaa1e,	// (0x0004c9fa) list_single_2graphic_pane

0xaa1e,	// (0x0004c9fa) list_single_graphic_heading_pane_ParamLimits

0xaa1e,	// (0x0004c9fa) list_single_graphic_heading_pane

0xaa1e,	// (0x0004c9fa) list_single_graphic_pane_ParamLimits

0xaa1e,	// (0x0004c9fa) list_single_graphic_pane

0xaa1e,	// (0x0004c9fa) list_single_heading_pane_ParamLimits

0xaa1e,	// (0x0004c9fa) list_single_heading_pane

0x7887,	// (0x00049863) list_single_large_graphic_pane_ParamLimits

0x7887,	// (0x00049863) list_single_large_graphic_pane

0xaa1e,	// (0x0004c9fa) list_single_number_heading_pane_ParamLimits

0xaa1e,	// (0x0004c9fa) list_single_number_heading_pane

0xaa1e,	// (0x0004c9fa) list_single_number_pane_ParamLimits

0xaa1e,	// (0x0004c9fa) list_single_number_pane

0xaa1e,	// (0x0004c9fa) list_single_pane_ParamLimits

0xaa1e,	// (0x0004c9fa) list_single_pane

0xd7f2,	// (0x0004f7ce) list_highlight_pane_cp1

0x29e2,	// (0x000449be) list_single_pane_g1_ParamLimits

0x29e2,	// (0x000449be) list_single_pane_g1

0x6878,	// (0x00048854) list_single_pane_g2_ParamLimits

0x6878,	// (0x00048854) list_single_pane_g2

0x0001,

0xf5d8,	// (0x000515b4) list_single_pane_g_ParamLimits

0xf5d8,	// (0x000515b4) list_single_pane_g

0x5ba4,	// (0x00047b80) list_single_pane_t1_ParamLimits

0x5ba4,	// (0x00047b80) list_single_pane_t1

0x29e2,	// (0x000449be) list_single_number_pane_g1_ParamLimits

0x29e2,	// (0x000449be) list_single_number_pane_g1

0x6878,	// (0x00048854) list_single_number_pane_g2_ParamLimits

0x6878,	// (0x00048854) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x000515b4) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x000515b4) list_single_number_pane_g

0x5b46,	// (0x00047b22) list_single_number_pane_t1_ParamLimits

0x5b46,	// (0x00047b22) list_single_number_pane_t1

0x5b5c,	// (0x00047b38) list_single_number_pane_t2_ParamLimits

0x5b5c,	// (0x00047b38) list_single_number_pane_t2

0x0001,

0xf96a,	// (0x00051946) list_single_number_pane_t_ParamLimits

0xf96a,	// (0x00051946) list_single_number_pane_t

0x5277,	// (0x00047253) list_single_graphic_pane_g1_ParamLimits

0x5277,	// (0x00047253) list_single_graphic_pane_g1

0x29e2,	// (0x000449be) list_single_graphic_pane_g2_ParamLimits

0x29e2,	// (0x000449be) list_single_graphic_pane_g2

0x6878,	// (0x00048854) list_single_graphic_pane_g3_ParamLimits

0x6878,	// (0x00048854) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x000515a3) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x000515a3) list_single_graphic_pane_g

0x5283,	// (0x0004725f) list_single_graphic_pane_t1_ParamLimits

0x5283,	// (0x0004725f) list_single_graphic_pane_t1

0x5299,	// (0x00047275) list_single_heading_pane_g1_ParamLimits

0x5299,	// (0x00047275) list_single_heading_pane_g1

0x6878,	// (0x00048854) list_single_heading_pane_g2_ParamLimits

0x6878,	// (0x00048854) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x000515aa) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x000515aa) list_single_heading_pane_g

0x52ac,	// (0x00047288) list_single_heading_pane_t1_ParamLimits

0x52ac,	// (0x00047288) list_single_heading_pane_t1

0x6884,	// (0x00048860) list_single_heading_pane_t2_ParamLimits

0x6884,	// (0x00048860) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x000515af) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x000515af) list_single_heading_pane_t

0x29e2,	// (0x000449be) list_single_number_heading_pane_g1_ParamLimits

0x29e2,	// (0x000449be) list_single_number_heading_pane_g1

0x6878,	// (0x00048854) list_single_number_heading_pane_g2_ParamLimits

0x6878,	// (0x00048854) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x000515b4) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x000515b4) list_single_number_heading_pane_g

0x52c2,	// (0x0004729e) list_single_number_heading_pane_t1_ParamLimits

0x52c2,	// (0x0004729e) list_single_number_heading_pane_t1

0x52d8,	// (0x000472b4) list_single_number_heading_pane_t2_ParamLimits

0x52d8,	// (0x000472b4) list_single_number_heading_pane_t2

0x52ea,	// (0x000472c6) list_single_number_heading_pane_t3_ParamLimits

0x52ea,	// (0x000472c6) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x000515b9) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x000515b9) list_single_number_heading_pane_t

0x52fc,	// (0x000472d8) list_single_graphic_heading_pane_g1_ParamLimits

0x52fc,	// (0x000472d8) list_single_graphic_heading_pane_g1

0x6896,	// (0x00048872) list_single_graphic_heading_pane_g4_ParamLimits

0x6896,	// (0x00048872) list_single_graphic_heading_pane_g4

0x6878,	// (0x00048854) list_single_graphic_heading_pane_g5_ParamLimits

0x6878,	// (0x00048854) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x000515c0) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x000515c0) list_single_graphic_heading_pane_g

0x52c2,	// (0x0004729e) list_single_graphic_heading_pane_t1_ParamLimits

0x52c2,	// (0x0004729e) list_single_graphic_heading_pane_t1

0x5314,	// (0x000472f0) list_single_graphic_heading_pane_t2_ParamLimits

0x5314,	// (0x000472f0) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x000515c7) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x000515c7) list_single_graphic_heading_pane_t

0x68a7,	// (0x00048883) list_single_large_graphic_pane_g1_ParamLimits

0x68a7,	// (0x00048883) list_single_large_graphic_pane_g1

0x68b3,	// (0x0004888f) list_single_large_graphic_pane_g2_ParamLimits

0x68b3,	// (0x0004888f) list_single_large_graphic_pane_g2

0x68bf,	// (0x0004889b) list_single_large_graphic_pane_g3_ParamLimits

0x68bf,	// (0x0004889b) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x000515cc) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x000515cc) list_single_large_graphic_pane_g

0x9a2e,	// (0x0004ba0a) wait_border_pane_g2_copy1

0x68cb,	// (0x000488a7) list_single_large_graphic_pane_g4_cp2

0x532c,	// (0x00047308) list_single_large_graphic_pane_t1_ParamLimits

0x532c,	// (0x00047308) list_single_large_graphic_pane_t1

0x68d3,	// (0x000488af) list_double_pane_g1_ParamLimits

0x68d3,	// (0x000488af) list_double_pane_g1

0x68df,	// (0x000488bb) list_double_pane_g2_ParamLimits

0x68df,	// (0x000488bb) list_double_pane_g2

0x0001,

0xf5f7,	// (0x000515d3) list_double_pane_g_ParamLimits

0xf5f7,	// (0x000515d3) list_double_pane_g

0x5342,	// (0x0004731e) list_double_pane_t1_ParamLimits

0x5342,	// (0x0004731e) list_double_pane_t1

0x5358,	// (0x00047334) list_double_pane_t2_ParamLimits

0x5358,	// (0x00047334) list_double_pane_t2

0x0001,

0xf5fc,	// (0x000515d8) list_double_pane_t_ParamLimits

0xf5fc,	// (0x000515d8) list_double_pane_t

0x536a,	// (0x00047346) list_double2_pane_g1_ParamLimits

0x536a,	// (0x00047346) list_double2_pane_g1

0x537b,	// (0x00047357) list_double2_pane_g2_ParamLimits

0x537b,	// (0x00047357) list_double2_pane_g2

0x0001,

0xf601,	// (0x000515dd) list_double2_pane_g_ParamLimits

0xf601,	// (0x000515dd) list_double2_pane_g

0x5387,	// (0x00047363) list_double2_pane_t1_ParamLimits

0x5387,	// (0x00047363) list_double2_pane_t1

0x539d,	// (0x00047379) list_double2_pane_t2_ParamLimits

0x539d,	// (0x00047379) list_double2_pane_t2

0x0001,

0xf606,	// (0x000515e2) list_double2_pane_t_ParamLimits

0xf606,	// (0x000515e2) list_double2_pane_t

0x68d3,	// (0x000488af) list_double_number_pane_g1_ParamLimits

0x68d3,	// (0x000488af) list_double_number_pane_g1

0x68df,	// (0x000488bb) list_double_number_pane_g2_ParamLimits

0x68df,	// (0x000488bb) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x000515d3) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x000515d3) list_double_number_pane_g

0x53af,	// (0x0004738b) list_double_number_pane_t1_ParamLimits

0x53af,	// (0x0004738b) list_double_number_pane_t1

0x53c1,	// (0x0004739d) list_double_number_pane_t2_ParamLimits

0x53c1,	// (0x0004739d) list_double_number_pane_t2

0x53d7,	// (0x000473b3) list_double_number_pane_t3_ParamLimits

0x53d7,	// (0x000473b3) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x000515e7) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x000515e7) list_double_number_pane_t

0x53e9,	// (0x000473c5) list_double_graphic_pane_g1_ParamLimits

0x53e9,	// (0x000473c5) list_double_graphic_pane_g1

0x53f5,	// (0x000473d1) list_double_graphic_pane_g2_ParamLimits

0x53f5,	// (0x000473d1) list_double_graphic_pane_g2

0x5404,	// (0x000473e0) list_double_graphic_pane_g3_ParamLimits

0x5404,	// (0x000473e0) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x000515ee) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x000515ee) list_double_graphic_pane_g

0x541c,	// (0x000473f8) list_double_graphic_pane_t1_ParamLimits

0x541c,	// (0x000473f8) list_double_graphic_pane_t1

0x5432,	// (0x0004740e) list_double_graphic_pane_t2_ParamLimits

0x5432,	// (0x0004740e) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x000515f7) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x000515f7) list_double_graphic_pane_t

0x5444,	// (0x00047420) list_double2_graphic_pane_g1_ParamLimits

0x5444,	// (0x00047420) list_double2_graphic_pane_g1

0x68eb,	// (0x000488c7) list_double2_graphic_pane_g2_ParamLimits

0x68eb,	// (0x000488c7) list_double2_graphic_pane_g2

0x68f7,	// (0x000488d3) list_double2_graphic_pane_g3_ParamLimits

0x68f7,	// (0x000488d3) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x000515fc) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x000515fc) list_double2_graphic_pane_g

0x5450,	// (0x0004742c) list_double2_graphic_pane_t1_ParamLimits

0x5450,	// (0x0004742c) list_double2_graphic_pane_t1

0x5466,	// (0x00047442) list_double2_graphic_pane_t2_ParamLimits

0x5466,	// (0x00047442) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x00051603) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x00051603) list_double2_graphic_pane_t

0x5478,	// (0x00047454) list_double_large_graphic_pane_g1_ParamLimits

0x5478,	// (0x00047454) list_double_large_graphic_pane_g1

0x54a3,	// (0x0004747f) list_double_large_graphic_pane_g2_ParamLimits

0x54a3,	// (0x0004747f) list_double_large_graphic_pane_g2

0x68df,	// (0x000488bb) list_double_large_graphic_pane_g3_ParamLimits

0x68df,	// (0x000488bb) list_double_large_graphic_pane_g3

0x54b9,	// (0x00047495) list_double_large_graphic_pane_g4_ParamLimits

0x54b9,	// (0x00047495) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x00051608) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x00051608) list_double_large_graphic_pane_g

0x54cc,	// (0x000474a8) list_double_large_graphic_pane_t1_ParamLimits

0x54cc,	// (0x000474a8) list_double_large_graphic_pane_t1

0x54e5,	// (0x000474c1) list_double_large_graphic_pane_t2_ParamLimits

0x54e5,	// (0x000474c1) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x00051613) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x00051613) list_double_large_graphic_pane_t

0x6918,	// (0x000488f4) list_double2_large_graphic_pane_g1_ParamLimits

0x6918,	// (0x000488f4) list_double2_large_graphic_pane_g1

0x54f7,	// (0x000474d3) list_double2_large_graphic_pane_g2_ParamLimits

0x54f7,	// (0x000474d3) list_double2_large_graphic_pane_g2

0x68f7,	// (0x000488d3) list_double2_large_graphic_pane_g3_ParamLimits

0x68f7,	// (0x000488d3) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x00051618) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x00051618) list_double2_large_graphic_pane_g

0x5508,	// (0x000474e4) list_double2_large_graphic_pane_t1_ParamLimits

0x5508,	// (0x000474e4) list_double2_large_graphic_pane_t1

0x551e,	// (0x000474fa) list_double2_large_graphic_pane_t2_ParamLimits

0x551e,	// (0x000474fa) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x0005161f) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x0005161f) list_double2_large_graphic_pane_t

0x5530,	// (0x0004750c) list_double_heading_pane_g1_ParamLimits

0x5530,	// (0x0004750c) list_double_heading_pane_g1

0x6924,	// (0x00048900) list_double_heading_pane_g2_ParamLimits

0x6924,	// (0x00048900) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x00051624) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x00051624) list_double_heading_pane_g

0x5541,	// (0x0004751d) list_double_heading_pane_t1_ParamLimits

0x5541,	// (0x0004751d) list_double_heading_pane_t1

0x5557,	// (0x00047533) list_double_heading_pane_t2_ParamLimits

0x5557,	// (0x00047533) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x00051629) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x00051629) list_double_heading_pane_t

0x53e9,	// (0x000473c5) list_double_graphic_heading_pane_g1_ParamLimits

0x53e9,	// (0x000473c5) list_double_graphic_heading_pane_g1

0x5530,	// (0x0004750c) list_double_graphic_heading_pane_g2_ParamLimits

0x5530,	// (0x0004750c) list_double_graphic_heading_pane_g2

0x6924,	// (0x00048900) list_double_graphic_heading_pane_g3_ParamLimits

0x6924,	// (0x00048900) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x0005162e) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x0005162e) list_double_graphic_heading_pane_g

0x5569,	// (0x00047545) list_double_graphic_heading_pane_t1_ParamLimits

0x5569,	// (0x00047545) list_double_graphic_heading_pane_t1

0x557f,	// (0x0004755b) list_double_graphic_heading_pane_t2_ParamLimits

0x557f,	// (0x0004755b) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x00051635) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x00051635) list_double_graphic_heading_pane_t

0x5591,	// (0x0004756d) list_double_time_pane_g1_ParamLimits

0x5591,	// (0x0004756d) list_double_time_pane_g1

0x55a2,	// (0x0004757e) list_double_time_pane_g2_ParamLimits

0x55a2,	// (0x0004757e) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x0005163a) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x0005163a) list_double_time_pane_g

0x55ae,	// (0x0004758a) list_double_time_pane_t1_ParamLimits

0x55ae,	// (0x0004758a) list_double_time_pane_t1

0x55c4,	// (0x000475a0) list_double_time_pane_t2_ParamLimits

0x55c4,	// (0x000475a0) list_double_time_pane_t2

0x55d6,	// (0x000475b2) list_double_time_pane_t3_ParamLimits

0x55d6,	// (0x000475b2) list_double_time_pane_t3

0x55e8,	// (0x000475c4) list_double_time_pane_t4_ParamLimits

0x55e8,	// (0x000475c4) list_double_time_pane_t4

0x0003,

0xf663,	// (0x0005163f) list_double_time_pane_t_ParamLimits

0xf663,	// (0x0005163f) list_double_time_pane_t

0x55fa,	// (0x000475d6) list_setting_pane_g1_ParamLimits

0x55fa,	// (0x000475d6) list_setting_pane_g1

0x5606,	// (0x000475e2) list_setting_pane_g2_ParamLimits

0x5606,	// (0x000475e2) list_setting_pane_g2

0x0001,

0xf66c,	// (0x00051648) list_setting_pane_g_ParamLimits

0xf66c,	// (0x00051648) list_setting_pane_g

0x5612,	// (0x000475ee) list_setting_pane_t1_ParamLimits

0x5612,	// (0x000475ee) list_setting_pane_t1

0x562c,	// (0x00047608) list_setting_pane_t2_ParamLimits

0x562c,	// (0x00047608) list_setting_pane_t2

0x0002,

0xf671,	// (0x0005164d) list_setting_pane_t_ParamLimits

0xf671,	// (0x0005164d) list_setting_pane_t

0x566b,	// (0x00047647) set_value_pane_cp_ParamLimits

0x566b,	// (0x00047647) set_value_pane_cp

0x5679,	// (0x00047655) list_setting_number_pane_g1_ParamLimits

0x5679,	// (0x00047655) list_setting_number_pane_g1

0x5685,	// (0x00047661) list_setting_number_pane_g2_ParamLimits

0x5685,	// (0x00047661) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x00051654) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x00051654) list_setting_number_pane_g

0x5691,	// (0x0004766d) list_setting_number_pane_t1_ParamLimits

0x5691,	// (0x0004766d) list_setting_number_pane_t1

0x56aa,	// (0x00047686) list_setting_number_pane_t2_ParamLimits

0x56aa,	// (0x00047686) list_setting_number_pane_t2

0x56c4,	// (0x000476a0) list_setting_number_pane_t3_ParamLimits

0x56c4,	// (0x000476a0) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x00051659) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x00051659) list_setting_number_pane_t

0x566b,	// (0x00047647) set_value_pane_ParamLimits

0x566b,	// (0x00047647) set_value_pane

0x0aaf,	// (0x00042a8b) bg_set_opt_pane_ParamLimits

0x0aaf,	// (0x00042a8b) bg_set_opt_pane

0x5707,	// (0x000476e3) set_value_pane_t1

0x0ad0,	// (0x00042aac) slider_set_pane_cp3

0x0ad9,	// (0x00042ab5) volume_small_pane_cp

0x0ae2,	// (0x00042abe) list_form_gen_pane

0x0aeb,	// (0x00042ac7) scroll_pane_cp8

0x571d,	// (0x000476f9) form_field_data_pane_ParamLimits

0x571d,	// (0x000476f9) form_field_data_pane

0x5745,	// (0x00047721) form_field_data_wide_pane_ParamLimits

0x5745,	// (0x00047721) form_field_data_wide_pane

0x576c,	// (0x00047748) form_field_popup_pane_ParamLimits

0x576c,	// (0x00047748) form_field_popup_pane

0x578e,	// (0x0004776a) form_field_popup_wide_pane_ParamLimits

0x578e,	// (0x0004776a) form_field_popup_wide_pane

0x57af,	// (0x0004778b) form_field_slider_pane_ParamLimits

0x57af,	// (0x0004778b) form_field_slider_pane

0x57c2,	// (0x0004779e) form_field_slider_wide_pane_ParamLimits

0x57c2,	// (0x0004779e) form_field_slider_wide_pane

0x0afc,	// (0x00042ad8) data_form_pane

0x57df,	// (0x000477bb) form_field_data_pane_t1

0x0b08,	// (0x00042ae4) input_focus_pane

0x57f9,	// (0x000477d5) data_form_wide_pane

0x5816,	// (0x000477f2) form_field_data_wide_pane_t1

0x0883,	// (0x0004285f) input_focus_pane_cp6

0x5838,	// (0x00047814) form_field_popup_pane_t1

0x0b08,	// (0x00042ae4) input_focus_pane_cp7

0x0b36,	// (0x00042b12) list_form_pane

0x585a,	// (0x00047836) form_field_popup_wide_pane_t1

0x0b08,	// (0x00042ae4) input_focus_pane_cp8

0x0b42,	// (0x00042b1e) list_form_wide_pane

0x5877,	// (0x00047853) form_field_slider_pane_t1_ParamLimits

0x5877,	// (0x00047853) form_field_slider_pane_t1

0x588f,	// (0x0004786b) form_field_slider_pane_t2_ParamLimits

0x588f,	// (0x0004786b) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x00051669) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x00051669) form_field_slider_pane_t

0xd8b9,	// (0x0004f895) input_focus_pane_cp9_ParamLimits

0xd8b9,	// (0x0004f895) input_focus_pane_cp9

0x58a4,	// (0x00047880) slider_cont_pane_ParamLimits

0x58a4,	// (0x00047880) slider_cont_pane

0x0b51,	// (0x00042b2d) form_field_slider_wide_pane_t1_ParamLimits

0x0b51,	// (0x00042b2d) form_field_slider_wide_pane_t1

0x58b8,	// (0x00047894) form_field_slider_wide_pane_t2_ParamLimits

0x58b8,	// (0x00047894) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x0005166e) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x0005166e) form_field_slider_wide_pane_t

0xd8b9,	// (0x0004f895) input_focus_pane_cp10_ParamLimits

0xd8b9,	// (0x0004f895) input_focus_pane_cp10

0x58ca,	// (0x000478a6) slider_cont_pane_cp1_ParamLimits

0x58ca,	// (0x000478a6) slider_cont_pane_cp1

0x58de,	// (0x000478ba) slider_form_pane_cp

0x0b63,	// (0x00042b3f) input_focus_pane_g1

0x0b6b,	// (0x00042b47) input_focus_pane_g2

0x0b73,	// (0x00042b4f) input_focus_pane_g3

0x0b7b,	// (0x00042b57) input_focus_pane_g4

0x0b83,	// (0x00042b5f) input_focus_pane_g5

0x0b8b,	// (0x00042b67) input_focus_pane_g6

0x0b93,	// (0x00042b6f) input_focus_pane_g7

0x0b9b,	// (0x00042b77) input_focus_pane_g8

0x0ba3,	// (0x00042b7f) input_focus_pane_g9

0xd7e8,	// (0x0004f7c4) input_focus_pane_g10

0x0009,

0xf697,	// (0x00051673) input_focus_pane_g

0x9a37,	// (0x0004ba13) wait_border_pane_g3_copy1

0x58e6,	// (0x000478c2) data_form_pane_t1

0xd7e8,	// (0x0004f7c4) wait_anim_pane_g1_copy1

0x5b6e,	// (0x00047b4a) data_form_wide_pane_t1

0x5905,	// (0x000478e1) list_form_graphic_pane_cp_ParamLimits

0x5905,	// (0x000478e1) list_form_graphic_pane_cp

0xa997,	// (0x0004c973) slider_form_pane_g1

0xa9a0,	// (0x0004c97c) slider_form_pane_g2

0x0006,

0xf99a,	// (0x00051976) slider_form_pane_g

0x5905,	// (0x000478e1) list_form_graphic_pane_ParamLimits

0x5905,	// (0x000478e1) list_form_graphic_pane

0x5917,	// (0x000478f3) list_form_graphic_pane_g1

0x591f,	// (0x000478fb) list_form_graphic_pane_t1_ParamLimits

0x591f,	// (0x000478fb) list_form_graphic_pane_t1

0xd84c,	// (0x0004f828) list_highlight_pane_cp5_ParamLimits

0xd84c,	// (0x0004f828) list_highlight_pane_cp5

0x6930,	// (0x0004890c) find_pane_g1

0x0bab,	// (0x00042b87) input_find_pane

0x5934,	// (0x00047910) input_find_pane_g1_ParamLimits

0x5934,	// (0x00047910) input_find_pane_g1

0x5940,	// (0x0004791c) input_find_pane_t1_ParamLimits

0x5940,	// (0x0004791c) input_find_pane_t1

0x5955,	// (0x00047931) input_find_pane_t2_ParamLimits

0x5955,	// (0x00047931) input_find_pane_t2

0x0001,

0xf6ac,	// (0x00051688) input_find_pane_t_ParamLimits

0xf6ac,	// (0x00051688) input_find_pane_t

0x0bb4,	// (0x00042b90) input_focus_pane_cp5_ParamLimits

0x0bb4,	// (0x00042b90) input_focus_pane_cp5

0x0bc2,	// (0x00042b9e) bg_popup_window_pane_cp2_ParamLimits

0x0bc2,	// (0x00042b9e) bg_popup_window_pane_cp2

0x0bcf,	// (0x00042bab) listscroll_menu_pane_ParamLimits

0x0bcf,	// (0x00042bab) listscroll_menu_pane

0x6945,	// (0x00048921) popup_submenu_window_ParamLimits

0x6945,	// (0x00048921) popup_submenu_window

0x0bdb,	// (0x00042bb7) find_popup_pane_g1

0x0be3,	// (0x00042bbf) input_popup_find_pane_cp

0x0bb4,	// (0x00042b90) input_focus_pane_cp4_ParamLimits

0x0bb4,	// (0x00042b90) input_focus_pane_cp4

0x0bed,	// (0x00042bc9) input_popup_find_pane_t1_ParamLimits

0x0bed,	// (0x00042bc9) input_popup_find_pane_t1

0xd7f2,	// (0x0004f7ce) bg_popup_sub_pane_cp

0x0c1b,	// (0x00042bf7) listscroll_popup_sub_pane

0x0c23,	// (0x00042bff) list_submenu_pane_ParamLimits

0x0c23,	// (0x00042bff) list_submenu_pane

0x0c34,	// (0x00042c10) scroll_pane_cp4

0x0c3c,	// (0x00042c18) list_single_popup_submenu_pane_ParamLimits

0x0c3c,	// (0x00042c18) list_single_popup_submenu_pane

0x0c51,	// (0x00042c2d) list_single_popup_submenu_pane_g1

0x0c59,	// (0x00042c35) list_single_popup_submenu_pane_t1_ParamLimits

0x0c59,	// (0x00042c35) list_single_popup_submenu_pane_t1

0xd84c,	// (0x0004f828) bg_active_tab_pane_cp1_ParamLimits

0xd84c,	// (0x0004f828) bg_active_tab_pane_cp1

0x6983,	// (0x0004895f) tabs_2_active_pane_g1

0x698b,	// (0x00048967) tabs_2_active_pane_t1

0xd84c,	// (0x0004f828) bg_passive_tab_pane_cp1_ParamLimits

0xd84c,	// (0x0004f828) bg_passive_tab_pane_cp1

0x6983,	// (0x0004895f) tabs_2_passive_pane_g1

0x698b,	// (0x00048967) tabs_2_passive_pane_t1

0x2877,	// (0x00044853) bg_active_tab_pane_cp4

0x699d,	// (0x00048979) tabs_2_long_active_pane_t1

0x69b0,	// (0x0004898c) bg_passive_tab_pane_cp4

0x7561,	// (0x0004953d) list_single_midp_graphic_pane_g4_ParamLimits

0x2877,	// (0x00044853) bg_active_tab_pane_cp5

0x69bc,	// (0x00048998) tabs_3_long_active_pane_t1

0x69b0,	// (0x0004898c) bg_passive_tab_pane_cp5

0x7561,	// (0x0004953d) list_single_midp_graphic_pane_g4

0xd84c,	// (0x0004f828) bg_popup_window_pane_cp13_ParamLimits

0xd84c,	// (0x0004f828) bg_popup_window_pane_cp13

0x0c77,	// (0x00042c53) listscroll_popup_fast_pane_ParamLimits

0x0c77,	// (0x00042c53) listscroll_popup_fast_pane

0x0c86,	// (0x00042c62) grid_popup_fast_pane_ParamLimits

0x0c86,	// (0x00042c62) grid_popup_fast_pane

0x0c98,	// (0x00042c74) scroll_pane_cp9_ParamLimits

0x0c98,	// (0x00042c74) scroll_pane_cp9

0xc2fc,	// (0x0004e2d8) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc2fc,	// (0x0004e2d8) list_single_graphic_hl_pane_t1_cp2

0x0cbc,	// (0x00042c98) input_focus_pane_cp20_ParamLimits

0x0cbc,	// (0x00042c98) input_focus_pane_cp20

0x0cca,	// (0x00042ca6) query_popup_data_pane_t1_ParamLimits

0x0cca,	// (0x00042ca6) query_popup_data_pane_t1

0x0cdd,	// (0x00042cb9) query_popup_data_pane_t2_ParamLimits

0x0cdd,	// (0x00042cb9) query_popup_data_pane_t2

0x0d23,	// (0x00042cff) query_popup_data_pane_t3_ParamLimits

0x0d23,	// (0x00042cff) query_popup_data_pane_t3

0x0d64,	// (0x00042d40) query_popup_data_pane_t4_ParamLimits

0x0d64,	// (0x00042d40) query_popup_data_pane_t4

0x0da0,	// (0x00042d7c) query_popup_data_pane_t5_ParamLimits

0x0da0,	// (0x00042d7c) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x0005168d) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x0005168d) query_popup_data_pane_t

0x0b63,	// (0x00042b3f) bg_set_opt_pane_g1

0x0b6b,	// (0x00042b47) bg_set_opt_pane_g2

0x0b73,	// (0x00042b4f) bg_set_opt_pane_g3

0x0b7b,	// (0x00042b57) bg_set_opt_pane_g4

0x0b83,	// (0x00042b5f) bg_set_opt_pane_g5

0x0b8b,	// (0x00042b67) bg_set_opt_pane_g6

0x0b93,	// (0x00042b6f) bg_set_opt_pane_g7

0x0b9b,	// (0x00042b77) bg_set_opt_pane_g8

0x0ba3,	// (0x00042b7f) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x00051698) bg_set_opt_pane_g

0x6e4e,	// (0x00048e2a) control_top_pane_stacon_ParamLimits

0x6e4e,	// (0x00048e2a) control_top_pane_stacon

0x6ea1,	// (0x00048e7d) signal_pane_stacon_ParamLimits

0x6ea1,	// (0x00048e7d) signal_pane_stacon

0x4439,	// (0x00046415) stacon_top_pane_g1_ParamLimits

0x4439,	// (0x00046415) stacon_top_pane_g1

0x6ec6,	// (0x00048ea2) title_pane_stacon_ParamLimits

0x6ec6,	// (0x00048ea2) title_pane_stacon

0x6ef0,	// (0x00048ecc) uni_indicator_pane_stacon_ParamLimits

0x6ef0,	// (0x00048ecc) uni_indicator_pane_stacon

0x6f08,	// (0x00048ee4) battery_pane_stacon_ParamLimits

0x6f08,	// (0x00048ee4) battery_pane_stacon

0x6f4c,	// (0x00048f28) control_bottom_pane_stacon_ParamLimits

0x6f4c,	// (0x00048f28) control_bottom_pane_stacon

0x6f6f,	// (0x00048f4b) navi_pane_stacon_ParamLimits

0x6f6f,	// (0x00048f4b) navi_pane_stacon

0x4527,	// (0x00046503) stacon_bottom_pane_g1_ParamLimits

0x4527,	// (0x00046503) stacon_bottom_pane_g1

0x69ce,	// (0x000489aa) aid_levels_signal_lsc_ParamLimits

0x69ce,	// (0x000489aa) aid_levels_signal_lsc

0x69e5,	// (0x000489c1) signal_pane_stacon_g1_ParamLimits

0x69e5,	// (0x000489c1) signal_pane_stacon_g1

0x69f9,	// (0x000489d5) signal_pane_stacon_g2_ParamLimits

0x69f9,	// (0x000489d5) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x000516ab) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x000516ab) signal_pane_stacon_g

0x6a2e,	// (0x00048a0a) title_pane_stacon_t1_ParamLimits

0x6a2e,	// (0x00048a0a) title_pane_stacon_t1

0x0df8,	// (0x00042dd4) uni_indicator_pane_stacon_g1

0x0e02,	// (0x00042dde) uni_indicator_pane_stacon_g2

0x0de4,	// (0x00042dc0) uni_indicator_pane_stacon_g3

0x0dee,	// (0x00042dca) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x000516b7) uni_indicator_pane_stacon_g

0x6a53,	// (0x00048a2f) control_top_pane_stacon_g1

0x6a5b,	// (0x00048a37) control_top_pane_stacon_t1_ParamLimits

0x6a5b,	// (0x00048a37) control_top_pane_stacon_t1

0x6a92,	// (0x00048a6e) aid_levels_battery_lsc_ParamLimits

0x6a92,	// (0x00048a6e) aid_levels_battery_lsc

0x6aaa,	// (0x00048a86) battery_pane_stacon_g1_ParamLimits

0x6aaa,	// (0x00048a86) battery_pane_stacon_g1

0x6abd,	// (0x00048a99) battery_pane_stacon_g2_ParamLimits

0x6abd,	// (0x00048a99) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x000516c0) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x000516c0) battery_pane_stacon_g

0x6afb,	// (0x00048ad7) navi_icon_pane_stacon

0x6b0f,	// (0x00048aeb) navi_navi_pane_stacon

0x6afb,	// (0x00048ad7) navi_text_pane_stacon

0x6a53,	// (0x00048a2f) control_bottom_pane_stacon_g1

0x6b25,	// (0x00048b01) control_bottom_pane_stacon_t1_ParamLimits

0x6b25,	// (0x00048b01) control_bottom_pane_stacon_t1

0x6b5c,	// (0x00048b38) grid_app_pane_ParamLimits

0x6b5c,	// (0x00048b38) grid_app_pane

0x6b80,	// (0x00048b5c) scroll_pane_cp15_ParamLimits

0x6b80,	// (0x00048b5c) scroll_pane_cp15

0x6b93,	// (0x00048b6f) cell_app_pane_ParamLimits

0x6b93,	// (0x00048b6f) cell_app_pane

0x6bbf,	// (0x00048b9b) cell_app_pane_g1_ParamLimits

0x6bbf,	// (0x00048b9b) cell_app_pane_g1

0x0e26,	// (0x00042e02) cell_app_pane_g2_ParamLimits

0x0e26,	// (0x00042e02) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x000516c5) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x000516c5) cell_app_pane_g

0x0e32,	// (0x00042e0e) cell_app_pane_t1_ParamLimits

0x0e32,	// (0x00042e0e) cell_app_pane_t1

0x0e49,	// (0x00042e25) grid_highlight_pane_ParamLimits

0x0e49,	// (0x00042e25) grid_highlight_pane

0x0b63,	// (0x00042b3f) cell_highlight_pane_g1

0x0b6b,	// (0x00042b47) cell_highlight_pane_g2

0x0b73,	// (0x00042b4f) cell_highlight_pane_g3

0x0b7b,	// (0x00042b57) cell_highlight_pane_g4

0x0b83,	// (0x00042b5f) cell_highlight_pane_g5

0x0b8b,	// (0x00042b67) cell_highlight_pane_g6

0x0b93,	// (0x00042b6f) cell_highlight_pane_g7

0x0b9b,	// (0x00042b77) cell_highlight_pane_g8

0x0ba3,	// (0x00042b7f) cell_highlight_pane_g9

0xd7e8,	// (0x0004f7c4) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x00051673) cell_highlight_pane_g

0x0e5a,	// (0x00042e36) bg_scroll_pane

0x6bf2,	// (0x00048bce) scroll_handle_pane

0x0ea1,	// (0x00042e7d) scroll_bg_pane_g1

0x0eb6,	// (0x00042e92) scroll_bg_pane_g2

0x0ece,	// (0x00042eaa) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x000516ca) scroll_bg_pane_g

0x0ee3,	// (0x00042ebf) scroll_handle_focus_pane_ParamLimits

0x0ee3,	// (0x00042ebf) scroll_handle_focus_pane

0x0ea1,	// (0x00042e7d) scroll_handle_pane_g1

0x0ef0,	// (0x00042ecc) scroll_handle_pane_g2

0x0ece,	// (0x00042eaa) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x000516d1) scroll_handle_pane_g

0x0bb4,	// (0x00042b90) bg_popup_sub_pane_cp21_ParamLimits

0x0bb4,	// (0x00042b90) bg_popup_sub_pane_cp21

0x0f04,	// (0x00042ee0) popup_fep_japan_predictive_window_t1_ParamLimits

0x0f04,	// (0x00042ee0) popup_fep_japan_predictive_window_t1

0x0f1b,	// (0x00042ef7) popup_fep_japan_predictive_window_t2_ParamLimits

0x0f1b,	// (0x00042ef7) popup_fep_japan_predictive_window_t2

0x0f4e,	// (0x00042f2a) popup_fep_japan_predictive_window_t3_ParamLimits

0x0f4e,	// (0x00042f2a) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x000516d8) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x000516d8) popup_fep_japan_predictive_window_t

0xd7f2,	// (0x0004f7ce) bg_popup_sub_pane_cp23

0x0f85,	// (0x00042f61) listscroll_japin_cand_pane

0x0f8d,	// (0x00042f69) popup_fep_japan_candidate_window_t1

0x0f9b,	// (0x00042f77) candidate_pane_ParamLimits

0x0f9b,	// (0x00042f77) candidate_pane

0x0fad,	// (0x00042f89) scroll_pane_cp30

0x0fb7,	// (0x00042f93) list_single_popup_jap_candidate_pane_ParamLimits

0x0fb7,	// (0x00042f93) list_single_popup_jap_candidate_pane

0xd7f2,	// (0x0004f7ce) list_highlight_pane_cp30

0x0fcb,	// (0x00042fa7) list_single_popup_jap_candidate_pane_t1

0x6c1b,	// (0x00048bf7) level_1_signal

0x6c28,	// (0x00048c04) level_2_signal

0x6c35,	// (0x00048c11) level_3_signal

0x6c42,	// (0x00048c1e) level_4_signal

0x6c4f,	// (0x00048c2b) level_5_signal

0x6c5c,	// (0x00048c38) level_6_signal

0x6c69,	// (0x00048c45) level_7_signal

0x6c1b,	// (0x00048bf7) level_1_battery

0x6c28,	// (0x00048c04) level_2_battery

0x6c35,	// (0x00048c11) level_3_battery

0x6c42,	// (0x00048c1e) level_4_battery

0x6c4f,	// (0x00048c2b) level_5_battery

0x6c5c,	// (0x00048c38) level_6_battery

0x6c69,	// (0x00048c45) level_7_battery

0x2308,	// (0x000442e4) list_menu_pane_ParamLimits

0x2308,	// (0x000442e4) list_menu_pane

0x231e,	// (0x000442fa) scroll_pane_cp25_ParamLimits

0x231e,	// (0x000442fa) scroll_pane_cp25

0x2337,	// (0x00044313) list_double2_graphic_pane_cp2_ParamLimits

0x2337,	// (0x00044313) list_double2_graphic_pane_cp2

0x2337,	// (0x00044313) list_double2_large_graphic_pane_cp2_ParamLimits

0x2337,	// (0x00044313) list_double2_large_graphic_pane_cp2

0x2337,	// (0x00044313) list_double2_pane_cp2_ParamLimits

0x2337,	// (0x00044313) list_double2_pane_cp2

0x2337,	// (0x00044313) list_double_graphic_pane_cp2_ParamLimits

0x2337,	// (0x00044313) list_double_graphic_pane_cp2

0x2337,	// (0x00044313) list_double_large_graphic_pane_cp2_ParamLimits

0x2337,	// (0x00044313) list_double_large_graphic_pane_cp2

0x2337,	// (0x00044313) list_double_number_pane_cp2_ParamLimits

0x2337,	// (0x00044313) list_double_number_pane_cp2

0x2337,	// (0x00044313) list_double_pane_cp2_ParamLimits

0x2337,	// (0x00044313) list_double_pane_cp2

0x6cab,	// (0x00048c87) list_single_2graphic_pane_cp2_ParamLimits

0x6cab,	// (0x00048c87) list_single_2graphic_pane_cp2

0x6cab,	// (0x00048c87) list_single_graphic_heading_pane_cp2_ParamLimits

0x6cab,	// (0x00048c87) list_single_graphic_heading_pane_cp2

0x6cab,	// (0x00048c87) list_single_graphic_pane_cp2_ParamLimits

0x6cab,	// (0x00048c87) list_single_graphic_pane_cp2

0x6cab,	// (0x00048c87) list_single_heading_pane_cp2_ParamLimits

0x6cab,	// (0x00048c87) list_single_heading_pane_cp2

0x2347,	// (0x00044323) list_single_large_graphic_pane_cp2_ParamLimits

0x2347,	// (0x00044323) list_single_large_graphic_pane_cp2

0x6cab,	// (0x00048c87) list_single_number_heading_pane_cp2_ParamLimits

0x6cab,	// (0x00048c87) list_single_number_heading_pane_cp2

0x6cab,	// (0x00048c87) list_single_number_pane_cp2_ParamLimits

0x6cab,	// (0x00048c87) list_single_number_pane_cp2

0x6cab,	// (0x00048c87) list_single_pane_cp2_ParamLimits

0x6cab,	// (0x00048c87) list_single_pane_cp2

0x2360,	// (0x0004433c) bg_popup_sub_pane_cp22

0x6d94,	// (0x00048d70) popup_side_volume_key_window_g1

0x6dbe,	// (0x00048d9a) popup_side_volume_key_window_t1

0x6ddc,	// (0x00048db8) volume_small_pane_cp1

0xd8b9,	// (0x0004f895) bg_popup_sub_pane_cp24_ParamLimits

0xd8b9,	// (0x0004f895) bg_popup_sub_pane_cp24

0x2376,	// (0x00044352) fep_china_uni_candidate_pane_ParamLimits

0x2376,	// (0x00044352) fep_china_uni_candidate_pane

0x238a,	// (0x00044366) fep_china_uni_entry_pane

0x239a,	// (0x00044376) popup_fep_china_uni_window_g1

0x23b6,	// (0x00044392) fep_china_uni_entry_pane_g1

0x23c0,	// (0x0004439c) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x00051709) fep_china_uni_entry_pane_g

0x23ca,	// (0x000443a6) fep_entry_item_pane

0x23d4,	// (0x000443b0) fep_candidate_item_pane

0x23dc,	// (0x000443b8) fep_china_uni_candidate_pane_g1

0x23e6,	// (0x000443c2) fep_china_uni_candidate_pane_g2

0x23ee,	// (0x000443ca) fep_china_uni_candidate_pane_g3

0x23f6,	// (0x000443d2) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x0005170e) fep_china_uni_candidate_pane_g

0xd7e8,	// (0x0004f7c4) fep_entry_item_pane_g1

0x2400,	// (0x000443dc) fep_entry_item_pane_t1_ParamLimits

0x2400,	// (0x000443dc) fep_entry_item_pane_t1

0x2416,	// (0x000443f2) fep_candidate_item_pane_t1_ParamLimits

0x2416,	// (0x000443f2) fep_candidate_item_pane_t1

0x242b,	// (0x00044407) fep_candidate_item_pane_t2_ParamLimits

0x242b,	// (0x00044407) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x00051717) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x00051717) fep_candidate_item_pane_t

0xd84c,	// (0x0004f828) list_highlight_pane_cp31_ParamLimits

0xd84c,	// (0x0004f828) list_highlight_pane_cp31

0x243d,	// (0x00044419) level_1_signal_lsc

0x2446,	// (0x00044422) level_2_signal_lsc

0x244f,	// (0x0004442b) level_3_signal_lsc

0x2458,	// (0x00044434) level_4_signal_lsc

0x2461,	// (0x0004443d) level_5_signal_lsc

0x246a,	// (0x00044446) level_6_signal_lsc

0x2473,	// (0x0004444f) level_7_signal_lsc

0x2473,	// (0x0004444f) level_1_battery_lsc

0x247c,	// (0x00044458) level_2_battery_lsc

0x2485,	// (0x00044461) level_3_battery_lsc

0x248e,	// (0x0004446a) level_4_battery_lsc

0x2497,	// (0x00044473) level_5_battery_lsc

0x24a0,	// (0x0004447c) level_6_battery_lsc

0x243d,	// (0x00044419) level_7_battery_lsc

0x24a9,	// (0x00044485) scroll_handle_focus_pane_g1

0x24b2,	// (0x0004448e) scroll_handle_focus_pane_g2

0x24bb,	// (0x00044497) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x0005171c) scroll_handle_focus_pane_g

0x596a,	// (0x00047946) list_single_2graphic_pane_g1_ParamLimits

0x596a,	// (0x00047946) list_single_2graphic_pane_g1

0x6896,	// (0x00048872) list_single_2graphic_pane_g2_ParamLimits

0x6896,	// (0x00048872) list_single_2graphic_pane_g2

0x6878,	// (0x00048854) list_single_2graphic_pane_g3_ParamLimits

0x6878,	// (0x00048854) list_single_2graphic_pane_g3

0x6de4,	// (0x00048dc0) list_single_2graphic_pane_g4_ParamLimits

0x6de4,	// (0x00048dc0) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x00051723) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x00051723) list_single_2graphic_pane_g

0x5976,	// (0x00047952) list_single_2graphic_pane_t1_ParamLimits

0x5976,	// (0x00047952) list_single_2graphic_pane_t1

0x6df0,	// (0x00048dcc) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6df0,	// (0x00048dcc) list_double2_graphic_large_graphic_pane_g1

0x54f7,	// (0x000474d3) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x54f7,	// (0x000474d3) list_double2_graphic_large_graphic_pane_g2

0x68f7,	// (0x000488d3) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x68f7,	// (0x000488d3) list_double2_graphic_large_graphic_pane_g3

0x59a4,	// (0x00047980) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x59a4,	// (0x00047980) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x0005172c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x0005172c) list_double2_graphic_large_graphic_pane_g

0x59b0,	// (0x0004798c) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x59b0,	// (0x0004798c) list_double2_graphic_large_graphic_pane_t1

0x59c6,	// (0x000479a2) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x59c6,	// (0x000479a2) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x00051735) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x00051735) list_double2_graphic_large_graphic_pane_t

0x4585,	// (0x00046561) popup_fast_swap_window_ParamLimits

0x4585,	// (0x00046561) popup_fast_swap_window

0x45a3,	// (0x0004657f) popup_side_volume_key_window

0x45c1,	// (0x0004659d) stacon_top_pane

0x45cb,	// (0x000465a7) status_pane_ParamLimits

0x45cb,	// (0x000465a7) status_pane

0x45c1,	// (0x0004659d) status_small_pane

0xd7f2,	// (0x0004f7ce) control_pane

0xd7f2,	// (0x0004f7ce) stacon_bottom_pane

0x0aeb,	// (0x00042ac7) scroll_pane_cp121

0x0ae2,	// (0x00042abe) set_content_pane

0x6e02,	// (0x00048dde) bg_active_tab_pane_g1_cp1

0x43b8,	// (0x00046394) bg_active_tab_pane_g2_cp1

0x6e0b,	// (0x00048de7) bg_active_tab_pane_g3_cp1

0x6e02,	// (0x00048dde) bg_passive_tab_pane_g1_cp1

0x43b8,	// (0x00046394) bg_passive_tab_pane_g2_cp1

0x6e0b,	// (0x00048de7) bg_passive_tab_pane_g3_cp1

0x6e14,	// (0x00048df0) bg_active_tab_pane_g1_cp2

0x43b8,	// (0x00046394) bg_active_tab_pane_g2_cp2

0x6e1d,	// (0x00048df9) bg_active_tab_pane_g3_cp2

0x6e14,	// (0x00048df0) bg_passive_tab_pane_g1_cp2

0x43b8,	// (0x00046394) bg_passive_tab_pane_g2_cp2

0x6e1d,	// (0x00048df9) bg_passive_tab_pane_g3_cp2

0x6e26,	// (0x00048e02) bg_active_tab_pane_g1_cp3

0x43b8,	// (0x00046394) bg_active_tab_pane_g2_cp3

0x6e2f,	// (0x00048e0b) bg_active_tab_pane_g3_cp3

0x6e26,	// (0x00048e02) bg_passive_tab_pane_g1_cp3

0x43b8,	// (0x00046394) bg_passive_tab_pane_g2_cp3

0x6e2f,	// (0x00048e0b) bg_passive_tab_pane_g3_cp3

0x6e38,	// (0x00048e14) bg_active_tab_pane_g1_cp4

0x43b8,	// (0x00046394) bg_active_tab_pane_g2_cp4

0x6e43,	// (0x00048e1f) bg_active_tab_pane_g3_cp4

0x6e38,	// (0x00048e14) bg_passive_tab_pane_g1_cp4

0x43b8,	// (0x00046394) bg_passive_tab_pane_g2_cp4

0x6e43,	// (0x00048e1f) bg_passive_tab_pane_g3_cp4

0x454c,	// (0x00046528) bg_active_tab_pane_g1_cp5

0x43b8,	// (0x00046394) bg_active_tab_pane_g2_cp5

0x4543,	// (0x0004651f) bg_active_tab_pane_g3_cp5

0x454c,	// (0x00046528) bg_passive_tab_pane_g1_cp5

0x43b8,	// (0x00046394) bg_passive_tab_pane_g2_cp5

0x4543,	// (0x0004651f) bg_passive_tab_pane_g3_cp5

0x6f92,	// (0x00048f6e) list_set_graphic_pane_ParamLimits

0x6f92,	// (0x00048f6e) list_set_graphic_pane

0xd7f2,	// (0x0004f7ce) bg_set_opt_pane_cp4

0x6fa7,	// (0x00048f83) list_set_graphic_pane_g1_ParamLimits

0x6fa7,	// (0x00048f83) list_set_graphic_pane_g1

0x6fb3,	// (0x00048f8f) list_set_graphic_pane_g2_ParamLimits

0x6fb3,	// (0x00048f8f) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x0005173a) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x0005173a) list_set_graphic_pane_g

0x0009,

0xfadd,	// (0x00051ab9) volume_small_pane_cp_g

0x6fd7,	// (0x00048fb3) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6fd7,	// (0x00048fb3) list_double2_large_graphic_pane_g1_cp2

0x6fe5,	// (0x00048fc1) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x6fe5,	// (0x00048fc1) list_double2_large_graphic_pane_g2_cp2

0x4555,	// (0x00046531) list_double2_large_graphic_pane_g3_cp2

0x455d,	// (0x00046539) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x455d,	// (0x00046539) list_double2_large_graphic_pane_t1_cp2

0x4573,	// (0x0004654f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4573,	// (0x0004654f) list_double2_large_graphic_pane_t2_cp2

0xa51b,	// (0x0004c4f7) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa51b,	// (0x0004c4f7) list_double_large_graphic_pane_g1_cp2

0xa52e,	// (0x0004c50a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa52e,	// (0x0004c50a) list_double_large_graphic_pane_g2_cp2

0x46ac,	// (0x00046688) list_double_large_graphic_pane_g3_cp2

0xa53f,	// (0x0004c51b) list_double_large_graphic_pane_g4_cp

0xa547,	// (0x0004c523) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa547,	// (0x0004c523) list_double_large_graphic_pane_t1_cp2

0xa55e,	// (0x0004c53a) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa55e,	// (0x0004c53a) list_double_large_graphic_pane_t2_cp2

0x6ff6,	// (0x00048fd2) list_double2_graphic_pane_g1_cp2_ParamLimits

0x6ff6,	// (0x00048fd2) list_double2_graphic_pane_g1_cp2

0x7004,	// (0x00048fe0) list_double2_graphic_pane_g2_cp2_ParamLimits

0x7004,	// (0x00048fe0) list_double2_graphic_pane_g2_cp2

0x7015,	// (0x00048ff1) list_double2_graphic_pane_g3_cp2

0x45d9,	// (0x000465b5) list_double2_graphic_pane_t1_cp2_ParamLimits

0x45d9,	// (0x000465b5) list_double2_graphic_pane_t1_cp2

0x45ef,	// (0x000465cb) list_double2_graphic_pane_t2_cp2_ParamLimits

0x45ef,	// (0x000465cb) list_double2_graphic_pane_t2_cp2

0x4601,	// (0x000465dd) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4601,	// (0x000465dd) list_single_number_heading_pane_g1_cp2

0x460d,	// (0x000465e9) list_single_number_heading_pane_g2_cp2

0x4615,	// (0x000465f1) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4615,	// (0x000465f1) list_single_number_heading_pane_t1_cp2

0x701f,	// (0x00048ffb) list_single_number_heading_pane_t2_cp2_ParamLimits

0x701f,	// (0x00048ffb) list_single_number_heading_pane_t2_cp2

0x462b,	// (0x00046607) list_single_number_heading_pane_t3_cp2_ParamLimits

0x462b,	// (0x00046607) list_single_number_heading_pane_t3_cp2

0x4601,	// (0x000465dd) list_single_heading_pane_g1_cp2_ParamLimits

0x4601,	// (0x000465dd) list_single_heading_pane_g1_cp2

0x460d,	// (0x000465e9) list_single_heading_pane_g2_cp2

0x4615,	// (0x000465f1) list_single_heading_pane_t1_cp2_ParamLimits

0x4615,	// (0x000465f1) list_single_heading_pane_t1_cp2

0xa315,	// (0x0004c2f1) list_single_heading_pane_t2_cp2_ParamLimits

0xa315,	// (0x0004c2f1) list_single_heading_pane_t2_cp2

0xa25d,	// (0x0004c239) list_double_graphic_pane_g1_cp2_ParamLimits

0xa25d,	// (0x0004c239) list_double_graphic_pane_g1_cp2

0xa269,	// (0x0004c245) list_double_graphic_pane_g2_cp2_ParamLimits

0xa269,	// (0x0004c245) list_double_graphic_pane_g2_cp2

0xa278,	// (0x0004c254) list_double_graphic_pane_g3_cp2

0xa280,	// (0x0004c25c) list_double_graphic_pane_t1_cp2_ParamLimits

0xa280,	// (0x0004c25c) list_double_graphic_pane_t1_cp2

0xa296,	// (0x0004c272) list_double_graphic_pane_t2_cp2_ParamLimits

0xa296,	// (0x0004c272) list_double_graphic_pane_t2_cp2

0x46a0,	// (0x0004667c) list_double_number_pane_g1_cp2_ParamLimits

0x46a0,	// (0x0004667c) list_double_number_pane_g1_cp2

0x46ac,	// (0x00046688) list_double_number_pane_g2_cp2

0xa221,	// (0x0004c1fd) list_double_number_pane_t1_cp2_ParamLimits

0xa221,	// (0x0004c1fd) list_double_number_pane_t1_cp2

0xa235,	// (0x0004c211) list_double_number_pane_t2_cp2_ParamLimits

0xa235,	// (0x0004c211) list_double_number_pane_t2_cp2

0xa24b,	// (0x0004c227) list_double_number_pane_t3_cp2_ParamLimits

0xa24b,	// (0x0004c227) list_double_number_pane_t3_cp2

0xa10a,	// (0x0004c0e6) list_single_graphic_pane_g1_cp2_ParamLimits

0xa10a,	// (0x0004c0e6) list_single_graphic_pane_g1_cp2

0x46ec,	// (0x000466c8) list_single_graphic_pane_g2_cp2_ParamLimits

0x46ec,	// (0x000466c8) list_single_graphic_pane_g2_cp2

0x46f8,	// (0x000466d4) list_single_graphic_pane_g3_cp2

0xa0e0,	// (0x0004c0bc) list_single_graphic_pane_t1_cp2_ParamLimits

0xa0e0,	// (0x0004c0bc) list_single_graphic_pane_t1_cp2

0x46ec,	// (0x000466c8) list_single_number_pane_g1_cp2_ParamLimits

0x46ec,	// (0x000466c8) list_single_number_pane_g1_cp2

0x46f8,	// (0x000466d4) list_single_number_pane_g2_cp2

0xa0e0,	// (0x0004c0bc) list_single_number_pane_t1_cp2_ParamLimits

0xa0e0,	// (0x0004c0bc) list_single_number_pane_t1_cp2

0xa0f6,	// (0x0004c0d2) list_single_number_pane_t2_cp2_ParamLimits

0xa0f6,	// (0x0004c0d2) list_single_number_pane_t2_cp2

0x6fe5,	// (0x00048fc1) list_double2_pane_g1_cp2_ParamLimits

0x6fe5,	// (0x00048fc1) list_double2_pane_g1_cp2

0x4555,	// (0x00046531) list_double2_pane_g2_cp2

0x4678,	// (0x00046654) list_double2_pane_t1_cp2_ParamLimits

0x4678,	// (0x00046654) list_double2_pane_t1_cp2

0x468e,	// (0x0004666a) list_double2_pane_t2_cp2_ParamLimits

0x468e,	// (0x0004666a) list_double2_pane_t2_cp2

0x46a0,	// (0x0004667c) list_double_pane_g1_cp2_ParamLimits

0x46a0,	// (0x0004667c) list_double_pane_g1_cp2

0x46ac,	// (0x00046688) list_double_pane_g2_cp2

0x46b4,	// (0x00046690) list_double_pane_t1_cp2_ParamLimits

0x46b4,	// (0x00046690) list_double_pane_t1_cp2

0x46ca,	// (0x000466a6) list_double_pane_t2_cp2_ParamLimits

0x46ca,	// (0x000466a6) list_double_pane_t2_cp2

0x46dc,	// (0x000466b8) list_single_pane_cp2_g3

0x46ec,	// (0x000466c8) list_single_pane_g1_cp2_ParamLimits

0x46ec,	// (0x000466c8) list_single_pane_g1_cp2

0x46f8,	// (0x000466d4) list_single_pane_g2_cp2

0x4700,	// (0x000466dc) list_single_pane_t1_cp2_ParamLimits

0x4700,	// (0x000466dc) list_single_pane_t1_cp2

0x704d,	// (0x00049029) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x704d,	// (0x00049029) list_single_large_graphic_pane_g1_cp2

0x4718,	// (0x000466f4) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4718,	// (0x000466f4) list_single_large_graphic_pane_g2_cp2

0x4724,	// (0x00046700) list_single_large_graphic_pane_g3_cp2

0x472c,	// (0x00046708) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x472c,	// (0x00046708) list_single_large_graphic_pane_g4_cp1

0x4746,	// (0x00046722) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4746,	// (0x00046722) list_single_large_graphic_pane_t1_cp2

0xa0aa,	// (0x0004c086) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa0aa,	// (0x0004c086) list_single_graphic_heading_pane_g1_cp2

0xa077,	// (0x0004c053) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa077,	// (0x0004c053) list_single_graphic_heading_pane_g4_cp2

0x46f8,	// (0x000466d4) list_single_graphic_heading_pane_g5_cp2

0xa0b6,	// (0x0004c092) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa0b6,	// (0x0004c092) list_single_graphic_heading_pane_t1_cp2

0xa0cc,	// (0x0004c0a8) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa0cc,	// (0x0004c0a8) list_single_graphic_heading_pane_t2_cp2

0xa06b,	// (0x0004c047) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa06b,	// (0x0004c047) list_single_2graphic_pane_g1_cp2

0xa077,	// (0x0004c053) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa077,	// (0x0004c053) list_single_2graphic_pane_g2_cp2

0x46f8,	// (0x000466d4) list_single_2graphic_pane_g3_cp2

0xa088,	// (0x0004c064) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa088,	// (0x0004c064) list_single_2graphic_pane_g4_cp2

0xa094,	// (0x0004c070) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa094,	// (0x0004c070) list_single_2graphic_pane_t1_cp2

0xd7e8,	// (0x0004f7c4) list_highlight_pane_g10_cp1

0x9c43,	// (0x0004bc1f) list_highlight_pane_g1_cp1

0x9c4b,	// (0x0004bc27) list_highlight_pane_g2_cp1

0x9c53,	// (0x0004bc2f) list_highlight_pane_g3_cp1

0x9c5b,	// (0x0004bc37) list_highlight_pane_g4_cp1

0x9c63,	// (0x0004bc3f) list_highlight_pane_g5_cp1

0x9c6b,	// (0x0004bc47) list_highlight_pane_g6_cp1

0x9c73,	// (0x0004bc4f) list_highlight_pane_g7_cp1

0x9c7b,	// (0x0004bc57) list_highlight_pane_g8_cp1

0x9c83,	// (0x0004bc5f) list_highlight_pane_g9_cp1

0x9b63,	// (0x0004bb3f) form_field_slider_pane_t3

0x9b71,	// (0x0004bb4d) form_field_slider_pane_t4

0x9b7f,	// (0x0004bb5b) slider_form_pane_ParamLimits

0x9b7f,	// (0x0004bb5b) slider_form_pane

0xd7f2,	// (0x0004f7ce) control_abbreviations

0xd7f2,	// (0x0004f7ce) control_conventions

0xd7f2,	// (0x0004f7ce) control_definitions

0xd7f2,	// (0x0004f7ce) format_table_attribute

0xa36b,	// (0x0004c347) bg_popup_preview_window_pane_g9

0xd7f2,	// (0x0004f7ce) format_table_data2

0xd7f2,	// (0x0004f7ce) format_table_data3

0xd7f2,	// (0x0004f7ce) format_table_data_example

0x0008,

0xd7f2,	// (0x0004f7ce) intro_purpose

0xf8fa,	// (0x000518d6) bg_popup_preview_window_pane_g

0xd7f2,	// (0x0004f7ce) texts_category

0xd7f2,	// (0x0004f7ce) texts_graphics

0x475c,	// (0x00046738) text_digital

0x476b,	// (0x00046747) text_primary

0x477a,	// (0x00046756) text_primary_small

0x4789,	// (0x00046765) text_secondary

0x4798,	// (0x00046774) text_title

0xaade,	// (0x0004caba) bg_passive_tab_pane_g1_cp3_srt

0x43b8,	// (0x00046394) bg_passive_tab_pane_g2_cp3_srt

0xaae7,	// (0x0004cac3) bg_passive_tab_pane_g3_cp3_srt

0xd84c,	// (0x0004f828) bg_active_tab_pane_cp3_srt_ParamLimits

0xd84c,	// (0x0004f828) bg_active_tab_pane_cp3_srt

0xaaf0,	// (0x0004cacc) tabs_4_active_pane_srt_g1

0xaaf8,	// (0x0004cad4) tabs_4_active_pane_srt_t1_ParamLimits

0xaaf8,	// (0x0004cad4) tabs_4_active_pane_srt_t1

0xaade,	// (0x0004caba) bg_active_tab_pane_g1_cp3_copy1

0x43b8,	// (0x00046394) bg_active_tab_pane_g2_cp3_copy1

0xaae7,	// (0x0004cac3) bg_active_tab_pane_g3_cp3_copy1

0xd84c,	// (0x0004f828) tabs_2_long_active_pane_srt_ParamLimits

0xd84c,	// (0x0004f828) tabs_2_long_active_pane_srt

0xd84c,	// (0x0004f828) tabs_2_long_passive_pane_srt_ParamLimits

0xd84c,	// (0x0004f828) tabs_2_long_passive_pane_srt

0x69b0,	// (0x0004898c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x69b0,	// (0x0004898c) bg_passive_tab_pane_cp4_srt

0xa7a8,	// (0x0004c784) bg_passive_tab_pane_g1_cp4_srt

0x43b8,	// (0x00046394) bg_passive_tab_pane_g2_cp4_srt

0xa7b1,	// (0x0004c78d) bg_passive_tab_pane_g3_cp4_srt

0x2877,	// (0x00044853) bg_active_tab_pane_cp4_srt_ParamLimits

0x2877,	// (0x00044853) bg_active_tab_pane_cp4_srt

0xa7ba,	// (0x0004c796) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa7ba,	// (0x0004c796) tabs_2_long_active_pane_srt_t1

0xa7a8,	// (0x0004c784) bg_active_tab_pane_g1_cp4_srt

0x43b8,	// (0x00046394) bg_active_tab_pane_g2_cp4_srt

0xa7b1,	// (0x0004c78d) bg_active_tab_pane_g3_cp4_srt

0xd8b9,	// (0x0004f895) tabs_3_long_active_pane_srt_ParamLimits

0xd8b9,	// (0x0004f895) tabs_3_long_active_pane_srt

0xd8b9,	// (0x0004f895) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xd8b9,	// (0x0004f895) tabs_3_long_passive_pane_cp_srt

0xd8b9,	// (0x0004f895) tabs_3_long_passive_pane_srt_ParamLimits

0xd8b9,	// (0x0004f895) tabs_3_long_passive_pane_srt

0x69b0,	// (0x0004898c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x69b0,	// (0x0004898c) bg_passive_tab_pane_cp5_srt

0x454c,	// (0x00046528) bg_passive_tab_pane_g1_cp5_srt

0x43b8,	// (0x00046394) bg_passive_tab_pane_g2_cp5_srt

0x4543,	// (0x0004651f) bg_passive_tab_pane_g3_cp5_srt

0x2877,	// (0x00044853) bg_active_tab_pane_cp5_srt_ParamLimits

0x2877,	// (0x00044853) bg_active_tab_pane_cp5_srt

0xa796,	// (0x0004c772) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa796,	// (0x0004c772) tabs_3_long_active_pane_srt_t1

0x454c,	// (0x00046528) bg_active_tab_pane_g1_cp5_srt

0x43b8,	// (0x00046394) bg_active_tab_pane_g2_cp5_srt

0x4543,	// (0x0004651f) bg_active_tab_pane_g3_cp5_srt

0xa788,	// (0x0004c764) navi_text_pane_srt_t1

0xa780,	// (0x0004c75c) navi_icon_pane_srt_g1

0x727c,	// (0x00049258) midp_editing_number_pane_srt

0x47a7,	// (0x00046783) midp_ticker_pane_srt

0x7284,	// (0x00049260) midp_ticker_pane_srt_g1

0x728c,	// (0x00049268) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x00051759) midp_ticker_pane_srt_g

0x7294,	// (0x00049270) midp_ticker_pane_srt_t1

0xa771,	// (0x0004c74d) midp_editing_number_pane_t1_copy1

0x69b0,	// (0x0004898c) listscroll_midp_pane

0x69b0,	// (0x0004898c) midp_form_pane

0x47af,	// (0x0004678b) midp_info_popup_window_ParamLimits

0x47af,	// (0x0004678b) midp_info_popup_window

0x0bb4,	// (0x00042b90) bg_popup_sub_pane_cp50_ParamLimits

0x0bb4,	// (0x00042b90) bg_popup_sub_pane_cp50

0x9879,	// (0x0004b855) listscroll_midp_info_pane_ParamLimits

0x9879,	// (0x0004b855) listscroll_midp_info_pane

0x9861,	// (0x0004b83d) listscroll_form_midp_pane_ParamLimits

0x9861,	// (0x0004b83d) listscroll_form_midp_pane

0x986d,	// (0x0004b849) scroll_bar_cp050

0x9841,	// (0x0004b81d) list_midp_pane

0xb579,	// (0x0004d555) signal_pane_g2_cp

0x977b,	// (0x0004b757) listscroll_midp_info_pane_t1_ParamLimits

0x977b,	// (0x0004b757) listscroll_midp_info_pane_t1

0x9793,	// (0x0004b76f) listscroll_midp_info_pane_t2_ParamLimits

0x9793,	// (0x0004b76f) listscroll_midp_info_pane_t2

0x97d1,	// (0x0004b7ad) listscroll_midp_info_pane_t3_ParamLimits

0x97d1,	// (0x0004b7ad) listscroll_midp_info_pane_t3

0x980b,	// (0x0004b7e7) listscroll_midp_info_pane_t4_ParamLimits

0x980b,	// (0x0004b7e7) listscroll_midp_info_pane_t4

0x0003,

0xf835,	// (0x00051811) listscroll_midp_info_pane_t_ParamLimits

0xf835,	// (0x00051811) listscroll_midp_info_pane_t

0x0c34,	// (0x00042c10) scroll_pane_cp21

0x9715,	// (0x0004b6f1) form_midp_field_choice_group_pane

0x971e,	// (0x0004b6fa) form_midp_field_text_pane

0x9761,	// (0x0004b73d) form_midp_field_time_pane

0x9769,	// (0x0004b745) form_midp_gauge_slider_pane

0x9772,	// (0x0004b74e) form_midp_gauge_wait_pane

0xd7f2,	// (0x0004f7ce) form_midp_image_pane

0x5b27,	// (0x00047b03) list_single_midp_pane_ParamLimits

0x5b27,	// (0x00047b03) list_single_midp_pane

0x96d9,	// (0x0004b6b5) form_midp_field_text_pane_t1

0x94c5,	// (0x0004b4a1) input_focus_pane_cp050

0x9704,	// (0x0004b6e0) list_midp_form_text_pane

0x96a8,	// (0x0004b684) form_midp_field_choice_group_pane_t1

0x96b6,	// (0x0004b692) input_focus_pane_cp051

0x96ca,	// (0x0004b6a6) list_midp_choice_pane

0xd7f2,	// (0x0004f7ce) status_idle_pane

0x968c,	// (0x0004b668) form_midp_field_time_pane_t1

0xd7e8,	// (0x0004f7c4) wait_anim_pane_g2_copy1

0x969a,	// (0x0004b676) form_midp_field_time_pane_t2

0x0001,

0x7131,	// (0x0004910d) aid_navinavi_width_2_pane

0xf830,	// (0x0005180c) form_midp_field_time_pane_t

0xd7f2,	// (0x0004f7ce) input_focus_pane_cp052

0xd7f2,	// (0x0004f7ce) bg_input_focus_pane_cp040

0x964c,	// (0x0004b628) form_midp_gauge_slider_pane_t1

0x965a,	// (0x0004b636) form_midp_gauge_slider_pane_t2

0x9668,	// (0x0004b644) form_midp_gauge_slider_pane_t3

0x9676,	// (0x0004b652) form_midp_gauge_slider_pane_t4

0x0003,

0xf827,	// (0x00051803) form_midp_gauge_slider_pane_t

0x9684,	// (0x0004b660) form_midp_slider_pane

0xd84c,	// (0x0004f828) bg_input_focus_pane_cp041_ParamLimits

0xd84c,	// (0x0004f828) bg_input_focus_pane_cp041

0x9619,	// (0x0004b5f5) form_midp_gauge_wait_pane_t1_ParamLimits

0x9619,	// (0x0004b5f5) form_midp_gauge_wait_pane_t1

0x962b,	// (0x0004b607) form_midp_gauge_wait_pane_t2_ParamLimits

0x962b,	// (0x0004b607) form_midp_gauge_wait_pane_t2

0x0001,

0xf822,	// (0x000517fe) form_midp_gauge_wait_pane_t_ParamLimits

0xf822,	// (0x000517fe) form_midp_gauge_wait_pane_t

0x963d,	// (0x0004b619) form_midp_wait_pane_ParamLimits

0x963d,	// (0x0004b619) form_midp_wait_pane

0x95e1,	// (0x0004b5bd) form_midp_image_pane_g1

0x95ea,	// (0x0004b5c6) form_midp_image_pane_t1

0x95f9,	// (0x0004b5d5) form_midp_image_pane_t2

0x9608,	// (0x0004b5e4) form_midp_image_pane_t3

0x0002,

0xf81b,	// (0x000517f7) form_midp_image_pane_t

0x95d8,	// (0x0004b5b4) list_single_midp_pane_g1

0x5b18,	// (0x00047af4) list_single_midp_pane_t1

0x95be,	// (0x0004b59a) list_midp_form_item_pane_ParamLimits

0x95be,	// (0x0004b59a) list_midp_form_item_pane

0x47c4,	// (0x000467a0) list_midp_form_item_pane_t1

0x47d3,	// (0x000467af) midp_ticker_pane_g1

0x47df,	// (0x000467bb) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x0005173f) midp_ticker_pane_g

0x7100,	// (0x000490dc) midp_ticker_pane_t1

0xa9e4,	// (0x0004c9c0) midp_editing_number_pane_t1

0xa9c2,	// (0x0004c99e) midp_editing_number_pane

0xa9d1,	// (0x0004c9ad) midp_ticker_pane

0xa761,	// (0x0004c73d) ai_message_heading_pane

0xd7f2,	// (0x0004f7ce) bg_popup_window_pane_cp14

0xa769,	// (0x0004c745) listscroll_ai_message_pane

0xa6e7,	// (0x0004c6c3) ai_message_heading_pane_g1_ParamLimits

0xa6e7,	// (0x0004c6c3) ai_message_heading_pane_g1

0xa6f3,	// (0x0004c6cf) ai_message_heading_pane_g2_ParamLimits

0xa6f3,	// (0x0004c6cf) ai_message_heading_pane_g2

0xa701,	// (0x0004c6dd) ai_message_heading_pane_g3_ParamLimits

0xa701,	// (0x0004c6dd) ai_message_heading_pane_g3

0xa70d,	// (0x0004c6e9) ai_message_heading_pane_g4_ParamLimits

0xa70d,	// (0x0004c6e9) ai_message_heading_pane_g4

0x0003,

0xf95c,	// (0x00051938) ai_message_heading_pane_g_ParamLimits

0xf95c,	// (0x00051938) ai_message_heading_pane_g

0xa719,	// (0x0004c6f5) ai_message_heading_pane_t1_ParamLimits

0xa719,	// (0x0004c6f5) ai_message_heading_pane_t1

0xa733,	// (0x0004c70f) ai_message_heading_pane_t2_ParamLimits

0xa733,	// (0x0004c70f) ai_message_heading_pane_t2

0x0001,

0xf965,	// (0x00051941) ai_message_heading_pane_t_ParamLimits

0xf965,	// (0x00051941) ai_message_heading_pane_t

0xa747,	// (0x0004c723) bg_popup_heading_pane_cp1_ParamLimits

0xa747,	// (0x0004c723) bg_popup_heading_pane_cp1

0xa6d5,	// (0x0004c6b1) list_ai_message_pane_ParamLimits

0xa6d5,	// (0x0004c6b1) list_ai_message_pane

0x0c34,	// (0x00042c10) scroll_pane_cp10

0xa671,	// (0x0004c64d) list_ai_message_pane_g1

0xa679,	// (0x0004c655) list_ai_message_pane_g2

0x0001,

0xf939,	// (0x00051915) list_ai_message_pane_g

0xa681,	// (0x0004c65d) list_ai_message_pane_t1_ParamLimits

0xa681,	// (0x0004c65d) list_ai_message_pane_t1

0xa696,	// (0x0004c672) list_ai_message_pane_t2_ParamLimits

0xa696,	// (0x0004c672) list_ai_message_pane_t2

0xa6ab,	// (0x0004c687) list_ai_message_pane_t3_ParamLimits

0xa6ab,	// (0x0004c687) list_ai_message_pane_t3

0xa6c0,	// (0x0004c69c) list_ai_message_pane_t4_ParamLimits

0xa6c0,	// (0x0004c69c) list_ai_message_pane_t4

0x0003,

0xf93e,	// (0x0005191a) list_ai_message_pane_t_ParamLimits

0xf93e,	// (0x0005191a) list_ai_message_pane_t

0xa65a,	// (0x0004c636) cell_ai_soft_ind_pane_ParamLimits

0xa65a,	// (0x0004c636) cell_ai_soft_ind_pane

0x7112,	// (0x000490ee) cell_ai_soft_ind_pane_g1_ParamLimits

0x7112,	// (0x000490ee) cell_ai_soft_ind_pane_g1

0xd7f2,	// (0x0004f7ce) grid_highlight_cp1

0x711f,	// (0x000490fb) text_secondary_cp56_ParamLimits

0x711f,	// (0x000490fb) text_secondary_cp56

0xa62f,	// (0x0004c60b) example_general_pane_ParamLimits

0xa62f,	// (0x0004c60b) example_general_pane

0xa63b,	// (0x0004c617) example_parent_pane_g1_ParamLimits

0xa63b,	// (0x0004c617) example_parent_pane_g1

0xa647,	// (0x0004c623) example_parent_pane_t1_ParamLimits

0xa647,	// (0x0004c623) example_parent_pane_t1

0x8cd7,	// (0x0004acb3) popup_preview_text_window_ParamLimits

0x8cd7,	// (0x0004acb3) popup_preview_text_window

0x46e4,	// (0x000466c0) list_single_pane_cp2_g4

0x06ce,	// (0x000426aa) bg_popup_preview_window_pane_ParamLimits

0x06ce,	// (0x000426aa) bg_popup_preview_window_pane

0xa375,	// (0x0004c351) popup_preview_text_window_t1_ParamLimits

0xa375,	// (0x0004c351) popup_preview_text_window_t1

0xa393,	// (0x0004c36f) popup_preview_text_window_t2_ParamLimits

0xa393,	// (0x0004c36f) popup_preview_text_window_t2

0xa3dc,	// (0x0004c3b8) popup_preview_text_window_t3_ParamLimits

0xa3dc,	// (0x0004c3b8) popup_preview_text_window_t3

0xa421,	// (0x0004c3fd) popup_preview_text_window_t4_ParamLimits

0xa421,	// (0x0004c3fd) popup_preview_text_window_t4

0x0004,

0xf90d,	// (0x000518e9) popup_preview_text_window_t_ParamLimits

0xf90d,	// (0x000518e9) popup_preview_text_window_t

0xa49f,	// (0x0004c47b) scroll_pane_cp11

0x9451,	// (0x0004b42d) bg_popup_preview_window_pane_g1

0xa329,	// (0x0004c305) bg_popup_preview_window_pane_g2

0xa333,	// (0x0004c30f) bg_popup_preview_window_pane_g3

0xa33d,	// (0x0004c319) bg_popup_preview_window_pane_g4

0xa347,	// (0x0004c323) bg_popup_preview_window_pane_g5

0xa351,	// (0x0004c32d) bg_popup_preview_window_pane_g6

0xa359,	// (0x0004c335) bg_popup_preview_window_pane_g7

0xa361,	// (0x0004c33d) bg_popup_preview_window_pane_g8

0x6108,	// (0x000480e4) aid_popup_width_pane

0x8cb3,	// (0x0004ac8f) popup_midp_note_alarm_window_ParamLimits

0x8cb3,	// (0x0004ac8f) popup_midp_note_alarm_window

0x0afc,	// (0x00042ad8) data_form_pane_ParamLimits

0x57d5,	// (0x000477b1) form_field_data_pane_g1

0x57df,	// (0x000477bb) form_field_data_pane_t1_ParamLimits

0x0b08,	// (0x00042ae4) input_focus_pane_ParamLimits

0x57f9,	// (0x000477d5) data_form_wide_pane_ParamLimits

0x580a,	// (0x000477e6) form_field_data_wide_pane_g1

0x5816,	// (0x000477f2) form_field_data_wide_pane_t1_ParamLimits

0x0883,	// (0x0004285f) input_focus_pane_cp6_ParamLimits

0x6975,	// (0x00048951) input_popup_find_pane_g1_ParamLimits

0x6975,	// (0x00048951) input_popup_find_pane_g1

0x6ace,	// (0x00048aaa) aid_navi_side_left_pane

0x6ae3,	// (0x00048abf) aid_navi_side_right_pane

0x9d3e,	// (0x0004bd1a) bg_popup_window_pane_cp30_ParamLimits

0x9d3e,	// (0x0004bd1a) bg_popup_window_pane_cp30

0x9db8,	// (0x0004bd94) popup_midp_note_alarm_window_g1_ParamLimits

0x9db8,	// (0x0004bd94) popup_midp_note_alarm_window_g1

0x9de8,	// (0x0004bdc4) popup_midp_note_alarm_window_t1_ParamLimits

0x9de8,	// (0x0004bdc4) popup_midp_note_alarm_window_t1

0x9e89,	// (0x0004be65) popup_midp_note_alarm_window_t2_ParamLimits

0x9e89,	// (0x0004be65) popup_midp_note_alarm_window_t2

0x9f37,	// (0x0004bf13) popup_midp_note_alarm_window_t3_ParamLimits

0x9f37,	// (0x0004bf13) popup_midp_note_alarm_window_t3

0x9f69,	// (0x0004bf45) popup_midp_note_alarm_window_t4_ParamLimits

0x9f69,	// (0x0004bf45) popup_midp_note_alarm_window_t4

0x9f8f,	// (0x0004bf6b) popup_midp_note_alarm_window_t5_ParamLimits

0x9f8f,	// (0x0004bf6b) popup_midp_note_alarm_window_t5

0x000a,

0xf8aa,	// (0x00051886) popup_midp_note_alarm_window_t_ParamLimits

0xf8aa,	// (0x00051886) popup_midp_note_alarm_window_t

0xa03b,	// (0x0004c017) wait_bar_pane_cp1_ParamLimits

0xa03b,	// (0x0004c017) wait_bar_pane_cp1

0xd7f2,	// (0x0004f7ce) wait_anim_pane_copy1

0xd7f2,	// (0x0004f7ce) wait_border_pane_copy1

0x9a23,	// (0x0004b9ff) wait_border_pane_g1_copy1

0x5830,	// (0x0004780c) form_field_popup_pane_g1

0x5838,	// (0x00047814) form_field_popup_pane_t1_ParamLimits

0x0b08,	// (0x00042ae4) input_focus_pane_cp7_ParamLimits

0x0b36,	// (0x00042b12) list_form_pane_ParamLimits

0x5852,	// (0x0004782e) form_field_popup_wide_pane_g1

0x585a,	// (0x00047836) form_field_popup_wide_pane_t1_ParamLimits

0x0b08,	// (0x00042ae4) input_focus_pane_cp8_ParamLimits

0x0b42,	// (0x00042b1e) list_form_wide_pane_ParamLimits

0xab6b,	// (0x0004cb47) aid_size_cell_graphic_pane

0x58e6,	// (0x000478c2) data_form_pane_t1_ParamLimits

0x5b6e,	// (0x00047b4a) data_form_wide_pane_t1_ParamLimits

0x8ffe,	// (0x0004afda) bg_status_flat_pane

0x6519,	// (0x000484f5) title_pane_t1_ParamLimits

0xd814,	// (0x0004f7f0) title_pane_t2_ParamLimits

0xd83a,	// (0x0004f816) title_pane_t3_ParamLimits

0xf55d,	// (0x00051539) title_pane_t_ParamLimits

0x6c1b,	// (0x00048bf7) level_1_signal_ParamLimits

0x6c28,	// (0x00048c04) level_2_signal_ParamLimits

0x6c35,	// (0x00048c11) level_3_signal_ParamLimits

0x6c42,	// (0x00048c1e) level_4_signal_ParamLimits

0x6c4f,	// (0x00048c2b) level_5_signal_ParamLimits

0x6c5c,	// (0x00048c38) level_6_signal_ParamLimits

0x6c69,	// (0x00048c45) level_7_signal_ParamLimits

0x6c1b,	// (0x00048bf7) level_1_battery_ParamLimits

0x6c28,	// (0x00048c04) level_2_battery_ParamLimits

0x6c35,	// (0x00048c11) level_3_battery_ParamLimits

0x6c42,	// (0x00048c1e) level_4_battery_ParamLimits

0x6c4f,	// (0x00048c2b) level_5_battery_ParamLimits

0x6c5c,	// (0x00048c38) level_6_battery_ParamLimits

0x6c69,	// (0x00048c45) level_7_battery_ParamLimits

0x9c43,	// (0x0004bc1f) bg_status_flat_pane_g1

0x9c4b,	// (0x0004bc27) bg_status_flat_pane_g2

0x9c53,	// (0x0004bc2f) bg_status_flat_pane_g3

0x9c5b,	// (0x0004bc37) bg_status_flat_pane_g4

0x9c63,	// (0x0004bc3f) bg_status_flat_pane_g5

0x9c6b,	// (0x0004bc47) bg_status_flat_pane_g6

0x9c73,	// (0x0004bc4f) bg_status_flat_pane_g7

0x6589,	// (0x00048565) tabs_3_active_pane_t1_ParamLimits

0x6589,	// (0x00048565) tabs_3_passive_pane_t1_ParamLimits

0x65a3,	// (0x0004857f) tabs_4_active_pane_t1_ParamLimits

0x65a3,	// (0x0004857f) tabs_4_1_passive_pane_t1_ParamLimits

0x698b,	// (0x00048967) tabs_2_active_pane_t1_ParamLimits

0x698b,	// (0x00048967) tabs_2_passive_pane_t1_ParamLimits

0x2877,	// (0x00044853) bg_active_tab_pane_cp4_ParamLimits

0x699d,	// (0x00048979) tabs_2_long_active_pane_t1_ParamLimits

0x69b0,	// (0x0004898c) bg_passive_tab_pane_cp4_ParamLimits

0x7588,	// (0x00049564) list_single_midp_graphic_pane_t1_ParamLimits

0x2877,	// (0x00044853) bg_active_tab_pane_cp5_ParamLimits

0x69bc,	// (0x00048998) tabs_3_long_active_pane_t1_ParamLimits

0x69b0,	// (0x0004898c) bg_passive_tab_pane_cp5_ParamLimits

0x7588,	// (0x00049564) list_single_midp_graphic_pane_t1

0x8ffe,	// (0x0004afda) bg_status_flat_pane_ParamLimits

0x90c9,	// (0x0004b0a5) indicator_pane_cp2_ParamLimits

0x90c9,	// (0x0004b0a5) indicator_pane_cp2

0x920c,	// (0x0004b1e8) navi_pane_srt_ParamLimits

0x920c,	// (0x0004b1e8) navi_pane_srt

0x9230,	// (0x0004b20c) popup_clock_digital_analogue_window_cp1

0xd890,	// (0x0004f86c) indicator_pane_t1

0x47a7,	// (0x00046783) copy_highlight_pane

0x47a7,	// (0x00046783) cursor_graphics_pane

0x47a7,	// (0x00046783) graphic_within_text_pane

0x47a7,	// (0x00046783) link_highlight_pane

0xa462,	// (0x0004c43e) popup_preview_text_window_t5_ParamLimits

0xa462,	// (0x0004c43e) popup_preview_text_window_t5

0x713b,	// (0x00049117) cursor_digital_pane

0x713b,	// (0x00049117) cursor_primary_pane

0x714c,	// (0x00049128) cursor_primary_small_pane

0x7154,	// (0x00049130) cursor_secondary_pane

0x715c,	// (0x00049138) cursor_title_pane

0x713b,	// (0x00049117) link_highlight_digital_pane

0x7143,	// (0x0004911f) link_highlight_primary_pane

0x714c,	// (0x00049128) link_highlight_primary_small_pane

0x7154,	// (0x00049130) link_highlight_secondary_pane

0x715c,	// (0x00049138) link_highlight_title_pane

0x713b,	// (0x00049117) copy_highlight_digital_pane

0x713b,	// (0x00049117) copy_highlight_primary_pane

0x714c,	// (0x00049128) copy_highlight_primary_small_pane

0x7154,	// (0x00049130) copy_highlight_secondary_pane

0x715c,	// (0x00049138) copy_highlight_title_pane

0x7154,	// (0x00049130) graphic_text_digital_pane

0x9ce1,	// (0x0004bcbd) graphic_text_primary_pane

0x9cea,	// (0x0004bcc6) graphic_text_primary_small_pane

0x714c,	// (0x00049128) graphic_text_secondary_pane

0x713b,	// (0x00049117) graphic_text_title_pane

0x7164,	// (0x00049140) cursor_primary_pane_g1

0x9cd3,	// (0x0004bcaf) cursor_text_primary_t1

0x9cbb,	// (0x0004bc97) cursor_primary_small_pane_g1

0x9cc5,	// (0x0004bca1) cursor_text_primary_small_t1

0x9ca3,	// (0x0004bc7f) cursor_primary_small_pane_g1_copy1

0x9cad,	// (0x0004bc89) cursor_text_primary_small_t1_copy1

0x9c8b,	// (0x0004bc67) cursor_text_title_t1

0x9c99,	// (0x0004bc75) cursor_title_pane_g1

0x7164,	// (0x00049140) cursor_digital_pane_g1

0x716e,	// (0x0004914a) cursor_text_digital_t1

0x717c,	// (0x00049158) link_highlight_primary_pane_g1

0x9c34,	// (0x0004bc10) link_highlight_primary_pane_t1

0x717c,	// (0x00049158) link_highlight_primary_small_pane_g1

0x7184,	// (0x00049160) link_highlight_primary_small_pane_t1

0x7193,	// (0x0004916f) link_highlight_secondary_pane_g1

0x719b,	// (0x00049177) link_highlight_secondary_pane_t1

0x9ba8,	// (0x0004bb84) link_highlight_title_pane_g1

0x9bb0,	// (0x0004bb8c) link_highlight_title_pane_t1

0x9b91,	// (0x0004bb6d) link_highlight_digital_pane_g1

0x9b99,	// (0x0004bb75) link_highlight_digital_pane_t1

0x9a59,	// (0x0004ba35) copy_highlight_primary_pane_g1

0x9a70,	// (0x0004ba4c) copy_highlight_primary_pane_t1

0x9a59,	// (0x0004ba35) copy_highlight_primary_small_pane_g1

0x9a61,	// (0x0004ba3d) copy_highlight_primary_small_pane_t1

0x71aa,	// (0x00049186) copy_highlight_secondary_pane_g1

0x71b2,	// (0x0004918e) copy_highlight_secondary_pane_t1

0x9a42,	// (0x0004ba1e) copy_highlight_title_pane_g1

0x9a4a,	// (0x0004ba26) copy_highlight_title_pane_t1

0x9a59,	// (0x0004ba35) copy_highlight_digital_pane_g1

0xad3b,	// (0x0004cd17) copy_highlight_digital_pane_t1

0xac8f,	// (0x0004cc6b) graphic_text_primary_pane_g1

0xad1f,	// (0x0004ccfb) graphic_text_primary_pane_t1

0xad2d,	// (0x0004cd09) graphic_text_primary_pane_t2

0x0001,

0xf9d9,	// (0x000519b5) graphic_text_primary_pane_t

0xacfb,	// (0x0004ccd7) graphic_text_primary_small_pane_g1

0xad03,	// (0x0004ccdf) graphic_text_primary_small_pane_t1

0xad11,	// (0x0004cced) graphic_text_primary_small_pane_t2

0x0001,

0xf9d4,	// (0x000519b0) graphic_text_primary_small_pane_t

0xacd7,	// (0x0004ccb3) graphic_text_secondary_pane_g1

0xacdf,	// (0x0004ccbb) graphic_text_secondary_pane_t1

0xaced,	// (0x0004ccc9) graphic_text_secondary_pane_t2

0x0001,

0xf9cf,	// (0x000519ab) graphic_text_secondary_pane_t

0xacb3,	// (0x0004cc8f) graphic_text_title_pane_g1

0xacbb,	// (0x0004cc97) graphic_text_title_pane_t1

0xacc9,	// (0x0004cca5) graphic_text_title_pane_t2

0x0001,

0xf9ca,	// (0x000519a6) graphic_text_title_pane_t

0xac8f,	// (0x0004cc6b) graphic_text_digital_pane_g1

0xac97,	// (0x0004cc73) graphic_text_digital_pane_t1

0xaca5,	// (0x0004cc81) graphic_text_digital_pane_t2

0x0001,

0xf9c5,	// (0x000519a1) graphic_text_digital_pane_t

0xd84c,	// (0x0004f828) navi_icon_pane_srt_ParamLimits

0xd84c,	// (0x0004f828) navi_icon_pane_srt

0xd7f2,	// (0x0004f7ce) navi_midp_pane_srt

0xd7f2,	// (0x0004f7ce) navi_navi_pane_srt

0xd84c,	// (0x0004f828) navi_text_pane_srt_ParamLimits

0xd84c,	// (0x0004f828) navi_text_pane_srt

0xac5a,	// (0x0004cc36) navi_navi_icon_text_pane_srt

0xac62,	// (0x0004cc3e) navi_navi_pane_srt_g1_ParamLimits

0xac62,	// (0x0004cc3e) navi_navi_pane_srt_g1

0xac74,	// (0x0004cc50) navi_navi_pane_srt_g2_ParamLimits

0xac74,	// (0x0004cc50) navi_navi_pane_srt_g2

0x0001,

0xf9c0,	// (0x0005199c) navi_navi_pane_srt_g_ParamLimits

0xf9c0,	// (0x0005199c) navi_navi_pane_srt_g

0xac86,	// (0x0004cc62) navi_navi_tabs_pane_srt

0xac5a,	// (0x0004cc36) navi_navi_text_pane_srt

0xac5a,	// (0x0004cc36) navi_navi_volume_pane_srt

0xac4b,	// (0x0004cc27) navi_navi_text_pane_srt_t1

0x793a,	// (0x00049916) navi_navi_volume_pane_srt_g1

0x7942,	// (0x0004991e) volume_small_pane_srt_ParamLimits

0x7942,	// (0x0004991e) volume_small_pane_srt

0x71c1,	// (0x0004919d) volume_small_pane_srt_g1_ParamLimits

0x71c1,	// (0x0004919d) volume_small_pane_srt_g1

0x71d1,	// (0x000491ad) volume_small_pane_srt_g2_ParamLimits

0x71d1,	// (0x000491ad) volume_small_pane_srt_g2

0x71e2,	// (0x000491be) volume_small_pane_srt_g3_ParamLimits

0x71e2,	// (0x000491be) volume_small_pane_srt_g3

0x71f3,	// (0x000491cf) volume_small_pane_srt_g4_ParamLimits

0x71f3,	// (0x000491cf) volume_small_pane_srt_g4

0x7204,	// (0x000491e0) volume_small_pane_srt_g5_ParamLimits

0x7204,	// (0x000491e0) volume_small_pane_srt_g5

0x7215,	// (0x000491f1) volume_small_pane_srt_g6_ParamLimits

0x7215,	// (0x000491f1) volume_small_pane_srt_g6

0x7226,	// (0x00049202) volume_small_pane_srt_g7_ParamLimits

0x7226,	// (0x00049202) volume_small_pane_srt_g7

0x7237,	// (0x00049213) volume_small_pane_srt_g8_ParamLimits

0x7237,	// (0x00049213) volume_small_pane_srt_g8

0x7248,	// (0x00049224) volume_small_pane_srt_g9_ParamLimits

0x7248,	// (0x00049224) volume_small_pane_srt_g9

0x7259,	// (0x00049235) volume_small_pane_srt_g10_ParamLimits

0x7259,	// (0x00049235) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x00051744) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x00051744) volume_small_pane_srt_g

0x0783,	// (0x0004275f) query_popup_data_pane_cp2

0xac31,	// (0x0004cc0d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xac31,	// (0x0004cc0d) navi_navi_icon_text_pane_srt_t1

0x9ce1,	// (0x0004bcbd) navi_tabs_2_long_pane_srt

0x9ce1,	// (0x0004bcbd) navi_tabs_2_pane_srt

0x9ce1,	// (0x0004bcbd) navi_tabs_3_long_pane_srt

0x9ce1,	// (0x0004bcbd) navi_tabs_3_pane_srt

0x9ce1,	// (0x0004bcbd) navi_tabs_4_pane_srt

0x791a,	// (0x000498f6) tabs_2_active_pane_srt_ParamLimits

0x791a,	// (0x000498f6) tabs_2_active_pane_srt

0x792a,	// (0x00049906) tabs_2_passive_pane_srt_ParamLimits

0x792a,	// (0x00049906) tabs_2_passive_pane_srt

0x8910,	// (0x0004a8ec) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8910,	// (0x0004a8ec) bg_passive_tab_pane_cp1_srt

0xabfd,	// (0x0004cbd9) bg_passive_tab_pane_g1_cp1_srt

0x43b8,	// (0x00046394) bg_passive_tab_pane_g2_cp1_srt

0xac06,	// (0x0004cbe2) bg_passive_tab_pane_g3_cp1_srt

0xd84c,	// (0x0004f828) bg_active_tab_pane_cp1_srt_ParamLimits

0xd84c,	// (0x0004f828) bg_active_tab_pane_cp1_srt

0xac0f,	// (0x0004cbeb) tabs_2_active_pane_srt_g1

0xac17,	// (0x0004cbf3) tabs_2_active_pane_srt_t1_ParamLimits

0xac17,	// (0x0004cbf3) tabs_2_active_pane_srt_t1

0xabfd,	// (0x0004cbd9) bg_active_tab_pane_g1_cp1_srt

0x43b8,	// (0x00046394) bg_active_tab_pane_g2_cp1_srt

0xac06,	// (0x0004cbe2) bg_active_tab_pane_g3_cp1_srt

0x78e7,	// (0x000498c3) tabs_3_active_pane_srt_ParamLimits

0x78e7,	// (0x000498c3) tabs_3_active_pane_srt

0x78f8,	// (0x000498d4) tabs_3_passive_pane_cp_srt_ParamLimits

0x78f8,	// (0x000498d4) tabs_3_passive_pane_cp_srt

0x7909,	// (0x000498e5) tabs_3_passive_pane_srt_ParamLimits

0x7909,	// (0x000498e5) tabs_3_passive_pane_srt

0x8910,	// (0x0004a8ec) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8910,	// (0x0004a8ec) bg_passive_tab_pane_cp2_srt

0x726a,	// (0x00049246) bg_passive_tab_pane_g1_cp2_srt

0x43b8,	// (0x00046394) bg_passive_tab_pane_g2_cp2_srt

0x7273,	// (0x0004924f) bg_passive_tab_pane_g3_cp2_srt

0xd84c,	// (0x0004f828) bg_active_tab_pane_cp2_srt_ParamLimits

0xd84c,	// (0x0004f828) bg_active_tab_pane_cp2_srt

0xabe3,	// (0x0004cbbf) tabs_3_active_pane_srt_g1

0xabeb,	// (0x0004cbc7) tabs_3_active_pane_srt_t1_ParamLimits

0xabeb,	// (0x0004cbc7) tabs_3_active_pane_srt_t1

0x726a,	// (0x00049246) bg_active_tab_pane_g1_cp2_srt

0x43b8,	// (0x00046394) bg_active_tab_pane_g2_cp2_srt

0x7273,	// (0x0004924f) bg_active_tab_pane_g3_cp2_srt

0x789f,	// (0x0004987b) tabs_4_active_pane_srt_ParamLimits

0x789f,	// (0x0004987b) tabs_4_active_pane_srt

0x78b1,	// (0x0004988d) tabs_4_passive_pane_cp2_srt_ParamLimits

0x78b1,	// (0x0004988d) tabs_4_passive_pane_cp2_srt

0x889e,	// (0x0004a87a) aid_size_cell_toolbar

0x69b0,	// (0x0004898c) main_idle_act_pane_ParamLimits

0x8ad9,	// (0x0004aab5) popup_large_graphic_colour_window_ParamLimits

0x8e80,	// (0x0004ae5c) popup_toolbar_window_ParamLimits

0x8e80,	// (0x0004ae5c) popup_toolbar_window

0xa9f3,	// (0x0004c9cf) list_single_graphic_2heading_pane_ParamLimits

0xa9f3,	// (0x0004c9cf) list_single_graphic_2heading_pane

0x0e0c,	// (0x00042de8) aid_size_cell_apps_grid_lsc_pane

0x0e1e,	// (0x00042dfa) aid_size_cell_apps_grid_prt_pane

0x8910,	// (0x0004a8ec) bg_wml_button_pane_cp1_ParamLimits

0x8910,	// (0x0004a8ec) bg_wml_button_pane_cp1

0x96d9,	// (0x0004b6b5) form_midp_field_text_pane_t1_ParamLimits

0x94c5,	// (0x0004b4a1) input_focus_pane_cp050_ParamLimits

0x9704,	// (0x0004b6e0) list_midp_form_text_pane_ParamLimits

0x96b6,	// (0x0004b692) input_focus_pane_cp051_ParamLimits

0x96ca,	// (0x0004b6a6) list_midp_choice_pane_ParamLimits

0x957e,	// (0x0004b55a) list_single_2graphic_pane_cp3_ParamLimits

0x957e,	// (0x0004b55a) list_single_2graphic_pane_cp3

0x9597,	// (0x0004b573) list_single_midp_graphic_pane_ParamLimits

0x9597,	// (0x0004b573) list_single_midp_graphic_pane

0x59f0,	// (0x000479cc) list_single_graphic_2heading_pane_g1_ParamLimits

0x59f0,	// (0x000479cc) list_single_graphic_2heading_pane_g1

0x59fc,	// (0x000479d8) list_single_graphic_2heading_pane_g4_ParamLimits

0x59fc,	// (0x000479d8) list_single_graphic_2heading_pane_g4

0x5a08,	// (0x000479e4) list_single_graphic_2heading_pane_g5_ParamLimits

0x5a08,	// (0x000479e4) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x00051797) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x00051797) list_single_graphic_2heading_pane_g

0x5a14,	// (0x000479f0) list_single_graphic_2heading_pane_t1_ParamLimits

0x5a14,	// (0x000479f0) list_single_graphic_2heading_pane_t1

0x5a28,	// (0x00047a04) list_single_graphic_2heading_pane_t2_ParamLimits

0x5a28,	// (0x00047a04) list_single_graphic_2heading_pane_t2

0x5a44,	// (0x00047a20) list_single_graphic_2heading_pane_t3_ParamLimits

0x5a44,	// (0x00047a20) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x0005179e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x0005179e) list_single_graphic_2heading_pane_t

0x938f,	// (0x0004b36b) bg_popup_sub_pane_cp2

0x93b9,	// (0x0004b395) grid_toobar_pane

0x7500,	// (0x000494dc) cell_toolbar_pane_ParamLimits

0x7500,	// (0x000494dc) cell_toolbar_pane

0x93f5,	// (0x0004b3d1) cell_toolbar_pane_g1_ParamLimits

0x93f5,	// (0x0004b3d1) cell_toolbar_pane_g1

0x9409,	// (0x0004b3e5) cell_toolbar_pane_g2_ParamLimits

0x9409,	// (0x0004b3e5) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x000517ac) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x000517ac) cell_toolbar_pane_g

0x942b,	// (0x0004b407) grid_highlight_pane_cp2_ParamLimits

0x942b,	// (0x0004b407) grid_highlight_pane_cp2

0x9445,	// (0x0004b421) toolbar_button_pane

0x9451,	// (0x0004b42d) toolbar_button_pane_g1

0x9459,	// (0x0004b435) toolbar_button_pane_g2

0x9461,	// (0x0004b43d) toolbar_button_pane_g3

0x9469,	// (0x0004b445) toolbar_button_pane_g4

0x9471,	// (0x0004b44d) toolbar_button_pane_g5

0x9479,	// (0x0004b455) toolbar_button_pane_g6

0x9481,	// (0x0004b45d) toolbar_button_pane_g7

0x9489,	// (0x0004b465) toolbar_button_pane_g8

0x9491,	// (0x0004b46d) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x000517b1) toolbar_button_pane_g

0x7544,	// (0x00049520) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7544,	// (0x00049520) list_single_2graphic_pane_g1_cp3

0x7550,	// (0x0004952c) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7550,	// (0x0004952c) list_single_2graphic_pane_g2_cp3

0x460d,	// (0x000465e9) list_single_2graphic_pane_g3_cp3

0x7561,	// (0x0004953d) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7561,	// (0x0004953d) list_single_2graphic_pane_g4_cp3

0x756d,	// (0x00049549) list_single_2graphic_pane_t1_cp3_ParamLimits

0x756d,	// (0x00049549) list_single_2graphic_pane_t1_cp3

0x4601,	// (0x000465dd) list_single_midp_graphic_pane_g2_ParamLimits

0x4601,	// (0x000465dd) list_single_midp_graphic_pane_g2

0x59d8,	// (0x000479b4) aid_zoom_text_primary

0x59e0,	// (0x000479bc) aid_zoom_text_secondary

0x7327,	// (0x00049303) status_small_pane_g7_ParamLimits

0x7327,	// (0x00049303) status_small_pane_g7

0x734a,	// (0x00049326) status_small_pane_t1_ParamLimits

0x6508,	// (0x000484e4) title_pane_g2

0x0003,

0xf554,	// (0x00051530) title_pane_g

0x675d,	// (0x00048739) aid_size_cell_colour_1_pane_ParamLimits

0x675d,	// (0x00048739) aid_size_cell_colour_1_pane

0x6771,	// (0x0004874d) aid_size_cell_colour_2_pane_ParamLimits

0x6771,	// (0x0004874d) aid_size_cell_colour_2_pane

0x6785,	// (0x00048761) aid_size_cell_colour_3_pane_ParamLimits

0x6785,	// (0x00048761) aid_size_cell_colour_3_pane

0x6799,	// (0x00048775) aid_size_cell_colour_4_pane_ParamLimits

0x6799,	// (0x00048775) aid_size_cell_colour_4_pane

0x6a0a,	// (0x000489e6) title_pane_stacon_g1_ParamLimits

0x6a0a,	// (0x000489e6) title_pane_stacon_g1

0x9ac7,	// (0x0004baa3) popup_note_wait_window_g3_ParamLimits

0x9ac7,	// (0x0004baa3) popup_note_wait_window_g3

0x9b3e,	// (0x0004bb1a) popup_note_wait_window_t5_ParamLimits

0x9b3e,	// (0x0004bb1a) popup_note_wait_window_t5

0xd7f2,	// (0x0004f7ce) main_feb_china_hwr_fs_writing_pane

0x89a0,	// (0x0004a97c) popup_feb_china_hwr_fs_window_ParamLimits

0x89a0,	// (0x0004a97c) popup_feb_china_hwr_fs_window

0x75b6,	// (0x00049592) aid_size_cell_hwr_fs_ParamLimits

0x75b6,	// (0x00049592) aid_size_cell_hwr_fs

0x94c5,	// (0x0004b4a1) bg_popup_sub_pane_cp3_ParamLimits

0x94c5,	// (0x0004b4a1) bg_popup_sub_pane_cp3

0x75cb,	// (0x000495a7) grid_hwr_fs_pane_ParamLimits

0x75cb,	// (0x000495a7) grid_hwr_fs_pane

0x75e3,	// (0x000495bf) linegrid_hwr_fs_pane_ParamLimits

0x75e3,	// (0x000495bf) linegrid_hwr_fs_pane

0x75f3,	// (0x000495cf) cell_hwr_fs_pane_ParamLimits

0x75f3,	// (0x000495cf) cell_hwr_fs_pane

0x94d1,	// (0x0004b4ad) linegrid_hwr_fs_pane_g1_ParamLimits

0x94d1,	// (0x0004b4ad) linegrid_hwr_fs_pane_g1

0x94dd,	// (0x0004b4b9) linegrid_hwr_fs_pane_g2_ParamLimits

0x94dd,	// (0x0004b4b9) linegrid_hwr_fs_pane_g2

0x94ef,	// (0x0004b4cb) linegrid_hwr_fs_pane_g3_ParamLimits

0x94ef,	// (0x0004b4cb) linegrid_hwr_fs_pane_g3

0x7617,	// (0x000495f3) linegrid_hwr_fs_pane_g4_ParamLimits

0x7617,	// (0x000495f3) linegrid_hwr_fs_pane_g4

0x7635,	// (0x00049611) linegrid_hwr_fs_pane_g5_ParamLimits

0x7635,	// (0x00049611) linegrid_hwr_fs_pane_g5

0x0004,

0xf800,	// (0x000517dc) linegrid_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x000517dc) linegrid_hwr_fs_pane_g

0x94fb,	// (0x0004b4d7) cell_hwr_fs_pane_g1_ParamLimits

0x94fb,	// (0x0004b4d7) cell_hwr_fs_pane_g1

0x92c6,	// (0x0004b2a2) cell_hwr_fs_pane_g2_ParamLimits

0x92c6,	// (0x0004b2a2) cell_hwr_fs_pane_g2

0x9511,	// (0x0004b4ed) cell_hwr_fs_pane_g3_ParamLimits

0x9511,	// (0x0004b4ed) cell_hwr_fs_pane_g3

0x951e,	// (0x0004b4fa) cell_hwr_fs_pane_g4_ParamLimits

0x951e,	// (0x0004b4fa) cell_hwr_fs_pane_g4

0x0003,

0xf80b,	// (0x000517e7) cell_hwr_fs_pane_g_ParamLimits

0xf80b,	// (0x000517e7) cell_hwr_fs_pane_g

0x764b,	// (0x00049627) cell_hwr_fs_pane_t1

0xd7f2,	// (0x0004f7ce) grid_highlight_pane_cp6

0xd7f2,	// (0x0004f7ce) main_idle_act2_pane

0x0c1b,	// (0x00042bf7) aid_inside_area_popup_secondary

0xa177,	// (0x0004c153) aid_inside_area_window_primary_ParamLimits

0xa177,	// (0x0004c153) aid_inside_area_window_primary

0xad4a,	// (0x0004cd26) ai2_news_ticker_pane

0xad52,	// (0x0004cd2e) aid_size_cell_ai1_link_ParamLimits

0xad52,	// (0x0004cd2e) aid_size_cell_ai1_link

0xad6c,	// (0x0004cd48) popup_ai2_data_window_ParamLimits

0xad6c,	// (0x0004cd48) popup_ai2_data_window

0xad8a,	// (0x0004cd66) popup_ai2_link_window_ParamLimits

0xad8a,	// (0x0004cd66) popup_ai2_link_window

0x94c5,	// (0x0004b4a1) bg_popup_sub_pane_cp4_ParamLimits

0x94c5,	// (0x0004b4a1) bg_popup_sub_pane_cp4

0xada0,	// (0x0004cd7c) grid_ai2_link_pane_ParamLimits

0xada0,	// (0x0004cd7c) grid_ai2_link_pane

0xadb7,	// (0x0004cd93) popup_ai2_link_window_g1_ParamLimits

0xadb7,	// (0x0004cd93) popup_ai2_link_window_g1

0xadc3,	// (0x0004cd9f) popup_ai2_link_window_g2_ParamLimits

0xadc3,	// (0x0004cd9f) popup_ai2_link_window_g2

0x0001,

0xf9de,	// (0x000519ba) popup_ai2_link_window_g_ParamLimits

0xf9de,	// (0x000519ba) popup_ai2_link_window_g

0xadd4,	// (0x0004cdb0) ai2_mp_button_pane

0xaddc,	// (0x0004cdb8) ai2_mp_volume_pane

0x96b6,	// (0x0004b692) bg_popup_sub_pane_cp5_ParamLimits

0x96b6,	// (0x0004b692) bg_popup_sub_pane_cp5

0xade4,	// (0x0004cdc0) heading_ai2_gene_pane_ParamLimits

0xade4,	// (0x0004cdc0) heading_ai2_gene_pane

0xadf0,	// (0x0004cdcc) list_ai2_gene_pane_ParamLimits

0xadf0,	// (0x0004cdcc) list_ai2_gene_pane

0xae38,	// (0x0004ce14) cell_ai2_link_pane_ParamLimits

0xae38,	// (0x0004ce14) cell_ai2_link_pane

0xae4e,	// (0x0004ce2a) cell_ai2_link_pane_g1

0xd7f2,	// (0x0004f7ce) grid_highlight_pane_cp7

0x7957,	// (0x00049933) ai2_mp_volume_pane_g1

0xaf21,	// (0x0004cefd) ai2_mp_volume_pane_g2

0xae96,	// (0x0004ce72) list_ai2_gene_pane_t1

0xaf29,	// (0x0004cf05) ai2_mp_volume_pane_g3

0x0002,

0xf9f7,	// (0x000519d3) ai2_mp_volume_pane_g

0x795f,	// (0x0004993b) volume_small_pane_cp3

0xaf31,	// (0x0004cf0d) aid_size_cell_ai2_button

0xaf39,	// (0x0004cf15) grid_ai2_button_pane

0xaf42,	// (0x0004cf1e) cell_ai2_button_pane_ParamLimits

0xaf42,	// (0x0004cf1e) cell_ai2_button_pane

0xd7e8,	// (0x0004f7c4) cell_ai2_button_pane_g1

0xd7f2,	// (0x0004f7ce) grid_highlight_pane_cp8

0xaee1,	// (0x0004cebd) ai2_gene_pane_t1_ParamLimits

0xaee1,	// (0x0004cebd) ai2_gene_pane_t1

0x8894,	// (0x0004a870) aid_height_parent_landscape

0xa80a,	// (0x0004c7e6) aid_height_set_list

0xa81b,	// (0x0004c7f7) aid_size_parent

0xab6b,	// (0x0004cb47) aid_size_cell_graphic_pane_ParamLimits

0xae00,	// (0x0004cddc) popup_ai2_data_window_g1_ParamLimits

0xae00,	// (0x0004cddc) popup_ai2_data_window_g1

0xae0c,	// (0x0004cde8) ai2_news_ticker_pane_g1

0xae14,	// (0x0004cdf0) ai2_news_ticker_pane_g2

0x0001,

0xf9e3,	// (0x000519bf) ai2_news_ticker_pane_g

0xae1c,	// (0x0004cdf8) ai2_news_ticker_pane_t1

0xae2a,	// (0x0004ce06) ai2_news_ticker_pane_t2

0x0001,

0xf9e8,	// (0x000519c4) ai2_news_ticker_pane_t

0xae57,	// (0x0004ce33) heading_ai2_gene_pane_g1

0xae5f,	// (0x0004ce3b) heading_ai2_gene_pane_t1_ParamLimits

0xae5f,	// (0x0004ce3b) heading_ai2_gene_pane_t1

0xae74,	// (0x0004ce50) list_highlight_pane_cp6

0xae7c,	// (0x0004ce58) ai2_gene_pane_ParamLimits

0xae7c,	// (0x0004ce58) ai2_gene_pane

0xaea4,	// (0x0004ce80) list_ai2_gene_pane_t2

0x0001,

0xf9ed,	// (0x000519c9) list_ai2_gene_pane_t

0xaeb2,	// (0x0004ce8e) list_highlight_pane_cp8_ParamLimits

0xaeb2,	// (0x0004ce8e) list_highlight_pane_cp8

0xaec3,	// (0x0004ce9f) ai2_gene_pane_g1_ParamLimits

0xaec3,	// (0x0004ce9f) ai2_gene_pane_g1

0xaed5,	// (0x0004ceb1) ai2_gene_pane_g2_ParamLimits

0xaed5,	// (0x0004ceb1) ai2_gene_pane_g2

0x0001,

0xf9f2,	// (0x000519ce) ai2_gene_pane_g_ParamLimits

0xf9f2,	// (0x000519ce) ai2_gene_pane_g

0x0a9e,	// (0x00042a7a) scroll_pane_cp12

0x74bf,	// (0x0004949b) control_pane_t3_ParamLimits

0x74bf,	// (0x0004949b) control_pane_t3

0x733b,	// (0x00049317) status_small_pane_g8_ParamLimits

0x733b,	// (0x00049317) status_small_pane_g8

0x8a9e,	// (0x0004aa7a) popup_find_window_ParamLimits

0x8cc9,	// (0x0004aca5) popup_note_image_window_ParamLimits

0x5a5c,	// (0x00047a38) list_double2_graphic_pane_vc_g1_ParamLimits

0x5a5c,	// (0x00047a38) list_double2_graphic_pane_vc_g1

0x4718,	// (0x000466f4) list_double2_graphic_pane_vc_g2_ParamLimits

0x4718,	// (0x000466f4) list_double2_graphic_pane_vc_g2

0x7530,	// (0x0004950c) list_double2_graphic_pane_vc_g3_ParamLimits

0x7530,	// (0x0004950c) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x000517a5) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x000517a5) list_double2_graphic_pane_vc_g

0x5a68,	// (0x00047a44) list_double2_graphic_pane_vc_t1_ParamLimits

0x5a68,	// (0x00047a44) list_double2_graphic_pane_vc_t1

0x4718,	// (0x000466f4) list_single_heading_pane_vc_g1_ParamLimits

0x4718,	// (0x000466f4) list_single_heading_pane_vc_g1

0x7530,	// (0x0004950c) list_single_heading_pane_vc_g2_ParamLimits

0x7530,	// (0x0004950c) list_single_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x000517c6) list_single_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x000517c6) list_single_heading_pane_vc_g

0x5a7e,	// (0x00047a5a) list_single_heading_pane_vc_t1_ParamLimits

0x5a7e,	// (0x00047a5a) list_single_heading_pane_vc_t1

0x5a96,	// (0x00047a72) list_single_heading_pane_vc_t2_ParamLimits

0x5a96,	// (0x00047a72) list_single_heading_pane_vc_t2

0x0001,

0xf7ef,	// (0x000517cb) list_single_heading_pane_vc_t_ParamLimits

0xf7ef,	// (0x000517cb) list_single_heading_pane_vc_t

0x759e,	// (0x0004957a) list_setting_number_pane_vc_g1_ParamLimits

0x759e,	// (0x0004957a) list_setting_number_pane_vc_g1

0x75aa,	// (0x00049586) list_setting_number_pane_vc_g2_ParamLimits

0x75aa,	// (0x00049586) list_setting_number_pane_vc_g2

0x0001,

0xf7f4,	// (0x000517d0) list_setting_number_pane_vc_g_ParamLimits

0xf7f4,	// (0x000517d0) list_setting_number_pane_vc_g

0x5aa8,	// (0x00047a84) list_setting_number_pane_vc_t1_ParamLimits

0x5aa8,	// (0x00047a84) list_setting_number_pane_vc_t1

0x5abc,	// (0x00047a98) list_setting_number_pane_vc_t2_ParamLimits

0x5abc,	// (0x00047a98) list_setting_number_pane_vc_t2

0x5ad8,	// (0x00047ab4) list_setting_number_pane_vc_t3_ParamLimits

0x5ad8,	// (0x00047ab4) list_setting_number_pane_vc_t3

0x0002,

0xf7f9,	// (0x000517d5) list_setting_number_pane_vc_t_ParamLimits

0xf7f9,	// (0x000517d5) list_setting_number_pane_vc_t

0x5b06,	// (0x00047ae2) set_value_pane_vc_ParamLimits

0x5b06,	// (0x00047ae2) set_value_pane_vc

0xa9f3,	// (0x0004c9cf) list_double2_graphic_pane_vc_ParamLimits

0xa9f3,	// (0x0004c9cf) list_double2_graphic_pane_vc

0xa9f3,	// (0x0004c9cf) list_double2_large_graphic_pane_vc_ParamLimits

0xa9f3,	// (0x0004c9cf) list_double2_large_graphic_pane_vc

0xa9f3,	// (0x0004c9cf) list_double2_pane_vc_ParamLimits

0xa9f3,	// (0x0004c9cf) list_double2_pane_vc

0xa9f3,	// (0x0004c9cf) list_double_graphic_heading_pane_vc_ParamLimits

0xa9f3,	// (0x0004c9cf) list_double_graphic_heading_pane_vc

0xa9f3,	// (0x0004c9cf) list_double_graphic_pane_vc_ParamLimits

0xa9f3,	// (0x0004c9cf) list_double_graphic_pane_vc

0xa9f3,	// (0x0004c9cf) list_double_heading_pane_vc_ParamLimits

0xa9f3,	// (0x0004c9cf) list_double_heading_pane_vc

0xa9f3,	// (0x0004c9cf) list_double_large_graphic_pane_vc_ParamLimits

0xa9f3,	// (0x0004c9cf) list_double_large_graphic_pane_vc

0xa9f3,	// (0x0004c9cf) list_double_number_pane_vc_ParamLimits

0xa9f3,	// (0x0004c9cf) list_double_number_pane_vc

0xa9f3,	// (0x0004c9cf) list_double_pane_vc_ParamLimits

0xa9f3,	// (0x0004c9cf) list_double_pane_vc

0xa9f3,	// (0x0004c9cf) list_double_time_pane_vc_ParamLimits

0xa9f3,	// (0x0004c9cf) list_double_time_pane_vc

0xa9f3,	// (0x0004c9cf) list_setting_number_pane_vc_ParamLimits

0xa9f3,	// (0x0004c9cf) list_setting_number_pane_vc

0xa9f3,	// (0x0004c9cf) list_setting_pane_vc_ParamLimits

0xa9f3,	// (0x0004c9cf) list_setting_pane_vc

0xa9f3,	// (0x0004c9cf) list_single_graphic_heading_pane_vc_ParamLimits

0xa9f3,	// (0x0004c9cf) list_single_graphic_heading_pane_vc

0xa9f3,	// (0x0004c9cf) list_single_heading_pane_vc_ParamLimits

0xa9f3,	// (0x0004c9cf) list_single_heading_pane_vc

0xaa07,	// (0x0004c9e3) list_single_number_heading_pane_vc_ParamLimits

0xaa07,	// (0x0004c9e3) list_single_number_heading_pane_vc

0x5a5c,	// (0x00047a38) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5a5c,	// (0x00047a38) list_double_graphic_heading_pane_vc_g1

0x7968,	// (0x00049944) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x7968,	// (0x00049944) list_double_graphic_heading_pane_vc_g2

0x7974,	// (0x00049950) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7974,	// (0x00049950) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9fe,	// (0x000519da) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9fe,	// (0x000519da) list_double_graphic_heading_pane_vc_g

0x5bba,	// (0x00047b96) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5bba,	// (0x00047b96) list_double_graphic_heading_pane_vc_t1

0x5bd0,	// (0x00047bac) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5bd0,	// (0x00047bac) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa05,	// (0x000519e1) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa05,	// (0x000519e1) list_double_graphic_heading_pane_vc_t

0x759e,	// (0x0004957a) list_setting_pane_vc_g1_ParamLimits

0x759e,	// (0x0004957a) list_setting_pane_vc_g1

0x75aa,	// (0x00049586) list_setting_pane_vc_g2_ParamLimits

0x75aa,	// (0x00049586) list_setting_pane_vc_g2

0x0001,

0xf7f4,	// (0x000517d0) list_setting_pane_vc_g_ParamLimits

0xf7f4,	// (0x000517d0) list_setting_pane_vc_g

0x5bee,	// (0x00047bca) list_setting_pane_vc_t1_ParamLimits

0x5bee,	// (0x00047bca) list_setting_pane_vc_t1

0x5c0a,	// (0x00047be6) list_setting_pane_vc_t2_ParamLimits

0x5c0a,	// (0x00047be6) list_setting_pane_vc_t2

0x0001,

0xfa33,	// (0x00051a0f) list_setting_pane_vc_t_ParamLimits

0xfa33,	// (0x00051a0f) list_setting_pane_vc_t

0x5b06,	// (0x00047ae2) set_value_pane_cp_vc_ParamLimits

0x5b06,	// (0x00047ae2) set_value_pane_cp_vc

0x4718,	// (0x000466f4) list_single_number_heading_pane_vc_g1_ParamLimits

0x4718,	// (0x000466f4) list_single_number_heading_pane_vc_g1

0x7530,	// (0x0004950c) list_single_number_heading_pane_vc_g2_ParamLimits

0x7530,	// (0x0004950c) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x000517c6) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x000517c6) list_single_number_heading_pane_vc_g

0x5a7e,	// (0x00047a5a) list_single_number_heading_pane_vc_t1_ParamLimits

0x5a7e,	// (0x00047a5a) list_single_number_heading_pane_vc_t1

0x5c26,	// (0x00047c02) list_single_number_heading_pane_vc_t2_ParamLimits

0x5c26,	// (0x00047c02) list_single_number_heading_pane_vc_t2

0x5c38,	// (0x00047c14) list_single_number_heading_pane_vc_t3_ParamLimits

0x5c38,	// (0x00047c14) list_single_number_heading_pane_vc_t3

0x0002,

0xfa38,	// (0x00051a14) list_single_number_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x00051a14) list_single_number_heading_pane_vc_t

0x5a5c,	// (0x00047a38) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5a5c,	// (0x00047a38) list_single_graphic_heading_pane_vc_g1

0x4718,	// (0x000466f4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4718,	// (0x000466f4) list_single_graphic_heading_pane_vc_g4

0x7530,	// (0x0004950c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7530,	// (0x0004950c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x000517a5) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x000517a5) list_single_graphic_heading_pane_vc_g

0x5a7e,	// (0x00047a5a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5a7e,	// (0x00047a5a) list_single_graphic_heading_pane_vc_t1

0x5c4a,	// (0x00047c26) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5c4a,	// (0x00047c26) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3f,	// (0x00051a1b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3f,	// (0x00051a1b) list_single_graphic_heading_pane_vc_t

0x4718,	// (0x000466f4) list_double2_pane_vc_g1_ParamLimits

0x4718,	// (0x000466f4) list_double2_pane_vc_g1

0x7530,	// (0x0004950c) list_double2_pane_vc_g2_ParamLimits

0x7530,	// (0x0004950c) list_double2_pane_vc_g2

0x0001,

0xf7ea,	// (0x000517c6) list_double2_pane_vc_g_ParamLimits

0xf7ea,	// (0x000517c6) list_double2_pane_vc_g

0x5c5c,	// (0x00047c38) list_double2_pane_vc_t1_ParamLimits

0x5c5c,	// (0x00047c38) list_double2_pane_vc_t1

0x7980,	// (0x0004995c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7980,	// (0x0004995c) list_double2_large_graphic_pane_vc_g1

0x4718,	// (0x000466f4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4718,	// (0x000466f4) list_double2_large_graphic_pane_vc_g2

0x7530,	// (0x0004950c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x7530,	// (0x0004950c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa44,	// (0x00051a20) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa44,	// (0x00051a20) list_double2_large_graphic_pane_vc_g

0x5c72,	// (0x00047c4e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5c72,	// (0x00047c4e) list_double2_large_graphic_pane_vc_t1

0x798c,	// (0x00049968) list_double_time_pane_vc_g1_ParamLimits

0x798c,	// (0x00049968) list_double_time_pane_vc_g1

0x7998,	// (0x00049974) list_double_time_pane_vc_g2_ParamLimits

0x7998,	// (0x00049974) list_double_time_pane_vc_g2

0x0001,

0xfa4b,	// (0x00051a27) list_double_time_pane_vc_g_ParamLimits

0xfa4b,	// (0x00051a27) list_double_time_pane_vc_g

0x5c88,	// (0x00047c64) list_double_time_pane_vc_t1_ParamLimits

0x5c88,	// (0x00047c64) list_double_time_pane_vc_t1

0x5cb2,	// (0x00047c8e) list_double_time_pane_vc_t2_ParamLimits

0x5cb2,	// (0x00047c8e) list_double_time_pane_vc_t2

0x5cfb,	// (0x00047cd7) list_double_time_pane_vc_t3_ParamLimits

0x5cfb,	// (0x00047cd7) list_double_time_pane_vc_t3

0x5d0d,	// (0x00047ce9) list_double_time_pane_vc_t4_ParamLimits

0x5d0d,	// (0x00047ce9) list_double_time_pane_vc_t4

0x0003,

0xfa50,	// (0x00051a2c) list_double_time_pane_vc_t_ParamLimits

0xfa50,	// (0x00051a2c) list_double_time_pane_vc_t

0x4718,	// (0x000466f4) list_double_pane_vc_g1_ParamLimits

0x4718,	// (0x000466f4) list_double_pane_vc_g1

0x7530,	// (0x0004950c) list_double_pane_vc_g2_ParamLimits

0x7530,	// (0x0004950c) list_double_pane_vc_g2

0x0001,

0xf7ea,	// (0x000517c6) list_double_pane_vc_g_ParamLimits

0xf7ea,	// (0x000517c6) list_double_pane_vc_g

0x5d32,	// (0x00047d0e) list_double_pane_vc_t1_ParamLimits

0x5d32,	// (0x00047d0e) list_double_pane_vc_t1

0x5d46,	// (0x00047d22) list_double_pane_vc_t2_ParamLimits

0x5d46,	// (0x00047d22) list_double_pane_vc_t2

0x0001,

0xfa59,	// (0x00051a35) list_double_pane_vc_t_ParamLimits

0xfa59,	// (0x00051a35) list_double_pane_vc_t

0x4718,	// (0x000466f4) list_double_number_pane_vc_g1_ParamLimits

0x4718,	// (0x000466f4) list_double_number_pane_vc_g1

0x7530,	// (0x0004950c) list_double_number_pane_vc_g2_ParamLimits

0x7530,	// (0x0004950c) list_double_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x000517c6) list_double_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x000517c6) list_double_number_pane_vc_g

0x5d5c,	// (0x00047d38) list_double_number_pane_vc_t1_ParamLimits

0x5d5c,	// (0x00047d38) list_double_number_pane_vc_t1

0x5d70,	// (0x00047d4c) list_double_number_pane_vc_t2_ParamLimits

0x5d70,	// (0x00047d4c) list_double_number_pane_vc_t2

0x5d84,	// (0x00047d60) list_double_number_pane_vc_t3_ParamLimits

0x5d84,	// (0x00047d60) list_double_number_pane_vc_t3

0x0002,

0xfa5e,	// (0x00051a3a) list_double_number_pane_vc_t_ParamLimits

0xfa5e,	// (0x00051a3a) list_double_number_pane_vc_t

0x79a4,	// (0x00049980) list_double_large_graphic_pane_vc_g1_ParamLimits

0x79a4,	// (0x00049980) list_double_large_graphic_pane_vc_g1

0x79b5,	// (0x00049991) list_double_large_graphic_pane_vc_g2_ParamLimits

0x79b5,	// (0x00049991) list_double_large_graphic_pane_vc_g2

0x7530,	// (0x0004950c) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7530,	// (0x0004950c) list_double_large_graphic_pane_vc_g3

0x5d9a,	// (0x00047d76) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5d9a,	// (0x00047d76) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa65,	// (0x00051a41) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa65,	// (0x00051a41) list_double_large_graphic_pane_vc_g

0x5da6,	// (0x00047d82) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5da6,	// (0x00047d82) list_double_large_graphic_pane_vc_t1

0x5dbf,	// (0x00047d9b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5dbf,	// (0x00047d9b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6e,	// (0x00051a4a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6e,	// (0x00051a4a) list_double_large_graphic_pane_vc_t

0x7968,	// (0x00049944) list_double_heading_pane_vc_g1_ParamLimits

0x7968,	// (0x00049944) list_double_heading_pane_vc_g1

0x7974,	// (0x00049950) list_double_heading_pane_vc_g2_ParamLimits

0x7974,	// (0x00049950) list_double_heading_pane_vc_g2

0x0001,

0xfa73,	// (0x00051a4f) list_double_heading_pane_vc_g_ParamLimits

0xfa73,	// (0x00051a4f) list_double_heading_pane_vc_g

0x5dd6,	// (0x00047db2) list_double_heading_pane_vc_t1_ParamLimits

0x5dd6,	// (0x00047db2) list_double_heading_pane_vc_t1

0x5a7e,	// (0x00047a5a) list_double_heading_pane_vc_t2_ParamLimits

0x5a7e,	// (0x00047a5a) list_double_heading_pane_vc_t2

0x0001,

0xfa78,	// (0x00051a54) list_double_heading_pane_vc_t_ParamLimits

0xfa78,	// (0x00051a54) list_double_heading_pane_vc_t

0x5a5c,	// (0x00047a38) list_double_graphic_pane_vc_g1_ParamLimits

0x5a5c,	// (0x00047a38) list_double_graphic_pane_vc_g1

0x79c4,	// (0x000499a0) list_double_graphic_pane_vc_g2_ParamLimits

0x79c4,	// (0x000499a0) list_double_graphic_pane_vc_g2

0x79d3,	// (0x000499af) list_double_graphic_pane_vc_g3_ParamLimits

0x79d3,	// (0x000499af) list_double_graphic_pane_vc_g3

0x0002,

0xfa7d,	// (0x00051a59) list_double_graphic_pane_vc_g_ParamLimits

0xfa7d,	// (0x00051a59) list_double_graphic_pane_vc_g

0x5de8,	// (0x00047dc4) list_double_graphic_pane_vc_t1_ParamLimits

0x5de8,	// (0x00047dc4) list_double_graphic_pane_vc_t1

0x5dfc,	// (0x00047dd8) list_double_graphic_pane_vc_t2_ParamLimits

0x5dfc,	// (0x00047dd8) list_double_graphic_pane_vc_t2

0x0001,

0xfa84,	// (0x00051a60) list_double_graphic_pane_vc_t_ParamLimits

0xfa84,	// (0x00051a60) list_double_graphic_pane_vc_t

0x6114,	// (0x000480f0) aid_size_cell_fastswap

0x611c,	// (0x000480f8) aid_size_cell_touch_ParamLimits

0x611c,	// (0x000480f8) aid_size_cell_touch

0x637d,	// (0x00048359) popup_fast_swap_wide_window_ParamLimits

0x637d,	// (0x00048359) popup_fast_swap_wide_window

0x649b,	// (0x00048477) touch_pane_ParamLimits

0x649b,	// (0x00048477) touch_pane

0x0af4,	// (0x00042ad0) button_value_adjust_pane_cp2

0x5715,	// (0x000476f1) button_value_adjust_pane_cp4

0x573d,	// (0x00047719) form_field_data_pane_cp2

0x5762,	// (0x0004773e) form_field_data_wide_pane_cp2

0x0e5a,	// (0x00042e36) bg_scroll_pane_ParamLimits

0x6bf2,	// (0x00048bce) scroll_handle_pane_ParamLimits

0x6c06,	// (0x00048be2) scroll_sc2_down_pane_ParamLimits

0x6c06,	// (0x00048be2) scroll_sc2_down_pane

0x0e8b,	// (0x00042e67) scroll_sc2_up_pane_ParamLimits

0x0e8b,	// (0x00042e67) scroll_sc2_up_pane

0xb661,	// (0x0004d63d) grid_wheel_folder_pane_g1_ParamLimits

0xb661,	// (0x0004d63d) grid_wheel_folder_pane_g1

0x6f2a,	// (0x00048f06) clock_nsta_pane_cp2_ParamLimits

0x6f2a,	// (0x00048f06) clock_nsta_pane_cp2

0x69b0,	// (0x0004898c) listscroll_midp_pane_ParamLimits

0x705b,	// (0x00049037) midp_canvas_pane

0x888c,	// (0x0004a868) nsta_clock_indic_pane

0x88da,	// (0x0004a8b6) listscroll_form_pane_vc

0x88fe,	// (0x0004a8da) listscroll_set_pane_vc_ParamLimits

0x88fe,	// (0x0004a8da) listscroll_set_pane_vc

0x901a,	// (0x0004aff6) clock_nsta_pane

0x9097,	// (0x0004b073) indicator_nsta_pane

0x938f,	// (0x0004b36b) bg_popup_sub_pane_cp2_ParamLimits

0x93a3,	// (0x0004b37f) find_pane_cp2_ParamLimits

0x93a3,	// (0x0004b37f) find_pane_cp2

0x93b9,	// (0x0004b395) grid_toobar_pane_ParamLimits

0x9499,	// (0x0004b475) list_form_gen_pane_vc_ParamLimits

0x9499,	// (0x0004b475) list_form_gen_pane_vc

0x94af,	// (0x0004b48b) scroll_pane_cp8_vc_ParamLimits

0x94af,	// (0x0004b48b) scroll_pane_cp8_vc

0x952b,	// (0x0004b507) data_form_wide_pane_vc_ParamLimits

0x952b,	// (0x0004b507) data_form_wide_pane_vc

0x9537,	// (0x0004b513) form_field_data_wide_pane_vc_g1

0x953f,	// (0x0004b51b) form_field_data_wide_pane_vc_t1_ParamLimits

0x953f,	// (0x0004b51b) form_field_data_wide_pane_vc_t1

0x0b08,	// (0x00042ae4) input_focus_pane_cp6_vc_ParamLimits

0x0b08,	// (0x00042ae4) input_focus_pane_cp6_vc

0x9841,	// (0x0004b81d) list_midp_pane_ParamLimits

0x984d,	// (0x0004b829) scroll_pane_cp16_ParamLimits

0x984d,	// (0x0004b829) scroll_pane_cp16

0x989b,	// (0x0004b877) button_value_adjust_pane_ParamLimits

0x989b,	// (0x0004b877) button_value_adjust_pane

0xa82d,	// (0x0004c809) button_value_adjust_pane_cp6_ParamLimits

0xa82d,	// (0x0004c809) button_value_adjust_pane_cp6

0xa97b,	// (0x0004c957) settings_code_pane_cp_ParamLimits

0xa97b,	// (0x0004c957) settings_code_pane_cp

0xd7e8,	// (0x0004f7c4) cell_touch_pane_g1

0xd7e8,	// (0x0004f7c4) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x000516ea) cell_touch_pane_g

0xaf54,	// (0x0004cf30) cell_touch_pane_cp_ParamLimits

0xaf54,	// (0x0004cf30) cell_touch_pane_cp

0xaf64,	// (0x0004cf40) cell_touch_pane_ParamLimits

0xaf64,	// (0x0004cf40) cell_touch_pane

0xd7e8,	// (0x0004f7c4) scroll_sc2_down_pane_g1

0xd7e8,	// (0x0004f7c4) scroll_sc2_up_pane_g1

0xd7f2,	// (0x0004f7ce) bg_set_opt_pane_cp4_vc

0xaf75,	// (0x0004cf51) list_set_graphic_pane_vc_g1_ParamLimits

0xaf75,	// (0x0004cf51) list_set_graphic_pane_vc_g1

0x2622,	// (0x000445fe) list_set_graphic_pane_vc_g2_ParamLimits

0x2622,	// (0x000445fe) list_set_graphic_pane_vc_g2

0x0001,

0xfa0a,	// (0x000519e6) list_set_graphic_pane_vc_g_ParamLimits

0xfa0a,	// (0x000519e6) list_set_graphic_pane_vc_g

0xaf81,	// (0x0004cf5d) text_primary_small_cp13_vc_ParamLimits

0xaf81,	// (0x0004cf5d) text_primary_small_cp13_vc

0xaf99,	// (0x0004cf75) list_set_graphic_pane_vc_ParamLimits

0xaf99,	// (0x0004cf75) list_set_graphic_pane_vc

0xd7f2,	// (0x0004f7ce) input_focus_pane_cp2_vc

0xd7e8,	// (0x0004f7c4) setting_code_pane_vc_g1

0xd863,	// (0x0004f83f) setting_code_pane_vc_t1

0xafae,	// (0x0004cf8a) set_text_pane_vc_t1_ParamLimits

0xafae,	// (0x0004cf8a) set_text_pane_vc_t1

0xd7f2,	// (0x0004f7ce) input_focus_pane_cp1_vc

0xafcc,	// (0x0004cfa8) list_set_text_pane_vc

0xd7e8,	// (0x0004f7c4) setting_text_pane_vc_g1

0xd7f2,	// (0x0004f7ce) bg_set_opt_pane_cp2_vc

0xd85a,	// (0x0004f836) setting_slider_graphic_pane_vc_g1

0xafd6,	// (0x0004cfb2) setting_slider_graphic_pane_vc_t1

0xafe8,	// (0x0004cfc4) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0f,	// (0x000519eb) setting_slider_graphic_pane_vc_t

0xaffa,	// (0x0004cfd6) slider_set_pane_cp_vc

0xb004,	// (0x0004cfe0) slider_set_pane_vc_g1

0xb00d,	// (0x0004cfe9) slider_set_pane_vc_g2

0x0006,

0xfa14,	// (0x000519f0) slider_set_pane_vc_g

0x0b63,	// (0x00042b3f) set_opt_bg_pane_g1_copy1

0x0b6b,	// (0x00042b47) set_opt_bg_pane_g2_copy1

0xb039,	// (0x0004d015) set_opt_bg_pane_g3_copy1

0x0b7b,	// (0x00042b57) set_opt_bg_pane_g4_copy1

0x0b83,	// (0x00042b5f) set_opt_bg_pane_g5_copy1

0x0b8b,	// (0x00042b67) set_opt_bg_pane_g6_copy1

0xb043,	// (0x0004d01f) set_opt_bg_pane_g7_copy1

0xb04d,	// (0x0004d029) set_opt_bg_pane_g8_copy1

0xb057,	// (0x0004d033) set_opt_bg_pane_g9_copy1

0xd7f2,	// (0x0004f7ce) bg_set_opt_pane_cp_vc

0xb061,	// (0x0004d03d) setting_slider_pane_vc_t1

0xb070,	// (0x0004d04c) setting_slider_pane_vc_t2

0xb082,	// (0x0004d05e) setting_slider_pane_vc_t3

0x0002,

0xfa23,	// (0x000519ff) setting_slider_pane_vc_t

0xb094,	// (0x0004d070) slider_set_pane_vc

0x7659,	// (0x00049635) volume_set_pane_vc_g1

0x7662,	// (0x0004963e) volume_set_pane_vc_g2

0x766b,	// (0x00049647) volume_set_pane_vc_g3

0x7674,	// (0x00049650) volume_set_pane_vc_g4

0x767d,	// (0x00049659) volume_set_pane_vc_g5

0x7686,	// (0x00049662) volume_set_pane_vc_g6

0x768f,	// (0x0004966b) volume_set_pane_vc_g7

0x7698,	// (0x00049674) volume_set_pane_vc_g8

0x76a1,	// (0x0004967d) volume_set_pane_vc_g9

0x76aa,	// (0x00049686) volume_set_pane_vc_g10

0x0009,

0xf8c1,	// (0x0005189d) volume_set_pane_vc_g

0xb09e,	// (0x0004d07a) volume_set_pane_vc

0xb0a8,	// (0x0004d084) button_value_adjust_pane_cp1_vc

0xb0b2,	// (0x0004d08e) list_highlight_pane_cp2_vc

0xb0bb,	// (0x0004d097) list_set_pane_vc_ParamLimits

0xb0bb,	// (0x0004d097) list_set_pane_vc

0xb12b,	// (0x0004d107) main_pane_set_vc_t1_ParamLimits

0xb12b,	// (0x0004d107) main_pane_set_vc_t1

0xb140,	// (0x0004d11c) main_pane_set_vc_t2_ParamLimits

0xb140,	// (0x0004d11c) main_pane_set_vc_t2

0xb152,	// (0x0004d12e) main_pane_set_vc_t3_ParamLimits

0xb152,	// (0x0004d12e) main_pane_set_vc_t3

0xb166,	// (0x0004d142) main_pane_set_vc_t4_ParamLimits

0xb166,	// (0x0004d142) main_pane_set_vc_t4

0x0003,

0xfa2a,	// (0x00051a06) main_pane_set_vc_t_ParamLimits

0xfa2a,	// (0x00051a06) main_pane_set_vc_t

0xb17a,	// (0x0004d156) setting_code_pane_vc_ParamLimits

0xb17a,	// (0x0004d156) setting_code_pane_vc

0xb18b,	// (0x0004d167) setting_slider_graphic_pane_vc

0xb18b,	// (0x0004d167) setting_slider_pane_vc

0xb18b,	// (0x0004d167) setting_text_pane_vc

0xb18b,	// (0x0004d167) setting_volume_pane_vc

0xb195,	// (0x0004d171) scroll_pane_cp121_vc

0x0ae2,	// (0x00042abe) set_content_pane_vc

0xb19d,	// (0x0004d179) button_value_adjust_pane_g1

0xb1a6,	// (0x0004d182) button_value_adjust_pane_g2

0x0001,

0xfa89,	// (0x00051a65) button_value_adjust_pane_g

0xb1af,	// (0x0004d18b) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb1af,	// (0x0004d18b) form_field_slider_wide_pane_vc_t1

0xb1c1,	// (0x0004d19d) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb1c1,	// (0x0004d19d) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8e,	// (0x00051a6a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8e,	// (0x00051a6a) form_field_slider_wide_pane_vc_t

0xd8b9,	// (0x0004f895) input_focus_pane_cp10_vc_ParamLimits

0xd8b9,	// (0x0004f895) input_focus_pane_cp10_vc

0xb1ed,	// (0x0004d1c9) slider_cont_pane_cp1_vc_ParamLimits

0xb1ed,	// (0x0004d1c9) slider_cont_pane_cp1_vc

0xb1ff,	// (0x0004d1db) slider_form_pane_g1_cp2

0xb00d,	// (0x0004cfe9) slider_form_pane_g2_cp2

0xb22c,	// (0x0004d208) form_field_slider_pane_vc_t3

0xb23a,	// (0x0004d216) form_field_slider_pane_vc_t4

0xb248,	// (0x0004d224) slider_form_pane_vc_ParamLimits

0xb248,	// (0x0004d224) slider_form_pane_vc

0xb255,	// (0x0004d231) form_field_slider_pane_vc_t1_ParamLimits

0xb255,	// (0x0004d231) form_field_slider_pane_vc_t1

0xb1c1,	// (0x0004d19d) form_field_slider_pane_vc_t2_ParamLimits

0xb1c1,	// (0x0004d19d) form_field_slider_pane_vc_t2

0x0001,

0xfaa0,	// (0x00051a7c) form_field_slider_pane_vc_t_ParamLimits

0xfaa0,	// (0x00051a7c) form_field_slider_pane_vc_t

0xd8b9,	// (0x0004f895) input_focus_pane_cp9_vc_ParamLimits

0xd8b9,	// (0x0004f895) input_focus_pane_cp9_vc

0xb26b,	// (0x0004d247) slider_cont_pane_vc_ParamLimits

0xb26b,	// (0x0004d247) slider_cont_pane_vc

0xb27f,	// (0x0004d25b) list_form_graphic_pane_cp_vc_ParamLimits

0xb27f,	// (0x0004d25b) list_form_graphic_pane_cp_vc

0x9537,	// (0x0004b513) form_field_popup_wide_pane_vc_g1

0xb294,	// (0x0004d270) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb294,	// (0x0004d270) form_field_popup_wide_pane_vc_t1

0x0b08,	// (0x00042ae4) input_focus_pane_cp8_vc_ParamLimits

0x0b08,	// (0x00042ae4) input_focus_pane_cp8_vc

0xb2d9,	// (0x0004d2b5) list_form_wide_pane_vc_ParamLimits

0xb2d9,	// (0x0004d2b5) list_form_wide_pane_vc

0xb2e5,	// (0x0004d2c1) list_form_graphic_pane_vc_g1

0xb2ed,	// (0x0004d2c9) list_form_graphic_pane_vc_t1_ParamLimits

0xb2ed,	// (0x0004d2c9) list_form_graphic_pane_vc_t1

0xd84c,	// (0x0004f828) list_highlight_pane_cp5_vc_ParamLimits

0xd84c,	// (0x0004f828) list_highlight_pane_cp5_vc

0xb309,	// (0x0004d2e5) list_form_graphic_pane_vc_ParamLimits

0xb309,	// (0x0004d2e5) list_form_graphic_pane_vc

0x9537,	// (0x0004b513) form_field_popup_pane_vc_g1

0xb31f,	// (0x0004d2fb) form_field_popup_pane_vc_t1_ParamLimits

0xb31f,	// (0x0004d2fb) form_field_popup_pane_vc_t1

0x0b08,	// (0x00042ae4) input_focus_pane_cp7_vc_ParamLimits

0x0b08,	// (0x00042ae4) input_focus_pane_cp7_vc

0xb336,	// (0x0004d312) list_form_pane_vc_ParamLimits

0xb336,	// (0x0004d312) list_form_pane_vc

0xb342,	// (0x0004d31e) data_form_pane_vc_t1_ParamLimits

0xb342,	// (0x0004d31e) data_form_pane_vc_t1

0x0b63,	// (0x00042b3f) input_focus_pane_vc_g1

0x0b6b,	// (0x00042b47) input_focus_pane_vc_g2

0x0b73,	// (0x00042b4f) input_focus_pane_vc_g3

0x0b7b,	// (0x00042b57) input_focus_pane_vc_g4

0x0b83,	// (0x00042b5f) input_focus_pane_vc_g5

0x0b8b,	// (0x00042b67) input_focus_pane_vc_g6

0x0b93,	// (0x00042b6f) input_focus_pane_vc_g7

0x0b9b,	// (0x00042b77) input_focus_pane_vc_g8

0x0ba3,	// (0x00042b7f) input_focus_pane_vc_g9

0xd7e8,	// (0x0004f7c4) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x00051673) input_focus_pane_vc_g

0x952b,	// (0x0004b507) data_form_pane_vc_ParamLimits

0x952b,	// (0x0004b507) data_form_pane_vc

0x9537,	// (0x0004b513) form_field_data_pane_vc_g1

0xb35f,	// (0x0004d33b) form_field_data_pane_vc_t1_ParamLimits

0xb35f,	// (0x0004d33b) form_field_data_pane_vc_t1

0x0b08,	// (0x00042ae4) input_focus_pane_vc_ParamLimits

0x0b08,	// (0x00042ae4) input_focus_pane_vc

0xb379,	// (0x0004d355) button_value_adjust_pane_cp3_vc

0xb381,	// (0x0004d35d) button_value_adjust_pane_cp5_vc

0xb389,	// (0x0004d365) form_field_data_pane_vc_ParamLimits

0xb389,	// (0x0004d365) form_field_data_pane_vc

0xb3a4,	// (0x0004d380) form_field_data_pane_vc_cp2

0xb3ac,	// (0x0004d388) form_field_data_wide_pane_vc_ParamLimits

0xb3ac,	// (0x0004d388) form_field_data_wide_pane_vc

0xb3c6,	// (0x0004d3a2) form_field_data_wide_pane_vc_cp2

0xb3ce,	// (0x0004d3aa) form_field_popup_pane_vc_ParamLimits

0xb3ce,	// (0x0004d3aa) form_field_popup_pane_vc

0xb3e9,	// (0x0004d3c5) form_field_popup_wide_pane_vc_ParamLimits

0xb3e9,	// (0x0004d3c5) form_field_popup_wide_pane_vc

0xb403,	// (0x0004d3df) form_field_slider_pane_vc_ParamLimits

0xb403,	// (0x0004d3df) form_field_slider_pane_vc

0xb416,	// (0x0004d3f2) form_field_slider_wide_pane_vc_ParamLimits

0xb416,	// (0x0004d3f2) form_field_slider_wide_pane_vc

0xb429,	// (0x0004d405) grid_touch_1_pane_ParamLimits

0xb429,	// (0x0004d405) grid_touch_1_pane

0xb435,	// (0x0004d411) grid_touch_2_pane_ParamLimits

0xb435,	// (0x0004d411) grid_touch_2_pane

0x73cf,	// (0x000493ab) touch_pane_g1_ParamLimits

0x73cf,	// (0x000493ab) touch_pane_g1

0xb44f,	// (0x0004d42b) cell_app_pane_cp_wide_ParamLimits

0xb44f,	// (0x0004d42b) cell_app_pane_cp_wide

0xb460,	// (0x0004d43c) grid_popup_fast_wide_pane_ParamLimits

0xb460,	// (0x0004d43c) grid_popup_fast_wide_pane

0xb474,	// (0x0004d450) scroll_pane_cp19_ParamLimits

0xb474,	// (0x0004d450) scroll_pane_cp19

0xd7f2,	// (0x0004f7ce) bg_popup_window_pane_cp20

0xb488,	// (0x0004d464) listscroll_popup_fast_wide_pane

0xd84c,	// (0x0004f828) grid_indicator_nsta_pane

0xb490,	// (0x0004d46c) clock_nsta_pane_g1

0xb499,	// (0x0004d475) clock_nsta_pane_t1

0xb4b5,	// (0x0004d491) cell_indicator_nsta_pane_ParamLimits

0xb4b5,	// (0x0004d491) cell_indicator_nsta_pane

0xb4ed,	// (0x0004d4c9) cell_indicator_nsta_pane_g1

0xb4fb,	// (0x0004d4d7) cell_indicator_nsta_pane_g2

0x0001,

0xfab1,	// (0x00051a8d) cell_indicator_nsta_pane_g

0xb511,	// (0x0004d4ed) clock_nsta_pane_cp

0xb519,	// (0x0004d4f5) indicator_nsta_pane_cp

0xb522,	// (0x0004d4fe) nsta_clock_indic_pane_g1

0xd888,	// (0x0004f864) grid_indicator_pane

0x0f7d,	// (0x00042f59) scroll_pane_cp29

0x6e76,	// (0x00048e52) indicator_nsta_pane_cp2_ParamLimits

0x6e76,	// (0x00048e52) indicator_nsta_pane_cp2

0xd84c,	// (0x0004f828) main_apps_wheel_pane

0x971e,	// (0x0004b6fa) form_midp_field_text_pane_ParamLimits

0x986d,	// (0x0004b849) scroll_bar_cp050_ParamLimits

0xb58b,	// (0x0004d567) cell_indicator_pane_ParamLimits

0xb58b,	// (0x0004d567) cell_indicator_pane

0xb5a3,	// (0x0004d57f) cell_indicator_pane_g1

0xb5ad,	// (0x0004d589) grid_wheel_folder_pane_ParamLimits

0xb5ad,	// (0x0004d589) grid_wheel_folder_pane

0xb5c1,	// (0x0004d59d) list_wheel_apps_pane_ParamLimits

0xb5c1,	// (0x0004d59d) list_wheel_apps_pane

0xb5d4,	// (0x0004d5b0) main_apps_wheel_pane_g1_ParamLimits

0xb5d4,	// (0x0004d5b0) main_apps_wheel_pane_g1

0xb5f0,	// (0x0004d5cc) main_apps_wheel_pane_g2_ParamLimits

0xb5f0,	// (0x0004d5cc) main_apps_wheel_pane_g2

0x0001,

0xfacd,	// (0x00051aa9) main_apps_wheel_pane_g_ParamLimits

0xfacd,	// (0x00051aa9) main_apps_wheel_pane_g

0xb60c,	// (0x0004d5e8) main_apps_wheel_pane_t1_ParamLimits

0xb60c,	// (0x0004d5e8) main_apps_wheel_pane_t1

0xb635,	// (0x0004d611) list_wheel_apps_pane_g1

0xb63d,	// (0x0004d619) list_wheel_apps_pane_g2

0xb645,	// (0x0004d621) list_wheel_apps_pane_g3

0xb64d,	// (0x0004d629) list_wheel_apps_pane_g4

0xb657,	// (0x0004d633) list_wheel_apps_pane_g5

0x0004,

0xfad2,	// (0x00051aae) list_wheel_apps_pane_g

0x464b,	// (0x00046627) navi_icon_text_pane

0x8f47,	// (0x0004af23) aid_fill_nsta

0xb678,	// (0x0004d654) navi_icon_text_pane_g1

0xb684,	// (0x0004d660) navi_icon_text_pane_t1

0x6fbf,	// (0x00048f9b) list_set_graphic_pane_t1_ParamLimits

0x6fbf,	// (0x00048f9b) list_set_graphic_pane_t1

0x9fbe,	// (0x0004bf9a) popup_midp_note_alarm_window_t6_ParamLimits

0x9fbe,	// (0x0004bf9a) popup_midp_note_alarm_window_t6

0x9fd0,	// (0x0004bfac) popup_midp_note_alarm_window_t7_ParamLimits

0x9fd0,	// (0x0004bfac) popup_midp_note_alarm_window_t7

0x9fe2,	// (0x0004bfbe) popup_midp_note_alarm_window_t8_ParamLimits

0x9fe2,	// (0x0004bfbe) popup_midp_note_alarm_window_t8

0x9ff4,	// (0x0004bfd0) popup_midp_note_alarm_window_t9_ParamLimits

0x9ff4,	// (0x0004bfd0) popup_midp_note_alarm_window_t9

0xa006,	// (0x0004bfe2) popup_midp_note_alarm_window_t10_ParamLimits

0xa006,	// (0x0004bfe2) popup_midp_note_alarm_window_t10

0xa018,	// (0x0004bff4) popup_midp_note_alarm_window_t11_ParamLimits

0xa018,	// (0x0004bff4) popup_midp_note_alarm_window_t11

0xa02a,	// (0x0004c006) scroll_pane_cp17_ParamLimits

0xa02a,	// (0x0004c006) scroll_pane_cp17

0x7659,	// (0x00049635) volume_small_pane_cp_g1

0x79df,	// (0x000499bb) volume_small_pane_cp_g2

0x79e8,	// (0x000499c4) volume_small_pane_cp_g3

0x79f1,	// (0x000499cd) volume_small_pane_cp_g4

0x79fa,	// (0x000499d6) volume_small_pane_cp_g5

0x7a03,	// (0x000499df) volume_small_pane_cp_g6

0x7a0c,	// (0x000499e8) volume_small_pane_cp_g7

0x7a15,	// (0x000499f1) volume_small_pane_cp_g8

0x7a1e,	// (0x000499fa) volume_small_pane_cp_g9

0x7a27,	// (0x00049a03) volume_small_pane_cp_g10

0x47d3,	// (0x000467af) midp_ticker_pane_g1_ParamLimits

0x47df,	// (0x000467bb) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x0005173f) midp_ticker_pane_g_ParamLimits

0x7100,	// (0x000490dc) midp_ticker_pane_t1_ParamLimits

0x8f5d,	// (0x0004af39) aid_fill_nsta_2

0x9859,	// (0x0004b835) list_form2_midp_pane

0xa9c2,	// (0x0004c99e) midp_editing_number_pane_ParamLimits

0xa9d1,	// (0x0004c9ad) midp_ticker_pane_ParamLimits

0xb696,	// (0x0004d672) form2_midp_field_pane

0xb6ba,	// (0x0004d696) scroll_pane_cp51

0xb6da,	// (0x0004d6b6) form2_midp_button_pane_ParamLimits

0xb6da,	// (0x0004d6b6) form2_midp_button_pane

0xb6ec,	// (0x0004d6c8) form2_midp_content_pane_ParamLimits

0xb6ec,	// (0x0004d6c8) form2_midp_content_pane

0xb706,	// (0x0004d6e2) form2_midp_field_choice_group_pane

0xb70e,	// (0x0004d6ea) form2_midp_field_pane_g1

0xb716,	// (0x0004d6f2) form2_midp_field_pane_g2

0xb71e,	// (0x0004d6fa) form2_midp_field_pane_g3

0xb726,	// (0x0004d702) form2_midp_field_pane_g4

0x0003,

0xfaf7,	// (0x00051ad3) form2_midp_field_pane_g

0xb72e,	// (0x0004d70a) form2_midp_gauge_slider_pane

0xb736,	// (0x0004d712) form2_midp_gauge_wait_pane

0xb73e,	// (0x0004d71a) form2_midp_image_pane_ParamLimits

0xb73e,	// (0x0004d71a) form2_midp_image_pane

0xb759,	// (0x0004d735) form2_midp_label_pane_ParamLimits

0xb759,	// (0x0004d735) form2_midp_label_pane

0xb778,	// (0x0004d754) form2_midp_label_pane_cp_ParamLimits

0xb778,	// (0x0004d754) form2_midp_label_pane_cp

0xb799,	// (0x0004d775) form2_midp_string_pane_ParamLimits

0xb799,	// (0x0004d775) form2_midp_string_pane

0x5e12,	// (0x00047dee) form2_midp_text_pane_ParamLimits

0x5e12,	// (0x00047dee) form2_midp_text_pane

0xb7ab,	// (0x0004d787) form2_midp_time_pane

0xb7bb,	// (0x0004d797) input_focus_pane_cp51_ParamLimits

0xb7bb,	// (0x0004d797) input_focus_pane_cp51

0xb7d3,	// (0x0004d7af) form2_midp_label_pane_t1_ParamLimits

0xb7d3,	// (0x0004d7af) form2_midp_label_pane_t1

0x5e35,	// (0x00047e11) form2_mdip_text_pane_t1_ParamLimits

0x5e35,	// (0x00047e11) form2_mdip_text_pane_t1

0x5e54,	// (0x00047e30) form2_midp_time_pane_t1

0xb821,	// (0x0004d7fd) form2_midp_gauge_slider_pane_t1

0xb833,	// (0x0004d80f) form2_midp_gauge_slider_pane_t2

0xb845,	// (0x0004d821) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb00,	// (0x00051adc) form2_midp_gauge_slider_pane_t

0xb857,	// (0x0004d833) form2_midp_slider_pane

0xb863,	// (0x0004d83f) form2_midp_gauge_wait_pane_t1

0xb871,	// (0x0004d84d) form2_midp_wait_pane_ParamLimits

0xb871,	// (0x0004d84d) form2_midp_wait_pane

0x957e,	// (0x0004b55a) list_single_2graphic_pane_cp4_ParamLimits

0x957e,	// (0x0004b55a) list_single_2graphic_pane_cp4

0xb89c,	// (0x0004d878) list_single_midp_graphic_pane_cp_ParamLimits

0xb89c,	// (0x0004d878) list_single_midp_graphic_pane_cp

0xd7f2,	// (0x0004f7ce) list_highlight_pane_cp20

0xb8c0,	// (0x0004d89c) list_single_2graphic_pane_g1_cp4

0xae57,	// (0x0004ce33) list_single_2graphic_pane_g2_cp4

0xb8c8,	// (0x0004d8a4) list_single_2graphic_pane_t1_cp4

0xd84c,	// (0x0004f828) list_highlight_pane_cp21

0xb8d7,	// (0x0004d8b3) list_single_midp_graphic_pane_g4_cp

0xb8e6,	// (0x0004d8c2) list_single_midp_graphic_pane_t1_cp

0xb8fb,	// (0x0004d8d7) form2_mdip_string_pane_t1_ParamLimits

0xb8fb,	// (0x0004d8d7) form2_mdip_string_pane_t1

0xd7f2,	// (0x0004f7ce) bg_wml_button_pane_cp2

0xd7e8,	// (0x0004f7c4) form2_midp_image_pane_g1

0x6903,	// (0x000488df) list_double_large_graphic_pane_g5_ParamLimits

0x6903,	// (0x000488df) list_double_large_graphic_pane_g5

0x69b0,	// (0x0004898c) midp_form_pane_ParamLimits

0xd84c,	// (0x0004f828) main_apps_wheel_pane_ParamLimits

0x8cf1,	// (0x0004accd) popup_preview_window_ParamLimits

0x8cf1,	// (0x0004accd) popup_preview_window

0x8ed8,	// (0x0004aeb4) popup_touch_info_window_ParamLimits

0x8ed8,	// (0x0004aeb4) popup_touch_info_window

0x8efa,	// (0x0004aed6) popup_touch_menu_window_ParamLimits

0x8efa,	// (0x0004aed6) popup_touch_menu_window

0xd7de,	// (0x0004f7ba) bg_popup_sub_pane_cp6

0xb9a0,	// (0x0004d97c) list_touch_menu_pane

0xb9a8,	// (0x0004d984) list_single_touch_menu_pane_ParamLimits

0xb9a8,	// (0x0004d984) list_single_touch_menu_pane

0xb9c0,	// (0x0004d99c) list_single_touch_menu_pane_t1

0xd84c,	// (0x0004f828) bg_popup_sub_pane_cp7_ParamLimits

0xd84c,	// (0x0004f828) bg_popup_sub_pane_cp7

0xb9ce,	// (0x0004d9aa) heading_sub_pane

0xb9d6,	// (0x0004d9b2) list_touch_info_pane_ParamLimits

0xb9d6,	// (0x0004d9b2) list_touch_info_pane

0xb9e5,	// (0x0004d9c1) list_single_touch_info_pane_ParamLimits

0xb9e5,	// (0x0004d9c1) list_single_touch_info_pane

0xb9f7,	// (0x0004d9d3) list_single_touch_info_pane_t1

0xba05,	// (0x0004d9e1) list_single_touch_info_pane_t2

0x0001,

0xfb0e,	// (0x00051aea) list_single_touch_info_pane_t

0x47a7,	// (0x00046783) bg_popup_heading_pane_cp

0xba13,	// (0x0004d9ef) heading_sub_pane_t1

0x94c5,	// (0x0004b4a1) bg_popup_preview_window_pane_cp_ParamLimits

0x94c5,	// (0x0004b4a1) bg_popup_preview_window_pane_cp

0xb9ce,	// (0x0004d9aa) heading_preview_pane

0xb9d6,	// (0x0004d9b2) list_preview_pane_ParamLimits

0xb9d6,	// (0x0004d9b2) list_preview_pane

0xba21,	// (0x0004d9fd) popup_preview_window_g1

0xb9e5,	// (0x0004d9c1) list_single_preview_pane_ParamLimits

0xb9e5,	// (0x0004d9c1) list_single_preview_pane

0xba29,	// (0x0004da05) list_single_preview_pane_g1

0xba31,	// (0x0004da0d) list_single_preview_pane_t1

0xb9f7,	// (0x0004d9d3) list_single_preview_pane_t2

0x0001,

0xfb13,	// (0x00051aef) list_single_preview_pane_t

0xba3f,	// (0x0004da1b) bg_popup_heading_pane_cp2_ParamLimits

0xba3f,	// (0x0004da1b) bg_popup_heading_pane_cp2

0xba55,	// (0x0004da31) heading_preview_pane_g1

0xba5d,	// (0x0004da39) heading_preview_pane_t1_ParamLimits

0xba5d,	// (0x0004da39) heading_preview_pane_t1

0xd89f,	// (0x0004f87b) soft_indicator_pane_t1_ParamLimits

0x0a7b,	// (0x00042a57) scroll_pane_ParamLimits

0x0e82,	// (0x00042e5e) scroll_sc2_left_pane

0x0e79,	// (0x00042e55) scroll_sc2_right_pane

0x0ea1,	// (0x00042e7d) scroll_bg_pane_g1_ParamLimits

0x0eb6,	// (0x00042e92) scroll_bg_pane_g2_ParamLimits

0x0ece,	// (0x00042eaa) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x000516ca) scroll_bg_pane_g_ParamLimits

0x0ea1,	// (0x00042e7d) scroll_handle_pane_g1_ParamLimits

0x0ef0,	// (0x00042ecc) scroll_handle_pane_g2_ParamLimits

0x0ece,	// (0x00042eaa) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x000516d1) scroll_handle_pane_g_ParamLimits

0x8938,	// (0x0004a914) popup_choice_list_window_ParamLimits

0x8938,	// (0x0004a914) popup_choice_list_window

0x939b,	// (0x0004b377) choice_list_pane

0x941d,	// (0x0004b3f9) cell_toolbar_pane_t1

0x9445,	// (0x0004b421) toolbar_button_pane_ParamLimits

0xa4f4,	// (0x0004c4d0) ai_gene_pane_1_t2_ParamLimits

0xa4f4,	// (0x0004c4d0) ai_gene_pane_1_t2

0x0001,

0xf91d,	// (0x000518f9) ai_gene_pane_1_t_ParamLimits

0xf91d,	// (0x000518f9) ai_gene_pane_1_t

0xba7a,	// (0x0004da56) scroll_sc2_left_pane_g1

0xba7a,	// (0x0004da56) scroll_sc2_right_pane_g1

0x8910,	// (0x0004a8ec) bg_popup_sub_pane_cp10

0xba84,	// (0x0004da60) list_choice_list_pane

0xba9d,	// (0x0004da79) list_single_choice_list_pane_ParamLimits

0xba9d,	// (0x0004da79) list_single_choice_list_pane

0xbab5,	// (0x0004da91) list_single_choice_list_pane_g1

0x0c59,	// (0x00042c35) list_single_choice_list_pane_t1_ParamLimits

0x0c59,	// (0x00042c35) list_single_choice_list_pane_t1

0xbabd,	// (0x0004da99) choice_list_pane_g1

0xbac5,	// (0x0004daa1) choice_list_pane_t1

0xd7de,	// (0x0004f7ba) input_focus_pane_cp11

0x0dd7,	// (0x00042db3) title_pane_stacon_g2_ParamLimits

0x0dd7,	// (0x00042db3) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x000516b0) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x000516b0) title_pane_stacon_g

0x47a7,	// (0x00046783) cursor_press_pane

0x89f2,	// (0x0004a9ce) popup_fep_hwr_window_ParamLimits

0x89f2,	// (0x0004a9ce) popup_fep_hwr_window

0x8a7c,	// (0x0004aa58) popup_fep_vkb_window_ParamLimits

0x8a7c,	// (0x0004aa58) popup_fep_vkb_window

0xbad3,	// (0x0004daaf) cursor_press_pane_g1

0x0002,

0xfb3c,	// (0x00051b18) fep_vkb_side_pane_g_ParamLimits

0x7a5b,	// (0x00049a37) fep_hwr_candidate_pane_ParamLimits

0x7a5b,	// (0x00049a37) fep_hwr_candidate_pane

0x7a85,	// (0x00049a61) fep_hwr_side_pane_ParamLimits

0x7a85,	// (0x00049a61) fep_hwr_side_pane

0x7aa7,	// (0x00049a83) fep_hwr_top_pane_ParamLimits

0x7aa7,	// (0x00049a83) fep_hwr_top_pane

0x7abf,	// (0x00049a9b) fep_hwr_write_pane_ParamLimits

0x7abf,	// (0x00049a9b) fep_hwr_write_pane

0xfb3c,	// (0x00051b18) fep_vkb_side_pane_g

0xbadb,	// (0x0004dab7) fep_hwr_top_pane_g1

0xbaed,	// (0x0004dac9) fep_hwr_top_pane_g2

0x7aeb,	// (0x00049ac7) fep_hwr_top_pane_g3

0x0002,

0xfb18,	// (0x00051af4) fep_hwr_top_pane_g

0x7b00,	// (0x00049adc) fep_hwr_top_text_pane

0x2300,	// (0x000442dc) fep_hwr_top_text_pane_g1

0xbb23,	// (0x0004daff) fep_hwr_top_text_pane_t1

0x7c0a,	// (0x00049be6) fep_hwr_candidate_pane_g1

0xbd6e,	// (0x0004dd4a) fep_vkb_keypad_pane_g3_ParamLimits

0xbd6e,	// (0x0004dd4a) fep_vkb_keypad_pane_g3

0xbd9a,	// (0x0004dd76) fep_vkb_keypad_pane_g4_ParamLimits

0xbd9a,	// (0x0004dd76) fep_vkb_keypad_pane_g4

0xbe11,	// (0x0004dded) fep_vkb_bottom_pane_g2_ParamLimits

0xbe11,	// (0x0004dded) fep_vkb_bottom_pane_g2

0x0001,

0xfb43,	// (0x00051b1f) fep_vkb_bottom_pane_g_ParamLimits

0xfb43,	// (0x00051b1f) fep_vkb_bottom_pane_g

0xba7a,	// (0x0004da56) cell_vkb_side_pane_g2

0x0001,

0xfb4d,	// (0x00051b29) cell_vkb_side_pane_g

0xbe9c,	// (0x0004de78) cell_vkb_side_pane_t1

0xbeaa,	// (0x0004de86) cell_vkb_side_pane_t1_copy1

0xba7a,	// (0x0004da56) bg_fep_vkb_candidate_pane_g2

0xbfee,	// (0x0004dfca) cell_vkb_candidate_pane_ParamLimits

0xbb31,	// (0x0004db0d) aid_size_cell_vkb_ParamLimits

0xbb31,	// (0x0004db0d) aid_size_cell_vkb

0xbfee,	// (0x0004dfca) cell_vkb_candidate_pane

0x7c24,	// (0x00049c00) bg_popup_fep_shadow_pane_g1

0xbbc3,	// (0x0004db9f) fep_vkb_bottom_pane_ParamLimits

0xbbc3,	// (0x0004db9f) fep_vkb_bottom_pane

0xbc00,	// (0x0004dbdc) fep_vkb_candidate_pane_ParamLimits

0xbc00,	// (0x0004dbdc) fep_vkb_candidate_pane

0xbc1c,	// (0x0004dbf8) fep_vkb_keypad_pane_ParamLimits

0xbc1c,	// (0x0004dbf8) fep_vkb_keypad_pane

0xbc4f,	// (0x0004dc2b) fep_vkb_side_pane_ParamLimits

0xbc4f,	// (0x0004dc2b) fep_vkb_side_pane

0xbc8b,	// (0x0004dc67) fep_vkb_top_pane_ParamLimits

0xbc8b,	// (0x0004dc67) fep_vkb_top_pane

0xbcc7,	// (0x0004dca3) fep_vkb_top_pane_g1_ParamLimits

0xbcc7,	// (0x0004dca3) fep_vkb_top_pane_g1

0xbcd6,	// (0x0004dcb2) fep_vkb_top_pane_g2_ParamLimits

0xbcd6,	// (0x0004dcb2) fep_vkb_top_pane_g2

0xbce5,	// (0x0004dcc1) fep_vkb_top_pane_g3_ParamLimits

0xbce5,	// (0x0004dcc1) fep_vkb_top_pane_g3

0x0003,

0xfb33,	// (0x00051b0f) fep_vkb_top_pane_g_ParamLimits

0xfb33,	// (0x00051b0f) fep_vkb_top_pane_g

0xbd03,	// (0x0004dcdf) fep_vkb_top_text_pane_ParamLimits

0xbd03,	// (0x0004dcdf) fep_vkb_top_text_pane

0xbd14,	// (0x0004dcf0) fep_vkb_side_pane_g1_ParamLimits

0xbd14,	// (0x0004dcf0) fep_vkb_side_pane_g1

0xbd5d,	// (0x0004dd39) grid_vkb_side_pane_ParamLimits

0xbd5d,	// (0x0004dd39) grid_vkb_side_pane

0x7c2c,	// (0x00049c08) bg_popup_fep_shadow_pane_g2

0x7c35,	// (0x00049c11) bg_popup_fep_shadow_pane_g3

0x7c3d,	// (0x00049c19) bg_popup_fep_shadow_pane_g4

0x7c46,	// (0x00049c22) bg_popup_fep_shadow_pane_g5

0x7c50,	// (0x00049c2c) bg_popup_fep_shadow_pane_g6

0x7c58,	// (0x00049c34) bg_popup_fep_shadow_pane_g7

0x0b83,	// (0x00042b5f) bg_popup_fep_shadow_pane_g8

0xbdbc,	// (0x0004dd98) grid_vkb_keypad_number_pane_ParamLimits

0xbdbc,	// (0x0004dd98) grid_vkb_keypad_number_pane

0xbdd0,	// (0x0004ddac) grid_vkb_keypad_pane_ParamLimits

0xbdd0,	// (0x0004ddac) grid_vkb_keypad_pane

0xbdf6,	// (0x0004ddd2) fep_vkb_bottom_pane_g1_ParamLimits

0xbdf6,	// (0x0004ddd2) fep_vkb_bottom_pane_g1

0xbe1f,	// (0x0004ddfb) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbe1f,	// (0x0004ddfb) grid_vkb_keypad_bottom_left_pane

0xbe34,	// (0x0004de10) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbe34,	// (0x0004de10) grid_vkb_keypad_bottom_right_pane

0xbe49,	// (0x0004de25) fep_vkb_top_text_pane_g1

0xbe64,	// (0x0004de40) fep_vkb_top_text_pane_t1

0xbe79,	// (0x0004de55) cell_vkb_side_pane_ParamLimits

0xbe79,	// (0x0004de55) cell_vkb_side_pane

0xba7a,	// (0x0004da56) cell_vkb_side_pane_g1

0xbeb8,	// (0x0004de94) cell_vkb_keypad_pane_ParamLimits

0xbeb8,	// (0x0004de94) cell_vkb_keypad_pane

0xbf45,	// (0x0004df21) cell_vkb_keypad_pane_g1

0x0008,

0xfb60,	// (0x00051b3c) bg_popup_fep_shadow_pane_g

0xba7a,	// (0x0004da56) cell_hwr_side_pane_g1

0xba7a,	// (0x0004da56) cell_hwr_side_pane_g2

0xbf4f,	// (0x0004df2b) cell_vkb_keypad_pane_t1

0xbf5d,	// (0x0004df39) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbf5d,	// (0x0004df39) cell_vkb_keypad_bottom_left_pane

0xbf7a,	// (0x0004df56) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbf7a,	// (0x0004df56) cell_vkb_keypad_bottom_right_pane

0xba7a,	// (0x0004da56) cell_vkb_keypad_bottom_left_pane_g1

0xba7a,	// (0x0004da56) cell_vkb_keypad_bottom_right_pane_g1

0xbfb3,	// (0x0004df8f) cell_vkb_keypad_number_pane_ParamLimits

0xbfb3,	// (0x0004df8f) cell_vkb_keypad_number_pane

0xbfd2,	// (0x0004dfae) cell_vkb_keypad_number_pane_g1

0xbfdc,	// (0x0004dfb8) cell_vkb_keypad_number_pane_g2

0xbfe5,	// (0x0004dfc1) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb52,	// (0x00051b2e) cell_vkb_keypad_number_pane_g

0xbf4f,	// (0x0004df2b) cell_vkb_keypad_number_pane_t1

0xc00f,	// (0x0004dfeb) fep_vkb_candidate_pane_g1

0x0001,

0xfb4d,	// (0x00051b29) cell_hwr_side_pane_g

0xc028,	// (0x0004e004) cell_hwr_side_pane_t1

0x7c6a,	// (0x00049c46) cell_hwr_side_pane_t1_copy1

0xbcf5,	// (0x0004dcd1) cell_hwr_candidate_pane_g1

0x7c78,	// (0x00049c54) cell_hwr_candidate_pane_t1

0xba7a,	// (0x0004da56) cell_vkb_candidate_pane_g2

0xc0ae,	// (0x0004e08a) cell_vkb_candidate_pane_t1

0xf546,	// (0x00051522) bg_popup_fep_shadow_pane_ParamLimits

0xf546,	// (0x00051522) bg_popup_fep_shadow_pane

0x2135,	// (0x00044111) bg_fep_hwr_top_pane_g4

0xbaff,	// (0x0004dadb) bg_hwr_side_pane_g1_ParamLimits

0xbaff,	// (0x0004dadb) bg_hwr_side_pane_g1

0x7b3e,	// (0x00049b1a) cell_hwr_side_pane_ParamLimits

0x7b3e,	// (0x00049b1a) cell_hwr_side_pane

0x7b7b,	// (0x00049b57) fep_hwr_write_pane_g1_ParamLimits

0x7b7b,	// (0x00049b57) fep_hwr_write_pane_g1

0x7b88,	// (0x00049b64) fep_hwr_write_pane_g2_ParamLimits

0x7b88,	// (0x00049b64) fep_hwr_write_pane_g2

0x7b95,	// (0x00049b71) fep_hwr_write_pane_g3_ParamLimits

0x7b95,	// (0x00049b71) fep_hwr_write_pane_g3

0x7ba3,	// (0x00049b7f) fep_hwr_write_pane_g4_ParamLimits

0x7ba3,	// (0x00049b7f) fep_hwr_write_pane_g4

0x0005,

0xfb1f,	// (0x00051afb) fep_hwr_write_pane_g_ParamLimits

0xfb1f,	// (0x00051afb) fep_hwr_write_pane_g

0x2135,	// (0x00044111) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2135,	// (0x00044111) bg_fep_hwr_candidate_pane_g2

0x7bb8,	// (0x00049b94) cell_hwr_candidate_pane_ParamLimits

0x7bb8,	// (0x00049b94) cell_hwr_candidate_pane

0x7c0a,	// (0x00049be6) fep_hwr_candidate_pane_g1_ParamLimits

0xbb5f,	// (0x0004db3b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbb5f,	// (0x0004db3b) bg_popup_fep_shadow_pane_cp2

0xbcf5,	// (0x0004dcd1) fep_vkb_top_pane_g4_ParamLimits

0xbcf5,	// (0x0004dcd1) fep_vkb_top_pane_g4

0xbd3b,	// (0x0004dd17) fep_vkb_side_pane_g2_ParamLimits

0xbd3b,	// (0x0004dd17) fep_vkb_side_pane_g2

0x5640,	// (0x0004761c) list_setting_pane_t4_ParamLimits

0x5640,	// (0x0004761c) list_setting_pane_t4

0x56dc,	// (0x000476b8) list_setting_number_pane_t5_ParamLimits

0x56dc,	// (0x000476b8) list_setting_number_pane_t5

0x6c95,	// (0x00048c71) list_double_heading_pane_cp2_ParamLimits

0x6c95,	// (0x00048c71) list_double_heading_pane_cp2

0xc0bc,	// (0x0004e098) list_double_heading_pane_g1_cp2_ParamLimits

0xc0bc,	// (0x0004e098) list_double_heading_pane_g1_cp2

0xc0c8,	// (0x0004e0a4) list_double_heading_pane_g2_cp2_ParamLimits

0xc0c8,	// (0x0004e0a4) list_double_heading_pane_g2_cp2

0xc0dc,	// (0x0004e0b8) list_double_heading_pane_t1_cp2_ParamLimits

0xc0dc,	// (0x0004e0b8) list_double_heading_pane_t1_cp2

0xc0f2,	// (0x0004e0ce) list_double_heading_pane_t2_cp2_ParamLimits

0xc0f2,	// (0x0004e0ce) list_double_heading_pane_t2_cp2

0xd7d6,	// (0x0004f7b2) aid_value_unit2

0x63db,	// (0x000483b7) popup_preview_fixed_window

0x0626,	// (0x00042602) bg_popup_preview_window_pane_cp02

0xc104,	// (0x0004e0e0) list_preview_fixed_pane

0xc14a,	// (0x0004e126) list_empty_pane_fp_ParamLimits

0xc14a,	// (0x0004e126) list_empty_pane_fp

0xc14a,	// (0x0004e126) list_single_cale_day_pane_fp_ParamLimits

0xc14a,	// (0x0004e126) list_single_cale_day_pane_fp

0xc14a,	// (0x0004e126) list_single_graphic_heading_pane_fp_ParamLimits

0xc14a,	// (0x0004e126) list_single_graphic_heading_pane_fp

0xc14a,	// (0x0004e126) list_single_graphic_pane_fp_ParamLimits

0xc14a,	// (0x0004e126) list_single_graphic_pane_fp

0xc14a,	// (0x0004e126) list_single_heading_pane_fp_ParamLimits

0xc14a,	// (0x0004e126) list_single_heading_pane_fp

0xc14a,	// (0x0004e126) list_single_pane_fp_ParamLimits

0xc14a,	// (0x0004e126) list_single_pane_fp

0xc163,	// (0x0004e13f) list_single_pane_fp_g1_ParamLimits

0xc163,	// (0x0004e13f) list_single_pane_fp_g1

0xc0bc,	// (0x0004e098) list_single_pane_fp_g2_ParamLimits

0xc0bc,	// (0x0004e098) list_single_pane_fp_g2

0xc0c8,	// (0x0004e0a4) list_single_pane_fp_g3_ParamLimits

0xc0c8,	// (0x0004e0a4) list_single_pane_fp_g3

0xc16f,	// (0x0004e14b) list_single_pane_fp_g4_ParamLimits

0xc16f,	// (0x0004e14b) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x00051b5d) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x00051b5d) list_single_pane_fp_g

0x5e67,	// (0x00047e43) list_single_pane_fp_t1_ParamLimits

0x5e67,	// (0x00047e43) list_single_pane_fp_t1

0x5e7e,	// (0x00047e5a) list_single_graphic_pane_fp_g1_ParamLimits

0x5e7e,	// (0x00047e5a) list_single_graphic_pane_fp_g1

0xc163,	// (0x0004e13f) list_single_graphic_pane_fp_g2_ParamLimits

0xc163,	// (0x0004e13f) list_single_graphic_pane_fp_g2

0xc0bc,	// (0x0004e098) list_single_graphic_pane_fp_g3_ParamLimits

0xc0bc,	// (0x0004e098) list_single_graphic_pane_fp_g3

0xc0c8,	// (0x0004e0a4) list_single_graphic_pane_fp_g4_ParamLimits

0xc0c8,	// (0x0004e0a4) list_single_graphic_pane_fp_g4

0xc16f,	// (0x0004e14b) list_single_graphic_pane_fp_g5_ParamLimits

0xc16f,	// (0x0004e14b) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x00051b66) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x00051b66) list_single_graphic_pane_fp_g

0x5e8a,	// (0x00047e66) list_single_graphic_pane_fp_t1_ParamLimits

0x5e8a,	// (0x00047e66) list_single_graphic_pane_fp_t1

0x5e7e,	// (0x00047e5a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5e7e,	// (0x00047e5a) list_single_graphic_heading_pane_fp_g1

0xc163,	// (0x0004e13f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc163,	// (0x0004e13f) list_single_graphic_heading_pane_fp_g2

0xc0bc,	// (0x0004e098) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc0bc,	// (0x0004e098) list_single_graphic_heading_pane_fp_g3

0xc0c8,	// (0x0004e0a4) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc0c8,	// (0x0004e0a4) list_single_graphic_heading_pane_fp_g4

0xc16f,	// (0x0004e14b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc16f,	// (0x0004e14b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x00051b66) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x00051b66) list_single_graphic_heading_pane_fp_g

0x5ea0,	// (0x00047e7c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5ea0,	// (0x00047e7c) list_single_graphic_heading_pane_fp_t1

0x5eb6,	// (0x00047e92) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5eb6,	// (0x00047e92) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x00051b71) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x00051b71) list_single_graphic_heading_pane_fp_t

0x5ec8,	// (0x00047ea4) list_single_cale_day_pane_fp_g1_ParamLimits

0x5ec8,	// (0x00047ea4) list_single_cale_day_pane_fp_g1

0xc17b,	// (0x0004e157) list_single_cale_day_pane_fp_g2_ParamLimits

0xc17b,	// (0x0004e157) list_single_cale_day_pane_fp_g2

0x7c96,	// (0x00049c72) list_single_cale_day_pane_fp_g3_ParamLimits

0x7c96,	// (0x00049c72) list_single_cale_day_pane_fp_g3

0x7cbe,	// (0x00049c9a) list_single_cale_day_pane_fp_g4_ParamLimits

0x7cbe,	// (0x00049c9a) list_single_cale_day_pane_fp_g4

0x7ce2,	// (0x00049cbe) list_single_cale_day_pane_fp_g5_ParamLimits

0x7ce2,	// (0x00049cbe) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x00051b76) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x00051b76) list_single_cale_day_pane_fp_g

0x5f00,	// (0x00047edc) list_single_cale_day_pane_fp_t1_ParamLimits

0x5f00,	// (0x00047edc) list_single_cale_day_pane_fp_t1

0x5f26,	// (0x00047f02) list_single_cale_day_pane_fp_t2_ParamLimits

0x5f26,	// (0x00047f02) list_single_cale_day_pane_fp_t2

0x5f3f,	// (0x00047f1b) list_single_cale_day_pane_fp_t3_ParamLimits

0x5f3f,	// (0x00047f1b) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x00051b81) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x00051b81) list_single_cale_day_pane_fp_t

0xc163,	// (0x0004e13f) list_empty_pane_fp_g1_ParamLimits

0xc163,	// (0x0004e13f) list_empty_pane_fp_g1

0x5f58,	// (0x00047f34) list_empty_pane_fp_t1

0x5f66,	// (0x00047f42) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x00051b88) list_empty_pane_fp_t

0xc163,	// (0x0004e13f) list_single_heading_pane_fp_g1_ParamLimits

0xc163,	// (0x0004e13f) list_single_heading_pane_fp_g1

0xc0bc,	// (0x0004e098) list_single_heading_pane_fp_g2_ParamLimits

0xc0bc,	// (0x0004e098) list_single_heading_pane_fp_g2

0xc0c8,	// (0x0004e0a4) list_single_heading_pane_fp_g3_ParamLimits

0xc0c8,	// (0x0004e0a4) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x00051b8d) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x00051b8d) list_single_heading_pane_fp_g

0x5f74,	// (0x00047f50) list_single_heading_pane_fp_t1_ParamLimits

0x5f74,	// (0x00047f50) list_single_heading_pane_fp_t1

0x5f86,	// (0x00047f62) list_single_heading_pane_fp_t2_ParamLimits

0x5f86,	// (0x00047f62) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x00051b94) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x00051b94) list_single_heading_pane_fp_t

0x0c6e,	// (0x00042c4a) aid_size_cell_fast

0x0609,	// (0x000425e5) soft_indicator_pane_cp1_t1

0x0cab,	// (0x00042c87) cell_app_pane_cp2_ParamLimits

0x0cab,	// (0x00042c87) cell_app_pane_cp2

0x7a44,	// (0x00049a20) fep_hwr_candidate_drop_down_list_pane

0x2143,	// (0x0004411f) fep_hwr_candidate_pane_g3_ParamLimits

0x2143,	// (0x0004411f) fep_hwr_candidate_pane_g3

0x2150,	// (0x0004412c) fep_hwr_candidate_pane_g4_ParamLimits

0x2150,	// (0x0004412c) fep_hwr_candidate_pane_g4

0x0002,

0xfb2c,	// (0x00051b08) fep_hwr_candidate_pane_g_ParamLimits

0xfb2c,	// (0x00051b08) fep_hwr_candidate_pane_g

0xbbef,	// (0x0004dbcb) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbbef,	// (0x0004dbcb) fep_vkb_candidate_drop_down_list_pane

0xc017,	// (0x0004dff3) fep_vkb_candidate_pane_g3

0xc01f,	// (0x0004dffb) fep_vkb_candidate_pane_g4

0x0002,

0xfb59,	// (0x00051b35) fep_vkb_candidate_pane_g

0xbcf5,	// (0x0004dcd1) cell_hwr_candidate_pane_g1_ParamLimits

0xc036,	// (0x0004e012) cell_hwr_candidate_pane_g3_ParamLimits

0xc036,	// (0x0004e012) cell_hwr_candidate_pane_g3

0xc057,	// (0x0004e033) cell_hwr_candidate_pane_g4_ParamLimits

0xc057,	// (0x0004e033) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x00051b4f) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x00051b4f) cell_hwr_candidate_pane_g

0xc078,	// (0x0004e054) cell_vkb_candidate_pane_g3_ParamLimits

0xc078,	// (0x0004e054) cell_vkb_candidate_pane_g3

0xc093,	// (0x0004e06f) cell_vkb_candidate_pane_g4_ParamLimits

0xc093,	// (0x0004e06f) cell_vkb_candidate_pane_g4

0xc187,	// (0x0004e163) cell_app_pane_cp2_g1_ParamLimits

0xc187,	// (0x0004e163) cell_app_pane_cp2_g1

0xc1a5,	// (0x0004e181) cell_app_pane_cp2_g2_ParamLimits

0xc1a5,	// (0x0004e181) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x00051b99) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x00051b99) cell_app_pane_cp2_g

0xc1b1,	// (0x0004e18d) cell_app_pane_cp2_t1_ParamLimits

0xc1b1,	// (0x0004e18d) cell_app_pane_cp2_t1

0x0b08,	// (0x00042ae4) grid_highlight_pane_cp1_ParamLimits

0x0b08,	// (0x00042ae4) grid_highlight_pane_cp1

0x7d06,	// (0x00049ce2) cell_hwr_candidate_pane_cp1_ParamLimits

0x7d06,	// (0x00049ce2) cell_hwr_candidate_pane_cp1

0xbcf5,	// (0x0004dcd1) fep_hwr_candidate_drop_down_list_pane_g1

0xc1c3,	// (0x0004e19f) fep_hwr_candidate_drop_down_list_pane_g2

0xc1d0,	// (0x0004e1ac) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x00051b9e) fep_hwr_candidate_drop_down_list_pane_g

0x7d2a,	// (0x00049d06) fep_hwr_candidate_drop_down_list_scroll_pane

0x7d33,	// (0x00049d0f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7d33,	// (0x00049d0f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7d40,	// (0x00049d1c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7d40,	// (0x00049d1c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7d4d,	// (0x00049d29) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7d4d,	// (0x00049d29) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc078,	// (0x0004e054) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc078,	// (0x0004e054) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc093,	// (0x0004e06f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc093,	// (0x0004e06f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7d5a,	// (0x00049d36) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7d5a,	// (0x00049d36) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7d75,	// (0x00049d51) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7d75,	// (0x00049d51) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7d90,	// (0x00049d6c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7d90,	// (0x00049d6c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x00051ba5) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x00051ba5) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc1dd,	// (0x0004e1b9) cell_vkb_candidate_pane_cp1_ParamLimits

0xc1dd,	// (0x0004e1b9) cell_vkb_candidate_pane_cp1

0xbcf5,	// (0x0004dcd1) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbcf5,	// (0x0004dcd1) fep_vkb_candidate_drop_down_list_pane_g1

0xc1c3,	// (0x0004e19f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc1c3,	// (0x0004e19f) fep_vkb_candidate_drop_down_list_pane_g2

0xc1d0,	// (0x0004e1ac) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc1d0,	// (0x0004e1ac) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x00051b9e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc2,	// (0x00051b9e) fep_vkb_candidate_drop_down_list_pane_g

0xc203,	// (0x0004e1df) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc203,	// (0x0004e1df) fep_vkb_candidate_drop_down_list_scroll_pane

0xc210,	// (0x0004e1ec) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc210,	// (0x0004e1ec) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc21d,	// (0x0004e1f9) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc21d,	// (0x0004e1f9) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc229,	// (0x0004e205) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc229,	// (0x0004e205) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc036,	// (0x0004e012) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc036,	// (0x0004e012) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc057,	// (0x0004e033) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc057,	// (0x0004e033) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc235,	// (0x0004e211) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc235,	// (0x0004e211) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc256,	// (0x0004e232) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc256,	// (0x0004e232) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc277,	// (0x0004e253) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc277,	// (0x0004e253) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbda,	// (0x00051bb6) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbda,	// (0x00051bb6) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x64fb,	// (0x000484d7) title_pane_g1_ParamLimits

0x6508,	// (0x000484e4) title_pane_g2_ParamLimits

0xf554,	// (0x00051530) title_pane_g_ParamLimits

0x0fe2,	// (0x00042fbe) aid_call2_pane

0x0fda,	// (0x00042fb6) aid_call_pane

0x2300,	// (0x000442dc) popup_clock_analogue_window_g1

0x2300,	// (0x000442dc) popup_clock_analogue_window_g2

0x6c76,	// (0x00048c52) popup_clock_analogue_window_g3

0x6c7f,	// (0x00048c5b) popup_clock_analogue_window_g4

0xd7e8,	// (0x0004f7c4) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x000516df) popup_clock_analogue_window_g

0x6c87,	// (0x00048c63) popup_clock_analogue_window_t1

0x6cc8,	// (0x00048ca4) clock_digital_number_pane_ParamLimits

0x6cc8,	// (0x00048ca4) clock_digital_number_pane

0x6cd4,	// (0x00048cb0) clock_digital_number_pane_cp02_ParamLimits

0x6cd4,	// (0x00048cb0) clock_digital_number_pane_cp02

0x6ce0,	// (0x00048cbc) clock_digital_number_pane_cp03_ParamLimits

0x6ce0,	// (0x00048cbc) clock_digital_number_pane_cp03

0x6cec,	// (0x00048cc8) clock_digital_number_pane_cp04_ParamLimits

0x6cec,	// (0x00048cc8) clock_digital_number_pane_cp04

0x6cf8,	// (0x00048cd4) clock_digital_separator_pane_ParamLimits

0x6cf8,	// (0x00048cd4) clock_digital_separator_pane

0x6d04,	// (0x00048ce0) popup_clock_digital_window_t1_ParamLimits

0x6d04,	// (0x00048ce0) popup_clock_digital_window_t1

0xd7e8,	// (0x0004f7c4) clock_digital_number_pane_g1

0xd7e8,	// (0x0004f7c4) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x000516ea) clock_digital_number_pane_g

0xd7e8,	// (0x0004f7c4) clock_digital_separator_pane_g1

0xd7e8,	// (0x0004f7c4) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x000516ea) clock_digital_separator_pane_g

0x8f47,	// (0x0004af23) aid_fill_nsta_ParamLimits

0x9097,	// (0x0004b073) indicator_nsta_pane_ParamLimits

0x9228,	// (0x0004b204) popup_clock_analogue_window

0x9228,	// (0x0004b204) popup_clock_digital_window

0xd84c,	// (0x0004f828) grid_indicator_nsta_pane_ParamLimits

0xb4a7,	// (0x0004d483) clock_nsta_pane_t2

0x0001,

0xfaac,	// (0x00051a88) clock_nsta_pane_t

0x6bdf,	// (0x00048bbb) aid_size_max_handle

0x6be9,	// (0x00048bc5) aid_size_min_handle

0x47a7,	// (0x00046783) editor_scroll_pane

0xc292,	// (0x0004e26e) ex_editor_pane

0x0c34,	// (0x00042c10) scroll_pane_cp13

0x0aa7,	// (0x00042a83) scroll_pane_cp14

0x232f,	// (0x0004430b) scroll_pane_cp36

0x6cab,	// (0x00048c87) list_single_graphic_hl_pane_cp2_ParamLimits

0x6cab,	// (0x00048c87) list_single_graphic_hl_pane_cp2

0x7873,	// (0x0004984f) list_single_graphic_hl_pane_ParamLimits

0x7873,	// (0x0004984f) list_single_graphic_hl_pane

0x5f9c,	// (0x00047f78) aid_size_min_hl_cp1

0xc29a,	// (0x0004e276) list_highlight_pane_cp34_ParamLimits

0xc29a,	// (0x0004e276) list_highlight_pane_cp34

0xc2ab,	// (0x0004e287) list_single_graphic_hl_pane_g1_ParamLimits

0xc2ab,	// (0x0004e287) list_single_graphic_hl_pane_g1

0x5fa5,	// (0x00047f81) list_single_graphic_hl_pane_g2_ParamLimits

0x5fa5,	// (0x00047f81) list_single_graphic_hl_pane_g2

0x5fa5,	// (0x00047f81) list_single_graphic_hl_pane_g3_ParamLimits

0x5fa5,	// (0x00047f81) list_single_graphic_hl_pane_g3

0x7968,	// (0x00049944) list_single_graphic_hl_pane_g4_ParamLimits

0x7968,	// (0x00049944) list_single_graphic_hl_pane_g4

0x7dab,	// (0x00049d87) list_single_graphic_hl_pane_g5_ParamLimits

0x7dab,	// (0x00049d87) list_single_graphic_hl_pane_g5

0x0004,

0xfbeb,	// (0x00051bc7) list_single_graphic_hl_pane_g_ParamLimits

0xfbeb,	// (0x00051bc7) list_single_graphic_hl_pane_g

0x5fb1,	// (0x00047f8d) list_single_graphic_hl_pane_t1_ParamLimits

0x5fb1,	// (0x00047f8d) list_single_graphic_hl_pane_t1

0xc2b8,	// (0x0004e294) aid_size_min_hl_cp2

0xc2c1,	// (0x0004e29d) list_highlight_pane_cp34_cp2_ParamLimits

0xc2c1,	// (0x0004e29d) list_highlight_pane_cp34_cp2

0xc2ab,	// (0x0004e287) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc2ab,	// (0x0004e287) list_single_graphic_hl_pane_g1_cp2

0xc2ce,	// (0x0004e2aa) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc2ce,	// (0x0004e2aa) list_single_graphic_hl_pane_g2_cp2

0xc2da,	// (0x0004e2b6) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc2da,	// (0x0004e2b6) list_single_graphic_hl_pane_g3_cp2

0x29e2,	// (0x000449be) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x29e2,	// (0x000449be) list_single_graphic_hl_pane_g4_cp2

0xc2e8,	// (0x0004e2c4) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc2e8,	// (0x0004e2c4) list_single_graphic_hl_pane_g5_cp2

0x73dd,	// (0x000493b9) control_pane_g4_ParamLimits

0x73dd,	// (0x000493b9) control_pane_g4

0x8910,	// (0x0004a8ec) bg_popup_sub_pane_cp10_ParamLimits

0xba84,	// (0x0004da60) list_choice_list_pane_ParamLimits

0xba93,	// (0x0004da6f) scroll_pane_cp23

0x0626,	// (0x00042602) bg_popup_preview_window_pane_cp02_ParamLimits

0xc104,	// (0x0004e0e0) list_preview_fixed_pane_ParamLimits

0xc11a,	// (0x0004e0f6) list_preview_fixed_pane_cp_ParamLimits

0xc11a,	// (0x0004e0f6) list_preview_fixed_pane_cp

0xc126,	// (0x0004e102) popup_preview_fixed_window_g1_ParamLimits

0xc126,	// (0x0004e102) popup_preview_fixed_window_g1

0xc132,	// (0x0004e10e) popup_preview_fixed_window_g2_ParamLimits

0xc132,	// (0x0004e10e) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x00051b56) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x00051b56) popup_preview_fixed_window_g

0x6ace,	// (0x00048aaa) aid_navi_side_left_pane_ParamLimits

0x6ae3,	// (0x00048abf) aid_navi_side_right_pane_ParamLimits

0x6afb,	// (0x00048ad7) navi_icon_pane_stacon_ParamLimits

0x6b0f,	// (0x00048aeb) navi_navi_pane_stacon_ParamLimits

0x6afb,	// (0x00048ad7) navi_text_pane_stacon_ParamLimits

0xd7de,	// (0x0004f7ba) main_text_info_pane

0xc312,	// (0x0004e2ee) listscroll_text_info_pane

0xc31a,	// (0x0004e2f6) list_text_info_pane_ParamLimits

0xc31a,	// (0x0004e2f6) list_text_info_pane

0xc329,	// (0x0004e305) scroll_pane_cp24_ParamLimits

0xc329,	// (0x0004e305) scroll_pane_cp24

0xc347,	// (0x0004e323) list_text_info_pane_t1_ParamLimits

0xc347,	// (0x0004e323) list_text_info_pane_t1

0x895a,	// (0x0004a936) popup_fast_swap2_window_ParamLimits

0x895a,	// (0x0004a936) popup_fast_swap2_window

0xc36c,	// (0x0004e348) aid_size_cell_fast2

0xd7de,	// (0x0004f7ba) bg_popup_window_pane_cp17

0x9885,	// (0x0004b861) heading_pane_cp2

0x082c,	// (0x00042808) listscroll_fast2_pane

0xc376,	// (0x0004e352) grid_fast2_pane

0xc380,	// (0x0004e35c) listscroll_fast2_pane_g1

0xc38a,	// (0x0004e366) listscroll_fast2_pane_g2

0x0001,

0xfbf6,	// (0x00051bd2) listscroll_fast2_pane_g

0x0c34,	// (0x00042c10) scroll_pane_cp26

0xc394,	// (0x0004e370) cell_fast2_pane_ParamLimits

0xc394,	// (0x0004e370) cell_fast2_pane

0xc3ab,	// (0x0004e387) cell_fast2_pane_g1

0xc3b4,	// (0x0004e390) cell_fast2_pane_g2

0xc3bd,	// (0x0004e399) cell_fast2_pane_g3

0x0002,

0xfbfb,	// (0x00051bd7) cell_fast2_pane_g

0x086e,	// (0x0004284a) grid_highlight_pane_cp9

0x0883,	// (0x0004285f) main_eswt_pane_ParamLimits

0x0883,	// (0x0004285f) main_eswt_pane

0xc33e,	// (0x0004e31a) list_single_text_info_pane

0xc3c5,	// (0x0004e3a1) eswt_ctrl_button_pane

0xc3c5,	// (0x0004e3a1) eswt_ctrl_canvas_pane

0xc3cd,	// (0x0004e3a9) eswt_ctrl_combo_pane

0xc3c5,	// (0x0004e3a1) eswt_ctrl_default_pane

0xc3c5,	// (0x0004e3a1) eswt_ctrl_label_pane

0xc3d5,	// (0x0004e3b1) eswt_ctrl_wait_pane

0xc3dd,	// (0x0004e3b9) eswt_shell_pane

0xd7de,	// (0x0004f7ba) listscroll_eswt_app_pane

0xc3fd,	// (0x0004e3d9) popup_eswt_tasktip_window_ParamLimits

0xc3fd,	// (0x0004e3d9) popup_eswt_tasktip_window

0x94c5,	// (0x0004b4a1) bg_popup_window_pane_cp18

0xc40e,	// (0x0004e3ea) eswt_control_pane_g1_ParamLimits

0xc40e,	// (0x0004e3ea) eswt_control_pane_g1

0xc41b,	// (0x0004e3f7) eswt_control_pane_g2_ParamLimits

0xc41b,	// (0x0004e3f7) eswt_control_pane_g2

0xc428,	// (0x0004e404) eswt_control_pane_g3_ParamLimits

0xc428,	// (0x0004e404) eswt_control_pane_g3

0xc435,	// (0x0004e411) eswt_control_pane_g4_ParamLimits

0xc435,	// (0x0004e411) eswt_control_pane_g4

0x0003,

0xfc02,	// (0x00051bde) eswt_control_pane_g_ParamLimits

0xfc02,	// (0x00051bde) eswt_control_pane_g

0x0b08,	// (0x00042ae4) bg_button_pane_ParamLimits

0x0b08,	// (0x00042ae4) bg_button_pane

0x0883,	// (0x0004285f) common_borders_pane_copy2_ParamLimits

0x0883,	// (0x0004285f) common_borders_pane_copy2

0xc442,	// (0x0004e41e) control_button_pane_g1_ParamLimits

0xc442,	// (0x0004e41e) control_button_pane_g1

0xc44e,	// (0x0004e42a) control_button_pane_g2_ParamLimits

0xc44e,	// (0x0004e42a) control_button_pane_g2

0xc45a,	// (0x0004e436) control_button_pane_g3_ParamLimits

0xc45a,	// (0x0004e436) control_button_pane_g3

0x0002,

0xfc0b,	// (0x00051be7) control_button_pane_g_ParamLimits

0xfc0b,	// (0x00051be7) control_button_pane_g

0xc46e,	// (0x0004e44a) control_button_pane_t1

0xc47c,	// (0x0004e458) control_button_pane_t2

0x0001,

0xfc12,	// (0x00051bee) control_button_pane_t

0x9451,	// (0x0004b42d) bg_button_pane_g1

0x9459,	// (0x0004b435) bg_button_pane_g2

0x9461,	// (0x0004b43d) bg_button_pane_g3

0x9469,	// (0x0004b445) bg_button_pane_g4

0x9471,	// (0x0004b44d) bg_button_pane_g5

0x9479,	// (0x0004b455) bg_button_pane_g6

0x9481,	// (0x0004b45d) bg_button_pane_g7

0x9489,	// (0x0004b465) bg_button_pane_g8

0x9491,	// (0x0004b46d) bg_button_pane_g9

0x0008,

0xf871,	// (0x0005184d) bg_button_pane_g

0xba3f,	// (0x0004da1b) common_borders_pane_ParamLimits

0xba3f,	// (0x0004da1b) common_borders_pane

0xc40e,	// (0x0004e3ea) eswt_control_pane_g1_copy1_ParamLimits

0xc40e,	// (0x0004e3ea) eswt_control_pane_g1_copy1

0xc41b,	// (0x0004e3f7) eswt_control_pane_g2_copy1_ParamLimits

0xc41b,	// (0x0004e3f7) eswt_control_pane_g2_copy1

0xc428,	// (0x0004e404) eswt_control_pane_g3_copy1_ParamLimits

0xc428,	// (0x0004e404) eswt_control_pane_g3_copy1

0xc435,	// (0x0004e411) eswt_control_pane_g4_copy1_ParamLimits

0xc435,	// (0x0004e411) eswt_control_pane_g4_copy1

0xba7a,	// (0x0004da56) bg_eswt_ctrl_canvas_pane_g1

0xba3f,	// (0x0004da1b) common_borders_pane_cp2_ParamLimits

0xba3f,	// (0x0004da1b) common_borders_pane_cp2

0xba3f,	// (0x0004da1b) common_borders_pane_cp3_ParamLimits

0xba3f,	// (0x0004da1b) common_borders_pane_cp3

0xc48a,	// (0x0004e466) separator_horizontal_pane

0xc492,	// (0x0004e46e) separator_vertical_pane

0xc40e,	// (0x0004e3ea) eswt_control_pane_g1_copy2_ParamLimits

0xc40e,	// (0x0004e3ea) eswt_control_pane_g1_copy2

0xc41b,	// (0x0004e3f7) eswt_control_pane_g2_copy2_ParamLimits

0xc41b,	// (0x0004e3f7) eswt_control_pane_g2_copy2

0xc428,	// (0x0004e404) eswt_control_pane_g3_copy2_ParamLimits

0xc428,	// (0x0004e404) eswt_control_pane_g3_copy2

0xc435,	// (0x0004e411) eswt_control_pane_g4_copy2_ParamLimits

0xc435,	// (0x0004e411) eswt_control_pane_g4_copy2

0xd7de,	// (0x0004f7ba) common_borders_pane_cp4

0xc49b,	// (0x0004e477) separator_horizontal_pane_g1

0xc4a4,	// (0x0004e480) separator_horizontal_pane_g2

0xc4ad,	// (0x0004e489) separator_horizontal_pane_g3

0x0002,

0xfc17,	// (0x00051bf3) separator_horizontal_pane_g

0xc40e,	// (0x0004e3ea) eswt_control_pane_g1_copy3_ParamLimits

0xc40e,	// (0x0004e3ea) eswt_control_pane_g1_copy3

0xc41b,	// (0x0004e3f7) eswt_control_pane_g2_copy3_ParamLimits

0xc41b,	// (0x0004e3f7) eswt_control_pane_g2_copy3

0xc428,	// (0x0004e404) eswt_control_pane_g3_copy3_ParamLimits

0xc428,	// (0x0004e404) eswt_control_pane_g3_copy3

0xc435,	// (0x0004e411) eswt_control_pane_g4_copy3_ParamLimits

0xc435,	// (0x0004e411) eswt_control_pane_g4_copy3

0xd7de,	// (0x0004f7ba) common_borders_pane_cp5

0xc4b6,	// (0x0004e492) separator_vertical_pane_g1

0xc4bf,	// (0x0004e49b) separator_vertical_pane_g2

0xc4c8,	// (0x0004e4a4) separator_vertical_pane_g3

0x0002,

0xfc1e,	// (0x00051bfa) separator_vertical_pane_g

0xc40e,	// (0x0004e3ea) eswt_control_pane_g1_copy4_ParamLimits

0xc40e,	// (0x0004e3ea) eswt_control_pane_g1_copy4

0xc41b,	// (0x0004e3f7) eswt_control_pane_g2_copy4_ParamLimits

0xc41b,	// (0x0004e3f7) eswt_control_pane_g2_copy4

0xc428,	// (0x0004e404) eswt_control_pane_g3_copy4_ParamLimits

0xc428,	// (0x0004e404) eswt_control_pane_g3_copy4

0xc435,	// (0x0004e411) eswt_control_pane_g4_copy4_ParamLimits

0xc435,	// (0x0004e411) eswt_control_pane_g4_copy4

0xc4d1,	// (0x0004e4ad) eswt_ctrl_combo_button_pane

0xc4d9,	// (0x0004e4b5) eswt_ctrl_input_pane

0xc4e1,	// (0x0004e4bd) popup_choice_list_window_cp70

0xc4e9,	// (0x0004e4c5) eswt_ctrl_input_pane_t1

0xd7de,	// (0x0004f7ba) input_focus_pane_cp70

0xba3f,	// (0x0004da1b) bg_button_pane_cp70_ParamLimits

0xba3f,	// (0x0004da1b) bg_button_pane_cp70

0xc4f7,	// (0x0004e4d3) eswt_ctrl_combo_button_pane_g1

0xc4ff,	// (0x0004e4db) wait_bar_pane_cp70

0x94c5,	// (0x0004b4a1) bg_popup_window_pane_cp70_ParamLimits

0x94c5,	// (0x0004b4a1) bg_popup_window_pane_cp70

0xc507,	// (0x0004e4e3) popup_eswt_tasktip_window_t1

0xc51d,	// (0x0004e4f9) wait_bar_pane_cp71_ParamLimits

0xc51d,	// (0x0004e4f9) wait_bar_pane_cp71

0xc529,	// (0x0004e505) grid_eswt_app_pane

0x0e79,	// (0x00042e55) scroll_pane_cp70

0xc532,	// (0x0004e50e) cell_eswt_app_pane_ParamLimits

0xc532,	// (0x0004e50e) cell_eswt_app_pane

0xc564,	// (0x0004e540) cell_eswt_app_pane_g1_ParamLimits

0xc564,	// (0x0004e540) cell_eswt_app_pane_g1

0xc593,	// (0x0004e56f) cell_eswt_app_pane_g2_ParamLimits

0xc593,	// (0x0004e56f) cell_eswt_app_pane_g2

0x0001,

0xfc25,	// (0x00051c01) cell_eswt_app_pane_g_ParamLimits

0xfc25,	// (0x00051c01) cell_eswt_app_pane_g

0xc5bc,	// (0x0004e598) cell_eswt_app_pane_t1_ParamLimits

0xc5bc,	// (0x0004e598) cell_eswt_app_pane_t1

0xc5ee,	// (0x0004e5ca) grid_highlight_pane_cp70_ParamLimits

0xc5ee,	// (0x0004e5ca) grid_highlight_pane_cp70

0x46a0,	// (0x0004667c) set_content_pane_g1

0x7364,	// (0x00049340) status_small_volume_pane

0x7dbf,	// (0x00049d9b) status_small_volume_pane_g1

0x7dc7,	// (0x00049da3) volume_small2_pane

0x7dd0,	// (0x00049dac) volume_small2_pane_g1

0x7dd9,	// (0x00049db5) volume_small2_pane_g2

0x7de2,	// (0x00049dbe) volume_small2_pane_g3

0x7deb,	// (0x00049dc7) volume_small2_pane_g4

0x7df4,	// (0x00049dd0) volume_small2_pane_g5

0x7dfd,	// (0x00049dd9) volume_small2_pane_g6

0x7e06,	// (0x00049de2) volume_small2_pane_g7

0x7e0f,	// (0x00049deb) volume_small2_pane_g8

0x7e18,	// (0x00049df4) volume_small2_pane_g9

0x7e21,	// (0x00049dfd) volume_small2_pane_g10

0x0009,

0xfc2a,	// (0x00051c06) volume_small2_pane_g

0xbe49,	// (0x0004de25) fep_vkb_top_text_pane_g1_ParamLimits

0xbe64,	// (0x0004de40) fep_vkb_top_text_pane_t1_ParamLimits

0xc13e,	// (0x0004e11a) popup_preview_fixed_window_g3_ParamLimits

0xc13e,	// (0x0004e11a) popup_preview_fixed_window_g3

0x8e6b,	// (0x0004ae47) popup_toolbar_trans_pane

0xa80a,	// (0x0004c7e6) aid_height_set_list_ParamLimits

0xa81b,	// (0x0004c7f7) aid_size_parent_ParamLimits

0x8910,	// (0x0004a8ec) list_highlight_pane_cp2_ParamLimits

0x46a0,	// (0x0004667c) set_content_pane_g1_ParamLimits

0xaa4e,	// (0x0004ca2a) list_single_image_pane_ParamLimits

0xaa4e,	// (0x0004ca2a) list_single_image_pane

0xc5fa,	// (0x0004e5d6) aid_size_cell_image_ParamLimits

0xc5fa,	// (0x0004e5d6) aid_size_cell_image

0xc607,	// (0x0004e5e3) grid_single_image_pane_ParamLimits

0xc607,	// (0x0004e5e3) grid_single_image_pane

0x0b16,	// (0x00042af2) list_single_image_pane_g1_ParamLimits

0x0b16,	// (0x00042af2) list_single_image_pane_g1

0x0b22,	// (0x00042afe) list_single_image_pane_g2_ParamLimits

0x0b22,	// (0x00042afe) list_single_image_pane_g2

0x0001,

0xfc3f,	// (0x00051c1b) list_single_image_pane_g_ParamLimits

0xfc3f,	// (0x00051c1b) list_single_image_pane_g

0xc615,	// (0x0004e5f1) list_single_image_pane_t1_ParamLimits

0xc615,	// (0x0004e5f1) list_single_image_pane_t1

0xc62b,	// (0x0004e607) cell_image_list_pane_ParamLimits

0xc62b,	// (0x0004e607) cell_image_list_pane

0xc641,	// (0x0004e61d) cell_image_list_pane_g1

0xc64a,	// (0x0004e626) cell_image_list_pane_g2

0x0001,

0xfc44,	// (0x00051c20) cell_image_list_pane_g

0xc653,	// (0x0004e62f) aid_size_cell_tb_trans_pane

0x0b08,	// (0x00042ae4) bg_tb_trans_pane

0xc665,	// (0x0004e641) grid_tb_trans_pane

0x9451,	// (0x0004b42d) bg_tb_trans_pane_g1

0x9459,	// (0x0004b435) bg_tb_trans_pane_g2

0x9461,	// (0x0004b43d) bg_tb_trans_pane_g3

0x9469,	// (0x0004b445) bg_tb_trans_pane_g4

0x9471,	// (0x0004b44d) bg_tb_trans_pane_g5

0x9489,	// (0x0004b465) bg_tb_trans_pane_g6

0x9491,	// (0x0004b46d) bg_tb_trans_pane_g7

0x9479,	// (0x0004b455) bg_tb_trans_pane_g8

0x9481,	// (0x0004b45d) bg_tb_trans_pane_g9

0x0008,

0xfc49,	// (0x00051c25) bg_tb_trans_pane_g

0xc679,	// (0x0004e655) cell_toolbar_trans_pane_ParamLimits

0xc679,	// (0x0004e655) cell_toolbar_trans_pane

0xba7a,	// (0x0004da56) cell_toolbar_trans_pane_g1

0xb69e,	// (0x0004d67a) list_form2_midp_pane_t1

0xb6ac,	// (0x0004d688) list_form2_midp_pane_t2

0x0001,

0xfaf2,	// (0x00051ace) list_form2_midp_pane_t

0xb6ba,	// (0x0004d696) scroll_pane_cp51_ParamLimits

0xb881,	// (0x0004d85d) form2_midp_wait_pane_g1

0xb88a,	// (0x0004d866) form2_midp_wait_pane_g2

0xb893,	// (0x0004d86f) form2_midp_wait_pane_g3

0x0002,

0xfb07,	// (0x00051ae3) form2_midp_wait_pane_g

0xd84c,	// (0x0004f828) list_highlight_pane_cp21_ParamLimits

0xb8d7,	// (0x0004d8b3) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb8e6,	// (0x0004d8c2) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xaa07,	// (0x0004c9e3) list_single_2graphic_im_pane_ParamLimits

0xaa07,	// (0x0004c9e3) list_single_2graphic_im_pane

0xc69f,	// (0x0004e67b) list_single_2graphic_im_pane_g1_ParamLimits

0xc69f,	// (0x0004e67b) list_single_2graphic_im_pane_g1

0xc6b0,	// (0x0004e68c) list_single_2graphic_im_pane_g2_ParamLimits

0xc6b0,	// (0x0004e68c) list_single_2graphic_im_pane_g2

0xc6bc,	// (0x0004e698) list_single_2graphic_im_pane_g3_ParamLimits

0xc6bc,	// (0x0004e698) list_single_2graphic_im_pane_g3

0x0003,

0xfc5c,	// (0x00051c38) list_single_2graphic_im_pane_g_ParamLimits

0xfc5c,	// (0x00051c38) list_single_2graphic_im_pane_g

0xc6dc,	// (0x0004e6b8) list_single_2graphic_im_pane_t1_ParamLimits

0xc6dc,	// (0x0004e6b8) list_single_2graphic_im_pane_t1

0xc14a,	// (0x0004e126) list_single_graphic_2heading_pane_fp_ParamLimits

0xc14a,	// (0x0004e126) list_single_graphic_2heading_pane_fp

0x5e7e,	// (0x00047e5a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5e7e,	// (0x00047e5a) list_single_graphic_2heading_pane_fp_g1

0xc163,	// (0x0004e13f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc163,	// (0x0004e13f) list_single_graphic_2heading_pane_fp_g2

0xc0bc,	// (0x0004e098) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc0bc,	// (0x0004e098) list_single_graphic_2heading_pane_fp_g3

0xc0c8,	// (0x0004e0a4) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc0c8,	// (0x0004e0a4) list_single_graphic_2heading_pane_fp_g4

0xc16f,	// (0x0004e14b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc16f,	// (0x0004e14b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x00051b66) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x00051b66) list_single_graphic_2heading_pane_fp_g

0x5fc7,	// (0x00047fa3) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5fc7,	// (0x00047fa3) list_single_graphic_2heading_pane_fp_t1

0x5eb6,	// (0x00047e92) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5eb6,	// (0x00047e92) list_single_graphic_2heading_pane_fp_t2

0x5fdd,	// (0x00047fb9) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5fdd,	// (0x00047fb9) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc65,	// (0x00051c41) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc65,	// (0x00051c41) list_single_graphic_2heading_pane_fp_t

0xbb0b,	// (0x0004dae7) fep_hwr_write_pane_g5_ParamLimits

0xbb0b,	// (0x0004dae7) fep_hwr_write_pane_g5

0xbb17,	// (0x0004daf3) fep_hwr_write_pane_g6_ParamLimits

0xbb17,	// (0x0004daf3) fep_hwr_write_pane_g6

0xc3dd,	// (0x0004e3b9) eswt_shell_pane_ParamLimits

0x94c5,	// (0x0004b4a1) bg_popup_window_pane_cp18_ParamLimits

0xa761,	// (0x0004c73d) heading_pane_cp70

0xc507,	// (0x0004e4e3) popup_eswt_tasktip_window_t1_ParamLimits

0x8f9e,	// (0x0004af7a) aid_touch_tab_arrow_left

0x8fad,	// (0x0004af89) aid_touch_tab_arrow_right

0xd7fc,	// (0x0004f7d8) title_pane_g3_ParamLimits

0xd7fc,	// (0x0004f7d8) title_pane_g3

0x0ac7,	// (0x00042aa3) set_value_pane_g1

0x8e6b,	// (0x0004ae47) popup_toolbar_trans_pane_ParamLimits

0xc653,	// (0x0004e62f) aid_size_cell_tb_trans_pane_ParamLimits

0x0b08,	// (0x00042ae4) bg_tb_trans_pane_ParamLimits

0xc665,	// (0x0004e641) grid_tb_trans_pane_ParamLimits

0x0626,	// (0x00042602) cont_note_pane_ParamLimits

0x0626,	// (0x00042602) cont_note_pane

0x0883,	// (0x0004285f) cont_snote2_single_text_pane_ParamLimits

0x0883,	// (0x0004285f) cont_snote2_single_text_pane

0x0883,	// (0x0004285f) cont_snote2_single_graphic_pane_ParamLimits

0x0883,	// (0x0004285f) cont_snote2_single_graphic_pane

0x9aa1,	// (0x0004ba7d) cont_note_wait_pane_ParamLimits

0x9aa1,	// (0x0004ba7d) cont_note_wait_pane

0x9aa1,	// (0x0004ba7d) cont_note_image_pane_ParamLimits

0x9aa1,	// (0x0004ba7d) cont_note_image_pane

0xc70d,	// (0x0004e6e9) popup_note2_window_g1_ParamLimits

0xc70d,	// (0x0004e6e9) popup_note2_window_g1

0xc73e,	// (0x0004e71a) popup_note2_window_t1_ParamLimits

0xc73e,	// (0x0004e71a) popup_note2_window_t1

0xc783,	// (0x0004e75f) popup_note2_window_t2_ParamLimits

0xc783,	// (0x0004e75f) popup_note2_window_t2

0xc7c8,	// (0x0004e7a4) popup_note2_window_t3_ParamLimits

0xc7c8,	// (0x0004e7a4) popup_note2_window_t3

0xc80d,	// (0x0004e7e9) popup_note2_window_t4_ParamLimits

0xc80d,	// (0x0004e7e9) popup_note2_window_t4

0x06aa,	// (0x00042686) popup_note2_window_t5_ParamLimits

0x06aa,	// (0x00042686) popup_note2_window_t5

0x0004,

0xfc71,	// (0x00051c4d) popup_note2_window_t_ParamLimits

0xfc71,	// (0x00051c4d) popup_note2_window_t

0xc83c,	// (0x0004e818) popup_note2_image_window_g1_ParamLimits

0xc83c,	// (0x0004e818) popup_note2_image_window_g1

0xc848,	// (0x0004e824) popup_note2_image_window_g2_ParamLimits

0xc848,	// (0x0004e824) popup_note2_image_window_g2

0x0001,

0xfc7c,	// (0x00051c58) popup_note2_image_window_g_ParamLimits

0xfc7c,	// (0x00051c58) popup_note2_image_window_g

0xc85a,	// (0x0004e836) popup_note2_image_window_t1_ParamLimits

0xc85a,	// (0x0004e836) popup_note2_image_window_t1

0xc872,	// (0x0004e84e) popup_note2_image_window_t2_ParamLimits

0xc872,	// (0x0004e84e) popup_note2_image_window_t2

0xc88a,	// (0x0004e866) popup_note2_image_window_t3_ParamLimits

0xc88a,	// (0x0004e866) popup_note2_image_window_t3

0x0002,

0xfc81,	// (0x00051c5d) popup_note2_image_window_t_ParamLimits

0xfc81,	// (0x00051c5d) popup_note2_image_window_t

0x9aaf,	// (0x0004ba8b) popup_note2_wait_window_g1_ParamLimits

0x9aaf,	// (0x0004ba8b) popup_note2_wait_window_g1

0xc8a6,	// (0x0004e882) popup_note2_wait_window_g2_ParamLimits

0xc8a6,	// (0x0004e882) popup_note2_wait_window_g2

0x9ac7,	// (0x0004baa3) popup_note2_wait_window_g3_ParamLimits

0x9ac7,	// (0x0004baa3) popup_note2_wait_window_g3

0x0002,

0xfc88,	// (0x00051c64) popup_note2_wait_window_g_ParamLimits

0xfc88,	// (0x00051c64) popup_note2_wait_window_g

0xc8b2,	// (0x0004e88e) popup_note2_wait_window_t1_ParamLimits

0xc8b2,	// (0x0004e88e) popup_note2_wait_window_t1

0xc8d0,	// (0x0004e8ac) popup_note2_wait_window_t2_ParamLimits

0xc8d0,	// (0x0004e8ac) popup_note2_wait_window_t2

0xc8ee,	// (0x0004e8ca) popup_note2_wait_window_t3_ParamLimits

0xc8ee,	// (0x0004e8ca) popup_note2_wait_window_t3

0xc900,	// (0x0004e8dc) popup_note2_wait_window_t4_ParamLimits

0xc900,	// (0x0004e8dc) popup_note2_wait_window_t4

0x0003,

0xfc8f,	// (0x00051c6b) popup_note2_wait_window_t_ParamLimits

0xfc8f,	// (0x00051c6b) popup_note2_wait_window_t

0xc912,	// (0x0004e8ee) wait_bar2_pane_ParamLimits

0xc912,	// (0x0004e8ee) wait_bar2_pane

0xc92a,	// (0x0004e906) popup_snote2_single_text_window_g1_ParamLimits

0xc92a,	// (0x0004e906) popup_snote2_single_text_window_g1

0xc952,	// (0x0004e92e) popup_snote2_single_text_window_t1_ParamLimits

0xc952,	// (0x0004e92e) popup_snote2_single_text_window_t1

0xc99e,	// (0x0004e97a) popup_snote2_single_text_window_t2_ParamLimits

0xc99e,	// (0x0004e97a) popup_snote2_single_text_window_t2

0xc9ea,	// (0x0004e9c6) popup_snote2_single_text_window_t3_ParamLimits

0xc9ea,	// (0x0004e9c6) popup_snote2_single_text_window_t3

0xca2b,	// (0x0004ea07) popup_snote2_single_text_window_t4_ParamLimits

0xca2b,	// (0x0004ea07) popup_snote2_single_text_window_t4

0xca61,	// (0x0004ea3d) popup_snote2_single_text_window_t5_ParamLimits

0xca61,	// (0x0004ea3d) popup_snote2_single_text_window_t5

0x0004,

0xfc98,	// (0x00051c74) popup_snote2_single_text_window_t_ParamLimits

0xfc98,	// (0x00051c74) popup_snote2_single_text_window_t

0xca8c,	// (0x0004ea68) popup_snote2_single_graphic_window_g1_ParamLimits

0xca8c,	// (0x0004ea68) popup_snote2_single_graphic_window_g1

0xcab4,	// (0x0004ea90) popup_snote2_single_graphic_window_g2_ParamLimits

0xcab4,	// (0x0004ea90) popup_snote2_single_graphic_window_g2

0x0001,

0xfca3,	// (0x00051c7f) popup_snote2_single_graphic_window_g_ParamLimits

0xfca3,	// (0x00051c7f) popup_snote2_single_graphic_window_g

0xcadc,	// (0x0004eab8) popup_snote2_single_graphic_window_t1_ParamLimits

0xcadc,	// (0x0004eab8) popup_snote2_single_graphic_window_t1

0xcb28,	// (0x0004eb04) popup_snote2_single_graphic_window_t2_ParamLimits

0xcb28,	// (0x0004eb04) popup_snote2_single_graphic_window_t2

0xc9ea,	// (0x0004e9c6) popup_snote2_single_graphic_window_t3_ParamLimits

0xc9ea,	// (0x0004e9c6) popup_snote2_single_graphic_window_t3

0xca2b,	// (0x0004ea07) popup_snote2_single_graphic_window_t4_ParamLimits

0xca2b,	// (0x0004ea07) popup_snote2_single_graphic_window_t4

0xca61,	// (0x0004ea3d) popup_snote2_single_graphic_window_t5_ParamLimits

0xca61,	// (0x0004ea3d) popup_snote2_single_graphic_window_t5

0x0004,

0xfca8,	// (0x00051c84) popup_snote2_single_graphic_window_t_ParamLimits

0xfca8,	// (0x00051c84) popup_snote2_single_graphic_window_t

0xb56a,	// (0x0004d546) clock_nsta_pane_cp2_t1

0xb56a,	// (0x0004d546) clock_nsta_pane_cp2_t2

0x0001,

0xfac8,	// (0x00051aa4) clock_nsta_pane_cp2_t

0x580a,	// (0x000477e6) form_field_data_wide_pane_g1_ParamLimits

0x0b16,	// (0x00042af2) form_field_data_wide_pane_g2_ParamLimits

0x0b16,	// (0x00042af2) form_field_data_wide_pane_g2

0x0b22,	// (0x00042afe) form_field_data_wide_pane_g3_ParamLimits

0x0b22,	// (0x00042afe) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x00051662) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x00051662) form_field_data_wide_pane_g

0xb443,	// (0x0004d41f) grid_touch_3_pane_ParamLimits

0xb443,	// (0x0004d41f) grid_touch_3_pane

0xcb74,	// (0x0004eb50) cell_touch_3_pane_ParamLimits

0xcb74,	// (0x0004eb50) cell_touch_3_pane

0xba7a,	// (0x0004da56) cell_touch_3_pane_g1

0xba7a,	// (0x0004da56) cell_touch_3_pane_g2

0x0001,

0xfb4d,	// (0x00051b29) cell_touch_3_pane_g

0x06dc,	// (0x000426b8) cont_query_data_pane

0x06e4,	// (0x000426c0) cont_query_data_pane_cp1

0xcba7,	// (0x0004eb83) button_value_adjust_pane_cp7

0xcbaf,	// (0x0004eb8b) query_popup_pane_cp3

0x2360,	// (0x0004433c) bg_popup_sub_pane_cp22_ParamLimits

0x6d85,	// (0x00048d61) navi_navi_volume_pane_cp2

0x6da0,	// (0x00048d7c) popup_side_volume_key_window_g2

0x6daf,	// (0x00048d8b) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x000516f8) popup_side_volume_key_window_g

0x6dcc,	// (0x00048da8) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x000516ff) popup_side_volume_key_window_t

0x45a3,	// (0x0004657f) popup_side_volume_key_window_ParamLimits

0x5410,	// (0x000473ec) list_double_graphic_pane_g4_ParamLimits

0x5410,	// (0x000473ec) list_double_graphic_pane_g4

0xaa36,	// (0x0004ca12) list_single_2heading_msg_pane_ParamLimits

0xaa36,	// (0x0004ca12) list_single_2heading_msg_pane

0x7e2a,	// (0x00049e06) list_single_2heading_msg_pane_g1_ParamLimits

0x7e2a,	// (0x00049e06) list_single_2heading_msg_pane_g1

0x29e2,	// (0x000449be) list_single_2heading_msg_pane_g2_ParamLimits

0x29e2,	// (0x000449be) list_single_2heading_msg_pane_g2

0x7e36,	// (0x00049e12) list_single_2heading_msg_pane_g3_ParamLimits

0x7e36,	// (0x00049e12) list_single_2heading_msg_pane_g3

0x7e42,	// (0x00049e1e) list_single_2heading_msg_pane_g4_ParamLimits

0x7e42,	// (0x00049e1e) list_single_2heading_msg_pane_g4

0x0003,

0xfcb3,	// (0x00051c8f) list_single_2heading_msg_pane_g_ParamLimits

0xfcb3,	// (0x00051c8f) list_single_2heading_msg_pane_g

0x5ffd,	// (0x00047fd9) list_single_2heading_msg_pane_t1_ParamLimits

0x5ffd,	// (0x00047fd9) list_single_2heading_msg_pane_t1

0x6025,	// (0x00048001) list_single_2heading_msg_pane_t2_ParamLimits

0x6025,	// (0x00048001) list_single_2heading_msg_pane_t2

0x6054,	// (0x00048030) list_single_2heading_msg_pane_t3_ParamLimits

0x6054,	// (0x00048030) list_single_2heading_msg_pane_t3

0x608d,	// (0x00048069) list_single_2heading_msg_pane_t4_ParamLimits

0x608d,	// (0x00048069) list_single_2heading_msg_pane_t4

0x0003,

0xfcbc,	// (0x00051c98) list_single_2heading_msg_pane_t_ParamLimits

0xfcbc,	// (0x00051c98) list_single_2heading_msg_pane_t

0xd808,	// (0x0004f7e4) title_pane_g4_ParamLimits

0xd808,	// (0x0004f7e4) title_pane_g4

0x6a1e,	// (0x000489fa) title_pane_stacon_g3_ParamLimits

0x6a1e,	// (0x000489fa) title_pane_stacon_g3

0xc6d0,	// (0x0004e6ac) list_single_2graphic_im_pane_g4_ParamLimits

0xc6d0,	// (0x0004e6ac) list_single_2graphic_im_pane_g4

0xa511,	// (0x0004c4ed) popup_side_volume_key_window_cp

0xad5e,	// (0x0004cd3a) main_idle_act2_pane_t1

0x753c,	// (0x00049518) toolbar_button_pane_g10

0x686e,	// (0x0004884a) popup_toolbar_window_cp1

0xb55b,	// (0x0004d537) clock_nsta_pane_cp_t1

0xb55b,	// (0x0004d537) clock_nsta_pane_cp_t2

0x0001,

0xfac3,	// (0x00051a9f) clock_nsta_pane_cp_t

0x6d85,	// (0x00048d61) navi_navi_volume_pane_cp2_ParamLimits

0x6d94,	// (0x00048d70) popup_side_volume_key_window_g1_ParamLimits

0x6da0,	// (0x00048d7c) popup_side_volume_key_window_g2_ParamLimits

0x6daf,	// (0x00048d8b) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x000516f8) popup_side_volume_key_window_g_ParamLimits

0x7a30,	// (0x00049a0c) fep_hwr_aid_pane

0x2135,	// (0x00044111) bg_fep_hwr_top_pane_g4_ParamLimits

0xbadb,	// (0x0004dab7) fep_hwr_top_pane_g1_ParamLimits

0xbaed,	// (0x0004dac9) fep_hwr_top_pane_g2_ParamLimits

0x7aeb,	// (0x00049ac7) fep_hwr_top_pane_g3_ParamLimits

0xfb18,	// (0x00051af4) fep_hwr_top_pane_g_ParamLimits

0x7b00,	// (0x00049adc) fep_hwr_top_text_pane_ParamLimits

0xa2c6,	// (0x0004c2a2) aid_touch_tab_arrow_arrow_2

0xa2cf,	// (0x0004c2ab) aid_touch_tab_arrow_left_2

0x7a44,	// (0x00049a20) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7a7b,	// (0x00049a57) fep_hwr_prediction_pane

0xbc43,	// (0x0004dc1f) fep_vkb_prediction_pane

0xbd49,	// (0x0004dd25) fep_vkb_side_pane_g3_ParamLimits

0xbd49,	// (0x0004dd25) fep_vkb_side_pane_g3

0xbcf5,	// (0x0004dcd1) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc1c3,	// (0x0004e19f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc1d0,	// (0x0004e1ac) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x00051b9e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xcbd6,	// (0x0004ebb2) fep_hwr_prediction_pane_g1

0x7e5a,	// (0x00049e36) fep_hwr_prediction_pane_g2

0x7e62,	// (0x00049e3e) fep_hwr_prediction_pane_g3

0x7e6a,	// (0x00049e46) fep_hwr_prediction_pane_g4

0x0003,

0xfcc5,	// (0x00051ca1) fep_hwr_prediction_pane_g

0xcbd6,	// (0x0004ebb2) fep_vkb_prediction_pane_g1

0xcbe0,	// (0x0004ebbc) fep_vkb_prediction_pane_g2

0xcbe8,	// (0x0004ebc4) fep_vkb_prediction_pane_g3

0xcbf0,	// (0x0004ebcc) fep_vkb_prediction_pane_g4

0x0003,

0xfcce,	// (0x00051caa) fep_vkb_prediction_pane_g

0xd8c7,	// (0x0004f8a3) slider_set_pane_g3

0xd8db,	// (0x0004f8b7) slider_set_pane_g4

0xd8f3,	// (0x0004f8cf) slider_set_pane_g5

0xd8c7,	// (0x0004f8a3) slider_set_pane_g6

0x7849,	// (0x00049825) slider_set_pane_g7

0xa9a0,	// (0x0004c97c) slider_form_pane_g3

0xa9a9,	// (0x0004c985) slider_form_pane_g4

0xa9b1,	// (0x0004c98d) slider_form_pane_g5

0xa9a0,	// (0x0004c97c) slider_form_pane_g6

0xa9b9,	// (0x0004c995) slider_form_pane_g7

0xb015,	// (0x0004cff1) slider_set_pane_vc_g3

0xb01e,	// (0x0004cffa) slider_set_pane_vc_g4

0xb027,	// (0x0004d003) slider_set_pane_vc_g5

0xb015,	// (0x0004cff1) slider_set_pane_vc_g6

0xb030,	// (0x0004d00c) slider_set_pane_vc_g7

0xb208,	// (0x0004d1e4) slider_form_pane_vc_g1

0xb211,	// (0x0004d1ed) slider_form_pane_vc_g2

0xb21a,	// (0x0004d1f6) slider_form_pane_vc_g3

0xb208,	// (0x0004d1e4) slider_form_pane_vc_g4

0xb223,	// (0x0004d1ff) slider_form_pane_vc_g5

0x0004,

0xfa95,	// (0x00051a71) slider_form_pane_vc_g

0xd7de,	// (0x0004f7ba) main_idle_act3_pane

0xcbf8,	// (0x0004ebd4) ai3_links_pane

0xcc01,	// (0x0004ebdd) popup_ai3_data_window_ParamLimits

0xcc01,	// (0x0004ebdd) popup_ai3_data_window

0xd7de,	// (0x0004f7ba) grid_ai3_links_pane

0xcc1f,	// (0x0004ebfb) cell_ai3_links_pane_ParamLimits

0xcc1f,	// (0x0004ebfb) cell_ai3_links_pane

0xcc39,	// (0x0004ec15) bg_popup_sub_pane_cp11

0xcc46,	// (0x0004ec22) cell_ai3_links_pane_g1

0xd7de,	// (0x0004f7ba) bg_popup_sub_pane_cp12

0xcc6b,	// (0x0004ec47) heading_ai3_data_pane

0xcc73,	// (0x0004ec4f) list_ai3_gene_pane

0xcc7f,	// (0x0004ec5b) popup_ai3_data_window_g1

0xcc87,	// (0x0004ec63) heading_ai3_data_pane_g1

0xcc8f,	// (0x0004ec6b) heading_ai3_data_pane_t1

0xcc9d,	// (0x0004ec79) list_double_ai3_gene_pane_ParamLimits

0xcc9d,	// (0x0004ec79) list_double_ai3_gene_pane

0xccaa,	// (0x0004ec86) list_single_ai3_gene_pane_ParamLimits

0xccaa,	// (0x0004ec86) list_single_ai3_gene_pane

0xba3f,	// (0x0004da1b) list_highlight_pane_cp7_ParamLimits

0xba3f,	// (0x0004da1b) list_highlight_pane_cp7

0xccb7,	// (0x0004ec93) list_single_a13_gene_pane_t1_ParamLimits

0xccb7,	// (0x0004ec93) list_single_a13_gene_pane_t1

0xccce,	// (0x0004ecaa) list_single_ai3_gene_pane_g1

0xccd7,	// (0x0004ecb3) list_single_ai3_gene_pane_g2

0x0001,

0xfcd7,	// (0x00051cb3) list_single_ai3_gene_pane_g

0xccdf,	// (0x0004ecbb) list_double_ai3_gene_pane_g1_ParamLimits

0xccdf,	// (0x0004ecbb) list_double_ai3_gene_pane_g1

0xcceb,	// (0x0004ecc7) list_double_ai3_gene_pane_t1_ParamLimits

0xcceb,	// (0x0004ecc7) list_double_ai3_gene_pane_t1

0xcd07,	// (0x0004ece3) list_double_ai3_gene_pane_t2_ParamLimits

0xcd07,	// (0x0004ece3) list_double_ai3_gene_pane_t2

0xcd1c,	// (0x0004ecf8) list_double_ai3_gene_pane_t3_ParamLimits

0xcd1c,	// (0x0004ecf8) list_double_ai3_gene_pane_t3

0x0002,

0xfcdc,	// (0x00051cb8) list_double_ai3_gene_pane_t_ParamLimits

0xfcdc,	// (0x00051cb8) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5ff3,	// (0x00047fcf) aid_size_min_col_2

0xcbc0,	// (0x0004eb9c) aid_size_min_msg_ParamLimits

0xcbc0,	// (0x0004eb9c) aid_size_min_msg

0xbe55,	// (0x0004de31) fep_vkb_top_text_pane_g2_ParamLimits

0xbe55,	// (0x0004de31) fep_vkb_top_text_pane_g2

0x0001,

0xfb48,	// (0x00051b24) fep_vkb_top_text_pane_g_ParamLimits

0xfb48,	// (0x00051b24) fep_vkb_top_text_pane_g

0xd7de,	// (0x0004f7ba) main_hc_apps_shell_pane

0xcd39,	// (0x0004ed15) grid_hc_apps_pane_ParamLimits

0xcd39,	// (0x0004ed15) grid_hc_apps_pane

0xcd48,	// (0x0004ed24) list_hc_apps_pane

0xcd50,	// (0x0004ed2c) scroll_pane_cp37_ParamLimits

0xcd50,	// (0x0004ed2c) scroll_pane_cp37

0xcd5c,	// (0x0004ed38) cell_hc_apps_pane_ParamLimits

0xcd5c,	// (0x0004ed38) cell_hc_apps_pane

0xce14,	// (0x0004edf0) cell_hc_apps_pane_g1_ParamLimits

0xce14,	// (0x0004edf0) cell_hc_apps_pane_g1

0xce45,	// (0x0004ee21) cell_hc_apps_pane_g2_ParamLimits

0xce45,	// (0x0004ee21) cell_hc_apps_pane_g2

0xce61,	// (0x0004ee3d) cell_hc_apps_pane_g3_ParamLimits

0xce61,	// (0x0004ee3d) cell_hc_apps_pane_g3

0x0002,

0xfce3,	// (0x00051cbf) cell_hc_apps_pane_g_ParamLimits

0xfce3,	// (0x00051cbf) cell_hc_apps_pane_g

0xce83,	// (0x0004ee5f) cell_hc_apps_pane_t1_ParamLimits

0xce83,	// (0x0004ee5f) cell_hc_apps_pane_t1

0x0626,	// (0x00042602) grid_highlight_pane_cp10_ParamLimits

0x0626,	// (0x00042602) grid_highlight_pane_cp10

0xcec3,	// (0x0004ee9f) list_single_hc_apps_pane_ParamLimits

0xcec3,	// (0x0004ee9f) list_single_hc_apps_pane

0xcf02,	// (0x0004eede) list_single_hc_apps_pane_g1

0x7e72,	// (0x00049e4e) list_single_hc_apps_pane_g2

0x0001,

0xfcea,	// (0x00051cc6) list_single_hc_apps_pane_g

0x7e8b,	// (0x00049e67) list_single_hc_apps_pane_g2_copy1

0x60b2,	// (0x0004808e) list_single_hc_apps_pane_t1

0xd84c,	// (0x0004f828) bg_set_opt_pane_cp_ParamLimits

0x65bf,	// (0x0004859b) setting_slider_pane_t1_ParamLimits

0x65d8,	// (0x000485b4) setting_slider_pane_t2_ParamLimits

0x65f2,	// (0x000485ce) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00051540) setting_slider_pane_t_ParamLimits

0x660a,	// (0x000485e6) slider_set_pane_ParamLimits

0x73f1,	// (0x000493cd) control_pane_g5_ParamLimits

0x73f1,	// (0x000493cd) control_pane_g5

0xa7cd,	// (0x0004c7a9) slider_set_pane_g1_ParamLimits

0x783d,	// (0x00049819) slider_set_pane_g2_ParamLimits

0xd8c7,	// (0x0004f8a3) slider_set_pane_g3_ParamLimits

0xd8db,	// (0x0004f8b7) slider_set_pane_g4_ParamLimits

0xd8f3,	// (0x0004f8cf) slider_set_pane_g5_ParamLimits

0xd8c7,	// (0x0004f8a3) slider_set_pane_g6_ParamLimits

0x7849,	// (0x00049825) slider_set_pane_g7_ParamLimits

0xf96f,	// (0x0005194b) slider_set_pane_g_ParamLimits

0x464b,	// (0x00046627) navi_icon_text_pane_ParamLimits

0x8f5d,	// (0x0004af39) aid_fill_nsta_2_ParamLimits

0x8f9e,	// (0x0004af7a) aid_touch_tab_arrow_left_ParamLimits

0x8fad,	// (0x0004af89) aid_touch_tab_arrow_right_ParamLimits

0x901a,	// (0x0004aff6) clock_nsta_pane_ParamLimits

0xa2a8,	// (0x0004c284) navi_icon_pane_g1_ParamLimits

0xa2b4,	// (0x0004c290) navi_text_pane_t1_ParamLimits

0xb678,	// (0x0004d654) navi_icon_text_pane_g1_ParamLimits

0xb684,	// (0x0004d660) navi_icon_text_pane_t1_ParamLimits

0xcf02,	// (0x0004eede) list_single_hc_apps_pane_g1_ParamLimits

0x7e72,	// (0x00049e4e) list_single_hc_apps_pane_g2_ParamLimits

0xfcea,	// (0x00051cc6) list_single_hc_apps_pane_g_ParamLimits

0x7e8b,	// (0x00049e67) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x60b2,	// (0x0004808e) list_single_hc_apps_pane_t1_ParamLimits

0x6407,	// (0x000483e3) popup_toolbar2_fixed_window_ParamLimits

0x6407,	// (0x000483e3) popup_toolbar2_fixed_window

0x8e61,	// (0x0004ae3d) popup_toolbar2_float_window

0xd7de,	// (0x0004f7ba) bg_popup_sub_pane_cp27

0xcf1b,	// (0x0004eef7) grid_toolbar2_float_pane

0xd7de,	// (0x0004f7ba) bg_popup_sub_pane_cp26

0xcf1b,	// (0x0004eef7) grid_toolbar2_fixed_pane

0xcf23,	// (0x0004eeff) cell_toolbar2_fixed_pane_ParamLimits

0xcf23,	// (0x0004eeff) cell_toolbar2_fixed_pane

0xcf33,	// (0x0004ef0f) cell_toolbar2_fixed_pane_g1

0xcf3c,	// (0x0004ef18) toolbar2_fixed_button_pane

0x9451,	// (0x0004b42d) toolbar2_fixed_button_pane_g1

0x9459,	// (0x0004b435) toolbar2_fixed_button_pane_g2

0x9461,	// (0x0004b43d) toolbar2_fixed_button_pane_g3

0x9469,	// (0x0004b445) toolbar2_fixed_button_pane_g4

0x9471,	// (0x0004b44d) toolbar2_fixed_button_pane_g5

0x9479,	// (0x0004b455) toolbar2_fixed_button_pane_g6

0x9481,	// (0x0004b45d) toolbar2_fixed_button_pane_g7

0x9489,	// (0x0004b465) toolbar2_fixed_button_pane_g8

0x9491,	// (0x0004b46d) toolbar2_fixed_button_pane_g9

0x0008,

0xf871,	// (0x0005184d) toolbar2_fixed_button_pane_g

0xcf44,	// (0x0004ef20) cell_toolbar2_float_pane_ParamLimits

0xcf44,	// (0x0004ef20) cell_toolbar2_float_pane

0xcf55,	// (0x0004ef31) cell_toolbar2_float_pane_g1

0xcf3c,	// (0x0004ef18) toolbar2_fixed_button_pane_cp

0xbbb1,	// (0x0004db8d) fep_vkb_accented_list_pane_ParamLimits

0xbbb1,	// (0x0004db8d) fep_vkb_accented_list_pane

0x7c62,	// (0x00049c3e) bg_popup_fep_shadow_pane_g9

0x47a7,	// (0x00046783) bg_popup_fep_shadow_pane_cp3

0x0c1b,	// (0x00042bf7) list_accented_list_pane

0xcf5e,	// (0x0004ef3a) list_single_accented_list_pane_ParamLimits

0xcf5e,	// (0x0004ef3a) list_single_accented_list_pane

0x47a7,	// (0x00046783) list_highlight_pane_cp10

0xcf6f,	// (0x0004ef4b) list_single_accented_list_pane_t1

0x8da7,	// (0x0004ad83) popup_slider_window_ParamLimits

0x8da7,	// (0x0004ad83) popup_slider_window

0xcbb7,	// (0x0004eb93) aid_indentation_list_msg

0xd03b,	// (0x0004f017) bg_popup_window_pane_cp19

0xd0a9,	// (0x0004f085) popup_slider_window_g1

0xd0c5,	// (0x0004f0a1) popup_slider_window_g2

0xd0e1,	// (0x0004f0bd) popup_slider_window_g3

0x0005,

0xfcef,	// (0x00051ccb) popup_slider_window_g

0xd13d,	// (0x0004f119) popup_slider_window_t1

0xd1b1,	// (0x0004f18d) small_volume_slider_vertical_pane

0xba7a,	// (0x0004da56) small_volume_slider_vertical_pane_g1

0xba7a,	// (0x0004da56) small_volume_slider_vertical_pane_g2

0xd1cd,	// (0x0004f1a9) small_volume_slider_vertical_pane_g3

0x0002,

0xfd01,	// (0x00051cdd) small_volume_slider_vertical_pane_g

0x61bf,	// (0x0004819b) area_side_right_pane_ParamLimits

0x61bf,	// (0x0004819b) area_side_right_pane

0x7ea7,	// (0x00049e83) aid_size_side_button_ParamLimits

0x7ea7,	// (0x00049e83) aid_size_side_button

0x7ebb,	// (0x00049e97) grid_sctrl_middle_pane_ParamLimits

0x7ebb,	// (0x00049e97) grid_sctrl_middle_pane

0x7edb,	// (0x00049eb7) sctrl_sk_bottom_pane

0x7eec,	// (0x00049ec8) sctrl_sk_top_pane

0x7efe,	// (0x00049eda) aid_touch_sctrl_top

0x0626,	// (0x00042602) bg_sctrl_sk_pane_ParamLimits

0x0626,	// (0x00042602) bg_sctrl_sk_pane

0x7f0b,	// (0x00049ee7) sctrl_sk_top_pane_g1

0x7f18,	// (0x00049ef4) sctrl_sk_top_pane_t1

0x7efe,	// (0x00049eda) aid_touch_sctrl_bottom

0x0626,	// (0x00042602) bg_sctrl_sk_pane_cp_ParamLimits

0x0626,	// (0x00042602) bg_sctrl_sk_pane_cp

0x7f33,	// (0x00049f0f) sctrl_sk_bottom_pane_g1

0x7f18,	// (0x00049ef4) sctrl_sk_bottom_pane_t1

0x7f3c,	// (0x00049f18) cell_sctrl_middle_pane_ParamLimits

0x7f3c,	// (0x00049f18) cell_sctrl_middle_pane

0x7f59,	// (0x00049f35) aid_touch_sctrl_middle_ParamLimits

0x7f59,	// (0x00049f35) aid_touch_sctrl_middle

0x0b08,	// (0x00042ae4) bg_sctrl_middle_pane_ParamLimits

0x0b08,	// (0x00042ae4) bg_sctrl_middle_pane

0xbcf5,	// (0x0004dcd1) cell_sctrl_middle_pane_g1_ParamLimits

0xbcf5,	// (0x0004dcd1) cell_sctrl_middle_pane_g1

0x7f6b,	// (0x00049f47) cell_sctrl_middle_pane_g2_ParamLimits

0x7f6b,	// (0x00049f47) cell_sctrl_middle_pane_g2

0x0001,

0xfd0d,	// (0x00051ce9) cell_sctrl_middle_pane_g_ParamLimits

0xfd0d,	// (0x00051ce9) cell_sctrl_middle_pane_g

0x9451,	// (0x0004b42d) bg_sctrl_middle_pane_g1

0x9459,	// (0x0004b435) bg_sctrl_middle_pane_g2

0x9461,	// (0x0004b43d) bg_sctrl_middle_pane_g3

0x9469,	// (0x0004b445) bg_sctrl_middle_pane_g4

0x9471,	// (0x0004b44d) bg_sctrl_middle_pane_g5

0x9479,	// (0x0004b455) bg_sctrl_middle_pane_g6

0x9481,	// (0x0004b45d) bg_sctrl_middle_pane_g7

0x9489,	// (0x0004b465) bg_sctrl_middle_pane_g8

0x0007,

0xfd12,	// (0x00051cee) bg_sctrl_middle_pane_g

0x9491,	// (0x0004b46d) bg_sctrl_middle_pane_g8_copy1

0x9451,	// (0x0004b42d) bg_sctrl_sk_pane_g1

0x9459,	// (0x0004b435) bg_sctrl_sk_pane_g2

0x9461,	// (0x0004b43d) bg_sctrl_sk_pane_g3

0x0008,

0xf871,	// (0x0005184d) bg_sctrl_sk_pane_g

0x0a41,	// (0x00042a1d) aid_size_touch_scroll_bar

0x9469,	// (0x0004b445) bg_sctrl_sk_pane_g4

0x9471,	// (0x0004b44d) bg_sctrl_sk_pane_g5

0x9479,	// (0x0004b455) bg_sctrl_sk_pane_g6

0x9481,	// (0x0004b45d) bg_sctrl_sk_pane_g7

0x9489,	// (0x0004b465) bg_sctrl_sk_pane_g8

0x9491,	// (0x0004b46d) bg_sctrl_sk_pane_g9

0x89be,	// (0x0004a99a) popup_fep_china_hwr2_fs_candidate_window

0x89c8,	// (0x0004a9a4) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x89c8,	// (0x0004a9a4) popup_fep_china_hwr2_fs_control_window

0xbcf5,	// (0x0004dcd1) sctrl_sk_top_pane_g2

0x0001,

0xfd08,	// (0x00051ce4) sctrl_sk_top_pane_g

0xd1d6,	// (0x0004f1b2) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd1d6,	// (0x0004f1b2) aid_fep_china_hwr2_fs_cell

0xd1e9,	// (0x0004f1c5) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd1e9,	// (0x0004f1c5) bg_popup_fep_shadow_pane_cp4

0xd202,	// (0x0004f1de) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd202,	// (0x0004f1de) bg_popup_fep_shadow_pane_cp5

0xd214,	// (0x0004f1f0) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd214,	// (0x0004f1f0) popup_fep_china_hwr2_fs_control_bar_grid

0xd224,	// (0x0004f200) popup_fep_china_hwr2_fs_control_funtion_grid

0xd22c,	// (0x0004f208) aid_fep_china_hwr2_fs_candi_cell

0xd7de,	// (0x0004f7ba) bg_popup_fep_shadow_pane_cp6

0xd236,	// (0x0004f212) popup_fep_china_hwr2_fs_candidate_grid

0xd240,	// (0x0004f21c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd240,	// (0x0004f21c) cell_fep_china_hwr2_fs_funtion_grid

0xba7a,	// (0x0004da56) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd258,	// (0x0004f234) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd258,	// (0x0004f234) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd266,	// (0x0004f242) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd266,	// (0x0004f242) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd23,	// (0x00051cff) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd23,	// (0x00051cff) cell_fep_china_hwr2_fs_funtion_grid_g

0xd27c,	// (0x0004f258) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd27c,	// (0x0004f258) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd291,	// (0x0004f26d) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd291,	// (0x0004f26d) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd28,	// (0x00051d04) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd28,	// (0x00051d04) cell_fep_china_hwr2_fs_funtion_grid_t

0xd2ad,	// (0x0004f289) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd2b5,	// (0x0004f291) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd2bd,	// (0x0004f299) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2d,	// (0x00051d09) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd2c5,	// (0x0004f2a1) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd2c5,	// (0x0004f2a1) cell_fep_china_hwr2_fs_candidate_grid

0xd2e4,	// (0x0004f2c0) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd2ec,	// (0x0004f2c8) popup_fep_china_hwr2_fs_candidate_grid_g21

0xba7a,	// (0x0004da56) cell_fep_china_hwr2_fs_candidate_grid_g1

0xba7a,	// (0x0004da56) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4d,	// (0x00051b29) cell_fep_china_hwr2_fs_candidate_grid_g

0xd2f4,	// (0x0004f2d0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x902d,	// (0x0004b009) clock_nsta_pane_cp_24_ParamLimits

0x902d,	// (0x0004b009) clock_nsta_pane_cp_24

0x90ad,	// (0x0004b089) indicator_nsta_pane_cp_24_ParamLimits

0x90ad,	// (0x0004b089) indicator_nsta_pane_cp_24

0xa124,	// (0x0004c100) heading_pane_g1

0x0001,

0xf8d6,	// (0x000518b2) heading_pane_g

0xaba5,	// (0x0004cb81) grid_sct_catagory_button_pane

0xabd7,	// (0x0004cbb3) scroll_pane_cp5_ParamLimits

0xb6c6,	// (0x0004d6a2) button_value_adjust_pane_cp5_ParamLimits

0xb6c6,	// (0x0004d6a2) button_value_adjust_pane_cp5

0xb7ab,	// (0x0004d787) form2_midp_time_pane_ParamLimits

0xd302,	// (0x0004f2de) cell_sct_catagory_button_pane_ParamLimits

0xd302,	// (0x0004f2de) cell_sct_catagory_button_pane

0xba3f,	// (0x0004da1b) bg_button_pane_cp01_ParamLimits

0xba3f,	// (0x0004da1b) bg_button_pane_cp01

0xba7a,	// (0x0004da56) cell_sct_catagory_button_pane_g1

0x8de8,	// (0x0004adc4) popup_tb_extension_window

0xd314,	// (0x0004f2f0) aid_size_cell_ext_ParamLimits

0xd314,	// (0x0004f2f0) aid_size_cell_ext

0x0626,	// (0x00042602) bg_tb_trans_pane_cp1_ParamLimits

0x0626,	// (0x00042602) bg_tb_trans_pane_cp1

0xd334,	// (0x0004f310) grid_tb_ext_pane_ParamLimits

0xd334,	// (0x0004f310) grid_tb_ext_pane

0xd364,	// (0x0004f340) cell_tb_ext_pane_ParamLimits

0xd364,	// (0x0004f340) cell_tb_ext_pane

0xd37b,	// (0x0004f357) cell_tb_ext_pane_g1_ParamLimits

0xd37b,	// (0x0004f357) cell_tb_ext_pane_g1

0xd398,	// (0x0004f374) cell_tb_ext_pane_t1

0x0626,	// (0x00042602) list_highlight_pane_cp11_ParamLimits

0x0626,	// (0x00042602) list_highlight_pane_cp11

0x6426,	// (0x00048402) popup_uni_indicator_window_ParamLimits

0x6426,	// (0x00048402) popup_uni_indicator_window

0x0b08,	// (0x00042ae4) bg_popup_sub_pane_cp14

0xd3b3,	// (0x0004f38f) list_uniindi_pane

0xd3bf,	// (0x0004f39b) uniindi_top_pane

0x0626,	// (0x00042602) bg_uniindi_top_pane

0xd3e0,	// (0x0004f3bc) uniindi_top_pane_g1

0xd3f6,	// (0x0004f3d2) uniindi_top_pane_g2

0x0003,

0xfd34,	// (0x00051d10) uniindi_top_pane_g

0xd420,	// (0x0004f3fc) uniindi_top_pane_t1

0xd44c,	// (0x0004f428) list_single_uniindi_pane_ParamLimits

0xd44c,	// (0x0004f428) list_single_uniindi_pane

0xba7a,	// (0x0004da56) bg_uniindi_top_pane_g1

0xd45e,	// (0x0004f43a) list_single_uniindi_pane_g1

0xd471,	// (0x0004f44d) list_single_uniindi_pane_t1

0xd7de,	// (0x0004f7ba) control_bg_pane

0xd496,	// (0x0004f472) bg_sctrl_sk_pane_cp1

0xd49f,	// (0x0004f47b) bg_sctrl_sk_pane_cp2

0xd4a8,	// (0x0004f484) control_bg_pane_g1

0xd4b1,	// (0x0004f48d) control_bg_pane_g2

0x0001,

0xfd3d,	// (0x00051d19) control_bg_pane_g

0xb4ed,	// (0x0004d4c9) cell_indicator_nsta_pane_g1_ParamLimits

0xb4fb,	// (0x0004d4d7) cell_indicator_nsta_pane_g2_ParamLimits

0xfab1,	// (0x00051a8d) cell_indicator_nsta_pane_g_ParamLimits

0x5e54,	// (0x00047e30) form2_midp_time_pane_t1_ParamLimits

0x0883,	// (0x0004285f) main_idle_act4_pane_ParamLimits

0x0883,	// (0x0004285f) main_idle_act4_pane

0x8de8,	// (0x0004adc4) popup_tb_extension_window_ParamLimits

0xd356,	// (0x0004f332) tb_ext_find_pane_ParamLimits

0xd356,	// (0x0004f332) tb_ext_find_pane

0xd4ba,	// (0x0004f496) ai_gene_pane_1_cp1

0x7154,	// (0x00049130) ai_gene_pane_2_cp1

0xd4c2,	// (0x0004f49e) list_single_idle_plugin_calendar_pane

0xd4cb,	// (0x0004f4a7) list_single_idle_plugin_notification_pane

0xd4d4,	// (0x0004f4b0) list_single_idle_plugin_player_pane

0xd4dd,	// (0x0004f4b9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd4dd,	// (0x0004f4b9) list_single_idle_plugin_shortcut_pane

0xd4ff,	// (0x0004f4db) main_idle_act4_pane_t1

0xd511,	// (0x0004f4ed) main_idle_act4_pane_t2

0x0001,

0xfd42,	// (0x00051d1e) main_idle_act4_pane_t

0xd523,	// (0x0004f4ff) middle_sk_idle_act4_pane_ParamLimits

0xd523,	// (0x0004f4ff) middle_sk_idle_act4_pane

0xd539,	// (0x0004f515) popup_clock_digital_analogue_window_cp2

0xd553,	// (0x0004f52f) shortcut_wheel_idle_act4_pane_ParamLimits

0xd553,	// (0x0004f52f) shortcut_wheel_idle_act4_pane

0xba7a,	// (0x0004da56) shortcut_wheel_idle_act4_pane_g1

0xba7a,	// (0x0004da56) shortcut_wheel_idle_act4_pane_g2

0xba7a,	// (0x0004da56) shortcut_wheel_idle_act4_pane_g3

0xba7a,	// (0x0004da56) shortcut_wheel_idle_act4_pane_g4

0xba7a,	// (0x0004da56) shortcut_wheel_idle_act4_pane_g5

0xd567,	// (0x0004f543) shortcut_wheel_idle_act4_pane_g6

0xd56f,	// (0x0004f54b) shortcut_wheel_idle_act4_pane_g7

0xd577,	// (0x0004f553) shortcut_wheel_idle_act4_pane_g8

0xd57f,	// (0x0004f55b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd47,	// (0x00051d23) shortcut_wheel_idle_act4_pane_g

0xbcf5,	// (0x0004dcd1) middle_sk_idle_act4_pane_g1_ParamLimits

0xbcf5,	// (0x0004dcd1) middle_sk_idle_act4_pane_g1

0xd5e3,	// (0x0004f5bf) middle_sk_idle_act4_pane_g2_ParamLimits

0xd5e3,	// (0x0004f5bf) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6a,	// (0x00051d46) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6a,	// (0x00051d46) middle_sk_idle_act4_pane_g

0xd5ef,	// (0x0004f5cb) middle_sk_idle_act4_pane_t1_ParamLimits

0xd5ef,	// (0x0004f5cb) middle_sk_idle_act4_pane_t1

0xd60c,	// (0x0004f5e8) grid_ai_shortcut_pane_ParamLimits

0xd60c,	// (0x0004f5e8) grid_ai_shortcut_pane

0xd625,	// (0x0004f601) list_highlight_pane_cp16_ParamLimits

0xd625,	// (0x0004f601) list_highlight_pane_cp16

0xd632,	// (0x0004f60e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd632,	// (0x0004f60e) list_single_idle_plugin_shortcut_pane_g1

0xd63e,	// (0x0004f61a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd63e,	// (0x0004f61a) list_single_idle_plugin_shortcut_pane_g2

0xd658,	// (0x0004f634) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd658,	// (0x0004f634) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6f,	// (0x00051d4b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6f,	// (0x00051d4b) list_single_idle_plugin_shortcut_pane_g

0xd66b,	// (0x0004f647) cell_ai_shortcut_pane_ParamLimits

0xd66b,	// (0x0004f647) cell_ai_shortcut_pane

0xd68e,	// (0x0004f66a) cell_ai_shortcut_pane_g1_ParamLimits

0xd68e,	// (0x0004f66a) cell_ai_shortcut_pane_g1

0xd4ba,	// (0x0004f496) ai_gene_pane_1_cp2

0xd6b0,	// (0x0004f68c) ai_gene_pane_2_cp2

0xd6b8,	// (0x0004f694) list_highlight_pane_cp15

0xd6c1,	// (0x0004f69d) list_single_idle_plugin_calendar_pane_g1

0xd6b8,	// (0x0004f694) list_highlight_pane_cp17

0xd6c9,	// (0x0004f6a5) list_single_idle_plugin_calendar_pane_g1_copy1

0xd6d1,	// (0x0004f6ad) list_single_idle_plugin_player_pane_g1

0xae0c,	// (0x0004cde8) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd76,	// (0x00051d52) list_single_idle_plugin_player_pane_g

0xd6d9,	// (0x0004f6b5) list_single_idle_plugin_player_pane_t1

0xd6e7,	// (0x0004f6c3) list_single_idle_plugin_player_pane_t2

0xd6f5,	// (0x0004f6d1) list_single_idle_plugin_player_pane_t3

0xd703,	// (0x0004f6df) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7b,	// (0x00051d57) list_single_idle_plugin_player_pane_t

0xd711,	// (0x0004f6ed) wait_bar_pane_cp15

0xd719,	// (0x0004f6f5) grid_ai_notification_pane

0xae0c,	// (0x0004cde8) list_single_idle_plugin_notification_pane_g1

0xd722,	// (0x0004f6fe) cell_ai_notification_pane_ParamLimits

0xd722,	// (0x0004f6fe) cell_ai_notification_pane

0xd72f,	// (0x0004f70b) cell_ai_notification_pane_g1

0xd737,	// (0x0004f713) cell_ai_notification_pane_t1

0xd745,	// (0x0004f721) tb_ext_find_button_pane

0xd74d,	// (0x0004f729) tb_ext_find_pane_g1

0xd755,	// (0x0004f731) tb_ext_find_pane_t1

0x2300,	// (0x000442dc) tb_ext_find_button_pane_g1

0xd763,	// (0x0004f73f) tb_ext_find_button_pane_g2

0x0001,

0xfd84,	// (0x00051d60) tb_ext_find_button_pane_g

0xd4ff,	// (0x0004f4db) main_idle_act4_pane_t1_ParamLimits

0xd511,	// (0x0004f4ed) main_idle_act4_pane_t2_ParamLimits

0xfd42,	// (0x00051d1e) main_idle_act4_pane_t_ParamLimits

0xd539,	// (0x0004f515) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd547,	// (0x0004f523) sat_plugin_idle_act4_pane_ParamLimits

0xd547,	// (0x0004f523) sat_plugin_idle_act4_pane

0xd76c,	// (0x0004f748) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd76c,	// (0x0004f748) sat_plugin_idle_act4_pane_t1

0xd77f,	// (0x0004f75b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd77f,	// (0x0004f75b) sat_plugin_idle_act4_pane_t2

0xd792,	// (0x0004f76e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd792,	// (0x0004f76e) sat_plugin_idle_act4_pane_t3

0xd7a5,	// (0x0004f781) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd7a5,	// (0x0004f781) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd89,	// (0x00051d65) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd89,	// (0x00051d65) sat_plugin_idle_act4_pane_t

0x6357,	// (0x00048333) popup_battery_window_ParamLimits

0x6357,	// (0x00048333) popup_battery_window

0x0626,	// (0x00042602) bg_popup_sub_pane_cp25_ParamLimits

0x0626,	// (0x00042602) bg_popup_sub_pane_cp25

0xd7b8,	// (0x0004f794) popup_battery_window_g1_ParamLimits

0xd7b8,	// (0x0004f794) popup_battery_window_g1

0xd7c4,	// (0x0004f7a0) popup_battery_window_t1_ParamLimits

0xd7c4,	// (0x0004f7a0) popup_battery_window_t1

0xd909,	// (0x0004f8e5) popup_battery_window_t2_ParamLimits

0xd909,	// (0x0004f8e5) popup_battery_window_t2

0x0001,

0xfd92,	// (0x00051d6e) popup_battery_window_t_ParamLimits

0xfd92,	// (0x00051d6e) popup_battery_window_t

0x705b,	// (0x00049037) midp_canvas_pane_ParamLimits

0x70bd,	// (0x00049099) midp_keypad_pane_ParamLimits

0x70bd,	// (0x00049099) midp_keypad_pane

0x8910,	// (0x0004a8ec) main_midp_pane_ParamLimits

0xb579,	// (0x0004d555) signal_pane_g2_cp_ParamLimits

0xd926,	// (0x0004f902) aid_size_cell_midp_keypad_ParamLimits

0xd926,	// (0x0004f902) aid_size_cell_midp_keypad

0xd940,	// (0x0004f91c) midp_keyp_game_grid_pane_ParamLimits

0xd940,	// (0x0004f91c) midp_keyp_game_grid_pane

0xd960,	// (0x0004f93c) midp_keyp_rocker_pane_ParamLimits

0xd960,	// (0x0004f93c) midp_keyp_rocker_pane

0xd98b,	// (0x0004f967) midp_keyp_sk_left_pane_ParamLimits

0xd98b,	// (0x0004f967) midp_keyp_sk_left_pane

0xd9e5,	// (0x0004f9c1) midp_keyp_sk_right_pane_ParamLimits

0xd9e5,	// (0x0004f9c1) midp_keyp_sk_right_pane

0xd7de,	// (0x0004f7ba) bg_button_pane_cp03

0xda3f,	// (0x0004fa1b) midp_keyp_sk_left_pane_g1

0xd7de,	// (0x0004f7ba) bg_button_pane_cp04

0xda3f,	// (0x0004fa1b) midp_keyp_sk_right_pane_g1

0xba7a,	// (0x0004da56) midp_keyp_rocker_pane_g1

0xda48,	// (0x0004fa24) keyp_game_cell_pane_ParamLimits

0xda48,	// (0x0004fa24) keyp_game_cell_pane

0xd7de,	// (0x0004f7ba) bg_button_pane_cp02

0xda5b,	// (0x0004fa37) keyp_game_cell_pane_g1

0x63a1,	// (0x0004837d) popup_fep_vkb2_window_ParamLimits

0x63a1,	// (0x0004837d) popup_fep_vkb2_window

0x7f89,	// (0x00049f65) aid_size_cell_vkb2_ParamLimits

0x7f89,	// (0x00049f65) aid_size_cell_vkb2

0x7fdd,	// (0x00049fb9) popup_fep_vkb2_window_g1_ParamLimits

0x7fdd,	// (0x00049fb9) popup_fep_vkb2_window_g1

0x8025,	// (0x0004a001) vkb2_area_bottom_pane_ParamLimits

0x8025,	// (0x0004a001) vkb2_area_bottom_pane

0x8079,	// (0x0004a055) vkb2_area_keypad_pane_ParamLimits

0x8079,	// (0x0004a055) vkb2_area_keypad_pane

0x80bf,	// (0x0004a09b) vkb2_area_top_pane_ParamLimits

0x80bf,	// (0x0004a09b) vkb2_area_top_pane

0x8139,	// (0x0004a115) vkb2_top_entry_pane_ParamLimits

0x8139,	// (0x0004a115) vkb2_top_entry_pane

0x8163,	// (0x0004a13f) vkb2_top_grid_left_pane_ParamLimits

0x8163,	// (0x0004a13f) vkb2_top_grid_left_pane

0x8181,	// (0x0004a15d) vkb2_top_grid_right_pane_ParamLimits

0x8181,	// (0x0004a15d) vkb2_top_grid_right_pane

0x819f,	// (0x0004a17b) vkb2_cell_keypad_pane_ParamLimits

0x819f,	// (0x0004a17b) vkb2_cell_keypad_pane

0x8270,	// (0x0004a24c) vkb2_area_bottom_grid_pane_ParamLimits

0x8270,	// (0x0004a24c) vkb2_area_bottom_grid_pane

0x8296,	// (0x0004a272) vkb2_area_bottom_pane_g1_ParamLimits

0x8296,	// (0x0004a272) vkb2_area_bottom_pane_g1

0x82ba,	// (0x0004a296) vkb2_area_bottom_pane_g2_ParamLimits

0x82ba,	// (0x0004a296) vkb2_area_bottom_pane_g2

0x82e8,	// (0x0004a2c4) vkb2_area_bottom_pane_g3_ParamLimits

0x82e8,	// (0x0004a2c4) vkb2_area_bottom_pane_g3

0x0002,

0xfd97,	// (0x00051d73) vkb2_area_bottom_pane_g_ParamLimits

0xfd97,	// (0x00051d73) vkb2_area_bottom_pane_g

0x8349,	// (0x0004a325) vkb2_top_cell_left_pane_ParamLimits

0x8349,	// (0x0004a325) vkb2_top_cell_left_pane

0xda6c,	// (0x0004fa48) vkb2_top_entry_pane_g1_ParamLimits

0xda6c,	// (0x0004fa48) vkb2_top_entry_pane_g1

0xda7a,	// (0x0004fa56) vkb2_top_entry_pane_t1_ParamLimits

0xda7a,	// (0x0004fa56) vkb2_top_entry_pane_t1

0xdaac,	// (0x0004fa88) vkb2_top_entry_pane_t2_ParamLimits

0xdaac,	// (0x0004fa88) vkb2_top_entry_pane_t2

0xdade,	// (0x0004faba) vkb2_top_entry_pane_t3_ParamLimits

0xdade,	// (0x0004faba) vkb2_top_entry_pane_t3

0x0002,

0xfd9e,	// (0x00051d7a) vkb2_top_entry_pane_t_ParamLimits

0xfd9e,	// (0x00051d7a) vkb2_top_entry_pane_t

0x8396,	// (0x0004a372) vkb2_top_grid_right_pane_g1_ParamLimits

0x8396,	// (0x0004a372) vkb2_top_grid_right_pane_g1

0x83ac,	// (0x0004a388) vkb2_top_grid_right_pane_g2_ParamLimits

0x83ac,	// (0x0004a388) vkb2_top_grid_right_pane_g2

0x83c4,	// (0x0004a3a0) vkb2_top_grid_right_pane_g3_ParamLimits

0x83c4,	// (0x0004a3a0) vkb2_top_grid_right_pane_g3

0x83dc,	// (0x0004a3b8) vkb2_top_grid_right_pane_g4_ParamLimits

0x83dc,	// (0x0004a3b8) vkb2_top_grid_right_pane_g4

0x0003,

0xfda5,	// (0x00051d81) vkb2_top_grid_right_pane_g_ParamLimits

0xfda5,	// (0x00051d81) vkb2_top_grid_right_pane_g

0x83f2,	// (0x0004a3ce) vkb2_top_cell_left_pane_g1

0x8409,	// (0x0004a3e5) vkb2_cell_keypad_pane_g1_ParamLimits

0x8409,	// (0x0004a3e5) vkb2_cell_keypad_pane_g1

0xdb02,	// (0x0004fade) vkb2_cell_keypad_pane_t1_ParamLimits

0xdb02,	// (0x0004fade) vkb2_cell_keypad_pane_t1

0x8417,	// (0x0004a3f3) vkb2_cell_bottom_grid_pane_ParamLimits

0x8417,	// (0x0004a3f3) vkb2_cell_bottom_grid_pane

0x8450,	// (0x0004a42c) vkb2_cell_bottom_grid_pane_g1

0xd587,	// (0x0004f563) aid_call2_pane_cp02

0xd58f,	// (0x0004f56b) aid_call_pane_cp02

0xd597,	// (0x0004f573) clock_digital_number_pane_cp10

0xd59f,	// (0x0004f57b) clock_digital_number_pane_cp11

0xd5a7,	// (0x0004f583) clock_digital_number_pane_cp12

0xd5af,	// (0x0004f58b) clock_digital_number_pane_cp13

0xd5b7,	// (0x0004f593) clock_digital_separator_pane_cp10

0x2300,	// (0x000442dc) popup_clock_digital_analogue_window_cp2_g1

0x2300,	// (0x000442dc) popup_clock_digital_analogue_window_cp2_g2

0xd5bf,	// (0x0004f59b) popup_clock_digital_analogue_window_cp2_g3

0x2300,	// (0x000442dc) popup_clock_digital_analogue_window_cp2_g4

0xd5bf,	// (0x0004f59b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5a,	// (0x00051d36) popup_clock_digital_analogue_window_cp2_g

0xd5c7,	// (0x0004f5a3) popup_clock_digital_analogue_window_cp2_t1

0xd5d5,	// (0x0004f5b1) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd65,	// (0x00051d41) popup_clock_digital_analogue_window_cp2_t

0xba7a,	// (0x0004da56) clock_digital_number_pane_cp10_g1

0xba7a,	// (0x0004da56) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4d,	// (0x00051b29) clock_digital_number_pane_cp10_g

0xba7a,	// (0x0004da56) clock_digital_separator_pane_cp10_g1

0xba7a,	// (0x0004da56) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4d,	// (0x00051b29) clock_digital_separator_pane_cp10_g

0xd402,	// (0x0004f3de) uniindi_top_pane_g3

0xd413,	// (0x0004f3ef) uniindi_top_pane_g4

0x822a,	// (0x0004a206) vkb2_row_keypad_pane_ParamLimits

0x822a,	// (0x0004a206) vkb2_row_keypad_pane

0x846c,	// (0x0004a448) vkb2_cell_t_keypad_pane_ParamLimits

0x846c,	// (0x0004a448) vkb2_cell_t_keypad_pane

0x847c,	// (0x0004a458) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x847c,	// (0x0004a458) vkb2_cell_t_keypad_pane_cp08

0x8491,	// (0x0004a46d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8491,	// (0x0004a46d) vkb2_cell_t_keypad_pane_cp09

0x84a5,	// (0x0004a481) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x84a5,	// (0x0004a481) vkb2_cell_t_keypad_pane_cp01

0x84b6,	// (0x0004a492) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x84b6,	// (0x0004a492) vkb2_cell_t_keypad_pane_cp02

0x84c7,	// (0x0004a4a3) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x84c7,	// (0x0004a4a3) vkb2_cell_t_keypad_pane_cp03

0x84d8,	// (0x0004a4b4) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x84d8,	// (0x0004a4b4) vkb2_cell_t_keypad_pane_cp04

0x84e9,	// (0x0004a4c5) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x84e9,	// (0x0004a4c5) vkb2_cell_t_keypad_pane_cp05

0x84fa,	// (0x0004a4d6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x84fa,	// (0x0004a4d6) vkb2_cell_t_keypad_pane_cp06

0x850d,	// (0x0004a4e9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x850d,	// (0x0004a4e9) vkb2_cell_t_keypad_pane_cp07

0x8522,	// (0x0004a4fe) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8522,	// (0x0004a4fe) vkb2_cell_t_keypad_pane_cp10

0xbcf5,	// (0x0004dcd1) vkb2_cell_t_keypad_pane_g1

0xdb19,	// (0x0004faf5) vkb2_cell_t_keypad_pane_t1

0xd7de,	// (0x0004f7ba) popup_grid_graphic2_window

0xdb2b,	// (0x0004fb07) aid_size_cell_graphic2_ParamLimits

0xdb2b,	// (0x0004fb07) aid_size_cell_graphic2

0xdb63,	// (0x0004fb3f) bg_popup_window_pane_cp21_ParamLimits

0xdb63,	// (0x0004fb3f) bg_popup_window_pane_cp21

0xdb71,	// (0x0004fb4d) graphic2_pages_pane_ParamLimits

0xdb71,	// (0x0004fb4d) graphic2_pages_pane

0xdbb7,	// (0x0004fb93) grid_graphic2_control_pane_ParamLimits

0xdbb7,	// (0x0004fb93) grid_graphic2_control_pane

0xdbf5,	// (0x0004fbd1) grid_graphic2_pane_ParamLimits

0xdbf5,	// (0x0004fbd1) grid_graphic2_pane

0xdc6b,	// (0x0004fc47) cell_graphic2_pane

0xd7de,	// (0x0004f7ba) main_comp_mode_pane

0xcc73,	// (0x0004ec4f) list_ai3_gene_pane_ParamLimits

0xd03b,	// (0x0004f017) bg_popup_window_pane_cp19_ParamLimits

0xd047,	// (0x0004f023) bg_touch_area_indi_pane_ParamLimits

0xd047,	// (0x0004f023) bg_touch_area_indi_pane

0xd05d,	// (0x0004f039) bg_touch_area_indi_pane_cp01_ParamLimits

0xd05d,	// (0x0004f039) bg_touch_area_indi_pane_cp01

0xd075,	// (0x0004f051) bg_touch_area_indi_pane_cp02_ParamLimits

0xd075,	// (0x0004f051) bg_touch_area_indi_pane_cp02

0xd08f,	// (0x0004f06b) bg_touch_area_indi_pane_cp03_ParamLimits

0xd08f,	// (0x0004f06b) bg_touch_area_indi_pane_cp03

0xd0a9,	// (0x0004f085) popup_slider_window_g1_ParamLimits

0xd0c5,	// (0x0004f0a1) popup_slider_window_g2_ParamLimits

0xd0e1,	// (0x0004f0bd) popup_slider_window_g3_ParamLimits

0xfcef,	// (0x00051ccb) popup_slider_window_g_ParamLimits

0xd13d,	// (0x0004f119) popup_slider_window_t1_ParamLimits

0xd1b1,	// (0x0004f18d) small_volume_slider_vertical_pane_ParamLimits

0xdc6b,	// (0x0004fc47) cell_graphic2_pane_ParamLimits

0xdcbd,	// (0x0004fc99) bg_button_pane_cp10_ParamLimits

0xdcbd,	// (0x0004fc99) bg_button_pane_cp10

0xdcd2,	// (0x0004fcae) bg_button_pane_cp11_ParamLimits

0xdcd2,	// (0x0004fcae) bg_button_pane_cp11

0xdce7,	// (0x0004fcc3) graphic2_pages_pane_g1_ParamLimits

0xdce7,	// (0x0004fcc3) graphic2_pages_pane_g1

0xdd02,	// (0x0004fcde) graphic2_pages_pane_g2_ParamLimits

0xdd02,	// (0x0004fcde) graphic2_pages_pane_g2

0x0001,

0xfdb3,	// (0x00051d8f) graphic2_pages_pane_g_ParamLimits

0xfdb3,	// (0x00051d8f) graphic2_pages_pane_g

0xdd1a,	// (0x0004fcf6) graphic2_pages_pane_t1_ParamLimits

0xdd1a,	// (0x0004fcf6) graphic2_pages_pane_t1

0xdd30,	// (0x0004fd0c) cell_graphic2_control_pane_ParamLimits

0xdd30,	// (0x0004fd0c) cell_graphic2_control_pane

0xdd53,	// (0x0004fd2f) cell_graphic2_pane_g1_ParamLimits

0xdd53,	// (0x0004fd2f) cell_graphic2_pane_g1

0xdd60,	// (0x0004fd3c) cell_graphic2_pane_g2_ParamLimits

0xdd60,	// (0x0004fd3c) cell_graphic2_pane_g2

0xdd6d,	// (0x0004fd49) cell_graphic2_pane_g3_ParamLimits

0xdd6d,	// (0x0004fd49) cell_graphic2_pane_g3

0xdd7a,	// (0x0004fd56) cell_graphic2_pane_g4_ParamLimits

0xdd7a,	// (0x0004fd56) cell_graphic2_pane_g4

0xdd87,	// (0x0004fd63) cell_graphic2_pane_g5_ParamLimits

0xdd87,	// (0x0004fd63) cell_graphic2_pane_g5

0x0004,

0xfdb8,	// (0x00051d94) cell_graphic2_pane_g_ParamLimits

0xfdb8,	// (0x00051d94) cell_graphic2_pane_g

0xdda2,	// (0x0004fd7e) cell_graphic2_pane_t1_ParamLimits

0xdda2,	// (0x0004fd7e) cell_graphic2_pane_t1

0x94c5,	// (0x0004b4a1) grid_highlight_pane_cp11_ParamLimits

0x94c5,	// (0x0004b4a1) grid_highlight_pane_cp11

0x0626,	// (0x00042602) bg_button_pane_cp05

0xddcb,	// (0x0004fda7) cell_graphic2_control_pane_g1

0xba7a,	// (0x0004da56) bg_touch_area_indi_pane_g1

0xddf3,	// (0x0004fdcf) aid_cmod_rocker_key_size

0xddfd,	// (0x0004fdd9) aid_cmode_itu_key_size

0xde07,	// (0x0004fde3) main_cmode_video_pane

0xde11,	// (0x0004fded) main_comp_mode_itu_pane

0xde1d,	// (0x0004fdf9) main_comp_mode_rocker_pane

0xde29,	// (0x0004fe05) cell_cmode_rocker_pane_ParamLimits

0xde29,	// (0x0004fe05) cell_cmode_rocker_pane

0xde3d,	// (0x0004fe19) cell_cmode_itu_pane_ParamLimits

0xde3d,	// (0x0004fe19) cell_cmode_itu_pane

0x0b08,	// (0x00042ae4) bg_button_pane_cp06_ParamLimits

0x0b08,	// (0x00042ae4) bg_button_pane_cp06

0xbcf5,	// (0x0004dcd1) cell_cmode_rocker_pane_g1_ParamLimits

0xbcf5,	// (0x0004dcd1) cell_cmode_rocker_pane_g1

0xd258,	// (0x0004f234) cell_cmode_rocker_pane_g2_ParamLimits

0xd258,	// (0x0004f234) cell_cmode_rocker_pane_g2

0x0001,

0xfdc8,	// (0x00051da4) cell_cmode_rocker_pane_g_ParamLimits

0xfdc8,	// (0x00051da4) cell_cmode_rocker_pane_g

0xd7de,	// (0x0004f7ba) bg_button_pane_cp07

0xde54,	// (0x0004fe30) cell_cmode_itu_pane_g1

0xde5d,	// (0x0004fe39) cell_cmode_itu_pane_t1

0xde6b,	// (0x0004fe47) cell_cmode_itu_pane_t2

0x0001,

0xfdcd,	// (0x00051da9) cell_cmode_itu_pane_t

0xd486,	// (0x0004f462) aid_touch_ctrl_left

0xd48e,	// (0x0004f46a) aid_touch_ctrl_right

0xd7de,	// (0x0004f7ba) compa_mode_pane

0xde79,	// (0x0004fe55) aid_cmod_rocker_key_size_cp

0xde83,	// (0x0004fe5f) aid_cmode_itu_key_size_cp

0xde8d,	// (0x0004fe69) compa_mode_pane_g1

0xde95,	// (0x0004fe71) compa_mode_pane_g2

0xde9d,	// (0x0004fe79) compa_mode_pane_g3

0x0002,

0xfdd2,	// (0x00051dae) compa_mode_pane_g

0xdea5,	// (0x0004fe81) main_comp_mode_itu_pane_cp

0xdead,	// (0x0004fe89) main_comp_mode_rocker_pane_cp

0xdeb5,	// (0x0004fe91) cell_cmode_itu_pane_cp_ParamLimits

0xdeb5,	// (0x0004fe91) cell_cmode_itu_pane_cp

0xdeca,	// (0x0004fea6) cell_cmode_rocker_pane_cp_ParamLimits

0xdeca,	// (0x0004fea6) cell_cmode_rocker_pane_cp

0x0b08,	// (0x00042ae4) bg_button_pane_cp06_cp_ParamLimits

0x0b08,	// (0x00042ae4) bg_button_pane_cp06_cp

0xbcf5,	// (0x0004dcd1) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbcf5,	// (0x0004dcd1) cell_cmode_rocker_pane_g1_cp

0xba7a,	// (0x0004da56) cell_cmode_rocker_pane_g2_cp

0xd7de,	// (0x0004f7ba) bg_button_pane_cp07_cp

0xdedc,	// (0x0004feb8) cell_cmode_itu_pane_g1_cp

0xdee5,	// (0x0004fec1) cell_cmode_itu_pane_t1_cp

0xdee5,	// (0x0004fec1) cell_cmode_itu_pane_t2_cp

0xa98f,	// (0x0004c96b) settings_code_pane_cp2

0xd84c,	// (0x0004f828) bg_popup_window_pane_cp3_ParamLimits

0x0814,	// (0x000427f0) heading_pane_cp3_ParamLimits

0x0820,	// (0x000427fc) listscroll_popup_graphic_pane_ParamLimits

0x7a30,	// (0x00049a0c) fep_hwr_aid_pane_ParamLimits

0x7efe,	// (0x00049eda) aid_touch_sctrl_top_ParamLimits

0x7f0b,	// (0x00049ee7) sctrl_sk_top_pane_g1_ParamLimits

0xbcf5,	// (0x0004dcd1) sctrl_sk_top_pane_g2_ParamLimits

0xfd08,	// (0x00051ce4) sctrl_sk_top_pane_g_ParamLimits

0x7f18,	// (0x00049ef4) sctrl_sk_top_pane_t1_ParamLimits

0x7efe,	// (0x00049eda) aid_touch_sctrl_bottom_ParamLimits

0x7f18,	// (0x00049ef4) sctrl_sk_bottom_pane_t1_ParamLimits

0xd3cc,	// (0x0004f3a8) aid_area_touch_clock

0x8101,	// (0x0004a0dd) aid_vkb2_area_top_pane_cell_ParamLimits

0x8101,	// (0x0004a0dd) aid_vkb2_area_top_pane_cell

0x824c,	// (0x0004a228) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x824c,	// (0x0004a228) aid_vkb2_area_bottom_pane_cell

0xda64,	// (0x0004fa40) popup_char_count_window

0xdef3,	// (0x0004fecf) popup_char_count_window_g1

0xdefc,	// (0x0004fed8) popup_char_count_window_g2

0xdf05,	// (0x0004fee1) popup_char_count_window_g3

0x0002,

0xfdd9,	// (0x00051db5) popup_char_count_window_g

0xdf0e,	// (0x0004feea) popup_char_count_window_t1

0x7fbb,	// (0x00049f97) popup_fep_char_preview_window_ParamLimits

0x7fbb,	// (0x00049f97) popup_fep_char_preview_window

0x811f,	// (0x0004a0fb) vkb2_top_candi_pane_ParamLimits

0x811f,	// (0x0004a0fb) vkb2_top_candi_pane

0xdf1c,	// (0x0004fef8) cell_vkb2_top_candi_pane_ParamLimits

0xdf1c,	// (0x0004fef8) cell_vkb2_top_candi_pane

0x9aa1,	// (0x0004ba7d) bg_popup_fep_char_preview_window_ParamLimits

0x9aa1,	// (0x0004ba7d) bg_popup_fep_char_preview_window

0x8537,	// (0x0004a513) popup_fep_char_preview_window_t1_ParamLimits

0x8537,	// (0x0004a513) popup_fep_char_preview_window_t1

0xdf6d,	// (0x0004ff49) bg_popup_fep_char_preview_window_g1

0xdf75,	// (0x0004ff51) bg_popup_fep_char_preview_window_g2

0xdf7d,	// (0x0004ff59) bg_popup_fep_char_preview_window_g3

0xdf85,	// (0x0004ff61) bg_popup_fep_char_preview_window_g4

0xdf8d,	// (0x0004ff69) bg_popup_fep_char_preview_window_g5

0x8571,	// (0x0004a54d) bg_popup_fep_char_preview_window_g6

0xdf95,	// (0x0004ff71) bg_popup_fep_char_preview_window_g7

0xdf9d,	// (0x0004ff79) bg_popup_fep_char_preview_window_g8

0xdfa5,	// (0x0004ff81) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde0,	// (0x00051dbc) bg_popup_fep_char_preview_window_g

0xbcf5,	// (0x0004dcd1) cell_vkb2_top_candi_pane_g1_ParamLimits

0xbcf5,	// (0x0004dcd1) cell_vkb2_top_candi_pane_g1

0xc036,	// (0x0004e012) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc036,	// (0x0004e012) cell_vkb2_top_candi_pane_g2

0xc057,	// (0x0004e033) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc057,	// (0x0004e033) cell_vkb2_top_candi_pane_g3

0x8579,	// (0x0004a555) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8579,	// (0x0004a555) cell_vkb2_top_candi_pane_g4

0xdfad,	// (0x0004ff89) cell_vkb2_top_candi_pane_g5_ParamLimits

0xdfad,	// (0x0004ff89) cell_vkb2_top_candi_pane_g5

0xd258,	// (0x0004f234) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd258,	// (0x0004f234) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf3,	// (0x00051dcf) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf3,	// (0x00051dcf) cell_vkb2_top_candi_pane_g

0x859a,	// (0x0004a576) cell_vkb2_top_candi_pane_t1

0x7829,	// (0x00049805) aid_size_touch_slider_mark_ParamLimits

0x7829,	// (0x00049805) aid_size_touch_slider_mark

0xdba7,	// (0x0004fb83) grid_graphic2_catg_pane_ParamLimits

0xdba7,	// (0x0004fb83) grid_graphic2_catg_pane

0xdc45,	// (0x0004fc21) popup_grid_graphic2_window_t1_ParamLimits

0xdc45,	// (0x0004fc21) popup_grid_graphic2_window_t1

0xdc57,	// (0x0004fc33) popup_grid_graphic2_window_t2_ParamLimits

0xdc57,	// (0x0004fc33) popup_grid_graphic2_window_t2

0x0001,

0xfdae,	// (0x00051d8a) popup_grid_graphic2_window_t_ParamLimits

0xfdae,	// (0x00051d8a) popup_grid_graphic2_window_t

0x0626,	// (0x00042602) bg_button_pane_cp05_ParamLimits

0xddcb,	// (0x0004fda7) cell_graphic2_control_pane_g1_ParamLimits

0xdfce,	// (0x0004ffaa) cell_graphic2_catg_pane_ParamLimits

0xdfce,	// (0x0004ffaa) cell_graphic2_catg_pane

0xd7de,	// (0x0004f7ba) bg_button_pane_cp12

0xdfe0,	// (0x0004ffbc) cell_graphic2_catg_pane_g1

0xd398,	// (0x0004f374) cell_tb_ext_pane_t1_ParamLimits

0x8369,	// (0x0004a345) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8369,	// (0x0004a345) vkb2_top_cell_right_narrow_pane

0x8381,	// (0x0004a35d) vkb2_top_cell_right_wide_pane_ParamLimits

0x8381,	// (0x0004a35d) vkb2_top_cell_right_wide_pane

0xf546,	// (0x00051522) bg_vkb2_func_pane_ParamLimits

0xf546,	// (0x00051522) bg_vkb2_func_pane

0x83f2,	// (0x0004a3ce) vkb2_top_cell_left_pane_g1_ParamLimits

0xf546,	// (0x00051522) bg_vkb2_fuc_pane_cp03_ParamLimits

0xf546,	// (0x00051522) bg_vkb2_fuc_pane_cp03

0x8450,	// (0x0004a42c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9459,	// (0x0004b435) bg_vkb2_func_pane_g1

0x9461,	// (0x0004b43d) bg_vkb2_func_pane_g2

0x9471,	// (0x0004b44d) bg_vkb2_func_pane_g3

0x9469,	// (0x0004b445) bg_vkb2_func_pane_g4

0x9479,	// (0x0004b455) bg_vkb2_func_pane_g5

0x9481,	// (0x0004b45d) bg_vkb2_func_pane_g6

0x9489,	// (0x0004b465) bg_vkb2_func_pane_g7

0x9491,	// (0x0004b46d) bg_vkb2_func_pane_g8

0x9451,	// (0x0004b42d) bg_vkb2_func_pane_g9

0x0008,

0xfe00,	// (0x00051ddc) bg_vkb2_func_pane_g

0xf546,	// (0x00051522) bg_vkb2_fuc_pane_cp01_ParamLimits

0xf546,	// (0x00051522) bg_vkb2_fuc_pane_cp01

0x83f2,	// (0x0004a3ce) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x83f2,	// (0x0004a3ce) vkb2_top_cell_right_wide_pane_g1

0xf546,	// (0x00051522) bg_vkb2_fuc_pane_cp02_ParamLimits

0xf546,	// (0x00051522) bg_vkb2_fuc_pane_cp02

0x8450,	// (0x0004a42c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8450,	// (0x0004a42c) vkb2_top_cell_right_narrow_pane_g1

0xcfb9,	// (0x0004ef95) aid_touch_area_decrease_ParamLimits

0xcfb9,	// (0x0004ef95) aid_touch_area_decrease

0xcfdd,	// (0x0004efb9) aid_touch_area_increase_ParamLimits

0xcfdd,	// (0x0004efb9) aid_touch_area_increase

0xcfe9,	// (0x0004efc5) aid_touch_area_mute_ParamLimits

0xcfe9,	// (0x0004efc5) aid_touch_area_mute

0xd00d,	// (0x0004efe9) aid_touch_area_slider_ParamLimits

0xd00d,	// (0x0004efe9) aid_touch_area_slider

0xd0fd,	// (0x0004f0d9) popup_slider_window_g4_ParamLimits

0xd0fd,	// (0x0004f0d9) popup_slider_window_g4

0xd109,	// (0x0004f0e5) popup_slider_window_g5_ParamLimits

0xd109,	// (0x0004f0e5) popup_slider_window_g5

0xd12b,	// (0x0004f107) popup_slider_window_g6_ParamLimits

0xd12b,	// (0x0004f107) popup_slider_window_g6

0xd16b,	// (0x0004f147) popup_slider_window_t2_ParamLimits

0xd16b,	// (0x0004f147) popup_slider_window_t2

0x0001,

0xfcfc,	// (0x00051cd8) popup_slider_window_t_ParamLimits

0xfcfc,	// (0x00051cd8) popup_slider_window_t

0xd183,	// (0x0004f15f) slider_pane_ParamLimits

0xd183,	// (0x0004f15f) slider_pane

0xdfe9,	// (0x0004ffc5) slider_pane_g1_ParamLimits

0xdfe9,	// (0x0004ffc5) slider_pane_g1

0xdffd,	// (0x0004ffd9) slider_pane_g2_ParamLimits

0xdffd,	// (0x0004ffd9) slider_pane_g2

0xe013,	// (0x0004ffef) slider_pane_g3_ParamLimits

0xe013,	// (0x0004ffef) slider_pane_g3

0x0003,

0xfe13,	// (0x00051def) slider_pane_g_ParamLimits

0xfe13,	// (0x00051def) slider_pane_g

0x8e4a,	// (0x0004ae26) popup_tb_float_extension_window_ParamLimits

0x8e4a,	// (0x0004ae26) popup_tb_float_extension_window

0xe03f,	// (0x0005001b) aid_size_cell_tb_float_ext

0xd7de,	// (0x0004f7ba) bg_popup_sub_window_cp28

0xe04b,	// (0x00050027) grid_tb_float_ext_pane

0xe057,	// (0x00050033) cell_tb_float_ext_pane_ParamLimits

0xe057,	// (0x00050033) cell_tb_float_ext_pane

0xe073,	// (0x0005004f) cell_tb_float_ext_pane_g1

0xe07c,	// (0x00050058) grid_highlight_pane_cp12

0x7b69,	// (0x00049b45) cell_last_hwr_side_pane_ParamLimits

0x7b69,	// (0x00049b45) cell_last_hwr_side_pane

0xba7a,	// (0x0004da56) cell_last_hwr_side_pane_g1

0xe085,	// (0x00050061) cell_last_hwr_side_pane_g2

0x0001,

0xfe1c,	// (0x00051df8) cell_last_hwr_side_pane_g

0x8318,	// (0x0004a2f4) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8318,	// (0x0004a2f4) vkb2_area_bottom_space_btn_pane

0xbcf5,	// (0x0004dcd1) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdb19,	// (0x0004faf5) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x859a,	// (0x0004a576) cell_vkb2_top_candi_pane_t1_ParamLimits

0x85b8,	// (0x0004a594) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x85b8,	// (0x0004a594) vkb2_area_bottom_space_btn_pane_g1

0x85f2,	// (0x0004a5ce) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x85f2,	// (0x0004a5ce) vkb2_area_bottom_space_btn_pane_g2

0x8628,	// (0x0004a604) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8628,	// (0x0004a604) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe21,	// (0x00051dfd) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe21,	// (0x00051dfd) vkb2_area_bottom_space_btn_pane_g

0x7ad9,	// (0x00049ab5) cel_fep_hwr_func_pane_ParamLimits

0x7ad9,	// (0x00049ab5) cel_fep_hwr_func_pane

0x7b15,	// (0x00049af1) cell_hwr_side_button_pane_ParamLimits

0x7b15,	// (0x00049af1) cell_hwr_side_button_pane

0xd3cc,	// (0x0004f3a8) aid_area_touch_clock_ParamLimits

0x0626,	// (0x00042602) bg_uniindi_top_pane_ParamLimits

0xd3e0,	// (0x0004f3bc) uniindi_top_pane_g1_ParamLimits

0xd3f6,	// (0x0004f3d2) uniindi_top_pane_g2_ParamLimits

0xd402,	// (0x0004f3de) uniindi_top_pane_g3_ParamLimits

0xd413,	// (0x0004f3ef) uniindi_top_pane_g4_ParamLimits

0xfd34,	// (0x00051d10) uniindi_top_pane_g_ParamLimits

0xd420,	// (0x0004f3fc) uniindi_top_pane_t1_ParamLimits

0x0626,	// (0x00042602) bg_vkb2_func_pane_cp01_ParamLimits

0x0626,	// (0x00042602) bg_vkb2_func_pane_cp01

0xe08e,	// (0x0005006a) cel_fep_hwr_func_pane_g1_ParamLimits

0xe08e,	// (0x0005006a) cel_fep_hwr_func_pane_g1

0x0626,	// (0x00042602) bg_vkb2_func_pane_cp02_ParamLimits

0x0626,	// (0x00042602) bg_vkb2_func_pane_cp02

0xe08e,	// (0x0005006a) cell_hwr_side_button_pane_g1_ParamLimits

0xe08e,	// (0x0005006a) cell_hwr_side_button_pane_g1

0x92d2,	// (0x0004b2ae) status_pane_g4_ParamLimits

0x92d2,	// (0x0004b2ae) status_pane_g4

0x92ec,	// (0x0004b2c8) status_pane_t1

0xb819,	// (0x0004d7f5) form2_midp_gauge_slider_cont_pane

0xb821,	// (0x0004d7fd) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb833,	// (0x0004d80f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb845,	// (0x0004d821) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb00,	// (0x00051adc) form2_midp_gauge_slider_pane_t_ParamLimits

0xb857,	// (0x0004d833) form2_midp_slider_pane_ParamLimits

0x7f7b,	// (0x00049f57) aid_size_cell_func_vkb2_ParamLimits

0x7f7b,	// (0x00049f57) aid_size_cell_func_vkb2

0xe02b,	// (0x00050007) slider_pane_g4_ParamLimits

0xe02b,	// (0x00050007) slider_pane_g4

0x8672,	// (0x0004a64e) form2_midp_gauge_slider_pane_t2_cp01

0x8680,	// (0x0004a65c) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8680,	// (0x0004a65c) form2_midp_gauge_slider_pane_t3_cp01

0x869d,	// (0x0004a679) form2_midp_slider_pane_cp01

0xd7de,	// (0x0004f7ba) navi_smil_pane

0xe0c7,	// (0x000500a3) navi_smil_pane_g1

0xe0cf,	// (0x000500ab) navi_smil_pane_t1

0xe09c,	// (0x00050078) form2_midp_slider_pane_g1

0xe0a5,	// (0x00050081) form2_midp_slider_pane_g2

0xe0ad,	// (0x00050089) form2_midp_slider_pane_g3

0xe09c,	// (0x00050078) form2_midp_slider_pane_g4

0xe0b5,	// (0x00050091) form2_midp_slider_pane_g5

0x0004,

0xfe2a,	// (0x00051e06) form2_midp_slider_pane_g

0x8662,	// (0x0004a63e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8662,	// (0x0004a63e) vkb2_area_bottom_space_btn_pane_g4

0x90e9,	// (0x0004b0c5) lc0_navi_pane_ParamLimits

0x90e9,	// (0x0004b0c5) lc0_navi_pane

0x9165,	// (0x0004b141) lc0_stat_indi_pane_ParamLimits

0x9165,	// (0x0004b141) lc0_stat_indi_pane

0x917c,	// (0x0004b158) ls0_title_pane_ParamLimits

0x917c,	// (0x0004b158) ls0_title_pane

0x0b08,	// (0x00042ae4) bg_popup_sub_pane_cp14_ParamLimits

0xd3b3,	// (0x0004f38f) list_uniindi_pane_ParamLimits

0xd3bf,	// (0x0004f39b) uniindi_top_pane_ParamLimits

0xd45e,	// (0x0004f43a) list_single_uniindi_pane_g1_ParamLimits

0xd471,	// (0x0004f44d) list_single_uniindi_pane_t1_ParamLimits

0x86a6,	// (0x0004a682) lc0_stat_clock_pane_ParamLimits

0x86a6,	// (0x0004a682) lc0_stat_clock_pane

0xe0dd,	// (0x000500b9) lc0_stat_indi_pane_g1_ParamLimits

0xe0dd,	// (0x000500b9) lc0_stat_indi_pane_g1

0xe0ea,	// (0x000500c6) lc0_stat_indi_pane_g2_ParamLimits

0xe0ea,	// (0x000500c6) lc0_stat_indi_pane_g2

0x0001,

0xfe35,	// (0x00051e11) lc0_stat_indi_pane_g_ParamLimits

0xfe35,	// (0x00051e11) lc0_stat_indi_pane_g

0x86b3,	// (0x0004a68f) lc0_uni_indicator_pane_ParamLimits

0x86b3,	// (0x0004a68f) lc0_uni_indicator_pane

0xe0f7,	// (0x000500d3) ls0_title_pane_g1_ParamLimits

0xe0f7,	// (0x000500d3) ls0_title_pane_g1

0xe10b,	// (0x000500e7) ls0_title_pane_t1_ParamLimits

0xe10b,	// (0x000500e7) ls0_title_pane_t1

0x86c0,	// (0x0004a69c) lc0_uni_indicator_pane_g1_ParamLimits

0x86c0,	// (0x0004a69c) lc0_uni_indicator_pane_g1

0xe141,	// (0x0005011d) lc0_stat_clock_pane_t1

0xd7de,	// (0x0004f7ba) main_ai5_pane

0xe14f,	// (0x0005012b) ai5_sk_pane_ParamLimits

0xe14f,	// (0x0005012b) ai5_sk_pane

0xe15c,	// (0x00050138) cell_ai5_widget_pane_ParamLimits

0xe15c,	// (0x00050138) cell_ai5_widget_pane

0xe6f8,	// (0x000506d4) aid_size_cell_widget_grid

0xe706,	// (0x000506e2) bg_ai5_widget_pane_ParamLimits

0xe706,	// (0x000506e2) bg_ai5_widget_pane

0xe77a,	// (0x00050756) cell_ai5_widget_pane_g2

0xe78a,	// (0x00050766) cell_ai5_widget_pane_g3

0xe7a1,	// (0x0005077d) cell_ai5_widget_pane_g4

0xe7ad,	// (0x00050789) cell_ai5_widget_pane_g5

0xe7b9,	// (0x00050795) cell_ai5_widget_pane_g6

0xe7c5,	// (0x000507a1) cell_ai5_widget_pane_g7

0xe80d,	// (0x000507e9) cell_ai5_widget_pane_t1_ParamLimits

0xe80d,	// (0x000507e9) cell_ai5_widget_pane_t1

0xe82a,	// (0x00050806) cell_ai5_widget_pane_t2_ParamLimits

0xe82a,	// (0x00050806) cell_ai5_widget_pane_t2

0xe842,	// (0x0005081e) cell_ai5_widget_pane_t3_ParamLimits

0xe842,	// (0x0005081e) cell_ai5_widget_pane_t3

0xe85a,	// (0x00050836) cell_ai5_widget_pane_t4_ParamLimits

0xe85a,	// (0x00050836) cell_ai5_widget_pane_t4

0xe877,	// (0x00050853) cell_ai5_widget_pane_t5_ParamLimits

0xe877,	// (0x00050853) cell_ai5_widget_pane_t5

0xe896,	// (0x00050872) cell_ai5_widget_pane_t6_ParamLimits

0xe896,	// (0x00050872) cell_ai5_widget_pane_t6

0xe8a8,	// (0x00050884) cell_ai5_widget_pane_t7_ParamLimits

0xe8a8,	// (0x00050884) cell_ai5_widget_pane_t7

0xe8c1,	// (0x0005089d) cell_ai5_widget_pane_t8_ParamLimits

0xe8c1,	// (0x0005089d) cell_ai5_widget_pane_t8

0x0009,

0xfe4f,	// (0x00051e2b) cell_ai5_widget_pane_t_ParamLimits

0xfe4f,	// (0x00051e2b) cell_ai5_widget_pane_t

0xe915,	// (0x000508f1) grid_ai5_widget_pane

0x0b08,	// (0x00042ae4) highlight_cell_ai5_widget_pane_ParamLimits

0x0b08,	// (0x00042ae4) highlight_cell_ai5_widget_pane

0xe929,	// (0x00050905) ai5_sk_left_pane

0xe933,	// (0x0005090f) ai5_sk_middle_pane

0xe93d,	// (0x00050919) ai5_sk_right_pane

0xe947,	// (0x00050923) bg_ai5_widget_pane_g1_ParamLimits

0xe947,	// (0x00050923) bg_ai5_widget_pane_g1

0xe953,	// (0x0005092f) bg_ai5_widget_pane_g2_ParamLimits

0xe953,	// (0x0005092f) bg_ai5_widget_pane_g2

0xe95f,	// (0x0005093b) bg_ai5_widget_pane_g3_ParamLimits

0xe95f,	// (0x0005093b) bg_ai5_widget_pane_g3

0xe96b,	// (0x00050947) bg_ai5_widget_pane_g4_ParamLimits

0xe96b,	// (0x00050947) bg_ai5_widget_pane_g4

0xe977,	// (0x00050953) bg_ai5_widget_pane_g5_ParamLimits

0xe977,	// (0x00050953) bg_ai5_widget_pane_g5

0xe983,	// (0x0005095f) bg_ai5_widget_pane_g6_ParamLimits

0xe983,	// (0x0005095f) bg_ai5_widget_pane_g6

0xe98f,	// (0x0005096b) bg_ai5_widget_pane_g7_ParamLimits

0xe98f,	// (0x0005096b) bg_ai5_widget_pane_g7

0xe99b,	// (0x00050977) bg_ai5_widget_pane_g8_ParamLimits

0xe99b,	// (0x00050977) bg_ai5_widget_pane_g8

0xe9a7,	// (0x00050983) bg_ai5_widget_pane_g9_ParamLimits

0xe9a7,	// (0x00050983) bg_ai5_widget_pane_g9

0x0008,

0xfe64,	// (0x00051e40) bg_ai5_widget_pane_g_ParamLimits

0xfe64,	// (0x00051e40) bg_ai5_widget_pane_g

0xe9dd,	// (0x000509b9) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9dd,	// (0x000509b9) cell_shortcut_ai5_widget_pane

0x47a7,	// (0x00046783) bg_cell_shortcut_ai5_widget_pane

0xe9f0,	// (0x000509cc) cell_grid_ai5_widget_pane_g1

0xe9f9,	// (0x000509d5) highlight_cell_shortcut_ai5_widget_pane

0x9461,	// (0x0004b43d) ai5_sk_left_pane_g1

0xea01,	// (0x000509dd) ai5_sk_left_pane_g2

0xea09,	// (0x000509e5) ai5_sk_left_pane_g3

0xea11,	// (0x000509ed) ai5_sk_left_pane_g4

0x0003,

0xfe77,	// (0x00051e53) ai5_sk_left_pane_g

0xea19,	// (0x000509f5) ai5_sk_left_pane_t1

0x9459,	// (0x0004b435) ai5_sk_right_pane_g1

0xea27,	// (0x00050a03) ai5_sk_right_pane_g2

0xea2f,	// (0x00050a0b) ai5_sk_right_pane_g3

0xea37,	// (0x00050a13) ai5_sk_right_pane_g4

0x0003,

0xfe80,	// (0x00051e5c) ai5_sk_right_pane_g

0xea3f,	// (0x00050a1b) ai5_sk_right_pane_t1

0x9459,	// (0x0004b435) ai5_sk_middle_pane_g1

0x9461,	// (0x0004b43d) ai5_sk_middle_pane_g2

0x9479,	// (0x0004b455) ai5_sk_middle_pane_g3

0xea2f,	// (0x00050a0b) ai5_sk_middle_pane_g4

0xea09,	// (0x000509e5) ai5_sk_middle_pane_g5

0xea4d,	// (0x00050a29) ai5_sk_middle_pane_g6

0xea55,	// (0x00050a31) ai5_sk_middle_pane_g7

0x0006,

0xfe89,	// (0x00051e65) ai5_sk_middle_pane_g

0x8f6b,	// (0x0004af47) aid_touch_area_size_lc0_ParamLimits

0x8f6b,	// (0x0004af47) aid_touch_area_size_lc0

0x7c78,	// (0x00049c54) cell_hwr_candidate_pane_t1_ParamLimits

0x8f89,	// (0x0004af65) aid_touch_navi_pane

0x927c,	// (0x0004b258) status_dt_navi_pane_ParamLimits

0x927c,	// (0x0004b258) status_dt_navi_pane

0x9289,	// (0x0004b265) status_dt_sta_pane_ParamLimits

0x9289,	// (0x0004b265) status_dt_sta_pane

0xea5d,	// (0x00050a39) dt_sta_controll_pane

0xea6a,	// (0x00050a46) dt_sta_indi_pane

0xea7b,	// (0x00050a57) dt_sta_title_pane

0x0626,	// (0x00042602) bg_dt_sta_indi_pane_ParamLimits

0x0626,	// (0x00042602) bg_dt_sta_indi_pane

0xea8e,	// (0x00050a6a) dt_sta_battery_pane

0xea96,	// (0x00050a72) dt_sta_indi_pane_g1

0xea9f,	// (0x00050a7b) dt_sta_indi_pane_g2

0xeaa8,	// (0x00050a84) dt_sta_indi_pane_g3

0x0002,

0xfe98,	// (0x00051e74) dt_sta_indi_pane_g

0xeab1,	// (0x00050a8d) dt_sta_signal_pane

0x0b08,	// (0x00042ae4) bg_dt_sta_title_pane_ParamLimits

0x0b08,	// (0x00042ae4) bg_dt_sta_title_pane

0xeaba,	// (0x00050a96) dt_sta_title_pane_g1

0xeac2,	// (0x00050a9e) dt_sta_title_pane_t1_ParamLimits

0xeac2,	// (0x00050a9e) dt_sta_title_pane_t1

0xd7de,	// (0x0004f7ba) bg_dt_sta_control_pane

0xead7,	// (0x00050ab3) dt_sta_controll_pane_g1

0xeae0,	// (0x00050abc) bg_dt_sta_title_pane_g1

0xeae9,	// (0x00050ac5) bg_dt_sta_title_pane_g2

0xeaf2,	// (0x00050ace) bg_dt_sta_title_pane_g3

0x0002,

0xfe9f,	// (0x00051e7b) bg_dt_sta_title_pane_g

0xba7a,	// (0x0004da56) bg_dt_sta_indi_pane_g1

0xeafb,	// (0x00050ad7) dt_sta_signal_pane_g1

0xeb03,	// (0x00050adf) dt_sta_signal_pane_g2

0x0001,

0xfea6,	// (0x00051e82) dt_sta_signal_pane_g

0xeb0b,	// (0x00050ae7) dt_sta_battery_pane_g1

0xeb14,	// (0x00050af0) dt_sta_battery_pane_t1

0xba7a,	// (0x0004da56) bg_dt_sta_control_pane_g1

0x2382,	// (0x0004435e) fep_china_uni_eep_pane

0x238a,	// (0x00044366) fep_china_uni_entry_pane_ParamLimits

0x239a,	// (0x00044376) popup_fep_china_uni_window_g1_ParamLimits

0x23aa,	// (0x00044386) popup_fep_china_uni_window_g2_ParamLimits

0x23aa,	// (0x00044386) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x00051704) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x00051704) popup_fep_china_uni_window_g

0xeb23,	// (0x00050aff) fep_china_uni_eep_pane_g1

0xeb2b,	// (0x00050b07) fep_china_uni_eep_pane_t1

0xe0be,	// (0x0005009a) aid_touch_area_size_smil_player

0x90e1,	// (0x0004b0bd) lc0_clock_pane

0x92e0,	// (0x0004b2bc) status_pane_g5_ParamLimits

0x92e0,	// (0x0004b2bc) status_pane_g5

0x8acf,	// (0x0004aaab) popup_keymap_window

0x929e,	// (0x0004b27a) status_icon_pane

0xe78a,	// (0x00050766) cell_ai5_widget_pane_g3_ParamLimits

0xe7a1,	// (0x0005077d) cell_ai5_widget_pane_g4_ParamLimits

0xe7ad,	// (0x00050789) cell_ai5_widget_pane_g5_ParamLimits

0xe7d1,	// (0x000507ad) cell_ai5_widget_pane_g8_ParamLimits

0xe7d1,	// (0x000507ad) cell_ai5_widget_pane_g8

0xe7e5,	// (0x000507c1) cell_ai5_widget_pane_g9_ParamLimits

0xe7e5,	// (0x000507c1) cell_ai5_widget_pane_g9

0xe7f9,	// (0x000507d5) cell_ai5_widget_pane_g10_ParamLimits

0xe7f9,	// (0x000507d5) cell_ai5_widget_pane_g10

0xeb3a,	// (0x00050b16) status_icon_pane_g1

0xd7de,	// (0x0004f7ba) bg_popup_sub_pane_cp13

0xeb42,	// (0x00050b1e) popup_keymap_window_t1

0x7400,	// (0x000493dc) control_pane_g6_ParamLimits

0x7400,	// (0x000493dc) control_pane_g6

0x740d,	// (0x000493e9) control_pane_g7_ParamLimits

0x740d,	// (0x000493e9) control_pane_g7

0x741a,	// (0x000493f6) control_pane_g8_ParamLimits

0x741a,	// (0x000493f6) control_pane_g8

0xea5d,	// (0x00050a39) dt_sta_controll_pane_ParamLimits

0xea6a,	// (0x00050a46) dt_sta_indi_pane_ParamLimits

0xea7b,	// (0x00050a57) dt_sta_title_pane_ParamLimits

0x0a4a,	// (0x00042a26) aid_size_touch_scroll_bar_cale

0x636f,	// (0x0004834b) popup_discreet_window_ParamLimits

0x636f,	// (0x0004834b) popup_discreet_window

0x63fd,	// (0x000483d9) popup_sk_window

0x9aa1,	// (0x0004ba7d) bg_popup_sub_pane_cp28_ParamLimits

0x9aa1,	// (0x0004ba7d) bg_popup_sub_pane_cp28

0xeb50,	// (0x00050b2c) popup_discreet_window_g1_ParamLimits

0xeb50,	// (0x00050b2c) popup_discreet_window_g1

0xeb70,	// (0x00050b4c) popup_discreet_window_t1_ParamLimits

0xeb70,	// (0x00050b4c) popup_discreet_window_t1

0xeb8e,	// (0x00050b6a) popup_discreet_window_t2_ParamLimits

0xeb8e,	// (0x00050b6a) popup_discreet_window_t2

0x0002,

0xfeab,	// (0x00051e87) popup_discreet_window_t_ParamLimits

0xfeab,	// (0x00051e87) popup_discreet_window_t

0x86d3,	// (0x0004a6af) popup_sk_window_g1

0x86dd,	// (0x0004a6b9) popup_sk_window_g2

0x0001,

0xfeb2,	// (0x00051e8e) popup_sk_window_g

0x86e7,	// (0x0004a6c3) popup_sk_window_t1

0x86f7,	// (0x0004a6d3) popup_sk_window_t1_copy1

0xe77a,	// (0x00050756) cell_ai5_widget_pane_g2_ParamLimits

0xe8d3,	// (0x000508af) cell_ai5_widget_pane_t9_ParamLimits

0xe8d3,	// (0x000508af) cell_ai5_widget_pane_t9

0xd7de,	// (0x0004f7ba) main_fep_fshwr2_pane

0x8705,	// (0x0004a6e1) aid_fshwr2_btn_pane

0x8711,	// (0x0004a6ed) aid_fshwr2_syb_pane

0x8722,	// (0x0004a6fe) aid_fshwr2_txt_pane

0x872e,	// (0x0004a70a) fshwr2_func_candi_pane

0x8742,	// (0x0004a71e) fshwr2_hwr_syb_pane

0x8755,	// (0x0004a731) fshwr2_icf_pane

0xd7de,	// (0x0004f7ba) fshwr2_icf_bg_pane

0xebe0,	// (0x00050bbc) fshwr2_icf_pane_t1_ParamLimits

0xebe0,	// (0x00050bbc) fshwr2_icf_pane_t1

0x2300,	// (0x000442dc) fshwr2_func_candi_pane_g1

0xebf8,	// (0x00050bd4) fshwr2_func_candi_row_pane_ParamLimits

0xebf8,	// (0x00050bd4) fshwr2_func_candi_row_pane

0xec08,	// (0x00050be4) cell_fshwr2_syb_pane_ParamLimits

0xec08,	// (0x00050be4) cell_fshwr2_syb_pane

0xbcf5,	// (0x0004dcd1) fshwr2_hwr_syb_pane_g1_ParamLimits

0xbcf5,	// (0x0004dcd1) fshwr2_hwr_syb_pane_g1

0xd7de,	// (0x0004f7ba) bg_popup_call_pane_cp01

0xec22,	// (0x00050bfe) fshwr2_func_candi_cell_pane_ParamLimits

0xec22,	// (0x00050bfe) fshwr2_func_candi_cell_pane

0xec4a,	// (0x00050c26) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec4a,	// (0x00050c26) fshwr2_func_candi_cell_bg_pane

0xec56,	// (0x00050c32) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec56,	// (0x00050c32) fshwr2_func_candi_cell_pane_g1

0xec76,	// (0x00050c52) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xec76,	// (0x00050c52) fshwr2_func_candi_cell_pane_t1

0xd7de,	// (0x0004f7ba) bg_button_pane_cp08

0x47a7,	// (0x00046783) cell_fshwr2_syb_bg_pane

0xec89,	// (0x00050c65) cell_fshwr2_syb_bg_pane_g1

0xec91,	// (0x00050c6d) cell_fshwr2_syb_bg_pane_t1

0x0b08,	// (0x00042ae4) main_tmo_pane

0xa5c5,	// (0x0004c5a1) uni_indicator_pane_g1_ParamLimits

0xa5dc,	// (0x0004c5b8) uni_indicator_pane_g2_ParamLimits

0xa5f2,	// (0x0004c5ce) uni_indicator_pane_g3_ParamLimits

0xa607,	// (0x0004c5e3) uni_indicator_pane_g4_ParamLimits

0xa607,	// (0x0004c5e3) uni_indicator_pane_g4

0xa61b,	// (0x0004c5f7) uni_indicator_pane_g5_ParamLimits

0xa61b,	// (0x0004c5f7) uni_indicator_pane_g5

0xa61b,	// (0x0004c5f7) uni_indicator_pane_g6_ParamLimits

0xa61b,	// (0x0004c5f7) uni_indicator_pane_g6

0xf92c,	// (0x00051908) uni_indicator_pane_g_ParamLimits

0xcf89,	// (0x0004ef65) popup_tmo_note_window_ParamLimits

0xcf89,	// (0x0004ef65) popup_tmo_note_window

0x0b08,	// (0x00042ae4) fshwr2_bg_pane

0xec67,	// (0x00050c43) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xec67,	// (0x00050c43) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb7,	// (0x00051e93) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb7,	// (0x00051e93) fshwr2_func_candi_cell_pane_g

0xba7a,	// (0x0004da56) bg_popup_window_pane_cp01

0xeca0,	// (0x00050c7c) bg_popup_window_pane_g1_cp01

0xeca9,	// (0x00050c85) bg_popup_window_pane_cp22_ParamLimits

0xeca9,	// (0x00050c85) bg_popup_window_pane_cp22

0xecb7,	// (0x00050c93) listscroll_tmo_link_pane_ParamLimits

0xecb7,	// (0x00050c93) listscroll_tmo_link_pane

0xecf7,	// (0x00050cd3) popup_tmo_note_window_g1_ParamLimits

0xecf7,	// (0x00050cd3) popup_tmo_note_window_g1

0xed04,	// (0x00050ce0) tmo_note_info_pane_ParamLimits

0xed04,	// (0x00050ce0) tmo_note_info_pane

0xed1e,	// (0x00050cfa) list_tmo_note_info_pane_g1_ParamLimits

0xed1e,	// (0x00050cfa) list_tmo_note_info_pane_g1

0xed35,	// (0x00050d11) list_tmo_note_info_pane_g2_ParamLimits

0xed35,	// (0x00050d11) list_tmo_note_info_pane_g2

0x0001,

0xfebc,	// (0x00051e98) list_tmo_note_info_pane_g_ParamLimits

0xfebc,	// (0x00051e98) list_tmo_note_info_pane_g

0xed51,	// (0x00050d2d) list_tmo_note_info_text_pane_ParamLimits

0xed51,	// (0x00050d2d) list_tmo_note_info_text_pane

0xedd6,	// (0x00050db2) list_tmo_link_pane

0xede3,	// (0x00050dbf) scroll_pane_cp20

0xedf0,	// (0x00050dcc) list_single_tmo_link_pane_ParamLimits

0xedf0,	// (0x00050dcc) list_single_tmo_link_pane

0xee00,	// (0x00050ddc) list_single_tmo_link_pane_t1

0xee0e,	// (0x00050dea) list_tmo_note_info_text_pane_t1_ParamLimits

0xee0e,	// (0x00050dea) list_tmo_note_info_text_pane_t1

0x6939,	// (0x00048915) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6939,	// (0x00048915) aid_size_touch_scroll_bar_cp01

0x586f,	// (0x0004784b) aid_size_touch_slider_marker

0x63e5,	// (0x000483c1) popup_settings_window_ParamLimits

0x63e5,	// (0x000483c1) popup_settings_window

0x59e8,	// (0x000479c4) popup_candi_list_indi_window

0x8f89,	// (0x0004af65) aid_touch_navi_pane_ParamLimits

0x7ed2,	// (0x00049eae) rs_clock_indi_pane

0x7edb,	// (0x00049eb7) sctrl_sk_bottom_pane_ParamLimits

0x7eec,	// (0x00049ec8) sctrl_sk_top_pane_ParamLimits

0x7fd5,	// (0x00049fb1) popup_fep_tooltip_window

0xe6f8,	// (0x000506d4) aid_size_cell_widget_grid_ParamLimits

0xe765,	// (0x00050741) cell_ai5_widget_pane_g1_ParamLimits

0xe765,	// (0x00050741) cell_ai5_widget_pane_g1

0xe7b9,	// (0x00050795) cell_ai5_widget_pane_g6_ParamLimits

0xe7c5,	// (0x000507a1) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3a,	// (0x00051e16) cell_ai5_widget_pane_g_ParamLimits

0xfe3a,	// (0x00051e16) cell_ai5_widget_pane_g

0xe8f7,	// (0x000508d3) cell_ai5_widget_pane_t10_ParamLimits

0xe8f7,	// (0x000508d3) cell_ai5_widget_pane_t10

0xe915,	// (0x000508f1) grid_ai5_widget_pane_ParamLimits

0xe9b3,	// (0x0005098f) cell_contacts_ai5_widget_pane_ParamLimits

0xe9b3,	// (0x0005098f) cell_contacts_ai5_widget_pane

0xeba3,	// (0x00050b7f) popup_discreet_window_t3_ParamLimits

0xeba3,	// (0x00050b7f) popup_discreet_window_t3

0x876a,	// (0x0004a746) popup_fshwr2_char_preview_window_ParamLimits

0x876a,	// (0x0004a746) popup_fshwr2_char_preview_window

0xed6f,	// (0x00050d4b) tmo_note_info_pane_t1

0xed84,	// (0x00050d60) tmo_note_info_pane_t2

0xed9d,	// (0x00050d79) tmo_note_info_pane_t3

0xedb2,	// (0x00050d8e) tmo_note_info_pane_t4

0xedc4,	// (0x00050da0) tmo_note_info_pane_t5

0x0004,

0xfec1,	// (0x00051e9d) tmo_note_info_pane_t

0xedd6,	// (0x00050db2) list_tmo_link_pane_ParamLimits

0xede3,	// (0x00050dbf) scroll_pane_cp20_ParamLimits

0xd7de,	// (0x0004f7ba) bg_popup_fep_char_preview_window_cp01

0xee27,	// (0x00050e03) popup_fshwr2_char_preview_window_t1

0xee35,	// (0x00050e11) popup_candi_list_indi_window_g1

0xee3e,	// (0x00050e1a) bg_cell_contacts_ai5_widget_pane

0xee4a,	// (0x00050e26) cell_contacts_ai5_widget_pane_g1

0xee5e,	// (0x00050e3a) cell_contacts_ai5_widget_pane_g2

0xee6a,	// (0x00050e46) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecc,	// (0x00051ea8) cell_contacts_ai5_widget_pane_g

0xee7d,	// (0x00050e59) cell_contacts_ai5_widget_pane_t1

0x0b08,	// (0x00042ae4) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeef7,	// (0x00050ed3) settings_container_pane

0x47a7,	// (0x00046783) listscroll_set_pane_copy1

0xb195,	// (0x0004d171) scroll_pane_cp121_copy1

0xef03,	// (0x00050edf) set_content_pane_copy1

0xef0b,	// (0x00050ee7) aid_height_set_list_copy1_ParamLimits

0xef0b,	// (0x00050ee7) aid_height_set_list_copy1

0xa81b,	// (0x0004c7f7) aid_size_parent_copy1_ParamLimits

0xa81b,	// (0x0004c7f7) aid_size_parent_copy1

0xef17,	// (0x00050ef3) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef17,	// (0x00050ef3) button_value_adjust_pane_cp6_copy1

0x8910,	// (0x0004a8ec) list_highlight_pane_cp2_copy1_ParamLimits

0x8910,	// (0x0004a8ec) list_highlight_pane_cp2_copy1

0xef2b,	// (0x00050f07) list_set_pane_copy1_ParamLimits

0xef2b,	// (0x00050f07) list_set_pane_copy1

0xee92,	// (0x00050e6e) main_pane_set_t1_copy1_ParamLimits

0xee92,	// (0x00050e6e) main_pane_set_t1_copy1

0xeecc,	// (0x00050ea8) main_pane_set_t2_copy1_ParamLimits

0xeecc,	// (0x00050ea8) main_pane_set_t2_copy1

0xeff2,	// (0x00050fce) main_pane_set_t3_copy1

0xf000,	// (0x00050fdc) main_pane_set_t4_copy1

0xeeeb,	// (0x00050ec7) set_content_pane_g1_copy1_ParamLimits

0xeeeb,	// (0x00050ec7) set_content_pane_g1_copy1

0xf00e,	// (0x00050fea) setting_code_pane_copy1

0xf016,	// (0x00050ff2) setting_slider_graphic_pane_copy1

0xf016,	// (0x00050ff2) setting_slider_pane_copy1

0xf016,	// (0x00050ff2) setting_text_pane_copy1

0xf016,	// (0x00050ff2) setting_volume_pane_copy1

0xf00e,	// (0x00050fea) settings_code_pane_cp2_copy1

0xf01e,	// (0x00050ffa) settings_code_pane_cp_copy1_ParamLimits

0xf01e,	// (0x00050ffa) settings_code_pane_cp_copy1

0x8782,	// (0x0004a75e) volume_set_pane_copy1

0xf032,	// (0x0005100e) volume_set_pane_g10_copy1

0xf03e,	// (0x0005101a) volume_set_pane_g1_copy1

0xf048,	// (0x00051024) volume_set_pane_g2_copy1

0xf052,	// (0x0005102e) volume_set_pane_g3_copy1

0xf05c,	// (0x00051038) volume_set_pane_g4_copy1

0xf066,	// (0x00051042) volume_set_pane_g5_copy1

0xf070,	// (0x0005104c) volume_set_pane_g6_copy1

0xf07a,	// (0x00051056) volume_set_pane_g7_copy1

0xf084,	// (0x00051060) volume_set_pane_g8_copy1

0xf08e,	// (0x0005106a) volume_set_pane_g9_copy1

0xd84c,	// (0x0004f828) bg_set_opt_pane_cp_copy1_ParamLimits

0xd84c,	// (0x0004f828) bg_set_opt_pane_cp_copy1

0x878e,	// (0x0004a76a) setting_slider_pane_t1_copy1_ParamLimits

0x878e,	// (0x0004a76a) setting_slider_pane_t1_copy1

0x87ac,	// (0x0004a788) setting_slider_pane_t2_copy1_ParamLimits

0x87ac,	// (0x0004a788) setting_slider_pane_t2_copy1

0x87c6,	// (0x0004a7a2) setting_slider_pane_t3_copy1_ParamLimits

0x87c6,	// (0x0004a7a2) setting_slider_pane_t3_copy1

0x87de,	// (0x0004a7ba) slider_set_pane_copy1_ParamLimits

0x87de,	// (0x0004a7ba) slider_set_pane_copy1

0x0b63,	// (0x00042b3f) set_opt_bg_pane_g1_copy2

0x0b6b,	// (0x00042b47) set_opt_bg_pane_g2_copy2

0xf098,	// (0x00051074) set_opt_bg_pane_g3_copy2

0x0b7b,	// (0x00042b57) set_opt_bg_pane_g4_copy2

0x0b83,	// (0x00042b5f) set_opt_bg_pane_g5_copy2

0x0b8b,	// (0x00042b67) set_opt_bg_pane_g6_copy2

0xf0a2,	// (0x0005107e) set_opt_bg_pane_g7_copy2

0xf0ac,	// (0x00051088) set_opt_bg_pane_g8_copy2

0xf0b6,	// (0x00051092) set_opt_bg_pane_g9_copy2

0xf0c0,	// (0x0005109c) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0c0,	// (0x0005109c) aid_size_touch_slider_mark_copy1

0xf0d4,	// (0x000510b0) slider_set_pane_g1_copy1

0xf0dd,	// (0x000510b9) slider_set_pane_g2_copy1

0xd8c7,	// (0x0004f8a3) slider_set_pane_g3_copy1_ParamLimits

0xd8c7,	// (0x0004f8a3) slider_set_pane_g3_copy1

0xd8db,	// (0x0004f8b7) slider_set_pane_g4_copy1_ParamLimits

0xd8db,	// (0x0004f8b7) slider_set_pane_g4_copy1

0xd8f3,	// (0x0004f8cf) slider_set_pane_g5_copy1_ParamLimits

0xd8f3,	// (0x0004f8cf) slider_set_pane_g5_copy1

0xd8c7,	// (0x0004f8a3) slider_set_pane_g6_copy1_ParamLimits

0xd8c7,	// (0x0004f8a3) slider_set_pane_g6_copy1

0xf0e5,	// (0x000510c1) slider_set_pane_g7_copy1_ParamLimits

0xf0e5,	// (0x000510c1) slider_set_pane_g7_copy1

0xd7f2,	// (0x0004f7ce) bg_set_opt_pane_cp2_copy1

0xf0fb,	// (0x000510d7) setting_slider_graphic_pane_g1_copy1

0xf104,	// (0x000510e0) setting_slider_graphic_pane_t1_copy1

0xf114,	// (0x000510f0) setting_slider_graphic_pane_t2_copy1

0xf124,	// (0x00051100) slider_set_pane_cp_copy1

0xf134,	// (0x00051110) input_focus_pane_cp1_copy1

0xf13d,	// (0x00051119) list_set_text_pane_copy1

0xf145,	// (0x00051121) setting_text_pane_g1_copy1

0x525e,	// (0x0004723a) set_text_pane_t1_copy1

0xf134,	// (0x00051110) input_focus_pane_cp2_copy1

0xf145,	// (0x00051121) setting_code_pane_g1_copy1

0xf14e,	// (0x0005112a) setting_code_pane_t1_copy1

0xf15c,	// (0x00051138) list_set_graphic_pane_copy1

0xd7f2,	// (0x0004f7ce) bg_set_opt_pane_cp4_copy1

0x6fa7,	// (0x00048f83) list_set_graphic_pane_g1_copy1_ParamLimits

0x6fa7,	// (0x00048f83) list_set_graphic_pane_g1_copy1

0xf16e,	// (0x0005114a) list_set_graphic_pane_g2_copy1

0x6fbf,	// (0x00048f9b) list_set_graphic_pane_t1_copy1_ParamLimits

0x6fbf,	// (0x00048f9b) list_set_graphic_pane_t1_copy1

0xba7a,	// (0x0004da56) rs_clock_indi_pane_g1

0xf176,	// (0x00051152) rs_clock_indi_pane_t1

0xf184,	// (0x00051160) rs_indi_pane

0xf18c,	// (0x00051168) rs_indi_pane_g1

0xf195,	// (0x00051171) rs_indi_pane_g2

0xf19e,	// (0x0005117a) rs_indi_pane_g3

0x0002,

0xfed3,	// (0x00051eaf) rs_indi_pane_g

0x47a7,	// (0x00046783) bg_popup_preview_window_pane_cp03

0xf1a7,	// (0x00051183) popup_fep_tooltip_window_t1

0xc731,	// (0x0004e70d) popup_note2_window_g2_ParamLimits

0xc731,	// (0x0004e70d) popup_note2_window_g2

0x0001,

0xfc6c,	// (0x00051c48) popup_note2_window_g_ParamLimits

0xfc6c,	// (0x00051c48) popup_note2_window_g

0xcc39,	// (0x0004ec15) bg_popup_sub_pane_cp11_ParamLimits

0xcc46,	// (0x0004ec22) cell_ai3_links_pane_g1_ParamLimits

0xcc5d,	// (0x0004ec39) cell_ai3_links_pane_t1

0x525e,	// (0x0004723a) set_text_pane_t1_copy1_ParamLimits

0x7033,	// (0x0004900f) cell_graphic_popup_pane_cp2_ParamLimits

0x7033,	// (0x0004900f) cell_graphic_popup_pane_cp2

0xf1b5,	// (0x00051191) cell_graphic_popup_pane_g1_cp2

0x085d,	// (0x00042839) cell_graphic_popup_pane_g2_cp2

0xf1bd,	// (0x00051199) cell_graphic_popup_pane_g3_cp2

0xf1c5,	// (0x000511a1) cell_graphic_popup_pane_t2_cp2

0x086e,	// (0x0004284a) grid_highlight_pane_cp3_cp2

0x0e0c,	// (0x00042de8) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0b08,	// (0x00042ae4) main_tmo_pane_ParamLimits

0xcf7d,	// (0x0004ef59) popup_tmo_big_image_note_window

0xe754,	// (0x00050730) cell_ai5_widget_list_pane

0xe75c,	// (0x00050738) cell_ai5_widget_lrg_icon_pane

0xed6f,	// (0x00050d4b) tmo_note_info_pane_t1_ParamLimits

0xed84,	// (0x00050d60) tmo_note_info_pane_t2_ParamLimits

0xed9d,	// (0x00050d79) tmo_note_info_pane_t3_ParamLimits

0xedb2,	// (0x00050d8e) tmo_note_info_pane_t4_ParamLimits

0xedc4,	// (0x00050da0) tmo_note_info_pane_t5_ParamLimits

0xfec1,	// (0x00051e9d) tmo_note_info_pane_t_ParamLimits

0xeef7,	// (0x00050ed3) settings_container_pane_ParamLimits

0xf12c,	// (0x00051108) indicator_popup_pane_cp5

0xf12c,	// (0x00051108) indicator_popup_pane_cp6

0xf15c,	// (0x00051138) list_set_graphic_pane_copy1_ParamLimits

0xd7de,	// (0x0004f7ba) bg_popup_window_pane_cp23

0xf1d3,	// (0x000511af) popup_tmo_big_image_note_window_g1

0xf1df,	// (0x000511bb) popup_tmo_big_image_note_window_t1

0xf1ef,	// (0x000511cb) popup_tmo_big_image_note_window_t2

0xf1ff,	// (0x000511db) popup_tmo_big_image_note_window_t3

0x0002,

0xfeda,	// (0x00051eb6) popup_tmo_big_image_note_window_t

0xba7a,	// (0x0004da56) cell_ai5_widget_lrg_icon_pane_g1

0xf20f,	// (0x000511eb) cell_ai5_widget_lrg_icon_pane_t1

0xf21d,	// (0x000511f9) cell_ai5_widget_list_row_pane_ParamLimits

0xf21d,	// (0x000511f9) cell_ai5_widget_list_row_pane

0xf236,	// (0x00051212) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf236,	// (0x00051212) cell_ai5_widget_list_row_pane_g1

0xf243,	// (0x0005121f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf243,	// (0x0005121f) cell_ai5_widget_list_row_pane_t1

0xf26e,	// (0x0005124a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf26e,	// (0x0005124a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee1,	// (0x00051ebd) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee1,	// (0x00051ebd) cell_ai5_widget_list_row_pane_t

0xd7de,	// (0x0004f7ba) main_fep_vtchi_ss_pane

0x8803,	// (0x0004a7df) popup_fep_char_pre_window

0x880b,	// (0x0004a7e7) popup_fep_ituss_window

0x882c,	// (0x0004a808) popup_fep_vkbss_window

0xf296,	// (0x00051272) grid_vkbss_keypad_pane_ParamLimits

0xf296,	// (0x00051272) grid_vkbss_keypad_pane

0xf2a6,	// (0x00051282) ituss_keypad_pane

0x8859,	// (0x0004a835) aid_vkbss_key_offset_ParamLimits

0x8859,	// (0x0004a835) aid_vkbss_key_offset

0x8865,	// (0x0004a841) cell_vkbss_key_pane_ParamLimits

0x8865,	// (0x0004a841) cell_vkbss_key_pane

0xf2b6,	// (0x00051292) bg_cell_vkbss_key_g1_ParamLimits

0xf2b6,	// (0x00051292) bg_cell_vkbss_key_g1

0xf2c2,	// (0x0005129e) cell_vkbss_key_3p_pane_ParamLimits

0xf2c2,	// (0x0005129e) cell_vkbss_key_3p_pane

0xf2dc,	// (0x000512b8) cell_vkbss_key_g1_ParamLimits

0xf2dc,	// (0x000512b8) cell_vkbss_key_g1

0xf2f6,	// (0x000512d2) cell_vkbss_key_t1_ParamLimits

0xf2f6,	// (0x000512d2) cell_vkbss_key_t1

0x887b,	// (0x0004a857) cell_ituss_key_pane_ParamLimits

0x887b,	// (0x0004a857) cell_ituss_key_pane

0xf321,	// (0x000512fd) bg_cell_ituss_key_g1_ParamLimits

0xf321,	// (0x000512fd) bg_cell_ituss_key_g1

0xf32d,	// (0x00051309) cell_ituss_key_pane_g1_ParamLimits

0xf32d,	// (0x00051309) cell_ituss_key_pane_g1

0xf341,	// (0x0005131d) cell_ituss_key_pane_g2_ParamLimits

0xf341,	// (0x0005131d) cell_ituss_key_pane_g2

0x0001,

0xfee8,	// (0x00051ec4) cell_ituss_key_pane_g_ParamLimits

0xfee8,	// (0x00051ec4) cell_ituss_key_pane_g

0xf373,	// (0x0005134f) cell_ituss_key_t1_ParamLimits

0xf373,	// (0x0005134f) cell_ituss_key_t1

0xf3b1,	// (0x0005138d) cell_ituss_key_t2_ParamLimits

0xf3b1,	// (0x0005138d) cell_ituss_key_t2

0xf3e2,	// (0x000513be) cell_ituss_key_t3_ParamLimits

0xf3e2,	// (0x000513be) cell_ituss_key_t3

0xf413,	// (0x000513ef) cell_ituss_key_t4_ParamLimits

0xf413,	// (0x000513ef) cell_ituss_key_t4

0x0003,

0xfeed,	// (0x00051ec9) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x00051ec9) cell_ituss_key_t

0xf444,	// (0x00051420) cell_vkbss_key_3p_pane_g1

0xf44c,	// (0x00051428) cell_vkbss_key_3p_pane_g2

0xf454,	// (0x00051430) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x00051ed2) cell_vkbss_key_3p_pane_g

0xd7de,	// (0x0004f7ba) bg_popup_fep_char_preview_window_cp02

0xf45c,	// (0x00051438) popup_fep_char_pre_window_t1

0xe6ee,	// (0x000506ca) main_ai5_sk_pane

0xee3e,	// (0x00050e1a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee4a,	// (0x00050e26) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xee5e,	// (0x00050e3a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee6a,	// (0x00050e46) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecc,	// (0x00051ea8) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee7d,	// (0x00050e59) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0b08,	// (0x00042ae4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf46b,	// (0x00051447) main_ai5_sk_pane_g1

0x98d9,	// (0x0004b8b5) popup_query_code_window_g1

0x8821,	// (0x0004a7fd) popup_fep_vkb_icf_pane

0x8837,	// (0x0004a813) popup_fep_vtchi_icf_pane

0x0b08,	// (0x00042ae4) bg_icf_pane

0xf474,	// (0x00051450) list_vkb_icf_pane

0x0b08,	// (0x00042ae4) bg_icf_pane_cp01

0xf480,	// (0x0005145c) vtchi_icf_list_pane

0xf491,	// (0x0005146d) list_vkb_icf_pane_t1_ParamLimits

0xf491,	// (0x0005146d) list_vkb_icf_pane_t1

0xf4a7,	// (0x00051483) vtchi_icf_list_pane_t1_ParamLimits

0xf4a7,	// (0x00051483) vtchi_icf_list_pane_t1

0x880b,	// (0x0004a7e7) popup_fep_ituss_window_ParamLimits

0x8837,	// (0x0004a813) popup_fep_vtchi_icf_pane_ParamLimits

0xf2a6,	// (0x00051282) ituss_keypad_pane_ParamLimits

0x884d,	// (0x0004a829) ituss_sks_pane

0x0b08,	// (0x00042ae4) bg_icf_pane_ParamLimits

0x87f4,	// (0x0004a7d0) icf_edit_indi_pane_ParamLimits

0x87f4,	// (0x0004a7d0) icf_edit_indi_pane

0xf474,	// (0x00051450) list_vkb_icf_pane_ParamLimits

0x0b08,	// (0x00042ae4) bg_icf_pane_cp01_ParamLimits

0x87f4,	// (0x0004a7d0) icf_edit_indi_pane_cp01_ParamLimits

0x87f4,	// (0x0004a7d0) icf_edit_indi_pane_cp01

0xf488,	// (0x00051464) vtchi_query_pane

0xbcf5,	// (0x0004dcd1) icf_edit_indi_pane_g1_ParamLimits

0xbcf5,	// (0x0004dcd1) icf_edit_indi_pane_g1

0xf529,	// (0x00051505) icf_edit_indi_pane_g2_ParamLimits

0xf529,	// (0x00051505) icf_edit_indi_pane_g2

0x0001,

0xff0e,	// (0x00051eea) icf_edit_indi_pane_g_ParamLimits

0xff0e,	// (0x00051eea) icf_edit_indi_pane_g

0xf538,	// (0x00051514) icf_edit_indi_pane_t1

0xf4bf,	// (0x0005149b) bg_input_focus_pane_cp042

0x0a41,	// (0x00042a1d) vtchi_button_pane

0xf4c8,	// (0x000514a4) vtchi_query_pane_t1

0xf4d6,	// (0x000514b2) vtchi_query_pane_t2

0xf4e4,	// (0x000514c0) vtchi_query_pane_t3

0x0002,

0xfefd,	// (0x00051ed9) vtchi_query_pane_t

0xd7de,	// (0x0004f7ba) bg_button_pane_cp13

0xf4f2,	// (0x000514ce) vtchi_button_pane_g1

0xf4fa,	// (0x000514d6) ituss_sks_pane_g1

0xf505,	// (0x000514e1) ituss_sks_pane_g2

0x0001,

0xff04,	// (0x00051ee0) ituss_sks_pane_g

0xf50d,	// (0x000514e9) ituss_sks_pane_t1

0xf51b,	// (0x000514f7) ituss_sks_pane_t2

0x0001,

0xff09,	// (0x00051ee5) ituss_sks_pane_t

0xb52a,	// (0x0004d506) indicator_nsta_pane_cp_g1

0xb533,	// (0x0004d50f) indicator_nsta_pane_cp_g2

0xb53b,	// (0x0004d517) indicator_nsta_pane_cp_g3

0xb543,	// (0x0004d51f) indicator_nsta_pane_cp_g4

0xb54b,	// (0x0004d527) indicator_nsta_pane_cp_g5

0xb553,	// (0x0004d52f) indicator_nsta_pane_cp_g6

0x0005,

0xfab6,	// (0x00051a92) indicator_nsta_pane_cp_g

0xddb8,	// (0x0004fd94) cell_graphic2_pane_t2_ParamLimits

0xddb8,	// (0x0004fd94) cell_graphic2_pane_t2

0x0001,

0xfdc3,	// (0x00051d9f) cell_graphic2_pane_t_ParamLimits

0xfdc3,	// (0x00051d9f) cell_graphic2_pane_t

0xdde5,	// (0x0004fdc1) cell_graphic2_control_pane_t1

0x6d5f,	// (0x00048d3b) signal_pane_g3_ParamLimits

0x6d5f,	// (0x00048d3b) signal_pane_g3

0x6d71,	// (0x00048d4d) signal_pane_g4_ParamLimits

0x6d71,	// (0x00048d4d) signal_pane_g4

0xf280,	// (0x0005125c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf280,	// (0x0005125c) cell_ai5_widget_list_row_pane_t3

0xf361,	// (0x0005133d) cell_ituss_key_pane_t1_ParamLimits

0xf361,	// (0x0005133d) cell_ituss_key_pane_t1

0x9556,	// (0x0004b532) form_field_data_wide_pane_vc_t2_ParamLimits

0x9556,	// (0x0004b532) form_field_data_wide_pane_vc_t2

0x956a,	// (0x0004b546) form_field_data_wide_pane_vc_t3_ParamLimits

0x956a,	// (0x0004b546) form_field_data_wide_pane_vc_t3

0x0002,

0xf814,	// (0x000517f0) form_field_data_wide_pane_vc_t_ParamLimits

0xf814,	// (0x000517f0) form_field_data_wide_pane_vc_t

0xb1d5,	// (0x0004d1b1) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb1d5,	// (0x0004d1b1) form_field_slider_wide_pane_vc_t3

0xb2ab,	// (0x0004d287) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb2ab,	// (0x0004d287) form_field_popup_wide_pane_vc_t2

0xb2c2,	// (0x0004d29e) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb2c2,	// (0x0004d29e) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa5,	// (0x00051a81) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa5,	// (0x00051a81) form_field_popup_wide_pane_vc_t

0x8705,	// (0x0004a6e1) aid_fshwr2_btn_pane_ParamLimits

0x8711,	// (0x0004a6ed) aid_fshwr2_syb_pane_ParamLimits

0x8722,	// (0x0004a6fe) aid_fshwr2_txt_pane_ParamLimits

0x0b08,	// (0x00042ae4) fshwr2_bg_pane_ParamLimits

0x872e,	// (0x0004a70a) fshwr2_func_candi_pane_ParamLimits

0x8742,	// (0x0004a71e) fshwr2_hwr_syb_pane_ParamLimits

0x8755,	// (0x0004a731) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large

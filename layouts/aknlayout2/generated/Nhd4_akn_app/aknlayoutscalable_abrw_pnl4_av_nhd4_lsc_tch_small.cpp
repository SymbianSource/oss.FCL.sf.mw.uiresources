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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00028a96 };

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
0x7024,	// (0x0002faba) Screen

0x7030,	// (0x0002fac6) application_window_ParamLimits

0x7030,	// (0x0002fac6) application_window

0x8c53,	// (0x000316e9) screen_g1

0x7068,	// (0x0002fafe) area_bottom_pane_ParamLimits

0x7068,	// (0x0002fafe) area_bottom_pane

0x0801,	// (0x00029297) area_top_pane_ParamLimits

0x0801,	// (0x00029297) area_top_pane

0x089f,	// (0x00029335) main_pane_ParamLimits

0x089f,	// (0x00029335) main_pane

0x8c5d,	// (0x000316f3) misc_graphics

0x8121,	// (0x00030bb7) battery_pane_ParamLimits

0x8121,	// (0x00030bb7) battery_pane

0xc8b4,	// (0x0003534a) bg_status_flat_pane_g8

0xc8bc,	// (0x00035352) bg_status_flat_pane_g9

0xc03c,	// (0x00034ad2) context_pane_ParamLimits

0xc03c,	// (0x00034ad2) context_pane

0x828c,	// (0x00030d22) navi_pane_ParamLimits

0x828c,	// (0x00030d22) navi_pane

0x830a,	// (0x00030da0) signal_pane_ParamLimits

0x830a,	// (0x00030da0) signal_pane

0x0008,

0xf87a,	// (0x00038310) bg_status_flat_pane_g

0x839a,	// (0x00030e30) status_pane_g1_ParamLimits

0x839a,	// (0x00030e30) status_pane_g1

0x83b0,	// (0x00030e46) status_pane_g2_ParamLimits

0x83b0,	// (0x00030e46) status_pane_g2

0xc0a1,	// (0x00034b37) status_pane_g3_ParamLimits

0xc0a1,	// (0x00034b37) status_pane_g3

0x0004,

0xf7a6,	// (0x0003823c) status_pane_g_ParamLimits

0xf7a6,	// (0x0003823c) status_pane_g

0x83bc,	// (0x00030e52) title_pane_ParamLimits

0x83bc,	// (0x00030e52) title_pane

0x841f,	// (0x00030eb5) uni_indicator_pane_ParamLimits

0x841f,	// (0x00030eb5) uni_indicator_pane

0xbf65,	// (0x000349fb) bg_list_pane_ParamLimits

0xbf65,	// (0x000349fb) bg_list_pane

0xbf85,	// (0x00034a1b) find_pane

0x79e4,	// (0x0003047a) listscroll_app_pane_ParamLimits

0x79e4,	// (0x0003047a) listscroll_app_pane

0xbf8d,	// (0x00034a23) listscroll_form_pane

0x79f4,	// (0x0003048a) listscroll_gen_pane_ParamLimits

0x79f4,	// (0x0003048a) listscroll_gen_pane

0x16c1,	// (0x0002a157) listscroll_set_pane

0xbfa7,	// (0x00034a3d) main_idle_act_pane

0xbd49,	// (0x000347df) main_idle_trad_pane

0xbd49,	// (0x000347df) main_list_empty_pane

0xb464,	// (0x00033efa) main_midp_pane

0xbfb9,	// (0x00034a4f) main_pane_g1_ParamLimits

0xbfb9,	// (0x00034a4f) main_pane_g1

0x7a08,	// (0x0003049e) popup_ai_message_window_ParamLimits

0x7a08,	// (0x0003049e) popup_ai_message_window

0x7a99,	// (0x0003052f) popup_fep_china_uni_window_ParamLimits

0x7a99,	// (0x0003052f) popup_fep_china_uni_window

0x17d5,	// (0x0002a26b) popup_fep_japan_candidate_window_ParamLimits

0x17d5,	// (0x0002a26b) popup_fep_japan_candidate_window

0x17f3,	// (0x0002a289) popup_fep_japan_predictive_window_ParamLimits

0x17f3,	// (0x0002a289) popup_fep_japan_predictive_window

0x7af3,	// (0x00030589) popup_find_window

0x7b10,	// (0x000305a6) popup_grid_graphic_window_ParamLimits

0x7b10,	// (0x000305a6) popup_grid_graphic_window

0x1858,	// (0x0002a2ee) popup_large_graphic_colour_window

0x7ba8,	// (0x0003063e) popup_menu_window_ParamLimits

0x7ba8,	// (0x0003063e) popup_menu_window

0x7d74,	// (0x0003080a) popup_note_image_window

0x7d3a,	// (0x000307d0) popup_note_wait_window_ParamLimits

0x7d3a,	// (0x000307d0) popup_note_wait_window

0x7d8c,	// (0x00030822) popup_note_window_ParamLimits

0x7d8c,	// (0x00030822) popup_note_window

0x7e32,	// (0x000308c8) popup_query_code_window_ParamLimits

0x7e32,	// (0x000308c8) popup_query_code_window

0x1aa2,	// (0x0002a538) popup_query_data_code_window_ParamLimits

0x1aa2,	// (0x0002a538) popup_query_data_code_window

0x7e6c,	// (0x00030902) popup_query_data_window_ParamLimits

0x7e6c,	// (0x00030902) popup_query_data_window

0x7ee8,	// (0x0003097e) popup_query_sat_info_window_ParamLimits

0x7ee8,	// (0x0003097e) popup_query_sat_info_window

0x7f7f,	// (0x00030a15) popup_snote_single_graphic_window_ParamLimits

0x7f7f,	// (0x00030a15) popup_snote_single_graphic_window

0x7f7f,	// (0x00030a15) popup_snote_single_text_window_ParamLimits

0x7f7f,	// (0x00030a15) popup_snote_single_text_window

0x1b25,	// (0x0002a5bb) popup_sub_window_general

0x1c53,	// (0x0002a6e9) popup_window_general_ParamLimits

0x1c53,	// (0x0002a6e9) popup_window_general

0xbfc7,	// (0x00034a5d) power_save_pane

0x784c,	// (0x000302e2) control_pane_g1_ParamLimits

0x784c,	// (0x000302e2) control_pane_g1

0x7875,	// (0x0003030b) control_pane_g2_ParamLimits

0x7875,	// (0x0003030b) control_pane_g2

0xbf4f,	// (0x000349e5) control_pane_g3_ParamLimits

0xbf4f,	// (0x000349e5) control_pane_g3

0x0007,

0xf78e,	// (0x00038224) control_pane_g_ParamLimits

0xf78e,	// (0x00038224) control_pane_g

0x78dd,	// (0x00030373) control_pane_t1_ParamLimits

0x78dd,	// (0x00030373) control_pane_t1

0x793b,	// (0x000303d1) control_pane_t2_ParamLimits

0x793b,	// (0x000303d1) control_pane_t2

0x0002,

0xf79f,	// (0x00038235) control_pane_t_ParamLimits

0xf79f,	// (0x00038235) control_pane_t

0xbe70,	// (0x00034906) navi_navi_volume_pane_cp1

0xbe79,	// (0x0003490f) status_small_icon_pane

0xbe81,	// (0x00034917) status_small_pane_g1_ParamLimits

0xbe81,	// (0x00034917) status_small_pane_g1

0xbeb5,	// (0x0003494b) status_small_pane_g2_ParamLimits

0xbeb5,	// (0x0003494b) status_small_pane_g2

0xbec1,	// (0x00034957) status_small_pane_g3_ParamLimits

0xbec1,	// (0x00034957) status_small_pane_g3

0xbecd,	// (0x00034963) status_small_pane_g4_ParamLimits

0xbecd,	// (0x00034963) status_small_pane_g4

0xbed9,	// (0x0003496f) status_small_pane_g5_ParamLimits

0xbed9,	// (0x0003496f) status_small_pane_g5

0xbee8,	// (0x0003497e) status_small_pane_g6_ParamLimits

0xbee8,	// (0x0003497e) status_small_pane_g6

0x0007,

0xf77d,	// (0x00038213) status_small_pane_g_ParamLimits

0xf77d,	// (0x00038213) status_small_pane_g

0xbf18,	// (0x000349ae) status_small_pane_t1

0xbf3b,	// (0x000349d1) status_small_wait_pane_ParamLimits

0xbf3b,	// (0x000349d1) status_small_wait_pane

0x76f2,	// (0x00030188) aid_levels_signal_ParamLimits

0x76f2,	// (0x00030188) aid_levels_signal

0x770a,	// (0x000301a0) signal_pane_g1_ParamLimits

0x770a,	// (0x000301a0) signal_pane_g1

0x7725,	// (0x000301bb) signal_pane_g2_ParamLimits

0x7725,	// (0x000301bb) signal_pane_g2

0x0003,

0xf70e,	// (0x000381a4) signal_pane_g_ParamLimits

0xf70e,	// (0x000381a4) signal_pane_g

0xb88f,	// (0x00034325) context_pane_g1

0x7246,	// (0x0002fcdc) title_pane_g1

0x727d,	// (0x0002fd13) title_pane_t1

0x8c73,	// (0x00031709) title_pane_t2

0x8c99,	// (0x0003172f) title_pane_t3

0x0002,

0xf55d,	// (0x00037ff3) title_pane_t

0x8447,	// (0x00030edd) aid_levels_battery_ParamLimits

0x8447,	// (0x00030edd) aid_levels_battery

0x8463,	// (0x00030ef9) battery_pane_g1_ParamLimits

0x8463,	// (0x00030ef9) battery_pane_g1

0x8480,	// (0x00030f16) battery_pane_g2_ParamLimits

0x8480,	// (0x00030f16) battery_pane_g2

0x0001,

0xf7b1,	// (0x00038247) battery_pane_g_ParamLimits

0xf7b1,	// (0x00038247) battery_pane_g

0x9b9c,	// (0x00032632) uni_indicator_pane_g1

0x9bb3,	// (0x00032649) uni_indicator_pane_g2

0x9bc9,	// (0x0003265f) uni_indicator_pane_g3

0x0005,

0xf8eb,	// (0x00038381) uni_indicator_pane_g

0xbbc7,	// (0x0003465d) navi_icon_pane_ParamLimits

0xbbc7,	// (0x0003465d) navi_icon_pane

0xbb10,	// (0x000345a6) navi_midp_pane

0xbbe3,	// (0x00034679) navi_navi_pane

0xbbed,	// (0x00034683) navi_text_pane_ParamLimits

0xbbed,	// (0x00034683) navi_text_pane

0x8c53,	// (0x000316e9) status_small_wait_pane_g1

0x8f84,	// (0x00031a1a) status_small_wait_pane_g2

0x0001,

0xf8e6,	// (0x0003837c) status_small_wait_pane_g

0xce71,	// (0x00035907) navi_navi_icon_text_pane

0xce79,	// (0x0003590f) navi_navi_pane_g1_ParamLimits

0xce79,	// (0x0003590f) navi_navi_pane_g1

0xce8b,	// (0x00035921) navi_navi_pane_g2_ParamLimits

0xce8b,	// (0x00035921) navi_navi_pane_g2

0x0001,

0x002c,	// (0x00028ac2) navi_navi_pane_g_ParamLimits

0x002c,	// (0x00028ac2) navi_navi_pane_g

0xce9d,	// (0x00035933) navi_navi_tabs_pane

0xcea6,	// (0x0003593c) navi_navi_text_pane

0xce71,	// (0x00035907) navi_navi_volume_pane

0xce4d,	// (0x000358e3) navi_text_pane_t1

0xce41,	// (0x000358d7) navi_icon_pane_g1

0xcd94,	// (0x0003582a) navi_navi_text_pane_t1

0x23e7,	// (0x0002ae7d) navi_navi_volume_pane_g1

0x86fc,	// (0x00031192) volume_small_pane

0x9ad9,	// (0x0003256f) navi_navi_icon_text_pane_g1

0xcd7a,	// (0x00035810) navi_navi_icon_text_pane_t1

0xbbe3,	// (0x00034679) navi_tabs_2_long_pane

0xbbe3,	// (0x00034679) navi_tabs_2_pane

0xbbe3,	// (0x00034679) navi_tabs_3_long_pane

0xbbe3,	// (0x00034679) navi_tabs_3_pane

0xbbe3,	// (0x00034679) navi_tabs_4_pane

0x86dc,	// (0x00031172) tabs_2_active_pane_ParamLimits

0x86dc,	// (0x00031172) tabs_2_active_pane

0x86ec,	// (0x00031182) tabs_2_passive_pane_ParamLimits

0x86ec,	// (0x00031182) tabs_2_passive_pane

0x86aa,	// (0x00031140) tabs_3_active_pane_ParamLimits

0x86aa,	// (0x00031140) tabs_3_active_pane

0x86ba,	// (0x00031150) tabs_3_passive_pane_ParamLimits

0x86ba,	// (0x00031150) tabs_3_passive_pane

0x86cb,	// (0x00031161) tabs_3_passive_pane_cp_ParamLimits

0x86cb,	// (0x00031161) tabs_3_passive_pane_cp

0x8677,	// (0x0003110d) tabs_4_active_pane_ParamLimits

0x8677,	// (0x0003110d) tabs_4_active_pane

0x8688,	// (0x0003111e) tabs_4_passive_pane_ParamLimits

0x8688,	// (0x0003111e) tabs_4_passive_pane

0x22f3,	// (0x0002ad89) tabs_4_passive_pane_cp_ParamLimits

0x22f3,	// (0x0002ad89) tabs_4_passive_pane_cp

0x8699,	// (0x0003112f) tabs_4_passive_pane_cp2_ParamLimits

0x8699,	// (0x0003112f) tabs_4_passive_pane_cp2

0x8653,	// (0x000310e9) tabs_2_long_active_pane_ParamLimits

0x8653,	// (0x000310e9) tabs_2_long_active_pane

0x8665,	// (0x000310fb) tabs_2_long_passive_pane_ParamLimits

0x8665,	// (0x000310fb) tabs_2_long_passive_pane

0x8614,	// (0x000310aa) tabs_3_long_active_pane_ParamLimits

0x8614,	// (0x000310aa) tabs_3_long_active_pane

0x8627,	// (0x000310bd) tabs_3_long_passive_pane_ParamLimits

0x8627,	// (0x000310bd) tabs_3_long_passive_pane

0x8640,	// (0x000310d6) tabs_3_long_passive_pane_cp_ParamLimits

0x8640,	// (0x000310d6) tabs_3_long_passive_pane_cp

0x221a,	// (0x0002acb0) volume_small_pane_g1

0x2223,	// (0x0002acb9) volume_small_pane_g2

0x222c,	// (0x0002acc2) volume_small_pane_g3

0x2235,	// (0x0002accb) volume_small_pane_g4

0x223e,	// (0x0002acd4) volume_small_pane_g5

0x2247,	// (0x0002acdd) volume_small_pane_g6

0x2250,	// (0x0002ace6) volume_small_pane_g7

0x2259,	// (0x0002acef) volume_small_pane_g8

0x2262,	// (0x0002acf8) volume_small_pane_g9

0x226b,	// (0x0002ad01) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x0003834d) volume_small_pane_g

0x8cab,	// (0x00031741) bg_active_tab_pane_cp2_ParamLimits

0x8cab,	// (0x00031741) bg_active_tab_pane_cp2

0x8cb9,	// (0x0003174f) tabs_3_active_pane_g1

0x7309,	// (0x0002fd9f) tabs_3_active_pane_t1

0x8cab,	// (0x00031741) bg_passive_tab_pane_cp2_ParamLimits

0x8cab,	// (0x00031741) bg_passive_tab_pane_cp2

0x8cb9,	// (0x0003174f) tabs_3_passive_pane_g1

0x7309,	// (0x0002fd9f) tabs_3_passive_pane_t1

0x8cab,	// (0x00031741) bg_active_tab_pane_cp3_ParamLimits

0x8cab,	// (0x00031741) bg_active_tab_pane_cp3

0x8cc1,	// (0x00031757) tabs_4_active_pane_g1

0x731b,	// (0x0002fdb1) tabs_4_active_pane_t1

0x8cab,	// (0x00031741) bg_passive_tab_pane_cp3_ParamLimits

0x8cab,	// (0x00031741) bg_passive_tab_pane_cp3

0x8cc1,	// (0x00031757) tabs_4_1_passive_pane_g1

0x731b,	// (0x0002fdb1) tabs_4_1_passive_pane_t1

0xb464,	// (0x00033efa) list_highlight_pane_cp2

0x9c52,	// (0x000326e8) list_set_pane_ParamLimits

0x9c52,	// (0x000326e8) list_set_pane

0x9cec,	// (0x00032782) main_pane_set_t1_ParamLimits

0x9cec,	// (0x00032782) main_pane_set_t1

0x9d0c,	// (0x000327a2) main_pane_set_t2_ParamLimits

0x9d0c,	// (0x000327a2) main_pane_set_t2

0x9d20,	// (0x000327b6) main_pane_set_t3_ParamLimits

0x9d20,	// (0x000327b6) main_pane_set_t3

0x9d32,	// (0x000327c8) main_pane_set_t4_ParamLimits

0x9d32,	// (0x000327c8) main_pane_set_t4

0x0003,

0xf939,	// (0x000383cf) main_pane_set_t_ParamLimits

0xf939,	// (0x000383cf) main_pane_set_t

0x9d44,	// (0x000327da) setting_code_pane

0x9d4c,	// (0x000327e2) setting_slider_graphic_pane

0x9d4c,	// (0x000327e2) setting_slider_pane

0x9d4c,	// (0x000327e2) setting_text_pane

0x9d4c,	// (0x000327e2) setting_volume_pane

0x0b96,	// (0x0002962c) volume_set_pane

0x8cc9,	// (0x0003175f) bg_set_opt_pane_cp

0x0b9e,	// (0x00029634) setting_slider_pane_t1

0x0bb7,	// (0x0002964d) setting_slider_pane_t2

0x0bd1,	// (0x00029667) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00037ffa) setting_slider_pane_t

0x0be9,	// (0x0002967f) slider_set_pane

0x8c5d,	// (0x000316f3) bg_set_opt_pane_cp2

0x8cd7,	// (0x0003176d) setting_slider_graphic_pane_g1

0x0bff,	// (0x00029695) setting_slider_graphic_pane_t1

0x0c0f,	// (0x000296a5) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00038001) setting_slider_graphic_pane_t

0x0c1f,	// (0x000296b5) slider_set_pane_cp

0x8c5d,	// (0x000316f3) input_focus_pane_cp1

0xd2f5,	// (0x00035d8b) list_set_text_pane

0x8c53,	// (0x000316e9) setting_text_pane_g1

0x8c5d,	// (0x000316f3) input_focus_pane_cp2

0x8c53,	// (0x000316e9) setting_code_pane_g1

0x8ce0,	// (0x00031776) setting_code_pane_t1

0x4868,	// (0x0002d2fe) set_text_pane_t1_ParamLimits

0x4868,	// (0x0002d2fe) set_text_pane_t1

0xb35a,	// (0x00033df0) set_opt_bg_pane_g1

0xb362,	// (0x00033df8) set_opt_bg_pane_g2

0xd2d5,	// (0x00035d6b) set_opt_bg_pane_g3

0xb372,	// (0x00033e08) set_opt_bg_pane_g4

0xb37a,	// (0x00033e10) set_opt_bg_pane_g5

0xb382,	// (0x00033e18) set_opt_bg_pane_g6

0xd2dd,	// (0x00035d73) set_opt_bg_pane_g7

0xd2e5,	// (0x00035d7b) set_opt_bg_pane_g8

0xd2ed,	// (0x00035d83) set_opt_bg_pane_g9

0x0008,

0xf926,	// (0x000383bc) set_opt_bg_pane_g

0xd2c8,	// (0x00035d5e) slider_set_pane_g1

0x24fa,	// (0x0002af90) slider_set_pane_g2

0x0006,

0xf917,	// (0x000383ad) slider_set_pane_g

0x2471,	// (0x0002af07) volume_set_pane_g1

0x2479,	// (0x0002af0f) volume_set_pane_g2

0x2481,	// (0x0002af17) volume_set_pane_g3

0x2489,	// (0x0002af1f) volume_set_pane_g4

0x2491,	// (0x0002af27) volume_set_pane_g5

0x2499,	// (0x0002af2f) volume_set_pane_g6

0x24a1,	// (0x0002af37) volume_set_pane_g7

0x24a9,	// (0x0002af3f) volume_set_pane_g8

0x24b1,	// (0x0002af47) volume_set_pane_g9

0x24b9,	// (0x0002af4f) volume_set_pane_g10

0x0009,

0xf8f8,	// (0x0003838e) volume_set_pane_g

0x732d,	// (0x0002fdc3) indicator_pane_ParamLimits

0x732d,	// (0x0002fdc3) indicator_pane

0x7355,	// (0x0002fdeb) main_idle_pane_g2_ParamLimits

0x7355,	// (0x0002fdeb) main_idle_pane_g2

0x738d,	// (0x0002fe23) main_pane_idle_g1_ParamLimits

0x738d,	// (0x0002fe23) main_pane_idle_g1

0x8cee,	// (0x00031784) popup_clock_digital_analogue_window_ParamLimits

0x8cee,	// (0x00031784) popup_clock_digital_analogue_window

0x73b4,	// (0x0002fe4a) soft_indicator_pane_ParamLimits

0x73b4,	// (0x0002fe4a) soft_indicator_pane

0x73ce,	// (0x0002fe64) wallpaper_pane_ParamLimits

0x73ce,	// (0x0002fe64) wallpaper_pane

0x8c53,	// (0x000316e9) wallpaper_pane_g1

0x73e0,	// (0x0002fe76) indicator_pane_g1_ParamLimits

0x73e0,	// (0x0002fe76) indicator_pane_g1

0xd447,	// (0x00035edd) navi_navi_icon_text_pane_srt_g1

0x8d1c,	// (0x000317b2) soft_indicator_pane_t1

0x8d36,	// (0x000317cc) aid_ps_area_pane

0x73f6,	// (0x0002fe8c) aid_ps_clock_pane

0x8d47,	// (0x000317dd) aid_ps_indicator_pane

0x8d53,	// (0x000317e9) indicator_ps_pane_ParamLimits

0x8d53,	// (0x000317e9) indicator_ps_pane

0x8d62,	// (0x000317f8) power_save_pane_g1_ParamLimits

0x8d62,	// (0x000317f8) power_save_pane_g1

0x8d6e,	// (0x00031804) power_save_pane_g2_ParamLimits

0x8d6e,	// (0x00031804) power_save_pane_g2

0x06f5,	// (0x0002918b) aid_navinavi_width_pane

0x8d36,	// (0x000317cc) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00038006) power_save_pane_g_ParamLimits

0xf570,	// (0x00038006) power_save_pane_g

0x8d7c,	// (0x00031812) power_save_pane_t1_ParamLimits

0x8d7c,	// (0x00031812) power_save_pane_t1

0x73f6,	// (0x0002fe8c) aid_ps_clock_pane_ParamLimits

0x8d47,	// (0x000317dd) aid_ps_indicator_pane_ParamLimits

0x8d8e,	// (0x00031824) power_save_pane_t4_ParamLimits

0x8d8e,	// (0x00031824) power_save_pane_t4

0x0001,

0xf575,	// (0x0003800b) power_save_pane_t_ParamLimits

0xf575,	// (0x0003800b) power_save_pane_t

0x8db8,	// (0x0003184e) power_save_t3_ParamLimits

0x8db8,	// (0x0003184e) power_save_t3

0x8da3,	// (0x00031839) power_save_t2_ParamLimits

0x8da3,	// (0x00031839) power_save_t2

0x8dcd,	// (0x00031863) indicator_ps_pane_g1

0x7404,	// (0x0002fe9a) ai_gene_pane_ParamLimits

0x7404,	// (0x0002fe9a) ai_gene_pane

0x741b,	// (0x0002feb1) ai_links_pane_ParamLimits

0x741b,	// (0x0002feb1) ai_links_pane

0x7433,	// (0x0002fec9) indicator_pane_cp1_ParamLimits

0x7433,	// (0x0002fec9) indicator_pane_cp1

0x7442,	// (0x0002fed8) main_pane_idle_g1_cp_ParamLimits

0x7442,	// (0x0002fed8) main_pane_idle_g1_cp

0x8dd6,	// (0x0003186c) popup_ai_links_title_window

0x745a,	// (0x0002fef0) soft_indicator_pane_cp1_ParamLimits

0x745a,	// (0x0002fef0) soft_indicator_pane_cp1

0xd111,	// (0x00035ba7) ai_links_pane_g1

0xd11a,	// (0x00035bb0) grid_ai_links_pane

0x9b93,	// (0x00032629) ai_gene_pane_1

0xd0ff,	// (0x00035b95) ai_gene_pane_2

0xd108,	// (0x00035b9e) list_highlight_pane_cp4

0x9b6f,	// (0x00032605) cell_ai_link_pane_ParamLimits

0x9b6f,	// (0x00032605) cell_ai_link_pane

0xd0f7,	// (0x00035b8d) cell_ai_link_pane_g1

0x8f84,	// (0x00031a1a) cell_ai_link_pane_g2

0x0001,

0xf8e1,	// (0x00038377) cell_ai_link_pane_g

0x8c5d,	// (0x000316f3) grid_highlight_cp2

0x8c5d,	// (0x000316f3) bg_popup_sub_pane_cp1

0x8ded,	// (0x00031883) popup_ai_links_title_window_t1

0xd047,	// (0x00035add) ai_gene_pane_1_g1_ParamLimits

0xd047,	// (0x00035add) ai_gene_pane_1_g1

0xd053,	// (0x00035ae9) ai_gene_pane_1_g2_ParamLimits

0xd053,	// (0x00035ae9) ai_gene_pane_1_g2

0x0001,

0x004f,	// (0x00028ae5) ai_gene_pane_1_g_ParamLimits

0x004f,	// (0x00028ae5) ai_gene_pane_1_g

0xd060,	// (0x00035af6) ai_gene_pane_1_t1_ParamLimits

0xd060,	// (0x00035af6) ai_gene_pane_1_t1

0xd094,	// (0x00035b2a) grid_ai_soft_ind_pane

0xd032,	// (0x00035ac8) ai_gene_pane_2_t1_ParamLimits

0xd032,	// (0x00035ac8) ai_gene_pane_2_t1

0x746e,	// (0x0002ff04) main_pane_empty_t1_ParamLimits

0x746e,	// (0x0002ff04) main_pane_empty_t1

0x7486,	// (0x0002ff1c) main_pane_empty_t2_ParamLimits

0x7486,	// (0x0002ff1c) main_pane_empty_t2

0x749b,	// (0x0002ff31) main_pane_empty_t3_ParamLimits

0x749b,	// (0x0002ff31) main_pane_empty_t3

0x74ad,	// (0x0002ff43) main_pane_empty_t4_ParamLimits

0x74ad,	// (0x0002ff43) main_pane_empty_t4

0x74bf,	// (0x0002ff55) main_pane_empty_t5_ParamLimits

0x74bf,	// (0x0002ff55) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00038010) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00038010) main_pane_empty_t

0xb3ab,	// (0x00033e41) bg_popup_window_pane_ParamLimits

0xb3ab,	// (0x00033e41) bg_popup_window_pane

0xcda2,	// (0x00035838) find_popup_pane_cp2_ParamLimits

0xcda2,	// (0x00035838) find_popup_pane_cp2

0xcdae,	// (0x00035844) heading_pane_ParamLimits

0xcdae,	// (0x00035844) heading_pane

0x8c5d,	// (0x000316f3) bg_popup_sub_pane

0x9af0,	// (0x00032586) bg_popup_window_pane_g1_ParamLimits

0x9af0,	// (0x00032586) bg_popup_window_pane_g1

0x9aff,	// (0x00032595) bg_popup_window_pane_g2_ParamLimits

0x9aff,	// (0x00032595) bg_popup_window_pane_g2

0x9b0b,	// (0x000325a1) bg_popup_window_pane_g3_ParamLimits

0x9b0b,	// (0x000325a1) bg_popup_window_pane_g3

0x9b17,	// (0x000325ad) bg_popup_window_pane_g4_ParamLimits

0x9b17,	// (0x000325ad) bg_popup_window_pane_g4

0x9b26,	// (0x000325bc) bg_popup_window_pane_g5_ParamLimits

0x9b26,	// (0x000325bc) bg_popup_window_pane_g5

0x9b36,	// (0x000325cc) bg_popup_window_pane_g6_ParamLimits

0x9b36,	// (0x000325cc) bg_popup_window_pane_g6

0x9b42,	// (0x000325d8) bg_popup_window_pane_g7_ParamLimits

0x9b42,	// (0x000325d8) bg_popup_window_pane_g7

0x9b51,	// (0x000325e7) bg_popup_window_pane_g8_ParamLimits

0x9b51,	// (0x000325e7) bg_popup_window_pane_g8

0x9b60,	// (0x000325f6) bg_popup_window_pane_g9_ParamLimits

0x9b60,	// (0x000325f6) bg_popup_window_pane_g9

0xcd88,	// (0x0003581e) bg_popup_window_pane_g10_ParamLimits

0xcd88,	// (0x0003581e) bg_popup_window_pane_g10

0x0009,

0xf8cc,	// (0x00038362) bg_popup_window_pane_g_ParamLimits

0xf8cc,	// (0x00038362) bg_popup_window_pane_g

0xcd31,	// (0x000357c7) bg_popup_heading_pane_ParamLimits

0xcd31,	// (0x000357c7) bg_popup_heading_pane

0x2782,	// (0x0002b218) tabs_4_passive_pane_cp_srt_ParamLimits

0x2782,	// (0x0002b218) tabs_4_passive_pane_cp_srt

0x2794,	// (0x0002b22a) tabs_4_passive_pane_srt_ParamLimits

0xcd45,	// (0x000357db) heading_pane_g2

0x2794,	// (0x0002b22a) tabs_4_passive_pane_srt

0xc20b,	// (0x00034ca1) bg_passive_tab_pane_cp3_srt_ParamLimits

0xc20b,	// (0x00034ca1) bg_passive_tab_pane_cp3_srt

0xcd4d,	// (0x000357e3) heading_pane_t1_ParamLimits

0xcd4d,	// (0x000357e3) heading_pane_t1

0xcd64,	// (0x000357fa) heading_pane_t2_ParamLimits

0xcd64,	// (0x000357fa) heading_pane_t2

0x0001,

0x0012,	// (0x00028aa8) heading_pane_t_ParamLimits

0x0012,	// (0x00028aa8) heading_pane_t

0xc87c,	// (0x00035312) bg_popup_heading_pane_g1

0xc90d,	// (0x000353a3) bg_popup_heading_pane_g2

0xc917,	// (0x000353ad) bg_popup_heading_pane_g3

0xc921,	// (0x000353b7) bg_popup_heading_pane_g4

0xc92b,	// (0x000353c1) bg_popup_heading_pane_g5

0xc935,	// (0x000353cb) bg_popup_heading_pane_g6

0xc93d,	// (0x000353d3) bg_popup_heading_pane_g7

0xc945,	// (0x000353db) bg_popup_heading_pane_g8

0xc94f,	// (0x000353e5) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x00038323) bg_popup_heading_pane_g

0xc197,	// (0x00034c2d) bg_popup_sub_pane_g1

0xc1a7,	// (0x00034c3d) bg_popup_sub_pane_g2

0xc19f,	// (0x00034c35) bg_popup_sub_pane_g3

0xc1b7,	// (0x00034c4d) bg_popup_sub_pane_g4

0xc1af,	// (0x00034c45) bg_popup_sub_pane_g5

0xc1bf,	// (0x00034c55) bg_popup_sub_pane_g6

0xc1c7,	// (0x00034c5d) bg_popup_sub_pane_g7

0xc1d7,	// (0x00034c6d) bg_popup_sub_pane_g8

0xc1cf,	// (0x00034c65) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x000382fd) bg_popup_sub_pane_g

0x8cab,	// (0x00031741) bg_popup_window_pane_cp5_ParamLimits

0x8cab,	// (0x00031741) bg_popup_window_pane_cp5

0x8e0a,	// (0x000318a0) popup_note_window_g1_ParamLimits

0x8e0a,	// (0x000318a0) popup_note_window_g1

0x8e16,	// (0x000318ac) popup_note_window_t1_ParamLimits

0x8e16,	// (0x000318ac) popup_note_window_t1

0x8e28,	// (0x000318be) popup_note_window_t2_ParamLimits

0x8e28,	// (0x000318be) popup_note_window_t2

0x8e3a,	// (0x000318d0) popup_note_window_t3_ParamLimits

0x8e3a,	// (0x000318d0) popup_note_window_t3

0x8e4c,	// (0x000318e2) popup_note_window_t4_ParamLimits

0x8e4c,	// (0x000318e2) popup_note_window_t4

0x8e74,	// (0x0003190a) popup_note_window_t5_ParamLimits

0x8e74,	// (0x0003190a) popup_note_window_t5

0x0004,

0xf585,	// (0x0003801b) popup_note_window_t_ParamLimits

0xf585,	// (0x0003801b) popup_note_window_t

0x8e98,	// (0x0003192e) bg_popup_window_pane_cp6_ParamLimits

0x8e98,	// (0x0003192e) bg_popup_window_pane_cp6

0xc7f0,	// (0x00035286) popup_note_image_window_g1_ParamLimits

0xc7f0,	// (0x00035286) popup_note_image_window_g1

0xc7fc,	// (0x00035292) popup_note_image_window_g2_ParamLimits

0xc7fc,	// (0x00035292) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x000382f1) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x000382f1) popup_note_image_window_g

0xc815,	// (0x000352ab) popup_note_image_window_t1_ParamLimits

0xc815,	// (0x000352ab) popup_note_image_window_t1

0xc82e,	// (0x000352c4) popup_note_image_window_t2_ParamLimits

0xc82e,	// (0x000352c4) popup_note_image_window_t2

0xc847,	// (0x000352dd) popup_note_image_window_t3_ParamLimits

0xc847,	// (0x000352dd) popup_note_image_window_t3

0x0002,

0xf860,	// (0x000382f6) popup_note_image_window_t_ParamLimits

0xf860,	// (0x000382f6) popup_note_image_window_t

0xc6cd,	// (0x00035163) bg_popup_window_pane_cp7_ParamLimits

0xc6cd,	// (0x00035163) bg_popup_window_pane_cp7

0xc6fd,	// (0x00035193) popup_note_wait_window_g1_ParamLimits

0xc6fd,	// (0x00035193) popup_note_wait_window_g1

0xc709,	// (0x0003519f) popup_note_wait_window_g2_ParamLimits

0xc709,	// (0x0003519f) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x000382df) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x000382df) popup_note_wait_window_g

0xc721,	// (0x000351b7) popup_note_wait_window_t1_ParamLimits

0xc721,	// (0x000351b7) popup_note_wait_window_t1

0xc748,	// (0x000351de) popup_note_wait_window_t2_ParamLimits

0xc748,	// (0x000351de) popup_note_wait_window_t2

0xc765,	// (0x000351fb) popup_note_wait_window_t3_ParamLimits

0xc765,	// (0x000351fb) popup_note_wait_window_t3

0xc778,	// (0x0003520e) popup_note_wait_window_t4_ParamLimits

0xc778,	// (0x0003520e) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x000382e6) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x000382e6) popup_note_wait_window_t

0xc79d,	// (0x00035233) wait_bar_pane_ParamLimits

0xc79d,	// (0x00035233) wait_bar_pane

0x8c5d,	// (0x000316f3) wait_anim_pane

0x8c5d,	// (0x000316f3) wait_border_pane

0x8c53,	// (0x000316e9) wait_anim_pane_g1

0x8c53,	// (0x000316e9) wait_anim_pane_g2

0x0001,

0xf709,	// (0x0003819f) wait_anim_pane_g

0xc671,	// (0x00035107) wait_border_pane_g1

0xc67c,	// (0x00035112) wait_border_pane_g2

0xc685,	// (0x0003511b) wait_border_pane_g3

0x0002,

0xf842,	// (0x000382d8) wait_border_pane_g

0xc4e1,	// (0x00034f77) bg_popup_window_pane_cp16_ParamLimits

0xc4e1,	// (0x00034f77) bg_popup_window_pane_cp16

0xc5e1,	// (0x00035077) indicator_popup_pane_cp4_ParamLimits

0xc5e1,	// (0x00035077) indicator_popup_pane_cp4

0xc5f5,	// (0x0003508b) popup_query_data_window_t1_ParamLimits

0xc5f5,	// (0x0003508b) popup_query_data_window_t1

0xc607,	// (0x0003509d) popup_query_data_window_t2_ParamLimits

0xc607,	// (0x0003509d) popup_query_data_window_t2

0xc620,	// (0x000350b6) popup_query_data_window_t3_ParamLimits

0xc620,	// (0x000350b6) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x000382d1) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x000382d1) popup_query_data_window_t

0xc63a,	// (0x000350d0) query_popup_data_pane_ParamLimits

0xc63a,	// (0x000350d0) query_popup_data_pane

0xc64e,	// (0x000350e4) query_popup_data_pane_cp1_ParamLimits

0xc64e,	// (0x000350e4) query_popup_data_pane_cp1

0xc4e1,	// (0x00034f77) bg_popup_window_pane_cp10_ParamLimits

0xc4e1,	// (0x00034f77) bg_popup_window_pane_cp10

0xc513,	// (0x00034fa9) indicator_popup_pane_ParamLimits

0xc513,	// (0x00034fa9) indicator_popup_pane

0xc535,	// (0x00034fcb) popup_query_code_window_t1_ParamLimits

0xc535,	// (0x00034fcb) popup_query_code_window_t1

0xc54f,	// (0x00034fe5) popup_query_code_window_t2_ParamLimits

0xc54f,	// (0x00034fe5) popup_query_code_window_t2

0xc598,	// (0x0003502e) popup_query_code_window_t3_ParamLimits

0xc598,	// (0x0003502e) popup_query_code_window_t3

0x0002,

0xf834,	// (0x000382ca) popup_query_code_window_t_ParamLimits

0xf834,	// (0x000382ca) popup_query_code_window_t

0xc5c7,	// (0x0003505d) query_popup_pane_ParamLimits

0xc5c7,	// (0x0003505d) query_popup_pane

0x8e98,	// (0x0003192e) bg_popup_window_pane_cp15_ParamLimits

0x8e98,	// (0x0003192e) bg_popup_window_pane_cp15

0x8eb6,	// (0x0003194c) indicator_popup_pane_cp1_ParamLimits

0x8eb6,	// (0x0003194c) indicator_popup_pane_cp1

0x8ec9,	// (0x0003195f) indicator_popup_pane_cp2_ParamLimits

0x8ec9,	// (0x0003195f) indicator_popup_pane_cp2

0x8edc,	// (0x00031972) popup_query_data_code_window_g1_ParamLimits

0x8edc,	// (0x00031972) popup_query_data_code_window_g1

0x8eef,	// (0x00031985) popup_query_data_code_window_t1_ParamLimits

0x8eef,	// (0x00031985) popup_query_data_code_window_t1

0x8f01,	// (0x00031997) popup_query_data_code_window_t2_ParamLimits

0x8f01,	// (0x00031997) popup_query_data_code_window_t2

0x8f13,	// (0x000319a9) popup_query_data_code_window_t3_ParamLimits

0x8f13,	// (0x000319a9) popup_query_data_code_window_t3

0x8f29,	// (0x000319bf) popup_query_data_code_window_t4_ParamLimits

0x8f29,	// (0x000319bf) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00038026) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00038026) popup_query_data_code_window_t

0x1fc5,	// (0x0002aa5b) list_single_midp_graphic_pane_g3

0x8f41,	// (0x000319d7) query_popup_data_pane_cp2_ParamLimits

0x8f54,	// (0x000319ea) query_popup_pane_cp2_ParamLimits

0x8f54,	// (0x000319ea) query_popup_pane_cp2

0x8c5d,	// (0x000316f3) bg_popup_window_pane_cp11

0xc4d9,	// (0x00034f6f) heading_pane_cp5

0x8fe2,	// (0x00031a78) listscroll_popup_info_pane

0x8c5d,	// (0x000316f3) input_focus_pane_cp3

0x8f67,	// (0x000319fd) query_popup_pane_t1

0x8f75,	// (0x00031a0b) list_popup_info_pane_ParamLimits

0x8f75,	// (0x00031a0b) list_popup_info_pane

0x8f84,	// (0x00031a1a) listscroll_popup_info_pane_g1

0x8f8c,	// (0x00031a22) scroll_pane_cp7

0x8f96,	// (0x00031a2c) popup_info_list_pane_t1_ParamLimits

0x8f96,	// (0x00031a2c) popup_info_list_pane_t1

0x8fb0,	// (0x00031a46) popup_info_list_pane_t2_ParamLimits

0x8fb0,	// (0x00031a46) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0003802f) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0003802f) popup_info_list_pane_t

0x8c5d,	// (0x000316f3) bg_popup_window_pane_cp12

0xd461,	// (0x00035ef7) find_popup_pane

0x8cc9,	// (0x0003175f) bg_popup_window_pane_cp3

0x8fca,	// (0x00031a60) heading_pane_cp3

0x8fd6,	// (0x00031a6c) listscroll_popup_graphic_pane

0x8c5d,	// (0x000316f3) bg_popup_window_pane_cp4

0x7521,	// (0x0002ffb7) heading_pane_cp4

0x8fe2,	// (0x00031a78) listscroll_popup_colour_pane

0x8fea,	// (0x00031a80) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8fea,	// (0x00031a80) cell_large_graphic_colour_none_popup_pane

0x7529,	// (0x0002ffbf) grid_large_graphic_colour_popup_pane_ParamLimits

0x7529,	// (0x0002ffbf) grid_large_graphic_colour_popup_pane

0x8ffe,	// (0x00031a94) listscroll_popup_colour_pane_g1_ParamLimits

0x8ffe,	// (0x00031a94) listscroll_popup_colour_pane_g1

0x9015,	// (0x00031aab) listscroll_popup_colour_pane_g2_ParamLimits

0x9015,	// (0x00031aab) listscroll_popup_colour_pane_g2

0x902c,	// (0x00031ac2) listscroll_popup_colour_pane_g3_ParamLimits

0x902c,	// (0x00031ac2) listscroll_popup_colour_pane_g3

0x754d,	// (0x0002ffe3) listscroll_popup_colour_pane_g4_ParamLimits

0x754d,	// (0x0002ffe3) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x00038034) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x00038034) listscroll_popup_colour_pane_g

0x903c,	// (0x00031ad2) scroll_pane_cp6_ParamLimits

0x903c,	// (0x00031ad2) scroll_pane_cp6

0x755c,	// (0x0002fff2) cell_large_graphic_colour_popup_pane_ParamLimits

0x755c,	// (0x0002fff2) cell_large_graphic_colour_popup_pane

0x904e,	// (0x00031ae4) cell_large_graphic_colour_none_popup_pane_t1

0x8c5d,	// (0x000316f3) grid_highlight_pane_cp5

0x905d,	// (0x00031af3) cell_large_graphic_colour_popup_pane_g1

0x9065,	// (0x00031afb) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0003803d) cell_large_graphic_colour_popup_pane_g

0x906d,	// (0x00031b03) cell_large_graphic_colour_popup_pane_g2_copy1

0x9076,	// (0x00031b0c) grid_highlight_pane_cp4

0x907e,	// (0x00031b14) bg_popup_window_pane_cp8_ParamLimits

0x907e,	// (0x00031b14) bg_popup_window_pane_cp8

0x9099,	// (0x00031b2f) popup_snote_single_text_window_g1_ParamLimits

0x9099,	// (0x00031b2f) popup_snote_single_text_window_g1

0x90ab,	// (0x00031b41) popup_snote_single_text_window_t1_ParamLimits

0x90ab,	// (0x00031b41) popup_snote_single_text_window_t1

0x90be,	// (0x00031b54) popup_snote_single_text_window_t2_ParamLimits

0x90be,	// (0x00031b54) popup_snote_single_text_window_t2

0x90d1,	// (0x00031b67) popup_snote_single_text_window_t3_ParamLimits

0x90d1,	// (0x00031b67) popup_snote_single_text_window_t3

0x910a,	// (0x00031ba0) popup_snote_single_text_window_t4_ParamLimits

0x910a,	// (0x00031ba0) popup_snote_single_text_window_t4

0x913e,	// (0x00031bd4) popup_snote_single_text_window_t5_ParamLimits

0x913e,	// (0x00031bd4) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x00038042) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x00038042) popup_snote_single_text_window_t

0x916d,	// (0x00031c03) bg_popup_window_pane_cp9_ParamLimits

0x916d,	// (0x00031c03) bg_popup_window_pane_cp9

0x9099,	// (0x00031b2f) popup_snote_single_graphic_window_g1_ParamLimits

0x9099,	// (0x00031b2f) popup_snote_single_graphic_window_g1

0x917b,	// (0x00031c11) popup_snote_single_graphic_window_g2_ParamLimits

0x917b,	// (0x00031c11) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0003804d) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0003804d) popup_snote_single_graphic_window_g

0x9187,	// (0x00031c1d) popup_snote_single_graphic_window_t1_ParamLimits

0x9187,	// (0x00031c1d) popup_snote_single_graphic_window_t1

0x919a,	// (0x00031c30) popup_snote_single_graphic_window_t2_ParamLimits

0x919a,	// (0x00031c30) popup_snote_single_graphic_window_t2

0x91ad,	// (0x00031c43) popup_snote_single_graphic_window_t3_ParamLimits

0x91ad,	// (0x00031c43) popup_snote_single_graphic_window_t3

0x91e6,	// (0x00031c7c) popup_snote_single_graphic_window_t4_ParamLimits

0x91e6,	// (0x00031c7c) popup_snote_single_graphic_window_t4

0x921a,	// (0x00031cb0) popup_snote_single_graphic_window_t5_ParamLimits

0x921a,	// (0x00031cb0) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x00038052) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x00038052) popup_snote_single_graphic_window_t

0xd3e9,	// (0x00035e7f) grid_graphic_popup_pane_ParamLimits

0xd3e9,	// (0x00035e7f) grid_graphic_popup_pane

0xd411,	// (0x00035ea7) listscroll_popup_graphic_pane_g1_ParamLimits

0xd411,	// (0x00035ea7) listscroll_popup_graphic_pane_g1

0x9e3b,	// (0x000328d1) listscroll_popup_graphic_pane_g2_ParamLimits

0x9e3b,	// (0x000328d1) listscroll_popup_graphic_pane_g2

0x0001,

0xf963,	// (0x000383f9) listscroll_popup_graphic_pane_g_ParamLimits

0xf963,	// (0x000383f9) listscroll_popup_graphic_pane_g

0xd249,	// (0x00035cdf) scroll_pane_cp5

0x9dff,	// (0x00032895) cell_graphic_popup_pane_ParamLimits

0x9dff,	// (0x00032895) cell_graphic_popup_pane

0xd3b4,	// (0x00035e4a) cell_graphic_popup_pane_g1

0xd3bc,	// (0x00035e52) cell_graphic_popup_pane_g2

0x906d,	// (0x00031b03) cell_graphic_popup_pane_g3

0x0002,

0xf95c,	// (0x000383f2) cell_graphic_popup_pane_g

0xd3c5,	// (0x00035e5b) cell_graphic_popup_pane_t2

0x9076,	// (0x00031b0c) grid_highlight_pane_cp3

0x925b,	// (0x00031cf1) list_gen_pane_ParamLimits

0x925b,	// (0x00031cf1) list_gen_pane

0x9283,	// (0x00031d19) scroll_pane

0x9dba,	// (0x00032850) bg_list_pane_g1_ParamLimits

0x9dba,	// (0x00032850) bg_list_pane_g1

0xd363,	// (0x00035df9) bg_list_pane_g2_ParamLimits

0xd363,	// (0x00035df9) bg_list_pane_g2

0xd376,	// (0x00035e0c) bg_list_pane_g3_ParamLimits

0xd376,	// (0x00035e0c) bg_list_pane_g3

0xd388,	// (0x00035e1e) bg_list_pane_g4_ParamLimits

0xd388,	// (0x00035e1e) bg_list_pane_g4

0x9dd5,	// (0x0003286b) bg_list_pane_g5_ParamLimits

0x9dd5,	// (0x0003286b) bg_list_pane_g5

0x0004,

0xf951,	// (0x000383e7) bg_list_pane_g_ParamLimits

0xf951,	// (0x000383e7) bg_list_pane_g

0x9d7f,	// (0x00032815) list_double2_graphic_large_graphic_pane_ParamLimits

0x9d7f,	// (0x00032815) list_double2_graphic_large_graphic_pane

0x9d7f,	// (0x00032815) list_double2_graphic_pane_ParamLimits

0x9d7f,	// (0x00032815) list_double2_graphic_pane

0x9d7f,	// (0x00032815) list_double2_large_graphic_pane_ParamLimits

0x9d7f,	// (0x00032815) list_double2_large_graphic_pane

0x9d7f,	// (0x00032815) list_double2_pane_ParamLimits

0x9d7f,	// (0x00032815) list_double2_pane

0x9d7f,	// (0x00032815) list_double_graphic_heading_pane_ParamLimits

0x9d7f,	// (0x00032815) list_double_graphic_heading_pane

0x9d7f,	// (0x00032815) list_double_graphic_pane_ParamLimits

0x9d7f,	// (0x00032815) list_double_graphic_pane

0x9d7f,	// (0x00032815) list_double_heading_pane_ParamLimits

0x9d7f,	// (0x00032815) list_double_heading_pane

0x9d7f,	// (0x00032815) list_double_large_graphic_pane_ParamLimits

0x9d7f,	// (0x00032815) list_double_large_graphic_pane

0x9d7f,	// (0x00032815) list_double_number_pane_ParamLimits

0x9d7f,	// (0x00032815) list_double_number_pane

0x9d7f,	// (0x00032815) list_double_pane_ParamLimits

0x9d7f,	// (0x00032815) list_double_pane

0x9d7f,	// (0x00032815) list_double_time_pane_ParamLimits

0x9d7f,	// (0x00032815) list_double_time_pane

0x9d7f,	// (0x00032815) list_setting_number_pane_ParamLimits

0x9d7f,	// (0x00032815) list_setting_number_pane

0x9d7f,	// (0x00032815) list_setting_pane_ParamLimits

0x9d7f,	// (0x00032815) list_setting_pane

0x9d92,	// (0x00032828) list_single_2graphic_pane_ParamLimits

0x9d92,	// (0x00032828) list_single_2graphic_pane

0x9d92,	// (0x00032828) list_single_graphic_heading_pane_ParamLimits

0x9d92,	// (0x00032828) list_single_graphic_heading_pane

0x9d92,	// (0x00032828) list_single_graphic_pane_ParamLimits

0x9d92,	// (0x00032828) list_single_graphic_pane

0x9d92,	// (0x00032828) list_single_heading_pane_ParamLimits

0x9d92,	// (0x00032828) list_single_heading_pane

0x9d92,	// (0x00032828) list_single_large_graphic_pane_ParamLimits

0x9d92,	// (0x00032828) list_single_large_graphic_pane

0x9d92,	// (0x00032828) list_single_number_heading_pane_ParamLimits

0x9d92,	// (0x00032828) list_single_number_heading_pane

0x9d92,	// (0x00032828) list_single_number_pane_ParamLimits

0x9d92,	// (0x00032828) list_single_number_pane

0x9d92,	// (0x00032828) list_single_pane_ParamLimits

0x9d92,	// (0x00032828) list_single_pane

0x8c5d,	// (0x000316f3) list_highlight_pane_cp1

0x4943,	// (0x0002d3d9) list_single_pane_g1_ParamLimits

0x4943,	// (0x0002d3d9) list_single_pane_g1

0x494f,	// (0x0002d3e5) list_single_pane_g2_ParamLimits

0x494f,	// (0x0002d3e5) list_single_pane_g2

0x0001,

0xf5ce,	// (0x00038064) list_single_pane_g_ParamLimits

0xf5ce,	// (0x00038064) list_single_pane_g

0x5307,	// (0x0002dd9d) list_single_pane_t1_ParamLimits

0x5307,	// (0x0002dd9d) list_single_pane_t1

0x4943,	// (0x0002d3d9) list_single_number_pane_g1_ParamLimits

0x4943,	// (0x0002d3d9) list_single_number_pane_g1

0x494f,	// (0x0002d3e5) list_single_number_pane_g2_ParamLimits

0x494f,	// (0x0002d3e5) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x00038064) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x00038064) list_single_number_pane_g

0x4ffd,	// (0x0002da93) list_single_number_pane_t1_ParamLimits

0x4ffd,	// (0x0002da93) list_single_number_pane_t1

0x9898,	// (0x0003232e) list_single_number_pane_t2_ParamLimits

0x9898,	// (0x0003232e) list_single_number_pane_t2

0x0001,

0xf912,	// (0x000383a8) list_single_number_pane_t_ParamLimits

0xf912,	// (0x000383a8) list_single_number_pane_t

0x92b7,	// (0x00031d4d) list_single_graphic_pane_g1_ParamLimits

0x92b7,	// (0x00031d4d) list_single_graphic_pane_g1

0x4943,	// (0x0002d3d9) list_single_graphic_pane_g2_ParamLimits

0x4943,	// (0x0002d3d9) list_single_graphic_pane_g2

0x494f,	// (0x0002d3e5) list_single_graphic_pane_g3_ParamLimits

0x494f,	// (0x0002d3e5) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0003805d) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0003805d) list_single_graphic_pane_g

0x92c3,	// (0x00031d59) list_single_graphic_pane_t1_ParamLimits

0x92c3,	// (0x00031d59) list_single_graphic_pane_t1

0x4943,	// (0x0002d3d9) list_single_heading_pane_g1_ParamLimits

0x4943,	// (0x0002d3d9) list_single_heading_pane_g1

0x494f,	// (0x0002d3e5) list_single_heading_pane_g2_ParamLimits

0x494f,	// (0x0002d3e5) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00038064) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00038064) list_single_heading_pane_g

0x92d9,	// (0x00031d6f) list_single_heading_pane_t1_ParamLimits

0x92d9,	// (0x00031d6f) list_single_heading_pane_t1

0x92ef,	// (0x00031d85) list_single_heading_pane_t2_ParamLimits

0x92ef,	// (0x00031d85) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00038069) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00038069) list_single_heading_pane_t

0x4943,	// (0x0002d3d9) list_single_number_heading_pane_g1_ParamLimits

0x4943,	// (0x0002d3d9) list_single_number_heading_pane_g1

0x494f,	// (0x0002d3e5) list_single_number_heading_pane_g2_ParamLimits

0x494f,	// (0x0002d3e5) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x00038064) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x00038064) list_single_number_heading_pane_g

0x92d9,	// (0x00031d6f) list_single_number_heading_pane_t1_ParamLimits

0x92d9,	// (0x00031d6f) list_single_number_heading_pane_t1

0x9301,	// (0x00031d97) list_single_number_heading_pane_t2_ParamLimits

0x9301,	// (0x00031d97) list_single_number_heading_pane_t2

0x52e1,	// (0x0002dd77) list_single_number_heading_pane_t3_ParamLimits

0x52e1,	// (0x0002dd77) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0003806e) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0003806e) list_single_number_heading_pane_t

0x4ff1,	// (0x0002da87) list_single_graphic_heading_pane_g1_ParamLimits

0x4ff1,	// (0x0002da87) list_single_graphic_heading_pane_g1

0x9313,	// (0x00031da9) list_single_graphic_heading_pane_g4_ParamLimits

0x9313,	// (0x00031da9) list_single_graphic_heading_pane_g4

0x494f,	// (0x0002d3e5) list_single_graphic_heading_pane_g5_ParamLimits

0x494f,	// (0x0002d3e5) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x00038075) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x00038075) list_single_graphic_heading_pane_g

0x92d9,	// (0x00031d6f) list_single_graphic_heading_pane_t1_ParamLimits

0x92d9,	// (0x00031d6f) list_single_graphic_heading_pane_t1

0x9324,	// (0x00031dba) list_single_graphic_heading_pane_t2_ParamLimits

0x9324,	// (0x00031dba) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0003807c) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0003807c) list_single_graphic_heading_pane_t

0x531d,	// (0x0002ddb3) list_single_large_graphic_pane_g1_ParamLimits

0x531d,	// (0x0002ddb3) list_single_large_graphic_pane_g1

0x4943,	// (0x0002d3d9) list_single_large_graphic_pane_g2_ParamLimits

0x4943,	// (0x0002d3d9) list_single_large_graphic_pane_g2

0x494f,	// (0x0002d3e5) list_single_large_graphic_pane_g3_ParamLimits

0x494f,	// (0x0002d3e5) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00038081) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00038081) list_single_large_graphic_pane_g

0xc67c,	// (0x00035112) wait_border_pane_g2_copy1

0x9336,	// (0x00031dcc) list_single_large_graphic_pane_g4_cp2

0x5329,	// (0x0002ddbf) list_single_large_graphic_pane_t1_ParamLimits

0x5329,	// (0x0002ddbf) list_single_large_graphic_pane_t1

0x933e,	// (0x00031dd4) list_double_pane_g1_ParamLimits

0x933e,	// (0x00031dd4) list_double_pane_g1

0x49ca,	// (0x0002d460) list_double_pane_g2_ParamLimits

0x49ca,	// (0x0002d460) list_double_pane_g2

0x0001,

0xf5f2,	// (0x00038088) list_double_pane_g_ParamLimits

0xf5f2,	// (0x00038088) list_double_pane_g

0x49d6,	// (0x0002d46c) list_double_pane_t1_ParamLimits

0x49d6,	// (0x0002d46c) list_double_pane_t1

0x934a,	// (0x00031de0) list_double_pane_t2_ParamLimits

0x934a,	// (0x00031de0) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0003808d) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0003808d) list_double_pane_t

0x935c,	// (0x00031df2) list_double2_pane_g1_ParamLimits

0x935c,	// (0x00031df2) list_double2_pane_g1

0x4b8f,	// (0x0002d625) list_double2_pane_g2_ParamLimits

0x4b8f,	// (0x0002d625) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x00038092) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x00038092) list_double2_pane_g

0x936d,	// (0x00031e03) list_double2_pane_t1_ParamLimits

0x936d,	// (0x00031e03) list_double2_pane_t1

0x9383,	// (0x00031e19) list_double2_pane_t2_ParamLimits

0x9383,	// (0x00031e19) list_double2_pane_t2

0x0001,

0xf601,	// (0x00038097) list_double2_pane_t_ParamLimits

0xf601,	// (0x00038097) list_double2_pane_t

0x933e,	// (0x00031dd4) list_double_number_pane_g1_ParamLimits

0x933e,	// (0x00031dd4) list_double_number_pane_g1

0x49ca,	// (0x0002d460) list_double_number_pane_g2_ParamLimits

0x49ca,	// (0x0002d460) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x00038088) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x00038088) list_double_number_pane_g

0x9395,	// (0x00031e2b) list_double_number_pane_t1_ParamLimits

0x9395,	// (0x00031e2b) list_double_number_pane_t1

0x4a9f,	// (0x0002d535) list_double_number_pane_t2_ParamLimits

0x4a9f,	// (0x0002d535) list_double_number_pane_t2

0x93a7,	// (0x00031e3d) list_double_number_pane_t3_ParamLimits

0x93a7,	// (0x00031e3d) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0003809c) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0003809c) list_double_number_pane_t

0x4a93,	// (0x0002d529) list_double_graphic_pane_g1_ParamLimits

0x4a93,	// (0x0002d529) list_double_graphic_pane_g1

0x93b9,	// (0x00031e4f) list_double_graphic_pane_g2_ParamLimits

0x93b9,	// (0x00031e4f) list_double_graphic_pane_g2

0x93c8,	// (0x00031e5e) list_double_graphic_pane_g3_ParamLimits

0x93c8,	// (0x00031e5e) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x000380a3) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x000380a3) list_double_graphic_pane_g

0x93e0,	// (0x00031e76) list_double_graphic_pane_t1_ParamLimits

0x93e0,	// (0x00031e76) list_double_graphic_pane_t1

0x93f6,	// (0x00031e8c) list_double_graphic_pane_t2_ParamLimits

0x93f6,	// (0x00031e8c) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x000380ac) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x000380ac) list_double_graphic_pane_t

0x9408,	// (0x00031e9e) list_double2_graphic_pane_g1_ParamLimits

0x9408,	// (0x00031e9e) list_double2_graphic_pane_g1

0x933e,	// (0x00031dd4) list_double2_graphic_pane_g2_ParamLimits

0x933e,	// (0x00031dd4) list_double2_graphic_pane_g2

0x49ca,	// (0x0002d460) list_double2_graphic_pane_g3_ParamLimits

0x49ca,	// (0x0002d460) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x000380b1) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x000380b1) list_double2_graphic_pane_g

0x9414,	// (0x00031eaa) list_double2_graphic_pane_t1_ParamLimits

0x9414,	// (0x00031eaa) list_double2_graphic_pane_t1

0x942a,	// (0x00031ec0) list_double2_graphic_pane_t2_ParamLimits

0x942a,	// (0x00031ec0) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x000380b8) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x000380b8) list_double2_graphic_pane_t

0x943c,	// (0x00031ed2) list_double_large_graphic_pane_g1_ParamLimits

0x943c,	// (0x00031ed2) list_double_large_graphic_pane_g1

0x945b,	// (0x00031ef1) list_double_large_graphic_pane_g2_ParamLimits

0x945b,	// (0x00031ef1) list_double_large_graphic_pane_g2

0x49ca,	// (0x0002d460) list_double_large_graphic_pane_g3_ParamLimits

0x49ca,	// (0x0002d460) list_double_large_graphic_pane_g3

0x946c,	// (0x00031f02) list_double_large_graphic_pane_g4_ParamLimits

0x946c,	// (0x00031f02) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x000380bd) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x000380bd) list_double_large_graphic_pane_g

0x947f,	// (0x00031f15) list_double_large_graphic_pane_t1_ParamLimits

0x947f,	// (0x00031f15) list_double_large_graphic_pane_t1

0x9498,	// (0x00031f2e) list_double_large_graphic_pane_t2_ParamLimits

0x9498,	// (0x00031f2e) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x000380c8) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x000380c8) list_double_large_graphic_pane_t

0x94aa,	// (0x00031f40) list_double2_large_graphic_pane_g1_ParamLimits

0x94aa,	// (0x00031f40) list_double2_large_graphic_pane_g1

0x935c,	// (0x00031df2) list_double2_large_graphic_pane_g2_ParamLimits

0x935c,	// (0x00031df2) list_double2_large_graphic_pane_g2

0x4b8f,	// (0x0002d625) list_double2_large_graphic_pane_g3_ParamLimits

0x4b8f,	// (0x0002d625) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x000380cd) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x000380cd) list_double2_large_graphic_pane_g

0x94b6,	// (0x00031f4c) list_double2_large_graphic_pane_t1_ParamLimits

0x94b6,	// (0x00031f4c) list_double2_large_graphic_pane_t1

0x94cc,	// (0x00031f62) list_double2_large_graphic_pane_t2_ParamLimits

0x94cc,	// (0x00031f62) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x000380d4) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x000380d4) list_double2_large_graphic_pane_t

0x94de,	// (0x00031f74) list_double_heading_pane_g1_ParamLimits

0x94de,	// (0x00031f74) list_double_heading_pane_g1

0x94ef,	// (0x00031f85) list_double_heading_pane_g2_ParamLimits

0x94ef,	// (0x00031f85) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x000380d9) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x000380d9) list_double_heading_pane_g

0x94fb,	// (0x00031f91) list_double_heading_pane_t1_ParamLimits

0x94fb,	// (0x00031f91) list_double_heading_pane_t1

0x9383,	// (0x00031e19) list_double_heading_pane_t2_ParamLimits

0x9383,	// (0x00031e19) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x000380de) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x000380de) list_double_heading_pane_t

0x4a93,	// (0x0002d529) list_double_graphic_heading_pane_g1_ParamLimits

0x4a93,	// (0x0002d529) list_double_graphic_heading_pane_g1

0x94de,	// (0x00031f74) list_double_graphic_heading_pane_g2_ParamLimits

0x94de,	// (0x00031f74) list_double_graphic_heading_pane_g2

0x94ef,	// (0x00031f85) list_double_graphic_heading_pane_g3_ParamLimits

0x94ef,	// (0x00031f85) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x000380e3) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x000380e3) list_double_graphic_heading_pane_g

0x9511,	// (0x00031fa7) list_double_graphic_heading_pane_t1_ParamLimits

0x9511,	// (0x00031fa7) list_double_graphic_heading_pane_t1

0x942a,	// (0x00031ec0) list_double_graphic_heading_pane_t2_ParamLimits

0x942a,	// (0x00031ec0) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x000380ea) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x000380ea) list_double_graphic_heading_pane_t

0x945b,	// (0x00031ef1) list_double_time_pane_g1_ParamLimits

0x945b,	// (0x00031ef1) list_double_time_pane_g1

0x49ca,	// (0x0002d460) list_double_time_pane_g2_ParamLimits

0x49ca,	// (0x0002d460) list_double_time_pane_g2

0x0001,

0xf659,	// (0x000380ef) list_double_time_pane_g_ParamLimits

0xf659,	// (0x000380ef) list_double_time_pane_g

0x9527,	// (0x00031fbd) list_double_time_pane_t1_ParamLimits

0x9527,	// (0x00031fbd) list_double_time_pane_t1

0x953d,	// (0x00031fd3) list_double_time_pane_t2_ParamLimits

0x953d,	// (0x00031fd3) list_double_time_pane_t2

0x954f,	// (0x00031fe5) list_double_time_pane_t3_ParamLimits

0x954f,	// (0x00031fe5) list_double_time_pane_t3

0x9561,	// (0x00031ff7) list_double_time_pane_t4_ParamLimits

0x9561,	// (0x00031ff7) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x000380f4) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x000380f4) list_double_time_pane_t

0x4c13,	// (0x0002d6a9) list_setting_pane_g1_ParamLimits

0x4c13,	// (0x0002d6a9) list_setting_pane_g1

0x4b8f,	// (0x0002d625) list_setting_pane_g2_ParamLimits

0x4b8f,	// (0x0002d625) list_setting_pane_g2

0x0001,

0xf667,	// (0x000380fd) list_setting_pane_g_ParamLimits

0xf667,	// (0x000380fd) list_setting_pane_g

0x9573,	// (0x00032009) list_setting_pane_t1_ParamLimits

0x9573,	// (0x00032009) list_setting_pane_t1

0x958d,	// (0x00032023) list_setting_pane_t2_ParamLimits

0x958d,	// (0x00032023) list_setting_pane_t2

0x0002,

0xf66c,	// (0x00038102) list_setting_pane_t_ParamLimits

0xf66c,	// (0x00038102) list_setting_pane_t

0x95ca,	// (0x00032060) set_value_pane_cp_ParamLimits

0x95ca,	// (0x00032060) set_value_pane_cp

0x4c7f,	// (0x0002d715) list_setting_number_pane_g1_ParamLimits

0x4c7f,	// (0x0002d715) list_setting_number_pane_g1

0x4c8b,	// (0x0002d721) list_setting_number_pane_g2_ParamLimits

0x4c8b,	// (0x0002d721) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x00038109) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x00038109) list_setting_number_pane_g

0x95d6,	// (0x0003206c) list_setting_number_pane_t1_ParamLimits

0x95d6,	// (0x0003206c) list_setting_number_pane_t1

0x95ef,	// (0x00032085) list_setting_number_pane_t2_ParamLimits

0x95ef,	// (0x00032085) list_setting_number_pane_t2

0x9609,	// (0x0003209f) list_setting_number_pane_t3_ParamLimits

0x9609,	// (0x0003209f) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x0003810e) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x0003810e) list_setting_number_pane_t

0x95ca,	// (0x00032060) set_value_pane_ParamLimits

0x95ca,	// (0x00032060) set_value_pane

0xb2b2,	// (0x00033d48) bg_set_opt_pane_ParamLimits

0xb2b2,	// (0x00033d48) bg_set_opt_pane

0x4d05,	// (0x0002d79b) set_value_pane_t1

0xb2d3,	// (0x00033d69) slider_set_pane_cp3

0xb2dc,	// (0x00033d72) volume_small_pane_cp

0xb2e5,	// (0x00033d7b) list_form_gen_pane

0xb2ee,	// (0x00033d84) scroll_pane_cp8

0x964c,	// (0x000320e2) form_field_data_pane_ParamLimits

0x964c,	// (0x000320e2) form_field_data_pane

0x9663,	// (0x000320f9) form_field_data_wide_pane_ParamLimits

0x9663,	// (0x000320f9) form_field_data_wide_pane

0x9683,	// (0x00032119) form_field_popup_pane_ParamLimits

0x9683,	// (0x00032119) form_field_popup_pane

0x969b,	// (0x00032131) form_field_popup_wide_pane_ParamLimits

0x969b,	// (0x00032131) form_field_popup_wide_pane

0x4d97,	// (0x0002d82d) form_field_slider_pane_ParamLimits

0x4d97,	// (0x0002d82d) form_field_slider_pane

0x4daa,	// (0x0002d840) form_field_slider_wide_pane_ParamLimits

0x4daa,	// (0x0002d840) form_field_slider_wide_pane

0xb2ff,	// (0x00033d95) data_form_pane

0x96c2,	// (0x00032158) form_field_data_pane_t1

0xb30b,	// (0x00033da1) input_focus_pane

0x4de1,	// (0x0002d877) data_form_wide_pane

0x4dfe,	// (0x0002d894) form_field_data_wide_pane_t1

0x908b,	// (0x00031b21) input_focus_pane_cp6

0x96e8,	// (0x0003217e) form_field_popup_pane_t1

0xb30b,	// (0x00033da1) input_focus_pane_cp7

0xb32d,	// (0x00033dc3) list_form_pane

0x4e42,	// (0x0002d8d8) form_field_popup_wide_pane_t1

0xb30b,	// (0x00033da1) input_focus_pane_cp8

0xb339,	// (0x00033dcf) list_form_wide_pane

0x970a,	// (0x000321a0) form_field_slider_pane_t1_ParamLimits

0x970a,	// (0x000321a0) form_field_slider_pane_t1

0x9722,	// (0x000321b8) form_field_slider_pane_t2_ParamLimits

0x9722,	// (0x000321b8) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x0003811e) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x0003811e) form_field_slider_pane_t

0x8cab,	// (0x00031741) input_focus_pane_cp9_ParamLimits

0x8cab,	// (0x00031741) input_focus_pane_cp9

0x9737,	// (0x000321cd) slider_cont_pane_ParamLimits

0x9737,	// (0x000321cd) slider_cont_pane

0xb348,	// (0x00033dde) form_field_slider_wide_pane_t1_ParamLimits

0xb348,	// (0x00033dde) form_field_slider_wide_pane_t1

0x4e99,	// (0x0002d92f) form_field_slider_wide_pane_t2_ParamLimits

0x4e99,	// (0x0002d92f) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x00038123) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x00038123) form_field_slider_wide_pane_t

0x8cab,	// (0x00031741) input_focus_pane_cp10_ParamLimits

0x8cab,	// (0x00031741) input_focus_pane_cp10

0x974b,	// (0x000321e1) slider_cont_pane_cp1_ParamLimits

0x974b,	// (0x000321e1) slider_cont_pane_cp1

0x975f,	// (0x000321f5) slider_form_pane_cp

0xb35a,	// (0x00033df0) input_focus_pane_g1

0xb362,	// (0x00033df8) input_focus_pane_g2

0xb36a,	// (0x00033e00) input_focus_pane_g3

0xb372,	// (0x00033e08) input_focus_pane_g4

0xb37a,	// (0x00033e10) input_focus_pane_g5

0xb382,	// (0x00033e18) input_focus_pane_g6

0xb38a,	// (0x00033e20) input_focus_pane_g7

0xb392,	// (0x00033e28) input_focus_pane_g8

0xb39a,	// (0x00033e30) input_focus_pane_g9

0x8c53,	// (0x000316e9) input_focus_pane_g10

0x0009,

0xf692,	// (0x00038128) input_focus_pane_g

0xc685,	// (0x0003511b) wait_border_pane_g3_copy1

0x9767,	// (0x000321fd) data_form_pane_t1

0x8c53,	// (0x000316e9) wait_anim_pane_g1_copy1

0x98aa,	// (0x00032340) data_form_wide_pane_t1

0x9781,	// (0x00032217) list_form_graphic_pane_cp_ParamLimits

0x9781,	// (0x00032217) list_form_graphic_pane_cp

0xd2fd,	// (0x00035d93) slider_form_pane_g1

0xd306,	// (0x00035d9c) slider_form_pane_g2

0x0006,

0xf942,	// (0x000383d8) slider_form_pane_g

0x9794,	// (0x0003222a) list_form_graphic_pane_ParamLimits

0x9794,	// (0x0003222a) list_form_graphic_pane

0x4ef9,	// (0x0002d98f) list_form_graphic_pane_g1

0x4f01,	// (0x0002d997) list_form_graphic_pane_t1_ParamLimits

0x4f01,	// (0x0002d997) list_form_graphic_pane_t1

0x8cc9,	// (0x0003175f) list_highlight_pane_cp5_ParamLimits

0x8cc9,	// (0x0003175f) list_highlight_pane_cp5

0x97a6,	// (0x0003223c) find_pane_g1

0xb3a2,	// (0x00033e38) input_find_pane

0x97af,	// (0x00032245) input_find_pane_g1_ParamLimits

0x97af,	// (0x00032245) input_find_pane_g1

0x97bb,	// (0x00032251) input_find_pane_t1_ParamLimits

0x97bb,	// (0x00032251) input_find_pane_t1

0x97d0,	// (0x00032266) input_find_pane_t2_ParamLimits

0x97d0,	// (0x00032266) input_find_pane_t2

0x0001,

0xf6a7,	// (0x0003813d) input_find_pane_t_ParamLimits

0xf6a7,	// (0x0003813d) input_find_pane_t

0xb3ab,	// (0x00033e41) input_focus_pane_cp5_ParamLimits

0xb3ab,	// (0x00033e41) input_focus_pane_cp5

0xb3b9,	// (0x00033e4f) bg_popup_window_pane_cp2_ParamLimits

0xb3b9,	// (0x00033e4f) bg_popup_window_pane_cp2

0xb3c6,	// (0x00033e5c) listscroll_menu_pane_ParamLimits

0xb3c6,	// (0x00033e5c) listscroll_menu_pane

0x7591,	// (0x00030027) popup_submenu_window_ParamLimits

0x7591,	// (0x00030027) popup_submenu_window

0xb3d2,	// (0x00033e68) find_popup_pane_g1

0xb3da,	// (0x00033e70) input_popup_find_pane_cp

0xb3ab,	// (0x00033e41) input_focus_pane_cp4_ParamLimits

0xb3ab,	// (0x00033e41) input_focus_pane_cp4

0xb3e4,	// (0x00033e7a) input_popup_find_pane_t1_ParamLimits

0xb3e4,	// (0x00033e7a) input_popup_find_pane_t1

0x8c5d,	// (0x000316f3) bg_popup_sub_pane_cp

0xb412,	// (0x00033ea8) listscroll_popup_sub_pane

0xb41a,	// (0x00033eb0) list_submenu_pane_ParamLimits

0xb41a,	// (0x00033eb0) list_submenu_pane

0xb42b,	// (0x00033ec1) scroll_pane_cp4

0xb433,	// (0x00033ec9) list_single_popup_submenu_pane_ParamLimits

0xb433,	// (0x00033ec9) list_single_popup_submenu_pane

0xb447,	// (0x00033edd) list_single_popup_submenu_pane_g1

0xb44f,	// (0x00033ee5) list_single_popup_submenu_pane_t1_ParamLimits

0xb44f,	// (0x00033ee5) list_single_popup_submenu_pane_t1

0x8cab,	// (0x00031741) bg_active_tab_pane_cp1_ParamLimits

0x8cab,	// (0x00031741) bg_active_tab_pane_cp1

0x75c7,	// (0x0003005d) tabs_2_active_pane_g1

0x75cf,	// (0x00030065) tabs_2_active_pane_t1

0x8cab,	// (0x00031741) bg_passive_tab_pane_cp1_ParamLimits

0x8cab,	// (0x00031741) bg_passive_tab_pane_cp1

0x75c7,	// (0x0003005d) tabs_2_passive_pane_g1

0x75cf,	// (0x00030065) tabs_2_passive_pane_t1

0x8cc9,	// (0x0003175f) bg_active_tab_pane_cp4

0x75e1,	// (0x00030077) tabs_2_long_active_pane_t1

0xb464,	// (0x00033efa) bg_passive_tab_pane_cp4

0x1fcd,	// (0x0002aa63) list_single_midp_graphic_pane_g4_ParamLimits

0x8cc9,	// (0x0003175f) bg_active_tab_pane_cp5

0x75f4,	// (0x0003008a) tabs_3_long_active_pane_t1

0xb464,	// (0x00033efa) bg_passive_tab_pane_cp5

0x1fcd,	// (0x0002aa63) list_single_midp_graphic_pane_g4

0x8cc9,	// (0x0003175f) bg_popup_window_pane_cp13_ParamLimits

0x8cc9,	// (0x0003175f) bg_popup_window_pane_cp13

0xb479,	// (0x00033f0f) listscroll_popup_fast_pane_ParamLimits

0xb479,	// (0x00033f0f) listscroll_popup_fast_pane

0xb485,	// (0x00033f1b) grid_popup_fast_pane_ParamLimits

0xb485,	// (0x00033f1b) grid_popup_fast_pane

0xb497,	// (0x00033f2d) scroll_pane_cp9_ParamLimits

0xb497,	// (0x00033f2d) scroll_pane_cp9

0xe66c,	// (0x00037102) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xe66c,	// (0x00037102) list_single_graphic_hl_pane_t1_cp2

0xb4bb,	// (0x00033f51) input_focus_pane_cp20_ParamLimits

0xb4bb,	// (0x00033f51) input_focus_pane_cp20

0xb4c9,	// (0x00033f5f) query_popup_data_pane_t1_ParamLimits

0xb4c9,	// (0x00033f5f) query_popup_data_pane_t1

0xb4dc,	// (0x00033f72) query_popup_data_pane_t2_ParamLimits

0xb4dc,	// (0x00033f72) query_popup_data_pane_t2

0xb522,	// (0x00033fb8) query_popup_data_pane_t3_ParamLimits

0xb522,	// (0x00033fb8) query_popup_data_pane_t3

0xb563,	// (0x00033ff9) query_popup_data_pane_t4_ParamLimits

0xb563,	// (0x00033ff9) query_popup_data_pane_t4

0xb59f,	// (0x00034035) query_popup_data_pane_t5_ParamLimits

0xb59f,	// (0x00034035) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x00038142) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x00038142) query_popup_data_pane_t

0xb35a,	// (0x00033df0) bg_set_opt_pane_g1

0xb362,	// (0x00033df8) bg_set_opt_pane_g2

0xb36a,	// (0x00033e00) bg_set_opt_pane_g3

0xb372,	// (0x00033e08) bg_set_opt_pane_g4

0xb37a,	// (0x00033e10) bg_set_opt_pane_g5

0xb382,	// (0x00033e18) bg_set_opt_pane_g6

0xb38a,	// (0x00033e20) bg_set_opt_pane_g7

0xb392,	// (0x00033e28) bg_set_opt_pane_g8

0xb39a,	// (0x00033e30) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x0003814d) bg_set_opt_pane_g

0x126f,	// (0x00029d05) control_top_pane_stacon_ParamLimits

0x126f,	// (0x00029d05) control_top_pane_stacon

0x12c2,	// (0x00029d58) signal_pane_stacon_ParamLimits

0x12c2,	// (0x00029d58) signal_pane_stacon

0xba0f,	// (0x000344a5) stacon_top_pane_g1_ParamLimits

0xba0f,	// (0x000344a5) stacon_top_pane_g1

0x12e7,	// (0x00029d7d) title_pane_stacon_ParamLimits

0x12e7,	// (0x00029d7d) title_pane_stacon

0x1311,	// (0x00029da7) uni_indicator_pane_stacon_ParamLimits

0x1311,	// (0x00029da7) uni_indicator_pane_stacon

0x1326,	// (0x00029dbc) battery_pane_stacon_ParamLimits

0x1326,	// (0x00029dbc) battery_pane_stacon

0x136a,	// (0x00029e00) control_bottom_pane_stacon_ParamLimits

0x136a,	// (0x00029e00) control_bottom_pane_stacon

0x138d,	// (0x00029e23) navi_pane_stacon_ParamLimits

0x138d,	// (0x00029e23) navi_pane_stacon

0xba31,	// (0x000344c7) stacon_bottom_pane_g1_ParamLimits

0xba31,	// (0x000344c7) stacon_bottom_pane_g1

0x0e82,	// (0x00029918) aid_levels_signal_lsc_ParamLimits

0x0e82,	// (0x00029918) aid_levels_signal_lsc

0x0e99,	// (0x0002992f) signal_pane_stacon_g1_ParamLimits

0x0e99,	// (0x0002992f) signal_pane_stacon_g1

0x0ead,	// (0x00029943) signal_pane_stacon_g2_ParamLimits

0x0ead,	// (0x00029943) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x00038160) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x00038160) signal_pane_stacon_g

0x0ee2,	// (0x00029978) title_pane_stacon_t1_ParamLimits

0x0ee2,	// (0x00029978) title_pane_stacon_t1

0xb5e3,	// (0x00034079) uni_indicator_pane_stacon_g1

0xb5ed,	// (0x00034083) uni_indicator_pane_stacon_g2

0xb5f7,	// (0x0003408d) uni_indicator_pane_stacon_g3

0xb601,	// (0x00034097) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x0003816c) uni_indicator_pane_stacon_g

0x0f07,	// (0x0002999d) control_top_pane_stacon_g1

0x0f0f,	// (0x000299a5) control_top_pane_stacon_t1_ParamLimits

0x0f0f,	// (0x000299a5) control_top_pane_stacon_t1

0x0f46,	// (0x000299dc) aid_levels_battery_lsc_ParamLimits

0x0f46,	// (0x000299dc) aid_levels_battery_lsc

0x0f5e,	// (0x000299f4) battery_pane_stacon_g1_ParamLimits

0x0f5e,	// (0x000299f4) battery_pane_stacon_g1

0x0f71,	// (0x00029a07) battery_pane_stacon_g2_ParamLimits

0x0f71,	// (0x00029a07) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x00038175) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x00038175) battery_pane_stacon_g

0x0faf,	// (0x00029a45) navi_icon_pane_stacon

0x0fc3,	// (0x00029a59) navi_navi_pane_stacon

0x0faf,	// (0x00029a45) navi_text_pane_stacon

0x0f07,	// (0x0002999d) control_bottom_pane_stacon_g1

0x0fd7,	// (0x00029a6d) control_bottom_pane_stacon_t1_ParamLimits

0x0fd7,	// (0x00029a6d) control_bottom_pane_stacon_t1

0x7606,	// (0x0003009c) grid_app_pane_ParamLimits

0x7606,	// (0x0003009c) grid_app_pane

0x763c,	// (0x000300d2) scroll_pane_cp15_ParamLimits

0x763c,	// (0x000300d2) scroll_pane_cp15

0x7651,	// (0x000300e7) cell_app_pane_ParamLimits

0x7651,	// (0x000300e7) cell_app_pane

0x7698,	// (0x0003012e) cell_app_pane_g1_ParamLimits

0x7698,	// (0x0003012e) cell_app_pane_g1

0xb62e,	// (0x000340c4) cell_app_pane_g2_ParamLimits

0xb62e,	// (0x000340c4) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x0003817a) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x0003817a) cell_app_pane_g

0x76b8,	// (0x0003014e) cell_app_pane_t1_ParamLimits

0x76b8,	// (0x0003014e) cell_app_pane_t1

0xb63a,	// (0x000340d0) grid_highlight_pane_ParamLimits

0xb63a,	// (0x000340d0) grid_highlight_pane

0xb35a,	// (0x00033df0) cell_highlight_pane_g1

0xb362,	// (0x00033df8) cell_highlight_pane_g2

0xb36a,	// (0x00033e00) cell_highlight_pane_g3

0xb372,	// (0x00033e08) cell_highlight_pane_g4

0xb37a,	// (0x00033e10) cell_highlight_pane_g5

0xb382,	// (0x00033e18) cell_highlight_pane_g6

0xb38a,	// (0x00033e20) cell_highlight_pane_g7

0xb392,	// (0x00033e28) cell_highlight_pane_g8

0xb39a,	// (0x00033e30) cell_highlight_pane_g9

0x8c53,	// (0x000316e9) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x00038128) cell_highlight_pane_g

0xb64b,	// (0x000340e1) bg_scroll_pane

0x10b3,	// (0x00029b49) scroll_handle_pane

0xb692,	// (0x00034128) scroll_bg_pane_g1

0xb6a7,	// (0x0003413d) scroll_bg_pane_g2

0xb6bf,	// (0x00034155) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x0003817f) scroll_bg_pane_g

0xb6d4,	// (0x0003416a) scroll_handle_focus_pane_ParamLimits

0xb6d4,	// (0x0003416a) scroll_handle_focus_pane

0xb692,	// (0x00034128) scroll_handle_pane_g1

0xb6e1,	// (0x00034177) scroll_handle_pane_g2

0xb6bf,	// (0x00034155) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x00038186) scroll_handle_pane_g

0xb3ab,	// (0x00033e41) bg_popup_sub_pane_cp21_ParamLimits

0xb3ab,	// (0x00033e41) bg_popup_sub_pane_cp21

0xb6f5,	// (0x0003418b) popup_fep_japan_predictive_window_t1_ParamLimits

0xb6f5,	// (0x0003418b) popup_fep_japan_predictive_window_t1

0xb70f,	// (0x000341a5) popup_fep_japan_predictive_window_t2_ParamLimits

0xb70f,	// (0x000341a5) popup_fep_japan_predictive_window_t2

0xb742,	// (0x000341d8) popup_fep_japan_predictive_window_t3_ParamLimits

0xb742,	// (0x000341d8) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x0003818d) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x0003818d) popup_fep_japan_predictive_window_t

0x8c5d,	// (0x000316f3) bg_popup_sub_pane_cp23

0xb779,	// (0x0003420f) listscroll_japin_cand_pane

0xb781,	// (0x00034217) popup_fep_japan_candidate_window_t1

0xb78f,	// (0x00034225) candidate_pane_ParamLimits

0xb78f,	// (0x00034225) candidate_pane

0xb7a1,	// (0x00034237) scroll_pane_cp30

0xb7a9,	// (0x0003423f) list_single_popup_jap_candidate_pane_ParamLimits

0xb7a9,	// (0x0003423f) list_single_popup_jap_candidate_pane

0x8c5d,	// (0x000316f3) list_highlight_pane_cp30

0xb7bd,	// (0x00034253) list_single_popup_jap_candidate_pane_t1

0xb7cc,	// (0x00034262) level_1_signal

0xb7d9,	// (0x0003426f) level_2_signal

0xb7e6,	// (0x0003427c) level_3_signal

0xb7f3,	// (0x00034289) level_4_signal

0xb800,	// (0x00034296) level_5_signal

0xb80d,	// (0x000342a3) level_6_signal

0xb81a,	// (0x000342b0) level_7_signal

0xb7cc,	// (0x00034262) level_1_battery

0xb7d9,	// (0x0003426f) level_2_battery

0xb7e6,	// (0x0003427c) level_3_battery

0xb7f3,	// (0x00034289) level_4_battery

0xb800,	// (0x00034296) level_5_battery

0xb80d,	// (0x000342a3) level_6_battery

0xb81a,	// (0x000342b0) level_7_battery

0xb83f,	// (0x000342d5) list_menu_pane_ParamLimits

0xb83f,	// (0x000342d5) list_menu_pane

0xb855,	// (0x000342eb) scroll_pane_cp25_ParamLimits

0xb855,	// (0x000342eb) scroll_pane_cp25

0xb86e,	// (0x00034304) list_double2_graphic_pane_cp2_ParamLimits

0xb86e,	// (0x00034304) list_double2_graphic_pane_cp2

0xb86e,	// (0x00034304) list_double2_large_graphic_pane_cp2_ParamLimits

0xb86e,	// (0x00034304) list_double2_large_graphic_pane_cp2

0xb86e,	// (0x00034304) list_double2_pane_cp2_ParamLimits

0xb86e,	// (0x00034304) list_double2_pane_cp2

0xb86e,	// (0x00034304) list_double_graphic_pane_cp2_ParamLimits

0xb86e,	// (0x00034304) list_double_graphic_pane_cp2

0xb86e,	// (0x00034304) list_double_large_graphic_pane_cp2_ParamLimits

0xb86e,	// (0x00034304) list_double_large_graphic_pane_cp2

0xb86e,	// (0x00034304) list_double_number_pane_cp2_ParamLimits

0xb86e,	// (0x00034304) list_double_number_pane_cp2

0xb86e,	// (0x00034304) list_double_pane_cp2_ParamLimits

0xb86e,	// (0x00034304) list_double_pane_cp2

0x76e0,	// (0x00030176) list_single_2graphic_pane_cp2_ParamLimits

0x76e0,	// (0x00030176) list_single_2graphic_pane_cp2

0x76e0,	// (0x00030176) list_single_graphic_heading_pane_cp2_ParamLimits

0x76e0,	// (0x00030176) list_single_graphic_heading_pane_cp2

0x76e0,	// (0x00030176) list_single_graphic_pane_cp2_ParamLimits

0x76e0,	// (0x00030176) list_single_graphic_pane_cp2

0x76e0,	// (0x00030176) list_single_heading_pane_cp2_ParamLimits

0x76e0,	// (0x00030176) list_single_heading_pane_cp2

0xb87e,	// (0x00034314) list_single_large_graphic_pane_cp2_ParamLimits

0xb87e,	// (0x00034314) list_single_large_graphic_pane_cp2

0x76e0,	// (0x00030176) list_single_number_heading_pane_cp2_ParamLimits

0x76e0,	// (0x00030176) list_single_number_heading_pane_cp2

0x76e0,	// (0x00030176) list_single_number_pane_cp2_ParamLimits

0x76e0,	// (0x00030176) list_single_number_pane_cp2

0x76e0,	// (0x00030176) list_single_pane_cp2_ParamLimits

0x76e0,	// (0x00030176) list_single_pane_cp2

0xb898,	// (0x0003432e) bg_popup_sub_pane_cp22

0x11ed,	// (0x00029c83) popup_side_volume_key_window_g1

0x1211,	// (0x00029ca7) popup_side_volume_key_window_t1

0x122d,	// (0x00029cc3) volume_small_pane_cp1

0x8cab,	// (0x00031741) bg_popup_sub_pane_cp24_ParamLimits

0x8cab,	// (0x00031741) bg_popup_sub_pane_cp24

0xb8ae,	// (0x00034344) fep_china_uni_candidate_pane_ParamLimits

0xb8ae,	// (0x00034344) fep_china_uni_candidate_pane

0xb8c2,	// (0x00034358) fep_china_uni_entry_pane

0xb8d2,	// (0x00034368) popup_fep_china_uni_window_g1

0xb8ee,	// (0x00034384) fep_china_uni_entry_pane_g1

0xb8f6,	// (0x0003438c) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x000381be) fep_china_uni_entry_pane_g

0xb8fe,	// (0x00034394) fep_entry_item_pane

0xb908,	// (0x0003439e) fep_candidate_item_pane

0xb910,	// (0x000343a6) fep_china_uni_candidate_pane_g1

0xb918,	// (0x000343ae) fep_china_uni_candidate_pane_g2

0xb920,	// (0x000343b6) fep_china_uni_candidate_pane_g3

0xb928,	// (0x000343be) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x000381c3) fep_china_uni_candidate_pane_g

0x8c53,	// (0x000316e9) fep_entry_item_pane_g1

0xb930,	// (0x000343c6) fep_entry_item_pane_t1_ParamLimits

0xb930,	// (0x000343c6) fep_entry_item_pane_t1

0xb946,	// (0x000343dc) fep_candidate_item_pane_t1_ParamLimits

0xb946,	// (0x000343dc) fep_candidate_item_pane_t1

0xb95b,	// (0x000343f1) fep_candidate_item_pane_t2_ParamLimits

0xb95b,	// (0x000343f1) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x000381cc) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x000381cc) fep_candidate_item_pane_t

0x8cc9,	// (0x0003175f) list_highlight_pane_cp31_ParamLimits

0x8cc9,	// (0x0003175f) list_highlight_pane_cp31

0xb96d,	// (0x00034403) level_1_signal_lsc

0xb976,	// (0x0003440c) level_2_signal_lsc

0xb97f,	// (0x00034415) level_3_signal_lsc

0xb988,	// (0x0003441e) level_4_signal_lsc

0xb991,	// (0x00034427) level_5_signal_lsc

0xb99a,	// (0x00034430) level_6_signal_lsc

0xb9a3,	// (0x00034439) level_7_signal_lsc

0xb9a3,	// (0x00034439) level_1_battery_lsc

0xb9ac,	// (0x00034442) level_2_battery_lsc

0xb9b5,	// (0x0003444b) level_3_battery_lsc

0xb9be,	// (0x00034454) level_4_battery_lsc

0xb9c7,	// (0x0003445d) level_5_battery_lsc

0xb9d0,	// (0x00034466) level_6_battery_lsc

0xb96d,	// (0x00034403) level_7_battery_lsc

0xb9d9,	// (0x0003446f) scroll_handle_focus_pane_g1

0xb9e2,	// (0x00034478) scroll_handle_focus_pane_g2

0xb9eb,	// (0x00034481) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x000381d1) scroll_handle_focus_pane_g

0x97e5,	// (0x0003227b) list_single_2graphic_pane_g1_ParamLimits

0x97e5,	// (0x0003227b) list_single_2graphic_pane_g1

0x9313,	// (0x00031da9) list_single_2graphic_pane_g2_ParamLimits

0x9313,	// (0x00031da9) list_single_2graphic_pane_g2

0x494f,	// (0x0002d3e5) list_single_2graphic_pane_g3_ParamLimits

0x494f,	// (0x0002d3e5) list_single_2graphic_pane_g3

0x97f1,	// (0x00032287) list_single_2graphic_pane_g4_ParamLimits

0x97f1,	// (0x00032287) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x000381d8) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x000381d8) list_single_2graphic_pane_g

0x97fd,	// (0x00032293) list_single_2graphic_pane_t1_ParamLimits

0x97fd,	// (0x00032293) list_single_2graphic_pane_t1

0x982b,	// (0x000322c1) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x982b,	// (0x000322c1) list_double2_graphic_large_graphic_pane_g1

0x935c,	// (0x00031df2) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x935c,	// (0x00031df2) list_double2_graphic_large_graphic_pane_g2

0x4b8f,	// (0x0002d625) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4b8f,	// (0x0002d625) list_double2_graphic_large_graphic_pane_g3

0x983d,	// (0x000322d3) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x983d,	// (0x000322d3) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x000381e1) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x000381e1) list_double2_graphic_large_graphic_pane_g

0x9849,	// (0x000322df) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9849,	// (0x000322df) list_double2_graphic_large_graphic_pane_t1

0x985f,	// (0x000322f5) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x985f,	// (0x000322f5) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x000381ea) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x000381ea) list_double2_graphic_large_graphic_pane_t

0xbada,	// (0x00034570) popup_fast_swap_window_ParamLimits

0xbada,	// (0x00034570) popup_fast_swap_window

0xbaf6,	// (0x0003458c) popup_side_volume_key_window

0xbb10,	// (0x000345a6) stacon_top_pane

0xbb1a,	// (0x000345b0) status_pane_ParamLimits

0xbb1a,	// (0x000345b0) status_pane

0xbb10,	// (0x000345a6) status_small_pane

0x8c5d,	// (0x000316f3) control_pane

0x8c5d,	// (0x000316f3) stacon_bottom_pane

0xb2ee,	// (0x00033d84) scroll_pane_cp121

0xb2e5,	// (0x00033d7b) set_content_pane

0x776d,	// (0x00030203) bg_active_tab_pane_g1_cp1

0xb9f4,	// (0x0003448a) bg_active_tab_pane_g2_cp1

0x7776,	// (0x0003020c) bg_active_tab_pane_g3_cp1

0x776d,	// (0x00030203) bg_passive_tab_pane_g1_cp1

0xb9f4,	// (0x0003448a) bg_passive_tab_pane_g2_cp1

0x7776,	// (0x0003020c) bg_passive_tab_pane_g3_cp1

0x777f,	// (0x00030215) bg_active_tab_pane_g1_cp2

0xb9f4,	// (0x0003448a) bg_active_tab_pane_g2_cp2

0x7788,	// (0x0003021e) bg_active_tab_pane_g3_cp2

0x777f,	// (0x00030215) bg_passive_tab_pane_g1_cp2

0xb9f4,	// (0x0003448a) bg_passive_tab_pane_g2_cp2

0x7788,	// (0x0003021e) bg_passive_tab_pane_g3_cp2

0xb9fd,	// (0x00034493) bg_active_tab_pane_g1_cp3

0xb9f4,	// (0x0003448a) bg_active_tab_pane_g2_cp3

0xba06,	// (0x0003449c) bg_active_tab_pane_g3_cp3

0xb9fd,	// (0x00034493) bg_passive_tab_pane_g1_cp3

0xb9f4,	// (0x0003448a) bg_passive_tab_pane_g2_cp3

0xba06,	// (0x0003449c) bg_passive_tab_pane_g3_cp3

0x7791,	// (0x00030227) bg_active_tab_pane_g1_cp4

0xb9f4,	// (0x0003448a) bg_active_tab_pane_g2_cp4

0x779c,	// (0x00030232) bg_active_tab_pane_g3_cp4

0x7791,	// (0x00030227) bg_passive_tab_pane_g1_cp4

0xb9f4,	// (0x0003448a) bg_passive_tab_pane_g2_cp4

0x779c,	// (0x00030232) bg_passive_tab_pane_g3_cp4

0xba4d,	// (0x000344e3) bg_active_tab_pane_g1_cp5

0xb9f4,	// (0x0003448a) bg_active_tab_pane_g2_cp5

0xba56,	// (0x000344ec) bg_active_tab_pane_g3_cp5

0xba4d,	// (0x000344e3) bg_passive_tab_pane_g1_cp5

0xb9f4,	// (0x0003448a) bg_passive_tab_pane_g2_cp5

0xba56,	// (0x000344ec) bg_passive_tab_pane_g3_cp5

0xd236,	// (0x00035ccc) list_set_graphic_pane_ParamLimits

0xd236,	// (0x00035ccc) list_set_graphic_pane

0x8c5d,	// (0x000316f3) bg_set_opt_pane_cp4

0xba5f,	// (0x000344f5) list_set_graphic_pane_g1_ParamLimits

0xba5f,	// (0x000344f5) list_set_graphic_pane_g1

0xba6b,	// (0x00034501) list_set_graphic_pane_g2_ParamLimits

0xba6b,	// (0x00034501) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x000381ef) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x000381ef) list_set_graphic_pane_g

0x0009,

0xfa0d,	// (0x000384a3) volume_small_pane_cp_g

0xba8d,	// (0x00034523) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xba8d,	// (0x00034523) list_double2_large_graphic_pane_g1_cp2

0xba99,	// (0x0003452f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xba99,	// (0x0003452f) list_double2_large_graphic_pane_g2_cp2

0xbaaa,	// (0x00034540) list_double2_large_graphic_pane_g3_cp2

0xbab2,	// (0x00034548) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbab2,	// (0x00034548) list_double2_large_graphic_pane_t1_cp2

0xbac8,	// (0x0003455e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xbac8,	// (0x0003455e) list_double2_large_graphic_pane_t2_cp2

0xd0a4,	// (0x00035b3a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd0a4,	// (0x00035b3a) list_double_large_graphic_pane_g1_cp2

0xd0b5,	// (0x00035b4b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd0b5,	// (0x00035b4b) list_double_large_graphic_pane_g2_cp2

0xbc36,	// (0x000346cc) list_double_large_graphic_pane_g3_cp2

0xd0c6,	// (0x00035b5c) list_double_large_graphic_pane_g4_cp

0xd0ce,	// (0x00035b64) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xd0ce,	// (0x00035b64) list_double_large_graphic_pane_t1_cp2

0xd0e5,	// (0x00035b7b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xd0e5,	// (0x00035b7b) list_double_large_graphic_pane_t2_cp2

0xbb28,	// (0x000345be) list_double2_graphic_pane_g1_cp2_ParamLimits

0xbb28,	// (0x000345be) list_double2_graphic_pane_g1_cp2

0xbb36,	// (0x000345cc) list_double2_graphic_pane_g2_cp2_ParamLimits

0xbb36,	// (0x000345cc) list_double2_graphic_pane_g2_cp2

0xbb47,	// (0x000345dd) list_double2_graphic_pane_g3_cp2

0xbb51,	// (0x000345e7) list_double2_graphic_pane_t1_cp2_ParamLimits

0xbb51,	// (0x000345e7) list_double2_graphic_pane_t1_cp2

0xbb67,	// (0x000345fd) list_double2_graphic_pane_t2_cp2_ParamLimits

0xbb67,	// (0x000345fd) list_double2_graphic_pane_t2_cp2

0xbb79,	// (0x0003460f) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbb79,	// (0x0003460f) list_single_number_heading_pane_g1_cp2

0xbb85,	// (0x0003461b) list_single_number_heading_pane_g2_cp2

0xbb8d,	// (0x00034623) list_single_number_heading_pane_t1_cp2_ParamLimits

0xbb8d,	// (0x00034623) list_single_number_heading_pane_t1_cp2

0xbba3,	// (0x00034639) list_single_number_heading_pane_t2_cp2_ParamLimits

0xbba3,	// (0x00034639) list_single_number_heading_pane_t2_cp2

0xbbb5,	// (0x0003464b) list_single_number_heading_pane_t3_cp2_ParamLimits

0xbbb5,	// (0x0003464b) list_single_number_heading_pane_t3_cp2

0xbb79,	// (0x0003460f) list_single_heading_pane_g1_cp2_ParamLimits

0xbb79,	// (0x0003460f) list_single_heading_pane_g1_cp2

0xbb85,	// (0x0003461b) list_single_heading_pane_g2_cp2

0xbb8d,	// (0x00034623) list_single_heading_pane_t1_cp2_ParamLimits

0xbb8d,	// (0x00034623) list_single_heading_pane_t1_cp2

0xceae,	// (0x00035944) list_single_heading_pane_t2_cp2_ParamLimits

0xceae,	// (0x00035944) list_single_heading_pane_t2_cp2

0xcdf6,	// (0x0003588c) list_double_graphic_pane_g1_cp2_ParamLimits

0xcdf6,	// (0x0003588c) list_double_graphic_pane_g1_cp2

0xce02,	// (0x00035898) list_double_graphic_pane_g2_cp2_ParamLimits

0xce02,	// (0x00035898) list_double_graphic_pane_g2_cp2

0xce11,	// (0x000358a7) list_double_graphic_pane_g3_cp2

0xce19,	// (0x000358af) list_double_graphic_pane_t1_cp2_ParamLimits

0xce19,	// (0x000358af) list_double_graphic_pane_t1_cp2

0xce2f,	// (0x000358c5) list_double_graphic_pane_t2_cp2_ParamLimits

0xce2f,	// (0x000358c5) list_double_graphic_pane_t2_cp2

0xbc2a,	// (0x000346c0) list_double_number_pane_g1_cp2_ParamLimits

0xbc2a,	// (0x000346c0) list_double_number_pane_g1_cp2

0xbc36,	// (0x000346cc) list_double_number_pane_g2_cp2

0xcdba,	// (0x00035850) list_double_number_pane_t1_cp2_ParamLimits

0xcdba,	// (0x00035850) list_double_number_pane_t1_cp2

0xcdce,	// (0x00035864) list_double_number_pane_t2_cp2_ParamLimits

0xcdce,	// (0x00035864) list_double_number_pane_t2_cp2

0xcde4,	// (0x0003587a) list_double_number_pane_t3_cp2_ParamLimits

0xcde4,	// (0x0003587a) list_double_number_pane_t3_cp2

0xcd23,	// (0x000357b9) list_single_graphic_pane_g1_cp2_ParamLimits

0xcd23,	// (0x000357b9) list_single_graphic_pane_g1_cp2

0x9871,	// (0x00032307) list_single_graphic_pane_g2_cp2_ParamLimits

0x9871,	// (0x00032307) list_single_graphic_pane_g2_cp2

0xbc8e,	// (0x00034724) list_single_graphic_pane_g3_cp2

0xccf9,	// (0x0003578f) list_single_graphic_pane_t1_cp2_ParamLimits

0xccf9,	// (0x0003578f) list_single_graphic_pane_t1_cp2

0x9871,	// (0x00032307) list_single_number_pane_g1_cp2_ParamLimits

0x9871,	// (0x00032307) list_single_number_pane_g1_cp2

0xbc8e,	// (0x00034724) list_single_number_pane_g2_cp2

0xccf9,	// (0x0003578f) list_single_number_pane_t1_cp2_ParamLimits

0xccf9,	// (0x0003578f) list_single_number_pane_t1_cp2

0xcd0f,	// (0x000357a5) list_single_number_pane_t2_cp2_ParamLimits

0xcd0f,	// (0x000357a5) list_single_number_pane_t2_cp2

0xba99,	// (0x0003452f) list_double2_pane_g1_cp2_ParamLimits

0xba99,	// (0x0003452f) list_double2_pane_g1_cp2

0xbaaa,	// (0x00034540) list_double2_pane_g2_cp2

0xbc02,	// (0x00034698) list_double2_pane_t1_cp2_ParamLimits

0xbc02,	// (0x00034698) list_double2_pane_t1_cp2

0xbc18,	// (0x000346ae) list_double2_pane_t2_cp2_ParamLimits

0xbc18,	// (0x000346ae) list_double2_pane_t2_cp2

0xbc2a,	// (0x000346c0) list_double_pane_g1_cp2_ParamLimits

0xbc2a,	// (0x000346c0) list_double_pane_g1_cp2

0xbc36,	// (0x000346cc) list_double_pane_g2_cp2

0xbc3e,	// (0x000346d4) list_double_pane_t1_cp2_ParamLimits

0xbc3e,	// (0x000346d4) list_double_pane_t1_cp2

0xbc54,	// (0x000346ea) list_double_pane_t2_cp2_ParamLimits

0xbc54,	// (0x000346ea) list_double_pane_t2_cp2

0xbc7e,	// (0x00034714) list_single_pane_cp2_g3

0x9871,	// (0x00032307) list_single_pane_g1_cp2_ParamLimits

0x9871,	// (0x00032307) list_single_pane_g1_cp2

0xbc8e,	// (0x00034724) list_single_pane_g2_cp2

0xbc96,	// (0x0003472c) list_single_pane_t1_cp2_ParamLimits

0xbc96,	// (0x0003472c) list_single_pane_t1_cp2

0xbcae,	// (0x00034744) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xbcae,	// (0x00034744) list_single_large_graphic_pane_g1_cp2

0xbcba,	// (0x00034750) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xbcba,	// (0x00034750) list_single_large_graphic_pane_g2_cp2

0xbcc6,	// (0x0003475c) list_single_large_graphic_pane_g3_cp2

0xbcce,	// (0x00034764) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xbcce,	// (0x00034764) list_single_large_graphic_pane_g4_cp1

0xbce8,	// (0x0003477e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xbce8,	// (0x0003477e) list_single_large_graphic_pane_t1_cp2

0xccc5,	// (0x0003575b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xccc5,	// (0x0003575b) list_single_graphic_heading_pane_g1_cp2

0xcc92,	// (0x00035728) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xcc92,	// (0x00035728) list_single_graphic_heading_pane_g4_cp2

0xbc8e,	// (0x00034724) list_single_graphic_heading_pane_g5_cp2

0xccd1,	// (0x00035767) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xccd1,	// (0x00035767) list_single_graphic_heading_pane_t1_cp2

0xcce7,	// (0x0003577d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xcce7,	// (0x0003577d) list_single_graphic_heading_pane_t2_cp2

0xcc86,	// (0x0003571c) list_single_2graphic_pane_g1_cp2_ParamLimits

0xcc86,	// (0x0003571c) list_single_2graphic_pane_g1_cp2

0xcc92,	// (0x00035728) list_single_2graphic_pane_g2_cp2_ParamLimits

0xcc92,	// (0x00035728) list_single_2graphic_pane_g2_cp2

0xbc8e,	// (0x00034724) list_single_2graphic_pane_g3_cp2

0xcca3,	// (0x00035739) list_single_2graphic_pane_g4_cp2_ParamLimits

0xcca3,	// (0x00035739) list_single_2graphic_pane_g4_cp2

0xccaf,	// (0x00035745) list_single_2graphic_pane_t1_cp2_ParamLimits

0xccaf,	// (0x00035745) list_single_2graphic_pane_t1_cp2

0x8c53,	// (0x000316e9) list_highlight_pane_g10_cp1

0xc87c,	// (0x00035312) list_highlight_pane_g1_cp1

0xc884,	// (0x0003531a) list_highlight_pane_g2_cp1

0xc88c,	// (0x00035322) list_highlight_pane_g3_cp1

0xc894,	// (0x0003532a) list_highlight_pane_g4_cp1

0xc89c,	// (0x00035332) list_highlight_pane_g5_cp1

0xc8a4,	// (0x0003533a) list_highlight_pane_g6_cp1

0xc8ac,	// (0x00035342) list_highlight_pane_g7_cp1

0xc8b4,	// (0x0003534a) list_highlight_pane_g8_cp1

0xc8bc,	// (0x00035352) list_highlight_pane_g9_cp1

0x85d6,	// (0x0003106c) form_field_slider_pane_t3

0x85e6,	// (0x0003107c) form_field_slider_pane_t4

0xc7b0,	// (0x00035246) slider_form_pane_ParamLimits

0xc7b0,	// (0x00035246) slider_form_pane

0x8c5d,	// (0x000316f3) control_abbreviations

0x8c5d,	// (0x000316f3) control_conventions

0x8c5d,	// (0x000316f3) control_definitions

0x8c5d,	// (0x000316f3) format_table_attribute

0xcef8,	// (0x0003598e) bg_popup_preview_window_pane_g9

0x8c5d,	// (0x000316f3) format_table_data2

0x8c5d,	// (0x000316f3) format_table_data3

0x8c5d,	// (0x000316f3) format_table_data_example

0x0008,

0x8c5d,	// (0x000316f3) intro_purpose

0x0031,	// (0x00028ac7) bg_popup_preview_window_pane_g

0x8c5d,	// (0x000316f3) texts_category

0x8c5d,	// (0x000316f3) texts_graphics

0xbcfe,	// (0x00034794) text_digital

0xbd0d,	// (0x000347a3) text_primary

0xbd1c,	// (0x000347b2) text_primary_small

0xbd2b,	// (0x000347c1) text_secondary

0xbd3a,	// (0x000347d0) text_title

0xd39a,	// (0x00035e30) bg_passive_tab_pane_g1_cp3_srt

0xb9f4,	// (0x0003448a) bg_passive_tab_pane_g2_cp3_srt

0xd3a3,	// (0x00035e39) bg_passive_tab_pane_g3_cp3_srt

0x8cab,	// (0x00031741) bg_active_tab_pane_cp3_srt_ParamLimits

0x8cab,	// (0x00031741) bg_active_tab_pane_cp3_srt

0xd3ac,	// (0x00035e42) tabs_4_active_pane_srt_g1

0x9de9,	// (0x0003287f) tabs_4_active_pane_srt_t1_ParamLimits

0x9de9,	// (0x0003287f) tabs_4_active_pane_srt_t1

0xd39a,	// (0x00035e30) bg_active_tab_pane_g1_cp3_copy1

0xb9f4,	// (0x0003448a) bg_active_tab_pane_g2_cp3_copy1

0xd3a3,	// (0x00035e39) bg_active_tab_pane_g3_cp3_copy1

0x8cc9,	// (0x0003175f) tabs_2_long_active_pane_srt_ParamLimits

0x8cc9,	// (0x0003175f) tabs_2_long_active_pane_srt

0x8cc9,	// (0x0003175f) tabs_2_long_passive_pane_srt_ParamLimits

0x8cc9,	// (0x0003175f) tabs_2_long_passive_pane_srt

0xb464,	// (0x00033efa) bg_passive_tab_pane_cp4_srt_ParamLimits

0xb464,	// (0x00033efa) bg_passive_tab_pane_cp4_srt

0xd2b6,	// (0x00035d4c) bg_passive_tab_pane_g1_cp4_srt

0xb9f4,	// (0x0003448a) bg_passive_tab_pane_g2_cp4_srt

0xd2bf,	// (0x00035d55) bg_passive_tab_pane_g3_cp4_srt

0x8cc9,	// (0x0003175f) bg_active_tab_pane_cp4_srt_ParamLimits

0x8cc9,	// (0x0003175f) bg_active_tab_pane_cp4_srt

0x9c16,	// (0x000326ac) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9c16,	// (0x000326ac) tabs_2_long_active_pane_srt_t1

0xd2b6,	// (0x00035d4c) bg_active_tab_pane_g1_cp4_srt

0xb9f4,	// (0x0003448a) bg_active_tab_pane_g2_cp4_srt

0xd2bf,	// (0x00035d55) bg_active_tab_pane_g3_cp4_srt

0x8cab,	// (0x00031741) tabs_3_long_active_pane_srt_ParamLimits

0x8cab,	// (0x00031741) tabs_3_long_active_pane_srt

0x8cab,	// (0x00031741) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8cab,	// (0x00031741) tabs_3_long_passive_pane_cp_srt

0x8cab,	// (0x00031741) tabs_3_long_passive_pane_srt_ParamLimits

0x8cab,	// (0x00031741) tabs_3_long_passive_pane_srt

0xb464,	// (0x00033efa) bg_passive_tab_pane_cp5_srt_ParamLimits

0xb464,	// (0x00033efa) bg_passive_tab_pane_cp5_srt

0xba4d,	// (0x000344e3) bg_passive_tab_pane_g1_cp5_srt

0xb9f4,	// (0x0003448a) bg_passive_tab_pane_g2_cp5_srt

0xba56,	// (0x000344ec) bg_passive_tab_pane_g3_cp5_srt

0x8cc9,	// (0x0003175f) bg_active_tab_pane_cp5_srt_ParamLimits

0x8cc9,	// (0x0003175f) bg_active_tab_pane_cp5_srt

0x9c00,	// (0x00032696) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9c00,	// (0x00032696) tabs_3_long_active_pane_srt_t1

0xba4d,	// (0x000344e3) bg_active_tab_pane_g1_cp5_srt

0xb9f4,	// (0x0003448a) bg_active_tab_pane_g2_cp5_srt

0xba56,	// (0x000344ec) bg_active_tab_pane_g3_cp5_srt

0xd2a8,	// (0x00035d3e) navi_text_pane_srt_t1

0xd2a0,	// (0x00035d36) navi_icon_pane_srt_g1

0xbe4a,	// (0x000348e0) midp_editing_number_pane_srt

0xbd49,	// (0x000347df) midp_ticker_pane_srt

0xbe52,	// (0x000348e8) midp_ticker_pane_srt_g1

0xbe5a,	// (0x000348f0) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x0003820e) midp_ticker_pane_srt_g

0xbe62,	// (0x000348f8) midp_ticker_pane_srt_t1

0xd291,	// (0x00035d27) midp_editing_number_pane_t1_copy1

0xb464,	// (0x00033efa) listscroll_midp_pane

0xb464,	// (0x00033efa) midp_form_pane

0xbd51,	// (0x000347e7) midp_info_popup_window_ParamLimits

0xbd51,	// (0x000347e7) midp_info_popup_window

0xb3ab,	// (0x00033e41) bg_popup_sub_pane_cp50_ParamLimits

0xb3ab,	// (0x00033e41) bg_popup_sub_pane_cp50

0xc4cd,	// (0x00034f63) listscroll_midp_info_pane_ParamLimits

0xc4cd,	// (0x00034f63) listscroll_midp_info_pane

0xc4b5,	// (0x00034f4b) listscroll_form_midp_pane_ParamLimits

0xc4b5,	// (0x00034f4b) listscroll_form_midp_pane

0xc4c1,	// (0x00034f57) scroll_bar_cp050

0x85ca,	// (0x00031060) list_midp_pane

0xdcff,	// (0x00036795) signal_pane_g2_cp

0xc3e7,	// (0x00034e7d) listscroll_midp_info_pane_t1_ParamLimits

0xc3e7,	// (0x00034e7d) listscroll_midp_info_pane_t1

0xc3ff,	// (0x00034e95) listscroll_midp_info_pane_t2_ParamLimits

0xc3ff,	// (0x00034e95) listscroll_midp_info_pane_t2

0xc43d,	// (0x00034ed3) listscroll_midp_info_pane_t3_ParamLimits

0xc43d,	// (0x00034ed3) listscroll_midp_info_pane_t3

0xc477,	// (0x00034f0d) listscroll_midp_info_pane_t4_ParamLimits

0xc477,	// (0x00034f0d) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x000382c1) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x000382c1) listscroll_midp_info_pane_t

0xb42b,	// (0x00033ec1) scroll_pane_cp21

0xc389,	// (0x00034e1f) form_midp_field_choice_group_pane

0xc392,	// (0x00034e28) form_midp_field_text_pane

0xc3cd,	// (0x00034e63) form_midp_field_time_pane

0xc3d5,	// (0x00034e6b) form_midp_gauge_slider_pane

0xc3de,	// (0x00034e74) form_midp_gauge_wait_pane

0x8c5d,	// (0x000316f3) form_midp_image_pane

0x987d,	// (0x00032313) list_single_midp_pane_ParamLimits

0x987d,	// (0x00032313) list_single_midp_pane

0x85a7,	// (0x0003103d) form_midp_field_text_pane_t1

0xc20b,	// (0x00034ca1) input_focus_pane_cp050

0xc378,	// (0x00034e0e) list_midp_form_text_pane

0xc347,	// (0x00034ddd) form_midp_field_choice_group_pane_t1

0xc355,	// (0x00034deb) input_focus_pane_cp051

0xc369,	// (0x00034dff) list_midp_choice_pane

0x8c5d,	// (0x000316f3) status_idle_pane

0xc32b,	// (0x00034dc1) form_midp_field_time_pane_t1

0x8c53,	// (0x000316e9) wait_anim_pane_g2_copy1

0xc339,	// (0x00034dcf) form_midp_field_time_pane_t2

0x0001,

0xbdbc,	// (0x00034852) aid_navinavi_width_2_pane

0xf826,	// (0x000382bc) form_midp_field_time_pane_t

0x8c5d,	// (0x000316f3) input_focus_pane_cp052

0x8c5d,	// (0x000316f3) bg_input_focus_pane_cp040

0xc307,	// (0x00034d9d) form_midp_gauge_slider_pane_t1

0xc315,	// (0x00034dab) form_midp_gauge_slider_pane_t2

0x8587,	// (0x0003101d) form_midp_gauge_slider_pane_t3

0x8597,	// (0x0003102d) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x000382b3) form_midp_gauge_slider_pane_t

0xc323,	// (0x00034db9) form_midp_slider_pane

0x8cc9,	// (0x0003175f) bg_input_focus_pane_cp041_ParamLimits

0x8cc9,	// (0x0003175f) bg_input_focus_pane_cp041

0xc2d4,	// (0x00034d6a) form_midp_gauge_wait_pane_t1_ParamLimits

0xc2d4,	// (0x00034d6a) form_midp_gauge_wait_pane_t1

0xc2e6,	// (0x00034d7c) form_midp_gauge_wait_pane_t2_ParamLimits

0xc2e6,	// (0x00034d7c) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x000382ae) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x000382ae) form_midp_gauge_wait_pane_t

0xc2f8,	// (0x00034d8e) form_midp_wait_pane_ParamLimits

0xc2f8,	// (0x00034d8e) form_midp_wait_pane

0xc29e,	// (0x00034d34) form_midp_image_pane_g1

0xc2a7,	// (0x00034d3d) form_midp_image_pane_t1

0xc2b6,	// (0x00034d4c) form_midp_image_pane_t2

0xc2c5,	// (0x00034d5b) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x000382a7) form_midp_image_pane_t

0xc295,	// (0x00034d2b) list_single_midp_pane_g1

0x50b5,	// (0x0002db4b) list_single_midp_pane_t1

0x8571,	// (0x00031007) list_midp_form_item_pane_ParamLimits

0x8571,	// (0x00031007) list_midp_form_item_pane

0xbd64,	// (0x000347fa) list_midp_form_item_pane_t1

0xbd73,	// (0x00034809) midp_ticker_pane_g1

0xbd7f,	// (0x00034815) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x000381f4) midp_ticker_pane_g

0xbd8b,	// (0x00034821) midp_ticker_pane_t1

0xd341,	// (0x00035dd7) midp_editing_number_pane_t1

0xd31f,	// (0x00035db5) midp_editing_number_pane

0xd32e,	// (0x00035dc4) midp_ticker_pane

0xd281,	// (0x00035d17) ai_message_heading_pane

0x8c5d,	// (0x000316f3) bg_popup_window_pane_cp14

0xd289,	// (0x00035d1f) listscroll_ai_message_pane

0xd1ec,	// (0x00035c82) ai_message_heading_pane_g1_ParamLimits

0xd1ec,	// (0x00035c82) ai_message_heading_pane_g1

0xd1f8,	// (0x00035c8e) ai_message_heading_pane_g2_ParamLimits

0xd1f8,	// (0x00035c8e) ai_message_heading_pane_g2

0xd204,	// (0x00035c9a) ai_message_heading_pane_g3_ParamLimits

0xd204,	// (0x00035c9a) ai_message_heading_pane_g3

0xd210,	// (0x00035ca6) ai_message_heading_pane_g4_ParamLimits

0xd210,	// (0x00035ca6) ai_message_heading_pane_g4

0x0003,

0x0093,	// (0x00028b29) ai_message_heading_pane_g_ParamLimits

0x0093,	// (0x00028b29) ai_message_heading_pane_g

0xd21c,	// (0x00035cb2) ai_message_heading_pane_t1_ParamLimits

0xd21c,	// (0x00035cb2) ai_message_heading_pane_t1

0xd255,	// (0x00035ceb) ai_message_heading_pane_t2_ParamLimits

0xd255,	// (0x00035ceb) ai_message_heading_pane_t2

0x0001,

0xf90d,	// (0x000383a3) ai_message_heading_pane_t_ParamLimits

0xf90d,	// (0x000383a3) ai_message_heading_pane_t

0xd267,	// (0x00035cfd) bg_popup_heading_pane_cp1_ParamLimits

0xd267,	// (0x00035cfd) bg_popup_heading_pane_cp1

0xd1da,	// (0x00035c70) list_ai_message_pane_ParamLimits

0xd1da,	// (0x00035c70) list_ai_message_pane

0xb42b,	// (0x00033ec1) scroll_pane_cp10

0xd176,	// (0x00035c0c) list_ai_message_pane_g1

0xd17e,	// (0x00035c14) list_ai_message_pane_g2

0x0001,

0x0070,	// (0x00028b06) list_ai_message_pane_g

0xd186,	// (0x00035c1c) list_ai_message_pane_t1_ParamLimits

0xd186,	// (0x00035c1c) list_ai_message_pane_t1

0xd19b,	// (0x00035c31) list_ai_message_pane_t2_ParamLimits

0xd19b,	// (0x00035c31) list_ai_message_pane_t2

0xd1b0,	// (0x00035c46) list_ai_message_pane_t3_ParamLimits

0xd1b0,	// (0x00035c46) list_ai_message_pane_t3

0xd1c5,	// (0x00035c5b) list_ai_message_pane_t4_ParamLimits

0xd1c5,	// (0x00035c5b) list_ai_message_pane_t4

0x0003,

0x0075,	// (0x00028b0b) list_ai_message_pane_t_ParamLimits

0x0075,	// (0x00028b0b) list_ai_message_pane_t

0x9bde,	// (0x00032674) cell_ai_soft_ind_pane_ParamLimits

0x9bde,	// (0x00032674) cell_ai_soft_ind_pane

0xbd9d,	// (0x00034833) cell_ai_soft_ind_pane_g1_ParamLimits

0xbd9d,	// (0x00034833) cell_ai_soft_ind_pane_g1

0x8c5d,	// (0x000316f3) grid_highlight_cp1

0xbdaa,	// (0x00034840) text_secondary_cp56_ParamLimits

0xbdaa,	// (0x00034840) text_secondary_cp56

0xd14b,	// (0x00035be1) example_general_pane_ParamLimits

0xd14b,	// (0x00035be1) example_general_pane

0xd157,	// (0x00035bed) example_parent_pane_g1_ParamLimits

0xd157,	// (0x00035bed) example_parent_pane_g1

0xd163,	// (0x00035bf9) example_parent_pane_t1_ParamLimits

0xd163,	// (0x00035bf9) example_parent_pane_t1

0x7dbe,	// (0x00030854) popup_preview_text_window_ParamLimits

0x7dbe,	// (0x00030854) popup_preview_text_window

0xbc86,	// (0x0003471c) list_single_pane_cp2_g4

0x8e98,	// (0x0003192e) bg_popup_preview_window_pane_ParamLimits

0x8e98,	// (0x0003192e) bg_popup_preview_window_pane

0xcf00,	// (0x00035996) popup_preview_text_window_t1_ParamLimits

0xcf00,	// (0x00035996) popup_preview_text_window_t1

0xcf1e,	// (0x000359b4) popup_preview_text_window_t2_ParamLimits

0xcf1e,	// (0x000359b4) popup_preview_text_window_t2

0xcf67,	// (0x000359fd) popup_preview_text_window_t3_ParamLimits

0xcf67,	// (0x000359fd) popup_preview_text_window_t3

0xcfac,	// (0x00035a42) popup_preview_text_window_t4_ParamLimits

0xcfac,	// (0x00035a42) popup_preview_text_window_t4

0x0004,

0x0044,	// (0x00028ada) popup_preview_text_window_t_ParamLimits

0x0044,	// (0x00028ada) popup_preview_text_window_t

0xd02a,	// (0x00035ac0) scroll_pane_cp11

0xc197,	// (0x00034c2d) bg_popup_preview_window_pane_g1

0xcec0,	// (0x00035956) bg_popup_preview_window_pane_g2

0xcec8,	// (0x0003595e) bg_popup_preview_window_pane_g3

0xced0,	// (0x00035966) bg_popup_preview_window_pane_g4

0xced8,	// (0x0003596e) bg_popup_preview_window_pane_g5

0xcee0,	// (0x00035976) bg_popup_preview_window_pane_g6

0xcee8,	// (0x0003597e) bg_popup_preview_window_pane_g7

0xcef0,	// (0x00035986) bg_popup_preview_window_pane_g8

0x0701,	// (0x00029197) aid_popup_width_pane

0x7d3a,	// (0x000307d0) popup_midp_note_alarm_window_ParamLimits

0x7d3a,	// (0x000307d0) popup_midp_note_alarm_window

0xb2ff,	// (0x00033d95) data_form_pane_ParamLimits

0x96b8,	// (0x0003214e) form_field_data_pane_g1

0x96c2,	// (0x00032158) form_field_data_pane_t1_ParamLimits

0xb30b,	// (0x00033da1) input_focus_pane_ParamLimits

0x4de1,	// (0x0002d877) data_form_wide_pane_ParamLimits

0x4df2,	// (0x0002d888) form_field_data_wide_pane_g1

0x4dfe,	// (0x0002d894) form_field_data_wide_pane_t1_ParamLimits

0x908b,	// (0x00031b21) input_focus_pane_cp6_ParamLimits

0x75b9,	// (0x0003004f) input_popup_find_pane_g1_ParamLimits

0x75b9,	// (0x0003004f) input_popup_find_pane_g1

0x0f82,	// (0x00029a18) aid_navi_side_left_pane

0x0f97,	// (0x00029a2d) aid_navi_side_right_pane

0xc959,	// (0x000353ef) bg_popup_window_pane_cp30_ParamLimits

0xc959,	// (0x000353ef) bg_popup_window_pane_cp30

0xc9d3,	// (0x00035469) popup_midp_note_alarm_window_g1_ParamLimits

0xc9d3,	// (0x00035469) popup_midp_note_alarm_window_g1

0xca03,	// (0x00035499) popup_midp_note_alarm_window_t1_ParamLimits

0xca03,	// (0x00035499) popup_midp_note_alarm_window_t1

0xcaa4,	// (0x0003553a) popup_midp_note_alarm_window_t2_ParamLimits

0xcaa4,	// (0x0003553a) popup_midp_note_alarm_window_t2

0xcb52,	// (0x000355e8) popup_midp_note_alarm_window_t3_ParamLimits

0xcb52,	// (0x000355e8) popup_midp_note_alarm_window_t3

0xcb84,	// (0x0003561a) popup_midp_note_alarm_window_t4_ParamLimits

0xcb84,	// (0x0003561a) popup_midp_note_alarm_window_t4

0xcbaa,	// (0x00035640) popup_midp_note_alarm_window_t5_ParamLimits

0xcbaa,	// (0x00035640) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x00038336) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x00038336) popup_midp_note_alarm_window_t

0xcc56,	// (0x000356ec) wait_bar_pane_cp1_ParamLimits

0xcc56,	// (0x000356ec) wait_bar_pane_cp1

0x8c5d,	// (0x000316f3) wait_anim_pane_copy1

0x8c5d,	// (0x000316f3) wait_border_pane_copy1

0xc671,	// (0x00035107) wait_border_pane_g1_copy1

0x4e18,	// (0x0002d8ae) form_field_popup_pane_g1

0x96e8,	// (0x0003217e) form_field_popup_pane_t1_ParamLimits

0xb30b,	// (0x00033da1) input_focus_pane_cp7_ParamLimits

0xb32d,	// (0x00033dc3) list_form_pane_ParamLimits

0x4e3a,	// (0x0002d8d0) form_field_popup_wide_pane_g1

0x4e42,	// (0x0002d8d8) form_field_popup_wide_pane_t1_ParamLimits

0xb30b,	// (0x00033da1) input_focus_pane_cp8_ParamLimits

0xb339,	// (0x00033dcf) list_form_wide_pane_ParamLimits

0xd3d3,	// (0x00035e69) aid_size_cell_graphic_pane

0x9767,	// (0x000321fd) data_form_pane_t1_ParamLimits

0x98aa,	// (0x00032340) data_form_wide_pane_t1_ParamLimits

0x8180,	// (0x00030c16) bg_status_flat_pane

0x727d,	// (0x0002fd13) title_pane_t1_ParamLimits

0x8c73,	// (0x00031709) title_pane_t2_ParamLimits

0x8c99,	// (0x0003172f) title_pane_t3_ParamLimits

0xf55d,	// (0x00037ff3) title_pane_t_ParamLimits

0xb7cc,	// (0x00034262) level_1_signal_ParamLimits

0xb7d9,	// (0x0003426f) level_2_signal_ParamLimits

0xb7e6,	// (0x0003427c) level_3_signal_ParamLimits

0xb7f3,	// (0x00034289) level_4_signal_ParamLimits

0xb800,	// (0x00034296) level_5_signal_ParamLimits

0xb80d,	// (0x000342a3) level_6_signal_ParamLimits

0xb81a,	// (0x000342b0) level_7_signal_ParamLimits

0xb7cc,	// (0x00034262) level_1_battery_ParamLimits

0xb7d9,	// (0x0003426f) level_2_battery_ParamLimits

0xb7e6,	// (0x0003427c) level_3_battery_ParamLimits

0xb7f3,	// (0x00034289) level_4_battery_ParamLimits

0xb800,	// (0x00034296) level_5_battery_ParamLimits

0xb80d,	// (0x000342a3) level_6_battery_ParamLimits

0xb81a,	// (0x000342b0) level_7_battery_ParamLimits

0xc87c,	// (0x00035312) bg_status_flat_pane_g1

0xc884,	// (0x0003531a) bg_status_flat_pane_g2

0xc88c,	// (0x00035322) bg_status_flat_pane_g3

0xc894,	// (0x0003532a) bg_status_flat_pane_g4

0xc89c,	// (0x00035332) bg_status_flat_pane_g5

0xc8a4,	// (0x0003533a) bg_status_flat_pane_g6

0xc8ac,	// (0x00035342) bg_status_flat_pane_g7

0x7309,	// (0x0002fd9f) tabs_3_active_pane_t1_ParamLimits

0x7309,	// (0x0002fd9f) tabs_3_passive_pane_t1_ParamLimits

0x731b,	// (0x0002fdb1) tabs_4_active_pane_t1_ParamLimits

0x731b,	// (0x0002fdb1) tabs_4_1_passive_pane_t1_ParamLimits

0x75cf,	// (0x00030065) tabs_2_active_pane_t1_ParamLimits

0x75cf,	// (0x00030065) tabs_2_passive_pane_t1_ParamLimits

0x8cc9,	// (0x0003175f) bg_active_tab_pane_cp4_ParamLimits

0x75e1,	// (0x00030077) tabs_2_long_active_pane_t1_ParamLimits

0xb464,	// (0x00033efa) bg_passive_tab_pane_cp4_ParamLimits

0x1fff,	// (0x0002aa95) list_single_midp_graphic_pane_t1_ParamLimits

0x8cc9,	// (0x0003175f) bg_active_tab_pane_cp5_ParamLimits

0x75f4,	// (0x0003008a) tabs_3_long_active_pane_t1_ParamLimits

0xb464,	// (0x00033efa) bg_passive_tab_pane_cp5_ParamLimits

0x1fff,	// (0x0002aa95) list_single_midp_graphic_pane_t1

0x8180,	// (0x00030c16) bg_status_flat_pane_ParamLimits

0xc068,	// (0x00034afe) indicator_pane_cp2_ParamLimits

0xc068,	// (0x00034afe) indicator_pane_cp2

0x82fe,	// (0x00030d94) navi_pane_srt_ParamLimits

0x82fe,	// (0x00030d94) navi_pane_srt

0xc090,	// (0x00034b26) popup_clock_digital_analogue_window_cp1

0x8d0d,	// (0x000317a3) indicator_pane_t1

0xbd49,	// (0x000347df) copy_highlight_pane

0xbd49,	// (0x000347df) cursor_graphics_pane

0xbd49,	// (0x000347df) graphic_within_text_pane

0xbd49,	// (0x000347df) link_highlight_pane

0xcfed,	// (0x00035a83) popup_preview_text_window_t5_ParamLimits

0xcfed,	// (0x00035a83) popup_preview_text_window_t5

0xbdc4,	// (0x0003485a) cursor_digital_pane

0xbdc4,	// (0x0003485a) cursor_primary_pane

0xbdd5,	// (0x0003486b) cursor_primary_small_pane

0xbddd,	// (0x00034873) cursor_secondary_pane

0xbde5,	// (0x0003487b) cursor_title_pane

0xbdc4,	// (0x0003485a) link_highlight_digital_pane

0xbdcc,	// (0x00034862) link_highlight_primary_pane

0xbdd5,	// (0x0003486b) link_highlight_primary_small_pane

0xbddd,	// (0x00034873) link_highlight_secondary_pane

0xbde5,	// (0x0003487b) link_highlight_title_pane

0xbdc4,	// (0x0003485a) copy_highlight_digital_pane

0xbdc4,	// (0x0003485a) copy_highlight_primary_pane

0xbdd5,	// (0x0003486b) copy_highlight_primary_small_pane

0xbddd,	// (0x00034873) copy_highlight_secondary_pane

0xbde5,	// (0x0003487b) copy_highlight_title_pane

0xbddd,	// (0x00034873) graphic_text_digital_pane

0xc8fc,	// (0x00035392) graphic_text_primary_pane

0xc905,	// (0x0003539b) graphic_text_primary_small_pane

0xbdd5,	// (0x0003486b) graphic_text_secondary_pane

0xbdc4,	// (0x0003485a) graphic_text_title_pane

0x7842,	// (0x000302d8) cursor_primary_pane_g1

0xc8ee,	// (0x00035384) cursor_text_primary_t1

0x860a,	// (0x000310a0) cursor_primary_small_pane_g1

0xc8e0,	// (0x00035376) cursor_text_primary_small_t1

0x8600,	// (0x00031096) cursor_primary_small_pane_g1_copy1

0xc8d2,	// (0x00035368) cursor_text_primary_small_t1_copy1

0xc8c4,	// (0x0003535a) cursor_text_title_t1

0x85f6,	// (0x0003108c) cursor_title_pane_g1

0x7842,	// (0x000302d8) cursor_digital_pane_g1

0xbded,	// (0x00034883) cursor_text_digital_t1

0xc865,	// (0x000352fb) link_highlight_primary_pane_g1

0xc86d,	// (0x00035303) link_highlight_primary_pane_t1

0xbdfb,	// (0x00034891) link_highlight_primary_small_pane_g1

0xbe03,	// (0x00034899) link_highlight_primary_small_pane_t1

0xbdfb,	// (0x00034891) link_highlight_secondary_pane_g1

0xbe12,	// (0x000348a8) link_highlight_secondary_pane_t1

0xc7d9,	// (0x0003526f) link_highlight_title_pane_g1

0xc7e1,	// (0x00035277) link_highlight_title_pane_t1

0xc7c2,	// (0x00035258) link_highlight_digital_pane_g1

0xc7ca,	// (0x00035260) link_highlight_digital_pane_t1

0xc6b6,	// (0x0003514c) copy_highlight_primary_pane_g1

0xc6be,	// (0x00035154) copy_highlight_primary_pane_t1

0xc690,	// (0x00035126) copy_highlight_primary_small_pane_g1

0xc6a7,	// (0x0003513d) copy_highlight_primary_small_pane_t1

0xbe21,	// (0x000348b7) copy_highlight_secondary_pane_g1

0xbe29,	// (0x000348bf) copy_highlight_secondary_pane_t1

0xc690,	// (0x00035126) copy_highlight_title_pane_g1

0xc698,	// (0x0003512e) copy_highlight_title_pane_t1

0xc6b6,	// (0x0003514c) copy_highlight_digital_pane_g1

0xd5b5,	// (0x0003604b) copy_highlight_digital_pane_t1

0xd4ad,	// (0x00035f43) graphic_text_primary_pane_g1

0xd53d,	// (0x00035fd3) graphic_text_primary_pane_t1

0xd5a7,	// (0x0003603d) graphic_text_primary_pane_t2

0x0001,

0xf981,	// (0x00038417) graphic_text_primary_pane_t

0xd519,	// (0x00035faf) graphic_text_primary_small_pane_g1

0xd521,	// (0x00035fb7) graphic_text_primary_small_pane_t1

0xd52f,	// (0x00035fc5) graphic_text_primary_small_pane_t2

0x0001,

0xf97c,	// (0x00038412) graphic_text_primary_small_pane_t

0xd4f5,	// (0x00035f8b) graphic_text_secondary_pane_g1

0xd4fd,	// (0x00035f93) graphic_text_secondary_pane_t1

0xd50b,	// (0x00035fa1) graphic_text_secondary_pane_t2

0x0001,

0xf977,	// (0x0003840d) graphic_text_secondary_pane_t

0xd4d1,	// (0x00035f67) graphic_text_title_pane_g1

0xd4d9,	// (0x00035f6f) graphic_text_title_pane_t1

0xd4e7,	// (0x00035f7d) graphic_text_title_pane_t2

0x0001,

0xf972,	// (0x00038408) graphic_text_title_pane_t

0xd4ad,	// (0x00035f43) graphic_text_digital_pane_g1

0xd4b5,	// (0x00035f4b) graphic_text_digital_pane_t1

0xd4c3,	// (0x00035f59) graphic_text_digital_pane_t2

0x0001,

0xf96d,	// (0x00038403) graphic_text_digital_pane_t

0x8cc9,	// (0x0003175f) navi_icon_pane_srt_ParamLimits

0x8cc9,	// (0x0003175f) navi_icon_pane_srt

0x8c5d,	// (0x000316f3) navi_midp_pane_srt

0x8c5d,	// (0x000316f3) navi_navi_pane_srt

0x8cc9,	// (0x0003175f) navi_text_pane_srt_ParamLimits

0x8cc9,	// (0x0003175f) navi_text_pane_srt

0xd478,	// (0x00035f0e) navi_navi_icon_text_pane_srt

0xd480,	// (0x00035f16) navi_navi_pane_srt_g1_ParamLimits

0xd480,	// (0x00035f16) navi_navi_pane_srt_g1

0xd492,	// (0x00035f28) navi_navi_pane_srt_g2_ParamLimits

0xd492,	// (0x00035f28) navi_navi_pane_srt_g2

0x0001,

0xf968,	// (0x000383fe) navi_navi_pane_srt_g_ParamLimits

0xf968,	// (0x000383fe) navi_navi_pane_srt_g

0xd4a4,	// (0x00035f3a) navi_navi_tabs_pane_srt

0xd478,	// (0x00035f0e) navi_navi_text_pane_srt

0xd478,	// (0x00035f0e) navi_navi_volume_pane_srt

0xd469,	// (0x00035eff) navi_navi_text_pane_srt_t1

0x281d,	// (0x0002b2b3) navi_navi_volume_pane_srt_g1

0x2825,	// (0x0002b2bb) volume_small_pane_srt_ParamLimits

0x2825,	// (0x0002b2bb) volume_small_pane_srt

0x1483,	// (0x00029f19) volume_small_pane_srt_g1_ParamLimits

0x1483,	// (0x00029f19) volume_small_pane_srt_g1

0x1493,	// (0x00029f29) volume_small_pane_srt_g2_ParamLimits

0x1493,	// (0x00029f29) volume_small_pane_srt_g2

0x14a4,	// (0x00029f3a) volume_small_pane_srt_g3_ParamLimits

0x14a4,	// (0x00029f3a) volume_small_pane_srt_g3

0x14b5,	// (0x00029f4b) volume_small_pane_srt_g4_ParamLimits

0x14b5,	// (0x00029f4b) volume_small_pane_srt_g4

0x14c6,	// (0x00029f5c) volume_small_pane_srt_g5_ParamLimits

0x14c6,	// (0x00029f5c) volume_small_pane_srt_g5

0x14d7,	// (0x00029f6d) volume_small_pane_srt_g6_ParamLimits

0x14d7,	// (0x00029f6d) volume_small_pane_srt_g6

0x14e8,	// (0x00029f7e) volume_small_pane_srt_g7_ParamLimits

0x14e8,	// (0x00029f7e) volume_small_pane_srt_g7

0x14f9,	// (0x00029f8f) volume_small_pane_srt_g8_ParamLimits

0x14f9,	// (0x00029f8f) volume_small_pane_srt_g8

0x150a,	// (0x00029fa0) volume_small_pane_srt_g9_ParamLimits

0x150a,	// (0x00029fa0) volume_small_pane_srt_g9

0x151b,	// (0x00029fb1) volume_small_pane_srt_g10_ParamLimits

0x151b,	// (0x00029fb1) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x000381f9) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x000381f9) volume_small_pane_srt_g

0x8f41,	// (0x000319d7) query_popup_data_pane_cp2

0xd44f,	// (0x00035ee5) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xd44f,	// (0x00035ee5) navi_navi_icon_text_pane_srt_t1

0xc8fc,	// (0x00035392) navi_tabs_2_long_pane_srt

0xc8fc,	// (0x00035392) navi_tabs_2_pane_srt

0xc8fc,	// (0x00035392) navi_tabs_3_long_pane_srt

0xc8fc,	// (0x00035392) navi_tabs_3_pane_srt

0xc8fc,	// (0x00035392) navi_tabs_4_pane_srt

0x27fd,	// (0x0002b293) tabs_2_active_pane_srt_ParamLimits

0x27fd,	// (0x0002b293) tabs_2_active_pane_srt

0x280d,	// (0x0002b2a3) tabs_2_passive_pane_srt_ParamLimits

0x280d,	// (0x0002b2a3) tabs_2_passive_pane_srt

0xc20b,	// (0x00034ca1) bg_passive_tab_pane_cp1_srt_ParamLimits

0xc20b,	// (0x00034ca1) bg_passive_tab_pane_cp1_srt

0xd42d,	// (0x00035ec3) bg_passive_tab_pane_g1_cp1_srt

0xb9f4,	// (0x0003448a) bg_passive_tab_pane_g2_cp1_srt

0xd436,	// (0x00035ecc) bg_passive_tab_pane_g3_cp1_srt

0x8cab,	// (0x00031741) bg_active_tab_pane_cp1_srt_ParamLimits

0x8cab,	// (0x00031741) bg_active_tab_pane_cp1_srt

0xd43f,	// (0x00035ed5) tabs_2_active_pane_srt_g1

0x9e65,	// (0x000328fb) tabs_2_active_pane_srt_t1_ParamLimits

0x9e65,	// (0x000328fb) tabs_2_active_pane_srt_t1

0xd42d,	// (0x00035ec3) bg_active_tab_pane_g1_cp1_srt

0xb9f4,	// (0x0003448a) bg_active_tab_pane_g2_cp1_srt

0xd436,	// (0x00035ecc) bg_active_tab_pane_g3_cp1_srt

0x27b8,	// (0x0002b24e) tabs_3_active_pane_srt_ParamLimits

0x27b8,	// (0x0002b24e) tabs_3_active_pane_srt

0x27c9,	// (0x0002b25f) tabs_3_passive_pane_cp_srt_ParamLimits

0x27c9,	// (0x0002b25f) tabs_3_passive_pane_cp_srt

0x27da,	// (0x0002b270) tabs_3_passive_pane_srt_ParamLimits

0x27da,	// (0x0002b270) tabs_3_passive_pane_srt

0xc20b,	// (0x00034ca1) bg_passive_tab_pane_cp2_srt_ParamLimits

0xc20b,	// (0x00034ca1) bg_passive_tab_pane_cp2_srt

0xbe38,	// (0x000348ce) bg_passive_tab_pane_g1_cp2_srt

0xb9f4,	// (0x0003448a) bg_passive_tab_pane_g2_cp2_srt

0xbe41,	// (0x000348d7) bg_passive_tab_pane_g3_cp2_srt

0x8cab,	// (0x00031741) bg_active_tab_pane_cp2_srt_ParamLimits

0x8cab,	// (0x00031741) bg_active_tab_pane_cp2_srt

0xd425,	// (0x00035ebb) tabs_3_active_pane_srt_g1

0x9e4f,	// (0x000328e5) tabs_3_active_pane_srt_t1_ParamLimits

0x9e4f,	// (0x000328e5) tabs_3_active_pane_srt_t1

0xbe38,	// (0x000348ce) bg_active_tab_pane_g1_cp2_srt

0xb9f4,	// (0x0003448a) bg_active_tab_pane_g2_cp2_srt

0xbe41,	// (0x000348d7) bg_active_tab_pane_g3_cp2_srt

0x275e,	// (0x0002b1f4) tabs_4_active_pane_srt_ParamLimits

0x275e,	// (0x0002b1f4) tabs_4_active_pane_srt

0x2770,	// (0x0002b206) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2770,	// (0x0002b206) tabs_4_passive_pane_cp2_srt

0x16a5,	// (0x0002a13b) aid_size_cell_toolbar

0xbfa7,	// (0x00034a3d) main_idle_act_pane_ParamLimits

0x1858,	// (0x0002a2ee) popup_large_graphic_colour_window_ParamLimits

0x8044,	// (0x00030ada) popup_toolbar_window_ParamLimits

0x8044,	// (0x00030ada) popup_toolbar_window

0xd350,	// (0x00035de6) list_single_graphic_2heading_pane_ParamLimits

0xd350,	// (0x00035de6) list_single_graphic_2heading_pane

0xb60b,	// (0x000340a1) aid_size_cell_apps_grid_lsc_pane

0xb626,	// (0x000340bc) aid_size_cell_apps_grid_prt_pane

0xb464,	// (0x00033efa) bg_wml_button_pane_cp1_ParamLimits

0xb464,	// (0x00033efa) bg_wml_button_pane_cp1

0x85a7,	// (0x0003103d) form_midp_field_text_pane_t1_ParamLimits

0xc20b,	// (0x00034ca1) input_focus_pane_cp050_ParamLimits

0xc378,	// (0x00034e0e) list_midp_form_text_pane_ParamLimits

0xc355,	// (0x00034deb) input_focus_pane_cp051_ParamLimits

0xc369,	// (0x00034dff) list_midp_choice_pane_ParamLimits

0x853b,	// (0x00030fd1) list_single_2graphic_pane_cp3_ParamLimits

0x853b,	// (0x00030fd1) list_single_2graphic_pane_cp3

0x8550,	// (0x00030fe6) list_single_midp_graphic_pane_ParamLimits

0x8550,	// (0x00030fe6) list_single_midp_graphic_pane

0x066f,	// (0x00029105) list_single_graphic_2heading_pane_g1_ParamLimits

0x066f,	// (0x00029105) list_single_graphic_2heading_pane_g1

0x067b,	// (0x00029111) list_single_graphic_2heading_pane_g4_ParamLimits

0x067b,	// (0x00029111) list_single_graphic_2heading_pane_g4

0x0687,	// (0x0002911d) list_single_graphic_2heading_pane_g5_ParamLimits

0x0687,	// (0x0002911d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x0003824c) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x0003824c) list_single_graphic_2heading_pane_g

0x0693,	// (0x00029129) list_single_graphic_2heading_pane_t1_ParamLimits

0x0693,	// (0x00029129) list_single_graphic_2heading_pane_t1

0x06a7,	// (0x0002913d) list_single_graphic_2heading_pane_t2_ParamLimits

0x06a7,	// (0x0002913d) list_single_graphic_2heading_pane_t2

0x06c1,	// (0x00029157) list_single_graphic_2heading_pane_t3_ParamLimits

0x06c1,	// (0x00029157) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x00038253) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x00038253) list_single_graphic_2heading_pane_t

0xc0d5,	// (0x00034b6b) bg_popup_sub_pane_cp2

0xc0ff,	// (0x00034b95) grid_toobar_pane

0x1f70,	// (0x0002aa06) cell_toolbar_pane_ParamLimits

0x1f70,	// (0x0002aa06) cell_toolbar_pane

0xc13b,	// (0x00034bd1) cell_toolbar_pane_g1_ParamLimits

0xc13b,	// (0x00034bd1) cell_toolbar_pane_g1

0xc14f,	// (0x00034be5) cell_toolbar_pane_g2_ParamLimits

0xc14f,	// (0x00034be5) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x00038261) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x00038261) cell_toolbar_pane_g

0xc171,	// (0x00034c07) grid_highlight_pane_cp2_ParamLimits

0xc171,	// (0x00034c07) grid_highlight_pane_cp2

0xc18b,	// (0x00034c21) toolbar_button_pane

0xc197,	// (0x00034c2d) toolbar_button_pane_g1

0xc19f,	// (0x00034c35) toolbar_button_pane_g2

0xc1a7,	// (0x00034c3d) toolbar_button_pane_g3

0xc1af,	// (0x00034c45) toolbar_button_pane_g4

0xc1b7,	// (0x00034c4d) toolbar_button_pane_g5

0xc1bf,	// (0x00034c55) toolbar_button_pane_g6

0xc1c7,	// (0x00034c5d) toolbar_button_pane_g7

0xc1cf,	// (0x00034c65) toolbar_button_pane_g8

0xc1d7,	// (0x00034c6d) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x00038266) toolbar_button_pane_g

0x1fa8,	// (0x0002aa3e) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1fa8,	// (0x0002aa3e) list_single_2graphic_pane_g1_cp3

0x849d,	// (0x00030f33) list_single_2graphic_pane_g2_cp3_ParamLimits

0x849d,	// (0x00030f33) list_single_2graphic_pane_g2_cp3

0x1fc5,	// (0x0002aa5b) list_single_2graphic_pane_g3_cp3

0x1fcd,	// (0x0002aa63) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1fcd,	// (0x0002aa63) list_single_2graphic_pane_g4_cp3

0x1fd9,	// (0x0002aa6f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1fd9,	// (0x0002aa6f) list_single_2graphic_pane_t1_cp3

0x1ff3,	// (0x0002aa89) list_single_midp_graphic_pane_g2_ParamLimits

0x1ff3,	// (0x0002aa89) list_single_midp_graphic_pane_g2

0x16ad,	// (0x0002a143) aid_zoom_text_primary

0x0653,	// (0x000290e9) aid_zoom_text_secondary

0xbef5,	// (0x0003498b) status_small_pane_g7_ParamLimits

0xbef5,	// (0x0003498b) status_small_pane_g7

0xbf18,	// (0x000349ae) status_small_pane_t1_ParamLimits

0x7259,	// (0x0002fcef) title_pane_g2

0x0003,

0xf554,	// (0x00037fea) title_pane_g

0x74d1,	// (0x0002ff67) aid_size_cell_colour_1_pane_ParamLimits

0x74d1,	// (0x0002ff67) aid_size_cell_colour_1_pane

0x74e5,	// (0x0002ff7b) aid_size_cell_colour_2_pane_ParamLimits

0x74e5,	// (0x0002ff7b) aid_size_cell_colour_2_pane

0x74f9,	// (0x0002ff8f) aid_size_cell_colour_3_pane_ParamLimits

0x74f9,	// (0x0002ff8f) aid_size_cell_colour_3_pane

0x750d,	// (0x0002ffa3) aid_size_cell_colour_4_pane_ParamLimits

0x750d,	// (0x0002ffa3) aid_size_cell_colour_4_pane

0x0ebe,	// (0x00029954) title_pane_stacon_g1_ParamLimits

0x0ebe,	// (0x00029954) title_pane_stacon_g1

0xc715,	// (0x000351ab) popup_note_wait_window_g3_ParamLimits

0xc715,	// (0x000351ab) popup_note_wait_window_g3

0xc78b,	// (0x00035221) popup_note_wait_window_t5_ParamLimits

0xc78b,	// (0x00035221) popup_note_wait_window_t5

0x8c5d,	// (0x000316f3) main_feb_china_hwr_fs_writing_pane

0x7a60,	// (0x000304f6) popup_feb_china_hwr_fs_window_ParamLimits

0x7a60,	// (0x000304f6) popup_feb_china_hwr_fs_window

0x84ae,	// (0x00030f44) aid_size_cell_hwr_fs_ParamLimits

0x84ae,	// (0x00030f44) aid_size_cell_hwr_fs

0xc20b,	// (0x00034ca1) bg_popup_sub_pane_cp3_ParamLimits

0xc20b,	// (0x00034ca1) bg_popup_sub_pane_cp3

0x84c3,	// (0x00030f59) grid_hwr_fs_pane_ParamLimits

0x84c3,	// (0x00030f59) grid_hwr_fs_pane

0x2042,	// (0x0002aad8) linegrid_hwr_fs_pane_ParamLimits

0x2042,	// (0x0002aad8) linegrid_hwr_fs_pane

0x84db,	// (0x00030f71) cell_hwr_fs_pane_ParamLimits

0x84db,	// (0x00030f71) cell_hwr_fs_pane

0xc217,	// (0x00034cad) linegrid_hwr_fs_pane_g1_ParamLimits

0xc217,	// (0x00034cad) linegrid_hwr_fs_pane_g1

0x8501,	// (0x00030f97) linegrid_hwr_fs_pane_g2_ParamLimits

0x8501,	// (0x00030f97) linegrid_hwr_fs_pane_g2

0xc223,	// (0x00034cb9) linegrid_hwr_fs_pane_g3_ParamLimits

0xc223,	// (0x00034cb9) linegrid_hwr_fs_pane_g3

0x2086,	// (0x0002ab1c) linegrid_hwr_fs_pane_g4_ParamLimits

0x2086,	// (0x0002ab1c) linegrid_hwr_fs_pane_g4

0x20a0,	// (0x0002ab36) linegrid_hwr_fs_pane_g5_ParamLimits

0x20a0,	// (0x0002ab36) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x0003828c) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0003828c) linegrid_hwr_fs_pane_g

0xc22f,	// (0x00034cc5) cell_hwr_fs_pane_g1_ParamLimits

0xc22f,	// (0x00034cc5) cell_hwr_fs_pane_g1

0xc0a1,	// (0x00034b37) cell_hwr_fs_pane_g2_ParamLimits

0xc0a1,	// (0x00034b37) cell_hwr_fs_pane_g2

0x8513,	// (0x00030fa9) cell_hwr_fs_pane_g3_ParamLimits

0x8513,	// (0x00030fa9) cell_hwr_fs_pane_g3

0x8520,	// (0x00030fb6) cell_hwr_fs_pane_g4_ParamLimits

0x8520,	// (0x00030fb6) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x00038297) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x00038297) cell_hwr_fs_pane_g

0x852d,	// (0x00030fc3) cell_hwr_fs_pane_t1

0x8c5d,	// (0x000316f3) grid_highlight_pane_cp6

0x8c5d,	// (0x000316f3) main_idle_act2_pane

0xb412,	// (0x00033ea8) aid_inside_area_popup_secondary

0x9ae1,	// (0x00032577) aid_inside_area_window_primary_ParamLimits

0x9ae1,	// (0x00032577) aid_inside_area_window_primary

0xd5c4,	// (0x0003605a) ai2_news_ticker_pane

0xd5cc,	// (0x00036062) aid_size_cell_ai1_link_ParamLimits

0xd5cc,	// (0x00036062) aid_size_cell_ai1_link

0xd5e6,	// (0x0003607c) popup_ai2_data_window_ParamLimits

0xd5e6,	// (0x0003607c) popup_ai2_data_window

0xd5fa,	// (0x00036090) popup_ai2_link_window_ParamLimits

0xd5fa,	// (0x00036090) popup_ai2_link_window

0xc20b,	// (0x00034ca1) bg_popup_sub_pane_cp4_ParamLimits

0xc20b,	// (0x00034ca1) bg_popup_sub_pane_cp4

0xd60e,	// (0x000360a4) grid_ai2_link_pane_ParamLimits

0xd60e,	// (0x000360a4) grid_ai2_link_pane

0xd625,	// (0x000360bb) popup_ai2_link_window_g1_ParamLimits

0xd625,	// (0x000360bb) popup_ai2_link_window_g1

0xd631,	// (0x000360c7) popup_ai2_link_window_g2_ParamLimits

0xd631,	// (0x000360c7) popup_ai2_link_window_g2

0x0001,

0x0115,	// (0x00028bab) popup_ai2_link_window_g_ParamLimits

0x0115,	// (0x00028bab) popup_ai2_link_window_g

0xd640,	// (0x000360d6) ai2_mp_button_pane

0xd648,	// (0x000360de) ai2_mp_volume_pane

0xc355,	// (0x00034deb) bg_popup_sub_pane_cp5_ParamLimits

0xc355,	// (0x00034deb) bg_popup_sub_pane_cp5

0xd650,	// (0x000360e6) heading_ai2_gene_pane_ParamLimits

0xd650,	// (0x000360e6) heading_ai2_gene_pane

0xd65c,	// (0x000360f2) list_ai2_gene_pane_ParamLimits

0xd65c,	// (0x000360f2) list_ai2_gene_pane

0xd6a4,	// (0x0003613a) cell_ai2_link_pane_ParamLimits

0xd6a4,	// (0x0003613a) cell_ai2_link_pane

0xd6ba,	// (0x00036150) cell_ai2_link_pane_g1

0x8c5d,	// (0x000316f3) grid_highlight_pane_cp7

0x283a,	// (0x0002b2d0) ai2_mp_volume_pane_g1

0xd78b,	// (0x00036221) ai2_mp_volume_pane_g2

0xd700,	// (0x00036196) list_ai2_gene_pane_t1

0xd793,	// (0x00036229) ai2_mp_volume_pane_g3

0x0002,

0xf986,	// (0x0003841c) ai2_mp_volume_pane_g

0x2842,	// (0x0002b2d8) volume_small_pane_cp3

0xd79b,	// (0x00036231) aid_size_cell_ai2_button

0xd7a3,	// (0x00036239) grid_ai2_button_pane

0xd7ac,	// (0x00036242) cell_ai2_button_pane_ParamLimits

0xd7ac,	// (0x00036242) cell_ai2_button_pane

0x8c53,	// (0x000316e9) cell_ai2_button_pane_g1

0x8c5d,	// (0x000316f3) grid_highlight_pane_cp8

0xd74b,	// (0x000361e1) ai2_gene_pane_t1_ParamLimits

0xd74b,	// (0x000361e1) ai2_gene_pane_t1

0x79da,	// (0x00030470) aid_height_parent_landscape

0x9c2d,	// (0x000326c3) aid_height_set_list

0xbfa7,	// (0x00034a3d) aid_size_parent

0xd3d3,	// (0x00035e69) aid_size_cell_graphic_pane_ParamLimits

0xd66c,	// (0x00036102) popup_ai2_data_window_g1_ParamLimits

0xd66c,	// (0x00036102) popup_ai2_data_window_g1

0xd678,	// (0x0003610e) ai2_news_ticker_pane_g1

0xd680,	// (0x00036116) ai2_news_ticker_pane_g2

0x0001,

0x011a,	// (0x00028bb0) ai2_news_ticker_pane_g

0xd688,	// (0x0003611e) ai2_news_ticker_pane_t1

0xd696,	// (0x0003612c) ai2_news_ticker_pane_t2

0x0001,

0x011f,	// (0x00028bb5) ai2_news_ticker_pane_t

0xd6c3,	// (0x00036159) heading_ai2_gene_pane_g1

0xd6cb,	// (0x00036161) heading_ai2_gene_pane_t1_ParamLimits

0xd6cb,	// (0x00036161) heading_ai2_gene_pane_t1

0xd6e0,	// (0x00036176) list_highlight_pane_cp6

0xd6e8,	// (0x0003617e) ai2_gene_pane_ParamLimits

0xd6e8,	// (0x0003617e) ai2_gene_pane

0xd70e,	// (0x000361a4) list_ai2_gene_pane_t2

0x0001,

0x0124,	// (0x00028bba) list_ai2_gene_pane_t

0xd71c,	// (0x000361b2) list_highlight_pane_cp8_ParamLimits

0xd71c,	// (0x000361b2) list_highlight_pane_cp8

0xd72d,	// (0x000361c3) ai2_gene_pane_g1_ParamLimits

0xd72d,	// (0x000361c3) ai2_gene_pane_g1

0xd73f,	// (0x000361d5) ai2_gene_pane_g2_ParamLimits

0xd73f,	// (0x000361d5) ai2_gene_pane_g2

0x0001,

0x0129,	// (0x00028bbf) ai2_gene_pane_g_ParamLimits

0x0129,	// (0x00028bbf) ai2_gene_pane_g

0x92a6,	// (0x00031d3c) scroll_pane_cp12

0x7999,	// (0x0003042f) control_pane_t3_ParamLimits

0x7999,	// (0x0003042f) control_pane_t3

0xbf09,	// (0x0003499f) status_small_pane_g8_ParamLimits

0xbf09,	// (0x0003499f) status_small_pane_g8

0x7af3,	// (0x00030589) popup_find_window_ParamLimits

0x7d74,	// (0x0003080a) popup_note_image_window_ParamLimits

0x4ff1,	// (0x0002da87) list_double2_graphic_pane_vc_g1_ParamLimits

0x4ff1,	// (0x0002da87) list_double2_graphic_pane_vc_g1

0x4943,	// (0x0002d3d9) list_double2_graphic_pane_vc_g2_ParamLimits

0x4943,	// (0x0002d3d9) list_double2_graphic_pane_vc_g2

0x494f,	// (0x0002d3e5) list_double2_graphic_pane_vc_g3_ParamLimits

0x494f,	// (0x0002d3e5) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x0003825a) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003825a) list_double2_graphic_pane_vc_g

0x4ffd,	// (0x0002da93) list_double2_graphic_pane_vc_t1_ParamLimits

0x4ffd,	// (0x0002da93) list_double2_graphic_pane_vc_t1

0x4943,	// (0x0002d3d9) list_single_heading_pane_vc_g1_ParamLimits

0x4943,	// (0x0002d3d9) list_single_heading_pane_vc_g1

0x494f,	// (0x0002d3e5) list_single_heading_pane_vc_g2_ParamLimits

0x494f,	// (0x0002d3e5) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00038064) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00038064) list_single_heading_pane_vc_g

0x5013,	// (0x0002daa9) list_single_heading_pane_vc_t1_ParamLimits

0x5013,	// (0x0002daa9) list_single_heading_pane_vc_t1

0x5029,	// (0x0002dabf) list_single_heading_pane_vc_t2_ParamLimits

0x5029,	// (0x0002dabf) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x0003827b) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x0003827b) list_single_heading_pane_vc_t

0x5045,	// (0x0002dadb) list_setting_number_pane_vc_g1_ParamLimits

0x5045,	// (0x0002dadb) list_setting_number_pane_vc_g1

0x5051,	// (0x0002dae7) list_setting_number_pane_vc_g2_ParamLimits

0x5051,	// (0x0002dae7) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x00038280) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x00038280) list_setting_number_pane_vc_g

0x505d,	// (0x0002daf3) list_setting_number_pane_vc_t1_ParamLimits

0x505d,	// (0x0002daf3) list_setting_number_pane_vc_t1

0x5071,	// (0x0002db07) list_setting_number_pane_vc_t2_ParamLimits

0x5071,	// (0x0002db07) list_setting_number_pane_vc_t2

0x508b,	// (0x0002db21) list_setting_number_pane_vc_t3_ParamLimits

0x508b,	// (0x0002db21) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x00038285) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x00038285) list_setting_number_pane_vc_t

0x50a5,	// (0x0002db3b) set_value_pane_vc_ParamLimits

0x50a5,	// (0x0002db3b) set_value_pane_vc

0xd350,	// (0x00035de6) list_double2_graphic_pane_vc_ParamLimits

0xd350,	// (0x00035de6) list_double2_graphic_pane_vc

0xd350,	// (0x00035de6) list_double2_large_graphic_pane_vc_ParamLimits

0xd350,	// (0x00035de6) list_double2_large_graphic_pane_vc

0xd350,	// (0x00035de6) list_double2_pane_vc_ParamLimits

0xd350,	// (0x00035de6) list_double2_pane_vc

0xd350,	// (0x00035de6) list_double_graphic_heading_pane_vc_ParamLimits

0xd350,	// (0x00035de6) list_double_graphic_heading_pane_vc

0xd350,	// (0x00035de6) list_double_graphic_pane_vc_ParamLimits

0xd350,	// (0x00035de6) list_double_graphic_pane_vc

0xd350,	// (0x00035de6) list_double_heading_pane_vc_ParamLimits

0xd350,	// (0x00035de6) list_double_heading_pane_vc

0xd350,	// (0x00035de6) list_double_large_graphic_pane_vc_ParamLimits

0xd350,	// (0x00035de6) list_double_large_graphic_pane_vc

0xd350,	// (0x00035de6) list_double_number_pane_vc_ParamLimits

0xd350,	// (0x00035de6) list_double_number_pane_vc

0xd350,	// (0x00035de6) list_double_pane_vc_ParamLimits

0xd350,	// (0x00035de6) list_double_pane_vc

0xd350,	// (0x00035de6) list_double_time_pane_vc_ParamLimits

0xd350,	// (0x00035de6) list_double_time_pane_vc

0xd350,	// (0x00035de6) list_setting_number_pane_vc_ParamLimits

0xd350,	// (0x00035de6) list_setting_number_pane_vc

0xd350,	// (0x00035de6) list_setting_pane_vc_ParamLimits

0xd350,	// (0x00035de6) list_setting_pane_vc

0xd350,	// (0x00035de6) list_single_graphic_heading_pane_vc_ParamLimits

0xd350,	// (0x00035de6) list_single_graphic_heading_pane_vc

0xd350,	// (0x00035de6) list_single_heading_pane_vc_ParamLimits

0xd350,	// (0x00035de6) list_single_heading_pane_vc

0xd350,	// (0x00035de6) list_single_number_heading_pane_vc_ParamLimits

0xd350,	// (0x00035de6) list_single_number_heading_pane_vc

0x525b,	// (0x0002dcf1) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x525b,	// (0x0002dcf1) list_double_graphic_heading_pane_vc_g1

0x4943,	// (0x0002d3d9) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4943,	// (0x0002d3d9) list_double_graphic_heading_pane_vc_g2

0x494f,	// (0x0002d3e5) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x494f,	// (0x0002d3e5) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf98d,	// (0x00038423) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf98d,	// (0x00038423) list_double_graphic_heading_pane_vc_g

0x5267,	// (0x0002dcfd) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5267,	// (0x0002dcfd) list_double_graphic_heading_pane_vc_t1

0x5283,	// (0x0002dd19) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5283,	// (0x0002dd19) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf994,	// (0x0003842a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf994,	// (0x0003842a) list_double_graphic_heading_pane_vc_t

0x5045,	// (0x0002dadb) list_setting_pane_vc_g1_ParamLimits

0x5045,	// (0x0002dadb) list_setting_pane_vc_g1

0x5051,	// (0x0002dae7) list_setting_pane_vc_g2_ParamLimits

0x5051,	// (0x0002dae7) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x00038280) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x00038280) list_setting_pane_vc_g

0x529b,	// (0x0002dd31) list_setting_pane_vc_t1_ParamLimits

0x529b,	// (0x0002dd31) list_setting_pane_vc_t1

0x52b5,	// (0x0002dd4b) list_setting_pane_vc_t2_ParamLimits

0x52b5,	// (0x0002dd4b) list_setting_pane_vc_t2

0x0001,

0xf9ae,	// (0x00038444) list_setting_pane_vc_t_ParamLimits

0xf9ae,	// (0x00038444) list_setting_pane_vc_t

0x50a5,	// (0x0002db3b) set_value_pane_cp_vc_ParamLimits

0x50a5,	// (0x0002db3b) set_value_pane_cp_vc

0x4943,	// (0x0002d3d9) list_single_number_heading_pane_vc_g1_ParamLimits

0x4943,	// (0x0002d3d9) list_single_number_heading_pane_vc_g1

0x494f,	// (0x0002d3e5) list_single_number_heading_pane_vc_g2_ParamLimits

0x494f,	// (0x0002d3e5) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00038064) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00038064) list_single_number_heading_pane_vc_g

0x5013,	// (0x0002daa9) list_single_number_heading_pane_vc_t1_ParamLimits

0x5013,	// (0x0002daa9) list_single_number_heading_pane_vc_t1

0x52cd,	// (0x0002dd63) list_single_number_heading_pane_vc_t2_ParamLimits

0x52cd,	// (0x0002dd63) list_single_number_heading_pane_vc_t2

0x52e1,	// (0x0002dd77) list_single_number_heading_pane_vc_t3_ParamLimits

0x52e1,	// (0x0002dd77) list_single_number_heading_pane_vc_t3

0x0002,

0xf9b3,	// (0x00038449) list_single_number_heading_pane_vc_t_ParamLimits

0xf9b3,	// (0x00038449) list_single_number_heading_pane_vc_t

0x4ff1,	// (0x0002da87) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4ff1,	// (0x0002da87) list_single_graphic_heading_pane_vc_g1

0x4943,	// (0x0002d3d9) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4943,	// (0x0002d3d9) list_single_graphic_heading_pane_vc_g4

0x494f,	// (0x0002d3e5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x494f,	// (0x0002d3e5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c4,	// (0x0003825a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003825a) list_single_graphic_heading_pane_vc_g

0x5013,	// (0x0002daa9) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5013,	// (0x0002daa9) list_single_graphic_heading_pane_vc_t1

0x52f3,	// (0x0002dd89) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x52f3,	// (0x0002dd89) list_single_graphic_heading_pane_vc_t2

0x0001,

0xf9ba,	// (0x00038450) list_single_graphic_heading_pane_vc_t_ParamLimits

0xf9ba,	// (0x00038450) list_single_graphic_heading_pane_vc_t

0x4943,	// (0x0002d3d9) list_double2_pane_vc_g1_ParamLimits

0x4943,	// (0x0002d3d9) list_double2_pane_vc_g1

0x494f,	// (0x0002d3e5) list_double2_pane_vc_g2_ParamLimits

0x494f,	// (0x0002d3e5) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x00038064) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x00038064) list_double2_pane_vc_g

0x5307,	// (0x0002dd9d) list_double2_pane_vc_t1_ParamLimits

0x5307,	// (0x0002dd9d) list_double2_pane_vc_t1

0x531d,	// (0x0002ddb3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x531d,	// (0x0002ddb3) list_double2_large_graphic_pane_vc_g1

0x4943,	// (0x0002d3d9) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4943,	// (0x0002d3d9) list_double2_large_graphic_pane_vc_g2

0x494f,	// (0x0002d3e5) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x494f,	// (0x0002d3e5) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x00038081) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x00038081) list_double2_large_graphic_pane_vc_g

0x5329,	// (0x0002ddbf) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5329,	// (0x0002ddbf) list_double2_large_graphic_pane_vc_t1

0x533f,	// (0x0002ddd5) list_double_time_pane_vc_g1_ParamLimits

0x533f,	// (0x0002ddd5) list_double_time_pane_vc_g1

0x534b,	// (0x0002dde1) list_double_time_pane_vc_g2_ParamLimits

0x534b,	// (0x0002dde1) list_double_time_pane_vc_g2

0x0001,

0xf9bf,	// (0x00038455) list_double_time_pane_vc_g_ParamLimits

0xf9bf,	// (0x00038455) list_double_time_pane_vc_g

0x5357,	// (0x0002dded) list_double_time_pane_vc_t1_ParamLimits

0x5357,	// (0x0002dded) list_double_time_pane_vc_t1

0x537b,	// (0x0002de11) list_double_time_pane_vc_t2_ParamLimits

0x537b,	// (0x0002de11) list_double_time_pane_vc_t2

0x53c5,	// (0x0002de5b) list_double_time_pane_vc_t3_ParamLimits

0x53c5,	// (0x0002de5b) list_double_time_pane_vc_t3

0x53d7,	// (0x0002de6d) list_double_time_pane_vc_t4_ParamLimits

0x53d7,	// (0x0002de6d) list_double_time_pane_vc_t4

0x0003,

0xf9c4,	// (0x0003845a) list_double_time_pane_vc_t_ParamLimits

0xf9c4,	// (0x0003845a) list_double_time_pane_vc_t

0x4943,	// (0x0002d3d9) list_double_pane_vc_g1_ParamLimits

0x4943,	// (0x0002d3d9) list_double_pane_vc_g1

0x494f,	// (0x0002d3e5) list_double_pane_vc_g2_ParamLimits

0x494f,	// (0x0002d3e5) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x00038064) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x00038064) list_double_pane_vc_g

0x53eb,	// (0x0002de81) list_double_pane_vc_t1_ParamLimits

0x53eb,	// (0x0002de81) list_double_pane_vc_t1

0x53ff,	// (0x0002de95) list_double_pane_vc_t2_ParamLimits

0x53ff,	// (0x0002de95) list_double_pane_vc_t2

0x0001,

0xf9cd,	// (0x00038463) list_double_pane_vc_t_ParamLimits

0xf9cd,	// (0x00038463) list_double_pane_vc_t

0x4943,	// (0x0002d3d9) list_double_number_pane_vc_g1_ParamLimits

0x4943,	// (0x0002d3d9) list_double_number_pane_vc_g1

0x494f,	// (0x0002d3e5) list_double_number_pane_vc_g2_ParamLimits

0x494f,	// (0x0002d3e5) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x00038064) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x00038064) list_double_number_pane_vc_g

0x5417,	// (0x0002dead) list_double_number_pane_vc_t1_ParamLimits

0x5417,	// (0x0002dead) list_double_number_pane_vc_t1

0x5429,	// (0x0002debf) list_double_number_pane_vc_t2_ParamLimits

0x5429,	// (0x0002debf) list_double_number_pane_vc_t2

0x53ff,	// (0x0002de95) list_double_number_pane_vc_t3_ParamLimits

0x53ff,	// (0x0002de95) list_double_number_pane_vc_t3

0x0002,

0xf9d2,	// (0x00038468) list_double_number_pane_vc_t_ParamLimits

0xf9d2,	// (0x00038468) list_double_number_pane_vc_t

0x543d,	// (0x0002ded3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x543d,	// (0x0002ded3) list_double_large_graphic_pane_vc_g1

0x5449,	// (0x0002dedf) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5449,	// (0x0002dedf) list_double_large_graphic_pane_vc_g2

0x494f,	// (0x0002d3e5) list_double_large_graphic_pane_vc_g3_ParamLimits

0x494f,	// (0x0002d3e5) list_double_large_graphic_pane_vc_g3

0x5458,	// (0x0002deee) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5458,	// (0x0002deee) list_double_large_graphic_pane_vc_g4

0x0003,

0xf9d9,	// (0x0003846f) list_double_large_graphic_pane_vc_g_ParamLimits

0xf9d9,	// (0x0003846f) list_double_large_graphic_pane_vc_g

0x5464,	// (0x0002defa) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5464,	// (0x0002defa) list_double_large_graphic_pane_vc_t1

0x5478,	// (0x0002df0e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5478,	// (0x0002df0e) list_double_large_graphic_pane_vc_t2

0x0001,

0xf9e2,	// (0x00038478) list_double_large_graphic_pane_vc_t_ParamLimits

0xf9e2,	// (0x00038478) list_double_large_graphic_pane_vc_t

0x4943,	// (0x0002d3d9) list_double_heading_pane_vc_g1_ParamLimits

0x4943,	// (0x0002d3d9) list_double_heading_pane_vc_g1

0x494f,	// (0x0002d3e5) list_double_heading_pane_vc_g2_ParamLimits

0x494f,	// (0x0002d3e5) list_double_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00038064) list_double_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00038064) list_double_heading_pane_vc_g

0x5491,	// (0x0002df27) list_double_heading_pane_vc_t1_ParamLimits

0x5491,	// (0x0002df27) list_double_heading_pane_vc_t1

0x5013,	// (0x0002daa9) list_double_heading_pane_vc_t2_ParamLimits

0x5013,	// (0x0002daa9) list_double_heading_pane_vc_t2

0x0001,

0xf9e7,	// (0x0003847d) list_double_heading_pane_vc_t_ParamLimits

0xf9e7,	// (0x0003847d) list_double_heading_pane_vc_t

0x54a5,	// (0x0002df3b) list_double_graphic_pane_vc_g1_ParamLimits

0x54a5,	// (0x0002df3b) list_double_graphic_pane_vc_g1

0x54b5,	// (0x0002df4b) list_double_graphic_pane_vc_g2_ParamLimits

0x54b5,	// (0x0002df4b) list_double_graphic_pane_vc_g2

0x54c4,	// (0x0002df5a) list_double_graphic_pane_vc_g3_ParamLimits

0x54c4,	// (0x0002df5a) list_double_graphic_pane_vc_g3

0x0002,

0xf9ec,	// (0x00038482) list_double_graphic_pane_vc_g_ParamLimits

0xf9ec,	// (0x00038482) list_double_graphic_pane_vc_g

0x54d0,	// (0x0002df66) list_double_graphic_pane_vc_t1_ParamLimits

0x54d0,	// (0x0002df66) list_double_graphic_pane_vc_t1

0x54e4,	// (0x0002df7a) list_double_graphic_pane_vc_t2_ParamLimits

0x54e4,	// (0x0002df7a) list_double_graphic_pane_vc_t2

0x0001,

0xf9f3,	// (0x00038489) list_double_graphic_pane_vc_t_ParamLimits

0xf9f3,	// (0x00038489) list_double_graphic_pane_vc_t

0x070d,	// (0x000291a3) aid_size_cell_fastswap

0x7040,	// (0x0002fad6) aid_size_cell_touch_ParamLimits

0x7040,	// (0x0002fad6) aid_size_cell_touch

0x097a,	// (0x00029410) popup_fast_swap_wide_window_ParamLimits

0x097a,	// (0x00029410) popup_fast_swap_wide_window

0x71f0,	// (0x0002fc86) touch_pane_ParamLimits

0x71f0,	// (0x0002fc86) touch_pane

0xb2f7,	// (0x00033d8d) button_value_adjust_pane_cp2

0x4d13,	// (0x0002d7a9) button_value_adjust_pane_cp4

0x4d33,	// (0x0002d7c9) form_field_data_pane_cp2

0x9679,	// (0x0003210f) form_field_data_wide_pane_cp2

0xb64b,	// (0x000340e1) bg_scroll_pane_ParamLimits

0x10b3,	// (0x00029b49) scroll_handle_pane_ParamLimits

0x10c7,	// (0x00029b5d) scroll_sc2_down_pane_ParamLimits

0x10c7,	// (0x00029b5d) scroll_sc2_down_pane

0xb67c,	// (0x00034112) scroll_sc2_up_pane_ParamLimits

0xb67c,	// (0x00034112) scroll_sc2_up_pane

0x9f9c,	// (0x00032a32) grid_wheel_folder_pane_g1_ParamLimits

0x9f9c,	// (0x00032a32) grid_wheel_folder_pane_g1

0x1348,	// (0x00029dde) clock_nsta_pane_cp2_ParamLimits

0x1348,	// (0x00029dde) clock_nsta_pane_cp2

0xb464,	// (0x00033efa) listscroll_midp_pane_ParamLimits

0x77a7,	// (0x0003023d) midp_canvas_pane

0xbf5d,	// (0x000349f3) nsta_clock_indic_pane

0xbf8d,	// (0x00034a23) listscroll_form_pane_vc

0xbf95,	// (0x00034a2b) listscroll_set_pane_vc_ParamLimits

0xbf95,	// (0x00034a2b) listscroll_set_pane_vc

0x81a8,	// (0x00030c3e) clock_nsta_pane

0x81d2,	// (0x00030c68) indicator_nsta_pane

0xc0d5,	// (0x00034b6b) bg_popup_sub_pane_cp2_ParamLimits

0xc0e9,	// (0x00034b7f) find_pane_cp2_ParamLimits

0xc0e9,	// (0x00034b7f) find_pane_cp2

0xc0ff,	// (0x00034b95) grid_toobar_pane_ParamLimits

0xc1df,	// (0x00034c75) list_form_gen_pane_vc_ParamLimits

0xc1df,	// (0x00034c75) list_form_gen_pane_vc

0xc1f5,	// (0x00034c8b) scroll_pane_cp8_vc_ParamLimits

0xc1f5,	// (0x00034c8b) scroll_pane_cp8_vc

0xc245,	// (0x00034cdb) data_form_wide_pane_vc_ParamLimits

0xc245,	// (0x00034cdb) data_form_wide_pane_vc

0xc251,	// (0x00034ce7) form_field_data_wide_pane_vc_g1

0xc259,	// (0x00034cef) form_field_data_wide_pane_vc_t1_ParamLimits

0xc259,	// (0x00034cef) form_field_data_wide_pane_vc_t1

0xb30b,	// (0x00033da1) input_focus_pane_cp6_vc_ParamLimits

0xb30b,	// (0x00033da1) input_focus_pane_cp6_vc

0x85ca,	// (0x00031060) list_midp_pane_ParamLimits

0xd249,	// (0x00035cdf) scroll_pane_cp16_ParamLimits

0xd249,	// (0x00035cdf) scroll_pane_cp16

0xc4ef,	// (0x00034f85) button_value_adjust_pane_ParamLimits

0xc4ef,	// (0x00034f85) button_value_adjust_pane

0x9c3e,	// (0x000326d4) button_value_adjust_pane_cp6_ParamLimits

0x9c3e,	// (0x000326d4) button_value_adjust_pane_cp6

0x9d54,	// (0x000327ea) settings_code_pane_cp_ParamLimits

0x9d54,	// (0x000327ea) settings_code_pane_cp

0x8c53,	// (0x000316e9) cell_touch_pane_g1

0x8c53,	// (0x000316e9) cell_touch_pane_g2

0x0001,

0xf709,	// (0x0003819f) cell_touch_pane_g

0x9e7b,	// (0x00032911) cell_touch_pane_cp_ParamLimits

0x9e7b,	// (0x00032911) cell_touch_pane_cp

0x9e97,	// (0x0003292d) cell_touch_pane_ParamLimits

0x9e97,	// (0x0003292d) cell_touch_pane

0x8c53,	// (0x000316e9) scroll_sc2_down_pane_g1

0x8c53,	// (0x000316e9) scroll_sc2_up_pane_g1

0x8c5d,	// (0x000316f3) bg_set_opt_pane_cp4_vc

0xd7be,	// (0x00036254) list_set_graphic_pane_vc_g1_ParamLimits

0xd7be,	// (0x00036254) list_set_graphic_pane_vc_g1

0xd7ca,	// (0x00036260) list_set_graphic_pane_vc_g2_ParamLimits

0xd7ca,	// (0x00036260) list_set_graphic_pane_vc_g2

0x0001,

0x0141,	// (0x00028bd7) list_set_graphic_pane_vc_g_ParamLimits

0x0141,	// (0x00028bd7) list_set_graphic_pane_vc_g

0xd7d6,	// (0x0003626c) text_primary_small_cp13_vc_ParamLimits

0xd7d6,	// (0x0003626c) text_primary_small_cp13_vc

0xd236,	// (0x00035ccc) list_set_graphic_pane_vc_ParamLimits

0xd236,	// (0x00035ccc) list_set_graphic_pane_vc

0x8c5d,	// (0x000316f3) input_focus_pane_cp2_vc

0x8c53,	// (0x000316e9) setting_code_pane_vc_g1

0x8ce0,	// (0x00031776) setting_code_pane_vc_t1

0xd7ee,	// (0x00036284) set_text_pane_vc_t1_ParamLimits

0xd7ee,	// (0x00036284) set_text_pane_vc_t1

0x8c5d,	// (0x000316f3) input_focus_pane_cp1_vc

0xd80b,	// (0x000362a1) list_set_text_pane_vc

0x8c53,	// (0x000316e9) setting_text_pane_vc_g1

0x8c5d,	// (0x000316f3) bg_set_opt_pane_cp2_vc

0x8cd7,	// (0x0003176d) setting_slider_graphic_pane_vc_g1

0xd815,	// (0x000362ab) setting_slider_graphic_pane_vc_t1

0xd825,	// (0x000362bb) setting_slider_graphic_pane_vc_t2

0x0001,

0x0146,	// (0x00028bdc) setting_slider_graphic_pane_vc_t

0xd835,	// (0x000362cb) slider_set_pane_cp_vc

0xd83d,	// (0x000362d3) slider_set_pane_vc_g1

0xd846,	// (0x000362dc) slider_set_pane_vc_g2

0x0006,

0x014b,	// (0x00028be1) slider_set_pane_vc_g

0xb35a,	// (0x00033df0) set_opt_bg_pane_g1_copy1

0xb362,	// (0x00033df8) set_opt_bg_pane_g2_copy1

0xd872,	// (0x00036308) set_opt_bg_pane_g3_copy1

0xb372,	// (0x00033e08) set_opt_bg_pane_g4_copy1

0xb37a,	// (0x00033e10) set_opt_bg_pane_g5_copy1

0xb382,	// (0x00033e18) set_opt_bg_pane_g6_copy1

0xd87a,	// (0x00036310) set_opt_bg_pane_g7_copy1

0xd884,	// (0x0003631a) set_opt_bg_pane_g8_copy1

0xd88c,	// (0x00036322) set_opt_bg_pane_g9_copy1

0x8c5d,	// (0x000316f3) bg_set_opt_pane_cp_vc

0xd894,	// (0x0003632a) setting_slider_pane_vc_t1

0xd8a3,	// (0x00036339) setting_slider_pane_vc_t2

0xd8b3,	// (0x00036349) setting_slider_pane_vc_t3

0x0002,

0x015a,	// (0x00028bf0) setting_slider_pane_vc_t

0xd8c3,	// (0x00036359) slider_set_pane_vc

0x221a,	// (0x0002acb0) volume_set_pane_vc_g1

0x286c,	// (0x0002b302) volume_set_pane_vc_g2

0x2875,	// (0x0002b30b) volume_set_pane_vc_g3

0x287e,	// (0x0002b314) volume_set_pane_vc_g4

0x2887,	// (0x0002b31d) volume_set_pane_vc_g5

0x2890,	// (0x0002b326) volume_set_pane_vc_g6

0x2247,	// (0x0002acdd) volume_set_pane_vc_g7

0x2899,	// (0x0002b32f) volume_set_pane_vc_g8

0x28a2,	// (0x0002b338) volume_set_pane_vc_g9

0x28ab,	// (0x0002b341) volume_set_pane_vc_g10

0x0009,

0xf999,	// (0x0003842f) volume_set_pane_vc_g

0xd8cb,	// (0x00036361) volume_set_pane_vc

0xd8d3,	// (0x00036369) button_value_adjust_pane_cp1_vc

0xd8dd,	// (0x00036373) list_highlight_pane_cp2_vc

0xd8e6,	// (0x0003637c) list_set_pane_vc_ParamLimits

0xd8e6,	// (0x0003637c) list_set_pane_vc

0xd944,	// (0x000363da) main_pane_set_vc_t1_ParamLimits

0xd944,	// (0x000363da) main_pane_set_vc_t1

0xd959,	// (0x000363ef) main_pane_set_vc_t2_ParamLimits

0xd959,	// (0x000363ef) main_pane_set_vc_t2

0xd96b,	// (0x00036401) main_pane_set_vc_t3_ParamLimits

0xd96b,	// (0x00036401) main_pane_set_vc_t3

0xd97d,	// (0x00036413) main_pane_set_vc_t4_ParamLimits

0xd97d,	// (0x00036413) main_pane_set_vc_t4

0x0003,

0x0176,	// (0x00028c0c) main_pane_set_vc_t_ParamLimits

0x0176,	// (0x00028c0c) main_pane_set_vc_t

0xd98f,	// (0x00036425) setting_code_pane_vc_ParamLimits

0xd98f,	// (0x00036425) setting_code_pane_vc

0xd99e,	// (0x00036434) setting_slider_graphic_pane_vc

0xd99e,	// (0x00036434) setting_slider_pane_vc

0xd99e,	// (0x00036434) setting_text_pane_vc

0xd99e,	// (0x00036434) setting_volume_pane_vc

0xd9a6,	// (0x0003643c) scroll_pane_cp121_vc

0xb2e5,	// (0x00033d7b) set_content_pane_vc

0xd9ae,	// (0x00036444) button_value_adjust_pane_g1

0xd9b7,	// (0x0003644d) button_value_adjust_pane_g2

0x0001,

0x01c9,	// (0x00028c5f) button_value_adjust_pane_g

0xd9c0,	// (0x00036456) form_field_slider_wide_pane_vc_t1_ParamLimits

0xd9c0,	// (0x00036456) form_field_slider_wide_pane_vc_t1

0xd9d4,	// (0x0003646a) form_field_slider_wide_pane_vc_t2_ParamLimits

0xd9d4,	// (0x0003646a) form_field_slider_wide_pane_vc_t2

0x0002,

0x01ce,	// (0x00028c64) form_field_slider_wide_pane_vc_t_ParamLimits

0x01ce,	// (0x00028c64) form_field_slider_wide_pane_vc_t

0x8cab,	// (0x00031741) input_focus_pane_cp10_vc_ParamLimits

0x8cab,	// (0x00031741) input_focus_pane_cp10_vc

0xda00,	// (0x00036496) slider_cont_pane_cp1_vc_ParamLimits

0xda00,	// (0x00036496) slider_cont_pane_cp1_vc

0xda10,	// (0x000364a6) slider_form_pane_g1_cp2

0xd846,	// (0x000362dc) slider_form_pane_g2_cp2

0xda3d,	// (0x000364d3) form_field_slider_pane_vc_t3

0xda4b,	// (0x000364e1) form_field_slider_pane_vc_t4

0xda59,	// (0x000364ef) slider_form_pane_vc_ParamLimits

0xda59,	// (0x000364ef) slider_form_pane_vc

0xda66,	// (0x000364fc) form_field_slider_pane_vc_t1_ParamLimits

0xda66,	// (0x000364fc) form_field_slider_pane_vc_t1

0xd9d4,	// (0x0003646a) form_field_slider_pane_vc_t2_ParamLimits

0xd9d4,	// (0x0003646a) form_field_slider_pane_vc_t2

0x0001,

0x01e0,	// (0x00028c76) form_field_slider_pane_vc_t_ParamLimits

0x01e0,	// (0x00028c76) form_field_slider_pane_vc_t

0x8cab,	// (0x00031741) input_focus_pane_cp9_vc_ParamLimits

0x8cab,	// (0x00031741) input_focus_pane_cp9_vc

0xda82,	// (0x00036518) slider_cont_pane_vc_ParamLimits

0xda82,	// (0x00036518) slider_cont_pane_vc

0xda94,	// (0x0003652a) list_form_graphic_pane_cp_vc_ParamLimits

0xda94,	// (0x0003652a) list_form_graphic_pane_cp_vc

0xc251,	// (0x00034ce7) form_field_popup_wide_pane_vc_g1

0xdaa9,	// (0x0003653f) form_field_popup_wide_pane_vc_t1_ParamLimits

0xdaa9,	// (0x0003653f) form_field_popup_wide_pane_vc_t1

0xb30b,	// (0x00033da1) input_focus_pane_cp8_vc_ParamLimits

0xb30b,	// (0x00033da1) input_focus_pane_cp8_vc

0xdaee,	// (0x00036584) list_form_wide_pane_vc_ParamLimits

0xdaee,	// (0x00036584) list_form_wide_pane_vc

0xdafa,	// (0x00036590) list_form_graphic_pane_vc_g1

0xdb02,	// (0x00036598) list_form_graphic_pane_vc_t1_ParamLimits

0xdb02,	// (0x00036598) list_form_graphic_pane_vc_t1

0x8cc9,	// (0x0003175f) list_highlight_pane_cp5_vc_ParamLimits

0x8cc9,	// (0x0003175f) list_highlight_pane_cp5_vc

0xdb1e,	// (0x000365b4) list_form_graphic_pane_vc_ParamLimits

0xdb1e,	// (0x000365b4) list_form_graphic_pane_vc

0xc251,	// (0x00034ce7) form_field_popup_pane_vc_g1

0xdb34,	// (0x000365ca) form_field_popup_pane_vc_t1_ParamLimits

0xdb34,	// (0x000365ca) form_field_popup_pane_vc_t1

0xb30b,	// (0x00033da1) input_focus_pane_cp7_vc_ParamLimits

0xb30b,	// (0x00033da1) input_focus_pane_cp7_vc

0xdb4b,	// (0x000365e1) list_form_pane_vc_ParamLimits

0xdb4b,	// (0x000365e1) list_form_pane_vc

0xdb57,	// (0x000365ed) data_form_pane_vc_t1_ParamLimits

0xdb57,	// (0x000365ed) data_form_pane_vc_t1

0xb35a,	// (0x00033df0) input_focus_pane_vc_g1

0xb362,	// (0x00033df8) input_focus_pane_vc_g2

0xb36a,	// (0x00033e00) input_focus_pane_vc_g3

0xb372,	// (0x00033e08) input_focus_pane_vc_g4

0xb37a,	// (0x00033e10) input_focus_pane_vc_g5

0xb382,	// (0x00033e18) input_focus_pane_vc_g6

0xb38a,	// (0x00033e20) input_focus_pane_vc_g7

0xb392,	// (0x00033e28) input_focus_pane_vc_g8

0xb39a,	// (0x00033e30) input_focus_pane_vc_g9

0x8c53,	// (0x000316e9) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x00038128) input_focus_pane_vc_g

0xc245,	// (0x00034cdb) data_form_pane_vc_ParamLimits

0xc245,	// (0x00034cdb) data_form_pane_vc

0xc251,	// (0x00034ce7) form_field_data_pane_vc_g1

0xdb72,	// (0x00036608) form_field_data_pane_vc_t1_ParamLimits

0xdb72,	// (0x00036608) form_field_data_pane_vc_t1

0xb30b,	// (0x00033da1) input_focus_pane_vc_ParamLimits

0xb30b,	// (0x00033da1) input_focus_pane_vc

0xdb8c,	// (0x00036622) button_value_adjust_pane_cp3_vc

0xdb94,	// (0x0003662a) button_value_adjust_pane_cp5_vc

0xdb9c,	// (0x00036632) form_field_data_pane_vc_ParamLimits

0xdb9c,	// (0x00036632) form_field_data_pane_vc

0xdbb3,	// (0x00036649) form_field_data_pane_vc_cp2

0xdbbb,	// (0x00036651) form_field_data_wide_pane_vc_ParamLimits

0xdbbb,	// (0x00036651) form_field_data_wide_pane_vc

0xdbd1,	// (0x00036667) form_field_data_wide_pane_vc_cp2

0xdbd9,	// (0x0003666f) form_field_popup_pane_vc_ParamLimits

0xdbd9,	// (0x0003666f) form_field_popup_pane_vc

0xdbf0,	// (0x00036686) form_field_popup_wide_pane_vc_ParamLimits

0xdbf0,	// (0x00036686) form_field_popup_wide_pane_vc

0xdc06,	// (0x0003669c) form_field_slider_pane_vc_ParamLimits

0xdc06,	// (0x0003669c) form_field_slider_pane_vc

0xdc19,	// (0x000366af) form_field_slider_wide_pane_vc_ParamLimits

0xdc19,	// (0x000366af) form_field_slider_wide_pane_vc

0x9eb5,	// (0x0003294b) grid_touch_1_pane_ParamLimits

0x9eb5,	// (0x0003294b) grid_touch_1_pane

0x9ec9,	// (0x0003295f) grid_touch_2_pane_ParamLimits

0x9ec9,	// (0x0003295f) grid_touch_2_pane

0xdc2c,	// (0x000366c2) touch_pane_g1_ParamLimits

0xdc2c,	// (0x000366c2) touch_pane_g1

0xdc3a,	// (0x000366d0) cell_app_pane_cp_wide_ParamLimits

0xdc3a,	// (0x000366d0) cell_app_pane_cp_wide

0xdc4b,	// (0x000366e1) grid_popup_fast_wide_pane_ParamLimits

0xdc4b,	// (0x000366e1) grid_popup_fast_wide_pane

0xdc5f,	// (0x000366f5) scroll_pane_cp19_ParamLimits

0xdc5f,	// (0x000366f5) scroll_pane_cp19

0x8c5d,	// (0x000316f3) bg_popup_window_pane_cp20

0xdc73,	// (0x00036709) listscroll_popup_fast_wide_pane

0xd54b,	// (0x00035fe1) grid_indicator_nsta_pane

0xdc7b,	// (0x00036711) clock_nsta_pane_g1

0xdc84,	// (0x0003671a) clock_nsta_pane_t1

0x9ef3,	// (0x00032989) cell_indicator_nsta_pane_ParamLimits

0x9ef3,	// (0x00032989) cell_indicator_nsta_pane

0xdc2c,	// (0x000366c2) cell_indicator_nsta_pane_g1

0x9f10,	// (0x000329a6) cell_indicator_nsta_pane_g2

0x0001,

0xf9f8,	// (0x0003848e) cell_indicator_nsta_pane_g

0xdca0,	// (0x00036736) clock_nsta_pane_cp

0xdca8,	// (0x0003673e) indicator_nsta_pane_cp

0xdcb0,	// (0x00036746) nsta_clock_indic_pane_g1

0x8d05,	// (0x0003179b) grid_indicator_pane

0xb771,	// (0x00034207) scroll_pane_cp29

0x1297,	// (0x00029d2d) indicator_nsta_pane_cp2_ParamLimits

0x1297,	// (0x00029d2d) indicator_nsta_pane_cp2

0x8cc9,	// (0x0003175f) main_apps_wheel_pane

0xc392,	// (0x00034e28) form_midp_field_text_pane_ParamLimits

0xc4c1,	// (0x00034f57) scroll_bar_cp050_ParamLimits

0xdd11,	// (0x000367a7) cell_indicator_pane_ParamLimits

0xdd11,	// (0x000367a7) cell_indicator_pane

0xdd2c,	// (0x000367c2) cell_indicator_pane_g1

0x9f26,	// (0x000329bc) grid_wheel_folder_pane_ParamLimits

0x9f26,	// (0x000329bc) grid_wheel_folder_pane

0x9f34,	// (0x000329ca) list_wheel_apps_pane_ParamLimits

0x9f34,	// (0x000329ca) list_wheel_apps_pane

0x9f42,	// (0x000329d8) main_apps_wheel_pane_g1_ParamLimits

0x9f42,	// (0x000329d8) main_apps_wheel_pane_g1

0x9f4e,	// (0x000329e4) main_apps_wheel_pane_g2_ParamLimits

0x9f4e,	// (0x000329e4) main_apps_wheel_pane_g2

0x0001,

0xf9fd,	// (0x00038493) main_apps_wheel_pane_g_ParamLimits

0xf9fd,	// (0x00038493) main_apps_wheel_pane_g

0x9f5c,	// (0x000329f2) main_apps_wheel_pane_t1_ParamLimits

0x9f5c,	// (0x000329f2) main_apps_wheel_pane_t1

0x9f70,	// (0x00032a06) list_wheel_apps_pane_g1

0x9f78,	// (0x00032a0e) list_wheel_apps_pane_g2

0x9f80,	// (0x00032a16) list_wheel_apps_pane_g3

0x9f88,	// (0x00032a1e) list_wheel_apps_pane_g4

0x9f92,	// (0x00032a28) list_wheel_apps_pane_g5

0x0004,

0xfa02,	// (0x00038498) list_wheel_apps_pane_g

0xbbd5,	// (0x0003466b) navi_icon_text_pane

0x809c,	// (0x00030b32) aid_fill_nsta

0xdd36,	// (0x000367cc) navi_icon_text_pane_g1

0xdd42,	// (0x000367d8) navi_icon_text_pane_t1

0xba77,	// (0x0003450d) list_set_graphic_pane_t1_ParamLimits

0xba77,	// (0x0003450d) list_set_graphic_pane_t1

0xcbd9,	// (0x0003566f) popup_midp_note_alarm_window_t6_ParamLimits

0xcbd9,	// (0x0003566f) popup_midp_note_alarm_window_t6

0xcbeb,	// (0x00035681) popup_midp_note_alarm_window_t7_ParamLimits

0xcbeb,	// (0x00035681) popup_midp_note_alarm_window_t7

0xcbfd,	// (0x00035693) popup_midp_note_alarm_window_t8_ParamLimits

0xcbfd,	// (0x00035693) popup_midp_note_alarm_window_t8

0xcc0f,	// (0x000356a5) popup_midp_note_alarm_window_t9_ParamLimits

0xcc0f,	// (0x000356a5) popup_midp_note_alarm_window_t9

0xcc21,	// (0x000356b7) popup_midp_note_alarm_window_t10_ParamLimits

0xcc21,	// (0x000356b7) popup_midp_note_alarm_window_t10

0xcc33,	// (0x000356c9) popup_midp_note_alarm_window_t11_ParamLimits

0xcc33,	// (0x000356c9) popup_midp_note_alarm_window_t11

0xcc45,	// (0x000356db) scroll_pane_cp17_ParamLimits

0xcc45,	// (0x000356db) scroll_pane_cp17

0x221a,	// (0x0002acb0) volume_small_pane_cp_g1

0x29e3,	// (0x0002b479) volume_small_pane_cp_g2

0x29ec,	// (0x0002b482) volume_small_pane_cp_g3

0x222c,	// (0x0002acc2) volume_small_pane_cp_g4

0x29f5,	// (0x0002b48b) volume_small_pane_cp_g5

0x2887,	// (0x0002b31d) volume_small_pane_cp_g6

0x223e,	// (0x0002acd4) volume_small_pane_cp_g7

0x29fe,	// (0x0002b494) volume_small_pane_cp_g8

0x2a07,	// (0x0002b49d) volume_small_pane_cp_g9

0x2250,	// (0x0002ace6) volume_small_pane_cp_g10

0xbd73,	// (0x00034809) midp_ticker_pane_g1_ParamLimits

0xbd7f,	// (0x00034815) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x000381f4) midp_ticker_pane_g_ParamLimits

0xbd8b,	// (0x00034821) midp_ticker_pane_t1_ParamLimits

0x80c0,	// (0x00030b56) aid_fill_nsta_2

0xc4ad,	// (0x00034f43) list_form2_midp_pane

0xd31f,	// (0x00035db5) midp_editing_number_pane_ParamLimits

0xd32e,	// (0x00035dc4) midp_ticker_pane_ParamLimits

0xdd54,	// (0x000367ea) form2_midp_field_pane

0xdd5c,	// (0x000367f2) scroll_pane_cp51

0xdd7c,	// (0x00036812) form2_midp_button_pane_ParamLimits

0xdd7c,	// (0x00036812) form2_midp_button_pane

0xdd8e,	// (0x00036824) form2_midp_content_pane_ParamLimits

0xdd8e,	// (0x00036824) form2_midp_content_pane

0xdda8,	// (0x0003683e) form2_midp_field_choice_group_pane

0xddb0,	// (0x00036846) form2_midp_field_pane_g1

0xddb8,	// (0x0003684e) form2_midp_field_pane_g2

0xddc0,	// (0x00036856) form2_midp_field_pane_g3

0xddc8,	// (0x0003685e) form2_midp_field_pane_g4

0x0003,

0x0237,	// (0x00028ccd) form2_midp_field_pane_g

0xddd0,	// (0x00036866) form2_midp_gauge_slider_pane

0xddd8,	// (0x0003686e) form2_midp_gauge_wait_pane

0xdde0,	// (0x00036876) form2_midp_image_pane_ParamLimits

0xdde0,	// (0x00036876) form2_midp_image_pane

0xddfb,	// (0x00036891) form2_midp_label_pane_ParamLimits

0xddfb,	// (0x00036891) form2_midp_label_pane

0x9fc5,	// (0x00032a5b) form2_midp_label_pane_cp_ParamLimits

0x9fc5,	// (0x00032a5b) form2_midp_label_pane_cp

0xde14,	// (0x000368aa) form2_midp_string_pane_ParamLimits

0xde14,	// (0x000368aa) form2_midp_string_pane

0x54fc,	// (0x0002df92) form2_midp_text_pane_ParamLimits

0x54fc,	// (0x0002df92) form2_midp_text_pane

0xde26,	// (0x000368bc) form2_midp_time_pane

0xde36,	// (0x000368cc) input_focus_pane_cp51_ParamLimits

0xde36,	// (0x000368cc) input_focus_pane_cp51

0xde4e,	// (0x000368e4) form2_midp_label_pane_t1_ParamLimits

0xde4e,	// (0x000368e4) form2_midp_label_pane_t1

0x5515,	// (0x0002dfab) form2_mdip_text_pane_t1_ParamLimits

0x5515,	// (0x0002dfab) form2_mdip_text_pane_t1

0x5533,	// (0x0002dfc9) form2_midp_time_pane_t1

0xde96,	// (0x0003692c) form2_midp_gauge_slider_pane_t1

0x9fe6,	// (0x00032a7c) form2_midp_gauge_slider_pane_t2

0x9ffa,	// (0x00032a90) form2_midp_gauge_slider_pane_t3

0x0002,

0xfa27,	// (0x000384bd) form2_midp_gauge_slider_pane_t

0xdea8,	// (0x0003693e) form2_midp_slider_pane

0xdeb4,	// (0x0003694a) form2_midp_gauge_wait_pane_t1

0xdec2,	// (0x00036958) form2_midp_wait_pane_ParamLimits

0xdec2,	// (0x00036958) form2_midp_wait_pane

0xa00e,	// (0x00032aa4) list_single_2graphic_pane_cp4_ParamLimits

0xa00e,	// (0x00032aa4) list_single_2graphic_pane_cp4

0x8550,	// (0x00030fe6) list_single_midp_graphic_pane_cp_ParamLimits

0x8550,	// (0x00030fe6) list_single_midp_graphic_pane_cp

0x8c5d,	// (0x000316f3) list_highlight_pane_cp20

0xdeee,	// (0x00036984) list_single_2graphic_pane_g1_cp4

0xd6c3,	// (0x00036159) list_single_2graphic_pane_g2_cp4

0xdef6,	// (0x0003698c) list_single_2graphic_pane_t1_cp4

0x8cc9,	// (0x0003175f) list_highlight_pane_cp21

0xdf05,	// (0x0003699b) list_single_midp_graphic_pane_g4_cp

0xdf14,	// (0x000369aa) list_single_midp_graphic_pane_t1_cp

0xa024,	// (0x00032aba) form2_mdip_string_pane_t1_ParamLimits

0xa024,	// (0x00032aba) form2_mdip_string_pane_t1

0x8c5d,	// (0x000316f3) bg_wml_button_pane_cp2

0x8c53,	// (0x000316e9) form2_midp_image_pane_g1

0x4b0a,	// (0x0002d5a0) list_double_large_graphic_pane_g5_ParamLimits

0x4b0a,	// (0x0002d5a0) list_double_large_graphic_pane_g5

0xb464,	// (0x00033efa) midp_form_pane_ParamLimits

0x8cc9,	// (0x0003175f) main_apps_wheel_pane_ParamLimits

0x7df2,	// (0x00030888) popup_preview_window_ParamLimits

0x7df2,	// (0x00030888) popup_preview_window

0x1c15,	// (0x0002a6ab) popup_touch_info_window_ParamLimits

0x1c15,	// (0x0002a6ab) popup_touch_info_window

0x1c33,	// (0x0002a6c9) popup_touch_menu_window_ParamLimits

0x1c33,	// (0x0002a6c9) popup_touch_menu_window

0x8c49,	// (0x000316df) bg_popup_sub_pane_cp6

0xdf29,	// (0x000369bf) list_touch_menu_pane

0xdf31,	// (0x000369c7) list_single_touch_menu_pane_ParamLimits

0xdf31,	// (0x000369c7) list_single_touch_menu_pane

0xdf45,	// (0x000369db) list_single_touch_menu_pane_t1

0x8cc9,	// (0x0003175f) bg_popup_sub_pane_cp7_ParamLimits

0x8cc9,	// (0x0003175f) bg_popup_sub_pane_cp7

0xdf53,	// (0x000369e9) heading_sub_pane

0xdf5b,	// (0x000369f1) list_touch_info_pane_ParamLimits

0xdf5b,	// (0x000369f1) list_touch_info_pane

0xdf6a,	// (0x00036a00) list_single_touch_info_pane_ParamLimits

0xdf6a,	// (0x00036a00) list_single_touch_info_pane

0xdf7c,	// (0x00036a12) list_single_touch_info_pane_t1

0xdf8a,	// (0x00036a20) list_single_touch_info_pane_t2

0x0001,

0x024e,	// (0x00028ce4) list_single_touch_info_pane_t

0xbd49,	// (0x000347df) bg_popup_heading_pane_cp

0xdf98,	// (0x00036a2e) heading_sub_pane_t1

0xc20b,	// (0x00034ca1) bg_popup_preview_window_pane_cp_ParamLimits

0xc20b,	// (0x00034ca1) bg_popup_preview_window_pane_cp

0xdf53,	// (0x000369e9) heading_preview_pane

0xdf5b,	// (0x000369f1) list_preview_pane_ParamLimits

0xdf5b,	// (0x000369f1) list_preview_pane

0xdfa6,	// (0x00036a3c) popup_preview_window_g1

0xdf6a,	// (0x00036a00) list_single_preview_pane_ParamLimits

0xdf6a,	// (0x00036a00) list_single_preview_pane

0xdfae,	// (0x00036a44) list_single_preview_pane_g1

0xdfb6,	// (0x00036a4c) list_single_preview_pane_t1

0xdf7c,	// (0x00036a12) list_single_preview_pane_t2

0x0001,

0x0253,	// (0x00028ce9) list_single_preview_pane_t

0xdfc4,	// (0x00036a5a) bg_popup_heading_pane_cp2_ParamLimits

0xdfc4,	// (0x00036a5a) bg_popup_heading_pane_cp2

0xdfda,	// (0x00036a70) heading_preview_pane_g1

0xdfe2,	// (0x00036a78) heading_preview_pane_t1_ParamLimits

0xdfe2,	// (0x00036a78) heading_preview_pane_t1

0x8d1c,	// (0x000317b2) soft_indicator_pane_t1_ParamLimits

0x9283,	// (0x00031d19) scroll_pane_ParamLimits

0xb66a,	// (0x00034100) scroll_sc2_left_pane

0xb673,	// (0x00034109) scroll_sc2_right_pane

0xb692,	// (0x00034128) scroll_bg_pane_g1_ParamLimits

0xb6a7,	// (0x0003413d) scroll_bg_pane_g2_ParamLimits

0xb6bf,	// (0x00034155) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x0003817f) scroll_bg_pane_g_ParamLimits

0xb692,	// (0x00034128) scroll_handle_pane_g1_ParamLimits

0xb6e1,	// (0x00034177) scroll_handle_pane_g2_ParamLimits

0xb6bf,	// (0x00034155) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x00038186) scroll_handle_pane_g_ParamLimits

0x16e5,	// (0x0002a17b) popup_choice_list_window_ParamLimits

0x16e5,	// (0x0002a17b) popup_choice_list_window

0xc0e1,	// (0x00034b77) choice_list_pane

0xc163,	// (0x00034bf9) cell_toolbar_pane_t1

0xc18b,	// (0x00034c21) toolbar_button_pane_ParamLimits

0xd07f,	// (0x00035b15) ai_gene_pane_1_t2_ParamLimits

0xd07f,	// (0x00035b15) ai_gene_pane_1_t2

0x0001,

0x0054,	// (0x00028aea) ai_gene_pane_1_t_ParamLimits

0x0054,	// (0x00028aea) ai_gene_pane_1_t

0xdfff,	// (0x00036a95) scroll_sc2_left_pane_g1

0xdfff,	// (0x00036a95) scroll_sc2_right_pane_g1

0xb464,	// (0x00033efa) bg_popup_sub_pane_cp10

0xe009,	// (0x00036a9f) list_choice_list_pane

0xe022,	// (0x00036ab8) list_single_choice_list_pane_ParamLimits

0xe022,	// (0x00036ab8) list_single_choice_list_pane

0xe035,	// (0x00036acb) list_single_choice_list_pane_g1

0xb44f,	// (0x00033ee5) list_single_choice_list_pane_t1_ParamLimits

0xb44f,	// (0x00033ee5) list_single_choice_list_pane_t1

0xe03d,	// (0x00036ad3) choice_list_pane_g1

0xe045,	// (0x00036adb) choice_list_pane_t1

0x8c49,	// (0x000316df) input_focus_pane_cp11

0xb5d6,	// (0x0003406c) title_pane_stacon_g2_ParamLimits

0xb5d6,	// (0x0003406c) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x00038165) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x00038165) title_pane_stacon_g

0xbd49,	// (0x000347df) cursor_press_pane

0x7aab,	// (0x00030541) popup_fep_hwr_window_ParamLimits

0x7aab,	// (0x00030541) popup_fep_hwr_window

0x1805,	// (0x0002a29b) popup_fep_vkb_window_ParamLimits

0x1805,	// (0x0002a29b) popup_fep_vkb_window

0xe053,	// (0x00036ae9) cursor_press_pane_g1

0x0002,

0xfa49,	// (0x000384df) fep_vkb_side_pane_g_ParamLimits

0x2bfb,	// (0x0002b691) fep_hwr_candidate_pane_ParamLimits

0x2bfb,	// (0x0002b691) fep_hwr_candidate_pane

0x2c25,	// (0x0002b6bb) fep_hwr_side_pane_ParamLimits

0x2c25,	// (0x0002b6bb) fep_hwr_side_pane

0x2c45,	// (0x0002b6db) fep_hwr_top_pane_ParamLimits

0x2c45,	// (0x0002b6db) fep_hwr_top_pane

0x2c5d,	// (0x0002b6f3) fep_hwr_write_pane_ParamLimits

0x2c5d,	// (0x0002b6f3) fep_hwr_write_pane

0xfa49,	// (0x000384df) fep_vkb_side_pane_g

0xe05b,	// (0x00036af1) fep_hwr_top_pane_g1

0xe06d,	// (0x00036b03) fep_hwr_top_pane_g2

0x2c97,	// (0x0002b72d) fep_hwr_top_pane_g3

0x0002,

0xfa2e,	// (0x000384c4) fep_hwr_top_pane_g

0x2cac,	// (0x0002b742) fep_hwr_top_text_pane

0xb837,	// (0x000342cd) fep_hwr_top_text_pane_g1

0xe0a3,	// (0x00036b39) fep_hwr_top_text_pane_t1

0x2da2,	// (0x0002b838) fep_hwr_candidate_pane_g1

0xe1ce,	// (0x00036c64) fep_vkb_keypad_pane_g3_ParamLimits

0xe1ce,	// (0x00036c64) fep_vkb_keypad_pane_g3

0xe1f6,	// (0x00036c8c) fep_vkb_keypad_pane_g4_ParamLimits

0xe1f6,	// (0x00036c8c) fep_vkb_keypad_pane_g4

0xe265,	// (0x00036cfb) fep_vkb_bottom_pane_g2_ParamLimits

0xe265,	// (0x00036cfb) fep_vkb_bottom_pane_g2

0x0001,

0x0283,	// (0x00028d19) fep_vkb_bottom_pane_g_ParamLimits

0x0283,	// (0x00028d19) fep_vkb_bottom_pane_g

0xdfff,	// (0x00036a95) cell_vkb_side_pane_g2

0x0001,

0x028d,	// (0x00028d23) cell_vkb_side_pane_g

0xe2a9,	// (0x00036d3f) cell_vkb_side_pane_t1

0xe2b7,	// (0x00036d4d) cell_vkb_side_pane_t1_copy1

0xdfff,	// (0x00036a95) bg_fep_vkb_candidate_pane_g2

0xe38d,	// (0x00036e23) cell_vkb_candidate_pane_ParamLimits

0xe0b1,	// (0x00036b47) aid_size_cell_vkb_ParamLimits

0xe0b1,	// (0x00036b47) aid_size_cell_vkb

0xe38d,	// (0x00036e23) cell_vkb_candidate_pane

0x2f7e,	// (0x0002ba14) bg_popup_fep_shadow_pane_g1

0xa0b4,	// (0x00032b4a) fep_vkb_bottom_pane_ParamLimits

0xa0b4,	// (0x00032b4a) fep_vkb_bottom_pane

0xe13c,	// (0x00036bd2) fep_vkb_candidate_pane_ParamLimits

0xe13c,	// (0x00036bd2) fep_vkb_candidate_pane

0xa0d9,	// (0x00032b6f) fep_vkb_keypad_pane_ParamLimits

0xa0d9,	// (0x00032b6f) fep_vkb_keypad_pane

0xa10e,	// (0x00032ba4) fep_vkb_side_pane_ParamLimits

0xa10e,	// (0x00032ba4) fep_vkb_side_pane

0xa14a,	// (0x00032be0) fep_vkb_top_pane_ParamLimits

0xa14a,	// (0x00032be0) fep_vkb_top_pane

0xe162,	// (0x00036bf8) fep_vkb_top_pane_g1_ParamLimits

0xe162,	// (0x00036bf8) fep_vkb_top_pane_g1

0xe171,	// (0x00036c07) fep_vkb_top_pane_g2_ParamLimits

0xe171,	// (0x00036c07) fep_vkb_top_pane_g2

0xe180,	// (0x00036c16) fep_vkb_top_pane_g3_ParamLimits

0xe180,	// (0x00036c16) fep_vkb_top_pane_g3

0x0003,

0x0273,	// (0x00028d09) fep_vkb_top_pane_g_ParamLimits

0x0273,	// (0x00028d09) fep_vkb_top_pane_g

0xe19e,	// (0x00036c34) fep_vkb_top_text_pane_ParamLimits

0xe19e,	// (0x00036c34) fep_vkb_top_text_pane

0xa17f,	// (0x00032c15) fep_vkb_side_pane_g1_ParamLimits

0xa17f,	// (0x00032c15) fep_vkb_side_pane_g1

0xe1bd,	// (0x00036c53) grid_vkb_side_pane_ParamLimits

0xe1bd,	// (0x00036c53) grid_vkb_side_pane

0x2f86,	// (0x0002ba1c) bg_popup_fep_shadow_pane_g2

0x2f8f,	// (0x0002ba25) bg_popup_fep_shadow_pane_g3

0x2f97,	// (0x0002ba2d) bg_popup_fep_shadow_pane_g4

0x2fa0,	// (0x0002ba36) bg_popup_fep_shadow_pane_g5

0x2faa,	// (0x0002ba40) bg_popup_fep_shadow_pane_g6

0x2fb2,	// (0x0002ba48) bg_popup_fep_shadow_pane_g7

0xb372,	// (0x00033e08) bg_popup_fep_shadow_pane_g8

0xe214,	// (0x00036caa) grid_vkb_keypad_number_pane_ParamLimits

0xe214,	// (0x00036caa) grid_vkb_keypad_number_pane

0xe224,	// (0x00036cba) grid_vkb_keypad_pane_ParamLimits

0xe224,	// (0x00036cba) grid_vkb_keypad_pane

0xe24a,	// (0x00036ce0) fep_vkb_bottom_pane_g1_ParamLimits

0xe24a,	// (0x00036ce0) fep_vkb_bottom_pane_g1

0xe273,	// (0x00036d09) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xe273,	// (0x00036d09) grid_vkb_keypad_bottom_left_pane

0xe288,	// (0x00036d1e) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xe288,	// (0x00036d1e) grid_vkb_keypad_bottom_right_pane

0xe29d,	// (0x00036d33) fep_vkb_top_text_pane_g1

0xa1c6,	// (0x00032c5c) fep_vkb_top_text_pane_t1

0xa1d8,	// (0x00032c6e) cell_vkb_side_pane_ParamLimits

0xa1d8,	// (0x00032c6e) cell_vkb_side_pane

0xdfff,	// (0x00036a95) cell_vkb_side_pane_g1

0xe2c5,	// (0x00036d5b) cell_vkb_keypad_pane_ParamLimits

0xe2c5,	// (0x00036d5b) cell_vkb_keypad_pane

0xe33a,	// (0x00036dd0) cell_vkb_keypad_pane_g1

0x0008,

0xfa55,	// (0x000384eb) bg_popup_fep_shadow_pane_g

0x2fc4,	// (0x0002ba5a) cell_hwr_side_pane_g1

0x2fc4,	// (0x0002ba5a) cell_hwr_side_pane_g2

0xe344,	// (0x00036dda) cell_vkb_keypad_pane_t1

0xa1ee,	// (0x00032c84) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa1ee,	// (0x00032c84) cell_vkb_keypad_bottom_left_pane

0xa203,	// (0x00032c99) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa203,	// (0x00032c99) cell_vkb_keypad_bottom_right_pane

0xdfff,	// (0x00036a95) cell_vkb_keypad_bottom_left_pane_g1

0xdfff,	// (0x00036a95) cell_vkb_keypad_bottom_right_pane_g1

0xe352,	// (0x00036de8) cell_vkb_keypad_number_pane_ParamLimits

0xe352,	// (0x00036de8) cell_vkb_keypad_number_pane

0xe371,	// (0x00036e07) cell_vkb_keypad_number_pane_g1

0xe37b,	// (0x00036e11) cell_vkb_keypad_number_pane_g2

0xe384,	// (0x00036e1a) cell_vkb_keypad_number_pane_g3

0x0002,

0x0292,	// (0x00028d28) cell_vkb_keypad_number_pane_g

0xe344,	// (0x00036dda) cell_vkb_keypad_number_pane_t1

0xe3a8,	// (0x00036e3e) fep_vkb_candidate_pane_g1

0x0001,

0xfa68,	// (0x000384fe) cell_hwr_side_pane_g

0xe3c1,	// (0x00036e57) cell_hwr_side_pane_t1

0x2fce,	// (0x0002ba64) cell_hwr_side_pane_t1_copy1

0x2fdc,	// (0x0002ba72) cell_hwr_candidate_pane_g1

0x300b,	// (0x0002baa1) cell_hwr_candidate_pane_t1

0xdfff,	// (0x00036a95) cell_vkb_candidate_pane_g2

0xe405,	// (0x00036e9b) cell_vkb_candidate_pane_t1

0x2bc2,	// (0x0002b658) bg_popup_fep_shadow_pane_ParamLimits

0x2bc2,	// (0x0002b658) bg_popup_fep_shadow_pane

0x2c77,	// (0x0002b70d) bg_fep_hwr_top_pane_g4

0xe07f,	// (0x00036b15) bg_hwr_side_pane_g1_ParamLimits

0xe07f,	// (0x00036b15) bg_hwr_side_pane_g1

0x871d,	// (0x000311b3) cell_hwr_side_pane_ParamLimits

0x871d,	// (0x000311b3) cell_hwr_side_pane

0x2d23,	// (0x0002b7b9) fep_hwr_write_pane_g1_ParamLimits

0x2d23,	// (0x0002b7b9) fep_hwr_write_pane_g1

0x2d30,	// (0x0002b7c6) fep_hwr_write_pane_g2_ParamLimits

0x2d30,	// (0x0002b7c6) fep_hwr_write_pane_g2

0x2d3d,	// (0x0002b7d3) fep_hwr_write_pane_g3_ParamLimits

0x2d3d,	// (0x0002b7d3) fep_hwr_write_pane_g3

0x873d,	// (0x000311d3) fep_hwr_write_pane_g4_ParamLimits

0x873d,	// (0x000311d3) fep_hwr_write_pane_g4

0x0005,

0xfa35,	// (0x000384cb) fep_hwr_write_pane_g_ParamLimits

0xfa35,	// (0x000384cb) fep_hwr_write_pane_g

0x2c77,	// (0x0002b70d) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2c77,	// (0x0002b70d) bg_fep_hwr_candidate_pane_g2

0x2d60,	// (0x0002b7f6) cell_hwr_candidate_pane_ParamLimits

0x2d60,	// (0x0002b7f6) cell_hwr_candidate_pane

0x2da2,	// (0x0002b838) fep_hwr_candidate_pane_g1_ParamLimits

0xe0df,	// (0x00036b75) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe0df,	// (0x00036b75) bg_popup_fep_shadow_pane_cp2

0xe190,	// (0x00036c26) fep_vkb_top_pane_g4_ParamLimits

0xe190,	// (0x00036c26) fep_vkb_top_pane_g4

0xe1af,	// (0x00036c45) fep_vkb_side_pane_g2_ParamLimits

0xe1af,	// (0x00036c45) fep_vkb_side_pane_g2

0x959f,	// (0x00032035) list_setting_pane_t4_ParamLimits

0x959f,	// (0x00032035) list_setting_pane_t4

0x9621,	// (0x000320b7) list_setting_number_pane_t5_ParamLimits

0x9621,	// (0x000320b7) list_setting_number_pane_t5

0x76cf,	// (0x00030165) list_double_heading_pane_cp2_ParamLimits

0x76cf,	// (0x00030165) list_double_heading_pane_cp2

0x96dc,	// (0x00032172) list_double_heading_pane_g1_cp2_ParamLimits

0x96dc,	// (0x00032172) list_double_heading_pane_g1_cp2

0xb319,	// (0x00033daf) list_double_heading_pane_g2_cp2_ParamLimits

0xb319,	// (0x00033daf) list_double_heading_pane_g2_cp2

0xe413,	// (0x00036ea9) list_double_heading_pane_t1_cp2_ParamLimits

0xe413,	// (0x00036ea9) list_double_heading_pane_t1_cp2

0xe429,	// (0x00036ebf) list_double_heading_pane_t2_cp2_ParamLimits

0xe429,	// (0x00036ebf) list_double_heading_pane_t2_cp2

0x8c41,	// (0x000316d7) aid_value_unit2

0x09c6,	// (0x0002945c) popup_preview_fixed_window

0x8dfc,	// (0x00031892) bg_popup_preview_window_pane_cp02

0xe43b,	// (0x00036ed1) list_preview_fixed_pane

0xe481,	// (0x00036f17) list_empty_pane_fp_ParamLimits

0xe481,	// (0x00036f17) list_empty_pane_fp

0xe481,	// (0x00036f17) list_single_cale_day_pane_fp_ParamLimits

0xe481,	// (0x00036f17) list_single_cale_day_pane_fp

0xe481,	// (0x00036f17) list_single_graphic_heading_pane_fp_ParamLimits

0xe481,	// (0x00036f17) list_single_graphic_heading_pane_fp

0xe481,	// (0x00036f17) list_single_graphic_pane_fp_ParamLimits

0xe481,	// (0x00036f17) list_single_graphic_pane_fp

0xe481,	// (0x00036f17) list_single_heading_pane_fp_ParamLimits

0xe481,	// (0x00036f17) list_single_heading_pane_fp

0xe481,	// (0x00036f17) list_single_pane_fp_ParamLimits

0xe481,	// (0x00036f17) list_single_pane_fp

0xe497,	// (0x00036f2d) list_single_pane_fp_g1_ParamLimits

0xe497,	// (0x00036f2d) list_single_pane_fp_g1

0x4979,	// (0x0002d40f) list_single_pane_fp_g2_ParamLimits

0x4979,	// (0x0002d40f) list_single_pane_fp_g2

0x5546,	// (0x0002dfdc) list_single_pane_fp_g3_ParamLimits

0x5546,	// (0x0002dfdc) list_single_pane_fp_g3

0xe4a3,	// (0x00036f39) list_single_pane_fp_g4_ParamLimits

0xe4a3,	// (0x00036f39) list_single_pane_fp_g4

0x0003,

0xfa7b,	// (0x00038511) list_single_pane_fp_g_ParamLimits

0xfa7b,	// (0x00038511) list_single_pane_fp_g

0x555a,	// (0x0002dff0) list_single_pane_fp_t1_ParamLimits

0x555a,	// (0x0002dff0) list_single_pane_fp_t1

0x5571,	// (0x0002e007) list_single_graphic_pane_fp_g1_ParamLimits

0x5571,	// (0x0002e007) list_single_graphic_pane_fp_g1

0xe497,	// (0x00036f2d) list_single_graphic_pane_fp_g2_ParamLimits

0xe497,	// (0x00036f2d) list_single_graphic_pane_fp_g2

0x4979,	// (0x0002d40f) list_single_graphic_pane_fp_g3_ParamLimits

0x4979,	// (0x0002d40f) list_single_graphic_pane_fp_g3

0x5546,	// (0x0002dfdc) list_single_graphic_pane_fp_g4_ParamLimits

0x5546,	// (0x0002dfdc) list_single_graphic_pane_fp_g4

0xe4a3,	// (0x00036f39) list_single_graphic_pane_fp_g5_ParamLimits

0xe4a3,	// (0x00036f39) list_single_graphic_pane_fp_g5

0x0004,

0xfa84,	// (0x0003851a) list_single_graphic_pane_fp_g_ParamLimits

0xfa84,	// (0x0003851a) list_single_graphic_pane_fp_g

0x557d,	// (0x0002e013) list_single_graphic_pane_fp_t1_ParamLimits

0x557d,	// (0x0002e013) list_single_graphic_pane_fp_t1

0x5571,	// (0x0002e007) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5571,	// (0x0002e007) list_single_graphic_heading_pane_fp_g1

0xe497,	// (0x00036f2d) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xe497,	// (0x00036f2d) list_single_graphic_heading_pane_fp_g2

0x4979,	// (0x0002d40f) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4979,	// (0x0002d40f) list_single_graphic_heading_pane_fp_g3

0x5546,	// (0x0002dfdc) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5546,	// (0x0002dfdc) list_single_graphic_heading_pane_fp_g4

0xe4a3,	// (0x00036f39) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xe4a3,	// (0x00036f39) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfa84,	// (0x0003851a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfa84,	// (0x0003851a) list_single_graphic_heading_pane_fp_g

0x5593,	// (0x0002e029) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5593,	// (0x0002e029) list_single_graphic_heading_pane_fp_t1

0x55a9,	// (0x0002e03f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x55a9,	// (0x0002e03f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfa8f,	// (0x00038525) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfa8f,	// (0x00038525) list_single_graphic_heading_pane_fp_t

0x55bb,	// (0x0002e051) list_single_cale_day_pane_fp_g1_ParamLimits

0x55bb,	// (0x0002e051) list_single_cale_day_pane_fp_g1

0xe4af,	// (0x00036f45) list_single_cale_day_pane_fp_g2_ParamLimits

0xe4af,	// (0x00036f45) list_single_cale_day_pane_fp_g2

0x55f3,	// (0x0002e089) list_single_cale_day_pane_fp_g3_ParamLimits

0x55f3,	// (0x0002e089) list_single_cale_day_pane_fp_g3

0x561b,	// (0x0002e0b1) list_single_cale_day_pane_fp_g4_ParamLimits

0x561b,	// (0x0002e0b1) list_single_cale_day_pane_fp_g4

0x563f,	// (0x0002e0d5) list_single_cale_day_pane_fp_g5_ParamLimits

0x563f,	// (0x0002e0d5) list_single_cale_day_pane_fp_g5

0x0004,

0xfa94,	// (0x0003852a) list_single_cale_day_pane_fp_g_ParamLimits

0xfa94,	// (0x0003852a) list_single_cale_day_pane_fp_g

0x5663,	// (0x0002e0f9) list_single_cale_day_pane_fp_t1_ParamLimits

0x5663,	// (0x0002e0f9) list_single_cale_day_pane_fp_t1

0x5689,	// (0x0002e11f) list_single_cale_day_pane_fp_t2_ParamLimits

0x5689,	// (0x0002e11f) list_single_cale_day_pane_fp_t2

0x56a2,	// (0x0002e138) list_single_cale_day_pane_fp_t3_ParamLimits

0x56a2,	// (0x0002e138) list_single_cale_day_pane_fp_t3

0x0002,

0xfa9f,	// (0x00038535) list_single_cale_day_pane_fp_t_ParamLimits

0xfa9f,	// (0x00038535) list_single_cale_day_pane_fp_t

0xe497,	// (0x00036f2d) list_empty_pane_fp_g1_ParamLimits

0xe497,	// (0x00036f2d) list_empty_pane_fp_g1

0x56bb,	// (0x0002e151) list_empty_pane_fp_t1

0x56c9,	// (0x0002e15f) list_empty_pane_fp_t2

0x0001,

0xfaa6,	// (0x0003853c) list_empty_pane_fp_t

0xe497,	// (0x00036f2d) list_single_heading_pane_fp_g1_ParamLimits

0xe497,	// (0x00036f2d) list_single_heading_pane_fp_g1

0x4979,	// (0x0002d40f) list_single_heading_pane_fp_g2_ParamLimits

0x4979,	// (0x0002d40f) list_single_heading_pane_fp_g2

0x5546,	// (0x0002dfdc) list_single_heading_pane_fp_g3_ParamLimits

0x5546,	// (0x0002dfdc) list_single_heading_pane_fp_g3

0x0002,

0xfaab,	// (0x00038541) list_single_heading_pane_fp_g_ParamLimits

0xfaab,	// (0x00038541) list_single_heading_pane_fp_g

0x56d7,	// (0x0002e16d) list_single_heading_pane_fp_t1_ParamLimits

0x56d7,	// (0x0002e16d) list_single_heading_pane_fp_t1

0x56e9,	// (0x0002e17f) list_single_heading_pane_fp_t2_ParamLimits

0x56e9,	// (0x0002e17f) list_single_heading_pane_fp_t2

0x0001,

0xfab2,	// (0x00038548) list_single_heading_pane_fp_t_ParamLimits

0xfab2,	// (0x00038548) list_single_heading_pane_fp_t

0xb470,	// (0x00033f06) aid_size_cell_fast

0x8ddf,	// (0x00031875) soft_indicator_pane_cp1_t1

0xb4aa,	// (0x00033f40) cell_app_pane_cp2_ParamLimits

0xb4aa,	// (0x00033f40) cell_app_pane_cp2

0x2be4,	// (0x0002b67a) fep_hwr_candidate_drop_down_list_pane

0x2dbc,	// (0x0002b852) fep_hwr_candidate_pane_g3_ParamLimits

0x2dbc,	// (0x0002b852) fep_hwr_candidate_pane_g3

0xaad7,	// (0x0003356d) fep_hwr_candidate_pane_g4_ParamLimits

0xaad7,	// (0x0003356d) fep_hwr_candidate_pane_g4

0x0002,

0xfa42,	// (0x000384d8) fep_hwr_candidate_pane_g_ParamLimits

0xfa42,	// (0x000384d8) fep_hwr_candidate_pane_g

0xe12b,	// (0x00036bc1) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe12b,	// (0x00036bc1) fep_vkb_candidate_drop_down_list_pane

0xe3b0,	// (0x00036e46) fep_vkb_candidate_pane_g3

0xe3b8,	// (0x00036e4e) fep_vkb_candidate_pane_g4

0x0002,

0x0299,	// (0x00028d2f) fep_vkb_candidate_pane_g

0x2fdc,	// (0x0002ba72) cell_hwr_candidate_pane_g1_ParamLimits

0x2fea,	// (0x0002ba80) cell_hwr_candidate_pane_g3_ParamLimits

0x2fea,	// (0x0002ba80) cell_hwr_candidate_pane_g3

0xf4b2,	// (0x00037f48) cell_hwr_candidate_pane_g4_ParamLimits

0xf4b2,	// (0x00037f48) cell_hwr_candidate_pane_g4

0x0002,

0xfa6d,	// (0x00038503) cell_hwr_candidate_pane_g_ParamLimits

0xfa6d,	// (0x00038503) cell_hwr_candidate_pane_g

0xe3cf,	// (0x00036e65) cell_vkb_candidate_pane_g3_ParamLimits

0xe3cf,	// (0x00036e65) cell_vkb_candidate_pane_g3

0xe3ea,	// (0x00036e80) cell_vkb_candidate_pane_g4_ParamLimits

0xe3ea,	// (0x00036e80) cell_vkb_candidate_pane_g4

0xe4bb,	// (0x00036f51) cell_app_pane_cp2_g1_ParamLimits

0xe4bb,	// (0x00036f51) cell_app_pane_cp2_g1

0xe4d9,	// (0x00036f6f) cell_app_pane_cp2_g2_ParamLimits

0xe4d9,	// (0x00036f6f) cell_app_pane_cp2_g2

0x0001,

0xfab7,	// (0x0003854d) cell_app_pane_cp2_g_ParamLimits

0xfab7,	// (0x0003854d) cell_app_pane_cp2_g

0xe4e5,	// (0x00036f7b) cell_app_pane_cp2_t1_ParamLimits

0xe4e5,	// (0x00036f7b) cell_app_pane_cp2_t1

0xb30b,	// (0x00033da1) grid_highlight_pane_cp1_ParamLimits

0xb30b,	// (0x00033da1) grid_highlight_pane_cp1

0x3029,	// (0x0002babf) cell_hwr_candidate_pane_cp1_ParamLimits

0x3029,	// (0x0002babf) cell_hwr_candidate_pane_cp1

0x2fdc,	// (0x0002ba72) fep_hwr_candidate_drop_down_list_pane_g1

0x3048,	// (0x0002bade) fep_hwr_candidate_drop_down_list_pane_g2

0x3055,	// (0x0002baeb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfabc,	// (0x00038552) fep_hwr_candidate_drop_down_list_pane_g

0x3062,	// (0x0002baf8) fep_hwr_candidate_drop_down_list_scroll_pane

0x306b,	// (0x0002bb01) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x306b,	// (0x0002bb01) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x3078,	// (0x0002bb0e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x3078,	// (0x0002bb0e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x3085,	// (0x0002bb1b) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x3085,	// (0x0002bb1b) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x3092,	// (0x0002bb28) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x3092,	// (0x0002bb28) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x30ad,	// (0x0002bb43) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x30ad,	// (0x0002bb43) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x30c8,	// (0x0002bb5e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x30c8,	// (0x0002bb5e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x30e3,	// (0x0002bb79) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x30e3,	// (0x0002bb79) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x30fe,	// (0x0002bb94) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x30fe,	// (0x0002bb94) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfac3,	// (0x00038559) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfac3,	// (0x00038559) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xe4f7,	// (0x00036f8d) cell_vkb_candidate_pane_cp1_ParamLimits

0xe4f7,	// (0x00036f8d) cell_vkb_candidate_pane_cp1

0xe190,	// (0x00036c26) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe190,	// (0x00036c26) fep_vkb_candidate_drop_down_list_pane_g1

0xe517,	// (0x00036fad) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xe517,	// (0x00036fad) fep_vkb_candidate_drop_down_list_pane_g2

0xe524,	// (0x00036fba) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xe524,	// (0x00036fba) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfad4,	// (0x0003856a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfad4,	// (0x0003856a) fep_vkb_candidate_drop_down_list_pane_g

0xe531,	// (0x00036fc7) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xe531,	// (0x00036fc7) fep_vkb_candidate_drop_down_list_scroll_pane

0xe53e,	// (0x00036fd4) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe53e,	// (0x00036fd4) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xe54b,	// (0x00036fe1) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe54b,	// (0x00036fe1) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xe557,	// (0x00036fed) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe557,	// (0x00036fed) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xe563,	// (0x00036ff9) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe563,	// (0x00036ff9) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xe584,	// (0x0003701a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe584,	// (0x0003701a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xe5a5,	// (0x0003703b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe5a5,	// (0x0003703b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xe5c6,	// (0x0003705c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe5c6,	// (0x0003705c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xe5e7,	// (0x0003707d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe5e7,	// (0x0003707d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfadb,	// (0x00038571) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfadb,	// (0x00038571) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7246,	// (0x0002fcdc) title_pane_g1_ParamLimits

0x7259,	// (0x0002fcef) title_pane_g2_ParamLimits

0xf554,	// (0x00037fea) title_pane_g_ParamLimits

0xb827,	// (0x000342bd) aid_call2_pane

0xb82f,	// (0x000342c5) aid_call_pane

0xb837,	// (0x000342cd) popup_clock_analogue_window_g1

0xb837,	// (0x000342cd) popup_clock_analogue_window_g2

0x10dc,	// (0x00029b72) popup_clock_analogue_window_g3

0x10e5,	// (0x00029b7b) popup_clock_analogue_window_g4

0x8c53,	// (0x000316e9) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x00038194) popup_clock_analogue_window_g

0x10ed,	// (0x00029b83) popup_clock_analogue_window_t1

0x1125,	// (0x00029bbb) clock_digital_number_pane_ParamLimits

0x1125,	// (0x00029bbb) clock_digital_number_pane

0x1131,	// (0x00029bc7) clock_digital_number_pane_cp02_ParamLimits

0x1131,	// (0x00029bc7) clock_digital_number_pane_cp02

0x113d,	// (0x00029bd3) clock_digital_number_pane_cp03_ParamLimits

0x113d,	// (0x00029bd3) clock_digital_number_pane_cp03

0x1149,	// (0x00029bdf) clock_digital_number_pane_cp04_ParamLimits

0x1149,	// (0x00029bdf) clock_digital_number_pane_cp04

0x1155,	// (0x00029beb) clock_digital_separator_pane_ParamLimits

0x1155,	// (0x00029beb) clock_digital_separator_pane

0x1161,	// (0x00029bf7) popup_clock_digital_window_t1_ParamLimits

0x1161,	// (0x00029bf7) popup_clock_digital_window_t1

0x8c53,	// (0x000316e9) clock_digital_number_pane_g1

0x8c53,	// (0x000316e9) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x0003819f) clock_digital_number_pane_g

0x8c53,	// (0x000316e9) clock_digital_separator_pane_g1

0x8c53,	// (0x000316e9) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x0003819f) clock_digital_separator_pane_g

0x809c,	// (0x00030b32) aid_fill_nsta_ParamLimits

0x81d2,	// (0x00030c68) indicator_nsta_pane_ParamLimits

0xc088,	// (0x00034b1e) popup_clock_analogue_window

0xc088,	// (0x00034b1e) popup_clock_digital_window

0xd54b,	// (0x00035fe1) grid_indicator_nsta_pane_ParamLimits

0xdc92,	// (0x00036728) clock_nsta_pane_t2

0x0001,

0x01ec,	// (0x00028c82) clock_nsta_pane_t

0x10a0,	// (0x00029b36) aid_size_max_handle

0x10aa,	// (0x00029b40) aid_size_min_handle

0xbd49,	// (0x000347df) editor_scroll_pane

0xe602,	// (0x00037098) ex_editor_pane

0xb42b,	// (0x00033ec1) scroll_pane_cp13

0x92af,	// (0x00031d45) scroll_pane_cp14

0xb866,	// (0x000342fc) scroll_pane_cp36

0x76e0,	// (0x00030176) list_single_graphic_hl_pane_cp2_ParamLimits

0x76e0,	// (0x00030176) list_single_graphic_hl_pane_cp2

0x98d6,	// (0x0003236c) list_single_graphic_hl_pane_ParamLimits

0x98d6,	// (0x0003236c) list_single_graphic_hl_pane

0x56ff,	// (0x0002e195) aid_size_min_hl_cp1

0xe60a,	// (0x000370a0) list_highlight_pane_cp34_ParamLimits

0xe60a,	// (0x000370a0) list_highlight_pane_cp34

0xe61b,	// (0x000370b1) list_single_graphic_hl_pane_g1_ParamLimits

0xe61b,	// (0x000370b1) list_single_graphic_hl_pane_g1

0x98fc,	// (0x00032392) list_single_graphic_hl_pane_g2_ParamLimits

0x98fc,	// (0x00032392) list_single_graphic_hl_pane_g2

0x98fc,	// (0x00032392) list_single_graphic_hl_pane_g3_ParamLimits

0x98fc,	// (0x00032392) list_single_graphic_hl_pane_g3

0x488e,	// (0x0002d324) list_single_graphic_hl_pane_g4_ParamLimits

0x488e,	// (0x0002d324) list_single_graphic_hl_pane_g4

0x9908,	// (0x0003239e) list_single_graphic_hl_pane_g5_ParamLimits

0x9908,	// (0x0003239e) list_single_graphic_hl_pane_g5

0x0004,

0xfaec,	// (0x00038582) list_single_graphic_hl_pane_g_ParamLimits

0xfaec,	// (0x00038582) list_single_graphic_hl_pane_g

0x991c,	// (0x000323b2) list_single_graphic_hl_pane_t1_ParamLimits

0x991c,	// (0x000323b2) list_single_graphic_hl_pane_t1

0xe628,	// (0x000370be) aid_size_min_hl_cp2

0xe631,	// (0x000370c7) list_highlight_pane_cp34_cp2_ParamLimits

0xe631,	// (0x000370c7) list_highlight_pane_cp34_cp2

0xe61b,	// (0x000370b1) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xe61b,	// (0x000370b1) list_single_graphic_hl_pane_g1_cp2

0xe63e,	// (0x000370d4) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xe63e,	// (0x000370d4) list_single_graphic_hl_pane_g2_cp2

0xe64a,	// (0x000370e0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe64a,	// (0x000370e0) list_single_graphic_hl_pane_g3_cp2

0x9871,	// (0x00032307) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9871,	// (0x00032307) list_single_graphic_hl_pane_g4_cp2

0xe658,	// (0x000370ee) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xe658,	// (0x000370ee) list_single_graphic_hl_pane_g5_cp2

0x789e,	// (0x00030334) control_pane_g4_ParamLimits

0x789e,	// (0x00030334) control_pane_g4

0xb464,	// (0x00033efa) bg_popup_sub_pane_cp10_ParamLimits

0xe009,	// (0x00036a9f) list_choice_list_pane_ParamLimits

0xe018,	// (0x00036aae) scroll_pane_cp23

0x8dfc,	// (0x00031892) bg_popup_preview_window_pane_cp02_ParamLimits

0xe43b,	// (0x00036ed1) list_preview_fixed_pane_ParamLimits

0xe451,	// (0x00036ee7) list_preview_fixed_pane_cp_ParamLimits

0xe451,	// (0x00036ee7) list_preview_fixed_pane_cp

0xe45d,	// (0x00036ef3) popup_preview_fixed_window_g1_ParamLimits

0xe45d,	// (0x00036ef3) popup_preview_fixed_window_g1

0xe469,	// (0x00036eff) popup_preview_fixed_window_g2_ParamLimits

0xe469,	// (0x00036eff) popup_preview_fixed_window_g2

0x0002,

0xfa74,	// (0x0003850a) popup_preview_fixed_window_g_ParamLimits

0xfa74,	// (0x0003850a) popup_preview_fixed_window_g

0x0f82,	// (0x00029a18) aid_navi_side_left_pane_ParamLimits

0x0f97,	// (0x00029a2d) aid_navi_side_right_pane_ParamLimits

0x0faf,	// (0x00029a45) navi_icon_pane_stacon_ParamLimits

0x0fc3,	// (0x00029a59) navi_navi_pane_stacon_ParamLimits

0x0faf,	// (0x00029a45) navi_text_pane_stacon_ParamLimits

0x0895,	// (0x0002932b) main_text_info_pane

0xe682,	// (0x00037118) listscroll_text_info_pane

0xe68a,	// (0x00037120) list_text_info_pane_ParamLimits

0xe68a,	// (0x00037120) list_text_info_pane

0xe699,	// (0x0003712f) scroll_pane_cp24_ParamLimits

0xe699,	// (0x0003712f) scroll_pane_cp24

0xa21e,	// (0x00032cb4) list_text_info_pane_t1_ParamLimits

0xa21e,	// (0x00032cb4) list_text_info_pane_t1

0x7a20,	// (0x000304b6) popup_fast_swap2_window_ParamLimits

0x7a20,	// (0x000304b6) popup_fast_swap2_window

0xe6b7,	// (0x0003714d) aid_size_cell_fast2

0x8c49,	// (0x000316df) bg_popup_window_pane_cp17

0xc4d9,	// (0x00034f6f) heading_pane_cp2

0x8fe2,	// (0x00031a78) listscroll_fast2_pane

0xe6c1,	// (0x00037157) grid_fast2_pane

0xe6cb,	// (0x00037161) listscroll_fast2_pane_g1

0xe6d3,	// (0x00037169) listscroll_fast2_pane_g2

0x0001,

0x0336,	// (0x00028dcc) listscroll_fast2_pane_g

0xb42b,	// (0x00033ec1) scroll_pane_cp26

0xe6dd,	// (0x00037173) cell_fast2_pane_ParamLimits

0xe6dd,	// (0x00037173) cell_fast2_pane

0xe6f2,	// (0x00037188) cell_fast2_pane_g1

0xe6fb,	// (0x00037191) cell_fast2_pane_g2

0xe704,	// (0x0003719a) cell_fast2_pane_g3

0x0002,

0x033b,	// (0x00028dd1) cell_fast2_pane_g

0x9076,	// (0x00031b0c) grid_highlight_pane_cp9

0x16c9,	// (0x0002a15f) main_eswt_pane_ParamLimits

0x16c9,	// (0x0002a15f) main_eswt_pane

0xe6ae,	// (0x00037144) list_single_text_info_pane

0xe70c,	// (0x000371a2) eswt_ctrl_button_pane

0xe70c,	// (0x000371a2) eswt_ctrl_canvas_pane

0xe714,	// (0x000371aa) eswt_ctrl_combo_pane

0xe70c,	// (0x000371a2) eswt_ctrl_default_pane

0xe70c,	// (0x000371a2) eswt_ctrl_label_pane

0xe71c,	// (0x000371b2) eswt_ctrl_wait_pane

0xe724,	// (0x000371ba) eswt_shell_pane

0x8c49,	// (0x000316df) listscroll_eswt_app_pane

0xe744,	// (0x000371da) popup_eswt_tasktip_window_ParamLimits

0xe744,	// (0x000371da) popup_eswt_tasktip_window

0xc20b,	// (0x00034ca1) bg_popup_window_pane_cp18

0xe755,	// (0x000371eb) eswt_control_pane_g1_ParamLimits

0xe755,	// (0x000371eb) eswt_control_pane_g1

0xe762,	// (0x000371f8) eswt_control_pane_g2_ParamLimits

0xe762,	// (0x000371f8) eswt_control_pane_g2

0xe76f,	// (0x00037205) eswt_control_pane_g3_ParamLimits

0xe76f,	// (0x00037205) eswt_control_pane_g3

0xe77c,	// (0x00037212) eswt_control_pane_g4_ParamLimits

0xe77c,	// (0x00037212) eswt_control_pane_g4

0x0003,

0x0342,	// (0x00028dd8) eswt_control_pane_g_ParamLimits

0x0342,	// (0x00028dd8) eswt_control_pane_g

0xb30b,	// (0x00033da1) bg_button_pane_ParamLimits

0xb30b,	// (0x00033da1) bg_button_pane

0x908b,	// (0x00031b21) common_borders_pane_copy2_ParamLimits

0x908b,	// (0x00031b21) common_borders_pane_copy2

0xe789,	// (0x0003721f) control_button_pane_g1_ParamLimits

0xe789,	// (0x0003721f) control_button_pane_g1

0xe795,	// (0x0003722b) control_button_pane_g2_ParamLimits

0xe795,	// (0x0003722b) control_button_pane_g2

0xe7a1,	// (0x00037237) control_button_pane_g3_ParamLimits

0xe7a1,	// (0x00037237) control_button_pane_g3

0x0002,

0x034b,	// (0x00028de1) control_button_pane_g_ParamLimits

0x034b,	// (0x00028de1) control_button_pane_g

0xe7b5,	// (0x0003724b) control_button_pane_t1

0xe7c3,	// (0x00037259) control_button_pane_t2

0x0001,

0x0352,	// (0x00028de8) control_button_pane_t

0xc197,	// (0x00034c2d) bg_button_pane_g1

0xc1a7,	// (0x00034c3d) bg_button_pane_g2

0xc19f,	// (0x00034c35) bg_button_pane_g3

0xc1b7,	// (0x00034c4d) bg_button_pane_g4

0xc1af,	// (0x00034c45) bg_button_pane_g5

0xc1bf,	// (0x00034c55) bg_button_pane_g6

0xc1c7,	// (0x00034c5d) bg_button_pane_g7

0xc1d7,	// (0x00034c6d) bg_button_pane_g8

0xc1cf,	// (0x00034c65) bg_button_pane_g9

0x0008,

0xf867,	// (0x000382fd) bg_button_pane_g

0xdfc4,	// (0x00036a5a) common_borders_pane_ParamLimits

0xdfc4,	// (0x00036a5a) common_borders_pane

0xe755,	// (0x000371eb) eswt_control_pane_g1_copy1_ParamLimits

0xe755,	// (0x000371eb) eswt_control_pane_g1_copy1

0xe762,	// (0x000371f8) eswt_control_pane_g2_copy1_ParamLimits

0xe762,	// (0x000371f8) eswt_control_pane_g2_copy1

0xe76f,	// (0x00037205) eswt_control_pane_g3_copy1_ParamLimits

0xe76f,	// (0x00037205) eswt_control_pane_g3_copy1

0xe77c,	// (0x00037212) eswt_control_pane_g4_copy1_ParamLimits

0xe77c,	// (0x00037212) eswt_control_pane_g4_copy1

0xdfff,	// (0x00036a95) bg_eswt_ctrl_canvas_pane_g1

0xdfc4,	// (0x00036a5a) common_borders_pane_cp2_ParamLimits

0xdfc4,	// (0x00036a5a) common_borders_pane_cp2

0xdfc4,	// (0x00036a5a) common_borders_pane_cp3_ParamLimits

0xdfc4,	// (0x00036a5a) common_borders_pane_cp3

0xe7d1,	// (0x00037267) separator_horizontal_pane

0xe7d9,	// (0x0003726f) separator_vertical_pane

0xe755,	// (0x000371eb) eswt_control_pane_g1_copy2_ParamLimits

0xe755,	// (0x000371eb) eswt_control_pane_g1_copy2

0xe762,	// (0x000371f8) eswt_control_pane_g2_copy2_ParamLimits

0xe762,	// (0x000371f8) eswt_control_pane_g2_copy2

0xe76f,	// (0x00037205) eswt_control_pane_g3_copy2_ParamLimits

0xe76f,	// (0x00037205) eswt_control_pane_g3_copy2

0xe77c,	// (0x00037212) eswt_control_pane_g4_copy2_ParamLimits

0xe77c,	// (0x00037212) eswt_control_pane_g4_copy2

0x8c49,	// (0x000316df) common_borders_pane_cp4

0xe7e2,	// (0x00037278) separator_horizontal_pane_g1

0xe7eb,	// (0x00037281) separator_horizontal_pane_g2

0xe7f4,	// (0x0003728a) separator_horizontal_pane_g3

0x0002,

0x0357,	// (0x00028ded) separator_horizontal_pane_g

0xe755,	// (0x000371eb) eswt_control_pane_g1_copy3_ParamLimits

0xe755,	// (0x000371eb) eswt_control_pane_g1_copy3

0xe762,	// (0x000371f8) eswt_control_pane_g2_copy3_ParamLimits

0xe762,	// (0x000371f8) eswt_control_pane_g2_copy3

0xe76f,	// (0x00037205) eswt_control_pane_g3_copy3_ParamLimits

0xe76f,	// (0x00037205) eswt_control_pane_g3_copy3

0xe77c,	// (0x00037212) eswt_control_pane_g4_copy3_ParamLimits

0xe77c,	// (0x00037212) eswt_control_pane_g4_copy3

0x8c49,	// (0x000316df) common_borders_pane_cp5

0xe7fd,	// (0x00037293) separator_vertical_pane_g1

0xe806,	// (0x0003729c) separator_vertical_pane_g2

0xe80f,	// (0x000372a5) separator_vertical_pane_g3

0x0002,

0x035e,	// (0x00028df4) separator_vertical_pane_g

0xe755,	// (0x000371eb) eswt_control_pane_g1_copy4_ParamLimits

0xe755,	// (0x000371eb) eswt_control_pane_g1_copy4

0xe762,	// (0x000371f8) eswt_control_pane_g2_copy4_ParamLimits

0xe762,	// (0x000371f8) eswt_control_pane_g2_copy4

0xe76f,	// (0x00037205) eswt_control_pane_g3_copy4_ParamLimits

0xe76f,	// (0x00037205) eswt_control_pane_g3_copy4

0xe77c,	// (0x00037212) eswt_control_pane_g4_copy4_ParamLimits

0xe77c,	// (0x00037212) eswt_control_pane_g4_copy4

0xe818,	// (0x000372ae) eswt_ctrl_combo_button_pane

0xe820,	// (0x000372b6) eswt_ctrl_input_pane

0xe828,	// (0x000372be) popup_choice_list_window_cp70

0xe830,	// (0x000372c6) eswt_ctrl_input_pane_t1

0x8c49,	// (0x000316df) input_focus_pane_cp70

0xdfc4,	// (0x00036a5a) bg_button_pane_cp70_ParamLimits

0xdfc4,	// (0x00036a5a) bg_button_pane_cp70

0xe83e,	// (0x000372d4) eswt_ctrl_combo_button_pane_g1

0xe846,	// (0x000372dc) wait_bar_pane_cp70

0xc20b,	// (0x00034ca1) bg_popup_window_pane_cp70_ParamLimits

0xc20b,	// (0x00034ca1) bg_popup_window_pane_cp70

0xe84e,	// (0x000372e4) popup_eswt_tasktip_window_t1

0xe864,	// (0x000372fa) wait_bar_pane_cp71_ParamLimits

0xe864,	// (0x000372fa) wait_bar_pane_cp71

0xe870,	// (0x00037306) grid_eswt_app_pane

0xb66a,	// (0x00034100) scroll_pane_cp70

0xa23b,	// (0x00032cd1) cell_eswt_app_pane_ParamLimits

0xa23b,	// (0x00032cd1) cell_eswt_app_pane

0xa265,	// (0x00032cfb) cell_eswt_app_pane_g1_ParamLimits

0xa265,	// (0x00032cfb) cell_eswt_app_pane_g1

0xa294,	// (0x00032d2a) cell_eswt_app_pane_g2_ParamLimits

0xa294,	// (0x00032d2a) cell_eswt_app_pane_g2

0x0001,

0xfaf7,	// (0x0003858d) cell_eswt_app_pane_g_ParamLimits

0xfaf7,	// (0x0003858d) cell_eswt_app_pane_g

0xa2b8,	// (0x00032d4e) cell_eswt_app_pane_t1_ParamLimits

0xa2b8,	// (0x00032d4e) cell_eswt_app_pane_t1

0xe879,	// (0x0003730f) grid_highlight_pane_cp70_ParamLimits

0xe879,	// (0x0003730f) grid_highlight_pane_cp70

0xbc2a,	// (0x000346c0) set_content_pane_g1

0xbf32,	// (0x000349c8) status_small_volume_pane

0x3207,	// (0x0002bc9d) status_small_volume_pane_g1

0x320f,	// (0x0002bca5) volume_small2_pane

0x3218,	// (0x0002bcae) volume_small2_pane_g1

0x3221,	// (0x0002bcb7) volume_small2_pane_g2

0x322a,	// (0x0002bcc0) volume_small2_pane_g3

0x3233,	// (0x0002bcc9) volume_small2_pane_g4

0x323c,	// (0x0002bcd2) volume_small2_pane_g5

0x3245,	// (0x0002bcdb) volume_small2_pane_g6

0x324e,	// (0x0002bce4) volume_small2_pane_g7

0x3257,	// (0x0002bced) volume_small2_pane_g8

0x3260,	// (0x0002bcf6) volume_small2_pane_g9

0x3269,	// (0x0002bcff) volume_small2_pane_g10

0x0009,

0xfafc,	// (0x00038592) volume_small2_pane_g

0xe29d,	// (0x00036d33) fep_vkb_top_text_pane_g1_ParamLimits

0xa1c6,	// (0x00032c5c) fep_vkb_top_text_pane_t1_ParamLimits

0xe475,	// (0x00036f0b) popup_preview_fixed_window_g3_ParamLimits

0xe475,	// (0x00036f0b) popup_preview_fixed_window_g3

0x802f,	// (0x00030ac5) popup_toolbar_trans_pane

0x9c2d,	// (0x000326c3) aid_height_set_list_ParamLimits

0xbfa7,	// (0x00034a3d) aid_size_parent_ParamLimits

0xb464,	// (0x00033efa) list_highlight_pane_cp2_ParamLimits

0xbc2a,	// (0x000346c0) set_content_pane_g1_ParamLimits

0x98e9,	// (0x0003237f) list_single_image_pane_ParamLimits

0x98e9,	// (0x0003237f) list_single_image_pane

0xa2ea,	// (0x00032d80) aid_size_cell_image_ParamLimits

0xa2ea,	// (0x00032d80) aid_size_cell_image

0xa2f7,	// (0x00032d8d) grid_single_image_pane_ParamLimits

0xa2f7,	// (0x00032d8d) grid_single_image_pane

0xe885,	// (0x0003731b) list_single_image_pane_g1_ParamLimits

0xe885,	// (0x0003731b) list_single_image_pane_g1

0xe891,	// (0x00037327) list_single_image_pane_g2_ParamLimits

0xe891,	// (0x00037327) list_single_image_pane_g2

0x0001,

0x037f,	// (0x00028e15) list_single_image_pane_g_ParamLimits

0x037f,	// (0x00028e15) list_single_image_pane_g

0xe8a5,	// (0x0003733b) list_single_image_pane_t1_ParamLimits

0xe8a5,	// (0x0003733b) list_single_image_pane_t1

0xa303,	// (0x00032d99) cell_image_list_pane_ParamLimits

0xa303,	// (0x00032d99) cell_image_list_pane

0xa317,	// (0x00032dad) cell_image_list_pane_g1

0xa320,	// (0x00032db6) cell_image_list_pane_g2

0x0001,

0xfb11,	// (0x000385a7) cell_image_list_pane_g

0xe8bb,	// (0x00037351) aid_size_cell_tb_trans_pane

0xb30b,	// (0x00033da1) bg_tb_trans_pane

0xe8cd,	// (0x00037363) grid_tb_trans_pane

0xc197,	// (0x00034c2d) bg_tb_trans_pane_g1

0xc1a7,	// (0x00034c3d) bg_tb_trans_pane_g2

0xc19f,	// (0x00034c35) bg_tb_trans_pane_g3

0xc1b7,	// (0x00034c4d) bg_tb_trans_pane_g4

0xc1af,	// (0x00034c45) bg_tb_trans_pane_g5

0xc1d7,	// (0x00034c6d) bg_tb_trans_pane_g6

0xc1cf,	// (0x00034c65) bg_tb_trans_pane_g7

0xc1bf,	// (0x00034c55) bg_tb_trans_pane_g8

0xc1c7,	// (0x00034c5d) bg_tb_trans_pane_g9

0x0008,

0xfb16,	// (0x000385ac) bg_tb_trans_pane_g

0xe8e1,	// (0x00037377) cell_toolbar_trans_pane_ParamLimits

0xe8e1,	// (0x00037377) cell_toolbar_trans_pane

0xdfff,	// (0x00036a95) cell_toolbar_trans_pane_g1

0x9fa9,	// (0x00032a3f) list_form2_midp_pane_t1

0x9fb7,	// (0x00032a4d) list_form2_midp_pane_t2

0x0001,

0xfa22,	// (0x000384b8) list_form2_midp_pane_t

0xdd5c,	// (0x000367f2) scroll_pane_cp51_ParamLimits

0xded3,	// (0x00036969) form2_midp_wait_pane_g1

0xdedc,	// (0x00036972) form2_midp_wait_pane_g2

0xdee5,	// (0x0003697b) form2_midp_wait_pane_g3

0x0002,

0x0247,	// (0x00028cdd) form2_midp_wait_pane_g

0x8cc9,	// (0x0003175f) list_highlight_pane_cp21_ParamLimits

0xdf05,	// (0x0003699b) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xdf14,	// (0x000369aa) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd350,	// (0x00035de6) list_single_2graphic_im_pane_ParamLimits

0xd350,	// (0x00035de6) list_single_2graphic_im_pane

0xe907,	// (0x0003739d) list_single_2graphic_im_pane_g1_ParamLimits

0xe907,	// (0x0003739d) list_single_2graphic_im_pane_g1

0xe918,	// (0x000373ae) list_single_2graphic_im_pane_g2_ParamLimits

0xe918,	// (0x000373ae) list_single_2graphic_im_pane_g2

0xe924,	// (0x000373ba) list_single_2graphic_im_pane_g3_ParamLimits

0xe924,	// (0x000373ba) list_single_2graphic_im_pane_g3

0x0003,

0x039c,	// (0x00028e32) list_single_2graphic_im_pane_g_ParamLimits

0x039c,	// (0x00028e32) list_single_2graphic_im_pane_g

0xe944,	// (0x000373da) list_single_2graphic_im_pane_t1_ParamLimits

0xe944,	// (0x000373da) list_single_2graphic_im_pane_t1

0xe481,	// (0x00036f17) list_single_graphic_2heading_pane_fp_ParamLimits

0xe481,	// (0x00036f17) list_single_graphic_2heading_pane_fp

0x5571,	// (0x0002e007) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5571,	// (0x0002e007) list_single_graphic_2heading_pane_fp_g1

0xe497,	// (0x00036f2d) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xe497,	// (0x00036f2d) list_single_graphic_2heading_pane_fp_g2

0x4979,	// (0x0002d40f) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4979,	// (0x0002d40f) list_single_graphic_2heading_pane_fp_g3

0x5546,	// (0x0002dfdc) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5546,	// (0x0002dfdc) list_single_graphic_2heading_pane_fp_g4

0xe4a3,	// (0x00036f39) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xe4a3,	// (0x00036f39) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfa84,	// (0x0003851a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfa84,	// (0x0003851a) list_single_graphic_2heading_pane_fp_g

0x574a,	// (0x0002e1e0) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x574a,	// (0x0002e1e0) list_single_graphic_2heading_pane_fp_t1

0x55a9,	// (0x0002e03f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x55a9,	// (0x0002e03f) list_single_graphic_2heading_pane_fp_t2

0x64c5,	// (0x0002ef5b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x64c5,	// (0x0002ef5b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfb29,	// (0x000385bf) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfb29,	// (0x000385bf) list_single_graphic_2heading_pane_fp_t

0xe08b,	// (0x00036b21) fep_hwr_write_pane_g5_ParamLimits

0xe08b,	// (0x00036b21) fep_hwr_write_pane_g5

0xe097,	// (0x00036b2d) fep_hwr_write_pane_g6_ParamLimits

0xe097,	// (0x00036b2d) fep_hwr_write_pane_g6

0xe724,	// (0x000371ba) eswt_shell_pane_ParamLimits

0xc20b,	// (0x00034ca1) bg_popup_window_pane_cp18_ParamLimits

0xd281,	// (0x00035d17) heading_pane_cp70

0xe84e,	// (0x000372e4) popup_eswt_tasktip_window_t1_ParamLimits

0x80f7,	// (0x00030b8d) aid_touch_tab_arrow_left

0x810d,	// (0x00030ba3) aid_touch_tab_arrow_right

0x7271,	// (0x0002fd07) title_pane_g3_ParamLimits

0x7271,	// (0x0002fd07) title_pane_g3

0xb2ca,	// (0x00033d60) set_value_pane_g1

0x802f,	// (0x00030ac5) popup_toolbar_trans_pane_ParamLimits

0xe8bb,	// (0x00037351) aid_size_cell_tb_trans_pane_ParamLimits

0xb30b,	// (0x00033da1) bg_tb_trans_pane_ParamLimits

0xe8cd,	// (0x00037363) grid_tb_trans_pane_ParamLimits

0x8dfc,	// (0x00031892) cont_note_pane_ParamLimits

0x8dfc,	// (0x00031892) cont_note_pane

0x908b,	// (0x00031b21) cont_snote2_single_text_pane_ParamLimits

0x908b,	// (0x00031b21) cont_snote2_single_text_pane

0x908b,	// (0x00031b21) cont_snote2_single_graphic_pane_ParamLimits

0x908b,	// (0x00031b21) cont_snote2_single_graphic_pane

0xc6ef,	// (0x00035185) cont_note_wait_pane_ParamLimits

0xc6ef,	// (0x00035185) cont_note_wait_pane

0xc6ef,	// (0x00035185) cont_note_image_pane_ParamLimits

0xc6ef,	// (0x00035185) cont_note_image_pane

0xe975,	// (0x0003740b) popup_note2_window_g1_ParamLimits

0xe975,	// (0x0003740b) popup_note2_window_g1

0xe9a6,	// (0x0003743c) popup_note2_window_t1_ParamLimits

0xe9a6,	// (0x0003743c) popup_note2_window_t1

0xe9eb,	// (0x00037481) popup_note2_window_t2_ParamLimits

0xe9eb,	// (0x00037481) popup_note2_window_t2

0xea30,	// (0x000374c6) popup_note2_window_t3_ParamLimits

0xea30,	// (0x000374c6) popup_note2_window_t3

0xea75,	// (0x0003750b) popup_note2_window_t4_ParamLimits

0xea75,	// (0x0003750b) popup_note2_window_t4

0x8e74,	// (0x0003190a) popup_note2_window_t5_ParamLimits

0x8e74,	// (0x0003190a) popup_note2_window_t5

0x0004,

0xfb30,	// (0x000385c6) popup_note2_window_t_ParamLimits

0xfb30,	// (0x000385c6) popup_note2_window_t

0xeaa4,	// (0x0003753a) popup_note2_image_window_g1_ParamLimits

0xeaa4,	// (0x0003753a) popup_note2_image_window_g1

0xeab0,	// (0x00037546) popup_note2_image_window_g2_ParamLimits

0xeab0,	// (0x00037546) popup_note2_image_window_g2

0x0001,

0x03bc,	// (0x00028e52) popup_note2_image_window_g_ParamLimits

0x03bc,	// (0x00028e52) popup_note2_image_window_g

0xeac2,	// (0x00037558) popup_note2_image_window_t1_ParamLimits

0xeac2,	// (0x00037558) popup_note2_image_window_t1

0xeada,	// (0x00037570) popup_note2_image_window_t2_ParamLimits

0xeada,	// (0x00037570) popup_note2_image_window_t2

0xeaf2,	// (0x00037588) popup_note2_image_window_t3_ParamLimits

0xeaf2,	// (0x00037588) popup_note2_image_window_t3

0x0002,

0x03c1,	// (0x00028e57) popup_note2_image_window_t_ParamLimits

0x03c1,	// (0x00028e57) popup_note2_image_window_t

0xc6fd,	// (0x00035193) popup_note2_wait_window_g1_ParamLimits

0xc6fd,	// (0x00035193) popup_note2_wait_window_g1

0xeb0e,	// (0x000375a4) popup_note2_wait_window_g2_ParamLimits

0xeb0e,	// (0x000375a4) popup_note2_wait_window_g2

0xc715,	// (0x000351ab) popup_note2_wait_window_g3_ParamLimits

0xc715,	// (0x000351ab) popup_note2_wait_window_g3

0x0002,

0x03c8,	// (0x00028e5e) popup_note2_wait_window_g_ParamLimits

0x03c8,	// (0x00028e5e) popup_note2_wait_window_g

0xeb1a,	// (0x000375b0) popup_note2_wait_window_t1_ParamLimits

0xeb1a,	// (0x000375b0) popup_note2_wait_window_t1

0xeb38,	// (0x000375ce) popup_note2_wait_window_t2_ParamLimits

0xeb38,	// (0x000375ce) popup_note2_wait_window_t2

0xeb56,	// (0x000375ec) popup_note2_wait_window_t3_ParamLimits

0xeb56,	// (0x000375ec) popup_note2_wait_window_t3

0xeb68,	// (0x000375fe) popup_note2_wait_window_t4_ParamLimits

0xeb68,	// (0x000375fe) popup_note2_wait_window_t4

0x0003,

0x03cf,	// (0x00028e65) popup_note2_wait_window_t_ParamLimits

0x03cf,	// (0x00028e65) popup_note2_wait_window_t

0xeb7a,	// (0x00037610) wait_bar2_pane_ParamLimits

0xeb7a,	// (0x00037610) wait_bar2_pane

0xeb92,	// (0x00037628) popup_snote2_single_text_window_g1_ParamLimits

0xeb92,	// (0x00037628) popup_snote2_single_text_window_g1

0xebba,	// (0x00037650) popup_snote2_single_text_window_t1_ParamLimits

0xebba,	// (0x00037650) popup_snote2_single_text_window_t1

0xec06,	// (0x0003769c) popup_snote2_single_text_window_t2_ParamLimits

0xec06,	// (0x0003769c) popup_snote2_single_text_window_t2

0xec52,	// (0x000376e8) popup_snote2_single_text_window_t3_ParamLimits

0xec52,	// (0x000376e8) popup_snote2_single_text_window_t3

0xec93,	// (0x00037729) popup_snote2_single_text_window_t4_ParamLimits

0xec93,	// (0x00037729) popup_snote2_single_text_window_t4

0xecc9,	// (0x0003775f) popup_snote2_single_text_window_t5_ParamLimits

0xecc9,	// (0x0003775f) popup_snote2_single_text_window_t5

0x0004,

0x03d8,	// (0x00028e6e) popup_snote2_single_text_window_t_ParamLimits

0x03d8,	// (0x00028e6e) popup_snote2_single_text_window_t

0xecf4,	// (0x0003778a) popup_snote2_single_graphic_window_g1_ParamLimits

0xecf4,	// (0x0003778a) popup_snote2_single_graphic_window_g1

0xed1c,	// (0x000377b2) popup_snote2_single_graphic_window_g2_ParamLimits

0xed1c,	// (0x000377b2) popup_snote2_single_graphic_window_g2

0x0001,

0x03e3,	// (0x00028e79) popup_snote2_single_graphic_window_g_ParamLimits

0x03e3,	// (0x00028e79) popup_snote2_single_graphic_window_g

0xed44,	// (0x000377da) popup_snote2_single_graphic_window_t1_ParamLimits

0xed44,	// (0x000377da) popup_snote2_single_graphic_window_t1

0xed90,	// (0x00037826) popup_snote2_single_graphic_window_t2_ParamLimits

0xed90,	// (0x00037826) popup_snote2_single_graphic_window_t2

0xec52,	// (0x000376e8) popup_snote2_single_graphic_window_t3_ParamLimits

0xec52,	// (0x000376e8) popup_snote2_single_graphic_window_t3

0xec93,	// (0x00037729) popup_snote2_single_graphic_window_t4_ParamLimits

0xec93,	// (0x00037729) popup_snote2_single_graphic_window_t4

0xecc9,	// (0x0003775f) popup_snote2_single_graphic_window_t5_ParamLimits

0xecc9,	// (0x0003775f) popup_snote2_single_graphic_window_t5

0x0004,

0x03e8,	// (0x00028e7e) popup_snote2_single_graphic_window_t_ParamLimits

0x03e8,	// (0x00028e7e) popup_snote2_single_graphic_window_t

0xdcf0,	// (0x00036786) clock_nsta_pane_cp2_t1

0xdcf0,	// (0x00036786) clock_nsta_pane_cp2_t2

0x0001,

0x0208,	// (0x00028c9e) clock_nsta_pane_cp2_t

0x4df2,	// (0x0002d888) form_field_data_wide_pane_g1_ParamLimits

0x96dc,	// (0x00032172) form_field_data_wide_pane_g2_ParamLimits

0x96dc,	// (0x00032172) form_field_data_wide_pane_g2

0xb319,	// (0x00033daf) form_field_data_wide_pane_g3_ParamLimits

0xb319,	// (0x00033daf) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x00038117) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x00038117) form_field_data_wide_pane_g

0x9edd,	// (0x00032973) grid_touch_3_pane_ParamLimits

0x9edd,	// (0x00032973) grid_touch_3_pane

0xa329,	// (0x00032dbf) cell_touch_3_pane_ParamLimits

0xa329,	// (0x00032dbf) cell_touch_3_pane

0xdfff,	// (0x00036a95) cell_touch_3_pane_g1

0xdfff,	// (0x00036a95) cell_touch_3_pane_g2

0x0001,

0x028d,	// (0x00028d23) cell_touch_3_pane_g

0x8ea6,	// (0x0003193c) cont_query_data_pane

0x8eae,	// (0x00031944) cont_query_data_pane_cp1

0xeddc,	// (0x00037872) button_value_adjust_pane_cp7

0xede4,	// (0x0003787a) query_popup_pane_cp3

0xb898,	// (0x0003432e) bg_popup_sub_pane_cp22_ParamLimits

0x11e1,	// (0x00029c77) navi_navi_volume_pane_cp2

0x11f9,	// (0x00029c8f) popup_side_volume_key_window_g2

0x1205,	// (0x00029c9b) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x000381ad) popup_side_volume_key_window_g

0x121f,	// (0x00029cb5) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x000381b4) popup_side_volume_key_window_t

0xbaf6,	// (0x0003458c) popup_side_volume_key_window_ParamLimits

0x93d4,	// (0x00031e6a) list_double_graphic_pane_g4_ParamLimits

0x93d4,	// (0x00031e6a) list_double_graphic_pane_g4

0x9da6,	// (0x0003283c) list_single_2heading_msg_pane_ParamLimits

0x9da6,	// (0x0003283c) list_single_2heading_msg_pane

0x9932,	// (0x000323c8) list_single_2heading_msg_pane_g1_ParamLimits

0x9932,	// (0x000323c8) list_single_2heading_msg_pane_g1

0x993e,	// (0x000323d4) list_single_2heading_msg_pane_g2_ParamLimits

0x993e,	// (0x000323d4) list_single_2heading_msg_pane_g2

0x9951,	// (0x000323e7) list_single_2heading_msg_pane_g3_ParamLimits

0x9951,	// (0x000323e7) list_single_2heading_msg_pane_g3

0x995d,	// (0x000323f3) list_single_2heading_msg_pane_g4_ParamLimits

0x995d,	// (0x000323f3) list_single_2heading_msg_pane_g4

0x0003,

0xfb3b,	// (0x000385d1) list_single_2heading_msg_pane_g_ParamLimits

0xfb3b,	// (0x000385d1) list_single_2heading_msg_pane_g

0x9975,	// (0x0003240b) list_single_2heading_msg_pane_t1_ParamLimits

0x9975,	// (0x0003240b) list_single_2heading_msg_pane_t1

0x999d,	// (0x00032433) list_single_2heading_msg_pane_t2_ParamLimits

0x999d,	// (0x00032433) list_single_2heading_msg_pane_t2

0x9a08,	// (0x0003249e) list_single_2heading_msg_pane_t3_ParamLimits

0x9a08,	// (0x0003249e) list_single_2heading_msg_pane_t3

0x65aa,	// (0x0002f040) list_single_2heading_msg_pane_t4_ParamLimits

0x65aa,	// (0x0002f040) list_single_2heading_msg_pane_t4

0x0003,

0xfb44,	// (0x000385da) list_single_2heading_msg_pane_t_ParamLimits

0xfb44,	// (0x000385da) list_single_2heading_msg_pane_t

0x8c67,	// (0x000316fd) title_pane_g4_ParamLimits

0x8c67,	// (0x000316fd) title_pane_g4

0x0ed2,	// (0x00029968) title_pane_stacon_g3_ParamLimits

0x0ed2,	// (0x00029968) title_pane_stacon_g3

0xe938,	// (0x000373ce) list_single_2graphic_im_pane_g4_ParamLimits

0xe938,	// (0x000373ce) list_single_2graphic_im_pane_g4

0xd09c,	// (0x00035b32) popup_side_volume_key_window_cp

0xd5d8,	// (0x0003606e) main_idle_act2_pane_t1

0x1fa0,	// (0x0002aa36) toolbar_button_pane_g10

0x757b,	// (0x00030011) popup_toolbar_window_cp1

0xdce1,	// (0x00036777) clock_nsta_pane_cp_t1

0xdce1,	// (0x00036777) clock_nsta_pane_cp_t2

0x0001,

0x0203,	// (0x00028c99) clock_nsta_pane_cp_t

0x11e1,	// (0x00029c77) navi_navi_volume_pane_cp2_ParamLimits

0x11ed,	// (0x00029c83) popup_side_volume_key_window_g1_ParamLimits

0x11f9,	// (0x00029c8f) popup_side_volume_key_window_g2_ParamLimits

0x1205,	// (0x00029c9b) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x000381ad) popup_side_volume_key_window_g_ParamLimits

0x2bd0,	// (0x0002b666) fep_hwr_aid_pane

0x2c77,	// (0x0002b70d) bg_fep_hwr_top_pane_g4_ParamLimits

0xe05b,	// (0x00036af1) fep_hwr_top_pane_g1_ParamLimits

0xe06d,	// (0x00036b03) fep_hwr_top_pane_g2_ParamLimits

0x2c97,	// (0x0002b72d) fep_hwr_top_pane_g3_ParamLimits

0xfa2e,	// (0x000384c4) fep_hwr_top_pane_g_ParamLimits

0x2cac,	// (0x0002b742) fep_hwr_top_text_pane_ParamLimits

0xce5f,	// (0x000358f5) aid_touch_tab_arrow_arrow_2

0xce68,	// (0x000358fe) aid_touch_tab_arrow_left_2

0x2be4,	// (0x0002b67a) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2c1b,	// (0x0002b6b1) fep_hwr_prediction_pane

0xe158,	// (0x00036bee) fep_vkb_prediction_pane

0xa1a6,	// (0x00032c3c) fep_vkb_side_pane_g3_ParamLimits

0xa1a6,	// (0x00032c3c) fep_vkb_side_pane_g3

0x2fdc,	// (0x0002ba72) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x3048,	// (0x0002bade) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x3055,	// (0x0002baeb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfabc,	// (0x00038552) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x32f6,	// (0x0002bd8c) fep_hwr_prediction_pane_g1

0x3300,	// (0x0002bd96) fep_hwr_prediction_pane_g2

0x3308,	// (0x0002bd9e) fep_hwr_prediction_pane_g3

0x3310,	// (0x0002bda6) fep_hwr_prediction_pane_g4

0x0003,

0xfb4d,	// (0x000385e3) fep_hwr_prediction_pane_g

0xedf5,	// (0x0003788b) fep_vkb_prediction_pane_g1

0xedff,	// (0x00037895) fep_vkb_prediction_pane_g2

0xee07,	// (0x0003789d) fep_vkb_prediction_pane_g3

0xee0f,	// (0x000378a5) fep_vkb_prediction_pane_g4

0x0003,

0x040e,	// (0x00028ea4) fep_vkb_prediction_pane_g

0x2506,	// (0x0002af9c) slider_set_pane_g3

0x251a,	// (0x0002afb0) slider_set_pane_g4

0x2532,	// (0x0002afc8) slider_set_pane_g5

0x2506,	// (0x0002af9c) slider_set_pane_g6

0x2548,	// (0x0002afde) slider_set_pane_g7

0xd306,	// (0x00035d9c) slider_form_pane_g3

0xd30f,	// (0x00035da5) slider_form_pane_g4

0xd317,	// (0x00035dad) slider_form_pane_g5

0xd306,	// (0x00035d9c) slider_form_pane_g6

0x9d74,	// (0x0003280a) slider_form_pane_g7

0xd84e,	// (0x000362e4) slider_set_pane_vc_g3

0xd857,	// (0x000362ed) slider_set_pane_vc_g4

0xd860,	// (0x000362f6) slider_set_pane_vc_g5

0xd84e,	// (0x000362e4) slider_set_pane_vc_g6

0xd869,	// (0x000362ff) slider_set_pane_vc_g7

0xda19,	// (0x000364af) slider_form_pane_vc_g1

0xda22,	// (0x000364b8) slider_form_pane_vc_g2

0xda2b,	// (0x000364c1) slider_form_pane_vc_g3

0xda19,	// (0x000364af) slider_form_pane_vc_g4

0xda34,	// (0x000364ca) slider_form_pane_vc_g5

0x0004,

0x01d5,	// (0x00028c6b) slider_form_pane_vc_g

0x0895,	// (0x0002932b) main_idle_act3_pane

0xee17,	// (0x000378ad) ai3_links_pane

0xa372,	// (0x00032e08) popup_ai3_data_window_ParamLimits

0xa372,	// (0x00032e08) popup_ai3_data_window

0x8c49,	// (0x000316df) grid_ai3_links_pane

0xa38a,	// (0x00032e20) cell_ai3_links_pane_ParamLimits

0xa38a,	// (0x00032e20) cell_ai3_links_pane

0xee20,	// (0x000378b6) bg_popup_sub_pane_cp11

0xee2d,	// (0x000378c3) cell_ai3_links_pane_g1

0x8c49,	// (0x000316df) bg_popup_sub_pane_cp12

0xee52,	// (0x000378e8) heading_ai3_data_pane

0xee5a,	// (0x000378f0) list_ai3_gene_pane

0xee66,	// (0x000378fc) popup_ai3_data_window_g1

0xee6e,	// (0x00037904) heading_ai3_data_pane_g1

0xee76,	// (0x0003790c) heading_ai3_data_pane_t1

0xee84,	// (0x0003791a) list_double_ai3_gene_pane_ParamLimits

0xee84,	// (0x0003791a) list_double_ai3_gene_pane

0xee91,	// (0x00037927) list_single_ai3_gene_pane_ParamLimits

0xee91,	// (0x00037927) list_single_ai3_gene_pane

0xdfc4,	// (0x00036a5a) list_highlight_pane_cp7_ParamLimits

0xdfc4,	// (0x00036a5a) list_highlight_pane_cp7

0xee9e,	// (0x00037934) list_single_a13_gene_pane_t1_ParamLimits

0xee9e,	// (0x00037934) list_single_a13_gene_pane_t1

0xeeb5,	// (0x0003794b) list_single_ai3_gene_pane_g1

0xeebe,	// (0x00037954) list_single_ai3_gene_pane_g2

0x0001,

0x0417,	// (0x00028ead) list_single_ai3_gene_pane_g

0xeec6,	// (0x0003795c) list_double_ai3_gene_pane_g1_ParamLimits

0xeec6,	// (0x0003795c) list_double_ai3_gene_pane_g1

0xeed2,	// (0x00037968) list_double_ai3_gene_pane_t1_ParamLimits

0xeed2,	// (0x00037968) list_double_ai3_gene_pane_t1

0xeeee,	// (0x00037984) list_double_ai3_gene_pane_t2_ParamLimits

0xeeee,	// (0x00037984) list_double_ai3_gene_pane_t2

0xef03,	// (0x00037999) list_double_ai3_gene_pane_t3_ParamLimits

0xef03,	// (0x00037999) list_double_ai3_gene_pane_t3

0x0002,

0x041c,	// (0x00028eb2) list_double_ai3_gene_pane_t_ParamLimits

0x041c,	// (0x00028eb2) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x64db,	// (0x0002ef71) aid_size_min_col_2

0xa35c,	// (0x00032df2) aid_size_min_msg_ParamLimits

0xa35c,	// (0x00032df2) aid_size_min_msg

0xa1ba,	// (0x00032c50) fep_vkb_top_text_pane_g2_ParamLimits

0xa1ba,	// (0x00032c50) fep_vkb_top_text_pane_g2

0x0001,

0xfa50,	// (0x000384e6) fep_vkb_top_text_pane_g_ParamLimits

0xfa50,	// (0x000384e6) fep_vkb_top_text_pane_g

0x0895,	// (0x0002932b) main_hc_apps_shell_pane

0xef20,	// (0x000379b6) grid_hc_apps_pane_ParamLimits

0xef20,	// (0x000379b6) grid_hc_apps_pane

0xef2f,	// (0x000379c5) list_hc_apps_pane

0xef37,	// (0x000379cd) scroll_pane_cp37_ParamLimits

0xef37,	// (0x000379cd) scroll_pane_cp37

0xa3a4,	// (0x00032e3a) cell_hc_apps_pane_ParamLimits

0xa3a4,	// (0x00032e3a) cell_hc_apps_pane

0xa462,	// (0x00032ef8) cell_hc_apps_pane_g1_ParamLimits

0xa462,	// (0x00032ef8) cell_hc_apps_pane_g1

0xef43,	// (0x000379d9) cell_hc_apps_pane_g2_ParamLimits

0xef43,	// (0x000379d9) cell_hc_apps_pane_g2

0xef5f,	// (0x000379f5) cell_hc_apps_pane_g3_ParamLimits

0xef5f,	// (0x000379f5) cell_hc_apps_pane_g3

0x0002,

0xfb56,	// (0x000385ec) cell_hc_apps_pane_g_ParamLimits

0xfb56,	// (0x000385ec) cell_hc_apps_pane_g

0xa48f,	// (0x00032f25) cell_hc_apps_pane_t1_ParamLimits

0xa48f,	// (0x00032f25) cell_hc_apps_pane_t1

0x8dfc,	// (0x00031892) grid_highlight_pane_cp10_ParamLimits

0x8dfc,	// (0x00031892) grid_highlight_pane_cp10

0xa4cd,	// (0x00032f63) list_single_hc_apps_pane_ParamLimits

0xa4cd,	// (0x00032f63) list_single_hc_apps_pane

0xa4fe,	// (0x00032f94) list_single_hc_apps_pane_g1

0x9a76,	// (0x0003250c) list_single_hc_apps_pane_g2

0x0001,

0xfb5d,	// (0x000385f3) list_single_hc_apps_pane_g

0x9a8f,	// (0x00032525) list_single_hc_apps_pane_g2_copy1

0x9aab,	// (0x00032541) list_single_hc_apps_pane_t1

0x8cc9,	// (0x0003175f) bg_set_opt_pane_cp_ParamLimits

0x0b9e,	// (0x00029634) setting_slider_pane_t1_ParamLimits

0x0bb7,	// (0x0002964d) setting_slider_pane_t2_ParamLimits

0x0bd1,	// (0x00029667) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00037ffa) setting_slider_pane_t_ParamLimits

0x0be9,	// (0x0002967f) slider_set_pane_ParamLimits

0x158e,	// (0x0002a024) control_pane_g5_ParamLimits

0x158e,	// (0x0002a024) control_pane_g5

0xd2c8,	// (0x00035d5e) slider_set_pane_g1_ParamLimits

0x24fa,	// (0x0002af90) slider_set_pane_g2_ParamLimits

0x2506,	// (0x0002af9c) slider_set_pane_g3_ParamLimits

0x251a,	// (0x0002afb0) slider_set_pane_g4_ParamLimits

0x2532,	// (0x0002afc8) slider_set_pane_g5_ParamLimits

0x2506,	// (0x0002af9c) slider_set_pane_g6_ParamLimits

0x2548,	// (0x0002afde) slider_set_pane_g7_ParamLimits

0xf917,	// (0x000383ad) slider_set_pane_g_ParamLimits

0xbbd5,	// (0x0003466b) navi_icon_text_pane_ParamLimits

0x80c0,	// (0x00030b56) aid_fill_nsta_2_ParamLimits

0x80f7,	// (0x00030b8d) aid_touch_tab_arrow_left_ParamLimits

0x810d,	// (0x00030ba3) aid_touch_tab_arrow_right_ParamLimits

0x81a8,	// (0x00030c3e) clock_nsta_pane_ParamLimits

0xce41,	// (0x000358d7) navi_icon_pane_g1_ParamLimits

0xce4d,	// (0x000358e3) navi_text_pane_t1_ParamLimits

0xdd36,	// (0x000367cc) navi_icon_text_pane_g1_ParamLimits

0xdd42,	// (0x000367d8) navi_icon_text_pane_t1_ParamLimits

0xa4fe,	// (0x00032f94) list_single_hc_apps_pane_g1_ParamLimits

0x9a76,	// (0x0003250c) list_single_hc_apps_pane_g2_ParamLimits

0xfb5d,	// (0x000385f3) list_single_hc_apps_pane_g_ParamLimits

0x9a8f,	// (0x00032525) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9aab,	// (0x00032541) list_single_hc_apps_pane_t1_ParamLimits

0x7176,	// (0x0002fc0c) popup_toolbar2_fixed_window_ParamLimits

0x7176,	// (0x0002fc0c) popup_toolbar2_fixed_window

0x8025,	// (0x00030abb) popup_toolbar2_float_window

0x8c49,	// (0x000316df) bg_popup_sub_pane_cp27

0xef81,	// (0x00037a17) grid_toolbar2_float_pane

0x8c49,	// (0x000316df) bg_popup_sub_pane_cp26

0xef81,	// (0x00037a17) grid_toolbar2_fixed_pane

0xa517,	// (0x00032fad) cell_toolbar2_fixed_pane_ParamLimits

0xa517,	// (0x00032fad) cell_toolbar2_fixed_pane

0xa532,	// (0x00032fc8) cell_toolbar2_fixed_pane_g1

0x1a74,	// (0x0002a50a) toolbar2_fixed_button_pane

0xc197,	// (0x00034c2d) toolbar2_fixed_button_pane_g1

0xc1a7,	// (0x00034c3d) toolbar2_fixed_button_pane_g2

0xc19f,	// (0x00034c35) toolbar2_fixed_button_pane_g3

0xc1b7,	// (0x00034c4d) toolbar2_fixed_button_pane_g4

0xc1af,	// (0x00034c45) toolbar2_fixed_button_pane_g5

0xc1bf,	// (0x00034c55) toolbar2_fixed_button_pane_g6

0xc1c7,	// (0x00034c5d) toolbar2_fixed_button_pane_g7

0xc1d7,	// (0x00034c6d) toolbar2_fixed_button_pane_g8

0xc1cf,	// (0x00034c65) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x000382fd) toolbar2_fixed_button_pane_g

0xef89,	// (0x00037a1f) cell_toolbar2_float_pane_ParamLimits

0xef89,	// (0x00037a1f) cell_toolbar2_float_pane

0xef9d,	// (0x00037a33) cell_toolbar2_float_pane_g1

0x1a74,	// (0x0002a50a) toolbar2_fixed_button_pane_cp

0xa0a2,	// (0x00032b38) fep_vkb_accented_list_pane_ParamLimits

0xa0a2,	// (0x00032b38) fep_vkb_accented_list_pane

0x2fbc,	// (0x0002ba52) bg_popup_fep_shadow_pane_g9

0xbd49,	// (0x000347df) bg_popup_fep_shadow_pane_cp3

0xb412,	// (0x00033ea8) list_accented_list_pane

0xefa6,	// (0x00037a3c) list_single_accented_list_pane_ParamLimits

0xefa6,	// (0x00037a3c) list_single_accented_list_pane

0xbd49,	// (0x000347df) list_highlight_pane_cp10

0xefb7,	// (0x00037a4d) list_single_accented_list_pane_t1

0x7f4f,	// (0x000309e5) popup_slider_window_ParamLimits

0x7f4f,	// (0x000309e5) popup_slider_window

0xedec,	// (0x00037882) aid_indentation_list_msg

0xa62b,	// (0x000330c1) bg_popup_window_pane_cp19

0xf023,	// (0x00037ab9) popup_slider_window_g1

0xf03f,	// (0x00037ad5) popup_slider_window_g2

0xf05b,	// (0x00037af1) popup_slider_window_g3

0x0005,

0xfb62,	// (0x000385f8) popup_slider_window_g

0xf077,	// (0x00037b0d) popup_slider_window_t1

0xf0bd,	// (0x00037b53) small_volume_slider_vertical_pane

0xdfff,	// (0x00036a95) small_volume_slider_vertical_pane_g1

0xdfff,	// (0x00036a95) small_volume_slider_vertical_pane_g2

0xf0d9,	// (0x00037b6f) small_volume_slider_vertical_pane_g3

0x0002,

0x0441,	// (0x00028ed7) small_volume_slider_vertical_pane_g

0x70e4,	// (0x0002fb7a) area_side_right_pane_ParamLimits

0x70e4,	// (0x0002fb7a) area_side_right_pane

0x8752,	// (0x000311e8) aid_size_side_button_ParamLimits

0x8752,	// (0x000311e8) aid_size_side_button

0x876b,	// (0x00031201) grid_sctrl_middle_pane_ParamLimits

0x876b,	// (0x00031201) grid_sctrl_middle_pane

0x365b,	// (0x0002c0f1) sctrl_sk_bottom_pane

0x366c,	// (0x0002c102) sctrl_sk_top_pane

0x367e,	// (0x0002c114) aid_touch_sctrl_top

0x368b,	// (0x0002c121) bg_sctrl_sk_pane_ParamLimits

0x368b,	// (0x0002c121) bg_sctrl_sk_pane

0x3699,	// (0x0002c12f) sctrl_sk_top_pane_g1

0x36a6,	// (0x0002c13c) sctrl_sk_top_pane_t1

0x367e,	// (0x0002c114) aid_touch_sctrl_bottom

0x368b,	// (0x0002c121) bg_sctrl_sk_pane_cp_ParamLimits

0x368b,	// (0x0002c121) bg_sctrl_sk_pane_cp

0x36c1,	// (0x0002c157) sctrl_sk_bottom_pane_g1

0x36a6,	// (0x0002c13c) sctrl_sk_bottom_pane_t1

0x8785,	// (0x0003121b) cell_sctrl_middle_pane_ParamLimits

0x8785,	// (0x0003121b) cell_sctrl_middle_pane

0x8796,	// (0x0003122c) aid_touch_sctrl_middle_ParamLimits

0x8796,	// (0x0003122c) aid_touch_sctrl_middle

0x87a3,	// (0x00031239) bg_sctrl_middle_pane_ParamLimits

0x87a3,	// (0x00031239) bg_sctrl_middle_pane

0x4569,	// (0x0002cfff) cell_sctrl_middle_pane_g1_ParamLimits

0x4569,	// (0x0002cfff) cell_sctrl_middle_pane_g1

0x87b1,	// (0x00031247) cell_sctrl_middle_pane_g2_ParamLimits

0x87b1,	// (0x00031247) cell_sctrl_middle_pane_g2

0x0001,

0xfb74,	// (0x0003860a) cell_sctrl_middle_pane_g_ParamLimits

0xfb74,	// (0x0003860a) cell_sctrl_middle_pane_g

0xc197,	// (0x00034c2d) bg_sctrl_middle_pane_g1

0xc19f,	// (0x00034c35) bg_sctrl_middle_pane_g2

0xc1a7,	// (0x00034c3d) bg_sctrl_middle_pane_g3

0xc1af,	// (0x00034c45) bg_sctrl_middle_pane_g4

0xc1b7,	// (0x00034c4d) bg_sctrl_middle_pane_g5

0xc1bf,	// (0x00034c55) bg_sctrl_middle_pane_g6

0xc1c7,	// (0x00034c5d) bg_sctrl_middle_pane_g7

0xc1cf,	// (0x00034c65) bg_sctrl_middle_pane_g8

0x0007,

0x0452,	// (0x00028ee8) bg_sctrl_middle_pane_g

0xc1d7,	// (0x00034c6d) bg_sctrl_middle_pane_g8_copy1

0xc197,	// (0x00034c2d) bg_sctrl_sk_pane_g1

0xc1a7,	// (0x00034c3d) bg_sctrl_sk_pane_g2

0xc19f,	// (0x00034c35) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x000382fd) bg_sctrl_sk_pane_g

0x9249,	// (0x00031cdf) aid_size_touch_scroll_bar

0xc1b7,	// (0x00034c4d) bg_sctrl_sk_pane_g4

0xc1af,	// (0x00034c45) bg_sctrl_sk_pane_g5

0xc1bf,	// (0x00034c55) bg_sctrl_sk_pane_g6

0xc1c7,	// (0x00034c5d) bg_sctrl_sk_pane_g7

0xc1d7,	// (0x00034c6d) bg_sctrl_sk_pane_g8

0xc1cf,	// (0x00034c65) bg_sctrl_sk_pane_g9

0x175f,	// (0x0002a1f5) popup_fep_china_hwr2_fs_candidate_window

0x7a7d,	// (0x00030513) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7a7d,	// (0x00030513) popup_fep_china_hwr2_fs_control_window

0x2fdc,	// (0x0002ba72) sctrl_sk_top_pane_g2

0x0001,

0xfb6f,	// (0x00038605) sctrl_sk_top_pane_g

0xa6e3,	// (0x00033179) aid_fep_china_hwr2_fs_cell_ParamLimits

0xa6e3,	// (0x00033179) aid_fep_china_hwr2_fs_cell

0xa6f7,	// (0x0003318d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xa6f7,	// (0x0003318d) bg_popup_fep_shadow_pane_cp4

0xa70e,	// (0x000331a4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xa70e,	// (0x000331a4) bg_popup_fep_shadow_pane_cp5

0xa720,	// (0x000331b6) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xa720,	// (0x000331b6) popup_fep_china_hwr2_fs_control_bar_grid

0xa734,	// (0x000331ca) popup_fep_china_hwr2_fs_control_funtion_grid

0xf0e2,	// (0x00037b78) aid_fep_china_hwr2_fs_candi_cell

0x8c49,	// (0x000316df) bg_popup_fep_shadow_pane_cp6

0xf0ec,	// (0x00037b82) popup_fep_china_hwr2_fs_candidate_grid

0xa73c,	// (0x000331d2) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xa73c,	// (0x000331d2) cell_fep_china_hwr2_fs_funtion_grid

0xdfff,	// (0x00036a95) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xf0f6,	// (0x00037b8c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xf0f6,	// (0x00037b8c) cell_fep_china_hwr2_fs_funtion_grid_g1

0xf104,	// (0x00037b9a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xf104,	// (0x00037b9a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfb79,	// (0x0003860f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfb79,	// (0x0003860f) cell_fep_china_hwr2_fs_funtion_grid_g

0xa754,	// (0x000331ea) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xa754,	// (0x000331ea) cell_fep_china_hwr2_fs_funtion_grid_t1

0xa769,	// (0x000331ff) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xa769,	// (0x000331ff) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfb7e,	// (0x00038614) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfb7e,	// (0x00038614) cell_fep_china_hwr2_fs_funtion_grid_t

0xf11a,	// (0x00037bb0) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xf122,	// (0x00037bb8) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xf12a,	// (0x00037bc0) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0x046d,	// (0x00028f03) popup_fep_china_hwr2_fs_control_bar_grid_g

0xf132,	// (0x00037bc8) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xf132,	// (0x00037bc8) cell_fep_china_hwr2_fs_candidate_grid

0xf14b,	// (0x00037be1) popup_fep_china_hwr2_fs_candidate_grid_g20

0xf153,	// (0x00037be9) popup_fep_china_hwr2_fs_candidate_grid_g21

0xdfff,	// (0x00036a95) cell_fep_china_hwr2_fs_candidate_grid_g1

0xdfff,	// (0x00036a95) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0x028d,	// (0x00028d23) cell_fep_china_hwr2_fs_candidate_grid_g

0xf15b,	// (0x00037bf1) cell_fep_china_hwr2_fs_candidate_grid_t1

0xbfe4,	// (0x00034a7a) clock_nsta_pane_cp_24_ParamLimits

0xbfe4,	// (0x00034a7a) clock_nsta_pane_cp_24

0xc04c,	// (0x00034ae2) indicator_nsta_pane_cp_24_ParamLimits

0xc04c,	// (0x00034ae2) indicator_nsta_pane_cp_24

0xcd3d,	// (0x000357d3) heading_pane_g1

0x0001,

0x000d,	// (0x00028aa3) heading_pane_g

0xd409,	// (0x00035e9f) grid_sct_catagory_button_pane

0xd249,	// (0x00035cdf) scroll_pane_cp5_ParamLimits

0xdd68,	// (0x000367fe) button_value_adjust_pane_cp5_ParamLimits

0xdd68,	// (0x000367fe) button_value_adjust_pane_cp5

0xde26,	// (0x000368bc) form2_midp_time_pane_ParamLimits

0xf169,	// (0x00037bff) cell_sct_catagory_button_pane_ParamLimits

0xf169,	// (0x00037bff) cell_sct_catagory_button_pane

0xdfc4,	// (0x00036a5a) bg_button_pane_cp01_ParamLimits

0xdfc4,	// (0x00036a5a) bg_button_pane_cp01

0xdfff,	// (0x00036a95) cell_sct_catagory_button_pane_g1

0x7fc8,	// (0x00030a5e) popup_tb_extension_window

0xa785,	// (0x0003321b) aid_size_cell_ext_ParamLimits

0xa785,	// (0x0003321b) aid_size_cell_ext

0x908b,	// (0x00031b21) bg_tb_trans_pane_cp1_ParamLimits

0x908b,	// (0x00031b21) bg_tb_trans_pane_cp1

0xa7ab,	// (0x00033241) grid_tb_ext_pane_ParamLimits

0xa7ab,	// (0x00033241) grid_tb_ext_pane

0xa7ed,	// (0x00033283) cell_tb_ext_pane_ParamLimits

0xa7ed,	// (0x00033283) cell_tb_ext_pane

0xa815,	// (0x000332ab) cell_tb_ext_pane_g1_ParamLimits

0xa815,	// (0x000332ab) cell_tb_ext_pane_g1

0xf17b,	// (0x00037c11) cell_tb_ext_pane_t1

0x8dfc,	// (0x00031892) list_highlight_pane_cp11_ParamLimits

0x8dfc,	// (0x00031892) list_highlight_pane_cp11

0x718b,	// (0x0002fc21) popup_uni_indicator_window_ParamLimits

0x718b,	// (0x0002fc21) popup_uni_indicator_window

0xb30b,	// (0x00033da1) bg_popup_sub_pane_cp14

0xf196,	// (0x00037c2c) list_uniindi_pane

0xf1a2,	// (0x00037c38) uniindi_top_pane

0x8dfc,	// (0x00031892) bg_uniindi_top_pane

0xf1c1,	// (0x00037c57) uniindi_top_pane_g1

0xf1d7,	// (0x00037c6d) uniindi_top_pane_g2

0x0003,

0x0474,	// (0x00028f0a) uniindi_top_pane_g

0xf201,	// (0x00037c97) uniindi_top_pane_t1

0xf22b,	// (0x00037cc1) list_single_uniindi_pane_ParamLimits

0xf22b,	// (0x00037cc1) list_single_uniindi_pane

0xdfff,	// (0x00036a95) bg_uniindi_top_pane_g1

0xf23e,	// (0x00037cd4) list_single_uniindi_pane_g1

0xf251,	// (0x00037ce7) list_single_uniindi_pane_t1

0x0895,	// (0x0002932b) control_bg_pane

0xf276,	// (0x00037d0c) bg_sctrl_sk_pane_cp1

0xf27f,	// (0x00037d15) bg_sctrl_sk_pane_cp2

0xf288,	// (0x00037d1e) control_bg_pane_g1

0xf291,	// (0x00037d27) control_bg_pane_g2

0x0001,

0x047d,	// (0x00028f13) control_bg_pane_g

0xdc2c,	// (0x000366c2) cell_indicator_nsta_pane_g1_ParamLimits

0x9f10,	// (0x000329a6) cell_indicator_nsta_pane_g2_ParamLimits

0xf9f8,	// (0x0003848e) cell_indicator_nsta_pane_g_ParamLimits

0x5533,	// (0x0002dfc9) form2_midp_time_pane_t1_ParamLimits

0x2bc2,	// (0x0002b658) main_idle_act4_pane_ParamLimits

0x2bc2,	// (0x0002b658) main_idle_act4_pane

0x7fc8,	// (0x00030a5e) popup_tb_extension_window_ParamLimits

0xa7d3,	// (0x00033269) tb_ext_find_pane_ParamLimits

0xa7d3,	// (0x00033269) tb_ext_find_pane

0xf29a,	// (0x00037d30) ai_gene_pane_1_cp1

0xbddd,	// (0x00034873) ai_gene_pane_2_cp1

0xf2a2,	// (0x00037d38) list_single_idle_plugin_calendar_pane

0xf2ab,	// (0x00037d41) list_single_idle_plugin_notification_pane

0xf2b4,	// (0x00037d4a) list_single_idle_plugin_player_pane

0xa832,	// (0x000332c8) list_single_idle_plugin_shortcut_pane_ParamLimits

0xa832,	// (0x000332c8) list_single_idle_plugin_shortcut_pane

0xa85a,	// (0x000332f0) main_idle_act4_pane_t1

0xa870,	// (0x00033306) main_idle_act4_pane_t2

0x0001,

0xfb83,	// (0x00038619) main_idle_act4_pane_t

0xa888,	// (0x0003331e) middle_sk_idle_act4_pane_ParamLimits

0xa888,	// (0x0003331e) middle_sk_idle_act4_pane

0xa8a4,	// (0x0003333a) popup_clock_digital_analogue_window_cp2

0xa8cb,	// (0x00033361) shortcut_wheel_idle_act4_pane_ParamLimits

0xa8cb,	// (0x00033361) shortcut_wheel_idle_act4_pane

0xdfff,	// (0x00036a95) shortcut_wheel_idle_act4_pane_g1

0xdfff,	// (0x00036a95) shortcut_wheel_idle_act4_pane_g2

0xdfff,	// (0x00036a95) shortcut_wheel_idle_act4_pane_g3

0xdfff,	// (0x00036a95) shortcut_wheel_idle_act4_pane_g4

0xdfff,	// (0x00036a95) shortcut_wheel_idle_act4_pane_g5

0xf2bd,	// (0x00037d53) shortcut_wheel_idle_act4_pane_g6

0xf2c5,	// (0x00037d5b) shortcut_wheel_idle_act4_pane_g7

0xf2cd,	// (0x00037d63) shortcut_wheel_idle_act4_pane_g8

0xf2d5,	// (0x00037d6b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0x0487,	// (0x00028f1d) shortcut_wheel_idle_act4_pane_g

0x87bd,	// (0x00031253) middle_sk_idle_act4_pane_g1_ParamLimits

0x87bd,	// (0x00031253) middle_sk_idle_act4_pane_g1

0xa948,	// (0x000333de) middle_sk_idle_act4_pane_g2_ParamLimits

0xa948,	// (0x000333de) middle_sk_idle_act4_pane_g2

0x0001,

0xfb98,	// (0x0003862e) middle_sk_idle_act4_pane_g_ParamLimits

0xfb98,	// (0x0003862e) middle_sk_idle_act4_pane_g

0xa960,	// (0x000333f6) middle_sk_idle_act4_pane_t1_ParamLimits

0xa960,	// (0x000333f6) middle_sk_idle_act4_pane_t1

0xa98f,	// (0x00033425) grid_ai_shortcut_pane_ParamLimits

0xa98f,	// (0x00033425) grid_ai_shortcut_pane

0xa9ac,	// (0x00033442) list_highlight_pane_cp16_ParamLimits

0xa9ac,	// (0x00033442) list_highlight_pane_cp16

0xa9b9,	// (0x0003344f) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xa9b9,	// (0x0003344f) list_single_idle_plugin_shortcut_pane_g1

0xa9c5,	// (0x0003345b) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xa9c5,	// (0x0003345b) list_single_idle_plugin_shortcut_pane_g2

0xa9e1,	// (0x00033477) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xa9e1,	// (0x00033477) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfb9d,	// (0x00038633) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfb9d,	// (0x00038633) list_single_idle_plugin_shortcut_pane_g

0xa9f6,	// (0x0003348c) cell_ai_shortcut_pane_ParamLimits

0xa9f6,	// (0x0003348c) cell_ai_shortcut_pane

0xaa0c,	// (0x000334a2) cell_ai_shortcut_pane_g1_ParamLimits

0xaa0c,	// (0x000334a2) cell_ai_shortcut_pane_g1

0xf29a,	// (0x00037d30) ai_gene_pane_1_cp2

0xf2dd,	// (0x00037d73) ai_gene_pane_2_cp2

0xf2e5,	// (0x00037d7b) list_highlight_pane_cp15

0xf2ee,	// (0x00037d84) list_single_idle_plugin_calendar_pane_g1

0xf2e5,	// (0x00037d7b) list_highlight_pane_cp17

0xf2f6,	// (0x00037d8c) list_single_idle_plugin_calendar_pane_g1_copy1

0xf2fe,	// (0x00037d94) list_single_idle_plugin_player_pane_g1

0xd678,	// (0x0003610e) list_single_idle_plugin_player_pane_g2

0x0001,

0x04b6,	// (0x00028f4c) list_single_idle_plugin_player_pane_g

0xf306,	// (0x00037d9c) list_single_idle_plugin_player_pane_t1

0xf314,	// (0x00037daa) list_single_idle_plugin_player_pane_t2

0xf322,	// (0x00037db8) list_single_idle_plugin_player_pane_t3

0xf330,	// (0x00037dc6) list_single_idle_plugin_player_pane_t4

0x0003,

0x04bb,	// (0x00028f51) list_single_idle_plugin_player_pane_t

0xf33e,	// (0x00037dd4) wait_bar_pane_cp15

0xf346,	// (0x00037ddc) grid_ai_notification_pane

0xd678,	// (0x0003610e) list_single_idle_plugin_notification_pane_g1

0xaa2e,	// (0x000334c4) cell_ai_notification_pane_ParamLimits

0xaa2e,	// (0x000334c4) cell_ai_notification_pane

0xf34f,	// (0x00037de5) cell_ai_notification_pane_g1

0xf357,	// (0x00037ded) cell_ai_notification_pane_t1

0xaa3b,	// (0x000334d1) tb_ext_find_button_pane

0xaa43,	// (0x000334d9) tb_ext_find_pane_g1

0xaa4b,	// (0x000334e1) tb_ext_find_pane_t1

0xb837,	// (0x000342cd) tb_ext_find_button_pane_g1

0xf365,	// (0x00037dfb) tb_ext_find_button_pane_g2

0x0001,

0x04c4,	// (0x00028f5a) tb_ext_find_button_pane_g

0xa85a,	// (0x000332f0) main_idle_act4_pane_t1_ParamLimits

0xa870,	// (0x00033306) main_idle_act4_pane_t2_ParamLimits

0xfb83,	// (0x00038619) main_idle_act4_pane_t_ParamLimits

0xa8a4,	// (0x0003333a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xa8bb,	// (0x00033351) sat_plugin_idle_act4_pane_ParamLimits

0xa8bb,	// (0x00033351) sat_plugin_idle_act4_pane

0xaa59,	// (0x000334ef) sat_plugin_idle_act4_pane_t1_ParamLimits

0xaa59,	// (0x000334ef) sat_plugin_idle_act4_pane_t1

0xaa71,	// (0x00033507) sat_plugin_idle_act4_pane_t2_ParamLimits

0xaa71,	// (0x00033507) sat_plugin_idle_act4_pane_t2

0xaa89,	// (0x0003351f) sat_plugin_idle_act4_pane_t3_ParamLimits

0xaa89,	// (0x0003351f) sat_plugin_idle_act4_pane_t3

0xaaa1,	// (0x00033537) sat_plugin_idle_act4_pane_t4_ParamLimits

0xaaa1,	// (0x00033537) sat_plugin_idle_act4_pane_t4

0x0003,

0xfba4,	// (0x0003863a) sat_plugin_idle_act4_pane_t_ParamLimits

0xfba4,	// (0x0003863a) sat_plugin_idle_act4_pane_t

0x095a,	// (0x000293f0) popup_battery_window_ParamLimits

0x095a,	// (0x000293f0) popup_battery_window

0x8dfc,	// (0x00031892) bg_popup_sub_pane_cp25_ParamLimits

0x8dfc,	// (0x00031892) bg_popup_sub_pane_cp25

0xf36e,	// (0x00037e04) popup_battery_window_g1_ParamLimits

0xf36e,	// (0x00037e04) popup_battery_window_g1

0xf37a,	// (0x00037e10) popup_battery_window_t1_ParamLimits

0xf37a,	// (0x00037e10) popup_battery_window_t1

0xf38c,	// (0x00037e22) popup_battery_window_t2_ParamLimits

0xf38c,	// (0x00037e22) popup_battery_window_t2

0x0001,

0x04d2,	// (0x00028f68) popup_battery_window_t_ParamLimits

0x04d2,	// (0x00028f68) popup_battery_window_t

0x77a7,	// (0x0003023d) midp_canvas_pane_ParamLimits

0x7804,	// (0x0003029a) midp_keypad_pane_ParamLimits

0x7804,	// (0x0003029a) midp_keypad_pane

0xb464,	// (0x00033efa) main_midp_pane_ParamLimits

0xdcff,	// (0x00036795) signal_pane_g2_cp_ParamLimits

0xaab9,	// (0x0003354f) aid_size_cell_midp_keypad_ParamLimits

0xaab9,	// (0x0003354f) aid_size_cell_midp_keypad

0xaae4,	// (0x0003357a) midp_keyp_game_grid_pane_ParamLimits

0xaae4,	// (0x0003357a) midp_keyp_game_grid_pane

0xab0b,	// (0x000335a1) midp_keyp_rocker_pane_ParamLimits

0xab0b,	// (0x000335a1) midp_keyp_rocker_pane

0xab54,	// (0x000335ea) midp_keyp_sk_left_pane_ParamLimits

0xab54,	// (0x000335ea) midp_keyp_sk_left_pane

0xaba6,	// (0x0003363c) midp_keyp_sk_right_pane_ParamLimits

0xaba6,	// (0x0003363c) midp_keyp_sk_right_pane

0x8c49,	// (0x000316df) bg_button_pane_cp03

0xabf8,	// (0x0003368e) midp_keyp_sk_left_pane_g1

0x8c49,	// (0x000316df) bg_button_pane_cp04

0xabf8,	// (0x0003368e) midp_keyp_sk_right_pane_g1

0xdfff,	// (0x00036a95) midp_keyp_rocker_pane_g1

0xac01,	// (0x00033697) keyp_game_cell_pane_ParamLimits

0xac01,	// (0x00033697) keyp_game_cell_pane

0x8c49,	// (0x000316df) bg_button_pane_cp02

0xac25,	// (0x000336bb) keyp_game_cell_pane_g1

0x7126,	// (0x0002fbbc) popup_fep_vkb2_window_ParamLimits

0x7126,	// (0x0002fbbc) popup_fep_vkb2_window

0x87cb,	// (0x00031261) aid_size_cell_vkb2_ParamLimits

0x87cb,	// (0x00031261) aid_size_cell_vkb2

0x8801,	// (0x00031297) popup_fep_vkb2_window_g1_ParamLimits

0x8801,	// (0x00031297) popup_fep_vkb2_window_g1

0x8851,	// (0x000312e7) vkb2_area_bottom_pane_ParamLimits

0x8851,	// (0x000312e7) vkb2_area_bottom_pane

0x88a5,	// (0x0003133b) vkb2_area_keypad_pane_ParamLimits

0x88a5,	// (0x0003133b) vkb2_area_keypad_pane

0x88ed,	// (0x00031383) vkb2_area_top_pane_ParamLimits

0x88ed,	// (0x00031383) vkb2_area_top_pane

0x8973,	// (0x00031409) vkb2_top_entry_pane_ParamLimits

0x8973,	// (0x00031409) vkb2_top_entry_pane

0x89a0,	// (0x00031436) vkb2_top_grid_left_pane_ParamLimits

0x89a0,	// (0x00031436) vkb2_top_grid_left_pane

0x89c0,	// (0x00031456) vkb2_top_grid_right_pane_ParamLimits

0x89c0,	// (0x00031456) vkb2_top_grid_right_pane

0x3db9,	// (0x0002c84f) vkb2_cell_keypad_pane_ParamLimits

0x3db9,	// (0x0002c84f) vkb2_cell_keypad_pane

0x8a06,	// (0x0003149c) vkb2_area_bottom_grid_pane_ParamLimits

0x8a06,	// (0x0003149c) vkb2_area_bottom_grid_pane

0x8a30,	// (0x000314c6) vkb2_area_bottom_pane_g1_ParamLimits

0x8a30,	// (0x000314c6) vkb2_area_bottom_pane_g1

0x8a56,	// (0x000314ec) vkb2_area_bottom_pane_g2_ParamLimits

0x8a56,	// (0x000314ec) vkb2_area_bottom_pane_g2

0x8a87,	// (0x0003151d) vkb2_area_bottom_pane_g3_ParamLimits

0x8a87,	// (0x0003151d) vkb2_area_bottom_pane_g3

0x0002,

0xfbad,	// (0x00038643) vkb2_area_bottom_pane_g_ParamLimits

0xfbad,	// (0x00038643) vkb2_area_bottom_pane_g

0x3f63,	// (0x0002c9f9) vkb2_top_cell_left_pane_ParamLimits

0x3f63,	// (0x0002c9f9) vkb2_top_cell_left_pane

0xac2e,	// (0x000336c4) vkb2_top_entry_pane_g1_ParamLimits

0xac2e,	// (0x000336c4) vkb2_top_entry_pane_g1

0xac3c,	// (0x000336d2) vkb2_top_entry_pane_t1_ParamLimits

0xac3c,	// (0x000336d2) vkb2_top_entry_pane_t1

0xf3b1,	// (0x00037e47) vkb2_top_entry_pane_t2_ParamLimits

0xf3b1,	// (0x00037e47) vkb2_top_entry_pane_t2

0xf3e3,	// (0x00037e79) vkb2_top_entry_pane_t3_ParamLimits

0xf3e3,	// (0x00037e79) vkb2_top_entry_pane_t3

0x0002,

0xfbb4,	// (0x0003864a) vkb2_top_entry_pane_t_ParamLimits

0xfbb4,	// (0x0003864a) vkb2_top_entry_pane_t

0x8af1,	// (0x00031587) vkb2_top_grid_right_pane_g1_ParamLimits

0x8af1,	// (0x00031587) vkb2_top_grid_right_pane_g1

0x4006,	// (0x0002ca9c) vkb2_top_grid_right_pane_g2_ParamLimits

0x4006,	// (0x0002ca9c) vkb2_top_grid_right_pane_g2

0x401e,	// (0x0002cab4) vkb2_top_grid_right_pane_g3_ParamLimits

0x401e,	// (0x0002cab4) vkb2_top_grid_right_pane_g3

0x8b07,	// (0x0003159d) vkb2_top_grid_right_pane_g4_ParamLimits

0x8b07,	// (0x0003159d) vkb2_top_grid_right_pane_g4

0x0003,

0xfbbb,	// (0x00038651) vkb2_top_grid_right_pane_g_ParamLimits

0xfbbb,	// (0x00038651) vkb2_top_grid_right_pane_g

0x404c,	// (0x0002cae2) vkb2_top_cell_left_pane_g1

0x4063,	// (0x0002caf9) vkb2_cell_keypad_pane_g1_ParamLimits

0x4063,	// (0x0002caf9) vkb2_cell_keypad_pane_g1

0xf407,	// (0x00037e9d) vkb2_cell_keypad_pane_t1_ParamLimits

0xf407,	// (0x00037e9d) vkb2_cell_keypad_pane_t1

0x4071,	// (0x0002cb07) vkb2_cell_bottom_grid_pane_ParamLimits

0x4071,	// (0x0002cb07) vkb2_cell_bottom_grid_pane

0x40aa,	// (0x0002cb40) vkb2_cell_bottom_grid_pane_g1

0xa8ec,	// (0x00033382) aid_call2_pane_cp02

0xa8f4,	// (0x0003338a) aid_call_pane_cp02

0xa8fc,	// (0x00033392) clock_digital_number_pane_cp10

0xa904,	// (0x0003339a) clock_digital_number_pane_cp11

0xa90c,	// (0x000333a2) clock_digital_number_pane_cp12

0xa914,	// (0x000333aa) clock_digital_number_pane_cp13

0xa91c,	// (0x000333b2) clock_digital_separator_pane_cp10

0xb837,	// (0x000342cd) popup_clock_digital_analogue_window_cp2_g1

0xb837,	// (0x000342cd) popup_clock_digital_analogue_window_cp2_g2

0xa924,	// (0x000333ba) popup_clock_digital_analogue_window_cp2_g3

0xb837,	// (0x000342cd) popup_clock_digital_analogue_window_cp2_g4

0xa924,	// (0x000333ba) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfb88,	// (0x0003861e) popup_clock_digital_analogue_window_cp2_g

0xa92c,	// (0x000333c2) popup_clock_digital_analogue_window_cp2_t1

0xa93a,	// (0x000333d0) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfb93,	// (0x00038629) popup_clock_digital_analogue_window_cp2_t

0xdfff,	// (0x00036a95) clock_digital_number_pane_cp10_g1

0xdfff,	// (0x00036a95) clock_digital_number_pane_cp10_g2

0x0001,

0x028d,	// (0x00028d23) clock_digital_number_pane_cp10_g

0xdfff,	// (0x00036a95) clock_digital_separator_pane_cp10_g1

0xdfff,	// (0x00036a95) clock_digital_separator_pane_cp10_g2

0x0001,

0x028d,	// (0x00028d23) clock_digital_separator_pane_cp10_g

0xf1e3,	// (0x00037c79) uniindi_top_pane_g3

0xf1f4,	// (0x00037c8a) uniindi_top_pane_g4

0x3e44,	// (0x0002c8da) vkb2_row_keypad_pane_ParamLimits

0x3e44,	// (0x0002c8da) vkb2_row_keypad_pane

0x40ca,	// (0x0002cb60) vkb2_cell_t_keypad_pane_ParamLimits

0x40ca,	// (0x0002cb60) vkb2_cell_t_keypad_pane

0x40da,	// (0x0002cb70) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x40da,	// (0x0002cb70) vkb2_cell_t_keypad_pane_cp08

0x40ed,	// (0x0002cb83) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x40ed,	// (0x0002cb83) vkb2_cell_t_keypad_pane_cp09

0x4101,	// (0x0002cb97) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x4101,	// (0x0002cb97) vkb2_cell_t_keypad_pane_cp01

0x4112,	// (0x0002cba8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x4112,	// (0x0002cba8) vkb2_cell_t_keypad_pane_cp02

0x4123,	// (0x0002cbb9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x4123,	// (0x0002cbb9) vkb2_cell_t_keypad_pane_cp03

0x4134,	// (0x0002cbca) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x4134,	// (0x0002cbca) vkb2_cell_t_keypad_pane_cp04

0x4145,	// (0x0002cbdb) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x4145,	// (0x0002cbdb) vkb2_cell_t_keypad_pane_cp05

0x4156,	// (0x0002cbec) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x4156,	// (0x0002cbec) vkb2_cell_t_keypad_pane_cp06

0x4167,	// (0x0002cbfd) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x4167,	// (0x0002cbfd) vkb2_cell_t_keypad_pane_cp07

0x4178,	// (0x0002cc0e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x4178,	// (0x0002cc0e) vkb2_cell_t_keypad_pane_cp10

0x2fdc,	// (0x0002ba72) vkb2_cell_t_keypad_pane_g1

0xf41e,	// (0x00037eb4) vkb2_cell_t_keypad_pane_t1

0x0895,	// (0x0002932b) popup_grid_graphic2_window

0xac75,	// (0x0003370b) aid_size_cell_graphic2_ParamLimits

0xac75,	// (0x0003370b) aid_size_cell_graphic2

0xacb3,	// (0x00033749) bg_popup_window_pane_cp21_ParamLimits

0xacb3,	// (0x00033749) bg_popup_window_pane_cp21

0xacc1,	// (0x00033757) graphic2_pages_pane_ParamLimits

0xacc1,	// (0x00033757) graphic2_pages_pane

0xad17,	// (0x000337ad) grid_graphic2_control_pane_ParamLimits

0xad17,	// (0x000337ad) grid_graphic2_control_pane

0xad5f,	// (0x000337f5) grid_graphic2_pane_ParamLimits

0xad5f,	// (0x000337f5) grid_graphic2_pane

0xade6,	// (0x0003387c) cell_graphic2_pane

0x0895,	// (0x0002932b) main_comp_mode_pane

0xee5a,	// (0x000378f0) list_ai3_gene_pane_ParamLimits

0xa62b,	// (0x000330c1) bg_popup_window_pane_cp19_ParamLimits

0xefc5,	// (0x00037a5b) bg_touch_area_indi_pane_ParamLimits

0xefc5,	// (0x00037a5b) bg_touch_area_indi_pane

0xefdb,	// (0x00037a71) bg_touch_area_indi_pane_cp01_ParamLimits

0xefdb,	// (0x00037a71) bg_touch_area_indi_pane_cp01

0xeff1,	// (0x00037a87) bg_touch_area_indi_pane_cp02_ParamLimits

0xeff1,	// (0x00037a87) bg_touch_area_indi_pane_cp02

0xf009,	// (0x00037a9f) bg_touch_area_indi_pane_cp03_ParamLimits

0xf009,	// (0x00037a9f) bg_touch_area_indi_pane_cp03

0xf023,	// (0x00037ab9) popup_slider_window_g1_ParamLimits

0xf03f,	// (0x00037ad5) popup_slider_window_g2_ParamLimits

0xf05b,	// (0x00037af1) popup_slider_window_g3_ParamLimits

0xfb62,	// (0x000385f8) popup_slider_window_g_ParamLimits

0xf077,	// (0x00037b0d) popup_slider_window_t1_ParamLimits

0xf0bd,	// (0x00037b53) small_volume_slider_vertical_pane_ParamLimits

0xade6,	// (0x0003387c) cell_graphic2_pane_ParamLimits

0xae43,	// (0x000338d9) bg_button_pane_cp10_ParamLimits

0xae43,	// (0x000338d9) bg_button_pane_cp10

0xae56,	// (0x000338ec) bg_button_pane_cp11_ParamLimits

0xae56,	// (0x000338ec) bg_button_pane_cp11

0xae69,	// (0x000338ff) graphic2_pages_pane_g1_ParamLimits

0xae69,	// (0x000338ff) graphic2_pages_pane_g1

0xae84,	// (0x0003391a) graphic2_pages_pane_g2_ParamLimits

0xae84,	// (0x0003391a) graphic2_pages_pane_g2

0x0001,

0xfbc9,	// (0x0003865f) graphic2_pages_pane_g_ParamLimits

0xfbc9,	// (0x0003865f) graphic2_pages_pane_g

0xae9c,	// (0x00033932) graphic2_pages_pane_t1_ParamLimits

0xae9c,	// (0x00033932) graphic2_pages_pane_t1

0xaeb4,	// (0x0003394a) cell_graphic2_control_pane_ParamLimits

0xaeb4,	// (0x0003394a) cell_graphic2_control_pane

0xaee6,	// (0x0003397c) cell_graphic2_pane_g1_ParamLimits

0xaee6,	// (0x0003397c) cell_graphic2_pane_g1

0x8b1d,	// (0x000315b3) cell_graphic2_pane_g2_ParamLimits

0x8b1d,	// (0x000315b3) cell_graphic2_pane_g2

0xaad7,	// (0x0003356d) cell_graphic2_pane_g3_ParamLimits

0xaad7,	// (0x0003356d) cell_graphic2_pane_g3

0x8b2a,	// (0x000315c0) cell_graphic2_pane_g4_ParamLimits

0x8b2a,	// (0x000315c0) cell_graphic2_pane_g4

0xaef3,	// (0x00033989) cell_graphic2_pane_g5_ParamLimits

0xaef3,	// (0x00033989) cell_graphic2_pane_g5

0x0004,

0xfbce,	// (0x00038664) cell_graphic2_pane_g_ParamLimits

0xfbce,	// (0x00038664) cell_graphic2_pane_g

0xaf13,	// (0x000339a9) cell_graphic2_pane_t1_ParamLimits

0xaf13,	// (0x000339a9) cell_graphic2_pane_t1

0xcd31,	// (0x000357c7) grid_highlight_pane_cp11_ParamLimits

0xcd31,	// (0x000357c7) grid_highlight_pane_cp11

0x8dfc,	// (0x00031892) bg_button_pane_cp05

0xaf47,	// (0x000339dd) cell_graphic2_control_pane_g1

0xdfff,	// (0x00036a95) bg_touch_area_indi_pane_g1

0xf430,	// (0x00037ec6) aid_cmod_rocker_key_size

0xf43a,	// (0x00037ed0) aid_cmode_itu_key_size

0xf444,	// (0x00037eda) main_cmode_video_pane

0xf44e,	// (0x00037ee4) main_comp_mode_itu_pane

0xf45a,	// (0x00037ef0) main_comp_mode_rocker_pane

0xf466,	// (0x00037efc) cell_cmode_rocker_pane_ParamLimits

0xf466,	// (0x00037efc) cell_cmode_rocker_pane

0xf478,	// (0x00037f0e) cell_cmode_itu_pane_ParamLimits

0xf478,	// (0x00037f0e) cell_cmode_itu_pane

0xb30b,	// (0x00033da1) bg_button_pane_cp06_ParamLimits

0xb30b,	// (0x00033da1) bg_button_pane_cp06

0xe190,	// (0x00036c26) cell_cmode_rocker_pane_g1_ParamLimits

0xe190,	// (0x00036c26) cell_cmode_rocker_pane_g1

0xf0f6,	// (0x00037b8c) cell_cmode_rocker_pane_g2_ParamLimits

0xf0f6,	// (0x00037b8c) cell_cmode_rocker_pane_g2

0x0001,

0xfbde,	// (0x00038674) cell_cmode_rocker_pane_g_ParamLimits

0xfbde,	// (0x00038674) cell_cmode_rocker_pane_g

0x8c49,	// (0x000316df) bg_button_pane_cp07

0xf48d,	// (0x00037f23) cell_cmode_itu_pane_g1

0xf496,	// (0x00037f2c) cell_cmode_itu_pane_t1

0xf4a4,	// (0x00037f3a) cell_cmode_itu_pane_t2

0x0001,

0x050d,	// (0x00028fa3) cell_cmode_itu_pane_t

0xf266,	// (0x00037cfc) aid_touch_ctrl_left

0xf26e,	// (0x00037d04) aid_touch_ctrl_right

0x8c49,	// (0x000316df) compa_mode_pane

0xaf6b,	// (0x00033a01) aid_cmod_rocker_key_size_cp

0xaf75,	// (0x00033a0b) aid_cmode_itu_key_size_cp

0xf4d3,	// (0x00037f69) compa_mode_pane_g1

0xf4db,	// (0x00037f71) compa_mode_pane_g2

0xf4e3,	// (0x00037f79) compa_mode_pane_g3

0x0002,

0xfbe3,	// (0x00038679) compa_mode_pane_g

0xaf7f,	// (0x00033a15) main_comp_mode_itu_pane_cp

0xaf87,	// (0x00033a1d) main_comp_mode_rocker_pane_cp

0xaf8f,	// (0x00033a25) cell_cmode_itu_pane_cp_ParamLimits

0xaf8f,	// (0x00033a25) cell_cmode_itu_pane_cp

0xafa4,	// (0x00033a3a) cell_cmode_rocker_pane_cp_ParamLimits

0xafa4,	// (0x00033a3a) cell_cmode_rocker_pane_cp

0xb30b,	// (0x00033da1) bg_button_pane_cp06_cp_ParamLimits

0xb30b,	// (0x00033da1) bg_button_pane_cp06_cp

0xe190,	// (0x00036c26) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe190,	// (0x00036c26) cell_cmode_rocker_pane_g1_cp

0xdfff,	// (0x00036a95) cell_cmode_rocker_pane_g2_cp

0x8c49,	// (0x000316df) bg_button_pane_cp07_cp

0xafb6,	// (0x00033a4c) cell_cmode_itu_pane_g1_cp

0xafbf,	// (0x00033a55) cell_cmode_itu_pane_t1_cp

0xafbf,	// (0x00033a55) cell_cmode_itu_pane_t2_cp

0x9d6a,	// (0x00032800) settings_code_pane_cp2

0x8cc9,	// (0x0003175f) bg_popup_window_pane_cp3_ParamLimits

0x8fca,	// (0x00031a60) heading_pane_cp3_ParamLimits

0x8fd6,	// (0x00031a6c) listscroll_popup_graphic_pane_ParamLimits

0x2bd0,	// (0x0002b666) fep_hwr_aid_pane_ParamLimits

0x367e,	// (0x0002c114) aid_touch_sctrl_top_ParamLimits

0x3699,	// (0x0002c12f) sctrl_sk_top_pane_g1_ParamLimits

0x2fdc,	// (0x0002ba72) sctrl_sk_top_pane_g2_ParamLimits

0xfb6f,	// (0x00038605) sctrl_sk_top_pane_g_ParamLimits

0x36a6,	// (0x0002c13c) sctrl_sk_top_pane_t1_ParamLimits

0x367e,	// (0x0002c114) aid_touch_sctrl_bottom_ParamLimits

0x36a6,	// (0x0002c13c) sctrl_sk_bottom_pane_t1_ParamLimits

0xf1af,	// (0x00037c45) aid_area_touch_clock

0x8935,	// (0x000313cb) aid_vkb2_area_top_pane_cell_ParamLimits

0x8935,	// (0x000313cb) aid_vkb2_area_top_pane_cell

0x89e0,	// (0x00031476) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x89e0,	// (0x00031476) aid_vkb2_area_bottom_pane_cell

0xf3a9,	// (0x00037e3f) popup_char_count_window

0xf4eb,	// (0x00037f81) popup_char_count_window_g1

0xf4f4,	// (0x00037f8a) popup_char_count_window_g2

0xf4fd,	// (0x00037f93) popup_char_count_window_g3

0x0002,

0xfbea,	// (0x00038680) popup_char_count_window_g

0xf506,	// (0x00037f9c) popup_char_count_window_t1

0x3be1,	// (0x0002c677) popup_fep_char_preview_window_ParamLimits

0x3be1,	// (0x0002c677) popup_fep_char_preview_window

0x8955,	// (0x000313eb) vkb2_top_candi_pane_ParamLimits

0x8955,	// (0x000313eb) vkb2_top_candi_pane

0xafcd,	// (0x00033a63) cell_vkb2_top_candi_pane_ParamLimits

0xafcd,	// (0x00033a63) cell_vkb2_top_candi_pane

0x44f8,	// (0x0002cf8e) bg_popup_fep_char_preview_window_ParamLimits

0x44f8,	// (0x0002cf8e) bg_popup_fep_char_preview_window

0x4506,	// (0x0002cf9c) popup_fep_char_preview_window_t1_ParamLimits

0x4506,	// (0x0002cf9c) popup_fep_char_preview_window_t1

0xf514,	// (0x00037faa) bg_popup_fep_char_preview_window_g1

0xf51c,	// (0x00037fb2) bg_popup_fep_char_preview_window_g2

0xf524,	// (0x00037fba) bg_popup_fep_char_preview_window_g3

0xf52c,	// (0x00037fc2) bg_popup_fep_char_preview_window_g4

0xf534,	// (0x00037fca) bg_popup_fep_char_preview_window_g5

0x4540,	// (0x0002cfd6) bg_popup_fep_char_preview_window_g6

0xf53c,	// (0x00037fd2) bg_popup_fep_char_preview_window_g7

0xf544,	// (0x00037fda) bg_popup_fep_char_preview_window_g8

0xf54c,	// (0x00037fe2) bg_popup_fep_char_preview_window_g9

0x0008,

0xfbf1,	// (0x00038687) bg_popup_fep_char_preview_window_g

0x2fdc,	// (0x0002ba72) cell_vkb2_top_candi_pane_g1_ParamLimits

0x2fdc,	// (0x0002ba72) cell_vkb2_top_candi_pane_g1

0x2fea,	// (0x0002ba80) cell_vkb2_top_candi_pane_g2_ParamLimits

0x2fea,	// (0x0002ba80) cell_vkb2_top_candi_pane_g2

0xf4b2,	// (0x00037f48) cell_vkb2_top_candi_pane_g3_ParamLimits

0xf4b2,	// (0x00037f48) cell_vkb2_top_candi_pane_g3

0x4548,	// (0x0002cfde) cell_vkb2_top_candi_pane_g4_ParamLimits

0x4548,	// (0x0002cfde) cell_vkb2_top_candi_pane_g4

0xe584,	// (0x0003701a) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe584,	// (0x0003701a) cell_vkb2_top_candi_pane_g5

0x4569,	// (0x0002cfff) cell_vkb2_top_candi_pane_g6_ParamLimits

0x4569,	// (0x0002cfff) cell_vkb2_top_candi_pane_g6

0x0005,

0xfc04,	// (0x0003869a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfc04,	// (0x0003869a) cell_vkb2_top_candi_pane_g

0x4577,	// (0x0002d00d) cell_vkb2_top_candi_pane_t1

0x24e6,	// (0x0002af7c) aid_size_touch_slider_mark_ParamLimits

0x24e6,	// (0x0002af7c) aid_size_touch_slider_mark

0xacfd,	// (0x00033793) grid_graphic2_catg_pane_ParamLimits

0xacfd,	// (0x00033793) grid_graphic2_catg_pane

0xadb9,	// (0x0003384f) popup_grid_graphic2_window_t1_ParamLimits

0xadb9,	// (0x0003384f) popup_grid_graphic2_window_t1

0xadcf,	// (0x00033865) popup_grid_graphic2_window_t2_ParamLimits

0xadcf,	// (0x00033865) popup_grid_graphic2_window_t2

0x0001,

0xfbc4,	// (0x0003865a) popup_grid_graphic2_window_t_ParamLimits

0xfbc4,	// (0x0003865a) popup_grid_graphic2_window_t

0x8dfc,	// (0x00031892) bg_button_pane_cp05_ParamLimits

0xaf47,	// (0x000339dd) cell_graphic2_control_pane_g1_ParamLimits

0xb033,	// (0x00033ac9) cell_graphic2_catg_pane_ParamLimits

0xb033,	// (0x00033ac9) cell_graphic2_catg_pane

0x8c49,	// (0x000316df) bg_button_pane_cp12

0xb045,	// (0x00033adb) cell_graphic2_catg_pane_g1

0xf17b,	// (0x00037c11) cell_tb_ext_pane_t1_ParamLimits

0x3fc3,	// (0x0002ca59) vkb2_top_cell_right_narrow_pane_ParamLimits

0x3fc3,	// (0x0002ca59) vkb2_top_cell_right_narrow_pane

0x3fdb,	// (0x0002ca71) vkb2_top_cell_right_wide_pane_ParamLimits

0x3fdb,	// (0x0002ca71) vkb2_top_cell_right_wide_pane

0x2bc2,	// (0x0002b658) bg_vkb2_func_pane_ParamLimits

0x2bc2,	// (0x0002b658) bg_vkb2_func_pane

0x404c,	// (0x0002cae2) vkb2_top_cell_left_pane_g1_ParamLimits

0x2bc2,	// (0x0002b658) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2bc2,	// (0x0002b658) bg_vkb2_fuc_pane_cp03

0x40aa,	// (0x0002cb40) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xc19f,	// (0x00034c35) bg_vkb2_func_pane_g1

0xc1a7,	// (0x00034c3d) bg_vkb2_func_pane_g2

0xc1b7,	// (0x00034c4d) bg_vkb2_func_pane_g3

0xc1af,	// (0x00034c45) bg_vkb2_func_pane_g4

0xc1bf,	// (0x00034c55) bg_vkb2_func_pane_g5

0xc1c7,	// (0x00034c5d) bg_vkb2_func_pane_g6

0xc1cf,	// (0x00034c65) bg_vkb2_func_pane_g7

0xc1d7,	// (0x00034c6d) bg_vkb2_func_pane_g8

0xc197,	// (0x00034c2d) bg_vkb2_func_pane_g9

0x0008,

0x0540,	// (0x00028fd6) bg_vkb2_func_pane_g

0x2bc2,	// (0x0002b658) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2bc2,	// (0x0002b658) bg_vkb2_fuc_pane_cp01

0x404c,	// (0x0002cae2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x404c,	// (0x0002cae2) vkb2_top_cell_right_wide_pane_g1

0x2bc2,	// (0x0002b658) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2bc2,	// (0x0002b658) bg_vkb2_fuc_pane_cp02

0x40aa,	// (0x0002cb40) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x40aa,	// (0x0002cb40) vkb2_top_cell_right_narrow_pane_g1

0xa565,	// (0x00032ffb) aid_touch_area_decrease_ParamLimits

0xa565,	// (0x00032ffb) aid_touch_area_decrease

0xa59f,	// (0x00033035) aid_touch_area_increase_ParamLimits

0xa59f,	// (0x00033035) aid_touch_area_increase

0xa5c7,	// (0x0003305d) aid_touch_area_mute_ParamLimits

0xa5c7,	// (0x0003305d) aid_touch_area_mute

0xa5f7,	// (0x0003308d) aid_touch_area_slider_ParamLimits

0xa5f7,	// (0x0003308d) aid_touch_area_slider

0xa637,	// (0x000330cd) popup_slider_window_g4_ParamLimits

0xa637,	// (0x000330cd) popup_slider_window_g4

0xa65f,	// (0x000330f5) popup_slider_window_g5_ParamLimits

0xa65f,	// (0x000330f5) popup_slider_window_g5

0xa693,	// (0x00033129) popup_slider_window_g6_ParamLimits

0xa693,	// (0x00033129) popup_slider_window_g6

0xf0a5,	// (0x00037b3b) popup_slider_window_t2_ParamLimits

0xf0a5,	// (0x00037b3b) popup_slider_window_t2

0x0001,

0x043c,	// (0x00028ed2) popup_slider_window_t_ParamLimits

0x043c,	// (0x00028ed2) popup_slider_window_t

0xa6af,	// (0x00033145) slider_pane_ParamLimits

0xa6af,	// (0x00033145) slider_pane

0x5760,	// (0x0002e1f6) slider_pane_g1_ParamLimits

0x5760,	// (0x0002e1f6) slider_pane_g1

0x5774,	// (0x0002e20a) slider_pane_g2_ParamLimits

0x5774,	// (0x0002e20a) slider_pane_g2

0x578a,	// (0x0002e220) slider_pane_g3_ParamLimits

0x578a,	// (0x0002e220) slider_pane_g3

0x0003,

0xfc11,	// (0x000386a7) slider_pane_g_ParamLimits

0xfc11,	// (0x000386a7) slider_pane_g

0x8010,	// (0x00030aa6) popup_tb_float_extension_window_ParamLimits

0x8010,	// (0x00030aa6) popup_tb_float_extension_window

0x57b6,	// (0x0002e24c) aid_size_cell_tb_float_ext

0x8c49,	// (0x000316df) bg_popup_sub_window_cp28

0x57c2,	// (0x0002e258) grid_tb_float_ext_pane

0x57cc,	// (0x0002e262) cell_tb_float_ext_pane_ParamLimits

0x57cc,	// (0x0002e262) cell_tb_float_ext_pane

0x57e6,	// (0x0002e27c) cell_tb_float_ext_pane_g1

0x57ef,	// (0x0002e285) grid_highlight_pane_cp12

0x8730,	// (0x000311c6) cell_last_hwr_side_pane_ParamLimits

0x8730,	// (0x000311c6) cell_last_hwr_side_pane

0xdfff,	// (0x00036a95) cell_last_hwr_side_pane_g1

0x57f8,	// (0x0002e28e) cell_last_hwr_side_pane_g2

0x0001,

0xfc1a,	// (0x000386b0) cell_last_hwr_side_pane_g

0x8abc,	// (0x00031552) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8abc,	// (0x00031552) vkb2_area_bottom_space_btn_pane

0x2fdc,	// (0x0002ba72) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xf41e,	// (0x00037eb4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x4577,	// (0x0002d00d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x4596,	// (0x0002d02c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x4596,	// (0x0002d02c) vkb2_area_bottom_space_btn_pane_g1

0x45d0,	// (0x0002d066) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x45d0,	// (0x0002d066) vkb2_area_bottom_space_btn_pane_g2

0x4606,	// (0x0002d09c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x4606,	// (0x0002d09c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfc1f,	// (0x000386b5) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfc1f,	// (0x000386b5) vkb2_area_bottom_space_btn_pane_g

0x2c85,	// (0x0002b71b) cel_fep_hwr_func_pane_ParamLimits

0x2c85,	// (0x0002b71b) cel_fep_hwr_func_pane

0x8705,	// (0x0003119b) cell_hwr_side_button_pane_ParamLimits

0x8705,	// (0x0003119b) cell_hwr_side_button_pane

0xf1af,	// (0x00037c45) aid_area_touch_clock_ParamLimits

0x8dfc,	// (0x00031892) bg_uniindi_top_pane_ParamLimits

0xf1c1,	// (0x00037c57) uniindi_top_pane_g1_ParamLimits

0xf1d7,	// (0x00037c6d) uniindi_top_pane_g2_ParamLimits

0xf1e3,	// (0x00037c79) uniindi_top_pane_g3_ParamLimits

0xf1f4,	// (0x00037c8a) uniindi_top_pane_g4_ParamLimits

0x0474,	// (0x00028f0a) uniindi_top_pane_g_ParamLimits

0xf201,	// (0x00037c97) uniindi_top_pane_t1_ParamLimits

0x8dfc,	// (0x00031892) bg_vkb2_func_pane_cp01_ParamLimits

0x8dfc,	// (0x00031892) bg_vkb2_func_pane_cp01

0x5801,	// (0x0002e297) cel_fep_hwr_func_pane_g1_ParamLimits

0x5801,	// (0x0002e297) cel_fep_hwr_func_pane_g1

0x8dfc,	// (0x00031892) bg_vkb2_func_pane_cp02_ParamLimits

0x8dfc,	// (0x00031892) bg_vkb2_func_pane_cp02

0x5801,	// (0x0002e297) cell_hwr_side_button_pane_g1_ParamLimits

0x5801,	// (0x0002e297) cell_hwr_side_button_pane_g1

0xc0ad,	// (0x00034b43) status_pane_g4_ParamLimits

0xc0ad,	// (0x00034b43) status_pane_g4

0xc0c7,	// (0x00034b5d) status_pane_t1

0xde8e,	// (0x00036924) form2_midp_gauge_slider_cont_pane

0xde96,	// (0x0003692c) form2_midp_gauge_slider_pane_t1_ParamLimits

0x9fe6,	// (0x00032a7c) form2_midp_gauge_slider_pane_t2_ParamLimits

0x9ffa,	// (0x00032a90) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfa27,	// (0x000384bd) form2_midp_gauge_slider_pane_t_ParamLimits

0xdea8,	// (0x0003693e) form2_midp_slider_pane_ParamLimits

0x3ba1,	// (0x0002c637) aid_size_cell_func_vkb2_ParamLimits

0x3ba1,	// (0x0002c637) aid_size_cell_func_vkb2

0x57a2,	// (0x0002e238) slider_pane_g4_ParamLimits

0x57a2,	// (0x0002e238) slider_pane_g4

0x8b37,	// (0x000315cd) form2_midp_gauge_slider_pane_t2_cp01

0x8b47,	// (0x000315dd) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8b47,	// (0x000315dd) form2_midp_gauge_slider_pane_t3_cp01

0x467b,	// (0x0002d111) form2_midp_slider_pane_cp01

0x8c49,	// (0x000316df) navi_smil_pane

0x5831,	// (0x0002e2c7) navi_smil_pane_g1

0x5839,	// (0x0002e2cf) navi_smil_pane_t1

0x580f,	// (0x0002e2a5) form2_midp_slider_pane_g1

0x5818,	// (0x0002e2ae) form2_midp_slider_pane_g2

0x5820,	// (0x0002e2b6) form2_midp_slider_pane_g3

0x580f,	// (0x0002e2a5) form2_midp_slider_pane_g4

0xb04e,	// (0x00033ae4) form2_midp_slider_pane_g5

0x0004,

0xfc28,	// (0x000386be) form2_midp_slider_pane_g

0x4640,	// (0x0002d0d6) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x4640,	// (0x0002d0d6) vkb2_area_bottom_space_btn_pane_g4

0x81f3,	// (0x00030c89) lc0_navi_pane_ParamLimits

0x81f3,	// (0x00030c89) lc0_navi_pane

0x825d,	// (0x00030cf3) lc0_stat_indi_pane_ParamLimits

0x825d,	// (0x00030cf3) lc0_stat_indi_pane

0x8272,	// (0x00030d08) ls0_title_pane_ParamLimits

0x8272,	// (0x00030d08) ls0_title_pane

0xb30b,	// (0x00033da1) bg_popup_sub_pane_cp14_ParamLimits

0xf196,	// (0x00037c2c) list_uniindi_pane_ParamLimits

0xf1a2,	// (0x00037c38) uniindi_top_pane_ParamLimits

0xf23e,	// (0x00037cd4) list_single_uniindi_pane_g1_ParamLimits

0xf251,	// (0x00037ce7) list_single_uniindi_pane_t1_ParamLimits

0x8b66,	// (0x000315fc) lc0_stat_clock_pane_ParamLimits

0x8b66,	// (0x000315fc) lc0_stat_clock_pane

0xb059,	// (0x00033aef) lc0_stat_indi_pane_g1_ParamLimits

0xb059,	// (0x00033aef) lc0_stat_indi_pane_g1

0xb066,	// (0x00033afc) lc0_stat_indi_pane_g2_ParamLimits

0xb066,	// (0x00033afc) lc0_stat_indi_pane_g2

0x0001,

0xfc33,	// (0x000386c9) lc0_stat_indi_pane_g_ParamLimits

0xfc33,	// (0x000386c9) lc0_stat_indi_pane_g

0x8b73,	// (0x00031609) lc0_uni_indicator_pane_ParamLimits

0x8b73,	// (0x00031609) lc0_uni_indicator_pane

0xb073,	// (0x00033b09) ls0_title_pane_g1_ParamLimits

0xb073,	// (0x00033b09) ls0_title_pane_g1

0xb087,	// (0x00033b1d) ls0_title_pane_t1_ParamLimits

0xb087,	// (0x00033b1d) ls0_title_pane_t1

0x8b80,	// (0x00031616) lc0_uni_indicator_pane_g1_ParamLimits

0x8b80,	// (0x00031616) lc0_uni_indicator_pane_g1

0x5847,	// (0x0002e2dd) lc0_stat_clock_pane_t1

0x0895,	// (0x0002932b) main_ai5_pane

0x5855,	// (0x0002e2eb) ai5_sk_pane_ParamLimits

0x5855,	// (0x0002e2eb) ai5_sk_pane

0xb0b5,	// (0x00033b4b) cell_ai5_widget_pane_ParamLimits

0xb0b5,	// (0x00033b4b) cell_ai5_widget_pane

0x5862,	// (0x0002e2f8) aid_size_cell_widget_grid

0x5870,	// (0x0002e306) bg_ai5_widget_pane_ParamLimits

0x5870,	// (0x0002e306) bg_ai5_widget_pane

0x58e4,	// (0x0002e37a) cell_ai5_widget_pane_g2

0x58f4,	// (0x0002e38a) cell_ai5_widget_pane_g3

0x590b,	// (0x0002e3a1) cell_ai5_widget_pane_g4

0x5917,	// (0x0002e3ad) cell_ai5_widget_pane_g5

0x5923,	// (0x0002e3b9) cell_ai5_widget_pane_g6

0x592f,	// (0x0002e3c5) cell_ai5_widget_pane_g7

0x5977,	// (0x0002e40d) cell_ai5_widget_pane_t1_ParamLimits

0x5977,	// (0x0002e40d) cell_ai5_widget_pane_t1

0x5994,	// (0x0002e42a) cell_ai5_widget_pane_t2_ParamLimits

0x5994,	// (0x0002e42a) cell_ai5_widget_pane_t2

0x59ac,	// (0x0002e442) cell_ai5_widget_pane_t3_ParamLimits

0x59ac,	// (0x0002e442) cell_ai5_widget_pane_t3

0x59c4,	// (0x0002e45a) cell_ai5_widget_pane_t4_ParamLimits

0x59c4,	// (0x0002e45a) cell_ai5_widget_pane_t4

0x59e1,	// (0x0002e477) cell_ai5_widget_pane_t5_ParamLimits

0x59e1,	// (0x0002e477) cell_ai5_widget_pane_t5

0x5a00,	// (0x0002e496) cell_ai5_widget_pane_t6_ParamLimits

0x5a00,	// (0x0002e496) cell_ai5_widget_pane_t6

0x5a12,	// (0x0002e4a8) cell_ai5_widget_pane_t7_ParamLimits

0x5a12,	// (0x0002e4a8) cell_ai5_widget_pane_t7

0x5a2b,	// (0x0002e4c1) cell_ai5_widget_pane_t8_ParamLimits

0x5a2b,	// (0x0002e4c1) cell_ai5_widget_pane_t8

0x0009,

0xfc4d,	// (0x000386e3) cell_ai5_widget_pane_t_ParamLimits

0xfc4d,	// (0x000386e3) cell_ai5_widget_pane_t

0x5a7f,	// (0x0002e515) grid_ai5_widget_pane

0xb30b,	// (0x00033da1) highlight_cell_ai5_widget_pane_ParamLimits

0xb30b,	// (0x00033da1) highlight_cell_ai5_widget_pane

0xb11f,	// (0x00033bb5) ai5_sk_left_pane

0xb129,	// (0x00033bbf) ai5_sk_middle_pane

0xb133,	// (0x00033bc9) ai5_sk_right_pane

0x5a93,	// (0x0002e529) bg_ai5_widget_pane_g1_ParamLimits

0x5a93,	// (0x0002e529) bg_ai5_widget_pane_g1

0x5a9f,	// (0x0002e535) bg_ai5_widget_pane_g2_ParamLimits

0x5a9f,	// (0x0002e535) bg_ai5_widget_pane_g2

0x5aab,	// (0x0002e541) bg_ai5_widget_pane_g3_ParamLimits

0x5aab,	// (0x0002e541) bg_ai5_widget_pane_g3

0x5ab7,	// (0x0002e54d) bg_ai5_widget_pane_g4_ParamLimits

0x5ab7,	// (0x0002e54d) bg_ai5_widget_pane_g4

0x5ac3,	// (0x0002e559) bg_ai5_widget_pane_g5_ParamLimits

0x5ac3,	// (0x0002e559) bg_ai5_widget_pane_g5

0x5acf,	// (0x0002e565) bg_ai5_widget_pane_g6_ParamLimits

0x5acf,	// (0x0002e565) bg_ai5_widget_pane_g6

0x5adb,	// (0x0002e571) bg_ai5_widget_pane_g7_ParamLimits

0x5adb,	// (0x0002e571) bg_ai5_widget_pane_g7

0x5ae7,	// (0x0002e57d) bg_ai5_widget_pane_g8_ParamLimits

0x5ae7,	// (0x0002e57d) bg_ai5_widget_pane_g8

0x5af3,	// (0x0002e589) bg_ai5_widget_pane_g9_ParamLimits

0x5af3,	// (0x0002e589) bg_ai5_widget_pane_g9

0x0008,

0xfc62,	// (0x000386f8) bg_ai5_widget_pane_g_ParamLimits

0xfc62,	// (0x000386f8) bg_ai5_widget_pane_g

0x5b25,	// (0x0002e5bb) cell_shortcut_ai5_widget_pane_ParamLimits

0x5b25,	// (0x0002e5bb) cell_shortcut_ai5_widget_pane

0xbd49,	// (0x000347df) bg_cell_shortcut_ai5_widget_pane

0x5b36,	// (0x0002e5cc) cell_grid_ai5_widget_pane_g1

0x5b3f,	// (0x0002e5d5) highlight_cell_shortcut_ai5_widget_pane

0xc19f,	// (0x00034c35) ai5_sk_left_pane_g1

0x5b47,	// (0x0002e5dd) ai5_sk_left_pane_g2

0x5b4f,	// (0x0002e5e5) ai5_sk_left_pane_g3

0x5b57,	// (0x0002e5ed) ai5_sk_left_pane_g4

0x0003,

0xfc75,	// (0x0003870b) ai5_sk_left_pane_g

0x5b5f,	// (0x0002e5f5) ai5_sk_left_pane_t1

0xc1a7,	// (0x00034c3d) ai5_sk_right_pane_g1

0x5b6d,	// (0x0002e603) ai5_sk_right_pane_g2

0x5b75,	// (0x0002e60b) ai5_sk_right_pane_g3

0x5b7d,	// (0x0002e613) ai5_sk_right_pane_g4

0x0003,

0xfc7e,	// (0x00038714) ai5_sk_right_pane_g

0x5b85,	// (0x0002e61b) ai5_sk_right_pane_t1

0xc1a7,	// (0x00034c3d) ai5_sk_middle_pane_g1

0xc19f,	// (0x00034c35) ai5_sk_middle_pane_g2

0xc1bf,	// (0x00034c55) ai5_sk_middle_pane_g3

0x5b75,	// (0x0002e60b) ai5_sk_middle_pane_g4

0x5b4f,	// (0x0002e5e5) ai5_sk_middle_pane_g5

0x5b93,	// (0x0002e629) ai5_sk_middle_pane_g6

0xb13d,	// (0x00033bd3) ai5_sk_middle_pane_g7

0x0006,

0xfc87,	// (0x0003871d) ai5_sk_middle_pane_g

0x80df,	// (0x00030b75) aid_touch_area_size_lc0_ParamLimits

0x80df,	// (0x00030b75) aid_touch_area_size_lc0

0x300b,	// (0x0002baa1) cell_hwr_candidate_pane_t1_ParamLimits

0xbfcf,	// (0x00034a65) aid_touch_navi_pane

0x836b,	// (0x00030e01) status_dt_navi_pane_ParamLimits

0x836b,	// (0x00030e01) status_dt_navi_pane

0x8383,	// (0x00030e19) status_dt_sta_pane_ParamLimits

0x8383,	// (0x00030e19) status_dt_sta_pane

0xb145,	// (0x00033bdb) dt_sta_controll_pane

0xb152,	// (0x00033be8) dt_sta_indi_pane

0xb15f,	// (0x00033bf5) dt_sta_title_pane

0x8dfc,	// (0x00031892) bg_dt_sta_indi_pane_ParamLimits

0x8dfc,	// (0x00031892) bg_dt_sta_indi_pane

0x5b9b,	// (0x0002e631) dt_sta_battery_pane

0xb171,	// (0x00033c07) dt_sta_indi_pane_g1

0xb17a,	// (0x00033c10) dt_sta_indi_pane_g2

0xb183,	// (0x00033c19) dt_sta_indi_pane_g3

0x0002,

0xfc96,	// (0x0003872c) dt_sta_indi_pane_g

0xb18c,	// (0x00033c22) dt_sta_signal_pane

0xb30b,	// (0x00033da1) bg_dt_sta_title_pane_ParamLimits

0xb30b,	// (0x00033da1) bg_dt_sta_title_pane

0x5ba3,	// (0x0002e639) dt_sta_title_pane_g1

0xb195,	// (0x00033c2b) dt_sta_title_pane_t1_ParamLimits

0xb195,	// (0x00033c2b) dt_sta_title_pane_t1

0x8c49,	// (0x000316df) bg_dt_sta_control_pane

0xb1aa,	// (0x00033c40) dt_sta_controll_pane_g1

0x5bab,	// (0x0002e641) bg_dt_sta_title_pane_g1

0x5bb4,	// (0x0002e64a) bg_dt_sta_title_pane_g2

0x5bbd,	// (0x0002e653) bg_dt_sta_title_pane_g3

0x0002,

0xfc9d,	// (0x00038733) bg_dt_sta_title_pane_g

0xdfff,	// (0x00036a95) bg_dt_sta_indi_pane_g1

0x5bc6,	// (0x0002e65c) dt_sta_signal_pane_g1

0x5bce,	// (0x0002e664) dt_sta_signal_pane_g2

0x0001,

0xfca4,	// (0x0003873a) dt_sta_signal_pane_g

0x5bd6,	// (0x0002e66c) dt_sta_battery_pane_g1

0x5bdf,	// (0x0002e675) dt_sta_battery_pane_t1

0xdfff,	// (0x00036a95) bg_dt_sta_control_pane_g1

0xb8ba,	// (0x00034350) fep_china_uni_eep_pane

0xb8c2,	// (0x00034358) fep_china_uni_entry_pane_ParamLimits

0xb8d2,	// (0x00034368) popup_fep_china_uni_window_g1_ParamLimits

0xb8e2,	// (0x00034378) popup_fep_china_uni_window_g2_ParamLimits

0xb8e2,	// (0x00034378) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x000381b9) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x000381b9) popup_fep_china_uni_window_g

0x5bee,	// (0x0002e684) fep_china_uni_eep_pane_g1

0x5bf6,	// (0x0002e68c) fep_china_uni_eep_pane_t1

0x5828,	// (0x0002e2be) aid_touch_area_size_smil_player

0xc080,	// (0x00034b16) lc0_clock_pane

0xc0bb,	// (0x00034b51) status_pane_g5_ParamLimits

0xc0bb,	// (0x00034b51) status_pane_g5

0x7b9e,	// (0x00030634) popup_keymap_window

0xc099,	// (0x00034b2f) status_icon_pane

0x58f4,	// (0x0002e38a) cell_ai5_widget_pane_g3_ParamLimits

0x590b,	// (0x0002e3a1) cell_ai5_widget_pane_g4_ParamLimits

0x5917,	// (0x0002e3ad) cell_ai5_widget_pane_g5_ParamLimits

0x593b,	// (0x0002e3d1) cell_ai5_widget_pane_g8_ParamLimits

0x593b,	// (0x0002e3d1) cell_ai5_widget_pane_g8

0x594f,	// (0x0002e3e5) cell_ai5_widget_pane_g9_ParamLimits

0x594f,	// (0x0002e3e5) cell_ai5_widget_pane_g9

0x5963,	// (0x0002e3f9) cell_ai5_widget_pane_g10_ParamLimits

0x5963,	// (0x0002e3f9) cell_ai5_widget_pane_g10

0x5c05,	// (0x0002e69b) status_icon_pane_g1

0x8c49,	// (0x000316df) bg_popup_sub_pane_cp13

0x5c0d,	// (0x0002e6a3) popup_keymap_window_t1

0x78b6,	// (0x0003034c) control_pane_g6_ParamLimits

0x78b6,	// (0x0003034c) control_pane_g6

0x78c3,	// (0x00030359) control_pane_g7_ParamLimits

0x78c3,	// (0x00030359) control_pane_g7

0x78d0,	// (0x00030366) control_pane_g8_ParamLimits

0x78d0,	// (0x00030366) control_pane_g8

0xb145,	// (0x00033bdb) dt_sta_controll_pane_ParamLimits

0xb152,	// (0x00033be8) dt_sta_indi_pane_ParamLimits

0xb15f,	// (0x00033bf5) dt_sta_title_pane_ParamLimits

0x9252,	// (0x00031ce8) aid_size_touch_scroll_bar_cale

0x096e,	// (0x00029404) popup_discreet_window_ParamLimits

0x096e,	// (0x00029404) popup_discreet_window

0x716c,	// (0x0002fc02) popup_sk_window

0xc6ef,	// (0x00035185) bg_popup_sub_pane_cp28_ParamLimits

0xc6ef,	// (0x00035185) bg_popup_sub_pane_cp28

0x5c1b,	// (0x0002e6b1) popup_discreet_window_g1_ParamLimits

0x5c1b,	// (0x0002e6b1) popup_discreet_window_g1

0x5c3b,	// (0x0002e6d1) popup_discreet_window_t1_ParamLimits

0x5c3b,	// (0x0002e6d1) popup_discreet_window_t1

0x5c59,	// (0x0002e6ef) popup_discreet_window_t2_ParamLimits

0x5c59,	// (0x0002e6ef) popup_discreet_window_t2

0x0002,

0xfca9,	// (0x0003873f) popup_discreet_window_t_ParamLimits

0xfca9,	// (0x0003873f) popup_discreet_window_t

0x46b3,	// (0x0002d149) popup_sk_window_g1

0x46bd,	// (0x0002d153) popup_sk_window_g2

0x0001,

0xfcb0,	// (0x00038746) popup_sk_window_g

0x46c7,	// (0x0002d15d) popup_sk_window_t1

0x46d5,	// (0x0002d16b) popup_sk_window_t1_copy1

0x58e4,	// (0x0002e37a) cell_ai5_widget_pane_g2_ParamLimits

0x5a3d,	// (0x0002e4d3) cell_ai5_widget_pane_t9_ParamLimits

0x5a3d,	// (0x0002e4d3) cell_ai5_widget_pane_t9

0x8c49,	// (0x000316df) main_fep_fshwr2_pane

0x8bae,	// (0x00031644) aid_fshwr2_btn_pane

0x8bbf,	// (0x00031655) aid_fshwr2_syb_pane

0x8bd0,	// (0x00031666) aid_fshwr2_txt_pane

0x8bdc,	// (0x00031672) fshwr2_func_candi_pane

0x8bfb,	// (0x00031691) fshwr2_hwr_syb_pane

0x8c16,	// (0x000316ac) fshwr2_icf_pane

0x8c49,	// (0x000316df) fshwr2_icf_bg_pane

0xb1b3,	// (0x00033c49) fshwr2_icf_pane_t1_ParamLimits

0xb1b3,	// (0x00033c49) fshwr2_icf_pane_t1

0xb837,	// (0x000342cd) fshwr2_func_candi_pane_g1

0xb1cc,	// (0x00033c62) fshwr2_func_candi_row_pane_ParamLimits

0xb1cc,	// (0x00033c62) fshwr2_func_candi_row_pane

0xb1dc,	// (0x00033c72) cell_fshwr2_syb_pane_ParamLimits

0xb1dc,	// (0x00033c72) cell_fshwr2_syb_pane

0xe190,	// (0x00036c26) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe190,	// (0x00036c26) fshwr2_hwr_syb_pane_g1

0x8c49,	// (0x000316df) bg_popup_call_pane_cp01

0xb1f6,	// (0x00033c8c) fshwr2_func_candi_cell_pane_ParamLimits

0xb1f6,	// (0x00033c8c) fshwr2_func_candi_cell_pane

0xcd31,	// (0x000357c7) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xcd31,	// (0x000357c7) fshwr2_func_candi_cell_bg_pane

0xb221,	// (0x00033cb7) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb221,	// (0x00033cb7) fshwr2_func_candi_cell_pane_g1

0x5cab,	// (0x0002e741) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x5cab,	// (0x0002e741) fshwr2_func_candi_cell_pane_t1

0x8c49,	// (0x000316df) bg_button_pane_cp08

0xbd49,	// (0x000347df) cell_fshwr2_syb_bg_pane

0xb241,	// (0x00033cd7) cell_fshwr2_syb_bg_pane_g1

0xb249,	// (0x00033cdf) cell_fshwr2_syb_bg_pane_t1

0xb30b,	// (0x00033da1) main_tmo_pane

0x9b9c,	// (0x00032632) uni_indicator_pane_g1_ParamLimits

0x9bb3,	// (0x00032649) uni_indicator_pane_g2_ParamLimits

0x9bc9,	// (0x0003265f) uni_indicator_pane_g3_ParamLimits

0xd123,	// (0x00035bb9) uni_indicator_pane_g4_ParamLimits

0xd123,	// (0x00035bb9) uni_indicator_pane_g4

0xd137,	// (0x00035bcd) uni_indicator_pane_g5_ParamLimits

0xd137,	// (0x00035bcd) uni_indicator_pane_g5

0xd137,	// (0x00035bcd) uni_indicator_pane_g6_ParamLimits

0xd137,	// (0x00035bcd) uni_indicator_pane_g6

0xf8eb,	// (0x00038381) uni_indicator_pane_g_ParamLimits

0xa547,	// (0x00032fdd) popup_tmo_note_window_ParamLimits

0xa547,	// (0x00032fdd) popup_tmo_note_window

0x36f7,	// (0x0002c18d) fshwr2_bg_pane

0xb232,	// (0x00033cc8) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb232,	// (0x00033cc8) fshwr2_func_candi_cell_pane_g2

0x0001,

0x05f7,	// (0x0002908d) fshwr2_func_candi_cell_pane_g_ParamLimits

0x05f7,	// (0x0002908d) fshwr2_func_candi_cell_pane_g

0xdfff,	// (0x00036a95) bg_popup_window_pane_cp01

0x5cbe,	// (0x0002e754) bg_popup_window_pane_g1_cp01

0x5cc7,	// (0x0002e75d) bg_popup_window_pane_cp22_ParamLimits

0x5cc7,	// (0x0002e75d) bg_popup_window_pane_cp22

0x5cd5,	// (0x0002e76b) listscroll_tmo_link_pane_ParamLimits

0x5cd5,	// (0x0002e76b) listscroll_tmo_link_pane

0x5d15,	// (0x0002e7ab) popup_tmo_note_window_g1_ParamLimits

0x5d15,	// (0x0002e7ab) popup_tmo_note_window_g1

0x5d22,	// (0x0002e7b8) tmo_note_info_pane_ParamLimits

0x5d22,	// (0x0002e7b8) tmo_note_info_pane

0xb258,	// (0x00033cee) list_tmo_note_info_pane_g1_ParamLimits

0xb258,	// (0x00033cee) list_tmo_note_info_pane_g1

0x5d3c,	// (0x0002e7d2) list_tmo_note_info_pane_g2_ParamLimits

0x5d3c,	// (0x0002e7d2) list_tmo_note_info_pane_g2

0x0001,

0xfcb5,	// (0x0003874b) list_tmo_note_info_pane_g_ParamLimits

0xfcb5,	// (0x0003874b) list_tmo_note_info_pane_g

0x5d58,	// (0x0002e7ee) list_tmo_note_info_text_pane_ParamLimits

0x5d58,	// (0x0002e7ee) list_tmo_note_info_text_pane

0x5d9a,	// (0x0002e830) list_tmo_link_pane

0x5da7,	// (0x0002e83d) scroll_pane_cp20

0x5db4,	// (0x0002e84a) list_single_tmo_link_pane_ParamLimits

0x5db4,	// (0x0002e84a) list_single_tmo_link_pane

0x5dc4,	// (0x0002e85a) list_single_tmo_link_pane_t1

0x5dd2,	// (0x0002e868) list_tmo_note_info_text_pane_t1_ParamLimits

0x5dd2,	// (0x0002e868) list_tmo_note_info_text_pane_t1

0x7585,	// (0x0003001b) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7585,	// (0x0003001b) aid_size_touch_scroll_bar_cp01

0x9702,	// (0x00032198) aid_size_touch_slider_marker

0x715c,	// (0x0002fbf2) popup_settings_window_ParamLimits

0x715c,	// (0x0002fbf2) popup_settings_window

0x4fe9,	// (0x0002da7f) popup_candi_list_indi_window

0xbfcf,	// (0x00034a65) aid_touch_navi_pane_ParamLimits

0x3652,	// (0x0002c0e8) rs_clock_indi_pane

0x365b,	// (0x0002c0f1) sctrl_sk_bottom_pane_ParamLimits

0x366c,	// (0x0002c102) sctrl_sk_top_pane_ParamLimits

0x3bfb,	// (0x0002c691) popup_fep_tooltip_window

0x5862,	// (0x0002e2f8) aid_size_cell_widget_grid_ParamLimits

0x58cf,	// (0x0002e365) cell_ai5_widget_pane_g1_ParamLimits

0x58cf,	// (0x0002e365) cell_ai5_widget_pane_g1

0x5923,	// (0x0002e3b9) cell_ai5_widget_pane_g6_ParamLimits

0x592f,	// (0x0002e3c5) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfc38,	// (0x000386ce) cell_ai5_widget_pane_g_ParamLimits

0xfc38,	// (0x000386ce) cell_ai5_widget_pane_g

0x5a61,	// (0x0002e4f7) cell_ai5_widget_pane_t10_ParamLimits

0x5a61,	// (0x0002e4f7) cell_ai5_widget_pane_t10

0x5a7f,	// (0x0002e515) grid_ai5_widget_pane_ParamLimits

0x5aff,	// (0x0002e595) cell_contacts_ai5_widget_pane_ParamLimits

0x5aff,	// (0x0002e595) cell_contacts_ai5_widget_pane

0x5c6e,	// (0x0002e704) popup_discreet_window_t3_ParamLimits

0x5c6e,	// (0x0002e704) popup_discreet_window_t3

0x8c2b,	// (0x000316c1) popup_fshwr2_char_preview_window_ParamLimits

0x8c2b,	// (0x000316c1) popup_fshwr2_char_preview_window

0xb26f,	// (0x00033d05) tmo_note_info_pane_t1

0xb284,	// (0x00033d1a) tmo_note_info_pane_t2

0xb29d,	// (0x00033d33) tmo_note_info_pane_t3

0x5d76,	// (0x0002e80c) tmo_note_info_pane_t4

0x5d88,	// (0x0002e81e) tmo_note_info_pane_t5

0x0004,

0xfcba,	// (0x00038750) tmo_note_info_pane_t

0x5d9a,	// (0x0002e830) list_tmo_link_pane_ParamLimits

0x5da7,	// (0x0002e83d) scroll_pane_cp20_ParamLimits

0x8c49,	// (0x000316df) bg_popup_fep_char_preview_window_cp01

0x5deb,	// (0x0002e881) popup_fshwr2_char_preview_window_t1

0x5df9,	// (0x0002e88f) popup_candi_list_indi_window_g1

0x5e02,	// (0x0002e898) bg_cell_contacts_ai5_widget_pane

0x5e0e,	// (0x0002e8a4) cell_contacts_ai5_widget_pane_g1

0x5e21,	// (0x0002e8b7) cell_contacts_ai5_widget_pane_g2

0x5e2d,	// (0x0002e8c3) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfcc5,	// (0x0003875b) cell_contacts_ai5_widget_pane_g

0x5e3f,	// (0x0002e8d5) cell_contacts_ai5_widget_pane_t1

0xb30b,	// (0x00033da1) highlight_cell_shortcut_ai5_widget_pane_cp01

0x5eb9,	// (0x0002e94f) settings_container_pane

0xbd49,	// (0x000347df) listscroll_set_pane_copy1

0xd9a6,	// (0x0003643c) scroll_pane_cp121_copy1

0x5ec5,	// (0x0002e95b) set_content_pane_copy1

0x5ecd,	// (0x0002e963) aid_height_set_list_copy1_ParamLimits

0x5ecd,	// (0x0002e963) aid_height_set_list_copy1

0xbfa7,	// (0x00034a3d) aid_size_parent_copy1_ParamLimits

0xbfa7,	// (0x00034a3d) aid_size_parent_copy1

0x5ed9,	// (0x0002e96f) button_value_adjust_pane_cp6_copy1_ParamLimits

0x5ed9,	// (0x0002e96f) button_value_adjust_pane_cp6_copy1

0xb464,	// (0x00033efa) list_highlight_pane_cp2_copy1_ParamLimits

0xb464,	// (0x00033efa) list_highlight_pane_cp2_copy1

0x5eed,	// (0x0002e983) list_set_pane_copy1_ParamLimits

0x5eed,	// (0x0002e983) list_set_pane_copy1

0x5e54,	// (0x0002e8ea) main_pane_set_t1_copy1_ParamLimits

0x5e54,	// (0x0002e8ea) main_pane_set_t1_copy1

0x5e8e,	// (0x0002e924) main_pane_set_t2_copy1_ParamLimits

0x5e8e,	// (0x0002e924) main_pane_set_t2_copy1

0x5f9a,	// (0x0002ea30) main_pane_set_t3_copy1

0x5fa8,	// (0x0002ea3e) main_pane_set_t4_copy1

0x5ead,	// (0x0002e943) set_content_pane_g1_copy1_ParamLimits

0x5ead,	// (0x0002e943) set_content_pane_g1_copy1

0x5fb6,	// (0x0002ea4c) setting_code_pane_copy1

0x5fbe,	// (0x0002ea54) setting_slider_graphic_pane_copy1

0x5fbe,	// (0x0002ea54) setting_slider_pane_copy1

0x5fbe,	// (0x0002ea54) setting_text_pane_copy1

0x5fbe,	// (0x0002ea54) setting_volume_pane_copy1

0x5fb6,	// (0x0002ea4c) settings_code_pane_cp2_copy1

0x5fc6,	// (0x0002ea5c) settings_code_pane_cp_copy1_ParamLimits

0x5fc6,	// (0x0002ea5c) settings_code_pane_cp_copy1

0x4764,	// (0x0002d1fa) volume_set_pane_copy1

0x5fda,	// (0x0002ea70) volume_set_pane_g10_copy1

0x5fe2,	// (0x0002ea78) volume_set_pane_g1_copy1

0x5fea,	// (0x0002ea80) volume_set_pane_g2_copy1

0x5ff2,	// (0x0002ea88) volume_set_pane_g3_copy1

0x5ffa,	// (0x0002ea90) volume_set_pane_g4_copy1

0x6002,	// (0x0002ea98) volume_set_pane_g5_copy1

0x600a,	// (0x0002eaa0) volume_set_pane_g6_copy1

0x6012,	// (0x0002eaa8) volume_set_pane_g7_copy1

0x601a,	// (0x0002eab0) volume_set_pane_g8_copy1

0x6022,	// (0x0002eab8) volume_set_pane_g9_copy1

0x8cc9,	// (0x0003175f) bg_set_opt_pane_cp_copy1_ParamLimits

0x8cc9,	// (0x0003175f) bg_set_opt_pane_cp_copy1

0x476c,	// (0x0002d202) setting_slider_pane_t1_copy1_ParamLimits

0x476c,	// (0x0002d202) setting_slider_pane_t1_copy1

0x478a,	// (0x0002d220) setting_slider_pane_t2_copy1_ParamLimits

0x478a,	// (0x0002d220) setting_slider_pane_t2_copy1

0x47a4,	// (0x0002d23a) setting_slider_pane_t3_copy1_ParamLimits

0x47a4,	// (0x0002d23a) setting_slider_pane_t3_copy1

0x47bc,	// (0x0002d252) slider_set_pane_copy1_ParamLimits

0x47bc,	// (0x0002d252) slider_set_pane_copy1

0xb35a,	// (0x00033df0) set_opt_bg_pane_g1_copy2

0xb362,	// (0x00033df8) set_opt_bg_pane_g2_copy2

0x602a,	// (0x0002eac0) set_opt_bg_pane_g3_copy2

0xb372,	// (0x00033e08) set_opt_bg_pane_g4_copy2

0xb37a,	// (0x00033e10) set_opt_bg_pane_g5_copy2

0xb382,	// (0x00033e18) set_opt_bg_pane_g6_copy2

0x6034,	// (0x0002eaca) set_opt_bg_pane_g7_copy2

0x603c,	// (0x0002ead2) set_opt_bg_pane_g8_copy2

0x6046,	// (0x0002eadc) set_opt_bg_pane_g9_copy2

0x6050,	// (0x0002eae6) aid_size_touch_slider_mark_copy1_ParamLimits

0x6050,	// (0x0002eae6) aid_size_touch_slider_mark_copy1

0x6064,	// (0x0002eafa) slider_set_pane_g1_copy1

0x606d,	// (0x0002eb03) slider_set_pane_g2_copy1

0xd559,	// (0x00035fef) slider_set_pane_g3_copy1_ParamLimits

0xd559,	// (0x00035fef) slider_set_pane_g3_copy1

0xd56d,	// (0x00036003) slider_set_pane_g4_copy1_ParamLimits

0xd56d,	// (0x00036003) slider_set_pane_g4_copy1

0xd585,	// (0x0003601b) slider_set_pane_g5_copy1_ParamLimits

0xd585,	// (0x0003601b) slider_set_pane_g5_copy1

0xd559,	// (0x00035fef) slider_set_pane_g6_copy1_ParamLimits

0xd559,	// (0x00035fef) slider_set_pane_g6_copy1

0x6075,	// (0x0002eb0b) slider_set_pane_g7_copy1_ParamLimits

0x6075,	// (0x0002eb0b) slider_set_pane_g7_copy1

0x8c5d,	// (0x000316f3) bg_set_opt_pane_cp2_copy1

0x608b,	// (0x0002eb21) setting_slider_graphic_pane_g1_copy1

0x6094,	// (0x0002eb2a) setting_slider_graphic_pane_t1_copy1

0x60a4,	// (0x0002eb3a) setting_slider_graphic_pane_t2_copy1

0x60b4,	// (0x0002eb4a) slider_set_pane_cp_copy1

0x60c4,	// (0x0002eb5a) input_focus_pane_cp1_copy1

0x60cd,	// (0x0002eb63) list_set_text_pane_copy1

0x60d5,	// (0x0002eb6b) setting_text_pane_g1_copy1

0x6632,	// (0x0002f0c8) set_text_pane_t1_copy1

0x60c4,	// (0x0002eb5a) input_focus_pane_cp2_copy1

0x60d5,	// (0x0002eb6b) setting_code_pane_g1_copy1

0x60de,	// (0x0002eb74) setting_code_pane_t1_copy1

0xd236,	// (0x00035ccc) list_set_graphic_pane_copy1

0x8c5d,	// (0x000316f3) bg_set_opt_pane_cp4_copy1

0xba5f,	// (0x000344f5) list_set_graphic_pane_g1_copy1_ParamLimits

0xba5f,	// (0x000344f5) list_set_graphic_pane_g1_copy1

0x60ec,	// (0x0002eb82) list_set_graphic_pane_g2_copy1

0xba77,	// (0x0003450d) list_set_graphic_pane_t1_copy1_ParamLimits

0xba77,	// (0x0003450d) list_set_graphic_pane_t1_copy1

0xdfff,	// (0x00036a95) rs_clock_indi_pane_g1

0x60f4,	// (0x0002eb8a) rs_clock_indi_pane_t1

0x6102,	// (0x0002eb98) rs_indi_pane

0x610a,	// (0x0002eba0) rs_indi_pane_g1

0x6113,	// (0x0002eba9) rs_indi_pane_g2

0x611c,	// (0x0002ebb2) rs_indi_pane_g3

0x0002,

0xfccc,	// (0x00038762) rs_indi_pane_g

0xbd49,	// (0x000347df) bg_popup_preview_window_pane_cp03

0x6125,	// (0x0002ebbb) popup_fep_tooltip_window_t1

0xe999,	// (0x0003742f) popup_note2_window_g2_ParamLimits

0xe999,	// (0x0003742f) popup_note2_window_g2

0x0001,

0x03ac,	// (0x00028e42) popup_note2_window_g_ParamLimits

0x03ac,	// (0x00028e42) popup_note2_window_g

0xee20,	// (0x000378b6) bg_popup_sub_pane_cp11_ParamLimits

0xee2d,	// (0x000378c3) cell_ai3_links_pane_g1_ParamLimits

0xee44,	// (0x000378da) cell_ai3_links_pane_t1

0x6632,	// (0x0002f0c8) set_text_pane_t1_copy1_ParamLimits

0xbc66,	// (0x000346fc) cell_graphic_popup_pane_cp2_ParamLimits

0xbc66,	// (0x000346fc) cell_graphic_popup_pane_cp2

0x6133,	// (0x0002ebc9) cell_graphic_popup_pane_g1_cp2

0x9065,	// (0x00031afb) cell_graphic_popup_pane_g2_cp2

0x613b,	// (0x0002ebd1) cell_graphic_popup_pane_g3_cp2

0x6143,	// (0x0002ebd9) cell_graphic_popup_pane_t2_cp2

0x9076,	// (0x00031b0c) grid_highlight_pane_cp3_cp2

0xb60b,	// (0x000340a1) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb30b,	// (0x00033da1) main_tmo_pane_ParamLimits

0xa53b,	// (0x00032fd1) popup_tmo_big_image_note_window

0x58be,	// (0x0002e354) cell_ai5_widget_list_pane

0x58c6,	// (0x0002e35c) cell_ai5_widget_lrg_icon_pane

0xb26f,	// (0x00033d05) tmo_note_info_pane_t1_ParamLimits

0xb284,	// (0x00033d1a) tmo_note_info_pane_t2_ParamLimits

0xb29d,	// (0x00033d33) tmo_note_info_pane_t3_ParamLimits

0x5d76,	// (0x0002e80c) tmo_note_info_pane_t4_ParamLimits

0x5d88,	// (0x0002e81e) tmo_note_info_pane_t5_ParamLimits

0xfcba,	// (0x00038750) tmo_note_info_pane_t_ParamLimits

0x5eb9,	// (0x0002e94f) settings_container_pane_ParamLimits

0x60bc,	// (0x0002eb52) indicator_popup_pane_cp5

0x60bc,	// (0x0002eb52) indicator_popup_pane_cp6

0xd236,	// (0x00035ccc) list_set_graphic_pane_copy1_ParamLimits

0x8c49,	// (0x000316df) bg_popup_window_pane_cp23

0x6151,	// (0x0002ebe7) popup_tmo_big_image_note_window_g1

0x615a,	// (0x0002ebf0) popup_tmo_big_image_note_window_t1

0x616a,	// (0x0002ec00) popup_tmo_big_image_note_window_t2

0x617a,	// (0x0002ec10) popup_tmo_big_image_note_window_t3

0x0002,

0xfcd3,	// (0x00038769) popup_tmo_big_image_note_window_t

0xdfff,	// (0x00036a95) cell_ai5_widget_lrg_icon_pane_g1

0x618a,	// (0x0002ec20) cell_ai5_widget_lrg_icon_pane_t1

0x6198,	// (0x0002ec2e) cell_ai5_widget_list_row_pane_ParamLimits

0x6198,	// (0x0002ec2e) cell_ai5_widget_list_row_pane

0x61b1,	// (0x0002ec47) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x61b1,	// (0x0002ec47) cell_ai5_widget_list_row_pane_g1

0x61be,	// (0x0002ec54) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x61be,	// (0x0002ec54) cell_ai5_widget_list_row_pane_t1

0x61ec,	// (0x0002ec82) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x61ec,	// (0x0002ec82) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfcda,	// (0x00038770) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfcda,	// (0x00038770) cell_ai5_widget_list_row_pane_t

0x0895,	// (0x0002932b) main_fep_vtchi_ss_pane

0x47e1,	// (0x0002d277) popup_fep_char_pre_window

0x47e9,	// (0x0002d27f) popup_fep_ituss_window

0x480a,	// (0x0002d2a0) popup_fep_vkbss_window

0x6214,	// (0x0002ecaa) grid_vkbss_keypad_pane_ParamLimits

0x6214,	// (0x0002ecaa) grid_vkbss_keypad_pane

0x6224,	// (0x0002ecba) ituss_keypad_pane

0x4835,	// (0x0002d2cb) aid_vkbss_key_offset_ParamLimits

0x4835,	// (0x0002d2cb) aid_vkbss_key_offset

0x4841,	// (0x0002d2d7) cell_vkbss_key_pane_ParamLimits

0x4841,	// (0x0002d2d7) cell_vkbss_key_pane

0xd59b,	// (0x00036031) bg_cell_vkbss_key_g1_ParamLimits

0xd59b,	// (0x00036031) bg_cell_vkbss_key_g1

0x6234,	// (0x0002ecca) cell_vkbss_key_3p_pane_ParamLimits

0x6234,	// (0x0002ecca) cell_vkbss_key_3p_pane

0x624e,	// (0x0002ece4) cell_vkbss_key_g1_ParamLimits

0x624e,	// (0x0002ece4) cell_vkbss_key_g1

0x6268,	// (0x0002ecfe) cell_vkbss_key_t1_ParamLimits

0x6268,	// (0x0002ecfe) cell_vkbss_key_t1

0x4857,	// (0x0002d2ed) cell_ituss_key_pane_ParamLimits

0x4857,	// (0x0002d2ed) cell_ituss_key_pane

0x6293,	// (0x0002ed29) bg_cell_ituss_key_g1_ParamLimits

0x6293,	// (0x0002ed29) bg_cell_ituss_key_g1

0x629f,	// (0x0002ed35) cell_ituss_key_pane_g1_ParamLimits

0x629f,	// (0x0002ed35) cell_ituss_key_pane_g1

0x62b3,	// (0x0002ed49) cell_ituss_key_pane_g2_ParamLimits

0x62b3,	// (0x0002ed49) cell_ituss_key_pane_g2

0x0001,

0xfce1,	// (0x00038777) cell_ituss_key_pane_g_ParamLimits

0xfce1,	// (0x00038777) cell_ituss_key_pane_g

0x62e1,	// (0x0002ed77) cell_ituss_key_t1_ParamLimits

0x62e1,	// (0x0002ed77) cell_ituss_key_t1

0x631b,	// (0x0002edb1) cell_ituss_key_t2_ParamLimits

0x631b,	// (0x0002edb1) cell_ituss_key_t2

0x634c,	// (0x0002ede2) cell_ituss_key_t3_ParamLimits

0x634c,	// (0x0002ede2) cell_ituss_key_t3

0x6386,	// (0x0002ee1c) cell_ituss_key_t4_ParamLimits

0x6386,	// (0x0002ee1c) cell_ituss_key_t4

0x0003,

0xfce6,	// (0x0003877c) cell_ituss_key_t_ParamLimits

0xfce6,	// (0x0003877c) cell_ituss_key_t

0x63c0,	// (0x0002ee56) cell_vkbss_key_3p_pane_g1

0x63c8,	// (0x0002ee5e) cell_vkbss_key_3p_pane_g2

0x63d0,	// (0x0002ee66) cell_vkbss_key_3p_pane_g3

0x0002,

0xfcef,	// (0x00038785) cell_vkbss_key_3p_pane_g

0x8c49,	// (0x000316df) bg_popup_fep_char_preview_window_cp02

0x63d8,	// (0x0002ee6e) popup_fep_char_pre_window_t1

0xb115,	// (0x00033bab) main_ai5_sk_pane

0x5e02,	// (0x0002e898) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x5e0e,	// (0x0002e8a4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x5e21,	// (0x0002e8b7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x5e2d,	// (0x0002e8c3) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfcc5,	// (0x0003875b) cell_contacts_ai5_widget_pane_g_ParamLimits

0x5e3f,	// (0x0002e8d5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb30b,	// (0x00033da1) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xb61d,	// (0x000340b3) main_ai5_sk_pane_g1

0xc52d,	// (0x00034fc3) popup_query_code_window_g1

0x47ff,	// (0x0002d295) popup_fep_vkb_icf_pane

0x4813,	// (0x0002d2a9) popup_fep_vtchi_icf_pane

0xb30b,	// (0x00033da1) bg_icf_pane

0x63e7,	// (0x0002ee7d) list_vkb_icf_pane

0xb30b,	// (0x00033da1) bg_icf_pane_cp01

0x63f3,	// (0x0002ee89) vtchi_icf_list_pane

0x6404,	// (0x0002ee9a) list_vkb_icf_pane_t1_ParamLimits

0x6404,	// (0x0002ee9a) list_vkb_icf_pane_t1

0x641c,	// (0x0002eeb2) vtchi_icf_list_pane_t1_ParamLimits

0x641c,	// (0x0002eeb2) vtchi_icf_list_pane_t1

0x47e9,	// (0x0002d27f) popup_fep_ituss_window_ParamLimits

0x4813,	// (0x0002d2a9) popup_fep_vtchi_icf_pane_ParamLimits

0x6224,	// (0x0002ecba) ituss_keypad_pane_ParamLimits

0x4829,	// (0x0002d2bf) ituss_sks_pane

0xb30b,	// (0x00033da1) bg_icf_pane_ParamLimits

0x47d2,	// (0x0002d268) icf_edit_indi_pane_ParamLimits

0x47d2,	// (0x0002d268) icf_edit_indi_pane

0x63e7,	// (0x0002ee7d) list_vkb_icf_pane_ParamLimits

0xb30b,	// (0x00033da1) bg_icf_pane_cp01_ParamLimits

0x47d2,	// (0x0002d268) icf_edit_indi_pane_cp01_ParamLimits

0x47d2,	// (0x0002d268) icf_edit_indi_pane_cp01

0x63fb,	// (0x0002ee91) vtchi_query_pane

0xe190,	// (0x00036c26) icf_edit_indi_pane_g1_ParamLimits

0xe190,	// (0x00036c26) icf_edit_indi_pane_g1

0x64a8,	// (0x0002ef3e) icf_edit_indi_pane_g2_ParamLimits

0x64a8,	// (0x0002ef3e) icf_edit_indi_pane_g2

0x0001,

0xfd07,	// (0x0003879d) icf_edit_indi_pane_g_ParamLimits

0xfd07,	// (0x0003879d) icf_edit_indi_pane_g

0x64b7,	// (0x0002ef4d) icf_edit_indi_pane_t1

0x643e,	// (0x0002eed4) bg_input_focus_pane_cp042

0x9249,	// (0x00031cdf) vtchi_button_pane

0x6447,	// (0x0002eedd) vtchi_query_pane_t1

0x6455,	// (0x0002eeeb) vtchi_query_pane_t2

0x6463,	// (0x0002eef9) vtchi_query_pane_t3

0x0002,

0xfcf6,	// (0x0003878c) vtchi_query_pane_t

0x8c49,	// (0x000316df) bg_button_pane_cp13

0x6471,	// (0x0002ef07) vtchi_button_pane_g1

0x6479,	// (0x0002ef0f) ituss_sks_pane_g1

0x6484,	// (0x0002ef1a) ituss_sks_pane_g2

0x0001,

0xfcfd,	// (0x00038793) ituss_sks_pane_g

0x648c,	// (0x0002ef22) ituss_sks_pane_t1

0x649a,	// (0x0002ef30) ituss_sks_pane_t2

0x0001,

0xfd02,	// (0x00038798) ituss_sks_pane_t

0xdcb8,	// (0x0003674e) indicator_nsta_pane_cp_g1

0xdcc1,	// (0x00036757) indicator_nsta_pane_cp_g2

0xdcc9,	// (0x0003675f) indicator_nsta_pane_cp_g3

0xdcd1,	// (0x00036767) indicator_nsta_pane_cp_g4

0xdcd9,	// (0x0003676f) indicator_nsta_pane_cp_g5

0xdcd9,	// (0x0003676f) indicator_nsta_pane_cp_g6

0x0005,

0x01f6,	// (0x00028c8c) indicator_nsta_pane_cp_g

0xaf2a,	// (0x000339c0) cell_graphic2_pane_t2_ParamLimits

0xaf2a,	// (0x000339c0) cell_graphic2_pane_t2

0x0001,

0xfbd9,	// (0x0003866f) cell_graphic2_pane_t_ParamLimits

0xfbd9,	// (0x0003866f) cell_graphic2_pane_t

0xaf5d,	// (0x000339f3) cell_graphic2_control_pane_t1

0x7741,	// (0x000301d7) signal_pane_g3_ParamLimits

0x7741,	// (0x000301d7) signal_pane_g3

0x7755,	// (0x000301eb) signal_pane_g4_ParamLimits

0x7755,	// (0x000301eb) signal_pane_g4

0x61fe,	// (0x0002ec94) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x61fe,	// (0x0002ec94) cell_ai5_widget_list_row_pane_t3

0x62cf,	// (0x0002ed65) cell_ituss_key_pane_t1_ParamLimits

0x62cf,	// (0x0002ed65) cell_ituss_key_pane_t1

0xc26d,	// (0x00034d03) form_field_data_wide_pane_vc_t2_ParamLimits

0xc26d,	// (0x00034d03) form_field_data_wide_pane_vc_t2

0xc281,	// (0x00034d17) form_field_data_wide_pane_vc_t3_ParamLimits

0xc281,	// (0x00034d17) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x000382a0) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x000382a0) form_field_data_wide_pane_vc_t

0xd9e6,	// (0x0003647c) form_field_slider_wide_pane_vc_t3_ParamLimits

0xd9e6,	// (0x0003647c) form_field_slider_wide_pane_vc_t3

0xdac0,	// (0x00036556) form_field_popup_wide_pane_vc_t2_ParamLimits

0xdac0,	// (0x00036556) form_field_popup_wide_pane_vc_t2

0xdad7,	// (0x0003656d) form_field_popup_wide_pane_vc_t3_ParamLimits

0xdad7,	// (0x0003656d) form_field_popup_wide_pane_vc_t3

0x0002,

0x01e5,	// (0x00028c7b) form_field_popup_wide_pane_vc_t_ParamLimits

0x01e5,	// (0x00028c7b) form_field_popup_wide_pane_vc_t

0x8bae,	// (0x00031644) aid_fshwr2_btn_pane_ParamLimits

0x8bbf,	// (0x00031655) aid_fshwr2_syb_pane_ParamLimits

0x8bd0,	// (0x00031666) aid_fshwr2_txt_pane_ParamLimits

0x36f7,	// (0x0002c18d) fshwr2_bg_pane_ParamLimits

0x8bdc,	// (0x00031672) fshwr2_func_candi_pane_ParamLimits

0x8bfb,	// (0x00031691) fshwr2_hwr_syb_pane_ParamLimits

0x8c16,	// (0x000316ac) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small

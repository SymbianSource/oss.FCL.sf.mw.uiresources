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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0002798e };

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
0x8d51,	// (0x000306df) Screen

0x8d5d,	// (0x000306eb) application_window_ParamLimits

0x8d5d,	// (0x000306eb) application_window

0xc306,	// (0x00033c94) screen_g1

0x8d95,	// (0x00030723) area_bottom_pane_ParamLimits

0x8d95,	// (0x00030723) area_bottom_pane

0x8e60,	// (0x000307ee) area_top_pane_ParamLimits

0x8e60,	// (0x000307ee) area_top_pane

0x8ef4,	// (0x00030882) main_pane_ParamLimits

0x8ef4,	// (0x00030882) main_pane

0xc310,	// (0x00033c9e) misc_graphics

0xa68d,	// (0x0003201b) battery_pane_ParamLimits

0xa68d,	// (0x0003201b) battery_pane

0x29f0,	// (0x0002a37e) bg_status_flat_pane_g8

0x29f8,	// (0x0002a386) bg_status_flat_pane_g9

0x0898,	// (0x00028226) context_pane_ParamLimits

0x0898,	// (0x00028226) context_pane

0xa7f8,	// (0x00032186) navi_pane_ParamLimits

0xa7f8,	// (0x00032186) navi_pane

0xa876,	// (0x00032204) signal_pane_ParamLimits

0xa876,	// (0x00032204) signal_pane

0x0008,

0xf839,	// (0x000371c7) bg_status_flat_pane_g

0xa906,	// (0x00032294) status_pane_g1_ParamLimits

0xa906,	// (0x00032294) status_pane_g1

0xa91c,	// (0x000322aa) status_pane_g2_ParamLimits

0xa91c,	// (0x000322aa) status_pane_g2

0x0abf,	// (0x0002844d) status_pane_g3_ParamLimits

0x0abf,	// (0x0002844d) status_pane_g3

0x0004,

0xf765,	// (0x000370f3) status_pane_g_ParamLimits

0xf765,	// (0x000370f3) status_pane_g

0xa928,	// (0x000322b6) title_pane_ParamLimits

0xa928,	// (0x000322b6) title_pane

0xa989,	// (0x00032317) uni_indicator_pane_ParamLimits

0xa989,	// (0x00032317) uni_indicator_pane

0xd14e,	// (0x00034adc) bg_list_pane_ParamLimits

0xd14e,	// (0x00034adc) bg_list_pane

0x9e7b,	// (0x00031809) find_pane

0x0d7b,	// (0x00028709) listscroll_app_pane_ParamLimits

0x0d7b,	// (0x00028709) listscroll_app_pane

0xd16e,	// (0x00034afc) listscroll_form_pane

0x9e83,	// (0x00031811) listscroll_gen_pane_ParamLimits

0x9e83,	// (0x00031811) listscroll_gen_pane

0x01b1,	// (0x00027b3f) listscroll_set_pane

0x3544,	// (0x0002aed2) main_idle_act_pane

0xcfe2,	// (0x00034970) main_idle_trad_pane

0xcfe2,	// (0x00034970) main_list_empty_pane

0xc864,	// (0x000341f2) main_midp_pane

0xd188,	// (0x00034b16) main_pane_g1_ParamLimits

0xd188,	// (0x00034b16) main_pane_g1

0x9e97,	// (0x00031825) popup_ai_message_window_ParamLimits

0x9e97,	// (0x00031825) popup_ai_message_window

0x9f48,	// (0x000318d6) popup_fep_china_uni_window_ParamLimits

0x9f48,	// (0x000318d6) popup_fep_china_uni_window

0x9fa2,	// (0x00031930) popup_fep_japan_candidate_window_ParamLimits

0x9fa2,	// (0x00031930) popup_fep_japan_candidate_window

0x9fc0,	// (0x0003194e) popup_fep_japan_predictive_window_ParamLimits

0x9fc0,	// (0x0003194e) popup_fep_japan_predictive_window

0x9fd2,	// (0x00031960) popup_find_window

0x9fef,	// (0x0003197d) popup_grid_graphic_window_ParamLimits

0x9fef,	// (0x0003197d) popup_grid_graphic_window

0x033c,	// (0x00027cca) popup_large_graphic_colour_window

0xa08d,	// (0x00031a1b) popup_menu_window_ParamLimits

0xa08d,	// (0x00031a1b) popup_menu_window

0xa25f,	// (0x00031bed) popup_note_image_window

0xa225,	// (0x00031bb3) popup_note_wait_window_ParamLimits

0xa225,	// (0x00031bb3) popup_note_wait_window

0xa277,	// (0x00031c05) popup_note_window_ParamLimits

0xa277,	// (0x00031c05) popup_note_window

0xa326,	// (0x00031cb4) popup_query_code_window_ParamLimits

0xa326,	// (0x00031cb4) popup_query_code_window

0xa360,	// (0x00031cee) popup_query_data_code_window_ParamLimits

0xa360,	// (0x00031cee) popup_query_data_code_window

0xa37d,	// (0x00031d0b) popup_query_data_window_ParamLimits

0xa37d,	// (0x00031d0b) popup_query_data_window

0xa3ff,	// (0x00031d8d) popup_query_sat_info_window_ParamLimits

0xa3ff,	// (0x00031d8d) popup_query_sat_info_window

0xa496,	// (0x00031e24) popup_snote_single_graphic_window_ParamLimits

0xa496,	// (0x00031e24) popup_snote_single_graphic_window

0xa496,	// (0x00031e24) popup_snote_single_text_window_ParamLimits

0xa496,	// (0x00031e24) popup_snote_single_text_window

0x060f,	// (0x00027f9d) popup_sub_window_general

0xa5f3,	// (0x00031f81) popup_window_general_ParamLimits

0xa5f3,	// (0x00031f81) popup_window_general

0x0754,	// (0x000280e2) power_save_pane

0x9cd5,	// (0x00031663) control_pane_g1_ParamLimits

0x9cd5,	// (0x00031663) control_pane_g1

0x9cfe,	// (0x0003168c) control_pane_g2_ParamLimits

0x9cfe,	// (0x0003168c) control_pane_g2

0xd138,	// (0x00034ac6) control_pane_g3_ParamLimits

0xd138,	// (0x00034ac6) control_pane_g3

0x0007,

0xf74d,	// (0x000370db) control_pane_g_ParamLimits

0xf74d,	// (0x000370db) control_pane_g

0x9d66,	// (0x000316f4) control_pane_t1_ParamLimits

0x9d66,	// (0x000316f4) control_pane_t1

0x9dce,	// (0x0003175c) control_pane_t2_ParamLimits

0x9dce,	// (0x0003175c) control_pane_t2

0x0002,

0xf75e,	// (0x000370ec) control_pane_t_ParamLimits

0xf75e,	// (0x000370ec) control_pane_t

0x9c4c,	// (0x000315da) navi_navi_volume_pane_cp1

0x9c54,	// (0x000315e2) status_small_icon_pane

0xd0e4,	// (0x00034a72) status_small_pane_g1_ParamLimits

0xd0e4,	// (0x00034a72) status_small_pane_g1

0x9c5c,	// (0x000315ea) status_small_pane_g2_ParamLimits

0x9c5c,	// (0x000315ea) status_small_pane_g2

0xd118,	// (0x00034aa6) status_small_pane_g3_ParamLimits

0xd118,	// (0x00034aa6) status_small_pane_g3

0x9c68,	// (0x000315f6) status_small_pane_g4_ParamLimits

0x9c68,	// (0x000315f6) status_small_pane_g4

0x9c76,	// (0x00031604) status_small_pane_g5_ParamLimits

0x9c76,	// (0x00031604) status_small_pane_g5

0x9c84,	// (0x00031612) status_small_pane_g6_ParamLimits

0x9c84,	// (0x00031612) status_small_pane_g6

0x0007,

0xf73c,	// (0x000370ca) status_small_pane_g_ParamLimits

0xf73c,	// (0x000370ca) status_small_pane_g

0x9c9f,	// (0x0003162d) status_small_pane_t1

0x9cc1,	// (0x0003164f) status_small_wait_pane_ParamLimits

0x9cc1,	// (0x0003164f) status_small_wait_pane

0x99bf,	// (0x0003134d) aid_levels_signal_ParamLimits

0x99bf,	// (0x0003134d) aid_levels_signal

0x99d7,	// (0x00031365) signal_pane_g1_ParamLimits

0x99d7,	// (0x00031365) signal_pane_g1

0x99f2,	// (0x00031380) signal_pane_g2_ParamLimits

0x99f2,	// (0x00031380) signal_pane_g2

0x0003,

0xf6cd,	// (0x0003705b) signal_pane_g_ParamLimits

0xf6cd,	// (0x0003705b) signal_pane_g

0xcbcc,	// (0x0003455a) context_pane_g1

0x90ef,	// (0x00030a7d) title_pane_g1

0x9126,	// (0x00030ab4) title_pane_t1

0xc326,	// (0x00033cb4) title_pane_t2

0xc34c,	// (0x00033cda) title_pane_t3

0x0002,

0xf530,	// (0x00036ebe) title_pane_t

0xa9b1,	// (0x0003233f) aid_levels_battery_ParamLimits

0xa9b1,	// (0x0003233f) aid_levels_battery

0xa9cd,	// (0x0003235b) battery_pane_g1_ParamLimits

0xa9cd,	// (0x0003235b) battery_pane_g1

0xa9ea,	// (0x00032378) battery_pane_g2_ParamLimits

0xa9ea,	// (0x00032378) battery_pane_g2

0x0001,

0xf770,	// (0x000370fe) battery_pane_g_ParamLimits

0xf770,	// (0x000370fe) battery_pane_g

0xb060,	// (0x000329ee) uni_indicator_pane_g1

0xb076,	// (0x00032a04) uni_indicator_pane_g2

0xb08c,	// (0x00032a1a) uni_indicator_pane_g3

0x0005,

0xf8e1,	// (0x0003726f) uni_indicator_pane_g

0xce75,	// (0x00034803) navi_icon_pane_ParamLimits

0xce75,	// (0x00034803) navi_icon_pane

0xcdbe,	// (0x0003474c) navi_midp_pane

0xce91,	// (0x0003481f) navi_navi_pane

0xce9b,	// (0x00034829) navi_text_pane_ParamLimits

0xce9b,	// (0x00034829) navi_text_pane

0xc306,	// (0x00033c94) status_small_wait_pane_g1

0xc59d,	// (0x00033f2b) status_small_wait_pane_g2

0x0001,

0xf8dc,	// (0x0003726a) status_small_wait_pane_g

0xafb9,	// (0x00032947) navi_navi_icon_text_pane

0x3043,	// (0x0002a9d1) navi_navi_pane_g1_ParamLimits

0x3043,	// (0x0002a9d1) navi_navi_pane_g1

0x3055,	// (0x0002a9e3) navi_navi_pane_g2_ParamLimits

0x3055,	// (0x0002a9e3) navi_navi_pane_g2

0x0001,

0xf8aa,	// (0x00037238) navi_navi_pane_g_ParamLimits

0xf8aa,	// (0x00037238) navi_navi_pane_g

0x3067,	// (0x0002a9f5) navi_navi_tabs_pane

0x3070,	// (0x0002a9fe) navi_navi_text_pane

0xafb9,	// (0x00032947) navi_navi_volume_pane

0x3017,	// (0x0002a9a5) navi_text_pane_t1

0x300b,	// (0x0002a999) navi_icon_pane_g1

0x2f5e,	// (0x0002a8ec) navi_navi_text_pane_t1

0xafa5,	// (0x00032933) navi_navi_volume_pane_g1

0x1717,	// (0x000290a5) volume_small_pane

0x2ec4,	// (0x0002a852) navi_navi_icon_text_pane_g1

0xaf09,	// (0x00032897) navi_navi_icon_text_pane_t1

0xce91,	// (0x0003481f) navi_tabs_2_long_pane

0xce91,	// (0x0003481f) navi_tabs_2_pane

0xce91,	// (0x0003481f) navi_tabs_3_long_pane

0xce91,	// (0x0003481f) navi_tabs_3_pane

0xce91,	// (0x0003481f) navi_tabs_4_pane

0x16ef,	// (0x0002907d) tabs_2_active_pane_ParamLimits

0x16ef,	// (0x0002907d) tabs_2_active_pane

0x16ff,	// (0x0002908d) tabs_2_passive_pane_ParamLimits

0x16ff,	// (0x0002908d) tabs_2_passive_pane

0x16bd,	// (0x0002904b) tabs_3_active_pane_ParamLimits

0x16bd,	// (0x0002904b) tabs_3_active_pane

0x16cd,	// (0x0002905b) tabs_3_passive_pane_ParamLimits

0x16cd,	// (0x0002905b) tabs_3_passive_pane

0x16de,	// (0x0002906c) tabs_3_passive_pane_cp_ParamLimits

0x16de,	// (0x0002906c) tabs_3_passive_pane_cp

0x1679,	// (0x00029007) tabs_4_active_pane_ParamLimits

0x1679,	// (0x00029007) tabs_4_active_pane

0x168a,	// (0x00029018) tabs_4_passive_pane_ParamLimits

0x168a,	// (0x00029018) tabs_4_passive_pane

0x169b,	// (0x00029029) tabs_4_passive_pane_cp_ParamLimits

0x169b,	// (0x00029029) tabs_4_passive_pane_cp

0x16ac,	// (0x0002903a) tabs_4_passive_pane_cp2_ParamLimits

0x16ac,	// (0x0002903a) tabs_4_passive_pane_cp2

0x1655,	// (0x00028fe3) tabs_2_long_active_pane_ParamLimits

0x1655,	// (0x00028fe3) tabs_2_long_active_pane

0x1667,	// (0x00028ff5) tabs_2_long_passive_pane_ParamLimits

0x1667,	// (0x00028ff5) tabs_2_long_passive_pane

0x1610,	// (0x00028f9e) tabs_3_long_active_pane_ParamLimits

0x1610,	// (0x00028f9e) tabs_3_long_active_pane

0x1629,	// (0x00028fb7) tabs_3_long_passive_pane_ParamLimits

0x1629,	// (0x00028fb7) tabs_3_long_passive_pane

0x163c,	// (0x00028fca) tabs_3_long_passive_pane_cp_ParamLimits

0x163c,	// (0x00028fca) tabs_3_long_passive_pane_cp

0x15b6,	// (0x00028f44) volume_small_pane_g1

0x15bf,	// (0x00028f4d) volume_small_pane_g2

0x15c8,	// (0x00028f56) volume_small_pane_g3

0x15d1,	// (0x00028f5f) volume_small_pane_g4

0x15da,	// (0x00028f68) volume_small_pane_g5

0x15e3,	// (0x00028f71) volume_small_pane_g6

0x15ec,	// (0x00028f7a) volume_small_pane_g7

0x15f5,	// (0x00028f83) volume_small_pane_g8

0x15fe,	// (0x00028f8c) volume_small_pane_g9

0x1607,	// (0x00028f95) volume_small_pane_g10

0x0009,

0xf876,	// (0x00037204) volume_small_pane_g

0xc35e,	// (0x00033cec) bg_active_tab_pane_cp2_ParamLimits

0xc35e,	// (0x00033cec) bg_active_tab_pane_cp2

0x91b2,	// (0x00030b40) tabs_3_active_pane_g1

0x91ba,	// (0x00030b48) tabs_3_active_pane_t1

0xc35e,	// (0x00033cec) bg_passive_tab_pane_cp2_ParamLimits

0xc35e,	// (0x00033cec) bg_passive_tab_pane_cp2

0x91b2,	// (0x00030b40) tabs_3_passive_pane_g1

0x91ba,	// (0x00030b48) tabs_3_passive_pane_t1

0xc35e,	// (0x00033cec) bg_active_tab_pane_cp3_ParamLimits

0xc35e,	// (0x00033cec) bg_active_tab_pane_cp3

0x91cc,	// (0x00030b5a) tabs_4_active_pane_g1

0x91d4,	// (0x00030b62) tabs_4_active_pane_t1

0xc35e,	// (0x00033cec) bg_passive_tab_pane_cp3_ParamLimits

0xc35e,	// (0x00033cec) bg_passive_tab_pane_cp3

0x91cc,	// (0x00030b5a) tabs_4_1_passive_pane_g1

0x91d4,	// (0x00030b62) tabs_4_1_passive_pane_t1

0xc864,	// (0x000341f2) list_highlight_pane_cp2

0xb24e,	// (0x00032bdc) list_set_pane_ParamLimits

0xb24e,	// (0x00032bdc) list_set_pane

0xb2e8,	// (0x00032c76) main_pane_set_t1_ParamLimits

0xb2e8,	// (0x00032c76) main_pane_set_t1

0xb308,	// (0x00032c96) main_pane_set_t2_ParamLimits

0xb308,	// (0x00032c96) main_pane_set_t2

0xb31c,	// (0x00032caa) main_pane_set_t3_ParamLimits

0xb31c,	// (0x00032caa) main_pane_set_t3

0xb32e,	// (0x00032cbc) main_pane_set_t4_ParamLimits

0xb32e,	// (0x00032cbc) main_pane_set_t4

0x0003,

0xf946,	// (0x000372d4) main_pane_set_t_ParamLimits

0xf946,	// (0x000372d4) main_pane_set_t

0xb340,	// (0x00032cce) setting_code_pane

0xb34a,	// (0x00032cd8) setting_slider_graphic_pane

0xb34a,	// (0x00032cd8) setting_slider_pane

0xb34a,	// (0x00032cd8) setting_text_pane

0xb34a,	// (0x00032cd8) setting_volume_pane

0x91e6,	// (0x00030b74) volume_set_pane

0xc36c,	// (0x00033cfa) bg_set_opt_pane_cp

0x91ee,	// (0x00030b7c) setting_slider_pane_t1

0x9207,	// (0x00030b95) setting_slider_pane_t2

0x9221,	// (0x00030baf) setting_slider_pane_t3

0x0002,

0xf537,	// (0x00036ec5) setting_slider_pane_t

0x9239,	// (0x00030bc7) slider_set_pane

0xc310,	// (0x00033c9e) bg_set_opt_pane_cp2

0xc37a,	// (0x00033d08) setting_slider_graphic_pane_g1

0x924f,	// (0x00030bdd) setting_slider_graphic_pane_t1

0x925f,	// (0x00030bed) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x00036ecc) setting_slider_graphic_pane_t

0x926f,	// (0x00030bfd) slider_set_pane_cp

0xc310,	// (0x00033c9e) input_focus_pane_cp1

0x352b,	// (0x0002aeb9) list_set_text_pane

0xc306,	// (0x00033c94) setting_text_pane_g1

0xc310,	// (0x00033c9e) input_focus_pane_cp2

0xc306,	// (0x00033c94) setting_code_pane_g1

0xc383,	// (0x00033d11) setting_code_pane_t1

0xe817,	// (0x000361a5) set_text_pane_t1_ParamLimits

0xe817,	// (0x000361a5) set_text_pane_t1

0xc77a,	// (0x00034108) set_opt_bg_pane_g1

0xc782,	// (0x00034110) set_opt_bg_pane_g2

0xb203,	// (0x00032b91) set_opt_bg_pane_g3

0xc792,	// (0x00034120) set_opt_bg_pane_g4

0xc79a,	// (0x00034128) set_opt_bg_pane_g5

0xc7a2,	// (0x00034130) set_opt_bg_pane_g6

0xb20d,	// (0x00032b9b) set_opt_bg_pane_g7

0xb215,	// (0x00032ba3) set_opt_bg_pane_g8

0xb21f,	// (0x00032bad) set_opt_bg_pane_g9

0x0008,

0xf933,	// (0x000372c1) set_opt_bg_pane_g

0xb19e,	// (0x00032b2c) slider_set_pane_g1

0x1784,	// (0x00029112) slider_set_pane_g2

0x0006,

0xf924,	// (0x000372b2) slider_set_pane_g

0xb0c3,	// (0x00032a51) volume_set_pane_g1

0xb0cb,	// (0x00032a59) volume_set_pane_g2

0xb0d3,	// (0x00032a61) volume_set_pane_g3

0xb0db,	// (0x00032a69) volume_set_pane_g4

0xb0e3,	// (0x00032a71) volume_set_pane_g5

0xb0eb,	// (0x00032a79) volume_set_pane_g6

0xb0f3,	// (0x00032a81) volume_set_pane_g7

0xb0fb,	// (0x00032a89) volume_set_pane_g8

0xb103,	// (0x00032a91) volume_set_pane_g9

0xb10b,	// (0x00032a99) volume_set_pane_g10

0x0009,

0xf8fc,	// (0x0003728a) volume_set_pane_g

0x9277,	// (0x00030c05) indicator_pane_ParamLimits

0x9277,	// (0x00030c05) indicator_pane

0x929f,	// (0x00030c2d) main_idle_pane_g2_ParamLimits

0x929f,	// (0x00030c2d) main_idle_pane_g2

0x92d7,	// (0x00030c65) main_pane_idle_g1_ParamLimits

0x92d7,	// (0x00030c65) main_pane_idle_g1

0xc391,	// (0x00033d1f) popup_clock_digital_analogue_window_ParamLimits

0xc391,	// (0x00033d1f) popup_clock_digital_analogue_window

0x92fe,	// (0x00030c8c) soft_indicator_pane_ParamLimits

0x92fe,	// (0x00030c8c) soft_indicator_pane

0x9322,	// (0x00030cb0) wallpaper_pane_ParamLimits

0x9322,	// (0x00030cb0) wallpaper_pane

0xc306,	// (0x00033c94) wallpaper_pane_g1

0x9334,	// (0x00030cc2) indicator_pane_g1_ParamLimits

0x9334,	// (0x00030cc2) indicator_pane_g1

0x3945,	// (0x0002b2d3) navi_navi_icon_text_pane_srt_g1

0xc3bf,	// (0x00033d4d) soft_indicator_pane_t1

0xc3d9,	// (0x00033d67) aid_ps_area_pane

0x934a,	// (0x00030cd8) aid_ps_clock_pane

0xc3ea,	// (0x00033d78) aid_ps_indicator_pane

0xc3f6,	// (0x00033d84) indicator_ps_pane_ParamLimits

0xc3f6,	// (0x00033d84) indicator_ps_pane

0xc405,	// (0x00033d93) power_save_pane_g1_ParamLimits

0xc405,	// (0x00033d93) power_save_pane_g1

0xc411,	// (0x00033d9f) power_save_pane_g2_ParamLimits

0xc411,	// (0x00033d9f) power_save_pane_g2

0xe7d7,	// (0x00036165) aid_navinavi_width_pane

0xc3d9,	// (0x00033d67) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x00036ed1) power_save_pane_g_ParamLimits

0xf543,	// (0x00036ed1) power_save_pane_g

0xc41f,	// (0x00033dad) power_save_pane_t1_ParamLimits

0xc41f,	// (0x00033dad) power_save_pane_t1

0x934a,	// (0x00030cd8) aid_ps_clock_pane_ParamLimits

0xc3ea,	// (0x00033d78) aid_ps_indicator_pane_ParamLimits

0xc431,	// (0x00033dbf) power_save_pane_t4_ParamLimits

0xc431,	// (0x00033dbf) power_save_pane_t4

0x0001,

0xf548,	// (0x00036ed6) power_save_pane_t_ParamLimits

0xf548,	// (0x00036ed6) power_save_pane_t

0xc45b,	// (0x00033de9) power_save_t3_ParamLimits

0xc45b,	// (0x00033de9) power_save_t3

0xc446,	// (0x00033dd4) power_save_t2_ParamLimits

0xc446,	// (0x00033dd4) power_save_t2

0xc470,	// (0x00033dfe) indicator_ps_pane_g1

0x9358,	// (0x00030ce6) ai_gene_pane_ParamLimits

0x9358,	// (0x00030ce6) ai_gene_pane

0x936f,	// (0x00030cfd) ai_links_pane_ParamLimits

0x936f,	// (0x00030cfd) ai_links_pane

0x9387,	// (0x00030d15) indicator_pane_cp1_ParamLimits

0x9387,	// (0x00030d15) indicator_pane_cp1

0x9396,	// (0x00030d24) main_pane_idle_g1_cp_ParamLimits

0x9396,	// (0x00030d24) main_pane_idle_g1_cp

0x93ae,	// (0x00030d3c) popup_ai_links_title_window

0x93b7,	// (0x00030d45) soft_indicator_pane_cp1_ParamLimits

0x93b7,	// (0x00030d45) soft_indicator_pane_cp1

0x3302,	// (0x0002ac90) ai_links_pane_g1

0x330b,	// (0x0002ac99) grid_ai_links_pane

0xb057,	// (0x000329e5) ai_gene_pane_1

0x32f0,	// (0x0002ac7e) ai_gene_pane_2

0x32f9,	// (0x0002ac87) list_highlight_pane_cp4

0xb033,	// (0x000329c1) cell_ai_link_pane_ParamLimits

0xb033,	// (0x000329c1) cell_ai_link_pane

0x32c1,	// (0x0002ac4f) cell_ai_link_pane_g1

0xc59d,	// (0x00033f2b) cell_ai_link_pane_g2

0x0001,

0xf8d7,	// (0x00037265) cell_ai_link_pane_g

0xc310,	// (0x00033c9e) grid_highlight_cp2

0xc310,	// (0x00033c9e) bg_popup_sub_pane_cp1

0xc487,	// (0x00033e15) popup_ai_links_title_window_t1

0x3211,	// (0x0002ab9f) ai_gene_pane_1_g1_ParamLimits

0x3211,	// (0x0002ab9f) ai_gene_pane_1_g1

0x321d,	// (0x0002abab) ai_gene_pane_1_g2_ParamLimits

0x321d,	// (0x0002abab) ai_gene_pane_1_g2

0x0001,

0xf8cd,	// (0x0003725b) ai_gene_pane_1_g_ParamLimits

0xf8cd,	// (0x0003725b) ai_gene_pane_1_g

0x322a,	// (0x0002abb8) ai_gene_pane_1_t1_ParamLimits

0x322a,	// (0x0002abb8) ai_gene_pane_1_t1

0x325e,	// (0x0002abec) grid_ai_soft_ind_pane

0x31fc,	// (0x0002ab8a) ai_gene_pane_2_t1_ParamLimits

0x31fc,	// (0x0002ab8a) ai_gene_pane_2_t1

0x93cb,	// (0x00030d59) main_pane_empty_t1_ParamLimits

0x93cb,	// (0x00030d59) main_pane_empty_t1

0x93e3,	// (0x00030d71) main_pane_empty_t2_ParamLimits

0x93e3,	// (0x00030d71) main_pane_empty_t2

0x93f8,	// (0x00030d86) main_pane_empty_t3_ParamLimits

0x93f8,	// (0x00030d86) main_pane_empty_t3

0x940a,	// (0x00030d98) main_pane_empty_t4_ParamLimits

0x940a,	// (0x00030d98) main_pane_empty_t4

0x941c,	// (0x00030daa) main_pane_empty_t5_ParamLimits

0x941c,	// (0x00030daa) main_pane_empty_t5

0x0004,

0xf54d,	// (0x00036edb) main_pane_empty_t_ParamLimits

0xf54d,	// (0x00036edb) main_pane_empty_t

0xc7ff,	// (0x0003418d) bg_popup_window_pane_ParamLimits

0xc7ff,	// (0x0003418d) bg_popup_window_pane

0xafad,	// (0x0003293b) find_popup_pane_cp2_ParamLimits

0xafad,	// (0x0003293b) find_popup_pane_cp2

0x2f78,	// (0x0002a906) heading_pane_ParamLimits

0x2f78,	// (0x0002a906) heading_pane

0xc310,	// (0x00033c9e) bg_popup_sub_pane

0xaf26,	// (0x000328b4) bg_popup_window_pane_g1_ParamLimits

0xaf26,	// (0x000328b4) bg_popup_window_pane_g1

0xaf35,	// (0x000328c3) bg_popup_window_pane_g2_ParamLimits

0xaf35,	// (0x000328c3) bg_popup_window_pane_g2

0xaf41,	// (0x000328cf) bg_popup_window_pane_g3_ParamLimits

0xaf41,	// (0x000328cf) bg_popup_window_pane_g3

0xaf4d,	// (0x000328db) bg_popup_window_pane_g4_ParamLimits

0xaf4d,	// (0x000328db) bg_popup_window_pane_g4

0xaf5c,	// (0x000328ea) bg_popup_window_pane_g5_ParamLimits

0xaf5c,	// (0x000328ea) bg_popup_window_pane_g5

0xaf6c,	// (0x000328fa) bg_popup_window_pane_g6_ParamLimits

0xaf6c,	// (0x000328fa) bg_popup_window_pane_g6

0xaf78,	// (0x00032906) bg_popup_window_pane_g7_ParamLimits

0xaf78,	// (0x00032906) bg_popup_window_pane_g7

0xaf87,	// (0x00032915) bg_popup_window_pane_g8_ParamLimits

0xaf87,	// (0x00032915) bg_popup_window_pane_g8

0xaf96,	// (0x00032924) bg_popup_window_pane_g9_ParamLimits

0xaf96,	// (0x00032924) bg_popup_window_pane_g9

0x2f52,	// (0x0002a8e0) bg_popup_window_pane_g10_ParamLimits

0x2f52,	// (0x0002a8e0) bg_popup_window_pane_g10

0x0009,

0xf895,	// (0x00037223) bg_popup_window_pane_g_ParamLimits

0xf895,	// (0x00037223) bg_popup_window_pane_g

0x2e7b,	// (0x0002a809) bg_popup_heading_pane_ParamLimits

0x2e7b,	// (0x0002a809) bg_popup_heading_pane

0x180c,	// (0x0002919a) tabs_4_passive_pane_cp_srt_ParamLimits

0x180c,	// (0x0002919a) tabs_4_passive_pane_cp_srt

0x181e,	// (0x000291ac) tabs_4_passive_pane_srt_ParamLimits

0x2e8f,	// (0x0002a81d) heading_pane_g2

0x181e,	// (0x000291ac) tabs_4_passive_pane_srt

0x0d7b,	// (0x00028709) bg_passive_tab_pane_cp3_srt_ParamLimits

0x0d7b,	// (0x00028709) bg_passive_tab_pane_cp3_srt

0x2e97,	// (0x0002a825) heading_pane_t1_ParamLimits

0x2e97,	// (0x0002a825) heading_pane_t1

0x2eae,	// (0x0002a83c) heading_pane_t2_ParamLimits

0x2eae,	// (0x0002a83c) heading_pane_t2

0x0001,

0xf890,	// (0x0003721e) heading_pane_t_ParamLimits

0xf890,	// (0x0003721e) heading_pane_t

0x29b8,	// (0x0002a346) bg_popup_heading_pane_g1

0x2a67,	// (0x0002a3f5) bg_popup_heading_pane_g2

0x2a71,	// (0x0002a3ff) bg_popup_heading_pane_g3

0x2a7b,	// (0x0002a409) bg_popup_heading_pane_g4

0x2a85,	// (0x0002a413) bg_popup_heading_pane_g5

0x2a8f,	// (0x0002a41d) bg_popup_heading_pane_g6

0x2a97,	// (0x0002a425) bg_popup_heading_pane_g7

0x2a9f,	// (0x0002a42d) bg_popup_heading_pane_g8

0x2aa9,	// (0x0002a437) bg_popup_heading_pane_g9

0x0008,

0xf84c,	// (0x000371da) bg_popup_heading_pane_g

0x0c77,	// (0x00028605) bg_popup_sub_pane_g1

0x0c7f,	// (0x0002860d) bg_popup_sub_pane_g2

0x0c87,	// (0x00028615) bg_popup_sub_pane_g3

0x0c8f,	// (0x0002861d) bg_popup_sub_pane_g4

0x0c97,	// (0x00028625) bg_popup_sub_pane_g5

0x0c9f,	// (0x0002862d) bg_popup_sub_pane_g6

0x0ca7,	// (0x00028635) bg_popup_sub_pane_g7

0x0caf,	// (0x0002863d) bg_popup_sub_pane_g8

0x0cb7,	// (0x00028645) bg_popup_sub_pane_g9

0x0008,

0xf826,	// (0x000371b4) bg_popup_sub_pane_g

0xc35e,	// (0x00033cec) bg_popup_window_pane_cp5_ParamLimits

0xc35e,	// (0x00033cec) bg_popup_window_pane_cp5

0xc4a4,	// (0x00033e32) popup_note_window_g1_ParamLimits

0xc4a4,	// (0x00033e32) popup_note_window_g1

0xc4b0,	// (0x00033e3e) popup_note_window_t1_ParamLimits

0xc4b0,	// (0x00033e3e) popup_note_window_t1

0xc4c6,	// (0x00033e54) popup_note_window_t2_ParamLimits

0xc4c6,	// (0x00033e54) popup_note_window_t2

0xc4dc,	// (0x00033e6a) popup_note_window_t3_ParamLimits

0xc4dc,	// (0x00033e6a) popup_note_window_t3

0xc4f2,	// (0x00033e80) popup_note_window_t4_ParamLimits

0xc4f2,	// (0x00033e80) popup_note_window_t4

0xc51a,	// (0x00033ea8) popup_note_window_t5_ParamLimits

0xc51a,	// (0x00033ea8) popup_note_window_t5

0x0004,

0xf558,	// (0x00036ee6) popup_note_window_t_ParamLimits

0xf558,	// (0x00036ee6) popup_note_window_t

0xc53e,	// (0x00033ecc) bg_popup_window_pane_cp6_ParamLimits

0xc53e,	// (0x00033ecc) bg_popup_window_pane_cp6

0x1532,	// (0x00028ec0) popup_note_image_window_g1_ParamLimits

0x1532,	// (0x00028ec0) popup_note_image_window_g1

0xadcb,	// (0x00032759) popup_note_image_window_g2_ParamLimits

0xadcb,	// (0x00032759) popup_note_image_window_g2

0x0001,

0xf81a,	// (0x000371a8) popup_note_image_window_g_ParamLimits

0xf81a,	// (0x000371a8) popup_note_image_window_g

0x1557,	// (0x00028ee5) popup_note_image_window_t1_ParamLimits

0x1557,	// (0x00028ee5) popup_note_image_window_t1

0x1570,	// (0x00028efe) popup_note_image_window_t2_ParamLimits

0x1570,	// (0x00028efe) popup_note_image_window_t2

0x1589,	// (0x00028f17) popup_note_image_window_t3_ParamLimits

0x1589,	// (0x00028f17) popup_note_image_window_t3

0x0002,

0xf81f,	// (0x000371ad) popup_note_image_window_t_ParamLimits

0xf81f,	// (0x000371ad) popup_note_image_window_t

0x13fb,	// (0x00028d89) bg_popup_window_pane_cp7_ParamLimits

0x13fb,	// (0x00028d89) bg_popup_window_pane_cp7

0x142b,	// (0x00028db9) popup_note_wait_window_g1_ParamLimits

0x142b,	// (0x00028db9) popup_note_wait_window_g1

0x1437,	// (0x00028dc5) popup_note_wait_window_g2_ParamLimits

0x1437,	// (0x00028dc5) popup_note_wait_window_g2

0x0002,

0xf808,	// (0x00037196) popup_note_wait_window_g_ParamLimits

0xf808,	// (0x00037196) popup_note_wait_window_g

0x144f,	// (0x00028ddd) popup_note_wait_window_t1_ParamLimits

0x144f,	// (0x00028ddd) popup_note_wait_window_t1

0xad6c,	// (0x000326fa) popup_note_wait_window_t2_ParamLimits

0xad6c,	// (0x000326fa) popup_note_wait_window_t2

0xad89,	// (0x00032717) popup_note_wait_window_t3_ParamLimits

0xad89,	// (0x00032717) popup_note_wait_window_t3

0xad9c,	// (0x0003272a) popup_note_wait_window_t4_ParamLimits

0xad9c,	// (0x0003272a) popup_note_wait_window_t4

0x0004,

0xf80f,	// (0x0003719d) popup_note_wait_window_t_ParamLimits

0xf80f,	// (0x0003719d) popup_note_wait_window_t

0x14cb,	// (0x00028e59) wait_bar_pane_ParamLimits

0x14cb,	// (0x00028e59) wait_bar_pane

0xc310,	// (0x00033c9e) wait_anim_pane

0xc310,	// (0x00033c9e) wait_border_pane

0xc306,	// (0x00033c94) wait_anim_pane_g1

0xc306,	// (0x00033c94) wait_anim_pane_g2

0x0001,

0xf6c8,	// (0x00037056) wait_anim_pane_g

0x13a7,	// (0x00028d35) wait_border_pane_g1

0x13b2,	// (0x00028d40) wait_border_pane_g2

0x13bb,	// (0x00028d49) wait_border_pane_g3

0x0002,

0xf801,	// (0x0003718f) wait_border_pane_g

0x1212,	// (0x00028ba0) bg_popup_window_pane_cp16_ParamLimits

0x1212,	// (0x00028ba0) bg_popup_window_pane_cp16

0xad1c,	// (0x000326aa) indicator_popup_pane_cp4_ParamLimits

0xad1c,	// (0x000326aa) indicator_popup_pane_cp4

0x1326,	// (0x00028cb4) popup_query_data_window_t1_ParamLimits

0x1326,	// (0x00028cb4) popup_query_data_window_t1

0x1338,	// (0x00028cc6) popup_query_data_window_t2_ParamLimits

0x1338,	// (0x00028cc6) popup_query_data_window_t2

0x1351,	// (0x00028cdf) popup_query_data_window_t3_ParamLimits

0x1351,	// (0x00028cdf) popup_query_data_window_t3

0x0002,

0xf7fa,	// (0x00037188) popup_query_data_window_t_ParamLimits

0xf7fa,	// (0x00037188) popup_query_data_window_t

0xad30,	// (0x000326be) query_popup_data_pane_ParamLimits

0xad30,	// (0x000326be) query_popup_data_pane

0xad44,	// (0x000326d2) query_popup_data_pane_cp1_ParamLimits

0xad44,	// (0x000326d2) query_popup_data_pane_cp1

0x1212,	// (0x00028ba0) bg_popup_window_pane_cp10_ParamLimits

0x1212,	// (0x00028ba0) bg_popup_window_pane_cp10

0xac97,	// (0x00032625) indicator_popup_pane_ParamLimits

0xac97,	// (0x00032625) indicator_popup_pane

0xacb9,	// (0x00032647) popup_query_code_window_t1_ParamLimits

0xacb9,	// (0x00032647) popup_query_code_window_t1

0xacd3,	// (0x00032661) popup_query_code_window_t2_ParamLimits

0xacd3,	// (0x00032661) popup_query_code_window_t2

0x12c9,	// (0x00028c57) popup_query_code_window_t3_ParamLimits

0x12c9,	// (0x00028c57) popup_query_code_window_t3

0x0002,

0xf7f3,	// (0x00037181) popup_query_code_window_t_ParamLimits

0xf7f3,	// (0x00037181) popup_query_code_window_t

0x12f8,	// (0x00028c86) query_popup_pane_ParamLimits

0x12f8,	// (0x00028c86) query_popup_pane

0xc53e,	// (0x00033ecc) bg_popup_window_pane_cp15_ParamLimits

0xc53e,	// (0x00033ecc) bg_popup_window_pane_cp15

0x9454,	// (0x00030de2) indicator_popup_pane_cp1_ParamLimits

0x9454,	// (0x00030de2) indicator_popup_pane_cp1

0x9467,	// (0x00030df5) indicator_popup_pane_cp2_ParamLimits

0x9467,	// (0x00030df5) indicator_popup_pane_cp2

0x947a,	// (0x00030e08) popup_query_data_code_window_g1_ParamLimits

0x947a,	// (0x00030e08) popup_query_data_code_window_g1

0xc55c,	// (0x00033eea) popup_query_data_code_window_t1_ParamLimits

0xc55c,	// (0x00033eea) popup_query_data_code_window_t1

0xc56e,	// (0x00033efc) popup_query_data_code_window_t2_ParamLimits

0xc56e,	// (0x00033efc) popup_query_data_code_window_t2

0x948d,	// (0x00030e1b) popup_query_data_code_window_t3_ParamLimits

0x948d,	// (0x00030e1b) popup_query_data_code_window_t3

0x94a3,	// (0x00030e31) popup_query_data_code_window_t4_ParamLimits

0x94a3,	// (0x00030e31) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x00036ef1) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x00036ef1) popup_query_data_code_window_t

0xce33,	// (0x000347c1) list_single_midp_graphic_pane_g3

0x94bb,	// (0x00030e49) query_popup_data_pane_cp2_ParamLimits

0x94ce,	// (0x00030e5c) query_popup_pane_cp2_ParamLimits

0x94ce,	// (0x00030e5c) query_popup_pane_cp2

0xc310,	// (0x00033c9e) bg_popup_window_pane_cp11

0x11f6,	// (0x00028b84) heading_pane_cp5

0x11fe,	// (0x00028b8c) listscroll_popup_info_pane

0xc310,	// (0x00033c9e) input_focus_pane_cp3

0xc580,	// (0x00033f0e) query_popup_pane_t1

0xc58e,	// (0x00033f1c) list_popup_info_pane_ParamLimits

0xc58e,	// (0x00033f1c) list_popup_info_pane

0xc59d,	// (0x00033f2b) listscroll_popup_info_pane_g1

0xc5a5,	// (0x00033f33) scroll_pane_cp7

0x94e1,	// (0x00030e6f) popup_info_list_pane_t1_ParamLimits

0x94e1,	// (0x00030e6f) popup_info_list_pane_t1

0x94fb,	// (0x00030e89) popup_info_list_pane_t2_ParamLimits

0x94fb,	// (0x00030e89) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x00036efa) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x00036efa) popup_info_list_pane_t

0xc310,	// (0x00033c9e) bg_popup_window_pane_cp12

0xb546,	// (0x00032ed4) find_popup_pane

0xc36c,	// (0x00033cfa) bg_popup_window_pane_cp3

0xc5af,	// (0x00033f3d) heading_pane_cp3

0xc5be,	// (0x00033f4c) listscroll_popup_graphic_pane

0xc310,	// (0x00033c9e) bg_popup_window_pane_cp4

0x9565,	// (0x00030ef3) heading_pane_cp4

0xc5ce,	// (0x00033f5c) listscroll_popup_colour_pane

0x956f,	// (0x00030efd) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x956f,	// (0x00030efd) cell_large_graphic_colour_none_popup_pane

0x9583,	// (0x00030f11) grid_large_graphic_colour_popup_pane_ParamLimits

0x9583,	// (0x00030f11) grid_large_graphic_colour_popup_pane

0x95a7,	// (0x00030f35) listscroll_popup_colour_pane_g1_ParamLimits

0x95a7,	// (0x00030f35) listscroll_popup_colour_pane_g1

0x95be,	// (0x00030f4c) listscroll_popup_colour_pane_g2_ParamLimits

0x95be,	// (0x00030f4c) listscroll_popup_colour_pane_g2

0x95d2,	// (0x00030f60) listscroll_popup_colour_pane_g3_ParamLimits

0x95d2,	// (0x00030f60) listscroll_popup_colour_pane_g3

0x95e2,	// (0x00030f70) listscroll_popup_colour_pane_g4_ParamLimits

0x95e2,	// (0x00030f70) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x00036eff) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x00036eff) listscroll_popup_colour_pane_g

0xc5d6,	// (0x00033f64) scroll_pane_cp6_ParamLimits

0xc5d6,	// (0x00033f64) scroll_pane_cp6

0x95f2,	// (0x00030f80) cell_large_graphic_colour_popup_pane_ParamLimits

0x95f2,	// (0x00030f80) cell_large_graphic_colour_popup_pane

0x9611,	// (0x00030f9f) cell_large_graphic_colour_none_popup_pane_t1

0xc310,	// (0x00033c9e) grid_highlight_pane_cp5

0xc5e8,	// (0x00033f76) cell_large_graphic_colour_popup_pane_g1

0xc5f0,	// (0x00033f7e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x00036f08) cell_large_graphic_colour_popup_pane_g

0xc5f8,	// (0x00033f86) cell_large_graphic_colour_popup_pane_g2_copy1

0xc601,	// (0x00033f8f) grid_highlight_pane_cp4

0xc609,	// (0x00033f97) bg_popup_window_pane_cp8_ParamLimits

0xc609,	// (0x00033f97) bg_popup_window_pane_cp8

0x9620,	// (0x00030fae) popup_snote_single_text_window_g1_ParamLimits

0x9620,	// (0x00030fae) popup_snote_single_text_window_g1

0x9632,	// (0x00030fc0) popup_snote_single_text_window_t1_ParamLimits

0x9632,	// (0x00030fc0) popup_snote_single_text_window_t1

0x9645,	// (0x00030fd3) popup_snote_single_text_window_t2_ParamLimits

0x9645,	// (0x00030fd3) popup_snote_single_text_window_t2

0x9658,	// (0x00030fe6) popup_snote_single_text_window_t3_ParamLimits

0x9658,	// (0x00030fe6) popup_snote_single_text_window_t3

0x9691,	// (0x0003101f) popup_snote_single_text_window_t4_ParamLimits

0x9691,	// (0x0003101f) popup_snote_single_text_window_t4

0x96c5,	// (0x00031053) popup_snote_single_text_window_t5_ParamLimits

0x96c5,	// (0x00031053) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x00036f0d) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x00036f0d) popup_snote_single_text_window_t

0xc624,	// (0x00033fb2) bg_popup_window_pane_cp9_ParamLimits

0xc624,	// (0x00033fb2) bg_popup_window_pane_cp9

0x9620,	// (0x00030fae) popup_snote_single_graphic_window_g1_ParamLimits

0x9620,	// (0x00030fae) popup_snote_single_graphic_window_g1

0xc632,	// (0x00033fc0) popup_snote_single_graphic_window_g2_ParamLimits

0xc632,	// (0x00033fc0) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x00036f18) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x00036f18) popup_snote_single_graphic_window_g

0xc63e,	// (0x00033fcc) popup_snote_single_graphic_window_t1_ParamLimits

0xc63e,	// (0x00033fcc) popup_snote_single_graphic_window_t1

0xc651,	// (0x00033fdf) popup_snote_single_graphic_window_t2_ParamLimits

0xc651,	// (0x00033fdf) popup_snote_single_graphic_window_t2

0x9658,	// (0x00030fe6) popup_snote_single_graphic_window_t3_ParamLimits

0x9658,	// (0x00030fe6) popup_snote_single_graphic_window_t3

0x9691,	// (0x0003101f) popup_snote_single_graphic_window_t4_ParamLimits

0x9691,	// (0x0003101f) popup_snote_single_graphic_window_t4

0x96f4,	// (0x00031082) popup_snote_single_graphic_window_t5_ParamLimits

0x96f4,	// (0x00031082) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x00036f1d) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x00036f1d) popup_snote_single_graphic_window_t

0x38a1,	// (0x0002b22f) grid_graphic_popup_pane_ParamLimits

0x38a1,	// (0x0002b22f) grid_graphic_popup_pane

0x38cb,	// (0x0002b259) listscroll_popup_graphic_pane_g1_ParamLimits

0x38cb,	// (0x0002b259) listscroll_popup_graphic_pane_g1

0xb491,	// (0x00032e1f) listscroll_popup_graphic_pane_g2_ParamLimits

0xb491,	// (0x00032e1f) listscroll_popup_graphic_pane_g2

0x0001,

0xf970,	// (0x000372fe) listscroll_popup_graphic_pane_g_ParamLimits

0xf970,	// (0x000372fe) listscroll_popup_graphic_pane_g

0x38f3,	// (0x0002b281) scroll_pane_cp5

0xb44c,	// (0x00032dda) cell_graphic_popup_pane_ParamLimits

0xb44c,	// (0x00032dda) cell_graphic_popup_pane

0x3811,	// (0x0002b19f) cell_graphic_popup_pane_g1

0x3819,	// (0x0002b1a7) cell_graphic_popup_pane_g2

0xc5f8,	// (0x00033f86) cell_graphic_popup_pane_g3

0x0002,

0xf969,	// (0x000372f7) cell_graphic_popup_pane_g

0x3822,	// (0x0002b1b0) cell_graphic_popup_pane_t2

0xc601,	// (0x00033f8f) grid_highlight_pane_cp3

0xc676,	// (0x00034004) list_gen_pane_ParamLimits

0xc676,	// (0x00034004) list_gen_pane

0xc69e,	// (0x0003402c) scroll_pane

0xb3b6,	// (0x00032d44) bg_list_pane_g1_ParamLimits

0xb3b6,	// (0x00032d44) bg_list_pane_g1

0xb3d1,	// (0x00032d5f) bg_list_pane_g2_ParamLimits

0xb3d1,	// (0x00032d5f) bg_list_pane_g2

0xb3e4,	// (0x00032d72) bg_list_pane_g3_ParamLimits

0xb3e4,	// (0x00032d72) bg_list_pane_g3

0xb3f6,	// (0x00032d84) bg_list_pane_g4_ParamLimits

0xb3f6,	// (0x00032d84) bg_list_pane_g4

0xb408,	// (0x00032d96) bg_list_pane_g5_ParamLimits

0xb408,	// (0x00032d96) bg_list_pane_g5

0x0004,

0xf95e,	// (0x000372ec) bg_list_pane_g_ParamLimits

0xf95e,	// (0x000372ec) bg_list_pane_g

0xb37d,	// (0x00032d0b) list_double2_graphic_large_graphic_pane_ParamLimits

0xb37d,	// (0x00032d0b) list_double2_graphic_large_graphic_pane

0xb37d,	// (0x00032d0b) list_double2_graphic_pane_ParamLimits

0xb37d,	// (0x00032d0b) list_double2_graphic_pane

0xb37d,	// (0x00032d0b) list_double2_large_graphic_pane_ParamLimits

0xb37d,	// (0x00032d0b) list_double2_large_graphic_pane

0xb37d,	// (0x00032d0b) list_double2_pane_ParamLimits

0xb37d,	// (0x00032d0b) list_double2_pane

0xb37d,	// (0x00032d0b) list_double_graphic_heading_pane_ParamLimits

0xb37d,	// (0x00032d0b) list_double_graphic_heading_pane

0xb37d,	// (0x00032d0b) list_double_graphic_pane_ParamLimits

0xb37d,	// (0x00032d0b) list_double_graphic_pane

0xb37d,	// (0x00032d0b) list_double_heading_pane_ParamLimits

0xb37d,	// (0x00032d0b) list_double_heading_pane

0xb37d,	// (0x00032d0b) list_double_large_graphic_pane_ParamLimits

0xb37d,	// (0x00032d0b) list_double_large_graphic_pane

0xb37d,	// (0x00032d0b) list_double_number_pane_ParamLimits

0xb37d,	// (0x00032d0b) list_double_number_pane

0xb37d,	// (0x00032d0b) list_double_pane_ParamLimits

0xb37d,	// (0x00032d0b) list_double_pane

0xb37d,	// (0x00032d0b) list_double_time_pane_ParamLimits

0xb37d,	// (0x00032d0b) list_double_time_pane

0xb37d,	// (0x00032d0b) list_setting_number_pane_ParamLimits

0xb37d,	// (0x00032d0b) list_setting_number_pane

0xb37d,	// (0x00032d0b) list_setting_pane_ParamLimits

0xb37d,	// (0x00032d0b) list_setting_pane

0x9782,	// (0x00031110) list_single_2graphic_pane_ParamLimits

0x9782,	// (0x00031110) list_single_2graphic_pane

0x9782,	// (0x00031110) list_single_graphic_heading_pane_ParamLimits

0x9782,	// (0x00031110) list_single_graphic_heading_pane

0x9782,	// (0x00031110) list_single_graphic_pane_ParamLimits

0x9782,	// (0x00031110) list_single_graphic_pane

0x9782,	// (0x00031110) list_single_heading_pane_ParamLimits

0x9782,	// (0x00031110) list_single_heading_pane

0x9782,	// (0x00031110) list_single_large_graphic_pane_ParamLimits

0x9782,	// (0x00031110) list_single_large_graphic_pane

0x9782,	// (0x00031110) list_single_number_heading_pane_ParamLimits

0x9782,	// (0x00031110) list_single_number_heading_pane

0x9782,	// (0x00031110) list_single_number_pane_ParamLimits

0x9782,	// (0x00031110) list_single_number_pane

0x9782,	// (0x00031110) list_single_pane_ParamLimits

0x9782,	// (0x00031110) list_single_pane

0xc310,	// (0x00033c9e) list_highlight_pane_cp1

0xe83e,	// (0x000361cc) list_single_pane_g1_ParamLimits

0xe83e,	// (0x000361cc) list_single_pane_g1

0xe84a,	// (0x000361d8) list_single_pane_g2_ParamLimits

0xe84a,	// (0x000361d8) list_single_pane_g2

0x0001,

0xf5a1,	// (0x00036f2f) list_single_pane_g_ParamLimits

0xf5a1,	// (0x00036f2f) list_single_pane_g

0x868f,	// (0x0003001d) list_single_pane_t1_ParamLimits

0x868f,	// (0x0003001d) list_single_pane_t1

0xe83e,	// (0x000361cc) list_single_number_pane_g1_ParamLimits

0xe83e,	// (0x000361cc) list_single_number_pane_g1

0xe84a,	// (0x000361d8) list_single_number_pane_g2_ParamLimits

0xe84a,	// (0x000361d8) list_single_number_pane_g2

0x0001,

0xf5a1,	// (0x00036f2f) list_single_number_pane_g_ParamLimits

0xf5a1,	// (0x00036f2f) list_single_number_pane_g

0x868f,	// (0x0003001d) list_single_number_pane_t1_ParamLimits

0x868f,	// (0x0003001d) list_single_number_pane_t1

0x8b26,	// (0x000304b4) list_single_number_pane_t2_ParamLimits

0x8b26,	// (0x000304b4) list_single_number_pane_t2

0x0001,

0xf91f,	// (0x000372ad) list_single_number_pane_t_ParamLimits

0xf91f,	// (0x000372ad) list_single_number_pane_t

0xe832,	// (0x000361c0) list_single_graphic_pane_g1_ParamLimits

0xe832,	// (0x000361c0) list_single_graphic_pane_g1

0xe83e,	// (0x000361cc) list_single_graphic_pane_g2_ParamLimits

0xe83e,	// (0x000361cc) list_single_graphic_pane_g2

0xe84a,	// (0x000361d8) list_single_graphic_pane_g3_ParamLimits

0xe84a,	// (0x000361d8) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x00036f28) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x00036f28) list_single_graphic_pane_g

0x868f,	// (0x0003001d) list_single_graphic_pane_t1_ParamLimits

0x868f,	// (0x0003001d) list_single_graphic_pane_t1

0xe83e,	// (0x000361cc) list_single_heading_pane_g1_ParamLimits

0xe83e,	// (0x000361cc) list_single_heading_pane_g1

0xe84a,	// (0x000361d8) list_single_heading_pane_g2_ParamLimits

0xe84a,	// (0x000361d8) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x00036f2f) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x00036f2f) list_single_heading_pane_g

0xe856,	// (0x000361e4) list_single_heading_pane_t1_ParamLimits

0xe856,	// (0x000361e4) list_single_heading_pane_t1

0xe86c,	// (0x000361fa) list_single_heading_pane_t2_ParamLimits

0xe86c,	// (0x000361fa) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x00036f34) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x00036f34) list_single_heading_pane_t

0xe83e,	// (0x000361cc) list_single_number_heading_pane_g1_ParamLimits

0xe83e,	// (0x000361cc) list_single_number_heading_pane_g1

0xe84a,	// (0x000361d8) list_single_number_heading_pane_g2_ParamLimits

0xe84a,	// (0x000361d8) list_single_number_heading_pane_g2

0x0001,

0xf5a1,	// (0x00036f2f) list_single_number_heading_pane_g_ParamLimits

0xf5a1,	// (0x00036f2f) list_single_number_heading_pane_g

0xe856,	// (0x000361e4) list_single_number_heading_pane_t1_ParamLimits

0xe856,	// (0x000361e4) list_single_number_heading_pane_t1

0xe87e,	// (0x0003620c) list_single_number_heading_pane_t2_ParamLimits

0xe87e,	// (0x0003620c) list_single_number_heading_pane_t2

0xe890,	// (0x0003621e) list_single_number_heading_pane_t3_ParamLimits

0xe890,	// (0x0003621e) list_single_number_heading_pane_t3

0x0002,

0xf5ab,	// (0x00036f39) list_single_number_heading_pane_t_ParamLimits

0xf5ab,	// (0x00036f39) list_single_number_heading_pane_t

0xe832,	// (0x000361c0) list_single_graphic_heading_pane_g1_ParamLimits

0xe832,	// (0x000361c0) list_single_graphic_heading_pane_g1

0x86a5,	// (0x00030033) list_single_graphic_heading_pane_g4_ParamLimits

0x86a5,	// (0x00030033) list_single_graphic_heading_pane_g4

0xe84a,	// (0x000361d8) list_single_graphic_heading_pane_g5_ParamLimits

0xe84a,	// (0x000361d8) list_single_graphic_heading_pane_g5

0x0002,

0xf5b2,	// (0x00036f40) list_single_graphic_heading_pane_g_ParamLimits

0xf5b2,	// (0x00036f40) list_single_graphic_heading_pane_g

0xe856,	// (0x000361e4) list_single_graphic_heading_pane_t1_ParamLimits

0xe856,	// (0x000361e4) list_single_graphic_heading_pane_t1

0x86b6,	// (0x00030044) list_single_graphic_heading_pane_t2_ParamLimits

0x86b6,	// (0x00030044) list_single_graphic_heading_pane_t2

0x0001,

0xf5b9,	// (0x00036f47) list_single_graphic_heading_pane_t_ParamLimits

0xf5b9,	// (0x00036f47) list_single_graphic_heading_pane_t

0xe8a2,	// (0x00036230) list_single_large_graphic_pane_g1_ParamLimits

0xe8a2,	// (0x00036230) list_single_large_graphic_pane_g1

0xe83e,	// (0x000361cc) list_single_large_graphic_pane_g2_ParamLimits

0xe83e,	// (0x000361cc) list_single_large_graphic_pane_g2

0xe84a,	// (0x000361d8) list_single_large_graphic_pane_g3_ParamLimits

0xe84a,	// (0x000361d8) list_single_large_graphic_pane_g3

0x0002,

0xf5be,	// (0x00036f4c) list_single_large_graphic_pane_g_ParamLimits

0xf5be,	// (0x00036f4c) list_single_large_graphic_pane_g

0x13b2,	// (0x00028d40) wait_border_pane_g2_copy1

0x86c8,	// (0x00030056) list_single_large_graphic_pane_g4_cp2

0xe8ae,	// (0x0003623c) list_single_large_graphic_pane_t1_ParamLimits

0xe8ae,	// (0x0003623c) list_single_large_graphic_pane_t1

0xe8c4,	// (0x00036252) list_double_pane_g1_ParamLimits

0xe8c4,	// (0x00036252) list_double_pane_g1

0xe8d0,	// (0x0003625e) list_double_pane_g2_ParamLimits

0xe8d0,	// (0x0003625e) list_double_pane_g2

0x0001,

0xf5c5,	// (0x00036f53) list_double_pane_g_ParamLimits

0xf5c5,	// (0x00036f53) list_double_pane_g

0x86d0,	// (0x0003005e) list_double_pane_t1_ParamLimits

0x86d0,	// (0x0003005e) list_double_pane_t1

0x86e6,	// (0x00030074) list_double_pane_t2_ParamLimits

0x86e6,	// (0x00030074) list_double_pane_t2

0x0001,

0xf5ca,	// (0x00036f58) list_double_pane_t_ParamLimits

0xf5ca,	// (0x00036f58) list_double_pane_t

0x86f8,	// (0x00030086) list_double2_pane_g1_ParamLimits

0x86f8,	// (0x00030086) list_double2_pane_g1

0xe8d0,	// (0x0003625e) list_double2_pane_g2_ParamLimits

0xe8d0,	// (0x0003625e) list_double2_pane_g2

0x0001,

0xf5cf,	// (0x00036f5d) list_double2_pane_g_ParamLimits

0xf5cf,	// (0x00036f5d) list_double2_pane_g

0x86d0,	// (0x0003005e) list_double2_pane_t1_ParamLimits

0x86d0,	// (0x0003005e) list_double2_pane_t1

0x8709,	// (0x00030097) list_double2_pane_t2_ParamLimits

0x8709,	// (0x00030097) list_double2_pane_t2

0x0001,

0xf5d4,	// (0x00036f62) list_double2_pane_t_ParamLimits

0xf5d4,	// (0x00036f62) list_double2_pane_t

0xe8c4,	// (0x00036252) list_double_number_pane_g1_ParamLimits

0xe8c4,	// (0x00036252) list_double_number_pane_g1

0xe8d0,	// (0x0003625e) list_double_number_pane_g2_ParamLimits

0xe8d0,	// (0x0003625e) list_double_number_pane_g2

0x0001,

0xf5c5,	// (0x00036f53) list_double_number_pane_g_ParamLimits

0xf5c5,	// (0x00036f53) list_double_number_pane_g

0x871b,	// (0x000300a9) list_double_number_pane_t1_ParamLimits

0x871b,	// (0x000300a9) list_double_number_pane_t1

0x86d0,	// (0x0003005e) list_double_number_pane_t2_ParamLimits

0x86d0,	// (0x0003005e) list_double_number_pane_t2

0x86e6,	// (0x00030074) list_double_number_pane_t3_ParamLimits

0x86e6,	// (0x00030074) list_double_number_pane_t3

0x0002,

0xf5d9,	// (0x00036f67) list_double_number_pane_t_ParamLimits

0xf5d9,	// (0x00036f67) list_double_number_pane_t

0x872d,	// (0x000300bb) list_double_graphic_pane_g1_ParamLimits

0x872d,	// (0x000300bb) list_double_graphic_pane_g1

0xe8dc,	// (0x0003626a) list_double_graphic_pane_g2_ParamLimits

0xe8dc,	// (0x0003626a) list_double_graphic_pane_g2

0xe8eb,	// (0x00036279) list_double_graphic_pane_g3_ParamLimits

0xe8eb,	// (0x00036279) list_double_graphic_pane_g3

0x0003,

0xf5e0,	// (0x00036f6e) list_double_graphic_pane_g_ParamLimits

0xf5e0,	// (0x00036f6e) list_double_graphic_pane_g

0x86d0,	// (0x0003005e) list_double_graphic_pane_t1_ParamLimits

0x86d0,	// (0x0003005e) list_double_graphic_pane_t1

0x86e6,	// (0x00030074) list_double_graphic_pane_t2_ParamLimits

0x86e6,	// (0x00030074) list_double_graphic_pane_t2

0x0001,

0xf5ca,	// (0x00036f58) list_double_graphic_pane_t_ParamLimits

0xf5ca,	// (0x00036f58) list_double_graphic_pane_t

0x872d,	// (0x000300bb) list_double2_graphic_pane_g1_ParamLimits

0x872d,	// (0x000300bb) list_double2_graphic_pane_g1

0xe8f7,	// (0x00036285) list_double2_graphic_pane_g2_ParamLimits

0xe8f7,	// (0x00036285) list_double2_graphic_pane_g2

0xe903,	// (0x00036291) list_double2_graphic_pane_g3_ParamLimits

0xe903,	// (0x00036291) list_double2_graphic_pane_g3

0x0002,

0xf5e9,	// (0x00036f77) list_double2_graphic_pane_g_ParamLimits

0xf5e9,	// (0x00036f77) list_double2_graphic_pane_g

0x86d0,	// (0x0003005e) list_double2_graphic_pane_t1_ParamLimits

0x86d0,	// (0x0003005e) list_double2_graphic_pane_t1

0x8709,	// (0x00030097) list_double2_graphic_pane_t2_ParamLimits

0x8709,	// (0x00030097) list_double2_graphic_pane_t2

0x0001,

0xf5d4,	// (0x00036f62) list_double2_graphic_pane_t_ParamLimits

0xf5d4,	// (0x00036f62) list_double2_graphic_pane_t

0x8745,	// (0x000300d3) list_double_large_graphic_pane_g1_ParamLimits

0x8745,	// (0x000300d3) list_double_large_graphic_pane_g1

0x86f8,	// (0x00030086) list_double_large_graphic_pane_g2_ParamLimits

0x86f8,	// (0x00030086) list_double_large_graphic_pane_g2

0xe8d0,	// (0x0003625e) list_double_large_graphic_pane_g3_ParamLimits

0xe8d0,	// (0x0003625e) list_double_large_graphic_pane_g3

0x8758,	// (0x000300e6) list_double_large_graphic_pane_g4_ParamLimits

0x8758,	// (0x000300e6) list_double_large_graphic_pane_g4

0x0004,

0xf5f0,	// (0x00036f7e) list_double_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00036f7e) list_double_large_graphic_pane_g

0x876a,	// (0x000300f8) list_double_large_graphic_pane_t1_ParamLimits

0x876a,	// (0x000300f8) list_double_large_graphic_pane_t1

0x8783,	// (0x00030111) list_double_large_graphic_pane_t2_ParamLimits

0x8783,	// (0x00030111) list_double_large_graphic_pane_t2

0x0001,

0xf5fb,	// (0x00036f89) list_double_large_graphic_pane_t_ParamLimits

0xf5fb,	// (0x00036f89) list_double_large_graphic_pane_t

0x8795,	// (0x00030123) list_double2_large_graphic_pane_g1_ParamLimits

0x8795,	// (0x00030123) list_double2_large_graphic_pane_g1

0x86f8,	// (0x00030086) list_double2_large_graphic_pane_g2_ParamLimits

0x86f8,	// (0x00030086) list_double2_large_graphic_pane_g2

0xe8d0,	// (0x0003625e) list_double2_large_graphic_pane_g3_ParamLimits

0xe8d0,	// (0x0003625e) list_double2_large_graphic_pane_g3

0x0002,

0xf600,	// (0x00036f8e) list_double2_large_graphic_pane_g_ParamLimits

0xf600,	// (0x00036f8e) list_double2_large_graphic_pane_g

0x87a1,	// (0x0003012f) list_double2_large_graphic_pane_t1_ParamLimits

0x87a1,	// (0x0003012f) list_double2_large_graphic_pane_t1

0x87b7,	// (0x00030145) list_double2_large_graphic_pane_t2_ParamLimits

0x87b7,	// (0x00030145) list_double2_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00036f95) list_double2_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00036f95) list_double2_large_graphic_pane_t

0x87c9,	// (0x00030157) list_double_heading_pane_g1_ParamLimits

0x87c9,	// (0x00030157) list_double_heading_pane_g1

0xe924,	// (0x000362b2) list_double_heading_pane_g2_ParamLimits

0xe924,	// (0x000362b2) list_double_heading_pane_g2

0x0001,

0xf60c,	// (0x00036f9a) list_double_heading_pane_g_ParamLimits

0xf60c,	// (0x00036f9a) list_double_heading_pane_g

0x87da,	// (0x00030168) list_double_heading_pane_t1_ParamLimits

0x87da,	// (0x00030168) list_double_heading_pane_t1

0x8709,	// (0x00030097) list_double_heading_pane_t2_ParamLimits

0x8709,	// (0x00030097) list_double_heading_pane_t2

0x0001,

0xf611,	// (0x00036f9f) list_double_heading_pane_t_ParamLimits

0xf611,	// (0x00036f9f) list_double_heading_pane_t

0x87f0,	// (0x0003017e) list_double_graphic_heading_pane_g1_ParamLimits

0x87f0,	// (0x0003017e) list_double_graphic_heading_pane_g1

0x87c9,	// (0x00030157) list_double_graphic_heading_pane_g2_ParamLimits

0x87c9,	// (0x00030157) list_double_graphic_heading_pane_g2

0xe924,	// (0x000362b2) list_double_graphic_heading_pane_g3_ParamLimits

0xe924,	// (0x000362b2) list_double_graphic_heading_pane_g3

0x0002,

0xf616,	// (0x00036fa4) list_double_graphic_heading_pane_g_ParamLimits

0xf616,	// (0x00036fa4) list_double_graphic_heading_pane_g

0x87da,	// (0x00030168) list_double_graphic_heading_pane_t1_ParamLimits

0x87da,	// (0x00030168) list_double_graphic_heading_pane_t1

0x8709,	// (0x00030097) list_double_graphic_heading_pane_t2_ParamLimits

0x8709,	// (0x00030097) list_double_graphic_heading_pane_t2

0x0001,

0xf611,	// (0x00036f9f) list_double_graphic_heading_pane_t_ParamLimits

0xf611,	// (0x00036f9f) list_double_graphic_heading_pane_t

0x86f8,	// (0x00030086) list_double_time_pane_g1_ParamLimits

0x86f8,	// (0x00030086) list_double_time_pane_g1

0xe8d0,	// (0x0003625e) list_double_time_pane_g2_ParamLimits

0xe8d0,	// (0x0003625e) list_double_time_pane_g2

0x0001,

0xf5cf,	// (0x00036f5d) list_double_time_pane_g_ParamLimits

0xf5cf,	// (0x00036f5d) list_double_time_pane_g

0xe930,	// (0x000362be) list_double_time_pane_t1_ParamLimits

0xe930,	// (0x000362be) list_double_time_pane_t1

0xe946,	// (0x000362d4) list_double_time_pane_t2_ParamLimits

0xe946,	// (0x000362d4) list_double_time_pane_t2

0xe958,	// (0x000362e6) list_double_time_pane_t3_ParamLimits

0xe958,	// (0x000362e6) list_double_time_pane_t3

0xe96a,	// (0x000362f8) list_double_time_pane_t4_ParamLimits

0xe96a,	// (0x000362f8) list_double_time_pane_t4

0x0003,

0xf61d,	// (0x00036fab) list_double_time_pane_t_ParamLimits

0xf61d,	// (0x00036fab) list_double_time_pane_t

0xe97c,	// (0x0003630a) list_setting_pane_g1_ParamLimits

0xe97c,	// (0x0003630a) list_setting_pane_g1

0xe988,	// (0x00036316) list_setting_pane_g2_ParamLimits

0xe988,	// (0x00036316) list_setting_pane_g2

0x0001,

0xf626,	// (0x00036fb4) list_setting_pane_g_ParamLimits

0xf626,	// (0x00036fb4) list_setting_pane_g

0x87fc,	// (0x0003018a) list_setting_pane_t1_ParamLimits

0x87fc,	// (0x0003018a) list_setting_pane_t1

0x8813,	// (0x000301a1) list_setting_pane_t2_ParamLimits

0x8813,	// (0x000301a1) list_setting_pane_t2

0x0002,

0xf62b,	// (0x00036fb9) list_setting_pane_t_ParamLimits

0xf62b,	// (0x00036fb9) list_setting_pane_t

0x8852,	// (0x000301e0) set_value_pane_cp_ParamLimits

0x8852,	// (0x000301e0) set_value_pane_cp

0xe994,	// (0x00036322) list_setting_number_pane_g1_ParamLimits

0xe994,	// (0x00036322) list_setting_number_pane_g1

0xe9a0,	// (0x0003632e) list_setting_number_pane_g2_ParamLimits

0xe9a0,	// (0x0003632e) list_setting_number_pane_g2

0x0001,

0xf632,	// (0x00036fc0) list_setting_number_pane_g_ParamLimits

0xf632,	// (0x00036fc0) list_setting_number_pane_g

0x885e,	// (0x000301ec) list_setting_number_pane_t1_ParamLimits

0x885e,	// (0x000301ec) list_setting_number_pane_t1

0xe9ac,	// (0x0003633a) list_setting_number_pane_t2_ParamLimits

0xe9ac,	// (0x0003633a) list_setting_number_pane_t2

0x8872,	// (0x00030200) list_setting_number_pane_t3_ParamLimits

0x8872,	// (0x00030200) list_setting_number_pane_t3

0x0003,

0xf637,	// (0x00036fc5) list_setting_number_pane_t_ParamLimits

0xf637,	// (0x00036fc5) list_setting_number_pane_t

0x8852,	// (0x000301e0) set_value_pane_ParamLimits

0x8852,	// (0x000301e0) set_value_pane

0xc6d2,	// (0x00034060) bg_set_opt_pane_ParamLimits

0xc6d2,	// (0x00034060) bg_set_opt_pane

0x888a,	// (0x00030218) set_value_pane_t1

0xc6f3,	// (0x00034081) slider_set_pane_cp3

0x972d,	// (0x000310bb) volume_small_pane_cp

0xc6fc,	// (0x0003408a) list_form_gen_pane

0xc705,	// (0x00034093) scroll_pane_cp8

0x8898,	// (0x00030226) form_field_data_pane_ParamLimits

0x8898,	// (0x00030226) form_field_data_pane

0x88af,	// (0x0003023d) form_field_data_wide_pane_ParamLimits

0x88af,	// (0x0003023d) form_field_data_wide_pane

0x88cf,	// (0x0003025d) form_field_popup_pane_ParamLimits

0x88cf,	// (0x0003025d) form_field_popup_pane

0x88e7,	// (0x00030275) form_field_popup_wide_pane_ParamLimits

0x88e7,	// (0x00030275) form_field_popup_wide_pane

0xe9fe,	// (0x0003638c) form_field_slider_pane_ParamLimits

0xe9fe,	// (0x0003638c) form_field_slider_pane

0x8904,	// (0x00030292) form_field_slider_wide_pane_ParamLimits

0x8904,	// (0x00030292) form_field_slider_wide_pane

0xc716,	// (0x000340a4) data_form_pane

0x8921,	// (0x000302af) form_field_data_pane_t1

0xc722,	// (0x000340b0) input_focus_pane

0x893b,	// (0x000302c9) data_form_wide_pane

0x8958,	// (0x000302e6) form_field_data_wide_pane_t1

0xc616,	// (0x00033fa4) input_focus_pane_cp6

0x897a,	// (0x00030308) form_field_popup_pane_t1

0xc722,	// (0x000340b0) input_focus_pane_cp7

0xc750,	// (0x000340de) list_form_pane

0x899c,	// (0x0003032a) form_field_popup_wide_pane_t1

0xc722,	// (0x000340b0) input_focus_pane_cp8

0xc75c,	// (0x000340ea) list_form_wide_pane

0x89b9,	// (0x00030347) form_field_slider_pane_t1_ParamLimits

0x89b9,	// (0x00030347) form_field_slider_pane_t1

0x89d1,	// (0x0003035f) form_field_slider_pane_t2_ParamLimits

0x89d1,	// (0x0003035f) form_field_slider_pane_t2

0x0001,

0xf647,	// (0x00036fd5) form_field_slider_pane_t_ParamLimits

0xf647,	// (0x00036fd5) form_field_slider_pane_t

0xc35e,	// (0x00033cec) input_focus_pane_cp9_ParamLimits

0xc35e,	// (0x00033cec) input_focus_pane_cp9

0x89e6,	// (0x00030374) slider_cont_pane_ParamLimits

0x89e6,	// (0x00030374) slider_cont_pane

0xc768,	// (0x000340f6) form_field_slider_wide_pane_t1_ParamLimits

0xc768,	// (0x000340f6) form_field_slider_wide_pane_t1

0x89fa,	// (0x00030388) form_field_slider_wide_pane_t2_ParamLimits

0x89fa,	// (0x00030388) form_field_slider_wide_pane_t2

0x0001,

0xf64c,	// (0x00036fda) form_field_slider_wide_pane_t_ParamLimits

0xf64c,	// (0x00036fda) form_field_slider_wide_pane_t

0xc35e,	// (0x00033cec) input_focus_pane_cp10_ParamLimits

0xc35e,	// (0x00033cec) input_focus_pane_cp10

0x8a0c,	// (0x0003039a) slider_cont_pane_cp1_ParamLimits

0x8a0c,	// (0x0003039a) slider_cont_pane_cp1

0x8a20,	// (0x000303ae) slider_form_pane_cp

0xc77a,	// (0x00034108) input_focus_pane_g1

0xc782,	// (0x00034110) input_focus_pane_g2

0xc78a,	// (0x00034118) input_focus_pane_g3

0xc792,	// (0x00034120) input_focus_pane_g4

0xc79a,	// (0x00034128) input_focus_pane_g5

0xc7a2,	// (0x00034130) input_focus_pane_g6

0xc7aa,	// (0x00034138) input_focus_pane_g7

0xc7b2,	// (0x00034140) input_focus_pane_g8

0xc7ba,	// (0x00034148) input_focus_pane_g9

0xc306,	// (0x00033c94) input_focus_pane_g10

0x0009,

0xf651,	// (0x00036fdf) input_focus_pane_g

0x13bb,	// (0x00028d49) wait_border_pane_g3_copy1

0x8a28,	// (0x000303b6) data_form_pane_t1

0xc306,	// (0x00033c94) wait_anim_pane_g1_copy1

0x8b38,	// (0x000304c6) data_form_wide_pane_t1

0x8a42,	// (0x000303d0) list_form_graphic_pane_cp_ParamLimits

0x8a42,	// (0x000303d0) list_form_graphic_pane_cp

0x369c,	// (0x0002b02a) slider_form_pane_g1

0x36a5,	// (0x0002b033) slider_form_pane_g2

0x0006,

0xf94f,	// (0x000372dd) slider_form_pane_g

0x8a42,	// (0x000303d0) list_form_graphic_pane_ParamLimits

0x8a42,	// (0x000303d0) list_form_graphic_pane

0x8a55,	// (0x000303e3) list_form_graphic_pane_g1

0x8a5d,	// (0x000303eb) list_form_graphic_pane_t1_ParamLimits

0x8a5d,	// (0x000303eb) list_form_graphic_pane_t1

0xc36c,	// (0x00033cfa) list_highlight_pane_cp5_ParamLimits

0xc36c,	// (0x00033cfa) list_highlight_pane_cp5

0x8a72,	// (0x00030400) find_pane_g1

0xc7c2,	// (0x00034150) input_find_pane

0x8a7b,	// (0x00030409) input_find_pane_g1_ParamLimits

0x8a7b,	// (0x00030409) input_find_pane_g1

0x8a87,	// (0x00030415) input_find_pane_t1_ParamLimits

0x8a87,	// (0x00030415) input_find_pane_t1

0x8a9c,	// (0x0003042a) input_find_pane_t2_ParamLimits

0x8a9c,	// (0x0003042a) input_find_pane_t2

0x0001,

0xf666,	// (0x00036ff4) input_find_pane_t_ParamLimits

0xf666,	// (0x00036ff4) input_find_pane_t

0xc7cb,	// (0x00034159) input_focus_pane_cp5_ParamLimits

0xc7cb,	// (0x00034159) input_focus_pane_cp5

0xc7de,	// (0x0003416c) bg_popup_window_pane_cp2_ParamLimits

0xc7de,	// (0x0003416c) bg_popup_window_pane_cp2

0xc7eb,	// (0x00034179) listscroll_menu_pane_ParamLimits

0xc7eb,	// (0x00034179) listscroll_menu_pane

0x9742,	// (0x000310d0) popup_submenu_window_ParamLimits

0x9742,	// (0x000310d0) popup_submenu_window

0xc7f7,	// (0x00034185) find_popup_pane_g1

0x976a,	// (0x000310f8) input_popup_find_pane_cp

0xc7ff,	// (0x0003418d) input_focus_pane_cp4_ParamLimits

0xc7ff,	// (0x0003418d) input_focus_pane_cp4

0xc80d,	// (0x0003419b) input_popup_find_pane_t1_ParamLimits

0xc80d,	// (0x0003419b) input_popup_find_pane_t1

0xc310,	// (0x00033c9e) bg_popup_sub_pane_cp

0xc83b,	// (0x000341c9) listscroll_popup_sub_pane

0xc843,	// (0x000341d1) list_submenu_pane_ParamLimits

0xc843,	// (0x000341d1) list_submenu_pane

0xc854,	// (0x000341e2) scroll_pane_cp4

0x9782,	// (0x00031110) list_single_popup_submenu_pane_ParamLimits

0x9782,	// (0x00031110) list_single_popup_submenu_pane

0x9796,	// (0x00031124) list_single_popup_submenu_pane_g1

0x979e,	// (0x0003112c) list_single_popup_submenu_pane_t1_ParamLimits

0x979e,	// (0x0003112c) list_single_popup_submenu_pane_t1

0xc35e,	// (0x00033cec) bg_active_tab_pane_cp1_ParamLimits

0xc35e,	// (0x00033cec) bg_active_tab_pane_cp1

0xc85c,	// (0x000341ea) tabs_2_active_pane_g1

0x97b3,	// (0x00031141) tabs_2_active_pane_t1

0xc35e,	// (0x00033cec) bg_passive_tab_pane_cp1_ParamLimits

0xc35e,	// (0x00033cec) bg_passive_tab_pane_cp1

0xc85c,	// (0x000341ea) tabs_2_passive_pane_g1

0x97b3,	// (0x00031141) tabs_2_passive_pane_t1

0xc36c,	// (0x00033cfa) bg_active_tab_pane_cp4

0x97c5,	// (0x00031153) tabs_2_long_active_pane_t1

0xc864,	// (0x000341f2) bg_passive_tab_pane_cp4

0x0ce4,	// (0x00028672) list_single_midp_graphic_pane_g4_ParamLimits

0xc36c,	// (0x00033cfa) bg_active_tab_pane_cp5

0x97d8,	// (0x00031166) tabs_3_long_active_pane_t1

0xc864,	// (0x000341f2) bg_passive_tab_pane_cp5

0x0ce4,	// (0x00028672) list_single_midp_graphic_pane_g4

0xc36c,	// (0x00033cfa) bg_popup_window_pane_cp13_ParamLimits

0xc36c,	// (0x00033cfa) bg_popup_window_pane_cp13

0xc870,	// (0x000341fe) listscroll_popup_fast_pane_ParamLimits

0xc870,	// (0x000341fe) listscroll_popup_fast_pane

0xc87c,	// (0x0003420a) grid_popup_fast_pane_ParamLimits

0xc87c,	// (0x0003420a) grid_popup_fast_pane

0xc88e,	// (0x0003421c) scroll_pane_cp9_ParamLimits

0xc88e,	// (0x0003421c) scroll_pane_cp9

0x4fd5,	// (0x0002c963) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4fd5,	// (0x0002c963) list_single_graphic_hl_pane_t1_cp2

0xc8a1,	// (0x0003422f) input_focus_pane_cp20_ParamLimits

0xc8a1,	// (0x0003422f) input_focus_pane_cp20

0xc8af,	// (0x0003423d) query_popup_data_pane_t1_ParamLimits

0xc8af,	// (0x0003423d) query_popup_data_pane_t1

0xc8c2,	// (0x00034250) query_popup_data_pane_t2_ParamLimits

0xc8c2,	// (0x00034250) query_popup_data_pane_t2

0xc908,	// (0x00034296) query_popup_data_pane_t3_ParamLimits

0xc908,	// (0x00034296) query_popup_data_pane_t3

0xc949,	// (0x000342d7) query_popup_data_pane_t4_ParamLimits

0xc949,	// (0x000342d7) query_popup_data_pane_t4

0xc985,	// (0x00034313) query_popup_data_pane_t5_ParamLimits

0xc985,	// (0x00034313) query_popup_data_pane_t5

0x0004,

0xf66b,	// (0x00036ff9) query_popup_data_pane_t_ParamLimits

0xf66b,	// (0x00036ff9) query_popup_data_pane_t

0xc77a,	// (0x00034108) bg_set_opt_pane_g1

0xc782,	// (0x00034110) bg_set_opt_pane_g2

0xc78a,	// (0x00034118) bg_set_opt_pane_g3

0xc792,	// (0x00034120) bg_set_opt_pane_g4

0xc79a,	// (0x00034128) bg_set_opt_pane_g5

0xc7a2,	// (0x00034130) bg_set_opt_pane_g6

0xc7aa,	// (0x00034138) bg_set_opt_pane_g7

0xc7b2,	// (0x00034140) bg_set_opt_pane_g8

0xc7ba,	// (0x00034148) bg_set_opt_pane_g9

0x0008,

0xf676,	// (0x00037004) bg_set_opt_pane_g

0xf33d,	// (0x00036ccb) control_top_pane_stacon_ParamLimits

0xf33d,	// (0x00036ccb) control_top_pane_stacon

0xf390,	// (0x00036d1e) signal_pane_stacon_ParamLimits

0xf390,	// (0x00036d1e) signal_pane_stacon

0xcd11,	// (0x0003469f) stacon_top_pane_g1_ParamLimits

0xcd11,	// (0x0003469f) stacon_top_pane_g1

0xf3b5,	// (0x00036d43) title_pane_stacon_ParamLimits

0xf3b5,	// (0x00036d43) title_pane_stacon

0xf3df,	// (0x00036d6d) uni_indicator_pane_stacon_ParamLimits

0xf3df,	// (0x00036d6d) uni_indicator_pane_stacon

0xf3f4,	// (0x00036d82) battery_pane_stacon_ParamLimits

0xf3f4,	// (0x00036d82) battery_pane_stacon

0xf438,	// (0x00036dc6) control_bottom_pane_stacon_ParamLimits

0xf438,	// (0x00036dc6) control_bottom_pane_stacon

0xf45b,	// (0x00036de9) navi_pane_stacon_ParamLimits

0xf45b,	// (0x00036de9) navi_pane_stacon

0xcd33,	// (0x000346c1) stacon_bottom_pane_g1_ParamLimits

0xcd33,	// (0x000346c1) stacon_bottom_pane_g1

0xf100,	// (0x00036a8e) aid_levels_signal_lsc_ParamLimits

0xf100,	// (0x00036a8e) aid_levels_signal_lsc

0xf116,	// (0x00036aa4) signal_pane_stacon_g1_ParamLimits

0xf116,	// (0x00036aa4) signal_pane_stacon_g1

0xf12a,	// (0x00036ab8) signal_pane_stacon_g2_ParamLimits

0xf12a,	// (0x00036ab8) signal_pane_stacon_g2

0x0001,

0xf689,	// (0x00037017) signal_pane_stacon_g_ParamLimits

0xf689,	// (0x00037017) signal_pane_stacon_g

0xf15f,	// (0x00036aed) title_pane_stacon_t1_ParamLimits

0xf15f,	// (0x00036aed) title_pane_stacon_t1

0xc9c9,	// (0x00034357) uni_indicator_pane_stacon_g1

0xc9d3,	// (0x00034361) uni_indicator_pane_stacon_g2

0xc9dd,	// (0x0003436b) uni_indicator_pane_stacon_g3

0xc9e7,	// (0x00034375) uni_indicator_pane_stacon_g4

0x0003,

0xf695,	// (0x00037023) uni_indicator_pane_stacon_g

0xf184,	// (0x00036b12) control_top_pane_stacon_g1

0xf18c,	// (0x00036b1a) control_top_pane_stacon_t1_ParamLimits

0xf18c,	// (0x00036b1a) control_top_pane_stacon_t1

0xf1c3,	// (0x00036b51) aid_levels_battery_lsc_ParamLimits

0xf1c3,	// (0x00036b51) aid_levels_battery_lsc

0xf1da,	// (0x00036b68) battery_pane_stacon_g1_ParamLimits

0xf1da,	// (0x00036b68) battery_pane_stacon_g1

0xf1ed,	// (0x00036b7b) battery_pane_stacon_g2_ParamLimits

0xf1ed,	// (0x00036b7b) battery_pane_stacon_g2

0x0001,

0xf69e,	// (0x0003702c) battery_pane_stacon_g_ParamLimits

0xf69e,	// (0x0003702c) battery_pane_stacon_g

0xf22b,	// (0x00036bb9) navi_icon_pane_stacon

0xf23f,	// (0x00036bcd) navi_navi_pane_stacon

0xf22b,	// (0x00036bb9) navi_text_pane_stacon

0xf184,	// (0x00036b12) control_bottom_pane_stacon_g1

0xf253,	// (0x00036be1) control_bottom_pane_stacon_t1_ParamLimits

0xf253,	// (0x00036be1) control_bottom_pane_stacon_t1

0x9804,	// (0x00031192) grid_app_pane_ParamLimits

0x9804,	// (0x00031192) grid_app_pane

0x983c,	// (0x000311ca) scroll_pane_cp15_ParamLimits

0x983c,	// (0x000311ca) scroll_pane_cp15

0x9851,	// (0x000311df) cell_app_pane_ParamLimits

0x9851,	// (0x000311df) cell_app_pane

0x9896,	// (0x00031224) cell_app_pane_g1_ParamLimits

0x9896,	// (0x00031224) cell_app_pane_g1

0xca0b,	// (0x00034399) cell_app_pane_g2_ParamLimits

0xca0b,	// (0x00034399) cell_app_pane_g2

0x0001,

0xf6a3,	// (0x00037031) cell_app_pane_g_ParamLimits

0xf6a3,	// (0x00037031) cell_app_pane_g

0x98ba,	// (0x00031248) cell_app_pane_t1_ParamLimits

0x98ba,	// (0x00031248) cell_app_pane_t1

0xca17,	// (0x000343a5) grid_highlight_pane_ParamLimits

0xca17,	// (0x000343a5) grid_highlight_pane

0xc77a,	// (0x00034108) cell_highlight_pane_g1

0xc782,	// (0x00034110) cell_highlight_pane_g2

0xc78a,	// (0x00034118) cell_highlight_pane_g3

0xc792,	// (0x00034120) cell_highlight_pane_g4

0xc79a,	// (0x00034128) cell_highlight_pane_g5

0xc7a2,	// (0x00034130) cell_highlight_pane_g6

0xc7aa,	// (0x00034138) cell_highlight_pane_g7

0xc7b2,	// (0x00034140) cell_highlight_pane_g8

0xc7ba,	// (0x00034148) cell_highlight_pane_g9

0xc306,	// (0x00033c94) cell_highlight_pane_g10

0x0009,

0xf651,	// (0x00036fdf) cell_highlight_pane_g

0xca28,	// (0x000343b6) bg_scroll_pane

0x98da,	// (0x00031268) scroll_handle_pane

0xca6f,	// (0x000343fd) scroll_bg_pane_g1

0xca84,	// (0x00034412) scroll_bg_pane_g2

0xca9c,	// (0x0003442a) scroll_bg_pane_g3

0x0002,

0xf6a8,	// (0x00037036) scroll_bg_pane_g

0x98ee,	// (0x0003127c) scroll_handle_focus_pane_ParamLimits

0x98ee,	// (0x0003127c) scroll_handle_focus_pane

0xca6f,	// (0x000343fd) scroll_handle_pane_g1

0xcab1,	// (0x0003443f) scroll_handle_pane_g2

0xca9c,	// (0x0003442a) scroll_handle_pane_g3

0x0002,

0xf6af,	// (0x0003703d) scroll_handle_pane_g

0xc7ff,	// (0x0003418d) bg_popup_sub_pane_cp21_ParamLimits

0xc7ff,	// (0x0003418d) bg_popup_sub_pane_cp21

0x98fb,	// (0x00031289) popup_fep_japan_predictive_window_t1_ParamLimits

0x98fb,	// (0x00031289) popup_fep_japan_predictive_window_t1

0x9912,	// (0x000312a0) popup_fep_japan_predictive_window_t2_ParamLimits

0x9912,	// (0x000312a0) popup_fep_japan_predictive_window_t2

0x9945,	// (0x000312d3) popup_fep_japan_predictive_window_t3_ParamLimits

0x9945,	// (0x000312d3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6b6,	// (0x00037044) popup_fep_japan_predictive_window_t_ParamLimits

0xf6b6,	// (0x00037044) popup_fep_japan_predictive_window_t

0xc310,	// (0x00033c9e) bg_popup_sub_pane_cp23

0x997c,	// (0x0003130a) listscroll_japin_cand_pane

0xcac5,	// (0x00034453) popup_fep_japan_candidate_window_t1

0xcad3,	// (0x00034461) candidate_pane_ParamLimits

0xcad3,	// (0x00034461) candidate_pane

0x9984,	// (0x00031312) scroll_pane_cp30

0xcae5,	// (0x00034473) list_single_popup_jap_candidate_pane_ParamLimits

0xcae5,	// (0x00034473) list_single_popup_jap_candidate_pane

0xc310,	// (0x00033c9e) list_highlight_pane_cp30

0xcafa,	// (0x00034488) list_single_popup_jap_candidate_pane_t1

0xcb09,	// (0x00034497) level_1_signal

0xcb16,	// (0x000344a4) level_2_signal

0xcb23,	// (0x000344b1) level_3_signal

0xcb30,	// (0x000344be) level_4_signal

0xcb3d,	// (0x000344cb) level_5_signal

0xcb4a,	// (0x000344d8) level_6_signal

0xcb57,	// (0x000344e5) level_7_signal

0xcb09,	// (0x00034497) level_1_battery

0xcb16,	// (0x000344a4) level_2_battery

0xcb23,	// (0x000344b1) level_3_battery

0xcb30,	// (0x000344be) level_4_battery

0xcb3d,	// (0x000344cb) level_5_battery

0xcb4a,	// (0x000344d8) level_6_battery

0xcb57,	// (0x000344e5) level_7_battery

0xcb7c,	// (0x0003450a) list_menu_pane_ParamLimits

0xcb7c,	// (0x0003450a) list_menu_pane

0xcb92,	// (0x00034520) scroll_pane_cp25_ParamLimits

0xcb92,	// (0x00034520) scroll_pane_cp25

0x998c,	// (0x0003131a) list_double2_graphic_pane_cp2_ParamLimits

0x998c,	// (0x0003131a) list_double2_graphic_pane_cp2

0x998c,	// (0x0003131a) list_double2_large_graphic_pane_cp2_ParamLimits

0x998c,	// (0x0003131a) list_double2_large_graphic_pane_cp2

0x998c,	// (0x0003131a) list_double2_pane_cp2_ParamLimits

0x998c,	// (0x0003131a) list_double2_pane_cp2

0x998c,	// (0x0003131a) list_double_graphic_pane_cp2_ParamLimits

0x998c,	// (0x0003131a) list_double_graphic_pane_cp2

0x998c,	// (0x0003131a) list_double_large_graphic_pane_cp2_ParamLimits

0x998c,	// (0x0003131a) list_double_large_graphic_pane_cp2

0x998c,	// (0x0003131a) list_double_number_pane_cp2_ParamLimits

0x998c,	// (0x0003131a) list_double_number_pane_cp2

0x998c,	// (0x0003131a) list_double_pane_cp2_ParamLimits

0x998c,	// (0x0003131a) list_double_pane_cp2

0x999b,	// (0x00031329) list_single_2graphic_pane_cp2_ParamLimits

0x999b,	// (0x00031329) list_single_2graphic_pane_cp2

0x999b,	// (0x00031329) list_single_graphic_heading_pane_cp2_ParamLimits

0x999b,	// (0x00031329) list_single_graphic_heading_pane_cp2

0x999b,	// (0x00031329) list_single_graphic_pane_cp2_ParamLimits

0x999b,	// (0x00031329) list_single_graphic_pane_cp2

0x999b,	// (0x00031329) list_single_heading_pane_cp2_ParamLimits

0x999b,	// (0x00031329) list_single_heading_pane_cp2

0xcbbb,	// (0x00034549) list_single_large_graphic_pane_cp2_ParamLimits

0xcbbb,	// (0x00034549) list_single_large_graphic_pane_cp2

0x999b,	// (0x00031329) list_single_number_heading_pane_cp2_ParamLimits

0x999b,	// (0x00031329) list_single_number_heading_pane_cp2

0x999b,	// (0x00031329) list_single_number_pane_cp2_ParamLimits

0x999b,	// (0x00031329) list_single_number_pane_cp2

0x99ad,	// (0x0003133b) list_single_pane_cp2_ParamLimits

0x99ad,	// (0x0003133b) list_single_pane_cp2

0xcbd5,	// (0x00034563) bg_popup_sub_pane_cp22

0xf323,	// (0x00036cb1) popup_side_volume_key_window_g1

0xf32f,	// (0x00036cbd) popup_side_volume_key_window_t1

0x9a75,	// (0x00031403) volume_small_pane_cp1

0xc35e,	// (0x00033cec) bg_popup_sub_pane_cp24_ParamLimits

0xc35e,	// (0x00033cec) bg_popup_sub_pane_cp24

0xcbeb,	// (0x00034579) fep_china_uni_candidate_pane_ParamLimits

0xcbeb,	// (0x00034579) fep_china_uni_candidate_pane

0xcbff,	// (0x0003458d) fep_china_uni_entry_pane

0xcc0f,	// (0x0003459d) popup_fep_china_uni_window_g1

0x9a7d,	// (0x0003140b) fep_china_uni_entry_pane_g1

0x9a85,	// (0x00031413) fep_china_uni_entry_pane_g2

0x0001,

0xf6e7,	// (0x00037075) fep_china_uni_entry_pane_g

0xcc2b,	// (0x000345b9) fep_entry_item_pane

0xcc35,	// (0x000345c3) fep_candidate_item_pane

0x9a8d,	// (0x0003141b) fep_china_uni_candidate_pane_g1

0xcc3d,	// (0x000345cb) fep_china_uni_candidate_pane_g2

0xcc45,	// (0x000345d3) fep_china_uni_candidate_pane_g3

0x9a95,	// (0x00031423) fep_china_uni_candidate_pane_g4

0x0003,

0xf6ec,	// (0x0003707a) fep_china_uni_candidate_pane_g

0xc306,	// (0x00033c94) fep_entry_item_pane_g1

0xcc4d,	// (0x000345db) fep_entry_item_pane_t1_ParamLimits

0xcc4d,	// (0x000345db) fep_entry_item_pane_t1

0xcc63,	// (0x000345f1) fep_candidate_item_pane_t1_ParamLimits

0xcc63,	// (0x000345f1) fep_candidate_item_pane_t1

0xcc78,	// (0x00034606) fep_candidate_item_pane_t2_ParamLimits

0xcc78,	// (0x00034606) fep_candidate_item_pane_t2

0x0001,

0xf6f5,	// (0x00037083) fep_candidate_item_pane_t_ParamLimits

0xf6f5,	// (0x00037083) fep_candidate_item_pane_t

0xc36c,	// (0x00033cfa) list_highlight_pane_cp31_ParamLimits

0xc36c,	// (0x00033cfa) list_highlight_pane_cp31

0xcc8a,	// (0x00034618) level_1_signal_lsc

0xcc93,	// (0x00034621) level_2_signal_lsc

0xcc9c,	// (0x0003462a) level_3_signal_lsc

0xcca5,	// (0x00034633) level_4_signal_lsc

0xccae,	// (0x0003463c) level_5_signal_lsc

0xccb7,	// (0x00034645) level_6_signal_lsc

0xccc0,	// (0x0003464e) level_7_signal_lsc

0xccc0,	// (0x0003464e) level_1_battery_lsc

0xccc9,	// (0x00034657) level_2_battery_lsc

0xccd2,	// (0x00034660) level_3_battery_lsc

0xccdb,	// (0x00034669) level_4_battery_lsc

0xcce4,	// (0x00034672) level_5_battery_lsc

0xcced,	// (0x0003467b) level_6_battery_lsc

0xcc8a,	// (0x00034618) level_7_battery_lsc

0xccf6,	// (0x00034684) scroll_handle_focus_pane_g1

0xccff,	// (0x0003468d) scroll_handle_focus_pane_g2

0xcd08,	// (0x00034696) scroll_handle_focus_pane_g3

0x0002,

0xf6fa,	// (0x00037088) scroll_handle_focus_pane_g

0x8ab1,	// (0x0003043f) list_single_2graphic_pane_g1_ParamLimits

0x8ab1,	// (0x0003043f) list_single_2graphic_pane_g1

0x86a5,	// (0x00030033) list_single_2graphic_pane_g2_ParamLimits

0x86a5,	// (0x00030033) list_single_2graphic_pane_g2

0xe84a,	// (0x000361d8) list_single_2graphic_pane_g3_ParamLimits

0xe84a,	// (0x000361d8) list_single_2graphic_pane_g3

0x8abd,	// (0x0003044b) list_single_2graphic_pane_g4_ParamLimits

0x8abd,	// (0x0003044b) list_single_2graphic_pane_g4

0x0003,

0xf701,	// (0x0003708f) list_single_2graphic_pane_g_ParamLimits

0xf701,	// (0x0003708f) list_single_2graphic_pane_g

0x8ace,	// (0x0003045c) list_single_2graphic_pane_t1_ParamLimits

0x8ace,	// (0x0003045c) list_single_2graphic_pane_t1

0x8afc,	// (0x0003048a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8afc,	// (0x0003048a) list_double2_graphic_large_graphic_pane_g1

0x86f8,	// (0x00030086) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x86f8,	// (0x00030086) list_double2_graphic_large_graphic_pane_g2

0xe8d0,	// (0x0003625e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xe8d0,	// (0x0003625e) list_double2_graphic_large_graphic_pane_g3

0xea11,	// (0x0003639f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xea11,	// (0x0003639f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf70a,	// (0x00037098) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf70a,	// (0x00037098) list_double2_graphic_large_graphic_pane_g

0xea1d,	// (0x000363ab) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xea1d,	// (0x000363ab) list_double2_graphic_large_graphic_pane_t1

0xea33,	// (0x000363c1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xea33,	// (0x000363c1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf713,	// (0x000370a1) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf713,	// (0x000370a1) list_double2_graphic_large_graphic_pane_t

0x9b10,	// (0x0003149e) popup_fast_swap_window_ParamLimits

0x9b10,	// (0x0003149e) popup_fast_swap_window

0x9b2c,	// (0x000314ba) popup_side_volume_key_window

0xcdbe,	// (0x0003474c) stacon_top_pane

0xcdc8,	// (0x00034756) status_pane_ParamLimits

0xcdc8,	// (0x00034756) status_pane

0xc2fc,	// (0x00033c8a) status_small_pane

0xc310,	// (0x00033c9e) control_pane

0xc310,	// (0x00033c9e) stacon_bottom_pane

0xc705,	// (0x00034093) scroll_pane_cp121

0xc6fc,	// (0x0003408a) set_content_pane

0x9a9d,	// (0x0003142b) bg_active_tab_pane_g1_cp1

0x9aa6,	// (0x00031434) bg_active_tab_pane_g2_cp1

0x9aaf,	// (0x0003143d) bg_active_tab_pane_g3_cp1

0x9a9d,	// (0x0003142b) bg_passive_tab_pane_g1_cp1

0x9aa6,	// (0x00031434) bg_passive_tab_pane_g2_cp1

0x9aaf,	// (0x0003143d) bg_passive_tab_pane_g3_cp1

0x9ab8,	// (0x00031446) bg_active_tab_pane_g1_cp2

0x9aa6,	// (0x00031434) bg_active_tab_pane_g2_cp2

0x9ac1,	// (0x0003144f) bg_active_tab_pane_g3_cp2

0x9ab8,	// (0x00031446) bg_passive_tab_pane_g1_cp2

0x9aa6,	// (0x00031434) bg_passive_tab_pane_g2_cp2

0x9ac1,	// (0x0003144f) bg_passive_tab_pane_g3_cp2

0x9aca,	// (0x00031458) bg_active_tab_pane_g1_cp3

0x9aa6,	// (0x00031434) bg_active_tab_pane_g2_cp3

0x9ad3,	// (0x00031461) bg_active_tab_pane_g3_cp3

0x9aca,	// (0x00031458) bg_passive_tab_pane_g1_cp3

0x9aa6,	// (0x00031434) bg_passive_tab_pane_g2_cp3

0x9ad3,	// (0x00031461) bg_passive_tab_pane_g3_cp3

0x9adc,	// (0x0003146a) bg_active_tab_pane_g1_cp4

0x9aa6,	// (0x00031434) bg_active_tab_pane_g2_cp4

0x9ae7,	// (0x00031475) bg_active_tab_pane_g3_cp4

0x9adc,	// (0x0003146a) bg_passive_tab_pane_g1_cp4

0x9aa6,	// (0x00031434) bg_passive_tab_pane_g2_cp4

0x9ae7,	// (0x00031475) bg_passive_tab_pane_g3_cp4

0x9af2,	// (0x00031480) bg_active_tab_pane_g1_cp5

0x9aa6,	// (0x00031434) bg_active_tab_pane_g2_cp5

0x9afb,	// (0x00031489) bg_active_tab_pane_g3_cp5

0x9af2,	// (0x00031480) bg_passive_tab_pane_g1_cp5

0x9aa6,	// (0x00031434) bg_passive_tab_pane_g2_cp5

0x9afb,	// (0x00031489) bg_passive_tab_pane_g3_cp5

0x3cb3,	// (0x0002b641) list_set_graphic_pane_ParamLimits

0x3cb3,	// (0x0002b641) list_set_graphic_pane

0xc310,	// (0x00033c9e) bg_set_opt_pane_cp4

0xcd4f,	// (0x000346dd) list_set_graphic_pane_g1_ParamLimits

0xcd4f,	// (0x000346dd) list_set_graphic_pane_g1

0xcd5b,	// (0x000346e9) list_set_graphic_pane_g2_ParamLimits

0xcd5b,	// (0x000346e9) list_set_graphic_pane_g2

0x0001,

0xf718,	// (0x000370a6) list_set_graphic_pane_g_ParamLimits

0xf718,	// (0x000370a6) list_set_graphic_pane_g

0x0009,

0xfaa9,	// (0x00037437) volume_small_pane_cp_g

0x9b04,	// (0x00031492) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9b04,	// (0x00031492) list_double2_large_graphic_pane_g1_cp2

0xcd7d,	// (0x0003470b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xcd7d,	// (0x0003470b) list_double2_large_graphic_pane_g2_cp2

0xcd8e,	// (0x0003471c) list_double2_large_graphic_pane_g3_cp2

0xcd96,	// (0x00034724) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xcd96,	// (0x00034724) list_double2_large_graphic_pane_t1_cp2

0xcdac,	// (0x0003473a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xcdac,	// (0x0003473a) list_double2_large_graphic_pane_t2_cp2

0xb022,	// (0x000329b0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb022,	// (0x000329b0) list_double_large_graphic_pane_g1_cp2

0x327f,	// (0x0002ac0d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x327f,	// (0x0002ac0d) list_double_large_graphic_pane_g2_cp2

0xcee4,	// (0x00034872) list_double_large_graphic_pane_g3_cp2

0x3290,	// (0x0002ac1e) list_double_large_graphic_pane_g4_cp

0x3298,	// (0x0002ac26) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3298,	// (0x0002ac26) list_double_large_graphic_pane_t1_cp2

0x32af,	// (0x0002ac3d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x32af,	// (0x0002ac3d) list_double_large_graphic_pane_t2_cp2

0xcdd6,	// (0x00034764) list_double2_graphic_pane_g1_cp2_ParamLimits

0xcdd6,	// (0x00034764) list_double2_graphic_pane_g1_cp2

0xcde4,	// (0x00034772) list_double2_graphic_pane_g2_cp2_ParamLimits

0xcde4,	// (0x00034772) list_double2_graphic_pane_g2_cp2

0xcdf5,	// (0x00034783) list_double2_graphic_pane_g3_cp2

0xcdff,	// (0x0003478d) list_double2_graphic_pane_t1_cp2_ParamLimits

0xcdff,	// (0x0003478d) list_double2_graphic_pane_t1_cp2

0xce15,	// (0x000347a3) list_double2_graphic_pane_t2_cp2_ParamLimits

0xce15,	// (0x000347a3) list_double2_graphic_pane_t2_cp2

0xce27,	// (0x000347b5) list_single_number_heading_pane_g1_cp2_ParamLimits

0xce27,	// (0x000347b5) list_single_number_heading_pane_g1_cp2

0xce33,	// (0x000347c1) list_single_number_heading_pane_g2_cp2

0xce3b,	// (0x000347c9) list_single_number_heading_pane_t1_cp2_ParamLimits

0xce3b,	// (0x000347c9) list_single_number_heading_pane_t1_cp2

0xce51,	// (0x000347df) list_single_number_heading_pane_t2_cp2_ParamLimits

0xce51,	// (0x000347df) list_single_number_heading_pane_t2_cp2

0xce63,	// (0x000347f1) list_single_number_heading_pane_t3_cp2_ParamLimits

0xce63,	// (0x000347f1) list_single_number_heading_pane_t3_cp2

0xce27,	// (0x000347b5) list_single_heading_pane_g1_cp2_ParamLimits

0xce27,	// (0x000347b5) list_single_heading_pane_g1_cp2

0xce33,	// (0x000347c1) list_single_heading_pane_g2_cp2

0xce3b,	// (0x000347c9) list_single_heading_pane_t1_cp2_ParamLimits

0xce3b,	// (0x000347c9) list_single_heading_pane_t1_cp2

0x3078,	// (0x0002aa06) list_single_heading_pane_t2_cp2_ParamLimits

0x3078,	// (0x0002aa06) list_single_heading_pane_t2_cp2

0x2fc0,	// (0x0002a94e) list_double_graphic_pane_g1_cp2_ParamLimits

0x2fc0,	// (0x0002a94e) list_double_graphic_pane_g1_cp2

0x2fcc,	// (0x0002a95a) list_double_graphic_pane_g2_cp2_ParamLimits

0x2fcc,	// (0x0002a95a) list_double_graphic_pane_g2_cp2

0x2fdb,	// (0x0002a969) list_double_graphic_pane_g3_cp2

0x2fe3,	// (0x0002a971) list_double_graphic_pane_t1_cp2_ParamLimits

0x2fe3,	// (0x0002a971) list_double_graphic_pane_t1_cp2

0x2ff9,	// (0x0002a987) list_double_graphic_pane_t2_cp2_ParamLimits

0x2ff9,	// (0x0002a987) list_double_graphic_pane_t2_cp2

0xced8,	// (0x00034866) list_double_number_pane_g1_cp2_ParamLimits

0xced8,	// (0x00034866) list_double_number_pane_g1_cp2

0xcee4,	// (0x00034872) list_double_number_pane_g2_cp2

0x2f84,	// (0x0002a912) list_double_number_pane_t1_cp2_ParamLimits

0x2f84,	// (0x0002a912) list_double_number_pane_t1_cp2

0x2f98,	// (0x0002a926) list_double_number_pane_t2_cp2_ParamLimits

0x2f98,	// (0x0002a926) list_double_number_pane_t2_cp2

0x2fae,	// (0x0002a93c) list_double_number_pane_t3_cp2_ParamLimits

0x2fae,	// (0x0002a93c) list_double_number_pane_t3_cp2

0x2e6d,	// (0x0002a7fb) list_single_graphic_pane_g1_cp2_ParamLimits

0x2e6d,	// (0x0002a7fb) list_single_graphic_pane_g1_cp2

0xcf41,	// (0x000348cf) list_single_graphic_pane_g2_cp2_ParamLimits

0xcf41,	// (0x000348cf) list_single_graphic_pane_g2_cp2

0xcf4d,	// (0x000348db) list_single_graphic_pane_g3_cp2

0x2e43,	// (0x0002a7d1) list_single_graphic_pane_t1_cp2_ParamLimits

0x2e43,	// (0x0002a7d1) list_single_graphic_pane_t1_cp2

0xcf41,	// (0x000348cf) list_single_number_pane_g1_cp2_ParamLimits

0xcf41,	// (0x000348cf) list_single_number_pane_g1_cp2

0xcf4d,	// (0x000348db) list_single_number_pane_g2_cp2

0x2e43,	// (0x0002a7d1) list_single_number_pane_t1_cp2_ParamLimits

0x2e43,	// (0x0002a7d1) list_single_number_pane_t1_cp2

0x2e59,	// (0x0002a7e7) list_single_number_pane_t2_cp2_ParamLimits

0x2e59,	// (0x0002a7e7) list_single_number_pane_t2_cp2

0xcd7d,	// (0x0003470b) list_double2_pane_g1_cp2_ParamLimits

0xcd7d,	// (0x0003470b) list_double2_pane_g1_cp2

0xcd8e,	// (0x0003471c) list_double2_pane_g2_cp2

0xceb0,	// (0x0003483e) list_double2_pane_t1_cp2_ParamLimits

0xceb0,	// (0x0003483e) list_double2_pane_t1_cp2

0xcec6,	// (0x00034854) list_double2_pane_t2_cp2_ParamLimits

0xcec6,	// (0x00034854) list_double2_pane_t2_cp2

0xced8,	// (0x00034866) list_double_pane_g1_cp2_ParamLimits

0xced8,	// (0x00034866) list_double_pane_g1_cp2

0xcee4,	// (0x00034872) list_double_pane_g2_cp2

0xceec,	// (0x0003487a) list_double_pane_t1_cp2_ParamLimits

0xceec,	// (0x0003487a) list_double_pane_t1_cp2

0xcf02,	// (0x00034890) list_double_pane_t2_cp2_ParamLimits

0xcf02,	// (0x00034890) list_double_pane_t2_cp2

0x9b46,	// (0x000314d4) list_single_pane_cp2_g3

0xcf41,	// (0x000348cf) list_single_pane_g1_cp2_ParamLimits

0xcf41,	// (0x000348cf) list_single_pane_g1_cp2

0xcf4d,	// (0x000348db) list_single_pane_g2_cp2

0xcf55,	// (0x000348e3) list_single_pane_t1_cp2_ParamLimits

0xcf55,	// (0x000348e3) list_single_pane_t1_cp2

0x9b4e,	// (0x000314dc) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9b4e,	// (0x000314dc) list_single_large_graphic_pane_g1_cp2

0xcf6d,	// (0x000348fb) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xcf6d,	// (0x000348fb) list_single_large_graphic_pane_g2_cp2

0xcf79,	// (0x00034907) list_single_large_graphic_pane_g3_cp2

0x9b5a,	// (0x000314e8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9b5a,	// (0x000314e8) list_single_large_graphic_pane_g4_cp1

0xcf81,	// (0x0003490f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xcf81,	// (0x0003490f) list_single_large_graphic_pane_t1_cp2

0x2e0f,	// (0x0002a79d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2e0f,	// (0x0002a79d) list_single_graphic_heading_pane_g1_cp2

0x2ddc,	// (0x0002a76a) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2ddc,	// (0x0002a76a) list_single_graphic_heading_pane_g4_cp2

0xcf4d,	// (0x000348db) list_single_graphic_heading_pane_g5_cp2

0x2e1b,	// (0x0002a7a9) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2e1b,	// (0x0002a7a9) list_single_graphic_heading_pane_t1_cp2

0x2e31,	// (0x0002a7bf) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2e31,	// (0x0002a7bf) list_single_graphic_heading_pane_t2_cp2

0x2dd0,	// (0x0002a75e) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2dd0,	// (0x0002a75e) list_single_2graphic_pane_g1_cp2

0x2ddc,	// (0x0002a76a) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2ddc,	// (0x0002a76a) list_single_2graphic_pane_g2_cp2

0xcf4d,	// (0x000348db) list_single_2graphic_pane_g3_cp2

0x2ded,	// (0x0002a77b) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2ded,	// (0x0002a77b) list_single_2graphic_pane_g4_cp2

0x2df9,	// (0x0002a787) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2df9,	// (0x0002a787) list_single_2graphic_pane_t1_cp2

0xc306,	// (0x00033c94) list_highlight_pane_g10_cp1

0x29b8,	// (0x0002a346) list_highlight_pane_g1_cp1

0x29c0,	// (0x0002a34e) list_highlight_pane_g2_cp1

0x29c8,	// (0x0002a356) list_highlight_pane_g3_cp1

0x29d0,	// (0x0002a35e) list_highlight_pane_g4_cp1

0x29d8,	// (0x0002a366) list_highlight_pane_g5_cp1

0x29e0,	// (0x0002a36e) list_highlight_pane_g6_cp1

0x29e8,	// (0x0002a376) list_highlight_pane_g7_cp1

0x29f0,	// (0x0002a37e) list_highlight_pane_g8_cp1

0x29f8,	// (0x0002a386) list_highlight_pane_g9_cp1

0xadaf,	// (0x0003273d) form_field_slider_pane_t3

0xadbd,	// (0x0003274b) form_field_slider_pane_t4

0x14fa,	// (0x00028e88) slider_form_pane_ParamLimits

0x14fa,	// (0x00028e88) slider_form_pane

0xc310,	// (0x00033c9e) control_abbreviations

0xc310,	// (0x00033c9e) control_conventions

0xc310,	// (0x00033c9e) control_definitions

0xc310,	// (0x00033c9e) format_table_attribute

0xaff9,	// (0x00032987) bg_popup_preview_window_pane_g9

0xc310,	// (0x00033c9e) format_table_data2

0xc310,	// (0x00033c9e) format_table_data3

0xc310,	// (0x00033c9e) format_table_data_example

0x0008,

0xc310,	// (0x00033c9e) intro_purpose

0xf8af,	// (0x0003723d) bg_popup_preview_window_pane_g

0xc310,	// (0x00033c9e) texts_category

0xc310,	// (0x00033c9e) texts_graphics

0xcf97,	// (0x00034925) text_digital

0xcfa6,	// (0x00034934) text_primary

0xcfb5,	// (0x00034943) text_primary_small

0xcfc4,	// (0x00034952) text_secondary

0xcfd3,	// (0x00034961) text_title

0xb41c,	// (0x00032daa) bg_passive_tab_pane_g1_cp3_srt

0x9aa6,	// (0x00031434) bg_passive_tab_pane_g2_cp3_srt

0xb425,	// (0x00032db3) bg_passive_tab_pane_g3_cp3_srt

0xc35e,	// (0x00033cec) bg_active_tab_pane_cp3_srt_ParamLimits

0xc35e,	// (0x00033cec) bg_active_tab_pane_cp3_srt

0xb42e,	// (0x00032dbc) tabs_4_active_pane_srt_g1

0xb436,	// (0x00032dc4) tabs_4_active_pane_srt_t1_ParamLimits

0xb436,	// (0x00032dc4) tabs_4_active_pane_srt_t1

0xb41c,	// (0x00032daa) bg_active_tab_pane_g1_cp3_copy1

0x9aa6,	// (0x00031434) bg_active_tab_pane_g2_cp3_copy1

0xb425,	// (0x00032db3) bg_active_tab_pane_g3_cp3_copy1

0xc36c,	// (0x00033cfa) tabs_2_long_active_pane_srt_ParamLimits

0xc36c,	// (0x00033cfa) tabs_2_long_active_pane_srt

0xc36c,	// (0x00033cfa) tabs_2_long_passive_pane_srt_ParamLimits

0xc36c,	// (0x00033cfa) tabs_2_long_passive_pane_srt

0xc864,	// (0x000341f2) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc864,	// (0x000341f2) bg_passive_tab_pane_cp4_srt

0xb161,	// (0x00032aef) bg_passive_tab_pane_g1_cp4_srt

0x9aa6,	// (0x00031434) bg_passive_tab_pane_g2_cp4_srt

0xb16a,	// (0x00032af8) bg_passive_tab_pane_g3_cp4_srt

0xc36c,	// (0x00033cfa) bg_active_tab_pane_cp4_srt_ParamLimits

0xc36c,	// (0x00033cfa) bg_active_tab_pane_cp4_srt

0xb173,	// (0x00032b01) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb173,	// (0x00032b01) tabs_2_long_active_pane_srt_t1

0xb161,	// (0x00032aef) bg_active_tab_pane_g1_cp4_srt

0x9aa6,	// (0x00031434) bg_active_tab_pane_g2_cp4_srt

0xb16a,	// (0x00032af8) bg_active_tab_pane_g3_cp4_srt

0xc35e,	// (0x00033cec) tabs_3_long_active_pane_srt_ParamLimits

0xc35e,	// (0x00033cec) tabs_3_long_active_pane_srt

0xc35e,	// (0x00033cec) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc35e,	// (0x00033cec) tabs_3_long_passive_pane_cp_srt

0xc35e,	// (0x00033cec) tabs_3_long_passive_pane_srt_ParamLimits

0xc35e,	// (0x00033cec) tabs_3_long_passive_pane_srt

0xc864,	// (0x000341f2) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc864,	// (0x000341f2) bg_passive_tab_pane_cp5_srt

0x9af2,	// (0x00031480) bg_passive_tab_pane_g1_cp5_srt

0x9aa6,	// (0x00031434) bg_passive_tab_pane_g2_cp5_srt

0x9afb,	// (0x00031489) bg_passive_tab_pane_g3_cp5_srt

0xc36c,	// (0x00033cfa) bg_active_tab_pane_cp5_srt_ParamLimits

0xc36c,	// (0x00033cfa) bg_active_tab_pane_cp5_srt

0xb14b,	// (0x00032ad9) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb14b,	// (0x00032ad9) tabs_3_long_active_pane_srt_t1

0x9af2,	// (0x00031480) bg_active_tab_pane_g1_cp5_srt

0x9aa6,	// (0x00031434) bg_active_tab_pane_g2_cp5_srt

0x9afb,	// (0x00031489) bg_active_tab_pane_g3_cp5_srt

0x34b3,	// (0x0002ae41) navi_text_pane_srt_t1

0x34ab,	// (0x0002ae39) navi_icon_pane_srt_g1

0xd0be,	// (0x00034a4c) midp_editing_number_pane_srt

0xcfe2,	// (0x00034970) midp_ticker_pane_srt

0xd0c6,	// (0x00034a54) midp_ticker_pane_srt_g1

0xd0ce,	// (0x00034a5c) midp_ticker_pane_srt_g2

0x0001,

0xf737,	// (0x000370c5) midp_ticker_pane_srt_g

0xd0d6,	// (0x00034a64) midp_ticker_pane_srt_t1

0x349c,	// (0x0002ae2a) midp_editing_number_pane_t1_copy1

0x9b74,	// (0x00031502) listscroll_midp_pane

0x9b74,	// (0x00031502) midp_form_pane

0x9bdf,	// (0x0003156d) midp_info_popup_window_ParamLimits

0x9bdf,	// (0x0003156d) midp_info_popup_window

0xc7ff,	// (0x0003418d) bg_popup_sub_pane_cp50_ParamLimits

0xc7ff,	// (0x0003418d) bg_popup_sub_pane_cp50

0x11ea,	// (0x00028b78) listscroll_midp_info_pane_ParamLimits

0x11ea,	// (0x00028b78) listscroll_midp_info_pane

0x11ca,	// (0x00028b58) listscroll_form_midp_pane_ParamLimits

0x11ca,	// (0x00028b58) listscroll_form_midp_pane

0x11d6,	// (0x00028b64) scroll_bar_cp050

0x11ca,	// (0x00028b58) list_midp_pane

0xb620,	// (0x00032fae) signal_pane_g2_cp

0x10e4,	// (0x00028a72) listscroll_midp_info_pane_t1_ParamLimits

0x10e4,	// (0x00028a72) listscroll_midp_info_pane_t1

0xabe9,	// (0x00032577) listscroll_midp_info_pane_t2_ParamLimits

0xabe9,	// (0x00032577) listscroll_midp_info_pane_t2

0xac27,	// (0x000325b5) listscroll_midp_info_pane_t3_ParamLimits

0xac27,	// (0x000325b5) listscroll_midp_info_pane_t3

0xac61,	// (0x000325ef) listscroll_midp_info_pane_t4_ParamLimits

0xac61,	// (0x000325ef) listscroll_midp_info_pane_t4

0x0003,

0xf7ea,	// (0x00037178) listscroll_midp_info_pane_t_ParamLimits

0xf7ea,	// (0x00037178) listscroll_midp_info_pane_t

0xc854,	// (0x000341e2) scroll_pane_cp21

0x1084,	// (0x00028a12) form_midp_field_choice_group_pane

0xabac,	// (0x0003253a) form_midp_field_text_pane

0x10ca,	// (0x00028a58) form_midp_field_time_pane

0x10d2,	// (0x00028a60) form_midp_gauge_slider_pane

0x10db,	// (0x00028a69) form_midp_gauge_wait_pane

0xc310,	// (0x00033c9e) form_midp_image_pane

0x8b0e,	// (0x0003049c) list_single_midp_pane_ParamLimits

0x8b0e,	// (0x0003049c) list_single_midp_pane

0xab8a,	// (0x00032518) form_midp_field_text_pane_t1

0x0d7b,	// (0x00028709) input_focus_pane_cp050

0x1073,	// (0x00028a01) list_midp_form_text_pane

0x1008,	// (0x00028996) form_midp_field_choice_group_pane_t1

0x1016,	// (0x000289a4) input_focus_pane_cp051

0x102a,	// (0x000289b8) list_midp_choice_pane

0xc310,	// (0x00033c9e) status_idle_pane

0x0fec,	// (0x0002897a) form_midp_field_time_pane_t1

0xc306,	// (0x00033c94) wait_anim_pane_g2_copy1

0x0ffa,	// (0x00028988) form_midp_field_time_pane_t2

0x0001,

0xd042,	// (0x000349d0) aid_navinavi_width_2_pane

0xf7e5,	// (0x00037173) form_midp_field_time_pane_t

0xc310,	// (0x00033c9e) input_focus_pane_cp052

0xc310,	// (0x00033c9e) bg_input_focus_pane_cp040

0x0fac,	// (0x0002893a) form_midp_gauge_slider_pane_t1

0x0fba,	// (0x00028948) form_midp_gauge_slider_pane_t2

0xab6e,	// (0x000324fc) form_midp_gauge_slider_pane_t3

0xab7c,	// (0x0003250a) form_midp_gauge_slider_pane_t4

0x0003,

0xf7dc,	// (0x0003716a) form_midp_gauge_slider_pane_t

0x0fe4,	// (0x00028972) form_midp_slider_pane

0xc36c,	// (0x00033cfa) bg_input_focus_pane_cp041_ParamLimits

0xc36c,	// (0x00033cfa) bg_input_focus_pane_cp041

0x0f79,	// (0x00028907) form_midp_gauge_wait_pane_t1_ParamLimits

0x0f79,	// (0x00028907) form_midp_gauge_wait_pane_t1

0x0f8b,	// (0x00028919) form_midp_gauge_wait_pane_t2_ParamLimits

0x0f8b,	// (0x00028919) form_midp_gauge_wait_pane_t2

0x0001,

0xf7d7,	// (0x00037165) form_midp_gauge_wait_pane_t_ParamLimits

0xf7d7,	// (0x00037165) form_midp_gauge_wait_pane_t

0x0f9d,	// (0x0002892b) form_midp_wait_pane_ParamLimits

0x0f9d,	// (0x0002892b) form_midp_wait_pane

0xab38,	// (0x000324c6) form_midp_image_pane_g1

0xab41,	// (0x000324cf) form_midp_image_pane_t1

0xab50,	// (0x000324de) form_midp_image_pane_t2

0xab5f,	// (0x000324ed) form_midp_image_pane_t3

0x0002,

0xf7d0,	// (0x0003715e) form_midp_image_pane_t

0x0f3a,	// (0x000288c8) list_single_midp_pane_g1

0xeb5d,	// (0x000364eb) list_single_midp_pane_t1

0xab23,	// (0x000324b1) list_midp_form_item_pane_ParamLimits

0xab23,	// (0x000324b1) list_midp_form_item_pane

0xcfea,	// (0x00034978) list_midp_form_item_pane_t1

0xcff9,	// (0x00034987) midp_ticker_pane_g1

0xd005,	// (0x00034993) midp_ticker_pane_g2

0x0001,

0xf71d,	// (0x000370ab) midp_ticker_pane_g

0xd011,	// (0x0003499f) midp_ticker_pane_t1

0x36e9,	// (0x0002b077) midp_editing_number_pane_t1

0x36c7,	// (0x0002b055) midp_editing_number_pane

0x36d6,	// (0x0002b064) midp_ticker_pane

0x11f6,	// (0x00028b84) ai_message_heading_pane

0xc310,	// (0x00033c9e) bg_popup_window_pane_cp14

0x11fe,	// (0x00028b8c) listscroll_ai_message_pane

0x3426,	// (0x0002adb4) ai_message_heading_pane_g1_ParamLimits

0x3426,	// (0x0002adb4) ai_message_heading_pane_g1

0xb113,	// (0x00032aa1) ai_message_heading_pane_g2_ParamLimits

0xb113,	// (0x00032aa1) ai_message_heading_pane_g2

0x343e,	// (0x0002adcc) ai_message_heading_pane_g3_ParamLimits

0x343e,	// (0x0002adcc) ai_message_heading_pane_g3

0x344a,	// (0x0002add8) ai_message_heading_pane_g4_ParamLimits

0x344a,	// (0x0002add8) ai_message_heading_pane_g4

0x0003,

0xf911,	// (0x0003729f) ai_message_heading_pane_g_ParamLimits

0xf911,	// (0x0003729f) ai_message_heading_pane_g

0xb11f,	// (0x00032aad) ai_message_heading_pane_t1_ParamLimits

0xb11f,	// (0x00032aad) ai_message_heading_pane_t1

0xb139,	// (0x00032ac7) ai_message_heading_pane_t2_ParamLimits

0xb139,	// (0x00032ac7) ai_message_heading_pane_t2

0x0001,

0xf91a,	// (0x000372a8) ai_message_heading_pane_t_ParamLimits

0xf91a,	// (0x000372a8) ai_message_heading_pane_t

0x3482,	// (0x0002ae10) bg_popup_heading_pane_cp1_ParamLimits

0x3482,	// (0x0002ae10) bg_popup_heading_pane_cp1

0x3414,	// (0x0002ada2) list_ai_message_pane_ParamLimits

0x3414,	// (0x0002ada2) list_ai_message_pane

0xc854,	// (0x000341e2) scroll_pane_cp10

0x33b0,	// (0x0002ad3e) list_ai_message_pane_g1

0x33b8,	// (0x0002ad46) list_ai_message_pane_g2

0x0001,

0xf8ee,	// (0x0003727c) list_ai_message_pane_g

0x33c0,	// (0x0002ad4e) list_ai_message_pane_t1_ParamLimits

0x33c0,	// (0x0002ad4e) list_ai_message_pane_t1

0x33d5,	// (0x0002ad63) list_ai_message_pane_t2_ParamLimits

0x33d5,	// (0x0002ad63) list_ai_message_pane_t2

0x33ea,	// (0x0002ad78) list_ai_message_pane_t3_ParamLimits

0x33ea,	// (0x0002ad78) list_ai_message_pane_t3

0x33ff,	// (0x0002ad8d) list_ai_message_pane_t4_ParamLimits

0x33ff,	// (0x0002ad8d) list_ai_message_pane_t4

0x0003,

0xf8f3,	// (0x00037281) list_ai_message_pane_t_ParamLimits

0xf8f3,	// (0x00037281) list_ai_message_pane_t

0xb09f,	// (0x00032a2d) cell_ai_soft_ind_pane_ParamLimits

0xb09f,	// (0x00032a2d) cell_ai_soft_ind_pane

0xd023,	// (0x000349b1) cell_ai_soft_ind_pane_g1_ParamLimits

0xd023,	// (0x000349b1) cell_ai_soft_ind_pane_g1

0xc310,	// (0x00033c9e) grid_highlight_cp1

0xd030,	// (0x000349be) text_secondary_cp56_ParamLimits

0xd030,	// (0x000349be) text_secondary_cp56

0x3370,	// (0x0002acfe) example_general_pane_ParamLimits

0x3370,	// (0x0002acfe) example_general_pane

0x337c,	// (0x0002ad0a) example_parent_pane_g1_ParamLimits

0x337c,	// (0x0002ad0a) example_parent_pane_g1

0x3388,	// (0x0002ad16) example_parent_pane_t1_ParamLimits

0x3388,	// (0x0002ad16) example_parent_pane_t1

0xa2a9,	// (0x00031c37) popup_preview_text_window_ParamLimits

0xa2a9,	// (0x00031c37) popup_preview_text_window

0xcf39,	// (0x000348c7) list_single_pane_cp2_g4

0xc53e,	// (0x00033ecc) bg_popup_preview_window_pane_ParamLimits

0xc53e,	// (0x00033ecc) bg_popup_preview_window_pane

0xb001,	// (0x0003298f) popup_preview_text_window_t1_ParamLimits

0xb001,	// (0x0003298f) popup_preview_text_window_t1

0x30e8,	// (0x0002aa76) popup_preview_text_window_t2_ParamLimits

0x30e8,	// (0x0002aa76) popup_preview_text_window_t2

0x3131,	// (0x0002aabf) popup_preview_text_window_t3_ParamLimits

0x3131,	// (0x0002aabf) popup_preview_text_window_t3

0x3176,	// (0x0002ab04) popup_preview_text_window_t4_ParamLimits

0x3176,	// (0x0002ab04) popup_preview_text_window_t4

0x0004,

0xf8c2,	// (0x00037250) popup_preview_text_window_t_ParamLimits

0xf8c2,	// (0x00037250) popup_preview_text_window_t

0x31f4,	// (0x0002ab82) scroll_pane_cp11

0x0c77,	// (0x00028605) bg_popup_preview_window_pane_g1

0xafc1,	// (0x0003294f) bg_popup_preview_window_pane_g2

0xafc9,	// (0x00032957) bg_popup_preview_window_pane_g3

0xafd1,	// (0x0003295f) bg_popup_preview_window_pane_g4

0xafd9,	// (0x00032967) bg_popup_preview_window_pane_g5

0xafe1,	// (0x0003296f) bg_popup_preview_window_pane_g6

0xafe9,	// (0x00032977) bg_popup_preview_window_pane_g7

0xaff1,	// (0x0003297f) bg_popup_preview_window_pane_g8

0xe7e3,	// (0x00036171) aid_popup_width_pane

0xa225,	// (0x00031bb3) popup_midp_note_alarm_window_ParamLimits

0xa225,	// (0x00031bb3) popup_midp_note_alarm_window

0xc716,	// (0x000340a4) data_form_pane_ParamLimits

0x8917,	// (0x000302a5) form_field_data_pane_g1

0x8921,	// (0x000302af) form_field_data_pane_t1_ParamLimits

0xc722,	// (0x000340b0) input_focus_pane_ParamLimits

0x893b,	// (0x000302c9) data_form_wide_pane_ParamLimits

0x894c,	// (0x000302da) form_field_data_wide_pane_g1

0x8958,	// (0x000302e6) form_field_data_wide_pane_t1_ParamLimits

0xc616,	// (0x00033fa4) input_focus_pane_cp6_ParamLimits

0x9774,	// (0x00031102) input_popup_find_pane_g1_ParamLimits

0x9774,	// (0x00031102) input_popup_find_pane_g1

0xf1fe,	// (0x00036b8c) aid_navi_side_left_pane

0xf213,	// (0x00036ba1) aid_navi_side_right_pane

0x2ab3,	// (0x0002a441) bg_popup_window_pane_cp30_ParamLimits

0x2ab3,	// (0x0002a441) bg_popup_window_pane_cp30

0x2b2d,	// (0x0002a4bb) popup_midp_note_alarm_window_g1_ParamLimits

0x2b2d,	// (0x0002a4bb) popup_midp_note_alarm_window_g1

0x2b5d,	// (0x0002a4eb) popup_midp_note_alarm_window_t1_ParamLimits

0x2b5d,	// (0x0002a4eb) popup_midp_note_alarm_window_t1

0xae02,	// (0x00032790) popup_midp_note_alarm_window_t2_ParamLimits

0xae02,	// (0x00032790) popup_midp_note_alarm_window_t2

0xaeb0,	// (0x0003283e) popup_midp_note_alarm_window_t3_ParamLimits

0xaeb0,	// (0x0003283e) popup_midp_note_alarm_window_t3

0xaed8,	// (0x00032866) popup_midp_note_alarm_window_t4_ParamLimits

0xaed8,	// (0x00032866) popup_midp_note_alarm_window_t4

0x2cf4,	// (0x0002a682) popup_midp_note_alarm_window_t5_ParamLimits

0x2cf4,	// (0x0002a682) popup_midp_note_alarm_window_t5

0x000a,

0xf85f,	// (0x000371ed) popup_midp_note_alarm_window_t_ParamLimits

0xf85f,	// (0x000371ed) popup_midp_note_alarm_window_t

0x2da0,	// (0x0002a72e) wait_bar_pane_cp1_ParamLimits

0x2da0,	// (0x0002a72e) wait_bar_pane_cp1

0xc310,	// (0x00033c9e) wait_anim_pane_copy1

0xc310,	// (0x00033c9e) wait_border_pane_copy1

0x13a7,	// (0x00028d35) wait_border_pane_g1_copy1

0x8972,	// (0x00030300) form_field_popup_pane_g1

0x897a,	// (0x00030308) form_field_popup_pane_t1_ParamLimits

0xc722,	// (0x000340b0) input_focus_pane_cp7_ParamLimits

0xc750,	// (0x000340de) list_form_pane_ParamLimits

0x8994,	// (0x00030322) form_field_popup_wide_pane_g1

0x899c,	// (0x0003032a) form_field_popup_wide_pane_t1_ParamLimits

0xc722,	// (0x000340b0) input_focus_pane_cp8_ParamLimits

0xc75c,	// (0x000340ea) list_form_wide_pane_ParamLimits

0x3889,	// (0x0002b217) aid_size_cell_graphic_pane

0x8a28,	// (0x000303b6) data_form_pane_t1_ParamLimits

0x8b38,	// (0x000304c6) data_form_wide_pane_t1_ParamLimits

0xa6ec,	// (0x0003207a) bg_status_flat_pane

0x9126,	// (0x00030ab4) title_pane_t1_ParamLimits

0xc326,	// (0x00033cb4) title_pane_t2_ParamLimits

0xc34c,	// (0x00033cda) title_pane_t3_ParamLimits

0xf530,	// (0x00036ebe) title_pane_t_ParamLimits

0xcb09,	// (0x00034497) level_1_signal_ParamLimits

0xcb16,	// (0x000344a4) level_2_signal_ParamLimits

0xcb23,	// (0x000344b1) level_3_signal_ParamLimits

0xcb30,	// (0x000344be) level_4_signal_ParamLimits

0xcb3d,	// (0x000344cb) level_5_signal_ParamLimits

0xcb4a,	// (0x000344d8) level_6_signal_ParamLimits

0xcb57,	// (0x000344e5) level_7_signal_ParamLimits

0xcb09,	// (0x00034497) level_1_battery_ParamLimits

0xcb16,	// (0x000344a4) level_2_battery_ParamLimits

0xcb23,	// (0x000344b1) level_3_battery_ParamLimits

0xcb30,	// (0x000344be) level_4_battery_ParamLimits

0xcb3d,	// (0x000344cb) level_5_battery_ParamLimits

0xcb4a,	// (0x000344d8) level_6_battery_ParamLimits

0xcb57,	// (0x000344e5) level_7_battery_ParamLimits

0x29b8,	// (0x0002a346) bg_status_flat_pane_g1

0x29c0,	// (0x0002a34e) bg_status_flat_pane_g2

0x29c8,	// (0x0002a356) bg_status_flat_pane_g3

0x29d0,	// (0x0002a35e) bg_status_flat_pane_g4

0x29d8,	// (0x0002a366) bg_status_flat_pane_g5

0x29e0,	// (0x0002a36e) bg_status_flat_pane_g6

0x29e8,	// (0x0002a376) bg_status_flat_pane_g7

0x91ba,	// (0x00030b48) tabs_3_active_pane_t1_ParamLimits

0x91ba,	// (0x00030b48) tabs_3_passive_pane_t1_ParamLimits

0x91d4,	// (0x00030b62) tabs_4_active_pane_t1_ParamLimits

0x91d4,	// (0x00030b62) tabs_4_1_passive_pane_t1_ParamLimits

0x97b3,	// (0x00031141) tabs_2_active_pane_t1_ParamLimits

0x97b3,	// (0x00031141) tabs_2_passive_pane_t1_ParamLimits

0xc36c,	// (0x00033cfa) bg_active_tab_pane_cp4_ParamLimits

0x97c5,	// (0x00031153) tabs_2_long_active_pane_t1_ParamLimits

0xc864,	// (0x000341f2) bg_passive_tab_pane_cp4_ParamLimits

0x0d0c,	// (0x0002869a) list_single_midp_graphic_pane_t1_ParamLimits

0xc36c,	// (0x00033cfa) bg_active_tab_pane_cp5_ParamLimits

0x97d8,	// (0x00031166) tabs_3_long_active_pane_t1_ParamLimits

0xc864,	// (0x000341f2) bg_passive_tab_pane_cp5_ParamLimits

0x0d0c,	// (0x0002869a) list_single_midp_graphic_pane_t1

0xa6ec,	// (0x0003207a) bg_status_flat_pane_ParamLimits

0x08da,	// (0x00028268) indicator_pane_cp2_ParamLimits

0x08da,	// (0x00028268) indicator_pane_cp2

0xa86a,	// (0x000321f8) navi_pane_srt_ParamLimits

0xa86a,	// (0x000321f8) navi_pane_srt

0x0a29,	// (0x000283b7) popup_clock_digital_analogue_window_cp1

0xc3b0,	// (0x00033d3e) indicator_pane_t1

0xcfe2,	// (0x00034970) copy_highlight_pane

0xcfe2,	// (0x00034970) cursor_graphics_pane

0xcfe2,	// (0x00034970) graphic_within_text_pane

0xcfe2,	// (0x00034970) link_highlight_pane

0x31b7,	// (0x0002ab45) popup_preview_text_window_t5_ParamLimits

0x31b7,	// (0x0002ab45) popup_preview_text_window_t5

0xd04a,	// (0x000349d8) cursor_digital_pane

0xd04a,	// (0x000349d8) cursor_primary_pane

0xd05b,	// (0x000349e9) cursor_primary_small_pane

0xd063,	// (0x000349f1) cursor_secondary_pane

0xd06b,	// (0x000349f9) cursor_title_pane

0xd04a,	// (0x000349d8) link_highlight_digital_pane

0xd052,	// (0x000349e0) link_highlight_primary_pane

0xd05b,	// (0x000349e9) link_highlight_primary_small_pane

0xd063,	// (0x000349f1) link_highlight_secondary_pane

0xd06b,	// (0x000349f9) link_highlight_title_pane

0xd04a,	// (0x000349d8) copy_highlight_digital_pane

0xd04a,	// (0x000349d8) copy_highlight_primary_pane

0xd05b,	// (0x000349e9) copy_highlight_primary_small_pane

0xd063,	// (0x000349f1) copy_highlight_secondary_pane

0xd06b,	// (0x000349f9) copy_highlight_title_pane

0xd063,	// (0x000349f1) graphic_text_digital_pane

0x2a56,	// (0x0002a3e4) graphic_text_primary_pane

0x2a5f,	// (0x0002a3ed) graphic_text_primary_small_pane

0xd05b,	// (0x000349e9) graphic_text_secondary_pane

0xd04a,	// (0x000349d8) graphic_text_title_pane

0x9c30,	// (0x000315be) cursor_primary_pane_g1

0x2a48,	// (0x0002a3d6) cursor_text_primary_t1

0xadf8,	// (0x00032786) cursor_primary_small_pane_g1

0x2a3a,	// (0x0002a3c8) cursor_text_primary_small_t1

0xadee,	// (0x0003277c) cursor_primary_small_pane_g1_copy1

0x2a22,	// (0x0002a3b0) cursor_text_primary_small_t1_copy1

0x2a00,	// (0x0002a38e) cursor_text_title_t1

0xade4,	// (0x00032772) cursor_title_pane_g1

0x9c30,	// (0x000315be) cursor_digital_pane_g1

0xd073,	// (0x00034a01) cursor_text_digital_t1

0xd081,	// (0x00034a0f) link_highlight_primary_pane_g1

0x15a7,	// (0x00028f35) link_highlight_primary_pane_t1

0xd081,	// (0x00034a0f) link_highlight_primary_small_pane_g1

0xd089,	// (0x00034a17) link_highlight_primary_small_pane_t1

0xd081,	// (0x00034a0f) link_highlight_secondary_pane_g1

0xd098,	// (0x00034a26) link_highlight_secondary_pane_t1

0x150c,	// (0x00028e9a) link_highlight_title_pane_g1

0x1523,	// (0x00028eb1) link_highlight_title_pane_t1

0x150c,	// (0x00028e9a) link_highlight_digital_pane_g1

0x1514,	// (0x00028ea2) link_highlight_digital_pane_t1

0x13c6,	// (0x00028d54) copy_highlight_primary_pane_g1

0x13ec,	// (0x00028d7a) copy_highlight_primary_pane_t1

0x13c6,	// (0x00028d54) copy_highlight_primary_small_pane_g1

0x13dd,	// (0x00028d6b) copy_highlight_primary_small_pane_t1

0xd0a7,	// (0x00034a35) copy_highlight_secondary_pane_g1

0xd0af,	// (0x00034a3d) copy_highlight_secondary_pane_t1

0x13c6,	// (0x00028d54) copy_highlight_title_pane_g1

0x13ce,	// (0x00028d5c) copy_highlight_title_pane_t1

0x13c6,	// (0x00028d54) copy_highlight_digital_pane_g1

0x3a57,	// (0x0002b3e5) copy_highlight_digital_pane_t1

0x39ab,	// (0x0002b339) graphic_text_primary_pane_g1

0x3a3b,	// (0x0002b3c9) graphic_text_primary_pane_t1

0x3a49,	// (0x0002b3d7) graphic_text_primary_pane_t2

0x0001,

0xf98e,	// (0x0003731c) graphic_text_primary_pane_t

0x3a17,	// (0x0002b3a5) graphic_text_primary_small_pane_g1

0x3a1f,	// (0x0002b3ad) graphic_text_primary_small_pane_t1

0x3a2d,	// (0x0002b3bb) graphic_text_primary_small_pane_t2

0x0001,

0xf989,	// (0x00037317) graphic_text_primary_small_pane_t

0x39f3,	// (0x0002b381) graphic_text_secondary_pane_g1

0x39fb,	// (0x0002b389) graphic_text_secondary_pane_t1

0x3a09,	// (0x0002b397) graphic_text_secondary_pane_t2

0x0001,

0xf984,	// (0x00037312) graphic_text_secondary_pane_t

0x39cf,	// (0x0002b35d) graphic_text_title_pane_g1

0x39d7,	// (0x0002b365) graphic_text_title_pane_t1

0x39e5,	// (0x0002b373) graphic_text_title_pane_t2

0x0001,

0xf97f,	// (0x0003730d) graphic_text_title_pane_t

0x39ab,	// (0x0002b339) graphic_text_digital_pane_g1

0x39b3,	// (0x0002b341) graphic_text_digital_pane_t1

0x39c1,	// (0x0002b34f) graphic_text_digital_pane_t2

0x0001,

0xf97a,	// (0x00037308) graphic_text_digital_pane_t

0xc36c,	// (0x00033cfa) navi_icon_pane_srt_ParamLimits

0xc36c,	// (0x00033cfa) navi_icon_pane_srt

0xc310,	// (0x00033c9e) navi_midp_pane_srt

0xc310,	// (0x00033c9e) navi_navi_pane_srt

0xc36c,	// (0x00033cfa) navi_text_pane_srt_ParamLimits

0xc36c,	// (0x00033cfa) navi_text_pane_srt

0x3976,	// (0x0002b304) navi_navi_icon_text_pane_srt

0x397e,	// (0x0002b30c) navi_navi_pane_srt_g1_ParamLimits

0x397e,	// (0x0002b30c) navi_navi_pane_srt_g1

0x3990,	// (0x0002b31e) navi_navi_pane_srt_g2_ParamLimits

0x3990,	// (0x0002b31e) navi_navi_pane_srt_g2

0x0001,

0xf975,	// (0x00037303) navi_navi_pane_srt_g_ParamLimits

0xf975,	// (0x00037303) navi_navi_pane_srt_g

0x39a2,	// (0x0002b330) navi_navi_tabs_pane_srt

0x3976,	// (0x0002b304) navi_navi_text_pane_srt

0x3976,	// (0x0002b304) navi_navi_volume_pane_srt

0x3967,	// (0x0002b2f5) navi_navi_text_pane_srt_t1

0x1883,	// (0x00029211) navi_navi_volume_pane_srt_g1

0x188b,	// (0x00029219) volume_small_pane_srt_ParamLimits

0x188b,	// (0x00029219) volume_small_pane_srt

0xf47e,	// (0x00036e0c) volume_small_pane_srt_g1_ParamLimits

0xf47e,	// (0x00036e0c) volume_small_pane_srt_g1

0xf48e,	// (0x00036e1c) volume_small_pane_srt_g2_ParamLimits

0xf48e,	// (0x00036e1c) volume_small_pane_srt_g2

0xf49f,	// (0x00036e2d) volume_small_pane_srt_g3_ParamLimits

0xf49f,	// (0x00036e2d) volume_small_pane_srt_g3

0xf4b0,	// (0x00036e3e) volume_small_pane_srt_g4_ParamLimits

0xf4b0,	// (0x00036e3e) volume_small_pane_srt_g4

0xf4c1,	// (0x00036e4f) volume_small_pane_srt_g5_ParamLimits

0xf4c1,	// (0x00036e4f) volume_small_pane_srt_g5

0xf4d2,	// (0x00036e60) volume_small_pane_srt_g6_ParamLimits

0xf4d2,	// (0x00036e60) volume_small_pane_srt_g6

0xf4e3,	// (0x00036e71) volume_small_pane_srt_g7_ParamLimits

0xf4e3,	// (0x00036e71) volume_small_pane_srt_g7

0xf4f4,	// (0x00036e82) volume_small_pane_srt_g8_ParamLimits

0xf4f4,	// (0x00036e82) volume_small_pane_srt_g8

0xf505,	// (0x00036e93) volume_small_pane_srt_g9_ParamLimits

0xf505,	// (0x00036e93) volume_small_pane_srt_g9

0xf516,	// (0x00036ea4) volume_small_pane_srt_g10_ParamLimits

0xf516,	// (0x00036ea4) volume_small_pane_srt_g10

0x0009,

0xf722,	// (0x000370b0) volume_small_pane_srt_g_ParamLimits

0xf722,	// (0x000370b0) volume_small_pane_srt_g

0x94bb,	// (0x00030e49) query_popup_data_pane_cp2

0x394d,	// (0x0002b2db) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x394d,	// (0x0002b2db) navi_navi_icon_text_pane_srt_t1

0x2a56,	// (0x0002a3e4) navi_tabs_2_long_pane_srt

0x2a56,	// (0x0002a3e4) navi_tabs_2_pane_srt

0x2a56,	// (0x0002a3e4) navi_tabs_3_long_pane_srt

0x2a56,	// (0x0002a3e4) navi_tabs_3_pane_srt

0x2a56,	// (0x0002a3e4) navi_tabs_4_pane_srt

0xb526,	// (0x00032eb4) tabs_2_active_pane_srt_ParamLimits

0xb526,	// (0x00032eb4) tabs_2_active_pane_srt

0xb536,	// (0x00032ec4) tabs_2_passive_pane_srt_ParamLimits

0xb536,	// (0x00032ec4) tabs_2_passive_pane_srt

0x0d7b,	// (0x00028709) bg_passive_tab_pane_cp1_srt_ParamLimits

0x0d7b,	// (0x00028709) bg_passive_tab_pane_cp1_srt

0xb4f6,	// (0x00032e84) bg_passive_tab_pane_g1_cp1_srt

0x9aa6,	// (0x00031434) bg_passive_tab_pane_g2_cp1_srt

0xb4ff,	// (0x00032e8d) bg_passive_tab_pane_g3_cp1_srt

0xc35e,	// (0x00033cec) bg_active_tab_pane_cp1_srt_ParamLimits

0xc35e,	// (0x00033cec) bg_active_tab_pane_cp1_srt

0xb508,	// (0x00032e96) tabs_2_active_pane_srt_g1

0xb510,	// (0x00032e9e) tabs_2_active_pane_srt_t1_ParamLimits

0xb510,	// (0x00032e9e) tabs_2_active_pane_srt_t1

0xb4f6,	// (0x00032e84) bg_active_tab_pane_g1_cp1_srt

0x9aa6,	// (0x00031434) bg_active_tab_pane_g2_cp1_srt

0xb4ff,	// (0x00032e8d) bg_active_tab_pane_g3_cp1_srt

0xb4c3,	// (0x00032e51) tabs_3_active_pane_srt_ParamLimits

0xb4c3,	// (0x00032e51) tabs_3_active_pane_srt

0xb4d4,	// (0x00032e62) tabs_3_passive_pane_cp_srt_ParamLimits

0xb4d4,	// (0x00032e62) tabs_3_passive_pane_cp_srt

0xb4e5,	// (0x00032e73) tabs_3_passive_pane_srt_ParamLimits

0xb4e5,	// (0x00032e73) tabs_3_passive_pane_srt

0x0d7b,	// (0x00028709) bg_passive_tab_pane_cp2_srt_ParamLimits

0x0d7b,	// (0x00028709) bg_passive_tab_pane_cp2_srt

0x9c3a,	// (0x000315c8) bg_passive_tab_pane_g1_cp2_srt

0x9aa6,	// (0x00031434) bg_passive_tab_pane_g2_cp2_srt

0x9c43,	// (0x000315d1) bg_passive_tab_pane_g3_cp2_srt

0xc35e,	// (0x00033cec) bg_active_tab_pane_cp2_srt_ParamLimits

0xc35e,	// (0x00033cec) bg_active_tab_pane_cp2_srt

0xb4a5,	// (0x00032e33) tabs_3_active_pane_srt_g1

0xb4ad,	// (0x00032e3b) tabs_3_active_pane_srt_t1_ParamLimits

0xb4ad,	// (0x00032e3b) tabs_3_active_pane_srt_t1

0x9c3a,	// (0x000315c8) bg_active_tab_pane_g1_cp2_srt

0x9aa6,	// (0x00031434) bg_active_tab_pane_g2_cp2_srt

0x9c43,	// (0x000315d1) bg_active_tab_pane_g3_cp2_srt

0x17e8,	// (0x00029176) tabs_4_active_pane_srt_ParamLimits

0x17e8,	// (0x00029176) tabs_4_active_pane_srt

0x17fa,	// (0x00029188) tabs_4_passive_pane_cp2_srt_ParamLimits

0x17fa,	// (0x00029188) tabs_4_passive_pane_cp2_srt

0x01a1,	// (0x00027b2f) aid_size_cell_toolbar

0x3544,	// (0x0002aed2) main_idle_act_pane_ParamLimits

0x033c,	// (0x00027cca) popup_large_graphic_colour_window_ParamLimits

0xa55b,	// (0x00031ee9) popup_toolbar_window_ParamLimits

0xa55b,	// (0x00031ee9) popup_toolbar_window

0x36f8,	// (0x0002b086) list_single_graphic_2heading_pane_ParamLimits

0x36f8,	// (0x0002b086) list_single_graphic_2heading_pane

0xc9f1,	// (0x0003437f) aid_size_cell_apps_grid_lsc_pane

0xca03,	// (0x00034391) aid_size_cell_apps_grid_prt_pane

0xc864,	// (0x000341f2) bg_wml_button_pane_cp1_ParamLimits

0xc864,	// (0x000341f2) bg_wml_button_pane_cp1

0xab8a,	// (0x00032518) form_midp_field_text_pane_t1_ParamLimits

0x0d7b,	// (0x00028709) input_focus_pane_cp050_ParamLimits

0x1073,	// (0x00028a01) list_midp_form_text_pane_ParamLimits

0x1016,	// (0x000289a4) input_focus_pane_cp051_ParamLimits

0x102a,	// (0x000289b8) list_midp_choice_pane_ParamLimits

0xaaef,	// (0x0003247d) list_single_2graphic_pane_cp3_ParamLimits

0xaaef,	// (0x0003247d) list_single_2graphic_pane_cp3

0xab03,	// (0x00032491) list_single_midp_graphic_pane_ParamLimits

0xab03,	// (0x00032491) list_single_midp_graphic_pane

0xea55,	// (0x000363e3) list_single_graphic_2heading_pane_g1_ParamLimits

0xea55,	// (0x000363e3) list_single_graphic_2heading_pane_g1

0xe83e,	// (0x000361cc) list_single_graphic_2heading_pane_g4_ParamLimits

0xe83e,	// (0x000361cc) list_single_graphic_2heading_pane_g4

0xe84a,	// (0x000361d8) list_single_graphic_2heading_pane_g5_ParamLimits

0xe84a,	// (0x000361d8) list_single_graphic_2heading_pane_g5

0x0002,

0xf775,	// (0x00037103) list_single_graphic_2heading_pane_g_ParamLimits

0xf775,	// (0x00037103) list_single_graphic_2heading_pane_g

0xea61,	// (0x000363ef) list_single_graphic_2heading_pane_t1_ParamLimits

0xea61,	// (0x000363ef) list_single_graphic_2heading_pane_t1

0xea75,	// (0x00036403) list_single_graphic_2heading_pane_t2_ParamLimits

0xea75,	// (0x00036403) list_single_graphic_2heading_pane_t2

0xea8f,	// (0x0003641d) list_single_graphic_2heading_pane_t3_ParamLimits

0xea8f,	// (0x0003641d) list_single_graphic_2heading_pane_t3

0x0002,

0xf77c,	// (0x0003710a) list_single_graphic_2heading_pane_t_ParamLimits

0xf77c,	// (0x0003710a) list_single_graphic_2heading_pane_t

0x0b85,	// (0x00028513) bg_popup_sub_pane_cp2

0x0baf,	// (0x0002853d) grid_toobar_pane

0x0beb,	// (0x00028579) cell_toolbar_pane_ParamLimits

0x0beb,	// (0x00028579) cell_toolbar_pane

0x0c1b,	// (0x000285a9) cell_toolbar_pane_g1_ParamLimits

0x0c1b,	// (0x000285a9) cell_toolbar_pane_g1

0xaa07,	// (0x00032395) cell_toolbar_pane_g2_ParamLimits

0xaa07,	// (0x00032395) cell_toolbar_pane_g2

0x0001,

0xf78a,	// (0x00037118) cell_toolbar_pane_g_ParamLimits

0xf78a,	// (0x00037118) cell_toolbar_pane_g

0x0c51,	// (0x000285df) grid_highlight_pane_cp2_ParamLimits

0x0c51,	// (0x000285df) grid_highlight_pane_cp2

0x0c6b,	// (0x000285f9) toolbar_button_pane

0x0c77,	// (0x00028605) toolbar_button_pane_g1

0x0c7f,	// (0x0002860d) toolbar_button_pane_g2

0x0c87,	// (0x00028615) toolbar_button_pane_g3

0x0c8f,	// (0x0002861d) toolbar_button_pane_g4

0x0c97,	// (0x00028625) toolbar_button_pane_g5

0x0c9f,	// (0x0002862d) toolbar_button_pane_g6

0x0ca7,	// (0x00028635) toolbar_button_pane_g7

0x0caf,	// (0x0002863d) toolbar_button_pane_g8

0x0cb7,	// (0x00028645) toolbar_button_pane_g9

0x0009,

0xf78f,	// (0x0003711d) toolbar_button_pane_g

0x0cc7,	// (0x00028655) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0cc7,	// (0x00028655) list_single_2graphic_pane_g1_cp3

0xaa1b,	// (0x000323a9) list_single_2graphic_pane_g2_cp3_ParamLimits

0xaa1b,	// (0x000323a9) list_single_2graphic_pane_g2_cp3

0xce33,	// (0x000347c1) list_single_2graphic_pane_g3_cp3

0x0ce4,	// (0x00028672) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0ce4,	// (0x00028672) list_single_2graphic_pane_g4_cp3

0xaa2c,	// (0x000323ba) list_single_2graphic_pane_t1_cp3_ParamLimits

0xaa2c,	// (0x000323ba) list_single_2graphic_pane_t1_cp3

0xce27,	// (0x000347b5) list_single_midp_graphic_pane_g2_ParamLimits

0xce27,	// (0x000347b5) list_single_midp_graphic_pane_g2

0x01a9,	// (0x00027b37) aid_zoom_text_primary

0xea45,	// (0x000363d3) aid_zoom_text_secondary

0xd124,	// (0x00034ab2) status_small_pane_g7_ParamLimits

0xd124,	// (0x00034ab2) status_small_pane_g7

0x9c9f,	// (0x0003162d) status_small_pane_t1_ParamLimits

0x9102,	// (0x00030a90) title_pane_g2

0x0003,

0xf527,	// (0x00036eb5) title_pane_g

0x9515,	// (0x00030ea3) aid_size_cell_colour_1_pane_ParamLimits

0x9515,	// (0x00030ea3) aid_size_cell_colour_1_pane

0x9529,	// (0x00030eb7) aid_size_cell_colour_2_pane_ParamLimits

0x9529,	// (0x00030eb7) aid_size_cell_colour_2_pane

0x953d,	// (0x00030ecb) aid_size_cell_colour_3_pane_ParamLimits

0x953d,	// (0x00030ecb) aid_size_cell_colour_3_pane

0x9551,	// (0x00030edf) aid_size_cell_colour_4_pane_ParamLimits

0x9551,	// (0x00030edf) aid_size_cell_colour_4_pane

0xf13b,	// (0x00036ac9) title_pane_stacon_g1_ParamLimits

0xf13b,	// (0x00036ac9) title_pane_stacon_g1

0x1443,	// (0x00028dd1) popup_note_wait_window_g3_ParamLimits

0x1443,	// (0x00028dd1) popup_note_wait_window_g3

0x14b9,	// (0x00028e47) popup_note_wait_window_t5_ParamLimits

0x14b9,	// (0x00028e47) popup_note_wait_window_t5

0xc310,	// (0x00033c9e) main_feb_china_hwr_fs_writing_pane

0x9f0f,	// (0x0003189d) popup_feb_china_hwr_fs_window_ParamLimits

0x9f0f,	// (0x0003189d) popup_feb_china_hwr_fs_window

0xaa48,	// (0x000323d6) aid_size_cell_hwr_fs_ParamLimits

0xaa48,	// (0x000323d6) aid_size_cell_hwr_fs

0x0d7b,	// (0x00028709) bg_popup_sub_pane_cp3_ParamLimits

0x0d7b,	// (0x00028709) bg_popup_sub_pane_cp3

0xaa5d,	// (0x000323eb) grid_hwr_fs_pane_ParamLimits

0xaa5d,	// (0x000323eb) grid_hwr_fs_pane

0x0d9f,	// (0x0002872d) linegrid_hwr_fs_pane_ParamLimits

0x0d9f,	// (0x0002872d) linegrid_hwr_fs_pane

0xaa75,	// (0x00032403) cell_hwr_fs_pane_ParamLimits

0xaa75,	// (0x00032403) cell_hwr_fs_pane

0x0dd1,	// (0x0002875f) linegrid_hwr_fs_pane_g1_ParamLimits

0x0dd1,	// (0x0002875f) linegrid_hwr_fs_pane_g1

0xaa9b,	// (0x00032429) linegrid_hwr_fs_pane_g2_ParamLimits

0xaa9b,	// (0x00032429) linegrid_hwr_fs_pane_g2

0x0def,	// (0x0002877d) linegrid_hwr_fs_pane_g3_ParamLimits

0x0def,	// (0x0002877d) linegrid_hwr_fs_pane_g3

0xaaad,	// (0x0003243b) linegrid_hwr_fs_pane_g4_ParamLimits

0xaaad,	// (0x0003243b) linegrid_hwr_fs_pane_g4

0x0e15,	// (0x000287a3) linegrid_hwr_fs_pane_g5_ParamLimits

0x0e15,	// (0x000287a3) linegrid_hwr_fs_pane_g5

0x0004,

0xf7b5,	// (0x00037143) linegrid_hwr_fs_pane_g_ParamLimits

0xf7b5,	// (0x00037143) linegrid_hwr_fs_pane_g

0x0e2b,	// (0x000287b9) cell_hwr_fs_pane_g1_ParamLimits

0x0e2b,	// (0x000287b9) cell_hwr_fs_pane_g1

0x0abf,	// (0x0002844d) cell_hwr_fs_pane_g2_ParamLimits

0x0abf,	// (0x0002844d) cell_hwr_fs_pane_g2

0xaac7,	// (0x00032455) cell_hwr_fs_pane_g3_ParamLimits

0xaac7,	// (0x00032455) cell_hwr_fs_pane_g3

0xaad4,	// (0x00032462) cell_hwr_fs_pane_g4_ParamLimits

0xaad4,	// (0x00032462) cell_hwr_fs_pane_g4

0x0003,

0xf7c0,	// (0x0003714e) cell_hwr_fs_pane_g_ParamLimits

0xf7c0,	// (0x0003714e) cell_hwr_fs_pane_g

0xaae1,	// (0x0003246f) cell_hwr_fs_pane_t1

0xc310,	// (0x00033c9e) grid_highlight_pane_cp6

0xc310,	// (0x00033c9e) main_idle_act2_pane

0xc83b,	// (0x000341c9) aid_inside_area_popup_secondary

0xaf17,	// (0x000328a5) aid_inside_area_window_primary_ParamLimits

0xaf17,	// (0x000328a5) aid_inside_area_window_primary

0xb54e,	// (0x00032edc) ai2_news_ticker_pane

0x3a6e,	// (0x0002b3fc) aid_size_cell_ai1_link_ParamLimits

0x3a6e,	// (0x0002b3fc) aid_size_cell_ai1_link

0xb556,	// (0x00032ee4) popup_ai2_data_window_ParamLimits

0xb556,	// (0x00032ee4) popup_ai2_data_window

0x3a9e,	// (0x0002b42c) popup_ai2_link_window_ParamLimits

0x3a9e,	// (0x0002b42c) popup_ai2_link_window

0x0d7b,	// (0x00028709) bg_popup_sub_pane_cp4_ParamLimits

0x0d7b,	// (0x00028709) bg_popup_sub_pane_cp4

0x3ab2,	// (0x0002b440) grid_ai2_link_pane_ParamLimits

0x3ab2,	// (0x0002b440) grid_ai2_link_pane

0x3ac9,	// (0x0002b457) popup_ai2_link_window_g1_ParamLimits

0x3ac9,	// (0x0002b457) popup_ai2_link_window_g1

0x3ad5,	// (0x0002b463) popup_ai2_link_window_g2_ParamLimits

0x3ad5,	// (0x0002b463) popup_ai2_link_window_g2

0x0001,

0xf993,	// (0x00037321) popup_ai2_link_window_g_ParamLimits

0xf993,	// (0x00037321) popup_ai2_link_window_g

0x3ae4,	// (0x0002b472) ai2_mp_button_pane

0x3aec,	// (0x0002b47a) ai2_mp_volume_pane

0x1016,	// (0x000289a4) bg_popup_sub_pane_cp5_ParamLimits

0x1016,	// (0x000289a4) bg_popup_sub_pane_cp5

0x3af4,	// (0x0002b482) heading_ai2_gene_pane_ParamLimits

0x3af4,	// (0x0002b482) heading_ai2_gene_pane

0x3b00,	// (0x0002b48e) list_ai2_gene_pane_ParamLimits

0x3b00,	// (0x0002b48e) list_ai2_gene_pane

0x3b48,	// (0x0002b4d6) cell_ai2_link_pane_ParamLimits

0x3b48,	// (0x0002b4d6) cell_ai2_link_pane

0x3b5e,	// (0x0002b4ec) cell_ai2_link_pane_g1

0xc310,	// (0x00033c9e) grid_highlight_pane_cp7

0x18a0,	// (0x0002922e) ai2_mp_volume_pane_g1

0x3c2e,	// (0x0002b5bc) ai2_mp_volume_pane_g2

0x3ba3,	// (0x0002b531) list_ai2_gene_pane_t1

0x3c36,	// (0x0002b5c4) ai2_mp_volume_pane_g3

0x0002,

0xf9ac,	// (0x0003733a) ai2_mp_volume_pane_g

0xb56c,	// (0x00032efa) volume_small_pane_cp3

0x3c3e,	// (0x0002b5cc) aid_size_cell_ai2_button

0x3c46,	// (0x0002b5d4) grid_ai2_button_pane

0x3c4f,	// (0x0002b5dd) cell_ai2_button_pane_ParamLimits

0x3c4f,	// (0x0002b5dd) cell_ai2_button_pane

0xc306,	// (0x00033c94) cell_ai2_button_pane_g1

0xc310,	// (0x00033c9e) grid_highlight_pane_cp8

0x3bee,	// (0x0002b57c) ai2_gene_pane_t1_ParamLimits

0x3bee,	// (0x0002b57c) ai2_gene_pane_t1

0x9e71,	// (0x000317ff) aid_height_parent_landscape

0xb229,	// (0x00032bb7) aid_height_set_list

0x3544,	// (0x0002aed2) aid_size_parent

0x3889,	// (0x0002b217) aid_size_cell_graphic_pane_ParamLimits

0x3b10,	// (0x0002b49e) popup_ai2_data_window_g1_ParamLimits

0x3b10,	// (0x0002b49e) popup_ai2_data_window_g1

0x3b1c,	// (0x0002b4aa) ai2_news_ticker_pane_g1

0x3b24,	// (0x0002b4b2) ai2_news_ticker_pane_g2

0x0001,

0xf998,	// (0x00037326) ai2_news_ticker_pane_g

0x3b2c,	// (0x0002b4ba) ai2_news_ticker_pane_t1

0x3b3a,	// (0x0002b4c8) ai2_news_ticker_pane_t2

0x0001,

0xf99d,	// (0x0003732b) ai2_news_ticker_pane_t

0x3b67,	// (0x0002b4f5) heading_ai2_gene_pane_g1

0x3b6f,	// (0x0002b4fd) heading_ai2_gene_pane_t1_ParamLimits

0x3b6f,	// (0x0002b4fd) heading_ai2_gene_pane_t1

0x3b84,	// (0x0002b512) list_highlight_pane_cp6

0x3b8c,	// (0x0002b51a) ai2_gene_pane_ParamLimits

0x3b8c,	// (0x0002b51a) ai2_gene_pane

0x3bb1,	// (0x0002b53f) list_ai2_gene_pane_t2

0x0001,

0xf9a2,	// (0x00037330) list_ai2_gene_pane_t

0x3bbf,	// (0x0002b54d) list_highlight_pane_cp8_ParamLimits

0x3bbf,	// (0x0002b54d) list_highlight_pane_cp8

0x3bd0,	// (0x0002b55e) ai2_gene_pane_g1_ParamLimits

0x3bd0,	// (0x0002b55e) ai2_gene_pane_g1

0x3be2,	// (0x0002b570) ai2_gene_pane_g2_ParamLimits

0x3be2,	// (0x0002b570) ai2_gene_pane_g2

0x0001,

0xf9a7,	// (0x00037335) ai2_gene_pane_g_ParamLimits

0xf9a7,	// (0x00037335) ai2_gene_pane_g

0xc6c1,	// (0x0003404f) scroll_pane_cp12

0x9e2e,	// (0x000317bc) control_pane_t3_ParamLimits

0x9e2e,	// (0x000317bc) control_pane_t3

0x9c90,	// (0x0003161e) status_small_pane_g8_ParamLimits

0x9c90,	// (0x0003161e) status_small_pane_g8

0x9fd2,	// (0x00031960) popup_find_window_ParamLimits

0xa25f,	// (0x00031bed) popup_note_image_window_ParamLimits

0xeaa7,	// (0x00036435) list_double2_graphic_pane_vc_g1_ParamLimits

0xeaa7,	// (0x00036435) list_double2_graphic_pane_vc_g1

0xeab3,	// (0x00036441) list_double2_graphic_pane_vc_g2_ParamLimits

0xeab3,	// (0x00036441) list_double2_graphic_pane_vc_g2

0xeabf,	// (0x0003644d) list_double2_graphic_pane_vc_g3_ParamLimits

0xeabf,	// (0x0003644d) list_double2_graphic_pane_vc_g3

0x0002,

0xf783,	// (0x00037111) list_double2_graphic_pane_vc_g_ParamLimits

0xf783,	// (0x00037111) list_double2_graphic_pane_vc_g

0xe8ae,	// (0x0003623c) list_double2_graphic_pane_vc_t1_ParamLimits

0xe8ae,	// (0x0003623c) list_double2_graphic_pane_vc_t1

0xe83e,	// (0x000361cc) list_single_heading_pane_vc_g1_ParamLimits

0xe83e,	// (0x000361cc) list_single_heading_pane_vc_g1

0xe84a,	// (0x000361d8) list_single_heading_pane_vc_g2_ParamLimits

0xe84a,	// (0x000361d8) list_single_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x00036f2f) list_single_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x00036f2f) list_single_heading_pane_vc_g

0xeacb,	// (0x00036459) list_single_heading_pane_vc_t1_ParamLimits

0xeacb,	// (0x00036459) list_single_heading_pane_vc_t1

0xeae1,	// (0x0003646f) list_single_heading_pane_vc_t2_ParamLimits

0xeae1,	// (0x0003646f) list_single_heading_pane_vc_t2

0x0001,

0xf7a4,	// (0x00037132) list_single_heading_pane_vc_t_ParamLimits

0xf7a4,	// (0x00037132) list_single_heading_pane_vc_t

0x0d22,	// (0x000286b0) list_setting_number_pane_vc_g1_ParamLimits

0x0d22,	// (0x000286b0) list_setting_number_pane_vc_g1

0x0d2e,	// (0x000286bc) list_setting_number_pane_vc_g2_ParamLimits

0x0d2e,	// (0x000286bc) list_setting_number_pane_vc_g2

0x0001,

0xf7a9,	// (0x00037137) list_setting_number_pane_vc_g_ParamLimits

0xf7a9,	// (0x00037137) list_setting_number_pane_vc_g

0xeaf3,	// (0x00036481) list_setting_number_pane_vc_t1_ParamLimits

0xeaf3,	// (0x00036481) list_setting_number_pane_vc_t1

0xeb07,	// (0x00036495) list_setting_number_pane_vc_t2_ParamLimits

0xeb07,	// (0x00036495) list_setting_number_pane_vc_t2

0xeb23,	// (0x000364b1) list_setting_number_pane_vc_t3_ParamLimits

0xeb23,	// (0x000364b1) list_setting_number_pane_vc_t3

0x0002,

0xf7ae,	// (0x0003713c) list_setting_number_pane_vc_t_ParamLimits

0xf7ae,	// (0x0003713c) list_setting_number_pane_vc_t

0xeb4d,	// (0x000364db) set_value_pane_vc_ParamLimits

0xeb4d,	// (0x000364db) set_value_pane_vc

0x36f8,	// (0x0002b086) list_double2_graphic_pane_vc_ParamLimits

0x36f8,	// (0x0002b086) list_double2_graphic_pane_vc

0x36f8,	// (0x0002b086) list_double2_large_graphic_pane_vc_ParamLimits

0x36f8,	// (0x0002b086) list_double2_large_graphic_pane_vc

0x36f8,	// (0x0002b086) list_double2_pane_vc_ParamLimits

0x36f8,	// (0x0002b086) list_double2_pane_vc

0x36f8,	// (0x0002b086) list_double_graphic_heading_pane_vc_ParamLimits

0x36f8,	// (0x0002b086) list_double_graphic_heading_pane_vc

0x36f8,	// (0x0002b086) list_double_graphic_pane_vc_ParamLimits

0x36f8,	// (0x0002b086) list_double_graphic_pane_vc

0x36f8,	// (0x0002b086) list_double_heading_pane_vc_ParamLimits

0x36f8,	// (0x0002b086) list_double_heading_pane_vc

0xeb6c,	// (0x000364fa) list_double_large_graphic_pane_vc_ParamLimits

0xeb6c,	// (0x000364fa) list_double_large_graphic_pane_vc

0x36f8,	// (0x0002b086) list_double_number_pane_vc_ParamLimits

0x36f8,	// (0x0002b086) list_double_number_pane_vc

0x36f8,	// (0x0002b086) list_double_pane_vc_ParamLimits

0x36f8,	// (0x0002b086) list_double_pane_vc

0x36f8,	// (0x0002b086) list_double_time_pane_vc_ParamLimits

0x36f8,	// (0x0002b086) list_double_time_pane_vc

0x36f8,	// (0x0002b086) list_setting_number_pane_vc_ParamLimits

0x36f8,	// (0x0002b086) list_setting_number_pane_vc

0x36f8,	// (0x0002b086) list_setting_pane_vc_ParamLimits

0x36f8,	// (0x0002b086) list_setting_pane_vc

0x36f8,	// (0x0002b086) list_single_graphic_heading_pane_vc_ParamLimits

0x36f8,	// (0x0002b086) list_single_graphic_heading_pane_vc

0x36f8,	// (0x0002b086) list_single_heading_pane_vc_ParamLimits

0x36f8,	// (0x0002b086) list_single_heading_pane_vc

0x36f8,	// (0x0002b086) list_single_number_heading_pane_vc_ParamLimits

0x36f8,	// (0x0002b086) list_single_number_heading_pane_vc

0xe832,	// (0x000361c0) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe832,	// (0x000361c0) list_double_graphic_heading_pane_vc_g1

0xeab3,	// (0x00036441) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xeab3,	// (0x00036441) list_double_graphic_heading_pane_vc_g2

0xeabf,	// (0x0003644d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xeabf,	// (0x0003644d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9b3,	// (0x00037341) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9b3,	// (0x00037341) list_double_graphic_heading_pane_vc_g

0xeb8b,	// (0x00036519) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xeb8b,	// (0x00036519) list_double_graphic_heading_pane_vc_t1

0xeb9f,	// (0x0003652d) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeb9f,	// (0x0003652d) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ba,	// (0x00037348) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ba,	// (0x00037348) list_double_graphic_heading_pane_vc_t

0x0d22,	// (0x000286b0) list_setting_pane_vc_g1_ParamLimits

0x0d22,	// (0x000286b0) list_setting_pane_vc_g1

0x0d2e,	// (0x000286bc) list_setting_pane_vc_g2_ParamLimits

0x0d2e,	// (0x000286bc) list_setting_pane_vc_g2

0x0001,

0xf7a9,	// (0x00037137) list_setting_pane_vc_g_ParamLimits

0xf7a9,	// (0x00037137) list_setting_pane_vc_g

0xebb7,	// (0x00036545) list_setting_pane_vc_t1_ParamLimits

0xebb7,	// (0x00036545) list_setting_pane_vc_t1

0xebd3,	// (0x00036561) list_setting_pane_vc_t2_ParamLimits

0xebd3,	// (0x00036561) list_setting_pane_vc_t2

0x0001,

0xf9fd,	// (0x0003738b) list_setting_pane_vc_t_ParamLimits

0xf9fd,	// (0x0003738b) list_setting_pane_vc_t

0xeb4d,	// (0x000364db) set_value_pane_cp_vc_ParamLimits

0xeb4d,	// (0x000364db) set_value_pane_cp_vc

0xe83e,	// (0x000361cc) list_single_number_heading_pane_vc_g1_ParamLimits

0xe83e,	// (0x000361cc) list_single_number_heading_pane_vc_g1

0xe84a,	// (0x000361d8) list_single_number_heading_pane_vc_g2_ParamLimits

0xe84a,	// (0x000361d8) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x00036f2f) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x00036f2f) list_single_number_heading_pane_vc_g

0xe856,	// (0x000361e4) list_single_number_heading_pane_vc_t1_ParamLimits

0xe856,	// (0x000361e4) list_single_number_heading_pane_vc_t1

0xebed,	// (0x0003657b) list_single_number_heading_pane_vc_t2_ParamLimits

0xebed,	// (0x0003657b) list_single_number_heading_pane_vc_t2

0xec03,	// (0x00036591) list_single_number_heading_pane_vc_t3_ParamLimits

0xec03,	// (0x00036591) list_single_number_heading_pane_vc_t3

0x0002,

0xfa02,	// (0x00037390) list_single_number_heading_pane_vc_t_ParamLimits

0xfa02,	// (0x00037390) list_single_number_heading_pane_vc_t

0xec15,	// (0x000365a3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xec15,	// (0x000365a3) list_single_graphic_heading_pane_vc_g1

0xe83e,	// (0x000361cc) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe83e,	// (0x000361cc) list_single_graphic_heading_pane_vc_g4

0xe84a,	// (0x000361d8) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xe84a,	// (0x000361d8) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa09,	// (0x00037397) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa09,	// (0x00037397) list_single_graphic_heading_pane_vc_g

0xe856,	// (0x000361e4) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe856,	// (0x000361e4) list_single_graphic_heading_pane_vc_t1

0xe87e,	// (0x0003620c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe87e,	// (0x0003620c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa10,	// (0x0003739e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa10,	// (0x0003739e) list_single_graphic_heading_pane_vc_t

0xe83e,	// (0x000361cc) list_double2_pane_vc_g1_ParamLimits

0xe83e,	// (0x000361cc) list_double2_pane_vc_g1

0xe84a,	// (0x000361d8) list_double2_pane_vc_g2_ParamLimits

0xe84a,	// (0x000361d8) list_double2_pane_vc_g2

0x0001,

0xf5a1,	// (0x00036f2f) list_double2_pane_vc_g_ParamLimits

0xf5a1,	// (0x00036f2f) list_double2_pane_vc_g

0xec21,	// (0x000365af) list_double2_pane_vc_t1_ParamLimits

0xec21,	// (0x000365af) list_double2_pane_vc_t1

0xe8a2,	// (0x00036230) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe8a2,	// (0x00036230) list_double2_large_graphic_pane_vc_g1

0xe83e,	// (0x000361cc) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe83e,	// (0x000361cc) list_double2_large_graphic_pane_vc_g2

0xe84a,	// (0x000361d8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe84a,	// (0x000361d8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5be,	// (0x00036f4c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5be,	// (0x00036f4c) list_double2_large_graphic_pane_vc_g

0xe8ae,	// (0x0003623c) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe8ae,	// (0x0003623c) list_double2_large_graphic_pane_vc_t1

0xec39,	// (0x000365c7) list_double_time_pane_vc_g1_ParamLimits

0xec39,	// (0x000365c7) list_double_time_pane_vc_g1

0xec45,	// (0x000365d3) list_double_time_pane_vc_g2_ParamLimits

0xec45,	// (0x000365d3) list_double_time_pane_vc_g2

0x0001,

0xfa15,	// (0x000373a3) list_double_time_pane_vc_g_ParamLimits

0xfa15,	// (0x000373a3) list_double_time_pane_vc_g

0xec51,	// (0x000365df) list_double_time_pane_vc_t1_ParamLimits

0xec51,	// (0x000365df) list_double_time_pane_vc_t1

0xec75,	// (0x00036603) list_double_time_pane_vc_t2_ParamLimits

0xec75,	// (0x00036603) list_double_time_pane_vc_t2

0xecc4,	// (0x00036652) list_double_time_pane_vc_t3_ParamLimits

0xecc4,	// (0x00036652) list_double_time_pane_vc_t3

0xecd6,	// (0x00036664) list_double_time_pane_vc_t4_ParamLimits

0xecd6,	// (0x00036664) list_double_time_pane_vc_t4

0x0003,

0xfa1a,	// (0x000373a8) list_double_time_pane_vc_t_ParamLimits

0xfa1a,	// (0x000373a8) list_double_time_pane_vc_t

0xe83e,	// (0x000361cc) list_double_pane_vc_g1_ParamLimits

0xe83e,	// (0x000361cc) list_double_pane_vc_g1

0xe84a,	// (0x000361d8) list_double_pane_vc_g2_ParamLimits

0xe84a,	// (0x000361d8) list_double_pane_vc_g2

0x0001,

0xf5a1,	// (0x00036f2f) list_double_pane_vc_g_ParamLimits

0xf5a1,	// (0x00036f2f) list_double_pane_vc_g

0xecea,	// (0x00036678) list_double_pane_vc_t1_ParamLimits

0xecea,	// (0x00036678) list_double_pane_vc_t1

0xecfe,	// (0x0003668c) list_double_pane_vc_t2_ParamLimits

0xecfe,	// (0x0003668c) list_double_pane_vc_t2

0x0001,

0xfa23,	// (0x000373b1) list_double_pane_vc_t_ParamLimits

0xfa23,	// (0x000373b1) list_double_pane_vc_t

0xe83e,	// (0x000361cc) list_double_number_pane_vc_g1_ParamLimits

0xe83e,	// (0x000361cc) list_double_number_pane_vc_g1

0xe84a,	// (0x000361d8) list_double_number_pane_vc_g2_ParamLimits

0xe84a,	// (0x000361d8) list_double_number_pane_vc_g2

0x0001,

0xf5a1,	// (0x00036f2f) list_double_number_pane_vc_g_ParamLimits

0xf5a1,	// (0x00036f2f) list_double_number_pane_vc_g

0xed16,	// (0x000366a4) list_double_number_pane_vc_t1_ParamLimits

0xed16,	// (0x000366a4) list_double_number_pane_vc_t1

0xecea,	// (0x00036678) list_double_number_pane_vc_t2_ParamLimits

0xecea,	// (0x00036678) list_double_number_pane_vc_t2

0xed28,	// (0x000366b6) list_double_number_pane_vc_t3_ParamLimits

0xed28,	// (0x000366b6) list_double_number_pane_vc_t3

0x0002,

0xfa28,	// (0x000373b6) list_double_number_pane_vc_t_ParamLimits

0xfa28,	// (0x000373b6) list_double_number_pane_vc_t

0xed40,	// (0x000366ce) list_double_large_graphic_pane_vc_g1_ParamLimits

0xed40,	// (0x000366ce) list_double_large_graphic_pane_vc_g1

0xed5c,	// (0x000366ea) list_double_large_graphic_pane_vc_g2_ParamLimits

0xed5c,	// (0x000366ea) list_double_large_graphic_pane_vc_g2

0xed70,	// (0x000366fe) list_double_large_graphic_pane_vc_g3_ParamLimits

0xed70,	// (0x000366fe) list_double_large_graphic_pane_vc_g3

0xed7f,	// (0x0003670d) list_double_large_graphic_pane_vc_g4_ParamLimits

0xed7f,	// (0x0003670d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2f,	// (0x000373bd) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2f,	// (0x000373bd) list_double_large_graphic_pane_vc_g

0xed8b,	// (0x00036719) list_double_large_graphic_pane_vc_t1_ParamLimits

0xed8b,	// (0x00036719) list_double_large_graphic_pane_vc_t1

0xeda7,	// (0x00036735) list_double_large_graphic_pane_vc_t2_ParamLimits

0xeda7,	// (0x00036735) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa38,	// (0x000373c6) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa38,	// (0x000373c6) list_double_large_graphic_pane_vc_t

0xeab3,	// (0x00036441) list_double_heading_pane_vc_g1_ParamLimits

0xeab3,	// (0x00036441) list_double_heading_pane_vc_g1

0xeabf,	// (0x0003644d) list_double_heading_pane_vc_g2_ParamLimits

0xeabf,	// (0x0003644d) list_double_heading_pane_vc_g2

0x0001,

0xfa3d,	// (0x000373cb) list_double_heading_pane_vc_g_ParamLimits

0xfa3d,	// (0x000373cb) list_double_heading_pane_vc_g

0xedc9,	// (0x00036757) list_double_heading_pane_vc_t1_ParamLimits

0xedc9,	// (0x00036757) list_double_heading_pane_vc_t1

0xeddd,	// (0x0003676b) list_double_heading_pane_vc_t2_ParamLimits

0xeddd,	// (0x0003676b) list_double_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x000373d0) list_double_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x000373d0) list_double_heading_pane_vc_t

0xedf5,	// (0x00036783) list_double_graphic_pane_vc_g1_ParamLimits

0xedf5,	// (0x00036783) list_double_graphic_pane_vc_g1

0xee08,	// (0x00036796) list_double_graphic_pane_vc_g2_ParamLimits

0xee08,	// (0x00036796) list_double_graphic_pane_vc_g2

0xe83e,	// (0x000361cc) list_double_graphic_pane_vc_g3_ParamLimits

0xe83e,	// (0x000361cc) list_double_graphic_pane_vc_g3

0x0003,

0xfa47,	// (0x000373d5) list_double_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x000373d5) list_double_graphic_pane_vc_g

0xee25,	// (0x000367b3) list_double_graphic_pane_vc_t1_ParamLimits

0xee25,	// (0x000367b3) list_double_graphic_pane_vc_t1

0xee44,	// (0x000367d2) list_double_graphic_pane_vc_t2_ParamLimits

0xee44,	// (0x000367d2) list_double_graphic_pane_vc_t2

0x0001,

0xfa50,	// (0x000373de) list_double_graphic_pane_vc_t_ParamLimits

0xfa50,	// (0x000373de) list_double_graphic_pane_vc_t

0xe7ef,	// (0x0003617d) aid_size_cell_fastswap

0x8d6d,	// (0x000306fb) aid_size_cell_touch_ParamLimits

0x8d6d,	// (0x000306fb) aid_size_cell_touch

0xe7f7,	// (0x00036185) popup_fast_swap_wide_window_ParamLimits

0xe7f7,	// (0x00036185) popup_fast_swap_wide_window

0x9099,	// (0x00030a27) touch_pane_ParamLimits

0x9099,	// (0x00030a27) touch_pane

0xc70e,	// (0x0003409c) button_value_adjust_pane_cp2

0xe9ee,	// (0x0003637c) button_value_adjust_pane_cp4

0xe9f6,	// (0x00036384) form_field_data_pane_cp2

0x88c5,	// (0x00030253) form_field_data_wide_pane_cp2

0xca28,	// (0x000343b6) bg_scroll_pane_ParamLimits

0x98da,	// (0x00031268) scroll_handle_pane_ParamLimits

0xf294,	// (0x00036c22) scroll_sc2_down_pane_ParamLimits

0xf294,	// (0x00036c22) scroll_sc2_down_pane

0xca59,	// (0x000343e7) scroll_sc2_up_pane_ParamLimits

0xca59,	// (0x000343e7) scroll_sc2_up_pane

0xb6a8,	// (0x00033036) grid_wheel_folder_pane_g1_ParamLimits

0xb6a8,	// (0x00033036) grid_wheel_folder_pane_g1

0xf416,	// (0x00036da4) clock_nsta_pane_cp2_ParamLimits

0xf416,	// (0x00036da4) clock_nsta_pane_cp2

0x9b74,	// (0x00031502) listscroll_midp_pane_ParamLimits

0x9b80,	// (0x0003150e) midp_canvas_pane

0xd146,	// (0x00034ad4) nsta_clock_indic_pane

0xd16e,	// (0x00034afc) listscroll_form_pane_vc

0xd176,	// (0x00034b04) listscroll_set_pane_vc_ParamLimits

0xd176,	// (0x00034b04) listscroll_set_pane_vc

0xa714,	// (0x000320a2) clock_nsta_pane

0xa73e,	// (0x000320cc) indicator_nsta_pane

0x0b85,	// (0x00028513) bg_popup_sub_pane_cp2_ParamLimits

0x0b99,	// (0x00028527) find_pane_cp2_ParamLimits

0x0b99,	// (0x00028527) find_pane_cp2

0x0baf,	// (0x0002853d) grid_toobar_pane_ParamLimits

0x0d3a,	// (0x000286c8) list_form_gen_pane_vc_ParamLimits

0x0d3a,	// (0x000286c8) list_form_gen_pane_vc

0x0d50,	// (0x000286de) scroll_pane_cp8_vc_ParamLimits

0x0d50,	// (0x000286de) scroll_pane_cp8_vc

0x0e69,	// (0x000287f7) data_form_wide_pane_vc_ParamLimits

0x0e69,	// (0x000287f7) data_form_wide_pane_vc

0x0e75,	// (0x00028803) form_field_data_wide_pane_vc_g1

0x0e7d,	// (0x0002880b) form_field_data_wide_pane_vc_t1_ParamLimits

0x0e7d,	// (0x0002880b) form_field_data_wide_pane_vc_t1

0xc722,	// (0x000340b0) input_focus_pane_cp6_vc_ParamLimits

0xc722,	// (0x000340b0) input_focus_pane_cp6_vc

0x11ca,	// (0x00028b58) list_midp_pane_ParamLimits

0x38f3,	// (0x0002b281) scroll_pane_cp16_ParamLimits

0x38f3,	// (0x0002b281) scroll_pane_cp16

0x1220,	// (0x00028bae) button_value_adjust_pane_ParamLimits

0x1220,	// (0x00028bae) button_value_adjust_pane

0xb23a,	// (0x00032bc8) button_value_adjust_pane_cp6_ParamLimits

0xb23a,	// (0x00032bc8) button_value_adjust_pane_cp6

0xb354,	// (0x00032ce2) settings_code_pane_cp_ParamLimits

0xb354,	// (0x00032ce2) settings_code_pane_cp

0xc306,	// (0x00033c94) cell_touch_pane_g1

0xc306,	// (0x00033c94) cell_touch_pane_g2

0x0001,

0xf6c8,	// (0x00037056) cell_touch_pane_g

0xb575,	// (0x00032f03) cell_touch_pane_cp_ParamLimits

0xb575,	// (0x00032f03) cell_touch_pane_cp

0xb591,	// (0x00032f1f) cell_touch_pane_ParamLimits

0xb591,	// (0x00032f1f) cell_touch_pane

0xc306,	// (0x00033c94) scroll_sc2_down_pane_g1

0xc306,	// (0x00033c94) scroll_sc2_up_pane_g1

0xc310,	// (0x00033c9e) bg_set_opt_pane_cp4_vc

0x3c83,	// (0x0002b611) list_set_graphic_pane_vc_g1_ParamLimits

0x3c83,	// (0x0002b611) list_set_graphic_pane_vc_g1

0x3c8f,	// (0x0002b61d) list_set_graphic_pane_vc_g2_ParamLimits

0x3c8f,	// (0x0002b61d) list_set_graphic_pane_vc_g2

0x0001,

0xf9bf,	// (0x0003734d) list_set_graphic_pane_vc_g_ParamLimits

0xf9bf,	// (0x0003734d) list_set_graphic_pane_vc_g

0x3c9b,	// (0x0002b629) text_primary_small_cp13_vc_ParamLimits

0x3c9b,	// (0x0002b629) text_primary_small_cp13_vc

0x3cb3,	// (0x0002b641) list_set_graphic_pane_vc_ParamLimits

0x3cb3,	// (0x0002b641) list_set_graphic_pane_vc

0xc310,	// (0x00033c9e) input_focus_pane_cp2_vc

0xc306,	// (0x00033c94) setting_code_pane_vc_g1

0xc383,	// (0x00033d11) setting_code_pane_vc_t1

0x3cc6,	// (0x0002b654) set_text_pane_vc_t1_ParamLimits

0x3cc6,	// (0x0002b654) set_text_pane_vc_t1

0xc310,	// (0x00033c9e) input_focus_pane_cp1_vc

0x3ce3,	// (0x0002b671) list_set_text_pane_vc

0xc306,	// (0x00033c94) setting_text_pane_vc_g1

0xc310,	// (0x00033c9e) bg_set_opt_pane_cp2_vc

0xc37a,	// (0x00033d08) setting_slider_graphic_pane_vc_g1

0x3ced,	// (0x0002b67b) setting_slider_graphic_pane_vc_t1

0x3cfd,	// (0x0002b68b) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9c4,	// (0x00037352) setting_slider_graphic_pane_vc_t

0x3d0d,	// (0x0002b69b) slider_set_pane_cp_vc

0x3d15,	// (0x0002b6a3) slider_set_pane_vc_g1

0x3d1e,	// (0x0002b6ac) slider_set_pane_vc_g2

0x0006,

0xf9c9,	// (0x00037357) slider_set_pane_vc_g

0xc77a,	// (0x00034108) set_opt_bg_pane_g1_copy1

0xc782,	// (0x00034110) set_opt_bg_pane_g2_copy1

0x3d4a,	// (0x0002b6d8) set_opt_bg_pane_g3_copy1

0xc792,	// (0x00034120) set_opt_bg_pane_g4_copy1

0xc79a,	// (0x00034128) set_opt_bg_pane_g5_copy1

0xc7a2,	// (0x00034130) set_opt_bg_pane_g6_copy1

0x3d52,	// (0x0002b6e0) set_opt_bg_pane_g7_copy1

0x3d5c,	// (0x0002b6ea) set_opt_bg_pane_g8_copy1

0x3d64,	// (0x0002b6f2) set_opt_bg_pane_g9_copy1

0xc310,	// (0x00033c9e) bg_set_opt_pane_cp_vc

0x3d6c,	// (0x0002b6fa) setting_slider_pane_vc_t1

0x3d7b,	// (0x0002b709) setting_slider_pane_vc_t2

0x3d8b,	// (0x0002b719) setting_slider_pane_vc_t3

0x0002,

0xf9d8,	// (0x00037366) setting_slider_pane_vc_t

0x3d9b,	// (0x0002b729) slider_set_pane_vc

0x15b6,	// (0x00028f44) volume_set_pane_vc_g1

0x18b1,	// (0x0002923f) volume_set_pane_vc_g2

0x18ba,	// (0x00029248) volume_set_pane_vc_g3

0x18c3,	// (0x00029251) volume_set_pane_vc_g4

0x18cc,	// (0x0002925a) volume_set_pane_vc_g5

0x18d5,	// (0x00029263) volume_set_pane_vc_g6

0x18de,	// (0x0002926c) volume_set_pane_vc_g7

0x18e7,	// (0x00029275) volume_set_pane_vc_g8

0x18f0,	// (0x0002927e) volume_set_pane_vc_g9

0x18f9,	// (0x00029287) volume_set_pane_vc_g10

0x0009,

0xf9df,	// (0x0003736d) volume_set_pane_vc_g

0x3da3,	// (0x0002b731) volume_set_pane_vc

0x3dad,	// (0x0002b73b) button_value_adjust_pane_cp1_vc

0x3db7,	// (0x0002b745) list_highlight_pane_cp2_vc

0x3dc0,	// (0x0002b74e) list_set_pane_vc_ParamLimits

0x3dc0,	// (0x0002b74e) list_set_pane_vc

0x3e1e,	// (0x0002b7ac) main_pane_set_vc_t1_ParamLimits

0x3e1e,	// (0x0002b7ac) main_pane_set_vc_t1

0x3e33,	// (0x0002b7c1) main_pane_set_vc_t2_ParamLimits

0x3e33,	// (0x0002b7c1) main_pane_set_vc_t2

0x3e45,	// (0x0002b7d3) main_pane_set_vc_t3_ParamLimits

0x3e45,	// (0x0002b7d3) main_pane_set_vc_t3

0x3e57,	// (0x0002b7e5) main_pane_set_vc_t4_ParamLimits

0x3e57,	// (0x0002b7e5) main_pane_set_vc_t4

0x0003,

0xf9f4,	// (0x00037382) main_pane_set_vc_t_ParamLimits

0xf9f4,	// (0x00037382) main_pane_set_vc_t

0x3e69,	// (0x0002b7f7) setting_code_pane_vc_ParamLimits

0x3e69,	// (0x0002b7f7) setting_code_pane_vc

0x3e78,	// (0x0002b806) setting_slider_graphic_pane_vc

0x3e78,	// (0x0002b806) setting_slider_pane_vc

0x3e78,	// (0x0002b806) setting_text_pane_vc

0x3e78,	// (0x0002b806) setting_volume_pane_vc

0x3e80,	// (0x0002b80e) scroll_pane_cp121_vc

0xc6fc,	// (0x0003408a) set_content_pane_vc

0x3e88,	// (0x0002b816) button_value_adjust_pane_g1

0x3e91,	// (0x0002b81f) button_value_adjust_pane_g2

0x0001,

0xfa55,	// (0x000373e3) button_value_adjust_pane_g

0x3e9a,	// (0x0002b828) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3e9a,	// (0x0002b828) form_field_slider_wide_pane_vc_t1

0x3eae,	// (0x0002b83c) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3eae,	// (0x0002b83c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5a,	// (0x000373e8) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5a,	// (0x000373e8) form_field_slider_wide_pane_vc_t

0xc35e,	// (0x00033cec) input_focus_pane_cp10_vc_ParamLimits

0xc35e,	// (0x00033cec) input_focus_pane_cp10_vc

0x3edc,	// (0x0002b86a) slider_cont_pane_cp1_vc_ParamLimits

0x3edc,	// (0x0002b86a) slider_cont_pane_cp1_vc

0x3eee,	// (0x0002b87c) slider_form_pane_g1_cp2

0x3d1e,	// (0x0002b6ac) slider_form_pane_g2_cp2

0x3f1b,	// (0x0002b8a9) form_field_slider_pane_vc_t3

0x3f29,	// (0x0002b8b7) form_field_slider_pane_vc_t4

0x3f37,	// (0x0002b8c5) slider_form_pane_vc_ParamLimits

0x3f37,	// (0x0002b8c5) slider_form_pane_vc

0x3f44,	// (0x0002b8d2) form_field_slider_pane_vc_t1_ParamLimits

0x3f44,	// (0x0002b8d2) form_field_slider_pane_vc_t1

0x3eae,	// (0x0002b83c) form_field_slider_pane_vc_t2_ParamLimits

0x3eae,	// (0x0002b83c) form_field_slider_pane_vc_t2

0x0001,

0xfa6c,	// (0x000373fa) form_field_slider_pane_vc_t_ParamLimits

0xfa6c,	// (0x000373fa) form_field_slider_pane_vc_t

0xc35e,	// (0x00033cec) input_focus_pane_cp9_vc_ParamLimits

0xc35e,	// (0x00033cec) input_focus_pane_cp9_vc

0x3f60,	// (0x0002b8ee) slider_cont_pane_vc_ParamLimits

0x3f60,	// (0x0002b8ee) slider_cont_pane_vc

0x3f74,	// (0x0002b902) list_form_graphic_pane_cp_vc_ParamLimits

0x3f74,	// (0x0002b902) list_form_graphic_pane_cp_vc

0x0e75,	// (0x00028803) form_field_popup_wide_pane_vc_g1

0x3f89,	// (0x0002b917) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3f89,	// (0x0002b917) form_field_popup_wide_pane_vc_t1

0xc722,	// (0x000340b0) input_focus_pane_cp8_vc_ParamLimits

0xc722,	// (0x000340b0) input_focus_pane_cp8_vc

0x3fce,	// (0x0002b95c) list_form_wide_pane_vc_ParamLimits

0x3fce,	// (0x0002b95c) list_form_wide_pane_vc

0x3fda,	// (0x0002b968) list_form_graphic_pane_vc_g1

0x3fe2,	// (0x0002b970) list_form_graphic_pane_vc_t1_ParamLimits

0x3fe2,	// (0x0002b970) list_form_graphic_pane_vc_t1

0xc36c,	// (0x00033cfa) list_highlight_pane_cp5_vc_ParamLimits

0xc36c,	// (0x00033cfa) list_highlight_pane_cp5_vc

0x3ffe,	// (0x0002b98c) list_form_graphic_pane_vc_ParamLimits

0x3ffe,	// (0x0002b98c) list_form_graphic_pane_vc

0x0e75,	// (0x00028803) form_field_popup_pane_vc_g1

0x4014,	// (0x0002b9a2) form_field_popup_pane_vc_t1_ParamLimits

0x4014,	// (0x0002b9a2) form_field_popup_pane_vc_t1

0xc722,	// (0x000340b0) input_focus_pane_cp7_vc_ParamLimits

0xc722,	// (0x000340b0) input_focus_pane_cp7_vc

0x402b,	// (0x0002b9b9) list_form_pane_vc_ParamLimits

0x402b,	// (0x0002b9b9) list_form_pane_vc

0x4037,	// (0x0002b9c5) data_form_pane_vc_t1_ParamLimits

0x4037,	// (0x0002b9c5) data_form_pane_vc_t1

0xc77a,	// (0x00034108) input_focus_pane_vc_g1

0xc782,	// (0x00034110) input_focus_pane_vc_g2

0xc78a,	// (0x00034118) input_focus_pane_vc_g3

0xc792,	// (0x00034120) input_focus_pane_vc_g4

0xc79a,	// (0x00034128) input_focus_pane_vc_g5

0xc7a2,	// (0x00034130) input_focus_pane_vc_g6

0xc7aa,	// (0x00034138) input_focus_pane_vc_g7

0xc7b2,	// (0x00034140) input_focus_pane_vc_g8

0xc7ba,	// (0x00034148) input_focus_pane_vc_g9

0xc306,	// (0x00033c94) input_focus_pane_vc_g10

0x0009,

0xf651,	// (0x00036fdf) input_focus_pane_vc_g

0x0e69,	// (0x000287f7) data_form_pane_vc_ParamLimits

0x0e69,	// (0x000287f7) data_form_pane_vc

0x0e75,	// (0x00028803) form_field_data_pane_vc_g1

0x4052,	// (0x0002b9e0) form_field_data_pane_vc_t1_ParamLimits

0x4052,	// (0x0002b9e0) form_field_data_pane_vc_t1

0xc722,	// (0x000340b0) input_focus_pane_vc_ParamLimits

0xc722,	// (0x000340b0) input_focus_pane_vc

0x406c,	// (0x0002b9fa) button_value_adjust_pane_cp3_vc

0x4074,	// (0x0002ba02) button_value_adjust_pane_cp5_vc

0x407c,	// (0x0002ba0a) form_field_data_pane_vc_ParamLimits

0x407c,	// (0x0002ba0a) form_field_data_pane_vc

0x4093,	// (0x0002ba21) form_field_data_pane_vc_cp2

0x409b,	// (0x0002ba29) form_field_data_wide_pane_vc_ParamLimits

0x409b,	// (0x0002ba29) form_field_data_wide_pane_vc

0x40b1,	// (0x0002ba3f) form_field_data_wide_pane_vc_cp2

0x40b9,	// (0x0002ba47) form_field_popup_pane_vc_ParamLimits

0x40b9,	// (0x0002ba47) form_field_popup_pane_vc

0x40d0,	// (0x0002ba5e) form_field_popup_wide_pane_vc_ParamLimits

0x40d0,	// (0x0002ba5e) form_field_popup_wide_pane_vc

0x40e6,	// (0x0002ba74) form_field_slider_pane_vc_ParamLimits

0x40e6,	// (0x0002ba74) form_field_slider_pane_vc

0x40f9,	// (0x0002ba87) form_field_slider_wide_pane_vc_ParamLimits

0x40f9,	// (0x0002ba87) form_field_slider_wide_pane_vc

0xb5ae,	// (0x00032f3c) grid_touch_1_pane_ParamLimits

0xb5ae,	// (0x00032f3c) grid_touch_1_pane

0xb5c2,	// (0x00032f50) grid_touch_2_pane_ParamLimits

0xb5c2,	// (0x00032f50) grid_touch_2_pane

0x41dd,	// (0x0002bb6b) touch_pane_g1_ParamLimits

0x41dd,	// (0x0002bb6b) touch_pane_g1

0x4130,	// (0x0002babe) cell_app_pane_cp_wide_ParamLimits

0x4130,	// (0x0002babe) cell_app_pane_cp_wide

0x4141,	// (0x0002bacf) grid_popup_fast_wide_pane_ParamLimits

0x4141,	// (0x0002bacf) grid_popup_fast_wide_pane

0x4155,	// (0x0002bae3) scroll_pane_cp19_ParamLimits

0x4155,	// (0x0002bae3) scroll_pane_cp19

0xc310,	// (0x00033c9e) bg_popup_window_pane_cp20

0x4169,	// (0x0002baf7) listscroll_popup_fast_wide_pane

0xb5ec,	// (0x00032f7a) grid_indicator_nsta_pane

0x4183,	// (0x0002bb11) clock_nsta_pane_g1

0x418c,	// (0x0002bb1a) clock_nsta_pane_t1

0xb5f8,	// (0x00032f86) cell_indicator_nsta_pane_ParamLimits

0xb5f8,	// (0x00032f86) cell_indicator_nsta_pane

0x41dd,	// (0x0002bb6b) cell_indicator_nsta_pane_g1

0xb613,	// (0x00032fa1) cell_indicator_nsta_pane_g2

0x0001,

0xfa7d,	// (0x0003740b) cell_indicator_nsta_pane_g

0x41fd,	// (0x0002bb8b) clock_nsta_pane_cp

0x4206,	// (0x0002bb94) indicator_nsta_pane_cp

0x4210,	// (0x0002bb9e) nsta_clock_indic_pane_g1

0xc3a8,	// (0x00033d36) grid_indicator_pane

0x9974,	// (0x00031302) scroll_pane_cp29

0xf365,	// (0x00036cf3) indicator_nsta_pane_cp2_ParamLimits

0xf365,	// (0x00036cf3) indicator_nsta_pane_cp2

0xc36c,	// (0x00033cfa) main_apps_wheel_pane

0xabac,	// (0x0003253a) form_midp_field_text_pane_ParamLimits

0x11d6,	// (0x00028b64) scroll_bar_cp050_ParamLimits

0x4269,	// (0x0002bbf7) cell_indicator_pane_ParamLimits

0x4269,	// (0x0002bbf7) cell_indicator_pane

0x4282,	// (0x0002bc10) cell_indicator_pane_g1

0xb632,	// (0x00032fc0) grid_wheel_folder_pane_ParamLimits

0xb632,	// (0x00032fc0) grid_wheel_folder_pane

0xb640,	// (0x00032fce) list_wheel_apps_pane_ParamLimits

0xb640,	// (0x00032fce) list_wheel_apps_pane

0xb64e,	// (0x00032fdc) main_apps_wheel_pane_g1_ParamLimits

0xb64e,	// (0x00032fdc) main_apps_wheel_pane_g1

0xb65a,	// (0x00032fe8) main_apps_wheel_pane_g2_ParamLimits

0xb65a,	// (0x00032fe8) main_apps_wheel_pane_g2

0x0001,

0xfa99,	// (0x00037427) main_apps_wheel_pane_g_ParamLimits

0xfa99,	// (0x00037427) main_apps_wheel_pane_g

0xb668,	// (0x00032ff6) main_apps_wheel_pane_t1_ParamLimits

0xb668,	// (0x00032ff6) main_apps_wheel_pane_t1

0xb67c,	// (0x0003300a) list_wheel_apps_pane_g1

0xb684,	// (0x00033012) list_wheel_apps_pane_g2

0xb68c,	// (0x0003301a) list_wheel_apps_pane_g3

0xb694,	// (0x00033022) list_wheel_apps_pane_g4

0xb69e,	// (0x0003302c) list_wheel_apps_pane_g5

0x0004,

0xfa9e,	// (0x0003742c) list_wheel_apps_pane_g

0xce83,	// (0x00034811) navi_icon_text_pane

0xa608,	// (0x00031f96) aid_fill_nsta

0x4349,	// (0x0002bcd7) navi_icon_text_pane_g1

0x4355,	// (0x0002bce3) navi_icon_text_pane_t1

0xcd67,	// (0x000346f5) list_set_graphic_pane_t1_ParamLimits

0xcd67,	// (0x000346f5) list_set_graphic_pane_t1

0x2d23,	// (0x0002a6b1) popup_midp_note_alarm_window_t6_ParamLimits

0x2d23,	// (0x0002a6b1) popup_midp_note_alarm_window_t6

0x2d35,	// (0x0002a6c3) popup_midp_note_alarm_window_t7_ParamLimits

0x2d35,	// (0x0002a6c3) popup_midp_note_alarm_window_t7

0x2d47,	// (0x0002a6d5) popup_midp_note_alarm_window_t8_ParamLimits

0x2d47,	// (0x0002a6d5) popup_midp_note_alarm_window_t8

0x2d59,	// (0x0002a6e7) popup_midp_note_alarm_window_t9_ParamLimits

0x2d59,	// (0x0002a6e7) popup_midp_note_alarm_window_t9

0x2d6b,	// (0x0002a6f9) popup_midp_note_alarm_window_t10_ParamLimits

0x2d6b,	// (0x0002a6f9) popup_midp_note_alarm_window_t10

0x2d7d,	// (0x0002a70b) popup_midp_note_alarm_window_t11_ParamLimits

0x2d7d,	// (0x0002a70b) popup_midp_note_alarm_window_t11

0xaef8,	// (0x00032886) scroll_pane_cp17_ParamLimits

0xaef8,	// (0x00032886) scroll_pane_cp17

0x15b6,	// (0x00028f44) volume_small_pane_cp_g1

0x1902,	// (0x00029290) volume_small_pane_cp_g2

0x190b,	// (0x00029299) volume_small_pane_cp_g3

0x1914,	// (0x000292a2) volume_small_pane_cp_g4

0x191d,	// (0x000292ab) volume_small_pane_cp_g5

0x18cc,	// (0x0002925a) volume_small_pane_cp_g6

0x1926,	// (0x000292b4) volume_small_pane_cp_g7

0x192f,	// (0x000292bd) volume_small_pane_cp_g8

0x1938,	// (0x000292c6) volume_small_pane_cp_g9

0x1941,	// (0x000292cf) volume_small_pane_cp_g10

0xcff9,	// (0x00034987) midp_ticker_pane_g1_ParamLimits

0xd005,	// (0x00034993) midp_ticker_pane_g2_ParamLimits

0xf71d,	// (0x000370ab) midp_ticker_pane_g_ParamLimits

0xd011,	// (0x0003499f) midp_ticker_pane_t1_ParamLimits

0xa62c,	// (0x00031fba) aid_fill_nsta_2

0x11c2,	// (0x00028b50) list_form2_midp_pane

0x36c7,	// (0x0002b055) midp_editing_number_pane_ParamLimits

0x36d6,	// (0x0002b064) midp_ticker_pane_ParamLimits

0x4367,	// (0x0002bcf5) form2_midp_field_pane

0x438b,	// (0x0002bd19) scroll_pane_cp51

0x43ab,	// (0x0002bd39) form2_midp_button_pane_ParamLimits

0x43ab,	// (0x0002bd39) form2_midp_button_pane

0x43bd,	// (0x0002bd4b) form2_midp_content_pane_ParamLimits

0x43bd,	// (0x0002bd4b) form2_midp_content_pane

0x43d7,	// (0x0002bd65) form2_midp_field_choice_group_pane

0x43df,	// (0x0002bd6d) form2_midp_field_pane_g1

0x43e7,	// (0x0002bd75) form2_midp_field_pane_g2

0x43ef,	// (0x0002bd7d) form2_midp_field_pane_g3

0x43f7,	// (0x0002bd85) form2_midp_field_pane_g4

0x0003,

0xfac3,	// (0x00037451) form2_midp_field_pane_g

0x43ff,	// (0x0002bd8d) form2_midp_gauge_slider_pane

0x4407,	// (0x0002bd95) form2_midp_gauge_wait_pane

0x440f,	// (0x0002bd9d) form2_midp_image_pane_ParamLimits

0x440f,	// (0x0002bd9d) form2_midp_image_pane

0xb6d1,	// (0x0003305f) form2_midp_label_pane_ParamLimits

0xb6d1,	// (0x0003305f) form2_midp_label_pane

0xb6ea,	// (0x00033078) form2_midp_label_pane_cp_ParamLimits

0xb6ea,	// (0x00033078) form2_midp_label_pane_cp

0x4464,	// (0x0002bdf2) form2_midp_string_pane_ParamLimits

0x4464,	// (0x0002bdf2) form2_midp_string_pane

0xee6e,	// (0x000367fc) form2_midp_text_pane_ParamLimits

0xee6e,	// (0x000367fc) form2_midp_text_pane

0x4476,	// (0x0002be04) form2_midp_time_pane

0x4486,	// (0x0002be14) input_focus_pane_cp51_ParamLimits

0x4486,	// (0x0002be14) input_focus_pane_cp51

0xb709,	// (0x00033097) form2_midp_label_pane_t1_ParamLimits

0xb709,	// (0x00033097) form2_midp_label_pane_t1

0xee87,	// (0x00036815) form2_mdip_text_pane_t1_ParamLimits

0xee87,	// (0x00036815) form2_mdip_text_pane_t1

0xeea5,	// (0x00036833) form2_midp_time_pane_t1

0x44e7,	// (0x0002be75) form2_midp_gauge_slider_pane_t1

0xb749,	// (0x000330d7) form2_midp_gauge_slider_pane_t2

0xb75b,	// (0x000330e9) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacc,	// (0x0003745a) form2_midp_gauge_slider_pane_t

0x451d,	// (0x0002beab) form2_midp_slider_pane

0x4529,	// (0x0002beb7) form2_midp_gauge_wait_pane_t1

0x4537,	// (0x0002bec5) form2_midp_wait_pane_ParamLimits

0x4537,	// (0x0002bec5) form2_midp_wait_pane

0xb76d,	// (0x000330fb) list_single_2graphic_pane_cp4_ParamLimits

0xb76d,	// (0x000330fb) list_single_2graphic_pane_cp4

0xab03,	// (0x00032491) list_single_midp_graphic_pane_cp_ParamLimits

0xab03,	// (0x00032491) list_single_midp_graphic_pane_cp

0xc310,	// (0x00033c9e) list_highlight_pane_cp20

0x458a,	// (0x0002bf18) list_single_2graphic_pane_g1_cp4

0x3b67,	// (0x0002b4f5) list_single_2graphic_pane_g2_cp4

0x4592,	// (0x0002bf20) list_single_2graphic_pane_t1_cp4

0xc36c,	// (0x00033cfa) list_highlight_pane_cp21

0x45a1,	// (0x0002bf2f) list_single_midp_graphic_pane_g4_cp

0x45b0,	// (0x0002bf3e) list_single_midp_graphic_pane_t1_cp

0xb782,	// (0x00033110) form2_mdip_string_pane_t1_ParamLimits

0xb782,	// (0x00033110) form2_mdip_string_pane_t1

0xc310,	// (0x00033c9e) bg_wml_button_pane_cp2

0xc306,	// (0x00033c94) form2_midp_image_pane_g1

0xe90f,	// (0x0003629d) list_double_large_graphic_pane_g5_ParamLimits

0xe90f,	// (0x0003629d) list_double_large_graphic_pane_g5

0x9b74,	// (0x00031502) midp_form_pane_ParamLimits

0xc36c,	// (0x00033cfa) main_apps_wheel_pane_ParamLimits

0xa2e6,	// (0x00031c74) popup_preview_window_ParamLimits

0xa2e6,	// (0x00031c74) popup_preview_window

0xa5b3,	// (0x00031f41) popup_touch_info_window_ParamLimits

0xa5b3,	// (0x00031f41) popup_touch_info_window

0xa5d1,	// (0x00031f5f) popup_touch_menu_window_ParamLimits

0xa5d1,	// (0x00031f5f) popup_touch_menu_window

0xc2fc,	// (0x00033c8a) bg_popup_sub_pane_cp6

0x46cc,	// (0x0002c05a) list_touch_menu_pane

0xb7f8,	// (0x00033186) list_single_touch_menu_pane_ParamLimits

0xb7f8,	// (0x00033186) list_single_touch_menu_pane

0xb80c,	// (0x0003319a) list_single_touch_menu_pane_t1

0xc36c,	// (0x00033cfa) bg_popup_sub_pane_cp7_ParamLimits

0xc36c,	// (0x00033cfa) bg_popup_sub_pane_cp7

0x11f6,	// (0x00028b84) heading_sub_pane

0x46f8,	// (0x0002c086) list_touch_info_pane_ParamLimits

0x46f8,	// (0x0002c086) list_touch_info_pane

0x4708,	// (0x0002c096) list_single_touch_info_pane_ParamLimits

0x4708,	// (0x0002c096) list_single_touch_info_pane

0x471a,	// (0x0002c0a8) list_single_touch_info_pane_t1

0x4728,	// (0x0002c0b6) list_single_touch_info_pane_t2

0x0001,

0xfada,	// (0x00037468) list_single_touch_info_pane_t

0xcfe2,	// (0x00034970) bg_popup_heading_pane_cp

0x4736,	// (0x0002c0c4) heading_sub_pane_t1

0x0d7b,	// (0x00028709) bg_popup_preview_window_pane_cp_ParamLimits

0x0d7b,	// (0x00028709) bg_popup_preview_window_pane_cp

0x11f6,	// (0x00028b84) heading_preview_pane

0x46f8,	// (0x0002c086) list_preview_pane_ParamLimits

0x46f8,	// (0x0002c086) list_preview_pane

0x4744,	// (0x0002c0d2) popup_preview_window_g1

0x4708,	// (0x0002c096) list_single_preview_pane_ParamLimits

0x4708,	// (0x0002c096) list_single_preview_pane

0x474c,	// (0x0002c0da) list_single_preview_pane_g1

0x4754,	// (0x0002c0e2) list_single_preview_pane_t1

0x471a,	// (0x0002c0a8) list_single_preview_pane_t2

0x0001,

0xfadf,	// (0x0003746d) list_single_preview_pane_t

0x4762,	// (0x0002c0f0) bg_popup_heading_pane_cp2_ParamLimits

0x4762,	// (0x0002c0f0) bg_popup_heading_pane_cp2

0x4778,	// (0x0002c106) heading_preview_pane_g1

0x4780,	// (0x0002c10e) heading_preview_pane_t1_ParamLimits

0x4780,	// (0x0002c10e) heading_preview_pane_t1

0xc3bf,	// (0x00033d4d) soft_indicator_pane_t1_ParamLimits

0xc69e,	// (0x0003402c) scroll_pane_ParamLimits

0xca47,	// (0x000343d5) scroll_sc2_left_pane

0xca50,	// (0x000343de) scroll_sc2_right_pane

0xca6f,	// (0x000343fd) scroll_bg_pane_g1_ParamLimits

0xca84,	// (0x00034412) scroll_bg_pane_g2_ParamLimits

0xca9c,	// (0x0003442a) scroll_bg_pane_g3_ParamLimits

0xf6a8,	// (0x00037036) scroll_bg_pane_g_ParamLimits

0xca6f,	// (0x000343fd) scroll_handle_pane_g1_ParamLimits

0xcab1,	// (0x0003443f) scroll_handle_pane_g2_ParamLimits

0xca9c,	// (0x0003442a) scroll_handle_pane_g3_ParamLimits

0xf6af,	// (0x0003703d) scroll_handle_pane_g_ParamLimits

0x9eb3,	// (0x00031841) popup_choice_list_window_ParamLimits

0x9eb3,	// (0x00031841) popup_choice_list_window

0x0b91,	// (0x0002851f) choice_list_pane

0x0c43,	// (0x000285d1) cell_toolbar_pane_t1

0x0c6b,	// (0x000285f9) toolbar_button_pane_ParamLimits

0x3249,	// (0x0002abd7) ai_gene_pane_1_t2_ParamLimits

0x3249,	// (0x0002abd7) ai_gene_pane_1_t2

0x0001,

0xf8d2,	// (0x00037260) ai_gene_pane_1_t_ParamLimits

0xf8d2,	// (0x00037260) ai_gene_pane_1_t

0x479d,	// (0x0002c12b) scroll_sc2_left_pane_g1

0x479d,	// (0x0002c12b) scroll_sc2_right_pane_g1

0xc864,	// (0x000341f2) bg_popup_sub_pane_cp10

0x47a7,	// (0x0002c135) list_choice_list_pane

0xb390,	// (0x00032d1e) list_single_choice_list_pane_ParamLimits

0xb390,	// (0x00032d1e) list_single_choice_list_pane

0xd196,	// (0x00034b24) list_single_choice_list_pane_g1

0x979e,	// (0x0003112c) list_single_choice_list_pane_t1_ParamLimits

0x979e,	// (0x0003112c) list_single_choice_list_pane_t1

0x47db,	// (0x0002c169) choice_list_pane_g1

0xb81a,	// (0x000331a8) choice_list_pane_t1

0xc2fc,	// (0x00033c8a) input_focus_pane_cp11

0xc9bc,	// (0x0003434a) title_pane_stacon_g2_ParamLimits

0xc9bc,	// (0x0003434a) title_pane_stacon_g2

0x0002,

0xf68e,	// (0x0003701c) title_pane_stacon_g_ParamLimits

0xf68e,	// (0x0003701c) title_pane_stacon_g

0xcfe2,	// (0x00034970) cursor_press_pane

0x9f5a,	// (0x000318e8) popup_fep_hwr_window_ParamLimits

0x9f5a,	// (0x000318e8) popup_fep_hwr_window

0x02e7,	// (0x00027c75) popup_fep_vkb_window_ParamLimits

0x02e7,	// (0x00027c75) popup_fep_vkb_window

0xb828,	// (0x000331b6) cursor_press_pane_g1

0x0002,

0xfb08,	// (0x00037496) fep_vkb_side_pane_g_ParamLimits

0x1983,	// (0x00029311) fep_hwr_candidate_pane_ParamLimits

0x1983,	// (0x00029311) fep_hwr_candidate_pane

0x19ad,	// (0x0002933b) fep_hwr_side_pane_ParamLimits

0x19ad,	// (0x0002933b) fep_hwr_side_pane

0x19cd,	// (0x0002935b) fep_hwr_top_pane_ParamLimits

0x19cd,	// (0x0002935b) fep_hwr_top_pane

0x19e5,	// (0x00029373) fep_hwr_write_pane_ParamLimits

0x19e5,	// (0x00029373) fep_hwr_write_pane

0xfb08,	// (0x00037496) fep_vkb_side_pane_g

0x47f9,	// (0x0002c187) fep_hwr_top_pane_g1

0x480b,	// (0x0002c199) fep_hwr_top_pane_g2

0x1a11,	// (0x0002939f) fep_hwr_top_pane_g3

0x0002,

0xfae4,	// (0x00037472) fep_hwr_top_pane_g

0x1a26,	// (0x000293b4) fep_hwr_top_text_pane

0xcb74,	// (0x00034502) fep_hwr_top_text_pane_g1

0x4841,	// (0x0002c1cf) fep_hwr_top_text_pane_t1

0x1b1c,	// (0x000294aa) fep_hwr_candidate_pane_g1

0x4a86,	// (0x0002c414) fep_vkb_keypad_pane_g3_ParamLimits

0x4a86,	// (0x0002c414) fep_vkb_keypad_pane_g3

0x4aae,	// (0x0002c43c) fep_vkb_keypad_pane_g4_ParamLimits

0x4aae,	// (0x0002c43c) fep_vkb_keypad_pane_g4

0x4b1d,	// (0x0002c4ab) fep_vkb_bottom_pane_g2_ParamLimits

0x4b1d,	// (0x0002c4ab) fep_vkb_bottom_pane_g2

0x0001,

0xfb0f,	// (0x0003749d) fep_vkb_bottom_pane_g_ParamLimits

0xfb0f,	// (0x0003749d) fep_vkb_bottom_pane_g

0x479d,	// (0x0002c12b) cell_vkb_side_pane_g2

0x0001,

0xfb19,	// (0x000374a7) cell_vkb_side_pane_g

0x4ba8,	// (0x0002c536) cell_vkb_side_pane_t1

0x4bb6,	// (0x0002c544) cell_vkb_side_pane_t1_copy1

0x479d,	// (0x0002c12b) bg_fep_vkb_candidate_pane_g2

0x4ce2,	// (0x0002c670) cell_vkb_candidate_pane_ParamLimits

0x484f,	// (0x0002c1dd) aid_size_cell_vkb_ParamLimits

0x484f,	// (0x0002c1dd) aid_size_cell_vkb

0x4ce2,	// (0x0002c670) cell_vkb_candidate_pane

0x1b36,	// (0x000294c4) bg_popup_fep_shadow_pane_g1

0xb88f,	// (0x0003321d) fep_vkb_bottom_pane_ParamLimits

0xb88f,	// (0x0003321d) fep_vkb_bottom_pane

0x4913,	// (0x0002c2a1) fep_vkb_candidate_pane_ParamLimits

0x4913,	// (0x0002c2a1) fep_vkb_candidate_pane

0xb8b4,	// (0x00033242) fep_vkb_keypad_pane_ParamLimits

0xb8b4,	// (0x00033242) fep_vkb_keypad_pane

0xb8e9,	// (0x00033277) fep_vkb_side_pane_ParamLimits

0xb8e9,	// (0x00033277) fep_vkb_side_pane

0xb925,	// (0x000332b3) fep_vkb_top_pane_ParamLimits

0xb925,	// (0x000332b3) fep_vkb_top_pane

0x49df,	// (0x0002c36d) fep_vkb_top_pane_g1_ParamLimits

0x49df,	// (0x0002c36d) fep_vkb_top_pane_g1

0x49ee,	// (0x0002c37c) fep_vkb_top_pane_g2_ParamLimits

0x49ee,	// (0x0002c37c) fep_vkb_top_pane_g2

0x49fd,	// (0x0002c38b) fep_vkb_top_pane_g3_ParamLimits

0x49fd,	// (0x0002c38b) fep_vkb_top_pane_g3

0x0003,

0xfaff,	// (0x0003748d) fep_vkb_top_pane_g_ParamLimits

0xfaff,	// (0x0003748d) fep_vkb_top_pane_g

0x4a1b,	// (0x0002c3a9) fep_vkb_top_text_pane_ParamLimits

0x4a1b,	// (0x0002c3a9) fep_vkb_top_text_pane

0xb95a,	// (0x000332e8) fep_vkb_side_pane_g1_ParamLimits

0xb95a,	// (0x000332e8) fep_vkb_side_pane_g1

0x4a75,	// (0x0002c403) grid_vkb_side_pane_ParamLimits

0x4a75,	// (0x0002c403) grid_vkb_side_pane

0x1b3e,	// (0x000294cc) bg_popup_fep_shadow_pane_g2

0x1b47,	// (0x000294d5) bg_popup_fep_shadow_pane_g3

0x1b4f,	// (0x000294dd) bg_popup_fep_shadow_pane_g4

0x1b58,	// (0x000294e6) bg_popup_fep_shadow_pane_g5

0x1b62,	// (0x000294f0) bg_popup_fep_shadow_pane_g6

0x1b6a,	// (0x000294f8) bg_popup_fep_shadow_pane_g7

0xc79a,	// (0x00034128) bg_popup_fep_shadow_pane_g8

0x4acc,	// (0x0002c45a) grid_vkb_keypad_number_pane_ParamLimits

0x4acc,	// (0x0002c45a) grid_vkb_keypad_number_pane

0x4adc,	// (0x0002c46a) grid_vkb_keypad_pane_ParamLimits

0x4adc,	// (0x0002c46a) grid_vkb_keypad_pane

0x4b02,	// (0x0002c490) fep_vkb_bottom_pane_g1_ParamLimits

0x4b02,	// (0x0002c490) fep_vkb_bottom_pane_g1

0x4b2b,	// (0x0002c4b9) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4b2b,	// (0x0002c4b9) grid_vkb_keypad_bottom_left_pane

0x4b40,	// (0x0002c4ce) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4b40,	// (0x0002c4ce) grid_vkb_keypad_bottom_right_pane

0x4b55,	// (0x0002c4e3) fep_vkb_top_text_pane_g1

0xb9a1,	// (0x0003332f) fep_vkb_top_text_pane_t1

0xb9b3,	// (0x00033341) cell_vkb_side_pane_ParamLimits

0xb9b3,	// (0x00033341) cell_vkb_side_pane

0x479d,	// (0x0002c12b) cell_vkb_side_pane_g1

0x4bc4,	// (0x0002c552) cell_vkb_keypad_pane_ParamLimits

0x4bc4,	// (0x0002c552) cell_vkb_keypad_pane

0x4c39,	// (0x0002c5c7) cell_vkb_keypad_pane_g1

0x0008,

0xfb2c,	// (0x000374ba) bg_popup_fep_shadow_pane_g

0x479d,	// (0x0002c12b) cell_hwr_side_pane_g1

0x479d,	// (0x0002c12b) cell_hwr_side_pane_g2

0x4c43,	// (0x0002c5d1) cell_vkb_keypad_pane_t1

0xb9c9,	// (0x00033357) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb9c9,	// (0x00033357) cell_vkb_keypad_bottom_left_pane

0xb9de,	// (0x0003336c) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb9de,	// (0x0003336c) cell_vkb_keypad_bottom_right_pane

0x479d,	// (0x0002c12b) cell_vkb_keypad_bottom_left_pane_g1

0x479d,	// (0x0002c12b) cell_vkb_keypad_bottom_right_pane_g1

0x4ca7,	// (0x0002c635) cell_vkb_keypad_number_pane_ParamLimits

0x4ca7,	// (0x0002c635) cell_vkb_keypad_number_pane

0x4cc6,	// (0x0002c654) cell_vkb_keypad_number_pane_g1

0x4cd0,	// (0x0002c65e) cell_vkb_keypad_number_pane_g2

0x4cd9,	// (0x0002c667) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1e,	// (0x000374ac) cell_vkb_keypad_number_pane_g

0x4c43,	// (0x0002c5d1) cell_vkb_keypad_number_pane_t1

0x4cfd,	// (0x0002c68b) fep_vkb_candidate_pane_g1

0x0001,

0xfb19,	// (0x000374a7) cell_hwr_side_pane_g

0x4d16,	// (0x0002c6a4) cell_hwr_side_pane_t1

0x1b7c,	// (0x0002950a) cell_hwr_side_pane_t1_copy1

0x4a0d,	// (0x0002c39b) cell_hwr_candidate_pane_g1

0x1b8a,	// (0x00029518) cell_hwr_candidate_pane_t1

0x479d,	// (0x0002c12b) cell_vkb_candidate_pane_g2

0x4d9c,	// (0x0002c72a) cell_vkb_candidate_pane_t1

0x194a,	// (0x000292d8) bg_popup_fep_shadow_pane_ParamLimits

0x194a,	// (0x000292d8) bg_popup_fep_shadow_pane

0xd19e,	// (0x00034b2c) bg_fep_hwr_top_pane_g4

0x481d,	// (0x0002c1ab) bg_hwr_side_pane_g1_ParamLimits

0x481d,	// (0x0002c1ab) bg_hwr_side_pane_g1

0xb848,	// (0x000331d6) cell_hwr_side_pane_ParamLimits

0xb848,	// (0x000331d6) cell_hwr_side_pane

0x1a9d,	// (0x0002942b) fep_hwr_write_pane_g1_ParamLimits

0x1a9d,	// (0x0002942b) fep_hwr_write_pane_g1

0x1aaa,	// (0x00029438) fep_hwr_write_pane_g2_ParamLimits

0x1aaa,	// (0x00029438) fep_hwr_write_pane_g2

0x1ab7,	// (0x00029445) fep_hwr_write_pane_g3_ParamLimits

0x1ab7,	// (0x00029445) fep_hwr_write_pane_g3

0xb868,	// (0x000331f6) fep_hwr_write_pane_g4_ParamLimits

0xb868,	// (0x000331f6) fep_hwr_write_pane_g4

0x0005,

0xfaeb,	// (0x00037479) fep_hwr_write_pane_g_ParamLimits

0xfaeb,	// (0x00037479) fep_hwr_write_pane_g

0xd19e,	// (0x00034b2c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd19e,	// (0x00034b2c) bg_fep_hwr_candidate_pane_g2

0x1ada,	// (0x00029468) cell_hwr_candidate_pane_ParamLimits

0x1ada,	// (0x00029468) cell_hwr_candidate_pane

0x1b1c,	// (0x000294aa) fep_hwr_candidate_pane_g1_ParamLimits

0x487d,	// (0x0002c20b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x487d,	// (0x0002c20b) bg_popup_fep_shadow_pane_cp2

0x4a0d,	// (0x0002c39b) fep_vkb_top_pane_g4_ParamLimits

0x4a0d,	// (0x0002c39b) fep_vkb_top_pane_g4

0x4a53,	// (0x0002c3e1) fep_vkb_side_pane_g2_ParamLimits

0x4a53,	// (0x0002c3e1) fep_vkb_side_pane_g2

0x8827,	// (0x000301b5) list_setting_pane_t4_ParamLimits

0x8827,	// (0x000301b5) list_setting_pane_t4

0xe9c3,	// (0x00036351) list_setting_number_pane_t5_ParamLimits

0xe9c3,	// (0x00036351) list_setting_number_pane_t5

0xcbab,	// (0x00034539) list_double_heading_pane_cp2_ParamLimits

0xcbab,	// (0x00034539) list_double_heading_pane_cp2

0xd1c6,	// (0x00034b54) list_double_heading_pane_g1_cp2_ParamLimits

0xd1c6,	// (0x00034b54) list_double_heading_pane_g1_cp2

0x4daa,	// (0x0002c738) list_double_heading_pane_g2_cp2_ParamLimits

0x4daa,	// (0x0002c738) list_double_heading_pane_g2_cp2

0x4dbe,	// (0x0002c74c) list_double_heading_pane_t1_cp2_ParamLimits

0x4dbe,	// (0x0002c74c) list_double_heading_pane_t1_cp2

0x4dd4,	// (0x0002c762) list_double_heading_pane_t2_cp2_ParamLimits

0x4dd4,	// (0x0002c762) list_double_heading_pane_t2_cp2

0xc2f4,	// (0x00033c82) aid_value_unit2

0xe80d,	// (0x0003619b) popup_preview_fixed_window

0xc496,	// (0x00033e24) bg_popup_preview_window_pane_cp02

0x4de6,	// (0x0002c774) list_preview_fixed_pane

0x4e2c,	// (0x0002c7ba) list_empty_pane_fp_ParamLimits

0x4e2c,	// (0x0002c7ba) list_empty_pane_fp

0x4e2c,	// (0x0002c7ba) list_single_cale_day_pane_fp_ParamLimits

0x4e2c,	// (0x0002c7ba) list_single_cale_day_pane_fp

0x4e2c,	// (0x0002c7ba) list_single_graphic_heading_pane_fp_ParamLimits

0x4e2c,	// (0x0002c7ba) list_single_graphic_heading_pane_fp

0x4e2c,	// (0x0002c7ba) list_single_graphic_pane_fp_ParamLimits

0x4e2c,	// (0x0002c7ba) list_single_graphic_pane_fp

0x4e2c,	// (0x0002c7ba) list_single_heading_pane_fp_ParamLimits

0x4e2c,	// (0x0002c7ba) list_single_heading_pane_fp

0x4e2c,	// (0x0002c7ba) list_single_pane_fp_ParamLimits

0x4e2c,	// (0x0002c7ba) list_single_pane_fp

0x4e42,	// (0x0002c7d0) list_single_pane_fp_g1_ParamLimits

0x4e42,	// (0x0002c7d0) list_single_pane_fp_g1

0xe8f7,	// (0x00036285) list_single_pane_fp_g2_ParamLimits

0xe8f7,	// (0x00036285) list_single_pane_fp_g2

0xeeb8,	// (0x00036846) list_single_pane_fp_g3_ParamLimits

0xeeb8,	// (0x00036846) list_single_pane_fp_g3

0x4e4e,	// (0x0002c7dc) list_single_pane_fp_g4_ParamLimits

0x4e4e,	// (0x0002c7dc) list_single_pane_fp_g4

0x0003,

0xfb4d,	// (0x000374db) list_single_pane_fp_g_ParamLimits

0xfb4d,	// (0x000374db) list_single_pane_fp_g

0xeecc,	// (0x0003685a) list_single_pane_fp_t1_ParamLimits

0xeecc,	// (0x0003685a) list_single_pane_fp_t1

0xeee3,	// (0x00036871) list_single_graphic_pane_fp_g1_ParamLimits

0xeee3,	// (0x00036871) list_single_graphic_pane_fp_g1

0x4e42,	// (0x0002c7d0) list_single_graphic_pane_fp_g2_ParamLimits

0x4e42,	// (0x0002c7d0) list_single_graphic_pane_fp_g2

0xe8f7,	// (0x00036285) list_single_graphic_pane_fp_g3_ParamLimits

0xe8f7,	// (0x00036285) list_single_graphic_pane_fp_g3

0xeeb8,	// (0x00036846) list_single_graphic_pane_fp_g4_ParamLimits

0xeeb8,	// (0x00036846) list_single_graphic_pane_fp_g4

0x4e4e,	// (0x0002c7dc) list_single_graphic_pane_fp_g5_ParamLimits

0x4e4e,	// (0x0002c7dc) list_single_graphic_pane_fp_g5

0x0004,

0xfb56,	// (0x000374e4) list_single_graphic_pane_fp_g_ParamLimits

0xfb56,	// (0x000374e4) list_single_graphic_pane_fp_g

0xeeef,	// (0x0003687d) list_single_graphic_pane_fp_t1_ParamLimits

0xeeef,	// (0x0003687d) list_single_graphic_pane_fp_t1

0xeee3,	// (0x00036871) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xeee3,	// (0x00036871) list_single_graphic_heading_pane_fp_g1

0x4e42,	// (0x0002c7d0) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4e42,	// (0x0002c7d0) list_single_graphic_heading_pane_fp_g2

0xe8f7,	// (0x00036285) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe8f7,	// (0x00036285) list_single_graphic_heading_pane_fp_g3

0xeeb8,	// (0x00036846) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xeeb8,	// (0x00036846) list_single_graphic_heading_pane_fp_g4

0x4e4e,	// (0x0002c7dc) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4e4e,	// (0x0002c7dc) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb56,	// (0x000374e4) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb56,	// (0x000374e4) list_single_graphic_heading_pane_fp_g

0xef05,	// (0x00036893) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xef05,	// (0x00036893) list_single_graphic_heading_pane_fp_t1

0xef1b,	// (0x000368a9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xef1b,	// (0x000368a9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb61,	// (0x000374ef) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb61,	// (0x000374ef) list_single_graphic_heading_pane_fp_t

0xef2d,	// (0x000368bb) list_single_cale_day_pane_fp_g1_ParamLimits

0xef2d,	// (0x000368bb) list_single_cale_day_pane_fp_g1

0x4e5a,	// (0x0002c7e8) list_single_cale_day_pane_fp_g2_ParamLimits

0x4e5a,	// (0x0002c7e8) list_single_cale_day_pane_fp_g2

0xef65,	// (0x000368f3) list_single_cale_day_pane_fp_g3_ParamLimits

0xef65,	// (0x000368f3) list_single_cale_day_pane_fp_g3

0xef8d,	// (0x0003691b) list_single_cale_day_pane_fp_g4_ParamLimits

0xef8d,	// (0x0003691b) list_single_cale_day_pane_fp_g4

0xefb1,	// (0x0003693f) list_single_cale_day_pane_fp_g5_ParamLimits

0xefb1,	// (0x0003693f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb66,	// (0x000374f4) list_single_cale_day_pane_fp_g_ParamLimits

0xfb66,	// (0x000374f4) list_single_cale_day_pane_fp_g

0xefd5,	// (0x00036963) list_single_cale_day_pane_fp_t1_ParamLimits

0xefd5,	// (0x00036963) list_single_cale_day_pane_fp_t1

0xeffb,	// (0x00036989) list_single_cale_day_pane_fp_t2_ParamLimits

0xeffb,	// (0x00036989) list_single_cale_day_pane_fp_t2

0xf014,	// (0x000369a2) list_single_cale_day_pane_fp_t3_ParamLimits

0xf014,	// (0x000369a2) list_single_cale_day_pane_fp_t3

0x0002,

0xfb71,	// (0x000374ff) list_single_cale_day_pane_fp_t_ParamLimits

0xfb71,	// (0x000374ff) list_single_cale_day_pane_fp_t

0x4e42,	// (0x0002c7d0) list_empty_pane_fp_g1_ParamLimits

0x4e42,	// (0x0002c7d0) list_empty_pane_fp_g1

0xf02d,	// (0x000369bb) list_empty_pane_fp_t1

0xf03b,	// (0x000369c9) list_empty_pane_fp_t2

0x0001,

0xfb78,	// (0x00037506) list_empty_pane_fp_t

0x4e42,	// (0x0002c7d0) list_single_heading_pane_fp_g1_ParamLimits

0x4e42,	// (0x0002c7d0) list_single_heading_pane_fp_g1

0xe8f7,	// (0x00036285) list_single_heading_pane_fp_g2_ParamLimits

0xe8f7,	// (0x00036285) list_single_heading_pane_fp_g2

0xeeb8,	// (0x00036846) list_single_heading_pane_fp_g3_ParamLimits

0xeeb8,	// (0x00036846) list_single_heading_pane_fp_g3

0x0002,

0xfb7d,	// (0x0003750b) list_single_heading_pane_fp_g_ParamLimits

0xfb7d,	// (0x0003750b) list_single_heading_pane_fp_g

0xf049,	// (0x000369d7) list_single_heading_pane_fp_t1_ParamLimits

0xf049,	// (0x000369d7) list_single_heading_pane_fp_t1

0xf05b,	// (0x000369e9) list_single_heading_pane_fp_t2_ParamLimits

0xf05b,	// (0x000369e9) list_single_heading_pane_fp_t2

0x0001,

0xfb84,	// (0x00037512) list_single_heading_pane_fp_t_ParamLimits

0xfb84,	// (0x00037512) list_single_heading_pane_fp_t

0x97ea,	// (0x00031178) aid_size_cell_fast

0xc479,	// (0x00033e07) soft_indicator_pane_cp1_t1

0x97f3,	// (0x00031181) cell_app_pane_cp2_ParamLimits

0x97f3,	// (0x00031181) cell_app_pane_cp2

0x196c,	// (0x000292fa) fep_hwr_candidate_drop_down_list_pane

0xd1ac,	// (0x00034b3a) fep_hwr_candidate_pane_g3_ParamLimits

0xd1ac,	// (0x00034b3a) fep_hwr_candidate_pane_g3

0xd1b9,	// (0x00034b47) fep_hwr_candidate_pane_g4_ParamLimits

0xd1b9,	// (0x00034b47) fep_hwr_candidate_pane_g4

0x0002,

0xfaf8,	// (0x00037486) fep_hwr_candidate_pane_g_ParamLimits

0xfaf8,	// (0x00037486) fep_hwr_candidate_pane_g

0x4902,	// (0x0002c290) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4902,	// (0x0002c290) fep_vkb_candidate_drop_down_list_pane

0x4d05,	// (0x0002c693) fep_vkb_candidate_pane_g3

0x4d0d,	// (0x0002c69b) fep_vkb_candidate_pane_g4

0x0002,

0xfb25,	// (0x000374b3) fep_vkb_candidate_pane_g

0x4a0d,	// (0x0002c39b) cell_hwr_candidate_pane_g1_ParamLimits

0x4d24,	// (0x0002c6b2) cell_hwr_candidate_pane_g3_ParamLimits

0x4d24,	// (0x0002c6b2) cell_hwr_candidate_pane_g3

0x4d45,	// (0x0002c6d3) cell_hwr_candidate_pane_g4_ParamLimits

0x4d45,	// (0x0002c6d3) cell_hwr_candidate_pane_g4

0x0002,

0xfb3f,	// (0x000374cd) cell_hwr_candidate_pane_g_ParamLimits

0xfb3f,	// (0x000374cd) cell_hwr_candidate_pane_g

0x4d66,	// (0x0002c6f4) cell_vkb_candidate_pane_g3_ParamLimits

0x4d66,	// (0x0002c6f4) cell_vkb_candidate_pane_g3

0x4d81,	// (0x0002c70f) cell_vkb_candidate_pane_g4_ParamLimits

0x4d81,	// (0x0002c70f) cell_vkb_candidate_pane_g4

0xb9f9,	// (0x00033387) cell_app_pane_cp2_g1_ParamLimits

0xb9f9,	// (0x00033387) cell_app_pane_cp2_g1

0x4e84,	// (0x0002c812) cell_app_pane_cp2_g2_ParamLimits

0x4e84,	// (0x0002c812) cell_app_pane_cp2_g2

0x0001,

0xfb89,	// (0x00037517) cell_app_pane_cp2_g_ParamLimits

0xfb89,	// (0x00037517) cell_app_pane_cp2_g

0x4e90,	// (0x0002c81e) cell_app_pane_cp2_t1_ParamLimits

0x4e90,	// (0x0002c81e) cell_app_pane_cp2_t1

0xc722,	// (0x000340b0) grid_highlight_pane_cp1_ParamLimits

0xc722,	// (0x000340b0) grid_highlight_pane_cp1

0x1ba8,	// (0x00029536) cell_hwr_candidate_pane_cp1_ParamLimits

0x1ba8,	// (0x00029536) cell_hwr_candidate_pane_cp1

0x4a0d,	// (0x0002c39b) fep_hwr_candidate_drop_down_list_pane_g1

0x4ea2,	// (0x0002c830) fep_hwr_candidate_drop_down_list_pane_g2

0x4eaf,	// (0x0002c83d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8e,	// (0x0003751c) fep_hwr_candidate_drop_down_list_pane_g

0x1bc7,	// (0x00029555) fep_hwr_candidate_drop_down_list_scroll_pane

0x1bd0,	// (0x0002955e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1bd0,	// (0x0002955e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1bdd,	// (0x0002956b) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1bdd,	// (0x0002956b) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1bea,	// (0x00029578) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1bea,	// (0x00029578) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x4d66,	// (0x0002c6f4) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4d66,	// (0x0002c6f4) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4d81,	// (0x0002c70f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4d81,	// (0x0002c70f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1bf7,	// (0x00029585) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1bf7,	// (0x00029585) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1c12,	// (0x000295a0) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1c12,	// (0x000295a0) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1c2d,	// (0x000295bb) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1c2d,	// (0x000295bb) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb95,	// (0x00037523) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb95,	// (0x00037523) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4ebc,	// (0x0002c84a) cell_vkb_candidate_pane_cp1_ParamLimits

0x4ebc,	// (0x0002c84a) cell_vkb_candidate_pane_cp1

0x4a0d,	// (0x0002c39b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4a0d,	// (0x0002c39b) fep_vkb_candidate_drop_down_list_pane_g1

0x4ea2,	// (0x0002c830) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4ea2,	// (0x0002c830) fep_vkb_candidate_drop_down_list_pane_g2

0x4eaf,	// (0x0002c83d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4eaf,	// (0x0002c83d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb8e,	// (0x0003751c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb8e,	// (0x0003751c) fep_vkb_candidate_drop_down_list_pane_g

0x4edc,	// (0x0002c86a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4edc,	// (0x0002c86a) fep_vkb_candidate_drop_down_list_scroll_pane

0x4ee9,	// (0x0002c877) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4ee9,	// (0x0002c877) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4ef6,	// (0x0002c884) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4ef6,	// (0x0002c884) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4f02,	// (0x0002c890) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4f02,	// (0x0002c890) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4d24,	// (0x0002c6b2) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4d24,	// (0x0002c6b2) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4d45,	// (0x0002c6d3) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4d45,	// (0x0002c6d3) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4f0e,	// (0x0002c89c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4f0e,	// (0x0002c89c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4f2f,	// (0x0002c8bd) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4f2f,	// (0x0002c8bd) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4f50,	// (0x0002c8de) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4f50,	// (0x0002c8de) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba6,	// (0x00037534) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba6,	// (0x00037534) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x90ef,	// (0x00030a7d) title_pane_g1_ParamLimits

0x9102,	// (0x00030a90) title_pane_g2_ParamLimits

0xf527,	// (0x00036eb5) title_pane_g_ParamLimits

0xcb64,	// (0x000344f2) aid_call2_pane

0xcb6c,	// (0x000344fa) aid_call_pane

0xcb74,	// (0x00034502) popup_clock_analogue_window_g1

0xcb74,	// (0x00034502) popup_clock_analogue_window_g2

0xf2a9,	// (0x00036c37) popup_clock_analogue_window_g3

0xf2b2,	// (0x00036c40) popup_clock_analogue_window_g4

0xc306,	// (0x00033c94) popup_clock_analogue_window_g5

0x0004,

0xf6bd,	// (0x0003704b) popup_clock_analogue_window_g

0xf2ba,	// (0x00036c48) popup_clock_analogue_window_t1

0xf2c8,	// (0x00036c56) clock_digital_number_pane_ParamLimits

0xf2c8,	// (0x00036c56) clock_digital_number_pane

0xf2d4,	// (0x00036c62) clock_digital_number_pane_cp02_ParamLimits

0xf2d4,	// (0x00036c62) clock_digital_number_pane_cp02

0xf2e0,	// (0x00036c6e) clock_digital_number_pane_cp03_ParamLimits

0xf2e0,	// (0x00036c6e) clock_digital_number_pane_cp03

0xf2ec,	// (0x00036c7a) clock_digital_number_pane_cp04_ParamLimits

0xf2ec,	// (0x00036c7a) clock_digital_number_pane_cp04

0xf2f8,	// (0x00036c86) clock_digital_separator_pane_ParamLimits

0xf2f8,	// (0x00036c86) clock_digital_separator_pane

0xf304,	// (0x00036c92) popup_clock_digital_window_t1_ParamLimits

0xf304,	// (0x00036c92) popup_clock_digital_window_t1

0xc306,	// (0x00033c94) clock_digital_number_pane_g1

0xc306,	// (0x00033c94) clock_digital_number_pane_g2

0x0001,

0xf6c8,	// (0x00037056) clock_digital_number_pane_g

0xc306,	// (0x00033c94) clock_digital_separator_pane_g1

0xc306,	// (0x00033c94) clock_digital_separator_pane_g2

0x0001,

0xf6c8,	// (0x00037056) clock_digital_separator_pane_g

0xa608,	// (0x00031f96) aid_fill_nsta_ParamLimits

0xa73e,	// (0x000320cc) indicator_nsta_pane_ParamLimits

0x0a21,	// (0x000283af) popup_clock_analogue_window

0x0a21,	// (0x000283af) popup_clock_digital_window

0xb5ec,	// (0x00032f7a) grid_indicator_nsta_pane_ParamLimits

0x419a,	// (0x0002bb28) clock_nsta_pane_t2

0x0001,

0xfa78,	// (0x00037406) clock_nsta_pane_t

0xf28a,	// (0x00036c18) aid_size_max_handle

0x98d1,	// (0x0003125f) aid_size_min_handle

0xcfe2,	// (0x00034970) editor_scroll_pane

0x4f6b,	// (0x0002c8f9) ex_editor_pane

0xc854,	// (0x000341e2) scroll_pane_cp13

0xc6ca,	// (0x00034058) scroll_pane_cp14

0xcba3,	// (0x00034531) scroll_pane_cp36

0x999b,	// (0x00031329) list_single_graphic_hl_pane_cp2_ParamLimits

0x999b,	// (0x00031329) list_single_graphic_hl_pane_cp2

0x8b64,	// (0x000304f2) list_single_graphic_hl_pane_ParamLimits

0x8b64,	// (0x000304f2) list_single_graphic_hl_pane

0x8b77,	// (0x00030505) aid_size_min_hl_cp1

0x4f73,	// (0x0002c901) list_highlight_pane_cp34_ParamLimits

0x4f73,	// (0x0002c901) list_highlight_pane_cp34

0x4f84,	// (0x0002c912) list_single_graphic_hl_pane_g1_ParamLimits

0x4f84,	// (0x0002c912) list_single_graphic_hl_pane_g1

0x8b80,	// (0x0003050e) list_single_graphic_hl_pane_g2_ParamLimits

0x8b80,	// (0x0003050e) list_single_graphic_hl_pane_g2

0x8b80,	// (0x0003050e) list_single_graphic_hl_pane_g3_ParamLimits

0x8b80,	// (0x0003050e) list_single_graphic_hl_pane_g3

0x8b8c,	// (0x0003051a) list_single_graphic_hl_pane_g4_ParamLimits

0x8b8c,	// (0x0003051a) list_single_graphic_hl_pane_g4

0x8b98,	// (0x00030526) list_single_graphic_hl_pane_g5_ParamLimits

0x8b98,	// (0x00030526) list_single_graphic_hl_pane_g5

0x0004,

0xfbb7,	// (0x00037545) list_single_graphic_hl_pane_g_ParamLimits

0xfbb7,	// (0x00037545) list_single_graphic_hl_pane_g

0x8bac,	// (0x0003053a) list_single_graphic_hl_pane_t1_ParamLimits

0x8bac,	// (0x0003053a) list_single_graphic_hl_pane_t1

0x4f91,	// (0x0002c91f) aid_size_min_hl_cp2

0x4f9a,	// (0x0002c928) list_highlight_pane_cp34_cp2_ParamLimits

0x4f9a,	// (0x0002c928) list_highlight_pane_cp34_cp2

0x4f84,	// (0x0002c912) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4f84,	// (0x0002c912) list_single_graphic_hl_pane_g1_cp2

0x4fa7,	// (0x0002c935) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4fa7,	// (0x0002c935) list_single_graphic_hl_pane_g2_cp2

0xba17,	// (0x000333a5) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xba17,	// (0x000333a5) list_single_graphic_hl_pane_g3_cp2

0xcf41,	// (0x000348cf) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcf41,	// (0x000348cf) list_single_graphic_hl_pane_g4_cp2

0x4fc1,	// (0x0002c94f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4fc1,	// (0x0002c94f) list_single_graphic_hl_pane_g5_cp2

0x9d27,	// (0x000316b5) control_pane_g4_ParamLimits

0x9d27,	// (0x000316b5) control_pane_g4

0xc864,	// (0x000341f2) bg_popup_sub_pane_cp10_ParamLimits

0x47a7,	// (0x0002c135) list_choice_list_pane_ParamLimits

0x47b6,	// (0x0002c144) scroll_pane_cp23

0xc496,	// (0x00033e24) bg_popup_preview_window_pane_cp02_ParamLimits

0x4de6,	// (0x0002c774) list_preview_fixed_pane_ParamLimits

0x4dfc,	// (0x0002c78a) list_preview_fixed_pane_cp_ParamLimits

0x4dfc,	// (0x0002c78a) list_preview_fixed_pane_cp

0x4e08,	// (0x0002c796) popup_preview_fixed_window_g1_ParamLimits

0x4e08,	// (0x0002c796) popup_preview_fixed_window_g1

0x4e14,	// (0x0002c7a2) popup_preview_fixed_window_g2_ParamLimits

0x4e14,	// (0x0002c7a2) popup_preview_fixed_window_g2

0x0002,

0xfb46,	// (0x000374d4) popup_preview_fixed_window_g_ParamLimits

0xfb46,	// (0x000374d4) popup_preview_fixed_window_g

0xf1fe,	// (0x00036b8c) aid_navi_side_left_pane_ParamLimits

0xf213,	// (0x00036ba1) aid_navi_side_right_pane_ParamLimits

0xf22b,	// (0x00036bb9) navi_icon_pane_stacon_ParamLimits

0xf23f,	// (0x00036bcd) navi_navi_pane_stacon_ParamLimits

0xf22b,	// (0x00036bb9) navi_text_pane_stacon_ParamLimits

0xc2fc,	// (0x00033c8a) main_text_info_pane

0x4feb,	// (0x0002c979) listscroll_text_info_pane

0x4ff3,	// (0x0002c981) list_text_info_pane_ParamLimits

0x4ff3,	// (0x0002c981) list_text_info_pane

0x5002,	// (0x0002c990) scroll_pane_cp24_ParamLimits

0x5002,	// (0x0002c990) scroll_pane_cp24

0xba25,	// (0x000333b3) list_text_info_pane_t1_ParamLimits

0xba25,	// (0x000333b3) list_text_info_pane_t1

0x9ecf,	// (0x0003185d) popup_fast_swap2_window_ParamLimits

0x9ecf,	// (0x0003185d) popup_fast_swap2_window

0x5054,	// (0x0002c9e2) aid_size_cell_fast2

0xc2fc,	// (0x00033c8a) bg_popup_window_pane_cp17

0x11f6,	// (0x00028b84) heading_pane_cp2

0x505e,	// (0x0002c9ec) listscroll_fast2_pane

0xba41,	// (0x000333cf) grid_fast2_pane

0xba4b,	// (0x000333d9) listscroll_fast2_pane_g1

0xba53,	// (0x000333e1) listscroll_fast2_pane_g2

0x0001,

0xfbc2,	// (0x00037550) listscroll_fast2_pane_g

0xc854,	// (0x000341e2) scroll_pane_cp26

0x5082,	// (0x0002ca10) cell_fast2_pane_ParamLimits

0x5082,	// (0x0002ca10) cell_fast2_pane

0x5097,	// (0x0002ca25) cell_fast2_pane_g1

0x50a0,	// (0x0002ca2e) cell_fast2_pane_g2

0x50a9,	// (0x0002ca37) cell_fast2_pane_g3

0x0002,

0xfbc7,	// (0x00037555) cell_fast2_pane_g

0xc601,	// (0x00033f8f) grid_highlight_pane_cp9

0xc616,	// (0x00033fa4) main_eswt_pane_ParamLimits

0xc616,	// (0x00033fa4) main_eswt_pane

0x5017,	// (0x0002c9a5) list_single_text_info_pane

0x50b1,	// (0x0002ca3f) eswt_ctrl_button_pane

0x50b1,	// (0x0002ca3f) eswt_ctrl_canvas_pane

0xba5d,	// (0x000333eb) eswt_ctrl_combo_pane

0x50b1,	// (0x0002ca3f) eswt_ctrl_default_pane

0x50b1,	// (0x0002ca3f) eswt_ctrl_label_pane

0x50c1,	// (0x0002ca4f) eswt_ctrl_wait_pane

0xba65,	// (0x000333f3) eswt_shell_pane

0xc2fc,	// (0x00033c8a) listscroll_eswt_app_pane

0x50e9,	// (0x0002ca77) popup_eswt_tasktip_window_ParamLimits

0x50e9,	// (0x0002ca77) popup_eswt_tasktip_window

0x0d7b,	// (0x00028709) bg_popup_window_pane_cp18

0x50fa,	// (0x0002ca88) eswt_control_pane_g1_ParamLimits

0x50fa,	// (0x0002ca88) eswt_control_pane_g1

0x5107,	// (0x0002ca95) eswt_control_pane_g2_ParamLimits

0x5107,	// (0x0002ca95) eswt_control_pane_g2

0x5114,	// (0x0002caa2) eswt_control_pane_g3_ParamLimits

0x5114,	// (0x0002caa2) eswt_control_pane_g3

0x5121,	// (0x0002caaf) eswt_control_pane_g4_ParamLimits

0x5121,	// (0x0002caaf) eswt_control_pane_g4

0x0003,

0xfbce,	// (0x0003755c) eswt_control_pane_g_ParamLimits

0xfbce,	// (0x0003755c) eswt_control_pane_g

0xc722,	// (0x000340b0) bg_button_pane_ParamLimits

0xc722,	// (0x000340b0) bg_button_pane

0xc616,	// (0x00033fa4) common_borders_pane_copy2_ParamLimits

0xc616,	// (0x00033fa4) common_borders_pane_copy2

0x512e,	// (0x0002cabc) control_button_pane_g1_ParamLimits

0x512e,	// (0x0002cabc) control_button_pane_g1

0x513a,	// (0x0002cac8) control_button_pane_g2_ParamLimits

0x513a,	// (0x0002cac8) control_button_pane_g2

0x5146,	// (0x0002cad4) control_button_pane_g3_ParamLimits

0x5146,	// (0x0002cad4) control_button_pane_g3

0x0002,

0xfbd7,	// (0x00037565) control_button_pane_g_ParamLimits

0xfbd7,	// (0x00037565) control_button_pane_g

0x515a,	// (0x0002cae8) control_button_pane_t1

0x5168,	// (0x0002caf6) control_button_pane_t2

0x0001,

0xfbde,	// (0x0003756c) control_button_pane_t

0x0c77,	// (0x00028605) bg_button_pane_g1

0x0c7f,	// (0x0002860d) bg_button_pane_g2

0x0c87,	// (0x00028615) bg_button_pane_g3

0x0c8f,	// (0x0002861d) bg_button_pane_g4

0x0c97,	// (0x00028625) bg_button_pane_g5

0x0c9f,	// (0x0002862d) bg_button_pane_g6

0x0ca7,	// (0x00028635) bg_button_pane_g7

0x0caf,	// (0x0002863d) bg_button_pane_g8

0x0cb7,	// (0x00028645) bg_button_pane_g9

0x0008,

0xf826,	// (0x000371b4) bg_button_pane_g

0x4762,	// (0x0002c0f0) common_borders_pane_ParamLimits

0x4762,	// (0x0002c0f0) common_borders_pane

0x50fa,	// (0x0002ca88) eswt_control_pane_g1_copy1_ParamLimits

0x50fa,	// (0x0002ca88) eswt_control_pane_g1_copy1

0x5107,	// (0x0002ca95) eswt_control_pane_g2_copy1_ParamLimits

0x5107,	// (0x0002ca95) eswt_control_pane_g2_copy1

0x5114,	// (0x0002caa2) eswt_control_pane_g3_copy1_ParamLimits

0x5114,	// (0x0002caa2) eswt_control_pane_g3_copy1

0x5121,	// (0x0002caaf) eswt_control_pane_g4_copy1_ParamLimits

0x5121,	// (0x0002caaf) eswt_control_pane_g4_copy1

0x479d,	// (0x0002c12b) bg_eswt_ctrl_canvas_pane_g1

0x4762,	// (0x0002c0f0) common_borders_pane_cp2_ParamLimits

0x4762,	// (0x0002c0f0) common_borders_pane_cp2

0x4762,	// (0x0002c0f0) common_borders_pane_cp3_ParamLimits

0x4762,	// (0x0002c0f0) common_borders_pane_cp3

0x5176,	// (0x0002cb04) separator_horizontal_pane

0x517e,	// (0x0002cb0c) separator_vertical_pane

0x50fa,	// (0x0002ca88) eswt_control_pane_g1_copy2_ParamLimits

0x50fa,	// (0x0002ca88) eswt_control_pane_g1_copy2

0x5107,	// (0x0002ca95) eswt_control_pane_g2_copy2_ParamLimits

0x5107,	// (0x0002ca95) eswt_control_pane_g2_copy2

0x5114,	// (0x0002caa2) eswt_control_pane_g3_copy2_ParamLimits

0x5114,	// (0x0002caa2) eswt_control_pane_g3_copy2

0x5121,	// (0x0002caaf) eswt_control_pane_g4_copy2_ParamLimits

0x5121,	// (0x0002caaf) eswt_control_pane_g4_copy2

0xc2fc,	// (0x00033c8a) common_borders_pane_cp4

0x5187,	// (0x0002cb15) separator_horizontal_pane_g1

0x5190,	// (0x0002cb1e) separator_horizontal_pane_g2

0x5199,	// (0x0002cb27) separator_horizontal_pane_g3

0x0002,

0xfbe3,	// (0x00037571) separator_horizontal_pane_g

0x50fa,	// (0x0002ca88) eswt_control_pane_g1_copy3_ParamLimits

0x50fa,	// (0x0002ca88) eswt_control_pane_g1_copy3

0x5107,	// (0x0002ca95) eswt_control_pane_g2_copy3_ParamLimits

0x5107,	// (0x0002ca95) eswt_control_pane_g2_copy3

0x5114,	// (0x0002caa2) eswt_control_pane_g3_copy3_ParamLimits

0x5114,	// (0x0002caa2) eswt_control_pane_g3_copy3

0x5121,	// (0x0002caaf) eswt_control_pane_g4_copy3_ParamLimits

0x5121,	// (0x0002caaf) eswt_control_pane_g4_copy3

0xc2fc,	// (0x00033c8a) common_borders_pane_cp5

0x51a2,	// (0x0002cb30) separator_vertical_pane_g1

0x51ab,	// (0x0002cb39) separator_vertical_pane_g2

0x51b4,	// (0x0002cb42) separator_vertical_pane_g3

0x0002,

0xfbea,	// (0x00037578) separator_vertical_pane_g

0x50fa,	// (0x0002ca88) eswt_control_pane_g1_copy4_ParamLimits

0x50fa,	// (0x0002ca88) eswt_control_pane_g1_copy4

0x5107,	// (0x0002ca95) eswt_control_pane_g2_copy4_ParamLimits

0x5107,	// (0x0002ca95) eswt_control_pane_g2_copy4

0x5114,	// (0x0002caa2) eswt_control_pane_g3_copy4_ParamLimits

0x5114,	// (0x0002caa2) eswt_control_pane_g3_copy4

0x5121,	// (0x0002caaf) eswt_control_pane_g4_copy4_ParamLimits

0x5121,	// (0x0002caaf) eswt_control_pane_g4_copy4

0xba85,	// (0x00033413) eswt_ctrl_combo_button_pane

0xba8d,	// (0x0003341b) eswt_ctrl_input_pane

0xba95,	// (0x00033423) popup_choice_list_window_cp70

0xba9d,	// (0x0003342b) eswt_ctrl_input_pane_t1

0xc2fc,	// (0x00033c8a) input_focus_pane_cp70

0x4762,	// (0x0002c0f0) bg_button_pane_cp70_ParamLimits

0x4762,	// (0x0002c0f0) bg_button_pane_cp70

0xbaab,	// (0x00033439) eswt_ctrl_combo_button_pane_g1

0x51eb,	// (0x0002cb79) wait_bar_pane_cp70

0x0d7b,	// (0x00028709) bg_popup_window_pane_cp70_ParamLimits

0x0d7b,	// (0x00028709) bg_popup_window_pane_cp70

0x51f3,	// (0x0002cb81) popup_eswt_tasktip_window_t1

0x5209,	// (0x0002cb97) wait_bar_pane_cp71_ParamLimits

0x5209,	// (0x0002cb97) wait_bar_pane_cp71

0x5215,	// (0x0002cba3) grid_eswt_app_pane

0xca50,	// (0x000343de) scroll_pane_cp70

0xbab3,	// (0x00033441) cell_eswt_app_pane_ParamLimits

0xbab3,	// (0x00033441) cell_eswt_app_pane

0xbadd,	// (0x0003346b) cell_eswt_app_pane_g1_ParamLimits

0xbadd,	// (0x0003346b) cell_eswt_app_pane_g1

0xbb0c,	// (0x0003349a) cell_eswt_app_pane_g2_ParamLimits

0xbb0c,	// (0x0003349a) cell_eswt_app_pane_g2

0x0001,

0xfbf1,	// (0x0003757f) cell_eswt_app_pane_g_ParamLimits

0xfbf1,	// (0x0003757f) cell_eswt_app_pane_g

0xbb30,	// (0x000334be) cell_eswt_app_pane_t1_ParamLimits

0xbb30,	// (0x000334be) cell_eswt_app_pane_t1

0x52d3,	// (0x0002cc61) grid_highlight_pane_cp70_ParamLimits

0x52d3,	// (0x0002cc61) grid_highlight_pane_cp70

0xced8,	// (0x00034866) set_content_pane_g1

0x9cb9,	// (0x00031647) status_small_volume_pane

0xbb62,	// (0x000334f0) status_small_volume_pane_g1

0xbb6a,	// (0x000334f8) volume_small2_pane

0xbb73,	// (0x00033501) volume_small2_pane_g1

0xbb7c,	// (0x0003350a) volume_small2_pane_g2

0xbb85,	// (0x00033513) volume_small2_pane_g3

0xbb8e,	// (0x0003351c) volume_small2_pane_g4

0xbb97,	// (0x00033525) volume_small2_pane_g5

0xbba0,	// (0x0003352e) volume_small2_pane_g6

0xbba9,	// (0x00033537) volume_small2_pane_g7

0xbbb2,	// (0x00033540) volume_small2_pane_g8

0xbbbb,	// (0x00033549) volume_small2_pane_g9

0xbbc4,	// (0x00033552) volume_small2_pane_g10

0x0009,

0xfbf6,	// (0x00037584) volume_small2_pane_g

0x4b55,	// (0x0002c4e3) fep_vkb_top_text_pane_g1_ParamLimits

0xb9a1,	// (0x0003332f) fep_vkb_top_text_pane_t1_ParamLimits

0x4e20,	// (0x0002c7ae) popup_preview_fixed_window_g3_ParamLimits

0x4e20,	// (0x0002c7ae) popup_preview_fixed_window_g3

0xa546,	// (0x00031ed4) popup_toolbar_trans_pane

0xb229,	// (0x00032bb7) aid_height_set_list_ParamLimits

0x3544,	// (0x0002aed2) aid_size_parent_ParamLimits

0xc864,	// (0x000341f2) list_highlight_pane_cp2_ParamLimits

0xced8,	// (0x00034866) set_content_pane_g1_ParamLimits

0xb3a4,	// (0x00032d32) list_single_image_pane_ParamLimits

0xb3a4,	// (0x00032d32) list_single_image_pane

0xd1d2,	// (0x00034b60) aid_size_cell_image_ParamLimits

0xd1d2,	// (0x00034b60) aid_size_cell_image

0xd1df,	// (0x00034b6d) grid_single_image_pane_ParamLimits

0xd1df,	// (0x00034b6d) grid_single_image_pane

0xd1eb,	// (0x00034b79) list_single_image_pane_g1_ParamLimits

0xd1eb,	// (0x00034b79) list_single_image_pane_g1

0x52f8,	// (0x0002cc86) list_single_image_pane_g2_ParamLimits

0x52f8,	// (0x0002cc86) list_single_image_pane_g2

0x0001,

0xfc0b,	// (0x00037599) list_single_image_pane_g_ParamLimits

0xfc0b,	// (0x00037599) list_single_image_pane_g

0x530c,	// (0x0002cc9a) list_single_image_pane_t1_ParamLimits

0x530c,	// (0x0002cc9a) list_single_image_pane_t1

0xd1f7,	// (0x00034b85) cell_image_list_pane_ParamLimits

0xd1f7,	// (0x00034b85) cell_image_list_pane

0xd20b,	// (0x00034b99) cell_image_list_pane_g1

0xd214,	// (0x00034ba2) cell_image_list_pane_g2

0x0001,

0xfc10,	// (0x0003759e) cell_image_list_pane_g

0xd21d,	// (0x00034bab) aid_size_cell_tb_trans_pane

0xc722,	// (0x000340b0) bg_tb_trans_pane

0xd22f,	// (0x00034bbd) grid_tb_trans_pane

0x0c77,	// (0x00028605) bg_tb_trans_pane_g1

0x0c7f,	// (0x0002860d) bg_tb_trans_pane_g2

0x0c87,	// (0x00028615) bg_tb_trans_pane_g3

0x0c8f,	// (0x0002861d) bg_tb_trans_pane_g4

0x0c97,	// (0x00028625) bg_tb_trans_pane_g5

0x0caf,	// (0x0002863d) bg_tb_trans_pane_g6

0x0cb7,	// (0x00028645) bg_tb_trans_pane_g7

0x0c9f,	// (0x0002862d) bg_tb_trans_pane_g8

0x0ca7,	// (0x00028635) bg_tb_trans_pane_g9

0x0008,

0xfc15,	// (0x000375a3) bg_tb_trans_pane_g

0xd243,	// (0x00034bd1) cell_toolbar_trans_pane_ParamLimits

0xd243,	// (0x00034bd1) cell_toolbar_trans_pane

0x479d,	// (0x0002c12b) cell_toolbar_trans_pane_g1

0xb6b5,	// (0x00033043) list_form2_midp_pane_t1

0xb6c3,	// (0x00033051) list_form2_midp_pane_t2

0x0001,

0xfabe,	// (0x0003744c) list_form2_midp_pane_t

0x438b,	// (0x0002bd19) scroll_pane_cp51_ParamLimits

0x4547,	// (0x0002bed5) form2_midp_wait_pane_g1

0x4550,	// (0x0002bede) form2_midp_wait_pane_g2

0x4559,	// (0x0002bee7) form2_midp_wait_pane_g3

0x0002,

0xfad3,	// (0x00037461) form2_midp_wait_pane_g

0xc36c,	// (0x00033cfa) list_highlight_pane_cp21_ParamLimits

0x45a1,	// (0x0002bf2f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x45b0,	// (0x0002bf3e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x36f8,	// (0x0002b086) list_single_2graphic_im_pane_ParamLimits

0x36f8,	// (0x0002b086) list_single_2graphic_im_pane

0xd269,	// (0x00034bf7) list_single_2graphic_im_pane_g1_ParamLimits

0xd269,	// (0x00034bf7) list_single_2graphic_im_pane_g1

0xd27a,	// (0x00034c08) list_single_2graphic_im_pane_g2_ParamLimits

0xd27a,	// (0x00034c08) list_single_2graphic_im_pane_g2

0xd286,	// (0x00034c14) list_single_2graphic_im_pane_g3_ParamLimits

0xd286,	// (0x00034c14) list_single_2graphic_im_pane_g3

0x0003,

0xfc28,	// (0x000375b6) list_single_2graphic_im_pane_g_ParamLimits

0xfc28,	// (0x000375b6) list_single_2graphic_im_pane_g

0xd29a,	// (0x00034c28) list_single_2graphic_im_pane_t1_ParamLimits

0xd29a,	// (0x00034c28) list_single_2graphic_im_pane_t1

0x4e2c,	// (0x0002c7ba) list_single_graphic_2heading_pane_fp_ParamLimits

0x4e2c,	// (0x0002c7ba) list_single_graphic_2heading_pane_fp

0xeee3,	// (0x00036871) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xeee3,	// (0x00036871) list_single_graphic_2heading_pane_fp_g1

0x4e42,	// (0x0002c7d0) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4e42,	// (0x0002c7d0) list_single_graphic_2heading_pane_fp_g2

0xe8f7,	// (0x00036285) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe8f7,	// (0x00036285) list_single_graphic_2heading_pane_fp_g3

0xeeb8,	// (0x00036846) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xeeb8,	// (0x00036846) list_single_graphic_2heading_pane_fp_g4

0x4e4e,	// (0x0002c7dc) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4e4e,	// (0x0002c7dc) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb56,	// (0x000374e4) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb56,	// (0x000374e4) list_single_graphic_2heading_pane_fp_g

0xf071,	// (0x000369ff) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf071,	// (0x000369ff) list_single_graphic_2heading_pane_fp_t1

0xef1b,	// (0x000368a9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xef1b,	// (0x000368a9) list_single_graphic_2heading_pane_fp_t2

0xf087,	// (0x00036a15) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf087,	// (0x00036a15) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc31,	// (0x000375bf) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc31,	// (0x000375bf) list_single_graphic_2heading_pane_fp_t

0x4829,	// (0x0002c1b7) fep_hwr_write_pane_g5_ParamLimits

0x4829,	// (0x0002c1b7) fep_hwr_write_pane_g5

0x4835,	// (0x0002c1c3) fep_hwr_write_pane_g6_ParamLimits

0x4835,	// (0x0002c1c3) fep_hwr_write_pane_g6

0xba65,	// (0x000333f3) eswt_shell_pane_ParamLimits

0x0d7b,	// (0x00028709) bg_popup_window_pane_cp18_ParamLimits

0x11f6,	// (0x00028b84) heading_pane_cp70

0x51f3,	// (0x0002cb81) popup_eswt_tasktip_window_t1_ParamLimits

0xa663,	// (0x00031ff1) aid_touch_tab_arrow_left

0xa679,	// (0x00032007) aid_touch_tab_arrow_right

0x911a,	// (0x00030aa8) title_pane_g3_ParamLimits

0x911a,	// (0x00030aa8) title_pane_g3

0xc6ea,	// (0x00034078) set_value_pane_g1

0xa546,	// (0x00031ed4) popup_toolbar_trans_pane_ParamLimits

0xd21d,	// (0x00034bab) aid_size_cell_tb_trans_pane_ParamLimits

0xc722,	// (0x000340b0) bg_tb_trans_pane_ParamLimits

0xd22f,	// (0x00034bbd) grid_tb_trans_pane_ParamLimits

0xc496,	// (0x00033e24) cont_note_pane_ParamLimits

0xc496,	// (0x00033e24) cont_note_pane

0xc616,	// (0x00033fa4) cont_snote2_single_text_pane_ParamLimits

0xc616,	// (0x00033fa4) cont_snote2_single_text_pane

0xc616,	// (0x00033fa4) cont_snote2_single_graphic_pane_ParamLimits

0xc616,	// (0x00033fa4) cont_snote2_single_graphic_pane

0x141d,	// (0x00028dab) cont_note_wait_pane_ParamLimits

0x141d,	// (0x00028dab) cont_note_wait_pane

0x141d,	// (0x00028dab) cont_note_image_pane_ParamLimits

0x141d,	// (0x00028dab) cont_note_image_pane

0x5402,	// (0x0002cd90) popup_note2_window_g1_ParamLimits

0x5402,	// (0x0002cd90) popup_note2_window_g1

0xd2d8,	// (0x00034c66) popup_note2_window_t1_ParamLimits

0xd2d8,	// (0x00034c66) popup_note2_window_t1

0xd31d,	// (0x00034cab) popup_note2_window_t2_ParamLimits

0xd31d,	// (0x00034cab) popup_note2_window_t2

0xd362,	// (0x00034cf0) popup_note2_window_t3_ParamLimits

0xd362,	// (0x00034cf0) popup_note2_window_t3

0x5502,	// (0x0002ce90) popup_note2_window_t4_ParamLimits

0x5502,	// (0x0002ce90) popup_note2_window_t4

0xc51a,	// (0x00033ea8) popup_note2_window_t5_ParamLimits

0xc51a,	// (0x00033ea8) popup_note2_window_t5

0x0004,

0xfc3d,	// (0x000375cb) popup_note2_window_t_ParamLimits

0xfc3d,	// (0x000375cb) popup_note2_window_t

0x5531,	// (0x0002cebf) popup_note2_image_window_g1_ParamLimits

0x5531,	// (0x0002cebf) popup_note2_image_window_g1

0xd3a7,	// (0x00034d35) popup_note2_image_window_g2_ParamLimits

0xd3a7,	// (0x00034d35) popup_note2_image_window_g2

0x0001,

0xfc48,	// (0x000375d6) popup_note2_image_window_g_ParamLimits

0xfc48,	// (0x000375d6) popup_note2_image_window_g

0x554f,	// (0x0002cedd) popup_note2_image_window_t1_ParamLimits

0x554f,	// (0x0002cedd) popup_note2_image_window_t1

0x5567,	// (0x0002cef5) popup_note2_image_window_t2_ParamLimits

0x5567,	// (0x0002cef5) popup_note2_image_window_t2

0x557f,	// (0x0002cf0d) popup_note2_image_window_t3_ParamLimits

0x557f,	// (0x0002cf0d) popup_note2_image_window_t3

0x0002,

0xfc4d,	// (0x000375db) popup_note2_image_window_t_ParamLimits

0xfc4d,	// (0x000375db) popup_note2_image_window_t

0x142b,	// (0x00028db9) popup_note2_wait_window_g1_ParamLimits

0x142b,	// (0x00028db9) popup_note2_wait_window_g1

0x1437,	// (0x00028dc5) popup_note2_wait_window_g2_ParamLimits

0x1437,	// (0x00028dc5) popup_note2_wait_window_g2

0x1443,	// (0x00028dd1) popup_note2_wait_window_g3_ParamLimits

0x1443,	// (0x00028dd1) popup_note2_wait_window_g3

0x0002,

0xf808,	// (0x00037196) popup_note2_wait_window_g_ParamLimits

0xf808,	// (0x00037196) popup_note2_wait_window_g

0x559b,	// (0x0002cf29) popup_note2_wait_window_t1_ParamLimits

0x559b,	// (0x0002cf29) popup_note2_wait_window_t1

0x55b9,	// (0x0002cf47) popup_note2_wait_window_t2_ParamLimits

0x55b9,	// (0x0002cf47) popup_note2_wait_window_t2

0x55d7,	// (0x0002cf65) popup_note2_wait_window_t3_ParamLimits

0x55d7,	// (0x0002cf65) popup_note2_wait_window_t3

0x55e9,	// (0x0002cf77) popup_note2_wait_window_t4_ParamLimits

0x55e9,	// (0x0002cf77) popup_note2_wait_window_t4

0x0003,

0xfc54,	// (0x000375e2) popup_note2_wait_window_t_ParamLimits

0xfc54,	// (0x000375e2) popup_note2_wait_window_t

0x55fb,	// (0x0002cf89) wait_bar2_pane_ParamLimits

0x55fb,	// (0x0002cf89) wait_bar2_pane

0x5613,	// (0x0002cfa1) popup_snote2_single_text_window_g1_ParamLimits

0x5613,	// (0x0002cfa1) popup_snote2_single_text_window_g1

0x563b,	// (0x0002cfc9) popup_snote2_single_text_window_t1_ParamLimits

0x563b,	// (0x0002cfc9) popup_snote2_single_text_window_t1

0x5687,	// (0x0002d015) popup_snote2_single_text_window_t2_ParamLimits

0x5687,	// (0x0002d015) popup_snote2_single_text_window_t2

0x56d3,	// (0x0002d061) popup_snote2_single_text_window_t3_ParamLimits

0x56d3,	// (0x0002d061) popup_snote2_single_text_window_t3

0x5714,	// (0x0002d0a2) popup_snote2_single_text_window_t4_ParamLimits

0x5714,	// (0x0002d0a2) popup_snote2_single_text_window_t4

0x574a,	// (0x0002d0d8) popup_snote2_single_text_window_t5_ParamLimits

0x574a,	// (0x0002d0d8) popup_snote2_single_text_window_t5

0x0004,

0xfc5d,	// (0x000375eb) popup_snote2_single_text_window_t_ParamLimits

0xfc5d,	// (0x000375eb) popup_snote2_single_text_window_t

0xd3b9,	// (0x00034d47) popup_snote2_single_graphic_window_g1_ParamLimits

0xd3b9,	// (0x00034d47) popup_snote2_single_graphic_window_g1

0x579d,	// (0x0002d12b) popup_snote2_single_graphic_window_g2_ParamLimits

0x579d,	// (0x0002d12b) popup_snote2_single_graphic_window_g2

0x0001,

0xfc68,	// (0x000375f6) popup_snote2_single_graphic_window_g_ParamLimits

0xfc68,	// (0x000375f6) popup_snote2_single_graphic_window_g

0x57c5,	// (0x0002d153) popup_snote2_single_graphic_window_t1_ParamLimits

0x57c5,	// (0x0002d153) popup_snote2_single_graphic_window_t1

0x5811,	// (0x0002d19f) popup_snote2_single_graphic_window_t2_ParamLimits

0x5811,	// (0x0002d19f) popup_snote2_single_graphic_window_t2

0x56d3,	// (0x0002d061) popup_snote2_single_graphic_window_t3_ParamLimits

0x56d3,	// (0x0002d061) popup_snote2_single_graphic_window_t3

0x5714,	// (0x0002d0a2) popup_snote2_single_graphic_window_t4_ParamLimits

0x5714,	// (0x0002d0a2) popup_snote2_single_graphic_window_t4

0x574a,	// (0x0002d0d8) popup_snote2_single_graphic_window_t5_ParamLimits

0x574a,	// (0x0002d0d8) popup_snote2_single_graphic_window_t5

0x0004,

0xfc6d,	// (0x000375fb) popup_snote2_single_graphic_window_t_ParamLimits

0xfc6d,	// (0x000375fb) popup_snote2_single_graphic_window_t

0x4248,	// (0x0002bbd6) clock_nsta_pane_cp2_t1

0x4248,	// (0x0002bbd6) clock_nsta_pane_cp2_t2

0x0001,

0xfa94,	// (0x00037422) clock_nsta_pane_cp2_t

0x894c,	// (0x000302da) form_field_data_wide_pane_g1_ParamLimits

0xc730,	// (0x000340be) form_field_data_wide_pane_g2_ParamLimits

0xc730,	// (0x000340be) form_field_data_wide_pane_g2

0xc73c,	// (0x000340ca) form_field_data_wide_pane_g3_ParamLimits

0xc73c,	// (0x000340ca) form_field_data_wide_pane_g3

0x0002,

0xf640,	// (0x00036fce) form_field_data_wide_pane_g_ParamLimits

0xf640,	// (0x00036fce) form_field_data_wide_pane_g

0xb5d6,	// (0x00032f64) grid_touch_3_pane_ParamLimits

0xb5d6,	// (0x00032f64) grid_touch_3_pane

0xd3e1,	// (0x00034d6f) cell_touch_3_pane_ParamLimits

0xd3e1,	// (0x00034d6f) cell_touch_3_pane

0x479d,	// (0x0002c12b) cell_touch_3_pane_g1

0x479d,	// (0x0002c12b) cell_touch_3_pane_g2

0x0001,

0xfb19,	// (0x000374a7) cell_touch_3_pane_g

0xc54c,	// (0x00033eda) cont_query_data_pane

0xc554,	// (0x00033ee2) cont_query_data_pane_cp1

0x588b,	// (0x0002d219) button_value_adjust_pane_cp7

0x5893,	// (0x0002d221) query_popup_pane_cp3

0xcbd5,	// (0x00034563) bg_popup_sub_pane_cp22_ParamLimits

0x9a3a,	// (0x000313c8) navi_navi_volume_pane_cp2

0x9a49,	// (0x000313d7) popup_side_volume_key_window_g2

0x9a58,	// (0x000313e6) popup_side_volume_key_window_g3

0x0002,

0xf6d6,	// (0x00037064) popup_side_volume_key_window_g

0x9a67,	// (0x000313f5) popup_side_volume_key_window_t2

0x0001,

0xf6dd,	// (0x0003706b) popup_side_volume_key_window_t

0x9b2c,	// (0x000314ba) popup_side_volume_key_window_ParamLimits

0x8739,	// (0x000300c7) list_double_graphic_pane_g4_ParamLimits

0x8739,	// (0x000300c7) list_double_graphic_pane_g4

0xb390,	// (0x00032d1e) list_single_2heading_msg_pane_ParamLimits

0xb390,	// (0x00032d1e) list_single_2heading_msg_pane

0x8bc2,	// (0x00030550) list_single_2heading_msg_pane_g1_ParamLimits

0x8bc2,	// (0x00030550) list_single_2heading_msg_pane_g1

0x8bce,	// (0x0003055c) list_single_2heading_msg_pane_g2_ParamLimits

0x8bce,	// (0x0003055c) list_single_2heading_msg_pane_g2

0x8be1,	// (0x0003056f) list_single_2heading_msg_pane_g3_ParamLimits

0x8be1,	// (0x0003056f) list_single_2heading_msg_pane_g3

0xf0a7,	// (0x00036a35) list_single_2heading_msg_pane_g4_ParamLimits

0xf0a7,	// (0x00036a35) list_single_2heading_msg_pane_g4

0x0003,

0xfc78,	// (0x00037606) list_single_2heading_msg_pane_g_ParamLimits

0xfc78,	// (0x00037606) list_single_2heading_msg_pane_g

0x8bed,	// (0x0003057b) list_single_2heading_msg_pane_t1_ParamLimits

0x8bed,	// (0x0003057b) list_single_2heading_msg_pane_t1

0x8c15,	// (0x000305a3) list_single_2heading_msg_pane_t2_ParamLimits

0x8c15,	// (0x000305a3) list_single_2heading_msg_pane_t2

0x8c80,	// (0x0003060e) list_single_2heading_msg_pane_t3_ParamLimits

0x8c80,	// (0x0003060e) list_single_2heading_msg_pane_t3

0xf0bf,	// (0x00036a4d) list_single_2heading_msg_pane_t4_ParamLimits

0xf0bf,	// (0x00036a4d) list_single_2heading_msg_pane_t4

0x0003,

0xfc81,	// (0x0003760f) list_single_2heading_msg_pane_t_ParamLimits

0xfc81,	// (0x0003760f) list_single_2heading_msg_pane_t

0xc31a,	// (0x00033ca8) title_pane_g4_ParamLimits

0xc31a,	// (0x00033ca8) title_pane_g4

0xf14f,	// (0x00036add) title_pane_stacon_g3_ParamLimits

0xf14f,	// (0x00036add) title_pane_stacon_g3

0x53c5,	// (0x0002cd53) list_single_2graphic_im_pane_g4_ParamLimits

0x53c5,	// (0x0002cd53) list_single_2graphic_im_pane_g4

0xb01a,	// (0x000329a8) popup_side_volume_key_window_cp

0x3a7a,	// (0x0002b408) main_idle_act2_pane_t1

0x0cbf,	// (0x0002864d) toolbar_button_pane_g10

0x9723,	// (0x000310b1) popup_toolbar_window_cp1

0x4239,	// (0x0002bbc7) clock_nsta_pane_cp_t1

0x4239,	// (0x0002bbc7) clock_nsta_pane_cp_t2

0x0001,

0xfa8f,	// (0x0003741d) clock_nsta_pane_cp_t

0x9a3a,	// (0x000313c8) navi_navi_volume_pane_cp2_ParamLimits

0xf323,	// (0x00036cb1) popup_side_volume_key_window_g1_ParamLimits

0x9a49,	// (0x000313d7) popup_side_volume_key_window_g2_ParamLimits

0x9a58,	// (0x000313e6) popup_side_volume_key_window_g3_ParamLimits

0xf6d6,	// (0x00037064) popup_side_volume_key_window_g_ParamLimits

0x1958,	// (0x000292e6) fep_hwr_aid_pane

0xd19e,	// (0x00034b2c) bg_fep_hwr_top_pane_g4_ParamLimits

0x47f9,	// (0x0002c187) fep_hwr_top_pane_g1_ParamLimits

0x480b,	// (0x0002c199) fep_hwr_top_pane_g2_ParamLimits

0x1a11,	// (0x0002939f) fep_hwr_top_pane_g3_ParamLimits

0xfae4,	// (0x00037472) fep_hwr_top_pane_g_ParamLimits

0x1a26,	// (0x000293b4) fep_hwr_top_text_pane_ParamLimits

0x3029,	// (0x0002a9b7) aid_touch_tab_arrow_arrow_2

0x3032,	// (0x0002a9c0) aid_touch_tab_arrow_left_2

0x196c,	// (0x000292fa) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x19a3,	// (0x00029331) fep_hwr_prediction_pane

0x4964,	// (0x0002c2f2) fep_vkb_prediction_pane

0xb981,	// (0x0003330f) fep_vkb_side_pane_g3_ParamLimits

0xb981,	// (0x0003330f) fep_vkb_side_pane_g3

0x4a0d,	// (0x0002c39b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x4ea2,	// (0x0002c830) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x4eaf,	// (0x0002c83d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8e,	// (0x0003751c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x58b8,	// (0x0002d246) fep_hwr_prediction_pane_g1

0x1cb3,	// (0x00029641) fep_hwr_prediction_pane_g2

0x1cbb,	// (0x00029649) fep_hwr_prediction_pane_g3

0x1cc3,	// (0x00029651) fep_hwr_prediction_pane_g4

0x0003,

0xfc8a,	// (0x00037618) fep_hwr_prediction_pane_g

0x58b8,	// (0x0002d246) fep_vkb_prediction_pane_g1

0x58c2,	// (0x0002d250) fep_vkb_prediction_pane_g2

0x58ca,	// (0x0002d258) fep_vkb_prediction_pane_g3

0x58d2,	// (0x0002d260) fep_vkb_prediction_pane_g4

0x0003,

0xfc93,	// (0x00037621) fep_vkb_prediction_pane_g

0xb1ab,	// (0x00032b39) slider_set_pane_g3

0xb1bf,	// (0x00032b4d) slider_set_pane_g4

0xb1d7,	// (0x00032b65) slider_set_pane_g5

0xb1ab,	// (0x00032b39) slider_set_pane_g6

0xb1ed,	// (0x00032b7b) slider_set_pane_g7

0x36a5,	// (0x0002b033) slider_form_pane_g3

0x36ae,	// (0x0002b03c) slider_form_pane_g4

0x36b6,	// (0x0002b044) slider_form_pane_g5

0x36a5,	// (0x0002b033) slider_form_pane_g6

0xb374,	// (0x00032d02) slider_form_pane_g7

0x3d26,	// (0x0002b6b4) slider_set_pane_vc_g3

0x3d2f,	// (0x0002b6bd) slider_set_pane_vc_g4

0x3d38,	// (0x0002b6c6) slider_set_pane_vc_g5

0x3d26,	// (0x0002b6b4) slider_set_pane_vc_g6

0x3d41,	// (0x0002b6cf) slider_set_pane_vc_g7

0x3ef7,	// (0x0002b885) slider_form_pane_vc_g1

0x3f00,	// (0x0002b88e) slider_form_pane_vc_g2

0x3f09,	// (0x0002b897) slider_form_pane_vc_g3

0x3ef7,	// (0x0002b885) slider_form_pane_vc_g4

0x3f12,	// (0x0002b8a0) slider_form_pane_vc_g5

0x0004,

0xfa61,	// (0x000373ef) slider_form_pane_vc_g

0xc2fc,	// (0x00033c8a) main_idle_act3_pane

0x58da,	// (0x0002d268) ai3_links_pane

0xd42a,	// (0x00034db8) popup_ai3_data_window_ParamLimits

0xd42a,	// (0x00034db8) popup_ai3_data_window

0xc2fc,	// (0x00033c8a) grid_ai3_links_pane

0xd442,	// (0x00034dd0) cell_ai3_links_pane_ParamLimits

0xd442,	// (0x00034dd0) cell_ai3_links_pane

0x5913,	// (0x0002d2a1) bg_popup_sub_pane_cp11

0x5920,	// (0x0002d2ae) cell_ai3_links_pane_g1

0xc2fc,	// (0x00033c8a) bg_popup_sub_pane_cp12

0x5945,	// (0x0002d2d3) heading_ai3_data_pane

0x594d,	// (0x0002d2db) list_ai3_gene_pane

0x5959,	// (0x0002d2e7) popup_ai3_data_window_g1

0x5961,	// (0x0002d2ef) heading_ai3_data_pane_g1

0x5969,	// (0x0002d2f7) heading_ai3_data_pane_t1

0xd45c,	// (0x00034dea) list_double_ai3_gene_pane_ParamLimits

0xd45c,	// (0x00034dea) list_double_ai3_gene_pane

0x5984,	// (0x0002d312) list_single_ai3_gene_pane_ParamLimits

0x5984,	// (0x0002d312) list_single_ai3_gene_pane

0x4762,	// (0x0002c0f0) list_highlight_pane_cp7_ParamLimits

0x4762,	// (0x0002c0f0) list_highlight_pane_cp7

0x5991,	// (0x0002d31f) list_single_a13_gene_pane_t1_ParamLimits

0x5991,	// (0x0002d31f) list_single_a13_gene_pane_t1

0x59a8,	// (0x0002d336) list_single_ai3_gene_pane_g1

0x59b1,	// (0x0002d33f) list_single_ai3_gene_pane_g2

0x0001,

0xfc9c,	// (0x0003762a) list_single_ai3_gene_pane_g

0x59b9,	// (0x0002d347) list_double_ai3_gene_pane_g1_ParamLimits

0x59b9,	// (0x0002d347) list_double_ai3_gene_pane_g1

0xd469,	// (0x00034df7) list_double_ai3_gene_pane_t1_ParamLimits

0xd469,	// (0x00034df7) list_double_ai3_gene_pane_t1

0x59e1,	// (0x0002d36f) list_double_ai3_gene_pane_t2_ParamLimits

0x59e1,	// (0x0002d36f) list_double_ai3_gene_pane_t2

0x59f6,	// (0x0002d384) list_double_ai3_gene_pane_t3_ParamLimits

0x59f6,	// (0x0002d384) list_double_ai3_gene_pane_t3

0x0002,

0xfca1,	// (0x0003762f) list_double_ai3_gene_pane_t_ParamLimits

0xfca1,	// (0x0003762f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf09d,	// (0x00036a2b) aid_size_min_col_2

0xd414,	// (0x00034da2) aid_size_min_msg_ParamLimits

0xd414,	// (0x00034da2) aid_size_min_msg

0xb995,	// (0x00033323) fep_vkb_top_text_pane_g2_ParamLimits

0xb995,	// (0x00033323) fep_vkb_top_text_pane_g2

0x0001,

0xfb14,	// (0x000374a2) fep_vkb_top_text_pane_g_ParamLimits

0xfb14,	// (0x000374a2) fep_vkb_top_text_pane_g

0xc2fc,	// (0x00033c8a) main_hc_apps_shell_pane

0x5a13,	// (0x0002d3a1) grid_hc_apps_pane_ParamLimits

0x5a13,	// (0x0002d3a1) grid_hc_apps_pane

0x5a25,	// (0x0002d3b3) list_hc_apps_pane

0x5a2d,	// (0x0002d3bb) scroll_pane_cp37_ParamLimits

0x5a2d,	// (0x0002d3bb) scroll_pane_cp37

0xd485,	// (0x00034e13) cell_hc_apps_pane_ParamLimits

0xd485,	// (0x00034e13) cell_hc_apps_pane

0xd543,	// (0x00034ed1) cell_hc_apps_pane_g1_ParamLimits

0xd543,	// (0x00034ed1) cell_hc_apps_pane_g1

0x5b17,	// (0x0002d4a5) cell_hc_apps_pane_g2_ParamLimits

0x5b17,	// (0x0002d4a5) cell_hc_apps_pane_g2

0x5b33,	// (0x0002d4c1) cell_hc_apps_pane_g3_ParamLimits

0x5b33,	// (0x0002d4c1) cell_hc_apps_pane_g3

0x0002,

0xfca8,	// (0x00037636) cell_hc_apps_pane_g_ParamLimits

0xfca8,	// (0x00037636) cell_hc_apps_pane_g

0xd56f,	// (0x00034efd) cell_hc_apps_pane_t1_ParamLimits

0xd56f,	// (0x00034efd) cell_hc_apps_pane_t1

0xc496,	// (0x00033e24) grid_highlight_pane_cp10_ParamLimits

0xc496,	// (0x00033e24) grid_highlight_pane_cp10

0xd5ad,	// (0x00034f3b) list_single_hc_apps_pane_ParamLimits

0xd5ad,	// (0x00034f3b) list_single_hc_apps_pane

0xd5dd,	// (0x00034f6b) list_single_hc_apps_pane_g1

0x8cee,	// (0x0003067c) list_single_hc_apps_pane_g2

0x0001,

0xfcaf,	// (0x0003763d) list_single_hc_apps_pane_g

0x8d07,	// (0x00030695) list_single_hc_apps_pane_g2_copy1

0x8d23,	// (0x000306b1) list_single_hc_apps_pane_t1

0xc36c,	// (0x00033cfa) bg_set_opt_pane_cp_ParamLimits

0x91ee,	// (0x00030b7c) setting_slider_pane_t1_ParamLimits

0x9207,	// (0x00030b95) setting_slider_pane_t2_ParamLimits

0x9221,	// (0x00030baf) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x00036ec5) setting_slider_pane_t_ParamLimits

0x9239,	// (0x00030bc7) slider_set_pane_ParamLimits

0x007a,	// (0x00027a08) control_pane_g5_ParamLimits

0x007a,	// (0x00027a08) control_pane_g5

0xb19e,	// (0x00032b2c) slider_set_pane_g1_ParamLimits

0x1784,	// (0x00029112) slider_set_pane_g2_ParamLimits

0xb1ab,	// (0x00032b39) slider_set_pane_g3_ParamLimits

0xb1bf,	// (0x00032b4d) slider_set_pane_g4_ParamLimits

0xb1d7,	// (0x00032b65) slider_set_pane_g5_ParamLimits

0xb1ab,	// (0x00032b39) slider_set_pane_g6_ParamLimits

0xb1ed,	// (0x00032b7b) slider_set_pane_g7_ParamLimits

0xf924,	// (0x000372b2) slider_set_pane_g_ParamLimits

0xce83,	// (0x00034811) navi_icon_text_pane_ParamLimits

0xa62c,	// (0x00031fba) aid_fill_nsta_2_ParamLimits

0xa663,	// (0x00031ff1) aid_touch_tab_arrow_left_ParamLimits

0xa679,	// (0x00032007) aid_touch_tab_arrow_right_ParamLimits

0xa714,	// (0x000320a2) clock_nsta_pane_ParamLimits

0x300b,	// (0x0002a999) navi_icon_pane_g1_ParamLimits

0x3017,	// (0x0002a9a5) navi_text_pane_t1_ParamLimits

0x4349,	// (0x0002bcd7) navi_icon_text_pane_g1_ParamLimits

0x4355,	// (0x0002bce3) navi_icon_text_pane_t1_ParamLimits

0xd5dd,	// (0x00034f6b) list_single_hc_apps_pane_g1_ParamLimits

0x8cee,	// (0x0003067c) list_single_hc_apps_pane_g2_ParamLimits

0xfcaf,	// (0x0003763d) list_single_hc_apps_pane_g_ParamLimits

0x8d07,	// (0x00030695) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8d23,	// (0x000306b1) list_single_hc_apps_pane_t1_ParamLimits

0x901f,	// (0x000309ad) popup_toolbar2_fixed_window_ParamLimits

0x901f,	// (0x000309ad) popup_toolbar2_fixed_window

0xa53c,	// (0x00031eca) popup_toolbar2_float_window

0xc2fc,	// (0x00033c8a) bg_popup_sub_pane_cp27

0x5c11,	// (0x0002d59f) grid_toolbar2_float_pane

0xc2fc,	// (0x00033c8a) bg_popup_sub_pane_cp26

0x5c11,	// (0x0002d59f) grid_toolbar2_fixed_pane

0xd5f6,	// (0x00034f84) cell_toolbar2_fixed_pane_ParamLimits

0xd5f6,	// (0x00034f84) cell_toolbar2_fixed_pane

0xd610,	// (0x00034f9e) cell_toolbar2_fixed_pane_g1

0x0bc7,	// (0x00028555) toolbar2_fixed_button_pane

0x0c77,	// (0x00028605) toolbar2_fixed_button_pane_g1

0x0c7f,	// (0x0002860d) toolbar2_fixed_button_pane_g2

0x0c87,	// (0x00028615) toolbar2_fixed_button_pane_g3

0x0c8f,	// (0x0002861d) toolbar2_fixed_button_pane_g4

0x0c97,	// (0x00028625) toolbar2_fixed_button_pane_g5

0x0c9f,	// (0x0002862d) toolbar2_fixed_button_pane_g6

0x0ca7,	// (0x00028635) toolbar2_fixed_button_pane_g7

0x0caf,	// (0x0002863d) toolbar2_fixed_button_pane_g8

0x0cb7,	// (0x00028645) toolbar2_fixed_button_pane_g9

0x0008,

0xf826,	// (0x000371b4) toolbar2_fixed_button_pane_g

0x5c32,	// (0x0002d5c0) cell_toolbar2_float_pane_ParamLimits

0x5c32,	// (0x0002d5c0) cell_toolbar2_float_pane

0x5c43,	// (0x0002d5d1) cell_toolbar2_float_pane_g1

0x0bc7,	// (0x00028555) toolbar2_fixed_button_pane_cp

0xb87d,	// (0x0003320b) fep_vkb_accented_list_pane_ParamLimits

0xb87d,	// (0x0003320b) fep_vkb_accented_list_pane

0x1b74,	// (0x00029502) bg_popup_fep_shadow_pane_g9

0xcfe2,	// (0x00034970) bg_popup_fep_shadow_pane_cp3

0xc83b,	// (0x000341c9) list_accented_list_pane

0x5c4c,	// (0x0002d5da) list_single_accented_list_pane_ParamLimits

0x5c4c,	// (0x0002d5da) list_single_accented_list_pane

0xcfe2,	// (0x00034970) list_highlight_pane_cp10

0x5c5d,	// (0x0002d5eb) list_single_accented_list_pane_t1

0xa466,	// (0x00031df4) popup_slider_window_ParamLimits

0xa466,	// (0x00031df4) popup_slider_window

0x589b,	// (0x0002d229) aid_indentation_list_msg

0xd701,	// (0x0003508f) bg_popup_window_pane_cp19

0x5d83,	// (0x0002d711) popup_slider_window_g1

0x5d9f,	// (0x0002d72d) popup_slider_window_g2

0x5dbb,	// (0x0002d749) popup_slider_window_g3

0x0005,

0xfcb4,	// (0x00037642) popup_slider_window_g

0x5e21,	// (0x0002d7af) popup_slider_window_t1

0x5e95,	// (0x0002d823) small_volume_slider_vertical_pane

0x479d,	// (0x0002c12b) small_volume_slider_vertical_pane_g1

0x479d,	// (0x0002c12b) small_volume_slider_vertical_pane_g2

0x5eb1,	// (0x0002d83f) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc6,	// (0x00037654) small_volume_slider_vertical_pane_g

0x8e11,	// (0x0003079f) area_side_right_pane_ParamLimits

0x8e11,	// (0x0003079f) area_side_right_pane

0xbbcd,	// (0x0003355b) aid_size_side_button_ParamLimits

0xbbcd,	// (0x0003355b) aid_size_side_button

0xbbe6,	// (0x00033574) grid_sctrl_middle_pane_ParamLimits

0xbbe6,	// (0x00033574) grid_sctrl_middle_pane

0x1cfe,	// (0x0002968c) sctrl_sk_bottom_pane

0x1d0f,	// (0x0002969d) sctrl_sk_top_pane

0x1d21,	// (0x000296af) aid_touch_sctrl_top

0xc496,	// (0x00033e24) bg_sctrl_sk_pane_ParamLimits

0xc496,	// (0x00033e24) bg_sctrl_sk_pane

0x1d2e,	// (0x000296bc) sctrl_sk_top_pane_g1

0x1d3b,	// (0x000296c9) sctrl_sk_top_pane_t1

0x1d21,	// (0x000296af) aid_touch_sctrl_bottom

0xc496,	// (0x00033e24) bg_sctrl_sk_pane_cp_ParamLimits

0xc496,	// (0x00033e24) bg_sctrl_sk_pane_cp

0x1d56,	// (0x000296e4) sctrl_sk_bottom_pane_g1

0x1d3b,	// (0x000296c9) sctrl_sk_bottom_pane_t1

0xbc05,	// (0x00033593) cell_sctrl_middle_pane_ParamLimits

0xbc05,	// (0x00033593) cell_sctrl_middle_pane

0xbc28,	// (0x000335b6) aid_touch_sctrl_middle_ParamLimits

0xbc28,	// (0x000335b6) aid_touch_sctrl_middle

0xc496,	// (0x00033e24) bg_sctrl_middle_pane_ParamLimits

0xc496,	// (0x00033e24) bg_sctrl_middle_pane

0x6c42,	// (0x0002e5d0) cell_sctrl_middle_pane_g1_ParamLimits

0x6c42,	// (0x0002e5d0) cell_sctrl_middle_pane_g1

0xbc3c,	// (0x000335ca) cell_sctrl_middle_pane_g2_ParamLimits

0xbc3c,	// (0x000335ca) cell_sctrl_middle_pane_g2

0x0001,

0xfcd2,	// (0x00037660) cell_sctrl_middle_pane_g_ParamLimits

0xfcd2,	// (0x00037660) cell_sctrl_middle_pane_g

0x0c77,	// (0x00028605) bg_sctrl_middle_pane_g1

0x0c7f,	// (0x0002860d) bg_sctrl_middle_pane_g2

0x0c87,	// (0x00028615) bg_sctrl_middle_pane_g3

0x0c8f,	// (0x0002861d) bg_sctrl_middle_pane_g4

0x0c97,	// (0x00028625) bg_sctrl_middle_pane_g5

0x0c9f,	// (0x0002862d) bg_sctrl_middle_pane_g6

0x0ca7,	// (0x00028635) bg_sctrl_middle_pane_g7

0x0caf,	// (0x0002863d) bg_sctrl_middle_pane_g8

0x0007,

0xfcd7,	// (0x00037665) bg_sctrl_middle_pane_g

0x0cb7,	// (0x00028645) bg_sctrl_middle_pane_g8_copy1

0x0c77,	// (0x00028605) bg_sctrl_sk_pane_g1

0x0c7f,	// (0x0002860d) bg_sctrl_sk_pane_g2

0x0c87,	// (0x00028615) bg_sctrl_sk_pane_g3

0x0008,

0xf826,	// (0x000371b4) bg_sctrl_sk_pane_g

0xc664,	// (0x00033ff2) aid_size_touch_scroll_bar

0x0c8f,	// (0x0002861d) bg_sctrl_sk_pane_g4

0x0c97,	// (0x00028625) bg_sctrl_sk_pane_g5

0x0c9f,	// (0x0002862d) bg_sctrl_sk_pane_g6

0x0ca7,	// (0x00028635) bg_sctrl_sk_pane_g7

0x0caf,	// (0x0002863d) bg_sctrl_sk_pane_g8

0x0cb7,	// (0x00028645) bg_sctrl_sk_pane_g9

0x0241,	// (0x00027bcf) popup_fep_china_hwr2_fs_candidate_window

0x9f2c,	// (0x000318ba) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9f2c,	// (0x000318ba) popup_fep_china_hwr2_fs_control_window

0x4a0d,	// (0x0002c39b) sctrl_sk_top_pane_g2

0x0001,

0xfccd,	// (0x0003765b) sctrl_sk_top_pane_g

0xd797,	// (0x00035125) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd797,	// (0x00035125) aid_fep_china_hwr2_fs_cell

0xd7ab,	// (0x00035139) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7ab,	// (0x00035139) bg_popup_fep_shadow_pane_cp4

0xd7c2,	// (0x00035150) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7c2,	// (0x00035150) bg_popup_fep_shadow_pane_cp5

0xd7d4,	// (0x00035162) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7d4,	// (0x00035162) popup_fep_china_hwr2_fs_control_bar_grid

0xd7e8,	// (0x00035176) popup_fep_china_hwr2_fs_control_funtion_grid

0x5f0d,	// (0x0002d89b) aid_fep_china_hwr2_fs_candi_cell

0xc2fc,	// (0x00033c8a) bg_popup_fep_shadow_pane_cp6

0x5f17,	// (0x0002d8a5) popup_fep_china_hwr2_fs_candidate_grid

0xd7f0,	// (0x0003517e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7f0,	// (0x0003517e) cell_fep_china_hwr2_fs_funtion_grid

0x479d,	// (0x0002c12b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5f39,	// (0x0002d8c7) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5f39,	// (0x0002d8c7) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5f50,	// (0x0002d8de) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5f50,	// (0x0002d8de) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce8,	// (0x00037676) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce8,	// (0x00037676) cell_fep_china_hwr2_fs_funtion_grid_g

0xd808,	// (0x00035196) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd808,	// (0x00035196) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd81d,	// (0x000351ab) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd81d,	// (0x000351ab) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfced,	// (0x0003767b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfced,	// (0x0003767b) cell_fep_china_hwr2_fs_funtion_grid_t

0x5f97,	// (0x0002d925) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5f9f,	// (0x0002d92d) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5fa7,	// (0x0002d935) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf2,	// (0x00037680) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5faf,	// (0x0002d93d) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5faf,	// (0x0002d93d) cell_fep_china_hwr2_fs_candidate_grid

0x5fc8,	// (0x0002d956) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5fd0,	// (0x0002d95e) popup_fep_china_hwr2_fs_candidate_grid_g21

0x479d,	// (0x0002c12b) cell_fep_china_hwr2_fs_candidate_grid_g1

0x479d,	// (0x0002c12b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb19,	// (0x000374a7) cell_fep_china_hwr2_fs_candidate_grid_g

0x5fd8,	// (0x0002d966) cell_fep_china_hwr2_fs_candidate_grid_t1

0x0840,	// (0x000281ce) clock_nsta_pane_cp_24_ParamLimits

0x0840,	// (0x000281ce) clock_nsta_pane_cp_24

0x08be,	// (0x0002824c) indicator_nsta_pane_cp_24_ParamLimits

0x08be,	// (0x0002824c) indicator_nsta_pane_cp_24

0x2e87,	// (0x0002a815) heading_pane_g1

0x0001,

0xf88b,	// (0x00037219) heading_pane_g

0x38c3,	// (0x0002b251) grid_sct_catagory_button_pane

0x38f3,	// (0x0002b281) scroll_pane_cp5_ParamLimits

0x4397,	// (0x0002bd25) button_value_adjust_pane_cp5_ParamLimits

0x4397,	// (0x0002bd25) button_value_adjust_pane_cp5

0x4476,	// (0x0002be04) form2_midp_time_pane_ParamLimits

0x5fe6,	// (0x0002d974) cell_sct_catagory_button_pane_ParamLimits

0x5fe6,	// (0x0002d974) cell_sct_catagory_button_pane

0x4762,	// (0x0002c0f0) bg_button_pane_cp01_ParamLimits

0x4762,	// (0x0002c0f0) bg_button_pane_cp01

0x479d,	// (0x0002c12b) cell_sct_catagory_button_pane_g1

0xa4df,	// (0x00031e6d) popup_tb_extension_window

0xd839,	// (0x000351c7) aid_size_cell_ext_ParamLimits

0xd839,	// (0x000351c7) aid_size_cell_ext

0xc616,	// (0x00033fa4) bg_tb_trans_pane_cp1_ParamLimits

0xc616,	// (0x00033fa4) bg_tb_trans_pane_cp1

0xd85f,	// (0x000351ed) grid_tb_ext_pane_ParamLimits

0xd85f,	// (0x000351ed) grid_tb_ext_pane

0xd89e,	// (0x0003522c) cell_tb_ext_pane_ParamLimits

0xd89e,	// (0x0003522c) cell_tb_ext_pane

0xd8c6,	// (0x00035254) cell_tb_ext_pane_g1_ParamLimits

0xd8c6,	// (0x00035254) cell_tb_ext_pane_g1

0x607c,	// (0x0002da0a) cell_tb_ext_pane_t1

0xc496,	// (0x00033e24) list_highlight_pane_cp11_ParamLimits

0xc496,	// (0x00033e24) list_highlight_pane_cp11

0x9034,	// (0x000309c2) popup_uni_indicator_window_ParamLimits

0x9034,	// (0x000309c2) popup_uni_indicator_window

0xc722,	// (0x000340b0) bg_popup_sub_pane_cp14

0xd8e3,	// (0x00035271) list_uniindi_pane

0xd8ef,	// (0x0003527d) uniindi_top_pane

0xc496,	// (0x00033e24) bg_uniindi_top_pane

0xd90e,	// (0x0003529c) uniindi_top_pane_g1

0xd924,	// (0x000352b2) uniindi_top_pane_g2

0x0003,

0xfcf9,	// (0x00037687) uniindi_top_pane_g

0xd941,	// (0x000352cf) uniindi_top_pane_t1

0x612d,	// (0x0002dabb) list_single_uniindi_pane_ParamLimits

0x612d,	// (0x0002dabb) list_single_uniindi_pane

0x479d,	// (0x0002c12b) bg_uniindi_top_pane_g1

0x6140,	// (0x0002dace) list_single_uniindi_pane_g1

0x6153,	// (0x0002dae1) list_single_uniindi_pane_t1

0xc2fc,	// (0x00033c8a) control_bg_pane

0x6178,	// (0x0002db06) bg_sctrl_sk_pane_cp1

0x6181,	// (0x0002db0f) bg_sctrl_sk_pane_cp2

0x618a,	// (0x0002db18) control_bg_pane_g1

0x6193,	// (0x0002db21) control_bg_pane_g2

0x0001,

0xfd02,	// (0x00037690) control_bg_pane_g

0x41dd,	// (0x0002bb6b) cell_indicator_nsta_pane_g1_ParamLimits

0xb613,	// (0x00032fa1) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7d,	// (0x0003740b) cell_indicator_nsta_pane_g_ParamLimits

0xeea5,	// (0x00036833) form2_midp_time_pane_t1_ParamLimits

0x194a,	// (0x000292d8) main_idle_act4_pane_ParamLimits

0x194a,	// (0x000292d8) main_idle_act4_pane

0xa4df,	// (0x00031e6d) popup_tb_extension_window_ParamLimits

0xd884,	// (0x00035212) tb_ext_find_pane_ParamLimits

0xd884,	// (0x00035212) tb_ext_find_pane

0x619c,	// (0x0002db2a) ai_gene_pane_1_cp1

0xd063,	// (0x000349f1) ai_gene_pane_2_cp1

0xd96b,	// (0x000352f9) list_single_idle_plugin_calendar_pane

0x61ad,	// (0x0002db3b) list_single_idle_plugin_notification_pane

0x61b6,	// (0x0002db44) list_single_idle_plugin_player_pane

0xd974,	// (0x00035302) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd974,	// (0x00035302) list_single_idle_plugin_shortcut_pane

0xd99c,	// (0x0003532a) main_idle_act4_pane_t1

0xd9b3,	// (0x00035341) main_idle_act4_pane_t2

0x0001,

0xfd07,	// (0x00037695) main_idle_act4_pane_t

0xd9ca,	// (0x00035358) middle_sk_idle_act4_pane_ParamLimits

0xd9ca,	// (0x00035358) middle_sk_idle_act4_pane

0xd9e6,	// (0x00035374) popup_clock_digital_analogue_window_cp2

0xda12,	// (0x000353a0) shortcut_wheel_idle_act4_pane_ParamLimits

0xda12,	// (0x000353a0) shortcut_wheel_idle_act4_pane

0x479d,	// (0x0002c12b) shortcut_wheel_idle_act4_pane_g1

0x479d,	// (0x0002c12b) shortcut_wheel_idle_act4_pane_g2

0x479d,	// (0x0002c12b) shortcut_wheel_idle_act4_pane_g3

0x479d,	// (0x0002c12b) shortcut_wheel_idle_act4_pane_g4

0x479d,	// (0x0002c12b) shortcut_wheel_idle_act4_pane_g5

0x6249,	// (0x0002dbd7) shortcut_wheel_idle_act4_pane_g6

0x6251,	// (0x0002dbdf) shortcut_wheel_idle_act4_pane_g7

0x6259,	// (0x0002dbe7) shortcut_wheel_idle_act4_pane_g8

0x6261,	// (0x0002dbef) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd0c,	// (0x0003769a) shortcut_wheel_idle_act4_pane_g

0xd19e,	// (0x00034b2c) middle_sk_idle_act4_pane_g1_ParamLimits

0xd19e,	// (0x00034b2c) middle_sk_idle_act4_pane_g1

0xda8f,	// (0x0003541d) middle_sk_idle_act4_pane_g2_ParamLimits

0xda8f,	// (0x0003541d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd2f,	// (0x000376bd) middle_sk_idle_act4_pane_g_ParamLimits

0xfd2f,	// (0x000376bd) middle_sk_idle_act4_pane_g

0xdaa7,	// (0x00035435) middle_sk_idle_act4_pane_t1_ParamLimits

0xdaa7,	// (0x00035435) middle_sk_idle_act4_pane_t1

0xdad6,	// (0x00035464) grid_ai_shortcut_pane_ParamLimits

0xdad6,	// (0x00035464) grid_ai_shortcut_pane

0xdaf3,	// (0x00035481) list_highlight_pane_cp16_ParamLimits

0xdaf3,	// (0x00035481) list_highlight_pane_cp16

0xdb00,	// (0x0003548e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb00,	// (0x0003548e) list_single_idle_plugin_shortcut_pane_g1

0xdb0c,	// (0x0003549a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdb0c,	// (0x0003549a) list_single_idle_plugin_shortcut_pane_g2

0xdb28,	// (0x000354b6) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdb28,	// (0x000354b6) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd34,	// (0x000376c2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd34,	// (0x000376c2) list_single_idle_plugin_shortcut_pane_g

0xdb3d,	// (0x000354cb) cell_ai_shortcut_pane_ParamLimits

0xdb3d,	// (0x000354cb) cell_ai_shortcut_pane

0xdb53,	// (0x000354e1) cell_ai_shortcut_pane_g1_ParamLimits

0xdb53,	// (0x000354e1) cell_ai_shortcut_pane_g1

0x619c,	// (0x0002db2a) ai_gene_pane_1_cp2

0x6391,	// (0x0002dd1f) ai_gene_pane_2_cp2

0x6399,	// (0x0002dd27) list_highlight_pane_cp15

0xdb75,	// (0x00035503) list_single_idle_plugin_calendar_pane_g1

0x6399,	// (0x0002dd27) list_highlight_pane_cp17

0x63aa,	// (0x0002dd38) list_single_idle_plugin_calendar_pane_g1_copy1

0x63b2,	// (0x0002dd40) list_single_idle_plugin_player_pane_g1

0x3b1c,	// (0x0002b4aa) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3b,	// (0x000376c9) list_single_idle_plugin_player_pane_g

0x63ba,	// (0x0002dd48) list_single_idle_plugin_player_pane_t1

0x63c8,	// (0x0002dd56) list_single_idle_plugin_player_pane_t2

0x63d6,	// (0x0002dd64) list_single_idle_plugin_player_pane_t3

0x63e4,	// (0x0002dd72) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd40,	// (0x000376ce) list_single_idle_plugin_player_pane_t

0x63f2,	// (0x0002dd80) wait_bar_pane_cp15

0x63fa,	// (0x0002dd88) grid_ai_notification_pane

0x3b1c,	// (0x0002b4aa) list_single_idle_plugin_notification_pane_g1

0xdb7d,	// (0x0003550b) cell_ai_notification_pane_ParamLimits

0xdb7d,	// (0x0003550b) cell_ai_notification_pane

0x6410,	// (0x0002dd9e) cell_ai_notification_pane_g1

0x6418,	// (0x0002dda6) cell_ai_notification_pane_t1

0xdb8a,	// (0x00035518) tb_ext_find_button_pane

0xdb92,	// (0x00035520) tb_ext_find_pane_g1

0xdb9a,	// (0x00035528) tb_ext_find_pane_t1

0xcb74,	// (0x00034502) tb_ext_find_button_pane_g1

0xdba8,	// (0x00035536) tb_ext_find_button_pane_g2

0x0001,

0xfd49,	// (0x000376d7) tb_ext_find_button_pane_g

0xd99c,	// (0x0003532a) main_idle_act4_pane_t1_ParamLimits

0xd9b3,	// (0x00035341) main_idle_act4_pane_t2_ParamLimits

0xfd07,	// (0x00037695) main_idle_act4_pane_t_ParamLimits

0xd9e6,	// (0x00035374) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd9fe,	// (0x0003538c) sat_plugin_idle_act4_pane_ParamLimits

0xd9fe,	// (0x0003538c) sat_plugin_idle_act4_pane

0xdbb1,	// (0x0003553f) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdbb1,	// (0x0003553f) sat_plugin_idle_act4_pane_t1

0xdbc9,	// (0x00035557) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdbc9,	// (0x00035557) sat_plugin_idle_act4_pane_t2

0xdbe1,	// (0x0003556f) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdbe1,	// (0x0003556f) sat_plugin_idle_act4_pane_t3

0xdbf9,	// (0x00035587) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdbf9,	// (0x00035587) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4e,	// (0x000376dc) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4e,	// (0x000376dc) sat_plugin_idle_act4_pane_t

0x8faf,	// (0x0003093d) popup_battery_window_ParamLimits

0x8faf,	// (0x0003093d) popup_battery_window

0xc496,	// (0x00033e24) bg_popup_sub_pane_cp25_ParamLimits

0xc496,	// (0x00033e24) bg_popup_sub_pane_cp25

0x6499,	// (0x0002de27) popup_battery_window_g1_ParamLimits

0x6499,	// (0x0002de27) popup_battery_window_g1

0x64a5,	// (0x0002de33) popup_battery_window_t1_ParamLimits

0x64a5,	// (0x0002de33) popup_battery_window_t1

0x64b7,	// (0x0002de45) popup_battery_window_t2_ParamLimits

0x64b7,	// (0x0002de45) popup_battery_window_t2

0x0001,

0xfd57,	// (0x000376e5) popup_battery_window_t_ParamLimits

0xfd57,	// (0x000376e5) popup_battery_window_t

0x9b80,	// (0x0003150e) midp_canvas_pane_ParamLimits

0x9bf2,	// (0x00031580) midp_keypad_pane_ParamLimits

0x9bf2,	// (0x00031580) midp_keypad_pane

0xc864,	// (0x000341f2) main_midp_pane_ParamLimits

0xb620,	// (0x00032fae) signal_pane_g2_cp_ParamLimits

0xdc11,	// (0x0003559f) aid_size_cell_midp_keypad_ParamLimits

0xdc11,	// (0x0003559f) aid_size_cell_midp_keypad

0xdc2f,	// (0x000355bd) midp_keyp_game_grid_pane_ParamLimits

0xdc2f,	// (0x000355bd) midp_keyp_game_grid_pane

0xdc56,	// (0x000355e4) midp_keyp_rocker_pane_ParamLimits

0xdc56,	// (0x000355e4) midp_keyp_rocker_pane

0xdca7,	// (0x00035635) midp_keyp_sk_left_pane_ParamLimits

0xdca7,	// (0x00035635) midp_keyp_sk_left_pane

0xdcfb,	// (0x00035689) midp_keyp_sk_right_pane_ParamLimits

0xdcfb,	// (0x00035689) midp_keyp_sk_right_pane

0xc2fc,	// (0x00033c8a) bg_button_pane_cp03

0xdd4f,	// (0x000356dd) midp_keyp_sk_left_pane_g1

0xc2fc,	// (0x00033c8a) bg_button_pane_cp04

0xdd4f,	// (0x000356dd) midp_keyp_sk_right_pane_g1

0x479d,	// (0x0002c12b) midp_keyp_rocker_pane_g1

0xdd58,	// (0x000356e6) keyp_game_cell_pane_ParamLimits

0xdd58,	// (0x000356e6) keyp_game_cell_pane

0xc2fc,	// (0x00033c8a) bg_button_pane_cp02

0xdd7c,	// (0x0003570a) keyp_game_cell_pane_g1

0x8fcf,	// (0x0003095d) popup_fep_vkb2_window_ParamLimits

0x8fcf,	// (0x0003095d) popup_fep_vkb2_window

0xbc54,	// (0x000335e2) aid_size_cell_vkb2_ParamLimits

0xbc54,	// (0x000335e2) aid_size_cell_vkb2

0xbc88,	// (0x00033616) popup_fep_vkb2_window_g1_ParamLimits

0xbc88,	// (0x00033616) popup_fep_vkb2_window_g1

0xbcd8,	// (0x00033666) vkb2_area_bottom_pane_ParamLimits

0xbcd8,	// (0x00033666) vkb2_area_bottom_pane

0xbd2c,	// (0x000336ba) vkb2_area_keypad_pane_ParamLimits

0xbd2c,	// (0x000336ba) vkb2_area_keypad_pane

0xbd74,	// (0x00033702) vkb2_area_top_pane_ParamLimits

0xbd74,	// (0x00033702) vkb2_area_top_pane

0xbe00,	// (0x0003378e) vkb2_top_entry_pane_ParamLimits

0xbe00,	// (0x0003378e) vkb2_top_entry_pane

0xbe2d,	// (0x000337bb) vkb2_top_grid_left_pane_ParamLimits

0xbe2d,	// (0x000337bb) vkb2_top_grid_left_pane

0xbe4e,	// (0x000337dc) vkb2_top_grid_right_pane_ParamLimits

0xbe4e,	// (0x000337dc) vkb2_top_grid_right_pane

0x1fb3,	// (0x00029941) vkb2_cell_keypad_pane_ParamLimits

0x1fb3,	// (0x00029941) vkb2_cell_keypad_pane

0xbe96,	// (0x00033824) vkb2_area_bottom_grid_pane_ParamLimits

0xbe96,	// (0x00033824) vkb2_area_bottom_grid_pane

0xbec0,	// (0x0003384e) vkb2_area_bottom_pane_g1_ParamLimits

0xbec0,	// (0x0003384e) vkb2_area_bottom_pane_g1

0xbee6,	// (0x00033874) vkb2_area_bottom_pane_g2_ParamLimits

0xbee6,	// (0x00033874) vkb2_area_bottom_pane_g2

0xbf17,	// (0x000338a5) vkb2_area_bottom_pane_g3_ParamLimits

0xbf17,	// (0x000338a5) vkb2_area_bottom_pane_g3

0x0002,

0xfd5c,	// (0x000376ea) vkb2_area_bottom_pane_g_ParamLimits

0xfd5c,	// (0x000376ea) vkb2_area_bottom_pane_g

0x215d,	// (0x00029aeb) vkb2_top_cell_left_pane_ParamLimits

0x215d,	// (0x00029aeb) vkb2_top_cell_left_pane

0xdd85,	// (0x00035713) vkb2_top_entry_pane_g1_ParamLimits

0xdd85,	// (0x00035713) vkb2_top_entry_pane_g1

0xdd93,	// (0x00035721) vkb2_top_entry_pane_t1_ParamLimits

0xdd93,	// (0x00035721) vkb2_top_entry_pane_t1

0x6668,	// (0x0002dff6) vkb2_top_entry_pane_t2_ParamLimits

0x6668,	// (0x0002dff6) vkb2_top_entry_pane_t2

0x669a,	// (0x0002e028) vkb2_top_entry_pane_t3_ParamLimits

0x669a,	// (0x0002e028) vkb2_top_entry_pane_t3

0x0002,

0xfd63,	// (0x000376f1) vkb2_top_entry_pane_t_ParamLimits

0xfd63,	// (0x000376f1) vkb2_top_entry_pane_t

0xbf81,	// (0x0003390f) vkb2_top_grid_right_pane_g1_ParamLimits

0xbf81,	// (0x0003390f) vkb2_top_grid_right_pane_g1

0x21c0,	// (0x00029b4e) vkb2_top_grid_right_pane_g2_ParamLimits

0x21c0,	// (0x00029b4e) vkb2_top_grid_right_pane_g2

0x21d8,	// (0x00029b66) vkb2_top_grid_right_pane_g3_ParamLimits

0x21d8,	// (0x00029b66) vkb2_top_grid_right_pane_g3

0xbf97,	// (0x00033925) vkb2_top_grid_right_pane_g4_ParamLimits

0xbf97,	// (0x00033925) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6a,	// (0x000376f8) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6a,	// (0x000376f8) vkb2_top_grid_right_pane_g

0x2206,	// (0x00029b94) vkb2_top_cell_left_pane_g1

0x2228,	// (0x00029bb6) vkb2_cell_keypad_pane_g1_ParamLimits

0x2228,	// (0x00029bb6) vkb2_cell_keypad_pane_g1

0x66be,	// (0x0002e04c) vkb2_cell_keypad_pane_t1_ParamLimits

0x66be,	// (0x0002e04c) vkb2_cell_keypad_pane_t1

0x2236,	// (0x00029bc4) vkb2_cell_bottom_grid_pane_ParamLimits

0x2236,	// (0x00029bc4) vkb2_cell_bottom_grid_pane

0x226f,	// (0x00029bfd) vkb2_cell_bottom_grid_pane_g1

0xda33,	// (0x000353c1) aid_call2_pane_cp02

0xda3b,	// (0x000353c9) aid_call_pane_cp02

0xda43,	// (0x000353d1) clock_digital_number_pane_cp10

0xda4b,	// (0x000353d9) clock_digital_number_pane_cp11

0xda53,	// (0x000353e1) clock_digital_number_pane_cp12

0xda5b,	// (0x000353e9) clock_digital_number_pane_cp13

0xda63,	// (0x000353f1) clock_digital_separator_pane_cp10

0xcb74,	// (0x00034502) popup_clock_digital_analogue_window_cp2_g1

0xcb74,	// (0x00034502) popup_clock_digital_analogue_window_cp2_g2

0xda6b,	// (0x000353f9) popup_clock_digital_analogue_window_cp2_g3

0xcb74,	// (0x00034502) popup_clock_digital_analogue_window_cp2_g4

0xda6b,	// (0x000353f9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd1f,	// (0x000376ad) popup_clock_digital_analogue_window_cp2_g

0xda73,	// (0x00035401) popup_clock_digital_analogue_window_cp2_t1

0xda81,	// (0x0003540f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2a,	// (0x000376b8) popup_clock_digital_analogue_window_cp2_t

0x479d,	// (0x0002c12b) clock_digital_number_pane_cp10_g1

0x479d,	// (0x0002c12b) clock_digital_number_pane_cp10_g2

0x0001,

0xfb19,	// (0x000374a7) clock_digital_number_pane_cp10_g

0x479d,	// (0x0002c12b) clock_digital_separator_pane_cp10_g1

0x479d,	// (0x0002c12b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb19,	// (0x000374a7) clock_digital_separator_pane_cp10_g

0xd930,	// (0x000352be) uniindi_top_pane_g3

0x60f6,	// (0x0002da84) uniindi_top_pane_g4

0x203e,	// (0x000299cc) vkb2_row_keypad_pane_ParamLimits

0x203e,	// (0x000299cc) vkb2_row_keypad_pane

0x228f,	// (0x00029c1d) vkb2_cell_t_keypad_pane_ParamLimits

0x228f,	// (0x00029c1d) vkb2_cell_t_keypad_pane

0x229f,	// (0x00029c2d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x229f,	// (0x00029c2d) vkb2_cell_t_keypad_pane_cp08

0x22b2,	// (0x00029c40) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x22b2,	// (0x00029c40) vkb2_cell_t_keypad_pane_cp09

0x22c6,	// (0x00029c54) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x22c6,	// (0x00029c54) vkb2_cell_t_keypad_pane_cp01

0x22d7,	// (0x00029c65) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x22d7,	// (0x00029c65) vkb2_cell_t_keypad_pane_cp02

0x22e8,	// (0x00029c76) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x22e8,	// (0x00029c76) vkb2_cell_t_keypad_pane_cp03

0x22f9,	// (0x00029c87) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x22f9,	// (0x00029c87) vkb2_cell_t_keypad_pane_cp04

0x230a,	// (0x00029c98) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x230a,	// (0x00029c98) vkb2_cell_t_keypad_pane_cp05

0x231b,	// (0x00029ca9) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x231b,	// (0x00029ca9) vkb2_cell_t_keypad_pane_cp06

0x232c,	// (0x00029cba) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x232c,	// (0x00029cba) vkb2_cell_t_keypad_pane_cp07

0x233d,	// (0x00029ccb) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x233d,	// (0x00029ccb) vkb2_cell_t_keypad_pane_cp10

0x4a0d,	// (0x0002c39b) vkb2_cell_t_keypad_pane_g1

0x66d5,	// (0x0002e063) vkb2_cell_t_keypad_pane_t1

0xc2fc,	// (0x00033c8a) popup_grid_graphic2_window

0xddcc,	// (0x0003575a) aid_size_cell_graphic2_ParamLimits

0xddcc,	// (0x0003575a) aid_size_cell_graphic2

0xde0a,	// (0x00035798) bg_popup_window_pane_cp21_ParamLimits

0xde0a,	// (0x00035798) bg_popup_window_pane_cp21

0xde18,	// (0x000357a6) graphic2_pages_pane_ParamLimits

0xde18,	// (0x000357a6) graphic2_pages_pane

0xde6e,	// (0x000357fc) grid_graphic2_control_pane_ParamLimits

0xde6e,	// (0x000357fc) grid_graphic2_control_pane

0xdeb6,	// (0x00035844) grid_graphic2_pane_ParamLimits

0xdeb6,	// (0x00035844) grid_graphic2_pane

0xdf3d,	// (0x000358cb) cell_graphic2_pane

0xc2fc,	// (0x00033c8a) main_comp_mode_pane

0x594d,	// (0x0002d2db) list_ai3_gene_pane_ParamLimits

0xd701,	// (0x0003508f) bg_popup_window_pane_cp19_ParamLimits

0x5d27,	// (0x0002d6b5) bg_touch_area_indi_pane_ParamLimits

0x5d27,	// (0x0002d6b5) bg_touch_area_indi_pane

0x5d3d,	// (0x0002d6cb) bg_touch_area_indi_pane_cp01_ParamLimits

0x5d3d,	// (0x0002d6cb) bg_touch_area_indi_pane_cp01

0x5d53,	// (0x0002d6e1) bg_touch_area_indi_pane_cp02_ParamLimits

0x5d53,	// (0x0002d6e1) bg_touch_area_indi_pane_cp02

0x5d69,	// (0x0002d6f7) bg_touch_area_indi_pane_cp03_ParamLimits

0x5d69,	// (0x0002d6f7) bg_touch_area_indi_pane_cp03

0x5d83,	// (0x0002d711) popup_slider_window_g1_ParamLimits

0x5d9f,	// (0x0002d72d) popup_slider_window_g2_ParamLimits

0x5dbb,	// (0x0002d749) popup_slider_window_g3_ParamLimits

0xfcb4,	// (0x00037642) popup_slider_window_g_ParamLimits

0x5e21,	// (0x0002d7af) popup_slider_window_t1_ParamLimits

0x5e95,	// (0x0002d823) small_volume_slider_vertical_pane_ParamLimits

0xdf3d,	// (0x000358cb) cell_graphic2_pane_ParamLimits

0xdf98,	// (0x00035926) bg_button_pane_cp10_ParamLimits

0xdf98,	// (0x00035926) bg_button_pane_cp10

0xdfab,	// (0x00035939) bg_button_pane_cp11_ParamLimits

0xdfab,	// (0x00035939) bg_button_pane_cp11

0xdfbe,	// (0x0003594c) graphic2_pages_pane_g1_ParamLimits

0xdfbe,	// (0x0003594c) graphic2_pages_pane_g1

0xdfd9,	// (0x00035967) graphic2_pages_pane_g2_ParamLimits

0xdfd9,	// (0x00035967) graphic2_pages_pane_g2

0x0001,

0xfd78,	// (0x00037706) graphic2_pages_pane_g_ParamLimits

0xfd78,	// (0x00037706) graphic2_pages_pane_g

0xdff1,	// (0x0003597f) graphic2_pages_pane_t1_ParamLimits

0xdff1,	// (0x0003597f) graphic2_pages_pane_t1

0xe009,	// (0x00035997) cell_graphic2_control_pane_ParamLimits

0xe009,	// (0x00035997) cell_graphic2_control_pane

0xe03b,	// (0x000359c9) cell_graphic2_pane_g1_ParamLimits

0xe03b,	// (0x000359c9) cell_graphic2_pane_g1

0xd1ac,	// (0x00034b3a) cell_graphic2_pane_g2_ParamLimits

0xd1ac,	// (0x00034b3a) cell_graphic2_pane_g2

0xe048,	// (0x000359d6) cell_graphic2_pane_g3_ParamLimits

0xe048,	// (0x000359d6) cell_graphic2_pane_g3

0xd1b9,	// (0x00034b47) cell_graphic2_pane_g4_ParamLimits

0xd1b9,	// (0x00034b47) cell_graphic2_pane_g4

0xe055,	// (0x000359e3) cell_graphic2_pane_g5_ParamLimits

0xe055,	// (0x000359e3) cell_graphic2_pane_g5

0x0004,

0xfd7d,	// (0x0003770b) cell_graphic2_pane_g_ParamLimits

0xfd7d,	// (0x0003770b) cell_graphic2_pane_g

0xe072,	// (0x00035a00) cell_graphic2_pane_t1_ParamLimits

0xe072,	// (0x00035a00) cell_graphic2_pane_t1

0x2e7b,	// (0x0002a809) grid_highlight_pane_cp11_ParamLimits

0x2e7b,	// (0x0002a809) grid_highlight_pane_cp11

0xc496,	// (0x00033e24) bg_button_pane_cp05

0xe0bc,	// (0x00035a4a) cell_graphic2_control_pane_g1

0x479d,	// (0x0002c12b) bg_touch_area_indi_pane_g1

0x69ae,	// (0x0002e33c) aid_cmod_rocker_key_size

0x69b8,	// (0x0002e346) aid_cmode_itu_key_size

0x69c2,	// (0x0002e350) main_cmode_video_pane

0x69cc,	// (0x0002e35a) main_comp_mode_itu_pane

0x69d8,	// (0x0002e366) main_comp_mode_rocker_pane

0x69e4,	// (0x0002e372) cell_cmode_rocker_pane_ParamLimits

0x69e4,	// (0x0002e372) cell_cmode_rocker_pane

0x69f6,	// (0x0002e384) cell_cmode_itu_pane_ParamLimits

0x69f6,	// (0x0002e384) cell_cmode_itu_pane

0xc722,	// (0x000340b0) bg_button_pane_cp06_ParamLimits

0xc722,	// (0x000340b0) bg_button_pane_cp06

0x4a0d,	// (0x0002c39b) cell_cmode_rocker_pane_g1_ParamLimits

0x4a0d,	// (0x0002c39b) cell_cmode_rocker_pane_g1

0x5f39,	// (0x0002d8c7) cell_cmode_rocker_pane_g2_ParamLimits

0x5f39,	// (0x0002d8c7) cell_cmode_rocker_pane_g2

0x0001,

0xfd8d,	// (0x0003771b) cell_cmode_rocker_pane_g_ParamLimits

0xfd8d,	// (0x0003771b) cell_cmode_rocker_pane_g

0xc2fc,	// (0x00033c8a) bg_button_pane_cp07

0x6a0b,	// (0x0002e399) cell_cmode_itu_pane_g1

0x6a14,	// (0x0002e3a2) cell_cmode_itu_pane_t1

0x6a22,	// (0x0002e3b0) cell_cmode_itu_pane_t2

0x0001,

0xfd92,	// (0x00037720) cell_cmode_itu_pane_t

0x6168,	// (0x0002daf6) aid_touch_ctrl_left

0x6170,	// (0x0002dafe) aid_touch_ctrl_right

0xc2fc,	// (0x00033c8a) compa_mode_pane

0xe0e2,	// (0x00035a70) aid_cmod_rocker_key_size_cp

0xe0ec,	// (0x00035a7a) aid_cmode_itu_key_size_cp

0x6a44,	// (0x0002e3d2) compa_mode_pane_g1

0x6a4c,	// (0x0002e3da) compa_mode_pane_g2

0x6a54,	// (0x0002e3e2) compa_mode_pane_g3

0x0002,

0xfd97,	// (0x00037725) compa_mode_pane_g

0xe0f6,	// (0x00035a84) main_comp_mode_itu_pane_cp

0xe0fe,	// (0x00035a8c) main_comp_mode_rocker_pane_cp

0xe106,	// (0x00035a94) cell_cmode_itu_pane_cp_ParamLimits

0xe106,	// (0x00035a94) cell_cmode_itu_pane_cp

0xe11b,	// (0x00035aa9) cell_cmode_rocker_pane_cp_ParamLimits

0xe11b,	// (0x00035aa9) cell_cmode_rocker_pane_cp

0xc722,	// (0x000340b0) bg_button_pane_cp06_cp_ParamLimits

0xc722,	// (0x000340b0) bg_button_pane_cp06_cp

0x4a0d,	// (0x0002c39b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4a0d,	// (0x0002c39b) cell_cmode_rocker_pane_g1_cp

0x479d,	// (0x0002c12b) cell_cmode_rocker_pane_g2_cp

0xc2fc,	// (0x00033c8a) bg_button_pane_cp07_cp

0xe12d,	// (0x00035abb) cell_cmode_itu_pane_g1_cp

0xe136,	// (0x00035ac4) cell_cmode_itu_pane_t1_cp

0xe136,	// (0x00035ac4) cell_cmode_itu_pane_t2_cp

0xb36a,	// (0x00032cf8) settings_code_pane_cp2

0xc36c,	// (0x00033cfa) bg_popup_window_pane_cp3_ParamLimits

0xc5af,	// (0x00033f3d) heading_pane_cp3_ParamLimits

0xc5be,	// (0x00033f4c) listscroll_popup_graphic_pane_ParamLimits

0x1958,	// (0x000292e6) fep_hwr_aid_pane_ParamLimits

0x1d21,	// (0x000296af) aid_touch_sctrl_top_ParamLimits

0x1d2e,	// (0x000296bc) sctrl_sk_top_pane_g1_ParamLimits

0x4a0d,	// (0x0002c39b) sctrl_sk_top_pane_g2_ParamLimits

0xfccd,	// (0x0003765b) sctrl_sk_top_pane_g_ParamLimits

0x1d3b,	// (0x000296c9) sctrl_sk_top_pane_t1_ParamLimits

0x1d21,	// (0x000296af) aid_touch_sctrl_bottom_ParamLimits

0x1d3b,	// (0x000296c9) sctrl_sk_bottom_pane_t1_ParamLimits

0xd8fc,	// (0x0003528a) aid_area_touch_clock

0xbdc0,	// (0x0003374e) aid_vkb2_area_top_pane_cell_ParamLimits

0xbdc0,	// (0x0003374e) aid_vkb2_area_top_pane_cell

0xbe6f,	// (0x000337fd) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbe6f,	// (0x000337fd) aid_vkb2_area_bottom_pane_cell

0x6620,	// (0x0002dfae) popup_char_count_window

0x6aaa,	// (0x0002e438) popup_char_count_window_g1

0x6ab3,	// (0x0002e441) popup_char_count_window_g2

0x6abc,	// (0x0002e44a) popup_char_count_window_g3

0x0002,

0xfd9e,	// (0x0003772c) popup_char_count_window_g

0x6ac5,	// (0x0002e453) popup_char_count_window_t1

0x1dd4,	// (0x00029762) popup_fep_char_preview_window_ParamLimits

0x1dd4,	// (0x00029762) popup_fep_char_preview_window

0xbde0,	// (0x0003376e) vkb2_top_candi_pane_ParamLimits

0xbde0,	// (0x0003376e) vkb2_top_candi_pane

0xe144,	// (0x00035ad2) cell_vkb2_top_candi_pane_ParamLimits

0xe144,	// (0x00035ad2) cell_vkb2_top_candi_pane

0x141d,	// (0x00028dab) bg_popup_fep_char_preview_window_ParamLimits

0x141d,	// (0x00028dab) bg_popup_fep_char_preview_window

0x2352,	// (0x00029ce0) popup_fep_char_preview_window_t1_ParamLimits

0x2352,	// (0x00029ce0) popup_fep_char_preview_window_t1

0x6b1d,	// (0x0002e4ab) bg_popup_fep_char_preview_window_g1

0x6b25,	// (0x0002e4b3) bg_popup_fep_char_preview_window_g2

0x6b2d,	// (0x0002e4bb) bg_popup_fep_char_preview_window_g3

0x6b35,	// (0x0002e4c3) bg_popup_fep_char_preview_window_g4

0x6b3d,	// (0x0002e4cb) bg_popup_fep_char_preview_window_g5

0x6b45,	// (0x0002e4d3) bg_popup_fep_char_preview_window_g6

0x6b4d,	// (0x0002e4db) bg_popup_fep_char_preview_window_g7

0x6b55,	// (0x0002e4e3) bg_popup_fep_char_preview_window_g8

0x6b5d,	// (0x0002e4eb) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda5,	// (0x00037733) bg_popup_fep_char_preview_window_g

0x4a0d,	// (0x0002c39b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x4a0d,	// (0x0002c39b) cell_vkb2_top_candi_pane_g1

0x4d24,	// (0x0002c6b2) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4d24,	// (0x0002c6b2) cell_vkb2_top_candi_pane_g2

0x4d45,	// (0x0002c6d3) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4d45,	// (0x0002c6d3) cell_vkb2_top_candi_pane_g3

0x2394,	// (0x00029d22) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2394,	// (0x00029d22) cell_vkb2_top_candi_pane_g4

0x6b65,	// (0x0002e4f3) cell_vkb2_top_candi_pane_g5_ParamLimits

0x6b65,	// (0x0002e4f3) cell_vkb2_top_candi_pane_g5

0x5f39,	// (0x0002d8c7) cell_vkb2_top_candi_pane_g6_ParamLimits

0x5f39,	// (0x0002d8c7) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdba,	// (0x00037748) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdba,	// (0x00037748) cell_vkb2_top_candi_pane_g

0x23b5,	// (0x00029d43) cell_vkb2_top_candi_pane_t1

0xb18a,	// (0x00032b18) aid_size_touch_slider_mark_ParamLimits

0xb18a,	// (0x00032b18) aid_size_touch_slider_mark

0xde54,	// (0x000357e2) grid_graphic2_catg_pane_ParamLimits

0xde54,	// (0x000357e2) grid_graphic2_catg_pane

0xdf10,	// (0x0003589e) popup_grid_graphic2_window_t1_ParamLimits

0xdf10,	// (0x0003589e) popup_grid_graphic2_window_t1

0xdf26,	// (0x000358b4) popup_grid_graphic2_window_t2_ParamLimits

0xdf26,	// (0x000358b4) popup_grid_graphic2_window_t2

0x0001,

0xfd73,	// (0x00037701) popup_grid_graphic2_window_t_ParamLimits

0xfd73,	// (0x00037701) popup_grid_graphic2_window_t

0xc496,	// (0x00033e24) bg_button_pane_cp05_ParamLimits

0xe0bc,	// (0x00035a4a) cell_graphic2_control_pane_g1_ParamLimits

0xe1a4,	// (0x00035b32) cell_graphic2_catg_pane_ParamLimits

0xe1a4,	// (0x00035b32) cell_graphic2_catg_pane

0xc2fc,	// (0x00033c8a) bg_button_pane_cp12

0xe1b6,	// (0x00035b44) cell_graphic2_catg_pane_g1

0x607c,	// (0x0002da0a) cell_tb_ext_pane_t1_ParamLimits

0x217d,	// (0x00029b0b) vkb2_top_cell_right_narrow_pane_ParamLimits

0x217d,	// (0x00029b0b) vkb2_top_cell_right_narrow_pane

0x2195,	// (0x00029b23) vkb2_top_cell_right_wide_pane_ParamLimits

0x2195,	// (0x00029b23) vkb2_top_cell_right_wide_pane

0x194a,	// (0x000292d8) bg_vkb2_func_pane_ParamLimits

0x194a,	// (0x000292d8) bg_vkb2_func_pane

0x2206,	// (0x00029b94) vkb2_top_cell_left_pane_g1_ParamLimits

0x194a,	// (0x000292d8) bg_vkb2_fuc_pane_cp03_ParamLimits

0x194a,	// (0x000292d8) bg_vkb2_fuc_pane_cp03

0x226f,	// (0x00029bfd) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x0c7f,	// (0x0002860d) bg_vkb2_func_pane_g1

0x0c87,	// (0x00028615) bg_vkb2_func_pane_g2

0x0c97,	// (0x00028625) bg_vkb2_func_pane_g3

0x0c8f,	// (0x0002861d) bg_vkb2_func_pane_g4

0x0c9f,	// (0x0002862d) bg_vkb2_func_pane_g5

0x0ca7,	// (0x00028635) bg_vkb2_func_pane_g6

0x0caf,	// (0x0002863d) bg_vkb2_func_pane_g7

0x0cb7,	// (0x00028645) bg_vkb2_func_pane_g8

0x0c77,	// (0x00028605) bg_vkb2_func_pane_g9

0x0008,

0xfdc7,	// (0x00037755) bg_vkb2_func_pane_g

0x194a,	// (0x000292d8) bg_vkb2_fuc_pane_cp01_ParamLimits

0x194a,	// (0x000292d8) bg_vkb2_fuc_pane_cp01

0x2206,	// (0x00029b94) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2206,	// (0x00029b94) vkb2_top_cell_right_wide_pane_g1

0x194a,	// (0x000292d8) bg_vkb2_fuc_pane_cp02_ParamLimits

0x194a,	// (0x000292d8) bg_vkb2_fuc_pane_cp02

0x23d4,	// (0x00029d62) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x23d4,	// (0x00029d62) vkb2_top_cell_right_narrow_pane_g1

0xd643,	// (0x00034fd1) aid_touch_area_decrease_ParamLimits

0xd643,	// (0x00034fd1) aid_touch_area_decrease

0xd67d,	// (0x0003500b) aid_touch_area_increase_ParamLimits

0xd67d,	// (0x0003500b) aid_touch_area_increase

0xd6a5,	// (0x00035033) aid_touch_area_mute_ParamLimits

0xd6a5,	// (0x00035033) aid_touch_area_mute

0xd6cd,	// (0x0003505b) aid_touch_area_slider_ParamLimits

0xd6cd,	// (0x0003505b) aid_touch_area_slider

0xd70d,	// (0x0003509b) popup_slider_window_g4_ParamLimits

0xd70d,	// (0x0003509b) popup_slider_window_g4

0xd727,	// (0x000350b5) popup_slider_window_g5_ParamLimits

0xd727,	// (0x000350b5) popup_slider_window_g5

0xd74d,	// (0x000350db) popup_slider_window_g6_ParamLimits

0xd74d,	// (0x000350db) popup_slider_window_g6

0x5e4f,	// (0x0002d7dd) popup_slider_window_t2_ParamLimits

0x5e4f,	// (0x0002d7dd) popup_slider_window_t2

0x0001,

0xfcc1,	// (0x0003764f) popup_slider_window_t_ParamLimits

0xfcc1,	// (0x0003764f) popup_slider_window_t

0xd763,	// (0x000350f1) slider_pane_ParamLimits

0xd763,	// (0x000350f1) slider_pane

0x6ba1,	// (0x0002e52f) slider_pane_g1_ParamLimits

0x6ba1,	// (0x0002e52f) slider_pane_g1

0x6bb5,	// (0x0002e543) slider_pane_g2_ParamLimits

0x6bb5,	// (0x0002e543) slider_pane_g2

0x6bcb,	// (0x0002e559) slider_pane_g3_ParamLimits

0x6bcb,	// (0x0002e559) slider_pane_g3

0x0003,

0xfdda,	// (0x00037768) slider_pane_g_ParamLimits

0xfdda,	// (0x00037768) slider_pane_g

0xa527,	// (0x00031eb5) popup_tb_float_extension_window_ParamLimits

0xa527,	// (0x00031eb5) popup_tb_float_extension_window

0x6bf7,	// (0x0002e585) aid_size_cell_tb_float_ext

0xc2fc,	// (0x00033c8a) bg_popup_sub_window_cp28

0xe1bf,	// (0x00035b4d) grid_tb_float_ext_pane

0xe1c9,	// (0x00035b57) cell_tb_float_ext_pane_ParamLimits

0xe1c9,	// (0x00035b57) cell_tb_float_ext_pane

0xe1e3,	// (0x00035b71) cell_tb_float_ext_pane_g1

0xe1ec,	// (0x00035b7a) grid_highlight_pane_cp12

0xb85b,	// (0x000331e9) cell_last_hwr_side_pane_ParamLimits

0xb85b,	// (0x000331e9) cell_last_hwr_side_pane

0x479d,	// (0x0002c12b) cell_last_hwr_side_pane_g1

0x6c39,	// (0x0002e5c7) cell_last_hwr_side_pane_g2

0x0001,

0xfde3,	// (0x00037771) cell_last_hwr_side_pane_g

0xbf4c,	// (0x000338da) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbf4c,	// (0x000338da) vkb2_area_bottom_space_btn_pane

0x4a0d,	// (0x0002c39b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x66d5,	// (0x0002e063) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x23b5,	// (0x00029d43) cell_vkb2_top_candi_pane_t1_ParamLimits

0x23f4,	// (0x00029d82) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x23f4,	// (0x00029d82) vkb2_area_bottom_space_btn_pane_g1

0x242e,	// (0x00029dbc) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x242e,	// (0x00029dbc) vkb2_area_bottom_space_btn_pane_g2

0x2464,	// (0x00029df2) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2464,	// (0x00029df2) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde8,	// (0x00037776) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde8,	// (0x00037776) vkb2_area_bottom_space_btn_pane_g

0x19ff,	// (0x0002938d) cel_fep_hwr_func_pane_ParamLimits

0x19ff,	// (0x0002938d) cel_fep_hwr_func_pane

0xb830,	// (0x000331be) cell_hwr_side_button_pane_ParamLimits

0xb830,	// (0x000331be) cell_hwr_side_button_pane

0xd8fc,	// (0x0003528a) aid_area_touch_clock_ParamLimits

0xc496,	// (0x00033e24) bg_uniindi_top_pane_ParamLimits

0xd90e,	// (0x0003529c) uniindi_top_pane_g1_ParamLimits

0xd924,	// (0x000352b2) uniindi_top_pane_g2_ParamLimits

0xd930,	// (0x000352be) uniindi_top_pane_g3_ParamLimits

0x60f6,	// (0x0002da84) uniindi_top_pane_g4_ParamLimits

0xfcf9,	// (0x00037687) uniindi_top_pane_g_ParamLimits

0xd941,	// (0x000352cf) uniindi_top_pane_t1_ParamLimits

0xc496,	// (0x00033e24) bg_vkb2_func_pane_cp01_ParamLimits

0xc496,	// (0x00033e24) bg_vkb2_func_pane_cp01

0x6c42,	// (0x0002e5d0) cel_fep_hwr_func_pane_g1_ParamLimits

0x6c42,	// (0x0002e5d0) cel_fep_hwr_func_pane_g1

0xc496,	// (0x00033e24) bg_vkb2_func_pane_cp02_ParamLimits

0xc496,	// (0x00033e24) bg_vkb2_func_pane_cp02

0x6c42,	// (0x0002e5d0) cell_hwr_side_button_pane_g1_ParamLimits

0x6c42,	// (0x0002e5d0) cell_hwr_side_button_pane_g1

0x0acb,	// (0x00028459) status_pane_g4_ParamLimits

0x0acb,	// (0x00028459) status_pane_g4

0x0ae5,	// (0x00028473) status_pane_t1

0x44df,	// (0x0002be6d) form2_midp_gauge_slider_cont_pane

0x44e7,	// (0x0002be75) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb749,	// (0x000330d7) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb75b,	// (0x000330e9) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacc,	// (0x0003745a) form2_midp_gauge_slider_pane_t_ParamLimits

0x451d,	// (0x0002beab) form2_midp_slider_pane_ParamLimits

0x1d9c,	// (0x0002972a) aid_size_cell_func_vkb2_ParamLimits

0x1d9c,	// (0x0002972a) aid_size_cell_func_vkb2

0x6be3,	// (0x0002e571) slider_pane_g4_ParamLimits

0x6be3,	// (0x0002e571) slider_pane_g4

0xbfb5,	// (0x00033943) form2_midp_gauge_slider_pane_t2_cp01

0xbfc3,	// (0x00033951) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbfc3,	// (0x00033951) form2_midp_gauge_slider_pane_t3_cp01

0x24d9,	// (0x00029e67) form2_midp_slider_pane_cp01

0xc2fc,	// (0x00033c8a) navi_smil_pane

0x6c7b,	// (0x0002e609) navi_smil_pane_g1

0x6c83,	// (0x0002e611) navi_smil_pane_t1

0x6c50,	// (0x0002e5de) form2_midp_slider_pane_g1

0x6c59,	// (0x0002e5e7) form2_midp_slider_pane_g2

0x6c61,	// (0x0002e5ef) form2_midp_slider_pane_g3

0x6c50,	// (0x0002e5de) form2_midp_slider_pane_g4

0xe1f5,	// (0x00035b83) form2_midp_slider_pane_g5

0x0004,

0xfdf1,	// (0x0003777f) form2_midp_slider_pane_g

0x249e,	// (0x00029e2c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x249e,	// (0x00029e2c) vkb2_area_bottom_space_btn_pane_g4

0xa75f,	// (0x000320ed) lc0_navi_pane_ParamLimits

0xa75f,	// (0x000320ed) lc0_navi_pane

0xa7c9,	// (0x00032157) lc0_stat_indi_pane_ParamLimits

0xa7c9,	// (0x00032157) lc0_stat_indi_pane

0xa7de,	// (0x0003216c) ls0_title_pane_ParamLimits

0xa7de,	// (0x0003216c) ls0_title_pane

0xc722,	// (0x000340b0) bg_popup_sub_pane_cp14_ParamLimits

0xd8e3,	// (0x00035271) list_uniindi_pane_ParamLimits

0xd8ef,	// (0x0003527d) uniindi_top_pane_ParamLimits

0x6140,	// (0x0002dace) list_single_uniindi_pane_g1_ParamLimits

0x6153,	// (0x0002dae1) list_single_uniindi_pane_t1_ParamLimits

0xbfe0,	// (0x0003396e) lc0_stat_clock_pane_ParamLimits

0xbfe0,	// (0x0003396e) lc0_stat_clock_pane

0xe200,	// (0x00035b8e) lc0_stat_indi_pane_g1_ParamLimits

0xe200,	// (0x00035b8e) lc0_stat_indi_pane_g1

0xe20d,	// (0x00035b9b) lc0_stat_indi_pane_g2_ParamLimits

0xe20d,	// (0x00035b9b) lc0_stat_indi_pane_g2

0x0001,

0xfdfc,	// (0x0003778a) lc0_stat_indi_pane_g_ParamLimits

0xfdfc,	// (0x0003778a) lc0_stat_indi_pane_g

0xbff0,	// (0x0003397e) lc0_uni_indicator_pane_ParamLimits

0xbff0,	// (0x0003397e) lc0_uni_indicator_pane

0xe21a,	// (0x00035ba8) ls0_title_pane_g1_ParamLimits

0xe21a,	// (0x00035ba8) ls0_title_pane_g1

0xe22e,	// (0x00035bbc) ls0_title_pane_t1_ParamLimits

0xe22e,	// (0x00035bbc) ls0_title_pane_t1

0xc000,	// (0x0003398e) lc0_uni_indicator_pane_g1_ParamLimits

0xc000,	// (0x0003398e) lc0_uni_indicator_pane_g1

0x6cf5,	// (0x0002e683) lc0_stat_clock_pane_t1

0xc2fc,	// (0x00033c8a) main_ai5_pane

0x6d0b,	// (0x0002e699) ai5_sk_pane_ParamLimits

0x6d0b,	// (0x0002e699) ai5_sk_pane

0xe266,	// (0x00035bf4) cell_ai5_widget_pane_ParamLimits

0xe266,	// (0x00035bf4) cell_ai5_widget_pane

0x6dd8,	// (0x0002e766) aid_size_cell_widget_grid

0x6de6,	// (0x0002e774) bg_ai5_widget_pane_ParamLimits

0x6de6,	// (0x0002e774) bg_ai5_widget_pane

0x6e64,	// (0x0002e7f2) cell_ai5_widget_pane_g2

0x6e78,	// (0x0002e806) cell_ai5_widget_pane_g3

0x6e92,	// (0x0002e820) cell_ai5_widget_pane_g4

0x6ea2,	// (0x0002e830) cell_ai5_widget_pane_g5

0x6eb2,	// (0x0002e840) cell_ai5_widget_pane_g6

0x6ebe,	// (0x0002e84c) cell_ai5_widget_pane_g7

0x6f2a,	// (0x0002e8b8) cell_ai5_widget_pane_t1_ParamLimits

0x6f2a,	// (0x0002e8b8) cell_ai5_widget_pane_t1

0x6f47,	// (0x0002e8d5) cell_ai5_widget_pane_t2_ParamLimits

0x6f47,	// (0x0002e8d5) cell_ai5_widget_pane_t2

0x6f5f,	// (0x0002e8ed) cell_ai5_widget_pane_t3_ParamLimits

0x6f5f,	// (0x0002e8ed) cell_ai5_widget_pane_t3

0x6f77,	// (0x0002e905) cell_ai5_widget_pane_t4_ParamLimits

0x6f77,	// (0x0002e905) cell_ai5_widget_pane_t4

0xe2d2,	// (0x00035c60) cell_ai5_widget_pane_t5_ParamLimits

0xe2d2,	// (0x00035c60) cell_ai5_widget_pane_t5

0x6fbc,	// (0x0002e94a) cell_ai5_widget_pane_t6_ParamLimits

0x6fbc,	// (0x0002e94a) cell_ai5_widget_pane_t6

0x6fce,	// (0x0002e95c) cell_ai5_widget_pane_t7_ParamLimits

0x6fce,	// (0x0002e95c) cell_ai5_widget_pane_t7

0x6fed,	// (0x0002e97b) cell_ai5_widget_pane_t8_ParamLimits

0x6fed,	// (0x0002e97b) cell_ai5_widget_pane_t8

0x000b,

0xfe1c,	// (0x000377aa) cell_ai5_widget_pane_t_ParamLimits

0xfe1c,	// (0x000377aa) cell_ai5_widget_pane_t

0x7071,	// (0x0002e9ff) grid_ai5_widget_pane

0xc722,	// (0x000340b0) highlight_cell_ai5_widget_pane_ParamLimits

0xc722,	// (0x000340b0) highlight_cell_ai5_widget_pane

0xe2f2,	// (0x00035c80) ai5_sk_left_pane

0xe2fc,	// (0x00035c8a) ai5_sk_middle_pane

0xe306,	// (0x00035c94) ai5_sk_right_pane

0x70a3,	// (0x0002ea31) bg_ai5_widget_pane_g1_ParamLimits

0x70a3,	// (0x0002ea31) bg_ai5_widget_pane_g1

0x70af,	// (0x0002ea3d) bg_ai5_widget_pane_g2_ParamLimits

0x70af,	// (0x0002ea3d) bg_ai5_widget_pane_g2

0x70bb,	// (0x0002ea49) bg_ai5_widget_pane_g3_ParamLimits

0x70bb,	// (0x0002ea49) bg_ai5_widget_pane_g3

0x70c7,	// (0x0002ea55) bg_ai5_widget_pane_g4_ParamLimits

0x70c7,	// (0x0002ea55) bg_ai5_widget_pane_g4

0x70d3,	// (0x0002ea61) bg_ai5_widget_pane_g5_ParamLimits

0x70d3,	// (0x0002ea61) bg_ai5_widget_pane_g5

0x70df,	// (0x0002ea6d) bg_ai5_widget_pane_g6_ParamLimits

0x70df,	// (0x0002ea6d) bg_ai5_widget_pane_g6

0x70eb,	// (0x0002ea79) bg_ai5_widget_pane_g7_ParamLimits

0x70eb,	// (0x0002ea79) bg_ai5_widget_pane_g7

0x70f7,	// (0x0002ea85) bg_ai5_widget_pane_g8_ParamLimits

0x70f7,	// (0x0002ea85) bg_ai5_widget_pane_g8

0x7103,	// (0x0002ea91) bg_ai5_widget_pane_g9_ParamLimits

0x7103,	// (0x0002ea91) bg_ai5_widget_pane_g9

0x0008,

0xfe35,	// (0x000377c3) bg_ai5_widget_pane_g_ParamLimits

0xfe35,	// (0x000377c3) bg_ai5_widget_pane_g

0x7135,	// (0x0002eac3) cell_shortcut_ai5_widget_pane_ParamLimits

0x7135,	// (0x0002eac3) cell_shortcut_ai5_widget_pane

0xcfe2,	// (0x00034970) bg_cell_shortcut_ai5_widget_pane

0x7146,	// (0x0002ead4) cell_grid_ai5_widget_pane_g1

0xcfe2,	// (0x00034970) highlight_cell_shortcut_ai5_widget_pane

0x0c87,	// (0x00028615) ai5_sk_left_pane_g1

0x714f,	// (0x0002eadd) ai5_sk_left_pane_g2

0x7157,	// (0x0002eae5) ai5_sk_left_pane_g3

0x715f,	// (0x0002eaed) ai5_sk_left_pane_g4

0x0003,

0xfe48,	// (0x000377d6) ai5_sk_left_pane_g

0x7167,	// (0x0002eaf5) ai5_sk_left_pane_t1

0x0c7f,	// (0x0002860d) ai5_sk_right_pane_g1

0x7175,	// (0x0002eb03) ai5_sk_right_pane_g2

0x717d,	// (0x0002eb0b) ai5_sk_right_pane_g3

0x7185,	// (0x0002eb13) ai5_sk_right_pane_g4

0x0003,

0xfe51,	// (0x000377df) ai5_sk_right_pane_g

0x718d,	// (0x0002eb1b) ai5_sk_right_pane_t1

0x0c7f,	// (0x0002860d) ai5_sk_middle_pane_g1

0x0c87,	// (0x00028615) ai5_sk_middle_pane_g2

0x0c9f,	// (0x0002862d) ai5_sk_middle_pane_g3

0x717d,	// (0x0002eb0b) ai5_sk_middle_pane_g4

0x7157,	// (0x0002eae5) ai5_sk_middle_pane_g5

0x719b,	// (0x0002eb29) ai5_sk_middle_pane_g6

0xe310,	// (0x00035c9e) ai5_sk_middle_pane_g7

0x0006,

0xfe5a,	// (0x000377e8) ai5_sk_middle_pane_g

0xa64b,	// (0x00031fd9) aid_touch_area_size_lc0_ParamLimits

0xa64b,	// (0x00031fd9) aid_touch_area_size_lc0

0x1b8a,	// (0x00029518) cell_hwr_candidate_pane_t1_ParamLimits

0x079c,	// (0x0002812a) aid_touch_navi_pane

0xa8d7,	// (0x00032265) status_dt_navi_pane_ParamLimits

0xa8d7,	// (0x00032265) status_dt_navi_pane

0xa8ef,	// (0x0003227d) status_dt_sta_pane_ParamLimits

0xa8ef,	// (0x0003227d) status_dt_sta_pane

0xe318,	// (0x00035ca6) dt_sta_controll_pane

0xe325,	// (0x00035cb3) dt_sta_indi_pane

0xe332,	// (0x00035cc0) dt_sta_title_pane

0xc496,	// (0x00033e24) bg_dt_sta_indi_pane_ParamLimits

0xc496,	// (0x00033e24) bg_dt_sta_indi_pane

0xe344,	// (0x00035cd2) dt_sta_battery_pane

0xe34c,	// (0x00035cda) dt_sta_indi_pane_g1

0x71ed,	// (0x0002eb7b) dt_sta_indi_pane_g2

0x71f6,	// (0x0002eb84) dt_sta_indi_pane_g3

0x0002,

0xfe69,	// (0x000377f7) dt_sta_indi_pane_g

0x71ff,	// (0x0002eb8d) dt_sta_signal_pane

0xc722,	// (0x000340b0) bg_dt_sta_title_pane_ParamLimits

0xc722,	// (0x000340b0) bg_dt_sta_title_pane

0x2fdb,	// (0x0002a969) dt_sta_title_pane_g1

0xe355,	// (0x00035ce3) dt_sta_title_pane_t1_ParamLimits

0xe355,	// (0x00035ce3) dt_sta_title_pane_t1

0xc2fc,	// (0x00033c8a) bg_dt_sta_control_pane

0xe36a,	// (0x00035cf8) dt_sta_controll_pane_g1

0xe373,	// (0x00035d01) bg_dt_sta_title_pane_g1

0xe37c,	// (0x00035d0a) bg_dt_sta_title_pane_g2

0xe385,	// (0x00035d13) bg_dt_sta_title_pane_g3

0x0002,

0xfe70,	// (0x000377fe) bg_dt_sta_title_pane_g

0x479d,	// (0x0002c12b) bg_dt_sta_indi_pane_g1

0x7241,	// (0x0002ebcf) dt_sta_signal_pane_g1

0x7249,	// (0x0002ebd7) dt_sta_signal_pane_g2

0x0001,

0xfe77,	// (0x00037805) dt_sta_signal_pane_g

0x7251,	// (0x0002ebdf) dt_sta_battery_pane_g1

0x725a,	// (0x0002ebe8) dt_sta_battery_pane_t1

0x479d,	// (0x0002c12b) bg_dt_sta_control_pane_g1

0xcbf7,	// (0x00034585) fep_china_uni_eep_pane

0xcbff,	// (0x0003458d) fep_china_uni_entry_pane_ParamLimits

0xcc0f,	// (0x0003459d) popup_fep_china_uni_window_g1_ParamLimits

0xcc1f,	// (0x000345ad) popup_fep_china_uni_window_g2_ParamLimits

0xcc1f,	// (0x000345ad) popup_fep_china_uni_window_g2

0x0001,

0xf6e2,	// (0x00037070) popup_fep_china_uni_window_g_ParamLimits

0xf6e2,	// (0x00037070) popup_fep_china_uni_window_g

0x7269,	// (0x0002ebf7) fep_china_uni_eep_pane_g1

0x7271,	// (0x0002ebff) fep_china_uni_eep_pane_t1

0x6c72,	// (0x0002e600) aid_touch_area_size_smil_player

0x08f2,	// (0x00028280) lc0_clock_pane

0x0ad9,	// (0x00028467) status_pane_g5_ParamLimits

0x0ad9,	// (0x00028467) status_pane_g5

0xa083,	// (0x00031a11) popup_keymap_window

0x0a97,	// (0x00028425) status_icon_pane

0x6e78,	// (0x0002e806) cell_ai5_widget_pane_g3_ParamLimits

0x6e92,	// (0x0002e820) cell_ai5_widget_pane_g4_ParamLimits

0x6ea2,	// (0x0002e830) cell_ai5_widget_pane_g5_ParamLimits

0x6eca,	// (0x0002e858) cell_ai5_widget_pane_g8_ParamLimits

0x6eca,	// (0x0002e858) cell_ai5_widget_pane_g8

0x6ede,	// (0x0002e86c) cell_ai5_widget_pane_g9_ParamLimits

0x6ede,	// (0x0002e86c) cell_ai5_widget_pane_g9

0x6ef2,	// (0x0002e880) cell_ai5_widget_pane_g10_ParamLimits

0x6ef2,	// (0x0002e880) cell_ai5_widget_pane_g10

0x7280,	// (0x0002ec0e) status_icon_pane_g1

0xc2fc,	// (0x00033c8a) bg_popup_sub_pane_cp13

0x7288,	// (0x0002ec16) popup_keymap_window_t1

0x9d3f,	// (0x000316cd) control_pane_g6_ParamLimits

0x9d3f,	// (0x000316cd) control_pane_g6

0x9d4c,	// (0x000316da) control_pane_g7_ParamLimits

0x9d4c,	// (0x000316da) control_pane_g7

0x9d59,	// (0x000316e7) control_pane_g8_ParamLimits

0x9d59,	// (0x000316e7) control_pane_g8

0xe318,	// (0x00035ca6) dt_sta_controll_pane_ParamLimits

0xe325,	// (0x00035cb3) dt_sta_indi_pane_ParamLimits

0xe332,	// (0x00035cc0) dt_sta_title_pane_ParamLimits

0xc66d,	// (0x00033ffb) aid_size_touch_scroll_bar_cale

0x8fc3,	// (0x00030951) popup_discreet_window_ParamLimits

0x8fc3,	// (0x00030951) popup_discreet_window

0x9015,	// (0x000309a3) popup_sk_window

0x141d,	// (0x00028dab) bg_popup_sub_pane_cp28_ParamLimits

0x141d,	// (0x00028dab) bg_popup_sub_pane_cp28

0x7296,	// (0x0002ec24) popup_discreet_window_g1_ParamLimits

0x7296,	// (0x0002ec24) popup_discreet_window_g1

0x72b6,	// (0x0002ec44) popup_discreet_window_t1_ParamLimits

0x72b6,	// (0x0002ec44) popup_discreet_window_t1

0x72d4,	// (0x0002ec62) popup_discreet_window_t2_ParamLimits

0x72d4,	// (0x0002ec62) popup_discreet_window_t2

0x0002,

0xfe7c,	// (0x0003780a) popup_discreet_window_t_ParamLimits

0xfe7c,	// (0x0003780a) popup_discreet_window_t

0x2510,	// (0x00029e9e) popup_sk_window_g1

0x251a,	// (0x00029ea8) popup_sk_window_g2

0x0001,

0xfe83,	// (0x00037811) popup_sk_window_g

0xc02b,	// (0x000339b9) popup_sk_window_t1

0xc039,	// (0x000339c7) popup_sk_window_t1_copy1

0x6e64,	// (0x0002e7f2) cell_ai5_widget_pane_g2_ParamLimits

0x6fff,	// (0x0002e98d) cell_ai5_widget_pane_t9_ParamLimits

0x6fff,	// (0x0002e98d) cell_ai5_widget_pane_t9

0xc2fc,	// (0x00033c8a) main_fep_fshwr2_pane

0xc047,	// (0x000339d5) aid_fshwr2_btn_pane

0xc05b,	// (0x000339e9) aid_fshwr2_syb_pane

0xc06f,	// (0x000339fd) aid_fshwr2_txt_pane

0xc07f,	// (0x00033a0d) fshwr2_func_candi_pane

0xc09f,	// (0x00033a2d) fshwr2_hwr_syb_pane

0xc0c1,	// (0x00033a4f) fshwr2_icf_pane

0xc2fc,	// (0x00033c8a) fshwr2_icf_bg_pane

0x25e2,	// (0x00029f70) fshwr2_icf_pane_t1_ParamLimits

0x25e2,	// (0x00029f70) fshwr2_icf_pane_t1

0xcb74,	// (0x00034502) fshwr2_func_candi_pane_g1

0xe38e,	// (0x00035d1c) fshwr2_func_candi_row_pane_ParamLimits

0xe38e,	// (0x00035d1c) fshwr2_func_candi_row_pane

0xc0f1,	// (0x00033a7f) cell_fshwr2_syb_pane_ParamLimits

0xc0f1,	// (0x00033a7f) cell_fshwr2_syb_pane

0x6c42,	// (0x0002e5d0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6c42,	// (0x0002e5d0) fshwr2_hwr_syb_pane_g1

0xc2fc,	// (0x00033c8a) bg_popup_call_pane_cp01

0xc117,	// (0x00033aa5) fshwr2_func_candi_cell_pane_ParamLimits

0xc117,	// (0x00033aa5) fshwr2_func_candi_cell_pane

0x1206,	// (0x00028b94) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x1206,	// (0x00028b94) fshwr2_func_candi_cell_bg_pane

0xc162,	// (0x00033af0) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc162,	// (0x00033af0) fshwr2_func_candi_cell_pane_g1

0xc199,	// (0x00033b27) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc199,	// (0x00033b27) fshwr2_func_candi_cell_pane_t1

0xc2fc,	// (0x00033c8a) bg_button_pane_cp08

0xc864,	// (0x000341f2) cell_fshwr2_syb_bg_pane

0xc1b4,	// (0x00033b42) cell_fshwr2_syb_bg_pane_g1

0xc1c7,	// (0x00033b55) cell_fshwr2_syb_bg_pane_t1

0xc722,	// (0x000340b0) main_tmo_pane

0xb060,	// (0x000329ee) uni_indicator_pane_g1_ParamLimits

0xb076,	// (0x00032a04) uni_indicator_pane_g2_ParamLimits

0xb08c,	// (0x00032a1a) uni_indicator_pane_g3_ParamLimits

0x3348,	// (0x0002acd6) uni_indicator_pane_g4_ParamLimits

0x3348,	// (0x0002acd6) uni_indicator_pane_g4

0x335c,	// (0x0002acea) uni_indicator_pane_g5_ParamLimits

0x335c,	// (0x0002acea) uni_indicator_pane_g5

0x335c,	// (0x0002acea) uni_indicator_pane_g6_ParamLimits

0x335c,	// (0x0002acea) uni_indicator_pane_g6

0xf8e1,	// (0x0003726f) uni_indicator_pane_g_ParamLimits

0xd625,	// (0x00034fb3) popup_tmo_note_window_ParamLimits

0xd625,	// (0x00034fb3) popup_tmo_note_window

0xc722,	// (0x000340b0) fshwr2_bg_pane

0xc18a,	// (0x00033b18) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc18a,	// (0x00033b18) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe88,	// (0x00037816) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe88,	// (0x00037816) fshwr2_func_candi_cell_pane_g

0x479d,	// (0x0002c12b) bg_popup_window_pane_cp01

0x26c6,	// (0x0002a054) bg_popup_window_pane_g1_cp01

0x734d,	// (0x0002ecdb) bg_popup_window_pane_cp22_ParamLimits

0x734d,	// (0x0002ecdb) bg_popup_window_pane_cp22

0xe3b1,	// (0x00035d3f) listscroll_tmo_link_pane_ParamLimits

0xe3b1,	// (0x00035d3f) listscroll_tmo_link_pane

0x739b,	// (0x0002ed29) popup_tmo_note_window_g1_ParamLimits

0x739b,	// (0x0002ed29) popup_tmo_note_window_g1

0xe3f1,	// (0x00035d7f) tmo_note_info_pane_ParamLimits

0xe3f1,	// (0x00035d7f) tmo_note_info_pane

0xe40b,	// (0x00035d99) list_tmo_note_info_pane_g1_ParamLimits

0xe40b,	// (0x00035d99) list_tmo_note_info_pane_g1

0x73d9,	// (0x0002ed67) list_tmo_note_info_pane_g2_ParamLimits

0x73d9,	// (0x0002ed67) list_tmo_note_info_pane_g2

0x0001,

0xfe8d,	// (0x0003781b) list_tmo_note_info_pane_g_ParamLimits

0xfe8d,	// (0x0003781b) list_tmo_note_info_pane_g

0x73f5,	// (0x0002ed83) list_tmo_note_info_text_pane_ParamLimits

0x73f5,	// (0x0002ed83) list_tmo_note_info_text_pane

0x7476,	// (0x0002ee04) list_tmo_link_pane

0x7483,	// (0x0002ee11) scroll_pane_cp20

0x7490,	// (0x0002ee1e) list_single_tmo_link_pane_ParamLimits

0x7490,	// (0x0002ee1e) list_single_tmo_link_pane

0x74a0,	// (0x0002ee2e) list_single_tmo_link_pane_t1

0x74ae,	// (0x0002ee3c) list_tmo_note_info_text_pane_t1_ParamLimits

0x74ae,	// (0x0002ee3c) list_tmo_note_info_text_pane_t1

0x9736,	// (0x000310c4) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9736,	// (0x000310c4) aid_size_touch_scroll_bar_cp01

0x89b1,	// (0x0003033f) aid_size_touch_slider_marker

0x9005,	// (0x00030993) popup_settings_window_ParamLimits

0x9005,	// (0x00030993) popup_settings_window

0xea4d,	// (0x000363db) popup_candi_list_indi_window

0x079c,	// (0x0002812a) aid_touch_navi_pane_ParamLimits

0x1cf5,	// (0x00029683) rs_clock_indi_pane

0x1cfe,	// (0x0002968c) sctrl_sk_bottom_pane_ParamLimits

0x1d0f,	// (0x0002969d) sctrl_sk_top_pane_ParamLimits

0xbc80,	// (0x0003360e) popup_fep_tooltip_window

0x6dd8,	// (0x0002e766) aid_size_cell_widget_grid_ParamLimits

0x6e4d,	// (0x0002e7db) cell_ai5_widget_pane_g1_ParamLimits

0x6e4d,	// (0x0002e7db) cell_ai5_widget_pane_g1

0x6eb2,	// (0x0002e840) cell_ai5_widget_pane_g6_ParamLimits

0x6ebe,	// (0x0002e84c) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe01,	// (0x0003778f) cell_ai5_widget_pane_g_ParamLimits

0xfe01,	// (0x0003778f) cell_ai5_widget_pane_g

0x702e,	// (0x0002e9bc) cell_ai5_widget_pane_t10_ParamLimits

0x702e,	// (0x0002e9bc) cell_ai5_widget_pane_t10

0x7071,	// (0x0002e9ff) grid_ai5_widget_pane_ParamLimits

0x710f,	// (0x0002ea9d) cell_contacts_ai5_widget_pane_ParamLimits

0x710f,	// (0x0002ea9d) cell_contacts_ai5_widget_pane

0x72e9,	// (0x0002ec77) popup_discreet_window_t3_ParamLimits

0x72e9,	// (0x0002ec77) popup_discreet_window_t3

0xc0dd,	// (0x00033a6b) popup_fshwr2_char_preview_window_ParamLimits

0xc0dd,	// (0x00033a6b) popup_fshwr2_char_preview_window

0xe422,	// (0x00035db0) tmo_note_info_pane_t1

0xe437,	// (0x00035dc5) tmo_note_info_pane_t2

0xe44e,	// (0x00035ddc) tmo_note_info_pane_t3

0x7452,	// (0x0002ede0) tmo_note_info_pane_t4

0x7464,	// (0x0002edf2) tmo_note_info_pane_t5

0x0004,

0xfe92,	// (0x00037820) tmo_note_info_pane_t

0x7476,	// (0x0002ee04) list_tmo_link_pane_ParamLimits

0x7483,	// (0x0002ee11) scroll_pane_cp20_ParamLimits

0xc2fc,	// (0x00033c8a) bg_popup_fep_char_preview_window_cp01

0xe463,	// (0x00035df1) popup_fshwr2_char_preview_window_t1

0x74d5,	// (0x0002ee63) popup_candi_list_indi_window_g1

0x74de,	// (0x0002ee6c) bg_cell_contacts_ai5_widget_pane

0x74ea,	// (0x0002ee78) cell_contacts_ai5_widget_pane_g1

0x4e84,	// (0x0002c812) cell_contacts_ai5_widget_pane_g2

0x74ff,	// (0x0002ee8d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9d,	// (0x0003782b) cell_contacts_ai5_widget_pane_g

0x750b,	// (0x0002ee99) cell_contacts_ai5_widget_pane_t1

0xc722,	// (0x000340b0) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7582,	// (0x0002ef10) settings_container_pane

0xcfe2,	// (0x00034970) listscroll_set_pane_copy1

0x3e80,	// (0x0002b80e) scroll_pane_cp121_copy1

0x11c2,	// (0x00028b50) set_content_pane_copy1

0xe471,	// (0x00035dff) aid_height_set_list_copy1_ParamLimits

0xe471,	// (0x00035dff) aid_height_set_list_copy1

0x3544,	// (0x0002aed2) aid_size_parent_copy1_ParamLimits

0x3544,	// (0x0002aed2) aid_size_parent_copy1

0xe47d,	// (0x00035e0b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe47d,	// (0x00035e0b) button_value_adjust_pane_cp6_copy1

0xc864,	// (0x000341f2) list_highlight_pane_cp2_copy1_ParamLimits

0xc864,	// (0x000341f2) list_highlight_pane_cp2_copy1

0xe491,	// (0x00035e1f) list_set_pane_copy1_ParamLimits

0xe491,	// (0x00035e1f) list_set_pane_copy1

0x751d,	// (0x0002eeab) main_pane_set_t1_copy1_ParamLimits

0x751d,	// (0x0002eeab) main_pane_set_t1_copy1

0x7557,	// (0x0002eee5) main_pane_set_t2_copy1_ParamLimits

0x7557,	// (0x0002eee5) main_pane_set_t2_copy1

0xe53e,	// (0x00035ecc) main_pane_set_t3_copy1

0xe54c,	// (0x00035eda) main_pane_set_t4_copy1

0x7576,	// (0x0002ef04) set_content_pane_g1_copy1_ParamLimits

0x7576,	// (0x0002ef04) set_content_pane_g1_copy1

0xe55a,	// (0x00035ee8) setting_code_pane_copy1

0x767f,	// (0x0002f00d) setting_slider_graphic_pane_copy1

0x767f,	// (0x0002f00d) setting_slider_pane_copy1

0x7687,	// (0x0002f015) setting_text_pane_copy1

0x7687,	// (0x0002f015) setting_volume_pane_copy1

0xe55a,	// (0x00035ee8) settings_code_pane_cp2_copy1

0xe562,	// (0x00035ef0) settings_code_pane_cp_copy1_ParamLimits

0xe562,	// (0x00035ef0) settings_code_pane_cp_copy1

0xc1dd,	// (0x00033b6b) volume_set_pane_copy1

0xe576,	// (0x00035f04) volume_set_pane_g10_copy1

0xe57e,	// (0x00035f0c) volume_set_pane_g1_copy1

0xe586,	// (0x00035f14) volume_set_pane_g2_copy1

0xe58e,	// (0x00035f1c) volume_set_pane_g3_copy1

0xe596,	// (0x00035f24) volume_set_pane_g4_copy1

0xe59e,	// (0x00035f2c) volume_set_pane_g5_copy1

0xe5a6,	// (0x00035f34) volume_set_pane_g6_copy1

0xe5ae,	// (0x00035f3c) volume_set_pane_g7_copy1

0xe5b6,	// (0x00035f44) volume_set_pane_g8_copy1

0xe5be,	// (0x00035f4c) volume_set_pane_g9_copy1

0xc36c,	// (0x00033cfa) bg_set_opt_pane_cp_copy1_ParamLimits

0xc36c,	// (0x00033cfa) bg_set_opt_pane_cp_copy1

0xc1e5,	// (0x00033b73) setting_slider_pane_t1_copy1_ParamLimits

0xc1e5,	// (0x00033b73) setting_slider_pane_t1_copy1

0xc204,	// (0x00033b92) setting_slider_pane_t2_copy1_ParamLimits

0xc204,	// (0x00033b92) setting_slider_pane_t2_copy1

0xc21e,	// (0x00033bac) setting_slider_pane_t3_copy1_ParamLimits

0xc21e,	// (0x00033bac) setting_slider_pane_t3_copy1

0xc236,	// (0x00033bc4) slider_set_pane_copy1_ParamLimits

0xc236,	// (0x00033bc4) slider_set_pane_copy1

0xc77a,	// (0x00034108) set_opt_bg_pane_g1_copy2

0xc782,	// (0x00034110) set_opt_bg_pane_g2_copy2

0x76f3,	// (0x0002f081) set_opt_bg_pane_g3_copy2

0xc792,	// (0x00034120) set_opt_bg_pane_g4_copy2

0xc79a,	// (0x00034128) set_opt_bg_pane_g5_copy2

0xc7a2,	// (0x00034130) set_opt_bg_pane_g6_copy2

0xe5c6,	// (0x00035f54) set_opt_bg_pane_g7_copy2

0x7705,	// (0x0002f093) set_opt_bg_pane_g8_copy2

0x770f,	// (0x0002f09d) set_opt_bg_pane_g9_copy2

0xc24c,	// (0x00033bda) aid_size_touch_slider_mark_copy1_ParamLimits

0xc24c,	// (0x00033bda) aid_size_touch_slider_mark_copy1

0xe5ce,	// (0x00035f5c) slider_set_pane_g1_copy1

0x2752,	// (0x0002a0e0) slider_set_pane_g2_copy1

0xb1ab,	// (0x00032b39) slider_set_pane_g3_copy1_ParamLimits

0xb1ab,	// (0x00032b39) slider_set_pane_g3_copy1

0xb1bf,	// (0x00032b4d) slider_set_pane_g4_copy1_ParamLimits

0xb1bf,	// (0x00032b4d) slider_set_pane_g4_copy1

0xb1d7,	// (0x00032b65) slider_set_pane_g5_copy1_ParamLimits

0xb1d7,	// (0x00032b65) slider_set_pane_g5_copy1

0xb1ab,	// (0x00032b39) slider_set_pane_g6_copy1_ParamLimits

0xb1ab,	// (0x00032b39) slider_set_pane_g6_copy1

0xc260,	// (0x00033bee) slider_set_pane_g7_copy1_ParamLimits

0xc260,	// (0x00033bee) slider_set_pane_g7_copy1

0xc310,	// (0x00033c9e) bg_set_opt_pane_cp2_copy1

0xe5d7,	// (0x00035f65) setting_slider_graphic_pane_g1_copy1

0xe5e0,	// (0x00035f6e) setting_slider_graphic_pane_t1_copy1

0xe5f0,	// (0x00035f7e) setting_slider_graphic_pane_t2_copy1

0xe600,	// (0x00035f8e) slider_set_pane_cp_copy1

0x775b,	// (0x0002f0e9) input_focus_pane_cp1_copy1

0x7764,	// (0x0002f0f2) list_set_text_pane_copy1

0x776c,	// (0x0002f0fa) setting_text_pane_g1_copy1

0xf0e4,	// (0x00036a72) set_text_pane_t1_copy1

0x775b,	// (0x0002f0e9) input_focus_pane_cp2_copy1

0x776c,	// (0x0002f0fa) setting_code_pane_g1_copy1

0x7775,	// (0x0002f103) setting_code_pane_t1_copy1

0x7783,	// (0x0002f111) list_set_graphic_pane_copy1

0xc310,	// (0x00033c9e) bg_set_opt_pane_cp4_copy1

0xcd4f,	// (0x000346dd) list_set_graphic_pane_g1_copy1_ParamLimits

0xcd4f,	// (0x000346dd) list_set_graphic_pane_g1_copy1

0x7797,	// (0x0002f125) list_set_graphic_pane_g2_copy1

0xcd67,	// (0x000346f5) list_set_graphic_pane_t1_copy1_ParamLimits

0xcd67,	// (0x000346f5) list_set_graphic_pane_t1_copy1

0x479d,	// (0x0002c12b) rs_clock_indi_pane_g1

0x779f,	// (0x0002f12d) rs_clock_indi_pane_t1

0x77ad,	// (0x0002f13b) rs_indi_pane

0x77b5,	// (0x0002f143) rs_indi_pane_g1

0x77be,	// (0x0002f14c) rs_indi_pane_g2

0x74d5,	// (0x0002ee63) rs_indi_pane_g3

0x0002,

0xfea4,	// (0x00037832) rs_indi_pane_g

0xcfe2,	// (0x00034970) bg_popup_preview_window_pane_cp03

0x77c7,	// (0x0002f155) popup_fep_tooltip_window_t1

0xd2cb,	// (0x00034c59) popup_note2_window_g2_ParamLimits

0xd2cb,	// (0x00034c59) popup_note2_window_g2

0x0001,

0xfc38,	// (0x000375c6) popup_note2_window_g_ParamLimits

0xfc38,	// (0x000375c6) popup_note2_window_g

0x5913,	// (0x0002d2a1) bg_popup_sub_pane_cp11_ParamLimits

0x5920,	// (0x0002d2ae) cell_ai3_links_pane_g1_ParamLimits

0x5937,	// (0x0002d2c5) cell_ai3_links_pane_t1

0xf0e4,	// (0x00036a72) set_text_pane_t1_copy1_ParamLimits

0xcf14,	// (0x000348a2) cell_graphic_popup_pane_cp2_ParamLimits

0xcf14,	// (0x000348a2) cell_graphic_popup_pane_cp2

0xe610,	// (0x00035f9e) cell_graphic_popup_pane_g1_cp2

0xc5f0,	// (0x00033f7e) cell_graphic_popup_pane_g2_cp2

0x77dd,	// (0x0002f16b) cell_graphic_popup_pane_g3_cp2

0xe618,	// (0x00035fa6) cell_graphic_popup_pane_t2_cp2

0xc601,	// (0x00033f8f) grid_highlight_pane_cp3_cp2

0xc9f1,	// (0x0003437f) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc722,	// (0x000340b0) main_tmo_pane_ParamLimits

0xd619,	// (0x00034fa7) popup_tmo_big_image_note_window

0x6e3c,	// (0x0002e7ca) cell_ai5_widget_list_pane

0x6e44,	// (0x0002e7d2) cell_ai5_widget_lrg_icon_pane

0xe422,	// (0x00035db0) tmo_note_info_pane_t1_ParamLimits

0xe437,	// (0x00035dc5) tmo_note_info_pane_t2_ParamLimits

0xe44e,	// (0x00035ddc) tmo_note_info_pane_t3_ParamLimits

0x7452,	// (0x0002ede0) tmo_note_info_pane_t4_ParamLimits

0x7464,	// (0x0002edf2) tmo_note_info_pane_t5_ParamLimits

0xfe92,	// (0x00037820) tmo_note_info_pane_t_ParamLimits

0x7582,	// (0x0002ef10) settings_container_pane_ParamLimits

0xe608,	// (0x00035f96) indicator_popup_pane_cp5

0xe608,	// (0x00035f96) indicator_popup_pane_cp6

0x7783,	// (0x0002f111) list_set_graphic_pane_copy1_ParamLimits

0xc2fc,	// (0x00033c8a) bg_popup_window_pane_cp23

0x77f3,	// (0x0002f181) popup_tmo_big_image_note_window_g1

0x77fc,	// (0x0002f18a) popup_tmo_big_image_note_window_t1

0x780c,	// (0x0002f19a) popup_tmo_big_image_note_window_t2

0x781c,	// (0x0002f1aa) popup_tmo_big_image_note_window_t3

0x0002,

0xfeab,	// (0x00037839) popup_tmo_big_image_note_window_t

0x479d,	// (0x0002c12b) cell_ai5_widget_lrg_icon_pane_g1

0x782c,	// (0x0002f1ba) cell_ai5_widget_lrg_icon_pane_t1

0x783a,	// (0x0002f1c8) cell_ai5_widget_list_row_pane_ParamLimits

0x783a,	// (0x0002f1c8) cell_ai5_widget_list_row_pane

0x7851,	// (0x0002f1df) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7851,	// (0x0002f1df) cell_ai5_widget_list_row_pane_g1

0x785e,	// (0x0002f1ec) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x785e,	// (0x0002f1ec) cell_ai5_widget_list_row_pane_t1

0x7889,	// (0x0002f217) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7889,	// (0x0002f217) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb2,	// (0x00037840) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb2,	// (0x00037840) cell_ai5_widget_list_row_pane_t

0xc2fc,	// (0x00033c8a) main_fep_vtchi_ss_pane

0x78d9,	// (0x0002f267) popup_fep_char_pre_window

0x78e1,	// (0x0002f26f) popup_fep_ituss_window

0xe650,	// (0x00035fde) popup_fep_vkbss_window

0xc864,	// (0x000341f2) grid_vkbss_keypad_pane_ParamLimits

0xc864,	// (0x000341f2) grid_vkbss_keypad_pane

0x7959,	// (0x0002f2e7) ituss_keypad_pane

0x279b,	// (0x0002a129) aid_vkbss_key_offset_ParamLimits

0x279b,	// (0x0002a129) aid_vkbss_key_offset

0xc28a,	// (0x00033c18) cell_vkbss_key_pane_ParamLimits

0xc28a,	// (0x00033c18) cell_vkbss_key_pane

0x7969,	// (0x0002f2f7) bg_cell_vkbss_key_g1_ParamLimits

0x7969,	// (0x0002f2f7) bg_cell_vkbss_key_g1

0xe65d,	// (0x00035feb) cell_vkbss_key_3p_pane_ParamLimits

0xe65d,	// (0x00035feb) cell_vkbss_key_3p_pane

0xe693,	// (0x00036021) cell_vkbss_key_g1_ParamLimits

0xe693,	// (0x00036021) cell_vkbss_key_g1

0xe6c9,	// (0x00036057) cell_vkbss_key_t1_ParamLimits

0xe6c9,	// (0x00036057) cell_vkbss_key_t1

0x27f2,	// (0x0002a180) cell_ituss_key_pane_ParamLimits

0x27f2,	// (0x0002a180) cell_ituss_key_pane

0x7a3d,	// (0x0002f3cb) bg_cell_ituss_key_g1_ParamLimits

0x7a3d,	// (0x0002f3cb) bg_cell_ituss_key_g1

0x7a49,	// (0x0002f3d7) cell_ituss_key_pane_g1_ParamLimits

0x7a49,	// (0x0002f3d7) cell_ituss_key_pane_g1

0x2803,	// (0x0002a191) cell_ituss_key_pane_g2_ParamLimits

0x2803,	// (0x0002a191) cell_ituss_key_pane_g2

0x0005,

0xfeb9,	// (0x00037847) cell_ituss_key_pane_g_ParamLimits

0xfeb9,	// (0x00037847) cell_ituss_key_pane_g

0x2887,	// (0x0002a215) cell_ituss_key_t1_ParamLimits

0x2887,	// (0x0002a215) cell_ituss_key_t1

0x28c1,	// (0x0002a24f) cell_ituss_key_t2_ParamLimits

0x28c1,	// (0x0002a24f) cell_ituss_key_t2

0x28f3,	// (0x0002a281) cell_ituss_key_t3_ParamLimits

0x28f3,	// (0x0002a281) cell_ituss_key_t3

0x2924,	// (0x0002a2b2) cell_ituss_key_t4_ParamLimits

0x2924,	// (0x0002a2b2) cell_ituss_key_t4

0x0005,

0xfec6,	// (0x00037854) cell_ituss_key_t_ParamLimits

0xfec6,	// (0x00037854) cell_ituss_key_t

0xe725,	// (0x000360b3) cell_vkbss_key_3p_pane_g1

0xe72d,	// (0x000360bb) cell_vkbss_key_3p_pane_g2

0xe735,	// (0x000360c3) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed3,	// (0x00037861) cell_vkbss_key_3p_pane_g

0xcfe2,	// (0x00034970) bg_popup_fep_char_preview_window_cp02

0x7a87,	// (0x0002f415) popup_fep_char_pre_window_t1

0xe2c8,	// (0x00035c56) main_ai5_sk_pane

0x74de,	// (0x0002ee6c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x74ea,	// (0x0002ee78) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4e84,	// (0x0002c812) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x74ff,	// (0x0002ee8d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9d,	// (0x0003782b) cell_contacts_ai5_widget_pane_g_ParamLimits

0x750b,	// (0x0002ee99) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc722,	// (0x000340b0) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe73d,	// (0x000360cb) main_ai5_sk_pane_g1

0xacb1,	// (0x0003263f) popup_query_code_window_g1

0xe641,	// (0x00035fcf) popup_fep_vkb_icf_pane

0x792d,	// (0x0002f2bb) popup_fep_vtchi_icf_pane

0x7a9e,	// (0x0002f42c) bg_icf_pane

0x7a9e,	// (0x0002f42c) list_vkb_icf_pane

0x7aaa,	// (0x0002f438) bg_icf_pane_cp01

0x7abd,	// (0x0002f44b) vtchi_icf_list_pane

0xe792,	// (0x00036120) list_vkb_icf_pane_t1_ParamLimits

0xe792,	// (0x00036120) list_vkb_icf_pane_t1

0x7b42,	// (0x0002f4d0) vtchi_icf_list_pane_t1_ParamLimits

0x7b42,	// (0x0002f4d0) vtchi_icf_list_pane_t1

0x78e1,	// (0x0002f26f) popup_fep_ituss_window_ParamLimits

0x792d,	// (0x0002f2bb) popup_fep_vtchi_icf_pane_ParamLimits

0x7959,	// (0x0002f2e7) ituss_keypad_pane_ParamLimits

0x2791,	// (0x0002a11f) ituss_sks_pane

0x7a9e,	// (0x0002f42c) bg_icf_pane_ParamLimits

0xe626,	// (0x00035fb4) icf_edit_indi_pane_ParamLimits

0xe626,	// (0x00035fb4) icf_edit_indi_pane

0x7a9e,	// (0x0002f42c) list_vkb_icf_pane_ParamLimits

0x7aaa,	// (0x0002f438) bg_icf_pane_cp01_ParamLimits

0x78cc,	// (0x0002f25a) icf_edit_indi_pane_cp01_ParamLimits

0x78cc,	// (0x0002f25a) icf_edit_indi_pane_cp01

0x7abd,	// (0x0002f44b) vtchi_query_pane

0x6c42,	// (0x0002e5d0) icf_edit_indi_pane_g1_ParamLimits

0x6c42,	// (0x0002e5d0) icf_edit_indi_pane_g1

0xe7aa,	// (0x00036138) icf_edit_indi_pane_g2_ParamLimits

0xe7aa,	// (0x00036138) icf_edit_indi_pane_g2

0x0001,

0xfefe,	// (0x0003788c) icf_edit_indi_pane_g_ParamLimits

0xfefe,	// (0x0003788c) icf_edit_indi_pane_g

0xe7be,	// (0x0003614c) icf_edit_indi_pane_t1

0x7b66,	// (0x0002f4f4) bg_input_focus_pane_cp042

0xc664,	// (0x00033ff2) vtchi_button_pane

0x7b6f,	// (0x0002f4fd) vtchi_query_pane_t1

0x7b7d,	// (0x0002f50b) vtchi_query_pane_t2

0x7b8b,	// (0x0002f519) vtchi_query_pane_t3

0x0002,

0xfeed,	// (0x0003787b) vtchi_query_pane_t

0xc2fc,	// (0x00033c8a) bg_button_pane_cp13

0x7b99,	// (0x0002f527) vtchi_button_pane_g1

0x29a5,	// (0x0002a333) ituss_sks_pane_g1

0x29b0,	// (0x0002a33e) ituss_sks_pane_g2

0x0001,

0xfef4,	// (0x00037882) ituss_sks_pane_g

0x7ba1,	// (0x0002f52f) ituss_sks_pane_t1

0x7baf,	// (0x0002f53d) ituss_sks_pane_t2

0x0001,

0xfef9,	// (0x00037887) ituss_sks_pane_t

0x4218,	// (0x0002bba6) indicator_nsta_pane_cp_g1

0x4221,	// (0x0002bbaf) indicator_nsta_pane_cp_g2

0x4229,	// (0x0002bbb7) indicator_nsta_pane_cp_g3

0x4231,	// (0x0002bbbf) indicator_nsta_pane_cp_g4

0x4221,	// (0x0002bbaf) indicator_nsta_pane_cp_g5

0x4229,	// (0x0002bbb7) indicator_nsta_pane_cp_g6

0x0005,

0xfa82,	// (0x00037410) indicator_nsta_pane_cp_g

0xe09d,	// (0x00035a2b) cell_graphic2_pane_t2_ParamLimits

0xe09d,	// (0x00035a2b) cell_graphic2_pane_t2

0x0001,

0xfd88,	// (0x00037716) cell_graphic2_pane_t_ParamLimits

0xfd88,	// (0x00037716) cell_graphic2_pane_t

0xe0d4,	// (0x00035a62) cell_graphic2_control_pane_t1

0x9a0e,	// (0x0003139c) signal_pane_g3_ParamLimits

0x9a0e,	// (0x0003139c) signal_pane_g3

0x9a22,	// (0x000313b0) signal_pane_g4_ParamLimits

0x9a22,	// (0x000313b0) signal_pane_g4

0x789b,	// (0x0002f229) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x789b,	// (0x0002f229) cell_ai5_widget_list_row_pane_t3

0x7a5d,	// (0x0002f3eb) cell_ituss_key_pane_t1_ParamLimits

0x7a5d,	// (0x0002f3eb) cell_ituss_key_pane_t1

0x0e91,	// (0x0002881f) form_field_data_wide_pane_vc_t2_ParamLimits

0x0e91,	// (0x0002881f) form_field_data_wide_pane_vc_t2

0x0ea5,	// (0x00028833) form_field_data_wide_pane_vc_t3_ParamLimits

0x0ea5,	// (0x00028833) form_field_data_wide_pane_vc_t3

0x0002,

0xf7c9,	// (0x00037157) form_field_data_wide_pane_vc_t_ParamLimits

0xf7c9,	// (0x00037157) form_field_data_wide_pane_vc_t

0x3ec2,	// (0x0002b850) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3ec2,	// (0x0002b850) form_field_slider_wide_pane_vc_t3

0x3fa0,	// (0x0002b92e) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3fa0,	// (0x0002b92e) form_field_popup_wide_pane_vc_t2

0x3fb7,	// (0x0002b945) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3fb7,	// (0x0002b945) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa71,	// (0x000373ff) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa71,	// (0x000373ff) form_field_popup_wide_pane_vc_t

0xc047,	// (0x000339d5) aid_fshwr2_btn_pane_ParamLimits

0xc05b,	// (0x000339e9) aid_fshwr2_syb_pane_ParamLimits

0xc06f,	// (0x000339fd) aid_fshwr2_txt_pane_ParamLimits

0xc722,	// (0x000340b0) fshwr2_bg_pane_ParamLimits

0xc07f,	// (0x00033a0d) fshwr2_func_candi_pane_ParamLimits

0xc09f,	// (0x00033a2d) fshwr2_hwr_syb_pane_ParamLimits

0xc0c1,	// (0x00033a4f) fshwr2_icf_pane_ParamLimits

0xee19,	// (0x000367a7) list_double_graphic_pane_vc_g4_ParamLimits

0xee19,	// (0x000367a7) list_double_graphic_pane_vc_g4

0x2823,	// (0x0002a1b1) cell_ituss_key_pane_g3_ParamLimits

0x2823,	// (0x0002a1b1) cell_ituss_key_pane_g3

0x2955,	// (0x0002a2e3) cell_ituss_key_t5_ParamLimits

0x2955,	// (0x0002a2e3) cell_ituss_key_t5

0xe650,	// (0x00035fde) popup_fep_vkbss_window_ParamLimits

0x5f47,	// (0x0002d8d5) aid_cell_ai5_quarter

0xe7be,	// (0x0003614c) icf_edit_indi_pane_t1_ParamLimits

0x942e,	// (0x00030dbc) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x942e,	// (0x00030dbc) aid_tch_indicator_popup_pane_cp2

0x9441,	// (0x00030dcf) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x9441,	// (0x00030dcf) aid_tch_query_popup_data_pane_cp2

0x1206,	// (0x00028b94) aid_tch_query_popup_pane_ParamLimits

0x1206,	// (0x00028b94) aid_tch_query_popup_pane

0x1206,	// (0x00028b94) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x1206,	// (0x00028b94) aid_tch_query_popup_data_pane_cp1

0xc864,	// (0x000341f2) cell_fshwr2_syb_bg_pane_ParamLimits

0xc1b4,	// (0x00033b42) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xc1c7,	// (0x00033b55) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe641,	// (0x00035fcf) popup_fep_vkb_icf_pane_ParamLimits

0xbfad,	// (0x0003393b) bg_popup_fep_char_preview_window_g10

0x6f06,	// (0x0002e894) cell_ai5_widget_pane_g11_ParamLimits

0x6f06,	// (0x0002e894) cell_ai5_widget_pane_g11

0x6f12,	// (0x0002e8a0) cell_ai5_widget_pane_g12_ParamLimits

0x6f12,	// (0x0002e8a0) cell_ai5_widget_pane_g12

0x6f1e,	// (0x0002e8ac) cell_ai5_widget_pane_g13_ParamLimits

0x6f1e,	// (0x0002e8ac) cell_ai5_widget_pane_g13

0x704d,	// (0x0002e9db) cell_ai5_widget_pane_t11_ParamLimits

0x704d,	// (0x0002e9db) cell_ai5_widget_pane_t11

0x705f,	// (0x0002e9ed) cell_ai5_widget_pane_t12_ParamLimits

0x705f,	// (0x0002e9ed) cell_ai5_widget_pane_t12

0x282f,	// (0x0002a1bd) cell_ituss_key_pane_g4_ParamLimits

0x282f,	// (0x0002a1bd) cell_ituss_key_pane_g4

0x284b,	// (0x0002a1d9) cell_ituss_key_pane_g5_ParamLimits

0x284b,	// (0x0002a1d9) cell_ituss_key_pane_g5

0x2867,	// (0x0002a1f5) cell_ituss_key_pane_g6_ParamLimits

0x2867,	// (0x0002a1f5) cell_ituss_key_pane_g6

0x0c77,	// (0x00028605) bg_icf_pane_g1

0xe746,	// (0x000360d4) bg_icf_pane_g2

0xe750,	// (0x000360de) bg_icf_pane_g3

0xe758,	// (0x000360e6) bg_icf_pane_g4

0xe762,	// (0x000360f0) bg_icf_pane_g5

0xe76c,	// (0x000360fa) bg_icf_pane_g6

0xe776,	// (0x00036104) bg_icf_pane_g7

0xe77e,	// (0x0003610c) bg_icf_pane_g8

0xe788,	// (0x00036116) bg_icf_pane_g9

0x0008,

0xfeda,	// (0x00037868) bg_icf_pane_g

0x7946,	// (0x0002f2d4) popup_hyb_candi_window_ParamLimits

0x7946,	// (0x0002f2d4) popup_hyb_candi_window

0x0d7b,	// (0x00028709) bg_popup_sub_pane_cp01_ParamLimits

0x0d7b,	// (0x00028709) bg_popup_sub_pane_cp01

0x7bea,	// (0x0002f578) entry_hyb_candi_pane_ParamLimits

0x7bea,	// (0x0002f578) entry_hyb_candi_pane

0x7bf9,	// (0x0002f587) grid_hyb_candi_pane_ParamLimits

0x7bf9,	// (0x0002f587) grid_hyb_candi_pane

0x7c0e,	// (0x0002f59c) grid_hyb_phrase_pane_ParamLimits

0x7c0e,	// (0x0002f59c) grid_hyb_phrase_pane

0x7c1d,	// (0x0002f5ab) cell_hyb_candi_pane_ParamLimits

0x7c1d,	// (0x0002f5ab) cell_hyb_candi_pane

0x7c40,	// (0x0002f5ce) cell_hyb_candi_scroll_pane

0xcb74,	// (0x00034502) cell_hyb_candi_pane_g1

0x7c49,	// (0x0002f5d7) cell_hyb_candi_pane_t1

0x7c57,	// (0x0002f5e5) cell_hyb_phrase_pane

0xcb74,	// (0x00034502) cell_hyb_phrase_pane_g1

0x7c60,	// (0x0002f5ee) cell_hyb_phrase_pane_t1

0x7c6e,	// (0x0002f5fc) entry_hyb_candi_pane_t1

0xcfe2,	// (0x00034970) input_focus_pane_cp06

0x7c7c,	// (0x0002f60a) cell_hyb_candi_scroll_pane_g1

0x7c84,	// (0x0002f612) cell_hyb_candi_scroll_pane_g1_aid

0x7c8c,	// (0x0002f61a) cell_hyb_candi_scroll_pane_g2

0x7c94,	// (0x0002f622) cell_hyb_candi_scroll_pane_g2_aid

0x7c9c,	// (0x0002f62a) cell_hyb_candi_scroll_pane_g3

0x7ca4,	// (0x0002f632) cell_hyb_candi_scroll_pane_g4

0xe25c,	// (0x00035bea) ai5_page_g1

0x2967,	// (0x0002a2f5) cell_ituss_key_t6_ParamLimits

0x2967,	// (0x0002a2f5) cell_ituss_key_t6

0xc276,	// (0x00033c04) icf_edit_indi_pane_cp02_ParamLimits

0xc276,	// (0x00033c04) icf_edit_indi_pane_cp02

0x2784,	// (0x0002a112) icf_edit_indi_pane_cp03_ParamLimits

0x2784,	// (0x0002a112) icf_edit_indi_pane_cp03
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small

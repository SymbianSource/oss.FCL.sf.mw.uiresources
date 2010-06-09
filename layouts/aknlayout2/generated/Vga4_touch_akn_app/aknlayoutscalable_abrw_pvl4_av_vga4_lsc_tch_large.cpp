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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0005b51d };

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
0x9c5f,	// (0x0006517c) Screen

0x9c6b,	// (0x00065188) application_window_ParamLimits

0x9c6b,	// (0x00065188) application_window

0x5f67,	// (0x00061484) screen_g1

0x9ca3,	// (0x000651c0) area_bottom_pane_ParamLimits

0x9ca3,	// (0x000651c0) area_bottom_pane

0xe6be,	// (0x00069bdb) area_top_pane_ParamLimits

0xe6be,	// (0x00069bdb) area_top_pane

0xe75c,	// (0x00069c79) main_pane_ParamLimits

0xe75c,	// (0x00069c79) main_pane

0x5f71,	// (0x0006148e) misc_graphics

0xb73d,	// (0x00066c5a) battery_pane_ParamLimits

0xb73d,	// (0x00066c5a) battery_pane

0x2acd,	// (0x0005dfea) bg_status_flat_pane_g8

0x2ad5,	// (0x0005dff2) bg_status_flat_pane_g9

0x1ed7,	// (0x0005d3f4) context_pane_ParamLimits

0x1ed7,	// (0x0005d3f4) context_pane

0xb8b4,	// (0x00066dd1) navi_pane_ParamLimits

0xb8b4,	// (0x00066dd1) navi_pane

0xb93e,	// (0x00066e5b) signal_pane_ParamLimits

0xb93e,	// (0x00066e5b) signal_pane

0x0008,

0xf879,	// (0x0006ad96) bg_status_flat_pane_g

0xb9ce,	// (0x00066eeb) status_pane_g1_ParamLimits

0xb9ce,	// (0x00066eeb) status_pane_g1

0xb9e4,	// (0x00066f01) status_pane_g2_ParamLimits

0xb9e4,	// (0x00066f01) status_pane_g2

0x2118,	// (0x0005d635) status_pane_g3_ParamLimits

0x2118,	// (0x0005d635) status_pane_g3

0x0004,

0xf7a5,	// (0x0006acc2) status_pane_g_ParamLimits

0xf7a5,	// (0x0006acc2) status_pane_g

0xb9f0,	// (0x00066f0d) title_pane_ParamLimits

0xb9f0,	// (0x00066f0d) title_pane

0xba53,	// (0x00066f70) uni_indicator_pane_ParamLimits

0xba53,	// (0x00066f70) uni_indicator_pane

0x00b8,	// (0x0005b5d5) bg_list_pane_ParamLimits

0x00b8,	// (0x0005b5d5) bg_list_pane

0xaf5d,	// (0x0006647a) find_pane

0xaf65,	// (0x00066482) listscroll_app_pane_ParamLimits

0xaf65,	// (0x00066482) listscroll_app_pane

0x00ec,	// (0x0005b609) listscroll_form_pane

0xaf75,	// (0x00066492) listscroll_gen_pane_ParamLimits

0xaf75,	// (0x00066492) listscroll_gen_pane

0x0108,	// (0x0005b625) listscroll_set_pane

0x366c,	// (0x0005eb89) main_idle_act_pane

0xc569,	// (0x00067a86) main_idle_trad_pane

0xc569,	// (0x00067a86) main_list_empty_pane

0x0122,	// (0x0005b63f) main_midp_pane

0x012e,	// (0x0005b64b) main_pane_g1_ParamLimits

0x012e,	// (0x0005b64b) main_pane_g1

0xaf97,	// (0x000664b4) popup_ai_message_window_ParamLimits

0xaf97,	// (0x000664b4) popup_ai_message_window

0xb037,	// (0x00066554) popup_fep_china_uni_window_ParamLimits

0xb037,	// (0x00066554) popup_fep_china_uni_window

0x0250,	// (0x0005b76d) popup_fep_japan_candidate_window_ParamLimits

0x0250,	// (0x0005b76d) popup_fep_japan_candidate_window

0x027a,	// (0x0005b797) popup_fep_japan_predictive_window_ParamLimits

0x027a,	// (0x0005b797) popup_fep_japan_predictive_window

0xb097,	// (0x000665b4) popup_find_window

0xb0b4,	// (0x000665d1) popup_grid_graphic_window_ParamLimits

0xb0b4,	// (0x000665d1) popup_grid_graphic_window

0x02eb,	// (0x0005b808) popup_large_graphic_colour_window

0xb158,	// (0x00066675) popup_menu_window_ParamLimits

0xb158,	// (0x00066675) popup_menu_window

0xb348,	// (0x00066865) popup_note_image_window

0xb308,	// (0x00066825) popup_note_wait_window_ParamLimits

0xb308,	// (0x00066825) popup_note_wait_window

0xb360,	// (0x0006687d) popup_note_window_ParamLimits

0xb360,	// (0x0006687d) popup_note_window

0xb40e,	// (0x0006692b) popup_query_code_window_ParamLimits

0xb40e,	// (0x0006692b) popup_query_code_window

0x1b97,	// (0x0005d0b4) popup_query_data_code_window_ParamLimits

0x1b97,	// (0x0005d0b4) popup_query_data_code_window

0xb44e,	// (0x0006696b) popup_query_data_window_ParamLimits

0xb44e,	// (0x0006696b) popup_query_data_window

0xb4e2,	// (0x000669ff) popup_query_sat_info_window_ParamLimits

0xb4e2,	// (0x000669ff) popup_query_sat_info_window

0xb58d,	// (0x00066aaa) popup_snote_single_graphic_window_ParamLimits

0xb58d,	// (0x00066aaa) popup_snote_single_graphic_window

0xb58d,	// (0x00066aaa) popup_snote_single_text_window_ParamLimits

0xb58d,	// (0x00066aaa) popup_snote_single_text_window

0x1c32,	// (0x0005d14f) popup_sub_window_general

0x1d78,	// (0x0005d295) popup_window_general_ParamLimits

0x1d78,	// (0x0005d295) popup_window_general

0x1d91,	// (0x0005d2ae) power_save_pane

0xadcb,	// (0x000662e8) control_pane_g1_ParamLimits

0xadcb,	// (0x000662e8) control_pane_g1

0xadf4,	// (0x00066311) control_pane_g2_ParamLimits

0xadf4,	// (0x00066311) control_pane_g2

0xeafd,	// (0x0006a01a) control_pane_g3_ParamLimits

0xeafd,	// (0x0006a01a) control_pane_g3

0x0007,

0xf78d,	// (0x0006acaa) control_pane_g_ParamLimits

0xf78d,	// (0x0006acaa) control_pane_g

0xae56,	// (0x00066373) control_pane_t1_ParamLimits

0xae56,	// (0x00066373) control_pane_t1

0xaeb4,	// (0x000663d1) control_pane_t2_ParamLimits

0xaeb4,	// (0x000663d1) control_pane_t2

0x0002,

0xf79e,	// (0x0006acbb) control_pane_t_ParamLimits

0xf79e,	// (0x0006acbb) control_pane_t

0xad24,	// (0x00066241) navi_navi_volume_pane_cp1

0xad2c,	// (0x00066249) status_small_icon_pane

0xeac9,	// (0x00069fe6) status_small_pane_g1_ParamLimits

0xeac9,	// (0x00069fe6) status_small_pane_g1

0xad34,	// (0x00066251) status_small_pane_g2_ParamLimits

0xad34,	// (0x00066251) status_small_pane_g2

0xad40,	// (0x0006625d) status_small_pane_g3_ParamLimits

0xad40,	// (0x0006625d) status_small_pane_g3

0xad4c,	// (0x00066269) status_small_pane_g4_ParamLimits

0xad4c,	// (0x00066269) status_small_pane_g4

0xad58,	// (0x00066275) status_small_pane_g5_ParamLimits

0xad58,	// (0x00066275) status_small_pane_g5

0xad66,	// (0x00066283) status_small_pane_g6_ParamLimits

0xad66,	// (0x00066283) status_small_pane_g6

0x0007,

0xf77c,	// (0x0006ac99) status_small_pane_g_ParamLimits

0xf77c,	// (0x0006ac99) status_small_pane_g

0xad95,	// (0x000662b2) status_small_pane_t1

0xadb7,	// (0x000662d4) status_small_wait_pane_ParamLimits

0xadb7,	// (0x000662d4) status_small_wait_pane

0xaa5e,	// (0x00065f7b) aid_levels_signal_ParamLimits

0xaa5e,	// (0x00065f7b) aid_levels_signal

0xaa76,	// (0x00065f93) signal_pane_g1_ParamLimits

0xaa76,	// (0x00065f93) signal_pane_g1

0xaa91,	// (0x00065fae) signal_pane_g2_ParamLimits

0xaa91,	// (0x00065fae) signal_pane_g2

0x0003,

0xf70d,	// (0x0006ac2a) signal_pane_g_ParamLimits

0xf70d,	// (0x0006ac2a) signal_pane_g

0x8eaf,	// (0x000643cc) context_pane_g1

0x9e8f,	// (0x000653ac) title_pane_g1

0x9eba,	// (0x000653d7) title_pane_t1

0x5f93,	// (0x000614b0) title_pane_t2

0x5fb9,	// (0x000614d6) title_pane_t3

0x0002,

0xf557,	// (0x0006aa74) title_pane_t

0xba7b,	// (0x00066f98) aid_levels_battery_ParamLimits

0xba7b,	// (0x00066f98) aid_levels_battery

0xc571,	// (0x00067a8e) battery_pane_g1_ParamLimits

0xc571,	// (0x00067a8e) battery_pane_g1

0xc58e,	// (0x00067aab) battery_pane_g2_ParamLimits

0xc58e,	// (0x00067aab) battery_pane_g2

0x0001,

0xf7b0,	// (0x0006accd) battery_pane_g_ParamLimits

0xf7b0,	// (0x0006accd) battery_pane_g

0xc844,	// (0x00067d61) uni_indicator_pane_g1

0xc85a,	// (0x00067d77) uni_indicator_pane_g2

0xc870,	// (0x00067d8d) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0006ae3e) uni_indicator_pane_g

0x915d,	// (0x0006467a) navi_icon_pane_ParamLimits

0x915d,	// (0x0006467a) navi_icon_pane

0x90e1,	// (0x000645fe) navi_midp_pane

0x9179,	// (0x00064696) navi_navi_pane

0x9183,	// (0x000646a0) navi_text_pane_ParamLimits

0x9183,	// (0x000646a0) navi_text_pane

0x5f67,	// (0x00061484) status_small_wait_pane_g1

0x62b4,	// (0x000617d1) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0006ae39) status_small_wait_pane_g

0xc7ab,	// (0x00067cc8) navi_navi_icon_text_pane

0xc7b3,	// (0x00067cd0) navi_navi_pane_g1_ParamLimits

0xc7b3,	// (0x00067cd0) navi_navi_pane_g1

0xc7c5,	// (0x00067ce2) navi_navi_pane_g2_ParamLimits

0xc7c5,	// (0x00067ce2) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0006ae07) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0006ae07) navi_navi_pane_g

0x3156,	// (0x0005e673) navi_navi_tabs_pane

0xc7d7,	// (0x00067cf4) navi_navi_text_pane

0xc7ab,	// (0x00067cc8) navi_navi_volume_pane

0xc799,	// (0x00067cb6) navi_text_pane_t1

0xc78d,	// (0x00067caa) navi_icon_pane_g1

0x304d,	// (0x0005e56a) navi_navi_text_pane_t1

0xbc7b,	// (0x00067198) navi_navi_volume_pane_g1

0xbc83,	// (0x000671a0) volume_small_pane

0xc6d5,	// (0x00067bf2) navi_navi_icon_text_pane_g1

0xc6dd,	// (0x00067bfa) navi_navi_icon_text_pane_t1

0x9179,	// (0x00064696) navi_tabs_2_long_pane

0x9179,	// (0x00064696) navi_tabs_2_pane

0x9179,	// (0x00064696) navi_tabs_3_long_pane

0x9179,	// (0x00064696) navi_tabs_3_pane

0x9179,	// (0x00064696) navi_tabs_4_pane

0xbc5b,	// (0x00067178) tabs_2_active_pane_ParamLimits

0xbc5b,	// (0x00067178) tabs_2_active_pane

0xbc6b,	// (0x00067188) tabs_2_passive_pane_ParamLimits

0xbc6b,	// (0x00067188) tabs_2_passive_pane

0xbc29,	// (0x00067146) tabs_3_active_pane_ParamLimits

0xbc29,	// (0x00067146) tabs_3_active_pane

0xbc39,	// (0x00067156) tabs_3_passive_pane_ParamLimits

0xbc39,	// (0x00067156) tabs_3_passive_pane

0xbc4a,	// (0x00067167) tabs_3_passive_pane_cp_ParamLimits

0xbc4a,	// (0x00067167) tabs_3_passive_pane_cp

0xbbe5,	// (0x00067102) tabs_4_active_pane_ParamLimits

0xbbe5,	// (0x00067102) tabs_4_active_pane

0xbbf6,	// (0x00067113) tabs_4_passive_pane_ParamLimits

0xbbf6,	// (0x00067113) tabs_4_passive_pane

0xbc07,	// (0x00067124) tabs_4_passive_pane_cp_ParamLimits

0xbc07,	// (0x00067124) tabs_4_passive_pane_cp

0xbc18,	// (0x00067135) tabs_4_passive_pane_cp2_ParamLimits

0xbc18,	// (0x00067135) tabs_4_passive_pane_cp2

0xbbc1,	// (0x000670de) tabs_2_long_active_pane_ParamLimits

0xbbc1,	// (0x000670de) tabs_2_long_active_pane

0xbbd3,	// (0x000670f0) tabs_2_long_passive_pane_ParamLimits

0xbbd3,	// (0x000670f0) tabs_2_long_passive_pane

0xbb76,	// (0x00067093) tabs_3_long_active_pane_ParamLimits

0xbb76,	// (0x00067093) tabs_3_long_active_pane

0xbb8f,	// (0x000670ac) tabs_3_long_passive_pane_ParamLimits

0xbb8f,	// (0x000670ac) tabs_3_long_passive_pane

0xbba8,	// (0x000670c5) tabs_3_long_passive_pane_cp_ParamLimits

0xbba8,	// (0x000670c5) tabs_3_long_passive_pane_cp

0x0651,	// (0x0005bb6e) volume_small_pane_g1

0xbb25,	// (0x00067042) volume_small_pane_g2

0xbb2e,	// (0x0006704b) volume_small_pane_g3

0xbb37,	// (0x00067054) volume_small_pane_g4

0xbb40,	// (0x0006705d) volume_small_pane_g5

0xbb49,	// (0x00067066) volume_small_pane_g6

0xbb52,	// (0x0006706f) volume_small_pane_g7

0xbb5b,	// (0x00067078) volume_small_pane_g8

0xbb64,	// (0x00067081) volume_small_pane_g9

0xbb6d,	// (0x0006708a) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0006add3) volume_small_pane_g

0x60fe,	// (0x0006161b) bg_active_tab_pane_cp2_ParamLimits

0x60fe,	// (0x0006161b) bg_active_tab_pane_cp2

0x9f46,	// (0x00065463) tabs_3_active_pane_g1

0x9f4e,	// (0x0006546b) tabs_3_active_pane_t1

0x60fe,	// (0x0006161b) bg_passive_tab_pane_cp2_ParamLimits

0x60fe,	// (0x0006161b) bg_passive_tab_pane_cp2

0x9f46,	// (0x00065463) tabs_3_passive_pane_g1

0x9f4e,	// (0x0006546b) tabs_3_passive_pane_t1

0x60fe,	// (0x0006161b) bg_active_tab_pane_cp3_ParamLimits

0x60fe,	// (0x0006161b) bg_active_tab_pane_cp3

0x9f60,	// (0x0006547d) tabs_4_active_pane_g1

0x9f68,	// (0x00065485) tabs_4_active_pane_t1

0x60fe,	// (0x0006161b) bg_passive_tab_pane_cp3_ParamLimits

0x60fe,	// (0x0006161b) bg_passive_tab_pane_cp3

0x9f60,	// (0x0006547d) tabs_4_1_passive_pane_g1

0x9f68,	// (0x00065485) tabs_4_1_passive_pane_t1

0x0122,	// (0x0005b63f) list_highlight_pane_cp2

0xc905,	// (0x00067e22) list_set_pane_ParamLimits

0xc905,	// (0x00067e22) list_set_pane

0xc9cd,	// (0x00067eea) main_pane_set_t1_ParamLimits

0xc9cd,	// (0x00067eea) main_pane_set_t1

0xc9ed,	// (0x00067f0a) main_pane_set_t2_ParamLimits

0xc9ed,	// (0x00067f0a) main_pane_set_t2

0xca01,	// (0x00067f1e) main_pane_set_t3_ParamLimits

0xca01,	// (0x00067f1e) main_pane_set_t3

0xca15,	// (0x00067f32) main_pane_set_t4_ParamLimits

0xca15,	// (0x00067f32) main_pane_set_t4

0x0003,

0xf986,	// (0x0006aea3) main_pane_set_t_ParamLimits

0xf986,	// (0x0006aea3) main_pane_set_t

0xca29,	// (0x00067f46) setting_code_pane

0x37c0,	// (0x0005ecdd) setting_slider_graphic_pane

0x37c0,	// (0x0005ecdd) setting_slider_pane

0x37c0,	// (0x0005ecdd) setting_text_pane

0x37c0,	// (0x0005ecdd) setting_volume_pane

0xe86b,	// (0x00069d88) volume_set_pane

0x5fcb,	// (0x000614e8) bg_set_opt_pane_cp

0xe875,	// (0x00069d92) setting_slider_pane_t1

0xe88e,	// (0x00069dab) setting_slider_pane_t2

0xe8a8,	// (0x00069dc5) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0006aa7b) setting_slider_pane_t

0xe8c0,	// (0x00069ddd) slider_set_pane

0x5f71,	// (0x0006148e) bg_set_opt_pane_cp2

0x5fd9,	// (0x000614f6) setting_slider_graphic_pane_g1

0xe8d6,	// (0x00069df3) setting_slider_graphic_pane_t1

0xe8e6,	// (0x00069e03) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0006aa82) setting_slider_graphic_pane_t

0xe8f6,	// (0x00069e13) slider_set_pane_cp

0x5f71,	// (0x0006148e) input_focus_pane_cp1

0x3653,	// (0x0005eb70) list_set_text_pane

0x5f67,	// (0x00061484) setting_text_pane_g1

0x5f71,	// (0x0006148e) input_focus_pane_cp2

0x5f67,	// (0x00061484) setting_code_pane_g1

0x5fe2,	// (0x000614ff) setting_code_pane_t1

0xc48a,	// (0x000679a7) set_text_pane_t1_ParamLimits

0xc48a,	// (0x000679a7) set_text_pane_t1

0x8241,	// (0x0006375e) set_opt_bg_pane_g1

0x8249,	// (0x00063766) set_opt_bg_pane_g2

0x362b,	// (0x0005eb48) set_opt_bg_pane_g3

0x8259,	// (0x00063776) set_opt_bg_pane_g4

0x8261,	// (0x0006377e) set_opt_bg_pane_g5

0x8269,	// (0x00063786) set_opt_bg_pane_g6

0x3635,	// (0x0005eb52) set_opt_bg_pane_g7

0x363f,	// (0x0005eb5c) set_opt_bg_pane_g8

0x3649,	// (0x0005eb66) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0006ae90) set_opt_bg_pane_g

0x361e,	// (0x0005eb3b) slider_set_pane_g1

0x085d,	// (0x0005bd7a) slider_set_pane_g2

0x0006,

0xf964,	// (0x0006ae81) slider_set_pane_g

0x07bd,	// (0x0005bcda) volume_set_pane_g1

0x07c7,	// (0x0005bce4) volume_set_pane_g2

0x07d1,	// (0x0005bcee) volume_set_pane_g3

0x07db,	// (0x0005bcf8) volume_set_pane_g4

0x07e5,	// (0x0005bd02) volume_set_pane_g5

0x07ef,	// (0x0005bd0c) volume_set_pane_g6

0x07f9,	// (0x0005bd16) volume_set_pane_g7

0x0803,	// (0x0005bd20) volume_set_pane_g8

0x080d,	// (0x0005bd2a) volume_set_pane_g9

0x0817,	// (0x0005bd34) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0006ae59) volume_set_pane_g

0x9f7a,	// (0x00065497) indicator_pane_ParamLimits

0x9f7a,	// (0x00065497) indicator_pane

0x9fa6,	// (0x000654c3) main_idle_pane_g2_ParamLimits

0x9fa6,	// (0x000654c3) main_idle_pane_g2

0x9fde,	// (0x000654fb) main_pane_idle_g1_ParamLimits

0x9fde,	// (0x000654fb) main_pane_idle_g1

0x5ff0,	// (0x0006150d) popup_clock_digital_analogue_window_ParamLimits

0x5ff0,	// (0x0006150d) popup_clock_digital_analogue_window

0xa00c,	// (0x00065529) soft_indicator_pane_ParamLimits

0xa00c,	// (0x00065529) soft_indicator_pane

0xa028,	// (0x00065545) wallpaper_pane_ParamLimits

0xa028,	// (0x00065545) wallpaper_pane

0x5f67,	// (0x00061484) wallpaper_pane_g1

0xa03a,	// (0x00065557) indicator_pane_g1_ParamLimits

0xa03a,	// (0x00065557) indicator_pane_g1

0x3adc,	// (0x0005eff9) navi_navi_icon_text_pane_srt_g1

0x601e,	// (0x0006153b) soft_indicator_pane_t1

0x6038,	// (0x00061555) aid_ps_area_pane

0xa053,	// (0x00065570) aid_ps_clock_pane

0x6049,	// (0x00061566) aid_ps_indicator_pane

0x6055,	// (0x00061572) indicator_ps_pane_ParamLimits

0x6055,	// (0x00061572) indicator_ps_pane

0x6064,	// (0x00061581) power_save_pane_g1_ParamLimits

0x6064,	// (0x00061581) power_save_pane_g1

0x6070,	// (0x0006158d) power_save_pane_g2_ParamLimits

0x6070,	// (0x0006158d) power_save_pane_g2

0xe69e,	// (0x00069bbb) aid_navinavi_width_pane

0x6038,	// (0x00061555) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0006aa87) power_save_pane_g_ParamLimits

0xf56a,	// (0x0006aa87) power_save_pane_g

0x607e,	// (0x0006159b) power_save_pane_t1_ParamLimits

0x607e,	// (0x0006159b) power_save_pane_t1

0xa053,	// (0x00065570) aid_ps_clock_pane_ParamLimits

0x6049,	// (0x00061566) aid_ps_indicator_pane_ParamLimits

0x6090,	// (0x000615ad) power_save_pane_t4_ParamLimits

0x6090,	// (0x000615ad) power_save_pane_t4

0x0001,

0xf56f,	// (0x0006aa8c) power_save_pane_t_ParamLimits

0xf56f,	// (0x0006aa8c) power_save_pane_t

0x60ba,	// (0x000615d7) power_save_t3_ParamLimits

0x60ba,	// (0x000615d7) power_save_t3

0x60a5,	// (0x000615c2) power_save_t2_ParamLimits

0x60a5,	// (0x000615c2) power_save_t2

0x60cf,	// (0x000615ec) indicator_ps_pane_g1

0xa061,	// (0x0006557e) ai_gene_pane_ParamLimits

0xa061,	// (0x0006557e) ai_gene_pane

0xa078,	// (0x00065595) ai_links_pane_ParamLimits

0xa078,	// (0x00065595) ai_links_pane

0xa090,	// (0x000655ad) indicator_pane_cp1_ParamLimits

0xa090,	// (0x000655ad) indicator_pane_cp1

0xa09f,	// (0x000655bc) main_pane_idle_g1_cp_ParamLimits

0xa09f,	// (0x000655bc) main_pane_idle_g1_cp

0x60d8,	// (0x000615f5) popup_ai_links_title_window

0xa0b7,	// (0x000655d4) soft_indicator_pane_cp1_ParamLimits

0xa0b7,	// (0x000655d4) soft_indicator_pane_cp1

0x3405,	// (0x0005e922) ai_links_pane_g1

0x340e,	// (0x0005e92b) grid_ai_links_pane

0xc83b,	// (0x00067d58) ai_gene_pane_1

0x33f3,	// (0x0005e910) ai_gene_pane_2

0x33fc,	// (0x0005e919) list_highlight_pane_cp4

0xc817,	// (0x00067d34) cell_ai_link_pane_ParamLimits

0xc817,	// (0x00067d34) cell_ai_link_pane

0x33c2,	// (0x0005e8df) cell_ai_link_pane_g1

0x62b4,	// (0x000617d1) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0006ae34) cell_ai_link_pane_g

0x5f71,	// (0x0006148e) grid_highlight_cp2

0x5f71,	// (0x0006148e) bg_popup_sub_pane_cp1

0x60ef,	// (0x0006160c) popup_ai_links_title_window_t1

0x330e,	// (0x0005e82b) ai_gene_pane_1_g1_ParamLimits

0x330e,	// (0x0005e82b) ai_gene_pane_1_g1

0x331a,	// (0x0005e837) ai_gene_pane_1_g2_ParamLimits

0x331a,	// (0x0005e837) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0006ae2a) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0006ae2a) ai_gene_pane_1_g

0x3327,	// (0x0005e844) ai_gene_pane_1_t1_ParamLimits

0x3327,	// (0x0005e844) ai_gene_pane_1_t1

0x335b,	// (0x0005e878) grid_ai_soft_ind_pane

0x32f9,	// (0x0005e816) ai_gene_pane_2_t1_ParamLimits

0x32f9,	// (0x0005e816) ai_gene_pane_2_t1

0xa0cb,	// (0x000655e8) main_pane_empty_t1_ParamLimits

0xa0cb,	// (0x000655e8) main_pane_empty_t1

0xa0e3,	// (0x00065600) main_pane_empty_t2_ParamLimits

0xa0e3,	// (0x00065600) main_pane_empty_t2

0xa0f8,	// (0x00065615) main_pane_empty_t3_ParamLimits

0xa0f8,	// (0x00065615) main_pane_empty_t3

0xa10a,	// (0x00065627) main_pane_empty_t4_ParamLimits

0xa10a,	// (0x00065627) main_pane_empty_t4

0xa11c,	// (0x00065639) main_pane_empty_t5_ParamLimits

0xa11c,	// (0x00065639) main_pane_empty_t5

0x0004,

0xf574,	// (0x0006aa91) main_pane_empty_t_ParamLimits

0xf574,	// (0x0006aa91) main_pane_empty_t

0x8292,	// (0x000637af) bg_popup_window_pane_ParamLimits

0x8292,	// (0x000637af) bg_popup_window_pane

0x305b,	// (0x0005e578) find_popup_pane_cp2_ParamLimits

0x305b,	// (0x0005e578) find_popup_pane_cp2

0x3067,	// (0x0005e584) heading_pane_ParamLimits

0x3067,	// (0x0005e584) heading_pane

0x5f71,	// (0x0006148e) bg_popup_sub_pane

0xc6fa,	// (0x00067c17) bg_popup_window_pane_g1_ParamLimits

0xc6fa,	// (0x00067c17) bg_popup_window_pane_g1

0xc709,	// (0x00067c26) bg_popup_window_pane_g2_ParamLimits

0xc709,	// (0x00067c26) bg_popup_window_pane_g2

0xc715,	// (0x00067c32) bg_popup_window_pane_g3_ParamLimits

0xc715,	// (0x00067c32) bg_popup_window_pane_g3

0xc721,	// (0x00067c3e) bg_popup_window_pane_g4_ParamLimits

0xc721,	// (0x00067c3e) bg_popup_window_pane_g4

0xc730,	// (0x00067c4d) bg_popup_window_pane_g5_ParamLimits

0xc730,	// (0x00067c4d) bg_popup_window_pane_g5

0xc740,	// (0x00067c5d) bg_popup_window_pane_g6_ParamLimits

0xc740,	// (0x00067c5d) bg_popup_window_pane_g6

0xc74c,	// (0x00067c69) bg_popup_window_pane_g7_ParamLimits

0xc74c,	// (0x00067c69) bg_popup_window_pane_g7

0xc75b,	// (0x00067c78) bg_popup_window_pane_g8_ParamLimits

0xc75b,	// (0x00067c78) bg_popup_window_pane_g8

0xc76a,	// (0x00067c87) bg_popup_window_pane_g9_ParamLimits

0xc76a,	// (0x00067c87) bg_popup_window_pane_g9

0x3041,	// (0x0005e55e) bg_popup_window_pane_g10_ParamLimits

0x3041,	// (0x0005e55e) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0006adf2) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0006adf2) bg_popup_window_pane_g

0x2f6a,	// (0x0005e487) bg_popup_heading_pane_ParamLimits

0x2f6a,	// (0x0005e487) bg_popup_heading_pane

0x0931,	// (0x0005be4e) tabs_4_passive_pane_cp_srt_ParamLimits

0x0931,	// (0x0005be4e) tabs_4_passive_pane_cp_srt

0x0943,	// (0x0005be60) tabs_4_passive_pane_srt_ParamLimits

0x2f7e,	// (0x0005e49b) heading_pane_g2

0x0943,	// (0x0005be60) tabs_4_passive_pane_srt

0x2317,	// (0x0005d834) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2317,	// (0x0005d834) bg_passive_tab_pane_cp3_srt

0x2f86,	// (0x0005e4a3) heading_pane_t1_ParamLimits

0x2f86,	// (0x0005e4a3) heading_pane_t1

0x2f9d,	// (0x0005e4ba) heading_pane_t2_ParamLimits

0x2f9d,	// (0x0005e4ba) heading_pane_t2

0x0001,

0xf8d0,	// (0x0006aded) heading_pane_t_ParamLimits

0xf8d0,	// (0x0006aded) heading_pane_t

0x2a95,	// (0x0005dfb2) bg_popup_heading_pane_g1

0x2b44,	// (0x0005e061) bg_popup_heading_pane_g2

0x2b4e,	// (0x0005e06b) bg_popup_heading_pane_g3

0x2b58,	// (0x0005e075) bg_popup_heading_pane_g4

0x2b62,	// (0x0005e07f) bg_popup_heading_pane_g5

0x2b6c,	// (0x0005e089) bg_popup_heading_pane_g6

0x2b74,	// (0x0005e091) bg_popup_heading_pane_g7

0x2b7c,	// (0x0005e099) bg_popup_heading_pane_g8

0x2b86,	// (0x0005e0a3) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0006ada9) bg_popup_heading_pane_g

0x22a3,	// (0x0005d7c0) bg_popup_sub_pane_g1

0x22b3,	// (0x0005d7d0) bg_popup_sub_pane_g2

0x22ab,	// (0x0005d7c8) bg_popup_sub_pane_g3

0x22c3,	// (0x0005d7e0) bg_popup_sub_pane_g4

0x22bb,	// (0x0005d7d8) bg_popup_sub_pane_g5

0x22cb,	// (0x0005d7e8) bg_popup_sub_pane_g6

0x22d3,	// (0x0005d7f0) bg_popup_sub_pane_g7

0x22e3,	// (0x0005d800) bg_popup_sub_pane_g8

0x22db,	// (0x0005d7f8) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0006ad83) bg_popup_sub_pane_g

0x60fe,	// (0x0006161b) bg_popup_window_pane_cp5_ParamLimits

0x60fe,	// (0x0006161b) bg_popup_window_pane_cp5

0x611a,	// (0x00061637) popup_note_window_g1_ParamLimits

0x611a,	// (0x00061637) popup_note_window_g1

0x6126,	// (0x00061643) popup_note_window_t1_ParamLimits

0x6126,	// (0x00061643) popup_note_window_t1

0x613c,	// (0x00061659) popup_note_window_t2_ParamLimits

0x613c,	// (0x00061659) popup_note_window_t2

0x6152,	// (0x0006166f) popup_note_window_t3_ParamLimits

0x6152,	// (0x0006166f) popup_note_window_t3

0x6168,	// (0x00061685) popup_note_window_t4_ParamLimits

0x6168,	// (0x00061685) popup_note_window_t4

0x6190,	// (0x000616ad) popup_note_window_t5_ParamLimits

0x6190,	// (0x000616ad) popup_note_window_t5

0x0004,

0xf57f,	// (0x0006aa9c) popup_note_window_t_ParamLimits

0xf57f,	// (0x0006aa9c) popup_note_window_t

0x61b4,	// (0x000616d1) bg_popup_window_pane_cp6_ParamLimits

0x61b4,	// (0x000616d1) bg_popup_window_pane_cp6

0x2a11,	// (0x0005df2e) popup_note_image_window_g1_ParamLimits

0x2a11,	// (0x0005df2e) popup_note_image_window_g1

0x2a1d,	// (0x0005df3a) popup_note_image_window_g2_ParamLimits

0x2a1d,	// (0x0005df3a) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0006ad77) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0006ad77) popup_note_image_window_g

0x2a36,	// (0x0005df53) popup_note_image_window_t1_ParamLimits

0x2a36,	// (0x0005df53) popup_note_image_window_t1

0x2a4f,	// (0x0005df6c) popup_note_image_window_t2_ParamLimits

0x2a4f,	// (0x0005df6c) popup_note_image_window_t2

0x2a68,	// (0x0005df85) popup_note_image_window_t3_ParamLimits

0x2a68,	// (0x0005df85) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0006ad7c) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0006ad7c) popup_note_image_window_t

0x28d1,	// (0x0005ddee) bg_popup_window_pane_cp7_ParamLimits

0x28d1,	// (0x0005ddee) bg_popup_window_pane_cp7

0x2901,	// (0x0005de1e) popup_note_wait_window_g1_ParamLimits

0x2901,	// (0x0005de1e) popup_note_wait_window_g1

0x290d,	// (0x0005de2a) popup_note_wait_window_g2_ParamLimits

0x290d,	// (0x0005de2a) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0006ad65) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0006ad65) popup_note_wait_window_g

0x2925,	// (0x0005de42) popup_note_wait_window_t1_ParamLimits

0x2925,	// (0x0005de42) popup_note_wait_window_t1

0x294c,	// (0x0005de69) popup_note_wait_window_t2_ParamLimits

0x294c,	// (0x0005de69) popup_note_wait_window_t2

0x296a,	// (0x0005de87) popup_note_wait_window_t3_ParamLimits

0x296a,	// (0x0005de87) popup_note_wait_window_t3

0x297d,	// (0x0005de9a) popup_note_wait_window_t4_ParamLimits

0x297d,	// (0x0005de9a) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0006ad6c) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0006ad6c) popup_note_wait_window_t

0x29a2,	// (0x0005debf) wait_bar_pane_ParamLimits

0x29a2,	// (0x0005debf) wait_bar_pane

0x5f71,	// (0x0006148e) wait_anim_pane

0x5f71,	// (0x0006148e) wait_border_pane

0x5f67,	// (0x00061484) wait_anim_pane_g1

0x5f67,	// (0x00061484) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0006ac25) wait_anim_pane_g

0x2875,	// (0x0005dd92) wait_border_pane_g1

0x2880,	// (0x0005dd9d) wait_border_pane_g2

0x2889,	// (0x0005dda6) wait_border_pane_g3

0x0002,

0xf841,	// (0x0006ad5e) wait_border_pane_g

0x26df,	// (0x0005dbfc) bg_popup_window_pane_cp16_ParamLimits

0x26df,	// (0x0005dbfc) bg_popup_window_pane_cp16

0x27df,	// (0x0005dcfc) indicator_popup_pane_cp4_ParamLimits

0x27df,	// (0x0005dcfc) indicator_popup_pane_cp4

0x27f3,	// (0x0005dd10) popup_query_data_window_t1_ParamLimits

0x27f3,	// (0x0005dd10) popup_query_data_window_t1

0x2805,	// (0x0005dd22) popup_query_data_window_t2_ParamLimits

0x2805,	// (0x0005dd22) popup_query_data_window_t2

0x281e,	// (0x0005dd3b) popup_query_data_window_t3_ParamLimits

0x281e,	// (0x0005dd3b) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0006ad57) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0006ad57) popup_query_data_window_t

0x2838,	// (0x0005dd55) query_popup_data_pane_ParamLimits

0x2838,	// (0x0005dd55) query_popup_data_pane

0x284c,	// (0x0005dd69) query_popup_data_pane_cp1_ParamLimits

0x284c,	// (0x0005dd69) query_popup_data_pane_cp1

0x26df,	// (0x0005dbfc) bg_popup_window_pane_cp10_ParamLimits

0x26df,	// (0x0005dbfc) bg_popup_window_pane_cp10

0x2711,	// (0x0005dc2e) indicator_popup_pane_ParamLimits

0x2711,	// (0x0005dc2e) indicator_popup_pane

0x2733,	// (0x0005dc50) popup_query_code_window_t1_ParamLimits

0x2733,	// (0x0005dc50) popup_query_code_window_t1

0x274d,	// (0x0005dc6a) popup_query_code_window_t2_ParamLimits

0x274d,	// (0x0005dc6a) popup_query_code_window_t2

0x2796,	// (0x0005dcb3) popup_query_code_window_t3_ParamLimits

0x2796,	// (0x0005dcb3) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0006ad50) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0006ad50) popup_query_code_window_t

0x27c5,	// (0x0005dce2) query_popup_pane_ParamLimits

0x27c5,	// (0x0005dce2) query_popup_pane

0x61b4,	// (0x000616d1) bg_popup_window_pane_cp15_ParamLimits

0x61b4,	// (0x000616d1) bg_popup_window_pane_cp15

0x61d4,	// (0x000616f1) indicator_popup_pane_cp1_ParamLimits

0x61d4,	// (0x000616f1) indicator_popup_pane_cp1

0x61e7,	// (0x00061704) indicator_popup_pane_cp2_ParamLimits

0x61e7,	// (0x00061704) indicator_popup_pane_cp2

0x6202,	// (0x0006171f) popup_query_data_code_window_g1_ParamLimits

0x6202,	// (0x0006171f) popup_query_data_code_window_g1

0x6215,	// (0x00061732) popup_query_data_code_window_t1_ParamLimits

0x6215,	// (0x00061732) popup_query_data_code_window_t1

0x6227,	// (0x00061744) popup_query_data_code_window_t2_ParamLimits

0x6227,	// (0x00061744) popup_query_data_code_window_t2

0x6239,	// (0x00061756) popup_query_data_code_window_t3_ParamLimits

0x6239,	// (0x00061756) popup_query_data_code_window_t3

0x624f,	// (0x0006176c) popup_query_data_code_window_t4_ParamLimits

0x624f,	// (0x0006176c) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0006aaa7) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0006aaa7) popup_query_data_code_window_t

0x0526,	// (0x0005ba43) list_single_midp_graphic_pane_g3

0x6269,	// (0x00061786) query_popup_data_pane_cp2_ParamLimits

0x627c,	// (0x00061799) query_popup_pane_cp2_ParamLimits

0x627c,	// (0x00061799) query_popup_pane_cp2

0x5f71,	// (0x0006148e) bg_popup_window_pane_cp11

0x26d7,	// (0x0005dbf4) heading_pane_cp5

0x6312,	// (0x0006182f) listscroll_popup_info_pane

0x5f71,	// (0x0006148e) input_focus_pane_cp3

0x6297,	// (0x000617b4) query_popup_pane_t1

0x62a5,	// (0x000617c2) list_popup_info_pane_ParamLimits

0x62a5,	// (0x000617c2) list_popup_info_pane

0x62b4,	// (0x000617d1) listscroll_popup_info_pane_g1

0x62bc,	// (0x000617d9) scroll_pane_cp7

0x62c6,	// (0x000617e3) popup_info_list_pane_t1_ParamLimits

0x62c6,	// (0x000617e3) popup_info_list_pane_t1

0x62e0,	// (0x000617fd) popup_info_list_pane_t2_ParamLimits

0x62e0,	// (0x000617fd) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0006aab0) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0006aab0) popup_info_list_pane_t

0x5f71,	// (0x0006148e) bg_popup_window_pane_cp12

0x3af6,	// (0x0005f013) find_popup_pane

0x5fcb,	// (0x000614e8) bg_popup_window_pane_cp3

0x62fa,	// (0x00061817) heading_pane_cp3

0x6306,	// (0x00061823) listscroll_popup_graphic_pane

0x5f71,	// (0x0006148e) bg_popup_window_pane_cp4

0xa17e,	// (0x0006569b) heading_pane_cp4

0x6312,	// (0x0006182f) listscroll_popup_colour_pane

0xa188,	// (0x000656a5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa188,	// (0x000656a5) cell_large_graphic_colour_none_popup_pane

0xa19c,	// (0x000656b9) grid_large_graphic_colour_popup_pane_ParamLimits

0xa19c,	// (0x000656b9) grid_large_graphic_colour_popup_pane

0xa1c0,	// (0x000656dd) listscroll_popup_colour_pane_g1_ParamLimits

0xa1c0,	// (0x000656dd) listscroll_popup_colour_pane_g1

0xa1d7,	// (0x000656f4) listscroll_popup_colour_pane_g2_ParamLimits

0xa1d7,	// (0x000656f4) listscroll_popup_colour_pane_g2

0xa1ee,	// (0x0006570b) listscroll_popup_colour_pane_g3_ParamLimits

0xa1ee,	// (0x0006570b) listscroll_popup_colour_pane_g3

0xa1fe,	// (0x0006571b) listscroll_popup_colour_pane_g4_ParamLimits

0xa1fe,	// (0x0006571b) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0006aab5) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0006aab5) listscroll_popup_colour_pane_g

0x631a,	// (0x00061837) scroll_pane_cp6_ParamLimits

0x631a,	// (0x00061837) scroll_pane_cp6

0xa20e,	// (0x0006572b) cell_large_graphic_colour_popup_pane_ParamLimits

0xa20e,	// (0x0006572b) cell_large_graphic_colour_popup_pane

0x632c,	// (0x00061849) cell_large_graphic_colour_none_popup_pane_t1

0x5f71,	// (0x0006148e) grid_highlight_pane_cp5

0x633b,	// (0x00061858) cell_large_graphic_colour_popup_pane_g1

0x6343,	// (0x00061860) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0006aabe) cell_large_graphic_colour_popup_pane_g

0x634b,	// (0x00061868) cell_large_graphic_colour_popup_pane_g2_copy1

0x6354,	// (0x00061871) grid_highlight_pane_cp4

0x635c,	// (0x00061879) bg_popup_window_pane_cp8_ParamLimits

0x635c,	// (0x00061879) bg_popup_window_pane_cp8

0x6377,	// (0x00061894) popup_snote_single_text_window_g1_ParamLimits

0x6377,	// (0x00061894) popup_snote_single_text_window_g1

0x6389,	// (0x000618a6) popup_snote_single_text_window_t1_ParamLimits

0x6389,	// (0x000618a6) popup_snote_single_text_window_t1

0x639c,	// (0x000618b9) popup_snote_single_text_window_t2_ParamLimits

0x639c,	// (0x000618b9) popup_snote_single_text_window_t2

0x63af,	// (0x000618cc) popup_snote_single_text_window_t3_ParamLimits

0x63af,	// (0x000618cc) popup_snote_single_text_window_t3

0x63e8,	// (0x00061905) popup_snote_single_text_window_t4_ParamLimits

0x63e8,	// (0x00061905) popup_snote_single_text_window_t4

0x641c,	// (0x00061939) popup_snote_single_text_window_t5_ParamLimits

0x641c,	// (0x00061939) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0006aac3) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0006aac3) popup_snote_single_text_window_t

0x644b,	// (0x00061968) bg_popup_window_pane_cp9_ParamLimits

0x644b,	// (0x00061968) bg_popup_window_pane_cp9

0x6377,	// (0x00061894) popup_snote_single_graphic_window_g1_ParamLimits

0x6377,	// (0x00061894) popup_snote_single_graphic_window_g1

0x6459,	// (0x00061976) popup_snote_single_graphic_window_g2_ParamLimits

0x6459,	// (0x00061976) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0006aace) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0006aace) popup_snote_single_graphic_window_g

0x6465,	// (0x00061982) popup_snote_single_graphic_window_t1_ParamLimits

0x6465,	// (0x00061982) popup_snote_single_graphic_window_t1

0x6478,	// (0x00061995) popup_snote_single_graphic_window_t2_ParamLimits

0x6478,	// (0x00061995) popup_snote_single_graphic_window_t2

0x648b,	// (0x000619a8) popup_snote_single_graphic_window_t3_ParamLimits

0x648b,	// (0x000619a8) popup_snote_single_graphic_window_t3

0x64c4,	// (0x000619e1) popup_snote_single_graphic_window_t4_ParamLimits

0x64c4,	// (0x000619e1) popup_snote_single_graphic_window_t4

0x64f8,	// (0x00061a15) popup_snote_single_graphic_window_t5_ParamLimits

0x64f8,	// (0x00061a15) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0006aad3) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0006aad3) popup_snote_single_graphic_window_t

0x3a34,	// (0x0005ef51) grid_graphic_popup_pane_ParamLimits

0x3a34,	// (0x0005ef51) grid_graphic_popup_pane

0x3a62,	// (0x0005ef7f) listscroll_popup_graphic_pane_g1_ParamLimits

0x3a62,	// (0x0005ef7f) listscroll_popup_graphic_pane_g1

0xcb2e,	// (0x0006804b) listscroll_popup_graphic_pane_g2_ParamLimits

0xcb2e,	// (0x0006804b) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0006aecd) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0006aecd) listscroll_popup_graphic_pane_g

0x3a8a,	// (0x0005efa7) scroll_pane_cp5

0xcaed,	// (0x0006800a) cell_graphic_popup_pane_ParamLimits

0xcaed,	// (0x0006800a) cell_graphic_popup_pane

0x39bd,	// (0x0005eeda) cell_graphic_popup_pane_g1

0x39c5,	// (0x0005eee2) cell_graphic_popup_pane_g2

0x634b,	// (0x00061868) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0006aec6) cell_graphic_popup_pane_g

0x39ce,	// (0x0005eeeb) cell_graphic_popup_pane_t2

0x6354,	// (0x00061871) grid_highlight_pane_cp3

0x6539,	// (0x00061a56) list_gen_pane_ParamLimits

0x6539,	// (0x00061a56) list_gen_pane

0x6561,	// (0x00061a7e) scroll_pane

0xcaa4,	// (0x00067fc1) bg_list_pane_g1_ParamLimits

0xcaa4,	// (0x00067fc1) bg_list_pane_g1

0x3932,	// (0x0005ee4f) bg_list_pane_g2_ParamLimits

0x3932,	// (0x0005ee4f) bg_list_pane_g2

0x3947,	// (0x0005ee64) bg_list_pane_g3_ParamLimits

0x3947,	// (0x0005ee64) bg_list_pane_g3

0x395b,	// (0x0005ee78) bg_list_pane_g4_ParamLimits

0x395b,	// (0x0005ee78) bg_list_pane_g4

0xcac1,	// (0x00067fde) bg_list_pane_g5_ParamLimits

0xcac1,	// (0x00067fde) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0006aebb) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0006aebb) bg_list_pane_g

0xca67,	// (0x00067f84) list_double2_graphic_large_graphic_pane_ParamLimits

0xca67,	// (0x00067f84) list_double2_graphic_large_graphic_pane

0xca67,	// (0x00067f84) list_double2_graphic_pane_ParamLimits

0xca67,	// (0x00067f84) list_double2_graphic_pane

0xca67,	// (0x00067f84) list_double2_large_graphic_pane_ParamLimits

0xca67,	// (0x00067f84) list_double2_large_graphic_pane

0xca67,	// (0x00067f84) list_double2_pane_ParamLimits

0xca67,	// (0x00067f84) list_double2_pane

0xca67,	// (0x00067f84) list_double_graphic_heading_pane_ParamLimits

0xca67,	// (0x00067f84) list_double_graphic_heading_pane

0xca67,	// (0x00067f84) list_double_graphic_pane_ParamLimits

0xca67,	// (0x00067f84) list_double_graphic_pane

0xca67,	// (0x00067f84) list_double_heading_pane_ParamLimits

0xca67,	// (0x00067f84) list_double_heading_pane

0xca67,	// (0x00067f84) list_double_large_graphic_pane_ParamLimits

0xca67,	// (0x00067f84) list_double_large_graphic_pane

0xca67,	// (0x00067f84) list_double_number_pane_ParamLimits

0xca67,	// (0x00067f84) list_double_number_pane

0xca67,	// (0x00067f84) list_double_pane_ParamLimits

0xca67,	// (0x00067f84) list_double_pane

0xca67,	// (0x00067f84) list_double_time_pane_ParamLimits

0xca67,	// (0x00067f84) list_double_time_pane

0xca67,	// (0x00067f84) list_setting_number_pane_ParamLimits

0xca67,	// (0x00067f84) list_setting_number_pane

0xca67,	// (0x00067f84) list_setting_pane_ParamLimits

0xca67,	// (0x00067f84) list_setting_pane

0xca7b,	// (0x00067f98) list_single_2graphic_pane_ParamLimits

0xca7b,	// (0x00067f98) list_single_2graphic_pane

0xca7b,	// (0x00067f98) list_single_graphic_heading_pane_ParamLimits

0xca7b,	// (0x00067f98) list_single_graphic_heading_pane

0xca7b,	// (0x00067f98) list_single_graphic_pane_ParamLimits

0xca7b,	// (0x00067f98) list_single_graphic_pane

0xca7b,	// (0x00067f98) list_single_heading_pane_ParamLimits

0xca7b,	// (0x00067f98) list_single_heading_pane

0xca7b,	// (0x00067f98) list_single_large_graphic_pane_ParamLimits

0xca7b,	// (0x00067f98) list_single_large_graphic_pane

0xca7b,	// (0x00067f98) list_single_number_heading_pane_ParamLimits

0xca7b,	// (0x00067f98) list_single_number_heading_pane

0xca7b,	// (0x00067f98) list_single_number_pane_ParamLimits

0xca7b,	// (0x00067f98) list_single_number_pane

0xca7b,	// (0x00067f98) list_single_pane_ParamLimits

0xca7b,	// (0x00067f98) list_single_pane

0x5f71,	// (0x0006148e) list_highlight_pane_cp1

0x839a,	// (0x000638b7) list_single_pane_g1_ParamLimits

0x839a,	// (0x000638b7) list_single_pane_g1

0x04f5,	// (0x0005ba12) list_single_pane_g2_ParamLimits

0x04f5,	// (0x0005ba12) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0006aaef) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0006aaef) list_single_pane_g

0xec5a,	// (0x0006a177) list_single_pane_t1_ParamLimits

0xec5a,	// (0x0006a177) list_single_pane_t1

0x839a,	// (0x000638b7) list_single_number_pane_g1_ParamLimits

0x839a,	// (0x000638b7) list_single_number_pane_g1

0x04f5,	// (0x0005ba12) list_single_number_pane_g2_ParamLimits

0x04f5,	// (0x0005ba12) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0006aaef) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0006aaef) list_single_number_pane_g

0xeb9b,	// (0x0006a0b8) list_single_number_pane_t1_ParamLimits

0xeb9b,	// (0x0006a0b8) list_single_number_pane_t1

0xbc8c,	// (0x000671a9) list_single_number_pane_t2_ParamLimits

0xbc8c,	// (0x000671a9) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0006ae7c) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0006ae7c) list_single_number_pane_t

0xa239,	// (0x00065756) list_single_graphic_pane_g1_ParamLimits

0xa239,	// (0x00065756) list_single_graphic_pane_g1

0x839a,	// (0x000638b7) list_single_graphic_pane_g2_ParamLimits

0x839a,	// (0x000638b7) list_single_graphic_pane_g2

0x04f5,	// (0x0005ba12) list_single_graphic_pane_g3_ParamLimits

0x04f5,	// (0x0005ba12) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0006aade) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0006aade) list_single_graphic_pane_g

0xa245,	// (0x00065762) list_single_graphic_pane_t1_ParamLimits

0xa245,	// (0x00065762) list_single_graphic_pane_t1

0xa25b,	// (0x00065778) list_single_heading_pane_g1_ParamLimits

0xa25b,	// (0x00065778) list_single_heading_pane_g1

0x04f5,	// (0x0005ba12) list_single_heading_pane_g2_ParamLimits

0x04f5,	// (0x0005ba12) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0006aae5) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0006aae5) list_single_heading_pane_g

0xa26e,	// (0x0006578b) list_single_heading_pane_t1_ParamLimits

0xa26e,	// (0x0006578b) list_single_heading_pane_t1

0xa284,	// (0x000657a1) list_single_heading_pane_t2_ParamLimits

0xa284,	// (0x000657a1) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0006aaea) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0006aaea) list_single_heading_pane_t

0x839a,	// (0x000638b7) list_single_number_heading_pane_g1_ParamLimits

0x839a,	// (0x000638b7) list_single_number_heading_pane_g1

0x04f5,	// (0x0005ba12) list_single_number_heading_pane_g2_ParamLimits

0x04f5,	// (0x0005ba12) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0006aaef) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0006aaef) list_single_number_heading_pane_g

0xc4a3,	// (0x000679c0) list_single_number_heading_pane_t1_ParamLimits

0xc4a3,	// (0x000679c0) list_single_number_heading_pane_t1

0xa296,	// (0x000657b3) list_single_number_heading_pane_t2_ParamLimits

0xa296,	// (0x000657b3) list_single_number_heading_pane_t2

0xc4b9,	// (0x000679d6) list_single_number_heading_pane_t3_ParamLimits

0xc4b9,	// (0x000679d6) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0006aaf4) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0006aaf4) list_single_number_heading_pane_t

0xa2a8,	// (0x000657c5) list_single_graphic_heading_pane_g1_ParamLimits

0xa2a8,	// (0x000657c5) list_single_graphic_heading_pane_g1

0xa2c0,	// (0x000657dd) list_single_graphic_heading_pane_g4_ParamLimits

0xa2c0,	// (0x000657dd) list_single_graphic_heading_pane_g4

0x04f5,	// (0x0005ba12) list_single_graphic_heading_pane_g5_ParamLimits

0x04f5,	// (0x0005ba12) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0006aafb) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0006aafb) list_single_graphic_heading_pane_g

0xc4a3,	// (0x000679c0) list_single_graphic_heading_pane_t1_ParamLimits

0xc4a3,	// (0x000679c0) list_single_graphic_heading_pane_t1

0xa2d1,	// (0x000657ee) list_single_graphic_heading_pane_t2_ParamLimits

0xa2d1,	// (0x000657ee) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0006ab02) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0006ab02) list_single_graphic_heading_pane_t

0x3bb8,	// (0x0005f0d5) list_single_large_graphic_pane_g1_ParamLimits

0x3bb8,	// (0x0005f0d5) list_single_large_graphic_pane_g1

0x839a,	// (0x000638b7) list_single_large_graphic_pane_g2_ParamLimits

0x839a,	// (0x000638b7) list_single_large_graphic_pane_g2

0x04f5,	// (0x0005ba12) list_single_large_graphic_pane_g3_ParamLimits

0x04f5,	// (0x0005ba12) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0006ab07) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0006ab07) list_single_large_graphic_pane_g

0x2880,	// (0x0005dd9d) wait_border_pane_g2_copy1

0xa2e9,	// (0x00065806) list_single_large_graphic_pane_g4_cp2

0xc4a3,	// (0x000679c0) list_single_large_graphic_pane_t1_ParamLimits

0xc4a3,	// (0x000679c0) list_single_large_graphic_pane_t1

0x50b4,	// (0x000605d1) list_double_pane_g1_ParamLimits

0x50b4,	// (0x000605d1) list_double_pane_g1

0xa2f1,	// (0x0006580e) list_double_pane_g2_ParamLimits

0xa2f1,	// (0x0006580e) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0006ab0e) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0006ab0e) list_double_pane_g

0xa2fd,	// (0x0006581a) list_double_pane_t1_ParamLimits

0xa2fd,	// (0x0006581a) list_double_pane_t1

0xa313,	// (0x00065830) list_double_pane_t2_ParamLimits

0xa313,	// (0x00065830) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0006ab13) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0006ab13) list_double_pane_t

0xa325,	// (0x00065842) list_double2_pane_g1_ParamLimits

0xa325,	// (0x00065842) list_double2_pane_g1

0xa336,	// (0x00065853) list_double2_pane_g2_ParamLimits

0xa336,	// (0x00065853) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0006ab18) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0006ab18) list_double2_pane_g

0xa342,	// (0x0006585f) list_double2_pane_t1_ParamLimits

0xa342,	// (0x0006585f) list_double2_pane_t1

0xa358,	// (0x00065875) list_double2_pane_t2_ParamLimits

0xa358,	// (0x00065875) list_double2_pane_t2

0x0001,

0xf600,	// (0x0006ab1d) list_double2_pane_t_ParamLimits

0xf600,	// (0x0006ab1d) list_double2_pane_t

0x50b4,	// (0x000605d1) list_double_number_pane_g1_ParamLimits

0x50b4,	// (0x000605d1) list_double_number_pane_g1

0xa2f1,	// (0x0006580e) list_double_number_pane_g2_ParamLimits

0xa2f1,	// (0x0006580e) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0006ab0e) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0006ab0e) list_double_number_pane_g

0xa36a,	// (0x00065887) list_double_number_pane_t1_ParamLimits

0xa36a,	// (0x00065887) list_double_number_pane_t1

0xa37c,	// (0x00065899) list_double_number_pane_t2_ParamLimits

0xa37c,	// (0x00065899) list_double_number_pane_t2

0xa392,	// (0x000658af) list_double_number_pane_t3_ParamLimits

0xa392,	// (0x000658af) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0006ab22) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0006ab22) list_double_number_pane_t

0xa3a4,	// (0x000658c1) list_double_graphic_pane_g1_ParamLimits

0xa3a4,	// (0x000658c1) list_double_graphic_pane_g1

0xa3b0,	// (0x000658cd) list_double_graphic_pane_g2_ParamLimits

0xa3b0,	// (0x000658cd) list_double_graphic_pane_g2

0xa3bf,	// (0x000658dc) list_double_graphic_pane_g3_ParamLimits

0xa3bf,	// (0x000658dc) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0006ab29) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0006ab29) list_double_graphic_pane_g

0xa3d7,	// (0x000658f4) list_double_graphic_pane_t1_ParamLimits

0xa3d7,	// (0x000658f4) list_double_graphic_pane_t1

0xa3ed,	// (0x0006590a) list_double_graphic_pane_t2_ParamLimits

0xa3ed,	// (0x0006590a) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0006ab32) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0006ab32) list_double_graphic_pane_t

0xa3ff,	// (0x0006591c) list_double2_graphic_pane_g1_ParamLimits

0xa3ff,	// (0x0006591c) list_double2_graphic_pane_g1

0xa40b,	// (0x00065928) list_double2_graphic_pane_g2_ParamLimits

0xa40b,	// (0x00065928) list_double2_graphic_pane_g2

0xa417,	// (0x00065934) list_double2_graphic_pane_g3_ParamLimits

0xa417,	// (0x00065934) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0006ab37) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0006ab37) list_double2_graphic_pane_g

0xa423,	// (0x00065940) list_double2_graphic_pane_t1_ParamLimits

0xa423,	// (0x00065940) list_double2_graphic_pane_t1

0xa439,	// (0x00065956) list_double2_graphic_pane_t2_ParamLimits

0xa439,	// (0x00065956) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0006ab3e) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0006ab3e) list_double2_graphic_pane_t

0xa44b,	// (0x00065968) list_double_large_graphic_pane_g1_ParamLimits

0xa44b,	// (0x00065968) list_double_large_graphic_pane_g1

0xa476,	// (0x00065993) list_double_large_graphic_pane_g2_ParamLimits

0xa476,	// (0x00065993) list_double_large_graphic_pane_g2

0xa2f1,	// (0x0006580e) list_double_large_graphic_pane_g3_ParamLimits

0xa2f1,	// (0x0006580e) list_double_large_graphic_pane_g3

0xa48c,	// (0x000659a9) list_double_large_graphic_pane_g4_ParamLimits

0xa48c,	// (0x000659a9) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0006ab43) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0006ab43) list_double_large_graphic_pane_g

0xa49f,	// (0x000659bc) list_double_large_graphic_pane_t1_ParamLimits

0xa49f,	// (0x000659bc) list_double_large_graphic_pane_t1

0xa4b8,	// (0x000659d5) list_double_large_graphic_pane_t2_ParamLimits

0xa4b8,	// (0x000659d5) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0006ab4e) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0006ab4e) list_double_large_graphic_pane_t

0xa4ca,	// (0x000659e7) list_double2_large_graphic_pane_g1_ParamLimits

0xa4ca,	// (0x000659e7) list_double2_large_graphic_pane_g1

0xa4d6,	// (0x000659f3) list_double2_large_graphic_pane_g2_ParamLimits

0xa4d6,	// (0x000659f3) list_double2_large_graphic_pane_g2

0xa417,	// (0x00065934) list_double2_large_graphic_pane_g3_ParamLimits

0xa417,	// (0x00065934) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0006ab53) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0006ab53) list_double2_large_graphic_pane_g

0xa4e7,	// (0x00065a04) list_double2_large_graphic_pane_t1_ParamLimits

0xa4e7,	// (0x00065a04) list_double2_large_graphic_pane_t1

0xa4fd,	// (0x00065a1a) list_double2_large_graphic_pane_t2_ParamLimits

0xa4fd,	// (0x00065a1a) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0006ab5a) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0006ab5a) list_double2_large_graphic_pane_t

0xa50f,	// (0x00065a2c) list_double_heading_pane_g1_ParamLimits

0xa50f,	// (0x00065a2c) list_double_heading_pane_g1

0xa520,	// (0x00065a3d) list_double_heading_pane_g2_ParamLimits

0xa520,	// (0x00065a3d) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0006ab5f) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0006ab5f) list_double_heading_pane_g

0xa52c,	// (0x00065a49) list_double_heading_pane_t1_ParamLimits

0xa52c,	// (0x00065a49) list_double_heading_pane_t1

0xa542,	// (0x00065a5f) list_double_heading_pane_t2_ParamLimits

0xa542,	// (0x00065a5f) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0006ab64) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0006ab64) list_double_heading_pane_t

0xc4cb,	// (0x000679e8) list_double_graphic_heading_pane_g1_ParamLimits

0xc4cb,	// (0x000679e8) list_double_graphic_heading_pane_g1

0xa50f,	// (0x00065a2c) list_double_graphic_heading_pane_g2_ParamLimits

0xa50f,	// (0x00065a2c) list_double_graphic_heading_pane_g2

0xa520,	// (0x00065a3d) list_double_graphic_heading_pane_g3_ParamLimits

0xa520,	// (0x00065a3d) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0006ab69) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0006ab69) list_double_graphic_heading_pane_g

0xa554,	// (0x00065a71) list_double_graphic_heading_pane_t1_ParamLimits

0xa554,	// (0x00065a71) list_double_graphic_heading_pane_t1

0xa56a,	// (0x00065a87) list_double_graphic_heading_pane_t2_ParamLimits

0xa56a,	// (0x00065a87) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0006ab70) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0006ab70) list_double_graphic_heading_pane_t

0xa57c,	// (0x00065a99) list_double_time_pane_g1_ParamLimits

0xa57c,	// (0x00065a99) list_double_time_pane_g1

0xa58d,	// (0x00065aaa) list_double_time_pane_g2_ParamLimits

0xa58d,	// (0x00065aaa) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0006ab75) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0006ab75) list_double_time_pane_g

0xa599,	// (0x00065ab6) list_double_time_pane_t1_ParamLimits

0xa599,	// (0x00065ab6) list_double_time_pane_t1

0xa5af,	// (0x00065acc) list_double_time_pane_t2_ParamLimits

0xa5af,	// (0x00065acc) list_double_time_pane_t2

0xa5c1,	// (0x00065ade) list_double_time_pane_t3_ParamLimits

0xa5c1,	// (0x00065ade) list_double_time_pane_t3

0xa5d3,	// (0x00065af0) list_double_time_pane_t4_ParamLimits

0xa5d3,	// (0x00065af0) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0006ab7a) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0006ab7a) list_double_time_pane_t

0xa5e5,	// (0x00065b02) list_setting_pane_g1_ParamLimits

0xa5e5,	// (0x00065b02) list_setting_pane_g1

0xa5f1,	// (0x00065b0e) list_setting_pane_g2_ParamLimits

0xa5f1,	// (0x00065b0e) list_setting_pane_g2

0x0001,

0xf666,	// (0x0006ab83) list_setting_pane_g_ParamLimits

0xf666,	// (0x0006ab83) list_setting_pane_g

0xa5fd,	// (0x00065b1a) list_setting_pane_t1_ParamLimits

0xa5fd,	// (0x00065b1a) list_setting_pane_t1

0xa617,	// (0x00065b34) list_setting_pane_t2_ParamLimits

0xa617,	// (0x00065b34) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0006ab88) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0006ab88) list_setting_pane_t

0xa656,	// (0x00065b73) set_value_pane_cp_ParamLimits

0xa656,	// (0x00065b73) set_value_pane_cp

0xa664,	// (0x00065b81) list_setting_number_pane_g1_ParamLimits

0xa664,	// (0x00065b81) list_setting_number_pane_g1

0xa670,	// (0x00065b8d) list_setting_number_pane_g2_ParamLimits

0xa670,	// (0x00065b8d) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0006ab8f) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0006ab8f) list_setting_number_pane_g

0xa67c,	// (0x00065b99) list_setting_number_pane_t1_ParamLimits

0xa67c,	// (0x00065b99) list_setting_number_pane_t1

0xa695,	// (0x00065bb2) list_setting_number_pane_t2_ParamLimits

0xa695,	// (0x00065bb2) list_setting_number_pane_t2

0xa6af,	// (0x00065bcc) list_setting_number_pane_t3_ParamLimits

0xa6af,	// (0x00065bcc) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0006ab94) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0006ab94) list_setting_number_pane_t

0xa656,	// (0x00065b73) set_value_pane_ParamLimits

0xa656,	// (0x00065b73) set_value_pane

0x818d,	// (0x000636aa) bg_set_opt_pane_ParamLimits

0x818d,	// (0x000636aa) bg_set_opt_pane

0xc4d7,	// (0x000679f4) set_value_pane_t1

0x81ae,	// (0x000636cb) slider_set_pane_cp3

0x81b7,	// (0x000636d4) volume_small_pane_cp

0x81c0,	// (0x000636dd) list_form_gen_pane

0x81c9,	// (0x000636e6) scroll_pane_cp8

0xa6f2,	// (0x00065c0f) form_field_data_pane_ParamLimits

0xa6f2,	// (0x00065c0f) form_field_data_pane

0xa70f,	// (0x00065c2c) form_field_data_wide_pane_ParamLimits

0xa70f,	// (0x00065c2c) form_field_data_wide_pane

0xa733,	// (0x00065c50) form_field_popup_pane_ParamLimits

0xa733,	// (0x00065c50) form_field_popup_pane

0xc4f5,	// (0x00067a12) form_field_popup_wide_pane_ParamLimits

0xc4f5,	// (0x00067a12) form_field_popup_wide_pane

0xc516,	// (0x00067a33) form_field_slider_pane_ParamLimits

0xc516,	// (0x00067a33) form_field_slider_pane

0xc529,	// (0x00067a46) form_field_slider_wide_pane_ParamLimits

0xc529,	// (0x00067a46) form_field_slider_wide_pane

0x81da,	// (0x000636f7) data_form_pane

0xa75f,	// (0x00065c7c) form_field_data_pane_t1

0x81e6,	// (0x00063703) input_focus_pane

0xe913,	// (0x00069e30) data_form_wide_pane

0xe930,	// (0x00069e4d) form_field_data_wide_pane_t1

0x6369,	// (0x00061886) input_focus_pane_cp6

0xa779,	// (0x00065c96) form_field_popup_pane_t1

0x81e6,	// (0x00063703) input_focus_pane_cp7

0x8214,	// (0x00063731) list_form_pane

0xe95a,	// (0x00069e77) form_field_popup_wide_pane_t1

0x81e6,	// (0x00063703) input_focus_pane_cp8

0x8220,	// (0x0006373d) list_form_wide_pane

0xa79b,	// (0x00065cb8) form_field_slider_pane_t1_ParamLimits

0xa79b,	// (0x00065cb8) form_field_slider_pane_t1

0xa7b3,	// (0x00065cd0) form_field_slider_pane_t2_ParamLimits

0xa7b3,	// (0x00065cd0) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0006aba4) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0006aba4) form_field_slider_pane_t

0x60fe,	// (0x0006161b) input_focus_pane_cp9_ParamLimits

0x60fe,	// (0x0006161b) input_focus_pane_cp9

0xa7c8,	// (0x00065ce5) slider_cont_pane_ParamLimits

0xa7c8,	// (0x00065ce5) slider_cont_pane

0x822f,	// (0x0006374c) form_field_slider_wide_pane_t1_ParamLimits

0x822f,	// (0x0006374c) form_field_slider_wide_pane_t1

0xe96f,	// (0x00069e8c) form_field_slider_wide_pane_t2_ParamLimits

0xe96f,	// (0x00069e8c) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0006aba9) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0006aba9) form_field_slider_wide_pane_t

0x60fe,	// (0x0006161b) input_focus_pane_cp10_ParamLimits

0x60fe,	// (0x0006161b) input_focus_pane_cp10

0xa7dc,	// (0x00065cf9) slider_cont_pane_cp1_ParamLimits

0xa7dc,	// (0x00065cf9) slider_cont_pane_cp1

0xa7f0,	// (0x00065d0d) slider_form_pane_cp

0x8241,	// (0x0006375e) input_focus_pane_g1

0x8249,	// (0x00063766) input_focus_pane_g2

0x8251,	// (0x0006376e) input_focus_pane_g3

0x8259,	// (0x00063776) input_focus_pane_g4

0x8261,	// (0x0006377e) input_focus_pane_g5

0x8269,	// (0x00063786) input_focus_pane_g6

0x8271,	// (0x0006378e) input_focus_pane_g7

0x8279,	// (0x00063796) input_focus_pane_g8

0x8281,	// (0x0006379e) input_focus_pane_g9

0x5f67,	// (0x00061484) input_focus_pane_g10

0x0009,

0xf691,	// (0x0006abae) input_focus_pane_g

0x2889,	// (0x0005dda6) wait_border_pane_g3_copy1

0xa7f8,	// (0x00065d15) data_form_pane_t1

0x5f67,	// (0x00061484) wait_anim_pane_g1_copy1

0xbc9e,	// (0x000671bb) data_form_wide_pane_t1

0xe981,	// (0x00069e9e) list_form_graphic_pane_cp_ParamLimits

0xe981,	// (0x00069e9e) list_form_graphic_pane_cp

0x37e8,	// (0x0005ed05) slider_form_pane_g1

0x37f1,	// (0x0005ed0e) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0006aeac) slider_form_pane_g

0xa814,	// (0x00065d31) list_form_graphic_pane_ParamLimits

0xa814,	// (0x00065d31) list_form_graphic_pane

0xe993,	// (0x00069eb0) list_form_graphic_pane_g1

0xe99b,	// (0x00069eb8) list_form_graphic_pane_t1_ParamLimits

0xe99b,	// (0x00069eb8) list_form_graphic_pane_t1

0x5fcb,	// (0x000614e8) list_highlight_pane_cp5_ParamLimits

0x5fcb,	// (0x000614e8) list_highlight_pane_cp5

0xa825,	// (0x00065d42) find_pane_g1

0x8289,	// (0x000637a6) input_find_pane

0xa82e,	// (0x00065d4b) input_find_pane_g1_ParamLimits

0xa82e,	// (0x00065d4b) input_find_pane_g1

0xa83a,	// (0x00065d57) input_find_pane_t1_ParamLimits

0xa83a,	// (0x00065d57) input_find_pane_t1

0xa84f,	// (0x00065d6c) input_find_pane_t2_ParamLimits

0xa84f,	// (0x00065d6c) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0006abc3) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0006abc3) input_find_pane_t

0x8292,	// (0x000637af) input_focus_pane_cp5_ParamLimits

0x8292,	// (0x000637af) input_focus_pane_cp5

0x82a0,	// (0x000637bd) bg_popup_window_pane_cp2_ParamLimits

0x82a0,	// (0x000637bd) bg_popup_window_pane_cp2

0x82ad,	// (0x000637ca) listscroll_menu_pane_ParamLimits

0x82ad,	// (0x000637ca) listscroll_menu_pane

0xa870,	// (0x00065d8d) popup_submenu_window_ParamLimits

0xa870,	// (0x00065d8d) popup_submenu_window

0x82b9,	// (0x000637d6) find_popup_pane_g1

0x82c1,	// (0x000637de) input_popup_find_pane_cp

0x8292,	// (0x000637af) input_focus_pane_cp4_ParamLimits

0x8292,	// (0x000637af) input_focus_pane_cp4

0x82cb,	// (0x000637e8) input_popup_find_pane_t1_ParamLimits

0x82cb,	// (0x000637e8) input_popup_find_pane_t1

0x5f71,	// (0x0006148e) bg_popup_sub_pane_cp

0x82f9,	// (0x00063816) listscroll_popup_sub_pane

0x8301,	// (0x0006381e) list_submenu_pane_ParamLimits

0x8301,	// (0x0006381e) list_submenu_pane

0x8312,	// (0x0006382f) scroll_pane_cp4

0x831a,	// (0x00063837) list_single_popup_submenu_pane_ParamLimits

0x831a,	// (0x00063837) list_single_popup_submenu_pane

0x832f,	// (0x0006384c) list_single_popup_submenu_pane_g1

0x8337,	// (0x00063854) list_single_popup_submenu_pane_t1_ParamLimits

0x8337,	// (0x00063854) list_single_popup_submenu_pane_t1

0x60fe,	// (0x0006161b) bg_active_tab_pane_cp1_ParamLimits

0x60fe,	// (0x0006161b) bg_active_tab_pane_cp1

0xa8ae,	// (0x00065dcb) tabs_2_active_pane_g1

0xa8b6,	// (0x00065dd3) tabs_2_active_pane_t1

0x60fe,	// (0x0006161b) bg_passive_tab_pane_cp1_ParamLimits

0x60fe,	// (0x0006161b) bg_passive_tab_pane_cp1

0xa8ae,	// (0x00065dcb) tabs_2_passive_pane_g1

0xa8b6,	// (0x00065dd3) tabs_2_passive_pane_t1

0x5fcb,	// (0x000614e8) bg_active_tab_pane_cp4

0xa8c8,	// (0x00065de5) tabs_2_long_active_pane_t1

0x0122,	// (0x0005b63f) bg_passive_tab_pane_cp4

0x052e,	// (0x0005ba4b) list_single_midp_graphic_pane_g4_ParamLimits

0x5fcb,	// (0x000614e8) bg_active_tab_pane_cp5

0xa8db,	// (0x00065df8) tabs_3_long_active_pane_t1

0x0122,	// (0x0005b63f) bg_passive_tab_pane_cp5

0x052e,	// (0x0005ba4b) list_single_midp_graphic_pane_g4

0x5fcb,	// (0x000614e8) bg_popup_window_pane_cp13_ParamLimits

0x5fcb,	// (0x000614e8) bg_popup_window_pane_cp13

0x8355,	// (0x00063872) listscroll_popup_fast_pane_ParamLimits

0x8355,	// (0x00063872) listscroll_popup_fast_pane

0x8364,	// (0x00063881) grid_popup_fast_pane_ParamLimits

0x8364,	// (0x00063881) grid_popup_fast_pane

0x8376,	// (0x00063893) scroll_pane_cp9_ParamLimits

0x8376,	// (0x00063893) scroll_pane_cp9

0x5336,	// (0x00060853) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5336,	// (0x00060853) list_single_graphic_hl_pane_t1_cp2

0x8b2a,	// (0x00064047) input_focus_pane_cp20_ParamLimits

0x8b2a,	// (0x00064047) input_focus_pane_cp20

0x8b38,	// (0x00064055) query_popup_data_pane_t1_ParamLimits

0x8b38,	// (0x00064055) query_popup_data_pane_t1

0x8b4b,	// (0x00064068) query_popup_data_pane_t2_ParamLimits

0x8b4b,	// (0x00064068) query_popup_data_pane_t2

0x8b91,	// (0x000640ae) query_popup_data_pane_t3_ParamLimits

0x8b91,	// (0x000640ae) query_popup_data_pane_t3

0x8bd2,	// (0x000640ef) query_popup_data_pane_t4_ParamLimits

0x8bd2,	// (0x000640ef) query_popup_data_pane_t4

0x8c0e,	// (0x0006412b) query_popup_data_pane_t5_ParamLimits

0x8c0e,	// (0x0006412b) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0006abc8) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0006abc8) query_popup_data_pane_t

0x8241,	// (0x0006375e) bg_set_opt_pane_g1

0x8249,	// (0x00063766) bg_set_opt_pane_g2

0x8251,	// (0x0006376e) bg_set_opt_pane_g3

0x8259,	// (0x00063776) bg_set_opt_pane_g4

0x8261,	// (0x0006377e) bg_set_opt_pane_g5

0x8269,	// (0x00063786) bg_set_opt_pane_g6

0x8271,	// (0x0006378e) bg_set_opt_pane_g7

0x8279,	// (0x00063796) bg_set_opt_pane_g8

0x8281,	// (0x0006379e) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0006abd3) bg_set_opt_pane_g

0xf352,	// (0x0006a86f) control_top_pane_stacon_ParamLimits

0xf352,	// (0x0006a86f) control_top_pane_stacon

0xf3a5,	// (0x0006a8c2) signal_pane_stacon_ParamLimits

0xf3a5,	// (0x0006a8c2) signal_pane_stacon

0x9025,	// (0x00064542) stacon_top_pane_g1_ParamLimits

0x9025,	// (0x00064542) stacon_top_pane_g1

0xf3ca,	// (0x0006a8e7) title_pane_stacon_ParamLimits

0xf3ca,	// (0x0006a8e7) title_pane_stacon

0xf3f4,	// (0x0006a911) uni_indicator_pane_stacon_ParamLimits

0xf3f4,	// (0x0006a911) uni_indicator_pane_stacon

0xf40c,	// (0x0006a929) battery_pane_stacon_ParamLimits

0xf40c,	// (0x0006a929) battery_pane_stacon

0xf450,	// (0x0006a96d) control_bottom_pane_stacon_ParamLimits

0xf450,	// (0x0006a96d) control_bottom_pane_stacon

0xf473,	// (0x0006a990) navi_pane_stacon_ParamLimits

0xf473,	// (0x0006a990) navi_pane_stacon

0x9047,	// (0x00064564) stacon_bottom_pane_g1_ParamLimits

0x9047,	// (0x00064564) stacon_bottom_pane_g1

0xf0b8,	// (0x0006a5d5) aid_levels_signal_lsc_ParamLimits

0xf0b8,	// (0x0006a5d5) aid_levels_signal_lsc

0xf0cf,	// (0x0006a5ec) signal_pane_stacon_g1_ParamLimits

0xf0cf,	// (0x0006a5ec) signal_pane_stacon_g1

0xf0e3,	// (0x0006a600) signal_pane_stacon_g2_ParamLimits

0xf0e3,	// (0x0006a600) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0006abe6) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0006abe6) signal_pane_stacon_g

0xf118,	// (0x0006a635) title_pane_stacon_t1_ParamLimits

0xf118,	// (0x0006a635) title_pane_stacon_t1

0x8c52,	// (0x0006416f) uni_indicator_pane_stacon_g1

0x8c5c,	// (0x00064179) uni_indicator_pane_stacon_g2

0x8c66,	// (0x00064183) uni_indicator_pane_stacon_g3

0x8c70,	// (0x0006418d) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0006abf2) uni_indicator_pane_stacon_g

0xf13d,	// (0x0006a65a) control_top_pane_stacon_g1

0xf145,	// (0x0006a662) control_top_pane_stacon_t1_ParamLimits

0xf145,	// (0x0006a662) control_top_pane_stacon_t1

0xf17c,	// (0x0006a699) aid_levels_battery_lsc_ParamLimits

0xf17c,	// (0x0006a699) aid_levels_battery_lsc

0xf194,	// (0x0006a6b1) battery_pane_stacon_g1_ParamLimits

0xf194,	// (0x0006a6b1) battery_pane_stacon_g1

0xf1a7,	// (0x0006a6c4) battery_pane_stacon_g2_ParamLimits

0xf1a7,	// (0x0006a6c4) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0006abfb) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0006abfb) battery_pane_stacon_g

0xf1e5,	// (0x0006a702) navi_icon_pane_stacon

0xf1f9,	// (0x0006a716) navi_navi_pane_stacon

0xf1e5,	// (0x0006a702) navi_text_pane_stacon

0xf13d,	// (0x0006a65a) control_bottom_pane_stacon_g1

0xf20f,	// (0x0006a72c) control_bottom_pane_stacon_t1_ParamLimits

0xf20f,	// (0x0006a72c) control_bottom_pane_stacon_t1

0xa8ed,	// (0x00065e0a) grid_app_pane_ParamLimits

0xa8ed,	// (0x00065e0a) grid_app_pane

0xa925,	// (0x00065e42) scroll_pane_cp15_ParamLimits

0xa925,	// (0x00065e42) scroll_pane_cp15

0xa93a,	// (0x00065e57) cell_app_pane_ParamLimits

0xa93a,	// (0x00065e57) cell_app_pane

0xa987,	// (0x00065ea4) cell_app_pane_g1_ParamLimits

0xa987,	// (0x00065ea4) cell_app_pane_g1

0x8c94,	// (0x000641b1) cell_app_pane_g2_ParamLimits

0x8c94,	// (0x000641b1) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0006ac00) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0006ac00) cell_app_pane_g

0x8ca0,	// (0x000641bd) cell_app_pane_t1_ParamLimits

0x8ca0,	// (0x000641bd) cell_app_pane_t1

0x8cb7,	// (0x000641d4) grid_highlight_pane_ParamLimits

0x8cb7,	// (0x000641d4) grid_highlight_pane

0x8241,	// (0x0006375e) cell_highlight_pane_g1

0x8249,	// (0x00063766) cell_highlight_pane_g2

0x8251,	// (0x0006376e) cell_highlight_pane_g3

0x8259,	// (0x00063776) cell_highlight_pane_g4

0x8261,	// (0x0006377e) cell_highlight_pane_g5

0x8269,	// (0x00063786) cell_highlight_pane_g6

0x8271,	// (0x0006378e) cell_highlight_pane_g7

0x8279,	// (0x00063796) cell_highlight_pane_g8

0x8281,	// (0x0006379e) cell_highlight_pane_g9

0x5f67,	// (0x00061484) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0006abae) cell_highlight_pane_g

0x8cc8,	// (0x000641e5) bg_scroll_pane

0xf250,	// (0x0006a76d) scroll_handle_pane

0x8d0f,	// (0x0006422c) scroll_bg_pane_g1

0x8d24,	// (0x00064241) scroll_bg_pane_g2

0x8d3c,	// (0x00064259) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0006ac05) scroll_bg_pane_g

0x8d51,	// (0x0006426e) scroll_handle_focus_pane_ParamLimits

0x8d51,	// (0x0006426e) scroll_handle_focus_pane

0x8d0f,	// (0x0006422c) scroll_handle_pane_g1

0x8d5e,	// (0x0006427b) scroll_handle_pane_g2

0x8d3c,	// (0x00064259) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0006ac0c) scroll_handle_pane_g

0x8292,	// (0x000637af) bg_popup_sub_pane_cp21_ParamLimits

0x8292,	// (0x000637af) bg_popup_sub_pane_cp21

0x8d72,	// (0x0006428f) popup_fep_japan_predictive_window_t1_ParamLimits

0x8d72,	// (0x0006428f) popup_fep_japan_predictive_window_t1

0x8d89,	// (0x000642a6) popup_fep_japan_predictive_window_t2_ParamLimits

0x8d89,	// (0x000642a6) popup_fep_japan_predictive_window_t2

0x8dbc,	// (0x000642d9) popup_fep_japan_predictive_window_t3_ParamLimits

0x8dbc,	// (0x000642d9) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0006ac13) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0006ac13) popup_fep_japan_predictive_window_t

0x5f71,	// (0x0006148e) bg_popup_sub_pane_cp23

0x8df3,	// (0x00064310) listscroll_japin_cand_pane

0x8dfb,	// (0x00064318) popup_fep_japan_candidate_window_t1

0x8e09,	// (0x00064326) candidate_pane_ParamLimits

0x8e09,	// (0x00064326) candidate_pane

0x8e1b,	// (0x00064338) scroll_pane_cp30

0x8e25,	// (0x00064342) list_single_popup_jap_candidate_pane_ParamLimits

0x8e25,	// (0x00064342) list_single_popup_jap_candidate_pane

0x5f71,	// (0x0006148e) list_highlight_pane_cp30

0x8e39,	// (0x00064356) list_single_popup_jap_candidate_pane_t1

0xa9b0,	// (0x00065ecd) level_1_signal

0xa9c2,	// (0x00065edf) level_2_signal

0xa9d5,	// (0x00065ef2) level_3_signal

0xa9e8,	// (0x00065f05) level_4_signal

0xa9fb,	// (0x00065f18) level_5_signal

0xaa0e,	// (0x00065f2b) level_6_signal

0xaa21,	// (0x00065f3e) level_7_signal

0xa9b0,	// (0x00065ecd) level_1_battery

0xa9c2,	// (0x00065edf) level_2_battery

0xa9d5,	// (0x00065ef2) level_3_battery

0xa9e8,	// (0x00065f05) level_4_battery

0xa9fb,	// (0x00065f18) level_5_battery

0xaa0e,	// (0x00065f2b) level_6_battery

0xaa21,	// (0x00065f3e) level_7_battery

0x8e60,	// (0x0006437d) list_menu_pane_ParamLimits

0x8e60,	// (0x0006437d) list_menu_pane

0x8e76,	// (0x00064393) scroll_pane_cp25_ParamLimits

0x8e76,	// (0x00064393) scroll_pane_cp25

0x8e8f,	// (0x000643ac) list_double2_graphic_pane_cp2_ParamLimits

0x8e8f,	// (0x000643ac) list_double2_graphic_pane_cp2

0x8e8f,	// (0x000643ac) list_double2_large_graphic_pane_cp2_ParamLimits

0x8e8f,	// (0x000643ac) list_double2_large_graphic_pane_cp2

0x8e8f,	// (0x000643ac) list_double2_pane_cp2_ParamLimits

0x8e8f,	// (0x000643ac) list_double2_pane_cp2

0x8e8f,	// (0x000643ac) list_double_graphic_pane_cp2_ParamLimits

0x8e8f,	// (0x000643ac) list_double_graphic_pane_cp2

0x8e8f,	// (0x000643ac) list_double_large_graphic_pane_cp2_ParamLimits

0x8e8f,	// (0x000643ac) list_double_large_graphic_pane_cp2

0x8e8f,	// (0x000643ac) list_double_number_pane_cp2_ParamLimits

0x8e8f,	// (0x000643ac) list_double_number_pane_cp2

0x8e8f,	// (0x000643ac) list_double_pane_cp2_ParamLimits

0x8e8f,	// (0x000643ac) list_double_pane_cp2

0xaa47,	// (0x00065f64) list_single_2graphic_pane_cp2_ParamLimits

0xaa47,	// (0x00065f64) list_single_2graphic_pane_cp2

0xaa47,	// (0x00065f64) list_single_graphic_heading_pane_cp2_ParamLimits

0xaa47,	// (0x00065f64) list_single_graphic_heading_pane_cp2

0xaa47,	// (0x00065f64) list_single_graphic_pane_cp2_ParamLimits

0xaa47,	// (0x00065f64) list_single_graphic_pane_cp2

0xaa47,	// (0x00065f64) list_single_heading_pane_cp2_ParamLimits

0xaa47,	// (0x00065f64) list_single_heading_pane_cp2

0x8e9f,	// (0x000643bc) list_single_large_graphic_pane_cp2_ParamLimits

0x8e9f,	// (0x000643bc) list_single_large_graphic_pane_cp2

0xaa47,	// (0x00065f64) list_single_number_heading_pane_cp2_ParamLimits

0xaa47,	// (0x00065f64) list_single_number_heading_pane_cp2

0xaa47,	// (0x00065f64) list_single_number_pane_cp2_ParamLimits

0xaa47,	// (0x00065f64) list_single_number_pane_cp2

0xaa47,	// (0x00065f64) list_single_pane_cp2_ParamLimits

0xaa47,	// (0x00065f64) list_single_pane_cp2

0x8eb8,	// (0x000643d5) bg_popup_sub_pane_cp22

0xf302,	// (0x0006a81f) popup_side_volume_key_window_g1

0xf32c,	// (0x0006a849) popup_side_volume_key_window_t1

0xf34a,	// (0x0006a867) volume_small_pane_cp1

0x60fe,	// (0x0006161b) bg_popup_sub_pane_cp24_ParamLimits

0x60fe,	// (0x0006161b) bg_popup_sub_pane_cp24

0x8ece,	// (0x000643eb) fep_china_uni_candidate_pane_ParamLimits

0x8ece,	// (0x000643eb) fep_china_uni_candidate_pane

0x8ee2,	// (0x000643ff) fep_china_uni_entry_pane

0x8ef2,	// (0x0006440f) popup_fep_china_uni_window_g1

0x8f0e,	// (0x0006442b) fep_china_uni_entry_pane_g1

0x8f18,	// (0x00064435) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0006ac44) fep_china_uni_entry_pane_g

0x8f22,	// (0x0006443f) fep_entry_item_pane

0x8f2c,	// (0x00064449) fep_candidate_item_pane

0x8f34,	// (0x00064451) fep_china_uni_candidate_pane_g1

0x8f3e,	// (0x0006445b) fep_china_uni_candidate_pane_g2

0x8f46,	// (0x00064463) fep_china_uni_candidate_pane_g3

0x8f4e,	// (0x0006446b) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0006ac49) fep_china_uni_candidate_pane_g

0x5f67,	// (0x00061484) fep_entry_item_pane_g1

0x8f58,	// (0x00064475) fep_entry_item_pane_t1_ParamLimits

0x8f58,	// (0x00064475) fep_entry_item_pane_t1

0x8f6e,	// (0x0006448b) fep_candidate_item_pane_t1_ParamLimits

0x8f6e,	// (0x0006448b) fep_candidate_item_pane_t1

0x8f83,	// (0x000644a0) fep_candidate_item_pane_t2_ParamLimits

0x8f83,	// (0x000644a0) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0006ac52) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0006ac52) fep_candidate_item_pane_t

0x5fcb,	// (0x000614e8) list_highlight_pane_cp31_ParamLimits

0x5fcb,	// (0x000614e8) list_highlight_pane_cp31

0x8f95,	// (0x000644b2) level_1_signal_lsc

0x8f9e,	// (0x000644bb) level_2_signal_lsc

0x8fa7,	// (0x000644c4) level_3_signal_lsc

0x8fb0,	// (0x000644cd) level_4_signal_lsc

0x8fb9,	// (0x000644d6) level_5_signal_lsc

0x8fc2,	// (0x000644df) level_6_signal_lsc

0x8fcb,	// (0x000644e8) level_7_signal_lsc

0x8fcb,	// (0x000644e8) level_1_battery_lsc

0x8fd4,	// (0x000644f1) level_2_battery_lsc

0x8fdd,	// (0x000644fa) level_3_battery_lsc

0x8fe6,	// (0x00064503) level_4_battery_lsc

0x8fef,	// (0x0006450c) level_5_battery_lsc

0x8ff8,	// (0x00064515) level_6_battery_lsc

0x8f95,	// (0x000644b2) level_7_battery_lsc

0x9001,	// (0x0006451e) scroll_handle_focus_pane_g1

0x900a,	// (0x00064527) scroll_handle_focus_pane_g2

0x9013,	// (0x00064530) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0006ac57) scroll_handle_focus_pane_g

0xaad9,	// (0x00065ff6) list_single_2graphic_pane_g1_ParamLimits

0xaad9,	// (0x00065ff6) list_single_2graphic_pane_g1

0xa2c0,	// (0x000657dd) list_single_2graphic_pane_g2_ParamLimits

0xa2c0,	// (0x000657dd) list_single_2graphic_pane_g2

0x04f5,	// (0x0005ba12) list_single_2graphic_pane_g3_ParamLimits

0x04f5,	// (0x0005ba12) list_single_2graphic_pane_g3

0xaae5,	// (0x00066002) list_single_2graphic_pane_g4_ParamLimits

0xaae5,	// (0x00066002) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0006ac5e) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0006ac5e) list_single_2graphic_pane_g

0xaaf6,	// (0x00066013) list_single_2graphic_pane_t1_ParamLimits

0xaaf6,	// (0x00066013) list_single_2graphic_pane_t1

0xab24,	// (0x00066041) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xab24,	// (0x00066041) list_double2_graphic_large_graphic_pane_g1

0xa4d6,	// (0x000659f3) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa4d6,	// (0x000659f3) list_double2_graphic_large_graphic_pane_g2

0xa417,	// (0x00065934) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa417,	// (0x00065934) list_double2_graphic_large_graphic_pane_g3

0xab36,	// (0x00066053) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xab36,	// (0x00066053) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0006ac67) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0006ac67) list_double2_graphic_large_graphic_pane_g

0xab42,	// (0x0006605f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xab42,	// (0x0006605f) list_double2_graphic_large_graphic_pane_t1

0xab58,	// (0x00066075) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xab58,	// (0x00066075) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0006ac70) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0006ac70) list_double2_graphic_large_graphic_pane_t

0x90a5,	// (0x000645c2) popup_fast_swap_window_ParamLimits

0x90a5,	// (0x000645c2) popup_fast_swap_window

0x90c3,	// (0x000645e0) popup_side_volume_key_window

0x90e1,	// (0x000645fe) stacon_top_pane

0x90eb,	// (0x00064608) status_pane_ParamLimits

0x90eb,	// (0x00064608) status_pane

0xac01,	// (0x0006611e) status_small_pane

0x5f71,	// (0x0006148e) control_pane

0x5f71,	// (0x0006148e) stacon_bottom_pane

0x81c9,	// (0x000636e6) scroll_pane_cp121

0x81c0,	// (0x000636dd) set_content_pane

0xab6a,	// (0x00066087) bg_active_tab_pane_g1_cp1

0x901c,	// (0x00064539) bg_active_tab_pane_g2_cp1

0xab73,	// (0x00066090) bg_active_tab_pane_g3_cp1

0xab6a,	// (0x00066087) bg_passive_tab_pane_g1_cp1

0x901c,	// (0x00064539) bg_passive_tab_pane_g2_cp1

0xab73,	// (0x00066090) bg_passive_tab_pane_g3_cp1

0xab7c,	// (0x00066099) bg_active_tab_pane_g1_cp2

0x901c,	// (0x00064539) bg_active_tab_pane_g2_cp2

0xab85,	// (0x000660a2) bg_active_tab_pane_g3_cp2

0xab7c,	// (0x00066099) bg_passive_tab_pane_g1_cp2

0x901c,	// (0x00064539) bg_passive_tab_pane_g2_cp2

0xab85,	// (0x000660a2) bg_passive_tab_pane_g3_cp2

0xab8e,	// (0x000660ab) bg_active_tab_pane_g1_cp3

0x901c,	// (0x00064539) bg_active_tab_pane_g2_cp3

0xab97,	// (0x000660b4) bg_active_tab_pane_g3_cp3

0xab8e,	// (0x000660ab) bg_passive_tab_pane_g1_cp3

0x901c,	// (0x00064539) bg_passive_tab_pane_g2_cp3

0xab97,	// (0x000660b4) bg_passive_tab_pane_g3_cp3

0xaba0,	// (0x000660bd) bg_active_tab_pane_g1_cp4

0x901c,	// (0x00064539) bg_active_tab_pane_g2_cp4

0xaba9,	// (0x000660c6) bg_active_tab_pane_g3_cp4

0xaba0,	// (0x000660bd) bg_passive_tab_pane_g1_cp4

0x901c,	// (0x00064539) bg_passive_tab_pane_g2_cp4

0xaba9,	// (0x000660c6) bg_passive_tab_pane_g3_cp4

0x9063,	// (0x00064580) bg_active_tab_pane_g1_cp5

0x901c,	// (0x00064539) bg_active_tab_pane_g2_cp5

0x906c,	// (0x00064589) bg_active_tab_pane_g3_cp5

0x9063,	// (0x00064580) bg_passive_tab_pane_g1_cp5

0x901c,	// (0x00064539) bg_passive_tab_pane_g2_cp5

0x906c,	// (0x00064589) bg_passive_tab_pane_g3_cp5

0x3fd9,	// (0x0005f4f6) list_set_graphic_pane_ParamLimits

0x3fd9,	// (0x0005f4f6) list_set_graphic_pane

0x5f71,	// (0x0006148e) bg_set_opt_pane_cp4

0xabb2,	// (0x000660cf) list_set_graphic_pane_g1_ParamLimits

0xabb2,	// (0x000660cf) list_set_graphic_pane_g1

0xabbe,	// (0x000660db) list_set_graphic_pane_g2_ParamLimits

0xabbe,	// (0x000660db) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0006ac75) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0006ac75) list_set_graphic_pane_g

0x0009,

0xfae2,	// (0x0006afff) volume_small_pane_cp_g

0xabe2,	// (0x000660ff) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xabe2,	// (0x000660ff) list_double2_large_graphic_pane_g1_cp2

0xabf0,	// (0x0006610d) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xabf0,	// (0x0006610d) list_double2_large_graphic_pane_g2_cp2

0x9075,	// (0x00064592) list_double2_large_graphic_pane_g3_cp2

0x907d,	// (0x0006459a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x907d,	// (0x0006459a) list_double2_large_graphic_pane_t1_cp2

0x9093,	// (0x000645b0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9093,	// (0x000645b0) list_double2_large_graphic_pane_t2_cp2

0xc7f3,	// (0x00067d10) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc7f3,	// (0x00067d10) list_double_large_graphic_pane_g1_cp2

0xc806,	// (0x00067d23) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc806,	// (0x00067d23) list_double_large_graphic_pane_g2_cp2

0x91cc,	// (0x000646e9) list_double_large_graphic_pane_g3_cp2

0x3391,	// (0x0005e8ae) list_double_large_graphic_pane_g4_cp

0x3399,	// (0x0005e8b6) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3399,	// (0x0005e8b6) list_double_large_graphic_pane_t1_cp2

0x33b0,	// (0x0005e8cd) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x33b0,	// (0x0005e8cd) list_double_large_graphic_pane_t2_cp2

0xac0c,	// (0x00066129) list_double2_graphic_pane_g1_cp2_ParamLimits

0xac0c,	// (0x00066129) list_double2_graphic_pane_g1_cp2

0xac1a,	// (0x00066137) list_double2_graphic_pane_g2_cp2_ParamLimits

0xac1a,	// (0x00066137) list_double2_graphic_pane_g2_cp2

0xac2b,	// (0x00066148) list_double2_graphic_pane_g3_cp2

0x90f9,	// (0x00064616) list_double2_graphic_pane_t1_cp2_ParamLimits

0x90f9,	// (0x00064616) list_double2_graphic_pane_t1_cp2

0x910f,	// (0x0006462c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x910f,	// (0x0006462c) list_double2_graphic_pane_t2_cp2

0x9121,	// (0x0006463e) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9121,	// (0x0006463e) list_single_number_heading_pane_g1_cp2

0x912d,	// (0x0006464a) list_single_number_heading_pane_g2_cp2

0x9135,	// (0x00064652) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9135,	// (0x00064652) list_single_number_heading_pane_t1_cp2

0xac35,	// (0x00066152) list_single_number_heading_pane_t2_cp2_ParamLimits

0xac35,	// (0x00066152) list_single_number_heading_pane_t2_cp2

0x914b,	// (0x00064668) list_single_number_heading_pane_t3_cp2_ParamLimits

0x914b,	// (0x00064668) list_single_number_heading_pane_t3_cp2

0x9121,	// (0x0006463e) list_single_heading_pane_g1_cp2_ParamLimits

0x9121,	// (0x0006463e) list_single_heading_pane_g1_cp2

0x912d,	// (0x0006464a) list_single_heading_pane_g2_cp2

0x9135,	// (0x00064652) list_single_heading_pane_t1_cp2_ParamLimits

0x9135,	// (0x00064652) list_single_heading_pane_t1_cp2

0xc7df,	// (0x00067cfc) list_single_heading_pane_t2_cp2_ParamLimits

0xc7df,	// (0x00067cfc) list_single_heading_pane_t2_cp2

0x30af,	// (0x0005e5cc) list_double_graphic_pane_g1_cp2_ParamLimits

0x30af,	// (0x0005e5cc) list_double_graphic_pane_g1_cp2

0x30bb,	// (0x0005e5d8) list_double_graphic_pane_g2_cp2_ParamLimits

0x30bb,	// (0x0005e5d8) list_double_graphic_pane_g2_cp2

0x30ca,	// (0x0005e5e7) list_double_graphic_pane_g3_cp2

0x30d2,	// (0x0005e5ef) list_double_graphic_pane_t1_cp2_ParamLimits

0x30d2,	// (0x0005e5ef) list_double_graphic_pane_t1_cp2

0x30e8,	// (0x0005e605) list_double_graphic_pane_t2_cp2_ParamLimits

0x30e8,	// (0x0005e605) list_double_graphic_pane_t2_cp2

0x91c0,	// (0x000646dd) list_double_number_pane_g1_cp2_ParamLimits

0x91c0,	// (0x000646dd) list_double_number_pane_g1_cp2

0x91cc,	// (0x000646e9) list_double_number_pane_g2_cp2

0xc779,	// (0x00067c96) list_double_number_pane_t1_cp2_ParamLimits

0xc779,	// (0x00067c96) list_double_number_pane_t1_cp2

0x3087,	// (0x0005e5a4) list_double_number_pane_t2_cp2_ParamLimits

0x3087,	// (0x0005e5a4) list_double_number_pane_t2_cp2

0x309d,	// (0x0005e5ba) list_double_number_pane_t3_cp2_ParamLimits

0x309d,	// (0x0005e5ba) list_double_number_pane_t3_cp2

0xc6c7,	// (0x00067be4) list_single_graphic_pane_g1_cp2_ParamLimits

0xc6c7,	// (0x00067be4) list_single_graphic_pane_g1_cp2

0x920c,	// (0x00064729) list_single_graphic_pane_g2_cp2_ParamLimits

0x920c,	// (0x00064729) list_single_graphic_pane_g2_cp2

0x9218,	// (0x00064735) list_single_graphic_pane_g3_cp2

0x2f32,	// (0x0005e44f) list_single_graphic_pane_t1_cp2_ParamLimits

0x2f32,	// (0x0005e44f) list_single_graphic_pane_t1_cp2

0x920c,	// (0x00064729) list_single_number_pane_g1_cp2_ParamLimits

0x920c,	// (0x00064729) list_single_number_pane_g1_cp2

0x9218,	// (0x00064735) list_single_number_pane_g2_cp2

0x2f32,	// (0x0005e44f) list_single_number_pane_t1_cp2_ParamLimits

0x2f32,	// (0x0005e44f) list_single_number_pane_t1_cp2

0xc6b3,	// (0x00067bd0) list_single_number_pane_t2_cp2_ParamLimits

0xc6b3,	// (0x00067bd0) list_single_number_pane_t2_cp2

0xabf0,	// (0x0006610d) list_double2_pane_g1_cp2_ParamLimits

0xabf0,	// (0x0006610d) list_double2_pane_g1_cp2

0x9075,	// (0x00064592) list_double2_pane_g2_cp2

0x9198,	// (0x000646b5) list_double2_pane_t1_cp2_ParamLimits

0x9198,	// (0x000646b5) list_double2_pane_t1_cp2

0x91ae,	// (0x000646cb) list_double2_pane_t2_cp2_ParamLimits

0x91ae,	// (0x000646cb) list_double2_pane_t2_cp2

0x91c0,	// (0x000646dd) list_double_pane_g1_cp2_ParamLimits

0x91c0,	// (0x000646dd) list_double_pane_g1_cp2

0x91cc,	// (0x000646e9) list_double_pane_g2_cp2

0x91d4,	// (0x000646f1) list_double_pane_t1_cp2_ParamLimits

0x91d4,	// (0x000646f1) list_double_pane_t1_cp2

0x91ea,	// (0x00064707) list_double_pane_t2_cp2_ParamLimits

0x91ea,	// (0x00064707) list_double_pane_t2_cp2

0x91fc,	// (0x00064719) list_single_pane_cp2_g3

0x920c,	// (0x00064729) list_single_pane_g1_cp2_ParamLimits

0x920c,	// (0x00064729) list_single_pane_g1_cp2

0x9218,	// (0x00064735) list_single_pane_g2_cp2

0x9220,	// (0x0006473d) list_single_pane_t1_cp2_ParamLimits

0x9220,	// (0x0006473d) list_single_pane_t1_cp2

0xac63,	// (0x00066180) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xac63,	// (0x00066180) list_single_large_graphic_pane_g1_cp2

0x839a,	// (0x000638b7) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x839a,	// (0x000638b7) list_single_large_graphic_pane_g2_cp2

0x9238,	// (0x00064755) list_single_large_graphic_pane_g3_cp2

0x9240,	// (0x0006475d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9240,	// (0x0006475d) list_single_large_graphic_pane_g4_cp1

0x925a,	// (0x00064777) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x925a,	// (0x00064777) list_single_large_graphic_pane_t1_cp2

0x2efc,	// (0x0005e419) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2efc,	// (0x0005e419) list_single_graphic_heading_pane_g1_cp2

0xc68e,	// (0x00067bab) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xc68e,	// (0x00067bab) list_single_graphic_heading_pane_g4_cp2

0x9218,	// (0x00064735) list_single_graphic_heading_pane_g5_cp2

0x2f08,	// (0x0005e425) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2f08,	// (0x0005e425) list_single_graphic_heading_pane_t1_cp2

0xc69f,	// (0x00067bbc) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xc69f,	// (0x00067bbc) list_single_graphic_heading_pane_t2_cp2

0x2ebd,	// (0x0005e3da) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2ebd,	// (0x0005e3da) list_single_2graphic_pane_g1_cp2

0xc68e,	// (0x00067bab) list_single_2graphic_pane_g2_cp2_ParamLimits

0xc68e,	// (0x00067bab) list_single_2graphic_pane_g2_cp2

0x9218,	// (0x00064735) list_single_2graphic_pane_g3_cp2

0x2eda,	// (0x0005e3f7) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2eda,	// (0x0005e3f7) list_single_2graphic_pane_g4_cp2

0x2ee6,	// (0x0005e403) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2ee6,	// (0x0005e403) list_single_2graphic_pane_t1_cp2

0x5f67,	// (0x00061484) list_highlight_pane_g10_cp1

0x2a95,	// (0x0005dfb2) list_highlight_pane_g1_cp1

0x2a9d,	// (0x0005dfba) list_highlight_pane_g2_cp1

0x2aa5,	// (0x0005dfc2) list_highlight_pane_g3_cp1

0x2aad,	// (0x0005dfca) list_highlight_pane_g4_cp1

0x2ab5,	// (0x0005dfd2) list_highlight_pane_g5_cp1

0x2abd,	// (0x0005dfda) list_highlight_pane_g6_cp1

0x2ac5,	// (0x0005dfe2) list_highlight_pane_g7_cp1

0x2acd,	// (0x0005dfea) list_highlight_pane_g8_cp1

0x2ad5,	// (0x0005dff2) list_highlight_pane_g9_cp1

0xc654,	// (0x00067b71) form_field_slider_pane_t3

0xc662,	// (0x00067b7f) form_field_slider_pane_t4

0x29d1,	// (0x0005deee) slider_form_pane_ParamLimits

0x29d1,	// (0x0005deee) slider_form_pane

0x5f71,	// (0x0006148e) control_abbreviations

0x5f71,	// (0x0006148e) control_conventions

0x5f71,	// (0x0006148e) control_definitions

0x5f71,	// (0x0006148e) format_table_attribute

0x31bd,	// (0x0005e6da) bg_popup_preview_window_pane_g9

0x5f71,	// (0x0006148e) format_table_data2

0x5f71,	// (0x0006148e) format_table_data3

0x5f71,	// (0x0006148e) format_table_data_example

0x0008,

0x5f71,	// (0x0006148e) intro_purpose

0xf8ef,	// (0x0006ae0c) bg_popup_preview_window_pane_g

0x5f71,	// (0x0006148e) texts_category

0x5f71,	// (0x0006148e) texts_graphics

0x9270,	// (0x0006478d) text_digital

0x927f,	// (0x0006479c) text_primary

0xc53c,	// (0x00067a59) text_primary_small

0xc54b,	// (0x00067a68) text_secondary

0xc55a,	// (0x00067a77) text_title

0x3991,	// (0x0005eeae) bg_passive_tab_pane_g1_cp3_srt

0x901c,	// (0x00064539) bg_passive_tab_pane_g2_cp3_srt

0x399a,	// (0x0005eeb7) bg_passive_tab_pane_g3_cp3_srt

0x60fe,	// (0x0006161b) bg_active_tab_pane_cp3_srt_ParamLimits

0x60fe,	// (0x0006161b) bg_active_tab_pane_cp3_srt

0x39a3,	// (0x0005eec0) tabs_4_active_pane_srt_g1

0xcad7,	// (0x00067ff4) tabs_4_active_pane_srt_t1_ParamLimits

0xcad7,	// (0x00067ff4) tabs_4_active_pane_srt_t1

0x3991,	// (0x0005eeae) bg_active_tab_pane_g1_cp3_copy1

0x901c,	// (0x00064539) bg_active_tab_pane_g2_cp3_copy1

0x399a,	// (0x0005eeb7) bg_active_tab_pane_g3_cp3_copy1

0x5fcb,	// (0x000614e8) tabs_2_long_active_pane_srt_ParamLimits

0x5fcb,	// (0x000614e8) tabs_2_long_active_pane_srt

0x5fcb,	// (0x000614e8) tabs_2_long_passive_pane_srt_ParamLimits

0x5fcb,	// (0x000614e8) tabs_2_long_passive_pane_srt

0x0122,	// (0x0005b63f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0122,	// (0x0005b63f) bg_passive_tab_pane_cp4_srt

0x35f9,	// (0x0005eb16) bg_passive_tab_pane_g1_cp4_srt

0x901c,	// (0x00064539) bg_passive_tab_pane_g2_cp4_srt

0x3602,	// (0x0005eb1f) bg_passive_tab_pane_g3_cp4_srt

0x5fcb,	// (0x000614e8) bg_active_tab_pane_cp4_srt_ParamLimits

0x5fcb,	// (0x000614e8) bg_active_tab_pane_cp4_srt

0xc8c9,	// (0x00067de6) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc8c9,	// (0x00067de6) tabs_2_long_active_pane_srt_t1

0x35f9,	// (0x0005eb16) bg_active_tab_pane_g1_cp4_srt

0x901c,	// (0x00064539) bg_active_tab_pane_g2_cp4_srt

0x3602,	// (0x0005eb1f) bg_active_tab_pane_g3_cp4_srt

0x60fe,	// (0x0006161b) tabs_3_long_active_pane_srt_ParamLimits

0x60fe,	// (0x0006161b) tabs_3_long_active_pane_srt

0x60fe,	// (0x0006161b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x60fe,	// (0x0006161b) tabs_3_long_passive_pane_cp_srt

0x60fe,	// (0x0006161b) tabs_3_long_passive_pane_srt_ParamLimits

0x60fe,	// (0x0006161b) tabs_3_long_passive_pane_srt

0x0122,	// (0x0005b63f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0122,	// (0x0005b63f) bg_passive_tab_pane_cp5_srt

0x9063,	// (0x00064580) bg_passive_tab_pane_g1_cp5_srt

0x901c,	// (0x00064539) bg_passive_tab_pane_g2_cp5_srt

0x906c,	// (0x00064589) bg_passive_tab_pane_g3_cp5_srt

0x5fcb,	// (0x000614e8) bg_active_tab_pane_cp5_srt_ParamLimits

0x5fcb,	// (0x000614e8) bg_active_tab_pane_cp5_srt

0xc8b3,	// (0x00067dd0) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc8b3,	// (0x00067dd0) tabs_3_long_active_pane_srt_t1

0x9063,	// (0x00064580) bg_active_tab_pane_g1_cp5_srt

0x901c,	// (0x00064539) bg_active_tab_pane_g2_cp5_srt

0x906c,	// (0x00064589) bg_active_tab_pane_g3_cp5_srt

0x35d9,	// (0x0005eaf6) navi_text_pane_srt_t1

0x35d1,	// (0x0005eaee) navi_icon_pane_srt_g1

0xeaa3,	// (0x00069fc0) midp_editing_number_pane_srt

0xc569,	// (0x00067a86) midp_ticker_pane_srt

0xeaab,	// (0x00069fc8) midp_ticker_pane_srt_g1

0xeab3,	// (0x00069fd0) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0006ac94) midp_ticker_pane_srt_g

0xeabb,	// (0x00069fd8) midp_ticker_pane_srt_t1

0x35c2,	// (0x0005eadf) midp_editing_number_pane_t1_copy1

0x0122,	// (0x0005b63f) listscroll_midp_pane

0x0122,	// (0x0005b63f) midp_form_pane

0xe9b0,	// (0x00069ecd) midp_info_popup_window_ParamLimits

0xe9b0,	// (0x00069ecd) midp_info_popup_window

0x8292,	// (0x000637af) bg_popup_sub_pane_cp50_ParamLimits

0x8292,	// (0x000637af) bg_popup_sub_pane_cp50

0x26cb,	// (0x0005dbe8) listscroll_midp_info_pane_ParamLimits

0x26cb,	// (0x0005dbe8) listscroll_midp_info_pane

0x26b3,	// (0x0005dbd0) listscroll_form_midp_pane_ParamLimits

0x26b3,	// (0x0005dbd0) listscroll_form_midp_pane

0x26bf,	// (0x0005dbdc) scroll_bar_cp050

0xc648,	// (0x00067b65) list_midp_pane

0x45b3,	// (0x0005fad0) signal_pane_g2_cp

0x25cd,	// (0x0005daea) listscroll_midp_info_pane_t1_ParamLimits

0x25cd,	// (0x0005daea) listscroll_midp_info_pane_t1

0x25e5,	// (0x0005db02) listscroll_midp_info_pane_t2_ParamLimits

0x25e5,	// (0x0005db02) listscroll_midp_info_pane_t2

0x2623,	// (0x0005db40) listscroll_midp_info_pane_t3_ParamLimits

0x2623,	// (0x0005db40) listscroll_midp_info_pane_t3

0x265d,	// (0x0005db7a) listscroll_midp_info_pane_t4_ParamLimits

0x265d,	// (0x0005db7a) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0006ad47) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0006ad47) listscroll_midp_info_pane_t

0x8312,	// (0x0006382f) scroll_pane_cp21

0x2567,	// (0x0005da84) form_midp_field_choice_group_pane

0x2570,	// (0x0005da8d) form_midp_field_text_pane

0x25b3,	// (0x0005dad0) form_midp_field_time_pane

0x25bb,	// (0x0005dad8) form_midp_gauge_slider_pane

0x25c4,	// (0x0005dae1) form_midp_gauge_wait_pane

0x5f71,	// (0x0006148e) form_midp_image_pane

0xbb09,	// (0x00067026) list_single_midp_pane_ParamLimits

0xbb09,	// (0x00067026) list_single_midp_pane

0xc620,	// (0x00067b3d) form_midp_field_text_pane_t1

0x2317,	// (0x0005d834) input_focus_pane_cp050

0x2556,	// (0x0005da73) list_midp_form_text_pane

0x24fa,	// (0x0005da17) form_midp_field_choice_group_pane_t1

0x2508,	// (0x0005da25) input_focus_pane_cp051

0x251c,	// (0x0005da39) list_midp_choice_pane

0x5f71,	// (0x0006148e) status_idle_pane

0x24de,	// (0x0005d9fb) form_midp_field_time_pane_t1

0x5f67,	// (0x00061484) wait_anim_pane_g2_copy1

0x24ec,	// (0x0005da09) form_midp_field_time_pane_t2

0x0001,

0xea0b,	// (0x00069f28) aid_navinavi_width_2_pane

0xf825,	// (0x0006ad42) form_midp_field_time_pane_t

0x5f71,	// (0x0006148e) input_focus_pane_cp052

0x5f71,	// (0x0006148e) bg_input_focus_pane_cp040

0x249e,	// (0x0005d9bb) form_midp_gauge_slider_pane_t1

0x24ac,	// (0x0005d9c9) form_midp_gauge_slider_pane_t2

0xc604,	// (0x00067b21) form_midp_gauge_slider_pane_t3

0xc612,	// (0x00067b2f) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0006ad39) form_midp_gauge_slider_pane_t

0x24d6,	// (0x0005d9f3) form_midp_slider_pane

0x5fcb,	// (0x000614e8) bg_input_focus_pane_cp041_ParamLimits

0x5fcb,	// (0x000614e8) bg_input_focus_pane_cp041

0x246b,	// (0x0005d988) form_midp_gauge_wait_pane_t1_ParamLimits

0x246b,	// (0x0005d988) form_midp_gauge_wait_pane_t1

0x247d,	// (0x0005d99a) form_midp_gauge_wait_pane_t2_ParamLimits

0x247d,	// (0x0005d99a) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0006ad34) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0006ad34) form_midp_gauge_wait_pane_t

0x248f,	// (0x0005d9ac) form_midp_wait_pane_ParamLimits

0x248f,	// (0x0005d9ac) form_midp_wait_pane

0x2433,	// (0x0005d950) form_midp_image_pane_g1

0x243c,	// (0x0005d959) form_midp_image_pane_t1

0x244b,	// (0x0005d968) form_midp_image_pane_t2

0x245a,	// (0x0005d977) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0006ad2d) form_midp_image_pane_t

0x242a,	// (0x0005d947) list_single_midp_pane_g1

0xec4b,	// (0x0006a168) list_single_midp_pane_t1

0xc5ed,	// (0x00067b0a) list_midp_form_item_pane_ParamLimits

0xc5ed,	// (0x00067b0a) list_midp_form_item_pane

0xe9c5,	// (0x00069ee2) list_midp_form_item_pane_t1

0xe9d4,	// (0x00069ef1) midp_ticker_pane_g1

0xe9e0,	// (0x00069efd) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0006ac7a) midp_ticker_pane_g

0xad08,	// (0x00066225) midp_ticker_pane_t1

0xca58,	// (0x00067f75) midp_editing_number_pane_t1

0x3813,	// (0x0005ed30) midp_editing_number_pane

0x3822,	// (0x0005ed3f) midp_ticker_pane

0x35b2,	// (0x0005eacf) ai_message_heading_pane

0x5f71,	// (0x0006148e) bg_popup_window_pane_cp14

0x35ba,	// (0x0005ead7) listscroll_ai_message_pane

0x3538,	// (0x0005ea55) ai_message_heading_pane_g1_ParamLimits

0x3538,	// (0x0005ea55) ai_message_heading_pane_g1

0x3544,	// (0x0005ea61) ai_message_heading_pane_g2_ParamLimits

0x3544,	// (0x0005ea61) ai_message_heading_pane_g2

0x3552,	// (0x0005ea6f) ai_message_heading_pane_g3_ParamLimits

0x3552,	// (0x0005ea6f) ai_message_heading_pane_g3

0x355e,	// (0x0005ea7b) ai_message_heading_pane_g4_ParamLimits

0x355e,	// (0x0005ea7b) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0006ae6e) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0006ae6e) ai_message_heading_pane_g

0x356a,	// (0x0005ea87) ai_message_heading_pane_t1_ParamLimits

0x356a,	// (0x0005ea87) ai_message_heading_pane_t1

0x3584,	// (0x0005eaa1) ai_message_heading_pane_t2_ParamLimits

0x3584,	// (0x0005eaa1) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0006ae77) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0006ae77) ai_message_heading_pane_t

0x3598,	// (0x0005eab5) bg_popup_heading_pane_cp1_ParamLimits

0x3598,	// (0x0005eab5) bg_popup_heading_pane_cp1

0x3526,	// (0x0005ea43) list_ai_message_pane_ParamLimits

0x3526,	// (0x0005ea43) list_ai_message_pane

0x8312,	// (0x0006382f) scroll_pane_cp10

0x34c2,	// (0x0005e9df) list_ai_message_pane_g1

0x34ca,	// (0x0005e9e7) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0006ae4b) list_ai_message_pane_g

0x34d2,	// (0x0005e9ef) list_ai_message_pane_t1_ParamLimits

0x34d2,	// (0x0005e9ef) list_ai_message_pane_t1

0x34e7,	// (0x0005ea04) list_ai_message_pane_t2_ParamLimits

0x34e7,	// (0x0005ea04) list_ai_message_pane_t2

0x34fc,	// (0x0005ea19) list_ai_message_pane_t3_ParamLimits

0x34fc,	// (0x0005ea19) list_ai_message_pane_t3

0x3511,	// (0x0005ea2e) list_ai_message_pane_t4_ParamLimits

0x3511,	// (0x0005ea2e) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0006ae50) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0006ae50) list_ai_message_pane_t

0xc899,	// (0x00067db6) cell_ai_soft_ind_pane_ParamLimits

0xc899,	// (0x00067db6) cell_ai_soft_ind_pane

0xe9ec,	// (0x00069f09) cell_ai_soft_ind_pane_g1_ParamLimits

0xe9ec,	// (0x00069f09) cell_ai_soft_ind_pane_g1

0x5f71,	// (0x0006148e) grid_highlight_cp1

0xe9f9,	// (0x00069f16) text_secondary_cp56_ParamLimits

0xe9f9,	// (0x00069f16) text_secondary_cp56

0x3480,	// (0x0005e99d) example_general_pane_ParamLimits

0x3480,	// (0x0005e99d) example_general_pane

0x348c,	// (0x0005e9a9) example_parent_pane_g1_ParamLimits

0x348c,	// (0x0005e9a9) example_parent_pane_g1

0x3498,	// (0x0005e9b5) example_parent_pane_t1_ParamLimits

0x3498,	// (0x0005e9b5) example_parent_pane_t1

0xb398,	// (0x000668b5) popup_preview_text_window_ParamLimits

0xb398,	// (0x000668b5) popup_preview_text_window

0x9204,	// (0x00064721) list_single_pane_cp2_g4

0x61b4,	// (0x000616d1) bg_popup_preview_window_pane_ParamLimits

0x61b4,	// (0x000616d1) bg_popup_preview_window_pane

0x31c7,	// (0x0005e6e4) popup_preview_text_window_t1_ParamLimits

0x31c7,	// (0x0005e6e4) popup_preview_text_window_t1

0x31e5,	// (0x0005e702) popup_preview_text_window_t2_ParamLimits

0x31e5,	// (0x0005e702) popup_preview_text_window_t2

0x322e,	// (0x0005e74b) popup_preview_text_window_t3_ParamLimits

0x322e,	// (0x0005e74b) popup_preview_text_window_t3

0x3273,	// (0x0005e790) popup_preview_text_window_t4_ParamLimits

0x3273,	// (0x0005e790) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0006ae1f) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0006ae1f) popup_preview_text_window_t

0x32f1,	// (0x0005e80e) scroll_pane_cp11

0x22a3,	// (0x0005d7c0) bg_popup_preview_window_pane_g1

0x317b,	// (0x0005e698) bg_popup_preview_window_pane_g2

0x3185,	// (0x0005e6a2) bg_popup_preview_window_pane_g3

0x318f,	// (0x0005e6ac) bg_popup_preview_window_pane_g4

0x3199,	// (0x0005e6b6) bg_popup_preview_window_pane_g5

0x31a3,	// (0x0005e6c0) bg_popup_preview_window_pane_g6

0x31ab,	// (0x0005e6c8) bg_popup_preview_window_pane_g7

0x31b3,	// (0x0005e6d0) bg_popup_preview_window_pane_g8

0xe6aa,	// (0x00069bc7) aid_popup_width_pane

0xb308,	// (0x00066825) popup_midp_note_alarm_window_ParamLimits

0xb308,	// (0x00066825) popup_midp_note_alarm_window

0x81da,	// (0x000636f7) data_form_pane_ParamLimits

0xa755,	// (0x00065c72) form_field_data_pane_g1

0xa75f,	// (0x00065c7c) form_field_data_pane_t1_ParamLimits

0x81e6,	// (0x00063703) input_focus_pane_ParamLimits

0xe913,	// (0x00069e30) data_form_wide_pane_ParamLimits

0xe924,	// (0x00069e41) form_field_data_wide_pane_g1

0xe930,	// (0x00069e4d) form_field_data_wide_pane_t1_ParamLimits

0x6369,	// (0x00061886) input_focus_pane_cp6_ParamLimits

0xa8a0,	// (0x00065dbd) input_popup_find_pane_g1_ParamLimits

0xa8a0,	// (0x00065dbd) input_popup_find_pane_g1

0xf1b8,	// (0x0006a6d5) aid_navi_side_left_pane

0xf1cd,	// (0x0006a6ea) aid_navi_side_right_pane

0x2b90,	// (0x0005e0ad) bg_popup_window_pane_cp30_ParamLimits

0x2b90,	// (0x0005e0ad) bg_popup_window_pane_cp30

0x2c0a,	// (0x0005e127) popup_midp_note_alarm_window_g1_ParamLimits

0x2c0a,	// (0x0005e127) popup_midp_note_alarm_window_g1

0x2c3a,	// (0x0005e157) popup_midp_note_alarm_window_t1_ParamLimits

0x2c3a,	// (0x0005e157) popup_midp_note_alarm_window_t1

0x2cdb,	// (0x0005e1f8) popup_midp_note_alarm_window_t2_ParamLimits

0x2cdb,	// (0x0005e1f8) popup_midp_note_alarm_window_t2

0x2d89,	// (0x0005e2a6) popup_midp_note_alarm_window_t3_ParamLimits

0x2d89,	// (0x0005e2a6) popup_midp_note_alarm_window_t3

0x2dbb,	// (0x0005e2d8) popup_midp_note_alarm_window_t4_ParamLimits

0x2dbb,	// (0x0005e2d8) popup_midp_note_alarm_window_t4

0x2de1,	// (0x0005e2fe) popup_midp_note_alarm_window_t5_ParamLimits

0x2de1,	// (0x0005e2fe) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0006adbc) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0006adbc) popup_midp_note_alarm_window_t

0x2e8d,	// (0x0005e3aa) wait_bar_pane_cp1_ParamLimits

0x2e8d,	// (0x0005e3aa) wait_bar_pane_cp1

0x5f71,	// (0x0006148e) wait_anim_pane_copy1

0x5f71,	// (0x0006148e) wait_border_pane_copy1

0x2875,	// (0x0005dd92) wait_border_pane_g1_copy1

0xe94a,	// (0x00069e67) form_field_popup_pane_g1

0xa779,	// (0x00065c96) form_field_popup_pane_t1_ParamLimits

0x81e6,	// (0x00063703) input_focus_pane_cp7_ParamLimits

0x8214,	// (0x00063731) list_form_pane_ParamLimits

0xe952,	// (0x00069e6f) form_field_popup_wide_pane_g1

0xe95a,	// (0x00069e77) form_field_popup_wide_pane_t1_ParamLimits

0x81e6,	// (0x00063703) input_focus_pane_cp8_ParamLimits

0x8220,	// (0x0006373d) list_form_wide_pane_ParamLimits

0x3a1e,	// (0x0005ef3b) aid_size_cell_graphic_pane

0xa7f8,	// (0x00065d15) data_form_pane_t1_ParamLimits

0xbc9e,	// (0x000671bb) data_form_wide_pane_t1_ParamLimits

0xb79c,	// (0x00066cb9) bg_status_flat_pane

0x9eba,	// (0x000653d7) title_pane_t1_ParamLimits

0x5f93,	// (0x000614b0) title_pane_t2_ParamLimits

0x5fb9,	// (0x000614d6) title_pane_t3_ParamLimits

0xf557,	// (0x0006aa74) title_pane_t_ParamLimits

0xa9b0,	// (0x00065ecd) level_1_signal_ParamLimits

0xa9c2,	// (0x00065edf) level_2_signal_ParamLimits

0xa9d5,	// (0x00065ef2) level_3_signal_ParamLimits

0xa9e8,	// (0x00065f05) level_4_signal_ParamLimits

0xa9fb,	// (0x00065f18) level_5_signal_ParamLimits

0xaa0e,	// (0x00065f2b) level_6_signal_ParamLimits

0xaa21,	// (0x00065f3e) level_7_signal_ParamLimits

0xa9b0,	// (0x00065ecd) level_1_battery_ParamLimits

0xa9c2,	// (0x00065edf) level_2_battery_ParamLimits

0xa9d5,	// (0x00065ef2) level_3_battery_ParamLimits

0xa9e8,	// (0x00065f05) level_4_battery_ParamLimits

0xa9fb,	// (0x00065f18) level_5_battery_ParamLimits

0xaa0e,	// (0x00065f2b) level_6_battery_ParamLimits

0xaa21,	// (0x00065f3e) level_7_battery_ParamLimits

0x2a95,	// (0x0005dfb2) bg_status_flat_pane_g1

0x2a9d,	// (0x0005dfba) bg_status_flat_pane_g2

0x2aa5,	// (0x0005dfc2) bg_status_flat_pane_g3

0x2aad,	// (0x0005dfca) bg_status_flat_pane_g4

0x2ab5,	// (0x0005dfd2) bg_status_flat_pane_g5

0x2abd,	// (0x0005dfda) bg_status_flat_pane_g6

0x2ac5,	// (0x0005dfe2) bg_status_flat_pane_g7

0x9f4e,	// (0x0006546b) tabs_3_active_pane_t1_ParamLimits

0x9f4e,	// (0x0006546b) tabs_3_passive_pane_t1_ParamLimits

0x9f68,	// (0x00065485) tabs_4_active_pane_t1_ParamLimits

0x9f68,	// (0x00065485) tabs_4_1_passive_pane_t1_ParamLimits

0xa8b6,	// (0x00065dd3) tabs_2_active_pane_t1_ParamLimits

0xa8b6,	// (0x00065dd3) tabs_2_passive_pane_t1_ParamLimits

0x5fcb,	// (0x000614e8) bg_active_tab_pane_cp4_ParamLimits

0xa8c8,	// (0x00065de5) tabs_2_long_active_pane_t1_ParamLimits

0x0122,	// (0x0005b63f) bg_passive_tab_pane_cp4_ParamLimits

0x0561,	// (0x0005ba7e) list_single_midp_graphic_pane_t1_ParamLimits

0x5fcb,	// (0x000614e8) bg_active_tab_pane_cp5_ParamLimits

0xa8db,	// (0x00065df8) tabs_3_long_active_pane_t1_ParamLimits

0x0122,	// (0x0005b63f) bg_passive_tab_pane_cp5_ParamLimits

0x0561,	// (0x0005ba7e) list_single_midp_graphic_pane_t1

0xb79c,	// (0x00066cb9) bg_status_flat_pane_ParamLimits

0x1f1b,	// (0x0005d438) indicator_pane_cp2_ParamLimits

0x1f1b,	// (0x0005d438) indicator_pane_cp2

0xb932,	// (0x00066e4f) navi_pane_srt_ParamLimits

0xb932,	// (0x00066e4f) navi_pane_srt

0x2082,	// (0x0005d59f) popup_clock_digital_analogue_window_cp1

0x600f,	// (0x0006152c) indicator_pane_t1

0xc569,	// (0x00067a86) copy_highlight_pane

0xc569,	// (0x00067a86) cursor_graphics_pane

0xc569,	// (0x00067a86) graphic_within_text_pane

0xc569,	// (0x00067a86) link_highlight_pane

0x32b4,	// (0x0005e7d1) popup_preview_text_window_t5_ParamLimits

0x32b4,	// (0x0005e7d1) popup_preview_text_window_t5

0xea15,	// (0x00069f32) cursor_digital_pane

0xea15,	// (0x00069f32) cursor_primary_pane

0xea26,	// (0x00069f43) cursor_primary_small_pane

0xea2e,	// (0x00069f4b) cursor_secondary_pane

0xea36,	// (0x00069f53) cursor_title_pane

0xea15,	// (0x00069f32) link_highlight_digital_pane

0xea1d,	// (0x00069f3a) link_highlight_primary_pane

0xea26,	// (0x00069f43) link_highlight_primary_small_pane

0xea2e,	// (0x00069f4b) link_highlight_secondary_pane

0xea36,	// (0x00069f53) link_highlight_title_pane

0xea15,	// (0x00069f32) copy_highlight_digital_pane

0xea15,	// (0x00069f32) copy_highlight_primary_pane

0xea26,	// (0x00069f43) copy_highlight_primary_small_pane

0xea2e,	// (0x00069f4b) copy_highlight_secondary_pane

0xea36,	// (0x00069f53) copy_highlight_title_pane

0xea2e,	// (0x00069f4b) graphic_text_digital_pane

0x2b33,	// (0x0005e050) graphic_text_primary_pane

0x2b3c,	// (0x0005e059) graphic_text_primary_small_pane

0xea26,	// (0x00069f43) graphic_text_secondary_pane

0xea15,	// (0x00069f32) graphic_text_title_pane

0xad1a,	// (0x00066237) cursor_primary_pane_g1

0x2b25,	// (0x0005e042) cursor_text_primary_t1

0xc684,	// (0x00067ba1) cursor_primary_small_pane_g1

0x2b17,	// (0x0005e034) cursor_text_primary_small_t1

0xc67a,	// (0x00067b97) cursor_primary_small_pane_g1_copy1

0x2aff,	// (0x0005e01c) cursor_text_primary_small_t1_copy1

0x2add,	// (0x0005dffa) cursor_text_title_t1

0xc670,	// (0x00067b8d) cursor_title_pane_g1

0xad1a,	// (0x00066237) cursor_digital_pane_g1

0xea3e,	// (0x00069f5b) cursor_text_digital_t1

0xea4c,	// (0x00069f69) link_highlight_primary_pane_g1

0x2a86,	// (0x0005dfa3) link_highlight_primary_pane_t1

0xea4c,	// (0x00069f69) link_highlight_primary_small_pane_g1

0xea54,	// (0x00069f71) link_highlight_primary_small_pane_t1

0xea63,	// (0x00069f80) link_highlight_secondary_pane_g1

0xea6b,	// (0x00069f88) link_highlight_secondary_pane_t1

0x29fa,	// (0x0005df17) link_highlight_title_pane_g1

0x2a02,	// (0x0005df1f) link_highlight_title_pane_t1

0x29e3,	// (0x0005df00) link_highlight_digital_pane_g1

0x29eb,	// (0x0005df08) link_highlight_digital_pane_t1

0x28ab,	// (0x0005ddc8) copy_highlight_primary_pane_g1

0x28c2,	// (0x0005dddf) copy_highlight_primary_pane_t1

0x28ab,	// (0x0005ddc8) copy_highlight_primary_small_pane_g1

0x28b3,	// (0x0005ddd0) copy_highlight_primary_small_pane_t1

0xea7a,	// (0x00069f97) copy_highlight_secondary_pane_g1

0xea82,	// (0x00069f9f) copy_highlight_secondary_pane_t1

0x2894,	// (0x0005ddb1) copy_highlight_title_pane_g1

0x289c,	// (0x0005ddb9) copy_highlight_title_pane_t1

0x28ab,	// (0x0005ddc8) copy_highlight_digital_pane_g1

0x3d7b,	// (0x0005f298) copy_highlight_digital_pane_t1

0x3b42,	// (0x0005f05f) graphic_text_primary_pane_g1

0x3d5f,	// (0x0005f27c) graphic_text_primary_pane_t1

0x3d6d,	// (0x0005f28a) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0006aeeb) graphic_text_primary_pane_t

0x3d3b,	// (0x0005f258) graphic_text_primary_small_pane_g1

0x3d43,	// (0x0005f260) graphic_text_primary_small_pane_t1

0x3d51,	// (0x0005f26e) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0006aee6) graphic_text_primary_small_pane_t

0x3b8a,	// (0x0005f0a7) graphic_text_secondary_pane_g1

0x3b92,	// (0x0005f0af) graphic_text_secondary_pane_t1

0x3d2d,	// (0x0005f24a) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0006aee1) graphic_text_secondary_pane_t

0x3b66,	// (0x0005f083) graphic_text_title_pane_g1

0x3b6e,	// (0x0005f08b) graphic_text_title_pane_t1

0x3b7c,	// (0x0005f099) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0006aedc) graphic_text_title_pane_t

0x3b42,	// (0x0005f05f) graphic_text_digital_pane_g1

0x3b4a,	// (0x0005f067) graphic_text_digital_pane_t1

0x3b58,	// (0x0005f075) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0006aed7) graphic_text_digital_pane_t

0x5fcb,	// (0x000614e8) navi_icon_pane_srt_ParamLimits

0x5fcb,	// (0x000614e8) navi_icon_pane_srt

0x5f71,	// (0x0006148e) navi_midp_pane_srt

0x5f71,	// (0x0006148e) navi_navi_pane_srt

0x5fcb,	// (0x000614e8) navi_text_pane_srt_ParamLimits

0x5fcb,	// (0x000614e8) navi_text_pane_srt

0x3b0d,	// (0x0005f02a) navi_navi_icon_text_pane_srt

0x3b15,	// (0x0005f032) navi_navi_pane_srt_g1_ParamLimits

0x3b15,	// (0x0005f032) navi_navi_pane_srt_g1

0x3b27,	// (0x0005f044) navi_navi_pane_srt_g2_ParamLimits

0x3b27,	// (0x0005f044) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0006aed2) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0006aed2) navi_navi_pane_srt_g

0x3b39,	// (0x0005f056) navi_navi_tabs_pane_srt

0x3b0d,	// (0x0005f02a) navi_navi_text_pane_srt

0x3b0d,	// (0x0005f02a) navi_navi_volume_pane_srt

0x3afe,	// (0x0005f01b) navi_navi_text_pane_srt_t1

0x09a8,	// (0x0005bec5) navi_navi_volume_pane_srt_g1

0x09b0,	// (0x0005becd) volume_small_pane_srt_ParamLimits

0x09b0,	// (0x0005becd) volume_small_pane_srt

0xf496,	// (0x0006a9b3) volume_small_pane_srt_g1_ParamLimits

0xf496,	// (0x0006a9b3) volume_small_pane_srt_g1

0xf4a6,	// (0x0006a9c3) volume_small_pane_srt_g2_ParamLimits

0xf4a6,	// (0x0006a9c3) volume_small_pane_srt_g2

0xf4b7,	// (0x0006a9d4) volume_small_pane_srt_g3_ParamLimits

0xf4b7,	// (0x0006a9d4) volume_small_pane_srt_g3

0xf4c8,	// (0x0006a9e5) volume_small_pane_srt_g4_ParamLimits

0xf4c8,	// (0x0006a9e5) volume_small_pane_srt_g4

0xf4d9,	// (0x0006a9f6) volume_small_pane_srt_g5_ParamLimits

0xf4d9,	// (0x0006a9f6) volume_small_pane_srt_g5

0xf4ea,	// (0x0006aa07) volume_small_pane_srt_g6_ParamLimits

0xf4ea,	// (0x0006aa07) volume_small_pane_srt_g6

0xf4fb,	// (0x0006aa18) volume_small_pane_srt_g7_ParamLimits

0xf4fb,	// (0x0006aa18) volume_small_pane_srt_g7

0xf50c,	// (0x0006aa29) volume_small_pane_srt_g8_ParamLimits

0xf50c,	// (0x0006aa29) volume_small_pane_srt_g8

0xf51d,	// (0x0006aa3a) volume_small_pane_srt_g9_ParamLimits

0xf51d,	// (0x0006aa3a) volume_small_pane_srt_g9

0xf52e,	// (0x0006aa4b) volume_small_pane_srt_g10_ParamLimits

0xf52e,	// (0x0006aa4b) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0006ac7f) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0006ac7f) volume_small_pane_srt_g

0x6269,	// (0x00061786) query_popup_data_pane_cp2

0x3ae4,	// (0x0005f001) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3ae4,	// (0x0005f001) navi_navi_icon_text_pane_srt_t1

0x2b33,	// (0x0005e050) navi_tabs_2_long_pane_srt

0x2b33,	// (0x0005e050) navi_tabs_2_pane_srt

0x2b33,	// (0x0005e050) navi_tabs_3_long_pane_srt

0x2b33,	// (0x0005e050) navi_tabs_3_pane_srt

0x2b33,	// (0x0005e050) navi_tabs_4_pane_srt

0x0988,	// (0x0005bea5) tabs_2_active_pane_srt_ParamLimits

0x0988,	// (0x0005bea5) tabs_2_active_pane_srt

0x0998,	// (0x0005beb5) tabs_2_passive_pane_srt_ParamLimits

0x0998,	// (0x0005beb5) tabs_2_passive_pane_srt

0x2317,	// (0x0005d834) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2317,	// (0x0005d834) bg_passive_tab_pane_cp1_srt

0x3ab0,	// (0x0005efcd) bg_passive_tab_pane_g1_cp1_srt

0x901c,	// (0x00064539) bg_passive_tab_pane_g2_cp1_srt

0x3ab9,	// (0x0005efd6) bg_passive_tab_pane_g3_cp1_srt

0x60fe,	// (0x0006161b) bg_active_tab_pane_cp1_srt_ParamLimits

0x60fe,	// (0x0006161b) bg_active_tab_pane_cp1_srt

0x3ac2,	// (0x0005efdf) tabs_2_active_pane_srt_g1

0xcb58,	// (0x00068075) tabs_2_active_pane_srt_t1_ParamLimits

0xcb58,	// (0x00068075) tabs_2_active_pane_srt_t1

0x3ab0,	// (0x0005efcd) bg_active_tab_pane_g1_cp1_srt

0x901c,	// (0x00064539) bg_active_tab_pane_g2_cp1_srt

0x3ab9,	// (0x0005efd6) bg_active_tab_pane_g3_cp1_srt

0x0955,	// (0x0005be72) tabs_3_active_pane_srt_ParamLimits

0x0955,	// (0x0005be72) tabs_3_active_pane_srt

0x0966,	// (0x0005be83) tabs_3_passive_pane_cp_srt_ParamLimits

0x0966,	// (0x0005be83) tabs_3_passive_pane_cp_srt

0x0977,	// (0x0005be94) tabs_3_passive_pane_srt_ParamLimits

0x0977,	// (0x0005be94) tabs_3_passive_pane_srt

0x2317,	// (0x0005d834) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2317,	// (0x0005d834) bg_passive_tab_pane_cp2_srt

0xea91,	// (0x00069fae) bg_passive_tab_pane_g1_cp2_srt

0x901c,	// (0x00064539) bg_passive_tab_pane_g2_cp2_srt

0xea9a,	// (0x00069fb7) bg_passive_tab_pane_g3_cp2_srt

0x60fe,	// (0x0006161b) bg_active_tab_pane_cp2_srt_ParamLimits

0x60fe,	// (0x0006161b) bg_active_tab_pane_cp2_srt

0x3a96,	// (0x0005efb3) tabs_3_active_pane_srt_g1

0xcb42,	// (0x0006805f) tabs_3_active_pane_srt_t1_ParamLimits

0xcb42,	// (0x0006805f) tabs_3_active_pane_srt_t1

0xea91,	// (0x00069fae) bg_active_tab_pane_g1_cp2_srt

0x901c,	// (0x00064539) bg_active_tab_pane_g2_cp2_srt

0xea9a,	// (0x00069fb7) bg_active_tab_pane_g3_cp2_srt

0x090d,	// (0x0005be2a) tabs_4_active_pane_srt_ParamLimits

0x090d,	// (0x0005be2a) tabs_4_active_pane_srt

0x091f,	// (0x0005be3c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x091f,	// (0x0005be3c) tabs_4_passive_pane_cp2_srt

0x00b0,	// (0x0005b5cd) aid_size_cell_toolbar

0x366c,	// (0x0005eb89) main_idle_act_pane_ParamLimits

0x02eb,	// (0x0005b808) popup_large_graphic_colour_window_ParamLimits

0xb65e,	// (0x00066b7b) popup_toolbar_window_ParamLimits

0xb65e,	// (0x00066b7b) popup_toolbar_window

0x3858,	// (0x0005ed75) list_single_graphic_2heading_pane_ParamLimits

0x3858,	// (0x0005ed75) list_single_graphic_2heading_pane

0x8c7a,	// (0x00064197) aid_size_cell_apps_grid_lsc_pane

0x8c8c,	// (0x000641a9) aid_size_cell_apps_grid_prt_pane

0x0122,	// (0x0005b63f) bg_wml_button_pane_cp1_ParamLimits

0x0122,	// (0x0005b63f) bg_wml_button_pane_cp1

0xc620,	// (0x00067b3d) form_midp_field_text_pane_t1_ParamLimits

0x2317,	// (0x0005d834) input_focus_pane_cp050_ParamLimits

0x2556,	// (0x0005da73) list_midp_form_text_pane_ParamLimits

0x2508,	// (0x0005da25) input_focus_pane_cp051_ParamLimits

0x251c,	// (0x0005da39) list_midp_choice_pane_ParamLimits

0xc5d7,	// (0x00067af4) list_single_2graphic_pane_cp3_ParamLimits

0xc5d7,	// (0x00067af4) list_single_2graphic_pane_cp3

0x48d6,	// (0x0005fdf3) list_single_midp_graphic_pane_ParamLimits

0x48d6,	// (0x0005fdf3) list_single_midp_graphic_pane

0xeb23,	// (0x0006a040) list_single_graphic_2heading_pane_g1_ParamLimits

0xeb23,	// (0x0006a040) list_single_graphic_2heading_pane_g1

0xeb2f,	// (0x0006a04c) list_single_graphic_2heading_pane_g4_ParamLimits

0xeb2f,	// (0x0006a04c) list_single_graphic_2heading_pane_g4

0xeb3b,	// (0x0006a058) list_single_graphic_2heading_pane_g5_ParamLimits

0xeb3b,	// (0x0006a058) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0006acd2) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0006acd2) list_single_graphic_2heading_pane_g

0xeb47,	// (0x0006a064) list_single_graphic_2heading_pane_t1_ParamLimits

0xeb47,	// (0x0006a064) list_single_graphic_2heading_pane_t1

0xeb5b,	// (0x0006a078) list_single_graphic_2heading_pane_t2_ParamLimits

0xeb5b,	// (0x0006a078) list_single_graphic_2heading_pane_t2

0xeb77,	// (0x0006a094) list_single_graphic_2heading_pane_t3_ParamLimits

0xeb77,	// (0x0006a094) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0006acd9) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0006acd9) list_single_graphic_2heading_pane_t

0x21e1,	// (0x0005d6fe) bg_popup_sub_pane_cp2

0x220b,	// (0x0005d728) grid_toobar_pane

0x04c5,	// (0x0005b9e2) cell_toolbar_pane_ParamLimits

0x04c5,	// (0x0005b9e2) cell_toolbar_pane

0x2247,	// (0x0005d764) cell_toolbar_pane_g1_ParamLimits

0x2247,	// (0x0005d764) cell_toolbar_pane_g1

0x225b,	// (0x0005d778) cell_toolbar_pane_g2_ParamLimits

0x225b,	// (0x0005d778) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0006ace7) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0006ace7) cell_toolbar_pane_g

0x227d,	// (0x0005d79a) grid_highlight_pane_cp2_ParamLimits

0x227d,	// (0x0005d79a) grid_highlight_pane_cp2

0x2297,	// (0x0005d7b4) toolbar_button_pane

0x22a3,	// (0x0005d7c0) toolbar_button_pane_g1

0x22ab,	// (0x0005d7c8) toolbar_button_pane_g2

0x22b3,	// (0x0005d7d0) toolbar_button_pane_g3

0x22bb,	// (0x0005d7d8) toolbar_button_pane_g4

0x22c3,	// (0x0005d7e0) toolbar_button_pane_g5

0x22cb,	// (0x0005d7e8) toolbar_button_pane_g6

0x22d3,	// (0x0005d7f0) toolbar_button_pane_g7

0x22db,	// (0x0005d7f8) toolbar_button_pane_g8

0x22e3,	// (0x0005d800) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0006acec) toolbar_button_pane_g

0x0509,	// (0x0005ba26) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0509,	// (0x0005ba26) list_single_2graphic_pane_g1_cp3

0xba97,	// (0x00066fb4) list_single_2graphic_pane_g2_cp3_ParamLimits

0xba97,	// (0x00066fb4) list_single_2graphic_pane_g2_cp3

0x0526,	// (0x0005ba43) list_single_2graphic_pane_g3_cp3

0x052e,	// (0x0005ba4b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x052e,	// (0x0005ba4b) list_single_2graphic_pane_g4_cp3

0x053a,	// (0x0005ba57) list_single_2graphic_pane_t1_cp3_ParamLimits

0x053a,	// (0x0005ba57) list_single_2graphic_pane_t1_cp3

0x0555,	// (0x0005ba72) list_single_midp_graphic_pane_g2_ParamLimits

0x0555,	// (0x0005ba72) list_single_midp_graphic_pane_g2

0xeb0b,	// (0x0006a028) aid_zoom_text_primary

0xeb13,	// (0x0006a030) aid_zoom_text_secondary

0xad72,	// (0x0006628f) status_small_pane_g7_ParamLimits

0xad72,	// (0x0006628f) status_small_pane_g7

0xad95,	// (0x000662b2) status_small_pane_t1_ParamLimits

0x9ea2,	// (0x000653bf) title_pane_g2

0x0003,

0xf54e,	// (0x0006aa6b) title_pane_g

0xa12e,	// (0x0006564b) aid_size_cell_colour_1_pane_ParamLimits

0xa12e,	// (0x0006564b) aid_size_cell_colour_1_pane

0xa142,	// (0x0006565f) aid_size_cell_colour_2_pane_ParamLimits

0xa142,	// (0x0006565f) aid_size_cell_colour_2_pane

0xa156,	// (0x00065673) aid_size_cell_colour_3_pane_ParamLimits

0xa156,	// (0x00065673) aid_size_cell_colour_3_pane

0xa16a,	// (0x00065687) aid_size_cell_colour_4_pane_ParamLimits

0xa16a,	// (0x00065687) aid_size_cell_colour_4_pane

0xf0f4,	// (0x0006a611) title_pane_stacon_g1_ParamLimits

0xf0f4,	// (0x0006a611) title_pane_stacon_g1

0x2919,	// (0x0005de36) popup_note_wait_window_g3_ParamLimits

0x2919,	// (0x0005de36) popup_note_wait_window_g3

0x2990,	// (0x0005dead) popup_note_wait_window_t5_ParamLimits

0x2990,	// (0x0005dead) popup_note_wait_window_t5

0x5f71,	// (0x0006148e) main_feb_china_hwr_fs_writing_pane

0xaff5,	// (0x00066512) popup_feb_china_hwr_fs_window_ParamLimits

0xaff5,	// (0x00066512) popup_feb_china_hwr_fs_window

0xbaa8,	// (0x00066fc5) aid_size_cell_hwr_fs_ParamLimits

0xbaa8,	// (0x00066fc5) aid_size_cell_hwr_fs

0x2317,	// (0x0005d834) bg_popup_sub_pane_cp3_ParamLimits

0x2317,	// (0x0005d834) bg_popup_sub_pane_cp3

0xbabd,	// (0x00066fda) grid_hwr_fs_pane_ParamLimits

0xbabd,	// (0x00066fda) grid_hwr_fs_pane

0x05bc,	// (0x0005bad9) linegrid_hwr_fs_pane_ParamLimits

0x05bc,	// (0x0005bad9) linegrid_hwr_fs_pane

0xbad5,	// (0x00066ff2) cell_hwr_fs_pane_ParamLimits

0xbad5,	// (0x00066ff2) cell_hwr_fs_pane

0x2323,	// (0x0005d840) linegrid_hwr_fs_pane_g1_ParamLimits

0x2323,	// (0x0005d840) linegrid_hwr_fs_pane_g1

0xc5ab,	// (0x00067ac8) linegrid_hwr_fs_pane_g2_ParamLimits

0xc5ab,	// (0x00067ac8) linegrid_hwr_fs_pane_g2

0x2341,	// (0x0005d85e) linegrid_hwr_fs_pane_g3_ParamLimits

0x2341,	// (0x0005d85e) linegrid_hwr_fs_pane_g3

0x05f0,	// (0x0005bb0d) linegrid_hwr_fs_pane_g4_ParamLimits

0x05f0,	// (0x0005bb0d) linegrid_hwr_fs_pane_g4

0x060e,	// (0x0005bb2b) linegrid_hwr_fs_pane_g5_ParamLimits

0x060e,	// (0x0005bb2b) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0006ad12) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0006ad12) linegrid_hwr_fs_pane_g

0x234d,	// (0x0005d86a) cell_hwr_fs_pane_g1_ParamLimits

0x234d,	// (0x0005d86a) cell_hwr_fs_pane_g1

0x2118,	// (0x0005d635) cell_hwr_fs_pane_g2_ParamLimits

0x2118,	// (0x0005d635) cell_hwr_fs_pane_g2

0xc5bd,	// (0x00067ada) cell_hwr_fs_pane_g3_ParamLimits

0xc5bd,	// (0x00067ada) cell_hwr_fs_pane_g3

0xc5ca,	// (0x00067ae7) cell_hwr_fs_pane_g4_ParamLimits

0xc5ca,	// (0x00067ae7) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0006ad1d) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0006ad1d) cell_hwr_fs_pane_g

0xbafb,	// (0x00067018) cell_hwr_fs_pane_t1

0x5f71,	// (0x0006148e) grid_highlight_pane_cp6

0x5f71,	// (0x0006148e) main_idle_act2_pane

0x82f9,	// (0x00063816) aid_inside_area_popup_secondary

0xc6eb,	// (0x00067c08) aid_inside_area_window_primary_ParamLimits

0xc6eb,	// (0x00067c08) aid_inside_area_window_primary

0x3d8a,	// (0x0005f2a7) ai2_news_ticker_pane

0x3d92,	// (0x0005f2af) aid_size_cell_ai1_link_ParamLimits

0x3d92,	// (0x0005f2af) aid_size_cell_ai1_link

0x3dac,	// (0x0005f2c9) popup_ai2_data_window_ParamLimits

0x3dac,	// (0x0005f2c9) popup_ai2_data_window

0x3dca,	// (0x0005f2e7) popup_ai2_link_window_ParamLimits

0x3dca,	// (0x0005f2e7) popup_ai2_link_window

0x2317,	// (0x0005d834) bg_popup_sub_pane_cp4_ParamLimits

0x2317,	// (0x0005d834) bg_popup_sub_pane_cp4

0x3de0,	// (0x0005f2fd) grid_ai2_link_pane_ParamLimits

0x3de0,	// (0x0005f2fd) grid_ai2_link_pane

0x3df7,	// (0x0005f314) popup_ai2_link_window_g1_ParamLimits

0x3df7,	// (0x0005f314) popup_ai2_link_window_g1

0x3e03,	// (0x0005f320) popup_ai2_link_window_g2_ParamLimits

0x3e03,	// (0x0005f320) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0006aef0) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0006aef0) popup_ai2_link_window_g

0x3e14,	// (0x0005f331) ai2_mp_button_pane

0x3e1c,	// (0x0005f339) ai2_mp_volume_pane

0x2508,	// (0x0005da25) bg_popup_sub_pane_cp5_ParamLimits

0x2508,	// (0x0005da25) bg_popup_sub_pane_cp5

0x3e24,	// (0x0005f341) heading_ai2_gene_pane_ParamLimits

0x3e24,	// (0x0005f341) heading_ai2_gene_pane

0x3e30,	// (0x0005f34d) list_ai2_gene_pane_ParamLimits

0x3e30,	// (0x0005f34d) list_ai2_gene_pane

0x3e78,	// (0x0005f395) cell_ai2_link_pane_ParamLimits

0x3e78,	// (0x0005f395) cell_ai2_link_pane

0x3e8e,	// (0x0005f3ab) cell_ai2_link_pane_g1

0x5f71,	// (0x0006148e) grid_highlight_pane_cp7

0x09c5,	// (0x0005bee2) ai2_mp_volume_pane_g1

0x3f61,	// (0x0005f47e) ai2_mp_volume_pane_g2

0x3ed6,	// (0x0005f3f3) list_ai2_gene_pane_t1

0x3f69,	// (0x0005f486) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0006af09) ai2_mp_volume_pane_g

0x09cd,	// (0x0005beea) volume_small_pane_cp3

0x3f71,	// (0x0005f48e) aid_size_cell_ai2_button

0x3f79,	// (0x0005f496) grid_ai2_button_pane

0x3f82,	// (0x0005f49f) cell_ai2_button_pane_ParamLimits

0x3f82,	// (0x0005f49f) cell_ai2_button_pane

0x5f67,	// (0x00061484) cell_ai2_button_pane_g1

0x5f71,	// (0x0006148e) grid_highlight_pane_cp8

0x3f21,	// (0x0005f43e) ai2_gene_pane_t1_ParamLimits

0x3f21,	// (0x0005f43e) ai2_gene_pane_t1

0xaf53,	// (0x00066470) aid_height_parent_landscape

0xc8e0,	// (0x00067dfd) aid_height_set_list

0x366c,	// (0x0005eb89) aid_size_parent

0x3a1e,	// (0x0005ef3b) aid_size_cell_graphic_pane_ParamLimits

0x3e40,	// (0x0005f35d) popup_ai2_data_window_g1_ParamLimits

0x3e40,	// (0x0005f35d) popup_ai2_data_window_g1

0x3e4c,	// (0x0005f369) ai2_news_ticker_pane_g1

0x3e54,	// (0x0005f371) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0006aef5) ai2_news_ticker_pane_g

0x3e5c,	// (0x0005f379) ai2_news_ticker_pane_t1

0x3e6a,	// (0x0005f387) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0006aefa) ai2_news_ticker_pane_t

0x3e97,	// (0x0005f3b4) heading_ai2_gene_pane_g1

0x3e9f,	// (0x0005f3bc) heading_ai2_gene_pane_t1_ParamLimits

0x3e9f,	// (0x0005f3bc) heading_ai2_gene_pane_t1

0x3eb4,	// (0x0005f3d1) list_highlight_pane_cp6

0x3ebc,	// (0x0005f3d9) ai2_gene_pane_ParamLimits

0x3ebc,	// (0x0005f3d9) ai2_gene_pane

0x3ee4,	// (0x0005f401) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0006aeff) list_ai2_gene_pane_t

0x3ef2,	// (0x0005f40f) list_highlight_pane_cp8_ParamLimits

0x3ef2,	// (0x0005f40f) list_highlight_pane_cp8

0x3f03,	// (0x0005f420) ai2_gene_pane_g1_ParamLimits

0x3f03,	// (0x0005f420) ai2_gene_pane_g1

0x3f15,	// (0x0005f432) ai2_gene_pane_g2_ParamLimits

0x3f15,	// (0x0005f432) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0006af04) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0006af04) ai2_gene_pane_g

0x6584,	// (0x00061aa1) scroll_pane_cp12

0xaf12,	// (0x0006642f) control_pane_t3_ParamLimits

0xaf12,	// (0x0006642f) control_pane_t3

0xad86,	// (0x000662a3) status_small_pane_g8_ParamLimits

0xad86,	// (0x000662a3) status_small_pane_g8

0xb097,	// (0x000665b4) popup_find_window_ParamLimits

0xb348,	// (0x00066865) popup_note_image_window_ParamLimits

0xeb8f,	// (0x0006a0ac) list_double2_graphic_pane_vc_g1_ParamLimits

0xeb8f,	// (0x0006a0ac) list_double2_graphic_pane_vc_g1

0x839a,	// (0x000638b7) list_double2_graphic_pane_vc_g2_ParamLimits

0x839a,	// (0x000638b7) list_double2_graphic_pane_vc_g2

0x04f5,	// (0x0005ba12) list_double2_graphic_pane_vc_g3_ParamLimits

0x04f5,	// (0x0005ba12) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0006ace0) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0006ace0) list_double2_graphic_pane_vc_g

0xeb9b,	// (0x0006a0b8) list_double2_graphic_pane_vc_t1_ParamLimits

0xeb9b,	// (0x0006a0b8) list_double2_graphic_pane_vc_t1

0x839a,	// (0x000638b7) list_single_heading_pane_vc_g1_ParamLimits

0x839a,	// (0x000638b7) list_single_heading_pane_vc_g1

0x04f5,	// (0x0005ba12) list_single_heading_pane_vc_g2_ParamLimits

0x04f5,	// (0x0005ba12) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006aaef) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006aaef) list_single_heading_pane_vc_g

0xebb1,	// (0x0006a0ce) list_single_heading_pane_vc_t1_ParamLimits

0xebb1,	// (0x0006a0ce) list_single_heading_pane_vc_t1

0xebc9,	// (0x0006a0e6) list_single_heading_pane_vc_t2_ParamLimits

0xebc9,	// (0x0006a0e6) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0006ad01) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0006ad01) list_single_heading_pane_vc_t

0x0577,	// (0x0005ba94) list_setting_number_pane_vc_g1_ParamLimits

0x0577,	// (0x0005ba94) list_setting_number_pane_vc_g1

0x0583,	// (0x0005baa0) list_setting_number_pane_vc_g2_ParamLimits

0x0583,	// (0x0005baa0) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0006ad06) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0006ad06) list_setting_number_pane_vc_g

0xebdb,	// (0x0006a0f8) list_setting_number_pane_vc_t1_ParamLimits

0xebdb,	// (0x0006a0f8) list_setting_number_pane_vc_t1

0xebef,	// (0x0006a10c) list_setting_number_pane_vc_t2_ParamLimits

0xebef,	// (0x0006a10c) list_setting_number_pane_vc_t2

0xec0b,	// (0x0006a128) list_setting_number_pane_vc_t3_ParamLimits

0xec0b,	// (0x0006a128) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0006ad0b) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0006ad0b) list_setting_number_pane_vc_t

0xec39,	// (0x0006a156) set_value_pane_vc_ParamLimits

0xec39,	// (0x0006a156) set_value_pane_vc

0x3858,	// (0x0005ed75) list_double2_graphic_pane_vc_ParamLimits

0x3858,	// (0x0005ed75) list_double2_graphic_pane_vc

0x3858,	// (0x0005ed75) list_double2_large_graphic_pane_vc_ParamLimits

0x3858,	// (0x0005ed75) list_double2_large_graphic_pane_vc

0x3858,	// (0x0005ed75) list_double2_pane_vc_ParamLimits

0x3858,	// (0x0005ed75) list_double2_pane_vc

0x3858,	// (0x0005ed75) list_double_graphic_heading_pane_vc_ParamLimits

0x3858,	// (0x0005ed75) list_double_graphic_heading_pane_vc

0x3858,	// (0x0005ed75) list_double_graphic_pane_vc_ParamLimits

0x3858,	// (0x0005ed75) list_double_graphic_pane_vc

0x3858,	// (0x0005ed75) list_double_heading_pane_vc_ParamLimits

0x3858,	// (0x0005ed75) list_double_heading_pane_vc

0x386c,	// (0x0005ed89) list_double_large_graphic_pane_vc_ParamLimits

0x386c,	// (0x0005ed89) list_double_large_graphic_pane_vc

0x3858,	// (0x0005ed75) list_double_number_pane_vc_ParamLimits

0x3858,	// (0x0005ed75) list_double_number_pane_vc

0x3858,	// (0x0005ed75) list_double_pane_vc_ParamLimits

0x3858,	// (0x0005ed75) list_double_pane_vc

0x3858,	// (0x0005ed75) list_double_time_pane_vc_ParamLimits

0x3858,	// (0x0005ed75) list_double_time_pane_vc

0x3858,	// (0x0005ed75) list_setting_number_pane_vc_ParamLimits

0x3858,	// (0x0005ed75) list_setting_number_pane_vc

0x3858,	// (0x0005ed75) list_setting_pane_vc_ParamLimits

0x3858,	// (0x0005ed75) list_setting_pane_vc

0x3858,	// (0x0005ed75) list_single_graphic_heading_pane_vc_ParamLimits

0x3858,	// (0x0005ed75) list_single_graphic_heading_pane_vc

0x3858,	// (0x0005ed75) list_single_heading_pane_vc_ParamLimits

0x3858,	// (0x0005ed75) list_single_heading_pane_vc

0x3858,	// (0x0005ed75) list_single_number_heading_pane_vc_ParamLimits

0x3858,	// (0x0005ed75) list_single_number_heading_pane_vc

0xeb8f,	// (0x0006a0ac) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xeb8f,	// (0x0006a0ac) list_double_graphic_heading_pane_vc_g1

0x3ba0,	// (0x0005f0bd) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3ba0,	// (0x0005f0bd) list_double_graphic_heading_pane_vc_g2

0x3bac,	// (0x0005f0c9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3bac,	// (0x0005f0c9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f3,	// (0x0006af10) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f3,	// (0x0006af10) list_double_graphic_heading_pane_vc_g

0xec70,	// (0x0006a18d) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xec70,	// (0x0006a18d) list_double_graphic_heading_pane_vc_t1

0xec86,	// (0x0006a1a3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xec86,	// (0x0006a1a3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x0006af17) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x0006af17) list_double_graphic_heading_pane_vc_t

0x0577,	// (0x0005ba94) list_setting_pane_vc_g1_ParamLimits

0x0577,	// (0x0005ba94) list_setting_pane_vc_g1

0x0583,	// (0x0005baa0) list_setting_pane_vc_g2_ParamLimits

0x0583,	// (0x0005baa0) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0006ad06) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0006ad06) list_setting_pane_vc_g

0xeca4,	// (0x0006a1c1) list_setting_pane_vc_t1_ParamLimits

0xeca4,	// (0x0006a1c1) list_setting_pane_vc_t1

0xecc0,	// (0x0006a1dd) list_setting_pane_vc_t2_ParamLimits

0xecc0,	// (0x0006a1dd) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x0006af5a) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x0006af5a) list_setting_pane_vc_t

0xec39,	// (0x0006a156) set_value_pane_cp_vc_ParamLimits

0xec39,	// (0x0006a156) set_value_pane_cp_vc

0x839a,	// (0x000638b7) list_single_number_heading_pane_vc_g1_ParamLimits

0x839a,	// (0x000638b7) list_single_number_heading_pane_vc_g1

0x04f5,	// (0x0005ba12) list_single_number_heading_pane_vc_g2_ParamLimits

0x04f5,	// (0x0005ba12) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006aaef) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006aaef) list_single_number_heading_pane_vc_g

0xebb1,	// (0x0006a0ce) list_single_number_heading_pane_vc_t1_ParamLimits

0xebb1,	// (0x0006a0ce) list_single_number_heading_pane_vc_t1

0xecdc,	// (0x0006a1f9) list_single_number_heading_pane_vc_t2_ParamLimits

0xecdc,	// (0x0006a1f9) list_single_number_heading_pane_vc_t2

0xc4b9,	// (0x000679d6) list_single_number_heading_pane_vc_t3_ParamLimits

0xc4b9,	// (0x000679d6) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x0006af5f) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0006af5f) list_single_number_heading_pane_vc_t

0xeb8f,	// (0x0006a0ac) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xeb8f,	// (0x0006a0ac) list_single_graphic_heading_pane_vc_g1

0x839a,	// (0x000638b7) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x839a,	// (0x000638b7) list_single_graphic_heading_pane_vc_g4

0x04f5,	// (0x0005ba12) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x04f5,	// (0x0005ba12) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0006ace0) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0006ace0) list_single_graphic_heading_pane_vc_g

0xebb1,	// (0x0006a0ce) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xebb1,	// (0x0006a0ce) list_single_graphic_heading_pane_vc_t1

0xecee,	// (0x0006a20b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xecee,	// (0x0006a20b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x0006af66) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0006af66) list_single_graphic_heading_pane_vc_t

0x839a,	// (0x000638b7) list_double2_pane_vc_g1_ParamLimits

0x839a,	// (0x000638b7) list_double2_pane_vc_g1

0x04f5,	// (0x0005ba12) list_double2_pane_vc_g2_ParamLimits

0x04f5,	// (0x0005ba12) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006aaef) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006aaef) list_double2_pane_vc_g

0xec5a,	// (0x0006a177) list_double2_pane_vc_t1_ParamLimits

0xec5a,	// (0x0006a177) list_double2_pane_vc_t1

0x3bb8,	// (0x0005f0d5) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3bb8,	// (0x0005f0d5) list_double2_large_graphic_pane_vc_g1

0x839a,	// (0x000638b7) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x839a,	// (0x000638b7) list_double2_large_graphic_pane_vc_g2

0x04f5,	// (0x0005ba12) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x04f5,	// (0x0005ba12) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0006ab07) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0006ab07) list_double2_large_graphic_pane_vc_g

0xc4a3,	// (0x000679c0) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xc4a3,	// (0x000679c0) list_double2_large_graphic_pane_vc_t1

0x3bc4,	// (0x0005f0e1) list_double_time_pane_vc_g1_ParamLimits

0x3bc4,	// (0x0005f0e1) list_double_time_pane_vc_g1

0x3bd0,	// (0x0005f0ed) list_double_time_pane_vc_g2_ParamLimits

0x3bd0,	// (0x0005f0ed) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x0006af6b) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x0006af6b) list_double_time_pane_vc_g

0xed00,	// (0x0006a21d) list_double_time_pane_vc_t1_ParamLimits

0xed00,	// (0x0006a21d) list_double_time_pane_vc_t1

0xed2a,	// (0x0006a247) list_double_time_pane_vc_t2_ParamLimits

0xed2a,	// (0x0006a247) list_double_time_pane_vc_t2

0xed73,	// (0x0006a290) list_double_time_pane_vc_t3_ParamLimits

0xed73,	// (0x0006a290) list_double_time_pane_vc_t3

0xed85,	// (0x0006a2a2) list_double_time_pane_vc_t4_ParamLimits

0xed85,	// (0x0006a2a2) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x0006af70) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x0006af70) list_double_time_pane_vc_t

0x839a,	// (0x000638b7) list_double_pane_vc_g1_ParamLimits

0x839a,	// (0x000638b7) list_double_pane_vc_g1

0x04f5,	// (0x0005ba12) list_double_pane_vc_g2_ParamLimits

0x04f5,	// (0x0005ba12) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006aaef) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006aaef) list_double_pane_vc_g

0xedaa,	// (0x0006a2c7) list_double_pane_vc_t1_ParamLimits

0xedaa,	// (0x0006a2c7) list_double_pane_vc_t1

0xedbe,	// (0x0006a2db) list_double_pane_vc_t2_ParamLimits

0xedbe,	// (0x0006a2db) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x0006af79) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x0006af79) list_double_pane_vc_t

0x839a,	// (0x000638b7) list_double_number_pane_vc_g1_ParamLimits

0x839a,	// (0x000638b7) list_double_number_pane_vc_g1

0x04f5,	// (0x0005ba12) list_double_number_pane_vc_g2_ParamLimits

0x04f5,	// (0x0005ba12) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006aaef) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006aaef) list_double_number_pane_vc_g

0xedd4,	// (0x0006a2f1) list_double_number_pane_vc_t1_ParamLimits

0xedd4,	// (0x0006a2f1) list_double_number_pane_vc_t1

0xede8,	// (0x0006a305) list_double_number_pane_vc_t2_ParamLimits

0xede8,	// (0x0006a305) list_double_number_pane_vc_t2

0xedfc,	// (0x0006a319) list_double_number_pane_vc_t3_ParamLimits

0xedfc,	// (0x0006a319) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x0006af7e) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x0006af7e) list_double_number_pane_vc_t

0x3bdc,	// (0x0005f0f9) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3bdc,	// (0x0005f0f9) list_double_large_graphic_pane_vc_g1

0x3c04,	// (0x0005f121) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3c04,	// (0x0005f121) list_double_large_graphic_pane_vc_g2

0x3c18,	// (0x0005f135) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3c18,	// (0x0005f135) list_double_large_graphic_pane_vc_g3

0xee12,	// (0x0006a32f) list_double_large_graphic_pane_vc_g4_ParamLimits

0xee12,	// (0x0006a32f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x0006af85) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x0006af85) list_double_large_graphic_pane_vc_g

0xee22,	// (0x0006a33f) list_double_large_graphic_pane_vc_t1_ParamLimits

0xee22,	// (0x0006a33f) list_double_large_graphic_pane_vc_t1

0xee44,	// (0x0006a361) list_double_large_graphic_pane_vc_t2_ParamLimits

0xee44,	// (0x0006a361) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0006af8e) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0006af8e) list_double_large_graphic_pane_vc_t

0x3ba0,	// (0x0005f0bd) list_double_heading_pane_vc_g1_ParamLimits

0x3ba0,	// (0x0005f0bd) list_double_heading_pane_vc_g1

0x3bac,	// (0x0005f0c9) list_double_heading_pane_vc_g2_ParamLimits

0x3bac,	// (0x0005f0c9) list_double_heading_pane_vc_g2

0x0001,

0xfa76,	// (0x0006af93) list_double_heading_pane_vc_g_ParamLimits

0xfa76,	// (0x0006af93) list_double_heading_pane_vc_g

0xee64,	// (0x0006a381) list_double_heading_pane_vc_t1_ParamLimits

0xee64,	// (0x0006a381) list_double_heading_pane_vc_t1

0xebb1,	// (0x0006a0ce) list_double_heading_pane_vc_t2_ParamLimits

0xebb1,	// (0x0006a0ce) list_double_heading_pane_vc_t2

0x0001,

0xfa7b,	// (0x0006af98) list_double_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x0006af98) list_double_heading_pane_vc_t

0xee76,	// (0x0006a393) list_double_graphic_pane_vc_g1_ParamLimits

0xee76,	// (0x0006a393) list_double_graphic_pane_vc_g1

0x3c27,	// (0x0005f144) list_double_graphic_pane_vc_g2_ParamLimits

0x3c27,	// (0x0005f144) list_double_graphic_pane_vc_g2

0x839a,	// (0x000638b7) list_double_graphic_pane_vc_g3_ParamLimits

0x839a,	// (0x000638b7) list_double_graphic_pane_vc_g3

0x0003,

0xfa80,	// (0x0006af9d) list_double_graphic_pane_vc_g_ParamLimits

0xfa80,	// (0x0006af9d) list_double_graphic_pane_vc_g

0xee82,	// (0x0006a39f) list_double_graphic_pane_vc_t1_ParamLimits

0xee82,	// (0x0006a39f) list_double_graphic_pane_vc_t1

0xeeac,	// (0x0006a3c9) list_double_graphic_pane_vc_t2_ParamLimits

0xeeac,	// (0x0006a3c9) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x0006afa6) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x0006afa6) list_double_graphic_pane_vc_t

0xe6b6,	// (0x00069bd3) aid_size_cell_fastswap

0x9c7b,	// (0x00065198) aid_size_cell_touch_ParamLimits

0x9c7b,	// (0x00065198) aid_size_cell_touch

0xe83d,	// (0x00069d5a) popup_fast_swap_wide_window_ParamLimits

0xe83d,	// (0x00069d5a) popup_fast_swap_wide_window

0x9e39,	// (0x00065356) touch_pane_ParamLimits

0x9e39,	// (0x00065356) touch_pane

0x81d2,	// (0x000636ef) button_value_adjust_pane_cp2

0xc4e5,	// (0x00067a02) button_value_adjust_pane_cp4

0xc4ed,	// (0x00067a0a) form_field_data_pane_cp2

0xa729,	// (0x00065c46) form_field_data_wide_pane_cp2

0x8cc8,	// (0x000641e5) bg_scroll_pane_ParamLimits

0xf250,	// (0x0006a76d) scroll_handle_pane_ParamLimits

0xf264,	// (0x0006a781) scroll_sc2_down_pane_ParamLimits

0xf264,	// (0x0006a781) scroll_sc2_down_pane

0x8cf9,	// (0x00064216) scroll_sc2_up_pane_ParamLimits

0x8cf9,	// (0x00064216) scroll_sc2_up_pane

0xccaf,	// (0x000681cc) grid_wheel_folder_pane_g1_ParamLimits

0xccaf,	// (0x000681cc) grid_wheel_folder_pane_g1

0xf42e,	// (0x0006a94b) clock_nsta_pane_cp2_ParamLimits

0xf42e,	// (0x0006a94b) clock_nsta_pane_cp2

0x0122,	// (0x0005b63f) listscroll_midp_pane_ParamLimits

0xac71,	// (0x0006618e) midp_canvas_pane

0x009e,	// (0x0005b5bb) nsta_clock_indic_pane

0x00ec,	// (0x0005b609) listscroll_form_pane_vc

0x0110,	// (0x0005b62d) listscroll_set_pane_vc_ParamLimits

0x0110,	// (0x0005b62d) listscroll_set_pane_vc

0xb7c4,	// (0x00066ce1) clock_nsta_pane

0xb7ee,	// (0x00066d0b) indicator_nsta_pane

0x21e1,	// (0x0005d6fe) bg_popup_sub_pane_cp2_ParamLimits

0x21f5,	// (0x0005d712) find_pane_cp2_ParamLimits

0x21f5,	// (0x0005d712) find_pane_cp2

0x220b,	// (0x0005d728) grid_toobar_pane_ParamLimits

0x22eb,	// (0x0005d808) list_form_gen_pane_vc_ParamLimits

0x22eb,	// (0x0005d808) list_form_gen_pane_vc

0x2301,	// (0x0005d81e) scroll_pane_cp8_vc_ParamLimits

0x2301,	// (0x0005d81e) scroll_pane_cp8_vc

0x237d,	// (0x0005d89a) data_form_wide_pane_vc_ParamLimits

0x237d,	// (0x0005d89a) data_form_wide_pane_vc

0x2389,	// (0x0005d8a6) form_field_data_wide_pane_vc_g1

0x2391,	// (0x0005d8ae) form_field_data_wide_pane_vc_t1_ParamLimits

0x2391,	// (0x0005d8ae) form_field_data_wide_pane_vc_t1

0x81e6,	// (0x00063703) input_focus_pane_cp6_vc_ParamLimits

0x81e6,	// (0x00063703) input_focus_pane_cp6_vc

0xc648,	// (0x00067b65) list_midp_pane_ParamLimits

0x3a8a,	// (0x0005efa7) scroll_pane_cp16_ParamLimits

0x3a8a,	// (0x0005efa7) scroll_pane_cp16

0x26ed,	// (0x0005dc0a) button_value_adjust_pane_ParamLimits

0x26ed,	// (0x0005dc0a) button_value_adjust_pane

0xc8f1,	// (0x00067e0e) button_value_adjust_pane_cp6_ParamLimits

0xc8f1,	// (0x00067e0e) button_value_adjust_pane_cp6

0xca33,	// (0x00067f50) settings_code_pane_cp_ParamLimits

0xca33,	// (0x00067f50) settings_code_pane_cp

0x5f67,	// (0x00061484) cell_touch_pane_g1

0x5f67,	// (0x00061484) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0006ac25) cell_touch_pane_g

0xcb6e,	// (0x0006808b) cell_touch_pane_cp_ParamLimits

0xcb6e,	// (0x0006808b) cell_touch_pane_cp

0xcb8a,	// (0x000680a7) cell_touch_pane_ParamLimits

0xcb8a,	// (0x000680a7) cell_touch_pane

0x5f67,	// (0x00061484) scroll_sc2_down_pane_g1

0x5f67,	// (0x00061484) scroll_sc2_up_pane_g1

0x5f71,	// (0x0006148e) bg_set_opt_pane_cp4_vc

0x3fb5,	// (0x0005f4d2) list_set_graphic_pane_vc_g1_ParamLimits

0x3fb5,	// (0x0005f4d2) list_set_graphic_pane_vc_g1

0xcba8,	// (0x000680c5) list_set_graphic_pane_vc_g2_ParamLimits

0xcba8,	// (0x000680c5) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x0006af1c) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x0006af1c) list_set_graphic_pane_vc_g

0x3fc1,	// (0x0005f4de) text_primary_small_cp13_vc_ParamLimits

0x3fc1,	// (0x0005f4de) text_primary_small_cp13_vc

0x3fd9,	// (0x0005f4f6) list_set_graphic_pane_vc_ParamLimits

0x3fd9,	// (0x0005f4f6) list_set_graphic_pane_vc

0x5f71,	// (0x0006148e) input_focus_pane_cp2_vc

0x5f67,	// (0x00061484) setting_code_pane_vc_g1

0x5fe2,	// (0x000614ff) setting_code_pane_vc_t1

0x3fee,	// (0x0005f50b) set_text_pane_vc_t1_ParamLimits

0x3fee,	// (0x0005f50b) set_text_pane_vc_t1

0x5f71,	// (0x0006148e) input_focus_pane_cp1_vc

0x400c,	// (0x0005f529) list_set_text_pane_vc

0x5f67,	// (0x00061484) setting_text_pane_vc_g1

0x5f71,	// (0x0006148e) bg_set_opt_pane_cp2_vc

0x5fd9,	// (0x000614f6) setting_slider_graphic_pane_vc_g1

0x4016,	// (0x0005f533) setting_slider_graphic_pane_vc_t1

0x4028,	// (0x0005f545) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x0006af21) setting_slider_graphic_pane_vc_t

0x403a,	// (0x0005f557) slider_set_pane_cp_vc

0x4044,	// (0x0005f561) slider_set_pane_vc_g1

0x404d,	// (0x0005f56a) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x0006af26) slider_set_pane_vc_g

0x8241,	// (0x0006375e) set_opt_bg_pane_g1_copy1

0x8249,	// (0x00063766) set_opt_bg_pane_g2_copy1

0x4079,	// (0x0005f596) set_opt_bg_pane_g3_copy1

0x8259,	// (0x00063776) set_opt_bg_pane_g4_copy1

0x8261,	// (0x0006377e) set_opt_bg_pane_g5_copy1

0x8269,	// (0x00063786) set_opt_bg_pane_g6_copy1

0x4083,	// (0x0005f5a0) set_opt_bg_pane_g7_copy1

0x408d,	// (0x0005f5aa) set_opt_bg_pane_g8_copy1

0x4097,	// (0x0005f5b4) set_opt_bg_pane_g9_copy1

0x5f71,	// (0x0006148e) bg_set_opt_pane_cp_vc

0x40a1,	// (0x0005f5be) setting_slider_pane_vc_t1

0x40b0,	// (0x0005f5cd) setting_slider_pane_vc_t2

0x40c2,	// (0x0005f5df) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x0006af35) setting_slider_pane_vc_t

0x40d4,	// (0x0005f5f1) slider_set_pane_vc

0x0651,	// (0x0005bb6e) volume_set_pane_vc_g1

0x065a,	// (0x0005bb77) volume_set_pane_vc_g2

0x0663,	// (0x0005bb80) volume_set_pane_vc_g3

0x066c,	// (0x0005bb89) volume_set_pane_vc_g4

0x0675,	// (0x0005bb92) volume_set_pane_vc_g5

0x067e,	// (0x0005bb9b) volume_set_pane_vc_g6

0x0687,	// (0x0005bba4) volume_set_pane_vc_g7

0x0690,	// (0x0005bbad) volume_set_pane_vc_g8

0x0699,	// (0x0005bbb6) volume_set_pane_vc_g9

0x06a2,	// (0x0005bbbf) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x0006af3c) volume_set_pane_vc_g

0x40de,	// (0x0005f5fb) volume_set_pane_vc

0x40e8,	// (0x0005f605) button_value_adjust_pane_cp1_vc

0x40f2,	// (0x0005f60f) list_highlight_pane_cp2_vc

0x40fb,	// (0x0005f618) list_set_pane_vc_ParamLimits

0x40fb,	// (0x0005f618) list_set_pane_vc

0x416b,	// (0x0005f688) main_pane_set_vc_t1_ParamLimits

0x416b,	// (0x0005f688) main_pane_set_vc_t1

0x4180,	// (0x0005f69d) main_pane_set_vc_t2_ParamLimits

0x4180,	// (0x0005f69d) main_pane_set_vc_t2

0x4192,	// (0x0005f6af) main_pane_set_vc_t3_ParamLimits

0x4192,	// (0x0005f6af) main_pane_set_vc_t3

0x41a6,	// (0x0005f6c3) main_pane_set_vc_t4_ParamLimits

0x41a6,	// (0x0005f6c3) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x0006af51) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x0006af51) main_pane_set_vc_t

0x41ba,	// (0x0005f6d7) setting_code_pane_vc_ParamLimits

0x41ba,	// (0x0005f6d7) setting_code_pane_vc

0x41cb,	// (0x0005f6e8) setting_slider_graphic_pane_vc

0x41cb,	// (0x0005f6e8) setting_slider_pane_vc

0x41cb,	// (0x0005f6e8) setting_text_pane_vc

0x41cb,	// (0x0005f6e8) setting_volume_pane_vc

0x41d5,	// (0x0005f6f2) scroll_pane_cp121_vc

0x81c0,	// (0x000636dd) set_content_pane_vc

0x41dd,	// (0x0005f6fa) button_value_adjust_pane_g1

0x41e6,	// (0x0005f703) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x0006afab) button_value_adjust_pane_g

0x41ef,	// (0x0005f70c) form_field_slider_wide_pane_vc_t1_ParamLimits

0x41ef,	// (0x0005f70c) form_field_slider_wide_pane_vc_t1

0x4201,	// (0x0005f71e) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4201,	// (0x0005f71e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa93,	// (0x0006afb0) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x0006afb0) form_field_slider_wide_pane_vc_t

0x60fe,	// (0x0006161b) input_focus_pane_cp10_vc_ParamLimits

0x60fe,	// (0x0006161b) input_focus_pane_cp10_vc

0x422d,	// (0x0005f74a) slider_cont_pane_cp1_vc_ParamLimits

0x422d,	// (0x0005f74a) slider_cont_pane_cp1_vc

0x423f,	// (0x0005f75c) slider_form_pane_g1_cp2

0x404d,	// (0x0005f56a) slider_form_pane_g2_cp2

0x426c,	// (0x0005f789) form_field_slider_pane_vc_t3

0x427a,	// (0x0005f797) form_field_slider_pane_vc_t4

0x4288,	// (0x0005f7a5) slider_form_pane_vc_ParamLimits

0x4288,	// (0x0005f7a5) slider_form_pane_vc

0x4295,	// (0x0005f7b2) form_field_slider_pane_vc_t1_ParamLimits

0x4295,	// (0x0005f7b2) form_field_slider_pane_vc_t1

0x4201,	// (0x0005f71e) form_field_slider_pane_vc_t2_ParamLimits

0x4201,	// (0x0005f71e) form_field_slider_pane_vc_t2

0x0001,

0xfaa5,	// (0x0006afc2) form_field_slider_pane_vc_t_ParamLimits

0xfaa5,	// (0x0006afc2) form_field_slider_pane_vc_t

0x60fe,	// (0x0006161b) input_focus_pane_cp9_vc_ParamLimits

0x60fe,	// (0x0006161b) input_focus_pane_cp9_vc

0x42ab,	// (0x0005f7c8) slider_cont_pane_vc_ParamLimits

0x42ab,	// (0x0005f7c8) slider_cont_pane_vc

0x42bf,	// (0x0005f7dc) list_form_graphic_pane_cp_vc_ParamLimits

0x42bf,	// (0x0005f7dc) list_form_graphic_pane_cp_vc

0x2389,	// (0x0005d8a6) form_field_popup_wide_pane_vc_g1

0x42d4,	// (0x0005f7f1) form_field_popup_wide_pane_vc_t1_ParamLimits

0x42d4,	// (0x0005f7f1) form_field_popup_wide_pane_vc_t1

0x81e6,	// (0x00063703) input_focus_pane_cp8_vc_ParamLimits

0x81e6,	// (0x00063703) input_focus_pane_cp8_vc

0x4319,	// (0x0005f836) list_form_wide_pane_vc_ParamLimits

0x4319,	// (0x0005f836) list_form_wide_pane_vc

0x4325,	// (0x0005f842) list_form_graphic_pane_vc_g1

0x432d,	// (0x0005f84a) list_form_graphic_pane_vc_t1_ParamLimits

0x432d,	// (0x0005f84a) list_form_graphic_pane_vc_t1

0x5fcb,	// (0x000614e8) list_highlight_pane_cp5_vc_ParamLimits

0x5fcb,	// (0x000614e8) list_highlight_pane_cp5_vc

0x4349,	// (0x0005f866) list_form_graphic_pane_vc_ParamLimits

0x4349,	// (0x0005f866) list_form_graphic_pane_vc

0x2389,	// (0x0005d8a6) form_field_popup_pane_vc_g1

0x435f,	// (0x0005f87c) form_field_popup_pane_vc_t1_ParamLimits

0x435f,	// (0x0005f87c) form_field_popup_pane_vc_t1

0x81e6,	// (0x00063703) input_focus_pane_cp7_vc_ParamLimits

0x81e6,	// (0x00063703) input_focus_pane_cp7_vc

0x4376,	// (0x0005f893) list_form_pane_vc_ParamLimits

0x4376,	// (0x0005f893) list_form_pane_vc

0x4382,	// (0x0005f89f) data_form_pane_vc_t1_ParamLimits

0x4382,	// (0x0005f89f) data_form_pane_vc_t1

0x8241,	// (0x0006375e) input_focus_pane_vc_g1

0x8249,	// (0x00063766) input_focus_pane_vc_g2

0x8251,	// (0x0006376e) input_focus_pane_vc_g3

0x8259,	// (0x00063776) input_focus_pane_vc_g4

0x8261,	// (0x0006377e) input_focus_pane_vc_g5

0x8269,	// (0x00063786) input_focus_pane_vc_g6

0x8271,	// (0x0006378e) input_focus_pane_vc_g7

0x8279,	// (0x00063796) input_focus_pane_vc_g8

0x8281,	// (0x0006379e) input_focus_pane_vc_g9

0x5f67,	// (0x00061484) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0006abae) input_focus_pane_vc_g

0x237d,	// (0x0005d89a) data_form_pane_vc_ParamLimits

0x237d,	// (0x0005d89a) data_form_pane_vc

0x2389,	// (0x0005d8a6) form_field_data_pane_vc_g1

0x439f,	// (0x0005f8bc) form_field_data_pane_vc_t1_ParamLimits

0x439f,	// (0x0005f8bc) form_field_data_pane_vc_t1

0x81e6,	// (0x00063703) input_focus_pane_vc_ParamLimits

0x81e6,	// (0x00063703) input_focus_pane_vc

0x43b9,	// (0x0005f8d6) button_value_adjust_pane_cp3_vc

0x43c1,	// (0x0005f8de) button_value_adjust_pane_cp5_vc

0x43c9,	// (0x0005f8e6) form_field_data_pane_vc_ParamLimits

0x43c9,	// (0x0005f8e6) form_field_data_pane_vc

0x43e4,	// (0x0005f901) form_field_data_pane_vc_cp2

0x43ec,	// (0x0005f909) form_field_data_wide_pane_vc_ParamLimits

0x43ec,	// (0x0005f909) form_field_data_wide_pane_vc

0x4406,	// (0x0005f923) form_field_data_wide_pane_vc_cp2

0x440e,	// (0x0005f92b) form_field_popup_pane_vc_ParamLimits

0x440e,	// (0x0005f92b) form_field_popup_pane_vc

0x4429,	// (0x0005f946) form_field_popup_wide_pane_vc_ParamLimits

0x4429,	// (0x0005f946) form_field_popup_wide_pane_vc

0x4443,	// (0x0005f960) form_field_slider_pane_vc_ParamLimits

0x4443,	// (0x0005f960) form_field_slider_pane_vc

0x4456,	// (0x0005f973) form_field_slider_wide_pane_vc_ParamLimits

0x4456,	// (0x0005f973) form_field_slider_wide_pane_vc

0xcbb4,	// (0x000680d1) grid_touch_1_pane_ParamLimits

0xcbb4,	// (0x000680d1) grid_touch_1_pane

0xcbc8,	// (0x000680e5) grid_touch_2_pane_ParamLimits

0xcbc8,	// (0x000680e5) grid_touch_2_pane

0x4527,	// (0x0005fa44) touch_pane_g1_ParamLimits

0x4527,	// (0x0005fa44) touch_pane_g1

0x448f,	// (0x0005f9ac) cell_app_pane_cp_wide_ParamLimits

0x448f,	// (0x0005f9ac) cell_app_pane_cp_wide

0x44a0,	// (0x0005f9bd) grid_popup_fast_wide_pane_ParamLimits

0x44a0,	// (0x0005f9bd) grid_popup_fast_wide_pane

0x44b4,	// (0x0005f9d1) scroll_pane_cp19_ParamLimits

0x44b4,	// (0x0005f9d1) scroll_pane_cp19

0x5f71,	// (0x0006148e) bg_popup_window_pane_cp20

0x44c8,	// (0x0005f9e5) listscroll_popup_fast_wide_pane

0xcbf4,	// (0x00068111) grid_indicator_nsta_pane

0x44d0,	// (0x0005f9ed) clock_nsta_pane_g1

0x44d9,	// (0x0005f9f6) clock_nsta_pane_t1

0xcc02,	// (0x0006811f) cell_indicator_nsta_pane_ParamLimits

0xcc02,	// (0x0006811f) cell_indicator_nsta_pane

0x4527,	// (0x0005fa44) cell_indicator_nsta_pane_g1

0xcc1b,	// (0x00068138) cell_indicator_nsta_pane_g2

0x0001,

0xfab6,	// (0x0006afd3) cell_indicator_nsta_pane_g

0x454b,	// (0x0005fa68) clock_nsta_pane_cp

0x4553,	// (0x0005fa70) indicator_nsta_pane_cp

0x455c,	// (0x0005fa79) nsta_clock_indic_pane_g1

0x6007,	// (0x00061524) grid_indicator_pane

0x8deb,	// (0x00064308) scroll_pane_cp29

0xf37a,	// (0x0006a897) indicator_nsta_pane_cp2_ParamLimits

0xf37a,	// (0x0006a897) indicator_nsta_pane_cp2

0x5fcb,	// (0x000614e8) main_apps_wheel_pane

0x2570,	// (0x0005da8d) form_midp_field_text_pane_ParamLimits

0x26bf,	// (0x0005dbdc) scroll_bar_cp050_ParamLimits

0x45c5,	// (0x0005fae2) cell_indicator_pane_ParamLimits

0x45c5,	// (0x0005fae2) cell_indicator_pane

0x45dd,	// (0x0005fafa) cell_indicator_pane_g1

0xcc31,	// (0x0006814e) grid_wheel_folder_pane_ParamLimits

0xcc31,	// (0x0006814e) grid_wheel_folder_pane

0xcc3f,	// (0x0006815c) list_wheel_apps_pane_ParamLimits

0xcc3f,	// (0x0006815c) list_wheel_apps_pane

0xcc4d,	// (0x0006816a) main_apps_wheel_pane_g1_ParamLimits

0xcc4d,	// (0x0006816a) main_apps_wheel_pane_g1

0xcc5d,	// (0x0006817a) main_apps_wheel_pane_g2_ParamLimits

0xcc5d,	// (0x0006817a) main_apps_wheel_pane_g2

0x0001,

0xfad2,	// (0x0006afef) main_apps_wheel_pane_g_ParamLimits

0xfad2,	// (0x0006afef) main_apps_wheel_pane_g

0xcc6d,	// (0x0006818a) main_apps_wheel_pane_t1_ParamLimits

0xcc6d,	// (0x0006818a) main_apps_wheel_pane_t1

0xcc85,	// (0x000681a2) list_wheel_apps_pane_g1

0xcc8d,	// (0x000681aa) list_wheel_apps_pane_g2

0xcc95,	// (0x000681b2) list_wheel_apps_pane_g3

0xcc9d,	// (0x000681ba) list_wheel_apps_pane_g4

0xcca5,	// (0x000681c2) list_wheel_apps_pane_g5

0x0004,

0xfad7,	// (0x0006aff4) list_wheel_apps_pane_g

0x916b,	// (0x00064688) navi_icon_text_pane

0xb6b6,	// (0x00066bd3) aid_fill_nsta

0xccc2,	// (0x000681df) navi_icon_text_pane_g1

0xccce,	// (0x000681eb) navi_icon_text_pane_t1

0xabca,	// (0x000660e7) list_set_graphic_pane_t1_ParamLimits

0xabca,	// (0x000660e7) list_set_graphic_pane_t1

0x2e10,	// (0x0005e32d) popup_midp_note_alarm_window_t6_ParamLimits

0x2e10,	// (0x0005e32d) popup_midp_note_alarm_window_t6

0x2e22,	// (0x0005e33f) popup_midp_note_alarm_window_t7_ParamLimits

0x2e22,	// (0x0005e33f) popup_midp_note_alarm_window_t7

0x2e34,	// (0x0005e351) popup_midp_note_alarm_window_t8_ParamLimits

0x2e34,	// (0x0005e351) popup_midp_note_alarm_window_t8

0x2e46,	// (0x0005e363) popup_midp_note_alarm_window_t9_ParamLimits

0x2e46,	// (0x0005e363) popup_midp_note_alarm_window_t9

0x2e58,	// (0x0005e375) popup_midp_note_alarm_window_t10_ParamLimits

0x2e58,	// (0x0005e375) popup_midp_note_alarm_window_t10

0x2e6a,	// (0x0005e387) popup_midp_note_alarm_window_t11_ParamLimits

0x2e6a,	// (0x0005e387) popup_midp_note_alarm_window_t11

0x2e7c,	// (0x0005e399) scroll_pane_cp17_ParamLimits

0x2e7c,	// (0x0005e399) scroll_pane_cp17

0x0651,	// (0x0005bb6e) volume_small_pane_cp_g1

0x09d6,	// (0x0005bef3) volume_small_pane_cp_g2

0x09df,	// (0x0005befc) volume_small_pane_cp_g3

0x09e8,	// (0x0005bf05) volume_small_pane_cp_g4

0x09f1,	// (0x0005bf0e) volume_small_pane_cp_g5

0x09fa,	// (0x0005bf17) volume_small_pane_cp_g6

0x0a03,	// (0x0005bf20) volume_small_pane_cp_g7

0x0a0c,	// (0x0005bf29) volume_small_pane_cp_g8

0x0a15,	// (0x0005bf32) volume_small_pane_cp_g9

0x0a1e,	// (0x0005bf3b) volume_small_pane_cp_g10

0xe9d4,	// (0x00069ef1) midp_ticker_pane_g1_ParamLimits

0xe9e0,	// (0x00069efd) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0006ac7a) midp_ticker_pane_g_ParamLimits

0xad08,	// (0x00066225) midp_ticker_pane_t1_ParamLimits

0xb6da,	// (0x00066bf7) aid_fill_nsta_2

0x26ab,	// (0x0005dbc8) list_form2_midp_pane

0x3813,	// (0x0005ed30) midp_editing_number_pane_ParamLimits

0x3822,	// (0x0005ed3f) midp_ticker_pane_ParamLimits

0x46d0,	// (0x0005fbed) form2_midp_field_pane

0x46f4,	// (0x0005fc11) scroll_pane_cp51

0x4714,	// (0x0005fc31) form2_midp_button_pane_ParamLimits

0x4714,	// (0x0005fc31) form2_midp_button_pane

0x4726,	// (0x0005fc43) form2_midp_content_pane_ParamLimits

0x4726,	// (0x0005fc43) form2_midp_content_pane

0x4740,	// (0x0005fc5d) form2_midp_field_choice_group_pane

0x4748,	// (0x0005fc65) form2_midp_field_pane_g1

0x4750,	// (0x0005fc6d) form2_midp_field_pane_g2

0x4758,	// (0x0005fc75) form2_midp_field_pane_g3

0x4760,	// (0x0005fc7d) form2_midp_field_pane_g4

0x0003,

0xfafc,	// (0x0006b019) form2_midp_field_pane_g

0x4768,	// (0x0005fc85) form2_midp_gauge_slider_pane

0x4770,	// (0x0005fc8d) form2_midp_gauge_wait_pane

0x4778,	// (0x0005fc95) form2_midp_image_pane_ParamLimits

0x4778,	// (0x0005fc95) form2_midp_image_pane

0x4793,	// (0x0005fcb0) form2_midp_label_pane_ParamLimits

0x4793,	// (0x0005fcb0) form2_midp_label_pane

0xccfc,	// (0x00068219) form2_midp_label_pane_cp_ParamLimits

0xccfc,	// (0x00068219) form2_midp_label_pane_cp

0x47d3,	// (0x0005fcf0) form2_midp_string_pane_ParamLimits

0x47d3,	// (0x0005fcf0) form2_midp_string_pane

0xeeca,	// (0x0006a3e7) form2_midp_text_pane_ParamLimits

0xeeca,	// (0x0006a3e7) form2_midp_text_pane

0x47e5,	// (0x0005fd02) form2_midp_time_pane

0x47f5,	// (0x0005fd12) input_focus_pane_cp51_ParamLimits

0x47f5,	// (0x0005fd12) input_focus_pane_cp51

0x480d,	// (0x0005fd2a) form2_midp_label_pane_t1_ParamLimits

0x480d,	// (0x0005fd2a) form2_midp_label_pane_t1

0xeeed,	// (0x0006a40a) form2_mdip_text_pane_t1_ParamLimits

0xeeed,	// (0x0006a40a) form2_mdip_text_pane_t1

0xef0c,	// (0x0006a429) form2_midp_time_pane_t1

0x485b,	// (0x0005fd78) form2_midp_gauge_slider_pane_t1

0xcd1d,	// (0x0006823a) form2_midp_gauge_slider_pane_t2

0xcd2f,	// (0x0006824c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb05,	// (0x0006b022) form2_midp_gauge_slider_pane_t

0x4891,	// (0x0005fdae) form2_midp_slider_pane

0x489d,	// (0x0005fdba) form2_midp_gauge_wait_pane_t1

0x48ab,	// (0x0005fdc8) form2_midp_wait_pane_ParamLimits

0x48ab,	// (0x0005fdc8) form2_midp_wait_pane

0x23d0,	// (0x0005d8ed) list_single_2graphic_pane_cp4_ParamLimits

0x23d0,	// (0x0005d8ed) list_single_2graphic_pane_cp4

0x48d6,	// (0x0005fdf3) list_single_midp_graphic_pane_cp_ParamLimits

0x48d6,	// (0x0005fdf3) list_single_midp_graphic_pane_cp

0x5f71,	// (0x0006148e) list_highlight_pane_cp20

0x48fa,	// (0x0005fe17) list_single_2graphic_pane_g1_cp4

0x3e97,	// (0x0005f3b4) list_single_2graphic_pane_g2_cp4

0x4902,	// (0x0005fe1f) list_single_2graphic_pane_t1_cp4

0x5fcb,	// (0x000614e8) list_highlight_pane_cp21

0x4911,	// (0x0005fe2e) list_single_midp_graphic_pane_g4_cp

0x4920,	// (0x0005fe3d) list_single_midp_graphic_pane_t1_cp

0xcd41,	// (0x0006825e) form2_mdip_string_pane_t1_ParamLimits

0xcd41,	// (0x0006825e) form2_mdip_string_pane_t1

0x5f71,	// (0x0006148e) bg_wml_button_pane_cp2

0x5f67,	// (0x00061484) form2_midp_image_pane_g1

0xe8fe,	// (0x00069e1b) list_double_large_graphic_pane_g5_ParamLimits

0xe8fe,	// (0x00069e1b) list_double_large_graphic_pane_g5

0x0122,	// (0x0005b63f) midp_form_pane_ParamLimits

0x5fcb,	// (0x000614e8) main_apps_wheel_pane_ParamLimits

0xb3ce,	// (0x000668eb) popup_preview_window_ParamLimits

0xb3ce,	// (0x000668eb) popup_preview_window

0x1d2a,	// (0x0005d247) popup_touch_info_window_ParamLimits

0x1d2a,	// (0x0005d247) popup_touch_info_window

0x1d4c,	// (0x0005d269) popup_touch_menu_window_ParamLimits

0x1d4c,	// (0x0005d269) popup_touch_menu_window

0x5f5d,	// (0x0006147a) bg_popup_sub_pane_cp6

0x49da,	// (0x0005fef7) list_touch_menu_pane

0x49e2,	// (0x0005feff) list_single_touch_menu_pane_ParamLimits

0x49e2,	// (0x0005feff) list_single_touch_menu_pane

0x49fa,	// (0x0005ff17) list_single_touch_menu_pane_t1

0x5fcb,	// (0x000614e8) bg_popup_sub_pane_cp7_ParamLimits

0x5fcb,	// (0x000614e8) bg_popup_sub_pane_cp7

0x4a08,	// (0x0005ff25) heading_sub_pane

0x4a10,	// (0x0005ff2d) list_touch_info_pane_ParamLimits

0x4a10,	// (0x0005ff2d) list_touch_info_pane

0x4a1f,	// (0x0005ff3c) list_single_touch_info_pane_ParamLimits

0x4a1f,	// (0x0005ff3c) list_single_touch_info_pane

0x4a31,	// (0x0005ff4e) list_single_touch_info_pane_t1

0x4a3f,	// (0x0005ff5c) list_single_touch_info_pane_t2

0x0001,

0xfb13,	// (0x0006b030) list_single_touch_info_pane_t

0xc569,	// (0x00067a86) bg_popup_heading_pane_cp

0x4a4d,	// (0x0005ff6a) heading_sub_pane_t1

0x2317,	// (0x0005d834) bg_popup_preview_window_pane_cp_ParamLimits

0x2317,	// (0x0005d834) bg_popup_preview_window_pane_cp

0x4a08,	// (0x0005ff25) heading_preview_pane

0x4a10,	// (0x0005ff2d) list_preview_pane_ParamLimits

0x4a10,	// (0x0005ff2d) list_preview_pane

0x4a5b,	// (0x0005ff78) popup_preview_window_g1

0x4a1f,	// (0x0005ff3c) list_single_preview_pane_ParamLimits

0x4a1f,	// (0x0005ff3c) list_single_preview_pane

0x4a63,	// (0x0005ff80) list_single_preview_pane_g1

0x4a6b,	// (0x0005ff88) list_single_preview_pane_t1

0x4a31,	// (0x0005ff4e) list_single_preview_pane_t2

0x0001,

0xfb18,	// (0x0006b035) list_single_preview_pane_t

0x4a79,	// (0x0005ff96) bg_popup_heading_pane_cp2_ParamLimits

0x4a79,	// (0x0005ff96) bg_popup_heading_pane_cp2

0x4a8f,	// (0x0005ffac) heading_preview_pane_g1

0x4a97,	// (0x0005ffb4) heading_preview_pane_t1_ParamLimits

0x4a97,	// (0x0005ffb4) heading_preview_pane_t1

0x601e,	// (0x0006153b) soft_indicator_pane_t1_ParamLimits

0x6561,	// (0x00061a7e) scroll_pane_ParamLimits

0x8ce7,	// (0x00064204) scroll_sc2_left_pane

0x8cf0,	// (0x0006420d) scroll_sc2_right_pane

0x8d0f,	// (0x0006422c) scroll_bg_pane_g1_ParamLimits

0x8d24,	// (0x00064241) scroll_bg_pane_g2_ParamLimits

0x8d3c,	// (0x00064259) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0006ac05) scroll_bg_pane_g_ParamLimits

0x8d0f,	// (0x0006422c) scroll_handle_pane_g1_ParamLimits

0x8d5e,	// (0x0006427b) scroll_handle_pane_g2_ParamLimits

0x8d3c,	// (0x00064259) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0006ac0c) scroll_handle_pane_g_ParamLimits

0x014a,	// (0x0005b667) popup_choice_list_window_ParamLimits

0x014a,	// (0x0005b667) popup_choice_list_window

0x21ed,	// (0x0005d70a) choice_list_pane

0x226f,	// (0x0005d78c) cell_toolbar_pane_t1

0x2297,	// (0x0005d7b4) toolbar_button_pane_ParamLimits

0x3346,	// (0x0005e863) ai_gene_pane_1_t2_ParamLimits

0x3346,	// (0x0005e863) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0006ae2f) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0006ae2f) ai_gene_pane_1_t

0x4ab4,	// (0x0005ffd1) scroll_sc2_left_pane_g1

0x4ab4,	// (0x0005ffd1) scroll_sc2_right_pane_g1

0x0122,	// (0x0005b63f) bg_popup_sub_pane_cp10

0x4abe,	// (0x0005ffdb) list_choice_list_pane

0x4ad7,	// (0x0005fff4) list_single_choice_list_pane_ParamLimits

0x4ad7,	// (0x0005fff4) list_single_choice_list_pane

0x4aef,	// (0x0006000c) list_single_choice_list_pane_g1

0x8337,	// (0x00063854) list_single_choice_list_pane_t1_ParamLimits

0x8337,	// (0x00063854) list_single_choice_list_pane_t1

0x4af7,	// (0x00060014) choice_list_pane_g1

0x4aff,	// (0x0006001c) choice_list_pane_t1

0x5f5d,	// (0x0006147a) input_focus_pane_cp11

0x8c45,	// (0x00064162) title_pane_stacon_g2_ParamLimits

0x8c45,	// (0x00064162) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0006abeb) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0006abeb) title_pane_stacon_g

0xc569,	// (0x00067a86) cursor_press_pane

0xb04b,	// (0x00066568) popup_fep_hwr_window_ParamLimits

0xb04b,	// (0x00066568) popup_fep_hwr_window

0x028e,	// (0x0005b7ab) popup_fep_vkb_window_ParamLimits

0x028e,	// (0x0005b7ab) popup_fep_vkb_window

0x4b0d,	// (0x0006002a) cursor_press_pane_g1

0x0002,

0xfb41,	// (0x0006b05e) fep_vkb_side_pane_g_ParamLimits

0x0a60,	// (0x0005bf7d) fep_hwr_candidate_pane_ParamLimits

0x0a60,	// (0x0005bf7d) fep_hwr_candidate_pane

0x0a8a,	// (0x0005bfa7) fep_hwr_side_pane_ParamLimits

0x0a8a,	// (0x0005bfa7) fep_hwr_side_pane

0x0aac,	// (0x0005bfc9) fep_hwr_top_pane_ParamLimits

0x0aac,	// (0x0005bfc9) fep_hwr_top_pane

0x0ac4,	// (0x0005bfe1) fep_hwr_write_pane_ParamLimits

0x0ac4,	// (0x0005bfe1) fep_hwr_write_pane

0xfb41,	// (0x0006b05e) fep_vkb_side_pane_g

0x4b15,	// (0x00060032) fep_hwr_top_pane_g1

0x4b27,	// (0x00060044) fep_hwr_top_pane_g2

0x0afe,	// (0x0005c01b) fep_hwr_top_pane_g3

0x0002,

0xfb1d,	// (0x0006b03a) fep_hwr_top_pane_g

0x0b13,	// (0x0005c030) fep_hwr_top_text_pane

0x8e58,	// (0x00064375) fep_hwr_top_text_pane_g1

0x4b5d,	// (0x0006007a) fep_hwr_top_text_pane_t1

0x0c1d,	// (0x0005c13a) fep_hwr_candidate_pane_g1

0x4da8,	// (0x000602c5) fep_vkb_keypad_pane_g3_ParamLimits

0x4da8,	// (0x000602c5) fep_vkb_keypad_pane_g3

0x4dd4,	// (0x000602f1) fep_vkb_keypad_pane_g4_ParamLimits

0x4dd4,	// (0x000602f1) fep_vkb_keypad_pane_g4

0x4e4b,	// (0x00060368) fep_vkb_bottom_pane_g2_ParamLimits

0x4e4b,	// (0x00060368) fep_vkb_bottom_pane_g2

0x0001,

0xfb48,	// (0x0006b065) fep_vkb_bottom_pane_g_ParamLimits

0xfb48,	// (0x0006b065) fep_vkb_bottom_pane_g

0x4ab4,	// (0x0005ffd1) cell_vkb_side_pane_g2

0x0001,

0xfb52,	// (0x0006b06f) cell_vkb_side_pane_g

0x4ed6,	// (0x000603f3) cell_vkb_side_pane_t1

0x4ee4,	// (0x00060401) cell_vkb_side_pane_t1_copy1

0x4ab4,	// (0x0005ffd1) bg_fep_vkb_candidate_pane_g2

0x5028,	// (0x00060545) cell_vkb_candidate_pane_ParamLimits

0x4b6b,	// (0x00060088) aid_size_cell_vkb_ParamLimits

0x4b6b,	// (0x00060088) aid_size_cell_vkb

0x5028,	// (0x00060545) cell_vkb_candidate_pane

0x0c44,	// (0x0005c161) bg_popup_fep_shadow_pane_g1

0xcdf6,	// (0x00068313) fep_vkb_bottom_pane_ParamLimits

0xcdf6,	// (0x00068313) fep_vkb_bottom_pane

0x4c3a,	// (0x00060157) fep_vkb_candidate_pane_ParamLimits

0x4c3a,	// (0x00060157) fep_vkb_candidate_pane

0xce22,	// (0x0006833f) fep_vkb_keypad_pane_ParamLimits

0xce22,	// (0x0006833f) fep_vkb_keypad_pane

0xce49,	// (0x00068366) fep_vkb_side_pane_ParamLimits

0xce49,	// (0x00068366) fep_vkb_side_pane

0xce85,	// (0x000683a2) fep_vkb_top_pane_ParamLimits

0xce85,	// (0x000683a2) fep_vkb_top_pane

0x4d01,	// (0x0006021e) fep_vkb_top_pane_g1_ParamLimits

0x4d01,	// (0x0006021e) fep_vkb_top_pane_g1

0x4d10,	// (0x0006022d) fep_vkb_top_pane_g2_ParamLimits

0x4d10,	// (0x0006022d) fep_vkb_top_pane_g2

0x4d1f,	// (0x0006023c) fep_vkb_top_pane_g3_ParamLimits

0x4d1f,	// (0x0006023c) fep_vkb_top_pane_g3

0x0003,

0xfb38,	// (0x0006b055) fep_vkb_top_pane_g_ParamLimits

0xfb38,	// (0x0006b055) fep_vkb_top_pane_g

0x4d3d,	// (0x0006025a) fep_vkb_top_text_pane_ParamLimits

0x4d3d,	// (0x0006025a) fep_vkb_top_text_pane

0xcec1,	// (0x000683de) fep_vkb_side_pane_g1_ParamLimits

0xcec1,	// (0x000683de) fep_vkb_side_pane_g1

0x4d97,	// (0x000602b4) grid_vkb_side_pane_ParamLimits

0x4d97,	// (0x000602b4) grid_vkb_side_pane

0x0c4c,	// (0x0005c169) bg_popup_fep_shadow_pane_g2

0x0c55,	// (0x0005c172) bg_popup_fep_shadow_pane_g3

0x0c5d,	// (0x0005c17a) bg_popup_fep_shadow_pane_g4

0x0c66,	// (0x0005c183) bg_popup_fep_shadow_pane_g5

0x0c70,	// (0x0005c18d) bg_popup_fep_shadow_pane_g6

0x0c78,	// (0x0005c195) bg_popup_fep_shadow_pane_g7

0x8259,	// (0x00063776) bg_popup_fep_shadow_pane_g8

0x4df6,	// (0x00060313) grid_vkb_keypad_number_pane_ParamLimits

0x4df6,	// (0x00060313) grid_vkb_keypad_number_pane

0x4e0a,	// (0x00060327) grid_vkb_keypad_pane_ParamLimits

0x4e0a,	// (0x00060327) grid_vkb_keypad_pane

0x4e30,	// (0x0006034d) fep_vkb_bottom_pane_g1_ParamLimits

0x4e30,	// (0x0006034d) fep_vkb_bottom_pane_g1

0x4e59,	// (0x00060376) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4e59,	// (0x00060376) grid_vkb_keypad_bottom_left_pane

0x4e6e,	// (0x0006038b) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4e6e,	// (0x0006038b) grid_vkb_keypad_bottom_right_pane

0x4e83,	// (0x000603a0) fep_vkb_top_text_pane_g1

0xcf08,	// (0x00068425) fep_vkb_top_text_pane_t1

0xcf1a,	// (0x00068437) cell_vkb_side_pane_ParamLimits

0xcf1a,	// (0x00068437) cell_vkb_side_pane

0x4ab4,	// (0x0005ffd1) cell_vkb_side_pane_g1

0x4ef2,	// (0x0006040f) cell_vkb_keypad_pane_ParamLimits

0x4ef2,	// (0x0006040f) cell_vkb_keypad_pane

0x4f7f,	// (0x0006049c) cell_vkb_keypad_pane_g1

0x0008,

0xfb65,	// (0x0006b082) bg_popup_fep_shadow_pane_g

0x0c8a,	// (0x0005c1a7) cell_hwr_side_pane_g1

0x0c8a,	// (0x0005c1a7) cell_hwr_side_pane_g2

0x4f89,	// (0x000604a6) cell_vkb_keypad_pane_t1

0xcf30,	// (0x0006844d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcf30,	// (0x0006844d) cell_vkb_keypad_bottom_left_pane

0xcf45,	// (0x00068462) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcf45,	// (0x00068462) cell_vkb_keypad_bottom_right_pane

0x4ab4,	// (0x0005ffd1) cell_vkb_keypad_bottom_left_pane_g1

0x4ab4,	// (0x0005ffd1) cell_vkb_keypad_bottom_right_pane_g1

0x4fed,	// (0x0006050a) cell_vkb_keypad_number_pane_ParamLimits

0x4fed,	// (0x0006050a) cell_vkb_keypad_number_pane

0x500c,	// (0x00060529) cell_vkb_keypad_number_pane_g1

0x5016,	// (0x00060533) cell_vkb_keypad_number_pane_g2

0x501f,	// (0x0006053c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb57,	// (0x0006b074) cell_vkb_keypad_number_pane_g

0x4f89,	// (0x000604a6) cell_vkb_keypad_number_pane_t1

0x5049,	// (0x00060566) fep_vkb_candidate_pane_g1

0x0001,

0xfb78,	// (0x0006b095) cell_hwr_side_pane_g

0x5062,	// (0x0006057f) cell_hwr_side_pane_t1

0x0c94,	// (0x0005c1b1) cell_hwr_side_pane_t1_copy1

0x0ca2,	// (0x0005c1bf) cell_hwr_candidate_pane_g1

0x0cd1,	// (0x0005c1ee) cell_hwr_candidate_pane_t1

0x4ab4,	// (0x0005ffd1) cell_vkb_candidate_pane_g2

0x50a6,	// (0x000605c3) cell_vkb_candidate_pane_t1

0x0a27,	// (0x0005bf44) bg_popup_fep_shadow_pane_ParamLimits

0x0a27,	// (0x0005bf44) bg_popup_fep_shadow_pane

0x0ade,	// (0x0005bffb) bg_fep_hwr_top_pane_g4

0x4b39,	// (0x00060056) bg_hwr_side_pane_g1_ParamLimits

0x4b39,	// (0x00060056) bg_hwr_side_pane_g1

0xbd0c,	// (0x00067229) cell_hwr_side_pane_ParamLimits

0xbd0c,	// (0x00067229) cell_hwr_side_pane

0x0b8e,	// (0x0005c0ab) fep_hwr_write_pane_g1_ParamLimits

0x0b8e,	// (0x0005c0ab) fep_hwr_write_pane_g1

0x0b9b,	// (0x0005c0b8) fep_hwr_write_pane_g2_ParamLimits

0x0b9b,	// (0x0005c0b8) fep_hwr_write_pane_g2

0x0ba8,	// (0x0005c0c5) fep_hwr_write_pane_g3_ParamLimits

0x0ba8,	// (0x0005c0c5) fep_hwr_write_pane_g3

0xbd2c,	// (0x00067249) fep_hwr_write_pane_g4_ParamLimits

0xbd2c,	// (0x00067249) fep_hwr_write_pane_g4

0x0005,

0xfb24,	// (0x0006b041) fep_hwr_write_pane_g_ParamLimits

0xfb24,	// (0x0006b041) fep_hwr_write_pane_g

0x0ade,	// (0x0005bffb) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0ade,	// (0x0005bffb) bg_fep_hwr_candidate_pane_g2

0x0bcb,	// (0x0005c0e8) cell_hwr_candidate_pane_ParamLimits

0x0bcb,	// (0x0005c0e8) cell_hwr_candidate_pane

0x0c1d,	// (0x0005c13a) fep_hwr_candidate_pane_g1_ParamLimits

0x4b99,	// (0x000600b6) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4b99,	// (0x000600b6) bg_popup_fep_shadow_pane_cp2

0x4d2f,	// (0x0006024c) fep_vkb_top_pane_g4_ParamLimits

0x4d2f,	// (0x0006024c) fep_vkb_top_pane_g4

0x4d75,	// (0x00060292) fep_vkb_side_pane_g2_ParamLimits

0x4d75,	// (0x00060292) fep_vkb_side_pane_g2

0xa62b,	// (0x00065b48) list_setting_pane_t4_ParamLimits

0xa62b,	// (0x00065b48) list_setting_pane_t4

0xa6c7,	// (0x00065be4) list_setting_number_pane_t5_ParamLimits

0xa6c7,	// (0x00065be4) list_setting_number_pane_t5

0xaa34,	// (0x00065f51) list_double_heading_pane_cp2_ParamLimits

0xaa34,	// (0x00065f51) list_double_heading_pane_cp2

0x50b4,	// (0x000605d1) list_double_heading_pane_g1_cp2_ParamLimits

0x50b4,	// (0x000605d1) list_double_heading_pane_g1_cp2

0x50c0,	// (0x000605dd) list_double_heading_pane_g2_cp2_ParamLimits

0x50c0,	// (0x000605dd) list_double_heading_pane_g2_cp2

0x50d4,	// (0x000605f1) list_double_heading_pane_t1_cp2_ParamLimits

0x50d4,	// (0x000605f1) list_double_heading_pane_t1_cp2

0x50ea,	// (0x00060607) list_double_heading_pane_t2_cp2_ParamLimits

0x50ea,	// (0x00060607) list_double_heading_pane_t2_cp2

0x5f55,	// (0x00061472) aid_value_unit2

0xe861,	// (0x00069d7e) popup_preview_fixed_window

0x610c,	// (0x00061629) bg_popup_preview_window_pane_cp02

0x50fc,	// (0x00060619) list_preview_fixed_pane

0x5142,	// (0x0006065f) list_empty_pane_fp_ParamLimits

0x5142,	// (0x0006065f) list_empty_pane_fp

0x5142,	// (0x0006065f) list_single_cale_day_pane_fp_ParamLimits

0x5142,	// (0x0006065f) list_single_cale_day_pane_fp

0x5142,	// (0x0006065f) list_single_graphic_heading_pane_fp_ParamLimits

0x5142,	// (0x0006065f) list_single_graphic_heading_pane_fp

0x5142,	// (0x0006065f) list_single_graphic_pane_fp_ParamLimits

0x5142,	// (0x0006065f) list_single_graphic_pane_fp

0x5142,	// (0x0006065f) list_single_heading_pane_fp_ParamLimits

0x5142,	// (0x0006065f) list_single_heading_pane_fp

0x5142,	// (0x0006065f) list_single_pane_fp_ParamLimits

0x5142,	// (0x0006065f) list_single_pane_fp

0x515b,	// (0x00060678) list_single_pane_fp_g1_ParamLimits

0x515b,	// (0x00060678) list_single_pane_fp_g1

0x50b4,	// (0x000605d1) list_single_pane_fp_g2_ParamLimits

0x50b4,	// (0x000605d1) list_single_pane_fp_g2

0x50c0,	// (0x000605dd) list_single_pane_fp_g3_ParamLimits

0x50c0,	// (0x000605dd) list_single_pane_fp_g3

0x5167,	// (0x00060684) list_single_pane_fp_g4_ParamLimits

0x5167,	// (0x00060684) list_single_pane_fp_g4

0x0003,

0xfb8b,	// (0x0006b0a8) list_single_pane_fp_g_ParamLimits

0xfb8b,	// (0x0006b0a8) list_single_pane_fp_g

0xef1f,	// (0x0006a43c) list_single_pane_fp_t1_ParamLimits

0xef1f,	// (0x0006a43c) list_single_pane_fp_t1

0xef36,	// (0x0006a453) list_single_graphic_pane_fp_g1_ParamLimits

0xef36,	// (0x0006a453) list_single_graphic_pane_fp_g1

0x515b,	// (0x00060678) list_single_graphic_pane_fp_g2_ParamLimits

0x515b,	// (0x00060678) list_single_graphic_pane_fp_g2

0x50b4,	// (0x000605d1) list_single_graphic_pane_fp_g3_ParamLimits

0x50b4,	// (0x000605d1) list_single_graphic_pane_fp_g3

0x50c0,	// (0x000605dd) list_single_graphic_pane_fp_g4_ParamLimits

0x50c0,	// (0x000605dd) list_single_graphic_pane_fp_g4

0x5167,	// (0x00060684) list_single_graphic_pane_fp_g5_ParamLimits

0x5167,	// (0x00060684) list_single_graphic_pane_fp_g5

0x0004,

0xfb94,	// (0x0006b0b1) list_single_graphic_pane_fp_g_ParamLimits

0xfb94,	// (0x0006b0b1) list_single_graphic_pane_fp_g

0xef42,	// (0x0006a45f) list_single_graphic_pane_fp_t1_ParamLimits

0xef42,	// (0x0006a45f) list_single_graphic_pane_fp_t1

0xef36,	// (0x0006a453) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xef36,	// (0x0006a453) list_single_graphic_heading_pane_fp_g1

0x515b,	// (0x00060678) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x515b,	// (0x00060678) list_single_graphic_heading_pane_fp_g2

0x50b4,	// (0x000605d1) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x50b4,	// (0x000605d1) list_single_graphic_heading_pane_fp_g3

0x50c0,	// (0x000605dd) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x50c0,	// (0x000605dd) list_single_graphic_heading_pane_fp_g4

0x5167,	// (0x00060684) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5167,	// (0x00060684) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb94,	// (0x0006b0b1) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb94,	// (0x0006b0b1) list_single_graphic_heading_pane_fp_g

0xef58,	// (0x0006a475) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xef58,	// (0x0006a475) list_single_graphic_heading_pane_fp_t1

0xef6e,	// (0x0006a48b) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xef6e,	// (0x0006a48b) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9f,	// (0x0006b0bc) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9f,	// (0x0006b0bc) list_single_graphic_heading_pane_fp_t

0xef80,	// (0x0006a49d) list_single_cale_day_pane_fp_g1_ParamLimits

0xef80,	// (0x0006a49d) list_single_cale_day_pane_fp_g1

0x5173,	// (0x00060690) list_single_cale_day_pane_fp_g2_ParamLimits

0x5173,	// (0x00060690) list_single_cale_day_pane_fp_g2

0x3c44,	// (0x0005f161) list_single_cale_day_pane_fp_g3_ParamLimits

0x3c44,	// (0x0005f161) list_single_cale_day_pane_fp_g3

0x3c6c,	// (0x0005f189) list_single_cale_day_pane_fp_g4_ParamLimits

0x3c6c,	// (0x0005f189) list_single_cale_day_pane_fp_g4

0x3c90,	// (0x0005f1ad) list_single_cale_day_pane_fp_g5_ParamLimits

0x3c90,	// (0x0005f1ad) list_single_cale_day_pane_fp_g5

0x0004,

0xfba4,	// (0x0006b0c1) list_single_cale_day_pane_fp_g_ParamLimits

0xfba4,	// (0x0006b0c1) list_single_cale_day_pane_fp_g

0xefb8,	// (0x0006a4d5) list_single_cale_day_pane_fp_t1_ParamLimits

0xefb8,	// (0x0006a4d5) list_single_cale_day_pane_fp_t1

0xefde,	// (0x0006a4fb) list_single_cale_day_pane_fp_t2_ParamLimits

0xefde,	// (0x0006a4fb) list_single_cale_day_pane_fp_t2

0xeff7,	// (0x0006a514) list_single_cale_day_pane_fp_t3_ParamLimits

0xeff7,	// (0x0006a514) list_single_cale_day_pane_fp_t3

0x0002,

0xfbaf,	// (0x0006b0cc) list_single_cale_day_pane_fp_t_ParamLimits

0xfbaf,	// (0x0006b0cc) list_single_cale_day_pane_fp_t

0x515b,	// (0x00060678) list_empty_pane_fp_g1_ParamLimits

0x515b,	// (0x00060678) list_empty_pane_fp_g1

0xf010,	// (0x0006a52d) list_empty_pane_fp_t1

0xf01e,	// (0x0006a53b) list_empty_pane_fp_t2

0x0001,

0xfbb6,	// (0x0006b0d3) list_empty_pane_fp_t

0x515b,	// (0x00060678) list_single_heading_pane_fp_g1_ParamLimits

0x515b,	// (0x00060678) list_single_heading_pane_fp_g1

0x50b4,	// (0x000605d1) list_single_heading_pane_fp_g2_ParamLimits

0x50b4,	// (0x000605d1) list_single_heading_pane_fp_g2

0x50c0,	// (0x000605dd) list_single_heading_pane_fp_g3_ParamLimits

0x50c0,	// (0x000605dd) list_single_heading_pane_fp_g3

0x0002,

0xfbbb,	// (0x0006b0d8) list_single_heading_pane_fp_g_ParamLimits

0xfbbb,	// (0x0006b0d8) list_single_heading_pane_fp_g

0xf02c,	// (0x0006a549) list_single_heading_pane_fp_t1_ParamLimits

0xf02c,	// (0x0006a549) list_single_heading_pane_fp_t1

0xf03e,	// (0x0006a55b) list_single_heading_pane_fp_t2_ParamLimits

0xf03e,	// (0x0006a55b) list_single_heading_pane_fp_t2

0x0001,

0xfbc2,	// (0x0006b0df) list_single_heading_pane_fp_t_ParamLimits

0xfbc2,	// (0x0006b0df) list_single_heading_pane_fp_t

0x834c,	// (0x00063869) aid_size_cell_fast

0x60e1,	// (0x000615fe) soft_indicator_pane_cp1_t1

0x8389,	// (0x000638a6) cell_app_pane_cp2_ParamLimits

0x8389,	// (0x000638a6) cell_app_pane_cp2

0x0a49,	// (0x0005bf66) fep_hwr_candidate_drop_down_list_pane

0x0c37,	// (0x0005c154) fep_hwr_candidate_pane_g3_ParamLimits

0x0c37,	// (0x0005c154) fep_hwr_candidate_pane_g3

0xcdd7,	// (0x000682f4) fep_hwr_candidate_pane_g4_ParamLimits

0xcdd7,	// (0x000682f4) fep_hwr_candidate_pane_g4

0x0002,

0xfb31,	// (0x0006b04e) fep_hwr_candidate_pane_g_ParamLimits

0xfb31,	// (0x0006b04e) fep_hwr_candidate_pane_g

0x4c29,	// (0x00060146) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4c29,	// (0x00060146) fep_vkb_candidate_drop_down_list_pane

0x5051,	// (0x0006056e) fep_vkb_candidate_pane_g3

0x5059,	// (0x00060576) fep_vkb_candidate_pane_g4

0x0002,

0xfb5e,	// (0x0006b07b) fep_vkb_candidate_pane_g

0x0ca2,	// (0x0005c1bf) cell_hwr_candidate_pane_g1_ParamLimits

0x0cb0,	// (0x0005c1cd) cell_hwr_candidate_pane_g3_ParamLimits

0x0cb0,	// (0x0005c1cd) cell_hwr_candidate_pane_g3

0x658d,	// (0x00061aaa) cell_hwr_candidate_pane_g4_ParamLimits

0x658d,	// (0x00061aaa) cell_hwr_candidate_pane_g4

0x0002,

0xfb7d,	// (0x0006b09a) cell_hwr_candidate_pane_g_ParamLimits

0xfb7d,	// (0x0006b09a) cell_hwr_candidate_pane_g

0x5070,	// (0x0006058d) cell_vkb_candidate_pane_g3_ParamLimits

0x5070,	// (0x0006058d) cell_vkb_candidate_pane_g3

0x508b,	// (0x000605a8) cell_vkb_candidate_pane_g4_ParamLimits

0x508b,	// (0x000605a8) cell_vkb_candidate_pane_g4

0x517f,	// (0x0006069c) cell_app_pane_cp2_g1_ParamLimits

0x517f,	// (0x0006069c) cell_app_pane_cp2_g1

0x519d,	// (0x000606ba) cell_app_pane_cp2_g2_ParamLimits

0x519d,	// (0x000606ba) cell_app_pane_cp2_g2

0x0001,

0xfbc7,	// (0x0006b0e4) cell_app_pane_cp2_g_ParamLimits

0xfbc7,	// (0x0006b0e4) cell_app_pane_cp2_g

0x51a9,	// (0x000606c6) cell_app_pane_cp2_t1_ParamLimits

0x51a9,	// (0x000606c6) cell_app_pane_cp2_t1

0x81e6,	// (0x00063703) grid_highlight_pane_cp1_ParamLimits

0x81e6,	// (0x00063703) grid_highlight_pane_cp1

0x0cef,	// (0x0005c20c) cell_hwr_candidate_pane_cp1_ParamLimits

0x0cef,	// (0x0005c20c) cell_hwr_candidate_pane_cp1

0x0ca2,	// (0x0005c1bf) fep_hwr_candidate_drop_down_list_pane_g1

0x0d13,	// (0x0005c230) fep_hwr_candidate_drop_down_list_pane_g2

0x0d20,	// (0x0005c23d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcc,	// (0x0006b0e9) fep_hwr_candidate_drop_down_list_pane_g

0x0d2d,	// (0x0005c24a) fep_hwr_candidate_drop_down_list_scroll_pane

0x0d36,	// (0x0005c253) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0d36,	// (0x0005c253) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0d43,	// (0x0005c260) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0d43,	// (0x0005c260) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0d50,	// (0x0005c26d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0d50,	// (0x0005c26d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0d5d,	// (0x0005c27a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0d5d,	// (0x0005c27a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0d78,	// (0x0005c295) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0d78,	// (0x0005c295) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0d93,	// (0x0005c2b0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0d93,	// (0x0005c2b0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0dae,	// (0x0005c2cb) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0dae,	// (0x0005c2cb) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0dc9,	// (0x0005c2e6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0dc9,	// (0x0005c2e6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd3,	// (0x0006b0f0) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd3,	// (0x0006b0f0) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x51bb,	// (0x000606d8) cell_vkb_candidate_pane_cp1_ParamLimits

0x51bb,	// (0x000606d8) cell_vkb_candidate_pane_cp1

0x4d2f,	// (0x0006024c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4d2f,	// (0x0006024c) fep_vkb_candidate_drop_down_list_pane_g1

0x51e1,	// (0x000606fe) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x51e1,	// (0x000606fe) fep_vkb_candidate_drop_down_list_pane_g2

0x51ee,	// (0x0006070b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x51ee,	// (0x0006070b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe4,	// (0x0006b101) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe4,	// (0x0006b101) fep_vkb_candidate_drop_down_list_pane_g

0x51fb,	// (0x00060718) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x51fb,	// (0x00060718) fep_vkb_candidate_drop_down_list_scroll_pane

0x5208,	// (0x00060725) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5208,	// (0x00060725) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5215,	// (0x00060732) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5215,	// (0x00060732) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5221,	// (0x0006073e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5221,	// (0x0006073e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x522d,	// (0x0006074a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x522d,	// (0x0006074a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x524e,	// (0x0006076b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x524e,	// (0x0006076b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x526f,	// (0x0006078c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x526f,	// (0x0006078c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5290,	// (0x000607ad) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5290,	// (0x000607ad) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x52b1,	// (0x000607ce) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x52b1,	// (0x000607ce) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbeb,	// (0x0006b108) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbeb,	// (0x0006b108) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9e8f,	// (0x000653ac) title_pane_g1_ParamLimits

0x9ea2,	// (0x000653bf) title_pane_g2_ParamLimits

0xf54e,	// (0x0006aa6b) title_pane_g_ParamLimits

0x8e48,	// (0x00064365) aid_call2_pane

0x8e50,	// (0x0006436d) aid_call_pane

0x8e58,	// (0x00064375) popup_clock_analogue_window_g1

0x8e58,	// (0x00064375) popup_clock_analogue_window_g2

0xf279,	// (0x0006a796) popup_clock_analogue_window_g3

0xf282,	// (0x0006a79f) popup_clock_analogue_window_g4

0x5f67,	// (0x00061484) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0006ac1a) popup_clock_analogue_window_g

0xf28a,	// (0x0006a7a7) popup_clock_analogue_window_t1

0xf298,	// (0x0006a7b5) clock_digital_number_pane_ParamLimits

0xf298,	// (0x0006a7b5) clock_digital_number_pane

0xf2a4,	// (0x0006a7c1) clock_digital_number_pane_cp02_ParamLimits

0xf2a4,	// (0x0006a7c1) clock_digital_number_pane_cp02

0xf2b0,	// (0x0006a7cd) clock_digital_number_pane_cp03_ParamLimits

0xf2b0,	// (0x0006a7cd) clock_digital_number_pane_cp03

0xf2bc,	// (0x0006a7d9) clock_digital_number_pane_cp04_ParamLimits

0xf2bc,	// (0x0006a7d9) clock_digital_number_pane_cp04

0xf2c8,	// (0x0006a7e5) clock_digital_separator_pane_ParamLimits

0xf2c8,	// (0x0006a7e5) clock_digital_separator_pane

0xf2d4,	// (0x0006a7f1) popup_clock_digital_window_t1_ParamLimits

0xf2d4,	// (0x0006a7f1) popup_clock_digital_window_t1

0x5f67,	// (0x00061484) clock_digital_number_pane_g1

0x5f67,	// (0x00061484) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0006ac25) clock_digital_number_pane_g

0x5f67,	// (0x00061484) clock_digital_separator_pane_g1

0x5f67,	// (0x00061484) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0006ac25) clock_digital_separator_pane_g

0xb6b6,	// (0x00066bd3) aid_fill_nsta_ParamLimits

0xb7ee,	// (0x00066d0b) indicator_nsta_pane_ParamLimits

0x207a,	// (0x0005d597) popup_clock_analogue_window

0x207a,	// (0x0005d597) popup_clock_digital_window

0xcbf4,	// (0x00068111) grid_indicator_nsta_pane_ParamLimits

0x44e7,	// (0x0005fa04) clock_nsta_pane_t2

0x0001,

0xfab1,	// (0x0006afce) clock_nsta_pane_t

0xf246,	// (0x0006a763) aid_size_max_handle

0xa9a7,	// (0x00065ec4) aid_size_min_handle

0xc569,	// (0x00067a86) editor_scroll_pane

0x52cc,	// (0x000607e9) ex_editor_pane

0x8312,	// (0x0006382f) scroll_pane_cp13

0x8185,	// (0x000636a2) scroll_pane_cp14

0x8e87,	// (0x000643a4) scroll_pane_cp36

0xaa47,	// (0x00065f64) list_single_graphic_hl_pane_cp2_ParamLimits

0xaa47,	// (0x00065f64) list_single_graphic_hl_pane_cp2

0xca90,	// (0x00067fad) list_single_graphic_hl_pane_ParamLimits

0xca90,	// (0x00067fad) list_single_graphic_hl_pane

0xf054,	// (0x0006a571) aid_size_min_hl_cp1

0x52d4,	// (0x000607f1) list_highlight_pane_cp34_ParamLimits

0x52d4,	// (0x000607f1) list_highlight_pane_cp34

0x52e5,	// (0x00060802) list_single_graphic_hl_pane_g1_ParamLimits

0x52e5,	// (0x00060802) list_single_graphic_hl_pane_g1

0xbd41,	// (0x0006725e) list_single_graphic_hl_pane_g2_ParamLimits

0xbd41,	// (0x0006725e) list_single_graphic_hl_pane_g2

0xbd41,	// (0x0006725e) list_single_graphic_hl_pane_g3_ParamLimits

0xbd41,	// (0x0006725e) list_single_graphic_hl_pane_g3

0xcf60,	// (0x0006847d) list_single_graphic_hl_pane_g4_ParamLimits

0xcf60,	// (0x0006847d) list_single_graphic_hl_pane_g4

0x5322,	// (0x0006083f) list_single_graphic_hl_pane_g5_ParamLimits

0x5322,	// (0x0006083f) list_single_graphic_hl_pane_g5

0x0004,

0xfbfc,	// (0x0006b119) list_single_graphic_hl_pane_g_ParamLimits

0xfbfc,	// (0x0006b119) list_single_graphic_hl_pane_g

0xbd4d,	// (0x0006726a) list_single_graphic_hl_pane_t1_ParamLimits

0xbd4d,	// (0x0006726a) list_single_graphic_hl_pane_t1

0x52f2,	// (0x0006080f) aid_size_min_hl_cp2

0x52fb,	// (0x00060818) list_highlight_pane_cp34_cp2_ParamLimits

0x52fb,	// (0x00060818) list_highlight_pane_cp34_cp2

0x52e5,	// (0x00060802) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x52e5,	// (0x00060802) list_single_graphic_hl_pane_g1_cp2

0x5308,	// (0x00060825) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5308,	// (0x00060825) list_single_graphic_hl_pane_g2_cp2

0xcf6c,	// (0x00068489) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcf6c,	// (0x00068489) list_single_graphic_hl_pane_g3_cp2

0xcf60,	// (0x0006847d) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcf60,	// (0x0006847d) list_single_graphic_hl_pane_g4_cp2

0x5322,	// (0x0006083f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5322,	// (0x0006083f) list_single_graphic_hl_pane_g5_cp2

0xae19,	// (0x00066336) control_pane_g4_ParamLimits

0xae19,	// (0x00066336) control_pane_g4

0x0122,	// (0x0005b63f) bg_popup_sub_pane_cp10_ParamLimits

0x4abe,	// (0x0005ffdb) list_choice_list_pane_ParamLimits

0x4acd,	// (0x0005ffea) scroll_pane_cp23

0x610c,	// (0x00061629) bg_popup_preview_window_pane_cp02_ParamLimits

0x50fc,	// (0x00060619) list_preview_fixed_pane_ParamLimits

0x5112,	// (0x0006062f) list_preview_fixed_pane_cp_ParamLimits

0x5112,	// (0x0006062f) list_preview_fixed_pane_cp

0x511e,	// (0x0006063b) popup_preview_fixed_window_g1_ParamLimits

0x511e,	// (0x0006063b) popup_preview_fixed_window_g1

0x512a,	// (0x00060647) popup_preview_fixed_window_g2_ParamLimits

0x512a,	// (0x00060647) popup_preview_fixed_window_g2

0x0002,

0xfb84,	// (0x0006b0a1) popup_preview_fixed_window_g_ParamLimits

0xfb84,	// (0x0006b0a1) popup_preview_fixed_window_g

0xf1b8,	// (0x0006a6d5) aid_navi_side_left_pane_ParamLimits

0xf1cd,	// (0x0006a6ea) aid_navi_side_right_pane_ParamLimits

0xf1e5,	// (0x0006a702) navi_icon_pane_stacon_ParamLimits

0xf1f9,	// (0x0006a716) navi_navi_pane_stacon_ParamLimits

0xf1e5,	// (0x0006a702) navi_text_pane_stacon_ParamLimits

0x5f5d,	// (0x0006147a) main_text_info_pane

0x534c,	// (0x00060869) listscroll_text_info_pane

0x5354,	// (0x00060871) list_text_info_pane_ParamLimits

0x5354,	// (0x00060871) list_text_info_pane

0x5363,	// (0x00060880) scroll_pane_cp24_ParamLimits

0x5363,	// (0x00060880) scroll_pane_cp24

0xcf7a,	// (0x00068497) list_text_info_pane_t1_ParamLimits

0xcf7a,	// (0x00068497) list_text_info_pane_t1

0xafaf,	// (0x000664cc) popup_fast_swap2_window_ParamLimits

0xafaf,	// (0x000664cc) popup_fast_swap2_window

0x53a6,	// (0x000608c3) aid_size_cell_fast2

0x5f5d,	// (0x0006147a) bg_popup_window_pane_cp17

0x26d7,	// (0x0005dbf4) heading_pane_cp2

0x6312,	// (0x0006182f) listscroll_fast2_pane

0x53b0,	// (0x000608cd) grid_fast2_pane

0x53ba,	// (0x000608d7) listscroll_fast2_pane_g1

0x53c4,	// (0x000608e1) listscroll_fast2_pane_g2

0x0001,

0xfc07,	// (0x0006b124) listscroll_fast2_pane_g

0x8312,	// (0x0006382f) scroll_pane_cp26

0x53ce,	// (0x000608eb) cell_fast2_pane_ParamLimits

0x53ce,	// (0x000608eb) cell_fast2_pane

0x53e5,	// (0x00060902) cell_fast2_pane_g1

0x53ee,	// (0x0006090b) cell_fast2_pane_g2

0x53f7,	// (0x00060914) cell_fast2_pane_g3

0x0002,

0xfc0c,	// (0x0006b129) cell_fast2_pane_g

0x6354,	// (0x00061871) grid_highlight_pane_cp9

0x6369,	// (0x00061886) main_eswt_pane_ParamLimits

0x6369,	// (0x00061886) main_eswt_pane

0x5378,	// (0x00060895) list_single_text_info_pane

0x53ff,	// (0x0006091c) eswt_ctrl_button_pane

0x53ff,	// (0x0006091c) eswt_ctrl_canvas_pane

0x5407,	// (0x00060924) eswt_ctrl_combo_pane

0x53ff,	// (0x0006091c) eswt_ctrl_default_pane

0x53ff,	// (0x0006091c) eswt_ctrl_label_pane

0x540f,	// (0x0006092c) eswt_ctrl_wait_pane

0x5417,	// (0x00060934) eswt_shell_pane

0x5f5d,	// (0x0006147a) listscroll_eswt_app_pane

0x5437,	// (0x00060954) popup_eswt_tasktip_window_ParamLimits

0x5437,	// (0x00060954) popup_eswt_tasktip_window

0x2317,	// (0x0005d834) bg_popup_window_pane_cp18

0x5448,	// (0x00060965) eswt_control_pane_g1_ParamLimits

0x5448,	// (0x00060965) eswt_control_pane_g1

0x5455,	// (0x00060972) eswt_control_pane_g2_ParamLimits

0x5455,	// (0x00060972) eswt_control_pane_g2

0x5462,	// (0x0006097f) eswt_control_pane_g3_ParamLimits

0x5462,	// (0x0006097f) eswt_control_pane_g3

0x546f,	// (0x0006098c) eswt_control_pane_g4_ParamLimits

0x546f,	// (0x0006098c) eswt_control_pane_g4

0x0003,

0xfc13,	// (0x0006b130) eswt_control_pane_g_ParamLimits

0xfc13,	// (0x0006b130) eswt_control_pane_g

0x81e6,	// (0x00063703) bg_button_pane_ParamLimits

0x81e6,	// (0x00063703) bg_button_pane

0x6369,	// (0x00061886) common_borders_pane_copy2_ParamLimits

0x6369,	// (0x00061886) common_borders_pane_copy2

0x547c,	// (0x00060999) control_button_pane_g1_ParamLimits

0x547c,	// (0x00060999) control_button_pane_g1

0x5488,	// (0x000609a5) control_button_pane_g2_ParamLimits

0x5488,	// (0x000609a5) control_button_pane_g2

0x5494,	// (0x000609b1) control_button_pane_g3_ParamLimits

0x5494,	// (0x000609b1) control_button_pane_g3

0x0002,

0xfc1c,	// (0x0006b139) control_button_pane_g_ParamLimits

0xfc1c,	// (0x0006b139) control_button_pane_g

0x54a8,	// (0x000609c5) control_button_pane_t1

0x54b6,	// (0x000609d3) control_button_pane_t2

0x0001,

0xfc23,	// (0x0006b140) control_button_pane_t

0x22a3,	// (0x0005d7c0) bg_button_pane_g1

0x22b3,	// (0x0005d7d0) bg_button_pane_g2

0x22ab,	// (0x0005d7c8) bg_button_pane_g3

0x22c3,	// (0x0005d7e0) bg_button_pane_g4

0x22bb,	// (0x0005d7d8) bg_button_pane_g5

0x22cb,	// (0x0005d7e8) bg_button_pane_g6

0x22d3,	// (0x0005d7f0) bg_button_pane_g7

0x22e3,	// (0x0005d800) bg_button_pane_g8

0x22db,	// (0x0005d7f8) bg_button_pane_g9

0x0008,

0xf866,	// (0x0006ad83) bg_button_pane_g

0x4a79,	// (0x0005ff96) common_borders_pane_ParamLimits

0x4a79,	// (0x0005ff96) common_borders_pane

0x5448,	// (0x00060965) eswt_control_pane_g1_copy1_ParamLimits

0x5448,	// (0x00060965) eswt_control_pane_g1_copy1

0x5455,	// (0x00060972) eswt_control_pane_g2_copy1_ParamLimits

0x5455,	// (0x00060972) eswt_control_pane_g2_copy1

0x5462,	// (0x0006097f) eswt_control_pane_g3_copy1_ParamLimits

0x5462,	// (0x0006097f) eswt_control_pane_g3_copy1

0x546f,	// (0x0006098c) eswt_control_pane_g4_copy1_ParamLimits

0x546f,	// (0x0006098c) eswt_control_pane_g4_copy1

0x4ab4,	// (0x0005ffd1) bg_eswt_ctrl_canvas_pane_g1

0x4a79,	// (0x0005ff96) common_borders_pane_cp2_ParamLimits

0x4a79,	// (0x0005ff96) common_borders_pane_cp2

0x4a79,	// (0x0005ff96) common_borders_pane_cp3_ParamLimits

0x4a79,	// (0x0005ff96) common_borders_pane_cp3

0x54c4,	// (0x000609e1) separator_horizontal_pane

0x54cc,	// (0x000609e9) separator_vertical_pane

0x5448,	// (0x00060965) eswt_control_pane_g1_copy2_ParamLimits

0x5448,	// (0x00060965) eswt_control_pane_g1_copy2

0x5455,	// (0x00060972) eswt_control_pane_g2_copy2_ParamLimits

0x5455,	// (0x00060972) eswt_control_pane_g2_copy2

0x5462,	// (0x0006097f) eswt_control_pane_g3_copy2_ParamLimits

0x5462,	// (0x0006097f) eswt_control_pane_g3_copy2

0x546f,	// (0x0006098c) eswt_control_pane_g4_copy2_ParamLimits

0x546f,	// (0x0006098c) eswt_control_pane_g4_copy2

0x5f5d,	// (0x0006147a) common_borders_pane_cp4

0x54d5,	// (0x000609f2) separator_horizontal_pane_g1

0x54de,	// (0x000609fb) separator_horizontal_pane_g2

0x54e7,	// (0x00060a04) separator_horizontal_pane_g3

0x0002,

0xfc28,	// (0x0006b145) separator_horizontal_pane_g

0x5448,	// (0x00060965) eswt_control_pane_g1_copy3_ParamLimits

0x5448,	// (0x00060965) eswt_control_pane_g1_copy3

0x5455,	// (0x00060972) eswt_control_pane_g2_copy3_ParamLimits

0x5455,	// (0x00060972) eswt_control_pane_g2_copy3

0x5462,	// (0x0006097f) eswt_control_pane_g3_copy3_ParamLimits

0x5462,	// (0x0006097f) eswt_control_pane_g3_copy3

0x546f,	// (0x0006098c) eswt_control_pane_g4_copy3_ParamLimits

0x546f,	// (0x0006098c) eswt_control_pane_g4_copy3

0x5f5d,	// (0x0006147a) common_borders_pane_cp5

0x54f0,	// (0x00060a0d) separator_vertical_pane_g1

0x54f9,	// (0x00060a16) separator_vertical_pane_g2

0x5502,	// (0x00060a1f) separator_vertical_pane_g3

0x0002,

0xfc2f,	// (0x0006b14c) separator_vertical_pane_g

0x5448,	// (0x00060965) eswt_control_pane_g1_copy4_ParamLimits

0x5448,	// (0x00060965) eswt_control_pane_g1_copy4

0x5455,	// (0x00060972) eswt_control_pane_g2_copy4_ParamLimits

0x5455,	// (0x00060972) eswt_control_pane_g2_copy4

0x5462,	// (0x0006097f) eswt_control_pane_g3_copy4_ParamLimits

0x5462,	// (0x0006097f) eswt_control_pane_g3_copy4

0x546f,	// (0x0006098c) eswt_control_pane_g4_copy4_ParamLimits

0x546f,	// (0x0006098c) eswt_control_pane_g4_copy4

0xcf9c,	// (0x000684b9) eswt_ctrl_combo_button_pane

0xcfa4,	// (0x000684c1) eswt_ctrl_input_pane

0xcfac,	// (0x000684c9) popup_choice_list_window_cp70

0xcfb4,	// (0x000684d1) eswt_ctrl_input_pane_t1

0x5f5d,	// (0x0006147a) input_focus_pane_cp70

0x4a79,	// (0x0005ff96) bg_button_pane_cp70_ParamLimits

0x4a79,	// (0x0005ff96) bg_button_pane_cp70

0xcfc2,	// (0x000684df) eswt_ctrl_combo_button_pane_g1

0x5539,	// (0x00060a56) wait_bar_pane_cp70

0x2317,	// (0x0005d834) bg_popup_window_pane_cp70_ParamLimits

0x2317,	// (0x0005d834) bg_popup_window_pane_cp70

0x5541,	// (0x00060a5e) popup_eswt_tasktip_window_t1

0x5557,	// (0x00060a74) wait_bar_pane_cp71_ParamLimits

0x5557,	// (0x00060a74) wait_bar_pane_cp71

0x5563,	// (0x00060a80) grid_eswt_app_pane

0x8ce7,	// (0x00064204) scroll_pane_cp70

0xcfca,	// (0x000684e7) cell_eswt_app_pane_ParamLimits

0xcfca,	// (0x000684e7) cell_eswt_app_pane

0xcffc,	// (0x00068519) cell_eswt_app_pane_g1_ParamLimits

0xcffc,	// (0x00068519) cell_eswt_app_pane_g1

0xd02b,	// (0x00068548) cell_eswt_app_pane_g2_ParamLimits

0xd02b,	// (0x00068548) cell_eswt_app_pane_g2

0x0001,

0xfc36,	// (0x0006b153) cell_eswt_app_pane_g_ParamLimits

0xfc36,	// (0x0006b153) cell_eswt_app_pane_g

0xd054,	// (0x00068571) cell_eswt_app_pane_t1_ParamLimits

0xd054,	// (0x00068571) cell_eswt_app_pane_t1

0x5628,	// (0x00060b45) grid_highlight_pane_cp70_ParamLimits

0x5628,	// (0x00060b45) grid_highlight_pane_cp70

0x91c0,	// (0x000646dd) set_content_pane_g1

0xadaf,	// (0x000662cc) status_small_volume_pane

0x0e06,	// (0x0005c323) status_small_volume_pane_g1

0x0e0e,	// (0x0005c32b) volume_small2_pane

0x0e17,	// (0x0005c334) volume_small2_pane_g1

0x0e20,	// (0x0005c33d) volume_small2_pane_g2

0x0e29,	// (0x0005c346) volume_small2_pane_g3

0x0e32,	// (0x0005c34f) volume_small2_pane_g4

0x0e3b,	// (0x0005c358) volume_small2_pane_g5

0x0e44,	// (0x0005c361) volume_small2_pane_g6

0x0e4d,	// (0x0005c36a) volume_small2_pane_g7

0x0e56,	// (0x0005c373) volume_small2_pane_g8

0x0e5f,	// (0x0005c37c) volume_small2_pane_g9

0x0e68,	// (0x0005c385) volume_small2_pane_g10

0x0009,

0xfc3b,	// (0x0006b158) volume_small2_pane_g

0x4e83,	// (0x000603a0) fep_vkb_top_text_pane_g1_ParamLimits

0xcf08,	// (0x00068425) fep_vkb_top_text_pane_t1_ParamLimits

0x5136,	// (0x00060653) popup_preview_fixed_window_g3_ParamLimits

0x5136,	// (0x00060653) popup_preview_fixed_window_g3

0xb649,	// (0x00066b66) popup_toolbar_trans_pane

0xc8e0,	// (0x00067dfd) aid_height_set_list_ParamLimits

0x366c,	// (0x0005eb89) aid_size_parent_ParamLimits

0x0122,	// (0x0005b63f) list_highlight_pane_cp2_ParamLimits

0x91c0,	// (0x000646dd) set_content_pane_g1_ParamLimits

0xbce3,	// (0x00067200) list_single_image_pane_ParamLimits

0xbce3,	// (0x00067200) list_single_image_pane

0xd086,	// (0x000685a3) aid_size_cell_image_ParamLimits

0xd086,	// (0x000685a3) aid_size_cell_image

0xd093,	// (0x000685b0) grid_single_image_pane_ParamLimits

0xd093,	// (0x000685b0) grid_single_image_pane

0x81f4,	// (0x00063711) list_single_image_pane_g1_ParamLimits

0x81f4,	// (0x00063711) list_single_image_pane_g1

0x8200,	// (0x0006371d) list_single_image_pane_g2_ParamLimits

0x8200,	// (0x0006371d) list_single_image_pane_g2

0x0001,

0xfc50,	// (0x0006b16d) list_single_image_pane_g_ParamLimits

0xfc50,	// (0x0006b16d) list_single_image_pane_g

0x564f,	// (0x00060b6c) list_single_image_pane_t1_ParamLimits

0x564f,	// (0x00060b6c) list_single_image_pane_t1

0xd0a1,	// (0x000685be) cell_image_list_pane_ParamLimits

0xd0a1,	// (0x000685be) cell_image_list_pane

0xd0b5,	// (0x000685d2) cell_image_list_pane_g1

0xd0be,	// (0x000685db) cell_image_list_pane_g2

0x0001,

0xfc55,	// (0x0006b172) cell_image_list_pane_g

0x568d,	// (0x00060baa) aid_size_cell_tb_trans_pane

0x81e6,	// (0x00063703) bg_tb_trans_pane

0x569f,	// (0x00060bbc) grid_tb_trans_pane

0x22a3,	// (0x0005d7c0) bg_tb_trans_pane_g1

0x22b3,	// (0x0005d7d0) bg_tb_trans_pane_g2

0x22ab,	// (0x0005d7c8) bg_tb_trans_pane_g3

0x22c3,	// (0x0005d7e0) bg_tb_trans_pane_g4

0x22bb,	// (0x0005d7d8) bg_tb_trans_pane_g5

0x22e3,	// (0x0005d800) bg_tb_trans_pane_g6

0x22db,	// (0x0005d7f8) bg_tb_trans_pane_g7

0x22cb,	// (0x0005d7e8) bg_tb_trans_pane_g8

0x22d3,	// (0x0005d7f0) bg_tb_trans_pane_g9

0x0008,

0xfc5a,	// (0x0006b177) bg_tb_trans_pane_g

0x56b3,	// (0x00060bd0) cell_toolbar_trans_pane_ParamLimits

0x56b3,	// (0x00060bd0) cell_toolbar_trans_pane

0x4ab4,	// (0x0005ffd1) cell_toolbar_trans_pane_g1

0xcce0,	// (0x000681fd) list_form2_midp_pane_t1

0xccee,	// (0x0006820b) list_form2_midp_pane_t2

0x0001,

0xfaf7,	// (0x0006b014) list_form2_midp_pane_t

0x46f4,	// (0x0005fc11) scroll_pane_cp51_ParamLimits

0x48bb,	// (0x0005fdd8) form2_midp_wait_pane_g1

0x48c4,	// (0x0005fde1) form2_midp_wait_pane_g2

0x48cd,	// (0x0005fdea) form2_midp_wait_pane_g3

0x0002,

0xfb0c,	// (0x0006b029) form2_midp_wait_pane_g

0x5fcb,	// (0x000614e8) list_highlight_pane_cp21_ParamLimits

0x4911,	// (0x0005fe2e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4920,	// (0x0005fe3d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3858,	// (0x0005ed75) list_single_2graphic_im_pane_ParamLimits

0x3858,	// (0x0005ed75) list_single_2graphic_im_pane

0xd0c7,	// (0x000685e4) list_single_2graphic_im_pane_g1_ParamLimits

0xd0c7,	// (0x000685e4) list_single_2graphic_im_pane_g1

0xd0d8,	// (0x000685f5) list_single_2graphic_im_pane_g2_ParamLimits

0xd0d8,	// (0x000685f5) list_single_2graphic_im_pane_g2

0xd0e4,	// (0x00068601) list_single_2graphic_im_pane_g3_ParamLimits

0xd0e4,	// (0x00068601) list_single_2graphic_im_pane_g3

0x0003,

0xfc6d,	// (0x0006b18a) list_single_2graphic_im_pane_g_ParamLimits

0xfc6d,	// (0x0006b18a) list_single_2graphic_im_pane_g

0xd0f8,	// (0x00068615) list_single_2graphic_im_pane_t1_ParamLimits

0xd0f8,	// (0x00068615) list_single_2graphic_im_pane_t1

0x5142,	// (0x0006065f) list_single_graphic_2heading_pane_fp_ParamLimits

0x5142,	// (0x0006065f) list_single_graphic_2heading_pane_fp

0xef36,	// (0x0006a453) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xef36,	// (0x0006a453) list_single_graphic_2heading_pane_fp_g1

0x515b,	// (0x00060678) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x515b,	// (0x00060678) list_single_graphic_2heading_pane_fp_g2

0x50b4,	// (0x000605d1) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x50b4,	// (0x000605d1) list_single_graphic_2heading_pane_fp_g3

0x50c0,	// (0x000605dd) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x50c0,	// (0x000605dd) list_single_graphic_2heading_pane_fp_g4

0x5167,	// (0x00060684) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5167,	// (0x00060684) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb94,	// (0x0006b0b1) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb94,	// (0x0006b0b1) list_single_graphic_2heading_pane_fp_g

0xf05d,	// (0x0006a57a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf05d,	// (0x0006a57a) list_single_graphic_2heading_pane_fp_t1

0xef6e,	// (0x0006a48b) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xef6e,	// (0x0006a48b) list_single_graphic_2heading_pane_fp_t2

0xf073,	// (0x0006a590) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf073,	// (0x0006a590) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc76,	// (0x0006b193) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc76,	// (0x0006b193) list_single_graphic_2heading_pane_fp_t

0x4b45,	// (0x00060062) fep_hwr_write_pane_g5_ParamLimits

0x4b45,	// (0x00060062) fep_hwr_write_pane_g5

0x4b51,	// (0x0006006e) fep_hwr_write_pane_g6_ParamLimits

0x4b51,	// (0x0006006e) fep_hwr_write_pane_g6

0x5417,	// (0x00060934) eswt_shell_pane_ParamLimits

0x2317,	// (0x0005d834) bg_popup_window_pane_cp18_ParamLimits

0x35b2,	// (0x0005eacf) heading_pane_cp70

0x5541,	// (0x00060a5e) popup_eswt_tasktip_window_t1_ParamLimits

0xb713,	// (0x00066c30) aid_touch_tab_arrow_left

0xb729,	// (0x00066c46) aid_touch_tab_arrow_right

0x5f7b,	// (0x00061498) title_pane_g3_ParamLimits

0x5f7b,	// (0x00061498) title_pane_g3

0x81a5,	// (0x000636c2) set_value_pane_g1

0xb649,	// (0x00066b66) popup_toolbar_trans_pane_ParamLimits

0x568d,	// (0x00060baa) aid_size_cell_tb_trans_pane_ParamLimits

0x81e6,	// (0x00063703) bg_tb_trans_pane_ParamLimits

0x569f,	// (0x00060bbc) grid_tb_trans_pane_ParamLimits

0x610c,	// (0x00061629) cont_note_pane_ParamLimits

0x610c,	// (0x00061629) cont_note_pane

0x6369,	// (0x00061886) cont_snote2_single_text_pane_ParamLimits

0x6369,	// (0x00061886) cont_snote2_single_text_pane

0x6369,	// (0x00061886) cont_snote2_single_graphic_pane_ParamLimits

0x6369,	// (0x00061886) cont_snote2_single_graphic_pane

0x28f3,	// (0x0005de10) cont_note_wait_pane_ParamLimits

0x28f3,	// (0x0005de10) cont_note_wait_pane

0x28f3,	// (0x0005de10) cont_note_image_pane_ParamLimits

0x28f3,	// (0x0005de10) cont_note_image_pane

0x5747,	// (0x00060c64) popup_note2_window_g1_ParamLimits

0x5747,	// (0x00060c64) popup_note2_window_g1

0x5778,	// (0x00060c95) popup_note2_window_t1_ParamLimits

0x5778,	// (0x00060c95) popup_note2_window_t1

0x57bd,	// (0x00060cda) popup_note2_window_t2_ParamLimits

0x57bd,	// (0x00060cda) popup_note2_window_t2

0x5802,	// (0x00060d1f) popup_note2_window_t3_ParamLimits

0x5802,	// (0x00060d1f) popup_note2_window_t3

0x5847,	// (0x00060d64) popup_note2_window_t4_ParamLimits

0x5847,	// (0x00060d64) popup_note2_window_t4

0x6190,	// (0x000616ad) popup_note2_window_t5_ParamLimits

0x6190,	// (0x000616ad) popup_note2_window_t5

0x0004,

0xfc82,	// (0x0006b19f) popup_note2_window_t_ParamLimits

0xfc82,	// (0x0006b19f) popup_note2_window_t

0x5876,	// (0x00060d93) popup_note2_image_window_g1_ParamLimits

0x5876,	// (0x00060d93) popup_note2_image_window_g1

0x5882,	// (0x00060d9f) popup_note2_image_window_g2_ParamLimits

0x5882,	// (0x00060d9f) popup_note2_image_window_g2

0x0001,

0xfc8d,	// (0x0006b1aa) popup_note2_image_window_g_ParamLimits

0xfc8d,	// (0x0006b1aa) popup_note2_image_window_g

0x5894,	// (0x00060db1) popup_note2_image_window_t1_ParamLimits

0x5894,	// (0x00060db1) popup_note2_image_window_t1

0x58ac,	// (0x00060dc9) popup_note2_image_window_t2_ParamLimits

0x58ac,	// (0x00060dc9) popup_note2_image_window_t2

0x58c4,	// (0x00060de1) popup_note2_image_window_t3_ParamLimits

0x58c4,	// (0x00060de1) popup_note2_image_window_t3

0x0002,

0xfc92,	// (0x0006b1af) popup_note2_image_window_t_ParamLimits

0xfc92,	// (0x0006b1af) popup_note2_image_window_t

0x2901,	// (0x0005de1e) popup_note2_wait_window_g1_ParamLimits

0x2901,	// (0x0005de1e) popup_note2_wait_window_g1

0x58e0,	// (0x00060dfd) popup_note2_wait_window_g2_ParamLimits

0x58e0,	// (0x00060dfd) popup_note2_wait_window_g2

0x2919,	// (0x0005de36) popup_note2_wait_window_g3_ParamLimits

0x2919,	// (0x0005de36) popup_note2_wait_window_g3

0x0002,

0xfc99,	// (0x0006b1b6) popup_note2_wait_window_g_ParamLimits

0xfc99,	// (0x0006b1b6) popup_note2_wait_window_g

0x58ec,	// (0x00060e09) popup_note2_wait_window_t1_ParamLimits

0x58ec,	// (0x00060e09) popup_note2_wait_window_t1

0x590a,	// (0x00060e27) popup_note2_wait_window_t2_ParamLimits

0x590a,	// (0x00060e27) popup_note2_wait_window_t2

0x5928,	// (0x00060e45) popup_note2_wait_window_t3_ParamLimits

0x5928,	// (0x00060e45) popup_note2_wait_window_t3

0x593a,	// (0x00060e57) popup_note2_wait_window_t4_ParamLimits

0x593a,	// (0x00060e57) popup_note2_wait_window_t4

0x0003,

0xfca0,	// (0x0006b1bd) popup_note2_wait_window_t_ParamLimits

0xfca0,	// (0x0006b1bd) popup_note2_wait_window_t

0x594c,	// (0x00060e69) wait_bar2_pane_ParamLimits

0x594c,	// (0x00060e69) wait_bar2_pane

0x5964,	// (0x00060e81) popup_snote2_single_text_window_g1_ParamLimits

0x5964,	// (0x00060e81) popup_snote2_single_text_window_g1

0x598c,	// (0x00060ea9) popup_snote2_single_text_window_t1_ParamLimits

0x598c,	// (0x00060ea9) popup_snote2_single_text_window_t1

0x59d8,	// (0x00060ef5) popup_snote2_single_text_window_t2_ParamLimits

0x59d8,	// (0x00060ef5) popup_snote2_single_text_window_t2

0x5a24,	// (0x00060f41) popup_snote2_single_text_window_t3_ParamLimits

0x5a24,	// (0x00060f41) popup_snote2_single_text_window_t3

0x5a65,	// (0x00060f82) popup_snote2_single_text_window_t4_ParamLimits

0x5a65,	// (0x00060f82) popup_snote2_single_text_window_t4

0x5a9b,	// (0x00060fb8) popup_snote2_single_text_window_t5_ParamLimits

0x5a9b,	// (0x00060fb8) popup_snote2_single_text_window_t5

0x0004,

0xfca9,	// (0x0006b1c6) popup_snote2_single_text_window_t_ParamLimits

0xfca9,	// (0x0006b1c6) popup_snote2_single_text_window_t

0x5ac6,	// (0x00060fe3) popup_snote2_single_graphic_window_g1_ParamLimits

0x5ac6,	// (0x00060fe3) popup_snote2_single_graphic_window_g1

0x5aee,	// (0x0006100b) popup_snote2_single_graphic_window_g2_ParamLimits

0x5aee,	// (0x0006100b) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb4,	// (0x0006b1d1) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb4,	// (0x0006b1d1) popup_snote2_single_graphic_window_g

0x5b16,	// (0x00061033) popup_snote2_single_graphic_window_t1_ParamLimits

0x5b16,	// (0x00061033) popup_snote2_single_graphic_window_t1

0x5b62,	// (0x0006107f) popup_snote2_single_graphic_window_t2_ParamLimits

0x5b62,	// (0x0006107f) popup_snote2_single_graphic_window_t2

0x5a24,	// (0x00060f41) popup_snote2_single_graphic_window_t3_ParamLimits

0x5a24,	// (0x00060f41) popup_snote2_single_graphic_window_t3

0x5a65,	// (0x00060f82) popup_snote2_single_graphic_window_t4_ParamLimits

0x5a65,	// (0x00060f82) popup_snote2_single_graphic_window_t4

0x5a9b,	// (0x00060fb8) popup_snote2_single_graphic_window_t5_ParamLimits

0x5a9b,	// (0x00060fb8) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb9,	// (0x0006b1d6) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb9,	// (0x0006b1d6) popup_snote2_single_graphic_window_t

0x45a4,	// (0x0005fac1) clock_nsta_pane_cp2_t1

0x45a4,	// (0x0005fac1) clock_nsta_pane_cp2_t2

0x0001,

0xfacd,	// (0x0006afea) clock_nsta_pane_cp2_t

0xe924,	// (0x00069e41) form_field_data_wide_pane_g1_ParamLimits

0x81f4,	// (0x00063711) form_field_data_wide_pane_g2_ParamLimits

0x81f4,	// (0x00063711) form_field_data_wide_pane_g2

0x8200,	// (0x0006371d) form_field_data_wide_pane_g3_ParamLimits

0x8200,	// (0x0006371d) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0006ab9d) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0006ab9d) form_field_data_wide_pane_g

0xcbde,	// (0x000680fb) grid_touch_3_pane_ParamLimits

0xcbde,	// (0x000680fb) grid_touch_3_pane

0xd129,	// (0x00068646) cell_touch_3_pane_ParamLimits

0xd129,	// (0x00068646) cell_touch_3_pane

0x4ab4,	// (0x0005ffd1) cell_touch_3_pane_g1

0x4ab4,	// (0x0005ffd1) cell_touch_3_pane_g2

0x0001,

0xfb52,	// (0x0006b06f) cell_touch_3_pane_g

0x61c2,	// (0x000616df) cont_query_data_pane

0x61ca,	// (0x000616e7) cont_query_data_pane_cp1

0x5be1,	// (0x000610fe) button_value_adjust_pane_cp7

0x5be9,	// (0x00061106) query_popup_pane_cp3

0x8eb8,	// (0x000643d5) bg_popup_sub_pane_cp22_ParamLimits

0xf2f3,	// (0x0006a810) navi_navi_volume_pane_cp2

0xf30e,	// (0x0006a82b) popup_side_volume_key_window_g2

0xf31d,	// (0x0006a83a) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0006ac33) popup_side_volume_key_window_g

0xf33a,	// (0x0006a857) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0006ac3a) popup_side_volume_key_window_t

0x90c3,	// (0x000645e0) popup_side_volume_key_window_ParamLimits

0xa3cb,	// (0x000658e8) list_double_graphic_pane_g4_ParamLimits

0xa3cb,	// (0x000658e8) list_double_graphic_pane_g4

0xbcce,	// (0x000671eb) list_single_2heading_msg_pane_ParamLimits

0xbcce,	// (0x000671eb) list_single_2heading_msg_pane

0xd173,	// (0x00068690) list_single_2heading_msg_pane_g1_ParamLimits

0xd173,	// (0x00068690) list_single_2heading_msg_pane_g1

0xd17f,	// (0x0006869c) list_single_2heading_msg_pane_g2_ParamLimits

0xd17f,	// (0x0006869c) list_single_2heading_msg_pane_g2

0xd192,	// (0x000686af) list_single_2heading_msg_pane_g3_ParamLimits

0xd192,	// (0x000686af) list_single_2heading_msg_pane_g3

0xd19e,	// (0x000686bb) list_single_2heading_msg_pane_g4_ParamLimits

0xd19e,	// (0x000686bb) list_single_2heading_msg_pane_g4

0x0003,

0xfcc4,	// (0x0006b1e1) list_single_2heading_msg_pane_g_ParamLimits

0xfcc4,	// (0x0006b1e1) list_single_2heading_msg_pane_g

0xbd63,	// (0x00067280) list_single_2heading_msg_pane_t1_ParamLimits

0xbd63,	// (0x00067280) list_single_2heading_msg_pane_t1

0xbd8b,	// (0x000672a8) list_single_2heading_msg_pane_t2_ParamLimits

0xbd8b,	// (0x000672a8) list_single_2heading_msg_pane_t2

0xbdf6,	// (0x00067313) list_single_2heading_msg_pane_t3_ParamLimits

0xbdf6,	// (0x00067313) list_single_2heading_msg_pane_t3

0xf093,	// (0x0006a5b0) list_single_2heading_msg_pane_t4_ParamLimits

0xf093,	// (0x0006a5b0) list_single_2heading_msg_pane_t4

0x0003,

0xfccd,	// (0x0006b1ea) list_single_2heading_msg_pane_t_ParamLimits

0xfccd,	// (0x0006b1ea) list_single_2heading_msg_pane_t

0x5f87,	// (0x000614a4) title_pane_g4_ParamLimits

0x5f87,	// (0x000614a4) title_pane_g4

0xf108,	// (0x0006a625) title_pane_stacon_g3_ParamLimits

0xf108,	// (0x0006a625) title_pane_stacon_g3

0x570a,	// (0x00060c27) list_single_2graphic_im_pane_g4_ParamLimits

0x570a,	// (0x00060c27) list_single_2graphic_im_pane_g4

0x3363,	// (0x0005e880) popup_side_volume_key_window_cp

0x3d9e,	// (0x0005f2bb) main_idle_act2_pane_t1

0x0501,	// (0x0005ba1e) toolbar_button_pane_g10

0xa22f,	// (0x0006574c) popup_toolbar_window_cp1

0x4595,	// (0x0005fab2) clock_nsta_pane_cp_t1

0x4595,	// (0x0005fab2) clock_nsta_pane_cp_t2

0x0001,

0xfac8,	// (0x0006afe5) clock_nsta_pane_cp_t

0xf2f3,	// (0x0006a810) navi_navi_volume_pane_cp2_ParamLimits

0xf302,	// (0x0006a81f) popup_side_volume_key_window_g1_ParamLimits

0xf30e,	// (0x0006a82b) popup_side_volume_key_window_g2_ParamLimits

0xf31d,	// (0x0006a83a) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0006ac33) popup_side_volume_key_window_g_ParamLimits

0x0a35,	// (0x0005bf52) fep_hwr_aid_pane

0x0ade,	// (0x0005bffb) bg_fep_hwr_top_pane_g4_ParamLimits

0x4b15,	// (0x00060032) fep_hwr_top_pane_g1_ParamLimits

0x4b27,	// (0x00060044) fep_hwr_top_pane_g2_ParamLimits

0x0afe,	// (0x0005c01b) fep_hwr_top_pane_g3_ParamLimits

0xfb1d,	// (0x0006b03a) fep_hwr_top_pane_g_ParamLimits

0x0b13,	// (0x0005c030) fep_hwr_top_text_pane_ParamLimits

0x3118,	// (0x0005e635) aid_touch_tab_arrow_arrow_2

0x3121,	// (0x0005e63e) aid_touch_tab_arrow_left_2

0x0a49,	// (0x0005bf66) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0a80,	// (0x0005bf9d) fep_hwr_prediction_pane

0x4c7d,	// (0x0006019a) fep_vkb_prediction_pane

0xcee8,	// (0x00068405) fep_vkb_side_pane_g3_ParamLimits

0xcee8,	// (0x00068405) fep_vkb_side_pane_g3

0x0ca2,	// (0x0005c1bf) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0d13,	// (0x0005c230) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0d20,	// (0x0005c23d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcc,	// (0x0006b0e9) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x0f01,	// (0x0005c41e) fep_hwr_prediction_pane_g1

0x0f0b,	// (0x0005c428) fep_hwr_prediction_pane_g2

0x0f13,	// (0x0005c430) fep_hwr_prediction_pane_g3

0x0f1b,	// (0x0005c438) fep_hwr_prediction_pane_g4

0x0003,

0xfcd6,	// (0x0006b1f3) fep_hwr_prediction_pane_g

0x5c10,	// (0x0006112d) fep_vkb_prediction_pane_g1

0x5c1a,	// (0x00061137) fep_vkb_prediction_pane_g2

0x5c22,	// (0x0006113f) fep_vkb_prediction_pane_g3

0x5c2a,	// (0x00061147) fep_vkb_prediction_pane_g4

0x0003,

0xfcdf,	// (0x0006b1fc) fep_vkb_prediction_pane_g

0x0869,	// (0x0005bd86) slider_set_pane_g3

0x087d,	// (0x0005bd9a) slider_set_pane_g4

0x0895,	// (0x0005bdb2) slider_set_pane_g5

0x0869,	// (0x0005bd86) slider_set_pane_g6

0x08ab,	// (0x0005bdc8) slider_set_pane_g7

0x37f1,	// (0x0005ed0e) slider_form_pane_g3

0x37fa,	// (0x0005ed17) slider_form_pane_g4

0x3802,	// (0x0005ed1f) slider_form_pane_g5

0x37f1,	// (0x0005ed0e) slider_form_pane_g6

0xca4f,	// (0x00067f6c) slider_form_pane_g7

0x4055,	// (0x0005f572) slider_set_pane_vc_g3

0x405e,	// (0x0005f57b) slider_set_pane_vc_g4

0x4067,	// (0x0005f584) slider_set_pane_vc_g5

0x4055,	// (0x0005f572) slider_set_pane_vc_g6

0x4070,	// (0x0005f58d) slider_set_pane_vc_g7

0x4248,	// (0x0005f765) slider_form_pane_vc_g1

0x4251,	// (0x0005f76e) slider_form_pane_vc_g2

0x425a,	// (0x0005f777) slider_form_pane_vc_g3

0x4248,	// (0x0005f765) slider_form_pane_vc_g4

0x4263,	// (0x0005f780) slider_form_pane_vc_g5

0x0004,

0xfa9a,	// (0x0006afb7) slider_form_pane_vc_g

0x5f5d,	// (0x0006147a) main_idle_act3_pane

0x5c32,	// (0x0006114f) ai3_links_pane

0xd1b6,	// (0x000686d3) popup_ai3_data_window_ParamLimits

0xd1b6,	// (0x000686d3) popup_ai3_data_window

0x5f5d,	// (0x0006147a) grid_ai3_links_pane

0xd1d4,	// (0x000686f1) cell_ai3_links_pane_ParamLimits

0xd1d4,	// (0x000686f1) cell_ai3_links_pane

0x5c73,	// (0x00061190) bg_popup_sub_pane_cp11

0x5c80,	// (0x0006119d) cell_ai3_links_pane_g1

0x5f5d,	// (0x0006147a) bg_popup_sub_pane_cp12

0x5ca5,	// (0x000611c2) heading_ai3_data_pane

0x5cad,	// (0x000611ca) list_ai3_gene_pane

0x5cb9,	// (0x000611d6) popup_ai3_data_window_g1

0x5cc1,	// (0x000611de) heading_ai3_data_pane_g1

0x5cc9,	// (0x000611e6) heading_ai3_data_pane_t1

0x5cd7,	// (0x000611f4) list_double_ai3_gene_pane_ParamLimits

0x5cd7,	// (0x000611f4) list_double_ai3_gene_pane

0x5ce4,	// (0x00061201) list_single_ai3_gene_pane_ParamLimits

0x5ce4,	// (0x00061201) list_single_ai3_gene_pane

0x4a79,	// (0x0005ff96) list_highlight_pane_cp7_ParamLimits

0x4a79,	// (0x0005ff96) list_highlight_pane_cp7

0x5cf1,	// (0x0006120e) list_single_a13_gene_pane_t1_ParamLimits

0x5cf1,	// (0x0006120e) list_single_a13_gene_pane_t1

0x5d08,	// (0x00061225) list_single_ai3_gene_pane_g1

0x5d11,	// (0x0006122e) list_single_ai3_gene_pane_g2

0x0001,

0xfce8,	// (0x0006b205) list_single_ai3_gene_pane_g

0x5d19,	// (0x00061236) list_double_ai3_gene_pane_g1_ParamLimits

0x5d19,	// (0x00061236) list_double_ai3_gene_pane_g1

0x5d25,	// (0x00061242) list_double_ai3_gene_pane_t1_ParamLimits

0x5d25,	// (0x00061242) list_double_ai3_gene_pane_t1

0x5d41,	// (0x0006125e) list_double_ai3_gene_pane_t2_ParamLimits

0x5d41,	// (0x0006125e) list_double_ai3_gene_pane_t2

0x5d56,	// (0x00061273) list_double_ai3_gene_pane_t3_ParamLimits

0x5d56,	// (0x00061273) list_double_ai3_gene_pane_t3

0x0002,

0xfced,	// (0x0006b20a) list_double_ai3_gene_pane_t_ParamLimits

0xfced,	// (0x0006b20a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf089,	// (0x0006a5a6) aid_size_min_col_2

0xd15d,	// (0x0006867a) aid_size_min_msg_ParamLimits

0xd15d,	// (0x0006867a) aid_size_min_msg

0xcefc,	// (0x00068419) fep_vkb_top_text_pane_g2_ParamLimits

0xcefc,	// (0x00068419) fep_vkb_top_text_pane_g2

0x0001,

0xfb4d,	// (0x0006b06a) fep_vkb_top_text_pane_g_ParamLimits

0xfb4d,	// (0x0006b06a) fep_vkb_top_text_pane_g

0x5f5d,	// (0x0006147a) main_hc_apps_shell_pane

0x5d73,	// (0x00061290) grid_hc_apps_pane_ParamLimits

0x5d73,	// (0x00061290) grid_hc_apps_pane

0x5d82,	// (0x0006129f) list_hc_apps_pane

0x5d8a,	// (0x000612a7) scroll_pane_cp37_ParamLimits

0x5d8a,	// (0x000612a7) scroll_pane_cp37

0xd1ee,	// (0x0006870b) cell_hc_apps_pane_ParamLimits

0xd1ee,	// (0x0006870b) cell_hc_apps_pane

0xd2b8,	// (0x000687d5) cell_hc_apps_pane_g1_ParamLimits

0xd2b8,	// (0x000687d5) cell_hc_apps_pane_g1

0x5e7f,	// (0x0006139c) cell_hc_apps_pane_g2_ParamLimits

0x5e7f,	// (0x0006139c) cell_hc_apps_pane_g2

0x5e9b,	// (0x000613b8) cell_hc_apps_pane_g3_ParamLimits

0x5e9b,	// (0x000613b8) cell_hc_apps_pane_g3

0x0002,

0xfcf4,	// (0x0006b211) cell_hc_apps_pane_g_ParamLimits

0xfcf4,	// (0x0006b211) cell_hc_apps_pane_g

0xd2e5,	// (0x00068802) cell_hc_apps_pane_t1_ParamLimits

0xd2e5,	// (0x00068802) cell_hc_apps_pane_t1

0x610c,	// (0x00061629) grid_highlight_pane_cp10_ParamLimits

0x610c,	// (0x00061629) grid_highlight_pane_cp10

0xd325,	// (0x00068842) list_single_hc_apps_pane_ParamLimits

0xd325,	// (0x00068842) list_single_hc_apps_pane

0xd35f,	// (0x0006887c) list_single_hc_apps_pane_g1

0xd378,	// (0x00068895) list_single_hc_apps_pane_g2

0x0001,

0xfcfb,	// (0x0006b218) list_single_hc_apps_pane_g

0xd391,	// (0x000688ae) list_single_hc_apps_pane_g2_copy1

0xbe64,	// (0x00067381) list_single_hc_apps_pane_t1

0x5fcb,	// (0x000614e8) bg_set_opt_pane_cp_ParamLimits

0xe875,	// (0x00069d92) setting_slider_pane_t1_ParamLimits

0xe88e,	// (0x00069dab) setting_slider_pane_t2_ParamLimits

0xe8a8,	// (0x00069dc5) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0006aa7b) setting_slider_pane_t_ParamLimits

0xe8c0,	// (0x00069ddd) slider_set_pane_ParamLimits

0xf53f,	// (0x0006aa5c) control_pane_g5_ParamLimits

0xf53f,	// (0x0006aa5c) control_pane_g5

0x361e,	// (0x0005eb3b) slider_set_pane_g1_ParamLimits

0x085d,	// (0x0005bd7a) slider_set_pane_g2_ParamLimits

0x0869,	// (0x0005bd86) slider_set_pane_g3_ParamLimits

0x087d,	// (0x0005bd9a) slider_set_pane_g4_ParamLimits

0x0895,	// (0x0005bdb2) slider_set_pane_g5_ParamLimits

0x0869,	// (0x0005bd86) slider_set_pane_g6_ParamLimits

0x08ab,	// (0x0005bdc8) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0006ae81) slider_set_pane_g_ParamLimits

0x916b,	// (0x00064688) navi_icon_text_pane_ParamLimits

0xb6da,	// (0x00066bf7) aid_fill_nsta_2_ParamLimits

0xb713,	// (0x00066c30) aid_touch_tab_arrow_left_ParamLimits

0xb729,	// (0x00066c46) aid_touch_tab_arrow_right_ParamLimits

0xb7c4,	// (0x00066ce1) clock_nsta_pane_ParamLimits

0xc78d,	// (0x00067caa) navi_icon_pane_g1_ParamLimits

0xc799,	// (0x00067cb6) navi_text_pane_t1_ParamLimits

0xccc2,	// (0x000681df) navi_icon_text_pane_g1_ParamLimits

0xccce,	// (0x000681eb) navi_icon_text_pane_t1_ParamLimits

0xd35f,	// (0x0006887c) list_single_hc_apps_pane_g1_ParamLimits

0xd378,	// (0x00068895) list_single_hc_apps_pane_g2_ParamLimits

0xfcfb,	// (0x0006b218) list_single_hc_apps_pane_g_ParamLimits

0xd391,	// (0x000688ae) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbe64,	// (0x00067381) list_single_hc_apps_pane_t1_ParamLimits

0x9db5,	// (0x000652d2) popup_toolbar2_fixed_window_ParamLimits

0x9db5,	// (0x000652d2) popup_toolbar2_fixed_window

0xb63f,	// (0x00066b5c) popup_toolbar2_float_window

0x5f5d,	// (0x0006147a) bg_popup_sub_pane_cp27

0x65ae,	// (0x00061acb) grid_toolbar2_float_pane

0x5f5d,	// (0x0006147a) bg_popup_sub_pane_cp26

0x65ae,	// (0x00061acb) grid_toolbar2_fixed_pane

0xd3ad,	// (0x000688ca) cell_toolbar2_fixed_pane_ParamLimits

0xd3ad,	// (0x000688ca) cell_toolbar2_fixed_pane

0xd3ca,	// (0x000688e7) cell_toolbar2_fixed_pane_g1

0x65cf,	// (0x00061aec) toolbar2_fixed_button_pane

0x22a3,	// (0x0005d7c0) toolbar2_fixed_button_pane_g1

0x22b3,	// (0x0005d7d0) toolbar2_fixed_button_pane_g2

0x22ab,	// (0x0005d7c8) toolbar2_fixed_button_pane_g3

0x22c3,	// (0x0005d7e0) toolbar2_fixed_button_pane_g4

0x22bb,	// (0x0005d7d8) toolbar2_fixed_button_pane_g5

0x22cb,	// (0x0005d7e8) toolbar2_fixed_button_pane_g6

0x22d3,	// (0x0005d7f0) toolbar2_fixed_button_pane_g7

0x22e3,	// (0x0005d800) toolbar2_fixed_button_pane_g8

0x22db,	// (0x0005d7f8) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0006ad83) toolbar2_fixed_button_pane_g

0x65d7,	// (0x00061af4) cell_toolbar2_float_pane_ParamLimits

0x65d7,	// (0x00061af4) cell_toolbar2_float_pane

0x65e8,	// (0x00061b05) cell_toolbar2_float_pane_g1

0x65cf,	// (0x00061aec) toolbar2_fixed_button_pane_cp

0xcde4,	// (0x00068301) fep_vkb_accented_list_pane_ParamLimits

0xcde4,	// (0x00068301) fep_vkb_accented_list_pane

0x0c82,	// (0x0005c19f) bg_popup_fep_shadow_pane_g9

0xc569,	// (0x00067a86) bg_popup_fep_shadow_pane_cp3

0x82f9,	// (0x00063816) list_accented_list_pane

0x65f1,	// (0x00061b0e) list_single_accented_list_pane_ParamLimits

0x65f1,	// (0x00061b0e) list_single_accented_list_pane

0xc569,	// (0x00067a86) list_highlight_pane_cp10

0x6602,	// (0x00061b1f) list_single_accented_list_pane_t1

0xb55b,	// (0x00066a78) popup_slider_window_ParamLimits

0xb55b,	// (0x00066a78) popup_slider_window

0x5bf1,	// (0x0006110e) aid_indentation_list_msg

0xd4d5,	// (0x000689f2) bg_popup_window_pane_cp19

0x673c,	// (0x00061c59) popup_slider_window_g1

0x6758,	// (0x00061c75) popup_slider_window_g2

0x6774,	// (0x00061c91) popup_slider_window_g3

0x0005,

0xfd00,	// (0x0006b21d) popup_slider_window_g

0x67d0,	// (0x00061ced) popup_slider_window_t1

0x6844,	// (0x00061d61) small_volume_slider_vertical_pane

0x4ab4,	// (0x0005ffd1) small_volume_slider_vertical_pane_g1

0x4ab4,	// (0x0005ffd1) small_volume_slider_vertical_pane_g2

0x6860,	// (0x00061d7d) small_volume_slider_vertical_pane_g3

0x0002,

0xfd12,	// (0x0006b22f) small_volume_slider_vertical_pane_g

0x9d1f,	// (0x0006523c) area_side_right_pane_ParamLimits

0x9d1f,	// (0x0006523c) area_side_right_pane

0xbe92,	// (0x000673af) aid_size_side_button_ParamLimits

0xbe92,	// (0x000673af) aid_size_side_button

0xbeab,	// (0x000673c8) grid_sctrl_middle_pane_ParamLimits

0xbeab,	// (0x000673c8) grid_sctrl_middle_pane

0x0f85,	// (0x0005c4a2) sctrl_sk_bottom_pane

0x0f96,	// (0x0005c4b3) sctrl_sk_top_pane

0x0fa8,	// (0x0005c4c5) aid_touch_sctrl_top

0x0fb5,	// (0x0005c4d2) bg_sctrl_sk_pane_ParamLimits

0x0fb5,	// (0x0005c4d2) bg_sctrl_sk_pane

0x0fc3,	// (0x0005c4e0) sctrl_sk_top_pane_g1

0x0fd0,	// (0x0005c4ed) sctrl_sk_top_pane_t1

0x0fa8,	// (0x0005c4c5) aid_touch_sctrl_bottom

0x0fb5,	// (0x0005c4d2) bg_sctrl_sk_pane_cp_ParamLimits

0x0fb5,	// (0x0005c4d2) bg_sctrl_sk_pane_cp

0x0feb,	// (0x0005c508) sctrl_sk_bottom_pane_g1

0x0fd0,	// (0x0005c4ed) sctrl_sk_bottom_pane_t1

0xbec5,	// (0x000673e2) cell_sctrl_middle_pane_ParamLimits

0xbec5,	// (0x000673e2) cell_sctrl_middle_pane

0xbed8,	// (0x000673f5) aid_touch_sctrl_middle_ParamLimits

0xbed8,	// (0x000673f5) aid_touch_sctrl_middle

0xbee5,	// (0x00067402) bg_sctrl_middle_pane_ParamLimits

0xbee5,	// (0x00067402) bg_sctrl_middle_pane

0x166e,	// (0x0005cb8b) cell_sctrl_middle_pane_g1_ParamLimits

0x166e,	// (0x0005cb8b) cell_sctrl_middle_pane_g1

0xbef3,	// (0x00067410) cell_sctrl_middle_pane_g2_ParamLimits

0xbef3,	// (0x00067410) cell_sctrl_middle_pane_g2

0x0001,

0xfd1e,	// (0x0006b23b) cell_sctrl_middle_pane_g_ParamLimits

0xfd1e,	// (0x0006b23b) cell_sctrl_middle_pane_g

0x22a3,	// (0x0005d7c0) bg_sctrl_middle_pane_g1

0x22ab,	// (0x0005d7c8) bg_sctrl_middle_pane_g2

0x22b3,	// (0x0005d7d0) bg_sctrl_middle_pane_g3

0x22bb,	// (0x0005d7d8) bg_sctrl_middle_pane_g4

0x22c3,	// (0x0005d7e0) bg_sctrl_middle_pane_g5

0x22cb,	// (0x0005d7e8) bg_sctrl_middle_pane_g6

0x22d3,	// (0x0005d7f0) bg_sctrl_middle_pane_g7

0x22db,	// (0x0005d7f8) bg_sctrl_middle_pane_g8

0x0007,

0xfd23,	// (0x0006b240) bg_sctrl_middle_pane_g

0x22e3,	// (0x0005d800) bg_sctrl_middle_pane_g8_copy1

0x22a3,	// (0x0005d7c0) bg_sctrl_sk_pane_g1

0x22b3,	// (0x0005d7d0) bg_sctrl_sk_pane_g2

0x22ab,	// (0x0005d7c8) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0006ad83) bg_sctrl_sk_pane_g

0x6527,	// (0x00061a44) aid_size_touch_scroll_bar

0x22c3,	// (0x0005d7e0) bg_sctrl_sk_pane_g4

0x22bb,	// (0x0005d7d8) bg_sctrl_sk_pane_g5

0x22cb,	// (0x0005d7e8) bg_sctrl_sk_pane_g6

0x22d3,	// (0x0005d7f0) bg_sctrl_sk_pane_g7

0x22e3,	// (0x0005d800) bg_sctrl_sk_pane_g8

0x22db,	// (0x0005d7f8) bg_sctrl_sk_pane_g9

0x01d0,	// (0x0005b6ed) popup_fep_china_hwr2_fs_candidate_window

0xb013,	// (0x00066530) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb013,	// (0x00066530) popup_fep_china_hwr2_fs_control_window

0x0ca2,	// (0x0005c1bf) sctrl_sk_top_pane_g2

0x0001,

0xfd19,	// (0x0006b236) sctrl_sk_top_pane_g

0xd58d,	// (0x00068aaa) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd58d,	// (0x00068aaa) aid_fep_china_hwr2_fs_cell

0xd5a3,	// (0x00068ac0) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd5a3,	// (0x00068ac0) bg_popup_fep_shadow_pane_cp4

0xd5ba,	// (0x00068ad7) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd5ba,	// (0x00068ad7) bg_popup_fep_shadow_pane_cp5

0xd5cc,	// (0x00068ae9) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd5cc,	// (0x00068ae9) popup_fep_china_hwr2_fs_control_bar_grid

0xd5e0,	// (0x00068afd) popup_fep_china_hwr2_fs_control_funtion_grid

0x68bf,	// (0x00061ddc) aid_fep_china_hwr2_fs_candi_cell

0x5f5d,	// (0x0006147a) bg_popup_fep_shadow_pane_cp6

0x68c9,	// (0x00061de6) popup_fep_china_hwr2_fs_candidate_grid

0xd5e8,	// (0x00068b05) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd5e8,	// (0x00068b05) cell_fep_china_hwr2_fs_funtion_grid

0x4ab4,	// (0x0005ffd1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x68eb,	// (0x00061e08) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x68eb,	// (0x00061e08) cell_fep_china_hwr2_fs_funtion_grid_g1

0x68f9,	// (0x00061e16) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x68f9,	// (0x00061e16) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd34,	// (0x0006b251) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd34,	// (0x0006b251) cell_fep_china_hwr2_fs_funtion_grid_g

0xd600,	// (0x00068b1d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd600,	// (0x00068b1d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd615,	// (0x00068b32) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd615,	// (0x00068b32) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd39,	// (0x0006b256) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd39,	// (0x0006b256) cell_fep_china_hwr2_fs_funtion_grid_t

0x6940,	// (0x00061e5d) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6948,	// (0x00061e65) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6950,	// (0x00061e6d) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3e,	// (0x0006b25b) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6958,	// (0x00061e75) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6958,	// (0x00061e75) cell_fep_china_hwr2_fs_candidate_grid

0x6977,	// (0x00061e94) popup_fep_china_hwr2_fs_candidate_grid_g20

0x697f,	// (0x00061e9c) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4ab4,	// (0x0005ffd1) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4ab4,	// (0x0005ffd1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb52,	// (0x0006b06f) cell_fep_china_hwr2_fs_candidate_grid_g

0x6987,	// (0x00061ea4) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1e7f,	// (0x0005d39c) clock_nsta_pane_cp_24_ParamLimits

0x1e7f,	// (0x0005d39c) clock_nsta_pane_cp_24

0x1eff,	// (0x0005d41c) indicator_nsta_pane_cp_24_ParamLimits

0x1eff,	// (0x0005d41c) indicator_nsta_pane_cp_24

0x2f76,	// (0x0005e493) heading_pane_g1

0x0001,

0xf8cb,	// (0x0006ade8) heading_pane_g

0x3a58,	// (0x0005ef75) grid_sct_catagory_button_pane

0x3a8a,	// (0x0005efa7) scroll_pane_cp5_ParamLimits

0x4700,	// (0x0005fc1d) button_value_adjust_pane_cp5_ParamLimits

0x4700,	// (0x0005fc1d) button_value_adjust_pane_cp5

0x47e5,	// (0x0005fd02) form2_midp_time_pane_ParamLimits

0x6995,	// (0x00061eb2) cell_sct_catagory_button_pane_ParamLimits

0x6995,	// (0x00061eb2) cell_sct_catagory_button_pane

0x4a79,	// (0x0005ff96) bg_button_pane_cp01_ParamLimits

0x4a79,	// (0x0005ff96) bg_button_pane_cp01

0x4ab4,	// (0x0005ffd1) cell_sct_catagory_button_pane_g1

0xb5dc,	// (0x00066af9) popup_tb_extension_window

0xd631,	// (0x00068b4e) aid_size_cell_ext_ParamLimits

0xd631,	// (0x00068b4e) aid_size_cell_ext

0x6369,	// (0x00061886) bg_tb_trans_pane_cp1_ParamLimits

0x6369,	// (0x00061886) bg_tb_trans_pane_cp1

0xd657,	// (0x00068b74) grid_tb_ext_pane_ParamLimits

0xd657,	// (0x00068b74) grid_tb_ext_pane

0xd697,	// (0x00068bb4) cell_tb_ext_pane_ParamLimits

0xd697,	// (0x00068bb4) cell_tb_ext_pane

0xd6bf,	// (0x00068bdc) cell_tb_ext_pane_g1_ParamLimits

0xd6bf,	// (0x00068bdc) cell_tb_ext_pane_g1

0x6a2b,	// (0x00061f48) cell_tb_ext_pane_t1

0x610c,	// (0x00061629) list_highlight_pane_cp11_ParamLimits

0x610c,	// (0x00061629) list_highlight_pane_cp11

0x9dca,	// (0x000652e7) popup_uni_indicator_window_ParamLimits

0x9dca,	// (0x000652e7) popup_uni_indicator_window

0x81e6,	// (0x00063703) bg_popup_sub_pane_cp14

0x6a46,	// (0x00061f63) list_uniindi_pane

0x6a52,	// (0x00061f6f) uniindi_top_pane

0x610c,	// (0x00061629) bg_uniindi_top_pane

0x6a73,	// (0x00061f90) uniindi_top_pane_g1

0x6a89,	// (0x00061fa6) uniindi_top_pane_g2

0x0003,

0xfd45,	// (0x0006b262) uniindi_top_pane_g

0x6ab3,	// (0x00061fd0) uniindi_top_pane_t1

0x6adf,	// (0x00061ffc) list_single_uniindi_pane_ParamLimits

0x6adf,	// (0x00061ffc) list_single_uniindi_pane

0x4ab4,	// (0x0005ffd1) bg_uniindi_top_pane_g1

0x6af1,	// (0x0006200e) list_single_uniindi_pane_g1

0x6b04,	// (0x00062021) list_single_uniindi_pane_t1

0xe752,	// (0x00069c6f) control_bg_pane

0x6b29,	// (0x00062046) bg_sctrl_sk_pane_cp1

0x6b32,	// (0x0006204f) bg_sctrl_sk_pane_cp2

0x6b3b,	// (0x00062058) control_bg_pane_g1

0x6b44,	// (0x00062061) control_bg_pane_g2

0x0001,

0xfd4e,	// (0x0006b26b) control_bg_pane_g

0x4527,	// (0x0005fa44) cell_indicator_nsta_pane_g1_ParamLimits

0xcc1b,	// (0x00068138) cell_indicator_nsta_pane_g2_ParamLimits

0xfab6,	// (0x0006afd3) cell_indicator_nsta_pane_g_ParamLimits

0xef0c,	// (0x0006a429) form2_midp_time_pane_t1_ParamLimits

0xaf89,	// (0x000664a6) main_idle_act4_pane_ParamLimits

0xaf89,	// (0x000664a6) main_idle_act4_pane

0xb5dc,	// (0x00066af9) popup_tb_extension_window_ParamLimits

0xd67f,	// (0x00068b9c) tb_ext_find_pane_ParamLimits

0xd67f,	// (0x00068b9c) tb_ext_find_pane

0x6b4d,	// (0x0006206a) ai_gene_pane_1_cp1

0xea2e,	// (0x00069f4b) ai_gene_pane_2_cp1

0x6b55,	// (0x00062072) list_single_idle_plugin_calendar_pane

0x6b5e,	// (0x0006207b) list_single_idle_plugin_notification_pane

0x6b67,	// (0x00062084) list_single_idle_plugin_player_pane

0xd6dc,	// (0x00068bf9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd6dc,	// (0x00068bf9) list_single_idle_plugin_shortcut_pane

0xd704,	// (0x00068c21) main_idle_act4_pane_t1

0xd71c,	// (0x00068c39) main_idle_act4_pane_t2

0x0001,

0xfd53,	// (0x0006b270) main_idle_act4_pane_t

0xd734,	// (0x00068c51) middle_sk_idle_act4_pane_ParamLimits

0xd734,	// (0x00068c51) middle_sk_idle_act4_pane

0xd750,	// (0x00068c6d) popup_clock_digital_analogue_window_cp2

0xd777,	// (0x00068c94) shortcut_wheel_idle_act4_pane_ParamLimits

0xd777,	// (0x00068c94) shortcut_wheel_idle_act4_pane

0x4ab4,	// (0x0005ffd1) shortcut_wheel_idle_act4_pane_g1

0x4ab4,	// (0x0005ffd1) shortcut_wheel_idle_act4_pane_g2

0x4ab4,	// (0x0005ffd1) shortcut_wheel_idle_act4_pane_g3

0x4ab4,	// (0x0005ffd1) shortcut_wheel_idle_act4_pane_g4

0x4ab4,	// (0x0005ffd1) shortcut_wheel_idle_act4_pane_g5

0x6bfa,	// (0x00062117) shortcut_wheel_idle_act4_pane_g6

0x6c02,	// (0x0006211f) shortcut_wheel_idle_act4_pane_g7

0x6c0a,	// (0x00062127) shortcut_wheel_idle_act4_pane_g8

0x6c12,	// (0x0006212f) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd58,	// (0x0006b275) shortcut_wheel_idle_act4_pane_g

0xd7f4,	// (0x00068d11) middle_sk_idle_act4_pane_g1_ParamLimits

0xd7f4,	// (0x00068d11) middle_sk_idle_act4_pane_g1

0xd802,	// (0x00068d1f) middle_sk_idle_act4_pane_g2_ParamLimits

0xd802,	// (0x00068d1f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7b,	// (0x0006b298) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7b,	// (0x0006b298) middle_sk_idle_act4_pane_g

0xd81a,	// (0x00068d37) middle_sk_idle_act4_pane_t1_ParamLimits

0xd81a,	// (0x00068d37) middle_sk_idle_act4_pane_t1

0xd849,	// (0x00068d66) grid_ai_shortcut_pane_ParamLimits

0xd849,	// (0x00068d66) grid_ai_shortcut_pane

0xd866,	// (0x00068d83) list_highlight_pane_cp16_ParamLimits

0xd866,	// (0x00068d83) list_highlight_pane_cp16

0xd873,	// (0x00068d90) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd873,	// (0x00068d90) list_single_idle_plugin_shortcut_pane_g1

0xd87f,	// (0x00068d9c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd87f,	// (0x00068d9c) list_single_idle_plugin_shortcut_pane_g2

0xd89d,	// (0x00068dba) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd89d,	// (0x00068dba) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd80,	// (0x0006b29d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd80,	// (0x0006b29d) list_single_idle_plugin_shortcut_pane_g

0xd8b2,	// (0x00068dcf) cell_ai_shortcut_pane_ParamLimits

0xd8b2,	// (0x00068dcf) cell_ai_shortcut_pane

0xd8c8,	// (0x00068de5) cell_ai_shortcut_pane_g1_ParamLimits

0xd8c8,	// (0x00068de5) cell_ai_shortcut_pane_g1

0x6b4d,	// (0x0006206a) ai_gene_pane_1_cp2

0x6d43,	// (0x00062260) ai_gene_pane_2_cp2

0x6d4b,	// (0x00062268) list_highlight_pane_cp15

0x6d54,	// (0x00062271) list_single_idle_plugin_calendar_pane_g1

0x6d4b,	// (0x00062268) list_highlight_pane_cp17

0x6d5c,	// (0x00062279) list_single_idle_plugin_calendar_pane_g1_copy1

0x6d64,	// (0x00062281) list_single_idle_plugin_player_pane_g1

0x3e4c,	// (0x0005f369) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd87,	// (0x0006b2a4) list_single_idle_plugin_player_pane_g

0x6d6c,	// (0x00062289) list_single_idle_plugin_player_pane_t1

0x6d7a,	// (0x00062297) list_single_idle_plugin_player_pane_t2

0x6d88,	// (0x000622a5) list_single_idle_plugin_player_pane_t3

0x6d96,	// (0x000622b3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8c,	// (0x0006b2a9) list_single_idle_plugin_player_pane_t

0x6da4,	// (0x000622c1) wait_bar_pane_cp15

0x6dac,	// (0x000622c9) grid_ai_notification_pane

0x3e4c,	// (0x0005f369) list_single_idle_plugin_notification_pane_g1

0xd8ea,	// (0x00068e07) cell_ai_notification_pane_ParamLimits

0xd8ea,	// (0x00068e07) cell_ai_notification_pane

0x6dc2,	// (0x000622df) cell_ai_notification_pane_g1

0x6dca,	// (0x000622e7) cell_ai_notification_pane_t1

0xd8f7,	// (0x00068e14) tb_ext_find_button_pane

0xd8ff,	// (0x00068e1c) tb_ext_find_pane_g1

0xd907,	// (0x00068e24) tb_ext_find_pane_t1

0x8e58,	// (0x00064375) tb_ext_find_button_pane_g1

0x6df6,	// (0x00062313) tb_ext_find_button_pane_g2

0x0001,

0xfd95,	// (0x0006b2b2) tb_ext_find_button_pane_g

0xd704,	// (0x00068c21) main_idle_act4_pane_t1_ParamLimits

0xd71c,	// (0x00068c39) main_idle_act4_pane_t2_ParamLimits

0xfd53,	// (0x0006b270) main_idle_act4_pane_t_ParamLimits

0xd750,	// (0x00068c6d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd767,	// (0x00068c84) sat_plugin_idle_act4_pane_ParamLimits

0xd767,	// (0x00068c84) sat_plugin_idle_act4_pane

0xd915,	// (0x00068e32) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd915,	// (0x00068e32) sat_plugin_idle_act4_pane_t1

0xd92d,	// (0x00068e4a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd92d,	// (0x00068e4a) sat_plugin_idle_act4_pane_t2

0xd945,	// (0x00068e62) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd945,	// (0x00068e62) sat_plugin_idle_act4_pane_t3

0xd95d,	// (0x00068e7a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd95d,	// (0x00068e7a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9a,	// (0x0006b2b7) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9a,	// (0x0006b2b7) sat_plugin_idle_act4_pane_t

0xe817,	// (0x00069d34) popup_battery_window_ParamLimits

0xe817,	// (0x00069d34) popup_battery_window

0x610c,	// (0x00061629) bg_popup_sub_pane_cp25_ParamLimits

0x610c,	// (0x00061629) bg_popup_sub_pane_cp25

0x6e4b,	// (0x00062368) popup_battery_window_g1_ParamLimits

0x6e4b,	// (0x00062368) popup_battery_window_g1

0x6e57,	// (0x00062374) popup_battery_window_t1_ParamLimits

0x6e57,	// (0x00062374) popup_battery_window_t1

0x6e69,	// (0x00062386) popup_battery_window_t2_ParamLimits

0x6e69,	// (0x00062386) popup_battery_window_t2

0x0001,

0xfda3,	// (0x0006b2c0) popup_battery_window_t_ParamLimits

0xfda3,	// (0x0006b2c0) popup_battery_window_t

0xac71,	// (0x0006618e) midp_canvas_pane_ParamLimits

0xaccc,	// (0x000661e9) midp_keypad_pane_ParamLimits

0xaccc,	// (0x000661e9) midp_keypad_pane

0x0122,	// (0x0005b63f) main_midp_pane_ParamLimits

0x45b3,	// (0x0005fad0) signal_pane_g2_cp_ParamLimits

0xd975,	// (0x00068e92) aid_size_cell_midp_keypad_ParamLimits

0xd975,	// (0x00068e92) aid_size_cell_midp_keypad

0xd993,	// (0x00068eb0) midp_keyp_game_grid_pane_ParamLimits

0xd993,	// (0x00068eb0) midp_keyp_game_grid_pane

0xd9ba,	// (0x00068ed7) midp_keyp_rocker_pane_ParamLimits

0xd9ba,	// (0x00068ed7) midp_keyp_rocker_pane

0xd9f9,	// (0x00068f16) midp_keyp_sk_left_pane_ParamLimits

0xd9f9,	// (0x00068f16) midp_keyp_sk_left_pane

0xda4d,	// (0x00068f6a) midp_keyp_sk_right_pane_ParamLimits

0xda4d,	// (0x00068f6a) midp_keyp_sk_right_pane

0x5f5d,	// (0x0006147a) bg_button_pane_cp03

0xdaa1,	// (0x00068fbe) midp_keyp_sk_left_pane_g1

0x5f5d,	// (0x0006147a) bg_button_pane_cp04

0xdaa1,	// (0x00068fbe) midp_keyp_sk_right_pane_g1

0x4ab4,	// (0x0005ffd1) midp_keyp_rocker_pane_g1

0xdaaa,	// (0x00068fc7) keyp_game_cell_pane_ParamLimits

0xdaaa,	// (0x00068fc7) keyp_game_cell_pane

0x5f5d,	// (0x0006147a) bg_button_pane_cp02

0xdad0,	// (0x00068fed) keyp_game_cell_pane_g1

0x9d61,	// (0x0006527e) popup_fep_vkb2_window_ParamLimits

0x9d61,	// (0x0006527e) popup_fep_vkb2_window

0xbeff,	// (0x0006741c) aid_size_cell_vkb2_ParamLimits

0xbeff,	// (0x0006741c) aid_size_cell_vkb2

0xbf35,	// (0x00067452) popup_fep_vkb2_window_g1_ParamLimits

0xbf35,	// (0x00067452) popup_fep_vkb2_window_g1

0xbf85,	// (0x000674a2) vkb2_area_bottom_pane_ParamLimits

0xbf85,	// (0x000674a2) vkb2_area_bottom_pane

0xbfe1,	// (0x000674fe) vkb2_area_keypad_pane_ParamLimits

0xbfe1,	// (0x000674fe) vkb2_area_keypad_pane

0xc02f,	// (0x0006754c) vkb2_area_top_pane_ParamLimits

0xc02f,	// (0x0006754c) vkb2_area_top_pane

0xc0b5,	// (0x000675d2) vkb2_top_entry_pane_ParamLimits

0xc0b5,	// (0x000675d2) vkb2_top_entry_pane

0xc0e2,	// (0x000675ff) vkb2_top_grid_left_pane_ParamLimits

0xc0e2,	// (0x000675ff) vkb2_top_grid_left_pane

0xc102,	// (0x0006761f) vkb2_top_grid_right_pane_ParamLimits

0xc102,	// (0x0006761f) vkb2_top_grid_right_pane

0x1265,	// (0x0005c782) vkb2_cell_keypad_pane_ParamLimits

0x1265,	// (0x0005c782) vkb2_cell_keypad_pane

0xc148,	// (0x00067665) vkb2_area_bottom_grid_pane_ParamLimits

0xc148,	// (0x00067665) vkb2_area_bottom_grid_pane

0xc172,	// (0x0006768f) vkb2_area_bottom_pane_g1_ParamLimits

0xc172,	// (0x0006768f) vkb2_area_bottom_pane_g1

0xc198,	// (0x000676b5) vkb2_area_bottom_pane_g2_ParamLimits

0xc198,	// (0x000676b5) vkb2_area_bottom_pane_g2

0xc1c9,	// (0x000676e6) vkb2_area_bottom_pane_g3_ParamLimits

0xc1c9,	// (0x000676e6) vkb2_area_bottom_pane_g3

0x0002,

0xfda8,	// (0x0006b2c5) vkb2_area_bottom_pane_g_ParamLimits

0xfda8,	// (0x0006b2c5) vkb2_area_bottom_pane_g

0x140f,	// (0x0005c92c) vkb2_top_cell_left_pane_ParamLimits

0x140f,	// (0x0005c92c) vkb2_top_cell_left_pane

0xdad9,	// (0x00068ff6) vkb2_top_entry_pane_g1_ParamLimits

0xdad9,	// (0x00068ff6) vkb2_top_entry_pane_g1

0xdae7,	// (0x00069004) vkb2_top_entry_pane_t1_ParamLimits

0xdae7,	// (0x00069004) vkb2_top_entry_pane_t1

0x700c,	// (0x00062529) vkb2_top_entry_pane_t2_ParamLimits

0x700c,	// (0x00062529) vkb2_top_entry_pane_t2

0x703e,	// (0x0006255b) vkb2_top_entry_pane_t3_ParamLimits

0x703e,	// (0x0006255b) vkb2_top_entry_pane_t3

0x0002,

0xfdaf,	// (0x0006b2cc) vkb2_top_entry_pane_t_ParamLimits

0xfdaf,	// (0x0006b2cc) vkb2_top_entry_pane_t

0xc233,	// (0x00067750) vkb2_top_grid_right_pane_g1_ParamLimits

0xc233,	// (0x00067750) vkb2_top_grid_right_pane_g1

0x1472,	// (0x0005c98f) vkb2_top_grid_right_pane_g2_ParamLimits

0x1472,	// (0x0005c98f) vkb2_top_grid_right_pane_g2

0x148a,	// (0x0005c9a7) vkb2_top_grid_right_pane_g3_ParamLimits

0x148a,	// (0x0005c9a7) vkb2_top_grid_right_pane_g3

0xc249,	// (0x00067766) vkb2_top_grid_right_pane_g4_ParamLimits

0xc249,	// (0x00067766) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb6,	// (0x0006b2d3) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb6,	// (0x0006b2d3) vkb2_top_grid_right_pane_g

0x14b8,	// (0x0005c9d5) vkb2_top_cell_left_pane_g1

0x14cf,	// (0x0005c9ec) vkb2_cell_keypad_pane_g1_ParamLimits

0x14cf,	// (0x0005c9ec) vkb2_cell_keypad_pane_g1

0x7062,	// (0x0006257f) vkb2_cell_keypad_pane_t1_ParamLimits

0x7062,	// (0x0006257f) vkb2_cell_keypad_pane_t1

0x14dd,	// (0x0005c9fa) vkb2_cell_bottom_grid_pane_ParamLimits

0x14dd,	// (0x0005c9fa) vkb2_cell_bottom_grid_pane

0x1516,	// (0x0005ca33) vkb2_cell_bottom_grid_pane_g1

0xd798,	// (0x00068cb5) aid_call2_pane_cp02

0xd7a0,	// (0x00068cbd) aid_call_pane_cp02

0xd7a8,	// (0x00068cc5) clock_digital_number_pane_cp10

0xd7b0,	// (0x00068ccd) clock_digital_number_pane_cp11

0xd7b8,	// (0x00068cd5) clock_digital_number_pane_cp12

0xd7c0,	// (0x00068cdd) clock_digital_number_pane_cp13

0xd7c8,	// (0x00068ce5) clock_digital_separator_pane_cp10

0x8e58,	// (0x00064375) popup_clock_digital_analogue_window_cp2_g1

0x8e58,	// (0x00064375) popup_clock_digital_analogue_window_cp2_g2

0xd7d0,	// (0x00068ced) popup_clock_digital_analogue_window_cp2_g3

0x8e58,	// (0x00064375) popup_clock_digital_analogue_window_cp2_g4

0xd7d0,	// (0x00068ced) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6b,	// (0x0006b288) popup_clock_digital_analogue_window_cp2_g

0xd7d8,	// (0x00068cf5) popup_clock_digital_analogue_window_cp2_t1

0xd7e6,	// (0x00068d03) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd76,	// (0x0006b293) popup_clock_digital_analogue_window_cp2_t

0x4ab4,	// (0x0005ffd1) clock_digital_number_pane_cp10_g1

0x4ab4,	// (0x0005ffd1) clock_digital_number_pane_cp10_g2

0x0001,

0xfb52,	// (0x0006b06f) clock_digital_number_pane_cp10_g

0x4ab4,	// (0x0005ffd1) clock_digital_separator_pane_cp10_g1

0x4ab4,	// (0x0005ffd1) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb52,	// (0x0006b06f) clock_digital_separator_pane_cp10_g

0x6a95,	// (0x00061fb2) uniindi_top_pane_g3

0x6aa6,	// (0x00061fc3) uniindi_top_pane_g4

0x12f0,	// (0x0005c80d) vkb2_row_keypad_pane_ParamLimits

0x12f0,	// (0x0005c80d) vkb2_row_keypad_pane

0x1532,	// (0x0005ca4f) vkb2_cell_t_keypad_pane_ParamLimits

0x1532,	// (0x0005ca4f) vkb2_cell_t_keypad_pane

0x1542,	// (0x0005ca5f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1542,	// (0x0005ca5f) vkb2_cell_t_keypad_pane_cp08

0x1557,	// (0x0005ca74) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1557,	// (0x0005ca74) vkb2_cell_t_keypad_pane_cp09

0x156b,	// (0x0005ca88) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x156b,	// (0x0005ca88) vkb2_cell_t_keypad_pane_cp01

0x157c,	// (0x0005ca99) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x157c,	// (0x0005ca99) vkb2_cell_t_keypad_pane_cp02

0x158d,	// (0x0005caaa) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x158d,	// (0x0005caaa) vkb2_cell_t_keypad_pane_cp03

0x159e,	// (0x0005cabb) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x159e,	// (0x0005cabb) vkb2_cell_t_keypad_pane_cp04

0x15af,	// (0x0005cacc) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x15af,	// (0x0005cacc) vkb2_cell_t_keypad_pane_cp05

0x15c0,	// (0x0005cadd) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x15c0,	// (0x0005cadd) vkb2_cell_t_keypad_pane_cp06

0x15d3,	// (0x0005caf0) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x15d3,	// (0x0005caf0) vkb2_cell_t_keypad_pane_cp07

0x15e8,	// (0x0005cb05) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x15e8,	// (0x0005cb05) vkb2_cell_t_keypad_pane_cp10

0x0ca2,	// (0x0005c1bf) vkb2_cell_t_keypad_pane_g1

0x7079,	// (0x00062596) vkb2_cell_t_keypad_pane_t1

0xe752,	// (0x00069c6f) popup_grid_graphic2_window

0xdb20,	// (0x0006903d) aid_size_cell_graphic2_ParamLimits

0xdb20,	// (0x0006903d) aid_size_cell_graphic2

0xdb5e,	// (0x0006907b) bg_popup_window_pane_cp21_ParamLimits

0xdb5e,	// (0x0006907b) bg_popup_window_pane_cp21

0xdb6c,	// (0x00069089) graphic2_pages_pane_ParamLimits

0xdb6c,	// (0x00069089) graphic2_pages_pane

0xdbc4,	// (0x000690e1) grid_graphic2_control_pane_ParamLimits

0xdbc4,	// (0x000690e1) grid_graphic2_control_pane

0xdc0c,	// (0x00069129) grid_graphic2_pane_ParamLimits

0xdc0c,	// (0x00069129) grid_graphic2_pane

0xdc97,	// (0x000691b4) cell_graphic2_pane

0x5f5d,	// (0x0006147a) main_comp_mode_pane

0x5cad,	// (0x000611ca) list_ai3_gene_pane_ParamLimits

0xd4d5,	// (0x000689f2) bg_popup_window_pane_cp19_ParamLimits

0x66da,	// (0x00061bf7) bg_touch_area_indi_pane_ParamLimits

0x66da,	// (0x00061bf7) bg_touch_area_indi_pane

0x66f0,	// (0x00061c0d) bg_touch_area_indi_pane_cp01_ParamLimits

0x66f0,	// (0x00061c0d) bg_touch_area_indi_pane_cp01

0x6708,	// (0x00061c25) bg_touch_area_indi_pane_cp02_ParamLimits

0x6708,	// (0x00061c25) bg_touch_area_indi_pane_cp02

0x6722,	// (0x00061c3f) bg_touch_area_indi_pane_cp03_ParamLimits

0x6722,	// (0x00061c3f) bg_touch_area_indi_pane_cp03

0x673c,	// (0x00061c59) popup_slider_window_g1_ParamLimits

0x6758,	// (0x00061c75) popup_slider_window_g2_ParamLimits

0x6774,	// (0x00061c91) popup_slider_window_g3_ParamLimits

0xfd00,	// (0x0006b21d) popup_slider_window_g_ParamLimits

0x67d0,	// (0x00061ced) popup_slider_window_t1_ParamLimits

0x6844,	// (0x00061d61) small_volume_slider_vertical_pane_ParamLimits

0xdc97,	// (0x000691b4) cell_graphic2_pane_ParamLimits

0xdcfa,	// (0x00069217) bg_button_pane_cp10_ParamLimits

0xdcfa,	// (0x00069217) bg_button_pane_cp10

0xdd0d,	// (0x0006922a) bg_button_pane_cp11_ParamLimits

0xdd0d,	// (0x0006922a) bg_button_pane_cp11

0xdd20,	// (0x0006923d) graphic2_pages_pane_g1_ParamLimits

0xdd20,	// (0x0006923d) graphic2_pages_pane_g1

0xdd3b,	// (0x00069258) graphic2_pages_pane_g2_ParamLimits

0xdd3b,	// (0x00069258) graphic2_pages_pane_g2

0x0001,

0xfdc4,	// (0x0006b2e1) graphic2_pages_pane_g_ParamLimits

0xfdc4,	// (0x0006b2e1) graphic2_pages_pane_g

0xdd53,	// (0x00069270) graphic2_pages_pane_t1_ParamLimits

0xdd53,	// (0x00069270) graphic2_pages_pane_t1

0xdd6b,	// (0x00069288) cell_graphic2_control_pane_ParamLimits

0xdd6b,	// (0x00069288) cell_graphic2_control_pane

0xdd9f,	// (0x000692bc) cell_graphic2_pane_g1_ParamLimits

0xdd9f,	// (0x000692bc) cell_graphic2_pane_g1

0xddac,	// (0x000692c9) cell_graphic2_pane_g2_ParamLimits

0xddac,	// (0x000692c9) cell_graphic2_pane_g2

0xcdd7,	// (0x000682f4) cell_graphic2_pane_g3_ParamLimits

0xcdd7,	// (0x000682f4) cell_graphic2_pane_g3

0xddb9,	// (0x000692d6) cell_graphic2_pane_g4_ParamLimits

0xddb9,	// (0x000692d6) cell_graphic2_pane_g4

0xddc6,	// (0x000692e3) cell_graphic2_pane_g5_ParamLimits

0xddc6,	// (0x000692e3) cell_graphic2_pane_g5

0x0004,

0xfdc9,	// (0x0006b2e6) cell_graphic2_pane_g_ParamLimits

0xfdc9,	// (0x0006b2e6) cell_graphic2_pane_g

0xdde6,	// (0x00069303) cell_graphic2_pane_t1_ParamLimits

0xdde6,	// (0x00069303) cell_graphic2_pane_t1

0x2f6a,	// (0x0005e487) grid_highlight_pane_cp11_ParamLimits

0x2f6a,	// (0x0005e487) grid_highlight_pane_cp11

0x610c,	// (0x00061629) bg_button_pane_cp05

0xde1b,	// (0x00069338) cell_graphic2_control_pane_g1

0x4ab4,	// (0x0005ffd1) bg_touch_area_indi_pane_g1

0x7353,	// (0x00062870) aid_cmod_rocker_key_size

0x735d,	// (0x0006287a) aid_cmode_itu_key_size

0x7367,	// (0x00062884) main_cmode_video_pane

0x7371,	// (0x0006288e) main_comp_mode_itu_pane

0x737d,	// (0x0006289a) main_comp_mode_rocker_pane

0x7389,	// (0x000628a6) cell_cmode_rocker_pane_ParamLimits

0x7389,	// (0x000628a6) cell_cmode_rocker_pane

0x739d,	// (0x000628ba) cell_cmode_itu_pane_ParamLimits

0x739d,	// (0x000628ba) cell_cmode_itu_pane

0x81e6,	// (0x00063703) bg_button_pane_cp06_ParamLimits

0x81e6,	// (0x00063703) bg_button_pane_cp06

0x4d2f,	// (0x0006024c) cell_cmode_rocker_pane_g1_ParamLimits

0x4d2f,	// (0x0006024c) cell_cmode_rocker_pane_g1

0x68eb,	// (0x00061e08) cell_cmode_rocker_pane_g2_ParamLimits

0x68eb,	// (0x00061e08) cell_cmode_rocker_pane_g2

0x0001,

0xfdd9,	// (0x0006b2f6) cell_cmode_rocker_pane_g_ParamLimits

0xfdd9,	// (0x0006b2f6) cell_cmode_rocker_pane_g

0x5f5d,	// (0x0006147a) bg_button_pane_cp07

0x73b4,	// (0x000628d1) cell_cmode_itu_pane_g1

0x73bd,	// (0x000628da) cell_cmode_itu_pane_t1

0x73cb,	// (0x000628e8) cell_cmode_itu_pane_t2

0x0001,

0xfdde,	// (0x0006b2fb) cell_cmode_itu_pane_t

0x6b19,	// (0x00062036) aid_touch_ctrl_left

0x6b21,	// (0x0006203e) aid_touch_ctrl_right

0x5f5d,	// (0x0006147a) compa_mode_pane

0xde41,	// (0x0006935e) aid_cmod_rocker_key_size_cp

0xde4b,	// (0x00069368) aid_cmode_itu_key_size_cp

0x73ed,	// (0x0006290a) compa_mode_pane_g1

0x73f5,	// (0x00062912) compa_mode_pane_g2

0x73fd,	// (0x0006291a) compa_mode_pane_g3

0x0002,

0xfde3,	// (0x0006b300) compa_mode_pane_g

0xde55,	// (0x00069372) main_comp_mode_itu_pane_cp

0xde5d,	// (0x0006937a) main_comp_mode_rocker_pane_cp

0xde65,	// (0x00069382) cell_cmode_itu_pane_cp_ParamLimits

0xde65,	// (0x00069382) cell_cmode_itu_pane_cp

0xde7a,	// (0x00069397) cell_cmode_rocker_pane_cp_ParamLimits

0xde7a,	// (0x00069397) cell_cmode_rocker_pane_cp

0x81e6,	// (0x00063703) bg_button_pane_cp06_cp_ParamLimits

0x81e6,	// (0x00063703) bg_button_pane_cp06_cp

0x4d2f,	// (0x0006024c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4d2f,	// (0x0006024c) cell_cmode_rocker_pane_g1_cp

0x4ab4,	// (0x0005ffd1) cell_cmode_rocker_pane_g2_cp

0x5f5d,	// (0x0006147a) bg_button_pane_cp07_cp

0xde8c,	// (0x000693a9) cell_cmode_itu_pane_g1_cp

0xde95,	// (0x000693b2) cell_cmode_itu_pane_t1_cp

0xde95,	// (0x000693b2) cell_cmode_itu_pane_t2_cp

0xca47,	// (0x00067f64) settings_code_pane_cp2

0x5fcb,	// (0x000614e8) bg_popup_window_pane_cp3_ParamLimits

0x62fa,	// (0x00061817) heading_pane_cp3_ParamLimits

0x6306,	// (0x00061823) listscroll_popup_graphic_pane_ParamLimits

0x0a35,	// (0x0005bf52) fep_hwr_aid_pane_ParamLimits

0x0fa8,	// (0x0005c4c5) aid_touch_sctrl_top_ParamLimits

0x0fc3,	// (0x0005c4e0) sctrl_sk_top_pane_g1_ParamLimits

0x0ca2,	// (0x0005c1bf) sctrl_sk_top_pane_g2_ParamLimits

0xfd19,	// (0x0006b236) sctrl_sk_top_pane_g_ParamLimits

0x0fd0,	// (0x0005c4ed) sctrl_sk_top_pane_t1_ParamLimits

0x0fa8,	// (0x0005c4c5) aid_touch_sctrl_bottom_ParamLimits

0x0fd0,	// (0x0005c4ed) sctrl_sk_bottom_pane_t1_ParamLimits

0x6a5f,	// (0x00061f7c) aid_area_touch_clock

0xc077,	// (0x00067594) aid_vkb2_area_top_pane_cell_ParamLimits

0xc077,	// (0x00067594) aid_vkb2_area_top_pane_cell

0xc122,	// (0x0006763f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc122,	// (0x0006763f) aid_vkb2_area_bottom_pane_cell

0x6fc4,	// (0x000624e1) popup_char_count_window

0x7453,	// (0x00062970) popup_char_count_window_g1

0x745c,	// (0x00062979) popup_char_count_window_g2

0x7465,	// (0x00062982) popup_char_count_window_g3

0x0002,

0xfdea,	// (0x0006b307) popup_char_count_window_g

0x746e,	// (0x0006298b) popup_char_count_window_t1

0x1081,	// (0x0005c59e) popup_fep_char_preview_window_ParamLimits

0x1081,	// (0x0005c59e) popup_fep_char_preview_window

0xc097,	// (0x000675b4) vkb2_top_candi_pane_ParamLimits

0xc097,	// (0x000675b4) vkb2_top_candi_pane

0xdea3,	// (0x000693c0) cell_vkb2_top_candi_pane_ParamLimits

0xdea3,	// (0x000693c0) cell_vkb2_top_candi_pane

0x15fd,	// (0x0005cb1a) bg_popup_fep_char_preview_window_ParamLimits

0x15fd,	// (0x0005cb1a) bg_popup_fep_char_preview_window

0x160b,	// (0x0005cb28) popup_fep_char_preview_window_t1_ParamLimits

0x160b,	// (0x0005cb28) popup_fep_char_preview_window_t1

0x74cd,	// (0x000629ea) bg_popup_fep_char_preview_window_g1

0x74d5,	// (0x000629f2) bg_popup_fep_char_preview_window_g2

0x74dd,	// (0x000629fa) bg_popup_fep_char_preview_window_g3

0x74e5,	// (0x00062a02) bg_popup_fep_char_preview_window_g4

0x74ed,	// (0x00062a0a) bg_popup_fep_char_preview_window_g5

0x1645,	// (0x0005cb62) bg_popup_fep_char_preview_window_g6

0x74f5,	// (0x00062a12) bg_popup_fep_char_preview_window_g7

0x74fd,	// (0x00062a1a) bg_popup_fep_char_preview_window_g8

0x7505,	// (0x00062a22) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf1,	// (0x0006b30e) bg_popup_fep_char_preview_window_g

0x0ca2,	// (0x0005c1bf) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0ca2,	// (0x0005c1bf) cell_vkb2_top_candi_pane_g1

0x0cb0,	// (0x0005c1cd) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0cb0,	// (0x0005c1cd) cell_vkb2_top_candi_pane_g2

0x658d,	// (0x00061aaa) cell_vkb2_top_candi_pane_g3_ParamLimits

0x658d,	// (0x00061aaa) cell_vkb2_top_candi_pane_g3

0x164d,	// (0x0005cb6a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x164d,	// (0x0005cb6a) cell_vkb2_top_candi_pane_g4

0x524e,	// (0x0006076b) cell_vkb2_top_candi_pane_g5_ParamLimits

0x524e,	// (0x0006076b) cell_vkb2_top_candi_pane_g5

0x166e,	// (0x0005cb8b) cell_vkb2_top_candi_pane_g6_ParamLimits

0x166e,	// (0x0005cb8b) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe04,	// (0x0006b321) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe04,	// (0x0006b321) cell_vkb2_top_candi_pane_g

0x167c,	// (0x0005cb99) cell_vkb2_top_candi_pane_t1

0x0849,	// (0x0005bd66) aid_size_touch_slider_mark_ParamLimits

0x0849,	// (0x0005bd66) aid_size_touch_slider_mark

0xdba8,	// (0x000690c5) grid_graphic2_catg_pane_ParamLimits

0xdba8,	// (0x000690c5) grid_graphic2_catg_pane

0xdc66,	// (0x00069183) popup_grid_graphic2_window_t1_ParamLimits

0xdc66,	// (0x00069183) popup_grid_graphic2_window_t1

0xdc7c,	// (0x00069199) popup_grid_graphic2_window_t2_ParamLimits

0xdc7c,	// (0x00069199) popup_grid_graphic2_window_t2

0x0001,

0xfdbf,	// (0x0006b2dc) popup_grid_graphic2_window_t_ParamLimits

0xfdbf,	// (0x0006b2dc) popup_grid_graphic2_window_t

0x610c,	// (0x00061629) bg_button_pane_cp05_ParamLimits

0xde1b,	// (0x00069338) cell_graphic2_control_pane_g1_ParamLimits

0xdf0d,	// (0x0006942a) cell_graphic2_catg_pane_ParamLimits

0xdf0d,	// (0x0006942a) cell_graphic2_catg_pane

0x5f5d,	// (0x0006147a) bg_button_pane_cp12

0xdf1f,	// (0x0006943c) cell_graphic2_catg_pane_g1

0x6a2b,	// (0x00061f48) cell_tb_ext_pane_t1_ParamLimits

0x142f,	// (0x0005c94c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x142f,	// (0x0005c94c) vkb2_top_cell_right_narrow_pane

0x1447,	// (0x0005c964) vkb2_top_cell_right_wide_pane_ParamLimits

0x1447,	// (0x0005c964) vkb2_top_cell_right_wide_pane

0x0a27,	// (0x0005bf44) bg_vkb2_func_pane_ParamLimits

0x0a27,	// (0x0005bf44) bg_vkb2_func_pane

0x14b8,	// (0x0005c9d5) vkb2_top_cell_left_pane_g1_ParamLimits

0x0a27,	// (0x0005bf44) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0a27,	// (0x0005bf44) bg_vkb2_fuc_pane_cp03

0x1516,	// (0x0005ca33) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x22ab,	// (0x0005d7c8) bg_vkb2_func_pane_g1

0x22b3,	// (0x0005d7d0) bg_vkb2_func_pane_g2

0x22c3,	// (0x0005d7e0) bg_vkb2_func_pane_g3

0x22bb,	// (0x0005d7d8) bg_vkb2_func_pane_g4

0x22cb,	// (0x0005d7e8) bg_vkb2_func_pane_g5

0x22d3,	// (0x0005d7f0) bg_vkb2_func_pane_g6

0x22db,	// (0x0005d7f8) bg_vkb2_func_pane_g7

0x22e3,	// (0x0005d800) bg_vkb2_func_pane_g8

0x22a3,	// (0x0005d7c0) bg_vkb2_func_pane_g9

0x0008,

0xfe11,	// (0x0006b32e) bg_vkb2_func_pane_g

0x0a27,	// (0x0005bf44) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0a27,	// (0x0005bf44) bg_vkb2_fuc_pane_cp01

0x14b8,	// (0x0005c9d5) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x14b8,	// (0x0005c9d5) vkb2_top_cell_right_wide_pane_g1

0x0a27,	// (0x0005bf44) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0a27,	// (0x0005bf44) bg_vkb2_fuc_pane_cp02

0x1516,	// (0x0005ca33) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1516,	// (0x0005ca33) vkb2_top_cell_right_narrow_pane_g1

0xd40f,	// (0x0006892c) aid_touch_area_decrease_ParamLimits

0xd40f,	// (0x0006892c) aid_touch_area_decrease

0xd449,	// (0x00068966) aid_touch_area_increase_ParamLimits

0xd449,	// (0x00068966) aid_touch_area_increase

0xd471,	// (0x0006898e) aid_touch_area_mute_ParamLimits

0xd471,	// (0x0006898e) aid_touch_area_mute

0xd4a1,	// (0x000689be) aid_touch_area_slider_ParamLimits

0xd4a1,	// (0x000689be) aid_touch_area_slider

0xd4e1,	// (0x000689fe) popup_slider_window_g4_ParamLimits

0xd4e1,	// (0x000689fe) popup_slider_window_g4

0xd509,	// (0x00068a26) popup_slider_window_g5_ParamLimits

0xd509,	// (0x00068a26) popup_slider_window_g5

0xd53d,	// (0x00068a5a) popup_slider_window_g6_ParamLimits

0xd53d,	// (0x00068a5a) popup_slider_window_g6

0x67fe,	// (0x00061d1b) popup_slider_window_t2_ParamLimits

0x67fe,	// (0x00061d1b) popup_slider_window_t2

0x0001,

0xfd0d,	// (0x0006b22a) popup_slider_window_t_ParamLimits

0xfd0d,	// (0x0006b22a) popup_slider_window_t

0xd559,	// (0x00068a76) slider_pane_ParamLimits

0xd559,	// (0x00068a76) slider_pane

0x7528,	// (0x00062a45) slider_pane_g1_ParamLimits

0x7528,	// (0x00062a45) slider_pane_g1

0x753c,	// (0x00062a59) slider_pane_g2_ParamLimits

0x753c,	// (0x00062a59) slider_pane_g2

0x7552,	// (0x00062a6f) slider_pane_g3_ParamLimits

0x7552,	// (0x00062a6f) slider_pane_g3

0x0003,

0xfe24,	// (0x0006b341) slider_pane_g_ParamLimits

0xfe24,	// (0x0006b341) slider_pane_g

0xb628,	// (0x00066b45) popup_tb_float_extension_window_ParamLimits

0xb628,	// (0x00066b45) popup_tb_float_extension_window

0x757e,	// (0x00062a9b) aid_size_cell_tb_float_ext

0x5f5d,	// (0x0006147a) bg_popup_sub_window_cp28

0x758a,	// (0x00062aa7) grid_tb_float_ext_pane

0x7596,	// (0x00062ab3) cell_tb_float_ext_pane_ParamLimits

0x7596,	// (0x00062ab3) cell_tb_float_ext_pane

0x75b2,	// (0x00062acf) cell_tb_float_ext_pane_g1

0x75bb,	// (0x00062ad8) grid_highlight_pane_cp12

0xbd1f,	// (0x0006723c) cell_last_hwr_side_pane_ParamLimits

0xbd1f,	// (0x0006723c) cell_last_hwr_side_pane

0x4ab4,	// (0x0005ffd1) cell_last_hwr_side_pane_g1

0x75c4,	// (0x00062ae1) cell_last_hwr_side_pane_g2

0x0001,

0xfe2d,	// (0x0006b34a) cell_last_hwr_side_pane_g

0xc1fe,	// (0x0006771b) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc1fe,	// (0x0006771b) vkb2_area_bottom_space_btn_pane

0x0ca2,	// (0x0005c1bf) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7079,	// (0x00062596) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x167c,	// (0x0005cb99) cell_vkb2_top_candi_pane_t1_ParamLimits

0x169a,	// (0x0005cbb7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x169a,	// (0x0005cbb7) vkb2_area_bottom_space_btn_pane_g1

0x16d4,	// (0x0005cbf1) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x16d4,	// (0x0005cbf1) vkb2_area_bottom_space_btn_pane_g2

0x170a,	// (0x0005cc27) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x170a,	// (0x0005cc27) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe32,	// (0x0006b34f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe32,	// (0x0006b34f) vkb2_area_bottom_space_btn_pane_g

0x0aec,	// (0x0005c009) cel_fep_hwr_func_pane_ParamLimits

0x0aec,	// (0x0005c009) cel_fep_hwr_func_pane

0xbcf4,	// (0x00067211) cell_hwr_side_button_pane_ParamLimits

0xbcf4,	// (0x00067211) cell_hwr_side_button_pane

0x6a5f,	// (0x00061f7c) aid_area_touch_clock_ParamLimits

0x610c,	// (0x00061629) bg_uniindi_top_pane_ParamLimits

0x6a73,	// (0x00061f90) uniindi_top_pane_g1_ParamLimits

0x6a89,	// (0x00061fa6) uniindi_top_pane_g2_ParamLimits

0x6a95,	// (0x00061fb2) uniindi_top_pane_g3_ParamLimits

0x6aa6,	// (0x00061fc3) uniindi_top_pane_g4_ParamLimits

0xfd45,	// (0x0006b262) uniindi_top_pane_g_ParamLimits

0x6ab3,	// (0x00061fd0) uniindi_top_pane_t1_ParamLimits

0x610c,	// (0x00061629) bg_vkb2_func_pane_cp01_ParamLimits

0x610c,	// (0x00061629) bg_vkb2_func_pane_cp01

0x75cd,	// (0x00062aea) cel_fep_hwr_func_pane_g1_ParamLimits

0x75cd,	// (0x00062aea) cel_fep_hwr_func_pane_g1

0x610c,	// (0x00061629) bg_vkb2_func_pane_cp02_ParamLimits

0x610c,	// (0x00061629) bg_vkb2_func_pane_cp02

0x75cd,	// (0x00062aea) cell_hwr_side_button_pane_g1_ParamLimits

0x75cd,	// (0x00062aea) cell_hwr_side_button_pane_g1

0x2124,	// (0x0005d641) status_pane_g4_ParamLimits

0x2124,	// (0x0005d641) status_pane_g4

0x213e,	// (0x0005d65b) status_pane_t1

0x4853,	// (0x0005fd70) form2_midp_gauge_slider_cont_pane

0x485b,	// (0x0005fd78) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcd1d,	// (0x0006823a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcd2f,	// (0x0006824c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb05,	// (0x0006b022) form2_midp_gauge_slider_pane_t_ParamLimits

0x4891,	// (0x0005fdae) form2_midp_slider_pane_ParamLimits

0x1041,	// (0x0005c55e) aid_size_cell_func_vkb2_ParamLimits

0x1041,	// (0x0005c55e) aid_size_cell_func_vkb2

0x756a,	// (0x00062a87) slider_pane_g4_ParamLimits

0x756a,	// (0x00062a87) slider_pane_g4

0xc25f,	// (0x0006777c) form2_midp_gauge_slider_pane_t2_cp01

0xc26d,	// (0x0006778a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc26d,	// (0x0006778a) form2_midp_gauge_slider_pane_t3_cp01

0x177f,	// (0x0005cc9c) form2_midp_slider_pane_cp01

0x5f5d,	// (0x0006147a) navi_smil_pane

0x7606,	// (0x00062b23) navi_smil_pane_g1

0x760e,	// (0x00062b2b) navi_smil_pane_t1

0x75db,	// (0x00062af8) form2_midp_slider_pane_g1

0x75e4,	// (0x00062b01) form2_midp_slider_pane_g2

0x75ec,	// (0x00062b09) form2_midp_slider_pane_g3

0x75db,	// (0x00062af8) form2_midp_slider_pane_g4

0xdf28,	// (0x00069445) form2_midp_slider_pane_g5

0x0004,

0xfe3b,	// (0x0006b358) form2_midp_slider_pane_g

0x1744,	// (0x0005cc61) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1744,	// (0x0005cc61) vkb2_area_bottom_space_btn_pane_g4

0xb80f,	// (0x00066d2c) lc0_navi_pane_ParamLimits

0xb80f,	// (0x00066d2c) lc0_navi_pane

0xb87f,	// (0x00066d9c) lc0_stat_indi_pane_ParamLimits

0xb87f,	// (0x00066d9c) lc0_stat_indi_pane

0xb894,	// (0x00066db1) ls0_title_pane_ParamLimits

0xb894,	// (0x00066db1) ls0_title_pane

0x81e6,	// (0x00063703) bg_popup_sub_pane_cp14_ParamLimits

0x6a46,	// (0x00061f63) list_uniindi_pane_ParamLimits

0x6a52,	// (0x00061f6f) uniindi_top_pane_ParamLimits

0x6af1,	// (0x0006200e) list_single_uniindi_pane_g1_ParamLimits

0x6b04,	// (0x00062021) list_single_uniindi_pane_t1_ParamLimits

0xc28a,	// (0x000677a7) lc0_stat_clock_pane_ParamLimits

0xc28a,	// (0x000677a7) lc0_stat_clock_pane

0xdf31,	// (0x0006944e) lc0_stat_indi_pane_g1_ParamLimits

0xdf31,	// (0x0006944e) lc0_stat_indi_pane_g1

0xdf3e,	// (0x0006945b) lc0_stat_indi_pane_g2_ParamLimits

0xdf3e,	// (0x0006945b) lc0_stat_indi_pane_g2

0x0001,

0xfe46,	// (0x0006b363) lc0_stat_indi_pane_g_ParamLimits

0xfe46,	// (0x0006b363) lc0_stat_indi_pane_g

0xc297,	// (0x000677b4) lc0_uni_indicator_pane_ParamLimits

0xc297,	// (0x000677b4) lc0_uni_indicator_pane

0xdf4b,	// (0x00069468) ls0_title_pane_g1_ParamLimits

0xdf4b,	// (0x00069468) ls0_title_pane_g1

0xdf5f,	// (0x0006947c) ls0_title_pane_t1_ParamLimits

0xdf5f,	// (0x0006947c) ls0_title_pane_t1

0xc2a4,	// (0x000677c1) lc0_uni_indicator_pane_g1_ParamLimits

0xc2a4,	// (0x000677c1) lc0_uni_indicator_pane_g1

0x7680,	// (0x00062b9d) lc0_stat_clock_pane_t1

0x5f5d,	// (0x0006147a) main_ai5_pane

0x768e,	// (0x00062bab) ai5_sk_pane_ParamLimits

0x768e,	// (0x00062bab) ai5_sk_pane

0xdf8d,	// (0x000694aa) cell_ai5_widget_pane_ParamLimits

0xdf8d,	// (0x000694aa) cell_ai5_widget_pane

0x7c37,	// (0x00063154) aid_size_cell_widget_grid

0x7c45,	// (0x00063162) bg_ai5_widget_pane_ParamLimits

0x7c45,	// (0x00063162) bg_ai5_widget_pane

0x7cb9,	// (0x000631d6) cell_ai5_widget_pane_g2

0x7cc9,	// (0x000631e6) cell_ai5_widget_pane_g3

0x7ce0,	// (0x000631fd) cell_ai5_widget_pane_g4

0x7cec,	// (0x00063209) cell_ai5_widget_pane_g5

0xe2e4,	// (0x00069801) cell_ai5_widget_pane_g6

0xe2f0,	// (0x0006980d) cell_ai5_widget_pane_g7

0x7d4c,	// (0x00063269) cell_ai5_widget_pane_t1_ParamLimits

0x7d4c,	// (0x00063269) cell_ai5_widget_pane_t1

0x7d69,	// (0x00063286) cell_ai5_widget_pane_t2_ParamLimits

0x7d69,	// (0x00063286) cell_ai5_widget_pane_t2

0x7d81,	// (0x0006329e) cell_ai5_widget_pane_t3_ParamLimits

0x7d81,	// (0x0006329e) cell_ai5_widget_pane_t3

0x7d99,	// (0x000632b6) cell_ai5_widget_pane_t4_ParamLimits

0x7d99,	// (0x000632b6) cell_ai5_widget_pane_t4

0x7db6,	// (0x000632d3) cell_ai5_widget_pane_t5_ParamLimits

0x7db6,	// (0x000632d3) cell_ai5_widget_pane_t5

0x7dd5,	// (0x000632f2) cell_ai5_widget_pane_t6_ParamLimits

0x7dd5,	// (0x000632f2) cell_ai5_widget_pane_t6

0x7de7,	// (0x00063304) cell_ai5_widget_pane_t7_ParamLimits

0x7de7,	// (0x00063304) cell_ai5_widget_pane_t7

0x7e00,	// (0x0006331d) cell_ai5_widget_pane_t8_ParamLimits

0x7e00,	// (0x0006331d) cell_ai5_widget_pane_t8

0x0009,

0xfe60,	// (0x0006b37d) cell_ai5_widget_pane_t_ParamLimits

0xfe60,	// (0x0006b37d) cell_ai5_widget_pane_t

0x7e54,	// (0x00063371) grid_ai5_widget_pane

0x81e6,	// (0x00063703) highlight_cell_ai5_widget_pane_ParamLimits

0x81e6,	// (0x00063703) highlight_cell_ai5_widget_pane

0xe2fc,	// (0x00069819) ai5_sk_left_pane

0xe306,	// (0x00069823) ai5_sk_middle_pane

0xe310,	// (0x0006982d) ai5_sk_right_pane

0x7e80,	// (0x0006339d) bg_ai5_widget_pane_g1_ParamLimits

0x7e80,	// (0x0006339d) bg_ai5_widget_pane_g1

0x7e8c,	// (0x000633a9) bg_ai5_widget_pane_g2_ParamLimits

0x7e8c,	// (0x000633a9) bg_ai5_widget_pane_g2

0x7e98,	// (0x000633b5) bg_ai5_widget_pane_g3_ParamLimits

0x7e98,	// (0x000633b5) bg_ai5_widget_pane_g3

0x7ea4,	// (0x000633c1) bg_ai5_widget_pane_g4_ParamLimits

0x7ea4,	// (0x000633c1) bg_ai5_widget_pane_g4

0x7eb0,	// (0x000633cd) bg_ai5_widget_pane_g5_ParamLimits

0x7eb0,	// (0x000633cd) bg_ai5_widget_pane_g5

0x7ebc,	// (0x000633d9) bg_ai5_widget_pane_g6_ParamLimits

0x7ebc,	// (0x000633d9) bg_ai5_widget_pane_g6

0x7ec8,	// (0x000633e5) bg_ai5_widget_pane_g7_ParamLimits

0x7ec8,	// (0x000633e5) bg_ai5_widget_pane_g7

0x7ed4,	// (0x000633f1) bg_ai5_widget_pane_g8_ParamLimits

0x7ed4,	// (0x000633f1) bg_ai5_widget_pane_g8

0x7ee0,	// (0x000633fd) bg_ai5_widget_pane_g9_ParamLimits

0x7ee0,	// (0x000633fd) bg_ai5_widget_pane_g9

0x0008,

0xfe75,	// (0x0006b392) bg_ai5_widget_pane_g_ParamLimits

0xfe75,	// (0x0006b392) bg_ai5_widget_pane_g

0x7f18,	// (0x00063435) cell_shortcut_ai5_widget_pane_ParamLimits

0x7f18,	// (0x00063435) cell_shortcut_ai5_widget_pane

0xc569,	// (0x00067a86) bg_cell_shortcut_ai5_widget_pane

0x7f2b,	// (0x00063448) cell_grid_ai5_widget_pane_g1

0xc569,	// (0x00067a86) highlight_cell_shortcut_ai5_widget_pane

0x22ab,	// (0x0005d7c8) ai5_sk_left_pane_g1

0x7f34,	// (0x00063451) ai5_sk_left_pane_g2

0x7f3c,	// (0x00063459) ai5_sk_left_pane_g3

0x7f44,	// (0x00063461) ai5_sk_left_pane_g4

0x0003,

0xfe88,	// (0x0006b3a5) ai5_sk_left_pane_g

0x7f4c,	// (0x00063469) ai5_sk_left_pane_t1

0x22b3,	// (0x0005d7d0) ai5_sk_right_pane_g1

0x7f5a,	// (0x00063477) ai5_sk_right_pane_g2

0x7f62,	// (0x0006347f) ai5_sk_right_pane_g3

0x7f6a,	// (0x00063487) ai5_sk_right_pane_g4

0x0003,

0xfe91,	// (0x0006b3ae) ai5_sk_right_pane_g

0x7f72,	// (0x0006348f) ai5_sk_right_pane_t1

0x22b3,	// (0x0005d7d0) ai5_sk_middle_pane_g1

0x22ab,	// (0x0005d7c8) ai5_sk_middle_pane_g2

0x22cb,	// (0x0005d7e8) ai5_sk_middle_pane_g3

0x7f62,	// (0x0006347f) ai5_sk_middle_pane_g4

0x7f3c,	// (0x00063459) ai5_sk_middle_pane_g5

0x7f80,	// (0x0006349d) ai5_sk_middle_pane_g6

0xe31a,	// (0x00069837) ai5_sk_middle_pane_g7

0x0006,

0xfe9a,	// (0x0006b3b7) ai5_sk_middle_pane_g

0xb6f9,	// (0x00066c16) aid_touch_area_size_lc0_ParamLimits

0xb6f9,	// (0x00066c16) aid_touch_area_size_lc0

0x0cd1,	// (0x0005c1ee) cell_hwr_candidate_pane_t1_ParamLimits

0x1ddb,	// (0x0005d2f8) aid_touch_navi_pane

0xb99f,	// (0x00066ebc) status_dt_navi_pane_ParamLimits

0xb99f,	// (0x00066ebc) status_dt_navi_pane

0xb9b7,	// (0x00066ed4) status_dt_sta_pane_ParamLimits

0xb9b7,	// (0x00066ed4) status_dt_sta_pane

0xe322,	// (0x0006983f) dt_sta_controll_pane

0xe32f,	// (0x0006984c) dt_sta_indi_pane

0xe33c,	// (0x00069859) dt_sta_title_pane

0x610c,	// (0x00061629) bg_dt_sta_indi_pane_ParamLimits

0x610c,	// (0x00061629) bg_dt_sta_indi_pane

0xe34e,	// (0x0006986b) dt_sta_battery_pane

0xe356,	// (0x00069873) dt_sta_indi_pane_g1

0xe35f,	// (0x0006987c) dt_sta_indi_pane_g2

0xe368,	// (0x00069885) dt_sta_indi_pane_g3

0x0002,

0xfea9,	// (0x0006b3c6) dt_sta_indi_pane_g

0xe371,	// (0x0006988e) dt_sta_signal_pane

0x81e6,	// (0x00063703) bg_dt_sta_title_pane_ParamLimits

0x81e6,	// (0x00063703) bg_dt_sta_title_pane

0xe37a,	// (0x00069897) dt_sta_title_pane_g1

0xe382,	// (0x0006989f) dt_sta_title_pane_t1_ParamLimits

0xe382,	// (0x0006989f) dt_sta_title_pane_t1

0x5f5d,	// (0x0006147a) bg_dt_sta_control_pane

0xe397,	// (0x000698b4) dt_sta_controll_pane_g1

0xe3a0,	// (0x000698bd) bg_dt_sta_title_pane_g1

0xe3a9,	// (0x000698c6) bg_dt_sta_title_pane_g2

0xe3b2,	// (0x000698cf) bg_dt_sta_title_pane_g3

0x0002,

0xfeb0,	// (0x0006b3cd) bg_dt_sta_title_pane_g

0x4ab4,	// (0x0005ffd1) bg_dt_sta_indi_pane_g1

0x802e,	// (0x0006354b) dt_sta_signal_pane_g1

0x8036,	// (0x00063553) dt_sta_signal_pane_g2

0x0001,

0xfeb7,	// (0x0006b3d4) dt_sta_signal_pane_g

0x803e,	// (0x0006355b) dt_sta_battery_pane_g1

0x8047,	// (0x00063564) dt_sta_battery_pane_t1

0x4ab4,	// (0x0005ffd1) bg_dt_sta_control_pane_g1

0x8eda,	// (0x000643f7) fep_china_uni_eep_pane

0x8ee2,	// (0x000643ff) fep_china_uni_entry_pane_ParamLimits

0x8ef2,	// (0x0006440f) popup_fep_china_uni_window_g1_ParamLimits

0x8f02,	// (0x0006441f) popup_fep_china_uni_window_g2_ParamLimits

0x8f02,	// (0x0006441f) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0006ac3f) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0006ac3f) popup_fep_china_uni_window_g

0x8056,	// (0x00063573) fep_china_uni_eep_pane_g1

0x805e,	// (0x0006357b) fep_china_uni_eep_pane_t1

0x75fd,	// (0x00062b1a) aid_touch_area_size_smil_player

0x1f33,	// (0x0005d450) lc0_clock_pane

0x2132,	// (0x0005d64f) status_pane_g5_ParamLimits

0x2132,	// (0x0005d64f) status_pane_g5

0xb14e,	// (0x0006666b) popup_keymap_window

0x20f0,	// (0x0005d60d) status_icon_pane

0x7cc9,	// (0x000631e6) cell_ai5_widget_pane_g3_ParamLimits

0x7ce0,	// (0x000631fd) cell_ai5_widget_pane_g4_ParamLimits

0x7cec,	// (0x00063209) cell_ai5_widget_pane_g5_ParamLimits

0x7d10,	// (0x0006322d) cell_ai5_widget_pane_g8_ParamLimits

0x7d10,	// (0x0006322d) cell_ai5_widget_pane_g8

0x7d24,	// (0x00063241) cell_ai5_widget_pane_g9_ParamLimits

0x7d24,	// (0x00063241) cell_ai5_widget_pane_g9

0x7d38,	// (0x00063255) cell_ai5_widget_pane_g10_ParamLimits

0x7d38,	// (0x00063255) cell_ai5_widget_pane_g10

0x806d,	// (0x0006358a) status_icon_pane_g1

0x5f5d,	// (0x0006147a) bg_popup_sub_pane_cp13

0x8075,	// (0x00063592) popup_keymap_window_t1

0xae2f,	// (0x0006634c) control_pane_g6_ParamLimits

0xae2f,	// (0x0006634c) control_pane_g6

0xae3c,	// (0x00066359) control_pane_g7_ParamLimits

0xae3c,	// (0x00066359) control_pane_g7

0xae49,	// (0x00066366) control_pane_g8_ParamLimits

0xae49,	// (0x00066366) control_pane_g8

0xe322,	// (0x0006983f) dt_sta_controll_pane_ParamLimits

0xe32f,	// (0x0006984c) dt_sta_indi_pane_ParamLimits

0xe33c,	// (0x00069859) dt_sta_title_pane_ParamLimits

0x6530,	// (0x00061a4d) aid_size_touch_scroll_bar_cale

0xe82f,	// (0x00069d4c) popup_discreet_window_ParamLimits

0xe82f,	// (0x00069d4c) popup_discreet_window

0x9dab,	// (0x000652c8) popup_sk_window

0x28f3,	// (0x0005de10) bg_popup_sub_pane_cp28_ParamLimits

0x28f3,	// (0x0005de10) bg_popup_sub_pane_cp28

0x8083,	// (0x000635a0) popup_discreet_window_g1_ParamLimits

0x8083,	// (0x000635a0) popup_discreet_window_g1

0x80a3,	// (0x000635c0) popup_discreet_window_t1_ParamLimits

0x80a3,	// (0x000635c0) popup_discreet_window_t1

0x80c1,	// (0x000635de) popup_discreet_window_t2_ParamLimits

0x80c1,	// (0x000635de) popup_discreet_window_t2

0x0002,

0xfebc,	// (0x0006b3d9) popup_discreet_window_t_ParamLimits

0xfebc,	// (0x0006b3d9) popup_discreet_window_t

0x17b5,	// (0x0005ccd2) popup_sk_window_g1

0x17bf,	// (0x0005ccdc) popup_sk_window_g2

0x0001,

0xfec3,	// (0x0006b3e0) popup_sk_window_g

0x17c9,	// (0x0005cce6) popup_sk_window_t1

0x17d9,	// (0x0005ccf6) popup_sk_window_t1_copy1

0x7cb9,	// (0x000631d6) cell_ai5_widget_pane_g2_ParamLimits

0x7e12,	// (0x0006332f) cell_ai5_widget_pane_t9_ParamLimits

0x7e12,	// (0x0006332f) cell_ai5_widget_pane_t9

0x5f5d,	// (0x0006147a) main_fep_fshwr2_pane

0xc2c3,	// (0x000677e0) aid_fshwr2_btn_pane

0xc2d4,	// (0x000677f1) aid_fshwr2_syb_pane

0xc2e5,	// (0x00067802) aid_fshwr2_txt_pane

0xc2f1,	// (0x0006780e) fshwr2_func_candi_pane

0xc312,	// (0x0006782f) fshwr2_hwr_syb_pane

0xc32f,	// (0x0006784c) fshwr2_icf_pane

0xe752,	// (0x00069c6f) fshwr2_icf_bg_pane

0x185b,	// (0x0005cd78) fshwr2_icf_pane_t1_ParamLimits

0x185b,	// (0x0005cd78) fshwr2_icf_pane_t1

0x8e58,	// (0x00064375) fshwr2_func_candi_pane_g1

0xe3bb,	// (0x000698d8) fshwr2_func_candi_row_pane_ParamLimits

0xe3bb,	// (0x000698d8) fshwr2_func_candi_row_pane

0xc35b,	// (0x00067878) cell_fshwr2_syb_pane_ParamLimits

0xc35b,	// (0x00067878) cell_fshwr2_syb_pane

0x0ca2,	// (0x0005c1bf) fshwr2_hwr_syb_pane_g1_ParamLimits

0x0ca2,	// (0x0005c1bf) fshwr2_hwr_syb_pane_g1

0xe752,	// (0x00069c6f) bg_popup_call_pane_cp01

0xc371,	// (0x0006788e) fshwr2_func_candi_cell_pane_ParamLimits

0xc371,	// (0x0006788e) fshwr2_func_candi_cell_pane

0xe3d7,	// (0x000698f4) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe3d7,	// (0x000698f4) fshwr2_func_candi_cell_bg_pane

0xc3b7,	// (0x000678d4) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc3b7,	// (0x000678d4) fshwr2_func_candi_cell_pane_g1

0xc3ee,	// (0x0006790b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc3ee,	// (0x0006790b) fshwr2_func_candi_cell_pane_t1

0xe752,	// (0x00069c6f) bg_button_pane_cp08

0x812f,	// (0x0006364c) cell_fshwr2_syb_bg_pane

0xc409,	// (0x00067926) cell_fshwr2_syb_bg_pane_g1

0xc411,	// (0x0006792e) cell_fshwr2_syb_bg_pane_t1

0x81e6,	// (0x00063703) main_tmo_pane

0xc844,	// (0x00067d61) uni_indicator_pane_g1_ParamLimits

0xc85a,	// (0x00067d77) uni_indicator_pane_g2_ParamLimits

0xc870,	// (0x00067d8d) uni_indicator_pane_g3_ParamLimits

0xc885,	// (0x00067da2) uni_indicator_pane_g4_ParamLimits

0xc885,	// (0x00067da2) uni_indicator_pane_g4

0x346c,	// (0x0005e989) uni_indicator_pane_g5_ParamLimits

0x346c,	// (0x0005e989) uni_indicator_pane_g5

0x346c,	// (0x0005e989) uni_indicator_pane_g6_ParamLimits

0x346c,	// (0x0005e989) uni_indicator_pane_g6

0xf921,	// (0x0006ae3e) uni_indicator_pane_g_ParamLimits

0xd3df,	// (0x000688fc) popup_tmo_note_window_ParamLimits

0xd3df,	// (0x000688fc) popup_tmo_note_window

0x1023,	// (0x0005c540) fshwr2_bg_pane

0xc3df,	// (0x000678fc) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc3df,	// (0x000678fc) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec8,	// (0x0006b3e5) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec8,	// (0x0006b3e5) fshwr2_func_candi_cell_pane_g

0x0c8a,	// (0x0005c1a7) bg_popup_window_pane_cp01

0x191d,	// (0x0005ce3a) bg_popup_window_pane_g1_cp01

0x8137,	// (0x00063654) bg_popup_window_pane_cp22_ParamLimits

0x8137,	// (0x00063654) bg_popup_window_pane_cp22

0x8145,	// (0x00063662) listscroll_tmo_link_pane_ParamLimits

0x8145,	// (0x00063662) listscroll_tmo_link_pane

0x83a6,	// (0x000638c3) popup_tmo_note_window_g1_ParamLimits

0x83a6,	// (0x000638c3) popup_tmo_note_window_g1

0x83b3,	// (0x000638d0) tmo_note_info_pane_ParamLimits

0x83b3,	// (0x000638d0) tmo_note_info_pane

0xe3e3,	// (0x00069900) list_tmo_note_info_pane_g1_ParamLimits

0xe3e3,	// (0x00069900) list_tmo_note_info_pane_g1

0x83e4,	// (0x00063901) list_tmo_note_info_pane_g2_ParamLimits

0x83e4,	// (0x00063901) list_tmo_note_info_pane_g2

0x0001,

0xfecd,	// (0x0006b3ea) list_tmo_note_info_pane_g_ParamLimits

0xfecd,	// (0x0006b3ea) list_tmo_note_info_pane_g

0x8400,	// (0x0006391d) list_tmo_note_info_text_pane_ParamLimits

0x8400,	// (0x0006391d) list_tmo_note_info_text_pane

0x8485,	// (0x000639a2) list_tmo_link_pane

0x8492,	// (0x000639af) scroll_pane_cp20

0x849f,	// (0x000639bc) list_single_tmo_link_pane_ParamLimits

0x849f,	// (0x000639bc) list_single_tmo_link_pane

0x84af,	// (0x000639cc) list_single_tmo_link_pane_t1

0x84bd,	// (0x000639da) list_tmo_note_info_text_pane_t1_ParamLimits

0x84bd,	// (0x000639da) list_tmo_note_info_text_pane_t1

0xa864,	// (0x00065d81) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa864,	// (0x00065d81) aid_size_touch_scroll_bar_cp01

0xa793,	// (0x00065cb0) aid_size_touch_slider_marker

0x9d9b,	// (0x000652b8) popup_settings_window_ParamLimits

0x9d9b,	// (0x000652b8) popup_settings_window

0xeb1b,	// (0x0006a038) popup_candi_list_indi_window

0x1ddb,	// (0x0005d2f8) aid_touch_navi_pane_ParamLimits

0x0f7c,	// (0x0005c499) rs_clock_indi_pane

0x0f85,	// (0x0005c4a2) sctrl_sk_bottom_pane_ParamLimits

0x0f96,	// (0x0005c4b3) sctrl_sk_top_pane_ParamLimits

0x109b,	// (0x0005c5b8) popup_fep_tooltip_window

0x7c37,	// (0x00063154) aid_size_cell_widget_grid_ParamLimits

0x7ca4,	// (0x000631c1) cell_ai5_widget_pane_g1_ParamLimits

0x7ca4,	// (0x000631c1) cell_ai5_widget_pane_g1

0xe2e4,	// (0x00069801) cell_ai5_widget_pane_g6_ParamLimits

0xe2f0,	// (0x0006980d) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4b,	// (0x0006b368) cell_ai5_widget_pane_g_ParamLimits

0xfe4b,	// (0x0006b368) cell_ai5_widget_pane_g

0x7e36,	// (0x00063353) cell_ai5_widget_pane_t10_ParamLimits

0x7e36,	// (0x00063353) cell_ai5_widget_pane_t10

0x7e54,	// (0x00063371) grid_ai5_widget_pane_ParamLimits

0x7eec,	// (0x00063409) cell_contacts_ai5_widget_pane_ParamLimits

0x7eec,	// (0x00063409) cell_contacts_ai5_widget_pane

0x80d6,	// (0x000635f3) popup_discreet_window_t3_ParamLimits

0x80d6,	// (0x000635f3) popup_discreet_window_t3

0xc347,	// (0x00067864) popup_fshwr2_char_preview_window_ParamLimits

0xc347,	// (0x00067864) popup_fshwr2_char_preview_window

0xe3fa,	// (0x00069917) tmo_note_info_pane_t1

0xe40f,	// (0x0006992c) tmo_note_info_pane_t2

0xe428,	// (0x00069945) tmo_note_info_pane_t3

0x8461,	// (0x0006397e) tmo_note_info_pane_t4

0x8473,	// (0x00063990) tmo_note_info_pane_t5

0x0004,

0xfed2,	// (0x0006b3ef) tmo_note_info_pane_t

0x8485,	// (0x000639a2) list_tmo_link_pane_ParamLimits

0x8492,	// (0x000639af) scroll_pane_cp20_ParamLimits

0xe752,	// (0x00069c6f) bg_popup_fep_char_preview_window_cp01

0x84d6,	// (0x000639f3) popup_fshwr2_char_preview_window_t1

0x84e4,	// (0x00063a01) popup_candi_list_indi_window_g1

0x84ed,	// (0x00063a0a) bg_cell_contacts_ai5_widget_pane

0x84f9,	// (0x00063a16) cell_contacts_ai5_widget_pane_g1

0x850e,	// (0x00063a2b) cell_contacts_ai5_widget_pane_g2

0x851a,	// (0x00063a37) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfedd,	// (0x0006b3fa) cell_contacts_ai5_widget_pane_g

0x8526,	// (0x00063a43) cell_contacts_ai5_widget_pane_t1

0x81e6,	// (0x00063703) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe4a2,	// (0x000699bf) settings_container_pane

0xc569,	// (0x00067a86) listscroll_set_pane_copy1

0x41d5,	// (0x0005f6f2) scroll_pane_cp121_copy1

0x85a9,	// (0x00063ac6) set_content_pane_copy1

0xe4ae,	// (0x000699cb) aid_height_set_list_copy1_ParamLimits

0xe4ae,	// (0x000699cb) aid_height_set_list_copy1

0x366c,	// (0x0005eb89) aid_size_parent_copy1_ParamLimits

0x366c,	// (0x0005eb89) aid_size_parent_copy1

0xe4ba,	// (0x000699d7) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe4ba,	// (0x000699d7) button_value_adjust_pane_cp6_copy1

0x0122,	// (0x0005b63f) list_highlight_pane_cp2_copy1_ParamLimits

0x0122,	// (0x0005b63f) list_highlight_pane_cp2_copy1

0xe4ce,	// (0x000699eb) list_set_pane_copy1_ParamLimits

0xe4ce,	// (0x000699eb) list_set_pane_copy1

0xe43d,	// (0x0006995a) main_pane_set_t1_copy1_ParamLimits

0xe43d,	// (0x0006995a) main_pane_set_t1_copy1

0xe477,	// (0x00069994) main_pane_set_t2_copy1_ParamLimits

0xe477,	// (0x00069994) main_pane_set_t2_copy1

0xe595,	// (0x00069ab2) main_pane_set_t3_copy1

0xe5a3,	// (0x00069ac0) main_pane_set_t4_copy1

0xe496,	// (0x000699b3) set_content_pane_g1_copy1_ParamLimits

0xe496,	// (0x000699b3) set_content_pane_g1_copy1

0xe5b1,	// (0x00069ace) setting_code_pane_copy1

0x86bc,	// (0x00063bd9) setting_slider_graphic_pane_copy1

0x86bc,	// (0x00063bd9) setting_slider_pane_copy1

0x86bc,	// (0x00063bd9) setting_text_pane_copy1

0x86bc,	// (0x00063bd9) setting_volume_pane_copy1

0xe5b1,	// (0x00069ace) settings_code_pane_cp2_copy1

0xe5b9,	// (0x00069ad6) settings_code_pane_cp_copy1_ParamLimits

0xe5b9,	// (0x00069ad6) settings_code_pane_cp_copy1

0xc420,	// (0x0006793d) volume_set_pane_copy1

0xe5cd,	// (0x00069aea) volume_set_pane_g10_copy1

0xe5d9,	// (0x00069af6) volume_set_pane_g1_copy1

0xe5e3,	// (0x00069b00) volume_set_pane_g2_copy1

0xe5ed,	// (0x00069b0a) volume_set_pane_g3_copy1

0xe5f7,	// (0x00069b14) volume_set_pane_g4_copy1

0xe601,	// (0x00069b1e) volume_set_pane_g5_copy1

0xe60b,	// (0x00069b28) volume_set_pane_g6_copy1

0xe615,	// (0x00069b32) volume_set_pane_g7_copy1

0xe61f,	// (0x00069b3c) volume_set_pane_g8_copy1

0xe629,	// (0x00069b46) volume_set_pane_g9_copy1

0x5fcb,	// (0x000614e8) bg_set_opt_pane_cp_copy1_ParamLimits

0x5fcb,	// (0x000614e8) bg_set_opt_pane_cp_copy1

0x1932,	// (0x0005ce4f) setting_slider_pane_t1_copy1_ParamLimits

0x1932,	// (0x0005ce4f) setting_slider_pane_t1_copy1

0xc42c,	// (0x00067949) setting_slider_pane_t2_copy1_ParamLimits

0xc42c,	// (0x00067949) setting_slider_pane_t2_copy1

0xc446,	// (0x00067963) setting_slider_pane_t3_copy1_ParamLimits

0xc446,	// (0x00067963) setting_slider_pane_t3_copy1

0xc45e,	// (0x0006797b) slider_set_pane_copy1_ParamLimits

0xc45e,	// (0x0006797b) slider_set_pane_copy1

0x8241,	// (0x0006375e) set_opt_bg_pane_g1_copy2

0x8249,	// (0x00063766) set_opt_bg_pane_g2_copy2

0x873e,	// (0x00063c5b) set_opt_bg_pane_g3_copy2

0x8259,	// (0x00063776) set_opt_bg_pane_g4_copy2

0x8261,	// (0x0006377e) set_opt_bg_pane_g5_copy2

0x8269,	// (0x00063786) set_opt_bg_pane_g6_copy2

0xe633,	// (0x00069b50) set_opt_bg_pane_g7_copy2

0x8752,	// (0x00063c6f) set_opt_bg_pane_g8_copy2

0x875c,	// (0x00063c79) set_opt_bg_pane_g9_copy2

0x1998,	// (0x0005ceb5) aid_size_touch_slider_mark_copy1_ParamLimits

0x1998,	// (0x0005ceb5) aid_size_touch_slider_mark_copy1

0x8766,	// (0x00063c83) slider_set_pane_g1_copy1

0x19ac,	// (0x0005cec9) slider_set_pane_g2_copy1

0x0869,	// (0x0005bd86) slider_set_pane_g3_copy1_ParamLimits

0x0869,	// (0x0005bd86) slider_set_pane_g3_copy1

0x087d,	// (0x0005bd9a) slider_set_pane_g4_copy1_ParamLimits

0x087d,	// (0x0005bd9a) slider_set_pane_g4_copy1

0x0895,	// (0x0005bdb2) slider_set_pane_g5_copy1_ParamLimits

0x0895,	// (0x0005bdb2) slider_set_pane_g5_copy1

0x0869,	// (0x0005bd86) slider_set_pane_g6_copy1_ParamLimits

0x0869,	// (0x0005bd86) slider_set_pane_g6_copy1

0xc474,	// (0x00067991) slider_set_pane_g7_copy1_ParamLimits

0xc474,	// (0x00067991) slider_set_pane_g7_copy1

0x5f71,	// (0x0006148e) bg_set_opt_pane_cp2_copy1

0x876f,	// (0x00063c8c) setting_slider_graphic_pane_g1_copy1

0xe63d,	// (0x00069b5a) setting_slider_graphic_pane_t1_copy1

0xe64d,	// (0x00069b6a) setting_slider_graphic_pane_t2_copy1

0xe65d,	// (0x00069b7a) slider_set_pane_cp_copy1

0x87a8,	// (0x00063cc5) input_focus_pane_cp1_copy1

0x87b1,	// (0x00063cce) list_set_text_pane_copy1

0x87b9,	// (0x00063cd6) setting_text_pane_g1_copy1

0xc48a,	// (0x000679a7) set_text_pane_t1_copy1

0x87a8,	// (0x00063cc5) input_focus_pane_cp2_copy1

0x87b9,	// (0x00063cd6) setting_code_pane_g1_copy1

0xe665,	// (0x00069b82) setting_code_pane_t1_copy1

0xe673,	// (0x00069b90) list_set_graphic_pane_copy1

0x5f71,	// (0x0006148e) bg_set_opt_pane_cp4_copy1

0xabb2,	// (0x000660cf) list_set_graphic_pane_g1_copy1_ParamLimits

0xabb2,	// (0x000660cf) list_set_graphic_pane_g1_copy1

0xe685,	// (0x00069ba2) list_set_graphic_pane_g2_copy1

0xabca,	// (0x000660e7) list_set_graphic_pane_t1_copy1_ParamLimits

0xabca,	// (0x000660e7) list_set_graphic_pane_t1_copy1

0x4ab4,	// (0x0005ffd1) rs_clock_indi_pane_g1

0x87ea,	// (0x00063d07) rs_clock_indi_pane_t1

0x87f8,	// (0x00063d15) rs_indi_pane

0x8800,	// (0x00063d1d) rs_indi_pane_g1

0x8809,	// (0x00063d26) rs_indi_pane_g2

0x8812,	// (0x00063d2f) rs_indi_pane_g3

0x0002,

0xfee4,	// (0x0006b401) rs_indi_pane_g

0xc569,	// (0x00067a86) bg_popup_preview_window_pane_cp03

0x881b,	// (0x00063d38) popup_fep_tooltip_window_t1

0x576b,	// (0x00060c88) popup_note2_window_g2_ParamLimits

0x576b,	// (0x00060c88) popup_note2_window_g2

0x0001,

0xfc7d,	// (0x0006b19a) popup_note2_window_g_ParamLimits

0xfc7d,	// (0x0006b19a) popup_note2_window_g

0x5c73,	// (0x00061190) bg_popup_sub_pane_cp11_ParamLimits

0x5c80,	// (0x0006119d) cell_ai3_links_pane_g1_ParamLimits

0x5c97,	// (0x000611b4) cell_ai3_links_pane_t1

0xc48a,	// (0x000679a7) set_text_pane_t1_copy1_ParamLimits

0xac49,	// (0x00066166) cell_graphic_popup_pane_cp2_ParamLimits

0xac49,	// (0x00066166) cell_graphic_popup_pane_cp2

0xe68d,	// (0x00069baa) cell_graphic_popup_pane_g1_cp2

0x6343,	// (0x00061860) cell_graphic_popup_pane_g2_cp2

0x8831,	// (0x00063d4e) cell_graphic_popup_pane_g3_cp2

0x8839,	// (0x00063d56) cell_graphic_popup_pane_t2_cp2

0x6354,	// (0x00061871) grid_highlight_pane_cp3_cp2

0x8c7a,	// (0x00064197) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x81e6,	// (0x00063703) main_tmo_pane_ParamLimits

0xd3d3,	// (0x000688f0) popup_tmo_big_image_note_window

0x7c93,	// (0x000631b0) cell_ai5_widget_list_pane

0x7c9b,	// (0x000631b8) cell_ai5_widget_lrg_icon_pane

0xe3fa,	// (0x00069917) tmo_note_info_pane_t1_ParamLimits

0xe40f,	// (0x0006992c) tmo_note_info_pane_t2_ParamLimits

0xe428,	// (0x00069945) tmo_note_info_pane_t3_ParamLimits

0x8461,	// (0x0006397e) tmo_note_info_pane_t4_ParamLimits

0x8473,	// (0x00063990) tmo_note_info_pane_t5_ParamLimits

0xfed2,	// (0x0006b3ef) tmo_note_info_pane_t_ParamLimits

0xe4a2,	// (0x000699bf) settings_container_pane_ParamLimits

0x87a0,	// (0x00063cbd) indicator_popup_pane_cp5

0x87a0,	// (0x00063cbd) indicator_popup_pane_cp6

0xe673,	// (0x00069b90) list_set_graphic_pane_copy1_ParamLimits

0x5f5d,	// (0x0006147a) bg_popup_window_pane_cp23

0x8847,	// (0x00063d64) popup_tmo_big_image_note_window_g1

0x8853,	// (0x00063d70) popup_tmo_big_image_note_window_t1

0x8863,	// (0x00063d80) popup_tmo_big_image_note_window_t2

0x8873,	// (0x00063d90) popup_tmo_big_image_note_window_t3

0x0002,

0xfeeb,	// (0x0006b408) popup_tmo_big_image_note_window_t

0x4ab4,	// (0x0005ffd1) cell_ai5_widget_lrg_icon_pane_g1

0x8883,	// (0x00063da0) cell_ai5_widget_lrg_icon_pane_t1

0x8891,	// (0x00063dae) cell_ai5_widget_list_row_pane_ParamLimits

0x8891,	// (0x00063dae) cell_ai5_widget_list_row_pane

0x88a9,	// (0x00063dc6) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x88a9,	// (0x00063dc6) cell_ai5_widget_list_row_pane_g1

0x88b6,	// (0x00063dd3) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x88b6,	// (0x00063dd3) cell_ai5_widget_list_row_pane_t1

0x88e1,	// (0x00063dfe) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x88e1,	// (0x00063dfe) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfef2,	// (0x0006b40f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef2,	// (0x0006b40f) cell_ai5_widget_list_row_pane_t

0xe752,	// (0x00069c6f) main_fep_vtchi_ss_pane

0x8925,	// (0x00063e42) popup_fep_char_pre_window

0x892d,	// (0x00063e4a) popup_fep_ituss_window

0x894e,	// (0x00063e6b) popup_fep_vkbss_window

0x896f,	// (0x00063e8c) grid_vkbss_keypad_pane_ParamLimits

0x896f,	// (0x00063e8c) grid_vkbss_keypad_pane

0x897f,	// (0x00063e9c) ituss_keypad_pane

0x19d6,	// (0x0005cef3) aid_vkbss_key_offset_ParamLimits

0x19d6,	// (0x0005cef3) aid_vkbss_key_offset

0x19e2,	// (0x0005ceff) cell_vkbss_key_pane_ParamLimits

0x19e2,	// (0x0005ceff) cell_vkbss_key_pane

0x898e,	// (0x00063eab) bg_cell_vkbss_key_g1_ParamLimits

0x898e,	// (0x00063eab) bg_cell_vkbss_key_g1

0x899a,	// (0x00063eb7) cell_vkbss_key_3p_pane_ParamLimits

0x899a,	// (0x00063eb7) cell_vkbss_key_3p_pane

0x89b4,	// (0x00063ed1) cell_vkbss_key_g1_ParamLimits

0x89b4,	// (0x00063ed1) cell_vkbss_key_g1

0x89ce,	// (0x00063eeb) cell_vkbss_key_t1_ParamLimits

0x89ce,	// (0x00063eeb) cell_vkbss_key_t1

0x19f8,	// (0x0005cf15) cell_ituss_key_pane_ParamLimits

0x19f8,	// (0x0005cf15) cell_ituss_key_pane

0x89f9,	// (0x00063f16) bg_cell_ituss_key_g1_ParamLimits

0x89f9,	// (0x00063f16) bg_cell_ituss_key_g1

0x8a05,	// (0x00063f22) cell_ituss_key_pane_g1_ParamLimits

0x8a05,	// (0x00063f22) cell_ituss_key_pane_g1

0x1a09,	// (0x0005cf26) cell_ituss_key_pane_g2_ParamLimits

0x1a09,	// (0x0005cf26) cell_ituss_key_pane_g2

0x0002,

0xfef9,	// (0x0006b416) cell_ituss_key_pane_g_ParamLimits

0xfef9,	// (0x0006b416) cell_ituss_key_pane_g

0x1a35,	// (0x0005cf52) cell_ituss_key_t1_ParamLimits

0x1a35,	// (0x0005cf52) cell_ituss_key_t1

0x1a6f,	// (0x0005cf8c) cell_ituss_key_t2_ParamLimits

0x1a6f,	// (0x0005cf8c) cell_ituss_key_t2

0x1aa0,	// (0x0005cfbd) cell_ituss_key_t3_ParamLimits

0x1aa0,	// (0x0005cfbd) cell_ituss_key_t3

0x1a6f,	// (0x0005cf8c) cell_ituss_key_t4_ParamLimits

0x1a6f,	// (0x0005cf8c) cell_ituss_key_t4

0x0004,

0xff00,	// (0x0006b41d) cell_ituss_key_t_ParamLimits

0xff00,	// (0x0006b41d) cell_ituss_key_t

0x8a2b,	// (0x00063f48) cell_vkbss_key_3p_pane_g1

0x8a33,	// (0x00063f50) cell_vkbss_key_3p_pane_g2

0x8a3b,	// (0x00063f58) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0b,	// (0x0006b428) cell_vkbss_key_3p_pane_g

0xe752,	// (0x00069c6f) bg_popup_fep_char_preview_window_cp02

0x1ae3,	// (0x0005d000) popup_fep_char_pre_window_t1

0xe2da,	// (0x000697f7) main_ai5_sk_pane

0x84ed,	// (0x00063a0a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x84f9,	// (0x00063a16) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x850e,	// (0x00063a2b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x851a,	// (0x00063a37) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfedd,	// (0x0006b3fa) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8526,	// (0x00063a43) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x81e6,	// (0x00063703) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe695,	// (0x00069bb2) main_ai5_sk_pane_g1

0x272b,	// (0x0005dc48) popup_query_code_window_g1

0x8943,	// (0x00063e60) popup_fep_vkb_icf_pane

0x8959,	// (0x00063e76) popup_fep_vtchi_icf_pane

0x8a4c,	// (0x00063f69) bg_icf_pane

0x8a58,	// (0x00063f75) list_vkb_icf_pane

0x8a64,	// (0x00063f81) bg_icf_pane_cp01

0x8a77,	// (0x00063f94) vtchi_icf_list_pane

0x8a88,	// (0x00063fa5) list_vkb_icf_pane_t1_ParamLimits

0x8a88,	// (0x00063fa5) list_vkb_icf_pane_t1

0x8a9e,	// (0x00063fbb) vtchi_icf_list_pane_t1_ParamLimits

0x8a9e,	// (0x00063fbb) vtchi_icf_list_pane_t1

0x892d,	// (0x00063e4a) popup_fep_ituss_window_ParamLimits

0x8959,	// (0x00063e76) popup_fep_vtchi_icf_pane_ParamLimits

0x897f,	// (0x00063e9c) ituss_keypad_pane_ParamLimits

0x19ca,	// (0x0005cee7) ituss_sks_pane

0x8a4c,	// (0x00063f69) bg_icf_pane_ParamLimits

0x8909,	// (0x00063e26) icf_edit_indi_pane_ParamLimits

0x8909,	// (0x00063e26) icf_edit_indi_pane

0x8a58,	// (0x00063f75) list_vkb_icf_pane_ParamLimits

0x8a64,	// (0x00063f81) bg_icf_pane_cp01_ParamLimits

0x8918,	// (0x00063e35) icf_edit_indi_pane_cp01_ParamLimits

0x8918,	// (0x00063e35) icf_edit_indi_pane_cp01

0x8a7f,	// (0x00063f9c) vtchi_query_pane

0x4d2f,	// (0x0006024c) icf_edit_indi_pane_g1_ParamLimits

0x4d2f,	// (0x0006024c) icf_edit_indi_pane_g1

0x8b0d,	// (0x0006402a) icf_edit_indi_pane_g2_ParamLimits

0x8b0d,	// (0x0006402a) icf_edit_indi_pane_g2

0x0001,

0xff23,	// (0x0006b440) icf_edit_indi_pane_g_ParamLimits

0xff23,	// (0x0006b440) icf_edit_indi_pane_g

0x8b1c,	// (0x00064039) icf_edit_indi_pane_t1

0x8ab6,	// (0x00063fd3) bg_input_focus_pane_cp042

0x6527,	// (0x00061a44) vtchi_button_pane

0x8abf,	// (0x00063fdc) vtchi_query_pane_t1

0x8acd,	// (0x00063fea) vtchi_query_pane_t2

0x8adb,	// (0x00063ff8) vtchi_query_pane_t3

0x0002,

0xff12,	// (0x0006b42f) vtchi_query_pane_t

0xe752,	// (0x00069c6f) bg_button_pane_cp13

0x8ae9,	// (0x00064006) vtchi_button_pane_g1

0x1af2,	// (0x0005d00f) ituss_sks_pane_g1

0x1afd,	// (0x0005d01a) ituss_sks_pane_g2

0x0001,

0xff19,	// (0x0006b436) ituss_sks_pane_g

0x8af1,	// (0x0006400e) ituss_sks_pane_t1

0x8aff,	// (0x0006401c) ituss_sks_pane_t2

0x0001,

0xff1e,	// (0x0006b43b) ituss_sks_pane_t

0x4564,	// (0x0005fa81) indicator_nsta_pane_cp_g1

0x456d,	// (0x0005fa8a) indicator_nsta_pane_cp_g2

0x4575,	// (0x0005fa92) indicator_nsta_pane_cp_g3

0x457d,	// (0x0005fa9a) indicator_nsta_pane_cp_g4

0x4585,	// (0x0005faa2) indicator_nsta_pane_cp_g5

0x458d,	// (0x0005faaa) indicator_nsta_pane_cp_g6

0x0005,

0xfabb,	// (0x0006afd8) indicator_nsta_pane_cp_g

0xddfd,	// (0x0006931a) cell_graphic2_pane_t2_ParamLimits

0xddfd,	// (0x0006931a) cell_graphic2_pane_t2

0x0001,

0xfdd4,	// (0x0006b2f1) cell_graphic2_pane_t_ParamLimits

0xfdd4,	// (0x0006b2f1) cell_graphic2_pane_t

0xde33,	// (0x00069350) cell_graphic2_control_pane_t1

0xaaad,	// (0x00065fca) signal_pane_g3_ParamLimits

0xaaad,	// (0x00065fca) signal_pane_g3

0xaac1,	// (0x00065fde) signal_pane_g4_ParamLimits

0xaac1,	// (0x00065fde) signal_pane_g4

0x88f3,	// (0x00063e10) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x88f3,	// (0x00063e10) cell_ai5_widget_list_row_pane_t3

0x8a19,	// (0x00063f36) cell_ituss_key_pane_t1_ParamLimits

0x8a19,	// (0x00063f36) cell_ituss_key_pane_t1

0x23a8,	// (0x0005d8c5) form_field_data_wide_pane_vc_t2_ParamLimits

0x23a8,	// (0x0005d8c5) form_field_data_wide_pane_vc_t2

0x23bc,	// (0x0005d8d9) form_field_data_wide_pane_vc_t3_ParamLimits

0x23bc,	// (0x0005d8d9) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0006ad26) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0006ad26) form_field_data_wide_pane_vc_t

0x4215,	// (0x0005f732) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4215,	// (0x0005f732) form_field_slider_wide_pane_vc_t3

0x42eb,	// (0x0005f808) form_field_popup_wide_pane_vc_t2_ParamLimits

0x42eb,	// (0x0005f808) form_field_popup_wide_pane_vc_t2

0x4302,	// (0x0005f81f) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4302,	// (0x0005f81f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaaa,	// (0x0006afc7) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaaa,	// (0x0006afc7) form_field_popup_wide_pane_vc_t

0xc2c3,	// (0x000677e0) aid_fshwr2_btn_pane_ParamLimits

0xc2d4,	// (0x000677f1) aid_fshwr2_syb_pane_ParamLimits

0xc2e5,	// (0x00067802) aid_fshwr2_txt_pane_ParamLimits

0x1023,	// (0x0005c540) fshwr2_bg_pane_ParamLimits

0xc2f1,	// (0x0006780e) fshwr2_func_candi_pane_ParamLimits

0xc312,	// (0x0006782f) fshwr2_hwr_syb_pane_ParamLimits

0xc32f,	// (0x0006784c) fshwr2_icf_pane_ParamLimits

0x3c38,	// (0x0005f155) list_double_graphic_pane_vc_g4_ParamLimits

0x3c38,	// (0x0005f155) list_double_graphic_pane_vc_g4

0x1a29,	// (0x0005cf46) cell_ituss_key_pane_g3_ParamLimits

0x1a29,	// (0x0005cf46) cell_ituss_key_pane_g3

0x1ad1,	// (0x0005cfee) cell_ituss_key_t5_ParamLimits

0x1ad1,	// (0x0005cfee) cell_ituss_key_t5

0x894e,	// (0x00063e6b) popup_fep_vkbss_window_ParamLimits
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
	0, // AknLayoutScalable_Avkon::Tpopup_fep_vkbss_window_ParamLimits_sig*,
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large

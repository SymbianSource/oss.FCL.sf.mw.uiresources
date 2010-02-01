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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00045d2a };

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
0x88f1,	// (0x0004e61b) Screen

0x88fd,	// (0x0004e627) application_window_ParamLimits

0x88fd,	// (0x0004e627) application_window

0xb28c,	// (0x00050fb6) screen_g1

0x7abd,	// (0x0004d7e7) area_bottom_pane_ParamLimits

0x7abd,	// (0x0004d7e7) area_bottom_pane

0x05f3,	// (0x0004631d) area_top_pane_ParamLimits

0x05f3,	// (0x0004631d) area_top_pane

0x0691,	// (0x000463bb) main_pane_ParamLimits

0x0691,	// (0x000463bb) main_pane

0xb296,	// (0x00050fc0) misc_graphics

0x99a7,	// (0x0004f6d1) battery_pane_ParamLimits

0x99a7,	// (0x0004f6d1) battery_pane

0xd5db,	// (0x00053305) bg_status_flat_pane_g8

0xd5e3,	// (0x0005330d) bg_status_flat_pane_g9

0xcd02,	// (0x00052a2c) context_pane_ParamLimits

0xcd02,	// (0x00052a2c) context_pane

0x9b12,	// (0x0004f83c) navi_pane_ParamLimits

0x9b12,	// (0x0004f83c) navi_pane

0x9b89,	// (0x0004f8b3) signal_pane_ParamLimits

0x9b89,	// (0x0004f8b3) signal_pane

0x0008,

0xf88a,	// (0x000555b4) bg_status_flat_pane_g

0x9c19,	// (0x0004f943) status_pane_g1_ParamLimits

0x9c19,	// (0x0004f943) status_pane_g1

0x9c2f,	// (0x0004f959) status_pane_g2_ParamLimits

0x9c2f,	// (0x0004f959) status_pane_g2

0xcd67,	// (0x00052a91) status_pane_g3_ParamLimits

0xcd67,	// (0x00052a91) status_pane_g3

0x0004,

0xf7bd,	// (0x000554e7) status_pane_g_ParamLimits

0xf7bd,	// (0x000554e7) status_pane_g

0x9c3b,	// (0x0004f965) title_pane_ParamLimits

0x9c3b,	// (0x0004f965) title_pane

0x9c9c,	// (0x0004f9c6) uni_indicator_pane_ParamLimits

0x9c9c,	// (0x0004f9c6) uni_indicator_pane

0xcb3b,	// (0x00052865) bg_list_pane_ParamLimits

0xcb3b,	// (0x00052865) bg_list_pane

0x8bf4,	// (0x0004e91e) find_pane

0x926d,	// (0x0004ef97) listscroll_app_pane_ParamLimits

0x926d,	// (0x0004ef97) listscroll_app_pane

0xcb5b,	// (0x00052885) listscroll_form_pane

0x8bfc,	// (0x0004e926) listscroll_gen_pane_ParamLimits

0x8bfc,	// (0x0004e926) listscroll_gen_pane

0xcb5b,	// (0x00052885) listscroll_set_pane

0xd680,	// (0x000533aa) main_idle_act_pane

0xc929,	// (0x00052653) main_idle_trad_pane

0xc929,	// (0x00052653) main_list_empty_pane

0xc039,	// (0x00051d63) main_midp_pane

0xcb75,	// (0x0005289f) main_pane_g1_ParamLimits

0xcb75,	// (0x0005289f) main_pane_g1

0x9279,	// (0x0004efa3) popup_ai_message_window_ParamLimits

0x9279,	// (0x0004efa3) popup_ai_message_window

0x9332,	// (0x0004f05c) popup_fep_china_uni_window_ParamLimits

0x9332,	// (0x0004f05c) popup_fep_china_uni_window

0xcba7,	// (0x000528d1) popup_fep_japan_candidate_window_ParamLimits

0xcba7,	// (0x000528d1) popup_fep_japan_candidate_window

0xcbc5,	// (0x000528ef) popup_fep_japan_predictive_window_ParamLimits

0xcbc5,	// (0x000528ef) popup_fep_japan_predictive_window

0x938c,	// (0x0004f0b6) popup_find_window

0x93a9,	// (0x0004f0d3) popup_grid_graphic_window_ParamLimits

0x93a9,	// (0x0004f0d3) popup_grid_graphic_window

0xcbf5,	// (0x0005291f) popup_large_graphic_colour_window

0x943b,	// (0x0004f165) popup_menu_window_ParamLimits

0x943b,	// (0x0004f165) popup_menu_window

0x9607,	// (0x0004f331) popup_note_image_window

0x95cd,	// (0x0004f2f7) popup_note_wait_window_ParamLimits

0x95cd,	// (0x0004f2f7) popup_note_wait_window

0x961f,	// (0x0004f349) popup_note_window_ParamLimits

0x961f,	// (0x0004f349) popup_note_window

0x96c5,	// (0x0004f3ef) popup_query_code_window_ParamLimits

0x96c5,	// (0x0004f3ef) popup_query_code_window

0xcc1b,	// (0x00052945) popup_query_data_code_window_ParamLimits

0xcc1b,	// (0x00052945) popup_query_data_code_window

0x96ff,	// (0x0004f429) popup_query_data_window_ParamLimits

0x96ff,	// (0x0004f429) popup_query_data_window

0x9775,	// (0x0004f49f) popup_query_sat_info_window_ParamLimits

0x9775,	// (0x0004f49f) popup_query_sat_info_window

0x980c,	// (0x0004f536) popup_snote_single_graphic_window_ParamLimits

0x980c,	// (0x0004f536) popup_snote_single_graphic_window

0x980c,	// (0x0004f536) popup_snote_single_text_window_ParamLimits

0x980c,	// (0x0004f536) popup_snote_single_text_window

0xcc32,	// (0x0005295c) popup_sub_window_general

0xcc78,	// (0x000529a2) popup_window_general_ParamLimits

0xcc78,	// (0x000529a2) popup_window_general

0xcc8d,	// (0x000529b7) power_save_pane

0x815c,	// (0x0004de86) control_pane_g1_ParamLimits

0x815c,	// (0x0004de86) control_pane_g1

0x8185,	// (0x0004deaf) control_pane_g2_ParamLimits

0x8185,	// (0x0004deaf) control_pane_g2

0xcb1d,	// (0x00052847) control_pane_g3_ParamLimits

0xcb1d,	// (0x00052847) control_pane_g3

0x0007,

0xf7a5,	// (0x000554cf) control_pane_g_ParamLimits

0xf7a5,	// (0x000554cf) control_pane_g

0x81c0,	// (0x0004deea) control_pane_t1_ParamLimits

0x81c0,	// (0x0004deea) control_pane_t1

0x821e,	// (0x0004df48) control_pane_t2_ParamLimits

0x821e,	// (0x0004df48) control_pane_t2

0x0002,

0xf7b6,	// (0x000554e0) control_pane_t_ParamLimits

0xf7b6,	// (0x000554e0) control_pane_t

0xca3e,	// (0x00052768) navi_navi_volume_pane_cp1

0xca47,	// (0x00052771) status_small_icon_pane

0xca4f,	// (0x00052779) status_small_pane_g1_ParamLimits

0xca4f,	// (0x00052779) status_small_pane_g1

0xca83,	// (0x000527ad) status_small_pane_g2_ParamLimits

0xca83,	// (0x000527ad) status_small_pane_g2

0xca8f,	// (0x000527b9) status_small_pane_g3_ParamLimits

0xca8f,	// (0x000527b9) status_small_pane_g3

0xca9b,	// (0x000527c5) status_small_pane_g4_ParamLimits

0xca9b,	// (0x000527c5) status_small_pane_g4

0xcaa7,	// (0x000527d1) status_small_pane_g5_ParamLimits

0xcaa7,	// (0x000527d1) status_small_pane_g5

0xcab6,	// (0x000527e0) status_small_pane_g6_ParamLimits

0xcab6,	// (0x000527e0) status_small_pane_g6

0x0007,

0xf794,	// (0x000554be) status_small_pane_g_ParamLimits

0xf794,	// (0x000554be) status_small_pane_g

0xcae6,	// (0x00052810) status_small_pane_t1

0xcb09,	// (0x00052833) status_small_wait_pane_ParamLimits

0xcb09,	// (0x00052833) status_small_wait_pane

0x90dd,	// (0x0004ee07) aid_levels_signal_ParamLimits

0x90dd,	// (0x0004ee07) aid_levels_signal

0x90f5,	// (0x0004ee1f) signal_pane_g1_ParamLimits

0x90f5,	// (0x0004ee1f) signal_pane_g1

0x9110,	// (0x0004ee3a) signal_pane_g2_ParamLimits

0x9110,	// (0x0004ee3a) signal_pane_g2

0x0001,

0xf729,	// (0x00055453) signal_pane_g_ParamLimits

0xf729,	// (0x00055453) signal_pane_g

0xc46d,	// (0x00052197) context_pane_g1

0x890d,	// (0x0004e637) title_pane_g1

0x8942,	// (0x0004e66c) title_pane_t1

0xb2ac,	// (0x00050fd6) title_pane_t2

0xb2d2,	// (0x00050ffc) title_pane_t3

0x0002,

0xf573,	// (0x0005529d) title_pane_t

0x9cc4,	// (0x0004f9ee) aid_levels_battery_ParamLimits

0x9cc4,	// (0x0004f9ee) aid_levels_battery

0x9ce0,	// (0x0004fa0a) battery_pane_g1_ParamLimits

0x9ce0,	// (0x0004fa0a) battery_pane_g1

0x9cfd,	// (0x0004fa27) battery_pane_g2_ParamLimits

0x9cfd,	// (0x0004fa27) battery_pane_g2

0x0001,

0xf7c8,	// (0x000554f2) battery_pane_g_ParamLimits

0xf7c8,	// (0x000554f2) battery_pane_g

0x9f42,	// (0x0004fc6c) uni_indicator_pane_g1

0x9f57,	// (0x0004fc81) uni_indicator_pane_g2

0x9f6c,	// (0x0004fc96) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x0005565c) uni_indicator_pane_g

0xc799,	// (0x000524c3) navi_icon_pane_ParamLimits

0xc799,	// (0x000524c3) navi_icon_pane

0xc6e0,	// (0x0005240a) navi_midp_pane

0xc7b5,	// (0x000524df) navi_navi_pane

0xc7bf,	// (0x000524e9) navi_text_pane_ParamLimits

0xc7bf,	// (0x000524e9) navi_text_pane

0xb28c,	// (0x00050fb6) status_small_wait_pane_g1

0xb915,	// (0x0005163f) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x00055657) status_small_wait_pane_g

0x9ee1,	// (0x0004fc0b) navi_navi_icon_text_pane

0x9ee9,	// (0x0004fc13) navi_navi_pane_g1_ParamLimits

0x9ee9,	// (0x0004fc13) navi_navi_pane_g1

0x9efb,	// (0x0004fc25) navi_navi_pane_g2_ParamLimits

0x9efb,	// (0x0004fc25) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x00055625) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x00055625) navi_navi_pane_g

0xdb7c,	// (0x000538a6) navi_navi_tabs_pane

0x9f0d,	// (0x0004fc37) navi_navi_text_pane

0x9ee1,	// (0x0004fc0b) navi_navi_volume_pane

0x9ecf,	// (0x0004fbf9) navi_text_pane_t1

0x9ec3,	// (0x0004fbed) navi_icon_pane_g1

0xdabd,	// (0x000537e7) navi_navi_text_pane_t1

0x846b,	// (0x0004e195) navi_navi_volume_pane_g1

0x8473,	// (0x0004e19d) volume_small_pane

0x9e1f,	// (0x0004fb49) navi_navi_icon_text_pane_g1

0x9e27,	// (0x0004fb51) navi_navi_icon_text_pane_t1

0xc7b5,	// (0x000524df) navi_tabs_2_long_pane

0xc7b5,	// (0x000524df) navi_tabs_2_pane

0xc7b5,	// (0x000524df) navi_tabs_3_long_pane

0xc7b5,	// (0x000524df) navi_tabs_3_pane

0xc7b5,	// (0x000524df) navi_tabs_4_pane

0x844b,	// (0x0004e175) tabs_2_active_pane_ParamLimits

0x844b,	// (0x0004e175) tabs_2_active_pane

0x845b,	// (0x0004e185) tabs_2_passive_pane_ParamLimits

0x845b,	// (0x0004e185) tabs_2_passive_pane

0x8419,	// (0x0004e143) tabs_3_active_pane_ParamLimits

0x8419,	// (0x0004e143) tabs_3_active_pane

0x8429,	// (0x0004e153) tabs_3_passive_pane_ParamLimits

0x8429,	// (0x0004e153) tabs_3_passive_pane

0x843a,	// (0x0004e164) tabs_3_passive_pane_cp_ParamLimits

0x843a,	// (0x0004e164) tabs_3_passive_pane_cp

0x83d5,	// (0x0004e0ff) tabs_4_active_pane_ParamLimits

0x83d5,	// (0x0004e0ff) tabs_4_active_pane

0x83e6,	// (0x0004e110) tabs_4_passive_pane_ParamLimits

0x83e6,	// (0x0004e110) tabs_4_passive_pane

0x83f7,	// (0x0004e121) tabs_4_passive_pane_cp_ParamLimits

0x83f7,	// (0x0004e121) tabs_4_passive_pane_cp

0x8408,	// (0x0004e132) tabs_4_passive_pane_cp2_ParamLimits

0x8408,	// (0x0004e132) tabs_4_passive_pane_cp2

0x83b5,	// (0x0004e0df) tabs_2_long_active_pane_ParamLimits

0x83b5,	// (0x0004e0df) tabs_2_long_active_pane

0x83c5,	// (0x0004e0ef) tabs_2_long_passive_pane_ParamLimits

0x83c5,	// (0x0004e0ef) tabs_2_long_passive_pane

0x8380,	// (0x0004e0aa) tabs_3_long_active_pane_ParamLimits

0x8380,	// (0x0004e0aa) tabs_3_long_active_pane

0x8391,	// (0x0004e0bb) tabs_3_long_passive_pane_ParamLimits

0x8391,	// (0x0004e0bb) tabs_3_long_passive_pane

0x83a4,	// (0x0004e0ce) tabs_3_long_passive_pane_cp_ParamLimits

0x83a4,	// (0x0004e0ce) tabs_3_long_passive_pane_cp

0x15dc,	// (0x00047306) volume_small_pane_g1

0x832f,	// (0x0004e059) volume_small_pane_g2

0x8338,	// (0x0004e062) volume_small_pane_g3

0x8341,	// (0x0004e06b) volume_small_pane_g4

0x834a,	// (0x0004e074) volume_small_pane_g5

0x8353,	// (0x0004e07d) volume_small_pane_g6

0x835c,	// (0x0004e086) volume_small_pane_g7

0x8365,	// (0x0004e08f) volume_small_pane_g8

0x836e,	// (0x0004e098) volume_small_pane_g9

0x8377,	// (0x0004e0a1) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x000555f1) volume_small_pane_g

0xb2e4,	// (0x0005100e) bg_active_tab_pane_cp2_ParamLimits

0xb2e4,	// (0x0005100e) bg_active_tab_pane_cp2

0x89ce,	// (0x0004e6f8) tabs_3_active_pane_g1

0x89d6,	// (0x0004e700) tabs_3_active_pane_t1

0xb2e4,	// (0x0005100e) bg_passive_tab_pane_cp2_ParamLimits

0xb2e4,	// (0x0005100e) bg_passive_tab_pane_cp2

0x89ce,	// (0x0004e6f8) tabs_3_passive_pane_g1

0x89d6,	// (0x0004e700) tabs_3_passive_pane_t1

0xb2e4,	// (0x0005100e) bg_active_tab_pane_cp3_ParamLimits

0xb2e4,	// (0x0005100e) bg_active_tab_pane_cp3

0x89e8,	// (0x0004e712) tabs_4_active_pane_g1

0x89f0,	// (0x0004e71a) tabs_4_active_pane_t1

0xb2e4,	// (0x0005100e) bg_passive_tab_pane_cp3_ParamLimits

0xb2e4,	// (0x0005100e) bg_passive_tab_pane_cp3

0x89e8,	// (0x0004e712) tabs_4_1_passive_pane_g1

0x89f0,	// (0x0004e71a) tabs_4_1_passive_pane_t1

0xc039,	// (0x00051d63) list_highlight_pane_cp2

0x9ff9,	// (0x0004fd23) list_set_pane_ParamLimits

0x9ff9,	// (0x0004fd23) list_set_pane

0xa093,	// (0x0004fdbd) main_pane_set_t1_ParamLimits

0xa093,	// (0x0004fdbd) main_pane_set_t1

0xa0b3,	// (0x0004fddd) main_pane_set_t2_ParamLimits

0xa0b3,	// (0x0004fddd) main_pane_set_t2

0xa0c7,	// (0x0004fdf1) main_pane_set_t3_ParamLimits

0xa0c7,	// (0x0004fdf1) main_pane_set_t3

0xa0d9,	// (0x0004fe03) main_pane_set_t4_ParamLimits

0xa0d9,	// (0x0004fe03) main_pane_set_t4

0x0003,

0xf997,	// (0x000556c1) main_pane_set_t_ParamLimits

0xf997,	// (0x000556c1) main_pane_set_t

0xa0eb,	// (0x0004fe15) setting_code_pane

0xa0f3,	// (0x0004fe1d) setting_slider_graphic_pane

0xa0f3,	// (0x0004fe1d) setting_slider_pane

0xa0f3,	// (0x0004fe1d) setting_text_pane

0xa0f3,	// (0x0004fe1d) setting_volume_pane

0x08c2,	// (0x000465ec) volume_set_pane

0xb2f2,	// (0x0005101c) bg_set_opt_pane_cp

0x08ca,	// (0x000465f4) setting_slider_pane_t1

0x08e3,	// (0x0004660d) setting_slider_pane_t2

0x08fc,	// (0x00046626) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x000552a4) setting_slider_pane_t

0x0913,	// (0x0004663d) slider_set_pane

0xb296,	// (0x00050fc0) bg_set_opt_pane_cp2

0xb300,	// (0x0005102a) setting_slider_graphic_pane_g1

0x0929,	// (0x00046653) setting_slider_graphic_pane_t1

0x0938,	// (0x00046662) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x000552ab) setting_slider_graphic_pane_t

0x0947,	// (0x00046671) slider_set_pane_cp

0xb296,	// (0x00050fc0) input_focus_pane_cp1

0xdfc5,	// (0x00053cef) list_set_text_pane

0xb28c,	// (0x00050fb6) setting_text_pane_g1

0xb296,	// (0x00050fc0) input_focus_pane_cp2

0xb28c,	// (0x00050fb6) setting_code_pane_g1

0xb309,	// (0x00051033) setting_code_pane_t1

0x094f,	// (0x00046679) set_text_pane_t1_ParamLimits

0x094f,	// (0x00046679) set_text_pane_t1

0xbf49,	// (0x00051c73) set_opt_bg_pane_g1

0xbf51,	// (0x00051c7b) set_opt_bg_pane_g2

0xdfa5,	// (0x00053ccf) set_opt_bg_pane_g3

0xbf61,	// (0x00051c8b) set_opt_bg_pane_g4

0xbf69,	// (0x00051c93) set_opt_bg_pane_g5

0xbf71,	// (0x00051c9b) set_opt_bg_pane_g6

0xdfad,	// (0x00053cd7) set_opt_bg_pane_g7

0xdfb5,	// (0x00053cdf) set_opt_bg_pane_g8

0xdfbd,	// (0x00053ce7) set_opt_bg_pane_g9

0x0008,

0xf984,	// (0x000556ae) set_opt_bg_pane_g

0xdf98,	// (0x00053cc2) slider_set_pane_g1

0x17aa,	// (0x000474d4) slider_set_pane_g2

0x0006,

0xf975,	// (0x0005569f) slider_set_pane_g

0x1746,	// (0x00047470) volume_set_pane_g1

0x174e,	// (0x00047478) volume_set_pane_g2

0x1756,	// (0x00047480) volume_set_pane_g3

0x175e,	// (0x00047488) volume_set_pane_g4

0x1766,	// (0x00047490) volume_set_pane_g5

0x176e,	// (0x00047498) volume_set_pane_g6

0x1776,	// (0x000474a0) volume_set_pane_g7

0x177e,	// (0x000474a8) volume_set_pane_g8

0x1786,	// (0x000474b0) volume_set_pane_g9

0x178e,	// (0x000474b8) volume_set_pane_g10

0x0009,

0xf94d,	// (0x00055677) volume_set_pane_g

0x8a02,	// (0x0004e72c) indicator_pane_ParamLimits

0x8a02,	// (0x0004e72c) indicator_pane

0x8a2a,	// (0x0004e754) main_idle_pane_g2_ParamLimits

0x8a2a,	// (0x0004e754) main_idle_pane_g2

0x8a62,	// (0x0004e78c) main_pane_idle_g1_ParamLimits

0x8a62,	// (0x0004e78c) main_pane_idle_g1

0xb317,	// (0x00051041) popup_clock_digital_analogue_window_ParamLimits

0xb317,	// (0x00051041) popup_clock_digital_analogue_window

0x8a89,	// (0x0004e7b3) soft_indicator_pane_ParamLimits

0x8a89,	// (0x0004e7b3) soft_indicator_pane

0x8aa3,	// (0x0004e7cd) wallpaper_pane_ParamLimits

0x8aa3,	// (0x0004e7cd) wallpaper_pane

0xb28c,	// (0x00050fb6) wallpaper_pane_g1

0x8ab5,	// (0x0004e7df) indicator_pane_g1_ParamLimits

0x8ab5,	// (0x0004e7df) indicator_pane_g1

0xe118,	// (0x00053e42) navi_navi_icon_text_pane_srt_g1

0xb345,	// (0x0005106f) soft_indicator_pane_t1

0xb35f,	// (0x00051089) aid_ps_area_pane

0x8ace,	// (0x0004e7f8) aid_ps_clock_pane

0xb370,	// (0x0005109a) aid_ps_indicator_pane

0xb37c,	// (0x000510a6) indicator_ps_pane_ParamLimits

0xb37c,	// (0x000510a6) indicator_ps_pane

0xb38b,	// (0x000510b5) power_save_pane_g1_ParamLimits

0xb38b,	// (0x000510b5) power_save_pane_g1

0xb397,	// (0x000510c1) power_save_pane_g2_ParamLimits

0xb397,	// (0x000510c1) power_save_pane_g2

0x04e7,	// (0x00046211) aid_navinavi_width_pane

0xb35f,	// (0x00051089) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x000552b0) power_save_pane_g_ParamLimits

0xf586,	// (0x000552b0) power_save_pane_g

0xb3a5,	// (0x000510cf) power_save_pane_t1_ParamLimits

0xb3a5,	// (0x000510cf) power_save_pane_t1

0x8ace,	// (0x0004e7f8) aid_ps_clock_pane_ParamLimits

0xb370,	// (0x0005109a) aid_ps_indicator_pane_ParamLimits

0xb3b7,	// (0x000510e1) power_save_pane_t4_ParamLimits

0xb3b7,	// (0x000510e1) power_save_pane_t4

0x0001,

0xf58b,	// (0x000552b5) power_save_pane_t_ParamLimits

0xf58b,	// (0x000552b5) power_save_pane_t

0xb3e1,	// (0x0005110b) power_save_t3_ParamLimits

0xb3e1,	// (0x0005110b) power_save_t3

0xb3cc,	// (0x000510f6) power_save_t2_ParamLimits

0xb3cc,	// (0x000510f6) power_save_t2

0xb3f6,	// (0x00051120) indicator_ps_pane_g1

0x8adc,	// (0x0004e806) ai_gene_pane_ParamLimits

0x8adc,	// (0x0004e806) ai_gene_pane

0x8af3,	// (0x0004e81d) ai_links_pane_ParamLimits

0x8af3,	// (0x0004e81d) ai_links_pane

0x8e17,	// (0x0004eb41) indicator_pane_cp1_ParamLimits

0x8e17,	// (0x0004eb41) indicator_pane_cp1

0x8e26,	// (0x0004eb50) main_pane_idle_g1_cp_ParamLimits

0x8e26,	// (0x0004eb50) main_pane_idle_g1_cp

0xb3ff,	// (0x00051129) popup_ai_links_title_window

0x8e3e,	// (0x0004eb68) soft_indicator_pane_cp1_ParamLimits

0x8e3e,	// (0x0004eb68) soft_indicator_pane_cp1

0xddec,	// (0x00053b16) ai_links_pane_g1

0xddf5,	// (0x00053b1f) grid_ai_links_pane

0x9f39,	// (0x0004fc63) ai_gene_pane_1

0xddda,	// (0x00053b04) ai_gene_pane_2

0xdde3,	// (0x00053b0d) list_highlight_pane_cp4

0x9f15,	// (0x0004fc3f) cell_ai_link_pane_ParamLimits

0x9f15,	// (0x0004fc3f) cell_ai_link_pane

0xddd2,	// (0x00053afc) cell_ai_link_pane_g1

0xb915,	// (0x0005163f) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x00055652) cell_ai_link_pane_g

0xb296,	// (0x00050fc0) grid_highlight_cp2

0xb296,	// (0x00050fc0) bg_popup_sub_pane_cp1

0xb416,	// (0x00051140) popup_ai_links_title_window_t1

0xdd20,	// (0x00053a4a) ai_gene_pane_1_g1_ParamLimits

0xdd20,	// (0x00053a4a) ai_gene_pane_1_g1

0xdd2c,	// (0x00053a56) ai_gene_pane_1_g2_ParamLimits

0xdd2c,	// (0x00053a56) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x00055648) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x00055648) ai_gene_pane_1_g

0xdd39,	// (0x00053a63) ai_gene_pane_1_t1_ParamLimits

0xdd39,	// (0x00053a63) ai_gene_pane_1_t1

0xdd6d,	// (0x00053a97) grid_ai_soft_ind_pane

0xdd0b,	// (0x00053a35) ai_gene_pane_2_t1_ParamLimits

0xdd0b,	// (0x00053a35) ai_gene_pane_2_t1

0x8e52,	// (0x0004eb7c) main_pane_empty_t1_ParamLimits

0x8e52,	// (0x0004eb7c) main_pane_empty_t1

0x8e6a,	// (0x0004eb94) main_pane_empty_t2_ParamLimits

0x8e6a,	// (0x0004eb94) main_pane_empty_t2

0x8e7f,	// (0x0004eba9) main_pane_empty_t3_ParamLimits

0x8e7f,	// (0x0004eba9) main_pane_empty_t3

0x8e91,	// (0x0004ebbb) main_pane_empty_t4_ParamLimits

0x8e91,	// (0x0004ebbb) main_pane_empty_t4

0x8ea3,	// (0x0004ebcd) main_pane_empty_t5_ParamLimits

0x8ea3,	// (0x0004ebcd) main_pane_empty_t5

0x0004,

0xf590,	// (0x000552ba) main_pane_empty_t_ParamLimits

0xf590,	// (0x000552ba) main_pane_empty_t

0xbf9a,	// (0x00051cc4) bg_popup_window_pane_ParamLimits

0xbf9a,	// (0x00051cc4) bg_popup_window_pane

0xdacb,	// (0x000537f5) find_popup_pane_cp2_ParamLimits

0xdacb,	// (0x000537f5) find_popup_pane_cp2

0xdad7,	// (0x00053801) heading_pane_ParamLimits

0xdad7,	// (0x00053801) heading_pane

0xb296,	// (0x00050fc0) bg_popup_sub_pane

0x9e44,	// (0x0004fb6e) bg_popup_window_pane_g1_ParamLimits

0x9e44,	// (0x0004fb6e) bg_popup_window_pane_g1

0x9e53,	// (0x0004fb7d) bg_popup_window_pane_g2_ParamLimits

0x9e53,	// (0x0004fb7d) bg_popup_window_pane_g2

0x9e5f,	// (0x0004fb89) bg_popup_window_pane_g3_ParamLimits

0x9e5f,	// (0x0004fb89) bg_popup_window_pane_g3

0x9e6b,	// (0x0004fb95) bg_popup_window_pane_g4_ParamLimits

0x9e6b,	// (0x0004fb95) bg_popup_window_pane_g4

0x9e7a,	// (0x0004fba4) bg_popup_window_pane_g5_ParamLimits

0x9e7a,	// (0x0004fba4) bg_popup_window_pane_g5

0x9e8a,	// (0x0004fbb4) bg_popup_window_pane_g6_ParamLimits

0x9e8a,	// (0x0004fbb4) bg_popup_window_pane_g6

0x9e96,	// (0x0004fbc0) bg_popup_window_pane_g7_ParamLimits

0x9e96,	// (0x0004fbc0) bg_popup_window_pane_g7

0x9ea5,	// (0x0004fbcf) bg_popup_window_pane_g8_ParamLimits

0x9ea5,	// (0x0004fbcf) bg_popup_window_pane_g8

0x9eb4,	// (0x0004fbde) bg_popup_window_pane_g9_ParamLimits

0x9eb4,	// (0x0004fbde) bg_popup_window_pane_g9

0xdab1,	// (0x000537db) bg_popup_window_pane_g10_ParamLimits

0xdab1,	// (0x000537db) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x00055610) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x00055610) bg_popup_window_pane_g

0xda68,	// (0x00053792) bg_popup_heading_pane_ParamLimits

0xda68,	// (0x00053792) bg_popup_heading_pane

0x1832,	// (0x0004755c) tabs_4_passive_pane_cp_srt_ParamLimits

0x1832,	// (0x0004755c) tabs_4_passive_pane_cp_srt

0x1844,	// (0x0004756e) tabs_4_passive_pane_srt_ParamLimits

0xda7c,	// (0x000537a6) heading_pane_g2

0x1844,	// (0x0004756e) tabs_4_passive_pane_srt

0xcf4b,	// (0x00052c75) bg_passive_tab_pane_cp3_srt_ParamLimits

0xcf4b,	// (0x00052c75) bg_passive_tab_pane_cp3_srt

0xda84,	// (0x000537ae) heading_pane_t1_ParamLimits

0xda84,	// (0x000537ae) heading_pane_t1

0xda9b,	// (0x000537c5) heading_pane_t2_ParamLimits

0xda9b,	// (0x000537c5) heading_pane_t2

0x0001,

0xf8e1,	// (0x0005560b) heading_pane_t_ParamLimits

0xf8e1,	// (0x0005560b) heading_pane_t

0xd5a3,	// (0x000532cd) bg_popup_heading_pane_g1

0xd634,	// (0x0005335e) bg_popup_heading_pane_g2

0xd63e,	// (0x00053368) bg_popup_heading_pane_g3

0xd648,	// (0x00053372) bg_popup_heading_pane_g4

0xd652,	// (0x0005337c) bg_popup_heading_pane_g5

0xd65c,	// (0x00053386) bg_popup_heading_pane_g6

0xd664,	// (0x0005338e) bg_popup_heading_pane_g7

0xd66c,	// (0x00053396) bg_popup_heading_pane_g8

0xd676,	// (0x000533a0) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x000555c7) bg_popup_heading_pane_g

0xce5b,	// (0x00052b85) bg_popup_sub_pane_g1

0xce6b,	// (0x00052b95) bg_popup_sub_pane_g2

0xce63,	// (0x00052b8d) bg_popup_sub_pane_g3

0xce7b,	// (0x00052ba5) bg_popup_sub_pane_g4

0xce73,	// (0x00052b9d) bg_popup_sub_pane_g5

0xce83,	// (0x00052bad) bg_popup_sub_pane_g6

0xce8b,	// (0x00052bb5) bg_popup_sub_pane_g7

0xce9b,	// (0x00052bc5) bg_popup_sub_pane_g8

0xce93,	// (0x00052bbd) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x000555a1) bg_popup_sub_pane_g

0xb2e4,	// (0x0005100e) bg_popup_window_pane_cp5_ParamLimits

0xb2e4,	// (0x0005100e) bg_popup_window_pane_cp5

0xb79b,	// (0x000514c5) popup_note_window_g1_ParamLimits

0xb79b,	// (0x000514c5) popup_note_window_g1

0xb7a7,	// (0x000514d1) popup_note_window_t1_ParamLimits

0xb7a7,	// (0x000514d1) popup_note_window_t1

0xb7b9,	// (0x000514e3) popup_note_window_t2_ParamLimits

0xb7b9,	// (0x000514e3) popup_note_window_t2

0xb7cb,	// (0x000514f5) popup_note_window_t3_ParamLimits

0xb7cb,	// (0x000514f5) popup_note_window_t3

0xb7dd,	// (0x00051507) popup_note_window_t4_ParamLimits

0xb7dd,	// (0x00051507) popup_note_window_t4

0xb805,	// (0x0005152f) popup_note_window_t5_ParamLimits

0xb805,	// (0x0005152f) popup_note_window_t5

0x0004,

0xf59b,	// (0x000552c5) popup_note_window_t_ParamLimits

0xf59b,	// (0x000552c5) popup_note_window_t

0xb829,	// (0x00051553) bg_popup_window_pane_cp6_ParamLimits

0xb829,	// (0x00051553) bg_popup_window_pane_cp6

0xd517,	// (0x00053241) popup_note_image_window_g1_ParamLimits

0xd517,	// (0x00053241) popup_note_image_window_g1

0xd523,	// (0x0005324d) popup_note_image_window_g2_ParamLimits

0xd523,	// (0x0005324d) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x00055595) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x00055595) popup_note_image_window_g

0xd53c,	// (0x00053266) popup_note_image_window_t1_ParamLimits

0xd53c,	// (0x00053266) popup_note_image_window_t1

0xd555,	// (0x0005327f) popup_note_image_window_t2_ParamLimits

0xd555,	// (0x0005327f) popup_note_image_window_t2

0xd56e,	// (0x00053298) popup_note_image_window_t3_ParamLimits

0xd56e,	// (0x00053298) popup_note_image_window_t3

0x0002,

0xf870,	// (0x0005559a) popup_note_image_window_t_ParamLimits

0xf870,	// (0x0005559a) popup_note_image_window_t

0xd3f4,	// (0x0005311e) bg_popup_window_pane_cp7_ParamLimits

0xd3f4,	// (0x0005311e) bg_popup_window_pane_cp7

0xd424,	// (0x0005314e) popup_note_wait_window_g1_ParamLimits

0xd424,	// (0x0005314e) popup_note_wait_window_g1

0xd430,	// (0x0005315a) popup_note_wait_window_g2_ParamLimits

0xd430,	// (0x0005315a) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x00055583) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x00055583) popup_note_wait_window_g

0xd448,	// (0x00053172) popup_note_wait_window_t1_ParamLimits

0xd448,	// (0x00053172) popup_note_wait_window_t1

0xd46f,	// (0x00053199) popup_note_wait_window_t2_ParamLimits

0xd46f,	// (0x00053199) popup_note_wait_window_t2

0xd48c,	// (0x000531b6) popup_note_wait_window_t3_ParamLimits

0xd48c,	// (0x000531b6) popup_note_wait_window_t3

0xd49f,	// (0x000531c9) popup_note_wait_window_t4_ParamLimits

0xd49f,	// (0x000531c9) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x0005558a) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x0005558a) popup_note_wait_window_t

0xd4c4,	// (0x000531ee) wait_bar_pane_ParamLimits

0xd4c4,	// (0x000531ee) wait_bar_pane

0xb296,	// (0x00050fc0) wait_anim_pane

0xb296,	// (0x00050fc0) wait_border_pane

0xb28c,	// (0x00050fb6) wait_anim_pane_g1

0xb28c,	// (0x00050fb6) wait_anim_pane_g2

0x0001,

0xf724,	// (0x0005544e) wait_anim_pane_g

0xd398,	// (0x000530c2) wait_border_pane_g1

0xd3a3,	// (0x000530cd) wait_border_pane_g2

0xd3ac,	// (0x000530d6) wait_border_pane_g3

0x0002,

0xf852,	// (0x0005557c) wait_border_pane_g

0xd208,	// (0x00052f32) bg_popup_window_pane_cp16_ParamLimits

0xd208,	// (0x00052f32) bg_popup_window_pane_cp16

0xd308,	// (0x00053032) indicator_popup_pane_cp4_ParamLimits

0xd308,	// (0x00053032) indicator_popup_pane_cp4

0xd31c,	// (0x00053046) popup_query_data_window_t1_ParamLimits

0xd31c,	// (0x00053046) popup_query_data_window_t1

0xd32e,	// (0x00053058) popup_query_data_window_t2_ParamLimits

0xd32e,	// (0x00053058) popup_query_data_window_t2

0xd347,	// (0x00053071) popup_query_data_window_t3_ParamLimits

0xd347,	// (0x00053071) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x00055575) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x00055575) popup_query_data_window_t

0xd361,	// (0x0005308b) query_popup_data_pane_ParamLimits

0xd361,	// (0x0005308b) query_popup_data_pane

0xd375,	// (0x0005309f) query_popup_data_pane_cp1_ParamLimits

0xd375,	// (0x0005309f) query_popup_data_pane_cp1

0xd208,	// (0x00052f32) bg_popup_window_pane_cp10_ParamLimits

0xd208,	// (0x00052f32) bg_popup_window_pane_cp10

0xd23a,	// (0x00052f64) indicator_popup_pane_ParamLimits

0xd23a,	// (0x00052f64) indicator_popup_pane

0xd25c,	// (0x00052f86) popup_query_code_window_t1_ParamLimits

0xd25c,	// (0x00052f86) popup_query_code_window_t1

0xd276,	// (0x00052fa0) popup_query_code_window_t2_ParamLimits

0xd276,	// (0x00052fa0) popup_query_code_window_t2

0xd2bf,	// (0x00052fe9) popup_query_code_window_t3_ParamLimits

0xd2bf,	// (0x00052fe9) popup_query_code_window_t3

0x0002,

0xf844,	// (0x0005556e) popup_query_code_window_t_ParamLimits

0xf844,	// (0x0005556e) popup_query_code_window_t

0xd2ee,	// (0x00053018) query_popup_pane_ParamLimits

0xd2ee,	// (0x00053018) query_popup_pane

0xb829,	// (0x00051553) bg_popup_window_pane_cp15_ParamLimits

0xb829,	// (0x00051553) bg_popup_window_pane_cp15

0xb847,	// (0x00051571) indicator_popup_pane_cp1_ParamLimits

0xb847,	// (0x00051571) indicator_popup_pane_cp1

0xb85a,	// (0x00051584) indicator_popup_pane_cp2_ParamLimits

0xb85a,	// (0x00051584) indicator_popup_pane_cp2

0xb86d,	// (0x00051597) popup_query_data_code_window_g1_ParamLimits

0xb86d,	// (0x00051597) popup_query_data_code_window_g1

0xb880,	// (0x000515aa) popup_query_data_code_window_t1_ParamLimits

0xb880,	// (0x000515aa) popup_query_data_code_window_t1

0xb892,	// (0x000515bc) popup_query_data_code_window_t2_ParamLimits

0xb892,	// (0x000515bc) popup_query_data_code_window_t2

0xb8a4,	// (0x000515ce) popup_query_data_code_window_t3_ParamLimits

0xb8a4,	// (0x000515ce) popup_query_data_code_window_t3

0xb8ba,	// (0x000515e4) popup_query_data_code_window_t4_ParamLimits

0xb8ba,	// (0x000515e4) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x000552d0) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x000552d0) popup_query_data_code_window_t

0x14ef,	// (0x00047219) list_single_midp_graphic_pane_g3

0xb8d2,	// (0x000515fc) query_popup_data_pane_cp2_ParamLimits

0xb8e5,	// (0x0005160f) query_popup_pane_cp2_ParamLimits

0xb8e5,	// (0x0005160f) query_popup_pane_cp2

0xb296,	// (0x00050fc0) bg_popup_window_pane_cp11

0xd200,	// (0x00052f2a) heading_pane_cp5

0xb973,	// (0x0005169d) listscroll_popup_info_pane

0xb296,	// (0x00050fc0) input_focus_pane_cp3

0xb8f8,	// (0x00051622) query_popup_pane_t1

0xb906,	// (0x00051630) list_popup_info_pane_ParamLimits

0xb906,	// (0x00051630) list_popup_info_pane

0xb915,	// (0x0005163f) listscroll_popup_info_pane_g1

0xb91d,	// (0x00051647) scroll_pane_cp7

0xb927,	// (0x00051651) popup_info_list_pane_t1_ParamLimits

0xb927,	// (0x00051651) popup_info_list_pane_t1

0xb941,	// (0x0005166b) popup_info_list_pane_t2_ParamLimits

0xb941,	// (0x0005166b) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x000552d9) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x000552d9) popup_info_list_pane_t

0xb296,	// (0x00050fc0) bg_popup_window_pane_cp12

0xe132,	// (0x00053e5c) find_popup_pane

0xb2f2,	// (0x0005101c) bg_popup_window_pane_cp3

0xb95b,	// (0x00051685) heading_pane_cp3

0xb967,	// (0x00051691) listscroll_popup_graphic_pane

0xb296,	// (0x00050fc0) bg_popup_window_pane_cp4

0x8f05,	// (0x0004ec2f) heading_pane_cp4

0xb973,	// (0x0005169d) listscroll_popup_colour_pane

0xb97b,	// (0x000516a5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb97b,	// (0x000516a5) cell_large_graphic_colour_none_popup_pane

0x8f0d,	// (0x0004ec37) grid_large_graphic_colour_popup_pane_ParamLimits

0x8f0d,	// (0x0004ec37) grid_large_graphic_colour_popup_pane

0xb98f,	// (0x000516b9) listscroll_popup_colour_pane_g1_ParamLimits

0xb98f,	// (0x000516b9) listscroll_popup_colour_pane_g1

0xb9a6,	// (0x000516d0) listscroll_popup_colour_pane_g2_ParamLimits

0xb9a6,	// (0x000516d0) listscroll_popup_colour_pane_g2

0xb9bd,	// (0x000516e7) listscroll_popup_colour_pane_g3_ParamLimits

0xb9bd,	// (0x000516e7) listscroll_popup_colour_pane_g3

0x8f31,	// (0x0004ec5b) listscroll_popup_colour_pane_g4_ParamLimits

0x8f31,	// (0x0004ec5b) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x000552de) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x000552de) listscroll_popup_colour_pane_g

0xb9cd,	// (0x000516f7) scroll_pane_cp6_ParamLimits

0xb9cd,	// (0x000516f7) scroll_pane_cp6

0x8f40,	// (0x0004ec6a) cell_large_graphic_colour_popup_pane_ParamLimits

0x8f40,	// (0x0004ec6a) cell_large_graphic_colour_popup_pane

0xb9df,	// (0x00051709) cell_large_graphic_colour_none_popup_pane_t1

0xb296,	// (0x00050fc0) grid_highlight_pane_cp5

0xb9ee,	// (0x00051718) cell_large_graphic_colour_popup_pane_g1

0xb9f6,	// (0x00051720) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x000552e7) cell_large_graphic_colour_popup_pane_g

0xb9fe,	// (0x00051728) cell_large_graphic_colour_popup_pane_g2_copy1

0xba07,	// (0x00051731) grid_highlight_pane_cp4

0xba0f,	// (0x00051739) bg_popup_window_pane_cp8_ParamLimits

0xba0f,	// (0x00051739) bg_popup_window_pane_cp8

0xba2a,	// (0x00051754) popup_snote_single_text_window_g1_ParamLimits

0xba2a,	// (0x00051754) popup_snote_single_text_window_g1

0xba3c,	// (0x00051766) popup_snote_single_text_window_t1_ParamLimits

0xba3c,	// (0x00051766) popup_snote_single_text_window_t1

0xba4f,	// (0x00051779) popup_snote_single_text_window_t2_ParamLimits

0xba4f,	// (0x00051779) popup_snote_single_text_window_t2

0xba62,	// (0x0005178c) popup_snote_single_text_window_t3_ParamLimits

0xba62,	// (0x0005178c) popup_snote_single_text_window_t3

0xbcdc,	// (0x00051a06) popup_snote_single_text_window_t4_ParamLimits

0xbcdc,	// (0x00051a06) popup_snote_single_text_window_t4

0xbd10,	// (0x00051a3a) popup_snote_single_text_window_t5_ParamLimits

0xbd10,	// (0x00051a3a) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x000552ec) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x000552ec) popup_snote_single_text_window_t

0xbd3f,	// (0x00051a69) bg_popup_window_pane_cp9_ParamLimits

0xbd3f,	// (0x00051a69) bg_popup_window_pane_cp9

0xba2a,	// (0x00051754) popup_snote_single_graphic_window_g1_ParamLimits

0xba2a,	// (0x00051754) popup_snote_single_graphic_window_g1

0xbd4d,	// (0x00051a77) popup_snote_single_graphic_window_g2_ParamLimits

0xbd4d,	// (0x00051a77) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x000552f7) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x000552f7) popup_snote_single_graphic_window_g

0xbd59,	// (0x00051a83) popup_snote_single_graphic_window_t1_ParamLimits

0xbd59,	// (0x00051a83) popup_snote_single_graphic_window_t1

0xbd6c,	// (0x00051a96) popup_snote_single_graphic_window_t2_ParamLimits

0xbd6c,	// (0x00051a96) popup_snote_single_graphic_window_t2

0xbd7f,	// (0x00051aa9) popup_snote_single_graphic_window_t3_ParamLimits

0xbd7f,	// (0x00051aa9) popup_snote_single_graphic_window_t3

0xbdb8,	// (0x00051ae2) popup_snote_single_graphic_window_t4_ParamLimits

0xbdb8,	// (0x00051ae2) popup_snote_single_graphic_window_t4

0xbdec,	// (0x00051b16) popup_snote_single_graphic_window_t5_ParamLimits

0xbdec,	// (0x00051b16) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x000552fc) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x000552fc) popup_snote_single_graphic_window_t

0xe0b6,	// (0x00053de0) grid_graphic_popup_pane_ParamLimits

0xe0b6,	// (0x00053de0) grid_graphic_popup_pane

0xe0e2,	// (0x00053e0c) listscroll_popup_graphic_pane_g1_ParamLimits

0xe0e2,	// (0x00053e0c) listscroll_popup_graphic_pane_g1

0xa1f1,	// (0x0004ff1b) listscroll_popup_graphic_pane_g2_ParamLimits

0xa1f1,	// (0x0004ff1b) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c1,	// (0x000556eb) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c1,	// (0x000556eb) listscroll_popup_graphic_pane_g

0xd692,	// (0x000533bc) scroll_pane_cp5

0xa1b4,	// (0x0004fede) cell_graphic_popup_pane_ParamLimits

0xa1b4,	// (0x0004fede) cell_graphic_popup_pane

0xe075,	// (0x00053d9f) cell_graphic_popup_pane_g1

0xe07d,	// (0x00053da7) cell_graphic_popup_pane_g2

0xb9fe,	// (0x00051728) cell_graphic_popup_pane_g3

0x0002,

0xf9ba,	// (0x000556e4) cell_graphic_popup_pane_g

0xe086,	// (0x00053db0) cell_graphic_popup_pane_t2

0xba07,	// (0x00051731) grid_highlight_pane_cp3

0xbe2d,	// (0x00051b57) list_gen_pane_ParamLimits

0xbe2d,	// (0x00051b57) list_gen_pane

0xbe55,	// (0x00051b7f) scroll_pane

0xa16f,	// (0x0004fe99) bg_list_pane_g1_ParamLimits

0xa16f,	// (0x0004fe99) bg_list_pane_g1

0xe024,	// (0x00053d4e) bg_list_pane_g2_ParamLimits

0xe024,	// (0x00053d4e) bg_list_pane_g2

0xe037,	// (0x00053d61) bg_list_pane_g3_ParamLimits

0xe037,	// (0x00053d61) bg_list_pane_g3

0xe049,	// (0x00053d73) bg_list_pane_g4_ParamLimits

0xe049,	// (0x00053d73) bg_list_pane_g4

0xa18a,	// (0x0004feb4) bg_list_pane_g5_ParamLimits

0xa18a,	// (0x0004feb4) bg_list_pane_g5

0x0004,

0xf9af,	// (0x000556d9) bg_list_pane_g_ParamLimits

0xf9af,	// (0x000556d9) bg_list_pane_g

0xa135,	// (0x0004fe5f) list_double2_graphic_large_graphic_pane_ParamLimits

0xa135,	// (0x0004fe5f) list_double2_graphic_large_graphic_pane

0xa135,	// (0x0004fe5f) list_double2_graphic_pane_ParamLimits

0xa135,	// (0x0004fe5f) list_double2_graphic_pane

0xa135,	// (0x0004fe5f) list_double2_large_graphic_pane_ParamLimits

0xa135,	// (0x0004fe5f) list_double2_large_graphic_pane

0xa135,	// (0x0004fe5f) list_double2_pane_ParamLimits

0xa135,	// (0x0004fe5f) list_double2_pane

0xa135,	// (0x0004fe5f) list_double_graphic_heading_pane_ParamLimits

0xa135,	// (0x0004fe5f) list_double_graphic_heading_pane

0xa135,	// (0x0004fe5f) list_double_graphic_pane_ParamLimits

0xa135,	// (0x0004fe5f) list_double_graphic_pane

0xa135,	// (0x0004fe5f) list_double_heading_pane_ParamLimits

0xa135,	// (0x0004fe5f) list_double_heading_pane

0xa135,	// (0x0004fe5f) list_double_large_graphic_pane_ParamLimits

0xa135,	// (0x0004fe5f) list_double_large_graphic_pane

0xa135,	// (0x0004fe5f) list_double_number_pane_ParamLimits

0xa135,	// (0x0004fe5f) list_double_number_pane

0xa135,	// (0x0004fe5f) list_double_pane_ParamLimits

0xa135,	// (0x0004fe5f) list_double_pane

0xa135,	// (0x0004fe5f) list_double_time_pane_ParamLimits

0xa135,	// (0x0004fe5f) list_double_time_pane

0xa135,	// (0x0004fe5f) list_setting_number_pane_ParamLimits

0xa135,	// (0x0004fe5f) list_setting_number_pane

0xa135,	// (0x0004fe5f) list_setting_pane_ParamLimits

0xa135,	// (0x0004fe5f) list_setting_pane

0xa148,	// (0x0004fe72) list_single_2graphic_pane_ParamLimits

0xa148,	// (0x0004fe72) list_single_2graphic_pane

0xa148,	// (0x0004fe72) list_single_graphic_heading_pane_ParamLimits

0xa148,	// (0x0004fe72) list_single_graphic_heading_pane

0xa148,	// (0x0004fe72) list_single_graphic_pane_ParamLimits

0xa148,	// (0x0004fe72) list_single_graphic_pane

0xa148,	// (0x0004fe72) list_single_heading_pane_ParamLimits

0xa148,	// (0x0004fe72) list_single_heading_pane

0xa148,	// (0x0004fe72) list_single_large_graphic_pane_ParamLimits

0xa148,	// (0x0004fe72) list_single_large_graphic_pane

0xa148,	// (0x0004fe72) list_single_number_heading_pane_ParamLimits

0xa148,	// (0x0004fe72) list_single_number_heading_pane

0xa148,	// (0x0004fe72) list_single_number_pane_ParamLimits

0xa148,	// (0x0004fe72) list_single_number_pane

0xa148,	// (0x0004fe72) list_single_pane_ParamLimits

0xa148,	// (0x0004fe72) list_single_pane

0xb296,	// (0x00050fc0) list_highlight_pane_cp1

0x28fe,	// (0x00048628) list_single_pane_g1_ParamLimits

0x28fe,	// (0x00048628) list_single_pane_g1

0x290a,	// (0x00048634) list_single_pane_g2_ParamLimits

0x290a,	// (0x00048634) list_single_pane_g2

0x0001,

0xf5ee,	// (0x00055318) list_single_pane_g_ParamLimits

0xf5ee,	// (0x00055318) list_single_pane_g

0x318d,	// (0x00048eb7) list_single_pane_t1_ParamLimits

0x318d,	// (0x00048eb7) list_single_pane_t1

0x28fe,	// (0x00048628) list_single_number_pane_g1_ParamLimits

0x28fe,	// (0x00048628) list_single_number_pane_g1

0x290a,	// (0x00048634) list_single_number_pane_g2_ParamLimits

0x290a,	// (0x00048634) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x00055318) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x00055318) list_single_number_pane_g

0x2f56,	// (0x00048c80) list_single_number_pane_t1_ParamLimits

0x2f56,	// (0x00048c80) list_single_number_pane_t1

0x8c39,	// (0x0004e963) list_single_number_pane_t2_ParamLimits

0x8c39,	// (0x0004e963) list_single_number_pane_t2

0x0001,

0xf970,	// (0x0005569a) list_single_number_pane_t_ParamLimits

0xf970,	// (0x0005569a) list_single_number_pane_t

0x7c36,	// (0x0004d960) list_single_graphic_pane_g1_ParamLimits

0x7c36,	// (0x0004d960) list_single_graphic_pane_g1

0x28fe,	// (0x00048628) list_single_graphic_pane_g2_ParamLimits

0x28fe,	// (0x00048628) list_single_graphic_pane_g2

0x290a,	// (0x00048634) list_single_graphic_pane_g3_ParamLimits

0x290a,	// (0x00048634) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00055307) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00055307) list_single_graphic_pane_g

0x7c42,	// (0x0004d96c) list_single_graphic_pane_t1_ParamLimits

0x7c42,	// (0x0004d96c) list_single_graphic_pane_t1

0x7c58,	// (0x0004d982) list_single_heading_pane_g1_ParamLimits

0x7c58,	// (0x0004d982) list_single_heading_pane_g1

0x290a,	// (0x00048634) list_single_heading_pane_g2_ParamLimits

0x290a,	// (0x00048634) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0005530e) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0005530e) list_single_heading_pane_g

0x7c6b,	// (0x0004d995) list_single_heading_pane_t1_ParamLimits

0x7c6b,	// (0x0004d995) list_single_heading_pane_t1

0x7c81,	// (0x0004d9ab) list_single_heading_pane_t2_ParamLimits

0x7c81,	// (0x0004d9ab) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00055313) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00055313) list_single_heading_pane_t

0x28fe,	// (0x00048628) list_single_number_heading_pane_g1_ParamLimits

0x28fe,	// (0x00048628) list_single_number_heading_pane_g1

0x290a,	// (0x00048634) list_single_number_heading_pane_g2_ParamLimits

0x290a,	// (0x00048634) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x00055318) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x00055318) list_single_number_heading_pane_g

0x31af,	// (0x00048ed9) list_single_number_heading_pane_t1_ParamLimits

0x31af,	// (0x00048ed9) list_single_number_heading_pane_t1

0x7c93,	// (0x0004d9bd) list_single_number_heading_pane_t2_ParamLimits

0x7c93,	// (0x0004d9bd) list_single_number_heading_pane_t2

0x3167,	// (0x00048e91) list_single_number_heading_pane_t3_ParamLimits

0x3167,	// (0x00048e91) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x0005531d) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x0005531d) list_single_number_heading_pane_t

0x7ca5,	// (0x0004d9cf) list_single_graphic_heading_pane_g1_ParamLimits

0x7ca5,	// (0x0004d9cf) list_single_graphic_heading_pane_g1

0x8b0b,	// (0x0004e835) list_single_graphic_heading_pane_g4_ParamLimits

0x8b0b,	// (0x0004e835) list_single_graphic_heading_pane_g4

0x290a,	// (0x00048634) list_single_graphic_heading_pane_g5_ParamLimits

0x290a,	// (0x00048634) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x00055324) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x00055324) list_single_graphic_heading_pane_g

0x31af,	// (0x00048ed9) list_single_graphic_heading_pane_t1_ParamLimits

0x31af,	// (0x00048ed9) list_single_graphic_heading_pane_t1

0x7cb9,	// (0x0004d9e3) list_single_graphic_heading_pane_t2_ParamLimits

0x7cb9,	// (0x0004d9e3) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x0005532b) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x0005532b) list_single_graphic_heading_pane_t

0x31a3,	// (0x00048ecd) list_single_large_graphic_pane_g1_ParamLimits

0x31a3,	// (0x00048ecd) list_single_large_graphic_pane_g1

0x28fe,	// (0x00048628) list_single_large_graphic_pane_g2_ParamLimits

0x28fe,	// (0x00048628) list_single_large_graphic_pane_g2

0x290a,	// (0x00048634) list_single_large_graphic_pane_g3_ParamLimits

0x290a,	// (0x00048634) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x00055330) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x00055330) list_single_large_graphic_pane_g

0xd3a3,	// (0x000530cd) wait_border_pane_g2_copy1

0x8b1c,	// (0x0004e846) list_single_large_graphic_pane_g4_cp2

0x31af,	// (0x00048ed9) list_single_large_graphic_pane_t1_ParamLimits

0x31af,	// (0x00048ed9) list_single_large_graphic_pane_t1

0x2951,	// (0x0004867b) list_double_pane_g1_ParamLimits

0x2951,	// (0x0004867b) list_double_pane_g1

0x295d,	// (0x00048687) list_double_pane_g2_ParamLimits

0x295d,	// (0x00048687) list_double_pane_g2

0x0001,

0xf60d,	// (0x00055337) list_double_pane_g_ParamLimits

0xf60d,	// (0x00055337) list_double_pane_g

0x7cd1,	// (0x0004d9fb) list_double_pane_t1_ParamLimits

0x7cd1,	// (0x0004d9fb) list_double_pane_t1

0x7ce7,	// (0x0004da11) list_double_pane_t2_ParamLimits

0x7ce7,	// (0x0004da11) list_double_pane_t2

0x0001,

0xf612,	// (0x0005533c) list_double_pane_t_ParamLimits

0xf612,	// (0x0005533c) list_double_pane_t

0x7cf9,	// (0x0004da23) list_double2_pane_g1_ParamLimits

0x7cf9,	// (0x0004da23) list_double2_pane_g1

0x0cce,	// (0x000469f8) list_double2_pane_g2_ParamLimits

0x0cce,	// (0x000469f8) list_double2_pane_g2

0x0001,

0xf617,	// (0x00055341) list_double2_pane_g_ParamLimits

0xf617,	// (0x00055341) list_double2_pane_g

0x7d0a,	// (0x0004da34) list_double2_pane_t1_ParamLimits

0x7d0a,	// (0x0004da34) list_double2_pane_t1

0x7d20,	// (0x0004da4a) list_double2_pane_t2_ParamLimits

0x7d20,	// (0x0004da4a) list_double2_pane_t2

0x0001,

0xf61c,	// (0x00055346) list_double2_pane_t_ParamLimits

0xf61c,	// (0x00055346) list_double2_pane_t

0x2951,	// (0x0004867b) list_double_number_pane_g1_ParamLimits

0x2951,	// (0x0004867b) list_double_number_pane_g1

0x295d,	// (0x00048687) list_double_number_pane_g2_ParamLimits

0x295d,	// (0x00048687) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x00055337) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x00055337) list_double_number_pane_g

0x7d32,	// (0x0004da5c) list_double_number_pane_t1_ParamLimits

0x7d32,	// (0x0004da5c) list_double_number_pane_t1

0x0b41,	// (0x0004686b) list_double_number_pane_t2_ParamLimits

0x0b41,	// (0x0004686b) list_double_number_pane_t2

0x7d44,	// (0x0004da6e) list_double_number_pane_t3_ParamLimits

0x7d44,	// (0x0004da6e) list_double_number_pane_t3

0x0002,

0xf621,	// (0x0005534b) list_double_number_pane_t_ParamLimits

0xf621,	// (0x0005534b) list_double_number_pane_t

0x0b35,	// (0x0004685f) list_double_graphic_pane_g1_ParamLimits

0x0b35,	// (0x0004685f) list_double_graphic_pane_g1

0x8b24,	// (0x0004e84e) list_double_graphic_pane_g2_ParamLimits

0x8b24,	// (0x0004e84e) list_double_graphic_pane_g2

0x8b33,	// (0x0004e85d) list_double_graphic_pane_g3_ParamLimits

0x8b33,	// (0x0004e85d) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x00055352) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x00055352) list_double_graphic_pane_g

0x7d56,	// (0x0004da80) list_double_graphic_pane_t1_ParamLimits

0x7d56,	// (0x0004da80) list_double_graphic_pane_t1

0x7d6c,	// (0x0004da96) list_double_graphic_pane_t2_ParamLimits

0x7d6c,	// (0x0004da96) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x0005535b) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x0005535b) list_double_graphic_pane_t

0x7d7e,	// (0x0004daa8) list_double2_graphic_pane_g1_ParamLimits

0x7d7e,	// (0x0004daa8) list_double2_graphic_pane_g1

0xbe89,	// (0x00051bb3) list_double2_graphic_pane_g2_ParamLimits

0xbe89,	// (0x00051bb3) list_double2_graphic_pane_g2

0x8b4b,	// (0x0004e875) list_double2_graphic_pane_g3_ParamLimits

0x8b4b,	// (0x0004e875) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x00055360) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x00055360) list_double2_graphic_pane_g

0x7d8a,	// (0x0004dab4) list_double2_graphic_pane_t1_ParamLimits

0x7d8a,	// (0x0004dab4) list_double2_graphic_pane_t1

0x7da0,	// (0x0004daca) list_double2_graphic_pane_t2_ParamLimits

0x7da0,	// (0x0004daca) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x00055367) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x00055367) list_double2_graphic_pane_t

0x7db2,	// (0x0004dadc) list_double_large_graphic_pane_g1_ParamLimits

0x7db2,	// (0x0004dadc) list_double_large_graphic_pane_g1

0x7dd1,	// (0x0004dafb) list_double_large_graphic_pane_g2_ParamLimits

0x7dd1,	// (0x0004dafb) list_double_large_graphic_pane_g2

0x295d,	// (0x00048687) list_double_large_graphic_pane_g3_ParamLimits

0x295d,	// (0x00048687) list_double_large_graphic_pane_g3

0x7de7,	// (0x0004db11) list_double_large_graphic_pane_g4_ParamLimits

0x7de7,	// (0x0004db11) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x0005536c) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x0005536c) list_double_large_graphic_pane_g

0x7dfa,	// (0x0004db24) list_double_large_graphic_pane_t1_ParamLimits

0x7dfa,	// (0x0004db24) list_double_large_graphic_pane_t1

0x7e13,	// (0x0004db3d) list_double_large_graphic_pane_t2_ParamLimits

0x7e13,	// (0x0004db3d) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x00055377) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x00055377) list_double_large_graphic_pane_t

0x8b57,	// (0x0004e881) list_double2_large_graphic_pane_g1_ParamLimits

0x8b57,	// (0x0004e881) list_double2_large_graphic_pane_g1

0x8b63,	// (0x0004e88d) list_double2_large_graphic_pane_g2_ParamLimits

0x8b63,	// (0x0004e88d) list_double2_large_graphic_pane_g2

0x8b4b,	// (0x0004e875) list_double2_large_graphic_pane_g3_ParamLimits

0x8b4b,	// (0x0004e875) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x0005537c) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x0005537c) list_double2_large_graphic_pane_g

0x7e25,	// (0x0004db4f) list_double2_large_graphic_pane_t1_ParamLimits

0x7e25,	// (0x0004db4f) list_double2_large_graphic_pane_t1

0x7e3b,	// (0x0004db65) list_double2_large_graphic_pane_t2_ParamLimits

0x7e3b,	// (0x0004db65) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x00055383) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x00055383) list_double2_large_graphic_pane_t

0x7e4d,	// (0x0004db77) list_double_heading_pane_g1_ParamLimits

0x7e4d,	// (0x0004db77) list_double_heading_pane_g1

0x7e5e,	// (0x0004db88) list_double_heading_pane_g2_ParamLimits

0x7e5e,	// (0x0004db88) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x00055388) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x00055388) list_double_heading_pane_g

0x7e6a,	// (0x0004db94) list_double_heading_pane_t1_ParamLimits

0x7e6a,	// (0x0004db94) list_double_heading_pane_t1

0x7d20,	// (0x0004da4a) list_double_heading_pane_t2_ParamLimits

0x7d20,	// (0x0004da4a) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x0005538d) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x0005538d) list_double_heading_pane_t

0x0af5,	// (0x0004681f) list_double_graphic_heading_pane_g1_ParamLimits

0x0af5,	// (0x0004681f) list_double_graphic_heading_pane_g1

0x7e4d,	// (0x0004db77) list_double_graphic_heading_pane_g2_ParamLimits

0x7e4d,	// (0x0004db77) list_double_graphic_heading_pane_g2

0x7e5e,	// (0x0004db88) list_double_graphic_heading_pane_g3_ParamLimits

0x7e5e,	// (0x0004db88) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x00055392) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x00055392) list_double_graphic_heading_pane_g

0x7e80,	// (0x0004dbaa) list_double_graphic_heading_pane_t1_ParamLimits

0x7e80,	// (0x0004dbaa) list_double_graphic_heading_pane_t1

0x7da0,	// (0x0004daca) list_double_graphic_heading_pane_t2_ParamLimits

0x7da0,	// (0x0004daca) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x00055399) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x00055399) list_double_graphic_heading_pane_t

0x7e96,	// (0x0004dbc0) list_double_time_pane_g1_ParamLimits

0x7e96,	// (0x0004dbc0) list_double_time_pane_g1

0x0a87,	// (0x000467b1) list_double_time_pane_g2_ParamLimits

0x0a87,	// (0x000467b1) list_double_time_pane_g2

0x0001,

0xf674,	// (0x0005539e) list_double_time_pane_g_ParamLimits

0xf674,	// (0x0005539e) list_double_time_pane_g

0x7ea7,	// (0x0004dbd1) list_double_time_pane_t1_ParamLimits

0x7ea7,	// (0x0004dbd1) list_double_time_pane_t1

0x7ebd,	// (0x0004dbe7) list_double_time_pane_t2_ParamLimits

0x7ebd,	// (0x0004dbe7) list_double_time_pane_t2

0x7ecf,	// (0x0004dbf9) list_double_time_pane_t3_ParamLimits

0x7ecf,	// (0x0004dbf9) list_double_time_pane_t3

0x7ee1,	// (0x0004dc0b) list_double_time_pane_t4_ParamLimits

0x7ee1,	// (0x0004dc0b) list_double_time_pane_t4

0x0003,

0xf679,	// (0x000553a3) list_double_time_pane_t_ParamLimits

0xf679,	// (0x000553a3) list_double_time_pane_t

0x0cc2,	// (0x000469ec) list_setting_pane_g1_ParamLimits

0x0cc2,	// (0x000469ec) list_setting_pane_g1

0x0cce,	// (0x000469f8) list_setting_pane_g2_ParamLimits

0x0cce,	// (0x000469f8) list_setting_pane_g2

0x0001,

0xf682,	// (0x000553ac) list_setting_pane_g_ParamLimits

0xf682,	// (0x000553ac) list_setting_pane_g

0x7ef3,	// (0x0004dc1d) list_setting_pane_t1_ParamLimits

0x7ef3,	// (0x0004dc1d) list_setting_pane_t1

0x7f0d,	// (0x0004dc37) list_setting_pane_t2_ParamLimits

0x7f0d,	// (0x0004dc37) list_setting_pane_t2

0x0002,

0xf687,	// (0x000553b1) list_setting_pane_t_ParamLimits

0xf687,	// (0x000553b1) list_setting_pane_t

0x7f4a,	// (0x0004dc74) set_value_pane_cp_ParamLimits

0x7f4a,	// (0x0004dc74) set_value_pane_cp

0x0d3d,	// (0x00046a67) list_setting_number_pane_g1_ParamLimits

0x0d3d,	// (0x00046a67) list_setting_number_pane_g1

0x0d49,	// (0x00046a73) list_setting_number_pane_g2_ParamLimits

0x0d49,	// (0x00046a73) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x000553b8) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x000553b8) list_setting_number_pane_g

0x7f56,	// (0x0004dc80) list_setting_number_pane_t1_ParamLimits

0x7f56,	// (0x0004dc80) list_setting_number_pane_t1

0x7f6f,	// (0x0004dc99) list_setting_number_pane_t2_ParamLimits

0x7f6f,	// (0x0004dc99) list_setting_number_pane_t2

0x7f89,	// (0x0004dcb3) list_setting_number_pane_t3_ParamLimits

0x7f89,	// (0x0004dcb3) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x000553bd) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x000553bd) list_setting_number_pane_t

0x7f4a,	// (0x0004dc74) set_value_pane_ParamLimits

0x7f4a,	// (0x0004dc74) set_value_pane

0xbe95,	// (0x00051bbf) bg_set_opt_pane_ParamLimits

0xbe95,	// (0x00051bbf) bg_set_opt_pane

0x0dcb,	// (0x00046af5) set_value_pane_t1

0xbeb6,	// (0x00051be0) slider_set_pane_cp3

0xbebf,	// (0x00051be9) volume_small_pane_cp

0xbec8,	// (0x00051bf2) list_form_gen_pane

0xbed1,	// (0x00051bfb) scroll_pane_cp8

0x7fcc,	// (0x0004dcf6) form_field_data_pane_ParamLimits

0x7fcc,	// (0x0004dcf6) form_field_data_pane

0x7fe3,	// (0x0004dd0d) form_field_data_wide_pane_ParamLimits

0x7fe3,	// (0x0004dd0d) form_field_data_wide_pane

0x8003,	// (0x0004dd2d) form_field_popup_pane_ParamLimits

0x8003,	// (0x0004dd2d) form_field_popup_pane

0x801b,	// (0x0004dd45) form_field_popup_wide_pane_ParamLimits

0x801b,	// (0x0004dd45) form_field_popup_wide_pane

0x0e5d,	// (0x00046b87) form_field_slider_pane_ParamLimits

0x0e5d,	// (0x00046b87) form_field_slider_pane

0x0e70,	// (0x00046b9a) form_field_slider_wide_pane_ParamLimits

0x0e70,	// (0x00046b9a) form_field_slider_wide_pane

0xbee2,	// (0x00051c0c) data_form_pane

0x8042,	// (0x0004dd6c) form_field_data_pane_t1

0xbeee,	// (0x00051c18) input_focus_pane

0xbefc,	// (0x00051c26) data_form_wide_pane

0x0eb3,	// (0x00046bdd) form_field_data_wide_pane_t1

0xba1c,	// (0x00051746) input_focus_pane_cp6

0x805c,	// (0x0004dd86) form_field_popup_pane_t1

0xbeee,	// (0x00051c18) input_focus_pane_cp7

0xbf1c,	// (0x00051c46) list_form_pane

0x29d1,	// (0x000486fb) form_field_popup_wide_pane_t1

0xbeee,	// (0x00051c18) input_focus_pane_cp8

0xbf28,	// (0x00051c52) list_form_wide_pane

0x807e,	// (0x0004dda8) form_field_slider_pane_t1_ParamLimits

0x807e,	// (0x0004dda8) form_field_slider_pane_t1

0x8096,	// (0x0004ddc0) form_field_slider_pane_t2_ParamLimits

0x8096,	// (0x0004ddc0) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x000553cd) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x000553cd) form_field_slider_pane_t

0xb2e4,	// (0x0005100e) input_focus_pane_cp9_ParamLimits

0xb2e4,	// (0x0005100e) input_focus_pane_cp9

0x80ab,	// (0x0004ddd5) slider_cont_pane_ParamLimits

0x80ab,	// (0x0004ddd5) slider_cont_pane

0xbf37,	// (0x00051c61) form_field_slider_wide_pane_t1_ParamLimits

0xbf37,	// (0x00051c61) form_field_slider_wide_pane_t1

0x2a2f,	// (0x00048759) form_field_slider_wide_pane_t2_ParamLimits

0x2a2f,	// (0x00048759) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x000553d2) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x000553d2) form_field_slider_wide_pane_t

0xb2e4,	// (0x0005100e) input_focus_pane_cp10_ParamLimits

0xb2e4,	// (0x0005100e) input_focus_pane_cp10

0x80bf,	// (0x0004dde9) slider_cont_pane_cp1_ParamLimits

0x80bf,	// (0x0004dde9) slider_cont_pane_cp1

0x80d3,	// (0x0004ddfd) slider_form_pane_cp

0xbf49,	// (0x00051c73) input_focus_pane_g1

0xbf51,	// (0x00051c7b) input_focus_pane_g2

0xbf59,	// (0x00051c83) input_focus_pane_g3

0xbf61,	// (0x00051c8b) input_focus_pane_g4

0xbf69,	// (0x00051c93) input_focus_pane_g5

0xbf71,	// (0x00051c9b) input_focus_pane_g6

0xbf79,	// (0x00051ca3) input_focus_pane_g7

0xbf81,	// (0x00051cab) input_focus_pane_g8

0xbf89,	// (0x00051cb3) input_focus_pane_g9

0xb28c,	// (0x00050fb6) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x000553d7) input_focus_pane_g

0xd3ac,	// (0x000530d6) wait_border_pane_g3_copy1

0x80db,	// (0x0004de05) data_form_pane_t1

0xb28c,	// (0x00050fb6) wait_anim_pane_g1_copy1

0x8c4b,	// (0x0004e975) data_form_wide_pane_t1

0x80f5,	// (0x0004de1f) list_form_graphic_pane_cp_ParamLimits

0x80f5,	// (0x0004de1f) list_form_graphic_pane_cp

0xdfcd,	// (0x00053cf7) slider_form_pane_g1

0xdfd6,	// (0x00053d00) slider_form_pane_g2

0x0006,

0xf9a0,	// (0x000556ca) slider_form_pane_g

0x80f5,	// (0x0004de1f) list_form_graphic_pane_ParamLimits

0x80f5,	// (0x0004de1f) list_form_graphic_pane

0x2aa9,	// (0x000487d3) list_form_graphic_pane_g1

0x2ab1,	// (0x000487db) list_form_graphic_pane_t1_ParamLimits

0x2ab1,	// (0x000487db) list_form_graphic_pane_t1

0xb2f2,	// (0x0005101c) list_highlight_pane_cp5_ParamLimits

0xb2f2,	// (0x0005101c) list_highlight_pane_cp5

0x8108,	// (0x0004de32) find_pane_g1

0xbf91,	// (0x00051cbb) input_find_pane

0x8111,	// (0x0004de3b) input_find_pane_g1_ParamLimits

0x8111,	// (0x0004de3b) input_find_pane_g1

0x811d,	// (0x0004de47) input_find_pane_t1_ParamLimits

0x811d,	// (0x0004de47) input_find_pane_t1

0x8132,	// (0x0004de5c) input_find_pane_t2_ParamLimits

0x8132,	// (0x0004de5c) input_find_pane_t2

0x0001,

0xf6c2,	// (0x000553ec) input_find_pane_t_ParamLimits

0xf6c2,	// (0x000553ec) input_find_pane_t

0xbf9a,	// (0x00051cc4) input_focus_pane_cp5_ParamLimits

0xbf9a,	// (0x00051cc4) input_focus_pane_cp5

0x8f75,	// (0x0004ec9f) bg_popup_window_pane_cp2_ParamLimits

0x8f75,	// (0x0004ec9f) bg_popup_window_pane_cp2

0x8f82,	// (0x0004ecac) listscroll_menu_pane_ParamLimits

0x8f82,	// (0x0004ecac) listscroll_menu_pane

0x8f8e,	// (0x0004ecb8) popup_submenu_window_ParamLimits

0x8f8e,	// (0x0004ecb8) popup_submenu_window

0xbfa8,	// (0x00051cd2) find_popup_pane_g1

0xbfb0,	// (0x00051cda) input_popup_find_pane_cp

0xbf9a,	// (0x00051cc4) input_focus_pane_cp4_ParamLimits

0xbf9a,	// (0x00051cc4) input_focus_pane_cp4

0xbfba,	// (0x00051ce4) input_popup_find_pane_t1_ParamLimits

0xbfba,	// (0x00051ce4) input_popup_find_pane_t1

0xb296,	// (0x00050fc0) bg_popup_sub_pane_cp

0xbfe8,	// (0x00051d12) listscroll_popup_sub_pane

0xbff0,	// (0x00051d1a) list_submenu_pane_ParamLimits

0xbff0,	// (0x00051d1a) list_submenu_pane

0xc001,	// (0x00051d2b) scroll_pane_cp4

0xc009,	// (0x00051d33) list_single_popup_submenu_pane_ParamLimits

0xc009,	// (0x00051d33) list_single_popup_submenu_pane

0xc01c,	// (0x00051d46) list_single_popup_submenu_pane_g1

0xc024,	// (0x00051d4e) list_single_popup_submenu_pane_t1_ParamLimits

0xc024,	// (0x00051d4e) list_single_popup_submenu_pane_t1

0xb2e4,	// (0x0005100e) bg_active_tab_pane_cp1_ParamLimits

0xb2e4,	// (0x0005100e) bg_active_tab_pane_cp1

0x8fc0,	// (0x0004ecea) tabs_2_active_pane_g1

0x8fc8,	// (0x0004ecf2) tabs_2_active_pane_t1

0xb2e4,	// (0x0005100e) bg_passive_tab_pane_cp1_ParamLimits

0xb2e4,	// (0x0005100e) bg_passive_tab_pane_cp1

0x8fc0,	// (0x0004ecea) tabs_2_passive_pane_g1

0x8fc8,	// (0x0004ecf2) tabs_2_passive_pane_t1

0xb2f2,	// (0x0005101c) bg_active_tab_pane_cp4

0x8fda,	// (0x0004ed04) tabs_2_long_active_pane_t1

0xc039,	// (0x00051d63) bg_passive_tab_pane_cp4

0x14f7,	// (0x00047221) list_single_midp_graphic_pane_g4_ParamLimits

0xb2f2,	// (0x0005101c) bg_active_tab_pane_cp5

0x8fed,	// (0x0004ed17) tabs_3_long_active_pane_t1

0xc039,	// (0x00051d63) bg_passive_tab_pane_cp5

0x14f7,	// (0x00047221) list_single_midp_graphic_pane_g4

0xb2f2,	// (0x0005101c) bg_popup_window_pane_cp13_ParamLimits

0xb2f2,	// (0x0005101c) bg_popup_window_pane_cp13

0xc04e,	// (0x00051d78) listscroll_popup_fast_pane_ParamLimits

0xc04e,	// (0x00051d78) listscroll_popup_fast_pane

0xc05d,	// (0x00051d87) grid_popup_fast_pane_ParamLimits

0xc05d,	// (0x00051d87) grid_popup_fast_pane

0xc06f,	// (0x00051d99) scroll_pane_cp9_ParamLimits

0xc06f,	// (0x00051d99) scroll_pane_cp9

0xf38b,	// (0x000550b5) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xf38b,	// (0x000550b5) list_single_graphic_hl_pane_t1_cp2

0xc093,	// (0x00051dbd) input_focus_pane_cp20_ParamLimits

0xc093,	// (0x00051dbd) input_focus_pane_cp20

0xc0a1,	// (0x00051dcb) query_popup_data_pane_t1_ParamLimits

0xc0a1,	// (0x00051dcb) query_popup_data_pane_t1

0xc0b4,	// (0x00051dde) query_popup_data_pane_t2_ParamLimits

0xc0b4,	// (0x00051dde) query_popup_data_pane_t2

0xc0fa,	// (0x00051e24) query_popup_data_pane_t3_ParamLimits

0xc0fa,	// (0x00051e24) query_popup_data_pane_t3

0xc13b,	// (0x00051e65) query_popup_data_pane_t4_ParamLimits

0xc13b,	// (0x00051e65) query_popup_data_pane_t4

0xc177,	// (0x00051ea1) query_popup_data_pane_t5_ParamLimits

0xc177,	// (0x00051ea1) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x000553f1) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x000553f1) query_popup_data_pane_t

0xbf49,	// (0x00051c73) bg_set_opt_pane_g1

0xbf51,	// (0x00051c7b) bg_set_opt_pane_g2

0xbf59,	// (0x00051c83) bg_set_opt_pane_g3

0xbf61,	// (0x00051c8b) bg_set_opt_pane_g4

0xbf69,	// (0x00051c93) bg_set_opt_pane_g5

0xbf71,	// (0x00051c9b) bg_set_opt_pane_g6

0xbf79,	// (0x00051ca3) bg_set_opt_pane_g7

0xbf81,	// (0x00051cab) bg_set_opt_pane_g8

0xbf89,	// (0x00051cb3) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x000553fc) bg_set_opt_pane_g

0x116c,	// (0x00046e96) control_top_pane_stacon_ParamLimits

0x116c,	// (0x00046e96) control_top_pane_stacon

0x11bf,	// (0x00046ee9) signal_pane_stacon_ParamLimits

0x11bf,	// (0x00046ee9) signal_pane_stacon

0xc5db,	// (0x00052305) stacon_top_pane_g1_ParamLimits

0xc5db,	// (0x00052305) stacon_top_pane_g1

0x11e4,	// (0x00046f0e) title_pane_stacon_ParamLimits

0x11e4,	// (0x00046f0e) title_pane_stacon

0x120e,	// (0x00046f38) uni_indicator_pane_stacon_ParamLimits

0x120e,	// (0x00046f38) uni_indicator_pane_stacon

0x1223,	// (0x00046f4d) battery_pane_stacon_ParamLimits

0x1223,	// (0x00046f4d) battery_pane_stacon

0x1267,	// (0x00046f91) control_bottom_pane_stacon_ParamLimits

0x1267,	// (0x00046f91) control_bottom_pane_stacon

0x128a,	// (0x00046fb4) navi_pane_stacon_ParamLimits

0x128a,	// (0x00046fb4) navi_pane_stacon

0xc5fd,	// (0x00052327) stacon_bottom_pane_g1_ParamLimits

0xc5fd,	// (0x00052327) stacon_bottom_pane_g1

0x0ecd,	// (0x00046bf7) aid_levels_signal_lsc_ParamLimits

0x0ecd,	// (0x00046bf7) aid_levels_signal_lsc

0x0ee4,	// (0x00046c0e) signal_pane_stacon_g1_ParamLimits

0x0ee4,	// (0x00046c0e) signal_pane_stacon_g1

0x0ef8,	// (0x00046c22) signal_pane_stacon_g2_ParamLimits

0x0ef8,	// (0x00046c22) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x0005540f) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0005540f) signal_pane_stacon_g

0x0f2d,	// (0x00046c57) title_pane_stacon_t1_ParamLimits

0x0f2d,	// (0x00046c57) title_pane_stacon_t1

0xc1bb,	// (0x00051ee5) uni_indicator_pane_stacon_g1

0xc1c5,	// (0x00051eef) uni_indicator_pane_stacon_g2

0xc1cf,	// (0x00051ef9) uni_indicator_pane_stacon_g3

0xc1d9,	// (0x00051f03) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x0005541b) uni_indicator_pane_stacon_g

0x0f52,	// (0x00046c7c) control_top_pane_stacon_g1

0x0f5a,	// (0x00046c84) control_top_pane_stacon_t1_ParamLimits

0x0f5a,	// (0x00046c84) control_top_pane_stacon_t1

0x0f91,	// (0x00046cbb) aid_levels_battery_lsc_ParamLimits

0x0f91,	// (0x00046cbb) aid_levels_battery_lsc

0x0fa9,	// (0x00046cd3) battery_pane_stacon_g1_ParamLimits

0x0fa9,	// (0x00046cd3) battery_pane_stacon_g1

0x0fbc,	// (0x00046ce6) battery_pane_stacon_g2_ParamLimits

0x0fbc,	// (0x00046ce6) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x00055424) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x00055424) battery_pane_stacon_g

0x0ffa,	// (0x00046d24) navi_icon_pane_stacon

0x100e,	// (0x00046d38) navi_navi_pane_stacon

0x0ffa,	// (0x00046d24) navi_text_pane_stacon

0x0f52,	// (0x00046c7c) control_bottom_pane_stacon_g1

0x1022,	// (0x00046d4c) control_bottom_pane_stacon_t1_ParamLimits

0x1022,	// (0x00046d4c) control_bottom_pane_stacon_t1

0x8fff,	// (0x0004ed29) grid_app_pane_ParamLimits

0x8fff,	// (0x0004ed29) grid_app_pane

0x9035,	// (0x0004ed5f) scroll_pane_cp15_ParamLimits

0x9035,	// (0x0004ed5f) scroll_pane_cp15

0x904e,	// (0x0004ed78) cell_app_pane_ParamLimits

0x904e,	// (0x0004ed78) cell_app_pane

0x9095,	// (0x0004edbf) cell_app_pane_g1_ParamLimits

0x9095,	// (0x0004edbf) cell_app_pane_g1

0xc1fd,	// (0x00051f27) cell_app_pane_g2_ParamLimits

0xc1fd,	// (0x00051f27) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x00055429) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x00055429) cell_app_pane_g

0xc209,	// (0x00051f33) cell_app_pane_t1_ParamLimits

0xc209,	// (0x00051f33) cell_app_pane_t1

0xc220,	// (0x00051f4a) grid_highlight_pane_ParamLimits

0xc220,	// (0x00051f4a) grid_highlight_pane

0xbf49,	// (0x00051c73) cell_highlight_pane_g1

0xbf51,	// (0x00051c7b) cell_highlight_pane_g2

0xbf59,	// (0x00051c83) cell_highlight_pane_g3

0xbf61,	// (0x00051c8b) cell_highlight_pane_g4

0xbf69,	// (0x00051c93) cell_highlight_pane_g5

0xbf71,	// (0x00051c9b) cell_highlight_pane_g6

0xbf79,	// (0x00051ca3) cell_highlight_pane_g7

0xbf81,	// (0x00051cab) cell_highlight_pane_g8

0xbf89,	// (0x00051cb3) cell_highlight_pane_g9

0xb28c,	// (0x00050fb6) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x000553d7) cell_highlight_pane_g

0xc231,	// (0x00051f5b) bg_scroll_pane

0x106c,	// (0x00046d96) scroll_handle_pane

0xc278,	// (0x00051fa2) scroll_bg_pane_g1

0xc28d,	// (0x00051fb7) scroll_bg_pane_g2

0xc2a5,	// (0x00051fcf) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x0005542e) scroll_bg_pane_g

0xc2ba,	// (0x00051fe4) scroll_handle_focus_pane_ParamLimits

0xc2ba,	// (0x00051fe4) scroll_handle_focus_pane

0xc278,	// (0x00051fa2) scroll_handle_pane_g1

0xc2c7,	// (0x00051ff1) scroll_handle_pane_g2

0xc2a5,	// (0x00051fcf) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x00055435) scroll_handle_pane_g

0xbf9a,	// (0x00051cc4) bg_popup_sub_pane_cp21_ParamLimits

0xbf9a,	// (0x00051cc4) bg_popup_sub_pane_cp21

0xc2db,	// (0x00052005) popup_fep_japan_predictive_window_t1_ParamLimits

0xc2db,	// (0x00052005) popup_fep_japan_predictive_window_t1

0xc2f2,	// (0x0005201c) popup_fep_japan_predictive_window_t2_ParamLimits

0xc2f2,	// (0x0005201c) popup_fep_japan_predictive_window_t2

0xc325,	// (0x0005204f) popup_fep_japan_predictive_window_t3_ParamLimits

0xc325,	// (0x0005204f) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x0005543c) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x0005543c) popup_fep_japan_predictive_window_t

0xb296,	// (0x00050fc0) bg_popup_sub_pane_cp23

0xc35c,	// (0x00052086) listscroll_japin_cand_pane

0xc364,	// (0x0005208e) popup_fep_japan_candidate_window_t1

0xc372,	// (0x0005209c) candidate_pane_ParamLimits

0xc372,	// (0x0005209c) candidate_pane

0xc384,	// (0x000520ae) scroll_pane_cp30

0xc38c,	// (0x000520b6) list_single_popup_jap_candidate_pane_ParamLimits

0xc38c,	// (0x000520b6) list_single_popup_jap_candidate_pane

0xb296,	// (0x00050fc0) list_highlight_pane_cp30

0xc3a0,	// (0x000520ca) list_single_popup_jap_candidate_pane_t1

0xc3af,	// (0x000520d9) level_1_signal

0xc3bc,	// (0x000520e6) level_2_signal

0xc3c9,	// (0x000520f3) level_3_signal

0xc3d6,	// (0x00052100) level_4_signal

0xc3e3,	// (0x0005210d) level_5_signal

0xc3f0,	// (0x0005211a) level_6_signal

0xc3fd,	// (0x00052127) level_7_signal

0xc3af,	// (0x000520d9) level_1_battery

0xc3bc,	// (0x000520e6) level_2_battery

0xc3c9,	// (0x000520f3) level_3_battery

0xc3d6,	// (0x00052100) level_4_battery

0xc3e3,	// (0x0005210d) level_5_battery

0xc3f0,	// (0x0005211a) level_6_battery

0xc3fd,	// (0x00052127) level_7_battery

0xc422,	// (0x0005214c) list_menu_pane_ParamLimits

0xc422,	// (0x0005214c) list_menu_pane

0xc433,	// (0x0005215d) scroll_pane_cp25_ParamLimits

0xc433,	// (0x0005215d) scroll_pane_cp25

0xc44c,	// (0x00052176) list_double2_graphic_pane_cp2_ParamLimits

0xc44c,	// (0x00052176) list_double2_graphic_pane_cp2

0xc44c,	// (0x00052176) list_double2_large_graphic_pane_cp2_ParamLimits

0xc44c,	// (0x00052176) list_double2_large_graphic_pane_cp2

0xc44c,	// (0x00052176) list_double2_pane_cp2_ParamLimits

0xc44c,	// (0x00052176) list_double2_pane_cp2

0xc44c,	// (0x00052176) list_double_graphic_pane_cp2_ParamLimits

0xc44c,	// (0x00052176) list_double_graphic_pane_cp2

0xc44c,	// (0x00052176) list_double_large_graphic_pane_cp2_ParamLimits

0xc44c,	// (0x00052176) list_double_large_graphic_pane_cp2

0xc44c,	// (0x00052176) list_double_number_pane_cp2_ParamLimits

0xc44c,	// (0x00052176) list_double_number_pane_cp2

0xc44c,	// (0x00052176) list_double_pane_cp2_ParamLimits

0xc44c,	// (0x00052176) list_double_pane_cp2

0x90ca,	// (0x0004edf4) list_single_2graphic_pane_cp2_ParamLimits

0x90ca,	// (0x0004edf4) list_single_2graphic_pane_cp2

0x90ca,	// (0x0004edf4) list_single_graphic_heading_pane_cp2_ParamLimits

0x90ca,	// (0x0004edf4) list_single_graphic_heading_pane_cp2

0x90ca,	// (0x0004edf4) list_single_graphic_pane_cp2_ParamLimits

0x90ca,	// (0x0004edf4) list_single_graphic_pane_cp2

0x90ca,	// (0x0004edf4) list_single_heading_pane_cp2_ParamLimits

0x90ca,	// (0x0004edf4) list_single_heading_pane_cp2

0xc45c,	// (0x00052186) list_single_large_graphic_pane_cp2_ParamLimits

0xc45c,	// (0x00052186) list_single_large_graphic_pane_cp2

0x90ca,	// (0x0004edf4) list_single_number_heading_pane_cp2_ParamLimits

0x90ca,	// (0x0004edf4) list_single_number_heading_pane_cp2

0x90ca,	// (0x0004edf4) list_single_number_pane_cp2_ParamLimits

0x90ca,	// (0x0004edf4) list_single_number_pane_cp2

0x90ca,	// (0x0004edf4) list_single_pane_cp2_ParamLimits

0x90ca,	// (0x0004edf4) list_single_pane_cp2

0xc476,	// (0x000521a0) bg_popup_sub_pane_cp22

0x111e,	// (0x00046e48) popup_side_volume_key_window_g1

0x1148,	// (0x00046e72) popup_side_volume_key_window_t1

0x1164,	// (0x00046e8e) volume_small_pane_cp1

0xb2e4,	// (0x0005100e) bg_popup_sub_pane_cp24_ParamLimits

0xb2e4,	// (0x0005100e) bg_popup_sub_pane_cp24

0xc48c,	// (0x000521b6) fep_china_uni_candidate_pane_ParamLimits

0xc48c,	// (0x000521b6) fep_china_uni_candidate_pane

0xc4a0,	// (0x000521ca) fep_china_uni_entry_pane

0xc4b0,	// (0x000521da) popup_fep_china_uni_window_g1

0xc4cc,	// (0x000521f6) fep_china_uni_entry_pane_g1

0xc4d4,	// (0x000521fe) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x00055469) fep_china_uni_entry_pane_g

0xc4dc,	// (0x00052206) fep_entry_item_pane

0xc4e6,	// (0x00052210) fep_candidate_item_pane

0xc4ee,	// (0x00052218) fep_china_uni_candidate_pane_g1

0xc4f6,	// (0x00052220) fep_china_uni_candidate_pane_g2

0xc4fe,	// (0x00052228) fep_china_uni_candidate_pane_g3

0xc506,	// (0x00052230) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x0005546e) fep_china_uni_candidate_pane_g

0xb28c,	// (0x00050fb6) fep_entry_item_pane_g1

0xc50e,	// (0x00052238) fep_entry_item_pane_t1_ParamLimits

0xc50e,	// (0x00052238) fep_entry_item_pane_t1

0xc524,	// (0x0005224e) fep_candidate_item_pane_t1_ParamLimits

0xc524,	// (0x0005224e) fep_candidate_item_pane_t1

0xc539,	// (0x00052263) fep_candidate_item_pane_t2_ParamLimits

0xc539,	// (0x00052263) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x00055477) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x00055477) fep_candidate_item_pane_t

0xb2f2,	// (0x0005101c) list_highlight_pane_cp31_ParamLimits

0xb2f2,	// (0x0005101c) list_highlight_pane_cp31

0xc54b,	// (0x00052275) level_1_signal_lsc

0xc554,	// (0x0005227e) level_2_signal_lsc

0xc55d,	// (0x00052287) level_3_signal_lsc

0xc566,	// (0x00052290) level_4_signal_lsc

0xc56f,	// (0x00052299) level_5_signal_lsc

0xc578,	// (0x000522a2) level_6_signal_lsc

0xc581,	// (0x000522ab) level_7_signal_lsc

0xc581,	// (0x000522ab) level_1_battery_lsc

0xc58a,	// (0x000522b4) level_2_battery_lsc

0xc593,	// (0x000522bd) level_3_battery_lsc

0xc59c,	// (0x000522c6) level_4_battery_lsc

0xc5a5,	// (0x000522cf) level_5_battery_lsc

0xc5ae,	// (0x000522d8) level_6_battery_lsc

0xc54b,	// (0x00052275) level_7_battery_lsc

0xc5b7,	// (0x000522e1) scroll_handle_focus_pane_g1

0xc5c0,	// (0x000522ea) scroll_handle_focus_pane_g2

0xc5c9,	// (0x000522f3) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x0005547c) scroll_handle_focus_pane_g

0x8150,	// (0x0004de7a) list_single_2graphic_pane_g1_ParamLimits

0x8150,	// (0x0004de7a) list_single_2graphic_pane_g1

0x8b0b,	// (0x0004e835) list_single_2graphic_pane_g2_ParamLimits

0x8b0b,	// (0x0004e835) list_single_2graphic_pane_g2

0x290a,	// (0x00048634) list_single_2graphic_pane_g3_ParamLimits

0x290a,	// (0x00048634) list_single_2graphic_pane_g3

0x8b74,	// (0x0004e89e) list_single_2graphic_pane_g4_ParamLimits

0x8b74,	// (0x0004e89e) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x00055483) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x00055483) list_single_2graphic_pane_g

0x8b80,	// (0x0004e8aa) list_single_2graphic_pane_t1_ParamLimits

0x8b80,	// (0x0004e8aa) list_single_2graphic_pane_t1

0x8bae,	// (0x0004e8d8) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8bae,	// (0x0004e8d8) list_double2_graphic_large_graphic_pane_g1

0x8b63,	// (0x0004e88d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8b63,	// (0x0004e88d) list_double2_graphic_large_graphic_pane_g2

0x8b4b,	// (0x0004e875) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8b4b,	// (0x0004e875) list_double2_graphic_large_graphic_pane_g3

0x8bc0,	// (0x0004e8ea) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8bc0,	// (0x0004e8ea) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x0005548c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x0005548c) list_double2_graphic_large_graphic_pane_g

0x8bcc,	// (0x0004e8f6) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8bcc,	// (0x0004e8f6) list_double2_graphic_large_graphic_pane_t1

0x8be2,	// (0x0004e90c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8be2,	// (0x0004e90c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x00055495) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x00055495) list_double2_graphic_large_graphic_pane_t

0xc6aa,	// (0x000523d4) popup_fast_swap_window_ParamLimits

0xc6aa,	// (0x000523d4) popup_fast_swap_window

0xc6c6,	// (0x000523f0) popup_side_volume_key_window

0xc6e0,	// (0x0005240a) stacon_top_pane

0xc6ea,	// (0x00052414) status_pane_ParamLimits

0xc6ea,	// (0x00052414) status_pane

0xc6e0,	// (0x0005240a) status_small_pane

0xb296,	// (0x00050fc0) control_pane

0xb296,	// (0x00050fc0) stacon_bottom_pane

0xbed1,	// (0x00051bfb) scroll_pane_cp121

0xbec8,	// (0x00051bf2) set_content_pane

0x912c,	// (0x0004ee56) bg_active_tab_pane_g1_cp1

0xc5d2,	// (0x000522fc) bg_active_tab_pane_g2_cp1

0x9135,	// (0x0004ee5f) bg_active_tab_pane_g3_cp1

0x912c,	// (0x0004ee56) bg_passive_tab_pane_g1_cp1

0xc5d2,	// (0x000522fc) bg_passive_tab_pane_g2_cp1

0x9135,	// (0x0004ee5f) bg_passive_tab_pane_g3_cp1

0x913e,	// (0x0004ee68) bg_active_tab_pane_g1_cp2

0xc5d2,	// (0x000522fc) bg_active_tab_pane_g2_cp2

0x9147,	// (0x0004ee71) bg_active_tab_pane_g3_cp2

0x913e,	// (0x0004ee68) bg_passive_tab_pane_g1_cp2

0xc5d2,	// (0x000522fc) bg_passive_tab_pane_g2_cp2

0x9147,	// (0x0004ee71) bg_passive_tab_pane_g3_cp2

0x9150,	// (0x0004ee7a) bg_active_tab_pane_g1_cp3

0xc5d2,	// (0x000522fc) bg_active_tab_pane_g2_cp3

0x9159,	// (0x0004ee83) bg_active_tab_pane_g3_cp3

0x9150,	// (0x0004ee7a) bg_passive_tab_pane_g1_cp3

0xc5d2,	// (0x000522fc) bg_passive_tab_pane_g2_cp3

0x9159,	// (0x0004ee83) bg_passive_tab_pane_g3_cp3

0x9162,	// (0x0004ee8c) bg_active_tab_pane_g1_cp4

0xc5d2,	// (0x000522fc) bg_active_tab_pane_g2_cp4

0x916b,	// (0x0004ee95) bg_active_tab_pane_g3_cp4

0x9162,	// (0x0004ee8c) bg_passive_tab_pane_g1_cp4

0xc5d2,	// (0x000522fc) bg_passive_tab_pane_g2_cp4

0x916b,	// (0x0004ee95) bg_passive_tab_pane_g3_cp4

0xc619,	// (0x00052343) bg_active_tab_pane_g1_cp5

0xc5d2,	// (0x000522fc) bg_active_tab_pane_g2_cp5

0xc622,	// (0x0005234c) bg_active_tab_pane_g3_cp5

0xc619,	// (0x00052343) bg_passive_tab_pane_g1_cp5

0xc5d2,	// (0x000522fc) bg_passive_tab_pane_g2_cp5

0xc622,	// (0x0005234c) bg_passive_tab_pane_g3_cp5

0x6684,	// (0x0004c3ae) list_set_graphic_pane_ParamLimits

0x6684,	// (0x0004c3ae) list_set_graphic_pane

0xb296,	// (0x00050fc0) bg_set_opt_pane_cp4

0xc62b,	// (0x00052355) list_set_graphic_pane_g1_ParamLimits

0xc62b,	// (0x00052355) list_set_graphic_pane_g1

0xc637,	// (0x00052361) list_set_graphic_pane_g2_ParamLimits

0xc637,	// (0x00052361) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x0005549a) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x0005549a) list_set_graphic_pane_g

0x0009,

0xfa96,	// (0x000557c0) volume_small_pane_cp_g

0xc65b,	// (0x00052385) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc65b,	// (0x00052385) list_double2_large_graphic_pane_g1_cp2

0xc669,	// (0x00052393) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc669,	// (0x00052393) list_double2_large_graphic_pane_g2_cp2

0xc67a,	// (0x000523a4) list_double2_large_graphic_pane_g3_cp2

0xc682,	// (0x000523ac) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc682,	// (0x000523ac) list_double2_large_graphic_pane_t1_cp2

0xc698,	// (0x000523c2) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc698,	// (0x000523c2) list_double2_large_graphic_pane_t2_cp2

0xdd7d,	// (0x00053aa7) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xdd7d,	// (0x00053aa7) list_double_large_graphic_pane_g1_cp2

0xdd90,	// (0x00053aba) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xdd90,	// (0x00053aba) list_double_large_graphic_pane_g2_cp2

0xc808,	// (0x00052532) list_double_large_graphic_pane_g3_cp2

0xdda1,	// (0x00053acb) list_double_large_graphic_pane_g4_cp

0xdda9,	// (0x00053ad3) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xdda9,	// (0x00053ad3) list_double_large_graphic_pane_t1_cp2

0xddc0,	// (0x00053aea) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xddc0,	// (0x00053aea) list_double_large_graphic_pane_t2_cp2

0xc6f8,	// (0x00052422) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc6f8,	// (0x00052422) list_double2_graphic_pane_g1_cp2

0xc706,	// (0x00052430) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc706,	// (0x00052430) list_double2_graphic_pane_g2_cp2

0xc717,	// (0x00052441) list_double2_graphic_pane_g3_cp2

0xc721,	// (0x0005244b) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc721,	// (0x0005244b) list_double2_graphic_pane_t1_cp2

0xc737,	// (0x00052461) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc737,	// (0x00052461) list_double2_graphic_pane_t2_cp2

0xc749,	// (0x00052473) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc749,	// (0x00052473) list_single_number_heading_pane_g1_cp2

0xc755,	// (0x0005247f) list_single_number_heading_pane_g2_cp2

0xc75d,	// (0x00052487) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc75d,	// (0x00052487) list_single_number_heading_pane_t1_cp2

0xc773,	// (0x0005249d) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc773,	// (0x0005249d) list_single_number_heading_pane_t2_cp2

0xc787,	// (0x000524b1) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc787,	// (0x000524b1) list_single_number_heading_pane_t3_cp2

0xc749,	// (0x00052473) list_single_heading_pane_g1_cp2_ParamLimits

0xc749,	// (0x00052473) list_single_heading_pane_g1_cp2

0xc755,	// (0x0005247f) list_single_heading_pane_g2_cp2

0xc75d,	// (0x00052487) list_single_heading_pane_t1_cp2_ParamLimits

0xc75d,	// (0x00052487) list_single_heading_pane_t1_cp2

0xdb85,	// (0x000538af) list_single_heading_pane_t2_cp2_ParamLimits

0xdb85,	// (0x000538af) list_single_heading_pane_t2_cp2

0xdb1f,	// (0x00053849) list_double_graphic_pane_g1_cp2_ParamLimits

0xdb1f,	// (0x00053849) list_double_graphic_pane_g1_cp2

0xdb2b,	// (0x00053855) list_double_graphic_pane_g2_cp2_ParamLimits

0xdb2b,	// (0x00053855) list_double_graphic_pane_g2_cp2

0xdb3a,	// (0x00053864) list_double_graphic_pane_g3_cp2

0xdb42,	// (0x0005386c) list_double_graphic_pane_t1_cp2_ParamLimits

0xdb42,	// (0x0005386c) list_double_graphic_pane_t1_cp2

0xdb58,	// (0x00053882) list_double_graphic_pane_t2_cp2_ParamLimits

0xdb58,	// (0x00053882) list_double_graphic_pane_t2_cp2

0xc7fc,	// (0x00052526) list_double_number_pane_g1_cp2_ParamLimits

0xc7fc,	// (0x00052526) list_double_number_pane_g1_cp2

0xc808,	// (0x00052532) list_double_number_pane_g2_cp2

0xdae3,	// (0x0005380d) list_double_number_pane_t1_cp2_ParamLimits

0xdae3,	// (0x0005380d) list_double_number_pane_t1_cp2

0xdaf7,	// (0x00053821) list_double_number_pane_t2_cp2_ParamLimits

0xdaf7,	// (0x00053821) list_double_number_pane_t2_cp2

0xdb0d,	// (0x00053837) list_double_number_pane_t3_cp2_ParamLimits

0xdb0d,	// (0x00053837) list_double_number_pane_t3_cp2

0xda5a,	// (0x00053784) list_single_graphic_pane_g1_cp2_ParamLimits

0xda5a,	// (0x00053784) list_single_graphic_pane_g1_cp2

0xc860,	// (0x0005258a) list_single_graphic_pane_g2_cp2_ParamLimits

0xc860,	// (0x0005258a) list_single_graphic_pane_g2_cp2

0xc86c,	// (0x00052596) list_single_graphic_pane_g3_cp2

0xda30,	// (0x0005375a) list_single_graphic_pane_t1_cp2_ParamLimits

0xda30,	// (0x0005375a) list_single_graphic_pane_t1_cp2

0xc860,	// (0x0005258a) list_single_number_pane_g1_cp2_ParamLimits

0xc860,	// (0x0005258a) list_single_number_pane_g1_cp2

0xc86c,	// (0x00052596) list_single_number_pane_g2_cp2

0xda30,	// (0x0005375a) list_single_number_pane_t1_cp2_ParamLimits

0xda30,	// (0x0005375a) list_single_number_pane_t1_cp2

0xda46,	// (0x00053770) list_single_number_pane_t2_cp2_ParamLimits

0xda46,	// (0x00053770) list_single_number_pane_t2_cp2

0xc669,	// (0x00052393) list_double2_pane_g1_cp2_ParamLimits

0xc669,	// (0x00052393) list_double2_pane_g1_cp2

0xc67a,	// (0x000523a4) list_double2_pane_g2_cp2

0xc7d4,	// (0x000524fe) list_double2_pane_t1_cp2_ParamLimits

0xc7d4,	// (0x000524fe) list_double2_pane_t1_cp2

0xc7ea,	// (0x00052514) list_double2_pane_t2_cp2_ParamLimits

0xc7ea,	// (0x00052514) list_double2_pane_t2_cp2

0xc7fc,	// (0x00052526) list_double_pane_g1_cp2_ParamLimits

0xc7fc,	// (0x00052526) list_double_pane_g1_cp2

0xc808,	// (0x00052532) list_double_pane_g2_cp2

0xc810,	// (0x0005253a) list_double_pane_t1_cp2_ParamLimits

0xc810,	// (0x0005253a) list_double_pane_t1_cp2

0xc826,	// (0x00052550) list_double_pane_t2_cp2_ParamLimits

0xc826,	// (0x00052550) list_double_pane_t2_cp2

0xc850,	// (0x0005257a) list_single_pane_cp2_g3

0xc860,	// (0x0005258a) list_single_pane_g1_cp2_ParamLimits

0xc860,	// (0x0005258a) list_single_pane_g1_cp2

0xc86c,	// (0x00052596) list_single_pane_g2_cp2

0xc874,	// (0x0005259e) list_single_pane_t1_cp2_ParamLimits

0xc874,	// (0x0005259e) list_single_pane_t1_cp2

0xc88c,	// (0x000525b6) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc88c,	// (0x000525b6) list_single_large_graphic_pane_g1_cp2

0xc89a,	// (0x000525c4) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc89a,	// (0x000525c4) list_single_large_graphic_pane_g2_cp2

0xc8a6,	// (0x000525d0) list_single_large_graphic_pane_g3_cp2

0xc8ae,	// (0x000525d8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc8ae,	// (0x000525d8) list_single_large_graphic_pane_g4_cp1

0xc8c8,	// (0x000525f2) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc8c8,	// (0x000525f2) list_single_large_graphic_pane_t1_cp2

0xd9fa,	// (0x00053724) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xd9fa,	// (0x00053724) list_single_graphic_heading_pane_g1_cp2

0xd9c7,	// (0x000536f1) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd9c7,	// (0x000536f1) list_single_graphic_heading_pane_g4_cp2

0xc86c,	// (0x00052596) list_single_graphic_heading_pane_g5_cp2

0xda06,	// (0x00053730) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xda06,	// (0x00053730) list_single_graphic_heading_pane_t1_cp2

0xda1c,	// (0x00053746) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xda1c,	// (0x00053746) list_single_graphic_heading_pane_t2_cp2

0xd9bb,	// (0x000536e5) list_single_2graphic_pane_g1_cp2_ParamLimits

0xd9bb,	// (0x000536e5) list_single_2graphic_pane_g1_cp2

0xd9c7,	// (0x000536f1) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd9c7,	// (0x000536f1) list_single_2graphic_pane_g2_cp2

0xc86c,	// (0x00052596) list_single_2graphic_pane_g3_cp2

0xd9d8,	// (0x00053702) list_single_2graphic_pane_g4_cp2_ParamLimits

0xd9d8,	// (0x00053702) list_single_2graphic_pane_g4_cp2

0xd9e4,	// (0x0005370e) list_single_2graphic_pane_t1_cp2_ParamLimits

0xd9e4,	// (0x0005370e) list_single_2graphic_pane_t1_cp2

0xb28c,	// (0x00050fb6) list_highlight_pane_g10_cp1

0xd5a3,	// (0x000532cd) list_highlight_pane_g1_cp1

0xd5ab,	// (0x000532d5) list_highlight_pane_g2_cp1

0xd5b3,	// (0x000532dd) list_highlight_pane_g3_cp1

0xd5bb,	// (0x000532e5) list_highlight_pane_g4_cp1

0xd5c3,	// (0x000532ed) list_highlight_pane_g5_cp1

0xd5cb,	// (0x000532f5) list_highlight_pane_g6_cp1

0xd5d3,	// (0x000532fd) list_highlight_pane_g7_cp1

0xd5db,	// (0x00053305) list_highlight_pane_g8_cp1

0xd5e3,	// (0x0005330d) list_highlight_pane_g9_cp1

0x9de1,	// (0x0004fb0b) form_field_slider_pane_t3

0x9df1,	// (0x0004fb1b) form_field_slider_pane_t4

0xd4d7,	// (0x00053201) slider_form_pane_ParamLimits

0xd4d7,	// (0x00053201) slider_form_pane

0xb296,	// (0x00050fc0) control_abbreviations

0xb296,	// (0x00050fc0) control_conventions

0xb296,	// (0x00050fc0) control_definitions

0xb296,	// (0x00050fc0) format_table_attribute

0xdbd1,	// (0x000538fb) bg_popup_preview_window_pane_g9

0xb296,	// (0x00050fc0) format_table_data2

0xb296,	// (0x00050fc0) format_table_data3

0xb296,	// (0x00050fc0) format_table_data_example

0x0008,

0xb296,	// (0x00050fc0) intro_purpose

0xf900,	// (0x0005562a) bg_popup_preview_window_pane_g

0xb296,	// (0x00050fc0) texts_category

0xb296,	// (0x00050fc0) texts_graphics

0xc8de,	// (0x00052608) text_digital

0xc8ed,	// (0x00052617) text_primary

0xc8fc,	// (0x00052626) text_primary_small

0xc90b,	// (0x00052635) text_secondary

0xc91a,	// (0x00052644) text_title

0xe05b,	// (0x00053d85) bg_passive_tab_pane_g1_cp3_srt

0xc5d2,	// (0x000522fc) bg_passive_tab_pane_g2_cp3_srt

0xe064,	// (0x00053d8e) bg_passive_tab_pane_g3_cp3_srt

0xb2e4,	// (0x0005100e) bg_active_tab_pane_cp3_srt_ParamLimits

0xb2e4,	// (0x0005100e) bg_active_tab_pane_cp3_srt

0xe06d,	// (0x00053d97) tabs_4_active_pane_srt_g1

0xa19e,	// (0x0004fec8) tabs_4_active_pane_srt_t1_ParamLimits

0xa19e,	// (0x0004fec8) tabs_4_active_pane_srt_t1

0xe05b,	// (0x00053d85) bg_active_tab_pane_g1_cp3_copy1

0xc5d2,	// (0x000522fc) bg_active_tab_pane_g2_cp3_copy1

0xe064,	// (0x00053d8e) bg_active_tab_pane_g3_cp3_copy1

0xb2f2,	// (0x0005101c) tabs_2_long_active_pane_srt_ParamLimits

0xb2f2,	// (0x0005101c) tabs_2_long_active_pane_srt

0xb2f2,	// (0x0005101c) tabs_2_long_passive_pane_srt_ParamLimits

0xb2f2,	// (0x0005101c) tabs_2_long_passive_pane_srt

0xc039,	// (0x00051d63) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc039,	// (0x00051d63) bg_passive_tab_pane_cp4_srt

0xdf86,	// (0x00053cb0) bg_passive_tab_pane_g1_cp4_srt

0xc5d2,	// (0x000522fc) bg_passive_tab_pane_g2_cp4_srt

0xdf8f,	// (0x00053cb9) bg_passive_tab_pane_g3_cp4_srt

0xb2f2,	// (0x0005101c) bg_active_tab_pane_cp4_srt_ParamLimits

0xb2f2,	// (0x0005101c) bg_active_tab_pane_cp4_srt

0x9fbd,	// (0x0004fce7) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9fbd,	// (0x0004fce7) tabs_2_long_active_pane_srt_t1

0xdf86,	// (0x00053cb0) bg_active_tab_pane_g1_cp4_srt

0xc5d2,	// (0x000522fc) bg_active_tab_pane_g2_cp4_srt

0xdf8f,	// (0x00053cb9) bg_active_tab_pane_g3_cp4_srt

0xb2e4,	// (0x0005100e) tabs_3_long_active_pane_srt_ParamLimits

0xb2e4,	// (0x0005100e) tabs_3_long_active_pane_srt

0xb2e4,	// (0x0005100e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb2e4,	// (0x0005100e) tabs_3_long_passive_pane_cp_srt

0xb2e4,	// (0x0005100e) tabs_3_long_passive_pane_srt_ParamLimits

0xb2e4,	// (0x0005100e) tabs_3_long_passive_pane_srt

0xc039,	// (0x00051d63) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc039,	// (0x00051d63) bg_passive_tab_pane_cp5_srt

0xc619,	// (0x00052343) bg_passive_tab_pane_g1_cp5_srt

0xc5d2,	// (0x000522fc) bg_passive_tab_pane_g2_cp5_srt

0xc622,	// (0x0005234c) bg_passive_tab_pane_g3_cp5_srt

0xb2f2,	// (0x0005101c) bg_active_tab_pane_cp5_srt_ParamLimits

0xb2f2,	// (0x0005101c) bg_active_tab_pane_cp5_srt

0x9fa7,	// (0x0004fcd1) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9fa7,	// (0x0004fcd1) tabs_3_long_active_pane_srt_t1

0xc619,	// (0x00052343) bg_active_tab_pane_g1_cp5_srt

0xc5d2,	// (0x000522fc) bg_active_tab_pane_g2_cp5_srt

0xc622,	// (0x0005234c) bg_active_tab_pane_g3_cp5_srt

0xdf78,	// (0x00053ca2) navi_text_pane_srt_t1

0xdf70,	// (0x00053c9a) navi_icon_pane_srt_g1

0xca18,	// (0x00052742) midp_editing_number_pane_srt

0xc929,	// (0x00052653) midp_ticker_pane_srt

0xca20,	// (0x0005274a) midp_ticker_pane_srt_g1

0xca28,	// (0x00052752) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x000554b9) midp_ticker_pane_srt_g

0xca30,	// (0x0005275a) midp_ticker_pane_srt_t1

0xdf61,	// (0x00053c8b) midp_editing_number_pane_t1_copy1

0x9174,	// (0x0004ee9e) listscroll_midp_pane

0x9174,	// (0x0004ee9e) midp_form_pane

0xc931,	// (0x0005265b) midp_info_popup_window_ParamLimits

0xc931,	// (0x0005265b) midp_info_popup_window

0xbf9a,	// (0x00051cc4) bg_popup_sub_pane_cp50_ParamLimits

0xbf9a,	// (0x00051cc4) bg_popup_sub_pane_cp50

0xd1f4,	// (0x00052f1e) listscroll_midp_info_pane_ParamLimits

0xd1f4,	// (0x00052f1e) listscroll_midp_info_pane

0xd1dc,	// (0x00052f06) listscroll_form_midp_pane_ParamLimits

0xd1dc,	// (0x00052f06) listscroll_form_midp_pane

0xd1e8,	// (0x00052f12) scroll_bar_cp050

0x9dd5,	// (0x0004faff) list_midp_pane

0xe93b,	// (0x00054665) signal_pane_g2_cp

0xd100,	// (0x00052e2a) listscroll_midp_info_pane_t1_ParamLimits

0xd100,	// (0x00052e2a) listscroll_midp_info_pane_t1

0xd118,	// (0x00052e42) listscroll_midp_info_pane_t2_ParamLimits

0xd118,	// (0x00052e42) listscroll_midp_info_pane_t2

0xd164,	// (0x00052e8e) listscroll_midp_info_pane_t3_ParamLimits

0xd164,	// (0x00052e8e) listscroll_midp_info_pane_t3

0xd19e,	// (0x00052ec8) listscroll_midp_info_pane_t4_ParamLimits

0xd19e,	// (0x00052ec8) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x00055565) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x00055565) listscroll_midp_info_pane_t

0xc001,	// (0x00051d2b) scroll_pane_cp21

0xd0a4,	// (0x00052dce) form_midp_field_choice_group_pane

0xd0ad,	// (0x00052dd7) form_midp_field_text_pane

0xd0e6,	// (0x00052e10) form_midp_field_time_pane

0xd0ee,	// (0x00052e18) form_midp_gauge_slider_pane

0xd0f7,	// (0x00052e21) form_midp_gauge_wait_pane

0xb296,	// (0x00050fc0) form_midp_image_pane

0x8c1e,	// (0x0004e948) list_single_midp_pane_ParamLimits

0x8c1e,	// (0x0004e948) list_single_midp_pane

0x9db1,	// (0x0004fadb) form_midp_field_text_pane_t1

0xcf4b,	// (0x00052c75) input_focus_pane_cp050

0xd093,	// (0x00052dbd) list_midp_form_text_pane

0xd062,	// (0x00052d8c) form_midp_field_choice_group_pane_t1

0xd070,	// (0x00052d9a) input_focus_pane_cp051

0xd084,	// (0x00052dae) list_midp_choice_pane

0xb296,	// (0x00050fc0) status_idle_pane

0xd046,	// (0x00052d70) form_midp_field_time_pane_t1

0xb28c,	// (0x00050fb6) wait_anim_pane_g2_copy1

0xd054,	// (0x00052d7e) form_midp_field_time_pane_t2

0x0001,

0xc98a,	// (0x000526b4) aid_navinavi_width_2_pane

0xf836,	// (0x00055560) form_midp_field_time_pane_t

0xb296,	// (0x00050fc0) input_focus_pane_cp052

0xb296,	// (0x00050fc0) bg_input_focus_pane_cp040

0xd022,	// (0x00052d4c) form_midp_gauge_slider_pane_t1

0xd030,	// (0x00052d5a) form_midp_gauge_slider_pane_t2

0x9d95,	// (0x0004fabf) form_midp_gauge_slider_pane_t3

0x9da3,	// (0x0004facd) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x00055557) form_midp_gauge_slider_pane_t

0xd03e,	// (0x00052d68) form_midp_slider_pane

0xb2f2,	// (0x0005101c) bg_input_focus_pane_cp041_ParamLimits

0xb2f2,	// (0x0005101c) bg_input_focus_pane_cp041

0xcfef,	// (0x00052d19) form_midp_gauge_wait_pane_t1_ParamLimits

0xcfef,	// (0x00052d19) form_midp_gauge_wait_pane_t1

0xd001,	// (0x00052d2b) form_midp_gauge_wait_pane_t2_ParamLimits

0xd001,	// (0x00052d2b) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x00055552) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x00055552) form_midp_gauge_wait_pane_t

0xd013,	// (0x00052d3d) form_midp_wait_pane_ParamLimits

0xd013,	// (0x00052d3d) form_midp_wait_pane

0xcfb9,	// (0x00052ce3) form_midp_image_pane_g1

0xcfc2,	// (0x00052cec) form_midp_image_pane_t1

0xcfd1,	// (0x00052cfb) form_midp_image_pane_t2

0xcfe0,	// (0x00052d0a) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x0005554b) form_midp_image_pane_t

0xcfb0,	// (0x00052cda) list_single_midp_pane_g1

0x2f96,	// (0x00048cc0) list_single_midp_pane_t1

0x9d7e,	// (0x0004faa8) list_midp_form_item_pane_ParamLimits

0x9d7e,	// (0x0004faa8) list_midp_form_item_pane

0xc944,	// (0x0005266e) list_midp_form_item_pane_t1

0xc953,	// (0x0005267d) midp_ticker_pane_g1

0xc95f,	// (0x00052689) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x0005549f) midp_ticker_pane_g

0x9220,	// (0x0004ef4a) midp_ticker_pane_t1

0xa126,	// (0x0004fe50) midp_editing_number_pane_t1

0xdfef,	// (0x00053d19) midp_editing_number_pane

0xdffe,	// (0x00053d28) midp_ticker_pane

0xdf51,	// (0x00053c7b) ai_message_heading_pane

0xb296,	// (0x00050fc0) bg_popup_window_pane_cp14

0xdf59,	// (0x00053c83) listscroll_ai_message_pane

0xdedb,	// (0x00053c05) ai_message_heading_pane_g1_ParamLimits

0xdedb,	// (0x00053c05) ai_message_heading_pane_g1

0xdee7,	// (0x00053c11) ai_message_heading_pane_g2_ParamLimits

0xdee7,	// (0x00053c11) ai_message_heading_pane_g2

0xdef3,	// (0x00053c1d) ai_message_heading_pane_g3_ParamLimits

0xdef3,	// (0x00053c1d) ai_message_heading_pane_g3

0xdeff,	// (0x00053c29) ai_message_heading_pane_g4_ParamLimits

0xdeff,	// (0x00053c29) ai_message_heading_pane_g4

0x0003,

0xf962,	// (0x0005568c) ai_message_heading_pane_g_ParamLimits

0xf962,	// (0x0005568c) ai_message_heading_pane_g

0xdf0b,	// (0x00053c35) ai_message_heading_pane_t1_ParamLimits

0xdf0b,	// (0x00053c35) ai_message_heading_pane_t1

0xdf25,	// (0x00053c4f) ai_message_heading_pane_t2_ParamLimits

0xdf25,	// (0x00053c4f) ai_message_heading_pane_t2

0x0001,

0xf96b,	// (0x00055695) ai_message_heading_pane_t_ParamLimits

0xf96b,	// (0x00055695) ai_message_heading_pane_t

0xdf37,	// (0x00053c61) bg_popup_heading_pane_cp1_ParamLimits

0xdf37,	// (0x00053c61) bg_popup_heading_pane_cp1

0xdec9,	// (0x00053bf3) list_ai_message_pane_ParamLimits

0xdec9,	// (0x00053bf3) list_ai_message_pane

0xc001,	// (0x00051d2b) scroll_pane_cp10

0xde65,	// (0x00053b8f) list_ai_message_pane_g1

0xde6d,	// (0x00053b97) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x00055669) list_ai_message_pane_g

0xde75,	// (0x00053b9f) list_ai_message_pane_t1_ParamLimits

0xde75,	// (0x00053b9f) list_ai_message_pane_t1

0xde8a,	// (0x00053bb4) list_ai_message_pane_t2_ParamLimits

0xde8a,	// (0x00053bb4) list_ai_message_pane_t2

0xde9f,	// (0x00053bc9) list_ai_message_pane_t3_ParamLimits

0xde9f,	// (0x00053bc9) list_ai_message_pane_t3

0xdeb4,	// (0x00053bde) list_ai_message_pane_t4_ParamLimits

0xdeb4,	// (0x00053bde) list_ai_message_pane_t4

0x0003,

0xf944,	// (0x0005566e) list_ai_message_pane_t_ParamLimits

0xf944,	// (0x0005566e) list_ai_message_pane_t

0x9f82,	// (0x0004fcac) cell_ai_soft_ind_pane_ParamLimits

0x9f82,	// (0x0004fcac) cell_ai_soft_ind_pane

0xc96b,	// (0x00052695) cell_ai_soft_ind_pane_g1_ParamLimits

0xc96b,	// (0x00052695) cell_ai_soft_ind_pane_g1

0xb296,	// (0x00050fc0) grid_highlight_cp1

0xc978,	// (0x000526a2) text_secondary_cp56_ParamLimits

0xc978,	// (0x000526a2) text_secondary_cp56

0xde3a,	// (0x00053b64) example_general_pane_ParamLimits

0xde3a,	// (0x00053b64) example_general_pane

0xde46,	// (0x00053b70) example_parent_pane_g1_ParamLimits

0xde46,	// (0x00053b70) example_parent_pane_g1

0xde52,	// (0x00053b7c) example_parent_pane_t1_ParamLimits

0xde52,	// (0x00053b7c) example_parent_pane_t1

0x9651,	// (0x0004f37b) popup_preview_text_window_ParamLimits

0x9651,	// (0x0004f37b) popup_preview_text_window

0xc858,	// (0x00052582) list_single_pane_cp2_g4

0xb829,	// (0x00051553) bg_popup_preview_window_pane_ParamLimits

0xb829,	// (0x00051553) bg_popup_preview_window_pane

0xdbd9,	// (0x00053903) popup_preview_text_window_t1_ParamLimits

0xdbd9,	// (0x00053903) popup_preview_text_window_t1

0xdbf7,	// (0x00053921) popup_preview_text_window_t2_ParamLimits

0xdbf7,	// (0x00053921) popup_preview_text_window_t2

0xdc40,	// (0x0005396a) popup_preview_text_window_t3_ParamLimits

0xdc40,	// (0x0005396a) popup_preview_text_window_t3

0xdc85,	// (0x000539af) popup_preview_text_window_t4_ParamLimits

0xdc85,	// (0x000539af) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x0005563d) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x0005563d) popup_preview_text_window_t

0xdd03,	// (0x00053a2d) scroll_pane_cp11

0xce5b,	// (0x00052b85) bg_popup_preview_window_pane_g1

0xdb99,	// (0x000538c3) bg_popup_preview_window_pane_g2

0xdba1,	// (0x000538cb) bg_popup_preview_window_pane_g3

0xdba9,	// (0x000538d3) bg_popup_preview_window_pane_g4

0xdbb1,	// (0x000538db) bg_popup_preview_window_pane_g5

0xdbb9,	// (0x000538e3) bg_popup_preview_window_pane_g6

0xdbc1,	// (0x000538eb) bg_popup_preview_window_pane_g7

0xdbc9,	// (0x000538f3) bg_popup_preview_window_pane_g8

0x04f3,	// (0x0004621d) aid_popup_width_pane

0x95cd,	// (0x0004f2f7) popup_midp_note_alarm_window_ParamLimits

0x95cd,	// (0x0004f2f7) popup_midp_note_alarm_window

0xbee2,	// (0x00051c0c) data_form_pane_ParamLimits

0x8038,	// (0x0004dd62) form_field_data_pane_g1

0x8042,	// (0x0004dd6c) form_field_data_pane_t1_ParamLimits

0xbeee,	// (0x00051c18) input_focus_pane_ParamLimits

0xbefc,	// (0x00051c26) data_form_wide_pane_ParamLimits

0x0ea7,	// (0x00046bd1) form_field_data_wide_pane_g1

0x0eb3,	// (0x00046bdd) form_field_data_wide_pane_t1_ParamLimits

0xba1c,	// (0x00051746) input_focus_pane_cp6_ParamLimits

0x8fb2,	// (0x0004ecdc) input_popup_find_pane_g1_ParamLimits

0x8fb2,	// (0x0004ecdc) input_popup_find_pane_g1

0x0fcd,	// (0x00046cf7) aid_navi_side_left_pane

0x0fe2,	// (0x00046d0c) aid_navi_side_right_pane

0xd69e,	// (0x000533c8) bg_popup_window_pane_cp30_ParamLimits

0xd69e,	// (0x000533c8) bg_popup_window_pane_cp30

0xd718,	// (0x00053442) popup_midp_note_alarm_window_g1_ParamLimits

0xd718,	// (0x00053442) popup_midp_note_alarm_window_g1

0xd748,	// (0x00053472) popup_midp_note_alarm_window_t1_ParamLimits

0xd748,	// (0x00053472) popup_midp_note_alarm_window_t1

0xd7e9,	// (0x00053513) popup_midp_note_alarm_window_t2_ParamLimits

0xd7e9,	// (0x00053513) popup_midp_note_alarm_window_t2

0xd897,	// (0x000535c1) popup_midp_note_alarm_window_t3_ParamLimits

0xd897,	// (0x000535c1) popup_midp_note_alarm_window_t3

0xd8bf,	// (0x000535e9) popup_midp_note_alarm_window_t4_ParamLimits

0xd8bf,	// (0x000535e9) popup_midp_note_alarm_window_t4

0xd8df,	// (0x00053609) popup_midp_note_alarm_window_t5_ParamLimits

0xd8df,	// (0x00053609) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x000555da) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x000555da) popup_midp_note_alarm_window_t

0xd98b,	// (0x000536b5) wait_bar_pane_cp1_ParamLimits

0xd98b,	// (0x000536b5) wait_bar_pane_cp1

0xb296,	// (0x00050fc0) wait_anim_pane_copy1

0xb296,	// (0x00050fc0) wait_border_pane_copy1

0xd398,	// (0x000530c2) wait_border_pane_g1_copy1

0x29a7,	// (0x000486d1) form_field_popup_pane_g1

0x805c,	// (0x0004dd86) form_field_popup_pane_t1_ParamLimits

0xbeee,	// (0x00051c18) input_focus_pane_cp7_ParamLimits

0xbf1c,	// (0x00051c46) list_form_pane_ParamLimits

0x29c9,	// (0x000486f3) form_field_popup_wide_pane_g1

0x29d1,	// (0x000486fb) form_field_popup_wide_pane_t1_ParamLimits

0xbeee,	// (0x00051c18) input_focus_pane_cp8_ParamLimits

0xbf28,	// (0x00051c52) list_form_wide_pane_ParamLimits

0xe094,	// (0x00053dbe) aid_size_cell_graphic_pane

0x80db,	// (0x0004de05) data_form_pane_t1_ParamLimits

0x8c4b,	// (0x0004e975) data_form_wide_pane_t1_ParamLimits

0x9a06,	// (0x0004f730) bg_status_flat_pane

0x8942,	// (0x0004e66c) title_pane_t1_ParamLimits

0xb2ac,	// (0x00050fd6) title_pane_t2_ParamLimits

0xb2d2,	// (0x00050ffc) title_pane_t3_ParamLimits

0xf573,	// (0x0005529d) title_pane_t_ParamLimits

0xc3af,	// (0x000520d9) level_1_signal_ParamLimits

0xc3bc,	// (0x000520e6) level_2_signal_ParamLimits

0xc3c9,	// (0x000520f3) level_3_signal_ParamLimits

0xc3d6,	// (0x00052100) level_4_signal_ParamLimits

0xc3e3,	// (0x0005210d) level_5_signal_ParamLimits

0xc3f0,	// (0x0005211a) level_6_signal_ParamLimits

0xc3fd,	// (0x00052127) level_7_signal_ParamLimits

0xc3af,	// (0x000520d9) level_1_battery_ParamLimits

0xc3bc,	// (0x000520e6) level_2_battery_ParamLimits

0xc3c9,	// (0x000520f3) level_3_battery_ParamLimits

0xc3d6,	// (0x00052100) level_4_battery_ParamLimits

0xc3e3,	// (0x0005210d) level_5_battery_ParamLimits

0xc3f0,	// (0x0005211a) level_6_battery_ParamLimits

0xc3fd,	// (0x00052127) level_7_battery_ParamLimits

0xd5a3,	// (0x000532cd) bg_status_flat_pane_g1

0xd5ab,	// (0x000532d5) bg_status_flat_pane_g2

0xd5b3,	// (0x000532dd) bg_status_flat_pane_g3

0xd5bb,	// (0x000532e5) bg_status_flat_pane_g4

0xd5c3,	// (0x000532ed) bg_status_flat_pane_g5

0xd5cb,	// (0x000532f5) bg_status_flat_pane_g6

0xd5d3,	// (0x000532fd) bg_status_flat_pane_g7

0x89d6,	// (0x0004e700) tabs_3_active_pane_t1_ParamLimits

0x89d6,	// (0x0004e700) tabs_3_passive_pane_t1_ParamLimits

0x89f0,	// (0x0004e71a) tabs_4_active_pane_t1_ParamLimits

0x89f0,	// (0x0004e71a) tabs_4_1_passive_pane_t1_ParamLimits

0x8fc8,	// (0x0004ecf2) tabs_2_active_pane_t1_ParamLimits

0x8fc8,	// (0x0004ecf2) tabs_2_passive_pane_t1_ParamLimits

0xb2f2,	// (0x0005101c) bg_active_tab_pane_cp4_ParamLimits

0x8fda,	// (0x0004ed04) tabs_2_long_active_pane_t1_ParamLimits

0xc039,	// (0x00051d63) bg_passive_tab_pane_cp4_ParamLimits

0x1529,	// (0x00047253) list_single_midp_graphic_pane_t1_ParamLimits

0xb2f2,	// (0x0005101c) bg_active_tab_pane_cp5_ParamLimits

0x8fed,	// (0x0004ed17) tabs_3_long_active_pane_t1_ParamLimits

0xc039,	// (0x00051d63) bg_passive_tab_pane_cp5_ParamLimits

0x1529,	// (0x00047253) list_single_midp_graphic_pane_t1

0x9a06,	// (0x0004f730) bg_status_flat_pane_ParamLimits

0xcd2e,	// (0x00052a58) indicator_pane_cp2_ParamLimits

0xcd2e,	// (0x00052a58) indicator_pane_cp2

0x9b7d,	// (0x0004f8a7) navi_pane_srt_ParamLimits

0x9b7d,	// (0x0004f8a7) navi_pane_srt

0xcd56,	// (0x00052a80) popup_clock_digital_analogue_window_cp1

0xb336,	// (0x00051060) indicator_pane_t1

0xc929,	// (0x00052653) copy_highlight_pane

0xc929,	// (0x00052653) cursor_graphics_pane

0xc929,	// (0x00052653) graphic_within_text_pane

0xc929,	// (0x00052653) link_highlight_pane

0xdcc6,	// (0x000539f0) popup_preview_text_window_t5_ParamLimits

0xdcc6,	// (0x000539f0) popup_preview_text_window_t5

0xc992,	// (0x000526bc) cursor_digital_pane

0xc992,	// (0x000526bc) cursor_primary_pane

0xc9a3,	// (0x000526cd) cursor_primary_small_pane

0xc9ab,	// (0x000526d5) cursor_secondary_pane

0xc9b3,	// (0x000526dd) cursor_title_pane

0xc992,	// (0x000526bc) link_highlight_digital_pane

0xc99a,	// (0x000526c4) link_highlight_primary_pane

0xc9a3,	// (0x000526cd) link_highlight_primary_small_pane

0xc9ab,	// (0x000526d5) link_highlight_secondary_pane

0xc9b3,	// (0x000526dd) link_highlight_title_pane

0xc992,	// (0x000526bc) copy_highlight_digital_pane

0xc992,	// (0x000526bc) copy_highlight_primary_pane

0xc9a3,	// (0x000526cd) copy_highlight_primary_small_pane

0xc9ab,	// (0x000526d5) copy_highlight_secondary_pane

0xc9b3,	// (0x000526dd) copy_highlight_title_pane

0xc9ab,	// (0x000526d5) graphic_text_digital_pane

0xd623,	// (0x0005334d) graphic_text_primary_pane

0xd62c,	// (0x00053356) graphic_text_primary_small_pane

0xc9a3,	// (0x000526cd) graphic_text_secondary_pane

0xc992,	// (0x000526bc) graphic_text_title_pane

0x9232,	// (0x0004ef5c) cursor_primary_pane_g1

0xd615,	// (0x0005333f) cursor_text_primary_t1

0x9e15,	// (0x0004fb3f) cursor_primary_small_pane_g1

0xd607,	// (0x00053331) cursor_text_primary_small_t1

0x9e0b,	// (0x0004fb35) cursor_primary_small_pane_g1_copy1

0xd5f9,	// (0x00053323) cursor_text_primary_small_t1_copy1

0xd5eb,	// (0x00053315) cursor_text_title_t1

0x9e01,	// (0x0004fb2b) cursor_title_pane_g1

0x9232,	// (0x0004ef5c) cursor_digital_pane_g1

0xc9bb,	// (0x000526e5) cursor_text_digital_t1

0xd58c,	// (0x000532b6) link_highlight_primary_pane_g1

0xd594,	// (0x000532be) link_highlight_primary_pane_t1

0xc9c9,	// (0x000526f3) link_highlight_primary_small_pane_g1

0xc9d1,	// (0x000526fb) link_highlight_primary_small_pane_t1

0xc9c9,	// (0x000526f3) link_highlight_secondary_pane_g1

0xc9e0,	// (0x0005270a) link_highlight_secondary_pane_t1

0xd500,	// (0x0005322a) link_highlight_title_pane_g1

0xd508,	// (0x00053232) link_highlight_title_pane_t1

0xd4e9,	// (0x00053213) link_highlight_digital_pane_g1

0xd4f1,	// (0x0005321b) link_highlight_digital_pane_t1

0xd3dd,	// (0x00053107) copy_highlight_primary_pane_g1

0xd3e5,	// (0x0005310f) copy_highlight_primary_pane_t1

0xd3b7,	// (0x000530e1) copy_highlight_primary_small_pane_g1

0xd3ce,	// (0x000530f8) copy_highlight_primary_small_pane_t1

0xc9ef,	// (0x00052719) copy_highlight_secondary_pane_g1

0xc9f7,	// (0x00052721) copy_highlight_secondary_pane_t1

0xd3b7,	// (0x000530e1) copy_highlight_title_pane_g1

0xd3bf,	// (0x000530e9) copy_highlight_title_pane_t1

0xd3dd,	// (0x00053107) copy_highlight_digital_pane_g1

0xe22a,	// (0x00053f54) copy_highlight_digital_pane_t1

0xe17e,	// (0x00053ea8) graphic_text_primary_pane_g1

0xe20e,	// (0x00053f38) graphic_text_primary_pane_t1

0xe21c,	// (0x00053f46) graphic_text_primary_pane_t2

0x0001,

0xf9df,	// (0x00055709) graphic_text_primary_pane_t

0xe1ea,	// (0x00053f14) graphic_text_primary_small_pane_g1

0xe1f2,	// (0x00053f1c) graphic_text_primary_small_pane_t1

0xe200,	// (0x00053f2a) graphic_text_primary_small_pane_t2

0x0001,

0xf9da,	// (0x00055704) graphic_text_primary_small_pane_t

0xe1c6,	// (0x00053ef0) graphic_text_secondary_pane_g1

0xe1ce,	// (0x00053ef8) graphic_text_secondary_pane_t1

0xe1dc,	// (0x00053f06) graphic_text_secondary_pane_t2

0x0001,

0xf9d5,	// (0x000556ff) graphic_text_secondary_pane_t

0xe1a2,	// (0x00053ecc) graphic_text_title_pane_g1

0xe1aa,	// (0x00053ed4) graphic_text_title_pane_t1

0xe1b8,	// (0x00053ee2) graphic_text_title_pane_t2

0x0001,

0xf9d0,	// (0x000556fa) graphic_text_title_pane_t

0xe17e,	// (0x00053ea8) graphic_text_digital_pane_g1

0xe186,	// (0x00053eb0) graphic_text_digital_pane_t1

0xe194,	// (0x00053ebe) graphic_text_digital_pane_t2

0x0001,

0xf9cb,	// (0x000556f5) graphic_text_digital_pane_t

0xb2f2,	// (0x0005101c) navi_icon_pane_srt_ParamLimits

0xb2f2,	// (0x0005101c) navi_icon_pane_srt

0xb296,	// (0x00050fc0) navi_midp_pane_srt

0xb296,	// (0x00050fc0) navi_navi_pane_srt

0xb2f2,	// (0x0005101c) navi_text_pane_srt_ParamLimits

0xb2f2,	// (0x0005101c) navi_text_pane_srt

0xe149,	// (0x00053e73) navi_navi_icon_text_pane_srt

0xe151,	// (0x00053e7b) navi_navi_pane_srt_g1_ParamLimits

0xe151,	// (0x00053e7b) navi_navi_pane_srt_g1

0xe163,	// (0x00053e8d) navi_navi_pane_srt_g2_ParamLimits

0xe163,	// (0x00053e8d) navi_navi_pane_srt_g2

0x0001,

0xf9c6,	// (0x000556f0) navi_navi_pane_srt_g_ParamLimits

0xf9c6,	// (0x000556f0) navi_navi_pane_srt_g

0xe175,	// (0x00053e9f) navi_navi_tabs_pane_srt

0xe149,	// (0x00053e73) navi_navi_text_pane_srt

0xe149,	// (0x00053e73) navi_navi_volume_pane_srt

0xe13a,	// (0x00053e64) navi_navi_text_pane_srt_t1

0x18a9,	// (0x000475d3) navi_navi_volume_pane_srt_g1

0x18b1,	// (0x000475db) volume_small_pane_srt_ParamLimits

0x18b1,	// (0x000475db) volume_small_pane_srt

0x12ad,	// (0x00046fd7) volume_small_pane_srt_g1_ParamLimits

0x12ad,	// (0x00046fd7) volume_small_pane_srt_g1

0x12bd,	// (0x00046fe7) volume_small_pane_srt_g2_ParamLimits

0x12bd,	// (0x00046fe7) volume_small_pane_srt_g2

0x12ce,	// (0x00046ff8) volume_small_pane_srt_g3_ParamLimits

0x12ce,	// (0x00046ff8) volume_small_pane_srt_g3

0x12df,	// (0x00047009) volume_small_pane_srt_g4_ParamLimits

0x12df,	// (0x00047009) volume_small_pane_srt_g4

0x12f0,	// (0x0004701a) volume_small_pane_srt_g5_ParamLimits

0x12f0,	// (0x0004701a) volume_small_pane_srt_g5

0x1301,	// (0x0004702b) volume_small_pane_srt_g6_ParamLimits

0x1301,	// (0x0004702b) volume_small_pane_srt_g6

0x1312,	// (0x0004703c) volume_small_pane_srt_g7_ParamLimits

0x1312,	// (0x0004703c) volume_small_pane_srt_g7

0x1323,	// (0x0004704d) volume_small_pane_srt_g8_ParamLimits

0x1323,	// (0x0004704d) volume_small_pane_srt_g8

0x1334,	// (0x0004705e) volume_small_pane_srt_g9_ParamLimits

0x1334,	// (0x0004705e) volume_small_pane_srt_g9

0x1345,	// (0x0004706f) volume_small_pane_srt_g10_ParamLimits

0x1345,	// (0x0004706f) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x000554a4) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x000554a4) volume_small_pane_srt_g

0xb8d2,	// (0x000515fc) query_popup_data_pane_cp2

0xe120,	// (0x00053e4a) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xe120,	// (0x00053e4a) navi_navi_icon_text_pane_srt_t1

0xd623,	// (0x0005334d) navi_tabs_2_long_pane_srt

0xd623,	// (0x0005334d) navi_tabs_2_pane_srt

0xd623,	// (0x0005334d) navi_tabs_3_long_pane_srt

0xd623,	// (0x0005334d) navi_tabs_3_pane_srt

0xd623,	// (0x0005334d) navi_tabs_4_pane_srt

0x1889,	// (0x000475b3) tabs_2_active_pane_srt_ParamLimits

0x1889,	// (0x000475b3) tabs_2_active_pane_srt

0x1899,	// (0x000475c3) tabs_2_passive_pane_srt_ParamLimits

0x1899,	// (0x000475c3) tabs_2_passive_pane_srt

0xcf4b,	// (0x00052c75) bg_passive_tab_pane_cp1_srt_ParamLimits

0xcf4b,	// (0x00052c75) bg_passive_tab_pane_cp1_srt

0xe0fe,	// (0x00053e28) bg_passive_tab_pane_g1_cp1_srt

0xc5d2,	// (0x000522fc) bg_passive_tab_pane_g2_cp1_srt

0xe107,	// (0x00053e31) bg_passive_tab_pane_g3_cp1_srt

0xb2e4,	// (0x0005100e) bg_active_tab_pane_cp1_srt_ParamLimits

0xb2e4,	// (0x0005100e) bg_active_tab_pane_cp1_srt

0xe110,	// (0x00053e3a) tabs_2_active_pane_srt_g1

0xa21b,	// (0x0004ff45) tabs_2_active_pane_srt_t1_ParamLimits

0xa21b,	// (0x0004ff45) tabs_2_active_pane_srt_t1

0xe0fe,	// (0x00053e28) bg_active_tab_pane_g1_cp1_srt

0xc5d2,	// (0x000522fc) bg_active_tab_pane_g2_cp1_srt

0xe107,	// (0x00053e31) bg_active_tab_pane_g3_cp1_srt

0x1856,	// (0x00047580) tabs_3_active_pane_srt_ParamLimits

0x1856,	// (0x00047580) tabs_3_active_pane_srt

0x1867,	// (0x00047591) tabs_3_passive_pane_cp_srt_ParamLimits

0x1867,	// (0x00047591) tabs_3_passive_pane_cp_srt

0x1878,	// (0x000475a2) tabs_3_passive_pane_srt_ParamLimits

0x1878,	// (0x000475a2) tabs_3_passive_pane_srt

0xcf4b,	// (0x00052c75) bg_passive_tab_pane_cp2_srt_ParamLimits

0xcf4b,	// (0x00052c75) bg_passive_tab_pane_cp2_srt

0xca06,	// (0x00052730) bg_passive_tab_pane_g1_cp2_srt

0xc5d2,	// (0x000522fc) bg_passive_tab_pane_g2_cp2_srt

0xca0f,	// (0x00052739) bg_passive_tab_pane_g3_cp2_srt

0xb2e4,	// (0x0005100e) bg_active_tab_pane_cp2_srt_ParamLimits

0xb2e4,	// (0x0005100e) bg_active_tab_pane_cp2_srt

0xe0f6,	// (0x00053e20) tabs_3_active_pane_srt_g1

0xa205,	// (0x0004ff2f) tabs_3_active_pane_srt_t1_ParamLimits

0xa205,	// (0x0004ff2f) tabs_3_active_pane_srt_t1

0xca06,	// (0x00052730) bg_active_tab_pane_g1_cp2_srt

0xc5d2,	// (0x000522fc) bg_active_tab_pane_g2_cp2_srt

0xca0f,	// (0x00052739) bg_active_tab_pane_g3_cp2_srt

0x180e,	// (0x00047538) tabs_4_active_pane_srt_ParamLimits

0x180e,	// (0x00047538) tabs_4_active_pane_srt

0x1820,	// (0x0004754a) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1820,	// (0x0004754a) tabs_4_passive_pane_cp2_srt

0xcb33,	// (0x0005285d) aid_size_cell_toolbar

0xd680,	// (0x000533aa) main_idle_act_pane_ParamLimits

0xcbf5,	// (0x0005291f) popup_large_graphic_colour_window_ParamLimits

0x98d1,	// (0x0004f5fb) popup_toolbar_window_ParamLimits

0x98d1,	// (0x0004f5fb) popup_toolbar_window

0xe011,	// (0x00053d3b) list_single_graphic_2heading_pane_ParamLimits

0xe011,	// (0x00053d3b) list_single_graphic_2heading_pane

0xc1e3,	// (0x00051f0d) aid_size_cell_apps_grid_lsc_pane

0xc1f5,	// (0x00051f1f) aid_size_cell_apps_grid_prt_pane

0xc039,	// (0x00051d63) bg_wml_button_pane_cp1_ParamLimits

0xc039,	// (0x00051d63) bg_wml_button_pane_cp1

0x9db1,	// (0x0004fadb) form_midp_field_text_pane_t1_ParamLimits

0xcf4b,	// (0x00052c75) input_focus_pane_cp050_ParamLimits

0xd093,	// (0x00052dbd) list_midp_form_text_pane_ParamLimits

0xd070,	// (0x00052d9a) input_focus_pane_cp051_ParamLimits

0xd084,	// (0x00052dae) list_midp_choice_pane_ParamLimits

0x9d46,	// (0x0004fa70) list_single_2graphic_pane_cp3_ParamLimits

0x9d46,	// (0x0004fa70) list_single_2graphic_pane_cp3

0x9d5c,	// (0x0004fa86) list_single_midp_graphic_pane_ParamLimits

0x9d5c,	// (0x0004fa86) list_single_midp_graphic_pane

0x047b,	// (0x000461a5) list_single_graphic_2heading_pane_g1_ParamLimits

0x047b,	// (0x000461a5) list_single_graphic_2heading_pane_g1

0x0487,	// (0x000461b1) list_single_graphic_2heading_pane_g4_ParamLimits

0x0487,	// (0x000461b1) list_single_graphic_2heading_pane_g4

0x0493,	// (0x000461bd) list_single_graphic_2heading_pane_g5_ParamLimits

0x0493,	// (0x000461bd) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x000554f7) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x000554f7) list_single_graphic_2heading_pane_g

0x049f,	// (0x000461c9) list_single_graphic_2heading_pane_t1_ParamLimits

0x049f,	// (0x000461c9) list_single_graphic_2heading_pane_t1

0x04b3,	// (0x000461dd) list_single_graphic_2heading_pane_t2_ParamLimits

0x04b3,	// (0x000461dd) list_single_graphic_2heading_pane_t2

0x04cf,	// (0x000461f9) list_single_graphic_2heading_pane_t3_ParamLimits

0x04cf,	// (0x000461f9) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x000554fe) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x000554fe) list_single_graphic_2heading_pane_t

0xcd99,	// (0x00052ac3) bg_popup_sub_pane_cp2

0xcdc3,	// (0x00052aed) grid_toobar_pane

0x149a,	// (0x000471c4) cell_toolbar_pane_ParamLimits

0x149a,	// (0x000471c4) cell_toolbar_pane

0xcdff,	// (0x00052b29) cell_toolbar_pane_g1_ParamLimits

0xcdff,	// (0x00052b29) cell_toolbar_pane_g1

0xce13,	// (0x00052b3d) cell_toolbar_pane_g2_ParamLimits

0xce13,	// (0x00052b3d) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x0005550c) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x0005550c) cell_toolbar_pane_g

0xce35,	// (0x00052b5f) grid_highlight_pane_cp2_ParamLimits

0xce35,	// (0x00052b5f) grid_highlight_pane_cp2

0xce4f,	// (0x00052b79) toolbar_button_pane

0xce5b,	// (0x00052b85) toolbar_button_pane_g1

0xce63,	// (0x00052b8d) toolbar_button_pane_g2

0xce6b,	// (0x00052b95) toolbar_button_pane_g3

0xce73,	// (0x00052b9d) toolbar_button_pane_g4

0xce7b,	// (0x00052ba5) toolbar_button_pane_g5

0xce83,	// (0x00052bad) toolbar_button_pane_g6

0xce8b,	// (0x00052bb5) toolbar_button_pane_g7

0xce93,	// (0x00052bbd) toolbar_button_pane_g8

0xce9b,	// (0x00052bc5) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x00055511) toolbar_button_pane_g

0x14d2,	// (0x000471fc) list_single_2graphic_pane_g1_cp3_ParamLimits

0x14d2,	// (0x000471fc) list_single_2graphic_pane_g1_cp3

0x82bd,	// (0x0004dfe7) list_single_2graphic_pane_g2_cp3_ParamLimits

0x82bd,	// (0x0004dfe7) list_single_2graphic_pane_g2_cp3

0x14ef,	// (0x00047219) list_single_2graphic_pane_g3_cp3

0x14f7,	// (0x00047221) list_single_2graphic_pane_g4_cp3_ParamLimits

0x14f7,	// (0x00047221) list_single_2graphic_pane_g4_cp3

0x1503,	// (0x0004722d) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1503,	// (0x0004722d) list_single_2graphic_pane_t1_cp3

0x151d,	// (0x00047247) list_single_midp_graphic_pane_g2_ParamLimits

0x151d,	// (0x00047247) list_single_midp_graphic_pane_g2

0x2e8c,	// (0x00048bb6) aid_zoom_text_primary

0x2e94,	// (0x00048bbe) aid_zoom_text_secondary

0xcac3,	// (0x000527ed) status_small_pane_g7_ParamLimits

0xcac3,	// (0x000527ed) status_small_pane_g7

0xcae6,	// (0x00052810) status_small_pane_t1_ParamLimits

0x891e,	// (0x0004e648) title_pane_g2

0x0003,

0xf56a,	// (0x00055294) title_pane_g

0x8eb5,	// (0x0004ebdf) aid_size_cell_colour_1_pane_ParamLimits

0x8eb5,	// (0x0004ebdf) aid_size_cell_colour_1_pane

0x8ec9,	// (0x0004ebf3) aid_size_cell_colour_2_pane_ParamLimits

0x8ec9,	// (0x0004ebf3) aid_size_cell_colour_2_pane

0x8edd,	// (0x0004ec07) aid_size_cell_colour_3_pane_ParamLimits

0x8edd,	// (0x0004ec07) aid_size_cell_colour_3_pane

0x8ef1,	// (0x0004ec1b) aid_size_cell_colour_4_pane_ParamLimits

0x8ef1,	// (0x0004ec1b) aid_size_cell_colour_4_pane

0x0f09,	// (0x00046c33) title_pane_stacon_g1_ParamLimits

0x0f09,	// (0x00046c33) title_pane_stacon_g1

0xd43c,	// (0x00053166) popup_note_wait_window_g3_ParamLimits

0xd43c,	// (0x00053166) popup_note_wait_window_g3

0xd4b2,	// (0x000531dc) popup_note_wait_window_t5_ParamLimits

0xd4b2,	// (0x000531dc) popup_note_wait_window_t5

0xb296,	// (0x00050fc0) main_feb_china_hwr_fs_writing_pane

0x92d1,	// (0x0004effb) popup_feb_china_hwr_fs_window_ParamLimits

0x92d1,	// (0x0004effb) popup_feb_china_hwr_fs_window

0x82ce,	// (0x0004dff8) aid_size_cell_hwr_fs_ParamLimits

0x82ce,	// (0x0004dff8) aid_size_cell_hwr_fs

0xcf4b,	// (0x00052c75) bg_popup_sub_pane_cp3_ParamLimits

0xcf4b,	// (0x00052c75) bg_popup_sub_pane_cp3

0x82e3,	// (0x0004e00d) grid_hwr_fs_pane_ParamLimits

0x82e3,	// (0x0004e00d) grid_hwr_fs_pane

0x156c,	// (0x00047296) linegrid_hwr_fs_pane_ParamLimits

0x156c,	// (0x00047296) linegrid_hwr_fs_pane

0x82fb,	// (0x0004e025) cell_hwr_fs_pane_ParamLimits

0x82fb,	// (0x0004e025) cell_hwr_fs_pane

0xcf57,	// (0x00052c81) linegrid_hwr_fs_pane_g1_ParamLimits

0xcf57,	// (0x00052c81) linegrid_hwr_fs_pane_g1

0x9d1a,	// (0x0004fa44) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d1a,	// (0x0004fa44) linegrid_hwr_fs_pane_g2

0xcf63,	// (0x00052c8d) linegrid_hwr_fs_pane_g3_ParamLimits

0xcf63,	// (0x00052c8d) linegrid_hwr_fs_pane_g3

0x159e,	// (0x000472c8) linegrid_hwr_fs_pane_g4_ParamLimits

0x159e,	// (0x000472c8) linegrid_hwr_fs_pane_g4

0x15b8,	// (0x000472e2) linegrid_hwr_fs_pane_g5_ParamLimits

0x15b8,	// (0x000472e2) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x00055537) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x00055537) linegrid_hwr_fs_pane_g

0xcf6f,	// (0x00052c99) cell_hwr_fs_pane_g1_ParamLimits

0xcf6f,	// (0x00052c99) cell_hwr_fs_pane_g1

0xcd67,	// (0x00052a91) cell_hwr_fs_pane_g2_ParamLimits

0xcd67,	// (0x00052a91) cell_hwr_fs_pane_g2

0x9d2c,	// (0x0004fa56) cell_hwr_fs_pane_g3_ParamLimits

0x9d2c,	// (0x0004fa56) cell_hwr_fs_pane_g3

0x9d39,	// (0x0004fa63) cell_hwr_fs_pane_g4_ParamLimits

0x9d39,	// (0x0004fa63) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x00055542) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x00055542) cell_hwr_fs_pane_g

0x8321,	// (0x0004e04b) cell_hwr_fs_pane_t1

0xb296,	// (0x00050fc0) grid_highlight_pane_cp6

0xb296,	// (0x00050fc0) main_idle_act2_pane

0xbfe8,	// (0x00051d12) aid_inside_area_popup_secondary

0x9e35,	// (0x0004fb5f) aid_inside_area_window_primary_ParamLimits

0x9e35,	// (0x0004fb5f) aid_inside_area_window_primary

0xe239,	// (0x00053f63) ai2_news_ticker_pane

0xe241,	// (0x00053f6b) aid_size_cell_ai1_link_ParamLimits

0xe241,	// (0x00053f6b) aid_size_cell_ai1_link

0xe25b,	// (0x00053f85) popup_ai2_data_window_ParamLimits

0xe25b,	// (0x00053f85) popup_ai2_data_window

0xe26f,	// (0x00053f99) popup_ai2_link_window_ParamLimits

0xe26f,	// (0x00053f99) popup_ai2_link_window

0xcf4b,	// (0x00052c75) bg_popup_sub_pane_cp4_ParamLimits

0xcf4b,	// (0x00052c75) bg_popup_sub_pane_cp4

0xe283,	// (0x00053fad) grid_ai2_link_pane_ParamLimits

0xe283,	// (0x00053fad) grid_ai2_link_pane

0xe29a,	// (0x00053fc4) popup_ai2_link_window_g1_ParamLimits

0xe29a,	// (0x00053fc4) popup_ai2_link_window_g1

0xe2a6,	// (0x00053fd0) popup_ai2_link_window_g2_ParamLimits

0xe2a6,	// (0x00053fd0) popup_ai2_link_window_g2

0x0001,

0xf9e4,	// (0x0005570e) popup_ai2_link_window_g_ParamLimits

0xf9e4,	// (0x0005570e) popup_ai2_link_window_g

0xe2b5,	// (0x00053fdf) ai2_mp_button_pane

0xe2bd,	// (0x00053fe7) ai2_mp_volume_pane

0xd070,	// (0x00052d9a) bg_popup_sub_pane_cp5_ParamLimits

0xd070,	// (0x00052d9a) bg_popup_sub_pane_cp5

0xe2c5,	// (0x00053fef) heading_ai2_gene_pane_ParamLimits

0xe2c5,	// (0x00053fef) heading_ai2_gene_pane

0xe2d1,	// (0x00053ffb) list_ai2_gene_pane_ParamLimits

0xe2d1,	// (0x00053ffb) list_ai2_gene_pane

0xe319,	// (0x00054043) cell_ai2_link_pane_ParamLimits

0xe319,	// (0x00054043) cell_ai2_link_pane

0xe32f,	// (0x00054059) cell_ai2_link_pane_g1

0xb296,	// (0x00050fc0) grid_highlight_pane_cp7

0x18c6,	// (0x000475f0) ai2_mp_volume_pane_g1

0xe400,	// (0x0005412a) ai2_mp_volume_pane_g2

0xe375,	// (0x0005409f) list_ai2_gene_pane_t1

0xe408,	// (0x00054132) ai2_mp_volume_pane_g3

0x0002,

0xf9fd,	// (0x00055727) ai2_mp_volume_pane_g

0x18ce,	// (0x000475f8) volume_small_pane_cp3

0xe410,	// (0x0005413a) aid_size_cell_ai2_button

0xe418,	// (0x00054142) grid_ai2_button_pane

0xe421,	// (0x0005414b) cell_ai2_button_pane_ParamLimits

0xe421,	// (0x0005414b) cell_ai2_button_pane

0xb28c,	// (0x00050fb6) cell_ai2_button_pane_g1

0xb296,	// (0x00050fc0) grid_highlight_pane_cp8

0xe3c0,	// (0x000540ea) ai2_gene_pane_t1_ParamLimits

0xe3c0,	// (0x000540ea) ai2_gene_pane_t1

0x9263,	// (0x0004ef8d) aid_height_parent_landscape

0x9fd4,	// (0x0004fcfe) aid_height_set_list

0xd680,	// (0x000533aa) aid_size_parent

0xe094,	// (0x00053dbe) aid_size_cell_graphic_pane_ParamLimits

0xe2e1,	// (0x0005400b) popup_ai2_data_window_g1_ParamLimits

0xe2e1,	// (0x0005400b) popup_ai2_data_window_g1

0xe2ed,	// (0x00054017) ai2_news_ticker_pane_g1

0xe2f5,	// (0x0005401f) ai2_news_ticker_pane_g2

0x0001,

0xf9e9,	// (0x00055713) ai2_news_ticker_pane_g

0xe2fd,	// (0x00054027) ai2_news_ticker_pane_t1

0xe30b,	// (0x00054035) ai2_news_ticker_pane_t2

0x0001,

0xf9ee,	// (0x00055718) ai2_news_ticker_pane_t

0xe338,	// (0x00054062) heading_ai2_gene_pane_g1

0xe340,	// (0x0005406a) heading_ai2_gene_pane_t1_ParamLimits

0xe340,	// (0x0005406a) heading_ai2_gene_pane_t1

0xe355,	// (0x0005407f) list_highlight_pane_cp6

0xe35d,	// (0x00054087) ai2_gene_pane_ParamLimits

0xe35d,	// (0x00054087) ai2_gene_pane

0xe383,	// (0x000540ad) list_ai2_gene_pane_t2

0x0001,

0xf9f3,	// (0x0005571d) list_ai2_gene_pane_t

0xe391,	// (0x000540bb) list_highlight_pane_cp8_ParamLimits

0xe391,	// (0x000540bb) list_highlight_pane_cp8

0xe3a2,	// (0x000540cc) ai2_gene_pane_g1_ParamLimits

0xe3a2,	// (0x000540cc) ai2_gene_pane_g1

0xe3b4,	// (0x000540de) ai2_gene_pane_g2_ParamLimits

0xe3b4,	// (0x000540de) ai2_gene_pane_g2

0x0001,

0xf9f8,	// (0x00055722) ai2_gene_pane_g_ParamLimits

0xf9f8,	// (0x00055722) ai2_gene_pane_g

0xbe78,	// (0x00051ba2) scroll_pane_cp12

0x827c,	// (0x0004dfa6) control_pane_t3_ParamLimits

0x827c,	// (0x0004dfa6) control_pane_t3

0xcad7,	// (0x00052801) status_small_pane_g8_ParamLimits

0xcad7,	// (0x00052801) status_small_pane_g8

0x938c,	// (0x0004f0b6) popup_find_window_ParamLimits

0x9607,	// (0x0004f331) popup_note_image_window_ParamLimits

0x2f4a,	// (0x00048c74) list_double2_graphic_pane_vc_g1_ParamLimits

0x2f4a,	// (0x00048c74) list_double2_graphic_pane_vc_g1

0x28fe,	// (0x00048628) list_double2_graphic_pane_vc_g2_ParamLimits

0x28fe,	// (0x00048628) list_double2_graphic_pane_vc_g2

0x290a,	// (0x00048634) list_double2_graphic_pane_vc_g3_ParamLimits

0x290a,	// (0x00048634) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x00055505) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x00055505) list_double2_graphic_pane_vc_g

0x2f56,	// (0x00048c80) list_double2_graphic_pane_vc_t1_ParamLimits

0x2f56,	// (0x00048c80) list_double2_graphic_pane_vc_t1

0x28fe,	// (0x00048628) list_single_heading_pane_vc_g1_ParamLimits

0x28fe,	// (0x00048628) list_single_heading_pane_vc_g1

0x290a,	// (0x00048634) list_single_heading_pane_vc_g2_ParamLimits

0x290a,	// (0x00048634) list_single_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x00055318) list_single_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x00055318) list_single_heading_pane_vc_g

0x2f6c,	// (0x00048c96) list_single_heading_pane_vc_t1_ParamLimits

0x2f6c,	// (0x00048c96) list_single_heading_pane_vc_t1

0x2f82,	// (0x00048cac) list_single_heading_pane_vc_t2_ParamLimits

0x2f82,	// (0x00048cac) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x00055526) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x00055526) list_single_heading_pane_vc_t

0xcea3,	// (0x00052bcd) list_setting_number_pane_vc_g1_ParamLimits

0xcea3,	// (0x00052bcd) list_setting_number_pane_vc_g1

0xceaf,	// (0x00052bd9) list_setting_number_pane_vc_g2_ParamLimits

0xceaf,	// (0x00052bd9) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x0005552b) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x0005552b) list_setting_number_pane_vc_g

0xcebb,	// (0x00052be5) list_setting_number_pane_vc_t1_ParamLimits

0xcebb,	// (0x00052be5) list_setting_number_pane_vc_t1

0xcecf,	// (0x00052bf9) list_setting_number_pane_vc_t2_ParamLimits

0xcecf,	// (0x00052bf9) list_setting_number_pane_vc_t2

0xceeb,	// (0x00052c15) list_setting_number_pane_vc_t3_ParamLimits

0xceeb,	// (0x00052c15) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x00055530) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x00055530) list_setting_number_pane_vc_t

0xcf13,	// (0x00052c3d) set_value_pane_vc_ParamLimits

0xcf13,	// (0x00052c3d) set_value_pane_vc

0xe011,	// (0x00053d3b) list_double2_graphic_pane_vc_ParamLimits

0xe011,	// (0x00053d3b) list_double2_graphic_pane_vc

0xe011,	// (0x00053d3b) list_double2_large_graphic_pane_vc_ParamLimits

0xe011,	// (0x00053d3b) list_double2_large_graphic_pane_vc

0xe011,	// (0x00053d3b) list_double2_pane_vc_ParamLimits

0xe011,	// (0x00053d3b) list_double2_pane_vc

0xe011,	// (0x00053d3b) list_double_graphic_heading_pane_vc_ParamLimits

0xe011,	// (0x00053d3b) list_double_graphic_heading_pane_vc

0xe011,	// (0x00053d3b) list_double_graphic_pane_vc_ParamLimits

0xe011,	// (0x00053d3b) list_double_graphic_pane_vc

0xe011,	// (0x00053d3b) list_double_heading_pane_vc_ParamLimits

0xe011,	// (0x00053d3b) list_double_heading_pane_vc

0xe011,	// (0x00053d3b) list_double_large_graphic_pane_vc_ParamLimits

0xe011,	// (0x00053d3b) list_double_large_graphic_pane_vc

0xe011,	// (0x00053d3b) list_double_number_pane_vc_ParamLimits

0xe011,	// (0x00053d3b) list_double_number_pane_vc

0xe011,	// (0x00053d3b) list_double_pane_vc_ParamLimits

0xe011,	// (0x00053d3b) list_double_pane_vc

0xe011,	// (0x00053d3b) list_double_time_pane_vc_ParamLimits

0xe011,	// (0x00053d3b) list_double_time_pane_vc

0xe011,	// (0x00053d3b) list_setting_number_pane_vc_ParamLimits

0xe011,	// (0x00053d3b) list_setting_number_pane_vc

0xe011,	// (0x00053d3b) list_setting_pane_vc_ParamLimits

0xe011,	// (0x00053d3b) list_setting_pane_vc

0xe011,	// (0x00053d3b) list_single_graphic_heading_pane_vc_ParamLimits

0xe011,	// (0x00053d3b) list_single_graphic_heading_pane_vc

0xe011,	// (0x00053d3b) list_single_heading_pane_vc_ParamLimits

0xe011,	// (0x00053d3b) list_single_heading_pane_vc

0xe011,	// (0x00053d3b) list_single_number_heading_pane_vc_ParamLimits

0xe011,	// (0x00053d3b) list_single_number_heading_pane_vc

0x2f4a,	// (0x00048c74) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2f4a,	// (0x00048c74) list_double_graphic_heading_pane_vc_g1

0x28fe,	// (0x00048628) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x28fe,	// (0x00048628) list_double_graphic_heading_pane_vc_g2

0x290a,	// (0x00048634) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x290a,	// (0x00048634) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7db,	// (0x00055505) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x00055505) list_double_graphic_heading_pane_vc_g

0x313f,	// (0x00048e69) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x313f,	// (0x00048e69) list_double_graphic_heading_pane_vc_t1

0x2f6c,	// (0x00048c96) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x2f6c,	// (0x00048c96) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa04,	// (0x0005572e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa04,	// (0x0005572e) list_double_graphic_heading_pane_vc_t

0xcea3,	// (0x00052bcd) list_setting_pane_vc_g1_ParamLimits

0xcea3,	// (0x00052bcd) list_setting_pane_vc_g1

0xceaf,	// (0x00052bd9) list_setting_pane_vc_g2_ParamLimits

0xceaf,	// (0x00052bd9) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x0005552b) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x0005552b) list_setting_pane_vc_g

0xe617,	// (0x00054341) list_setting_pane_vc_t1_ParamLimits

0xe617,	// (0x00054341) list_setting_pane_vc_t1

0xe62b,	// (0x00054355) list_setting_pane_vc_t2_ParamLimits

0xe62b,	// (0x00054355) list_setting_pane_vc_t2

0x0001,

0xfa47,	// (0x00055771) list_setting_pane_vc_t_ParamLimits

0xfa47,	// (0x00055771) list_setting_pane_vc_t

0xcf13,	// (0x00052c3d) set_value_pane_cp_vc_ParamLimits

0xcf13,	// (0x00052c3d) set_value_pane_cp_vc

0x28fe,	// (0x00048628) list_single_number_heading_pane_vc_g1_ParamLimits

0x28fe,	// (0x00048628) list_single_number_heading_pane_vc_g1

0x290a,	// (0x00048634) list_single_number_heading_pane_vc_g2_ParamLimits

0x290a,	// (0x00048634) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x00055318) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x00055318) list_single_number_heading_pane_vc_g

0x2f6c,	// (0x00048c96) list_single_number_heading_pane_vc_t1_ParamLimits

0x2f6c,	// (0x00048c96) list_single_number_heading_pane_vc_t1

0x3153,	// (0x00048e7d) list_single_number_heading_pane_vc_t2_ParamLimits

0x3153,	// (0x00048e7d) list_single_number_heading_pane_vc_t2

0x3167,	// (0x00048e91) list_single_number_heading_pane_vc_t3_ParamLimits

0x3167,	// (0x00048e91) list_single_number_heading_pane_vc_t3

0x0002,

0xfa4c,	// (0x00055776) list_single_number_heading_pane_vc_t_ParamLimits

0xfa4c,	// (0x00055776) list_single_number_heading_pane_vc_t

0x2f4a,	// (0x00048c74) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x2f4a,	// (0x00048c74) list_single_graphic_heading_pane_vc_g1

0x28fe,	// (0x00048628) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x28fe,	// (0x00048628) list_single_graphic_heading_pane_vc_g4

0x290a,	// (0x00048634) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x290a,	// (0x00048634) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x00055505) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x00055505) list_single_graphic_heading_pane_vc_g

0x2f6c,	// (0x00048c96) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x2f6c,	// (0x00048c96) list_single_graphic_heading_pane_vc_t1

0x3179,	// (0x00048ea3) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3179,	// (0x00048ea3) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa53,	// (0x0005577d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa53,	// (0x0005577d) list_single_graphic_heading_pane_vc_t

0x28fe,	// (0x00048628) list_double2_pane_vc_g1_ParamLimits

0x28fe,	// (0x00048628) list_double2_pane_vc_g1

0x290a,	// (0x00048634) list_double2_pane_vc_g2_ParamLimits

0x290a,	// (0x00048634) list_double2_pane_vc_g2

0x0001,

0xf5ee,	// (0x00055318) list_double2_pane_vc_g_ParamLimits

0xf5ee,	// (0x00055318) list_double2_pane_vc_g

0x318d,	// (0x00048eb7) list_double2_pane_vc_t1_ParamLimits

0x318d,	// (0x00048eb7) list_double2_pane_vc_t1

0x31a3,	// (0x00048ecd) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x31a3,	// (0x00048ecd) list_double2_large_graphic_pane_vc_g1

0x28fe,	// (0x00048628) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x28fe,	// (0x00048628) list_double2_large_graphic_pane_vc_g2

0x290a,	// (0x00048634) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x290a,	// (0x00048634) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf606,	// (0x00055330) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf606,	// (0x00055330) list_double2_large_graphic_pane_vc_g

0x31af,	// (0x00048ed9) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x31af,	// (0x00048ed9) list_double2_large_graphic_pane_vc_t1

0x31c5,	// (0x00048eef) list_double_time_pane_vc_g1_ParamLimits

0x31c5,	// (0x00048eef) list_double_time_pane_vc_g1

0x31d1,	// (0x00048efb) list_double_time_pane_vc_g2_ParamLimits

0x31d1,	// (0x00048efb) list_double_time_pane_vc_g2

0x0001,

0xfa58,	// (0x00055782) list_double_time_pane_vc_g_ParamLimits

0xfa58,	// (0x00055782) list_double_time_pane_vc_g

0x31dd,	// (0x00048f07) list_double_time_pane_vc_t1_ParamLimits

0x31dd,	// (0x00048f07) list_double_time_pane_vc_t1

0x31f6,	// (0x00048f20) list_double_time_pane_vc_t2_ParamLimits

0x31f6,	// (0x00048f20) list_double_time_pane_vc_t2

0x3236,	// (0x00048f60) list_double_time_pane_vc_t3_ParamLimits

0x3236,	// (0x00048f60) list_double_time_pane_vc_t3

0x324e,	// (0x00048f78) list_double_time_pane_vc_t4_ParamLimits

0x324e,	// (0x00048f78) list_double_time_pane_vc_t4

0x0003,

0xfa5d,	// (0x00055787) list_double_time_pane_vc_t_ParamLimits

0xfa5d,	// (0x00055787) list_double_time_pane_vc_t

0x28fe,	// (0x00048628) list_double_pane_vc_g1_ParamLimits

0x28fe,	// (0x00048628) list_double_pane_vc_g1

0x290a,	// (0x00048634) list_double_pane_vc_g2_ParamLimits

0x290a,	// (0x00048634) list_double_pane_vc_g2

0x0001,

0xf5ee,	// (0x00055318) list_double_pane_vc_g_ParamLimits

0xf5ee,	// (0x00055318) list_double_pane_vc_g

0x3262,	// (0x00048f8c) list_double_pane_vc_t1_ParamLimits

0x3262,	// (0x00048f8c) list_double_pane_vc_t1

0x3274,	// (0x00048f9e) list_double_pane_vc_t2_ParamLimits

0x3274,	// (0x00048f9e) list_double_pane_vc_t2

0x0001,

0xfa66,	// (0x00055790) list_double_pane_vc_t_ParamLimits

0xfa66,	// (0x00055790) list_double_pane_vc_t

0x28fe,	// (0x00048628) list_double_number_pane_vc_g1_ParamLimits

0x28fe,	// (0x00048628) list_double_number_pane_vc_g1

0x290a,	// (0x00048634) list_double_number_pane_vc_g2_ParamLimits

0x290a,	// (0x00048634) list_double_number_pane_vc_g2

0x0001,

0xf5ee,	// (0x00055318) list_double_number_pane_vc_g_ParamLimits

0xf5ee,	// (0x00055318) list_double_number_pane_vc_g

0x328c,	// (0x00048fb6) list_double_number_pane_vc_t1_ParamLimits

0x328c,	// (0x00048fb6) list_double_number_pane_vc_t1

0x32a0,	// (0x00048fca) list_double_number_pane_vc_t2_ParamLimits

0x32a0,	// (0x00048fca) list_double_number_pane_vc_t2

0x3274,	// (0x00048f9e) list_double_number_pane_vc_t3_ParamLimits

0x3274,	// (0x00048f9e) list_double_number_pane_vc_t3

0x0002,

0xfa6b,	// (0x00055795) list_double_number_pane_vc_t_ParamLimits

0xfa6b,	// (0x00055795) list_double_number_pane_vc_t

0x32b2,	// (0x00048fdc) list_double_large_graphic_pane_vc_g1_ParamLimits

0x32b2,	// (0x00048fdc) list_double_large_graphic_pane_vc_g1

0x32be,	// (0x00048fe8) list_double_large_graphic_pane_vc_g2_ParamLimits

0x32be,	// (0x00048fe8) list_double_large_graphic_pane_vc_g2

0x290a,	// (0x00048634) list_double_large_graphic_pane_vc_g3_ParamLimits

0x290a,	// (0x00048634) list_double_large_graphic_pane_vc_g3

0x32cd,	// (0x00048ff7) list_double_large_graphic_pane_vc_g4_ParamLimits

0x32cd,	// (0x00048ff7) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa72,	// (0x0005579c) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa72,	// (0x0005579c) list_double_large_graphic_pane_vc_g

0x32d9,	// (0x00049003) list_double_large_graphic_pane_vc_t1_ParamLimits

0x32d9,	// (0x00049003) list_double_large_graphic_pane_vc_t1

0x32eb,	// (0x00049015) list_double_large_graphic_pane_vc_t2_ParamLimits

0x32eb,	// (0x00049015) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7b,	// (0x000557a5) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7b,	// (0x000557a5) list_double_large_graphic_pane_vc_t

0x28fe,	// (0x00048628) list_double_heading_pane_vc_g1_ParamLimits

0x28fe,	// (0x00048628) list_double_heading_pane_vc_g1

0x290a,	// (0x00048634) list_double_heading_pane_vc_g2_ParamLimits

0x290a,	// (0x00048634) list_double_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x00055318) list_double_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x00055318) list_double_heading_pane_vc_g

0x3304,	// (0x0004902e) list_double_heading_pane_vc_t1_ParamLimits

0x3304,	// (0x0004902e) list_double_heading_pane_vc_t1

0x2f6c,	// (0x00048c96) list_double_heading_pane_vc_t2_ParamLimits

0x2f6c,	// (0x00048c96) list_double_heading_pane_vc_t2

0x0001,

0xfa80,	// (0x000557aa) list_double_heading_pane_vc_t_ParamLimits

0xfa80,	// (0x000557aa) list_double_heading_pane_vc_t

0x2f4a,	// (0x00048c74) list_double_graphic_pane_vc_g1_ParamLimits

0x2f4a,	// (0x00048c74) list_double_graphic_pane_vc_g1

0x3318,	// (0x00049042) list_double_graphic_pane_vc_g2_ParamLimits

0x3318,	// (0x00049042) list_double_graphic_pane_vc_g2

0x3327,	// (0x00049051) list_double_graphic_pane_vc_g3_ParamLimits

0x3327,	// (0x00049051) list_double_graphic_pane_vc_g3

0x0002,

0xfa85,	// (0x000557af) list_double_graphic_pane_vc_g_ParamLimits

0xfa85,	// (0x000557af) list_double_graphic_pane_vc_g

0x3333,	// (0x0004905d) list_double_graphic_pane_vc_t1_ParamLimits

0x3333,	// (0x0004905d) list_double_graphic_pane_vc_t1

0x3274,	// (0x00048f9e) list_double_graphic_pane_vc_t2_ParamLimits

0x3274,	// (0x00048f9e) list_double_graphic_pane_vc_t2

0x0001,

0xfa8c,	// (0x000557b6) list_double_graphic_pane_vc_t_ParamLimits

0xfa8c,	// (0x000557b6) list_double_graphic_pane_vc_t

0x04ff,	// (0x00046229) aid_size_cell_fastswap

0x7a95,	// (0x0004d7bf) aid_size_cell_touch_ParamLimits

0x7a95,	// (0x0004d7bf) aid_size_cell_touch

0x076c,	// (0x00046496) popup_fast_swap_wide_window_ParamLimits

0x076c,	// (0x00046496) popup_fast_swap_wide_window

0x7be0,	// (0x0004d90a) touch_pane_ParamLimits

0x7be0,	// (0x0004d90a) touch_pane

0xbeda,	// (0x00051c04) button_value_adjust_pane_cp2

0x0dd9,	// (0x00046b03) button_value_adjust_pane_cp4

0x0df9,	// (0x00046b23) form_field_data_pane_cp2

0x7ff9,	// (0x0004dd23) form_field_data_wide_pane_cp2

0xc231,	// (0x00051f5b) bg_scroll_pane_ParamLimits

0x106c,	// (0x00046d96) scroll_handle_pane_ParamLimits

0x1080,	// (0x00046daa) scroll_sc2_down_pane_ParamLimits

0x1080,	// (0x00046daa) scroll_sc2_down_pane

0xc262,	// (0x00051f8c) scroll_sc2_up_pane_ParamLimits

0xc262,	// (0x00051f8c) scroll_sc2_up_pane

0xa352,	// (0x0005007c) grid_wheel_folder_pane_g1_ParamLimits

0xa352,	// (0x0005007c) grid_wheel_folder_pane_g1

0x1245,	// (0x00046f6f) clock_nsta_pane_cp2_ParamLimits

0x1245,	// (0x00046f6f) clock_nsta_pane_cp2

0x9174,	// (0x0004ee9e) listscroll_midp_pane_ParamLimits

0x9185,	// (0x0004eeaf) midp_canvas_pane

0xcb2b,	// (0x00052855) nsta_clock_indic_pane

0xcb5b,	// (0x00052885) listscroll_form_pane_vc

0xcb63,	// (0x0005288d) listscroll_set_pane_vc_ParamLimits

0xcb63,	// (0x0005288d) listscroll_set_pane_vc

0x9a2e,	// (0x0004f758) clock_nsta_pane

0x9a58,	// (0x0004f782) indicator_nsta_pane

0xcd99,	// (0x00052ac3) bg_popup_sub_pane_cp2_ParamLimits

0xcdad,	// (0x00052ad7) find_pane_cp2_ParamLimits

0xcdad,	// (0x00052ad7) find_pane_cp2

0xcdc3,	// (0x00052aed) grid_toobar_pane_ParamLimits

0xcf1f,	// (0x00052c49) list_form_gen_pane_vc_ParamLimits

0xcf1f,	// (0x00052c49) list_form_gen_pane_vc

0xcf35,	// (0x00052c5f) scroll_pane_cp8_vc_ParamLimits

0xcf35,	// (0x00052c5f) scroll_pane_cp8_vc

0xcf85,	// (0x00052caf) data_form_wide_pane_vc_ParamLimits

0xcf85,	// (0x00052caf) data_form_wide_pane_vc

0xcf91,	// (0x00052cbb) form_field_data_wide_pane_vc_g1

0xcf99,	// (0x00052cc3) form_field_data_wide_pane_vc_t1_ParamLimits

0xcf99,	// (0x00052cc3) form_field_data_wide_pane_vc_t1

0xbeee,	// (0x00051c18) input_focus_pane_cp6_vc_ParamLimits

0xbeee,	// (0x00051c18) input_focus_pane_cp6_vc

0x9dd5,	// (0x0004faff) list_midp_pane_ParamLimits

0xd692,	// (0x000533bc) scroll_pane_cp16_ParamLimits

0xd692,	// (0x000533bc) scroll_pane_cp16

0xd216,	// (0x00052f40) button_value_adjust_pane_ParamLimits

0xd216,	// (0x00052f40) button_value_adjust_pane

0x9fe5,	// (0x0004fd0f) button_value_adjust_pane_cp6_ParamLimits

0x9fe5,	// (0x0004fd0f) button_value_adjust_pane_cp6

0xa0fb,	// (0x0004fe25) settings_code_pane_cp_ParamLimits

0xa0fb,	// (0x0004fe25) settings_code_pane_cp

0xb28c,	// (0x00050fb6) cell_touch_pane_g1

0xb28c,	// (0x00050fb6) cell_touch_pane_g2

0x0001,

0xf724,	// (0x0005544e) cell_touch_pane_g

0xa231,	// (0x0004ff5b) cell_touch_pane_cp_ParamLimits

0xa231,	// (0x0004ff5b) cell_touch_pane_cp

0xa24d,	// (0x0004ff77) cell_touch_pane_ParamLimits

0xa24d,	// (0x0004ff77) cell_touch_pane

0xb28c,	// (0x00050fb6) scroll_sc2_down_pane_g1

0xb28c,	// (0x00050fb6) scroll_sc2_up_pane_g1

0xb296,	// (0x00050fc0) bg_set_opt_pane_cp4_vc

0xe433,	// (0x0005415d) list_set_graphic_pane_vc_g1_ParamLimits

0xe433,	// (0x0005415d) list_set_graphic_pane_vc_g1

0xe43f,	// (0x00054169) list_set_graphic_pane_vc_g2_ParamLimits

0xe43f,	// (0x00054169) list_set_graphic_pane_vc_g2

0x0001,

0xfa09,	// (0x00055733) list_set_graphic_pane_vc_g_ParamLimits

0xfa09,	// (0x00055733) list_set_graphic_pane_vc_g

0xe44b,	// (0x00054175) text_primary_small_cp13_vc_ParamLimits

0xe44b,	// (0x00054175) text_primary_small_cp13_vc

0xe463,	// (0x0005418d) list_set_graphic_pane_vc_ParamLimits

0xe463,	// (0x0005418d) list_set_graphic_pane_vc

0xb296,	// (0x00050fc0) input_focus_pane_cp2_vc

0xb28c,	// (0x00050fb6) setting_code_pane_vc_g1

0xe477,	// (0x000541a1) setting_code_pane_vc_t1

0xe485,	// (0x000541af) set_text_pane_vc_t1_ParamLimits

0xe485,	// (0x000541af) set_text_pane_vc_t1

0xb296,	// (0x00050fc0) input_focus_pane_cp1_vc

0xe4a4,	// (0x000541ce) list_set_text_pane_vc

0xb28c,	// (0x00050fb6) setting_text_pane_vc_g1

0xb296,	// (0x00050fc0) bg_set_opt_pane_cp2_vc

0xe4ae,	// (0x000541d8) setting_slider_graphic_pane_vc_g1

0xe4b6,	// (0x000541e0) setting_slider_graphic_pane_vc_t1

0xe4c4,	// (0x000541ee) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0e,	// (0x00055738) setting_slider_graphic_pane_vc_t

0xe4d2,	// (0x000541fc) slider_set_pane_cp_vc

0xe4da,	// (0x00054204) slider_set_pane_vc_g1

0xe4e3,	// (0x0005420d) slider_set_pane_vc_g2

0x0006,

0xfa13,	// (0x0005573d) slider_set_pane_vc_g

0xbf49,	// (0x00051c73) set_opt_bg_pane_g1_copy1

0xbf51,	// (0x00051c7b) set_opt_bg_pane_g2_copy1

0xe50f,	// (0x00054239) set_opt_bg_pane_g3_copy1

0xbf61,	// (0x00051c8b) set_opt_bg_pane_g4_copy1

0xbf69,	// (0x00051c93) set_opt_bg_pane_g5_copy1

0xbf71,	// (0x00051c9b) set_opt_bg_pane_g6_copy1

0xe517,	// (0x00054241) set_opt_bg_pane_g7_copy1

0xe521,	// (0x0005424b) set_opt_bg_pane_g8_copy1

0xe529,	// (0x00054253) set_opt_bg_pane_g9_copy1

0xb296,	// (0x00050fc0) bg_set_opt_pane_cp_vc

0xe531,	// (0x0005425b) setting_slider_pane_vc_t1

0xe4b6,	// (0x000541e0) setting_slider_pane_vc_t2

0xe4c4,	// (0x000541ee) setting_slider_pane_vc_t3

0x0002,

0xfa22,	// (0x0005574c) setting_slider_pane_vc_t

0xe4d2,	// (0x000541fc) slider_set_pane_vc

0x15dc,	// (0x00047306) volume_set_pane_vc_g1

0x18d7,	// (0x00047601) volume_set_pane_vc_g2

0x18e0,	// (0x0004760a) volume_set_pane_vc_g3

0x18e9,	// (0x00047613) volume_set_pane_vc_g4

0x18f2,	// (0x0004761c) volume_set_pane_vc_g5

0x18fb,	// (0x00047625) volume_set_pane_vc_g6

0x1904,	// (0x0004762e) volume_set_pane_vc_g7

0x190d,	// (0x00047637) volume_set_pane_vc_g8

0x1916,	// (0x00047640) volume_set_pane_vc_g9

0x191f,	// (0x00047649) volume_set_pane_vc_g10

0x0009,

0xfa29,	// (0x00055753) volume_set_pane_vc_g

0xe540,	// (0x0005426a) volume_set_pane_vc

0xe548,	// (0x00054272) button_value_adjust_pane_cp1_vc

0xe552,	// (0x0005427c) list_highlight_pane_cp2_vc

0xe55b,	// (0x00054285) list_set_pane_vc_ParamLimits

0xe55b,	// (0x00054285) list_set_pane_vc

0xe5ad,	// (0x000542d7) main_pane_set_vc_t1_ParamLimits

0xe5ad,	// (0x000542d7) main_pane_set_vc_t1

0xe5c2,	// (0x000542ec) main_pane_set_vc_t2_ParamLimits

0xe5c2,	// (0x000542ec) main_pane_set_vc_t2

0xe5d4,	// (0x000542fe) main_pane_set_vc_t3_ParamLimits

0xe5d4,	// (0x000542fe) main_pane_set_vc_t3

0xe5e6,	// (0x00054310) main_pane_set_vc_t4_ParamLimits

0xe5e6,	// (0x00054310) main_pane_set_vc_t4

0x0003,

0xfa3e,	// (0x00055768) main_pane_set_vc_t_ParamLimits

0xfa3e,	// (0x00055768) main_pane_set_vc_t

0xe5f8,	// (0x00054322) setting_code_pane_vc_ParamLimits

0xe5f8,	// (0x00054322) setting_code_pane_vc

0xe607,	// (0x00054331) setting_slider_graphic_pane_vc

0xe607,	// (0x00054331) setting_slider_pane_vc

0xe607,	// (0x00054331) setting_text_pane_vc

0xe607,	// (0x00054331) setting_volume_pane_vc

0xe60f,	// (0x00054339) scroll_pane_cp121_vc

0xbec8,	// (0x00051bf2) set_content_pane_vc

0xe64d,	// (0x00054377) button_value_adjust_pane_g1

0xe656,	// (0x00054380) button_value_adjust_pane_g2

0x0001,

0x0008,	// (0x00045d32) button_value_adjust_pane_g

0xe65f,	// (0x00054389) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe65f,	// (0x00054389) form_field_slider_wide_pane_vc_t1

0xe673,	// (0x0005439d) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe673,	// (0x0005439d) form_field_slider_wide_pane_vc_t2

0x0001,

0x000d,	// (0x00045d37) form_field_slider_wide_pane_vc_t_ParamLimits

0x000d,	// (0x00045d37) form_field_slider_wide_pane_vc_t

0xb2e4,	// (0x0005100e) input_focus_pane_cp10_vc_ParamLimits

0xb2e4,	// (0x0005100e) input_focus_pane_cp10_vc

0xe685,	// (0x000543af) slider_cont_pane_cp1_vc_ParamLimits

0xe685,	// (0x000543af) slider_cont_pane_cp1_vc

0xe4da,	// (0x00054204) slider_form_pane_g1_cp2

0xe4e3,	// (0x0005420d) slider_form_pane_g2_cp2

0xe69e,	// (0x000543c8) form_field_slider_pane_vc_t3

0xe6ac,	// (0x000543d6) form_field_slider_pane_vc_t4

0xe6ba,	// (0x000543e4) slider_form_pane_vc_ParamLimits

0xe6ba,	// (0x000543e4) slider_form_pane_vc

0xe6c7,	// (0x000543f1) form_field_slider_pane_vc_t1_ParamLimits

0xe6c7,	// (0x000543f1) form_field_slider_pane_vc_t1

0xe673,	// (0x0005439d) form_field_slider_pane_vc_t2_ParamLimits

0xe673,	// (0x0005439d) form_field_slider_pane_vc_t2

0x0001,

0x001d,	// (0x00045d47) form_field_slider_pane_vc_t_ParamLimits

0x001d,	// (0x00045d47) form_field_slider_pane_vc_t

0xb2e4,	// (0x0005100e) input_focus_pane_cp9_vc_ParamLimits

0xb2e4,	// (0x0005100e) input_focus_pane_cp9_vc

0xe6e3,	// (0x0005440d) slider_cont_pane_vc_ParamLimits

0xe6e3,	// (0x0005440d) slider_cont_pane_vc

0xe6f5,	// (0x0005441f) list_form_graphic_pane_cp_vc_ParamLimits

0xe6f5,	// (0x0005441f) list_form_graphic_pane_cp_vc

0xcf91,	// (0x00052cbb) form_field_popup_wide_pane_vc_g1

0xe70a,	// (0x00054434) form_field_popup_wide_pane_vc_t1_ParamLimits

0xe70a,	// (0x00054434) form_field_popup_wide_pane_vc_t1

0xbeee,	// (0x00051c18) input_focus_pane_cp8_vc_ParamLimits

0xbeee,	// (0x00051c18) input_focus_pane_cp8_vc

0xe721,	// (0x0005444b) list_form_wide_pane_vc_ParamLimits

0xe721,	// (0x0005444b) list_form_wide_pane_vc

0xe72d,	// (0x00054457) list_form_graphic_pane_vc_g1

0xe735,	// (0x0005445f) list_form_graphic_pane_vc_t1_ParamLimits

0xe735,	// (0x0005445f) list_form_graphic_pane_vc_t1

0xb2f2,	// (0x0005101c) list_highlight_pane_cp5_vc_ParamLimits

0xb2f2,	// (0x0005101c) list_highlight_pane_cp5_vc

0xe751,	// (0x0005447b) list_form_graphic_pane_vc_ParamLimits

0xe751,	// (0x0005447b) list_form_graphic_pane_vc

0xcf91,	// (0x00052cbb) form_field_popup_pane_vc_g1

0xe767,	// (0x00054491) form_field_popup_pane_vc_t1_ParamLimits

0xe767,	// (0x00054491) form_field_popup_pane_vc_t1

0xbeee,	// (0x00051c18) input_focus_pane_cp7_vc_ParamLimits

0xbeee,	// (0x00051c18) input_focus_pane_cp7_vc

0xe77e,	// (0x000544a8) list_form_pane_vc_ParamLimits

0xe77e,	// (0x000544a8) list_form_pane_vc

0xe78a,	// (0x000544b4) data_form_pane_vc_t1_ParamLimits

0xe78a,	// (0x000544b4) data_form_pane_vc_t1

0xbf49,	// (0x00051c73) input_focus_pane_vc_g1

0xbf51,	// (0x00051c7b) input_focus_pane_vc_g2

0xbf59,	// (0x00051c83) input_focus_pane_vc_g3

0xbf61,	// (0x00051c8b) input_focus_pane_vc_g4

0xbf69,	// (0x00051c93) input_focus_pane_vc_g5

0xbf71,	// (0x00051c9b) input_focus_pane_vc_g6

0xbf79,	// (0x00051ca3) input_focus_pane_vc_g7

0xbf81,	// (0x00051cab) input_focus_pane_vc_g8

0xbf89,	// (0x00051cb3) input_focus_pane_vc_g9

0xb28c,	// (0x00050fb6) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x000553d7) input_focus_pane_vc_g

0xcf85,	// (0x00052caf) data_form_pane_vc_ParamLimits

0xcf85,	// (0x00052caf) data_form_pane_vc

0xcf91,	// (0x00052cbb) form_field_data_pane_vc_g1

0xe7a5,	// (0x000544cf) form_field_data_pane_vc_t1_ParamLimits

0xe7a5,	// (0x000544cf) form_field_data_pane_vc_t1

0xbeee,	// (0x00051c18) input_focus_pane_vc_ParamLimits

0xbeee,	// (0x00051c18) input_focus_pane_vc

0xe7bf,	// (0x000544e9) button_value_adjust_pane_cp3_vc

0xe7c7,	// (0x000544f1) button_value_adjust_pane_cp5_vc

0xe7cf,	// (0x000544f9) form_field_data_pane_vc_ParamLimits

0xe7cf,	// (0x000544f9) form_field_data_pane_vc

0xe7e6,	// (0x00054510) form_field_data_pane_vc_cp2

0xe7ee,	// (0x00054518) form_field_data_wide_pane_vc_ParamLimits

0xe7ee,	// (0x00054518) form_field_data_wide_pane_vc

0xe804,	// (0x0005452e) form_field_data_wide_pane_vc_cp2

0xe80c,	// (0x00054536) form_field_popup_pane_vc_ParamLimits

0xe80c,	// (0x00054536) form_field_popup_pane_vc

0xe823,	// (0x0005454d) form_field_popup_wide_pane_vc_ParamLimits

0xe823,	// (0x0005454d) form_field_popup_wide_pane_vc

0xe839,	// (0x00054563) form_field_slider_pane_vc_ParamLimits

0xe839,	// (0x00054563) form_field_slider_pane_vc

0xe84c,	// (0x00054576) form_field_slider_wide_pane_vc_ParamLimits

0xe84c,	// (0x00054576) form_field_slider_wide_pane_vc

0xa26b,	// (0x0004ff95) grid_touch_1_pane_ParamLimits

0xa26b,	// (0x0004ff95) grid_touch_1_pane

0xa27f,	// (0x0004ffa9) grid_touch_2_pane_ParamLimits

0xa27f,	// (0x0004ffa9) grid_touch_2_pane

0xe85f,	// (0x00054589) touch_pane_g1_ParamLimits

0xe85f,	// (0x00054589) touch_pane_g1

0xe86d,	// (0x00054597) cell_app_pane_cp_wide_ParamLimits

0xe86d,	// (0x00054597) cell_app_pane_cp_wide

0xe87e,	// (0x000545a8) grid_popup_fast_wide_pane_ParamLimits

0xe87e,	// (0x000545a8) grid_popup_fast_wide_pane

0xe892,	// (0x000545bc) scroll_pane_cp19_ParamLimits

0xe892,	// (0x000545bc) scroll_pane_cp19

0xb296,	// (0x00050fc0) bg_popup_window_pane_cp20

0xe8a6,	// (0x000545d0) listscroll_popup_fast_wide_pane

0xd156,	// (0x00052e80) grid_indicator_nsta_pane

0xe8ae,	// (0x000545d8) clock_nsta_pane_g1

0xe8b7,	// (0x000545e1) clock_nsta_pane_t1

0xa2a9,	// (0x0004ffd3) cell_indicator_nsta_pane_ParamLimits

0xa2a9,	// (0x0004ffd3) cell_indicator_nsta_pane

0xe85f,	// (0x00054589) cell_indicator_nsta_pane_g1

0xa2c6,	// (0x0004fff0) cell_indicator_nsta_pane_g2

0x0001,

0x0022,	// (0x00045d4c) cell_indicator_nsta_pane_g

0xe8d3,	// (0x000545fd) clock_nsta_pane_cp

0xe8db,	// (0x00054605) indicator_nsta_pane_cp

0xe8e4,	// (0x0005460e) nsta_clock_indic_pane_g1

0xb32e,	// (0x00051058) grid_indicator_pane

0xc354,	// (0x0005207e) scroll_pane_cp29

0x1194,	// (0x00046ebe) indicator_nsta_pane_cp2_ParamLimits

0x1194,	// (0x00046ebe) indicator_nsta_pane_cp2

0xb2f2,	// (0x0005101c) main_apps_wheel_pane

0xd0ad,	// (0x00052dd7) form_midp_field_text_pane_ParamLimits

0xd1e8,	// (0x00052f12) scroll_bar_cp050_ParamLimits

0xe94d,	// (0x00054677) cell_indicator_pane_ParamLimits

0xe94d,	// (0x00054677) cell_indicator_pane

0xe96a,	// (0x00054694) cell_indicator_pane_g1

0xa2dc,	// (0x00050006) grid_wheel_folder_pane_ParamLimits

0xa2dc,	// (0x00050006) grid_wheel_folder_pane

0xa2ea,	// (0x00050014) list_wheel_apps_pane_ParamLimits

0xa2ea,	// (0x00050014) list_wheel_apps_pane

0xa2f8,	// (0x00050022) main_apps_wheel_pane_g1_ParamLimits

0xa2f8,	// (0x00050022) main_apps_wheel_pane_g1

0xa304,	// (0x0005002e) main_apps_wheel_pane_g2_ParamLimits

0xa304,	// (0x0005002e) main_apps_wheel_pane_g2

0x0001,

0x003e,	// (0x00045d68) main_apps_wheel_pane_g_ParamLimits

0x003e,	// (0x00045d68) main_apps_wheel_pane_g

0xa312,	// (0x0005003c) main_apps_wheel_pane_t1_ParamLimits

0xa312,	// (0x0005003c) main_apps_wheel_pane_t1

0xa326,	// (0x00050050) list_wheel_apps_pane_g1

0xa32e,	// (0x00050058) list_wheel_apps_pane_g2

0xa336,	// (0x00050060) list_wheel_apps_pane_g3

0xa33e,	// (0x00050068) list_wheel_apps_pane_g4

0xa348,	// (0x00050072) list_wheel_apps_pane_g5

0x0004,

0x0043,	// (0x00045d6d) list_wheel_apps_pane_g

0xc7a7,	// (0x000524d1) navi_icon_text_pane

0x9929,	// (0x0004f653) aid_fill_nsta

0xa35f,	// (0x00050089) navi_icon_text_pane_g1

0xa36b,	// (0x00050095) navi_icon_text_pane_t1

0xc643,	// (0x0005236d) list_set_graphic_pane_t1_ParamLimits

0xc643,	// (0x0005236d) list_set_graphic_pane_t1

0xd90e,	// (0x00053638) popup_midp_note_alarm_window_t6_ParamLimits

0xd90e,	// (0x00053638) popup_midp_note_alarm_window_t6

0xd920,	// (0x0005364a) popup_midp_note_alarm_window_t7_ParamLimits

0xd920,	// (0x0005364a) popup_midp_note_alarm_window_t7

0xd932,	// (0x0005365c) popup_midp_note_alarm_window_t8_ParamLimits

0xd932,	// (0x0005365c) popup_midp_note_alarm_window_t8

0xd944,	// (0x0005366e) popup_midp_note_alarm_window_t9_ParamLimits

0xd944,	// (0x0005366e) popup_midp_note_alarm_window_t9

0xd956,	// (0x00053680) popup_midp_note_alarm_window_t10_ParamLimits

0xd956,	// (0x00053680) popup_midp_note_alarm_window_t10

0xd968,	// (0x00053692) popup_midp_note_alarm_window_t11_ParamLimits

0xd968,	// (0x00053692) popup_midp_note_alarm_window_t11

0xd97a,	// (0x000536a4) scroll_pane_cp17_ParamLimits

0xd97a,	// (0x000536a4) scroll_pane_cp17

0x15dc,	// (0x00047306) volume_small_pane_cp_g1

0x1928,	// (0x00047652) volume_small_pane_cp_g2

0x1931,	// (0x0004765b) volume_small_pane_cp_g3

0x193a,	// (0x00047664) volume_small_pane_cp_g4

0x1943,	// (0x0004766d) volume_small_pane_cp_g5

0x194c,	// (0x00047676) volume_small_pane_cp_g6

0x1955,	// (0x0004767f) volume_small_pane_cp_g7

0x195e,	// (0x00047688) volume_small_pane_cp_g8

0x1967,	// (0x00047691) volume_small_pane_cp_g9

0x1970,	// (0x0004769a) volume_small_pane_cp_g10

0xc953,	// (0x0005267d) midp_ticker_pane_g1_ParamLimits

0xc95f,	// (0x00052689) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x0005549f) midp_ticker_pane_g_ParamLimits

0x9220,	// (0x0004ef4a) midp_ticker_pane_t1_ParamLimits

0x9949,	// (0x0004f673) aid_fill_nsta_2

0xd1d4,	// (0x00052efe) list_form2_midp_pane

0xdfef,	// (0x00053d19) midp_editing_number_pane_ParamLimits

0xdffe,	// (0x00053d28) midp_ticker_pane_ParamLimits

0xe974,	// (0x0005469e) form2_midp_field_pane

0xe97c,	// (0x000546a6) scroll_pane_cp51

0xe99c,	// (0x000546c6) form2_midp_button_pane_ParamLimits

0xe99c,	// (0x000546c6) form2_midp_button_pane

0xe9ae,	// (0x000546d8) form2_midp_content_pane_ParamLimits

0xe9ae,	// (0x000546d8) form2_midp_content_pane

0xe9c8,	// (0x000546f2) form2_midp_field_choice_group_pane

0xe9d0,	// (0x000546fa) form2_midp_field_pane_g1

0xe9d8,	// (0x00054702) form2_midp_field_pane_g2

0xe9e0,	// (0x0005470a) form2_midp_field_pane_g3

0xe9e8,	// (0x00054712) form2_midp_field_pane_g4

0x0003,

0x0068,	// (0x00045d92) form2_midp_field_pane_g

0xe9f0,	// (0x0005471a) form2_midp_gauge_slider_pane

0xe9f8,	// (0x00054722) form2_midp_gauge_wait_pane

0xea00,	// (0x0005472a) form2_midp_image_pane_ParamLimits

0xea00,	// (0x0005472a) form2_midp_image_pane

0xea1b,	// (0x00054745) form2_midp_label_pane_ParamLimits

0xea1b,	// (0x00054745) form2_midp_label_pane

0xa399,	// (0x000500c3) form2_midp_label_pane_cp_ParamLimits

0xa399,	// (0x000500c3) form2_midp_label_pane_cp

0xea34,	// (0x0005475e) form2_midp_string_pane_ParamLimits

0xea34,	// (0x0005475e) form2_midp_string_pane

0x3345,	// (0x0004906f) form2_midp_text_pane_ParamLimits

0x3345,	// (0x0004906f) form2_midp_text_pane

0xea46,	// (0x00054770) form2_midp_time_pane

0xea56,	// (0x00054780) input_focus_pane_cp51_ParamLimits

0xea56,	// (0x00054780) input_focus_pane_cp51

0xea6e,	// (0x00054798) form2_midp_label_pane_t1_ParamLimits

0xea6e,	// (0x00054798) form2_midp_label_pane_t1

0x3360,	// (0x0004908a) form2_mdip_text_pane_t1_ParamLimits

0x3360,	// (0x0004908a) form2_mdip_text_pane_t1

0x337c,	// (0x000490a6) form2_midp_time_pane_t1

0xeab6,	// (0x000547e0) form2_midp_gauge_slider_pane_t1

0xa3ba,	// (0x000500e4) form2_midp_gauge_slider_pane_t2

0xa3cc,	// (0x000500f6) form2_midp_gauge_slider_pane_t3

0x0002,

0x0071,	// (0x00045d9b) form2_midp_gauge_slider_pane_t

0xeac8,	// (0x000547f2) form2_midp_slider_pane

0xead4,	// (0x000547fe) form2_midp_gauge_wait_pane_t1

0xeae2,	// (0x0005480c) form2_midp_wait_pane_ParamLimits

0xeae2,	// (0x0005480c) form2_midp_wait_pane

0xa3de,	// (0x00050108) list_single_2graphic_pane_cp4_ParamLimits

0xa3de,	// (0x00050108) list_single_2graphic_pane_cp4

0x9d5c,	// (0x0004fa86) list_single_midp_graphic_pane_cp_ParamLimits

0x9d5c,	// (0x0004fa86) list_single_midp_graphic_pane_cp

0xb296,	// (0x00050fc0) list_highlight_pane_cp20

0xeb0d,	// (0x00054837) list_single_2graphic_pane_g1_cp4

0xe338,	// (0x00054062) list_single_2graphic_pane_g2_cp4

0xeb15,	// (0x0005483f) list_single_2graphic_pane_t1_cp4

0xb2f2,	// (0x0005101c) list_highlight_pane_cp21

0xeb24,	// (0x0005484e) list_single_midp_graphic_pane_g4_cp

0xeb33,	// (0x0005485d) list_single_midp_graphic_pane_t1_cp

0xa3f5,	// (0x0005011f) form2_mdip_string_pane_t1_ParamLimits

0xa3f5,	// (0x0005011f) form2_mdip_string_pane_t1

0xb296,	// (0x00050fc0) bg_wml_button_pane_cp2

0xb28c,	// (0x00050fb6) form2_midp_image_pane_g1

0x2969,	// (0x00048693) list_double_large_graphic_pane_g5_ParamLimits

0x2969,	// (0x00048693) list_double_large_graphic_pane_g5

0x9174,	// (0x0004ee9e) midp_form_pane_ParamLimits

0xb2f2,	// (0x0005101c) main_apps_wheel_pane_ParamLimits

0x9685,	// (0x0004f3af) popup_preview_window_ParamLimits

0x9685,	// (0x0004f3af) popup_preview_window

0xcc3a,	// (0x00052964) popup_touch_info_window_ParamLimits

0xcc3a,	// (0x00052964) popup_touch_info_window

0xcc58,	// (0x00052982) popup_touch_menu_window_ParamLimits

0xcc58,	// (0x00052982) popup_touch_menu_window

0xb282,	// (0x00050fac) bg_popup_sub_pane_cp6

0xeb48,	// (0x00054872) list_touch_menu_pane

0xeb50,	// (0x0005487a) list_single_touch_menu_pane_ParamLimits

0xeb50,	// (0x0005487a) list_single_touch_menu_pane

0xeb65,	// (0x0005488f) list_single_touch_menu_pane_t1

0xb2f2,	// (0x0005101c) bg_popup_sub_pane_cp7_ParamLimits

0xb2f2,	// (0x0005101c) bg_popup_sub_pane_cp7

0xeb73,	// (0x0005489d) heading_sub_pane

0xeb7b,	// (0x000548a5) list_touch_info_pane_ParamLimits

0xeb7b,	// (0x000548a5) list_touch_info_pane

0xeb8a,	// (0x000548b4) list_single_touch_info_pane_ParamLimits

0xeb8a,	// (0x000548b4) list_single_touch_info_pane

0xeb9c,	// (0x000548c6) list_single_touch_info_pane_t1

0xebaa,	// (0x000548d4) list_single_touch_info_pane_t2

0x0001,

0x007f,	// (0x00045da9) list_single_touch_info_pane_t

0xc929,	// (0x00052653) bg_popup_heading_pane_cp

0xebb8,	// (0x000548e2) heading_sub_pane_t1

0xcf4b,	// (0x00052c75) bg_popup_preview_window_pane_cp_ParamLimits

0xcf4b,	// (0x00052c75) bg_popup_preview_window_pane_cp

0xeb73,	// (0x0005489d) heading_preview_pane

0xeb7b,	// (0x000548a5) list_preview_pane_ParamLimits

0xeb7b,	// (0x000548a5) list_preview_pane

0xebc6,	// (0x000548f0) popup_preview_window_g1

0xeb8a,	// (0x000548b4) list_single_preview_pane_ParamLimits

0xeb8a,	// (0x000548b4) list_single_preview_pane

0xebce,	// (0x000548f8) list_single_preview_pane_g1

0xebd6,	// (0x00054900) list_single_preview_pane_t1

0xeb9c,	// (0x000548c6) list_single_preview_pane_t2

0x0001,

0x0084,	// (0x00045dae) list_single_preview_pane_t

0xebe4,	// (0x0005490e) bg_popup_heading_pane_cp2_ParamLimits

0xebe4,	// (0x0005490e) bg_popup_heading_pane_cp2

0xebfa,	// (0x00054924) heading_preview_pane_g1

0xec02,	// (0x0005492c) heading_preview_pane_t1_ParamLimits

0xec02,	// (0x0005492c) heading_preview_pane_t1

0xb345,	// (0x0005106f) soft_indicator_pane_t1_ParamLimits

0xbe55,	// (0x00051b7f) scroll_pane_ParamLimits

0xc250,	// (0x00051f7a) scroll_sc2_left_pane

0xc259,	// (0x00051f83) scroll_sc2_right_pane

0xc278,	// (0x00051fa2) scroll_bg_pane_g1_ParamLimits

0xc28d,	// (0x00051fb7) scroll_bg_pane_g2_ParamLimits

0xc2a5,	// (0x00051fcf) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x0005542e) scroll_bg_pane_g_ParamLimits

0xc278,	// (0x00051fa2) scroll_handle_pane_g1_ParamLimits

0xc2c7,	// (0x00051ff1) scroll_handle_pane_g2_ParamLimits

0xc2a5,	// (0x00051fcf) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x00055435) scroll_handle_pane_g_ParamLimits

0xcb83,	// (0x000528ad) popup_choice_list_window_ParamLimits

0xcb83,	// (0x000528ad) popup_choice_list_window

0xcda5,	// (0x00052acf) choice_list_pane

0xce27,	// (0x00052b51) cell_toolbar_pane_t1

0xce4f,	// (0x00052b79) toolbar_button_pane_ParamLimits

0xdd58,	// (0x00053a82) ai_gene_pane_1_t2_ParamLimits

0xdd58,	// (0x00053a82) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x0005564d) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x0005564d) ai_gene_pane_1_t

0xec1f,	// (0x00054949) scroll_sc2_left_pane_g1

0xec1f,	// (0x00054949) scroll_sc2_right_pane_g1

0xc039,	// (0x00051d63) bg_popup_sub_pane_cp10

0xec29,	// (0x00054953) list_choice_list_pane

0xec40,	// (0x0005496a) list_single_choice_list_pane_ParamLimits

0xec40,	// (0x0005496a) list_single_choice_list_pane

0xec54,	// (0x0005497e) list_single_choice_list_pane_g1

0xec5c,	// (0x00054986) list_single_choice_list_pane_t1_ParamLimits

0xec5c,	// (0x00054986) list_single_choice_list_pane_t1

0xec71,	// (0x0005499b) choice_list_pane_g1

0xec79,	// (0x000549a3) choice_list_pane_t1

0xb282,	// (0x00050fac) input_focus_pane_cp11

0xc1ae,	// (0x00051ed8) title_pane_stacon_g2_ParamLimits

0xc1ae,	// (0x00051ed8) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x00055414) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x00055414) title_pane_stacon_g

0xc929,	// (0x00052653) cursor_press_pane

0x9344,	// (0x0004f06e) popup_fep_hwr_window_ParamLimits

0x9344,	// (0x0004f06e) popup_fep_hwr_window

0xcbd7,	// (0x00052901) popup_fep_vkb_window_ParamLimits

0xcbd7,	// (0x00052901) popup_fep_vkb_window

0xec87,	// (0x000549b1) cursor_press_pane_g1

0x0002,

0x00ad,	// (0x00045dd7) fep_vkb_side_pane_g_ParamLimits

0x19b2,	// (0x000476dc) fep_hwr_candidate_pane_ParamLimits

0x19b2,	// (0x000476dc) fep_hwr_candidate_pane

0x19dc,	// (0x00047706) fep_hwr_side_pane_ParamLimits

0x19dc,	// (0x00047706) fep_hwr_side_pane

0x19fc,	// (0x00047726) fep_hwr_top_pane_ParamLimits

0x19fc,	// (0x00047726) fep_hwr_top_pane

0x1a14,	// (0x0004773e) fep_hwr_write_pane_ParamLimits

0x1a14,	// (0x0004773e) fep_hwr_write_pane

0x00ad,	// (0x00045dd7) fep_vkb_side_pane_g

0xec8f,	// (0x000549b9) fep_hwr_top_pane_g1

0xeca1,	// (0x000549cb) fep_hwr_top_pane_g2

0x1a4e,	// (0x00047778) fep_hwr_top_pane_g3

0x0002,

0xfaab,	// (0x000557d5) fep_hwr_top_pane_g

0x1a63,	// (0x0004778d) fep_hwr_top_text_pane

0xc41a,	// (0x00052144) fep_hwr_top_text_pane_g1

0xecd7,	// (0x00054a01) fep_hwr_top_text_pane_t1

0x1b59,	// (0x00047883) fep_hwr_candidate_pane_g1

0xeee4,	// (0x00054c0e) fep_vkb_keypad_pane_g3_ParamLimits

0xeee4,	// (0x00054c0e) fep_vkb_keypad_pane_g3

0xef0c,	// (0x00054c36) fep_vkb_keypad_pane_g4_ParamLimits

0xef0c,	// (0x00054c36) fep_vkb_keypad_pane_g4

0xef7b,	// (0x00054ca5) fep_vkb_bottom_pane_g2_ParamLimits

0xef7b,	// (0x00054ca5) fep_vkb_bottom_pane_g2

0x0001,

0x00b4,	// (0x00045dde) fep_vkb_bottom_pane_g_ParamLimits

0x00b4,	// (0x00045dde) fep_vkb_bottom_pane_g

0xec1f,	// (0x00054949) cell_vkb_side_pane_g2

0x0001,

0x00be,	// (0x00045de8) cell_vkb_side_pane_g

0xefbf,	// (0x00054ce9) cell_vkb_side_pane_t1

0xefcd,	// (0x00054cf7) cell_vkb_side_pane_t1_copy1

0xec1f,	// (0x00054949) bg_fep_vkb_candidate_pane_g2

0xf0a9,	// (0x00054dd3) cell_vkb_candidate_pane_ParamLimits

0xece5,	// (0x00054a0f) aid_size_cell_vkb_ParamLimits

0xece5,	// (0x00054a0f) aid_size_cell_vkb

0xf0a9,	// (0x00054dd3) cell_vkb_candidate_pane

0x1b80,	// (0x000478aa) bg_popup_fep_shadow_pane_g1

0xed61,	// (0x00054a8b) fep_vkb_bottom_pane_ParamLimits

0xed61,	// (0x00054a8b) fep_vkb_bottom_pane

0xed9e,	// (0x00054ac8) fep_vkb_candidate_pane_ParamLimits

0xed9e,	// (0x00054ac8) fep_vkb_candidate_pane

0xedba,	// (0x00054ae4) fep_vkb_keypad_pane_ParamLimits

0xedba,	// (0x00054ae4) fep_vkb_keypad_pane

0xee00,	// (0x00054b2a) fep_vkb_side_pane_ParamLimits

0xee00,	// (0x00054b2a) fep_vkb_side_pane

0xee3c,	// (0x00054b66) fep_vkb_top_pane_ParamLimits

0xee3c,	// (0x00054b66) fep_vkb_top_pane

0xee78,	// (0x00054ba2) fep_vkb_top_pane_g1_ParamLimits

0xee78,	// (0x00054ba2) fep_vkb_top_pane_g1

0xee87,	// (0x00054bb1) fep_vkb_top_pane_g2_ParamLimits

0xee87,	// (0x00054bb1) fep_vkb_top_pane_g2

0xee96,	// (0x00054bc0) fep_vkb_top_pane_g3_ParamLimits

0xee96,	// (0x00054bc0) fep_vkb_top_pane_g3

0x0003,

0x00a4,	// (0x00045dce) fep_vkb_top_pane_g_ParamLimits

0x00a4,	// (0x00045dce) fep_vkb_top_pane_g

0xeeb4,	// (0x00054bde) fep_vkb_top_text_pane_ParamLimits

0xeeb4,	// (0x00054bde) fep_vkb_top_text_pane

0xa48d,	// (0x000501b7) fep_vkb_side_pane_g1_ParamLimits

0xa48d,	// (0x000501b7) fep_vkb_side_pane_g1

0xeed3,	// (0x00054bfd) grid_vkb_side_pane_ParamLimits

0xeed3,	// (0x00054bfd) grid_vkb_side_pane

0x1b88,	// (0x000478b2) bg_popup_fep_shadow_pane_g2

0x1b91,	// (0x000478bb) bg_popup_fep_shadow_pane_g3

0x1b99,	// (0x000478c3) bg_popup_fep_shadow_pane_g4

0x1ba2,	// (0x000478cc) bg_popup_fep_shadow_pane_g5

0x1bac,	// (0x000478d6) bg_popup_fep_shadow_pane_g6

0x1bb4,	// (0x000478de) bg_popup_fep_shadow_pane_g7

0xbf61,	// (0x00051c8b) bg_popup_fep_shadow_pane_g8

0xef2a,	// (0x00054c54) grid_vkb_keypad_number_pane_ParamLimits

0xef2a,	// (0x00054c54) grid_vkb_keypad_number_pane

0xef3a,	// (0x00054c64) grid_vkb_keypad_pane_ParamLimits

0xef3a,	// (0x00054c64) grid_vkb_keypad_pane

0xef60,	// (0x00054c8a) fep_vkb_bottom_pane_g1_ParamLimits

0xef60,	// (0x00054c8a) fep_vkb_bottom_pane_g1

0xef89,	// (0x00054cb3) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xef89,	// (0x00054cb3) grid_vkb_keypad_bottom_left_pane

0xef9e,	// (0x00054cc8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xef9e,	// (0x00054cc8) grid_vkb_keypad_bottom_right_pane

0xefb3,	// (0x00054cdd) fep_vkb_top_text_pane_g1

0xa4d4,	// (0x000501fe) fep_vkb_top_text_pane_t1

0xa4e6,	// (0x00050210) cell_vkb_side_pane_ParamLimits

0xa4e6,	// (0x00050210) cell_vkb_side_pane

0xec1f,	// (0x00054949) cell_vkb_side_pane_g1

0xefdb,	// (0x00054d05) cell_vkb_keypad_pane_ParamLimits

0xefdb,	// (0x00054d05) cell_vkb_keypad_pane

0xf056,	// (0x00054d80) cell_vkb_keypad_pane_g1

0x0008,

0xfac6,	// (0x000557f0) bg_popup_fep_shadow_pane_g

0x1bc6,	// (0x000478f0) cell_hwr_side_pane_g1

0x1bc6,	// (0x000478f0) cell_hwr_side_pane_g2

0xf060,	// (0x00054d8a) cell_vkb_keypad_pane_t1

0xa4fc,	// (0x00050226) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa4fc,	// (0x00050226) cell_vkb_keypad_bottom_left_pane

0xa511,	// (0x0005023b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa511,	// (0x0005023b) cell_vkb_keypad_bottom_right_pane

0xec1f,	// (0x00054949) cell_vkb_keypad_bottom_left_pane_g1

0xec1f,	// (0x00054949) cell_vkb_keypad_bottom_right_pane_g1

0xf06e,	// (0x00054d98) cell_vkb_keypad_number_pane_ParamLimits

0xf06e,	// (0x00054d98) cell_vkb_keypad_number_pane

0xf08d,	// (0x00054db7) cell_vkb_keypad_number_pane_g1

0xf097,	// (0x00054dc1) cell_vkb_keypad_number_pane_g2

0xf0a0,	// (0x00054dca) cell_vkb_keypad_number_pane_g3

0x0002,

0x00c3,	// (0x00045ded) cell_vkb_keypad_number_pane_g

0xf060,	// (0x00054d8a) cell_vkb_keypad_number_pane_t1

0xf0c6,	// (0x00054df0) fep_vkb_candidate_pane_g1

0x0001,

0xfad9,	// (0x00055803) cell_hwr_side_pane_g

0xf0df,	// (0x00054e09) cell_hwr_side_pane_t1

0x1bd0,	// (0x000478fa) cell_hwr_side_pane_t1_copy1

0x1bde,	// (0x00047908) cell_hwr_candidate_pane_g1

0x1c0d,	// (0x00047937) cell_hwr_candidate_pane_t1

0xec1f,	// (0x00054949) cell_vkb_candidate_pane_g2

0xf123,	// (0x00054e4d) cell_vkb_candidate_pane_t1

0x1979,	// (0x000476a3) bg_popup_fep_shadow_pane_ParamLimits

0x1979,	// (0x000476a3) bg_popup_fep_shadow_pane

0x1a2e,	// (0x00047758) bg_fep_hwr_top_pane_g4

0xecb3,	// (0x000549dd) bg_hwr_side_pane_g1_ParamLimits

0xecb3,	// (0x000549dd) bg_hwr_side_pane_g1

0x8494,	// (0x0004e1be) cell_hwr_side_pane_ParamLimits

0x8494,	// (0x0004e1be) cell_hwr_side_pane

0x1ada,	// (0x00047804) fep_hwr_write_pane_g1_ParamLimits

0x1ada,	// (0x00047804) fep_hwr_write_pane_g1

0x1ae7,	// (0x00047811) fep_hwr_write_pane_g2_ParamLimits

0x1ae7,	// (0x00047811) fep_hwr_write_pane_g2

0x1af4,	// (0x0004781e) fep_hwr_write_pane_g3_ParamLimits

0x1af4,	// (0x0004781e) fep_hwr_write_pane_g3

0x84b4,	// (0x0004e1de) fep_hwr_write_pane_g4_ParamLimits

0x84b4,	// (0x0004e1de) fep_hwr_write_pane_g4

0x0005,

0xfab2,	// (0x000557dc) fep_hwr_write_pane_g_ParamLimits

0xfab2,	// (0x000557dc) fep_hwr_write_pane_g

0x1a2e,	// (0x00047758) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1a2e,	// (0x00047758) bg_fep_hwr_candidate_pane_g2

0x1b17,	// (0x00047841) cell_hwr_candidate_pane_ParamLimits

0x1b17,	// (0x00047841) cell_hwr_candidate_pane

0x1b59,	// (0x00047883) fep_hwr_candidate_pane_g1_ParamLimits

0xed13,	// (0x00054a3d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xed13,	// (0x00054a3d) bg_popup_fep_shadow_pane_cp2

0xeea6,	// (0x00054bd0) fep_vkb_top_pane_g4_ParamLimits

0xeea6,	// (0x00054bd0) fep_vkb_top_pane_g4

0xeec5,	// (0x00054bef) fep_vkb_side_pane_g2_ParamLimits

0xeec5,	// (0x00054bef) fep_vkb_side_pane_g2

0x7f1f,	// (0x0004dc49) list_setting_pane_t4_ParamLimits

0x7f1f,	// (0x0004dc49) list_setting_pane_t4

0x7fa1,	// (0x0004dccb) list_setting_number_pane_t5_ParamLimits

0x7fa1,	// (0x0004dccb) list_setting_number_pane_t5

0x90b9,	// (0x0004ede3) list_double_heading_pane_cp2_ParamLimits

0x90b9,	// (0x0004ede3) list_double_heading_pane_cp2

0xbe89,	// (0x00051bb3) list_double_heading_pane_g1_cp2_ParamLimits

0xbe89,	// (0x00051bb3) list_double_heading_pane_g1_cp2

0xbf08,	// (0x00051c32) list_double_heading_pane_g2_cp2_ParamLimits

0xbf08,	// (0x00051c32) list_double_heading_pane_g2_cp2

0xf131,	// (0x00054e5b) list_double_heading_pane_t1_cp2_ParamLimits

0xf131,	// (0x00054e5b) list_double_heading_pane_t1_cp2

0xf147,	// (0x00054e71) list_double_heading_pane_t2_cp2_ParamLimits

0xf147,	// (0x00054e71) list_double_heading_pane_t2_cp2

0xb27a,	// (0x00050fa4) aid_value_unit2

0x07b8,	// (0x000464e2) popup_preview_fixed_window

0xb425,	// (0x0005114f) bg_popup_preview_window_pane_cp02

0xf159,	// (0x00054e83) list_preview_fixed_pane

0xf19f,	// (0x00054ec9) list_empty_pane_fp_ParamLimits

0xf19f,	// (0x00054ec9) list_empty_pane_fp

0xf19f,	// (0x00054ec9) list_single_cale_day_pane_fp_ParamLimits

0xf19f,	// (0x00054ec9) list_single_cale_day_pane_fp

0xf19f,	// (0x00054ec9) list_single_graphic_heading_pane_fp_ParamLimits

0xf19f,	// (0x00054ec9) list_single_graphic_heading_pane_fp

0xf19f,	// (0x00054ec9) list_single_graphic_pane_fp_ParamLimits

0xf19f,	// (0x00054ec9) list_single_graphic_pane_fp

0xf19f,	// (0x00054ec9) list_single_heading_pane_fp_ParamLimits

0xf19f,	// (0x00054ec9) list_single_heading_pane_fp

0xf19f,	// (0x00054ec9) list_single_pane_fp_ParamLimits

0xf19f,	// (0x00054ec9) list_single_pane_fp

0xf1b6,	// (0x00054ee0) list_single_pane_fp_g1_ParamLimits

0xf1b6,	// (0x00054ee0) list_single_pane_fp_g1

0x2951,	// (0x0004867b) list_single_pane_fp_g2_ParamLimits

0x2951,	// (0x0004867b) list_single_pane_fp_g2

0x338f,	// (0x000490b9) list_single_pane_fp_g3_ParamLimits

0x338f,	// (0x000490b9) list_single_pane_fp_g3

0xf1c2,	// (0x00054eec) list_single_pane_fp_g4_ParamLimits

0xf1c2,	// (0x00054eec) list_single_pane_fp_g4

0x0003,

0xfaec,	// (0x00055816) list_single_pane_fp_g_ParamLimits

0xfaec,	// (0x00055816) list_single_pane_fp_g

0x33a3,	// (0x000490cd) list_single_pane_fp_t1_ParamLimits

0x33a3,	// (0x000490cd) list_single_pane_fp_t1

0x33ba,	// (0x000490e4) list_single_graphic_pane_fp_g1_ParamLimits

0x33ba,	// (0x000490e4) list_single_graphic_pane_fp_g1

0xf1b6,	// (0x00054ee0) list_single_graphic_pane_fp_g2_ParamLimits

0xf1b6,	// (0x00054ee0) list_single_graphic_pane_fp_g2

0x2951,	// (0x0004867b) list_single_graphic_pane_fp_g3_ParamLimits

0x2951,	// (0x0004867b) list_single_graphic_pane_fp_g3

0x338f,	// (0x000490b9) list_single_graphic_pane_fp_g4_ParamLimits

0x338f,	// (0x000490b9) list_single_graphic_pane_fp_g4

0xf1c2,	// (0x00054eec) list_single_graphic_pane_fp_g5_ParamLimits

0xf1c2,	// (0x00054eec) list_single_graphic_pane_fp_g5

0x0004,

0xfaf5,	// (0x0005581f) list_single_graphic_pane_fp_g_ParamLimits

0xfaf5,	// (0x0005581f) list_single_graphic_pane_fp_g

0x33c6,	// (0x000490f0) list_single_graphic_pane_fp_t1_ParamLimits

0x33c6,	// (0x000490f0) list_single_graphic_pane_fp_t1

0x33ba,	// (0x000490e4) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x33ba,	// (0x000490e4) list_single_graphic_heading_pane_fp_g1

0xf1b6,	// (0x00054ee0) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xf1b6,	// (0x00054ee0) list_single_graphic_heading_pane_fp_g2

0x2951,	// (0x0004867b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x2951,	// (0x0004867b) list_single_graphic_heading_pane_fp_g3

0x338f,	// (0x000490b9) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x338f,	// (0x000490b9) list_single_graphic_heading_pane_fp_g4

0xf1c2,	// (0x00054eec) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xf1c2,	// (0x00054eec) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfaf5,	// (0x0005581f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfaf5,	// (0x0005581f) list_single_graphic_heading_pane_fp_g

0x33dc,	// (0x00049106) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x33dc,	// (0x00049106) list_single_graphic_heading_pane_fp_t1

0x33f2,	// (0x0004911c) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x33f2,	// (0x0004911c) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb00,	// (0x0005582a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb00,	// (0x0005582a) list_single_graphic_heading_pane_fp_t

0x3404,	// (0x0004912e) list_single_cale_day_pane_fp_g1_ParamLimits

0x3404,	// (0x0004912e) list_single_cale_day_pane_fp_g1

0xf1ce,	// (0x00054ef8) list_single_cale_day_pane_fp_g2_ParamLimits

0xf1ce,	// (0x00054ef8) list_single_cale_day_pane_fp_g2

0x343c,	// (0x00049166) list_single_cale_day_pane_fp_g3_ParamLimits

0x343c,	// (0x00049166) list_single_cale_day_pane_fp_g3

0x3464,	// (0x0004918e) list_single_cale_day_pane_fp_g4_ParamLimits

0x3464,	// (0x0004918e) list_single_cale_day_pane_fp_g4

0x3488,	// (0x000491b2) list_single_cale_day_pane_fp_g5_ParamLimits

0x3488,	// (0x000491b2) list_single_cale_day_pane_fp_g5

0x0004,

0xfb05,	// (0x0005582f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb05,	// (0x0005582f) list_single_cale_day_pane_fp_g

0x34ac,	// (0x000491d6) list_single_cale_day_pane_fp_t1_ParamLimits

0x34ac,	// (0x000491d6) list_single_cale_day_pane_fp_t1

0x34d2,	// (0x000491fc) list_single_cale_day_pane_fp_t2_ParamLimits

0x34d2,	// (0x000491fc) list_single_cale_day_pane_fp_t2

0x34eb,	// (0x00049215) list_single_cale_day_pane_fp_t3_ParamLimits

0x34eb,	// (0x00049215) list_single_cale_day_pane_fp_t3

0x0002,

0xfb10,	// (0x0005583a) list_single_cale_day_pane_fp_t_ParamLimits

0xfb10,	// (0x0005583a) list_single_cale_day_pane_fp_t

0xf1b6,	// (0x00054ee0) list_empty_pane_fp_g1_ParamLimits

0xf1b6,	// (0x00054ee0) list_empty_pane_fp_g1

0x3504,	// (0x0004922e) list_empty_pane_fp_t1

0x3512,	// (0x0004923c) list_empty_pane_fp_t2

0x0001,

0xfb17,	// (0x00055841) list_empty_pane_fp_t

0xf1b6,	// (0x00054ee0) list_single_heading_pane_fp_g1_ParamLimits

0xf1b6,	// (0x00054ee0) list_single_heading_pane_fp_g1

0x2951,	// (0x0004867b) list_single_heading_pane_fp_g2_ParamLimits

0x2951,	// (0x0004867b) list_single_heading_pane_fp_g2

0x338f,	// (0x000490b9) list_single_heading_pane_fp_g3_ParamLimits

0x338f,	// (0x000490b9) list_single_heading_pane_fp_g3

0x0002,

0xfb1c,	// (0x00055846) list_single_heading_pane_fp_g_ParamLimits

0xfb1c,	// (0x00055846) list_single_heading_pane_fp_g

0x3520,	// (0x0004924a) list_single_heading_pane_fp_t1_ParamLimits

0x3520,	// (0x0004924a) list_single_heading_pane_fp_t1

0x3532,	// (0x0004925c) list_single_heading_pane_fp_t2_ParamLimits

0x3532,	// (0x0004925c) list_single_heading_pane_fp_t2

0x0001,

0xfb23,	// (0x0005584d) list_single_heading_pane_fp_t_ParamLimits

0xfb23,	// (0x0005584d) list_single_heading_pane_fp_t

0xc045,	// (0x00051d6f) aid_size_cell_fast

0xb408,	// (0x00051132) soft_indicator_pane_cp1_t1

0xc082,	// (0x00051dac) cell_app_pane_cp2_ParamLimits

0xc082,	// (0x00051dac) cell_app_pane_cp2

0x199b,	// (0x000476c5) fep_hwr_candidate_drop_down_list_pane

0x1b73,	// (0x0004789d) fep_hwr_candidate_pane_g3_ParamLimits

0x1b73,	// (0x0004789d) fep_hwr_candidate_pane_g3

0xb433,	// (0x0005115d) fep_hwr_candidate_pane_g4_ParamLimits

0xb433,	// (0x0005115d) fep_hwr_candidate_pane_g4

0x0002,

0xfabf,	// (0x000557e9) fep_hwr_candidate_pane_g_ParamLimits

0xfabf,	// (0x000557e9) fep_hwr_candidate_pane_g

0xed8d,	// (0x00054ab7) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xed8d,	// (0x00054ab7) fep_vkb_candidate_drop_down_list_pane

0xf0ce,	// (0x00054df8) fep_vkb_candidate_pane_g3

0xf0d6,	// (0x00054e00) fep_vkb_candidate_pane_g4

0x0002,

0x00ca,	// (0x00045df4) fep_vkb_candidate_pane_g

0x1bde,	// (0x00047908) cell_hwr_candidate_pane_g1_ParamLimits

0x1bec,	// (0x00047916) cell_hwr_candidate_pane_g3_ParamLimits

0x1bec,	// (0x00047916) cell_hwr_candidate_pane_g3

0x5c1e,	// (0x0004b948) cell_hwr_candidate_pane_g4_ParamLimits

0x5c1e,	// (0x0004b948) cell_hwr_candidate_pane_g4

0x0002,

0xfade,	// (0x00055808) cell_hwr_candidate_pane_g_ParamLimits

0xfade,	// (0x00055808) cell_hwr_candidate_pane_g

0xf0ed,	// (0x00054e17) cell_vkb_candidate_pane_g3_ParamLimits

0xf0ed,	// (0x00054e17) cell_vkb_candidate_pane_g3

0xf108,	// (0x00054e32) cell_vkb_candidate_pane_g4_ParamLimits

0xf108,	// (0x00054e32) cell_vkb_candidate_pane_g4

0xf1da,	// (0x00054f04) cell_app_pane_cp2_g1_ParamLimits

0xf1da,	// (0x00054f04) cell_app_pane_cp2_g1

0xf1f8,	// (0x00054f22) cell_app_pane_cp2_g2_ParamLimits

0xf1f8,	// (0x00054f22) cell_app_pane_cp2_g2

0x0001,

0xfb28,	// (0x00055852) cell_app_pane_cp2_g_ParamLimits

0xfb28,	// (0x00055852) cell_app_pane_cp2_g

0xf204,	// (0x00054f2e) cell_app_pane_cp2_t1_ParamLimits

0xf204,	// (0x00054f2e) cell_app_pane_cp2_t1

0xbeee,	// (0x00051c18) grid_highlight_pane_cp1_ParamLimits

0xbeee,	// (0x00051c18) grid_highlight_pane_cp1

0x1c2b,	// (0x00047955) cell_hwr_candidate_pane_cp1_ParamLimits

0x1c2b,	// (0x00047955) cell_hwr_candidate_pane_cp1

0x1bde,	// (0x00047908) fep_hwr_candidate_drop_down_list_pane_g1

0x1c4a,	// (0x00047974) fep_hwr_candidate_drop_down_list_pane_g2

0x1c57,	// (0x00047981) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb2d,	// (0x00055857) fep_hwr_candidate_drop_down_list_pane_g

0x1c64,	// (0x0004798e) fep_hwr_candidate_drop_down_list_scroll_pane

0x1c6d,	// (0x00047997) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1c6d,	// (0x00047997) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1c7a,	// (0x000479a4) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1c7a,	// (0x000479a4) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1c87,	// (0x000479b1) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1c87,	// (0x000479b1) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1c94,	// (0x000479be) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1c94,	// (0x000479be) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1caf,	// (0x000479d9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1caf,	// (0x000479d9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1cca,	// (0x000479f4) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1cca,	// (0x000479f4) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1ce5,	// (0x00047a0f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1ce5,	// (0x00047a0f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1d00,	// (0x00047a2a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1d00,	// (0x00047a2a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb34,	// (0x0005585e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb34,	// (0x0005585e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xf216,	// (0x00054f40) cell_vkb_candidate_pane_cp1_ParamLimits

0xf216,	// (0x00054f40) cell_vkb_candidate_pane_cp1

0xeea6,	// (0x00054bd0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xeea6,	// (0x00054bd0) fep_vkb_candidate_drop_down_list_pane_g1

0xf236,	// (0x00054f60) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xf236,	// (0x00054f60) fep_vkb_candidate_drop_down_list_pane_g2

0xf243,	// (0x00054f6d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xf243,	// (0x00054f6d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb45,	// (0x0005586f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb45,	// (0x0005586f) fep_vkb_candidate_drop_down_list_pane_g

0xf250,	// (0x00054f7a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xf250,	// (0x00054f7a) fep_vkb_candidate_drop_down_list_scroll_pane

0xf25d,	// (0x00054f87) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xf25d,	// (0x00054f87) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xf26a,	// (0x00054f94) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xf26a,	// (0x00054f94) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xf276,	// (0x00054fa0) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xf276,	// (0x00054fa0) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xf282,	// (0x00054fac) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf282,	// (0x00054fac) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xf2a3,	// (0x00054fcd) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf2a3,	// (0x00054fcd) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xf2c4,	// (0x00054fee) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xf2c4,	// (0x00054fee) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xf2e5,	// (0x0005500f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf2e5,	// (0x0005500f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xf306,	// (0x00055030) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf306,	// (0x00055030) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb4c,	// (0x00055876) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb4c,	// (0x00055876) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x890d,	// (0x0004e637) title_pane_g1_ParamLimits

0x891e,	// (0x0004e648) title_pane_g2_ParamLimits

0xf56a,	// (0x00055294) title_pane_g_ParamLimits

0xc40a,	// (0x00052134) aid_call2_pane

0xc412,	// (0x0005213c) aid_call_pane

0xc41a,	// (0x00052144) popup_clock_analogue_window_g1

0xc41a,	// (0x00052144) popup_clock_analogue_window_g2

0x1095,	// (0x00046dbf) popup_clock_analogue_window_g3

0x109e,	// (0x00046dc8) popup_clock_analogue_window_g4

0xb28c,	// (0x00050fb6) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x00055443) popup_clock_analogue_window_g

0x10a6,	// (0x00046dd0) popup_clock_analogue_window_t1

0x10b4,	// (0x00046dde) clock_digital_number_pane_ParamLimits

0x10b4,	// (0x00046dde) clock_digital_number_pane

0x10c0,	// (0x00046dea) clock_digital_number_pane_cp02_ParamLimits

0x10c0,	// (0x00046dea) clock_digital_number_pane_cp02

0x10cc,	// (0x00046df6) clock_digital_number_pane_cp03_ParamLimits

0x10cc,	// (0x00046df6) clock_digital_number_pane_cp03

0x10d8,	// (0x00046e02) clock_digital_number_pane_cp04_ParamLimits

0x10d8,	// (0x00046e02) clock_digital_number_pane_cp04

0x10e4,	// (0x00046e0e) clock_digital_separator_pane_ParamLimits

0x10e4,	// (0x00046e0e) clock_digital_separator_pane

0x10f0,	// (0x00046e1a) popup_clock_digital_window_t1_ParamLimits

0x10f0,	// (0x00046e1a) popup_clock_digital_window_t1

0xb28c,	// (0x00050fb6) clock_digital_number_pane_g1

0xb28c,	// (0x00050fb6) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x0005544e) clock_digital_number_pane_g

0xb28c,	// (0x00050fb6) clock_digital_separator_pane_g1

0xb28c,	// (0x00050fb6) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x0005544e) clock_digital_separator_pane_g

0x9929,	// (0x0004f653) aid_fill_nsta_ParamLimits

0x9a58,	// (0x0004f782) indicator_nsta_pane_ParamLimits

0xcd4e,	// (0x00052a78) popup_clock_analogue_window

0xcd4e,	// (0x00052a78) popup_clock_digital_window

0xd156,	// (0x00052e80) grid_indicator_nsta_pane_ParamLimits

0xe8c5,	// (0x000545ef) clock_nsta_pane_t2

0x0001,

0xfa91,	// (0x000557bb) clock_nsta_pane_t

0x1059,	// (0x00046d83) aid_size_max_handle

0x8147,	// (0x0004de71) aid_size_min_handle

0xc929,	// (0x00052653) editor_scroll_pane

0xf321,	// (0x0005504b) ex_editor_pane

0xc001,	// (0x00051d2b) scroll_pane_cp13

0xbe81,	// (0x00051bab) scroll_pane_cp14

0xc444,	// (0x0005216e) scroll_pane_cp36

0x90ca,	// (0x0004edf4) list_single_graphic_hl_pane_cp2_ParamLimits

0x90ca,	// (0x0004edf4) list_single_graphic_hl_pane_cp2

0xa15c,	// (0x0004fe86) list_single_graphic_hl_pane_ParamLimits

0xa15c,	// (0x0004fe86) list_single_graphic_hl_pane

0x3548,	// (0x00049272) aid_size_min_hl_cp1

0xf329,	// (0x00055053) list_highlight_pane_cp34_ParamLimits

0xf329,	// (0x00055053) list_highlight_pane_cp34

0xf33a,	// (0x00055064) list_single_graphic_hl_pane_g1_ParamLimits

0xf33a,	// (0x00055064) list_single_graphic_hl_pane_g1

0x8c9d,	// (0x0004e9c7) list_single_graphic_hl_pane_g2_ParamLimits

0x8c9d,	// (0x0004e9c7) list_single_graphic_hl_pane_g2

0x8c9d,	// (0x0004e9c7) list_single_graphic_hl_pane_g3_ParamLimits

0x8c9d,	// (0x0004e9c7) list_single_graphic_hl_pane_g3

0x3c99,	// (0x000499c3) list_single_graphic_hl_pane_g4_ParamLimits

0x3c99,	// (0x000499c3) list_single_graphic_hl_pane_g4

0x8ca9,	// (0x0004e9d3) list_single_graphic_hl_pane_g5_ParamLimits

0x8ca9,	// (0x0004e9d3) list_single_graphic_hl_pane_g5

0x0004,

0xfb5d,	// (0x00055887) list_single_graphic_hl_pane_g_ParamLimits

0xfb5d,	// (0x00055887) list_single_graphic_hl_pane_g

0x8cbd,	// (0x0004e9e7) list_single_graphic_hl_pane_t1_ParamLimits

0x8cbd,	// (0x0004e9e7) list_single_graphic_hl_pane_t1

0xf347,	// (0x00055071) aid_size_min_hl_cp2

0xf350,	// (0x0005507a) list_highlight_pane_cp34_cp2_ParamLimits

0xf350,	// (0x0005507a) list_highlight_pane_cp34_cp2

0xf33a,	// (0x00055064) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xf33a,	// (0x00055064) list_single_graphic_hl_pane_g1_cp2

0xf35d,	// (0x00055087) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xf35d,	// (0x00055087) list_single_graphic_hl_pane_g2_cp2

0xf369,	// (0x00055093) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xf369,	// (0x00055093) list_single_graphic_hl_pane_g3_cp2

0xc860,	// (0x0005258a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc860,	// (0x0005258a) list_single_graphic_hl_pane_g4_cp2

0xf377,	// (0x000550a1) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xf377,	// (0x000550a1) list_single_graphic_hl_pane_g5_cp2

0x81aa,	// (0x0004ded4) control_pane_g4_ParamLimits

0x81aa,	// (0x0004ded4) control_pane_g4

0xc039,	// (0x00051d63) bg_popup_sub_pane_cp10_ParamLimits

0xec29,	// (0x00054953) list_choice_list_pane_ParamLimits

0xec38,	// (0x00054962) scroll_pane_cp23

0xb425,	// (0x0005114f) bg_popup_preview_window_pane_cp02_ParamLimits

0xf159,	// (0x00054e83) list_preview_fixed_pane_ParamLimits

0xf16f,	// (0x00054e99) list_preview_fixed_pane_cp_ParamLimits

0xf16f,	// (0x00054e99) list_preview_fixed_pane_cp

0xf17b,	// (0x00054ea5) popup_preview_fixed_window_g1_ParamLimits

0xf17b,	// (0x00054ea5) popup_preview_fixed_window_g1

0xf187,	// (0x00054eb1) popup_preview_fixed_window_g2_ParamLimits

0xf187,	// (0x00054eb1) popup_preview_fixed_window_g2

0x0002,

0xfae5,	// (0x0005580f) popup_preview_fixed_window_g_ParamLimits

0xfae5,	// (0x0005580f) popup_preview_fixed_window_g

0x0fcd,	// (0x00046cf7) aid_navi_side_left_pane_ParamLimits

0x0fe2,	// (0x00046d0c) aid_navi_side_right_pane_ParamLimits

0x0ffa,	// (0x00046d24) navi_icon_pane_stacon_ParamLimits

0x100e,	// (0x00046d38) navi_navi_pane_stacon_ParamLimits

0x0ffa,	// (0x00046d24) navi_text_pane_stacon_ParamLimits

0xb282,	// (0x00050fac) main_text_info_pane

0xf3a1,	// (0x000550cb) listscroll_text_info_pane

0xf3a9,	// (0x000550d3) list_text_info_pane_ParamLimits

0xf3a9,	// (0x000550d3) list_text_info_pane

0xf3b8,	// (0x000550e2) scroll_pane_cp24_ParamLimits

0xf3b8,	// (0x000550e2) scroll_pane_cp24

0xa52c,	// (0x00050256) list_text_info_pane_t1_ParamLimits

0xa52c,	// (0x00050256) list_text_info_pane_t1

0x9291,	// (0x0004efbb) popup_fast_swap2_window_ParamLimits

0x9291,	// (0x0004efbb) popup_fast_swap2_window

0xf3d6,	// (0x00055100) aid_size_cell_fast2

0xb282,	// (0x00050fac) bg_popup_window_pane_cp17

0xd200,	// (0x00052f2a) heading_pane_cp2

0xb973,	// (0x0005169d) listscroll_fast2_pane

0xf3e0,	// (0x0005510a) grid_fast2_pane

0xf3ea,	// (0x00055114) listscroll_fast2_pane_g1

0xf3f2,	// (0x0005511c) listscroll_fast2_pane_g2

0x0001,

0x0167,	// (0x00045e91) listscroll_fast2_pane_g

0xc001,	// (0x00051d2b) scroll_pane_cp26

0xf3fc,	// (0x00055126) cell_fast2_pane_ParamLimits

0xf3fc,	// (0x00055126) cell_fast2_pane

0xf411,	// (0x0005513b) cell_fast2_pane_g1

0xf41a,	// (0x00055144) cell_fast2_pane_g2

0xf423,	// (0x0005514d) cell_fast2_pane_g3

0x0002,

0x016c,	// (0x00045e96) cell_fast2_pane_g

0xba07,	// (0x00051731) grid_highlight_pane_cp9

0xba1c,	// (0x00051746) main_eswt_pane_ParamLimits

0xba1c,	// (0x00051746) main_eswt_pane

0xf3cd,	// (0x000550f7) list_single_text_info_pane

0xf42b,	// (0x00055155) eswt_ctrl_button_pane

0xf42b,	// (0x00055155) eswt_ctrl_canvas_pane

0xf433,	// (0x0005515d) eswt_ctrl_combo_pane

0xf42b,	// (0x00055155) eswt_ctrl_default_pane

0xf42b,	// (0x00055155) eswt_ctrl_label_pane

0xf43b,	// (0x00055165) eswt_ctrl_wait_pane

0xf443,	// (0x0005516d) eswt_shell_pane

0xb282,	// (0x00050fac) listscroll_eswt_app_pane

0xf463,	// (0x0005518d) popup_eswt_tasktip_window_ParamLimits

0xf463,	// (0x0005518d) popup_eswt_tasktip_window

0xcf4b,	// (0x00052c75) bg_popup_window_pane_cp18

0xf474,	// (0x0005519e) eswt_control_pane_g1_ParamLimits

0xf474,	// (0x0005519e) eswt_control_pane_g1

0xf481,	// (0x000551ab) eswt_control_pane_g2_ParamLimits

0xf481,	// (0x000551ab) eswt_control_pane_g2

0xf48e,	// (0x000551b8) eswt_control_pane_g3_ParamLimits

0xf48e,	// (0x000551b8) eswt_control_pane_g3

0xf49b,	// (0x000551c5) eswt_control_pane_g4_ParamLimits

0xf49b,	// (0x000551c5) eswt_control_pane_g4

0x0003,

0x0173,	// (0x00045e9d) eswt_control_pane_g_ParamLimits

0x0173,	// (0x00045e9d) eswt_control_pane_g

0xbeee,	// (0x00051c18) bg_button_pane_ParamLimits

0xbeee,	// (0x00051c18) bg_button_pane

0xba1c,	// (0x00051746) common_borders_pane_copy2_ParamLimits

0xba1c,	// (0x00051746) common_borders_pane_copy2

0xf4a8,	// (0x000551d2) control_button_pane_g1_ParamLimits

0xf4a8,	// (0x000551d2) control_button_pane_g1

0xf4b4,	// (0x000551de) control_button_pane_g2_ParamLimits

0xf4b4,	// (0x000551de) control_button_pane_g2

0xf4c0,	// (0x000551ea) control_button_pane_g3_ParamLimits

0xf4c0,	// (0x000551ea) control_button_pane_g3

0x0002,

0x017c,	// (0x00045ea6) control_button_pane_g_ParamLimits

0x017c,	// (0x00045ea6) control_button_pane_g

0xf4d4,	// (0x000551fe) control_button_pane_t1

0xf4e2,	// (0x0005520c) control_button_pane_t2

0x0001,

0x0183,	// (0x00045ead) control_button_pane_t

0xce5b,	// (0x00052b85) bg_button_pane_g1

0xce6b,	// (0x00052b95) bg_button_pane_g2

0xce63,	// (0x00052b8d) bg_button_pane_g3

0xce7b,	// (0x00052ba5) bg_button_pane_g4

0xce73,	// (0x00052b9d) bg_button_pane_g5

0xce83,	// (0x00052bad) bg_button_pane_g6

0xce8b,	// (0x00052bb5) bg_button_pane_g7

0xce9b,	// (0x00052bc5) bg_button_pane_g8

0xce93,	// (0x00052bbd) bg_button_pane_g9

0x0008,

0xf877,	// (0x000555a1) bg_button_pane_g

0xebe4,	// (0x0005490e) common_borders_pane_ParamLimits

0xebe4,	// (0x0005490e) common_borders_pane

0xf474,	// (0x0005519e) eswt_control_pane_g1_copy1_ParamLimits

0xf474,	// (0x0005519e) eswt_control_pane_g1_copy1

0xf481,	// (0x000551ab) eswt_control_pane_g2_copy1_ParamLimits

0xf481,	// (0x000551ab) eswt_control_pane_g2_copy1

0xf48e,	// (0x000551b8) eswt_control_pane_g3_copy1_ParamLimits

0xf48e,	// (0x000551b8) eswt_control_pane_g3_copy1

0xf49b,	// (0x000551c5) eswt_control_pane_g4_copy1_ParamLimits

0xf49b,	// (0x000551c5) eswt_control_pane_g4_copy1

0xec1f,	// (0x00054949) bg_eswt_ctrl_canvas_pane_g1

0xebe4,	// (0x0005490e) common_borders_pane_cp2_ParamLimits

0xebe4,	// (0x0005490e) common_borders_pane_cp2

0xebe4,	// (0x0005490e) common_borders_pane_cp3_ParamLimits

0xebe4,	// (0x0005490e) common_borders_pane_cp3

0xf4f0,	// (0x0005521a) separator_horizontal_pane

0xf4f8,	// (0x00055222) separator_vertical_pane

0xf474,	// (0x0005519e) eswt_control_pane_g1_copy2_ParamLimits

0xf474,	// (0x0005519e) eswt_control_pane_g1_copy2

0xf481,	// (0x000551ab) eswt_control_pane_g2_copy2_ParamLimits

0xf481,	// (0x000551ab) eswt_control_pane_g2_copy2

0xf48e,	// (0x000551b8) eswt_control_pane_g3_copy2_ParamLimits

0xf48e,	// (0x000551b8) eswt_control_pane_g3_copy2

0xf49b,	// (0x000551c5) eswt_control_pane_g4_copy2_ParamLimits

0xf49b,	// (0x000551c5) eswt_control_pane_g4_copy2

0xb282,	// (0x00050fac) common_borders_pane_cp4

0xf501,	// (0x0005522b) separator_horizontal_pane_g1

0xf50a,	// (0x00055234) separator_horizontal_pane_g2

0xf513,	// (0x0005523d) separator_horizontal_pane_g3

0x0002,

0x0188,	// (0x00045eb2) separator_horizontal_pane_g

0xf474,	// (0x0005519e) eswt_control_pane_g1_copy3_ParamLimits

0xf474,	// (0x0005519e) eswt_control_pane_g1_copy3

0xf481,	// (0x000551ab) eswt_control_pane_g2_copy3_ParamLimits

0xf481,	// (0x000551ab) eswt_control_pane_g2_copy3

0xf48e,	// (0x000551b8) eswt_control_pane_g3_copy3_ParamLimits

0xf48e,	// (0x000551b8) eswt_control_pane_g3_copy3

0xf49b,	// (0x000551c5) eswt_control_pane_g4_copy3_ParamLimits

0xf49b,	// (0x000551c5) eswt_control_pane_g4_copy3

0xb282,	// (0x00050fac) common_borders_pane_cp5

0xf51c,	// (0x00055246) separator_vertical_pane_g1

0xf525,	// (0x0005524f) separator_vertical_pane_g2

0xf52e,	// (0x00055258) separator_vertical_pane_g3

0x0002,

0x018f,	// (0x00045eb9) separator_vertical_pane_g

0xf474,	// (0x0005519e) eswt_control_pane_g1_copy4_ParamLimits

0xf474,	// (0x0005519e) eswt_control_pane_g1_copy4

0xf481,	// (0x000551ab) eswt_control_pane_g2_copy4_ParamLimits

0xf481,	// (0x000551ab) eswt_control_pane_g2_copy4

0xf48e,	// (0x000551b8) eswt_control_pane_g3_copy4_ParamLimits

0xf48e,	// (0x000551b8) eswt_control_pane_g3_copy4

0xf49b,	// (0x000551c5) eswt_control_pane_g4_copy4_ParamLimits

0xf49b,	// (0x000551c5) eswt_control_pane_g4_copy4

0xa54a,	// (0x00050274) eswt_ctrl_combo_button_pane

0xa552,	// (0x0005027c) eswt_ctrl_input_pane

0xa55a,	// (0x00050284) popup_choice_list_window_cp70

0xa562,	// (0x0005028c) eswt_ctrl_input_pane_t1

0xb282,	// (0x00050fac) input_focus_pane_cp70

0xebe4,	// (0x0005490e) bg_button_pane_cp70_ParamLimits

0xebe4,	// (0x0005490e) bg_button_pane_cp70

0xa570,	// (0x0005029a) eswt_ctrl_combo_button_pane_g1

0xf537,	// (0x00055261) wait_bar_pane_cp70

0xcf4b,	// (0x00052c75) bg_popup_window_pane_cp70_ParamLimits

0xcf4b,	// (0x00052c75) bg_popup_window_pane_cp70

0xf53f,	// (0x00055269) popup_eswt_tasktip_window_t1

0xf555,	// (0x0005527f) wait_bar_pane_cp71_ParamLimits

0xf555,	// (0x0005527f) wait_bar_pane_cp71

0xf561,	// (0x0005528b) grid_eswt_app_pane

0xc250,	// (0x00051f7a) scroll_pane_cp70

0xa578,	// (0x000502a2) cell_eswt_app_pane_ParamLimits

0xa578,	// (0x000502a2) cell_eswt_app_pane

0xa5a2,	// (0x000502cc) cell_eswt_app_pane_g1_ParamLimits

0xa5a2,	// (0x000502cc) cell_eswt_app_pane_g1

0xa5d1,	// (0x000502fb) cell_eswt_app_pane_g2_ParamLimits

0xa5d1,	// (0x000502fb) cell_eswt_app_pane_g2

0x0001,

0x0196,	// (0x00045ec0) cell_eswt_app_pane_g_ParamLimits

0x0196,	// (0x00045ec0) cell_eswt_app_pane_g

0xa5fa,	// (0x00050324) cell_eswt_app_pane_t1_ParamLimits

0xa5fa,	// (0x00050324) cell_eswt_app_pane_t1

0x489b,	// (0x0004a5c5) grid_highlight_pane_cp70_ParamLimits

0x489b,	// (0x0004a5c5) grid_highlight_pane_cp70

0xc7fc,	// (0x00052526) set_content_pane_g1

0xcb00,	// (0x0005282a) status_small_volume_pane

0x1d1b,	// (0x00047a45) status_small_volume_pane_g1

0x1d23,	// (0x00047a4d) volume_small2_pane

0x1d2c,	// (0x00047a56) volume_small2_pane_g1

0x1d35,	// (0x00047a5f) volume_small2_pane_g2

0x1d3e,	// (0x00047a68) volume_small2_pane_g3

0x1d47,	// (0x00047a71) volume_small2_pane_g4

0x1d50,	// (0x00047a7a) volume_small2_pane_g5

0x1d59,	// (0x00047a83) volume_small2_pane_g6

0x1d62,	// (0x00047a8c) volume_small2_pane_g7

0x1d6b,	// (0x00047a95) volume_small2_pane_g8

0x1d74,	// (0x00047a9e) volume_small2_pane_g9

0x1d7d,	// (0x00047aa7) volume_small2_pane_g10

0x0009,

0xfb68,	// (0x00055892) volume_small2_pane_g

0xefb3,	// (0x00054cdd) fep_vkb_top_text_pane_g1_ParamLimits

0xa4d4,	// (0x000501fe) fep_vkb_top_text_pane_t1_ParamLimits

0xf193,	// (0x00054ebd) popup_preview_fixed_window_g3_ParamLimits

0xf193,	// (0x00054ebd) popup_preview_fixed_window_g3

0x98bc,	// (0x0004f5e6) popup_toolbar_trans_pane

0x9fd4,	// (0x0004fcfe) aid_height_set_list_ParamLimits

0xd680,	// (0x000533aa) aid_size_parent_ParamLimits

0xc039,	// (0x00051d63) list_highlight_pane_cp2_ParamLimits

0xc7fc,	// (0x00052526) set_content_pane_g1_ParamLimits

0x8c8b,	// (0x0004e9b5) list_single_image_pane_ParamLimits

0x8c8b,	// (0x0004e9b5) list_single_image_pane

0xa62c,	// (0x00050356) aid_size_cell_image_ParamLimits

0xa62c,	// (0x00050356) aid_size_cell_image

0xa639,	// (0x00050363) grid_single_image_pane_ParamLimits

0xa639,	// (0x00050363) grid_single_image_pane

0xbe89,	// (0x00051bb3) list_single_image_pane_g1_ParamLimits

0xbe89,	// (0x00051bb3) list_single_image_pane_g1

0xbf08,	// (0x00051c32) list_single_image_pane_g2_ParamLimits

0xbf08,	// (0x00051c32) list_single_image_pane_g2

0x0001,

0x01b0,	// (0x00045eda) list_single_image_pane_g_ParamLimits

0x01b0,	// (0x00045eda) list_single_image_pane_g

0x48c0,	// (0x0004a5ea) list_single_image_pane_t1_ParamLimits

0x48c0,	// (0x0004a5ea) list_single_image_pane_t1

0xa645,	// (0x0005036f) cell_image_list_pane_ParamLimits

0xa645,	// (0x0005036f) cell_image_list_pane

0xa659,	// (0x00050383) cell_image_list_pane_g1

0xa662,	// (0x0005038c) cell_image_list_pane_g2

0x0001,

0x01b5,	// (0x00045edf) cell_image_list_pane_g

0x48fc,	// (0x0004a626) aid_size_cell_tb_trans_pane

0xbeee,	// (0x00051c18) bg_tb_trans_pane

0x490e,	// (0x0004a638) grid_tb_trans_pane

0xce5b,	// (0x00052b85) bg_tb_trans_pane_g1

0xce6b,	// (0x00052b95) bg_tb_trans_pane_g2

0xce63,	// (0x00052b8d) bg_tb_trans_pane_g3

0xce7b,	// (0x00052ba5) bg_tb_trans_pane_g4

0xce73,	// (0x00052b9d) bg_tb_trans_pane_g5

0xce9b,	// (0x00052bc5) bg_tb_trans_pane_g6

0xce93,	// (0x00052bbd) bg_tb_trans_pane_g7

0xce83,	// (0x00052bad) bg_tb_trans_pane_g8

0xce8b,	// (0x00052bb5) bg_tb_trans_pane_g9

0x0008,

0xfb7d,	// (0x000558a7) bg_tb_trans_pane_g

0x4922,	// (0x0004a64c) cell_toolbar_trans_pane_ParamLimits

0x4922,	// (0x0004a64c) cell_toolbar_trans_pane

0xec1f,	// (0x00054949) cell_toolbar_trans_pane_g1

0xa37d,	// (0x000500a7) list_form2_midp_pane_t1

0xa38b,	// (0x000500b5) list_form2_midp_pane_t2

0x0001,

0x0063,	// (0x00045d8d) list_form2_midp_pane_t

0xe97c,	// (0x000546a6) scroll_pane_cp51_ParamLimits

0xeaf2,	// (0x0005481c) form2_midp_wait_pane_g1

0xeafb,	// (0x00054825) form2_midp_wait_pane_g2

0xeb04,	// (0x0005482e) form2_midp_wait_pane_g3

0x0002,

0x0078,	// (0x00045da2) form2_midp_wait_pane_g

0xb2f2,	// (0x0005101c) list_highlight_pane_cp21_ParamLimits

0xeb24,	// (0x0005484e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xeb33,	// (0x0005485d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe011,	// (0x00053d3b) list_single_2graphic_im_pane_ParamLimits

0xe011,	// (0x00053d3b) list_single_2graphic_im_pane

0xa66b,	// (0x00050395) list_single_2graphic_im_pane_g1_ParamLimits

0xa66b,	// (0x00050395) list_single_2graphic_im_pane_g1

0xa67c,	// (0x000503a6) list_single_2graphic_im_pane_g2_ParamLimits

0xa67c,	// (0x000503a6) list_single_2graphic_im_pane_g2

0xa688,	// (0x000503b2) list_single_2graphic_im_pane_g3_ParamLimits

0xa688,	// (0x000503b2) list_single_2graphic_im_pane_g3

0x0003,

0xfb90,	// (0x000558ba) list_single_2graphic_im_pane_g_ParamLimits

0xfb90,	// (0x000558ba) list_single_2graphic_im_pane_g

0xa69c,	// (0x000503c6) list_single_2graphic_im_pane_t1_ParamLimits

0xa69c,	// (0x000503c6) list_single_2graphic_im_pane_t1

0xf19f,	// (0x00054ec9) list_single_graphic_2heading_pane_fp_ParamLimits

0xf19f,	// (0x00054ec9) list_single_graphic_2heading_pane_fp

0x33ba,	// (0x000490e4) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x33ba,	// (0x000490e4) list_single_graphic_2heading_pane_fp_g1

0xf1b6,	// (0x00054ee0) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xf1b6,	// (0x00054ee0) list_single_graphic_2heading_pane_fp_g2

0x2951,	// (0x0004867b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x2951,	// (0x0004867b) list_single_graphic_2heading_pane_fp_g3

0x338f,	// (0x000490b9) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x338f,	// (0x000490b9) list_single_graphic_2heading_pane_fp_g4

0xf1c2,	// (0x00054eec) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xf1c2,	// (0x00054eec) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfaf5,	// (0x0005581f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfaf5,	// (0x0005581f) list_single_graphic_2heading_pane_fp_g

0x3571,	// (0x0004929b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3571,	// (0x0004929b) list_single_graphic_2heading_pane_fp_t1

0x33f2,	// (0x0004911c) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x33f2,	// (0x0004911c) list_single_graphic_2heading_pane_fp_t2

0x3587,	// (0x000492b1) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3587,	// (0x000492b1) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfb99,	// (0x000558c3) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfb99,	// (0x000558c3) list_single_graphic_2heading_pane_fp_t

0xecbf,	// (0x000549e9) fep_hwr_write_pane_g5_ParamLimits

0xecbf,	// (0x000549e9) fep_hwr_write_pane_g5

0xeccb,	// (0x000549f5) fep_hwr_write_pane_g6_ParamLimits

0xeccb,	// (0x000549f5) fep_hwr_write_pane_g6

0xf443,	// (0x0005516d) eswt_shell_pane_ParamLimits

0xcf4b,	// (0x00052c75) bg_popup_window_pane_cp18_ParamLimits

0xdf51,	// (0x00053c7b) heading_pane_cp70

0xf53f,	// (0x00055269) popup_eswt_tasktip_window_t1_ParamLimits

0x997d,	// (0x0004f6a7) aid_touch_tab_arrow_left

0x9993,	// (0x0004f6bd) aid_touch_tab_arrow_right

0x8936,	// (0x0004e660) title_pane_g3_ParamLimits

0x8936,	// (0x0004e660) title_pane_g3

0xbead,	// (0x00051bd7) set_value_pane_g1

0x98bc,	// (0x0004f5e6) popup_toolbar_trans_pane_ParamLimits

0x48fc,	// (0x0004a626) aid_size_cell_tb_trans_pane_ParamLimits

0xbeee,	// (0x00051c18) bg_tb_trans_pane_ParamLimits

0x490e,	// (0x0004a638) grid_tb_trans_pane_ParamLimits

0xb425,	// (0x0005114f) cont_note_pane_ParamLimits

0xb425,	// (0x0005114f) cont_note_pane

0xba1c,	// (0x00051746) cont_snote2_single_text_pane_ParamLimits

0xba1c,	// (0x00051746) cont_snote2_single_text_pane

0xba1c,	// (0x00051746) cont_snote2_single_graphic_pane_ParamLimits

0xba1c,	// (0x00051746) cont_snote2_single_graphic_pane

0xd416,	// (0x00053140) cont_note_wait_pane_ParamLimits

0xd416,	// (0x00053140) cont_note_wait_pane

0xd416,	// (0x00053140) cont_note_image_pane_ParamLimits

0xd416,	// (0x00053140) cont_note_image_pane

0x49b6,	// (0x0004a6e0) popup_note2_window_g1_ParamLimits

0x49b6,	// (0x0004a6e0) popup_note2_window_g1

0x49e7,	// (0x0004a711) popup_note2_window_t1_ParamLimits

0x49e7,	// (0x0004a711) popup_note2_window_t1

0x4a2c,	// (0x0004a756) popup_note2_window_t2_ParamLimits

0x4a2c,	// (0x0004a756) popup_note2_window_t2

0x4a71,	// (0x0004a79b) popup_note2_window_t3_ParamLimits

0x4a71,	// (0x0004a79b) popup_note2_window_t3

0x4ab6,	// (0x0004a7e0) popup_note2_window_t4_ParamLimits

0x4ab6,	// (0x0004a7e0) popup_note2_window_t4

0xb805,	// (0x0005152f) popup_note2_window_t5_ParamLimits

0xb805,	// (0x0005152f) popup_note2_window_t5

0x0004,

0xfba5,	// (0x000558cf) popup_note2_window_t_ParamLimits

0xfba5,	// (0x000558cf) popup_note2_window_t

0x4ae5,	// (0x0004a80f) popup_note2_image_window_g1_ParamLimits

0x4ae5,	// (0x0004a80f) popup_note2_image_window_g1

0x4af1,	// (0x0004a81b) popup_note2_image_window_g2_ParamLimits

0x4af1,	// (0x0004a81b) popup_note2_image_window_g2

0x0001,

0xfbb0,	// (0x000558da) popup_note2_image_window_g_ParamLimits

0xfbb0,	// (0x000558da) popup_note2_image_window_g

0x4b03,	// (0x0004a82d) popup_note2_image_window_t1_ParamLimits

0x4b03,	// (0x0004a82d) popup_note2_image_window_t1

0x4b1b,	// (0x0004a845) popup_note2_image_window_t2_ParamLimits

0x4b1b,	// (0x0004a845) popup_note2_image_window_t2

0x4b33,	// (0x0004a85d) popup_note2_image_window_t3_ParamLimits

0x4b33,	// (0x0004a85d) popup_note2_image_window_t3

0x0002,

0xfbb5,	// (0x000558df) popup_note2_image_window_t_ParamLimits

0xfbb5,	// (0x000558df) popup_note2_image_window_t

0xd424,	// (0x0005314e) popup_note2_wait_window_g1_ParamLimits

0xd424,	// (0x0005314e) popup_note2_wait_window_g1

0xd430,	// (0x0005315a) popup_note2_wait_window_g2_ParamLimits

0xd430,	// (0x0005315a) popup_note2_wait_window_g2

0xd43c,	// (0x00053166) popup_note2_wait_window_g3_ParamLimits

0xd43c,	// (0x00053166) popup_note2_wait_window_g3

0x0002,

0xf859,	// (0x00055583) popup_note2_wait_window_g_ParamLimits

0xf859,	// (0x00055583) popup_note2_wait_window_g

0x4b4f,	// (0x0004a879) popup_note2_wait_window_t1_ParamLimits

0x4b4f,	// (0x0004a879) popup_note2_wait_window_t1

0x4b6d,	// (0x0004a897) popup_note2_wait_window_t2_ParamLimits

0x4b6d,	// (0x0004a897) popup_note2_wait_window_t2

0x4b8b,	// (0x0004a8b5) popup_note2_wait_window_t3_ParamLimits

0x4b8b,	// (0x0004a8b5) popup_note2_wait_window_t3

0x4b9d,	// (0x0004a8c7) popup_note2_wait_window_t4_ParamLimits

0x4b9d,	// (0x0004a8c7) popup_note2_wait_window_t4

0x0003,

0xfbbc,	// (0x000558e6) popup_note2_wait_window_t_ParamLimits

0xfbbc,	// (0x000558e6) popup_note2_wait_window_t

0x4baf,	// (0x0004a8d9) wait_bar2_pane_ParamLimits

0x4baf,	// (0x0004a8d9) wait_bar2_pane

0x4bc7,	// (0x0004a8f1) popup_snote2_single_text_window_g1_ParamLimits

0x4bc7,	// (0x0004a8f1) popup_snote2_single_text_window_g1

0x4bef,	// (0x0004a919) popup_snote2_single_text_window_t1_ParamLimits

0x4bef,	// (0x0004a919) popup_snote2_single_text_window_t1

0x4c3b,	// (0x0004a965) popup_snote2_single_text_window_t2_ParamLimits

0x4c3b,	// (0x0004a965) popup_snote2_single_text_window_t2

0x4c87,	// (0x0004a9b1) popup_snote2_single_text_window_t3_ParamLimits

0x4c87,	// (0x0004a9b1) popup_snote2_single_text_window_t3

0x4cc8,	// (0x0004a9f2) popup_snote2_single_text_window_t4_ParamLimits

0x4cc8,	// (0x0004a9f2) popup_snote2_single_text_window_t4

0x4cfe,	// (0x0004aa28) popup_snote2_single_text_window_t5_ParamLimits

0x4cfe,	// (0x0004aa28) popup_snote2_single_text_window_t5

0x0004,

0xfbc5,	// (0x000558ef) popup_snote2_single_text_window_t_ParamLimits

0xfbc5,	// (0x000558ef) popup_snote2_single_text_window_t

0x4d29,	// (0x0004aa53) popup_snote2_single_graphic_window_g1_ParamLimits

0x4d29,	// (0x0004aa53) popup_snote2_single_graphic_window_g1

0x4d51,	// (0x0004aa7b) popup_snote2_single_graphic_window_g2_ParamLimits

0x4d51,	// (0x0004aa7b) popup_snote2_single_graphic_window_g2

0x0001,

0xfbd0,	// (0x000558fa) popup_snote2_single_graphic_window_g_ParamLimits

0xfbd0,	// (0x000558fa) popup_snote2_single_graphic_window_g

0x4d79,	// (0x0004aaa3) popup_snote2_single_graphic_window_t1_ParamLimits

0x4d79,	// (0x0004aaa3) popup_snote2_single_graphic_window_t1

0x4dc5,	// (0x0004aaef) popup_snote2_single_graphic_window_t2_ParamLimits

0x4dc5,	// (0x0004aaef) popup_snote2_single_graphic_window_t2

0x4c87,	// (0x0004a9b1) popup_snote2_single_graphic_window_t3_ParamLimits

0x4c87,	// (0x0004a9b1) popup_snote2_single_graphic_window_t3

0x4cc8,	// (0x0004a9f2) popup_snote2_single_graphic_window_t4_ParamLimits

0x4cc8,	// (0x0004a9f2) popup_snote2_single_graphic_window_t4

0x4cfe,	// (0x0004aa28) popup_snote2_single_graphic_window_t5_ParamLimits

0x4cfe,	// (0x0004aa28) popup_snote2_single_graphic_window_t5

0x0004,

0xfbd5,	// (0x000558ff) popup_snote2_single_graphic_window_t_ParamLimits

0xfbd5,	// (0x000558ff) popup_snote2_single_graphic_window_t

0xe92c,	// (0x00054656) clock_nsta_pane_cp2_t1

0xe92c,	// (0x00054656) clock_nsta_pane_cp2_t2

0x0001,

0x0039,	// (0x00045d63) clock_nsta_pane_cp2_t

0x0ea7,	// (0x00046bd1) form_field_data_wide_pane_g1_ParamLimits

0xbe89,	// (0x00051bb3) form_field_data_wide_pane_g2_ParamLimits

0xbe89,	// (0x00051bb3) form_field_data_wide_pane_g2

0xbf08,	// (0x00051c32) form_field_data_wide_pane_g3_ParamLimits

0xbf08,	// (0x00051c32) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x000553c6) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x000553c6) form_field_data_wide_pane_g

0xa293,	// (0x0004ffbd) grid_touch_3_pane_ParamLimits

0xa293,	// (0x0004ffbd) grid_touch_3_pane

0xa6cd,	// (0x000503f7) cell_touch_3_pane_ParamLimits

0xa6cd,	// (0x000503f7) cell_touch_3_pane

0xec1f,	// (0x00054949) cell_touch_3_pane_g1

0xec1f,	// (0x00054949) cell_touch_3_pane_g2

0x0001,

0x00be,	// (0x00045de8) cell_touch_3_pane_g

0xb837,	// (0x00051561) cont_query_data_pane

0xb83f,	// (0x00051569) cont_query_data_pane_cp1

0x4e40,	// (0x0004ab6a) button_value_adjust_pane_cp7

0x4e48,	// (0x0004ab72) query_popup_pane_cp3

0xc476,	// (0x000521a0) bg_popup_sub_pane_cp22_ParamLimits

0x110f,	// (0x00046e39) navi_navi_volume_pane_cp2

0x112a,	// (0x00046e54) popup_side_volume_key_window_g2

0x1139,	// (0x00046e63) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x00055458) popup_side_volume_key_window_g

0x1156,	// (0x00046e80) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x0005545f) popup_side_volume_key_window_t

0xc6c6,	// (0x000523f0) popup_side_volume_key_window_ParamLimits

0x8b3f,	// (0x0004e869) list_double_graphic_pane_g4_ParamLimits

0x8b3f,	// (0x0004e869) list_double_graphic_pane_g4

0x8c77,	// (0x0004e9a1) list_single_2heading_msg_pane_ParamLimits

0x8c77,	// (0x0004e9a1) list_single_2heading_msg_pane

0x8cd3,	// (0x0004e9fd) list_single_2heading_msg_pane_g1_ParamLimits

0x8cd3,	// (0x0004e9fd) list_single_2heading_msg_pane_g1

0x8cdf,	// (0x0004ea09) list_single_2heading_msg_pane_g2_ParamLimits

0x8cdf,	// (0x0004ea09) list_single_2heading_msg_pane_g2

0x8cf2,	// (0x0004ea1c) list_single_2heading_msg_pane_g3_ParamLimits

0x8cf2,	// (0x0004ea1c) list_single_2heading_msg_pane_g3

0x8cfe,	// (0x0004ea28) list_single_2heading_msg_pane_g4_ParamLimits

0x8cfe,	// (0x0004ea28) list_single_2heading_msg_pane_g4

0x0003,

0xfbe0,	// (0x0005590a) list_single_2heading_msg_pane_g_ParamLimits

0xfbe0,	// (0x0005590a) list_single_2heading_msg_pane_g

0x8d16,	// (0x0004ea40) list_single_2heading_msg_pane_t1_ParamLimits

0x8d16,	// (0x0004ea40) list_single_2heading_msg_pane_t1

0x8d3e,	// (0x0004ea68) list_single_2heading_msg_pane_t2_ParamLimits

0x8d3e,	// (0x0004ea68) list_single_2heading_msg_pane_t2

0x8da9,	// (0x0004ead3) list_single_2heading_msg_pane_t3_ParamLimits

0x8da9,	// (0x0004ead3) list_single_2heading_msg_pane_t3

0x363c,	// (0x00049366) list_single_2heading_msg_pane_t4_ParamLimits

0x363c,	// (0x00049366) list_single_2heading_msg_pane_t4

0x0003,

0xfbe9,	// (0x00055913) list_single_2heading_msg_pane_t_ParamLimits

0xfbe9,	// (0x00055913) list_single_2heading_msg_pane_t

0xb2a0,	// (0x00050fca) title_pane_g4_ParamLimits

0xb2a0,	// (0x00050fca) title_pane_g4

0x0f1d,	// (0x00046c47) title_pane_stacon_g3_ParamLimits

0x0f1d,	// (0x00046c47) title_pane_stacon_g3

0x4979,	// (0x0004a6a3) list_single_2graphic_im_pane_g4_ParamLimits

0x4979,	// (0x0004a6a3) list_single_2graphic_im_pane_g4

0xdd75,	// (0x00053a9f) popup_side_volume_key_window_cp

0xe24d,	// (0x00053f77) main_idle_act2_pane_t1

0x14ca,	// (0x000471f4) toolbar_button_pane_g10

0x8f5f,	// (0x0004ec89) popup_toolbar_window_cp1

0xe91d,	// (0x00054647) clock_nsta_pane_cp_t1

0xe91d,	// (0x00054647) clock_nsta_pane_cp_t2

0x0001,

0x0034,	// (0x00045d5e) clock_nsta_pane_cp_t

0x110f,	// (0x00046e39) navi_navi_volume_pane_cp2_ParamLimits

0x111e,	// (0x00046e48) popup_side_volume_key_window_g1_ParamLimits

0x112a,	// (0x00046e54) popup_side_volume_key_window_g2_ParamLimits

0x1139,	// (0x00046e63) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x00055458) popup_side_volume_key_window_g_ParamLimits

0x1987,	// (0x000476b1) fep_hwr_aid_pane

0x1a2e,	// (0x00047758) bg_fep_hwr_top_pane_g4_ParamLimits

0xec8f,	// (0x000549b9) fep_hwr_top_pane_g1_ParamLimits

0xeca1,	// (0x000549cb) fep_hwr_top_pane_g2_ParamLimits

0x1a4e,	// (0x00047778) fep_hwr_top_pane_g3_ParamLimits

0xfaab,	// (0x000557d5) fep_hwr_top_pane_g_ParamLimits

0x1a63,	// (0x0004778d) fep_hwr_top_text_pane_ParamLimits

0xdb6a,	// (0x00053894) aid_touch_tab_arrow_arrow_2

0xdb73,	// (0x0005389d) aid_touch_tab_arrow_left_2

0x199b,	// (0x000476c5) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x19d2,	// (0x000476fc) fep_hwr_prediction_pane

0xedf6,	// (0x00054b20) fep_vkb_prediction_pane

0xa4b4,	// (0x000501de) fep_vkb_side_pane_g3_ParamLimits

0xa4b4,	// (0x000501de) fep_vkb_side_pane_g3

0x1bde,	// (0x00047908) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1c4a,	// (0x00047974) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1c57,	// (0x00047981) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb2d,	// (0x00055857) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1d86,	// (0x00047ab0) fep_hwr_prediction_pane_g1

0x1d90,	// (0x00047aba) fep_hwr_prediction_pane_g2

0xec87,	// (0x000549b1) fep_hwr_prediction_pane_g3

0x1d98,	// (0x00047ac2) fep_hwr_prediction_pane_g4

0x0003,

0xfbf2,	// (0x0005591c) fep_hwr_prediction_pane_g

0x4e6d,	// (0x0004ab97) fep_vkb_prediction_pane_g1

0x4e77,	// (0x0004aba1) fep_vkb_prediction_pane_g2

0x4e7f,	// (0x0004aba9) fep_vkb_prediction_pane_g3

0x4e87,	// (0x0004abb1) fep_vkb_prediction_pane_g4

0x0003,

0xfbfb,	// (0x00055925) fep_vkb_prediction_pane_g

0x17b6,	// (0x000474e0) slider_set_pane_g3

0x17ca,	// (0x000474f4) slider_set_pane_g4

0x17e2,	// (0x0004750c) slider_set_pane_g5

0x17b6,	// (0x000474e0) slider_set_pane_g6

0x17f8,	// (0x00047522) slider_set_pane_g7

0xdfd6,	// (0x00053d00) slider_form_pane_g3

0xdfdf,	// (0x00053d09) slider_form_pane_g4

0xdfe7,	// (0x00053d11) slider_form_pane_g5

0xdfd6,	// (0x00053d00) slider_form_pane_g6

0xa11b,	// (0x0004fe45) slider_form_pane_g7

0xe4eb,	// (0x00054215) slider_set_pane_vc_g3

0xe4f4,	// (0x0005421e) slider_set_pane_vc_g4

0xe4fd,	// (0x00054227) slider_set_pane_vc_g5

0xe4eb,	// (0x00054215) slider_set_pane_vc_g6

0xe506,	// (0x00054230) slider_set_pane_vc_g7

0xe4eb,	// (0x00054215) slider_form_pane_vc_g1

0xe4f4,	// (0x0005421e) slider_form_pane_vc_g2

0xe4fd,	// (0x00054227) slider_form_pane_vc_g3

0xe4eb,	// (0x00054215) slider_form_pane_vc_g4

0xe695,	// (0x000543bf) slider_form_pane_vc_g5

0x0004,

0x0012,	// (0x00045d3c) slider_form_pane_vc_g

0xb282,	// (0x00050fac) main_idle_act3_pane

0x4e8f,	// (0x0004abb9) ai3_links_pane

0xa716,	// (0x00050440) popup_ai3_data_window_ParamLimits

0xa716,	// (0x00050440) popup_ai3_data_window

0xb282,	// (0x00050fac) grid_ai3_links_pane

0xa72e,	// (0x00050458) cell_ai3_links_pane_ParamLimits

0xa72e,	// (0x00050458) cell_ai3_links_pane

0x4ec8,	// (0x0004abf2) bg_popup_sub_pane_cp11

0x4ed5,	// (0x0004abff) cell_ai3_links_pane_g1

0xb282,	// (0x00050fac) bg_popup_sub_pane_cp12

0x4efa,	// (0x0004ac24) heading_ai3_data_pane

0x4f02,	// (0x0004ac2c) list_ai3_gene_pane

0x4f0e,	// (0x0004ac38) popup_ai3_data_window_g1

0x4f16,	// (0x0004ac40) heading_ai3_data_pane_g1

0x4f1e,	// (0x0004ac48) heading_ai3_data_pane_t1

0x4f2c,	// (0x0004ac56) list_double_ai3_gene_pane_ParamLimits

0x4f2c,	// (0x0004ac56) list_double_ai3_gene_pane

0x4f39,	// (0x0004ac63) list_single_ai3_gene_pane_ParamLimits

0x4f39,	// (0x0004ac63) list_single_ai3_gene_pane

0xebe4,	// (0x0005490e) list_highlight_pane_cp7_ParamLimits

0xebe4,	// (0x0005490e) list_highlight_pane_cp7

0x4f46,	// (0x0004ac70) list_single_a13_gene_pane_t1_ParamLimits

0x4f46,	// (0x0004ac70) list_single_a13_gene_pane_t1

0x4f5d,	// (0x0004ac87) list_single_ai3_gene_pane_g1

0x4f66,	// (0x0004ac90) list_single_ai3_gene_pane_g2

0x0001,

0xfc04,	// (0x0005592e) list_single_ai3_gene_pane_g

0x4f6e,	// (0x0004ac98) list_double_ai3_gene_pane_g1_ParamLimits

0x4f6e,	// (0x0004ac98) list_double_ai3_gene_pane_g1

0x4f7a,	// (0x0004aca4) list_double_ai3_gene_pane_t1_ParamLimits

0x4f7a,	// (0x0004aca4) list_double_ai3_gene_pane_t1

0x4f96,	// (0x0004acc0) list_double_ai3_gene_pane_t2_ParamLimits

0x4f96,	// (0x0004acc0) list_double_ai3_gene_pane_t2

0x4fab,	// (0x0004acd5) list_double_ai3_gene_pane_t3_ParamLimits

0x4fab,	// (0x0004acd5) list_double_ai3_gene_pane_t3

0x0002,

0xfc09,	// (0x00055933) list_double_ai3_gene_pane_t_ParamLimits

0xfc09,	// (0x00055933) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x359d,	// (0x000492c7) aid_size_min_col_2

0xa700,	// (0x0005042a) aid_size_min_msg_ParamLimits

0xa700,	// (0x0005042a) aid_size_min_msg

0xa4c8,	// (0x000501f2) fep_vkb_top_text_pane_g2_ParamLimits

0xa4c8,	// (0x000501f2) fep_vkb_top_text_pane_g2

0x0001,

0x00b9,	// (0x00045de3) fep_vkb_top_text_pane_g_ParamLimits

0x00b9,	// (0x00045de3) fep_vkb_top_text_pane_g

0xb282,	// (0x00050fac) main_hc_apps_shell_pane

0x4fc8,	// (0x0004acf2) grid_hc_apps_pane_ParamLimits

0x4fc8,	// (0x0004acf2) grid_hc_apps_pane

0x4fd7,	// (0x0004ad01) list_hc_apps_pane

0x4fdf,	// (0x0004ad09) scroll_pane_cp37_ParamLimits

0x4fdf,	// (0x0004ad09) scroll_pane_cp37

0xa748,	// (0x00050472) cell_hc_apps_pane_ParamLimits

0xa748,	// (0x00050472) cell_hc_apps_pane

0xa808,	// (0x00050532) cell_hc_apps_pane_g1_ParamLimits

0xa808,	// (0x00050532) cell_hc_apps_pane_g1

0x50cc,	// (0x0004adf6) cell_hc_apps_pane_g2_ParamLimits

0x50cc,	// (0x0004adf6) cell_hc_apps_pane_g2

0x50e8,	// (0x0004ae12) cell_hc_apps_pane_g3_ParamLimits

0x50e8,	// (0x0004ae12) cell_hc_apps_pane_g3

0x0002,

0xfc10,	// (0x0005593a) cell_hc_apps_pane_g_ParamLimits

0xfc10,	// (0x0005593a) cell_hc_apps_pane_g

0xa835,	// (0x0005055f) cell_hc_apps_pane_t1_ParamLimits

0xa835,	// (0x0005055f) cell_hc_apps_pane_t1

0xb425,	// (0x0005114f) grid_highlight_pane_cp10_ParamLimits

0xb425,	// (0x0005114f) grid_highlight_pane_cp10

0xa873,	// (0x0005059d) list_single_hc_apps_pane_ParamLimits

0xa873,	// (0x0005059d) list_single_hc_apps_pane

0x51bd,	// (0x0004aee7) list_single_hc_apps_pane_g1

0x3cc9,	// (0x000499f3) list_single_hc_apps_pane_g2

0x0001,

0xfc17,	// (0x00055941) list_single_hc_apps_pane_g

0x3ce2,	// (0x00049a0c) list_single_hc_apps_pane_g2_copy1

0x3661,	// (0x0004938b) list_single_hc_apps_pane_t1

0xb2f2,	// (0x0005101c) bg_set_opt_pane_cp_ParamLimits

0x08ca,	// (0x000465f4) setting_slider_pane_t1_ParamLimits

0x08e3,	// (0x0004660d) setting_slider_pane_t2_ParamLimits

0x08fc,	// (0x00046626) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x000552a4) setting_slider_pane_t_ParamLimits

0x0913,	// (0x0004663d) slider_set_pane_ParamLimits

0x13b4,	// (0x000470de) control_pane_g5_ParamLimits

0x13b4,	// (0x000470de) control_pane_g5

0xdf98,	// (0x00053cc2) slider_set_pane_g1_ParamLimits

0x17aa,	// (0x000474d4) slider_set_pane_g2_ParamLimits

0x17b6,	// (0x000474e0) slider_set_pane_g3_ParamLimits

0x17ca,	// (0x000474f4) slider_set_pane_g4_ParamLimits

0x17e2,	// (0x0004750c) slider_set_pane_g5_ParamLimits

0x17b6,	// (0x000474e0) slider_set_pane_g6_ParamLimits

0x17f8,	// (0x00047522) slider_set_pane_g7_ParamLimits

0xf975,	// (0x0005569f) slider_set_pane_g_ParamLimits

0xc7a7,	// (0x000524d1) navi_icon_text_pane_ParamLimits

0x9949,	// (0x0004f673) aid_fill_nsta_2_ParamLimits

0x997d,	// (0x0004f6a7) aid_touch_tab_arrow_left_ParamLimits

0x9993,	// (0x0004f6bd) aid_touch_tab_arrow_right_ParamLimits

0x9a2e,	// (0x0004f758) clock_nsta_pane_ParamLimits

0x9ec3,	// (0x0004fbed) navi_icon_pane_g1_ParamLimits

0x9ecf,	// (0x0004fbf9) navi_text_pane_t1_ParamLimits

0xa35f,	// (0x00050089) navi_icon_text_pane_g1_ParamLimits

0xa36b,	// (0x00050095) navi_icon_text_pane_t1_ParamLimits

0x51bd,	// (0x0004aee7) list_single_hc_apps_pane_g1_ParamLimits

0x3cc9,	// (0x000499f3) list_single_hc_apps_pane_g2_ParamLimits

0xfc17,	// (0x00055941) list_single_hc_apps_pane_g_ParamLimits

0x3ce2,	// (0x00049a0c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x3661,	// (0x0004938b) list_single_hc_apps_pane_t1_ParamLimits

0x7bcb,	// (0x0004d8f5) popup_toolbar2_fixed_window_ParamLimits

0x7bcb,	// (0x0004d8f5) popup_toolbar2_fixed_window

0x98b2,	// (0x0004f5dc) popup_toolbar2_float_window

0xb282,	// (0x00050fac) bg_popup_sub_pane_cp27

0x51d6,	// (0x0004af00) grid_toolbar2_float_pane

0xb282,	// (0x00050fac) bg_popup_sub_pane_cp26

0x51d6,	// (0x0004af00) grid_toolbar2_fixed_pane

0xa8a6,	// (0x000505d0) cell_toolbar2_fixed_pane_ParamLimits

0xa8a6,	// (0x000505d0) cell_toolbar2_fixed_pane

0xa8c1,	// (0x000505eb) cell_toolbar2_fixed_pane_g1

0x51f8,	// (0x0004af22) toolbar2_fixed_button_pane

0xce5b,	// (0x00052b85) toolbar2_fixed_button_pane_g1

0xce6b,	// (0x00052b95) toolbar2_fixed_button_pane_g2

0xce63,	// (0x00052b8d) toolbar2_fixed_button_pane_g3

0xce7b,	// (0x00052ba5) toolbar2_fixed_button_pane_g4

0xce73,	// (0x00052b9d) toolbar2_fixed_button_pane_g5

0xce83,	// (0x00052bad) toolbar2_fixed_button_pane_g6

0xce8b,	// (0x00052bb5) toolbar2_fixed_button_pane_g7

0xce9b,	// (0x00052bc5) toolbar2_fixed_button_pane_g8

0xce93,	// (0x00052bbd) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x000555a1) toolbar2_fixed_button_pane_g

0x5200,	// (0x0004af2a) cell_toolbar2_float_pane_ParamLimits

0x5200,	// (0x0004af2a) cell_toolbar2_float_pane

0x5211,	// (0x0004af3b) cell_toolbar2_float_pane_g1

0x51f8,	// (0x0004af22) toolbar2_fixed_button_pane_cp

0xa47b,	// (0x000501a5) fep_vkb_accented_list_pane_ParamLimits

0xa47b,	// (0x000501a5) fep_vkb_accented_list_pane

0x1bbe,	// (0x000478e8) bg_popup_fep_shadow_pane_g9

0xc929,	// (0x00052653) bg_popup_fep_shadow_pane_cp3

0xbfe8,	// (0x00051d12) list_accented_list_pane

0x521a,	// (0x0004af44) list_single_accented_list_pane_ParamLimits

0x521a,	// (0x0004af44) list_single_accented_list_pane

0xc929,	// (0x00052653) list_highlight_pane_cp10

0x522b,	// (0x0004af55) list_single_accented_list_pane_t1

0x97dc,	// (0x0004f506) popup_slider_window_ParamLimits

0x97dc,	// (0x0004f506) popup_slider_window

0x4e50,	// (0x0004ab7a) aid_indentation_list_msg

0xa9ba,	// (0x000506e4) bg_popup_window_pane_cp19

0x534f,	// (0x0004b079) popup_slider_window_g1

0x536b,	// (0x0004b095) popup_slider_window_g2

0x5387,	// (0x0004b0b1) popup_slider_window_g3

0x0005,

0xfc1c,	// (0x00055946) popup_slider_window_g

0x53e3,	// (0x0004b10d) popup_slider_window_t1

0x5457,	// (0x0004b181) small_volume_slider_vertical_pane

0xec1f,	// (0x00054949) small_volume_slider_vertical_pane_g1

0xec1f,	// (0x00054949) small_volume_slider_vertical_pane_g2

0x5473,	// (0x0004b19d) small_volume_slider_vertical_pane_g3

0x0002,

0xfc2e,	// (0x00055958) small_volume_slider_vertical_pane_g

0x7b39,	// (0x0004d863) area_side_right_pane_ParamLimits

0x7b39,	// (0x0004d863) area_side_right_pane

0x84c9,	// (0x0004e1f3) aid_size_side_button_ParamLimits

0x84c9,	// (0x0004e1f3) aid_size_side_button

0x84e2,	// (0x0004e20c) grid_sctrl_middle_pane_ParamLimits

0x84e2,	// (0x0004e20c) grid_sctrl_middle_pane

0x1dd4,	// (0x00047afe) sctrl_sk_bottom_pane

0x1de5,	// (0x00047b0f) sctrl_sk_top_pane

0x1df7,	// (0x00047b21) aid_touch_sctrl_top

0x1e04,	// (0x00047b2e) bg_sctrl_sk_pane_ParamLimits

0x1e04,	// (0x00047b2e) bg_sctrl_sk_pane

0x1e12,	// (0x00047b3c) sctrl_sk_top_pane_g1

0x1e1f,	// (0x00047b49) sctrl_sk_top_pane_t1

0x1df7,	// (0x00047b21) aid_touch_sctrl_bottom

0x1e04,	// (0x00047b2e) bg_sctrl_sk_pane_cp_ParamLimits

0x1e04,	// (0x00047b2e) bg_sctrl_sk_pane_cp

0x1e3a,	// (0x00047b64) sctrl_sk_bottom_pane_g1

0x1e1f,	// (0x00047b49) sctrl_sk_bottom_pane_t1

0x84fc,	// (0x0004e226) cell_sctrl_middle_pane_ParamLimits

0x84fc,	// (0x0004e226) cell_sctrl_middle_pane

0x850d,	// (0x0004e237) aid_touch_sctrl_middle_ParamLimits

0x850d,	// (0x0004e237) aid_touch_sctrl_middle

0x851a,	// (0x0004e244) bg_sctrl_middle_pane_ParamLimits

0x851a,	// (0x0004e244) bg_sctrl_middle_pane

0x24a3,	// (0x000481cd) cell_sctrl_middle_pane_g1_ParamLimits

0x24a3,	// (0x000481cd) cell_sctrl_middle_pane_g1

0x8528,	// (0x0004e252) cell_sctrl_middle_pane_g2_ParamLimits

0x8528,	// (0x0004e252) cell_sctrl_middle_pane_g2

0x0001,

0xfc3a,	// (0x00055964) cell_sctrl_middle_pane_g_ParamLimits

0xfc3a,	// (0x00055964) cell_sctrl_middle_pane_g

0xce5b,	// (0x00052b85) bg_sctrl_middle_pane_g1

0xce63,	// (0x00052b8d) bg_sctrl_middle_pane_g2

0xce6b,	// (0x00052b95) bg_sctrl_middle_pane_g3

0xce73,	// (0x00052b9d) bg_sctrl_middle_pane_g4

0xce7b,	// (0x00052ba5) bg_sctrl_middle_pane_g5

0xce83,	// (0x00052bad) bg_sctrl_middle_pane_g6

0xce8b,	// (0x00052bb5) bg_sctrl_middle_pane_g7

0xce93,	// (0x00052bbd) bg_sctrl_middle_pane_g8

0x0007,

0xfc3f,	// (0x00055969) bg_sctrl_middle_pane_g

0xce9b,	// (0x00052bc5) bg_sctrl_middle_pane_g8_copy1

0xce5b,	// (0x00052b85) bg_sctrl_sk_pane_g1

0xce6b,	// (0x00052b95) bg_sctrl_sk_pane_g2

0xce63,	// (0x00052b8d) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x000555a1) bg_sctrl_sk_pane_g

0xbe1b,	// (0x00051b45) aid_size_touch_scroll_bar

0xce7b,	// (0x00052ba5) bg_sctrl_sk_pane_g4

0xce73,	// (0x00052b9d) bg_sctrl_sk_pane_g5

0xce83,	// (0x00052bad) bg_sctrl_sk_pane_g6

0xce8b,	// (0x00052bb5) bg_sctrl_sk_pane_g7

0xce9b,	// (0x00052bc5) bg_sctrl_sk_pane_g8

0xce93,	// (0x00052bbd) bg_sctrl_sk_pane_g9

0xcb9d,	// (0x000528c7) popup_fep_china_hwr2_fs_candidate_window

0x92ee,	// (0x0004f018) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x92ee,	// (0x0004f018) popup_fep_china_hwr2_fs_control_window

0x1bde,	// (0x00047908) sctrl_sk_top_pane_g2

0x0001,

0xfc35,	// (0x0005595f) sctrl_sk_top_pane_g

0xaa72,	// (0x0005079c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xaa72,	// (0x0005079c) aid_fep_china_hwr2_fs_cell

0xaa86,	// (0x000507b0) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xaa86,	// (0x000507b0) bg_popup_fep_shadow_pane_cp4

0xaa9d,	// (0x000507c7) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xaa9d,	// (0x000507c7) bg_popup_fep_shadow_pane_cp5

0xaaaf,	// (0x000507d9) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xaaaf,	// (0x000507d9) popup_fep_china_hwr2_fs_control_bar_grid

0xaac3,	// (0x000507ed) popup_fep_china_hwr2_fs_control_funtion_grid

0x54cf,	// (0x0004b1f9) aid_fep_china_hwr2_fs_candi_cell

0xb282,	// (0x00050fac) bg_popup_fep_shadow_pane_cp6

0x54d9,	// (0x0004b203) popup_fep_china_hwr2_fs_candidate_grid

0xaacb,	// (0x000507f5) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xaacb,	// (0x000507f5) cell_fep_china_hwr2_fs_funtion_grid

0xec1f,	// (0x00054949) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x54fb,	// (0x0004b225) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x54fb,	// (0x0004b225) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5509,	// (0x0004b233) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5509,	// (0x0004b233) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfc50,	// (0x0005597a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfc50,	// (0x0005597a) cell_fep_china_hwr2_fs_funtion_grid_g

0xaae3,	// (0x0005080d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xaae3,	// (0x0005080d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xaaf8,	// (0x00050822) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xaaf8,	// (0x00050822) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x0292,	// (0x00045fbc) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x0292,	// (0x00045fbc) cell_fep_china_hwr2_fs_funtion_grid_t

0x5550,	// (0x0004b27a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5558,	// (0x0004b282) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5560,	// (0x0004b28a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfc55,	// (0x0005597f) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5568,	// (0x0004b292) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5568,	// (0x0004b292) cell_fep_china_hwr2_fs_candidate_grid

0x5581,	// (0x0004b2ab) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5589,	// (0x0004b2b3) popup_fep_china_hwr2_fs_candidate_grid_g21

0xec1f,	// (0x00054949) cell_fep_china_hwr2_fs_candidate_grid_g1

0xec1f,	// (0x00054949) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0x00be,	// (0x00045de8) cell_fep_china_hwr2_fs_candidate_grid_g

0x5591,	// (0x0004b2bb) cell_fep_china_hwr2_fs_candidate_grid_t1

0xccaa,	// (0x000529d4) clock_nsta_pane_cp_24_ParamLimits

0xccaa,	// (0x000529d4) clock_nsta_pane_cp_24

0xcd12,	// (0x00052a3c) indicator_nsta_pane_cp_24_ParamLimits

0xcd12,	// (0x00052a3c) indicator_nsta_pane_cp_24

0xda74,	// (0x0005379e) heading_pane_g1

0x0001,

0xf8dc,	// (0x00055606) heading_pane_g

0xe0d8,	// (0x00053e02) grid_sct_catagory_button_pane

0xd692,	// (0x000533bc) scroll_pane_cp5_ParamLimits

0xe988,	// (0x000546b2) button_value_adjust_pane_cp5_ParamLimits

0xe988,	// (0x000546b2) button_value_adjust_pane_cp5

0xea46,	// (0x00054770) form2_midp_time_pane_ParamLimits

0x559f,	// (0x0004b2c9) cell_sct_catagory_button_pane_ParamLimits

0x559f,	// (0x0004b2c9) cell_sct_catagory_button_pane

0xebe4,	// (0x0005490e) bg_button_pane_cp01_ParamLimits

0xebe4,	// (0x0005490e) bg_button_pane_cp01

0xec1f,	// (0x00054949) cell_sct_catagory_button_pane_g1

0x9855,	// (0x0004f57f) popup_tb_extension_window

0xab14,	// (0x0005083e) aid_size_cell_ext_ParamLimits

0xab14,	// (0x0005083e) aid_size_cell_ext

0xba1c,	// (0x00051746) bg_tb_trans_pane_cp1_ParamLimits

0xba1c,	// (0x00051746) bg_tb_trans_pane_cp1

0xab3a,	// (0x00050864) grid_tb_ext_pane_ParamLimits

0xab3a,	// (0x00050864) grid_tb_ext_pane

0xab7a,	// (0x000508a4) cell_tb_ext_pane_ParamLimits

0xab7a,	// (0x000508a4) cell_tb_ext_pane

0xaba2,	// (0x000508cc) cell_tb_ext_pane_g1_ParamLimits

0xaba2,	// (0x000508cc) cell_tb_ext_pane_g1

0x5637,	// (0x0004b361) cell_tb_ext_pane_t1

0xb425,	// (0x0005114f) list_highlight_pane_cp11_ParamLimits

0xb425,	// (0x0005114f) list_highlight_pane_cp11

0x0803,	// (0x0004652d) popup_uni_indicator_window_ParamLimits

0x0803,	// (0x0004652d) popup_uni_indicator_window

0xbeee,	// (0x00051c18) bg_popup_sub_pane_cp14

0x5652,	// (0x0004b37c) list_uniindi_pane

0x565e,	// (0x0004b388) uniindi_top_pane

0xb425,	// (0x0005114f) bg_uniindi_top_pane

0x567d,	// (0x0004b3a7) uniindi_top_pane_g1

0x5693,	// (0x0004b3bd) uniindi_top_pane_g2

0x0003,

0xfc5c,	// (0x00055986) uniindi_top_pane_g

0x56bd,	// (0x0004b3e7) uniindi_top_pane_t1

0x56e7,	// (0x0004b411) list_single_uniindi_pane_ParamLimits

0x56e7,	// (0x0004b411) list_single_uniindi_pane

0xec1f,	// (0x00054949) bg_uniindi_top_pane_g1

0x56f9,	// (0x0004b423) list_single_uniindi_pane_g1

0x570c,	// (0x0004b436) list_single_uniindi_pane_t1

0x0687,	// (0x000463b1) control_bg_pane

0x5731,	// (0x0004b45b) bg_sctrl_sk_pane_cp1

0x573a,	// (0x0004b464) bg_sctrl_sk_pane_cp2

0x5743,	// (0x0004b46d) control_bg_pane_g1

0x574c,	// (0x0004b476) control_bg_pane_g2

0x0001,

0xfc65,	// (0x0005598f) control_bg_pane_g

0xe85f,	// (0x00054589) cell_indicator_nsta_pane_g1_ParamLimits

0xa2c6,	// (0x0004fff0) cell_indicator_nsta_pane_g2_ParamLimits

0x0022,	// (0x00045d4c) cell_indicator_nsta_pane_g_ParamLimits

0x337c,	// (0x000490a6) form2_midp_time_pane_t1_ParamLimits

0x8c10,	// (0x0004e93a) main_idle_act4_pane_ParamLimits

0x8c10,	// (0x0004e93a) main_idle_act4_pane

0x9855,	// (0x0004f57f) popup_tb_extension_window_ParamLimits

0xab61,	// (0x0005088b) tb_ext_find_pane_ParamLimits

0xab61,	// (0x0005088b) tb_ext_find_pane

0x5755,	// (0x0004b47f) ai_gene_pane_1_cp1

0xc9ab,	// (0x000526d5) ai_gene_pane_2_cp1

0x575d,	// (0x0004b487) list_single_idle_plugin_calendar_pane

0x5766,	// (0x0004b490) list_single_idle_plugin_notification_pane

0x576f,	// (0x0004b499) list_single_idle_plugin_player_pane

0xabbf,	// (0x000508e9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xabbf,	// (0x000508e9) list_single_idle_plugin_shortcut_pane

0xabe7,	// (0x00050911) main_idle_act4_pane_t1

0xabfd,	// (0x00050927) main_idle_act4_pane_t2

0x0001,

0x02ac,	// (0x00045fd6) main_idle_act4_pane_t

0xac15,	// (0x0005093f) middle_sk_idle_act4_pane_ParamLimits

0xac15,	// (0x0005093f) middle_sk_idle_act4_pane

0xac31,	// (0x0005095b) popup_clock_digital_analogue_window_cp2

0xac58,	// (0x00050982) shortcut_wheel_idle_act4_pane_ParamLimits

0xac58,	// (0x00050982) shortcut_wheel_idle_act4_pane

0xec1f,	// (0x00054949) shortcut_wheel_idle_act4_pane_g1

0xec1f,	// (0x00054949) shortcut_wheel_idle_act4_pane_g2

0xec1f,	// (0x00054949) shortcut_wheel_idle_act4_pane_g3

0xec1f,	// (0x00054949) shortcut_wheel_idle_act4_pane_g4

0xec1f,	// (0x00054949) shortcut_wheel_idle_act4_pane_g5

0x5802,	// (0x0004b52c) shortcut_wheel_idle_act4_pane_g6

0x580a,	// (0x0004b534) shortcut_wheel_idle_act4_pane_g7

0x5812,	// (0x0004b53c) shortcut_wheel_idle_act4_pane_g8

0x581a,	// (0x0004b544) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfc6a,	// (0x00055994) shortcut_wheel_idle_act4_pane_g

0x930a,	// (0x0004f034) middle_sk_idle_act4_pane_g1_ParamLimits

0x930a,	// (0x0004f034) middle_sk_idle_act4_pane_g1

0xacd5,	// (0x000509ff) middle_sk_idle_act4_pane_g2_ParamLimits

0xacd5,	// (0x000509ff) middle_sk_idle_act4_pane_g2

0x0001,

0xfc7d,	// (0x000559a7) middle_sk_idle_act4_pane_g_ParamLimits

0xfc7d,	// (0x000559a7) middle_sk_idle_act4_pane_g

0xaced,	// (0x00050a17) middle_sk_idle_act4_pane_t1_ParamLimits

0xaced,	// (0x00050a17) middle_sk_idle_act4_pane_t1

0xad1c,	// (0x00050a46) grid_ai_shortcut_pane_ParamLimits

0xad1c,	// (0x00050a46) grid_ai_shortcut_pane

0xad39,	// (0x00050a63) list_highlight_pane_cp16_ParamLimits

0xad39,	// (0x00050a63) list_highlight_pane_cp16

0xad46,	// (0x00050a70) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xad46,	// (0x00050a70) list_single_idle_plugin_shortcut_pane_g1

0xad52,	// (0x00050a7c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xad52,	// (0x00050a7c) list_single_idle_plugin_shortcut_pane_g2

0xad6e,	// (0x00050a98) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xad6e,	// (0x00050a98) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x02d9,	// (0x00046003) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x02d9,	// (0x00046003) list_single_idle_plugin_shortcut_pane_g

0xad83,	// (0x00050aad) cell_ai_shortcut_pane_ParamLimits

0xad83,	// (0x00050aad) cell_ai_shortcut_pane

0xad99,	// (0x00050ac3) cell_ai_shortcut_pane_g1_ParamLimits

0xad99,	// (0x00050ac3) cell_ai_shortcut_pane_g1

0x5755,	// (0x0004b47f) ai_gene_pane_1_cp2

0x5947,	// (0x0004b671) ai_gene_pane_2_cp2

0x594f,	// (0x0004b679) list_highlight_pane_cp15

0x5958,	// (0x0004b682) list_single_idle_plugin_calendar_pane_g1

0x594f,	// (0x0004b679) list_highlight_pane_cp17

0x5960,	// (0x0004b68a) list_single_idle_plugin_calendar_pane_g1_copy1

0x5968,	// (0x0004b692) list_single_idle_plugin_player_pane_g1

0xe2ed,	// (0x00054017) list_single_idle_plugin_player_pane_g2

0x0001,

0xfc82,	// (0x000559ac) list_single_idle_plugin_player_pane_g

0x5970,	// (0x0004b69a) list_single_idle_plugin_player_pane_t1

0x597e,	// (0x0004b6a8) list_single_idle_plugin_player_pane_t2

0x598c,	// (0x0004b6b6) list_single_idle_plugin_player_pane_t3

0x599a,	// (0x0004b6c4) list_single_idle_plugin_player_pane_t4

0x0003,

0xfc87,	// (0x000559b1) list_single_idle_plugin_player_pane_t

0x59a8,	// (0x0004b6d2) wait_bar_pane_cp15

0x59b0,	// (0x0004b6da) grid_ai_notification_pane

0xe2ed,	// (0x00054017) list_single_idle_plugin_notification_pane_g1

0xadbb,	// (0x00050ae5) cell_ai_notification_pane_ParamLimits

0xadbb,	// (0x00050ae5) cell_ai_notification_pane

0x59c6,	// (0x0004b6f0) cell_ai_notification_pane_g1

0x59ce,	// (0x0004b6f8) cell_ai_notification_pane_t1

0xadc8,	// (0x00050af2) tb_ext_find_button_pane

0xadd0,	// (0x00050afa) tb_ext_find_pane_g1

0xadd8,	// (0x00050b02) tb_ext_find_pane_t1

0xc41a,	// (0x00052144) tb_ext_find_button_pane_g1

0x59fa,	// (0x0004b724) tb_ext_find_button_pane_g2

0x0001,

0xfc90,	// (0x000559ba) tb_ext_find_button_pane_g

0xabe7,	// (0x00050911) main_idle_act4_pane_t1_ParamLimits

0xabfd,	// (0x00050927) main_idle_act4_pane_t2_ParamLimits

0x02ac,	// (0x00045fd6) main_idle_act4_pane_t_ParamLimits

0xac31,	// (0x0005095b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xac48,	// (0x00050972) sat_plugin_idle_act4_pane_ParamLimits

0xac48,	// (0x00050972) sat_plugin_idle_act4_pane

0xade6,	// (0x00050b10) sat_plugin_idle_act4_pane_t1_ParamLimits

0xade6,	// (0x00050b10) sat_plugin_idle_act4_pane_t1

0xadfe,	// (0x00050b28) sat_plugin_idle_act4_pane_t2_ParamLimits

0xadfe,	// (0x00050b28) sat_plugin_idle_act4_pane_t2

0xae16,	// (0x00050b40) sat_plugin_idle_act4_pane_t3_ParamLimits

0xae16,	// (0x00050b40) sat_plugin_idle_act4_pane_t3

0xae2e,	// (0x00050b58) sat_plugin_idle_act4_pane_t4_ParamLimits

0xae2e,	// (0x00050b58) sat_plugin_idle_act4_pane_t4

0x0003,

0x02f3,	// (0x0004601d) sat_plugin_idle_act4_pane_t_ParamLimits

0x02f3,	// (0x0004601d) sat_plugin_idle_act4_pane_t

0x074c,	// (0x00046476) popup_battery_window_ParamLimits

0x074c,	// (0x00046476) popup_battery_window

0xb425,	// (0x0005114f) bg_popup_sub_pane_cp25_ParamLimits

0xb425,	// (0x0005114f) bg_popup_sub_pane_cp25

0x5a4f,	// (0x0004b779) popup_battery_window_g1_ParamLimits

0x5a4f,	// (0x0004b779) popup_battery_window_g1

0x5a5b,	// (0x0004b785) popup_battery_window_t1_ParamLimits

0x5a5b,	// (0x0004b785) popup_battery_window_t1

0x5a6d,	// (0x0004b797) popup_battery_window_t2_ParamLimits

0x5a6d,	// (0x0004b797) popup_battery_window_t2

0x0001,

0xfc95,	// (0x000559bf) popup_battery_window_t_ParamLimits

0xfc95,	// (0x000559bf) popup_battery_window_t

0x9185,	// (0x0004eeaf) midp_canvas_pane_ParamLimits

0x91e2,	// (0x0004ef0c) midp_keypad_pane_ParamLimits

0x91e2,	// (0x0004ef0c) midp_keypad_pane

0xc039,	// (0x00051d63) main_midp_pane_ParamLimits

0xe93b,	// (0x00054665) signal_pane_g2_cp_ParamLimits

0xae46,	// (0x00050b70) aid_size_cell_midp_keypad_ParamLimits

0xae46,	// (0x00050b70) aid_size_cell_midp_keypad

0xae64,	// (0x00050b8e) midp_keyp_game_grid_pane_ParamLimits

0xae64,	// (0x00050b8e) midp_keyp_game_grid_pane

0xae8b,	// (0x00050bb5) midp_keyp_rocker_pane_ParamLimits

0xae8b,	// (0x00050bb5) midp_keyp_rocker_pane

0xaee4,	// (0x00050c0e) midp_keyp_sk_left_pane_ParamLimits

0xaee4,	// (0x00050c0e) midp_keyp_sk_left_pane

0xaf38,	// (0x00050c62) midp_keyp_sk_right_pane_ParamLimits

0xaf38,	// (0x00050c62) midp_keyp_sk_right_pane

0xb282,	// (0x00050fac) bg_button_pane_cp03

0xaf8c,	// (0x00050cb6) midp_keyp_sk_left_pane_g1

0xb282,	// (0x00050fac) bg_button_pane_cp04

0xaf8c,	// (0x00050cb6) midp_keyp_sk_right_pane_g1

0xec1f,	// (0x00054949) midp_keyp_rocker_pane_g1

0xaf95,	// (0x00050cbf) keyp_game_cell_pane_ParamLimits

0xaf95,	// (0x00050cbf) keyp_game_cell_pane

0xb282,	// (0x00050fac) bg_button_pane_cp02

0xafb9,	// (0x00050ce3) keyp_game_cell_pane_g1

0x7b7b,	// (0x0004d8a5) popup_fep_vkb2_window_ParamLimits

0x7b7b,	// (0x0004d8a5) popup_fep_vkb2_window

0x8534,	// (0x0004e25e) aid_size_cell_vkb2_ParamLimits

0x8534,	// (0x0004e25e) aid_size_cell_vkb2

0x856a,	// (0x0004e294) popup_fep_vkb2_window_g1_ParamLimits

0x856a,	// (0x0004e294) popup_fep_vkb2_window_g1

0x85b1,	// (0x0004e2db) vkb2_area_bottom_pane_ParamLimits

0x85b1,	// (0x0004e2db) vkb2_area_bottom_pane

0x8605,	// (0x0004e32f) vkb2_area_keypad_pane_ParamLimits

0x8605,	// (0x0004e32f) vkb2_area_keypad_pane

0x864d,	// (0x0004e377) vkb2_area_top_pane_ParamLimits

0x864d,	// (0x0004e377) vkb2_area_top_pane

0x86d3,	// (0x0004e3fd) vkb2_top_entry_pane_ParamLimits

0x86d3,	// (0x0004e3fd) vkb2_top_entry_pane

0x8700,	// (0x0004e42a) vkb2_top_grid_left_pane_ParamLimits

0x8700,	// (0x0004e42a) vkb2_top_grid_left_pane

0x8720,	// (0x0004e44a) vkb2_top_grid_right_pane_ParamLimits

0x8720,	// (0x0004e44a) vkb2_top_grid_right_pane

0x209e,	// (0x00047dc8) vkb2_cell_keypad_pane_ParamLimits

0x209e,	// (0x00047dc8) vkb2_cell_keypad_pane

0x8766,	// (0x0004e490) vkb2_area_bottom_grid_pane_ParamLimits

0x8766,	// (0x0004e490) vkb2_area_bottom_grid_pane

0x8790,	// (0x0004e4ba) vkb2_area_bottom_pane_g1_ParamLimits

0x8790,	// (0x0004e4ba) vkb2_area_bottom_pane_g1

0x87b6,	// (0x0004e4e0) vkb2_area_bottom_pane_g2_ParamLimits

0x87b6,	// (0x0004e4e0) vkb2_area_bottom_pane_g2

0x87e7,	// (0x0004e511) vkb2_area_bottom_pane_g3_ParamLimits

0x87e7,	// (0x0004e511) vkb2_area_bottom_pane_g3

0x0002,

0xfc9a,	// (0x000559c4) vkb2_area_bottom_pane_g_ParamLimits

0xfc9a,	// (0x000559c4) vkb2_area_bottom_pane_g

0x2248,	// (0x00047f72) vkb2_top_cell_left_pane_ParamLimits

0x2248,	// (0x00047f72) vkb2_top_cell_left_pane

0xafc2,	// (0x00050cec) vkb2_top_entry_pane_g1_ParamLimits

0xafc2,	// (0x00050cec) vkb2_top_entry_pane_g1

0xafd0,	// (0x00050cfa) vkb2_top_entry_pane_t1_ParamLimits

0xafd0,	// (0x00050cfa) vkb2_top_entry_pane_t1

0x5c3f,	// (0x0004b969) vkb2_top_entry_pane_t2_ParamLimits

0x5c3f,	// (0x0004b969) vkb2_top_entry_pane_t2

0x5c71,	// (0x0004b99b) vkb2_top_entry_pane_t3_ParamLimits

0x5c71,	// (0x0004b99b) vkb2_top_entry_pane_t3

0x0002,

0xfca1,	// (0x000559cb) vkb2_top_entry_pane_t_ParamLimits

0xfca1,	// (0x000559cb) vkb2_top_entry_pane_t

0x8851,	// (0x0004e57b) vkb2_top_grid_right_pane_g1_ParamLimits

0x8851,	// (0x0004e57b) vkb2_top_grid_right_pane_g1

0x22ab,	// (0x00047fd5) vkb2_top_grid_right_pane_g2_ParamLimits

0x22ab,	// (0x00047fd5) vkb2_top_grid_right_pane_g2

0x22c3,	// (0x00047fed) vkb2_top_grid_right_pane_g3_ParamLimits

0x22c3,	// (0x00047fed) vkb2_top_grid_right_pane_g3

0x8867,	// (0x0004e591) vkb2_top_grid_right_pane_g4_ParamLimits

0x8867,	// (0x0004e591) vkb2_top_grid_right_pane_g4

0x0003,

0xfca8,	// (0x000559d2) vkb2_top_grid_right_pane_g_ParamLimits

0xfca8,	// (0x000559d2) vkb2_top_grid_right_pane_g

0x22f1,	// (0x0004801b) vkb2_top_cell_left_pane_g1

0x2308,	// (0x00048032) vkb2_cell_keypad_pane_g1_ParamLimits

0x2308,	// (0x00048032) vkb2_cell_keypad_pane_g1

0x5c95,	// (0x0004b9bf) vkb2_cell_keypad_pane_t1_ParamLimits

0x5c95,	// (0x0004b9bf) vkb2_cell_keypad_pane_t1

0x2316,	// (0x00048040) vkb2_cell_bottom_grid_pane_ParamLimits

0x2316,	// (0x00048040) vkb2_cell_bottom_grid_pane

0x234f,	// (0x00048079) vkb2_cell_bottom_grid_pane_g1

0xac79,	// (0x000509a3) aid_call2_pane_cp02

0xac81,	// (0x000509ab) aid_call_pane_cp02

0xac89,	// (0x000509b3) clock_digital_number_pane_cp10

0xac91,	// (0x000509bb) clock_digital_number_pane_cp11

0xac99,	// (0x000509c3) clock_digital_number_pane_cp12

0xaca1,	// (0x000509cb) clock_digital_number_pane_cp13

0xaca9,	// (0x000509d3) clock_digital_separator_pane_cp10

0xc41a,	// (0x00052144) popup_clock_digital_analogue_window_cp2_g1

0xc41a,	// (0x00052144) popup_clock_digital_analogue_window_cp2_g2

0xacb1,	// (0x000509db) popup_clock_digital_analogue_window_cp2_g3

0xc41a,	// (0x00052144) popup_clock_digital_analogue_window_cp2_g4

0xacb1,	// (0x000509db) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0x02c4,	// (0x00045fee) popup_clock_digital_analogue_window_cp2_g

0xacb9,	// (0x000509e3) popup_clock_digital_analogue_window_cp2_t1

0xacc7,	// (0x000509f1) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x02cf,	// (0x00045ff9) popup_clock_digital_analogue_window_cp2_t

0xec1f,	// (0x00054949) clock_digital_number_pane_cp10_g1

0xec1f,	// (0x00054949) clock_digital_number_pane_cp10_g2

0x0001,

0x00be,	// (0x00045de8) clock_digital_number_pane_cp10_g

0xec1f,	// (0x00054949) clock_digital_separator_pane_cp10_g1

0xec1f,	// (0x00054949) clock_digital_separator_pane_cp10_g2

0x0001,

0x00be,	// (0x00045de8) clock_digital_separator_pane_cp10_g

0x569f,	// (0x0004b3c9) uniindi_top_pane_g3

0x56b0,	// (0x0004b3da) uniindi_top_pane_g4

0x2129,	// (0x00047e53) vkb2_row_keypad_pane_ParamLimits

0x2129,	// (0x00047e53) vkb2_row_keypad_pane

0x236f,	// (0x00048099) vkb2_cell_t_keypad_pane_ParamLimits

0x236f,	// (0x00048099) vkb2_cell_t_keypad_pane

0x237f,	// (0x000480a9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x237f,	// (0x000480a9) vkb2_cell_t_keypad_pane_cp08

0x2392,	// (0x000480bc) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2392,	// (0x000480bc) vkb2_cell_t_keypad_pane_cp09

0x23a6,	// (0x000480d0) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x23a6,	// (0x000480d0) vkb2_cell_t_keypad_pane_cp01

0x23b7,	// (0x000480e1) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x23b7,	// (0x000480e1) vkb2_cell_t_keypad_pane_cp02

0x23c8,	// (0x000480f2) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x23c8,	// (0x000480f2) vkb2_cell_t_keypad_pane_cp03

0x23d9,	// (0x00048103) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x23d9,	// (0x00048103) vkb2_cell_t_keypad_pane_cp04

0x23ea,	// (0x00048114) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x23ea,	// (0x00048114) vkb2_cell_t_keypad_pane_cp05

0x23fb,	// (0x00048125) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x23fb,	// (0x00048125) vkb2_cell_t_keypad_pane_cp06

0x240c,	// (0x00048136) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x240c,	// (0x00048136) vkb2_cell_t_keypad_pane_cp07

0x241d,	// (0x00048147) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x241d,	// (0x00048147) vkb2_cell_t_keypad_pane_cp10

0x1bde,	// (0x00047908) vkb2_cell_t_keypad_pane_g1

0x5cac,	// (0x0004b9d6) vkb2_cell_t_keypad_pane_t1

0x0687,	// (0x000463b1) popup_grid_graphic2_window

0xb009,	// (0x00050d33) aid_size_cell_graphic2_ParamLimits

0xb009,	// (0x00050d33) aid_size_cell_graphic2

0xb047,	// (0x00050d71) bg_popup_window_pane_cp21_ParamLimits

0xb047,	// (0x00050d71) bg_popup_window_pane_cp21

0xb055,	// (0x00050d7f) graphic2_pages_pane_ParamLimits

0xb055,	// (0x00050d7f) graphic2_pages_pane

0xb0ab,	// (0x00050dd5) grid_graphic2_control_pane_ParamLimits

0xb0ab,	// (0x00050dd5) grid_graphic2_control_pane

0xb0f3,	// (0x00050e1d) grid_graphic2_pane_ParamLimits

0xb0f3,	// (0x00050e1d) grid_graphic2_pane

0xb17a,	// (0x00050ea4) cell_graphic2_pane

0xb282,	// (0x00050fac) main_comp_mode_pane

0x4f02,	// (0x0004ac2c) list_ai3_gene_pane_ParamLimits

0xa9ba,	// (0x000506e4) bg_popup_window_pane_cp19_ParamLimits

0x52f1,	// (0x0004b01b) bg_touch_area_indi_pane_ParamLimits

0x52f1,	// (0x0004b01b) bg_touch_area_indi_pane

0x5307,	// (0x0004b031) bg_touch_area_indi_pane_cp01_ParamLimits

0x5307,	// (0x0004b031) bg_touch_area_indi_pane_cp01

0x531d,	// (0x0004b047) bg_touch_area_indi_pane_cp02_ParamLimits

0x531d,	// (0x0004b047) bg_touch_area_indi_pane_cp02

0x5335,	// (0x0004b05f) bg_touch_area_indi_pane_cp03_ParamLimits

0x5335,	// (0x0004b05f) bg_touch_area_indi_pane_cp03

0x534f,	// (0x0004b079) popup_slider_window_g1_ParamLimits

0x536b,	// (0x0004b095) popup_slider_window_g2_ParamLimits

0x5387,	// (0x0004b0b1) popup_slider_window_g3_ParamLimits

0xfc1c,	// (0x00055946) popup_slider_window_g_ParamLimits

0x53e3,	// (0x0004b10d) popup_slider_window_t1_ParamLimits

0x5457,	// (0x0004b181) small_volume_slider_vertical_pane_ParamLimits

0xb17a,	// (0x00050ea4) cell_graphic2_pane_ParamLimits

0xb1d7,	// (0x00050f01) bg_button_pane_cp10_ParamLimits

0xb1d7,	// (0x00050f01) bg_button_pane_cp10

0xb1ea,	// (0x00050f14) bg_button_pane_cp11_ParamLimits

0xb1ea,	// (0x00050f14) bg_button_pane_cp11

0xb1fd,	// (0x00050f27) graphic2_pages_pane_g1_ParamLimits

0xb1fd,	// (0x00050f27) graphic2_pages_pane_g1

0xb218,	// (0x00050f42) graphic2_pages_pane_g2_ParamLimits

0xb218,	// (0x00050f42) graphic2_pages_pane_g2

0x0001,

0x031d,	// (0x00046047) graphic2_pages_pane_g_ParamLimits

0x031d,	// (0x00046047) graphic2_pages_pane_g

0xb230,	// (0x00050f5a) graphic2_pages_pane_t1_ParamLimits

0xb230,	// (0x00050f5a) graphic2_pages_pane_t1

0xb248,	// (0x00050f72) cell_graphic2_control_pane_ParamLimits

0xb248,	// (0x00050f72) cell_graphic2_control_pane

0xb440,	// (0x0005116a) cell_graphic2_pane_g1_ParamLimits

0xb440,	// (0x0005116a) cell_graphic2_pane_g1

0x9318,	// (0x0004f042) cell_graphic2_pane_g2_ParamLimits

0x9318,	// (0x0004f042) cell_graphic2_pane_g2

0xb433,	// (0x0005115d) cell_graphic2_pane_g3_ParamLimits

0xb433,	// (0x0005115d) cell_graphic2_pane_g3

0x9325,	// (0x0004f04f) cell_graphic2_pane_g4_ParamLimits

0x9325,	// (0x0004f04f) cell_graphic2_pane_g4

0xb44d,	// (0x00051177) cell_graphic2_pane_g5_ParamLimits

0xb44d,	// (0x00051177) cell_graphic2_pane_g5

0x0004,

0xfcb1,	// (0x000559db) cell_graphic2_pane_g_ParamLimits

0xfcb1,	// (0x000559db) cell_graphic2_pane_g

0xb46d,	// (0x00051197) cell_graphic2_pane_t1_ParamLimits

0xb46d,	// (0x00051197) cell_graphic2_pane_t1

0xda68,	// (0x00053792) grid_highlight_pane_cp11_ParamLimits

0xda68,	// (0x00053792) grid_highlight_pane_cp11

0xb425,	// (0x0005114f) bg_button_pane_cp05

0xb4a2,	// (0x000511cc) cell_graphic2_control_pane_g1

0xec1f,	// (0x00054949) bg_touch_area_indi_pane_g1

0x5cbe,	// (0x0004b9e8) aid_cmod_rocker_key_size

0x5cc8,	// (0x0004b9f2) aid_cmode_itu_key_size

0x5cd2,	// (0x0004b9fc) main_cmode_video_pane

0x5cdc,	// (0x0004ba06) main_comp_mode_itu_pane

0x5ce8,	// (0x0004ba12) main_comp_mode_rocker_pane

0x5cf4,	// (0x0004ba1e) cell_cmode_rocker_pane_ParamLimits

0x5cf4,	// (0x0004ba1e) cell_cmode_rocker_pane

0x5d06,	// (0x0004ba30) cell_cmode_itu_pane_ParamLimits

0x5d06,	// (0x0004ba30) cell_cmode_itu_pane

0xbeee,	// (0x00051c18) bg_button_pane_cp06_ParamLimits

0xbeee,	// (0x00051c18) bg_button_pane_cp06

0xeea6,	// (0x00054bd0) cell_cmode_rocker_pane_g1_ParamLimits

0xeea6,	// (0x00054bd0) cell_cmode_rocker_pane_g1

0x54fb,	// (0x0004b225) cell_cmode_rocker_pane_g2_ParamLimits

0x54fb,	// (0x0004b225) cell_cmode_rocker_pane_g2

0x0001,

0xfcc1,	// (0x000559eb) cell_cmode_rocker_pane_g_ParamLimits

0xfcc1,	// (0x000559eb) cell_cmode_rocker_pane_g

0xb282,	// (0x00050fac) bg_button_pane_cp07

0x5d1b,	// (0x0004ba45) cell_cmode_itu_pane_g1

0x5d24,	// (0x0004ba4e) cell_cmode_itu_pane_t1

0x5d32,	// (0x0004ba5c) cell_cmode_itu_pane_t2

0x0001,

0xfcc6,	// (0x000559f0) cell_cmode_itu_pane_t

0x5721,	// (0x0004b44b) aid_touch_ctrl_left

0x5729,	// (0x0004b453) aid_touch_ctrl_right

0xb282,	// (0x00050fac) compa_mode_pane

0xb4c8,	// (0x000511f2) aid_cmod_rocker_key_size_cp

0xb4d2,	// (0x000511fc) aid_cmode_itu_key_size_cp

0x5d40,	// (0x0004ba6a) compa_mode_pane_g1

0x5d48,	// (0x0004ba72) compa_mode_pane_g2

0x5d50,	// (0x0004ba7a) compa_mode_pane_g3

0x0002,

0xfccb,	// (0x000559f5) compa_mode_pane_g

0xb4dc,	// (0x00051206) main_comp_mode_itu_pane_cp

0xb4e4,	// (0x0005120e) main_comp_mode_rocker_pane_cp

0xb4ec,	// (0x00051216) cell_cmode_itu_pane_cp_ParamLimits

0xb4ec,	// (0x00051216) cell_cmode_itu_pane_cp

0xb501,	// (0x0005122b) cell_cmode_rocker_pane_cp_ParamLimits

0xb501,	// (0x0005122b) cell_cmode_rocker_pane_cp

0xbeee,	// (0x00051c18) bg_button_pane_cp06_cp_ParamLimits

0xbeee,	// (0x00051c18) bg_button_pane_cp06_cp

0xeea6,	// (0x00054bd0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xeea6,	// (0x00054bd0) cell_cmode_rocker_pane_g1_cp

0xec1f,	// (0x00054949) cell_cmode_rocker_pane_g2_cp

0xb282,	// (0x00050fac) bg_button_pane_cp07_cp

0xb513,	// (0x0005123d) cell_cmode_itu_pane_g1_cp

0xb51c,	// (0x00051246) cell_cmode_itu_pane_t1_cp

0xb51c,	// (0x00051246) cell_cmode_itu_pane_t2_cp

0xa111,	// (0x0004fe3b) settings_code_pane_cp2

0xb2f2,	// (0x0005101c) bg_popup_window_pane_cp3_ParamLimits

0xb95b,	// (0x00051685) heading_pane_cp3_ParamLimits

0xb967,	// (0x00051691) listscroll_popup_graphic_pane_ParamLimits

0x1987,	// (0x000476b1) fep_hwr_aid_pane_ParamLimits

0x1df7,	// (0x00047b21) aid_touch_sctrl_top_ParamLimits

0x1e12,	// (0x00047b3c) sctrl_sk_top_pane_g1_ParamLimits

0x1bde,	// (0x00047908) sctrl_sk_top_pane_g2_ParamLimits

0xfc35,	// (0x0005595f) sctrl_sk_top_pane_g_ParamLimits

0x1e1f,	// (0x00047b49) sctrl_sk_top_pane_t1_ParamLimits

0x1df7,	// (0x00047b21) aid_touch_sctrl_bottom_ParamLimits

0x1e1f,	// (0x00047b49) sctrl_sk_bottom_pane_t1_ParamLimits

0x566b,	// (0x0004b395) aid_area_touch_clock

0x8695,	// (0x0004e3bf) aid_vkb2_area_top_pane_cell_ParamLimits

0x8695,	// (0x0004e3bf) aid_vkb2_area_top_pane_cell

0x8740,	// (0x0004e46a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8740,	// (0x0004e46a) aid_vkb2_area_bottom_pane_cell

0x5bd6,	// (0x0004b900) popup_char_count_window

0x5d58,	// (0x0004ba82) popup_char_count_window_g1

0x5d61,	// (0x0004ba8b) popup_char_count_window_g2

0x5d6a,	// (0x0004ba94) popup_char_count_window_g3

0x0002,

0xfcd2,	// (0x000559fc) popup_char_count_window_g

0x5d73,	// (0x0004ba9d) popup_char_count_window_t1

0x1ece,	// (0x00047bf8) popup_fep_char_preview_window_ParamLimits

0x1ece,	// (0x00047bf8) popup_fep_char_preview_window

0x86b5,	// (0x0004e3df) vkb2_top_candi_pane_ParamLimits

0x86b5,	// (0x0004e3df) vkb2_top_candi_pane

0xb52a,	// (0x00051254) cell_vkb2_top_candi_pane_ParamLimits

0xb52a,	// (0x00051254) cell_vkb2_top_candi_pane

0x2432,	// (0x0004815c) bg_popup_fep_char_preview_window_ParamLimits

0x2432,	// (0x0004815c) bg_popup_fep_char_preview_window

0x2440,	// (0x0004816a) popup_fep_char_preview_window_t1_ParamLimits

0x2440,	// (0x0004816a) popup_fep_char_preview_window_t1

0x5d81,	// (0x0004baab) bg_popup_fep_char_preview_window_g1

0x5d89,	// (0x0004bab3) bg_popup_fep_char_preview_window_g2

0x5d91,	// (0x0004babb) bg_popup_fep_char_preview_window_g3

0x5d99,	// (0x0004bac3) bg_popup_fep_char_preview_window_g4

0x5da1,	// (0x0004bacb) bg_popup_fep_char_preview_window_g5

0x247a,	// (0x000481a4) bg_popup_fep_char_preview_window_g6

0x5da9,	// (0x0004bad3) bg_popup_fep_char_preview_window_g7

0x5db1,	// (0x0004badb) bg_popup_fep_char_preview_window_g8

0x5db9,	// (0x0004bae3) bg_popup_fep_char_preview_window_g9

0x0008,

0xfcd9,	// (0x00055a03) bg_popup_fep_char_preview_window_g

0x1bde,	// (0x00047908) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1bde,	// (0x00047908) cell_vkb2_top_candi_pane_g1

0x1bec,	// (0x00047916) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1bec,	// (0x00047916) cell_vkb2_top_candi_pane_g2

0x5c1e,	// (0x0004b948) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5c1e,	// (0x0004b948) cell_vkb2_top_candi_pane_g3

0x2482,	// (0x000481ac) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2482,	// (0x000481ac) cell_vkb2_top_candi_pane_g4

0xf2a3,	// (0x00054fcd) cell_vkb2_top_candi_pane_g5_ParamLimits

0xf2a3,	// (0x00054fcd) cell_vkb2_top_candi_pane_g5

0x24a3,	// (0x000481cd) cell_vkb2_top_candi_pane_g6_ParamLimits

0x24a3,	// (0x000481cd) cell_vkb2_top_candi_pane_g6

0x0005,

0xfcec,	// (0x00055a16) cell_vkb2_top_candi_pane_g_ParamLimits

0xfcec,	// (0x00055a16) cell_vkb2_top_candi_pane_g

0x24b1,	// (0x000481db) cell_vkb2_top_candi_pane_t1

0x1796,	// (0x000474c0) aid_size_touch_slider_mark_ParamLimits

0x1796,	// (0x000474c0) aid_size_touch_slider_mark

0xb091,	// (0x00050dbb) grid_graphic2_catg_pane_ParamLimits

0xb091,	// (0x00050dbb) grid_graphic2_catg_pane

0xb14d,	// (0x00050e77) popup_grid_graphic2_window_t1_ParamLimits

0xb14d,	// (0x00050e77) popup_grid_graphic2_window_t1

0xb163,	// (0x00050e8d) popup_grid_graphic2_window_t2_ParamLimits

0xb163,	// (0x00050e8d) popup_grid_graphic2_window_t2

0x0001,

0x0318,	// (0x00046042) popup_grid_graphic2_window_t_ParamLimits

0x0318,	// (0x00046042) popup_grid_graphic2_window_t

0xb425,	// (0x0005114f) bg_button_pane_cp05_ParamLimits

0xb4a2,	// (0x000511cc) cell_graphic2_control_pane_g1_ParamLimits

0xb590,	// (0x000512ba) cell_graphic2_catg_pane_ParamLimits

0xb590,	// (0x000512ba) cell_graphic2_catg_pane

0xb282,	// (0x00050fac) bg_button_pane_cp12

0xb5a2,	// (0x000512cc) cell_graphic2_catg_pane_g1

0x5637,	// (0x0004b361) cell_tb_ext_pane_t1_ParamLimits

0x2268,	// (0x00047f92) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2268,	// (0x00047f92) vkb2_top_cell_right_narrow_pane

0x2280,	// (0x00047faa) vkb2_top_cell_right_wide_pane_ParamLimits

0x2280,	// (0x00047faa) vkb2_top_cell_right_wide_pane

0x1979,	// (0x000476a3) bg_vkb2_func_pane_ParamLimits

0x1979,	// (0x000476a3) bg_vkb2_func_pane

0x22f1,	// (0x0004801b) vkb2_top_cell_left_pane_g1_ParamLimits

0x1979,	// (0x000476a3) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1979,	// (0x000476a3) bg_vkb2_fuc_pane_cp03

0x234f,	// (0x00048079) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xce63,	// (0x00052b8d) bg_vkb2_func_pane_g1

0xce6b,	// (0x00052b95) bg_vkb2_func_pane_g2

0xce7b,	// (0x00052ba5) bg_vkb2_func_pane_g3

0xce73,	// (0x00052b9d) bg_vkb2_func_pane_g4

0xce83,	// (0x00052bad) bg_vkb2_func_pane_g5

0xce8b,	// (0x00052bb5) bg_vkb2_func_pane_g6

0xce93,	// (0x00052bbd) bg_vkb2_func_pane_g7

0xce9b,	// (0x00052bc5) bg_vkb2_func_pane_g8

0xce5b,	// (0x00052b85) bg_vkb2_func_pane_g9

0x0008,

0xfcf9,	// (0x00055a23) bg_vkb2_func_pane_g

0x1979,	// (0x000476a3) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1979,	// (0x000476a3) bg_vkb2_fuc_pane_cp01

0x22f1,	// (0x0004801b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x22f1,	// (0x0004801b) vkb2_top_cell_right_wide_pane_g1

0x1979,	// (0x000476a3) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1979,	// (0x000476a3) bg_vkb2_fuc_pane_cp02

0x234f,	// (0x00048079) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x234f,	// (0x00048079) vkb2_top_cell_right_narrow_pane_g1

0xa8f4,	// (0x0005061e) aid_touch_area_decrease_ParamLimits

0xa8f4,	// (0x0005061e) aid_touch_area_decrease

0xa92e,	// (0x00050658) aid_touch_area_increase_ParamLimits

0xa92e,	// (0x00050658) aid_touch_area_increase

0xa956,	// (0x00050680) aid_touch_area_mute_ParamLimits

0xa956,	// (0x00050680) aid_touch_area_mute

0xa986,	// (0x000506b0) aid_touch_area_slider_ParamLimits

0xa986,	// (0x000506b0) aid_touch_area_slider

0xa9c6,	// (0x000506f0) popup_slider_window_g4_ParamLimits

0xa9c6,	// (0x000506f0) popup_slider_window_g4

0xa9ee,	// (0x00050718) popup_slider_window_g5_ParamLimits

0xa9ee,	// (0x00050718) popup_slider_window_g5

0xaa22,	// (0x0005074c) popup_slider_window_g6_ParamLimits

0xaa22,	// (0x0005074c) popup_slider_window_g6

0x5411,	// (0x0004b13b) popup_slider_window_t2_ParamLimits

0x5411,	// (0x0004b13b) popup_slider_window_t2

0x0001,

0xfc29,	// (0x00055953) popup_slider_window_t_ParamLimits

0xfc29,	// (0x00055953) popup_slider_window_t

0xaa3e,	// (0x00050768) slider_pane_ParamLimits

0xaa3e,	// (0x00050768) slider_pane

0x5dc1,	// (0x0004baeb) slider_pane_g1_ParamLimits

0x5dc1,	// (0x0004baeb) slider_pane_g1

0x5dd5,	// (0x0004baff) slider_pane_g2_ParamLimits

0x5dd5,	// (0x0004baff) slider_pane_g2

0x5deb,	// (0x0004bb15) slider_pane_g3_ParamLimits

0x5deb,	// (0x0004bb15) slider_pane_g3

0x0003,

0xfd0c,	// (0x00055a36) slider_pane_g_ParamLimits

0xfd0c,	// (0x00055a36) slider_pane_g

0x989d,	// (0x0004f5c7) popup_tb_float_extension_window_ParamLimits

0x989d,	// (0x0004f5c7) popup_tb_float_extension_window

0x5e17,	// (0x0004bb41) aid_size_cell_tb_float_ext

0xb282,	// (0x00050fac) bg_popup_sub_window_cp28

0x5e23,	// (0x0004bb4d) grid_tb_float_ext_pane

0x5e2d,	// (0x0004bb57) cell_tb_float_ext_pane_ParamLimits

0x5e2d,	// (0x0004bb57) cell_tb_float_ext_pane

0x5e47,	// (0x0004bb71) cell_tb_float_ext_pane_g1

0x5e50,	// (0x0004bb7a) grid_highlight_pane_cp12

0x84a7,	// (0x0004e1d1) cell_last_hwr_side_pane_ParamLimits

0x84a7,	// (0x0004e1d1) cell_last_hwr_side_pane

0xec1f,	// (0x00054949) cell_last_hwr_side_pane_g1

0x5e59,	// (0x0004bb83) cell_last_hwr_side_pane_g2

0x0001,

0xfd15,	// (0x00055a3f) cell_last_hwr_side_pane_g

0x881c,	// (0x0004e546) vkb2_area_bottom_space_btn_pane_ParamLimits

0x881c,	// (0x0004e546) vkb2_area_bottom_space_btn_pane

0x1bde,	// (0x00047908) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5cac,	// (0x0004b9d6) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x24b1,	// (0x000481db) cell_vkb2_top_candi_pane_t1_ParamLimits

0x24d0,	// (0x000481fa) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x24d0,	// (0x000481fa) vkb2_area_bottom_space_btn_pane_g1

0x250a,	// (0x00048234) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x250a,	// (0x00048234) vkb2_area_bottom_space_btn_pane_g2

0x2540,	// (0x0004826a) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2540,	// (0x0004826a) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfd1a,	// (0x00055a44) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfd1a,	// (0x00055a44) vkb2_area_bottom_space_btn_pane_g

0x1a3c,	// (0x00047766) cel_fep_hwr_func_pane_ParamLimits

0x1a3c,	// (0x00047766) cel_fep_hwr_func_pane

0x847c,	// (0x0004e1a6) cell_hwr_side_button_pane_ParamLimits

0x847c,	// (0x0004e1a6) cell_hwr_side_button_pane

0x566b,	// (0x0004b395) aid_area_touch_clock_ParamLimits

0xb425,	// (0x0005114f) bg_uniindi_top_pane_ParamLimits

0x567d,	// (0x0004b3a7) uniindi_top_pane_g1_ParamLimits

0x5693,	// (0x0004b3bd) uniindi_top_pane_g2_ParamLimits

0x569f,	// (0x0004b3c9) uniindi_top_pane_g3_ParamLimits

0x56b0,	// (0x0004b3da) uniindi_top_pane_g4_ParamLimits

0xfc5c,	// (0x00055986) uniindi_top_pane_g_ParamLimits

0x56bd,	// (0x0004b3e7) uniindi_top_pane_t1_ParamLimits

0xb425,	// (0x0005114f) bg_vkb2_func_pane_cp01_ParamLimits

0xb425,	// (0x0005114f) bg_vkb2_func_pane_cp01

0x5e62,	// (0x0004bb8c) cel_fep_hwr_func_pane_g1_ParamLimits

0x5e62,	// (0x0004bb8c) cel_fep_hwr_func_pane_g1

0xb425,	// (0x0005114f) bg_vkb2_func_pane_cp02_ParamLimits

0xb425,	// (0x0005114f) bg_vkb2_func_pane_cp02

0x5e62,	// (0x0004bb8c) cell_hwr_side_button_pane_g1_ParamLimits

0x5e62,	// (0x0004bb8c) cell_hwr_side_button_pane_g1

0xcd73,	// (0x00052a9d) status_pane_g4_ParamLimits

0xcd73,	// (0x00052a9d) status_pane_g4

0xcd8b,	// (0x00052ab5) status_pane_t1

0xeaae,	// (0x000547d8) form2_midp_gauge_slider_cont_pane

0xeab6,	// (0x000547e0) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa3ba,	// (0x000500e4) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa3cc,	// (0x000500f6) form2_midp_gauge_slider_pane_t3_ParamLimits

0x0071,	// (0x00045d9b) form2_midp_gauge_slider_pane_t_ParamLimits

0xeac8,	// (0x000547f2) form2_midp_slider_pane_ParamLimits

0x1e8e,	// (0x00047bb8) aid_size_cell_func_vkb2_ParamLimits

0x1e8e,	// (0x00047bb8) aid_size_cell_func_vkb2

0x5e03,	// (0x0004bb2d) slider_pane_g4_ParamLimits

0x5e03,	// (0x0004bb2d) slider_pane_g4

0x887d,	// (0x0004e5a7) form2_midp_gauge_slider_pane_t2_cp01

0x888b,	// (0x0004e5b5) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x888b,	// (0x0004e5b5) form2_midp_gauge_slider_pane_t3_cp01

0x25b5,	// (0x000482df) form2_midp_slider_pane_cp01

0xb282,	// (0x00050fac) navi_smil_pane

0x5e92,	// (0x0004bbbc) navi_smil_pane_g1

0x5e9a,	// (0x0004bbc4) navi_smil_pane_t1

0x5e70,	// (0x0004bb9a) form2_midp_slider_pane_g1

0x5e79,	// (0x0004bba3) form2_midp_slider_pane_g2

0x5e81,	// (0x0004bbab) form2_midp_slider_pane_g3

0x5e70,	// (0x0004bb9a) form2_midp_slider_pane_g4

0xb5ab,	// (0x000512d5) form2_midp_slider_pane_g5

0x0004,

0xfd23,	// (0x00055a4d) form2_midp_slider_pane_g

0x257a,	// (0x000482a4) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x257a,	// (0x000482a4) vkb2_area_bottom_space_btn_pane_g4

0x9a79,	// (0x0004f7a3) lc0_navi_pane_ParamLimits

0x9a79,	// (0x0004f7a3) lc0_navi_pane

0x9ae3,	// (0x0004f80d) lc0_stat_indi_pane_ParamLimits

0x9ae3,	// (0x0004f80d) lc0_stat_indi_pane

0x9af8,	// (0x0004f822) ls0_title_pane_ParamLimits

0x9af8,	// (0x0004f822) ls0_title_pane

0xbeee,	// (0x00051c18) bg_popup_sub_pane_cp14_ParamLimits

0x5652,	// (0x0004b37c) list_uniindi_pane_ParamLimits

0x565e,	// (0x0004b388) uniindi_top_pane_ParamLimits

0x56f9,	// (0x0004b423) list_single_uniindi_pane_g1_ParamLimits

0x570c,	// (0x0004b436) list_single_uniindi_pane_t1_ParamLimits

0x88a8,	// (0x0004e5d2) lc0_stat_clock_pane_ParamLimits

0x88a8,	// (0x0004e5d2) lc0_stat_clock_pane

0xb5b4,	// (0x000512de) lc0_stat_indi_pane_g1_ParamLimits

0xb5b4,	// (0x000512de) lc0_stat_indi_pane_g1

0xb5c1,	// (0x000512eb) lc0_stat_indi_pane_g2_ParamLimits

0xb5c1,	// (0x000512eb) lc0_stat_indi_pane_g2

0x0001,

0x039f,	// (0x000460c9) lc0_stat_indi_pane_g_ParamLimits

0x039f,	// (0x000460c9) lc0_stat_indi_pane_g

0x88b5,	// (0x0004e5df) lc0_uni_indicator_pane_ParamLimits

0x88b5,	// (0x0004e5df) lc0_uni_indicator_pane

0xb5ce,	// (0x000512f8) ls0_title_pane_g1_ParamLimits

0xb5ce,	// (0x000512f8) ls0_title_pane_g1

0xb5e2,	// (0x0005130c) ls0_title_pane_t1_ParamLimits

0xb5e2,	// (0x0005130c) ls0_title_pane_t1

0x88c2,	// (0x0004e5ec) lc0_uni_indicator_pane_g1_ParamLimits

0x88c2,	// (0x0004e5ec) lc0_uni_indicator_pane_g1

0x5ea8,	// (0x0004bbd2) lc0_stat_clock_pane_t1

0xb282,	// (0x00050fac) main_ai5_pane

0x5eb6,	// (0x0004bbe0) ai5_sk_pane_ParamLimits

0x5eb6,	// (0x0004bbe0) ai5_sk_pane

0xb610,	// (0x0005133a) cell_ai5_widget_pane_ParamLimits

0xb610,	// (0x0005133a) cell_ai5_widget_pane

0x5ec3,	// (0x0004bbed) aid_size_cell_widget_grid

0x5ed7,	// (0x0004bc01) bg_ai5_widget_pane_ParamLimits

0x5ed7,	// (0x0004bc01) bg_ai5_widget_pane

0xb699,	// (0x000513c3) cell_ai5_widget_pane_g2

0xb6a9,	// (0x000513d3) cell_ai5_widget_pane_g3

0xb6c8,	// (0x000513f2) cell_ai5_widget_pane_g4

0xb6d4,	// (0x000513fe) cell_ai5_widget_pane_g5

0xb6e0,	// (0x0005140a) cell_ai5_widget_pane_g6

0xb6ec,	// (0x00051416) cell_ai5_widget_pane_g7

0xb734,	// (0x0005145e) cell_ai5_widget_pane_t1_ParamLimits

0xb734,	// (0x0005145e) cell_ai5_widget_pane_t1

0xb751,	// (0x0005147b) cell_ai5_widget_pane_t2_ParamLimits

0xb751,	// (0x0005147b) cell_ai5_widget_pane_t2

0xb769,	// (0x00051493) cell_ai5_widget_pane_t3_ParamLimits

0xb769,	// (0x00051493) cell_ai5_widget_pane_t3

0xb781,	// (0x000514ab) cell_ai5_widget_pane_t4_ParamLimits

0xb781,	// (0x000514ab) cell_ai5_widget_pane_t4

0xba9b,	// (0x000517c5) cell_ai5_widget_pane_t5_ParamLimits

0xba9b,	// (0x000517c5) cell_ai5_widget_pane_t5

0x5ee3,	// (0x0004bc0d) cell_ai5_widget_pane_t6_ParamLimits

0x5ee3,	// (0x0004bc0d) cell_ai5_widget_pane_t6

0x5ef5,	// (0x0004bc1f) cell_ai5_widget_pane_t7_ParamLimits

0x5ef5,	// (0x0004bc1f) cell_ai5_widget_pane_t7

0xbaba,	// (0x000517e4) cell_ai5_widget_pane_t8_ParamLimits

0xbaba,	// (0x000517e4) cell_ai5_widget_pane_t8

0x0009,

0xfd2e,	// (0x00055a58) cell_ai5_widget_pane_t_ParamLimits

0xfd2e,	// (0x00055a58) cell_ai5_widget_pane_t

0xbb06,	// (0x00051830) grid_ai5_widget_pane

0xbeee,	// (0x00051c18) highlight_cell_ai5_widget_pane_ParamLimits

0xbeee,	// (0x00051c18) highlight_cell_ai5_widget_pane

0xbb1c,	// (0x00051846) ai5_sk_left_pane

0xbb26,	// (0x00051850) ai5_sk_middle_pane

0xbb30,	// (0x0005185a) ai5_sk_right_pane

0x5f0e,	// (0x0004bc38) bg_ai5_widget_pane_g1_ParamLimits

0x5f0e,	// (0x0004bc38) bg_ai5_widget_pane_g1

0x5f1a,	// (0x0004bc44) bg_ai5_widget_pane_g2_ParamLimits

0x5f1a,	// (0x0004bc44) bg_ai5_widget_pane_g2

0x5f26,	// (0x0004bc50) bg_ai5_widget_pane_g3_ParamLimits

0x5f26,	// (0x0004bc50) bg_ai5_widget_pane_g3

0x5f32,	// (0x0004bc5c) bg_ai5_widget_pane_g4_ParamLimits

0x5f32,	// (0x0004bc5c) bg_ai5_widget_pane_g4

0x5f3e,	// (0x0004bc68) bg_ai5_widget_pane_g5_ParamLimits

0x5f3e,	// (0x0004bc68) bg_ai5_widget_pane_g5

0x5f4a,	// (0x0004bc74) bg_ai5_widget_pane_g6_ParamLimits

0x5f4a,	// (0x0004bc74) bg_ai5_widget_pane_g6

0x5f56,	// (0x0004bc80) bg_ai5_widget_pane_g7_ParamLimits

0x5f56,	// (0x0004bc80) bg_ai5_widget_pane_g7

0x5f62,	// (0x0004bc8c) bg_ai5_widget_pane_g8_ParamLimits

0x5f62,	// (0x0004bc8c) bg_ai5_widget_pane_g8

0x5f6e,	// (0x0004bc98) bg_ai5_widget_pane_g9_ParamLimits

0x5f6e,	// (0x0004bc98) bg_ai5_widget_pane_g9

0x0008,

0xfd43,	// (0x00055a6d) bg_ai5_widget_pane_g_ParamLimits

0xfd43,	// (0x00055a6d) bg_ai5_widget_pane_g

0x5fa1,	// (0x0004bccb) cell_shortcut_ai5_widget_pane_ParamLimits

0x5fa1,	// (0x0004bccb) cell_shortcut_ai5_widget_pane

0xb32e,	// (0x00051058) bg_cell_shortcut_ai5_widget_pane

0x5fb2,	// (0x0004bcdc) cell_grid_ai5_widget_pane_g1

0x5fbb,	// (0x0004bce5) highlight_cell_shortcut_ai5_widget_pane

0xce63,	// (0x00052b8d) ai5_sk_left_pane_g1

0x5fc3,	// (0x0004bced) ai5_sk_left_pane_g2

0x5fcb,	// (0x0004bcf5) ai5_sk_left_pane_g3

0x5fd3,	// (0x0004bcfd) ai5_sk_left_pane_g4

0x0003,

0xfd56,	// (0x00055a80) ai5_sk_left_pane_g

0x5fdb,	// (0x0004bd05) ai5_sk_left_pane_t1

0xce6b,	// (0x00052b95) ai5_sk_right_pane_g1

0x5fe9,	// (0x0004bd13) ai5_sk_right_pane_g2

0x5ff1,	// (0x0004bd1b) ai5_sk_right_pane_g3

0x5ff9,	// (0x0004bd23) ai5_sk_right_pane_g4

0x0003,

0xfd5f,	// (0x00055a89) ai5_sk_right_pane_g

0x6001,	// (0x0004bd2b) ai5_sk_right_pane_t1

0xce6b,	// (0x00052b95) ai5_sk_middle_pane_g1

0xce63,	// (0x00052b8d) ai5_sk_middle_pane_g2

0xce83,	// (0x00052bad) ai5_sk_middle_pane_g3

0x5ff1,	// (0x0004bd1b) ai5_sk_middle_pane_g4

0x5fcb,	// (0x0004bcf5) ai5_sk_middle_pane_g5

0x600f,	// (0x0004bd39) ai5_sk_middle_pane_g6

0xbb3a,	// (0x00051864) ai5_sk_middle_pane_g7

0x0006,

0xfd68,	// (0x00055a92) ai5_sk_middle_pane_g

0x9965,	// (0x0004f68f) aid_touch_area_size_lc0_ParamLimits

0x9965,	// (0x0004f68f) aid_touch_area_size_lc0

0x1c0d,	// (0x00047937) cell_hwr_candidate_pane_t1_ParamLimits

0xcc95,	// (0x000529bf) aid_touch_navi_pane

0x9bea,	// (0x0004f914) status_dt_navi_pane_ParamLimits

0x9bea,	// (0x0004f914) status_dt_navi_pane

0x9c02,	// (0x0004f92c) status_dt_sta_pane_ParamLimits

0x9c02,	// (0x0004f92c) status_dt_sta_pane

0xbb42,	// (0x0005186c) dt_sta_controll_pane

0xbb4f,	// (0x00051879) dt_sta_indi_pane

0xbb5c,	// (0x00051886) dt_sta_title_pane

0xb425,	// (0x0005114f) bg_dt_sta_indi_pane_ParamLimits

0xb425,	// (0x0005114f) bg_dt_sta_indi_pane

0xbb6e,	// (0x00051898) dt_sta_battery_pane

0xbb76,	// (0x000518a0) dt_sta_indi_pane_g1

0x6017,	// (0x0004bd41) dt_sta_indi_pane_g2

0x6020,	// (0x0004bd4a) dt_sta_indi_pane_g3

0x0002,

0xfd77,	// (0x00055aa1) dt_sta_indi_pane_g

0x6029,	// (0x0004bd53) dt_sta_signal_pane

0xbeee,	// (0x00051c18) bg_dt_sta_title_pane_ParamLimits

0xbeee,	// (0x00051c18) bg_dt_sta_title_pane

0xdb3a,	// (0x00053864) dt_sta_title_pane_g1

0xbb7f,	// (0x000518a9) dt_sta_title_pane_t1_ParamLimits

0xbb7f,	// (0x000518a9) dt_sta_title_pane_t1

0xb282,	// (0x00050fac) bg_dt_sta_control_pane

0xbb94,	// (0x000518be) dt_sta_controll_pane_g1

0x6032,	// (0x0004bd5c) bg_dt_sta_title_pane_g1

0x603b,	// (0x0004bd65) bg_dt_sta_title_pane_g2

0x6044,	// (0x0004bd6e) bg_dt_sta_title_pane_g3

0x0002,

0xfd7e,	// (0x00055aa8) bg_dt_sta_title_pane_g

0xec1f,	// (0x00054949) bg_dt_sta_indi_pane_g1

0x604d,	// (0x0004bd77) dt_sta_signal_pane_g1

0x6055,	// (0x0004bd7f) dt_sta_signal_pane_g2

0x0001,

0xfd85,	// (0x00055aaf) dt_sta_signal_pane_g

0x605d,	// (0x0004bd87) dt_sta_battery_pane_g1

0x6066,	// (0x0004bd90) dt_sta_battery_pane_t1

0xec1f,	// (0x00054949) bg_dt_sta_control_pane_g1

0xc498,	// (0x000521c2) fep_china_uni_eep_pane

0xc4a0,	// (0x000521ca) fep_china_uni_entry_pane_ParamLimits

0xc4b0,	// (0x000521da) popup_fep_china_uni_window_g1_ParamLimits

0xc4c0,	// (0x000521ea) popup_fep_china_uni_window_g2_ParamLimits

0xc4c0,	// (0x000521ea) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x00055464) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x00055464) popup_fep_china_uni_window_g

0x6075,	// (0x0004bd9f) fep_china_uni_eep_pane_g1

0x607d,	// (0x0004bda7) fep_china_uni_eep_pane_t1

0x5e89,	// (0x0004bbb3) aid_touch_area_size_smil_player

0xcd46,	// (0x00052a70) lc0_clock_pane

0xcd7f,	// (0x00052aa9) status_pane_g5_ParamLimits

0xcd7f,	// (0x00052aa9) status_pane_g5

0x9431,	// (0x0004f15b) popup_keymap_window

0xcd5f,	// (0x00052a89) status_icon_pane

0xb6a9,	// (0x000513d3) cell_ai5_widget_pane_g3_ParamLimits

0xb6c8,	// (0x000513f2) cell_ai5_widget_pane_g4_ParamLimits

0xb6d4,	// (0x000513fe) cell_ai5_widget_pane_g5_ParamLimits

0xb6f8,	// (0x00051422) cell_ai5_widget_pane_g8_ParamLimits

0xb6f8,	// (0x00051422) cell_ai5_widget_pane_g8

0xb70c,	// (0x00051436) cell_ai5_widget_pane_g9_ParamLimits

0xb70c,	// (0x00051436) cell_ai5_widget_pane_g9

0xb720,	// (0x0005144a) cell_ai5_widget_pane_g10_ParamLimits

0xb720,	// (0x0005144a) cell_ai5_widget_pane_g10

0x608c,	// (0x0004bdb6) status_icon_pane_g1

0xb282,	// (0x00050fac) bg_popup_sub_pane_cp13

0x6094,	// (0x0004bdbe) popup_keymap_window_t1

0x923c,	// (0x0004ef66) control_pane_g6_ParamLimits

0x923c,	// (0x0004ef66) control_pane_g6

0x9249,	// (0x0004ef73) control_pane_g7_ParamLimits

0x9249,	// (0x0004ef73) control_pane_g7

0x9256,	// (0x0004ef80) control_pane_g8_ParamLimits

0x9256,	// (0x0004ef80) control_pane_g8

0xbb42,	// (0x0005186c) dt_sta_controll_pane_ParamLimits

0xbb4f,	// (0x00051879) dt_sta_indi_pane_ParamLimits

0xbb5c,	// (0x00051886) dt_sta_title_pane_ParamLimits

0xbe24,	// (0x00051b4e) aid_size_touch_scroll_bar_cale

0x0760,	// (0x0004648a) popup_discreet_window_ParamLimits

0x0760,	// (0x0004648a) popup_discreet_window

0x7bc1,	// (0x0004d8eb) popup_sk_window

0xd416,	// (0x00053140) bg_popup_sub_pane_cp28_ParamLimits

0xd416,	// (0x00053140) bg_popup_sub_pane_cp28

0x60a2,	// (0x0004bdcc) popup_discreet_window_g1_ParamLimits

0x60a2,	// (0x0004bdcc) popup_discreet_window_g1

0x60c2,	// (0x0004bdec) popup_discreet_window_t1_ParamLimits

0x60c2,	// (0x0004bdec) popup_discreet_window_t1

0x60e0,	// (0x0004be0a) popup_discreet_window_t2_ParamLimits

0x60e0,	// (0x0004be0a) popup_discreet_window_t2

0x0002,

0xfd8a,	// (0x00055ab4) popup_discreet_window_t_ParamLimits

0xfd8a,	// (0x00055ab4) popup_discreet_window_t

0x25ee,	// (0x00048318) popup_sk_window_g1

0x25f8,	// (0x00048322) popup_sk_window_g2

0x0001,

0xfd91,	// (0x00055abb) popup_sk_window_g

0x6132,	// (0x0004be5c) popup_sk_window_t1

0x6140,	// (0x0004be6a) popup_sk_window_t1_copy1

0xb699,	// (0x000513c3) cell_ai5_widget_pane_g2_ParamLimits

0xbacc,	// (0x000517f6) cell_ai5_widget_pane_t9_ParamLimits

0xbacc,	// (0x000517f6) cell_ai5_widget_pane_t9

0xb282,	// (0x00050fac) main_fep_fshwr2_pane

0xbb9d,	// (0x000518c7) aid_fshwr2_btn_pane

0xbba5,	// (0x000518cf) aid_fshwr2_syb_pane

0xbbad,	// (0x000518d7) aid_fshwr2_txt_pane

0xbbb5,	// (0x000518df) fshwr2_func_candi_pane

0xbbbf,	// (0x000518e9) fshwr2_hwr_syb_pane

0xbbcd,	// (0x000518f7) fshwr2_icf_pane

0xb282,	// (0x00050fac) fshwr2_icf_bg_pane

0xbbd7,	// (0x00051901) fshwr2_icf_pane_t1_ParamLimits

0xbbd7,	// (0x00051901) fshwr2_icf_pane_t1

0xec1f,	// (0x00054949) fshwr2_func_candi_pane_g1

0x6162,	// (0x0004be8c) fshwr2_func_candi_row_pane_ParamLimits

0x6162,	// (0x0004be8c) fshwr2_func_candi_row_pane

0xbbf1,	// (0x0005191b) cell_fshwr2_syb_pane_ParamLimits

0xbbf1,	// (0x0005191b) cell_fshwr2_syb_pane

0xeea6,	// (0x00054bd0) fshwr2_hwr_syb_pane_g1_ParamLimits

0xeea6,	// (0x00054bd0) fshwr2_hwr_syb_pane_g1

0xb282,	// (0x00050fac) bg_popup_call_pane_cp01

0x6173,	// (0x0004be9d) fshwr2_func_candi_cell_pane_ParamLimits

0x6173,	// (0x0004be9d) fshwr2_func_candi_cell_pane

0x61a4,	// (0x0004bece) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x61a4,	// (0x0004bece) fshwr2_func_candi_cell_bg_pane

0x61be,	// (0x0004bee8) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x61be,	// (0x0004bee8) fshwr2_func_candi_cell_pane_g1

0x61de,	// (0x0004bf08) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x61de,	// (0x0004bf08) fshwr2_func_candi_cell_pane_t1

0xb282,	// (0x00050fac) bg_button_pane_cp08

0xc929,	// (0x00052653) cell_fshwr2_syb_bg_pane

0xbc0b,	// (0x00051935) cell_fshwr2_syb_bg_pane_g1

0x61f1,	// (0x0004bf1b) cell_fshwr2_syb_bg_pane_t1

0xbeee,	// (0x00051c18) main_tmo_pane

0x9f42,	// (0x0004fc6c) uni_indicator_pane_g1_ParamLimits

0x9f57,	// (0x0004fc81) uni_indicator_pane_g2_ParamLimits

0x9f6c,	// (0x0004fc96) uni_indicator_pane_g3_ParamLimits

0xddfe,	// (0x00053b28) uni_indicator_pane_g4_ParamLimits

0xddfe,	// (0x00053b28) uni_indicator_pane_g4

0xde12,	// (0x00053b3c) uni_indicator_pane_g5_ParamLimits

0xde12,	// (0x00053b3c) uni_indicator_pane_g5

0xde26,	// (0x00053b50) uni_indicator_pane_g6_ParamLimits

0xde26,	// (0x00053b50) uni_indicator_pane_g6

0xf932,	// (0x0005565c) uni_indicator_pane_g_ParamLimits

0xa8d6,	// (0x00050600) popup_tmo_note_window_ParamLimits

0xa8d6,	// (0x00050600) popup_tmo_note_window

0xb282,	// (0x00050fac) fshwr2_bg_pane

0x61cf,	// (0x0004bef9) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x61cf,	// (0x0004bef9) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfd96,	// (0x00055ac0) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfd96,	// (0x00055ac0) fshwr2_func_candi_cell_pane_g

0xec1f,	// (0x00054949) bg_popup_window_pane_cp01

0x6200,	// (0x0004bf2a) bg_popup_window_pane_g1_cp01

0x6209,	// (0x0004bf33) bg_popup_window_pane_cp22_ParamLimits

0x6209,	// (0x0004bf33) bg_popup_window_pane_cp22

0x6217,	// (0x0004bf41) listscroll_tmo_link_pane_ParamLimits

0x6217,	// (0x0004bf41) listscroll_tmo_link_pane

0x6257,	// (0x0004bf81) popup_tmo_note_window_g1_ParamLimits

0x6257,	// (0x0004bf81) popup_tmo_note_window_g1

0x6264,	// (0x0004bf8e) tmo_note_info_pane_ParamLimits

0x6264,	// (0x0004bf8e) tmo_note_info_pane

0xbc13,	// (0x0005193d) list_tmo_note_info_pane_g1_ParamLimits

0xbc13,	// (0x0005193d) list_tmo_note_info_pane_g1

0x627e,	// (0x0004bfa8) list_tmo_note_info_pane_g2_ParamLimits

0x627e,	// (0x0004bfa8) list_tmo_note_info_pane_g2

0x0001,

0xfd9b,	// (0x00055ac5) list_tmo_note_info_pane_g_ParamLimits

0xfd9b,	// (0x00055ac5) list_tmo_note_info_pane_g

0x629a,	// (0x0004bfc4) list_tmo_note_info_text_pane_ParamLimits

0x629a,	// (0x0004bfc4) list_tmo_note_info_text_pane

0x62dc,	// (0x0004c006) list_tmo_link_pane

0x62e9,	// (0x0004c013) scroll_pane_cp20

0x62f6,	// (0x0004c020) list_single_tmo_link_pane_ParamLimits

0x62f6,	// (0x0004c020) list_single_tmo_link_pane

0x6306,	// (0x0004c030) list_single_tmo_link_pane_t1

0x6314,	// (0x0004c03e) list_tmo_note_info_text_pane_t1_ParamLimits

0x6314,	// (0x0004c03e) list_tmo_note_info_text_pane_t1

0x8f69,	// (0x0004ec93) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8f69,	// (0x0004ec93) aid_size_touch_scroll_bar_cp01

0x8076,	// (0x0004dda0) aid_size_touch_slider_marker

0x7bb1,	// (0x0004d8db) popup_settings_window_ParamLimits

0x7bb1,	// (0x0004d8db) popup_settings_window

0x2ed2,	// (0x00048bfc) popup_candi_list_indi_window

0xcc95,	// (0x000529bf) aid_touch_navi_pane_ParamLimits

0x1dcb,	// (0x00047af5) rs_clock_indi_pane

0x1dd4,	// (0x00047afe) sctrl_sk_bottom_pane_ParamLimits

0x1de5,	// (0x00047b0f) sctrl_sk_top_pane_ParamLimits

0x1ee8,	// (0x00047c12) popup_fep_tooltip_window

0x5ec3,	// (0x0004bbed) aid_size_cell_widget_grid_ParamLimits

0xb68d,	// (0x000513b7) cell_ai5_widget_pane_g1_ParamLimits

0xb68d,	// (0x000513b7) cell_ai5_widget_pane_g1

0xb6e0,	// (0x0005140a) cell_ai5_widget_pane_g6_ParamLimits

0xb6ec,	// (0x00051416) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x03a4,	// (0x000460ce) cell_ai5_widget_pane_g_ParamLimits

0x03a4,	// (0x000460ce) cell_ai5_widget_pane_g

0xbaf0,	// (0x0005181a) cell_ai5_widget_pane_t10_ParamLimits

0xbaf0,	// (0x0005181a) cell_ai5_widget_pane_t10

0xbb06,	// (0x00051830) grid_ai5_widget_pane_ParamLimits

0x5f7a,	// (0x0004bca4) cell_contacts_ai5_widget_pane_ParamLimits

0x5f7a,	// (0x0004bca4) cell_contacts_ai5_widget_pane

0x60f5,	// (0x0004be1f) popup_discreet_window_t3_ParamLimits

0x60f5,	// (0x0004be1f) popup_discreet_window_t3

0x614e,	// (0x0004be78) popup_fshwr2_char_preview_window_ParamLimits

0x614e,	// (0x0004be78) popup_fshwr2_char_preview_window

0xbc2a,	// (0x00051954) tmo_note_info_pane_t1

0xbc3f,	// (0x00051969) tmo_note_info_pane_t2

0xbc58,	// (0x00051982) tmo_note_info_pane_t3

0x62b8,	// (0x0004bfe2) tmo_note_info_pane_t4

0x62ca,	// (0x0004bff4) tmo_note_info_pane_t5

0x0004,

0xfda0,	// (0x00055aca) tmo_note_info_pane_t

0x62dc,	// (0x0004c006) list_tmo_link_pane_ParamLimits

0x62e9,	// (0x0004c013) scroll_pane_cp20_ParamLimits

0xb282,	// (0x00050fac) bg_popup_fep_char_preview_window_cp01

0x632d,	// (0x0004c057) popup_fshwr2_char_preview_window_t1

0x633b,	// (0x0004c065) popup_candi_list_indi_window_g1

0x6344,	// (0x0004c06e) bg_cell_contacts_ai5_widget_pane

0x6350,	// (0x0004c07a) cell_contacts_ai5_widget_pane_g1

0x6364,	// (0x0004c08e) cell_contacts_ai5_widget_pane_g2

0x6373,	// (0x0004c09d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfdab,	// (0x00055ad5) cell_contacts_ai5_widget_pane_g

0x6386,	// (0x0004c0b0) cell_contacts_ai5_widget_pane_t1

0xbeee,	// (0x00051c18) highlight_cell_shortcut_ai5_widget_pane_cp01

0x6400,	// (0x0004c12a) settings_container_pane

0xc929,	// (0x00052653) listscroll_set_pane_copy1

0xe60f,	// (0x00054339) scroll_pane_cp121_copy1

0x640c,	// (0x0004c136) set_content_pane_copy1

0x6414,	// (0x0004c13e) aid_height_set_list_copy1_ParamLimits

0x6414,	// (0x0004c13e) aid_height_set_list_copy1

0xd680,	// (0x000533aa) aid_size_parent_copy1_ParamLimits

0xd680,	// (0x000533aa) aid_size_parent_copy1

0x6420,	// (0x0004c14a) button_value_adjust_pane_cp6_copy1_ParamLimits

0x6420,	// (0x0004c14a) button_value_adjust_pane_cp6_copy1

0xc039,	// (0x00051d63) list_highlight_pane_cp2_copy1_ParamLimits

0xc039,	// (0x00051d63) list_highlight_pane_cp2_copy1

0x6434,	// (0x0004c15e) list_set_pane_copy1_ParamLimits

0x6434,	// (0x0004c15e) list_set_pane_copy1

0x639b,	// (0x0004c0c5) main_pane_set_t1_copy1_ParamLimits

0x639b,	// (0x0004c0c5) main_pane_set_t1_copy1

0x63d5,	// (0x0004c0ff) main_pane_set_t2_copy1_ParamLimits

0x63d5,	// (0x0004c0ff) main_pane_set_t2_copy1

0x64e1,	// (0x0004c20b) main_pane_set_t3_copy1

0x64ef,	// (0x0004c219) main_pane_set_t4_copy1

0x63f4,	// (0x0004c11e) set_content_pane_g1_copy1_ParamLimits

0x63f4,	// (0x0004c11e) set_content_pane_g1_copy1

0x64fd,	// (0x0004c227) setting_code_pane_copy1

0x6507,	// (0x0004c231) setting_slider_graphic_pane_copy1

0x6507,	// (0x0004c231) setting_slider_pane_copy1

0x6507,	// (0x0004c231) setting_text_pane_copy1

0x6511,	// (0x0004c23b) setting_volume_pane_copy1

0x651a,	// (0x0004c244) settings_code_pane_cp2_copy1

0x6522,	// (0x0004c24c) settings_code_pane_cp_copy1_ParamLimits

0x6522,	// (0x0004c24c) settings_code_pane_cp_copy1

0x6536,	// (0x0004c260) volume_set_pane_copy1

0x653e,	// (0x0004c268) volume_set_pane_g10_copy1

0x6546,	// (0x0004c270) volume_set_pane_g1_copy1

0x654e,	// (0x0004c278) volume_set_pane_g2_copy1

0x6556,	// (0x0004c280) volume_set_pane_g3_copy1

0x655e,	// (0x0004c288) volume_set_pane_g4_copy1

0x6566,	// (0x0004c290) volume_set_pane_g5_copy1

0x656e,	// (0x0004c298) volume_set_pane_g6_copy1

0x6576,	// (0x0004c2a0) volume_set_pane_g7_copy1

0x657e,	// (0x0004c2a8) volume_set_pane_g8_copy1

0x6586,	// (0x0004c2b0) volume_set_pane_g9_copy1

0xb2f2,	// (0x0005101c) bg_set_opt_pane_cp_copy1_ParamLimits

0xb2f2,	// (0x0005101c) bg_set_opt_pane_cp_copy1

0x658e,	// (0x0004c2b8) setting_slider_pane_t1_copy1_ParamLimits

0x658e,	// (0x0004c2b8) setting_slider_pane_t1_copy1

0x65ac,	// (0x0004c2d6) setting_slider_pane_t2_copy1_ParamLimits

0x65ac,	// (0x0004c2d6) setting_slider_pane_t2_copy1

0x65c6,	// (0x0004c2f0) setting_slider_pane_t3_copy1_ParamLimits

0x65c6,	// (0x0004c2f0) setting_slider_pane_t3_copy1

0x65de,	// (0x0004c308) slider_set_pane_copy1_ParamLimits

0x65de,	// (0x0004c308) slider_set_pane_copy1

0xbf49,	// (0x00051c73) set_opt_bg_pane_g1_copy2

0xbf51,	// (0x00051c7b) set_opt_bg_pane_g2_copy2

0x65f4,	// (0x0004c31e) set_opt_bg_pane_g3_copy2

0xbf61,	// (0x00051c8b) set_opt_bg_pane_g4_copy2

0xbf69,	// (0x00051c93) set_opt_bg_pane_g5_copy2

0xbf71,	// (0x00051c9b) set_opt_bg_pane_g6_copy2

0x65fe,	// (0x0004c328) set_opt_bg_pane_g7_copy2

0x6606,	// (0x0004c330) set_opt_bg_pane_g8_copy2

0x6610,	// (0x0004c33a) set_opt_bg_pane_g9_copy2

0x2602,	// (0x0004832c) aid_size_touch_slider_mark_copy1_ParamLimits

0x2602,	// (0x0004832c) aid_size_touch_slider_mark_copy1

0x661a,	// (0x0004c344) slider_set_pane_g1_copy1

0x2616,	// (0x00048340) slider_set_pane_g2_copy1

0x17b6,	// (0x000474e0) slider_set_pane_g3_copy1_ParamLimits

0x17b6,	// (0x000474e0) slider_set_pane_g3_copy1

0x17ca,	// (0x000474f4) slider_set_pane_g4_copy1_ParamLimits

0x17ca,	// (0x000474f4) slider_set_pane_g4_copy1

0x17e2,	// (0x0004750c) slider_set_pane_g5_copy1_ParamLimits

0x17e2,	// (0x0004750c) slider_set_pane_g5_copy1

0x17b6,	// (0x000474e0) slider_set_pane_g6_copy1_ParamLimits

0x17b6,	// (0x000474e0) slider_set_pane_g6_copy1

0x261e,	// (0x00048348) slider_set_pane_g7_copy1_ParamLimits

0x261e,	// (0x00048348) slider_set_pane_g7_copy1

0xb296,	// (0x00050fc0) bg_set_opt_pane_cp2_copy1

0x6623,	// (0x0004c34d) setting_slider_graphic_pane_g1_copy1

0x662c,	// (0x0004c356) setting_slider_graphic_pane_t1_copy1

0x663c,	// (0x0004c366) setting_slider_graphic_pane_t2_copy1

0x664c,	// (0x0004c376) slider_set_pane_cp_copy1

0x665c,	// (0x0004c386) input_focus_pane_cp1_copy1

0x6665,	// (0x0004c38f) list_set_text_pane_copy1

0x666d,	// (0x0004c397) setting_text_pane_g1_copy1

0x368f,	// (0x000493b9) set_text_pane_t1_copy1

0x665c,	// (0x0004c386) input_focus_pane_cp2_copy1

0x666d,	// (0x0004c397) setting_code_pane_g1_copy1

0x6676,	// (0x0004c3a0) setting_code_pane_t1_copy1

0x6684,	// (0x0004c3ae) list_set_graphic_pane_copy1

0xb296,	// (0x00050fc0) bg_set_opt_pane_cp4_copy1

0xc62b,	// (0x00052355) list_set_graphic_pane_g1_copy1_ParamLimits

0xc62b,	// (0x00052355) list_set_graphic_pane_g1_copy1

0x6698,	// (0x0004c3c2) list_set_graphic_pane_g2_copy1

0xc643,	// (0x0005236d) list_set_graphic_pane_t1_copy1_ParamLimits

0xc643,	// (0x0005236d) list_set_graphic_pane_t1_copy1

0xec1f,	// (0x00054949) rs_clock_indi_pane_g1

0x66a0,	// (0x0004c3ca) rs_clock_indi_pane_t1

0x66ae,	// (0x0004c3d8) rs_indi_pane

0x66b6,	// (0x0004c3e0) rs_indi_pane_g1

0x66bf,	// (0x0004c3e9) rs_indi_pane_g2

0x66c8,	// (0x0004c3f2) rs_indi_pane_g3

0x0002,

0xfdb2,	// (0x00055adc) rs_indi_pane_g

0xc929,	// (0x00052653) bg_popup_preview_window_pane_cp03

0x66d1,	// (0x0004c3fb) popup_fep_tooltip_window_t1

0x49da,	// (0x0004a704) popup_note2_window_g2_ParamLimits

0x49da,	// (0x0004a704) popup_note2_window_g2

0x0001,

0xfba0,	// (0x000558ca) popup_note2_window_g_ParamLimits

0xfba0,	// (0x000558ca) popup_note2_window_g

0x4ec8,	// (0x0004abf2) bg_popup_sub_pane_cp11_ParamLimits

0x4ed5,	// (0x0004abff) cell_ai3_links_pane_g1_ParamLimits

0x4eec,	// (0x0004ac16) cell_ai3_links_pane_t1

0x368f,	// (0x000493b9) set_text_pane_t1_copy1_ParamLimits

0xc838,	// (0x00052562) cell_graphic_popup_pane_cp2_ParamLimits

0xc838,	// (0x00052562) cell_graphic_popup_pane_cp2

0x66df,	// (0x0004c409) cell_graphic_popup_pane_g1_cp2

0xb9f6,	// (0x00051720) cell_graphic_popup_pane_g2_cp2

0x66e7,	// (0x0004c411) cell_graphic_popup_pane_g3_cp2

0x66ef,	// (0x0004c419) cell_graphic_popup_pane_t2_cp2

0xba07,	// (0x00051731) grid_highlight_pane_cp3_cp2

0xc1e3,	// (0x00051f0d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xbeee,	// (0x00051c18) main_tmo_pane_ParamLimits

0xa8ca,	// (0x000505f4) popup_tmo_big_image_note_window

0xb67d,	// (0x000513a7) cell_ai5_widget_list_pane

0xb685,	// (0x000513af) cell_ai5_widget_lrg_icon_pane

0xbc2a,	// (0x00051954) tmo_note_info_pane_t1_ParamLimits

0xbc3f,	// (0x00051969) tmo_note_info_pane_t2_ParamLimits

0xbc58,	// (0x00051982) tmo_note_info_pane_t3_ParamLimits

0x62b8,	// (0x0004bfe2) tmo_note_info_pane_t4_ParamLimits

0x62ca,	// (0x0004bff4) tmo_note_info_pane_t5_ParamLimits

0xfda0,	// (0x00055aca) tmo_note_info_pane_t_ParamLimits

0x6400,	// (0x0004c12a) settings_container_pane_ParamLimits

0x6654,	// (0x0004c37e) indicator_popup_pane_cp5

0x6654,	// (0x0004c37e) indicator_popup_pane_cp6

0x6684,	// (0x0004c3ae) list_set_graphic_pane_copy1_ParamLimits

0xb282,	// (0x00050fac) bg_popup_window_pane_cp23

0x66fd,	// (0x0004c427) popup_tmo_big_image_note_window_g1

0x6708,	// (0x0004c432) popup_tmo_big_image_note_window_t1

0x6718,	// (0x0004c442) popup_tmo_big_image_note_window_t2

0x6728,	// (0x0004c452) popup_tmo_big_image_note_window_t3

0x0002,

0xfdb9,	// (0x00055ae3) popup_tmo_big_image_note_window_t

0xbc6d,	// (0x00051997) cell_ai5_widget_lrg_icon_pane_g1

0xbc75,	// (0x0005199f) cell_ai5_widget_lrg_icon_pane_t1

0xbc83,	// (0x000519ad) cell_ai5_widget_list_row_pane_ParamLimits

0xbc83,	// (0x000519ad) cell_ai5_widget_list_row_pane

0xbc9c,	// (0x000519c6) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xbc9c,	// (0x000519c6) cell_ai5_widget_list_row_pane_g1

0xbca9,	// (0x000519d3) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xbca9,	// (0x000519d3) cell_ai5_widget_list_row_pane_t1

0xbcc1,	// (0x000519eb) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xbcc1,	// (0x000519eb) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfdc0,	// (0x00055aea) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfdc0,	// (0x00055aea) cell_ai5_widget_list_row_pane_t

0x0687,	// (0x000463b1) main_fep_vtchi_ss_pane

0x6738,	// (0x0004c462) popup_fep_char_pre_window

0x6740,	// (0x0004c46a) popup_fep_ituss_window

0x6761,	// (0x0004c48b) popup_fep_vkbss_window

0x6780,	// (0x0004c4aa) grid_vkbss_keypad_pane_ParamLimits

0x6780,	// (0x0004c4aa) grid_vkbss_keypad_pane

0x6790,	// (0x0004c4ba) ituss_keypad_pane

0x67a8,	// (0x0004c4d2) aid_vkbss_key_offset_ParamLimits

0x67a8,	// (0x0004c4d2) aid_vkbss_key_offset

0x67b4,	// (0x0004c4de) cell_vkbss_key_pane_ParamLimits

0x67b4,	// (0x0004c4de) cell_vkbss_key_pane

0xe0aa,	// (0x00053dd4) bg_cell_vkbss_key_g1_ParamLimits

0xe0aa,	// (0x00053dd4) bg_cell_vkbss_key_g1

0x67ca,	// (0x0004c4f4) cell_vkbss_key_3p_pane_ParamLimits

0x67ca,	// (0x0004c4f4) cell_vkbss_key_3p_pane

0x67e4,	// (0x0004c50e) cell_vkbss_key_g1_ParamLimits

0x67e4,	// (0x0004c50e) cell_vkbss_key_g1

0x67fe,	// (0x0004c528) cell_vkbss_key_t1_ParamLimits

0x67fe,	// (0x0004c528) cell_vkbss_key_t1

0x6829,	// (0x0004c553) cell_ituss_key_pane_ParamLimits

0x6829,	// (0x0004c553) cell_ituss_key_pane

0x6839,	// (0x0004c563) bg_cell_ituss_key_g1_ParamLimits

0x6839,	// (0x0004c563) bg_cell_ituss_key_g1

0x6845,	// (0x0004c56f) cell_ituss_key_pane_g1_ParamLimits

0x6845,	// (0x0004c56f) cell_ituss_key_pane_g1

0x6851,	// (0x0004c57b) cell_ituss_key_pane_g2_ParamLimits

0x6851,	// (0x0004c57b) cell_ituss_key_pane_g2

0x0001,

0xfdc5,	// (0x00055aef) cell_ituss_key_pane_g_ParamLimits

0xfdc5,	// (0x00055aef) cell_ituss_key_pane_g

0x686a,	// (0x0004c594) cell_ituss_key_t1_ParamLimits

0x686a,	// (0x0004c594) cell_ituss_key_t1

0x6d19,	// (0x0004ca43) cell_ituss_key_t2_ParamLimits

0x6d19,	// (0x0004ca43) cell_ituss_key_t2

0x6d4a,	// (0x0004ca74) cell_ituss_key_t3_ParamLimits

0x6d4a,	// (0x0004ca74) cell_ituss_key_t3

0x6d7b,	// (0x0004caa5) cell_ituss_key_t4_ParamLimits

0x6d7b,	// (0x0004caa5) cell_ituss_key_t4

0x0003,

0xfdca,	// (0x00055af4) cell_ituss_key_t_ParamLimits

0xfdca,	// (0x00055af4) cell_ituss_key_t

0x6dac,	// (0x0004cad6) cell_vkbss_key_3p_pane_g1

0x6db4,	// (0x0004cade) cell_vkbss_key_3p_pane_g2

0x6dbc,	// (0x0004cae6) cell_vkbss_key_3p_pane_g3

0x0002,

0xfdd3,	// (0x00055afd) cell_vkbss_key_3p_pane_g

0xb282,	// (0x00050fac) bg_popup_fep_char_preview_window_cp02

0x6dc4,	// (0x0004caee) popup_fep_char_pre_window_t1

0xb673,	// (0x0005139d) main_ai5_sk_pane

0x6344,	// (0x0004c06e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x6350,	// (0x0004c07a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x6364,	// (0x0004c08e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x6373,	// (0x0004c09d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfdab,	// (0x00055ad5) cell_contacts_ai5_widget_pane_g_ParamLimits

0x6386,	// (0x0004c0b0) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xbeee,	// (0x00051c18) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xbcd3,	// (0x000519fd) main_ai5_sk_pane_g1

0xd254,	// (0x00052f7e) popup_query_code_window_g1

0x6756,	// (0x0004c480) popup_fep_vkb_icf_pane

0x676a,	// (0x0004c494) popup_fep_vtchi_icf_pane

0xbeee,	// (0x00051c18) bg_icf_pane

0x6de2,	// (0x0004cb0c) list_vkb_icf_pane

0xbeee,	// (0x00051c18) bg_icf_pane_cp01

0x6dfa,	// (0x0004cb24) vtchi_icf_list_pane

0x6e0a,	// (0x0004cb34) list_vkb_icf_pane_t1_ParamLimits

0x6e0a,	// (0x0004cb34) list_vkb_icf_pane_t1

0x6e24,	// (0x0004cb4e) vtchi_icf_list_pane_t1_ParamLimits

0x6e24,	// (0x0004cb4e) vtchi_icf_list_pane_t1

0x6740,	// (0x0004c46a) popup_fep_ituss_window_ParamLimits

0x676a,	// (0x0004c494) popup_fep_vtchi_icf_pane_ParamLimits

0x6790,	// (0x0004c4ba) ituss_keypad_pane_ParamLimits

0x679f,	// (0x0004c4c9) ituss_sks_pane

0xbeee,	// (0x00051c18) bg_icf_pane_ParamLimits

0x6dd3,	// (0x0004cafd) icf_edit_indi_pane_ParamLimits

0x6dd3,	// (0x0004cafd) icf_edit_indi_pane

0x6de2,	// (0x0004cb0c) list_vkb_icf_pane_ParamLimits

0xbeee,	// (0x00051c18) bg_icf_pane_cp01_ParamLimits

0x6dee,	// (0x0004cb18) icf_edit_indi_pane_cp01_ParamLimits

0x6dee,	// (0x0004cb18) icf_edit_indi_pane_cp01

0x6e02,	// (0x0004cb2c) vtchi_query_pane

0xeea6,	// (0x00054bd0) icf_edit_indi_pane_g1_ParamLimits

0xeea6,	// (0x00054bd0) icf_edit_indi_pane_g1

0x6e4b,	// (0x0004cb75) icf_edit_indi_pane_g2_ParamLimits

0x6e4b,	// (0x0004cb75) icf_edit_indi_pane_g2

0x0001,

0xfdda,	// (0x00055b04) icf_edit_indi_pane_g_ParamLimits

0xfdda,	// (0x00055b04) icf_edit_indi_pane_g

0x6e57,	// (0x0004cb81) icf_edit_indi_pane_t1

0x6e65,	// (0x0004cb8f) bg_input_focus_pane_cp042

0xbe1b,	// (0x00051b45) vtchi_button_pane

0x6e6e,	// (0x0004cb98) vtchi_query_pane_t1

0x6e7c,	// (0x0004cba6) vtchi_query_pane_t2

0x6e8a,	// (0x0004cbb4) vtchi_query_pane_t3

0x0002,

0xfddf,	// (0x00055b09) vtchi_query_pane_t

0xb282,	// (0x00050fac) bg_button_pane_cp13

0x6e98,	// (0x0004cbc2) vtchi_button_pane_g1

0x5743,	// (0x0004b46d) ituss_sks_pane_g1

0x6ea0,	// (0x0004cbca) ituss_sks_pane_g2

0x0001,

0xfde6,	// (0x00055b10) ituss_sks_pane_g

0x6ea9,	// (0x0004cbd3) ituss_sks_pane_t1

0x6eb7,	// (0x0004cbe1) ituss_sks_pane_t2

0x0001,

0xfdeb,	// (0x00055b15) ituss_sks_pane_t

0xe8ec,	// (0x00054616) indicator_nsta_pane_cp_g1

0xe8f5,	// (0x0005461f) indicator_nsta_pane_cp_g2

0xe8fd,	// (0x00054627) indicator_nsta_pane_cp_g3

0xe905,	// (0x0005462f) indicator_nsta_pane_cp_g4

0xe90d,	// (0x00054637) indicator_nsta_pane_cp_g5

0xe915,	// (0x0005463f) indicator_nsta_pane_cp_g6

0x0005,

0x0027,	// (0x00045d51) indicator_nsta_pane_cp_g

0xb484,	// (0x000511ae) cell_graphic2_pane_t2_ParamLimits

0xb484,	// (0x000511ae) cell_graphic2_pane_t2

0x0001,

0xfcbc,	// (0x000559e6) cell_graphic2_pane_t_ParamLimits

0xfcbc,	// (0x000559e6) cell_graphic2_pane_t

0xb4ba,	// (0x000511e4) cell_graphic2_control_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large

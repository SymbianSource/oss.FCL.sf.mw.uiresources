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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00026708 };

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
0x978a,	// (0x0002fe92) Screen

0x979e,	// (0x0002fea6) application_window_ParamLimits

0x979e,	// (0x0002fea6) application_window

0x97b8,	// (0x0002fec0) screen_g1

0x97ea,	// (0x0002fef2) area_bottom_pane_ParamLimits

0x97ea,	// (0x0002fef2) area_bottom_pane

0xf03f,	// (0x00035747) area_top_pane_ParamLimits

0xf03f,	// (0x00035747) area_top_pane

0xf0d3,	// (0x000357db) main_pane_ParamLimits

0xf0d3,	// (0x000357db) main_pane

0x98a8,	// (0x0002ffb0) misc_graphics

0xb1ba,	// (0x000318c2) battery_pane_ParamLimits

0xb1ba,	// (0x000318c2) battery_pane

0x2ec5,	// (0x000295cd) bg_status_flat_pane_g8

0x2ecd,	// (0x000295d5) bg_status_flat_pane_g9

0x0f2e,	// (0x00027636) context_pane_ParamLimits

0x0f2e,	// (0x00027636) context_pane

0xb331,	// (0x00031a39) navi_pane_ParamLimits

0xb331,	// (0x00031a39) navi_pane

0xb3bb,	// (0x00031ac3) signal_pane_ParamLimits

0xb3bb,	// (0x00031ac3) signal_pane

0x0008,

0xf874,	// (0x00035f7c) bg_status_flat_pane_g

0xb44b,	// (0x00031b53) status_pane_g1_ParamLimits

0xb44b,	// (0x00031b53) status_pane_g1

0xb461,	// (0x00031b69) status_pane_g2_ParamLimits

0xb461,	// (0x00031b69) status_pane_g2

0x116f,	// (0x00027877) status_pane_g3_ParamLimits

0x116f,	// (0x00027877) status_pane_g3

0x0004,

0xf7a0,	// (0x00035ea8) status_pane_g_ParamLimits

0xf7a0,	// (0x00035ea8) status_pane_g

0xb46d,	// (0x00031b75) title_pane_ParamLimits

0xb46d,	// (0x00031b75) title_pane

0xb4d0,	// (0x00031bd8) uni_indicator_pane_ParamLimits

0xb4d0,	// (0x00031bd8) uni_indicator_pane

0x074f,	// (0x00026e57) bg_list_pane_ParamLimits

0x074f,	// (0x00026e57) bg_list_pane

0x9507,	// (0x0002fc0f) find_pane

0xaa04,	// (0x0003110c) listscroll_app_pane_ParamLimits

0xaa04,	// (0x0003110c) listscroll_app_pane

0x0783,	// (0x00026e8b) listscroll_form_pane

0x950f,	// (0x0002fc17) listscroll_gen_pane_ParamLimits

0x950f,	// (0x0002fc17) listscroll_gen_pane

0x079f,	// (0x00026ea7) listscroll_set_pane

0x3a64,	// (0x0002a16c) main_idle_act_pane

0xd260,	// (0x00033968) main_idle_trad_pane

0xd260,	// (0x00033968) main_list_empty_pane

0x07b9,	// (0x00026ec1) main_midp_pane

0x07c5,	// (0x00026ecd) main_pane_g1_ParamLimits

0x07c5,	// (0x00026ecd) main_pane_g1

0xaa14,	// (0x0003111c) popup_ai_message_window_ParamLimits

0xaa14,	// (0x0003111c) popup_ai_message_window

0xaab4,	// (0x000311bc) popup_fep_china_uni_window_ParamLimits

0xaab4,	// (0x000311bc) popup_fep_china_uni_window

0x08e7,	// (0x00026fef) popup_fep_japan_candidate_window_ParamLimits

0x08e7,	// (0x00026fef) popup_fep_japan_candidate_window

0x0911,	// (0x00027019) popup_fep_japan_predictive_window_ParamLimits

0x0911,	// (0x00027019) popup_fep_japan_predictive_window

0xab14,	// (0x0003121c) popup_find_window

0xab31,	// (0x00031239) popup_grid_graphic_window_ParamLimits

0xab31,	// (0x00031239) popup_grid_graphic_window

0x0982,	// (0x0002708a) popup_large_graphic_colour_window

0xabd5,	// (0x000312dd) popup_menu_window_ParamLimits

0xabd5,	// (0x000312dd) popup_menu_window

0xadc5,	// (0x000314cd) popup_note_image_window

0xad85,	// (0x0003148d) popup_note_wait_window_ParamLimits

0xad85,	// (0x0003148d) popup_note_wait_window

0xaddd,	// (0x000314e5) popup_note_window_ParamLimits

0xaddd,	// (0x000314e5) popup_note_window

0xae8b,	// (0x00031593) popup_query_code_window_ParamLimits

0xae8b,	// (0x00031593) popup_query_code_window

0x0bee,	// (0x000272f6) popup_query_data_code_window_ParamLimits

0x0bee,	// (0x000272f6) popup_query_data_code_window

0xaecb,	// (0x000315d3) popup_query_data_window_ParamLimits

0xaecb,	// (0x000315d3) popup_query_data_window

0xaf5f,	// (0x00031667) popup_query_sat_info_window_ParamLimits

0xaf5f,	// (0x00031667) popup_query_sat_info_window

0xb00a,	// (0x00031712) popup_snote_single_graphic_window_ParamLimits

0xb00a,	// (0x00031712) popup_snote_single_graphic_window

0xb00a,	// (0x00031712) popup_snote_single_text_window_ParamLimits

0xb00a,	// (0x00031712) popup_snote_single_text_window

0x0c89,	// (0x00027391) popup_sub_window_general

0x0dcf,	// (0x000274d7) popup_window_general_ParamLimits

0x0dcf,	// (0x000274d7) popup_window_general

0x0de8,	// (0x000274f0) power_save_pane

0xa872,	// (0x00030f7a) control_pane_g1_ParamLimits

0xa872,	// (0x00030f7a) control_pane_g1

0xa89b,	// (0x00030fa3) control_pane_g2_ParamLimits

0xa89b,	// (0x00030fa3) control_pane_g2

0x05fc,	// (0x00026d04) control_pane_g3_ParamLimits

0x05fc,	// (0x00026d04) control_pane_g3

0x0007,

0xf788,	// (0x00035e90) control_pane_g_ParamLimits

0xf788,	// (0x00035e90) control_pane_g

0xa8fd,	// (0x00031005) control_pane_t1_ParamLimits

0xa8fd,	// (0x00031005) control_pane_t1

0xa95b,	// (0x00031063) control_pane_t2_ParamLimits

0xa95b,	// (0x00031063) control_pane_t2

0x0002,

0xf799,	// (0x00035ea1) control_pane_t_ParamLimits

0xf799,	// (0x00035ea1) control_pane_t

0xa7cb,	// (0x00030ed3) navi_navi_volume_pane_cp1

0xa7d3,	// (0x00030edb) status_small_icon_pane

0x04e3,	// (0x00026beb) status_small_pane_g1_ParamLimits

0x04e3,	// (0x00026beb) status_small_pane_g1

0xa7db,	// (0x00030ee3) status_small_pane_g2_ParamLimits

0xa7db,	// (0x00030ee3) status_small_pane_g2

0xa7e7,	// (0x00030eef) status_small_pane_g3_ParamLimits

0xa7e7,	// (0x00030eef) status_small_pane_g3

0xa7f3,	// (0x00030efb) status_small_pane_g4_ParamLimits

0xa7f3,	// (0x00030efb) status_small_pane_g4

0xa7ff,	// (0x00030f07) status_small_pane_g5_ParamLimits

0xa7ff,	// (0x00030f07) status_small_pane_g5

0xa80d,	// (0x00030f15) status_small_pane_g6_ParamLimits

0xa80d,	// (0x00030f15) status_small_pane_g6

0x0007,

0xf777,	// (0x00035e7f) status_small_pane_g_ParamLimits

0xf777,	// (0x00035e7f) status_small_pane_g

0xa83c,	// (0x00030f44) status_small_pane_t1

0xa85e,	// (0x00030f66) status_small_wait_pane_ParamLimits

0xa85e,	// (0x00030f66) status_small_wait_pane

0xa596,	// (0x00030c9e) aid_levels_signal_ParamLimits

0xa596,	// (0x00030c9e) aid_levels_signal

0xa5ae,	// (0x00030cb6) signal_pane_g1_ParamLimits

0xa5ae,	// (0x00030cb6) signal_pane_g1

0xa5c9,	// (0x00030cd1) signal_pane_g2_ParamLimits

0xa5c9,	// (0x00030cd1) signal_pane_g2

0x0003,

0xf708,	// (0x00035e10) signal_pane_g_ParamLimits

0xf708,	// (0x00035e10) signal_pane_g

0xce48,	// (0x00033550) context_pane_g1

0x99e0,	// (0x000300e8) title_pane_g1

0x9a23,	// (0x0003012b) title_pane_t1

0x9aaf,	// (0x000301b7) title_pane_t2

0x9ad5,	// (0x000301dd) title_pane_t3

0x0002,

0xf557,	// (0x00035c5f) title_pane_t

0xb4f8,	// (0x00031c00) aid_levels_battery_ParamLimits

0xb4f8,	// (0x00031c00) aid_levels_battery

0xb514,	// (0x00031c1c) battery_pane_g1_ParamLimits

0xb514,	// (0x00031c1c) battery_pane_g1

0xb531,	// (0x00031c39) battery_pane_g2_ParamLimits

0xb531,	// (0x00031c39) battery_pane_g2

0x0001,

0xf7ab,	// (0x00035eb3) battery_pane_g_ParamLimits

0xf7ab,	// (0x00035eb3) battery_pane_g

0xb9c0,	// (0x000320c8) uni_indicator_pane_g1

0xb9d6,	// (0x000320de) uni_indicator_pane_g2

0xb9ec,	// (0x000320f4) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x00036024) uni_indicator_pane_g

0xd0f6,	// (0x000337fe) navi_icon_pane_ParamLimits

0xd0f6,	// (0x000337fe) navi_icon_pane

0xd07a,	// (0x00033782) navi_midp_pane

0xd112,	// (0x0003381a) navi_navi_pane

0xd11c,	// (0x00033824) navi_text_pane_ParamLimits

0xd11c,	// (0x00033824) navi_text_pane

0x97b8,	// (0x0002fec0) status_small_wait_pane_g1

0x9fb8,	// (0x000306c0) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0003601f) status_small_wait_pane_g

0xb927,	// (0x0003202f) navi_navi_icon_text_pane

0xb92f,	// (0x00032037) navi_navi_pane_g1_ParamLimits

0xb92f,	// (0x00032037) navi_navi_pane_g1

0xb941,	// (0x00032049) navi_navi_pane_g2_ParamLimits

0xb941,	// (0x00032049) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x00035fed) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x00035fed) navi_navi_pane_g

0x354e,	// (0x00029c56) navi_navi_tabs_pane

0xb953,	// (0x0003205b) navi_navi_text_pane

0xb927,	// (0x0003202f) navi_navi_volume_pane

0xb915,	// (0x0003201d) navi_text_pane_t1

0xb909,	// (0x00032011) navi_icon_pane_g1

0x3445,	// (0x00029b4d) navi_navi_text_pane_t1

0xb8e4,	// (0x00031fec) navi_navi_volume_pane_g1

0xb8ec,	// (0x00031ff4) volume_small_pane

0xb840,	// (0x00031f48) navi_navi_icon_text_pane_g1

0xb848,	// (0x00031f50) navi_navi_icon_text_pane_t1

0xd112,	// (0x0003381a) navi_tabs_2_long_pane

0xd112,	// (0x0003381a) navi_tabs_2_pane

0xd112,	// (0x0003381a) navi_tabs_3_long_pane

0xd112,	// (0x0003381a) navi_tabs_3_pane

0xd112,	// (0x0003381a) navi_tabs_4_pane

0xb7fe,	// (0x00031f06) tabs_2_active_pane_ParamLimits

0xb7fe,	// (0x00031f06) tabs_2_active_pane

0xb80e,	// (0x00031f16) tabs_2_passive_pane_ParamLimits

0xb80e,	// (0x00031f16) tabs_2_passive_pane

0xb7cc,	// (0x00031ed4) tabs_3_active_pane_ParamLimits

0xb7cc,	// (0x00031ed4) tabs_3_active_pane

0xb7dc,	// (0x00031ee4) tabs_3_passive_pane_ParamLimits

0xb7dc,	// (0x00031ee4) tabs_3_passive_pane

0xb7ed,	// (0x00031ef5) tabs_3_passive_pane_cp_ParamLimits

0xb7ed,	// (0x00031ef5) tabs_3_passive_pane_cp

0xb788,	// (0x00031e90) tabs_4_active_pane_ParamLimits

0xb788,	// (0x00031e90) tabs_4_active_pane

0xb799,	// (0x00031ea1) tabs_4_passive_pane_ParamLimits

0xb799,	// (0x00031ea1) tabs_4_passive_pane

0xb7aa,	// (0x00031eb2) tabs_4_passive_pane_cp_ParamLimits

0xb7aa,	// (0x00031eb2) tabs_4_passive_pane_cp

0xb7bb,	// (0x00031ec3) tabs_4_passive_pane_cp2_ParamLimits

0xb7bb,	// (0x00031ec3) tabs_4_passive_pane_cp2

0xb764,	// (0x00031e6c) tabs_2_long_active_pane_ParamLimits

0xb764,	// (0x00031e6c) tabs_2_long_active_pane

0xb776,	// (0x00031e7e) tabs_2_long_passive_pane_ParamLimits

0xb776,	// (0x00031e7e) tabs_2_long_passive_pane

0xb719,	// (0x00031e21) tabs_3_long_active_pane_ParamLimits

0xb719,	// (0x00031e21) tabs_3_long_active_pane

0xb732,	// (0x00031e3a) tabs_3_long_passive_pane_ParamLimits

0xb732,	// (0x00031e3a) tabs_3_long_passive_pane

0xb74b,	// (0x00031e53) tabs_3_long_passive_pane_cp_ParamLimits

0xb74b,	// (0x00031e53) tabs_3_long_passive_pane_cp

0x181f,	// (0x00027f27) volume_small_pane_g1

0xb6c8,	// (0x00031dd0) volume_small_pane_g2

0xb6d1,	// (0x00031dd9) volume_small_pane_g3

0xb6da,	// (0x00031de2) volume_small_pane_g4

0xb6e3,	// (0x00031deb) volume_small_pane_g5

0xb6ec,	// (0x00031df4) volume_small_pane_g6

0xb6f5,	// (0x00031dfd) volume_small_pane_g7

0xb6fe,	// (0x00031e06) volume_small_pane_g8

0xb707,	// (0x00031e0f) volume_small_pane_g9

0xb710,	// (0x00031e18) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x00035fb9) volume_small_pane_g

0x9ae7,	// (0x000301ef) bg_active_tab_pane_cp2_ParamLimits

0x9ae7,	// (0x000301ef) bg_active_tab_pane_cp2

0x9af5,	// (0x000301fd) tabs_3_active_pane_g1

0x9afd,	// (0x00030205) tabs_3_active_pane_t1

0x9ae7,	// (0x000301ef) bg_passive_tab_pane_cp2_ParamLimits

0x9ae7,	// (0x000301ef) bg_passive_tab_pane_cp2

0x9af5,	// (0x000301fd) tabs_3_passive_pane_g1

0x9afd,	// (0x00030205) tabs_3_passive_pane_t1

0x9ae7,	// (0x000301ef) bg_active_tab_pane_cp3_ParamLimits

0x9ae7,	// (0x000301ef) bg_active_tab_pane_cp3

0x9b0f,	// (0x00030217) tabs_4_active_pane_g1

0x9b17,	// (0x0003021f) tabs_4_active_pane_t1

0x9ae7,	// (0x000301ef) bg_passive_tab_pane_cp3_ParamLimits

0x9ae7,	// (0x000301ef) bg_passive_tab_pane_cp3

0x9b0f,	// (0x00030217) tabs_4_1_passive_pane_g1

0x9b17,	// (0x0003021f) tabs_4_1_passive_pane_t1

0x07b9,	// (0x00026ec1) list_highlight_pane_cp2

0xba81,	// (0x00032189) list_set_pane_ParamLimits

0xba81,	// (0x00032189) list_set_pane

0xbb49,	// (0x00032251) main_pane_set_t1_ParamLimits

0xbb49,	// (0x00032251) main_pane_set_t1

0xbb69,	// (0x00032271) main_pane_set_t2_ParamLimits

0xbb69,	// (0x00032271) main_pane_set_t2

0xbb7d,	// (0x00032285) main_pane_set_t3_ParamLimits

0xbb7d,	// (0x00032285) main_pane_set_t3

0xbb91,	// (0x00032299) main_pane_set_t4_ParamLimits

0xbb91,	// (0x00032299) main_pane_set_t4

0x0003,

0xf981,	// (0x00036089) main_pane_set_t_ParamLimits

0xf981,	// (0x00036089) main_pane_set_t

0xbba5,	// (0x000322ad) setting_code_pane

0x3bb8,	// (0x0002a2c0) setting_slider_graphic_pane

0x3bb8,	// (0x0002a2c0) setting_slider_pane

0x3bb8,	// (0x0002a2c0) setting_text_pane

0x3bb8,	// (0x0002a2c0) setting_volume_pane

0xf1e2,	// (0x000358ea) volume_set_pane

0x9b29,	// (0x00030231) bg_set_opt_pane_cp

0xf1ec,	// (0x000358f4) setting_slider_pane_t1

0xf205,	// (0x0003590d) setting_slider_pane_t2

0xf21f,	// (0x00035927) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00035c66) setting_slider_pane_t

0xf237,	// (0x0003593f) slider_set_pane

0x98a8,	// (0x0002ffb0) bg_set_opt_pane_cp2

0x9b37,	// (0x0003023f) setting_slider_graphic_pane_g1

0xf24d,	// (0x00035955) setting_slider_graphic_pane_t1

0xf25d,	// (0x00035965) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00035c6d) setting_slider_graphic_pane_t

0xf26d,	// (0x00035975) slider_set_pane_cp

0x98a8,	// (0x0002ffb0) input_focus_pane_cp1

0x3a4b,	// (0x0002a153) list_set_text_pane

0x97b8,	// (0x0002fec0) setting_text_pane_g1

0x98a8,	// (0x0002ffb0) input_focus_pane_cp2

0x97b8,	// (0x0002fec0) setting_code_pane_g1

0x9b40,	// (0x00030248) setting_code_pane_t1

0xe7b5,	// (0x00034ebd) set_text_pane_t1_ParamLimits

0xe7b5,	// (0x00034ebd) set_text_pane_t1

0xc96a,	// (0x00033072) set_opt_bg_pane_g1

0xc972,	// (0x0003307a) set_opt_bg_pane_g2

0x3a23,	// (0x0002a12b) set_opt_bg_pane_g3

0xc982,	// (0x0003308a) set_opt_bg_pane_g4

0xc98a,	// (0x00033092) set_opt_bg_pane_g5

0xc992,	// (0x0003309a) set_opt_bg_pane_g6

0x3a2d,	// (0x0002a135) set_opt_bg_pane_g7

0x3a37,	// (0x0002a13f) set_opt_bg_pane_g8

0x3a41,	// (0x0002a149) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x00036076) set_opt_bg_pane_g

0x3a16,	// (0x0002a11e) slider_set_pane_g1

0x1a03,	// (0x0002810b) slider_set_pane_g2

0x0006,

0xf95f,	// (0x00036067) slider_set_pane_g

0x198b,	// (0x00028093) volume_set_pane_g1

0x1995,	// (0x0002809d) volume_set_pane_g2

0x199f,	// (0x000280a7) volume_set_pane_g3

0x19a9,	// (0x000280b1) volume_set_pane_g4

0x19b3,	// (0x000280bb) volume_set_pane_g5

0x19bd,	// (0x000280c5) volume_set_pane_g6

0x19c7,	// (0x000280cf) volume_set_pane_g7

0x19d1,	// (0x000280d9) volume_set_pane_g8

0x19db,	// (0x000280e3) volume_set_pane_g9

0x19e5,	// (0x000280ed) volume_set_pane_g10

0x0009,

0xf937,	// (0x0003603f) volume_set_pane_g

0x9b4e,	// (0x00030256) indicator_pane_ParamLimits

0x9b4e,	// (0x00030256) indicator_pane

0x9b7a,	// (0x00030282) main_idle_pane_g2_ParamLimits

0x9b7a,	// (0x00030282) main_idle_pane_g2

0x9bb2,	// (0x000302ba) main_pane_idle_g1_ParamLimits

0x9bb2,	// (0x000302ba) main_pane_idle_g1

0x9be0,	// (0x000302e8) popup_clock_digital_analogue_window_ParamLimits

0x9be0,	// (0x000302e8) popup_clock_digital_analogue_window

0x9bf7,	// (0x000302ff) soft_indicator_pane_ParamLimits

0x9bf7,	// (0x000302ff) soft_indicator_pane

0x9c13,	// (0x0003031b) wallpaper_pane_ParamLimits

0x9c13,	// (0x0003031b) wallpaper_pane

0x97b8,	// (0x0002fec0) wallpaper_pane_g1

0x9c2d,	// (0x00030335) indicator_pane_g1_ParamLimits

0x9c2d,	// (0x00030335) indicator_pane_g1

0x3e94,	// (0x0002a59c) navi_navi_icon_text_pane_srt_g1

0x9c55,	// (0x0003035d) soft_indicator_pane_t1

0x9c6f,	// (0x00030377) aid_ps_area_pane

0x9c80,	// (0x00030388) aid_ps_clock_pane

0x9c8e,	// (0x00030396) aid_ps_indicator_pane

0x9c9a,	// (0x000303a2) indicator_ps_pane_ParamLimits

0x9c9a,	// (0x000303a2) indicator_ps_pane

0x9ca9,	// (0x000303b1) power_save_pane_g1_ParamLimits

0x9ca9,	// (0x000303b1) power_save_pane_g1

0x9cb5,	// (0x000303bd) power_save_pane_g2_ParamLimits

0x9cb5,	// (0x000303bd) power_save_pane_g2

0xf01f,	// (0x00035727) aid_navinavi_width_pane

0x9c6f,	// (0x00030377) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00035c72) power_save_pane_g_ParamLimits

0xf56a,	// (0x00035c72) power_save_pane_g

0x9cc3,	// (0x000303cb) power_save_pane_t1_ParamLimits

0x9cc3,	// (0x000303cb) power_save_pane_t1

0x9c80,	// (0x00030388) aid_ps_clock_pane_ParamLimits

0x9c8e,	// (0x00030396) aid_ps_indicator_pane_ParamLimits

0x9cd5,	// (0x000303dd) power_save_pane_t4_ParamLimits

0x9cd5,	// (0x000303dd) power_save_pane_t4

0x0001,

0xf56f,	// (0x00035c77) power_save_pane_t_ParamLimits

0xf56f,	// (0x00035c77) power_save_pane_t

0x9cff,	// (0x00030407) power_save_t3_ParamLimits

0x9cff,	// (0x00030407) power_save_t3

0x9cea,	// (0x000303f2) power_save_t2_ParamLimits

0x9cea,	// (0x000303f2) power_save_t2

0x9d14,	// (0x0003041c) indicator_ps_pane_g1

0x9d1d,	// (0x00030425) ai_gene_pane_ParamLimits

0x9d1d,	// (0x00030425) ai_gene_pane

0x9d34,	// (0x0003043c) ai_links_pane_ParamLimits

0x9d34,	// (0x0003043c) ai_links_pane

0x9d4c,	// (0x00030454) indicator_pane_cp1_ParamLimits

0x9d4c,	// (0x00030454) indicator_pane_cp1

0x9d5b,	// (0x00030463) main_pane_idle_g1_cp_ParamLimits

0x9d5b,	// (0x00030463) main_pane_idle_g1_cp

0x9d73,	// (0x0003047b) popup_ai_links_title_window

0x9d7c,	// (0x00030484) soft_indicator_pane_cp1_ParamLimits

0x9d7c,	// (0x00030484) soft_indicator_pane_cp1

0x37fd,	// (0x00029f05) ai_links_pane_g1

0x3806,	// (0x00029f0e) grid_ai_links_pane

0xb9b7,	// (0x000320bf) ai_gene_pane_1

0x37eb,	// (0x00029ef3) ai_gene_pane_2

0x37f4,	// (0x00029efc) list_highlight_pane_cp4

0xb993,	// (0x0003209b) cell_ai_link_pane_ParamLimits

0xb993,	// (0x0003209b) cell_ai_link_pane

0x37ba,	// (0x00029ec2) cell_ai_link_pane_g1

0x9fb8,	// (0x000306c0) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0003601a) cell_ai_link_pane_g

0x98a8,	// (0x0002ffb0) grid_highlight_cp2

0x98a8,	// (0x0002ffb0) bg_popup_sub_pane_cp1

0x9d9e,	// (0x000304a6) popup_ai_links_title_window_t1

0x3706,	// (0x00029e0e) ai_gene_pane_1_g1_ParamLimits

0x3706,	// (0x00029e0e) ai_gene_pane_1_g1

0x3712,	// (0x00029e1a) ai_gene_pane_1_g2_ParamLimits

0x3712,	// (0x00029e1a) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x00036010) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x00036010) ai_gene_pane_1_g

0x371f,	// (0x00029e27) ai_gene_pane_1_t1_ParamLimits

0x371f,	// (0x00029e27) ai_gene_pane_1_t1

0x3753,	// (0x00029e5b) grid_ai_soft_ind_pane

0x36f1,	// (0x00029df9) ai_gene_pane_2_t1_ParamLimits

0x36f1,	// (0x00029df9) ai_gene_pane_2_t1

0x9dad,	// (0x000304b5) main_pane_empty_t1_ParamLimits

0x9dad,	// (0x000304b5) main_pane_empty_t1

0x9dc5,	// (0x000304cd) main_pane_empty_t2_ParamLimits

0x9dc5,	// (0x000304cd) main_pane_empty_t2

0x9dda,	// (0x000304e2) main_pane_empty_t3_ParamLimits

0x9dda,	// (0x000304e2) main_pane_empty_t3

0x9dec,	// (0x000304f4) main_pane_empty_t4_ParamLimits

0x9dec,	// (0x000304f4) main_pane_empty_t4

0x9dfe,	// (0x00030506) main_pane_empty_t5_ParamLimits

0x9dfe,	// (0x00030506) main_pane_empty_t5

0x0004,

0xf574,	// (0x00035c7c) main_pane_empty_t_ParamLimits

0xf574,	// (0x00035c7c) main_pane_empty_t

0xc9bb,	// (0x000330c3) bg_popup_window_pane_ParamLimits

0xc9bb,	// (0x000330c3) bg_popup_window_pane

0x3453,	// (0x00029b5b) find_popup_pane_cp2_ParamLimits

0x3453,	// (0x00029b5b) find_popup_pane_cp2

0x345f,	// (0x00029b67) heading_pane_ParamLimits

0x345f,	// (0x00029b67) heading_pane

0x98a8,	// (0x0002ffb0) bg_popup_sub_pane

0xb865,	// (0x00031f6d) bg_popup_window_pane_g1_ParamLimits

0xb865,	// (0x00031f6d) bg_popup_window_pane_g1

0xb874,	// (0x00031f7c) bg_popup_window_pane_g2_ParamLimits

0xb874,	// (0x00031f7c) bg_popup_window_pane_g2

0xb880,	// (0x00031f88) bg_popup_window_pane_g3_ParamLimits

0xb880,	// (0x00031f88) bg_popup_window_pane_g3

0xb88c,	// (0x00031f94) bg_popup_window_pane_g4_ParamLimits

0xb88c,	// (0x00031f94) bg_popup_window_pane_g4

0xb89b,	// (0x00031fa3) bg_popup_window_pane_g5_ParamLimits

0xb89b,	// (0x00031fa3) bg_popup_window_pane_g5

0xb8ab,	// (0x00031fb3) bg_popup_window_pane_g6_ParamLimits

0xb8ab,	// (0x00031fb3) bg_popup_window_pane_g6

0xb8b7,	// (0x00031fbf) bg_popup_window_pane_g7_ParamLimits

0xb8b7,	// (0x00031fbf) bg_popup_window_pane_g7

0xb8c6,	// (0x00031fce) bg_popup_window_pane_g8_ParamLimits

0xb8c6,	// (0x00031fce) bg_popup_window_pane_g8

0xb8d5,	// (0x00031fdd) bg_popup_window_pane_g9_ParamLimits

0xb8d5,	// (0x00031fdd) bg_popup_window_pane_g9

0x3439,	// (0x00029b41) bg_popup_window_pane_g10_ParamLimits

0x3439,	// (0x00029b41) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x00035fd8) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x00035fd8) bg_popup_window_pane_g

0x3362,	// (0x00029a6a) bg_popup_heading_pane_ParamLimits

0x3362,	// (0x00029a6a) bg_popup_heading_pane

0x1a8b,	// (0x00028193) tabs_4_passive_pane_cp_srt_ParamLimits

0x1a8b,	// (0x00028193) tabs_4_passive_pane_cp_srt

0x1a9d,	// (0x000281a5) tabs_4_passive_pane_srt_ParamLimits

0x3376,	// (0x00029a7e) heading_pane_g2

0x1a9d,	// (0x000281a5) tabs_4_passive_pane_srt

0x1415,	// (0x00027b1d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1415,	// (0x00027b1d) bg_passive_tab_pane_cp3_srt

0x337e,	// (0x00029a86) heading_pane_t1_ParamLimits

0x337e,	// (0x00029a86) heading_pane_t1

0x3395,	// (0x00029a9d) heading_pane_t2_ParamLimits

0x3395,	// (0x00029a9d) heading_pane_t2

0x0001,

0xf8cb,	// (0x00035fd3) heading_pane_t_ParamLimits

0xf8cb,	// (0x00035fd3) heading_pane_t

0x2e8d,	// (0x00029595) bg_popup_heading_pane_g1

0x2f3c,	// (0x00029644) bg_popup_heading_pane_g2

0x2f46,	// (0x0002964e) bg_popup_heading_pane_g3

0x2f50,	// (0x00029658) bg_popup_heading_pane_g4

0x2f5a,	// (0x00029662) bg_popup_heading_pane_g5

0x2f64,	// (0x0002966c) bg_popup_heading_pane_g6

0x2f6c,	// (0x00029674) bg_popup_heading_pane_g7

0x2f74,	// (0x0002967c) bg_popup_heading_pane_g8

0x2f7e,	// (0x00029686) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x00035f8f) bg_popup_heading_pane_g

0x132a,	// (0x00027a32) bg_popup_sub_pane_g1

0x1332,	// (0x00027a3a) bg_popup_sub_pane_g2

0x133a,	// (0x00027a42) bg_popup_sub_pane_g3

0x1342,	// (0x00027a4a) bg_popup_sub_pane_g4

0x134a,	// (0x00027a52) bg_popup_sub_pane_g5

0x1352,	// (0x00027a5a) bg_popup_sub_pane_g6

0x135a,	// (0x00027a62) bg_popup_sub_pane_g7

0x1362,	// (0x00027a6a) bg_popup_sub_pane_g8

0x136a,	// (0x00027a72) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x00035f69) bg_popup_sub_pane_g

0x9ae7,	// (0x000301ef) bg_popup_window_pane_cp5_ParamLimits

0x9ae7,	// (0x000301ef) bg_popup_window_pane_cp5

0x9e1e,	// (0x00030526) popup_note_window_g1_ParamLimits

0x9e1e,	// (0x00030526) popup_note_window_g1

0x9e2a,	// (0x00030532) popup_note_window_t1_ParamLimits

0x9e2a,	// (0x00030532) popup_note_window_t1

0x9e40,	// (0x00030548) popup_note_window_t2_ParamLimits

0x9e40,	// (0x00030548) popup_note_window_t2

0x9e56,	// (0x0003055e) popup_note_window_t3_ParamLimits

0x9e56,	// (0x0003055e) popup_note_window_t3

0x9e6c,	// (0x00030574) popup_note_window_t4_ParamLimits

0x9e6c,	// (0x00030574) popup_note_window_t4

0x9e94,	// (0x0003059c) popup_note_window_t5_ParamLimits

0x9e94,	// (0x0003059c) popup_note_window_t5

0x0004,

0xf57f,	// (0x00035c87) popup_note_window_t_ParamLimits

0xf57f,	// (0x00035c87) popup_note_window_t

0x9eb8,	// (0x000305c0) bg_popup_window_pane_cp6_ParamLimits

0x9eb8,	// (0x000305c0) bg_popup_window_pane_cp6

0x2e09,	// (0x00029511) popup_note_image_window_g1_ParamLimits

0x2e09,	// (0x00029511) popup_note_image_window_g1

0x2e15,	// (0x0002951d) popup_note_image_window_g2_ParamLimits

0x2e15,	// (0x0002951d) popup_note_image_window_g2

0x0001,

0xf855,	// (0x00035f5d) popup_note_image_window_g_ParamLimits

0xf855,	// (0x00035f5d) popup_note_image_window_g

0x2e2e,	// (0x00029536) popup_note_image_window_t1_ParamLimits

0x2e2e,	// (0x00029536) popup_note_image_window_t1

0x2e47,	// (0x0002954f) popup_note_image_window_t2_ParamLimits

0x2e47,	// (0x0002954f) popup_note_image_window_t2

0x2e60,	// (0x00029568) popup_note_image_window_t3_ParamLimits

0x2e60,	// (0x00029568) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x00035f62) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x00035f62) popup_note_image_window_t

0x2cc9,	// (0x000293d1) bg_popup_window_pane_cp7_ParamLimits

0x2cc9,	// (0x000293d1) bg_popup_window_pane_cp7

0x2cf9,	// (0x00029401) popup_note_wait_window_g1_ParamLimits

0x2cf9,	// (0x00029401) popup_note_wait_window_g1

0x2d05,	// (0x0002940d) popup_note_wait_window_g2_ParamLimits

0x2d05,	// (0x0002940d) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x00035f4b) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x00035f4b) popup_note_wait_window_g

0x2d1d,	// (0x00029425) popup_note_wait_window_t1_ParamLimits

0x2d1d,	// (0x00029425) popup_note_wait_window_t1

0x2d44,	// (0x0002944c) popup_note_wait_window_t2_ParamLimits

0x2d44,	// (0x0002944c) popup_note_wait_window_t2

0x2d62,	// (0x0002946a) popup_note_wait_window_t3_ParamLimits

0x2d62,	// (0x0002946a) popup_note_wait_window_t3

0x2d75,	// (0x0002947d) popup_note_wait_window_t4_ParamLimits

0x2d75,	// (0x0002947d) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x00035f52) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x00035f52) popup_note_wait_window_t

0x2d9a,	// (0x000294a2) wait_bar_pane_ParamLimits

0x2d9a,	// (0x000294a2) wait_bar_pane

0x98a8,	// (0x0002ffb0) wait_anim_pane

0x98a8,	// (0x0002ffb0) wait_border_pane

0x97b8,	// (0x0002fec0) wait_anim_pane_g1

0x97b8,	// (0x0002fec0) wait_anim_pane_g2

0x0001,

0xf703,	// (0x00035e0b) wait_anim_pane_g

0x2c6d,	// (0x00029375) wait_border_pane_g1

0x2c78,	// (0x00029380) wait_border_pane_g2

0x2c81,	// (0x00029389) wait_border_pane_g3

0x0002,

0xf83c,	// (0x00035f44) wait_border_pane_g

0x2ad7,	// (0x000291df) bg_popup_window_pane_cp16_ParamLimits

0x2ad7,	// (0x000291df) bg_popup_window_pane_cp16

0x2bd7,	// (0x000292df) indicator_popup_pane_cp4_ParamLimits

0x2bd7,	// (0x000292df) indicator_popup_pane_cp4

0x2beb,	// (0x000292f3) popup_query_data_window_t1_ParamLimits

0x2beb,	// (0x000292f3) popup_query_data_window_t1

0x2bfd,	// (0x00029305) popup_query_data_window_t2_ParamLimits

0x2bfd,	// (0x00029305) popup_query_data_window_t2

0x2c16,	// (0x0002931e) popup_query_data_window_t3_ParamLimits

0x2c16,	// (0x0002931e) popup_query_data_window_t3

0x0002,

0xf835,	// (0x00035f3d) popup_query_data_window_t_ParamLimits

0xf835,	// (0x00035f3d) popup_query_data_window_t

0x2c30,	// (0x00029338) query_popup_data_pane_ParamLimits

0x2c30,	// (0x00029338) query_popup_data_pane

0x2c44,	// (0x0002934c) query_popup_data_pane_cp1_ParamLimits

0x2c44,	// (0x0002934c) query_popup_data_pane_cp1

0x2ad7,	// (0x000291df) bg_popup_window_pane_cp10_ParamLimits

0x2ad7,	// (0x000291df) bg_popup_window_pane_cp10

0x2b09,	// (0x00029211) indicator_popup_pane_ParamLimits

0x2b09,	// (0x00029211) indicator_popup_pane

0x2b2b,	// (0x00029233) popup_query_code_window_t1_ParamLimits

0x2b2b,	// (0x00029233) popup_query_code_window_t1

0x2b45,	// (0x0002924d) popup_query_code_window_t2_ParamLimits

0x2b45,	// (0x0002924d) popup_query_code_window_t2

0x2b8e,	// (0x00029296) popup_query_code_window_t3_ParamLimits

0x2b8e,	// (0x00029296) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x00035f36) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x00035f36) popup_query_code_window_t

0x2bbd,	// (0x000292c5) query_popup_pane_ParamLimits

0x2bbd,	// (0x000292c5) query_popup_pane

0x9eb8,	// (0x000305c0) bg_popup_window_pane_cp15_ParamLimits

0x9eb8,	// (0x000305c0) bg_popup_window_pane_cp15

0x9ed8,	// (0x000305e0) indicator_popup_pane_cp1_ParamLimits

0x9ed8,	// (0x000305e0) indicator_popup_pane_cp1

0x9eeb,	// (0x000305f3) indicator_popup_pane_cp2_ParamLimits

0x9eeb,	// (0x000305f3) indicator_popup_pane_cp2

0x9f06,	// (0x0003060e) popup_query_data_code_window_g1_ParamLimits

0x9f06,	// (0x0003060e) popup_query_data_code_window_g1

0x9f19,	// (0x00030621) popup_query_data_code_window_t1_ParamLimits

0x9f19,	// (0x00030621) popup_query_data_code_window_t1

0x9f2b,	// (0x00030633) popup_query_data_code_window_t2_ParamLimits

0x9f2b,	// (0x00030633) popup_query_data_code_window_t2

0x9f3d,	// (0x00030645) popup_query_data_code_window_t3_ParamLimits

0x9f3d,	// (0x00030645) popup_query_data_code_window_t3

0x9f53,	// (0x0003065b) popup_query_data_code_window_t4_ParamLimits

0x9f53,	// (0x0003065b) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00035c92) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00035c92) popup_query_data_code_window_t

0xd0c6,	// (0x000337ce) list_single_midp_graphic_pane_g3

0x9f6d,	// (0x00030675) query_popup_data_pane_cp2_ParamLimits

0x9f80,	// (0x00030688) query_popup_pane_cp2_ParamLimits

0x9f80,	// (0x00030688) query_popup_pane_cp2

0x98a8,	// (0x0002ffb0) bg_popup_window_pane_cp11

0x2acf,	// (0x000291d7) heading_pane_cp5

0xa070,	// (0x00030778) listscroll_popup_info_pane

0x98a8,	// (0x0002ffb0) input_focus_pane_cp3

0x9f9b,	// (0x000306a3) query_popup_pane_t1

0x9fa9,	// (0x000306b1) list_popup_info_pane_ParamLimits

0x9fa9,	// (0x000306b1) list_popup_info_pane

0x9fb8,	// (0x000306c0) listscroll_popup_info_pane_g1

0x9fc0,	// (0x000306c8) scroll_pane_cp7

0x9fca,	// (0x000306d2) popup_info_list_pane_t1_ParamLimits

0x9fca,	// (0x000306d2) popup_info_list_pane_t1

0x9fe4,	// (0x000306ec) popup_info_list_pane_t2_ParamLimits

0x9fe4,	// (0x000306ec) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00035c9b) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00035c9b) popup_info_list_pane_t

0x98a8,	// (0x0002ffb0) bg_popup_window_pane_cp12

0x3eae,	// (0x0002a5b6) find_popup_pane

0x9b29,	// (0x00030231) bg_popup_window_pane_cp3

0x9ffe,	// (0x00030706) heading_pane_cp3

0xa00a,	// (0x00030712) listscroll_popup_graphic_pane

0x98a8,	// (0x0002ffb0) bg_popup_window_pane_cp4

0xa066,	// (0x0003076e) heading_pane_cp4

0xa070,	// (0x00030778) listscroll_popup_colour_pane

0xa078,	// (0x00030780) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa078,	// (0x00030780) cell_large_graphic_colour_none_popup_pane

0xa08c,	// (0x00030794) grid_large_graphic_colour_popup_pane_ParamLimits

0xa08c,	// (0x00030794) grid_large_graphic_colour_popup_pane

0xa0b0,	// (0x000307b8) listscroll_popup_colour_pane_g1_ParamLimits

0xa0b0,	// (0x000307b8) listscroll_popup_colour_pane_g1

0xa0c7,	// (0x000307cf) listscroll_popup_colour_pane_g2_ParamLimits

0xa0c7,	// (0x000307cf) listscroll_popup_colour_pane_g2

0xa0de,	// (0x000307e6) listscroll_popup_colour_pane_g3_ParamLimits

0xa0de,	// (0x000307e6) listscroll_popup_colour_pane_g3

0xa0ee,	// (0x000307f6) listscroll_popup_colour_pane_g4_ParamLimits

0xa0ee,	// (0x000307f6) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00035ca0) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00035ca0) listscroll_popup_colour_pane_g

0xa0fe,	// (0x00030806) scroll_pane_cp6_ParamLimits

0xa0fe,	// (0x00030806) scroll_pane_cp6

0xa110,	// (0x00030818) cell_large_graphic_colour_popup_pane_ParamLimits

0xa110,	// (0x00030818) cell_large_graphic_colour_popup_pane

0xa131,	// (0x00030839) cell_large_graphic_colour_none_popup_pane_t1

0x98a8,	// (0x0002ffb0) grid_highlight_pane_cp5

0xa140,	// (0x00030848) cell_large_graphic_colour_popup_pane_g1

0xa148,	// (0x00030850) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00035ca9) cell_large_graphic_colour_popup_pane_g

0xa150,	// (0x00030858) cell_large_graphic_colour_popup_pane_g2_copy1

0xa159,	// (0x00030861) grid_highlight_pane_cp4

0xa161,	// (0x00030869) bg_popup_window_pane_cp8_ParamLimits

0xa161,	// (0x00030869) bg_popup_window_pane_cp8

0xa17c,	// (0x00030884) popup_snote_single_text_window_g1_ParamLimits

0xa17c,	// (0x00030884) popup_snote_single_text_window_g1

0xa18e,	// (0x00030896) popup_snote_single_text_window_t1_ParamLimits

0xa18e,	// (0x00030896) popup_snote_single_text_window_t1

0xa1a1,	// (0x000308a9) popup_snote_single_text_window_t2_ParamLimits

0xa1a1,	// (0x000308a9) popup_snote_single_text_window_t2

0xa1b4,	// (0x000308bc) popup_snote_single_text_window_t3_ParamLimits

0xa1b4,	// (0x000308bc) popup_snote_single_text_window_t3

0xa1ed,	// (0x000308f5) popup_snote_single_text_window_t4_ParamLimits

0xa1ed,	// (0x000308f5) popup_snote_single_text_window_t4

0xa221,	// (0x00030929) popup_snote_single_text_window_t5_ParamLimits

0xa221,	// (0x00030929) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00035cae) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00035cae) popup_snote_single_text_window_t

0xa250,	// (0x00030958) bg_popup_window_pane_cp9_ParamLimits

0xa250,	// (0x00030958) bg_popup_window_pane_cp9

0xa17c,	// (0x00030884) popup_snote_single_graphic_window_g1_ParamLimits

0xa17c,	// (0x00030884) popup_snote_single_graphic_window_g1

0xa25e,	// (0x00030966) popup_snote_single_graphic_window_g2_ParamLimits

0xa25e,	// (0x00030966) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00035cb9) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00035cb9) popup_snote_single_graphic_window_g

0xa26a,	// (0x00030972) popup_snote_single_graphic_window_t1_ParamLimits

0xa26a,	// (0x00030972) popup_snote_single_graphic_window_t1

0xa27d,	// (0x00030985) popup_snote_single_graphic_window_t2_ParamLimits

0xa27d,	// (0x00030985) popup_snote_single_graphic_window_t2

0xa290,	// (0x00030998) popup_snote_single_graphic_window_t3_ParamLimits

0xa290,	// (0x00030998) popup_snote_single_graphic_window_t3

0xa2c9,	// (0x000309d1) popup_snote_single_graphic_window_t4_ParamLimits

0xa2c9,	// (0x000309d1) popup_snote_single_graphic_window_t4

0xa2fd,	// (0x00030a05) popup_snote_single_graphic_window_t5_ParamLimits

0xa2fd,	// (0x00030a05) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00035cbe) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00035cbe) popup_snote_single_graphic_window_t

0x3dec,	// (0x0002a4f4) grid_graphic_popup_pane_ParamLimits

0x3dec,	// (0x0002a4f4) grid_graphic_popup_pane

0x3e1a,	// (0x0002a522) listscroll_popup_graphic_pane_g1_ParamLimits

0x3e1a,	// (0x0002a522) listscroll_popup_graphic_pane_g1

0xbcbe,	// (0x000323c6) listscroll_popup_graphic_pane_g2_ParamLimits

0xbcbe,	// (0x000323c6) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x000360b3) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x000360b3) listscroll_popup_graphic_pane_g

0x3e42,	// (0x0002a54a) scroll_pane_cp5

0xbc7d,	// (0x00032385) cell_graphic_popup_pane_ParamLimits

0xbc7d,	// (0x00032385) cell_graphic_popup_pane

0x3d75,	// (0x0002a47d) cell_graphic_popup_pane_g1

0x3d7d,	// (0x0002a485) cell_graphic_popup_pane_g2

0xa150,	// (0x00030858) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x000360ac) cell_graphic_popup_pane_g

0x3d86,	// (0x0002a48e) cell_graphic_popup_pane_t2

0xa159,	// (0x00030861) grid_highlight_pane_cp3

0xa33e,	// (0x00030a46) list_gen_pane_ParamLimits

0xa33e,	// (0x00030a46) list_gen_pane

0xa370,	// (0x00030a78) scroll_pane

0xbc34,	// (0x0003233c) bg_list_pane_g1_ParamLimits

0xbc34,	// (0x0003233c) bg_list_pane_g1

0x3cea,	// (0x0002a3f2) bg_list_pane_g2_ParamLimits

0x3cea,	// (0x0002a3f2) bg_list_pane_g2

0x3cff,	// (0x0002a407) bg_list_pane_g3_ParamLimits

0x3cff,	// (0x0002a407) bg_list_pane_g3

0x3d13,	// (0x0002a41b) bg_list_pane_g4_ParamLimits

0x3d13,	// (0x0002a41b) bg_list_pane_g4

0xbc51,	// (0x00032359) bg_list_pane_g5_ParamLimits

0xbc51,	// (0x00032359) bg_list_pane_g5

0x0004,

0xf999,	// (0x000360a1) bg_list_pane_g_ParamLimits

0xf999,	// (0x000360a1) bg_list_pane_g

0xbbe3,	// (0x000322eb) list_double2_graphic_large_graphic_pane_ParamLimits

0xbbe3,	// (0x000322eb) list_double2_graphic_large_graphic_pane

0xbbe3,	// (0x000322eb) list_double2_graphic_pane_ParamLimits

0xbbe3,	// (0x000322eb) list_double2_graphic_pane

0xbbe3,	// (0x000322eb) list_double2_large_graphic_pane_ParamLimits

0xbbe3,	// (0x000322eb) list_double2_large_graphic_pane

0xbbf7,	// (0x000322ff) list_double2_pane_ParamLimits

0xbbf7,	// (0x000322ff) list_double2_pane

0xbbe3,	// (0x000322eb) list_double_graphic_heading_pane_ParamLimits

0xbbe3,	// (0x000322eb) list_double_graphic_heading_pane

0xbbe3,	// (0x000322eb) list_double_graphic_pane_ParamLimits

0xbbe3,	// (0x000322eb) list_double_graphic_pane

0xbbe3,	// (0x000322eb) list_double_heading_pane_ParamLimits

0xbbe3,	// (0x000322eb) list_double_heading_pane

0xbbe3,	// (0x000322eb) list_double_large_graphic_pane_ParamLimits

0xbbe3,	// (0x000322eb) list_double_large_graphic_pane

0xbbe3,	// (0x000322eb) list_double_number_pane_ParamLimits

0xbbe3,	// (0x000322eb) list_double_number_pane

0xbbe3,	// (0x000322eb) list_double_pane_ParamLimits

0xbbe3,	// (0x000322eb) list_double_pane

0xbbe3,	// (0x000322eb) list_double_time_pane_ParamLimits

0xbbe3,	// (0x000322eb) list_double_time_pane

0xbbe3,	// (0x000322eb) list_setting_number_pane_ParamLimits

0xbbe3,	// (0x000322eb) list_setting_number_pane

0xbbe3,	// (0x000322eb) list_setting_pane_ParamLimits

0xbbe3,	// (0x000322eb) list_setting_pane

0x9581,	// (0x0002fc89) list_single_2graphic_pane_ParamLimits

0x9581,	// (0x0002fc89) list_single_2graphic_pane

0x9581,	// (0x0002fc89) list_single_graphic_heading_pane_ParamLimits

0x9581,	// (0x0002fc89) list_single_graphic_heading_pane

0x9581,	// (0x0002fc89) list_single_graphic_pane_ParamLimits

0x9581,	// (0x0002fc89) list_single_graphic_pane

0x9581,	// (0x0002fc89) list_single_heading_pane_ParamLimits

0x9581,	// (0x0002fc89) list_single_heading_pane

0xbbf7,	// (0x000322ff) list_single_large_graphic_pane_ParamLimits

0xbbf7,	// (0x000322ff) list_single_large_graphic_pane

0x9581,	// (0x0002fc89) list_single_number_heading_pane_ParamLimits

0x9581,	// (0x0002fc89) list_single_number_heading_pane

0x9581,	// (0x0002fc89) list_single_number_pane_ParamLimits

0x9581,	// (0x0002fc89) list_single_number_pane

0x9581,	// (0x0002fc89) list_single_pane_ParamLimits

0x9581,	// (0x0002fc89) list_single_pane

0x98a8,	// (0x0002ffb0) list_highlight_pane_cp1

0xe7d0,	// (0x00034ed8) list_single_pane_g1_ParamLimits

0xe7d0,	// (0x00034ed8) list_single_pane_g1

0xe7dc,	// (0x00034ee4) list_single_pane_g2_ParamLimits

0xe7dc,	// (0x00034ee4) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00035cd0) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00035cd0) list_single_pane_g

0xeaab,	// (0x000351b3) list_single_pane_t1_ParamLimits

0xeaab,	// (0x000351b3) list_single_pane_t1

0xe7d0,	// (0x00034ed8) list_single_number_pane_g1_ParamLimits

0xe7d0,	// (0x00034ed8) list_single_number_pane_g1

0xe7dc,	// (0x00034ee4) list_single_number_pane_g2_ParamLimits

0xe7dc,	// (0x00034ee4) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00035cd0) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00035cd0) list_single_number_pane_g

0xe9d4,	// (0x000350dc) list_single_number_pane_t1_ParamLimits

0xe9d4,	// (0x000350dc) list_single_number_pane_t1

0x9543,	// (0x0002fc4b) list_single_number_pane_t2_ParamLimits

0x9543,	// (0x0002fc4b) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x00036062) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x00036062) list_single_number_pane_t

0x8ec0,	// (0x0002f5c8) list_single_graphic_pane_g1_ParamLimits

0x8ec0,	// (0x0002f5c8) list_single_graphic_pane_g1

0xe7d0,	// (0x00034ed8) list_single_graphic_pane_g2_ParamLimits

0xe7d0,	// (0x00034ed8) list_single_graphic_pane_g2

0xe7dc,	// (0x00034ee4) list_single_graphic_pane_g3_ParamLimits

0xe7dc,	// (0x00034ee4) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00035cc9) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00035cc9) list_single_graphic_pane_g

0x8ecc,	// (0x0002f5d4) list_single_graphic_pane_t1_ParamLimits

0x8ecc,	// (0x0002f5d4) list_single_graphic_pane_t1

0xe7d0,	// (0x00034ed8) list_single_heading_pane_g1_ParamLimits

0xe7d0,	// (0x00034ed8) list_single_heading_pane_g1

0xe7dc,	// (0x00034ee4) list_single_heading_pane_g2_ParamLimits

0xe7dc,	// (0x00034ee4) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00035cd0) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00035cd0) list_single_heading_pane_g

0x8ee2,	// (0x0002f5ea) list_single_heading_pane_t1_ParamLimits

0x8ee2,	// (0x0002f5ea) list_single_heading_pane_t1

0x8ef8,	// (0x0002f600) list_single_heading_pane_t2_ParamLimits

0x8ef8,	// (0x0002f600) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00035cd5) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00035cd5) list_single_heading_pane_t

0xe7d0,	// (0x00034ed8) list_single_number_heading_pane_g1_ParamLimits

0xe7d0,	// (0x00034ed8) list_single_number_heading_pane_g1

0xe7dc,	// (0x00034ee4) list_single_number_heading_pane_g2_ParamLimits

0xe7dc,	// (0x00034ee4) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00035cd0) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00035cd0) list_single_number_heading_pane_g

0x8ee2,	// (0x0002f5ea) list_single_number_heading_pane_t1_ParamLimits

0x8ee2,	// (0x0002f5ea) list_single_number_heading_pane_t1

0x8f0a,	// (0x0002f612) list_single_number_heading_pane_t2_ParamLimits

0x8f0a,	// (0x0002f612) list_single_number_heading_pane_t2

0xe7e8,	// (0x00034ef0) list_single_number_heading_pane_t3_ParamLimits

0xe7e8,	// (0x00034ef0) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00035cda) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00035cda) list_single_number_heading_pane_t

0xe7fa,	// (0x00034f02) list_single_graphic_heading_pane_g1_ParamLimits

0xe7fa,	// (0x00034f02) list_single_graphic_heading_pane_g1

0x8f1c,	// (0x0002f624) list_single_graphic_heading_pane_g4_ParamLimits

0x8f1c,	// (0x0002f624) list_single_graphic_heading_pane_g4

0xe7dc,	// (0x00034ee4) list_single_graphic_heading_pane_g5_ParamLimits

0xe7dc,	// (0x00034ee4) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00035ce1) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00035ce1) list_single_graphic_heading_pane_g

0x8ee2,	// (0x0002f5ea) list_single_graphic_heading_pane_t1_ParamLimits

0x8ee2,	// (0x0002f5ea) list_single_graphic_heading_pane_t1

0x8f2d,	// (0x0002f635) list_single_graphic_heading_pane_t2_ParamLimits

0x8f2d,	// (0x0002f635) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00035ce8) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00035ce8) list_single_graphic_heading_pane_t

0xe806,	// (0x00034f0e) list_single_large_graphic_pane_g1_ParamLimits

0xe806,	// (0x00034f0e) list_single_large_graphic_pane_g1

0xe812,	// (0x00034f1a) list_single_large_graphic_pane_g2_ParamLimits

0xe812,	// (0x00034f1a) list_single_large_graphic_pane_g2

0xe81e,	// (0x00034f26) list_single_large_graphic_pane_g3_ParamLimits

0xe81e,	// (0x00034f26) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00035ced) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00035ced) list_single_large_graphic_pane_g

0x2c78,	// (0x00029380) wait_border_pane_g2_copy1

0x8f3f,	// (0x0002f647) list_single_large_graphic_pane_g4_cp2

0xe82a,	// (0x00034f32) list_single_large_graphic_pane_t1_ParamLimits

0xe82a,	// (0x00034f32) list_single_large_graphic_pane_t1

0x8f47,	// (0x0002f64f) list_double_pane_g1_ParamLimits

0x8f47,	// (0x0002f64f) list_double_pane_g1

0x8f53,	// (0x0002f65b) list_double_pane_g2_ParamLimits

0x8f53,	// (0x0002f65b) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00035cf4) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00035cf4) list_double_pane_g

0x8f5f,	// (0x0002f667) list_double_pane_t1_ParamLimits

0x8f5f,	// (0x0002f667) list_double_pane_t1

0x8f75,	// (0x0002f67d) list_double_pane_t2_ParamLimits

0x8f75,	// (0x0002f67d) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00035cf9) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00035cf9) list_double_pane_t

0x8f87,	// (0x0002f68f) list_double2_pane_g1_ParamLimits

0x8f87,	// (0x0002f68f) list_double2_pane_g1

0x8f98,	// (0x0002f6a0) list_double2_pane_g2_ParamLimits

0x8f98,	// (0x0002f6a0) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00035cfe) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00035cfe) list_double2_pane_g

0x8fa4,	// (0x0002f6ac) list_double2_pane_t1_ParamLimits

0x8fa4,	// (0x0002f6ac) list_double2_pane_t1

0x8fba,	// (0x0002f6c2) list_double2_pane_t2_ParamLimits

0x8fba,	// (0x0002f6c2) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00035d03) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00035d03) list_double2_pane_t

0x8f47,	// (0x0002f64f) list_double_number_pane_g1_ParamLimits

0x8f47,	// (0x0002f64f) list_double_number_pane_g1

0x8f53,	// (0x0002f65b) list_double_number_pane_g2_ParamLimits

0x8f53,	// (0x0002f65b) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00035cf4) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00035cf4) list_double_number_pane_g

0x8fcc,	// (0x0002f6d4) list_double_number_pane_t1_ParamLimits

0x8fcc,	// (0x0002f6d4) list_double_number_pane_t1

0x8fde,	// (0x0002f6e6) list_double_number_pane_t2_ParamLimits

0x8fde,	// (0x0002f6e6) list_double_number_pane_t2

0x8ff4,	// (0x0002f6fc) list_double_number_pane_t3_ParamLimits

0x8ff4,	// (0x0002f6fc) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00035d08) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00035d08) list_double_number_pane_t

0x9006,	// (0x0002f70e) list_double_graphic_pane_g1_ParamLimits

0x9006,	// (0x0002f70e) list_double_graphic_pane_g1

0x9012,	// (0x0002f71a) list_double_graphic_pane_g2_ParamLimits

0x9012,	// (0x0002f71a) list_double_graphic_pane_g2

0x9021,	// (0x0002f729) list_double_graphic_pane_g3_ParamLimits

0x9021,	// (0x0002f729) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00035d0f) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00035d0f) list_double_graphic_pane_g

0x9039,	// (0x0002f741) list_double_graphic_pane_t1_ParamLimits

0x9039,	// (0x0002f741) list_double_graphic_pane_t1

0x904f,	// (0x0002f757) list_double_graphic_pane_t2_ParamLimits

0x904f,	// (0x0002f757) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00035d18) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00035d18) list_double_graphic_pane_t

0x9061,	// (0x0002f769) list_double2_graphic_pane_g1_ParamLimits

0x9061,	// (0x0002f769) list_double2_graphic_pane_g1

0x906d,	// (0x0002f775) list_double2_graphic_pane_g2_ParamLimits

0x906d,	// (0x0002f775) list_double2_graphic_pane_g2

0x9079,	// (0x0002f781) list_double2_graphic_pane_g3_ParamLimits

0x9079,	// (0x0002f781) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00035d1d) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00035d1d) list_double2_graphic_pane_g

0x9085,	// (0x0002f78d) list_double2_graphic_pane_t1_ParamLimits

0x9085,	// (0x0002f78d) list_double2_graphic_pane_t1

0x909b,	// (0x0002f7a3) list_double2_graphic_pane_t2_ParamLimits

0x909b,	// (0x0002f7a3) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00035d24) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00035d24) list_double2_graphic_pane_t

0x90ad,	// (0x0002f7b5) list_double_large_graphic_pane_g1_ParamLimits

0x90ad,	// (0x0002f7b5) list_double_large_graphic_pane_g1

0x90d8,	// (0x0002f7e0) list_double_large_graphic_pane_g2_ParamLimits

0x90d8,	// (0x0002f7e0) list_double_large_graphic_pane_g2

0x8f53,	// (0x0002f65b) list_double_large_graphic_pane_g3_ParamLimits

0x8f53,	// (0x0002f65b) list_double_large_graphic_pane_g3

0x90e9,	// (0x0002f7f1) list_double_large_graphic_pane_g4_ParamLimits

0x90e9,	// (0x0002f7f1) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00035d29) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00035d29) list_double_large_graphic_pane_g

0x90fc,	// (0x0002f804) list_double_large_graphic_pane_t1_ParamLimits

0x90fc,	// (0x0002f804) list_double_large_graphic_pane_t1

0x9115,	// (0x0002f81d) list_double_large_graphic_pane_t2_ParamLimits

0x9115,	// (0x0002f81d) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00035d34) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00035d34) list_double_large_graphic_pane_t

0x9127,	// (0x0002f82f) list_double2_large_graphic_pane_g1_ParamLimits

0x9127,	// (0x0002f82f) list_double2_large_graphic_pane_g1

0x9133,	// (0x0002f83b) list_double2_large_graphic_pane_g2_ParamLimits

0x9133,	// (0x0002f83b) list_double2_large_graphic_pane_g2

0x9144,	// (0x0002f84c) list_double2_large_graphic_pane_g3_ParamLimits

0x9144,	// (0x0002f84c) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00035d39) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00035d39) list_double2_large_graphic_pane_g

0x9150,	// (0x0002f858) list_double2_large_graphic_pane_t1_ParamLimits

0x9150,	// (0x0002f858) list_double2_large_graphic_pane_t1

0x9166,	// (0x0002f86e) list_double2_large_graphic_pane_t2_ParamLimits

0x9166,	// (0x0002f86e) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00035d40) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00035d40) list_double2_large_graphic_pane_t

0x9178,	// (0x0002f880) list_double_heading_pane_g1_ParamLimits

0x9178,	// (0x0002f880) list_double_heading_pane_g1

0x9189,	// (0x0002f891) list_double_heading_pane_g2_ParamLimits

0x9189,	// (0x0002f891) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00035d45) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00035d45) list_double_heading_pane_g

0x9195,	// (0x0002f89d) list_double_heading_pane_t1_ParamLimits

0x9195,	// (0x0002f89d) list_double_heading_pane_t1

0x91ab,	// (0x0002f8b3) list_double_heading_pane_t2_ParamLimits

0x91ab,	// (0x0002f8b3) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00035d4a) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00035d4a) list_double_heading_pane_t

0x91bd,	// (0x0002f8c5) list_double_graphic_heading_pane_g1_ParamLimits

0x91bd,	// (0x0002f8c5) list_double_graphic_heading_pane_g1

0x9178,	// (0x0002f880) list_double_graphic_heading_pane_g2_ParamLimits

0x9178,	// (0x0002f880) list_double_graphic_heading_pane_g2

0x9189,	// (0x0002f891) list_double_graphic_heading_pane_g3_ParamLimits

0x9189,	// (0x0002f891) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00035d4f) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00035d4f) list_double_graphic_heading_pane_g

0x91c9,	// (0x0002f8d1) list_double_graphic_heading_pane_t1_ParamLimits

0x91c9,	// (0x0002f8d1) list_double_graphic_heading_pane_t1

0x909b,	// (0x0002f7a3) list_double_graphic_heading_pane_t2_ParamLimits

0x909b,	// (0x0002f7a3) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00035d56) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00035d56) list_double_graphic_heading_pane_t

0x90d8,	// (0x0002f7e0) list_double_time_pane_g1_ParamLimits

0x90d8,	// (0x0002f7e0) list_double_time_pane_g1

0x8f53,	// (0x0002f65b) list_double_time_pane_g2_ParamLimits

0x8f53,	// (0x0002f65b) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00035d5b) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00035d5b) list_double_time_pane_g

0x91df,	// (0x0002f8e7) list_double_time_pane_t1_ParamLimits

0x91df,	// (0x0002f8e7) list_double_time_pane_t1

0x91f5,	// (0x0002f8fd) list_double_time_pane_t2_ParamLimits

0x91f5,	// (0x0002f8fd) list_double_time_pane_t2

0x9207,	// (0x0002f90f) list_double_time_pane_t3_ParamLimits

0x9207,	// (0x0002f90f) list_double_time_pane_t3

0x9219,	// (0x0002f921) list_double_time_pane_t4_ParamLimits

0x9219,	// (0x0002f921) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00035d60) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00035d60) list_double_time_pane_t

0x922b,	// (0x0002f933) list_setting_pane_g1_ParamLimits

0x922b,	// (0x0002f933) list_setting_pane_g1

0x9189,	// (0x0002f891) list_setting_pane_g2_ParamLimits

0x9189,	// (0x0002f891) list_setting_pane_g2

0x0001,

0xf661,	// (0x00035d69) list_setting_pane_g_ParamLimits

0xf661,	// (0x00035d69) list_setting_pane_g

0x9237,	// (0x0002f93f) list_setting_pane_t1_ParamLimits

0x9237,	// (0x0002f93f) list_setting_pane_t1

0x924e,	// (0x0002f956) list_setting_pane_t2_ParamLimits

0x924e,	// (0x0002f956) list_setting_pane_t2

0x0002,

0xf666,	// (0x00035d6e) list_setting_pane_t_ParamLimits

0xf666,	// (0x00035d6e) list_setting_pane_t

0x928d,	// (0x0002f995) set_value_pane_cp_ParamLimits

0x928d,	// (0x0002f995) set_value_pane_cp

0x929b,	// (0x0002f9a3) list_setting_number_pane_g1_ParamLimits

0x929b,	// (0x0002f9a3) list_setting_number_pane_g1

0x92a7,	// (0x0002f9af) list_setting_number_pane_g2_ParamLimits

0x92a7,	// (0x0002f9af) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x00035d75) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x00035d75) list_setting_number_pane_g

0x92b3,	// (0x0002f9bb) list_setting_number_pane_t1_ParamLimits

0x92b3,	// (0x0002f9bb) list_setting_number_pane_t1

0x92c7,	// (0x0002f9cf) list_setting_number_pane_t2_ParamLimits

0x92c7,	// (0x0002f9cf) list_setting_number_pane_t2

0x92de,	// (0x0002f9e6) list_setting_number_pane_t3_ParamLimits

0x92de,	// (0x0002f9e6) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x00035d7a) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x00035d7a) list_setting_number_pane_t

0x928d,	// (0x0002f995) set_value_pane_ParamLimits

0x928d,	// (0x0002f995) set_value_pane

0xc8b6,	// (0x00032fbe) bg_set_opt_pane_ParamLimits

0xc8b6,	// (0x00032fbe) bg_set_opt_pane

0xe855,	// (0x00034f5d) set_value_pane_t1

0xc8d7,	// (0x00032fdf) slider_set_pane_cp3

0xc8e0,	// (0x00032fe8) volume_small_pane_cp

0xc8e9,	// (0x00032ff1) list_form_gen_pane

0xc8f2,	// (0x00032ffa) scroll_pane_cp8

0x9321,	// (0x0002fa29) form_field_data_pane_ParamLimits

0x9321,	// (0x0002fa29) form_field_data_pane

0x933c,	// (0x0002fa44) form_field_data_wide_pane_ParamLimits

0x933c,	// (0x0002fa44) form_field_data_wide_pane

0xe873,	// (0x00034f7b) form_field_popup_pane_ParamLimits

0xe873,	// (0x00034f7b) form_field_popup_pane

0x935e,	// (0x0002fa66) form_field_popup_wide_pane_ParamLimits

0x935e,	// (0x0002fa66) form_field_popup_wide_pane

0xe895,	// (0x00034f9d) form_field_slider_pane_ParamLimits

0xe895,	// (0x00034f9d) form_field_slider_pane

0xe8a8,	// (0x00034fb0) form_field_slider_wide_pane_ParamLimits

0xe8a8,	// (0x00034fb0) form_field_slider_wide_pane

0xc903,	// (0x0003300b) data_form_pane

0x9389,	// (0x0002fa91) form_field_data_pane_t1

0xc90f,	// (0x00033017) input_focus_pane

0xe8bb,	// (0x00034fc3) data_form_wide_pane

0xe8d8,	// (0x00034fe0) form_field_data_wide_pane_t1

0xa16e,	// (0x00030876) input_focus_pane_cp6

0x93a3,	// (0x0002faab) form_field_popup_pane_t1

0xc90f,	// (0x00033017) input_focus_pane_cp7

0xc93d,	// (0x00033045) list_form_pane

0xe902,	// (0x0003500a) form_field_popup_wide_pane_t1

0xc90f,	// (0x00033017) input_focus_pane_cp8

0xc949,	// (0x00033051) list_form_wide_pane

0x93c5,	// (0x0002facd) form_field_slider_pane_t1_ParamLimits

0x93c5,	// (0x0002facd) form_field_slider_pane_t1

0x93dd,	// (0x0002fae5) form_field_slider_pane_t2_ParamLimits

0x93dd,	// (0x0002fae5) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x00035d8a) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x00035d8a) form_field_slider_pane_t

0x9ae7,	// (0x000301ef) input_focus_pane_cp9_ParamLimits

0x9ae7,	// (0x000301ef) input_focus_pane_cp9

0x93f2,	// (0x0002fafa) slider_cont_pane_ParamLimits

0x93f2,	// (0x0002fafa) slider_cont_pane

0xc958,	// (0x00033060) form_field_slider_wide_pane_t1_ParamLimits

0xc958,	// (0x00033060) form_field_slider_wide_pane_t1

0xe917,	// (0x0003501f) form_field_slider_wide_pane_t2_ParamLimits

0xe917,	// (0x0003501f) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x00035d8f) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x00035d8f) form_field_slider_wide_pane_t

0x9ae7,	// (0x000301ef) input_focus_pane_cp10_ParamLimits

0x9ae7,	// (0x000301ef) input_focus_pane_cp10

0x9406,	// (0x0002fb0e) slider_cont_pane_cp1_ParamLimits

0x9406,	// (0x0002fb0e) slider_cont_pane_cp1

0x941a,	// (0x0002fb22) slider_form_pane_cp

0xc96a,	// (0x00033072) input_focus_pane_g1

0xc972,	// (0x0003307a) input_focus_pane_g2

0xc97a,	// (0x00033082) input_focus_pane_g3

0xc982,	// (0x0003308a) input_focus_pane_g4

0xc98a,	// (0x00033092) input_focus_pane_g5

0xc992,	// (0x0003309a) input_focus_pane_g6

0xc99a,	// (0x000330a2) input_focus_pane_g7

0xc9a2,	// (0x000330aa) input_focus_pane_g8

0xc9aa,	// (0x000330b2) input_focus_pane_g9

0x97b8,	// (0x0002fec0) input_focus_pane_g10

0x0009,

0xf68c,	// (0x00035d94) input_focus_pane_g

0x2c81,	// (0x00029389) wait_border_pane_g3_copy1

0x9422,	// (0x0002fb2a) data_form_pane_t1

0x97b8,	// (0x0002fec0) wait_anim_pane_g1_copy1

0x9555,	// (0x0002fc5d) data_form_wide_pane_t1

0xe929,	// (0x00035031) list_form_graphic_pane_cp_ParamLimits

0xe929,	// (0x00035031) list_form_graphic_pane_cp

0x3be0,	// (0x0002a2e8) slider_form_pane_g1

0x3be9,	// (0x0002a2f1) slider_form_pane_g2

0x0006,

0xf98a,	// (0x00036092) slider_form_pane_g

0xe929,	// (0x00035031) list_form_graphic_pane_ParamLimits

0xe929,	// (0x00035031) list_form_graphic_pane

0xe93b,	// (0x00035043) list_form_graphic_pane_g1

0xe943,	// (0x0003504b) list_form_graphic_pane_t1_ParamLimits

0xe943,	// (0x0003504b) list_form_graphic_pane_t1

0x9b29,	// (0x00030231) list_highlight_pane_cp5_ParamLimits

0x9b29,	// (0x00030231) list_highlight_pane_cp5

0x943c,	// (0x0002fb44) find_pane_g1

0xc9b2,	// (0x000330ba) input_find_pane

0x9445,	// (0x0002fb4d) input_find_pane_g1_ParamLimits

0x9445,	// (0x0002fb4d) input_find_pane_g1

0x9451,	// (0x0002fb59) input_find_pane_t1_ParamLimits

0x9451,	// (0x0002fb59) input_find_pane_t1

0x9466,	// (0x0002fb6e) input_find_pane_t2_ParamLimits

0x9466,	// (0x0002fb6e) input_find_pane_t2

0x0001,

0xf6a1,	// (0x00035da9) input_find_pane_t_ParamLimits

0xf6a1,	// (0x00035da9) input_find_pane_t

0xc9bb,	// (0x000330c3) input_focus_pane_cp5_ParamLimits

0xc9bb,	// (0x000330c3) input_focus_pane_cp5

0xc9c9,	// (0x000330d1) bg_popup_window_pane_cp2_ParamLimits

0xc9c9,	// (0x000330d1) bg_popup_window_pane_cp2

0xc9d6,	// (0x000330de) listscroll_menu_pane_ParamLimits

0xc9d6,	// (0x000330de) listscroll_menu_pane

0xa3a8,	// (0x00030ab0) popup_submenu_window_ParamLimits

0xa3a8,	// (0x00030ab0) popup_submenu_window

0xc9e2,	// (0x000330ea) find_popup_pane_g1

0xc9ea,	// (0x000330f2) input_popup_find_pane_cp

0xc9bb,	// (0x000330c3) input_focus_pane_cp4_ParamLimits

0xc9bb,	// (0x000330c3) input_focus_pane_cp4

0xc9f4,	// (0x000330fc) input_popup_find_pane_t1_ParamLimits

0xc9f4,	// (0x000330fc) input_popup_find_pane_t1

0x98a8,	// (0x0002ffb0) bg_popup_sub_pane_cp

0xca22,	// (0x0003312a) listscroll_popup_sub_pane

0xca2a,	// (0x00033132) list_submenu_pane_ParamLimits

0xca2a,	// (0x00033132) list_submenu_pane

0xca3b,	// (0x00033143) scroll_pane_cp4

0xca43,	// (0x0003314b) list_single_popup_submenu_pane_ParamLimits

0xca43,	// (0x0003314b) list_single_popup_submenu_pane

0xca58,	// (0x00033160) list_single_popup_submenu_pane_g1

0xca60,	// (0x00033168) list_single_popup_submenu_pane_t1_ParamLimits

0xca60,	// (0x00033168) list_single_popup_submenu_pane_t1

0x9ae7,	// (0x000301ef) bg_active_tab_pane_cp1_ParamLimits

0x9ae7,	// (0x000301ef) bg_active_tab_pane_cp1

0xa3e6,	// (0x00030aee) tabs_2_active_pane_g1

0xa3ee,	// (0x00030af6) tabs_2_active_pane_t1

0x9ae7,	// (0x000301ef) bg_passive_tab_pane_cp1_ParamLimits

0x9ae7,	// (0x000301ef) bg_passive_tab_pane_cp1

0xa3e6,	// (0x00030aee) tabs_2_passive_pane_g1

0xa3ee,	// (0x00030af6) tabs_2_passive_pane_t1

0x9b29,	// (0x00030231) bg_active_tab_pane_cp4

0xa400,	// (0x00030b08) tabs_2_long_active_pane_t1

0x07b9,	// (0x00026ec1) bg_passive_tab_pane_cp4

0x1397,	// (0x00027a9f) list_single_midp_graphic_pane_g4_ParamLimits

0x9b29,	// (0x00030231) bg_active_tab_pane_cp5

0xa413,	// (0x00030b1b) tabs_3_long_active_pane_t1

0x07b9,	// (0x00026ec1) bg_passive_tab_pane_cp5

0x1397,	// (0x00027a9f) list_single_midp_graphic_pane_g4

0x9b29,	// (0x00030231) bg_popup_window_pane_cp13_ParamLimits

0x9b29,	// (0x00030231) bg_popup_window_pane_cp13

0xca7e,	// (0x00033186) listscroll_popup_fast_pane_ParamLimits

0xca7e,	// (0x00033186) listscroll_popup_fast_pane

0xca8d,	// (0x00033195) grid_popup_fast_pane_ParamLimits

0xca8d,	// (0x00033195) grid_popup_fast_pane

0xca9f,	// (0x000331a7) scroll_pane_cp9_ParamLimits

0xca9f,	// (0x000331a7) scroll_pane_cp9

0x5561,	// (0x0002bc69) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5561,	// (0x0002bc69) list_single_graphic_hl_pane_t1_cp2

0xcac3,	// (0x000331cb) input_focus_pane_cp20_ParamLimits

0xcac3,	// (0x000331cb) input_focus_pane_cp20

0xcad1,	// (0x000331d9) query_popup_data_pane_t1_ParamLimits

0xcad1,	// (0x000331d9) query_popup_data_pane_t1

0xcae4,	// (0x000331ec) query_popup_data_pane_t2_ParamLimits

0xcae4,	// (0x000331ec) query_popup_data_pane_t2

0xcb2a,	// (0x00033232) query_popup_data_pane_t3_ParamLimits

0xcb2a,	// (0x00033232) query_popup_data_pane_t3

0xcb6b,	// (0x00033273) query_popup_data_pane_t4_ParamLimits

0xcb6b,	// (0x00033273) query_popup_data_pane_t4

0xcba7,	// (0x000332af) query_popup_data_pane_t5_ParamLimits

0xcba7,	// (0x000332af) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x00035dae) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x00035dae) query_popup_data_pane_t

0xc96a,	// (0x00033072) bg_set_opt_pane_g1

0xc972,	// (0x0003307a) bg_set_opt_pane_g2

0xc97a,	// (0x00033082) bg_set_opt_pane_g3

0xc982,	// (0x0003308a) bg_set_opt_pane_g4

0xc98a,	// (0x00033092) bg_set_opt_pane_g5

0xc992,	// (0x0003309a) bg_set_opt_pane_g6

0xc99a,	// (0x000330a2) bg_set_opt_pane_g7

0xc9a2,	// (0x000330aa) bg_set_opt_pane_g8

0xc9aa,	// (0x000330b2) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x00035db9) bg_set_opt_pane_g

0x0038,	// (0x00026740) control_top_pane_stacon_ParamLimits

0x0038,	// (0x00026740) control_top_pane_stacon

0x008b,	// (0x00026793) signal_pane_stacon_ParamLimits

0x008b,	// (0x00026793) signal_pane_stacon

0xcfbe,	// (0x000336c6) stacon_top_pane_g1_ParamLimits

0xcfbe,	// (0x000336c6) stacon_top_pane_g1

0x00b0,	// (0x000267b8) title_pane_stacon_ParamLimits

0x00b0,	// (0x000267b8) title_pane_stacon

0x00da,	// (0x000267e2) uni_indicator_pane_stacon_ParamLimits

0x00da,	// (0x000267e2) uni_indicator_pane_stacon

0x00f2,	// (0x000267fa) battery_pane_stacon_ParamLimits

0x00f2,	// (0x000267fa) battery_pane_stacon

0x0136,	// (0x0002683e) control_bottom_pane_stacon_ParamLimits

0x0136,	// (0x0002683e) control_bottom_pane_stacon

0x0159,	// (0x00026861) navi_pane_stacon_ParamLimits

0x0159,	// (0x00026861) navi_pane_stacon

0xcfe0,	// (0x000336e8) stacon_bottom_pane_g1_ParamLimits

0xcfe0,	// (0x000336e8) stacon_bottom_pane_g1

0xf2b4,	// (0x000359bc) aid_levels_signal_lsc_ParamLimits

0xf2b4,	// (0x000359bc) aid_levels_signal_lsc

0xf2cb,	// (0x000359d3) signal_pane_stacon_g1_ParamLimits

0xf2cb,	// (0x000359d3) signal_pane_stacon_g1

0xf2df,	// (0x000359e7) signal_pane_stacon_g2_ParamLimits

0xf2df,	// (0x000359e7) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x00035dcc) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00035dcc) signal_pane_stacon_g

0xf314,	// (0x00035a1c) title_pane_stacon_t1_ParamLimits

0xf314,	// (0x00035a1c) title_pane_stacon_t1

0xcbeb,	// (0x000332f3) uni_indicator_pane_stacon_g1

0xcbf5,	// (0x000332fd) uni_indicator_pane_stacon_g2

0xcbff,	// (0x00033307) uni_indicator_pane_stacon_g3

0xcc09,	// (0x00033311) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x00035dd8) uni_indicator_pane_stacon_g

0xf339,	// (0x00035a41) control_top_pane_stacon_g1

0xf341,	// (0x00035a49) control_top_pane_stacon_t1_ParamLimits

0xf341,	// (0x00035a49) control_top_pane_stacon_t1

0xf378,	// (0x00035a80) aid_levels_battery_lsc_ParamLimits

0xf378,	// (0x00035a80) aid_levels_battery_lsc

0xf390,	// (0x00035a98) battery_pane_stacon_g1_ParamLimits

0xf390,	// (0x00035a98) battery_pane_stacon_g1

0xf3a3,	// (0x00035aab) battery_pane_stacon_g2_ParamLimits

0xf3a3,	// (0x00035aab) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x00035de1) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x00035de1) battery_pane_stacon_g

0xf3e1,	// (0x00035ae9) navi_icon_pane_stacon

0xf3f5,	// (0x00035afd) navi_navi_pane_stacon

0xf3e1,	// (0x00035ae9) navi_text_pane_stacon

0xf339,	// (0x00035a41) control_bottom_pane_stacon_g1

0xf40b,	// (0x00035b13) control_bottom_pane_stacon_t1_ParamLimits

0xf40b,	// (0x00035b13) control_bottom_pane_stacon_t1

0xa425,	// (0x00030b2d) grid_app_pane_ParamLimits

0xa425,	// (0x00030b2d) grid_app_pane

0xa45d,	// (0x00030b65) scroll_pane_cp15_ParamLimits

0xa45d,	// (0x00030b65) scroll_pane_cp15

0xa472,	// (0x00030b7a) cell_app_pane_ParamLimits

0xa472,	// (0x00030b7a) cell_app_pane

0xa4bf,	// (0x00030bc7) cell_app_pane_g1_ParamLimits

0xa4bf,	// (0x00030bc7) cell_app_pane_g1

0xcc2d,	// (0x00033335) cell_app_pane_g2_ParamLimits

0xcc2d,	// (0x00033335) cell_app_pane_g2

0x0001,

0xf6de,	// (0x00035de6) cell_app_pane_g_ParamLimits

0xf6de,	// (0x00035de6) cell_app_pane_g

0xcc39,	// (0x00033341) cell_app_pane_t1_ParamLimits

0xcc39,	// (0x00033341) cell_app_pane_t1

0xcc50,	// (0x00033358) grid_highlight_pane_ParamLimits

0xcc50,	// (0x00033358) grid_highlight_pane

0xc96a,	// (0x00033072) cell_highlight_pane_g1

0xc972,	// (0x0003307a) cell_highlight_pane_g2

0xc97a,	// (0x00033082) cell_highlight_pane_g3

0xc982,	// (0x0003308a) cell_highlight_pane_g4

0xc98a,	// (0x00033092) cell_highlight_pane_g5

0xc992,	// (0x0003309a) cell_highlight_pane_g6

0xc99a,	// (0x000330a2) cell_highlight_pane_g7

0xc9a2,	// (0x000330aa) cell_highlight_pane_g8

0xc9aa,	// (0x000330b2) cell_highlight_pane_g9

0x97b8,	// (0x0002fec0) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x00035d94) cell_highlight_pane_g

0xcc61,	// (0x00033369) bg_scroll_pane

0xf44c,	// (0x00035b54) scroll_handle_pane

0xcca8,	// (0x000333b0) scroll_bg_pane_g1

0xccbd,	// (0x000333c5) scroll_bg_pane_g2

0xccd5,	// (0x000333dd) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x00035deb) scroll_bg_pane_g

0xccea,	// (0x000333f2) scroll_handle_focus_pane_ParamLimits

0xccea,	// (0x000333f2) scroll_handle_focus_pane

0xcca8,	// (0x000333b0) scroll_handle_pane_g1

0xccf7,	// (0x000333ff) scroll_handle_pane_g2

0xccd5,	// (0x000333dd) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x00035df2) scroll_handle_pane_g

0xc9bb,	// (0x000330c3) bg_popup_sub_pane_cp21_ParamLimits

0xc9bb,	// (0x000330c3) bg_popup_sub_pane_cp21

0xcd0b,	// (0x00033413) popup_fep_japan_predictive_window_t1_ParamLimits

0xcd0b,	// (0x00033413) popup_fep_japan_predictive_window_t1

0xcd22,	// (0x0003342a) popup_fep_japan_predictive_window_t2_ParamLimits

0xcd22,	// (0x0003342a) popup_fep_japan_predictive_window_t2

0xcd55,	// (0x0003345d) popup_fep_japan_predictive_window_t3_ParamLimits

0xcd55,	// (0x0003345d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x00035df9) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x00035df9) popup_fep_japan_predictive_window_t

0x98a8,	// (0x0002ffb0) bg_popup_sub_pane_cp23

0xcd8c,	// (0x00033494) listscroll_japin_cand_pane

0xcd94,	// (0x0003349c) popup_fep_japan_candidate_window_t1

0xcda2,	// (0x000334aa) candidate_pane_ParamLimits

0xcda2,	// (0x000334aa) candidate_pane

0xcdb4,	// (0x000334bc) scroll_pane_cp30

0xcdbe,	// (0x000334c6) list_single_popup_jap_candidate_pane_ParamLimits

0xcdbe,	// (0x000334c6) list_single_popup_jap_candidate_pane

0x98a8,	// (0x0002ffb0) list_highlight_pane_cp30

0xcdd2,	// (0x000334da) list_single_popup_jap_candidate_pane_t1

0xa4e8,	// (0x00030bf0) level_1_signal

0xa4fa,	// (0x00030c02) level_2_signal

0xa50d,	// (0x00030c15) level_3_signal

0xa520,	// (0x00030c28) level_4_signal

0xa533,	// (0x00030c3b) level_5_signal

0xa546,	// (0x00030c4e) level_6_signal

0xa559,	// (0x00030c61) level_7_signal

0xa4e8,	// (0x00030bf0) level_1_battery

0xa4fa,	// (0x00030c02) level_2_battery

0xa50d,	// (0x00030c15) level_3_battery

0xa520,	// (0x00030c28) level_4_battery

0xa533,	// (0x00030c3b) level_5_battery

0xa546,	// (0x00030c4e) level_6_battery

0xa559,	// (0x00030c61) level_7_battery

0xcdf9,	// (0x00033501) list_menu_pane_ParamLimits

0xcdf9,	// (0x00033501) list_menu_pane

0xce0f,	// (0x00033517) scroll_pane_cp25_ParamLimits

0xce0f,	// (0x00033517) scroll_pane_cp25

0xce28,	// (0x00033530) list_double2_graphic_pane_cp2_ParamLimits

0xce28,	// (0x00033530) list_double2_graphic_pane_cp2

0xce28,	// (0x00033530) list_double2_large_graphic_pane_cp2_ParamLimits

0xce28,	// (0x00033530) list_double2_large_graphic_pane_cp2

0xce28,	// (0x00033530) list_double2_pane_cp2_ParamLimits

0xce28,	// (0x00033530) list_double2_pane_cp2

0xce28,	// (0x00033530) list_double_graphic_pane_cp2_ParamLimits

0xce28,	// (0x00033530) list_double_graphic_pane_cp2

0xce28,	// (0x00033530) list_double_large_graphic_pane_cp2_ParamLimits

0xce28,	// (0x00033530) list_double_large_graphic_pane_cp2

0xce28,	// (0x00033530) list_double_number_pane_cp2_ParamLimits

0xce28,	// (0x00033530) list_double_number_pane_cp2

0xce28,	// (0x00033530) list_double_pane_cp2_ParamLimits

0xce28,	// (0x00033530) list_double_pane_cp2

0xa57f,	// (0x00030c87) list_single_2graphic_pane_cp2_ParamLimits

0xa57f,	// (0x00030c87) list_single_2graphic_pane_cp2

0xa57f,	// (0x00030c87) list_single_graphic_heading_pane_cp2_ParamLimits

0xa57f,	// (0x00030c87) list_single_graphic_heading_pane_cp2

0xa57f,	// (0x00030c87) list_single_graphic_pane_cp2_ParamLimits

0xa57f,	// (0x00030c87) list_single_graphic_pane_cp2

0xa57f,	// (0x00030c87) list_single_heading_pane_cp2_ParamLimits

0xa57f,	// (0x00030c87) list_single_heading_pane_cp2

0xce38,	// (0x00033540) list_single_large_graphic_pane_cp2_ParamLimits

0xce38,	// (0x00033540) list_single_large_graphic_pane_cp2

0xa57f,	// (0x00030c87) list_single_number_heading_pane_cp2_ParamLimits

0xa57f,	// (0x00030c87) list_single_number_heading_pane_cp2

0xa57f,	// (0x00030c87) list_single_number_pane_cp2_ParamLimits

0xa57f,	// (0x00030c87) list_single_number_pane_cp2

0xa57f,	// (0x00030c87) list_single_pane_cp2_ParamLimits

0xa57f,	// (0x00030c87) list_single_pane_cp2

0xce51,	// (0x00033559) bg_popup_sub_pane_cp22

0xf4fe,	// (0x00035c06) popup_side_volume_key_window_g1

0xf528,	// (0x00035c30) popup_side_volume_key_window_t1

0xf546,	// (0x00035c4e) volume_small_pane_cp1

0x9ae7,	// (0x000301ef) bg_popup_sub_pane_cp24_ParamLimits

0x9ae7,	// (0x000301ef) bg_popup_sub_pane_cp24

0xce67,	// (0x0003356f) fep_china_uni_candidate_pane_ParamLimits

0xce67,	// (0x0003356f) fep_china_uni_candidate_pane

0xce7b,	// (0x00033583) fep_china_uni_entry_pane

0xce8b,	// (0x00033593) popup_fep_china_uni_window_g1

0xcea7,	// (0x000335af) fep_china_uni_entry_pane_g1

0xceb1,	// (0x000335b9) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x00035e2a) fep_china_uni_entry_pane_g

0xcebb,	// (0x000335c3) fep_entry_item_pane

0xcec5,	// (0x000335cd) fep_candidate_item_pane

0xcecd,	// (0x000335d5) fep_china_uni_candidate_pane_g1

0xced7,	// (0x000335df) fep_china_uni_candidate_pane_g2

0xcedf,	// (0x000335e7) fep_china_uni_candidate_pane_g3

0xcee7,	// (0x000335ef) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x00035e2f) fep_china_uni_candidate_pane_g

0x97b8,	// (0x0002fec0) fep_entry_item_pane_g1

0xcef1,	// (0x000335f9) fep_entry_item_pane_t1_ParamLimits

0xcef1,	// (0x000335f9) fep_entry_item_pane_t1

0xcf07,	// (0x0003360f) fep_candidate_item_pane_t1_ParamLimits

0xcf07,	// (0x0003360f) fep_candidate_item_pane_t1

0xcf1c,	// (0x00033624) fep_candidate_item_pane_t2_ParamLimits

0xcf1c,	// (0x00033624) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x00035e38) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x00035e38) fep_candidate_item_pane_t

0x9b29,	// (0x00030231) list_highlight_pane_cp31_ParamLimits

0x9b29,	// (0x00030231) list_highlight_pane_cp31

0xcf2e,	// (0x00033636) level_1_signal_lsc

0xcf37,	// (0x0003363f) level_2_signal_lsc

0xcf40,	// (0x00033648) level_3_signal_lsc

0xcf49,	// (0x00033651) level_4_signal_lsc

0xcf52,	// (0x0003365a) level_5_signal_lsc

0xcf5b,	// (0x00033663) level_6_signal_lsc

0xcf64,	// (0x0003366c) level_7_signal_lsc

0xcf64,	// (0x0003366c) level_1_battery_lsc

0xcf6d,	// (0x00033675) level_2_battery_lsc

0xcf76,	// (0x0003367e) level_3_battery_lsc

0xcf7f,	// (0x00033687) level_4_battery_lsc

0xcf88,	// (0x00033690) level_5_battery_lsc

0xcf91,	// (0x00033699) level_6_battery_lsc

0xcf2e,	// (0x00033636) level_7_battery_lsc

0xcf9a,	// (0x000336a2) scroll_handle_focus_pane_g1

0xcfa3,	// (0x000336ab) scroll_handle_focus_pane_g2

0xcfac,	// (0x000336b4) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x00035e3d) scroll_handle_focus_pane_g

0x947b,	// (0x0002fb83) list_single_2graphic_pane_g1_ParamLimits

0x947b,	// (0x0002fb83) list_single_2graphic_pane_g1

0x8f1c,	// (0x0002f624) list_single_2graphic_pane_g2_ParamLimits

0x8f1c,	// (0x0002f624) list_single_2graphic_pane_g2

0xe7dc,	// (0x00034ee4) list_single_2graphic_pane_g3_ParamLimits

0xe7dc,	// (0x00034ee4) list_single_2graphic_pane_g3

0x9487,	// (0x0002fb8f) list_single_2graphic_pane_g4_ParamLimits

0x9487,	// (0x0002fb8f) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x00035e44) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x00035e44) list_single_2graphic_pane_g

0x9493,	// (0x0002fb9b) list_single_2graphic_pane_t1_ParamLimits

0x9493,	// (0x0002fb9b) list_single_2graphic_pane_t1

0x94c1,	// (0x0002fbc9) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x94c1,	// (0x0002fbc9) list_double2_graphic_large_graphic_pane_g1

0x9133,	// (0x0002f83b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9133,	// (0x0002f83b) list_double2_graphic_large_graphic_pane_g2

0x9144,	// (0x0002f84c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9144,	// (0x0002f84c) list_double2_graphic_large_graphic_pane_g3

0x94d3,	// (0x0002fbdb) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x94d3,	// (0x0002fbdb) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x00035e4d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x00035e4d) list_double2_graphic_large_graphic_pane_g

0x94df,	// (0x0002fbe7) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x94df,	// (0x0002fbe7) list_double2_graphic_large_graphic_pane_t1

0x94f5,	// (0x0002fbfd) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x94f5,	// (0x0002fbfd) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x00035e56) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x00035e56) list_double2_graphic_large_graphic_pane_t

0xd03e,	// (0x00033746) popup_fast_swap_window_ParamLimits

0xd03e,	// (0x00033746) popup_fast_swap_window

0xd05c,	// (0x00033764) popup_side_volume_key_window

0xd07a,	// (0x00033782) stacon_top_pane

0xd084,	// (0x0003378c) status_pane_ParamLimits

0xd084,	// (0x0003378c) status_pane

0xa6a8,	// (0x00030db0) status_small_pane

0x98a8,	// (0x0002ffb0) control_pane

0x98a8,	// (0x0002ffb0) stacon_bottom_pane

0xc8f2,	// (0x00032ffa) scroll_pane_cp121

0xc8e9,	// (0x00032ff1) set_content_pane

0xa611,	// (0x00030d19) bg_active_tab_pane_g1_cp1

0xcfb5,	// (0x000336bd) bg_active_tab_pane_g2_cp1

0xa61a,	// (0x00030d22) bg_active_tab_pane_g3_cp1

0xa611,	// (0x00030d19) bg_passive_tab_pane_g1_cp1

0xcfb5,	// (0x000336bd) bg_passive_tab_pane_g2_cp1

0xa61a,	// (0x00030d22) bg_passive_tab_pane_g3_cp1

0xa623,	// (0x00030d2b) bg_active_tab_pane_g1_cp2

0xcfb5,	// (0x000336bd) bg_active_tab_pane_g2_cp2

0xa62c,	// (0x00030d34) bg_active_tab_pane_g3_cp2

0xa623,	// (0x00030d2b) bg_passive_tab_pane_g1_cp2

0xcfb5,	// (0x000336bd) bg_passive_tab_pane_g2_cp2

0xa62c,	// (0x00030d34) bg_passive_tab_pane_g3_cp2

0xa635,	// (0x00030d3d) bg_active_tab_pane_g1_cp3

0xcfb5,	// (0x000336bd) bg_active_tab_pane_g2_cp3

0xa63e,	// (0x00030d46) bg_active_tab_pane_g3_cp3

0xa635,	// (0x00030d3d) bg_passive_tab_pane_g1_cp3

0xcfb5,	// (0x000336bd) bg_passive_tab_pane_g2_cp3

0xa63e,	// (0x00030d46) bg_passive_tab_pane_g3_cp3

0xa647,	// (0x00030d4f) bg_active_tab_pane_g1_cp4

0xcfb5,	// (0x000336bd) bg_active_tab_pane_g2_cp4

0xa650,	// (0x00030d58) bg_active_tab_pane_g3_cp4

0xa647,	// (0x00030d4f) bg_passive_tab_pane_g1_cp4

0xcfb5,	// (0x000336bd) bg_passive_tab_pane_g2_cp4

0xa650,	// (0x00030d58) bg_passive_tab_pane_g3_cp4

0xcffc,	// (0x00033704) bg_active_tab_pane_g1_cp5

0xcfb5,	// (0x000336bd) bg_active_tab_pane_g2_cp5

0xd005,	// (0x0003370d) bg_active_tab_pane_g3_cp5

0xcffc,	// (0x00033704) bg_passive_tab_pane_g1_cp5

0xcfb5,	// (0x000336bd) bg_passive_tab_pane_g2_cp5

0xd005,	// (0x0003370d) bg_passive_tab_pane_g3_cp5

0x4204,	// (0x0002a90c) list_set_graphic_pane_ParamLimits

0x4204,	// (0x0002a90c) list_set_graphic_pane

0x98a8,	// (0x0002ffb0) bg_set_opt_pane_cp4

0xa659,	// (0x00030d61) list_set_graphic_pane_g1_ParamLimits

0xa659,	// (0x00030d61) list_set_graphic_pane_g1

0xa665,	// (0x00030d6d) list_set_graphic_pane_g2_ParamLimits

0xa665,	// (0x00030d6d) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x00035e5b) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x00035e5b) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x000361e0) volume_small_pane_cp_g

0xa689,	// (0x00030d91) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa689,	// (0x00030d91) list_double2_large_graphic_pane_g1_cp2

0xa697,	// (0x00030d9f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa697,	// (0x00030d9f) list_double2_large_graphic_pane_g2_cp2

0xd00e,	// (0x00033716) list_double2_large_graphic_pane_g3_cp2

0xd016,	// (0x0003371e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xd016,	// (0x0003371e) list_double2_large_graphic_pane_t1_cp2

0xd02c,	// (0x00033734) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xd02c,	// (0x00033734) list_double2_large_graphic_pane_t2_cp2

0xb96f,	// (0x00032077) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb96f,	// (0x00032077) list_double_large_graphic_pane_g1_cp2

0xb982,	// (0x0003208a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xb982,	// (0x0003208a) list_double_large_graphic_pane_g2_cp2

0xd165,	// (0x0003386d) list_double_large_graphic_pane_g3_cp2

0x3789,	// (0x00029e91) list_double_large_graphic_pane_g4_cp

0x3791,	// (0x00029e99) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3791,	// (0x00029e99) list_double_large_graphic_pane_t1_cp2

0x37a8,	// (0x00029eb0) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x37a8,	// (0x00029eb0) list_double_large_graphic_pane_t2_cp2

0xa6b3,	// (0x00030dbb) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa6b3,	// (0x00030dbb) list_double2_graphic_pane_g1_cp2

0xa6c1,	// (0x00030dc9) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa6c1,	// (0x00030dc9) list_double2_graphic_pane_g2_cp2

0xa6d2,	// (0x00030dda) list_double2_graphic_pane_g3_cp2

0xd092,	// (0x0003379a) list_double2_graphic_pane_t1_cp2_ParamLimits

0xd092,	// (0x0003379a) list_double2_graphic_pane_t1_cp2

0xd0a8,	// (0x000337b0) list_double2_graphic_pane_t2_cp2_ParamLimits

0xd0a8,	// (0x000337b0) list_double2_graphic_pane_t2_cp2

0xd0ba,	// (0x000337c2) list_single_number_heading_pane_g1_cp2_ParamLimits

0xd0ba,	// (0x000337c2) list_single_number_heading_pane_g1_cp2

0xd0c6,	// (0x000337ce) list_single_number_heading_pane_g2_cp2

0xd0ce,	// (0x000337d6) list_single_number_heading_pane_t1_cp2_ParamLimits

0xd0ce,	// (0x000337d6) list_single_number_heading_pane_t1_cp2

0xa6dc,	// (0x00030de4) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa6dc,	// (0x00030de4) list_single_number_heading_pane_t2_cp2

0xd0e4,	// (0x000337ec) list_single_number_heading_pane_t3_cp2_ParamLimits

0xd0e4,	// (0x000337ec) list_single_number_heading_pane_t3_cp2

0xd0ba,	// (0x000337c2) list_single_heading_pane_g1_cp2_ParamLimits

0xd0ba,	// (0x000337c2) list_single_heading_pane_g1_cp2

0xd0c6,	// (0x000337ce) list_single_heading_pane_g2_cp2

0xd0ce,	// (0x000337d6) list_single_heading_pane_t1_cp2_ParamLimits

0xd0ce,	// (0x000337d6) list_single_heading_pane_t1_cp2

0xb95b,	// (0x00032063) list_single_heading_pane_t2_cp2_ParamLimits

0xb95b,	// (0x00032063) list_single_heading_pane_t2_cp2

0x34a7,	// (0x00029baf) list_double_graphic_pane_g1_cp2_ParamLimits

0x34a7,	// (0x00029baf) list_double_graphic_pane_g1_cp2

0x34b3,	// (0x00029bbb) list_double_graphic_pane_g2_cp2_ParamLimits

0x34b3,	// (0x00029bbb) list_double_graphic_pane_g2_cp2

0x34c2,	// (0x00029bca) list_double_graphic_pane_g3_cp2

0x34ca,	// (0x00029bd2) list_double_graphic_pane_t1_cp2_ParamLimits

0x34ca,	// (0x00029bd2) list_double_graphic_pane_t1_cp2

0x34e0,	// (0x00029be8) list_double_graphic_pane_t2_cp2_ParamLimits

0x34e0,	// (0x00029be8) list_double_graphic_pane_t2_cp2

0xd159,	// (0x00033861) list_double_number_pane_g1_cp2_ParamLimits

0xd159,	// (0x00033861) list_double_number_pane_g1_cp2

0xd165,	// (0x0003386d) list_double_number_pane_g2_cp2

0xb8f5,	// (0x00031ffd) list_double_number_pane_t1_cp2_ParamLimits

0xb8f5,	// (0x00031ffd) list_double_number_pane_t1_cp2

0x347f,	// (0x00029b87) list_double_number_pane_t2_cp2_ParamLimits

0x347f,	// (0x00029b87) list_double_number_pane_t2_cp2

0x3495,	// (0x00029b9d) list_double_number_pane_t3_cp2_ParamLimits

0x3495,	// (0x00029b9d) list_double_number_pane_t3_cp2

0xb832,	// (0x00031f3a) list_single_graphic_pane_g1_cp2_ParamLimits

0xb832,	// (0x00031f3a) list_single_graphic_pane_g1_cp2

0xd1a5,	// (0x000338ad) list_single_graphic_pane_g2_cp2_ParamLimits

0xd1a5,	// (0x000338ad) list_single_graphic_pane_g2_cp2

0xd1b1,	// (0x000338b9) list_single_graphic_pane_g3_cp2

0x332a,	// (0x00029a32) list_single_graphic_pane_t1_cp2_ParamLimits

0x332a,	// (0x00029a32) list_single_graphic_pane_t1_cp2

0xd1a5,	// (0x000338ad) list_single_number_pane_g1_cp2_ParamLimits

0xd1a5,	// (0x000338ad) list_single_number_pane_g1_cp2

0xd1b1,	// (0x000338b9) list_single_number_pane_g2_cp2

0x332a,	// (0x00029a32) list_single_number_pane_t1_cp2_ParamLimits

0x332a,	// (0x00029a32) list_single_number_pane_t1_cp2

0xb81e,	// (0x00031f26) list_single_number_pane_t2_cp2_ParamLimits

0xb81e,	// (0x00031f26) list_single_number_pane_t2_cp2

0xa697,	// (0x00030d9f) list_double2_pane_g1_cp2_ParamLimits

0xa697,	// (0x00030d9f) list_double2_pane_g1_cp2

0xd00e,	// (0x00033716) list_double2_pane_g2_cp2

0xd131,	// (0x00033839) list_double2_pane_t1_cp2_ParamLimits

0xd131,	// (0x00033839) list_double2_pane_t1_cp2

0xd147,	// (0x0003384f) list_double2_pane_t2_cp2_ParamLimits

0xd147,	// (0x0003384f) list_double2_pane_t2_cp2

0xd159,	// (0x00033861) list_double_pane_g1_cp2_ParamLimits

0xd159,	// (0x00033861) list_double_pane_g1_cp2

0xd165,	// (0x0003386d) list_double_pane_g2_cp2

0xd16d,	// (0x00033875) list_double_pane_t1_cp2_ParamLimits

0xd16d,	// (0x00033875) list_double_pane_t1_cp2

0xd183,	// (0x0003388b) list_double_pane_t2_cp2_ParamLimits

0xd183,	// (0x0003388b) list_double_pane_t2_cp2

0xd195,	// (0x0003389d) list_single_pane_cp2_g3

0xd1a5,	// (0x000338ad) list_single_pane_g1_cp2_ParamLimits

0xd1a5,	// (0x000338ad) list_single_pane_g1_cp2

0xd1b1,	// (0x000338b9) list_single_pane_g2_cp2

0xd1b9,	// (0x000338c1) list_single_pane_t1_cp2_ParamLimits

0xd1b9,	// (0x000338c1) list_single_pane_t1_cp2

0xa70a,	// (0x00030e12) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa70a,	// (0x00030e12) list_single_large_graphic_pane_g1_cp2

0xd1d1,	// (0x000338d9) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xd1d1,	// (0x000338d9) list_single_large_graphic_pane_g2_cp2

0xd1dd,	// (0x000338e5) list_single_large_graphic_pane_g3_cp2

0xd1e5,	// (0x000338ed) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xd1e5,	// (0x000338ed) list_single_large_graphic_pane_g4_cp1

0xd1ff,	// (0x00033907) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xd1ff,	// (0x00033907) list_single_large_graphic_pane_t1_cp2

0x32f4,	// (0x000299fc) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x32f4,	// (0x000299fc) list_single_graphic_heading_pane_g1_cp2

0xb6a3,	// (0x00031dab) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb6a3,	// (0x00031dab) list_single_graphic_heading_pane_g4_cp2

0xd1b1,	// (0x000338b9) list_single_graphic_heading_pane_g5_cp2

0x3300,	// (0x00029a08) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3300,	// (0x00029a08) list_single_graphic_heading_pane_t1_cp2

0xb6b4,	// (0x00031dbc) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb6b4,	// (0x00031dbc) list_single_graphic_heading_pane_t2_cp2

0x32b5,	// (0x000299bd) list_single_2graphic_pane_g1_cp2_ParamLimits

0x32b5,	// (0x000299bd) list_single_2graphic_pane_g1_cp2

0xb6a3,	// (0x00031dab) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb6a3,	// (0x00031dab) list_single_2graphic_pane_g2_cp2

0xd1b1,	// (0x000338b9) list_single_2graphic_pane_g3_cp2

0x32d2,	// (0x000299da) list_single_2graphic_pane_g4_cp2_ParamLimits

0x32d2,	// (0x000299da) list_single_2graphic_pane_g4_cp2

0x32de,	// (0x000299e6) list_single_2graphic_pane_t1_cp2_ParamLimits

0x32de,	// (0x000299e6) list_single_2graphic_pane_t1_cp2

0x97b8,	// (0x0002fec0) list_highlight_pane_g10_cp1

0x2e8d,	// (0x00029595) list_highlight_pane_g1_cp1

0x2e95,	// (0x0002959d) list_highlight_pane_g2_cp1

0x2e9d,	// (0x000295a5) list_highlight_pane_g3_cp1

0x2ea5,	// (0x000295ad) list_highlight_pane_g4_cp1

0x2ead,	// (0x000295b5) list_highlight_pane_g5_cp1

0x2eb5,	// (0x000295bd) list_highlight_pane_g6_cp1

0x2ebd,	// (0x000295c5) list_highlight_pane_g7_cp1

0x2ec5,	// (0x000295cd) list_highlight_pane_g8_cp1

0x2ecd,	// (0x000295d5) list_highlight_pane_g9_cp1

0xb669,	// (0x00031d71) form_field_slider_pane_t3

0xb677,	// (0x00031d7f) form_field_slider_pane_t4

0x2dc9,	// (0x000294d1) slider_form_pane_ParamLimits

0x2dc9,	// (0x000294d1) slider_form_pane

0x98a8,	// (0x0002ffb0) control_abbreviations

0x98a8,	// (0x0002ffb0) control_conventions

0x98a8,	// (0x0002ffb0) control_definitions

0x98a8,	// (0x0002ffb0) format_table_attribute

0x35b5,	// (0x00029cbd) bg_popup_preview_window_pane_g9

0x98a8,	// (0x0002ffb0) format_table_data2

0x98a8,	// (0x0002ffb0) format_table_data3

0x98a8,	// (0x0002ffb0) format_table_data_example

0x0008,

0x98a8,	// (0x0002ffb0) intro_purpose

0xf8ea,	// (0x00035ff2) bg_popup_preview_window_pane_g

0x98a8,	// (0x0002ffb0) texts_category

0x98a8,	// (0x0002ffb0) texts_graphics

0xd215,	// (0x0003391d) text_digital

0xd224,	// (0x0003392c) text_primary

0xd233,	// (0x0003393b) text_primary_small

0xd242,	// (0x0003394a) text_secondary

0xd251,	// (0x00033959) text_title

0x3d49,	// (0x0002a451) bg_passive_tab_pane_g1_cp3_srt

0xcfb5,	// (0x000336bd) bg_passive_tab_pane_g2_cp3_srt

0x3d52,	// (0x0002a45a) bg_passive_tab_pane_g3_cp3_srt

0x9ae7,	// (0x000301ef) bg_active_tab_pane_cp3_srt_ParamLimits

0x9ae7,	// (0x000301ef) bg_active_tab_pane_cp3_srt

0x3d5b,	// (0x0002a463) tabs_4_active_pane_srt_g1

0xbc67,	// (0x0003236f) tabs_4_active_pane_srt_t1_ParamLimits

0xbc67,	// (0x0003236f) tabs_4_active_pane_srt_t1

0x3d49,	// (0x0002a451) bg_active_tab_pane_g1_cp3_copy1

0xcfb5,	// (0x000336bd) bg_active_tab_pane_g2_cp3_copy1

0x3d52,	// (0x0002a45a) bg_active_tab_pane_g3_cp3_copy1

0x9b29,	// (0x00030231) tabs_2_long_active_pane_srt_ParamLimits

0x9b29,	// (0x00030231) tabs_2_long_active_pane_srt

0x9b29,	// (0x00030231) tabs_2_long_passive_pane_srt_ParamLimits

0x9b29,	// (0x00030231) tabs_2_long_passive_pane_srt

0x07b9,	// (0x00026ec1) bg_passive_tab_pane_cp4_srt_ParamLimits

0x07b9,	// (0x00026ec1) bg_passive_tab_pane_cp4_srt

0x39f1,	// (0x0002a0f9) bg_passive_tab_pane_g1_cp4_srt

0xcfb5,	// (0x000336bd) bg_passive_tab_pane_g2_cp4_srt

0x39fa,	// (0x0002a102) bg_passive_tab_pane_g3_cp4_srt

0x9b29,	// (0x00030231) bg_active_tab_pane_cp4_srt_ParamLimits

0x9b29,	// (0x00030231) bg_active_tab_pane_cp4_srt

0xba45,	// (0x0003214d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xba45,	// (0x0003214d) tabs_2_long_active_pane_srt_t1

0x39f1,	// (0x0002a0f9) bg_active_tab_pane_g1_cp4_srt

0xcfb5,	// (0x000336bd) bg_active_tab_pane_g2_cp4_srt

0x39fa,	// (0x0002a102) bg_active_tab_pane_g3_cp4_srt

0x9ae7,	// (0x000301ef) tabs_3_long_active_pane_srt_ParamLimits

0x9ae7,	// (0x000301ef) tabs_3_long_active_pane_srt

0x9ae7,	// (0x000301ef) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x9ae7,	// (0x000301ef) tabs_3_long_passive_pane_cp_srt

0x9ae7,	// (0x000301ef) tabs_3_long_passive_pane_srt_ParamLimits

0x9ae7,	// (0x000301ef) tabs_3_long_passive_pane_srt

0x07b9,	// (0x00026ec1) bg_passive_tab_pane_cp5_srt_ParamLimits

0x07b9,	// (0x00026ec1) bg_passive_tab_pane_cp5_srt

0xcffc,	// (0x00033704) bg_passive_tab_pane_g1_cp5_srt

0xcfb5,	// (0x000336bd) bg_passive_tab_pane_g2_cp5_srt

0xd005,	// (0x0003370d) bg_passive_tab_pane_g3_cp5_srt

0x9b29,	// (0x00030231) bg_active_tab_pane_cp5_srt_ParamLimits

0x9b29,	// (0x00030231) bg_active_tab_pane_cp5_srt

0xba2f,	// (0x00032137) tabs_3_long_active_pane_srt_t1_ParamLimits

0xba2f,	// (0x00032137) tabs_3_long_active_pane_srt_t1

0xcffc,	// (0x00033704) bg_active_tab_pane_g1_cp5_srt

0xcfb5,	// (0x000336bd) bg_active_tab_pane_g2_cp5_srt

0xd005,	// (0x0003370d) bg_active_tab_pane_g3_cp5_srt

0x39d1,	// (0x0002a0d9) navi_text_pane_srt_t1

0x39c9,	// (0x0002a0d1) navi_icon_pane_srt_g1

0x04ad,	// (0x00026bb5) midp_editing_number_pane_srt

0xd260,	// (0x00033968) midp_ticker_pane_srt

0x04b5,	// (0x00026bbd) midp_ticker_pane_srt_g1

0x04bd,	// (0x00026bc5) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x00035e7a) midp_ticker_pane_srt_g

0x04c5,	// (0x00026bcd) midp_ticker_pane_srt_t1

0x39ba,	// (0x0002a0c2) midp_editing_number_pane_t1_copy1

0x07b9,	// (0x00026ec1) listscroll_midp_pane

0x07b9,	// (0x00026ec1) midp_form_pane

0x02b2,	// (0x000269ba) midp_info_popup_window_ParamLimits

0x02b2,	// (0x000269ba) midp_info_popup_window

0xc9bb,	// (0x000330c3) bg_popup_sub_pane_cp50_ParamLimits

0xc9bb,	// (0x000330c3) bg_popup_sub_pane_cp50

0x2ac3,	// (0x000291cb) listscroll_midp_info_pane_ParamLimits

0x2ac3,	// (0x000291cb) listscroll_midp_info_pane

0x2aab,	// (0x000291b3) listscroll_form_midp_pane_ParamLimits

0x2aab,	// (0x000291b3) listscroll_form_midp_pane

0x2ab7,	// (0x000291bf) scroll_bar_cp050

0xb65d,	// (0x00031d65) list_midp_pane

0x47de,	// (0x0002aee6) signal_pane_g2_cp

0x1759,	// (0x00027e61) listscroll_midp_info_pane_t1_ParamLimits

0x1759,	// (0x00027e61) listscroll_midp_info_pane_t1

0x1771,	// (0x00027e79) listscroll_midp_info_pane_t2_ParamLimits

0x1771,	// (0x00027e79) listscroll_midp_info_pane_t2

0x17af,	// (0x00027eb7) listscroll_midp_info_pane_t3_ParamLimits

0x17af,	// (0x00027eb7) listscroll_midp_info_pane_t3

0x17e9,	// (0x00027ef1) listscroll_midp_info_pane_t4_ParamLimits

0x17e9,	// (0x00027ef1) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x00035f2d) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x00035f2d) listscroll_midp_info_pane_t

0xca3b,	// (0x00033143) scroll_pane_cp21

0x16f3,	// (0x00027dfb) form_midp_field_choice_group_pane

0x16fc,	// (0x00027e04) form_midp_field_text_pane

0x173f,	// (0x00027e47) form_midp_field_time_pane

0x1747,	// (0x00027e4f) form_midp_gauge_slider_pane

0x1750,	// (0x00027e58) form_midp_gauge_wait_pane

0x98a8,	// (0x0002ffb0) form_midp_image_pane

0x9523,	// (0x0002fc2b) list_single_midp_pane_ParamLimits

0x9523,	// (0x0002fc2b) list_single_midp_pane

0xb635,	// (0x00031d3d) form_midp_field_text_pane_t1

0x1415,	// (0x00027b1d) input_focus_pane_cp050

0x16e2,	// (0x00027dea) list_midp_form_text_pane

0x1686,	// (0x00027d8e) form_midp_field_choice_group_pane_t1

0x1694,	// (0x00027d9c) input_focus_pane_cp051

0x16a8,	// (0x00027db0) list_midp_choice_pane

0x98a8,	// (0x0002ffb0) status_idle_pane

0x166a,	// (0x00027d72) form_midp_field_time_pane_t1

0x97b8,	// (0x0002fec0) wait_anim_pane_g2_copy1

0x1678,	// (0x00027d80) form_midp_field_time_pane_t2

0x0001,

0x0362,	// (0x00026a6a) aid_navinavi_width_2_pane

0xf820,	// (0x00035f28) form_midp_field_time_pane_t

0x98a8,	// (0x0002ffb0) input_focus_pane_cp052

0x98a8,	// (0x0002ffb0) bg_input_focus_pane_cp040

0x162a,	// (0x00027d32) form_midp_gauge_slider_pane_t1

0x1638,	// (0x00027d40) form_midp_gauge_slider_pane_t2

0xb619,	// (0x00031d21) form_midp_gauge_slider_pane_t3

0xb627,	// (0x00031d2f) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x00035f1f) form_midp_gauge_slider_pane_t

0x1662,	// (0x00027d6a) form_midp_slider_pane

0x9b29,	// (0x00030231) bg_input_focus_pane_cp041_ParamLimits

0x9b29,	// (0x00030231) bg_input_focus_pane_cp041

0x15f7,	// (0x00027cff) form_midp_gauge_wait_pane_t1_ParamLimits

0x15f7,	// (0x00027cff) form_midp_gauge_wait_pane_t1

0x1609,	// (0x00027d11) form_midp_gauge_wait_pane_t2_ParamLimits

0x1609,	// (0x00027d11) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x00035f1a) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x00035f1a) form_midp_gauge_wait_pane_t

0x161b,	// (0x00027d23) form_midp_wait_pane_ParamLimits

0x161b,	// (0x00027d23) form_midp_wait_pane

0x15bf,	// (0x00027cc7) form_midp_image_pane_g1

0x15c8,	// (0x00027cd0) form_midp_image_pane_t1

0x15d7,	// (0x00027cdf) form_midp_image_pane_t2

0x15e6,	// (0x00027cee) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x00035f13) form_midp_image_pane_t

0x15b6,	// (0x00027cbe) list_single_midp_pane_g1

0xea9c,	// (0x000351a4) list_single_midp_pane_t1

0xb602,	// (0x00031d0a) list_midp_form_item_pane_ParamLimits

0xb602,	// (0x00031d0a) list_midp_form_item_pane

0x030a,	// (0x00026a12) list_midp_form_item_pane_t1

0x0319,	// (0x00026a21) midp_ticker_pane_g1

0x0325,	// (0x00026a2d) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x00035e60) midp_ticker_pane_g

0xa7af,	// (0x00030eb7) midp_ticker_pane_t1

0xbbd4,	// (0x000322dc) midp_editing_number_pane_t1

0x3c0b,	// (0x0002a313) midp_editing_number_pane

0x3c1a,	// (0x0002a322) midp_ticker_pane

0x39aa,	// (0x0002a0b2) ai_message_heading_pane

0x98a8,	// (0x0002ffb0) bg_popup_window_pane_cp14

0x39b2,	// (0x0002a0ba) listscroll_ai_message_pane

0x3930,	// (0x0002a038) ai_message_heading_pane_g1_ParamLimits

0x3930,	// (0x0002a038) ai_message_heading_pane_g1

0x393c,	// (0x0002a044) ai_message_heading_pane_g2_ParamLimits

0x393c,	// (0x0002a044) ai_message_heading_pane_g2

0x394a,	// (0x0002a052) ai_message_heading_pane_g3_ParamLimits

0x394a,	// (0x0002a052) ai_message_heading_pane_g3

0x3956,	// (0x0002a05e) ai_message_heading_pane_g4_ParamLimits

0x3956,	// (0x0002a05e) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x00036054) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x00036054) ai_message_heading_pane_g

0x3962,	// (0x0002a06a) ai_message_heading_pane_t1_ParamLimits

0x3962,	// (0x0002a06a) ai_message_heading_pane_t1

0x397c,	// (0x0002a084) ai_message_heading_pane_t2_ParamLimits

0x397c,	// (0x0002a084) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0003605d) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0003605d) ai_message_heading_pane_t

0x3990,	// (0x0002a098) bg_popup_heading_pane_cp1_ParamLimits

0x3990,	// (0x0002a098) bg_popup_heading_pane_cp1

0x391e,	// (0x0002a026) list_ai_message_pane_ParamLimits

0x391e,	// (0x0002a026) list_ai_message_pane

0xca3b,	// (0x00033143) scroll_pane_cp10

0x38ba,	// (0x00029fc2) list_ai_message_pane_g1

0x38c2,	// (0x00029fca) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x00036031) list_ai_message_pane_g

0x38ca,	// (0x00029fd2) list_ai_message_pane_t1_ParamLimits

0x38ca,	// (0x00029fd2) list_ai_message_pane_t1

0x38df,	// (0x00029fe7) list_ai_message_pane_t2_ParamLimits

0x38df,	// (0x00029fe7) list_ai_message_pane_t2

0x38f4,	// (0x00029ffc) list_ai_message_pane_t3_ParamLimits

0x38f4,	// (0x00029ffc) list_ai_message_pane_t3

0x3909,	// (0x0002a011) list_ai_message_pane_t4_ParamLimits

0x3909,	// (0x0002a011) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x00036036) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x00036036) list_ai_message_pane_t

0xba15,	// (0x0003211d) cell_ai_soft_ind_pane_ParamLimits

0xba15,	// (0x0003211d) cell_ai_soft_ind_pane

0x0343,	// (0x00026a4b) cell_ai_soft_ind_pane_g1_ParamLimits

0x0343,	// (0x00026a4b) cell_ai_soft_ind_pane_g1

0x98a8,	// (0x0002ffb0) grid_highlight_cp1

0x0350,	// (0x00026a58) text_secondary_cp56_ParamLimits

0x0350,	// (0x00026a58) text_secondary_cp56

0x3878,	// (0x00029f80) example_general_pane_ParamLimits

0x3878,	// (0x00029f80) example_general_pane

0x3884,	// (0x00029f8c) example_parent_pane_g1_ParamLimits

0x3884,	// (0x00029f8c) example_parent_pane_g1

0x3890,	// (0x00029f98) example_parent_pane_t1_ParamLimits

0x3890,	// (0x00029f98) example_parent_pane_t1

0xae15,	// (0x0003151d) popup_preview_text_window_ParamLimits

0xae15,	// (0x0003151d) popup_preview_text_window

0xd19d,	// (0x000338a5) list_single_pane_cp2_g4

0x9eb8,	// (0x000305c0) bg_popup_preview_window_pane_ParamLimits

0x9eb8,	// (0x000305c0) bg_popup_preview_window_pane

0x35bf,	// (0x00029cc7) popup_preview_text_window_t1_ParamLimits

0x35bf,	// (0x00029cc7) popup_preview_text_window_t1

0x35dd,	// (0x00029ce5) popup_preview_text_window_t2_ParamLimits

0x35dd,	// (0x00029ce5) popup_preview_text_window_t2

0x3626,	// (0x00029d2e) popup_preview_text_window_t3_ParamLimits

0x3626,	// (0x00029d2e) popup_preview_text_window_t3

0x366b,	// (0x00029d73) popup_preview_text_window_t4_ParamLimits

0x366b,	// (0x00029d73) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x00036005) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x00036005) popup_preview_text_window_t

0x36e9,	// (0x00029df1) scroll_pane_cp11

0x132a,	// (0x00027a32) bg_popup_preview_window_pane_g1

0x3573,	// (0x00029c7b) bg_popup_preview_window_pane_g2

0x357d,	// (0x00029c85) bg_popup_preview_window_pane_g3

0x3587,	// (0x00029c8f) bg_popup_preview_window_pane_g4

0x3591,	// (0x00029c99) bg_popup_preview_window_pane_g5

0x359b,	// (0x00029ca3) bg_popup_preview_window_pane_g6

0x35a3,	// (0x00029cab) bg_popup_preview_window_pane_g7

0x35ab,	// (0x00029cb3) bg_popup_preview_window_pane_g8

0xf02b,	// (0x00035733) aid_popup_width_pane

0xad85,	// (0x0003148d) popup_midp_note_alarm_window_ParamLimits

0xad85,	// (0x0003148d) popup_midp_note_alarm_window

0xc903,	// (0x0003300b) data_form_pane_ParamLimits

0x937f,	// (0x0002fa87) form_field_data_pane_g1

0x9389,	// (0x0002fa91) form_field_data_pane_t1_ParamLimits

0xc90f,	// (0x00033017) input_focus_pane_ParamLimits

0xe8bb,	// (0x00034fc3) data_form_wide_pane_ParamLimits

0xe8cc,	// (0x00034fd4) form_field_data_wide_pane_g1

0xe8d8,	// (0x00034fe0) form_field_data_wide_pane_t1_ParamLimits

0xa16e,	// (0x00030876) input_focus_pane_cp6_ParamLimits

0xa3d8,	// (0x00030ae0) input_popup_find_pane_g1_ParamLimits

0xa3d8,	// (0x00030ae0) input_popup_find_pane_g1

0xf3b4,	// (0x00035abc) aid_navi_side_left_pane

0xf3c9,	// (0x00035ad1) aid_navi_side_right_pane

0x2f88,	// (0x00029690) bg_popup_window_pane_cp30_ParamLimits

0x2f88,	// (0x00029690) bg_popup_window_pane_cp30

0x3002,	// (0x0002970a) popup_midp_note_alarm_window_g1_ParamLimits

0x3002,	// (0x0002970a) popup_midp_note_alarm_window_g1

0x3032,	// (0x0002973a) popup_midp_note_alarm_window_t1_ParamLimits

0x3032,	// (0x0002973a) popup_midp_note_alarm_window_t1

0x30d3,	// (0x000297db) popup_midp_note_alarm_window_t2_ParamLimits

0x30d3,	// (0x000297db) popup_midp_note_alarm_window_t2

0x3181,	// (0x00029889) popup_midp_note_alarm_window_t3_ParamLimits

0x3181,	// (0x00029889) popup_midp_note_alarm_window_t3

0x31b3,	// (0x000298bb) popup_midp_note_alarm_window_t4_ParamLimits

0x31b3,	// (0x000298bb) popup_midp_note_alarm_window_t4

0x31d9,	// (0x000298e1) popup_midp_note_alarm_window_t5_ParamLimits

0x31d9,	// (0x000298e1) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x00035fa2) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x00035fa2) popup_midp_note_alarm_window_t

0x3285,	// (0x0002998d) wait_bar_pane_cp1_ParamLimits

0x3285,	// (0x0002998d) wait_bar_pane_cp1

0x98a8,	// (0x0002ffb0) wait_anim_pane_copy1

0x98a8,	// (0x0002ffb0) wait_border_pane_copy1

0x2c6d,	// (0x00029375) wait_border_pane_g1_copy1

0xe8f2,	// (0x00034ffa) form_field_popup_pane_g1

0x93a3,	// (0x0002faab) form_field_popup_pane_t1_ParamLimits

0xc90f,	// (0x00033017) input_focus_pane_cp7_ParamLimits

0xc93d,	// (0x00033045) list_form_pane_ParamLimits

0xe8fa,	// (0x00035002) form_field_popup_wide_pane_g1

0xe902,	// (0x0003500a) form_field_popup_wide_pane_t1_ParamLimits

0xc90f,	// (0x00033017) input_focus_pane_cp8_ParamLimits

0xc949,	// (0x00033051) list_form_wide_pane_ParamLimits

0x3dd6,	// (0x0002a4de) aid_size_cell_graphic_pane

0x9422,	// (0x0002fb2a) data_form_pane_t1_ParamLimits

0x9555,	// (0x0002fc5d) data_form_wide_pane_t1_ParamLimits

0xb219,	// (0x00031921) bg_status_flat_pane

0x9a23,	// (0x0003012b) title_pane_t1_ParamLimits

0x9aaf,	// (0x000301b7) title_pane_t2_ParamLimits

0x9ad5,	// (0x000301dd) title_pane_t3_ParamLimits

0xf557,	// (0x00035c5f) title_pane_t_ParamLimits

0xa4e8,	// (0x00030bf0) level_1_signal_ParamLimits

0xa4fa,	// (0x00030c02) level_2_signal_ParamLimits

0xa50d,	// (0x00030c15) level_3_signal_ParamLimits

0xa520,	// (0x00030c28) level_4_signal_ParamLimits

0xa533,	// (0x00030c3b) level_5_signal_ParamLimits

0xa546,	// (0x00030c4e) level_6_signal_ParamLimits

0xa559,	// (0x00030c61) level_7_signal_ParamLimits

0xa4e8,	// (0x00030bf0) level_1_battery_ParamLimits

0xa4fa,	// (0x00030c02) level_2_battery_ParamLimits

0xa50d,	// (0x00030c15) level_3_battery_ParamLimits

0xa520,	// (0x00030c28) level_4_battery_ParamLimits

0xa533,	// (0x00030c3b) level_5_battery_ParamLimits

0xa546,	// (0x00030c4e) level_6_battery_ParamLimits

0xa559,	// (0x00030c61) level_7_battery_ParamLimits

0x2e8d,	// (0x00029595) bg_status_flat_pane_g1

0x2e95,	// (0x0002959d) bg_status_flat_pane_g2

0x2e9d,	// (0x000295a5) bg_status_flat_pane_g3

0x2ea5,	// (0x000295ad) bg_status_flat_pane_g4

0x2ead,	// (0x000295b5) bg_status_flat_pane_g5

0x2eb5,	// (0x000295bd) bg_status_flat_pane_g6

0x2ebd,	// (0x000295c5) bg_status_flat_pane_g7

0x9afd,	// (0x00030205) tabs_3_active_pane_t1_ParamLimits

0x9afd,	// (0x00030205) tabs_3_passive_pane_t1_ParamLimits

0x9b17,	// (0x0003021f) tabs_4_active_pane_t1_ParamLimits

0x9b17,	// (0x0003021f) tabs_4_1_passive_pane_t1_ParamLimits

0xa3ee,	// (0x00030af6) tabs_2_active_pane_t1_ParamLimits

0xa3ee,	// (0x00030af6) tabs_2_passive_pane_t1_ParamLimits

0x9b29,	// (0x00030231) bg_active_tab_pane_cp4_ParamLimits

0xa400,	// (0x00030b08) tabs_2_long_active_pane_t1_ParamLimits

0x07b9,	// (0x00026ec1) bg_passive_tab_pane_cp4_ParamLimits

0x13be,	// (0x00027ac6) list_single_midp_graphic_pane_t1_ParamLimits

0x9b29,	// (0x00030231) bg_active_tab_pane_cp5_ParamLimits

0xa413,	// (0x00030b1b) tabs_3_long_active_pane_t1_ParamLimits

0x07b9,	// (0x00026ec1) bg_passive_tab_pane_cp5_ParamLimits

0x13be,	// (0x00027ac6) list_single_midp_graphic_pane_t1

0xb219,	// (0x00031921) bg_status_flat_pane_ParamLimits

0x0f72,	// (0x0002767a) indicator_pane_cp2_ParamLimits

0x0f72,	// (0x0002767a) indicator_pane_cp2

0xb3af,	// (0x00031ab7) navi_pane_srt_ParamLimits

0xb3af,	// (0x00031ab7) navi_pane_srt

0x10d9,	// (0x000277e1) popup_clock_digital_analogue_window_cp1

0x9c46,	// (0x0003034e) indicator_pane_t1

0xd260,	// (0x00033968) copy_highlight_pane

0xd260,	// (0x00033968) cursor_graphics_pane

0xd260,	// (0x00033968) graphic_within_text_pane

0xd260,	// (0x00033968) link_highlight_pane

0x36ac,	// (0x00029db4) popup_preview_text_window_t5_ParamLimits

0x36ac,	// (0x00029db4) popup_preview_text_window_t5

0x036c,	// (0x00026a74) cursor_digital_pane

0x036c,	// (0x00026a74) cursor_primary_pane

0x037d,	// (0x00026a85) cursor_primary_small_pane

0x0385,	// (0x00026a8d) cursor_secondary_pane

0x038d,	// (0x00026a95) cursor_title_pane

0x036c,	// (0x00026a74) link_highlight_digital_pane

0x0374,	// (0x00026a7c) link_highlight_primary_pane

0x037d,	// (0x00026a85) link_highlight_primary_small_pane

0x0385,	// (0x00026a8d) link_highlight_secondary_pane

0x038d,	// (0x00026a95) link_highlight_title_pane

0x036c,	// (0x00026a74) copy_highlight_digital_pane

0x036c,	// (0x00026a74) copy_highlight_primary_pane

0x037d,	// (0x00026a85) copy_highlight_primary_small_pane

0x0385,	// (0x00026a8d) copy_highlight_secondary_pane

0x038d,	// (0x00026a95) copy_highlight_title_pane

0x0385,	// (0x00026a8d) graphic_text_digital_pane

0x2f2b,	// (0x00029633) graphic_text_primary_pane

0x2f34,	// (0x0002963c) graphic_text_primary_small_pane

0x037d,	// (0x00026a85) graphic_text_secondary_pane

0x036c,	// (0x00026a74) graphic_text_title_pane

0xa7c1,	// (0x00030ec9) cursor_primary_pane_g1

0x2f1d,	// (0x00029625) cursor_text_primary_t1

0xb699,	// (0x00031da1) cursor_primary_small_pane_g1

0x2f0f,	// (0x00029617) cursor_text_primary_small_t1

0xb68f,	// (0x00031d97) cursor_primary_small_pane_g1_copy1

0x2ef7,	// (0x000295ff) cursor_text_primary_small_t1_copy1

0x2ed5,	// (0x000295dd) cursor_text_title_t1

0xb685,	// (0x00031d8d) cursor_title_pane_g1

0xa7c1,	// (0x00030ec9) cursor_digital_pane_g1

0x039f,	// (0x00026aa7) cursor_text_digital_t1

0x03ad,	// (0x00026ab5) link_highlight_primary_pane_g1

0x2e7e,	// (0x00029586) link_highlight_primary_pane_t1

0x03ad,	// (0x00026ab5) link_highlight_primary_small_pane_g1

0x03b5,	// (0x00026abd) link_highlight_primary_small_pane_t1

0x03c4,	// (0x00026acc) link_highlight_secondary_pane_g1

0x03cc,	// (0x00026ad4) link_highlight_secondary_pane_t1

0x2df2,	// (0x000294fa) link_highlight_title_pane_g1

0x2dfa,	// (0x00029502) link_highlight_title_pane_t1

0x2ddb,	// (0x000294e3) link_highlight_digital_pane_g1

0x2de3,	// (0x000294eb) link_highlight_digital_pane_t1

0x2ca3,	// (0x000293ab) copy_highlight_primary_pane_g1

0x2cba,	// (0x000293c2) copy_highlight_primary_pane_t1

0x2ca3,	// (0x000293ab) copy_highlight_primary_small_pane_g1

0x2cab,	// (0x000293b3) copy_highlight_primary_small_pane_t1

0x03db,	// (0x00026ae3) copy_highlight_secondary_pane_g1

0x03e3,	// (0x00026aeb) copy_highlight_secondary_pane_t1

0x2c8c,	// (0x00029394) copy_highlight_title_pane_g1

0x2c94,	// (0x0002939c) copy_highlight_title_pane_t1

0x2ca3,	// (0x000293ab) copy_highlight_digital_pane_g1

0x3fa6,	// (0x0002a6ae) copy_highlight_digital_pane_t1

0x3efa,	// (0x0002a602) graphic_text_primary_pane_g1

0x3f8a,	// (0x0002a692) graphic_text_primary_pane_t1

0x3f98,	// (0x0002a6a0) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x000360d1) graphic_text_primary_pane_t

0x3f66,	// (0x0002a66e) graphic_text_primary_small_pane_g1

0x3f6e,	// (0x0002a676) graphic_text_primary_small_pane_t1

0x3f7c,	// (0x0002a684) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x000360cc) graphic_text_primary_small_pane_t

0x3f42,	// (0x0002a64a) graphic_text_secondary_pane_g1

0x3f4a,	// (0x0002a652) graphic_text_secondary_pane_t1

0x3f58,	// (0x0002a660) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x000360c7) graphic_text_secondary_pane_t

0x3f1e,	// (0x0002a626) graphic_text_title_pane_g1

0x3f26,	// (0x0002a62e) graphic_text_title_pane_t1

0x3f34,	// (0x0002a63c) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x000360c2) graphic_text_title_pane_t

0x3efa,	// (0x0002a602) graphic_text_digital_pane_g1

0x3f02,	// (0x0002a60a) graphic_text_digital_pane_t1

0x3f10,	// (0x0002a618) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x000360bd) graphic_text_digital_pane_t

0x9b29,	// (0x00030231) navi_icon_pane_srt_ParamLimits

0x9b29,	// (0x00030231) navi_icon_pane_srt

0x98a8,	// (0x0002ffb0) navi_midp_pane_srt

0x98a8,	// (0x0002ffb0) navi_navi_pane_srt

0x9b29,	// (0x00030231) navi_text_pane_srt_ParamLimits

0x9b29,	// (0x00030231) navi_text_pane_srt

0x3ec5,	// (0x0002a5cd) navi_navi_icon_text_pane_srt

0x3ecd,	// (0x0002a5d5) navi_navi_pane_srt_g1_ParamLimits

0x3ecd,	// (0x0002a5d5) navi_navi_pane_srt_g1

0x3edf,	// (0x0002a5e7) navi_navi_pane_srt_g2_ParamLimits

0x3edf,	// (0x0002a5e7) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x000360b8) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x000360b8) navi_navi_pane_srt_g

0x3ef1,	// (0x0002a5f9) navi_navi_tabs_pane_srt

0x3ec5,	// (0x0002a5cd) navi_navi_text_pane_srt

0x3ec5,	// (0x0002a5cd) navi_navi_volume_pane_srt

0x3eb6,	// (0x0002a5be) navi_navi_text_pane_srt_t1

0x1b02,	// (0x0002820a) navi_navi_volume_pane_srt_g1

0x1b0a,	// (0x00028212) volume_small_pane_srt_ParamLimits

0x1b0a,	// (0x00028212) volume_small_pane_srt

0x03f2,	// (0x00026afa) volume_small_pane_srt_g1_ParamLimits

0x03f2,	// (0x00026afa) volume_small_pane_srt_g1

0x0402,	// (0x00026b0a) volume_small_pane_srt_g2_ParamLimits

0x0402,	// (0x00026b0a) volume_small_pane_srt_g2

0x0413,	// (0x00026b1b) volume_small_pane_srt_g3_ParamLimits

0x0413,	// (0x00026b1b) volume_small_pane_srt_g3

0x0424,	// (0x00026b2c) volume_small_pane_srt_g4_ParamLimits

0x0424,	// (0x00026b2c) volume_small_pane_srt_g4

0x0435,	// (0x00026b3d) volume_small_pane_srt_g5_ParamLimits

0x0435,	// (0x00026b3d) volume_small_pane_srt_g5

0x0446,	// (0x00026b4e) volume_small_pane_srt_g6_ParamLimits

0x0446,	// (0x00026b4e) volume_small_pane_srt_g6

0x0457,	// (0x00026b5f) volume_small_pane_srt_g7_ParamLimits

0x0457,	// (0x00026b5f) volume_small_pane_srt_g7

0x0468,	// (0x00026b70) volume_small_pane_srt_g8_ParamLimits

0x0468,	// (0x00026b70) volume_small_pane_srt_g8

0x0479,	// (0x00026b81) volume_small_pane_srt_g9_ParamLimits

0x0479,	// (0x00026b81) volume_small_pane_srt_g9

0x048a,	// (0x00026b92) volume_small_pane_srt_g10_ParamLimits

0x048a,	// (0x00026b92) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x00035e65) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x00035e65) volume_small_pane_srt_g

0x9f6d,	// (0x00030675) query_popup_data_pane_cp2

0x3e9c,	// (0x0002a5a4) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3e9c,	// (0x0002a5a4) navi_navi_icon_text_pane_srt_t1

0x2f2b,	// (0x00029633) navi_tabs_2_long_pane_srt

0x2f2b,	// (0x00029633) navi_tabs_2_pane_srt

0x2f2b,	// (0x00029633) navi_tabs_3_long_pane_srt

0x2f2b,	// (0x00029633) navi_tabs_3_pane_srt

0x2f2b,	// (0x00029633) navi_tabs_4_pane_srt

0x1ae2,	// (0x000281ea) tabs_2_active_pane_srt_ParamLimits

0x1ae2,	// (0x000281ea) tabs_2_active_pane_srt

0x1af2,	// (0x000281fa) tabs_2_passive_pane_srt_ParamLimits

0x1af2,	// (0x000281fa) tabs_2_passive_pane_srt

0x1415,	// (0x00027b1d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1415,	// (0x00027b1d) bg_passive_tab_pane_cp1_srt

0x3e68,	// (0x0002a570) bg_passive_tab_pane_g1_cp1_srt

0xcfb5,	// (0x000336bd) bg_passive_tab_pane_g2_cp1_srt

0x3e71,	// (0x0002a579) bg_passive_tab_pane_g3_cp1_srt

0x9ae7,	// (0x000301ef) bg_active_tab_pane_cp1_srt_ParamLimits

0x9ae7,	// (0x000301ef) bg_active_tab_pane_cp1_srt

0x3e7a,	// (0x0002a582) tabs_2_active_pane_srt_g1

0xbce8,	// (0x000323f0) tabs_2_active_pane_srt_t1_ParamLimits

0xbce8,	// (0x000323f0) tabs_2_active_pane_srt_t1

0x3e68,	// (0x0002a570) bg_active_tab_pane_g1_cp1_srt

0xcfb5,	// (0x000336bd) bg_active_tab_pane_g2_cp1_srt

0x3e71,	// (0x0002a579) bg_active_tab_pane_g3_cp1_srt

0x1aaf,	// (0x000281b7) tabs_3_active_pane_srt_ParamLimits

0x1aaf,	// (0x000281b7) tabs_3_active_pane_srt

0x1ac0,	// (0x000281c8) tabs_3_passive_pane_cp_srt_ParamLimits

0x1ac0,	// (0x000281c8) tabs_3_passive_pane_cp_srt

0x1ad1,	// (0x000281d9) tabs_3_passive_pane_srt_ParamLimits

0x1ad1,	// (0x000281d9) tabs_3_passive_pane_srt

0x1415,	// (0x00027b1d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1415,	// (0x00027b1d) bg_passive_tab_pane_cp2_srt

0x049b,	// (0x00026ba3) bg_passive_tab_pane_g1_cp2_srt

0xcfb5,	// (0x000336bd) bg_passive_tab_pane_g2_cp2_srt

0x04a4,	// (0x00026bac) bg_passive_tab_pane_g3_cp2_srt

0x9ae7,	// (0x000301ef) bg_active_tab_pane_cp2_srt_ParamLimits

0x9ae7,	// (0x000301ef) bg_active_tab_pane_cp2_srt

0x3e4e,	// (0x0002a556) tabs_3_active_pane_srt_g1

0xbcd2,	// (0x000323da) tabs_3_active_pane_srt_t1_ParamLimits

0xbcd2,	// (0x000323da) tabs_3_active_pane_srt_t1

0x049b,	// (0x00026ba3) bg_active_tab_pane_g1_cp2_srt

0xcfb5,	// (0x000336bd) bg_active_tab_pane_g2_cp2_srt

0x04a4,	// (0x00026bac) bg_active_tab_pane_g3_cp2_srt

0x1a67,	// (0x0002816f) tabs_4_active_pane_srt_ParamLimits

0x1a67,	// (0x0002816f) tabs_4_active_pane_srt

0x1a79,	// (0x00028181) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1a79,	// (0x00028181) tabs_4_passive_pane_cp2_srt

0x073f,	// (0x00026e47) aid_size_cell_toolbar

0x3a64,	// (0x0002a16c) main_idle_act_pane_ParamLimits

0x0982,	// (0x0002708a) popup_large_graphic_colour_window_ParamLimits

0xb0db,	// (0x000317e3) popup_toolbar_window_ParamLimits

0xb0db,	// (0x000317e3) popup_toolbar_window

0xeac1,	// (0x000351c9) list_single_graphic_2heading_pane_ParamLimits

0xeac1,	// (0x000351c9) list_single_graphic_2heading_pane

0xcc13,	// (0x0003331b) aid_size_cell_apps_grid_lsc_pane

0xcc25,	// (0x0003332d) aid_size_cell_apps_grid_prt_pane

0x07b9,	// (0x00026ec1) bg_wml_button_pane_cp1_ParamLimits

0x07b9,	// (0x00026ec1) bg_wml_button_pane_cp1

0xb635,	// (0x00031d3d) form_midp_field_text_pane_t1_ParamLimits

0x1415,	// (0x00027b1d) input_focus_pane_cp050_ParamLimits

0x16e2,	// (0x00027dea) list_midp_form_text_pane_ParamLimits

0x1694,	// (0x00027d9c) input_focus_pane_cp051_ParamLimits

0x16a8,	// (0x00027db0) list_midp_choice_pane_ParamLimits

0xb5ec,	// (0x00031cf4) list_single_2graphic_pane_cp3_ParamLimits

0xb5ec,	// (0x00031cf4) list_single_2graphic_pane_cp3

0x4b01,	// (0x0002b209) list_single_midp_graphic_pane_ParamLimits

0x4b01,	// (0x0002b209) list_single_midp_graphic_pane

0xe968,	// (0x00035070) list_single_graphic_2heading_pane_g1_ParamLimits

0xe968,	// (0x00035070) list_single_graphic_2heading_pane_g1

0xe7d0,	// (0x00034ed8) list_single_graphic_2heading_pane_g4_ParamLimits

0xe7d0,	// (0x00034ed8) list_single_graphic_2heading_pane_g4

0xe7dc,	// (0x00034ee4) list_single_graphic_2heading_pane_g5_ParamLimits

0xe7dc,	// (0x00034ee4) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x00035eb8) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x00035eb8) list_single_graphic_2heading_pane_g

0xe974,	// (0x0003507c) list_single_graphic_2heading_pane_t1_ParamLimits

0xe974,	// (0x0003507c) list_single_graphic_2heading_pane_t1

0xe988,	// (0x00035090) list_single_graphic_2heading_pane_t2_ParamLimits

0xe988,	// (0x00035090) list_single_graphic_2heading_pane_t2

0xe9a4,	// (0x000350ac) list_single_graphic_2heading_pane_t3_ParamLimits

0xe9a4,	// (0x000350ac) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x00035ebf) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x00035ebf) list_single_graphic_2heading_pane_t

0x1238,	// (0x00027940) bg_popup_sub_pane_cp2

0x1262,	// (0x0002796a) grid_toobar_pane

0x129e,	// (0x000279a6) cell_toolbar_pane_ParamLimits

0x129e,	// (0x000279a6) cell_toolbar_pane

0x12ce,	// (0x000279d6) cell_toolbar_pane_g1_ParamLimits

0x12ce,	// (0x000279d6) cell_toolbar_pane_g1

0x12e2,	// (0x000279ea) cell_toolbar_pane_g2_ParamLimits

0x12e2,	// (0x000279ea) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x00035ecd) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x00035ecd) cell_toolbar_pane_g

0x1304,	// (0x00027a0c) grid_highlight_pane_cp2_ParamLimits

0x1304,	// (0x00027a0c) grid_highlight_pane_cp2

0x131e,	// (0x00027a26) toolbar_button_pane

0x132a,	// (0x00027a32) toolbar_button_pane_g1

0x1332,	// (0x00027a3a) toolbar_button_pane_g2

0x133a,	// (0x00027a42) toolbar_button_pane_g3

0x1342,	// (0x00027a4a) toolbar_button_pane_g4

0x134a,	// (0x00027a52) toolbar_button_pane_g5

0x1352,	// (0x00027a5a) toolbar_button_pane_g6

0x135a,	// (0x00027a62) toolbar_button_pane_g7

0x1362,	// (0x00027a6a) toolbar_button_pane_g8

0x136a,	// (0x00027a72) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x00035ed2) toolbar_button_pane_g

0x137a,	// (0x00027a82) list_single_2graphic_pane_g1_cp3_ParamLimits

0x137a,	// (0x00027a82) list_single_2graphic_pane_g1_cp3

0xb54e,	// (0x00031c56) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb54e,	// (0x00031c56) list_single_2graphic_pane_g2_cp3

0xd0c6,	// (0x000337ce) list_single_2graphic_pane_g3_cp3

0x1397,	// (0x00027a9f) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1397,	// (0x00027a9f) list_single_2graphic_pane_g4_cp3

0x13a3,	// (0x00027aab) list_single_2graphic_pane_t1_cp3_ParamLimits

0x13a3,	// (0x00027aab) list_single_2graphic_pane_t1_cp3

0xd0ba,	// (0x000337c2) list_single_midp_graphic_pane_g2_ParamLimits

0xd0ba,	// (0x000337c2) list_single_midp_graphic_pane_g2

0x0747,	// (0x00026e4f) aid_zoom_text_primary

0xe958,	// (0x00035060) aid_zoom_text_secondary

0xa819,	// (0x00030f21) status_small_pane_g7_ParamLimits

0xa819,	// (0x00030f21) status_small_pane_g7

0xa83c,	// (0x00030f44) status_small_pane_t1_ParamLimits

0x99f3,	// (0x000300fb) title_pane_g2

0x0003,

0xf54e,	// (0x00035c56) title_pane_g

0xa016,	// (0x0003071e) aid_size_cell_colour_1_pane_ParamLimits

0xa016,	// (0x0003071e) aid_size_cell_colour_1_pane

0xa02a,	// (0x00030732) aid_size_cell_colour_2_pane_ParamLimits

0xa02a,	// (0x00030732) aid_size_cell_colour_2_pane

0xa03e,	// (0x00030746) aid_size_cell_colour_3_pane_ParamLimits

0xa03e,	// (0x00030746) aid_size_cell_colour_3_pane

0xa052,	// (0x0003075a) aid_size_cell_colour_4_pane_ParamLimits

0xa052,	// (0x0003075a) aid_size_cell_colour_4_pane

0xf2f0,	// (0x000359f8) title_pane_stacon_g1_ParamLimits

0xf2f0,	// (0x000359f8) title_pane_stacon_g1

0x2d11,	// (0x00029419) popup_note_wait_window_g3_ParamLimits

0x2d11,	// (0x00029419) popup_note_wait_window_g3

0x2d88,	// (0x00029490) popup_note_wait_window_t5_ParamLimits

0x2d88,	// (0x00029490) popup_note_wait_window_t5

0x98a8,	// (0x0002ffb0) main_feb_china_hwr_fs_writing_pane

0xaa72,	// (0x0003117a) popup_feb_china_hwr_fs_window_ParamLimits

0xaa72,	// (0x0003117a) popup_feb_china_hwr_fs_window

0xb55f,	// (0x00031c67) aid_size_cell_hwr_fs_ParamLimits

0xb55f,	// (0x00031c67) aid_size_cell_hwr_fs

0x1415,	// (0x00027b1d) bg_popup_sub_pane_cp3_ParamLimits

0x1415,	// (0x00027b1d) bg_popup_sub_pane_cp3

0xb574,	// (0x00031c7c) grid_hwr_fs_pane_ParamLimits

0xb574,	// (0x00031c7c) grid_hwr_fs_pane

0x1439,	// (0x00027b41) linegrid_hwr_fs_pane_ParamLimits

0x1439,	// (0x00027b41) linegrid_hwr_fs_pane

0xb58c,	// (0x00031c94) cell_hwr_fs_pane_ParamLimits

0xb58c,	// (0x00031c94) cell_hwr_fs_pane

0x146d,	// (0x00027b75) linegrid_hwr_fs_pane_g1_ParamLimits

0x146d,	// (0x00027b75) linegrid_hwr_fs_pane_g1

0xb5b2,	// (0x00031cba) linegrid_hwr_fs_pane_g2_ParamLimits

0xb5b2,	// (0x00031cba) linegrid_hwr_fs_pane_g2

0x148b,	// (0x00027b93) linegrid_hwr_fs_pane_g3_ParamLimits

0x148b,	// (0x00027b93) linegrid_hwr_fs_pane_g3

0x1497,	// (0x00027b9f) linegrid_hwr_fs_pane_g4_ParamLimits

0x1497,	// (0x00027b9f) linegrid_hwr_fs_pane_g4

0x14b5,	// (0x00027bbd) linegrid_hwr_fs_pane_g5_ParamLimits

0x14b5,	// (0x00027bbd) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x00035ef8) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x00035ef8) linegrid_hwr_fs_pane_g

0x14cb,	// (0x00027bd3) cell_hwr_fs_pane_g1_ParamLimits

0x14cb,	// (0x00027bd3) cell_hwr_fs_pane_g1

0x116f,	// (0x00027877) cell_hwr_fs_pane_g2_ParamLimits

0x116f,	// (0x00027877) cell_hwr_fs_pane_g2

0xb5c4,	// (0x00031ccc) cell_hwr_fs_pane_g3_ParamLimits

0xb5c4,	// (0x00031ccc) cell_hwr_fs_pane_g3

0xb5d1,	// (0x00031cd9) cell_hwr_fs_pane_g4_ParamLimits

0xb5d1,	// (0x00031cd9) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x00035f03) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x00035f03) cell_hwr_fs_pane_g

0xb5de,	// (0x00031ce6) cell_hwr_fs_pane_t1

0x98a8,	// (0x0002ffb0) grid_highlight_pane_cp6

0x98a8,	// (0x0002ffb0) main_idle_act2_pane

0xca22,	// (0x0003312a) aid_inside_area_popup_secondary

0xb856,	// (0x00031f5e) aid_inside_area_window_primary_ParamLimits

0xb856,	// (0x00031f5e) aid_inside_area_window_primary

0x3fb5,	// (0x0002a6bd) ai2_news_ticker_pane

0x3fbd,	// (0x0002a6c5) aid_size_cell_ai1_link_ParamLimits

0x3fbd,	// (0x0002a6c5) aid_size_cell_ai1_link

0x3fd7,	// (0x0002a6df) popup_ai2_data_window_ParamLimits

0x3fd7,	// (0x0002a6df) popup_ai2_data_window

0x3ff5,	// (0x0002a6fd) popup_ai2_link_window_ParamLimits

0x3ff5,	// (0x0002a6fd) popup_ai2_link_window

0x1415,	// (0x00027b1d) bg_popup_sub_pane_cp4_ParamLimits

0x1415,	// (0x00027b1d) bg_popup_sub_pane_cp4

0x400b,	// (0x0002a713) grid_ai2_link_pane_ParamLimits

0x400b,	// (0x0002a713) grid_ai2_link_pane

0x4022,	// (0x0002a72a) popup_ai2_link_window_g1_ParamLimits

0x4022,	// (0x0002a72a) popup_ai2_link_window_g1

0x402e,	// (0x0002a736) popup_ai2_link_window_g2_ParamLimits

0x402e,	// (0x0002a736) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x000360d6) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x000360d6) popup_ai2_link_window_g

0x403f,	// (0x0002a747) ai2_mp_button_pane

0x4047,	// (0x0002a74f) ai2_mp_volume_pane

0x1694,	// (0x00027d9c) bg_popup_sub_pane_cp5_ParamLimits

0x1694,	// (0x00027d9c) bg_popup_sub_pane_cp5

0x404f,	// (0x0002a757) heading_ai2_gene_pane_ParamLimits

0x404f,	// (0x0002a757) heading_ai2_gene_pane

0x405b,	// (0x0002a763) list_ai2_gene_pane_ParamLimits

0x405b,	// (0x0002a763) list_ai2_gene_pane

0x40a3,	// (0x0002a7ab) cell_ai2_link_pane_ParamLimits

0x40a3,	// (0x0002a7ab) cell_ai2_link_pane

0x40b9,	// (0x0002a7c1) cell_ai2_link_pane_g1

0x98a8,	// (0x0002ffb0) grid_highlight_pane_cp7

0x1b1f,	// (0x00028227) ai2_mp_volume_pane_g1

0x418c,	// (0x0002a894) ai2_mp_volume_pane_g2

0x4101,	// (0x0002a809) list_ai2_gene_pane_t1

0x4194,	// (0x0002a89c) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x000360ef) ai2_mp_volume_pane_g

0x1b27,	// (0x0002822f) volume_small_pane_cp3

0x419c,	// (0x0002a8a4) aid_size_cell_ai2_button

0x41a4,	// (0x0002a8ac) grid_ai2_button_pane

0x41ad,	// (0x0002a8b5) cell_ai2_button_pane_ParamLimits

0x41ad,	// (0x0002a8b5) cell_ai2_button_pane

0x97b8,	// (0x0002fec0) cell_ai2_button_pane_g1

0x98a8,	// (0x0002ffb0) grid_highlight_pane_cp8

0x414c,	// (0x0002a854) ai2_gene_pane_t1_ParamLimits

0x414c,	// (0x0002a854) ai2_gene_pane_t1

0xa9fa,	// (0x00031102) aid_height_parent_landscape

0xba5c,	// (0x00032164) aid_height_set_list

0x3a64,	// (0x0002a16c) aid_size_parent

0x3dd6,	// (0x0002a4de) aid_size_cell_graphic_pane_ParamLimits

0x406b,	// (0x0002a773) popup_ai2_data_window_g1_ParamLimits

0x406b,	// (0x0002a773) popup_ai2_data_window_g1

0x4077,	// (0x0002a77f) ai2_news_ticker_pane_g1

0x407f,	// (0x0002a787) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x000360db) ai2_news_ticker_pane_g

0x4087,	// (0x0002a78f) ai2_news_ticker_pane_t1

0x4095,	// (0x0002a79d) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x000360e0) ai2_news_ticker_pane_t

0x40c2,	// (0x0002a7ca) heading_ai2_gene_pane_g1

0x40ca,	// (0x0002a7d2) heading_ai2_gene_pane_t1_ParamLimits

0x40ca,	// (0x0002a7d2) heading_ai2_gene_pane_t1

0x40df,	// (0x0002a7e7) list_highlight_pane_cp6

0x40e7,	// (0x0002a7ef) ai2_gene_pane_ParamLimits

0x40e7,	// (0x0002a7ef) ai2_gene_pane

0x410f,	// (0x0002a817) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x000360e5) list_ai2_gene_pane_t

0x411d,	// (0x0002a825) list_highlight_pane_cp8_ParamLimits

0x411d,	// (0x0002a825) list_highlight_pane_cp8

0x412e,	// (0x0002a836) ai2_gene_pane_g1_ParamLimits

0x412e,	// (0x0002a836) ai2_gene_pane_g1

0x4140,	// (0x0002a848) ai2_gene_pane_g2_ParamLimits

0x4140,	// (0x0002a848) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x000360ea) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x000360ea) ai2_gene_pane_g

0xa393,	// (0x00030a9b) scroll_pane_cp12

0xa9b9,	// (0x000310c1) control_pane_t3_ParamLimits

0xa9b9,	// (0x000310c1) control_pane_t3

0xa82d,	// (0x00030f35) status_small_pane_g8_ParamLimits

0xa82d,	// (0x00030f35) status_small_pane_g8

0xab14,	// (0x0003121c) popup_find_window_ParamLimits

0xadc5,	// (0x000314cd) popup_note_image_window_ParamLimits

0xe7fa,	// (0x00034f02) list_double2_graphic_pane_vc_g1_ParamLimits

0xe7fa,	// (0x00034f02) list_double2_graphic_pane_vc_g1

0xe9bc,	// (0x000350c4) list_double2_graphic_pane_vc_g2_ParamLimits

0xe9bc,	// (0x000350c4) list_double2_graphic_pane_vc_g2

0xe9c8,	// (0x000350d0) list_double2_graphic_pane_vc_g3_ParamLimits

0xe9c8,	// (0x000350d0) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x00035ec6) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x00035ec6) list_double2_graphic_pane_vc_g

0xe9d4,	// (0x000350dc) list_double2_graphic_pane_vc_t1_ParamLimits

0xe9d4,	// (0x000350dc) list_double2_graphic_pane_vc_t1

0xe7d0,	// (0x00034ed8) list_single_heading_pane_vc_g1_ParamLimits

0xe7d0,	// (0x00034ed8) list_single_heading_pane_vc_g1

0xe7dc,	// (0x00034ee4) list_single_heading_pane_vc_g2_ParamLimits

0xe7dc,	// (0x00034ee4) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035cd0) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035cd0) list_single_heading_pane_vc_g

0xe9ea,	// (0x000350f2) list_single_heading_pane_vc_t1_ParamLimits

0xe9ea,	// (0x000350f2) list_single_heading_pane_vc_t1

0xea02,	// (0x0003510a) list_single_heading_pane_vc_t2_ParamLimits

0xea02,	// (0x0003510a) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x00035ee7) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x00035ee7) list_single_heading_pane_vc_t

0xea14,	// (0x0003511c) list_setting_number_pane_vc_g1_ParamLimits

0xea14,	// (0x0003511c) list_setting_number_pane_vc_g1

0xea20,	// (0x00035128) list_setting_number_pane_vc_g2_ParamLimits

0xea20,	// (0x00035128) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00035eec) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00035eec) list_setting_number_pane_vc_g

0xea2c,	// (0x00035134) list_setting_number_pane_vc_t1_ParamLimits

0xea2c,	// (0x00035134) list_setting_number_pane_vc_t1

0xea40,	// (0x00035148) list_setting_number_pane_vc_t2_ParamLimits

0xea40,	// (0x00035148) list_setting_number_pane_vc_t2

0xea5c,	// (0x00035164) list_setting_number_pane_vc_t3_ParamLimits

0xea5c,	// (0x00035164) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x00035ef1) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x00035ef1) list_setting_number_pane_vc_t

0xea8a,	// (0x00035192) set_value_pane_vc_ParamLimits

0xea8a,	// (0x00035192) set_value_pane_vc

0xeac1,	// (0x000351c9) list_double2_graphic_pane_vc_ParamLimits

0xeac1,	// (0x000351c9) list_double2_graphic_pane_vc

0x3c3c,	// (0x0002a344) list_double2_large_graphic_pane_vc_ParamLimits

0x3c3c,	// (0x0002a344) list_double2_large_graphic_pane_vc

0xeac1,	// (0x000351c9) list_double2_pane_vc_ParamLimits

0xeac1,	// (0x000351c9) list_double2_pane_vc

0xeac1,	// (0x000351c9) list_double_graphic_heading_pane_vc_ParamLimits

0xeac1,	// (0x000351c9) list_double_graphic_heading_pane_vc

0xeac1,	// (0x000351c9) list_double_graphic_pane_vc_ParamLimits

0xeac1,	// (0x000351c9) list_double_graphic_pane_vc

0xeac1,	// (0x000351c9) list_double_heading_pane_vc_ParamLimits

0xeac1,	// (0x000351c9) list_double_heading_pane_vc

0x3c50,	// (0x0002a358) list_double_large_graphic_pane_vc_ParamLimits

0x3c50,	// (0x0002a358) list_double_large_graphic_pane_vc

0xeac1,	// (0x000351c9) list_double_number_pane_vc_ParamLimits

0xeac1,	// (0x000351c9) list_double_number_pane_vc

0xeac1,	// (0x000351c9) list_double_pane_vc_ParamLimits

0xeac1,	// (0x000351c9) list_double_pane_vc

0xeac1,	// (0x000351c9) list_double_time_pane_vc_ParamLimits

0xeac1,	// (0x000351c9) list_double_time_pane_vc

0xeac1,	// (0x000351c9) list_setting_number_pane_vc_ParamLimits

0xeac1,	// (0x000351c9) list_setting_number_pane_vc

0xeac1,	// (0x000351c9) list_setting_pane_vc_ParamLimits

0xeac1,	// (0x000351c9) list_setting_pane_vc

0xeac1,	// (0x000351c9) list_single_graphic_heading_pane_vc_ParamLimits

0xeac1,	// (0x000351c9) list_single_graphic_heading_pane_vc

0xeac1,	// (0x000351c9) list_single_heading_pane_vc_ParamLimits

0xeac1,	// (0x000351c9) list_single_heading_pane_vc

0xeac1,	// (0x000351c9) list_single_number_heading_pane_vc_ParamLimits

0xeac1,	// (0x000351c9) list_single_number_heading_pane_vc

0xe7fa,	// (0x00034f02) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe7fa,	// (0x00034f02) list_double_graphic_heading_pane_vc_g1

0xe7d0,	// (0x00034ed8) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xe7d0,	// (0x00034ed8) list_double_graphic_heading_pane_vc_g2

0xe7dc,	// (0x00034ee4) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xe7dc,	// (0x00034ee4) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x000360f6) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x000360f6) list_double_graphic_heading_pane_vc_g

0xead6,	// (0x000351de) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xead6,	// (0x000351de) list_double_graphic_heading_pane_vc_t1

0xeaec,	// (0x000351f4) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeaec,	// (0x000351f4) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x000360fd) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x000360fd) list_double_graphic_heading_pane_vc_t

0xea14,	// (0x0003511c) list_setting_pane_vc_g1_ParamLimits

0xea14,	// (0x0003511c) list_setting_pane_vc_g1

0xea20,	// (0x00035128) list_setting_pane_vc_g2_ParamLimits

0xea20,	// (0x00035128) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x00035eec) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x00035eec) list_setting_pane_vc_g

0xeb0a,	// (0x00035212) list_setting_pane_vc_t1_ParamLimits

0xeb0a,	// (0x00035212) list_setting_pane_vc_t1

0xeb26,	// (0x0003522e) list_setting_pane_vc_t2_ParamLimits

0xeb26,	// (0x0003522e) list_setting_pane_vc_t2

0x0001,

0xfa38,	// (0x00036140) list_setting_pane_vc_t_ParamLimits

0xfa38,	// (0x00036140) list_setting_pane_vc_t

0xea8a,	// (0x00035192) set_value_pane_cp_vc_ParamLimits

0xea8a,	// (0x00035192) set_value_pane_cp_vc

0xe7d0,	// (0x00034ed8) list_single_number_heading_pane_vc_g1_ParamLimits

0xe7d0,	// (0x00034ed8) list_single_number_heading_pane_vc_g1

0xe7dc,	// (0x00034ee4) list_single_number_heading_pane_vc_g2_ParamLimits

0xe7dc,	// (0x00034ee4) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035cd0) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035cd0) list_single_number_heading_pane_vc_g

0xe9ea,	// (0x000350f2) list_single_number_heading_pane_vc_t1_ParamLimits

0xe9ea,	// (0x000350f2) list_single_number_heading_pane_vc_t1

0xeb42,	// (0x0003524a) list_single_number_heading_pane_vc_t2_ParamLimits

0xeb42,	// (0x0003524a) list_single_number_heading_pane_vc_t2

0xe7e8,	// (0x00034ef0) list_single_number_heading_pane_vc_t3_ParamLimits

0xe7e8,	// (0x00034ef0) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3d,	// (0x00036145) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x00036145) list_single_number_heading_pane_vc_t

0xe7fa,	// (0x00034f02) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe7fa,	// (0x00034f02) list_single_graphic_heading_pane_vc_g1

0xe7d0,	// (0x00034ed8) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe7d0,	// (0x00034ed8) list_single_graphic_heading_pane_vc_g4

0xe7dc,	// (0x00034ee4) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xe7dc,	// (0x00034ee4) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ee,	// (0x000360f6) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x000360f6) list_single_graphic_heading_pane_vc_g

0xe9ea,	// (0x000350f2) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe9ea,	// (0x000350f2) list_single_graphic_heading_pane_vc_t1

0xeb54,	// (0x0003525c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xeb54,	// (0x0003525c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa44,	// (0x0003614c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa44,	// (0x0003614c) list_single_graphic_heading_pane_vc_t

0xe7d0,	// (0x00034ed8) list_double2_pane_vc_g1_ParamLimits

0xe7d0,	// (0x00034ed8) list_double2_pane_vc_g1

0xe7dc,	// (0x00034ee4) list_double2_pane_vc_g2_ParamLimits

0xe7dc,	// (0x00034ee4) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035cd0) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035cd0) list_double2_pane_vc_g

0xeaab,	// (0x000351b3) list_double2_pane_vc_t1_ParamLimits

0xeaab,	// (0x000351b3) list_double2_pane_vc_t1

0xe806,	// (0x00034f0e) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe806,	// (0x00034f0e) list_double2_large_graphic_pane_vc_g1

0xe812,	// (0x00034f1a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe812,	// (0x00034f1a) list_double2_large_graphic_pane_vc_g2

0xe81e,	// (0x00034f26) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe81e,	// (0x00034f26) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00035ced) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00035ced) list_double2_large_graphic_pane_vc_g

0xe82a,	// (0x00034f32) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe82a,	// (0x00034f32) list_double2_large_graphic_pane_vc_t1

0xeb66,	// (0x0003526e) list_double_time_pane_vc_g1_ParamLimits

0xeb66,	// (0x0003526e) list_double_time_pane_vc_g1

0xeb72,	// (0x0003527a) list_double_time_pane_vc_g2_ParamLimits

0xeb72,	// (0x0003527a) list_double_time_pane_vc_g2

0x0001,

0xfa49,	// (0x00036151) list_double_time_pane_vc_g_ParamLimits

0xfa49,	// (0x00036151) list_double_time_pane_vc_g

0xeb7e,	// (0x00035286) list_double_time_pane_vc_t1_ParamLimits

0xeb7e,	// (0x00035286) list_double_time_pane_vc_t1

0xeba8,	// (0x000352b0) list_double_time_pane_vc_t2_ParamLimits

0xeba8,	// (0x000352b0) list_double_time_pane_vc_t2

0xebf1,	// (0x000352f9) list_double_time_pane_vc_t3_ParamLimits

0xebf1,	// (0x000352f9) list_double_time_pane_vc_t3

0xec03,	// (0x0003530b) list_double_time_pane_vc_t4_ParamLimits

0xec03,	// (0x0003530b) list_double_time_pane_vc_t4

0x0003,

0xfa4e,	// (0x00036156) list_double_time_pane_vc_t_ParamLimits

0xfa4e,	// (0x00036156) list_double_time_pane_vc_t

0xe7d0,	// (0x00034ed8) list_double_pane_vc_g1_ParamLimits

0xe7d0,	// (0x00034ed8) list_double_pane_vc_g1

0xe7dc,	// (0x00034ee4) list_double_pane_vc_g2_ParamLimits

0xe7dc,	// (0x00034ee4) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035cd0) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035cd0) list_double_pane_vc_g

0xec28,	// (0x00035330) list_double_pane_vc_t1_ParamLimits

0xec28,	// (0x00035330) list_double_pane_vc_t1

0xec3c,	// (0x00035344) list_double_pane_vc_t2_ParamLimits

0xec3c,	// (0x00035344) list_double_pane_vc_t2

0x0001,

0xfa57,	// (0x0003615f) list_double_pane_vc_t_ParamLimits

0xfa57,	// (0x0003615f) list_double_pane_vc_t

0xe7d0,	// (0x00034ed8) list_double_number_pane_vc_g1_ParamLimits

0xe7d0,	// (0x00034ed8) list_double_number_pane_vc_g1

0xe7dc,	// (0x00034ee4) list_double_number_pane_vc_g2_ParamLimits

0xe7dc,	// (0x00034ee4) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035cd0) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035cd0) list_double_number_pane_vc_g

0xec52,	// (0x0003535a) list_double_number_pane_vc_t1_ParamLimits

0xec52,	// (0x0003535a) list_double_number_pane_vc_t1

0xec66,	// (0x0003536e) list_double_number_pane_vc_t2_ParamLimits

0xec66,	// (0x0003536e) list_double_number_pane_vc_t2

0xec7a,	// (0x00035382) list_double_number_pane_vc_t3_ParamLimits

0xec7a,	// (0x00035382) list_double_number_pane_vc_t3

0x0002,

0xfa5c,	// (0x00036164) list_double_number_pane_vc_t_ParamLimits

0xfa5c,	// (0x00036164) list_double_number_pane_vc_t

0xec90,	// (0x00035398) list_double_large_graphic_pane_vc_g1_ParamLimits

0xec90,	// (0x00035398) list_double_large_graphic_pane_vc_g1

0xecb8,	// (0x000353c0) list_double_large_graphic_pane_vc_g2_ParamLimits

0xecb8,	// (0x000353c0) list_double_large_graphic_pane_vc_g2

0xeccc,	// (0x000353d4) list_double_large_graphic_pane_vc_g3_ParamLimits

0xeccc,	// (0x000353d4) list_double_large_graphic_pane_vc_g3

0xecdb,	// (0x000353e3) list_double_large_graphic_pane_vc_g4_ParamLimits

0xecdb,	// (0x000353e3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa63,	// (0x0003616b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa63,	// (0x0003616b) list_double_large_graphic_pane_vc_g

0xeceb,	// (0x000353f3) list_double_large_graphic_pane_vc_t1_ParamLimits

0xeceb,	// (0x000353f3) list_double_large_graphic_pane_vc_t1

0xed0d,	// (0x00035415) list_double_large_graphic_pane_vc_t2_ParamLimits

0xed0d,	// (0x00035415) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6c,	// (0x00036174) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6c,	// (0x00036174) list_double_large_graphic_pane_vc_t

0xe7d0,	// (0x00034ed8) list_double_heading_pane_vc_g1_ParamLimits

0xe7d0,	// (0x00034ed8) list_double_heading_pane_vc_g1

0xe7dc,	// (0x00034ee4) list_double_heading_pane_vc_g2_ParamLimits

0xe7dc,	// (0x00034ee4) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035cd0) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035cd0) list_double_heading_pane_vc_g

0xed2d,	// (0x00035435) list_double_heading_pane_vc_t1_ParamLimits

0xed2d,	// (0x00035435) list_double_heading_pane_vc_t1

0xe9ea,	// (0x000350f2) list_double_heading_pane_vc_t2_ParamLimits

0xe9ea,	// (0x000350f2) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x00036179) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x00036179) list_double_heading_pane_vc_t

0xed3f,	// (0x00035447) list_double_graphic_pane_vc_g1_ParamLimits

0xed3f,	// (0x00035447) list_double_graphic_pane_vc_g1

0xed52,	// (0x0003545a) list_double_graphic_pane_vc_g2_ParamLimits

0xed52,	// (0x0003545a) list_double_graphic_pane_vc_g2

0xe7d0,	// (0x00034ed8) list_double_graphic_pane_vc_g3_ParamLimits

0xe7d0,	// (0x00034ed8) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x0003617e) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x0003617e) list_double_graphic_pane_vc_g

0xed6f,	// (0x00035477) list_double_graphic_pane_vc_t1_ParamLimits

0xed6f,	// (0x00035477) list_double_graphic_pane_vc_t1

0xed99,	// (0x000354a1) list_double_graphic_pane_vc_t2_ParamLimits

0xed99,	// (0x000354a1) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x00036187) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x00036187) list_double_graphic_pane_vc_t

0xf037,	// (0x0003573f) aid_size_cell_fastswap

0x97c2,	// (0x0002feca) aid_size_cell_touch_ParamLimits

0x97c2,	// (0x0002feca) aid_size_cell_touch

0xf1b4,	// (0x000358bc) popup_fast_swap_wide_window_ParamLimits

0xf1b4,	// (0x000358bc) popup_fast_swap_wide_window

0x998a,	// (0x00030092) touch_pane_ParamLimits

0x998a,	// (0x00030092) touch_pane

0xc8fb,	// (0x00033003) button_value_adjust_pane_cp2

0xe863,	// (0x00034f6b) button_value_adjust_pane_cp4

0xe86b,	// (0x00034f73) form_field_data_pane_cp2

0x9354,	// (0x0002fa5c) form_field_data_wide_pane_cp2

0xcc61,	// (0x00033369) bg_scroll_pane_ParamLimits

0xf44c,	// (0x00035b54) scroll_handle_pane_ParamLimits

0xf460,	// (0x00035b68) scroll_sc2_down_pane_ParamLimits

0xf460,	// (0x00035b68) scroll_sc2_down_pane

0xcc92,	// (0x0003339a) scroll_sc2_up_pane_ParamLimits

0xcc92,	// (0x0003339a) scroll_sc2_up_pane

0xbe25,	// (0x0003252d) grid_wheel_folder_pane_g1_ParamLimits

0xbe25,	// (0x0003252d) grid_wheel_folder_pane_g1

0x0114,	// (0x0002681c) clock_nsta_pane_cp2_ParamLimits

0x0114,	// (0x0002681c) clock_nsta_pane_cp2

0x07b9,	// (0x00026ec1) listscroll_midp_pane_ParamLimits

0xa718,	// (0x00030e20) midp_canvas_pane

0x072d,	// (0x00026e35) nsta_clock_indic_pane

0x0783,	// (0x00026e8b) listscroll_form_pane_vc

0x07a7,	// (0x00026eaf) listscroll_set_pane_vc_ParamLimits

0x07a7,	// (0x00026eaf) listscroll_set_pane_vc

0xb241,	// (0x00031949) clock_nsta_pane

0xb26b,	// (0x00031973) indicator_nsta_pane

0x1238,	// (0x00027940) bg_popup_sub_pane_cp2_ParamLimits

0x124c,	// (0x00027954) find_pane_cp2_ParamLimits

0x124c,	// (0x00027954) find_pane_cp2

0x1262,	// (0x0002796a) grid_toobar_pane_ParamLimits

0x13d4,	// (0x00027adc) list_form_gen_pane_vc_ParamLimits

0x13d4,	// (0x00027adc) list_form_gen_pane_vc

0x13ea,	// (0x00027af2) scroll_pane_cp8_vc_ParamLimits

0x13ea,	// (0x00027af2) scroll_pane_cp8_vc

0x1509,	// (0x00027c11) data_form_wide_pane_vc_ParamLimits

0x1509,	// (0x00027c11) data_form_wide_pane_vc

0x1515,	// (0x00027c1d) form_field_data_wide_pane_vc_g1

0x151d,	// (0x00027c25) form_field_data_wide_pane_vc_t1_ParamLimits

0x151d,	// (0x00027c25) form_field_data_wide_pane_vc_t1

0xc90f,	// (0x00033017) input_focus_pane_cp6_vc_ParamLimits

0xc90f,	// (0x00033017) input_focus_pane_cp6_vc

0xb65d,	// (0x00031d65) list_midp_pane_ParamLimits

0x3e42,	// (0x0002a54a) scroll_pane_cp16_ParamLimits

0x3e42,	// (0x0002a54a) scroll_pane_cp16

0x2ae5,	// (0x000291ed) button_value_adjust_pane_ParamLimits

0x2ae5,	// (0x000291ed) button_value_adjust_pane

0xba6d,	// (0x00032175) button_value_adjust_pane_cp6_ParamLimits

0xba6d,	// (0x00032175) button_value_adjust_pane_cp6

0xbbaf,	// (0x000322b7) settings_code_pane_cp_ParamLimits

0xbbaf,	// (0x000322b7) settings_code_pane_cp

0x97b8,	// (0x0002fec0) cell_touch_pane_g1

0x97b8,	// (0x0002fec0) cell_touch_pane_g2

0x0001,

0xf703,	// (0x00035e0b) cell_touch_pane_g

0xbcfe,	// (0x00032406) cell_touch_pane_cp_ParamLimits

0xbcfe,	// (0x00032406) cell_touch_pane_cp

0xbd1a,	// (0x00032422) cell_touch_pane_ParamLimits

0xbd1a,	// (0x00032422) cell_touch_pane

0x97b8,	// (0x0002fec0) scroll_sc2_down_pane_g1

0x97b8,	// (0x0002fec0) scroll_sc2_up_pane_g1

0x98a8,	// (0x0002ffb0) bg_set_opt_pane_cp4_vc

0x41e0,	// (0x0002a8e8) list_set_graphic_pane_vc_g1_ParamLimits

0x41e0,	// (0x0002a8e8) list_set_graphic_pane_vc_g1

0xd268,	// (0x00033970) list_set_graphic_pane_vc_g2_ParamLimits

0xd268,	// (0x00033970) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x00036102) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x00036102) list_set_graphic_pane_vc_g

0x41ec,	// (0x0002a8f4) text_primary_small_cp13_vc_ParamLimits

0x41ec,	// (0x0002a8f4) text_primary_small_cp13_vc

0x4204,	// (0x0002a90c) list_set_graphic_pane_vc_ParamLimits

0x4204,	// (0x0002a90c) list_set_graphic_pane_vc

0x98a8,	// (0x0002ffb0) input_focus_pane_cp2_vc

0x97b8,	// (0x0002fec0) setting_code_pane_vc_g1

0x9b40,	// (0x00030248) setting_code_pane_vc_t1

0x4219,	// (0x0002a921) set_text_pane_vc_t1_ParamLimits

0x4219,	// (0x0002a921) set_text_pane_vc_t1

0x98a8,	// (0x0002ffb0) input_focus_pane_cp1_vc

0x4237,	// (0x0002a93f) list_set_text_pane_vc

0x97b8,	// (0x0002fec0) setting_text_pane_vc_g1

0x98a8,	// (0x0002ffb0) bg_set_opt_pane_cp2_vc

0x9b37,	// (0x0003023f) setting_slider_graphic_pane_vc_g1

0x4241,	// (0x0002a949) setting_slider_graphic_pane_vc_t1

0x4253,	// (0x0002a95b) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x00036107) setting_slider_graphic_pane_vc_t

0x4265,	// (0x0002a96d) slider_set_pane_cp_vc

0x426f,	// (0x0002a977) slider_set_pane_vc_g1

0x4278,	// (0x0002a980) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0003610c) slider_set_pane_vc_g

0xc96a,	// (0x00033072) set_opt_bg_pane_g1_copy1

0xc972,	// (0x0003307a) set_opt_bg_pane_g2_copy1

0x42a4,	// (0x0002a9ac) set_opt_bg_pane_g3_copy1

0xc982,	// (0x0003308a) set_opt_bg_pane_g4_copy1

0xc98a,	// (0x00033092) set_opt_bg_pane_g5_copy1

0xc992,	// (0x0003309a) set_opt_bg_pane_g6_copy1

0x42ae,	// (0x0002a9b6) set_opt_bg_pane_g7_copy1

0x42b8,	// (0x0002a9c0) set_opt_bg_pane_g8_copy1

0x42c2,	// (0x0002a9ca) set_opt_bg_pane_g9_copy1

0x98a8,	// (0x0002ffb0) bg_set_opt_pane_cp_vc

0x42cc,	// (0x0002a9d4) setting_slider_pane_vc_t1

0x42db,	// (0x0002a9e3) setting_slider_pane_vc_t2

0x42ed,	// (0x0002a9f5) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0003611b) setting_slider_pane_vc_t

0x42ff,	// (0x0002aa07) slider_set_pane_vc

0x181f,	// (0x00027f27) volume_set_pane_vc_g1

0x1828,	// (0x00027f30) volume_set_pane_vc_g2

0x1831,	// (0x00027f39) volume_set_pane_vc_g3

0x183a,	// (0x00027f42) volume_set_pane_vc_g4

0x1843,	// (0x00027f4b) volume_set_pane_vc_g5

0x184c,	// (0x00027f54) volume_set_pane_vc_g6

0x1855,	// (0x00027f5d) volume_set_pane_vc_g7

0x185e,	// (0x00027f66) volume_set_pane_vc_g8

0x1867,	// (0x00027f6f) volume_set_pane_vc_g9

0x1870,	// (0x00027f78) volume_set_pane_vc_g10

0x0009,

0xfa1a,	// (0x00036122) volume_set_pane_vc_g

0x4309,	// (0x0002aa11) volume_set_pane_vc

0x4313,	// (0x0002aa1b) button_value_adjust_pane_cp1_vc

0x431d,	// (0x0002aa25) list_highlight_pane_cp2_vc

0x4326,	// (0x0002aa2e) list_set_pane_vc_ParamLimits

0x4326,	// (0x0002aa2e) list_set_pane_vc

0x4396,	// (0x0002aa9e) main_pane_set_vc_t1_ParamLimits

0x4396,	// (0x0002aa9e) main_pane_set_vc_t1

0x43ab,	// (0x0002aab3) main_pane_set_vc_t2_ParamLimits

0x43ab,	// (0x0002aab3) main_pane_set_vc_t2

0x43bd,	// (0x0002aac5) main_pane_set_vc_t3_ParamLimits

0x43bd,	// (0x0002aac5) main_pane_set_vc_t3

0x43d1,	// (0x0002aad9) main_pane_set_vc_t4_ParamLimits

0x43d1,	// (0x0002aad9) main_pane_set_vc_t4

0x0003,

0xfa2f,	// (0x00036137) main_pane_set_vc_t_ParamLimits

0xfa2f,	// (0x00036137) main_pane_set_vc_t

0x43e5,	// (0x0002aaed) setting_code_pane_vc_ParamLimits

0x43e5,	// (0x0002aaed) setting_code_pane_vc

0x43f6,	// (0x0002aafe) setting_slider_graphic_pane_vc

0x43f6,	// (0x0002aafe) setting_slider_pane_vc

0x43f6,	// (0x0002aafe) setting_text_pane_vc

0x43f6,	// (0x0002aafe) setting_volume_pane_vc

0x4400,	// (0x0002ab08) scroll_pane_cp121_vc

0xc8e9,	// (0x00032ff1) set_content_pane_vc

0x4408,	// (0x0002ab10) button_value_adjust_pane_g1

0x4411,	// (0x0002ab19) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x0003618c) button_value_adjust_pane_g

0x441a,	// (0x0002ab22) form_field_slider_wide_pane_vc_t1_ParamLimits

0x441a,	// (0x0002ab22) form_field_slider_wide_pane_vc_t1

0x442c,	// (0x0002ab34) form_field_slider_wide_pane_vc_t2_ParamLimits

0x442c,	// (0x0002ab34) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x00036191) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x00036191) form_field_slider_wide_pane_vc_t

0x9ae7,	// (0x000301ef) input_focus_pane_cp10_vc_ParamLimits

0x9ae7,	// (0x000301ef) input_focus_pane_cp10_vc

0x4458,	// (0x0002ab60) slider_cont_pane_cp1_vc_ParamLimits

0x4458,	// (0x0002ab60) slider_cont_pane_cp1_vc

0x446a,	// (0x0002ab72) slider_form_pane_g1_cp2

0x4278,	// (0x0002a980) slider_form_pane_g2_cp2

0x4497,	// (0x0002ab9f) form_field_slider_pane_vc_t3

0x44a5,	// (0x0002abad) form_field_slider_pane_vc_t4

0x44b3,	// (0x0002abbb) slider_form_pane_vc_ParamLimits

0x44b3,	// (0x0002abbb) slider_form_pane_vc

0x44c0,	// (0x0002abc8) form_field_slider_pane_vc_t1_ParamLimits

0x44c0,	// (0x0002abc8) form_field_slider_pane_vc_t1

0x442c,	// (0x0002ab34) form_field_slider_pane_vc_t2_ParamLimits

0x442c,	// (0x0002ab34) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x000361a3) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x000361a3) form_field_slider_pane_vc_t

0x9ae7,	// (0x000301ef) input_focus_pane_cp9_vc_ParamLimits

0x9ae7,	// (0x000301ef) input_focus_pane_cp9_vc

0x44d6,	// (0x0002abde) slider_cont_pane_vc_ParamLimits

0x44d6,	// (0x0002abde) slider_cont_pane_vc

0x44ea,	// (0x0002abf2) list_form_graphic_pane_cp_vc_ParamLimits

0x44ea,	// (0x0002abf2) list_form_graphic_pane_cp_vc

0x1515,	// (0x00027c1d) form_field_popup_wide_pane_vc_g1

0x44ff,	// (0x0002ac07) form_field_popup_wide_pane_vc_t1_ParamLimits

0x44ff,	// (0x0002ac07) form_field_popup_wide_pane_vc_t1

0xc90f,	// (0x00033017) input_focus_pane_cp8_vc_ParamLimits

0xc90f,	// (0x00033017) input_focus_pane_cp8_vc

0x4544,	// (0x0002ac4c) list_form_wide_pane_vc_ParamLimits

0x4544,	// (0x0002ac4c) list_form_wide_pane_vc

0x4550,	// (0x0002ac58) list_form_graphic_pane_vc_g1

0x4558,	// (0x0002ac60) list_form_graphic_pane_vc_t1_ParamLimits

0x4558,	// (0x0002ac60) list_form_graphic_pane_vc_t1

0x9b29,	// (0x00030231) list_highlight_pane_cp5_vc_ParamLimits

0x9b29,	// (0x00030231) list_highlight_pane_cp5_vc

0x4574,	// (0x0002ac7c) list_form_graphic_pane_vc_ParamLimits

0x4574,	// (0x0002ac7c) list_form_graphic_pane_vc

0x1515,	// (0x00027c1d) form_field_popup_pane_vc_g1

0x458a,	// (0x0002ac92) form_field_popup_pane_vc_t1_ParamLimits

0x458a,	// (0x0002ac92) form_field_popup_pane_vc_t1

0xc90f,	// (0x00033017) input_focus_pane_cp7_vc_ParamLimits

0xc90f,	// (0x00033017) input_focus_pane_cp7_vc

0x45a1,	// (0x0002aca9) list_form_pane_vc_ParamLimits

0x45a1,	// (0x0002aca9) list_form_pane_vc

0x45ad,	// (0x0002acb5) data_form_pane_vc_t1_ParamLimits

0x45ad,	// (0x0002acb5) data_form_pane_vc_t1

0xc96a,	// (0x00033072) input_focus_pane_vc_g1

0xc972,	// (0x0003307a) input_focus_pane_vc_g2

0xc97a,	// (0x00033082) input_focus_pane_vc_g3

0xc982,	// (0x0003308a) input_focus_pane_vc_g4

0xc98a,	// (0x00033092) input_focus_pane_vc_g5

0xc992,	// (0x0003309a) input_focus_pane_vc_g6

0xc99a,	// (0x000330a2) input_focus_pane_vc_g7

0xc9a2,	// (0x000330aa) input_focus_pane_vc_g8

0xc9aa,	// (0x000330b2) input_focus_pane_vc_g9

0x97b8,	// (0x0002fec0) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x00035d94) input_focus_pane_vc_g

0x1509,	// (0x00027c11) data_form_pane_vc_ParamLimits

0x1509,	// (0x00027c11) data_form_pane_vc

0x1515,	// (0x00027c1d) form_field_data_pane_vc_g1

0x45ca,	// (0x0002acd2) form_field_data_pane_vc_t1_ParamLimits

0x45ca,	// (0x0002acd2) form_field_data_pane_vc_t1

0xc90f,	// (0x00033017) input_focus_pane_vc_ParamLimits

0xc90f,	// (0x00033017) input_focus_pane_vc

0x45e4,	// (0x0002acec) button_value_adjust_pane_cp3_vc

0x45ec,	// (0x0002acf4) button_value_adjust_pane_cp5_vc

0x45f4,	// (0x0002acfc) form_field_data_pane_vc_ParamLimits

0x45f4,	// (0x0002acfc) form_field_data_pane_vc

0x460f,	// (0x0002ad17) form_field_data_pane_vc_cp2

0x4617,	// (0x0002ad1f) form_field_data_wide_pane_vc_ParamLimits

0x4617,	// (0x0002ad1f) form_field_data_wide_pane_vc

0x4631,	// (0x0002ad39) form_field_data_wide_pane_vc_cp2

0x4639,	// (0x0002ad41) form_field_popup_pane_vc_ParamLimits

0x4639,	// (0x0002ad41) form_field_popup_pane_vc

0x4654,	// (0x0002ad5c) form_field_popup_wide_pane_vc_ParamLimits

0x4654,	// (0x0002ad5c) form_field_popup_wide_pane_vc

0x466e,	// (0x0002ad76) form_field_slider_pane_vc_ParamLimits

0x466e,	// (0x0002ad76) form_field_slider_pane_vc

0x4681,	// (0x0002ad89) form_field_slider_wide_pane_vc_ParamLimits

0x4681,	// (0x0002ad89) form_field_slider_wide_pane_vc

0xbd38,	// (0x00032440) grid_touch_1_pane_ParamLimits

0xbd38,	// (0x00032440) grid_touch_1_pane

0xbd4c,	// (0x00032454) grid_touch_2_pane_ParamLimits

0xbd4c,	// (0x00032454) grid_touch_2_pane

0x4752,	// (0x0002ae5a) touch_pane_g1_ParamLimits

0x4752,	// (0x0002ae5a) touch_pane_g1

0x46ba,	// (0x0002adc2) cell_app_pane_cp_wide_ParamLimits

0x46ba,	// (0x0002adc2) cell_app_pane_cp_wide

0x46cb,	// (0x0002add3) grid_popup_fast_wide_pane_ParamLimits

0x46cb,	// (0x0002add3) grid_popup_fast_wide_pane

0x46df,	// (0x0002ade7) scroll_pane_cp19_ParamLimits

0x46df,	// (0x0002ade7) scroll_pane_cp19

0x98a8,	// (0x0002ffb0) bg_popup_window_pane_cp20

0x46f3,	// (0x0002adfb) listscroll_popup_fast_wide_pane

0xd274,	// (0x0003397c) grid_indicator_nsta_pane

0x46fb,	// (0x0002ae03) clock_nsta_pane_g1

0x4704,	// (0x0002ae0c) clock_nsta_pane_t1

0xbd78,	// (0x00032480) cell_indicator_nsta_pane_ParamLimits

0xbd78,	// (0x00032480) cell_indicator_nsta_pane

0x4752,	// (0x0002ae5a) cell_indicator_nsta_pane_g1

0xbd91,	// (0x00032499) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x000361b4) cell_indicator_nsta_pane_g

0x4776,	// (0x0002ae7e) clock_nsta_pane_cp

0x477e,	// (0x0002ae86) indicator_nsta_pane_cp

0x4787,	// (0x0002ae8f) nsta_clock_indic_pane_g1

0x9c25,	// (0x0003032d) grid_indicator_pane

0xcd84,	// (0x0003348c) scroll_pane_cp29

0x0060,	// (0x00026768) indicator_nsta_pane_cp2_ParamLimits

0x0060,	// (0x00026768) indicator_nsta_pane_cp2

0x9b29,	// (0x00030231) main_apps_wheel_pane

0x16fc,	// (0x00027e04) form_midp_field_text_pane_ParamLimits

0x2ab7,	// (0x000291bf) scroll_bar_cp050_ParamLimits

0x47f0,	// (0x0002aef8) cell_indicator_pane_ParamLimits

0x47f0,	// (0x0002aef8) cell_indicator_pane

0x4808,	// (0x0002af10) cell_indicator_pane_g1

0xbda7,	// (0x000324af) grid_wheel_folder_pane_ParamLimits

0xbda7,	// (0x000324af) grid_wheel_folder_pane

0xbdb5,	// (0x000324bd) list_wheel_apps_pane_ParamLimits

0xbdb5,	// (0x000324bd) list_wheel_apps_pane

0xbdc3,	// (0x000324cb) main_apps_wheel_pane_g1_ParamLimits

0xbdc3,	// (0x000324cb) main_apps_wheel_pane_g1

0xbdd3,	// (0x000324db) main_apps_wheel_pane_g2_ParamLimits

0xbdd3,	// (0x000324db) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x000361d0) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x000361d0) main_apps_wheel_pane_g

0xbde3,	// (0x000324eb) main_apps_wheel_pane_t1_ParamLimits

0xbde3,	// (0x000324eb) main_apps_wheel_pane_t1

0xbdfb,	// (0x00032503) list_wheel_apps_pane_g1

0xbe03,	// (0x0003250b) list_wheel_apps_pane_g2

0xbe0b,	// (0x00032513) list_wheel_apps_pane_g3

0xbe13,	// (0x0003251b) list_wheel_apps_pane_g4

0xbe1b,	// (0x00032523) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x000361d5) list_wheel_apps_pane_g

0xd104,	// (0x0003380c) navi_icon_text_pane

0xb133,	// (0x0003183b) aid_fill_nsta

0xbe38,	// (0x00032540) navi_icon_text_pane_g1

0xbe44,	// (0x0003254c) navi_icon_text_pane_t1

0xa671,	// (0x00030d79) list_set_graphic_pane_t1_ParamLimits

0xa671,	// (0x00030d79) list_set_graphic_pane_t1

0x3208,	// (0x00029910) popup_midp_note_alarm_window_t6_ParamLimits

0x3208,	// (0x00029910) popup_midp_note_alarm_window_t6

0x321a,	// (0x00029922) popup_midp_note_alarm_window_t7_ParamLimits

0x321a,	// (0x00029922) popup_midp_note_alarm_window_t7

0x322c,	// (0x00029934) popup_midp_note_alarm_window_t8_ParamLimits

0x322c,	// (0x00029934) popup_midp_note_alarm_window_t8

0x323e,	// (0x00029946) popup_midp_note_alarm_window_t9_ParamLimits

0x323e,	// (0x00029946) popup_midp_note_alarm_window_t9

0x3250,	// (0x00029958) popup_midp_note_alarm_window_t10_ParamLimits

0x3250,	// (0x00029958) popup_midp_note_alarm_window_t10

0x3262,	// (0x0002996a) popup_midp_note_alarm_window_t11_ParamLimits

0x3262,	// (0x0002996a) popup_midp_note_alarm_window_t11

0x3274,	// (0x0002997c) scroll_pane_cp17_ParamLimits

0x3274,	// (0x0002997c) scroll_pane_cp17

0x181f,	// (0x00027f27) volume_small_pane_cp_g1

0x1b30,	// (0x00028238) volume_small_pane_cp_g2

0x1b39,	// (0x00028241) volume_small_pane_cp_g3

0x1b42,	// (0x0002824a) volume_small_pane_cp_g4

0x1b4b,	// (0x00028253) volume_small_pane_cp_g5

0x1b54,	// (0x0002825c) volume_small_pane_cp_g6

0x1b5d,	// (0x00028265) volume_small_pane_cp_g7

0x1b66,	// (0x0002826e) volume_small_pane_cp_g8

0x1b6f,	// (0x00028277) volume_small_pane_cp_g9

0x1b78,	// (0x00028280) volume_small_pane_cp_g10

0x0319,	// (0x00026a21) midp_ticker_pane_g1_ParamLimits

0x0325,	// (0x00026a2d) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x00035e60) midp_ticker_pane_g_ParamLimits

0xa7af,	// (0x00030eb7) midp_ticker_pane_t1_ParamLimits

0xb157,	// (0x0003185f) aid_fill_nsta_2

0x2aa3,	// (0x000291ab) list_form2_midp_pane

0x3c0b,	// (0x0002a313) midp_editing_number_pane_ParamLimits

0x3c1a,	// (0x0002a322) midp_ticker_pane_ParamLimits

0x48fb,	// (0x0002b003) form2_midp_field_pane

0x491f,	// (0x0002b027) scroll_pane_cp51

0x493f,	// (0x0002b047) form2_midp_button_pane_ParamLimits

0x493f,	// (0x0002b047) form2_midp_button_pane

0x4951,	// (0x0002b059) form2_midp_content_pane_ParamLimits

0x4951,	// (0x0002b059) form2_midp_content_pane

0x496b,	// (0x0002b073) form2_midp_field_choice_group_pane

0x4973,	// (0x0002b07b) form2_midp_field_pane_g1

0x497b,	// (0x0002b083) form2_midp_field_pane_g2

0x4983,	// (0x0002b08b) form2_midp_field_pane_g3

0x498b,	// (0x0002b093) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x000361fa) form2_midp_field_pane_g

0x4993,	// (0x0002b09b) form2_midp_gauge_slider_pane

0x499b,	// (0x0002b0a3) form2_midp_gauge_wait_pane

0x49a3,	// (0x0002b0ab) form2_midp_image_pane_ParamLimits

0x49a3,	// (0x0002b0ab) form2_midp_image_pane

0x49be,	// (0x0002b0c6) form2_midp_label_pane_ParamLimits

0x49be,	// (0x0002b0c6) form2_midp_label_pane

0xbe72,	// (0x0003257a) form2_midp_label_pane_cp_ParamLimits

0xbe72,	// (0x0003257a) form2_midp_label_pane_cp

0x49fe,	// (0x0002b106) form2_midp_string_pane_ParamLimits

0x49fe,	// (0x0002b106) form2_midp_string_pane

0xedb7,	// (0x000354bf) form2_midp_text_pane_ParamLimits

0xedb7,	// (0x000354bf) form2_midp_text_pane

0x4a10,	// (0x0002b118) form2_midp_time_pane

0x4a20,	// (0x0002b128) input_focus_pane_cp51_ParamLimits

0x4a20,	// (0x0002b128) input_focus_pane_cp51

0x4a38,	// (0x0002b140) form2_midp_label_pane_t1_ParamLimits

0x4a38,	// (0x0002b140) form2_midp_label_pane_t1

0xedd8,	// (0x000354e0) form2_mdip_text_pane_t1_ParamLimits

0xedd8,	// (0x000354e0) form2_mdip_text_pane_t1

0xedfc,	// (0x00035504) form2_midp_time_pane_t1

0x4a86,	// (0x0002b18e) form2_midp_gauge_slider_pane_t1

0xbe93,	// (0x0003259b) form2_midp_gauge_slider_pane_t2

0xbea5,	// (0x000325ad) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x00036203) form2_midp_gauge_slider_pane_t

0x4abc,	// (0x0002b1c4) form2_midp_slider_pane

0x4ac8,	// (0x0002b1d0) form2_midp_gauge_wait_pane_t1

0x4ad6,	// (0x0002b1de) form2_midp_wait_pane_ParamLimits

0x4ad6,	// (0x0002b1de) form2_midp_wait_pane

0x155c,	// (0x00027c64) list_single_2graphic_pane_cp4_ParamLimits

0x155c,	// (0x00027c64) list_single_2graphic_pane_cp4

0x4b01,	// (0x0002b209) list_single_midp_graphic_pane_cp_ParamLimits

0x4b01,	// (0x0002b209) list_single_midp_graphic_pane_cp

0x98a8,	// (0x0002ffb0) list_highlight_pane_cp20

0x4b25,	// (0x0002b22d) list_single_2graphic_pane_g1_cp4

0x40c2,	// (0x0002a7ca) list_single_2graphic_pane_g2_cp4

0x4b2d,	// (0x0002b235) list_single_2graphic_pane_t1_cp4

0x9b29,	// (0x00030231) list_highlight_pane_cp21

0x4b3c,	// (0x0002b244) list_single_midp_graphic_pane_g4_cp

0x4b4b,	// (0x0002b253) list_single_midp_graphic_pane_t1_cp

0xbeb7,	// (0x000325bf) form2_mdip_string_pane_t1_ParamLimits

0xbeb7,	// (0x000325bf) form2_mdip_string_pane_t1

0x98a8,	// (0x0002ffb0) bg_wml_button_pane_cp2

0x97b8,	// (0x0002fec0) form2_midp_image_pane_g1

0xe840,	// (0x00034f48) list_double_large_graphic_pane_g5_ParamLimits

0xe840,	// (0x00034f48) list_double_large_graphic_pane_g5

0x07b9,	// (0x00026ec1) midp_form_pane_ParamLimits

0x9b29,	// (0x00030231) main_apps_wheel_pane_ParamLimits

0xae4b,	// (0x00031553) popup_preview_window_ParamLimits

0xae4b,	// (0x00031553) popup_preview_window

0x0d81,	// (0x00027489) popup_touch_info_window_ParamLimits

0x0d81,	// (0x00027489) popup_touch_info_window

0x0da3,	// (0x000274ab) popup_touch_menu_window_ParamLimits

0x0da3,	// (0x000274ab) popup_touch_menu_window

0x97ae,	// (0x0002feb6) bg_popup_sub_pane_cp6

0x4c05,	// (0x0002b30d) list_touch_menu_pane

0x4c0d,	// (0x0002b315) list_single_touch_menu_pane_ParamLimits

0x4c0d,	// (0x0002b315) list_single_touch_menu_pane

0x4c25,	// (0x0002b32d) list_single_touch_menu_pane_t1

0x9b29,	// (0x00030231) bg_popup_sub_pane_cp7_ParamLimits

0x9b29,	// (0x00030231) bg_popup_sub_pane_cp7

0x4c33,	// (0x0002b33b) heading_sub_pane

0x4c3b,	// (0x0002b343) list_touch_info_pane_ParamLimits

0x4c3b,	// (0x0002b343) list_touch_info_pane

0x4c4a,	// (0x0002b352) list_single_touch_info_pane_ParamLimits

0x4c4a,	// (0x0002b352) list_single_touch_info_pane

0x4c5c,	// (0x0002b364) list_single_touch_info_pane_t1

0x4c6a,	// (0x0002b372) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x00036211) list_single_touch_info_pane_t

0xd260,	// (0x00033968) bg_popup_heading_pane_cp

0x4c78,	// (0x0002b380) heading_sub_pane_t1

0x1415,	// (0x00027b1d) bg_popup_preview_window_pane_cp_ParamLimits

0x1415,	// (0x00027b1d) bg_popup_preview_window_pane_cp

0x4c33,	// (0x0002b33b) heading_preview_pane

0x4c3b,	// (0x0002b343) list_preview_pane_ParamLimits

0x4c3b,	// (0x0002b343) list_preview_pane

0x4c86,	// (0x0002b38e) popup_preview_window_g1

0x4c4a,	// (0x0002b352) list_single_preview_pane_ParamLimits

0x4c4a,	// (0x0002b352) list_single_preview_pane

0x4c8e,	// (0x0002b396) list_single_preview_pane_g1

0x4c96,	// (0x0002b39e) list_single_preview_pane_t1

0x4c5c,	// (0x0002b364) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x00036216) list_single_preview_pane_t

0x4ca4,	// (0x0002b3ac) bg_popup_heading_pane_cp2_ParamLimits

0x4ca4,	// (0x0002b3ac) bg_popup_heading_pane_cp2

0x4cba,	// (0x0002b3c2) heading_preview_pane_g1

0x4cc2,	// (0x0002b3ca) heading_preview_pane_t1_ParamLimits

0x4cc2,	// (0x0002b3ca) heading_preview_pane_t1

0x9c55,	// (0x0003035d) soft_indicator_pane_t1_ParamLimits

0xa370,	// (0x00030a78) scroll_pane_ParamLimits

0xcc80,	// (0x00033388) scroll_sc2_left_pane

0xcc89,	// (0x00033391) scroll_sc2_right_pane

0xcca8,	// (0x000333b0) scroll_bg_pane_g1_ParamLimits

0xccbd,	// (0x000333c5) scroll_bg_pane_g2_ParamLimits

0xccd5,	// (0x000333dd) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x00035deb) scroll_bg_pane_g_ParamLimits

0xcca8,	// (0x000333b0) scroll_handle_pane_g1_ParamLimits

0xccf7,	// (0x000333ff) scroll_handle_pane_g2_ParamLimits

0xccd5,	// (0x000333dd) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x00035df2) scroll_handle_pane_g_ParamLimits

0x07e1,	// (0x00026ee9) popup_choice_list_window_ParamLimits

0x07e1,	// (0x00026ee9) popup_choice_list_window

0x1244,	// (0x0002794c) choice_list_pane

0x12f6,	// (0x000279fe) cell_toolbar_pane_t1

0x131e,	// (0x00027a26) toolbar_button_pane_ParamLimits

0x373e,	// (0x00029e46) ai_gene_pane_1_t2_ParamLimits

0x373e,	// (0x00029e46) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x00036015) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x00036015) ai_gene_pane_1_t

0x4cdf,	// (0x0002b3e7) scroll_sc2_left_pane_g1

0x4cdf,	// (0x0002b3e7) scroll_sc2_right_pane_g1

0x07b9,	// (0x00026ec1) bg_popup_sub_pane_cp10

0x4ce9,	// (0x0002b3f1) list_choice_list_pane

0x4d02,	// (0x0002b40a) list_single_choice_list_pane_ParamLimits

0x4d02,	// (0x0002b40a) list_single_choice_list_pane

0x4d1a,	// (0x0002b422) list_single_choice_list_pane_g1

0xca60,	// (0x00033168) list_single_choice_list_pane_t1_ParamLimits

0xca60,	// (0x00033168) list_single_choice_list_pane_t1

0x4d22,	// (0x0002b42a) choice_list_pane_g1

0x4d2a,	// (0x0002b432) choice_list_pane_t1

0x97ae,	// (0x0002feb6) input_focus_pane_cp11

0xcbde,	// (0x000332e6) title_pane_stacon_g2_ParamLimits

0xcbde,	// (0x000332e6) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x00035dd1) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00035dd1) title_pane_stacon_g

0xd260,	// (0x00033968) cursor_press_pane

0xaac8,	// (0x000311d0) popup_fep_hwr_window_ParamLimits

0xaac8,	// (0x000311d0) popup_fep_hwr_window

0x0925,	// (0x0002702d) popup_fep_vkb_window_ParamLimits

0x0925,	// (0x0002702d) popup_fep_vkb_window

0x4d38,	// (0x0002b440) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x0003623f) fep_vkb_side_pane_g_ParamLimits

0x1bac,	// (0x000282b4) fep_hwr_candidate_pane_ParamLimits

0x1bac,	// (0x000282b4) fep_hwr_candidate_pane

0x1bd6,	// (0x000282de) fep_hwr_side_pane_ParamLimits

0x1bd6,	// (0x000282de) fep_hwr_side_pane

0x1bf8,	// (0x00028300) fep_hwr_top_pane_ParamLimits

0x1bf8,	// (0x00028300) fep_hwr_top_pane

0x1c10,	// (0x00028318) fep_hwr_write_pane_ParamLimits

0x1c10,	// (0x00028318) fep_hwr_write_pane

0xfb37,	// (0x0003623f) fep_vkb_side_pane_g

0x4d40,	// (0x0002b448) fep_hwr_top_pane_g1

0x4d52,	// (0x0002b45a) fep_hwr_top_pane_g2

0x1c3c,	// (0x00028344) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x0003621b) fep_hwr_top_pane_g

0x1c51,	// (0x00028359) fep_hwr_top_text_pane

0xcdf1,	// (0x000334f9) fep_hwr_top_text_pane_g1

0x4d88,	// (0x0002b490) fep_hwr_top_text_pane_t1

0x1d5b,	// (0x00028463) fep_hwr_candidate_pane_g1

0x4fd3,	// (0x0002b6db) fep_vkb_keypad_pane_g3_ParamLimits

0x4fd3,	// (0x0002b6db) fep_vkb_keypad_pane_g3

0x4fff,	// (0x0002b707) fep_vkb_keypad_pane_g4_ParamLimits

0x4fff,	// (0x0002b707) fep_vkb_keypad_pane_g4

0x5076,	// (0x0002b77e) fep_vkb_bottom_pane_g2_ParamLimits

0x5076,	// (0x0002b77e) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x00036246) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x00036246) fep_vkb_bottom_pane_g

0x4cdf,	// (0x0002b3e7) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x00036250) cell_vkb_side_pane_g

0x5101,	// (0x0002b809) cell_vkb_side_pane_t1

0x510f,	// (0x0002b817) cell_vkb_side_pane_t1_copy1

0x4cdf,	// (0x0002b3e7) bg_fep_vkb_candidate_pane_g2

0x5253,	// (0x0002b95b) cell_vkb_candidate_pane_ParamLimits

0x4d96,	// (0x0002b49e) aid_size_cell_vkb_ParamLimits

0x4d96,	// (0x0002b49e) aid_size_cell_vkb

0x5253,	// (0x0002b95b) cell_vkb_candidate_pane

0x1d75,	// (0x0002847d) bg_popup_fep_shadow_pane_g1

0xbfd4,	// (0x000326dc) fep_vkb_bottom_pane_ParamLimits

0xbfd4,	// (0x000326dc) fep_vkb_bottom_pane

0x4e65,	// (0x0002b56d) fep_vkb_candidate_pane_ParamLimits

0x4e65,	// (0x0002b56d) fep_vkb_candidate_pane

0xc000,	// (0x00032708) fep_vkb_keypad_pane_ParamLimits

0xc000,	// (0x00032708) fep_vkb_keypad_pane

0xc027,	// (0x0003272f) fep_vkb_side_pane_ParamLimits

0xc027,	// (0x0003272f) fep_vkb_side_pane

0xc063,	// (0x0003276b) fep_vkb_top_pane_ParamLimits

0xc063,	// (0x0003276b) fep_vkb_top_pane

0x4f2c,	// (0x0002b634) fep_vkb_top_pane_g1_ParamLimits

0x4f2c,	// (0x0002b634) fep_vkb_top_pane_g1

0x4f3b,	// (0x0002b643) fep_vkb_top_pane_g2_ParamLimits

0x4f3b,	// (0x0002b643) fep_vkb_top_pane_g2

0x4f4a,	// (0x0002b652) fep_vkb_top_pane_g3_ParamLimits

0x4f4a,	// (0x0002b652) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x00036236) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x00036236) fep_vkb_top_pane_g

0x4f68,	// (0x0002b670) fep_vkb_top_text_pane_ParamLimits

0x4f68,	// (0x0002b670) fep_vkb_top_text_pane

0xc09f,	// (0x000327a7) fep_vkb_side_pane_g1_ParamLimits

0xc09f,	// (0x000327a7) fep_vkb_side_pane_g1

0x4fc2,	// (0x0002b6ca) grid_vkb_side_pane_ParamLimits

0x4fc2,	// (0x0002b6ca) grid_vkb_side_pane

0x1d7d,	// (0x00028485) bg_popup_fep_shadow_pane_g2

0x1d86,	// (0x0002848e) bg_popup_fep_shadow_pane_g3

0x1d8e,	// (0x00028496) bg_popup_fep_shadow_pane_g4

0x1d97,	// (0x0002849f) bg_popup_fep_shadow_pane_g5

0x1da1,	// (0x000284a9) bg_popup_fep_shadow_pane_g6

0x1da9,	// (0x000284b1) bg_popup_fep_shadow_pane_g7

0xc98a,	// (0x00033092) bg_popup_fep_shadow_pane_g8

0x5021,	// (0x0002b729) grid_vkb_keypad_number_pane_ParamLimits

0x5021,	// (0x0002b729) grid_vkb_keypad_number_pane

0x5035,	// (0x0002b73d) grid_vkb_keypad_pane_ParamLimits

0x5035,	// (0x0002b73d) grid_vkb_keypad_pane

0x505b,	// (0x0002b763) fep_vkb_bottom_pane_g1_ParamLimits

0x505b,	// (0x0002b763) fep_vkb_bottom_pane_g1

0x5084,	// (0x0002b78c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5084,	// (0x0002b78c) grid_vkb_keypad_bottom_left_pane

0x5099,	// (0x0002b7a1) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5099,	// (0x0002b7a1) grid_vkb_keypad_bottom_right_pane

0x50ae,	// (0x0002b7b6) fep_vkb_top_text_pane_g1

0xc0e6,	// (0x000327ee) fep_vkb_top_text_pane_t1

0xc0f8,	// (0x00032800) cell_vkb_side_pane_ParamLimits

0xc0f8,	// (0x00032800) cell_vkb_side_pane

0x4cdf,	// (0x0002b3e7) cell_vkb_side_pane_g1

0x511d,	// (0x0002b825) cell_vkb_keypad_pane_ParamLimits

0x511d,	// (0x0002b825) cell_vkb_keypad_pane

0x51aa,	// (0x0002b8b2) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x00036263) bg_popup_fep_shadow_pane_g

0x4cdf,	// (0x0002b3e7) cell_hwr_side_pane_g1

0x4cdf,	// (0x0002b3e7) cell_hwr_side_pane_g2

0x51b4,	// (0x0002b8bc) cell_vkb_keypad_pane_t1

0xc10e,	// (0x00032816) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc10e,	// (0x00032816) cell_vkb_keypad_bottom_left_pane

0xc123,	// (0x0003282b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc123,	// (0x0003282b) cell_vkb_keypad_bottom_right_pane

0x4cdf,	// (0x0002b3e7) cell_vkb_keypad_bottom_left_pane_g1

0x4cdf,	// (0x0002b3e7) cell_vkb_keypad_bottom_right_pane_g1

0x5218,	// (0x0002b920) cell_vkb_keypad_number_pane_ParamLimits

0x5218,	// (0x0002b920) cell_vkb_keypad_number_pane

0x5237,	// (0x0002b93f) cell_vkb_keypad_number_pane_g1

0x5241,	// (0x0002b949) cell_vkb_keypad_number_pane_g2

0x524a,	// (0x0002b952) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x00036255) cell_vkb_keypad_number_pane_g

0x51b4,	// (0x0002b8bc) cell_vkb_keypad_number_pane_t1

0x5274,	// (0x0002b97c) fep_vkb_candidate_pane_g1

0x0001,

0xfb48,	// (0x00036250) cell_hwr_side_pane_g

0x528d,	// (0x0002b995) cell_hwr_side_pane_t1

0x1dbb,	// (0x000284c3) cell_hwr_side_pane_t1_copy1

0x4f5a,	// (0x0002b662) cell_hwr_candidate_pane_g1

0x1dc9,	// (0x000284d1) cell_hwr_candidate_pane_t1

0x4cdf,	// (0x0002b3e7) cell_vkb_candidate_pane_g2

0x5313,	// (0x0002ba1b) cell_vkb_candidate_pane_t1

0x84fc,	// (0x0002ec04) bg_popup_fep_shadow_pane_ParamLimits

0x84fc,	// (0x0002ec04) bg_popup_fep_shadow_pane

0xbf4d,	// (0x00032655) bg_fep_hwr_top_pane_g4

0x4d64,	// (0x0002b46c) bg_hwr_side_pane_g1_ParamLimits

0x4d64,	// (0x0002b46c) bg_hwr_side_pane_g1

0xbf73,	// (0x0003267b) cell_hwr_side_pane_ParamLimits

0xbf73,	// (0x0003267b) cell_hwr_side_pane

0x1ccc,	// (0x000283d4) fep_hwr_write_pane_g1_ParamLimits

0x1ccc,	// (0x000283d4) fep_hwr_write_pane_g1

0x1cd9,	// (0x000283e1) fep_hwr_write_pane_g2_ParamLimits

0x1cd9,	// (0x000283e1) fep_hwr_write_pane_g2

0x1ce6,	// (0x000283ee) fep_hwr_write_pane_g3_ParamLimits

0x1ce6,	// (0x000283ee) fep_hwr_write_pane_g3

0xbf93,	// (0x0003269b) fep_hwr_write_pane_g4_ParamLimits

0xbf93,	// (0x0003269b) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x00036222) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x00036222) fep_hwr_write_pane_g

0xbf4d,	// (0x00032655) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xbf4d,	// (0x00032655) bg_fep_hwr_candidate_pane_g2

0x1d09,	// (0x00028411) cell_hwr_candidate_pane_ParamLimits

0x1d09,	// (0x00028411) cell_hwr_candidate_pane

0x1d5b,	// (0x00028463) fep_hwr_candidate_pane_g1_ParamLimits

0x4dc4,	// (0x0002b4cc) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4dc4,	// (0x0002b4cc) bg_popup_fep_shadow_pane_cp2

0x4f5a,	// (0x0002b662) fep_vkb_top_pane_g4_ParamLimits

0x4f5a,	// (0x0002b662) fep_vkb_top_pane_g4

0x4fa0,	// (0x0002b6a8) fep_vkb_side_pane_g2_ParamLimits

0x4fa0,	// (0x0002b6a8) fep_vkb_side_pane_g2

0x9262,	// (0x0002f96a) list_setting_pane_t4_ParamLimits

0x9262,	// (0x0002f96a) list_setting_pane_t4

0x92f6,	// (0x0002f9fe) list_setting_number_pane_t5_ParamLimits

0x92f6,	// (0x0002f9fe) list_setting_number_pane_t5

0xa56c,	// (0x00030c74) list_double_heading_pane_cp2_ParamLimits

0xa56c,	// (0x00030c74) list_double_heading_pane_cp2

0x5321,	// (0x0002ba29) list_double_heading_pane_g1_cp2_ParamLimits

0x5321,	// (0x0002ba29) list_double_heading_pane_g1_cp2

0x532d,	// (0x0002ba35) list_double_heading_pane_g2_cp2_ParamLimits

0x532d,	// (0x0002ba35) list_double_heading_pane_g2_cp2

0x5341,	// (0x0002ba49) list_double_heading_pane_t1_cp2_ParamLimits

0x5341,	// (0x0002ba49) list_double_heading_pane_t1_cp2

0x5357,	// (0x0002ba5f) list_double_heading_pane_t2_cp2_ParamLimits

0x5357,	// (0x0002ba5f) list_double_heading_pane_t2_cp2

0x9796,	// (0x0002fe9e) aid_value_unit2

0xf1d8,	// (0x000358e0) popup_preview_fixed_window

0x9e10,	// (0x00030518) bg_popup_preview_window_pane_cp02

0x5369,	// (0x0002ba71) list_preview_fixed_pane

0x53af,	// (0x0002bab7) list_empty_pane_fp_ParamLimits

0x53af,	// (0x0002bab7) list_empty_pane_fp

0x53af,	// (0x0002bab7) list_single_cale_day_pane_fp_ParamLimits

0x53af,	// (0x0002bab7) list_single_cale_day_pane_fp

0x53af,	// (0x0002bab7) list_single_graphic_heading_pane_fp_ParamLimits

0x53af,	// (0x0002bab7) list_single_graphic_heading_pane_fp

0x53af,	// (0x0002bab7) list_single_graphic_pane_fp_ParamLimits

0x53af,	// (0x0002bab7) list_single_graphic_pane_fp

0x53af,	// (0x0002bab7) list_single_heading_pane_fp_ParamLimits

0x53af,	// (0x0002bab7) list_single_heading_pane_fp

0x53af,	// (0x0002bab7) list_single_pane_fp_ParamLimits

0x53af,	// (0x0002bab7) list_single_pane_fp

0x53c8,	// (0x0002bad0) list_single_pane_fp_g1_ParamLimits

0x53c8,	// (0x0002bad0) list_single_pane_fp_g1

0xee0f,	// (0x00035517) list_single_pane_fp_g2_ParamLimits

0xee0f,	// (0x00035517) list_single_pane_fp_g2

0xee1b,	// (0x00035523) list_single_pane_fp_g3_ParamLimits

0xee1b,	// (0x00035523) list_single_pane_fp_g3

0x53d4,	// (0x0002badc) list_single_pane_fp_g4_ParamLimits

0x53d4,	// (0x0002badc) list_single_pane_fp_g4

0x0003,

0xfb7c,	// (0x00036284) list_single_pane_fp_g_ParamLimits

0xfb7c,	// (0x00036284) list_single_pane_fp_g

0xee2f,	// (0x00035537) list_single_pane_fp_t1_ParamLimits

0xee2f,	// (0x00035537) list_single_pane_fp_t1

0xee46,	// (0x0003554e) list_single_graphic_pane_fp_g1_ParamLimits

0xee46,	// (0x0003554e) list_single_graphic_pane_fp_g1

0x53c8,	// (0x0002bad0) list_single_graphic_pane_fp_g2_ParamLimits

0x53c8,	// (0x0002bad0) list_single_graphic_pane_fp_g2

0xee0f,	// (0x00035517) list_single_graphic_pane_fp_g3_ParamLimits

0xee0f,	// (0x00035517) list_single_graphic_pane_fp_g3

0xee1b,	// (0x00035523) list_single_graphic_pane_fp_g4_ParamLimits

0xee1b,	// (0x00035523) list_single_graphic_pane_fp_g4

0x53d4,	// (0x0002badc) list_single_graphic_pane_fp_g5_ParamLimits

0x53d4,	// (0x0002badc) list_single_graphic_pane_fp_g5

0x0004,

0xfb85,	// (0x0003628d) list_single_graphic_pane_fp_g_ParamLimits

0xfb85,	// (0x0003628d) list_single_graphic_pane_fp_g

0xee52,	// (0x0003555a) list_single_graphic_pane_fp_t1_ParamLimits

0xee52,	// (0x0003555a) list_single_graphic_pane_fp_t1

0xee46,	// (0x0003554e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xee46,	// (0x0003554e) list_single_graphic_heading_pane_fp_g1

0x53c8,	// (0x0002bad0) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x53c8,	// (0x0002bad0) list_single_graphic_heading_pane_fp_g2

0xee0f,	// (0x00035517) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xee0f,	// (0x00035517) list_single_graphic_heading_pane_fp_g3

0xee1b,	// (0x00035523) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xee1b,	// (0x00035523) list_single_graphic_heading_pane_fp_g4

0x53d4,	// (0x0002badc) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x53d4,	// (0x0002badc) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0003628d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0003628d) list_single_graphic_heading_pane_fp_g

0xee68,	// (0x00035570) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xee68,	// (0x00035570) list_single_graphic_heading_pane_fp_t1

0xee7e,	// (0x00035586) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xee7e,	// (0x00035586) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x00036298) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x00036298) list_single_graphic_heading_pane_fp_t

0xee90,	// (0x00035598) list_single_cale_day_pane_fp_g1_ParamLimits

0xee90,	// (0x00035598) list_single_cale_day_pane_fp_g1

0x53e0,	// (0x0002bae8) list_single_cale_day_pane_fp_g2_ParamLimits

0x53e0,	// (0x0002bae8) list_single_cale_day_pane_fp_g2

0xeec8,	// (0x000355d0) list_single_cale_day_pane_fp_g3_ParamLimits

0xeec8,	// (0x000355d0) list_single_cale_day_pane_fp_g3

0xeef0,	// (0x000355f8) list_single_cale_day_pane_fp_g4_ParamLimits

0xeef0,	// (0x000355f8) list_single_cale_day_pane_fp_g4

0xef14,	// (0x0003561c) list_single_cale_day_pane_fp_g5_ParamLimits

0xef14,	// (0x0003561c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb95,	// (0x0003629d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb95,	// (0x0003629d) list_single_cale_day_pane_fp_g

0xef38,	// (0x00035640) list_single_cale_day_pane_fp_t1_ParamLimits

0xef38,	// (0x00035640) list_single_cale_day_pane_fp_t1

0xef5e,	// (0x00035666) list_single_cale_day_pane_fp_t2_ParamLimits

0xef5e,	// (0x00035666) list_single_cale_day_pane_fp_t2

0xef77,	// (0x0003567f) list_single_cale_day_pane_fp_t3_ParamLimits

0xef77,	// (0x0003567f) list_single_cale_day_pane_fp_t3

0x0002,

0xfba0,	// (0x000362a8) list_single_cale_day_pane_fp_t_ParamLimits

0xfba0,	// (0x000362a8) list_single_cale_day_pane_fp_t

0x53c8,	// (0x0002bad0) list_empty_pane_fp_g1_ParamLimits

0x53c8,	// (0x0002bad0) list_empty_pane_fp_g1

0xef90,	// (0x00035698) list_empty_pane_fp_t1

0xef9e,	// (0x000356a6) list_empty_pane_fp_t2

0x0001,

0xfba7,	// (0x000362af) list_empty_pane_fp_t

0x53c8,	// (0x0002bad0) list_single_heading_pane_fp_g1_ParamLimits

0x53c8,	// (0x0002bad0) list_single_heading_pane_fp_g1

0xee0f,	// (0x00035517) list_single_heading_pane_fp_g2_ParamLimits

0xee0f,	// (0x00035517) list_single_heading_pane_fp_g2

0xee1b,	// (0x00035523) list_single_heading_pane_fp_g3_ParamLimits

0xee1b,	// (0x00035523) list_single_heading_pane_fp_g3

0x0002,

0xfbac,	// (0x000362b4) list_single_heading_pane_fp_g_ParamLimits

0xfbac,	// (0x000362b4) list_single_heading_pane_fp_g

0xefac,	// (0x000356b4) list_single_heading_pane_fp_t1_ParamLimits

0xefac,	// (0x000356b4) list_single_heading_pane_fp_t1

0xefbe,	// (0x000356c6) list_single_heading_pane_fp_t2_ParamLimits

0xefbe,	// (0x000356c6) list_single_heading_pane_fp_t2

0x0001,

0xfbb3,	// (0x000362bb) list_single_heading_pane_fp_t_ParamLimits

0xfbb3,	// (0x000362bb) list_single_heading_pane_fp_t

0xca75,	// (0x0003317d) aid_size_cell_fast

0x9d90,	// (0x00030498) soft_indicator_pane_cp1_t1

0xcab2,	// (0x000331ba) cell_app_pane_cp2_ParamLimits

0xcab2,	// (0x000331ba) cell_app_pane_cp2

0x1b95,	// (0x0002829d) fep_hwr_candidate_drop_down_list_pane

0xbfa8,	// (0x000326b0) fep_hwr_candidate_pane_g3_ParamLimits

0xbfa8,	// (0x000326b0) fep_hwr_candidate_pane_g3

0xbfb5,	// (0x000326bd) fep_hwr_candidate_pane_g4_ParamLimits

0xbfb5,	// (0x000326bd) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x0003622f) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x0003622f) fep_hwr_candidate_pane_g

0x4e54,	// (0x0002b55c) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4e54,	// (0x0002b55c) fep_vkb_candidate_drop_down_list_pane

0x527c,	// (0x0002b984) fep_vkb_candidate_pane_g3

0x5284,	// (0x0002b98c) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x0003625c) fep_vkb_candidate_pane_g

0x4f5a,	// (0x0002b662) cell_hwr_candidate_pane_g1_ParamLimits

0x529b,	// (0x0002b9a3) cell_hwr_candidate_pane_g3_ParamLimits

0x529b,	// (0x0002b9a3) cell_hwr_candidate_pane_g3

0x52bc,	// (0x0002b9c4) cell_hwr_candidate_pane_g4_ParamLimits

0x52bc,	// (0x0002b9c4) cell_hwr_candidate_pane_g4

0x0002,

0xfb6e,	// (0x00036276) cell_hwr_candidate_pane_g_ParamLimits

0xfb6e,	// (0x00036276) cell_hwr_candidate_pane_g

0x52dd,	// (0x0002b9e5) cell_vkb_candidate_pane_g3_ParamLimits

0x52dd,	// (0x0002b9e5) cell_vkb_candidate_pane_g3

0x52f8,	// (0x0002ba00) cell_vkb_candidate_pane_g4_ParamLimits

0x52f8,	// (0x0002ba00) cell_vkb_candidate_pane_g4

0x53ec,	// (0x0002baf4) cell_app_pane_cp2_g1_ParamLimits

0x53ec,	// (0x0002baf4) cell_app_pane_cp2_g1

0x540a,	// (0x0002bb12) cell_app_pane_cp2_g2_ParamLimits

0x540a,	// (0x0002bb12) cell_app_pane_cp2_g2

0x0001,

0xfbb8,	// (0x000362c0) cell_app_pane_cp2_g_ParamLimits

0xfbb8,	// (0x000362c0) cell_app_pane_cp2_g

0x5416,	// (0x0002bb1e) cell_app_pane_cp2_t1_ParamLimits

0x5416,	// (0x0002bb1e) cell_app_pane_cp2_t1

0xc90f,	// (0x00033017) grid_highlight_pane_cp1_ParamLimits

0xc90f,	// (0x00033017) grid_highlight_pane_cp1

0x1de7,	// (0x000284ef) cell_hwr_candidate_pane_cp1_ParamLimits

0x1de7,	// (0x000284ef) cell_hwr_candidate_pane_cp1

0x4f5a,	// (0x0002b662) fep_hwr_candidate_drop_down_list_pane_g1

0x5428,	// (0x0002bb30) fep_hwr_candidate_drop_down_list_pane_g2

0x5435,	// (0x0002bb3d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x000362c5) fep_hwr_candidate_drop_down_list_pane_g

0x1e0b,	// (0x00028513) fep_hwr_candidate_drop_down_list_scroll_pane

0x1e14,	// (0x0002851c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1e14,	// (0x0002851c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1e21,	// (0x00028529) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1e21,	// (0x00028529) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1e2e,	// (0x00028536) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1e2e,	// (0x00028536) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x52dd,	// (0x0002b9e5) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x52dd,	// (0x0002b9e5) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x52f8,	// (0x0002ba00) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x52f8,	// (0x0002ba00) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1e3b,	// (0x00028543) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1e3b,	// (0x00028543) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1e56,	// (0x0002855e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1e56,	// (0x0002855e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1e71,	// (0x00028579) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1e71,	// (0x00028579) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc4,	// (0x000362cc) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc4,	// (0x000362cc) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5442,	// (0x0002bb4a) cell_vkb_candidate_pane_cp1_ParamLimits

0x5442,	// (0x0002bb4a) cell_vkb_candidate_pane_cp1

0x4f5a,	// (0x0002b662) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4f5a,	// (0x0002b662) fep_vkb_candidate_drop_down_list_pane_g1

0x5428,	// (0x0002bb30) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5428,	// (0x0002bb30) fep_vkb_candidate_drop_down_list_pane_g2

0x5435,	// (0x0002bb3d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5435,	// (0x0002bb3d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x000362c5) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbd,	// (0x000362c5) fep_vkb_candidate_drop_down_list_pane_g

0x5468,	// (0x0002bb70) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5468,	// (0x0002bb70) fep_vkb_candidate_drop_down_list_scroll_pane

0x5475,	// (0x0002bb7d) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5475,	// (0x0002bb7d) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5482,	// (0x0002bb8a) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5482,	// (0x0002bb8a) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x548e,	// (0x0002bb96) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x548e,	// (0x0002bb96) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x529b,	// (0x0002b9a3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x529b,	// (0x0002b9a3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x52bc,	// (0x0002b9c4) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x52bc,	// (0x0002b9c4) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x549a,	// (0x0002bba2) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x549a,	// (0x0002bba2) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x54bb,	// (0x0002bbc3) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x54bb,	// (0x0002bbc3) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x54dc,	// (0x0002bbe4) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x54dc,	// (0x0002bbe4) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd5,	// (0x000362dd) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd5,	// (0x000362dd) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x99e0,	// (0x000300e8) title_pane_g1_ParamLimits

0x99f3,	// (0x000300fb) title_pane_g2_ParamLimits

0xf54e,	// (0x00035c56) title_pane_g_ParamLimits

0xcde1,	// (0x000334e9) aid_call2_pane

0xcde9,	// (0x000334f1) aid_call_pane

0xcdf1,	// (0x000334f9) popup_clock_analogue_window_g1

0xcdf1,	// (0x000334f9) popup_clock_analogue_window_g2

0xf475,	// (0x00035b7d) popup_clock_analogue_window_g3

0xf47e,	// (0x00035b86) popup_clock_analogue_window_g4

0x97b8,	// (0x0002fec0) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x00035e00) popup_clock_analogue_window_g

0xf486,	// (0x00035b8e) popup_clock_analogue_window_t1

0xf494,	// (0x00035b9c) clock_digital_number_pane_ParamLimits

0xf494,	// (0x00035b9c) clock_digital_number_pane

0xf4a0,	// (0x00035ba8) clock_digital_number_pane_cp02_ParamLimits

0xf4a0,	// (0x00035ba8) clock_digital_number_pane_cp02

0xf4ac,	// (0x00035bb4) clock_digital_number_pane_cp03_ParamLimits

0xf4ac,	// (0x00035bb4) clock_digital_number_pane_cp03

0xf4b8,	// (0x00035bc0) clock_digital_number_pane_cp04_ParamLimits

0xf4b8,	// (0x00035bc0) clock_digital_number_pane_cp04

0xf4c4,	// (0x00035bcc) clock_digital_separator_pane_ParamLimits

0xf4c4,	// (0x00035bcc) clock_digital_separator_pane

0xf4d0,	// (0x00035bd8) popup_clock_digital_window_t1_ParamLimits

0xf4d0,	// (0x00035bd8) popup_clock_digital_window_t1

0x97b8,	// (0x0002fec0) clock_digital_number_pane_g1

0x97b8,	// (0x0002fec0) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x00035e0b) clock_digital_number_pane_g

0x97b8,	// (0x0002fec0) clock_digital_separator_pane_g1

0x97b8,	// (0x0002fec0) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x00035e0b) clock_digital_separator_pane_g

0xb133,	// (0x0003183b) aid_fill_nsta_ParamLimits

0xb26b,	// (0x00031973) indicator_nsta_pane_ParamLimits

0x10d1,	// (0x000277d9) popup_clock_analogue_window

0x10d1,	// (0x000277d9) popup_clock_digital_window

0xd274,	// (0x0003397c) grid_indicator_nsta_pane_ParamLimits

0x4712,	// (0x0002ae1a) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x000361af) clock_nsta_pane_t

0xf442,	// (0x00035b4a) aid_size_max_handle

0xa4df,	// (0x00030be7) aid_size_min_handle

0xd260,	// (0x00033968) editor_scroll_pane

0x54f7,	// (0x0002bbff) ex_editor_pane

0xca3b,	// (0x00033143) scroll_pane_cp13

0xc8ae,	// (0x00032fb6) scroll_pane_cp14

0xce20,	// (0x00033528) scroll_pane_cp36

0xa57f,	// (0x00030c87) list_single_graphic_hl_pane_cp2_ParamLimits

0xa57f,	// (0x00030c87) list_single_graphic_hl_pane_cp2

0xbc0c,	// (0x00032314) list_single_graphic_hl_pane_ParamLimits

0xbc0c,	// (0x00032314) list_single_graphic_hl_pane

0xefd4,	// (0x000356dc) aid_size_min_hl_cp1

0x54ff,	// (0x0002bc07) list_highlight_pane_cp34_ParamLimits

0x54ff,	// (0x0002bc07) list_highlight_pane_cp34

0x5510,	// (0x0002bc18) list_single_graphic_hl_pane_g1_ParamLimits

0x5510,	// (0x0002bc18) list_single_graphic_hl_pane_g1

0x95ad,	// (0x0002fcb5) list_single_graphic_hl_pane_g2_ParamLimits

0x95ad,	// (0x0002fcb5) list_single_graphic_hl_pane_g2

0x95ad,	// (0x0002fcb5) list_single_graphic_hl_pane_g3_ParamLimits

0x95ad,	// (0x0002fcb5) list_single_graphic_hl_pane_g3

0xefdd,	// (0x000356e5) list_single_graphic_hl_pane_g4_ParamLimits

0xefdd,	// (0x000356e5) list_single_graphic_hl_pane_g4

0x95b9,	// (0x0002fcc1) list_single_graphic_hl_pane_g5_ParamLimits

0x95b9,	// (0x0002fcc1) list_single_graphic_hl_pane_g5

0x0004,

0xfbe6,	// (0x000362ee) list_single_graphic_hl_pane_g_ParamLimits

0xfbe6,	// (0x000362ee) list_single_graphic_hl_pane_g

0x95cd,	// (0x0002fcd5) list_single_graphic_hl_pane_t1_ParamLimits

0x95cd,	// (0x0002fcd5) list_single_graphic_hl_pane_t1

0x551d,	// (0x0002bc25) aid_size_min_hl_cp2

0x5526,	// (0x0002bc2e) list_highlight_pane_cp34_cp2_ParamLimits

0x5526,	// (0x0002bc2e) list_highlight_pane_cp34_cp2

0x5510,	// (0x0002bc18) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5510,	// (0x0002bc18) list_single_graphic_hl_pane_g1_cp2

0x5533,	// (0x0002bc3b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5533,	// (0x0002bc3b) list_single_graphic_hl_pane_g2_cp2

0xc13e,	// (0x00032846) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc13e,	// (0x00032846) list_single_graphic_hl_pane_g3_cp2

0xd282,	// (0x0003398a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xd282,	// (0x0003398a) list_single_graphic_hl_pane_g4_cp2

0x554d,	// (0x0002bc55) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x554d,	// (0x0002bc55) list_single_graphic_hl_pane_g5_cp2

0xa8c0,	// (0x00030fc8) control_pane_g4_ParamLimits

0xa8c0,	// (0x00030fc8) control_pane_g4

0x07b9,	// (0x00026ec1) bg_popup_sub_pane_cp10_ParamLimits

0x4ce9,	// (0x0002b3f1) list_choice_list_pane_ParamLimits

0x4cf8,	// (0x0002b400) scroll_pane_cp23

0x9e10,	// (0x00030518) bg_popup_preview_window_pane_cp02_ParamLimits

0x5369,	// (0x0002ba71) list_preview_fixed_pane_ParamLimits

0x537f,	// (0x0002ba87) list_preview_fixed_pane_cp_ParamLimits

0x537f,	// (0x0002ba87) list_preview_fixed_pane_cp

0x538b,	// (0x0002ba93) popup_preview_fixed_window_g1_ParamLimits

0x538b,	// (0x0002ba93) popup_preview_fixed_window_g1

0x5397,	// (0x0002ba9f) popup_preview_fixed_window_g2_ParamLimits

0x5397,	// (0x0002ba9f) popup_preview_fixed_window_g2

0x0002,

0xfb75,	// (0x0003627d) popup_preview_fixed_window_g_ParamLimits

0xfb75,	// (0x0003627d) popup_preview_fixed_window_g

0xf3b4,	// (0x00035abc) aid_navi_side_left_pane_ParamLimits

0xf3c9,	// (0x00035ad1) aid_navi_side_right_pane_ParamLimits

0xf3e1,	// (0x00035ae9) navi_icon_pane_stacon_ParamLimits

0xf3f5,	// (0x00035afd) navi_navi_pane_stacon_ParamLimits

0xf3e1,	// (0x00035ae9) navi_text_pane_stacon_ParamLimits

0x97ae,	// (0x0002feb6) main_text_info_pane

0x5577,	// (0x0002bc7f) listscroll_text_info_pane

0x557f,	// (0x0002bc87) list_text_info_pane_ParamLimits

0x557f,	// (0x0002bc87) list_text_info_pane

0x558e,	// (0x0002bc96) scroll_pane_cp24_ParamLimits

0x558e,	// (0x0002bc96) scroll_pane_cp24

0xc14c,	// (0x00032854) list_text_info_pane_t1_ParamLimits

0xc14c,	// (0x00032854) list_text_info_pane_t1

0xaa2c,	// (0x00031134) popup_fast_swap2_window_ParamLimits

0xaa2c,	// (0x00031134) popup_fast_swap2_window

0x55d1,	// (0x0002bcd9) aid_size_cell_fast2

0x97ae,	// (0x0002feb6) bg_popup_window_pane_cp17

0x2acf,	// (0x000291d7) heading_pane_cp2

0xa070,	// (0x00030778) listscroll_fast2_pane

0x55db,	// (0x0002bce3) grid_fast2_pane

0x55e5,	// (0x0002bced) listscroll_fast2_pane_g1

0x55ef,	// (0x0002bcf7) listscroll_fast2_pane_g2

0x0001,

0xfbf1,	// (0x000362f9) listscroll_fast2_pane_g

0xca3b,	// (0x00033143) scroll_pane_cp26

0x55f9,	// (0x0002bd01) cell_fast2_pane_ParamLimits

0x55f9,	// (0x0002bd01) cell_fast2_pane

0x5610,	// (0x0002bd18) cell_fast2_pane_g1

0x5619,	// (0x0002bd21) cell_fast2_pane_g2

0x5622,	// (0x0002bd2a) cell_fast2_pane_g3

0x0002,

0xfbf6,	// (0x000362fe) cell_fast2_pane_g

0xa159,	// (0x00030861) grid_highlight_pane_cp9

0xa16e,	// (0x00030876) main_eswt_pane_ParamLimits

0xa16e,	// (0x00030876) main_eswt_pane

0x55a3,	// (0x0002bcab) list_single_text_info_pane

0x562a,	// (0x0002bd32) eswt_ctrl_button_pane

0x562a,	// (0x0002bd32) eswt_ctrl_canvas_pane

0x5632,	// (0x0002bd3a) eswt_ctrl_combo_pane

0x562a,	// (0x0002bd32) eswt_ctrl_default_pane

0x562a,	// (0x0002bd32) eswt_ctrl_label_pane

0x563a,	// (0x0002bd42) eswt_ctrl_wait_pane

0x5642,	// (0x0002bd4a) eswt_shell_pane

0x97ae,	// (0x0002feb6) listscroll_eswt_app_pane

0x5662,	// (0x0002bd6a) popup_eswt_tasktip_window_ParamLimits

0x5662,	// (0x0002bd6a) popup_eswt_tasktip_window

0x1415,	// (0x00027b1d) bg_popup_window_pane_cp18

0x5673,	// (0x0002bd7b) eswt_control_pane_g1_ParamLimits

0x5673,	// (0x0002bd7b) eswt_control_pane_g1

0x5680,	// (0x0002bd88) eswt_control_pane_g2_ParamLimits

0x5680,	// (0x0002bd88) eswt_control_pane_g2

0x568d,	// (0x0002bd95) eswt_control_pane_g3_ParamLimits

0x568d,	// (0x0002bd95) eswt_control_pane_g3

0x569a,	// (0x0002bda2) eswt_control_pane_g4_ParamLimits

0x569a,	// (0x0002bda2) eswt_control_pane_g4

0x0003,

0xfbfd,	// (0x00036305) eswt_control_pane_g_ParamLimits

0xfbfd,	// (0x00036305) eswt_control_pane_g

0xc90f,	// (0x00033017) bg_button_pane_ParamLimits

0xc90f,	// (0x00033017) bg_button_pane

0xa16e,	// (0x00030876) common_borders_pane_copy2_ParamLimits

0xa16e,	// (0x00030876) common_borders_pane_copy2

0x56a7,	// (0x0002bdaf) control_button_pane_g1_ParamLimits

0x56a7,	// (0x0002bdaf) control_button_pane_g1

0x56b3,	// (0x0002bdbb) control_button_pane_g2_ParamLimits

0x56b3,	// (0x0002bdbb) control_button_pane_g2

0x56bf,	// (0x0002bdc7) control_button_pane_g3_ParamLimits

0x56bf,	// (0x0002bdc7) control_button_pane_g3

0x0002,

0xfc06,	// (0x0003630e) control_button_pane_g_ParamLimits

0xfc06,	// (0x0003630e) control_button_pane_g

0x56d3,	// (0x0002bddb) control_button_pane_t1

0x56e1,	// (0x0002bde9) control_button_pane_t2

0x0001,

0xfc0d,	// (0x00036315) control_button_pane_t

0x132a,	// (0x00027a32) bg_button_pane_g1

0x1332,	// (0x00027a3a) bg_button_pane_g2

0x133a,	// (0x00027a42) bg_button_pane_g3

0x1342,	// (0x00027a4a) bg_button_pane_g4

0x134a,	// (0x00027a52) bg_button_pane_g5

0x1352,	// (0x00027a5a) bg_button_pane_g6

0x135a,	// (0x00027a62) bg_button_pane_g7

0x1362,	// (0x00027a6a) bg_button_pane_g8

0x136a,	// (0x00027a72) bg_button_pane_g9

0x0008,

0xf861,	// (0x00035f69) bg_button_pane_g

0x4ca4,	// (0x0002b3ac) common_borders_pane_ParamLimits

0x4ca4,	// (0x0002b3ac) common_borders_pane

0x5673,	// (0x0002bd7b) eswt_control_pane_g1_copy1_ParamLimits

0x5673,	// (0x0002bd7b) eswt_control_pane_g1_copy1

0x5680,	// (0x0002bd88) eswt_control_pane_g2_copy1_ParamLimits

0x5680,	// (0x0002bd88) eswt_control_pane_g2_copy1

0x568d,	// (0x0002bd95) eswt_control_pane_g3_copy1_ParamLimits

0x568d,	// (0x0002bd95) eswt_control_pane_g3_copy1

0x569a,	// (0x0002bda2) eswt_control_pane_g4_copy1_ParamLimits

0x569a,	// (0x0002bda2) eswt_control_pane_g4_copy1

0x4cdf,	// (0x0002b3e7) bg_eswt_ctrl_canvas_pane_g1

0x4ca4,	// (0x0002b3ac) common_borders_pane_cp2_ParamLimits

0x4ca4,	// (0x0002b3ac) common_borders_pane_cp2

0x4ca4,	// (0x0002b3ac) common_borders_pane_cp3_ParamLimits

0x4ca4,	// (0x0002b3ac) common_borders_pane_cp3

0x56ef,	// (0x0002bdf7) separator_horizontal_pane

0x56f7,	// (0x0002bdff) separator_vertical_pane

0x5673,	// (0x0002bd7b) eswt_control_pane_g1_copy2_ParamLimits

0x5673,	// (0x0002bd7b) eswt_control_pane_g1_copy2

0x5680,	// (0x0002bd88) eswt_control_pane_g2_copy2_ParamLimits

0x5680,	// (0x0002bd88) eswt_control_pane_g2_copy2

0x568d,	// (0x0002bd95) eswt_control_pane_g3_copy2_ParamLimits

0x568d,	// (0x0002bd95) eswt_control_pane_g3_copy2

0x569a,	// (0x0002bda2) eswt_control_pane_g4_copy2_ParamLimits

0x569a,	// (0x0002bda2) eswt_control_pane_g4_copy2

0x97ae,	// (0x0002feb6) common_borders_pane_cp4

0x5700,	// (0x0002be08) separator_horizontal_pane_g1

0x5709,	// (0x0002be11) separator_horizontal_pane_g2

0x5712,	// (0x0002be1a) separator_horizontal_pane_g3

0x0002,

0xfc12,	// (0x0003631a) separator_horizontal_pane_g

0x5673,	// (0x0002bd7b) eswt_control_pane_g1_copy3_ParamLimits

0x5673,	// (0x0002bd7b) eswt_control_pane_g1_copy3

0x5680,	// (0x0002bd88) eswt_control_pane_g2_copy3_ParamLimits

0x5680,	// (0x0002bd88) eswt_control_pane_g2_copy3

0x568d,	// (0x0002bd95) eswt_control_pane_g3_copy3_ParamLimits

0x568d,	// (0x0002bd95) eswt_control_pane_g3_copy3

0x569a,	// (0x0002bda2) eswt_control_pane_g4_copy3_ParamLimits

0x569a,	// (0x0002bda2) eswt_control_pane_g4_copy3

0x97ae,	// (0x0002feb6) common_borders_pane_cp5

0x571b,	// (0x0002be23) separator_vertical_pane_g1

0x5724,	// (0x0002be2c) separator_vertical_pane_g2

0x572d,	// (0x0002be35) separator_vertical_pane_g3

0x0002,

0xfc19,	// (0x00036321) separator_vertical_pane_g

0x5673,	// (0x0002bd7b) eswt_control_pane_g1_copy4_ParamLimits

0x5673,	// (0x0002bd7b) eswt_control_pane_g1_copy4

0x5680,	// (0x0002bd88) eswt_control_pane_g2_copy4_ParamLimits

0x5680,	// (0x0002bd88) eswt_control_pane_g2_copy4

0x568d,	// (0x0002bd95) eswt_control_pane_g3_copy4_ParamLimits

0x568d,	// (0x0002bd95) eswt_control_pane_g3_copy4

0x569a,	// (0x0002bda2) eswt_control_pane_g4_copy4_ParamLimits

0x569a,	// (0x0002bda2) eswt_control_pane_g4_copy4

0xc16e,	// (0x00032876) eswt_ctrl_combo_button_pane

0xc176,	// (0x0003287e) eswt_ctrl_input_pane

0xc17e,	// (0x00032886) popup_choice_list_window_cp70

0xc186,	// (0x0003288e) eswt_ctrl_input_pane_t1

0x97ae,	// (0x0002feb6) input_focus_pane_cp70

0x4ca4,	// (0x0002b3ac) bg_button_pane_cp70_ParamLimits

0x4ca4,	// (0x0002b3ac) bg_button_pane_cp70

0xc194,	// (0x0003289c) eswt_ctrl_combo_button_pane_g1

0x5764,	// (0x0002be6c) wait_bar_pane_cp70

0x1415,	// (0x00027b1d) bg_popup_window_pane_cp70_ParamLimits

0x1415,	// (0x00027b1d) bg_popup_window_pane_cp70

0x576c,	// (0x0002be74) popup_eswt_tasktip_window_t1

0x5782,	// (0x0002be8a) wait_bar_pane_cp71_ParamLimits

0x5782,	// (0x0002be8a) wait_bar_pane_cp71

0x578e,	// (0x0002be96) grid_eswt_app_pane

0xcc89,	// (0x00033391) scroll_pane_cp70

0xc19c,	// (0x000328a4) cell_eswt_app_pane_ParamLimits

0xc19c,	// (0x000328a4) cell_eswt_app_pane

0xc1ce,	// (0x000328d6) cell_eswt_app_pane_g1_ParamLimits

0xc1ce,	// (0x000328d6) cell_eswt_app_pane_g1

0xc1fd,	// (0x00032905) cell_eswt_app_pane_g2_ParamLimits

0xc1fd,	// (0x00032905) cell_eswt_app_pane_g2

0x0001,

0xfc20,	// (0x00036328) cell_eswt_app_pane_g_ParamLimits

0xfc20,	// (0x00036328) cell_eswt_app_pane_g

0xc226,	// (0x0003292e) cell_eswt_app_pane_t1_ParamLimits

0xc226,	// (0x0003292e) cell_eswt_app_pane_t1

0x5853,	// (0x0002bf5b) grid_highlight_pane_cp70_ParamLimits

0x5853,	// (0x0002bf5b) grid_highlight_pane_cp70

0xd159,	// (0x00033861) set_content_pane_g1

0xa856,	// (0x00030f5e) status_small_volume_pane

0x1e8c,	// (0x00028594) status_small_volume_pane_g1

0x1e94,	// (0x0002859c) volume_small2_pane

0x1e9d,	// (0x000285a5) volume_small2_pane_g1

0x1ea6,	// (0x000285ae) volume_small2_pane_g2

0x1eaf,	// (0x000285b7) volume_small2_pane_g3

0x1eb8,	// (0x000285c0) volume_small2_pane_g4

0x1ec1,	// (0x000285c9) volume_small2_pane_g5

0x1eca,	// (0x000285d2) volume_small2_pane_g6

0x1ed3,	// (0x000285db) volume_small2_pane_g7

0x1edc,	// (0x000285e4) volume_small2_pane_g8

0x1ee5,	// (0x000285ed) volume_small2_pane_g9

0x1eee,	// (0x000285f6) volume_small2_pane_g10

0x0009,

0xfc25,	// (0x0003632d) volume_small2_pane_g

0x50ae,	// (0x0002b7b6) fep_vkb_top_text_pane_g1_ParamLimits

0xc0e6,	// (0x000327ee) fep_vkb_top_text_pane_t1_ParamLimits

0x53a3,	// (0x0002baab) popup_preview_fixed_window_g3_ParamLimits

0x53a3,	// (0x0002baab) popup_preview_fixed_window_g3

0xb0c6,	// (0x000317ce) popup_toolbar_trans_pane

0xba5c,	// (0x00032164) aid_height_set_list_ParamLimits

0x3a64,	// (0x0002a16c) aid_size_parent_ParamLimits

0x07b9,	// (0x00026ec1) list_highlight_pane_cp2_ParamLimits

0xd159,	// (0x00033861) set_content_pane_g1_ParamLimits

0xbc20,	// (0x00032328) list_single_image_pane_ParamLimits

0xbc20,	// (0x00032328) list_single_image_pane

0xc258,	// (0x00032960) aid_size_cell_image_ParamLimits

0xc258,	// (0x00032960) aid_size_cell_image

0xc265,	// (0x0003296d) grid_single_image_pane_ParamLimits

0xc265,	// (0x0003296d) grid_single_image_pane

0xc91d,	// (0x00033025) list_single_image_pane_g1_ParamLimits

0xc91d,	// (0x00033025) list_single_image_pane_g1

0xc929,	// (0x00033031) list_single_image_pane_g2_ParamLimits

0xc929,	// (0x00033031) list_single_image_pane_g2

0x0001,

0xfc3a,	// (0x00036342) list_single_image_pane_g_ParamLimits

0xfc3a,	// (0x00036342) list_single_image_pane_g

0x587a,	// (0x0002bf82) list_single_image_pane_t1_ParamLimits

0x587a,	// (0x0002bf82) list_single_image_pane_t1

0xc273,	// (0x0003297b) cell_image_list_pane_ParamLimits

0xc273,	// (0x0003297b) cell_image_list_pane

0xc287,	// (0x0003298f) cell_image_list_pane_g1

0xc290,	// (0x00032998) cell_image_list_pane_g2

0x0001,

0xfc3f,	// (0x00036347) cell_image_list_pane_g

0x58b8,	// (0x0002bfc0) aid_size_cell_tb_trans_pane

0xc90f,	// (0x00033017) bg_tb_trans_pane

0x58ca,	// (0x0002bfd2) grid_tb_trans_pane

0x132a,	// (0x00027a32) bg_tb_trans_pane_g1

0x1332,	// (0x00027a3a) bg_tb_trans_pane_g2

0x133a,	// (0x00027a42) bg_tb_trans_pane_g3

0x1342,	// (0x00027a4a) bg_tb_trans_pane_g4

0x134a,	// (0x00027a52) bg_tb_trans_pane_g5

0x1362,	// (0x00027a6a) bg_tb_trans_pane_g6

0x136a,	// (0x00027a72) bg_tb_trans_pane_g7

0x1352,	// (0x00027a5a) bg_tb_trans_pane_g8

0x135a,	// (0x00027a62) bg_tb_trans_pane_g9

0x0008,

0xfc44,	// (0x0003634c) bg_tb_trans_pane_g

0x58de,	// (0x0002bfe6) cell_toolbar_trans_pane_ParamLimits

0x58de,	// (0x0002bfe6) cell_toolbar_trans_pane

0x4cdf,	// (0x0002b3e7) cell_toolbar_trans_pane_g1

0xbe56,	// (0x0003255e) list_form2_midp_pane_t1

0xbe64,	// (0x0003256c) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x000361f5) list_form2_midp_pane_t

0x491f,	// (0x0002b027) scroll_pane_cp51_ParamLimits

0x4ae6,	// (0x0002b1ee) form2_midp_wait_pane_g1

0x4aef,	// (0x0002b1f7) form2_midp_wait_pane_g2

0x4af8,	// (0x0002b200) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x0003620a) form2_midp_wait_pane_g

0x9b29,	// (0x00030231) list_highlight_pane_cp21_ParamLimits

0x4b3c,	// (0x0002b244) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4b4b,	// (0x0002b253) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xeac1,	// (0x000351c9) list_single_2graphic_im_pane_ParamLimits

0xeac1,	// (0x000351c9) list_single_2graphic_im_pane

0xc299,	// (0x000329a1) list_single_2graphic_im_pane_g1_ParamLimits

0xc299,	// (0x000329a1) list_single_2graphic_im_pane_g1

0xc2aa,	// (0x000329b2) list_single_2graphic_im_pane_g2_ParamLimits

0xc2aa,	// (0x000329b2) list_single_2graphic_im_pane_g2

0xd28e,	// (0x00033996) list_single_2graphic_im_pane_g3_ParamLimits

0xd28e,	// (0x00033996) list_single_2graphic_im_pane_g3

0x0003,

0xfc57,	// (0x0003635f) list_single_2graphic_im_pane_g_ParamLimits

0xfc57,	// (0x0003635f) list_single_2graphic_im_pane_g

0xd2a2,	// (0x000339aa) list_single_2graphic_im_pane_t1_ParamLimits

0xd2a2,	// (0x000339aa) list_single_2graphic_im_pane_t1

0x53af,	// (0x0002bab7) list_single_graphic_2heading_pane_fp_ParamLimits

0x53af,	// (0x0002bab7) list_single_graphic_2heading_pane_fp

0xee46,	// (0x0003554e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xee46,	// (0x0003554e) list_single_graphic_2heading_pane_fp_g1

0x53c8,	// (0x0002bad0) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x53c8,	// (0x0002bad0) list_single_graphic_2heading_pane_fp_g2

0xee0f,	// (0x00035517) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xee0f,	// (0x00035517) list_single_graphic_2heading_pane_fp_g3

0xee1b,	// (0x00035523) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xee1b,	// (0x00035523) list_single_graphic_2heading_pane_fp_g4

0x53d4,	// (0x0002badc) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x53d4,	// (0x0002badc) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0003628d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0003628d) list_single_graphic_2heading_pane_fp_g

0xefe9,	// (0x000356f1) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xefe9,	// (0x000356f1) list_single_graphic_2heading_pane_fp_t1

0xee7e,	// (0x00035586) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xee7e,	// (0x00035586) list_single_graphic_2heading_pane_fp_t2

0xefff,	// (0x00035707) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xefff,	// (0x00035707) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc60,	// (0x00036368) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc60,	// (0x00036368) list_single_graphic_2heading_pane_fp_t

0x4d70,	// (0x0002b478) fep_hwr_write_pane_g5_ParamLimits

0x4d70,	// (0x0002b478) fep_hwr_write_pane_g5

0x4d7c,	// (0x0002b484) fep_hwr_write_pane_g6_ParamLimits

0x4d7c,	// (0x0002b484) fep_hwr_write_pane_g6

0x5642,	// (0x0002bd4a) eswt_shell_pane_ParamLimits

0x1415,	// (0x00027b1d) bg_popup_window_pane_cp18_ParamLimits

0x39aa,	// (0x0002a0b2) heading_pane_cp70

0x576c,	// (0x0002be74) popup_eswt_tasktip_window_t1_ParamLimits

0xb190,	// (0x00031898) aid_touch_tab_arrow_left

0xb1a6,	// (0x000318ae) aid_touch_tab_arrow_right

0x9a0b,	// (0x00030113) title_pane_g3_ParamLimits

0x9a0b,	// (0x00030113) title_pane_g3

0xc8ce,	// (0x00032fd6) set_value_pane_g1

0xb0c6,	// (0x000317ce) popup_toolbar_trans_pane_ParamLimits

0x58b8,	// (0x0002bfc0) aid_size_cell_tb_trans_pane_ParamLimits

0xc90f,	// (0x00033017) bg_tb_trans_pane_ParamLimits

0x58ca,	// (0x0002bfd2) grid_tb_trans_pane_ParamLimits

0x9e10,	// (0x00030518) cont_note_pane_ParamLimits

0x9e10,	// (0x00030518) cont_note_pane

0xa16e,	// (0x00030876) cont_snote2_single_text_pane_ParamLimits

0xa16e,	// (0x00030876) cont_snote2_single_text_pane

0xa16e,	// (0x00030876) cont_snote2_single_graphic_pane_ParamLimits

0xa16e,	// (0x00030876) cont_snote2_single_graphic_pane

0x2ceb,	// (0x000293f3) cont_note_wait_pane_ParamLimits

0x2ceb,	// (0x000293f3) cont_note_wait_pane

0x2ceb,	// (0x000293f3) cont_note_image_pane_ParamLimits

0x2ceb,	// (0x000293f3) cont_note_image_pane

0x5972,	// (0x0002c07a) popup_note2_window_g1_ParamLimits

0x5972,	// (0x0002c07a) popup_note2_window_g1

0x59a3,	// (0x0002c0ab) popup_note2_window_t1_ParamLimits

0x59a3,	// (0x0002c0ab) popup_note2_window_t1

0x59e8,	// (0x0002c0f0) popup_note2_window_t2_ParamLimits

0x59e8,	// (0x0002c0f0) popup_note2_window_t2

0x5a2d,	// (0x0002c135) popup_note2_window_t3_ParamLimits

0x5a2d,	// (0x0002c135) popup_note2_window_t3

0x5a72,	// (0x0002c17a) popup_note2_window_t4_ParamLimits

0x5a72,	// (0x0002c17a) popup_note2_window_t4

0x9e94,	// (0x0003059c) popup_note2_window_t5_ParamLimits

0x9e94,	// (0x0003059c) popup_note2_window_t5

0x0004,

0xfc6c,	// (0x00036374) popup_note2_window_t_ParamLimits

0xfc6c,	// (0x00036374) popup_note2_window_t

0x5aa1,	// (0x0002c1a9) popup_note2_image_window_g1_ParamLimits

0x5aa1,	// (0x0002c1a9) popup_note2_image_window_g1

0x5aad,	// (0x0002c1b5) popup_note2_image_window_g2_ParamLimits

0x5aad,	// (0x0002c1b5) popup_note2_image_window_g2

0x0001,

0xfc77,	// (0x0003637f) popup_note2_image_window_g_ParamLimits

0xfc77,	// (0x0003637f) popup_note2_image_window_g

0x5abf,	// (0x0002c1c7) popup_note2_image_window_t1_ParamLimits

0x5abf,	// (0x0002c1c7) popup_note2_image_window_t1

0x5ad7,	// (0x0002c1df) popup_note2_image_window_t2_ParamLimits

0x5ad7,	// (0x0002c1df) popup_note2_image_window_t2

0x5aef,	// (0x0002c1f7) popup_note2_image_window_t3_ParamLimits

0x5aef,	// (0x0002c1f7) popup_note2_image_window_t3

0x0002,

0xfc7c,	// (0x00036384) popup_note2_image_window_t_ParamLimits

0xfc7c,	// (0x00036384) popup_note2_image_window_t

0x2cf9,	// (0x00029401) popup_note2_wait_window_g1_ParamLimits

0x2cf9,	// (0x00029401) popup_note2_wait_window_g1

0x5b0b,	// (0x0002c213) popup_note2_wait_window_g2_ParamLimits

0x5b0b,	// (0x0002c213) popup_note2_wait_window_g2

0x2d11,	// (0x00029419) popup_note2_wait_window_g3_ParamLimits

0x2d11,	// (0x00029419) popup_note2_wait_window_g3

0x0002,

0xfc83,	// (0x0003638b) popup_note2_wait_window_g_ParamLimits

0xfc83,	// (0x0003638b) popup_note2_wait_window_g

0x5b17,	// (0x0002c21f) popup_note2_wait_window_t1_ParamLimits

0x5b17,	// (0x0002c21f) popup_note2_wait_window_t1

0x5b35,	// (0x0002c23d) popup_note2_wait_window_t2_ParamLimits

0x5b35,	// (0x0002c23d) popup_note2_wait_window_t2

0x5b53,	// (0x0002c25b) popup_note2_wait_window_t3_ParamLimits

0x5b53,	// (0x0002c25b) popup_note2_wait_window_t3

0x5b65,	// (0x0002c26d) popup_note2_wait_window_t4_ParamLimits

0x5b65,	// (0x0002c26d) popup_note2_wait_window_t4

0x0003,

0xfc8a,	// (0x00036392) popup_note2_wait_window_t_ParamLimits

0xfc8a,	// (0x00036392) popup_note2_wait_window_t

0x5b77,	// (0x0002c27f) wait_bar2_pane_ParamLimits

0x5b77,	// (0x0002c27f) wait_bar2_pane

0x5b8f,	// (0x0002c297) popup_snote2_single_text_window_g1_ParamLimits

0x5b8f,	// (0x0002c297) popup_snote2_single_text_window_g1

0x5bb7,	// (0x0002c2bf) popup_snote2_single_text_window_t1_ParamLimits

0x5bb7,	// (0x0002c2bf) popup_snote2_single_text_window_t1

0x5c03,	// (0x0002c30b) popup_snote2_single_text_window_t2_ParamLimits

0x5c03,	// (0x0002c30b) popup_snote2_single_text_window_t2

0x5c4f,	// (0x0002c357) popup_snote2_single_text_window_t3_ParamLimits

0x5c4f,	// (0x0002c357) popup_snote2_single_text_window_t3

0x5c90,	// (0x0002c398) popup_snote2_single_text_window_t4_ParamLimits

0x5c90,	// (0x0002c398) popup_snote2_single_text_window_t4

0x5cc6,	// (0x0002c3ce) popup_snote2_single_text_window_t5_ParamLimits

0x5cc6,	// (0x0002c3ce) popup_snote2_single_text_window_t5

0x0004,

0xfc93,	// (0x0003639b) popup_snote2_single_text_window_t_ParamLimits

0xfc93,	// (0x0003639b) popup_snote2_single_text_window_t

0x5cf1,	// (0x0002c3f9) popup_snote2_single_graphic_window_g1_ParamLimits

0x5cf1,	// (0x0002c3f9) popup_snote2_single_graphic_window_g1

0x5d19,	// (0x0002c421) popup_snote2_single_graphic_window_g2_ParamLimits

0x5d19,	// (0x0002c421) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9e,	// (0x000363a6) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9e,	// (0x000363a6) popup_snote2_single_graphic_window_g

0x5d41,	// (0x0002c449) popup_snote2_single_graphic_window_t1_ParamLimits

0x5d41,	// (0x0002c449) popup_snote2_single_graphic_window_t1

0x5d8d,	// (0x0002c495) popup_snote2_single_graphic_window_t2_ParamLimits

0x5d8d,	// (0x0002c495) popup_snote2_single_graphic_window_t2

0x5c4f,	// (0x0002c357) popup_snote2_single_graphic_window_t3_ParamLimits

0x5c4f,	// (0x0002c357) popup_snote2_single_graphic_window_t3

0x5c90,	// (0x0002c398) popup_snote2_single_graphic_window_t4_ParamLimits

0x5c90,	// (0x0002c398) popup_snote2_single_graphic_window_t4

0x5cc6,	// (0x0002c3ce) popup_snote2_single_graphic_window_t5_ParamLimits

0x5cc6,	// (0x0002c3ce) popup_snote2_single_graphic_window_t5

0x0004,

0xfca3,	// (0x000363ab) popup_snote2_single_graphic_window_t_ParamLimits

0xfca3,	// (0x000363ab) popup_snote2_single_graphic_window_t

0x47cf,	// (0x0002aed7) clock_nsta_pane_cp2_t1

0x47cf,	// (0x0002aed7) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x000361cb) clock_nsta_pane_cp2_t

0xe8cc,	// (0x00034fd4) form_field_data_wide_pane_g1_ParamLimits

0xc91d,	// (0x00033025) form_field_data_wide_pane_g2_ParamLimits

0xc91d,	// (0x00033025) form_field_data_wide_pane_g2

0xc929,	// (0x00033031) form_field_data_wide_pane_g3_ParamLimits

0xc929,	// (0x00033031) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x00035d83) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x00035d83) form_field_data_wide_pane_g

0xbd62,	// (0x0003246a) grid_touch_3_pane_ParamLimits

0xbd62,	// (0x0003246a) grid_touch_3_pane

0xd2d3,	// (0x000339db) cell_touch_3_pane_ParamLimits

0xd2d3,	// (0x000339db) cell_touch_3_pane

0x4cdf,	// (0x0002b3e7) cell_touch_3_pane_g1

0x4cdf,	// (0x0002b3e7) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x00036250) cell_touch_3_pane_g

0x9ec6,	// (0x000305ce) cont_query_data_pane

0x9ece,	// (0x000305d6) cont_query_data_pane_cp1

0x5e0c,	// (0x0002c514) button_value_adjust_pane_cp7

0x5e14,	// (0x0002c51c) query_popup_pane_cp3

0xce51,	// (0x00033559) bg_popup_sub_pane_cp22_ParamLimits

0xf4ef,	// (0x00035bf7) navi_navi_volume_pane_cp2

0xf50a,	// (0x00035c12) popup_side_volume_key_window_g2

0xf519,	// (0x00035c21) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x00035e19) popup_side_volume_key_window_g

0xf536,	// (0x00035c3e) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x00035e20) popup_side_volume_key_window_t

0xd05c,	// (0x00033764) popup_side_volume_key_window_ParamLimits

0x902d,	// (0x0002f735) list_double_graphic_pane_g4_ParamLimits

0x902d,	// (0x0002f735) list_double_graphic_pane_g4

0x9597,	// (0x0002fc9f) list_single_2heading_msg_pane_ParamLimits

0x9597,	// (0x0002fc9f) list_single_2heading_msg_pane

0x95e3,	// (0x0002fceb) list_single_2heading_msg_pane_g1_ParamLimits

0x95e3,	// (0x0002fceb) list_single_2heading_msg_pane_g1

0x95ef,	// (0x0002fcf7) list_single_2heading_msg_pane_g2_ParamLimits

0x95ef,	// (0x0002fcf7) list_single_2heading_msg_pane_g2

0x9602,	// (0x0002fd0a) list_single_2heading_msg_pane_g3_ParamLimits

0x9602,	// (0x0002fd0a) list_single_2heading_msg_pane_g3

0x960e,	// (0x0002fd16) list_single_2heading_msg_pane_g4_ParamLimits

0x960e,	// (0x0002fd16) list_single_2heading_msg_pane_g4

0x0003,

0xfcae,	// (0x000363b6) list_single_2heading_msg_pane_g_ParamLimits

0xfcae,	// (0x000363b6) list_single_2heading_msg_pane_g

0x9626,	// (0x0002fd2e) list_single_2heading_msg_pane_t1_ParamLimits

0x9626,	// (0x0002fd2e) list_single_2heading_msg_pane_t1

0x964e,	// (0x0002fd56) list_single_2heading_msg_pane_t2_ParamLimits

0x964e,	// (0x0002fd56) list_single_2heading_msg_pane_t2

0x96b9,	// (0x0002fdc1) list_single_2heading_msg_pane_t3_ParamLimits

0x96b9,	// (0x0002fdc1) list_single_2heading_msg_pane_t3

0xf275,	// (0x0003597d) list_single_2heading_msg_pane_t4_ParamLimits

0xf275,	// (0x0003597d) list_single_2heading_msg_pane_t4

0x0003,

0xfcb7,	// (0x000363bf) list_single_2heading_msg_pane_t_ParamLimits

0xfcb7,	// (0x000363bf) list_single_2heading_msg_pane_t

0x9a17,	// (0x0003011f) title_pane_g4_ParamLimits

0x9a17,	// (0x0003011f) title_pane_g4

0xf304,	// (0x00035a0c) title_pane_stacon_g3_ParamLimits

0xf304,	// (0x00035a0c) title_pane_stacon_g3

0x5935,	// (0x0002c03d) list_single_2graphic_im_pane_g4_ParamLimits

0x5935,	// (0x0002c03d) list_single_2graphic_im_pane_g4

0x375b,	// (0x00029e63) popup_side_volume_key_window_cp

0x3fc9,	// (0x0002a6d1) main_idle_act2_pane_t1

0x1372,	// (0x00027a7a) toolbar_button_pane_g10

0xa366,	// (0x00030a6e) popup_toolbar_window_cp1

0x47c0,	// (0x0002aec8) clock_nsta_pane_cp_t1

0x47c0,	// (0x0002aec8) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x000361c6) clock_nsta_pane_cp_t

0xf4ef,	// (0x00035bf7) navi_navi_volume_pane_cp2_ParamLimits

0xf4fe,	// (0x00035c06) popup_side_volume_key_window_g1_ParamLimits

0xf50a,	// (0x00035c12) popup_side_volume_key_window_g2_ParamLimits

0xf519,	// (0x00035c21) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x00035e19) popup_side_volume_key_window_g_ParamLimits

0x1b81,	// (0x00028289) fep_hwr_aid_pane

0xbf4d,	// (0x00032655) bg_fep_hwr_top_pane_g4_ParamLimits

0x4d40,	// (0x0002b448) fep_hwr_top_pane_g1_ParamLimits

0x4d52,	// (0x0002b45a) fep_hwr_top_pane_g2_ParamLimits

0x1c3c,	// (0x00028344) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x0003621b) fep_hwr_top_pane_g_ParamLimits

0x1c51,	// (0x00028359) fep_hwr_top_text_pane_ParamLimits

0x3510,	// (0x00029c18) aid_touch_tab_arrow_arrow_2

0x3519,	// (0x00029c21) aid_touch_tab_arrow_left_2

0x1b95,	// (0x0002829d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1bcc,	// (0x000282d4) fep_hwr_prediction_pane

0x4ea8,	// (0x0002b5b0) fep_vkb_prediction_pane

0xc0c6,	// (0x000327ce) fep_vkb_side_pane_g3_ParamLimits

0xc0c6,	// (0x000327ce) fep_vkb_side_pane_g3

0x4f5a,	// (0x0002b662) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5428,	// (0x0002bb30) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5435,	// (0x0002bb3d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbd,	// (0x000362c5) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5e3b,	// (0x0002c543) fep_hwr_prediction_pane_g1

0x1ef7,	// (0x000285ff) fep_hwr_prediction_pane_g2

0x1eff,	// (0x00028607) fep_hwr_prediction_pane_g3

0x1f07,	// (0x0002860f) fep_hwr_prediction_pane_g4

0x0003,

0xfcc0,	// (0x000363c8) fep_hwr_prediction_pane_g

0x5e3b,	// (0x0002c543) fep_vkb_prediction_pane_g1

0x5e45,	// (0x0002c54d) fep_vkb_prediction_pane_g2

0x5e4d,	// (0x0002c555) fep_vkb_prediction_pane_g3

0x5e55,	// (0x0002c55d) fep_vkb_prediction_pane_g4

0x0003,

0xfcc9,	// (0x000363d1) fep_vkb_prediction_pane_g

0x1a0f,	// (0x00028117) slider_set_pane_g3

0x1a23,	// (0x0002812b) slider_set_pane_g4

0x1a3b,	// (0x00028143) slider_set_pane_g5

0x1a0f,	// (0x00028117) slider_set_pane_g6

0x1a51,	// (0x00028159) slider_set_pane_g7

0x3be9,	// (0x0002a2f1) slider_form_pane_g3

0x3bf2,	// (0x0002a2fa) slider_form_pane_g4

0x3bfa,	// (0x0002a302) slider_form_pane_g5

0x3be9,	// (0x0002a2f1) slider_form_pane_g6

0xbbcb,	// (0x000322d3) slider_form_pane_g7

0x4280,	// (0x0002a988) slider_set_pane_vc_g3

0x4289,	// (0x0002a991) slider_set_pane_vc_g4

0x4292,	// (0x0002a99a) slider_set_pane_vc_g5

0x4280,	// (0x0002a988) slider_set_pane_vc_g6

0x429b,	// (0x0002a9a3) slider_set_pane_vc_g7

0x4473,	// (0x0002ab7b) slider_form_pane_vc_g1

0x447c,	// (0x0002ab84) slider_form_pane_vc_g2

0x4485,	// (0x0002ab8d) slider_form_pane_vc_g3

0x4473,	// (0x0002ab7b) slider_form_pane_vc_g4

0x448e,	// (0x0002ab96) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x00036198) slider_form_pane_vc_g

0x97ae,	// (0x0002feb6) main_idle_act3_pane

0x5e5d,	// (0x0002c565) ai3_links_pane

0xd31d,	// (0x00033a25) popup_ai3_data_window_ParamLimits

0xd31d,	// (0x00033a25) popup_ai3_data_window

0x97ae,	// (0x0002feb6) grid_ai3_links_pane

0xd33b,	// (0x00033a43) cell_ai3_links_pane_ParamLimits

0xd33b,	// (0x00033a43) cell_ai3_links_pane

0x5e9e,	// (0x0002c5a6) bg_popup_sub_pane_cp11

0x5eab,	// (0x0002c5b3) cell_ai3_links_pane_g1

0x97ae,	// (0x0002feb6) bg_popup_sub_pane_cp12

0x5ed0,	// (0x0002c5d8) heading_ai3_data_pane

0x5ed8,	// (0x0002c5e0) list_ai3_gene_pane

0x5ee4,	// (0x0002c5ec) popup_ai3_data_window_g1

0x5eec,	// (0x0002c5f4) heading_ai3_data_pane_g1

0x5ef4,	// (0x0002c5fc) heading_ai3_data_pane_t1

0x5f02,	// (0x0002c60a) list_double_ai3_gene_pane_ParamLimits

0x5f02,	// (0x0002c60a) list_double_ai3_gene_pane

0x5f0f,	// (0x0002c617) list_single_ai3_gene_pane_ParamLimits

0x5f0f,	// (0x0002c617) list_single_ai3_gene_pane

0x4ca4,	// (0x0002b3ac) list_highlight_pane_cp7_ParamLimits

0x4ca4,	// (0x0002b3ac) list_highlight_pane_cp7

0x5f1c,	// (0x0002c624) list_single_a13_gene_pane_t1_ParamLimits

0x5f1c,	// (0x0002c624) list_single_a13_gene_pane_t1

0x5f33,	// (0x0002c63b) list_single_ai3_gene_pane_g1

0x5f3c,	// (0x0002c644) list_single_ai3_gene_pane_g2

0x0001,

0xfcd2,	// (0x000363da) list_single_ai3_gene_pane_g

0x5f44,	// (0x0002c64c) list_double_ai3_gene_pane_g1_ParamLimits

0x5f44,	// (0x0002c64c) list_double_ai3_gene_pane_g1

0x5f50,	// (0x0002c658) list_double_ai3_gene_pane_t1_ParamLimits

0x5f50,	// (0x0002c658) list_double_ai3_gene_pane_t1

0x5f6c,	// (0x0002c674) list_double_ai3_gene_pane_t2_ParamLimits

0x5f6c,	// (0x0002c674) list_double_ai3_gene_pane_t2

0x5f81,	// (0x0002c689) list_double_ai3_gene_pane_t3_ParamLimits

0x5f81,	// (0x0002c689) list_double_ai3_gene_pane_t3

0x0002,

0xfcd7,	// (0x000363df) list_double_ai3_gene_pane_t_ParamLimits

0xfcd7,	// (0x000363df) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf015,	// (0x0003571d) aid_size_min_col_2

0xd307,	// (0x00033a0f) aid_size_min_msg_ParamLimits

0xd307,	// (0x00033a0f) aid_size_min_msg

0xc0da,	// (0x000327e2) fep_vkb_top_text_pane_g2_ParamLimits

0xc0da,	// (0x000327e2) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x0003624b) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x0003624b) fep_vkb_top_text_pane_g

0x97ae,	// (0x0002feb6) main_hc_apps_shell_pane

0x5f9e,	// (0x0002c6a6) grid_hc_apps_pane_ParamLimits

0x5f9e,	// (0x0002c6a6) grid_hc_apps_pane

0x5fad,	// (0x0002c6b5) list_hc_apps_pane

0x5fb5,	// (0x0002c6bd) scroll_pane_cp37_ParamLimits

0x5fb5,	// (0x0002c6bd) scroll_pane_cp37

0xd355,	// (0x00033a5d) cell_hc_apps_pane_ParamLimits

0xd355,	// (0x00033a5d) cell_hc_apps_pane

0xd41f,	// (0x00033b27) cell_hc_apps_pane_g1_ParamLimits

0xd41f,	// (0x00033b27) cell_hc_apps_pane_g1

0x60aa,	// (0x0002c7b2) cell_hc_apps_pane_g2_ParamLimits

0x60aa,	// (0x0002c7b2) cell_hc_apps_pane_g2

0x60c6,	// (0x0002c7ce) cell_hc_apps_pane_g3_ParamLimits

0x60c6,	// (0x0002c7ce) cell_hc_apps_pane_g3

0x0002,

0xfcde,	// (0x000363e6) cell_hc_apps_pane_g_ParamLimits

0xfcde,	// (0x000363e6) cell_hc_apps_pane_g

0xd44c,	// (0x00033b54) cell_hc_apps_pane_t1_ParamLimits

0xd44c,	// (0x00033b54) cell_hc_apps_pane_t1

0x9e10,	// (0x00030518) grid_highlight_pane_cp10_ParamLimits

0x9e10,	// (0x00030518) grid_highlight_pane_cp10

0xd48c,	// (0x00033b94) list_single_hc_apps_pane_ParamLimits

0xd48c,	// (0x00033b94) list_single_hc_apps_pane

0xd4c6,	// (0x00033bce) list_single_hc_apps_pane_g1

0x9727,	// (0x0002fe2f) list_single_hc_apps_pane_g2

0x0001,

0xfce5,	// (0x000363ed) list_single_hc_apps_pane_g

0x9740,	// (0x0002fe48) list_single_hc_apps_pane_g2_copy1

0x975c,	// (0x0002fe64) list_single_hc_apps_pane_t1

0x9b29,	// (0x00030231) bg_set_opt_pane_cp_ParamLimits

0xf1ec,	// (0x000358f4) setting_slider_pane_t1_ParamLimits

0xf205,	// (0x0003590d) setting_slider_pane_t2_ParamLimits

0xf21f,	// (0x00035927) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00035c66) setting_slider_pane_t_ParamLimits

0xf237,	// (0x0003593f) slider_set_pane_ParamLimits

0x061e,	// (0x00026d26) control_pane_g5_ParamLimits

0x061e,	// (0x00026d26) control_pane_g5

0x3a16,	// (0x0002a11e) slider_set_pane_g1_ParamLimits

0x1a03,	// (0x0002810b) slider_set_pane_g2_ParamLimits

0x1a0f,	// (0x00028117) slider_set_pane_g3_ParamLimits

0x1a23,	// (0x0002812b) slider_set_pane_g4_ParamLimits

0x1a3b,	// (0x00028143) slider_set_pane_g5_ParamLimits

0x1a0f,	// (0x00028117) slider_set_pane_g6_ParamLimits

0x1a51,	// (0x00028159) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x00036067) slider_set_pane_g_ParamLimits

0xd104,	// (0x0003380c) navi_icon_text_pane_ParamLimits

0xb157,	// (0x0003185f) aid_fill_nsta_2_ParamLimits

0xb190,	// (0x00031898) aid_touch_tab_arrow_left_ParamLimits

0xb1a6,	// (0x000318ae) aid_touch_tab_arrow_right_ParamLimits

0xb241,	// (0x00031949) clock_nsta_pane_ParamLimits

0xb909,	// (0x00032011) navi_icon_pane_g1_ParamLimits

0xb915,	// (0x0003201d) navi_text_pane_t1_ParamLimits

0xbe38,	// (0x00032540) navi_icon_text_pane_g1_ParamLimits

0xbe44,	// (0x0003254c) navi_icon_text_pane_t1_ParamLimits

0xd4c6,	// (0x00033bce) list_single_hc_apps_pane_g1_ParamLimits

0x9727,	// (0x0002fe2f) list_single_hc_apps_pane_g2_ParamLimits

0xfce5,	// (0x000363ed) list_single_hc_apps_pane_g_ParamLimits

0x9740,	// (0x0002fe48) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x975c,	// (0x0002fe64) list_single_hc_apps_pane_t1_ParamLimits

0x9906,	// (0x0003000e) popup_toolbar2_fixed_window_ParamLimits

0x9906,	// (0x0003000e) popup_toolbar2_fixed_window

0xb0bc,	// (0x000317c4) popup_toolbar2_float_window

0x97ae,	// (0x0002feb6) bg_popup_sub_pane_cp27

0x6180,	// (0x0002c888) grid_toolbar2_float_pane

0x97ae,	// (0x0002feb6) bg_popup_sub_pane_cp26

0x6180,	// (0x0002c888) grid_toolbar2_fixed_pane

0xd4df,	// (0x00033be7) cell_toolbar2_fixed_pane_ParamLimits

0xd4df,	// (0x00033be7) cell_toolbar2_fixed_pane

0xd4fc,	// (0x00033c04) cell_toolbar2_fixed_pane_g1

0x61a1,	// (0x0002c8a9) toolbar2_fixed_button_pane

0x132a,	// (0x00027a32) toolbar2_fixed_button_pane_g1

0x1332,	// (0x00027a3a) toolbar2_fixed_button_pane_g2

0x133a,	// (0x00027a42) toolbar2_fixed_button_pane_g3

0x1342,	// (0x00027a4a) toolbar2_fixed_button_pane_g4

0x134a,	// (0x00027a52) toolbar2_fixed_button_pane_g5

0x1352,	// (0x00027a5a) toolbar2_fixed_button_pane_g6

0x135a,	// (0x00027a62) toolbar2_fixed_button_pane_g7

0x1362,	// (0x00027a6a) toolbar2_fixed_button_pane_g8

0x136a,	// (0x00027a72) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x00035f69) toolbar2_fixed_button_pane_g

0x61a9,	// (0x0002c8b1) cell_toolbar2_float_pane_ParamLimits

0x61a9,	// (0x0002c8b1) cell_toolbar2_float_pane

0x61ba,	// (0x0002c8c2) cell_toolbar2_float_pane_g1

0x61a1,	// (0x0002c8a9) toolbar2_fixed_button_pane_cp

0xbfc2,	// (0x000326ca) fep_vkb_accented_list_pane_ParamLimits

0xbfc2,	// (0x000326ca) fep_vkb_accented_list_pane

0x1db3,	// (0x000284bb) bg_popup_fep_shadow_pane_g9

0xd260,	// (0x00033968) bg_popup_fep_shadow_pane_cp3

0xca22,	// (0x0003312a) list_accented_list_pane

0x61c3,	// (0x0002c8cb) list_single_accented_list_pane_ParamLimits

0x61c3,	// (0x0002c8cb) list_single_accented_list_pane

0xd260,	// (0x00033968) list_highlight_pane_cp10

0x61d4,	// (0x0002c8dc) list_single_accented_list_pane_t1

0xafd8,	// (0x000316e0) popup_slider_window_ParamLimits

0xafd8,	// (0x000316e0) popup_slider_window

0x5e1c,	// (0x0002c524) aid_indentation_list_msg

0xd607,	// (0x00033d0f) bg_popup_window_pane_cp19

0x630e,	// (0x0002ca16) popup_slider_window_g1

0x632a,	// (0x0002ca32) popup_slider_window_g2

0x6346,	// (0x0002ca4e) popup_slider_window_g3

0x0005,

0xfcea,	// (0x000363f2) popup_slider_window_g

0x63a2,	// (0x0002caaa) popup_slider_window_t1

0x6416,	// (0x0002cb1e) small_volume_slider_vertical_pane

0x4cdf,	// (0x0002b3e7) small_volume_slider_vertical_pane_g1

0x4cdf,	// (0x0002b3e7) small_volume_slider_vertical_pane_g2

0x6432,	// (0x0002cb3a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfc,	// (0x00036404) small_volume_slider_vertical_pane_g

0x9866,	// (0x0002ff6e) area_side_right_pane_ParamLimits

0x9866,	// (0x0002ff6e) area_side_right_pane

0xc2b6,	// (0x000329be) aid_size_side_button_ParamLimits

0xc2b6,	// (0x000329be) aid_size_side_button

0xc2cf,	// (0x000329d7) grid_sctrl_middle_pane_ParamLimits

0xc2cf,	// (0x000329d7) grid_sctrl_middle_pane

0x1f43,	// (0x0002864b) sctrl_sk_bottom_pane

0x1f54,	// (0x0002865c) sctrl_sk_top_pane

0x1f66,	// (0x0002866e) aid_touch_sctrl_top

0x9e10,	// (0x00030518) bg_sctrl_sk_pane_ParamLimits

0x9e10,	// (0x00030518) bg_sctrl_sk_pane

0x1f73,	// (0x0002867b) sctrl_sk_top_pane_g1

0x1f80,	// (0x00028688) sctrl_sk_top_pane_t1

0x1f66,	// (0x0002866e) aid_touch_sctrl_bottom

0x9e10,	// (0x00030518) bg_sctrl_sk_pane_cp_ParamLimits

0x9e10,	// (0x00030518) bg_sctrl_sk_pane_cp

0x1f9b,	// (0x000286a3) sctrl_sk_bottom_pane_g1

0x1f80,	// (0x00028688) sctrl_sk_bottom_pane_t1

0xc2e9,	// (0x000329f1) cell_sctrl_middle_pane_ParamLimits

0xc2e9,	// (0x000329f1) cell_sctrl_middle_pane

0xc2fc,	// (0x00032a04) aid_touch_sctrl_middle_ParamLimits

0xc2fc,	// (0x00032a04) aid_touch_sctrl_middle

0xc309,	// (0x00032a11) bg_sctrl_middle_pane_ParamLimits

0xc309,	// (0x00032a11) bg_sctrl_middle_pane

0x64bd,	// (0x0002cbc5) cell_sctrl_middle_pane_g1_ParamLimits

0x64bd,	// (0x0002cbc5) cell_sctrl_middle_pane_g1

0xc317,	// (0x00032a1f) cell_sctrl_middle_pane_g2_ParamLimits

0xc317,	// (0x00032a1f) cell_sctrl_middle_pane_g2

0x0001,

0xfd08,	// (0x00036410) cell_sctrl_middle_pane_g_ParamLimits

0xfd08,	// (0x00036410) cell_sctrl_middle_pane_g

0x132a,	// (0x00027a32) bg_sctrl_middle_pane_g1

0x1332,	// (0x00027a3a) bg_sctrl_middle_pane_g2

0x133a,	// (0x00027a42) bg_sctrl_middle_pane_g3

0x1342,	// (0x00027a4a) bg_sctrl_middle_pane_g4

0x134a,	// (0x00027a52) bg_sctrl_middle_pane_g5

0x1352,	// (0x00027a5a) bg_sctrl_middle_pane_g6

0x135a,	// (0x00027a62) bg_sctrl_middle_pane_g7

0x1362,	// (0x00027a6a) bg_sctrl_middle_pane_g8

0x0007,

0xfd0d,	// (0x00036415) bg_sctrl_middle_pane_g

0x136a,	// (0x00027a72) bg_sctrl_middle_pane_g8_copy1

0x132a,	// (0x00027a32) bg_sctrl_sk_pane_g1

0x1332,	// (0x00027a3a) bg_sctrl_sk_pane_g2

0x133a,	// (0x00027a42) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x00035f69) bg_sctrl_sk_pane_g

0xa32c,	// (0x00030a34) aid_size_touch_scroll_bar

0x1342,	// (0x00027a4a) bg_sctrl_sk_pane_g4

0x134a,	// (0x00027a52) bg_sctrl_sk_pane_g5

0x1352,	// (0x00027a5a) bg_sctrl_sk_pane_g6

0x135a,	// (0x00027a62) bg_sctrl_sk_pane_g7

0x1362,	// (0x00027a6a) bg_sctrl_sk_pane_g8

0x136a,	// (0x00027a72) bg_sctrl_sk_pane_g9

0x0867,	// (0x00026f6f) popup_fep_china_hwr2_fs_candidate_window

0xaa90,	// (0x00031198) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xaa90,	// (0x00031198) popup_fep_china_hwr2_fs_control_window

0x4f5a,	// (0x0002b662) sctrl_sk_top_pane_g2

0x0001,

0xfd03,	// (0x0003640b) sctrl_sk_top_pane_g

0xd6bf,	// (0x00033dc7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd6bf,	// (0x00033dc7) aid_fep_china_hwr2_fs_cell

0xd6d5,	// (0x00033ddd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd6d5,	// (0x00033ddd) bg_popup_fep_shadow_pane_cp4

0xd6ec,	// (0x00033df4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd6ec,	// (0x00033df4) bg_popup_fep_shadow_pane_cp5

0xd6fe,	// (0x00033e06) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd6fe,	// (0x00033e06) popup_fep_china_hwr2_fs_control_bar_grid

0xd712,	// (0x00033e1a) popup_fep_china_hwr2_fs_control_funtion_grid

0x6491,	// (0x0002cb99) aid_fep_china_hwr2_fs_candi_cell

0x97ae,	// (0x0002feb6) bg_popup_fep_shadow_pane_cp6

0x649b,	// (0x0002cba3) popup_fep_china_hwr2_fs_candidate_grid

0xd71a,	// (0x00033e22) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd71a,	// (0x00033e22) cell_fep_china_hwr2_fs_funtion_grid

0x4cdf,	// (0x0002b3e7) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x64bd,	// (0x0002cbc5) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x64bd,	// (0x0002cbc5) cell_fep_china_hwr2_fs_funtion_grid_g1

0x64cb,	// (0x0002cbd3) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x64cb,	// (0x0002cbd3) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1e,	// (0x00036426) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1e,	// (0x00036426) cell_fep_china_hwr2_fs_funtion_grid_g

0xd732,	// (0x00033e3a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd732,	// (0x00033e3a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd747,	// (0x00033e4f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd747,	// (0x00033e4f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd23,	// (0x0003642b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd23,	// (0x0003642b) cell_fep_china_hwr2_fs_funtion_grid_t

0x6512,	// (0x0002cc1a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x651a,	// (0x0002cc22) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6522,	// (0x0002cc2a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd28,	// (0x00036430) popup_fep_china_hwr2_fs_control_bar_grid_g

0x652a,	// (0x0002cc32) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x652a,	// (0x0002cc32) cell_fep_china_hwr2_fs_candidate_grid

0x6549,	// (0x0002cc51) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6551,	// (0x0002cc59) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4cdf,	// (0x0002b3e7) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4cdf,	// (0x0002b3e7) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x00036250) cell_fep_china_hwr2_fs_candidate_grid_g

0x6559,	// (0x0002cc61) cell_fep_china_hwr2_fs_candidate_grid_t1

0x0ed6,	// (0x000275de) clock_nsta_pane_cp_24_ParamLimits

0x0ed6,	// (0x000275de) clock_nsta_pane_cp_24

0x0f56,	// (0x0002765e) indicator_nsta_pane_cp_24_ParamLimits

0x0f56,	// (0x0002765e) indicator_nsta_pane_cp_24

0x336e,	// (0x00029a76) heading_pane_g1

0x0001,

0xf8c6,	// (0x00035fce) heading_pane_g

0x3e10,	// (0x0002a518) grid_sct_catagory_button_pane

0x3e42,	// (0x0002a54a) scroll_pane_cp5_ParamLimits

0x492b,	// (0x0002b033) button_value_adjust_pane_cp5_ParamLimits

0x492b,	// (0x0002b033) button_value_adjust_pane_cp5

0x4a10,	// (0x0002b118) form2_midp_time_pane_ParamLimits

0x6567,	// (0x0002cc6f) cell_sct_catagory_button_pane_ParamLimits

0x6567,	// (0x0002cc6f) cell_sct_catagory_button_pane

0x4ca4,	// (0x0002b3ac) bg_button_pane_cp01_ParamLimits

0x4ca4,	// (0x0002b3ac) bg_button_pane_cp01

0x4cdf,	// (0x0002b3e7) cell_sct_catagory_button_pane_g1

0xb059,	// (0x00031761) popup_tb_extension_window

0xd763,	// (0x00033e6b) aid_size_cell_ext_ParamLimits

0xd763,	// (0x00033e6b) aid_size_cell_ext

0xa16e,	// (0x00030876) bg_tb_trans_pane_cp1_ParamLimits

0xa16e,	// (0x00030876) bg_tb_trans_pane_cp1

0xd789,	// (0x00033e91) grid_tb_ext_pane_ParamLimits

0xd789,	// (0x00033e91) grid_tb_ext_pane

0xd7c9,	// (0x00033ed1) cell_tb_ext_pane_ParamLimits

0xd7c9,	// (0x00033ed1) cell_tb_ext_pane

0xd7f1,	// (0x00033ef9) cell_tb_ext_pane_g1_ParamLimits

0xd7f1,	// (0x00033ef9) cell_tb_ext_pane_g1

0x65fd,	// (0x0002cd05) cell_tb_ext_pane_t1

0x9e10,	// (0x00030518) list_highlight_pane_cp11_ParamLimits

0x9e10,	// (0x00030518) list_highlight_pane_cp11

0x991b,	// (0x00030023) popup_uni_indicator_window_ParamLimits

0x991b,	// (0x00030023) popup_uni_indicator_window

0xc90f,	// (0x00033017) bg_popup_sub_pane_cp14

0x6618,	// (0x0002cd20) list_uniindi_pane

0x6624,	// (0x0002cd2c) uniindi_top_pane

0x9e10,	// (0x00030518) bg_uniindi_top_pane

0x6645,	// (0x0002cd4d) uniindi_top_pane_g1

0x665b,	// (0x0002cd63) uniindi_top_pane_g2

0x0003,

0xfd2f,	// (0x00036437) uniindi_top_pane_g

0x6685,	// (0x0002cd8d) uniindi_top_pane_t1

0x66b1,	// (0x0002cdb9) list_single_uniindi_pane_ParamLimits

0x66b1,	// (0x0002cdb9) list_single_uniindi_pane

0x4cdf,	// (0x0002b3e7) bg_uniindi_top_pane_g1

0x66c3,	// (0x0002cdcb) list_single_uniindi_pane_g1

0x66d6,	// (0x0002cdde) list_single_uniindi_pane_t1

0x97ae,	// (0x0002feb6) control_bg_pane

0x66fb,	// (0x0002ce03) bg_sctrl_sk_pane_cp1

0x6704,	// (0x0002ce0c) bg_sctrl_sk_pane_cp2

0x670d,	// (0x0002ce15) control_bg_pane_g1

0x6716,	// (0x0002ce1e) control_bg_pane_g2

0x0001,

0xfd38,	// (0x00036440) control_bg_pane_g

0x4752,	// (0x0002ae5a) cell_indicator_nsta_pane_g1_ParamLimits

0xbd91,	// (0x00032499) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x000361b4) cell_indicator_nsta_pane_g_ParamLimits

0xedfc,	// (0x00035504) form2_midp_time_pane_t1_ParamLimits

0x84fc,	// (0x0002ec04) main_idle_act4_pane_ParamLimits

0x84fc,	// (0x0002ec04) main_idle_act4_pane

0xb059,	// (0x00031761) popup_tb_extension_window_ParamLimits

0xd7b1,	// (0x00033eb9) tb_ext_find_pane_ParamLimits

0xd7b1,	// (0x00033eb9) tb_ext_find_pane

0x671f,	// (0x0002ce27) ai_gene_pane_1_cp1

0x0385,	// (0x00026a8d) ai_gene_pane_2_cp1

0x6727,	// (0x0002ce2f) list_single_idle_plugin_calendar_pane

0x6730,	// (0x0002ce38) list_single_idle_plugin_notification_pane

0x6739,	// (0x0002ce41) list_single_idle_plugin_player_pane

0xd80e,	// (0x00033f16) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd80e,	// (0x00033f16) list_single_idle_plugin_shortcut_pane

0xd836,	// (0x00033f3e) main_idle_act4_pane_t1

0xd84e,	// (0x00033f56) main_idle_act4_pane_t2

0x0001,

0xfd3d,	// (0x00036445) main_idle_act4_pane_t

0xd866,	// (0x00033f6e) middle_sk_idle_act4_pane_ParamLimits

0xd866,	// (0x00033f6e) middle_sk_idle_act4_pane

0xd882,	// (0x00033f8a) popup_clock_digital_analogue_window_cp2

0xd8a9,	// (0x00033fb1) shortcut_wheel_idle_act4_pane_ParamLimits

0xd8a9,	// (0x00033fb1) shortcut_wheel_idle_act4_pane

0x4cdf,	// (0x0002b3e7) shortcut_wheel_idle_act4_pane_g1

0x4cdf,	// (0x0002b3e7) shortcut_wheel_idle_act4_pane_g2

0x4cdf,	// (0x0002b3e7) shortcut_wheel_idle_act4_pane_g3

0x4cdf,	// (0x0002b3e7) shortcut_wheel_idle_act4_pane_g4

0x4cdf,	// (0x0002b3e7) shortcut_wheel_idle_act4_pane_g5

0x67cc,	// (0x0002ced4) shortcut_wheel_idle_act4_pane_g6

0x67d4,	// (0x0002cedc) shortcut_wheel_idle_act4_pane_g7

0x67dc,	// (0x0002cee4) shortcut_wheel_idle_act4_pane_g8

0x67e4,	// (0x0002ceec) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd42,	// (0x0003644a) shortcut_wheel_idle_act4_pane_g

0xbf4d,	// (0x00032655) middle_sk_idle_act4_pane_g1_ParamLimits

0xbf4d,	// (0x00032655) middle_sk_idle_act4_pane_g1

0xd926,	// (0x0003402e) middle_sk_idle_act4_pane_g2_ParamLimits

0xd926,	// (0x0003402e) middle_sk_idle_act4_pane_g2

0x0001,

0xfd65,	// (0x0003646d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd65,	// (0x0003646d) middle_sk_idle_act4_pane_g

0xd93e,	// (0x00034046) middle_sk_idle_act4_pane_t1_ParamLimits

0xd93e,	// (0x00034046) middle_sk_idle_act4_pane_t1

0xd96d,	// (0x00034075) grid_ai_shortcut_pane_ParamLimits

0xd96d,	// (0x00034075) grid_ai_shortcut_pane

0xd98a,	// (0x00034092) list_highlight_pane_cp16_ParamLimits

0xd98a,	// (0x00034092) list_highlight_pane_cp16

0xd997,	// (0x0003409f) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd997,	// (0x0003409f) list_single_idle_plugin_shortcut_pane_g1

0xd9a3,	// (0x000340ab) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd9a3,	// (0x000340ab) list_single_idle_plugin_shortcut_pane_g2

0xd9c1,	// (0x000340c9) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd9c1,	// (0x000340c9) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6a,	// (0x00036472) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6a,	// (0x00036472) list_single_idle_plugin_shortcut_pane_g

0xd9d6,	// (0x000340de) cell_ai_shortcut_pane_ParamLimits

0xd9d6,	// (0x000340de) cell_ai_shortcut_pane

0xd9ec,	// (0x000340f4) cell_ai_shortcut_pane_g1_ParamLimits

0xd9ec,	// (0x000340f4) cell_ai_shortcut_pane_g1

0x671f,	// (0x0002ce27) ai_gene_pane_1_cp2

0x6915,	// (0x0002d01d) ai_gene_pane_2_cp2

0x691d,	// (0x0002d025) list_highlight_pane_cp15

0x6926,	// (0x0002d02e) list_single_idle_plugin_calendar_pane_g1

0x691d,	// (0x0002d025) list_highlight_pane_cp17

0x692e,	// (0x0002d036) list_single_idle_plugin_calendar_pane_g1_copy1

0x6936,	// (0x0002d03e) list_single_idle_plugin_player_pane_g1

0x4077,	// (0x0002a77f) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd71,	// (0x00036479) list_single_idle_plugin_player_pane_g

0x693e,	// (0x0002d046) list_single_idle_plugin_player_pane_t1

0x694c,	// (0x0002d054) list_single_idle_plugin_player_pane_t2

0x695a,	// (0x0002d062) list_single_idle_plugin_player_pane_t3

0x6968,	// (0x0002d070) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd76,	// (0x0003647e) list_single_idle_plugin_player_pane_t

0x6976,	// (0x0002d07e) wait_bar_pane_cp15

0x697e,	// (0x0002d086) grid_ai_notification_pane

0x4077,	// (0x0002a77f) list_single_idle_plugin_notification_pane_g1

0xda0e,	// (0x00034116) cell_ai_notification_pane_ParamLimits

0xda0e,	// (0x00034116) cell_ai_notification_pane

0x6994,	// (0x0002d09c) cell_ai_notification_pane_g1

0x699c,	// (0x0002d0a4) cell_ai_notification_pane_t1

0xda1b,	// (0x00034123) tb_ext_find_button_pane

0xda23,	// (0x0003412b) tb_ext_find_pane_g1

0xda2b,	// (0x00034133) tb_ext_find_pane_t1

0xcdf1,	// (0x000334f9) tb_ext_find_button_pane_g1

0x69c8,	// (0x0002d0d0) tb_ext_find_button_pane_g2

0x0001,

0xfd7f,	// (0x00036487) tb_ext_find_button_pane_g

0xd836,	// (0x00033f3e) main_idle_act4_pane_t1_ParamLimits

0xd84e,	// (0x00033f56) main_idle_act4_pane_t2_ParamLimits

0xfd3d,	// (0x00036445) main_idle_act4_pane_t_ParamLimits

0xd882,	// (0x00033f8a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd899,	// (0x00033fa1) sat_plugin_idle_act4_pane_ParamLimits

0xd899,	// (0x00033fa1) sat_plugin_idle_act4_pane

0xda39,	// (0x00034141) sat_plugin_idle_act4_pane_t1_ParamLimits

0xda39,	// (0x00034141) sat_plugin_idle_act4_pane_t1

0xda51,	// (0x00034159) sat_plugin_idle_act4_pane_t2_ParamLimits

0xda51,	// (0x00034159) sat_plugin_idle_act4_pane_t2

0xda69,	// (0x00034171) sat_plugin_idle_act4_pane_t3_ParamLimits

0xda69,	// (0x00034171) sat_plugin_idle_act4_pane_t3

0xda81,	// (0x00034189) sat_plugin_idle_act4_pane_t4_ParamLimits

0xda81,	// (0x00034189) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd84,	// (0x0003648c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd84,	// (0x0003648c) sat_plugin_idle_act4_pane_t

0xf18e,	// (0x00035896) popup_battery_window_ParamLimits

0xf18e,	// (0x00035896) popup_battery_window

0x9e10,	// (0x00030518) bg_popup_sub_pane_cp25_ParamLimits

0x9e10,	// (0x00030518) bg_popup_sub_pane_cp25

0x6a1d,	// (0x0002d125) popup_battery_window_g1_ParamLimits

0x6a1d,	// (0x0002d125) popup_battery_window_g1

0x6a29,	// (0x0002d131) popup_battery_window_t1_ParamLimits

0x6a29,	// (0x0002d131) popup_battery_window_t1

0x6a3b,	// (0x0002d143) popup_battery_window_t2_ParamLimits

0x6a3b,	// (0x0002d143) popup_battery_window_t2

0x0001,

0xfd8d,	// (0x00036495) popup_battery_window_t_ParamLimits

0xfd8d,	// (0x00036495) popup_battery_window_t

0xa718,	// (0x00030e20) midp_canvas_pane_ParamLimits

0xa773,	// (0x00030e7b) midp_keypad_pane_ParamLimits

0xa773,	// (0x00030e7b) midp_keypad_pane

0x07b9,	// (0x00026ec1) main_midp_pane_ParamLimits

0x47de,	// (0x0002aee6) signal_pane_g2_cp_ParamLimits

0xda99,	// (0x000341a1) aid_size_cell_midp_keypad_ParamLimits

0xda99,	// (0x000341a1) aid_size_cell_midp_keypad

0xdab7,	// (0x000341bf) midp_keyp_game_grid_pane_ParamLimits

0xdab7,	// (0x000341bf) midp_keyp_game_grid_pane

0xdade,	// (0x000341e6) midp_keyp_rocker_pane_ParamLimits

0xdade,	// (0x000341e6) midp_keyp_rocker_pane

0xdb1d,	// (0x00034225) midp_keyp_sk_left_pane_ParamLimits

0xdb1d,	// (0x00034225) midp_keyp_sk_left_pane

0xdb71,	// (0x00034279) midp_keyp_sk_right_pane_ParamLimits

0xdb71,	// (0x00034279) midp_keyp_sk_right_pane

0x97ae,	// (0x0002feb6) bg_button_pane_cp03

0xdbc5,	// (0x000342cd) midp_keyp_sk_left_pane_g1

0x97ae,	// (0x0002feb6) bg_button_pane_cp04

0xdbc5,	// (0x000342cd) midp_keyp_sk_right_pane_g1

0x4cdf,	// (0x0002b3e7) midp_keyp_rocker_pane_g1

0xdbce,	// (0x000342d6) keyp_game_cell_pane_ParamLimits

0xdbce,	// (0x000342d6) keyp_game_cell_pane

0x97ae,	// (0x0002feb6) bg_button_pane_cp02

0xdbf4,	// (0x000342fc) keyp_game_cell_pane_g1

0x98b2,	// (0x0002ffba) popup_fep_vkb2_window_ParamLimits

0x98b2,	// (0x0002ffba) popup_fep_vkb2_window

0xc323,	// (0x00032a2b) aid_size_cell_vkb2_ParamLimits

0xc323,	// (0x00032a2b) aid_size_cell_vkb2

0xc359,	// (0x00032a61) popup_fep_vkb2_window_g1_ParamLimits

0xc359,	// (0x00032a61) popup_fep_vkb2_window_g1

0xc3a9,	// (0x00032ab1) vkb2_area_bottom_pane_ParamLimits

0xc3a9,	// (0x00032ab1) vkb2_area_bottom_pane

0xc405,	// (0x00032b0d) vkb2_area_keypad_pane_ParamLimits

0xc405,	// (0x00032b0d) vkb2_area_keypad_pane

0xc453,	// (0x00032b5b) vkb2_area_top_pane_ParamLimits

0xc453,	// (0x00032b5b) vkb2_area_top_pane

0xc4d9,	// (0x00032be1) vkb2_top_entry_pane_ParamLimits

0xc4d9,	// (0x00032be1) vkb2_top_entry_pane

0xc506,	// (0x00032c0e) vkb2_top_grid_left_pane_ParamLimits

0xc506,	// (0x00032c0e) vkb2_top_grid_left_pane

0xc526,	// (0x00032c2e) vkb2_top_grid_right_pane_ParamLimits

0xc526,	// (0x00032c2e) vkb2_top_grid_right_pane

0x2207,	// (0x0002890f) vkb2_cell_keypad_pane_ParamLimits

0x2207,	// (0x0002890f) vkb2_cell_keypad_pane

0xc56c,	// (0x00032c74) vkb2_area_bottom_grid_pane_ParamLimits

0xc56c,	// (0x00032c74) vkb2_area_bottom_grid_pane

0xc596,	// (0x00032c9e) vkb2_area_bottom_pane_g1_ParamLimits

0xc596,	// (0x00032c9e) vkb2_area_bottom_pane_g1

0xc5bc,	// (0x00032cc4) vkb2_area_bottom_pane_g2_ParamLimits

0xc5bc,	// (0x00032cc4) vkb2_area_bottom_pane_g2

0xc5ed,	// (0x00032cf5) vkb2_area_bottom_pane_g3_ParamLimits

0xc5ed,	// (0x00032cf5) vkb2_area_bottom_pane_g3

0x0002,

0xfd92,	// (0x0003649a) vkb2_area_bottom_pane_g_ParamLimits

0xfd92,	// (0x0003649a) vkb2_area_bottom_pane_g

0x23b1,	// (0x00028ab9) vkb2_top_cell_left_pane_ParamLimits

0x23b1,	// (0x00028ab9) vkb2_top_cell_left_pane

0xdbfd,	// (0x00034305) vkb2_top_entry_pane_g1_ParamLimits

0xdbfd,	// (0x00034305) vkb2_top_entry_pane_g1

0xdc0b,	// (0x00034313) vkb2_top_entry_pane_t1_ParamLimits

0xdc0b,	// (0x00034313) vkb2_top_entry_pane_t1

0x6bde,	// (0x0002d2e6) vkb2_top_entry_pane_t2_ParamLimits

0x6bde,	// (0x0002d2e6) vkb2_top_entry_pane_t2

0x6c10,	// (0x0002d318) vkb2_top_entry_pane_t3_ParamLimits

0x6c10,	// (0x0002d318) vkb2_top_entry_pane_t3

0x0002,

0xfd99,	// (0x000364a1) vkb2_top_entry_pane_t_ParamLimits

0xfd99,	// (0x000364a1) vkb2_top_entry_pane_t

0xc657,	// (0x00032d5f) vkb2_top_grid_right_pane_g1_ParamLimits

0xc657,	// (0x00032d5f) vkb2_top_grid_right_pane_g1

0x2414,	// (0x00028b1c) vkb2_top_grid_right_pane_g2_ParamLimits

0x2414,	// (0x00028b1c) vkb2_top_grid_right_pane_g2

0x242c,	// (0x00028b34) vkb2_top_grid_right_pane_g3_ParamLimits

0x242c,	// (0x00028b34) vkb2_top_grid_right_pane_g3

0xc66d,	// (0x00032d75) vkb2_top_grid_right_pane_g4_ParamLimits

0xc66d,	// (0x00032d75) vkb2_top_grid_right_pane_g4

0x0003,

0xfda0,	// (0x000364a8) vkb2_top_grid_right_pane_g_ParamLimits

0xfda0,	// (0x000364a8) vkb2_top_grid_right_pane_g

0x245a,	// (0x00028b62) vkb2_top_cell_left_pane_g1

0x2471,	// (0x00028b79) vkb2_cell_keypad_pane_g1_ParamLimits

0x2471,	// (0x00028b79) vkb2_cell_keypad_pane_g1

0x6c34,	// (0x0002d33c) vkb2_cell_keypad_pane_t1_ParamLimits

0x6c34,	// (0x0002d33c) vkb2_cell_keypad_pane_t1

0x247f,	// (0x00028b87) vkb2_cell_bottom_grid_pane_ParamLimits

0x247f,	// (0x00028b87) vkb2_cell_bottom_grid_pane

0x24b8,	// (0x00028bc0) vkb2_cell_bottom_grid_pane_g1

0xd8ca,	// (0x00033fd2) aid_call2_pane_cp02

0xd8d2,	// (0x00033fda) aid_call_pane_cp02

0xd8da,	// (0x00033fe2) clock_digital_number_pane_cp10

0xd8e2,	// (0x00033fea) clock_digital_number_pane_cp11

0xd8ea,	// (0x00033ff2) clock_digital_number_pane_cp12

0xd8f2,	// (0x00033ffa) clock_digital_number_pane_cp13

0xd8fa,	// (0x00034002) clock_digital_separator_pane_cp10

0xcdf1,	// (0x000334f9) popup_clock_digital_analogue_window_cp2_g1

0xcdf1,	// (0x000334f9) popup_clock_digital_analogue_window_cp2_g2

0xd902,	// (0x0003400a) popup_clock_digital_analogue_window_cp2_g3

0xcdf1,	// (0x000334f9) popup_clock_digital_analogue_window_cp2_g4

0xd902,	// (0x0003400a) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd55,	// (0x0003645d) popup_clock_digital_analogue_window_cp2_g

0xd90a,	// (0x00034012) popup_clock_digital_analogue_window_cp2_t1

0xd918,	// (0x00034020) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd60,	// (0x00036468) popup_clock_digital_analogue_window_cp2_t

0x4cdf,	// (0x0002b3e7) clock_digital_number_pane_cp10_g1

0x4cdf,	// (0x0002b3e7) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x00036250) clock_digital_number_pane_cp10_g

0x4cdf,	// (0x0002b3e7) clock_digital_separator_pane_cp10_g1

0x4cdf,	// (0x0002b3e7) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x00036250) clock_digital_separator_pane_cp10_g

0x6667,	// (0x0002cd6f) uniindi_top_pane_g3

0x6678,	// (0x0002cd80) uniindi_top_pane_g4

0x2292,	// (0x0002899a) vkb2_row_keypad_pane_ParamLimits

0x2292,	// (0x0002899a) vkb2_row_keypad_pane

0x24d4,	// (0x00028bdc) vkb2_cell_t_keypad_pane_ParamLimits

0x24d4,	// (0x00028bdc) vkb2_cell_t_keypad_pane

0x24e4,	// (0x00028bec) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x24e4,	// (0x00028bec) vkb2_cell_t_keypad_pane_cp08

0x24f9,	// (0x00028c01) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x24f9,	// (0x00028c01) vkb2_cell_t_keypad_pane_cp09

0x250d,	// (0x00028c15) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x250d,	// (0x00028c15) vkb2_cell_t_keypad_pane_cp01

0x251e,	// (0x00028c26) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x251e,	// (0x00028c26) vkb2_cell_t_keypad_pane_cp02

0x252f,	// (0x00028c37) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x252f,	// (0x00028c37) vkb2_cell_t_keypad_pane_cp03

0x2540,	// (0x00028c48) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2540,	// (0x00028c48) vkb2_cell_t_keypad_pane_cp04

0x2551,	// (0x00028c59) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2551,	// (0x00028c59) vkb2_cell_t_keypad_pane_cp05

0x2562,	// (0x00028c6a) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2562,	// (0x00028c6a) vkb2_cell_t_keypad_pane_cp06

0x2575,	// (0x00028c7d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2575,	// (0x00028c7d) vkb2_cell_t_keypad_pane_cp07

0x258a,	// (0x00028c92) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x258a,	// (0x00028c92) vkb2_cell_t_keypad_pane_cp10

0x4f5a,	// (0x0002b662) vkb2_cell_t_keypad_pane_g1

0x6c4b,	// (0x0002d353) vkb2_cell_t_keypad_pane_t1

0x97ae,	// (0x0002feb6) popup_grid_graphic2_window

0xdc44,	// (0x0003434c) aid_size_cell_graphic2_ParamLimits

0xdc44,	// (0x0003434c) aid_size_cell_graphic2

0xdc82,	// (0x0003438a) bg_popup_window_pane_cp21_ParamLimits

0xdc82,	// (0x0003438a) bg_popup_window_pane_cp21

0xdc90,	// (0x00034398) graphic2_pages_pane_ParamLimits

0xdc90,	// (0x00034398) graphic2_pages_pane

0xdce8,	// (0x000343f0) grid_graphic2_control_pane_ParamLimits

0xdce8,	// (0x000343f0) grid_graphic2_control_pane

0xdd30,	// (0x00034438) grid_graphic2_pane_ParamLimits

0xdd30,	// (0x00034438) grid_graphic2_pane

0xddbb,	// (0x000344c3) cell_graphic2_pane

0x97ae,	// (0x0002feb6) main_comp_mode_pane

0x5ed8,	// (0x0002c5e0) list_ai3_gene_pane_ParamLimits

0xd607,	// (0x00033d0f) bg_popup_window_pane_cp19_ParamLimits

0x62ac,	// (0x0002c9b4) bg_touch_area_indi_pane_ParamLimits

0x62ac,	// (0x0002c9b4) bg_touch_area_indi_pane

0x62c2,	// (0x0002c9ca) bg_touch_area_indi_pane_cp01_ParamLimits

0x62c2,	// (0x0002c9ca) bg_touch_area_indi_pane_cp01

0x62da,	// (0x0002c9e2) bg_touch_area_indi_pane_cp02_ParamLimits

0x62da,	// (0x0002c9e2) bg_touch_area_indi_pane_cp02

0x62f4,	// (0x0002c9fc) bg_touch_area_indi_pane_cp03_ParamLimits

0x62f4,	// (0x0002c9fc) bg_touch_area_indi_pane_cp03

0x630e,	// (0x0002ca16) popup_slider_window_g1_ParamLimits

0x632a,	// (0x0002ca32) popup_slider_window_g2_ParamLimits

0x6346,	// (0x0002ca4e) popup_slider_window_g3_ParamLimits

0xfcea,	// (0x000363f2) popup_slider_window_g_ParamLimits

0x63a2,	// (0x0002caaa) popup_slider_window_t1_ParamLimits

0x6416,	// (0x0002cb1e) small_volume_slider_vertical_pane_ParamLimits

0xddbb,	// (0x000344c3) cell_graphic2_pane_ParamLimits

0xde1e,	// (0x00034526) bg_button_pane_cp10_ParamLimits

0xde1e,	// (0x00034526) bg_button_pane_cp10

0xde31,	// (0x00034539) bg_button_pane_cp11_ParamLimits

0xde31,	// (0x00034539) bg_button_pane_cp11

0xde44,	// (0x0003454c) graphic2_pages_pane_g1_ParamLimits

0xde44,	// (0x0003454c) graphic2_pages_pane_g1

0xde5f,	// (0x00034567) graphic2_pages_pane_g2_ParamLimits

0xde5f,	// (0x00034567) graphic2_pages_pane_g2

0x0001,

0xfdae,	// (0x000364b6) graphic2_pages_pane_g_ParamLimits

0xfdae,	// (0x000364b6) graphic2_pages_pane_g

0xde77,	// (0x0003457f) graphic2_pages_pane_t1_ParamLimits

0xde77,	// (0x0003457f) graphic2_pages_pane_t1

0xde8f,	// (0x00034597) cell_graphic2_control_pane_ParamLimits

0xde8f,	// (0x00034597) cell_graphic2_control_pane

0xdec3,	// (0x000345cb) cell_graphic2_pane_g1_ParamLimits

0xdec3,	// (0x000345cb) cell_graphic2_pane_g1

0xbfa8,	// (0x000326b0) cell_graphic2_pane_g2_ParamLimits

0xbfa8,	// (0x000326b0) cell_graphic2_pane_g2

0xded0,	// (0x000345d8) cell_graphic2_pane_g3_ParamLimits

0xded0,	// (0x000345d8) cell_graphic2_pane_g3

0xbfb5,	// (0x000326bd) cell_graphic2_pane_g4_ParamLimits

0xbfb5,	// (0x000326bd) cell_graphic2_pane_g4

0xdedd,	// (0x000345e5) cell_graphic2_pane_g5_ParamLimits

0xdedd,	// (0x000345e5) cell_graphic2_pane_g5

0x0004,

0xfdb3,	// (0x000364bb) cell_graphic2_pane_g_ParamLimits

0xfdb3,	// (0x000364bb) cell_graphic2_pane_g

0xdefd,	// (0x00034605) cell_graphic2_pane_t1_ParamLimits

0xdefd,	// (0x00034605) cell_graphic2_pane_t1

0x3362,	// (0x00029a6a) grid_highlight_pane_cp11_ParamLimits

0x3362,	// (0x00029a6a) grid_highlight_pane_cp11

0x9e10,	// (0x00030518) bg_button_pane_cp05

0xdf32,	// (0x0003463a) cell_graphic2_control_pane_g1

0x4cdf,	// (0x0002b3e7) bg_touch_area_indi_pane_g1

0x6f25,	// (0x0002d62d) aid_cmod_rocker_key_size

0x6f2f,	// (0x0002d637) aid_cmode_itu_key_size

0x6f39,	// (0x0002d641) main_cmode_video_pane

0x6f43,	// (0x0002d64b) main_comp_mode_itu_pane

0x6f4f,	// (0x0002d657) main_comp_mode_rocker_pane

0x6f5b,	// (0x0002d663) cell_cmode_rocker_pane_ParamLimits

0x6f5b,	// (0x0002d663) cell_cmode_rocker_pane

0x6f6f,	// (0x0002d677) cell_cmode_itu_pane_ParamLimits

0x6f6f,	// (0x0002d677) cell_cmode_itu_pane

0xc90f,	// (0x00033017) bg_button_pane_cp06_ParamLimits

0xc90f,	// (0x00033017) bg_button_pane_cp06

0x4f5a,	// (0x0002b662) cell_cmode_rocker_pane_g1_ParamLimits

0x4f5a,	// (0x0002b662) cell_cmode_rocker_pane_g1

0x64bd,	// (0x0002cbc5) cell_cmode_rocker_pane_g2_ParamLimits

0x64bd,	// (0x0002cbc5) cell_cmode_rocker_pane_g2

0x0001,

0xfdc3,	// (0x000364cb) cell_cmode_rocker_pane_g_ParamLimits

0xfdc3,	// (0x000364cb) cell_cmode_rocker_pane_g

0x97ae,	// (0x0002feb6) bg_button_pane_cp07

0x6f86,	// (0x0002d68e) cell_cmode_itu_pane_g1

0x6f8f,	// (0x0002d697) cell_cmode_itu_pane_t1

0x6f9d,	// (0x0002d6a5) cell_cmode_itu_pane_t2

0x0001,

0xfdc8,	// (0x000364d0) cell_cmode_itu_pane_t

0x66eb,	// (0x0002cdf3) aid_touch_ctrl_left

0x66f3,	// (0x0002cdfb) aid_touch_ctrl_right

0x97ae,	// (0x0002feb6) compa_mode_pane

0xdf58,	// (0x00034660) aid_cmod_rocker_key_size_cp

0xdf62,	// (0x0003466a) aid_cmode_itu_key_size_cp

0x6fbf,	// (0x0002d6c7) compa_mode_pane_g1

0x6fc7,	// (0x0002d6cf) compa_mode_pane_g2

0x6fcf,	// (0x0002d6d7) compa_mode_pane_g3

0x0002,

0xfdcd,	// (0x000364d5) compa_mode_pane_g

0xdf6c,	// (0x00034674) main_comp_mode_itu_pane_cp

0xdf74,	// (0x0003467c) main_comp_mode_rocker_pane_cp

0xdf7c,	// (0x00034684) cell_cmode_itu_pane_cp_ParamLimits

0xdf7c,	// (0x00034684) cell_cmode_itu_pane_cp

0xdf91,	// (0x00034699) cell_cmode_rocker_pane_cp_ParamLimits

0xdf91,	// (0x00034699) cell_cmode_rocker_pane_cp

0xc90f,	// (0x00033017) bg_button_pane_cp06_cp_ParamLimits

0xc90f,	// (0x00033017) bg_button_pane_cp06_cp

0x4f5a,	// (0x0002b662) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4f5a,	// (0x0002b662) cell_cmode_rocker_pane_g1_cp

0x4cdf,	// (0x0002b3e7) cell_cmode_rocker_pane_g2_cp

0x97ae,	// (0x0002feb6) bg_button_pane_cp07_cp

0xdfa3,	// (0x000346ab) cell_cmode_itu_pane_g1_cp

0xdfac,	// (0x000346b4) cell_cmode_itu_pane_t1_cp

0xdfac,	// (0x000346b4) cell_cmode_itu_pane_t2_cp

0xbbc3,	// (0x000322cb) settings_code_pane_cp2

0x9b29,	// (0x00030231) bg_popup_window_pane_cp3_ParamLimits

0x9ffe,	// (0x00030706) heading_pane_cp3_ParamLimits

0xa00a,	// (0x00030712) listscroll_popup_graphic_pane_ParamLimits

0x1b81,	// (0x00028289) fep_hwr_aid_pane_ParamLimits

0x1f66,	// (0x0002866e) aid_touch_sctrl_top_ParamLimits

0x1f73,	// (0x0002867b) sctrl_sk_top_pane_g1_ParamLimits

0x4f5a,	// (0x0002b662) sctrl_sk_top_pane_g2_ParamLimits

0xfd03,	// (0x0003640b) sctrl_sk_top_pane_g_ParamLimits

0x1f80,	// (0x00028688) sctrl_sk_top_pane_t1_ParamLimits

0x1f66,	// (0x0002866e) aid_touch_sctrl_bottom_ParamLimits

0x1f80,	// (0x00028688) sctrl_sk_bottom_pane_t1_ParamLimits

0x6631,	// (0x0002cd39) aid_area_touch_clock

0xc49b,	// (0x00032ba3) aid_vkb2_area_top_pane_cell_ParamLimits

0xc49b,	// (0x00032ba3) aid_vkb2_area_top_pane_cell

0xc546,	// (0x00032c4e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc546,	// (0x00032c4e) aid_vkb2_area_bottom_pane_cell

0x6b96,	// (0x0002d29e) popup_char_count_window

0x7025,	// (0x0002d72d) popup_char_count_window_g1

0x702e,	// (0x0002d736) popup_char_count_window_g2

0x7037,	// (0x0002d73f) popup_char_count_window_g3

0x0002,

0xfdd4,	// (0x000364dc) popup_char_count_window_g

0x7040,	// (0x0002d748) popup_char_count_window_t1

0x2023,	// (0x0002872b) popup_fep_char_preview_window_ParamLimits

0x2023,	// (0x0002872b) popup_fep_char_preview_window

0xc4bb,	// (0x00032bc3) vkb2_top_candi_pane_ParamLimits

0xc4bb,	// (0x00032bc3) vkb2_top_candi_pane

0xdfba,	// (0x000346c2) cell_vkb2_top_candi_pane_ParamLimits

0xdfba,	// (0x000346c2) cell_vkb2_top_candi_pane

0x2ceb,	// (0x000293f3) bg_popup_fep_char_preview_window_ParamLimits

0x2ceb,	// (0x000293f3) bg_popup_fep_char_preview_window

0x259f,	// (0x00028ca7) popup_fep_char_preview_window_t1_ParamLimits

0x259f,	// (0x00028ca7) popup_fep_char_preview_window_t1

0x709f,	// (0x0002d7a7) bg_popup_fep_char_preview_window_g1

0x70a7,	// (0x0002d7af) bg_popup_fep_char_preview_window_g2

0x70af,	// (0x0002d7b7) bg_popup_fep_char_preview_window_g3

0x70b7,	// (0x0002d7bf) bg_popup_fep_char_preview_window_g4

0x70bf,	// (0x0002d7c7) bg_popup_fep_char_preview_window_g5

0x25d9,	// (0x00028ce1) bg_popup_fep_char_preview_window_g6

0x70c7,	// (0x0002d7cf) bg_popup_fep_char_preview_window_g7

0x70cf,	// (0x0002d7d7) bg_popup_fep_char_preview_window_g8

0x70d7,	// (0x0002d7df) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddb,	// (0x000364e3) bg_popup_fep_char_preview_window_g

0x4f5a,	// (0x0002b662) cell_vkb2_top_candi_pane_g1_ParamLimits

0x4f5a,	// (0x0002b662) cell_vkb2_top_candi_pane_g1

0x529b,	// (0x0002b9a3) cell_vkb2_top_candi_pane_g2_ParamLimits

0x529b,	// (0x0002b9a3) cell_vkb2_top_candi_pane_g2

0x52bc,	// (0x0002b9c4) cell_vkb2_top_candi_pane_g3_ParamLimits

0x52bc,	// (0x0002b9c4) cell_vkb2_top_candi_pane_g3

0x25e1,	// (0x00028ce9) cell_vkb2_top_candi_pane_g4_ParamLimits

0x25e1,	// (0x00028ce9) cell_vkb2_top_candi_pane_g4

0x70df,	// (0x0002d7e7) cell_vkb2_top_candi_pane_g5_ParamLimits

0x70df,	// (0x0002d7e7) cell_vkb2_top_candi_pane_g5

0x64bd,	// (0x0002cbc5) cell_vkb2_top_candi_pane_g6_ParamLimits

0x64bd,	// (0x0002cbc5) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdee,	// (0x000364f6) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdee,	// (0x000364f6) cell_vkb2_top_candi_pane_g

0x2602,	// (0x00028d0a) cell_vkb2_top_candi_pane_t1

0x19ef,	// (0x000280f7) aid_size_touch_slider_mark_ParamLimits

0x19ef,	// (0x000280f7) aid_size_touch_slider_mark

0xdccc,	// (0x000343d4) grid_graphic2_catg_pane_ParamLimits

0xdccc,	// (0x000343d4) grid_graphic2_catg_pane

0xdd8a,	// (0x00034492) popup_grid_graphic2_window_t1_ParamLimits

0xdd8a,	// (0x00034492) popup_grid_graphic2_window_t1

0xdda0,	// (0x000344a8) popup_grid_graphic2_window_t2_ParamLimits

0xdda0,	// (0x000344a8) popup_grid_graphic2_window_t2

0x0001,

0xfda9,	// (0x000364b1) popup_grid_graphic2_window_t_ParamLimits

0xfda9,	// (0x000364b1) popup_grid_graphic2_window_t

0x9e10,	// (0x00030518) bg_button_pane_cp05_ParamLimits

0xdf32,	// (0x0003463a) cell_graphic2_control_pane_g1_ParamLimits

0xe024,	// (0x0003472c) cell_graphic2_catg_pane_ParamLimits

0xe024,	// (0x0003472c) cell_graphic2_catg_pane

0x97ae,	// (0x0002feb6) bg_button_pane_cp12

0xe036,	// (0x0003473e) cell_graphic2_catg_pane_g1

0x65fd,	// (0x0002cd05) cell_tb_ext_pane_t1_ParamLimits

0x23d1,	// (0x00028ad9) vkb2_top_cell_right_narrow_pane_ParamLimits

0x23d1,	// (0x00028ad9) vkb2_top_cell_right_narrow_pane

0x23e9,	// (0x00028af1) vkb2_top_cell_right_wide_pane_ParamLimits

0x23e9,	// (0x00028af1) vkb2_top_cell_right_wide_pane

0x84fc,	// (0x0002ec04) bg_vkb2_func_pane_ParamLimits

0x84fc,	// (0x0002ec04) bg_vkb2_func_pane

0x245a,	// (0x00028b62) vkb2_top_cell_left_pane_g1_ParamLimits

0x84fc,	// (0x0002ec04) bg_vkb2_fuc_pane_cp03_ParamLimits

0x84fc,	// (0x0002ec04) bg_vkb2_fuc_pane_cp03

0x24b8,	// (0x00028bc0) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1332,	// (0x00027a3a) bg_vkb2_func_pane_g1

0x133a,	// (0x00027a42) bg_vkb2_func_pane_g2

0x134a,	// (0x00027a52) bg_vkb2_func_pane_g3

0x1342,	// (0x00027a4a) bg_vkb2_func_pane_g4

0x1352,	// (0x00027a5a) bg_vkb2_func_pane_g5

0x135a,	// (0x00027a62) bg_vkb2_func_pane_g6

0x1362,	// (0x00027a6a) bg_vkb2_func_pane_g7

0x136a,	// (0x00027a72) bg_vkb2_func_pane_g8

0x132a,	// (0x00027a32) bg_vkb2_func_pane_g9

0x0008,

0xfdfb,	// (0x00036503) bg_vkb2_func_pane_g

0x84fc,	// (0x0002ec04) bg_vkb2_fuc_pane_cp01_ParamLimits

0x84fc,	// (0x0002ec04) bg_vkb2_fuc_pane_cp01

0x245a,	// (0x00028b62) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x245a,	// (0x00028b62) vkb2_top_cell_right_wide_pane_g1

0x84fc,	// (0x0002ec04) bg_vkb2_fuc_pane_cp02_ParamLimits

0x84fc,	// (0x0002ec04) bg_vkb2_fuc_pane_cp02

0x24b8,	// (0x00028bc0) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x24b8,	// (0x00028bc0) vkb2_top_cell_right_narrow_pane_g1

0xd541,	// (0x00033c49) aid_touch_area_decrease_ParamLimits

0xd541,	// (0x00033c49) aid_touch_area_decrease

0xd57b,	// (0x00033c83) aid_touch_area_increase_ParamLimits

0xd57b,	// (0x00033c83) aid_touch_area_increase

0xd5a3,	// (0x00033cab) aid_touch_area_mute_ParamLimits

0xd5a3,	// (0x00033cab) aid_touch_area_mute

0xd5d3,	// (0x00033cdb) aid_touch_area_slider_ParamLimits

0xd5d3,	// (0x00033cdb) aid_touch_area_slider

0xd613,	// (0x00033d1b) popup_slider_window_g4_ParamLimits

0xd613,	// (0x00033d1b) popup_slider_window_g4

0xd63b,	// (0x00033d43) popup_slider_window_g5_ParamLimits

0xd63b,	// (0x00033d43) popup_slider_window_g5

0xd66f,	// (0x00033d77) popup_slider_window_g6_ParamLimits

0xd66f,	// (0x00033d77) popup_slider_window_g6

0x63d0,	// (0x0002cad8) popup_slider_window_t2_ParamLimits

0x63d0,	// (0x0002cad8) popup_slider_window_t2

0x0001,

0xfcf7,	// (0x000363ff) popup_slider_window_t_ParamLimits

0xfcf7,	// (0x000363ff) popup_slider_window_t

0xd68b,	// (0x00033d93) slider_pane_ParamLimits

0xd68b,	// (0x00033d93) slider_pane

0x711b,	// (0x0002d823) slider_pane_g1_ParamLimits

0x711b,	// (0x0002d823) slider_pane_g1

0x712f,	// (0x0002d837) slider_pane_g2_ParamLimits

0x712f,	// (0x0002d837) slider_pane_g2

0x7145,	// (0x0002d84d) slider_pane_g3_ParamLimits

0x7145,	// (0x0002d84d) slider_pane_g3

0x0003,

0xfe0e,	// (0x00036516) slider_pane_g_ParamLimits

0xfe0e,	// (0x00036516) slider_pane_g

0xb0a5,	// (0x000317ad) popup_tb_float_extension_window_ParamLimits

0xb0a5,	// (0x000317ad) popup_tb_float_extension_window

0x7171,	// (0x0002d879) aid_size_cell_tb_float_ext

0x97ae,	// (0x0002feb6) bg_popup_sub_window_cp28

0x717d,	// (0x0002d885) grid_tb_float_ext_pane

0x7189,	// (0x0002d891) cell_tb_float_ext_pane_ParamLimits

0x7189,	// (0x0002d891) cell_tb_float_ext_pane

0x71a5,	// (0x0002d8ad) cell_tb_float_ext_pane_g1

0x71ae,	// (0x0002d8b6) grid_highlight_pane_cp12

0xbf86,	// (0x0003268e) cell_last_hwr_side_pane_ParamLimits

0xbf86,	// (0x0003268e) cell_last_hwr_side_pane

0x4cdf,	// (0x0002b3e7) cell_last_hwr_side_pane_g1

0x71b7,	// (0x0002d8bf) cell_last_hwr_side_pane_g2

0x0001,

0xfe17,	// (0x0003651f) cell_last_hwr_side_pane_g

0xc622,	// (0x00032d2a) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc622,	// (0x00032d2a) vkb2_area_bottom_space_btn_pane

0x4f5a,	// (0x0002b662) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6c4b,	// (0x0002d353) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2602,	// (0x00028d0a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2620,	// (0x00028d28) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2620,	// (0x00028d28) vkb2_area_bottom_space_btn_pane_g1

0x265a,	// (0x00028d62) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x265a,	// (0x00028d62) vkb2_area_bottom_space_btn_pane_g2

0x2690,	// (0x00028d98) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2690,	// (0x00028d98) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1c,	// (0x00036524) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1c,	// (0x00036524) vkb2_area_bottom_space_btn_pane_g

0x1c2a,	// (0x00028332) cel_fep_hwr_func_pane_ParamLimits

0x1c2a,	// (0x00028332) cel_fep_hwr_func_pane

0xbf5b,	// (0x00032663) cell_hwr_side_button_pane_ParamLimits

0xbf5b,	// (0x00032663) cell_hwr_side_button_pane

0x6631,	// (0x0002cd39) aid_area_touch_clock_ParamLimits

0x9e10,	// (0x00030518) bg_uniindi_top_pane_ParamLimits

0x6645,	// (0x0002cd4d) uniindi_top_pane_g1_ParamLimits

0x665b,	// (0x0002cd63) uniindi_top_pane_g2_ParamLimits

0x6667,	// (0x0002cd6f) uniindi_top_pane_g3_ParamLimits

0x6678,	// (0x0002cd80) uniindi_top_pane_g4_ParamLimits

0xfd2f,	// (0x00036437) uniindi_top_pane_g_ParamLimits

0x6685,	// (0x0002cd8d) uniindi_top_pane_t1_ParamLimits

0x9e10,	// (0x00030518) bg_vkb2_func_pane_cp01_ParamLimits

0x9e10,	// (0x00030518) bg_vkb2_func_pane_cp01

0x71c0,	// (0x0002d8c8) cel_fep_hwr_func_pane_g1_ParamLimits

0x71c0,	// (0x0002d8c8) cel_fep_hwr_func_pane_g1

0x9e10,	// (0x00030518) bg_vkb2_func_pane_cp02_ParamLimits

0x9e10,	// (0x00030518) bg_vkb2_func_pane_cp02

0x71c0,	// (0x0002d8c8) cell_hwr_side_button_pane_g1_ParamLimits

0x71c0,	// (0x0002d8c8) cell_hwr_side_button_pane_g1

0x117b,	// (0x00027883) status_pane_g4_ParamLimits

0x117b,	// (0x00027883) status_pane_g4

0x1195,	// (0x0002789d) status_pane_t1

0x4a7e,	// (0x0002b186) form2_midp_gauge_slider_cont_pane

0x4a86,	// (0x0002b18e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe93,	// (0x0003259b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbea5,	// (0x000325ad) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x00036203) form2_midp_gauge_slider_pane_t_ParamLimits

0x4abc,	// (0x0002b1c4) form2_midp_slider_pane_ParamLimits

0x1fe3,	// (0x000286eb) aid_size_cell_func_vkb2_ParamLimits

0x1fe3,	// (0x000286eb) aid_size_cell_func_vkb2

0x715d,	// (0x0002d865) slider_pane_g4_ParamLimits

0x715d,	// (0x0002d865) slider_pane_g4

0xc683,	// (0x00032d8b) form2_midp_gauge_slider_pane_t2_cp01

0xc691,	// (0x00032d99) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc691,	// (0x00032d99) form2_midp_gauge_slider_pane_t3_cp01

0x2705,	// (0x00028e0d) form2_midp_slider_pane_cp01

0x97ae,	// (0x0002feb6) navi_smil_pane

0x71f9,	// (0x0002d901) navi_smil_pane_g1

0x7201,	// (0x0002d909) navi_smil_pane_t1

0x71ce,	// (0x0002d8d6) form2_midp_slider_pane_g1

0x71d7,	// (0x0002d8df) form2_midp_slider_pane_g2

0x71df,	// (0x0002d8e7) form2_midp_slider_pane_g3

0x71ce,	// (0x0002d8d6) form2_midp_slider_pane_g4

0xe03f,	// (0x00034747) form2_midp_slider_pane_g5

0x0004,

0xfe25,	// (0x0003652d) form2_midp_slider_pane_g

0x26ca,	// (0x00028dd2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x26ca,	// (0x00028dd2) vkb2_area_bottom_space_btn_pane_g4

0xb28c,	// (0x00031994) lc0_navi_pane_ParamLimits

0xb28c,	// (0x00031994) lc0_navi_pane

0xb2fc,	// (0x00031a04) lc0_stat_indi_pane_ParamLimits

0xb2fc,	// (0x00031a04) lc0_stat_indi_pane

0xb311,	// (0x00031a19) ls0_title_pane_ParamLimits

0xb311,	// (0x00031a19) ls0_title_pane

0xc90f,	// (0x00033017) bg_popup_sub_pane_cp14_ParamLimits

0x6618,	// (0x0002cd20) list_uniindi_pane_ParamLimits

0x6624,	// (0x0002cd2c) uniindi_top_pane_ParamLimits

0x66c3,	// (0x0002cdcb) list_single_uniindi_pane_g1_ParamLimits

0x66d6,	// (0x0002cdde) list_single_uniindi_pane_t1_ParamLimits

0xc6ae,	// (0x00032db6) lc0_stat_clock_pane_ParamLimits

0xc6ae,	// (0x00032db6) lc0_stat_clock_pane

0xe048,	// (0x00034750) lc0_stat_indi_pane_g1_ParamLimits

0xe048,	// (0x00034750) lc0_stat_indi_pane_g1

0xe055,	// (0x0003475d) lc0_stat_indi_pane_g2_ParamLimits

0xe055,	// (0x0003475d) lc0_stat_indi_pane_g2

0x0001,

0xfe30,	// (0x00036538) lc0_stat_indi_pane_g_ParamLimits

0xfe30,	// (0x00036538) lc0_stat_indi_pane_g

0xc6bb,	// (0x00032dc3) lc0_uni_indicator_pane_ParamLimits

0xc6bb,	// (0x00032dc3) lc0_uni_indicator_pane

0xe062,	// (0x0003476a) ls0_title_pane_g1_ParamLimits

0xe062,	// (0x0003476a) ls0_title_pane_g1

0xe076,	// (0x0003477e) ls0_title_pane_t1_ParamLimits

0xe076,	// (0x0003477e) ls0_title_pane_t1

0xc6c8,	// (0x00032dd0) lc0_uni_indicator_pane_g1_ParamLimits

0xc6c8,	// (0x00032dd0) lc0_uni_indicator_pane_g1

0x7273,	// (0x0002d97b) lc0_stat_clock_pane_t1

0x97ae,	// (0x0002feb6) main_ai5_pane

0x7281,	// (0x0002d989) ai5_sk_pane_ParamLimits

0x7281,	// (0x0002d989) ai5_sk_pane

0xe0a4,	// (0x000347ac) cell_ai5_widget_pane_ParamLimits

0xe0a4,	// (0x000347ac) cell_ai5_widget_pane

0x782a,	// (0x0002df32) aid_size_cell_widget_grid

0x7838,	// (0x0002df40) bg_ai5_widget_pane_ParamLimits

0x7838,	// (0x0002df40) bg_ai5_widget_pane

0x78ac,	// (0x0002dfb4) cell_ai5_widget_pane_g2

0x78bc,	// (0x0002dfc4) cell_ai5_widget_pane_g3

0x78d3,	// (0x0002dfdb) cell_ai5_widget_pane_g4

0x78df,	// (0x0002dfe7) cell_ai5_widget_pane_g5

0xe3fb,	// (0x00034b03) cell_ai5_widget_pane_g6

0xe407,	// (0x00034b0f) cell_ai5_widget_pane_g7

0x793f,	// (0x0002e047) cell_ai5_widget_pane_t1_ParamLimits

0x793f,	// (0x0002e047) cell_ai5_widget_pane_t1

0x795c,	// (0x0002e064) cell_ai5_widget_pane_t2_ParamLimits

0x795c,	// (0x0002e064) cell_ai5_widget_pane_t2

0x7974,	// (0x0002e07c) cell_ai5_widget_pane_t3_ParamLimits

0x7974,	// (0x0002e07c) cell_ai5_widget_pane_t3

0x798c,	// (0x0002e094) cell_ai5_widget_pane_t4_ParamLimits

0x798c,	// (0x0002e094) cell_ai5_widget_pane_t4

0x79a9,	// (0x0002e0b1) cell_ai5_widget_pane_t5_ParamLimits

0x79a9,	// (0x0002e0b1) cell_ai5_widget_pane_t5

0x79c8,	// (0x0002e0d0) cell_ai5_widget_pane_t6_ParamLimits

0x79c8,	// (0x0002e0d0) cell_ai5_widget_pane_t6

0x79da,	// (0x0002e0e2) cell_ai5_widget_pane_t7_ParamLimits

0x79da,	// (0x0002e0e2) cell_ai5_widget_pane_t7

0x79f3,	// (0x0002e0fb) cell_ai5_widget_pane_t8_ParamLimits

0x79f3,	// (0x0002e0fb) cell_ai5_widget_pane_t8

0x0009,

0xfe4a,	// (0x00036552) cell_ai5_widget_pane_t_ParamLimits

0xfe4a,	// (0x00036552) cell_ai5_widget_pane_t

0x7a47,	// (0x0002e14f) grid_ai5_widget_pane

0xc90f,	// (0x00033017) highlight_cell_ai5_widget_pane_ParamLimits

0xc90f,	// (0x00033017) highlight_cell_ai5_widget_pane

0xe413,	// (0x00034b1b) ai5_sk_left_pane

0xe41d,	// (0x00034b25) ai5_sk_middle_pane

0xe427,	// (0x00034b2f) ai5_sk_right_pane

0x7a73,	// (0x0002e17b) bg_ai5_widget_pane_g1_ParamLimits

0x7a73,	// (0x0002e17b) bg_ai5_widget_pane_g1

0x7a7f,	// (0x0002e187) bg_ai5_widget_pane_g2_ParamLimits

0x7a7f,	// (0x0002e187) bg_ai5_widget_pane_g2

0x7a8b,	// (0x0002e193) bg_ai5_widget_pane_g3_ParamLimits

0x7a8b,	// (0x0002e193) bg_ai5_widget_pane_g3

0x7a97,	// (0x0002e19f) bg_ai5_widget_pane_g4_ParamLimits

0x7a97,	// (0x0002e19f) bg_ai5_widget_pane_g4

0x7aa3,	// (0x0002e1ab) bg_ai5_widget_pane_g5_ParamLimits

0x7aa3,	// (0x0002e1ab) bg_ai5_widget_pane_g5

0x7aaf,	// (0x0002e1b7) bg_ai5_widget_pane_g6_ParamLimits

0x7aaf,	// (0x0002e1b7) bg_ai5_widget_pane_g6

0x7abb,	// (0x0002e1c3) bg_ai5_widget_pane_g7_ParamLimits

0x7abb,	// (0x0002e1c3) bg_ai5_widget_pane_g7

0x7ac7,	// (0x0002e1cf) bg_ai5_widget_pane_g8_ParamLimits

0x7ac7,	// (0x0002e1cf) bg_ai5_widget_pane_g8

0x7ad3,	// (0x0002e1db) bg_ai5_widget_pane_g9_ParamLimits

0x7ad3,	// (0x0002e1db) bg_ai5_widget_pane_g9

0x0008,

0xfe5f,	// (0x00036567) bg_ai5_widget_pane_g_ParamLimits

0xfe5f,	// (0x00036567) bg_ai5_widget_pane_g

0x7b0b,	// (0x0002e213) cell_shortcut_ai5_widget_pane_ParamLimits

0x7b0b,	// (0x0002e213) cell_shortcut_ai5_widget_pane

0xd260,	// (0x00033968) bg_cell_shortcut_ai5_widget_pane

0x7b1e,	// (0x0002e226) cell_grid_ai5_widget_pane_g1

0xd260,	// (0x00033968) highlight_cell_shortcut_ai5_widget_pane

0x133a,	// (0x00027a42) ai5_sk_left_pane_g1

0x7b27,	// (0x0002e22f) ai5_sk_left_pane_g2

0x7b2f,	// (0x0002e237) ai5_sk_left_pane_g3

0x7b37,	// (0x0002e23f) ai5_sk_left_pane_g4

0x0003,

0xfe72,	// (0x0003657a) ai5_sk_left_pane_g

0x7b3f,	// (0x0002e247) ai5_sk_left_pane_t1

0x1332,	// (0x00027a3a) ai5_sk_right_pane_g1

0x7b4d,	// (0x0002e255) ai5_sk_right_pane_g2

0x7b55,	// (0x0002e25d) ai5_sk_right_pane_g3

0x7b5d,	// (0x0002e265) ai5_sk_right_pane_g4

0x0003,

0xfe7b,	// (0x00036583) ai5_sk_right_pane_g

0x7b65,	// (0x0002e26d) ai5_sk_right_pane_t1

0x1332,	// (0x00027a3a) ai5_sk_middle_pane_g1

0x133a,	// (0x00027a42) ai5_sk_middle_pane_g2

0x1352,	// (0x00027a5a) ai5_sk_middle_pane_g3

0x7b55,	// (0x0002e25d) ai5_sk_middle_pane_g4

0x7b2f,	// (0x0002e237) ai5_sk_middle_pane_g5

0x7b73,	// (0x0002e27b) ai5_sk_middle_pane_g6

0xe431,	// (0x00034b39) ai5_sk_middle_pane_g7

0x0006,

0xfe84,	// (0x0003658c) ai5_sk_middle_pane_g

0xb176,	// (0x0003187e) aid_touch_area_size_lc0_ParamLimits

0xb176,	// (0x0003187e) aid_touch_area_size_lc0

0x1dc9,	// (0x000284d1) cell_hwr_candidate_pane_t1_ParamLimits

0x0e32,	// (0x0002753a) aid_touch_navi_pane

0xb41c,	// (0x00031b24) status_dt_navi_pane_ParamLimits

0xb41c,	// (0x00031b24) status_dt_navi_pane

0xb434,	// (0x00031b3c) status_dt_sta_pane_ParamLimits

0xb434,	// (0x00031b3c) status_dt_sta_pane

0xe439,	// (0x00034b41) dt_sta_controll_pane

0xe446,	// (0x00034b4e) dt_sta_indi_pane

0xe453,	// (0x00034b5b) dt_sta_title_pane

0x9e10,	// (0x00030518) bg_dt_sta_indi_pane_ParamLimits

0x9e10,	// (0x00030518) bg_dt_sta_indi_pane

0xe465,	// (0x00034b6d) dt_sta_battery_pane

0xe46d,	// (0x00034b75) dt_sta_indi_pane_g1

0xe476,	// (0x00034b7e) dt_sta_indi_pane_g2

0xe47f,	// (0x00034b87) dt_sta_indi_pane_g3

0x0002,

0xfe93,	// (0x0003659b) dt_sta_indi_pane_g

0xe488,	// (0x00034b90) dt_sta_signal_pane

0xc90f,	// (0x00033017) bg_dt_sta_title_pane_ParamLimits

0xc90f,	// (0x00033017) bg_dt_sta_title_pane

0xe491,	// (0x00034b99) dt_sta_title_pane_g1

0xe499,	// (0x00034ba1) dt_sta_title_pane_t1_ParamLimits

0xe499,	// (0x00034ba1) dt_sta_title_pane_t1

0x97ae,	// (0x0002feb6) bg_dt_sta_control_pane

0xe4ae,	// (0x00034bb6) dt_sta_controll_pane_g1

0xe4b7,	// (0x00034bbf) bg_dt_sta_title_pane_g1

0xe4c0,	// (0x00034bc8) bg_dt_sta_title_pane_g2

0xe4c9,	// (0x00034bd1) bg_dt_sta_title_pane_g3

0x0002,

0xfe9a,	// (0x000365a2) bg_dt_sta_title_pane_g

0x4cdf,	// (0x0002b3e7) bg_dt_sta_indi_pane_g1

0x7c21,	// (0x0002e329) dt_sta_signal_pane_g1

0x7c29,	// (0x0002e331) dt_sta_signal_pane_g2

0x0001,

0xfea1,	// (0x000365a9) dt_sta_signal_pane_g

0x7c31,	// (0x0002e339) dt_sta_battery_pane_g1

0x7c3a,	// (0x0002e342) dt_sta_battery_pane_t1

0x4cdf,	// (0x0002b3e7) bg_dt_sta_control_pane_g1

0xce73,	// (0x0003357b) fep_china_uni_eep_pane

0xce7b,	// (0x00033583) fep_china_uni_entry_pane_ParamLimits

0xce8b,	// (0x00033593) popup_fep_china_uni_window_g1_ParamLimits

0xce9b,	// (0x000335a3) popup_fep_china_uni_window_g2_ParamLimits

0xce9b,	// (0x000335a3) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x00035e25) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x00035e25) popup_fep_china_uni_window_g

0x7c49,	// (0x0002e351) fep_china_uni_eep_pane_g1

0x7c51,	// (0x0002e359) fep_china_uni_eep_pane_t1

0x71f0,	// (0x0002d8f8) aid_touch_area_size_smil_player

0x0f8a,	// (0x00027692) lc0_clock_pane

0x1189,	// (0x00027891) status_pane_g5_ParamLimits

0x1189,	// (0x00027891) status_pane_g5

0xabcb,	// (0x000312d3) popup_keymap_window

0x1147,	// (0x0002784f) status_icon_pane

0x78bc,	// (0x0002dfc4) cell_ai5_widget_pane_g3_ParamLimits

0x78d3,	// (0x0002dfdb) cell_ai5_widget_pane_g4_ParamLimits

0x78df,	// (0x0002dfe7) cell_ai5_widget_pane_g5_ParamLimits

0x7903,	// (0x0002e00b) cell_ai5_widget_pane_g8_ParamLimits

0x7903,	// (0x0002e00b) cell_ai5_widget_pane_g8

0x7917,	// (0x0002e01f) cell_ai5_widget_pane_g9_ParamLimits

0x7917,	// (0x0002e01f) cell_ai5_widget_pane_g9

0x792b,	// (0x0002e033) cell_ai5_widget_pane_g10_ParamLimits

0x792b,	// (0x0002e033) cell_ai5_widget_pane_g10

0x7c60,	// (0x0002e368) status_icon_pane_g1

0x97ae,	// (0x0002feb6) bg_popup_sub_pane_cp13

0x7c68,	// (0x0002e370) popup_keymap_window_t1

0xa8d6,	// (0x00030fde) control_pane_g6_ParamLimits

0xa8d6,	// (0x00030fde) control_pane_g6

0xa8e3,	// (0x00030feb) control_pane_g7_ParamLimits

0xa8e3,	// (0x00030feb) control_pane_g7

0xa8f0,	// (0x00030ff8) control_pane_g8_ParamLimits

0xa8f0,	// (0x00030ff8) control_pane_g8

0xe439,	// (0x00034b41) dt_sta_controll_pane_ParamLimits

0xe446,	// (0x00034b4e) dt_sta_indi_pane_ParamLimits

0xe453,	// (0x00034b5b) dt_sta_title_pane_ParamLimits

0xa335,	// (0x00030a3d) aid_size_touch_scroll_bar_cale

0xf1a6,	// (0x000358ae) popup_discreet_window_ParamLimits

0xf1a6,	// (0x000358ae) popup_discreet_window

0x98fc,	// (0x00030004) popup_sk_window

0x2ceb,	// (0x000293f3) bg_popup_sub_pane_cp28_ParamLimits

0x2ceb,	// (0x000293f3) bg_popup_sub_pane_cp28

0x7c76,	// (0x0002e37e) popup_discreet_window_g1_ParamLimits

0x7c76,	// (0x0002e37e) popup_discreet_window_g1

0x7c96,	// (0x0002e39e) popup_discreet_window_t1_ParamLimits

0x7c96,	// (0x0002e39e) popup_discreet_window_t1

0x7cb4,	// (0x0002e3bc) popup_discreet_window_t2_ParamLimits

0x7cb4,	// (0x0002e3bc) popup_discreet_window_t2

0x0002,

0xfea6,	// (0x000365ae) popup_discreet_window_t_ParamLimits

0xfea6,	// (0x000365ae) popup_discreet_window_t

0x273b,	// (0x00028e43) popup_sk_window_g1

0x2745,	// (0x00028e4d) popup_sk_window_g2

0x0001,

0xfead,	// (0x000365b5) popup_sk_window_g

0x274f,	// (0x00028e57) popup_sk_window_t1

0x275f,	// (0x00028e67) popup_sk_window_t1_copy1

0x78ac,	// (0x0002dfb4) cell_ai5_widget_pane_g2_ParamLimits

0x7a05,	// (0x0002e10d) cell_ai5_widget_pane_t9_ParamLimits

0x7a05,	// (0x0002e10d) cell_ai5_widget_pane_t9

0x97ae,	// (0x0002feb6) main_fep_fshwr2_pane

0xc6e7,	// (0x00032def) aid_fshwr2_btn_pane

0xc6f8,	// (0x00032e00) aid_fshwr2_syb_pane

0xc709,	// (0x00032e11) aid_fshwr2_txt_pane

0xc715,	// (0x00032e1d) fshwr2_func_candi_pane

0xc736,	// (0x00032e3e) fshwr2_hwr_syb_pane

0xc753,	// (0x00032e5b) fshwr2_icf_pane

0x97ae,	// (0x0002feb6) fshwr2_icf_bg_pane

0x27e1,	// (0x00028ee9) fshwr2_icf_pane_t1_ParamLimits

0x27e1,	// (0x00028ee9) fshwr2_icf_pane_t1

0xcdf1,	// (0x000334f9) fshwr2_func_candi_pane_g1

0xe4d2,	// (0x00034bda) fshwr2_func_candi_row_pane_ParamLimits

0xe4d2,	// (0x00034bda) fshwr2_func_candi_row_pane

0xc77f,	// (0x00032e87) cell_fshwr2_syb_pane_ParamLimits

0xc77f,	// (0x00032e87) cell_fshwr2_syb_pane

0x4f5a,	// (0x0002b662) fshwr2_hwr_syb_pane_g1_ParamLimits

0x4f5a,	// (0x0002b662) fshwr2_hwr_syb_pane_g1

0x97ae,	// (0x0002feb6) bg_popup_call_pane_cp01

0xc795,	// (0x00032e9d) fshwr2_func_candi_cell_pane_ParamLimits

0xc795,	// (0x00032e9d) fshwr2_func_candi_cell_pane

0xe4ee,	// (0x00034bf6) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe4ee,	// (0x00034bf6) fshwr2_func_candi_cell_bg_pane

0xc7db,	// (0x00032ee3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc7db,	// (0x00032ee3) fshwr2_func_candi_cell_pane_g1

0xc812,	// (0x00032f1a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc812,	// (0x00032f1a) fshwr2_func_candi_cell_pane_t1

0x97ae,	// (0x0002feb6) bg_button_pane_cp08

0x7d22,	// (0x0002e42a) cell_fshwr2_syb_bg_pane

0xc82d,	// (0x00032f35) cell_fshwr2_syb_bg_pane_g1

0xc835,	// (0x00032f3d) cell_fshwr2_syb_bg_pane_t1

0xc90f,	// (0x00033017) main_tmo_pane

0xb9c0,	// (0x000320c8) uni_indicator_pane_g1_ParamLimits

0xb9d6,	// (0x000320de) uni_indicator_pane_g2_ParamLimits

0xb9ec,	// (0x000320f4) uni_indicator_pane_g3_ParamLimits

0xba01,	// (0x00032109) uni_indicator_pane_g4_ParamLimits

0xba01,	// (0x00032109) uni_indicator_pane_g4

0x3864,	// (0x00029f6c) uni_indicator_pane_g5_ParamLimits

0x3864,	// (0x00029f6c) uni_indicator_pane_g5

0x3864,	// (0x00029f6c) uni_indicator_pane_g6_ParamLimits

0x3864,	// (0x00029f6c) uni_indicator_pane_g6

0xf91c,	// (0x00036024) uni_indicator_pane_g_ParamLimits

0xd511,	// (0x00033c19) popup_tmo_note_window_ParamLimits

0xd511,	// (0x00033c19) popup_tmo_note_window

0xc90f,	// (0x00033017) fshwr2_bg_pane

0xc803,	// (0x00032f0b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc803,	// (0x00032f0b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb2,	// (0x000365ba) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb2,	// (0x000365ba) fshwr2_func_candi_cell_pane_g

0x4cdf,	// (0x0002b3e7) bg_popup_window_pane_cp01

0x28a3,	// (0x00028fab) bg_popup_window_pane_g1_cp01

0x7d2a,	// (0x0002e432) bg_popup_window_pane_cp22_ParamLimits

0x7d2a,	// (0x0002e432) bg_popup_window_pane_cp22

0x7d38,	// (0x0002e440) listscroll_tmo_link_pane_ParamLimits

0x7d38,	// (0x0002e440) listscroll_tmo_link_pane

0x7d78,	// (0x0002e480) popup_tmo_note_window_g1_ParamLimits

0x7d78,	// (0x0002e480) popup_tmo_note_window_g1

0x7d85,	// (0x0002e48d) tmo_note_info_pane_ParamLimits

0x7d85,	// (0x0002e48d) tmo_note_info_pane

0xe4fa,	// (0x00034c02) list_tmo_note_info_pane_g1_ParamLimits

0xe4fa,	// (0x00034c02) list_tmo_note_info_pane_g1

0x7db6,	// (0x0002e4be) list_tmo_note_info_pane_g2_ParamLimits

0x7db6,	// (0x0002e4be) list_tmo_note_info_pane_g2

0x0001,

0xfeb7,	// (0x000365bf) list_tmo_note_info_pane_g_ParamLimits

0xfeb7,	// (0x000365bf) list_tmo_note_info_pane_g

0x7dd2,	// (0x0002e4da) list_tmo_note_info_text_pane_ParamLimits

0x7dd2,	// (0x0002e4da) list_tmo_note_info_text_pane

0x7e57,	// (0x0002e55f) list_tmo_link_pane

0x7e64,	// (0x0002e56c) scroll_pane_cp20

0x7e71,	// (0x0002e579) list_single_tmo_link_pane_ParamLimits

0x7e71,	// (0x0002e579) list_single_tmo_link_pane

0x7e81,	// (0x0002e589) list_single_tmo_link_pane_t1

0x7e8f,	// (0x0002e597) list_tmo_note_info_text_pane_t1_ParamLimits

0x7e8f,	// (0x0002e597) list_tmo_note_info_text_pane_t1

0xa39c,	// (0x00030aa4) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa39c,	// (0x00030aa4) aid_size_touch_scroll_bar_cp01

0x93bd,	// (0x0002fac5) aid_size_touch_slider_marker

0x98ec,	// (0x0002fff4) popup_settings_window_ParamLimits

0x98ec,	// (0x0002fff4) popup_settings_window

0xe960,	// (0x00035068) popup_candi_list_indi_window

0x0e32,	// (0x0002753a) aid_touch_navi_pane_ParamLimits

0x1f3a,	// (0x00028642) rs_clock_indi_pane

0x1f43,	// (0x0002864b) sctrl_sk_bottom_pane_ParamLimits

0x1f54,	// (0x0002865c) sctrl_sk_top_pane_ParamLimits

0x203d,	// (0x00028745) popup_fep_tooltip_window

0x782a,	// (0x0002df32) aid_size_cell_widget_grid_ParamLimits

0x7897,	// (0x0002df9f) cell_ai5_widget_pane_g1_ParamLimits

0x7897,	// (0x0002df9f) cell_ai5_widget_pane_g1

0xe3fb,	// (0x00034b03) cell_ai5_widget_pane_g6_ParamLimits

0xe407,	// (0x00034b0f) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe35,	// (0x0003653d) cell_ai5_widget_pane_g_ParamLimits

0xfe35,	// (0x0003653d) cell_ai5_widget_pane_g

0x7a29,	// (0x0002e131) cell_ai5_widget_pane_t10_ParamLimits

0x7a29,	// (0x0002e131) cell_ai5_widget_pane_t10

0x7a47,	// (0x0002e14f) grid_ai5_widget_pane_ParamLimits

0x7adf,	// (0x0002e1e7) cell_contacts_ai5_widget_pane_ParamLimits

0x7adf,	// (0x0002e1e7) cell_contacts_ai5_widget_pane

0x7cc9,	// (0x0002e3d1) popup_discreet_window_t3_ParamLimits

0x7cc9,	// (0x0002e3d1) popup_discreet_window_t3

0xc76b,	// (0x00032e73) popup_fshwr2_char_preview_window_ParamLimits

0xc76b,	// (0x00032e73) popup_fshwr2_char_preview_window

0xe511,	// (0x00034c19) tmo_note_info_pane_t1

0xe526,	// (0x00034c2e) tmo_note_info_pane_t2

0xe53f,	// (0x00034c47) tmo_note_info_pane_t3

0x7e33,	// (0x0002e53b) tmo_note_info_pane_t4

0x7e45,	// (0x0002e54d) tmo_note_info_pane_t5

0x0004,

0xfebc,	// (0x000365c4) tmo_note_info_pane_t

0x7e57,	// (0x0002e55f) list_tmo_link_pane_ParamLimits

0x7e64,	// (0x0002e56c) scroll_pane_cp20_ParamLimits

0x97ae,	// (0x0002feb6) bg_popup_fep_char_preview_window_cp01

0x7ea8,	// (0x0002e5b0) popup_fshwr2_char_preview_window_t1

0x7eb6,	// (0x0002e5be) popup_candi_list_indi_window_g1

0x7ebf,	// (0x0002e5c7) bg_cell_contacts_ai5_widget_pane

0x7ecb,	// (0x0002e5d3) cell_contacts_ai5_widget_pane_g1

0x7ee0,	// (0x0002e5e8) cell_contacts_ai5_widget_pane_g2

0x7eec,	// (0x0002e5f4) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec7,	// (0x000365cf) cell_contacts_ai5_widget_pane_g

0x7ef8,	// (0x0002e600) cell_contacts_ai5_widget_pane_t1

0xc90f,	// (0x00033017) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe5b9,	// (0x00034cc1) settings_container_pane

0xd260,	// (0x00033968) listscroll_set_pane_copy1

0x4400,	// (0x0002ab08) scroll_pane_cp121_copy1

0x7f7b,	// (0x0002e683) set_content_pane_copy1

0xe5c5,	// (0x00034ccd) aid_height_set_list_copy1_ParamLimits

0xe5c5,	// (0x00034ccd) aid_height_set_list_copy1

0x3a64,	// (0x0002a16c) aid_size_parent_copy1_ParamLimits

0x3a64,	// (0x0002a16c) aid_size_parent_copy1

0xe5d1,	// (0x00034cd9) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe5d1,	// (0x00034cd9) button_value_adjust_pane_cp6_copy1

0x07b9,	// (0x00026ec1) list_highlight_pane_cp2_copy1_ParamLimits

0x07b9,	// (0x00026ec1) list_highlight_pane_cp2_copy1

0xe5e5,	// (0x00034ced) list_set_pane_copy1_ParamLimits

0xe5e5,	// (0x00034ced) list_set_pane_copy1

0xe554,	// (0x00034c5c) main_pane_set_t1_copy1_ParamLimits

0xe554,	// (0x00034c5c) main_pane_set_t1_copy1

0xe58e,	// (0x00034c96) main_pane_set_t2_copy1_ParamLimits

0xe58e,	// (0x00034c96) main_pane_set_t2_copy1

0xe6ac,	// (0x00034db4) main_pane_set_t3_copy1

0xe6ba,	// (0x00034dc2) main_pane_set_t4_copy1

0xe5ad,	// (0x00034cb5) set_content_pane_g1_copy1_ParamLimits

0xe5ad,	// (0x00034cb5) set_content_pane_g1_copy1

0xe6c8,	// (0x00034dd0) setting_code_pane_copy1

0x808e,	// (0x0002e796) setting_slider_graphic_pane_copy1

0x808e,	// (0x0002e796) setting_slider_pane_copy1

0x808e,	// (0x0002e796) setting_text_pane_copy1

0x808e,	// (0x0002e796) setting_volume_pane_copy1

0xe6c8,	// (0x00034dd0) settings_code_pane_cp2_copy1

0xe6d0,	// (0x00034dd8) settings_code_pane_cp_copy1_ParamLimits

0xe6d0,	// (0x00034dd8) settings_code_pane_cp_copy1

0xc844,	// (0x00032f4c) volume_set_pane_copy1

0xe6e4,	// (0x00034dec) volume_set_pane_g10_copy1

0xe6f0,	// (0x00034df8) volume_set_pane_g1_copy1

0xe6fa,	// (0x00034e02) volume_set_pane_g2_copy1

0xe704,	// (0x00034e0c) volume_set_pane_g3_copy1

0xe70e,	// (0x00034e16) volume_set_pane_g4_copy1

0xe718,	// (0x00034e20) volume_set_pane_g5_copy1

0xe722,	// (0x00034e2a) volume_set_pane_g6_copy1

0xe72c,	// (0x00034e34) volume_set_pane_g7_copy1

0xe736,	// (0x00034e3e) volume_set_pane_g8_copy1

0xe740,	// (0x00034e48) volume_set_pane_g9_copy1

0x9b29,	// (0x00030231) bg_set_opt_pane_cp_copy1_ParamLimits

0x9b29,	// (0x00030231) bg_set_opt_pane_cp_copy1

0x28b8,	// (0x00028fc0) setting_slider_pane_t1_copy1_ParamLimits

0x28b8,	// (0x00028fc0) setting_slider_pane_t1_copy1

0xc850,	// (0x00032f58) setting_slider_pane_t2_copy1_ParamLimits

0xc850,	// (0x00032f58) setting_slider_pane_t2_copy1

0xc86a,	// (0x00032f72) setting_slider_pane_t3_copy1_ParamLimits

0xc86a,	// (0x00032f72) setting_slider_pane_t3_copy1

0xc882,	// (0x00032f8a) slider_set_pane_copy1_ParamLimits

0xc882,	// (0x00032f8a) slider_set_pane_copy1

0xc96a,	// (0x00033072) set_opt_bg_pane_g1_copy2

0xc972,	// (0x0003307a) set_opt_bg_pane_g2_copy2

0x8110,	// (0x0002e818) set_opt_bg_pane_g3_copy2

0xc982,	// (0x0003308a) set_opt_bg_pane_g4_copy2

0xc98a,	// (0x00033092) set_opt_bg_pane_g5_copy2

0xc992,	// (0x0003309a) set_opt_bg_pane_g6_copy2

0xe74a,	// (0x00034e52) set_opt_bg_pane_g7_copy2

0x8124,	// (0x0002e82c) set_opt_bg_pane_g8_copy2

0x812e,	// (0x0002e836) set_opt_bg_pane_g9_copy2

0x291e,	// (0x00029026) aid_size_touch_slider_mark_copy1_ParamLimits

0x291e,	// (0x00029026) aid_size_touch_slider_mark_copy1

0x8138,	// (0x0002e840) slider_set_pane_g1_copy1

0x2932,	// (0x0002903a) slider_set_pane_g2_copy1

0x1a0f,	// (0x00028117) slider_set_pane_g3_copy1_ParamLimits

0x1a0f,	// (0x00028117) slider_set_pane_g3_copy1

0x1a23,	// (0x0002812b) slider_set_pane_g4_copy1_ParamLimits

0x1a23,	// (0x0002812b) slider_set_pane_g4_copy1

0x1a3b,	// (0x00028143) slider_set_pane_g5_copy1_ParamLimits

0x1a3b,	// (0x00028143) slider_set_pane_g5_copy1

0x1a0f,	// (0x00028117) slider_set_pane_g6_copy1_ParamLimits

0x1a0f,	// (0x00028117) slider_set_pane_g6_copy1

0xc898,	// (0x00032fa0) slider_set_pane_g7_copy1_ParamLimits

0xc898,	// (0x00032fa0) slider_set_pane_g7_copy1

0x98a8,	// (0x0002ffb0) bg_set_opt_pane_cp2_copy1

0x8141,	// (0x0002e849) setting_slider_graphic_pane_g1_copy1

0xe754,	// (0x00034e5c) setting_slider_graphic_pane_t1_copy1

0xe764,	// (0x00034e6c) setting_slider_graphic_pane_t2_copy1

0xe774,	// (0x00034e7c) slider_set_pane_cp_copy1

0x817a,	// (0x0002e882) input_focus_pane_cp1_copy1

0x8183,	// (0x0002e88b) list_set_text_pane_copy1

0x818b,	// (0x0002e893) setting_text_pane_g1_copy1

0xf29a,	// (0x000359a2) set_text_pane_t1_copy1

0x817a,	// (0x0002e882) input_focus_pane_cp2_copy1

0x818b,	// (0x0002e893) setting_code_pane_g1_copy1

0xe77c,	// (0x00034e84) setting_code_pane_t1_copy1

0xe78a,	// (0x00034e92) list_set_graphic_pane_copy1

0x98a8,	// (0x0002ffb0) bg_set_opt_pane_cp4_copy1

0xa659,	// (0x00030d61) list_set_graphic_pane_g1_copy1_ParamLimits

0xa659,	// (0x00030d61) list_set_graphic_pane_g1_copy1

0xe79c,	// (0x00034ea4) list_set_graphic_pane_g2_copy1

0xa671,	// (0x00030d79) list_set_graphic_pane_t1_copy1_ParamLimits

0xa671,	// (0x00030d79) list_set_graphic_pane_t1_copy1

0x4cdf,	// (0x0002b3e7) rs_clock_indi_pane_g1

0x81bc,	// (0x0002e8c4) rs_clock_indi_pane_t1

0x81ca,	// (0x0002e8d2) rs_indi_pane

0x81d2,	// (0x0002e8da) rs_indi_pane_g1

0x81db,	// (0x0002e8e3) rs_indi_pane_g2

0x81e4,	// (0x0002e8ec) rs_indi_pane_g3

0x0002,

0xfece,	// (0x000365d6) rs_indi_pane_g

0xd260,	// (0x00033968) bg_popup_preview_window_pane_cp03

0x81ed,	// (0x0002e8f5) popup_fep_tooltip_window_t1

0x5996,	// (0x0002c09e) popup_note2_window_g2_ParamLimits

0x5996,	// (0x0002c09e) popup_note2_window_g2

0x0001,

0xfc67,	// (0x0003636f) popup_note2_window_g_ParamLimits

0xfc67,	// (0x0003636f) popup_note2_window_g

0x5e9e,	// (0x0002c5a6) bg_popup_sub_pane_cp11_ParamLimits

0x5eab,	// (0x0002c5b3) cell_ai3_links_pane_g1_ParamLimits

0x5ec2,	// (0x0002c5ca) cell_ai3_links_pane_t1

0xf29a,	// (0x000359a2) set_text_pane_t1_copy1_ParamLimits

0xa6f0,	// (0x00030df8) cell_graphic_popup_pane_cp2_ParamLimits

0xa6f0,	// (0x00030df8) cell_graphic_popup_pane_cp2

0xe7a4,	// (0x00034eac) cell_graphic_popup_pane_g1_cp2

0xa148,	// (0x00030850) cell_graphic_popup_pane_g2_cp2

0x8203,	// (0x0002e90b) cell_graphic_popup_pane_g3_cp2

0x820b,	// (0x0002e913) cell_graphic_popup_pane_t2_cp2

0xa159,	// (0x00030861) grid_highlight_pane_cp3_cp2

0xcc13,	// (0x0003331b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc90f,	// (0x00033017) main_tmo_pane_ParamLimits

0xd505,	// (0x00033c0d) popup_tmo_big_image_note_window

0x7886,	// (0x0002df8e) cell_ai5_widget_list_pane

0x788e,	// (0x0002df96) cell_ai5_widget_lrg_icon_pane

0xe511,	// (0x00034c19) tmo_note_info_pane_t1_ParamLimits

0xe526,	// (0x00034c2e) tmo_note_info_pane_t2_ParamLimits

0xe53f,	// (0x00034c47) tmo_note_info_pane_t3_ParamLimits

0x7e33,	// (0x0002e53b) tmo_note_info_pane_t4_ParamLimits

0x7e45,	// (0x0002e54d) tmo_note_info_pane_t5_ParamLimits

0xfebc,	// (0x000365c4) tmo_note_info_pane_t_ParamLimits

0xe5b9,	// (0x00034cc1) settings_container_pane_ParamLimits

0x8172,	// (0x0002e87a) indicator_popup_pane_cp5

0x8172,	// (0x0002e87a) indicator_popup_pane_cp6

0xe78a,	// (0x00034e92) list_set_graphic_pane_copy1_ParamLimits

0x97ae,	// (0x0002feb6) bg_popup_window_pane_cp23

0x8219,	// (0x0002e921) popup_tmo_big_image_note_window_g1

0x8225,	// (0x0002e92d) popup_tmo_big_image_note_window_t1

0x8235,	// (0x0002e93d) popup_tmo_big_image_note_window_t2

0x8245,	// (0x0002e94d) popup_tmo_big_image_note_window_t3

0x0002,

0xfed5,	// (0x000365dd) popup_tmo_big_image_note_window_t

0x4cdf,	// (0x0002b3e7) cell_ai5_widget_lrg_icon_pane_g1

0x8255,	// (0x0002e95d) cell_ai5_widget_lrg_icon_pane_t1

0x8263,	// (0x0002e96b) cell_ai5_widget_list_row_pane_ParamLimits

0x8263,	// (0x0002e96b) cell_ai5_widget_list_row_pane

0x827b,	// (0x0002e983) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x827b,	// (0x0002e983) cell_ai5_widget_list_row_pane_g1

0x8288,	// (0x0002e990) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x8288,	// (0x0002e990) cell_ai5_widget_list_row_pane_t1

0x82b3,	// (0x0002e9bb) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x82b3,	// (0x0002e9bb) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedc,	// (0x000365e4) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedc,	// (0x000365e4) cell_ai5_widget_list_row_pane_t

0x97ae,	// (0x0002feb6) main_fep_vtchi_ss_pane

0x82f7,	// (0x0002e9ff) popup_fep_char_pre_window

0x82ff,	// (0x0002ea07) popup_fep_ituss_window

0x8320,	// (0x0002ea28) popup_fep_vkbss_window

0x8341,	// (0x0002ea49) grid_vkbss_keypad_pane_ParamLimits

0x8341,	// (0x0002ea49) grid_vkbss_keypad_pane

0x8351,	// (0x0002ea59) ituss_keypad_pane

0x295c,	// (0x00029064) aid_vkbss_key_offset_ParamLimits

0x295c,	// (0x00029064) aid_vkbss_key_offset

0x2968,	// (0x00029070) cell_vkbss_key_pane_ParamLimits

0x2968,	// (0x00029070) cell_vkbss_key_pane

0x8360,	// (0x0002ea68) bg_cell_vkbss_key_g1_ParamLimits

0x8360,	// (0x0002ea68) bg_cell_vkbss_key_g1

0x836c,	// (0x0002ea74) cell_vkbss_key_3p_pane_ParamLimits

0x836c,	// (0x0002ea74) cell_vkbss_key_3p_pane

0x8386,	// (0x0002ea8e) cell_vkbss_key_g1_ParamLimits

0x8386,	// (0x0002ea8e) cell_vkbss_key_g1

0x83a0,	// (0x0002eaa8) cell_vkbss_key_t1_ParamLimits

0x83a0,	// (0x0002eaa8) cell_vkbss_key_t1

0x297e,	// (0x00029086) cell_ituss_key_pane_ParamLimits

0x297e,	// (0x00029086) cell_ituss_key_pane

0x83cb,	// (0x0002ead3) bg_cell_ituss_key_g1_ParamLimits

0x83cb,	// (0x0002ead3) bg_cell_ituss_key_g1

0x83d7,	// (0x0002eadf) cell_ituss_key_pane_g1_ParamLimits

0x83d7,	// (0x0002eadf) cell_ituss_key_pane_g1

0x298f,	// (0x00029097) cell_ituss_key_pane_g2_ParamLimits

0x298f,	// (0x00029097) cell_ituss_key_pane_g2

0x0002,

0xfee3,	// (0x000365eb) cell_ituss_key_pane_g_ParamLimits

0xfee3,	// (0x000365eb) cell_ituss_key_pane_g

0x29bb,	// (0x000290c3) cell_ituss_key_t1_ParamLimits

0x29bb,	// (0x000290c3) cell_ituss_key_t1

0x29f5,	// (0x000290fd) cell_ituss_key_t2_ParamLimits

0x29f5,	// (0x000290fd) cell_ituss_key_t2

0x2a26,	// (0x0002912e) cell_ituss_key_t3_ParamLimits

0x2a26,	// (0x0002912e) cell_ituss_key_t3

0x29f5,	// (0x000290fd) cell_ituss_key_t4_ParamLimits

0x29f5,	// (0x000290fd) cell_ituss_key_t4

0x0004,

0xfeea,	// (0x000365f2) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x000365f2) cell_ituss_key_t

0x83fd,	// (0x0002eb05) cell_vkbss_key_3p_pane_g1

0x8405,	// (0x0002eb0d) cell_vkbss_key_3p_pane_g2

0x840d,	// (0x0002eb15) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef5,	// (0x000365fd) cell_vkbss_key_3p_pane_g

0x97ae,	// (0x0002feb6) bg_popup_fep_char_preview_window_cp02

0x2a69,	// (0x00029171) popup_fep_char_pre_window_t1

0xe3f1,	// (0x00034af9) main_ai5_sk_pane

0x7ebf,	// (0x0002e5c7) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7ecb,	// (0x0002e5d3) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7ee0,	// (0x0002e5e8) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7eec,	// (0x0002e5f4) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec7,	// (0x000365cf) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7ef8,	// (0x0002e600) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc90f,	// (0x00033017) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe7ac,	// (0x00034eb4) main_ai5_sk_pane_g1

0x2b23,	// (0x0002922b) popup_query_code_window_g1

0x8315,	// (0x0002ea1d) popup_fep_vkb_icf_pane

0x832b,	// (0x0002ea33) popup_fep_vtchi_icf_pane

0x841e,	// (0x0002eb26) bg_icf_pane

0x842a,	// (0x0002eb32) list_vkb_icf_pane

0x8436,	// (0x0002eb3e) bg_icf_pane_cp01

0x8449,	// (0x0002eb51) vtchi_icf_list_pane

0x845a,	// (0x0002eb62) list_vkb_icf_pane_t1_ParamLimits

0x845a,	// (0x0002eb62) list_vkb_icf_pane_t1

0x8470,	// (0x0002eb78) vtchi_icf_list_pane_t1_ParamLimits

0x8470,	// (0x0002eb78) vtchi_icf_list_pane_t1

0x82ff,	// (0x0002ea07) popup_fep_ituss_window_ParamLimits

0x832b,	// (0x0002ea33) popup_fep_vtchi_icf_pane_ParamLimits

0x8351,	// (0x0002ea59) ituss_keypad_pane_ParamLimits

0x2950,	// (0x00029058) ituss_sks_pane

0x841e,	// (0x0002eb26) bg_icf_pane_ParamLimits

0x82db,	// (0x0002e9e3) icf_edit_indi_pane_ParamLimits

0x82db,	// (0x0002e9e3) icf_edit_indi_pane

0x842a,	// (0x0002eb32) list_vkb_icf_pane_ParamLimits

0x8436,	// (0x0002eb3e) bg_icf_pane_cp01_ParamLimits

0x82ea,	// (0x0002e9f2) icf_edit_indi_pane_cp01_ParamLimits

0x82ea,	// (0x0002e9f2) icf_edit_indi_pane_cp01

0x8451,	// (0x0002eb59) vtchi_query_pane

0x4f5a,	// (0x0002b662) icf_edit_indi_pane_g1_ParamLimits

0x4f5a,	// (0x0002b662) icf_edit_indi_pane_g1

0x84df,	// (0x0002ebe7) icf_edit_indi_pane_g2_ParamLimits

0x84df,	// (0x0002ebe7) icf_edit_indi_pane_g2

0x0001,

0xff0d,	// (0x00036615) icf_edit_indi_pane_g_ParamLimits

0xff0d,	// (0x00036615) icf_edit_indi_pane_g

0x84ee,	// (0x0002ebf6) icf_edit_indi_pane_t1

0x8488,	// (0x0002eb90) bg_input_focus_pane_cp042

0xa32c,	// (0x00030a34) vtchi_button_pane

0x8491,	// (0x0002eb99) vtchi_query_pane_t1

0x849f,	// (0x0002eba7) vtchi_query_pane_t2

0x84ad,	// (0x0002ebb5) vtchi_query_pane_t3

0x0002,

0xfefc,	// (0x00036604) vtchi_query_pane_t

0x97ae,	// (0x0002feb6) bg_button_pane_cp13

0x84bb,	// (0x0002ebc3) vtchi_button_pane_g1

0x2a78,	// (0x00029180) ituss_sks_pane_g1

0x2a83,	// (0x0002918b) ituss_sks_pane_g2

0x0001,

0xff03,	// (0x0003660b) ituss_sks_pane_g

0x84c3,	// (0x0002ebcb) ituss_sks_pane_t1

0x84d1,	// (0x0002ebd9) ituss_sks_pane_t2

0x0001,

0xff08,	// (0x00036610) ituss_sks_pane_t

0x478f,	// (0x0002ae97) indicator_nsta_pane_cp_g1

0x4798,	// (0x0002aea0) indicator_nsta_pane_cp_g2

0x47a0,	// (0x0002aea8) indicator_nsta_pane_cp_g3

0x47a8,	// (0x0002aeb0) indicator_nsta_pane_cp_g4

0x47b0,	// (0x0002aeb8) indicator_nsta_pane_cp_g5

0x47b8,	// (0x0002aec0) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x000361b9) indicator_nsta_pane_cp_g

0xdf14,	// (0x0003461c) cell_graphic2_pane_t2_ParamLimits

0xdf14,	// (0x0003461c) cell_graphic2_pane_t2

0x0001,

0xfdbe,	// (0x000364c6) cell_graphic2_pane_t_ParamLimits

0xfdbe,	// (0x000364c6) cell_graphic2_pane_t

0xdf4a,	// (0x00034652) cell_graphic2_control_pane_t1

0xa5e5,	// (0x00030ced) signal_pane_g3_ParamLimits

0xa5e5,	// (0x00030ced) signal_pane_g3

0xa5f9,	// (0x00030d01) signal_pane_g4_ParamLimits

0xa5f9,	// (0x00030d01) signal_pane_g4

0x82c5,	// (0x0002e9cd) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x82c5,	// (0x0002e9cd) cell_ai5_widget_list_row_pane_t3

0x83eb,	// (0x0002eaf3) cell_ituss_key_pane_t1_ParamLimits

0x83eb,	// (0x0002eaf3) cell_ituss_key_pane_t1

0x1534,	// (0x00027c3c) form_field_data_wide_pane_vc_t2_ParamLimits

0x1534,	// (0x00027c3c) form_field_data_wide_pane_vc_t2

0x1548,	// (0x00027c50) form_field_data_wide_pane_vc_t3_ParamLimits

0x1548,	// (0x00027c50) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x00035f0c) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x00035f0c) form_field_data_wide_pane_vc_t

0x4440,	// (0x0002ab48) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4440,	// (0x0002ab48) form_field_slider_wide_pane_vc_t3

0x4516,	// (0x0002ac1e) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4516,	// (0x0002ac1e) form_field_popup_wide_pane_vc_t2

0x452d,	// (0x0002ac35) form_field_popup_wide_pane_vc_t3_ParamLimits

0x452d,	// (0x0002ac35) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x000361a8) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x000361a8) form_field_popup_wide_pane_vc_t

0xc6e7,	// (0x00032def) aid_fshwr2_btn_pane_ParamLimits

0xc6f8,	// (0x00032e00) aid_fshwr2_syb_pane_ParamLimits

0xc709,	// (0x00032e11) aid_fshwr2_txt_pane_ParamLimits

0xc90f,	// (0x00033017) fshwr2_bg_pane_ParamLimits

0xc715,	// (0x00032e1d) fshwr2_func_candi_pane_ParamLimits

0xc736,	// (0x00032e3e) fshwr2_hwr_syb_pane_ParamLimits

0xc753,	// (0x00032e5b) fshwr2_icf_pane_ParamLimits

0xed63,	// (0x0003546b) list_double_graphic_pane_vc_g4_ParamLimits

0xed63,	// (0x0003546b) list_double_graphic_pane_vc_g4

0x29af,	// (0x000290b7) cell_ituss_key_pane_g3_ParamLimits

0x29af,	// (0x000290b7) cell_ituss_key_pane_g3

0x2a57,	// (0x0002915f) cell_ituss_key_t5_ParamLimits

0x2a57,	// (0x0002915f) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small

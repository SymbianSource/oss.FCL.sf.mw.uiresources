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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001ef6b };

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
0xd0bb,	// (0x0002c026) Screen

0xd0c7,	// (0x0002c032) application_window_ParamLimits

0xd0c7,	// (0x0002c032) application_window

0x382b,	// (0x00022796) screen_g1

0xc031,	// (0x0002af9c) area_bottom_pane_ParamLimits

0xc031,	// (0x0002af9c) area_bottom_pane

0x15a0,	// (0x0002050b) area_top_pane_ParamLimits

0x15a0,	// (0x0002050b) area_top_pane

0x1634,	// (0x0002059f) main_pane_ParamLimits

0x1634,	// (0x0002059f) main_pane

0x3835,	// (0x000227a0) misc_graphics

0xd803,	// (0x0002c76e) battery_pane_ParamLimits

0xd803,	// (0x0002c76e) battery_pane

0x5ec5,	// (0x00024e30) bg_status_flat_pane_g8

0x5ecd,	// (0x00024e38) bg_status_flat_pane_g9

0x52b9,	// (0x00024224) context_pane_ParamLimits

0x52b9,	// (0x00024224) context_pane

0xd9ac,	// (0x0002c917) navi_pane_ParamLimits

0xd9ac,	// (0x0002c917) navi_pane

0xda2a,	// (0x0002c995) signal_pane_ParamLimits

0xda2a,	// (0x0002c995) signal_pane

0x0008,

0xf86d,	// (0x0002e7d8) bg_status_flat_pane_g

0xdaba,	// (0x0002ca25) status_pane_g1_ParamLimits

0xdaba,	// (0x0002ca25) status_pane_g1

0xdad0,	// (0x0002ca3b) status_pane_g2_ParamLimits

0xdad0,	// (0x0002ca3b) status_pane_g2

0x54e0,	// (0x0002444b) status_pane_g3_ParamLimits

0x54e0,	// (0x0002444b) status_pane_g3

0x0004,

0xf7a0,	// (0x0002e70b) status_pane_g_ParamLimits

0xf7a0,	// (0x0002e70b) status_pane_g

0xdadc,	// (0x0002ca47) title_pane_ParamLimits

0xdadc,	// (0x0002ca47) title_pane

0xdb3f,	// (0x0002caaa) uni_indicator_pane_ParamLimits

0xdb3f,	// (0x0002caaa) uni_indicator_pane

0x511b,	// (0x00024086) bg_list_pane_ParamLimits

0x511b,	// (0x00024086) bg_list_pane

0xd776,	// (0x0002c6e1) find_pane

0xc393,	// (0x0002b2fe) listscroll_app_pane_ParamLimits

0xc393,	// (0x0002b2fe) listscroll_app_pane

0x5147,	// (0x000240b2) listscroll_form_pane

0xc3a3,	// (0x0002b30e) listscroll_gen_pane_ParamLimits

0xc3a3,	// (0x0002b30e) listscroll_gen_pane

0x1f09,	// (0x00020e74) listscroll_set_pane

0x6a46,	// (0x000259b1) main_idle_act_pane

0x4e17,	// (0x00023d82) main_idle_trad_pane

0x4e17,	// (0x00023d82) main_list_empty_pane

0x5161,	// (0x000240cc) main_midp_pane

0x516d,	// (0x000240d8) main_pane_g1_ParamLimits

0x516d,	// (0x000240d8) main_pane_g1

0xc3b7,	// (0x0002b322) popup_ai_message_window_ParamLimits

0xc3b7,	// (0x0002b322) popup_ai_message_window

0xc448,	// (0x0002b3b3) popup_fep_china_uni_window_ParamLimits

0xc448,	// (0x0002b3b3) popup_fep_china_uni_window

0x2013,	// (0x00020f7e) popup_fep_japan_candidate_window_ParamLimits

0x2013,	// (0x00020f7e) popup_fep_japan_candidate_window

0x2033,	// (0x00020f9e) popup_fep_japan_predictive_window_ParamLimits

0x2033,	// (0x00020f9e) popup_fep_japan_predictive_window

0xc4a4,	// (0x0002b40f) popup_find_window

0xc4c1,	// (0x0002b42c) popup_grid_graphic_window_ParamLimits

0xc4c1,	// (0x0002b42c) popup_grid_graphic_window

0x209a,	// (0x00021005) popup_large_graphic_colour_window

0xc55f,	// (0x0002b4ca) popup_menu_window_ParamLimits

0xc55f,	// (0x0002b4ca) popup_menu_window

0xc731,	// (0x0002b69c) popup_note_image_window

0xc6f7,	// (0x0002b662) popup_note_wait_window_ParamLimits

0xc6f7,	// (0x0002b662) popup_note_wait_window

0xc749,	// (0x0002b6b4) popup_note_window_ParamLimits

0xc749,	// (0x0002b6b4) popup_note_window

0xc7ef,	// (0x0002b75a) popup_query_code_window_ParamLimits

0xc7ef,	// (0x0002b75a) popup_query_code_window

0x22e2,	// (0x0002124d) popup_query_data_code_window_ParamLimits

0x22e2,	// (0x0002124d) popup_query_data_code_window

0xc829,	// (0x0002b794) popup_query_data_window_ParamLimits

0xc829,	// (0x0002b794) popup_query_data_window

0xc8ab,	// (0x0002b816) popup_query_sat_info_window_ParamLimits

0xc8ab,	// (0x0002b816) popup_query_sat_info_window

0xc942,	// (0x0002b8ad) popup_snote_single_graphic_window_ParamLimits

0xc942,	// (0x0002b8ad) popup_snote_single_graphic_window

0xc942,	// (0x0002b8ad) popup_snote_single_text_window_ParamLimits

0xc942,	// (0x0002b8ad) popup_snote_single_text_window

0x2369,	// (0x000212d4) popup_sub_window_general

0x2499,	// (0x00021404) popup_window_general_ParamLimits

0x2499,	// (0x00021404) popup_window_general

0x517b,	// (0x000240e6) power_save_pane

0xc218,	// (0x0002b183) control_pane_g1_ParamLimits

0xc218,	// (0x0002b183) control_pane_g1

0xc241,	// (0x0002b1ac) control_pane_g2_ParamLimits

0xc241,	// (0x0002b1ac) control_pane_g2

0x50de,	// (0x00024049) control_pane_g3_ParamLimits

0x50de,	// (0x00024049) control_pane_g3

0x0007,

0xf788,	// (0x0002e6f3) control_pane_g_ParamLimits

0xf788,	// (0x0002e6f3) control_pane_g

0xc282,	// (0x0002b1ed) control_pane_t1_ParamLimits

0xc282,	// (0x0002b1ed) control_pane_t1

0xc2e8,	// (0x0002b253) control_pane_t2_ParamLimits

0xc2e8,	// (0x0002b253) control_pane_t2

0x0002,

0xf799,	// (0x0002e704) control_pane_t_ParamLimits

0xf799,	// (0x0002e704) control_pane_t

0xd6a8,	// (0x0002c613) navi_navi_volume_pane_cp1

0xd6b0,	// (0x0002c61b) status_small_icon_pane

0x5013,	// (0x00023f7e) status_small_pane_g1_ParamLimits

0x5013,	// (0x00023f7e) status_small_pane_g1

0xd6b8,	// (0x0002c623) status_small_pane_g2_ParamLimits

0xd6b8,	// (0x0002c623) status_small_pane_g2

0xd6c4,	// (0x0002c62f) status_small_pane_g3_ParamLimits

0xd6c4,	// (0x0002c62f) status_small_pane_g3

0xd6d0,	// (0x0002c63b) status_small_pane_g4_ParamLimits

0xd6d0,	// (0x0002c63b) status_small_pane_g4

0xd6dc,	// (0x0002c647) status_small_pane_g5_ParamLimits

0xd6dc,	// (0x0002c647) status_small_pane_g5

0xd6ea,	// (0x0002c655) status_small_pane_g6_ParamLimits

0xd6ea,	// (0x0002c655) status_small_pane_g6

0x0007,

0xf777,	// (0x0002e6e2) status_small_pane_g_ParamLimits

0xf777,	// (0x0002e6e2) status_small_pane_g

0xd719,	// (0x0002c684) status_small_pane_t1

0xd73b,	// (0x0002c6a6) status_small_wait_pane_ParamLimits

0xd73b,	// (0x0002c6a6) status_small_wait_pane

0xd573,	// (0x0002c4de) aid_levels_signal_ParamLimits

0xd573,	// (0x0002c4de) aid_levels_signal

0xd58b,	// (0x0002c4f6) signal_pane_g1_ParamLimits

0xd58b,	// (0x0002c4f6) signal_pane_g1

0xd5a6,	// (0x0002c511) signal_pane_g2_ParamLimits

0xd5a6,	// (0x0002c511) signal_pane_g2

0x0003,

0xf708,	// (0x0002e673) signal_pane_g_ParamLimits

0xf708,	// (0x0002e673) signal_pane_g

0x48eb,	// (0x00023856) context_pane_g1

0xd0d7,	// (0x0002c042) title_pane_g1

0xd10e,	// (0x0002c079) title_pane_t1

0x38dd,	// (0x00022848) title_pane_t2

0x3903,	// (0x0002286e) title_pane_t3

0x0002,

0xf557,	// (0x0002e4c2) title_pane_t

0xdb67,	// (0x0002cad2) aid_levels_battery_ParamLimits

0xdb67,	// (0x0002cad2) aid_levels_battery

0xdb83,	// (0x0002caee) battery_pane_g1_ParamLimits

0xdb83,	// (0x0002caee) battery_pane_g1

0xdba0,	// (0x0002cb0b) battery_pane_g2_ParamLimits

0xdba0,	// (0x0002cb0b) battery_pane_g2

0x0001,

0xf7ab,	// (0x0002e716) battery_pane_g_ParamLimits

0xf7ab,	// (0x0002e716) battery_pane_g

0xdd61,	// (0x0002cccc) uni_indicator_pane_g1

0xdd77,	// (0x0002cce2) uni_indicator_pane_g2

0xdd8d,	// (0x0002ccf8) uni_indicator_pane_g3

0x0005,

0xf915,	// (0x0002e880) uni_indicator_pane_g

0x4c89,	// (0x00023bf4) navi_icon_pane_ParamLimits

0x4c89,	// (0x00023bf4) navi_icon_pane

0x4bc7,	// (0x00023b32) navi_midp_pane

0x4ca5,	// (0x00023c10) navi_navi_pane

0x4caf,	// (0x00023c1a) navi_text_pane_ParamLimits

0x4caf,	// (0x00023c1a) navi_text_pane

0x382b,	// (0x00022796) status_small_wait_pane_g1

0x3d32,	// (0x00022c9d) status_small_wait_pane_g2

0x0001,

0xf910,	// (0x0002e87b) status_small_wait_pane_g

0x6520,	// (0x0002548b) navi_navi_icon_text_pane

0x6528,	// (0x00025493) navi_navi_pane_g1_ParamLimits

0x6528,	// (0x00025493) navi_navi_pane_g1

0x653a,	// (0x000254a5) navi_navi_pane_g2_ParamLimits

0x653a,	// (0x000254a5) navi_navi_pane_g2

0x0001,

0xf8de,	// (0x0002e849) navi_navi_pane_g_ParamLimits

0xf8de,	// (0x0002e849) navi_navi_pane_g

0x654c,	// (0x000254b7) navi_navi_tabs_pane

0x6555,	// (0x000254c0) navi_navi_text_pane

0x6520,	// (0x0002548b) navi_navi_volume_pane

0x64fc,	// (0x00025467) navi_text_pane_t1

0x64f0,	// (0x0002545b) navi_icon_pane_g1

0x6443,	// (0x000253ae) navi_navi_text_pane_t1

0x2723,	// (0x0002168e) navi_navi_volume_pane_g1

0x272b,	// (0x00021696) volume_small_pane

0x63a9,	// (0x00025314) navi_navi_icon_text_pane_g1

0x63b1,	// (0x0002531c) navi_navi_icon_text_pane_t1

0x4ca5,	// (0x00023c10) navi_tabs_2_long_pane

0x4ca5,	// (0x00023c10) navi_tabs_2_pane

0x4ca5,	// (0x00023c10) navi_tabs_3_long_pane

0x4ca5,	// (0x00023c10) navi_tabs_3_pane

0x4ca5,	// (0x00023c10) navi_tabs_4_pane

0x2703,	// (0x0002166e) tabs_2_active_pane_ParamLimits

0x2703,	// (0x0002166e) tabs_2_active_pane

0x2713,	// (0x0002167e) tabs_2_passive_pane_ParamLimits

0x2713,	// (0x0002167e) tabs_2_passive_pane

0x26d1,	// (0x0002163c) tabs_3_active_pane_ParamLimits

0x26d1,	// (0x0002163c) tabs_3_active_pane

0x26e1,	// (0x0002164c) tabs_3_passive_pane_ParamLimits

0x26e1,	// (0x0002164c) tabs_3_passive_pane

0x26f2,	// (0x0002165d) tabs_3_passive_pane_cp_ParamLimits

0x26f2,	// (0x0002165d) tabs_3_passive_pane_cp

0x268d,	// (0x000215f8) tabs_4_active_pane_ParamLimits

0x268d,	// (0x000215f8) tabs_4_active_pane

0x269e,	// (0x00021609) tabs_4_passive_pane_ParamLimits

0x269e,	// (0x00021609) tabs_4_passive_pane

0x26af,	// (0x0002161a) tabs_4_passive_pane_cp_ParamLimits

0x26af,	// (0x0002161a) tabs_4_passive_pane_cp

0x26c0,	// (0x0002162b) tabs_4_passive_pane_cp2_ParamLimits

0x26c0,	// (0x0002162b) tabs_4_passive_pane_cp2

0x2669,	// (0x000215d4) tabs_2_long_active_pane_ParamLimits

0x2669,	// (0x000215d4) tabs_2_long_active_pane

0x267b,	// (0x000215e6) tabs_2_long_passive_pane_ParamLimits

0x267b,	// (0x000215e6) tabs_2_long_passive_pane

0x262a,	// (0x00021595) tabs_3_long_active_pane_ParamLimits

0x262a,	// (0x00021595) tabs_3_long_active_pane

0x263d,	// (0x000215a8) tabs_3_long_passive_pane_ParamLimits

0x263d,	// (0x000215a8) tabs_3_long_passive_pane

0x2656,	// (0x000215c1) tabs_3_long_passive_pane_cp_ParamLimits

0x2656,	// (0x000215c1) tabs_3_long_passive_pane_cp

0x25d0,	// (0x0002153b) volume_small_pane_g1

0x25d9,	// (0x00021544) volume_small_pane_g2

0x25e2,	// (0x0002154d) volume_small_pane_g3

0x25eb,	// (0x00021556) volume_small_pane_g4

0x25f4,	// (0x0002155f) volume_small_pane_g5

0x25fd,	// (0x00021568) volume_small_pane_g6

0x2606,	// (0x00021571) volume_small_pane_g7

0x260f,	// (0x0002157a) volume_small_pane_g8

0x2618,	// (0x00021583) volume_small_pane_g9

0x2621,	// (0x0002158c) volume_small_pane_g10

0x0009,

0xf8aa,	// (0x0002e815) volume_small_pane_g

0x3b90,	// (0x00022afb) bg_active_tab_pane_cp2_ParamLimits

0x3b90,	// (0x00022afb) bg_active_tab_pane_cp2

0x3923,	// (0x0002288e) tabs_3_active_pane_g1

0xd19a,	// (0x0002c105) tabs_3_active_pane_t1

0x3b90,	// (0x00022afb) bg_passive_tab_pane_cp2_ParamLimits

0x3b90,	// (0x00022afb) bg_passive_tab_pane_cp2

0x3923,	// (0x0002288e) tabs_3_passive_pane_g1

0xd19a,	// (0x0002c105) tabs_3_passive_pane_t1

0x3b90,	// (0x00022afb) bg_active_tab_pane_cp3_ParamLimits

0x3b90,	// (0x00022afb) bg_active_tab_pane_cp3

0x393d,	// (0x000228a8) tabs_4_active_pane_g1

0xd1ac,	// (0x0002c117) tabs_4_active_pane_t1

0x3b90,	// (0x00022afb) bg_passive_tab_pane_cp3_ParamLimits

0x3b90,	// (0x00022afb) bg_passive_tab_pane_cp3

0x393d,	// (0x000228a8) tabs_4_1_passive_pane_g1

0xd1ac,	// (0x0002c117) tabs_4_1_passive_pane_t1

0x5161,	// (0x000240cc) list_highlight_pane_cp2

0xde13,	// (0x0002cd7e) list_set_pane_ParamLimits

0xde13,	// (0x0002cd7e) list_set_pane

0xdead,	// (0x0002ce18) main_pane_set_t1_ParamLimits

0xdead,	// (0x0002ce18) main_pane_set_t1

0xdecd,	// (0x0002ce38) main_pane_set_t2_ParamLimits

0xdecd,	// (0x0002ce38) main_pane_set_t2

0xdee1,	// (0x0002ce4c) main_pane_set_t3_ParamLimits

0xdee1,	// (0x0002ce4c) main_pane_set_t3

0xdef3,	// (0x0002ce5e) main_pane_set_t4_ParamLimits

0xdef3,	// (0x0002ce5e) main_pane_set_t4

0x0003,

0xf97a,	// (0x0002e8e5) main_pane_set_t_ParamLimits

0xf97a,	// (0x0002e8e5) main_pane_set_t

0xdf05,	// (0x0002ce70) setting_code_pane

0xdf0f,	// (0x0002ce7a) setting_slider_graphic_pane

0xdf0f,	// (0x0002ce7a) setting_slider_pane

0xdf0f,	// (0x0002ce7a) setting_text_pane

0xdf0f,	// (0x0002ce7a) setting_volume_pane

0x1883,	// (0x000207ee) volume_set_pane

0x3915,	// (0x00022880) bg_set_opt_pane_cp

0x188b,	// (0x000207f6) setting_slider_pane_t1

0x18a4,	// (0x0002080f) setting_slider_pane_t2

0x18be,	// (0x00020829) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002e4c9) setting_slider_pane_t

0x18d6,	// (0x00020841) slider_set_pane

0x3835,	// (0x000227a0) bg_set_opt_pane_cp2

0x3957,	// (0x000228c2) setting_slider_graphic_pane_g1

0x18ec,	// (0x00020857) setting_slider_graphic_pane_t1

0x18fc,	// (0x00020867) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002e4d0) setting_slider_graphic_pane_t

0x190c,	// (0x00020877) slider_set_pane_cp

0x3835,	// (0x000227a0) input_focus_pane_cp1

0x6a2d,	// (0x00025998) list_set_text_pane

0x382b,	// (0x00022796) setting_text_pane_g1

0x3835,	// (0x000227a0) input_focus_pane_cp2

0x382b,	// (0x00022796) setting_code_pane_g1

0x3960,	// (0x000228cb) setting_code_pane_t1

0x0320,	// (0x0001f28b) set_text_pane_t1_ParamLimits

0x0320,	// (0x0001f28b) set_text_pane_t1

0x41dc,	// (0x00023147) set_opt_bg_pane_g1

0x41e4,	// (0x0002314f) set_opt_bg_pane_g2

0x6a07,	// (0x00025972) set_opt_bg_pane_g3

0x41f4,	// (0x0002315f) set_opt_bg_pane_g4

0x41fc,	// (0x00023167) set_opt_bg_pane_g5

0x4204,	// (0x0002316f) set_opt_bg_pane_g6

0x6a11,	// (0x0002597c) set_opt_bg_pane_g7

0x6a19,	// (0x00025984) set_opt_bg_pane_g8

0x6a23,	// (0x0002598e) set_opt_bg_pane_g9

0x0008,

0xf967,	// (0x0002e8d2) set_opt_bg_pane_g

0x69fa,	// (0x00025965) slider_set_pane_g1

0x2798,	// (0x00021703) slider_set_pane_g2

0x0006,

0xf958,	// (0x0002e8c3) slider_set_pane_g

0x2734,	// (0x0002169f) volume_set_pane_g1

0x273c,	// (0x000216a7) volume_set_pane_g2

0x2744,	// (0x000216af) volume_set_pane_g3

0x274c,	// (0x000216b7) volume_set_pane_g4

0x2754,	// (0x000216bf) volume_set_pane_g5

0x275c,	// (0x000216c7) volume_set_pane_g6

0x2764,	// (0x000216cf) volume_set_pane_g7

0x276c,	// (0x000216d7) volume_set_pane_g8

0x2774,	// (0x000216df) volume_set_pane_g9

0x277c,	// (0x000216e7) volume_set_pane_g10

0x0009,

0xf930,	// (0x0002e89b) volume_set_pane_g

0xd1be,	// (0x0002c129) indicator_pane_ParamLimits

0xd1be,	// (0x0002c129) indicator_pane

0xd1e6,	// (0x0002c151) main_idle_pane_g2_ParamLimits

0xd1e6,	// (0x0002c151) main_idle_pane_g2

0xd21e,	// (0x0002c189) main_pane_idle_g1_ParamLimits

0xd21e,	// (0x0002c189) main_pane_idle_g1

0x39af,	// (0x0002291a) popup_clock_digital_analogue_window_ParamLimits

0x39af,	// (0x0002291a) popup_clock_digital_analogue_window

0xd245,	// (0x0002c1b0) soft_indicator_pane_ParamLimits

0xd245,	// (0x0002c1b0) soft_indicator_pane

0xd25f,	// (0x0002c1ca) wallpaper_pane_ParamLimits

0xd25f,	// (0x0002c1ca) wallpaper_pane

0x382b,	// (0x00022796) wallpaper_pane_g1

0xd271,	// (0x0002c1dc) indicator_pane_g1_ParamLimits

0xd271,	// (0x0002c1dc) indicator_pane_g1

0x6e31,	// (0x00025d9c) navi_navi_icon_text_pane_srt_g1

0x3a01,	// (0x0002296c) soft_indicator_pane_t1

0x3a1b,	// (0x00022986) aid_ps_area_pane

0xd287,	// (0x0002c1f2) aid_ps_clock_pane

0x3a3a,	// (0x000229a5) aid_ps_indicator_pane

0x3a46,	// (0x000229b1) indicator_ps_pane_ParamLimits

0x3a46,	// (0x000229b1) indicator_ps_pane

0x3a55,	// (0x000229c0) power_save_pane_g1_ParamLimits

0x3a55,	// (0x000229c0) power_save_pane_g1

0x3a61,	// (0x000229cc) power_save_pane_g2_ParamLimits

0x3a61,	// (0x000229cc) power_save_pane_g2

0x1494,	// (0x000203ff) aid_navinavi_width_pane

0x3a1b,	// (0x00022986) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002e4d5) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002e4d5) power_save_pane_g

0x3a6f,	// (0x000229da) power_save_pane_t1_ParamLimits

0x3a6f,	// (0x000229da) power_save_pane_t1

0xd287,	// (0x0002c1f2) aid_ps_clock_pane_ParamLimits

0x3a3a,	// (0x000229a5) aid_ps_indicator_pane_ParamLimits

0x3a81,	// (0x000229ec) power_save_pane_t4_ParamLimits

0x3a81,	// (0x000229ec) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002e4da) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002e4da) power_save_pane_t

0x3aab,	// (0x00022a16) power_save_t3_ParamLimits

0x3aab,	// (0x00022a16) power_save_t3

0x3a96,	// (0x00022a01) power_save_t2_ParamLimits

0x3a96,	// (0x00022a01) power_save_t2

0x3ac0,	// (0x00022a2b) indicator_ps_pane_g1

0xd295,	// (0x0002c200) ai_gene_pane_ParamLimits

0xd295,	// (0x0002c200) ai_gene_pane

0xd2ac,	// (0x0002c217) ai_links_pane_ParamLimits

0xd2ac,	// (0x0002c217) ai_links_pane

0xd2c4,	// (0x0002c22f) indicator_pane_cp1_ParamLimits

0xd2c4,	// (0x0002c22f) indicator_pane_cp1

0xd2d3,	// (0x0002c23e) main_pane_idle_g1_cp_ParamLimits

0xd2d3,	// (0x0002c23e) main_pane_idle_g1_cp

0x3af9,	// (0x00022a64) popup_ai_links_title_window

0xd2eb,	// (0x0002c256) soft_indicator_pane_cp1_ParamLimits

0xd2eb,	// (0x0002c256) soft_indicator_pane_cp1

0x67e9,	// (0x00025754) ai_links_pane_g1

0x67f2,	// (0x0002575d) grid_ai_links_pane

0xdd58,	// (0x0002ccc3) ai_gene_pane_1

0x67d7,	// (0x00025742) ai_gene_pane_2

0x67e0,	// (0x0002574b) list_highlight_pane_cp4

0xdd34,	// (0x0002cc9f) cell_ai_link_pane_ParamLimits

0xdd34,	// (0x0002cc9f) cell_ai_link_pane

0x67a8,	// (0x00025713) cell_ai_link_pane_g1

0x3d32,	// (0x00022c9d) cell_ai_link_pane_g2

0x0001,

0xf90b,	// (0x0002e876) cell_ai_link_pane_g

0x3835,	// (0x000227a0) grid_highlight_cp2

0x3835,	// (0x000227a0) bg_popup_sub_pane_cp1

0x3b1c,	// (0x00022a87) popup_ai_links_title_window_t1

0x66f6,	// (0x00025661) ai_gene_pane_1_g1_ParamLimits

0x66f6,	// (0x00025661) ai_gene_pane_1_g1

0x6702,	// (0x0002566d) ai_gene_pane_1_g2_ParamLimits

0x6702,	// (0x0002566d) ai_gene_pane_1_g2

0x0001,

0xf901,	// (0x0002e86c) ai_gene_pane_1_g_ParamLimits

0xf901,	// (0x0002e86c) ai_gene_pane_1_g

0x670f,	// (0x0002567a) ai_gene_pane_1_t1_ParamLimits

0x670f,	// (0x0002567a) ai_gene_pane_1_t1

0x6743,	// (0x000256ae) grid_ai_soft_ind_pane

0x66e1,	// (0x0002564c) ai_gene_pane_2_t1_ParamLimits

0x66e1,	// (0x0002564c) ai_gene_pane_2_t1

0xd2ff,	// (0x0002c26a) main_pane_empty_t1_ParamLimits

0xd2ff,	// (0x0002c26a) main_pane_empty_t1

0xd317,	// (0x0002c282) main_pane_empty_t2_ParamLimits

0xd317,	// (0x0002c282) main_pane_empty_t2

0xd32c,	// (0x0002c297) main_pane_empty_t3_ParamLimits

0xd32c,	// (0x0002c297) main_pane_empty_t3

0xd33e,	// (0x0002c2a9) main_pane_empty_t4_ParamLimits

0xd33e,	// (0x0002c2a9) main_pane_empty_t4

0xd350,	// (0x0002c2bb) main_pane_empty_t5_ParamLimits

0xd350,	// (0x0002c2bb) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002e4df) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002e4df) main_pane_empty_t

0x422d,	// (0x00023198) bg_popup_window_pane_ParamLimits

0x422d,	// (0x00023198) bg_popup_window_pane

0x6451,	// (0x000253bc) find_popup_pane_cp2_ParamLimits

0x6451,	// (0x000253bc) find_popup_pane_cp2

0x645d,	// (0x000253c8) heading_pane_ParamLimits

0x645d,	// (0x000253c8) heading_pane

0x3835,	// (0x000227a0) bg_popup_sub_pane

0xdcb5,	// (0x0002cc20) bg_popup_window_pane_g1_ParamLimits

0xdcb5,	// (0x0002cc20) bg_popup_window_pane_g1

0xdcc4,	// (0x0002cc2f) bg_popup_window_pane_g2_ParamLimits

0xdcc4,	// (0x0002cc2f) bg_popup_window_pane_g2

0xdcd0,	// (0x0002cc3b) bg_popup_window_pane_g3_ParamLimits

0xdcd0,	// (0x0002cc3b) bg_popup_window_pane_g3

0xdcdc,	// (0x0002cc47) bg_popup_window_pane_g4_ParamLimits

0xdcdc,	// (0x0002cc47) bg_popup_window_pane_g4

0xdceb,	// (0x0002cc56) bg_popup_window_pane_g5_ParamLimits

0xdceb,	// (0x0002cc56) bg_popup_window_pane_g5

0xdcfb,	// (0x0002cc66) bg_popup_window_pane_g6_ParamLimits

0xdcfb,	// (0x0002cc66) bg_popup_window_pane_g6

0xdd07,	// (0x0002cc72) bg_popup_window_pane_g7_ParamLimits

0xdd07,	// (0x0002cc72) bg_popup_window_pane_g7

0xdd16,	// (0x0002cc81) bg_popup_window_pane_g8_ParamLimits

0xdd16,	// (0x0002cc81) bg_popup_window_pane_g8

0xdd25,	// (0x0002cc90) bg_popup_window_pane_g9_ParamLimits

0xdd25,	// (0x0002cc90) bg_popup_window_pane_g9

0x6437,	// (0x000253a2) bg_popup_window_pane_g10_ParamLimits

0x6437,	// (0x000253a2) bg_popup_window_pane_g10

0x0009,

0xf8c9,	// (0x0002e834) bg_popup_window_pane_g_ParamLimits

0xf8c9,	// (0x0002e834) bg_popup_window_pane_g

0x6360,	// (0x000252cb) bg_popup_heading_pane_ParamLimits

0x6360,	// (0x000252cb) bg_popup_heading_pane

0x2820,	// (0x0002178b) tabs_4_passive_pane_cp_srt_ParamLimits

0x2820,	// (0x0002178b) tabs_4_passive_pane_cp_srt

0x2832,	// (0x0002179d) tabs_4_passive_pane_srt_ParamLimits

0x6374,	// (0x000252df) heading_pane_g2

0x2832,	// (0x0002179d) tabs_4_passive_pane_srt

0x56df,	// (0x0002464a) bg_passive_tab_pane_cp3_srt_ParamLimits

0x56df,	// (0x0002464a) bg_passive_tab_pane_cp3_srt

0x637c,	// (0x000252e7) heading_pane_t1_ParamLimits

0x637c,	// (0x000252e7) heading_pane_t1

0x6393,	// (0x000252fe) heading_pane_t2_ParamLimits

0x6393,	// (0x000252fe) heading_pane_t2

0x0001,

0xf8c4,	// (0x0002e82f) heading_pane_t_ParamLimits

0xf8c4,	// (0x0002e82f) heading_pane_t

0x5e8d,	// (0x00024df8) bg_popup_heading_pane_g1

0x5f3c,	// (0x00024ea7) bg_popup_heading_pane_g2

0x5f46,	// (0x00024eb1) bg_popup_heading_pane_g3

0x5f50,	// (0x00024ebb) bg_popup_heading_pane_g4

0x5f5a,	// (0x00024ec5) bg_popup_heading_pane_g5

0x5f64,	// (0x00024ecf) bg_popup_heading_pane_g6

0x5f6c,	// (0x00024ed7) bg_popup_heading_pane_g7

0x5f74,	// (0x00024edf) bg_popup_heading_pane_g8

0x5f7e,	// (0x00024ee9) bg_popup_heading_pane_g9

0x0008,

0xf880,	// (0x0002e7eb) bg_popup_heading_pane_g

0x566b,	// (0x000245d6) bg_popup_sub_pane_g1

0x5673,	// (0x000245de) bg_popup_sub_pane_g2

0x567b,	// (0x000245e6) bg_popup_sub_pane_g3

0x5683,	// (0x000245ee) bg_popup_sub_pane_g4

0x568b,	// (0x000245f6) bg_popup_sub_pane_g5

0x5693,	// (0x000245fe) bg_popup_sub_pane_g6

0x569b,	// (0x00024606) bg_popup_sub_pane_g7

0x56a3,	// (0x0002460e) bg_popup_sub_pane_g8

0x56ab,	// (0x00024616) bg_popup_sub_pane_g9

0x0008,

0xf85a,	// (0x0002e7c5) bg_popup_sub_pane_g

0x3b90,	// (0x00022afb) bg_popup_window_pane_cp5_ParamLimits

0x3b90,	// (0x00022afb) bg_popup_window_pane_cp5

0x3bac,	// (0x00022b17) popup_note_window_g1_ParamLimits

0x3bac,	// (0x00022b17) popup_note_window_g1

0x3bb8,	// (0x00022b23) popup_note_window_t1_ParamLimits

0x3bb8,	// (0x00022b23) popup_note_window_t1

0x3bce,	// (0x00022b39) popup_note_window_t2_ParamLimits

0x3bce,	// (0x00022b39) popup_note_window_t2

0x3be4,	// (0x00022b4f) popup_note_window_t3_ParamLimits

0x3be4,	// (0x00022b4f) popup_note_window_t3

0x3bfa,	// (0x00022b65) popup_note_window_t4_ParamLimits

0x3bfa,	// (0x00022b65) popup_note_window_t4

0x3c22,	// (0x00022b8d) popup_note_window_t5_ParamLimits

0x3c22,	// (0x00022b8d) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002e4ea) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002e4ea) popup_note_window_t

0x3c46,	// (0x00022bb1) bg_popup_window_pane_cp6_ParamLimits

0x3c46,	// (0x00022bb1) bg_popup_window_pane_cp6

0x5e09,	// (0x00024d74) popup_note_image_window_g1_ParamLimits

0x5e09,	// (0x00024d74) popup_note_image_window_g1

0x5e15,	// (0x00024d80) popup_note_image_window_g2_ParamLimits

0x5e15,	// (0x00024d80) popup_note_image_window_g2

0x0001,

0xf84e,	// (0x0002e7b9) popup_note_image_window_g_ParamLimits

0xf84e,	// (0x0002e7b9) popup_note_image_window_g

0x5e2e,	// (0x00024d99) popup_note_image_window_t1_ParamLimits

0x5e2e,	// (0x00024d99) popup_note_image_window_t1

0x5e47,	// (0x00024db2) popup_note_image_window_t2_ParamLimits

0x5e47,	// (0x00024db2) popup_note_image_window_t2

0x5e60,	// (0x00024dcb) popup_note_image_window_t3_ParamLimits

0x5e60,	// (0x00024dcb) popup_note_image_window_t3

0x0002,

0xf853,	// (0x0002e7be) popup_note_image_window_t_ParamLimits

0xf853,	// (0x0002e7be) popup_note_image_window_t

0x5cca,	// (0x00024c35) bg_popup_window_pane_cp7_ParamLimits

0x5cca,	// (0x00024c35) bg_popup_window_pane_cp7

0x5cfa,	// (0x00024c65) popup_note_wait_window_g1_ParamLimits

0x5cfa,	// (0x00024c65) popup_note_wait_window_g1

0x5d06,	// (0x00024c71) popup_note_wait_window_g2_ParamLimits

0x5d06,	// (0x00024c71) popup_note_wait_window_g2

0x0002,

0xf83c,	// (0x0002e7a7) popup_note_wait_window_g_ParamLimits

0xf83c,	// (0x0002e7a7) popup_note_wait_window_g

0x5d1e,	// (0x00024c89) popup_note_wait_window_t1_ParamLimits

0x5d1e,	// (0x00024c89) popup_note_wait_window_t1

0x5d45,	// (0x00024cb0) popup_note_wait_window_t2_ParamLimits

0x5d45,	// (0x00024cb0) popup_note_wait_window_t2

0x5d62,	// (0x00024ccd) popup_note_wait_window_t3_ParamLimits

0x5d62,	// (0x00024ccd) popup_note_wait_window_t3

0x5d75,	// (0x00024ce0) popup_note_wait_window_t4_ParamLimits

0x5d75,	// (0x00024ce0) popup_note_wait_window_t4

0x0004,

0xf843,	// (0x0002e7ae) popup_note_wait_window_t_ParamLimits

0xf843,	// (0x0002e7ae) popup_note_wait_window_t

0x5d9a,	// (0x00024d05) wait_bar_pane_ParamLimits

0x5d9a,	// (0x00024d05) wait_bar_pane

0x3835,	// (0x000227a0) wait_anim_pane

0x3835,	// (0x000227a0) wait_border_pane

0x382b,	// (0x00022796) wait_anim_pane_g1

0x382b,	// (0x00022796) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0002e66e) wait_anim_pane_g

0x5c6e,	// (0x00024bd9) wait_border_pane_g1

0x5c79,	// (0x00024be4) wait_border_pane_g2

0x5c82,	// (0x00024bed) wait_border_pane_g3

0x0002,

0xf835,	// (0x0002e7a0) wait_border_pane_g

0x5ad9,	// (0x00024a44) bg_popup_window_pane_cp16_ParamLimits

0x5ad9,	// (0x00024a44) bg_popup_window_pane_cp16

0x5bd9,	// (0x00024b44) indicator_popup_pane_cp4_ParamLimits

0x5bd9,	// (0x00024b44) indicator_popup_pane_cp4

0x5bed,	// (0x00024b58) popup_query_data_window_t1_ParamLimits

0x5bed,	// (0x00024b58) popup_query_data_window_t1

0x5bff,	// (0x00024b6a) popup_query_data_window_t2_ParamLimits

0x5bff,	// (0x00024b6a) popup_query_data_window_t2

0x5c18,	// (0x00024b83) popup_query_data_window_t3_ParamLimits

0x5c18,	// (0x00024b83) popup_query_data_window_t3

0x0002,

0xf82e,	// (0x0002e799) popup_query_data_window_t_ParamLimits

0xf82e,	// (0x0002e799) popup_query_data_window_t

0x5c32,	// (0x00024b9d) query_popup_data_pane_ParamLimits

0x5c32,	// (0x00024b9d) query_popup_data_pane

0x5c46,	// (0x00024bb1) query_popup_data_pane_cp1_ParamLimits

0x5c46,	// (0x00024bb1) query_popup_data_pane_cp1

0x5ad9,	// (0x00024a44) bg_popup_window_pane_cp10_ParamLimits

0x5ad9,	// (0x00024a44) bg_popup_window_pane_cp10

0x5b0b,	// (0x00024a76) indicator_popup_pane_ParamLimits

0x5b0b,	// (0x00024a76) indicator_popup_pane

0x5b2d,	// (0x00024a98) popup_query_code_window_t1_ParamLimits

0x5b2d,	// (0x00024a98) popup_query_code_window_t1

0x5b47,	// (0x00024ab2) popup_query_code_window_t2_ParamLimits

0x5b47,	// (0x00024ab2) popup_query_code_window_t2

0x5b90,	// (0x00024afb) popup_query_code_window_t3_ParamLimits

0x5b90,	// (0x00024afb) popup_query_code_window_t3

0x0002,

0xf827,	// (0x0002e792) popup_query_code_window_t_ParamLimits

0xf827,	// (0x0002e792) popup_query_code_window_t

0x5bbf,	// (0x00024b2a) query_popup_pane_ParamLimits

0x5bbf,	// (0x00024b2a) query_popup_pane

0x3c46,	// (0x00022bb1) bg_popup_window_pane_cp15_ParamLimits

0x3c46,	// (0x00022bb1) bg_popup_window_pane_cp15

0x3c64,	// (0x00022bcf) indicator_popup_pane_cp1_ParamLimits

0x3c64,	// (0x00022bcf) indicator_popup_pane_cp1

0x3c77,	// (0x00022be2) indicator_popup_pane_cp2_ParamLimits

0x3c77,	// (0x00022be2) indicator_popup_pane_cp2

0x3c8a,	// (0x00022bf5) popup_query_data_code_window_g1_ParamLimits

0x3c8a,	// (0x00022bf5) popup_query_data_code_window_g1

0x3c9d,	// (0x00022c08) popup_query_data_code_window_t1_ParamLimits

0x3c9d,	// (0x00022c08) popup_query_data_code_window_t1

0x3caf,	// (0x00022c1a) popup_query_data_code_window_t2_ParamLimits

0x3caf,	// (0x00022c1a) popup_query_data_code_window_t2

0x3cc1,	// (0x00022c2c) popup_query_data_code_window_t3_ParamLimits

0x3cc1,	// (0x00022c2c) popup_query_data_code_window_t3

0x3cd7,	// (0x00022c42) popup_query_data_code_window_t4_ParamLimits

0x3cd7,	// (0x00022c42) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002e4f5) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002e4f5) popup_query_data_code_window_t

0x2503,	// (0x0002146e) list_single_midp_graphic_pane_g3

0x3cef,	// (0x00022c5a) query_popup_data_pane_cp2_ParamLimits

0x3d02,	// (0x00022c6d) query_popup_pane_cp2_ParamLimits

0x3d02,	// (0x00022c6d) query_popup_pane_cp2

0x3835,	// (0x000227a0) bg_popup_window_pane_cp11

0x5ad1,	// (0x00024a3c) heading_pane_cp5

0x3ded,	// (0x00022d58) listscroll_popup_info_pane

0x3835,	// (0x000227a0) input_focus_pane_cp3

0x3d15,	// (0x00022c80) query_popup_pane_t1

0x3d23,	// (0x00022c8e) list_popup_info_pane_ParamLimits

0x3d23,	// (0x00022c8e) list_popup_info_pane

0x3d32,	// (0x00022c9d) listscroll_popup_info_pane_g1

0x3d3a,	// (0x00022ca5) scroll_pane_cp7

0x3d44,	// (0x00022caf) popup_info_list_pane_t1_ParamLimits

0x3d44,	// (0x00022caf) popup_info_list_pane_t1

0x3d5e,	// (0x00022cc9) popup_info_list_pane_t2_ParamLimits

0x3d5e,	// (0x00022cc9) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002e4fe) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002e4fe) popup_info_list_pane_t

0x3835,	// (0x000227a0) bg_popup_window_pane_cp12

0x6e4b,	// (0x00025db6) find_popup_pane

0x3915,	// (0x00022880) bg_popup_window_pane_cp3

0x3d78,	// (0x00022ce3) heading_pane_cp3

0x3d84,	// (0x00022cef) listscroll_popup_graphic_pane

0x3835,	// (0x000227a0) bg_popup_window_pane_cp4

0xd3b2,	// (0x0002c31d) heading_pane_cp4

0x3ded,	// (0x00022d58) listscroll_popup_colour_pane

0x3df5,	// (0x00022d60) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3df5,	// (0x00022d60) cell_large_graphic_colour_none_popup_pane

0xd3ba,	// (0x0002c325) grid_large_graphic_colour_popup_pane_ParamLimits

0xd3ba,	// (0x0002c325) grid_large_graphic_colour_popup_pane

0x3e35,	// (0x00022da0) listscroll_popup_colour_pane_g1_ParamLimits

0x3e35,	// (0x00022da0) listscroll_popup_colour_pane_g1

0x3e4c,	// (0x00022db7) listscroll_popup_colour_pane_g2_ParamLimits

0x3e4c,	// (0x00022db7) listscroll_popup_colour_pane_g2

0x3e63,	// (0x00022dce) listscroll_popup_colour_pane_g3_ParamLimits

0x3e63,	// (0x00022dce) listscroll_popup_colour_pane_g3

0xd3de,	// (0x0002c349) listscroll_popup_colour_pane_g4_ParamLimits

0xd3de,	// (0x0002c349) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002e503) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002e503) listscroll_popup_colour_pane_g

0x3e87,	// (0x00022df2) scroll_pane_cp6_ParamLimits

0x3e87,	// (0x00022df2) scroll_pane_cp6

0xd3ee,	// (0x0002c359) cell_large_graphic_colour_popup_pane_ParamLimits

0xd3ee,	// (0x0002c359) cell_large_graphic_colour_popup_pane

0x3eb8,	// (0x00022e23) cell_large_graphic_colour_none_popup_pane_t1

0x3835,	// (0x000227a0) grid_highlight_pane_cp5

0x3ec7,	// (0x00022e32) cell_large_graphic_colour_popup_pane_g1

0x3ecf,	// (0x00022e3a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002e50c) cell_large_graphic_colour_popup_pane_g

0x3ed7,	// (0x00022e42) cell_large_graphic_colour_popup_pane_g2_copy1

0x3ee0,	// (0x00022e4b) grid_highlight_pane_cp4

0x3ee8,	// (0x00022e53) bg_popup_window_pane_cp8_ParamLimits

0x3ee8,	// (0x00022e53) bg_popup_window_pane_cp8

0x3f03,	// (0x00022e6e) popup_snote_single_text_window_g1_ParamLimits

0x3f03,	// (0x00022e6e) popup_snote_single_text_window_g1

0x3f15,	// (0x00022e80) popup_snote_single_text_window_t1_ParamLimits

0x3f15,	// (0x00022e80) popup_snote_single_text_window_t1

0x3f28,	// (0x00022e93) popup_snote_single_text_window_t2_ParamLimits

0x3f28,	// (0x00022e93) popup_snote_single_text_window_t2

0x3f3b,	// (0x00022ea6) popup_snote_single_text_window_t3_ParamLimits

0x3f3b,	// (0x00022ea6) popup_snote_single_text_window_t3

0x3f74,	// (0x00022edf) popup_snote_single_text_window_t4_ParamLimits

0x3f74,	// (0x00022edf) popup_snote_single_text_window_t4

0x3fa8,	// (0x00022f13) popup_snote_single_text_window_t5_ParamLimits

0x3fa8,	// (0x00022f13) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002e511) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002e511) popup_snote_single_text_window_t

0x3fd7,	// (0x00022f42) bg_popup_window_pane_cp9_ParamLimits

0x3fd7,	// (0x00022f42) bg_popup_window_pane_cp9

0x3f03,	// (0x00022e6e) popup_snote_single_graphic_window_g1_ParamLimits

0x3f03,	// (0x00022e6e) popup_snote_single_graphic_window_g1

0x3fe5,	// (0x00022f50) popup_snote_single_graphic_window_g2_ParamLimits

0x3fe5,	// (0x00022f50) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002e51c) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002e51c) popup_snote_single_graphic_window_g

0x3ff1,	// (0x00022f5c) popup_snote_single_graphic_window_t1_ParamLimits

0x3ff1,	// (0x00022f5c) popup_snote_single_graphic_window_t1

0x4004,	// (0x00022f6f) popup_snote_single_graphic_window_t2_ParamLimits

0x4004,	// (0x00022f6f) popup_snote_single_graphic_window_t2

0x4017,	// (0x00022f82) popup_snote_single_graphic_window_t3_ParamLimits

0x4017,	// (0x00022f82) popup_snote_single_graphic_window_t3

0x4050,	// (0x00022fbb) popup_snote_single_graphic_window_t4_ParamLimits

0x4050,	// (0x00022fbb) popup_snote_single_graphic_window_t4

0x4084,	// (0x00022fef) popup_snote_single_graphic_window_t5_ParamLimits

0x4084,	// (0x00022fef) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002e521) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002e521) popup_snote_single_graphic_window_t

0x6d8d,	// (0x00025cf8) grid_graphic_popup_pane_ParamLimits

0x6d8d,	// (0x00025cf8) grid_graphic_popup_pane

0x6db7,	// (0x00025d22) listscroll_popup_graphic_pane_g1_ParamLimits

0x6db7,	// (0x00025d22) listscroll_popup_graphic_pane_g1

0xe01e,	// (0x0002cf89) listscroll_popup_graphic_pane_g2_ParamLimits

0xe01e,	// (0x0002cf89) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a4,	// (0x0002e90f) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a4,	// (0x0002e90f) listscroll_popup_graphic_pane_g

0x6ddf,	// (0x00025d4a) scroll_pane_cp5

0xdfc3,	// (0x0002cf2e) cell_graphic_popup_pane_ParamLimits

0xdfc3,	// (0x0002cf2e) cell_graphic_popup_pane

0x6d0d,	// (0x00025c78) cell_graphic_popup_pane_g1

0x6d15,	// (0x00025c80) cell_graphic_popup_pane_g2

0x3ed7,	// (0x00022e42) cell_graphic_popup_pane_g3

0x0002,

0xf99d,	// (0x0002e908) cell_graphic_popup_pane_g

0x6d1e,	// (0x00025c89) cell_graphic_popup_pane_t2

0x3ee0,	// (0x00022e4b) grid_highlight_pane_cp3

0x40c5,	// (0x00023030) list_gen_pane_ParamLimits

0x40c5,	// (0x00023030) list_gen_pane

0x40f7,	// (0x00023062) scroll_pane

0xdf7a,	// (0x0002cee5) bg_list_pane_g1_ParamLimits

0xdf7a,	// (0x0002cee5) bg_list_pane_g1

0x6c82,	// (0x00025bed) bg_list_pane_g2_ParamLimits

0x6c82,	// (0x00025bed) bg_list_pane_g2

0x6c97,	// (0x00025c02) bg_list_pane_g3_ParamLimits

0x6c97,	// (0x00025c02) bg_list_pane_g3

0x6cab,	// (0x00025c16) bg_list_pane_g4_ParamLimits

0x6cab,	// (0x00025c16) bg_list_pane_g4

0xdf97,	// (0x0002cf02) bg_list_pane_g5_ParamLimits

0xdf97,	// (0x0002cf02) bg_list_pane_g5

0x0004,

0xf992,	// (0x0002e8fd) bg_list_pane_g_ParamLimits

0xf992,	// (0x0002e8fd) bg_list_pane_g

0xdf42,	// (0x0002cead) list_double2_graphic_large_graphic_pane_ParamLimits

0xdf42,	// (0x0002cead) list_double2_graphic_large_graphic_pane

0xdf42,	// (0x0002cead) list_double2_graphic_pane_ParamLimits

0xdf42,	// (0x0002cead) list_double2_graphic_pane

0xdf42,	// (0x0002cead) list_double2_large_graphic_pane_ParamLimits

0xdf42,	// (0x0002cead) list_double2_large_graphic_pane

0xdf42,	// (0x0002cead) list_double2_pane_ParamLimits

0xdf42,	// (0x0002cead) list_double2_pane

0xdf42,	// (0x0002cead) list_double_graphic_heading_pane_ParamLimits

0xdf42,	// (0x0002cead) list_double_graphic_heading_pane

0xdf42,	// (0x0002cead) list_double_graphic_pane_ParamLimits

0xdf42,	// (0x0002cead) list_double_graphic_pane

0xdf42,	// (0x0002cead) list_double_heading_pane_ParamLimits

0xdf42,	// (0x0002cead) list_double_heading_pane

0xdf42,	// (0x0002cead) list_double_large_graphic_pane_ParamLimits

0xdf42,	// (0x0002cead) list_double_large_graphic_pane

0xdf42,	// (0x0002cead) list_double_number_pane_ParamLimits

0xdf42,	// (0x0002cead) list_double_number_pane

0xdf42,	// (0x0002cead) list_double_pane_ParamLimits

0xdf42,	// (0x0002cead) list_double_pane

0xdf42,	// (0x0002cead) list_double_time_pane_ParamLimits

0xdf42,	// (0x0002cead) list_double_time_pane

0xdf42,	// (0x0002cead) list_setting_number_pane_ParamLimits

0xdf42,	// (0x0002cead) list_setting_number_pane

0xdf42,	// (0x0002cead) list_setting_pane_ParamLimits

0xdf42,	// (0x0002cead) list_setting_pane

0xdf54,	// (0x0002cebf) list_single_2graphic_pane_ParamLimits

0xdf54,	// (0x0002cebf) list_single_2graphic_pane

0xdf54,	// (0x0002cebf) list_single_graphic_heading_pane_ParamLimits

0xdf54,	// (0x0002cebf) list_single_graphic_heading_pane

0xdf54,	// (0x0002cebf) list_single_graphic_pane_ParamLimits

0xdf54,	// (0x0002cebf) list_single_graphic_pane

0xdf54,	// (0x0002cebf) list_single_heading_pane_ParamLimits

0xdf54,	// (0x0002cebf) list_single_heading_pane

0xdf54,	// (0x0002cebf) list_single_large_graphic_pane_ParamLimits

0xdf54,	// (0x0002cebf) list_single_large_graphic_pane

0xdf54,	// (0x0002cebf) list_single_number_heading_pane_ParamLimits

0xdf54,	// (0x0002cebf) list_single_number_heading_pane

0xdf54,	// (0x0002cebf) list_single_number_pane_ParamLimits

0xdf54,	// (0x0002cebf) list_single_number_pane

0xdf54,	// (0x0002cebf) list_single_pane_ParamLimits

0xdf54,	// (0x0002cebf) list_single_pane

0x3835,	// (0x000227a0) list_highlight_pane_cp1

0x0afd,	// (0x0001fa68) list_single_pane_g1_ParamLimits

0x0afd,	// (0x0001fa68) list_single_pane_g1

0x0b09,	// (0x0001fa74) list_single_pane_g2_ParamLimits

0x0b09,	// (0x0001fa74) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002e533) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002e533) list_single_pane_g

0x0e2a,	// (0x0001fd95) list_single_pane_t1_ParamLimits

0x0e2a,	// (0x0001fd95) list_single_pane_t1

0x0afd,	// (0x0001fa68) list_single_number_pane_g1_ParamLimits

0x0afd,	// (0x0001fa68) list_single_number_pane_g1

0x0b09,	// (0x0001fa74) list_single_number_pane_g2_ParamLimits

0x0b09,	// (0x0001fa74) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002e533) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002e533) list_single_number_pane_g

0x0b5b,	// (0x0001fac6) list_single_number_pane_t1_ParamLimits

0x0b5b,	// (0x0001fac6) list_single_number_pane_t1

0xbd88,	// (0x0002acf3) list_single_number_pane_t2_ParamLimits

0xbd88,	// (0x0002acf3) list_single_number_pane_t2

0x0001,

0xf953,	// (0x0002e8be) list_single_number_pane_t_ParamLimits

0xf953,	// (0x0002e8be) list_single_number_pane_t

0xb784,	// (0x0002a6ef) list_single_graphic_pane_g1_ParamLimits

0xb784,	// (0x0002a6ef) list_single_graphic_pane_g1

0x0afd,	// (0x0001fa68) list_single_graphic_pane_g2_ParamLimits

0x0afd,	// (0x0001fa68) list_single_graphic_pane_g2

0x0b09,	// (0x0001fa74) list_single_graphic_pane_g3_ParamLimits

0x0b09,	// (0x0001fa74) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002e52c) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002e52c) list_single_graphic_pane_g

0xb790,	// (0x0002a6fb) list_single_graphic_pane_t1_ParamLimits

0xb790,	// (0x0002a6fb) list_single_graphic_pane_t1

0x0afd,	// (0x0001fa68) list_single_heading_pane_g1_ParamLimits

0x0afd,	// (0x0001fa68) list_single_heading_pane_g1

0x0b09,	// (0x0001fa74) list_single_heading_pane_g2_ParamLimits

0x0b09,	// (0x0001fa74) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e533) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e533) list_single_heading_pane_g

0xb7a6,	// (0x0002a711) list_single_heading_pane_t1_ParamLimits

0xb7a6,	// (0x0002a711) list_single_heading_pane_t1

0xb7bc,	// (0x0002a727) list_single_heading_pane_t2_ParamLimits

0xb7bc,	// (0x0002a727) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002e538) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002e538) list_single_heading_pane_t

0x0afd,	// (0x0001fa68) list_single_number_heading_pane_g1_ParamLimits

0x0afd,	// (0x0001fa68) list_single_number_heading_pane_g1

0x0b09,	// (0x0001fa74) list_single_number_heading_pane_g2_ParamLimits

0x0b09,	// (0x0001fa74) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e533) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e533) list_single_number_heading_pane_g

0xb7a6,	// (0x0002a711) list_single_number_heading_pane_t1_ParamLimits

0xb7a6,	// (0x0002a711) list_single_number_heading_pane_t1

0x0dde,	// (0x0001fd49) list_single_number_heading_pane_t2_ParamLimits

0x0dde,	// (0x0001fd49) list_single_number_heading_pane_t2

0x0df0,	// (0x0001fd5b) list_single_number_heading_pane_t3_ParamLimits

0x0df0,	// (0x0001fd5b) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002e53d) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002e53d) list_single_number_heading_pane_t

0x0af1,	// (0x0001fa5c) list_single_graphic_heading_pane_g1_ParamLimits

0x0af1,	// (0x0001fa5c) list_single_graphic_heading_pane_g1

0xb7ce,	// (0x0002a739) list_single_graphic_heading_pane_g4_ParamLimits

0xb7ce,	// (0x0002a739) list_single_graphic_heading_pane_g4

0x0b09,	// (0x0001fa74) list_single_graphic_heading_pane_g5_ParamLimits

0x0b09,	// (0x0001fa74) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002e544) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002e544) list_single_graphic_heading_pane_g

0xb7a6,	// (0x0002a711) list_single_graphic_heading_pane_t1_ParamLimits

0xb7a6,	// (0x0002a711) list_single_graphic_heading_pane_t1

0xb7df,	// (0x0002a74a) list_single_graphic_heading_pane_t2_ParamLimits

0xb7df,	// (0x0002a74a) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002e54b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002e54b) list_single_graphic_heading_pane_t

0x0e40,	// (0x0001fdab) list_single_large_graphic_pane_g1_ParamLimits

0x0e40,	// (0x0001fdab) list_single_large_graphic_pane_g1

0x0afd,	// (0x0001fa68) list_single_large_graphic_pane_g2_ParamLimits

0x0afd,	// (0x0001fa68) list_single_large_graphic_pane_g2

0x0b09,	// (0x0001fa74) list_single_large_graphic_pane_g3_ParamLimits

0x0b09,	// (0x0001fa74) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002e550) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002e550) list_single_large_graphic_pane_g

0x5c79,	// (0x00024be4) wait_border_pane_g2_copy1

0xb7f1,	// (0x0002a75c) list_single_large_graphic_pane_g4_cp2

0x0e4c,	// (0x0001fdb7) list_single_large_graphic_pane_t1_ParamLimits

0x0e4c,	// (0x0001fdb7) list_single_large_graphic_pane_t1

0xb7f9,	// (0x0002a764) list_double_pane_g1_ParamLimits

0xb7f9,	// (0x0002a764) list_double_pane_g1

0xb805,	// (0x0002a770) list_double_pane_g2_ParamLimits

0xb805,	// (0x0002a770) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002e557) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002e557) list_double_pane_g

0xb811,	// (0x0002a77c) list_double_pane_t1_ParamLimits

0xb811,	// (0x0002a77c) list_double_pane_t1

0xb827,	// (0x0002a792) list_double_pane_t2_ParamLimits

0xb827,	// (0x0002a792) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002e55c) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002e55c) list_double_pane_t

0xb839,	// (0x0002a7a4) list_double2_pane_g1_ParamLimits

0xb839,	// (0x0002a7a4) list_double2_pane_g1

0xb84a,	// (0x0002a7b5) list_double2_pane_g2_ParamLimits

0xb84a,	// (0x0002a7b5) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002e561) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002e561) list_double2_pane_g

0xb856,	// (0x0002a7c1) list_double2_pane_t1_ParamLimits

0xb856,	// (0x0002a7c1) list_double2_pane_t1

0xb86c,	// (0x0002a7d7) list_double2_pane_t2_ParamLimits

0xb86c,	// (0x0002a7d7) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002e566) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002e566) list_double2_pane_t

0xb7f9,	// (0x0002a764) list_double_number_pane_g1_ParamLimits

0xb7f9,	// (0x0002a764) list_double_number_pane_g1

0xb805,	// (0x0002a770) list_double_number_pane_g2_ParamLimits

0xb805,	// (0x0002a770) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002e557) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002e557) list_double_number_pane_g

0xb87e,	// (0x0002a7e9) list_double_number_pane_t1_ParamLimits

0xb87e,	// (0x0002a7e9) list_double_number_pane_t1

0xb890,	// (0x0002a7fb) list_double_number_pane_t2_ParamLimits

0xb890,	// (0x0002a7fb) list_double_number_pane_t2

0xb8a6,	// (0x0002a811) list_double_number_pane_t3_ParamLimits

0xb8a6,	// (0x0002a811) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002e56b) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002e56b) list_double_number_pane_t

0xb8b8,	// (0x0002a823) list_double_graphic_pane_g1_ParamLimits

0xb8b8,	// (0x0002a823) list_double_graphic_pane_g1

0xb8c4,	// (0x0002a82f) list_double_graphic_pane_g2_ParamLimits

0xb8c4,	// (0x0002a82f) list_double_graphic_pane_g2

0xb8d3,	// (0x0002a83e) list_double_graphic_pane_g3_ParamLimits

0xb8d3,	// (0x0002a83e) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002e572) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002e572) list_double_graphic_pane_g

0xb8eb,	// (0x0002a856) list_double_graphic_pane_t1_ParamLimits

0xb8eb,	// (0x0002a856) list_double_graphic_pane_t1

0xb901,	// (0x0002a86c) list_double_graphic_pane_t2_ParamLimits

0xb901,	// (0x0002a86c) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002e57b) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002e57b) list_double_graphic_pane_t

0x0669,	// (0x0001f5d4) list_double2_graphic_pane_g1_ParamLimits

0x0669,	// (0x0001f5d4) list_double2_graphic_pane_g1

0x1101,	// (0x0002006c) list_double2_graphic_pane_g2_ParamLimits

0x1101,	// (0x0002006c) list_double2_graphic_pane_g2

0xb84a,	// (0x0002a7b5) list_double2_graphic_pane_g3_ParamLimits

0xb84a,	// (0x0002a7b5) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002e580) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002e580) list_double2_graphic_pane_g

0xb913,	// (0x0002a87e) list_double2_graphic_pane_t1_ParamLimits

0xb913,	// (0x0002a87e) list_double2_graphic_pane_t1

0xb929,	// (0x0002a894) list_double2_graphic_pane_t2_ParamLimits

0xb929,	// (0x0002a894) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002e587) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002e587) list_double2_graphic_pane_t

0xb93b,	// (0x0002a8a6) list_double_large_graphic_pane_g1_ParamLimits

0xb93b,	// (0x0002a8a6) list_double_large_graphic_pane_g1

0xb95a,	// (0x0002a8c5) list_double_large_graphic_pane_g2_ParamLimits

0xb95a,	// (0x0002a8c5) list_double_large_graphic_pane_g2

0xb805,	// (0x0002a770) list_double_large_graphic_pane_g3_ParamLimits

0xb805,	// (0x0002a770) list_double_large_graphic_pane_g3

0xb96b,	// (0x0002a8d6) list_double_large_graphic_pane_g4_ParamLimits

0xb96b,	// (0x0002a8d6) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002e58c) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002e58c) list_double_large_graphic_pane_g

0xb97e,	// (0x0002a8e9) list_double_large_graphic_pane_t1_ParamLimits

0xb97e,	// (0x0002a8e9) list_double_large_graphic_pane_t1

0xb997,	// (0x0002a902) list_double_large_graphic_pane_t2_ParamLimits

0xb997,	// (0x0002a902) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002e597) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002e597) list_double_large_graphic_pane_t

0xb9a9,	// (0x0002a914) list_double2_large_graphic_pane_g1_ParamLimits

0xb9a9,	// (0x0002a914) list_double2_large_graphic_pane_g1

0xb839,	// (0x0002a7a4) list_double2_large_graphic_pane_g2_ParamLimits

0xb839,	// (0x0002a7a4) list_double2_large_graphic_pane_g2

0xb84a,	// (0x0002a7b5) list_double2_large_graphic_pane_g3_ParamLimits

0xb84a,	// (0x0002a7b5) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002e59c) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002e59c) list_double2_large_graphic_pane_g

0xb9b5,	// (0x0002a920) list_double2_large_graphic_pane_t1_ParamLimits

0xb9b5,	// (0x0002a920) list_double2_large_graphic_pane_t1

0xb9cb,	// (0x0002a936) list_double2_large_graphic_pane_t2_ParamLimits

0xb9cb,	// (0x0002a936) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0002e5a3) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0002e5a3) list_double2_large_graphic_pane_t

0xb9dd,	// (0x0002a948) list_double_heading_pane_g1_ParamLimits

0xb9dd,	// (0x0002a948) list_double_heading_pane_g1

0x043e,	// (0x0001f3a9) list_double_heading_pane_g2_ParamLimits

0x043e,	// (0x0001f3a9) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002e5a8) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002e5a8) list_double_heading_pane_g

0xb9ee,	// (0x0002a959) list_double_heading_pane_t1_ParamLimits

0xb9ee,	// (0x0002a959) list_double_heading_pane_t1

0xb86c,	// (0x0002a7d7) list_double_heading_pane_t2_ParamLimits

0xb86c,	// (0x0002a7d7) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002e5ad) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002e5ad) list_double_heading_pane_t

0x0669,	// (0x0001f5d4) list_double_graphic_heading_pane_g1_ParamLimits

0x0669,	// (0x0001f5d4) list_double_graphic_heading_pane_g1

0xb9dd,	// (0x0002a948) list_double_graphic_heading_pane_g2_ParamLimits

0xb9dd,	// (0x0002a948) list_double_graphic_heading_pane_g2

0x043e,	// (0x0001f3a9) list_double_graphic_heading_pane_g3_ParamLimits

0x043e,	// (0x0001f3a9) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0002e5b2) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0002e5b2) list_double_graphic_heading_pane_g

0xba04,	// (0x0002a96f) list_double_graphic_heading_pane_t1_ParamLimits

0xba04,	// (0x0002a96f) list_double_graphic_heading_pane_t1

0xb929,	// (0x0002a894) list_double_graphic_heading_pane_t2_ParamLimits

0xb929,	// (0x0002a894) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002e5b9) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002e5b9) list_double_graphic_heading_pane_t

0xb95a,	// (0x0002a8c5) list_double_time_pane_g1_ParamLimits

0xb95a,	// (0x0002a8c5) list_double_time_pane_g1

0xb805,	// (0x0002a770) list_double_time_pane_g2_ParamLimits

0xb805,	// (0x0002a770) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0002e5be) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0002e5be) list_double_time_pane_g

0xba1a,	// (0x0002a985) list_double_time_pane_t1_ParamLimits

0xba1a,	// (0x0002a985) list_double_time_pane_t1

0xba30,	// (0x0002a99b) list_double_time_pane_t2_ParamLimits

0xba30,	// (0x0002a99b) list_double_time_pane_t2

0xba42,	// (0x0002a9ad) list_double_time_pane_t3_ParamLimits

0xba42,	// (0x0002a9ad) list_double_time_pane_t3

0xba54,	// (0x0002a9bf) list_double_time_pane_t4_ParamLimits

0xba54,	// (0x0002a9bf) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0002e5c3) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0002e5c3) list_double_time_pane_t

0xba66,	// (0x0002a9d1) list_setting_pane_g1_ParamLimits

0xba66,	// (0x0002a9d1) list_setting_pane_g1

0xba72,	// (0x0002a9dd) list_setting_pane_g2_ParamLimits

0xba72,	// (0x0002a9dd) list_setting_pane_g2

0x0001,

0xf661,	// (0x0002e5cc) list_setting_pane_g_ParamLimits

0xf661,	// (0x0002e5cc) list_setting_pane_g

0xba7e,	// (0x0002a9e9) list_setting_pane_t1_ParamLimits

0xba7e,	// (0x0002a9e9) list_setting_pane_t1

0xba98,	// (0x0002aa03) list_setting_pane_t2_ParamLimits

0xba98,	// (0x0002aa03) list_setting_pane_t2

0x0002,

0xf666,	// (0x0002e5d1) list_setting_pane_t_ParamLimits

0xf666,	// (0x0002e5d1) list_setting_pane_t

0xbad7,	// (0x0002aa42) set_value_pane_cp_ParamLimits

0xbad7,	// (0x0002aa42) set_value_pane_cp

0xbae3,	// (0x0002aa4e) list_setting_number_pane_g1_ParamLimits

0xbae3,	// (0x0002aa4e) list_setting_number_pane_g1

0xbaef,	// (0x0002aa5a) list_setting_number_pane_g2_ParamLimits

0xbaef,	// (0x0002aa5a) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0002e5d8) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0002e5d8) list_setting_number_pane_g

0xbafb,	// (0x0002aa66) list_setting_number_pane_t1_ParamLimits

0xbafb,	// (0x0002aa66) list_setting_number_pane_t1

0xbb14,	// (0x0002aa7f) list_setting_number_pane_t2_ParamLimits

0xbb14,	// (0x0002aa7f) list_setting_number_pane_t2

0xbb2e,	// (0x0002aa99) list_setting_number_pane_t3_ParamLimits

0xbb2e,	// (0x0002aa99) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0002e5dd) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0002e5dd) list_setting_number_pane_t

0xbad7,	// (0x0002aa42) set_value_pane_ParamLimits

0xbad7,	// (0x0002aa42) set_value_pane

0x412b,	// (0x00023096) bg_set_opt_pane_ParamLimits

0x412b,	// (0x00023096) bg_set_opt_pane

0x07ca,	// (0x0001f735) set_value_pane_t1

0x414c,	// (0x000230b7) slider_set_pane_cp3

0x4155,	// (0x000230c0) volume_small_pane_cp

0x415e,	// (0x000230c9) list_form_gen_pane

0x4167,	// (0x000230d2) scroll_pane_cp8

0xbb71,	// (0x0002aadc) form_field_data_pane_ParamLimits

0xbb71,	// (0x0002aadc) form_field_data_pane

0xbb88,	// (0x0002aaf3) form_field_data_wide_pane_ParamLimits

0xbb88,	// (0x0002aaf3) form_field_data_wide_pane

0xbba8,	// (0x0002ab13) form_field_popup_pane_ParamLimits

0xbba8,	// (0x0002ab13) form_field_popup_pane

0xbbc0,	// (0x0002ab2b) form_field_popup_wide_pane_ParamLimits

0xbbc0,	// (0x0002ab2b) form_field_popup_wide_pane

0x085e,	// (0x0001f7c9) form_field_slider_pane_ParamLimits

0x085e,	// (0x0001f7c9) form_field_slider_pane

0x0871,	// (0x0001f7dc) form_field_slider_wide_pane_ParamLimits

0x0871,	// (0x0001f7dc) form_field_slider_wide_pane

0x4178,	// (0x000230e3) data_form_pane

0xbbe1,	// (0x0002ab4c) form_field_data_pane_t1

0x4184,	// (0x000230ef) input_focus_pane

0x08a6,	// (0x0001f811) data_form_wide_pane

0x08c3,	// (0x0001f82e) form_field_data_wide_pane_t1

0x3ef5,	// (0x00022e60) input_focus_pane_cp6

0xbbfb,	// (0x0002ab66) form_field_popup_pane_t1

0x4184,	// (0x000230ef) input_focus_pane_cp7

0x41b2,	// (0x0002311d) list_form_pane

0x0905,	// (0x0001f870) form_field_popup_wide_pane_t1

0x4184,	// (0x000230ef) input_focus_pane_cp8

0x41be,	// (0x00023129) list_form_wide_pane

0xbc1d,	// (0x0002ab88) form_field_slider_pane_t1_ParamLimits

0xbc1d,	// (0x0002ab88) form_field_slider_pane_t1

0xbc35,	// (0x0002aba0) form_field_slider_pane_t2_ParamLimits

0xbc35,	// (0x0002aba0) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0002e5ed) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0002e5ed) form_field_slider_pane_t

0x3b90,	// (0x00022afb) input_focus_pane_cp9_ParamLimits

0x3b90,	// (0x00022afb) input_focus_pane_cp9

0xbc4a,	// (0x0002abb5) slider_cont_pane_ParamLimits

0xbc4a,	// (0x0002abb5) slider_cont_pane

0x41ca,	// (0x00023135) form_field_slider_wide_pane_t1_ParamLimits

0x41ca,	// (0x00023135) form_field_slider_wide_pane_t1

0x0961,	// (0x0001f8cc) form_field_slider_wide_pane_t2_ParamLimits

0x0961,	// (0x0001f8cc) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0002e5f2) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0002e5f2) form_field_slider_wide_pane_t

0x3b90,	// (0x00022afb) input_focus_pane_cp10_ParamLimits

0x3b90,	// (0x00022afb) input_focus_pane_cp10

0xbc5e,	// (0x0002abc9) slider_cont_pane_cp1_ParamLimits

0xbc5e,	// (0x0002abc9) slider_cont_pane_cp1

0xbc72,	// (0x0002abdd) slider_form_pane_cp

0x41dc,	// (0x00023147) input_focus_pane_g1

0x41e4,	// (0x0002314f) input_focus_pane_g2

0x41ec,	// (0x00023157) input_focus_pane_g3

0x41f4,	// (0x0002315f) input_focus_pane_g4

0x41fc,	// (0x00023167) input_focus_pane_g5

0x4204,	// (0x0002316f) input_focus_pane_g6

0x420c,	// (0x00023177) input_focus_pane_g7

0x4214,	// (0x0002317f) input_focus_pane_g8

0x421c,	// (0x00023187) input_focus_pane_g9

0x382b,	// (0x00022796) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0002e5f7) input_focus_pane_g

0x5c82,	// (0x00024bed) wait_border_pane_g3_copy1

0xbc7a,	// (0x0002abe5) data_form_pane_t1

0x382b,	// (0x00022796) wait_anim_pane_g1_copy1

0xbd9a,	// (0x0002ad05) data_form_wide_pane_t1

0xbc94,	// (0x0002abff) list_form_graphic_pane_cp_ParamLimits

0xbc94,	// (0x0002abff) list_form_graphic_pane_cp

0x6ba2,	// (0x00025b0d) slider_form_pane_g1

0x6bab,	// (0x00025b16) slider_form_pane_g2

0x0006,

0xf983,	// (0x0002e8ee) slider_form_pane_g

0xbc94,	// (0x0002abff) list_form_graphic_pane_ParamLimits

0xbc94,	// (0x0002abff) list_form_graphic_pane

0x09df,	// (0x0001f94a) list_form_graphic_pane_g1

0x09e7,	// (0x0001f952) list_form_graphic_pane_t1_ParamLimits

0x09e7,	// (0x0001f952) list_form_graphic_pane_t1

0x3915,	// (0x00022880) list_highlight_pane_cp5_ParamLimits

0x3915,	// (0x00022880) list_highlight_pane_cp5

0xbca6,	// (0x0002ac11) find_pane_g1

0x4224,	// (0x0002318f) input_find_pane

0xbcaf,	// (0x0002ac1a) input_find_pane_g1_ParamLimits

0xbcaf,	// (0x0002ac1a) input_find_pane_g1

0xbcbb,	// (0x0002ac26) input_find_pane_t1_ParamLimits

0xbcbb,	// (0x0002ac26) input_find_pane_t1

0xbcd0,	// (0x0002ac3b) input_find_pane_t2_ParamLimits

0xbcd0,	// (0x0002ac3b) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0002e60c) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0002e60c) input_find_pane_t

0x422d,	// (0x00023198) input_focus_pane_cp5_ParamLimits

0x422d,	// (0x00023198) input_focus_pane_cp5

0x4247,	// (0x000231b2) bg_popup_window_pane_cp2_ParamLimits

0x4247,	// (0x000231b2) bg_popup_window_pane_cp2

0x4254,	// (0x000231bf) listscroll_menu_pane_ParamLimits

0x4254,	// (0x000231bf) listscroll_menu_pane

0xd423,	// (0x0002c38e) popup_submenu_window_ParamLimits

0xd423,	// (0x0002c38e) popup_submenu_window

0x428c,	// (0x000231f7) find_popup_pane_g1

0x4294,	// (0x000231ff) input_popup_find_pane_cp

0x422d,	// (0x00023198) input_focus_pane_cp4_ParamLimits

0x422d,	// (0x00023198) input_focus_pane_cp4

0x42aa,	// (0x00023215) input_popup_find_pane_t1_ParamLimits

0x42aa,	// (0x00023215) input_popup_find_pane_t1

0x3835,	// (0x000227a0) bg_popup_sub_pane_cp

0x42d8,	// (0x00023243) listscroll_popup_sub_pane

0x42e0,	// (0x0002324b) list_submenu_pane_ParamLimits

0x42e0,	// (0x0002324b) list_submenu_pane

0x42f1,	// (0x0002325c) scroll_pane_cp4

0x42f9,	// (0x00023264) list_single_popup_submenu_pane_ParamLimits

0x42f9,	// (0x00023264) list_single_popup_submenu_pane

0x430d,	// (0x00023278) list_single_popup_submenu_pane_g1

0x4315,	// (0x00023280) list_single_popup_submenu_pane_t1_ParamLimits

0x4315,	// (0x00023280) list_single_popup_submenu_pane_t1

0x3b90,	// (0x00022afb) bg_active_tab_pane_cp1_ParamLimits

0x3b90,	// (0x00022afb) bg_active_tab_pane_cp1

0x432a,	// (0x00023295) tabs_2_active_pane_g1

0xd45d,	// (0x0002c3c8) tabs_2_active_pane_t1

0x3b90,	// (0x00022afb) bg_passive_tab_pane_cp1_ParamLimits

0x3b90,	// (0x00022afb) bg_passive_tab_pane_cp1

0x432a,	// (0x00023295) tabs_2_passive_pane_g1

0xd45d,	// (0x0002c3c8) tabs_2_passive_pane_t1

0x3915,	// (0x00022880) bg_active_tab_pane_cp4

0xd46f,	// (0x0002c3da) tabs_2_long_active_pane_t1

0x5161,	// (0x000240cc) bg_passive_tab_pane_cp4

0x250b,	// (0x00021476) list_single_midp_graphic_pane_g4_ParamLimits

0x3915,	// (0x00022880) bg_active_tab_pane_cp5

0xd482,	// (0x0002c3ed) tabs_3_long_active_pane_t1

0x5161,	// (0x000240cc) bg_passive_tab_pane_cp5

0x250b,	// (0x00021476) list_single_midp_graphic_pane_g4

0x3915,	// (0x00022880) bg_popup_window_pane_cp13_ParamLimits

0x3915,	// (0x00022880) bg_popup_window_pane_cp13

0x438c,	// (0x000232f7) listscroll_popup_fast_pane_ParamLimits

0x438c,	// (0x000232f7) listscroll_popup_fast_pane

0x439b,	// (0x00023306) grid_popup_fast_pane_ParamLimits

0x439b,	// (0x00023306) grid_popup_fast_pane

0x43ad,	// (0x00023318) scroll_pane_cp9_ParamLimits

0x43ad,	// (0x00023318) scroll_pane_cp9

0x8491,	// (0x000273fc) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8491,	// (0x000273fc) list_single_graphic_hl_pane_t1_cp2

0x43d1,	// (0x0002333c) input_focus_pane_cp20_ParamLimits

0x43d1,	// (0x0002333c) input_focus_pane_cp20

0x43df,	// (0x0002334a) query_popup_data_pane_t1_ParamLimits

0x43df,	// (0x0002334a) query_popup_data_pane_t1

0x43f2,	// (0x0002335d) query_popup_data_pane_t2_ParamLimits

0x43f2,	// (0x0002335d) query_popup_data_pane_t2

0x4438,	// (0x000233a3) query_popup_data_pane_t3_ParamLimits

0x4438,	// (0x000233a3) query_popup_data_pane_t3

0x4479,	// (0x000233e4) query_popup_data_pane_t4_ParamLimits

0x4479,	// (0x000233e4) query_popup_data_pane_t4

0x44b5,	// (0x00023420) query_popup_data_pane_t5_ParamLimits

0x44b5,	// (0x00023420) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0002e611) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0002e611) query_popup_data_pane_t

0x41dc,	// (0x00023147) bg_set_opt_pane_g1

0x41e4,	// (0x0002314f) bg_set_opt_pane_g2

0x41ec,	// (0x00023157) bg_set_opt_pane_g3

0x41f4,	// (0x0002315f) bg_set_opt_pane_g4

0x41fc,	// (0x00023167) bg_set_opt_pane_g5

0x4204,	// (0x0002316f) bg_set_opt_pane_g6

0x420c,	// (0x00023177) bg_set_opt_pane_g7

0x4214,	// (0x0002317f) bg_set_opt_pane_g8

0x421c,	// (0x00023187) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0002e61c) bg_set_opt_pane_g

0x1bb1,	// (0x00020b1c) control_top_pane_stacon_ParamLimits

0x1bb1,	// (0x00020b1c) control_top_pane_stacon

0x1c04,	// (0x00020b6f) signal_pane_stacon_ParamLimits

0x1c04,	// (0x00020b6f) signal_pane_stacon

0x4aa5,	// (0x00023a10) stacon_top_pane_g1_ParamLimits

0x4aa5,	// (0x00023a10) stacon_top_pane_g1

0x1c29,	// (0x00020b94) title_pane_stacon_ParamLimits

0x1c29,	// (0x00020b94) title_pane_stacon

0x1c53,	// (0x00020bbe) uni_indicator_pane_stacon_ParamLimits

0x1c53,	// (0x00020bbe) uni_indicator_pane_stacon

0x1c68,	// (0x00020bd3) battery_pane_stacon_ParamLimits

0x1c68,	// (0x00020bd3) battery_pane_stacon

0x1cac,	// (0x00020c17) control_bottom_pane_stacon_ParamLimits

0x1cac,	// (0x00020c17) control_bottom_pane_stacon

0x1ccf,	// (0x00020c3a) navi_pane_stacon_ParamLimits

0x1ccf,	// (0x00020c3a) navi_pane_stacon

0x4ac7,	// (0x00023a32) stacon_bottom_pane_g1_ParamLimits

0x4ac7,	// (0x00023a32) stacon_bottom_pane_g1

0x1914,	// (0x0002087f) aid_levels_signal_lsc_ParamLimits

0x1914,	// (0x0002087f) aid_levels_signal_lsc

0x192a,	// (0x00020895) signal_pane_stacon_g1_ParamLimits

0x192a,	// (0x00020895) signal_pane_stacon_g1

0x193e,	// (0x000208a9) signal_pane_stacon_g2_ParamLimits

0x193e,	// (0x000208a9) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0002e62f) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002e62f) signal_pane_stacon_g

0x1973,	// (0x000208de) title_pane_stacon_t1_ParamLimits

0x1973,	// (0x000208de) title_pane_stacon_t1

0x44f9,	// (0x00023464) uni_indicator_pane_stacon_g1

0x4503,	// (0x0002346e) uni_indicator_pane_stacon_g2

0x450d,	// (0x00023478) uni_indicator_pane_stacon_g3

0x4517,	// (0x00023482) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0002e63b) uni_indicator_pane_stacon_g

0x1998,	// (0x00020903) control_top_pane_stacon_g1

0x19a0,	// (0x0002090b) control_top_pane_stacon_t1_ParamLimits

0x19a0,	// (0x0002090b) control_top_pane_stacon_t1

0x19d7,	// (0x00020942) aid_levels_battery_lsc_ParamLimits

0x19d7,	// (0x00020942) aid_levels_battery_lsc

0x19ee,	// (0x00020959) battery_pane_stacon_g1_ParamLimits

0x19ee,	// (0x00020959) battery_pane_stacon_g1

0x1a01,	// (0x0002096c) battery_pane_stacon_g2_ParamLimits

0x1a01,	// (0x0002096c) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0002e644) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0002e644) battery_pane_stacon_g

0x1a3f,	// (0x000209aa) navi_icon_pane_stacon

0x1a53,	// (0x000209be) navi_navi_pane_stacon

0x1a3f,	// (0x000209aa) navi_text_pane_stacon

0x1998,	// (0x00020903) control_bottom_pane_stacon_g1

0x1a67,	// (0x000209d2) control_bottom_pane_stacon_t1_ParamLimits

0x1a67,	// (0x000209d2) control_bottom_pane_stacon_t1

0xd494,	// (0x0002c3ff) grid_app_pane_ParamLimits

0xd494,	// (0x0002c3ff) grid_app_pane

0xd4cc,	// (0x0002c437) scroll_pane_cp15_ParamLimits

0xd4cc,	// (0x0002c437) scroll_pane_cp15

0xd4e1,	// (0x0002c44c) cell_app_pane_ParamLimits

0xd4e1,	// (0x0002c44c) cell_app_pane

0xd526,	// (0x0002c491) cell_app_pane_g1_ParamLimits

0xd526,	// (0x0002c491) cell_app_pane_g1

0x45ba,	// (0x00023525) cell_app_pane_g2_ParamLimits

0x45ba,	// (0x00023525) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0002e649) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0002e649) cell_app_pane_g

0xd54a,	// (0x0002c4b5) cell_app_pane_t1_ParamLimits

0xd54a,	// (0x0002c4b5) cell_app_pane_t1

0x45dd,	// (0x00023548) grid_highlight_pane_ParamLimits

0x45dd,	// (0x00023548) grid_highlight_pane

0x41dc,	// (0x00023147) cell_highlight_pane_g1

0x41e4,	// (0x0002314f) cell_highlight_pane_g2

0x41ec,	// (0x00023157) cell_highlight_pane_g3

0x41f4,	// (0x0002315f) cell_highlight_pane_g4

0x41fc,	// (0x00023167) cell_highlight_pane_g5

0x4204,	// (0x0002316f) cell_highlight_pane_g6

0x420c,	// (0x00023177) cell_highlight_pane_g7

0x4214,	// (0x0002317f) cell_highlight_pane_g8

0x421c,	// (0x00023187) cell_highlight_pane_g9

0x382b,	// (0x00022796) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0002e5f7) cell_highlight_pane_g

0x45ee,	// (0x00023559) bg_scroll_pane

0x1ab1,	// (0x00020a1c) scroll_handle_pane

0x4635,	// (0x000235a0) scroll_bg_pane_g1

0x464a,	// (0x000235b5) scroll_bg_pane_g2

0x4662,	// (0x000235cd) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0002e64e) scroll_bg_pane_g

0x4677,	// (0x000235e2) scroll_handle_focus_pane_ParamLimits

0x4677,	// (0x000235e2) scroll_handle_focus_pane

0x4635,	// (0x000235a0) scroll_handle_pane_g1

0x4684,	// (0x000235ef) scroll_handle_pane_g2

0x4662,	// (0x000235cd) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0002e655) scroll_handle_pane_g

0x422d,	// (0x00023198) bg_popup_sub_pane_cp21_ParamLimits

0x422d,	// (0x00023198) bg_popup_sub_pane_cp21

0x4698,	// (0x00023603) popup_fep_japan_predictive_window_t1_ParamLimits

0x4698,	// (0x00023603) popup_fep_japan_predictive_window_t1

0x46b2,	// (0x0002361d) popup_fep_japan_predictive_window_t2_ParamLimits

0x46b2,	// (0x0002361d) popup_fep_japan_predictive_window_t2

0x46e5,	// (0x00023650) popup_fep_japan_predictive_window_t3_ParamLimits

0x46e5,	// (0x00023650) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0002e65c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0002e65c) popup_fep_japan_predictive_window_t

0x3835,	// (0x000227a0) bg_popup_sub_pane_cp23

0x471c,	// (0x00023687) listscroll_japin_cand_pane

0x4724,	// (0x0002368f) popup_fep_japan_candidate_window_t1

0x4732,	// (0x0002369d) candidate_pane_ParamLimits

0x4732,	// (0x0002369d) candidate_pane

0x4744,	// (0x000236af) scroll_pane_cp30

0x474c,	// (0x000236b7) list_single_popup_jap_candidate_pane_ParamLimits

0x474c,	// (0x000236b7) list_single_popup_jap_candidate_pane

0x3835,	// (0x000227a0) list_highlight_pane_cp30

0x4761,	// (0x000236cc) list_single_popup_jap_candidate_pane_t1

0x4770,	// (0x000236db) level_1_signal

0x4782,	// (0x000236ed) level_2_signal

0x4795,	// (0x00023700) level_3_signal

0x47a8,	// (0x00023713) level_4_signal

0x47bb,	// (0x00023726) level_5_signal

0x47ce,	// (0x00023739) level_6_signal

0x47e1,	// (0x0002374c) level_7_signal

0x4770,	// (0x000236db) level_1_battery

0x4782,	// (0x000236ed) level_2_battery

0x4795,	// (0x00023700) level_3_battery

0x47a8,	// (0x00023713) level_4_battery

0x47bb,	// (0x00023726) level_5_battery

0x47ce,	// (0x00023739) level_6_battery

0x47e1,	// (0x0002374c) level_7_battery

0x480c,	// (0x00023777) list_menu_pane_ParamLimits

0x480c,	// (0x00023777) list_menu_pane

0x4822,	// (0x0002378d) scroll_pane_cp25_ParamLimits

0x4822,	// (0x0002378d) scroll_pane_cp25

0x483b,	// (0x000237a6) list_double2_graphic_pane_cp2_ParamLimits

0x483b,	// (0x000237a6) list_double2_graphic_pane_cp2

0x483b,	// (0x000237a6) list_double2_large_graphic_pane_cp2_ParamLimits

0x483b,	// (0x000237a6) list_double2_large_graphic_pane_cp2

0x483b,	// (0x000237a6) list_double2_pane_cp2_ParamLimits

0x483b,	// (0x000237a6) list_double2_pane_cp2

0x483b,	// (0x000237a6) list_double_graphic_pane_cp2_ParamLimits

0x483b,	// (0x000237a6) list_double_graphic_pane_cp2

0x483b,	// (0x000237a6) list_double_large_graphic_pane_cp2_ParamLimits

0x483b,	// (0x000237a6) list_double_large_graphic_pane_cp2

0x483b,	// (0x000237a6) list_double_number_pane_cp2_ParamLimits

0x483b,	// (0x000237a6) list_double_number_pane_cp2

0x483b,	// (0x000237a6) list_double_pane_cp2_ParamLimits

0x483b,	// (0x000237a6) list_double_pane_cp2

0xd561,	// (0x0002c4cc) list_single_2graphic_pane_cp2_ParamLimits

0xd561,	// (0x0002c4cc) list_single_2graphic_pane_cp2

0xd561,	// (0x0002c4cc) list_single_graphic_heading_pane_cp2_ParamLimits

0xd561,	// (0x0002c4cc) list_single_graphic_heading_pane_cp2

0xd561,	// (0x0002c4cc) list_single_graphic_pane_cp2_ParamLimits

0xd561,	// (0x0002c4cc) list_single_graphic_pane_cp2

0xd561,	// (0x0002c4cc) list_single_heading_pane_cp2_ParamLimits

0xd561,	// (0x0002c4cc) list_single_heading_pane_cp2

0x4878,	// (0x000237e3) list_single_large_graphic_pane_cp2_ParamLimits

0x4878,	// (0x000237e3) list_single_large_graphic_pane_cp2

0xd561,	// (0x0002c4cc) list_single_number_heading_pane_cp2_ParamLimits

0xd561,	// (0x0002c4cc) list_single_number_heading_pane_cp2

0xd561,	// (0x0002c4cc) list_single_number_pane_cp2_ParamLimits

0xd561,	// (0x0002c4cc) list_single_number_pane_cp2

0xd561,	// (0x0002c4cc) list_single_pane_cp2_ParamLimits

0xd561,	// (0x0002c4cc) list_single_pane_cp2

0x48f4,	// (0x0002385f) bg_popup_sub_pane_cp22

0x1b63,	// (0x00020ace) popup_side_volume_key_window_g1

0x1b8d,	// (0x00020af8) popup_side_volume_key_window_t1

0x1ba9,	// (0x00020b14) volume_small_pane_cp1

0x3b90,	// (0x00022afb) bg_popup_sub_pane_cp24_ParamLimits

0x3b90,	// (0x00022afb) bg_popup_sub_pane_cp24

0x490a,	// (0x00023875) fep_china_uni_candidate_pane_ParamLimits

0x490a,	// (0x00023875) fep_china_uni_candidate_pane

0x491e,	// (0x00023889) fep_china_uni_entry_pane

0x492e,	// (0x00023899) popup_fep_china_uni_window_g1

0x494a,	// (0x000238b5) fep_china_uni_entry_pane_g1

0x4952,	// (0x000238bd) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0002e68d) fep_china_uni_entry_pane_g

0x495a,	// (0x000238c5) fep_entry_item_pane

0x4964,	// (0x000238cf) fep_candidate_item_pane

0x496c,	// (0x000238d7) fep_china_uni_candidate_pane_g1

0x4974,	// (0x000238df) fep_china_uni_candidate_pane_g2

0x497c,	// (0x000238e7) fep_china_uni_candidate_pane_g3

0x4984,	// (0x000238ef) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0002e692) fep_china_uni_candidate_pane_g

0x382b,	// (0x00022796) fep_entry_item_pane_g1

0x498c,	// (0x000238f7) fep_entry_item_pane_t1_ParamLimits

0x498c,	// (0x000238f7) fep_entry_item_pane_t1

0x49a2,	// (0x0002390d) fep_candidate_item_pane_t1_ParamLimits

0x49a2,	// (0x0002390d) fep_candidate_item_pane_t1

0x49b7,	// (0x00023922) fep_candidate_item_pane_t2_ParamLimits

0x49b7,	// (0x00023922) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0002e69b) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0002e69b) fep_candidate_item_pane_t

0x3915,	// (0x00022880) list_highlight_pane_cp31_ParamLimits

0x3915,	// (0x00022880) list_highlight_pane_cp31

0x49c9,	// (0x00023934) level_1_signal_lsc

0x49d2,	// (0x0002393d) level_2_signal_lsc

0x49db,	// (0x00023946) level_3_signal_lsc

0x49e4,	// (0x0002394f) level_4_signal_lsc

0x49ed,	// (0x00023958) level_5_signal_lsc

0x49f6,	// (0x00023961) level_6_signal_lsc

0x49ff,	// (0x0002396a) level_7_signal_lsc

0x49ff,	// (0x0002396a) level_1_battery_lsc

0x4a08,	// (0x00023973) level_2_battery_lsc

0x4a11,	// (0x0002397c) level_3_battery_lsc

0x4a1a,	// (0x00023985) level_4_battery_lsc

0x4a23,	// (0x0002398e) level_5_battery_lsc

0x4a2c,	// (0x00023997) level_6_battery_lsc

0x49c9,	// (0x00023934) level_7_battery_lsc

0x4a35,	// (0x000239a0) scroll_handle_focus_pane_g1

0x4a3e,	// (0x000239a9) scroll_handle_focus_pane_g2

0x4a47,	// (0x000239b2) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0002e6a0) scroll_handle_focus_pane_g

0xbce5,	// (0x0002ac50) list_single_2graphic_pane_g1_ParamLimits

0xbce5,	// (0x0002ac50) list_single_2graphic_pane_g1

0xb7ce,	// (0x0002a739) list_single_2graphic_pane_g2_ParamLimits

0xb7ce,	// (0x0002a739) list_single_2graphic_pane_g2

0x0b09,	// (0x0001fa74) list_single_2graphic_pane_g3_ParamLimits

0x0b09,	// (0x0001fa74) list_single_2graphic_pane_g3

0xbcf1,	// (0x0002ac5c) list_single_2graphic_pane_g4_ParamLimits

0xbcf1,	// (0x0002ac5c) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0002e6a7) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0002e6a7) list_single_2graphic_pane_g

0xbcfd,	// (0x0002ac68) list_single_2graphic_pane_t1_ParamLimits

0xbcfd,	// (0x0002ac68) list_single_2graphic_pane_t1

0xbd2b,	// (0x0002ac96) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbd2b,	// (0x0002ac96) list_double2_graphic_large_graphic_pane_g1

0xb839,	// (0x0002a7a4) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb839,	// (0x0002a7a4) list_double2_graphic_large_graphic_pane_g2

0xb84a,	// (0x0002a7b5) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb84a,	// (0x0002a7b5) list_double2_graphic_large_graphic_pane_g3

0xbd3d,	// (0x0002aca8) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbd3d,	// (0x0002aca8) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0002e6b0) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0002e6b0) list_double2_graphic_large_graphic_pane_g

0xbd49,	// (0x0002acb4) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbd49,	// (0x0002acb4) list_double2_graphic_large_graphic_pane_t1

0xbd5f,	// (0x0002acca) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbd5f,	// (0x0002acca) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0002e6b9) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0002e6b9) list_double2_graphic_large_graphic_pane_t

0x4b8f,	// (0x00023afa) popup_fast_swap_window_ParamLimits

0x4b8f,	// (0x00023afa) popup_fast_swap_window

0x4bab,	// (0x00023b16) popup_side_volume_key_window

0x4bc7,	// (0x00023b32) stacon_top_pane

0x4bd1,	// (0x00023b3c) status_pane_ParamLimits

0x4bd1,	// (0x00023b3c) status_pane

0xd5ee,	// (0x0002c559) status_small_pane

0x3835,	// (0x000227a0) control_pane

0x3835,	// (0x000227a0) stacon_bottom_pane

0x4167,	// (0x000230d2) scroll_pane_cp121

0x415e,	// (0x000230c9) set_content_pane

0x4a50,	// (0x000239bb) bg_active_tab_pane_g1_cp1

0x4a59,	// (0x000239c4) bg_active_tab_pane_g2_cp1

0x4a62,	// (0x000239cd) bg_active_tab_pane_g3_cp1

0x4a50,	// (0x000239bb) bg_passive_tab_pane_g1_cp1

0x4a59,	// (0x000239c4) bg_passive_tab_pane_g2_cp1

0x4a62,	// (0x000239cd) bg_passive_tab_pane_g3_cp1

0x4a6b,	// (0x000239d6) bg_active_tab_pane_g1_cp2

0x4a59,	// (0x000239c4) bg_active_tab_pane_g2_cp2

0x4a74,	// (0x000239df) bg_active_tab_pane_g3_cp2

0x4a6b,	// (0x000239d6) bg_passive_tab_pane_g1_cp2

0x4a59,	// (0x000239c4) bg_passive_tab_pane_g2_cp2

0x4a74,	// (0x000239df) bg_passive_tab_pane_g3_cp2

0x4a7d,	// (0x000239e8) bg_active_tab_pane_g1_cp3

0x4a59,	// (0x000239c4) bg_active_tab_pane_g2_cp3

0x4a86,	// (0x000239f1) bg_active_tab_pane_g3_cp3

0x4a7d,	// (0x000239e8) bg_passive_tab_pane_g1_cp3

0x4a59,	// (0x000239c4) bg_passive_tab_pane_g2_cp3

0x4a86,	// (0x000239f1) bg_passive_tab_pane_g3_cp3

0x4a8f,	// (0x000239fa) bg_active_tab_pane_g1_cp4

0x4a59,	// (0x000239c4) bg_active_tab_pane_g2_cp4

0x4a9a,	// (0x00023a05) bg_active_tab_pane_g3_cp4

0x4a8f,	// (0x000239fa) bg_passive_tab_pane_g1_cp4

0x4a59,	// (0x000239c4) bg_passive_tab_pane_g2_cp4

0x4a9a,	// (0x00023a05) bg_passive_tab_pane_g3_cp4

0x4ae3,	// (0x00023a4e) bg_active_tab_pane_g1_cp5

0x4a59,	// (0x000239c4) bg_active_tab_pane_g2_cp5

0x4aec,	// (0x00023a57) bg_active_tab_pane_g3_cp5

0x4ae3,	// (0x00023a4e) bg_passive_tab_pane_g1_cp5

0x4a59,	// (0x000239c4) bg_passive_tab_pane_g2_cp5

0x4aec,	// (0x00023a57) bg_passive_tab_pane_g3_cp5

0x719f,	// (0x0002610a) list_set_graphic_pane_ParamLimits

0x719f,	// (0x0002610a) list_set_graphic_pane

0x3835,	// (0x000227a0) bg_set_opt_pane_cp4

0x4b12,	// (0x00023a7d) list_set_graphic_pane_g1_ParamLimits

0x4b12,	// (0x00023a7d) list_set_graphic_pane_g1

0x4b1e,	// (0x00023a89) list_set_graphic_pane_g2_ParamLimits

0x4b1e,	// (0x00023a89) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0002e6be) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0002e6be) list_set_graphic_pane_g

0x0009,

0xfab5,	// (0x0002ea20) volume_small_pane_cp_g

0x4b42,	// (0x00023aad) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4b42,	// (0x00023aad) list_double2_large_graphic_pane_g1_cp2

0x4b4e,	// (0x00023ab9) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4b4e,	// (0x00023ab9) list_double2_large_graphic_pane_g2_cp2

0x4b5f,	// (0x00023aca) list_double2_large_graphic_pane_g3_cp2

0x4b67,	// (0x00023ad2) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4b67,	// (0x00023ad2) list_double2_large_graphic_pane_t1_cp2

0x4b7d,	// (0x00023ae8) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4b7d,	// (0x00023ae8) list_double2_large_graphic_pane_t2_cp2

0x6755,	// (0x000256c0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6755,	// (0x000256c0) list_double_large_graphic_pane_g1_cp2

0x6766,	// (0x000256d1) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6766,	// (0x000256d1) list_double_large_graphic_pane_g2_cp2

0x4cf8,	// (0x00023c63) list_double_large_graphic_pane_g3_cp2

0x6777,	// (0x000256e2) list_double_large_graphic_pane_g4_cp

0x677f,	// (0x000256ea) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x677f,	// (0x000256ea) list_double_large_graphic_pane_t1_cp2

0x6796,	// (0x00025701) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6796,	// (0x00025701) list_double_large_graphic_pane_t2_cp2

0x4bea,	// (0x00023b55) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4bea,	// (0x00023b55) list_double2_graphic_pane_g1_cp2

0x4bf8,	// (0x00023b63) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4bf8,	// (0x00023b63) list_double2_graphic_pane_g2_cp2

0x4c09,	// (0x00023b74) list_double2_graphic_pane_g3_cp2

0x4c13,	// (0x00023b7e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4c13,	// (0x00023b7e) list_double2_graphic_pane_t1_cp2

0x4c29,	// (0x00023b94) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4c29,	// (0x00023b94) list_double2_graphic_pane_t2_cp2

0x4c3b,	// (0x00023ba6) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4c3b,	// (0x00023ba6) list_single_number_heading_pane_g1_cp2

0x4c47,	// (0x00023bb2) list_single_number_heading_pane_g2_cp2

0x4c4f,	// (0x00023bba) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4c4f,	// (0x00023bba) list_single_number_heading_pane_t1_cp2

0x4c65,	// (0x00023bd0) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4c65,	// (0x00023bd0) list_single_number_heading_pane_t2_cp2

0x4c77,	// (0x00023be2) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4c77,	// (0x00023be2) list_single_number_heading_pane_t3_cp2

0x4c3b,	// (0x00023ba6) list_single_heading_pane_g1_cp2_ParamLimits

0x4c3b,	// (0x00023ba6) list_single_heading_pane_g1_cp2

0x4c47,	// (0x00023bb2) list_single_heading_pane_g2_cp2

0x4c4f,	// (0x00023bba) list_single_heading_pane_t1_cp2_ParamLimits

0x4c4f,	// (0x00023bba) list_single_heading_pane_t1_cp2

0x655d,	// (0x000254c8) list_single_heading_pane_t2_cp2_ParamLimits

0x655d,	// (0x000254c8) list_single_heading_pane_t2_cp2

0x64a5,	// (0x00025410) list_double_graphic_pane_g1_cp2_ParamLimits

0x64a5,	// (0x00025410) list_double_graphic_pane_g1_cp2

0x64b1,	// (0x0002541c) list_double_graphic_pane_g2_cp2_ParamLimits

0x64b1,	// (0x0002541c) list_double_graphic_pane_g2_cp2

0x64c0,	// (0x0002542b) list_double_graphic_pane_g3_cp2

0x64c8,	// (0x00025433) list_double_graphic_pane_t1_cp2_ParamLimits

0x64c8,	// (0x00025433) list_double_graphic_pane_t1_cp2

0x64de,	// (0x00025449) list_double_graphic_pane_t2_cp2_ParamLimits

0x64de,	// (0x00025449) list_double_graphic_pane_t2_cp2

0x4cec,	// (0x00023c57) list_double_number_pane_g1_cp2_ParamLimits

0x4cec,	// (0x00023c57) list_double_number_pane_g1_cp2

0x4cf8,	// (0x00023c63) list_double_number_pane_g2_cp2

0x6469,	// (0x000253d4) list_double_number_pane_t1_cp2_ParamLimits

0x6469,	// (0x000253d4) list_double_number_pane_t1_cp2

0x647d,	// (0x000253e8) list_double_number_pane_t2_cp2_ParamLimits

0x647d,	// (0x000253e8) list_double_number_pane_t2_cp2

0x6493,	// (0x000253fe) list_double_number_pane_t3_cp2_ParamLimits

0x6493,	// (0x000253fe) list_double_number_pane_t3_cp2

0x6352,	// (0x000252bd) list_single_graphic_pane_g1_cp2_ParamLimits

0x6352,	// (0x000252bd) list_single_graphic_pane_g1_cp2

0x4d50,	// (0x00023cbb) list_single_graphic_pane_g2_cp2_ParamLimits

0x4d50,	// (0x00023cbb) list_single_graphic_pane_g2_cp2

0x4d5c,	// (0x00023cc7) list_single_graphic_pane_g3_cp2

0x6328,	// (0x00025293) list_single_graphic_pane_t1_cp2_ParamLimits

0x6328,	// (0x00025293) list_single_graphic_pane_t1_cp2

0x4d50,	// (0x00023cbb) list_single_number_pane_g1_cp2_ParamLimits

0x4d50,	// (0x00023cbb) list_single_number_pane_g1_cp2

0x4d5c,	// (0x00023cc7) list_single_number_pane_g2_cp2

0x6328,	// (0x00025293) list_single_number_pane_t1_cp2_ParamLimits

0x6328,	// (0x00025293) list_single_number_pane_t1_cp2

0x633e,	// (0x000252a9) list_single_number_pane_t2_cp2_ParamLimits

0x633e,	// (0x000252a9) list_single_number_pane_t2_cp2

0x4b4e,	// (0x00023ab9) list_double2_pane_g1_cp2_ParamLimits

0x4b4e,	// (0x00023ab9) list_double2_pane_g1_cp2

0x4b5f,	// (0x00023aca) list_double2_pane_g2_cp2

0x4cc4,	// (0x00023c2f) list_double2_pane_t1_cp2_ParamLimits

0x4cc4,	// (0x00023c2f) list_double2_pane_t1_cp2

0x4cda,	// (0x00023c45) list_double2_pane_t2_cp2_ParamLimits

0x4cda,	// (0x00023c45) list_double2_pane_t2_cp2

0x4cec,	// (0x00023c57) list_double_pane_g1_cp2_ParamLimits

0x4cec,	// (0x00023c57) list_double_pane_g1_cp2

0x4cf8,	// (0x00023c63) list_double_pane_g2_cp2

0x4d00,	// (0x00023c6b) list_double_pane_t1_cp2_ParamLimits

0x4d00,	// (0x00023c6b) list_double_pane_t1_cp2

0x4d16,	// (0x00023c81) list_double_pane_t2_cp2_ParamLimits

0x4d16,	// (0x00023c81) list_double_pane_t2_cp2

0x4d40,	// (0x00023cab) list_single_pane_cp2_g3

0x4d50,	// (0x00023cbb) list_single_pane_g1_cp2_ParamLimits

0x4d50,	// (0x00023cbb) list_single_pane_g1_cp2

0x4d5c,	// (0x00023cc7) list_single_pane_g2_cp2

0x4d64,	// (0x00023ccf) list_single_pane_t1_cp2_ParamLimits

0x4d64,	// (0x00023ccf) list_single_pane_t1_cp2

0x4d7c,	// (0x00023ce7) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4d7c,	// (0x00023ce7) list_single_large_graphic_pane_g1_cp2

0x4d88,	// (0x00023cf3) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4d88,	// (0x00023cf3) list_single_large_graphic_pane_g2_cp2

0x4d94,	// (0x00023cff) list_single_large_graphic_pane_g3_cp2

0x4d9c,	// (0x00023d07) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4d9c,	// (0x00023d07) list_single_large_graphic_pane_g4_cp1

0x4db6,	// (0x00023d21) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4db6,	// (0x00023d21) list_single_large_graphic_pane_t1_cp2

0x62f4,	// (0x0002525f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x62f4,	// (0x0002525f) list_single_graphic_heading_pane_g1_cp2

0x62c1,	// (0x0002522c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x62c1,	// (0x0002522c) list_single_graphic_heading_pane_g4_cp2

0x4d5c,	// (0x00023cc7) list_single_graphic_heading_pane_g5_cp2

0x6300,	// (0x0002526b) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6300,	// (0x0002526b) list_single_graphic_heading_pane_t1_cp2

0x6316,	// (0x00025281) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x6316,	// (0x00025281) list_single_graphic_heading_pane_t2_cp2

0x62b5,	// (0x00025220) list_single_2graphic_pane_g1_cp2_ParamLimits

0x62b5,	// (0x00025220) list_single_2graphic_pane_g1_cp2

0x62c1,	// (0x0002522c) list_single_2graphic_pane_g2_cp2_ParamLimits

0x62c1,	// (0x0002522c) list_single_2graphic_pane_g2_cp2

0x4d5c,	// (0x00023cc7) list_single_2graphic_pane_g3_cp2

0x62d2,	// (0x0002523d) list_single_2graphic_pane_g4_cp2_ParamLimits

0x62d2,	// (0x0002523d) list_single_2graphic_pane_g4_cp2

0x62de,	// (0x00025249) list_single_2graphic_pane_t1_cp2_ParamLimits

0x62de,	// (0x00025249) list_single_2graphic_pane_t1_cp2

0x382b,	// (0x00022796) list_highlight_pane_g10_cp1

0x5e8d,	// (0x00024df8) list_highlight_pane_g1_cp1

0x5e95,	// (0x00024e00) list_highlight_pane_g2_cp1

0x5e9d,	// (0x00024e08) list_highlight_pane_g3_cp1

0x5ea5,	// (0x00024e10) list_highlight_pane_g4_cp1

0x5ead,	// (0x00024e18) list_highlight_pane_g5_cp1

0x5eb5,	// (0x00024e20) list_highlight_pane_g6_cp1

0x5ebd,	// (0x00024e28) list_highlight_pane_g7_cp1

0x5ec5,	// (0x00024e30) list_highlight_pane_g8_cp1

0x5ecd,	// (0x00024e38) list_highlight_pane_g9_cp1

0xdc6c,	// (0x0002cbd7) form_field_slider_pane_t3

0xdc7a,	// (0x0002cbe5) form_field_slider_pane_t4

0x5dc9,	// (0x00024d34) slider_form_pane_ParamLimits

0x5dc9,	// (0x00024d34) slider_form_pane

0x3835,	// (0x000227a0) control_abbreviations

0x3835,	// (0x000227a0) control_conventions

0x3835,	// (0x000227a0) control_definitions

0x3835,	// (0x000227a0) format_table_attribute

0x65a7,	// (0x00025512) bg_popup_preview_window_pane_g9

0x3835,	// (0x000227a0) format_table_data2

0x3835,	// (0x000227a0) format_table_data3

0x3835,	// (0x000227a0) format_table_data_example

0x0008,

0x3835,	// (0x000227a0) intro_purpose

0xf8e3,	// (0x0002e84e) bg_popup_preview_window_pane_g

0x3835,	// (0x000227a0) texts_category

0x3835,	// (0x000227a0) texts_graphics

0x4dcc,	// (0x00023d37) text_digital

0x4ddb,	// (0x00023d46) text_primary

0x4dea,	// (0x00023d55) text_primary_small

0x4df9,	// (0x00023d64) text_secondary

0x4e08,	// (0x00023d73) text_title

0x6ce1,	// (0x00025c4c) bg_passive_tab_pane_g1_cp3_srt

0x4a59,	// (0x000239c4) bg_passive_tab_pane_g2_cp3_srt

0x6cea,	// (0x00025c55) bg_passive_tab_pane_g3_cp3_srt

0x3b90,	// (0x00022afb) bg_active_tab_pane_cp3_srt_ParamLimits

0x3b90,	// (0x00022afb) bg_active_tab_pane_cp3_srt

0x6cf3,	// (0x00025c5e) tabs_4_active_pane_srt_g1

0xdfad,	// (0x0002cf18) tabs_4_active_pane_srt_t1_ParamLimits

0xdfad,	// (0x0002cf18) tabs_4_active_pane_srt_t1

0x6ce1,	// (0x00025c4c) bg_active_tab_pane_g1_cp3_copy1

0x4a59,	// (0x000239c4) bg_active_tab_pane_g2_cp3_copy1

0x6cea,	// (0x00025c55) bg_active_tab_pane_g3_cp3_copy1

0x3915,	// (0x00022880) tabs_2_long_active_pane_srt_ParamLimits

0x3915,	// (0x00022880) tabs_2_long_active_pane_srt

0x3915,	// (0x00022880) tabs_2_long_passive_pane_srt_ParamLimits

0x3915,	// (0x00022880) tabs_2_long_passive_pane_srt

0x5161,	// (0x000240cc) bg_passive_tab_pane_cp4_srt_ParamLimits

0x5161,	// (0x000240cc) bg_passive_tab_pane_cp4_srt

0x69d5,	// (0x00025940) bg_passive_tab_pane_g1_cp4_srt

0x4a59,	// (0x000239c4) bg_passive_tab_pane_g2_cp4_srt

0x69de,	// (0x00025949) bg_passive_tab_pane_g3_cp4_srt

0x3915,	// (0x00022880) bg_active_tab_pane_cp4_srt_ParamLimits

0x3915,	// (0x00022880) bg_active_tab_pane_cp4_srt

0xddd7,	// (0x0002cd42) tabs_2_long_active_pane_srt_t1_ParamLimits

0xddd7,	// (0x0002cd42) tabs_2_long_active_pane_srt_t1

0x69d5,	// (0x00025940) bg_active_tab_pane_g1_cp4_srt

0x4a59,	// (0x000239c4) bg_active_tab_pane_g2_cp4_srt

0x69de,	// (0x00025949) bg_active_tab_pane_g3_cp4_srt

0x3b90,	// (0x00022afb) tabs_3_long_active_pane_srt_ParamLimits

0x3b90,	// (0x00022afb) tabs_3_long_active_pane_srt

0x3b90,	// (0x00022afb) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3b90,	// (0x00022afb) tabs_3_long_passive_pane_cp_srt

0x3b90,	// (0x00022afb) tabs_3_long_passive_pane_srt_ParamLimits

0x3b90,	// (0x00022afb) tabs_3_long_passive_pane_srt

0x5161,	// (0x000240cc) bg_passive_tab_pane_cp5_srt_ParamLimits

0x5161,	// (0x000240cc) bg_passive_tab_pane_cp5_srt

0x4ae3,	// (0x00023a4e) bg_passive_tab_pane_g1_cp5_srt

0x4a59,	// (0x000239c4) bg_passive_tab_pane_g2_cp5_srt

0x4aec,	// (0x00023a57) bg_passive_tab_pane_g3_cp5_srt

0x3915,	// (0x00022880) bg_active_tab_pane_cp5_srt_ParamLimits

0x3915,	// (0x00022880) bg_active_tab_pane_cp5_srt

0xddc1,	// (0x0002cd2c) tabs_3_long_active_pane_srt_t1_ParamLimits

0xddc1,	// (0x0002cd2c) tabs_3_long_active_pane_srt_t1

0x4ae3,	// (0x00023a4e) bg_active_tab_pane_g1_cp5_srt

0x4a59,	// (0x000239c4) bg_active_tab_pane_g2_cp5_srt

0x4aec,	// (0x00023a57) bg_active_tab_pane_g3_cp5_srt

0x69b5,	// (0x00025920) navi_text_pane_srt_t1

0x69ad,	// (0x00025918) navi_icon_pane_srt_g1

0x4fdd,	// (0x00023f48) midp_editing_number_pane_srt

0x4e17,	// (0x00023d82) midp_ticker_pane_srt

0x4fe5,	// (0x00023f50) midp_ticker_pane_srt_g1

0x4fed,	// (0x00023f58) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0002e6dd) midp_ticker_pane_srt_g

0x4ff5,	// (0x00023f60) midp_ticker_pane_srt_t1

0x699e,	// (0x00025909) midp_editing_number_pane_t1_copy1

0xd5f9,	// (0x0002c564) listscroll_midp_pane

0xd5f9,	// (0x0002c564) midp_form_pane

0x4e8f,	// (0x00023dfa) midp_info_popup_window_ParamLimits

0x4e8f,	// (0x00023dfa) midp_info_popup_window

0x422d,	// (0x00023198) bg_popup_sub_pane_cp50_ParamLimits

0x422d,	// (0x00023198) bg_popup_sub_pane_cp50

0x5ac5,	// (0x00024a30) listscroll_midp_info_pane_ParamLimits

0x5ac5,	// (0x00024a30) listscroll_midp_info_pane

0x5aa5,	// (0x00024a10) listscroll_form_midp_pane_ParamLimits

0x5aa5,	// (0x00024a10) listscroll_form_midp_pane

0x5ab1,	// (0x00024a1c) scroll_bar_cp050

0x5aa5,	// (0x00024a10) list_midp_pane

0x7730,	// (0x0002669b) signal_pane_g2_cp

0x59bf,	// (0x0002492a) listscroll_midp_info_pane_t1_ParamLimits

0x59bf,	// (0x0002492a) listscroll_midp_info_pane_t1

0x59d7,	// (0x00024942) listscroll_midp_info_pane_t2_ParamLimits

0x59d7,	// (0x00024942) listscroll_midp_info_pane_t2

0x5a15,	// (0x00024980) listscroll_midp_info_pane_t3_ParamLimits

0x5a15,	// (0x00024980) listscroll_midp_info_pane_t3

0x5a4f,	// (0x000249ba) listscroll_midp_info_pane_t4_ParamLimits

0x5a4f,	// (0x000249ba) listscroll_midp_info_pane_t4

0x0003,

0xf81e,	// (0x0002e789) listscroll_midp_info_pane_t_ParamLimits

0xf81e,	// (0x0002e789) listscroll_midp_info_pane_t

0x42f1,	// (0x0002325c) scroll_pane_cp21

0x595d,	// (0x000248c8) form_midp_field_choice_group_pane

0x5966,	// (0x000248d1) form_midp_field_text_pane

0x59a5,	// (0x00024910) form_midp_field_time_pane

0x59ad,	// (0x00024918) form_midp_gauge_slider_pane

0x59b6,	// (0x00024921) form_midp_gauge_wait_pane

0x3835,	// (0x000227a0) form_midp_image_pane

0xbd71,	// (0x0002acdc) list_single_midp_pane_ParamLimits

0xbd71,	// (0x0002acdc) list_single_midp_pane

0xdc4b,	// (0x0002cbb6) form_midp_field_text_pane_t1

0x56df,	// (0x0002464a) input_focus_pane_cp050

0x594c,	// (0x000248b7) list_midp_form_text_pane

0x58e7,	// (0x00024852) form_midp_field_choice_group_pane_t1

0x58f5,	// (0x00024860) input_focus_pane_cp051

0x5909,	// (0x00024874) list_midp_choice_pane

0x3835,	// (0x000227a0) status_idle_pane

0x58cb,	// (0x00024836) form_midp_field_time_pane_t1

0x382b,	// (0x00022796) wait_anim_pane_g2_copy1

0x58d9,	// (0x00024844) form_midp_field_time_pane_t2

0x0001,

0x4f3d,	// (0x00023ea8) aid_navinavi_width_2_pane

0xf819,	// (0x0002e784) form_midp_field_time_pane_t

0x3835,	// (0x000227a0) input_focus_pane_cp052

0x3835,	// (0x000227a0) bg_input_focus_pane_cp040

0x588b,	// (0x000247f6) form_midp_gauge_slider_pane_t1

0x5899,	// (0x00024804) form_midp_gauge_slider_pane_t2

0xdc2f,	// (0x0002cb9a) form_midp_gauge_slider_pane_t3

0xdc3d,	// (0x0002cba8) form_midp_gauge_slider_pane_t4

0x0003,

0xf810,	// (0x0002e77b) form_midp_gauge_slider_pane_t

0x58c3,	// (0x0002482e) form_midp_slider_pane

0x3915,	// (0x00022880) bg_input_focus_pane_cp041_ParamLimits

0x3915,	// (0x00022880) bg_input_focus_pane_cp041

0x5858,	// (0x000247c3) form_midp_gauge_wait_pane_t1_ParamLimits

0x5858,	// (0x000247c3) form_midp_gauge_wait_pane_t1

0x586a,	// (0x000247d5) form_midp_gauge_wait_pane_t2_ParamLimits

0x586a,	// (0x000247d5) form_midp_gauge_wait_pane_t2

0x0001,

0xf80b,	// (0x0002e776) form_midp_gauge_wait_pane_t_ParamLimits

0xf80b,	// (0x0002e776) form_midp_gauge_wait_pane_t

0x587c,	// (0x000247e7) form_midp_wait_pane_ParamLimits

0x587c,	// (0x000247e7) form_midp_wait_pane

0x5816,	// (0x00024781) form_midp_image_pane_g1

0x581f,	// (0x0002478a) form_midp_image_pane_t1

0x582e,	// (0x00024799) form_midp_image_pane_t2

0x5849,	// (0x000247b4) form_midp_image_pane_t3

0x0002,

0xf804,	// (0x0002e76f) form_midp_image_pane_t

0x580d,	// (0x00024778) list_single_midp_pane_g1

0x0c0f,	// (0x0001fb7a) list_single_midp_pane_t1

0xdc1b,	// (0x0002cb86) list_midp_form_item_pane_ParamLimits

0xdc1b,	// (0x0002cb86) list_midp_form_item_pane

0x4ee5,	// (0x00023e50) list_midp_form_item_pane_t1

0x4ef4,	// (0x00023e5f) midp_ticker_pane_g1

0x4f00,	// (0x00023e6b) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0002e6c3) midp_ticker_pane_g

0x4f0c,	// (0x00023e77) midp_ticker_pane_t1

0x6bef,	// (0x00025b5a) midp_editing_number_pane_t1

0x6bcd,	// (0x00025b38) midp_editing_number_pane

0x6bdc,	// (0x00025b47) midp_ticker_pane

0x698e,	// (0x000258f9) ai_message_heading_pane

0x3835,	// (0x000227a0) bg_popup_window_pane_cp14

0x6996,	// (0x00025901) listscroll_ai_message_pane

0x6918,	// (0x00025883) ai_message_heading_pane_g1_ParamLimits

0x6918,	// (0x00025883) ai_message_heading_pane_g1

0x6924,	// (0x0002588f) ai_message_heading_pane_g2_ParamLimits

0x6924,	// (0x0002588f) ai_message_heading_pane_g2

0x6930,	// (0x0002589b) ai_message_heading_pane_g3_ParamLimits

0x6930,	// (0x0002589b) ai_message_heading_pane_g3

0x693c,	// (0x000258a7) ai_message_heading_pane_g4_ParamLimits

0x693c,	// (0x000258a7) ai_message_heading_pane_g4

0x0003,

0xf945,	// (0x0002e8b0) ai_message_heading_pane_g_ParamLimits

0xf945,	// (0x0002e8b0) ai_message_heading_pane_g

0x6948,	// (0x000258b3) ai_message_heading_pane_t1_ParamLimits

0x6948,	// (0x000258b3) ai_message_heading_pane_t1

0x6962,	// (0x000258cd) ai_message_heading_pane_t2_ParamLimits

0x6962,	// (0x000258cd) ai_message_heading_pane_t2

0x0001,

0xf94e,	// (0x0002e8b9) ai_message_heading_pane_t_ParamLimits

0xf94e,	// (0x0002e8b9) ai_message_heading_pane_t

0x6974,	// (0x000258df) bg_popup_heading_pane_cp1_ParamLimits

0x6974,	// (0x000258df) bg_popup_heading_pane_cp1

0x6906,	// (0x00025871) list_ai_message_pane_ParamLimits

0x6906,	// (0x00025871) list_ai_message_pane

0x42f1,	// (0x0002325c) scroll_pane_cp10

0x68a2,	// (0x0002580d) list_ai_message_pane_g1

0x68aa,	// (0x00025815) list_ai_message_pane_g2

0x0001,

0xf922,	// (0x0002e88d) list_ai_message_pane_g

0x68b2,	// (0x0002581d) list_ai_message_pane_t1_ParamLimits

0x68b2,	// (0x0002581d) list_ai_message_pane_t1

0x68c7,	// (0x00025832) list_ai_message_pane_t2_ParamLimits

0x68c7,	// (0x00025832) list_ai_message_pane_t2

0x68dc,	// (0x00025847) list_ai_message_pane_t3_ParamLimits

0x68dc,	// (0x00025847) list_ai_message_pane_t3

0x68f1,	// (0x0002585c) list_ai_message_pane_t4_ParamLimits

0x68f1,	// (0x0002585c) list_ai_message_pane_t4

0x0003,

0xf927,	// (0x0002e892) list_ai_message_pane_t_ParamLimits

0xf927,	// (0x0002e892) list_ai_message_pane_t

0xdda0,	// (0x0002cd0b) cell_ai_soft_ind_pane_ParamLimits

0xdda0,	// (0x0002cd0b) cell_ai_soft_ind_pane

0x4f1e,	// (0x00023e89) cell_ai_soft_ind_pane_g1_ParamLimits

0x4f1e,	// (0x00023e89) cell_ai_soft_ind_pane_g1

0x3835,	// (0x000227a0) grid_highlight_cp1

0x4f2b,	// (0x00023e96) text_secondary_cp56_ParamLimits

0x4f2b,	// (0x00023e96) text_secondary_cp56

0x6862,	// (0x000257cd) example_general_pane_ParamLimits

0x6862,	// (0x000257cd) example_general_pane

0x686e,	// (0x000257d9) example_parent_pane_g1_ParamLimits

0x686e,	// (0x000257d9) example_parent_pane_g1

0x687a,	// (0x000257e5) example_parent_pane_t1_ParamLimits

0x687a,	// (0x000257e5) example_parent_pane_t1

0xc77b,	// (0x0002b6e6) popup_preview_text_window_ParamLimits

0xc77b,	// (0x0002b6e6) popup_preview_text_window

0x4d48,	// (0x00023cb3) list_single_pane_cp2_g4

0x3c46,	// (0x00022bb1) bg_popup_preview_window_pane_ParamLimits

0x3c46,	// (0x00022bb1) bg_popup_preview_window_pane

0x65af,	// (0x0002551a) popup_preview_text_window_t1_ParamLimits

0x65af,	// (0x0002551a) popup_preview_text_window_t1

0x65cd,	// (0x00025538) popup_preview_text_window_t2_ParamLimits

0x65cd,	// (0x00025538) popup_preview_text_window_t2

0x6616,	// (0x00025581) popup_preview_text_window_t3_ParamLimits

0x6616,	// (0x00025581) popup_preview_text_window_t3

0x665b,	// (0x000255c6) popup_preview_text_window_t4_ParamLimits

0x665b,	// (0x000255c6) popup_preview_text_window_t4

0x0004,

0xf8f6,	// (0x0002e861) popup_preview_text_window_t_ParamLimits

0xf8f6,	// (0x0002e861) popup_preview_text_window_t

0x66d9,	// (0x00025644) scroll_pane_cp11

0x566b,	// (0x000245d6) bg_popup_preview_window_pane_g1

0x656f,	// (0x000254da) bg_popup_preview_window_pane_g2

0x6577,	// (0x000254e2) bg_popup_preview_window_pane_g3

0x657f,	// (0x000254ea) bg_popup_preview_window_pane_g4

0x6587,	// (0x000254f2) bg_popup_preview_window_pane_g5

0x658f,	// (0x000254fa) bg_popup_preview_window_pane_g6

0x6597,	// (0x00025502) bg_popup_preview_window_pane_g7

0x659f,	// (0x0002550a) bg_popup_preview_window_pane_g8

0x14a0,	// (0x0002040b) aid_popup_width_pane

0xc6f7,	// (0x0002b662) popup_midp_note_alarm_window_ParamLimits

0xc6f7,	// (0x0002b662) popup_midp_note_alarm_window

0x4178,	// (0x000230e3) data_form_pane_ParamLimits

0xbbd7,	// (0x0002ab42) form_field_data_pane_g1

0xbbe1,	// (0x0002ab4c) form_field_data_pane_t1_ParamLimits

0x4184,	// (0x000230ef) input_focus_pane_ParamLimits

0x08a6,	// (0x0001f811) data_form_wide_pane_ParamLimits

0x08b7,	// (0x0001f822) form_field_data_wide_pane_g1

0x08c3,	// (0x0001f82e) form_field_data_wide_pane_t1_ParamLimits

0x3ef5,	// (0x00022e60) input_focus_pane_cp6_ParamLimits

0xd44f,	// (0x0002c3ba) input_popup_find_pane_g1_ParamLimits

0xd44f,	// (0x0002c3ba) input_popup_find_pane_g1

0x1a12,	// (0x0002097d) aid_navi_side_left_pane

0x1a27,	// (0x00020992) aid_navi_side_right_pane

0x5f88,	// (0x00024ef3) bg_popup_window_pane_cp30_ParamLimits

0x5f88,	// (0x00024ef3) bg_popup_window_pane_cp30

0x6002,	// (0x00024f6d) popup_midp_note_alarm_window_g1_ParamLimits

0x6002,	// (0x00024f6d) popup_midp_note_alarm_window_g1

0x6032,	// (0x00024f9d) popup_midp_note_alarm_window_t1_ParamLimits

0x6032,	// (0x00024f9d) popup_midp_note_alarm_window_t1

0x60d3,	// (0x0002503e) popup_midp_note_alarm_window_t2_ParamLimits

0x60d3,	// (0x0002503e) popup_midp_note_alarm_window_t2

0x6181,	// (0x000250ec) popup_midp_note_alarm_window_t3_ParamLimits

0x6181,	// (0x000250ec) popup_midp_note_alarm_window_t3

0x61b3,	// (0x0002511e) popup_midp_note_alarm_window_t4_ParamLimits

0x61b3,	// (0x0002511e) popup_midp_note_alarm_window_t4

0x61d9,	// (0x00025144) popup_midp_note_alarm_window_t5_ParamLimits

0x61d9,	// (0x00025144) popup_midp_note_alarm_window_t5

0x000a,

0xf893,	// (0x0002e7fe) popup_midp_note_alarm_window_t_ParamLimits

0xf893,	// (0x0002e7fe) popup_midp_note_alarm_window_t

0x6285,	// (0x000251f0) wait_bar_pane_cp1_ParamLimits

0x6285,	// (0x000251f0) wait_bar_pane_cp1

0x3835,	// (0x000227a0) wait_anim_pane_copy1

0x3835,	// (0x000227a0) wait_border_pane_copy1

0x5c6e,	// (0x00024bd9) wait_border_pane_g1_copy1

0x08dd,	// (0x0001f848) form_field_popup_pane_g1

0xbbfb,	// (0x0002ab66) form_field_popup_pane_t1_ParamLimits

0x4184,	// (0x000230ef) input_focus_pane_cp7_ParamLimits

0x41b2,	// (0x0002311d) list_form_pane_ParamLimits

0x08fd,	// (0x0001f868) form_field_popup_wide_pane_g1

0x0905,	// (0x0001f870) form_field_popup_wide_pane_t1_ParamLimits

0x4184,	// (0x000230ef) input_focus_pane_cp8_ParamLimits

0x41be,	// (0x00023129) list_form_wide_pane_ParamLimits

0xe006,	// (0x0002cf71) aid_size_cell_graphic_pane

0xbc7a,	// (0x0002abe5) data_form_pane_t1_ParamLimits

0xbd9a,	// (0x0002ad05) data_form_wide_pane_t1_ParamLimits

0xd862,	// (0x0002c7cd) bg_status_flat_pane

0xd10e,	// (0x0002c079) title_pane_t1_ParamLimits

0x38dd,	// (0x00022848) title_pane_t2_ParamLimits

0x3903,	// (0x0002286e) title_pane_t3_ParamLimits

0xf557,	// (0x0002e4c2) title_pane_t_ParamLimits

0x4770,	// (0x000236db) level_1_signal_ParamLimits

0x4782,	// (0x000236ed) level_2_signal_ParamLimits

0x4795,	// (0x00023700) level_3_signal_ParamLimits

0x47a8,	// (0x00023713) level_4_signal_ParamLimits

0x47bb,	// (0x00023726) level_5_signal_ParamLimits

0x47ce,	// (0x00023739) level_6_signal_ParamLimits

0x47e1,	// (0x0002374c) level_7_signal_ParamLimits

0x4770,	// (0x000236db) level_1_battery_ParamLimits

0x4782,	// (0x000236ed) level_2_battery_ParamLimits

0x4795,	// (0x00023700) level_3_battery_ParamLimits

0x47a8,	// (0x00023713) level_4_battery_ParamLimits

0x47bb,	// (0x00023726) level_5_battery_ParamLimits

0x47ce,	// (0x00023739) level_6_battery_ParamLimits

0x47e1,	// (0x0002374c) level_7_battery_ParamLimits

0x5e8d,	// (0x00024df8) bg_status_flat_pane_g1

0x5e95,	// (0x00024e00) bg_status_flat_pane_g2

0x5e9d,	// (0x00024e08) bg_status_flat_pane_g3

0x5ea5,	// (0x00024e10) bg_status_flat_pane_g4

0x5ead,	// (0x00024e18) bg_status_flat_pane_g5

0x5eb5,	// (0x00024e20) bg_status_flat_pane_g6

0x5ebd,	// (0x00024e28) bg_status_flat_pane_g7

0xd19a,	// (0x0002c105) tabs_3_active_pane_t1_ParamLimits

0xd19a,	// (0x0002c105) tabs_3_passive_pane_t1_ParamLimits

0xd1ac,	// (0x0002c117) tabs_4_active_pane_t1_ParamLimits

0xd1ac,	// (0x0002c117) tabs_4_1_passive_pane_t1_ParamLimits

0xd45d,	// (0x0002c3c8) tabs_2_active_pane_t1_ParamLimits

0xd45d,	// (0x0002c3c8) tabs_2_passive_pane_t1_ParamLimits

0x3915,	// (0x00022880) bg_active_tab_pane_cp4_ParamLimits

0xd46f,	// (0x0002c3da) tabs_2_long_active_pane_t1_ParamLimits

0x5161,	// (0x000240cc) bg_passive_tab_pane_cp4_ParamLimits

0xd96e,	// (0x0002c8d9) list_single_midp_graphic_pane_t1_ParamLimits

0x3915,	// (0x00022880) bg_active_tab_pane_cp5_ParamLimits

0xd482,	// (0x0002c3ed) tabs_3_long_active_pane_t1_ParamLimits

0x5161,	// (0x000240cc) bg_passive_tab_pane_cp5_ParamLimits

0xd96e,	// (0x0002c8d9) list_single_midp_graphic_pane_t1

0xd862,	// (0x0002c7cd) bg_status_flat_pane_ParamLimits

0x52fb,	// (0x00024266) indicator_pane_cp2_ParamLimits

0x52fb,	// (0x00024266) indicator_pane_cp2

0xda1e,	// (0x0002c989) navi_pane_srt_ParamLimits

0xda1e,	// (0x0002c989) navi_pane_srt

0x544a,	// (0x000243b5) popup_clock_digital_analogue_window_cp1

0x39f2,	// (0x0002295d) indicator_pane_t1

0x4e17,	// (0x00023d82) copy_highlight_pane

0x4e17,	// (0x00023d82) cursor_graphics_pane

0x4e17,	// (0x00023d82) graphic_within_text_pane

0x4e17,	// (0x00023d82) link_highlight_pane

0x669c,	// (0x00025607) popup_preview_text_window_t5_ParamLimits

0x669c,	// (0x00025607) popup_preview_text_window_t5

0x4f45,	// (0x00023eb0) cursor_digital_pane

0x4f45,	// (0x00023eb0) cursor_primary_pane

0x4f56,	// (0x00023ec1) cursor_primary_small_pane

0x4f5e,	// (0x00023ec9) cursor_secondary_pane

0x4f66,	// (0x00023ed1) cursor_title_pane

0x4f45,	// (0x00023eb0) link_highlight_digital_pane

0x4f4d,	// (0x00023eb8) link_highlight_primary_pane

0x4f56,	// (0x00023ec1) link_highlight_primary_small_pane

0x4f5e,	// (0x00023ec9) link_highlight_secondary_pane

0x4f66,	// (0x00023ed1) link_highlight_title_pane

0x4f45,	// (0x00023eb0) copy_highlight_digital_pane

0x4f45,	// (0x00023eb0) copy_highlight_primary_pane

0x4f56,	// (0x00023ec1) copy_highlight_primary_small_pane

0x4f5e,	// (0x00023ec9) copy_highlight_secondary_pane

0x4f66,	// (0x00023ed1) copy_highlight_title_pane

0x4f5e,	// (0x00023ec9) graphic_text_digital_pane

0x5f2b,	// (0x00024e96) graphic_text_primary_pane

0x5f34,	// (0x00024e9f) graphic_text_primary_small_pane

0x4f56,	// (0x00023ec1) graphic_text_secondary_pane

0x4f45,	// (0x00023eb0) graphic_text_title_pane

0xd69e,	// (0x0002c609) cursor_primary_pane_g1

0x5f1d,	// (0x00024e88) cursor_text_primary_t1

0xdc9c,	// (0x0002cc07) cursor_primary_small_pane_g1

0x5f0f,	// (0x00024e7a) cursor_text_primary_small_t1

0xdc92,	// (0x0002cbfd) cursor_primary_small_pane_g1_copy1

0x5ef7,	// (0x00024e62) cursor_text_primary_small_t1_copy1

0x5ed5,	// (0x00024e40) cursor_text_title_t1

0xdc88,	// (0x0002cbf3) cursor_title_pane_g1

0xd69e,	// (0x0002c609) cursor_digital_pane_g1

0x4f78,	// (0x00023ee3) cursor_text_digital_t1

0x4f9d,	// (0x00023f08) link_highlight_primary_pane_g1

0x5e7e,	// (0x00024de9) link_highlight_primary_pane_t1

0x4f86,	// (0x00023ef1) link_highlight_primary_small_pane_g1

0x4f8e,	// (0x00023ef9) link_highlight_primary_small_pane_t1

0x4f9d,	// (0x00023f08) link_highlight_secondary_pane_g1

0x4fa5,	// (0x00023f10) link_highlight_secondary_pane_t1

0x5df2,	// (0x00024d5d) link_highlight_title_pane_g1

0x5dfa,	// (0x00024d65) link_highlight_title_pane_t1

0x5ddb,	// (0x00024d46) link_highlight_digital_pane_g1

0x5de3,	// (0x00024d4e) link_highlight_digital_pane_t1

0x5cb3,	// (0x00024c1e) copy_highlight_primary_pane_g1

0x5cbb,	// (0x00024c26) copy_highlight_primary_pane_t1

0x5c8d,	// (0x00024bf8) copy_highlight_primary_small_pane_g1

0x5ca4,	// (0x00024c0f) copy_highlight_primary_small_pane_t1

0x4fb4,	// (0x00023f1f) copy_highlight_secondary_pane_g1

0x4fbc,	// (0x00023f27) copy_highlight_secondary_pane_t1

0x5c8d,	// (0x00024bf8) copy_highlight_title_pane_g1

0x5c95,	// (0x00024c00) copy_highlight_title_pane_t1

0x5cb3,	// (0x00024c1e) copy_highlight_digital_pane_g1

0x6f43,	// (0x00025eae) copy_highlight_digital_pane_t1

0x6e97,	// (0x00025e02) graphic_text_primary_pane_g1

0x6f27,	// (0x00025e92) graphic_text_primary_pane_t1

0x6f35,	// (0x00025ea0) graphic_text_primary_pane_t2

0x0001,

0xf9c2,	// (0x0002e92d) graphic_text_primary_pane_t

0x6f03,	// (0x00025e6e) graphic_text_primary_small_pane_g1

0x6f0b,	// (0x00025e76) graphic_text_primary_small_pane_t1

0x6f19,	// (0x00025e84) graphic_text_primary_small_pane_t2

0x0001,

0xf9bd,	// (0x0002e928) graphic_text_primary_small_pane_t

0x6edf,	// (0x00025e4a) graphic_text_secondary_pane_g1

0x6ee7,	// (0x00025e52) graphic_text_secondary_pane_t1

0x6ef5,	// (0x00025e60) graphic_text_secondary_pane_t2

0x0001,

0xf9b8,	// (0x0002e923) graphic_text_secondary_pane_t

0x6ebb,	// (0x00025e26) graphic_text_title_pane_g1

0x6ec3,	// (0x00025e2e) graphic_text_title_pane_t1

0x6ed1,	// (0x00025e3c) graphic_text_title_pane_t2

0x0001,

0xf9b3,	// (0x0002e91e) graphic_text_title_pane_t

0x6e97,	// (0x00025e02) graphic_text_digital_pane_g1

0x6e9f,	// (0x00025e0a) graphic_text_digital_pane_t1

0x6ead,	// (0x00025e18) graphic_text_digital_pane_t2

0x0001,

0xf9ae,	// (0x0002e919) graphic_text_digital_pane_t

0x3915,	// (0x00022880) navi_icon_pane_srt_ParamLimits

0x3915,	// (0x00022880) navi_icon_pane_srt

0x3835,	// (0x000227a0) navi_midp_pane_srt

0x3835,	// (0x000227a0) navi_navi_pane_srt

0x3915,	// (0x00022880) navi_text_pane_srt_ParamLimits

0x3915,	// (0x00022880) navi_text_pane_srt

0x6e62,	// (0x00025dcd) navi_navi_icon_text_pane_srt

0x6e6a,	// (0x00025dd5) navi_navi_pane_srt_g1_ParamLimits

0x6e6a,	// (0x00025dd5) navi_navi_pane_srt_g1

0x6e7c,	// (0x00025de7) navi_navi_pane_srt_g2_ParamLimits

0x6e7c,	// (0x00025de7) navi_navi_pane_srt_g2

0x0001,

0xf9a9,	// (0x0002e914) navi_navi_pane_srt_g_ParamLimits

0xf9a9,	// (0x0002e914) navi_navi_pane_srt_g

0x6e8e,	// (0x00025df9) navi_navi_tabs_pane_srt

0x6e62,	// (0x00025dcd) navi_navi_text_pane_srt

0x6e62,	// (0x00025dcd) navi_navi_volume_pane_srt

0x6e53,	// (0x00025dbe) navi_navi_text_pane_srt_t1

0x2897,	// (0x00021802) navi_navi_volume_pane_srt_g1

0x289f,	// (0x0002180a) volume_small_pane_srt_ParamLimits

0x289f,	// (0x0002180a) volume_small_pane_srt

0x1cf2,	// (0x00020c5d) volume_small_pane_srt_g1_ParamLimits

0x1cf2,	// (0x00020c5d) volume_small_pane_srt_g1

0x1d02,	// (0x00020c6d) volume_small_pane_srt_g2_ParamLimits

0x1d02,	// (0x00020c6d) volume_small_pane_srt_g2

0x1d13,	// (0x00020c7e) volume_small_pane_srt_g3_ParamLimits

0x1d13,	// (0x00020c7e) volume_small_pane_srt_g3

0x1d24,	// (0x00020c8f) volume_small_pane_srt_g4_ParamLimits

0x1d24,	// (0x00020c8f) volume_small_pane_srt_g4

0x1d35,	// (0x00020ca0) volume_small_pane_srt_g5_ParamLimits

0x1d35,	// (0x00020ca0) volume_small_pane_srt_g5

0x1d46,	// (0x00020cb1) volume_small_pane_srt_g6_ParamLimits

0x1d46,	// (0x00020cb1) volume_small_pane_srt_g6

0x1d57,	// (0x00020cc2) volume_small_pane_srt_g7_ParamLimits

0x1d57,	// (0x00020cc2) volume_small_pane_srt_g7

0x1d68,	// (0x00020cd3) volume_small_pane_srt_g8_ParamLimits

0x1d68,	// (0x00020cd3) volume_small_pane_srt_g8

0x1d79,	// (0x00020ce4) volume_small_pane_srt_g9_ParamLimits

0x1d79,	// (0x00020ce4) volume_small_pane_srt_g9

0x1d8a,	// (0x00020cf5) volume_small_pane_srt_g10_ParamLimits

0x1d8a,	// (0x00020cf5) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0002e6c8) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0002e6c8) volume_small_pane_srt_g

0x3cef,	// (0x00022c5a) query_popup_data_pane_cp2

0x6e39,	// (0x00025da4) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6e39,	// (0x00025da4) navi_navi_icon_text_pane_srt_t1

0x5f2b,	// (0x00024e96) navi_tabs_2_long_pane_srt

0x5f2b,	// (0x00024e96) navi_tabs_2_pane_srt

0x5f2b,	// (0x00024e96) navi_tabs_3_long_pane_srt

0x5f2b,	// (0x00024e96) navi_tabs_3_pane_srt

0x5f2b,	// (0x00024e96) navi_tabs_4_pane_srt

0x2877,	// (0x000217e2) tabs_2_active_pane_srt_ParamLimits

0x2877,	// (0x000217e2) tabs_2_active_pane_srt

0x2887,	// (0x000217f2) tabs_2_passive_pane_srt_ParamLimits

0x2887,	// (0x000217f2) tabs_2_passive_pane_srt

0x56df,	// (0x0002464a) bg_passive_tab_pane_cp1_srt_ParamLimits

0x56df,	// (0x0002464a) bg_passive_tab_pane_cp1_srt

0x6e05,	// (0x00025d70) bg_passive_tab_pane_g1_cp1_srt

0x4a59,	// (0x000239c4) bg_passive_tab_pane_g2_cp1_srt

0x6e0e,	// (0x00025d79) bg_passive_tab_pane_g3_cp1_srt

0x3b90,	// (0x00022afb) bg_active_tab_pane_cp1_srt_ParamLimits

0x3b90,	// (0x00022afb) bg_active_tab_pane_cp1_srt

0x6e17,	// (0x00025d82) tabs_2_active_pane_srt_g1

0xe048,	// (0x0002cfb3) tabs_2_active_pane_srt_t1_ParamLimits

0xe048,	// (0x0002cfb3) tabs_2_active_pane_srt_t1

0x6e05,	// (0x00025d70) bg_active_tab_pane_g1_cp1_srt

0x4a59,	// (0x000239c4) bg_active_tab_pane_g2_cp1_srt

0x6e0e,	// (0x00025d79) bg_active_tab_pane_g3_cp1_srt

0x2844,	// (0x000217af) tabs_3_active_pane_srt_ParamLimits

0x2844,	// (0x000217af) tabs_3_active_pane_srt

0x2855,	// (0x000217c0) tabs_3_passive_pane_cp_srt_ParamLimits

0x2855,	// (0x000217c0) tabs_3_passive_pane_cp_srt

0x2866,	// (0x000217d1) tabs_3_passive_pane_srt_ParamLimits

0x2866,	// (0x000217d1) tabs_3_passive_pane_srt

0x56df,	// (0x0002464a) bg_passive_tab_pane_cp2_srt_ParamLimits

0x56df,	// (0x0002464a) bg_passive_tab_pane_cp2_srt

0x4fcb,	// (0x00023f36) bg_passive_tab_pane_g1_cp2_srt

0x4a59,	// (0x000239c4) bg_passive_tab_pane_g2_cp2_srt

0x4fd4,	// (0x00023f3f) bg_passive_tab_pane_g3_cp2_srt

0x3b90,	// (0x00022afb) bg_active_tab_pane_cp2_srt_ParamLimits

0x3b90,	// (0x00022afb) bg_active_tab_pane_cp2_srt

0x6deb,	// (0x00025d56) tabs_3_active_pane_srt_g1

0xe032,	// (0x0002cf9d) tabs_3_active_pane_srt_t1_ParamLimits

0xe032,	// (0x0002cf9d) tabs_3_active_pane_srt_t1

0x4fcb,	// (0x00023f36) bg_active_tab_pane_g1_cp2_srt

0x4a59,	// (0x000239c4) bg_active_tab_pane_g2_cp2_srt

0x4fd4,	// (0x00023f3f) bg_active_tab_pane_g3_cp2_srt

0x27fc,	// (0x00021767) tabs_4_active_pane_srt_ParamLimits

0x27fc,	// (0x00021767) tabs_4_active_pane_srt

0x280e,	// (0x00021779) tabs_4_passive_pane_cp2_srt_ParamLimits

0x280e,	// (0x00021779) tabs_4_passive_pane_cp2_srt

0x1ef9,	// (0x00020e64) aid_size_cell_toolbar

0x6a46,	// (0x000259b1) main_idle_act_pane_ParamLimits

0x209a,	// (0x00021005) popup_large_graphic_colour_window_ParamLimits

0xca07,	// (0x0002b972) popup_toolbar_window_ParamLimits

0xca07,	// (0x0002b972) popup_toolbar_window

0x6bfe,	// (0x00025b69) list_single_graphic_2heading_pane_ParamLimits

0x6bfe,	// (0x00025b69) list_single_graphic_2heading_pane

0x4521,	// (0x0002348c) aid_size_cell_apps_grid_lsc_pane

0x4533,	// (0x0002349e) aid_size_cell_apps_grid_prt_pane

0x5161,	// (0x000240cc) bg_wml_button_pane_cp1_ParamLimits

0x5161,	// (0x000240cc) bg_wml_button_pane_cp1

0xdc4b,	// (0x0002cbb6) form_midp_field_text_pane_t1_ParamLimits

0x56df,	// (0x0002464a) input_focus_pane_cp050_ParamLimits

0x594c,	// (0x000248b7) list_midp_form_text_pane_ParamLimits

0x58f5,	// (0x00024860) input_focus_pane_cp051_ParamLimits

0x5909,	// (0x00024874) list_midp_choice_pane_ParamLimits

0xdbe9,	// (0x0002cb54) list_single_2graphic_pane_cp3_ParamLimits

0xdbe9,	// (0x0002cb54) list_single_2graphic_pane_cp3

0xdbfc,	// (0x0002cb67) list_single_midp_graphic_pane_ParamLimits

0xdbfc,	// (0x0002cb67) list_single_midp_graphic_pane

0x0af1,	// (0x0001fa5c) list_single_graphic_2heading_pane_g1_ParamLimits

0x0af1,	// (0x0001fa5c) list_single_graphic_2heading_pane_g1

0x0afd,	// (0x0001fa68) list_single_graphic_2heading_pane_g4_ParamLimits

0x0afd,	// (0x0001fa68) list_single_graphic_2heading_pane_g4

0x0b09,	// (0x0001fa74) list_single_graphic_2heading_pane_g5_ParamLimits

0x0b09,	// (0x0001fa74) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0002e71b) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0002e71b) list_single_graphic_2heading_pane_g

0x0b15,	// (0x0001fa80) list_single_graphic_2heading_pane_t1_ParamLimits

0x0b15,	// (0x0001fa80) list_single_graphic_2heading_pane_t1

0x0b29,	// (0x0001fa94) list_single_graphic_2heading_pane_t2_ParamLimits

0x0b29,	// (0x0001fa94) list_single_graphic_2heading_pane_t2

0x0b43,	// (0x0001faae) list_single_graphic_2heading_pane_t3_ParamLimits

0x0b43,	// (0x0001faae) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0002e722) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0002e722) list_single_graphic_2heading_pane_t

0x55a9,	// (0x00024514) bg_popup_sub_pane_cp2

0x55d3,	// (0x0002453e) grid_toobar_pane

0x24ae,	// (0x00021419) cell_toolbar_pane_ParamLimits

0x24ae,	// (0x00021419) cell_toolbar_pane

0x560f,	// (0x0002457a) cell_toolbar_pane_g1_ParamLimits

0x560f,	// (0x0002457a) cell_toolbar_pane_g1

0x5623,	// (0x0002458e) cell_toolbar_pane_g2_ParamLimits

0x5623,	// (0x0002458e) cell_toolbar_pane_g2

0x0001,

0xf7be,	// (0x0002e729) cell_toolbar_pane_g_ParamLimits

0xf7be,	// (0x0002e729) cell_toolbar_pane_g

0x5645,	// (0x000245b0) grid_highlight_pane_cp2_ParamLimits

0x5645,	// (0x000245b0) grid_highlight_pane_cp2

0x565f,	// (0x000245ca) toolbar_button_pane

0x566b,	// (0x000245d6) toolbar_button_pane_g1

0x5673,	// (0x000245de) toolbar_button_pane_g2

0x567b,	// (0x000245e6) toolbar_button_pane_g3

0x5683,	// (0x000245ee) toolbar_button_pane_g4

0x568b,	// (0x000245f6) toolbar_button_pane_g5

0x5693,	// (0x000245fe) toolbar_button_pane_g6

0x569b,	// (0x00024606) toolbar_button_pane_g7

0x56a3,	// (0x0002460e) toolbar_button_pane_g8

0x56ab,	// (0x00024616) toolbar_button_pane_g9

0x0009,

0xf7c3,	// (0x0002e72e) toolbar_button_pane_g

0x24e6,	// (0x00021451) list_single_2graphic_pane_g1_cp3_ParamLimits

0x24e6,	// (0x00021451) list_single_2graphic_pane_g1_cp3

0xca5f,	// (0x0002b9ca) list_single_2graphic_pane_g2_cp3_ParamLimits

0xca5f,	// (0x0002b9ca) list_single_2graphic_pane_g2_cp3

0x2503,	// (0x0002146e) list_single_2graphic_pane_g3_cp3

0x250b,	// (0x00021476) list_single_2graphic_pane_g4_cp3_ParamLimits

0x250b,	// (0x00021476) list_single_2graphic_pane_g4_cp3

0x2517,	// (0x00021482) list_single_2graphic_pane_t1_cp3_ParamLimits

0x2517,	// (0x00021482) list_single_2graphic_pane_t1_cp3

0x583d,	// (0x000247a8) list_single_midp_graphic_pane_g2_ParamLimits

0x583d,	// (0x000247a8) list_single_midp_graphic_pane_g2

0x1f01,	// (0x00020e6c) aid_zoom_text_primary

0x0ac5,	// (0x0001fa30) aid_zoom_text_secondary

0xd6f6,	// (0x0002c661) status_small_pane_g7_ParamLimits

0xd6f6,	// (0x0002c661) status_small_pane_g7

0xd719,	// (0x0002c684) status_small_pane_t1_ParamLimits

0xd0ea,	// (0x0002c055) title_pane_g2

0x0003,

0xf54e,	// (0x0002e4b9) title_pane_g

0xd362,	// (0x0002c2cd) aid_size_cell_colour_1_pane_ParamLimits

0xd362,	// (0x0002c2cd) aid_size_cell_colour_1_pane

0xd376,	// (0x0002c2e1) aid_size_cell_colour_2_pane_ParamLimits

0xd376,	// (0x0002c2e1) aid_size_cell_colour_2_pane

0xd38a,	// (0x0002c2f5) aid_size_cell_colour_3_pane_ParamLimits

0xd38a,	// (0x0002c2f5) aid_size_cell_colour_3_pane

0xd39e,	// (0x0002c309) aid_size_cell_colour_4_pane_ParamLimits

0xd39e,	// (0x0002c309) aid_size_cell_colour_4_pane

0x194f,	// (0x000208ba) title_pane_stacon_g1_ParamLimits

0x194f,	// (0x000208ba) title_pane_stacon_g1

0x5d12,	// (0x00024c7d) popup_note_wait_window_g3_ParamLimits

0x5d12,	// (0x00024c7d) popup_note_wait_window_g3

0x5d88,	// (0x00024cf3) popup_note_wait_window_t5_ParamLimits

0x5d88,	// (0x00024cf3) popup_note_wait_window_t5

0x3835,	// (0x000227a0) main_feb_china_hwr_fs_writing_pane

0xc40f,	// (0x0002b37a) popup_feb_china_hwr_fs_window_ParamLimits

0xc40f,	// (0x0002b37a) popup_feb_china_hwr_fs_window

0xca70,	// (0x0002b9db) aid_size_cell_hwr_fs_ParamLimits

0xca70,	// (0x0002b9db) aid_size_cell_hwr_fs

0x56df,	// (0x0002464a) bg_popup_sub_pane_cp3_ParamLimits

0x56df,	// (0x0002464a) bg_popup_sub_pane_cp3

0xca85,	// (0x0002b9f0) grid_hwr_fs_pane_ParamLimits

0xca85,	// (0x0002b9f0) grid_hwr_fs_pane

0x2560,	// (0x000214cb) linegrid_hwr_fs_pane_ParamLimits

0x2560,	// (0x000214cb) linegrid_hwr_fs_pane

0xca9d,	// (0x0002ba08) cell_hwr_fs_pane_ParamLimits

0xca9d,	// (0x0002ba08) cell_hwr_fs_pane

0x56eb,	// (0x00024656) linegrid_hwr_fs_pane_g1_ParamLimits

0x56eb,	// (0x00024656) linegrid_hwr_fs_pane_g1

0xdbbd,	// (0x0002cb28) linegrid_hwr_fs_pane_g2_ParamLimits

0xdbbd,	// (0x0002cb28) linegrid_hwr_fs_pane_g2

0x5709,	// (0x00024674) linegrid_hwr_fs_pane_g3_ParamLimits

0x5709,	// (0x00024674) linegrid_hwr_fs_pane_g3

0x2592,	// (0x000214fd) linegrid_hwr_fs_pane_g4_ParamLimits

0x2592,	// (0x000214fd) linegrid_hwr_fs_pane_g4

0x25ac,	// (0x00021517) linegrid_hwr_fs_pane_g5_ParamLimits

0x25ac,	// (0x00021517) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e9,	// (0x0002e754) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e9,	// (0x0002e754) linegrid_hwr_fs_pane_g

0x5715,	// (0x00024680) cell_hwr_fs_pane_g1_ParamLimits

0x5715,	// (0x00024680) cell_hwr_fs_pane_g1

0x54e0,	// (0x0002444b) cell_hwr_fs_pane_g2_ParamLimits

0x54e0,	// (0x0002444b) cell_hwr_fs_pane_g2

0xdbcf,	// (0x0002cb3a) cell_hwr_fs_pane_g3_ParamLimits

0xdbcf,	// (0x0002cb3a) cell_hwr_fs_pane_g3

0xdbdc,	// (0x0002cb47) cell_hwr_fs_pane_g4_ParamLimits

0xdbdc,	// (0x0002cb47) cell_hwr_fs_pane_g4

0x0003,

0xf7f4,	// (0x0002e75f) cell_hwr_fs_pane_g_ParamLimits

0xf7f4,	// (0x0002e75f) cell_hwr_fs_pane_g

0xcac3,	// (0x0002ba2e) cell_hwr_fs_pane_t1

0x3835,	// (0x000227a0) grid_highlight_pane_cp6

0x3835,	// (0x000227a0) main_idle_act2_pane

0x42d8,	// (0x00023243) aid_inside_area_popup_secondary

0xdca6,	// (0x0002cc11) aid_inside_area_window_primary_ParamLimits

0xdca6,	// (0x0002cc11) aid_inside_area_window_primary

0x6f52,	// (0x00025ebd) ai2_news_ticker_pane

0x6f5a,	// (0x00025ec5) aid_size_cell_ai1_link_ParamLimits

0x6f5a,	// (0x00025ec5) aid_size_cell_ai1_link

0xe05e,	// (0x0002cfc9) popup_ai2_data_window_ParamLimits

0xe05e,	// (0x0002cfc9) popup_ai2_data_window

0x6f8a,	// (0x00025ef5) popup_ai2_link_window_ParamLimits

0x6f8a,	// (0x00025ef5) popup_ai2_link_window

0x56df,	// (0x0002464a) bg_popup_sub_pane_cp4_ParamLimits

0x56df,	// (0x0002464a) bg_popup_sub_pane_cp4

0x6f9e,	// (0x00025f09) grid_ai2_link_pane_ParamLimits

0x6f9e,	// (0x00025f09) grid_ai2_link_pane

0x6fb5,	// (0x00025f20) popup_ai2_link_window_g1_ParamLimits

0x6fb5,	// (0x00025f20) popup_ai2_link_window_g1

0x6fc1,	// (0x00025f2c) popup_ai2_link_window_g2_ParamLimits

0x6fc1,	// (0x00025f2c) popup_ai2_link_window_g2

0x0001,

0xf9c7,	// (0x0002e932) popup_ai2_link_window_g_ParamLimits

0xf9c7,	// (0x0002e932) popup_ai2_link_window_g

0x6fd0,	// (0x00025f3b) ai2_mp_button_pane

0x6fd8,	// (0x00025f43) ai2_mp_volume_pane

0x58f5,	// (0x00024860) bg_popup_sub_pane_cp5_ParamLimits

0x58f5,	// (0x00024860) bg_popup_sub_pane_cp5

0x6fe0,	// (0x00025f4b) heading_ai2_gene_pane_ParamLimits

0x6fe0,	// (0x00025f4b) heading_ai2_gene_pane

0x6fec,	// (0x00025f57) list_ai2_gene_pane_ParamLimits

0x6fec,	// (0x00025f57) list_ai2_gene_pane

0x7034,	// (0x00025f9f) cell_ai2_link_pane_ParamLimits

0x7034,	// (0x00025f9f) cell_ai2_link_pane

0x704a,	// (0x00025fb5) cell_ai2_link_pane_g1

0x3835,	// (0x000227a0) grid_highlight_pane_cp7

0x28b4,	// (0x0002181f) ai2_mp_volume_pane_g1

0x711a,	// (0x00026085) ai2_mp_volume_pane_g2

0xe088,	// (0x0002cff3) list_ai2_gene_pane_t1

0x7122,	// (0x0002608d) ai2_mp_volume_pane_g3

0x0002,

0xf9e0,	// (0x0002e94b) ai2_mp_volume_pane_g

0x28bc,	// (0x00021827) volume_small_pane_cp3

0x712a,	// (0x00026095) aid_size_cell_ai2_button

0x7132,	// (0x0002609d) grid_ai2_button_pane

0x713b,	// (0x000260a6) cell_ai2_button_pane_ParamLimits

0x713b,	// (0x000260a6) cell_ai2_button_pane

0x382b,	// (0x00022796) cell_ai2_button_pane_g1

0x3835,	// (0x000227a0) grid_highlight_pane_cp8

0x70da,	// (0x00026045) ai2_gene_pane_t1_ParamLimits

0x70da,	// (0x00026045) ai2_gene_pane_t1

0xc389,	// (0x0002b2f4) aid_height_parent_landscape

0xddee,	// (0x0002cd59) aid_height_set_list

0x6a46,	// (0x000259b1) aid_size_parent

0xe006,	// (0x0002cf71) aid_size_cell_graphic_pane_ParamLimits

0x6ffc,	// (0x00025f67) popup_ai2_data_window_g1_ParamLimits

0x6ffc,	// (0x00025f67) popup_ai2_data_window_g1

0x7008,	// (0x00025f73) ai2_news_ticker_pane_g1

0x7010,	// (0x00025f7b) ai2_news_ticker_pane_g2

0x0001,

0xf9cc,	// (0x0002e937) ai2_news_ticker_pane_g

0x7018,	// (0x00025f83) ai2_news_ticker_pane_t1

0x7026,	// (0x00025f91) ai2_news_ticker_pane_t2

0x0001,

0xf9d1,	// (0x0002e93c) ai2_news_ticker_pane_t

0x7053,	// (0x00025fbe) heading_ai2_gene_pane_g1

0x705b,	// (0x00025fc6) heading_ai2_gene_pane_t1_ParamLimits

0x705b,	// (0x00025fc6) heading_ai2_gene_pane_t1

0x7070,	// (0x00025fdb) list_highlight_pane_cp6

0xe072,	// (0x0002cfdd) ai2_gene_pane_ParamLimits

0xe072,	// (0x0002cfdd) ai2_gene_pane

0xe096,	// (0x0002d001) list_ai2_gene_pane_t2

0x0001,

0xf9d6,	// (0x0002e941) list_ai2_gene_pane_t

0x70ab,	// (0x00026016) list_highlight_pane_cp8_ParamLimits

0x70ab,	// (0x00026016) list_highlight_pane_cp8

0x70bc,	// (0x00026027) ai2_gene_pane_g1_ParamLimits

0x70bc,	// (0x00026027) ai2_gene_pane_g1

0x70ce,	// (0x00026039) ai2_gene_pane_g2_ParamLimits

0x70ce,	// (0x00026039) ai2_gene_pane_g2

0x0001,

0xf9db,	// (0x0002e946) ai2_gene_pane_g_ParamLimits

0xf9db,	// (0x0002e946) ai2_gene_pane_g

0x411a,	// (0x00023085) scroll_pane_cp12

0xc346,	// (0x0002b2b1) control_pane_t3_ParamLimits

0xc346,	// (0x0002b2b1) control_pane_t3

0xd70a,	// (0x0002c675) status_small_pane_g8_ParamLimits

0xd70a,	// (0x0002c675) status_small_pane_g8

0xc4a4,	// (0x0002b40f) popup_find_window_ParamLimits

0xc731,	// (0x0002b69c) popup_note_image_window_ParamLimits

0x0af1,	// (0x0001fa5c) list_double2_graphic_pane_vc_g1_ParamLimits

0x0af1,	// (0x0001fa5c) list_double2_graphic_pane_vc_g1

0x0afd,	// (0x0001fa68) list_double2_graphic_pane_vc_g2_ParamLimits

0x0afd,	// (0x0001fa68) list_double2_graphic_pane_vc_g2

0x0b09,	// (0x0001fa74) list_double2_graphic_pane_vc_g3_ParamLimits

0x0b09,	// (0x0001fa74) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002e71b) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002e71b) list_double2_graphic_pane_vc_g

0x0b5b,	// (0x0001fac6) list_double2_graphic_pane_vc_t1_ParamLimits

0x0b5b,	// (0x0001fac6) list_double2_graphic_pane_vc_t1

0x0afd,	// (0x0001fa68) list_single_heading_pane_vc_g1_ParamLimits

0x0afd,	// (0x0001fa68) list_single_heading_pane_vc_g1

0x0b09,	// (0x0001fa74) list_single_heading_pane_vc_g2_ParamLimits

0x0b09,	// (0x0001fa74) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e533) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e533) list_single_heading_pane_vc_g

0x0b71,	// (0x0001fadc) list_single_heading_pane_vc_t1_ParamLimits

0x0b71,	// (0x0001fadc) list_single_heading_pane_vc_t1

0x0b87,	// (0x0001faf2) list_single_heading_pane_vc_t2_ParamLimits

0x0b87,	// (0x0001faf2) list_single_heading_pane_vc_t2

0x0001,

0xf7d8,	// (0x0002e743) list_single_heading_pane_vc_t_ParamLimits

0xf7d8,	// (0x0002e743) list_single_heading_pane_vc_t

0x0b99,	// (0x0001fb04) list_setting_number_pane_vc_g1_ParamLimits

0x0b99,	// (0x0001fb04) list_setting_number_pane_vc_g1

0x0ba5,	// (0x0001fb10) list_setting_number_pane_vc_g2_ParamLimits

0x0ba5,	// (0x0001fb10) list_setting_number_pane_vc_g2

0x0001,

0xf7dd,	// (0x0002e748) list_setting_number_pane_vc_g_ParamLimits

0xf7dd,	// (0x0002e748) list_setting_number_pane_vc_g

0x0bb1,	// (0x0001fb1c) list_setting_number_pane_vc_t1_ParamLimits

0x0bb1,	// (0x0001fb1c) list_setting_number_pane_vc_t1

0x0bc5,	// (0x0001fb30) list_setting_number_pane_vc_t2_ParamLimits

0x0bc5,	// (0x0001fb30) list_setting_number_pane_vc_t2

0x0be1,	// (0x0001fb4c) list_setting_number_pane_vc_t3_ParamLimits

0x0be1,	// (0x0001fb4c) list_setting_number_pane_vc_t3

0x0002,

0xf7e2,	// (0x0002e74d) list_setting_number_pane_vc_t_ParamLimits

0xf7e2,	// (0x0002e74d) list_setting_number_pane_vc_t

0x0bff,	// (0x0001fb6a) set_value_pane_vc_ParamLimits

0x0bff,	// (0x0001fb6a) set_value_pane_vc

0x6bfe,	// (0x00025b69) list_double2_graphic_pane_vc_ParamLimits

0x6bfe,	// (0x00025b69) list_double2_graphic_pane_vc

0x6bfe,	// (0x00025b69) list_double2_large_graphic_pane_vc_ParamLimits

0x6bfe,	// (0x00025b69) list_double2_large_graphic_pane_vc

0x6bfe,	// (0x00025b69) list_double2_pane_vc_ParamLimits

0x6bfe,	// (0x00025b69) list_double2_pane_vc

0x6bfe,	// (0x00025b69) list_double_graphic_heading_pane_vc_ParamLimits

0x6bfe,	// (0x00025b69) list_double_graphic_heading_pane_vc

0x6bfe,	// (0x00025b69) list_double_graphic_pane_vc_ParamLimits

0x6bfe,	// (0x00025b69) list_double_graphic_pane_vc

0x6bfe,	// (0x00025b69) list_double_heading_pane_vc_ParamLimits

0x6bfe,	// (0x00025b69) list_double_heading_pane_vc

0x6c10,	// (0x00025b7b) list_double_large_graphic_pane_vc_ParamLimits

0x6c10,	// (0x00025b7b) list_double_large_graphic_pane_vc

0x6bfe,	// (0x00025b69) list_double_number_pane_vc_ParamLimits

0x6bfe,	// (0x00025b69) list_double_number_pane_vc

0x6bfe,	// (0x00025b69) list_double_pane_vc_ParamLimits

0x6bfe,	// (0x00025b69) list_double_pane_vc

0x6bfe,	// (0x00025b69) list_double_time_pane_vc_ParamLimits

0x6bfe,	// (0x00025b69) list_double_time_pane_vc

0x6bfe,	// (0x00025b69) list_setting_number_pane_vc_ParamLimits

0x6bfe,	// (0x00025b69) list_setting_number_pane_vc

0x6bfe,	// (0x00025b69) list_setting_pane_vc_ParamLimits

0x6bfe,	// (0x00025b69) list_setting_pane_vc

0x6bfe,	// (0x00025b69) list_single_graphic_heading_pane_vc_ParamLimits

0x6bfe,	// (0x00025b69) list_single_graphic_heading_pane_vc

0x6bfe,	// (0x00025b69) list_single_heading_pane_vc_ParamLimits

0x6bfe,	// (0x00025b69) list_single_heading_pane_vc

0x6bfe,	// (0x00025b69) list_single_number_heading_pane_vc_ParamLimits

0x6bfe,	// (0x00025b69) list_single_number_heading_pane_vc

0x0af1,	// (0x0001fa5c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0af1,	// (0x0001fa5c) list_double_graphic_heading_pane_vc_g1

0x0afd,	// (0x0001fa68) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0afd,	// (0x0001fa68) list_double_graphic_heading_pane_vc_g2

0x0b09,	// (0x0001fa74) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0b09,	// (0x0001fa74) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002e71b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002e71b) list_double_graphic_heading_pane_vc_g

0x0d56,	// (0x0001fcc1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0d56,	// (0x0001fcc1) list_double_graphic_heading_pane_vc_t1

0x0d72,	// (0x0001fcdd) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0d72,	// (0x0001fcdd) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e7,	// (0x0002e952) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e7,	// (0x0002e952) list_double_graphic_heading_pane_vc_t

0x0b99,	// (0x0001fb04) list_setting_pane_vc_g1_ParamLimits

0x0b99,	// (0x0001fb04) list_setting_pane_vc_g1

0x0ba5,	// (0x0001fb10) list_setting_pane_vc_g2_ParamLimits

0x0ba5,	// (0x0001fb10) list_setting_pane_vc_g2

0x0001,

0xf7dd,	// (0x0002e748) list_setting_pane_vc_g_ParamLimits

0xf7dd,	// (0x0002e748) list_setting_pane_vc_g

0x0d90,	// (0x0001fcfb) list_setting_pane_vc_t1_ParamLimits

0x0d90,	// (0x0001fcfb) list_setting_pane_vc_t1

0x0dac,	// (0x0001fd17) list_setting_pane_vc_t2_ParamLimits

0x0dac,	// (0x0001fd17) list_setting_pane_vc_t2

0x0001,

0xfa15,	// (0x0002e980) list_setting_pane_vc_t_ParamLimits

0xfa15,	// (0x0002e980) list_setting_pane_vc_t

0x0bff,	// (0x0001fb6a) set_value_pane_cp_vc_ParamLimits

0x0bff,	// (0x0001fb6a) set_value_pane_cp_vc

0x0afd,	// (0x0001fa68) list_single_number_heading_pane_vc_g1_ParamLimits

0x0afd,	// (0x0001fa68) list_single_number_heading_pane_vc_g1

0x0b09,	// (0x0001fa74) list_single_number_heading_pane_vc_g2_ParamLimits

0x0b09,	// (0x0001fa74) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e533) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e533) list_single_number_heading_pane_vc_g

0x0dc8,	// (0x0001fd33) list_single_number_heading_pane_vc_t1_ParamLimits

0x0dc8,	// (0x0001fd33) list_single_number_heading_pane_vc_t1

0x0dde,	// (0x0001fd49) list_single_number_heading_pane_vc_t2_ParamLimits

0x0dde,	// (0x0001fd49) list_single_number_heading_pane_vc_t2

0x0df0,	// (0x0001fd5b) list_single_number_heading_pane_vc_t3_ParamLimits

0x0df0,	// (0x0001fd5b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1a,	// (0x0002e985) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1a,	// (0x0002e985) list_single_number_heading_pane_vc_t

0x0af1,	// (0x0001fa5c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0af1,	// (0x0001fa5c) list_single_graphic_heading_pane_vc_g1

0x0afd,	// (0x0001fa68) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0afd,	// (0x0001fa68) list_single_graphic_heading_pane_vc_g4

0x0b09,	// (0x0001fa74) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0b09,	// (0x0001fa74) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b0,	// (0x0002e71b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002e71b) list_single_graphic_heading_pane_vc_g

0x0e02,	// (0x0001fd6d) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0e02,	// (0x0001fd6d) list_single_graphic_heading_pane_vc_t1

0x0e18,	// (0x0001fd83) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0e18,	// (0x0001fd83) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa21,	// (0x0002e98c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa21,	// (0x0002e98c) list_single_graphic_heading_pane_vc_t

0x0afd,	// (0x0001fa68) list_double2_pane_vc_g1_ParamLimits

0x0afd,	// (0x0001fa68) list_double2_pane_vc_g1

0x0b09,	// (0x0001fa74) list_double2_pane_vc_g2_ParamLimits

0x0b09,	// (0x0001fa74) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e533) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e533) list_double2_pane_vc_g

0x0e2a,	// (0x0001fd95) list_double2_pane_vc_t1_ParamLimits

0x0e2a,	// (0x0001fd95) list_double2_pane_vc_t1

0x0e40,	// (0x0001fdab) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0e40,	// (0x0001fdab) list_double2_large_graphic_pane_vc_g1

0x0afd,	// (0x0001fa68) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0afd,	// (0x0001fa68) list_double2_large_graphic_pane_vc_g2

0x0b09,	// (0x0001fa74) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0b09,	// (0x0001fa74) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0002e550) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0002e550) list_double2_large_graphic_pane_vc_g

0x0e4c,	// (0x0001fdb7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0e4c,	// (0x0001fdb7) list_double2_large_graphic_pane_vc_t1

0x0e62,	// (0x0001fdcd) list_double_time_pane_vc_g1_ParamLimits

0x0e62,	// (0x0001fdcd) list_double_time_pane_vc_g1

0x0e6e,	// (0x0001fdd9) list_double_time_pane_vc_g2_ParamLimits

0x0e6e,	// (0x0001fdd9) list_double_time_pane_vc_g2

0x0001,

0xfa26,	// (0x0002e991) list_double_time_pane_vc_g_ParamLimits

0xfa26,	// (0x0002e991) list_double_time_pane_vc_g

0x0e7a,	// (0x0001fde5) list_double_time_pane_vc_t1_ParamLimits

0x0e7a,	// (0x0001fde5) list_double_time_pane_vc_t1

0x0e9e,	// (0x0001fe09) list_double_time_pane_vc_t2_ParamLimits

0x0e9e,	// (0x0001fe09) list_double_time_pane_vc_t2

0x0eed,	// (0x0001fe58) list_double_time_pane_vc_t3_ParamLimits

0x0eed,	// (0x0001fe58) list_double_time_pane_vc_t3

0x0eff,	// (0x0001fe6a) list_double_time_pane_vc_t4_ParamLimits

0x0eff,	// (0x0001fe6a) list_double_time_pane_vc_t4

0x0003,

0xfa2b,	// (0x0002e996) list_double_time_pane_vc_t_ParamLimits

0xfa2b,	// (0x0002e996) list_double_time_pane_vc_t

0x0afd,	// (0x0001fa68) list_double_pane_vc_g1_ParamLimits

0x0afd,	// (0x0001fa68) list_double_pane_vc_g1

0x0b09,	// (0x0001fa74) list_double_pane_vc_g2_ParamLimits

0x0b09,	// (0x0001fa74) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e533) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e533) list_double_pane_vc_g

0x0f13,	// (0x0001fe7e) list_double_pane_vc_t1_ParamLimits

0x0f13,	// (0x0001fe7e) list_double_pane_vc_t1

0x0f27,	// (0x0001fe92) list_double_pane_vc_t2_ParamLimits

0x0f27,	// (0x0001fe92) list_double_pane_vc_t2

0x0001,

0xfa34,	// (0x0002e99f) list_double_pane_vc_t_ParamLimits

0xfa34,	// (0x0002e99f) list_double_pane_vc_t

0x0afd,	// (0x0001fa68) list_double_number_pane_vc_g1_ParamLimits

0x0afd,	// (0x0001fa68) list_double_number_pane_vc_g1

0x0b09,	// (0x0001fa74) list_double_number_pane_vc_g2_ParamLimits

0x0b09,	// (0x0001fa74) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e533) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e533) list_double_number_pane_vc_g

0x0f3f,	// (0x0001feaa) list_double_number_pane_vc_t1_ParamLimits

0x0f3f,	// (0x0001feaa) list_double_number_pane_vc_t1

0x0f51,	// (0x0001febc) list_double_number_pane_vc_t2_ParamLimits

0x0f51,	// (0x0001febc) list_double_number_pane_vc_t2

0x0f65,	// (0x0001fed0) list_double_number_pane_vc_t3_ParamLimits

0x0f65,	// (0x0001fed0) list_double_number_pane_vc_t3

0x0002,

0xfa39,	// (0x0002e9a4) list_double_number_pane_vc_t_ParamLimits

0xfa39,	// (0x0002e9a4) list_double_number_pane_vc_t

0x0f7d,	// (0x0001fee8) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0f7d,	// (0x0001fee8) list_double_large_graphic_pane_vc_g1

0x0f9f,	// (0x0001ff0a) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0f9f,	// (0x0001ff0a) list_double_large_graphic_pane_vc_g2

0x0fb3,	// (0x0001ff1e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0fb3,	// (0x0001ff1e) list_double_large_graphic_pane_vc_g3

0x0fc2,	// (0x0001ff2d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0fc2,	// (0x0001ff2d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa40,	// (0x0002e9ab) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa40,	// (0x0002e9ab) list_double_large_graphic_pane_vc_g

0x0fce,	// (0x0001ff39) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0fce,	// (0x0001ff39) list_double_large_graphic_pane_vc_t1

0x0fea,	// (0x0001ff55) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0fea,	// (0x0001ff55) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa49,	// (0x0002e9b4) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa49,	// (0x0002e9b4) list_double_large_graphic_pane_vc_t

0x0afd,	// (0x0001fa68) list_double_heading_pane_vc_g1_ParamLimits

0x0afd,	// (0x0001fa68) list_double_heading_pane_vc_g1

0x0b09,	// (0x0001fa74) list_double_heading_pane_vc_g2_ParamLimits

0x0b09,	// (0x0001fa74) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e533) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e533) list_double_heading_pane_vc_g

0x100c,	// (0x0001ff77) list_double_heading_pane_vc_t1_ParamLimits

0x100c,	// (0x0001ff77) list_double_heading_pane_vc_t1

0x1020,	// (0x0001ff8b) list_double_heading_pane_vc_t2_ParamLimits

0x1020,	// (0x0001ff8b) list_double_heading_pane_vc_t2

0x0001,

0xfa4e,	// (0x0002e9b9) list_double_heading_pane_vc_t_ParamLimits

0xfa4e,	// (0x0002e9b9) list_double_heading_pane_vc_t

0x1038,	// (0x0001ffa3) list_double_graphic_pane_vc_g1_ParamLimits

0x1038,	// (0x0001ffa3) list_double_graphic_pane_vc_g1

0x1044,	// (0x0001ffaf) list_double_graphic_pane_vc_g2_ParamLimits

0x1044,	// (0x0001ffaf) list_double_graphic_pane_vc_g2

0x0afd,	// (0x0001fa68) list_double_graphic_pane_vc_g3_ParamLimits

0x0afd,	// (0x0001fa68) list_double_graphic_pane_vc_g3

0x0003,

0xfa53,	// (0x0002e9be) list_double_graphic_pane_vc_g_ParamLimits

0xfa53,	// (0x0002e9be) list_double_graphic_pane_vc_g

0x1061,	// (0x0001ffcc) list_double_graphic_pane_vc_t1_ParamLimits

0x1061,	// (0x0001ffcc) list_double_graphic_pane_vc_t1

0x108b,	// (0x0001fff6) list_double_graphic_pane_vc_t2_ParamLimits

0x108b,	// (0x0001fff6) list_double_graphic_pane_vc_t2

0x0001,

0xfa5c,	// (0x0002e9c7) list_double_graphic_pane_vc_t_ParamLimits

0xfa5c,	// (0x0002e9c7) list_double_graphic_pane_vc_t

0x14ac,	// (0x00020417) aid_size_cell_fastswap

0xc009,	// (0x0002af74) aid_size_cell_touch_ParamLimits

0xc009,	// (0x0002af74) aid_size_cell_touch

0x170f,	// (0x0002067a) popup_fast_swap_wide_window_ParamLimits

0x170f,	// (0x0002067a) popup_fast_swap_wide_window

0xc1b9,	// (0x0002b124) touch_pane_ParamLimits

0xc1b9,	// (0x0002b124) touch_pane

0x4170,	// (0x000230db) button_value_adjust_pane_cp2

0x07d8,	// (0x0001f743) button_value_adjust_pane_cp4

0x07f8,	// (0x0001f763) form_field_data_pane_cp2

0xbb9e,	// (0x0002ab09) form_field_data_wide_pane_cp2

0x45ee,	// (0x00023559) bg_scroll_pane_ParamLimits

0x1ab1,	// (0x00020a1c) scroll_handle_pane_ParamLimits

0x1ac5,	// (0x00020a30) scroll_sc2_down_pane_ParamLimits

0x1ac5,	// (0x00020a30) scroll_sc2_down_pane

0x461f,	// (0x0002358a) scroll_sc2_up_pane_ParamLimits

0x461f,	// (0x0002358a) scroll_sc2_up_pane

0xe1b6,	// (0x0002d121) grid_wheel_folder_pane_g1_ParamLimits

0xe1b6,	// (0x0002d121) grid_wheel_folder_pane_g1

0x1c8a,	// (0x00020bf5) clock_nsta_pane_cp2_ParamLimits

0x1c8a,	// (0x00020bf5) clock_nsta_pane_cp2

0xd5f9,	// (0x0002c564) listscroll_midp_pane_ParamLimits

0xd605,	// (0x0002c570) midp_canvas_pane

0x5113,	// (0x0002407e) nsta_clock_indic_pane

0x5147,	// (0x000240b2) listscroll_form_pane_vc

0x514f,	// (0x000240ba) listscroll_set_pane_vc_ParamLimits

0x514f,	// (0x000240ba) listscroll_set_pane_vc

0xd88a,	// (0x0002c7f5) clock_nsta_pane

0xd8b4,	// (0x0002c81f) indicator_nsta_pane

0x55a9,	// (0x00024514) bg_popup_sub_pane_cp2_ParamLimits

0x55bd,	// (0x00024528) find_pane_cp2_ParamLimits

0x55bd,	// (0x00024528) find_pane_cp2

0x55d3,	// (0x0002453e) grid_toobar_pane_ParamLimits

0x56b3,	// (0x0002461e) list_form_gen_pane_vc_ParamLimits

0x56b3,	// (0x0002461e) list_form_gen_pane_vc

0x56c9,	// (0x00024634) scroll_pane_cp8_vc_ParamLimits

0x56c9,	// (0x00024634) scroll_pane_cp8_vc

0x5745,	// (0x000246b0) data_form_wide_pane_vc_ParamLimits

0x5745,	// (0x000246b0) data_form_wide_pane_vc

0x5751,	// (0x000246bc) form_field_data_wide_pane_vc_g1

0x5759,	// (0x000246c4) form_field_data_wide_pane_vc_t1_ParamLimits

0x5759,	// (0x000246c4) form_field_data_wide_pane_vc_t1

0x4184,	// (0x000230ef) input_focus_pane_cp6_vc_ParamLimits

0x4184,	// (0x000230ef) input_focus_pane_cp6_vc

0x5aa5,	// (0x00024a10) list_midp_pane_ParamLimits

0x6ddf,	// (0x00025d4a) scroll_pane_cp16_ParamLimits

0x6ddf,	// (0x00025d4a) scroll_pane_cp16

0x5ae7,	// (0x00024a52) button_value_adjust_pane_ParamLimits

0x5ae7,	// (0x00024a52) button_value_adjust_pane

0xddff,	// (0x0002cd6a) button_value_adjust_pane_cp6_ParamLimits

0xddff,	// (0x0002cd6a) button_value_adjust_pane_cp6

0xdf19,	// (0x0002ce84) settings_code_pane_cp_ParamLimits

0xdf19,	// (0x0002ce84) settings_code_pane_cp

0x382b,	// (0x00022796) cell_touch_pane_g1

0x382b,	// (0x00022796) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0002e66e) cell_touch_pane_g

0xe0a4,	// (0x0002d00f) cell_touch_pane_cp_ParamLimits

0xe0a4,	// (0x0002d00f) cell_touch_pane_cp

0xe0c0,	// (0x0002d02b) cell_touch_pane_ParamLimits

0xe0c0,	// (0x0002d02b) cell_touch_pane

0x382b,	// (0x00022796) scroll_sc2_down_pane_g1

0x382b,	// (0x00022796) scroll_sc2_up_pane_g1

0x3835,	// (0x000227a0) bg_set_opt_pane_cp4_vc

0x716f,	// (0x000260da) list_set_graphic_pane_vc_g1_ParamLimits

0x716f,	// (0x000260da) list_set_graphic_pane_vc_g1

0x717b,	// (0x000260e6) list_set_graphic_pane_vc_g2_ParamLimits

0x717b,	// (0x000260e6) list_set_graphic_pane_vc_g2

0x0001,

0xf9ec,	// (0x0002e957) list_set_graphic_pane_vc_g_ParamLimits

0xf9ec,	// (0x0002e957) list_set_graphic_pane_vc_g

0x7187,	// (0x000260f2) text_primary_small_cp13_vc_ParamLimits

0x7187,	// (0x000260f2) text_primary_small_cp13_vc

0x719f,	// (0x0002610a) list_set_graphic_pane_vc_ParamLimits

0x719f,	// (0x0002610a) list_set_graphic_pane_vc

0x3835,	// (0x000227a0) input_focus_pane_cp2_vc

0x382b,	// (0x00022796) setting_code_pane_vc_g1

0x3960,	// (0x000228cb) setting_code_pane_vc_t1

0x71b1,	// (0x0002611c) set_text_pane_vc_t1_ParamLimits

0x71b1,	// (0x0002611c) set_text_pane_vc_t1

0x3835,	// (0x000227a0) input_focus_pane_cp1_vc

0x71cd,	// (0x00026138) list_set_text_pane_vc

0x382b,	// (0x00022796) setting_text_pane_vc_g1

0x3835,	// (0x000227a0) bg_set_opt_pane_cp2_vc

0x3957,	// (0x000228c2) setting_slider_graphic_pane_vc_g1

0x71d7,	// (0x00026142) setting_slider_graphic_pane_vc_t1

0x71e7,	// (0x00026152) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f1,	// (0x0002e95c) setting_slider_graphic_pane_vc_t

0x71f7,	// (0x00026162) slider_set_pane_cp_vc

0x71ff,	// (0x0002616a) slider_set_pane_vc_g1

0x7208,	// (0x00026173) slider_set_pane_vc_g2

0x0006,

0xf9f6,	// (0x0002e961) slider_set_pane_vc_g

0x41dc,	// (0x00023147) set_opt_bg_pane_g1_copy1

0x41e4,	// (0x0002314f) set_opt_bg_pane_g2_copy1

0x7234,	// (0x0002619f) set_opt_bg_pane_g3_copy1

0x41f4,	// (0x0002315f) set_opt_bg_pane_g4_copy1

0x41fc,	// (0x00023167) set_opt_bg_pane_g5_copy1

0x4204,	// (0x0002316f) set_opt_bg_pane_g6_copy1

0x723e,	// (0x000261a9) set_opt_bg_pane_g7_copy1

0x7246,	// (0x000261b1) set_opt_bg_pane_g8_copy1

0x7250,	// (0x000261bb) set_opt_bg_pane_g9_copy1

0x3835,	// (0x000227a0) bg_set_opt_pane_cp_vc

0x725a,	// (0x000261c5) setting_slider_pane_vc_t1

0x7269,	// (0x000261d4) setting_slider_pane_vc_t2

0x7279,	// (0x000261e4) setting_slider_pane_vc_t3

0x0002,

0xfa05,	// (0x0002e970) setting_slider_pane_vc_t

0x7289,	// (0x000261f4) slider_set_pane_vc

0x25d0,	// (0x0002153b) volume_set_pane_vc_g1

0x25d9,	// (0x00021544) volume_set_pane_vc_g2

0x25e2,	// (0x0002154d) volume_set_pane_vc_g3

0x25eb,	// (0x00021556) volume_set_pane_vc_g4

0x25f4,	// (0x0002155f) volume_set_pane_vc_g5

0x25fd,	// (0x00021568) volume_set_pane_vc_g6

0x2606,	// (0x00021571) volume_set_pane_vc_g7

0x260f,	// (0x0002157a) volume_set_pane_vc_g8

0x2618,	// (0x00021583) volume_set_pane_vc_g9

0x2621,	// (0x0002158c) volume_set_pane_vc_g10

0x0009,

0xf8aa,	// (0x0002e815) volume_set_pane_vc_g

0x7291,	// (0x000261fc) volume_set_pane_vc

0x7299,	// (0x00026204) button_value_adjust_pane_cp1_vc

0x72a3,	// (0x0002620e) list_highlight_pane_cp2_vc

0x72ac,	// (0x00026217) list_set_pane_vc_ParamLimits

0x72ac,	// (0x00026217) list_set_pane_vc

0x730a,	// (0x00026275) main_pane_set_vc_t1_ParamLimits

0x730a,	// (0x00026275) main_pane_set_vc_t1

0x731f,	// (0x0002628a) main_pane_set_vc_t2_ParamLimits

0x731f,	// (0x0002628a) main_pane_set_vc_t2

0x7331,	// (0x0002629c) main_pane_set_vc_t3_ParamLimits

0x7331,	// (0x0002629c) main_pane_set_vc_t3

0x7345,	// (0x000262b0) main_pane_set_vc_t4_ParamLimits

0x7345,	// (0x000262b0) main_pane_set_vc_t4

0x0003,

0xfa0c,	// (0x0002e977) main_pane_set_vc_t_ParamLimits

0xfa0c,	// (0x0002e977) main_pane_set_vc_t

0x7359,	// (0x000262c4) setting_code_pane_vc_ParamLimits

0x7359,	// (0x000262c4) setting_code_pane_vc

0x736a,	// (0x000262d5) setting_slider_graphic_pane_vc

0x736a,	// (0x000262d5) setting_slider_pane_vc

0x736a,	// (0x000262d5) setting_text_pane_vc

0x736a,	// (0x000262d5) setting_volume_pane_vc

0x7374,	// (0x000262df) scroll_pane_cp121_vc

0x415e,	// (0x000230c9) set_content_pane_vc

0x7388,	// (0x000262f3) button_value_adjust_pane_g1

0x7391,	// (0x000262fc) button_value_adjust_pane_g2

0x0001,

0xfa61,	// (0x0002e9cc) button_value_adjust_pane_g

0x739a,	// (0x00026305) form_field_slider_wide_pane_vc_t1_ParamLimits

0x739a,	// (0x00026305) form_field_slider_wide_pane_vc_t1

0x73ae,	// (0x00026319) form_field_slider_wide_pane_vc_t2_ParamLimits

0x73ae,	// (0x00026319) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa66,	// (0x0002e9d1) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa66,	// (0x0002e9d1) form_field_slider_wide_pane_vc_t

0x3b90,	// (0x00022afb) input_focus_pane_cp10_vc_ParamLimits

0x3b90,	// (0x00022afb) input_focus_pane_cp10_vc

0x73dc,	// (0x00026347) slider_cont_pane_cp1_vc_ParamLimits

0x73dc,	// (0x00026347) slider_cont_pane_cp1_vc

0x73ee,	// (0x00026359) slider_form_pane_g1_cp2

0x7208,	// (0x00026173) slider_form_pane_g2_cp2

0x741b,	// (0x00026386) form_field_slider_pane_vc_t3

0x7429,	// (0x00026394) form_field_slider_pane_vc_t4

0x7437,	// (0x000263a2) slider_form_pane_vc_ParamLimits

0x7437,	// (0x000263a2) slider_form_pane_vc

0x7444,	// (0x000263af) form_field_slider_pane_vc_t1_ParamLimits

0x7444,	// (0x000263af) form_field_slider_pane_vc_t1

0x73ae,	// (0x00026319) form_field_slider_pane_vc_t2_ParamLimits

0x73ae,	// (0x00026319) form_field_slider_pane_vc_t2

0x0001,

0xfa78,	// (0x0002e9e3) form_field_slider_pane_vc_t_ParamLimits

0xfa78,	// (0x0002e9e3) form_field_slider_pane_vc_t

0x3b90,	// (0x00022afb) input_focus_pane_cp9_vc_ParamLimits

0x3b90,	// (0x00022afb) input_focus_pane_cp9_vc

0x7460,	// (0x000263cb) slider_cont_pane_vc_ParamLimits

0x7460,	// (0x000263cb) slider_cont_pane_vc

0x7474,	// (0x000263df) list_form_graphic_pane_cp_vc_ParamLimits

0x7474,	// (0x000263df) list_form_graphic_pane_cp_vc

0x5751,	// (0x000246bc) form_field_popup_wide_pane_vc_g1

0x7489,	// (0x000263f4) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7489,	// (0x000263f4) form_field_popup_wide_pane_vc_t1

0x4184,	// (0x000230ef) input_focus_pane_cp8_vc_ParamLimits

0x4184,	// (0x000230ef) input_focus_pane_cp8_vc

0x74ce,	// (0x00026439) list_form_wide_pane_vc_ParamLimits

0x74ce,	// (0x00026439) list_form_wide_pane_vc

0x74da,	// (0x00026445) list_form_graphic_pane_vc_g1

0x74e2,	// (0x0002644d) list_form_graphic_pane_vc_t1_ParamLimits

0x74e2,	// (0x0002644d) list_form_graphic_pane_vc_t1

0x3915,	// (0x00022880) list_highlight_pane_cp5_vc_ParamLimits

0x3915,	// (0x00022880) list_highlight_pane_cp5_vc

0x74fe,	// (0x00026469) list_form_graphic_pane_vc_ParamLimits

0x74fe,	// (0x00026469) list_form_graphic_pane_vc

0x5751,	// (0x000246bc) form_field_popup_pane_vc_g1

0x7514,	// (0x0002647f) form_field_popup_pane_vc_t1_ParamLimits

0x7514,	// (0x0002647f) form_field_popup_pane_vc_t1

0x4184,	// (0x000230ef) input_focus_pane_cp7_vc_ParamLimits

0x4184,	// (0x000230ef) input_focus_pane_cp7_vc

0x752b,	// (0x00026496) list_form_pane_vc_ParamLimits

0x752b,	// (0x00026496) list_form_pane_vc

0x7537,	// (0x000264a2) data_form_pane_vc_t1_ParamLimits

0x7537,	// (0x000264a2) data_form_pane_vc_t1

0x41dc,	// (0x00023147) input_focus_pane_vc_g1

0x41e4,	// (0x0002314f) input_focus_pane_vc_g2

0x41ec,	// (0x00023157) input_focus_pane_vc_g3

0x41f4,	// (0x0002315f) input_focus_pane_vc_g4

0x41fc,	// (0x00023167) input_focus_pane_vc_g5

0x4204,	// (0x0002316f) input_focus_pane_vc_g6

0x420c,	// (0x00023177) input_focus_pane_vc_g7

0x4214,	// (0x0002317f) input_focus_pane_vc_g8

0x421c,	// (0x00023187) input_focus_pane_vc_g9

0x382b,	// (0x00022796) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0002e5f7) input_focus_pane_vc_g

0x5745,	// (0x000246b0) data_form_pane_vc_ParamLimits

0x5745,	// (0x000246b0) data_form_pane_vc

0x5751,	// (0x000246bc) form_field_data_pane_vc_g1

0x7552,	// (0x000264bd) form_field_data_pane_vc_t1_ParamLimits

0x7552,	// (0x000264bd) form_field_data_pane_vc_t1

0x4184,	// (0x000230ef) input_focus_pane_vc_ParamLimits

0x4184,	// (0x000230ef) input_focus_pane_vc

0x756c,	// (0x000264d7) button_value_adjust_pane_cp3_vc

0x7574,	// (0x000264df) button_value_adjust_pane_cp5_vc

0x757c,	// (0x000264e7) form_field_data_pane_vc_ParamLimits

0x757c,	// (0x000264e7) form_field_data_pane_vc

0x7593,	// (0x000264fe) form_field_data_pane_vc_cp2

0x759b,	// (0x00026506) form_field_data_wide_pane_vc_ParamLimits

0x759b,	// (0x00026506) form_field_data_wide_pane_vc

0x75b1,	// (0x0002651c) form_field_data_wide_pane_vc_cp2

0x75b9,	// (0x00026524) form_field_popup_pane_vc_ParamLimits

0x75b9,	// (0x00026524) form_field_popup_pane_vc

0x75d0,	// (0x0002653b) form_field_popup_wide_pane_vc_ParamLimits

0x75d0,	// (0x0002653b) form_field_popup_wide_pane_vc

0x75e6,	// (0x00026551) form_field_slider_pane_vc_ParamLimits

0x75e6,	// (0x00026551) form_field_slider_pane_vc

0x75f9,	// (0x00026564) form_field_slider_wide_pane_vc_ParamLimits

0x75f9,	// (0x00026564) form_field_slider_wide_pane_vc

0xe0de,	// (0x0002d049) grid_touch_1_pane_ParamLimits

0xe0de,	// (0x0002d049) grid_touch_1_pane

0xe0f2,	// (0x0002d05d) grid_touch_2_pane_ParamLimits

0xe0f2,	// (0x0002d05d) grid_touch_2_pane

0x76c7,	// (0x00026632) touch_pane_g1_ParamLimits

0x76c7,	// (0x00026632) touch_pane_g1

0x7630,	// (0x0002659b) cell_app_pane_cp_wide_ParamLimits

0x7630,	// (0x0002659b) cell_app_pane_cp_wide

0x7641,	// (0x000265ac) grid_popup_fast_wide_pane_ParamLimits

0x7641,	// (0x000265ac) grid_popup_fast_wide_pane

0x7655,	// (0x000265c0) scroll_pane_cp19_ParamLimits

0x7655,	// (0x000265c0) scroll_pane_cp19

0x3835,	// (0x000227a0) bg_popup_window_pane_cp20

0x7669,	// (0x000265d4) listscroll_popup_fast_wide_pane

0x4344,	// (0x000232af) grid_indicator_nsta_pane

0x7671,	// (0x000265dc) clock_nsta_pane_g1

0x767a,	// (0x000265e5) clock_nsta_pane_t1

0xe11c,	// (0x0002d087) cell_indicator_nsta_pane_ParamLimits

0xe11c,	// (0x0002d087) cell_indicator_nsta_pane

0x76c7,	// (0x00026632) cell_indicator_nsta_pane_g1

0xe133,	// (0x0002d09e) cell_indicator_nsta_pane_g2

0x0001,

0xfa89,	// (0x0002e9f4) cell_indicator_nsta_pane_g

0x76e2,	// (0x0002664d) clock_nsta_pane_cp

0x76ea,	// (0x00026655) indicator_nsta_pane_cp

0x76f2,	// (0x0002665d) nsta_clock_indic_pane_g1

0x39de,	// (0x00022949) grid_indicator_pane

0x4714,	// (0x0002367f) scroll_pane_cp29

0x1bd9,	// (0x00020b44) indicator_nsta_pane_cp2_ParamLimits

0x1bd9,	// (0x00020b44) indicator_nsta_pane_cp2

0x3915,	// (0x00022880) main_apps_wheel_pane

0x5966,	// (0x000248d1) form_midp_field_text_pane_ParamLimits

0x5ab1,	// (0x00024a1c) scroll_bar_cp050_ParamLimits

0x7742,	// (0x000266ad) cell_indicator_pane_ParamLimits

0x7742,	// (0x000266ad) cell_indicator_pane

0x7759,	// (0x000266c4) cell_indicator_pane_g1

0xe140,	// (0x0002d0ab) grid_wheel_folder_pane_ParamLimits

0xe140,	// (0x0002d0ab) grid_wheel_folder_pane

0xe14e,	// (0x0002d0b9) list_wheel_apps_pane_ParamLimits

0xe14e,	// (0x0002d0b9) list_wheel_apps_pane

0xe15c,	// (0x0002d0c7) main_apps_wheel_pane_g1_ParamLimits

0xe15c,	// (0x0002d0c7) main_apps_wheel_pane_g1

0xe168,	// (0x0002d0d3) main_apps_wheel_pane_g2_ParamLimits

0xe168,	// (0x0002d0d3) main_apps_wheel_pane_g2

0x0001,

0xfaa5,	// (0x0002ea10) main_apps_wheel_pane_g_ParamLimits

0xfaa5,	// (0x0002ea10) main_apps_wheel_pane_g

0xe176,	// (0x0002d0e1) main_apps_wheel_pane_t1_ParamLimits

0xe176,	// (0x0002d0e1) main_apps_wheel_pane_t1

0xe18a,	// (0x0002d0f5) list_wheel_apps_pane_g1

0xe192,	// (0x0002d0fd) list_wheel_apps_pane_g2

0xe19a,	// (0x0002d105) list_wheel_apps_pane_g3

0xe1a2,	// (0x0002d10d) list_wheel_apps_pane_g4

0xe1ac,	// (0x0002d117) list_wheel_apps_pane_g5

0x0004,

0xfaaa,	// (0x0002ea15) list_wheel_apps_pane_g

0x4c97,	// (0x00023c02) navi_icon_text_pane

0xd77e,	// (0x0002c6e9) aid_fill_nsta

0x781e,	// (0x00026789) navi_icon_text_pane_g1

0x782a,	// (0x00026795) navi_icon_text_pane_t1

0x4b2a,	// (0x00023a95) list_set_graphic_pane_t1_ParamLimits

0x4b2a,	// (0x00023a95) list_set_graphic_pane_t1

0x6208,	// (0x00025173) popup_midp_note_alarm_window_t6_ParamLimits

0x6208,	// (0x00025173) popup_midp_note_alarm_window_t6

0x621a,	// (0x00025185) popup_midp_note_alarm_window_t7_ParamLimits

0x621a,	// (0x00025185) popup_midp_note_alarm_window_t7

0x622c,	// (0x00025197) popup_midp_note_alarm_window_t8_ParamLimits

0x622c,	// (0x00025197) popup_midp_note_alarm_window_t8

0x623e,	// (0x000251a9) popup_midp_note_alarm_window_t9_ParamLimits

0x623e,	// (0x000251a9) popup_midp_note_alarm_window_t9

0x6250,	// (0x000251bb) popup_midp_note_alarm_window_t10_ParamLimits

0x6250,	// (0x000251bb) popup_midp_note_alarm_window_t10

0x6262,	// (0x000251cd) popup_midp_note_alarm_window_t11_ParamLimits

0x6262,	// (0x000251cd) popup_midp_note_alarm_window_t11

0x6274,	// (0x000251df) scroll_pane_cp17_ParamLimits

0x6274,	// (0x000251df) scroll_pane_cp17

0x25d0,	// (0x0002153b) volume_small_pane_cp_g1

0x28c5,	// (0x00021830) volume_small_pane_cp_g2

0x28ce,	// (0x00021839) volume_small_pane_cp_g3

0x28d7,	// (0x00021842) volume_small_pane_cp_g4

0x28e0,	// (0x0002184b) volume_small_pane_cp_g5

0x28e9,	// (0x00021854) volume_small_pane_cp_g6

0x28f2,	// (0x0002185d) volume_small_pane_cp_g7

0x28fb,	// (0x00021866) volume_small_pane_cp_g8

0x2904,	// (0x0002186f) volume_small_pane_cp_g9

0x290d,	// (0x00021878) volume_small_pane_cp_g10

0x4ef4,	// (0x00023e5f) midp_ticker_pane_g1_ParamLimits

0x4f00,	// (0x00023e6b) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0002e6c3) midp_ticker_pane_g_ParamLimits

0x4f0c,	// (0x00023e77) midp_ticker_pane_t1_ParamLimits

0xd7a2,	// (0x0002c70d) aid_fill_nsta_2

0x5a9d,	// (0x00024a08) list_form2_midp_pane

0x6bcd,	// (0x00025b38) midp_editing_number_pane_ParamLimits

0x6bdc,	// (0x00025b47) midp_ticker_pane_ParamLimits

0x783c,	// (0x000267a7) form2_midp_field_pane

0x7860,	// (0x000267cb) scroll_pane_cp51

0x7880,	// (0x000267eb) form2_midp_button_pane_ParamLimits

0x7880,	// (0x000267eb) form2_midp_button_pane

0x7892,	// (0x000267fd) form2_midp_content_pane_ParamLimits

0x7892,	// (0x000267fd) form2_midp_content_pane

0x78ac,	// (0x00026817) form2_midp_field_choice_group_pane

0x78b4,	// (0x0002681f) form2_midp_field_pane_g1

0x78bc,	// (0x00026827) form2_midp_field_pane_g2

0x78c4,	// (0x0002682f) form2_midp_field_pane_g3

0x78cc,	// (0x00026837) form2_midp_field_pane_g4

0x0003,

0xfacf,	// (0x0002ea3a) form2_midp_field_pane_g

0x78d4,	// (0x0002683f) form2_midp_gauge_slider_pane

0x78dc,	// (0x00026847) form2_midp_gauge_wait_pane

0x78e4,	// (0x0002684f) form2_midp_image_pane_ParamLimits

0x78e4,	// (0x0002684f) form2_midp_image_pane

0x78ff,	// (0x0002686a) form2_midp_label_pane_ParamLimits

0x78ff,	// (0x0002686a) form2_midp_label_pane

0xe1df,	// (0x0002d14a) form2_midp_label_pane_cp_ParamLimits

0xe1df,	// (0x0002d14a) form2_midp_label_pane_cp

0x7939,	// (0x000268a4) form2_midp_string_pane_ParamLimits

0x7939,	// (0x000268a4) form2_midp_string_pane

0xbdea,	// (0x0002ad55) form2_midp_text_pane_ParamLimits

0xbdea,	// (0x0002ad55) form2_midp_text_pane

0x794b,	// (0x000268b6) form2_midp_time_pane

0x795b,	// (0x000268c6) input_focus_pane_cp51_ParamLimits

0x795b,	// (0x000268c6) input_focus_pane_cp51

0x7973,	// (0x000268de) form2_midp_label_pane_t1_ParamLimits

0x7973,	// (0x000268de) form2_midp_label_pane_t1

0xbe03,	// (0x0002ad6e) form2_mdip_text_pane_t1_ParamLimits

0xbe03,	// (0x0002ad6e) form2_mdip_text_pane_t1

0x10ee,	// (0x00020059) form2_midp_time_pane_t1

0x79bc,	// (0x00026927) form2_midp_gauge_slider_pane_t1

0xe1fe,	// (0x0002d169) form2_midp_gauge_slider_pane_t2

0xe210,	// (0x0002d17b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad8,	// (0x0002ea43) form2_midp_gauge_slider_pane_t

0x79f2,	// (0x0002695d) form2_midp_slider_pane

0x79fe,	// (0x00026969) form2_midp_gauge_wait_pane_t1

0x7a0c,	// (0x00026977) form2_midp_wait_pane_ParamLimits

0x7a0c,	// (0x00026977) form2_midp_wait_pane

0xe222,	// (0x0002d18d) list_single_2graphic_pane_cp4_ParamLimits

0xe222,	// (0x0002d18d) list_single_2graphic_pane_cp4

0xdbfc,	// (0x0002cb67) list_single_midp_graphic_pane_cp_ParamLimits

0xdbfc,	// (0x0002cb67) list_single_midp_graphic_pane_cp

0x3835,	// (0x000227a0) list_highlight_pane_cp20

0x7a5b,	// (0x000269c6) list_single_2graphic_pane_g1_cp4

0x7a63,	// (0x000269ce) list_single_2graphic_pane_g2_cp4

0x7a6b,	// (0x000269d6) list_single_2graphic_pane_t1_cp4

0x3915,	// (0x00022880) list_highlight_pane_cp21

0x7a7a,	// (0x000269e5) list_single_midp_graphic_pane_g4_cp

0x7a89,	// (0x000269f4) list_single_midp_graphic_pane_t1_cp

0xe236,	// (0x0002d1a1) form2_mdip_string_pane_t1_ParamLimits

0xe236,	// (0x0002d1a1) form2_mdip_string_pane_t1

0x3835,	// (0x000227a0) bg_wml_button_pane_cp2

0x382b,	// (0x00022796) form2_midp_image_pane_g1

0x05c2,	// (0x0001f52d) list_double_large_graphic_pane_g5_ParamLimits

0x05c2,	// (0x0001f52d) list_double_large_graphic_pane_g5

0xd5f9,	// (0x0002c564) midp_form_pane_ParamLimits

0x3915,	// (0x00022880) main_apps_wheel_pane_ParamLimits

0xc7af,	// (0x0002b71a) popup_preview_window_ParamLimits

0xc7af,	// (0x0002b71a) popup_preview_window

0x2459,	// (0x000213c4) popup_touch_info_window_ParamLimits

0x2459,	// (0x000213c4) popup_touch_info_window

0x2477,	// (0x000213e2) popup_touch_menu_window_ParamLimits

0x2477,	// (0x000213e2) popup_touch_menu_window

0x3821,	// (0x0002278c) bg_popup_sub_pane_cp6

0x7b88,	// (0x00026af3) list_touch_menu_pane

0x7b90,	// (0x00026afb) list_single_touch_menu_pane_ParamLimits

0x7b90,	// (0x00026afb) list_single_touch_menu_pane

0x7ba6,	// (0x00026b11) list_single_touch_menu_pane_t1

0x3915,	// (0x00022880) bg_popup_sub_pane_cp7_ParamLimits

0x3915,	// (0x00022880) bg_popup_sub_pane_cp7

0x7bb4,	// (0x00026b1f) heading_sub_pane

0x7bbc,	// (0x00026b27) list_touch_info_pane_ParamLimits

0x7bbc,	// (0x00026b27) list_touch_info_pane

0x7bcb,	// (0x00026b36) list_single_touch_info_pane_ParamLimits

0x7bcb,	// (0x00026b36) list_single_touch_info_pane

0x7bdd,	// (0x00026b48) list_single_touch_info_pane_t1

0x7beb,	// (0x00026b56) list_single_touch_info_pane_t2

0x0001,

0xfae6,	// (0x0002ea51) list_single_touch_info_pane_t

0x4e17,	// (0x00023d82) bg_popup_heading_pane_cp

0x7bf9,	// (0x00026b64) heading_sub_pane_t1

0x56df,	// (0x0002464a) bg_popup_preview_window_pane_cp_ParamLimits

0x56df,	// (0x0002464a) bg_popup_preview_window_pane_cp

0x7bb4,	// (0x00026b1f) heading_preview_pane

0x7bbc,	// (0x00026b27) list_preview_pane_ParamLimits

0x7bbc,	// (0x00026b27) list_preview_pane

0x7c07,	// (0x00026b72) popup_preview_window_g1

0x7bcb,	// (0x00026b36) list_single_preview_pane_ParamLimits

0x7bcb,	// (0x00026b36) list_single_preview_pane

0x7c0f,	// (0x00026b7a) list_single_preview_pane_g1

0x7c17,	// (0x00026b82) list_single_preview_pane_t1

0x7bdd,	// (0x00026b48) list_single_preview_pane_t2

0x0001,

0xfaeb,	// (0x0002ea56) list_single_preview_pane_t

0x7c25,	// (0x00026b90) bg_popup_heading_pane_cp2_ParamLimits

0x7c25,	// (0x00026b90) bg_popup_heading_pane_cp2

0x7c3b,	// (0x00026ba6) heading_preview_pane_g1

0x7c43,	// (0x00026bae) heading_preview_pane_t1_ParamLimits

0x7c43,	// (0x00026bae) heading_preview_pane_t1

0x3a01,	// (0x0002296c) soft_indicator_pane_t1_ParamLimits

0x40f7,	// (0x00023062) scroll_pane_ParamLimits

0x460d,	// (0x00023578) scroll_sc2_left_pane

0x4616,	// (0x00023581) scroll_sc2_right_pane

0x4635,	// (0x000235a0) scroll_bg_pane_g1_ParamLimits

0x464a,	// (0x000235b5) scroll_bg_pane_g2_ParamLimits

0x4662,	// (0x000235cd) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0002e64e) scroll_bg_pane_g_ParamLimits

0x4635,	// (0x000235a0) scroll_handle_pane_g1_ParamLimits

0x4684,	// (0x000235ef) scroll_handle_pane_g2_ParamLimits

0x4662,	// (0x000235cd) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0002e655) scroll_handle_pane_g_ParamLimits

0x1f1f,	// (0x00020e8a) popup_choice_list_window_ParamLimits

0x1f1f,	// (0x00020e8a) popup_choice_list_window

0x55b5,	// (0x00024520) choice_list_pane

0x5637,	// (0x000245a2) cell_toolbar_pane_t1

0x565f,	// (0x000245ca) toolbar_button_pane_ParamLimits

0x672e,	// (0x00025699) ai_gene_pane_1_t2_ParamLimits

0x672e,	// (0x00025699) ai_gene_pane_1_t2

0x0001,

0xf906,	// (0x0002e871) ai_gene_pane_1_t_ParamLimits

0xf906,	// (0x0002e871) ai_gene_pane_1_t

0x7c60,	// (0x00026bcb) scroll_sc2_left_pane_g1

0x7c60,	// (0x00026bcb) scroll_sc2_right_pane_g1

0x5161,	// (0x000240cc) bg_popup_sub_pane_cp10

0x7c6a,	// (0x00026bd5) list_choice_list_pane

0x7c83,	// (0x00026bee) list_single_choice_list_pane_ParamLimits

0x7c83,	// (0x00026bee) list_single_choice_list_pane

0x7c96,	// (0x00026c01) list_single_choice_list_pane_g1

0x4315,	// (0x00023280) list_single_choice_list_pane_t1_ParamLimits

0x4315,	// (0x00023280) list_single_choice_list_pane_t1

0x7c9e,	// (0x00026c09) choice_list_pane_g1

0x7ca6,	// (0x00026c11) choice_list_pane_t1

0x3821,	// (0x0002278c) input_focus_pane_cp11

0x44ec,	// (0x00023457) title_pane_stacon_g2_ParamLimits

0x44ec,	// (0x00023457) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0002e634) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0002e634) title_pane_stacon_g

0x4e17,	// (0x00023d82) cursor_press_pane

0xc45c,	// (0x0002b3c7) popup_fep_hwr_window_ParamLimits

0xc45c,	// (0x0002b3c7) popup_fep_hwr_window

0x2045,	// (0x00020fb0) popup_fep_vkb_window_ParamLimits

0x2045,	// (0x00020fb0) popup_fep_vkb_window

0x7cb4,	// (0x00026c1f) cursor_press_pane_g1

0x0002,

0xfb14,	// (0x0002ea7f) fep_vkb_side_pane_g_ParamLimits

0x294f,	// (0x000218ba) fep_hwr_candidate_pane_ParamLimits

0x294f,	// (0x000218ba) fep_hwr_candidate_pane

0x2979,	// (0x000218e4) fep_hwr_side_pane_ParamLimits

0x2979,	// (0x000218e4) fep_hwr_side_pane

0x2999,	// (0x00021904) fep_hwr_top_pane_ParamLimits

0x2999,	// (0x00021904) fep_hwr_top_pane

0x29b1,	// (0x0002191c) fep_hwr_write_pane_ParamLimits

0x29b1,	// (0x0002191c) fep_hwr_write_pane

0xfb14,	// (0x0002ea7f) fep_vkb_side_pane_g

0x7cbc,	// (0x00026c27) fep_hwr_top_pane_g1

0x7cce,	// (0x00026c39) fep_hwr_top_pane_g2

0x29dd,	// (0x00021948) fep_hwr_top_pane_g3

0x0002,

0xfaf0,	// (0x0002ea5b) fep_hwr_top_pane_g

0x29f2,	// (0x0002195d) fep_hwr_top_text_pane

0x4804,	// (0x0002376f) fep_hwr_top_text_pane_g1

0x7d04,	// (0x00026c6f) fep_hwr_top_text_pane_t1

0x2ae8,	// (0x00021a53) fep_hwr_candidate_pane_g1

0x7f57,	// (0x00026ec2) fep_vkb_keypad_pane_g3_ParamLimits

0x7f57,	// (0x00026ec2) fep_vkb_keypad_pane_g3

0x7f7f,	// (0x00026eea) fep_vkb_keypad_pane_g4_ParamLimits

0x7f7f,	// (0x00026eea) fep_vkb_keypad_pane_g4

0x7fee,	// (0x00026f59) fep_vkb_bottom_pane_g2_ParamLimits

0x7fee,	// (0x00026f59) fep_vkb_bottom_pane_g2

0x0001,

0xfb1b,	// (0x0002ea86) fep_vkb_bottom_pane_g_ParamLimits

0xfb1b,	// (0x0002ea86) fep_vkb_bottom_pane_g

0x7c60,	// (0x00026bcb) cell_vkb_side_pane_g2

0x0001,

0xfb25,	// (0x0002ea90) cell_vkb_side_pane_g

0x8079,	// (0x00026fe4) cell_vkb_side_pane_t1

0x8087,	// (0x00026ff2) cell_vkb_side_pane_t1_copy1

0x7c60,	// (0x00026bcb) bg_fep_vkb_candidate_pane_g2

0x81b3,	// (0x0002711e) cell_vkb_candidate_pane_ParamLimits

0x7d12,	// (0x00026c7d) aid_size_cell_vkb_ParamLimits

0x7d12,	// (0x00026c7d) aid_size_cell_vkb

0x81b3,	// (0x0002711e) cell_vkb_candidate_pane

0x2b02,	// (0x00021a6d) bg_popup_fep_shadow_pane_g1

0xe2b7,	// (0x0002d222) fep_vkb_bottom_pane_ParamLimits

0xe2b7,	// (0x0002d222) fep_vkb_bottom_pane

0x7dd6,	// (0x00026d41) fep_vkb_candidate_pane_ParamLimits

0x7dd6,	// (0x00026d41) fep_vkb_candidate_pane

0xe2dc,	// (0x0002d247) fep_vkb_keypad_pane_ParamLimits

0xe2dc,	// (0x0002d247) fep_vkb_keypad_pane

0xe318,	// (0x0002d283) fep_vkb_side_pane_ParamLimits

0xe318,	// (0x0002d283) fep_vkb_side_pane

0xe354,	// (0x0002d2bf) fep_vkb_top_pane_ParamLimits

0xe354,	// (0x0002d2bf) fep_vkb_top_pane

0x7eb0,	// (0x00026e1b) fep_vkb_top_pane_g1_ParamLimits

0x7eb0,	// (0x00026e1b) fep_vkb_top_pane_g1

0x7ebf,	// (0x00026e2a) fep_vkb_top_pane_g2_ParamLimits

0x7ebf,	// (0x00026e2a) fep_vkb_top_pane_g2

0x7ece,	// (0x00026e39) fep_vkb_top_pane_g3_ParamLimits

0x7ece,	// (0x00026e39) fep_vkb_top_pane_g3

0x0003,

0xfb0b,	// (0x0002ea76) fep_vkb_top_pane_g_ParamLimits

0xfb0b,	// (0x0002ea76) fep_vkb_top_pane_g

0x7eec,	// (0x00026e57) fep_vkb_top_text_pane_ParamLimits

0x7eec,	// (0x00026e57) fep_vkb_top_text_pane

0xe390,	// (0x0002d2fb) fep_vkb_side_pane_g1_ParamLimits

0xe390,	// (0x0002d2fb) fep_vkb_side_pane_g1

0x7f46,	// (0x00026eb1) grid_vkb_side_pane_ParamLimits

0x7f46,	// (0x00026eb1) grid_vkb_side_pane

0x2b0a,	// (0x00021a75) bg_popup_fep_shadow_pane_g2

0x2b13,	// (0x00021a7e) bg_popup_fep_shadow_pane_g3

0x2b1b,	// (0x00021a86) bg_popup_fep_shadow_pane_g4

0x2b24,	// (0x00021a8f) bg_popup_fep_shadow_pane_g5

0x2b2e,	// (0x00021a99) bg_popup_fep_shadow_pane_g6

0x2b36,	// (0x00021aa1) bg_popup_fep_shadow_pane_g7

0x41fc,	// (0x00023167) bg_popup_fep_shadow_pane_g8

0x7f9d,	// (0x00026f08) grid_vkb_keypad_number_pane_ParamLimits

0x7f9d,	// (0x00026f08) grid_vkb_keypad_number_pane

0x7fad,	// (0x00026f18) grid_vkb_keypad_pane_ParamLimits

0x7fad,	// (0x00026f18) grid_vkb_keypad_pane

0x7fd3,	// (0x00026f3e) fep_vkb_bottom_pane_g1_ParamLimits

0x7fd3,	// (0x00026f3e) fep_vkb_bottom_pane_g1

0x7ffc,	// (0x00026f67) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7ffc,	// (0x00026f67) grid_vkb_keypad_bottom_left_pane

0x8011,	// (0x00026f7c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x8011,	// (0x00026f7c) grid_vkb_keypad_bottom_right_pane

0x8026,	// (0x00026f91) fep_vkb_top_text_pane_g1

0xe3d7,	// (0x0002d342) fep_vkb_top_text_pane_t1

0xe3e9,	// (0x0002d354) cell_vkb_side_pane_ParamLimits

0xe3e9,	// (0x0002d354) cell_vkb_side_pane

0x7c60,	// (0x00026bcb) cell_vkb_side_pane_g1

0x8095,	// (0x00027000) cell_vkb_keypad_pane_ParamLimits

0x8095,	// (0x00027000) cell_vkb_keypad_pane

0x810a,	// (0x00027075) cell_vkb_keypad_pane_g1

0x0008,

0xfb38,	// (0x0002eaa3) bg_popup_fep_shadow_pane_g

0x7c60,	// (0x00026bcb) cell_hwr_side_pane_g1

0x7c60,	// (0x00026bcb) cell_hwr_side_pane_g2

0x8114,	// (0x0002707f) cell_vkb_keypad_pane_t1

0xe3ff,	// (0x0002d36a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe3ff,	// (0x0002d36a) cell_vkb_keypad_bottom_left_pane

0xe414,	// (0x0002d37f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe414,	// (0x0002d37f) cell_vkb_keypad_bottom_right_pane

0x7c60,	// (0x00026bcb) cell_vkb_keypad_bottom_left_pane_g1

0x7c60,	// (0x00026bcb) cell_vkb_keypad_bottom_right_pane_g1

0x8178,	// (0x000270e3) cell_vkb_keypad_number_pane_ParamLimits

0x8178,	// (0x000270e3) cell_vkb_keypad_number_pane

0x8197,	// (0x00027102) cell_vkb_keypad_number_pane_g1

0x81a1,	// (0x0002710c) cell_vkb_keypad_number_pane_g2

0x81aa,	// (0x00027115) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2a,	// (0x0002ea95) cell_vkb_keypad_number_pane_g

0x8114,	// (0x0002707f) cell_vkb_keypad_number_pane_t1

0x81ce,	// (0x00027139) fep_vkb_candidate_pane_g1

0x0001,

0xfb25,	// (0x0002ea90) cell_hwr_side_pane_g

0x81e7,	// (0x00027152) cell_hwr_side_pane_t1

0x2b48,	// (0x00021ab3) cell_hwr_side_pane_t1_copy1

0x7ede,	// (0x00026e49) cell_hwr_candidate_pane_g1

0x2b56,	// (0x00021ac1) cell_hwr_candidate_pane_t1

0x7c60,	// (0x00026bcb) cell_vkb_candidate_pane_g2

0x826d,	// (0x000271d8) cell_vkb_candidate_pane_t1

0x2916,	// (0x00021881) bg_popup_fep_shadow_pane_ParamLimits

0x2916,	// (0x00021881) bg_popup_fep_shadow_pane

0xd984,	// (0x0002c8ef) bg_fep_hwr_top_pane_g4

0x7ce0,	// (0x00026c4b) bg_hwr_side_pane_g1_ParamLimits

0x7ce0,	// (0x00026c4b) bg_hwr_side_pane_g1

0xcae9,	// (0x0002ba54) cell_hwr_side_pane_ParamLimits

0xcae9,	// (0x0002ba54) cell_hwr_side_pane

0x2a69,	// (0x000219d4) fep_hwr_write_pane_g1_ParamLimits

0x2a69,	// (0x000219d4) fep_hwr_write_pane_g1

0x2a76,	// (0x000219e1) fep_hwr_write_pane_g2_ParamLimits

0x2a76,	// (0x000219e1) fep_hwr_write_pane_g2

0x2a83,	// (0x000219ee) fep_hwr_write_pane_g3_ParamLimits

0x2a83,	// (0x000219ee) fep_hwr_write_pane_g3

0xcb09,	// (0x0002ba74) fep_hwr_write_pane_g4_ParamLimits

0xcb09,	// (0x0002ba74) fep_hwr_write_pane_g4

0x0005,

0xfaf7,	// (0x0002ea62) fep_hwr_write_pane_g_ParamLimits

0xfaf7,	// (0x0002ea62) fep_hwr_write_pane_g

0xd984,	// (0x0002c8ef) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd984,	// (0x0002c8ef) bg_fep_hwr_candidate_pane_g2

0x2aa6,	// (0x00021a11) cell_hwr_candidate_pane_ParamLimits

0x2aa6,	// (0x00021a11) cell_hwr_candidate_pane

0x2ae8,	// (0x00021a53) fep_hwr_candidate_pane_g1_ParamLimits

0x7d40,	// (0x00026cab) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7d40,	// (0x00026cab) bg_popup_fep_shadow_pane_cp2

0x7ede,	// (0x00026e49) fep_vkb_top_pane_g4_ParamLimits

0x7ede,	// (0x00026e49) fep_vkb_top_pane_g4

0x7f24,	// (0x00026e8f) fep_vkb_side_pane_g2_ParamLimits

0x7f24,	// (0x00026e8f) fep_vkb_side_pane_g2

0xbaac,	// (0x0002aa17) list_setting_pane_t4_ParamLimits

0xbaac,	// (0x0002aa17) list_setting_pane_t4

0xbb46,	// (0x0002aab1) list_setting_number_pane_t5_ParamLimits

0xbb46,	// (0x0002aab1) list_setting_number_pane_t5

0x483b,	// (0x000237a6) list_double_heading_pane_cp2_ParamLimits

0x483b,	// (0x000237a6) list_double_heading_pane_cp2

0x4192,	// (0x000230fd) list_double_heading_pane_g1_cp2_ParamLimits

0x4192,	// (0x000230fd) list_double_heading_pane_g1_cp2

0x419e,	// (0x00023109) list_double_heading_pane_g2_cp2_ParamLimits

0x419e,	// (0x00023109) list_double_heading_pane_g2_cp2

0x827b,	// (0x000271e6) list_double_heading_pane_t1_cp2_ParamLimits

0x827b,	// (0x000271e6) list_double_heading_pane_t1_cp2

0x8291,	// (0x000271fc) list_double_heading_pane_t2_cp2_ParamLimits

0x8291,	// (0x000271fc) list_double_heading_pane_t2_cp2

0x3809,	// (0x00022774) aid_value_unit2

0x1769,	// (0x000206d4) popup_preview_fixed_window

0x3b9e,	// (0x00022b09) bg_popup_preview_window_pane_cp02

0x82a3,	// (0x0002720e) list_preview_fixed_pane

0x82e9,	// (0x00027254) list_empty_pane_fp_ParamLimits

0x82e9,	// (0x00027254) list_empty_pane_fp

0x82e9,	// (0x00027254) list_single_cale_day_pane_fp_ParamLimits

0x82e9,	// (0x00027254) list_single_cale_day_pane_fp

0x82e9,	// (0x00027254) list_single_graphic_heading_pane_fp_ParamLimits

0x82e9,	// (0x00027254) list_single_graphic_heading_pane_fp

0x82e9,	// (0x00027254) list_single_graphic_pane_fp_ParamLimits

0x82e9,	// (0x00027254) list_single_graphic_pane_fp

0x82e9,	// (0x00027254) list_single_heading_pane_fp_ParamLimits

0x82e9,	// (0x00027254) list_single_heading_pane_fp

0x82e9,	// (0x00027254) list_single_pane_fp_ParamLimits

0x82e9,	// (0x00027254) list_single_pane_fp

0x82fe,	// (0x00027269) list_single_pane_fp_g1_ParamLimits

0x82fe,	// (0x00027269) list_single_pane_fp_g1

0x1101,	// (0x0002006c) list_single_pane_fp_g2_ParamLimits

0x1101,	// (0x0002006c) list_single_pane_fp_g2

0x110d,	// (0x00020078) list_single_pane_fp_g3_ParamLimits

0x110d,	// (0x00020078) list_single_pane_fp_g3

0x830a,	// (0x00027275) list_single_pane_fp_g4_ParamLimits

0x830a,	// (0x00027275) list_single_pane_fp_g4

0x0003,

0xfb59,	// (0x0002eac4) list_single_pane_fp_g_ParamLimits

0xfb59,	// (0x0002eac4) list_single_pane_fp_g

0x1121,	// (0x0002008c) list_single_pane_fp_t1_ParamLimits

0x1121,	// (0x0002008c) list_single_pane_fp_t1

0x1138,	// (0x000200a3) list_single_graphic_pane_fp_g1_ParamLimits

0x1138,	// (0x000200a3) list_single_graphic_pane_fp_g1

0x82fe,	// (0x00027269) list_single_graphic_pane_fp_g2_ParamLimits

0x82fe,	// (0x00027269) list_single_graphic_pane_fp_g2

0x1101,	// (0x0002006c) list_single_graphic_pane_fp_g3_ParamLimits

0x1101,	// (0x0002006c) list_single_graphic_pane_fp_g3

0x110d,	// (0x00020078) list_single_graphic_pane_fp_g4_ParamLimits

0x110d,	// (0x00020078) list_single_graphic_pane_fp_g4

0x830a,	// (0x00027275) list_single_graphic_pane_fp_g5_ParamLimits

0x830a,	// (0x00027275) list_single_graphic_pane_fp_g5

0x0004,

0xfb62,	// (0x0002eacd) list_single_graphic_pane_fp_g_ParamLimits

0xfb62,	// (0x0002eacd) list_single_graphic_pane_fp_g

0x1144,	// (0x000200af) list_single_graphic_pane_fp_t1_ParamLimits

0x1144,	// (0x000200af) list_single_graphic_pane_fp_t1

0x1138,	// (0x000200a3) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x1138,	// (0x000200a3) list_single_graphic_heading_pane_fp_g1

0x82fe,	// (0x00027269) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x82fe,	// (0x00027269) list_single_graphic_heading_pane_fp_g2

0x1101,	// (0x0002006c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x1101,	// (0x0002006c) list_single_graphic_heading_pane_fp_g3

0x110d,	// (0x00020078) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x110d,	// (0x00020078) list_single_graphic_heading_pane_fp_g4

0x830a,	// (0x00027275) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x830a,	// (0x00027275) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb62,	// (0x0002eacd) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb62,	// (0x0002eacd) list_single_graphic_heading_pane_fp_g

0x115a,	// (0x000200c5) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x115a,	// (0x000200c5) list_single_graphic_heading_pane_fp_t1

0x1170,	// (0x000200db) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x1170,	// (0x000200db) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6d,	// (0x0002ead8) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6d,	// (0x0002ead8) list_single_graphic_heading_pane_fp_t

0x1182,	// (0x000200ed) list_single_cale_day_pane_fp_g1_ParamLimits

0x1182,	// (0x000200ed) list_single_cale_day_pane_fp_g1

0x8316,	// (0x00027281) list_single_cale_day_pane_fp_g2_ParamLimits

0x8316,	// (0x00027281) list_single_cale_day_pane_fp_g2

0x11ba,	// (0x00020125) list_single_cale_day_pane_fp_g3_ParamLimits

0x11ba,	// (0x00020125) list_single_cale_day_pane_fp_g3

0x11e2,	// (0x0002014d) list_single_cale_day_pane_fp_g4_ParamLimits

0x11e2,	// (0x0002014d) list_single_cale_day_pane_fp_g4

0x1206,	// (0x00020171) list_single_cale_day_pane_fp_g5_ParamLimits

0x1206,	// (0x00020171) list_single_cale_day_pane_fp_g5

0x0004,

0xfb72,	// (0x0002eadd) list_single_cale_day_pane_fp_g_ParamLimits

0xfb72,	// (0x0002eadd) list_single_cale_day_pane_fp_g

0x122a,	// (0x00020195) list_single_cale_day_pane_fp_t1_ParamLimits

0x122a,	// (0x00020195) list_single_cale_day_pane_fp_t1

0x1250,	// (0x000201bb) list_single_cale_day_pane_fp_t2_ParamLimits

0x1250,	// (0x000201bb) list_single_cale_day_pane_fp_t2

0x1269,	// (0x000201d4) list_single_cale_day_pane_fp_t3_ParamLimits

0x1269,	// (0x000201d4) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7d,	// (0x0002eae8) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7d,	// (0x0002eae8) list_single_cale_day_pane_fp_t

0x82fe,	// (0x00027269) list_empty_pane_fp_g1_ParamLimits

0x82fe,	// (0x00027269) list_empty_pane_fp_g1

0x1282,	// (0x000201ed) list_empty_pane_fp_t1

0x1290,	// (0x000201fb) list_empty_pane_fp_t2

0x0001,

0xfb84,	// (0x0002eaef) list_empty_pane_fp_t

0x82fe,	// (0x00027269) list_single_heading_pane_fp_g1_ParamLimits

0x82fe,	// (0x00027269) list_single_heading_pane_fp_g1

0x1101,	// (0x0002006c) list_single_heading_pane_fp_g2_ParamLimits

0x1101,	// (0x0002006c) list_single_heading_pane_fp_g2

0x110d,	// (0x00020078) list_single_heading_pane_fp_g3_ParamLimits

0x110d,	// (0x00020078) list_single_heading_pane_fp_g3

0x0002,

0xfb89,	// (0x0002eaf4) list_single_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0002eaf4) list_single_heading_pane_fp_g

0x129e,	// (0x00020209) list_single_heading_pane_fp_t1_ParamLimits

0x129e,	// (0x00020209) list_single_heading_pane_fp_t1

0x12b0,	// (0x0002021b) list_single_heading_pane_fp_t2_ParamLimits

0x12b0,	// (0x0002021b) list_single_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0002eafb) list_single_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0002eafb) list_single_heading_pane_fp_t

0x4383,	// (0x000232ee) aid_size_cell_fast

0x3b0e,	// (0x00022a79) soft_indicator_pane_cp1_t1

0x43c0,	// (0x0002332b) cell_app_pane_cp2_ParamLimits

0x43c0,	// (0x0002332b) cell_app_pane_cp2

0x2938,	// (0x000218a3) fep_hwr_candidate_drop_down_list_pane

0xd992,	// (0x0002c8fd) fep_hwr_candidate_pane_g3_ParamLimits

0xd992,	// (0x0002c8fd) fep_hwr_candidate_pane_g3

0xd99f,	// (0x0002c90a) fep_hwr_candidate_pane_g4_ParamLimits

0xd99f,	// (0x0002c90a) fep_hwr_candidate_pane_g4

0x0002,

0xfb04,	// (0x0002ea6f) fep_hwr_candidate_pane_g_ParamLimits

0xfb04,	// (0x0002ea6f) fep_hwr_candidate_pane_g

0x7dc5,	// (0x00026d30) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7dc5,	// (0x00026d30) fep_vkb_candidate_drop_down_list_pane

0x81d6,	// (0x00027141) fep_vkb_candidate_pane_g3

0x81de,	// (0x00027149) fep_vkb_candidate_pane_g4

0x0002,

0xfb31,	// (0x0002ea9c) fep_vkb_candidate_pane_g

0x7ede,	// (0x00026e49) cell_hwr_candidate_pane_g1_ParamLimits

0x81f5,	// (0x00027160) cell_hwr_candidate_pane_g3_ParamLimits

0x81f5,	// (0x00027160) cell_hwr_candidate_pane_g3

0x8216,	// (0x00027181) cell_hwr_candidate_pane_g4_ParamLimits

0x8216,	// (0x00027181) cell_hwr_candidate_pane_g4

0x0002,

0xfb4b,	// (0x0002eab6) cell_hwr_candidate_pane_g_ParamLimits

0xfb4b,	// (0x0002eab6) cell_hwr_candidate_pane_g

0x8237,	// (0x000271a2) cell_vkb_candidate_pane_g3_ParamLimits

0x8237,	// (0x000271a2) cell_vkb_candidate_pane_g3

0x8252,	// (0x000271bd) cell_vkb_candidate_pane_g4_ParamLimits

0x8252,	// (0x000271bd) cell_vkb_candidate_pane_g4

0x8322,	// (0x0002728d) cell_app_pane_cp2_g1_ParamLimits

0x8322,	// (0x0002728d) cell_app_pane_cp2_g1

0x8340,	// (0x000272ab) cell_app_pane_cp2_g2_ParamLimits

0x8340,	// (0x000272ab) cell_app_pane_cp2_g2

0x0001,

0xfb95,	// (0x0002eb00) cell_app_pane_cp2_g_ParamLimits

0xfb95,	// (0x0002eb00) cell_app_pane_cp2_g

0x834c,	// (0x000272b7) cell_app_pane_cp2_t1_ParamLimits

0x834c,	// (0x000272b7) cell_app_pane_cp2_t1

0x4184,	// (0x000230ef) grid_highlight_pane_cp1_ParamLimits

0x4184,	// (0x000230ef) grid_highlight_pane_cp1

0x2b74,	// (0x00021adf) cell_hwr_candidate_pane_cp1_ParamLimits

0x2b74,	// (0x00021adf) cell_hwr_candidate_pane_cp1

0x7ede,	// (0x00026e49) fep_hwr_candidate_drop_down_list_pane_g1

0x835e,	// (0x000272c9) fep_hwr_candidate_drop_down_list_pane_g2

0x836b,	// (0x000272d6) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9a,	// (0x0002eb05) fep_hwr_candidate_drop_down_list_pane_g

0x2b93,	// (0x00021afe) fep_hwr_candidate_drop_down_list_scroll_pane

0x2b9c,	// (0x00021b07) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2b9c,	// (0x00021b07) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2ba9,	// (0x00021b14) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2ba9,	// (0x00021b14) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2bb6,	// (0x00021b21) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2bb6,	// (0x00021b21) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x8237,	// (0x000271a2) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8237,	// (0x000271a2) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x8252,	// (0x000271bd) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8252,	// (0x000271bd) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2bc3,	// (0x00021b2e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2bc3,	// (0x00021b2e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2bde,	// (0x00021b49) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2bde,	// (0x00021b49) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2bf9,	// (0x00021b64) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2bf9,	// (0x00021b64) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba1,	// (0x0002eb0c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba1,	// (0x0002eb0c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x8378,	// (0x000272e3) cell_vkb_candidate_pane_cp1_ParamLimits

0x8378,	// (0x000272e3) cell_vkb_candidate_pane_cp1

0x7ede,	// (0x00026e49) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7ede,	// (0x00026e49) fep_vkb_candidate_drop_down_list_pane_g1

0x835e,	// (0x000272c9) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x835e,	// (0x000272c9) fep_vkb_candidate_drop_down_list_pane_g2

0x836b,	// (0x000272d6) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x836b,	// (0x000272d6) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb9a,	// (0x0002eb05) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb9a,	// (0x0002eb05) fep_vkb_candidate_drop_down_list_pane_g

0x8398,	// (0x00027303) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8398,	// (0x00027303) fep_vkb_candidate_drop_down_list_scroll_pane

0x83a5,	// (0x00027310) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x83a5,	// (0x00027310) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x83b2,	// (0x0002731d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x83b2,	// (0x0002731d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x83be,	// (0x00027329) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x83be,	// (0x00027329) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x81f5,	// (0x00027160) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x81f5,	// (0x00027160) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8216,	// (0x00027181) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8216,	// (0x00027181) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x83ca,	// (0x00027335) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x83ca,	// (0x00027335) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x83eb,	// (0x00027356) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x83eb,	// (0x00027356) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x840c,	// (0x00027377) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x840c,	// (0x00027377) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x0002eb1d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x0002eb1d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd0d7,	// (0x0002c042) title_pane_g1_ParamLimits

0xd0ea,	// (0x0002c055) title_pane_g2_ParamLimits

0xf54e,	// (0x0002e4b9) title_pane_g_ParamLimits

0x47f4,	// (0x0002375f) aid_call2_pane

0x47fc,	// (0x00023767) aid_call_pane

0x4804,	// (0x0002376f) popup_clock_analogue_window_g1

0x4804,	// (0x0002376f) popup_clock_analogue_window_g2

0x1ada,	// (0x00020a45) popup_clock_analogue_window_g3

0x1ae3,	// (0x00020a4e) popup_clock_analogue_window_g4

0x382b,	// (0x00022796) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0002e663) popup_clock_analogue_window_g

0x1aeb,	// (0x00020a56) popup_clock_analogue_window_t1

0x1af9,	// (0x00020a64) clock_digital_number_pane_ParamLimits

0x1af9,	// (0x00020a64) clock_digital_number_pane

0x1b05,	// (0x00020a70) clock_digital_number_pane_cp02_ParamLimits

0x1b05,	// (0x00020a70) clock_digital_number_pane_cp02

0x1b11,	// (0x00020a7c) clock_digital_number_pane_cp03_ParamLimits

0x1b11,	// (0x00020a7c) clock_digital_number_pane_cp03

0x1b1d,	// (0x00020a88) clock_digital_number_pane_cp04_ParamLimits

0x1b1d,	// (0x00020a88) clock_digital_number_pane_cp04

0x1b29,	// (0x00020a94) clock_digital_separator_pane_ParamLimits

0x1b29,	// (0x00020a94) clock_digital_separator_pane

0x1b35,	// (0x00020aa0) popup_clock_digital_window_t1_ParamLimits

0x1b35,	// (0x00020aa0) popup_clock_digital_window_t1

0x382b,	// (0x00022796) clock_digital_number_pane_g1

0x382b,	// (0x00022796) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0002e66e) clock_digital_number_pane_g

0x382b,	// (0x00022796) clock_digital_separator_pane_g1

0x382b,	// (0x00022796) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0002e66e) clock_digital_separator_pane_g

0xd77e,	// (0x0002c6e9) aid_fill_nsta_ParamLimits

0xd8b4,	// (0x0002c81f) indicator_nsta_pane_ParamLimits

0x5442,	// (0x000243ad) popup_clock_analogue_window

0x5442,	// (0x000243ad) popup_clock_digital_window

0x4344,	// (0x000232af) grid_indicator_nsta_pane_ParamLimits

0x7688,	// (0x000265f3) clock_nsta_pane_t2

0x0001,

0xfa84,	// (0x0002e9ef) clock_nsta_pane_t

0x1a9e,	// (0x00020a09) aid_size_max_handle

0xc20f,	// (0x0002b17a) aid_size_min_handle

0x4e17,	// (0x00023d82) editor_scroll_pane

0x8427,	// (0x00027392) ex_editor_pane

0x42f1,	// (0x0002325c) scroll_pane_cp13

0x4123,	// (0x0002308e) scroll_pane_cp14

0x4833,	// (0x0002379e) scroll_pane_cp36

0xd561,	// (0x0002c4cc) list_single_graphic_hl_pane_cp2_ParamLimits

0xd561,	// (0x0002c4cc) list_single_graphic_hl_pane_cp2

0xbdc6,	// (0x0002ad31) list_single_graphic_hl_pane_ParamLimits

0xbdc6,	// (0x0002ad31) list_single_graphic_hl_pane

0x12c6,	// (0x00020231) aid_size_min_hl_cp1

0x842f,	// (0x0002739a) list_highlight_pane_cp34_ParamLimits

0x842f,	// (0x0002739a) list_highlight_pane_cp34

0x8440,	// (0x000273ab) list_single_graphic_hl_pane_g1_ParamLimits

0x8440,	// (0x000273ab) list_single_graphic_hl_pane_g1

0xbe20,	// (0x0002ad8b) list_single_graphic_hl_pane_g2_ParamLimits

0xbe20,	// (0x0002ad8b) list_single_graphic_hl_pane_g2

0xbe20,	// (0x0002ad8b) list_single_graphic_hl_pane_g3_ParamLimits

0xbe20,	// (0x0002ad8b) list_single_graphic_hl_pane_g3

0xbe2c,	// (0x0002ad97) list_single_graphic_hl_pane_g4_ParamLimits

0xbe2c,	// (0x0002ad97) list_single_graphic_hl_pane_g4

0xbe38,	// (0x0002ada3) list_single_graphic_hl_pane_g5_ParamLimits

0xbe38,	// (0x0002ada3) list_single_graphic_hl_pane_g5

0x0004,

0xfbc3,	// (0x0002eb2e) list_single_graphic_hl_pane_g_ParamLimits

0xfbc3,	// (0x0002eb2e) list_single_graphic_hl_pane_g

0xbe4c,	// (0x0002adb7) list_single_graphic_hl_pane_t1_ParamLimits

0xbe4c,	// (0x0002adb7) list_single_graphic_hl_pane_t1

0x844d,	// (0x000273b8) aid_size_min_hl_cp2

0x8456,	// (0x000273c1) list_highlight_pane_cp34_cp2_ParamLimits

0x8456,	// (0x000273c1) list_highlight_pane_cp34_cp2

0x8440,	// (0x000273ab) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8440,	// (0x000273ab) list_single_graphic_hl_pane_g1_cp2

0x8463,	// (0x000273ce) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8463,	// (0x000273ce) list_single_graphic_hl_pane_g2_cp2

0x846f,	// (0x000273da) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x846f,	// (0x000273da) list_single_graphic_hl_pane_g3_cp2

0x737c,	// (0x000262e7) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x737c,	// (0x000262e7) list_single_graphic_hl_pane_g4_cp2

0x847d,	// (0x000273e8) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x847d,	// (0x000273e8) list_single_graphic_hl_pane_g5_cp2

0xc26a,	// (0x0002b1d5) control_pane_g4_ParamLimits

0xc26a,	// (0x0002b1d5) control_pane_g4

0x5161,	// (0x000240cc) bg_popup_sub_pane_cp10_ParamLimits

0x7c6a,	// (0x00026bd5) list_choice_list_pane_ParamLimits

0x7c79,	// (0x00026be4) scroll_pane_cp23

0x3b9e,	// (0x00022b09) bg_popup_preview_window_pane_cp02_ParamLimits

0x82a3,	// (0x0002720e) list_preview_fixed_pane_ParamLimits

0x82b9,	// (0x00027224) list_preview_fixed_pane_cp_ParamLimits

0x82b9,	// (0x00027224) list_preview_fixed_pane_cp

0x82c5,	// (0x00027230) popup_preview_fixed_window_g1_ParamLimits

0x82c5,	// (0x00027230) popup_preview_fixed_window_g1

0x82d1,	// (0x0002723c) popup_preview_fixed_window_g2_ParamLimits

0x82d1,	// (0x0002723c) popup_preview_fixed_window_g2

0x0002,

0xfb52,	// (0x0002eabd) popup_preview_fixed_window_g_ParamLimits

0xfb52,	// (0x0002eabd) popup_preview_fixed_window_g

0x1a12,	// (0x0002097d) aid_navi_side_left_pane_ParamLimits

0x1a27,	// (0x00020992) aid_navi_side_right_pane_ParamLimits

0x1a3f,	// (0x000209aa) navi_icon_pane_stacon_ParamLimits

0x1a53,	// (0x000209be) navi_navi_pane_stacon_ParamLimits

0x1a3f,	// (0x000209aa) navi_text_pane_stacon_ParamLimits

0x3821,	// (0x0002278c) main_text_info_pane

0x84a7,	// (0x00027412) listscroll_text_info_pane

0x84af,	// (0x0002741a) list_text_info_pane_ParamLimits

0x84af,	// (0x0002741a) list_text_info_pane

0x84be,	// (0x00027429) scroll_pane_cp24_ParamLimits

0x84be,	// (0x00027429) scroll_pane_cp24

0xe42f,	// (0x0002d39a) list_text_info_pane_t1_ParamLimits

0xe42f,	// (0x0002d39a) list_text_info_pane_t1

0xc3cf,	// (0x0002b33a) popup_fast_swap2_window_ParamLimits

0xc3cf,	// (0x0002b33a) popup_fast_swap2_window

0x850d,	// (0x00027478) aid_size_cell_fast2

0x3821,	// (0x0002278c) bg_popup_window_pane_cp17

0x5ad1,	// (0x00024a3c) heading_pane_cp2

0x3ded,	// (0x00022d58) listscroll_fast2_pane

0x8517,	// (0x00027482) grid_fast2_pane

0x8521,	// (0x0002748c) listscroll_fast2_pane_g1

0x8529,	// (0x00027494) listscroll_fast2_pane_g2

0x0001,

0xfbce,	// (0x0002eb39) listscroll_fast2_pane_g

0x42f1,	// (0x0002325c) scroll_pane_cp26

0x8533,	// (0x0002749e) cell_fast2_pane_ParamLimits

0x8533,	// (0x0002749e) cell_fast2_pane

0x8548,	// (0x000274b3) cell_fast2_pane_g1

0x8551,	// (0x000274bc) cell_fast2_pane_g2

0x855a,	// (0x000274c5) cell_fast2_pane_g3

0x0002,

0xfbd3,	// (0x0002eb3e) cell_fast2_pane_g

0x3ee0,	// (0x00022e4b) grid_highlight_pane_cp9

0x3ef5,	// (0x00022e60) main_eswt_pane_ParamLimits

0x3ef5,	// (0x00022e60) main_eswt_pane

0x84d3,	// (0x0002743e) list_single_text_info_pane

0x8562,	// (0x000274cd) eswt_ctrl_button_pane

0x8562,	// (0x000274cd) eswt_ctrl_canvas_pane

0x856a,	// (0x000274d5) eswt_ctrl_combo_pane

0x8562,	// (0x000274cd) eswt_ctrl_default_pane

0x8562,	// (0x000274cd) eswt_ctrl_label_pane

0x8572,	// (0x000274dd) eswt_ctrl_wait_pane

0x857a,	// (0x000274e5) eswt_shell_pane

0x3821,	// (0x0002278c) listscroll_eswt_app_pane

0x859a,	// (0x00027505) popup_eswt_tasktip_window_ParamLimits

0x859a,	// (0x00027505) popup_eswt_tasktip_window

0x56df,	// (0x0002464a) bg_popup_window_pane_cp18

0x85ab,	// (0x00027516) eswt_control_pane_g1_ParamLimits

0x85ab,	// (0x00027516) eswt_control_pane_g1

0x85b8,	// (0x00027523) eswt_control_pane_g2_ParamLimits

0x85b8,	// (0x00027523) eswt_control_pane_g2

0x85c5,	// (0x00027530) eswt_control_pane_g3_ParamLimits

0x85c5,	// (0x00027530) eswt_control_pane_g3

0x85d2,	// (0x0002753d) eswt_control_pane_g4_ParamLimits

0x85d2,	// (0x0002753d) eswt_control_pane_g4

0x0003,

0xfbda,	// (0x0002eb45) eswt_control_pane_g_ParamLimits

0xfbda,	// (0x0002eb45) eswt_control_pane_g

0x4184,	// (0x000230ef) bg_button_pane_ParamLimits

0x4184,	// (0x000230ef) bg_button_pane

0x3ef5,	// (0x00022e60) common_borders_pane_copy2_ParamLimits

0x3ef5,	// (0x00022e60) common_borders_pane_copy2

0x85df,	// (0x0002754a) control_button_pane_g1_ParamLimits

0x85df,	// (0x0002754a) control_button_pane_g1

0x85eb,	// (0x00027556) control_button_pane_g2_ParamLimits

0x85eb,	// (0x00027556) control_button_pane_g2

0x85f7,	// (0x00027562) control_button_pane_g3_ParamLimits

0x85f7,	// (0x00027562) control_button_pane_g3

0x0002,

0xfbe3,	// (0x0002eb4e) control_button_pane_g_ParamLimits

0xfbe3,	// (0x0002eb4e) control_button_pane_g

0x860b,	// (0x00027576) control_button_pane_t1

0x8619,	// (0x00027584) control_button_pane_t2

0x0001,

0xfbea,	// (0x0002eb55) control_button_pane_t

0x566b,	// (0x000245d6) bg_button_pane_g1

0x5673,	// (0x000245de) bg_button_pane_g2

0x567b,	// (0x000245e6) bg_button_pane_g3

0x5683,	// (0x000245ee) bg_button_pane_g4

0x568b,	// (0x000245f6) bg_button_pane_g5

0x5693,	// (0x000245fe) bg_button_pane_g6

0x569b,	// (0x00024606) bg_button_pane_g7

0x56a3,	// (0x0002460e) bg_button_pane_g8

0x56ab,	// (0x00024616) bg_button_pane_g9

0x0008,

0xf85a,	// (0x0002e7c5) bg_button_pane_g

0x7c25,	// (0x00026b90) common_borders_pane_ParamLimits

0x7c25,	// (0x00026b90) common_borders_pane

0x85ab,	// (0x00027516) eswt_control_pane_g1_copy1_ParamLimits

0x85ab,	// (0x00027516) eswt_control_pane_g1_copy1

0x85b8,	// (0x00027523) eswt_control_pane_g2_copy1_ParamLimits

0x85b8,	// (0x00027523) eswt_control_pane_g2_copy1

0x85c5,	// (0x00027530) eswt_control_pane_g3_copy1_ParamLimits

0x85c5,	// (0x00027530) eswt_control_pane_g3_copy1

0x85d2,	// (0x0002753d) eswt_control_pane_g4_copy1_ParamLimits

0x85d2,	// (0x0002753d) eswt_control_pane_g4_copy1

0x7c60,	// (0x00026bcb) bg_eswt_ctrl_canvas_pane_g1

0x7c25,	// (0x00026b90) common_borders_pane_cp2_ParamLimits

0x7c25,	// (0x00026b90) common_borders_pane_cp2

0x7c25,	// (0x00026b90) common_borders_pane_cp3_ParamLimits

0x7c25,	// (0x00026b90) common_borders_pane_cp3

0x8627,	// (0x00027592) separator_horizontal_pane

0x862f,	// (0x0002759a) separator_vertical_pane

0x85ab,	// (0x00027516) eswt_control_pane_g1_copy2_ParamLimits

0x85ab,	// (0x00027516) eswt_control_pane_g1_copy2

0x85b8,	// (0x00027523) eswt_control_pane_g2_copy2_ParamLimits

0x85b8,	// (0x00027523) eswt_control_pane_g2_copy2

0x85c5,	// (0x00027530) eswt_control_pane_g3_copy2_ParamLimits

0x85c5,	// (0x00027530) eswt_control_pane_g3_copy2

0x85d2,	// (0x0002753d) eswt_control_pane_g4_copy2_ParamLimits

0x85d2,	// (0x0002753d) eswt_control_pane_g4_copy2

0x3821,	// (0x0002278c) common_borders_pane_cp4

0x8638,	// (0x000275a3) separator_horizontal_pane_g1

0x8641,	// (0x000275ac) separator_horizontal_pane_g2

0x864a,	// (0x000275b5) separator_horizontal_pane_g3

0x0002,

0xfbef,	// (0x0002eb5a) separator_horizontal_pane_g

0x85ab,	// (0x00027516) eswt_control_pane_g1_copy3_ParamLimits

0x85ab,	// (0x00027516) eswt_control_pane_g1_copy3

0x85b8,	// (0x00027523) eswt_control_pane_g2_copy3_ParamLimits

0x85b8,	// (0x00027523) eswt_control_pane_g2_copy3

0x85c5,	// (0x00027530) eswt_control_pane_g3_copy3_ParamLimits

0x85c5,	// (0x00027530) eswt_control_pane_g3_copy3

0x85d2,	// (0x0002753d) eswt_control_pane_g4_copy3_ParamLimits

0x85d2,	// (0x0002753d) eswt_control_pane_g4_copy3

0x3821,	// (0x0002278c) common_borders_pane_cp5

0x8653,	// (0x000275be) separator_vertical_pane_g1

0x865c,	// (0x000275c7) separator_vertical_pane_g2

0x8665,	// (0x000275d0) separator_vertical_pane_g3

0x0002,

0xfbf6,	// (0x0002eb61) separator_vertical_pane_g

0x85ab,	// (0x00027516) eswt_control_pane_g1_copy4_ParamLimits

0x85ab,	// (0x00027516) eswt_control_pane_g1_copy4

0x85b8,	// (0x00027523) eswt_control_pane_g2_copy4_ParamLimits

0x85b8,	// (0x00027523) eswt_control_pane_g2_copy4

0x85c5,	// (0x00027530) eswt_control_pane_g3_copy4_ParamLimits

0x85c5,	// (0x00027530) eswt_control_pane_g3_copy4

0x85d2,	// (0x0002753d) eswt_control_pane_g4_copy4_ParamLimits

0x85d2,	// (0x0002753d) eswt_control_pane_g4_copy4

0xe44a,	// (0x0002d3b5) eswt_ctrl_combo_button_pane

0xe452,	// (0x0002d3bd) eswt_ctrl_input_pane

0xe45a,	// (0x0002d3c5) popup_choice_list_window_cp70

0xe462,	// (0x0002d3cd) eswt_ctrl_input_pane_t1

0x3821,	// (0x0002278c) input_focus_pane_cp70

0x7c25,	// (0x00026b90) bg_button_pane_cp70_ParamLimits

0x7c25,	// (0x00026b90) bg_button_pane_cp70

0xe470,	// (0x0002d3db) eswt_ctrl_combo_button_pane_g1

0x869c,	// (0x00027607) wait_bar_pane_cp70

0x56df,	// (0x0002464a) bg_popup_window_pane_cp70_ParamLimits

0x56df,	// (0x0002464a) bg_popup_window_pane_cp70

0x86a4,	// (0x0002760f) popup_eswt_tasktip_window_t1

0x86ba,	// (0x00027625) wait_bar_pane_cp71_ParamLimits

0x86ba,	// (0x00027625) wait_bar_pane_cp71

0x86c6,	// (0x00027631) grid_eswt_app_pane

0x4616,	// (0x00023581) scroll_pane_cp70

0xe478,	// (0x0002d3e3) cell_eswt_app_pane_ParamLimits

0xe478,	// (0x0002d3e3) cell_eswt_app_pane

0xe4a2,	// (0x0002d40d) cell_eswt_app_pane_g1_ParamLimits

0xe4a2,	// (0x0002d40d) cell_eswt_app_pane_g1

0xe4d1,	// (0x0002d43c) cell_eswt_app_pane_g2_ParamLimits

0xe4d1,	// (0x0002d43c) cell_eswt_app_pane_g2

0x0001,

0xfbfd,	// (0x0002eb68) cell_eswt_app_pane_g_ParamLimits

0xfbfd,	// (0x0002eb68) cell_eswt_app_pane_g

0xe4fa,	// (0x0002d465) cell_eswt_app_pane_t1_ParamLimits

0xe4fa,	// (0x0002d465) cell_eswt_app_pane_t1

0x8789,	// (0x000276f4) grid_highlight_pane_cp70_ParamLimits

0x8789,	// (0x000276f4) grid_highlight_pane_cp70

0x4cec,	// (0x00023c57) set_content_pane_g1

0xd733,	// (0x0002c69e) status_small_volume_pane

0x2c14,	// (0x00021b7f) status_small_volume_pane_g1

0x2c1c,	// (0x00021b87) volume_small2_pane

0x2c25,	// (0x00021b90) volume_small2_pane_g1

0x2c2e,	// (0x00021b99) volume_small2_pane_g2

0x2c37,	// (0x00021ba2) volume_small2_pane_g3

0x2c40,	// (0x00021bab) volume_small2_pane_g4

0x2c49,	// (0x00021bb4) volume_small2_pane_g5

0x2c52,	// (0x00021bbd) volume_small2_pane_g6

0x2c5b,	// (0x00021bc6) volume_small2_pane_g7

0x2c64,	// (0x00021bcf) volume_small2_pane_g8

0x2c6d,	// (0x00021bd8) volume_small2_pane_g9

0x2c76,	// (0x00021be1) volume_small2_pane_g10

0x0009,

0xfc02,	// (0x0002eb6d) volume_small2_pane_g

0x8026,	// (0x00026f91) fep_vkb_top_text_pane_g1_ParamLimits

0xe3d7,	// (0x0002d342) fep_vkb_top_text_pane_t1_ParamLimits

0x82dd,	// (0x00027248) popup_preview_fixed_window_g3_ParamLimits

0x82dd,	// (0x00027248) popup_preview_fixed_window_g3

0xc9f2,	// (0x0002b95d) popup_toolbar_trans_pane

0xddee,	// (0x0002cd59) aid_height_set_list_ParamLimits

0x6a46,	// (0x000259b1) aid_size_parent_ParamLimits

0x5161,	// (0x000240cc) list_highlight_pane_cp2_ParamLimits

0x4cec,	// (0x00023c57) set_content_pane_g1_ParamLimits

0xbdd8,	// (0x0002ad43) list_single_image_pane_ParamLimits

0xbdd8,	// (0x0002ad43) list_single_image_pane

0xe52c,	// (0x0002d497) aid_size_cell_image_ParamLimits

0xe52c,	// (0x0002d497) aid_size_cell_image

0xe539,	// (0x0002d4a4) grid_single_image_pane_ParamLimits

0xe539,	// (0x0002d4a4) grid_single_image_pane

0x583d,	// (0x000247a8) list_single_image_pane_g1_ParamLimits

0x583d,	// (0x000247a8) list_single_image_pane_g1

0x87ae,	// (0x00027719) list_single_image_pane_g2_ParamLimits

0x87ae,	// (0x00027719) list_single_image_pane_g2

0x0001,

0xfc17,	// (0x0002eb82) list_single_image_pane_g_ParamLimits

0xfc17,	// (0x0002eb82) list_single_image_pane_g

0x87c2,	// (0x0002772d) list_single_image_pane_t1_ParamLimits

0x87c2,	// (0x0002772d) list_single_image_pane_t1

0xe547,	// (0x0002d4b2) cell_image_list_pane_ParamLimits

0xe547,	// (0x0002d4b2) cell_image_list_pane

0xe55d,	// (0x0002d4c8) cell_image_list_pane_g1

0xe566,	// (0x0002d4d1) cell_image_list_pane_g2

0x0001,

0xfc1c,	// (0x0002eb87) cell_image_list_pane_g

0x87fe,	// (0x00027769) aid_size_cell_tb_trans_pane

0x4184,	// (0x000230ef) bg_tb_trans_pane

0x8810,	// (0x0002777b) grid_tb_trans_pane

0x566b,	// (0x000245d6) bg_tb_trans_pane_g1

0x5673,	// (0x000245de) bg_tb_trans_pane_g2

0x567b,	// (0x000245e6) bg_tb_trans_pane_g3

0x5683,	// (0x000245ee) bg_tb_trans_pane_g4

0x568b,	// (0x000245f6) bg_tb_trans_pane_g5

0x56a3,	// (0x0002460e) bg_tb_trans_pane_g6

0x56ab,	// (0x00024616) bg_tb_trans_pane_g7

0x5693,	// (0x000245fe) bg_tb_trans_pane_g8

0x569b,	// (0x00024606) bg_tb_trans_pane_g9

0x0008,

0xfc21,	// (0x0002eb8c) bg_tb_trans_pane_g

0x8824,	// (0x0002778f) cell_toolbar_trans_pane_ParamLimits

0x8824,	// (0x0002778f) cell_toolbar_trans_pane

0x7c60,	// (0x00026bcb) cell_toolbar_trans_pane_g1

0xe1c3,	// (0x0002d12e) list_form2_midp_pane_t1

0xe1d1,	// (0x0002d13c) list_form2_midp_pane_t2

0x0001,

0xfaca,	// (0x0002ea35) list_form2_midp_pane_t

0x7860,	// (0x000267cb) scroll_pane_cp51_ParamLimits

0x7a1c,	// (0x00026987) form2_midp_wait_pane_g1

0x7a25,	// (0x00026990) form2_midp_wait_pane_g2

0x7a2e,	// (0x00026999) form2_midp_wait_pane_g3

0x0002,

0xfadf,	// (0x0002ea4a) form2_midp_wait_pane_g

0x3915,	// (0x00022880) list_highlight_pane_cp21_ParamLimits

0x7a7a,	// (0x000269e5) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7a89,	// (0x000269f4) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6bfe,	// (0x00025b69) list_single_2graphic_im_pane_ParamLimits

0x6bfe,	// (0x00025b69) list_single_2graphic_im_pane

0xe56f,	// (0x0002d4da) list_single_2graphic_im_pane_g1_ParamLimits

0xe56f,	// (0x0002d4da) list_single_2graphic_im_pane_g1

0xe580,	// (0x0002d4eb) list_single_2graphic_im_pane_g2_ParamLimits

0xe580,	// (0x0002d4eb) list_single_2graphic_im_pane_g2

0xe58c,	// (0x0002d4f7) list_single_2graphic_im_pane_g3_ParamLimits

0xe58c,	// (0x0002d4f7) list_single_2graphic_im_pane_g3

0x0003,

0xfc34,	// (0x0002eb9f) list_single_2graphic_im_pane_g_ParamLimits

0xfc34,	// (0x0002eb9f) list_single_2graphic_im_pane_g

0xe5a0,	// (0x0002d50b) list_single_2graphic_im_pane_t1_ParamLimits

0xe5a0,	// (0x0002d50b) list_single_2graphic_im_pane_t1

0x82e9,	// (0x00027254) list_single_graphic_2heading_pane_fp_ParamLimits

0x82e9,	// (0x00027254) list_single_graphic_2heading_pane_fp

0x1138,	// (0x000200a3) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x1138,	// (0x000200a3) list_single_graphic_2heading_pane_fp_g1

0x82fe,	// (0x00027269) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x82fe,	// (0x00027269) list_single_graphic_2heading_pane_fp_g2

0x1101,	// (0x0002006c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x1101,	// (0x0002006c) list_single_graphic_2heading_pane_fp_g3

0x110d,	// (0x00020078) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x110d,	// (0x00020078) list_single_graphic_2heading_pane_fp_g4

0x830a,	// (0x00027275) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x830a,	// (0x00027275) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb62,	// (0x0002eacd) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb62,	// (0x0002eacd) list_single_graphic_2heading_pane_fp_g

0x1311,	// (0x0002027c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x1311,	// (0x0002027c) list_single_graphic_2heading_pane_fp_t1

0x1170,	// (0x000200db) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x1170,	// (0x000200db) list_single_graphic_2heading_pane_fp_t2

0x1327,	// (0x00020292) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x1327,	// (0x00020292) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3d,	// (0x0002eba8) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3d,	// (0x0002eba8) list_single_graphic_2heading_pane_fp_t

0x7cec,	// (0x00026c57) fep_hwr_write_pane_g5_ParamLimits

0x7cec,	// (0x00026c57) fep_hwr_write_pane_g5

0x7cf8,	// (0x00026c63) fep_hwr_write_pane_g6_ParamLimits

0x7cf8,	// (0x00026c63) fep_hwr_write_pane_g6

0x857a,	// (0x000274e5) eswt_shell_pane_ParamLimits

0x56df,	// (0x0002464a) bg_popup_window_pane_cp18_ParamLimits

0x698e,	// (0x000258f9) heading_pane_cp70

0x86a4,	// (0x0002760f) popup_eswt_tasktip_window_t1_ParamLimits

0xd7d9,	// (0x0002c744) aid_touch_tab_arrow_left

0xd7ef,	// (0x0002c75a) aid_touch_tab_arrow_right

0xd102,	// (0x0002c06d) title_pane_g3_ParamLimits

0xd102,	// (0x0002c06d) title_pane_g3

0x4143,	// (0x000230ae) set_value_pane_g1

0xc9f2,	// (0x0002b95d) popup_toolbar_trans_pane_ParamLimits

0x87fe,	// (0x00027769) aid_size_cell_tb_trans_pane_ParamLimits

0x4184,	// (0x000230ef) bg_tb_trans_pane_ParamLimits

0x8810,	// (0x0002777b) grid_tb_trans_pane_ParamLimits

0x3b9e,	// (0x00022b09) cont_note_pane_ParamLimits

0x3b9e,	// (0x00022b09) cont_note_pane

0x3ef5,	// (0x00022e60) cont_snote2_single_text_pane_ParamLimits

0x3ef5,	// (0x00022e60) cont_snote2_single_text_pane

0x3ef5,	// (0x00022e60) cont_snote2_single_graphic_pane_ParamLimits

0x3ef5,	// (0x00022e60) cont_snote2_single_graphic_pane

0x5cec,	// (0x00024c57) cont_note_wait_pane_ParamLimits

0x5cec,	// (0x00024c57) cont_note_wait_pane

0x5cec,	// (0x00024c57) cont_note_image_pane_ParamLimits

0x5cec,	// (0x00024c57) cont_note_image_pane

0x88b8,	// (0x00027823) popup_note2_window_g1_ParamLimits

0x88b8,	// (0x00027823) popup_note2_window_g1

0x88e9,	// (0x00027854) popup_note2_window_t1_ParamLimits

0x88e9,	// (0x00027854) popup_note2_window_t1

0x892e,	// (0x00027899) popup_note2_window_t2_ParamLimits

0x892e,	// (0x00027899) popup_note2_window_t2

0x8973,	// (0x000278de) popup_note2_window_t3_ParamLimits

0x8973,	// (0x000278de) popup_note2_window_t3

0x89b8,	// (0x00027923) popup_note2_window_t4_ParamLimits

0x89b8,	// (0x00027923) popup_note2_window_t4

0x3c22,	// (0x00022b8d) popup_note2_window_t5_ParamLimits

0x3c22,	// (0x00022b8d) popup_note2_window_t5

0x0004,

0xfc49,	// (0x0002ebb4) popup_note2_window_t_ParamLimits

0xfc49,	// (0x0002ebb4) popup_note2_window_t

0x89e7,	// (0x00027952) popup_note2_image_window_g1_ParamLimits

0x89e7,	// (0x00027952) popup_note2_image_window_g1

0x89f3,	// (0x0002795e) popup_note2_image_window_g2_ParamLimits

0x89f3,	// (0x0002795e) popup_note2_image_window_g2

0x0001,

0xfc54,	// (0x0002ebbf) popup_note2_image_window_g_ParamLimits

0xfc54,	// (0x0002ebbf) popup_note2_image_window_g

0x8a05,	// (0x00027970) popup_note2_image_window_t1_ParamLimits

0x8a05,	// (0x00027970) popup_note2_image_window_t1

0x8a1d,	// (0x00027988) popup_note2_image_window_t2_ParamLimits

0x8a1d,	// (0x00027988) popup_note2_image_window_t2

0x8a35,	// (0x000279a0) popup_note2_image_window_t3_ParamLimits

0x8a35,	// (0x000279a0) popup_note2_image_window_t3

0x0002,

0xfc59,	// (0x0002ebc4) popup_note2_image_window_t_ParamLimits

0xfc59,	// (0x0002ebc4) popup_note2_image_window_t

0x5cfa,	// (0x00024c65) popup_note2_wait_window_g1_ParamLimits

0x5cfa,	// (0x00024c65) popup_note2_wait_window_g1

0x8a51,	// (0x000279bc) popup_note2_wait_window_g2_ParamLimits

0x8a51,	// (0x000279bc) popup_note2_wait_window_g2

0x5d12,	// (0x00024c7d) popup_note2_wait_window_g3_ParamLimits

0x5d12,	// (0x00024c7d) popup_note2_wait_window_g3

0x0002,

0xfc60,	// (0x0002ebcb) popup_note2_wait_window_g_ParamLimits

0xfc60,	// (0x0002ebcb) popup_note2_wait_window_g

0x8a5d,	// (0x000279c8) popup_note2_wait_window_t1_ParamLimits

0x8a5d,	// (0x000279c8) popup_note2_wait_window_t1

0x8a7b,	// (0x000279e6) popup_note2_wait_window_t2_ParamLimits

0x8a7b,	// (0x000279e6) popup_note2_wait_window_t2

0x8a99,	// (0x00027a04) popup_note2_wait_window_t3_ParamLimits

0x8a99,	// (0x00027a04) popup_note2_wait_window_t3

0x8aab,	// (0x00027a16) popup_note2_wait_window_t4_ParamLimits

0x8aab,	// (0x00027a16) popup_note2_wait_window_t4

0x0003,

0xfc67,	// (0x0002ebd2) popup_note2_wait_window_t_ParamLimits

0xfc67,	// (0x0002ebd2) popup_note2_wait_window_t

0x8abd,	// (0x00027a28) wait_bar2_pane_ParamLimits

0x8abd,	// (0x00027a28) wait_bar2_pane

0x8ad5,	// (0x00027a40) popup_snote2_single_text_window_g1_ParamLimits

0x8ad5,	// (0x00027a40) popup_snote2_single_text_window_g1

0x8afd,	// (0x00027a68) popup_snote2_single_text_window_t1_ParamLimits

0x8afd,	// (0x00027a68) popup_snote2_single_text_window_t1

0x8b49,	// (0x00027ab4) popup_snote2_single_text_window_t2_ParamLimits

0x8b49,	// (0x00027ab4) popup_snote2_single_text_window_t2

0x8b95,	// (0x00027b00) popup_snote2_single_text_window_t3_ParamLimits

0x8b95,	// (0x00027b00) popup_snote2_single_text_window_t3

0x8bd6,	// (0x00027b41) popup_snote2_single_text_window_t4_ParamLimits

0x8bd6,	// (0x00027b41) popup_snote2_single_text_window_t4

0x8c0c,	// (0x00027b77) popup_snote2_single_text_window_t5_ParamLimits

0x8c0c,	// (0x00027b77) popup_snote2_single_text_window_t5

0x0004,

0xfc70,	// (0x0002ebdb) popup_snote2_single_text_window_t_ParamLimits

0xfc70,	// (0x0002ebdb) popup_snote2_single_text_window_t

0x8c37,	// (0x00027ba2) popup_snote2_single_graphic_window_g1_ParamLimits

0x8c37,	// (0x00027ba2) popup_snote2_single_graphic_window_g1

0x8c5f,	// (0x00027bca) popup_snote2_single_graphic_window_g2_ParamLimits

0x8c5f,	// (0x00027bca) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7b,	// (0x0002ebe6) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7b,	// (0x0002ebe6) popup_snote2_single_graphic_window_g

0x8c87,	// (0x00027bf2) popup_snote2_single_graphic_window_t1_ParamLimits

0x8c87,	// (0x00027bf2) popup_snote2_single_graphic_window_t1

0x8cd3,	// (0x00027c3e) popup_snote2_single_graphic_window_t2_ParamLimits

0x8cd3,	// (0x00027c3e) popup_snote2_single_graphic_window_t2

0x8b95,	// (0x00027b00) popup_snote2_single_graphic_window_t3_ParamLimits

0x8b95,	// (0x00027b00) popup_snote2_single_graphic_window_t3

0x8bd6,	// (0x00027b41) popup_snote2_single_graphic_window_t4_ParamLimits

0x8bd6,	// (0x00027b41) popup_snote2_single_graphic_window_t4

0x8c0c,	// (0x00027b77) popup_snote2_single_graphic_window_t5_ParamLimits

0x8c0c,	// (0x00027b77) popup_snote2_single_graphic_window_t5

0x0004,

0xfc80,	// (0x0002ebeb) popup_snote2_single_graphic_window_t_ParamLimits

0xfc80,	// (0x0002ebeb) popup_snote2_single_graphic_window_t

0x7721,	// (0x0002668c) clock_nsta_pane_cp2_t1

0x7721,	// (0x0002668c) clock_nsta_pane_cp2_t2

0x0001,

0xfaa0,	// (0x0002ea0b) clock_nsta_pane_cp2_t

0x08b7,	// (0x0001f822) form_field_data_wide_pane_g1_ParamLimits

0x4192,	// (0x000230fd) form_field_data_wide_pane_g2_ParamLimits

0x4192,	// (0x000230fd) form_field_data_wide_pane_g2

0x419e,	// (0x00023109) form_field_data_wide_pane_g3_ParamLimits

0x419e,	// (0x00023109) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0002e5e6) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0002e5e6) form_field_data_wide_pane_g

0xe106,	// (0x0002d071) grid_touch_3_pane_ParamLimits

0xe106,	// (0x0002d071) grid_touch_3_pane

0xe5d1,	// (0x0002d53c) cell_touch_3_pane_ParamLimits

0xe5d1,	// (0x0002d53c) cell_touch_3_pane

0x7c60,	// (0x00026bcb) cell_touch_3_pane_g1

0x7c60,	// (0x00026bcb) cell_touch_3_pane_g2

0x0001,

0xfb25,	// (0x0002ea90) cell_touch_3_pane_g

0x3c54,	// (0x00022bbf) cont_query_data_pane

0x3c5c,	// (0x00022bc7) cont_query_data_pane_cp1

0x8d4d,	// (0x00027cb8) button_value_adjust_pane_cp7

0x8d55,	// (0x00027cc0) query_popup_pane_cp3

0x48f4,	// (0x0002385f) bg_popup_sub_pane_cp22_ParamLimits

0x1b54,	// (0x00020abf) navi_navi_volume_pane_cp2

0x1b6f,	// (0x00020ada) popup_side_volume_key_window_g2

0x1b7e,	// (0x00020ae9) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0002e67c) popup_side_volume_key_window_g

0x1b9b,	// (0x00020b06) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0002e683) popup_side_volume_key_window_t

0x4bab,	// (0x00023b16) popup_side_volume_key_window_ParamLimits

0xb8df,	// (0x0002a84a) list_double_graphic_pane_g4_ParamLimits

0xb8df,	// (0x0002a84a) list_double_graphic_pane_g4

0xdf67,	// (0x0002ced2) list_single_2heading_msg_pane_ParamLimits

0xdf67,	// (0x0002ced2) list_single_2heading_msg_pane

0xbe62,	// (0x0002adcd) list_single_2heading_msg_pane_g1_ParamLimits

0xbe62,	// (0x0002adcd) list_single_2heading_msg_pane_g1

0xbe6e,	// (0x0002add9) list_single_2heading_msg_pane_g2_ParamLimits

0xbe6e,	// (0x0002add9) list_single_2heading_msg_pane_g2

0xbe81,	// (0x0002adec) list_single_2heading_msg_pane_g3_ParamLimits

0xbe81,	// (0x0002adec) list_single_2heading_msg_pane_g3

0xbe8d,	// (0x0002adf8) list_single_2heading_msg_pane_g4_ParamLimits

0xbe8d,	// (0x0002adf8) list_single_2heading_msg_pane_g4

0x0003,

0xfc8b,	// (0x0002ebf6) list_single_2heading_msg_pane_g_ParamLimits

0xfc8b,	// (0x0002ebf6) list_single_2heading_msg_pane_g

0xbea5,	// (0x0002ae10) list_single_2heading_msg_pane_t1_ParamLimits

0xbea5,	// (0x0002ae10) list_single_2heading_msg_pane_t1

0xbecd,	// (0x0002ae38) list_single_2heading_msg_pane_t2_ParamLimits

0xbecd,	// (0x0002ae38) list_single_2heading_msg_pane_t2

0xbf38,	// (0x0002aea3) list_single_2heading_msg_pane_t3_ParamLimits

0xbf38,	// (0x0002aea3) list_single_2heading_msg_pane_t3

0x140c,	// (0x00020377) list_single_2heading_msg_pane_t4_ParamLimits

0x140c,	// (0x00020377) list_single_2heading_msg_pane_t4

0x0003,

0xfc94,	// (0x0002ebff) list_single_2heading_msg_pane_t_ParamLimits

0xfc94,	// (0x0002ebff) list_single_2heading_msg_pane_t

0x3869,	// (0x000227d4) title_pane_g4_ParamLimits

0x3869,	// (0x000227d4) title_pane_g4

0x1963,	// (0x000208ce) title_pane_stacon_g3_ParamLimits

0x1963,	// (0x000208ce) title_pane_stacon_g3

0x887b,	// (0x000277e6) list_single_2graphic_im_pane_g4_ParamLimits

0x887b,	// (0x000277e6) list_single_2graphic_im_pane_g4

0x674b,	// (0x000256b6) popup_side_volume_key_window_cp

0x6f66,	// (0x00025ed1) main_idle_act2_pane_t1

0x24de,	// (0x00021449) toolbar_button_pane_g10

0xd40d,	// (0x0002c378) popup_toolbar_window_cp1

0x7712,	// (0x0002667d) clock_nsta_pane_cp_t1

0x7712,	// (0x0002667d) clock_nsta_pane_cp_t2

0x0001,

0xfa9b,	// (0x0002ea06) clock_nsta_pane_cp_t

0x1b54,	// (0x00020abf) navi_navi_volume_pane_cp2_ParamLimits

0x1b63,	// (0x00020ace) popup_side_volume_key_window_g1_ParamLimits

0x1b6f,	// (0x00020ada) popup_side_volume_key_window_g2_ParamLimits

0x1b7e,	// (0x00020ae9) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0002e67c) popup_side_volume_key_window_g_ParamLimits

0x2924,	// (0x0002188f) fep_hwr_aid_pane

0xd984,	// (0x0002c8ef) bg_fep_hwr_top_pane_g4_ParamLimits

0x7cbc,	// (0x00026c27) fep_hwr_top_pane_g1_ParamLimits

0x7cce,	// (0x00026c39) fep_hwr_top_pane_g2_ParamLimits

0x29dd,	// (0x00021948) fep_hwr_top_pane_g3_ParamLimits

0xfaf0,	// (0x0002ea5b) fep_hwr_top_pane_g_ParamLimits

0x29f2,	// (0x0002195d) fep_hwr_top_text_pane_ParamLimits

0x650e,	// (0x00025479) aid_touch_tab_arrow_arrow_2

0x6517,	// (0x00025482) aid_touch_tab_arrow_left_2

0x2938,	// (0x000218a3) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x296f,	// (0x000218da) fep_hwr_prediction_pane

0x7e2e,	// (0x00026d99) fep_vkb_prediction_pane

0xe3b7,	// (0x0002d322) fep_vkb_side_pane_g3_ParamLimits

0xe3b7,	// (0x0002d322) fep_vkb_side_pane_g3

0x7ede,	// (0x00026e49) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x835e,	// (0x000272c9) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x836b,	// (0x000272d6) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9a,	// (0x0002eb05) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8d7a,	// (0x00027ce5) fep_hwr_prediction_pane_g1

0x2c7f,	// (0x00021bea) fep_hwr_prediction_pane_g2

0x2c87,	// (0x00021bf2) fep_hwr_prediction_pane_g3

0x2c8f,	// (0x00021bfa) fep_hwr_prediction_pane_g4

0x0003,

0xfc9d,	// (0x0002ec08) fep_hwr_prediction_pane_g

0x8d7a,	// (0x00027ce5) fep_vkb_prediction_pane_g1

0x8d84,	// (0x00027cef) fep_vkb_prediction_pane_g2

0x8d8c,	// (0x00027cf7) fep_vkb_prediction_pane_g3

0x8d94,	// (0x00027cff) fep_vkb_prediction_pane_g4

0x0003,

0xfca6,	// (0x0002ec11) fep_vkb_prediction_pane_g

0x27a4,	// (0x0002170f) slider_set_pane_g3

0x27b8,	// (0x00021723) slider_set_pane_g4

0x27d0,	// (0x0002173b) slider_set_pane_g5

0x27a4,	// (0x0002170f) slider_set_pane_g6

0x27e6,	// (0x00021751) slider_set_pane_g7

0x6bab,	// (0x00025b16) slider_form_pane_g3

0x6bb4,	// (0x00025b1f) slider_form_pane_g4

0x6bbc,	// (0x00025b27) slider_form_pane_g5

0x6bab,	// (0x00025b16) slider_form_pane_g6

0xdf39,	// (0x0002cea4) slider_form_pane_g7

0x7210,	// (0x0002617b) slider_set_pane_vc_g3

0x7219,	// (0x00026184) slider_set_pane_vc_g4

0x7222,	// (0x0002618d) slider_set_pane_vc_g5

0x7210,	// (0x0002617b) slider_set_pane_vc_g6

0x722b,	// (0x00026196) slider_set_pane_vc_g7

0x73f7,	// (0x00026362) slider_form_pane_vc_g1

0x7400,	// (0x0002636b) slider_form_pane_vc_g2

0x7409,	// (0x00026374) slider_form_pane_vc_g3

0x73f7,	// (0x00026362) slider_form_pane_vc_g4

0x7412,	// (0x0002637d) slider_form_pane_vc_g5

0x0004,

0xfa6d,	// (0x0002e9d8) slider_form_pane_vc_g

0x3821,	// (0x0002278c) main_idle_act3_pane

0x8d9c,	// (0x00027d07) ai3_links_pane

0xe619,	// (0x0002d584) popup_ai3_data_window_ParamLimits

0xe619,	// (0x0002d584) popup_ai3_data_window

0x3821,	// (0x0002278c) grid_ai3_links_pane

0xe633,	// (0x0002d59e) cell_ai3_links_pane_ParamLimits

0xe633,	// (0x0002d59e) cell_ai3_links_pane

0x8dd7,	// (0x00027d42) bg_popup_sub_pane_cp11

0x8de4,	// (0x00027d4f) cell_ai3_links_pane_g1

0x3821,	// (0x0002278c) bg_popup_sub_pane_cp12

0x8e09,	// (0x00027d74) heading_ai3_data_pane

0x8e11,	// (0x00027d7c) list_ai3_gene_pane

0x8e1d,	// (0x00027d88) popup_ai3_data_window_g1

0x8e25,	// (0x00027d90) heading_ai3_data_pane_g1

0x8e2d,	// (0x00027d98) heading_ai3_data_pane_t1

0x8e3b,	// (0x00027da6) list_double_ai3_gene_pane_ParamLimits

0x8e3b,	// (0x00027da6) list_double_ai3_gene_pane

0x8e48,	// (0x00027db3) list_single_ai3_gene_pane_ParamLimits

0x8e48,	// (0x00027db3) list_single_ai3_gene_pane

0x7c25,	// (0x00026b90) list_highlight_pane_cp7_ParamLimits

0x7c25,	// (0x00026b90) list_highlight_pane_cp7

0x8e55,	// (0x00027dc0) list_single_a13_gene_pane_t1_ParamLimits

0x8e55,	// (0x00027dc0) list_single_a13_gene_pane_t1

0x8e6c,	// (0x00027dd7) list_single_ai3_gene_pane_g1

0x8e75,	// (0x00027de0) list_single_ai3_gene_pane_g2

0x0001,

0xfcaf,	// (0x0002ec1a) list_single_ai3_gene_pane_g

0x8e7d,	// (0x00027de8) list_double_ai3_gene_pane_g1_ParamLimits

0x8e7d,	// (0x00027de8) list_double_ai3_gene_pane_g1

0x8e89,	// (0x00027df4) list_double_ai3_gene_pane_t1_ParamLimits

0x8e89,	// (0x00027df4) list_double_ai3_gene_pane_t1

0x8ea5,	// (0x00027e10) list_double_ai3_gene_pane_t2_ParamLimits

0x8ea5,	// (0x00027e10) list_double_ai3_gene_pane_t2

0x8ebb,	// (0x00027e26) list_double_ai3_gene_pane_t3_ParamLimits

0x8ebb,	// (0x00027e26) list_double_ai3_gene_pane_t3

0x0002,

0xfcb4,	// (0x0002ec1f) list_double_ai3_gene_pane_t_ParamLimits

0xfcb4,	// (0x0002ec1f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x133d,	// (0x000202a8) aid_size_min_col_2

0xe603,	// (0x0002d56e) aid_size_min_msg_ParamLimits

0xe603,	// (0x0002d56e) aid_size_min_msg

0xe3cb,	// (0x0002d336) fep_vkb_top_text_pane_g2_ParamLimits

0xe3cb,	// (0x0002d336) fep_vkb_top_text_pane_g2

0x0001,

0xfb20,	// (0x0002ea8b) fep_vkb_top_text_pane_g_ParamLimits

0xfb20,	// (0x0002ea8b) fep_vkb_top_text_pane_g

0x3821,	// (0x0002278c) main_hc_apps_shell_pane

0x8ed8,	// (0x00027e43) grid_hc_apps_pane_ParamLimits

0x8ed8,	// (0x00027e43) grid_hc_apps_pane

0x8ee7,	// (0x00027e52) list_hc_apps_pane

0x8eef,	// (0x00027e5a) scroll_pane_cp37_ParamLimits

0x8eef,	// (0x00027e5a) scroll_pane_cp37

0xe64d,	// (0x0002d5b8) cell_hc_apps_pane_ParamLimits

0xe64d,	// (0x0002d5b8) cell_hc_apps_pane

0xe70b,	// (0x0002d676) cell_hc_apps_pane_g1_ParamLimits

0xe70b,	// (0x0002d676) cell_hc_apps_pane_g1

0x8fda,	// (0x00027f45) cell_hc_apps_pane_g2_ParamLimits

0x8fda,	// (0x00027f45) cell_hc_apps_pane_g2

0x8ff6,	// (0x00027f61) cell_hc_apps_pane_g3_ParamLimits

0x8ff6,	// (0x00027f61) cell_hc_apps_pane_g3

0x0002,

0xfcbb,	// (0x0002ec26) cell_hc_apps_pane_g_ParamLimits

0xfcbb,	// (0x0002ec26) cell_hc_apps_pane_g

0xe738,	// (0x0002d6a3) cell_hc_apps_pane_t1_ParamLimits

0xe738,	// (0x0002d6a3) cell_hc_apps_pane_t1

0x3b9e,	// (0x00022b09) grid_highlight_pane_cp10_ParamLimits

0x3b9e,	// (0x00022b09) grid_highlight_pane_cp10

0xe776,	// (0x0002d6e1) list_single_hc_apps_pane_ParamLimits

0xe776,	// (0x0002d6e1) list_single_hc_apps_pane

0xe7a3,	// (0x0002d70e) list_single_hc_apps_pane_g1

0xbfa6,	// (0x0002af11) list_single_hc_apps_pane_g2

0x0001,

0xfcc2,	// (0x0002ec2d) list_single_hc_apps_pane_g

0xbfbf,	// (0x0002af2a) list_single_hc_apps_pane_g2_copy1

0xbfdb,	// (0x0002af46) list_single_hc_apps_pane_t1

0x3915,	// (0x00022880) bg_set_opt_pane_cp_ParamLimits

0x188b,	// (0x000207f6) setting_slider_pane_t1_ParamLimits

0x18a4,	// (0x0002080f) setting_slider_pane_t2_ParamLimits

0x18be,	// (0x00020829) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002e4c9) setting_slider_pane_t_ParamLimits

0x18d6,	// (0x00020841) slider_set_pane_ParamLimits

0x1dfd,	// (0x00020d68) control_pane_g5_ParamLimits

0x1dfd,	// (0x00020d68) control_pane_g5

0x69fa,	// (0x00025965) slider_set_pane_g1_ParamLimits

0x2798,	// (0x00021703) slider_set_pane_g2_ParamLimits

0x27a4,	// (0x0002170f) slider_set_pane_g3_ParamLimits

0x27b8,	// (0x00021723) slider_set_pane_g4_ParamLimits

0x27d0,	// (0x0002173b) slider_set_pane_g5_ParamLimits

0x27a4,	// (0x0002170f) slider_set_pane_g6_ParamLimits

0x27e6,	// (0x00021751) slider_set_pane_g7_ParamLimits

0xf958,	// (0x0002e8c3) slider_set_pane_g_ParamLimits

0x4c97,	// (0x00023c02) navi_icon_text_pane_ParamLimits

0xd7a2,	// (0x0002c70d) aid_fill_nsta_2_ParamLimits

0xd7d9,	// (0x0002c744) aid_touch_tab_arrow_left_ParamLimits

0xd7ef,	// (0x0002c75a) aid_touch_tab_arrow_right_ParamLimits

0xd88a,	// (0x0002c7f5) clock_nsta_pane_ParamLimits

0x64f0,	// (0x0002545b) navi_icon_pane_g1_ParamLimits

0x64fc,	// (0x00025467) navi_text_pane_t1_ParamLimits

0x781e,	// (0x00026789) navi_icon_text_pane_g1_ParamLimits

0x782a,	// (0x00026795) navi_icon_text_pane_t1_ParamLimits

0xe7a3,	// (0x0002d70e) list_single_hc_apps_pane_g1_ParamLimits

0xbfa6,	// (0x0002af11) list_single_hc_apps_pane_g2_ParamLimits

0xfcc2,	// (0x0002ec2d) list_single_hc_apps_pane_g_ParamLimits

0xbfbf,	// (0x0002af2a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbfdb,	// (0x0002af46) list_single_hc_apps_pane_t1_ParamLimits

0xc13f,	// (0x0002b0aa) popup_toolbar2_fixed_window_ParamLimits

0xc13f,	// (0x0002b0aa) popup_toolbar2_fixed_window

0xc9e8,	// (0x0002b953) popup_toolbar2_float_window

0x3821,	// (0x0002278c) bg_popup_sub_pane_cp27

0x90cd,	// (0x00028038) grid_toolbar2_float_pane

0x3821,	// (0x0002278c) bg_popup_sub_pane_cp26

0x90cd,	// (0x00028038) grid_toolbar2_fixed_pane

0xe7bc,	// (0x0002d727) cell_toolbar2_fixed_pane_ParamLimits

0xe7bc,	// (0x0002d727) cell_toolbar2_fixed_pane

0xe7d6,	// (0x0002d741) cell_toolbar2_fixed_pane_g1

0x90ee,	// (0x00028059) toolbar2_fixed_button_pane

0x566b,	// (0x000245d6) toolbar2_fixed_button_pane_g1

0x5673,	// (0x000245de) toolbar2_fixed_button_pane_g2

0x567b,	// (0x000245e6) toolbar2_fixed_button_pane_g3

0x5683,	// (0x000245ee) toolbar2_fixed_button_pane_g4

0x568b,	// (0x000245f6) toolbar2_fixed_button_pane_g5

0x5693,	// (0x000245fe) toolbar2_fixed_button_pane_g6

0x569b,	// (0x00024606) toolbar2_fixed_button_pane_g7

0x56a3,	// (0x0002460e) toolbar2_fixed_button_pane_g8

0x56ab,	// (0x00024616) toolbar2_fixed_button_pane_g9

0x0008,

0xf85a,	// (0x0002e7c5) toolbar2_fixed_button_pane_g

0x90f6,	// (0x00028061) cell_toolbar2_float_pane_ParamLimits

0x90f6,	// (0x00028061) cell_toolbar2_float_pane

0x9107,	// (0x00028072) cell_toolbar2_float_pane_g1

0x90ee,	// (0x00028059) toolbar2_fixed_button_pane_cp

0xe2a5,	// (0x0002d210) fep_vkb_accented_list_pane_ParamLimits

0xe2a5,	// (0x0002d210) fep_vkb_accented_list_pane

0x2b40,	// (0x00021aab) bg_popup_fep_shadow_pane_g9

0x4e17,	// (0x00023d82) bg_popup_fep_shadow_pane_cp3

0x42d8,	// (0x00023243) list_accented_list_pane

0x9110,	// (0x0002807b) list_single_accented_list_pane_ParamLimits

0x9110,	// (0x0002807b) list_single_accented_list_pane

0x4e17,	// (0x00023d82) list_highlight_pane_cp10

0x9121,	// (0x0002808c) list_single_accented_list_pane_t1

0xc912,	// (0x0002b87d) popup_slider_window_ParamLimits

0xc912,	// (0x0002b87d) popup_slider_window

0x8d5d,	// (0x00027cc8) aid_indentation_list_msg

0xe8cf,	// (0x0002d83a) bg_popup_window_pane_cp19

0x9245,	// (0x000281b0) popup_slider_window_g1

0x9261,	// (0x000281cc) popup_slider_window_g2

0x927d,	// (0x000281e8) popup_slider_window_g3

0x0005,

0xfcc7,	// (0x0002ec32) popup_slider_window_g

0x92d9,	// (0x00028244) popup_slider_window_t1

0x934d,	// (0x000282b8) small_volume_slider_vertical_pane

0x7c60,	// (0x00026bcb) small_volume_slider_vertical_pane_g1

0x7c60,	// (0x00026bcb) small_volume_slider_vertical_pane_g2

0x9369,	// (0x000282d4) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd9,	// (0x0002ec44) small_volume_slider_vertical_pane_g

0xc0ad,	// (0x0002b018) area_side_right_pane_ParamLimits

0xc0ad,	// (0x0002b018) area_side_right_pane

0xcb1e,	// (0x0002ba89) aid_size_side_button_ParamLimits

0xcb1e,	// (0x0002ba89) aid_size_side_button

0xcb37,	// (0x0002baa2) grid_sctrl_middle_pane_ParamLimits

0xcb37,	// (0x0002baa2) grid_sctrl_middle_pane

0x2cca,	// (0x00021c35) sctrl_sk_bottom_pane

0x2cdb,	// (0x00021c46) sctrl_sk_top_pane

0x2ced,	// (0x00021c58) aid_touch_sctrl_top

0x3b9e,	// (0x00022b09) bg_sctrl_sk_pane_ParamLimits

0x3b9e,	// (0x00022b09) bg_sctrl_sk_pane

0x2cfa,	// (0x00021c65) sctrl_sk_top_pane_g1

0x2d07,	// (0x00021c72) sctrl_sk_top_pane_t1

0x2ced,	// (0x00021c58) aid_touch_sctrl_bottom

0x3b9e,	// (0x00022b09) bg_sctrl_sk_pane_cp_ParamLimits

0x3b9e,	// (0x00022b09) bg_sctrl_sk_pane_cp

0x2d22,	// (0x00021c8d) sctrl_sk_bottom_pane_g1

0x2d07,	// (0x00021c72) sctrl_sk_bottom_pane_t1

0xcb51,	// (0x0002babc) cell_sctrl_middle_pane_ParamLimits

0xcb51,	// (0x0002babc) cell_sctrl_middle_pane

0xcb62,	// (0x0002bacd) aid_touch_sctrl_middle_ParamLimits

0xcb62,	// (0x0002bacd) aid_touch_sctrl_middle

0xcb6f,	// (0x0002bada) bg_sctrl_middle_pane_ParamLimits

0xcb6f,	// (0x0002bada) bg_sctrl_middle_pane

0x93f1,	// (0x0002835c) cell_sctrl_middle_pane_g1_ParamLimits

0x93f1,	// (0x0002835c) cell_sctrl_middle_pane_g1

0xcb7d,	// (0x0002bae8) cell_sctrl_middle_pane_g2_ParamLimits

0xcb7d,	// (0x0002bae8) cell_sctrl_middle_pane_g2

0x0001,

0xfce5,	// (0x0002ec50) cell_sctrl_middle_pane_g_ParamLimits

0xfce5,	// (0x0002ec50) cell_sctrl_middle_pane_g

0x566b,	// (0x000245d6) bg_sctrl_middle_pane_g1

0x5673,	// (0x000245de) bg_sctrl_middle_pane_g2

0x567b,	// (0x000245e6) bg_sctrl_middle_pane_g3

0x5683,	// (0x000245ee) bg_sctrl_middle_pane_g4

0x568b,	// (0x000245f6) bg_sctrl_middle_pane_g5

0x5693,	// (0x000245fe) bg_sctrl_middle_pane_g6

0x569b,	// (0x00024606) bg_sctrl_middle_pane_g7

0x56a3,	// (0x0002460e) bg_sctrl_middle_pane_g8

0x0007,

0xfcea,	// (0x0002ec55) bg_sctrl_middle_pane_g

0x56ab,	// (0x00024616) bg_sctrl_middle_pane_g8_copy1

0x566b,	// (0x000245d6) bg_sctrl_sk_pane_g1

0x5673,	// (0x000245de) bg_sctrl_sk_pane_g2

0x567b,	// (0x000245e6) bg_sctrl_sk_pane_g3

0x0008,

0xf85a,	// (0x0002e7c5) bg_sctrl_sk_pane_g

0x40b3,	// (0x0002301e) aid_size_touch_scroll_bar

0x5683,	// (0x000245ee) bg_sctrl_sk_pane_g4

0x568b,	// (0x000245f6) bg_sctrl_sk_pane_g5

0x5693,	// (0x000245fe) bg_sctrl_sk_pane_g6

0x569b,	// (0x00024606) bg_sctrl_sk_pane_g7

0x56a3,	// (0x0002460e) bg_sctrl_sk_pane_g8

0x56ab,	// (0x00024616) bg_sctrl_sk_pane_g9

0x1f9b,	// (0x00020f06) popup_fep_china_hwr2_fs_candidate_window

0xc42c,	// (0x0002b397) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc42c,	// (0x0002b397) popup_fep_china_hwr2_fs_control_window

0x7ede,	// (0x00026e49) sctrl_sk_top_pane_g2

0x0001,

0xfce0,	// (0x0002ec4b) sctrl_sk_top_pane_g

0xe987,	// (0x0002d8f2) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe987,	// (0x0002d8f2) aid_fep_china_hwr2_fs_cell

0xe99b,	// (0x0002d906) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe99b,	// (0x0002d906) bg_popup_fep_shadow_pane_cp4

0xe9b2,	// (0x0002d91d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe9b2,	// (0x0002d91d) bg_popup_fep_shadow_pane_cp5

0xe9c4,	// (0x0002d92f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe9c4,	// (0x0002d92f) popup_fep_china_hwr2_fs_control_bar_grid

0xe9d8,	// (0x0002d943) popup_fep_china_hwr2_fs_control_funtion_grid

0x93c5,	// (0x00028330) aid_fep_china_hwr2_fs_candi_cell

0x3821,	// (0x0002278c) bg_popup_fep_shadow_pane_cp6

0x93cf,	// (0x0002833a) popup_fep_china_hwr2_fs_candidate_grid

0xe9e0,	// (0x0002d94b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe9e0,	// (0x0002d94b) cell_fep_china_hwr2_fs_funtion_grid

0x7c60,	// (0x00026bcb) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x93f1,	// (0x0002835c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x93f1,	// (0x0002835c) cell_fep_china_hwr2_fs_funtion_grid_g1

0x93ff,	// (0x0002836a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x93ff,	// (0x0002836a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfb,	// (0x0002ec66) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfb,	// (0x0002ec66) cell_fep_china_hwr2_fs_funtion_grid_g

0xe9f8,	// (0x0002d963) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe9f8,	// (0x0002d963) cell_fep_china_hwr2_fs_funtion_grid_t1

0xea0d,	// (0x0002d978) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xea0d,	// (0x0002d978) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x0131,	// (0x0001f09c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x0131,	// (0x0001f09c) cell_fep_china_hwr2_fs_funtion_grid_t

0x9446,	// (0x000283b1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x944e,	// (0x000283b9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9456,	// (0x000283c1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd00,	// (0x0002ec6b) popup_fep_china_hwr2_fs_control_bar_grid_g

0x945e,	// (0x000283c9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x945e,	// (0x000283c9) cell_fep_china_hwr2_fs_candidate_grid

0x9477,	// (0x000283e2) popup_fep_china_hwr2_fs_candidate_grid_g20

0x947f,	// (0x000283ea) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7c60,	// (0x00026bcb) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7c60,	// (0x00026bcb) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb25,	// (0x0002ea90) cell_fep_china_hwr2_fs_candidate_grid_g

0x9487,	// (0x000283f2) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5261,	// (0x000241cc) clock_nsta_pane_cp_24_ParamLimits

0x5261,	// (0x000241cc) clock_nsta_pane_cp_24

0x52df,	// (0x0002424a) indicator_nsta_pane_cp_24_ParamLimits

0x52df,	// (0x0002424a) indicator_nsta_pane_cp_24

0x636c,	// (0x000252d7) heading_pane_g1

0x0001,

0xf8bf,	// (0x0002e82a) heading_pane_g

0x6daf,	// (0x00025d1a) grid_sct_catagory_button_pane

0x6ddf,	// (0x00025d4a) scroll_pane_cp5_ParamLimits

0x786c,	// (0x000267d7) button_value_adjust_pane_cp5_ParamLimits

0x786c,	// (0x000267d7) button_value_adjust_pane_cp5

0x794b,	// (0x000268b6) form2_midp_time_pane_ParamLimits

0x9495,	// (0x00028400) cell_sct_catagory_button_pane_ParamLimits

0x9495,	// (0x00028400) cell_sct_catagory_button_pane

0x7c25,	// (0x00026b90) bg_button_pane_cp01_ParamLimits

0x7c25,	// (0x00026b90) bg_button_pane_cp01

0x7c60,	// (0x00026bcb) cell_sct_catagory_button_pane_g1

0xc98b,	// (0x0002b8f6) popup_tb_extension_window

0xea29,	// (0x0002d994) aid_size_cell_ext_ParamLimits

0xea29,	// (0x0002d994) aid_size_cell_ext

0x3ef5,	// (0x00022e60) bg_tb_trans_pane_cp1_ParamLimits

0x3ef5,	// (0x00022e60) bg_tb_trans_pane_cp1

0xea4f,	// (0x0002d9ba) grid_tb_ext_pane_ParamLimits

0xea4f,	// (0x0002d9ba) grid_tb_ext_pane

0xea8a,	// (0x0002d9f5) cell_tb_ext_pane_ParamLimits

0xea8a,	// (0x0002d9f5) cell_tb_ext_pane

0xeab2,	// (0x0002da1d) cell_tb_ext_pane_g1_ParamLimits

0xeab2,	// (0x0002da1d) cell_tb_ext_pane_g1

0x9529,	// (0x00028494) cell_tb_ext_pane_t1

0x3b9e,	// (0x00022b09) list_highlight_pane_cp11_ParamLimits

0x3b9e,	// (0x00022b09) list_highlight_pane_cp11

0xc154,	// (0x0002b0bf) popup_uni_indicator_window_ParamLimits

0xc154,	// (0x0002b0bf) popup_uni_indicator_window

0x4184,	// (0x000230ef) bg_popup_sub_pane_cp14

0x9544,	// (0x000284af) list_uniindi_pane

0x9550,	// (0x000284bb) uniindi_top_pane

0x3b9e,	// (0x00022b09) bg_uniindi_top_pane

0x956f,	// (0x000284da) uniindi_top_pane_g1

0x9585,	// (0x000284f0) uniindi_top_pane_g2

0x0003,

0xfd07,	// (0x0002ec72) uniindi_top_pane_g

0x95af,	// (0x0002851a) uniindi_top_pane_t1

0x95d9,	// (0x00028544) list_single_uniindi_pane_ParamLimits

0x95d9,	// (0x00028544) list_single_uniindi_pane

0x7c60,	// (0x00026bcb) bg_uniindi_top_pane_g1

0x95ec,	// (0x00028557) list_single_uniindi_pane_g1

0x95ff,	// (0x0002856a) list_single_uniindi_pane_t1

0x3821,	// (0x0002278c) control_bg_pane

0x9624,	// (0x0002858f) bg_sctrl_sk_pane_cp1

0x962d,	// (0x00028598) bg_sctrl_sk_pane_cp2

0x9636,	// (0x000285a1) control_bg_pane_g1

0x963f,	// (0x000285aa) control_bg_pane_g2

0x0001,

0xfd10,	// (0x0002ec7b) control_bg_pane_g

0x76c7,	// (0x00026632) cell_indicator_nsta_pane_g1_ParamLimits

0xe133,	// (0x0002d09e) cell_indicator_nsta_pane_g2_ParamLimits

0xfa89,	// (0x0002e9f4) cell_indicator_nsta_pane_g_ParamLimits

0x10ee,	// (0x00020059) form2_midp_time_pane_t1_ParamLimits

0x2916,	// (0x00021881) main_idle_act4_pane_ParamLimits

0x2916,	// (0x00021881) main_idle_act4_pane

0xc98b,	// (0x0002b8f6) popup_tb_extension_window_ParamLimits

0xea71,	// (0x0002d9dc) tb_ext_find_pane_ParamLimits

0xea71,	// (0x0002d9dc) tb_ext_find_pane

0x9648,	// (0x000285b3) ai_gene_pane_1_cp1

0x4f5e,	// (0x00023ec9) ai_gene_pane_2_cp1

0x9650,	// (0x000285bb) list_single_idle_plugin_calendar_pane

0x9659,	// (0x000285c4) list_single_idle_plugin_notification_pane

0x9662,	// (0x000285cd) list_single_idle_plugin_player_pane

0xeacf,	// (0x0002da3a) list_single_idle_plugin_shortcut_pane_ParamLimits

0xeacf,	// (0x0002da3a) list_single_idle_plugin_shortcut_pane

0xeaf7,	// (0x0002da62) main_idle_act4_pane_t1

0xeb0d,	// (0x0002da78) main_idle_act4_pane_t2

0x0001,

0x014b,	// (0x0001f0b6) main_idle_act4_pane_t

0xeb23,	// (0x0002da8e) middle_sk_idle_act4_pane_ParamLimits

0xeb23,	// (0x0002da8e) middle_sk_idle_act4_pane

0xeb3f,	// (0x0002daaa) popup_clock_digital_analogue_window_cp2

0xeb67,	// (0x0002dad2) shortcut_wheel_idle_act4_pane_ParamLimits

0xeb67,	// (0x0002dad2) shortcut_wheel_idle_act4_pane

0x7c60,	// (0x00026bcb) shortcut_wheel_idle_act4_pane_g1

0x7c60,	// (0x00026bcb) shortcut_wheel_idle_act4_pane_g2

0x7c60,	// (0x00026bcb) shortcut_wheel_idle_act4_pane_g3

0x7c60,	// (0x00026bcb) shortcut_wheel_idle_act4_pane_g4

0x7c60,	// (0x00026bcb) shortcut_wheel_idle_act4_pane_g5

0x96f5,	// (0x00028660) shortcut_wheel_idle_act4_pane_g6

0x96fd,	// (0x00028668) shortcut_wheel_idle_act4_pane_g7

0x9705,	// (0x00028670) shortcut_wheel_idle_act4_pane_g8

0x970d,	// (0x00028678) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd15,	// (0x0002ec80) shortcut_wheel_idle_act4_pane_g

0xd984,	// (0x0002c8ef) middle_sk_idle_act4_pane_g1_ParamLimits

0xd984,	// (0x0002c8ef) middle_sk_idle_act4_pane_g1

0xebe4,	// (0x0002db4f) middle_sk_idle_act4_pane_g2_ParamLimits

0xebe4,	// (0x0002db4f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd33,	// (0x0002ec9e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd33,	// (0x0002ec9e) middle_sk_idle_act4_pane_g

0xebfc,	// (0x0002db67) middle_sk_idle_act4_pane_t1_ParamLimits

0xebfc,	// (0x0002db67) middle_sk_idle_act4_pane_t1

0xec2b,	// (0x0002db96) grid_ai_shortcut_pane_ParamLimits

0xec2b,	// (0x0002db96) grid_ai_shortcut_pane

0xec48,	// (0x0002dbb3) list_highlight_pane_cp16_ParamLimits

0xec48,	// (0x0002dbb3) list_highlight_pane_cp16

0xec55,	// (0x0002dbc0) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xec55,	// (0x0002dbc0) list_single_idle_plugin_shortcut_pane_g1

0xec61,	// (0x0002dbcc) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xec61,	// (0x0002dbcc) list_single_idle_plugin_shortcut_pane_g2

0xec7d,	// (0x0002dbe8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xec7d,	// (0x0002dbe8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x0178,	// (0x0001f0e3) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x0178,	// (0x0001f0e3) list_single_idle_plugin_shortcut_pane_g

0xec92,	// (0x0002dbfd) cell_ai_shortcut_pane_ParamLimits

0xec92,	// (0x0002dbfd) cell_ai_shortcut_pane

0xeca8,	// (0x0002dc13) cell_ai_shortcut_pane_g1_ParamLimits

0xeca8,	// (0x0002dc13) cell_ai_shortcut_pane_g1

0x9648,	// (0x000285b3) ai_gene_pane_1_cp2

0x983d,	// (0x000287a8) ai_gene_pane_2_cp2

0x9845,	// (0x000287b0) list_highlight_pane_cp15

0x984e,	// (0x000287b9) list_single_idle_plugin_calendar_pane_g1

0x9845,	// (0x000287b0) list_highlight_pane_cp17

0x9856,	// (0x000287c1) list_single_idle_plugin_calendar_pane_g1_copy1

0x985e,	// (0x000287c9) list_single_idle_plugin_player_pane_g1

0x7008,	// (0x00025f73) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd38,	// (0x0002eca3) list_single_idle_plugin_player_pane_g

0x9866,	// (0x000287d1) list_single_idle_plugin_player_pane_t1

0x9874,	// (0x000287df) list_single_idle_plugin_player_pane_t2

0x9882,	// (0x000287ed) list_single_idle_plugin_player_pane_t3

0x9890,	// (0x000287fb) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd3d,	// (0x0002eca8) list_single_idle_plugin_player_pane_t

0x989e,	// (0x00028809) wait_bar_pane_cp15

0x98a6,	// (0x00028811) grid_ai_notification_pane

0x7008,	// (0x00025f73) list_single_idle_plugin_notification_pane_g1

0xecca,	// (0x0002dc35) cell_ai_notification_pane_ParamLimits

0xecca,	// (0x0002dc35) cell_ai_notification_pane

0x98bc,	// (0x00028827) cell_ai_notification_pane_g1

0x98c4,	// (0x0002882f) cell_ai_notification_pane_t1

0xecd7,	// (0x0002dc42) tb_ext_find_button_pane

0xecdf,	// (0x0002dc4a) tb_ext_find_pane_g1

0xece7,	// (0x0002dc52) tb_ext_find_pane_t1

0x4804,	// (0x0002376f) tb_ext_find_button_pane_g1

0x98f0,	// (0x0002885b) tb_ext_find_button_pane_g2

0x0001,

0xfd46,	// (0x0002ecb1) tb_ext_find_button_pane_g

0xeaf7,	// (0x0002da62) main_idle_act4_pane_t1_ParamLimits

0xeb0d,	// (0x0002da78) main_idle_act4_pane_t2_ParamLimits

0x014b,	// (0x0001f0b6) main_idle_act4_pane_t_ParamLimits

0xeb3f,	// (0x0002daaa) popup_clock_digital_analogue_window_cp2_ParamLimits

0xeb57,	// (0x0002dac2) sat_plugin_idle_act4_pane_ParamLimits

0xeb57,	// (0x0002dac2) sat_plugin_idle_act4_pane

0xecf5,	// (0x0002dc60) sat_plugin_idle_act4_pane_t1_ParamLimits

0xecf5,	// (0x0002dc60) sat_plugin_idle_act4_pane_t1

0xed0d,	// (0x0002dc78) sat_plugin_idle_act4_pane_t2_ParamLimits

0xed0d,	// (0x0002dc78) sat_plugin_idle_act4_pane_t2

0xed25,	// (0x0002dc90) sat_plugin_idle_act4_pane_t3_ParamLimits

0xed25,	// (0x0002dc90) sat_plugin_idle_act4_pane_t3

0xed3d,	// (0x0002dca8) sat_plugin_idle_act4_pane_t4_ParamLimits

0xed3d,	// (0x0002dca8) sat_plugin_idle_act4_pane_t4

0x0003,

0x0192,	// (0x0001f0fd) sat_plugin_idle_act4_pane_t_ParamLimits

0x0192,	// (0x0001f0fd) sat_plugin_idle_act4_pane_t

0x16ef,	// (0x0002065a) popup_battery_window_ParamLimits

0x16ef,	// (0x0002065a) popup_battery_window

0x3b9e,	// (0x00022b09) bg_popup_sub_pane_cp25_ParamLimits

0x3b9e,	// (0x00022b09) bg_popup_sub_pane_cp25

0x9945,	// (0x000288b0) popup_battery_window_g1_ParamLimits

0x9945,	// (0x000288b0) popup_battery_window_g1

0x9951,	// (0x000288bc) popup_battery_window_t1_ParamLimits

0x9951,	// (0x000288bc) popup_battery_window_t1

0x9963,	// (0x000288ce) popup_battery_window_t2_ParamLimits

0x9963,	// (0x000288ce) popup_battery_window_t2

0x0001,

0xfd4b,	// (0x0002ecb6) popup_battery_window_t_ParamLimits

0xfd4b,	// (0x0002ecb6) popup_battery_window_t

0xd605,	// (0x0002c570) midp_canvas_pane_ParamLimits

0xd662,	// (0x0002c5cd) midp_keypad_pane_ParamLimits

0xd662,	// (0x0002c5cd) midp_keypad_pane

0x5161,	// (0x000240cc) main_midp_pane_ParamLimits

0x7730,	// (0x0002669b) signal_pane_g2_cp_ParamLimits

0xed55,	// (0x0002dcc0) aid_size_cell_midp_keypad_ParamLimits

0xed55,	// (0x0002dcc0) aid_size_cell_midp_keypad

0xed73,	// (0x0002dcde) midp_keyp_game_grid_pane_ParamLimits

0xed73,	// (0x0002dcde) midp_keyp_game_grid_pane

0xed9a,	// (0x0002dd05) midp_keyp_rocker_pane_ParamLimits

0xed9a,	// (0x0002dd05) midp_keyp_rocker_pane

0xedeb,	// (0x0002dd56) midp_keyp_sk_left_pane_ParamLimits

0xedeb,	// (0x0002dd56) midp_keyp_sk_left_pane

0xee3f,	// (0x0002ddaa) midp_keyp_sk_right_pane_ParamLimits

0xee3f,	// (0x0002ddaa) midp_keyp_sk_right_pane

0x3821,	// (0x0002278c) bg_button_pane_cp03

0xee93,	// (0x0002ddfe) midp_keyp_sk_left_pane_g1

0x3821,	// (0x0002278c) bg_button_pane_cp04

0xee93,	// (0x0002ddfe) midp_keyp_sk_right_pane_g1

0x7c60,	// (0x00026bcb) midp_keyp_rocker_pane_g1

0xee9c,	// (0x0002de07) keyp_game_cell_pane_ParamLimits

0xee9c,	// (0x0002de07) keyp_game_cell_pane

0x3821,	// (0x0002278c) bg_button_pane_cp02

0xeec0,	// (0x0002de2b) keyp_game_cell_pane_g1

0xc0ef,	// (0x0002b05a) popup_fep_vkb2_window_ParamLimits

0xc0ef,	// (0x0002b05a) popup_fep_vkb2_window

0xcb89,	// (0x0002baf4) aid_size_cell_vkb2_ParamLimits

0xcb89,	// (0x0002baf4) aid_size_cell_vkb2

0xcbbf,	// (0x0002bb2a) popup_fep_vkb2_window_g1_ParamLimits

0xcbbf,	// (0x0002bb2a) popup_fep_vkb2_window_g1

0xcc0f,	// (0x0002bb7a) vkb2_area_bottom_pane_ParamLimits

0xcc0f,	// (0x0002bb7a) vkb2_area_bottom_pane

0xcc63,	// (0x0002bbce) vkb2_area_keypad_pane_ParamLimits

0xcc63,	// (0x0002bbce) vkb2_area_keypad_pane

0xccab,	// (0x0002bc16) vkb2_area_top_pane_ParamLimits

0xccab,	// (0x0002bc16) vkb2_area_top_pane

0xcd31,	// (0x0002bc9c) vkb2_top_entry_pane_ParamLimits

0xcd31,	// (0x0002bc9c) vkb2_top_entry_pane

0xcd5e,	// (0x0002bcc9) vkb2_top_grid_left_pane_ParamLimits

0xcd5e,	// (0x0002bcc9) vkb2_top_grid_left_pane

0xcd7e,	// (0x0002bce9) vkb2_top_grid_right_pane_ParamLimits

0xcd7e,	// (0x0002bce9) vkb2_top_grid_right_pane

0x2f80,	// (0x00021eeb) vkb2_cell_keypad_pane_ParamLimits

0x2f80,	// (0x00021eeb) vkb2_cell_keypad_pane

0xcdc4,	// (0x0002bd2f) vkb2_area_bottom_grid_pane_ParamLimits

0xcdc4,	// (0x0002bd2f) vkb2_area_bottom_grid_pane

0xcdee,	// (0x0002bd59) vkb2_area_bottom_pane_g1_ParamLimits

0xcdee,	// (0x0002bd59) vkb2_area_bottom_pane_g1

0xce14,	// (0x0002bd7f) vkb2_area_bottom_pane_g2_ParamLimits

0xce14,	// (0x0002bd7f) vkb2_area_bottom_pane_g2

0xce45,	// (0x0002bdb0) vkb2_area_bottom_pane_g3_ParamLimits

0xce45,	// (0x0002bdb0) vkb2_area_bottom_pane_g3

0x0002,

0xfd50,	// (0x0002ecbb) vkb2_area_bottom_pane_g_ParamLimits

0xfd50,	// (0x0002ecbb) vkb2_area_bottom_pane_g

0x312a,	// (0x00022095) vkb2_top_cell_left_pane_ParamLimits

0x312a,	// (0x00022095) vkb2_top_cell_left_pane

0xeec9,	// (0x0002de34) vkb2_top_entry_pane_g1_ParamLimits

0xeec9,	// (0x0002de34) vkb2_top_entry_pane_g1

0xeed7,	// (0x0002de42) vkb2_top_entry_pane_t1_ParamLimits

0xeed7,	// (0x0002de42) vkb2_top_entry_pane_t1

0x9b14,	// (0x00028a7f) vkb2_top_entry_pane_t2_ParamLimits

0x9b14,	// (0x00028a7f) vkb2_top_entry_pane_t2

0x9b46,	// (0x00028ab1) vkb2_top_entry_pane_t3_ParamLimits

0x9b46,	// (0x00028ab1) vkb2_top_entry_pane_t3

0x0002,

0xfd57,	// (0x0002ecc2) vkb2_top_entry_pane_t_ParamLimits

0xfd57,	// (0x0002ecc2) vkb2_top_entry_pane_t

0xceaf,	// (0x0002be1a) vkb2_top_grid_right_pane_g1_ParamLimits

0xceaf,	// (0x0002be1a) vkb2_top_grid_right_pane_g1

0x318d,	// (0x000220f8) vkb2_top_grid_right_pane_g2_ParamLimits

0x318d,	// (0x000220f8) vkb2_top_grid_right_pane_g2

0x31a5,	// (0x00022110) vkb2_top_grid_right_pane_g3_ParamLimits

0x31a5,	// (0x00022110) vkb2_top_grid_right_pane_g3

0xcec5,	// (0x0002be30) vkb2_top_grid_right_pane_g4_ParamLimits

0xcec5,	// (0x0002be30) vkb2_top_grid_right_pane_g4

0x0003,

0xfd5e,	// (0x0002ecc9) vkb2_top_grid_right_pane_g_ParamLimits

0xfd5e,	// (0x0002ecc9) vkb2_top_grid_right_pane_g

0x31d3,	// (0x0002213e) vkb2_top_cell_left_pane_g1

0x31ea,	// (0x00022155) vkb2_cell_keypad_pane_g1_ParamLimits

0x31ea,	// (0x00022155) vkb2_cell_keypad_pane_g1

0x9b6a,	// (0x00028ad5) vkb2_cell_keypad_pane_t1_ParamLimits

0x9b6a,	// (0x00028ad5) vkb2_cell_keypad_pane_t1

0x31f8,	// (0x00022163) vkb2_cell_bottom_grid_pane_ParamLimits

0x31f8,	// (0x00022163) vkb2_cell_bottom_grid_pane

0x3231,	// (0x0002219c) vkb2_cell_bottom_grid_pane_g1

0xeb88,	// (0x0002daf3) aid_call2_pane_cp02

0xeb90,	// (0x0002dafb) aid_call_pane_cp02

0xeb98,	// (0x0002db03) clock_digital_number_pane_cp10

0xeba0,	// (0x0002db0b) clock_digital_number_pane_cp11

0xeba8,	// (0x0002db13) clock_digital_number_pane_cp12

0xebb0,	// (0x0002db1b) clock_digital_number_pane_cp13

0xebb8,	// (0x0002db23) clock_digital_separator_pane_cp10

0x4804,	// (0x0002376f) popup_clock_digital_analogue_window_cp2_g1

0x4804,	// (0x0002376f) popup_clock_digital_analogue_window_cp2_g2

0xebc0,	// (0x0002db2b) popup_clock_digital_analogue_window_cp2_g3

0x4804,	// (0x0002376f) popup_clock_digital_analogue_window_cp2_g4

0xebc0,	// (0x0002db2b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd28,	// (0x0002ec93) popup_clock_digital_analogue_window_cp2_g

0xebc8,	// (0x0002db33) popup_clock_digital_analogue_window_cp2_t1

0xebd6,	// (0x0002db41) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x016e,	// (0x0001f0d9) popup_clock_digital_analogue_window_cp2_t

0x7c60,	// (0x00026bcb) clock_digital_number_pane_cp10_g1

0x7c60,	// (0x00026bcb) clock_digital_number_pane_cp10_g2

0x0001,

0xfb25,	// (0x0002ea90) clock_digital_number_pane_cp10_g

0x7c60,	// (0x00026bcb) clock_digital_separator_pane_cp10_g1

0x7c60,	// (0x00026bcb) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb25,	// (0x0002ea90) clock_digital_separator_pane_cp10_g

0x9591,	// (0x000284fc) uniindi_top_pane_g3

0x95a2,	// (0x0002850d) uniindi_top_pane_g4

0x300b,	// (0x00021f76) vkb2_row_keypad_pane_ParamLimits

0x300b,	// (0x00021f76) vkb2_row_keypad_pane

0x324d,	// (0x000221b8) vkb2_cell_t_keypad_pane_ParamLimits

0x324d,	// (0x000221b8) vkb2_cell_t_keypad_pane

0x325d,	// (0x000221c8) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x325d,	// (0x000221c8) vkb2_cell_t_keypad_pane_cp08

0x3270,	// (0x000221db) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x3270,	// (0x000221db) vkb2_cell_t_keypad_pane_cp09

0x3284,	// (0x000221ef) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x3284,	// (0x000221ef) vkb2_cell_t_keypad_pane_cp01

0x3295,	// (0x00022200) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x3295,	// (0x00022200) vkb2_cell_t_keypad_pane_cp02

0x32a6,	// (0x00022211) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x32a6,	// (0x00022211) vkb2_cell_t_keypad_pane_cp03

0x32b7,	// (0x00022222) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x32b7,	// (0x00022222) vkb2_cell_t_keypad_pane_cp04

0x32c8,	// (0x00022233) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x32c8,	// (0x00022233) vkb2_cell_t_keypad_pane_cp05

0x32d9,	// (0x00022244) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x32d9,	// (0x00022244) vkb2_cell_t_keypad_pane_cp06

0x32ea,	// (0x00022255) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x32ea,	// (0x00022255) vkb2_cell_t_keypad_pane_cp07

0x32fb,	// (0x00022266) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x32fb,	// (0x00022266) vkb2_cell_t_keypad_pane_cp10

0x7ede,	// (0x00026e49) vkb2_cell_t_keypad_pane_g1

0x9b81,	// (0x00028aec) vkb2_cell_t_keypad_pane_t1

0x3821,	// (0x0002278c) popup_grid_graphic2_window

0xef10,	// (0x0002de7b) aid_size_cell_graphic2_ParamLimits

0xef10,	// (0x0002de7b) aid_size_cell_graphic2

0xef5b,	// (0x0002dec6) bg_popup_window_pane_cp21_ParamLimits

0xef5b,	// (0x0002dec6) bg_popup_window_pane_cp21

0xef69,	// (0x0002ded4) graphic2_pages_pane_ParamLimits

0xef69,	// (0x0002ded4) graphic2_pages_pane

0xefbf,	// (0x0002df2a) grid_graphic2_control_pane_ParamLimits

0xefbf,	// (0x0002df2a) grid_graphic2_control_pane

0xf007,	// (0x0002df72) grid_graphic2_pane_ParamLimits

0xf007,	// (0x0002df72) grid_graphic2_pane

0xf08e,	// (0x0002dff9) cell_graphic2_pane

0x3821,	// (0x0002278c) main_comp_mode_pane

0x8e11,	// (0x00027d7c) list_ai3_gene_pane_ParamLimits

0xe8cf,	// (0x0002d83a) bg_popup_window_pane_cp19_ParamLimits

0x91e7,	// (0x00028152) bg_touch_area_indi_pane_ParamLimits

0x91e7,	// (0x00028152) bg_touch_area_indi_pane

0x91fd,	// (0x00028168) bg_touch_area_indi_pane_cp01_ParamLimits

0x91fd,	// (0x00028168) bg_touch_area_indi_pane_cp01

0x9213,	// (0x0002817e) bg_touch_area_indi_pane_cp02_ParamLimits

0x9213,	// (0x0002817e) bg_touch_area_indi_pane_cp02

0x922b,	// (0x00028196) bg_touch_area_indi_pane_cp03_ParamLimits

0x922b,	// (0x00028196) bg_touch_area_indi_pane_cp03

0x9245,	// (0x000281b0) popup_slider_window_g1_ParamLimits

0x9261,	// (0x000281cc) popup_slider_window_g2_ParamLimits

0x927d,	// (0x000281e8) popup_slider_window_g3_ParamLimits

0xfcc7,	// (0x0002ec32) popup_slider_window_g_ParamLimits

0x92d9,	// (0x00028244) popup_slider_window_t1_ParamLimits

0x934d,	// (0x000282b8) small_volume_slider_vertical_pane_ParamLimits

0xf08e,	// (0x0002dff9) cell_graphic2_pane_ParamLimits

0xf0e9,	// (0x0002e054) bg_button_pane_cp10_ParamLimits

0xf0e9,	// (0x0002e054) bg_button_pane_cp10

0xf0fc,	// (0x0002e067) bg_button_pane_cp11_ParamLimits

0xf0fc,	// (0x0002e067) bg_button_pane_cp11

0xf10f,	// (0x0002e07a) graphic2_pages_pane_g1_ParamLimits

0xf10f,	// (0x0002e07a) graphic2_pages_pane_g1

0xf12a,	// (0x0002e095) graphic2_pages_pane_g2_ParamLimits

0xf12a,	// (0x0002e095) graphic2_pages_pane_g2

0x0001,

0x01bc,	// (0x0001f127) graphic2_pages_pane_g_ParamLimits

0x01bc,	// (0x0001f127) graphic2_pages_pane_g

0xf142,	// (0x0002e0ad) graphic2_pages_pane_t1_ParamLimits

0xf142,	// (0x0002e0ad) graphic2_pages_pane_t1

0xf15a,	// (0x0002e0c5) cell_graphic2_control_pane_ParamLimits

0xf15a,	// (0x0002e0c5) cell_graphic2_control_pane

0xf18c,	// (0x0002e0f7) cell_graphic2_pane_g1_ParamLimits

0xf18c,	// (0x0002e0f7) cell_graphic2_pane_g1

0xd992,	// (0x0002c8fd) cell_graphic2_pane_g2_ParamLimits

0xd992,	// (0x0002c8fd) cell_graphic2_pane_g2

0xef4e,	// (0x0002deb9) cell_graphic2_pane_g3_ParamLimits

0xef4e,	// (0x0002deb9) cell_graphic2_pane_g3

0xd99f,	// (0x0002c90a) cell_graphic2_pane_g4_ParamLimits

0xd99f,	// (0x0002c90a) cell_graphic2_pane_g4

0xf199,	// (0x0002e104) cell_graphic2_pane_g5_ParamLimits

0xf199,	// (0x0002e104) cell_graphic2_pane_g5

0x0004,

0xfd67,	// (0x0002ecd2) cell_graphic2_pane_g_ParamLimits

0xfd67,	// (0x0002ecd2) cell_graphic2_pane_g

0xf1b9,	// (0x0002e124) cell_graphic2_pane_t1_ParamLimits

0xf1b9,	// (0x0002e124) cell_graphic2_pane_t1

0x6360,	// (0x000252cb) grid_highlight_pane_cp11_ParamLimits

0x6360,	// (0x000252cb) grid_highlight_pane_cp11

0x3b9e,	// (0x00022b09) bg_button_pane_cp05

0xf202,	// (0x0002e16d) cell_graphic2_control_pane_g1

0x7c60,	// (0x00026bcb) bg_touch_area_indi_pane_g1

0x9e7e,	// (0x00028de9) aid_cmod_rocker_key_size

0x9e88,	// (0x00028df3) aid_cmode_itu_key_size

0x9e92,	// (0x00028dfd) main_cmode_video_pane

0x9e9c,	// (0x00028e07) main_comp_mode_itu_pane

0x9ea8,	// (0x00028e13) main_comp_mode_rocker_pane

0x9eb4,	// (0x00028e1f) cell_cmode_rocker_pane_ParamLimits

0x9eb4,	// (0x00028e1f) cell_cmode_rocker_pane

0x9ec6,	// (0x00028e31) cell_cmode_itu_pane_ParamLimits

0x9ec6,	// (0x00028e31) cell_cmode_itu_pane

0x4184,	// (0x000230ef) bg_button_pane_cp06_ParamLimits

0x4184,	// (0x000230ef) bg_button_pane_cp06

0x7ede,	// (0x00026e49) cell_cmode_rocker_pane_g1_ParamLimits

0x7ede,	// (0x00026e49) cell_cmode_rocker_pane_g1

0x93f1,	// (0x0002835c) cell_cmode_rocker_pane_g2_ParamLimits

0x93f1,	// (0x0002835c) cell_cmode_rocker_pane_g2

0x0001,

0xfd72,	// (0x0002ecdd) cell_cmode_rocker_pane_g_ParamLimits

0xfd72,	// (0x0002ecdd) cell_cmode_rocker_pane_g

0x3821,	// (0x0002278c) bg_button_pane_cp07

0x9edb,	// (0x00028e46) cell_cmode_itu_pane_g1

0x9ee4,	// (0x00028e4f) cell_cmode_itu_pane_t1

0x9ef2,	// (0x00028e5d) cell_cmode_itu_pane_t2

0x0001,

0xfd77,	// (0x0002ece2) cell_cmode_itu_pane_t

0x9614,	// (0x0002857f) aid_touch_ctrl_left

0x961c,	// (0x00028587) aid_touch_ctrl_right

0x3821,	// (0x0002278c) compa_mode_pane

0xf226,	// (0x0002e191) aid_cmod_rocker_key_size_cp

0xf230,	// (0x0002e19b) aid_cmode_itu_key_size_cp

0x9f14,	// (0x00028e7f) compa_mode_pane_g1

0x9f1c,	// (0x00028e87) compa_mode_pane_g2

0x9f24,	// (0x00028e8f) compa_mode_pane_g3

0x0002,

0xfd7c,	// (0x0002ece7) compa_mode_pane_g

0xf23a,	// (0x0002e1a5) main_comp_mode_itu_pane_cp

0xf242,	// (0x0002e1ad) main_comp_mode_rocker_pane_cp

0xf24a,	// (0x0002e1b5) cell_cmode_itu_pane_cp_ParamLimits

0xf24a,	// (0x0002e1b5) cell_cmode_itu_pane_cp

0xf25f,	// (0x0002e1ca) cell_cmode_rocker_pane_cp_ParamLimits

0xf25f,	// (0x0002e1ca) cell_cmode_rocker_pane_cp

0x4184,	// (0x000230ef) bg_button_pane_cp06_cp_ParamLimits

0x4184,	// (0x000230ef) bg_button_pane_cp06_cp

0x7ede,	// (0x00026e49) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7ede,	// (0x00026e49) cell_cmode_rocker_pane_g1_cp

0x7c60,	// (0x00026bcb) cell_cmode_rocker_pane_g2_cp

0x3821,	// (0x0002278c) bg_button_pane_cp07_cp

0xf271,	// (0x0002e1dc) cell_cmode_itu_pane_g1_cp

0xf27a,	// (0x0002e1e5) cell_cmode_itu_pane_t1_cp

0xf27a,	// (0x0002e1e5) cell_cmode_itu_pane_t2_cp

0xdf2f,	// (0x0002ce9a) settings_code_pane_cp2

0x3915,	// (0x00022880) bg_popup_window_pane_cp3_ParamLimits

0x3d78,	// (0x00022ce3) heading_pane_cp3_ParamLimits

0x3d84,	// (0x00022cef) listscroll_popup_graphic_pane_ParamLimits

0x2924,	// (0x0002188f) fep_hwr_aid_pane_ParamLimits

0x2ced,	// (0x00021c58) aid_touch_sctrl_top_ParamLimits

0x2cfa,	// (0x00021c65) sctrl_sk_top_pane_g1_ParamLimits

0x7ede,	// (0x00026e49) sctrl_sk_top_pane_g2_ParamLimits

0xfce0,	// (0x0002ec4b) sctrl_sk_top_pane_g_ParamLimits

0x2d07,	// (0x00021c72) sctrl_sk_top_pane_t1_ParamLimits

0x2ced,	// (0x00021c58) aid_touch_sctrl_bottom_ParamLimits

0x2d07,	// (0x00021c72) sctrl_sk_bottom_pane_t1_ParamLimits

0x955d,	// (0x000284c8) aid_area_touch_clock

0xccf3,	// (0x0002bc5e) aid_vkb2_area_top_pane_cell_ParamLimits

0xccf3,	// (0x0002bc5e) aid_vkb2_area_top_pane_cell

0xcd9e,	// (0x0002bd09) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcd9e,	// (0x0002bd09) aid_vkb2_area_bottom_pane_cell

0x9acc,	// (0x00028a37) popup_char_count_window

0x9f71,	// (0x00028edc) popup_char_count_window_g1

0x9f7a,	// (0x00028ee5) popup_char_count_window_g2

0x9f83,	// (0x00028eee) popup_char_count_window_g3

0x0002,

0xfd83,	// (0x0002ecee) popup_char_count_window_g

0x9f8c,	// (0x00028ef7) popup_char_count_window_t1

0x2da8,	// (0x00021d13) popup_fep_char_preview_window_ParamLimits

0x2da8,	// (0x00021d13) popup_fep_char_preview_window

0xcd13,	// (0x0002bc7e) vkb2_top_candi_pane_ParamLimits

0xcd13,	// (0x0002bc7e) vkb2_top_candi_pane

0xf288,	// (0x0002e1f3) cell_vkb2_top_candi_pane_ParamLimits

0xf288,	// (0x0002e1f3) cell_vkb2_top_candi_pane

0x5cec,	// (0x00024c57) bg_popup_fep_char_preview_window_ParamLimits

0x5cec,	// (0x00024c57) bg_popup_fep_char_preview_window

0x3310,	// (0x0002227b) popup_fep_char_preview_window_t1_ParamLimits

0x3310,	// (0x0002227b) popup_fep_char_preview_window_t1

0x9fe7,	// (0x00028f52) bg_popup_fep_char_preview_window_g1

0x9fef,	// (0x00028f5a) bg_popup_fep_char_preview_window_g2

0x9ff7,	// (0x00028f62) bg_popup_fep_char_preview_window_g3

0x9fff,	// (0x00028f6a) bg_popup_fep_char_preview_window_g4

0xa007,	// (0x00028f72) bg_popup_fep_char_preview_window_g5

0x334a,	// (0x000222b5) bg_popup_fep_char_preview_window_g6

0xa00f,	// (0x00028f7a) bg_popup_fep_char_preview_window_g7

0xa017,	// (0x00028f82) bg_popup_fep_char_preview_window_g8

0xa01f,	// (0x00028f8a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfd8a,	// (0x0002ecf5) bg_popup_fep_char_preview_window_g

0x7ede,	// (0x00026e49) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7ede,	// (0x00026e49) cell_vkb2_top_candi_pane_g1

0x81f5,	// (0x00027160) cell_vkb2_top_candi_pane_g2_ParamLimits

0x81f5,	// (0x00027160) cell_vkb2_top_candi_pane_g2

0x8216,	// (0x00027181) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8216,	// (0x00027181) cell_vkb2_top_candi_pane_g3

0x3352,	// (0x000222bd) cell_vkb2_top_candi_pane_g4_ParamLimits

0x3352,	// (0x000222bd) cell_vkb2_top_candi_pane_g4

0x9d61,	// (0x00028ccc) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9d61,	// (0x00028ccc) cell_vkb2_top_candi_pane_g5

0x93f1,	// (0x0002835c) cell_vkb2_top_candi_pane_g6_ParamLimits

0x93f1,	// (0x0002835c) cell_vkb2_top_candi_pane_g6

0x0005,

0xfd9d,	// (0x0002ed08) cell_vkb2_top_candi_pane_g_ParamLimits

0xfd9d,	// (0x0002ed08) cell_vkb2_top_candi_pane_g

0x3373,	// (0x000222de) cell_vkb2_top_candi_pane_t1

0x2784,	// (0x000216ef) aid_size_touch_slider_mark_ParamLimits

0x2784,	// (0x000216ef) aid_size_touch_slider_mark

0xefa5,	// (0x0002df10) grid_graphic2_catg_pane_ParamLimits

0xefa5,	// (0x0002df10) grid_graphic2_catg_pane

0xf061,	// (0x0002dfcc) popup_grid_graphic2_window_t1_ParamLimits

0xf061,	// (0x0002dfcc) popup_grid_graphic2_window_t1

0xf077,	// (0x0002dfe2) popup_grid_graphic2_window_t2_ParamLimits

0xf077,	// (0x0002dfe2) popup_grid_graphic2_window_t2

0x0001,

0x01b7,	// (0x0001f122) popup_grid_graphic2_window_t_ParamLimits

0x01b7,	// (0x0001f122) popup_grid_graphic2_window_t

0x3b9e,	// (0x00022b09) bg_button_pane_cp05_ParamLimits

0xf202,	// (0x0002e16d) cell_graphic2_control_pane_g1_ParamLimits

0xf2ee,	// (0x0002e259) cell_graphic2_catg_pane_ParamLimits

0xf2ee,	// (0x0002e259) cell_graphic2_catg_pane

0x3821,	// (0x0002278c) bg_button_pane_cp12

0xf300,	// (0x0002e26b) cell_graphic2_catg_pane_g1

0x9529,	// (0x00028494) cell_tb_ext_pane_t1_ParamLimits

0x314a,	// (0x000220b5) vkb2_top_cell_right_narrow_pane_ParamLimits

0x314a,	// (0x000220b5) vkb2_top_cell_right_narrow_pane

0x3162,	// (0x000220cd) vkb2_top_cell_right_wide_pane_ParamLimits

0x3162,	// (0x000220cd) vkb2_top_cell_right_wide_pane

0x2916,	// (0x00021881) bg_vkb2_func_pane_ParamLimits

0x2916,	// (0x00021881) bg_vkb2_func_pane

0x31d3,	// (0x0002213e) vkb2_top_cell_left_pane_g1_ParamLimits

0x2916,	// (0x00021881) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2916,	// (0x00021881) bg_vkb2_fuc_pane_cp03

0x3231,	// (0x0002219c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5673,	// (0x000245de) bg_vkb2_func_pane_g1

0x567b,	// (0x000245e6) bg_vkb2_func_pane_g2

0x568b,	// (0x000245f6) bg_vkb2_func_pane_g3

0x5683,	// (0x000245ee) bg_vkb2_func_pane_g4

0x5693,	// (0x000245fe) bg_vkb2_func_pane_g5

0x569b,	// (0x00024606) bg_vkb2_func_pane_g6

0x56a3,	// (0x0002460e) bg_vkb2_func_pane_g7

0x56ab,	// (0x00024616) bg_vkb2_func_pane_g8

0x566b,	// (0x000245d6) bg_vkb2_func_pane_g9

0x0008,

0xfdaa,	// (0x0002ed15) bg_vkb2_func_pane_g

0x2916,	// (0x00021881) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2916,	// (0x00021881) bg_vkb2_fuc_pane_cp01

0x31d3,	// (0x0002213e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x31d3,	// (0x0002213e) vkb2_top_cell_right_wide_pane_g1

0x2916,	// (0x00021881) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2916,	// (0x00021881) bg_vkb2_fuc_pane_cp02

0x3231,	// (0x0002219c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x3231,	// (0x0002219c) vkb2_top_cell_right_narrow_pane_g1

0xe80f,	// (0x0002d77a) aid_touch_area_decrease_ParamLimits

0xe80f,	// (0x0002d77a) aid_touch_area_decrease

0xe843,	// (0x0002d7ae) aid_touch_area_increase_ParamLimits

0xe843,	// (0x0002d7ae) aid_touch_area_increase

0xe86b,	// (0x0002d7d6) aid_touch_area_mute_ParamLimits

0xe86b,	// (0x0002d7d6) aid_touch_area_mute

0xe89b,	// (0x0002d806) aid_touch_area_slider_ParamLimits

0xe89b,	// (0x0002d806) aid_touch_area_slider

0xe8db,	// (0x0002d846) popup_slider_window_g4_ParamLimits

0xe8db,	// (0x0002d846) popup_slider_window_g4

0xe903,	// (0x0002d86e) popup_slider_window_g5_ParamLimits

0xe903,	// (0x0002d86e) popup_slider_window_g5

0xe937,	// (0x0002d8a2) popup_slider_window_g6_ParamLimits

0xe937,	// (0x0002d8a2) popup_slider_window_g6

0x9307,	// (0x00028272) popup_slider_window_t2_ParamLimits

0x9307,	// (0x00028272) popup_slider_window_t2

0x0001,

0xfcd4,	// (0x0002ec3f) popup_slider_window_t_ParamLimits

0xfcd4,	// (0x0002ec3f) popup_slider_window_t

0xe953,	// (0x0002d8be) slider_pane_ParamLimits

0xe953,	// (0x0002d8be) slider_pane

0xa042,	// (0x00028fad) slider_pane_g1_ParamLimits

0xa042,	// (0x00028fad) slider_pane_g1

0xa056,	// (0x00028fc1) slider_pane_g2_ParamLimits

0xa056,	// (0x00028fc1) slider_pane_g2

0xa06c,	// (0x00028fd7) slider_pane_g3_ParamLimits

0xa06c,	// (0x00028fd7) slider_pane_g3

0x0003,

0xfdbd,	// (0x0002ed28) slider_pane_g_ParamLimits

0xfdbd,	// (0x0002ed28) slider_pane_g

0xc9d3,	// (0x0002b93e) popup_tb_float_extension_window_ParamLimits

0xc9d3,	// (0x0002b93e) popup_tb_float_extension_window

0xa098,	// (0x00029003) aid_size_cell_tb_float_ext

0x3821,	// (0x0002278c) bg_popup_sub_window_cp28

0xa0a4,	// (0x0002900f) grid_tb_float_ext_pane

0xa0ae,	// (0x00029019) cell_tb_float_ext_pane_ParamLimits

0xa0ae,	// (0x00029019) cell_tb_float_ext_pane

0xa0c8,	// (0x00029033) cell_tb_float_ext_pane_g1

0xa0d1,	// (0x0002903c) grid_highlight_pane_cp12

0xcafc,	// (0x0002ba67) cell_last_hwr_side_pane_ParamLimits

0xcafc,	// (0x0002ba67) cell_last_hwr_side_pane

0x7c60,	// (0x00026bcb) cell_last_hwr_side_pane_g1

0xa0da,	// (0x00029045) cell_last_hwr_side_pane_g2

0x0001,

0xfdc6,	// (0x0002ed31) cell_last_hwr_side_pane_g

0xce7a,	// (0x0002bde5) vkb2_area_bottom_space_btn_pane_ParamLimits

0xce7a,	// (0x0002bde5) vkb2_area_bottom_space_btn_pane

0x7ede,	// (0x00026e49) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9b81,	// (0x00028aec) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x3373,	// (0x000222de) cell_vkb2_top_candi_pane_t1_ParamLimits

0x3392,	// (0x000222fd) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x3392,	// (0x000222fd) vkb2_area_bottom_space_btn_pane_g1

0x33cc,	// (0x00022337) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x33cc,	// (0x00022337) vkb2_area_bottom_space_btn_pane_g2

0x3402,	// (0x0002236d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x3402,	// (0x0002236d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdcb,	// (0x0002ed36) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdcb,	// (0x0002ed36) vkb2_area_bottom_space_btn_pane_g

0x29cb,	// (0x00021936) cel_fep_hwr_func_pane_ParamLimits

0x29cb,	// (0x00021936) cel_fep_hwr_func_pane

0xcad1,	// (0x0002ba3c) cell_hwr_side_button_pane_ParamLimits

0xcad1,	// (0x0002ba3c) cell_hwr_side_button_pane

0x955d,	// (0x000284c8) aid_area_touch_clock_ParamLimits

0x3b9e,	// (0x00022b09) bg_uniindi_top_pane_ParamLimits

0x956f,	// (0x000284da) uniindi_top_pane_g1_ParamLimits

0x9585,	// (0x000284f0) uniindi_top_pane_g2_ParamLimits

0x9591,	// (0x000284fc) uniindi_top_pane_g3_ParamLimits

0x95a2,	// (0x0002850d) uniindi_top_pane_g4_ParamLimits

0xfd07,	// (0x0002ec72) uniindi_top_pane_g_ParamLimits

0x95af,	// (0x0002851a) uniindi_top_pane_t1_ParamLimits

0x3b9e,	// (0x00022b09) bg_vkb2_func_pane_cp01_ParamLimits

0x3b9e,	// (0x00022b09) bg_vkb2_func_pane_cp01

0xa0e3,	// (0x0002904e) cel_fep_hwr_func_pane_g1_ParamLimits

0xa0e3,	// (0x0002904e) cel_fep_hwr_func_pane_g1

0x3b9e,	// (0x00022b09) bg_vkb2_func_pane_cp02_ParamLimits

0x3b9e,	// (0x00022b09) bg_vkb2_func_pane_cp02

0xa0e3,	// (0x0002904e) cell_hwr_side_button_pane_g1_ParamLimits

0xa0e3,	// (0x0002904e) cell_hwr_side_button_pane_g1

0x54ec,	// (0x00024457) status_pane_g4_ParamLimits

0x54ec,	// (0x00024457) status_pane_g4

0x5506,	// (0x00024471) status_pane_t1

0x79b4,	// (0x0002691f) form2_midp_gauge_slider_cont_pane

0x79bc,	// (0x00026927) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe1fe,	// (0x0002d169) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe210,	// (0x0002d17b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad8,	// (0x0002ea43) form2_midp_gauge_slider_pane_t_ParamLimits

0x79f2,	// (0x0002695d) form2_midp_slider_pane_ParamLimits

0x2d68,	// (0x00021cd3) aid_size_cell_func_vkb2_ParamLimits

0x2d68,	// (0x00021cd3) aid_size_cell_func_vkb2

0xa084,	// (0x00028fef) slider_pane_g4_ParamLimits

0xa084,	// (0x00028fef) slider_pane_g4

0xcedb,	// (0x0002be46) form2_midp_gauge_slider_pane_t2_cp01

0xcee9,	// (0x0002be54) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcee9,	// (0x0002be54) form2_midp_gauge_slider_pane_t3_cp01

0x3477,	// (0x000223e2) form2_midp_slider_pane_cp01

0x3821,	// (0x0002278c) navi_smil_pane

0xa11c,	// (0x00029087) navi_smil_pane_g1

0xa124,	// (0x0002908f) navi_smil_pane_t1

0xa0f1,	// (0x0002905c) form2_midp_slider_pane_g1

0xa0fa,	// (0x00029065) form2_midp_slider_pane_g2

0xa102,	// (0x0002906d) form2_midp_slider_pane_g3

0xa0f1,	// (0x0002905c) form2_midp_slider_pane_g4

0xf309,	// (0x0002e274) form2_midp_slider_pane_g5

0x0004,

0xfdd4,	// (0x0002ed3f) form2_midp_slider_pane_g

0x343c,	// (0x000223a7) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x343c,	// (0x000223a7) vkb2_area_bottom_space_btn_pane_g4

0xd8d5,	// (0x0002c840) lc0_navi_pane_ParamLimits

0xd8d5,	// (0x0002c840) lc0_navi_pane

0xd93f,	// (0x0002c8aa) lc0_stat_indi_pane_ParamLimits

0xd93f,	// (0x0002c8aa) lc0_stat_indi_pane

0xd954,	// (0x0002c8bf) ls0_title_pane_ParamLimits

0xd954,	// (0x0002c8bf) ls0_title_pane

0x4184,	// (0x000230ef) bg_popup_sub_pane_cp14_ParamLimits

0x9544,	// (0x000284af) list_uniindi_pane_ParamLimits

0x9550,	// (0x000284bb) uniindi_top_pane_ParamLimits

0x95ec,	// (0x00028557) list_single_uniindi_pane_g1_ParamLimits

0x95ff,	// (0x0002856a) list_single_uniindi_pane_t1_ParamLimits

0xcf06,	// (0x0002be71) lc0_stat_clock_pane_ParamLimits

0xcf06,	// (0x0002be71) lc0_stat_clock_pane

0xf314,	// (0x0002e27f) lc0_stat_indi_pane_g1_ParamLimits

0xf314,	// (0x0002e27f) lc0_stat_indi_pane_g1

0xf321,	// (0x0002e28c) lc0_stat_indi_pane_g2_ParamLimits

0xf321,	// (0x0002e28c) lc0_stat_indi_pane_g2

0x0001,

0x023e,	// (0x0001f1a9) lc0_stat_indi_pane_g_ParamLimits

0x023e,	// (0x0001f1a9) lc0_stat_indi_pane_g

0xcf13,	// (0x0002be7e) lc0_uni_indicator_pane_ParamLimits

0xcf13,	// (0x0002be7e) lc0_uni_indicator_pane

0xf32e,	// (0x0002e299) ls0_title_pane_g1_ParamLimits

0xf32e,	// (0x0002e299) ls0_title_pane_g1

0xf342,	// (0x0002e2ad) ls0_title_pane_t1_ParamLimits

0xf342,	// (0x0002e2ad) ls0_title_pane_t1

0xcf20,	// (0x0002be8b) lc0_uni_indicator_pane_g1_ParamLimits

0xcf20,	// (0x0002be8b) lc0_uni_indicator_pane_g1

0xa196,	// (0x00029101) lc0_stat_clock_pane_t1

0x3821,	// (0x0002278c) main_ai5_pane

0xa1a4,	// (0x0002910f) ai5_sk_pane_ParamLimits

0xa1a4,	// (0x0002910f) ai5_sk_pane

0xf370,	// (0x0002e2db) cell_ai5_widget_pane_ParamLimits

0xf370,	// (0x0002e2db) cell_ai5_widget_pane

0xa263,	// (0x000291ce) aid_size_cell_widget_grid

0xa279,	// (0x000291e4) bg_ai5_widget_pane_ParamLimits

0xa279,	// (0x000291e4) bg_ai5_widget_pane

0xa2ed,	// (0x00029258) cell_ai5_widget_pane_g2

0xa2fd,	// (0x00029268) cell_ai5_widget_pane_g3

0xa314,	// (0x0002927f) cell_ai5_widget_pane_g4

0xa320,	// (0x0002928b) cell_ai5_widget_pane_g5

0xa32c,	// (0x00029297) cell_ai5_widget_pane_g6

0xa338,	// (0x000292a3) cell_ai5_widget_pane_g7

0xa380,	// (0x000292eb) cell_ai5_widget_pane_t1_ParamLimits

0xa380,	// (0x000292eb) cell_ai5_widget_pane_t1

0xa39d,	// (0x00029308) cell_ai5_widget_pane_t2_ParamLimits

0xa39d,	// (0x00029308) cell_ai5_widget_pane_t2

0xa3b5,	// (0x00029320) cell_ai5_widget_pane_t3_ParamLimits

0xa3b5,	// (0x00029320) cell_ai5_widget_pane_t3

0xa3cd,	// (0x00029338) cell_ai5_widget_pane_t4_ParamLimits

0xa3cd,	// (0x00029338) cell_ai5_widget_pane_t4

0xa3ea,	// (0x00029355) cell_ai5_widget_pane_t5_ParamLimits

0xa3ea,	// (0x00029355) cell_ai5_widget_pane_t5

0xa409,	// (0x00029374) cell_ai5_widget_pane_t6_ParamLimits

0xa409,	// (0x00029374) cell_ai5_widget_pane_t6

0xa41b,	// (0x00029386) cell_ai5_widget_pane_t7_ParamLimits

0xa41b,	// (0x00029386) cell_ai5_widget_pane_t7

0xa434,	// (0x0002939f) cell_ai5_widget_pane_t8_ParamLimits

0xa434,	// (0x0002939f) cell_ai5_widget_pane_t8

0x0009,

0xfdf4,	// (0x0002ed5f) cell_ai5_widget_pane_t_ParamLimits

0xfdf4,	// (0x0002ed5f) cell_ai5_widget_pane_t

0xa488,	// (0x000293f3) grid_ai5_widget_pane

0x4184,	// (0x000230ef) highlight_cell_ai5_widget_pane_ParamLimits

0x4184,	// (0x000230ef) highlight_cell_ai5_widget_pane

0xf3d6,	// (0x0002e341) ai5_sk_left_pane

0xf3e0,	// (0x0002e34b) ai5_sk_middle_pane

0xf3ea,	// (0x0002e355) ai5_sk_right_pane

0xa4bd,	// (0x00029428) bg_ai5_widget_pane_g1_ParamLimits

0xa4bd,	// (0x00029428) bg_ai5_widget_pane_g1

0xa4c9,	// (0x00029434) bg_ai5_widget_pane_g2_ParamLimits

0xa4c9,	// (0x00029434) bg_ai5_widget_pane_g2

0xa4d5,	// (0x00029440) bg_ai5_widget_pane_g3_ParamLimits

0xa4d5,	// (0x00029440) bg_ai5_widget_pane_g3

0xa4e1,	// (0x0002944c) bg_ai5_widget_pane_g4_ParamLimits

0xa4e1,	// (0x0002944c) bg_ai5_widget_pane_g4

0xa4ed,	// (0x00029458) bg_ai5_widget_pane_g5_ParamLimits

0xa4ed,	// (0x00029458) bg_ai5_widget_pane_g5

0xa4f9,	// (0x00029464) bg_ai5_widget_pane_g6_ParamLimits

0xa4f9,	// (0x00029464) bg_ai5_widget_pane_g6

0xa505,	// (0x00029470) bg_ai5_widget_pane_g7_ParamLimits

0xa505,	// (0x00029470) bg_ai5_widget_pane_g7

0xa511,	// (0x0002947c) bg_ai5_widget_pane_g8_ParamLimits

0xa511,	// (0x0002947c) bg_ai5_widget_pane_g8

0xa51d,	// (0x00029488) bg_ai5_widget_pane_g9_ParamLimits

0xa51d,	// (0x00029488) bg_ai5_widget_pane_g9

0x0008,

0xfe09,	// (0x0002ed74) bg_ai5_widget_pane_g_ParamLimits

0xfe09,	// (0x0002ed74) bg_ai5_widget_pane_g

0xa54f,	// (0x000294ba) cell_shortcut_ai5_widget_pane_ParamLimits

0xa54f,	// (0x000294ba) cell_shortcut_ai5_widget_pane

0x4e17,	// (0x00023d82) bg_cell_shortcut_ai5_widget_pane

0xa560,	// (0x000294cb) cell_grid_ai5_widget_pane_g1

0x4e17,	// (0x00023d82) highlight_cell_shortcut_ai5_widget_pane

0x567b,	// (0x000245e6) ai5_sk_left_pane_g1

0xa569,	// (0x000294d4) ai5_sk_left_pane_g2

0xa571,	// (0x000294dc) ai5_sk_left_pane_g3

0xa579,	// (0x000294e4) ai5_sk_left_pane_g4

0x0003,

0xfe1c,	// (0x0002ed87) ai5_sk_left_pane_g

0xa581,	// (0x000294ec) ai5_sk_left_pane_t1

0x5673,	// (0x000245de) ai5_sk_right_pane_g1

0xa58f,	// (0x000294fa) ai5_sk_right_pane_g2

0xa597,	// (0x00029502) ai5_sk_right_pane_g3

0xa59f,	// (0x0002950a) ai5_sk_right_pane_g4

0x0003,

0xfe25,	// (0x0002ed90) ai5_sk_right_pane_g

0xa5a7,	// (0x00029512) ai5_sk_right_pane_t1

0x5673,	// (0x000245de) ai5_sk_middle_pane_g1

0x567b,	// (0x000245e6) ai5_sk_middle_pane_g2

0x5693,	// (0x000245fe) ai5_sk_middle_pane_g3

0xa597,	// (0x00029502) ai5_sk_middle_pane_g4

0xa571,	// (0x000294dc) ai5_sk_middle_pane_g5

0xa5b5,	// (0x00029520) ai5_sk_middle_pane_g6

0xf3f4,	// (0x0002e35f) ai5_sk_middle_pane_g7

0x0006,

0xfe2e,	// (0x0002ed99) ai5_sk_middle_pane_g

0xd7c1,	// (0x0002c72c) aid_touch_area_size_lc0_ParamLimits

0xd7c1,	// (0x0002c72c) aid_touch_area_size_lc0

0x2b56,	// (0x00021ac1) cell_hwr_candidate_pane_t1_ParamLimits

0x51c3,	// (0x0002412e) aid_touch_navi_pane

0xda8b,	// (0x0002c9f6) status_dt_navi_pane_ParamLimits

0xda8b,	// (0x0002c9f6) status_dt_navi_pane

0xdaa3,	// (0x0002ca0e) status_dt_sta_pane_ParamLimits

0xdaa3,	// (0x0002ca0e) status_dt_sta_pane

0xf3fc,	// (0x0002e367) dt_sta_controll_pane

0xf409,	// (0x0002e374) dt_sta_indi_pane

0xf416,	// (0x0002e381) dt_sta_title_pane

0x3b9e,	// (0x00022b09) bg_dt_sta_indi_pane_ParamLimits

0x3b9e,	// (0x00022b09) bg_dt_sta_indi_pane

0xf428,	// (0x0002e393) dt_sta_battery_pane

0xf430,	// (0x0002e39b) dt_sta_indi_pane_g1

0xa607,	// (0x00029572) dt_sta_indi_pane_g2

0xa610,	// (0x0002957b) dt_sta_indi_pane_g3

0x0002,

0xfe3d,	// (0x0002eda8) dt_sta_indi_pane_g

0xa619,	// (0x00029584) dt_sta_signal_pane

0x4184,	// (0x000230ef) bg_dt_sta_title_pane_ParamLimits

0x4184,	// (0x000230ef) bg_dt_sta_title_pane

0xa622,	// (0x0002958d) dt_sta_title_pane_g1

0xa62a,	// (0x00029595) dt_sta_title_pane_t1_ParamLimits

0xa62a,	// (0x00029595) dt_sta_title_pane_t1

0x3821,	// (0x0002278c) bg_dt_sta_control_pane

0xf439,	// (0x0002e3a4) dt_sta_controll_pane_g1

0xa648,	// (0x000295b3) bg_dt_sta_title_pane_g1

0xa651,	// (0x000295bc) bg_dt_sta_title_pane_g2

0xa65a,	// (0x000295c5) bg_dt_sta_title_pane_g3

0x0002,

0xfe44,	// (0x0002edaf) bg_dt_sta_title_pane_g

0x7c60,	// (0x00026bcb) bg_dt_sta_indi_pane_g1

0xa663,	// (0x000295ce) dt_sta_signal_pane_g1

0xa66b,	// (0x000295d6) dt_sta_signal_pane_g2

0x0001,

0xfe4b,	// (0x0002edb6) dt_sta_signal_pane_g

0xa673,	// (0x000295de) dt_sta_battery_pane_g1

0xa67c,	// (0x000295e7) dt_sta_battery_pane_t1

0x7c60,	// (0x00026bcb) bg_dt_sta_control_pane_g1

0x4916,	// (0x00023881) fep_china_uni_eep_pane

0x491e,	// (0x00023889) fep_china_uni_entry_pane_ParamLimits

0x492e,	// (0x00023899) popup_fep_china_uni_window_g1_ParamLimits

0x493e,	// (0x000238a9) popup_fep_china_uni_window_g2_ParamLimits

0x493e,	// (0x000238a9) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0002e688) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0002e688) popup_fep_china_uni_window_g

0xa68b,	// (0x000295f6) fep_china_uni_eep_pane_g1

0xa693,	// (0x000295fe) fep_china_uni_eep_pane_t1

0xa113,	// (0x0002907e) aid_touch_area_size_smil_player

0x5313,	// (0x0002427e) lc0_clock_pane

0x54fa,	// (0x00024465) status_pane_g5_ParamLimits

0x54fa,	// (0x00024465) status_pane_g5

0xc555,	// (0x0002b4c0) popup_keymap_window

0x54b8,	// (0x00024423) status_icon_pane

0xa2fd,	// (0x00029268) cell_ai5_widget_pane_g3_ParamLimits

0xa314,	// (0x0002927f) cell_ai5_widget_pane_g4_ParamLimits

0xa320,	// (0x0002928b) cell_ai5_widget_pane_g5_ParamLimits

0xa344,	// (0x000292af) cell_ai5_widget_pane_g8_ParamLimits

0xa344,	// (0x000292af) cell_ai5_widget_pane_g8

0xa358,	// (0x000292c3) cell_ai5_widget_pane_g9_ParamLimits

0xa358,	// (0x000292c3) cell_ai5_widget_pane_g9

0xa36c,	// (0x000292d7) cell_ai5_widget_pane_g10_ParamLimits

0xa36c,	// (0x000292d7) cell_ai5_widget_pane_g10

0xa6a2,	// (0x0002960d) status_icon_pane_g1

0x3821,	// (0x0002278c) bg_popup_sub_pane_cp13

0xa6aa,	// (0x00029615) popup_keymap_window_t1

0xd74f,	// (0x0002c6ba) control_pane_g6_ParamLimits

0xd74f,	// (0x0002c6ba) control_pane_g6

0xd75c,	// (0x0002c6c7) control_pane_g7_ParamLimits

0xd75c,	// (0x0002c6c7) control_pane_g7

0xd769,	// (0x0002c6d4) control_pane_g8_ParamLimits

0xd769,	// (0x0002c6d4) control_pane_g8

0xf3fc,	// (0x0002e367) dt_sta_controll_pane_ParamLimits

0xf409,	// (0x0002e374) dt_sta_indi_pane_ParamLimits

0xf416,	// (0x0002e381) dt_sta_title_pane_ParamLimits

0x40bc,	// (0x00023027) aid_size_touch_scroll_bar_cale

0x1703,	// (0x0002066e) popup_discreet_window_ParamLimits

0x1703,	// (0x0002066e) popup_discreet_window

0xc135,	// (0x0002b0a0) popup_sk_window

0x5cec,	// (0x00024c57) bg_popup_sub_pane_cp28_ParamLimits

0x5cec,	// (0x00024c57) bg_popup_sub_pane_cp28

0xa6b8,	// (0x00029623) popup_discreet_window_g1_ParamLimits

0xa6b8,	// (0x00029623) popup_discreet_window_g1

0xa6d8,	// (0x00029643) popup_discreet_window_t1_ParamLimits

0xa6d8,	// (0x00029643) popup_discreet_window_t1

0xa6f6,	// (0x00029661) popup_discreet_window_t2_ParamLimits

0xa6f6,	// (0x00029661) popup_discreet_window_t2

0x0002,

0xfe50,	// (0x0002edbb) popup_discreet_window_t_ParamLimits

0xfe50,	// (0x0002edbb) popup_discreet_window_t

0x34ae,	// (0x00022419) popup_sk_window_g1

0x34b8,	// (0x00022423) popup_sk_window_g2

0x0001,

0xfe57,	// (0x0002edc2) popup_sk_window_g

0x34c0,	// (0x0002242b) popup_sk_window_t1

0x34ce,	// (0x00022439) popup_sk_window_t1_copy1

0xa2ed,	// (0x00029258) cell_ai5_widget_pane_g2_ParamLimits

0xa446,	// (0x000293b1) cell_ai5_widget_pane_t9_ParamLimits

0xa446,	// (0x000293b1) cell_ai5_widget_pane_t9

0x3821,	// (0x0002278c) main_fep_fshwr2_pane

0xcf47,	// (0x0002beb2) aid_fshwr2_btn_pane

0xcf58,	// (0x0002bec3) aid_fshwr2_syb_pane

0xcf69,	// (0x0002bed4) aid_fshwr2_txt_pane

0xcf75,	// (0x0002bee0) fshwr2_func_candi_pane

0xcf94,	// (0x0002beff) fshwr2_hwr_syb_pane

0xcfaf,	// (0x0002bf1a) fshwr2_icf_pane

0x3821,	// (0x0002278c) fshwr2_icf_bg_pane

0x354e,	// (0x000224b9) fshwr2_icf_pane_t1_ParamLimits

0x354e,	// (0x000224b9) fshwr2_icf_pane_t1

0x4804,	// (0x0002376f) fshwr2_func_candi_pane_g1

0xf442,	// (0x0002e3ad) fshwr2_func_candi_row_pane_ParamLimits

0xf442,	// (0x0002e3ad) fshwr2_func_candi_row_pane

0xcfdb,	// (0x0002bf46) cell_fshwr2_syb_pane_ParamLimits

0xcfdb,	// (0x0002bf46) cell_fshwr2_syb_pane

0x7ede,	// (0x00026e49) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7ede,	// (0x00026e49) fshwr2_hwr_syb_pane_g1

0x3821,	// (0x0002278c) bg_popup_call_pane_cp01

0xcff1,	// (0x0002bf5c) fshwr2_func_candi_cell_pane_ParamLimits

0xcff1,	// (0x0002bf5c) fshwr2_func_candi_cell_pane

0xf465,	// (0x0002e3d0) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf465,	// (0x0002e3d0) fshwr2_func_candi_cell_bg_pane

0xd03c,	// (0x0002bfa7) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd03c,	// (0x0002bfa7) fshwr2_func_candi_cell_pane_g1

0xd073,	// (0x0002bfde) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd073,	// (0x0002bfde) fshwr2_func_candi_cell_pane_t1

0x3821,	// (0x0002278c) bg_button_pane_cp08

0xa764,	// (0x000296cf) cell_fshwr2_syb_bg_pane

0xd08e,	// (0x0002bff9) cell_fshwr2_syb_bg_pane_g1

0xd096,	// (0x0002c001) cell_fshwr2_syb_bg_pane_t1

0x4184,	// (0x000230ef) main_tmo_pane

0xdd61,	// (0x0002cccc) uni_indicator_pane_g1_ParamLimits

0xdd77,	// (0x0002cce2) uni_indicator_pane_g2_ParamLimits

0xdd8d,	// (0x0002ccf8) uni_indicator_pane_g3_ParamLimits

0x683a,	// (0x000257a5) uni_indicator_pane_g4_ParamLimits

0x683a,	// (0x000257a5) uni_indicator_pane_g4

0x684e,	// (0x000257b9) uni_indicator_pane_g5_ParamLimits

0x684e,	// (0x000257b9) uni_indicator_pane_g5

0x684e,	// (0x000257b9) uni_indicator_pane_g6_ParamLimits

0x684e,	// (0x000257b9) uni_indicator_pane_g6

0xf915,	// (0x0002e880) uni_indicator_pane_g_ParamLimits

0xe7eb,	// (0x0002d756) popup_tmo_note_window_ParamLimits

0xe7eb,	// (0x0002d756) popup_tmo_note_window

0x4184,	// (0x000230ef) fshwr2_bg_pane

0xd064,	// (0x0002bfcf) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd064,	// (0x0002bfcf) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe5c,	// (0x0002edc7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe5c,	// (0x0002edc7) fshwr2_func_candi_cell_pane_g

0x7c60,	// (0x00026bcb) bg_popup_window_pane_cp01

0x3619,	// (0x00022584) bg_popup_window_pane_g1_cp01

0xa76c,	// (0x000296d7) bg_popup_window_pane_cp22_ParamLimits

0xa76c,	// (0x000296d7) bg_popup_window_pane_cp22

0xa77a,	// (0x000296e5) listscroll_tmo_link_pane_ParamLimits

0xa77a,	// (0x000296e5) listscroll_tmo_link_pane

0xa7ba,	// (0x00029725) popup_tmo_note_window_g1_ParamLimits

0xa7ba,	// (0x00029725) popup_tmo_note_window_g1

0xa7c7,	// (0x00029732) tmo_note_info_pane_ParamLimits

0xa7c7,	// (0x00029732) tmo_note_info_pane

0xf471,	// (0x0002e3dc) list_tmo_note_info_pane_g1_ParamLimits

0xf471,	// (0x0002e3dc) list_tmo_note_info_pane_g1

0xa7f8,	// (0x00029763) list_tmo_note_info_pane_g2_ParamLimits

0xa7f8,	// (0x00029763) list_tmo_note_info_pane_g2

0x0001,

0xfe61,	// (0x0002edcc) list_tmo_note_info_pane_g_ParamLimits

0xfe61,	// (0x0002edcc) list_tmo_note_info_pane_g

0xa814,	// (0x0002977f) list_tmo_note_info_text_pane_ParamLimits

0xa814,	// (0x0002977f) list_tmo_note_info_text_pane

0xa895,	// (0x00029800) list_tmo_link_pane

0xa8a2,	// (0x0002980d) scroll_pane_cp20

0xa8af,	// (0x0002981a) list_single_tmo_link_pane_ParamLimits

0xa8af,	// (0x0002981a) list_single_tmo_link_pane

0xa8bf,	// (0x0002982a) list_single_tmo_link_pane_t1

0xa8cd,	// (0x00029838) list_tmo_note_info_text_pane_t1_ParamLimits

0xa8cd,	// (0x00029838) list_tmo_note_info_text_pane_t1

0xd417,	// (0x0002c382) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd417,	// (0x0002c382) aid_size_touch_scroll_bar_cp01

0xbc15,	// (0x0002ab80) aid_size_touch_slider_marker

0xc125,	// (0x0002b090) popup_settings_window_ParamLimits

0xc125,	// (0x0002b090) popup_settings_window

0x0ae9,	// (0x0001fa54) popup_candi_list_indi_window

0x51c3,	// (0x0002412e) aid_touch_navi_pane_ParamLimits

0x2cc1,	// (0x00021c2c) rs_clock_indi_pane

0x2cca,	// (0x00021c35) sctrl_sk_bottom_pane_ParamLimits

0x2cdb,	// (0x00021c46) sctrl_sk_top_pane_ParamLimits

0x2dc2,	// (0x00021d2d) popup_fep_tooltip_window

0xa263,	// (0x000291ce) aid_size_cell_widget_grid_ParamLimits

0xa2d8,	// (0x00029243) cell_ai5_widget_pane_g1_ParamLimits

0xa2d8,	// (0x00029243) cell_ai5_widget_pane_g1

0xa32c,	// (0x00029297) cell_ai5_widget_pane_g6_ParamLimits

0xa338,	// (0x000292a3) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfddf,	// (0x0002ed4a) cell_ai5_widget_pane_g_ParamLimits

0xfddf,	// (0x0002ed4a) cell_ai5_widget_pane_g

0xa46a,	// (0x000293d5) cell_ai5_widget_pane_t10_ParamLimits

0xa46a,	// (0x000293d5) cell_ai5_widget_pane_t10

0xa488,	// (0x000293f3) grid_ai5_widget_pane_ParamLimits

0xa529,	// (0x00029494) cell_contacts_ai5_widget_pane_ParamLimits

0xa529,	// (0x00029494) cell_contacts_ai5_widget_pane

0xa70b,	// (0x00029676) popup_discreet_window_t3_ParamLimits

0xa70b,	// (0x00029676) popup_discreet_window_t3

0xcfc7,	// (0x0002bf32) popup_fshwr2_char_preview_window_ParamLimits

0xcfc7,	// (0x0002bf32) popup_fshwr2_char_preview_window

0xf488,	// (0x0002e3f3) tmo_note_info_pane_t1

0xf49d,	// (0x0002e408) tmo_note_info_pane_t2

0xf4b4,	// (0x0002e41f) tmo_note_info_pane_t3

0xa871,	// (0x000297dc) tmo_note_info_pane_t4

0xa883,	// (0x000297ee) tmo_note_info_pane_t5

0x0004,

0xfe66,	// (0x0002edd1) tmo_note_info_pane_t

0xa895,	// (0x00029800) list_tmo_link_pane_ParamLimits

0xa8a2,	// (0x0002980d) scroll_pane_cp20_ParamLimits

0x3821,	// (0x0002278c) bg_popup_fep_char_preview_window_cp01

0xa8e6,	// (0x00029851) popup_fshwr2_char_preview_window_t1

0xa8f4,	// (0x0002985f) popup_candi_list_indi_window_g1

0xa8fd,	// (0x00029868) bg_cell_contacts_ai5_widget_pane

0xa909,	// (0x00029874) cell_contacts_ai5_widget_pane_g1

0x8340,	// (0x000272ab) cell_contacts_ai5_widget_pane_g2

0xa91e,	// (0x00029889) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe71,	// (0x0002eddc) cell_contacts_ai5_widget_pane_g

0xa92a,	// (0x00029895) cell_contacts_ai5_widget_pane_t1

0x4184,	// (0x000230ef) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa9a1,	// (0x0002990c) settings_container_pane

0x4e17,	// (0x00023d82) listscroll_set_pane_copy1

0x7374,	// (0x000262df) scroll_pane_cp121_copy1

0x5a9d,	// (0x00024a08) set_content_pane_copy1

0xa9ad,	// (0x00029918) aid_height_set_list_copy1_ParamLimits

0xa9ad,	// (0x00029918) aid_height_set_list_copy1

0x6a46,	// (0x000259b1) aid_size_parent_copy1_ParamLimits

0x6a46,	// (0x000259b1) aid_size_parent_copy1

0xa9b9,	// (0x00029924) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa9b9,	// (0x00029924) button_value_adjust_pane_cp6_copy1

0x5161,	// (0x000240cc) list_highlight_pane_cp2_copy1_ParamLimits

0x5161,	// (0x000240cc) list_highlight_pane_cp2_copy1

0xa9cd,	// (0x00029938) list_set_pane_copy1_ParamLimits

0xa9cd,	// (0x00029938) list_set_pane_copy1

0xa93c,	// (0x000298a7) main_pane_set_t1_copy1_ParamLimits

0xa93c,	// (0x000298a7) main_pane_set_t1_copy1

0xa976,	// (0x000298e1) main_pane_set_t2_copy1_ParamLimits

0xa976,	// (0x000298e1) main_pane_set_t2_copy1

0xaa7a,	// (0x000299e5) main_pane_set_t3_copy1

0xaa88,	// (0x000299f3) main_pane_set_t4_copy1

0xa995,	// (0x00029900) set_content_pane_g1_copy1_ParamLimits

0xa995,	// (0x00029900) set_content_pane_g1_copy1

0xaa96,	// (0x00029a01) setting_code_pane_copy1

0xaa9e,	// (0x00029a09) setting_slider_graphic_pane_copy1

0xaa9e,	// (0x00029a09) setting_slider_pane_copy1

0xaa9e,	// (0x00029a09) setting_text_pane_copy1

0xaa9e,	// (0x00029a09) setting_volume_pane_copy1

0xaa96,	// (0x00029a01) settings_code_pane_cp2_copy1

0xaaa6,	// (0x00029a11) settings_code_pane_cp_copy1_ParamLimits

0xaaa6,	// (0x00029a11) settings_code_pane_cp_copy1

0x3622,	// (0x0002258d) volume_set_pane_copy1

0xaaba,	// (0x00029a25) volume_set_pane_g10_copy1

0xaac2,	// (0x00029a2d) volume_set_pane_g1_copy1

0xaaca,	// (0x00029a35) volume_set_pane_g2_copy1

0xaad2,	// (0x00029a3d) volume_set_pane_g3_copy1

0xaada,	// (0x00029a45) volume_set_pane_g4_copy1

0xaae2,	// (0x00029a4d) volume_set_pane_g5_copy1

0xaaea,	// (0x00029a55) volume_set_pane_g6_copy1

0xaaf2,	// (0x00029a5d) volume_set_pane_g7_copy1

0xaafa,	// (0x00029a65) volume_set_pane_g8_copy1

0xab02,	// (0x00029a6d) volume_set_pane_g9_copy1

0x3915,	// (0x00022880) bg_set_opt_pane_cp_copy1_ParamLimits

0x3915,	// (0x00022880) bg_set_opt_pane_cp_copy1

0x362a,	// (0x00022595) setting_slider_pane_t1_copy1_ParamLimits

0x362a,	// (0x00022595) setting_slider_pane_t1_copy1

0x3648,	// (0x000225b3) setting_slider_pane_t2_copy1_ParamLimits

0x3648,	// (0x000225b3) setting_slider_pane_t2_copy1

0x3662,	// (0x000225cd) setting_slider_pane_t3_copy1_ParamLimits

0x3662,	// (0x000225cd) setting_slider_pane_t3_copy1

0x367a,	// (0x000225e5) slider_set_pane_copy1_ParamLimits

0x367a,	// (0x000225e5) slider_set_pane_copy1

0x41dc,	// (0x00023147) set_opt_bg_pane_g1_copy2

0x41e4,	// (0x0002314f) set_opt_bg_pane_g2_copy2

0xab0a,	// (0x00029a75) set_opt_bg_pane_g3_copy2

0x41f4,	// (0x0002315f) set_opt_bg_pane_g4_copy2

0x41fc,	// (0x00023167) set_opt_bg_pane_g5_copy2

0x4204,	// (0x0002316f) set_opt_bg_pane_g6_copy2

0xab14,	// (0x00029a7f) set_opt_bg_pane_g7_copy2

0xab1c,	// (0x00029a87) set_opt_bg_pane_g8_copy2

0xab26,	// (0x00029a91) set_opt_bg_pane_g9_copy2

0x3690,	// (0x000225fb) aid_size_touch_slider_mark_copy1_ParamLimits

0x3690,	// (0x000225fb) aid_size_touch_slider_mark_copy1

0xab30,	// (0x00029a9b) slider_set_pane_g1_copy1

0x36a4,	// (0x0002260f) slider_set_pane_g2_copy1

0x27a4,	// (0x0002170f) slider_set_pane_g3_copy1_ParamLimits

0x27a4,	// (0x0002170f) slider_set_pane_g3_copy1

0x27b8,	// (0x00021723) slider_set_pane_g4_copy1_ParamLimits

0x27b8,	// (0x00021723) slider_set_pane_g4_copy1

0x27d0,	// (0x0002173b) slider_set_pane_g5_copy1_ParamLimits

0x27d0,	// (0x0002173b) slider_set_pane_g5_copy1

0x27a4,	// (0x0002170f) slider_set_pane_g6_copy1_ParamLimits

0x27a4,	// (0x0002170f) slider_set_pane_g6_copy1

0x36ac,	// (0x00022617) slider_set_pane_g7_copy1_ParamLimits

0x36ac,	// (0x00022617) slider_set_pane_g7_copy1

0x3835,	// (0x000227a0) bg_set_opt_pane_cp2_copy1

0xab39,	// (0x00029aa4) setting_slider_graphic_pane_g1_copy1

0xab42,	// (0x00029aad) setting_slider_graphic_pane_t1_copy1

0xab52,	// (0x00029abd) setting_slider_graphic_pane_t2_copy1

0xab62,	// (0x00029acd) slider_set_pane_cp_copy1

0xab72,	// (0x00029add) input_focus_pane_cp1_copy1

0xab7b,	// (0x00029ae6) list_set_text_pane_copy1

0xab83,	// (0x00029aee) setting_text_pane_g1_copy1

0x0320,	// (0x0001f28b) set_text_pane_t1_copy1

0xab72,	// (0x00029add) input_focus_pane_cp2_copy1

0xab83,	// (0x00029aee) setting_code_pane_g1_copy1

0xab8c,	// (0x00029af7) setting_code_pane_t1_copy1

0xab9a,	// (0x00029b05) list_set_graphic_pane_copy1

0x3835,	// (0x000227a0) bg_set_opt_pane_cp4_copy1

0x4b12,	// (0x00023a7d) list_set_graphic_pane_g1_copy1_ParamLimits

0x4b12,	// (0x00023a7d) list_set_graphic_pane_g1_copy1

0xabad,	// (0x00029b18) list_set_graphic_pane_g2_copy1

0x4b2a,	// (0x00023a95) list_set_graphic_pane_t1_copy1_ParamLimits

0x4b2a,	// (0x00023a95) list_set_graphic_pane_t1_copy1

0x7c60,	// (0x00026bcb) rs_clock_indi_pane_g1

0xabb5,	// (0x00029b20) rs_clock_indi_pane_t1

0xabc3,	// (0x00029b2e) rs_indi_pane

0xabcb,	// (0x00029b36) rs_indi_pane_g1

0xabd4,	// (0x00029b3f) rs_indi_pane_g2

0xabdd,	// (0x00029b48) rs_indi_pane_g3

0x0002,

0xfe78,	// (0x0002ede3) rs_indi_pane_g

0x4e17,	// (0x00023d82) bg_popup_preview_window_pane_cp03

0xabe6,	// (0x00029b51) popup_fep_tooltip_window_t1

0x88dc,	// (0x00027847) popup_note2_window_g2_ParamLimits

0x88dc,	// (0x00027847) popup_note2_window_g2

0x0001,

0xfc44,	// (0x0002ebaf) popup_note2_window_g_ParamLimits

0xfc44,	// (0x0002ebaf) popup_note2_window_g

0x8dd7,	// (0x00027d42) bg_popup_sub_pane_cp11_ParamLimits

0x8de4,	// (0x00027d4f) cell_ai3_links_pane_g1_ParamLimits

0x8dfb,	// (0x00027d66) cell_ai3_links_pane_t1

0x0320,	// (0x0001f28b) set_text_pane_t1_copy1_ParamLimits

0x4d28,	// (0x00023c93) cell_graphic_popup_pane_cp2_ParamLimits

0x4d28,	// (0x00023c93) cell_graphic_popup_pane_cp2

0xabf4,	// (0x00029b5f) cell_graphic_popup_pane_g1_cp2

0x3ecf,	// (0x00022e3a) cell_graphic_popup_pane_g2_cp2

0xabfc,	// (0x00029b67) cell_graphic_popup_pane_g3_cp2

0xac04,	// (0x00029b6f) cell_graphic_popup_pane_t2_cp2

0x3ee0,	// (0x00022e4b) grid_highlight_pane_cp3_cp2

0x4521,	// (0x0002348c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4184,	// (0x000230ef) main_tmo_pane_ParamLimits

0xe7df,	// (0x0002d74a) popup_tmo_big_image_note_window

0xa2c7,	// (0x00029232) cell_ai5_widget_list_pane

0xa2cf,	// (0x0002923a) cell_ai5_widget_lrg_icon_pane

0xf488,	// (0x0002e3f3) tmo_note_info_pane_t1_ParamLimits

0xf49d,	// (0x0002e408) tmo_note_info_pane_t2_ParamLimits

0xf4b4,	// (0x0002e41f) tmo_note_info_pane_t3_ParamLimits

0xa871,	// (0x000297dc) tmo_note_info_pane_t4_ParamLimits

0xa883,	// (0x000297ee) tmo_note_info_pane_t5_ParamLimits

0xfe66,	// (0x0002edd1) tmo_note_info_pane_t_ParamLimits

0xa9a1,	// (0x0002990c) settings_container_pane_ParamLimits

0xab6a,	// (0x00029ad5) indicator_popup_pane_cp5

0xab6a,	// (0x00029ad5) indicator_popup_pane_cp6

0xab9a,	// (0x00029b05) list_set_graphic_pane_copy1_ParamLimits

0x3821,	// (0x0002278c) bg_popup_window_pane_cp23

0xac12,	// (0x00029b7d) popup_tmo_big_image_note_window_g1

0xac1c,	// (0x00029b87) popup_tmo_big_image_note_window_t1

0xac2c,	// (0x00029b97) popup_tmo_big_image_note_window_t2

0xac3c,	// (0x00029ba7) popup_tmo_big_image_note_window_t3

0x0002,

0xfe7f,	// (0x0002edea) popup_tmo_big_image_note_window_t

0x7c60,	// (0x00026bcb) cell_ai5_widget_lrg_icon_pane_g1

0xac4c,	// (0x00029bb7) cell_ai5_widget_lrg_icon_pane_t1

0xac5a,	// (0x00029bc5) cell_ai5_widget_list_row_pane_ParamLimits

0xac5a,	// (0x00029bc5) cell_ai5_widget_list_row_pane

0xac71,	// (0x00029bdc) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xac71,	// (0x00029bdc) cell_ai5_widget_list_row_pane_g1

0xac7e,	// (0x00029be9) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xac7e,	// (0x00029be9) cell_ai5_widget_list_row_pane_t1

0xacaf,	// (0x00029c1a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xacaf,	// (0x00029c1a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfe86,	// (0x0002edf1) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfe86,	// (0x0002edf1) cell_ai5_widget_list_row_pane_t

0x3821,	// (0x0002278c) main_fep_vtchi_ss_pane

0xacf3,	// (0x00029c5e) popup_fep_char_pre_window

0xacfb,	// (0x00029c66) popup_fep_ituss_window

0xf4c9,	// (0x0002e434) popup_fep_vkbss_window

0xf4d6,	// (0x0002e441) grid_vkbss_keypad_pane_ParamLimits

0xf4d6,	// (0x0002e441) grid_vkbss_keypad_pane

0xad52,	// (0x00029cbd) ituss_keypad_pane

0x36ce,	// (0x00022639) aid_vkbss_key_offset_ParamLimits

0x36ce,	// (0x00022639) aid_vkbss_key_offset

0xd0a5,	// (0x0002c010) cell_vkbss_key_pane_ParamLimits

0xd0a5,	// (0x0002c010) cell_vkbss_key_pane

0xad61,	// (0x00029ccc) bg_cell_vkbss_key_g1_ParamLimits

0xad61,	// (0x00029ccc) bg_cell_vkbss_key_g1

0xf4e6,	// (0x0002e451) cell_vkbss_key_3p_pane_ParamLimits

0xf4e6,	// (0x0002e451) cell_vkbss_key_3p_pane

0xf500,	// (0x0002e46b) cell_vkbss_key_g1_ParamLimits

0xf500,	// (0x0002e46b) cell_vkbss_key_g1

0xf51a,	// (0x0002e485) cell_vkbss_key_t1_ParamLimits

0xf51a,	// (0x0002e485) cell_vkbss_key_t1

0x36f0,	// (0x0002265b) cell_ituss_key_pane_ParamLimits

0x36f0,	// (0x0002265b) cell_ituss_key_pane

0xadc0,	// (0x00029d2b) bg_cell_ituss_key_g1_ParamLimits

0xadc0,	// (0x00029d2b) bg_cell_ituss_key_g1

0xadcc,	// (0x00029d37) cell_ituss_key_pane_g1_ParamLimits

0xadcc,	// (0x00029d37) cell_ituss_key_pane_g1

0x3701,	// (0x0002266c) cell_ituss_key_pane_g2_ParamLimits

0x3701,	// (0x0002266c) cell_ituss_key_pane_g2

0x0002,

0xfe8d,	// (0x0002edf8) cell_ituss_key_pane_g_ParamLimits

0xfe8d,	// (0x0002edf8) cell_ituss_key_pane_g

0x372d,	// (0x00022698) cell_ituss_key_t1_ParamLimits

0x372d,	// (0x00022698) cell_ituss_key_t1

0x3767,	// (0x000226d2) cell_ituss_key_t2_ParamLimits

0x3767,	// (0x000226d2) cell_ituss_key_t2

0x3798,	// (0x00022703) cell_ituss_key_t3_ParamLimits

0x3798,	// (0x00022703) cell_ituss_key_t3

0x3767,	// (0x000226d2) cell_ituss_key_t4_ParamLimits

0x3767,	// (0x000226d2) cell_ituss_key_t4

0x0004,

0xfe94,	// (0x0002edff) cell_ituss_key_t_ParamLimits

0xfe94,	// (0x0002edff) cell_ituss_key_t

0xadf8,	// (0x00029d63) cell_vkbss_key_3p_pane_g1

0xae00,	// (0x00029d6b) cell_vkbss_key_3p_pane_g2

0xae08,	// (0x00029d73) cell_vkbss_key_3p_pane_g3

0x0002,

0xfe9f,	// (0x0002ee0a) cell_vkbss_key_3p_pane_g

0x3821,	// (0x0002278c) bg_popup_fep_char_preview_window_cp02

0x37db,	// (0x00022746) popup_fep_char_pre_window_t1

0xf3cc,	// (0x0002e337) main_ai5_sk_pane

0xa8fd,	// (0x00029868) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa909,	// (0x00029874) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8340,	// (0x000272ab) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa91e,	// (0x00029889) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe71,	// (0x0002eddc) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa92a,	// (0x00029895) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4184,	// (0x000230ef) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf545,	// (0x0002e4b0) main_ai5_sk_pane_g1

0x5b25,	// (0x00024a90) popup_query_code_window_g1

0xad11,	// (0x00029c7c) popup_fep_vkb_icf_pane

0xad30,	// (0x00029c9b) popup_fep_vtchi_icf_pane

0xae19,	// (0x00029d84) bg_icf_pane

0xae25,	// (0x00029d90) list_vkb_icf_pane

0xae34,	// (0x00029d9f) bg_icf_pane_cp01

0xae47,	// (0x00029db2) vtchi_icf_list_pane

0xae57,	// (0x00029dc2) list_vkb_icf_pane_t1_ParamLimits

0xae57,	// (0x00029dc2) list_vkb_icf_pane_t1

0xae6d,	// (0x00029dd8) vtchi_icf_list_pane_t1_ParamLimits

0xae6d,	// (0x00029dd8) vtchi_icf_list_pane_t1

0xacfb,	// (0x00029c66) popup_fep_ituss_window_ParamLimits

0xad30,	// (0x00029c9b) popup_fep_vtchi_icf_pane_ParamLimits

0xad52,	// (0x00029cbd) ituss_keypad_pane_ParamLimits

0x36c2,	// (0x0002262d) ituss_sks_pane

0xae19,	// (0x00029d84) bg_icf_pane_ParamLimits

0xacd7,	// (0x00029c42) icf_edit_indi_pane_ParamLimits

0xacd7,	// (0x00029c42) icf_edit_indi_pane

0xae25,	// (0x00029d90) list_vkb_icf_pane_ParamLimits

0xae34,	// (0x00029d9f) bg_icf_pane_cp01_ParamLimits

0xace6,	// (0x00029c51) icf_edit_indi_pane_cp01_ParamLimits

0xace6,	// (0x00029c51) icf_edit_indi_pane_cp01

0xae4f,	// (0x00029dba) vtchi_query_pane

0x7ede,	// (0x00026e49) icf_edit_indi_pane_g1_ParamLimits

0x7ede,	// (0x00026e49) icf_edit_indi_pane_g1

0xaede,	// (0x00029e49) icf_edit_indi_pane_g2_ParamLimits

0xaede,	// (0x00029e49) icf_edit_indi_pane_g2

0x0001,

0xfeb7,	// (0x0002ee22) icf_edit_indi_pane_g_ParamLimits

0xfeb7,	// (0x0002ee22) icf_edit_indi_pane_g

0xaeed,	// (0x00029e58) icf_edit_indi_pane_t1

0xae87,	// (0x00029df2) bg_input_focus_pane_cp042

0x40b3,	// (0x0002301e) vtchi_button_pane

0xae90,	// (0x00029dfb) vtchi_query_pane_t1

0xae9e,	// (0x00029e09) vtchi_query_pane_t2

0xaeac,	// (0x00029e17) vtchi_query_pane_t3

0x0002,

0xfea6,	// (0x0002ee11) vtchi_query_pane_t

0x3821,	// (0x0002278c) bg_button_pane_cp13

0xaeba,	// (0x00029e25) vtchi_button_pane_g1

0x37ea,	// (0x00022755) ituss_sks_pane_g1

0x37f5,	// (0x00022760) ituss_sks_pane_g2

0x0001,

0xfead,	// (0x0002ee18) ituss_sks_pane_g

0xaec2,	// (0x00029e2d) ituss_sks_pane_t1

0xaed0,	// (0x00029e3b) ituss_sks_pane_t2

0x0001,

0xfeb2,	// (0x0002ee1d) ituss_sks_pane_t

0x76fa,	// (0x00026665) indicator_nsta_pane_cp_g1

0x7702,	// (0x0002666d) indicator_nsta_pane_cp_g2

0x770a,	// (0x00026675) indicator_nsta_pane_cp_g3

0x76fa,	// (0x00026665) indicator_nsta_pane_cp_g4

0x7702,	// (0x0002666d) indicator_nsta_pane_cp_g5

0x770a,	// (0x00026675) indicator_nsta_pane_cp_g6

0x0005,

0xfa8e,	// (0x0002e9f9) indicator_nsta_pane_cp_g

0xf1e4,	// (0x0002e14f) cell_graphic2_pane_t2_ParamLimits

0xf1e4,	// (0x0002e14f) cell_graphic2_pane_t2

0x0001,

0x01cc,	// (0x0001f137) cell_graphic2_pane_t_ParamLimits

0x01cc,	// (0x0001f137) cell_graphic2_pane_t

0xf218,	// (0x0002e183) cell_graphic2_control_pane_t1

0xd5c2,	// (0x0002c52d) signal_pane_g3_ParamLimits

0xd5c2,	// (0x0002c52d) signal_pane_g3

0xd5d6,	// (0x0002c541) signal_pane_g4_ParamLimits

0xd5d6,	// (0x0002c541) signal_pane_g4

0xacc1,	// (0x00029c2c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xacc1,	// (0x00029c2c) cell_ai5_widget_list_row_pane_t3

0xade6,	// (0x00029d51) cell_ituss_key_pane_t1_ParamLimits

0xade6,	// (0x00029d51) cell_ituss_key_pane_t1

0x5770,	// (0x000246db) form_field_data_wide_pane_vc_t2_ParamLimits

0x5770,	// (0x000246db) form_field_data_wide_pane_vc_t2

0x5784,	// (0x000246ef) form_field_data_wide_pane_vc_t3_ParamLimits

0x5784,	// (0x000246ef) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fd,	// (0x0002e768) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fd,	// (0x0002e768) form_field_data_wide_pane_vc_t

0x73c2,	// (0x0002632d) form_field_slider_wide_pane_vc_t3_ParamLimits

0x73c2,	// (0x0002632d) form_field_slider_wide_pane_vc_t3

0x74a0,	// (0x0002640b) form_field_popup_wide_pane_vc_t2_ParamLimits

0x74a0,	// (0x0002640b) form_field_popup_wide_pane_vc_t2

0x74b7,	// (0x00026422) form_field_popup_wide_pane_vc_t3_ParamLimits

0x74b7,	// (0x00026422) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7d,	// (0x0002e9e8) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7d,	// (0x0002e9e8) form_field_popup_wide_pane_vc_t

0xcf47,	// (0x0002beb2) aid_fshwr2_btn_pane_ParamLimits

0xcf58,	// (0x0002bec3) aid_fshwr2_syb_pane_ParamLimits

0xcf69,	// (0x0002bed4) aid_fshwr2_txt_pane_ParamLimits

0x4184,	// (0x000230ef) fshwr2_bg_pane_ParamLimits

0xcf75,	// (0x0002bee0) fshwr2_func_candi_pane_ParamLimits

0xcf94,	// (0x0002beff) fshwr2_hwr_syb_pane_ParamLimits

0xcfaf,	// (0x0002bf1a) fshwr2_icf_pane_ParamLimits

0x1055,	// (0x0001ffc0) list_double_graphic_pane_vc_g4_ParamLimits

0x1055,	// (0x0001ffc0) list_double_graphic_pane_vc_g4

0x3721,	// (0x0002268c) cell_ituss_key_pane_g3_ParamLimits

0x3721,	// (0x0002268c) cell_ituss_key_pane_g3

0x37c9,	// (0x00022734) cell_ituss_key_t5_ParamLimits

0x37c9,	// (0x00022734) cell_ituss_key_t5

0xf4c9,	// (0x0002e434) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small

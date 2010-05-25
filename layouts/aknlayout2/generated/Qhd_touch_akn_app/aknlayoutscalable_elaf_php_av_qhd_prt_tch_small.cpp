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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001a918 };

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
0x7e50,	// (0x00022768) Screen

0x7e64,	// (0x0002277c) application_window_ParamLimits

0x7e64,	// (0x0002277c) application_window

0x7e7e,	// (0x00022796) screen_g1

0x5b33,	// (0x0002044b) area_bottom_pane_ParamLimits

0x5b33,	// (0x0002044b) area_bottom_pane

0x5bf3,	// (0x0002050b) area_top_pane_ParamLimits

0x5bf3,	// (0x0002050b) area_top_pane

0x5c87,	// (0x0002059f) main_pane_ParamLimits

0x5c87,	// (0x0002059f) main_pane

0x7e88,	// (0x000227a0) misc_graphics

0x984a,	// (0x00024162) battery_pane_ParamLimits

0x984a,	// (0x00024162) battery_pane

0xa518,	// (0x00024e30) bg_status_flat_pane_g8

0xa520,	// (0x00024e38) bg_status_flat_pane_g9

0x990c,	// (0x00024224) context_pane_ParamLimits

0x990c,	// (0x00024224) context_pane

0x9a22,	// (0x0002433a) navi_pane_ParamLimits

0x9a22,	// (0x0002433a) navi_pane

0x9aa6,	// (0x000243be) signal_pane_ParamLimits

0x9aa6,	// (0x000243be) signal_pane

0x0008,

0xf872,	// (0x0002a18a) bg_status_flat_pane_g

0x9b13,	// (0x0002442b) status_pane_g1_ParamLimits

0x9b13,	// (0x0002442b) status_pane_g1

0x9b27,	// (0x0002443f) status_pane_g2_ParamLimits

0x9b27,	// (0x0002443f) status_pane_g2

0x9b33,	// (0x0002444b) status_pane_g3_ParamLimits

0x9b33,	// (0x0002444b) status_pane_g3

0x0004,

0xf7a0,	// (0x0002a0b8) status_pane_g_ParamLimits

0xf7a0,	// (0x0002a0b8) status_pane_g

0x9b67,	// (0x0002447f) title_pane_ParamLimits

0x9b67,	// (0x0002447f) title_pane

0x9ba4,	// (0x000244bc) uni_indicator_pane_ParamLimits

0x9ba4,	// (0x000244bc) uni_indicator_pane

0x976e,	// (0x00024086) bg_list_pane_ParamLimits

0x976e,	// (0x00024086) bg_list_pane

0x5120,	// (0x0001fa38) find_pane

0x978e,	// (0x000240a6) listscroll_app_pane_ParamLimits

0x978e,	// (0x000240a6) listscroll_app_pane

0x979a,	// (0x000240b2) listscroll_form_pane

0x5128,	// (0x0001fa40) listscroll_gen_pane_ParamLimits

0x5128,	// (0x0001fa40) listscroll_gen_pane

0x655c,	// (0x00020e74) listscroll_set_pane

0x89b8,	// (0x000232d0) main_idle_act_pane

0x946a,	// (0x00023d82) main_idle_trad_pane

0x946a,	// (0x00023d82) main_list_empty_pane

0x97b4,	// (0x000240cc) main_midp_pane

0x97c0,	// (0x000240d8) main_pane_g1_ParamLimits

0x97c0,	// (0x000240d8) main_pane_g1

0x6564,	// (0x00020e7c) popup_ai_message_window_ParamLimits

0x6564,	// (0x00020e7c) popup_ai_message_window

0x660a,	// (0x00020f22) popup_fep_china_uni_window_ParamLimits

0x660a,	// (0x00020f22) popup_fep_china_uni_window

0x6666,	// (0x00020f7e) popup_fep_japan_candidate_window_ParamLimits

0x6666,	// (0x00020f7e) popup_fep_japan_candidate_window

0x6686,	// (0x00020f9e) popup_fep_japan_predictive_window_ParamLimits

0x6686,	// (0x00020f9e) popup_fep_japan_predictive_window

0x66b6,	// (0x00020fce) popup_find_window

0x66c3,	// (0x00020fdb) popup_grid_graphic_window_ParamLimits

0x66c3,	// (0x00020fdb) popup_grid_graphic_window

0x66ed,	// (0x00021005) popup_large_graphic_colour_window

0x6713,	// (0x0002102b) popup_menu_window_ParamLimits

0x6713,	// (0x0002102b) popup_menu_window

0x68cb,	// (0x000211e3) popup_note_image_window

0x68b7,	// (0x000211cf) popup_note_wait_window_ParamLimits

0x68b7,	// (0x000211cf) popup_note_wait_window

0x68b7,	// (0x000211cf) popup_note_window_ParamLimits

0x68b7,	// (0x000211cf) popup_note_window

0x6921,	// (0x00021239) popup_query_code_window_ParamLimits

0x6921,	// (0x00021239) popup_query_code_window

0x6935,	// (0x0002124d) popup_query_data_code_window_ParamLimits

0x6935,	// (0x0002124d) popup_query_data_code_window

0x6952,	// (0x0002126a) popup_query_data_window_ParamLimits

0x6952,	// (0x0002126a) popup_query_data_window

0x696e,	// (0x00021286) popup_query_sat_info_window_ParamLimits

0x696e,	// (0x00021286) popup_query_sat_info_window

0x69a7,	// (0x000212bf) popup_snote_single_graphic_window_ParamLimits

0x69a7,	// (0x000212bf) popup_snote_single_graphic_window

0x69a7,	// (0x000212bf) popup_snote_single_text_window_ParamLimits

0x69a7,	// (0x000212bf) popup_snote_single_text_window

0x69bc,	// (0x000212d4) popup_sub_window_general

0x6aec,	// (0x00021404) popup_window_general_ParamLimits

0x6aec,	// (0x00021404) popup_window_general

0x97ce,	// (0x000240e6) power_save_pane

0x63ee,	// (0x00020d06) control_pane_g1_ParamLimits

0x63ee,	// (0x00020d06) control_pane_g1

0x6415,	// (0x00020d2d) control_pane_g2_ParamLimits

0x6415,	// (0x00020d2d) control_pane_g2

0x9731,	// (0x00024049) control_pane_g3_ParamLimits

0x9731,	// (0x00024049) control_pane_g3

0x0007,

0xf788,	// (0x0002a0a0) control_pane_g_ParamLimits

0xf788,	// (0x0002a0a0) control_pane_g

0x645f,	// (0x00020d77) control_pane_t1_ParamLimits

0x645f,	// (0x00020d77) control_pane_t1

0x64b3,	// (0x00020dcb) control_pane_t2_ParamLimits

0x64b3,	// (0x00020dcb) control_pane_t2

0x0002,

0xf799,	// (0x0002a0b1) control_pane_t_ParamLimits

0xf799,	// (0x0002a0b1) control_pane_t

0x9656,	// (0x00023f6e) navi_navi_volume_pane_cp1

0x965e,	// (0x00023f76) status_small_icon_pane

0x9666,	// (0x00023f7e) status_small_pane_g1_ParamLimits

0x9666,	// (0x00023f7e) status_small_pane_g1

0x969a,	// (0x00023fb2) status_small_pane_g2_ParamLimits

0x969a,	// (0x00023fb2) status_small_pane_g2

0x96a6,	// (0x00023fbe) status_small_pane_g3_ParamLimits

0x96a6,	// (0x00023fbe) status_small_pane_g3

0x96b2,	// (0x00023fca) status_small_pane_g4_ParamLimits

0x96b2,	// (0x00023fca) status_small_pane_g4

0x96be,	// (0x00023fd6) status_small_pane_g5_ParamLimits

0x96be,	// (0x00023fd6) status_small_pane_g5

0x96cc,	// (0x00023fe4) status_small_pane_g6_ParamLimits

0x96cc,	// (0x00023fe4) status_small_pane_g6

0x0007,

0xf777,	// (0x0002a08f) status_small_pane_g_ParamLimits

0xf777,	// (0x0002a08f) status_small_pane_g

0x96fb,	// (0x00024013) status_small_pane_t1

0x971d,	// (0x00024035) status_small_wait_pane_ParamLimits

0x971d,	// (0x00024035) status_small_wait_pane

0x8edc,	// (0x000237f4) aid_levels_signal_ParamLimits

0x8edc,	// (0x000237f4) aid_levels_signal

0x8eee,	// (0x00023806) signal_pane_g1_ParamLimits

0x8eee,	// (0x00023806) signal_pane_g1

0x8f03,	// (0x0002381b) signal_pane_g2_ParamLimits

0x8f03,	// (0x0002381b) signal_pane_g2

0x0003,

0xf708,	// (0x0002a020) signal_pane_g_ParamLimits

0xf708,	// (0x0002a020) signal_pane_g

0x8f3e,	// (0x00023856) context_pane_g1

0x7e92,	// (0x000227aa) title_pane_g1

0x7ec8,	// (0x000227e0) title_pane_t1

0x7f30,	// (0x00022848) title_pane_t2

0x7f56,	// (0x0002286e) title_pane_t3

0x0002,

0xf557,	// (0x00029e6f) title_pane_t

0x9bbc,	// (0x000244d4) aid_levels_battery_ParamLimits

0x9bbc,	// (0x000244d4) aid_levels_battery

0x9bd0,	// (0x000244e8) battery_pane_g1_ParamLimits

0x9bd0,	// (0x000244e8) battery_pane_g1

0x9be6,	// (0x000244fe) battery_pane_g2_ParamLimits

0x9be6,	// (0x000244fe) battery_pane_g2

0x0001,

0xf7ab,	// (0x0002a0c3) battery_pane_g_ParamLimits

0xf7ab,	// (0x0002a0c3) battery_pane_g

0xae4e,	// (0x00025766) uni_indicator_pane_g1

0xae64,	// (0x0002577c) uni_indicator_pane_g2

0xae7a,	// (0x00025792) uni_indicator_pane_g3

0x0005,

0xf91a,	// (0x0002a232) uni_indicator_pane_g

0x92dc,	// (0x00023bf4) navi_icon_pane_ParamLimits

0x92dc,	// (0x00023bf4) navi_icon_pane

0x921a,	// (0x00023b32) navi_midp_pane

0x92f8,	// (0x00023c10) navi_navi_pane

0x9302,	// (0x00023c1a) navi_text_pane_ParamLimits

0x9302,	// (0x00023c1a) navi_text_pane

0x7e7e,	// (0x00022796) status_small_wait_pane_g1

0x8385,	// (0x00022c9d) status_small_wait_pane_g2

0x0001,

0xf915,	// (0x0002a22d) status_small_wait_pane_g

0xab73,	// (0x0002548b) navi_navi_icon_text_pane

0xab7b,	// (0x00025493) navi_navi_pane_g1_ParamLimits

0xab7b,	// (0x00025493) navi_navi_pane_g1

0xab8d,	// (0x000254a5) navi_navi_pane_g2_ParamLimits

0xab8d,	// (0x000254a5) navi_navi_pane_g2

0x0001,

0xf8e3,	// (0x0002a1fb) navi_navi_pane_g_ParamLimits

0xf8e3,	// (0x0002a1fb) navi_navi_pane_g

0xab9f,	// (0x000254b7) navi_navi_tabs_pane

0xaba8,	// (0x000254c0) navi_navi_text_pane

0xab73,	// (0x0002548b) navi_navi_volume_pane

0xab4f,	// (0x00025467) navi_text_pane_t1

0xab43,	// (0x0002545b) navi_icon_pane_g1

0xaa96,	// (0x000253ae) navi_navi_text_pane_t1

0x6d76,	// (0x0002168e) navi_navi_volume_pane_g1

0x6d7e,	// (0x00021696) volume_small_pane

0xa9fc,	// (0x00025314) navi_navi_icon_text_pane_g1

0xaa04,	// (0x0002531c) navi_navi_icon_text_pane_t1

0x92f8,	// (0x00023c10) navi_tabs_2_long_pane

0x92f8,	// (0x00023c10) navi_tabs_2_pane

0x92f8,	// (0x00023c10) navi_tabs_3_long_pane

0x92f8,	// (0x00023c10) navi_tabs_3_pane

0x92f8,	// (0x00023c10) navi_tabs_4_pane

0x6d56,	// (0x0002166e) tabs_2_active_pane_ParamLimits

0x6d56,	// (0x0002166e) tabs_2_active_pane

0x6d66,	// (0x0002167e) tabs_2_passive_pane_ParamLimits

0x6d66,	// (0x0002167e) tabs_2_passive_pane

0x6d24,	// (0x0002163c) tabs_3_active_pane_ParamLimits

0x6d24,	// (0x0002163c) tabs_3_active_pane

0x6d34,	// (0x0002164c) tabs_3_passive_pane_ParamLimits

0x6d34,	// (0x0002164c) tabs_3_passive_pane

0x6d45,	// (0x0002165d) tabs_3_passive_pane_cp_ParamLimits

0x6d45,	// (0x0002165d) tabs_3_passive_pane_cp

0x6ce0,	// (0x000215f8) tabs_4_active_pane_ParamLimits

0x6ce0,	// (0x000215f8) tabs_4_active_pane

0x6cf1,	// (0x00021609) tabs_4_passive_pane_ParamLimits

0x6cf1,	// (0x00021609) tabs_4_passive_pane

0x6d02,	// (0x0002161a) tabs_4_passive_pane_cp_ParamLimits

0x6d02,	// (0x0002161a) tabs_4_passive_pane_cp

0x6d13,	// (0x0002162b) tabs_4_passive_pane_cp2_ParamLimits

0x6d13,	// (0x0002162b) tabs_4_passive_pane_cp2

0x6cbc,	// (0x000215d4) tabs_2_long_active_pane_ParamLimits

0x6cbc,	// (0x000215d4) tabs_2_long_active_pane

0x6cce,	// (0x000215e6) tabs_2_long_passive_pane_ParamLimits

0x6cce,	// (0x000215e6) tabs_2_long_passive_pane

0x6c7d,	// (0x00021595) tabs_3_long_active_pane_ParamLimits

0x6c7d,	// (0x00021595) tabs_3_long_active_pane

0x6c90,	// (0x000215a8) tabs_3_long_passive_pane_ParamLimits

0x6c90,	// (0x000215a8) tabs_3_long_passive_pane

0x6ca9,	// (0x000215c1) tabs_3_long_passive_pane_cp_ParamLimits

0x6ca9,	// (0x000215c1) tabs_3_long_passive_pane_cp

0x6c23,	// (0x0002153b) volume_small_pane_g1

0x6c2c,	// (0x00021544) volume_small_pane_g2

0x6c35,	// (0x0002154d) volume_small_pane_g3

0x6c3e,	// (0x00021556) volume_small_pane_g4

0x6c47,	// (0x0002155f) volume_small_pane_g5

0x6c50,	// (0x00021568) volume_small_pane_g6

0x6c59,	// (0x00021571) volume_small_pane_g7

0x6c62,	// (0x0002157a) volume_small_pane_g8

0x6c6b,	// (0x00021583) volume_small_pane_g9

0x6c74,	// (0x0002158c) volume_small_pane_g10

0x0009,

0xf8af,	// (0x0002a1c7) volume_small_pane_g

0x7f68,	// (0x00022880) bg_active_tab_pane_cp2_ParamLimits

0x7f68,	// (0x00022880) bg_active_tab_pane_cp2

0x7f76,	// (0x0002288e) tabs_3_active_pane_g1

0x7f7e,	// (0x00022896) tabs_3_active_pane_t1

0x7f68,	// (0x00022880) bg_passive_tab_pane_cp2_ParamLimits

0x7f68,	// (0x00022880) bg_passive_tab_pane_cp2

0x7f76,	// (0x0002288e) tabs_3_passive_pane_g1

0x7f7e,	// (0x00022896) tabs_3_passive_pane_t1

0x7f68,	// (0x00022880) bg_active_tab_pane_cp3_ParamLimits

0x7f68,	// (0x00022880) bg_active_tab_pane_cp3

0x7f90,	// (0x000228a8) tabs_4_active_pane_g1

0x7f98,	// (0x000228b0) tabs_4_active_pane_t1

0x7f68,	// (0x00022880) bg_passive_tab_pane_cp3_ParamLimits

0x7f68,	// (0x00022880) bg_passive_tab_pane_cp3

0x7f90,	// (0x000228a8) tabs_4_1_passive_pane_g1

0x7f98,	// (0x000228b0) tabs_4_1_passive_pane_t1

0x97b4,	// (0x000240cc) list_highlight_pane_cp2

0xb0c1,	// (0x000259d9) list_set_pane_ParamLimits

0xb0c1,	// (0x000259d9) list_set_pane

0xb167,	// (0x00025a7f) main_pane_set_t1_ParamLimits

0xb167,	// (0x00025a7f) main_pane_set_t1

0xb187,	// (0x00025a9f) main_pane_set_t2_ParamLimits

0xb187,	// (0x00025a9f) main_pane_set_t2

0xb19b,	// (0x00025ab3) main_pane_set_t3_ParamLimits

0xb19b,	// (0x00025ab3) main_pane_set_t3

0xb1ad,	// (0x00025ac5) main_pane_set_t4_ParamLimits

0xb1ad,	// (0x00025ac5) main_pane_set_t4

0x0003,

0xf97f,	// (0x0002a297) main_pane_set_t_ParamLimits

0xf97f,	// (0x0002a297) main_pane_set_t

0xb1bf,	// (0x00025ad7) setting_code_pane

0xb1cb,	// (0x00025ae3) setting_slider_graphic_pane

0xb1cb,	// (0x00025ae3) setting_slider_pane

0xb1cb,	// (0x00025ae3) setting_text_pane

0xb1cb,	// (0x00025ae3) setting_volume_pane

0x5ed6,	// (0x000207ee) volume_set_pane

0x7f68,	// (0x00022880) bg_set_opt_pane_cp

0x5ede,	// (0x000207f6) setting_slider_pane_t1

0x5ef7,	// (0x0002080f) setting_slider_pane_t2

0x5f11,	// (0x00020829) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00029e76) setting_slider_pane_t

0x5f29,	// (0x00020841) slider_set_pane

0x7e88,	// (0x000227a0) bg_set_opt_pane_cp2

0x7faa,	// (0x000228c2) setting_slider_graphic_pane_g1

0x5f3f,	// (0x00020857) setting_slider_graphic_pane_t1

0x5f4f,	// (0x00020867) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00029e7d) setting_slider_graphic_pane_t

0x5f5f,	// (0x00020877) slider_set_pane_cp

0x7e88,	// (0x000227a0) input_focus_pane_cp1

0xb080,	// (0x00025998) list_set_text_pane

0x7e7e,	// (0x00022796) setting_text_pane_g1

0x7e88,	// (0x000227a0) input_focus_pane_cp2

0x7e7e,	// (0x00022796) setting_code_pane_g1

0x7fb3,	// (0x000228cb) setting_code_pane_t1

0x4973,	// (0x0001f28b) set_text_pane_t1_ParamLimits

0x4973,	// (0x0001f28b) set_text_pane_t1

0x882f,	// (0x00023147) set_opt_bg_pane_g1

0x8837,	// (0x0002314f) set_opt_bg_pane_g2

0xb05a,	// (0x00025972) set_opt_bg_pane_g3

0x8847,	// (0x0002315f) set_opt_bg_pane_g4

0x884f,	// (0x00023167) set_opt_bg_pane_g5

0x8857,	// (0x0002316f) set_opt_bg_pane_g6

0xb064,	// (0x0002597c) set_opt_bg_pane_g7

0xb06c,	// (0x00025984) set_opt_bg_pane_g8

0xb076,	// (0x0002598e) set_opt_bg_pane_g9

0x0008,

0xf96c,	// (0x0002a284) set_opt_bg_pane_g

0xb04d,	// (0x00025965) slider_set_pane_g1

0x6deb,	// (0x00021703) slider_set_pane_g2

0x0006,

0xf95d,	// (0x0002a275) slider_set_pane_g

0x6d87,	// (0x0002169f) volume_set_pane_g1

0x6d8f,	// (0x000216a7) volume_set_pane_g2

0x6d97,	// (0x000216af) volume_set_pane_g3

0x6d9f,	// (0x000216b7) volume_set_pane_g4

0x6da7,	// (0x000216bf) volume_set_pane_g5

0x6daf,	// (0x000216c7) volume_set_pane_g6

0x6db7,	// (0x000216cf) volume_set_pane_g7

0x6dbf,	// (0x000216d7) volume_set_pane_g8

0x6dc7,	// (0x000216df) volume_set_pane_g9

0x6dcf,	// (0x000216e7) volume_set_pane_g10

0x0009,

0xf935,	// (0x0002a24d) volume_set_pane_g

0x7fc1,	// (0x000228d9) indicator_pane_ParamLimits

0x7fc1,	// (0x000228d9) indicator_pane

0x7fcd,	// (0x000228e5) main_idle_pane_g2_ParamLimits

0x7fcd,	// (0x000228e5) main_idle_pane_g2

0x7ff5,	// (0x0002290d) main_pane_idle_g1_ParamLimits

0x7ff5,	// (0x0002290d) main_pane_idle_g1

0x8002,	// (0x0002291a) popup_clock_digital_analogue_window_ParamLimits

0x8002,	// (0x0002291a) popup_clock_digital_analogue_window

0x8019,	// (0x00022931) soft_indicator_pane_ParamLimits

0x8019,	// (0x00022931) soft_indicator_pane

0x8025,	// (0x0002293d) wallpaper_pane_ParamLimits

0x8025,	// (0x0002293d) wallpaper_pane

0x7e7e,	// (0x00022796) wallpaper_pane_g1

0x8039,	// (0x00022951) indicator_pane_g1_ParamLimits

0x8039,	// (0x00022951) indicator_pane_g1

0xb484,	// (0x00025d9c) navi_navi_icon_text_pane_srt_g1

0x8054,	// (0x0002296c) soft_indicator_pane_t1

0x806e,	// (0x00022986) aid_ps_area_pane

0x807f,	// (0x00022997) aid_ps_clock_pane

0x808d,	// (0x000229a5) aid_ps_indicator_pane

0x8099,	// (0x000229b1) indicator_ps_pane_ParamLimits

0x8099,	// (0x000229b1) indicator_ps_pane

0x80a8,	// (0x000229c0) power_save_pane_g1_ParamLimits

0x80a8,	// (0x000229c0) power_save_pane_g1

0x80b4,	// (0x000229cc) power_save_pane_g2_ParamLimits

0x80b4,	// (0x000229cc) power_save_pane_g2

0x5ae7,	// (0x000203ff) aid_navinavi_width_pane

0x806e,	// (0x00022986) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00029e82) power_save_pane_g_ParamLimits

0xf56a,	// (0x00029e82) power_save_pane_g

0x80c2,	// (0x000229da) power_save_pane_t1_ParamLimits

0x80c2,	// (0x000229da) power_save_pane_t1

0x807f,	// (0x00022997) aid_ps_clock_pane_ParamLimits

0x808d,	// (0x000229a5) aid_ps_indicator_pane_ParamLimits

0x80d4,	// (0x000229ec) power_save_pane_t4_ParamLimits

0x80d4,	// (0x000229ec) power_save_pane_t4

0x0001,

0xf56f,	// (0x00029e87) power_save_pane_t_ParamLimits

0xf56f,	// (0x00029e87) power_save_pane_t

0x80fe,	// (0x00022a16) power_save_t3_ParamLimits

0x80fe,	// (0x00022a16) power_save_t3

0x80e9,	// (0x00022a01) power_save_t2_ParamLimits

0x80e9,	// (0x00022a01) power_save_t2

0x8113,	// (0x00022a2b) indicator_ps_pane_g1

0x811c,	// (0x00022a34) ai_gene_pane_ParamLimits

0x811c,	// (0x00022a34) ai_gene_pane

0x8128,	// (0x00022a40) ai_links_pane_ParamLimits

0x8128,	// (0x00022a40) ai_links_pane

0x8134,	// (0x00022a4c) indicator_pane_cp1_ParamLimits

0x8134,	// (0x00022a4c) indicator_pane_cp1

0x8140,	// (0x00022a58) main_pane_idle_g1_cp_ParamLimits

0x8140,	// (0x00022a58) main_pane_idle_g1_cp

0x814c,	// (0x00022a64) popup_ai_links_title_window

0x8155,	// (0x00022a6d) soft_indicator_pane_cp1_ParamLimits

0x8155,	// (0x00022a6d) soft_indicator_pane_cp1

0xae3c,	// (0x00025754) ai_links_pane_g1

0xae45,	// (0x0002575d) grid_ai_links_pane

0xae1f,	// (0x00025737) ai_gene_pane_1

0xae2a,	// (0x00025742) ai_gene_pane_2

0xae33,	// (0x0002574b) list_highlight_pane_cp4

0xae03,	// (0x0002571b) cell_ai_link_pane_ParamLimits

0xae03,	// (0x0002571b) cell_ai_link_pane

0xadfb,	// (0x00025713) cell_ai_link_pane_g1

0x8385,	// (0x00022c9d) cell_ai_link_pane_g2

0x0001,

0xf910,	// (0x0002a228) cell_ai_link_pane_g

0x7e88,	// (0x000227a0) grid_highlight_cp2

0x7e88,	// (0x000227a0) bg_popup_sub_pane_cp1

0x816f,	// (0x00022a87) popup_ai_links_title_window_t1

0xad49,	// (0x00025661) ai_gene_pane_1_g1_ParamLimits

0xad49,	// (0x00025661) ai_gene_pane_1_g1

0xad55,	// (0x0002566d) ai_gene_pane_1_g2_ParamLimits

0xad55,	// (0x0002566d) ai_gene_pane_1_g2

0x0001,

0xf906,	// (0x0002a21e) ai_gene_pane_1_g_ParamLimits

0xf906,	// (0x0002a21e) ai_gene_pane_1_g

0xad62,	// (0x0002567a) ai_gene_pane_1_t1_ParamLimits

0xad62,	// (0x0002567a) ai_gene_pane_1_t1

0xad96,	// (0x000256ae) grid_ai_soft_ind_pane

0xad34,	// (0x0002564c) ai_gene_pane_2_t1_ParamLimits

0xad34,	// (0x0002564c) ai_gene_pane_2_t1

0x817e,	// (0x00022a96) main_pane_empty_t1_ParamLimits

0x817e,	// (0x00022a96) main_pane_empty_t1

0x8196,	// (0x00022aae) main_pane_empty_t2_ParamLimits

0x8196,	// (0x00022aae) main_pane_empty_t2

0x81ab,	// (0x00022ac3) main_pane_empty_t3_ParamLimits

0x81ab,	// (0x00022ac3) main_pane_empty_t3

0x81bd,	// (0x00022ad5) main_pane_empty_t4_ParamLimits

0x81bd,	// (0x00022ad5) main_pane_empty_t4

0x81cf,	// (0x00022ae7) main_pane_empty_t5_ParamLimits

0x81cf,	// (0x00022ae7) main_pane_empty_t5

0x0004,

0xf574,	// (0x00029e8c) main_pane_empty_t_ParamLimits

0xf574,	// (0x00029e8c) main_pane_empty_t

0x8880,	// (0x00023198) bg_popup_window_pane_ParamLimits

0x8880,	// (0x00023198) bg_popup_window_pane

0xaaa4,	// (0x000253bc) find_popup_pane_cp2_ParamLimits

0xaaa4,	// (0x000253bc) find_popup_pane_cp2

0xaab0,	// (0x000253c8) heading_pane_ParamLimits

0xaab0,	// (0x000253c8) heading_pane

0x7e88,	// (0x000227a0) bg_popup_sub_pane

0xaa1e,	// (0x00025336) bg_popup_window_pane_g1_ParamLimits

0xaa1e,	// (0x00025336) bg_popup_window_pane_g1

0xaa2a,	// (0x00025342) bg_popup_window_pane_g2_ParamLimits

0xaa2a,	// (0x00025342) bg_popup_window_pane_g2

0xaa36,	// (0x0002534e) bg_popup_window_pane_g3_ParamLimits

0xaa36,	// (0x0002534e) bg_popup_window_pane_g3

0xaa42,	// (0x0002535a) bg_popup_window_pane_g4_ParamLimits

0xaa42,	// (0x0002535a) bg_popup_window_pane_g4

0xaa4e,	// (0x00025366) bg_popup_window_pane_g5_ParamLimits

0xaa4e,	// (0x00025366) bg_popup_window_pane_g5

0xaa5a,	// (0x00025372) bg_popup_window_pane_g6_ParamLimits

0xaa5a,	// (0x00025372) bg_popup_window_pane_g6

0xaa66,	// (0x0002537e) bg_popup_window_pane_g7_ParamLimits

0xaa66,	// (0x0002537e) bg_popup_window_pane_g7

0xaa72,	// (0x0002538a) bg_popup_window_pane_g8_ParamLimits

0xaa72,	// (0x0002538a) bg_popup_window_pane_g8

0xaa7e,	// (0x00025396) bg_popup_window_pane_g9_ParamLimits

0xaa7e,	// (0x00025396) bg_popup_window_pane_g9

0xaa8a,	// (0x000253a2) bg_popup_window_pane_g10_ParamLimits

0xaa8a,	// (0x000253a2) bg_popup_window_pane_g10

0x0009,

0xf8ce,	// (0x0002a1e6) bg_popup_window_pane_g_ParamLimits

0xf8ce,	// (0x0002a1e6) bg_popup_window_pane_g

0xa9b3,	// (0x000252cb) bg_popup_heading_pane_ParamLimits

0xa9b3,	// (0x000252cb) bg_popup_heading_pane

0x6e73,	// (0x0002178b) tabs_4_passive_pane_cp_srt_ParamLimits

0x6e73,	// (0x0002178b) tabs_4_passive_pane_cp_srt

0x6e85,	// (0x0002179d) tabs_4_passive_pane_srt_ParamLimits

0xa9c7,	// (0x000252df) heading_pane_g2

0x6e85,	// (0x0002179d) tabs_4_passive_pane_srt

0x97b4,	// (0x000240cc) bg_passive_tab_pane_cp3_srt_ParamLimits

0x97b4,	// (0x000240cc) bg_passive_tab_pane_cp3_srt

0xa9cf,	// (0x000252e7) heading_pane_t1_ParamLimits

0xa9cf,	// (0x000252e7) heading_pane_t1

0xa9e6,	// (0x000252fe) heading_pane_t2_ParamLimits

0xa9e6,	// (0x000252fe) heading_pane_t2

0x0001,

0xf8c9,	// (0x0002a1e1) heading_pane_t_ParamLimits

0xf8c9,	// (0x0002a1e1) heading_pane_t

0xa4e0,	// (0x00024df8) bg_popup_heading_pane_g1

0xa58f,	// (0x00024ea7) bg_popup_heading_pane_g2

0xa599,	// (0x00024eb1) bg_popup_heading_pane_g3

0xa5a3,	// (0x00024ebb) bg_popup_heading_pane_g4

0xa5ad,	// (0x00024ec5) bg_popup_heading_pane_g5

0xa5b7,	// (0x00024ecf) bg_popup_heading_pane_g6

0xa5bf,	// (0x00024ed7) bg_popup_heading_pane_g7

0xa5c7,	// (0x00024edf) bg_popup_heading_pane_g8

0xa5d1,	// (0x00024ee9) bg_popup_heading_pane_g9

0x0008,

0xf885,	// (0x0002a19d) bg_popup_heading_pane_g

0x9cbe,	// (0x000245d6) bg_popup_sub_pane_g1

0x9cc6,	// (0x000245de) bg_popup_sub_pane_g2

0x9cce,	// (0x000245e6) bg_popup_sub_pane_g3

0x9cd6,	// (0x000245ee) bg_popup_sub_pane_g4

0x9cde,	// (0x000245f6) bg_popup_sub_pane_g5

0x9ce6,	// (0x000245fe) bg_popup_sub_pane_g6

0x9cee,	// (0x00024606) bg_popup_sub_pane_g7

0x9cf6,	// (0x0002460e) bg_popup_sub_pane_g8

0x9cfe,	// (0x00024616) bg_popup_sub_pane_g9

0x0008,

0xf85f,	// (0x0002a177) bg_popup_sub_pane_g

0x81e3,	// (0x00022afb) bg_popup_window_pane_cp5_ParamLimits

0x81e3,	// (0x00022afb) bg_popup_window_pane_cp5

0x81ff,	// (0x00022b17) popup_note_window_g1_ParamLimits

0x81ff,	// (0x00022b17) popup_note_window_g1

0x820b,	// (0x00022b23) popup_note_window_t1_ParamLimits

0x820b,	// (0x00022b23) popup_note_window_t1

0x8221,	// (0x00022b39) popup_note_window_t2_ParamLimits

0x8221,	// (0x00022b39) popup_note_window_t2

0x8237,	// (0x00022b4f) popup_note_window_t3_ParamLimits

0x8237,	// (0x00022b4f) popup_note_window_t3

0x824d,	// (0x00022b65) popup_note_window_t4_ParamLimits

0x824d,	// (0x00022b65) popup_note_window_t4

0x8275,	// (0x00022b8d) popup_note_window_t5_ParamLimits

0x8275,	// (0x00022b8d) popup_note_window_t5

0x0004,

0xf57f,	// (0x00029e97) popup_note_window_t_ParamLimits

0xf57f,	// (0x00029e97) popup_note_window_t

0x8299,	// (0x00022bb1) bg_popup_window_pane_cp6_ParamLimits

0x8299,	// (0x00022bb1) bg_popup_window_pane_cp6

0xa45c,	// (0x00024d74) popup_note_image_window_g1_ParamLimits

0xa45c,	// (0x00024d74) popup_note_image_window_g1

0xa468,	// (0x00024d80) popup_note_image_window_g2_ParamLimits

0xa468,	// (0x00024d80) popup_note_image_window_g2

0x0001,

0xf853,	// (0x0002a16b) popup_note_image_window_g_ParamLimits

0xf853,	// (0x0002a16b) popup_note_image_window_g

0xa481,	// (0x00024d99) popup_note_image_window_t1_ParamLimits

0xa481,	// (0x00024d99) popup_note_image_window_t1

0xa49a,	// (0x00024db2) popup_note_image_window_t2_ParamLimits

0xa49a,	// (0x00024db2) popup_note_image_window_t2

0xa4b3,	// (0x00024dcb) popup_note_image_window_t3_ParamLimits

0xa4b3,	// (0x00024dcb) popup_note_image_window_t3

0x0002,

0xf858,	// (0x0002a170) popup_note_image_window_t_ParamLimits

0xf858,	// (0x0002a170) popup_note_image_window_t

0xa31d,	// (0x00024c35) bg_popup_window_pane_cp7_ParamLimits

0xa31d,	// (0x00024c35) bg_popup_window_pane_cp7

0xa34d,	// (0x00024c65) popup_note_wait_window_g1_ParamLimits

0xa34d,	// (0x00024c65) popup_note_wait_window_g1

0xa359,	// (0x00024c71) popup_note_wait_window_g2_ParamLimits

0xa359,	// (0x00024c71) popup_note_wait_window_g2

0x0002,

0xf841,	// (0x0002a159) popup_note_wait_window_g_ParamLimits

0xf841,	// (0x0002a159) popup_note_wait_window_g

0xa371,	// (0x00024c89) popup_note_wait_window_t1_ParamLimits

0xa371,	// (0x00024c89) popup_note_wait_window_t1

0xa398,	// (0x00024cb0) popup_note_wait_window_t2_ParamLimits

0xa398,	// (0x00024cb0) popup_note_wait_window_t2

0xa3b5,	// (0x00024ccd) popup_note_wait_window_t3_ParamLimits

0xa3b5,	// (0x00024ccd) popup_note_wait_window_t3

0xa3c8,	// (0x00024ce0) popup_note_wait_window_t4_ParamLimits

0xa3c8,	// (0x00024ce0) popup_note_wait_window_t4

0x0004,

0xf848,	// (0x0002a160) popup_note_wait_window_t_ParamLimits

0xf848,	// (0x0002a160) popup_note_wait_window_t

0xa3ed,	// (0x00024d05) wait_bar_pane_ParamLimits

0xa3ed,	// (0x00024d05) wait_bar_pane

0x7e88,	// (0x000227a0) wait_anim_pane

0x7e88,	// (0x000227a0) wait_border_pane

0x7e7e,	// (0x00022796) wait_anim_pane_g1

0x7e7e,	// (0x00022796) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0002a01b) wait_anim_pane_g

0xa2c1,	// (0x00024bd9) wait_border_pane_g1

0xa2cc,	// (0x00024be4) wait_border_pane_g2

0xa2d5,	// (0x00024bed) wait_border_pane_g3

0x0002,

0xf83a,	// (0x0002a152) wait_border_pane_g

0xa12c,	// (0x00024a44) bg_popup_window_pane_cp16_ParamLimits

0xa12c,	// (0x00024a44) bg_popup_window_pane_cp16

0xa22c,	// (0x00024b44) indicator_popup_pane_cp4_ParamLimits

0xa22c,	// (0x00024b44) indicator_popup_pane_cp4

0xa240,	// (0x00024b58) popup_query_data_window_t1_ParamLimits

0xa240,	// (0x00024b58) popup_query_data_window_t1

0xa252,	// (0x00024b6a) popup_query_data_window_t2_ParamLimits

0xa252,	// (0x00024b6a) popup_query_data_window_t2

0xa26b,	// (0x00024b83) popup_query_data_window_t3_ParamLimits

0xa26b,	// (0x00024b83) popup_query_data_window_t3

0x0002,

0xf833,	// (0x0002a14b) popup_query_data_window_t_ParamLimits

0xf833,	// (0x0002a14b) popup_query_data_window_t

0xa285,	// (0x00024b9d) query_popup_data_pane_ParamLimits

0xa285,	// (0x00024b9d) query_popup_data_pane

0xa299,	// (0x00024bb1) query_popup_data_pane_cp1_ParamLimits

0xa299,	// (0x00024bb1) query_popup_data_pane_cp1

0xa12c,	// (0x00024a44) bg_popup_window_pane_cp10_ParamLimits

0xa12c,	// (0x00024a44) bg_popup_window_pane_cp10

0xa15e,	// (0x00024a76) indicator_popup_pane_ParamLimits

0xa15e,	// (0x00024a76) indicator_popup_pane

0xa180,	// (0x00024a98) popup_query_code_window_t1_ParamLimits

0xa180,	// (0x00024a98) popup_query_code_window_t1

0xa19a,	// (0x00024ab2) popup_query_code_window_t2_ParamLimits

0xa19a,	// (0x00024ab2) popup_query_code_window_t2

0xa1e3,	// (0x00024afb) popup_query_code_window_t3_ParamLimits

0xa1e3,	// (0x00024afb) popup_query_code_window_t3

0x0002,

0xf82c,	// (0x0002a144) popup_query_code_window_t_ParamLimits

0xf82c,	// (0x0002a144) popup_query_code_window_t

0xa212,	// (0x00024b2a) query_popup_pane_ParamLimits

0xa212,	// (0x00024b2a) query_popup_pane

0x8299,	// (0x00022bb1) bg_popup_window_pane_cp15_ParamLimits

0x8299,	// (0x00022bb1) bg_popup_window_pane_cp15

0x82b7,	// (0x00022bcf) indicator_popup_pane_cp1_ParamLimits

0x82b7,	// (0x00022bcf) indicator_popup_pane_cp1

0x82ca,	// (0x00022be2) indicator_popup_pane_cp2_ParamLimits

0x82ca,	// (0x00022be2) indicator_popup_pane_cp2

0x82dd,	// (0x00022bf5) popup_query_data_code_window_g1_ParamLimits

0x82dd,	// (0x00022bf5) popup_query_data_code_window_g1

0x82f0,	// (0x00022c08) popup_query_data_code_window_t1_ParamLimits

0x82f0,	// (0x00022c08) popup_query_data_code_window_t1

0x8302,	// (0x00022c1a) popup_query_data_code_window_t2_ParamLimits

0x8302,	// (0x00022c1a) popup_query_data_code_window_t2

0x8314,	// (0x00022c2c) popup_query_data_code_window_t3_ParamLimits

0x8314,	// (0x00022c2c) popup_query_data_code_window_t3

0x832a,	// (0x00022c42) popup_query_data_code_window_t4_ParamLimits

0x832a,	// (0x00022c42) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00029ea2) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00029ea2) popup_query_data_code_window_t

0x6b56,	// (0x0002146e) list_single_midp_graphic_pane_g3

0x8342,	// (0x00022c5a) query_popup_data_pane_cp2_ParamLimits

0x8355,	// (0x00022c6d) query_popup_pane_cp2_ParamLimits

0x8355,	// (0x00022c6d) query_popup_pane_cp2

0x7e88,	// (0x000227a0) bg_popup_window_pane_cp11

0xa124,	// (0x00024a3c) heading_pane_cp5

0x8440,	// (0x00022d58) listscroll_popup_info_pane

0x7e88,	// (0x000227a0) input_focus_pane_cp3

0x8368,	// (0x00022c80) query_popup_pane_t1

0x8376,	// (0x00022c8e) list_popup_info_pane_ParamLimits

0x8376,	// (0x00022c8e) list_popup_info_pane

0x8385,	// (0x00022c9d) listscroll_popup_info_pane_g1

0x838d,	// (0x00022ca5) scroll_pane_cp7

0x8397,	// (0x00022caf) popup_info_list_pane_t1_ParamLimits

0x8397,	// (0x00022caf) popup_info_list_pane_t1

0x83b1,	// (0x00022cc9) popup_info_list_pane_t2_ParamLimits

0x83b1,	// (0x00022cc9) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00029eab) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00029eab) popup_info_list_pane_t

0x7e88,	// (0x000227a0) bg_popup_window_pane_cp12

0xb49e,	// (0x00025db6) find_popup_pane

0x7f68,	// (0x00022880) bg_popup_window_pane_cp3

0x83cb,	// (0x00022ce3) heading_pane_cp3

0x83d7,	// (0x00022cef) listscroll_popup_graphic_pane

0x7e88,	// (0x000227a0) bg_popup_window_pane_cp4

0x8436,	// (0x00022d4e) heading_pane_cp4

0x8440,	// (0x00022d58) listscroll_popup_colour_pane

0x8448,	// (0x00022d60) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8448,	// (0x00022d60) cell_large_graphic_colour_none_popup_pane

0x845c,	// (0x00022d74) grid_large_graphic_colour_popup_pane_ParamLimits

0x845c,	// (0x00022d74) grid_large_graphic_colour_popup_pane

0x8488,	// (0x00022da0) listscroll_popup_colour_pane_g1_ParamLimits

0x8488,	// (0x00022da0) listscroll_popup_colour_pane_g1

0x849f,	// (0x00022db7) listscroll_popup_colour_pane_g2_ParamLimits

0x849f,	// (0x00022db7) listscroll_popup_colour_pane_g2

0x84b6,	// (0x00022dce) listscroll_popup_colour_pane_g3_ParamLimits

0x84b6,	// (0x00022dce) listscroll_popup_colour_pane_g3

0x84c6,	// (0x00022dde) listscroll_popup_colour_pane_g4_ParamLimits

0x84c6,	// (0x00022dde) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00029eb0) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00029eb0) listscroll_popup_colour_pane_g

0x84da,	// (0x00022df2) scroll_pane_cp6_ParamLimits

0x84da,	// (0x00022df2) scroll_pane_cp6

0x84ec,	// (0x00022e04) cell_large_graphic_colour_popup_pane_ParamLimits

0x84ec,	// (0x00022e04) cell_large_graphic_colour_popup_pane

0x850b,	// (0x00022e23) cell_large_graphic_colour_none_popup_pane_t1

0x7e88,	// (0x000227a0) grid_highlight_pane_cp5

0x851a,	// (0x00022e32) cell_large_graphic_colour_popup_pane_g1

0x8522,	// (0x00022e3a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00029eb9) cell_large_graphic_colour_popup_pane_g

0x852a,	// (0x00022e42) cell_large_graphic_colour_popup_pane_g2_copy1

0x8533,	// (0x00022e4b) grid_highlight_pane_cp4

0x853b,	// (0x00022e53) bg_popup_window_pane_cp8_ParamLimits

0x853b,	// (0x00022e53) bg_popup_window_pane_cp8

0x8556,	// (0x00022e6e) popup_snote_single_text_window_g1_ParamLimits

0x8556,	// (0x00022e6e) popup_snote_single_text_window_g1

0x8568,	// (0x00022e80) popup_snote_single_text_window_t1_ParamLimits

0x8568,	// (0x00022e80) popup_snote_single_text_window_t1

0x857b,	// (0x00022e93) popup_snote_single_text_window_t2_ParamLimits

0x857b,	// (0x00022e93) popup_snote_single_text_window_t2

0x858e,	// (0x00022ea6) popup_snote_single_text_window_t3_ParamLimits

0x858e,	// (0x00022ea6) popup_snote_single_text_window_t3

0x85c7,	// (0x00022edf) popup_snote_single_text_window_t4_ParamLimits

0x85c7,	// (0x00022edf) popup_snote_single_text_window_t4

0x85fb,	// (0x00022f13) popup_snote_single_text_window_t5_ParamLimits

0x85fb,	// (0x00022f13) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00029ebe) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00029ebe) popup_snote_single_text_window_t

0x862a,	// (0x00022f42) bg_popup_window_pane_cp9_ParamLimits

0x862a,	// (0x00022f42) bg_popup_window_pane_cp9

0x8556,	// (0x00022e6e) popup_snote_single_graphic_window_g1_ParamLimits

0x8556,	// (0x00022e6e) popup_snote_single_graphic_window_g1

0x8638,	// (0x00022f50) popup_snote_single_graphic_window_g2_ParamLimits

0x8638,	// (0x00022f50) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00029ec9) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00029ec9) popup_snote_single_graphic_window_g

0x8644,	// (0x00022f5c) popup_snote_single_graphic_window_t1_ParamLimits

0x8644,	// (0x00022f5c) popup_snote_single_graphic_window_t1

0x8657,	// (0x00022f6f) popup_snote_single_graphic_window_t2_ParamLimits

0x8657,	// (0x00022f6f) popup_snote_single_graphic_window_t2

0x866a,	// (0x00022f82) popup_snote_single_graphic_window_t3_ParamLimits

0x866a,	// (0x00022f82) popup_snote_single_graphic_window_t3

0x86a3,	// (0x00022fbb) popup_snote_single_graphic_window_t4_ParamLimits

0x86a3,	// (0x00022fbb) popup_snote_single_graphic_window_t4

0x86d7,	// (0x00022fef) popup_snote_single_graphic_window_t5_ParamLimits

0x86d7,	// (0x00022fef) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00029ece) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00029ece) popup_snote_single_graphic_window_t

0xb3e0,	// (0x00025cf8) grid_graphic_popup_pane_ParamLimits

0xb3e0,	// (0x00025cf8) grid_graphic_popup_pane

0xb40a,	// (0x00025d22) listscroll_popup_graphic_pane_g1_ParamLimits

0xb40a,	// (0x00025d22) listscroll_popup_graphic_pane_g1

0xb41e,	// (0x00025d36) listscroll_popup_graphic_pane_g2_ParamLimits

0xb41e,	// (0x00025d36) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a9,	// (0x0002a2c1) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a9,	// (0x0002a2c1) listscroll_popup_graphic_pane_g

0xb432,	// (0x00025d4a) scroll_pane_cp5

0xb37f,	// (0x00025c97) cell_graphic_popup_pane_ParamLimits

0xb37f,	// (0x00025c97) cell_graphic_popup_pane

0xb360,	// (0x00025c78) cell_graphic_popup_pane_g1

0xb368,	// (0x00025c80) cell_graphic_popup_pane_g2

0x852a,	// (0x00022e42) cell_graphic_popup_pane_g3

0x0002,

0xf9a2,	// (0x0002a2ba) cell_graphic_popup_pane_g

0xb371,	// (0x00025c89) cell_graphic_popup_pane_t2

0x8533,	// (0x00022e4b) grid_highlight_pane_cp3

0x8718,	// (0x00023030) list_gen_pane_ParamLimits

0x8718,	// (0x00023030) list_gen_pane

0x874a,	// (0x00023062) scroll_pane

0xb2b8,	// (0x00025bd0) bg_list_pane_g1_ParamLimits

0xb2b8,	// (0x00025bd0) bg_list_pane_g1

0xb2d5,	// (0x00025bed) bg_list_pane_g2_ParamLimits

0xb2d5,	// (0x00025bed) bg_list_pane_g2

0xb2ea,	// (0x00025c02) bg_list_pane_g3_ParamLimits

0xb2ea,	// (0x00025c02) bg_list_pane_g3

0xb2fe,	// (0x00025c16) bg_list_pane_g4_ParamLimits

0xb2fe,	// (0x00025c16) bg_list_pane_g4

0xb312,	// (0x00025c2a) bg_list_pane_g5_ParamLimits

0xb312,	// (0x00025c2a) bg_list_pane_g5

0x0004,

0xf997,	// (0x0002a2af) bg_list_pane_g_ParamLimits

0xf997,	// (0x0002a2af) bg_list_pane_g

0x530c,	// (0x0001fc24) list_double2_graphic_large_graphic_pane_ParamLimits

0x530c,	// (0x0001fc24) list_double2_graphic_large_graphic_pane

0x530c,	// (0x0001fc24) list_double2_graphic_pane_ParamLimits

0x530c,	// (0x0001fc24) list_double2_graphic_pane

0x530c,	// (0x0001fc24) list_double2_large_graphic_pane_ParamLimits

0x530c,	// (0x0001fc24) list_double2_large_graphic_pane

0x530c,	// (0x0001fc24) list_double2_pane_ParamLimits

0x530c,	// (0x0001fc24) list_double2_pane

0x530c,	// (0x0001fc24) list_double_graphic_heading_pane_ParamLimits

0x530c,	// (0x0001fc24) list_double_graphic_heading_pane

0x530c,	// (0x0001fc24) list_double_graphic_pane_ParamLimits

0x530c,	// (0x0001fc24) list_double_graphic_pane

0x530c,	// (0x0001fc24) list_double_heading_pane_ParamLimits

0x530c,	// (0x0001fc24) list_double_heading_pane

0x530c,	// (0x0001fc24) list_double_large_graphic_pane_ParamLimits

0x530c,	// (0x0001fc24) list_double_large_graphic_pane

0x530c,	// (0x0001fc24) list_double_number_pane_ParamLimits

0x530c,	// (0x0001fc24) list_double_number_pane

0x530c,	// (0x0001fc24) list_double_pane_ParamLimits

0x530c,	// (0x0001fc24) list_double_pane

0x530c,	// (0x0001fc24) list_double_time_pane_ParamLimits

0x530c,	// (0x0001fc24) list_double_time_pane

0x530c,	// (0x0001fc24) list_setting_number_pane_ParamLimits

0x530c,	// (0x0001fc24) list_setting_number_pane

0x530c,	// (0x0001fc24) list_setting_pane_ParamLimits

0x530c,	// (0x0001fc24) list_setting_pane

0x5347,	// (0x0001fc5f) list_single_2graphic_pane_ParamLimits

0x5347,	// (0x0001fc5f) list_single_2graphic_pane

0x5347,	// (0x0001fc5f) list_single_graphic_heading_pane_ParamLimits

0x5347,	// (0x0001fc5f) list_single_graphic_heading_pane

0x5347,	// (0x0001fc5f) list_single_graphic_pane_ParamLimits

0x5347,	// (0x0001fc5f) list_single_graphic_pane

0x5347,	// (0x0001fc5f) list_single_heading_pane_ParamLimits

0x5347,	// (0x0001fc5f) list_single_heading_pane

0x5387,	// (0x0001fc9f) list_single_large_graphic_pane_ParamLimits

0x5387,	// (0x0001fc9f) list_single_large_graphic_pane

0x5347,	// (0x0001fc5f) list_single_number_heading_pane_ParamLimits

0x5347,	// (0x0001fc5f) list_single_number_heading_pane

0x5347,	// (0x0001fc5f) list_single_number_pane_ParamLimits

0x5347,	// (0x0001fc5f) list_single_number_pane

0x5347,	// (0x0001fc5f) list_single_pane_ParamLimits

0x5347,	// (0x0001fc5f) list_single_pane

0x7e88,	// (0x000227a0) list_highlight_pane_cp1

0x499a,	// (0x0001f2b2) list_single_pane_g1_ParamLimits

0x499a,	// (0x0001f2b2) list_single_pane_g1

0x49a6,	// (0x0001f2be) list_single_pane_g2_ParamLimits

0x49a6,	// (0x0001f2be) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00029ee0) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00029ee0) list_single_pane_g

0x52f6,	// (0x0001fc0e) list_single_pane_t1_ParamLimits

0x52f6,	// (0x0001fc0e) list_single_pane_t1

0x499a,	// (0x0001f2b2) list_single_number_pane_g1_ParamLimits

0x499a,	// (0x0001f2b2) list_single_number_pane_g1

0x49a6,	// (0x0001f2be) list_single_number_pane_g2_ParamLimits

0x49a6,	// (0x0001f2be) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00029ee0) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00029ee0) list_single_number_pane_g

0x52a0,	// (0x0001fbb8) list_single_number_pane_t1_ParamLimits

0x52a0,	// (0x0001fbb8) list_single_number_pane_t1

0x52b6,	// (0x0001fbce) list_single_number_pane_t2_ParamLimits

0x52b6,	// (0x0001fbce) list_single_number_pane_t2

0x0001,

0xf958,	// (0x0002a270) list_single_number_pane_t_ParamLimits

0xf958,	// (0x0002a270) list_single_number_pane_t

0x498e,	// (0x0001f2a6) list_single_graphic_pane_g1_ParamLimits

0x498e,	// (0x0001f2a6) list_single_graphic_pane_g1

0x499a,	// (0x0001f2b2) list_single_graphic_pane_g2_ParamLimits

0x499a,	// (0x0001f2b2) list_single_graphic_pane_g2

0x49a6,	// (0x0001f2be) list_single_graphic_pane_g3_ParamLimits

0x49a6,	// (0x0001f2be) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00029ed9) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00029ed9) list_single_graphic_pane_g

0x49b2,	// (0x0001f2ca) list_single_graphic_pane_t1_ParamLimits

0x49b2,	// (0x0001f2ca) list_single_graphic_pane_t1

0x499a,	// (0x0001f2b2) list_single_heading_pane_g1_ParamLimits

0x499a,	// (0x0001f2b2) list_single_heading_pane_g1

0x49a6,	// (0x0001f2be) list_single_heading_pane_g2_ParamLimits

0x49a6,	// (0x0001f2be) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00029ee0) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00029ee0) list_single_heading_pane_g

0x49c8,	// (0x0001f2e0) list_single_heading_pane_t1_ParamLimits

0x49c8,	// (0x0001f2e0) list_single_heading_pane_t1

0x49de,	// (0x0001f2f6) list_single_heading_pane_t2_ParamLimits

0x49de,	// (0x0001f2f6) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00029ee5) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00029ee5) list_single_heading_pane_t

0x499a,	// (0x0001f2b2) list_single_number_heading_pane_g1_ParamLimits

0x499a,	// (0x0001f2b2) list_single_number_heading_pane_g1

0x49a6,	// (0x0001f2be) list_single_number_heading_pane_g2_ParamLimits

0x49a6,	// (0x0001f2be) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00029ee0) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00029ee0) list_single_number_heading_pane_g

0x49c8,	// (0x0001f2e0) list_single_number_heading_pane_t1_ParamLimits

0x49c8,	// (0x0001f2e0) list_single_number_heading_pane_t1

0x49f0,	// (0x0001f308) list_single_number_heading_pane_t2_ParamLimits

0x49f0,	// (0x0001f308) list_single_number_heading_pane_t2

0x4a02,	// (0x0001f31a) list_single_number_heading_pane_t3_ParamLimits

0x4a02,	// (0x0001f31a) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00029eea) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00029eea) list_single_number_heading_pane_t

0x4a14,	// (0x0001f32c) list_single_graphic_heading_pane_g1_ParamLimits

0x4a14,	// (0x0001f32c) list_single_graphic_heading_pane_g1

0x4a20,	// (0x0001f338) list_single_graphic_heading_pane_g4_ParamLimits

0x4a20,	// (0x0001f338) list_single_graphic_heading_pane_g4

0x49a6,	// (0x0001f2be) list_single_graphic_heading_pane_g5_ParamLimits

0x49a6,	// (0x0001f2be) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00029ef1) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00029ef1) list_single_graphic_heading_pane_g

0x49c8,	// (0x0001f2e0) list_single_graphic_heading_pane_t1_ParamLimits

0x49c8,	// (0x0001f2e0) list_single_graphic_heading_pane_t1

0x4a31,	// (0x0001f349) list_single_graphic_heading_pane_t2_ParamLimits

0x4a31,	// (0x0001f349) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00029ef8) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00029ef8) list_single_graphic_heading_pane_t

0x4a43,	// (0x0001f35b) list_single_large_graphic_pane_g1_ParamLimits

0x4a43,	// (0x0001f35b) list_single_large_graphic_pane_g1

0x4a4f,	// (0x0001f367) list_single_large_graphic_pane_g2_ParamLimits

0x4a4f,	// (0x0001f367) list_single_large_graphic_pane_g2

0x4a5b,	// (0x0001f373) list_single_large_graphic_pane_g3_ParamLimits

0x4a5b,	// (0x0001f373) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00029efd) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00029efd) list_single_large_graphic_pane_g

0xa2cc,	// (0x00024be4) wait_border_pane_g2_copy1

0x4a67,	// (0x0001f37f) list_single_large_graphic_pane_g4_cp2

0x4a6f,	// (0x0001f387) list_single_large_graphic_pane_t1_ParamLimits

0x4a6f,	// (0x0001f387) list_single_large_graphic_pane_t1

0x4a85,	// (0x0001f39d) list_double_pane_g1_ParamLimits

0x4a85,	// (0x0001f39d) list_double_pane_g1

0x4a91,	// (0x0001f3a9) list_double_pane_g2_ParamLimits

0x4a91,	// (0x0001f3a9) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00029f04) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00029f04) list_double_pane_g

0x4a9d,	// (0x0001f3b5) list_double_pane_t1_ParamLimits

0x4a9d,	// (0x0001f3b5) list_double_pane_t1

0x4ab3,	// (0x0001f3cb) list_double_pane_t2_ParamLimits

0x4ab3,	// (0x0001f3cb) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00029f09) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00029f09) list_double_pane_t

0x4ac5,	// (0x0001f3dd) list_double2_pane_g1_ParamLimits

0x4ac5,	// (0x0001f3dd) list_double2_pane_g1

0x4ad6,	// (0x0001f3ee) list_double2_pane_g2_ParamLimits

0x4ad6,	// (0x0001f3ee) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00029f0e) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00029f0e) list_double2_pane_g

0x4ae2,	// (0x0001f3fa) list_double2_pane_t1_ParamLimits

0x4ae2,	// (0x0001f3fa) list_double2_pane_t1

0x4af8,	// (0x0001f410) list_double2_pane_t2_ParamLimits

0x4af8,	// (0x0001f410) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00029f13) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00029f13) list_double2_pane_t

0x4a85,	// (0x0001f39d) list_double_number_pane_g1_ParamLimits

0x4a85,	// (0x0001f39d) list_double_number_pane_g1

0x4a91,	// (0x0001f3a9) list_double_number_pane_g2_ParamLimits

0x4a91,	// (0x0001f3a9) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00029f04) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00029f04) list_double_number_pane_g

0x4b0a,	// (0x0001f422) list_double_number_pane_t1_ParamLimits

0x4b0a,	// (0x0001f422) list_double_number_pane_t1

0x4b1c,	// (0x0001f434) list_double_number_pane_t2_ParamLimits

0x4b1c,	// (0x0001f434) list_double_number_pane_t2

0x4b32,	// (0x0001f44a) list_double_number_pane_t3_ParamLimits

0x4b32,	// (0x0001f44a) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00029f18) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00029f18) list_double_number_pane_t

0x4b44,	// (0x0001f45c) list_double_graphic_pane_g1_ParamLimits

0x4b44,	// (0x0001f45c) list_double_graphic_pane_g1

0x4b50,	// (0x0001f468) list_double_graphic_pane_g2_ParamLimits

0x4b50,	// (0x0001f468) list_double_graphic_pane_g2

0x4b5f,	// (0x0001f477) list_double_graphic_pane_g3_ParamLimits

0x4b5f,	// (0x0001f477) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00029f1f) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00029f1f) list_double_graphic_pane_g

0x4b77,	// (0x0001f48f) list_double_graphic_pane_t1_ParamLimits

0x4b77,	// (0x0001f48f) list_double_graphic_pane_t1

0x4b8d,	// (0x0001f4a5) list_double_graphic_pane_t2_ParamLimits

0x4b8d,	// (0x0001f4a5) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00029f28) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00029f28) list_double_graphic_pane_t

0x4b9f,	// (0x0001f4b7) list_double2_graphic_pane_g1_ParamLimits

0x4b9f,	// (0x0001f4b7) list_double2_graphic_pane_g1

0x4bab,	// (0x0001f4c3) list_double2_graphic_pane_g2_ParamLimits

0x4bab,	// (0x0001f4c3) list_double2_graphic_pane_g2

0x4ad6,	// (0x0001f3ee) list_double2_graphic_pane_g3_ParamLimits

0x4ad6,	// (0x0001f3ee) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00029f2d) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00029f2d) list_double2_graphic_pane_g

0x4bb7,	// (0x0001f4cf) list_double2_graphic_pane_t1_ParamLimits

0x4bb7,	// (0x0001f4cf) list_double2_graphic_pane_t1

0x4bcd,	// (0x0001f4e5) list_double2_graphic_pane_t2_ParamLimits

0x4bcd,	// (0x0001f4e5) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00029f34) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00029f34) list_double2_graphic_pane_t

0x4bdf,	// (0x0001f4f7) list_double_large_graphic_pane_g1_ParamLimits

0x4bdf,	// (0x0001f4f7) list_double_large_graphic_pane_g1

0x4bf2,	// (0x0001f50a) list_double_large_graphic_pane_g2_ParamLimits

0x4bf2,	// (0x0001f50a) list_double_large_graphic_pane_g2

0x4a91,	// (0x0001f3a9) list_double_large_graphic_pane_g3_ParamLimits

0x4a91,	// (0x0001f3a9) list_double_large_graphic_pane_g3

0x4c03,	// (0x0001f51b) list_double_large_graphic_pane_g4_ParamLimits

0x4c03,	// (0x0001f51b) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00029f39) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00029f39) list_double_large_graphic_pane_g

0x4c2a,	// (0x0001f542) list_double_large_graphic_pane_t1_ParamLimits

0x4c2a,	// (0x0001f542) list_double_large_graphic_pane_t1

0x4c43,	// (0x0001f55b) list_double_large_graphic_pane_t2_ParamLimits

0x4c43,	// (0x0001f55b) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00029f44) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00029f44) list_double_large_graphic_pane_t

0x4c55,	// (0x0001f56d) list_double2_large_graphic_pane_g1_ParamLimits

0x4c55,	// (0x0001f56d) list_double2_large_graphic_pane_g1

0x4ac5,	// (0x0001f3dd) list_double2_large_graphic_pane_g2_ParamLimits

0x4ac5,	// (0x0001f3dd) list_double2_large_graphic_pane_g2

0x4ad6,	// (0x0001f3ee) list_double2_large_graphic_pane_g3_ParamLimits

0x4ad6,	// (0x0001f3ee) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00029f49) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00029f49) list_double2_large_graphic_pane_g

0x4c61,	// (0x0001f579) list_double2_large_graphic_pane_t1_ParamLimits

0x4c61,	// (0x0001f579) list_double2_large_graphic_pane_t1

0x4c77,	// (0x0001f58f) list_double2_large_graphic_pane_t2_ParamLimits

0x4c77,	// (0x0001f58f) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00029f50) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00029f50) list_double2_large_graphic_pane_t

0x4c89,	// (0x0001f5a1) list_double_heading_pane_g1_ParamLimits

0x4c89,	// (0x0001f5a1) list_double_heading_pane_g1

0x4c9a,	// (0x0001f5b2) list_double_heading_pane_g2_ParamLimits

0x4c9a,	// (0x0001f5b2) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00029f55) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00029f55) list_double_heading_pane_g

0x4ca6,	// (0x0001f5be) list_double_heading_pane_t1_ParamLimits

0x4ca6,	// (0x0001f5be) list_double_heading_pane_t1

0x4af8,	// (0x0001f410) list_double_heading_pane_t2_ParamLimits

0x4af8,	// (0x0001f410) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00029f5a) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00029f5a) list_double_heading_pane_t

0x4cbc,	// (0x0001f5d4) list_double_graphic_heading_pane_g1_ParamLimits

0x4cbc,	// (0x0001f5d4) list_double_graphic_heading_pane_g1

0x4c89,	// (0x0001f5a1) list_double_graphic_heading_pane_g2_ParamLimits

0x4c89,	// (0x0001f5a1) list_double_graphic_heading_pane_g2

0x4c9a,	// (0x0001f5b2) list_double_graphic_heading_pane_g3_ParamLimits

0x4c9a,	// (0x0001f5b2) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00029f5f) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00029f5f) list_double_graphic_heading_pane_g

0x4cc8,	// (0x0001f5e0) list_double_graphic_heading_pane_t1_ParamLimits

0x4cc8,	// (0x0001f5e0) list_double_graphic_heading_pane_t1

0x4bcd,	// (0x0001f4e5) list_double_graphic_heading_pane_t2_ParamLimits

0x4bcd,	// (0x0001f4e5) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00029f66) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00029f66) list_double_graphic_heading_pane_t

0x4bf2,	// (0x0001f50a) list_double_time_pane_g1_ParamLimits

0x4bf2,	// (0x0001f50a) list_double_time_pane_g1

0x4a91,	// (0x0001f3a9) list_double_time_pane_g2_ParamLimits

0x4a91,	// (0x0001f3a9) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00029f6b) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00029f6b) list_double_time_pane_g

0x4cde,	// (0x0001f5f6) list_double_time_pane_t1_ParamLimits

0x4cde,	// (0x0001f5f6) list_double_time_pane_t1

0x4cf4,	// (0x0001f60c) list_double_time_pane_t2_ParamLimits

0x4cf4,	// (0x0001f60c) list_double_time_pane_t2

0x4d06,	// (0x0001f61e) list_double_time_pane_t3_ParamLimits

0x4d06,	// (0x0001f61e) list_double_time_pane_t3

0x4d18,	// (0x0001f630) list_double_time_pane_t4_ParamLimits

0x4d18,	// (0x0001f630) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00029f70) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00029f70) list_double_time_pane_t

0x4bab,	// (0x0001f4c3) list_setting_pane_g1_ParamLimits

0x4bab,	// (0x0001f4c3) list_setting_pane_g1

0x4ad6,	// (0x0001f3ee) list_setting_pane_g2_ParamLimits

0x4ad6,	// (0x0001f3ee) list_setting_pane_g2

0x0001,

0xf661,	// (0x00029f79) list_setting_pane_g_ParamLimits

0xf661,	// (0x00029f79) list_setting_pane_g

0x4d2a,	// (0x0001f642) list_setting_pane_t1_ParamLimits

0x4d2a,	// (0x0001f642) list_setting_pane_t1

0x4d44,	// (0x0001f65c) list_setting_pane_t2_ParamLimits

0x4d44,	// (0x0001f65c) list_setting_pane_t2

0x0002,

0xf666,	// (0x00029f7e) list_setting_pane_t_ParamLimits

0xf666,	// (0x00029f7e) list_setting_pane_t

0x4d83,	// (0x0001f69b) set_value_pane_cp_ParamLimits

0x4d83,	// (0x0001f69b) set_value_pane_cp

0x4d8f,	// (0x0001f6a7) list_setting_number_pane_g1_ParamLimits

0x4d8f,	// (0x0001f6a7) list_setting_number_pane_g1

0x4d9b,	// (0x0001f6b3) list_setting_number_pane_g2_ParamLimits

0x4d9b,	// (0x0001f6b3) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x00029f85) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x00029f85) list_setting_number_pane_g

0x4da7,	// (0x0001f6bf) list_setting_number_pane_t1_ParamLimits

0x4da7,	// (0x0001f6bf) list_setting_number_pane_t1

0x4dc0,	// (0x0001f6d8) list_setting_number_pane_t2_ParamLimits

0x4dc0,	// (0x0001f6d8) list_setting_number_pane_t2

0x4dda,	// (0x0001f6f2) list_setting_number_pane_t3_ParamLimits

0x4dda,	// (0x0001f6f2) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x00029f8a) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x00029f8a) list_setting_number_pane_t

0x4d83,	// (0x0001f69b) set_value_pane_ParamLimits

0x4d83,	// (0x0001f69b) set_value_pane

0x877e,	// (0x00023096) bg_set_opt_pane_ParamLimits

0x877e,	// (0x00023096) bg_set_opt_pane

0x4e1d,	// (0x0001f735) set_value_pane_t1

0x879f,	// (0x000230b7) slider_set_pane_cp3

0x87a8,	// (0x000230c0) volume_small_pane_cp

0x87b1,	// (0x000230c9) list_form_gen_pane

0x87ba,	// (0x000230d2) scroll_pane_cp8

0x4e33,	// (0x0001f74b) form_field_data_pane_ParamLimits

0x4e33,	// (0x0001f74b) form_field_data_pane

0x4e53,	// (0x0001f76b) form_field_data_wide_pane_ParamLimits

0x4e53,	// (0x0001f76b) form_field_data_wide_pane

0x4e74,	// (0x0001f78c) form_field_popup_pane_ParamLimits

0x4e74,	// (0x0001f78c) form_field_popup_pane

0x4e94,	// (0x0001f7ac) form_field_popup_wide_pane_ParamLimits

0x4e94,	// (0x0001f7ac) form_field_popup_wide_pane

0x4eb1,	// (0x0001f7c9) form_field_slider_pane_ParamLimits

0x4eb1,	// (0x0001f7c9) form_field_slider_pane

0x4ec4,	// (0x0001f7dc) form_field_slider_wide_pane_ParamLimits

0x4ec4,	// (0x0001f7dc) form_field_slider_wide_pane

0x87cb,	// (0x000230e3) data_form_pane

0x4ee1,	// (0x0001f7f9) form_field_data_pane_t1

0x87d7,	// (0x000230ef) input_focus_pane

0x4ef9,	// (0x0001f811) data_form_wide_pane

0x4f16,	// (0x0001f82e) form_field_data_wide_pane_t1

0x8548,	// (0x00022e60) input_focus_pane_cp6

0x4f38,	// (0x0001f850) form_field_popup_pane_t1

0x87d7,	// (0x000230ef) input_focus_pane_cp7

0x8805,	// (0x0002311d) list_form_pane

0x4f58,	// (0x0001f870) form_field_popup_wide_pane_t1

0x87d7,	// (0x000230ef) input_focus_pane_cp8

0x8811,	// (0x00023129) list_form_wide_pane

0x4f75,	// (0x0001f88d) form_field_slider_pane_t1_ParamLimits

0x4f75,	// (0x0001f88d) form_field_slider_pane_t1

0x4f8b,	// (0x0001f8a3) form_field_slider_pane_t2_ParamLimits

0x4f8b,	// (0x0001f8a3) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x00029f9a) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x00029f9a) form_field_slider_pane_t

0x81e3,	// (0x00022afb) input_focus_pane_cp9_ParamLimits

0x81e3,	// (0x00022afb) input_focus_pane_cp9

0x4fa0,	// (0x0001f8b8) slider_cont_pane_ParamLimits

0x4fa0,	// (0x0001f8b8) slider_cont_pane

0x881d,	// (0x00023135) form_field_slider_wide_pane_t1_ParamLimits

0x881d,	// (0x00023135) form_field_slider_wide_pane_t1

0x4fb4,	// (0x0001f8cc) form_field_slider_wide_pane_t2_ParamLimits

0x4fb4,	// (0x0001f8cc) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x00029f9f) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x00029f9f) form_field_slider_wide_pane_t

0x81e3,	// (0x00022afb) input_focus_pane_cp10_ParamLimits

0x81e3,	// (0x00022afb) input_focus_pane_cp10

0x4fc6,	// (0x0001f8de) slider_cont_pane_cp1_ParamLimits

0x4fc6,	// (0x0001f8de) slider_cont_pane_cp1

0x4fda,	// (0x0001f8f2) slider_form_pane_cp

0x882f,	// (0x00023147) input_focus_pane_g1

0x8837,	// (0x0002314f) input_focus_pane_g2

0x883f,	// (0x00023157) input_focus_pane_g3

0x8847,	// (0x0002315f) input_focus_pane_g4

0x884f,	// (0x00023167) input_focus_pane_g5

0x8857,	// (0x0002316f) input_focus_pane_g6

0x885f,	// (0x00023177) input_focus_pane_g7

0x8867,	// (0x0002317f) input_focus_pane_g8

0x886f,	// (0x00023187) input_focus_pane_g9

0x7e7e,	// (0x00022796) input_focus_pane_g10

0x0009,

0xf68c,	// (0x00029fa4) input_focus_pane_g

0xa2d5,	// (0x00024bed) wait_border_pane_g3_copy1

0x4fe2,	// (0x0001f8fa) data_form_pane_t1

0x7e7e,	// (0x00022796) wait_anim_pane_g1_copy1

0x52c8,	// (0x0001fbe0) data_form_wide_pane_t1

0x4ffd,	// (0x0001f915) list_form_graphic_pane_cp_ParamLimits

0x4ffd,	// (0x0001f915) list_form_graphic_pane_cp

0xb1f5,	// (0x00025b0d) slider_form_pane_g1

0xb1fe,	// (0x00025b16) slider_form_pane_g2

0x0006,

0xf988,	// (0x0002a2a0) slider_form_pane_g

0x5016,	// (0x0001f92e) list_form_graphic_pane_ParamLimits

0x5016,	// (0x0001f92e) list_form_graphic_pane

0x5032,	// (0x0001f94a) list_form_graphic_pane_g1

0x503a,	// (0x0001f952) list_form_graphic_pane_t1_ParamLimits

0x503a,	// (0x0001f952) list_form_graphic_pane_t1

0x7f68,	// (0x00022880) list_highlight_pane_cp5_ParamLimits

0x7f68,	// (0x00022880) list_highlight_pane_cp5

0x504f,	// (0x0001f967) find_pane_g1

0x8877,	// (0x0002318f) input_find_pane

0x5058,	// (0x0001f970) input_find_pane_g1_ParamLimits

0x5058,	// (0x0001f970) input_find_pane_g1

0x5064,	// (0x0001f97c) input_find_pane_t1_ParamLimits

0x5064,	// (0x0001f97c) input_find_pane_t1

0x5079,	// (0x0001f991) input_find_pane_t2_ParamLimits

0x5079,	// (0x0001f991) input_find_pane_t2

0x0001,

0xf6a1,	// (0x00029fb9) input_find_pane_t_ParamLimits

0xf6a1,	// (0x00029fb9) input_find_pane_t

0x8880,	// (0x00023198) input_focus_pane_cp5_ParamLimits

0x8880,	// (0x00023198) input_focus_pane_cp5

0x889a,	// (0x000231b2) bg_popup_window_pane_cp2_ParamLimits

0x889a,	// (0x000231b2) bg_popup_window_pane_cp2

0x88a7,	// (0x000231bf) listscroll_menu_pane_ParamLimits

0x88a7,	// (0x000231bf) listscroll_menu_pane

0x88b3,	// (0x000231cb) popup_submenu_window_ParamLimits

0x88b3,	// (0x000231cb) popup_submenu_window

0x88df,	// (0x000231f7) find_popup_pane_g1

0x88e7,	// (0x000231ff) input_popup_find_pane_cp

0x8880,	// (0x00023198) input_focus_pane_cp4_ParamLimits

0x8880,	// (0x00023198) input_focus_pane_cp4

0x88fd,	// (0x00023215) input_popup_find_pane_t1_ParamLimits

0x88fd,	// (0x00023215) input_popup_find_pane_t1

0x7e88,	// (0x000227a0) bg_popup_sub_pane_cp

0x892b,	// (0x00023243) listscroll_popup_sub_pane

0x8933,	// (0x0002324b) list_submenu_pane_ParamLimits

0x8933,	// (0x0002324b) list_submenu_pane

0x8944,	// (0x0002325c) scroll_pane_cp4

0x894c,	// (0x00023264) list_single_popup_submenu_pane_ParamLimits

0x894c,	// (0x00023264) list_single_popup_submenu_pane

0x8960,	// (0x00023278) list_single_popup_submenu_pane_g1

0x8968,	// (0x00023280) list_single_popup_submenu_pane_t1_ParamLimits

0x8968,	// (0x00023280) list_single_popup_submenu_pane_t1

0x7f68,	// (0x00022880) bg_active_tab_pane_cp1_ParamLimits

0x7f68,	// (0x00022880) bg_active_tab_pane_cp1

0x897d,	// (0x00023295) tabs_2_active_pane_g1

0x8985,	// (0x0002329d) tabs_2_active_pane_t1

0x7f68,	// (0x00022880) bg_passive_tab_pane_cp1_ParamLimits

0x7f68,	// (0x00022880) bg_passive_tab_pane_cp1

0x897d,	// (0x00023295) tabs_2_passive_pane_g1

0x8985,	// (0x0002329d) tabs_2_passive_pane_t1

0x8997,	// (0x000232af) bg_active_tab_pane_cp4

0x89a5,	// (0x000232bd) tabs_2_long_active_pane_t1

0x89b8,	// (0x000232d0) bg_passive_tab_pane_cp4

0x6b5e,	// (0x00021476) list_single_midp_graphic_pane_g4_ParamLimits

0x8997,	// (0x000232af) bg_active_tab_pane_cp5

0x89c4,	// (0x000232dc) tabs_3_long_active_pane_t1

0x89b8,	// (0x000232d0) bg_passive_tab_pane_cp5

0x6b5e,	// (0x00021476) list_single_midp_graphic_pane_g4

0x7f68,	// (0x00022880) bg_popup_window_pane_cp13_ParamLimits

0x7f68,	// (0x00022880) bg_popup_window_pane_cp13

0x89df,	// (0x000232f7) listscroll_popup_fast_pane_ParamLimits

0x89df,	// (0x000232f7) listscroll_popup_fast_pane

0x89ee,	// (0x00023306) grid_popup_fast_pane_ParamLimits

0x89ee,	// (0x00023306) grid_popup_fast_pane

0x8a00,	// (0x00023318) scroll_pane_cp9_ParamLimits

0x8a00,	// (0x00023318) scroll_pane_cp9

0xcae4,	// (0x000273fc) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcae4,	// (0x000273fc) list_single_graphic_hl_pane_t1_cp2

0x8a24,	// (0x0002333c) input_focus_pane_cp20_ParamLimits

0x8a24,	// (0x0002333c) input_focus_pane_cp20

0x8a32,	// (0x0002334a) query_popup_data_pane_t1_ParamLimits

0x8a32,	// (0x0002334a) query_popup_data_pane_t1

0x8a45,	// (0x0002335d) query_popup_data_pane_t2_ParamLimits

0x8a45,	// (0x0002335d) query_popup_data_pane_t2

0x8a8b,	// (0x000233a3) query_popup_data_pane_t3_ParamLimits

0x8a8b,	// (0x000233a3) query_popup_data_pane_t3

0x8acc,	// (0x000233e4) query_popup_data_pane_t4_ParamLimits

0x8acc,	// (0x000233e4) query_popup_data_pane_t4

0x8b08,	// (0x00023420) query_popup_data_pane_t5_ParamLimits

0x8b08,	// (0x00023420) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x00029fbe) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x00029fbe) query_popup_data_pane_t

0x882f,	// (0x00023147) bg_set_opt_pane_g1

0x8837,	// (0x0002314f) bg_set_opt_pane_g2

0x883f,	// (0x00023157) bg_set_opt_pane_g3

0x8847,	// (0x0002315f) bg_set_opt_pane_g4

0x884f,	// (0x00023167) bg_set_opt_pane_g5

0x8857,	// (0x0002316f) bg_set_opt_pane_g6

0x885f,	// (0x00023177) bg_set_opt_pane_g7

0x8867,	// (0x0002317f) bg_set_opt_pane_g8

0x886f,	// (0x00023187) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x00029fc9) bg_set_opt_pane_g

0x6204,	// (0x00020b1c) control_top_pane_stacon_ParamLimits

0x6204,	// (0x00020b1c) control_top_pane_stacon

0x6257,	// (0x00020b6f) signal_pane_stacon_ParamLimits

0x6257,	// (0x00020b6f) signal_pane_stacon

0x90f8,	// (0x00023a10) stacon_top_pane_g1_ParamLimits

0x90f8,	// (0x00023a10) stacon_top_pane_g1

0x627c,	// (0x00020b94) title_pane_stacon_ParamLimits

0x627c,	// (0x00020b94) title_pane_stacon

0x62a6,	// (0x00020bbe) uni_indicator_pane_stacon_ParamLimits

0x62a6,	// (0x00020bbe) uni_indicator_pane_stacon

0x62bb,	// (0x00020bd3) battery_pane_stacon_ParamLimits

0x62bb,	// (0x00020bd3) battery_pane_stacon

0x62ff,	// (0x00020c17) control_bottom_pane_stacon_ParamLimits

0x62ff,	// (0x00020c17) control_bottom_pane_stacon

0x6322,	// (0x00020c3a) navi_pane_stacon_ParamLimits

0x6322,	// (0x00020c3a) navi_pane_stacon

0x911a,	// (0x00023a32) stacon_bottom_pane_g1_ParamLimits

0x911a,	// (0x00023a32) stacon_bottom_pane_g1

0x5f67,	// (0x0002087f) aid_levels_signal_lsc_ParamLimits

0x5f67,	// (0x0002087f) aid_levels_signal_lsc

0x5f7d,	// (0x00020895) signal_pane_stacon_g1_ParamLimits

0x5f7d,	// (0x00020895) signal_pane_stacon_g1

0x5f91,	// (0x000208a9) signal_pane_stacon_g2_ParamLimits

0x5f91,	// (0x000208a9) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x00029fdc) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00029fdc) signal_pane_stacon_g

0x5fc6,	// (0x000208de) title_pane_stacon_t1_ParamLimits

0x5fc6,	// (0x000208de) title_pane_stacon_t1

0x8b4c,	// (0x00023464) uni_indicator_pane_stacon_g1

0x8b56,	// (0x0002346e) uni_indicator_pane_stacon_g2

0x8b60,	// (0x00023478) uni_indicator_pane_stacon_g3

0x8b6a,	// (0x00023482) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x00029fe8) uni_indicator_pane_stacon_g

0x5feb,	// (0x00020903) control_top_pane_stacon_g1

0x5ff3,	// (0x0002090b) control_top_pane_stacon_t1_ParamLimits

0x5ff3,	// (0x0002090b) control_top_pane_stacon_t1

0x602a,	// (0x00020942) aid_levels_battery_lsc_ParamLimits

0x602a,	// (0x00020942) aid_levels_battery_lsc

0x6041,	// (0x00020959) battery_pane_stacon_g1_ParamLimits

0x6041,	// (0x00020959) battery_pane_stacon_g1

0x6054,	// (0x0002096c) battery_pane_stacon_g2_ParamLimits

0x6054,	// (0x0002096c) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x00029ff1) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x00029ff1) battery_pane_stacon_g

0x6092,	// (0x000209aa) navi_icon_pane_stacon

0x60a6,	// (0x000209be) navi_navi_pane_stacon

0x6092,	// (0x000209aa) navi_text_pane_stacon

0x5feb,	// (0x00020903) control_bottom_pane_stacon_g1

0x60ba,	// (0x000209d2) control_bottom_pane_stacon_t1_ParamLimits

0x60ba,	// (0x000209d2) control_bottom_pane_stacon_t1

0x8b8e,	// (0x000234a6) grid_app_pane_ParamLimits

0x8b8e,	// (0x000234a6) grid_app_pane

0x8bb2,	// (0x000234ca) scroll_pane_cp15_ParamLimits

0x8bb2,	// (0x000234ca) scroll_pane_cp15

0x8bc5,	// (0x000234dd) cell_app_pane_ParamLimits

0x8bc5,	// (0x000234dd) cell_app_pane

0x8be9,	// (0x00023501) cell_app_pane_g1_ParamLimits

0x8be9,	// (0x00023501) cell_app_pane_g1

0x8c0d,	// (0x00023525) cell_app_pane_g2_ParamLimits

0x8c0d,	// (0x00023525) cell_app_pane_g2

0x0001,

0xf6de,	// (0x00029ff6) cell_app_pane_g_ParamLimits

0xf6de,	// (0x00029ff6) cell_app_pane_g

0x8c19,	// (0x00023531) cell_app_pane_t1_ParamLimits

0x8c19,	// (0x00023531) cell_app_pane_t1

0x8c30,	// (0x00023548) grid_highlight_pane_ParamLimits

0x8c30,	// (0x00023548) grid_highlight_pane

0x882f,	// (0x00023147) cell_highlight_pane_g1

0x8837,	// (0x0002314f) cell_highlight_pane_g2

0x883f,	// (0x00023157) cell_highlight_pane_g3

0x8847,	// (0x0002315f) cell_highlight_pane_g4

0x884f,	// (0x00023167) cell_highlight_pane_g5

0x8857,	// (0x0002316f) cell_highlight_pane_g6

0x885f,	// (0x00023177) cell_highlight_pane_g7

0x8867,	// (0x0002317f) cell_highlight_pane_g8

0x886f,	// (0x00023187) cell_highlight_pane_g9

0x7e7e,	// (0x00022796) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x00029fa4) cell_highlight_pane_g

0x8c41,	// (0x00023559) bg_scroll_pane

0x6104,	// (0x00020a1c) scroll_handle_pane

0x8c88,	// (0x000235a0) scroll_bg_pane_g1

0x8c9d,	// (0x000235b5) scroll_bg_pane_g2

0x8cb5,	// (0x000235cd) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x00029ffb) scroll_bg_pane_g

0x8cca,	// (0x000235e2) scroll_handle_focus_pane_ParamLimits

0x8cca,	// (0x000235e2) scroll_handle_focus_pane

0x8c88,	// (0x000235a0) scroll_handle_pane_g1

0x8cd7,	// (0x000235ef) scroll_handle_pane_g2

0x8cb5,	// (0x000235cd) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0002a002) scroll_handle_pane_g

0x8880,	// (0x00023198) bg_popup_sub_pane_cp21_ParamLimits

0x8880,	// (0x00023198) bg_popup_sub_pane_cp21

0x8ceb,	// (0x00023603) popup_fep_japan_predictive_window_t1_ParamLimits

0x8ceb,	// (0x00023603) popup_fep_japan_predictive_window_t1

0x8d05,	// (0x0002361d) popup_fep_japan_predictive_window_t2_ParamLimits

0x8d05,	// (0x0002361d) popup_fep_japan_predictive_window_t2

0x8d38,	// (0x00023650) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d38,	// (0x00023650) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0002a009) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0002a009) popup_fep_japan_predictive_window_t

0x7e88,	// (0x000227a0) bg_popup_sub_pane_cp23

0x8d6f,	// (0x00023687) listscroll_japin_cand_pane

0x8d77,	// (0x0002368f) popup_fep_japan_candidate_window_t1

0x8d85,	// (0x0002369d) candidate_pane_ParamLimits

0x8d85,	// (0x0002369d) candidate_pane

0x8d97,	// (0x000236af) scroll_pane_cp30

0x8d9f,	// (0x000236b7) list_single_popup_jap_candidate_pane_ParamLimits

0x8d9f,	// (0x000236b7) list_single_popup_jap_candidate_pane

0x7e88,	// (0x000227a0) list_highlight_pane_cp30

0x8db4,	// (0x000236cc) list_single_popup_jap_candidate_pane_t1

0x8dc3,	// (0x000236db) level_1_signal

0x8dd5,	// (0x000236ed) level_2_signal

0x8de8,	// (0x00023700) level_3_signal

0x8dfb,	// (0x00023713) level_4_signal

0x8e0e,	// (0x00023726) level_5_signal

0x8e21,	// (0x00023739) level_6_signal

0x8e34,	// (0x0002374c) level_7_signal

0x8dc3,	// (0x000236db) level_1_battery

0x8dd5,	// (0x000236ed) level_2_battery

0x8de8,	// (0x00023700) level_3_battery

0x8dfb,	// (0x00023713) level_4_battery

0x8e0e,	// (0x00023726) level_5_battery

0x8e21,	// (0x00023739) level_6_battery

0x8e34,	// (0x0002374c) level_7_battery

0x8e5f,	// (0x00023777) list_menu_pane_ParamLimits

0x8e5f,	// (0x00023777) list_menu_pane

0x8e75,	// (0x0002378d) scroll_pane_cp25_ParamLimits

0x8e75,	// (0x0002378d) scroll_pane_cp25

0x8e8e,	// (0x000237a6) list_double2_graphic_pane_cp2_ParamLimits

0x8e8e,	// (0x000237a6) list_double2_graphic_pane_cp2

0x8e8e,	// (0x000237a6) list_double2_large_graphic_pane_cp2_ParamLimits

0x8e8e,	// (0x000237a6) list_double2_large_graphic_pane_cp2

0x8e8e,	// (0x000237a6) list_double2_pane_cp2_ParamLimits

0x8e8e,	// (0x000237a6) list_double2_pane_cp2

0x8e8e,	// (0x000237a6) list_double_graphic_pane_cp2_ParamLimits

0x8e8e,	// (0x000237a6) list_double_graphic_pane_cp2

0x8e8e,	// (0x000237a6) list_double_large_graphic_pane_cp2_ParamLimits

0x8e8e,	// (0x000237a6) list_double_large_graphic_pane_cp2

0x8e8e,	// (0x000237a6) list_double_number_pane_cp2_ParamLimits

0x8e8e,	// (0x000237a6) list_double_number_pane_cp2

0x8e8e,	// (0x000237a6) list_double_pane_cp2_ParamLimits

0x8e8e,	// (0x000237a6) list_double_pane_cp2

0x8eb2,	// (0x000237ca) list_single_2graphic_pane_cp2_ParamLimits

0x8eb2,	// (0x000237ca) list_single_2graphic_pane_cp2

0x8eb2,	// (0x000237ca) list_single_graphic_heading_pane_cp2_ParamLimits

0x8eb2,	// (0x000237ca) list_single_graphic_heading_pane_cp2

0x8eb2,	// (0x000237ca) list_single_graphic_pane_cp2_ParamLimits

0x8eb2,	// (0x000237ca) list_single_graphic_pane_cp2

0x8eb2,	// (0x000237ca) list_single_heading_pane_cp2_ParamLimits

0x8eb2,	// (0x000237ca) list_single_heading_pane_cp2

0x8ecb,	// (0x000237e3) list_single_large_graphic_pane_cp2_ParamLimits

0x8ecb,	// (0x000237e3) list_single_large_graphic_pane_cp2

0x8eb2,	// (0x000237ca) list_single_number_heading_pane_cp2_ParamLimits

0x8eb2,	// (0x000237ca) list_single_number_heading_pane_cp2

0x8eb2,	// (0x000237ca) list_single_number_pane_cp2_ParamLimits

0x8eb2,	// (0x000237ca) list_single_number_pane_cp2

0x8eb2,	// (0x000237ca) list_single_pane_cp2_ParamLimits

0x8eb2,	// (0x000237ca) list_single_pane_cp2

0x8f47,	// (0x0002385f) bg_popup_sub_pane_cp22

0x61b6,	// (0x00020ace) popup_side_volume_key_window_g1

0x61e0,	// (0x00020af8) popup_side_volume_key_window_t1

0x61fc,	// (0x00020b14) volume_small_pane_cp1

0x81e3,	// (0x00022afb) bg_popup_sub_pane_cp24_ParamLimits

0x81e3,	// (0x00022afb) bg_popup_sub_pane_cp24

0x8f5d,	// (0x00023875) fep_china_uni_candidate_pane_ParamLimits

0x8f5d,	// (0x00023875) fep_china_uni_candidate_pane

0x8f71,	// (0x00023889) fep_china_uni_entry_pane

0x8f81,	// (0x00023899) popup_fep_china_uni_window_g1

0x8f9d,	// (0x000238b5) fep_china_uni_entry_pane_g1

0x8fa5,	// (0x000238bd) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0002a03a) fep_china_uni_entry_pane_g

0x8fad,	// (0x000238c5) fep_entry_item_pane

0x8fb7,	// (0x000238cf) fep_candidate_item_pane

0x8fbf,	// (0x000238d7) fep_china_uni_candidate_pane_g1

0x8fc7,	// (0x000238df) fep_china_uni_candidate_pane_g2

0x8fcf,	// (0x000238e7) fep_china_uni_candidate_pane_g3

0x8fd7,	// (0x000238ef) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0002a03f) fep_china_uni_candidate_pane_g

0x7e7e,	// (0x00022796) fep_entry_item_pane_g1

0x8fdf,	// (0x000238f7) fep_entry_item_pane_t1_ParamLimits

0x8fdf,	// (0x000238f7) fep_entry_item_pane_t1

0x8ff5,	// (0x0002390d) fep_candidate_item_pane_t1_ParamLimits

0x8ff5,	// (0x0002390d) fep_candidate_item_pane_t1

0x900a,	// (0x00023922) fep_candidate_item_pane_t2_ParamLimits

0x900a,	// (0x00023922) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0002a048) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0002a048) fep_candidate_item_pane_t

0x7f68,	// (0x00022880) list_highlight_pane_cp31_ParamLimits

0x7f68,	// (0x00022880) list_highlight_pane_cp31

0x901c,	// (0x00023934) level_1_signal_lsc

0x9025,	// (0x0002393d) level_2_signal_lsc

0x902e,	// (0x00023946) level_3_signal_lsc

0x9037,	// (0x0002394f) level_4_signal_lsc

0x9040,	// (0x00023958) level_5_signal_lsc

0x9049,	// (0x00023961) level_6_signal_lsc

0x9052,	// (0x0002396a) level_7_signal_lsc

0x9052,	// (0x0002396a) level_1_battery_lsc

0x905b,	// (0x00023973) level_2_battery_lsc

0x9064,	// (0x0002397c) level_3_battery_lsc

0x906d,	// (0x00023985) level_4_battery_lsc

0x9076,	// (0x0002398e) level_5_battery_lsc

0x907f,	// (0x00023997) level_6_battery_lsc

0x901c,	// (0x00023934) level_7_battery_lsc

0x9088,	// (0x000239a0) scroll_handle_focus_pane_g1

0x9091,	// (0x000239a9) scroll_handle_focus_pane_g2

0x909a,	// (0x000239b2) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0002a04d) scroll_handle_focus_pane_g

0x508e,	// (0x0001f9a6) list_single_2graphic_pane_g1_ParamLimits

0x508e,	// (0x0001f9a6) list_single_2graphic_pane_g1

0x4a20,	// (0x0001f338) list_single_2graphic_pane_g2_ParamLimits

0x4a20,	// (0x0001f338) list_single_2graphic_pane_g2

0x49a6,	// (0x0001f2be) list_single_2graphic_pane_g3_ParamLimits

0x49a6,	// (0x0001f2be) list_single_2graphic_pane_g3

0x509a,	// (0x0001f9b2) list_single_2graphic_pane_g4_ParamLimits

0x509a,	// (0x0001f9b2) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0002a054) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0002a054) list_single_2graphic_pane_g

0x50a6,	// (0x0001f9be) list_single_2graphic_pane_t1_ParamLimits

0x50a6,	// (0x0001f9be) list_single_2graphic_pane_t1

0x50d4,	// (0x0001f9ec) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x50d4,	// (0x0001f9ec) list_double2_graphic_large_graphic_pane_g1

0x4ac5,	// (0x0001f3dd) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4ac5,	// (0x0001f3dd) list_double2_graphic_large_graphic_pane_g2

0x4ad6,	// (0x0001f3ee) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4ad6,	// (0x0001f3ee) list_double2_graphic_large_graphic_pane_g3

0x50e4,	// (0x0001f9fc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x50e4,	// (0x0001f9fc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0002a05d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0002a05d) list_double2_graphic_large_graphic_pane_g

0x50f0,	// (0x0001fa08) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x50f0,	// (0x0001fa08) list_double2_graphic_large_graphic_pane_t1

0x5106,	// (0x0001fa1e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5106,	// (0x0001fa1e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0002a066) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0002a066) list_double2_graphic_large_graphic_pane_t

0x91e2,	// (0x00023afa) popup_fast_swap_window_ParamLimits

0x91e2,	// (0x00023afa) popup_fast_swap_window

0x91fe,	// (0x00023b16) popup_side_volume_key_window

0x921a,	// (0x00023b32) stacon_top_pane

0x9224,	// (0x00023b3c) status_pane_ParamLimits

0x9224,	// (0x00023b3c) status_pane

0x9232,	// (0x00023b4a) status_small_pane

0x7e88,	// (0x000227a0) control_pane

0x7e88,	// (0x000227a0) stacon_bottom_pane

0x87ba,	// (0x000230d2) scroll_pane_cp121

0x87b1,	// (0x000230c9) set_content_pane

0x90a3,	// (0x000239bb) bg_active_tab_pane_g1_cp1

0x90ac,	// (0x000239c4) bg_active_tab_pane_g2_cp1

0x90b5,	// (0x000239cd) bg_active_tab_pane_g3_cp1

0x90a3,	// (0x000239bb) bg_passive_tab_pane_g1_cp1

0x90ac,	// (0x000239c4) bg_passive_tab_pane_g2_cp1

0x90b5,	// (0x000239cd) bg_passive_tab_pane_g3_cp1

0x90be,	// (0x000239d6) bg_active_tab_pane_g1_cp2

0x90ac,	// (0x000239c4) bg_active_tab_pane_g2_cp2

0x90c7,	// (0x000239df) bg_active_tab_pane_g3_cp2

0x90be,	// (0x000239d6) bg_passive_tab_pane_g1_cp2

0x90ac,	// (0x000239c4) bg_passive_tab_pane_g2_cp2

0x90c7,	// (0x000239df) bg_passive_tab_pane_g3_cp2

0x90d0,	// (0x000239e8) bg_active_tab_pane_g1_cp3

0x90ac,	// (0x000239c4) bg_active_tab_pane_g2_cp3

0x90d9,	// (0x000239f1) bg_active_tab_pane_g3_cp3

0x90d0,	// (0x000239e8) bg_passive_tab_pane_g1_cp3

0x90ac,	// (0x000239c4) bg_passive_tab_pane_g2_cp3

0x90d9,	// (0x000239f1) bg_passive_tab_pane_g3_cp3

0x90e2,	// (0x000239fa) bg_active_tab_pane_g1_cp4

0x90ac,	// (0x000239c4) bg_active_tab_pane_g2_cp4

0x90ed,	// (0x00023a05) bg_active_tab_pane_g3_cp4

0x90e2,	// (0x000239fa) bg_passive_tab_pane_g1_cp4

0x90ac,	// (0x000239c4) bg_passive_tab_pane_g2_cp4

0x90ed,	// (0x00023a05) bg_passive_tab_pane_g3_cp4

0x9136,	// (0x00023a4e) bg_active_tab_pane_g1_cp5

0x90ac,	// (0x000239c4) bg_active_tab_pane_g2_cp5

0x913f,	// (0x00023a57) bg_active_tab_pane_g3_cp5

0x9136,	// (0x00023a4e) bg_passive_tab_pane_g1_cp5

0x90ac,	// (0x000239c4) bg_passive_tab_pane_g2_cp5

0x913f,	// (0x00023a57) bg_passive_tab_pane_g3_cp5

0x9148,	// (0x00023a60) list_set_graphic_pane_ParamLimits

0x9148,	// (0x00023a60) list_set_graphic_pane

0x7e88,	// (0x000227a0) bg_set_opt_pane_cp4

0x9165,	// (0x00023a7d) list_set_graphic_pane_g1_ParamLimits

0x9165,	// (0x00023a7d) list_set_graphic_pane_g1

0x9171,	// (0x00023a89) list_set_graphic_pane_g2_ParamLimits

0x9171,	// (0x00023a89) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0002a06b) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0002a06b) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x0002a3d9) volume_small_pane_cp_g

0x9195,	// (0x00023aad) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9195,	// (0x00023aad) list_double2_large_graphic_pane_g1_cp2

0x91a1,	// (0x00023ab9) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x91a1,	// (0x00023ab9) list_double2_large_graphic_pane_g2_cp2

0x91b2,	// (0x00023aca) list_double2_large_graphic_pane_g3_cp2

0x91ba,	// (0x00023ad2) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x91ba,	// (0x00023ad2) list_double2_large_graphic_pane_t1_cp2

0x91d0,	// (0x00023ae8) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x91d0,	// (0x00023ae8) list_double2_large_graphic_pane_t2_cp2

0xada8,	// (0x000256c0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xada8,	// (0x000256c0) list_double_large_graphic_pane_g1_cp2

0xadb9,	// (0x000256d1) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xadb9,	// (0x000256d1) list_double_large_graphic_pane_g2_cp2

0x934b,	// (0x00023c63) list_double_large_graphic_pane_g3_cp2

0xadca,	// (0x000256e2) list_double_large_graphic_pane_g4_cp

0xadd2,	// (0x000256ea) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xadd2,	// (0x000256ea) list_double_large_graphic_pane_t1_cp2

0xade9,	// (0x00025701) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xade9,	// (0x00025701) list_double_large_graphic_pane_t2_cp2

0x923d,	// (0x00023b55) list_double2_graphic_pane_g1_cp2_ParamLimits

0x923d,	// (0x00023b55) list_double2_graphic_pane_g1_cp2

0x924b,	// (0x00023b63) list_double2_graphic_pane_g2_cp2_ParamLimits

0x924b,	// (0x00023b63) list_double2_graphic_pane_g2_cp2

0x925c,	// (0x00023b74) list_double2_graphic_pane_g3_cp2

0x9266,	// (0x00023b7e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x9266,	// (0x00023b7e) list_double2_graphic_pane_t1_cp2

0x927c,	// (0x00023b94) list_double2_graphic_pane_t2_cp2_ParamLimits

0x927c,	// (0x00023b94) list_double2_graphic_pane_t2_cp2

0x928e,	// (0x00023ba6) list_single_number_heading_pane_g1_cp2_ParamLimits

0x928e,	// (0x00023ba6) list_single_number_heading_pane_g1_cp2

0x929a,	// (0x00023bb2) list_single_number_heading_pane_g2_cp2

0x92a2,	// (0x00023bba) list_single_number_heading_pane_t1_cp2_ParamLimits

0x92a2,	// (0x00023bba) list_single_number_heading_pane_t1_cp2

0x92b8,	// (0x00023bd0) list_single_number_heading_pane_t2_cp2_ParamLimits

0x92b8,	// (0x00023bd0) list_single_number_heading_pane_t2_cp2

0x92ca,	// (0x00023be2) list_single_number_heading_pane_t3_cp2_ParamLimits

0x92ca,	// (0x00023be2) list_single_number_heading_pane_t3_cp2

0x928e,	// (0x00023ba6) list_single_heading_pane_g1_cp2_ParamLimits

0x928e,	// (0x00023ba6) list_single_heading_pane_g1_cp2

0x929a,	// (0x00023bb2) list_single_heading_pane_g2_cp2

0x92a2,	// (0x00023bba) list_single_heading_pane_t1_cp2_ParamLimits

0x92a2,	// (0x00023bba) list_single_heading_pane_t1_cp2

0xabb0,	// (0x000254c8) list_single_heading_pane_t2_cp2_ParamLimits

0xabb0,	// (0x000254c8) list_single_heading_pane_t2_cp2

0xaaf8,	// (0x00025410) list_double_graphic_pane_g1_cp2_ParamLimits

0xaaf8,	// (0x00025410) list_double_graphic_pane_g1_cp2

0xab04,	// (0x0002541c) list_double_graphic_pane_g2_cp2_ParamLimits

0xab04,	// (0x0002541c) list_double_graphic_pane_g2_cp2

0xab13,	// (0x0002542b) list_double_graphic_pane_g3_cp2

0xab1b,	// (0x00025433) list_double_graphic_pane_t1_cp2_ParamLimits

0xab1b,	// (0x00025433) list_double_graphic_pane_t1_cp2

0xab31,	// (0x00025449) list_double_graphic_pane_t2_cp2_ParamLimits

0xab31,	// (0x00025449) list_double_graphic_pane_t2_cp2

0x933f,	// (0x00023c57) list_double_number_pane_g1_cp2_ParamLimits

0x933f,	// (0x00023c57) list_double_number_pane_g1_cp2

0x934b,	// (0x00023c63) list_double_number_pane_g2_cp2

0xaabc,	// (0x000253d4) list_double_number_pane_t1_cp2_ParamLimits

0xaabc,	// (0x000253d4) list_double_number_pane_t1_cp2

0xaad0,	// (0x000253e8) list_double_number_pane_t2_cp2_ParamLimits

0xaad0,	// (0x000253e8) list_double_number_pane_t2_cp2

0xaae6,	// (0x000253fe) list_double_number_pane_t3_cp2_ParamLimits

0xaae6,	// (0x000253fe) list_double_number_pane_t3_cp2

0xa9a5,	// (0x000252bd) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9a5,	// (0x000252bd) list_single_graphic_pane_g1_cp2

0x93a3,	// (0x00023cbb) list_single_graphic_pane_g2_cp2_ParamLimits

0x93a3,	// (0x00023cbb) list_single_graphic_pane_g2_cp2

0x93af,	// (0x00023cc7) list_single_graphic_pane_g3_cp2

0xa97b,	// (0x00025293) list_single_graphic_pane_t1_cp2_ParamLimits

0xa97b,	// (0x00025293) list_single_graphic_pane_t1_cp2

0x93a3,	// (0x00023cbb) list_single_number_pane_g1_cp2_ParamLimits

0x93a3,	// (0x00023cbb) list_single_number_pane_g1_cp2

0x93af,	// (0x00023cc7) list_single_number_pane_g2_cp2

0xa97b,	// (0x00025293) list_single_number_pane_t1_cp2_ParamLimits

0xa97b,	// (0x00025293) list_single_number_pane_t1_cp2

0xa991,	// (0x000252a9) list_single_number_pane_t2_cp2_ParamLimits

0xa991,	// (0x000252a9) list_single_number_pane_t2_cp2

0x91a1,	// (0x00023ab9) list_double2_pane_g1_cp2_ParamLimits

0x91a1,	// (0x00023ab9) list_double2_pane_g1_cp2

0x91b2,	// (0x00023aca) list_double2_pane_g2_cp2

0x9317,	// (0x00023c2f) list_double2_pane_t1_cp2_ParamLimits

0x9317,	// (0x00023c2f) list_double2_pane_t1_cp2

0x932d,	// (0x00023c45) list_double2_pane_t2_cp2_ParamLimits

0x932d,	// (0x00023c45) list_double2_pane_t2_cp2

0x933f,	// (0x00023c57) list_double_pane_g1_cp2_ParamLimits

0x933f,	// (0x00023c57) list_double_pane_g1_cp2

0x934b,	// (0x00023c63) list_double_pane_g2_cp2

0x9353,	// (0x00023c6b) list_double_pane_t1_cp2_ParamLimits

0x9353,	// (0x00023c6b) list_double_pane_t1_cp2

0x9369,	// (0x00023c81) list_double_pane_t2_cp2_ParamLimits

0x9369,	// (0x00023c81) list_double_pane_t2_cp2

0x9393,	// (0x00023cab) list_single_pane_cp2_g3

0x93a3,	// (0x00023cbb) list_single_pane_g1_cp2_ParamLimits

0x93a3,	// (0x00023cbb) list_single_pane_g1_cp2

0x93af,	// (0x00023cc7) list_single_pane_g2_cp2

0x93b7,	// (0x00023ccf) list_single_pane_t1_cp2_ParamLimits

0x93b7,	// (0x00023ccf) list_single_pane_t1_cp2

0x93cf,	// (0x00023ce7) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x93cf,	// (0x00023ce7) list_single_large_graphic_pane_g1_cp2

0x93db,	// (0x00023cf3) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x93db,	// (0x00023cf3) list_single_large_graphic_pane_g2_cp2

0x93e7,	// (0x00023cff) list_single_large_graphic_pane_g3_cp2

0x93ef,	// (0x00023d07) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x93ef,	// (0x00023d07) list_single_large_graphic_pane_g4_cp1

0x9409,	// (0x00023d21) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9409,	// (0x00023d21) list_single_large_graphic_pane_t1_cp2

0xa947,	// (0x0002525f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa947,	// (0x0002525f) list_single_graphic_heading_pane_g1_cp2

0xa914,	// (0x0002522c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa914,	// (0x0002522c) list_single_graphic_heading_pane_g4_cp2

0x93af,	// (0x00023cc7) list_single_graphic_heading_pane_g5_cp2

0xa953,	// (0x0002526b) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa953,	// (0x0002526b) list_single_graphic_heading_pane_t1_cp2

0xa969,	// (0x00025281) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa969,	// (0x00025281) list_single_graphic_heading_pane_t2_cp2

0xa908,	// (0x00025220) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa908,	// (0x00025220) list_single_2graphic_pane_g1_cp2

0xa914,	// (0x0002522c) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa914,	// (0x0002522c) list_single_2graphic_pane_g2_cp2

0x93af,	// (0x00023cc7) list_single_2graphic_pane_g3_cp2

0xa925,	// (0x0002523d) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa925,	// (0x0002523d) list_single_2graphic_pane_g4_cp2

0xa931,	// (0x00025249) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa931,	// (0x00025249) list_single_2graphic_pane_t1_cp2

0x7e7e,	// (0x00022796) list_highlight_pane_g10_cp1

0xa4e0,	// (0x00024df8) list_highlight_pane_g1_cp1

0xa4e8,	// (0x00024e00) list_highlight_pane_g2_cp1

0xa4f0,	// (0x00024e08) list_highlight_pane_g3_cp1

0xa4f8,	// (0x00024e10) list_highlight_pane_g4_cp1

0xa500,	// (0x00024e18) list_highlight_pane_g5_cp1

0xa508,	// (0x00024e20) list_highlight_pane_g6_cp1

0xa510,	// (0x00024e28) list_highlight_pane_g7_cp1

0xa518,	// (0x00024e30) list_highlight_pane_g8_cp1

0xa520,	// (0x00024e38) list_highlight_pane_g9_cp1

0xa400,	// (0x00024d18) form_field_slider_pane_t3

0xa40e,	// (0x00024d26) form_field_slider_pane_t4

0xa41c,	// (0x00024d34) slider_form_pane_ParamLimits

0xa41c,	// (0x00024d34) slider_form_pane

0x7e88,	// (0x000227a0) control_abbreviations

0x7e88,	// (0x000227a0) control_conventions

0x7e88,	// (0x000227a0) control_definitions

0x7e88,	// (0x000227a0) format_table_attribute

0xabfa,	// (0x00025512) bg_popup_preview_window_pane_g9

0x7e88,	// (0x000227a0) format_table_data2

0x7e88,	// (0x000227a0) format_table_data3

0x7e88,	// (0x000227a0) format_table_data_example

0x0008,

0x7e88,	// (0x000227a0) intro_purpose

0xf8e8,	// (0x0002a200) bg_popup_preview_window_pane_g

0x7e88,	// (0x000227a0) texts_category

0x7e88,	// (0x000227a0) texts_graphics

0x941f,	// (0x00023d37) text_digital

0x942e,	// (0x00023d46) text_primary

0x943d,	// (0x00023d55) text_primary_small

0x944c,	// (0x00023d64) text_secondary

0x945b,	// (0x00023d73) text_title

0xb334,	// (0x00025c4c) bg_passive_tab_pane_g1_cp3_srt

0x90ac,	// (0x000239c4) bg_passive_tab_pane_g2_cp3_srt

0xb33d,	// (0x00025c55) bg_passive_tab_pane_g3_cp3_srt

0x7f68,	// (0x00022880) bg_active_tab_pane_cp3_srt_ParamLimits

0x7f68,	// (0x00022880) bg_active_tab_pane_cp3_srt

0xb346,	// (0x00025c5e) tabs_4_active_pane_srt_g1

0xb34e,	// (0x00025c66) tabs_4_active_pane_srt_t1_ParamLimits

0xb34e,	// (0x00025c66) tabs_4_active_pane_srt_t1

0xb334,	// (0x00025c4c) bg_active_tab_pane_g1_cp3_copy1

0x90ac,	// (0x000239c4) bg_active_tab_pane_g2_cp3_copy1

0xb33d,	// (0x00025c55) bg_active_tab_pane_g3_cp3_copy1

0x7f68,	// (0x00022880) tabs_2_long_active_pane_srt_ParamLimits

0x7f68,	// (0x00022880) tabs_2_long_active_pane_srt

0x7f68,	// (0x00022880) tabs_2_long_passive_pane_srt_ParamLimits

0x7f68,	// (0x00022880) tabs_2_long_passive_pane_srt

0x89b8,	// (0x000232d0) bg_passive_tab_pane_cp4_srt_ParamLimits

0x89b8,	// (0x000232d0) bg_passive_tab_pane_cp4_srt

0xb028,	// (0x00025940) bg_passive_tab_pane_g1_cp4_srt

0x90ac,	// (0x000239c4) bg_passive_tab_pane_g2_cp4_srt

0xb031,	// (0x00025949) bg_passive_tab_pane_g3_cp4_srt

0x8997,	// (0x000232af) bg_active_tab_pane_cp4_srt_ParamLimits

0x8997,	// (0x000232af) bg_active_tab_pane_cp4_srt

0xb03a,	// (0x00025952) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb03a,	// (0x00025952) tabs_2_long_active_pane_srt_t1

0xb028,	// (0x00025940) bg_active_tab_pane_g1_cp4_srt

0x90ac,	// (0x000239c4) bg_active_tab_pane_g2_cp4_srt

0xb031,	// (0x00025949) bg_active_tab_pane_g3_cp4_srt

0x81e3,	// (0x00022afb) tabs_3_long_active_pane_srt_ParamLimits

0x81e3,	// (0x00022afb) tabs_3_long_active_pane_srt

0x81e3,	// (0x00022afb) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x81e3,	// (0x00022afb) tabs_3_long_passive_pane_cp_srt

0x81e3,	// (0x00022afb) tabs_3_long_passive_pane_srt_ParamLimits

0x81e3,	// (0x00022afb) tabs_3_long_passive_pane_srt

0x89b8,	// (0x000232d0) bg_passive_tab_pane_cp5_srt_ParamLimits

0x89b8,	// (0x000232d0) bg_passive_tab_pane_cp5_srt

0x9136,	// (0x00023a4e) bg_passive_tab_pane_g1_cp5_srt

0x90ac,	// (0x000239c4) bg_passive_tab_pane_g2_cp5_srt

0x913f,	// (0x00023a57) bg_passive_tab_pane_g3_cp5_srt

0x8997,	// (0x000232af) bg_active_tab_pane_cp5_srt_ParamLimits

0x8997,	// (0x000232af) bg_active_tab_pane_cp5_srt

0xb016,	// (0x0002592e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb016,	// (0x0002592e) tabs_3_long_active_pane_srt_t1

0x9136,	// (0x00023a4e) bg_active_tab_pane_g1_cp5_srt

0x90ac,	// (0x000239c4) bg_active_tab_pane_g2_cp5_srt

0x913f,	// (0x00023a57) bg_active_tab_pane_g3_cp5_srt

0xb008,	// (0x00025920) navi_text_pane_srt_t1

0xb000,	// (0x00025918) navi_icon_pane_srt_g1

0x9630,	// (0x00023f48) midp_editing_number_pane_srt

0x946a,	// (0x00023d82) midp_ticker_pane_srt

0x9638,	// (0x00023f50) midp_ticker_pane_srt_g1

0x9640,	// (0x00023f58) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0002a08a) midp_ticker_pane_srt_g

0x9648,	// (0x00023f60) midp_ticker_pane_srt_t1

0xaff1,	// (0x00025909) midp_editing_number_pane_t1_copy1

0x9472,	// (0x00023d8a) listscroll_midp_pane

0x9472,	// (0x00023d8a) midp_form_pane

0x94e2,	// (0x00023dfa) midp_info_popup_window_ParamLimits

0x94e2,	// (0x00023dfa) midp_info_popup_window

0x8880,	// (0x00023198) bg_popup_sub_pane_cp50_ParamLimits

0x8880,	// (0x00023198) bg_popup_sub_pane_cp50

0xa118,	// (0x00024a30) listscroll_midp_info_pane_ParamLimits

0xa118,	// (0x00024a30) listscroll_midp_info_pane

0xa0f8,	// (0x00024a10) listscroll_form_midp_pane_ParamLimits

0xa0f8,	// (0x00024a10) listscroll_form_midp_pane

0xa104,	// (0x00024a1c) scroll_bar_cp050

0xa0d8,	// (0x000249f0) list_midp_pane

0xbd83,	// (0x0002669b) signal_pane_g2_cp

0xa012,	// (0x0002492a) listscroll_midp_info_pane_t1_ParamLimits

0xa012,	// (0x0002492a) listscroll_midp_info_pane_t1

0xa02a,	// (0x00024942) listscroll_midp_info_pane_t2_ParamLimits

0xa02a,	// (0x00024942) listscroll_midp_info_pane_t2

0xa068,	// (0x00024980) listscroll_midp_info_pane_t3_ParamLimits

0xa068,	// (0x00024980) listscroll_midp_info_pane_t3

0xa0a2,	// (0x000249ba) listscroll_midp_info_pane_t4_ParamLimits

0xa0a2,	// (0x000249ba) listscroll_midp_info_pane_t4

0x0003,

0xf823,	// (0x0002a13b) listscroll_midp_info_pane_t_ParamLimits

0xf823,	// (0x0002a13b) listscroll_midp_info_pane_t

0x8944,	// (0x0002325c) scroll_pane_cp21

0x9fb0,	// (0x000248c8) form_midp_field_choice_group_pane

0x9fb9,	// (0x000248d1) form_midp_field_text_pane

0x9ff8,	// (0x00024910) form_midp_field_time_pane

0xa000,	// (0x00024918) form_midp_gauge_slider_pane

0xa009,	// (0x00024921) form_midp_gauge_wait_pane

0x7e88,	// (0x000227a0) form_midp_image_pane

0x5271,	// (0x0001fb89) list_single_midp_pane_ParamLimits

0x5271,	// (0x0001fb89) list_single_midp_pane

0x9f6b,	// (0x00024883) form_midp_field_text_pane_t1

0x9d32,	// (0x0002464a) input_focus_pane_cp050

0x9f9f,	// (0x000248b7) list_midp_form_text_pane

0x9f3a,	// (0x00024852) form_midp_field_choice_group_pane_t1

0x9f48,	// (0x00024860) input_focus_pane_cp051

0x9f5c,	// (0x00024874) list_midp_choice_pane

0x7e88,	// (0x000227a0) status_idle_pane

0x9f1e,	// (0x00024836) form_midp_field_time_pane_t1

0x7e7e,	// (0x00022796) wait_anim_pane_g2_copy1

0x9f2c,	// (0x00024844) form_midp_field_time_pane_t2

0x0001,

0x9590,	// (0x00023ea8) aid_navinavi_width_2_pane

0xf81e,	// (0x0002a136) form_midp_field_time_pane_t

0x7e88,	// (0x000227a0) input_focus_pane_cp052

0x7e88,	// (0x000227a0) bg_input_focus_pane_cp040

0x9ede,	// (0x000247f6) form_midp_gauge_slider_pane_t1

0x9eec,	// (0x00024804) form_midp_gauge_slider_pane_t2

0x9efa,	// (0x00024812) form_midp_gauge_slider_pane_t3

0x9f08,	// (0x00024820) form_midp_gauge_slider_pane_t4

0x0003,

0xf815,	// (0x0002a12d) form_midp_gauge_slider_pane_t

0x9f16,	// (0x0002482e) form_midp_slider_pane

0x7f68,	// (0x00022880) bg_input_focus_pane_cp041_ParamLimits

0x7f68,	// (0x00022880) bg_input_focus_pane_cp041

0x9eab,	// (0x000247c3) form_midp_gauge_wait_pane_t1_ParamLimits

0x9eab,	// (0x000247c3) form_midp_gauge_wait_pane_t1

0x9ebd,	// (0x000247d5) form_midp_gauge_wait_pane_t2_ParamLimits

0x9ebd,	// (0x000247d5) form_midp_gauge_wait_pane_t2

0x0001,

0xf810,	// (0x0002a128) form_midp_gauge_wait_pane_t_ParamLimits

0xf810,	// (0x0002a128) form_midp_gauge_wait_pane_t

0x9ecf,	// (0x000247e7) form_midp_wait_pane_ParamLimits

0x9ecf,	// (0x000247e7) form_midp_wait_pane

0x9e69,	// (0x00024781) form_midp_image_pane_g1

0x9e72,	// (0x0002478a) form_midp_image_pane_t1

0x9e81,	// (0x00024799) form_midp_image_pane_t2

0x9e9c,	// (0x000247b4) form_midp_image_pane_t3

0x0002,

0xf809,	// (0x0002a121) form_midp_image_pane_t

0x9e60,	// (0x00024778) list_single_midp_pane_g1

0x5262,	// (0x0001fb7a) list_single_midp_pane_t1

0x9e3b,	// (0x00024753) list_midp_form_item_pane_ParamLimits

0x9e3b,	// (0x00024753) list_midp_form_item_pane

0x9538,	// (0x00023e50) list_midp_form_item_pane_t1

0x9547,	// (0x00023e5f) midp_ticker_pane_g1

0x9553,	// (0x00023e6b) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0002a070) midp_ticker_pane_g

0x955f,	// (0x00023e77) midp_ticker_pane_t1

0xb242,	// (0x00025b5a) midp_editing_number_pane_t1

0xb220,	// (0x00025b38) midp_editing_number_pane

0xb22f,	// (0x00025b47) midp_ticker_pane

0xafe1,	// (0x000258f9) ai_message_heading_pane

0x7e88,	// (0x000227a0) bg_popup_window_pane_cp14

0xafe9,	// (0x00025901) listscroll_ai_message_pane

0xaf6b,	// (0x00025883) ai_message_heading_pane_g1_ParamLimits

0xaf6b,	// (0x00025883) ai_message_heading_pane_g1

0xaf77,	// (0x0002588f) ai_message_heading_pane_g2_ParamLimits

0xaf77,	// (0x0002588f) ai_message_heading_pane_g2

0xaf83,	// (0x0002589b) ai_message_heading_pane_g3_ParamLimits

0xaf83,	// (0x0002589b) ai_message_heading_pane_g3

0xaf8f,	// (0x000258a7) ai_message_heading_pane_g4_ParamLimits

0xaf8f,	// (0x000258a7) ai_message_heading_pane_g4

0x0003,

0xf94a,	// (0x0002a262) ai_message_heading_pane_g_ParamLimits

0xf94a,	// (0x0002a262) ai_message_heading_pane_g

0xaf9b,	// (0x000258b3) ai_message_heading_pane_t1_ParamLimits

0xaf9b,	// (0x000258b3) ai_message_heading_pane_t1

0xafb5,	// (0x000258cd) ai_message_heading_pane_t2_ParamLimits

0xafb5,	// (0x000258cd) ai_message_heading_pane_t2

0x0001,

0xf953,	// (0x0002a26b) ai_message_heading_pane_t_ParamLimits

0xf953,	// (0x0002a26b) ai_message_heading_pane_t

0xafc7,	// (0x000258df) bg_popup_heading_pane_cp1_ParamLimits

0xafc7,	// (0x000258df) bg_popup_heading_pane_cp1

0xaf59,	// (0x00025871) list_ai_message_pane_ParamLimits

0xaf59,	// (0x00025871) list_ai_message_pane

0x8944,	// (0x0002325c) scroll_pane_cp10

0xaef5,	// (0x0002580d) list_ai_message_pane_g1

0xaefd,	// (0x00025815) list_ai_message_pane_g2

0x0001,

0xf927,	// (0x0002a23f) list_ai_message_pane_g

0xaf05,	// (0x0002581d) list_ai_message_pane_t1_ParamLimits

0xaf05,	// (0x0002581d) list_ai_message_pane_t1

0xaf1a,	// (0x00025832) list_ai_message_pane_t2_ParamLimits

0xaf1a,	// (0x00025832) list_ai_message_pane_t2

0xaf2f,	// (0x00025847) list_ai_message_pane_t3_ParamLimits

0xaf2f,	// (0x00025847) list_ai_message_pane_t3

0xaf44,	// (0x0002585c) list_ai_message_pane_t4_ParamLimits

0xaf44,	// (0x0002585c) list_ai_message_pane_t4

0x0003,

0xf92c,	// (0x0002a244) list_ai_message_pane_t_ParamLimits

0xf92c,	// (0x0002a244) list_ai_message_pane_t

0xaee0,	// (0x000257f8) cell_ai_soft_ind_pane_ParamLimits

0xaee0,	// (0x000257f8) cell_ai_soft_ind_pane

0x9571,	// (0x00023e89) cell_ai_soft_ind_pane_g1_ParamLimits

0x9571,	// (0x00023e89) cell_ai_soft_ind_pane_g1

0x7e88,	// (0x000227a0) grid_highlight_cp1

0x957e,	// (0x00023e96) text_secondary_cp56_ParamLimits

0x957e,	// (0x00023e96) text_secondary_cp56

0xaeb5,	// (0x000257cd) example_general_pane_ParamLimits

0xaeb5,	// (0x000257cd) example_general_pane

0xaec1,	// (0x000257d9) example_parent_pane_g1_ParamLimits

0xaec1,	// (0x000257d9) example_parent_pane_g1

0xaecd,	// (0x000257e5) example_parent_pane_t1_ParamLimits

0xaecd,	// (0x000257e5) example_parent_pane_t1

0x68d9,	// (0x000211f1) popup_preview_text_window_ParamLimits

0x68d9,	// (0x000211f1) popup_preview_text_window

0x939b,	// (0x00023cb3) list_single_pane_cp2_g4

0x8299,	// (0x00022bb1) bg_popup_preview_window_pane_ParamLimits

0x8299,	// (0x00022bb1) bg_popup_preview_window_pane

0xac02,	// (0x0002551a) popup_preview_text_window_t1_ParamLimits

0xac02,	// (0x0002551a) popup_preview_text_window_t1

0xac20,	// (0x00025538) popup_preview_text_window_t2_ParamLimits

0xac20,	// (0x00025538) popup_preview_text_window_t2

0xac69,	// (0x00025581) popup_preview_text_window_t3_ParamLimits

0xac69,	// (0x00025581) popup_preview_text_window_t3

0xacae,	// (0x000255c6) popup_preview_text_window_t4_ParamLimits

0xacae,	// (0x000255c6) popup_preview_text_window_t4

0x0004,

0xf8fb,	// (0x0002a213) popup_preview_text_window_t_ParamLimits

0xf8fb,	// (0x0002a213) popup_preview_text_window_t

0xad2c,	// (0x00025644) scroll_pane_cp11

0x9cbe,	// (0x000245d6) bg_popup_preview_window_pane_g1

0xabc2,	// (0x000254da) bg_popup_preview_window_pane_g2

0xabca,	// (0x000254e2) bg_popup_preview_window_pane_g3

0xabd2,	// (0x000254ea) bg_popup_preview_window_pane_g4

0xabda,	// (0x000254f2) bg_popup_preview_window_pane_g5

0xabe2,	// (0x000254fa) bg_popup_preview_window_pane_g6

0xabea,	// (0x00025502) bg_popup_preview_window_pane_g7

0xabf2,	// (0x0002550a) bg_popup_preview_window_pane_g8

0x5af3,	// (0x0002040b) aid_popup_width_pane

0x68b7,	// (0x000211cf) popup_midp_note_alarm_window_ParamLimits

0x68b7,	// (0x000211cf) popup_midp_note_alarm_window

0x87cb,	// (0x000230e3) data_form_pane_ParamLimits

0x4ed7,	// (0x0001f7ef) form_field_data_pane_g1

0x4ee1,	// (0x0001f7f9) form_field_data_pane_t1_ParamLimits

0x87d7,	// (0x000230ef) input_focus_pane_ParamLimits

0x4ef9,	// (0x0001f811) data_form_wide_pane_ParamLimits

0x4f0a,	// (0x0001f822) form_field_data_wide_pane_g1

0x4f16,	// (0x0001f82e) form_field_data_wide_pane_t1_ParamLimits

0x8548,	// (0x00022e60) input_focus_pane_cp6_ParamLimits

0x88f1,	// (0x00023209) input_popup_find_pane_g1_ParamLimits

0x88f1,	// (0x00023209) input_popup_find_pane_g1

0x6065,	// (0x0002097d) aid_navi_side_left_pane

0x607a,	// (0x00020992) aid_navi_side_right_pane

0xa5db,	// (0x00024ef3) bg_popup_window_pane_cp30_ParamLimits

0xa5db,	// (0x00024ef3) bg_popup_window_pane_cp30

0xa655,	// (0x00024f6d) popup_midp_note_alarm_window_g1_ParamLimits

0xa655,	// (0x00024f6d) popup_midp_note_alarm_window_g1

0xa685,	// (0x00024f9d) popup_midp_note_alarm_window_t1_ParamLimits

0xa685,	// (0x00024f9d) popup_midp_note_alarm_window_t1

0xa726,	// (0x0002503e) popup_midp_note_alarm_window_t2_ParamLimits

0xa726,	// (0x0002503e) popup_midp_note_alarm_window_t2

0xa7d4,	// (0x000250ec) popup_midp_note_alarm_window_t3_ParamLimits

0xa7d4,	// (0x000250ec) popup_midp_note_alarm_window_t3

0xa806,	// (0x0002511e) popup_midp_note_alarm_window_t4_ParamLimits

0xa806,	// (0x0002511e) popup_midp_note_alarm_window_t4

0xa82c,	// (0x00025144) popup_midp_note_alarm_window_t5_ParamLimits

0xa82c,	// (0x00025144) popup_midp_note_alarm_window_t5

0x000a,

0xf898,	// (0x0002a1b0) popup_midp_note_alarm_window_t_ParamLimits

0xf898,	// (0x0002a1b0) popup_midp_note_alarm_window_t

0xa8d8,	// (0x000251f0) wait_bar_pane_cp1_ParamLimits

0xa8d8,	// (0x000251f0) wait_bar_pane_cp1

0x7e88,	// (0x000227a0) wait_anim_pane_copy1

0x7e88,	// (0x000227a0) wait_border_pane_copy1

0xa2c1,	// (0x00024bd9) wait_border_pane_g1_copy1

0x4f30,	// (0x0001f848) form_field_popup_pane_g1

0x4f38,	// (0x0001f850) form_field_popup_pane_t1_ParamLimits

0x87d7,	// (0x000230ef) input_focus_pane_cp7_ParamLimits

0x8805,	// (0x0002311d) list_form_pane_ParamLimits

0x4f50,	// (0x0001f868) form_field_popup_wide_pane_g1

0x4f58,	// (0x0001f870) form_field_popup_wide_pane_t1_ParamLimits

0x87d7,	// (0x000230ef) input_focus_pane_cp8_ParamLimits

0x8811,	// (0x00023129) list_form_wide_pane_ParamLimits

0xb3c8,	// (0x00025ce0) aid_size_cell_graphic_pane

0x4fe2,	// (0x0001f8fa) data_form_pane_t1_ParamLimits

0x52c8,	// (0x0001fbe0) data_form_wide_pane_t1_ParamLimits

0x988b,	// (0x000241a3) bg_status_flat_pane

0x7ec8,	// (0x000227e0) title_pane_t1_ParamLimits

0x7f30,	// (0x00022848) title_pane_t2_ParamLimits

0x7f56,	// (0x0002286e) title_pane_t3_ParamLimits

0xf557,	// (0x00029e6f) title_pane_t_ParamLimits

0x8dc3,	// (0x000236db) level_1_signal_ParamLimits

0x8dd5,	// (0x000236ed) level_2_signal_ParamLimits

0x8de8,	// (0x00023700) level_3_signal_ParamLimits

0x8dfb,	// (0x00023713) level_4_signal_ParamLimits

0x8e0e,	// (0x00023726) level_5_signal_ParamLimits

0x8e21,	// (0x00023739) level_6_signal_ParamLimits

0x8e34,	// (0x0002374c) level_7_signal_ParamLimits

0x8dc3,	// (0x000236db) level_1_battery_ParamLimits

0x8dd5,	// (0x000236ed) level_2_battery_ParamLimits

0x8de8,	// (0x00023700) level_3_battery_ParamLimits

0x8dfb,	// (0x00023713) level_4_battery_ParamLimits

0x8e0e,	// (0x00023726) level_5_battery_ParamLimits

0x8e21,	// (0x00023739) level_6_battery_ParamLimits

0x8e34,	// (0x0002374c) level_7_battery_ParamLimits

0xa4e0,	// (0x00024df8) bg_status_flat_pane_g1

0xa4e8,	// (0x00024e00) bg_status_flat_pane_g2

0xa4f0,	// (0x00024e08) bg_status_flat_pane_g3

0xa4f8,	// (0x00024e10) bg_status_flat_pane_g4

0xa500,	// (0x00024e18) bg_status_flat_pane_g5

0xa508,	// (0x00024e20) bg_status_flat_pane_g6

0xa510,	// (0x00024e28) bg_status_flat_pane_g7

0x7f7e,	// (0x00022896) tabs_3_active_pane_t1_ParamLimits

0x7f7e,	// (0x00022896) tabs_3_passive_pane_t1_ParamLimits

0x7f98,	// (0x000228b0) tabs_4_active_pane_t1_ParamLimits

0x7f98,	// (0x000228b0) tabs_4_1_passive_pane_t1_ParamLimits

0x8985,	// (0x0002329d) tabs_2_active_pane_t1_ParamLimits

0x8985,	// (0x0002329d) tabs_2_passive_pane_t1_ParamLimits

0x8997,	// (0x000232af) bg_active_tab_pane_cp4_ParamLimits

0x89a5,	// (0x000232bd) tabs_2_long_active_pane_t1_ParamLimits

0x89b8,	// (0x000232d0) bg_passive_tab_pane_cp4_ParamLimits

0x17c3,	// (0x0001c0db) list_single_midp_graphic_pane_t1_ParamLimits

0x8997,	// (0x000232af) bg_active_tab_pane_cp5_ParamLimits

0x89c4,	// (0x000232dc) tabs_3_long_active_pane_t1_ParamLimits

0x89b8,	// (0x000232d0) bg_passive_tab_pane_cp5_ParamLimits

0x17c3,	// (0x0001c0db) list_single_midp_graphic_pane_t1

0x988b,	// (0x000241a3) bg_status_flat_pane_ParamLimits

0x994e,	// (0x00024266) indicator_pane_cp2_ParamLimits

0x994e,	// (0x00024266) indicator_pane_cp2

0x9a79,	// (0x00024391) navi_pane_srt_ParamLimits

0x9a79,	// (0x00024391) navi_pane_srt

0x9a9d,	// (0x000243b5) popup_clock_digital_analogue_window_cp1

0x8045,	// (0x0002295d) indicator_pane_t1

0x946a,	// (0x00023d82) copy_highlight_pane

0x946a,	// (0x00023d82) cursor_graphics_pane

0x946a,	// (0x00023d82) graphic_within_text_pane

0x946a,	// (0x00023d82) link_highlight_pane

0xacef,	// (0x00025607) popup_preview_text_window_t5_ParamLimits

0xacef,	// (0x00025607) popup_preview_text_window_t5

0x9598,	// (0x00023eb0) cursor_digital_pane

0x9598,	// (0x00023eb0) cursor_primary_pane

0x95a9,	// (0x00023ec1) cursor_primary_small_pane

0x95b1,	// (0x00023ec9) cursor_secondary_pane

0x95b9,	// (0x00023ed1) cursor_title_pane

0x9598,	// (0x00023eb0) link_highlight_digital_pane

0x95a0,	// (0x00023eb8) link_highlight_primary_pane

0x95a9,	// (0x00023ec1) link_highlight_primary_small_pane

0x95b1,	// (0x00023ec9) link_highlight_secondary_pane

0x95b9,	// (0x00023ed1) link_highlight_title_pane

0x9598,	// (0x00023eb0) copy_highlight_digital_pane

0x9598,	// (0x00023eb0) copy_highlight_primary_pane

0x95a9,	// (0x00023ec1) copy_highlight_primary_small_pane

0x95b1,	// (0x00023ec9) copy_highlight_secondary_pane

0x95b9,	// (0x00023ed1) copy_highlight_title_pane

0x95b1,	// (0x00023ec9) graphic_text_digital_pane

0xa57e,	// (0x00024e96) graphic_text_primary_pane

0xa587,	// (0x00024e9f) graphic_text_primary_small_pane

0x95a9,	// (0x00023ec1) graphic_text_secondary_pane

0x9598,	// (0x00023eb0) graphic_text_title_pane

0x95c1,	// (0x00023ed9) cursor_primary_pane_g1

0xa570,	// (0x00024e88) cursor_text_primary_t1

0xa558,	// (0x00024e70) cursor_primary_small_pane_g1

0xa562,	// (0x00024e7a) cursor_text_primary_small_t1

0xa540,	// (0x00024e58) cursor_primary_small_pane_g1_copy1

0xa54a,	// (0x00024e62) cursor_text_primary_small_t1_copy1

0xa528,	// (0x00024e40) cursor_text_title_t1

0xa536,	// (0x00024e4e) cursor_title_pane_g1

0x95c1,	// (0x00023ed9) cursor_digital_pane_g1

0x95cb,	// (0x00023ee3) cursor_text_digital_t1

0x95f0,	// (0x00023f08) link_highlight_primary_pane_g1

0xa4d1,	// (0x00024de9) link_highlight_primary_pane_t1

0x95d9,	// (0x00023ef1) link_highlight_primary_small_pane_g1

0x95e1,	// (0x00023ef9) link_highlight_primary_small_pane_t1

0x95f0,	// (0x00023f08) link_highlight_secondary_pane_g1

0x95f8,	// (0x00023f10) link_highlight_secondary_pane_t1

0xa445,	// (0x00024d5d) link_highlight_title_pane_g1

0xa44d,	// (0x00024d65) link_highlight_title_pane_t1

0xa42e,	// (0x00024d46) link_highlight_digital_pane_g1

0xa436,	// (0x00024d4e) link_highlight_digital_pane_t1

0xa306,	// (0x00024c1e) copy_highlight_primary_pane_g1

0xa30e,	// (0x00024c26) copy_highlight_primary_pane_t1

0xa2e0,	// (0x00024bf8) copy_highlight_primary_small_pane_g1

0xa2f7,	// (0x00024c0f) copy_highlight_primary_small_pane_t1

0x9607,	// (0x00023f1f) copy_highlight_secondary_pane_g1

0x960f,	// (0x00023f27) copy_highlight_secondary_pane_t1

0xa2e0,	// (0x00024bf8) copy_highlight_title_pane_g1

0xa2e8,	// (0x00024c00) copy_highlight_title_pane_t1

0xa306,	// (0x00024c1e) copy_highlight_digital_pane_g1

0xb596,	// (0x00025eae) copy_highlight_digital_pane_t1

0xb4ea,	// (0x00025e02) graphic_text_primary_pane_g1

0xb57a,	// (0x00025e92) graphic_text_primary_pane_t1

0xb588,	// (0x00025ea0) graphic_text_primary_pane_t2

0x0001,

0xf9c7,	// (0x0002a2df) graphic_text_primary_pane_t

0xb556,	// (0x00025e6e) graphic_text_primary_small_pane_g1

0xb55e,	// (0x00025e76) graphic_text_primary_small_pane_t1

0xb56c,	// (0x00025e84) graphic_text_primary_small_pane_t2

0x0001,

0xf9c2,	// (0x0002a2da) graphic_text_primary_small_pane_t

0xb532,	// (0x00025e4a) graphic_text_secondary_pane_g1

0xb53a,	// (0x00025e52) graphic_text_secondary_pane_t1

0xb548,	// (0x00025e60) graphic_text_secondary_pane_t2

0x0001,

0xf9bd,	// (0x0002a2d5) graphic_text_secondary_pane_t

0xb50e,	// (0x00025e26) graphic_text_title_pane_g1

0xb516,	// (0x00025e2e) graphic_text_title_pane_t1

0xb524,	// (0x00025e3c) graphic_text_title_pane_t2

0x0001,

0xf9b8,	// (0x0002a2d0) graphic_text_title_pane_t

0xb4ea,	// (0x00025e02) graphic_text_digital_pane_g1

0xb4f2,	// (0x00025e0a) graphic_text_digital_pane_t1

0xb500,	// (0x00025e18) graphic_text_digital_pane_t2

0x0001,

0xf9b3,	// (0x0002a2cb) graphic_text_digital_pane_t

0x7f68,	// (0x00022880) navi_icon_pane_srt_ParamLimits

0x7f68,	// (0x00022880) navi_icon_pane_srt

0x7e88,	// (0x000227a0) navi_midp_pane_srt

0x7e88,	// (0x000227a0) navi_navi_pane_srt

0x7f68,	// (0x00022880) navi_text_pane_srt_ParamLimits

0x7f68,	// (0x00022880) navi_text_pane_srt

0xb4b5,	// (0x00025dcd) navi_navi_icon_text_pane_srt

0xb4bd,	// (0x00025dd5) navi_navi_pane_srt_g1_ParamLimits

0xb4bd,	// (0x00025dd5) navi_navi_pane_srt_g1

0xb4cf,	// (0x00025de7) navi_navi_pane_srt_g2_ParamLimits

0xb4cf,	// (0x00025de7) navi_navi_pane_srt_g2

0x0001,

0xf9ae,	// (0x0002a2c6) navi_navi_pane_srt_g_ParamLimits

0xf9ae,	// (0x0002a2c6) navi_navi_pane_srt_g

0xb4e1,	// (0x00025df9) navi_navi_tabs_pane_srt

0xb4b5,	// (0x00025dcd) navi_navi_text_pane_srt

0xb4b5,	// (0x00025dcd) navi_navi_volume_pane_srt

0xb4a6,	// (0x00025dbe) navi_navi_text_pane_srt_t1

0x6eea,	// (0x00021802) navi_navi_volume_pane_srt_g1

0x6ef2,	// (0x0002180a) volume_small_pane_srt_ParamLimits

0x6ef2,	// (0x0002180a) volume_small_pane_srt

0x6345,	// (0x00020c5d) volume_small_pane_srt_g1_ParamLimits

0x6345,	// (0x00020c5d) volume_small_pane_srt_g1

0x6355,	// (0x00020c6d) volume_small_pane_srt_g2_ParamLimits

0x6355,	// (0x00020c6d) volume_small_pane_srt_g2

0x6366,	// (0x00020c7e) volume_small_pane_srt_g3_ParamLimits

0x6366,	// (0x00020c7e) volume_small_pane_srt_g3

0x6377,	// (0x00020c8f) volume_small_pane_srt_g4_ParamLimits

0x6377,	// (0x00020c8f) volume_small_pane_srt_g4

0x6388,	// (0x00020ca0) volume_small_pane_srt_g5_ParamLimits

0x6388,	// (0x00020ca0) volume_small_pane_srt_g5

0x6399,	// (0x00020cb1) volume_small_pane_srt_g6_ParamLimits

0x6399,	// (0x00020cb1) volume_small_pane_srt_g6

0x63aa,	// (0x00020cc2) volume_small_pane_srt_g7_ParamLimits

0x63aa,	// (0x00020cc2) volume_small_pane_srt_g7

0x63bb,	// (0x00020cd3) volume_small_pane_srt_g8_ParamLimits

0x63bb,	// (0x00020cd3) volume_small_pane_srt_g8

0x63cc,	// (0x00020ce4) volume_small_pane_srt_g9_ParamLimits

0x63cc,	// (0x00020ce4) volume_small_pane_srt_g9

0x63dd,	// (0x00020cf5) volume_small_pane_srt_g10_ParamLimits

0x63dd,	// (0x00020cf5) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0002a075) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0002a075) volume_small_pane_srt_g

0x8342,	// (0x00022c5a) query_popup_data_pane_cp2

0xb48c,	// (0x00025da4) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb48c,	// (0x00025da4) navi_navi_icon_text_pane_srt_t1

0xa57e,	// (0x00024e96) navi_tabs_2_long_pane_srt

0xa57e,	// (0x00024e96) navi_tabs_2_pane_srt

0xa57e,	// (0x00024e96) navi_tabs_3_long_pane_srt

0xa57e,	// (0x00024e96) navi_tabs_3_pane_srt

0xa57e,	// (0x00024e96) navi_tabs_4_pane_srt

0x6eca,	// (0x000217e2) tabs_2_active_pane_srt_ParamLimits

0x6eca,	// (0x000217e2) tabs_2_active_pane_srt

0x6eda,	// (0x000217f2) tabs_2_passive_pane_srt_ParamLimits

0x6eda,	// (0x000217f2) tabs_2_passive_pane_srt

0x97b4,	// (0x000240cc) bg_passive_tab_pane_cp1_srt_ParamLimits

0x97b4,	// (0x000240cc) bg_passive_tab_pane_cp1_srt

0xb458,	// (0x00025d70) bg_passive_tab_pane_g1_cp1_srt

0x90ac,	// (0x000239c4) bg_passive_tab_pane_g2_cp1_srt

0xb461,	// (0x00025d79) bg_passive_tab_pane_g3_cp1_srt

0x7f68,	// (0x00022880) bg_active_tab_pane_cp1_srt_ParamLimits

0x7f68,	// (0x00022880) bg_active_tab_pane_cp1_srt

0xb46a,	// (0x00025d82) tabs_2_active_pane_srt_g1

0xb472,	// (0x00025d8a) tabs_2_active_pane_srt_t1_ParamLimits

0xb472,	// (0x00025d8a) tabs_2_active_pane_srt_t1

0xb458,	// (0x00025d70) bg_active_tab_pane_g1_cp1_srt

0x90ac,	// (0x000239c4) bg_active_tab_pane_g2_cp1_srt

0xb461,	// (0x00025d79) bg_active_tab_pane_g3_cp1_srt

0x6e97,	// (0x000217af) tabs_3_active_pane_srt_ParamLimits

0x6e97,	// (0x000217af) tabs_3_active_pane_srt

0x6ea8,	// (0x000217c0) tabs_3_passive_pane_cp_srt_ParamLimits

0x6ea8,	// (0x000217c0) tabs_3_passive_pane_cp_srt

0x6eb9,	// (0x000217d1) tabs_3_passive_pane_srt_ParamLimits

0x6eb9,	// (0x000217d1) tabs_3_passive_pane_srt

0x97b4,	// (0x000240cc) bg_passive_tab_pane_cp2_srt_ParamLimits

0x97b4,	// (0x000240cc) bg_passive_tab_pane_cp2_srt

0x961e,	// (0x00023f36) bg_passive_tab_pane_g1_cp2_srt

0x90ac,	// (0x000239c4) bg_passive_tab_pane_g2_cp2_srt

0x9627,	// (0x00023f3f) bg_passive_tab_pane_g3_cp2_srt

0x7f68,	// (0x00022880) bg_active_tab_pane_cp2_srt_ParamLimits

0x7f68,	// (0x00022880) bg_active_tab_pane_cp2_srt

0xb43e,	// (0x00025d56) tabs_3_active_pane_srt_g1

0xb446,	// (0x00025d5e) tabs_3_active_pane_srt_t1_ParamLimits

0xb446,	// (0x00025d5e) tabs_3_active_pane_srt_t1

0x961e,	// (0x00023f36) bg_active_tab_pane_g1_cp2_srt

0x90ac,	// (0x000239c4) bg_active_tab_pane_g2_cp2_srt

0x9627,	// (0x00023f3f) bg_active_tab_pane_g3_cp2_srt

0x6e4f,	// (0x00021767) tabs_4_active_pane_srt_ParamLimits

0x6e4f,	// (0x00021767) tabs_4_active_pane_srt

0x6e61,	// (0x00021779) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6e61,	// (0x00021779) tabs_4_passive_pane_cp2_srt

0x654c,	// (0x00020e64) aid_size_cell_toolbar

0x89b8,	// (0x000232d0) main_idle_act_pane_ParamLimits

0x66ed,	// (0x00021005) popup_large_graphic_colour_window_ParamLimits

0x6a54,	// (0x0002136c) popup_toolbar_window_ParamLimits

0x6a54,	// (0x0002136c) popup_toolbar_window

0xb251,	// (0x00025b69) list_single_graphic_2heading_pane_ParamLimits

0xb251,	// (0x00025b69) list_single_graphic_2heading_pane

0x8b74,	// (0x0002348c) aid_size_cell_apps_grid_lsc_pane

0x8b86,	// (0x0002349e) aid_size_cell_apps_grid_prt_pane

0x97b4,	// (0x000240cc) bg_wml_button_pane_cp1_ParamLimits

0x97b4,	// (0x000240cc) bg_wml_button_pane_cp1

0x9f6b,	// (0x00024883) form_midp_field_text_pane_t1_ParamLimits

0x9d32,	// (0x0002464a) input_focus_pane_cp050_ParamLimits

0x9f9f,	// (0x000248b7) list_midp_form_text_pane_ParamLimits

0x9f48,	// (0x00024860) input_focus_pane_cp051_ParamLimits

0x9f5c,	// (0x00024874) list_midp_choice_pane_ParamLimits

0x9deb,	// (0x00024703) list_single_2graphic_pane_cp3_ParamLimits

0x9deb,	// (0x00024703) list_single_2graphic_pane_cp3

0x9e0c,	// (0x00024724) list_single_midp_graphic_pane_ParamLimits

0x9e0c,	// (0x00024724) list_single_midp_graphic_pane

0x5144,	// (0x0001fa5c) list_single_graphic_2heading_pane_g1_ParamLimits

0x5144,	// (0x0001fa5c) list_single_graphic_2heading_pane_g1

0x5150,	// (0x0001fa68) list_single_graphic_2heading_pane_g4_ParamLimits

0x5150,	// (0x0001fa68) list_single_graphic_2heading_pane_g4

0x515c,	// (0x0001fa74) list_single_graphic_2heading_pane_g5_ParamLimits

0x515c,	// (0x0001fa74) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0002a0c8) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0002a0c8) list_single_graphic_2heading_pane_g

0x5168,	// (0x0001fa80) list_single_graphic_2heading_pane_t1_ParamLimits

0x5168,	// (0x0001fa80) list_single_graphic_2heading_pane_t1

0x517c,	// (0x0001fa94) list_single_graphic_2heading_pane_t2_ParamLimits

0x517c,	// (0x0001fa94) list_single_graphic_2heading_pane_t2

0x5196,	// (0x0001faae) list_single_graphic_2heading_pane_t3_ParamLimits

0x5196,	// (0x0001faae) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0002a0cf) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0002a0cf) list_single_graphic_2heading_pane_t

0x9bfc,	// (0x00024514) bg_popup_sub_pane_cp2

0x9c26,	// (0x0002453e) grid_toobar_pane

0x6b01,	// (0x00021419) cell_toolbar_pane_ParamLimits

0x6b01,	// (0x00021419) cell_toolbar_pane

0x9c62,	// (0x0002457a) cell_toolbar_pane_g1_ParamLimits

0x9c62,	// (0x0002457a) cell_toolbar_pane_g1

0x9c76,	// (0x0002458e) cell_toolbar_pane_g2_ParamLimits

0x9c76,	// (0x0002458e) cell_toolbar_pane_g2

0x0001,

0xf7be,	// (0x0002a0d6) cell_toolbar_pane_g_ParamLimits

0xf7be,	// (0x0002a0d6) cell_toolbar_pane_g

0x9c98,	// (0x000245b0) grid_highlight_pane_cp2_ParamLimits

0x9c98,	// (0x000245b0) grid_highlight_pane_cp2

0x9cb2,	// (0x000245ca) toolbar_button_pane

0x9cbe,	// (0x000245d6) toolbar_button_pane_g1

0x9cc6,	// (0x000245de) toolbar_button_pane_g2

0x9cce,	// (0x000245e6) toolbar_button_pane_g3

0x9cd6,	// (0x000245ee) toolbar_button_pane_g4

0x9cde,	// (0x000245f6) toolbar_button_pane_g5

0x9ce6,	// (0x000245fe) toolbar_button_pane_g6

0x9cee,	// (0x00024606) toolbar_button_pane_g7

0x9cf6,	// (0x0002460e) toolbar_button_pane_g8

0x9cfe,	// (0x00024616) toolbar_button_pane_g9

0x0009,

0xf7c3,	// (0x0002a0db) toolbar_button_pane_g

0x6b39,	// (0x00021451) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6b39,	// (0x00021451) list_single_2graphic_pane_g1_cp3

0x6b45,	// (0x0002145d) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6b45,	// (0x0002145d) list_single_2graphic_pane_g2_cp3

0x6b56,	// (0x0002146e) list_single_2graphic_pane_g3_cp3

0x6b5e,	// (0x00021476) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6b5e,	// (0x00021476) list_single_2graphic_pane_g4_cp3

0x6b6a,	// (0x00021482) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6b6a,	// (0x00021482) list_single_2graphic_pane_t1_cp3

0x9e90,	// (0x000247a8) list_single_midp_graphic_pane_g2_ParamLimits

0x9e90,	// (0x000247a8) list_single_midp_graphic_pane_g2

0x6554,	// (0x00020e6c) aid_zoom_text_primary

0x5118,	// (0x0001fa30) aid_zoom_text_secondary

0x96d8,	// (0x00023ff0) status_small_pane_g7_ParamLimits

0x96d8,	// (0x00023ff0) status_small_pane_g7

0x96fb,	// (0x00024013) status_small_pane_t1_ParamLimits

0x7e9f,	// (0x000227b7) title_pane_g2

0x0003,

0xf54e,	// (0x00029e66) title_pane_g

0x83e6,	// (0x00022cfe) aid_size_cell_colour_1_pane_ParamLimits

0x83e6,	// (0x00022cfe) aid_size_cell_colour_1_pane

0x83fa,	// (0x00022d12) aid_size_cell_colour_2_pane_ParamLimits

0x83fa,	// (0x00022d12) aid_size_cell_colour_2_pane

0x840e,	// (0x00022d26) aid_size_cell_colour_3_pane_ParamLimits

0x840e,	// (0x00022d26) aid_size_cell_colour_3_pane

0x8422,	// (0x00022d3a) aid_size_cell_colour_4_pane_ParamLimits

0x8422,	// (0x00022d3a) aid_size_cell_colour_4_pane

0x5fa2,	// (0x000208ba) title_pane_stacon_g1_ParamLimits

0x5fa2,	// (0x000208ba) title_pane_stacon_g1

0xa365,	// (0x00024c7d) popup_note_wait_window_g3_ParamLimits

0xa365,	// (0x00024c7d) popup_note_wait_window_g3

0xa3db,	// (0x00024cf3) popup_note_wait_window_t5_ParamLimits

0xa3db,	// (0x00024cf3) popup_note_wait_window_t5

0x7e88,	// (0x000227a0) main_feb_china_hwr_fs_writing_pane

0x65d0,	// (0x00020ee8) popup_feb_china_hwr_fs_window_ParamLimits

0x65d0,	// (0x00020ee8) popup_feb_china_hwr_fs_window

0x6b86,	// (0x0002149e) aid_size_cell_hwr_fs_ParamLimits

0x6b86,	// (0x0002149e) aid_size_cell_hwr_fs

0x9d32,	// (0x0002464a) bg_popup_sub_pane_cp3_ParamLimits

0x9d32,	// (0x0002464a) bg_popup_sub_pane_cp3

0x6b9b,	// (0x000214b3) grid_hwr_fs_pane_ParamLimits

0x6b9b,	// (0x000214b3) grid_hwr_fs_pane

0x6bb3,	// (0x000214cb) linegrid_hwr_fs_pane_ParamLimits

0x6bb3,	// (0x000214cb) linegrid_hwr_fs_pane

0x6bc3,	// (0x000214db) cell_hwr_fs_pane_ParamLimits

0x6bc3,	// (0x000214db) cell_hwr_fs_pane

0x9d3e,	// (0x00024656) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d3e,	// (0x00024656) linegrid_hwr_fs_pane_g1

0x9d4a,	// (0x00024662) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d4a,	// (0x00024662) linegrid_hwr_fs_pane_g2

0x9d5c,	// (0x00024674) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d5c,	// (0x00024674) linegrid_hwr_fs_pane_g3

0x6be5,	// (0x000214fd) linegrid_hwr_fs_pane_g4_ParamLimits

0x6be5,	// (0x000214fd) linegrid_hwr_fs_pane_g4

0x6bff,	// (0x00021517) linegrid_hwr_fs_pane_g5_ParamLimits

0x6bff,	// (0x00021517) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ee,	// (0x0002a106) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ee,	// (0x0002a106) linegrid_hwr_fs_pane_g

0x9d68,	// (0x00024680) cell_hwr_fs_pane_g1_ParamLimits

0x9d68,	// (0x00024680) cell_hwr_fs_pane_g1

0x9b33,	// (0x0002444b) cell_hwr_fs_pane_g2_ParamLimits

0x9b33,	// (0x0002444b) cell_hwr_fs_pane_g2

0x9d7e,	// (0x00024696) cell_hwr_fs_pane_g3_ParamLimits

0x9d7e,	// (0x00024696) cell_hwr_fs_pane_g3

0x9d8b,	// (0x000246a3) cell_hwr_fs_pane_g4_ParamLimits

0x9d8b,	// (0x000246a3) cell_hwr_fs_pane_g4

0x0003,

0xf7f9,	// (0x0002a111) cell_hwr_fs_pane_g_ParamLimits

0xf7f9,	// (0x0002a111) cell_hwr_fs_pane_g

0x6c15,	// (0x0002152d) cell_hwr_fs_pane_t1

0x7e88,	// (0x000227a0) grid_highlight_pane_cp6

0x7e88,	// (0x000227a0) main_idle_act2_pane

0x892b,	// (0x00023243) aid_inside_area_popup_secondary

0xaa12,	// (0x0002532a) aid_inside_area_window_primary_ParamLimits

0xaa12,	// (0x0002532a) aid_inside_area_window_primary

0xb5a5,	// (0x00025ebd) ai2_news_ticker_pane

0xb5ad,	// (0x00025ec5) aid_size_cell_ai1_link_ParamLimits

0xb5ad,	// (0x00025ec5) aid_size_cell_ai1_link

0xb5c7,	// (0x00025edf) popup_ai2_data_window_ParamLimits

0xb5c7,	// (0x00025edf) popup_ai2_data_window

0xb5dd,	// (0x00025ef5) popup_ai2_link_window_ParamLimits

0xb5dd,	// (0x00025ef5) popup_ai2_link_window

0x9d32,	// (0x0002464a) bg_popup_sub_pane_cp4_ParamLimits

0x9d32,	// (0x0002464a) bg_popup_sub_pane_cp4

0xb5f1,	// (0x00025f09) grid_ai2_link_pane_ParamLimits

0xb5f1,	// (0x00025f09) grid_ai2_link_pane

0xb608,	// (0x00025f20) popup_ai2_link_window_g1_ParamLimits

0xb608,	// (0x00025f20) popup_ai2_link_window_g1

0xb614,	// (0x00025f2c) popup_ai2_link_window_g2_ParamLimits

0xb614,	// (0x00025f2c) popup_ai2_link_window_g2

0x0001,

0xf9cc,	// (0x0002a2e4) popup_ai2_link_window_g_ParamLimits

0xf9cc,	// (0x0002a2e4) popup_ai2_link_window_g

0xb623,	// (0x00025f3b) ai2_mp_button_pane

0xb62b,	// (0x00025f43) ai2_mp_volume_pane

0x9f48,	// (0x00024860) bg_popup_sub_pane_cp5_ParamLimits

0x9f48,	// (0x00024860) bg_popup_sub_pane_cp5

0xb633,	// (0x00025f4b) heading_ai2_gene_pane_ParamLimits

0xb633,	// (0x00025f4b) heading_ai2_gene_pane

0xb63f,	// (0x00025f57) list_ai2_gene_pane_ParamLimits

0xb63f,	// (0x00025f57) list_ai2_gene_pane

0xb687,	// (0x00025f9f) cell_ai2_link_pane_ParamLimits

0xb687,	// (0x00025f9f) cell_ai2_link_pane

0xb69d,	// (0x00025fb5) cell_ai2_link_pane_g1

0x7e88,	// (0x000227a0) grid_highlight_pane_cp7

0x6f07,	// (0x0002181f) ai2_mp_volume_pane_g1

0xb76d,	// (0x00026085) ai2_mp_volume_pane_g2

0xb6e2,	// (0x00025ffa) list_ai2_gene_pane_t1

0xb775,	// (0x0002608d) ai2_mp_volume_pane_g3

0x0002,

0xf9e5,	// (0x0002a2fd) ai2_mp_volume_pane_g

0x6f0f,	// (0x00021827) volume_small_pane_cp3

0xb77d,	// (0x00026095) aid_size_cell_ai2_button

0xb785,	// (0x0002609d) grid_ai2_button_pane

0xb78e,	// (0x000260a6) cell_ai2_button_pane_ParamLimits

0xb78e,	// (0x000260a6) cell_ai2_button_pane

0x7e7e,	// (0x00022796) cell_ai2_button_pane_g1

0x7e88,	// (0x000227a0) grid_highlight_pane_cp8

0xb72d,	// (0x00026045) ai2_gene_pane_t1_ParamLimits

0xb72d,	// (0x00026045) ai2_gene_pane_t1

0x6542,	// (0x00020e5a) aid_height_parent_landscape

0xb088,	// (0x000259a0) aid_height_set_list

0xb099,	// (0x000259b1) aid_size_parent

0xb3c8,	// (0x00025ce0) aid_size_cell_graphic_pane_ParamLimits

0xb64f,	// (0x00025f67) popup_ai2_data_window_g1_ParamLimits

0xb64f,	// (0x00025f67) popup_ai2_data_window_g1

0xb65b,	// (0x00025f73) ai2_news_ticker_pane_g1

0xb663,	// (0x00025f7b) ai2_news_ticker_pane_g2

0x0001,

0xf9d1,	// (0x0002a2e9) ai2_news_ticker_pane_g

0xb66b,	// (0x00025f83) ai2_news_ticker_pane_t1

0xb679,	// (0x00025f91) ai2_news_ticker_pane_t2

0x0001,

0xf9d6,	// (0x0002a2ee) ai2_news_ticker_pane_t

0xb6a6,	// (0x00025fbe) heading_ai2_gene_pane_g1

0xb6ae,	// (0x00025fc6) heading_ai2_gene_pane_t1_ParamLimits

0xb6ae,	// (0x00025fc6) heading_ai2_gene_pane_t1

0xb6c3,	// (0x00025fdb) list_highlight_pane_cp6

0xb6cb,	// (0x00025fe3) ai2_gene_pane_ParamLimits

0xb6cb,	// (0x00025fe3) ai2_gene_pane

0xb6f0,	// (0x00026008) list_ai2_gene_pane_t2

0x0001,

0xf9db,	// (0x0002a2f3) list_ai2_gene_pane_t

0xb6fe,	// (0x00026016) list_highlight_pane_cp8_ParamLimits

0xb6fe,	// (0x00026016) list_highlight_pane_cp8

0xb70f,	// (0x00026027) ai2_gene_pane_g1_ParamLimits

0xb70f,	// (0x00026027) ai2_gene_pane_g1

0xb721,	// (0x00026039) ai2_gene_pane_g2_ParamLimits

0xb721,	// (0x00026039) ai2_gene_pane_g2

0x0001,

0xf9e0,	// (0x0002a2f8) ai2_gene_pane_g_ParamLimits

0xf9e0,	// (0x0002a2f8) ai2_gene_pane_g

0x876d,	// (0x00023085) scroll_pane_cp12

0x64ff,	// (0x00020e17) control_pane_t3_ParamLimits

0x64ff,	// (0x00020e17) control_pane_t3

0x96ec,	// (0x00024004) status_small_pane_g8_ParamLimits

0x96ec,	// (0x00024004) status_small_pane_g8

0x66b6,	// (0x00020fce) popup_find_window_ParamLimits

0x68cb,	// (0x000211e3) popup_note_image_window_ParamLimits

0x5144,	// (0x0001fa5c) list_double2_graphic_pane_vc_g1_ParamLimits

0x5144,	// (0x0001fa5c) list_double2_graphic_pane_vc_g1

0x5150,	// (0x0001fa68) list_double2_graphic_pane_vc_g2_ParamLimits

0x5150,	// (0x0001fa68) list_double2_graphic_pane_vc_g2

0x515c,	// (0x0001fa74) list_double2_graphic_pane_vc_g3_ParamLimits

0x515c,	// (0x0001fa74) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002a0c8) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002a0c8) list_double2_graphic_pane_vc_g

0x51ae,	// (0x0001fac6) list_double2_graphic_pane_vc_t1_ParamLimits

0x51ae,	// (0x0001fac6) list_double2_graphic_pane_vc_t1

0x5150,	// (0x0001fa68) list_single_heading_pane_vc_g1_ParamLimits

0x5150,	// (0x0001fa68) list_single_heading_pane_vc_g1

0x515c,	// (0x0001fa74) list_single_heading_pane_vc_g2_ParamLimits

0x515c,	// (0x0001fa74) list_single_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a0f0) list_single_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a0f0) list_single_heading_pane_vc_g

0x51c4,	// (0x0001fadc) list_single_heading_pane_vc_t1_ParamLimits

0x51c4,	// (0x0001fadc) list_single_heading_pane_vc_t1

0x51da,	// (0x0001faf2) list_single_heading_pane_vc_t2_ParamLimits

0x51da,	// (0x0001faf2) list_single_heading_pane_vc_t2

0x0001,

0xf7dd,	// (0x0002a0f5) list_single_heading_pane_vc_t_ParamLimits

0xf7dd,	// (0x0002a0f5) list_single_heading_pane_vc_t

0x51ec,	// (0x0001fb04) list_setting_number_pane_vc_g1_ParamLimits

0x51ec,	// (0x0001fb04) list_setting_number_pane_vc_g1

0x51f8,	// (0x0001fb10) list_setting_number_pane_vc_g2_ParamLimits

0x51f8,	// (0x0001fb10) list_setting_number_pane_vc_g2

0x0001,

0xf7e2,	// (0x0002a0fa) list_setting_number_pane_vc_g_ParamLimits

0xf7e2,	// (0x0002a0fa) list_setting_number_pane_vc_g

0x5204,	// (0x0001fb1c) list_setting_number_pane_vc_t1_ParamLimits

0x5204,	// (0x0001fb1c) list_setting_number_pane_vc_t1

0x5218,	// (0x0001fb30) list_setting_number_pane_vc_t2_ParamLimits

0x5218,	// (0x0001fb30) list_setting_number_pane_vc_t2

0x5234,	// (0x0001fb4c) list_setting_number_pane_vc_t3_ParamLimits

0x5234,	// (0x0001fb4c) list_setting_number_pane_vc_t3

0x0002,

0xf7e7,	// (0x0002a0ff) list_setting_number_pane_vc_t_ParamLimits

0xf7e7,	// (0x0002a0ff) list_setting_number_pane_vc_t

0x5252,	// (0x0001fb6a) set_value_pane_vc_ParamLimits

0x5252,	// (0x0001fb6a) set_value_pane_vc

0xb251,	// (0x00025b69) list_double2_graphic_pane_vc_ParamLimits

0xb251,	// (0x00025b69) list_double2_graphic_pane_vc

0xb251,	// (0x00025b69) list_double2_large_graphic_pane_vc_ParamLimits

0xb251,	// (0x00025b69) list_double2_large_graphic_pane_vc

0xb251,	// (0x00025b69) list_double2_pane_vc_ParamLimits

0xb251,	// (0x00025b69) list_double2_pane_vc

0xb251,	// (0x00025b69) list_double_graphic_heading_pane_vc_ParamLimits

0xb251,	// (0x00025b69) list_double_graphic_heading_pane_vc

0xb251,	// (0x00025b69) list_double_graphic_pane_vc_ParamLimits

0xb251,	// (0x00025b69) list_double_graphic_pane_vc

0xb251,	// (0x00025b69) list_double_heading_pane_vc_ParamLimits

0xb251,	// (0x00025b69) list_double_heading_pane_vc

0xb263,	// (0x00025b7b) list_double_large_graphic_pane_vc_ParamLimits

0xb263,	// (0x00025b7b) list_double_large_graphic_pane_vc

0xb251,	// (0x00025b69) list_double_number_pane_vc_ParamLimits

0xb251,	// (0x00025b69) list_double_number_pane_vc

0xb251,	// (0x00025b69) list_double_pane_vc_ParamLimits

0xb251,	// (0x00025b69) list_double_pane_vc

0xb251,	// (0x00025b69) list_double_time_pane_vc_ParamLimits

0xb251,	// (0x00025b69) list_double_time_pane_vc

0xb251,	// (0x00025b69) list_setting_number_pane_vc_ParamLimits

0xb251,	// (0x00025b69) list_setting_number_pane_vc

0xb251,	// (0x00025b69) list_setting_pane_vc_ParamLimits

0xb251,	// (0x00025b69) list_setting_pane_vc

0xb251,	// (0x00025b69) list_single_graphic_heading_pane_vc_ParamLimits

0xb251,	// (0x00025b69) list_single_graphic_heading_pane_vc

0xb251,	// (0x00025b69) list_single_heading_pane_vc_ParamLimits

0xb251,	// (0x00025b69) list_single_heading_pane_vc

0x5328,	// (0x0001fc40) list_single_number_heading_pane_vc_ParamLimits

0x5328,	// (0x0001fc40) list_single_number_heading_pane_vc

0x5144,	// (0x0001fa5c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5144,	// (0x0001fa5c) list_double_graphic_heading_pane_vc_g1

0x5150,	// (0x0001fa68) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5150,	// (0x0001fa68) list_double_graphic_heading_pane_vc_g2

0x515c,	// (0x0001fa74) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x515c,	// (0x0001fa74) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002a0c8) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002a0c8) list_double_graphic_heading_pane_vc_g

0x53a9,	// (0x0001fcc1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x53a9,	// (0x0001fcc1) list_double_graphic_heading_pane_vc_t1

0x53c5,	// (0x0001fcdd) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x53c5,	// (0x0001fcdd) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ec,	// (0x0002a304) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ec,	// (0x0002a304) list_double_graphic_heading_pane_vc_t

0x51ec,	// (0x0001fb04) list_setting_pane_vc_g1_ParamLimits

0x51ec,	// (0x0001fb04) list_setting_pane_vc_g1

0x51f8,	// (0x0001fb10) list_setting_pane_vc_g2_ParamLimits

0x51f8,	// (0x0001fb10) list_setting_pane_vc_g2

0x0001,

0xf7e2,	// (0x0002a0fa) list_setting_pane_vc_g_ParamLimits

0xf7e2,	// (0x0002a0fa) list_setting_pane_vc_g

0x53e3,	// (0x0001fcfb) list_setting_pane_vc_t1_ParamLimits

0x53e3,	// (0x0001fcfb) list_setting_pane_vc_t1

0x53ff,	// (0x0001fd17) list_setting_pane_vc_t2_ParamLimits

0x53ff,	// (0x0001fd17) list_setting_pane_vc_t2

0x0001,

0xfa1a,	// (0x0002a332) list_setting_pane_vc_t_ParamLimits

0xfa1a,	// (0x0002a332) list_setting_pane_vc_t

0x5252,	// (0x0001fb6a) set_value_pane_cp_vc_ParamLimits

0x5252,	// (0x0001fb6a) set_value_pane_cp_vc

0x5150,	// (0x0001fa68) list_single_number_heading_pane_vc_g1_ParamLimits

0x5150,	// (0x0001fa68) list_single_number_heading_pane_vc_g1

0x515c,	// (0x0001fa74) list_single_number_heading_pane_vc_g2_ParamLimits

0x515c,	// (0x0001fa74) list_single_number_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a0f0) list_single_number_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a0f0) list_single_number_heading_pane_vc_g

0x541b,	// (0x0001fd33) list_single_number_heading_pane_vc_t1_ParamLimits

0x541b,	// (0x0001fd33) list_single_number_heading_pane_vc_t1

0x5431,	// (0x0001fd49) list_single_number_heading_pane_vc_t2_ParamLimits

0x5431,	// (0x0001fd49) list_single_number_heading_pane_vc_t2

0x5443,	// (0x0001fd5b) list_single_number_heading_pane_vc_t3_ParamLimits

0x5443,	// (0x0001fd5b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1f,	// (0x0002a337) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1f,	// (0x0002a337) list_single_number_heading_pane_vc_t

0x5144,	// (0x0001fa5c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5144,	// (0x0001fa5c) list_single_graphic_heading_pane_vc_g1

0x5150,	// (0x0001fa68) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5150,	// (0x0001fa68) list_single_graphic_heading_pane_vc_g4

0x515c,	// (0x0001fa74) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x515c,	// (0x0001fa74) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b0,	// (0x0002a0c8) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002a0c8) list_single_graphic_heading_pane_vc_g

0x5455,	// (0x0001fd6d) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5455,	// (0x0001fd6d) list_single_graphic_heading_pane_vc_t1

0x546b,	// (0x0001fd83) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x546b,	// (0x0001fd83) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa26,	// (0x0002a33e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0002a33e) list_single_graphic_heading_pane_vc_t

0x5150,	// (0x0001fa68) list_double2_pane_vc_g1_ParamLimits

0x5150,	// (0x0001fa68) list_double2_pane_vc_g1

0x515c,	// (0x0001fa74) list_double2_pane_vc_g2_ParamLimits

0x515c,	// (0x0001fa74) list_double2_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a0f0) list_double2_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a0f0) list_double2_pane_vc_g

0x547d,	// (0x0001fd95) list_double2_pane_vc_t1_ParamLimits

0x547d,	// (0x0001fd95) list_double2_pane_vc_t1

0x5493,	// (0x0001fdab) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5493,	// (0x0001fdab) list_double2_large_graphic_pane_vc_g1

0x5150,	// (0x0001fa68) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5150,	// (0x0001fa68) list_double2_large_graphic_pane_vc_g2

0x515c,	// (0x0001fa74) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x515c,	// (0x0001fa74) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa2b,	// (0x0002a343) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa2b,	// (0x0002a343) list_double2_large_graphic_pane_vc_g

0x549f,	// (0x0001fdb7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x549f,	// (0x0001fdb7) list_double2_large_graphic_pane_vc_t1

0x54b5,	// (0x0001fdcd) list_double_time_pane_vc_g1_ParamLimits

0x54b5,	// (0x0001fdcd) list_double_time_pane_vc_g1

0x54c1,	// (0x0001fdd9) list_double_time_pane_vc_g2_ParamLimits

0x54c1,	// (0x0001fdd9) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x0002a34a) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x0002a34a) list_double_time_pane_vc_g

0x54cd,	// (0x0001fde5) list_double_time_pane_vc_t1_ParamLimits

0x54cd,	// (0x0001fde5) list_double_time_pane_vc_t1

0x54f1,	// (0x0001fe09) list_double_time_pane_vc_t2_ParamLimits

0x54f1,	// (0x0001fe09) list_double_time_pane_vc_t2

0x5540,	// (0x0001fe58) list_double_time_pane_vc_t3_ParamLimits

0x5540,	// (0x0001fe58) list_double_time_pane_vc_t3

0x5552,	// (0x0001fe6a) list_double_time_pane_vc_t4_ParamLimits

0x5552,	// (0x0001fe6a) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0002a34f) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0002a34f) list_double_time_pane_vc_t

0x5150,	// (0x0001fa68) list_double_pane_vc_g1_ParamLimits

0x5150,	// (0x0001fa68) list_double_pane_vc_g1

0x515c,	// (0x0001fa74) list_double_pane_vc_g2_ParamLimits

0x515c,	// (0x0001fa74) list_double_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a0f0) list_double_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a0f0) list_double_pane_vc_g

0x5566,	// (0x0001fe7e) list_double_pane_vc_t1_ParamLimits

0x5566,	// (0x0001fe7e) list_double_pane_vc_t1

0x557a,	// (0x0001fe92) list_double_pane_vc_t2_ParamLimits

0x557a,	// (0x0001fe92) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x0002a358) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x0002a358) list_double_pane_vc_t

0x5150,	// (0x0001fa68) list_double_number_pane_vc_g1_ParamLimits

0x5150,	// (0x0001fa68) list_double_number_pane_vc_g1

0x515c,	// (0x0001fa74) list_double_number_pane_vc_g2_ParamLimits

0x515c,	// (0x0001fa74) list_double_number_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a0f0) list_double_number_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a0f0) list_double_number_pane_vc_g

0x5592,	// (0x0001feaa) list_double_number_pane_vc_t1_ParamLimits

0x5592,	// (0x0001feaa) list_double_number_pane_vc_t1

0x55a4,	// (0x0001febc) list_double_number_pane_vc_t2_ParamLimits

0x55a4,	// (0x0001febc) list_double_number_pane_vc_t2

0x55b8,	// (0x0001fed0) list_double_number_pane_vc_t3_ParamLimits

0x55b8,	// (0x0001fed0) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x0002a35d) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x0002a35d) list_double_number_pane_vc_t

0x55d0,	// (0x0001fee8) list_double_large_graphic_pane_vc_g1_ParamLimits

0x55d0,	// (0x0001fee8) list_double_large_graphic_pane_vc_g1

0x55f2,	// (0x0001ff0a) list_double_large_graphic_pane_vc_g2_ParamLimits

0x55f2,	// (0x0001ff0a) list_double_large_graphic_pane_vc_g2

0x5606,	// (0x0001ff1e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5606,	// (0x0001ff1e) list_double_large_graphic_pane_vc_g3

0x5615,	// (0x0001ff2d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5615,	// (0x0001ff2d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x0002a364) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0002a364) list_double_large_graphic_pane_vc_g

0x5621,	// (0x0001ff39) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5621,	// (0x0001ff39) list_double_large_graphic_pane_vc_t1

0x563d,	// (0x0001ff55) list_double_large_graphic_pane_vc_t2_ParamLimits

0x563d,	// (0x0001ff55) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0002a36d) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0002a36d) list_double_large_graphic_pane_vc_t

0x5150,	// (0x0001fa68) list_double_heading_pane_vc_g1_ParamLimits

0x5150,	// (0x0001fa68) list_double_heading_pane_vc_g1

0x515c,	// (0x0001fa74) list_double_heading_pane_vc_g2_ParamLimits

0x515c,	// (0x0001fa74) list_double_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a0f0) list_double_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a0f0) list_double_heading_pane_vc_g

0x565f,	// (0x0001ff77) list_double_heading_pane_vc_t1_ParamLimits

0x565f,	// (0x0001ff77) list_double_heading_pane_vc_t1

0x5673,	// (0x0001ff8b) list_double_heading_pane_vc_t2_ParamLimits

0x5673,	// (0x0001ff8b) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x0002a372) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x0002a372) list_double_heading_pane_vc_t

0x568b,	// (0x0001ffa3) list_double_graphic_pane_vc_g1_ParamLimits

0x568b,	// (0x0001ffa3) list_double_graphic_pane_vc_g1

0x5697,	// (0x0001ffaf) list_double_graphic_pane_vc_g2_ParamLimits

0x5697,	// (0x0001ffaf) list_double_graphic_pane_vc_g2

0x5150,	// (0x0001fa68) list_double_graphic_pane_vc_g3_ParamLimits

0x5150,	// (0x0001fa68) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x0002a377) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0002a377) list_double_graphic_pane_vc_g

0x56b4,	// (0x0001ffcc) list_double_graphic_pane_vc_t1_ParamLimits

0x56b4,	// (0x0001ffcc) list_double_graphic_pane_vc_t1

0x56de,	// (0x0001fff6) list_double_graphic_pane_vc_t2_ParamLimits

0x56de,	// (0x0001fff6) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0002a380) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0002a380) list_double_graphic_pane_vc_t

0x5aff,	// (0x00020417) aid_size_cell_fastswap

0x5b07,	// (0x0002041f) aid_size_cell_touch_ParamLimits

0x5b07,	// (0x0002041f) aid_size_cell_touch

0x5d62,	// (0x0002067a) popup_fast_swap_wide_window_ParamLimits

0x5d62,	// (0x0002067a) popup_fast_swap_wide_window

0x5e76,	// (0x0002078e) touch_pane_ParamLimits

0x5e76,	// (0x0002078e) touch_pane

0x87c3,	// (0x000230db) button_value_adjust_pane_cp2

0x4e2b,	// (0x0001f743) button_value_adjust_pane_cp4

0x4e4b,	// (0x0001f763) form_field_data_pane_cp2

0x4e6a,	// (0x0001f782) form_field_data_wide_pane_cp2

0x8c41,	// (0x00023559) bg_scroll_pane_ParamLimits

0x6104,	// (0x00020a1c) scroll_handle_pane_ParamLimits

0x6118,	// (0x00020a30) scroll_sc2_down_pane_ParamLimits

0x6118,	// (0x00020a30) scroll_sc2_down_pane

0x8c72,	// (0x0002358a) scroll_sc2_up_pane_ParamLimits

0x8c72,	// (0x0002358a) scroll_sc2_up_pane

0xbe58,	// (0x00026770) grid_wheel_folder_pane_g1_ParamLimits

0xbe58,	// (0x00026770) grid_wheel_folder_pane_g1

0x62dd,	// (0x00020bf5) clock_nsta_pane_cp2_ParamLimits

0x62dd,	// (0x00020bf5) clock_nsta_pane_cp2

0x9472,	// (0x00023d8a) listscroll_midp_pane_ParamLimits

0x947e,	// (0x00023d96) midp_canvas_pane

0x9766,	// (0x0002407e) nsta_clock_indic_pane

0x979a,	// (0x000240b2) listscroll_form_pane_vc

0x97a2,	// (0x000240ba) listscroll_set_pane_vc_ParamLimits

0x97a2,	// (0x000240ba) listscroll_set_pane_vc

0x98a7,	// (0x000241bf) clock_nsta_pane

0x991c,	// (0x00024234) indicator_nsta_pane

0x9bfc,	// (0x00024514) bg_popup_sub_pane_cp2_ParamLimits

0x9c10,	// (0x00024528) find_pane_cp2_ParamLimits

0x9c10,	// (0x00024528) find_pane_cp2

0x9c26,	// (0x0002453e) grid_toobar_pane_ParamLimits

0x9d06,	// (0x0002461e) list_form_gen_pane_vc_ParamLimits

0x9d06,	// (0x0002461e) list_form_gen_pane_vc

0x9d1c,	// (0x00024634) scroll_pane_cp8_vc_ParamLimits

0x9d1c,	// (0x00024634) scroll_pane_cp8_vc

0x9d98,	// (0x000246b0) data_form_wide_pane_vc_ParamLimits

0x9d98,	// (0x000246b0) data_form_wide_pane_vc

0x9da4,	// (0x000246bc) form_field_data_wide_pane_vc_g1

0x9dac,	// (0x000246c4) form_field_data_wide_pane_vc_t1_ParamLimits

0x9dac,	// (0x000246c4) form_field_data_wide_pane_vc_t1

0x87d7,	// (0x000230ef) input_focus_pane_cp6_vc_ParamLimits

0x87d7,	// (0x000230ef) input_focus_pane_cp6_vc

0xa0d8,	// (0x000249f0) list_midp_pane_ParamLimits

0xa0e4,	// (0x000249fc) scroll_pane_cp16_ParamLimits

0xa0e4,	// (0x000249fc) scroll_pane_cp16

0xa13a,	// (0x00024a52) button_value_adjust_pane_ParamLimits

0xa13a,	// (0x00024a52) button_value_adjust_pane

0xb0ab,	// (0x000259c3) button_value_adjust_pane_cp6_ParamLimits

0xb0ab,	// (0x000259c3) button_value_adjust_pane_cp6

0xb1d5,	// (0x00025aed) settings_code_pane_cp_ParamLimits

0xb1d5,	// (0x00025aed) settings_code_pane_cp

0x7e7e,	// (0x00022796) cell_touch_pane_g1

0x7e7e,	// (0x00022796) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0002a01b) cell_touch_pane_g

0xb7a0,	// (0x000260b8) cell_touch_pane_cp_ParamLimits

0xb7a0,	// (0x000260b8) cell_touch_pane_cp

0xb7b0,	// (0x000260c8) cell_touch_pane_ParamLimits

0xb7b0,	// (0x000260c8) cell_touch_pane

0x7e7e,	// (0x00022796) scroll_sc2_down_pane_g1

0x7e7e,	// (0x00022796) scroll_sc2_up_pane_g1

0x7e88,	// (0x000227a0) bg_set_opt_pane_cp4_vc

0xb7c2,	// (0x000260da) list_set_graphic_pane_vc_g1_ParamLimits

0xb7c2,	// (0x000260da) list_set_graphic_pane_vc_g1

0xb7ce,	// (0x000260e6) list_set_graphic_pane_vc_g2_ParamLimits

0xb7ce,	// (0x000260e6) list_set_graphic_pane_vc_g2

0x0001,

0xf9f1,	// (0x0002a309) list_set_graphic_pane_vc_g_ParamLimits

0xf9f1,	// (0x0002a309) list_set_graphic_pane_vc_g

0xb7da,	// (0x000260f2) text_primary_small_cp13_vc_ParamLimits

0xb7da,	// (0x000260f2) text_primary_small_cp13_vc

0xb7f2,	// (0x0002610a) list_set_graphic_pane_vc_ParamLimits

0xb7f2,	// (0x0002610a) list_set_graphic_pane_vc

0x7e88,	// (0x000227a0) input_focus_pane_cp2_vc

0x7e7e,	// (0x00022796) setting_code_pane_vc_g1

0x7fb3,	// (0x000228cb) setting_code_pane_vc_t1

0xb804,	// (0x0002611c) set_text_pane_vc_t1_ParamLimits

0xb804,	// (0x0002611c) set_text_pane_vc_t1

0x7e88,	// (0x000227a0) input_focus_pane_cp1_vc

0xb820,	// (0x00026138) list_set_text_pane_vc

0x7e7e,	// (0x00022796) setting_text_pane_vc_g1

0x7e88,	// (0x000227a0) bg_set_opt_pane_cp2_vc

0x7faa,	// (0x000228c2) setting_slider_graphic_pane_vc_g1

0xb82a,	// (0x00026142) setting_slider_graphic_pane_vc_t1

0xb83a,	// (0x00026152) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f6,	// (0x0002a30e) setting_slider_graphic_pane_vc_t

0xb84a,	// (0x00026162) slider_set_pane_cp_vc

0xb852,	// (0x0002616a) slider_set_pane_vc_g1

0xb85b,	// (0x00026173) slider_set_pane_vc_g2

0x0006,

0xf9fb,	// (0x0002a313) slider_set_pane_vc_g

0x882f,	// (0x00023147) set_opt_bg_pane_g1_copy1

0x8837,	// (0x0002314f) set_opt_bg_pane_g2_copy1

0xb887,	// (0x0002619f) set_opt_bg_pane_g3_copy1

0x8847,	// (0x0002315f) set_opt_bg_pane_g4_copy1

0x884f,	// (0x00023167) set_opt_bg_pane_g5_copy1

0x8857,	// (0x0002316f) set_opt_bg_pane_g6_copy1

0xb891,	// (0x000261a9) set_opt_bg_pane_g7_copy1

0xb899,	// (0x000261b1) set_opt_bg_pane_g8_copy1

0xb8a3,	// (0x000261bb) set_opt_bg_pane_g9_copy1

0x7e88,	// (0x000227a0) bg_set_opt_pane_cp_vc

0xb8ad,	// (0x000261c5) setting_slider_pane_vc_t1

0xb8bc,	// (0x000261d4) setting_slider_pane_vc_t2

0xb8cc,	// (0x000261e4) setting_slider_pane_vc_t3

0x0002,

0xfa0a,	// (0x0002a322) setting_slider_pane_vc_t

0xb8dc,	// (0x000261f4) slider_set_pane_vc

0x6c23,	// (0x0002153b) volume_set_pane_vc_g1

0x6c2c,	// (0x00021544) volume_set_pane_vc_g2

0x6c35,	// (0x0002154d) volume_set_pane_vc_g3

0x6c3e,	// (0x00021556) volume_set_pane_vc_g4

0x6c47,	// (0x0002155f) volume_set_pane_vc_g5

0x6c50,	// (0x00021568) volume_set_pane_vc_g6

0x6c59,	// (0x00021571) volume_set_pane_vc_g7

0x6c62,	// (0x0002157a) volume_set_pane_vc_g8

0x6c6b,	// (0x00021583) volume_set_pane_vc_g9

0x6c74,	// (0x0002158c) volume_set_pane_vc_g10

0x0009,

0xf8af,	// (0x0002a1c7) volume_set_pane_vc_g

0xb8e4,	// (0x000261fc) volume_set_pane_vc

0xb8ec,	// (0x00026204) button_value_adjust_pane_cp1_vc

0xb8f6,	// (0x0002620e) list_highlight_pane_cp2_vc

0xb8ff,	// (0x00026217) list_set_pane_vc_ParamLimits

0xb8ff,	// (0x00026217) list_set_pane_vc

0xb95d,	// (0x00026275) main_pane_set_vc_t1_ParamLimits

0xb95d,	// (0x00026275) main_pane_set_vc_t1

0xb972,	// (0x0002628a) main_pane_set_vc_t2_ParamLimits

0xb972,	// (0x0002628a) main_pane_set_vc_t2

0xb984,	// (0x0002629c) main_pane_set_vc_t3_ParamLimits

0xb984,	// (0x0002629c) main_pane_set_vc_t3

0xb998,	// (0x000262b0) main_pane_set_vc_t4_ParamLimits

0xb998,	// (0x000262b0) main_pane_set_vc_t4

0x0003,

0xfa11,	// (0x0002a329) main_pane_set_vc_t_ParamLimits

0xfa11,	// (0x0002a329) main_pane_set_vc_t

0xb9ac,	// (0x000262c4) setting_code_pane_vc_ParamLimits

0xb9ac,	// (0x000262c4) setting_code_pane_vc

0xb9bd,	// (0x000262d5) setting_slider_graphic_pane_vc

0xb9bd,	// (0x000262d5) setting_slider_pane_vc

0xb9bd,	// (0x000262d5) setting_text_pane_vc

0xb9bd,	// (0x000262d5) setting_volume_pane_vc

0xb9c7,	// (0x000262df) scroll_pane_cp121_vc

0x87b1,	// (0x000230c9) set_content_pane_vc

0xb9db,	// (0x000262f3) button_value_adjust_pane_g1

0xb9e4,	// (0x000262fc) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x0002a385) button_value_adjust_pane_g

0xb9ed,	// (0x00026305) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9ed,	// (0x00026305) form_field_slider_wide_pane_vc_t1

0xba01,	// (0x00026319) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba01,	// (0x00026319) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x0002a38a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0002a38a) form_field_slider_wide_pane_vc_t

0x81e3,	// (0x00022afb) input_focus_pane_cp10_vc_ParamLimits

0x81e3,	// (0x00022afb) input_focus_pane_cp10_vc

0xba2f,	// (0x00026347) slider_cont_pane_cp1_vc_ParamLimits

0xba2f,	// (0x00026347) slider_cont_pane_cp1_vc

0xba41,	// (0x00026359) slider_form_pane_g1_cp2

0xb85b,	// (0x00026173) slider_form_pane_g2_cp2

0xba6e,	// (0x00026386) form_field_slider_pane_vc_t3

0xba7c,	// (0x00026394) form_field_slider_pane_vc_t4

0xba8a,	// (0x000263a2) slider_form_pane_vc_ParamLimits

0xba8a,	// (0x000263a2) slider_form_pane_vc

0xba97,	// (0x000263af) form_field_slider_pane_vc_t1_ParamLimits

0xba97,	// (0x000263af) form_field_slider_pane_vc_t1

0xba01,	// (0x00026319) form_field_slider_pane_vc_t2_ParamLimits

0xba01,	// (0x00026319) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x0002a39c) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x0002a39c) form_field_slider_pane_vc_t

0x81e3,	// (0x00022afb) input_focus_pane_cp9_vc_ParamLimits

0x81e3,	// (0x00022afb) input_focus_pane_cp9_vc

0xbab3,	// (0x000263cb) slider_cont_pane_vc_ParamLimits

0xbab3,	// (0x000263cb) slider_cont_pane_vc

0xbac7,	// (0x000263df) list_form_graphic_pane_cp_vc_ParamLimits

0xbac7,	// (0x000263df) list_form_graphic_pane_cp_vc

0x9da4,	// (0x000246bc) form_field_popup_wide_pane_vc_g1

0xbadc,	// (0x000263f4) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbadc,	// (0x000263f4) form_field_popup_wide_pane_vc_t1

0x87d7,	// (0x000230ef) input_focus_pane_cp8_vc_ParamLimits

0x87d7,	// (0x000230ef) input_focus_pane_cp8_vc

0xbb21,	// (0x00026439) list_form_wide_pane_vc_ParamLimits

0xbb21,	// (0x00026439) list_form_wide_pane_vc

0xbb2d,	// (0x00026445) list_form_graphic_pane_vc_g1

0xbb35,	// (0x0002644d) list_form_graphic_pane_vc_t1_ParamLimits

0xbb35,	// (0x0002644d) list_form_graphic_pane_vc_t1

0x7f68,	// (0x00022880) list_highlight_pane_cp5_vc_ParamLimits

0x7f68,	// (0x00022880) list_highlight_pane_cp5_vc

0xbb51,	// (0x00026469) list_form_graphic_pane_vc_ParamLimits

0xbb51,	// (0x00026469) list_form_graphic_pane_vc

0x9da4,	// (0x000246bc) form_field_popup_pane_vc_g1

0xbb67,	// (0x0002647f) form_field_popup_pane_vc_t1_ParamLimits

0xbb67,	// (0x0002647f) form_field_popup_pane_vc_t1

0x87d7,	// (0x000230ef) input_focus_pane_cp7_vc_ParamLimits

0x87d7,	// (0x000230ef) input_focus_pane_cp7_vc

0xbb7e,	// (0x00026496) list_form_pane_vc_ParamLimits

0xbb7e,	// (0x00026496) list_form_pane_vc

0xbb8a,	// (0x000264a2) data_form_pane_vc_t1_ParamLimits

0xbb8a,	// (0x000264a2) data_form_pane_vc_t1

0x882f,	// (0x00023147) input_focus_pane_vc_g1

0x8837,	// (0x0002314f) input_focus_pane_vc_g2

0x883f,	// (0x00023157) input_focus_pane_vc_g3

0x8847,	// (0x0002315f) input_focus_pane_vc_g4

0x884f,	// (0x00023167) input_focus_pane_vc_g5

0x8857,	// (0x0002316f) input_focus_pane_vc_g6

0x885f,	// (0x00023177) input_focus_pane_vc_g7

0x8867,	// (0x0002317f) input_focus_pane_vc_g8

0x886f,	// (0x00023187) input_focus_pane_vc_g9

0x7e7e,	// (0x00022796) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x00029fa4) input_focus_pane_vc_g

0x9d98,	// (0x000246b0) data_form_pane_vc_ParamLimits

0x9d98,	// (0x000246b0) data_form_pane_vc

0x9da4,	// (0x000246bc) form_field_data_pane_vc_g1

0xbba5,	// (0x000264bd) form_field_data_pane_vc_t1_ParamLimits

0xbba5,	// (0x000264bd) form_field_data_pane_vc_t1

0x87d7,	// (0x000230ef) input_focus_pane_vc_ParamLimits

0x87d7,	// (0x000230ef) input_focus_pane_vc

0xbbbf,	// (0x000264d7) button_value_adjust_pane_cp3_vc

0xbbc7,	// (0x000264df) button_value_adjust_pane_cp5_vc

0xbbcf,	// (0x000264e7) form_field_data_pane_vc_ParamLimits

0xbbcf,	// (0x000264e7) form_field_data_pane_vc

0xbbe6,	// (0x000264fe) form_field_data_pane_vc_cp2

0xbbee,	// (0x00026506) form_field_data_wide_pane_vc_ParamLimits

0xbbee,	// (0x00026506) form_field_data_wide_pane_vc

0xbc04,	// (0x0002651c) form_field_data_wide_pane_vc_cp2

0xbc0c,	// (0x00026524) form_field_popup_pane_vc_ParamLimits

0xbc0c,	// (0x00026524) form_field_popup_pane_vc

0xbc23,	// (0x0002653b) form_field_popup_wide_pane_vc_ParamLimits

0xbc23,	// (0x0002653b) form_field_popup_wide_pane_vc

0xbc39,	// (0x00026551) form_field_slider_pane_vc_ParamLimits

0xbc39,	// (0x00026551) form_field_slider_pane_vc

0xbc4c,	// (0x00026564) form_field_slider_wide_pane_vc_ParamLimits

0xbc4c,	// (0x00026564) form_field_slider_wide_pane_vc

0xbc5f,	// (0x00026577) grid_touch_1_pane_ParamLimits

0xbc5f,	// (0x00026577) grid_touch_1_pane

0xbc6b,	// (0x00026583) grid_touch_2_pane_ParamLimits

0xbc6b,	// (0x00026583) grid_touch_2_pane

0x9731,	// (0x00024049) touch_pane_g1_ParamLimits

0x9731,	// (0x00024049) touch_pane_g1

0xbc83,	// (0x0002659b) cell_app_pane_cp_wide_ParamLimits

0xbc83,	// (0x0002659b) cell_app_pane_cp_wide

0xbc94,	// (0x000265ac) grid_popup_fast_wide_pane_ParamLimits

0xbc94,	// (0x000265ac) grid_popup_fast_wide_pane

0xbca8,	// (0x000265c0) scroll_pane_cp19_ParamLimits

0xbca8,	// (0x000265c0) scroll_pane_cp19

0x7e88,	// (0x000227a0) bg_popup_window_pane_cp20

0xbcbc,	// (0x000265d4) listscroll_popup_fast_wide_pane

0x7f68,	// (0x00022880) grid_indicator_nsta_pane

0xbcc4,	// (0x000265dc) clock_nsta_pane_g1

0xbccd,	// (0x000265e5) clock_nsta_pane_t1

0xbce9,	// (0x00026601) cell_indicator_nsta_pane_ParamLimits

0xbce9,	// (0x00026601) cell_indicator_nsta_pane

0xbd1a,	// (0x00026632) cell_indicator_nsta_pane_g1

0xbd28,	// (0x00026640) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x0002a3ad) cell_indicator_nsta_pane_g

0xbd35,	// (0x0002664d) clock_nsta_pane_cp

0xbd3d,	// (0x00026655) indicator_nsta_pane_cp

0xbd45,	// (0x0002665d) nsta_clock_indic_pane_g1

0x8031,	// (0x00022949) grid_indicator_pane

0x8d67,	// (0x0002367f) scroll_pane_cp29

0x622c,	// (0x00020b44) indicator_nsta_pane_cp2_ParamLimits

0x622c,	// (0x00020b44) indicator_nsta_pane_cp2

0x7f68,	// (0x00022880) main_apps_wheel_pane

0x9fb9,	// (0x000248d1) form_midp_field_text_pane_ParamLimits

0xa104,	// (0x00024a1c) scroll_bar_cp050_ParamLimits

0xbd95,	// (0x000266ad) cell_indicator_pane_ParamLimits

0xbd95,	// (0x000266ad) cell_indicator_pane

0xbdac,	// (0x000266c4) cell_indicator_pane_g1

0xbdb6,	// (0x000266ce) grid_wheel_folder_pane_ParamLimits

0xbdb6,	// (0x000266ce) grid_wheel_folder_pane

0xbdcc,	// (0x000266e4) list_wheel_apps_pane_ParamLimits

0xbdcc,	// (0x000266e4) list_wheel_apps_pane

0xbddd,	// (0x000266f5) main_apps_wheel_pane_g1_ParamLimits

0xbddd,	// (0x000266f5) main_apps_wheel_pane_g1

0xbdf1,	// (0x00026709) main_apps_wheel_pane_g2_ParamLimits

0xbdf1,	// (0x00026709) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0002a3c9) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0002a3c9) main_apps_wheel_pane_g

0xbe09,	// (0x00026721) main_apps_wheel_pane_t1_ParamLimits

0xbe09,	// (0x00026721) main_apps_wheel_pane_t1

0xbe2c,	// (0x00026744) list_wheel_apps_pane_g1

0xbe34,	// (0x0002674c) list_wheel_apps_pane_g2

0xbe3c,	// (0x00026754) list_wheel_apps_pane_g3

0xbe44,	// (0x0002675c) list_wheel_apps_pane_g4

0xbe4e,	// (0x00026766) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x0002a3ce) list_wheel_apps_pane_g

0x92ea,	// (0x00023c02) navi_icon_text_pane

0x97d6,	// (0x000240ee) aid_fill_nsta

0xbe71,	// (0x00026789) navi_icon_text_pane_g1

0xbe7d,	// (0x00026795) navi_icon_text_pane_t1

0x917d,	// (0x00023a95) list_set_graphic_pane_t1_ParamLimits

0x917d,	// (0x00023a95) list_set_graphic_pane_t1

0xa85b,	// (0x00025173) popup_midp_note_alarm_window_t6_ParamLimits

0xa85b,	// (0x00025173) popup_midp_note_alarm_window_t6

0xa86d,	// (0x00025185) popup_midp_note_alarm_window_t7_ParamLimits

0xa86d,	// (0x00025185) popup_midp_note_alarm_window_t7

0xa87f,	// (0x00025197) popup_midp_note_alarm_window_t8_ParamLimits

0xa87f,	// (0x00025197) popup_midp_note_alarm_window_t8

0xa891,	// (0x000251a9) popup_midp_note_alarm_window_t9_ParamLimits

0xa891,	// (0x000251a9) popup_midp_note_alarm_window_t9

0xa8a3,	// (0x000251bb) popup_midp_note_alarm_window_t10_ParamLimits

0xa8a3,	// (0x000251bb) popup_midp_note_alarm_window_t10

0xa8b5,	// (0x000251cd) popup_midp_note_alarm_window_t11_ParamLimits

0xa8b5,	// (0x000251cd) popup_midp_note_alarm_window_t11

0xa8c7,	// (0x000251df) scroll_pane_cp17_ParamLimits

0xa8c7,	// (0x000251df) scroll_pane_cp17

0x6c23,	// (0x0002153b) volume_small_pane_cp_g1

0x6f18,	// (0x00021830) volume_small_pane_cp_g2

0x6f21,	// (0x00021839) volume_small_pane_cp_g3

0x6f2a,	// (0x00021842) volume_small_pane_cp_g4

0x6f33,	// (0x0002184b) volume_small_pane_cp_g5

0x6f3c,	// (0x00021854) volume_small_pane_cp_g6

0x6f45,	// (0x0002185d) volume_small_pane_cp_g7

0x6f4e,	// (0x00021866) volume_small_pane_cp_g8

0x6f57,	// (0x0002186f) volume_small_pane_cp_g9

0x6f60,	// (0x00021878) volume_small_pane_cp_g10

0x9547,	// (0x00023e5f) midp_ticker_pane_g1_ParamLimits

0x9553,	// (0x00023e6b) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0002a070) midp_ticker_pane_g_ParamLimits

0x955f,	// (0x00023e77) midp_ticker_pane_t1_ParamLimits

0x97ec,	// (0x00024104) aid_fill_nsta_2

0xa0f0,	// (0x00024a08) list_form2_midp_pane

0xb220,	// (0x00025b38) midp_editing_number_pane_ParamLimits

0xb22f,	// (0x00025b47) midp_ticker_pane_ParamLimits

0xbe8f,	// (0x000267a7) form2_midp_field_pane

0xbeb3,	// (0x000267cb) scroll_pane_cp51

0xbed3,	// (0x000267eb) form2_midp_button_pane_ParamLimits

0xbed3,	// (0x000267eb) form2_midp_button_pane

0xbee5,	// (0x000267fd) form2_midp_content_pane_ParamLimits

0xbee5,	// (0x000267fd) form2_midp_content_pane

0xbeff,	// (0x00026817) form2_midp_field_choice_group_pane

0xbf07,	// (0x0002681f) form2_midp_field_pane_g1

0xbf0f,	// (0x00026827) form2_midp_field_pane_g2

0xbf17,	// (0x0002682f) form2_midp_field_pane_g3

0xbf1f,	// (0x00026837) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x0002a3f3) form2_midp_field_pane_g

0xbf27,	// (0x0002683f) form2_midp_gauge_slider_pane

0xbf2f,	// (0x00026847) form2_midp_gauge_wait_pane

0xbf37,	// (0x0002684f) form2_midp_image_pane_ParamLimits

0xbf37,	// (0x0002684f) form2_midp_image_pane

0xbf52,	// (0x0002686a) form2_midp_label_pane_ParamLimits

0xbf52,	// (0x0002686a) form2_midp_label_pane

0xbf6b,	// (0x00026883) form2_midp_label_pane_cp_ParamLimits

0xbf6b,	// (0x00026883) form2_midp_label_pane_cp

0xbf8c,	// (0x000268a4) form2_midp_string_pane_ParamLimits

0xbf8c,	// (0x000268a4) form2_midp_string_pane

0x5708,	// (0x00020020) form2_midp_text_pane_ParamLimits

0x5708,	// (0x00020020) form2_midp_text_pane

0xbf9e,	// (0x000268b6) form2_midp_time_pane

0xbfae,	// (0x000268c6) input_focus_pane_cp51_ParamLimits

0xbfae,	// (0x000268c6) input_focus_pane_cp51

0xbfc6,	// (0x000268de) form2_midp_label_pane_t1_ParamLimits

0xbfc6,	// (0x000268de) form2_midp_label_pane_t1

0x5723,	// (0x0002003b) form2_mdip_text_pane_t1_ParamLimits

0x5723,	// (0x0002003b) form2_mdip_text_pane_t1

0x5741,	// (0x00020059) form2_midp_time_pane_t1

0xc00f,	// (0x00026927) form2_midp_gauge_slider_pane_t1

0xc021,	// (0x00026939) form2_midp_gauge_slider_pane_t2

0xc033,	// (0x0002694b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x0002a3fc) form2_midp_gauge_slider_pane_t

0xc045,	// (0x0002695d) form2_midp_slider_pane

0xc051,	// (0x00026969) form2_midp_gauge_wait_pane_t1

0xc05f,	// (0x00026977) form2_midp_wait_pane_ParamLimits

0xc05f,	// (0x00026977) form2_midp_wait_pane

0xc08a,	// (0x000269a2) list_single_2graphic_pane_cp4_ParamLimits

0xc08a,	// (0x000269a2) list_single_2graphic_pane_cp4

0x9e0c,	// (0x00024724) list_single_midp_graphic_pane_cp_ParamLimits

0x9e0c,	// (0x00024724) list_single_midp_graphic_pane_cp

0x7e88,	// (0x000227a0) list_highlight_pane_cp20

0xc0ae,	// (0x000269c6) list_single_2graphic_pane_g1_cp4

0xc0b6,	// (0x000269ce) list_single_2graphic_pane_g2_cp4

0xc0be,	// (0x000269d6) list_single_2graphic_pane_t1_cp4

0x7f68,	// (0x00022880) list_highlight_pane_cp21

0xc0cd,	// (0x000269e5) list_single_midp_graphic_pane_g4_cp

0xc0dc,	// (0x000269f4) list_single_midp_graphic_pane_t1_cp

0xc0f1,	// (0x00026a09) form2_mdip_string_pane_t1_ParamLimits

0xc0f1,	// (0x00026a09) form2_mdip_string_pane_t1

0x7e88,	// (0x000227a0) bg_wml_button_pane_cp2

0x7e7e,	// (0x00022796) form2_midp_image_pane_g1

0x4c15,	// (0x0001f52d) list_double_large_graphic_pane_g5_ParamLimits

0x4c15,	// (0x0001f52d) list_double_large_graphic_pane_g5

0x9472,	// (0x00023d8a) midp_form_pane_ParamLimits

0x7f68,	// (0x00022880) main_apps_wheel_pane_ParamLimits

0x68f1,	// (0x00021209) popup_preview_window_ParamLimits

0x68f1,	// (0x00021209) popup_preview_window

0x6aac,	// (0x000213c4) popup_touch_info_window_ParamLimits

0x6aac,	// (0x000213c4) popup_touch_info_window

0x6aca,	// (0x000213e2) popup_touch_menu_window_ParamLimits

0x6aca,	// (0x000213e2) popup_touch_menu_window

0x7e74,	// (0x0002278c) bg_popup_sub_pane_cp6

0xc1db,	// (0x00026af3) list_touch_menu_pane

0xc1e3,	// (0x00026afb) list_single_touch_menu_pane_ParamLimits

0xc1e3,	// (0x00026afb) list_single_touch_menu_pane

0xc1f9,	// (0x00026b11) list_single_touch_menu_pane_t1

0x7f68,	// (0x00022880) bg_popup_sub_pane_cp7_ParamLimits

0x7f68,	// (0x00022880) bg_popup_sub_pane_cp7

0xc207,	// (0x00026b1f) heading_sub_pane

0xc20f,	// (0x00026b27) list_touch_info_pane_ParamLimits

0xc20f,	// (0x00026b27) list_touch_info_pane

0xc21e,	// (0x00026b36) list_single_touch_info_pane_ParamLimits

0xc21e,	// (0x00026b36) list_single_touch_info_pane

0xc230,	// (0x00026b48) list_single_touch_info_pane_t1

0xc23e,	// (0x00026b56) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x0002a40a) list_single_touch_info_pane_t

0x946a,	// (0x00023d82) bg_popup_heading_pane_cp

0xc24c,	// (0x00026b64) heading_sub_pane_t1

0x9d32,	// (0x0002464a) bg_popup_preview_window_pane_cp_ParamLimits

0x9d32,	// (0x0002464a) bg_popup_preview_window_pane_cp

0xc207,	// (0x00026b1f) heading_preview_pane

0xc20f,	// (0x00026b27) list_preview_pane_ParamLimits

0xc20f,	// (0x00026b27) list_preview_pane

0xc25a,	// (0x00026b72) popup_preview_window_g1

0xc21e,	// (0x00026b36) list_single_preview_pane_ParamLimits

0xc21e,	// (0x00026b36) list_single_preview_pane

0xc262,	// (0x00026b7a) list_single_preview_pane_g1

0xc26a,	// (0x00026b82) list_single_preview_pane_t1

0xc230,	// (0x00026b48) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x0002a40f) list_single_preview_pane_t

0xc278,	// (0x00026b90) bg_popup_heading_pane_cp2_ParamLimits

0xc278,	// (0x00026b90) bg_popup_heading_pane_cp2

0xc28e,	// (0x00026ba6) heading_preview_pane_g1

0xc296,	// (0x00026bae) heading_preview_pane_t1_ParamLimits

0xc296,	// (0x00026bae) heading_preview_pane_t1

0x8054,	// (0x0002296c) soft_indicator_pane_t1_ParamLimits

0x874a,	// (0x00023062) scroll_pane_ParamLimits

0x8c60,	// (0x00023578) scroll_sc2_left_pane

0x8c69,	// (0x00023581) scroll_sc2_right_pane

0x8c88,	// (0x000235a0) scroll_bg_pane_g1_ParamLimits

0x8c9d,	// (0x000235b5) scroll_bg_pane_g2_ParamLimits

0x8cb5,	// (0x000235cd) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x00029ffb) scroll_bg_pane_g_ParamLimits

0x8c88,	// (0x000235a0) scroll_handle_pane_g1_ParamLimits

0x8cd7,	// (0x000235ef) scroll_handle_pane_g2_ParamLimits

0x8cb5,	// (0x000235cd) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0002a002) scroll_handle_pane_g_ParamLimits

0x6572,	// (0x00020e8a) popup_choice_list_window_ParamLimits

0x6572,	// (0x00020e8a) popup_choice_list_window

0x9c08,	// (0x00024520) choice_list_pane

0x9c8a,	// (0x000245a2) cell_toolbar_pane_t1

0x9cb2,	// (0x000245ca) toolbar_button_pane_ParamLimits

0xad81,	// (0x00025699) ai_gene_pane_1_t2_ParamLimits

0xad81,	// (0x00025699) ai_gene_pane_1_t2

0x0001,

0xf90b,	// (0x0002a223) ai_gene_pane_1_t_ParamLimits

0xf90b,	// (0x0002a223) ai_gene_pane_1_t

0xc2b3,	// (0x00026bcb) scroll_sc2_left_pane_g1

0xc2b3,	// (0x00026bcb) scroll_sc2_right_pane_g1

0x97b4,	// (0x000240cc) bg_popup_sub_pane_cp10

0xc2bd,	// (0x00026bd5) list_choice_list_pane

0xc2d6,	// (0x00026bee) list_single_choice_list_pane_ParamLimits

0xc2d6,	// (0x00026bee) list_single_choice_list_pane

0xc2e9,	// (0x00026c01) list_single_choice_list_pane_g1

0x8968,	// (0x00023280) list_single_choice_list_pane_t1_ParamLimits

0x8968,	// (0x00023280) list_single_choice_list_pane_t1

0xc2f1,	// (0x00026c09) choice_list_pane_g1

0xc2f9,	// (0x00026c11) choice_list_pane_t1

0x7e74,	// (0x0002278c) input_focus_pane_cp11

0x8b3f,	// (0x00023457) title_pane_stacon_g2_ParamLimits

0x8b3f,	// (0x00023457) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x00029fe1) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00029fe1) title_pane_stacon_g

0x946a,	// (0x00023d82) cursor_press_pane

0x661e,	// (0x00020f36) popup_fep_hwr_window_ParamLimits

0x661e,	// (0x00020f36) popup_fep_hwr_window

0x6698,	// (0x00020fb0) popup_fep_vkb_window_ParamLimits

0x6698,	// (0x00020fb0) popup_fep_vkb_window

0xc307,	// (0x00026c1f) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x0002a438) fep_vkb_side_pane_g_ParamLimits

0x6fa2,	// (0x000218ba) fep_hwr_candidate_pane_ParamLimits

0x6fa2,	// (0x000218ba) fep_hwr_candidate_pane

0x6fcc,	// (0x000218e4) fep_hwr_side_pane_ParamLimits

0x6fcc,	// (0x000218e4) fep_hwr_side_pane

0x6fec,	// (0x00021904) fep_hwr_top_pane_ParamLimits

0x6fec,	// (0x00021904) fep_hwr_top_pane

0x7004,	// (0x0002191c) fep_hwr_write_pane_ParamLimits

0x7004,	// (0x0002191c) fep_hwr_write_pane

0xfb20,	// (0x0002a438) fep_vkb_side_pane_g

0xc30f,	// (0x00026c27) fep_hwr_top_pane_g1

0xc321,	// (0x00026c39) fep_hwr_top_pane_g2

0x7030,	// (0x00021948) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x0002a414) fep_hwr_top_pane_g

0x7045,	// (0x0002195d) fep_hwr_top_text_pane

0x8e57,	// (0x0002376f) fep_hwr_top_text_pane_g1

0xc357,	// (0x00026c6f) fep_hwr_top_text_pane_t1

0x713b,	// (0x00021a53) fep_hwr_candidate_pane_g1

0xc5aa,	// (0x00026ec2) fep_vkb_keypad_pane_g3_ParamLimits

0xc5aa,	// (0x00026ec2) fep_vkb_keypad_pane_g3

0xc5d2,	// (0x00026eea) fep_vkb_keypad_pane_g4_ParamLimits

0xc5d2,	// (0x00026eea) fep_vkb_keypad_pane_g4

0xc641,	// (0x00026f59) fep_vkb_bottom_pane_g2_ParamLimits

0xc641,	// (0x00026f59) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x0002a43f) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x0002a43f) fep_vkb_bottom_pane_g

0xc2b3,	// (0x00026bcb) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x0002a449) cell_vkb_side_pane_g

0xc6cc,	// (0x00026fe4) cell_vkb_side_pane_t1

0xc6da,	// (0x00026ff2) cell_vkb_side_pane_t1_copy1

0xc2b3,	// (0x00026bcb) bg_fep_vkb_candidate_pane_g2

0xc806,	// (0x0002711e) cell_vkb_candidate_pane_ParamLimits

0xc365,	// (0x00026c7d) aid_size_cell_vkb_ParamLimits

0xc365,	// (0x00026c7d) aid_size_cell_vkb

0xc806,	// (0x0002711e) cell_vkb_candidate_pane

0x7155,	// (0x00021a6d) bg_popup_fep_shadow_pane_g1

0xc3f3,	// (0x00026d0b) fep_vkb_bottom_pane_ParamLimits

0xc3f3,	// (0x00026d0b) fep_vkb_bottom_pane

0xc429,	// (0x00026d41) fep_vkb_candidate_pane_ParamLimits

0xc429,	// (0x00026d41) fep_vkb_candidate_pane

0xc445,	// (0x00026d5d) fep_vkb_keypad_pane_ParamLimits

0xc445,	// (0x00026d5d) fep_vkb_keypad_pane

0xc48b,	// (0x00026da3) fep_vkb_side_pane_ParamLimits

0xc48b,	// (0x00026da3) fep_vkb_side_pane

0xc4c7,	// (0x00026ddf) fep_vkb_top_pane_ParamLimits

0xc4c7,	// (0x00026ddf) fep_vkb_top_pane

0xc503,	// (0x00026e1b) fep_vkb_top_pane_g1_ParamLimits

0xc503,	// (0x00026e1b) fep_vkb_top_pane_g1

0xc512,	// (0x00026e2a) fep_vkb_top_pane_g2_ParamLimits

0xc512,	// (0x00026e2a) fep_vkb_top_pane_g2

0xc521,	// (0x00026e39) fep_vkb_top_pane_g3_ParamLimits

0xc521,	// (0x00026e39) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x0002a42f) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x0002a42f) fep_vkb_top_pane_g

0xc53f,	// (0x00026e57) fep_vkb_top_text_pane_ParamLimits

0xc53f,	// (0x00026e57) fep_vkb_top_text_pane

0xc550,	// (0x00026e68) fep_vkb_side_pane_g1_ParamLimits

0xc550,	// (0x00026e68) fep_vkb_side_pane_g1

0xc599,	// (0x00026eb1) grid_vkb_side_pane_ParamLimits

0xc599,	// (0x00026eb1) grid_vkb_side_pane

0x715d,	// (0x00021a75) bg_popup_fep_shadow_pane_g2

0x7166,	// (0x00021a7e) bg_popup_fep_shadow_pane_g3

0x716e,	// (0x00021a86) bg_popup_fep_shadow_pane_g4

0x7177,	// (0x00021a8f) bg_popup_fep_shadow_pane_g5

0x7181,	// (0x00021a99) bg_popup_fep_shadow_pane_g6

0x7189,	// (0x00021aa1) bg_popup_fep_shadow_pane_g7

0x884f,	// (0x00023167) bg_popup_fep_shadow_pane_g8

0xc5f0,	// (0x00026f08) grid_vkb_keypad_number_pane_ParamLimits

0xc5f0,	// (0x00026f08) grid_vkb_keypad_number_pane

0xc600,	// (0x00026f18) grid_vkb_keypad_pane_ParamLimits

0xc600,	// (0x00026f18) grid_vkb_keypad_pane

0xc626,	// (0x00026f3e) fep_vkb_bottom_pane_g1_ParamLimits

0xc626,	// (0x00026f3e) fep_vkb_bottom_pane_g1

0xc64f,	// (0x00026f67) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc64f,	// (0x00026f67) grid_vkb_keypad_bottom_left_pane

0xc664,	// (0x00026f7c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc664,	// (0x00026f7c) grid_vkb_keypad_bottom_right_pane

0xc679,	// (0x00026f91) fep_vkb_top_text_pane_g1

0xc694,	// (0x00026fac) fep_vkb_top_text_pane_t1

0xc6a9,	// (0x00026fc1) cell_vkb_side_pane_ParamLimits

0xc6a9,	// (0x00026fc1) cell_vkb_side_pane

0xc2b3,	// (0x00026bcb) cell_vkb_side_pane_g1

0xc6e8,	// (0x00027000) cell_vkb_keypad_pane_ParamLimits

0xc6e8,	// (0x00027000) cell_vkb_keypad_pane

0xc75d,	// (0x00027075) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x0002a45c) bg_popup_fep_shadow_pane_g

0xc2b3,	// (0x00026bcb) cell_hwr_side_pane_g1

0xc2b3,	// (0x00026bcb) cell_hwr_side_pane_g2

0xc767,	// (0x0002707f) cell_vkb_keypad_pane_t1

0xc775,	// (0x0002708d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc775,	// (0x0002708d) cell_vkb_keypad_bottom_left_pane

0xc792,	// (0x000270aa) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc792,	// (0x000270aa) cell_vkb_keypad_bottom_right_pane

0xc2b3,	// (0x00026bcb) cell_vkb_keypad_bottom_left_pane_g1

0xc2b3,	// (0x00026bcb) cell_vkb_keypad_bottom_right_pane_g1

0xc7cb,	// (0x000270e3) cell_vkb_keypad_number_pane_ParamLimits

0xc7cb,	// (0x000270e3) cell_vkb_keypad_number_pane

0xc7ea,	// (0x00027102) cell_vkb_keypad_number_pane_g1

0xc7f4,	// (0x0002710c) cell_vkb_keypad_number_pane_g2

0xc7fd,	// (0x00027115) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x0002a44e) cell_vkb_keypad_number_pane_g

0xc767,	// (0x0002707f) cell_vkb_keypad_number_pane_t1

0xc821,	// (0x00027139) fep_vkb_candidate_pane_g1

0x0001,

0xfb31,	// (0x0002a449) cell_hwr_side_pane_g

0xc83a,	// (0x00027152) cell_hwr_side_pane_t1

0x719b,	// (0x00021ab3) cell_hwr_side_pane_t1_copy1

0xc531,	// (0x00026e49) cell_hwr_candidate_pane_g1

0x71a9,	// (0x00021ac1) cell_hwr_candidate_pane_t1

0xc2b3,	// (0x00026bcb) cell_vkb_candidate_pane_g2

0xc8c0,	// (0x000271d8) cell_vkb_candidate_pane_t1

0x6f69,	// (0x00021881) bg_popup_fep_shadow_pane_ParamLimits

0x6f69,	// (0x00021881) bg_popup_fep_shadow_pane

0x1fb5,	// (0x0001c8cd) bg_fep_hwr_top_pane_g4

0xc333,	// (0x00026c4b) bg_hwr_side_pane_g1_ParamLimits

0xc333,	// (0x00026c4b) bg_hwr_side_pane_g1

0x7081,	// (0x00021999) cell_hwr_side_pane_ParamLimits

0x7081,	// (0x00021999) cell_hwr_side_pane

0x70bc,	// (0x000219d4) fep_hwr_write_pane_g1_ParamLimits

0x70bc,	// (0x000219d4) fep_hwr_write_pane_g1

0x70c9,	// (0x000219e1) fep_hwr_write_pane_g2_ParamLimits

0x70c9,	// (0x000219e1) fep_hwr_write_pane_g2

0x70d6,	// (0x000219ee) fep_hwr_write_pane_g3_ParamLimits

0x70d6,	// (0x000219ee) fep_hwr_write_pane_g3

0x70e4,	// (0x000219fc) fep_hwr_write_pane_g4_ParamLimits

0x70e4,	// (0x000219fc) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x0002a41b) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x0002a41b) fep_hwr_write_pane_g

0x1fb5,	// (0x0001c8cd) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1fb5,	// (0x0001c8cd) bg_fep_hwr_candidate_pane_g2

0x70f9,	// (0x00021a11) cell_hwr_candidate_pane_ParamLimits

0x70f9,	// (0x00021a11) cell_hwr_candidate_pane

0x713b,	// (0x00021a53) fep_hwr_candidate_pane_g1_ParamLimits

0xc393,	// (0x00026cab) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc393,	// (0x00026cab) bg_popup_fep_shadow_pane_cp2

0xc531,	// (0x00026e49) fep_vkb_top_pane_g4_ParamLimits

0xc531,	// (0x00026e49) fep_vkb_top_pane_g4

0xc577,	// (0x00026e8f) fep_vkb_side_pane_g2_ParamLimits

0xc577,	// (0x00026e8f) fep_vkb_side_pane_g2

0x4d58,	// (0x0001f670) list_setting_pane_t4_ParamLimits

0x4d58,	// (0x0001f670) list_setting_pane_t4

0x4df2,	// (0x0001f70a) list_setting_number_pane_t5_ParamLimits

0x4df2,	// (0x0001f70a) list_setting_number_pane_t5

0x8e9e,	// (0x000237b6) list_double_heading_pane_cp2_ParamLimits

0x8e9e,	// (0x000237b6) list_double_heading_pane_cp2

0x87e5,	// (0x000230fd) list_double_heading_pane_g1_cp2_ParamLimits

0x87e5,	// (0x000230fd) list_double_heading_pane_g1_cp2

0x87f1,	// (0x00023109) list_double_heading_pane_g2_cp2_ParamLimits

0x87f1,	// (0x00023109) list_double_heading_pane_g2_cp2

0xc8ce,	// (0x000271e6) list_double_heading_pane_t1_cp2_ParamLimits

0xc8ce,	// (0x000271e6) list_double_heading_pane_t1_cp2

0xc8e4,	// (0x000271fc) list_double_heading_pane_t2_cp2_ParamLimits

0xc8e4,	// (0x000271fc) list_double_heading_pane_t2_cp2

0x7e5c,	// (0x00022774) aid_value_unit2

0x5dbc,	// (0x000206d4) popup_preview_fixed_window

0x81f1,	// (0x00022b09) bg_popup_preview_window_pane_cp02

0xc8f6,	// (0x0002720e) list_preview_fixed_pane

0xc93c,	// (0x00027254) list_empty_pane_fp_ParamLimits

0xc93c,	// (0x00027254) list_empty_pane_fp

0xc93c,	// (0x00027254) list_single_cale_day_pane_fp_ParamLimits

0xc93c,	// (0x00027254) list_single_cale_day_pane_fp

0xc93c,	// (0x00027254) list_single_graphic_heading_pane_fp_ParamLimits

0xc93c,	// (0x00027254) list_single_graphic_heading_pane_fp

0xc93c,	// (0x00027254) list_single_graphic_pane_fp_ParamLimits

0xc93c,	// (0x00027254) list_single_graphic_pane_fp

0xc93c,	// (0x00027254) list_single_heading_pane_fp_ParamLimits

0xc93c,	// (0x00027254) list_single_heading_pane_fp

0xc93c,	// (0x00027254) list_single_pane_fp_ParamLimits

0xc93c,	// (0x00027254) list_single_pane_fp

0xc951,	// (0x00027269) list_single_pane_fp_g1_ParamLimits

0xc951,	// (0x00027269) list_single_pane_fp_g1

0x5754,	// (0x0002006c) list_single_pane_fp_g2_ParamLimits

0x5754,	// (0x0002006c) list_single_pane_fp_g2

0x5760,	// (0x00020078) list_single_pane_fp_g3_ParamLimits

0x5760,	// (0x00020078) list_single_pane_fp_g3

0xc95d,	// (0x00027275) list_single_pane_fp_g4_ParamLimits

0xc95d,	// (0x00027275) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x0002a47d) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x0002a47d) list_single_pane_fp_g

0x5774,	// (0x0002008c) list_single_pane_fp_t1_ParamLimits

0x5774,	// (0x0002008c) list_single_pane_fp_t1

0x578b,	// (0x000200a3) list_single_graphic_pane_fp_g1_ParamLimits

0x578b,	// (0x000200a3) list_single_graphic_pane_fp_g1

0xc951,	// (0x00027269) list_single_graphic_pane_fp_g2_ParamLimits

0xc951,	// (0x00027269) list_single_graphic_pane_fp_g2

0x5754,	// (0x0002006c) list_single_graphic_pane_fp_g3_ParamLimits

0x5754,	// (0x0002006c) list_single_graphic_pane_fp_g3

0x5760,	// (0x00020078) list_single_graphic_pane_fp_g4_ParamLimits

0x5760,	// (0x00020078) list_single_graphic_pane_fp_g4

0xc95d,	// (0x00027275) list_single_graphic_pane_fp_g5_ParamLimits

0xc95d,	// (0x00027275) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x0002a486) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002a486) list_single_graphic_pane_fp_g

0x5797,	// (0x000200af) list_single_graphic_pane_fp_t1_ParamLimits

0x5797,	// (0x000200af) list_single_graphic_pane_fp_t1

0x578b,	// (0x000200a3) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x578b,	// (0x000200a3) list_single_graphic_heading_pane_fp_g1

0xc951,	// (0x00027269) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc951,	// (0x00027269) list_single_graphic_heading_pane_fp_g2

0x5754,	// (0x0002006c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5754,	// (0x0002006c) list_single_graphic_heading_pane_fp_g3

0x5760,	// (0x00020078) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5760,	// (0x00020078) list_single_graphic_heading_pane_fp_g4

0xc95d,	// (0x00027275) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc95d,	// (0x00027275) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0002a486) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002a486) list_single_graphic_heading_pane_fp_g

0x57ad,	// (0x000200c5) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x57ad,	// (0x000200c5) list_single_graphic_heading_pane_fp_t1

0x57c3,	// (0x000200db) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x57c3,	// (0x000200db) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x0002a491) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x0002a491) list_single_graphic_heading_pane_fp_t

0x57d5,	// (0x000200ed) list_single_cale_day_pane_fp_g1_ParamLimits

0x57d5,	// (0x000200ed) list_single_cale_day_pane_fp_g1

0xc969,	// (0x00027281) list_single_cale_day_pane_fp_g2_ParamLimits

0xc969,	// (0x00027281) list_single_cale_day_pane_fp_g2

0x580d,	// (0x00020125) list_single_cale_day_pane_fp_g3_ParamLimits

0x580d,	// (0x00020125) list_single_cale_day_pane_fp_g3

0x5835,	// (0x0002014d) list_single_cale_day_pane_fp_g4_ParamLimits

0x5835,	// (0x0002014d) list_single_cale_day_pane_fp_g4

0x5859,	// (0x00020171) list_single_cale_day_pane_fp_g5_ParamLimits

0x5859,	// (0x00020171) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x0002a496) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x0002a496) list_single_cale_day_pane_fp_g

0x587d,	// (0x00020195) list_single_cale_day_pane_fp_t1_ParamLimits

0x587d,	// (0x00020195) list_single_cale_day_pane_fp_t1

0x58a3,	// (0x000201bb) list_single_cale_day_pane_fp_t2_ParamLimits

0x58a3,	// (0x000201bb) list_single_cale_day_pane_fp_t2

0x58bc,	// (0x000201d4) list_single_cale_day_pane_fp_t3_ParamLimits

0x58bc,	// (0x000201d4) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x0002a4a1) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x0002a4a1) list_single_cale_day_pane_fp_t

0xc951,	// (0x00027269) list_empty_pane_fp_g1_ParamLimits

0xc951,	// (0x00027269) list_empty_pane_fp_g1

0x58d5,	// (0x000201ed) list_empty_pane_fp_t1

0x58e3,	// (0x000201fb) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x0002a4a8) list_empty_pane_fp_t

0xc951,	// (0x00027269) list_single_heading_pane_fp_g1_ParamLimits

0xc951,	// (0x00027269) list_single_heading_pane_fp_g1

0x5754,	// (0x0002006c) list_single_heading_pane_fp_g2_ParamLimits

0x5754,	// (0x0002006c) list_single_heading_pane_fp_g2

0x5760,	// (0x00020078) list_single_heading_pane_fp_g3_ParamLimits

0x5760,	// (0x00020078) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x0002a4ad) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0002a4ad) list_single_heading_pane_fp_g

0x58f1,	// (0x00020209) list_single_heading_pane_fp_t1_ParamLimits

0x58f1,	// (0x00020209) list_single_heading_pane_fp_t1

0x5903,	// (0x0002021b) list_single_heading_pane_fp_t2_ParamLimits

0x5903,	// (0x0002021b) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0002a4b4) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0002a4b4) list_single_heading_pane_fp_t

0x89d6,	// (0x000232ee) aid_size_cell_fast

0x8161,	// (0x00022a79) soft_indicator_pane_cp1_t1

0x8a13,	// (0x0002332b) cell_app_pane_cp2_ParamLimits

0x8a13,	// (0x0002332b) cell_app_pane_cp2

0x6f8b,	// (0x000218a3) fep_hwr_candidate_drop_down_list_pane

0x1fc3,	// (0x0001c8db) fep_hwr_candidate_pane_g3_ParamLimits

0x1fc3,	// (0x0001c8db) fep_hwr_candidate_pane_g3

0x1fd0,	// (0x0001c8e8) fep_hwr_candidate_pane_g4_ParamLimits

0x1fd0,	// (0x0001c8e8) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x0002a428) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x0002a428) fep_hwr_candidate_pane_g

0xc418,	// (0x00026d30) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc418,	// (0x00026d30) fep_vkb_candidate_drop_down_list_pane

0xc829,	// (0x00027141) fep_vkb_candidate_pane_g3

0xc831,	// (0x00027149) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0002a455) fep_vkb_candidate_pane_g

0xc531,	// (0x00026e49) cell_hwr_candidate_pane_g1_ParamLimits

0xc848,	// (0x00027160) cell_hwr_candidate_pane_g3_ParamLimits

0xc848,	// (0x00027160) cell_hwr_candidate_pane_g3

0xc869,	// (0x00027181) cell_hwr_candidate_pane_g4_ParamLimits

0xc869,	// (0x00027181) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x0002a46f) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x0002a46f) cell_hwr_candidate_pane_g

0xc88a,	// (0x000271a2) cell_vkb_candidate_pane_g3_ParamLimits

0xc88a,	// (0x000271a2) cell_vkb_candidate_pane_g3

0xc8a5,	// (0x000271bd) cell_vkb_candidate_pane_g4_ParamLimits

0xc8a5,	// (0x000271bd) cell_vkb_candidate_pane_g4

0xc975,	// (0x0002728d) cell_app_pane_cp2_g1_ParamLimits

0xc975,	// (0x0002728d) cell_app_pane_cp2_g1

0xc993,	// (0x000272ab) cell_app_pane_cp2_g2_ParamLimits

0xc993,	// (0x000272ab) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x0002a4b9) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x0002a4b9) cell_app_pane_cp2_g

0xc99f,	// (0x000272b7) cell_app_pane_cp2_t1_ParamLimits

0xc99f,	// (0x000272b7) cell_app_pane_cp2_t1

0x87d7,	// (0x000230ef) grid_highlight_pane_cp1_ParamLimits

0x87d7,	// (0x000230ef) grid_highlight_pane_cp1

0x71c7,	// (0x00021adf) cell_hwr_candidate_pane_cp1_ParamLimits

0x71c7,	// (0x00021adf) cell_hwr_candidate_pane_cp1

0xc531,	// (0x00026e49) fep_hwr_candidate_drop_down_list_pane_g1

0xc9b1,	// (0x000272c9) fep_hwr_candidate_drop_down_list_pane_g2

0xc9be,	// (0x000272d6) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0002a4be) fep_hwr_candidate_drop_down_list_pane_g

0x71e6,	// (0x00021afe) fep_hwr_candidate_drop_down_list_scroll_pane

0x71ef,	// (0x00021b07) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x71ef,	// (0x00021b07) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x71fc,	// (0x00021b14) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x71fc,	// (0x00021b14) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7209,	// (0x00021b21) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7209,	// (0x00021b21) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc88a,	// (0x000271a2) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc88a,	// (0x000271a2) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc8a5,	// (0x000271bd) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc8a5,	// (0x000271bd) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7216,	// (0x00021b2e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7216,	// (0x00021b2e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7231,	// (0x00021b49) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7231,	// (0x00021b49) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x724c,	// (0x00021b64) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x724c,	// (0x00021b64) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x0002a4c5) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x0002a4c5) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9cb,	// (0x000272e3) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9cb,	// (0x000272e3) cell_vkb_candidate_pane_cp1

0xc531,	// (0x00026e49) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc531,	// (0x00026e49) fep_vkb_candidate_drop_down_list_pane_g1

0xc9b1,	// (0x000272c9) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc9b1,	// (0x000272c9) fep_vkb_candidate_drop_down_list_pane_g2

0xc9be,	// (0x000272d6) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc9be,	// (0x000272d6) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0002a4be) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba6,	// (0x0002a4be) fep_vkb_candidate_drop_down_list_pane_g

0xc9eb,	// (0x00027303) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9eb,	// (0x00027303) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9f8,	// (0x00027310) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9f8,	// (0x00027310) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca05,	// (0x0002731d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca05,	// (0x0002731d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca11,	// (0x00027329) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca11,	// (0x00027329) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc848,	// (0x00027160) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc848,	// (0x00027160) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc869,	// (0x00027181) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc869,	// (0x00027181) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca1d,	// (0x00027335) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca1d,	// (0x00027335) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca3e,	// (0x00027356) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca3e,	// (0x00027356) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca5f,	// (0x00027377) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca5f,	// (0x00027377) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0002a4d6) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0002a4d6) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7e92,	// (0x000227aa) title_pane_g1_ParamLimits

0x7e9f,	// (0x000227b7) title_pane_g2_ParamLimits

0xf54e,	// (0x00029e66) title_pane_g_ParamLimits

0x8e47,	// (0x0002375f) aid_call2_pane

0x8e4f,	// (0x00023767) aid_call_pane

0x8e57,	// (0x0002376f) popup_clock_analogue_window_g1

0x8e57,	// (0x0002376f) popup_clock_analogue_window_g2

0x612d,	// (0x00020a45) popup_clock_analogue_window_g3

0x6136,	// (0x00020a4e) popup_clock_analogue_window_g4

0x7e7e,	// (0x00022796) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0002a010) popup_clock_analogue_window_g

0x613e,	// (0x00020a56) popup_clock_analogue_window_t1

0x614c,	// (0x00020a64) clock_digital_number_pane_ParamLimits

0x614c,	// (0x00020a64) clock_digital_number_pane

0x6158,	// (0x00020a70) clock_digital_number_pane_cp02_ParamLimits

0x6158,	// (0x00020a70) clock_digital_number_pane_cp02

0x6164,	// (0x00020a7c) clock_digital_number_pane_cp03_ParamLimits

0x6164,	// (0x00020a7c) clock_digital_number_pane_cp03

0x6170,	// (0x00020a88) clock_digital_number_pane_cp04_ParamLimits

0x6170,	// (0x00020a88) clock_digital_number_pane_cp04

0x617c,	// (0x00020a94) clock_digital_separator_pane_ParamLimits

0x617c,	// (0x00020a94) clock_digital_separator_pane

0x6188,	// (0x00020aa0) popup_clock_digital_window_t1_ParamLimits

0x6188,	// (0x00020aa0) popup_clock_digital_window_t1

0x7e7e,	// (0x00022796) clock_digital_number_pane_g1

0x7e7e,	// (0x00022796) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0002a01b) clock_digital_number_pane_g

0x7e7e,	// (0x00022796) clock_digital_separator_pane_g1

0x7e7e,	// (0x00022796) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0002a01b) clock_digital_separator_pane_g

0x97d6,	// (0x000240ee) aid_fill_nsta_ParamLimits

0x991c,	// (0x00024234) indicator_nsta_pane_ParamLimits

0x9a95,	// (0x000243ad) popup_clock_analogue_window

0x9a95,	// (0x000243ad) popup_clock_digital_window

0x7f68,	// (0x00022880) grid_indicator_nsta_pane_ParamLimits

0xbcdb,	// (0x000265f3) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0002a3a8) clock_nsta_pane_t

0x60f1,	// (0x00020a09) aid_size_max_handle

0x60fb,	// (0x00020a13) aid_size_min_handle

0x946a,	// (0x00023d82) editor_scroll_pane

0xca7a,	// (0x00027392) ex_editor_pane

0x8944,	// (0x0002325c) scroll_pane_cp13

0x8776,	// (0x0002308e) scroll_pane_cp14

0x8e86,	// (0x0002379e) scroll_pane_cp36

0x8eb2,	// (0x000237ca) list_single_graphic_hl_pane_cp2_ParamLimits

0x8eb2,	// (0x000237ca) list_single_graphic_hl_pane_cp2

0xb281,	// (0x00025b99) list_single_graphic_hl_pane_ParamLimits

0xb281,	// (0x00025b99) list_single_graphic_hl_pane

0x5919,	// (0x00020231) aid_size_min_hl_cp1

0xca82,	// (0x0002739a) list_highlight_pane_cp34_ParamLimits

0xca82,	// (0x0002739a) list_highlight_pane_cp34

0xca93,	// (0x000273ab) list_single_graphic_hl_pane_g1_ParamLimits

0xca93,	// (0x000273ab) list_single_graphic_hl_pane_g1

0x5922,	// (0x0002023a) list_single_graphic_hl_pane_g2_ParamLimits

0x5922,	// (0x0002023a) list_single_graphic_hl_pane_g2

0x5922,	// (0x0002023a) list_single_graphic_hl_pane_g3_ParamLimits

0x5922,	// (0x0002023a) list_single_graphic_hl_pane_g3

0x592e,	// (0x00020246) list_single_graphic_hl_pane_g4_ParamLimits

0x592e,	// (0x00020246) list_single_graphic_hl_pane_g4

0x593a,	// (0x00020252) list_single_graphic_hl_pane_g5_ParamLimits

0x593a,	// (0x00020252) list_single_graphic_hl_pane_g5

0x0004,

0xfbcf,	// (0x0002a4e7) list_single_graphic_hl_pane_g_ParamLimits

0xfbcf,	// (0x0002a4e7) list_single_graphic_hl_pane_g

0x594e,	// (0x00020266) list_single_graphic_hl_pane_t1_ParamLimits

0x594e,	// (0x00020266) list_single_graphic_hl_pane_t1

0xcaa0,	// (0x000273b8) aid_size_min_hl_cp2

0xcaa9,	// (0x000273c1) list_highlight_pane_cp34_cp2_ParamLimits

0xcaa9,	// (0x000273c1) list_highlight_pane_cp34_cp2

0xca93,	// (0x000273ab) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca93,	// (0x000273ab) list_single_graphic_hl_pane_g1_cp2

0xcab6,	// (0x000273ce) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcab6,	// (0x000273ce) list_single_graphic_hl_pane_g2_cp2

0xcac2,	// (0x000273da) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcac2,	// (0x000273da) list_single_graphic_hl_pane_g3_cp2

0xb9cf,	// (0x000262e7) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xb9cf,	// (0x000262e7) list_single_graphic_hl_pane_g4_cp2

0xcad0,	// (0x000273e8) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcad0,	// (0x000273e8) list_single_graphic_hl_pane_g5_cp2

0x643c,	// (0x00020d54) control_pane_g4_ParamLimits

0x643c,	// (0x00020d54) control_pane_g4

0x97b4,	// (0x000240cc) bg_popup_sub_pane_cp10_ParamLimits

0xc2bd,	// (0x00026bd5) list_choice_list_pane_ParamLimits

0xc2cc,	// (0x00026be4) scroll_pane_cp23

0x81f1,	// (0x00022b09) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8f6,	// (0x0002720e) list_preview_fixed_pane_ParamLimits

0xc90c,	// (0x00027224) list_preview_fixed_pane_cp_ParamLimits

0xc90c,	// (0x00027224) list_preview_fixed_pane_cp

0xc918,	// (0x00027230) popup_preview_fixed_window_g1_ParamLimits

0xc918,	// (0x00027230) popup_preview_fixed_window_g1

0xc924,	// (0x0002723c) popup_preview_fixed_window_g2_ParamLimits

0xc924,	// (0x0002723c) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x0002a476) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x0002a476) popup_preview_fixed_window_g

0x6065,	// (0x0002097d) aid_navi_side_left_pane_ParamLimits

0x607a,	// (0x00020992) aid_navi_side_right_pane_ParamLimits

0x6092,	// (0x000209aa) navi_icon_pane_stacon_ParamLimits

0x60a6,	// (0x000209be) navi_navi_pane_stacon_ParamLimits

0x6092,	// (0x000209aa) navi_text_pane_stacon_ParamLimits

0x7e74,	// (0x0002278c) main_text_info_pane

0xcafa,	// (0x00027412) listscroll_text_info_pane

0xcb02,	// (0x0002741a) list_text_info_pane_ParamLimits

0xcb02,	// (0x0002741a) list_text_info_pane

0xcb11,	// (0x00027429) scroll_pane_cp24_ParamLimits

0xcb11,	// (0x00027429) scroll_pane_cp24

0xcb2f,	// (0x00027447) list_text_info_pane_t1_ParamLimits

0xcb2f,	// (0x00027447) list_text_info_pane_t1

0x6590,	// (0x00020ea8) popup_fast_swap2_window_ParamLimits

0x6590,	// (0x00020ea8) popup_fast_swap2_window

0xcb60,	// (0x00027478) aid_size_cell_fast2

0x7e74,	// (0x0002278c) bg_popup_window_pane_cp17

0xa124,	// (0x00024a3c) heading_pane_cp2

0x8440,	// (0x00022d58) listscroll_fast2_pane

0xcb6a,	// (0x00027482) grid_fast2_pane

0xcb74,	// (0x0002748c) listscroll_fast2_pane_g1

0xcb7c,	// (0x00027494) listscroll_fast2_pane_g2

0x0001,

0xfbda,	// (0x0002a4f2) listscroll_fast2_pane_g

0x8944,	// (0x0002325c) scroll_pane_cp26

0xcb86,	// (0x0002749e) cell_fast2_pane_ParamLimits

0xcb86,	// (0x0002749e) cell_fast2_pane

0xcb9b,	// (0x000274b3) cell_fast2_pane_g1

0xcba4,	// (0x000274bc) cell_fast2_pane_g2

0xcbad,	// (0x000274c5) cell_fast2_pane_g3

0x0002,

0xfbdf,	// (0x0002a4f7) cell_fast2_pane_g

0x8533,	// (0x00022e4b) grid_highlight_pane_cp9

0x8548,	// (0x00022e60) main_eswt_pane_ParamLimits

0x8548,	// (0x00022e60) main_eswt_pane

0xcb26,	// (0x0002743e) list_single_text_info_pane

0xcbb5,	// (0x000274cd) eswt_ctrl_button_pane

0xcbb5,	// (0x000274cd) eswt_ctrl_canvas_pane

0xcbbd,	// (0x000274d5) eswt_ctrl_combo_pane

0xcbb5,	// (0x000274cd) eswt_ctrl_default_pane

0xcbb5,	// (0x000274cd) eswt_ctrl_label_pane

0xcbc5,	// (0x000274dd) eswt_ctrl_wait_pane

0xcbcd,	// (0x000274e5) eswt_shell_pane

0x7e74,	// (0x0002278c) listscroll_eswt_app_pane

0xcbed,	// (0x00027505) popup_eswt_tasktip_window_ParamLimits

0xcbed,	// (0x00027505) popup_eswt_tasktip_window

0x9d32,	// (0x0002464a) bg_popup_window_pane_cp18

0xcbfe,	// (0x00027516) eswt_control_pane_g1_ParamLimits

0xcbfe,	// (0x00027516) eswt_control_pane_g1

0xcc0b,	// (0x00027523) eswt_control_pane_g2_ParamLimits

0xcc0b,	// (0x00027523) eswt_control_pane_g2

0xcc18,	// (0x00027530) eswt_control_pane_g3_ParamLimits

0xcc18,	// (0x00027530) eswt_control_pane_g3

0xcc25,	// (0x0002753d) eswt_control_pane_g4_ParamLimits

0xcc25,	// (0x0002753d) eswt_control_pane_g4

0x0003,

0xfbe6,	// (0x0002a4fe) eswt_control_pane_g_ParamLimits

0xfbe6,	// (0x0002a4fe) eswt_control_pane_g

0x87d7,	// (0x000230ef) bg_button_pane_ParamLimits

0x87d7,	// (0x000230ef) bg_button_pane

0x8548,	// (0x00022e60) common_borders_pane_copy2_ParamLimits

0x8548,	// (0x00022e60) common_borders_pane_copy2

0xcc32,	// (0x0002754a) control_button_pane_g1_ParamLimits

0xcc32,	// (0x0002754a) control_button_pane_g1

0xcc3e,	// (0x00027556) control_button_pane_g2_ParamLimits

0xcc3e,	// (0x00027556) control_button_pane_g2

0xcc4a,	// (0x00027562) control_button_pane_g3_ParamLimits

0xcc4a,	// (0x00027562) control_button_pane_g3

0x0002,

0xfbef,	// (0x0002a507) control_button_pane_g_ParamLimits

0xfbef,	// (0x0002a507) control_button_pane_g

0xcc5e,	// (0x00027576) control_button_pane_t1

0xcc6c,	// (0x00027584) control_button_pane_t2

0x0001,

0xfbf6,	// (0x0002a50e) control_button_pane_t

0x9cbe,	// (0x000245d6) bg_button_pane_g1

0x9cc6,	// (0x000245de) bg_button_pane_g2

0x9cce,	// (0x000245e6) bg_button_pane_g3

0x9cd6,	// (0x000245ee) bg_button_pane_g4

0x9cde,	// (0x000245f6) bg_button_pane_g5

0x9ce6,	// (0x000245fe) bg_button_pane_g6

0x9cee,	// (0x00024606) bg_button_pane_g7

0x9cf6,	// (0x0002460e) bg_button_pane_g8

0x9cfe,	// (0x00024616) bg_button_pane_g9

0x0008,

0xf85f,	// (0x0002a177) bg_button_pane_g

0xc278,	// (0x00026b90) common_borders_pane_ParamLimits

0xc278,	// (0x00026b90) common_borders_pane

0xcbfe,	// (0x00027516) eswt_control_pane_g1_copy1_ParamLimits

0xcbfe,	// (0x00027516) eswt_control_pane_g1_copy1

0xcc0b,	// (0x00027523) eswt_control_pane_g2_copy1_ParamLimits

0xcc0b,	// (0x00027523) eswt_control_pane_g2_copy1

0xcc18,	// (0x00027530) eswt_control_pane_g3_copy1_ParamLimits

0xcc18,	// (0x00027530) eswt_control_pane_g3_copy1

0xcc25,	// (0x0002753d) eswt_control_pane_g4_copy1_ParamLimits

0xcc25,	// (0x0002753d) eswt_control_pane_g4_copy1

0xc2b3,	// (0x00026bcb) bg_eswt_ctrl_canvas_pane_g1

0xc278,	// (0x00026b90) common_borders_pane_cp2_ParamLimits

0xc278,	// (0x00026b90) common_borders_pane_cp2

0xc278,	// (0x00026b90) common_borders_pane_cp3_ParamLimits

0xc278,	// (0x00026b90) common_borders_pane_cp3

0xcc7a,	// (0x00027592) separator_horizontal_pane

0xcc82,	// (0x0002759a) separator_vertical_pane

0xcbfe,	// (0x00027516) eswt_control_pane_g1_copy2_ParamLimits

0xcbfe,	// (0x00027516) eswt_control_pane_g1_copy2

0xcc0b,	// (0x00027523) eswt_control_pane_g2_copy2_ParamLimits

0xcc0b,	// (0x00027523) eswt_control_pane_g2_copy2

0xcc18,	// (0x00027530) eswt_control_pane_g3_copy2_ParamLimits

0xcc18,	// (0x00027530) eswt_control_pane_g3_copy2

0xcc25,	// (0x0002753d) eswt_control_pane_g4_copy2_ParamLimits

0xcc25,	// (0x0002753d) eswt_control_pane_g4_copy2

0x7e74,	// (0x0002278c) common_borders_pane_cp4

0xcc8b,	// (0x000275a3) separator_horizontal_pane_g1

0xcc94,	// (0x000275ac) separator_horizontal_pane_g2

0xcc9d,	// (0x000275b5) separator_horizontal_pane_g3

0x0002,

0xfbfb,	// (0x0002a513) separator_horizontal_pane_g

0xcbfe,	// (0x00027516) eswt_control_pane_g1_copy3_ParamLimits

0xcbfe,	// (0x00027516) eswt_control_pane_g1_copy3

0xcc0b,	// (0x00027523) eswt_control_pane_g2_copy3_ParamLimits

0xcc0b,	// (0x00027523) eswt_control_pane_g2_copy3

0xcc18,	// (0x00027530) eswt_control_pane_g3_copy3_ParamLimits

0xcc18,	// (0x00027530) eswt_control_pane_g3_copy3

0xcc25,	// (0x0002753d) eswt_control_pane_g4_copy3_ParamLimits

0xcc25,	// (0x0002753d) eswt_control_pane_g4_copy3

0x7e74,	// (0x0002278c) common_borders_pane_cp5

0xcca6,	// (0x000275be) separator_vertical_pane_g1

0xccaf,	// (0x000275c7) separator_vertical_pane_g2

0xccb8,	// (0x000275d0) separator_vertical_pane_g3

0x0002,

0xfc02,	// (0x0002a51a) separator_vertical_pane_g

0xcbfe,	// (0x00027516) eswt_control_pane_g1_copy4_ParamLimits

0xcbfe,	// (0x00027516) eswt_control_pane_g1_copy4

0xcc0b,	// (0x00027523) eswt_control_pane_g2_copy4_ParamLimits

0xcc0b,	// (0x00027523) eswt_control_pane_g2_copy4

0xcc18,	// (0x00027530) eswt_control_pane_g3_copy4_ParamLimits

0xcc18,	// (0x00027530) eswt_control_pane_g3_copy4

0xcc25,	// (0x0002753d) eswt_control_pane_g4_copy4_ParamLimits

0xcc25,	// (0x0002753d) eswt_control_pane_g4_copy4

0xccc1,	// (0x000275d9) eswt_ctrl_combo_button_pane

0xccc9,	// (0x000275e1) eswt_ctrl_input_pane

0xccd1,	// (0x000275e9) popup_choice_list_window_cp70

0xccd9,	// (0x000275f1) eswt_ctrl_input_pane_t1

0x7e74,	// (0x0002278c) input_focus_pane_cp70

0xc278,	// (0x00026b90) bg_button_pane_cp70_ParamLimits

0xc278,	// (0x00026b90) bg_button_pane_cp70

0xcce7,	// (0x000275ff) eswt_ctrl_combo_button_pane_g1

0xccef,	// (0x00027607) wait_bar_pane_cp70

0x9d32,	// (0x0002464a) bg_popup_window_pane_cp70_ParamLimits

0x9d32,	// (0x0002464a) bg_popup_window_pane_cp70

0xccf7,	// (0x0002760f) popup_eswt_tasktip_window_t1

0xcd0d,	// (0x00027625) wait_bar_pane_cp71_ParamLimits

0xcd0d,	// (0x00027625) wait_bar_pane_cp71

0xcd19,	// (0x00027631) grid_eswt_app_pane

0x8c69,	// (0x00023581) scroll_pane_cp70

0xcd22,	// (0x0002763a) cell_eswt_app_pane_ParamLimits

0xcd22,	// (0x0002763a) cell_eswt_app_pane

0xcd52,	// (0x0002766a) cell_eswt_app_pane_g1_ParamLimits

0xcd52,	// (0x0002766a) cell_eswt_app_pane_g1

0xcd81,	// (0x00027699) cell_eswt_app_pane_g2_ParamLimits

0xcd81,	// (0x00027699) cell_eswt_app_pane_g2

0x0001,

0xfc09,	// (0x0002a521) cell_eswt_app_pane_g_ParamLimits

0xfc09,	// (0x0002a521) cell_eswt_app_pane_g

0xcdaa,	// (0x000276c2) cell_eswt_app_pane_t1_ParamLimits

0xcdaa,	// (0x000276c2) cell_eswt_app_pane_t1

0xcddc,	// (0x000276f4) grid_highlight_pane_cp70_ParamLimits

0xcddc,	// (0x000276f4) grid_highlight_pane_cp70

0x933f,	// (0x00023c57) set_content_pane_g1

0x9715,	// (0x0002402d) status_small_volume_pane

0x7267,	// (0x00021b7f) status_small_volume_pane_g1

0x726f,	// (0x00021b87) volume_small2_pane

0x7278,	// (0x00021b90) volume_small2_pane_g1

0x7281,	// (0x00021b99) volume_small2_pane_g2

0x728a,	// (0x00021ba2) volume_small2_pane_g3

0x7293,	// (0x00021bab) volume_small2_pane_g4

0x729c,	// (0x00021bb4) volume_small2_pane_g5

0x72a5,	// (0x00021bbd) volume_small2_pane_g6

0x72ae,	// (0x00021bc6) volume_small2_pane_g7

0x72b7,	// (0x00021bcf) volume_small2_pane_g8

0x72c0,	// (0x00021bd8) volume_small2_pane_g9

0x72c9,	// (0x00021be1) volume_small2_pane_g10

0x0009,

0xfc0e,	// (0x0002a526) volume_small2_pane_g

0xc679,	// (0x00026f91) fep_vkb_top_text_pane_g1_ParamLimits

0xc694,	// (0x00026fac) fep_vkb_top_text_pane_t1_ParamLimits

0xc930,	// (0x00027248) popup_preview_fixed_window_g3_ParamLimits

0xc930,	// (0x00027248) popup_preview_fixed_window_g3

0x6a3f,	// (0x00021357) popup_toolbar_trans_pane

0xb088,	// (0x000259a0) aid_height_set_list_ParamLimits

0xb099,	// (0x000259b1) aid_size_parent_ParamLimits

0x97b4,	// (0x000240cc) list_highlight_pane_cp2_ParamLimits

0x933f,	// (0x00023c57) set_content_pane_g1_ParamLimits

0xb29d,	// (0x00025bb5) list_single_image_pane_ParamLimits

0xb29d,	// (0x00025bb5) list_single_image_pane

0xcde8,	// (0x00027700) aid_size_cell_image_ParamLimits

0xcde8,	// (0x00027700) aid_size_cell_image

0xcdf5,	// (0x0002770d) grid_single_image_pane_ParamLimits

0xcdf5,	// (0x0002770d) grid_single_image_pane

0x9e90,	// (0x000247a8) list_single_image_pane_g1_ParamLimits

0x9e90,	// (0x000247a8) list_single_image_pane_g1

0xce01,	// (0x00027719) list_single_image_pane_g2_ParamLimits

0xce01,	// (0x00027719) list_single_image_pane_g2

0x0001,

0xfc23,	// (0x0002a53b) list_single_image_pane_g_ParamLimits

0xfc23,	// (0x0002a53b) list_single_image_pane_g

0xce15,	// (0x0002772d) list_single_image_pane_t1_ParamLimits

0xce15,	// (0x0002772d) list_single_image_pane_t1

0xce2b,	// (0x00027743) cell_image_list_pane_ParamLimits

0xce2b,	// (0x00027743) cell_image_list_pane

0xce3f,	// (0x00027757) cell_image_list_pane_g1

0xce48,	// (0x00027760) cell_image_list_pane_g2

0x0001,

0xfc28,	// (0x0002a540) cell_image_list_pane_g

0xce51,	// (0x00027769) aid_size_cell_tb_trans_pane

0x87d7,	// (0x000230ef) bg_tb_trans_pane

0xce63,	// (0x0002777b) grid_tb_trans_pane

0x9cbe,	// (0x000245d6) bg_tb_trans_pane_g1

0x9cc6,	// (0x000245de) bg_tb_trans_pane_g2

0x9cce,	// (0x000245e6) bg_tb_trans_pane_g3

0x9cd6,	// (0x000245ee) bg_tb_trans_pane_g4

0x9cde,	// (0x000245f6) bg_tb_trans_pane_g5

0x9cf6,	// (0x0002460e) bg_tb_trans_pane_g6

0x9cfe,	// (0x00024616) bg_tb_trans_pane_g7

0x9ce6,	// (0x000245fe) bg_tb_trans_pane_g8

0x9cee,	// (0x00024606) bg_tb_trans_pane_g9

0x0008,

0xfc2d,	// (0x0002a545) bg_tb_trans_pane_g

0xce77,	// (0x0002778f) cell_toolbar_trans_pane_ParamLimits

0xce77,	// (0x0002778f) cell_toolbar_trans_pane

0xc2b3,	// (0x00026bcb) cell_toolbar_trans_pane_g1

0xbe97,	// (0x000267af) list_form2_midp_pane_t1

0xbea5,	// (0x000267bd) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x0002a3ee) list_form2_midp_pane_t

0xbeb3,	// (0x000267cb) scroll_pane_cp51_ParamLimits

0xc06f,	// (0x00026987) form2_midp_wait_pane_g1

0xc078,	// (0x00026990) form2_midp_wait_pane_g2

0xc081,	// (0x00026999) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x0002a403) form2_midp_wait_pane_g

0x7f68,	// (0x00022880) list_highlight_pane_cp21_ParamLimits

0xc0cd,	// (0x000269e5) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0dc,	// (0x000269f4) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5328,	// (0x0001fc40) list_single_2graphic_im_pane_ParamLimits

0x5328,	// (0x0001fc40) list_single_2graphic_im_pane

0xce9d,	// (0x000277b5) list_single_2graphic_im_pane_g1_ParamLimits

0xce9d,	// (0x000277b5) list_single_2graphic_im_pane_g1

0xceae,	// (0x000277c6) list_single_2graphic_im_pane_g2_ParamLimits

0xceae,	// (0x000277c6) list_single_2graphic_im_pane_g2

0xceba,	// (0x000277d2) list_single_2graphic_im_pane_g3_ParamLimits

0xceba,	// (0x000277d2) list_single_2graphic_im_pane_g3

0x0003,

0xfc40,	// (0x0002a558) list_single_2graphic_im_pane_g_ParamLimits

0xfc40,	// (0x0002a558) list_single_2graphic_im_pane_g

0xceda,	// (0x000277f2) list_single_2graphic_im_pane_t1_ParamLimits

0xceda,	// (0x000277f2) list_single_2graphic_im_pane_t1

0xc93c,	// (0x00027254) list_single_graphic_2heading_pane_fp_ParamLimits

0xc93c,	// (0x00027254) list_single_graphic_2heading_pane_fp

0x578b,	// (0x000200a3) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x578b,	// (0x000200a3) list_single_graphic_2heading_pane_fp_g1

0xc951,	// (0x00027269) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc951,	// (0x00027269) list_single_graphic_2heading_pane_fp_g2

0x5754,	// (0x0002006c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5754,	// (0x0002006c) list_single_graphic_2heading_pane_fp_g3

0x5760,	// (0x00020078) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5760,	// (0x00020078) list_single_graphic_2heading_pane_fp_g4

0xc95d,	// (0x00027275) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc95d,	// (0x00027275) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0002a486) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002a486) list_single_graphic_2heading_pane_fp_g

0x5964,	// (0x0002027c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5964,	// (0x0002027c) list_single_graphic_2heading_pane_fp_t1

0x57c3,	// (0x000200db) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x57c3,	// (0x000200db) list_single_graphic_2heading_pane_fp_t2

0x597a,	// (0x00020292) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x597a,	// (0x00020292) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc49,	// (0x0002a561) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc49,	// (0x0002a561) list_single_graphic_2heading_pane_fp_t

0xc33f,	// (0x00026c57) fep_hwr_write_pane_g5_ParamLimits

0xc33f,	// (0x00026c57) fep_hwr_write_pane_g5

0xc34b,	// (0x00026c63) fep_hwr_write_pane_g6_ParamLimits

0xc34b,	// (0x00026c63) fep_hwr_write_pane_g6

0xcbcd,	// (0x000274e5) eswt_shell_pane_ParamLimits

0x9d32,	// (0x0002464a) bg_popup_window_pane_cp18_ParamLimits

0xafe1,	// (0x000258f9) heading_pane_cp70

0xccf7,	// (0x0002760f) popup_eswt_tasktip_window_t1_ParamLimits

0x982b,	// (0x00024143) aid_touch_tab_arrow_left

0x983a,	// (0x00024152) aid_touch_tab_arrow_right

0x7eb0,	// (0x000227c8) title_pane_g3_ParamLimits

0x7eb0,	// (0x000227c8) title_pane_g3

0x8796,	// (0x000230ae) set_value_pane_g1

0x6a3f,	// (0x00021357) popup_toolbar_trans_pane_ParamLimits

0xce51,	// (0x00027769) aid_size_cell_tb_trans_pane_ParamLimits

0x87d7,	// (0x000230ef) bg_tb_trans_pane_ParamLimits

0xce63,	// (0x0002777b) grid_tb_trans_pane_ParamLimits

0x81f1,	// (0x00022b09) cont_note_pane_ParamLimits

0x81f1,	// (0x00022b09) cont_note_pane

0x8548,	// (0x00022e60) cont_snote2_single_text_pane_ParamLimits

0x8548,	// (0x00022e60) cont_snote2_single_text_pane

0x8548,	// (0x00022e60) cont_snote2_single_graphic_pane_ParamLimits

0x8548,	// (0x00022e60) cont_snote2_single_graphic_pane

0xa33f,	// (0x00024c57) cont_note_wait_pane_ParamLimits

0xa33f,	// (0x00024c57) cont_note_wait_pane

0xa33f,	// (0x00024c57) cont_note_image_pane_ParamLimits

0xa33f,	// (0x00024c57) cont_note_image_pane

0xcf0b,	// (0x00027823) popup_note2_window_g1_ParamLimits

0xcf0b,	// (0x00027823) popup_note2_window_g1

0xcf3c,	// (0x00027854) popup_note2_window_t1_ParamLimits

0xcf3c,	// (0x00027854) popup_note2_window_t1

0xcf81,	// (0x00027899) popup_note2_window_t2_ParamLimits

0xcf81,	// (0x00027899) popup_note2_window_t2

0xcfc6,	// (0x000278de) popup_note2_window_t3_ParamLimits

0xcfc6,	// (0x000278de) popup_note2_window_t3

0xd00b,	// (0x00027923) popup_note2_window_t4_ParamLimits

0xd00b,	// (0x00027923) popup_note2_window_t4

0x8275,	// (0x00022b8d) popup_note2_window_t5_ParamLimits

0x8275,	// (0x00022b8d) popup_note2_window_t5

0x0004,

0xfc55,	// (0x0002a56d) popup_note2_window_t_ParamLimits

0xfc55,	// (0x0002a56d) popup_note2_window_t

0xd03a,	// (0x00027952) popup_note2_image_window_g1_ParamLimits

0xd03a,	// (0x00027952) popup_note2_image_window_g1

0xd046,	// (0x0002795e) popup_note2_image_window_g2_ParamLimits

0xd046,	// (0x0002795e) popup_note2_image_window_g2

0x0001,

0xfc60,	// (0x0002a578) popup_note2_image_window_g_ParamLimits

0xfc60,	// (0x0002a578) popup_note2_image_window_g

0xd058,	// (0x00027970) popup_note2_image_window_t1_ParamLimits

0xd058,	// (0x00027970) popup_note2_image_window_t1

0xd070,	// (0x00027988) popup_note2_image_window_t2_ParamLimits

0xd070,	// (0x00027988) popup_note2_image_window_t2

0xd088,	// (0x000279a0) popup_note2_image_window_t3_ParamLimits

0xd088,	// (0x000279a0) popup_note2_image_window_t3

0x0002,

0xfc65,	// (0x0002a57d) popup_note2_image_window_t_ParamLimits

0xfc65,	// (0x0002a57d) popup_note2_image_window_t

0xa34d,	// (0x00024c65) popup_note2_wait_window_g1_ParamLimits

0xa34d,	// (0x00024c65) popup_note2_wait_window_g1

0xd0a4,	// (0x000279bc) popup_note2_wait_window_g2_ParamLimits

0xd0a4,	// (0x000279bc) popup_note2_wait_window_g2

0xa365,	// (0x00024c7d) popup_note2_wait_window_g3_ParamLimits

0xa365,	// (0x00024c7d) popup_note2_wait_window_g3

0x0002,

0xfc6c,	// (0x0002a584) popup_note2_wait_window_g_ParamLimits

0xfc6c,	// (0x0002a584) popup_note2_wait_window_g

0xd0b0,	// (0x000279c8) popup_note2_wait_window_t1_ParamLimits

0xd0b0,	// (0x000279c8) popup_note2_wait_window_t1

0xd0ce,	// (0x000279e6) popup_note2_wait_window_t2_ParamLimits

0xd0ce,	// (0x000279e6) popup_note2_wait_window_t2

0xd0ec,	// (0x00027a04) popup_note2_wait_window_t3_ParamLimits

0xd0ec,	// (0x00027a04) popup_note2_wait_window_t3

0xd0fe,	// (0x00027a16) popup_note2_wait_window_t4_ParamLimits

0xd0fe,	// (0x00027a16) popup_note2_wait_window_t4

0x0003,

0xfc73,	// (0x0002a58b) popup_note2_wait_window_t_ParamLimits

0xfc73,	// (0x0002a58b) popup_note2_wait_window_t

0xd110,	// (0x00027a28) wait_bar2_pane_ParamLimits

0xd110,	// (0x00027a28) wait_bar2_pane

0xd128,	// (0x00027a40) popup_snote2_single_text_window_g1_ParamLimits

0xd128,	// (0x00027a40) popup_snote2_single_text_window_g1

0xd150,	// (0x00027a68) popup_snote2_single_text_window_t1_ParamLimits

0xd150,	// (0x00027a68) popup_snote2_single_text_window_t1

0xd19c,	// (0x00027ab4) popup_snote2_single_text_window_t2_ParamLimits

0xd19c,	// (0x00027ab4) popup_snote2_single_text_window_t2

0xd1e8,	// (0x00027b00) popup_snote2_single_text_window_t3_ParamLimits

0xd1e8,	// (0x00027b00) popup_snote2_single_text_window_t3

0xd229,	// (0x00027b41) popup_snote2_single_text_window_t4_ParamLimits

0xd229,	// (0x00027b41) popup_snote2_single_text_window_t4

0xd25f,	// (0x00027b77) popup_snote2_single_text_window_t5_ParamLimits

0xd25f,	// (0x00027b77) popup_snote2_single_text_window_t5

0x0004,

0xfc7c,	// (0x0002a594) popup_snote2_single_text_window_t_ParamLimits

0xfc7c,	// (0x0002a594) popup_snote2_single_text_window_t

0xd28a,	// (0x00027ba2) popup_snote2_single_graphic_window_g1_ParamLimits

0xd28a,	// (0x00027ba2) popup_snote2_single_graphic_window_g1

0xd2b2,	// (0x00027bca) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2b2,	// (0x00027bca) popup_snote2_single_graphic_window_g2

0x0001,

0xfc87,	// (0x0002a59f) popup_snote2_single_graphic_window_g_ParamLimits

0xfc87,	// (0x0002a59f) popup_snote2_single_graphic_window_g

0xd2da,	// (0x00027bf2) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2da,	// (0x00027bf2) popup_snote2_single_graphic_window_t1

0xd326,	// (0x00027c3e) popup_snote2_single_graphic_window_t2_ParamLimits

0xd326,	// (0x00027c3e) popup_snote2_single_graphic_window_t2

0xd1e8,	// (0x00027b00) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1e8,	// (0x00027b00) popup_snote2_single_graphic_window_t3

0xd229,	// (0x00027b41) popup_snote2_single_graphic_window_t4_ParamLimits

0xd229,	// (0x00027b41) popup_snote2_single_graphic_window_t4

0xd25f,	// (0x00027b77) popup_snote2_single_graphic_window_t5_ParamLimits

0xd25f,	// (0x00027b77) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8c,	// (0x0002a5a4) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8c,	// (0x0002a5a4) popup_snote2_single_graphic_window_t

0xbd74,	// (0x0002668c) clock_nsta_pane_cp2_t1

0xbd74,	// (0x0002668c) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0002a3c4) clock_nsta_pane_cp2_t

0x4f0a,	// (0x0001f822) form_field_data_wide_pane_g1_ParamLimits

0x87e5,	// (0x000230fd) form_field_data_wide_pane_g2_ParamLimits

0x87e5,	// (0x000230fd) form_field_data_wide_pane_g2

0x87f1,	// (0x00023109) form_field_data_wide_pane_g3_ParamLimits

0x87f1,	// (0x00023109) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x00029f93) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x00029f93) form_field_data_wide_pane_g

0xbc77,	// (0x0002658f) grid_touch_3_pane_ParamLimits

0xbc77,	// (0x0002658f) grid_touch_3_pane

0xd372,	// (0x00027c8a) cell_touch_3_pane_ParamLimits

0xd372,	// (0x00027c8a) cell_touch_3_pane

0xc2b3,	// (0x00026bcb) cell_touch_3_pane_g1

0xc2b3,	// (0x00026bcb) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x0002a449) cell_touch_3_pane_g

0x82a7,	// (0x00022bbf) cont_query_data_pane

0x82af,	// (0x00022bc7) cont_query_data_pane_cp1

0xd3a0,	// (0x00027cb8) button_value_adjust_pane_cp7

0xd3a8,	// (0x00027cc0) query_popup_pane_cp3

0x8f47,	// (0x0002385f) bg_popup_sub_pane_cp22_ParamLimits

0x61a7,	// (0x00020abf) navi_navi_volume_pane_cp2

0x61c2,	// (0x00020ada) popup_side_volume_key_window_g2

0x61d1,	// (0x00020ae9) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0002a029) popup_side_volume_key_window_g

0x61ee,	// (0x00020b06) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0002a030) popup_side_volume_key_window_t

0x91fe,	// (0x00023b16) popup_side_volume_key_window_ParamLimits

0x4b6b,	// (0x0001f483) list_double_graphic_pane_g4_ParamLimits

0x4b6b,	// (0x0001f483) list_double_graphic_pane_g4

0x5367,	// (0x0001fc7f) list_single_2heading_msg_pane_ParamLimits

0x5367,	// (0x0001fc7f) list_single_2heading_msg_pane

0x599a,	// (0x000202b2) list_single_2heading_msg_pane_g1_ParamLimits

0x599a,	// (0x000202b2) list_single_2heading_msg_pane_g1

0x499a,	// (0x0001f2b2) list_single_2heading_msg_pane_g2_ParamLimits

0x499a,	// (0x0001f2b2) list_single_2heading_msg_pane_g2

0x59a6,	// (0x000202be) list_single_2heading_msg_pane_g3_ParamLimits

0x59a6,	// (0x000202be) list_single_2heading_msg_pane_g3

0x59b2,	// (0x000202ca) list_single_2heading_msg_pane_g4_ParamLimits

0x59b2,	// (0x000202ca) list_single_2heading_msg_pane_g4

0x0003,

0xfc97,	// (0x0002a5af) list_single_2heading_msg_pane_g_ParamLimits

0xfc97,	// (0x0002a5af) list_single_2heading_msg_pane_g

0x59ca,	// (0x000202e2) list_single_2heading_msg_pane_t1_ParamLimits

0x59ca,	// (0x000202e2) list_single_2heading_msg_pane_t1

0x59f2,	// (0x0002030a) list_single_2heading_msg_pane_t2_ParamLimits

0x59f2,	// (0x0002030a) list_single_2heading_msg_pane_t2

0x5a26,	// (0x0002033e) list_single_2heading_msg_pane_t3_ParamLimits

0x5a26,	// (0x0002033e) list_single_2heading_msg_pane_t3

0x5a5f,	// (0x00020377) list_single_2heading_msg_pane_t4_ParamLimits

0x5a5f,	// (0x00020377) list_single_2heading_msg_pane_t4

0x0003,

0xfca0,	// (0x0002a5b8) list_single_2heading_msg_pane_t_ParamLimits

0xfca0,	// (0x0002a5b8) list_single_2heading_msg_pane_t

0x7ebc,	// (0x000227d4) title_pane_g4_ParamLimits

0x7ebc,	// (0x000227d4) title_pane_g4

0x5fb6,	// (0x000208ce) title_pane_stacon_g3_ParamLimits

0x5fb6,	// (0x000208ce) title_pane_stacon_g3

0xcece,	// (0x000277e6) list_single_2graphic_im_pane_g4_ParamLimits

0xcece,	// (0x000277e6) list_single_2graphic_im_pane_g4

0xad9e,	// (0x000256b6) popup_side_volume_key_window_cp

0xb5b9,	// (0x00025ed1) main_idle_act2_pane_t1

0x6b31,	// (0x00021449) toolbar_button_pane_g10

0x8740,	// (0x00023058) popup_toolbar_window_cp1

0xbd65,	// (0x0002667d) clock_nsta_pane_cp_t1

0xbd65,	// (0x0002667d) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x0002a3bf) clock_nsta_pane_cp_t

0x61a7,	// (0x00020abf) navi_navi_volume_pane_cp2_ParamLimits

0x61b6,	// (0x00020ace) popup_side_volume_key_window_g1_ParamLimits

0x61c2,	// (0x00020ada) popup_side_volume_key_window_g2_ParamLimits

0x61d1,	// (0x00020ae9) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0002a029) popup_side_volume_key_window_g_ParamLimits

0x6f77,	// (0x0002188f) fep_hwr_aid_pane

0x1fb5,	// (0x0001c8cd) bg_fep_hwr_top_pane_g4_ParamLimits

0xc30f,	// (0x00026c27) fep_hwr_top_pane_g1_ParamLimits

0xc321,	// (0x00026c39) fep_hwr_top_pane_g2_ParamLimits

0x7030,	// (0x00021948) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x0002a414) fep_hwr_top_pane_g_ParamLimits

0x7045,	// (0x0002195d) fep_hwr_top_text_pane_ParamLimits

0xab61,	// (0x00025479) aid_touch_tab_arrow_arrow_2

0xab6a,	// (0x00025482) aid_touch_tab_arrow_left_2

0x6f8b,	// (0x000218a3) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6fc2,	// (0x000218da) fep_hwr_prediction_pane

0xc481,	// (0x00026d99) fep_vkb_prediction_pane

0xc585,	// (0x00026e9d) fep_vkb_side_pane_g3_ParamLimits

0xc585,	// (0x00026e9d) fep_vkb_side_pane_g3

0xc531,	// (0x00026e49) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc9b1,	// (0x000272c9) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc9be,	// (0x000272d6) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x0002a4be) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd3cd,	// (0x00027ce5) fep_hwr_prediction_pane_g1

0x72d2,	// (0x00021bea) fep_hwr_prediction_pane_g2

0x72da,	// (0x00021bf2) fep_hwr_prediction_pane_g3

0x72e2,	// (0x00021bfa) fep_hwr_prediction_pane_g4

0x0003,

0xfca9,	// (0x0002a5c1) fep_hwr_prediction_pane_g

0xd3cd,	// (0x00027ce5) fep_vkb_prediction_pane_g1

0xd3d7,	// (0x00027cef) fep_vkb_prediction_pane_g2

0xd3df,	// (0x00027cf7) fep_vkb_prediction_pane_g3

0xd3e7,	// (0x00027cff) fep_vkb_prediction_pane_g4

0x0003,

0xfcb2,	// (0x0002a5ca) fep_vkb_prediction_pane_g

0x6df7,	// (0x0002170f) slider_set_pane_g3

0x6e0b,	// (0x00021723) slider_set_pane_g4

0x6e23,	// (0x0002173b) slider_set_pane_g5

0x6df7,	// (0x0002170f) slider_set_pane_g6

0x6e39,	// (0x00021751) slider_set_pane_g7

0xb1fe,	// (0x00025b16) slider_form_pane_g3

0xb207,	// (0x00025b1f) slider_form_pane_g4

0xb20f,	// (0x00025b27) slider_form_pane_g5

0xb1fe,	// (0x00025b16) slider_form_pane_g6

0xb217,	// (0x00025b2f) slider_form_pane_g7

0xb863,	// (0x0002617b) slider_set_pane_vc_g3

0xb86c,	// (0x00026184) slider_set_pane_vc_g4

0xb875,	// (0x0002618d) slider_set_pane_vc_g5

0xb863,	// (0x0002617b) slider_set_pane_vc_g6

0xb87e,	// (0x00026196) slider_set_pane_vc_g7

0xba4a,	// (0x00026362) slider_form_pane_vc_g1

0xba53,	// (0x0002636b) slider_form_pane_vc_g2

0xba5c,	// (0x00026374) slider_form_pane_vc_g3

0xba4a,	// (0x00026362) slider_form_pane_vc_g4

0xba65,	// (0x0002637d) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x0002a391) slider_form_pane_vc_g

0x7e74,	// (0x0002278c) main_idle_act3_pane

0xd3ef,	// (0x00027d07) ai3_links_pane

0xd3f8,	// (0x00027d10) popup_ai3_data_window_ParamLimits

0xd3f8,	// (0x00027d10) popup_ai3_data_window

0x7e74,	// (0x0002278c) grid_ai3_links_pane

0xd412,	// (0x00027d2a) cell_ai3_links_pane_ParamLimits

0xd412,	// (0x00027d2a) cell_ai3_links_pane

0xd42a,	// (0x00027d42) bg_popup_sub_pane_cp11

0xd437,	// (0x00027d4f) cell_ai3_links_pane_g1

0x7e74,	// (0x0002278c) bg_popup_sub_pane_cp12

0xd45c,	// (0x00027d74) heading_ai3_data_pane

0xd464,	// (0x00027d7c) list_ai3_gene_pane

0xd470,	// (0x00027d88) popup_ai3_data_window_g1

0xd478,	// (0x00027d90) heading_ai3_data_pane_g1

0xd480,	// (0x00027d98) heading_ai3_data_pane_t1

0xd48e,	// (0x00027da6) list_double_ai3_gene_pane_ParamLimits

0xd48e,	// (0x00027da6) list_double_ai3_gene_pane

0xd49b,	// (0x00027db3) list_single_ai3_gene_pane_ParamLimits

0xd49b,	// (0x00027db3) list_single_ai3_gene_pane

0xc278,	// (0x00026b90) list_highlight_pane_cp7_ParamLimits

0xc278,	// (0x00026b90) list_highlight_pane_cp7

0xd4a8,	// (0x00027dc0) list_single_a13_gene_pane_t1_ParamLimits

0xd4a8,	// (0x00027dc0) list_single_a13_gene_pane_t1

0xd4bf,	// (0x00027dd7) list_single_ai3_gene_pane_g1

0xd4c8,	// (0x00027de0) list_single_ai3_gene_pane_g2

0x0001,

0xfcbb,	// (0x0002a5d3) list_single_ai3_gene_pane_g

0xd4d0,	// (0x00027de8) list_double_ai3_gene_pane_g1_ParamLimits

0xd4d0,	// (0x00027de8) list_double_ai3_gene_pane_g1

0xd4dc,	// (0x00027df4) list_double_ai3_gene_pane_t1_ParamLimits

0xd4dc,	// (0x00027df4) list_double_ai3_gene_pane_t1

0xd4f8,	// (0x00027e10) list_double_ai3_gene_pane_t2_ParamLimits

0xd4f8,	// (0x00027e10) list_double_ai3_gene_pane_t2

0xd50e,	// (0x00027e26) list_double_ai3_gene_pane_t3_ParamLimits

0xd50e,	// (0x00027e26) list_double_ai3_gene_pane_t3

0x0002,

0xfcc0,	// (0x0002a5d8) list_double_ai3_gene_pane_t_ParamLimits

0xfcc0,	// (0x0002a5d8) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5990,	// (0x000202a8) aid_size_min_col_2

0xd3b9,	// (0x00027cd1) aid_size_min_msg_ParamLimits

0xd3b9,	// (0x00027cd1) aid_size_min_msg

0xc685,	// (0x00026f9d) fep_vkb_top_text_pane_g2_ParamLimits

0xc685,	// (0x00026f9d) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x0002a444) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x0002a444) fep_vkb_top_text_pane_g

0x7e74,	// (0x0002278c) main_hc_apps_shell_pane

0xd52b,	// (0x00027e43) grid_hc_apps_pane_ParamLimits

0xd52b,	// (0x00027e43) grid_hc_apps_pane

0xd53a,	// (0x00027e52) list_hc_apps_pane

0xd542,	// (0x00027e5a) scroll_pane_cp37_ParamLimits

0xd542,	// (0x00027e5a) scroll_pane_cp37

0xd54e,	// (0x00027e66) cell_hc_apps_pane_ParamLimits

0xd54e,	// (0x00027e66) cell_hc_apps_pane

0xd5fc,	// (0x00027f14) cell_hc_apps_pane_g1_ParamLimits

0xd5fc,	// (0x00027f14) cell_hc_apps_pane_g1

0xd62d,	// (0x00027f45) cell_hc_apps_pane_g2_ParamLimits

0xd62d,	// (0x00027f45) cell_hc_apps_pane_g2

0xd649,	// (0x00027f61) cell_hc_apps_pane_g3_ParamLimits

0xd649,	// (0x00027f61) cell_hc_apps_pane_g3

0x0002,

0xfcc7,	// (0x0002a5df) cell_hc_apps_pane_g_ParamLimits

0xfcc7,	// (0x0002a5df) cell_hc_apps_pane_g

0xd66b,	// (0x00027f83) cell_hc_apps_pane_t1_ParamLimits

0xd66b,	// (0x00027f83) cell_hc_apps_pane_t1

0x81f1,	// (0x00022b09) grid_highlight_pane_cp10_ParamLimits

0x81f1,	// (0x00022b09) grid_highlight_pane_cp10

0xd6ab,	// (0x00027fc3) list_single_hc_apps_pane_ParamLimits

0xd6ab,	// (0x00027fc3) list_single_hc_apps_pane

0xd707,	// (0x0002801f) list_single_hc_apps_pane_g1

0x5a84,	// (0x0002039c) list_single_hc_apps_pane_g2

0x0001,

0xfcce,	// (0x0002a5e6) list_single_hc_apps_pane_g

0x5a9d,	// (0x000203b5) list_single_hc_apps_pane_g2_copy1

0x5ab9,	// (0x000203d1) list_single_hc_apps_pane_t1

0x7f68,	// (0x00022880) bg_set_opt_pane_cp_ParamLimits

0x5ede,	// (0x000207f6) setting_slider_pane_t1_ParamLimits

0x5ef7,	// (0x0002080f) setting_slider_pane_t2_ParamLimits

0x5f11,	// (0x00020829) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00029e76) setting_slider_pane_t_ParamLimits

0x5f29,	// (0x00020841) slider_set_pane_ParamLimits

0x6450,	// (0x00020d68) control_pane_g5_ParamLimits

0x6450,	// (0x00020d68) control_pane_g5

0xb04d,	// (0x00025965) slider_set_pane_g1_ParamLimits

0x6deb,	// (0x00021703) slider_set_pane_g2_ParamLimits

0x6df7,	// (0x0002170f) slider_set_pane_g3_ParamLimits

0x6e0b,	// (0x00021723) slider_set_pane_g4_ParamLimits

0x6e23,	// (0x0002173b) slider_set_pane_g5_ParamLimits

0x6df7,	// (0x0002170f) slider_set_pane_g6_ParamLimits

0x6e39,	// (0x00021751) slider_set_pane_g7_ParamLimits

0xf95d,	// (0x0002a275) slider_set_pane_g_ParamLimits

0x92ea,	// (0x00023c02) navi_icon_text_pane_ParamLimits

0x97ec,	// (0x00024104) aid_fill_nsta_2_ParamLimits

0x982b,	// (0x00024143) aid_touch_tab_arrow_left_ParamLimits

0x983a,	// (0x00024152) aid_touch_tab_arrow_right_ParamLimits

0x98a7,	// (0x000241bf) clock_nsta_pane_ParamLimits

0xab43,	// (0x0002545b) navi_icon_pane_g1_ParamLimits

0xab4f,	// (0x00025467) navi_text_pane_t1_ParamLimits

0xbe71,	// (0x00026789) navi_icon_text_pane_g1_ParamLimits

0xbe7d,	// (0x00026795) navi_icon_text_pane_t1_ParamLimits

0xd707,	// (0x0002801f) list_single_hc_apps_pane_g1_ParamLimits

0x5a84,	// (0x0002039c) list_single_hc_apps_pane_g2_ParamLimits

0xfcce,	// (0x0002a5e6) list_single_hc_apps_pane_g_ParamLimits

0x5a9d,	// (0x000203b5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5ab9,	// (0x000203d1) list_single_hc_apps_pane_t1_ParamLimits

0x5de8,	// (0x00020700) popup_toolbar2_fixed_window_ParamLimits

0x5de8,	// (0x00020700) popup_toolbar2_fixed_window

0x6a35,	// (0x0002134d) popup_toolbar2_float_window

0x7e74,	// (0x0002278c) bg_popup_sub_pane_cp27

0xd720,	// (0x00028038) grid_toolbar2_float_pane

0x7e74,	// (0x0002278c) bg_popup_sub_pane_cp26

0xd720,	// (0x00028038) grid_toolbar2_fixed_pane

0xd728,	// (0x00028040) cell_toolbar2_fixed_pane_ParamLimits

0xd728,	// (0x00028040) cell_toolbar2_fixed_pane

0xd738,	// (0x00028050) cell_toolbar2_fixed_pane_g1

0xd741,	// (0x00028059) toolbar2_fixed_button_pane

0x9cbe,	// (0x000245d6) toolbar2_fixed_button_pane_g1

0x9cc6,	// (0x000245de) toolbar2_fixed_button_pane_g2

0x9cce,	// (0x000245e6) toolbar2_fixed_button_pane_g3

0x9cd6,	// (0x000245ee) toolbar2_fixed_button_pane_g4

0x9cde,	// (0x000245f6) toolbar2_fixed_button_pane_g5

0x9ce6,	// (0x000245fe) toolbar2_fixed_button_pane_g6

0x9cee,	// (0x00024606) toolbar2_fixed_button_pane_g7

0x9cf6,	// (0x0002460e) toolbar2_fixed_button_pane_g8

0x9cfe,	// (0x00024616) toolbar2_fixed_button_pane_g9

0x0008,

0xf85f,	// (0x0002a177) toolbar2_fixed_button_pane_g

0xd749,	// (0x00028061) cell_toolbar2_float_pane_ParamLimits

0xd749,	// (0x00028061) cell_toolbar2_float_pane

0xd75a,	// (0x00028072) cell_toolbar2_float_pane_g1

0xd741,	// (0x00028059) toolbar2_fixed_button_pane_cp

0xc3e1,	// (0x00026cf9) fep_vkb_accented_list_pane_ParamLimits

0xc3e1,	// (0x00026cf9) fep_vkb_accented_list_pane

0x7193,	// (0x00021aab) bg_popup_fep_shadow_pane_g9

0x946a,	// (0x00023d82) bg_popup_fep_shadow_pane_cp3

0x892b,	// (0x00023243) list_accented_list_pane

0xd763,	// (0x0002807b) list_single_accented_list_pane_ParamLimits

0xd763,	// (0x0002807b) list_single_accented_list_pane

0x946a,	// (0x00023d82) list_highlight_pane_cp10

0xd774,	// (0x0002808c) list_single_accented_list_pane_t1

0x6985,	// (0x0002129d) popup_slider_window_ParamLimits

0x6985,	// (0x0002129d) popup_slider_window

0xd3b0,	// (0x00027cc8) aid_indentation_list_msg

0xd82e,	// (0x00028146) bg_popup_window_pane_cp19

0xd898,	// (0x000281b0) popup_slider_window_g1

0xd8b4,	// (0x000281cc) popup_slider_window_g2

0xd8d0,	// (0x000281e8) popup_slider_window_g3

0x0005,

0x0048,	// (0x0001a960) popup_slider_window_g

0xd92c,	// (0x00028244) popup_slider_window_t1

0xd9a0,	// (0x000282b8) small_volume_slider_vertical_pane

0xc2b3,	// (0x00026bcb) small_volume_slider_vertical_pane_g1

0xc2b3,	// (0x00026bcb) small_volume_slider_vertical_pane_g2

0xd9bc,	// (0x000282d4) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd3,	// (0x0002a5eb) small_volume_slider_vertical_pane_g

0x5baa,	// (0x000204c2) area_side_right_pane_ParamLimits

0x5baa,	// (0x000204c2) area_side_right_pane

0x72ea,	// (0x00021c02) aid_size_side_button_ParamLimits

0x72ea,	// (0x00021c02) aid_size_side_button

0x72fe,	// (0x00021c16) grid_sctrl_middle_pane_ParamLimits

0x72fe,	// (0x00021c16) grid_sctrl_middle_pane

0x731d,	// (0x00021c35) sctrl_sk_bottom_pane

0x732e,	// (0x00021c46) sctrl_sk_top_pane

0x7340,	// (0x00021c58) aid_touch_sctrl_top

0x81f1,	// (0x00022b09) bg_sctrl_sk_pane_ParamLimits

0x81f1,	// (0x00022b09) bg_sctrl_sk_pane

0x734d,	// (0x00021c65) sctrl_sk_top_pane_g1

0x735a,	// (0x00021c72) sctrl_sk_top_pane_t1

0x7340,	// (0x00021c58) aid_touch_sctrl_bottom

0x81f1,	// (0x00022b09) bg_sctrl_sk_pane_cp_ParamLimits

0x81f1,	// (0x00022b09) bg_sctrl_sk_pane_cp

0x7375,	// (0x00021c8d) sctrl_sk_bottom_pane_g1

0x735a,	// (0x00021c72) sctrl_sk_bottom_pane_t1

0x737e,	// (0x00021c96) cell_sctrl_middle_pane_ParamLimits

0x737e,	// (0x00021c96) cell_sctrl_middle_pane

0x7399,	// (0x00021cb1) aid_touch_sctrl_middle_ParamLimits

0x7399,	// (0x00021cb1) aid_touch_sctrl_middle

0x87d7,	// (0x000230ef) bg_sctrl_middle_pane_ParamLimits

0x87d7,	// (0x000230ef) bg_sctrl_middle_pane

0xc531,	// (0x00026e49) cell_sctrl_middle_pane_g1_ParamLimits

0xc531,	// (0x00026e49) cell_sctrl_middle_pane_g1

0x73ab,	// (0x00021cc3) cell_sctrl_middle_pane_g2_ParamLimits

0x73ab,	// (0x00021cc3) cell_sctrl_middle_pane_g2

0x0001,

0xfcdf,	// (0x0002a5f7) cell_sctrl_middle_pane_g_ParamLimits

0xfcdf,	// (0x0002a5f7) cell_sctrl_middle_pane_g

0x9cbe,	// (0x000245d6) bg_sctrl_middle_pane_g1

0x9cc6,	// (0x000245de) bg_sctrl_middle_pane_g2

0x9cce,	// (0x000245e6) bg_sctrl_middle_pane_g3

0x9cd6,	// (0x000245ee) bg_sctrl_middle_pane_g4

0x9cde,	// (0x000245f6) bg_sctrl_middle_pane_g5

0x9ce6,	// (0x000245fe) bg_sctrl_middle_pane_g6

0x9cee,	// (0x00024606) bg_sctrl_middle_pane_g7

0x9cf6,	// (0x0002460e) bg_sctrl_middle_pane_g8

0x0007,

0xfce4,	// (0x0002a5fc) bg_sctrl_middle_pane_g

0x9cfe,	// (0x00024616) bg_sctrl_middle_pane_g8_copy1

0x9cbe,	// (0x000245d6) bg_sctrl_sk_pane_g1

0x9cc6,	// (0x000245de) bg_sctrl_sk_pane_g2

0x9cce,	// (0x000245e6) bg_sctrl_sk_pane_g3

0x0008,

0xf85f,	// (0x0002a177) bg_sctrl_sk_pane_g

0x8706,	// (0x0002301e) aid_size_touch_scroll_bar

0x9cd6,	// (0x000245ee) bg_sctrl_sk_pane_g4

0x9cde,	// (0x000245f6) bg_sctrl_sk_pane_g5

0x9ce6,	// (0x000245fe) bg_sctrl_sk_pane_g6

0x9cee,	// (0x00024606) bg_sctrl_sk_pane_g7

0x9cf6,	// (0x0002460e) bg_sctrl_sk_pane_g8

0x9cfe,	// (0x00024616) bg_sctrl_sk_pane_g9

0x65ee,	// (0x00020f06) popup_fep_china_hwr2_fs_candidate_window

0x65f8,	// (0x00020f10) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x65f8,	// (0x00020f10) popup_fep_china_hwr2_fs_control_window

0xc531,	// (0x00026e49) sctrl_sk_top_pane_g2

0x0001,

0xfcda,	// (0x0002a5f2) sctrl_sk_top_pane_g

0xd9c5,	// (0x000282dd) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9c5,	// (0x000282dd) aid_fep_china_hwr2_fs_cell

0xd9d7,	// (0x000282ef) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9d7,	// (0x000282ef) bg_popup_fep_shadow_pane_cp4

0xd9ee,	// (0x00028306) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9ee,	// (0x00028306) bg_popup_fep_shadow_pane_cp5

0xda00,	// (0x00028318) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda00,	// (0x00028318) popup_fep_china_hwr2_fs_control_bar_grid

0xda10,	// (0x00028328) popup_fep_china_hwr2_fs_control_funtion_grid

0xda18,	// (0x00028330) aid_fep_china_hwr2_fs_candi_cell

0x7e74,	// (0x0002278c) bg_popup_fep_shadow_pane_cp6

0xda22,	// (0x0002833a) popup_fep_china_hwr2_fs_candidate_grid

0xda2c,	// (0x00028344) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda2c,	// (0x00028344) cell_fep_china_hwr2_fs_funtion_grid

0xc2b3,	// (0x00026bcb) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda44,	// (0x0002835c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda44,	// (0x0002835c) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda52,	// (0x0002836a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda52,	// (0x0002836a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0x007c,	// (0x0001a994) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0x007c,	// (0x0001a994) cell_fep_china_hwr2_fs_funtion_grid_g

0xda68,	// (0x00028380) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda68,	// (0x00028380) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda7d,	// (0x00028395) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda7d,	// (0x00028395) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x0081,	// (0x0001a999) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x0081,	// (0x0001a999) cell_fep_china_hwr2_fs_funtion_grid_t

0xda99,	// (0x000283b1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdaa1,	// (0x000283b9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdaa9,	// (0x000283c1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0x0086,	// (0x0001a99e) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdab1,	// (0x000283c9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdab1,	// (0x000283c9) cell_fep_china_hwr2_fs_candidate_grid

0xdaca,	// (0x000283e2) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdad2,	// (0x000283ea) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2b3,	// (0x00026bcb) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2b3,	// (0x00026bcb) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x0002a449) cell_fep_china_hwr2_fs_candidate_grid_g

0xdada,	// (0x000283f2) cell_fep_china_hwr2_fs_candidate_grid_t1

0x98b4,	// (0x000241cc) clock_nsta_pane_cp_24_ParamLimits

0x98b4,	// (0x000241cc) clock_nsta_pane_cp_24

0x9932,	// (0x0002424a) indicator_nsta_pane_cp_24_ParamLimits

0x9932,	// (0x0002424a) indicator_nsta_pane_cp_24

0xa9bf,	// (0x000252d7) heading_pane_g1

0x0001,

0xf8c4,	// (0x0002a1dc) heading_pane_g

0xb402,	// (0x00025d1a) grid_sct_catagory_button_pane

0xb432,	// (0x00025d4a) scroll_pane_cp5_ParamLimits

0xbebf,	// (0x000267d7) button_value_adjust_pane_cp5_ParamLimits

0xbebf,	// (0x000267d7) button_value_adjust_pane_cp5

0xbf9e,	// (0x000268b6) form2_midp_time_pane_ParamLimits

0xdae8,	// (0x00028400) cell_sct_catagory_button_pane_ParamLimits

0xdae8,	// (0x00028400) cell_sct_catagory_button_pane

0xc278,	// (0x00026b90) bg_button_pane_cp01_ParamLimits

0xc278,	// (0x00026b90) bg_button_pane_cp01

0xc2b3,	// (0x00026bcb) cell_sct_catagory_button_pane_g1

0x69c4,	// (0x000212dc) popup_tb_extension_window

0xdafa,	// (0x00028412) aid_size_cell_ext_ParamLimits

0xdafa,	// (0x00028412) aid_size_cell_ext

0x81f1,	// (0x00022b09) bg_tb_trans_pane_cp1_ParamLimits

0x81f1,	// (0x00022b09) bg_tb_trans_pane_cp1

0xdb1a,	// (0x00028432) grid_tb_ext_pane_ParamLimits

0xdb1a,	// (0x00028432) grid_tb_ext_pane

0xdb48,	// (0x00028460) cell_tb_ext_pane_ParamLimits

0xdb48,	// (0x00028460) cell_tb_ext_pane

0xdb5f,	// (0x00028477) cell_tb_ext_pane_g1_ParamLimits

0xdb5f,	// (0x00028477) cell_tb_ext_pane_g1

0xdb7c,	// (0x00028494) cell_tb_ext_pane_t1

0x81f1,	// (0x00022b09) list_highlight_pane_cp11_ParamLimits

0x81f1,	// (0x00022b09) list_highlight_pane_cp11

0x5e07,	// (0x0002071f) popup_uni_indicator_window_ParamLimits

0x5e07,	// (0x0002071f) popup_uni_indicator_window

0x87d7,	// (0x000230ef) bg_popup_sub_pane_cp14

0xdb97,	// (0x000284af) list_uniindi_pane

0xdba3,	// (0x000284bb) uniindi_top_pane

0x81f1,	// (0x00022b09) bg_uniindi_top_pane

0xdbc2,	// (0x000284da) uniindi_top_pane_g1

0xdbd8,	// (0x000284f0) uniindi_top_pane_g2

0x0003,

0x008d,	// (0x0001a9a5) uniindi_top_pane_g

0xdc02,	// (0x0002851a) uniindi_top_pane_t1

0xdc2c,	// (0x00028544) list_single_uniindi_pane_ParamLimits

0xdc2c,	// (0x00028544) list_single_uniindi_pane

0xc2b3,	// (0x00026bcb) bg_uniindi_top_pane_g1

0xdc3f,	// (0x00028557) list_single_uniindi_pane_g1

0xdc52,	// (0x0002856a) list_single_uniindi_pane_t1

0x7e74,	// (0x0002278c) control_bg_pane

0xdc77,	// (0x0002858f) bg_sctrl_sk_pane_cp1

0xdc80,	// (0x00028598) bg_sctrl_sk_pane_cp2

0xdc89,	// (0x000285a1) control_bg_pane_g1

0xdc92,	// (0x000285aa) control_bg_pane_g2

0x0001,

0x0096,	// (0x0001a9ae) control_bg_pane_g

0xbd1a,	// (0x00026632) cell_indicator_nsta_pane_g1_ParamLimits

0xbd28,	// (0x00026640) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x0002a3ad) cell_indicator_nsta_pane_g_ParamLimits

0x5741,	// (0x00020059) form2_midp_time_pane_t1_ParamLimits

0x8548,	// (0x00022e60) main_idle_act4_pane_ParamLimits

0x8548,	// (0x00022e60) main_idle_act4_pane

0x69c4,	// (0x000212dc) popup_tb_extension_window_ParamLimits

0xdb38,	// (0x00028450) tb_ext_find_pane_ParamLimits

0xdb38,	// (0x00028450) tb_ext_find_pane

0xdc9b,	// (0x000285b3) ai_gene_pane_1_cp1

0x95b1,	// (0x00023ec9) ai_gene_pane_2_cp1

0xdca3,	// (0x000285bb) list_single_idle_plugin_calendar_pane

0xdcac,	// (0x000285c4) list_single_idle_plugin_notification_pane

0xdcb5,	// (0x000285cd) list_single_idle_plugin_player_pane

0xdcbe,	// (0x000285d6) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcbe,	// (0x000285d6) list_single_idle_plugin_shortcut_pane

0xdce0,	// (0x000285f8) main_idle_act4_pane_t1

0xdcf2,	// (0x0002860a) main_idle_act4_pane_t2

0x0001,

0x009b,	// (0x0001a9b3) main_idle_act4_pane_t

0xdd04,	// (0x0002861c) middle_sk_idle_act4_pane_ParamLimits

0xdd04,	// (0x0002861c) middle_sk_idle_act4_pane

0xdd1a,	// (0x00028632) popup_clock_digital_analogue_window_cp2

0xdd34,	// (0x0002864c) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd34,	// (0x0002864c) shortcut_wheel_idle_act4_pane

0xc2b3,	// (0x00026bcb) shortcut_wheel_idle_act4_pane_g1

0xc2b3,	// (0x00026bcb) shortcut_wheel_idle_act4_pane_g2

0xc2b3,	// (0x00026bcb) shortcut_wheel_idle_act4_pane_g3

0xc2b3,	// (0x00026bcb) shortcut_wheel_idle_act4_pane_g4

0xc2b3,	// (0x00026bcb) shortcut_wheel_idle_act4_pane_g5

0xdd48,	// (0x00028660) shortcut_wheel_idle_act4_pane_g6

0xdd50,	// (0x00028668) shortcut_wheel_idle_act4_pane_g7

0xdd58,	// (0x00028670) shortcut_wheel_idle_act4_pane_g8

0xdd60,	// (0x00028678) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfcf5,	// (0x0002a60d) shortcut_wheel_idle_act4_pane_g

0xc531,	// (0x00026e49) middle_sk_idle_act4_pane_g1_ParamLimits

0xc531,	// (0x00026e49) middle_sk_idle_act4_pane_g1

0xddc4,	// (0x000286dc) middle_sk_idle_act4_pane_g2_ParamLimits

0xddc4,	// (0x000286dc) middle_sk_idle_act4_pane_g2

0x0001,

0xfd13,	// (0x0002a62b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd13,	// (0x0002a62b) middle_sk_idle_act4_pane_g

0xddd0,	// (0x000286e8) middle_sk_idle_act4_pane_t1_ParamLimits

0xddd0,	// (0x000286e8) middle_sk_idle_act4_pane_t1

0xdded,	// (0x00028705) grid_ai_shortcut_pane_ParamLimits

0xdded,	// (0x00028705) grid_ai_shortcut_pane

0xde06,	// (0x0002871e) list_highlight_pane_cp16_ParamLimits

0xde06,	// (0x0002871e) list_highlight_pane_cp16

0xde13,	// (0x0002872b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde13,	// (0x0002872b) list_single_idle_plugin_shortcut_pane_g1

0xde1f,	// (0x00028737) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde1f,	// (0x00028737) list_single_idle_plugin_shortcut_pane_g2

0xde37,	// (0x0002874f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde37,	// (0x0002874f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x00c8,	// (0x0001a9e0) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x00c8,	// (0x0001a9e0) list_single_idle_plugin_shortcut_pane_g

0xde4a,	// (0x00028762) cell_ai_shortcut_pane_ParamLimits

0xde4a,	// (0x00028762) cell_ai_shortcut_pane

0xde6e,	// (0x00028786) cell_ai_shortcut_pane_g1_ParamLimits

0xde6e,	// (0x00028786) cell_ai_shortcut_pane_g1

0xdc9b,	// (0x000285b3) ai_gene_pane_1_cp2

0xde90,	// (0x000287a8) ai_gene_pane_2_cp2

0xde98,	// (0x000287b0) list_highlight_pane_cp15

0xdea1,	// (0x000287b9) list_single_idle_plugin_calendar_pane_g1

0xde98,	// (0x000287b0) list_highlight_pane_cp17

0xdea9,	// (0x000287c1) list_single_idle_plugin_calendar_pane_g1_copy1

0xdeb1,	// (0x000287c9) list_single_idle_plugin_player_pane_g1

0xb65b,	// (0x00025f73) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd18,	// (0x0002a630) list_single_idle_plugin_player_pane_g

0xdeb9,	// (0x000287d1) list_single_idle_plugin_player_pane_t1

0xdec7,	// (0x000287df) list_single_idle_plugin_player_pane_t2

0xded5,	// (0x000287ed) list_single_idle_plugin_player_pane_t3

0xdee3,	// (0x000287fb) list_single_idle_plugin_player_pane_t4

0x0003,

0x00d4,	// (0x0001a9ec) list_single_idle_plugin_player_pane_t

0xdef1,	// (0x00028809) wait_bar_pane_cp15

0xdef9,	// (0x00028811) grid_ai_notification_pane

0xb65b,	// (0x00025f73) list_single_idle_plugin_notification_pane_g1

0xdf02,	// (0x0002881a) cell_ai_notification_pane_ParamLimits

0xdf02,	// (0x0002881a) cell_ai_notification_pane

0xdf0f,	// (0x00028827) cell_ai_notification_pane_g1

0xdf17,	// (0x0002882f) cell_ai_notification_pane_t1

0xdf25,	// (0x0002883d) tb_ext_find_button_pane

0xdf2d,	// (0x00028845) tb_ext_find_pane_g1

0xdf35,	// (0x0002884d) tb_ext_find_pane_t1

0x8e57,	// (0x0002376f) tb_ext_find_button_pane_g1

0xdf43,	// (0x0002885b) tb_ext_find_button_pane_g2

0x0001,

0xfd1d,	// (0x0002a635) tb_ext_find_button_pane_g

0xdce0,	// (0x000285f8) main_idle_act4_pane_t1_ParamLimits

0xdcf2,	// (0x0002860a) main_idle_act4_pane_t2_ParamLimits

0x009b,	// (0x0001a9b3) main_idle_act4_pane_t_ParamLimits

0xdd1a,	// (0x00028632) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd28,	// (0x00028640) sat_plugin_idle_act4_pane_ParamLimits

0xdd28,	// (0x00028640) sat_plugin_idle_act4_pane

0xdf4c,	// (0x00028864) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf4c,	// (0x00028864) sat_plugin_idle_act4_pane_t1

0xdf5f,	// (0x00028877) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf5f,	// (0x00028877) sat_plugin_idle_act4_pane_t2

0xdf72,	// (0x0002888a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf72,	// (0x0002888a) sat_plugin_idle_act4_pane_t3

0xdf85,	// (0x0002889d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf85,	// (0x0002889d) sat_plugin_idle_act4_pane_t4

0x0003,

0x00e2,	// (0x0001a9fa) sat_plugin_idle_act4_pane_t_ParamLimits

0x00e2,	// (0x0001a9fa) sat_plugin_idle_act4_pane_t

0x5d42,	// (0x0002065a) popup_battery_window_ParamLimits

0x5d42,	// (0x0002065a) popup_battery_window

0x81f1,	// (0x00022b09) bg_popup_sub_pane_cp25_ParamLimits

0x81f1,	// (0x00022b09) bg_popup_sub_pane_cp25

0xdf98,	// (0x000288b0) popup_battery_window_g1_ParamLimits

0xdf98,	// (0x000288b0) popup_battery_window_g1

0xdfa4,	// (0x000288bc) popup_battery_window_t1_ParamLimits

0xdfa4,	// (0x000288bc) popup_battery_window_t1

0xdfb6,	// (0x000288ce) popup_battery_window_t2_ParamLimits

0xdfb6,	// (0x000288ce) popup_battery_window_t2

0x0001,

0x00eb,	// (0x0001aa03) popup_battery_window_t_ParamLimits

0x00eb,	// (0x0001aa03) popup_battery_window_t

0x947e,	// (0x00023d96) midp_canvas_pane_ParamLimits

0x94f5,	// (0x00023e0d) midp_keypad_pane_ParamLimits

0x94f5,	// (0x00023e0d) midp_keypad_pane

0x97b4,	// (0x000240cc) main_midp_pane_ParamLimits

0xbd83,	// (0x0002669b) signal_pane_g2_cp_ParamLimits

0xdfd3,	// (0x000288eb) aid_size_cell_midp_keypad_ParamLimits

0xdfd3,	// (0x000288eb) aid_size_cell_midp_keypad

0xdfed,	// (0x00028905) midp_keyp_game_grid_pane_ParamLimits

0xdfed,	// (0x00028905) midp_keyp_game_grid_pane

0xe00d,	// (0x00028925) midp_keyp_rocker_pane_ParamLimits

0xe00d,	// (0x00028925) midp_keyp_rocker_pane

0xe046,	// (0x0002895e) midp_keyp_sk_left_pane_ParamLimits

0xe046,	// (0x0002895e) midp_keyp_sk_left_pane

0xe0a0,	// (0x000289b8) midp_keyp_sk_right_pane_ParamLimits

0xe0a0,	// (0x000289b8) midp_keyp_sk_right_pane

0x7e74,	// (0x0002278c) bg_button_pane_cp03

0xe0fa,	// (0x00028a12) midp_keyp_sk_left_pane_g1

0x7e74,	// (0x0002278c) bg_button_pane_cp04

0xe0fa,	// (0x00028a12) midp_keyp_sk_right_pane_g1

0xc2b3,	// (0x00026bcb) midp_keyp_rocker_pane_g1

0xe103,	// (0x00028a1b) keyp_game_cell_pane_ParamLimits

0xe103,	// (0x00028a1b) keyp_game_cell_pane

0x7e74,	// (0x0002278c) bg_button_pane_cp02

0xe116,	// (0x00028a2e) keyp_game_cell_pane_g1

0x5d86,	// (0x0002069e) popup_fep_vkb2_window_ParamLimits

0x5d86,	// (0x0002069e) popup_fep_vkb2_window

0x73c9,	// (0x00021ce1) aid_size_cell_vkb2_ParamLimits

0x73c9,	// (0x00021ce1) aid_size_cell_vkb2

0x741d,	// (0x00021d35) popup_fep_vkb2_window_g1_ParamLimits

0x741d,	// (0x00021d35) popup_fep_vkb2_window_g1

0x7465,	// (0x00021d7d) vkb2_area_bottom_pane_ParamLimits

0x7465,	// (0x00021d7d) vkb2_area_bottom_pane

0x74b1,	// (0x00021dc9) vkb2_area_keypad_pane_ParamLimits

0x74b1,	// (0x00021dc9) vkb2_area_keypad_pane

0x74f3,	// (0x00021e0b) vkb2_area_top_pane_ParamLimits

0x74f3,	// (0x00021e0b) vkb2_area_top_pane

0x756d,	// (0x00021e85) vkb2_top_entry_pane_ParamLimits

0x756d,	// (0x00021e85) vkb2_top_entry_pane

0x7597,	// (0x00021eaf) vkb2_top_grid_left_pane_ParamLimits

0x7597,	// (0x00021eaf) vkb2_top_grid_left_pane

0x75b5,	// (0x00021ecd) vkb2_top_grid_right_pane_ParamLimits

0x75b5,	// (0x00021ecd) vkb2_top_grid_right_pane

0x75d3,	// (0x00021eeb) vkb2_cell_keypad_pane_ParamLimits

0x75d3,	// (0x00021eeb) vkb2_cell_keypad_pane

0x76a4,	// (0x00021fbc) vkb2_area_bottom_grid_pane_ParamLimits

0x76a4,	// (0x00021fbc) vkb2_area_bottom_grid_pane

0x76ca,	// (0x00021fe2) vkb2_area_bottom_pane_g1_ParamLimits

0x76ca,	// (0x00021fe2) vkb2_area_bottom_pane_g1

0x76ee,	// (0x00022006) vkb2_area_bottom_pane_g2_ParamLimits

0x76ee,	// (0x00022006) vkb2_area_bottom_pane_g2

0x771c,	// (0x00022034) vkb2_area_bottom_pane_g3_ParamLimits

0x771c,	// (0x00022034) vkb2_area_bottom_pane_g3

0x0002,

0xfd22,	// (0x0002a63a) vkb2_area_bottom_pane_g_ParamLimits

0xfd22,	// (0x0002a63a) vkb2_area_bottom_pane_g

0x777d,	// (0x00022095) vkb2_top_cell_left_pane_ParamLimits

0x777d,	// (0x00022095) vkb2_top_cell_left_pane

0xe127,	// (0x00028a3f) vkb2_top_entry_pane_g1_ParamLimits

0xe127,	// (0x00028a3f) vkb2_top_entry_pane_g1

0xe135,	// (0x00028a4d) vkb2_top_entry_pane_t1_ParamLimits

0xe135,	// (0x00028a4d) vkb2_top_entry_pane_t1

0xe167,	// (0x00028a7f) vkb2_top_entry_pane_t2_ParamLimits

0xe167,	// (0x00028a7f) vkb2_top_entry_pane_t2

0xe199,	// (0x00028ab1) vkb2_top_entry_pane_t3_ParamLimits

0xe199,	// (0x00028ab1) vkb2_top_entry_pane_t3

0x0002,

0xfd29,	// (0x0002a641) vkb2_top_entry_pane_t_ParamLimits

0xfd29,	// (0x0002a641) vkb2_top_entry_pane_t

0x77ca,	// (0x000220e2) vkb2_top_grid_right_pane_g1_ParamLimits

0x77ca,	// (0x000220e2) vkb2_top_grid_right_pane_g1

0x77e0,	// (0x000220f8) vkb2_top_grid_right_pane_g2_ParamLimits

0x77e0,	// (0x000220f8) vkb2_top_grid_right_pane_g2

0x77f8,	// (0x00022110) vkb2_top_grid_right_pane_g3_ParamLimits

0x77f8,	// (0x00022110) vkb2_top_grid_right_pane_g3

0x7810,	// (0x00022128) vkb2_top_grid_right_pane_g4_ParamLimits

0x7810,	// (0x00022128) vkb2_top_grid_right_pane_g4

0x0003,

0xfd30,	// (0x0002a648) vkb2_top_grid_right_pane_g_ParamLimits

0xfd30,	// (0x0002a648) vkb2_top_grid_right_pane_g

0x7826,	// (0x0002213e) vkb2_top_cell_left_pane_g1

0x783d,	// (0x00022155) vkb2_cell_keypad_pane_g1_ParamLimits

0x783d,	// (0x00022155) vkb2_cell_keypad_pane_g1

0xe1bd,	// (0x00028ad5) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1bd,	// (0x00028ad5) vkb2_cell_keypad_pane_t1

0x784b,	// (0x00022163) vkb2_cell_bottom_grid_pane_ParamLimits

0x784b,	// (0x00022163) vkb2_cell_bottom_grid_pane

0x7884,	// (0x0002219c) vkb2_cell_bottom_grid_pane_g1

0xdd68,	// (0x00028680) aid_call2_pane_cp02

0xdd70,	// (0x00028688) aid_call_pane_cp02

0xdd78,	// (0x00028690) clock_digital_number_pane_cp10

0xdd80,	// (0x00028698) clock_digital_number_pane_cp11

0xdd88,	// (0x000286a0) clock_digital_number_pane_cp12

0xdd90,	// (0x000286a8) clock_digital_number_pane_cp13

0xdd98,	// (0x000286b0) clock_digital_separator_pane_cp10

0x8e57,	// (0x0002376f) popup_clock_digital_analogue_window_cp2_g1

0x8e57,	// (0x0002376f) popup_clock_digital_analogue_window_cp2_g2

0xdda0,	// (0x000286b8) popup_clock_digital_analogue_window_cp2_g3

0x8e57,	// (0x0002376f) popup_clock_digital_analogue_window_cp2_g4

0xdda0,	// (0x000286b8) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd08,	// (0x0002a620) popup_clock_digital_analogue_window_cp2_g

0xdda8,	// (0x000286c0) popup_clock_digital_analogue_window_cp2_t1

0xddb6,	// (0x000286ce) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x00be,	// (0x0001a9d6) popup_clock_digital_analogue_window_cp2_t

0xc2b3,	// (0x00026bcb) clock_digital_number_pane_cp10_g1

0xc2b3,	// (0x00026bcb) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x0002a449) clock_digital_number_pane_cp10_g

0xc2b3,	// (0x00026bcb) clock_digital_separator_pane_cp10_g1

0xc2b3,	// (0x00026bcb) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x0002a449) clock_digital_separator_pane_cp10_g

0xdbe4,	// (0x000284fc) uniindi_top_pane_g3

0xdbf5,	// (0x0002850d) uniindi_top_pane_g4

0x765e,	// (0x00021f76) vkb2_row_keypad_pane_ParamLimits

0x765e,	// (0x00021f76) vkb2_row_keypad_pane

0x78a0,	// (0x000221b8) vkb2_cell_t_keypad_pane_ParamLimits

0x78a0,	// (0x000221b8) vkb2_cell_t_keypad_pane

0x78b0,	// (0x000221c8) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x78b0,	// (0x000221c8) vkb2_cell_t_keypad_pane_cp08

0x78c3,	// (0x000221db) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x78c3,	// (0x000221db) vkb2_cell_t_keypad_pane_cp09

0x78d7,	// (0x000221ef) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x78d7,	// (0x000221ef) vkb2_cell_t_keypad_pane_cp01

0x78e8,	// (0x00022200) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x78e8,	// (0x00022200) vkb2_cell_t_keypad_pane_cp02

0x78f9,	// (0x00022211) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x78f9,	// (0x00022211) vkb2_cell_t_keypad_pane_cp03

0x790a,	// (0x00022222) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x790a,	// (0x00022222) vkb2_cell_t_keypad_pane_cp04

0x791b,	// (0x00022233) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x791b,	// (0x00022233) vkb2_cell_t_keypad_pane_cp05

0x792c,	// (0x00022244) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x792c,	// (0x00022244) vkb2_cell_t_keypad_pane_cp06

0x793d,	// (0x00022255) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x793d,	// (0x00022255) vkb2_cell_t_keypad_pane_cp07

0x794e,	// (0x00022266) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x794e,	// (0x00022266) vkb2_cell_t_keypad_pane_cp10

0xc531,	// (0x00026e49) vkb2_cell_t_keypad_pane_g1

0xe1d4,	// (0x00028aec) vkb2_cell_t_keypad_pane_t1

0x7e74,	// (0x0002278c) popup_grid_graphic2_window

0xe1e6,	// (0x00028afe) aid_size_cell_graphic2_ParamLimits

0xe1e6,	// (0x00028afe) aid_size_cell_graphic2

0xe21e,	// (0x00028b36) bg_popup_window_pane_cp21_ParamLimits

0xe21e,	// (0x00028b36) bg_popup_window_pane_cp21

0xe22c,	// (0x00028b44) graphic2_pages_pane_ParamLimits

0xe22c,	// (0x00028b44) graphic2_pages_pane

0xe272,	// (0x00028b8a) grid_graphic2_control_pane_ParamLimits

0xe272,	// (0x00028b8a) grid_graphic2_control_pane

0xe2b0,	// (0x00028bc8) grid_graphic2_pane_ParamLimits

0xe2b0,	// (0x00028bc8) grid_graphic2_pane

0xe324,	// (0x00028c3c) cell_graphic2_pane

0x7e74,	// (0x0002278c) main_comp_mode_pane

0xd464,	// (0x00027d7c) list_ai3_gene_pane_ParamLimits

0xd82e,	// (0x00028146) bg_popup_window_pane_cp19_ParamLimits

0xd83a,	// (0x00028152) bg_touch_area_indi_pane_ParamLimits

0xd83a,	// (0x00028152) bg_touch_area_indi_pane

0xd850,	// (0x00028168) bg_touch_area_indi_pane_cp01_ParamLimits

0xd850,	// (0x00028168) bg_touch_area_indi_pane_cp01

0xd866,	// (0x0002817e) bg_touch_area_indi_pane_cp02_ParamLimits

0xd866,	// (0x0002817e) bg_touch_area_indi_pane_cp02

0xd87e,	// (0x00028196) bg_touch_area_indi_pane_cp03_ParamLimits

0xd87e,	// (0x00028196) bg_touch_area_indi_pane_cp03

0xd898,	// (0x000281b0) popup_slider_window_g1_ParamLimits

0xd8b4,	// (0x000281cc) popup_slider_window_g2_ParamLimits

0xd8d0,	// (0x000281e8) popup_slider_window_g3_ParamLimits

0x0048,	// (0x0001a960) popup_slider_window_g_ParamLimits

0xd92c,	// (0x00028244) popup_slider_window_t1_ParamLimits

0xd9a0,	// (0x000282b8) small_volume_slider_vertical_pane_ParamLimits

0xe324,	// (0x00028c3c) cell_graphic2_pane_ParamLimits

0xe373,	// (0x00028c8b) bg_button_pane_cp10_ParamLimits

0xe373,	// (0x00028c8b) bg_button_pane_cp10

0xe386,	// (0x00028c9e) bg_button_pane_cp11_ParamLimits

0xe386,	// (0x00028c9e) bg_button_pane_cp11

0xe399,	// (0x00028cb1) graphic2_pages_pane_g1_ParamLimits

0xe399,	// (0x00028cb1) graphic2_pages_pane_g1

0xe3d5,	// (0x00028ced) graphic2_pages_pane_g2_ParamLimits

0xe3d5,	// (0x00028ced) graphic2_pages_pane_g2

0x0001,

0xfd3e,	// (0x0002a656) graphic2_pages_pane_g_ParamLimits

0xfd3e,	// (0x0002a656) graphic2_pages_pane_g

0xe3ed,	// (0x00028d05) graphic2_pages_pane_t1_ParamLimits

0xe3ed,	// (0x00028d05) graphic2_pages_pane_t1

0xe405,	// (0x00028d1d) cell_graphic2_control_pane_ParamLimits

0xe405,	// (0x00028d1d) cell_graphic2_control_pane

0xe423,	// (0x00028d3b) cell_graphic2_pane_g1_ParamLimits

0xe423,	// (0x00028d3b) cell_graphic2_pane_g1

0xe430,	// (0x00028d48) cell_graphic2_pane_g2_ParamLimits

0xe430,	// (0x00028d48) cell_graphic2_pane_g2

0xe43d,	// (0x00028d55) cell_graphic2_pane_g3_ParamLimits

0xe43d,	// (0x00028d55) cell_graphic2_pane_g3

0xe44a,	// (0x00028d62) cell_graphic2_pane_g4_ParamLimits

0xe44a,	// (0x00028d62) cell_graphic2_pane_g4

0xe457,	// (0x00028d6f) cell_graphic2_pane_g5_ParamLimits

0xe457,	// (0x00028d6f) cell_graphic2_pane_g5

0x0004,

0x0111,	// (0x0001aa29) cell_graphic2_pane_g_ParamLimits

0x0111,	// (0x0001aa29) cell_graphic2_pane_g

0xe472,	// (0x00028d8a) cell_graphic2_pane_t1_ParamLimits

0xe472,	// (0x00028d8a) cell_graphic2_pane_t1

0x9d32,	// (0x0002464a) grid_highlight_pane_cp11_ParamLimits

0x9d32,	// (0x0002464a) grid_highlight_pane_cp11

0x81f1,	// (0x00022b09) bg_button_pane_cp05

0xe4a9,	// (0x00028dc1) cell_graphic2_control_pane_g1

0xc2b3,	// (0x00026bcb) bg_touch_area_indi_pane_g1

0xe4d1,	// (0x00028de9) aid_cmod_rocker_key_size

0xe4db,	// (0x00028df3) aid_cmode_itu_key_size

0xe4e5,	// (0x00028dfd) main_cmode_video_pane

0xe4ef,	// (0x00028e07) main_comp_mode_itu_pane

0xe4fb,	// (0x00028e13) main_comp_mode_rocker_pane

0xe507,	// (0x00028e1f) cell_cmode_rocker_pane_ParamLimits

0xe507,	// (0x00028e1f) cell_cmode_rocker_pane

0xe519,	// (0x00028e31) cell_cmode_itu_pane_ParamLimits

0xe519,	// (0x00028e31) cell_cmode_itu_pane

0x87d7,	// (0x000230ef) bg_button_pane_cp06_ParamLimits

0x87d7,	// (0x000230ef) bg_button_pane_cp06

0xc531,	// (0x00026e49) cell_cmode_rocker_pane_g1_ParamLimits

0xc531,	// (0x00026e49) cell_cmode_rocker_pane_g1

0xda44,	// (0x0002835c) cell_cmode_rocker_pane_g2_ParamLimits

0xda44,	// (0x0002835c) cell_cmode_rocker_pane_g2

0x0001,

0xfd43,	// (0x0002a65b) cell_cmode_rocker_pane_g_ParamLimits

0xfd43,	// (0x0002a65b) cell_cmode_rocker_pane_g

0x7e74,	// (0x0002278c) bg_button_pane_cp07

0xe52e,	// (0x00028e46) cell_cmode_itu_pane_g1

0xe537,	// (0x00028e4f) cell_cmode_itu_pane_t1

0xe545,	// (0x00028e5d) cell_cmode_itu_pane_t2

0x0001,

0x0126,	// (0x0001aa3e) cell_cmode_itu_pane_t

0xdc67,	// (0x0002857f) aid_touch_ctrl_left

0xdc6f,	// (0x00028587) aid_touch_ctrl_right

0x7e74,	// (0x0002278c) compa_mode_pane

0xe553,	// (0x00028e6b) aid_cmod_rocker_key_size_cp

0xe55d,	// (0x00028e75) aid_cmode_itu_key_size_cp

0xe567,	// (0x00028e7f) compa_mode_pane_g1

0xe56f,	// (0x00028e87) compa_mode_pane_g2

0xe577,	// (0x00028e8f) compa_mode_pane_g3

0x0002,

0x012b,	// (0x0001aa43) compa_mode_pane_g

0xe57f,	// (0x00028e97) main_comp_mode_itu_pane_cp

0xe587,	// (0x00028e9f) main_comp_mode_rocker_pane_cp

0xe58f,	// (0x00028ea7) cell_cmode_itu_pane_cp_ParamLimits

0xe58f,	// (0x00028ea7) cell_cmode_itu_pane_cp

0xe5a4,	// (0x00028ebc) cell_cmode_rocker_pane_cp_ParamLimits

0xe5a4,	// (0x00028ebc) cell_cmode_rocker_pane_cp

0x87d7,	// (0x000230ef) bg_button_pane_cp06_cp_ParamLimits

0x87d7,	// (0x000230ef) bg_button_pane_cp06_cp

0xc531,	// (0x00026e49) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc531,	// (0x00026e49) cell_cmode_rocker_pane_g1_cp

0xc2b3,	// (0x00026bcb) cell_cmode_rocker_pane_g2_cp

0x7e74,	// (0x0002278c) bg_button_pane_cp07_cp

0xb1fe,	// (0x00025b16) cell_cmode_itu_pane_g1_cp

0xe5b6,	// (0x00028ece) cell_cmode_itu_pane_t1_cp

0xe5b6,	// (0x00028ece) cell_cmode_itu_pane_t2_cp

0xb1eb,	// (0x00025b03) settings_code_pane_cp2

0x7f68,	// (0x00022880) bg_popup_window_pane_cp3_ParamLimits

0x83cb,	// (0x00022ce3) heading_pane_cp3_ParamLimits

0x83d7,	// (0x00022cef) listscroll_popup_graphic_pane_ParamLimits

0x6f77,	// (0x0002188f) fep_hwr_aid_pane_ParamLimits

0x7340,	// (0x00021c58) aid_touch_sctrl_top_ParamLimits

0x734d,	// (0x00021c65) sctrl_sk_top_pane_g1_ParamLimits

0xc531,	// (0x00026e49) sctrl_sk_top_pane_g2_ParamLimits

0xfcda,	// (0x0002a5f2) sctrl_sk_top_pane_g_ParamLimits

0x735a,	// (0x00021c72) sctrl_sk_top_pane_t1_ParamLimits

0x7340,	// (0x00021c58) aid_touch_sctrl_bottom_ParamLimits

0x735a,	// (0x00021c72) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbb0,	// (0x000284c8) aid_area_touch_clock

0x7535,	// (0x00021e4d) aid_vkb2_area_top_pane_cell_ParamLimits

0x7535,	// (0x00021e4d) aid_vkb2_area_top_pane_cell

0x7680,	// (0x00021f98) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7680,	// (0x00021f98) aid_vkb2_area_bottom_pane_cell

0xe11f,	// (0x00028a37) popup_char_count_window

0xe5c4,	// (0x00028edc) popup_char_count_window_g1

0xe5cd,	// (0x00028ee5) popup_char_count_window_g2

0xe5d6,	// (0x00028eee) popup_char_count_window_g3

0x0002,

0x0132,	// (0x0001aa4a) popup_char_count_window_g

0xe5df,	// (0x00028ef7) popup_char_count_window_t1

0x73fb,	// (0x00021d13) popup_fep_char_preview_window_ParamLimits

0x73fb,	// (0x00021d13) popup_fep_char_preview_window

0x7553,	// (0x00021e6b) vkb2_top_candi_pane_ParamLimits

0x7553,	// (0x00021e6b) vkb2_top_candi_pane

0xe5ed,	// (0x00028f05) cell_vkb2_top_candi_pane_ParamLimits

0xe5ed,	// (0x00028f05) cell_vkb2_top_candi_pane

0xa33f,	// (0x00024c57) bg_popup_fep_char_preview_window_ParamLimits

0xa33f,	// (0x00024c57) bg_popup_fep_char_preview_window

0x7963,	// (0x0002227b) popup_fep_char_preview_window_t1_ParamLimits

0x7963,	// (0x0002227b) popup_fep_char_preview_window_t1

0xe63a,	// (0x00028f52) bg_popup_fep_char_preview_window_g1

0xe642,	// (0x00028f5a) bg_popup_fep_char_preview_window_g2

0xe64a,	// (0x00028f62) bg_popup_fep_char_preview_window_g3

0xe652,	// (0x00028f6a) bg_popup_fep_char_preview_window_g4

0xe65a,	// (0x00028f72) bg_popup_fep_char_preview_window_g5

0x799d,	// (0x000222b5) bg_popup_fep_char_preview_window_g6

0xe662,	// (0x00028f7a) bg_popup_fep_char_preview_window_g7

0xe66a,	// (0x00028f82) bg_popup_fep_char_preview_window_g8

0xe672,	// (0x00028f8a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfd48,	// (0x0002a660) bg_popup_fep_char_preview_window_g

0xc531,	// (0x00026e49) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc531,	// (0x00026e49) cell_vkb2_top_candi_pane_g1

0xc848,	// (0x00027160) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc848,	// (0x00027160) cell_vkb2_top_candi_pane_g2

0xc869,	// (0x00027181) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc869,	// (0x00027181) cell_vkb2_top_candi_pane_g3

0x79a5,	// (0x000222bd) cell_vkb2_top_candi_pane_g4_ParamLimits

0x79a5,	// (0x000222bd) cell_vkb2_top_candi_pane_g4

0xe3b4,	// (0x00028ccc) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe3b4,	// (0x00028ccc) cell_vkb2_top_candi_pane_g5

0xda44,	// (0x0002835c) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda44,	// (0x0002835c) cell_vkb2_top_candi_pane_g6

0x0005,

0xfd5b,	// (0x0002a673) cell_vkb2_top_candi_pane_g_ParamLimits

0xfd5b,	// (0x0002a673) cell_vkb2_top_candi_pane_g

0x79c6,	// (0x000222de) cell_vkb2_top_candi_pane_t1

0x6dd7,	// (0x000216ef) aid_size_touch_slider_mark_ParamLimits

0x6dd7,	// (0x000216ef) aid_size_touch_slider_mark

0xe262,	// (0x00028b7a) grid_graphic2_catg_pane_ParamLimits

0xe262,	// (0x00028b7a) grid_graphic2_catg_pane

0xe300,	// (0x00028c18) popup_grid_graphic2_window_t1_ParamLimits

0xe300,	// (0x00028c18) popup_grid_graphic2_window_t1

0xe312,	// (0x00028c2a) popup_grid_graphic2_window_t2_ParamLimits

0xe312,	// (0x00028c2a) popup_grid_graphic2_window_t2

0x0001,

0xfd39,	// (0x0002a651) popup_grid_graphic2_window_t_ParamLimits

0xfd39,	// (0x0002a651) popup_grid_graphic2_window_t

0x81f1,	// (0x00022b09) bg_button_pane_cp05_ParamLimits

0xe4a9,	// (0x00028dc1) cell_graphic2_control_pane_g1_ParamLimits

0xe67a,	// (0x00028f92) cell_graphic2_catg_pane_ParamLimits

0xe67a,	// (0x00028f92) cell_graphic2_catg_pane

0x7e74,	// (0x0002278c) bg_button_pane_cp12

0xe68c,	// (0x00028fa4) cell_graphic2_catg_pane_g1

0xdb7c,	// (0x00028494) cell_tb_ext_pane_t1_ParamLimits

0x779d,	// (0x000220b5) vkb2_top_cell_right_narrow_pane_ParamLimits

0x779d,	// (0x000220b5) vkb2_top_cell_right_narrow_pane

0x77b5,	// (0x000220cd) vkb2_top_cell_right_wide_pane_ParamLimits

0x77b5,	// (0x000220cd) vkb2_top_cell_right_wide_pane

0x6f69,	// (0x00021881) bg_vkb2_func_pane_ParamLimits

0x6f69,	// (0x00021881) bg_vkb2_func_pane

0x7826,	// (0x0002213e) vkb2_top_cell_left_pane_g1_ParamLimits

0x6f69,	// (0x00021881) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6f69,	// (0x00021881) bg_vkb2_fuc_pane_cp03

0x7884,	// (0x0002219c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9cc6,	// (0x000245de) bg_vkb2_func_pane_g1

0x9cce,	// (0x000245e6) bg_vkb2_func_pane_g2

0x9cde,	// (0x000245f6) bg_vkb2_func_pane_g3

0x9cd6,	// (0x000245ee) bg_vkb2_func_pane_g4

0x9ce6,	// (0x000245fe) bg_vkb2_func_pane_g5

0x9cee,	// (0x00024606) bg_vkb2_func_pane_g6

0x9cf6,	// (0x0002460e) bg_vkb2_func_pane_g7

0x9cfe,	// (0x00024616) bg_vkb2_func_pane_g8

0x9cbe,	// (0x000245d6) bg_vkb2_func_pane_g9

0x0008,

0xfd68,	// (0x0002a680) bg_vkb2_func_pane_g

0x6f69,	// (0x00021881) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6f69,	// (0x00021881) bg_vkb2_fuc_pane_cp01

0x7826,	// (0x0002213e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7826,	// (0x0002213e) vkb2_top_cell_right_wide_pane_g1

0x6f69,	// (0x00021881) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6f69,	// (0x00021881) bg_vkb2_fuc_pane_cp02

0x7884,	// (0x0002219c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7884,	// (0x0002219c) vkb2_top_cell_right_narrow_pane_g1

0xd7b2,	// (0x000280ca) aid_touch_area_decrease_ParamLimits

0xd7b2,	// (0x000280ca) aid_touch_area_decrease

0xd7d0,	// (0x000280e8) aid_touch_area_increase_ParamLimits

0xd7d0,	// (0x000280e8) aid_touch_area_increase

0xd7dc,	// (0x000280f4) aid_touch_area_mute_ParamLimits

0xd7dc,	// (0x000280f4) aid_touch_area_mute

0xd800,	// (0x00028118) aid_touch_area_slider_ParamLimits

0xd800,	// (0x00028118) aid_touch_area_slider

0xd8ec,	// (0x00028204) popup_slider_window_g4_ParamLimits

0xd8ec,	// (0x00028204) popup_slider_window_g4

0xd8f8,	// (0x00028210) popup_slider_window_g5_ParamLimits

0xd8f8,	// (0x00028210) popup_slider_window_g5

0xd91a,	// (0x00028232) popup_slider_window_g6_ParamLimits

0xd91a,	// (0x00028232) popup_slider_window_g6

0xd95a,	// (0x00028272) popup_slider_window_t2_ParamLimits

0xd95a,	// (0x00028272) popup_slider_window_t2

0x0001,

0x0055,	// (0x0001a96d) popup_slider_window_t_ParamLimits

0x0055,	// (0x0001a96d) popup_slider_window_t

0xd972,	// (0x0002828a) slider_pane_ParamLimits

0xd972,	// (0x0002828a) slider_pane

0xe695,	// (0x00028fad) slider_pane_g1_ParamLimits

0xe695,	// (0x00028fad) slider_pane_g1

0xe6a9,	// (0x00028fc1) slider_pane_g2_ParamLimits

0xe6a9,	// (0x00028fc1) slider_pane_g2

0xe6bf,	// (0x00028fd7) slider_pane_g3_ParamLimits

0xe6bf,	// (0x00028fd7) slider_pane_g3

0x0003,

0x016c,	// (0x0001aa84) slider_pane_g_ParamLimits

0x016c,	// (0x0001aa84) slider_pane_g

0x6a20,	// (0x00021338) popup_tb_float_extension_window_ParamLimits

0x6a20,	// (0x00021338) popup_tb_float_extension_window

0xe6eb,	// (0x00029003) aid_size_cell_tb_float_ext

0x7e74,	// (0x0002278c) bg_popup_sub_window_cp28

0xe6f7,	// (0x0002900f) grid_tb_float_ext_pane

0xe701,	// (0x00029019) cell_tb_float_ext_pane_ParamLimits

0xe701,	// (0x00029019) cell_tb_float_ext_pane

0xe71b,	// (0x00029033) cell_tb_float_ext_pane_g1

0xe724,	// (0x0002903c) grid_highlight_pane_cp12

0x70aa,	// (0x000219c2) cell_last_hwr_side_pane_ParamLimits

0x70aa,	// (0x000219c2) cell_last_hwr_side_pane

0xc2b3,	// (0x00026bcb) cell_last_hwr_side_pane_g1

0xe72d,	// (0x00029045) cell_last_hwr_side_pane_g2

0x0001,

0xfd7b,	// (0x0002a693) cell_last_hwr_side_pane_g

0x774c,	// (0x00022064) vkb2_area_bottom_space_btn_pane_ParamLimits

0x774c,	// (0x00022064) vkb2_area_bottom_space_btn_pane

0xc531,	// (0x00026e49) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1d4,	// (0x00028aec) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x79c6,	// (0x000222de) cell_vkb2_top_candi_pane_t1_ParamLimits

0x79e5,	// (0x000222fd) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x79e5,	// (0x000222fd) vkb2_area_bottom_space_btn_pane_g1

0x7a1f,	// (0x00022337) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7a1f,	// (0x00022337) vkb2_area_bottom_space_btn_pane_g2

0x7a55,	// (0x0002236d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7a55,	// (0x0002236d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfd80,	// (0x0002a698) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfd80,	// (0x0002a698) vkb2_area_bottom_space_btn_pane_g

0x701e,	// (0x00021936) cel_fep_hwr_func_pane_ParamLimits

0x701e,	// (0x00021936) cel_fep_hwr_func_pane

0x705a,	// (0x00021972) cell_hwr_side_button_pane_ParamLimits

0x705a,	// (0x00021972) cell_hwr_side_button_pane

0xdbb0,	// (0x000284c8) aid_area_touch_clock_ParamLimits

0x81f1,	// (0x00022b09) bg_uniindi_top_pane_ParamLimits

0xdbc2,	// (0x000284da) uniindi_top_pane_g1_ParamLimits

0xdbd8,	// (0x000284f0) uniindi_top_pane_g2_ParamLimits

0xdbe4,	// (0x000284fc) uniindi_top_pane_g3_ParamLimits

0xdbf5,	// (0x0002850d) uniindi_top_pane_g4_ParamLimits

0x008d,	// (0x0001a9a5) uniindi_top_pane_g_ParamLimits

0xdc02,	// (0x0002851a) uniindi_top_pane_t1_ParamLimits

0x81f1,	// (0x00022b09) bg_vkb2_func_pane_cp01_ParamLimits

0x81f1,	// (0x00022b09) bg_vkb2_func_pane_cp01

0xe736,	// (0x0002904e) cel_fep_hwr_func_pane_g1_ParamLimits

0xe736,	// (0x0002904e) cel_fep_hwr_func_pane_g1

0x81f1,	// (0x00022b09) bg_vkb2_func_pane_cp02_ParamLimits

0x81f1,	// (0x00022b09) bg_vkb2_func_pane_cp02

0xe736,	// (0x0002904e) cell_hwr_side_button_pane_g1_ParamLimits

0xe736,	// (0x0002904e) cell_hwr_side_button_pane_g1

0x9b3f,	// (0x00024457) status_pane_g4_ParamLimits

0x9b3f,	// (0x00024457) status_pane_g4

0x9b59,	// (0x00024471) status_pane_t1

0xc007,	// (0x0002691f) form2_midp_gauge_slider_cont_pane

0xc00f,	// (0x00026927) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc021,	// (0x00026939) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc033,	// (0x0002694b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x0002a3fc) form2_midp_gauge_slider_pane_t_ParamLimits

0xc045,	// (0x0002695d) form2_midp_slider_pane_ParamLimits

0x73bb,	// (0x00021cd3) aid_size_cell_func_vkb2_ParamLimits

0x73bb,	// (0x00021cd3) aid_size_cell_func_vkb2

0xe6d7,	// (0x00028fef) slider_pane_g4_ParamLimits

0xe6d7,	// (0x00028fef) slider_pane_g4

0x7a9f,	// (0x000223b7) form2_midp_gauge_slider_pane_t2_cp01

0x7aad,	// (0x000223c5) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7aad,	// (0x000223c5) form2_midp_gauge_slider_pane_t3_cp01

0x7aca,	// (0x000223e2) form2_midp_slider_pane_cp01

0x7e74,	// (0x0002278c) navi_smil_pane

0xe76f,	// (0x00029087) navi_smil_pane_g1

0xe777,	// (0x0002908f) navi_smil_pane_t1

0xe744,	// (0x0002905c) form2_midp_slider_pane_g1

0xe74d,	// (0x00029065) form2_midp_slider_pane_g2

0xe755,	// (0x0002906d) form2_midp_slider_pane_g3

0xe744,	// (0x0002905c) form2_midp_slider_pane_g4

0xe75d,	// (0x00029075) form2_midp_slider_pane_g5

0x0004,

0x0183,	// (0x0001aa9b) form2_midp_slider_pane_g

0x7a8f,	// (0x000223a7) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7a8f,	// (0x000223a7) vkb2_area_bottom_space_btn_pane_g4

0x996e,	// (0x00024286) lc0_navi_pane_ParamLimits

0x996e,	// (0x00024286) lc0_navi_pane

0x99e4,	// (0x000242fc) lc0_stat_indi_pane_ParamLimits

0x99e4,	// (0x000242fc) lc0_stat_indi_pane

0x99fb,	// (0x00024313) ls0_title_pane_ParamLimits

0x99fb,	// (0x00024313) ls0_title_pane

0x87d7,	// (0x000230ef) bg_popup_sub_pane_cp14_ParamLimits

0xdb97,	// (0x000284af) list_uniindi_pane_ParamLimits

0xdba3,	// (0x000284bb) uniindi_top_pane_ParamLimits

0xdc3f,	// (0x00028557) list_single_uniindi_pane_g1_ParamLimits

0xdc52,	// (0x0002856a) list_single_uniindi_pane_t1_ParamLimits

0x7ad3,	// (0x000223eb) lc0_stat_clock_pane_ParamLimits

0x7ad3,	// (0x000223eb) lc0_stat_clock_pane

0xe785,	// (0x0002909d) lc0_stat_indi_pane_g1_ParamLimits

0xe785,	// (0x0002909d) lc0_stat_indi_pane_g1

0xe792,	// (0x000290aa) lc0_stat_indi_pane_g2_ParamLimits

0xe792,	// (0x000290aa) lc0_stat_indi_pane_g2

0x0001,

0x018e,	// (0x0001aaa6) lc0_stat_indi_pane_g_ParamLimits

0x018e,	// (0x0001aaa6) lc0_stat_indi_pane_g

0x7ae0,	// (0x000223f8) lc0_uni_indicator_pane_ParamLimits

0x7ae0,	// (0x000223f8) lc0_uni_indicator_pane

0xe79f,	// (0x000290b7) ls0_title_pane_g1_ParamLimits

0xe79f,	// (0x000290b7) ls0_title_pane_g1

0xe7b3,	// (0x000290cb) ls0_title_pane_t1_ParamLimits

0xe7b3,	// (0x000290cb) ls0_title_pane_t1

0x7aed,	// (0x00022405) lc0_uni_indicator_pane_g1_ParamLimits

0x7aed,	// (0x00022405) lc0_uni_indicator_pane_g1

0xe7e9,	// (0x00029101) lc0_stat_clock_pane_t1

0x7e74,	// (0x0002278c) main_ai5_pane

0xe7f7,	// (0x0002910f) ai5_sk_pane_ParamLimits

0xe7f7,	// (0x0002910f) ai5_sk_pane

0xe804,	// (0x0002911c) cell_ai5_widget_pane_ParamLimits

0xe804,	// (0x0002911c) cell_ai5_widget_pane

0xe8b6,	// (0x000291ce) aid_size_cell_widget_grid

0xe8cc,	// (0x000291e4) bg_ai5_widget_pane_ParamLimits

0xe8cc,	// (0x000291e4) bg_ai5_widget_pane

0xe940,	// (0x00029258) cell_ai5_widget_pane_g2

0xe950,	// (0x00029268) cell_ai5_widget_pane_g3

0xe967,	// (0x0002927f) cell_ai5_widget_pane_g4

0xe973,	// (0x0002928b) cell_ai5_widget_pane_g5

0xe97f,	// (0x00029297) cell_ai5_widget_pane_g6

0xe98b,	// (0x000292a3) cell_ai5_widget_pane_g7

0xe9d3,	// (0x000292eb) cell_ai5_widget_pane_t1_ParamLimits

0xe9d3,	// (0x000292eb) cell_ai5_widget_pane_t1

0xe9f0,	// (0x00029308) cell_ai5_widget_pane_t2_ParamLimits

0xe9f0,	// (0x00029308) cell_ai5_widget_pane_t2

0xea08,	// (0x00029320) cell_ai5_widget_pane_t3_ParamLimits

0xea08,	// (0x00029320) cell_ai5_widget_pane_t3

0xea20,	// (0x00029338) cell_ai5_widget_pane_t4_ParamLimits

0xea20,	// (0x00029338) cell_ai5_widget_pane_t4

0xea3d,	// (0x00029355) cell_ai5_widget_pane_t5_ParamLimits

0xea3d,	// (0x00029355) cell_ai5_widget_pane_t5

0xea5c,	// (0x00029374) cell_ai5_widget_pane_t6_ParamLimits

0xea5c,	// (0x00029374) cell_ai5_widget_pane_t6

0xea6e,	// (0x00029386) cell_ai5_widget_pane_t7_ParamLimits

0xea6e,	// (0x00029386) cell_ai5_widget_pane_t7

0xea87,	// (0x0002939f) cell_ai5_widget_pane_t8_ParamLimits

0xea87,	// (0x0002939f) cell_ai5_widget_pane_t8

0x0009,

0x01a8,	// (0x0001aac0) cell_ai5_widget_pane_t_ParamLimits

0x01a8,	// (0x0001aac0) cell_ai5_widget_pane_t

0xeadb,	// (0x000293f3) grid_ai5_widget_pane

0x87d7,	// (0x000230ef) highlight_cell_ai5_widget_pane_ParamLimits

0x87d7,	// (0x000230ef) highlight_cell_ai5_widget_pane

0xeaf2,	// (0x0002940a) ai5_sk_left_pane

0xeafc,	// (0x00029414) ai5_sk_middle_pane

0xeb06,	// (0x0002941e) ai5_sk_right_pane

0xeb10,	// (0x00029428) bg_ai5_widget_pane_g1_ParamLimits

0xeb10,	// (0x00029428) bg_ai5_widget_pane_g1

0xeb1c,	// (0x00029434) bg_ai5_widget_pane_g2_ParamLimits

0xeb1c,	// (0x00029434) bg_ai5_widget_pane_g2

0xeb28,	// (0x00029440) bg_ai5_widget_pane_g3_ParamLimits

0xeb28,	// (0x00029440) bg_ai5_widget_pane_g3

0xeb34,	// (0x0002944c) bg_ai5_widget_pane_g4_ParamLimits

0xeb34,	// (0x0002944c) bg_ai5_widget_pane_g4

0xeb40,	// (0x00029458) bg_ai5_widget_pane_g5_ParamLimits

0xeb40,	// (0x00029458) bg_ai5_widget_pane_g5

0xeb4c,	// (0x00029464) bg_ai5_widget_pane_g6_ParamLimits

0xeb4c,	// (0x00029464) bg_ai5_widget_pane_g6

0xeb58,	// (0x00029470) bg_ai5_widget_pane_g7_ParamLimits

0xeb58,	// (0x00029470) bg_ai5_widget_pane_g7

0xeb64,	// (0x0002947c) bg_ai5_widget_pane_g8_ParamLimits

0xeb64,	// (0x0002947c) bg_ai5_widget_pane_g8

0xeb70,	// (0x00029488) bg_ai5_widget_pane_g9_ParamLimits

0xeb70,	// (0x00029488) bg_ai5_widget_pane_g9

0x0008,

0x01bd,	// (0x0001aad5) bg_ai5_widget_pane_g_ParamLimits

0x01bd,	// (0x0001aad5) bg_ai5_widget_pane_g

0xeba2,	// (0x000294ba) cell_shortcut_ai5_widget_pane_ParamLimits

0xeba2,	// (0x000294ba) cell_shortcut_ai5_widget_pane

0x946a,	// (0x00023d82) bg_cell_shortcut_ai5_widget_pane

0xebb3,	// (0x000294cb) cell_grid_ai5_widget_pane_g1

0x946a,	// (0x00023d82) highlight_cell_shortcut_ai5_widget_pane

0x9cce,	// (0x000245e6) ai5_sk_left_pane_g1

0xebbc,	// (0x000294d4) ai5_sk_left_pane_g2

0xebc4,	// (0x000294dc) ai5_sk_left_pane_g3

0xebcc,	// (0x000294e4) ai5_sk_left_pane_g4

0x0003,

0xfd89,	// (0x0002a6a1) ai5_sk_left_pane_g

0xebd4,	// (0x000294ec) ai5_sk_left_pane_t1

0x9cc6,	// (0x000245de) ai5_sk_right_pane_g1

0xebe2,	// (0x000294fa) ai5_sk_right_pane_g2

0xebea,	// (0x00029502) ai5_sk_right_pane_g3

0xebf2,	// (0x0002950a) ai5_sk_right_pane_g4

0x0003,

0xfd92,	// (0x0002a6aa) ai5_sk_right_pane_g

0xebfa,	// (0x00029512) ai5_sk_right_pane_t1

0x9cc6,	// (0x000245de) ai5_sk_middle_pane_g1

0x9cce,	// (0x000245e6) ai5_sk_middle_pane_g2

0x9ce6,	// (0x000245fe) ai5_sk_middle_pane_g3

0xebea,	// (0x00029502) ai5_sk_middle_pane_g4

0xebc4,	// (0x000294dc) ai5_sk_middle_pane_g5

0xec08,	// (0x00029520) ai5_sk_middle_pane_g6

0xec10,	// (0x00029528) ai5_sk_middle_pane_g7

0x0006,

0xfd9b,	// (0x0002a6b3) ai5_sk_middle_pane_g

0x97fa,	// (0x00024112) aid_touch_area_size_lc0_ParamLimits

0x97fa,	// (0x00024112) aid_touch_area_size_lc0

0x71a9,	// (0x00021ac1) cell_hwr_candidate_pane_t1_ParamLimits

0x9816,	// (0x0002412e) aid_touch_navi_pane

0x9ae9,	// (0x00024401) status_dt_navi_pane_ParamLimits

0x9ae9,	// (0x00024401) status_dt_navi_pane

0x9af6,	// (0x0002440e) status_dt_sta_pane_ParamLimits

0x9af6,	// (0x0002440e) status_dt_sta_pane

0xec18,	// (0x00029530) dt_sta_controll_pane

0xec25,	// (0x0002953d) dt_sta_indi_pane

0xec36,	// (0x0002954e) dt_sta_title_pane

0x81f1,	// (0x00022b09) bg_dt_sta_indi_pane_ParamLimits

0x81f1,	// (0x00022b09) bg_dt_sta_indi_pane

0xec49,	// (0x00029561) dt_sta_battery_pane

0xec51,	// (0x00029569) dt_sta_indi_pane_g1

0xec5a,	// (0x00029572) dt_sta_indi_pane_g2

0xec63,	// (0x0002957b) dt_sta_indi_pane_g3

0x0002,

0x01f1,	// (0x0001ab09) dt_sta_indi_pane_g

0xec6c,	// (0x00029584) dt_sta_signal_pane

0x87d7,	// (0x000230ef) bg_dt_sta_title_pane_ParamLimits

0x87d7,	// (0x000230ef) bg_dt_sta_title_pane

0xec75,	// (0x0002958d) dt_sta_title_pane_g1

0xec7d,	// (0x00029595) dt_sta_title_pane_t1_ParamLimits

0xec7d,	// (0x00029595) dt_sta_title_pane_t1

0x7e74,	// (0x0002278c) bg_dt_sta_control_pane

0xec92,	// (0x000295aa) dt_sta_controll_pane_g1

0xec9b,	// (0x000295b3) bg_dt_sta_title_pane_g1

0xeca4,	// (0x000295bc) bg_dt_sta_title_pane_g2

0xecad,	// (0x000295c5) bg_dt_sta_title_pane_g3

0x0002,

0x01f8,	// (0x0001ab10) bg_dt_sta_title_pane_g

0xc2b3,	// (0x00026bcb) bg_dt_sta_indi_pane_g1

0xecb6,	// (0x000295ce) dt_sta_signal_pane_g1

0xecbe,	// (0x000295d6) dt_sta_signal_pane_g2

0x0001,

0x01ff,	// (0x0001ab17) dt_sta_signal_pane_g

0xecc6,	// (0x000295de) dt_sta_battery_pane_g1

0xeccf,	// (0x000295e7) dt_sta_battery_pane_t1

0xc2b3,	// (0x00026bcb) bg_dt_sta_control_pane_g1

0x8f69,	// (0x00023881) fep_china_uni_eep_pane

0x8f71,	// (0x00023889) fep_china_uni_entry_pane_ParamLimits

0x8f81,	// (0x00023899) popup_fep_china_uni_window_g1_ParamLimits

0x8f91,	// (0x000238a9) popup_fep_china_uni_window_g2_ParamLimits

0x8f91,	// (0x000238a9) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0002a035) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0002a035) popup_fep_china_uni_window_g

0xecde,	// (0x000295f6) fep_china_uni_eep_pane_g1

0xece6,	// (0x000295fe) fep_china_uni_eep_pane_t1

0xe766,	// (0x0002907e) aid_touch_area_size_smil_player

0x9966,	// (0x0002427e) lc0_clock_pane

0x9b4d,	// (0x00024465) status_pane_g5_ParamLimits

0x9b4d,	// (0x00024465) status_pane_g5

0x66e5,	// (0x00020ffd) popup_keymap_window

0x9b0b,	// (0x00024423) status_icon_pane

0xe950,	// (0x00029268) cell_ai5_widget_pane_g3_ParamLimits

0xe967,	// (0x0002927f) cell_ai5_widget_pane_g4_ParamLimits

0xe973,	// (0x0002928b) cell_ai5_widget_pane_g5_ParamLimits

0xe997,	// (0x000292af) cell_ai5_widget_pane_g8_ParamLimits

0xe997,	// (0x000292af) cell_ai5_widget_pane_g8

0xe9ab,	// (0x000292c3) cell_ai5_widget_pane_g9_ParamLimits

0xe9ab,	// (0x000292c3) cell_ai5_widget_pane_g9

0xe9bf,	// (0x000292d7) cell_ai5_widget_pane_g10_ParamLimits

0xe9bf,	// (0x000292d7) cell_ai5_widget_pane_g10

0xecf5,	// (0x0002960d) status_icon_pane_g1

0x7e74,	// (0x0002278c) bg_popup_sub_pane_cp13

0xecfd,	// (0x00029615) popup_keymap_window_t1

0x973f,	// (0x00024057) control_pane_g6_ParamLimits

0x973f,	// (0x00024057) control_pane_g6

0x974c,	// (0x00024064) control_pane_g7_ParamLimits

0x974c,	// (0x00024064) control_pane_g7

0x9759,	// (0x00024071) control_pane_g8_ParamLimits

0x9759,	// (0x00024071) control_pane_g8

0xec18,	// (0x00029530) dt_sta_controll_pane_ParamLimits

0xec25,	// (0x0002953d) dt_sta_indi_pane_ParamLimits

0xec36,	// (0x0002954e) dt_sta_title_pane_ParamLimits

0x870f,	// (0x00023027) aid_size_touch_scroll_bar_cale

0x5d56,	// (0x0002066e) popup_discreet_window_ParamLimits

0x5d56,	// (0x0002066e) popup_discreet_window

0x5dde,	// (0x000206f6) popup_sk_window

0xa33f,	// (0x00024c57) bg_popup_sub_pane_cp28_ParamLimits

0xa33f,	// (0x00024c57) bg_popup_sub_pane_cp28

0xed0b,	// (0x00029623) popup_discreet_window_g1_ParamLimits

0xed0b,	// (0x00029623) popup_discreet_window_g1

0xed2b,	// (0x00029643) popup_discreet_window_t1_ParamLimits

0xed2b,	// (0x00029643) popup_discreet_window_t1

0xed49,	// (0x00029661) popup_discreet_window_t2_ParamLimits

0xed49,	// (0x00029661) popup_discreet_window_t2

0x0002,

0x0204,	// (0x0001ab1c) popup_discreet_window_t_ParamLimits

0x0204,	// (0x0001ab1c) popup_discreet_window_t

0x7b01,	// (0x00022419) popup_sk_window_g1

0x7b0b,	// (0x00022423) popup_sk_window_g2

0x0001,

0xfdaa,	// (0x0002a6c2) popup_sk_window_g

0x7b13,	// (0x0002242b) popup_sk_window_t1

0x7b21,	// (0x00022439) popup_sk_window_t1_copy1

0xe940,	// (0x00029258) cell_ai5_widget_pane_g2_ParamLimits

0xea99,	// (0x000293b1) cell_ai5_widget_pane_t9_ParamLimits

0xea99,	// (0x000293b1) cell_ai5_widget_pane_t9

0x7e74,	// (0x0002278c) main_fep_fshwr2_pane

0x7b2f,	// (0x00022447) aid_fshwr2_btn_pane

0x7b3b,	// (0x00022453) aid_fshwr2_syb_pane

0x7b47,	// (0x0002245f) aid_fshwr2_txt_pane

0x7b53,	// (0x0002246b) fshwr2_func_candi_pane

0x7b68,	// (0x00022480) fshwr2_hwr_syb_pane

0x7b78,	// (0x00022490) fshwr2_icf_pane

0x7e74,	// (0x0002278c) fshwr2_icf_bg_pane

0x7ba1,	// (0x000224b9) fshwr2_icf_pane_t1_ParamLimits

0x7ba1,	// (0x000224b9) fshwr2_icf_pane_t1

0x8e57,	// (0x0002376f) fshwr2_func_candi_pane_g1

0xed9b,	// (0x000296b3) fshwr2_func_candi_row_pane_ParamLimits

0xed9b,	// (0x000296b3) fshwr2_func_candi_row_pane

0x7bb9,	// (0x000224d1) cell_fshwr2_syb_pane_ParamLimits

0x7bb9,	// (0x000224d1) cell_fshwr2_syb_pane

0xc531,	// (0x00026e49) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc531,	// (0x00026e49) fshwr2_hwr_syb_pane_g1

0x7e74,	// (0x0002278c) bg_popup_call_pane_cp01

0x7bcf,	// (0x000224e7) fshwr2_func_candi_cell_pane_ParamLimits

0x7bcf,	// (0x000224e7) fshwr2_func_candi_cell_pane

0xedab,	// (0x000296c3) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xedab,	// (0x000296c3) fshwr2_func_candi_cell_bg_pane

0x7c1a,	// (0x00022532) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7c1a,	// (0x00022532) fshwr2_func_candi_cell_pane_g1

0x7c42,	// (0x0002255a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7c42,	// (0x0002255a) fshwr2_func_candi_cell_pane_t1

0x7e74,	// (0x0002278c) bg_button_pane_cp08

0xedb7,	// (0x000296cf) cell_fshwr2_syb_bg_pane

0x7c55,	// (0x0002256d) cell_fshwr2_syb_bg_pane_g1

0x7c5d,	// (0x00022575) cell_fshwr2_syb_bg_pane_t1

0x87d7,	// (0x000230ef) main_tmo_pane

0xae4e,	// (0x00025766) uni_indicator_pane_g1_ParamLimits

0xae64,	// (0x0002577c) uni_indicator_pane_g2_ParamLimits

0xae7a,	// (0x00025792) uni_indicator_pane_g3_ParamLimits

0xae8d,	// (0x000257a5) uni_indicator_pane_g4_ParamLimits

0xae8d,	// (0x000257a5) uni_indicator_pane_g4

0xaea1,	// (0x000257b9) uni_indicator_pane_g5_ParamLimits

0xaea1,	// (0x000257b9) uni_indicator_pane_g5

0xaea1,	// (0x000257b9) uni_indicator_pane_g6_ParamLimits

0xaea1,	// (0x000257b9) uni_indicator_pane_g6

0xf91a,	// (0x0002a232) uni_indicator_pane_g_ParamLimits

0xd78e,	// (0x000280a6) popup_tmo_note_window_ParamLimits

0xd78e,	// (0x000280a6) popup_tmo_note_window

0x87d7,	// (0x000230ef) fshwr2_bg_pane

0x7c33,	// (0x0002254b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7c33,	// (0x0002254b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfdaf,	// (0x0002a6c7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfdaf,	// (0x0002a6c7) fshwr2_func_candi_cell_pane_g

0xc2b3,	// (0x00026bcb) bg_popup_window_pane_cp01

0x7c6c,	// (0x00022584) bg_popup_window_pane_g1_cp01

0xedbf,	// (0x000296d7) bg_popup_window_pane_cp22_ParamLimits

0xedbf,	// (0x000296d7) bg_popup_window_pane_cp22

0xedcd,	// (0x000296e5) listscroll_tmo_link_pane_ParamLimits

0xedcd,	// (0x000296e5) listscroll_tmo_link_pane

0xee0d,	// (0x00029725) popup_tmo_note_window_g1_ParamLimits

0xee0d,	// (0x00029725) popup_tmo_note_window_g1

0xee1a,	// (0x00029732) tmo_note_info_pane_ParamLimits

0xee1a,	// (0x00029732) tmo_note_info_pane

0xee34,	// (0x0002974c) list_tmo_note_info_pane_g1_ParamLimits

0xee34,	// (0x0002974c) list_tmo_note_info_pane_g1

0xee4b,	// (0x00029763) list_tmo_note_info_pane_g2_ParamLimits

0xee4b,	// (0x00029763) list_tmo_note_info_pane_g2

0x0001,

0x0215,	// (0x0001ab2d) list_tmo_note_info_pane_g_ParamLimits

0x0215,	// (0x0001ab2d) list_tmo_note_info_pane_g

0xee67,	// (0x0002977f) list_tmo_note_info_text_pane_ParamLimits

0xee67,	// (0x0002977f) list_tmo_note_info_text_pane

0xeee8,	// (0x00029800) list_tmo_link_pane

0xeef5,	// (0x0002980d) scroll_pane_cp20

0xef02,	// (0x0002981a) list_single_tmo_link_pane_ParamLimits

0xef02,	// (0x0002981a) list_single_tmo_link_pane

0xef12,	// (0x0002982a) list_single_tmo_link_pane_t1

0xef20,	// (0x00029838) list_tmo_note_info_text_pane_t1_ParamLimits

0xef20,	// (0x00029838) list_tmo_note_info_text_pane_t1

0x888e,	// (0x000231a6) aid_size_touch_scroll_bar_cp01_ParamLimits

0x888e,	// (0x000231a6) aid_size_touch_scroll_bar_cp01

0x4f6d,	// (0x0001f885) aid_size_touch_slider_marker

0x5dc6,	// (0x000206de) popup_settings_window_ParamLimits

0x5dc6,	// (0x000206de) popup_settings_window

0x513c,	// (0x0001fa54) popup_candi_list_indi_window

0x9816,	// (0x0002412e) aid_touch_navi_pane_ParamLimits

0x7314,	// (0x00021c2c) rs_clock_indi_pane

0x731d,	// (0x00021c35) sctrl_sk_bottom_pane_ParamLimits

0x732e,	// (0x00021c46) sctrl_sk_top_pane_ParamLimits

0x7415,	// (0x00021d2d) popup_fep_tooltip_window

0xe8b6,	// (0x000291ce) aid_size_cell_widget_grid_ParamLimits

0xe92b,	// (0x00029243) cell_ai5_widget_pane_g1_ParamLimits

0xe92b,	// (0x00029243) cell_ai5_widget_pane_g1

0xe97f,	// (0x00029297) cell_ai5_widget_pane_g6_ParamLimits

0xe98b,	// (0x000292a3) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x0193,	// (0x0001aaab) cell_ai5_widget_pane_g_ParamLimits

0x0193,	// (0x0001aaab) cell_ai5_widget_pane_g

0xeabd,	// (0x000293d5) cell_ai5_widget_pane_t10_ParamLimits

0xeabd,	// (0x000293d5) cell_ai5_widget_pane_t10

0xeadb,	// (0x000293f3) grid_ai5_widget_pane_ParamLimits

0xeb7c,	// (0x00029494) cell_contacts_ai5_widget_pane_ParamLimits

0xeb7c,	// (0x00029494) cell_contacts_ai5_widget_pane

0xed5e,	// (0x00029676) popup_discreet_window_t3_ParamLimits

0xed5e,	// (0x00029676) popup_discreet_window_t3

0x7b8d,	// (0x000224a5) popup_fshwr2_char_preview_window_ParamLimits

0x7b8d,	// (0x000224a5) popup_fshwr2_char_preview_window

0xee85,	// (0x0002979d) tmo_note_info_pane_t1

0xee9a,	// (0x000297b2) tmo_note_info_pane_t2

0xeeaf,	// (0x000297c7) tmo_note_info_pane_t3

0xeec4,	// (0x000297dc) tmo_note_info_pane_t4

0xeed6,	// (0x000297ee) tmo_note_info_pane_t5

0x0004,

0x021a,	// (0x0001ab32) tmo_note_info_pane_t

0xeee8,	// (0x00029800) list_tmo_link_pane_ParamLimits

0xeef5,	// (0x0002980d) scroll_pane_cp20_ParamLimits

0x7e74,	// (0x0002278c) bg_popup_fep_char_preview_window_cp01

0xef39,	// (0x00029851) popup_fshwr2_char_preview_window_t1

0xef47,	// (0x0002985f) popup_candi_list_indi_window_g1

0xef50,	// (0x00029868) bg_cell_contacts_ai5_widget_pane

0xef5c,	// (0x00029874) cell_contacts_ai5_widget_pane_g1

0xc993,	// (0x000272ab) cell_contacts_ai5_widget_pane_g2

0xef71,	// (0x00029889) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfdb4,	// (0x0002a6cc) cell_contacts_ai5_widget_pane_g

0xef7d,	// (0x00029895) cell_contacts_ai5_widget_pane_t1

0x87d7,	// (0x000230ef) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeff4,	// (0x0002990c) settings_container_pane

0x946a,	// (0x00023d82) listscroll_set_pane_copy1

0xb9c7,	// (0x000262df) scroll_pane_cp121_copy1

0xa0f0,	// (0x00024a08) set_content_pane_copy1

0xf000,	// (0x00029918) aid_height_set_list_copy1_ParamLimits

0xf000,	// (0x00029918) aid_height_set_list_copy1

0xb099,	// (0x000259b1) aid_size_parent_copy1_ParamLimits

0xb099,	// (0x000259b1) aid_size_parent_copy1

0xf00c,	// (0x00029924) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf00c,	// (0x00029924) button_value_adjust_pane_cp6_copy1

0x97b4,	// (0x000240cc) list_highlight_pane_cp2_copy1_ParamLimits

0x97b4,	// (0x000240cc) list_highlight_pane_cp2_copy1

0xf020,	// (0x00029938) list_set_pane_copy1_ParamLimits

0xf020,	// (0x00029938) list_set_pane_copy1

0xef8f,	// (0x000298a7) main_pane_set_t1_copy1_ParamLimits

0xef8f,	// (0x000298a7) main_pane_set_t1_copy1

0xefc9,	// (0x000298e1) main_pane_set_t2_copy1_ParamLimits

0xefc9,	// (0x000298e1) main_pane_set_t2_copy1

0xf0cd,	// (0x000299e5) main_pane_set_t3_copy1

0xf0db,	// (0x000299f3) main_pane_set_t4_copy1

0xefe8,	// (0x00029900) set_content_pane_g1_copy1_ParamLimits

0xefe8,	// (0x00029900) set_content_pane_g1_copy1

0xf0e9,	// (0x00029a01) setting_code_pane_copy1

0xf0f1,	// (0x00029a09) setting_slider_graphic_pane_copy1

0xf0f1,	// (0x00029a09) setting_slider_pane_copy1

0xf0f1,	// (0x00029a09) setting_text_pane_copy1

0xf0f1,	// (0x00029a09) setting_volume_pane_copy1

0xf0e9,	// (0x00029a01) settings_code_pane_cp2_copy1

0xf0f9,	// (0x00029a11) settings_code_pane_cp_copy1_ParamLimits

0xf0f9,	// (0x00029a11) settings_code_pane_cp_copy1

0x7c75,	// (0x0002258d) volume_set_pane_copy1

0xf10d,	// (0x00029a25) volume_set_pane_g10_copy1

0xf115,	// (0x00029a2d) volume_set_pane_g1_copy1

0xf11d,	// (0x00029a35) volume_set_pane_g2_copy1

0xf125,	// (0x00029a3d) volume_set_pane_g3_copy1

0xf12d,	// (0x00029a45) volume_set_pane_g4_copy1

0xf135,	// (0x00029a4d) volume_set_pane_g5_copy1

0xf13d,	// (0x00029a55) volume_set_pane_g6_copy1

0xf145,	// (0x00029a5d) volume_set_pane_g7_copy1

0xf14d,	// (0x00029a65) volume_set_pane_g8_copy1

0xf155,	// (0x00029a6d) volume_set_pane_g9_copy1

0x7f68,	// (0x00022880) bg_set_opt_pane_cp_copy1_ParamLimits

0x7f68,	// (0x00022880) bg_set_opt_pane_cp_copy1

0x7c7d,	// (0x00022595) setting_slider_pane_t1_copy1_ParamLimits

0x7c7d,	// (0x00022595) setting_slider_pane_t1_copy1

0x7c9b,	// (0x000225b3) setting_slider_pane_t2_copy1_ParamLimits

0x7c9b,	// (0x000225b3) setting_slider_pane_t2_copy1

0x7cb5,	// (0x000225cd) setting_slider_pane_t3_copy1_ParamLimits

0x7cb5,	// (0x000225cd) setting_slider_pane_t3_copy1

0x7ccd,	// (0x000225e5) slider_set_pane_copy1_ParamLimits

0x7ccd,	// (0x000225e5) slider_set_pane_copy1

0x882f,	// (0x00023147) set_opt_bg_pane_g1_copy2

0x8837,	// (0x0002314f) set_opt_bg_pane_g2_copy2

0xf15d,	// (0x00029a75) set_opt_bg_pane_g3_copy2

0x8847,	// (0x0002315f) set_opt_bg_pane_g4_copy2

0x884f,	// (0x00023167) set_opt_bg_pane_g5_copy2

0x8857,	// (0x0002316f) set_opt_bg_pane_g6_copy2

0xf167,	// (0x00029a7f) set_opt_bg_pane_g7_copy2

0xf16f,	// (0x00029a87) set_opt_bg_pane_g8_copy2

0xf179,	// (0x00029a91) set_opt_bg_pane_g9_copy2

0x7ce3,	// (0x000225fb) aid_size_touch_slider_mark_copy1_ParamLimits

0x7ce3,	// (0x000225fb) aid_size_touch_slider_mark_copy1

0xf183,	// (0x00029a9b) slider_set_pane_g1_copy1

0x7cf7,	// (0x0002260f) slider_set_pane_g2_copy1

0x6df7,	// (0x0002170f) slider_set_pane_g3_copy1_ParamLimits

0x6df7,	// (0x0002170f) slider_set_pane_g3_copy1

0x6e0b,	// (0x00021723) slider_set_pane_g4_copy1_ParamLimits

0x6e0b,	// (0x00021723) slider_set_pane_g4_copy1

0x6e23,	// (0x0002173b) slider_set_pane_g5_copy1_ParamLimits

0x6e23,	// (0x0002173b) slider_set_pane_g5_copy1

0x6df7,	// (0x0002170f) slider_set_pane_g6_copy1_ParamLimits

0x6df7,	// (0x0002170f) slider_set_pane_g6_copy1

0x7cff,	// (0x00022617) slider_set_pane_g7_copy1_ParamLimits

0x7cff,	// (0x00022617) slider_set_pane_g7_copy1

0x7e88,	// (0x000227a0) bg_set_opt_pane_cp2_copy1

0xf18c,	// (0x00029aa4) setting_slider_graphic_pane_g1_copy1

0xf195,	// (0x00029aad) setting_slider_graphic_pane_t1_copy1

0xf1a5,	// (0x00029abd) setting_slider_graphic_pane_t2_copy1

0xf1b5,	// (0x00029acd) slider_set_pane_cp_copy1

0xf1c5,	// (0x00029add) input_focus_pane_cp1_copy1

0xf1ce,	// (0x00029ae6) list_set_text_pane_copy1

0xf1d6,	// (0x00029aee) setting_text_pane_g1_copy1

0x4973,	// (0x0001f28b) set_text_pane_t1_copy1

0xf1c5,	// (0x00029add) input_focus_pane_cp2_copy1

0xf1d6,	// (0x00029aee) setting_code_pane_g1_copy1

0xf1df,	// (0x00029af7) setting_code_pane_t1_copy1

0xf1ed,	// (0x00029b05) list_set_graphic_pane_copy1

0x7e88,	// (0x000227a0) bg_set_opt_pane_cp4_copy1

0x9165,	// (0x00023a7d) list_set_graphic_pane_g1_copy1_ParamLimits

0x9165,	// (0x00023a7d) list_set_graphic_pane_g1_copy1

0xf200,	// (0x00029b18) list_set_graphic_pane_g2_copy1

0x917d,	// (0x00023a95) list_set_graphic_pane_t1_copy1_ParamLimits

0x917d,	// (0x00023a95) list_set_graphic_pane_t1_copy1

0xc2b3,	// (0x00026bcb) rs_clock_indi_pane_g1

0xf208,	// (0x00029b20) rs_clock_indi_pane_t1

0xf216,	// (0x00029b2e) rs_indi_pane

0xf21e,	// (0x00029b36) rs_indi_pane_g1

0xf227,	// (0x00029b3f) rs_indi_pane_g2

0xf230,	// (0x00029b48) rs_indi_pane_g3

0x0002,

0x022c,	// (0x0001ab44) rs_indi_pane_g

0x946a,	// (0x00023d82) bg_popup_preview_window_pane_cp03

0xf239,	// (0x00029b51) popup_fep_tooltip_window_t1

0xcf2f,	// (0x00027847) popup_note2_window_g2_ParamLimits

0xcf2f,	// (0x00027847) popup_note2_window_g2

0x0001,

0xfc50,	// (0x0002a568) popup_note2_window_g_ParamLimits

0xfc50,	// (0x0002a568) popup_note2_window_g

0xd42a,	// (0x00027d42) bg_popup_sub_pane_cp11_ParamLimits

0xd437,	// (0x00027d4f) cell_ai3_links_pane_g1_ParamLimits

0xd44e,	// (0x00027d66) cell_ai3_links_pane_t1

0x4973,	// (0x0001f28b) set_text_pane_t1_copy1_ParamLimits

0x937b,	// (0x00023c93) cell_graphic_popup_pane_cp2_ParamLimits

0x937b,	// (0x00023c93) cell_graphic_popup_pane_cp2

0xf247,	// (0x00029b5f) cell_graphic_popup_pane_g1_cp2

0x8522,	// (0x00022e3a) cell_graphic_popup_pane_g2_cp2

0xf24f,	// (0x00029b67) cell_graphic_popup_pane_g3_cp2

0xf257,	// (0x00029b6f) cell_graphic_popup_pane_t2_cp2

0x8533,	// (0x00022e4b) grid_highlight_pane_cp3_cp2

0x8b74,	// (0x0002348c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x87d7,	// (0x000230ef) main_tmo_pane_ParamLimits

0xd782,	// (0x0002809a) popup_tmo_big_image_note_window

0xe91a,	// (0x00029232) cell_ai5_widget_list_pane

0xe922,	// (0x0002923a) cell_ai5_widget_lrg_icon_pane

0xee85,	// (0x0002979d) tmo_note_info_pane_t1_ParamLimits

0xee9a,	// (0x000297b2) tmo_note_info_pane_t2_ParamLimits

0xeeaf,	// (0x000297c7) tmo_note_info_pane_t3_ParamLimits

0xeec4,	// (0x000297dc) tmo_note_info_pane_t4_ParamLimits

0xeed6,	// (0x000297ee) tmo_note_info_pane_t5_ParamLimits

0x021a,	// (0x0001ab32) tmo_note_info_pane_t_ParamLimits

0xeff4,	// (0x0002990c) settings_container_pane_ParamLimits

0xf1bd,	// (0x00029ad5) indicator_popup_pane_cp5

0xf1bd,	// (0x00029ad5) indicator_popup_pane_cp6

0xf1ed,	// (0x00029b05) list_set_graphic_pane_copy1_ParamLimits

0x7e74,	// (0x0002278c) bg_popup_window_pane_cp23

0xf265,	// (0x00029b7d) popup_tmo_big_image_note_window_g1

0xf26f,	// (0x00029b87) popup_tmo_big_image_note_window_t1

0xf27f,	// (0x00029b97) popup_tmo_big_image_note_window_t2

0xf28f,	// (0x00029ba7) popup_tmo_big_image_note_window_t3

0x0002,

0x0233,	// (0x0001ab4b) popup_tmo_big_image_note_window_t

0xc2b3,	// (0x00026bcb) cell_ai5_widget_lrg_icon_pane_g1

0xf29f,	// (0x00029bb7) cell_ai5_widget_lrg_icon_pane_t1

0xf2ad,	// (0x00029bc5) cell_ai5_widget_list_row_pane_ParamLimits

0xf2ad,	// (0x00029bc5) cell_ai5_widget_list_row_pane

0xf2c4,	// (0x00029bdc) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2c4,	// (0x00029bdc) cell_ai5_widget_list_row_pane_g1

0xf2d1,	// (0x00029be9) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2d1,	// (0x00029be9) cell_ai5_widget_list_row_pane_t1

0xf302,	// (0x00029c1a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf302,	// (0x00029c1a) cell_ai5_widget_list_row_pane_t2

0x0002,

0x023a,	// (0x0001ab52) cell_ai5_widget_list_row_pane_t_ParamLimits

0x023a,	// (0x0001ab52) cell_ai5_widget_list_row_pane_t

0x7e74,	// (0x0002278c) main_fep_vtchi_ss_pane

0xf346,	// (0x00029c5e) popup_fep_char_pre_window

0xf34e,	// (0x00029c66) popup_fep_ituss_window

0xf36f,	// (0x00029c87) popup_fep_vkbss_window

0xf399,	// (0x00029cb1) grid_vkbss_keypad_pane_ParamLimits

0xf399,	// (0x00029cb1) grid_vkbss_keypad_pane

0xf3a5,	// (0x00029cbd) ituss_keypad_pane

0x7d21,	// (0x00022639) aid_vkbss_key_offset_ParamLimits

0x7d21,	// (0x00022639) aid_vkbss_key_offset

0x7d2d,	// (0x00022645) cell_vkbss_key_pane_ParamLimits

0x7d2d,	// (0x00022645) cell_vkbss_key_pane

0xf3b4,	// (0x00029ccc) bg_cell_vkbss_key_g1_ParamLimits

0xf3b4,	// (0x00029ccc) bg_cell_vkbss_key_g1

0xf3c0,	// (0x00029cd8) cell_vkbss_key_3p_pane_ParamLimits

0xf3c0,	// (0x00029cd8) cell_vkbss_key_3p_pane

0xf3d4,	// (0x00029cec) cell_vkbss_key_g1_ParamLimits

0xf3d4,	// (0x00029cec) cell_vkbss_key_g1

0xf3e8,	// (0x00029d00) cell_vkbss_key_t1_ParamLimits

0xf3e8,	// (0x00029d00) cell_vkbss_key_t1

0x7d43,	// (0x0002265b) cell_ituss_key_pane_ParamLimits

0x7d43,	// (0x0002265b) cell_ituss_key_pane

0xf413,	// (0x00029d2b) bg_cell_ituss_key_g1_ParamLimits

0xf413,	// (0x00029d2b) bg_cell_ituss_key_g1

0xf41f,	// (0x00029d37) cell_ituss_key_pane_g1_ParamLimits

0xf41f,	// (0x00029d37) cell_ituss_key_pane_g1

0x7d54,	// (0x0002266c) cell_ituss_key_pane_g2_ParamLimits

0x7d54,	// (0x0002266c) cell_ituss_key_pane_g2

0x0002,

0xfdbb,	// (0x0002a6d3) cell_ituss_key_pane_g_ParamLimits

0xfdbb,	// (0x0002a6d3) cell_ituss_key_pane_g

0x7d80,	// (0x00022698) cell_ituss_key_t1_ParamLimits

0x7d80,	// (0x00022698) cell_ituss_key_t1

0x7dba,	// (0x000226d2) cell_ituss_key_t2_ParamLimits

0x7dba,	// (0x000226d2) cell_ituss_key_t2

0x7deb,	// (0x00022703) cell_ituss_key_t3_ParamLimits

0x7deb,	// (0x00022703) cell_ituss_key_t3

0x7dba,	// (0x000226d2) cell_ituss_key_t4_ParamLimits

0x7dba,	// (0x000226d2) cell_ituss_key_t4

0x0004,

0xfdc2,	// (0x0002a6da) cell_ituss_key_t_ParamLimits

0xfdc2,	// (0x0002a6da) cell_ituss_key_t

0xf44b,	// (0x00029d63) cell_vkbss_key_3p_pane_g1

0xf453,	// (0x00029d6b) cell_vkbss_key_3p_pane_g2

0xf45b,	// (0x00029d73) cell_vkbss_key_3p_pane_g3

0x0002,

0x0253,	// (0x0001ab6b) cell_vkbss_key_3p_pane_g

0x7e74,	// (0x0002278c) bg_popup_fep_char_preview_window_cp02

0x7e2e,	// (0x00022746) popup_fep_char_pre_window_t1

0xe8ac,	// (0x000291c4) main_ai5_sk_pane

0xef50,	// (0x00029868) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef5c,	// (0x00029874) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc993,	// (0x000272ab) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef71,	// (0x00029889) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfdb4,	// (0x0002a6cc) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef7d,	// (0x00029895) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x87d7,	// (0x000230ef) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf463,	// (0x00029d7b) main_ai5_sk_pane_g1

0xa178,	// (0x00024a90) popup_query_code_window_g1

0xf364,	// (0x00029c7c) popup_fep_vkb_icf_pane

0xf383,	// (0x00029c9b) popup_fep_vtchi_icf_pane

0xf46c,	// (0x00029d84) bg_icf_pane

0xf478,	// (0x00029d90) list_vkb_icf_pane

0xf487,	// (0x00029d9f) bg_icf_pane_cp01

0xf49a,	// (0x00029db2) vtchi_icf_list_pane

0xf4aa,	// (0x00029dc2) list_vkb_icf_pane_t1_ParamLimits

0xf4aa,	// (0x00029dc2) list_vkb_icf_pane_t1

0xf4c0,	// (0x00029dd8) vtchi_icf_list_pane_t1_ParamLimits

0xf4c0,	// (0x00029dd8) vtchi_icf_list_pane_t1

0xf34e,	// (0x00029c66) popup_fep_ituss_window_ParamLimits

0xf383,	// (0x00029c9b) popup_fep_vtchi_icf_pane_ParamLimits

0xf3a5,	// (0x00029cbd) ituss_keypad_pane_ParamLimits

0x7d15,	// (0x0002262d) ituss_sks_pane

0xf46c,	// (0x00029d84) bg_icf_pane_ParamLimits

0xf32a,	// (0x00029c42) icf_edit_indi_pane_ParamLimits

0xf32a,	// (0x00029c42) icf_edit_indi_pane

0xf478,	// (0x00029d90) list_vkb_icf_pane_ParamLimits

0xf487,	// (0x00029d9f) bg_icf_pane_cp01_ParamLimits

0xf339,	// (0x00029c51) icf_edit_indi_pane_cp01_ParamLimits

0xf339,	// (0x00029c51) icf_edit_indi_pane_cp01

0xf4a2,	// (0x00029dba) vtchi_query_pane

0xc531,	// (0x00026e49) icf_edit_indi_pane_g1_ParamLimits

0xc531,	// (0x00026e49) icf_edit_indi_pane_g1

0xf531,	// (0x00029e49) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x00029e49) icf_edit_indi_pane_g2

0x0001,

0xfdd2,	// (0x0002a6ea) icf_edit_indi_pane_g_ParamLimits

0xfdd2,	// (0x0002a6ea) icf_edit_indi_pane_g

0xf540,	// (0x00029e58) icf_edit_indi_pane_t1

0xf4da,	// (0x00029df2) bg_input_focus_pane_cp042

0x8706,	// (0x0002301e) vtchi_button_pane

0xf4e3,	// (0x00029dfb) vtchi_query_pane_t1

0xf4f1,	// (0x00029e09) vtchi_query_pane_t2

0xf4ff,	// (0x00029e17) vtchi_query_pane_t3

0x0002,

0x025a,	// (0x0001ab72) vtchi_query_pane_t

0x7e74,	// (0x0002278c) bg_button_pane_cp13

0xf50d,	// (0x00029e25) vtchi_button_pane_g1

0x7e3d,	// (0x00022755) ituss_sks_pane_g1

0x7e48,	// (0x00022760) ituss_sks_pane_g2

0x0001,

0xfdcd,	// (0x0002a6e5) ituss_sks_pane_g

0xf515,	// (0x00029e2d) ituss_sks_pane_t1

0xf523,	// (0x00029e3b) ituss_sks_pane_t2

0x0001,

0x0266,	// (0x0001ab7e) ituss_sks_pane_t

0xbd4d,	// (0x00026665) indicator_nsta_pane_cp_g1

0xbd55,	// (0x0002666d) indicator_nsta_pane_cp_g2

0xbd5d,	// (0x00026675) indicator_nsta_pane_cp_g3

0xbd4d,	// (0x00026665) indicator_nsta_pane_cp_g4

0xbd55,	// (0x0002666d) indicator_nsta_pane_cp_g5

0xbd5d,	// (0x00026675) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x0002a3b2) indicator_nsta_pane_cp_g

0xe496,	// (0x00028dae) cell_graphic2_pane_t2_ParamLimits

0xe496,	// (0x00028dae) cell_graphic2_pane_t2

0x0001,

0x011c,	// (0x0001aa34) cell_graphic2_pane_t_ParamLimits

0x011c,	// (0x0001aa34) cell_graphic2_pane_t

0xe4c3,	// (0x00028ddb) cell_graphic2_control_pane_t1

0x8f18,	// (0x00023830) signal_pane_g3_ParamLimits

0x8f18,	// (0x00023830) signal_pane_g3

0x8f2a,	// (0x00023842) signal_pane_g4_ParamLimits

0x8f2a,	// (0x00023842) signal_pane_g4

0xf314,	// (0x00029c2c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf314,	// (0x00029c2c) cell_ai5_widget_list_row_pane_t3

0xf439,	// (0x00029d51) cell_ituss_key_pane_t1_ParamLimits

0xf439,	// (0x00029d51) cell_ituss_key_pane_t1

0x9dc3,	// (0x000246db) form_field_data_wide_pane_vc_t2_ParamLimits

0x9dc3,	// (0x000246db) form_field_data_wide_pane_vc_t2

0x9dd7,	// (0x000246ef) form_field_data_wide_pane_vc_t3_ParamLimits

0x9dd7,	// (0x000246ef) form_field_data_wide_pane_vc_t3

0x0002,

0xf802,	// (0x0002a11a) form_field_data_wide_pane_vc_t_ParamLimits

0xf802,	// (0x0002a11a) form_field_data_wide_pane_vc_t

0xba15,	// (0x0002632d) form_field_slider_wide_pane_vc_t3_ParamLimits

0xba15,	// (0x0002632d) form_field_slider_wide_pane_vc_t3

0xbaf3,	// (0x0002640b) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbaf3,	// (0x0002640b) form_field_popup_wide_pane_vc_t2

0xbb0a,	// (0x00026422) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbb0a,	// (0x00026422) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x0002a3a1) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0002a3a1) form_field_popup_wide_pane_vc_t

0x7b2f,	// (0x00022447) aid_fshwr2_btn_pane_ParamLimits

0x7b3b,	// (0x00022453) aid_fshwr2_syb_pane_ParamLimits

0x7b47,	// (0x0002245f) aid_fshwr2_txt_pane_ParamLimits

0x87d7,	// (0x000230ef) fshwr2_bg_pane_ParamLimits

0x7b53,	// (0x0002246b) fshwr2_func_candi_pane_ParamLimits

0x7b68,	// (0x00022480) fshwr2_hwr_syb_pane_ParamLimits

0x7b78,	// (0x00022490) fshwr2_icf_pane_ParamLimits

0x56a8,	// (0x0001ffc0) list_double_graphic_pane_vc_g4_ParamLimits

0x56a8,	// (0x0001ffc0) list_double_graphic_pane_vc_g4

0x7d74,	// (0x0002268c) cell_ituss_key_pane_g3_ParamLimits

0x7d74,	// (0x0002268c) cell_ituss_key_pane_g3

0x7e1c,	// (0x00022734) cell_ituss_key_t5_ParamLimits

0x7e1c,	// (0x00022734) cell_ituss_key_t5

0xf36f,	// (0x00029c87) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small

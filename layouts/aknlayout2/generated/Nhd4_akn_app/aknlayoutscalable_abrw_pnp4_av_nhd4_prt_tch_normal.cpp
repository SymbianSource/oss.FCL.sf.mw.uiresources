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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000d487 };

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
0x7b57,	// (0x00014fde) Screen

0x7b63,	// (0x00014fea) application_window_ParamLimits

0x7b63,	// (0x00014fea) application_window

0x365a,	// (0x00010ae1) screen_g1

0x55ae,	// (0x00012a35) area_bottom_pane_ParamLimits

0x55ae,	// (0x00012a35) area_bottom_pane

0x566e,	// (0x00012af5) area_top_pane_ParamLimits

0x566e,	// (0x00012af5) area_top_pane

0x570c,	// (0x00012b93) main_pane_ParamLimits

0x570c,	// (0x00012b93) main_pane

0x37d3,	// (0x00010c5a) misc_graphics

0x8cc2,	// (0x00016149) battery_pane_ParamLimits

0x8cc2,	// (0x00016149) battery_pane

0x9ab3,	// (0x00016f3a) bg_status_flat_pane_g8

0x9abb,	// (0x00016f42) bg_status_flat_pane_g9

0x8d8a,	// (0x00016211) context_pane_ParamLimits

0x8d8a,	// (0x00016211) context_pane

0x8ea0,	// (0x00016327) navi_pane_ParamLimits

0x8ea0,	// (0x00016327) navi_pane

0x8f24,	// (0x000163ab) signal_pane_ParamLimits

0x8f24,	// (0x000163ab) signal_pane

0x0008,

0xf845,	// (0x0001cccc) bg_status_flat_pane_g

0x8f91,	// (0x00016418) status_pane_g1_ParamLimits

0x8f91,	// (0x00016418) status_pane_g1

0x8fa5,	// (0x0001642c) status_pane_g2_ParamLimits

0x8fa5,	// (0x0001642c) status_pane_g2

0x8fb1,	// (0x00016438) status_pane_g3_ParamLimits

0x8fb1,	// (0x00016438) status_pane_g3

0x0004,

0xf76c,	// (0x0001cbf3) status_pane_g_ParamLimits

0xf76c,	// (0x0001cbf3) status_pane_g

0x8fe5,	// (0x0001646c) title_pane_ParamLimits

0x8fe5,	// (0x0001646c) title_pane

0x9022,	// (0x000164a9) uni_indicator_pane_ParamLimits

0x9022,	// (0x000164a9) uni_indicator_pane

0x4b30,	// (0x00011fb7) bg_list_pane_ParamLimits

0x4b30,	// (0x00011fb7) bg_list_pane

0x8c3e,	// (0x000160c5) find_pane

0x4b50,	// (0x00011fd7) listscroll_app_pane_ParamLimits

0x4b50,	// (0x00011fd7) listscroll_app_pane

0x4b5c,	// (0x00011fe3) listscroll_form_pane

0x5fd2,	// (0x00013459) listscroll_gen_pane_ParamLimits

0x5fd2,	// (0x00013459) listscroll_gen_pane

0x5fe6,	// (0x0001346d) listscroll_set_pane

0x86d5,	// (0x00015b5c) main_idle_act_pane

0x4914,	// (0x00011d9b) main_idle_trad_pane

0x4914,	// (0x00011d9b) main_list_empty_pane

0x4b50,	// (0x00011fd7) main_midp_pane

0x4b7e,	// (0x00012005) main_pane_g1_ParamLimits

0x4b7e,	// (0x00012005) main_pane_g1

0x5ffc,	// (0x00013483) popup_ai_message_window_ParamLimits

0x5ffc,	// (0x00013483) popup_ai_message_window

0x60a0,	// (0x00013527) popup_fep_china_uni_window_ParamLimits

0x60a0,	// (0x00013527) popup_fep_china_uni_window

0x60fa,	// (0x00013581) popup_fep_japan_candidate_window_ParamLimits

0x60fa,	// (0x00013581) popup_fep_japan_candidate_window

0x6118,	// (0x0001359f) popup_fep_japan_predictive_window_ParamLimits

0x6118,	// (0x0001359f) popup_fep_japan_predictive_window

0x6148,	// (0x000135cf) popup_find_window

0x6155,	// (0x000135dc) popup_grid_graphic_window_ParamLimits

0x6155,	// (0x000135dc) popup_grid_graphic_window

0x617f,	// (0x00013606) popup_large_graphic_colour_window

0x61a5,	// (0x0001362c) popup_menu_window_ParamLimits

0x61a5,	// (0x0001362c) popup_menu_window

0x6361,	// (0x000137e8) popup_note_image_window

0x634d,	// (0x000137d4) popup_note_wait_window_ParamLimits

0x634d,	// (0x000137d4) popup_note_wait_window

0x634d,	// (0x000137d4) popup_note_window_ParamLimits

0x634d,	// (0x000137d4) popup_note_window

0x63b7,	// (0x0001383e) popup_query_code_window_ParamLimits

0x63b7,	// (0x0001383e) popup_query_code_window

0x63cb,	// (0x00013852) popup_query_data_code_window_ParamLimits

0x63cb,	// (0x00013852) popup_query_data_code_window

0x63e8,	// (0x0001386f) popup_query_data_window_ParamLimits

0x63e8,	// (0x0001386f) popup_query_data_window

0x6404,	// (0x0001388b) popup_query_sat_info_window_ParamLimits

0x6404,	// (0x0001388b) popup_query_sat_info_window

0x643d,	// (0x000138c4) popup_snote_single_graphic_window_ParamLimits

0x643d,	// (0x000138c4) popup_snote_single_graphic_window

0x643d,	// (0x000138c4) popup_snote_single_text_window_ParamLimits

0x643d,	// (0x000138c4) popup_snote_single_text_window

0x6452,	// (0x000138d9) popup_sub_window_general

0x6582,	// (0x00013a09) popup_window_general_ParamLimits

0x6582,	// (0x00013a09) popup_window_general

0x8c46,	// (0x000160cd) power_save_pane

0x5e5c,	// (0x000132e3) control_pane_g1_ParamLimits

0x5e5c,	// (0x000132e3) control_pane_g1

0x5e83,	// (0x0001330a) control_pane_g2_ParamLimits

0x5e83,	// (0x0001330a) control_pane_g2

0x4af3,	// (0x00011f7a) control_pane_g3_ParamLimits

0x4af3,	// (0x00011f7a) control_pane_g3

0x0007,

0xf754,	// (0x0001cbdb) control_pane_g_ParamLimits

0xf754,	// (0x0001cbdb) control_pane_g

0x5ecd,	// (0x00013354) control_pane_t1_ParamLimits

0x5ecd,	// (0x00013354) control_pane_t1

0x5f21,	// (0x000133a8) control_pane_t2_ParamLimits

0x5f21,	// (0x000133a8) control_pane_t2

0x0002,

0xf765,	// (0x0001cbec) control_pane_t_ParamLimits

0xf765,	// (0x0001cbec) control_pane_t

0x8b70,	// (0x00015ff7) navi_navi_volume_pane_cp1

0x8b78,	// (0x00015fff) status_small_icon_pane

0x4abf,	// (0x00011f46) status_small_pane_g1_ParamLimits

0x4abf,	// (0x00011f46) status_small_pane_g1

0x8b80,	// (0x00016007) status_small_pane_g2_ParamLimits

0x8b80,	// (0x00016007) status_small_pane_g2

0x8b8c,	// (0x00016013) status_small_pane_g3_ParamLimits

0x8b8c,	// (0x00016013) status_small_pane_g3

0x8b98,	// (0x0001601f) status_small_pane_g4_ParamLimits

0x8b98,	// (0x0001601f) status_small_pane_g4

0x8ba4,	// (0x0001602b) status_small_pane_g5_ParamLimits

0x8ba4,	// (0x0001602b) status_small_pane_g5

0x8bb2,	// (0x00016039) status_small_pane_g6_ParamLimits

0x8bb2,	// (0x00016039) status_small_pane_g6

0x0007,

0xf743,	// (0x0001cbca) status_small_pane_g_ParamLimits

0xf743,	// (0x0001cbca) status_small_pane_g

0x8be1,	// (0x00016068) status_small_pane_t1

0x8c03,	// (0x0001608a) status_small_wait_pane_ParamLimits

0x8c03,	// (0x0001608a) status_small_wait_pane

0x8868,	// (0x00015cef) aid_levels_signal_ParamLimits

0x8868,	// (0x00015cef) aid_levels_signal

0x887a,	// (0x00015d01) signal_pane_g1_ParamLimits

0x887a,	// (0x00015d01) signal_pane_g1

0x888f,	// (0x00015d16) signal_pane_g2_ParamLimits

0x888f,	// (0x00015d16) signal_pane_g2

0x0003,

0xf6d4,	// (0x0001cb5b) signal_pane_g_ParamLimits

0xf6d4,	// (0x0001cb5b) signal_pane_g

0x43c8,	// (0x0001184f) context_pane_g1

0x7b73,	// (0x00014ffa) title_pane_g1

0x7b9d,	// (0x00015024) title_pane_t1

0x3809,	// (0x00010c90) title_pane_t2

0x382f,	// (0x00010cb6) title_pane_t3

0x0002,

0xf532,	// (0x0001c9b9) title_pane_t

0x903a,	// (0x000164c1) aid_levels_battery_ParamLimits

0x903a,	// (0x000164c1) aid_levels_battery

0x904e,	// (0x000164d5) battery_pane_g1_ParamLimits

0x904e,	// (0x000164d5) battery_pane_g1

0x9064,	// (0x000164eb) battery_pane_g2_ParamLimits

0x9064,	// (0x000164eb) battery_pane_g2

0x0001,

0xf777,	// (0x0001cbfe) battery_pane_g_ParamLimits

0xf777,	// (0x0001cbfe) battery_pane_g

0xa3d7,	// (0x0001785e) uni_indicator_pane_g1

0xa3ea,	// (0x00017871) uni_indicator_pane_g2

0xa3fc,	// (0x00017883) uni_indicator_pane_g3

0x0005,

0xf8ed,	// (0x0001cd74) uni_indicator_pane_g

0x47d8,	// (0x00011c5f) navi_icon_pane_ParamLimits

0x47d8,	// (0x00011c5f) navi_icon_pane

0x4715,	// (0x00011b9c) navi_midp_pane

0x47f4,	// (0x00011c7b) navi_navi_pane

0x47fe,	// (0x00011c85) navi_text_pane_ParamLimits

0x47fe,	// (0x00011c85) navi_text_pane

0x365a,	// (0x00010ae1) status_small_wait_pane_g1

0x3a9a,	// (0x00010f21) status_small_wait_pane_g2

0x0001,

0xf8e8,	// (0x0001cd6f) status_small_wait_pane_g

0xa0fe,	// (0x00017585) navi_navi_icon_text_pane

0xa106,	// (0x0001758d) navi_navi_pane_g1_ParamLimits

0xa106,	// (0x0001758d) navi_navi_pane_g1

0xa118,	// (0x0001759f) navi_navi_pane_g2_ParamLimits

0xa118,	// (0x0001759f) navi_navi_pane_g2

0x0001,

0xf8b6,	// (0x0001cd3d) navi_navi_pane_g_ParamLimits

0xf8b6,	// (0x0001cd3d) navi_navi_pane_g

0xa12a,	// (0x000175b1) navi_navi_tabs_pane

0xa133,	// (0x000175ba) navi_navi_text_pane

0xa0fe,	// (0x00017585) navi_navi_volume_pane

0xa0da,	// (0x00017561) navi_text_pane_t1

0xa0ce,	// (0x00017555) navi_icon_pane_g1

0xa021,	// (0x000174a8) navi_navi_text_pane_t1

0x689e,	// (0x00013d25) navi_navi_volume_pane_g1

0x68a6,	// (0x00013d2d) volume_small_pane

0x9f87,	// (0x0001740e) navi_navi_icon_text_pane_g1

0x9f8f,	// (0x00017416) navi_navi_icon_text_pane_t1

0x47f4,	// (0x00011c7b) navi_tabs_2_long_pane

0x47f4,	// (0x00011c7b) navi_tabs_2_pane

0x47f4,	// (0x00011c7b) navi_tabs_3_long_pane

0x47f4,	// (0x00011c7b) navi_tabs_3_pane

0x47f4,	// (0x00011c7b) navi_tabs_4_pane

0x687e,	// (0x00013d05) tabs_2_active_pane_ParamLimits

0x687e,	// (0x00013d05) tabs_2_active_pane

0x688e,	// (0x00013d15) tabs_2_passive_pane_ParamLimits

0x688e,	// (0x00013d15) tabs_2_passive_pane

0x684c,	// (0x00013cd3) tabs_3_active_pane_ParamLimits

0x684c,	// (0x00013cd3) tabs_3_active_pane

0x685c,	// (0x00013ce3) tabs_3_passive_pane_ParamLimits

0x685c,	// (0x00013ce3) tabs_3_passive_pane

0x686d,	// (0x00013cf4) tabs_3_passive_pane_cp_ParamLimits

0x686d,	// (0x00013cf4) tabs_3_passive_pane_cp

0x6808,	// (0x00013c8f) tabs_4_active_pane_ParamLimits

0x6808,	// (0x00013c8f) tabs_4_active_pane

0x6819,	// (0x00013ca0) tabs_4_passive_pane_ParamLimits

0x6819,	// (0x00013ca0) tabs_4_passive_pane

0x682a,	// (0x00013cb1) tabs_4_passive_pane_cp_ParamLimits

0x682a,	// (0x00013cb1) tabs_4_passive_pane_cp

0x683b,	// (0x00013cc2) tabs_4_passive_pane_cp2_ParamLimits

0x683b,	// (0x00013cc2) tabs_4_passive_pane_cp2

0x67e4,	// (0x00013c6b) tabs_2_long_active_pane_ParamLimits

0x67e4,	// (0x00013c6b) tabs_2_long_active_pane

0x67f6,	// (0x00013c7d) tabs_2_long_passive_pane_ParamLimits

0x67f6,	// (0x00013c7d) tabs_2_long_passive_pane

0x679f,	// (0x00013c26) tabs_3_long_active_pane_ParamLimits

0x679f,	// (0x00013c26) tabs_3_long_active_pane

0x67b8,	// (0x00013c3f) tabs_3_long_passive_pane_ParamLimits

0x67b8,	// (0x00013c3f) tabs_3_long_passive_pane

0x67cb,	// (0x00013c52) tabs_3_long_passive_pane_cp_ParamLimits

0x67cb,	// (0x00013c52) tabs_3_long_passive_pane_cp

0x6745,	// (0x00013bcc) volume_small_pane_g1

0x674e,	// (0x00013bd5) volume_small_pane_g2

0x6757,	// (0x00013bde) volume_small_pane_g3

0x6760,	// (0x00013be7) volume_small_pane_g4

0x6769,	// (0x00013bf0) volume_small_pane_g5

0x6772,	// (0x00013bf9) volume_small_pane_g6

0x677b,	// (0x00013c02) volume_small_pane_g7

0x6784,	// (0x00013c0b) volume_small_pane_g8

0x678d,	// (0x00013c14) volume_small_pane_g9

0x6796,	// (0x00013c1d) volume_small_pane_g10

0x0009,

0xf882,	// (0x0001cd09) volume_small_pane_g

0x384f,	// (0x00010cd6) bg_active_tab_pane_cp2_ParamLimits

0x384f,	// (0x00010cd6) bg_active_tab_pane_cp2

0x7c05,	// (0x0001508c) tabs_3_active_pane_g1

0x7c0d,	// (0x00015094) tabs_3_active_pane_t1

0x384f,	// (0x00010cd6) bg_passive_tab_pane_cp2_ParamLimits

0x384f,	// (0x00010cd6) bg_passive_tab_pane_cp2

0x7c05,	// (0x0001508c) tabs_3_passive_pane_g1

0x7c0d,	// (0x00015094) tabs_3_passive_pane_t1

0x384f,	// (0x00010cd6) bg_active_tab_pane_cp3_ParamLimits

0x384f,	// (0x00010cd6) bg_active_tab_pane_cp3

0x7c1f,	// (0x000150a6) tabs_4_active_pane_g1

0x7c27,	// (0x000150ae) tabs_4_active_pane_t1

0x384f,	// (0x00010cd6) bg_passive_tab_pane_cp3_ParamLimits

0x384f,	// (0x00010cd6) bg_passive_tab_pane_cp3

0x7c1f,	// (0x000150a6) tabs_4_1_passive_pane_g1

0x7c27,	// (0x000150ae) tabs_4_1_passive_pane_t1

0x4b50,	// (0x00011fd7) list_highlight_pane_cp2

0xa651,	// (0x00017ad8) list_set_pane_ParamLimits

0xa651,	// (0x00017ad8) list_set_pane

0xa6f3,	// (0x00017b7a) main_pane_set_t1_ParamLimits

0xa6f3,	// (0x00017b7a) main_pane_set_t1

0xa713,	// (0x00017b9a) main_pane_set_t2_ParamLimits

0xa713,	// (0x00017b9a) main_pane_set_t2

0xa727,	// (0x00017bae) main_pane_set_t3_ParamLimits

0xa727,	// (0x00017bae) main_pane_set_t3

0xa739,	// (0x00017bc0) main_pane_set_t4_ParamLimits

0xa739,	// (0x00017bc0) main_pane_set_t4

0x0003,

0xf952,	// (0x0001cdd9) main_pane_set_t_ParamLimits

0xf952,	// (0x0001cdd9) main_pane_set_t

0xa74b,	// (0x00017bd2) setting_code_pane

0xa757,	// (0x00017bde) setting_slider_graphic_pane

0xa757,	// (0x00017bde) setting_slider_pane

0xa757,	// (0x00017bde) setting_text_pane

0xa757,	// (0x00017bde) setting_volume_pane

0x594d,	// (0x00012dd4) volume_set_pane

0x384f,	// (0x00010cd6) bg_set_opt_pane_cp

0x5955,	// (0x00012ddc) setting_slider_pane_t1

0x596e,	// (0x00012df5) setting_slider_pane_t2

0x5988,	// (0x00012e0f) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0001c9c0) setting_slider_pane_t

0x59a0,	// (0x00012e27) slider_set_pane

0x37d3,	// (0x00010c5a) bg_set_opt_pane_cp2

0x385d,	// (0x00010ce4) setting_slider_graphic_pane_g1

0x59b6,	// (0x00012e3d) setting_slider_graphic_pane_t1

0x59c6,	// (0x00012e4d) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0001c9c7) setting_slider_graphic_pane_t

0x59d6,	// (0x00012e5d) slider_set_pane_cp

0x37d3,	// (0x00010c5a) input_focus_pane_cp1

0xa610,	// (0x00017a97) list_set_text_pane

0x365a,	// (0x00010ae1) setting_text_pane_g1

0x37d3,	// (0x00010c5a) input_focus_pane_cp2

0x365a,	// (0x00010ae1) setting_code_pane_g1

0x3866,	// (0x00010ced) setting_code_pane_t1

0x3874,	// (0x00010cfb) set_text_pane_t1_ParamLimits

0x3874,	// (0x00010cfb) set_text_pane_t1

0x3d37,	// (0x000111be) set_opt_bg_pane_g1

0x3d3f,	// (0x000111c6) set_opt_bg_pane_g2

0xa5ea,	// (0x00017a71) set_opt_bg_pane_g3

0x3d4f,	// (0x000111d6) set_opt_bg_pane_g4

0x3d57,	// (0x000111de) set_opt_bg_pane_g5

0x3d5f,	// (0x000111e6) set_opt_bg_pane_g6

0xa5f4,	// (0x00017a7b) set_opt_bg_pane_g7

0xa5fc,	// (0x00017a83) set_opt_bg_pane_g8

0xa606,	// (0x00017a8d) set_opt_bg_pane_g9

0x0008,

0xf93f,	// (0x0001cdc6) set_opt_bg_pane_g

0xa5dd,	// (0x00017a64) slider_set_pane_g1

0x6913,	// (0x00013d9a) slider_set_pane_g2

0x0006,

0xf930,	// (0x0001cdb7) slider_set_pane_g

0x68af,	// (0x00013d36) volume_set_pane_g1

0x68b7,	// (0x00013d3e) volume_set_pane_g2

0x68bf,	// (0x00013d46) volume_set_pane_g3

0x68c7,	// (0x00013d4e) volume_set_pane_g4

0x68cf,	// (0x00013d56) volume_set_pane_g5

0x68d7,	// (0x00013d5e) volume_set_pane_g6

0x68df,	// (0x00013d66) volume_set_pane_g7

0x68e7,	// (0x00013d6e) volume_set_pane_g8

0x68ef,	// (0x00013d76) volume_set_pane_g9

0x68f7,	// (0x00013d7e) volume_set_pane_g10

0x0009,

0xf908,	// (0x0001cd8f) volume_set_pane_g

0x7c39,	// (0x000150c0) indicator_pane_ParamLimits

0x7c39,	// (0x000150c0) indicator_pane

0x7c45,	// (0x000150cc) main_idle_pane_g2_ParamLimits

0x7c45,	// (0x000150cc) main_idle_pane_g2

0x7c6d,	// (0x000150f4) main_pane_idle_g1_ParamLimits

0x7c6d,	// (0x000150f4) main_pane_idle_g1

0x388e,	// (0x00010d15) popup_clock_digital_analogue_window_ParamLimits

0x388e,	// (0x00010d15) popup_clock_digital_analogue_window

0x7c7a,	// (0x00015101) soft_indicator_pane_ParamLimits

0x7c7a,	// (0x00015101) soft_indicator_pane

0x7c86,	// (0x0001510d) wallpaper_pane_ParamLimits

0x7c86,	// (0x0001510d) wallpaper_pane

0x365a,	// (0x00010ae1) wallpaper_pane_g1

0x7c92,	// (0x00015119) indicator_pane_g1_ParamLimits

0x7c92,	// (0x00015119) indicator_pane_g1

0xab01,	// (0x00017f88) navi_navi_icon_text_pane_srt_g1

0x38bc,	// (0x00010d43) soft_indicator_pane_t1

0x38d6,	// (0x00010d5d) aid_ps_area_pane

0x7c9e,	// (0x00015125) aid_ps_clock_pane

0x38e7,	// (0x00010d6e) aid_ps_indicator_pane

0x38f3,	// (0x00010d7a) indicator_ps_pane_ParamLimits

0x38f3,	// (0x00010d7a) indicator_ps_pane

0x3902,	// (0x00010d89) power_save_pane_g1_ParamLimits

0x3902,	// (0x00010d89) power_save_pane_g1

0x390e,	// (0x00010d95) power_save_pane_g2_ParamLimits

0x390e,	// (0x00010d95) power_save_pane_g2

0x5562,	// (0x000129e9) aid_navinavi_width_pane

0x38d6,	// (0x00010d5d) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0001c9cc) power_save_pane_g_ParamLimits

0xf545,	// (0x0001c9cc) power_save_pane_g

0x391c,	// (0x00010da3) power_save_pane_t1_ParamLimits

0x391c,	// (0x00010da3) power_save_pane_t1

0x7c9e,	// (0x00015125) aid_ps_clock_pane_ParamLimits

0x38e7,	// (0x00010d6e) aid_ps_indicator_pane_ParamLimits

0x392e,	// (0x00010db5) power_save_pane_t4_ParamLimits

0x392e,	// (0x00010db5) power_save_pane_t4

0x0001,

0xf54a,	// (0x0001c9d1) power_save_pane_t_ParamLimits

0xf54a,	// (0x0001c9d1) power_save_pane_t

0x3958,	// (0x00010ddf) power_save_t3_ParamLimits

0x3958,	// (0x00010ddf) power_save_t3

0x3943,	// (0x00010dca) power_save_t2_ParamLimits

0x3943,	// (0x00010dca) power_save_t2

0x396d,	// (0x00010df4) indicator_ps_pane_g1

0x7cac,	// (0x00015133) ai_gene_pane_ParamLimits

0x7cac,	// (0x00015133) ai_gene_pane

0x7cb8,	// (0x0001513f) ai_links_pane_ParamLimits

0x7cb8,	// (0x0001513f) ai_links_pane

0x7cc4,	// (0x0001514b) indicator_pane_cp1_ParamLimits

0x7cc4,	// (0x0001514b) indicator_pane_cp1

0x7cd0,	// (0x00015157) main_pane_idle_g1_cp_ParamLimits

0x7cd0,	// (0x00015157) main_pane_idle_g1_cp

0x7cdc,	// (0x00015163) popup_ai_links_title_window

0x7ce5,	// (0x0001516c) soft_indicator_pane_cp1_ParamLimits

0x7ce5,	// (0x0001516c) soft_indicator_pane_cp1

0xa3c5,	// (0x0001784c) ai_links_pane_g1

0xa3ce,	// (0x00017855) grid_ai_links_pane

0xa3a8,	// (0x0001782f) ai_gene_pane_1

0xa3b3,	// (0x0001783a) ai_gene_pane_2

0xa3bc,	// (0x00017843) list_highlight_pane_cp4

0xa38c,	// (0x00017813) cell_ai_link_pane_ParamLimits

0xa38c,	// (0x00017813) cell_ai_link_pane

0xa384,	// (0x0001780b) cell_ai_link_pane_g1

0x3a9a,	// (0x00010f21) cell_ai_link_pane_g2

0x0001,

0xf8e3,	// (0x0001cd6a) cell_ai_link_pane_g

0x37d3,	// (0x00010c5a) grid_highlight_cp2

0x37d3,	// (0x00010c5a) bg_popup_sub_pane_cp1

0x3984,	// (0x00010e0b) popup_ai_links_title_window_t1

0xa2d4,	// (0x0001775b) ai_gene_pane_1_g1_ParamLimits

0xa2d4,	// (0x0001775b) ai_gene_pane_1_g1

0xa2e0,	// (0x00017767) ai_gene_pane_1_g2_ParamLimits

0xa2e0,	// (0x00017767) ai_gene_pane_1_g2

0x0001,

0xf8d9,	// (0x0001cd60) ai_gene_pane_1_g_ParamLimits

0xf8d9,	// (0x0001cd60) ai_gene_pane_1_g

0xa2ed,	// (0x00017774) ai_gene_pane_1_t1_ParamLimits

0xa2ed,	// (0x00017774) ai_gene_pane_1_t1

0xa321,	// (0x000177a8) grid_ai_soft_ind_pane

0xa2bf,	// (0x00017746) ai_gene_pane_2_t1_ParamLimits

0xa2bf,	// (0x00017746) ai_gene_pane_2_t1

0x7cf1,	// (0x00015178) main_pane_empty_t1_ParamLimits

0x7cf1,	// (0x00015178) main_pane_empty_t1

0x7d09,	// (0x00015190) main_pane_empty_t2_ParamLimits

0x7d09,	// (0x00015190) main_pane_empty_t2

0x7d1e,	// (0x000151a5) main_pane_empty_t3_ParamLimits

0x7d1e,	// (0x000151a5) main_pane_empty_t3

0x7d30,	// (0x000151b7) main_pane_empty_t4_ParamLimits

0x7d30,	// (0x000151b7) main_pane_empty_t4

0x7d42,	// (0x000151c9) main_pane_empty_t5_ParamLimits

0x7d42,	// (0x000151c9) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0001c9d6) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0001c9d6) main_pane_empty_t

0x3dbc,	// (0x00011243) bg_popup_window_pane_ParamLimits

0x3dbc,	// (0x00011243) bg_popup_window_pane

0xa02f,	// (0x000174b6) find_popup_pane_cp2_ParamLimits

0xa02f,	// (0x000174b6) find_popup_pane_cp2

0xa03b,	// (0x000174c2) heading_pane_ParamLimits

0xa03b,	// (0x000174c2) heading_pane

0x37d3,	// (0x00010c5a) bg_popup_sub_pane

0x9fa9,	// (0x00017430) bg_popup_window_pane_g1_ParamLimits

0x9fa9,	// (0x00017430) bg_popup_window_pane_g1

0x9fb5,	// (0x0001743c) bg_popup_window_pane_g2_ParamLimits

0x9fb5,	// (0x0001743c) bg_popup_window_pane_g2

0x9fc1,	// (0x00017448) bg_popup_window_pane_g3_ParamLimits

0x9fc1,	// (0x00017448) bg_popup_window_pane_g3

0x9fcd,	// (0x00017454) bg_popup_window_pane_g4_ParamLimits

0x9fcd,	// (0x00017454) bg_popup_window_pane_g4

0x9fd9,	// (0x00017460) bg_popup_window_pane_g5_ParamLimits

0x9fd9,	// (0x00017460) bg_popup_window_pane_g5

0x9fe5,	// (0x0001746c) bg_popup_window_pane_g6_ParamLimits

0x9fe5,	// (0x0001746c) bg_popup_window_pane_g6

0x9ff1,	// (0x00017478) bg_popup_window_pane_g7_ParamLimits

0x9ff1,	// (0x00017478) bg_popup_window_pane_g7

0x9ffd,	// (0x00017484) bg_popup_window_pane_g8_ParamLimits

0x9ffd,	// (0x00017484) bg_popup_window_pane_g8

0xa009,	// (0x00017490) bg_popup_window_pane_g9_ParamLimits

0xa009,	// (0x00017490) bg_popup_window_pane_g9

0xa015,	// (0x0001749c) bg_popup_window_pane_g10_ParamLimits

0xa015,	// (0x0001749c) bg_popup_window_pane_g10

0x0009,

0xf8a1,	// (0x0001cd28) bg_popup_window_pane_g_ParamLimits

0xf8a1,	// (0x0001cd28) bg_popup_window_pane_g

0x9f3e,	// (0x000173c5) bg_popup_heading_pane_ParamLimits

0x9f3e,	// (0x000173c5) bg_popup_heading_pane

0x699b,	// (0x00013e22) tabs_4_passive_pane_cp_srt_ParamLimits

0x699b,	// (0x00013e22) tabs_4_passive_pane_cp_srt

0x69ad,	// (0x00013e34) tabs_4_passive_pane_srt_ParamLimits

0x9f52,	// (0x000173d9) heading_pane_g2

0x69ad,	// (0x00013e34) tabs_4_passive_pane_srt

0x4b50,	// (0x00011fd7) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4b50,	// (0x00011fd7) bg_passive_tab_pane_cp3_srt

0x9f5a,	// (0x000173e1) heading_pane_t1_ParamLimits

0x9f5a,	// (0x000173e1) heading_pane_t1

0x9f71,	// (0x000173f8) heading_pane_t2_ParamLimits

0x9f71,	// (0x000173f8) heading_pane_t2

0x0001,

0xf89c,	// (0x0001cd23) heading_pane_t_ParamLimits

0xf89c,	// (0x0001cd23) heading_pane_t

0x9a7b,	// (0x00016f02) bg_popup_heading_pane_g1

0x9b2a,	// (0x00016fb1) bg_popup_heading_pane_g2

0x9b34,	// (0x00016fbb) bg_popup_heading_pane_g3

0x9b3e,	// (0x00016fc5) bg_popup_heading_pane_g4

0x9b48,	// (0x00016fcf) bg_popup_heading_pane_g5

0x9b52,	// (0x00016fd9) bg_popup_heading_pane_g6

0x9b5a,	// (0x00016fe1) bg_popup_heading_pane_g7

0x9b62,	// (0x00016fe9) bg_popup_heading_pane_g8

0x9b6c,	// (0x00016ff3) bg_popup_heading_pane_g9

0x0008,

0xf858,	// (0x0001ccdf) bg_popup_heading_pane_g

0x9167,	// (0x000165ee) bg_popup_sub_pane_g1

0x9177,	// (0x000165fe) bg_popup_sub_pane_g2

0x916f,	// (0x000165f6) bg_popup_sub_pane_g3

0x9187,	// (0x0001660e) bg_popup_sub_pane_g4

0x917f,	// (0x00016606) bg_popup_sub_pane_g5

0x918f,	// (0x00016616) bg_popup_sub_pane_g6

0x9197,	// (0x0001661e) bg_popup_sub_pane_g7

0x91a7,	// (0x0001662e) bg_popup_sub_pane_g8

0x919f,	// (0x00016626) bg_popup_sub_pane_g9

0x0008,

0xf832,	// (0x0001ccb9) bg_popup_sub_pane_g

0x3841,	// (0x00010cc8) bg_popup_window_pane_cp5_ParamLimits

0x3841,	// (0x00010cc8) bg_popup_window_pane_cp5

0x39a1,	// (0x00010e28) popup_note_window_g1_ParamLimits

0x39a1,	// (0x00010e28) popup_note_window_g1

0x39ad,	// (0x00010e34) popup_note_window_t1_ParamLimits

0x39ad,	// (0x00010e34) popup_note_window_t1

0x39c3,	// (0x00010e4a) popup_note_window_t2_ParamLimits

0x39c3,	// (0x00010e4a) popup_note_window_t2

0x39d9,	// (0x00010e60) popup_note_window_t3_ParamLimits

0x39d9,	// (0x00010e60) popup_note_window_t3

0x39ef,	// (0x00010e76) popup_note_window_t4_ParamLimits

0x39ef,	// (0x00010e76) popup_note_window_t4

0x3a17,	// (0x00010e9e) popup_note_window_t5_ParamLimits

0x3a17,	// (0x00010e9e) popup_note_window_t5

0x0004,

0xf55a,	// (0x0001c9e1) popup_note_window_t_ParamLimits

0xf55a,	// (0x0001c9e1) popup_note_window_t

0x3a3b,	// (0x00010ec2) bg_popup_window_pane_cp6_ParamLimits

0x3a3b,	// (0x00010ec2) bg_popup_window_pane_cp6

0x99f7,	// (0x00016e7e) popup_note_image_window_g1_ParamLimits

0x99f7,	// (0x00016e7e) popup_note_image_window_g1

0x9a03,	// (0x00016e8a) popup_note_image_window_g2_ParamLimits

0x9a03,	// (0x00016e8a) popup_note_image_window_g2

0x0001,

0xf826,	// (0x0001ccad) popup_note_image_window_g_ParamLimits

0xf826,	// (0x0001ccad) popup_note_image_window_g

0x9a1c,	// (0x00016ea3) popup_note_image_window_t1_ParamLimits

0x9a1c,	// (0x00016ea3) popup_note_image_window_t1

0x9a35,	// (0x00016ebc) popup_note_image_window_t2_ParamLimits

0x9a35,	// (0x00016ebc) popup_note_image_window_t2

0x9a4e,	// (0x00016ed5) popup_note_image_window_t3_ParamLimits

0x9a4e,	// (0x00016ed5) popup_note_image_window_t3

0x0002,

0xf82b,	// (0x0001ccb2) popup_note_image_window_t_ParamLimits

0xf82b,	// (0x0001ccb2) popup_note_image_window_t

0x98c0,	// (0x00016d47) bg_popup_window_pane_cp7_ParamLimits

0x98c0,	// (0x00016d47) bg_popup_window_pane_cp7

0x98f0,	// (0x00016d77) popup_note_wait_window_g1_ParamLimits

0x98f0,	// (0x00016d77) popup_note_wait_window_g1

0x98fc,	// (0x00016d83) popup_note_wait_window_g2_ParamLimits

0x98fc,	// (0x00016d83) popup_note_wait_window_g2

0x0002,

0xf814,	// (0x0001cc9b) popup_note_wait_window_g_ParamLimits

0xf814,	// (0x0001cc9b) popup_note_wait_window_g

0x9914,	// (0x00016d9b) popup_note_wait_window_t1_ParamLimits

0x9914,	// (0x00016d9b) popup_note_wait_window_t1

0x993b,	// (0x00016dc2) popup_note_wait_window_t2_ParamLimits

0x993b,	// (0x00016dc2) popup_note_wait_window_t2

0x9958,	// (0x00016ddf) popup_note_wait_window_t3_ParamLimits

0x9958,	// (0x00016ddf) popup_note_wait_window_t3

0x996b,	// (0x00016df2) popup_note_wait_window_t4_ParamLimits

0x996b,	// (0x00016df2) popup_note_wait_window_t4

0x0004,

0xf81b,	// (0x0001cca2) popup_note_wait_window_t_ParamLimits

0xf81b,	// (0x0001cca2) popup_note_wait_window_t

0x9990,	// (0x00016e17) wait_bar_pane_ParamLimits

0x9990,	// (0x00016e17) wait_bar_pane

0x37d3,	// (0x00010c5a) wait_anim_pane

0x37d3,	// (0x00010c5a) wait_border_pane

0x365a,	// (0x00010ae1) wait_anim_pane_g1

0x365a,	// (0x00010ae1) wait_anim_pane_g2

0x0001,

0xf6cf,	// (0x0001cb56) wait_anim_pane_g

0x986c,	// (0x00016cf3) wait_border_pane_g1

0x9877,	// (0x00016cfe) wait_border_pane_g2

0x9880,	// (0x00016d07) wait_border_pane_g3

0x0002,

0xf80d,	// (0x0001cc94) wait_border_pane_g

0x96d7,	// (0x00016b5e) bg_popup_window_pane_cp16_ParamLimits

0x96d7,	// (0x00016b5e) bg_popup_window_pane_cp16

0x97d7,	// (0x00016c5e) indicator_popup_pane_cp4_ParamLimits

0x97d7,	// (0x00016c5e) indicator_popup_pane_cp4

0x97eb,	// (0x00016c72) popup_query_data_window_t1_ParamLimits

0x97eb,	// (0x00016c72) popup_query_data_window_t1

0x97fd,	// (0x00016c84) popup_query_data_window_t2_ParamLimits

0x97fd,	// (0x00016c84) popup_query_data_window_t2

0x9816,	// (0x00016c9d) popup_query_data_window_t3_ParamLimits

0x9816,	// (0x00016c9d) popup_query_data_window_t3

0x0002,

0xf806,	// (0x0001cc8d) popup_query_data_window_t_ParamLimits

0xf806,	// (0x0001cc8d) popup_query_data_window_t

0x9830,	// (0x00016cb7) query_popup_data_pane_ParamLimits

0x9830,	// (0x00016cb7) query_popup_data_pane

0x9844,	// (0x00016ccb) query_popup_data_pane_cp1_ParamLimits

0x9844,	// (0x00016ccb) query_popup_data_pane_cp1

0x96d7,	// (0x00016b5e) bg_popup_window_pane_cp10_ParamLimits

0x96d7,	// (0x00016b5e) bg_popup_window_pane_cp10

0x9709,	// (0x00016b90) indicator_popup_pane_ParamLimits

0x9709,	// (0x00016b90) indicator_popup_pane

0x972b,	// (0x00016bb2) popup_query_code_window_t1_ParamLimits

0x972b,	// (0x00016bb2) popup_query_code_window_t1

0x9745,	// (0x00016bcc) popup_query_code_window_t2_ParamLimits

0x9745,	// (0x00016bcc) popup_query_code_window_t2

0x978e,	// (0x00016c15) popup_query_code_window_t3_ParamLimits

0x978e,	// (0x00016c15) popup_query_code_window_t3

0x0002,

0xf7ff,	// (0x0001cc86) popup_query_code_window_t_ParamLimits

0xf7ff,	// (0x0001cc86) popup_query_code_window_t

0x97bd,	// (0x00016c44) query_popup_pane_ParamLimits

0x97bd,	// (0x00016c44) query_popup_pane

0x3a3b,	// (0x00010ec2) bg_popup_window_pane_cp15_ParamLimits

0x3a3b,	// (0x00010ec2) bg_popup_window_pane_cp15

0x7d7c,	// (0x00015203) indicator_popup_pane_cp1_ParamLimits

0x7d7c,	// (0x00015203) indicator_popup_pane_cp1

0x7d8f,	// (0x00015216) indicator_popup_pane_cp2_ParamLimits

0x7d8f,	// (0x00015216) indicator_popup_pane_cp2

0x7da2,	// (0x00015229) popup_query_data_code_window_g1_ParamLimits

0x7da2,	// (0x00015229) popup_query_data_code_window_g1

0x3a59,	// (0x00010ee0) popup_query_data_code_window_t1_ParamLimits

0x3a59,	// (0x00010ee0) popup_query_data_code_window_t1

0x3a6b,	// (0x00010ef2) popup_query_data_code_window_t2_ParamLimits

0x3a6b,	// (0x00010ef2) popup_query_data_code_window_t2

0x7db5,	// (0x0001523c) popup_query_data_code_window_t3_ParamLimits

0x7db5,	// (0x0001523c) popup_query_data_code_window_t3

0x7dcb,	// (0x00015252) popup_query_data_code_window_t4_ParamLimits

0x7dcb,	// (0x00015252) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0001c9ec) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0001c9ec) popup_query_data_code_window_t

0x6656,	// (0x00013add) list_single_midp_graphic_pane_g3

0x7de3,	// (0x0001526a) query_popup_data_pane_cp2_ParamLimits

0x7df6,	// (0x0001527d) query_popup_pane_cp2_ParamLimits

0x7df6,	// (0x0001527d) query_popup_pane_cp2

0x37d3,	// (0x00010c5a) bg_popup_window_pane_cp11

0x96bb,	// (0x00016b42) heading_pane_cp5

0x96c3,	// (0x00016b4a) listscroll_popup_info_pane

0x37d3,	// (0x00010c5a) input_focus_pane_cp3

0x3a7d,	// (0x00010f04) query_popup_pane_t1

0x3a8b,	// (0x00010f12) list_popup_info_pane_ParamLimits

0x3a8b,	// (0x00010f12) list_popup_info_pane

0x3a9a,	// (0x00010f21) listscroll_popup_info_pane_g1

0x3aa2,	// (0x00010f29) scroll_pane_cp7

0x7e09,	// (0x00015290) popup_info_list_pane_t1_ParamLimits

0x7e09,	// (0x00015290) popup_info_list_pane_t1

0x7e23,	// (0x000152aa) popup_info_list_pane_t2_ParamLimits

0x7e23,	// (0x000152aa) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0001c9f5) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0001c9f5) popup_info_list_pane_t

0x37d3,	// (0x00010c5a) bg_popup_window_pane_cp12

0xab1b,	// (0x00017fa2) find_popup_pane

0x384f,	// (0x00010cd6) bg_popup_window_pane_cp3

0x3aac,	// (0x00010f33) heading_pane_cp3

0x3abb,	// (0x00010f42) listscroll_popup_graphic_pane

0x37d3,	// (0x00010c5a) bg_popup_window_pane_cp4

0x7e8d,	// (0x00015314) heading_pane_cp4

0x3acb,	// (0x00010f52) listscroll_popup_colour_pane

0x7e97,	// (0x0001531e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7e97,	// (0x0001531e) cell_large_graphic_colour_none_popup_pane

0x7eab,	// (0x00015332) grid_large_graphic_colour_popup_pane_ParamLimits

0x7eab,	// (0x00015332) grid_large_graphic_colour_popup_pane

0x7ecf,	// (0x00015356) listscroll_popup_colour_pane_g1_ParamLimits

0x7ecf,	// (0x00015356) listscroll_popup_colour_pane_g1

0x7ee6,	// (0x0001536d) listscroll_popup_colour_pane_g2_ParamLimits

0x7ee6,	// (0x0001536d) listscroll_popup_colour_pane_g2

0x7efd,	// (0x00015384) listscroll_popup_colour_pane_g3_ParamLimits

0x7efd,	// (0x00015384) listscroll_popup_colour_pane_g3

0x7f0d,	// (0x00015394) listscroll_popup_colour_pane_g4_ParamLimits

0x7f0d,	// (0x00015394) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0001c9fa) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0001c9fa) listscroll_popup_colour_pane_g

0x3ad3,	// (0x00010f5a) scroll_pane_cp6_ParamLimits

0x3ad3,	// (0x00010f5a) scroll_pane_cp6

0x7f1d,	// (0x000153a4) cell_large_graphic_colour_popup_pane_ParamLimits

0x7f1d,	// (0x000153a4) cell_large_graphic_colour_popup_pane

0x7f3c,	// (0x000153c3) cell_large_graphic_colour_none_popup_pane_t1

0x37d3,	// (0x00010c5a) grid_highlight_pane_cp5

0x3ae5,	// (0x00010f6c) cell_large_graphic_colour_popup_pane_g1

0x3aed,	// (0x00010f74) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0001ca03) cell_large_graphic_colour_popup_pane_g

0x3af5,	// (0x00010f7c) cell_large_graphic_colour_popup_pane_g2_copy1

0x3afe,	// (0x00010f85) grid_highlight_pane_cp4

0x3b06,	// (0x00010f8d) bg_popup_window_pane_cp8_ParamLimits

0x3b06,	// (0x00010f8d) bg_popup_window_pane_cp8

0x7f4b,	// (0x000153d2) popup_snote_single_text_window_g1_ParamLimits

0x7f4b,	// (0x000153d2) popup_snote_single_text_window_g1

0x7f5d,	// (0x000153e4) popup_snote_single_text_window_t1_ParamLimits

0x7f5d,	// (0x000153e4) popup_snote_single_text_window_t1

0x7f70,	// (0x000153f7) popup_snote_single_text_window_t2_ParamLimits

0x7f70,	// (0x000153f7) popup_snote_single_text_window_t2

0x7f83,	// (0x0001540a) popup_snote_single_text_window_t3_ParamLimits

0x7f83,	// (0x0001540a) popup_snote_single_text_window_t3

0x7fbc,	// (0x00015443) popup_snote_single_text_window_t4_ParamLimits

0x7fbc,	// (0x00015443) popup_snote_single_text_window_t4

0x7ff0,	// (0x00015477) popup_snote_single_text_window_t5_ParamLimits

0x7ff0,	// (0x00015477) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0001ca08) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0001ca08) popup_snote_single_text_window_t

0x3b21,	// (0x00010fa8) bg_popup_window_pane_cp9_ParamLimits

0x3b21,	// (0x00010fa8) bg_popup_window_pane_cp9

0x7f4b,	// (0x000153d2) popup_snote_single_graphic_window_g1_ParamLimits

0x7f4b,	// (0x000153d2) popup_snote_single_graphic_window_g1

0x3b2f,	// (0x00010fb6) popup_snote_single_graphic_window_g2_ParamLimits

0x3b2f,	// (0x00010fb6) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0001ca13) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0001ca13) popup_snote_single_graphic_window_g

0x3b3b,	// (0x00010fc2) popup_snote_single_graphic_window_t1_ParamLimits

0x3b3b,	// (0x00010fc2) popup_snote_single_graphic_window_t1

0x3b4e,	// (0x00010fd5) popup_snote_single_graphic_window_t2_ParamLimits

0x3b4e,	// (0x00010fd5) popup_snote_single_graphic_window_t2

0x801f,	// (0x000154a6) popup_snote_single_graphic_window_t3_ParamLimits

0x801f,	// (0x000154a6) popup_snote_single_graphic_window_t3

0x8058,	// (0x000154df) popup_snote_single_graphic_window_t4_ParamLimits

0x8058,	// (0x000154df) popup_snote_single_graphic_window_t4

0x808c,	// (0x00015513) popup_snote_single_graphic_window_t5_ParamLimits

0x808c,	// (0x00015513) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0001ca18) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0001ca18) popup_snote_single_graphic_window_t

0xaa5d,	// (0x00017ee4) grid_graphic_popup_pane_ParamLimits

0xaa5d,	// (0x00017ee4) grid_graphic_popup_pane

0xaa87,	// (0x00017f0e) listscroll_popup_graphic_pane_g1_ParamLimits

0xaa87,	// (0x00017f0e) listscroll_popup_graphic_pane_g1

0xaa9b,	// (0x00017f22) listscroll_popup_graphic_pane_g2_ParamLimits

0xaa9b,	// (0x00017f22) listscroll_popup_graphic_pane_g2

0x0001,

0xf97c,	// (0x0001ce03) listscroll_popup_graphic_pane_g_ParamLimits

0xf97c,	// (0x0001ce03) listscroll_popup_graphic_pane_g

0xaaaf,	// (0x00017f36) scroll_pane_cp5

0xa9f3,	// (0x00017e7a) cell_graphic_popup_pane_ParamLimits

0xa9f3,	// (0x00017e7a) cell_graphic_popup_pane

0xa9d4,	// (0x00017e5b) cell_graphic_popup_pane_g1

0xa9dc,	// (0x00017e63) cell_graphic_popup_pane_g2

0x3af5,	// (0x00010f7c) cell_graphic_popup_pane_g3

0x0002,

0xf975,	// (0x0001cdfc) cell_graphic_popup_pane_g

0xa9e5,	// (0x00017e6c) cell_graphic_popup_pane_t2

0x3afe,	// (0x00010f85) grid_highlight_pane_cp3

0x3b73,	// (0x00010ffa) list_gen_pane_ParamLimits

0x3b73,	// (0x00010ffa) list_gen_pane

0x3b9b,	// (0x00011022) scroll_pane

0xa92c,	// (0x00017db3) bg_list_pane_g1_ParamLimits

0xa92c,	// (0x00017db3) bg_list_pane_g1

0xa949,	// (0x00017dd0) bg_list_pane_g2_ParamLimits

0xa949,	// (0x00017dd0) bg_list_pane_g2

0xa95e,	// (0x00017de5) bg_list_pane_g3_ParamLimits

0xa95e,	// (0x00017de5) bg_list_pane_g3

0xa972,	// (0x00017df9) bg_list_pane_g4_ParamLimits

0xa972,	// (0x00017df9) bg_list_pane_g4

0xa986,	// (0x00017e0d) bg_list_pane_g5_ParamLimits

0xa986,	// (0x00017e0d) bg_list_pane_g5

0x0004,

0xf96a,	// (0x0001cdf1) bg_list_pane_g_ParamLimits

0xf96a,	// (0x0001cdf1) bg_list_pane_g

0xa810,	// (0x00017c97) list_double2_graphic_large_graphic_pane_ParamLimits

0xa810,	// (0x00017c97) list_double2_graphic_large_graphic_pane

0xa810,	// (0x00017c97) list_double2_graphic_pane_ParamLimits

0xa810,	// (0x00017c97) list_double2_graphic_pane

0xa810,	// (0x00017c97) list_double2_large_graphic_pane_ParamLimits

0xa810,	// (0x00017c97) list_double2_large_graphic_pane

0xa810,	// (0x00017c97) list_double2_pane_ParamLimits

0xa810,	// (0x00017c97) list_double2_pane

0xa810,	// (0x00017c97) list_double_graphic_heading_pane_ParamLimits

0xa810,	// (0x00017c97) list_double_graphic_heading_pane

0xa810,	// (0x00017c97) list_double_graphic_pane_ParamLimits

0xa810,	// (0x00017c97) list_double_graphic_pane

0xa810,	// (0x00017c97) list_double_heading_pane_ParamLimits

0xa810,	// (0x00017c97) list_double_heading_pane

0xa810,	// (0x00017c97) list_double_large_graphic_pane_ParamLimits

0xa810,	// (0x00017c97) list_double_large_graphic_pane

0xa810,	// (0x00017c97) list_double_number_pane_ParamLimits

0xa810,	// (0x00017c97) list_double_number_pane

0xa810,	// (0x00017c97) list_double_pane_ParamLimits

0xa810,	// (0x00017c97) list_double_pane

0xa810,	// (0x00017c97) list_double_time_pane_ParamLimits

0xa810,	// (0x00017c97) list_double_time_pane

0xa810,	// (0x00017c97) list_setting_number_pane_ParamLimits

0xa810,	// (0x00017c97) list_setting_number_pane

0xa810,	// (0x00017c97) list_setting_pane_ParamLimits

0xa810,	// (0x00017c97) list_setting_pane

0xa88e,	// (0x00017d15) list_single_2graphic_pane_ParamLimits

0xa88e,	// (0x00017d15) list_single_2graphic_pane

0xa88e,	// (0x00017d15) list_single_graphic_heading_pane_ParamLimits

0xa88e,	// (0x00017d15) list_single_graphic_heading_pane

0xa88e,	// (0x00017d15) list_single_graphic_pane_ParamLimits

0xa88e,	// (0x00017d15) list_single_graphic_pane

0xa88e,	// (0x00017d15) list_single_heading_pane_ParamLimits

0xa88e,	// (0x00017d15) list_single_heading_pane

0xa909,	// (0x00017d90) list_single_large_graphic_pane_ParamLimits

0xa909,	// (0x00017d90) list_single_large_graphic_pane

0xa88e,	// (0x00017d15) list_single_number_heading_pane_ParamLimits

0xa88e,	// (0x00017d15) list_single_number_heading_pane

0xa88e,	// (0x00017d15) list_single_number_pane_ParamLimits

0xa88e,	// (0x00017d15) list_single_number_pane

0xa88e,	// (0x00017d15) list_single_pane_ParamLimits

0xa88e,	// (0x00017d15) list_single_pane

0x37d3,	// (0x00010c5a) list_highlight_pane_cp1

0x80d1,	// (0x00015558) list_single_pane_g1_ParamLimits

0x80d1,	// (0x00015558) list_single_pane_g1

0x80dd,	// (0x00015564) list_single_pane_g2_ParamLimits

0x80dd,	// (0x00015564) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0001ca2a) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0001ca2a) list_single_pane_g

0xa7c9,	// (0x00017c50) list_single_pane_t1_ParamLimits

0xa7c9,	// (0x00017c50) list_single_pane_t1

0x80d1,	// (0x00015558) list_single_number_pane_g1_ParamLimits

0x80d1,	// (0x00015558) list_single_number_pane_g1

0x80dd,	// (0x00015564) list_single_number_pane_g2_ParamLimits

0x80dd,	// (0x00015564) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0001ca2a) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0001ca2a) list_single_number_pane_g

0x80e9,	// (0x00015570) list_single_number_pane_t1_ParamLimits

0x80e9,	// (0x00015570) list_single_number_pane_t1

0xa56f,	// (0x000179f6) list_single_number_pane_t2_ParamLimits

0xa56f,	// (0x000179f6) list_single_number_pane_t2

0x0001,

0xf92b,	// (0x0001cdb2) list_single_number_pane_t_ParamLimits

0xf92b,	// (0x0001cdb2) list_single_number_pane_t

0x80c5,	// (0x0001554c) list_single_graphic_pane_g1_ParamLimits

0x80c5,	// (0x0001554c) list_single_graphic_pane_g1

0x80d1,	// (0x00015558) list_single_graphic_pane_g2_ParamLimits

0x80d1,	// (0x00015558) list_single_graphic_pane_g2

0x80dd,	// (0x00015564) list_single_graphic_pane_g3_ParamLimits

0x80dd,	// (0x00015564) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0001ca23) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0001ca23) list_single_graphic_pane_g

0x80e9,	// (0x00015570) list_single_graphic_pane_t1_ParamLimits

0x80e9,	// (0x00015570) list_single_graphic_pane_t1

0x80d1,	// (0x00015558) list_single_heading_pane_g1_ParamLimits

0x80d1,	// (0x00015558) list_single_heading_pane_g1

0x80dd,	// (0x00015564) list_single_heading_pane_g2_ParamLimits

0x80dd,	// (0x00015564) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001ca2a) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001ca2a) list_single_heading_pane_g

0x80ff,	// (0x00015586) list_single_heading_pane_t1_ParamLimits

0x80ff,	// (0x00015586) list_single_heading_pane_t1

0x8115,	// (0x0001559c) list_single_heading_pane_t2_ParamLimits

0x8115,	// (0x0001559c) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0001ca2f) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0001ca2f) list_single_heading_pane_t

0x80d1,	// (0x00015558) list_single_number_heading_pane_g1_ParamLimits

0x80d1,	// (0x00015558) list_single_number_heading_pane_g1

0x80dd,	// (0x00015564) list_single_number_heading_pane_g2_ParamLimits

0x80dd,	// (0x00015564) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001ca2a) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001ca2a) list_single_number_heading_pane_g

0x80ff,	// (0x00015586) list_single_number_heading_pane_t1_ParamLimits

0x80ff,	// (0x00015586) list_single_number_heading_pane_t1

0x8127,	// (0x000155ae) list_single_number_heading_pane_t2_ParamLimits

0x8127,	// (0x000155ae) list_single_number_heading_pane_t2

0x8139,	// (0x000155c0) list_single_number_heading_pane_t3_ParamLimits

0x8139,	// (0x000155c0) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0001ca34) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0001ca34) list_single_number_heading_pane_t

0x814b,	// (0x000155d2) list_single_graphic_heading_pane_g1_ParamLimits

0x814b,	// (0x000155d2) list_single_graphic_heading_pane_g1

0x8157,	// (0x000155de) list_single_graphic_heading_pane_g4_ParamLimits

0x8157,	// (0x000155de) list_single_graphic_heading_pane_g4

0x80dd,	// (0x00015564) list_single_graphic_heading_pane_g5_ParamLimits

0x80dd,	// (0x00015564) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0001ca3b) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0001ca3b) list_single_graphic_heading_pane_g

0x80ff,	// (0x00015586) list_single_graphic_heading_pane_t1_ParamLimits

0x80ff,	// (0x00015586) list_single_graphic_heading_pane_t1

0x8168,	// (0x000155ef) list_single_graphic_heading_pane_t2_ParamLimits

0x8168,	// (0x000155ef) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0001ca42) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0001ca42) list_single_graphic_heading_pane_t

0x817a,	// (0x00015601) list_single_large_graphic_pane_g1_ParamLimits

0x817a,	// (0x00015601) list_single_large_graphic_pane_g1

0x80d1,	// (0x00015558) list_single_large_graphic_pane_g2_ParamLimits

0x80d1,	// (0x00015558) list_single_large_graphic_pane_g2

0x80dd,	// (0x00015564) list_single_large_graphic_pane_g3_ParamLimits

0x80dd,	// (0x00015564) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0001ca47) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0001ca47) list_single_large_graphic_pane_g

0x9877,	// (0x00016cfe) wait_border_pane_g2_copy1

0x8186,	// (0x0001560d) list_single_large_graphic_pane_g4_cp2

0x80e9,	// (0x00015570) list_single_large_graphic_pane_t1_ParamLimits

0x80e9,	// (0x00015570) list_single_large_graphic_pane_t1

0x3df8,	// (0x0001127f) list_double_pane_g1_ParamLimits

0x3df8,	// (0x0001127f) list_double_pane_g1

0x818e,	// (0x00015615) list_double_pane_g2_ParamLimits

0x818e,	// (0x00015615) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0001ca4e) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0001ca4e) list_double_pane_g

0x819a,	// (0x00015621) list_double_pane_t1_ParamLimits

0x819a,	// (0x00015621) list_double_pane_t1

0x81b0,	// (0x00015637) list_double_pane_t2_ParamLimits

0x81b0,	// (0x00015637) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0001ca53) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0001ca53) list_double_pane_t

0x81c2,	// (0x00015649) list_double2_pane_g1_ParamLimits

0x81c2,	// (0x00015649) list_double2_pane_g1

0x81d3,	// (0x0001565a) list_double2_pane_g2_ParamLimits

0x81d3,	// (0x0001565a) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0001ca58) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0001ca58) list_double2_pane_g

0x81df,	// (0x00015666) list_double2_pane_t1_ParamLimits

0x81df,	// (0x00015666) list_double2_pane_t1

0x81f5,	// (0x0001567c) list_double2_pane_t2_ParamLimits

0x81f5,	// (0x0001567c) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0001ca5d) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0001ca5d) list_double2_pane_t

0x3df8,	// (0x0001127f) list_double_number_pane_g1_ParamLimits

0x3df8,	// (0x0001127f) list_double_number_pane_g1

0x818e,	// (0x00015615) list_double_number_pane_g2_ParamLimits

0x818e,	// (0x00015615) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0001ca4e) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0001ca4e) list_double_number_pane_g

0x8207,	// (0x0001568e) list_double_number_pane_t1_ParamLimits

0x8207,	// (0x0001568e) list_double_number_pane_t1

0x8219,	// (0x000156a0) list_double_number_pane_t2_ParamLimits

0x8219,	// (0x000156a0) list_double_number_pane_t2

0x822f,	// (0x000156b6) list_double_number_pane_t3_ParamLimits

0x822f,	// (0x000156b6) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0001ca62) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0001ca62) list_double_number_pane_t

0x8241,	// (0x000156c8) list_double_graphic_pane_g1_ParamLimits

0x8241,	// (0x000156c8) list_double_graphic_pane_g1

0x824d,	// (0x000156d4) list_double_graphic_pane_g2_ParamLimits

0x824d,	// (0x000156d4) list_double_graphic_pane_g2

0x825c,	// (0x000156e3) list_double_graphic_pane_g3_ParamLimits

0x825c,	// (0x000156e3) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0001ca69) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0001ca69) list_double_graphic_pane_g

0x8219,	// (0x000156a0) list_double_graphic_pane_t1_ParamLimits

0x8219,	// (0x000156a0) list_double_graphic_pane_t1

0x822f,	// (0x000156b6) list_double_graphic_pane_t2_ParamLimits

0x822f,	// (0x000156b6) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0001ca72) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0001ca72) list_double_graphic_pane_t

0x8274,	// (0x000156fb) list_double2_graphic_pane_g1_ParamLimits

0x8274,	// (0x000156fb) list_double2_graphic_pane_g1

0x3e04,	// (0x0001128b) list_double2_graphic_pane_g2_ParamLimits

0x3e04,	// (0x0001128b) list_double2_graphic_pane_g2

0x81d3,	// (0x0001565a) list_double2_graphic_pane_g3_ParamLimits

0x81d3,	// (0x0001565a) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0001ca77) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0001ca77) list_double2_graphic_pane_g

0x8280,	// (0x00015707) list_double2_graphic_pane_t1_ParamLimits

0x8280,	// (0x00015707) list_double2_graphic_pane_t1

0x8296,	// (0x0001571d) list_double2_graphic_pane_t2_ParamLimits

0x8296,	// (0x0001571d) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0001ca7e) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0001ca7e) list_double2_graphic_pane_t

0x82a8,	// (0x0001572f) list_double_large_graphic_pane_g1_ParamLimits

0x82a8,	// (0x0001572f) list_double_large_graphic_pane_g1

0x82c7,	// (0x0001574e) list_double_large_graphic_pane_g2_ParamLimits

0x82c7,	// (0x0001574e) list_double_large_graphic_pane_g2

0x818e,	// (0x00015615) list_double_large_graphic_pane_g3_ParamLimits

0x818e,	// (0x00015615) list_double_large_graphic_pane_g3

0x82d8,	// (0x0001575f) list_double_large_graphic_pane_g4_ParamLimits

0x82d8,	// (0x0001575f) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0001ca83) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0001ca83) list_double_large_graphic_pane_g

0x82eb,	// (0x00015772) list_double_large_graphic_pane_t1_ParamLimits

0x82eb,	// (0x00015772) list_double_large_graphic_pane_t1

0x8304,	// (0x0001578b) list_double_large_graphic_pane_t2_ParamLimits

0x8304,	// (0x0001578b) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0001ca8e) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0001ca8e) list_double_large_graphic_pane_t

0x8316,	// (0x0001579d) list_double2_large_graphic_pane_g1_ParamLimits

0x8316,	// (0x0001579d) list_double2_large_graphic_pane_g1

0x81c2,	// (0x00015649) list_double2_large_graphic_pane_g2_ParamLimits

0x81c2,	// (0x00015649) list_double2_large_graphic_pane_g2

0x81d3,	// (0x0001565a) list_double2_large_graphic_pane_g3_ParamLimits

0x81d3,	// (0x0001565a) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0001ca93) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0001ca93) list_double2_large_graphic_pane_g

0x8280,	// (0x00015707) list_double2_large_graphic_pane_t1_ParamLimits

0x8280,	// (0x00015707) list_double2_large_graphic_pane_t1

0x8296,	// (0x0001571d) list_double2_large_graphic_pane_t2_ParamLimits

0x8296,	// (0x0001571d) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0001ca7e) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0001ca7e) list_double2_large_graphic_pane_t

0x8322,	// (0x000157a9) list_double_heading_pane_g1_ParamLimits

0x8322,	// (0x000157a9) list_double_heading_pane_g1

0x3bcf,	// (0x00011056) list_double_heading_pane_g2_ParamLimits

0x3bcf,	// (0x00011056) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x0001ca9a) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x0001ca9a) list_double_heading_pane_g

0x8333,	// (0x000157ba) list_double_heading_pane_t1_ParamLimits

0x8333,	// (0x000157ba) list_double_heading_pane_t1

0x8296,	// (0x0001571d) list_double_heading_pane_t2_ParamLimits

0x8296,	// (0x0001571d) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x0001ca9f) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x0001ca9f) list_double_heading_pane_t

0x8241,	// (0x000156c8) list_double_graphic_heading_pane_g1_ParamLimits

0x8241,	// (0x000156c8) list_double_graphic_heading_pane_g1

0x8322,	// (0x000157a9) list_double_graphic_heading_pane_g2_ParamLimits

0x8322,	// (0x000157a9) list_double_graphic_heading_pane_g2

0x3bcf,	// (0x00011056) list_double_graphic_heading_pane_g3_ParamLimits

0x3bcf,	// (0x00011056) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x0001caa4) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0001caa4) list_double_graphic_heading_pane_g

0x8333,	// (0x000157ba) list_double_graphic_heading_pane_t1_ParamLimits

0x8333,	// (0x000157ba) list_double_graphic_heading_pane_t1

0x8296,	// (0x0001571d) list_double_graphic_heading_pane_t2_ParamLimits

0x8296,	// (0x0001571d) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x0001ca9f) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x0001ca9f) list_double_graphic_heading_pane_t

0x82c7,	// (0x0001574e) list_double_time_pane_g1_ParamLimits

0x82c7,	// (0x0001574e) list_double_time_pane_g1

0x818e,	// (0x00015615) list_double_time_pane_g2_ParamLimits

0x818e,	// (0x00015615) list_double_time_pane_g2

0x0001,

0xf624,	// (0x0001caab) list_double_time_pane_g_ParamLimits

0xf624,	// (0x0001caab) list_double_time_pane_g

0x8349,	// (0x000157d0) list_double_time_pane_t1_ParamLimits

0x8349,	// (0x000157d0) list_double_time_pane_t1

0x835f,	// (0x000157e6) list_double_time_pane_t2_ParamLimits

0x835f,	// (0x000157e6) list_double_time_pane_t2

0x8371,	// (0x000157f8) list_double_time_pane_t3_ParamLimits

0x8371,	// (0x000157f8) list_double_time_pane_t3

0x8383,	// (0x0001580a) list_double_time_pane_t4_ParamLimits

0x8383,	// (0x0001580a) list_double_time_pane_t4

0x0003,

0xf629,	// (0x0001cab0) list_double_time_pane_t_ParamLimits

0xf629,	// (0x0001cab0) list_double_time_pane_t

0x3e04,	// (0x0001128b) list_setting_pane_g1_ParamLimits

0x3e04,	// (0x0001128b) list_setting_pane_g1

0x81d3,	// (0x0001565a) list_setting_pane_g2_ParamLimits

0x81d3,	// (0x0001565a) list_setting_pane_g2

0x0001,

0xf632,	// (0x0001cab9) list_setting_pane_g_ParamLimits

0xf632,	// (0x0001cab9) list_setting_pane_g

0x8395,	// (0x0001581c) list_setting_pane_t1_ParamLimits

0x8395,	// (0x0001581c) list_setting_pane_t1

0x83ac,	// (0x00015833) list_setting_pane_t2_ParamLimits

0x83ac,	// (0x00015833) list_setting_pane_t2

0x0002,

0xf637,	// (0x0001cabe) list_setting_pane_t_ParamLimits

0xf637,	// (0x0001cabe) list_setting_pane_t

0x83e9,	// (0x00015870) set_value_pane_cp_ParamLimits

0x83e9,	// (0x00015870) set_value_pane_cp

0x3e04,	// (0x0001128b) list_setting_number_pane_g1_ParamLimits

0x3e04,	// (0x0001128b) list_setting_number_pane_g1

0x81d3,	// (0x0001565a) list_setting_number_pane_g2_ParamLimits

0x81d3,	// (0x0001565a) list_setting_number_pane_g2

0x0001,

0xf632,	// (0x0001cab9) list_setting_number_pane_g_ParamLimits

0xf632,	// (0x0001cab9) list_setting_number_pane_g

0x83f5,	// (0x0001587c) list_setting_number_pane_t1_ParamLimits

0x83f5,	// (0x0001587c) list_setting_number_pane_t1

0x8409,	// (0x00015890) list_setting_number_pane_t2_ParamLimits

0x8409,	// (0x00015890) list_setting_number_pane_t2

0x8420,	// (0x000158a7) list_setting_number_pane_t3_ParamLimits

0x8420,	// (0x000158a7) list_setting_number_pane_t3

0x0003,

0xf63e,	// (0x0001cac5) list_setting_number_pane_t_ParamLimits

0xf63e,	// (0x0001cac5) list_setting_number_pane_t

0x83e9,	// (0x00015870) set_value_pane_ParamLimits

0x83e9,	// (0x00015870) set_value_pane

0x3bf0,	// (0x00011077) bg_set_opt_pane_ParamLimits

0x3bf0,	// (0x00011077) bg_set_opt_pane

0x3c11,	// (0x00011098) set_value_pane_t1

0x3c1f,	// (0x000110a6) slider_set_pane_cp3

0x8463,	// (0x000158ea) volume_small_pane_cp

0x3c28,	// (0x000110af) list_form_gen_pane

0x3c31,	// (0x000110b8) scroll_pane_cp8

0x846c,	// (0x000158f3) form_field_data_pane_ParamLimits

0x846c,	// (0x000158f3) form_field_data_pane

0x8484,	// (0x0001590b) form_field_data_wide_pane_ParamLimits

0x8484,	// (0x0001590b) form_field_data_wide_pane

0x84a5,	// (0x0001592c) form_field_popup_pane_ParamLimits

0x84a5,	// (0x0001592c) form_field_popup_pane

0x84c5,	// (0x0001594c) form_field_popup_wide_pane_ParamLimits

0x84c5,	// (0x0001594c) form_field_popup_wide_pane

0x3c52,	// (0x000110d9) form_field_slider_pane_ParamLimits

0x3c52,	// (0x000110d9) form_field_slider_pane

0x84e2,	// (0x00015969) form_field_slider_wide_pane_ParamLimits

0x84e2,	// (0x00015969) form_field_slider_wide_pane

0x3c65,	// (0x000110ec) data_form_pane

0x84ff,	// (0x00015986) form_field_data_pane_t1

0x3c71,	// (0x000110f8) input_focus_pane

0x3c7f,	// (0x00011106) data_form_wide_pane

0x3cbc,	// (0x00011143) form_field_data_wide_pane_t1

0x3b13,	// (0x00010f9a) input_focus_pane_cp6

0x8517,	// (0x0001599e) form_field_popup_pane_t1

0x3c71,	// (0x000110f8) input_focus_pane_cp7

0x3cde,	// (0x00011165) list_form_pane

0x3cf2,	// (0x00011179) form_field_popup_wide_pane_t1

0x3c71,	// (0x000110f8) input_focus_pane_cp8

0x3d07,	// (0x0001118e) list_form_wide_pane

0x8537,	// (0x000159be) form_field_slider_pane_t1_ParamLimits

0x8537,	// (0x000159be) form_field_slider_pane_t1

0x8549,	// (0x000159d0) form_field_slider_pane_t2_ParamLimits

0x8549,	// (0x000159d0) form_field_slider_pane_t2

0x0001,

0xf64e,	// (0x0001cad5) form_field_slider_pane_t_ParamLimits

0xf64e,	// (0x0001cad5) form_field_slider_pane_t

0x3841,	// (0x00010cc8) input_focus_pane_cp9_ParamLimits

0x3841,	// (0x00010cc8) input_focus_pane_cp9

0x855b,	// (0x000159e2) slider_cont_pane_ParamLimits

0x855b,	// (0x000159e2) slider_cont_pane

0x3d13,	// (0x0001119a) form_field_slider_wide_pane_t1_ParamLimits

0x3d13,	// (0x0001119a) form_field_slider_wide_pane_t1

0x3d25,	// (0x000111ac) form_field_slider_wide_pane_t2_ParamLimits

0x3d25,	// (0x000111ac) form_field_slider_wide_pane_t2

0x0001,

0xf653,	// (0x0001cada) form_field_slider_wide_pane_t_ParamLimits

0xf653,	// (0x0001cada) form_field_slider_wide_pane_t

0x3841,	// (0x00010cc8) input_focus_pane_cp10_ParamLimits

0x3841,	// (0x00010cc8) input_focus_pane_cp10

0x856f,	// (0x000159f6) slider_cont_pane_cp1_ParamLimits

0x856f,	// (0x000159f6) slider_cont_pane_cp1

0x8583,	// (0x00015a0a) slider_form_pane_cp

0x3d37,	// (0x000111be) input_focus_pane_g1

0x3d3f,	// (0x000111c6) input_focus_pane_g2

0x3d47,	// (0x000111ce) input_focus_pane_g3

0x3d4f,	// (0x000111d6) input_focus_pane_g4

0x3d57,	// (0x000111de) input_focus_pane_g5

0x3d5f,	// (0x000111e6) input_focus_pane_g6

0x3d67,	// (0x000111ee) input_focus_pane_g7

0x3d6f,	// (0x000111f6) input_focus_pane_g8

0x3d77,	// (0x000111fe) input_focus_pane_g9

0x365a,	// (0x00010ae1) input_focus_pane_g10

0x0009,

0xf658,	// (0x0001cadf) input_focus_pane_g

0x9880,	// (0x00016d07) wait_border_pane_g3_copy1

0x858b,	// (0x00015a12) data_form_pane_t1

0x365a,	// (0x00010ae1) wait_anim_pane_g1_copy1

0xa7ac,	// (0x00017c33) data_form_wide_pane_t1

0x85a6,	// (0x00015a2d) list_form_graphic_pane_cp_ParamLimits

0x85a6,	// (0x00015a2d) list_form_graphic_pane_cp

0xa781,	// (0x00017c08) slider_form_pane_g1

0xa78a,	// (0x00017c11) slider_form_pane_g2

0x0006,

0xf95b,	// (0x0001cde2) slider_form_pane_g

0x85ba,	// (0x00015a41) list_form_graphic_pane_ParamLimits

0x85ba,	// (0x00015a41) list_form_graphic_pane

0x85d1,	// (0x00015a58) list_form_graphic_pane_g1

0x85d9,	// (0x00015a60) list_form_graphic_pane_t1_ParamLimits

0x85d9,	// (0x00015a60) list_form_graphic_pane_t1

0x384f,	// (0x00010cd6) list_highlight_pane_cp5_ParamLimits

0x384f,	// (0x00010cd6) list_highlight_pane_cp5

0x85ee,	// (0x00015a75) find_pane_g1

0x3d7f,	// (0x00011206) input_find_pane

0x85f7,	// (0x00015a7e) input_find_pane_g1_ParamLimits

0x85f7,	// (0x00015a7e) input_find_pane_g1

0x8603,	// (0x00015a8a) input_find_pane_t1_ParamLimits

0x8603,	// (0x00015a8a) input_find_pane_t1

0x8618,	// (0x00015a9f) input_find_pane_t2_ParamLimits

0x8618,	// (0x00015a9f) input_find_pane_t2

0x0001,

0xf66d,	// (0x0001caf4) input_find_pane_t_ParamLimits

0xf66d,	// (0x0001caf4) input_find_pane_t

0x3d88,	// (0x0001120f) input_focus_pane_cp5_ParamLimits

0x3d88,	// (0x0001120f) input_focus_pane_cp5

0x3d9b,	// (0x00011222) bg_popup_window_pane_cp2_ParamLimits

0x3d9b,	// (0x00011222) bg_popup_window_pane_cp2

0x3da8,	// (0x0001122f) listscroll_menu_pane_ParamLimits

0x3da8,	// (0x0001122f) listscroll_menu_pane

0x8639,	// (0x00015ac0) popup_submenu_window_ParamLimits

0x8639,	// (0x00015ac0) popup_submenu_window

0x3db4,	// (0x0001123b) find_popup_pane_g1

0x8661,	// (0x00015ae8) input_popup_find_pane_cp

0x3dbc,	// (0x00011243) input_focus_pane_cp4_ParamLimits

0x3dbc,	// (0x00011243) input_focus_pane_cp4

0x3dca,	// (0x00011251) input_popup_find_pane_t1_ParamLimits

0x3dca,	// (0x00011251) input_popup_find_pane_t1

0x37d3,	// (0x00010c5a) bg_popup_sub_pane_cp

0x3e10,	// (0x00011297) listscroll_popup_sub_pane

0x3e18,	// (0x0001129f) list_submenu_pane_ParamLimits

0x3e18,	// (0x0001129f) list_submenu_pane

0x3e29,	// (0x000112b0) scroll_pane_cp4

0x8679,	// (0x00015b00) list_single_popup_submenu_pane_ParamLimits

0x8679,	// (0x00015b00) list_single_popup_submenu_pane

0x4399,	// (0x00011820) list_single_popup_submenu_pane_g1

0x868d,	// (0x00015b14) list_single_popup_submenu_pane_t1_ParamLimits

0x868d,	// (0x00015b14) list_single_popup_submenu_pane_t1

0x384f,	// (0x00010cd6) bg_active_tab_pane_cp1_ParamLimits

0x384f,	// (0x00010cd6) bg_active_tab_pane_cp1

0x3e31,	// (0x000112b8) tabs_2_active_pane_g1

0x86a2,	// (0x00015b29) tabs_2_active_pane_t1

0x384f,	// (0x00010cd6) bg_passive_tab_pane_cp1_ParamLimits

0x384f,	// (0x00010cd6) bg_passive_tab_pane_cp1

0x3e31,	// (0x000112b8) tabs_2_passive_pane_g1

0x86a2,	// (0x00015b29) tabs_2_passive_pane_t1

0x86b4,	// (0x00015b3b) bg_active_tab_pane_cp4

0x86c2,	// (0x00015b49) tabs_2_long_active_pane_t1

0x86d5,	// (0x00015b5c) bg_passive_tab_pane_cp4

0x665e,	// (0x00013ae5) list_single_midp_graphic_pane_g4_ParamLimits

0x86b4,	// (0x00015b3b) bg_active_tab_pane_cp5

0x86e1,	// (0x00015b68) tabs_3_long_active_pane_t1

0x86d5,	// (0x00015b5c) bg_passive_tab_pane_cp5

0x665e,	// (0x00013ae5) list_single_midp_graphic_pane_g4

0x384f,	// (0x00010cd6) bg_popup_window_pane_cp13_ParamLimits

0x384f,	// (0x00010cd6) bg_popup_window_pane_cp13

0x3e39,	// (0x000112c0) listscroll_popup_fast_pane_ParamLimits

0x3e39,	// (0x000112c0) listscroll_popup_fast_pane

0x3e45,	// (0x000112cc) grid_popup_fast_pane_ParamLimits

0x3e45,	// (0x000112cc) grid_popup_fast_pane

0x3e57,	// (0x000112de) scroll_pane_cp9_ParamLimits

0x3e57,	// (0x000112de) scroll_pane_cp9

0xc6f9,	// (0x00019b80) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc6f9,	// (0x00019b80) list_single_graphic_hl_pane_t1_cp2

0x3e6a,	// (0x000112f1) input_focus_pane_cp20_ParamLimits

0x3e6a,	// (0x000112f1) input_focus_pane_cp20

0x3e78,	// (0x000112ff) query_popup_data_pane_t1_ParamLimits

0x3e78,	// (0x000112ff) query_popup_data_pane_t1

0x3e8b,	// (0x00011312) query_popup_data_pane_t2_ParamLimits

0x3e8b,	// (0x00011312) query_popup_data_pane_t2

0x3ed1,	// (0x00011358) query_popup_data_pane_t3_ParamLimits

0x3ed1,	// (0x00011358) query_popup_data_pane_t3

0x3f12,	// (0x00011399) query_popup_data_pane_t4_ParamLimits

0x3f12,	// (0x00011399) query_popup_data_pane_t4

0x3f4e,	// (0x000113d5) query_popup_data_pane_t5_ParamLimits

0x3f4e,	// (0x000113d5) query_popup_data_pane_t5

0x0004,

0xf672,	// (0x0001caf9) query_popup_data_pane_t_ParamLimits

0xf672,	// (0x0001caf9) query_popup_data_pane_t

0x3d37,	// (0x000111be) bg_set_opt_pane_g1

0x3d3f,	// (0x000111c6) bg_set_opt_pane_g2

0x3d47,	// (0x000111ce) bg_set_opt_pane_g3

0x3d4f,	// (0x000111d6) bg_set_opt_pane_g4

0x3d57,	// (0x000111de) bg_set_opt_pane_g5

0x3d5f,	// (0x000111e6) bg_set_opt_pane_g6

0x3d67,	// (0x000111ee) bg_set_opt_pane_g7

0x3d6f,	// (0x000111f6) bg_set_opt_pane_g8

0x3d77,	// (0x000111fe) bg_set_opt_pane_g9

0x0008,

0xf67d,	// (0x0001cb04) bg_set_opt_pane_g

0x5c72,	// (0x000130f9) control_top_pane_stacon_ParamLimits

0x5c72,	// (0x000130f9) control_top_pane_stacon

0x5cc5,	// (0x0001314c) signal_pane_stacon_ParamLimits

0x5cc5,	// (0x0001314c) signal_pane_stacon

0x459f,	// (0x00011a26) stacon_top_pane_g1_ParamLimits

0x459f,	// (0x00011a26) stacon_top_pane_g1

0x5cea,	// (0x00013171) title_pane_stacon_ParamLimits

0x5cea,	// (0x00013171) title_pane_stacon

0x5d14,	// (0x0001319b) uni_indicator_pane_stacon_ParamLimits

0x5d14,	// (0x0001319b) uni_indicator_pane_stacon

0x5d29,	// (0x000131b0) battery_pane_stacon_ParamLimits

0x5d29,	// (0x000131b0) battery_pane_stacon

0x5d6d,	// (0x000131f4) control_bottom_pane_stacon_ParamLimits

0x5d6d,	// (0x000131f4) control_bottom_pane_stacon

0x5d90,	// (0x00013217) navi_pane_stacon_ParamLimits

0x5d90,	// (0x00013217) navi_pane_stacon

0x468a,	// (0x00011b11) stacon_bottom_pane_g1_ParamLimits

0x468a,	// (0x00011b11) stacon_bottom_pane_g1

0x59de,	// (0x00012e65) aid_levels_signal_lsc_ParamLimits

0x59de,	// (0x00012e65) aid_levels_signal_lsc

0x59f4,	// (0x00012e7b) signal_pane_stacon_g1_ParamLimits

0x59f4,	// (0x00012e7b) signal_pane_stacon_g1

0x5a08,	// (0x00012e8f) signal_pane_stacon_g2_ParamLimits

0x5a08,	// (0x00012e8f) signal_pane_stacon_g2

0x0001,

0xf690,	// (0x0001cb17) signal_pane_stacon_g_ParamLimits

0xf690,	// (0x0001cb17) signal_pane_stacon_g

0x5a3d,	// (0x00012ec4) title_pane_stacon_t1_ParamLimits

0x5a3d,	// (0x00012ec4) title_pane_stacon_t1

0x402a,	// (0x000114b1) uni_indicator_pane_stacon_g1

0x4034,	// (0x000114bb) uni_indicator_pane_stacon_g2

0x4016,	// (0x0001149d) uni_indicator_pane_stacon_g3

0x4020,	// (0x000114a7) uni_indicator_pane_stacon_g4

0x0003,

0xf69c,	// (0x0001cb23) uni_indicator_pane_stacon_g

0x5a62,	// (0x00012ee9) control_top_pane_stacon_g1

0x5a6a,	// (0x00012ef1) control_top_pane_stacon_t1_ParamLimits

0x5a6a,	// (0x00012ef1) control_top_pane_stacon_t1

0x5aa1,	// (0x00012f28) aid_levels_battery_lsc_ParamLimits

0x5aa1,	// (0x00012f28) aid_levels_battery_lsc

0x5ab8,	// (0x00012f3f) battery_pane_stacon_g1_ParamLimits

0x5ab8,	// (0x00012f3f) battery_pane_stacon_g1

0x5acb,	// (0x00012f52) battery_pane_stacon_g2_ParamLimits

0x5acb,	// (0x00012f52) battery_pane_stacon_g2

0x0001,

0xf6a5,	// (0x0001cb2c) battery_pane_stacon_g_ParamLimits

0xf6a5,	// (0x0001cb2c) battery_pane_stacon_g

0x5b09,	// (0x00012f90) navi_icon_pane_stacon

0x5b1d,	// (0x00012fa4) navi_navi_pane_stacon

0x5b09,	// (0x00012f90) navi_text_pane_stacon

0x5a62,	// (0x00012ee9) control_bottom_pane_stacon_g1

0x5b31,	// (0x00012fb8) control_bottom_pane_stacon_t1_ParamLimits

0x5b31,	// (0x00012fb8) control_bottom_pane_stacon_t1

0x870d,	// (0x00015b94) grid_app_pane_ParamLimits

0x870d,	// (0x00015b94) grid_app_pane

0x872f,	// (0x00015bb6) scroll_pane_cp15_ParamLimits

0x872f,	// (0x00015bb6) scroll_pane_cp15

0x8742,	// (0x00015bc9) cell_app_pane_ParamLimits

0x8742,	// (0x00015bc9) cell_app_pane

0x876a,	// (0x00015bf1) cell_app_pane_g1_ParamLimits

0x876a,	// (0x00015bf1) cell_app_pane_g1

0x415e,	// (0x000115e5) cell_app_pane_g2_ParamLimits

0x415e,	// (0x000115e5) cell_app_pane_g2

0x0001,

0xf6aa,	// (0x0001cb31) cell_app_pane_g_ParamLimits

0xf6aa,	// (0x0001cb31) cell_app_pane_g

0x878e,	// (0x00015c15) cell_app_pane_t1_ParamLimits

0x878e,	// (0x00015c15) cell_app_pane_t1

0x416a,	// (0x000115f1) grid_highlight_pane_ParamLimits

0x416a,	// (0x000115f1) grid_highlight_pane

0x3d37,	// (0x000111be) cell_highlight_pane_g1

0x3d3f,	// (0x000111c6) cell_highlight_pane_g2

0x3d47,	// (0x000111ce) cell_highlight_pane_g3

0x3d4f,	// (0x000111d6) cell_highlight_pane_g4

0x3d57,	// (0x000111de) cell_highlight_pane_g5

0x3d5f,	// (0x000111e6) cell_highlight_pane_g6

0x3d67,	// (0x000111ee) cell_highlight_pane_g7

0x3d6f,	// (0x000111f6) cell_highlight_pane_g8

0x3d77,	// (0x000111fe) cell_highlight_pane_g9

0x365a,	// (0x00010ae1) cell_highlight_pane_g10

0x0009,

0xf658,	// (0x0001cadf) cell_highlight_pane_g

0x4185,	// (0x0001160c) bg_scroll_pane

0x5b7b,	// (0x00013002) scroll_handle_pane

0x41e1,	// (0x00011668) scroll_bg_pane_g1

0x41f6,	// (0x0001167d) scroll_bg_pane_g2

0x420e,	// (0x00011695) scroll_bg_pane_g3

0x0002,

0xf6af,	// (0x0001cb36) scroll_bg_pane_g

0x87a5,	// (0x00015c2c) scroll_handle_focus_pane_ParamLimits

0x87a5,	// (0x00015c2c) scroll_handle_focus_pane

0x41e1,	// (0x00011668) scroll_handle_pane_g1

0x4223,	// (0x000116aa) scroll_handle_pane_g2

0x420e,	// (0x00011695) scroll_handle_pane_g3

0x0002,

0xf6b6,	// (0x0001cb3d) scroll_handle_pane_g

0x3dbc,	// (0x00011243) bg_popup_sub_pane_cp21_ParamLimits

0x3dbc,	// (0x00011243) bg_popup_sub_pane_cp21

0x87b2,	// (0x00015c39) popup_fep_japan_predictive_window_t1_ParamLimits

0x87b2,	// (0x00015c39) popup_fep_japan_predictive_window_t1

0x87cc,	// (0x00015c53) popup_fep_japan_predictive_window_t2_ParamLimits

0x87cc,	// (0x00015c53) popup_fep_japan_predictive_window_t2

0x87ff,	// (0x00015c86) popup_fep_japan_predictive_window_t3_ParamLimits

0x87ff,	// (0x00015c86) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bd,	// (0x0001cb44) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bd,	// (0x0001cb44) popup_fep_japan_predictive_window_t

0x37d3,	// (0x00010c5a) bg_popup_sub_pane_cp23

0x43a1,	// (0x00011828) listscroll_japin_cand_pane

0x4237,	// (0x000116be) popup_fep_japan_candidate_window_t1

0x4245,	// (0x000116cc) candidate_pane_ParamLimits

0x4245,	// (0x000116cc) candidate_pane

0x8836,	// (0x00015cbd) scroll_pane_cp30

0x4257,	// (0x000116de) list_single_popup_jap_candidate_pane_ParamLimits

0x4257,	// (0x000116de) list_single_popup_jap_candidate_pane

0x37d3,	// (0x00010c5a) list_highlight_pane_cp30

0x426c,	// (0x000116f3) list_single_popup_jap_candidate_pane_t1

0x427b,	// (0x00011702) level_1_signal

0x4288,	// (0x0001170f) level_2_signal

0x4295,	// (0x0001171c) level_3_signal

0x42a2,	// (0x00011729) level_4_signal

0x42af,	// (0x00011736) level_5_signal

0x42bc,	// (0x00011743) level_6_signal

0x42c9,	// (0x00011750) level_7_signal

0x427b,	// (0x00011702) level_1_battery

0x4288,	// (0x0001170f) level_2_battery

0x4295,	// (0x0001171c) level_3_battery

0x42a2,	// (0x00011729) level_4_battery

0x42af,	// (0x00011736) level_5_battery

0x42bc,	// (0x00011743) level_6_battery

0x42c9,	// (0x00011750) level_7_battery

0x430d,	// (0x00011794) list_menu_pane_ParamLimits

0x430d,	// (0x00011794) list_menu_pane

0x4323,	// (0x000117aa) scroll_pane_cp25_ParamLimits

0x4323,	// (0x000117aa) scroll_pane_cp25

0x433c,	// (0x000117c3) list_double2_graphic_pane_cp2_ParamLimits

0x433c,	// (0x000117c3) list_double2_graphic_pane_cp2

0x433c,	// (0x000117c3) list_double2_large_graphic_pane_cp2_ParamLimits

0x433c,	// (0x000117c3) list_double2_large_graphic_pane_cp2

0x433c,	// (0x000117c3) list_double2_pane_cp2_ParamLimits

0x433c,	// (0x000117c3) list_double2_pane_cp2

0x433c,	// (0x000117c3) list_double_graphic_pane_cp2_ParamLimits

0x433c,	// (0x000117c3) list_double_graphic_pane_cp2

0x433c,	// (0x000117c3) list_double_large_graphic_pane_cp2_ParamLimits

0x433c,	// (0x000117c3) list_double_large_graphic_pane_cp2

0x433c,	// (0x000117c3) list_double_number_pane_cp2_ParamLimits

0x433c,	// (0x000117c3) list_double_number_pane_cp2

0x433c,	// (0x000117c3) list_double_pane_cp2_ParamLimits

0x433c,	// (0x000117c3) list_double_pane_cp2

0x8852,	// (0x00015cd9) list_single_2graphic_pane_cp2_ParamLimits

0x8852,	// (0x00015cd9) list_single_2graphic_pane_cp2

0x8852,	// (0x00015cd9) list_single_graphic_heading_pane_cp2_ParamLimits

0x8852,	// (0x00015cd9) list_single_graphic_heading_pane_cp2

0x8852,	// (0x00015cd9) list_single_graphic_pane_cp2_ParamLimits

0x8852,	// (0x00015cd9) list_single_graphic_pane_cp2

0x8852,	// (0x00015cd9) list_single_heading_pane_cp2_ParamLimits

0x8852,	// (0x00015cd9) list_single_heading_pane_cp2

0x434c,	// (0x000117d3) list_single_large_graphic_pane_cp2_ParamLimits

0x434c,	// (0x000117d3) list_single_large_graphic_pane_cp2

0x8852,	// (0x00015cd9) list_single_number_heading_pane_cp2_ParamLimits

0x8852,	// (0x00015cd9) list_single_number_heading_pane_cp2

0x8852,	// (0x00015cd9) list_single_number_pane_cp2_ParamLimits

0x8852,	// (0x00015cd9) list_single_number_pane_cp2

0x8852,	// (0x00015cd9) list_single_pane_cp2_ParamLimits

0x8852,	// (0x00015cd9) list_single_pane_cp2

0x43d1,	// (0x00011858) bg_popup_sub_pane_cp22

0x5c2a,	// (0x000130b1) popup_side_volume_key_window_g1

0x5c4e,	// (0x000130d5) popup_side_volume_key_window_t1

0x5c6a,	// (0x000130f1) volume_small_pane_cp1

0x3841,	// (0x00010cc8) bg_popup_sub_pane_cp24_ParamLimits

0x3841,	// (0x00010cc8) bg_popup_sub_pane_cp24

0x4401,	// (0x00011888) fep_china_uni_candidate_pane_ParamLimits

0x4401,	// (0x00011888) fep_china_uni_candidate_pane

0x4415,	// (0x0001189c) fep_china_uni_entry_pane

0x4425,	// (0x000118ac) popup_fep_china_uni_window_g1

0x88c3,	// (0x00015d4a) fep_china_uni_entry_pane_g1

0x88cb,	// (0x00015d52) fep_china_uni_entry_pane_g2

0x0001,

0xf6ee,	// (0x0001cb75) fep_china_uni_entry_pane_g

0x4441,	// (0x000118c8) fep_entry_item_pane

0x444b,	// (0x000118d2) fep_candidate_item_pane

0x88d3,	// (0x00015d5a) fep_china_uni_candidate_pane_g1

0x4453,	// (0x000118da) fep_china_uni_candidate_pane_g2

0x445b,	// (0x000118e2) fep_china_uni_candidate_pane_g3

0x88db,	// (0x00015d62) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f3,	// (0x0001cb7a) fep_china_uni_candidate_pane_g

0x365a,	// (0x00010ae1) fep_entry_item_pane_g1

0x4463,	// (0x000118ea) fep_entry_item_pane_t1_ParamLimits

0x4463,	// (0x000118ea) fep_entry_item_pane_t1

0x4479,	// (0x00011900) fep_candidate_item_pane_t1_ParamLimits

0x4479,	// (0x00011900) fep_candidate_item_pane_t1

0x448e,	// (0x00011915) fep_candidate_item_pane_t2_ParamLimits

0x448e,	// (0x00011915) fep_candidate_item_pane_t2

0x0001,

0xf6fc,	// (0x0001cb83) fep_candidate_item_pane_t_ParamLimits

0xf6fc,	// (0x0001cb83) fep_candidate_item_pane_t

0x384f,	// (0x00010cd6) list_highlight_pane_cp31_ParamLimits

0x384f,	// (0x00010cd6) list_highlight_pane_cp31

0x44a0,	// (0x00011927) level_1_signal_lsc

0x44a9,	// (0x00011930) level_2_signal_lsc

0x44b2,	// (0x00011939) level_3_signal_lsc

0x44bb,	// (0x00011942) level_4_signal_lsc

0x44c4,	// (0x0001194b) level_5_signal_lsc

0x44cd,	// (0x00011954) level_6_signal_lsc

0x44d6,	// (0x0001195d) level_7_signal_lsc

0x44d6,	// (0x0001195d) level_1_battery_lsc

0x44df,	// (0x00011966) level_2_battery_lsc

0x44e8,	// (0x0001196f) level_3_battery_lsc

0x44f1,	// (0x00011978) level_4_battery_lsc

0x44fa,	// (0x00011981) level_5_battery_lsc

0x4503,	// (0x0001198a) level_6_battery_lsc

0x44a0,	// (0x00011927) level_7_battery_lsc

0x450c,	// (0x00011993) scroll_handle_focus_pane_g1

0x4515,	// (0x0001199c) scroll_handle_focus_pane_g2

0x451e,	// (0x000119a5) scroll_handle_focus_pane_g3

0x0002,

0xf701,	// (0x0001cb88) scroll_handle_focus_pane_g

0x88e3,	// (0x00015d6a) list_single_2graphic_pane_g1_ParamLimits

0x88e3,	// (0x00015d6a) list_single_2graphic_pane_g1

0x8157,	// (0x000155de) list_single_2graphic_pane_g2_ParamLimits

0x8157,	// (0x000155de) list_single_2graphic_pane_g2

0x80dd,	// (0x00015564) list_single_2graphic_pane_g3_ParamLimits

0x80dd,	// (0x00015564) list_single_2graphic_pane_g3

0x88ef,	// (0x00015d76) list_single_2graphic_pane_g4_ParamLimits

0x88ef,	// (0x00015d76) list_single_2graphic_pane_g4

0x0003,

0xf708,	// (0x0001cb8f) list_single_2graphic_pane_g_ParamLimits

0xf708,	// (0x0001cb8f) list_single_2graphic_pane_g

0x8900,	// (0x00015d87) list_single_2graphic_pane_t1_ParamLimits

0x8900,	// (0x00015d87) list_single_2graphic_pane_t1

0x892e,	// (0x00015db5) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x892e,	// (0x00015db5) list_double2_graphic_large_graphic_pane_g1

0x81c2,	// (0x00015649) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x81c2,	// (0x00015649) list_double2_graphic_large_graphic_pane_g2

0x81d3,	// (0x0001565a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x81d3,	// (0x0001565a) list_double2_graphic_large_graphic_pane_g3

0x893e,	// (0x00015dc5) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x893e,	// (0x00015dc5) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf711,	// (0x0001cb98) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf711,	// (0x0001cb98) list_double2_graphic_large_graphic_pane_g

0x894a,	// (0x00015dd1) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x894a,	// (0x00015dd1) list_double2_graphic_large_graphic_pane_t1

0x8960,	// (0x00015de7) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8960,	// (0x00015de7) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71a,	// (0x0001cba1) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71a,	// (0x0001cba1) list_double2_graphic_large_graphic_pane_t

0x8a03,	// (0x00015e8a) popup_fast_swap_window_ParamLimits

0x8a03,	// (0x00015e8a) popup_fast_swap_window

0x8a1f,	// (0x00015ea6) popup_side_volume_key_window

0x4715,	// (0x00011b9c) stacon_top_pane

0x471f,	// (0x00011ba6) status_pane_ParamLimits

0x471f,	// (0x00011ba6) status_pane

0x8a39,	// (0x00015ec0) status_small_pane

0x37d3,	// (0x00010c5a) control_pane

0x37d3,	// (0x00010c5a) stacon_bottom_pane

0x3c31,	// (0x000110b8) scroll_pane_cp121

0x3c28,	// (0x000110af) set_content_pane

0x8972,	// (0x00015df9) bg_active_tab_pane_g1_cp1

0x897b,	// (0x00015e02) bg_active_tab_pane_g2_cp1

0x8984,	// (0x00015e0b) bg_active_tab_pane_g3_cp1

0x8972,	// (0x00015df9) bg_passive_tab_pane_g1_cp1

0x897b,	// (0x00015e02) bg_passive_tab_pane_g2_cp1

0x8984,	// (0x00015e0b) bg_passive_tab_pane_g3_cp1

0x898d,	// (0x00015e14) bg_active_tab_pane_g1_cp2

0x897b,	// (0x00015e02) bg_active_tab_pane_g2_cp2

0x8996,	// (0x00015e1d) bg_active_tab_pane_g3_cp2

0x898d,	// (0x00015e14) bg_passive_tab_pane_g1_cp2

0x897b,	// (0x00015e02) bg_passive_tab_pane_g2_cp2

0x8996,	// (0x00015e1d) bg_passive_tab_pane_g3_cp2

0x899f,	// (0x00015e26) bg_active_tab_pane_g1_cp3

0x897b,	// (0x00015e02) bg_active_tab_pane_g2_cp3

0x89a8,	// (0x00015e2f) bg_active_tab_pane_g3_cp3

0x899f,	// (0x00015e26) bg_passive_tab_pane_g1_cp3

0x897b,	// (0x00015e02) bg_passive_tab_pane_g2_cp3

0x89a8,	// (0x00015e2f) bg_passive_tab_pane_g3_cp3

0x89b1,	// (0x00015e38) bg_active_tab_pane_g1_cp4

0x897b,	// (0x00015e02) bg_active_tab_pane_g2_cp4

0x89bc,	// (0x00015e43) bg_active_tab_pane_g3_cp4

0x89b1,	// (0x00015e38) bg_passive_tab_pane_g1_cp4

0x897b,	// (0x00015e02) bg_passive_tab_pane_g2_cp4

0x89bc,	// (0x00015e43) bg_passive_tab_pane_g3_cp4

0x89c7,	// (0x00015e4e) bg_active_tab_pane_g1_cp5

0x897b,	// (0x00015e02) bg_active_tab_pane_g2_cp5

0x89d0,	// (0x00015e57) bg_active_tab_pane_g3_cp5

0x89c7,	// (0x00015e4e) bg_passive_tab_pane_g1_cp5

0x897b,	// (0x00015e02) bg_passive_tab_pane_g2_cp5

0x89d0,	// (0x00015e57) bg_passive_tab_pane_g3_cp5

0x89d9,	// (0x00015e60) list_set_graphic_pane_ParamLimits

0x89d9,	// (0x00015e60) list_set_graphic_pane

0x37d3,	// (0x00010c5a) bg_set_opt_pane_cp4

0x46a6,	// (0x00011b2d) list_set_graphic_pane_g1_ParamLimits

0x46a6,	// (0x00011b2d) list_set_graphic_pane_g1

0x46b2,	// (0x00011b39) list_set_graphic_pane_g2_ParamLimits

0x46b2,	// (0x00011b39) list_set_graphic_pane_g2

0x0001,

0xf71f,	// (0x0001cba6) list_set_graphic_pane_g_ParamLimits

0xf71f,	// (0x0001cba6) list_set_graphic_pane_g

0x0009,

0xfab7,	// (0x0001cf3e) volume_small_pane_cp_g

0x89f7,	// (0x00015e7e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x89f7,	// (0x00015e7e) list_double2_large_graphic_pane_g1_cp2

0x46d4,	// (0x00011b5b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x46d4,	// (0x00011b5b) list_double2_large_graphic_pane_g2_cp2

0x46e5,	// (0x00011b6c) list_double2_large_graphic_pane_g3_cp2

0x46ed,	// (0x00011b74) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x46ed,	// (0x00011b74) list_double2_large_graphic_pane_t1_cp2

0x4703,	// (0x00011b8a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4703,	// (0x00011b8a) list_double2_large_graphic_pane_t2_cp2

0xa331,	// (0x000177b8) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa331,	// (0x000177b8) list_double_large_graphic_pane_g1_cp2

0xa342,	// (0x000177c9) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa342,	// (0x000177c9) list_double_large_graphic_pane_g2_cp2

0x4847,	// (0x00011cce) list_double_large_graphic_pane_g3_cp2

0xa353,	// (0x000177da) list_double_large_graphic_pane_g4_cp

0xa35b,	// (0x000177e2) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa35b,	// (0x000177e2) list_double_large_graphic_pane_t1_cp2

0xa372,	// (0x000177f9) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa372,	// (0x000177f9) list_double_large_graphic_pane_t2_cp2

0x4745,	// (0x00011bcc) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4745,	// (0x00011bcc) list_double2_graphic_pane_g1_cp2

0x4753,	// (0x00011bda) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4753,	// (0x00011bda) list_double2_graphic_pane_g2_cp2

0x4764,	// (0x00011beb) list_double2_graphic_pane_g3_cp2

0x476e,	// (0x00011bf5) list_double2_graphic_pane_t1_cp2_ParamLimits

0x476e,	// (0x00011bf5) list_double2_graphic_pane_t1_cp2

0x4784,	// (0x00011c0b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4784,	// (0x00011c0b) list_double2_graphic_pane_t2_cp2

0x4739,	// (0x00011bc0) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4739,	// (0x00011bc0) list_single_number_heading_pane_g1_cp2

0x4796,	// (0x00011c1d) list_single_number_heading_pane_g2_cp2

0x479e,	// (0x00011c25) list_single_number_heading_pane_t1_cp2_ParamLimits

0x479e,	// (0x00011c25) list_single_number_heading_pane_t1_cp2

0x47b4,	// (0x00011c3b) list_single_number_heading_pane_t2_cp2_ParamLimits

0x47b4,	// (0x00011c3b) list_single_number_heading_pane_t2_cp2

0x47c6,	// (0x00011c4d) list_single_number_heading_pane_t3_cp2_ParamLimits

0x47c6,	// (0x00011c4d) list_single_number_heading_pane_t3_cp2

0x4739,	// (0x00011bc0) list_single_heading_pane_g1_cp2_ParamLimits

0x4739,	// (0x00011bc0) list_single_heading_pane_g1_cp2

0x4796,	// (0x00011c1d) list_single_heading_pane_g2_cp2

0x479e,	// (0x00011c25) list_single_heading_pane_t1_cp2_ParamLimits

0x479e,	// (0x00011c25) list_single_heading_pane_t1_cp2

0xa13b,	// (0x000175c2) list_single_heading_pane_t2_cp2_ParamLimits

0xa13b,	// (0x000175c2) list_single_heading_pane_t2_cp2

0xa083,	// (0x0001750a) list_double_graphic_pane_g1_cp2_ParamLimits

0xa083,	// (0x0001750a) list_double_graphic_pane_g1_cp2

0xa08f,	// (0x00017516) list_double_graphic_pane_g2_cp2_ParamLimits

0xa08f,	// (0x00017516) list_double_graphic_pane_g2_cp2

0xa09e,	// (0x00017525) list_double_graphic_pane_g3_cp2

0xa0a6,	// (0x0001752d) list_double_graphic_pane_t1_cp2_ParamLimits

0xa0a6,	// (0x0001752d) list_double_graphic_pane_t1_cp2

0xa0bc,	// (0x00017543) list_double_graphic_pane_t2_cp2_ParamLimits

0xa0bc,	// (0x00017543) list_double_graphic_pane_t2_cp2

0x483b,	// (0x00011cc2) list_double_number_pane_g1_cp2_ParamLimits

0x483b,	// (0x00011cc2) list_double_number_pane_g1_cp2

0x4847,	// (0x00011cce) list_double_number_pane_g2_cp2

0xa047,	// (0x000174ce) list_double_number_pane_t1_cp2_ParamLimits

0xa047,	// (0x000174ce) list_double_number_pane_t1_cp2

0xa05b,	// (0x000174e2) list_double_number_pane_t2_cp2_ParamLimits

0xa05b,	// (0x000174e2) list_double_number_pane_t2_cp2

0xa071,	// (0x000174f8) list_double_number_pane_t3_cp2_ParamLimits

0xa071,	// (0x000174f8) list_double_number_pane_t3_cp2

0x9f30,	// (0x000173b7) list_single_graphic_pane_g1_cp2_ParamLimits

0x9f30,	// (0x000173b7) list_single_graphic_pane_g1_cp2

0x472d,	// (0x00011bb4) list_single_graphic_pane_g2_cp2_ParamLimits

0x472d,	// (0x00011bb4) list_single_graphic_pane_g2_cp2

0x487f,	// (0x00011d06) list_single_graphic_pane_g3_cp2

0x9f06,	// (0x0001738d) list_single_graphic_pane_t1_cp2_ParamLimits

0x9f06,	// (0x0001738d) list_single_graphic_pane_t1_cp2

0x472d,	// (0x00011bb4) list_single_number_pane_g1_cp2_ParamLimits

0x472d,	// (0x00011bb4) list_single_number_pane_g1_cp2

0x487f,	// (0x00011d06) list_single_number_pane_g2_cp2

0x9f06,	// (0x0001738d) list_single_number_pane_t1_cp2_ParamLimits

0x9f06,	// (0x0001738d) list_single_number_pane_t1_cp2

0x9f1c,	// (0x000173a3) list_single_number_pane_t2_cp2_ParamLimits

0x9f1c,	// (0x000173a3) list_single_number_pane_t2_cp2

0x46d4,	// (0x00011b5b) list_double2_pane_g1_cp2_ParamLimits

0x46d4,	// (0x00011b5b) list_double2_pane_g1_cp2

0x46e5,	// (0x00011b6c) list_double2_pane_g2_cp2

0x4813,	// (0x00011c9a) list_double2_pane_t1_cp2_ParamLimits

0x4813,	// (0x00011c9a) list_double2_pane_t1_cp2

0x4829,	// (0x00011cb0) list_double2_pane_t2_cp2_ParamLimits

0x4829,	// (0x00011cb0) list_double2_pane_t2_cp2

0x483b,	// (0x00011cc2) list_double_pane_g1_cp2_ParamLimits

0x483b,	// (0x00011cc2) list_double_pane_g1_cp2

0x4847,	// (0x00011cce) list_double_pane_g2_cp2

0x484f,	// (0x00011cd6) list_double_pane_t1_cp2_ParamLimits

0x484f,	// (0x00011cd6) list_double_pane_t1_cp2

0x4865,	// (0x00011cec) list_double_pane_t2_cp2_ParamLimits

0x4865,	// (0x00011cec) list_double_pane_t2_cp2

0x8a5c,	// (0x00015ee3) list_single_pane_cp2_g3

0x472d,	// (0x00011bb4) list_single_pane_g1_cp2_ParamLimits

0x472d,	// (0x00011bb4) list_single_pane_g1_cp2

0x487f,	// (0x00011d06) list_single_pane_g2_cp2

0x4887,	// (0x00011d0e) list_single_pane_t1_cp2_ParamLimits

0x4887,	// (0x00011d0e) list_single_pane_t1_cp2

0x8a64,	// (0x00015eeb) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8a64,	// (0x00015eeb) list_single_large_graphic_pane_g1_cp2

0x489f,	// (0x00011d26) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x489f,	// (0x00011d26) list_single_large_graphic_pane_g2_cp2

0x48ab,	// (0x00011d32) list_single_large_graphic_pane_g3_cp2

0x8a70,	// (0x00015ef7) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8a70,	// (0x00015ef7) list_single_large_graphic_pane_g4_cp1

0x48b3,	// (0x00011d3a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x48b3,	// (0x00011d3a) list_single_large_graphic_pane_t1_cp2

0x9ed2,	// (0x00017359) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9ed2,	// (0x00017359) list_single_graphic_heading_pane_g1_cp2

0x9e9f,	// (0x00017326) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9e9f,	// (0x00017326) list_single_graphic_heading_pane_g4_cp2

0x487f,	// (0x00011d06) list_single_graphic_heading_pane_g5_cp2

0x9ede,	// (0x00017365) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9ede,	// (0x00017365) list_single_graphic_heading_pane_t1_cp2

0x9ef4,	// (0x0001737b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9ef4,	// (0x0001737b) list_single_graphic_heading_pane_t2_cp2

0x9e93,	// (0x0001731a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9e93,	// (0x0001731a) list_single_2graphic_pane_g1_cp2

0x9e9f,	// (0x00017326) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9e9f,	// (0x00017326) list_single_2graphic_pane_g2_cp2

0x487f,	// (0x00011d06) list_single_2graphic_pane_g3_cp2

0x9eb0,	// (0x00017337) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9eb0,	// (0x00017337) list_single_2graphic_pane_g4_cp2

0x9ebc,	// (0x00017343) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9ebc,	// (0x00017343) list_single_2graphic_pane_t1_cp2

0x365a,	// (0x00010ae1) list_highlight_pane_g10_cp1

0x9a7b,	// (0x00016f02) list_highlight_pane_g1_cp1

0x9a83,	// (0x00016f0a) list_highlight_pane_g2_cp1

0x9a8b,	// (0x00016f12) list_highlight_pane_g3_cp1

0x9a93,	// (0x00016f1a) list_highlight_pane_g4_cp1

0x9a9b,	// (0x00016f22) list_highlight_pane_g5_cp1

0x9aa3,	// (0x00016f2a) list_highlight_pane_g6_cp1

0x9aab,	// (0x00016f32) list_highlight_pane_g7_cp1

0x9ab3,	// (0x00016f3a) list_highlight_pane_g8_cp1

0x9abb,	// (0x00016f42) list_highlight_pane_g9_cp1

0x99a3,	// (0x00016e2a) form_field_slider_pane_t3

0x99b1,	// (0x00016e38) form_field_slider_pane_t4

0x99bf,	// (0x00016e46) slider_form_pane_ParamLimits

0x99bf,	// (0x00016e46) slider_form_pane

0x37d3,	// (0x00010c5a) control_abbreviations

0x37d3,	// (0x00010c5a) control_conventions

0x37d3,	// (0x00010c5a) control_definitions

0x37d3,	// (0x00010c5a) format_table_attribute

0xa185,	// (0x0001760c) bg_popup_preview_window_pane_g9

0x37d3,	// (0x00010c5a) format_table_data2

0x37d3,	// (0x00010c5a) format_table_data3

0x37d3,	// (0x00010c5a) format_table_data_example

0x0008,

0x37d3,	// (0x00010c5a) intro_purpose

0xf8bb,	// (0x0001cd42) bg_popup_preview_window_pane_g

0x37d3,	// (0x00010c5a) texts_category

0x37d3,	// (0x00010c5a) texts_graphics

0x48c9,	// (0x00011d50) text_digital

0x48d8,	// (0x00011d5f) text_primary

0x48e7,	// (0x00011d6e) text_primary_small

0x48f6,	// (0x00011d7d) text_secondary

0x4905,	// (0x00011d8c) text_title

0xa9a8,	// (0x00017e2f) bg_passive_tab_pane_g1_cp3_srt

0x897b,	// (0x00015e02) bg_passive_tab_pane_g2_cp3_srt

0xa9b1,	// (0x00017e38) bg_passive_tab_pane_g3_cp3_srt

0x384f,	// (0x00010cd6) bg_active_tab_pane_cp3_srt_ParamLimits

0x384f,	// (0x00010cd6) bg_active_tab_pane_cp3_srt

0xa9ba,	// (0x00017e41) tabs_4_active_pane_srt_g1

0xa9c2,	// (0x00017e49) tabs_4_active_pane_srt_t1_ParamLimits

0xa9c2,	// (0x00017e49) tabs_4_active_pane_srt_t1

0xa9a8,	// (0x00017e2f) bg_active_tab_pane_g1_cp3_copy1

0x897b,	// (0x00015e02) bg_active_tab_pane_g2_cp3_copy1

0xa9b1,	// (0x00017e38) bg_active_tab_pane_g3_cp3_copy1

0x384f,	// (0x00010cd6) tabs_2_long_active_pane_srt_ParamLimits

0x384f,	// (0x00010cd6) tabs_2_long_active_pane_srt

0x384f,	// (0x00010cd6) tabs_2_long_passive_pane_srt_ParamLimits

0x384f,	// (0x00010cd6) tabs_2_long_passive_pane_srt

0x86d5,	// (0x00015b5c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x86d5,	// (0x00015b5c) bg_passive_tab_pane_cp4_srt

0xa5b8,	// (0x00017a3f) bg_passive_tab_pane_g1_cp4_srt

0x897b,	// (0x00015e02) bg_passive_tab_pane_g2_cp4_srt

0xa5c1,	// (0x00017a48) bg_passive_tab_pane_g3_cp4_srt

0x86b4,	// (0x00015b3b) bg_active_tab_pane_cp4_srt_ParamLimits

0x86b4,	// (0x00015b3b) bg_active_tab_pane_cp4_srt

0xa5ca,	// (0x00017a51) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa5ca,	// (0x00017a51) tabs_2_long_active_pane_srt_t1

0xa5b8,	// (0x00017a3f) bg_active_tab_pane_g1_cp4_srt

0x897b,	// (0x00015e02) bg_active_tab_pane_g2_cp4_srt

0xa5c1,	// (0x00017a48) bg_active_tab_pane_g3_cp4_srt

0x3841,	// (0x00010cc8) tabs_3_long_active_pane_srt_ParamLimits

0x3841,	// (0x00010cc8) tabs_3_long_active_pane_srt

0x3841,	// (0x00010cc8) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3841,	// (0x00010cc8) tabs_3_long_passive_pane_cp_srt

0x3841,	// (0x00010cc8) tabs_3_long_passive_pane_srt_ParamLimits

0x3841,	// (0x00010cc8) tabs_3_long_passive_pane_srt

0x86d5,	// (0x00015b5c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x86d5,	// (0x00015b5c) bg_passive_tab_pane_cp5_srt

0x89c7,	// (0x00015e4e) bg_passive_tab_pane_g1_cp5_srt

0x897b,	// (0x00015e02) bg_passive_tab_pane_g2_cp5_srt

0x89d0,	// (0x00015e57) bg_passive_tab_pane_g3_cp5_srt

0x86b4,	// (0x00015b3b) bg_active_tab_pane_cp5_srt_ParamLimits

0x86b4,	// (0x00015b3b) bg_active_tab_pane_cp5_srt

0xa5a6,	// (0x00017a2d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa5a6,	// (0x00017a2d) tabs_3_long_active_pane_srt_t1

0x89c7,	// (0x00015e4e) bg_active_tab_pane_g1_cp5_srt

0x897b,	// (0x00015e02) bg_active_tab_pane_g2_cp5_srt

0x89d0,	// (0x00015e57) bg_active_tab_pane_g3_cp5_srt

0xa598,	// (0x00017a1f) navi_text_pane_srt_t1

0xa590,	// (0x00017a17) navi_icon_pane_srt_g1

0x4a99,	// (0x00011f20) midp_editing_number_pane_srt

0x4914,	// (0x00011d9b) midp_ticker_pane_srt

0x4aa1,	// (0x00011f28) midp_ticker_pane_srt_g1

0x4aa9,	// (0x00011f30) midp_ticker_pane_srt_g2

0x0001,

0xf73e,	// (0x0001cbc5) midp_ticker_pane_srt_g

0x4ab1,	// (0x00011f38) midp_ticker_pane_srt_t1

0xa581,	// (0x00017a08) midp_editing_number_pane_t1_copy1

0x8a8a,	// (0x00015f11) listscroll_midp_pane

0x8a8a,	// (0x00015f11) midp_form_pane

0x8afc,	// (0x00015f83) midp_info_popup_window_ParamLimits

0x8afc,	// (0x00015f83) midp_info_popup_window

0x3dbc,	// (0x00011243) bg_popup_sub_pane_cp50_ParamLimits

0x3dbc,	// (0x00011243) bg_popup_sub_pane_cp50

0x96af,	// (0x00016b36) listscroll_midp_info_pane_ParamLimits

0x96af,	// (0x00016b36) listscroll_midp_info_pane

0x968f,	// (0x00016b16) listscroll_form_midp_pane_ParamLimits

0x968f,	// (0x00016b16) listscroll_form_midp_pane

0x969b,	// (0x00016b22) scroll_bar_cp050

0x966f,	// (0x00016af6) list_midp_pane

0xb743,	// (0x00018bca) signal_pane_g2_cp

0x95a9,	// (0x00016a30) listscroll_midp_info_pane_t1_ParamLimits

0x95a9,	// (0x00016a30) listscroll_midp_info_pane_t1

0x95c1,	// (0x00016a48) listscroll_midp_info_pane_t2_ParamLimits

0x95c1,	// (0x00016a48) listscroll_midp_info_pane_t2

0x95ff,	// (0x00016a86) listscroll_midp_info_pane_t3_ParamLimits

0x95ff,	// (0x00016a86) listscroll_midp_info_pane_t3

0x9639,	// (0x00016ac0) listscroll_midp_info_pane_t4_ParamLimits

0x9639,	// (0x00016ac0) listscroll_midp_info_pane_t4

0x0003,

0xf7f6,	// (0x0001cc7d) listscroll_midp_info_pane_t_ParamLimits

0xf7f6,	// (0x0001cc7d) listscroll_midp_info_pane_t

0x3e29,	// (0x000112b0) scroll_pane_cp21

0x9549,	// (0x000169d0) form_midp_field_choice_group_pane

0x9552,	// (0x000169d9) form_midp_field_text_pane

0x958f,	// (0x00016a16) form_midp_field_time_pane

0x9597,	// (0x00016a1e) form_midp_gauge_slider_pane

0x95a0,	// (0x00016a27) form_midp_gauge_wait_pane

0x37d3,	// (0x00010c5a) form_midp_image_pane

0x9517,	// (0x0001699e) list_single_midp_pane_ParamLimits

0x9517,	// (0x0001699e) list_single_midp_pane

0x94cc,	// (0x00016953) form_midp_field_text_pane_t1

0x9287,	// (0x0001670e) input_focus_pane_cp050

0x9506,	// (0x0001698d) list_midp_form_text_pane

0x949b,	// (0x00016922) form_midp_field_choice_group_pane_t1

0x94a9,	// (0x00016930) input_focus_pane_cp051

0x94bd,	// (0x00016944) list_midp_choice_pane

0x37d3,	// (0x00010c5a) status_idle_pane

0x947f,	// (0x00016906) form_midp_field_time_pane_t1

0x365a,	// (0x00010ae1) wait_anim_pane_g2_copy1

0x948d,	// (0x00016914) form_midp_field_time_pane_t2

0x0001,

0x4974,	// (0x00011dfb) aid_navinavi_width_2_pane

0xf7f1,	// (0x0001cc78) form_midp_field_time_pane_t

0x37d3,	// (0x00010c5a) input_focus_pane_cp052

0x37d3,	// (0x00010c5a) bg_input_focus_pane_cp040

0x943f,	// (0x000168c6) form_midp_gauge_slider_pane_t1

0x944d,	// (0x000168d4) form_midp_gauge_slider_pane_t2

0x945b,	// (0x000168e2) form_midp_gauge_slider_pane_t3

0x9469,	// (0x000168f0) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e8,	// (0x0001cc6f) form_midp_gauge_slider_pane_t

0x9477,	// (0x000168fe) form_midp_slider_pane

0x384f,	// (0x00010cd6) bg_input_focus_pane_cp041_ParamLimits

0x384f,	// (0x00010cd6) bg_input_focus_pane_cp041

0x940c,	// (0x00016893) form_midp_gauge_wait_pane_t1_ParamLimits

0x940c,	// (0x00016893) form_midp_gauge_wait_pane_t1

0x941e,	// (0x000168a5) form_midp_gauge_wait_pane_t2_ParamLimits

0x941e,	// (0x000168a5) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e3,	// (0x0001cc6a) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e3,	// (0x0001cc6a) form_midp_gauge_wait_pane_t

0x9430,	// (0x000168b7) form_midp_wait_pane_ParamLimits

0x9430,	// (0x000168b7) form_midp_wait_pane

0x93d6,	// (0x0001685d) form_midp_image_pane_g1

0x93df,	// (0x00016866) form_midp_image_pane_t1

0x93ee,	// (0x00016875) form_midp_image_pane_t2

0x93fd,	// (0x00016884) form_midp_image_pane_t3

0x0002,

0xf7dc,	// (0x0001cc63) form_midp_image_pane_t

0x93be,	// (0x00016845) list_single_midp_pane_g1

0x93c7,	// (0x0001684e) list_single_midp_pane_t1

0x9395,	// (0x0001681c) list_midp_form_item_pane_ParamLimits

0x9395,	// (0x0001681c) list_midp_form_item_pane

0x491c,	// (0x00011da3) list_midp_form_item_pane_t1

0x492b,	// (0x00011db2) midp_ticker_pane_g1

0x4937,	// (0x00011dbe) midp_ticker_pane_g2

0x0001,

0xf724,	// (0x0001cbab) midp_ticker_pane_g

0x4943,	// (0x00011dca) midp_ticker_pane_t1

0xa801,	// (0x00017c88) midp_editing_number_pane_t1

0xa7df,	// (0x00017c66) midp_editing_number_pane

0xa7ee,	// (0x00017c75) midp_ticker_pane

0xa55f,	// (0x000179e6) ai_message_heading_pane

0x37d3,	// (0x00010c5a) bg_popup_window_pane_cp14

0xa567,	// (0x000179ee) listscroll_ai_message_pane

0xa4e9,	// (0x00017970) ai_message_heading_pane_g1_ParamLimits

0xa4e9,	// (0x00017970) ai_message_heading_pane_g1

0xa4f5,	// (0x0001797c) ai_message_heading_pane_g2_ParamLimits

0xa4f5,	// (0x0001797c) ai_message_heading_pane_g2

0xa501,	// (0x00017988) ai_message_heading_pane_g3_ParamLimits

0xa501,	// (0x00017988) ai_message_heading_pane_g3

0xa50d,	// (0x00017994) ai_message_heading_pane_g4_ParamLimits

0xa50d,	// (0x00017994) ai_message_heading_pane_g4

0x0003,

0xf91d,	// (0x0001cda4) ai_message_heading_pane_g_ParamLimits

0xf91d,	// (0x0001cda4) ai_message_heading_pane_g

0xa519,	// (0x000179a0) ai_message_heading_pane_t1_ParamLimits

0xa519,	// (0x000179a0) ai_message_heading_pane_t1

0xa533,	// (0x000179ba) ai_message_heading_pane_t2_ParamLimits

0xa533,	// (0x000179ba) ai_message_heading_pane_t2

0x0001,

0xf926,	// (0x0001cdad) ai_message_heading_pane_t_ParamLimits

0xf926,	// (0x0001cdad) ai_message_heading_pane_t

0xa545,	// (0x000179cc) bg_popup_heading_pane_cp1_ParamLimits

0xa545,	// (0x000179cc) bg_popup_heading_pane_cp1

0xa4d7,	// (0x0001795e) list_ai_message_pane_ParamLimits

0xa4d7,	// (0x0001795e) list_ai_message_pane

0x3e29,	// (0x000112b0) scroll_pane_cp10

0xa473,	// (0x000178fa) list_ai_message_pane_g1

0xa47b,	// (0x00017902) list_ai_message_pane_g2

0x0001,

0xf8fa,	// (0x0001cd81) list_ai_message_pane_g

0xa483,	// (0x0001790a) list_ai_message_pane_t1_ParamLimits

0xa483,	// (0x0001790a) list_ai_message_pane_t1

0xa498,	// (0x0001791f) list_ai_message_pane_t2_ParamLimits

0xa498,	// (0x0001791f) list_ai_message_pane_t2

0xa4ad,	// (0x00017934) list_ai_message_pane_t3_ParamLimits

0xa4ad,	// (0x00017934) list_ai_message_pane_t3

0xa4c2,	// (0x00017949) list_ai_message_pane_t4_ParamLimits

0xa4c2,	// (0x00017949) list_ai_message_pane_t4

0x0003,

0xf8ff,	// (0x0001cd86) list_ai_message_pane_t_ParamLimits

0xf8ff,	// (0x0001cd86) list_ai_message_pane_t

0xa45e,	// (0x000178e5) cell_ai_soft_ind_pane_ParamLimits

0xa45e,	// (0x000178e5) cell_ai_soft_ind_pane

0x4955,	// (0x00011ddc) cell_ai_soft_ind_pane_g1_ParamLimits

0x4955,	// (0x00011ddc) cell_ai_soft_ind_pane_g1

0x37d3,	// (0x00010c5a) grid_highlight_cp1

0x4962,	// (0x00011de9) text_secondary_cp56_ParamLimits

0x4962,	// (0x00011de9) text_secondary_cp56

0xa433,	// (0x000178ba) example_general_pane_ParamLimits

0xa433,	// (0x000178ba) example_general_pane

0xa43f,	// (0x000178c6) example_parent_pane_g1_ParamLimits

0xa43f,	// (0x000178c6) example_parent_pane_g1

0xa44b,	// (0x000178d2) example_parent_pane_t1_ParamLimits

0xa44b,	// (0x000178d2) example_parent_pane_t1

0x636f,	// (0x000137f6) popup_preview_text_window_ParamLimits

0x636f,	// (0x000137f6) popup_preview_text_window

0x4877,	// (0x00011cfe) list_single_pane_cp2_g4

0x3a3b,	// (0x00010ec2) bg_popup_preview_window_pane_ParamLimits

0x3a3b,	// (0x00010ec2) bg_popup_preview_window_pane

0xa18d,	// (0x00017614) popup_preview_text_window_t1_ParamLimits

0xa18d,	// (0x00017614) popup_preview_text_window_t1

0xa1ab,	// (0x00017632) popup_preview_text_window_t2_ParamLimits

0xa1ab,	// (0x00017632) popup_preview_text_window_t2

0xa1f4,	// (0x0001767b) popup_preview_text_window_t3_ParamLimits

0xa1f4,	// (0x0001767b) popup_preview_text_window_t3

0xa239,	// (0x000176c0) popup_preview_text_window_t4_ParamLimits

0xa239,	// (0x000176c0) popup_preview_text_window_t4

0x0004,

0xf8ce,	// (0x0001cd55) popup_preview_text_window_t_ParamLimits

0xf8ce,	// (0x0001cd55) popup_preview_text_window_t

0xa2b7,	// (0x0001773e) scroll_pane_cp11

0x9167,	// (0x000165ee) bg_popup_preview_window_pane_g1

0xa14d,	// (0x000175d4) bg_popup_preview_window_pane_g2

0xa155,	// (0x000175dc) bg_popup_preview_window_pane_g3

0xa15d,	// (0x000175e4) bg_popup_preview_window_pane_g4

0xa165,	// (0x000175ec) bg_popup_preview_window_pane_g5

0xa16d,	// (0x000175f4) bg_popup_preview_window_pane_g6

0xa175,	// (0x000175fc) bg_popup_preview_window_pane_g7

0xa17d,	// (0x00017604) bg_popup_preview_window_pane_g8

0x556e,	// (0x000129f5) aid_popup_width_pane

0x634d,	// (0x000137d4) popup_midp_note_alarm_window_ParamLimits

0x634d,	// (0x000137d4) popup_midp_note_alarm_window

0x3c65,	// (0x000110ec) data_form_pane_ParamLimits

0x84f5,	// (0x0001597c) form_field_data_pane_g1

0x84ff,	// (0x00015986) form_field_data_pane_t1_ParamLimits

0x3c71,	// (0x000110f8) input_focus_pane_ParamLimits

0x3c7f,	// (0x00011106) data_form_wide_pane_ParamLimits

0x3c90,	// (0x00011117) form_field_data_wide_pane_g1

0x3cbc,	// (0x00011143) form_field_data_wide_pane_t1_ParamLimits

0x3b13,	// (0x00010f9a) input_focus_pane_cp6_ParamLimits

0x866b,	// (0x00015af2) input_popup_find_pane_g1_ParamLimits

0x866b,	// (0x00015af2) input_popup_find_pane_g1

0x5adc,	// (0x00012f63) aid_navi_side_left_pane

0x5af1,	// (0x00012f78) aid_navi_side_right_pane

0x9b76,	// (0x00016ffd) bg_popup_window_pane_cp30_ParamLimits

0x9b76,	// (0x00016ffd) bg_popup_window_pane_cp30

0x9bf0,	// (0x00017077) popup_midp_note_alarm_window_g1_ParamLimits

0x9bf0,	// (0x00017077) popup_midp_note_alarm_window_g1

0x9c20,	// (0x000170a7) popup_midp_note_alarm_window_t1_ParamLimits

0x9c20,	// (0x000170a7) popup_midp_note_alarm_window_t1

0x9cc1,	// (0x00017148) popup_midp_note_alarm_window_t2_ParamLimits

0x9cc1,	// (0x00017148) popup_midp_note_alarm_window_t2

0x9d6f,	// (0x000171f6) popup_midp_note_alarm_window_t3_ParamLimits

0x9d6f,	// (0x000171f6) popup_midp_note_alarm_window_t3

0x9d97,	// (0x0001721e) popup_midp_note_alarm_window_t4_ParamLimits

0x9d97,	// (0x0001721e) popup_midp_note_alarm_window_t4

0x9db7,	// (0x0001723e) popup_midp_note_alarm_window_t5_ParamLimits

0x9db7,	// (0x0001723e) popup_midp_note_alarm_window_t5

0x000a,

0xf86b,	// (0x0001ccf2) popup_midp_note_alarm_window_t_ParamLimits

0xf86b,	// (0x0001ccf2) popup_midp_note_alarm_window_t

0x9e63,	// (0x000172ea) wait_bar_pane_cp1_ParamLimits

0x9e63,	// (0x000172ea) wait_bar_pane_cp1

0x37d3,	// (0x00010c5a) wait_anim_pane_copy1

0x37d3,	// (0x00010c5a) wait_border_pane_copy1

0x986c,	// (0x00016cf3) wait_border_pane_g1_copy1

0x3cd6,	// (0x0001115d) form_field_popup_pane_g1

0x8517,	// (0x0001599e) form_field_popup_pane_t1_ParamLimits

0x3c71,	// (0x000110f8) input_focus_pane_cp7_ParamLimits

0x3cde,	// (0x00011165) list_form_pane_ParamLimits

0x3cea,	// (0x00011171) form_field_popup_wide_pane_g1

0x3cf2,	// (0x00011179) form_field_popup_wide_pane_t1_ParamLimits

0x3c71,	// (0x000110f8) input_focus_pane_cp8_ParamLimits

0x3d07,	// (0x0001118e) list_form_wide_pane_ParamLimits

0xaa45,	// (0x00017ecc) aid_size_cell_graphic_pane

0x858b,	// (0x00015a12) data_form_pane_t1_ParamLimits

0xa7ac,	// (0x00017c33) data_form_wide_pane_t1_ParamLimits

0x8d03,	// (0x0001618a) bg_status_flat_pane

0x7b9d,	// (0x00015024) title_pane_t1_ParamLimits

0x3809,	// (0x00010c90) title_pane_t2_ParamLimits

0x382f,	// (0x00010cb6) title_pane_t3_ParamLimits

0xf532,	// (0x0001c9b9) title_pane_t_ParamLimits

0x427b,	// (0x00011702) level_1_signal_ParamLimits

0x4288,	// (0x0001170f) level_2_signal_ParamLimits

0x4295,	// (0x0001171c) level_3_signal_ParamLimits

0x42a2,	// (0x00011729) level_4_signal_ParamLimits

0x42af,	// (0x00011736) level_5_signal_ParamLimits

0x42bc,	// (0x00011743) level_6_signal_ParamLimits

0x42c9,	// (0x00011750) level_7_signal_ParamLimits

0x427b,	// (0x00011702) level_1_battery_ParamLimits

0x4288,	// (0x0001170f) level_2_battery_ParamLimits

0x4295,	// (0x0001171c) level_3_battery_ParamLimits

0x42a2,	// (0x00011729) level_4_battery_ParamLimits

0x42af,	// (0x00011736) level_5_battery_ParamLimits

0x42bc,	// (0x00011743) level_6_battery_ParamLimits

0x42c9,	// (0x00011750) level_7_battery_ParamLimits

0x9a7b,	// (0x00016f02) bg_status_flat_pane_g1

0x9a83,	// (0x00016f0a) bg_status_flat_pane_g2

0x9a8b,	// (0x00016f12) bg_status_flat_pane_g3

0x9a93,	// (0x00016f1a) bg_status_flat_pane_g4

0x9a9b,	// (0x00016f22) bg_status_flat_pane_g5

0x9aa3,	// (0x00016f2a) bg_status_flat_pane_g6

0x9aab,	// (0x00016f32) bg_status_flat_pane_g7

0x7c0d,	// (0x00015094) tabs_3_active_pane_t1_ParamLimits

0x7c0d,	// (0x00015094) tabs_3_passive_pane_t1_ParamLimits

0x7c27,	// (0x000150ae) tabs_4_active_pane_t1_ParamLimits

0x7c27,	// (0x000150ae) tabs_4_1_passive_pane_t1_ParamLimits

0x86a2,	// (0x00015b29) tabs_2_active_pane_t1_ParamLimits

0x86a2,	// (0x00015b29) tabs_2_passive_pane_t1_ParamLimits

0x86b4,	// (0x00015b3b) bg_active_tab_pane_cp4_ParamLimits

0x86c2,	// (0x00015b49) tabs_2_long_active_pane_t1_ParamLimits

0x86d5,	// (0x00015b5c) bg_passive_tab_pane_cp4_ParamLimits

0x6692,	// (0x00013b19) list_single_midp_graphic_pane_t1_ParamLimits

0x86b4,	// (0x00015b3b) bg_active_tab_pane_cp5_ParamLimits

0x86e1,	// (0x00015b68) tabs_3_long_active_pane_t1_ParamLimits

0x86d5,	// (0x00015b5c) bg_passive_tab_pane_cp5_ParamLimits

0x6692,	// (0x00013b19) list_single_midp_graphic_pane_t1

0x8d03,	// (0x0001618a) bg_status_flat_pane_ParamLimits

0x8dcc,	// (0x00016253) indicator_pane_cp2_ParamLimits

0x8dcc,	// (0x00016253) indicator_pane_cp2

0x8ef7,	// (0x0001637e) navi_pane_srt_ParamLimits

0x8ef7,	// (0x0001637e) navi_pane_srt

0x8f1b,	// (0x000163a2) popup_clock_digital_analogue_window_cp1

0x38ad,	// (0x00010d34) indicator_pane_t1

0x4914,	// (0x00011d9b) copy_highlight_pane

0x4914,	// (0x00011d9b) cursor_graphics_pane

0x4914,	// (0x00011d9b) graphic_within_text_pane

0x4914,	// (0x00011d9b) link_highlight_pane

0xa27a,	// (0x00017701) popup_preview_text_window_t5_ParamLimits

0xa27a,	// (0x00017701) popup_preview_text_window_t5

0x497c,	// (0x00011e03) cursor_digital_pane

0x497c,	// (0x00011e03) cursor_primary_pane

0x498d,	// (0x00011e14) cursor_primary_small_pane

0x4995,	// (0x00011e1c) cursor_secondary_pane

0x499d,	// (0x00011e24) cursor_title_pane

0x497c,	// (0x00011e03) link_highlight_digital_pane

0x4984,	// (0x00011e0b) link_highlight_primary_pane

0x498d,	// (0x00011e14) link_highlight_primary_small_pane

0x4995,	// (0x00011e1c) link_highlight_secondary_pane

0x499d,	// (0x00011e24) link_highlight_title_pane

0x497c,	// (0x00011e03) copy_highlight_digital_pane

0x497c,	// (0x00011e03) copy_highlight_primary_pane

0x498d,	// (0x00011e14) copy_highlight_primary_small_pane

0x4995,	// (0x00011e1c) copy_highlight_secondary_pane

0x499d,	// (0x00011e24) copy_highlight_title_pane

0x4995,	// (0x00011e1c) graphic_text_digital_pane

0x9b19,	// (0x00016fa0) graphic_text_primary_pane

0x9b22,	// (0x00016fa9) graphic_text_primary_small_pane

0x498d,	// (0x00011e14) graphic_text_secondary_pane

0x497c,	// (0x00011e03) graphic_text_title_pane

0x8b54,	// (0x00015fdb) cursor_primary_pane_g1

0x9b0b,	// (0x00016f92) cursor_text_primary_t1

0x9af3,	// (0x00016f7a) cursor_primary_small_pane_g1

0x9afd,	// (0x00016f84) cursor_text_primary_small_t1

0x9adb,	// (0x00016f62) cursor_primary_small_pane_g1_copy1

0x9ae5,	// (0x00016f6c) cursor_text_primary_small_t1_copy1

0x9ac3,	// (0x00016f4a) cursor_text_title_t1

0x9ad1,	// (0x00016f58) cursor_title_pane_g1

0x8b54,	// (0x00015fdb) cursor_digital_pane_g1

0x49a5,	// (0x00011e2c) cursor_text_digital_t1

0x49b3,	// (0x00011e3a) link_highlight_primary_pane_g1

0x9a6c,	// (0x00016ef3) link_highlight_primary_pane_t1

0x49b3,	// (0x00011e3a) link_highlight_primary_small_pane_g1

0x49bb,	// (0x00011e42) link_highlight_primary_small_pane_t1

0x49b3,	// (0x00011e3a) link_highlight_secondary_pane_g1

0x49ca,	// (0x00011e51) link_highlight_secondary_pane_t1

0x99d1,	// (0x00016e58) link_highlight_title_pane_g1

0x99e8,	// (0x00016e6f) link_highlight_title_pane_t1

0x99d1,	// (0x00016e58) link_highlight_digital_pane_g1

0x99d9,	// (0x00016e60) link_highlight_digital_pane_t1

0x988b,	// (0x00016d12) copy_highlight_primary_pane_g1

0x98b1,	// (0x00016d38) copy_highlight_primary_pane_t1

0x988b,	// (0x00016d12) copy_highlight_primary_small_pane_g1

0x98a2,	// (0x00016d29) copy_highlight_primary_small_pane_t1

0x49d9,	// (0x00011e60) copy_highlight_secondary_pane_g1

0x49e1,	// (0x00011e68) copy_highlight_secondary_pane_t1

0x988b,	// (0x00016d12) copy_highlight_title_pane_g1

0x9893,	// (0x00016d1a) copy_highlight_title_pane_t1

0x988b,	// (0x00016d12) copy_highlight_digital_pane_g1

0xac13,	// (0x0001809a) copy_highlight_digital_pane_t1

0xab67,	// (0x00017fee) graphic_text_primary_pane_g1

0xabf7,	// (0x0001807e) graphic_text_primary_pane_t1

0xac05,	// (0x0001808c) graphic_text_primary_pane_t2

0x0001,

0xf99a,	// (0x0001ce21) graphic_text_primary_pane_t

0xabd3,	// (0x0001805a) graphic_text_primary_small_pane_g1

0xabdb,	// (0x00018062) graphic_text_primary_small_pane_t1

0xabe9,	// (0x00018070) graphic_text_primary_small_pane_t2

0x0001,

0xf995,	// (0x0001ce1c) graphic_text_primary_small_pane_t

0xabaf,	// (0x00018036) graphic_text_secondary_pane_g1

0xabb7,	// (0x0001803e) graphic_text_secondary_pane_t1

0xabc5,	// (0x0001804c) graphic_text_secondary_pane_t2

0x0001,

0xf990,	// (0x0001ce17) graphic_text_secondary_pane_t

0xab8b,	// (0x00018012) graphic_text_title_pane_g1

0xab93,	// (0x0001801a) graphic_text_title_pane_t1

0xaba1,	// (0x00018028) graphic_text_title_pane_t2

0x0001,

0xf98b,	// (0x0001ce12) graphic_text_title_pane_t

0xab67,	// (0x00017fee) graphic_text_digital_pane_g1

0xab6f,	// (0x00017ff6) graphic_text_digital_pane_t1

0xab7d,	// (0x00018004) graphic_text_digital_pane_t2

0x0001,

0xf986,	// (0x0001ce0d) graphic_text_digital_pane_t

0x384f,	// (0x00010cd6) navi_icon_pane_srt_ParamLimits

0x384f,	// (0x00010cd6) navi_icon_pane_srt

0x37d3,	// (0x00010c5a) navi_midp_pane_srt

0x37d3,	// (0x00010c5a) navi_navi_pane_srt

0x384f,	// (0x00010cd6) navi_text_pane_srt_ParamLimits

0x384f,	// (0x00010cd6) navi_text_pane_srt

0xab32,	// (0x00017fb9) navi_navi_icon_text_pane_srt

0xab3a,	// (0x00017fc1) navi_navi_pane_srt_g1_ParamLimits

0xab3a,	// (0x00017fc1) navi_navi_pane_srt_g1

0xab4c,	// (0x00017fd3) navi_navi_pane_srt_g2_ParamLimits

0xab4c,	// (0x00017fd3) navi_navi_pane_srt_g2

0x0001,

0xf981,	// (0x0001ce08) navi_navi_pane_srt_g_ParamLimits

0xf981,	// (0x0001ce08) navi_navi_pane_srt_g

0xab5e,	// (0x00017fe5) navi_navi_tabs_pane_srt

0xab32,	// (0x00017fb9) navi_navi_text_pane_srt

0xab32,	// (0x00017fb9) navi_navi_volume_pane_srt

0xab23,	// (0x00017faa) navi_navi_text_pane_srt_t1

0x6a12,	// (0x00013e99) navi_navi_volume_pane_srt_g1

0x6a1a,	// (0x00013ea1) volume_small_pane_srt_ParamLimits

0x6a1a,	// (0x00013ea1) volume_small_pane_srt

0x5db3,	// (0x0001323a) volume_small_pane_srt_g1_ParamLimits

0x5db3,	// (0x0001323a) volume_small_pane_srt_g1

0x5dc3,	// (0x0001324a) volume_small_pane_srt_g2_ParamLimits

0x5dc3,	// (0x0001324a) volume_small_pane_srt_g2

0x5dd4,	// (0x0001325b) volume_small_pane_srt_g3_ParamLimits

0x5dd4,	// (0x0001325b) volume_small_pane_srt_g3

0x5de5,	// (0x0001326c) volume_small_pane_srt_g4_ParamLimits

0x5de5,	// (0x0001326c) volume_small_pane_srt_g4

0x5df6,	// (0x0001327d) volume_small_pane_srt_g5_ParamLimits

0x5df6,	// (0x0001327d) volume_small_pane_srt_g5

0x5e07,	// (0x0001328e) volume_small_pane_srt_g6_ParamLimits

0x5e07,	// (0x0001328e) volume_small_pane_srt_g6

0x5e18,	// (0x0001329f) volume_small_pane_srt_g7_ParamLimits

0x5e18,	// (0x0001329f) volume_small_pane_srt_g7

0x5e29,	// (0x000132b0) volume_small_pane_srt_g8_ParamLimits

0x5e29,	// (0x000132b0) volume_small_pane_srt_g8

0x5e3a,	// (0x000132c1) volume_small_pane_srt_g9_ParamLimits

0x5e3a,	// (0x000132c1) volume_small_pane_srt_g9

0x5e4b,	// (0x000132d2) volume_small_pane_srt_g10_ParamLimits

0x5e4b,	// (0x000132d2) volume_small_pane_srt_g10

0x0009,

0xf729,	// (0x0001cbb0) volume_small_pane_srt_g_ParamLimits

0xf729,	// (0x0001cbb0) volume_small_pane_srt_g

0x7de3,	// (0x0001526a) query_popup_data_pane_cp2

0xab09,	// (0x00017f90) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xab09,	// (0x00017f90) navi_navi_icon_text_pane_srt_t1

0x9b19,	// (0x00016fa0) navi_tabs_2_long_pane_srt

0x9b19,	// (0x00016fa0) navi_tabs_2_pane_srt

0x9b19,	// (0x00016fa0) navi_tabs_3_long_pane_srt

0x9b19,	// (0x00016fa0) navi_tabs_3_pane_srt

0x9b19,	// (0x00016fa0) navi_tabs_4_pane_srt

0x69f2,	// (0x00013e79) tabs_2_active_pane_srt_ParamLimits

0x69f2,	// (0x00013e79) tabs_2_active_pane_srt

0x6a02,	// (0x00013e89) tabs_2_passive_pane_srt_ParamLimits

0x6a02,	// (0x00013e89) tabs_2_passive_pane_srt

0x4b50,	// (0x00011fd7) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4b50,	// (0x00011fd7) bg_passive_tab_pane_cp1_srt

0xaad5,	// (0x00017f5c) bg_passive_tab_pane_g1_cp1_srt

0x897b,	// (0x00015e02) bg_passive_tab_pane_g2_cp1_srt

0xaade,	// (0x00017f65) bg_passive_tab_pane_g3_cp1_srt

0x384f,	// (0x00010cd6) bg_active_tab_pane_cp1_srt_ParamLimits

0x384f,	// (0x00010cd6) bg_active_tab_pane_cp1_srt

0xaae7,	// (0x00017f6e) tabs_2_active_pane_srt_g1

0xaaef,	// (0x00017f76) tabs_2_active_pane_srt_t1_ParamLimits

0xaaef,	// (0x00017f76) tabs_2_active_pane_srt_t1

0xaad5,	// (0x00017f5c) bg_active_tab_pane_g1_cp1_srt

0x897b,	// (0x00015e02) bg_active_tab_pane_g2_cp1_srt

0xaade,	// (0x00017f65) bg_active_tab_pane_g3_cp1_srt

0x69bf,	// (0x00013e46) tabs_3_active_pane_srt_ParamLimits

0x69bf,	// (0x00013e46) tabs_3_active_pane_srt

0x69d0,	// (0x00013e57) tabs_3_passive_pane_cp_srt_ParamLimits

0x69d0,	// (0x00013e57) tabs_3_passive_pane_cp_srt

0x69e1,	// (0x00013e68) tabs_3_passive_pane_srt_ParamLimits

0x69e1,	// (0x00013e68) tabs_3_passive_pane_srt

0x4b50,	// (0x00011fd7) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4b50,	// (0x00011fd7) bg_passive_tab_pane_cp2_srt

0x8b5e,	// (0x00015fe5) bg_passive_tab_pane_g1_cp2_srt

0x897b,	// (0x00015e02) bg_passive_tab_pane_g2_cp2_srt

0x8b67,	// (0x00015fee) bg_passive_tab_pane_g3_cp2_srt

0x384f,	// (0x00010cd6) bg_active_tab_pane_cp2_srt_ParamLimits

0x384f,	// (0x00010cd6) bg_active_tab_pane_cp2_srt

0xaabb,	// (0x00017f42) tabs_3_active_pane_srt_g1

0xaac3,	// (0x00017f4a) tabs_3_active_pane_srt_t1_ParamLimits

0xaac3,	// (0x00017f4a) tabs_3_active_pane_srt_t1

0x8b5e,	// (0x00015fe5) bg_active_tab_pane_g1_cp2_srt

0x897b,	// (0x00015e02) bg_active_tab_pane_g2_cp2_srt

0x8b67,	// (0x00015fee) bg_active_tab_pane_g3_cp2_srt

0x6977,	// (0x00013dfe) tabs_4_active_pane_srt_ParamLimits

0x6977,	// (0x00013dfe) tabs_4_active_pane_srt

0x6989,	// (0x00013e10) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6989,	// (0x00013e10) tabs_4_passive_pane_cp2_srt

0x5fba,	// (0x00013441) aid_size_cell_toolbar

0x86d5,	// (0x00015b5c) main_idle_act_pane_ParamLimits

0x617f,	// (0x00013606) popup_large_graphic_colour_window_ParamLimits

0x64ea,	// (0x00013971) popup_toolbar_window_ParamLimits

0x64ea,	// (0x00013971) popup_toolbar_window

0xa82c,	// (0x00017cb3) list_single_graphic_2heading_pane_ParamLimits

0xa82c,	// (0x00017cb3) list_single_graphic_2heading_pane

0x4144,	// (0x000115cb) aid_size_cell_apps_grid_lsc_pane

0x4156,	// (0x000115dd) aid_size_cell_apps_grid_prt_pane

0x4b50,	// (0x00011fd7) bg_wml_button_pane_cp1_ParamLimits

0x4b50,	// (0x00011fd7) bg_wml_button_pane_cp1

0x94cc,	// (0x00016953) form_midp_field_text_pane_t1_ParamLimits

0x9287,	// (0x0001670e) input_focus_pane_cp050_ParamLimits

0x9506,	// (0x0001698d) list_midp_form_text_pane_ParamLimits

0x94a9,	// (0x00016930) input_focus_pane_cp051_ParamLimits

0x94bd,	// (0x00016944) list_midp_choice_pane_ParamLimits

0x933d,	// (0x000167c4) list_single_2graphic_pane_cp3_ParamLimits

0x933d,	// (0x000167c4) list_single_2graphic_pane_cp3

0x9362,	// (0x000167e9) list_single_midp_graphic_pane_ParamLimits

0x9362,	// (0x000167e9) list_single_midp_graphic_pane

0x6597,	// (0x00013a1e) list_single_graphic_2heading_pane_g1_ParamLimits

0x6597,	// (0x00013a1e) list_single_graphic_2heading_pane_g1

0x65a3,	// (0x00013a2a) list_single_graphic_2heading_pane_g4_ParamLimits

0x65a3,	// (0x00013a2a) list_single_graphic_2heading_pane_g4

0x65af,	// (0x00013a36) list_single_graphic_2heading_pane_g5_ParamLimits

0x65af,	// (0x00013a36) list_single_graphic_2heading_pane_g5

0x0002,

0xf77c,	// (0x0001cc03) list_single_graphic_2heading_pane_g_ParamLimits

0xf77c,	// (0x0001cc03) list_single_graphic_2heading_pane_g

0x65bb,	// (0x00013a42) list_single_graphic_2heading_pane_t1_ParamLimits

0x65bb,	// (0x00013a42) list_single_graphic_2heading_pane_t1

0x65cf,	// (0x00013a56) list_single_graphic_2heading_pane_t2_ParamLimits

0x65cf,	// (0x00013a56) list_single_graphic_2heading_pane_t2

0x65e9,	// (0x00013a70) list_single_graphic_2heading_pane_t3_ParamLimits

0x65e9,	// (0x00013a70) list_single_graphic_2heading_pane_t3

0x0002,

0xf783,	// (0x0001cc0a) list_single_graphic_2heading_pane_t_ParamLimits

0xf783,	// (0x0001cc0a) list_single_graphic_2heading_pane_t

0x9077,	// (0x000164fe) bg_popup_sub_pane_cp2

0x90a1,	// (0x00016528) grid_toobar_pane

0x6601,	// (0x00013a88) cell_toolbar_pane_ParamLimits

0x6601,	// (0x00013a88) cell_toolbar_pane

0x910b,	// (0x00016592) cell_toolbar_pane_g1_ParamLimits

0x910b,	// (0x00016592) cell_toolbar_pane_g1

0x911f,	// (0x000165a6) cell_toolbar_pane_g2_ParamLimits

0x911f,	// (0x000165a6) cell_toolbar_pane_g2

0x0001,

0xf791,	// (0x0001cc18) cell_toolbar_pane_g_ParamLimits

0xf791,	// (0x0001cc18) cell_toolbar_pane_g

0x9141,	// (0x000165c8) grid_highlight_pane_cp2_ParamLimits

0x9141,	// (0x000165c8) grid_highlight_pane_cp2

0x915b,	// (0x000165e2) toolbar_button_pane

0x9167,	// (0x000165ee) toolbar_button_pane_g1

0x916f,	// (0x000165f6) toolbar_button_pane_g2

0x9177,	// (0x000165fe) toolbar_button_pane_g3

0x917f,	// (0x00016606) toolbar_button_pane_g4

0x9187,	// (0x0001660e) toolbar_button_pane_g5

0x918f,	// (0x00016616) toolbar_button_pane_g6

0x9197,	// (0x0001661e) toolbar_button_pane_g7

0x919f,	// (0x00016626) toolbar_button_pane_g8

0x91a7,	// (0x0001662e) toolbar_button_pane_g9

0x0009,

0xf796,	// (0x0001cc1d) toolbar_button_pane_g

0x6639,	// (0x00013ac0) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6639,	// (0x00013ac0) list_single_2graphic_pane_g1_cp3

0x6645,	// (0x00013acc) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6645,	// (0x00013acc) list_single_2graphic_pane_g2_cp3

0x6656,	// (0x00013add) list_single_2graphic_pane_g3_cp3

0x665e,	// (0x00013ae5) list_single_2graphic_pane_g4_cp3_ParamLimits

0x665e,	// (0x00013ae5) list_single_2graphic_pane_g4_cp3

0x666a,	// (0x00013af1) list_single_2graphic_pane_t1_cp3_ParamLimits

0x666a,	// (0x00013af1) list_single_2graphic_pane_t1_cp3

0x6686,	// (0x00013b0d) list_single_midp_graphic_pane_g2_ParamLimits

0x6686,	// (0x00013b0d) list_single_midp_graphic_pane_g2

0x5fc2,	// (0x00013449) aid_zoom_text_primary

0x5fca,	// (0x00013451) aid_zoom_text_secondary

0x8bbe,	// (0x00016045) status_small_pane_g7_ParamLimits

0x8bbe,	// (0x00016045) status_small_pane_g7

0x8be1,	// (0x00016068) status_small_pane_t1_ParamLimits

0x7b80,	// (0x00015007) title_pane_g2

0x0003,

0xf529,	// (0x0001c9b0) title_pane_g

0x7e3d,	// (0x000152c4) aid_size_cell_colour_1_pane_ParamLimits

0x7e3d,	// (0x000152c4) aid_size_cell_colour_1_pane

0x7e51,	// (0x000152d8) aid_size_cell_colour_2_pane_ParamLimits

0x7e51,	// (0x000152d8) aid_size_cell_colour_2_pane

0x7e65,	// (0x000152ec) aid_size_cell_colour_3_pane_ParamLimits

0x7e65,	// (0x000152ec) aid_size_cell_colour_3_pane

0x7e79,	// (0x00015300) aid_size_cell_colour_4_pane_ParamLimits

0x7e79,	// (0x00015300) aid_size_cell_colour_4_pane

0x5a19,	// (0x00012ea0) title_pane_stacon_g1_ParamLimits

0x5a19,	// (0x00012ea0) title_pane_stacon_g1

0x9908,	// (0x00016d8f) popup_note_wait_window_g3_ParamLimits

0x9908,	// (0x00016d8f) popup_note_wait_window_g3

0x997e,	// (0x00016e05) popup_note_wait_window_t5_ParamLimits

0x997e,	// (0x00016e05) popup_note_wait_window_t5

0x37d3,	// (0x00010c5a) main_feb_china_hwr_fs_writing_pane

0x6066,	// (0x000134ed) popup_feb_china_hwr_fs_window_ParamLimits

0x6066,	// (0x000134ed) popup_feb_china_hwr_fs_window

0x66a8,	// (0x00013b2f) aid_size_cell_hwr_fs_ParamLimits

0x66a8,	// (0x00013b2f) aid_size_cell_hwr_fs

0x9287,	// (0x0001670e) bg_popup_sub_pane_cp3_ParamLimits

0x9287,	// (0x0001670e) bg_popup_sub_pane_cp3

0x66bd,	// (0x00013b44) grid_hwr_fs_pane_ParamLimits

0x66bd,	// (0x00013b44) grid_hwr_fs_pane

0x66d5,	// (0x00013b5c) linegrid_hwr_fs_pane_ParamLimits

0x66d5,	// (0x00013b5c) linegrid_hwr_fs_pane

0x66e5,	// (0x00013b6c) cell_hwr_fs_pane_ParamLimits

0x66e5,	// (0x00013b6c) cell_hwr_fs_pane

0x9293,	// (0x0001671a) linegrid_hwr_fs_pane_g1_ParamLimits

0x9293,	// (0x0001671a) linegrid_hwr_fs_pane_g1

0x929f,	// (0x00016726) linegrid_hwr_fs_pane_g2_ParamLimits

0x929f,	// (0x00016726) linegrid_hwr_fs_pane_g2

0x92b1,	// (0x00016738) linegrid_hwr_fs_pane_g3_ParamLimits

0x92b1,	// (0x00016738) linegrid_hwr_fs_pane_g3

0x6707,	// (0x00013b8e) linegrid_hwr_fs_pane_g4_ParamLimits

0x6707,	// (0x00013b8e) linegrid_hwr_fs_pane_g4

0x6721,	// (0x00013ba8) linegrid_hwr_fs_pane_g5_ParamLimits

0x6721,	// (0x00013ba8) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c1,	// (0x0001cc48) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c1,	// (0x0001cc48) linegrid_hwr_fs_pane_g

0x92bd,	// (0x00016744) cell_hwr_fs_pane_g1_ParamLimits

0x92bd,	// (0x00016744) cell_hwr_fs_pane_g1

0x8fb1,	// (0x00016438) cell_hwr_fs_pane_g2_ParamLimits

0x8fb1,	// (0x00016438) cell_hwr_fs_pane_g2

0x92d3,	// (0x0001675a) cell_hwr_fs_pane_g3_ParamLimits

0x92d3,	// (0x0001675a) cell_hwr_fs_pane_g3

0x92e0,	// (0x00016767) cell_hwr_fs_pane_g4_ParamLimits

0x92e0,	// (0x00016767) cell_hwr_fs_pane_g4

0x0003,

0xf7cc,	// (0x0001cc53) cell_hwr_fs_pane_g_ParamLimits

0xf7cc,	// (0x0001cc53) cell_hwr_fs_pane_g

0x6737,	// (0x00013bbe) cell_hwr_fs_pane_t1

0x37d3,	// (0x00010c5a) grid_highlight_pane_cp6

0x37d3,	// (0x00010c5a) main_idle_act2_pane

0x3e10,	// (0x00011297) aid_inside_area_popup_secondary

0x9f9d,	// (0x00017424) aid_inside_area_window_primary_ParamLimits

0x9f9d,	// (0x00017424) aid_inside_area_window_primary

0xac22,	// (0x000180a9) ai2_news_ticker_pane

0xac2a,	// (0x000180b1) aid_size_cell_ai1_link_ParamLimits

0xac2a,	// (0x000180b1) aid_size_cell_ai1_link

0xac44,	// (0x000180cb) popup_ai2_data_window_ParamLimits

0xac44,	// (0x000180cb) popup_ai2_data_window

0xac5a,	// (0x000180e1) popup_ai2_link_window_ParamLimits

0xac5a,	// (0x000180e1) popup_ai2_link_window

0x9287,	// (0x0001670e) bg_popup_sub_pane_cp4_ParamLimits

0x9287,	// (0x0001670e) bg_popup_sub_pane_cp4

0xac6e,	// (0x000180f5) grid_ai2_link_pane_ParamLimits

0xac6e,	// (0x000180f5) grid_ai2_link_pane

0xac85,	// (0x0001810c) popup_ai2_link_window_g1_ParamLimits

0xac85,	// (0x0001810c) popup_ai2_link_window_g1

0xac91,	// (0x00018118) popup_ai2_link_window_g2_ParamLimits

0xac91,	// (0x00018118) popup_ai2_link_window_g2

0x0001,

0xf99f,	// (0x0001ce26) popup_ai2_link_window_g_ParamLimits

0xf99f,	// (0x0001ce26) popup_ai2_link_window_g

0xaca0,	// (0x00018127) ai2_mp_button_pane

0xaca8,	// (0x0001812f) ai2_mp_volume_pane

0x94a9,	// (0x00016930) bg_popup_sub_pane_cp5_ParamLimits

0x94a9,	// (0x00016930) bg_popup_sub_pane_cp5

0xacb0,	// (0x00018137) heading_ai2_gene_pane_ParamLimits

0xacb0,	// (0x00018137) heading_ai2_gene_pane

0xacbc,	// (0x00018143) list_ai2_gene_pane_ParamLimits

0xacbc,	// (0x00018143) list_ai2_gene_pane

0xad04,	// (0x0001818b) cell_ai2_link_pane_ParamLimits

0xad04,	// (0x0001818b) cell_ai2_link_pane

0xad1a,	// (0x000181a1) cell_ai2_link_pane_g1

0x37d3,	// (0x00010c5a) grid_highlight_pane_cp7

0x6a2f,	// (0x00013eb6) ai2_mp_volume_pane_g1

0xadea,	// (0x00018271) ai2_mp_volume_pane_g2

0xad5f,	// (0x000181e6) list_ai2_gene_pane_t1

0xadf2,	// (0x00018279) ai2_mp_volume_pane_g3

0x0002,

0xf9b8,	// (0x0001ce3f) ai2_mp_volume_pane_g

0x6a37,	// (0x00013ebe) volume_small_pane_cp3

0xadfa,	// (0x00018281) aid_size_cell_ai2_button

0xae02,	// (0x00018289) grid_ai2_button_pane

0xae0b,	// (0x00018292) cell_ai2_button_pane_ParamLimits

0xae0b,	// (0x00018292) cell_ai2_button_pane

0x365a,	// (0x00010ae1) cell_ai2_button_pane_g1

0x37d3,	// (0x00010c5a) grid_highlight_pane_cp8

0xadaa,	// (0x00018231) ai2_gene_pane_t1_ParamLimits

0xadaa,	// (0x00018231) ai2_gene_pane_t1

0x5fb0,	// (0x00013437) aid_height_parent_landscape

0xa618,	// (0x00017a9f) aid_height_set_list

0xa629,	// (0x00017ab0) aid_size_parent

0xaa45,	// (0x00017ecc) aid_size_cell_graphic_pane_ParamLimits

0xaccc,	// (0x00018153) popup_ai2_data_window_g1_ParamLimits

0xaccc,	// (0x00018153) popup_ai2_data_window_g1

0xacd8,	// (0x0001815f) ai2_news_ticker_pane_g1

0xace0,	// (0x00018167) ai2_news_ticker_pane_g2

0x0001,

0xf9a4,	// (0x0001ce2b) ai2_news_ticker_pane_g

0xace8,	// (0x0001816f) ai2_news_ticker_pane_t1

0xacf6,	// (0x0001817d) ai2_news_ticker_pane_t2

0x0001,

0xf9a9,	// (0x0001ce30) ai2_news_ticker_pane_t

0xad23,	// (0x000181aa) heading_ai2_gene_pane_g1

0xad2b,	// (0x000181b2) heading_ai2_gene_pane_t1_ParamLimits

0xad2b,	// (0x000181b2) heading_ai2_gene_pane_t1

0xad40,	// (0x000181c7) list_highlight_pane_cp6

0xad48,	// (0x000181cf) ai2_gene_pane_ParamLimits

0xad48,	// (0x000181cf) ai2_gene_pane

0xad6d,	// (0x000181f4) list_ai2_gene_pane_t2

0x0001,

0xf9ae,	// (0x0001ce35) list_ai2_gene_pane_t

0xad7b,	// (0x00018202) list_highlight_pane_cp8_ParamLimits

0xad7b,	// (0x00018202) list_highlight_pane_cp8

0xad8c,	// (0x00018213) ai2_gene_pane_g1_ParamLimits

0xad8c,	// (0x00018213) ai2_gene_pane_g1

0xad9e,	// (0x00018225) ai2_gene_pane_g2_ParamLimits

0xad9e,	// (0x00018225) ai2_gene_pane_g2

0x0001,

0xf9b3,	// (0x0001ce3a) ai2_gene_pane_g_ParamLimits

0xf9b3,	// (0x0001ce3a) ai2_gene_pane_g

0x3bbe,	// (0x00011045) scroll_pane_cp12

0x5f6d,	// (0x000133f4) control_pane_t3_ParamLimits

0x5f6d,	// (0x000133f4) control_pane_t3

0x8bd2,	// (0x00016059) status_small_pane_g8_ParamLimits

0x8bd2,	// (0x00016059) status_small_pane_g8

0x6148,	// (0x000135cf) popup_find_window_ParamLimits

0x6361,	// (0x000137e8) popup_note_image_window_ParamLimits

0x90dd,	// (0x00016564) list_double2_graphic_pane_vc_g1_ParamLimits

0x90dd,	// (0x00016564) list_double2_graphic_pane_vc_g1

0x472d,	// (0x00011bb4) list_double2_graphic_pane_vc_g2_ParamLimits

0x472d,	// (0x00011bb4) list_double2_graphic_pane_vc_g2

0x90e9,	// (0x00016570) list_double2_graphic_pane_vc_g3_ParamLimits

0x90e9,	// (0x00016570) list_double2_graphic_pane_vc_g3

0x0002,

0xf78a,	// (0x0001cc11) list_double2_graphic_pane_vc_g_ParamLimits

0xf78a,	// (0x0001cc11) list_double2_graphic_pane_vc_g

0x90f5,	// (0x0001657c) list_double2_graphic_pane_vc_t1_ParamLimits

0x90f5,	// (0x0001657c) list_double2_graphic_pane_vc_t1

0x472d,	// (0x00011bb4) list_single_heading_pane_vc_g1_ParamLimits

0x472d,	// (0x00011bb4) list_single_heading_pane_vc_g1

0x90e9,	// (0x00016570) list_single_heading_pane_vc_g2_ParamLimits

0x90e9,	// (0x00016570) list_single_heading_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cc32) list_single_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cc32) list_single_heading_pane_vc_g

0x91af,	// (0x00016636) list_single_heading_pane_vc_t1_ParamLimits

0x91af,	// (0x00016636) list_single_heading_pane_vc_t1

0x91c5,	// (0x0001664c) list_single_heading_pane_vc_t2_ParamLimits

0x91c5,	// (0x0001664c) list_single_heading_pane_vc_t2

0x0001,

0xf7b0,	// (0x0001cc37) list_single_heading_pane_vc_t_ParamLimits

0xf7b0,	// (0x0001cc37) list_single_heading_pane_vc_t

0x91d7,	// (0x0001665e) list_setting_number_pane_vc_g1_ParamLimits

0x91d7,	// (0x0001665e) list_setting_number_pane_vc_g1

0x91e3,	// (0x0001666a) list_setting_number_pane_vc_g2_ParamLimits

0x91e3,	// (0x0001666a) list_setting_number_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001cc3c) list_setting_number_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001cc3c) list_setting_number_pane_vc_g

0x91ef,	// (0x00016676) list_setting_number_pane_vc_t1_ParamLimits

0x91ef,	// (0x00016676) list_setting_number_pane_vc_t1

0x9203,	// (0x0001668a) list_setting_number_pane_vc_t2_ParamLimits

0x9203,	// (0x0001668a) list_setting_number_pane_vc_t2

0x921f,	// (0x000166a6) list_setting_number_pane_vc_t3_ParamLimits

0x921f,	// (0x000166a6) list_setting_number_pane_vc_t3

0x0002,

0xf7ba,	// (0x0001cc41) list_setting_number_pane_vc_t_ParamLimits

0xf7ba,	// (0x0001cc41) list_setting_number_pane_vc_t

0x924b,	// (0x000166d2) set_value_pane_vc_ParamLimits

0x924b,	// (0x000166d2) set_value_pane_vc

0xa82c,	// (0x00017cb3) list_double2_graphic_pane_vc_ParamLimits

0xa82c,	// (0x00017cb3) list_double2_graphic_pane_vc

0xa83f,	// (0x00017cc6) list_double2_large_graphic_pane_vc_ParamLimits

0xa83f,	// (0x00017cc6) list_double2_large_graphic_pane_vc

0xa82c,	// (0x00017cb3) list_double2_pane_vc_ParamLimits

0xa82c,	// (0x00017cb3) list_double2_pane_vc

0xa82c,	// (0x00017cb3) list_double_graphic_heading_pane_vc_ParamLimits

0xa82c,	// (0x00017cb3) list_double_graphic_heading_pane_vc

0xa82c,	// (0x00017cb3) list_double_graphic_pane_vc_ParamLimits

0xa82c,	// (0x00017cb3) list_double_graphic_pane_vc

0xa82c,	// (0x00017cb3) list_double_heading_pane_vc_ParamLimits

0xa82c,	// (0x00017cb3) list_double_heading_pane_vc

0xa851,	// (0x00017cd8) list_double_large_graphic_pane_vc_ParamLimits

0xa851,	// (0x00017cd8) list_double_large_graphic_pane_vc

0xa82c,	// (0x00017cb3) list_double_number_pane_vc_ParamLimits

0xa82c,	// (0x00017cb3) list_double_number_pane_vc

0xa82c,	// (0x00017cb3) list_double_pane_vc_ParamLimits

0xa82c,	// (0x00017cb3) list_double_pane_vc

0xa82c,	// (0x00017cb3) list_double_time_pane_vc_ParamLimits

0xa82c,	// (0x00017cb3) list_double_time_pane_vc

0xa82c,	// (0x00017cb3) list_setting_number_pane_vc_ParamLimits

0xa82c,	// (0x00017cb3) list_setting_number_pane_vc

0xa82c,	// (0x00017cb3) list_setting_pane_vc_ParamLimits

0xa82c,	// (0x00017cb3) list_setting_pane_vc

0xa82c,	// (0x00017cb3) list_single_graphic_heading_pane_vc_ParamLimits

0xa82c,	// (0x00017cb3) list_single_graphic_heading_pane_vc

0xa82c,	// (0x00017cb3) list_single_heading_pane_vc_ParamLimits

0xa82c,	// (0x00017cb3) list_single_heading_pane_vc

0xa86f,	// (0x00017cf6) list_single_number_heading_pane_vc_ParamLimits

0xa86f,	// (0x00017cf6) list_single_number_heading_pane_vc

0xae3f,	// (0x000182c6) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xae3f,	// (0x000182c6) list_double_graphic_heading_pane_vc_g1

0x472d,	// (0x00011bb4) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x472d,	// (0x00011bb4) list_double_graphic_heading_pane_vc_g2

0x90e9,	// (0x00016570) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x90e9,	// (0x00016570) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9bf,	// (0x0001ce46) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9bf,	// (0x0001ce46) list_double_graphic_heading_pane_vc_g

0xae4b,	// (0x000182d2) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xae4b,	// (0x000182d2) list_double_graphic_heading_pane_vc_t1

0xae5f,	// (0x000182e6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xae5f,	// (0x000182e6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c6,	// (0x0001ce4d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c6,	// (0x0001ce4d) list_double_graphic_heading_pane_vc_t

0x91d7,	// (0x0001665e) list_setting_pane_vc_g1_ParamLimits

0x91d7,	// (0x0001665e) list_setting_pane_vc_g1

0x91e3,	// (0x0001666a) list_setting_pane_vc_g2_ParamLimits

0x91e3,	// (0x0001666a) list_setting_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001cc3c) list_setting_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001cc3c) list_setting_pane_vc_g

0xb07c,	// (0x00018503) list_setting_pane_vc_t1_ParamLimits

0xb07c,	// (0x00018503) list_setting_pane_vc_t1

0xb098,	// (0x0001851f) list_setting_pane_vc_t2_ParamLimits

0xb098,	// (0x0001851f) list_setting_pane_vc_t2

0x0001,

0xfa09,	// (0x0001ce90) list_setting_pane_vc_t_ParamLimits

0xfa09,	// (0x0001ce90) list_setting_pane_vc_t

0x924b,	// (0x000166d2) set_value_pane_cp_vc_ParamLimits

0x924b,	// (0x000166d2) set_value_pane_cp_vc

0x472d,	// (0x00011bb4) list_single_number_heading_pane_vc_g1_ParamLimits

0x472d,	// (0x00011bb4) list_single_number_heading_pane_vc_g1

0x90e9,	// (0x00016570) list_single_number_heading_pane_vc_g2_ParamLimits

0x90e9,	// (0x00016570) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cc32) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cc32) list_single_number_heading_pane_vc_g

0xb0b2,	// (0x00018539) list_single_number_heading_pane_vc_t1_ParamLimits

0xb0b2,	// (0x00018539) list_single_number_heading_pane_vc_t1

0xb0c8,	// (0x0001854f) list_single_number_heading_pane_vc_t2_ParamLimits

0xb0c8,	// (0x0001854f) list_single_number_heading_pane_vc_t2

0xb0da,	// (0x00018561) list_single_number_heading_pane_vc_t3_ParamLimits

0xb0da,	// (0x00018561) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0e,	// (0x0001ce95) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0e,	// (0x0001ce95) list_single_number_heading_pane_vc_t

0xb0ec,	// (0x00018573) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xb0ec,	// (0x00018573) list_single_graphic_heading_pane_vc_g1

0x472d,	// (0x00011bb4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x472d,	// (0x00011bb4) list_single_graphic_heading_pane_vc_g4

0x90e9,	// (0x00016570) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x90e9,	// (0x00016570) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa15,	// (0x0001ce9c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa15,	// (0x0001ce9c) list_single_graphic_heading_pane_vc_g

0x9ede,	// (0x00017365) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x9ede,	// (0x00017365) list_single_graphic_heading_pane_vc_t1

0xb0f8,	// (0x0001857f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb0f8,	// (0x0001857f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa1c,	// (0x0001cea3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa1c,	// (0x0001cea3) list_single_graphic_heading_pane_vc_t

0x472d,	// (0x00011bb4) list_double2_pane_vc_g1_ParamLimits

0x472d,	// (0x00011bb4) list_double2_pane_vc_g1

0x90e9,	// (0x00016570) list_double2_pane_vc_g2_ParamLimits

0x90e9,	// (0x00016570) list_double2_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cc32) list_double2_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cc32) list_double2_pane_vc_g

0xb10a,	// (0x00018591) list_double2_pane_vc_t1_ParamLimits

0xb10a,	// (0x00018591) list_double2_pane_vc_t1

0xb122,	// (0x000185a9) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb122,	// (0x000185a9) list_double2_large_graphic_pane_vc_g1

0xb12e,	// (0x000185b5) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb12e,	// (0x000185b5) list_double2_large_graphic_pane_vc_g2

0xb13a,	// (0x000185c1) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb13a,	// (0x000185c1) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa21,	// (0x0001cea8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa21,	// (0x0001cea8) list_double2_large_graphic_pane_vc_g

0xb146,	// (0x000185cd) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb146,	// (0x000185cd) list_double2_large_graphic_pane_vc_t1

0xb15c,	// (0x000185e3) list_double_time_pane_vc_g1_ParamLimits

0xb15c,	// (0x000185e3) list_double_time_pane_vc_g1

0xb168,	// (0x000185ef) list_double_time_pane_vc_g2_ParamLimits

0xb168,	// (0x000185ef) list_double_time_pane_vc_g2

0x0001,

0xfa28,	// (0x0001ceaf) list_double_time_pane_vc_g_ParamLimits

0xfa28,	// (0x0001ceaf) list_double_time_pane_vc_g

0xb174,	// (0x000185fb) list_double_time_pane_vc_t1_ParamLimits

0xb174,	// (0x000185fb) list_double_time_pane_vc_t1

0xb198,	// (0x0001861f) list_double_time_pane_vc_t2_ParamLimits

0xb198,	// (0x0001861f) list_double_time_pane_vc_t2

0xb1c7,	// (0x0001864e) list_double_time_pane_vc_t3_ParamLimits

0xb1c7,	// (0x0001864e) list_double_time_pane_vc_t3

0xb1d9,	// (0x00018660) list_double_time_pane_vc_t4_ParamLimits

0xb1d9,	// (0x00018660) list_double_time_pane_vc_t4

0x0003,

0xfa2d,	// (0x0001ceb4) list_double_time_pane_vc_t_ParamLimits

0xfa2d,	// (0x0001ceb4) list_double_time_pane_vc_t

0x472d,	// (0x00011bb4) list_double_pane_vc_g1_ParamLimits

0x472d,	// (0x00011bb4) list_double_pane_vc_g1

0x90e9,	// (0x00016570) list_double_pane_vc_g2_ParamLimits

0x90e9,	// (0x00016570) list_double_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cc32) list_double_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cc32) list_double_pane_vc_g

0xb1ed,	// (0x00018674) list_double_pane_vc_t1_ParamLimits

0xb1ed,	// (0x00018674) list_double_pane_vc_t1

0xb201,	// (0x00018688) list_double_pane_vc_t2_ParamLimits

0xb201,	// (0x00018688) list_double_pane_vc_t2

0x0001,

0xfa36,	// (0x0001cebd) list_double_pane_vc_t_ParamLimits

0xfa36,	// (0x0001cebd) list_double_pane_vc_t

0x472d,	// (0x00011bb4) list_double_number_pane_vc_g1_ParamLimits

0x472d,	// (0x00011bb4) list_double_number_pane_vc_g1

0x90e9,	// (0x00016570) list_double_number_pane_vc_g2_ParamLimits

0x90e9,	// (0x00016570) list_double_number_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cc32) list_double_number_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cc32) list_double_number_pane_vc_g

0xb219,	// (0x000186a0) list_double_number_pane_vc_t1_ParamLimits

0xb219,	// (0x000186a0) list_double_number_pane_vc_t1

0xb1ed,	// (0x00018674) list_double_number_pane_vc_t2_ParamLimits

0xb1ed,	// (0x00018674) list_double_number_pane_vc_t2

0xb22b,	// (0x000186b2) list_double_number_pane_vc_t3_ParamLimits

0xb22b,	// (0x000186b2) list_double_number_pane_vc_t3

0x0002,

0xfa3b,	// (0x0001cec2) list_double_number_pane_vc_t_ParamLimits

0xfa3b,	// (0x0001cec2) list_double_number_pane_vc_t

0xb243,	// (0x000186ca) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb243,	// (0x000186ca) list_double_large_graphic_pane_vc_g1

0xb25f,	// (0x000186e6) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb25f,	// (0x000186e6) list_double_large_graphic_pane_vc_g2

0xb273,	// (0x000186fa) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb273,	// (0x000186fa) list_double_large_graphic_pane_vc_g3

0xb282,	// (0x00018709) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb282,	// (0x00018709) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa42,	// (0x0001cec9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa42,	// (0x0001cec9) list_double_large_graphic_pane_vc_g

0xb291,	// (0x00018718) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb291,	// (0x00018718) list_double_large_graphic_pane_vc_t1

0xb2ad,	// (0x00018734) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb2ad,	// (0x00018734) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa4b,	// (0x0001ced2) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa4b,	// (0x0001ced2) list_double_large_graphic_pane_vc_t

0x472d,	// (0x00011bb4) list_double_heading_pane_vc_g1_ParamLimits

0x472d,	// (0x00011bb4) list_double_heading_pane_vc_g1

0x90e9,	// (0x00016570) list_double_heading_pane_vc_g2_ParamLimits

0x90e9,	// (0x00016570) list_double_heading_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cc32) list_double_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cc32) list_double_heading_pane_vc_g

0xb2cf,	// (0x00018756) list_double_heading_pane_vc_t1_ParamLimits

0xb2cf,	// (0x00018756) list_double_heading_pane_vc_t1

0xb2e3,	// (0x0001876a) list_double_heading_pane_vc_t2_ParamLimits

0xb2e3,	// (0x0001876a) list_double_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x0001ced7) list_double_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x0001ced7) list_double_heading_pane_vc_t

0xb2fb,	// (0x00018782) list_double_graphic_pane_vc_g1_ParamLimits

0xb2fb,	// (0x00018782) list_double_graphic_pane_vc_g1

0xb30e,	// (0x00018795) list_double_graphic_pane_vc_g2_ParamLimits

0xb30e,	// (0x00018795) list_double_graphic_pane_vc_g2

0x472d,	// (0x00011bb4) list_double_graphic_pane_vc_g3_ParamLimits

0x472d,	// (0x00011bb4) list_double_graphic_pane_vc_g3

0x0003,

0xfa55,	// (0x0001cedc) list_double_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0001cedc) list_double_graphic_pane_vc_g

0xb32b,	// (0x000187b2) list_double_graphic_pane_vc_t1_ParamLimits

0xb32b,	// (0x000187b2) list_double_graphic_pane_vc_t1

0xb34a,	// (0x000187d1) list_double_graphic_pane_vc_t2_ParamLimits

0xb34a,	// (0x000187d1) list_double_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0001cee5) list_double_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0001cee5) list_double_graphic_pane_vc_t

0x557a,	// (0x00012a01) aid_size_cell_fastswap

0x5582,	// (0x00012a09) aid_size_cell_touch_ParamLimits

0x5582,	// (0x00012a09) aid_size_cell_touch

0x57e7,	// (0x00012c6e) popup_fast_swap_wide_window_ParamLimits

0x57e7,	// (0x00012c6e) popup_fast_swap_wide_window

0x58ed,	// (0x00012d74) touch_pane_ParamLimits

0x58ed,	// (0x00012d74) touch_pane

0x3c3a,	// (0x000110c1) button_value_adjust_pane_cp2

0x3c42,	// (0x000110c9) button_value_adjust_pane_cp4

0x3c4a,	// (0x000110d1) form_field_data_pane_cp2

0x849b,	// (0x00015922) form_field_data_wide_pane_cp2

0x4185,	// (0x0001160c) bg_scroll_pane_ParamLimits

0x5b7b,	// (0x00013002) scroll_handle_pane_ParamLimits

0x5b8f,	// (0x00013016) scroll_sc2_down_pane_ParamLimits

0x5b8f,	// (0x00013016) scroll_sc2_down_pane

0x41cb,	// (0x00011652) scroll_sc2_up_pane_ParamLimits

0x41cb,	// (0x00011652) scroll_sc2_up_pane

0xb81c,	// (0x00018ca3) grid_wheel_folder_pane_g1_ParamLimits

0xb81c,	// (0x00018ca3) grid_wheel_folder_pane_g1

0x5d4b,	// (0x000131d2) clock_nsta_pane_cp2_ParamLimits

0x5d4b,	// (0x000131d2) clock_nsta_pane_cp2

0x8a8a,	// (0x00015f11) listscroll_midp_pane_ParamLimits

0x8a96,	// (0x00015f1d) midp_canvas_pane

0x4b10,	// (0x00011f97) nsta_clock_indic_pane

0x4b5c,	// (0x00011fe3) listscroll_form_pane_vc

0x4b6c,	// (0x00011ff3) listscroll_set_pane_vc_ParamLimits

0x4b6c,	// (0x00011ff3) listscroll_set_pane_vc

0x8d1f,	// (0x000161a6) clock_nsta_pane

0x8d9a,	// (0x00016221) indicator_nsta_pane

0x9077,	// (0x000164fe) bg_popup_sub_pane_cp2_ParamLimits

0x908b,	// (0x00016512) find_pane_cp2_ParamLimits

0x908b,	// (0x00016512) find_pane_cp2

0x90a1,	// (0x00016528) grid_toobar_pane_ParamLimits

0x925b,	// (0x000166e2) list_form_gen_pane_vc_ParamLimits

0x925b,	// (0x000166e2) list_form_gen_pane_vc

0x9271,	// (0x000166f8) scroll_pane_cp8_vc_ParamLimits

0x9271,	// (0x000166f8) scroll_pane_cp8_vc

0x92ed,	// (0x00016774) data_form_wide_pane_vc_ParamLimits

0x92ed,	// (0x00016774) data_form_wide_pane_vc

0x92f9,	// (0x00016780) form_field_data_wide_pane_vc_g1

0x9301,	// (0x00016788) form_field_data_wide_pane_vc_t1_ParamLimits

0x9301,	// (0x00016788) form_field_data_wide_pane_vc_t1

0x3c71,	// (0x000110f8) input_focus_pane_cp6_vc_ParamLimits

0x3c71,	// (0x000110f8) input_focus_pane_cp6_vc

0x966f,	// (0x00016af6) list_midp_pane_ParamLimits

0x967b,	// (0x00016b02) scroll_pane_cp16_ParamLimits

0x967b,	// (0x00016b02) scroll_pane_cp16

0x96e5,	// (0x00016b6c) button_value_adjust_pane_ParamLimits

0x96e5,	// (0x00016b6c) button_value_adjust_pane

0xa63b,	// (0x00017ac2) button_value_adjust_pane_cp6_ParamLimits

0xa63b,	// (0x00017ac2) button_value_adjust_pane_cp6

0xa761,	// (0x00017be8) settings_code_pane_cp_ParamLimits

0xa761,	// (0x00017be8) settings_code_pane_cp

0x365a,	// (0x00010ae1) cell_touch_pane_g1

0x365a,	// (0x00010ae1) cell_touch_pane_g2

0x0001,

0xf6cf,	// (0x0001cb56) cell_touch_pane_g

0xae1d,	// (0x000182a4) cell_touch_pane_cp_ParamLimits

0xae1d,	// (0x000182a4) cell_touch_pane_cp

0xae2d,	// (0x000182b4) cell_touch_pane_ParamLimits

0xae2d,	// (0x000182b4) cell_touch_pane

0x365a,	// (0x00010ae1) scroll_sc2_down_pane_g1

0x365a,	// (0x00010ae1) scroll_sc2_up_pane_g1

0x37d3,	// (0x00010c5a) bg_set_opt_pane_cp4_vc

0xae77,	// (0x000182fe) list_set_graphic_pane_vc_g1_ParamLimits

0xae77,	// (0x000182fe) list_set_graphic_pane_vc_g1

0xae83,	// (0x0001830a) list_set_graphic_pane_vc_g2_ParamLimits

0xae83,	// (0x0001830a) list_set_graphic_pane_vc_g2

0x0001,

0xf9cb,	// (0x0001ce52) list_set_graphic_pane_vc_g_ParamLimits

0xf9cb,	// (0x0001ce52) list_set_graphic_pane_vc_g

0xae8f,	// (0x00018316) text_primary_small_cp13_vc_ParamLimits

0xae8f,	// (0x00018316) text_primary_small_cp13_vc

0xaea7,	// (0x0001832e) list_set_graphic_pane_vc_ParamLimits

0xaea7,	// (0x0001832e) list_set_graphic_pane_vc

0x37d3,	// (0x00010c5a) input_focus_pane_cp2_vc

0x365a,	// (0x00010ae1) setting_code_pane_vc_g1

0x3866,	// (0x00010ced) setting_code_pane_vc_t1

0xaeba,	// (0x00018341) set_text_pane_vc_t1_ParamLimits

0xaeba,	// (0x00018341) set_text_pane_vc_t1

0x37d3,	// (0x00010c5a) input_focus_pane_cp1_vc

0xaed7,	// (0x0001835e) list_set_text_pane_vc

0x365a,	// (0x00010ae1) setting_text_pane_vc_g1

0x37d3,	// (0x00010c5a) bg_set_opt_pane_cp2_vc

0x385d,	// (0x00010ce4) setting_slider_graphic_pane_vc_g1

0xaee1,	// (0x00018368) setting_slider_graphic_pane_vc_t1

0xaef1,	// (0x00018378) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d0,	// (0x0001ce57) setting_slider_graphic_pane_vc_t

0xaf01,	// (0x00018388) slider_set_pane_cp_vc

0xaf09,	// (0x00018390) slider_set_pane_vc_g1

0xaf12,	// (0x00018399) slider_set_pane_vc_g2

0x0006,

0xf9d5,	// (0x0001ce5c) slider_set_pane_vc_g

0x3d37,	// (0x000111be) set_opt_bg_pane_g1_copy1

0x3d3f,	// (0x000111c6) set_opt_bg_pane_g2_copy1

0xaf3e,	// (0x000183c5) set_opt_bg_pane_g3_copy1

0x3d4f,	// (0x000111d6) set_opt_bg_pane_g4_copy1

0x3d57,	// (0x000111de) set_opt_bg_pane_g5_copy1

0x3d5f,	// (0x000111e6) set_opt_bg_pane_g6_copy1

0xaf46,	// (0x000183cd) set_opt_bg_pane_g7_copy1

0xaf50,	// (0x000183d7) set_opt_bg_pane_g8_copy1

0xaf58,	// (0x000183df) set_opt_bg_pane_g9_copy1

0x37d3,	// (0x00010c5a) bg_set_opt_pane_cp_vc

0xaf60,	// (0x000183e7) setting_slider_pane_vc_t1

0xaf6f,	// (0x000183f6) setting_slider_pane_vc_t2

0xaf7f,	// (0x00018406) setting_slider_pane_vc_t3

0x0002,

0xf9e4,	// (0x0001ce6b) setting_slider_pane_vc_t

0xaf8f,	// (0x00018416) slider_set_pane_vc

0x6745,	// (0x00013bcc) volume_set_pane_vc_g1

0x6a40,	// (0x00013ec7) volume_set_pane_vc_g2

0x6a49,	// (0x00013ed0) volume_set_pane_vc_g3

0x6a52,	// (0x00013ed9) volume_set_pane_vc_g4

0x6a5b,	// (0x00013ee2) volume_set_pane_vc_g5

0x6a64,	// (0x00013eeb) volume_set_pane_vc_g6

0x6a6d,	// (0x00013ef4) volume_set_pane_vc_g7

0x6a76,	// (0x00013efd) volume_set_pane_vc_g8

0x6a7f,	// (0x00013f06) volume_set_pane_vc_g9

0x6a88,	// (0x00013f0f) volume_set_pane_vc_g10

0x0009,

0xf9eb,	// (0x0001ce72) volume_set_pane_vc_g

0xaf97,	// (0x0001841e) volume_set_pane_vc

0xafa1,	// (0x00018428) button_value_adjust_pane_cp1_vc

0xafab,	// (0x00018432) list_highlight_pane_cp2_vc

0xafb4,	// (0x0001843b) list_set_pane_vc_ParamLimits

0xafb4,	// (0x0001843b) list_set_pane_vc

0xb012,	// (0x00018499) main_pane_set_vc_t1_ParamLimits

0xb012,	// (0x00018499) main_pane_set_vc_t1

0xb027,	// (0x000184ae) main_pane_set_vc_t2_ParamLimits

0xb027,	// (0x000184ae) main_pane_set_vc_t2

0xb039,	// (0x000184c0) main_pane_set_vc_t3_ParamLimits

0xb039,	// (0x000184c0) main_pane_set_vc_t3

0xb04b,	// (0x000184d2) main_pane_set_vc_t4_ParamLimits

0xb04b,	// (0x000184d2) main_pane_set_vc_t4

0x0003,

0xfa00,	// (0x0001ce87) main_pane_set_vc_t_ParamLimits

0xfa00,	// (0x0001ce87) main_pane_set_vc_t

0xb05d,	// (0x000184e4) setting_code_pane_vc_ParamLimits

0xb05d,	// (0x000184e4) setting_code_pane_vc

0xb06c,	// (0x000184f3) setting_slider_graphic_pane_vc

0xb06c,	// (0x000184f3) setting_slider_pane_vc

0xb06c,	// (0x000184f3) setting_text_pane_vc

0xb06c,	// (0x000184f3) setting_volume_pane_vc

0xb074,	// (0x000184fb) scroll_pane_cp121_vc

0x3c28,	// (0x000110af) set_content_pane_vc

0xb374,	// (0x000187fb) button_value_adjust_pane_g1

0xb37d,	// (0x00018804) button_value_adjust_pane_g2

0x0001,

0xfa63,	// (0x0001ceea) button_value_adjust_pane_g

0xb386,	// (0x0001880d) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb386,	// (0x0001880d) form_field_slider_wide_pane_vc_t1

0xb39a,	// (0x00018821) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb39a,	// (0x00018821) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa68,	// (0x0001ceef) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa68,	// (0x0001ceef) form_field_slider_wide_pane_vc_t

0x3841,	// (0x00010cc8) input_focus_pane_cp10_vc_ParamLimits

0x3841,	// (0x00010cc8) input_focus_pane_cp10_vc

0xb3c8,	// (0x0001884f) slider_cont_pane_cp1_vc_ParamLimits

0xb3c8,	// (0x0001884f) slider_cont_pane_cp1_vc

0xb3da,	// (0x00018861) slider_form_pane_g1_cp2

0xaf12,	// (0x00018399) slider_form_pane_g2_cp2

0xb407,	// (0x0001888e) form_field_slider_pane_vc_t3

0xb415,	// (0x0001889c) form_field_slider_pane_vc_t4

0xb423,	// (0x000188aa) slider_form_pane_vc_ParamLimits

0xb423,	// (0x000188aa) slider_form_pane_vc

0xb430,	// (0x000188b7) form_field_slider_pane_vc_t1_ParamLimits

0xb430,	// (0x000188b7) form_field_slider_pane_vc_t1

0xb39a,	// (0x00018821) form_field_slider_pane_vc_t2_ParamLimits

0xb39a,	// (0x00018821) form_field_slider_pane_vc_t2

0x0001,

0xfa7a,	// (0x0001cf01) form_field_slider_pane_vc_t_ParamLimits

0xfa7a,	// (0x0001cf01) form_field_slider_pane_vc_t

0x3841,	// (0x00010cc8) input_focus_pane_cp9_vc_ParamLimits

0x3841,	// (0x00010cc8) input_focus_pane_cp9_vc

0xb44c,	// (0x000188d3) slider_cont_pane_vc_ParamLimits

0xb44c,	// (0x000188d3) slider_cont_pane_vc

0xb460,	// (0x000188e7) list_form_graphic_pane_cp_vc_ParamLimits

0xb460,	// (0x000188e7) list_form_graphic_pane_cp_vc

0x92f9,	// (0x00016780) form_field_popup_wide_pane_vc_g1

0xb475,	// (0x000188fc) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb475,	// (0x000188fc) form_field_popup_wide_pane_vc_t1

0x3c71,	// (0x000110f8) input_focus_pane_cp8_vc_ParamLimits

0x3c71,	// (0x000110f8) input_focus_pane_cp8_vc

0xb4ba,	// (0x00018941) list_form_wide_pane_vc_ParamLimits

0xb4ba,	// (0x00018941) list_form_wide_pane_vc

0xb4c6,	// (0x0001894d) list_form_graphic_pane_vc_g1

0xb4ce,	// (0x00018955) list_form_graphic_pane_vc_t1_ParamLimits

0xb4ce,	// (0x00018955) list_form_graphic_pane_vc_t1

0x384f,	// (0x00010cd6) list_highlight_pane_cp5_vc_ParamLimits

0x384f,	// (0x00010cd6) list_highlight_pane_cp5_vc

0xb4ea,	// (0x00018971) list_form_graphic_pane_vc_ParamLimits

0xb4ea,	// (0x00018971) list_form_graphic_pane_vc

0x92f9,	// (0x00016780) form_field_popup_pane_vc_g1

0xb500,	// (0x00018987) form_field_popup_pane_vc_t1_ParamLimits

0xb500,	// (0x00018987) form_field_popup_pane_vc_t1

0x3c71,	// (0x000110f8) input_focus_pane_cp7_vc_ParamLimits

0x3c71,	// (0x000110f8) input_focus_pane_cp7_vc

0xb517,	// (0x0001899e) list_form_pane_vc_ParamLimits

0xb517,	// (0x0001899e) list_form_pane_vc

0xb523,	// (0x000189aa) data_form_pane_vc_t1_ParamLimits

0xb523,	// (0x000189aa) data_form_pane_vc_t1

0x3d37,	// (0x000111be) input_focus_pane_vc_g1

0x3d3f,	// (0x000111c6) input_focus_pane_vc_g2

0x3d47,	// (0x000111ce) input_focus_pane_vc_g3

0x3d4f,	// (0x000111d6) input_focus_pane_vc_g4

0x3d57,	// (0x000111de) input_focus_pane_vc_g5

0x3d5f,	// (0x000111e6) input_focus_pane_vc_g6

0x3d67,	// (0x000111ee) input_focus_pane_vc_g7

0x3d6f,	// (0x000111f6) input_focus_pane_vc_g8

0x3d77,	// (0x000111fe) input_focus_pane_vc_g9

0x365a,	// (0x00010ae1) input_focus_pane_vc_g10

0x0009,

0xf658,	// (0x0001cadf) input_focus_pane_vc_g

0x92ed,	// (0x00016774) data_form_pane_vc_ParamLimits

0x92ed,	// (0x00016774) data_form_pane_vc

0x92f9,	// (0x00016780) form_field_data_pane_vc_g1

0xb53e,	// (0x000189c5) form_field_data_pane_vc_t1_ParamLimits

0xb53e,	// (0x000189c5) form_field_data_pane_vc_t1

0x3c71,	// (0x000110f8) input_focus_pane_vc_ParamLimits

0x3c71,	// (0x000110f8) input_focus_pane_vc

0xb558,	// (0x000189df) button_value_adjust_pane_cp3_vc

0xb560,	// (0x000189e7) button_value_adjust_pane_cp5_vc

0xb568,	// (0x000189ef) form_field_data_pane_vc_ParamLimits

0xb568,	// (0x000189ef) form_field_data_pane_vc

0xb57f,	// (0x00018a06) form_field_data_pane_vc_cp2

0xb587,	// (0x00018a0e) form_field_data_wide_pane_vc_ParamLimits

0xb587,	// (0x00018a0e) form_field_data_wide_pane_vc

0xb59d,	// (0x00018a24) form_field_data_wide_pane_vc_cp2

0xb5a5,	// (0x00018a2c) form_field_popup_pane_vc_ParamLimits

0xb5a5,	// (0x00018a2c) form_field_popup_pane_vc

0xb5bc,	// (0x00018a43) form_field_popup_wide_pane_vc_ParamLimits

0xb5bc,	// (0x00018a43) form_field_popup_wide_pane_vc

0xb5d2,	// (0x00018a59) form_field_slider_pane_vc_ParamLimits

0xb5d2,	// (0x00018a59) form_field_slider_pane_vc

0xb5e5,	// (0x00018a6c) form_field_slider_wide_pane_vc_ParamLimits

0xb5e5,	// (0x00018a6c) form_field_slider_wide_pane_vc

0xb5f8,	// (0x00018a7f) grid_touch_1_pane_ParamLimits

0xb5f8,	// (0x00018a7f) grid_touch_1_pane

0xb604,	// (0x00018a8b) grid_touch_2_pane_ParamLimits

0xb604,	// (0x00018a8b) grid_touch_2_pane

0x4af3,	// (0x00011f7a) touch_pane_g1_ParamLimits

0x4af3,	// (0x00011f7a) touch_pane_g1

0xb61c,	// (0x00018aa3) cell_app_pane_cp_wide_ParamLimits

0xb61c,	// (0x00018aa3) cell_app_pane_cp_wide

0xb62d,	// (0x00018ab4) grid_popup_fast_wide_pane_ParamLimits

0xb62d,	// (0x00018ab4) grid_popup_fast_wide_pane

0xb641,	// (0x00018ac8) scroll_pane_cp19_ParamLimits

0xb641,	// (0x00018ac8) scroll_pane_cp19

0x37d3,	// (0x00010c5a) bg_popup_window_pane_cp20

0xb655,	// (0x00018adc) listscroll_popup_fast_wide_pane

0xb65d,	// (0x00018ae4) grid_indicator_nsta_pane

0xb66f,	// (0x00018af6) clock_nsta_pane_g1

0xb678,	// (0x00018aff) clock_nsta_pane_t1

0xb694,	// (0x00018b1b) cell_indicator_nsta_pane_ParamLimits

0xb694,	// (0x00018b1b) cell_indicator_nsta_pane

0xb6c9,	// (0x00018b50) cell_indicator_nsta_pane_g1

0xb6d7,	// (0x00018b5e) cell_indicator_nsta_pane_g2

0x0001,

0xfa8b,	// (0x0001cf12) cell_indicator_nsta_pane_g

0xb6e9,	// (0x00018b70) clock_nsta_pane_cp

0xb6f2,	// (0x00018b79) indicator_nsta_pane_cp

0xb6fc,	// (0x00018b83) nsta_clock_indic_pane_g1

0x38a5,	// (0x00010d2c) grid_indicator_pane

0x882e,	// (0x00015cb5) scroll_pane_cp29

0x5c9a,	// (0x00013121) indicator_nsta_pane_cp2_ParamLimits

0x5c9a,	// (0x00013121) indicator_nsta_pane_cp2

0x384f,	// (0x00010cd6) main_apps_wheel_pane

0x9552,	// (0x000169d9) form_midp_field_text_pane_ParamLimits

0x969b,	// (0x00016b22) scroll_bar_cp050_ParamLimits

0xb755,	// (0x00018bdc) cell_indicator_pane_ParamLimits

0xb755,	// (0x00018bdc) cell_indicator_pane

0xb76e,	// (0x00018bf5) cell_indicator_pane_g1

0xb778,	// (0x00018bff) grid_wheel_folder_pane_ParamLimits

0xb778,	// (0x00018bff) grid_wheel_folder_pane

0xb78e,	// (0x00018c15) list_wheel_apps_pane_ParamLimits

0xb78e,	// (0x00018c15) list_wheel_apps_pane

0xb79f,	// (0x00018c26) main_apps_wheel_pane_g1_ParamLimits

0xb79f,	// (0x00018c26) main_apps_wheel_pane_g1

0xb7b3,	// (0x00018c3a) main_apps_wheel_pane_g2_ParamLimits

0xb7b3,	// (0x00018c3a) main_apps_wheel_pane_g2

0x0001,

0xfaa7,	// (0x0001cf2e) main_apps_wheel_pane_g_ParamLimits

0xfaa7,	// (0x0001cf2e) main_apps_wheel_pane_g

0xb7cb,	// (0x00018c52) main_apps_wheel_pane_t1_ParamLimits

0xb7cb,	// (0x00018c52) main_apps_wheel_pane_t1

0xb7ee,	// (0x00018c75) list_wheel_apps_pane_g1

0xb7f6,	// (0x00018c7d) list_wheel_apps_pane_g2

0xb7fe,	// (0x00018c85) list_wheel_apps_pane_g3

0xb808,	// (0x00018c8f) list_wheel_apps_pane_g4

0xb812,	// (0x00018c99) list_wheel_apps_pane_g5

0x0004,

0xfaac,	// (0x0001cf33) list_wheel_apps_pane_g

0x47e6,	// (0x00011c6d) navi_icon_text_pane

0x8c4e,	// (0x000160d5) aid_fill_nsta

0xb835,	// (0x00018cbc) navi_icon_text_pane_g1

0xb841,	// (0x00018cc8) navi_icon_text_pane_t1

0x46be,	// (0x00011b45) list_set_graphic_pane_t1_ParamLimits

0x46be,	// (0x00011b45) list_set_graphic_pane_t1

0x9de6,	// (0x0001726d) popup_midp_note_alarm_window_t6_ParamLimits

0x9de6,	// (0x0001726d) popup_midp_note_alarm_window_t6

0x9df8,	// (0x0001727f) popup_midp_note_alarm_window_t7_ParamLimits

0x9df8,	// (0x0001727f) popup_midp_note_alarm_window_t7

0x9e0a,	// (0x00017291) popup_midp_note_alarm_window_t8_ParamLimits

0x9e0a,	// (0x00017291) popup_midp_note_alarm_window_t8

0x9e1c,	// (0x000172a3) popup_midp_note_alarm_window_t9_ParamLimits

0x9e1c,	// (0x000172a3) popup_midp_note_alarm_window_t9

0x9e2e,	// (0x000172b5) popup_midp_note_alarm_window_t10_ParamLimits

0x9e2e,	// (0x000172b5) popup_midp_note_alarm_window_t10

0x9e40,	// (0x000172c7) popup_midp_note_alarm_window_t11_ParamLimits

0x9e40,	// (0x000172c7) popup_midp_note_alarm_window_t11

0x9e52,	// (0x000172d9) scroll_pane_cp17_ParamLimits

0x9e52,	// (0x000172d9) scroll_pane_cp17

0x6745,	// (0x00013bcc) volume_small_pane_cp_g1

0x6a91,	// (0x00013f18) volume_small_pane_cp_g2

0x6a9a,	// (0x00013f21) volume_small_pane_cp_g3

0x6aa3,	// (0x00013f2a) volume_small_pane_cp_g4

0x6aac,	// (0x00013f33) volume_small_pane_cp_g5

0x6a5b,	// (0x00013ee2) volume_small_pane_cp_g6

0x6ab5,	// (0x00013f3c) volume_small_pane_cp_g7

0x6abe,	// (0x00013f45) volume_small_pane_cp_g8

0x6ac7,	// (0x00013f4e) volume_small_pane_cp_g9

0x6ad0,	// (0x00013f57) volume_small_pane_cp_g10

0x492b,	// (0x00011db2) midp_ticker_pane_g1_ParamLimits

0x4937,	// (0x00011dbe) midp_ticker_pane_g2_ParamLimits

0xf724,	// (0x0001cbab) midp_ticker_pane_g_ParamLimits

0x4943,	// (0x00011dca) midp_ticker_pane_t1_ParamLimits

0x8c64,	// (0x000160eb) aid_fill_nsta_2

0x9687,	// (0x00016b0e) list_form2_midp_pane

0xa7df,	// (0x00017c66) midp_editing_number_pane_ParamLimits

0xa7ee,	// (0x00017c75) midp_ticker_pane_ParamLimits

0xb853,	// (0x00018cda) form2_midp_field_pane

0xb877,	// (0x00018cfe) scroll_pane_cp51

0xb897,	// (0x00018d1e) form2_midp_button_pane_ParamLimits

0xb897,	// (0x00018d1e) form2_midp_button_pane

0xb8a9,	// (0x00018d30) form2_midp_content_pane_ParamLimits

0xb8a9,	// (0x00018d30) form2_midp_content_pane

0xb8c3,	// (0x00018d4a) form2_midp_field_choice_group_pane

0xb8cb,	// (0x00018d52) form2_midp_field_pane_g1

0xb8d3,	// (0x00018d5a) form2_midp_field_pane_g2

0xb8db,	// (0x00018d62) form2_midp_field_pane_g3

0xb8e3,	// (0x00018d6a) form2_midp_field_pane_g4

0x0003,

0xfad1,	// (0x0001cf58) form2_midp_field_pane_g

0xb8eb,	// (0x00018d72) form2_midp_gauge_slider_pane

0xb8f3,	// (0x00018d7a) form2_midp_gauge_wait_pane

0xb8fb,	// (0x00018d82) form2_midp_image_pane_ParamLimits

0xb8fb,	// (0x00018d82) form2_midp_image_pane

0xb916,	// (0x00018d9d) form2_midp_label_pane_ParamLimits

0xb916,	// (0x00018d9d) form2_midp_label_pane

0xb92f,	// (0x00018db6) form2_midp_label_pane_cp_ParamLimits

0xb92f,	// (0x00018db6) form2_midp_label_pane_cp

0xb950,	// (0x00018dd7) form2_midp_string_pane_ParamLimits

0xb950,	// (0x00018dd7) form2_midp_string_pane

0xb962,	// (0x00018de9) form2_midp_text_pane_ParamLimits

0xb962,	// (0x00018de9) form2_midp_text_pane

0xb97d,	// (0x00018e04) form2_midp_time_pane

0xb98d,	// (0x00018e14) input_focus_pane_cp51_ParamLimits

0xb98d,	// (0x00018e14) input_focus_pane_cp51

0xb9a5,	// (0x00018e2c) form2_midp_label_pane_t1_ParamLimits

0xb9a5,	// (0x00018e2c) form2_midp_label_pane_t1

0xb9e6,	// (0x00018e6d) form2_mdip_text_pane_t1_ParamLimits

0xb9e6,	// (0x00018e6d) form2_mdip_text_pane_t1

0xba05,	// (0x00018e8c) form2_midp_time_pane_t1

0xba20,	// (0x00018ea7) form2_midp_gauge_slider_pane_t1

0xba32,	// (0x00018eb9) form2_midp_gauge_slider_pane_t2

0xba44,	// (0x00018ecb) form2_midp_gauge_slider_pane_t3

0x0002,

0xfada,	// (0x0001cf61) form2_midp_gauge_slider_pane_t

0xba56,	// (0x00018edd) form2_midp_slider_pane

0xba62,	// (0x00018ee9) form2_midp_gauge_wait_pane_t1

0xba70,	// (0x00018ef7) form2_midp_wait_pane_ParamLimits

0xba70,	// (0x00018ef7) form2_midp_wait_pane

0xba9b,	// (0x00018f22) list_single_2graphic_pane_cp4_ParamLimits

0xba9b,	// (0x00018f22) list_single_2graphic_pane_cp4

0x9362,	// (0x000167e9) list_single_midp_graphic_pane_cp_ParamLimits

0x9362,	// (0x000167e9) list_single_midp_graphic_pane_cp

0x37d3,	// (0x00010c5a) list_highlight_pane_cp20

0xbac3,	// (0x00018f4a) list_single_2graphic_pane_g1_cp4

0xad23,	// (0x000181aa) list_single_2graphic_pane_g2_cp4

0xbacb,	// (0x00018f52) list_single_2graphic_pane_t1_cp4

0x384f,	// (0x00010cd6) list_highlight_pane_cp21

0xbada,	// (0x00018f61) list_single_midp_graphic_pane_g4_cp

0xbae9,	// (0x00018f70) list_single_midp_graphic_pane_t1_cp

0xbafe,	// (0x00018f85) form2_mdip_string_pane_t1_ParamLimits

0xbafe,	// (0x00018f85) form2_mdip_string_pane_t1

0x37d3,	// (0x00010c5a) bg_wml_button_pane_cp2

0x365a,	// (0x00010ae1) form2_midp_image_pane_g1

0x3bdb,	// (0x00011062) list_double_large_graphic_pane_g5_ParamLimits

0x3bdb,	// (0x00011062) list_double_large_graphic_pane_g5

0x8a8a,	// (0x00015f11) midp_form_pane_ParamLimits

0x384f,	// (0x00010cd6) main_apps_wheel_pane_ParamLimits

0x6387,	// (0x0001380e) popup_preview_window_ParamLimits

0x6387,	// (0x0001380e) popup_preview_window

0x6542,	// (0x000139c9) popup_touch_info_window_ParamLimits

0x6542,	// (0x000139c9) popup_touch_info_window

0x6560,	// (0x000139e7) popup_touch_menu_window_ParamLimits

0x6560,	// (0x000139e7) popup_touch_menu_window

0x3650,	// (0x00010ad7) bg_popup_sub_pane_cp6

0xbc05,	// (0x0001908c) list_touch_menu_pane

0xbc0d,	// (0x00019094) list_single_touch_menu_pane_ParamLimits

0xbc0d,	// (0x00019094) list_single_touch_menu_pane

0xbc23,	// (0x000190aa) list_single_touch_menu_pane_t1

0x384f,	// (0x00010cd6) bg_popup_sub_pane_cp7_ParamLimits

0x384f,	// (0x00010cd6) bg_popup_sub_pane_cp7

0xbc31,	// (0x000190b8) heading_sub_pane

0xbc39,	// (0x000190c0) list_touch_info_pane_ParamLimits

0xbc39,	// (0x000190c0) list_touch_info_pane

0xbc48,	// (0x000190cf) list_single_touch_info_pane_ParamLimits

0xbc48,	// (0x000190cf) list_single_touch_info_pane

0xbc5a,	// (0x000190e1) list_single_touch_info_pane_t1

0xbc68,	// (0x000190ef) list_single_touch_info_pane_t2

0x0001,

0xfae8,	// (0x0001cf6f) list_single_touch_info_pane_t

0x4914,	// (0x00011d9b) bg_popup_heading_pane_cp

0xbc76,	// (0x000190fd) heading_sub_pane_t1

0x9287,	// (0x0001670e) bg_popup_preview_window_pane_cp_ParamLimits

0x9287,	// (0x0001670e) bg_popup_preview_window_pane_cp

0xbc31,	// (0x000190b8) heading_preview_pane

0xbc39,	// (0x000190c0) list_preview_pane_ParamLimits

0xbc39,	// (0x000190c0) list_preview_pane

0xbc84,	// (0x0001910b) popup_preview_window_g1

0xbc48,	// (0x000190cf) list_single_preview_pane_ParamLimits

0xbc48,	// (0x000190cf) list_single_preview_pane

0xbc8c,	// (0x00019113) list_single_preview_pane_g1

0xbc94,	// (0x0001911b) list_single_preview_pane_t1

0xbc5a,	// (0x000190e1) list_single_preview_pane_t2

0x0001,

0xfaed,	// (0x0001cf74) list_single_preview_pane_t

0xbca2,	// (0x00019129) bg_popup_heading_pane_cp2_ParamLimits

0xbca2,	// (0x00019129) bg_popup_heading_pane_cp2

0xbcb8,	// (0x0001913f) heading_preview_pane_g1

0xbcc0,	// (0x00019147) heading_preview_pane_t1_ParamLimits

0xbcc0,	// (0x00019147) heading_preview_pane_t1

0x38bc,	// (0x00010d43) soft_indicator_pane_t1_ParamLimits

0x3b9b,	// (0x00011022) scroll_pane_ParamLimits

0x41c2,	// (0x00011649) scroll_sc2_left_pane

0x41b9,	// (0x00011640) scroll_sc2_right_pane

0x41e1,	// (0x00011668) scroll_bg_pane_g1_ParamLimits

0x41f6,	// (0x0001167d) scroll_bg_pane_g2_ParamLimits

0x420e,	// (0x00011695) scroll_bg_pane_g3_ParamLimits

0xf6af,	// (0x0001cb36) scroll_bg_pane_g_ParamLimits

0x41e1,	// (0x00011668) scroll_handle_pane_g1_ParamLimits

0x4223,	// (0x000116aa) scroll_handle_pane_g2_ParamLimits

0x420e,	// (0x00011695) scroll_handle_pane_g3_ParamLimits

0xf6b6,	// (0x0001cb3d) scroll_handle_pane_g_ParamLimits

0x600a,	// (0x00013491) popup_choice_list_window_ParamLimits

0x600a,	// (0x00013491) popup_choice_list_window

0x9083,	// (0x0001650a) choice_list_pane

0x9133,	// (0x000165ba) cell_toolbar_pane_t1

0x915b,	// (0x000165e2) toolbar_button_pane_ParamLimits

0xa30c,	// (0x00017793) ai_gene_pane_1_t2_ParamLimits

0xa30c,	// (0x00017793) ai_gene_pane_1_t2

0x0001,

0xf8de,	// (0x0001cd65) ai_gene_pane_1_t_ParamLimits

0xf8de,	// (0x0001cd65) ai_gene_pane_1_t

0xbcdd,	// (0x00019164) scroll_sc2_left_pane_g1

0xbcdd,	// (0x00019164) scroll_sc2_right_pane_g1

0x4b50,	// (0x00011fd7) bg_popup_sub_pane_cp10

0xbce7,	// (0x0001916e) list_choice_list_pane

0xbd00,	// (0x00019187) list_single_choice_list_pane_ParamLimits

0xbd00,	// (0x00019187) list_single_choice_list_pane

0xbd13,	// (0x0001919a) list_single_choice_list_pane_g1

0x868d,	// (0x00015b14) list_single_choice_list_pane_t1_ParamLimits

0x868d,	// (0x00015b14) list_single_choice_list_pane_t1

0xbd1b,	// (0x000191a2) choice_list_pane_g1

0xbd23,	// (0x000191aa) choice_list_pane_t1

0x3650,	// (0x00010ad7) input_focus_pane_cp11

0x3fd4,	// (0x0001145b) title_pane_stacon_g2_ParamLimits

0x3fd4,	// (0x0001145b) title_pane_stacon_g2

0x0002,

0xf695,	// (0x0001cb1c) title_pane_stacon_g_ParamLimits

0xf695,	// (0x0001cb1c) title_pane_stacon_g

0x4914,	// (0x00011d9b) cursor_press_pane

0x60b2,	// (0x00013539) popup_fep_hwr_window_ParamLimits

0x60b2,	// (0x00013539) popup_fep_hwr_window

0x612a,	// (0x000135b1) popup_fep_vkb_window_ParamLimits

0x612a,	// (0x000135b1) popup_fep_vkb_window

0xbd31,	// (0x000191b8) cursor_press_pane_g1

0x0002,

0xfb16,	// (0x0001cf9d) fep_vkb_side_pane_g_ParamLimits

0x6b12,	// (0x00013f99) fep_hwr_candidate_pane_ParamLimits

0x6b12,	// (0x00013f99) fep_hwr_candidate_pane

0x6b3c,	// (0x00013fc3) fep_hwr_side_pane_ParamLimits

0x6b3c,	// (0x00013fc3) fep_hwr_side_pane

0x6b5c,	// (0x00013fe3) fep_hwr_top_pane_ParamLimits

0x6b5c,	// (0x00013fe3) fep_hwr_top_pane

0x6b74,	// (0x00013ffb) fep_hwr_write_pane_ParamLimits

0x6b74,	// (0x00013ffb) fep_hwr_write_pane

0xfb16,	// (0x0001cf9d) fep_vkb_side_pane_g

0xbd39,	// (0x000191c0) fep_hwr_top_pane_g1

0xbd4b,	// (0x000191d2) fep_hwr_top_pane_g2

0x6bae,	// (0x00014035) fep_hwr_top_pane_g3

0x0002,

0xfaf2,	// (0x0001cf79) fep_hwr_top_pane_g

0x6bc3,	// (0x0001404a) fep_hwr_top_text_pane

0x42e6,	// (0x0001176d) fep_hwr_top_text_pane_g1

0xbd81,	// (0x00019208) fep_hwr_top_text_pane_t1

0x6cb9,	// (0x00014140) fep_hwr_candidate_pane_g1

0xbfc6,	// (0x0001944d) fep_vkb_keypad_pane_g3_ParamLimits

0xbfc6,	// (0x0001944d) fep_vkb_keypad_pane_g3

0xbfee,	// (0x00019475) fep_vkb_keypad_pane_g4_ParamLimits

0xbfee,	// (0x00019475) fep_vkb_keypad_pane_g4

0xc05d,	// (0x000194e4) fep_vkb_bottom_pane_g2_ParamLimits

0xc05d,	// (0x000194e4) fep_vkb_bottom_pane_g2

0x0001,

0xfb1d,	// (0x0001cfa4) fep_vkb_bottom_pane_g_ParamLimits

0xfb1d,	// (0x0001cfa4) fep_vkb_bottom_pane_g

0xbcdd,	// (0x00019164) cell_vkb_side_pane_g2

0x0001,

0xfb27,	// (0x0001cfae) cell_vkb_side_pane_g

0xc0e8,	// (0x0001956f) cell_vkb_side_pane_t1

0xc0f6,	// (0x0001957d) cell_vkb_side_pane_t1_copy1

0xbcdd,	// (0x00019164) bg_fep_vkb_candidate_pane_g2

0xc222,	// (0x000196a9) cell_vkb_candidate_pane_ParamLimits

0xbd8f,	// (0x00019216) aid_size_cell_vkb_ParamLimits

0xbd8f,	// (0x00019216) aid_size_cell_vkb

0xc222,	// (0x000196a9) cell_vkb_candidate_pane

0x6ce0,	// (0x00014167) bg_popup_fep_shadow_pane_g1

0xbe1d,	// (0x000192a4) fep_vkb_bottom_pane_ParamLimits

0xbe1d,	// (0x000192a4) fep_vkb_bottom_pane

0xbe53,	// (0x000192da) fep_vkb_candidate_pane_ParamLimits

0xbe53,	// (0x000192da) fep_vkb_candidate_pane

0xbe6f,	// (0x000192f6) fep_vkb_keypad_pane_ParamLimits

0xbe6f,	// (0x000192f6) fep_vkb_keypad_pane

0xbeae,	// (0x00019335) fep_vkb_side_pane_ParamLimits

0xbeae,	// (0x00019335) fep_vkb_side_pane

0xbeea,	// (0x00019371) fep_vkb_top_pane_ParamLimits

0xbeea,	// (0x00019371) fep_vkb_top_pane

0xbf1f,	// (0x000193a6) fep_vkb_top_pane_g1_ParamLimits

0xbf1f,	// (0x000193a6) fep_vkb_top_pane_g1

0xbf2e,	// (0x000193b5) fep_vkb_top_pane_g2_ParamLimits

0xbf2e,	// (0x000193b5) fep_vkb_top_pane_g2

0xbf3d,	// (0x000193c4) fep_vkb_top_pane_g3_ParamLimits

0xbf3d,	// (0x000193c4) fep_vkb_top_pane_g3

0x0003,

0xfb0d,	// (0x0001cf94) fep_vkb_top_pane_g_ParamLimits

0xfb0d,	// (0x0001cf94) fep_vkb_top_pane_g

0xbf5b,	// (0x000193e2) fep_vkb_top_text_pane_ParamLimits

0xbf5b,	// (0x000193e2) fep_vkb_top_text_pane

0xbf6c,	// (0x000193f3) fep_vkb_side_pane_g1_ParamLimits

0xbf6c,	// (0x000193f3) fep_vkb_side_pane_g1

0xbfb5,	// (0x0001943c) grid_vkb_side_pane_ParamLimits

0xbfb5,	// (0x0001943c) grid_vkb_side_pane

0x6ce8,	// (0x0001416f) bg_popup_fep_shadow_pane_g2

0x6cf1,	// (0x00014178) bg_popup_fep_shadow_pane_g3

0x6cf9,	// (0x00014180) bg_popup_fep_shadow_pane_g4

0x6d02,	// (0x00014189) bg_popup_fep_shadow_pane_g5

0x6d0c,	// (0x00014193) bg_popup_fep_shadow_pane_g6

0x6d14,	// (0x0001419b) bg_popup_fep_shadow_pane_g7

0x3d4f,	// (0x000111d6) bg_popup_fep_shadow_pane_g8

0xc00c,	// (0x00019493) grid_vkb_keypad_number_pane_ParamLimits

0xc00c,	// (0x00019493) grid_vkb_keypad_number_pane

0xc01c,	// (0x000194a3) grid_vkb_keypad_pane_ParamLimits

0xc01c,	// (0x000194a3) grid_vkb_keypad_pane

0xc042,	// (0x000194c9) fep_vkb_bottom_pane_g1_ParamLimits

0xc042,	// (0x000194c9) fep_vkb_bottom_pane_g1

0xc06b,	// (0x000194f2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc06b,	// (0x000194f2) grid_vkb_keypad_bottom_left_pane

0xc080,	// (0x00019507) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc080,	// (0x00019507) grid_vkb_keypad_bottom_right_pane

0xc095,	// (0x0001951c) fep_vkb_top_text_pane_g1

0xc0b0,	// (0x00019537) fep_vkb_top_text_pane_t1

0xc0c5,	// (0x0001954c) cell_vkb_side_pane_ParamLimits

0xc0c5,	// (0x0001954c) cell_vkb_side_pane

0xbcdd,	// (0x00019164) cell_vkb_side_pane_g1

0xc104,	// (0x0001958b) cell_vkb_keypad_pane_ParamLimits

0xc104,	// (0x0001958b) cell_vkb_keypad_pane

0xc179,	// (0x00019600) cell_vkb_keypad_pane_g1

0x0008,

0xfb3a,	// (0x0001cfc1) bg_popup_fep_shadow_pane_g

0x6d26,	// (0x000141ad) cell_hwr_side_pane_g1

0x6d26,	// (0x000141ad) cell_hwr_side_pane_g2

0xc183,	// (0x0001960a) cell_vkb_keypad_pane_t1

0xc191,	// (0x00019618) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc191,	// (0x00019618) cell_vkb_keypad_bottom_left_pane

0xc1ae,	// (0x00019635) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc1ae,	// (0x00019635) cell_vkb_keypad_bottom_right_pane

0xbcdd,	// (0x00019164) cell_vkb_keypad_bottom_left_pane_g1

0xbcdd,	// (0x00019164) cell_vkb_keypad_bottom_right_pane_g1

0xc1e7,	// (0x0001966e) cell_vkb_keypad_number_pane_ParamLimits

0xc1e7,	// (0x0001966e) cell_vkb_keypad_number_pane

0xc206,	// (0x0001968d) cell_vkb_keypad_number_pane_g1

0xc210,	// (0x00019697) cell_vkb_keypad_number_pane_g2

0xc219,	// (0x000196a0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2c,	// (0x0001cfb3) cell_vkb_keypad_number_pane_g

0xc183,	// (0x0001960a) cell_vkb_keypad_number_pane_t1

0xc23d,	// (0x000196c4) fep_vkb_candidate_pane_g1

0x0001,

0xfb4d,	// (0x0001cfd4) cell_hwr_side_pane_g

0xc256,	// (0x000196dd) cell_hwr_side_pane_t1

0x6d30,	// (0x000141b7) cell_hwr_side_pane_t1_copy1

0x6d3e,	// (0x000141c5) cell_hwr_candidate_pane_g1

0x6d6d,	// (0x000141f4) cell_hwr_candidate_pane_t1

0xbcdd,	// (0x00019164) cell_vkb_candidate_pane_g2

0xc29a,	// (0x00019721) cell_vkb_candidate_pane_t1

0x6ad9,	// (0x00013f60) bg_popup_fep_shadow_pane_ParamLimits

0x6ad9,	// (0x00013f60) bg_popup_fep_shadow_pane

0x6b8e,	// (0x00014015) bg_fep_hwr_top_pane_g4

0xbd5d,	// (0x000191e4) bg_hwr_side_pane_g1_ParamLimits

0xbd5d,	// (0x000191e4) bg_hwr_side_pane_g1

0x6bff,	// (0x00014086) cell_hwr_side_pane_ParamLimits

0x6bff,	// (0x00014086) cell_hwr_side_pane

0x6c3a,	// (0x000140c1) fep_hwr_write_pane_g1_ParamLimits

0x6c3a,	// (0x000140c1) fep_hwr_write_pane_g1

0x6c47,	// (0x000140ce) fep_hwr_write_pane_g2_ParamLimits

0x6c47,	// (0x000140ce) fep_hwr_write_pane_g2

0x6c54,	// (0x000140db) fep_hwr_write_pane_g3_ParamLimits

0x6c54,	// (0x000140db) fep_hwr_write_pane_g3

0x6c62,	// (0x000140e9) fep_hwr_write_pane_g4_ParamLimits

0x6c62,	// (0x000140e9) fep_hwr_write_pane_g4

0x0005,

0xfaf9,	// (0x0001cf80) fep_hwr_write_pane_g_ParamLimits

0xfaf9,	// (0x0001cf80) fep_hwr_write_pane_g

0x6b8e,	// (0x00014015) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6b8e,	// (0x00014015) bg_fep_hwr_candidate_pane_g2

0x6c77,	// (0x000140fe) cell_hwr_candidate_pane_ParamLimits

0x6c77,	// (0x000140fe) cell_hwr_candidate_pane

0x6cb9,	// (0x00014140) fep_hwr_candidate_pane_g1_ParamLimits

0xbdbd,	// (0x00019244) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbdbd,	// (0x00019244) bg_popup_fep_shadow_pane_cp2

0xbf4d,	// (0x000193d4) fep_vkb_top_pane_g4_ParamLimits

0xbf4d,	// (0x000193d4) fep_vkb_top_pane_g4

0xbf93,	// (0x0001941a) fep_vkb_side_pane_g2_ParamLimits

0xbf93,	// (0x0001941a) fep_vkb_side_pane_g2

0x83be,	// (0x00015845) list_setting_pane_t4_ParamLimits

0x83be,	// (0x00015845) list_setting_pane_t4

0x8438,	// (0x000158bf) list_setting_number_pane_t5_ParamLimits

0x8438,	// (0x000158bf) list_setting_number_pane_t5

0x883e,	// (0x00015cc5) list_double_heading_pane_cp2_ParamLimits

0x883e,	// (0x00015cc5) list_double_heading_pane_cp2

0x3df8,	// (0x0001127f) list_double_heading_pane_g1_cp2_ParamLimits

0x3df8,	// (0x0001127f) list_double_heading_pane_g1_cp2

0xc2a8,	// (0x0001972f) list_double_heading_pane_g2_cp2_ParamLimits

0xc2a8,	// (0x0001972f) list_double_heading_pane_g2_cp2

0xc2bc,	// (0x00019743) list_double_heading_pane_t1_cp2_ParamLimits

0xc2bc,	// (0x00019743) list_double_heading_pane_t1_cp2

0xc2d2,	// (0x00019759) list_double_heading_pane_t2_cp2_ParamLimits

0xc2d2,	// (0x00019759) list_double_heading_pane_t2_cp2

0x3648,	// (0x00010acf) aid_value_unit2

0x5833,	// (0x00012cba) popup_preview_fixed_window

0x3993,	// (0x00010e1a) bg_popup_preview_window_pane_cp02

0xc2e4,	// (0x0001976b) list_preview_fixed_pane

0xc32a,	// (0x000197b1) list_empty_pane_fp_ParamLimits

0xc32a,	// (0x000197b1) list_empty_pane_fp

0xc32a,	// (0x000197b1) list_single_cale_day_pane_fp_ParamLimits

0xc32a,	// (0x000197b1) list_single_cale_day_pane_fp

0xc32a,	// (0x000197b1) list_single_graphic_heading_pane_fp_ParamLimits

0xc32a,	// (0x000197b1) list_single_graphic_heading_pane_fp

0xc32a,	// (0x000197b1) list_single_graphic_pane_fp_ParamLimits

0xc32a,	// (0x000197b1) list_single_graphic_pane_fp

0xc32a,	// (0x000197b1) list_single_heading_pane_fp_ParamLimits

0xc32a,	// (0x000197b1) list_single_heading_pane_fp

0xc32a,	// (0x000197b1) list_single_pane_fp_ParamLimits

0xc32a,	// (0x000197b1) list_single_pane_fp

0xc340,	// (0x000197c7) list_single_pane_fp_g1_ParamLimits

0xc340,	// (0x000197c7) list_single_pane_fp_g1

0x3e04,	// (0x0001128b) list_single_pane_fp_g2_ParamLimits

0x3e04,	// (0x0001128b) list_single_pane_fp_g2

0xc34c,	// (0x000197d3) list_single_pane_fp_g3_ParamLimits

0xc34c,	// (0x000197d3) list_single_pane_fp_g3

0xc360,	// (0x000197e7) list_single_pane_fp_g4_ParamLimits

0xc360,	// (0x000197e7) list_single_pane_fp_g4

0x0003,

0xfb60,	// (0x0001cfe7) list_single_pane_fp_g_ParamLimits

0xfb60,	// (0x0001cfe7) list_single_pane_fp_g

0xc36c,	// (0x000197f3) list_single_pane_fp_t1_ParamLimits

0xc36c,	// (0x000197f3) list_single_pane_fp_t1

0xc383,	// (0x0001980a) list_single_graphic_pane_fp_g1_ParamLimits

0xc383,	// (0x0001980a) list_single_graphic_pane_fp_g1

0xc340,	// (0x000197c7) list_single_graphic_pane_fp_g2_ParamLimits

0xc340,	// (0x000197c7) list_single_graphic_pane_fp_g2

0x3e04,	// (0x0001128b) list_single_graphic_pane_fp_g3_ParamLimits

0x3e04,	// (0x0001128b) list_single_graphic_pane_fp_g3

0xc34c,	// (0x000197d3) list_single_graphic_pane_fp_g4_ParamLimits

0xc34c,	// (0x000197d3) list_single_graphic_pane_fp_g4

0xc360,	// (0x000197e7) list_single_graphic_pane_fp_g5_ParamLimits

0xc360,	// (0x000197e7) list_single_graphic_pane_fp_g5

0x0004,

0xfb69,	// (0x0001cff0) list_single_graphic_pane_fp_g_ParamLimits

0xfb69,	// (0x0001cff0) list_single_graphic_pane_fp_g

0xc38f,	// (0x00019816) list_single_graphic_pane_fp_t1_ParamLimits

0xc38f,	// (0x00019816) list_single_graphic_pane_fp_t1

0xc383,	// (0x0001980a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc383,	// (0x0001980a) list_single_graphic_heading_pane_fp_g1

0xc340,	// (0x000197c7) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc340,	// (0x000197c7) list_single_graphic_heading_pane_fp_g2

0x3e04,	// (0x0001128b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3e04,	// (0x0001128b) list_single_graphic_heading_pane_fp_g3

0xc34c,	// (0x000197d3) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc34c,	// (0x000197d3) list_single_graphic_heading_pane_fp_g4

0xc360,	// (0x000197e7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc360,	// (0x000197e7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb69,	// (0x0001cff0) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb69,	// (0x0001cff0) list_single_graphic_heading_pane_fp_g

0xc3a5,	// (0x0001982c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc3a5,	// (0x0001982c) list_single_graphic_heading_pane_fp_t1

0xc3bb,	// (0x00019842) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc3bb,	// (0x00019842) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb74,	// (0x0001cffb) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb74,	// (0x0001cffb) list_single_graphic_heading_pane_fp_t

0xc3cd,	// (0x00019854) list_single_cale_day_pane_fp_g1_ParamLimits

0xc3cd,	// (0x00019854) list_single_cale_day_pane_fp_g1

0xc405,	// (0x0001988c) list_single_cale_day_pane_fp_g2_ParamLimits

0xc405,	// (0x0001988c) list_single_cale_day_pane_fp_g2

0xc411,	// (0x00019898) list_single_cale_day_pane_fp_g3_ParamLimits

0xc411,	// (0x00019898) list_single_cale_day_pane_fp_g3

0xc439,	// (0x000198c0) list_single_cale_day_pane_fp_g4_ParamLimits

0xc439,	// (0x000198c0) list_single_cale_day_pane_fp_g4

0xc45d,	// (0x000198e4) list_single_cale_day_pane_fp_g5_ParamLimits

0xc45d,	// (0x000198e4) list_single_cale_day_pane_fp_g5

0x0004,

0xfb79,	// (0x0001d000) list_single_cale_day_pane_fp_g_ParamLimits

0xfb79,	// (0x0001d000) list_single_cale_day_pane_fp_g

0xc481,	// (0x00019908) list_single_cale_day_pane_fp_t1_ParamLimits

0xc481,	// (0x00019908) list_single_cale_day_pane_fp_t1

0xc4a7,	// (0x0001992e) list_single_cale_day_pane_fp_t2_ParamLimits

0xc4a7,	// (0x0001992e) list_single_cale_day_pane_fp_t2

0xc4c0,	// (0x00019947) list_single_cale_day_pane_fp_t3_ParamLimits

0xc4c0,	// (0x00019947) list_single_cale_day_pane_fp_t3

0x0002,

0xfb84,	// (0x0001d00b) list_single_cale_day_pane_fp_t_ParamLimits

0xfb84,	// (0x0001d00b) list_single_cale_day_pane_fp_t

0xc340,	// (0x000197c7) list_empty_pane_fp_g1_ParamLimits

0xc340,	// (0x000197c7) list_empty_pane_fp_g1

0xc4d9,	// (0x00019960) list_empty_pane_fp_t1

0xc4e7,	// (0x0001996e) list_empty_pane_fp_t2

0x0001,

0xfb8b,	// (0x0001d012) list_empty_pane_fp_t

0xc340,	// (0x000197c7) list_single_heading_pane_fp_g1_ParamLimits

0xc340,	// (0x000197c7) list_single_heading_pane_fp_g1

0x3e04,	// (0x0001128b) list_single_heading_pane_fp_g2_ParamLimits

0x3e04,	// (0x0001128b) list_single_heading_pane_fp_g2

0xc34c,	// (0x000197d3) list_single_heading_pane_fp_g3_ParamLimits

0xc34c,	// (0x000197d3) list_single_heading_pane_fp_g3

0x0002,

0xfb90,	// (0x0001d017) list_single_heading_pane_fp_g_ParamLimits

0xfb90,	// (0x0001d017) list_single_heading_pane_fp_g

0xc4f5,	// (0x0001997c) list_single_heading_pane_fp_t1_ParamLimits

0xc4f5,	// (0x0001997c) list_single_heading_pane_fp_t1

0xc507,	// (0x0001998e) list_single_heading_pane_fp_t2_ParamLimits

0xc507,	// (0x0001998e) list_single_heading_pane_fp_t2

0x0001,

0xfb97,	// (0x0001d01e) list_single_heading_pane_fp_t_ParamLimits

0xfb97,	// (0x0001d01e) list_single_heading_pane_fp_t

0x86f3,	// (0x00015b7a) aid_size_cell_fast

0x3976,	// (0x00010dfd) soft_indicator_pane_cp1_t1

0x86fc,	// (0x00015b83) cell_app_pane_cp2_ParamLimits

0x86fc,	// (0x00015b83) cell_app_pane_cp2

0x6afb,	// (0x00013f82) fep_hwr_candidate_drop_down_list_pane

0x6cd3,	// (0x0001415a) fep_hwr_candidate_pane_g3_ParamLimits

0x6cd3,	// (0x0001415a) fep_hwr_candidate_pane_g3

0x2b63,	// (0x0000ffea) fep_hwr_candidate_pane_g4_ParamLimits

0x2b63,	// (0x0000ffea) fep_hwr_candidate_pane_g4

0x0002,

0xfb06,	// (0x0001cf8d) fep_hwr_candidate_pane_g_ParamLimits

0xfb06,	// (0x0001cf8d) fep_hwr_candidate_pane_g

0xbe42,	// (0x000192c9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbe42,	// (0x000192c9) fep_vkb_candidate_drop_down_list_pane

0xc245,	// (0x000196cc) fep_vkb_candidate_pane_g3

0xc24d,	// (0x000196d4) fep_vkb_candidate_pane_g4

0x0002,

0xfb33,	// (0x0001cfba) fep_vkb_candidate_pane_g

0x6d3e,	// (0x000141c5) cell_hwr_candidate_pane_g1_ParamLimits

0x6d4c,	// (0x000141d3) cell_hwr_candidate_pane_g3_ParamLimits

0x6d4c,	// (0x000141d3) cell_hwr_candidate_pane_g3

0xdf3b,	// (0x0001b3c2) cell_hwr_candidate_pane_g4_ParamLimits

0xdf3b,	// (0x0001b3c2) cell_hwr_candidate_pane_g4

0x0002,

0xfb52,	// (0x0001cfd9) cell_hwr_candidate_pane_g_ParamLimits

0xfb52,	// (0x0001cfd9) cell_hwr_candidate_pane_g

0xc264,	// (0x000196eb) cell_vkb_candidate_pane_g3_ParamLimits

0xc264,	// (0x000196eb) cell_vkb_candidate_pane_g3

0xc27f,	// (0x00019706) cell_vkb_candidate_pane_g4_ParamLimits

0xc27f,	// (0x00019706) cell_vkb_candidate_pane_g4

0xc51d,	// (0x000199a4) cell_app_pane_cp2_g1_ParamLimits

0xc51d,	// (0x000199a4) cell_app_pane_cp2_g1

0xc53b,	// (0x000199c2) cell_app_pane_cp2_g2_ParamLimits

0xc53b,	// (0x000199c2) cell_app_pane_cp2_g2

0x0001,

0xfb9c,	// (0x0001d023) cell_app_pane_cp2_g_ParamLimits

0xfb9c,	// (0x0001d023) cell_app_pane_cp2_g

0xc547,	// (0x000199ce) cell_app_pane_cp2_t1_ParamLimits

0xc547,	// (0x000199ce) cell_app_pane_cp2_t1

0x3c71,	// (0x000110f8) grid_highlight_pane_cp1_ParamLimits

0x3c71,	// (0x000110f8) grid_highlight_pane_cp1

0x6d8b,	// (0x00014212) cell_hwr_candidate_pane_cp1_ParamLimits

0x6d8b,	// (0x00014212) cell_hwr_candidate_pane_cp1

0x6d3e,	// (0x000141c5) fep_hwr_candidate_drop_down_list_pane_g1

0x6daa,	// (0x00014231) fep_hwr_candidate_drop_down_list_pane_g2

0x6db7,	// (0x0001423e) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba1,	// (0x0001d028) fep_hwr_candidate_drop_down_list_pane_g

0x6dc4,	// (0x0001424b) fep_hwr_candidate_drop_down_list_scroll_pane

0x6dcd,	// (0x00014254) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6dcd,	// (0x00014254) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6dda,	// (0x00014261) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6dda,	// (0x00014261) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6de7,	// (0x0001426e) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6de7,	// (0x0001426e) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6df4,	// (0x0001427b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6df4,	// (0x0001427b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6e0f,	// (0x00014296) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6e0f,	// (0x00014296) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6e2a,	// (0x000142b1) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6e2a,	// (0x000142b1) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6e45,	// (0x000142cc) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6e45,	// (0x000142cc) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6e60,	// (0x000142e7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6e60,	// (0x000142e7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba8,	// (0x0001d02f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba8,	// (0x0001d02f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc559,	// (0x000199e0) cell_vkb_candidate_pane_cp1_ParamLimits

0xc559,	// (0x000199e0) cell_vkb_candidate_pane_cp1

0xbf4d,	// (0x000193d4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbf4d,	// (0x000193d4) fep_vkb_candidate_drop_down_list_pane_g1

0xc579,	// (0x00019a00) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc579,	// (0x00019a00) fep_vkb_candidate_drop_down_list_pane_g2

0xc586,	// (0x00019a0d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc586,	// (0x00019a0d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb9,	// (0x0001d040) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb9,	// (0x0001d040) fep_vkb_candidate_drop_down_list_pane_g

0xc593,	// (0x00019a1a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc593,	// (0x00019a1a) fep_vkb_candidate_drop_down_list_scroll_pane

0xc5a0,	// (0x00019a27) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc5a0,	// (0x00019a27) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc5ad,	// (0x00019a34) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc5ad,	// (0x00019a34) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc5b9,	// (0x00019a40) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc5b9,	// (0x00019a40) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc5c5,	// (0x00019a4c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5c5,	// (0x00019a4c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5e6,	// (0x00019a6d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5e6,	// (0x00019a6d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc607,	// (0x00019a8e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc607,	// (0x00019a8e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc628,	// (0x00019aaf) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc628,	// (0x00019aaf) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc649,	// (0x00019ad0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc649,	// (0x00019ad0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc0,	// (0x0001d047) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc0,	// (0x0001d047) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7b73,	// (0x00014ffa) title_pane_g1_ParamLimits

0x7b80,	// (0x00015007) title_pane_g2_ParamLimits

0xf529,	// (0x0001c9b0) title_pane_g_ParamLimits

0x42de,	// (0x00011765) aid_call2_pane

0x42d6,	// (0x0001175d) aid_call_pane

0x42e6,	// (0x0001176d) popup_clock_analogue_window_g1

0x42e6,	// (0x0001176d) popup_clock_analogue_window_g2

0x5ba4,	// (0x0001302b) popup_clock_analogue_window_g3

0x5bad,	// (0x00013034) popup_clock_analogue_window_g4

0x365a,	// (0x00010ae1) popup_clock_analogue_window_g5

0x0004,

0xf6c4,	// (0x0001cb4b) popup_clock_analogue_window_g

0x5bb5,	// (0x0001303c) popup_clock_analogue_window_t1

0x5bc3,	// (0x0001304a) clock_digital_number_pane_ParamLimits

0x5bc3,	// (0x0001304a) clock_digital_number_pane

0x5bcf,	// (0x00013056) clock_digital_number_pane_cp02_ParamLimits

0x5bcf,	// (0x00013056) clock_digital_number_pane_cp02

0x5bdb,	// (0x00013062) clock_digital_number_pane_cp03_ParamLimits

0x5bdb,	// (0x00013062) clock_digital_number_pane_cp03

0x5be7,	// (0x0001306e) clock_digital_number_pane_cp04_ParamLimits

0x5be7,	// (0x0001306e) clock_digital_number_pane_cp04

0x5bf3,	// (0x0001307a) clock_digital_separator_pane_ParamLimits

0x5bf3,	// (0x0001307a) clock_digital_separator_pane

0x5bff,	// (0x00013086) popup_clock_digital_window_t1_ParamLimits

0x5bff,	// (0x00013086) popup_clock_digital_window_t1

0x365a,	// (0x00010ae1) clock_digital_number_pane_g1

0x365a,	// (0x00010ae1) clock_digital_number_pane_g2

0x0001,

0xf6cf,	// (0x0001cb56) clock_digital_number_pane_g

0x365a,	// (0x00010ae1) clock_digital_separator_pane_g1

0x365a,	// (0x00010ae1) clock_digital_separator_pane_g2

0x0001,

0xf6cf,	// (0x0001cb56) clock_digital_separator_pane_g

0x8c4e,	// (0x000160d5) aid_fill_nsta_ParamLimits

0x8d9a,	// (0x00016221) indicator_nsta_pane_ParamLimits

0x8f13,	// (0x0001639a) popup_clock_analogue_window

0x8f13,	// (0x0001639a) popup_clock_digital_window

0xb65d,	// (0x00018ae4) grid_indicator_nsta_pane_ParamLimits

0xb686,	// (0x00018b0d) clock_nsta_pane_t2

0x0001,

0xfa86,	// (0x0001cf0d) clock_nsta_pane_t

0x5b68,	// (0x00012fef) aid_size_max_handle

0x5b72,	// (0x00012ff9) aid_size_min_handle

0x4914,	// (0x00011d9b) editor_scroll_pane

0xc664,	// (0x00019aeb) ex_editor_pane

0x3e29,	// (0x000112b0) scroll_pane_cp13

0x3bc7,	// (0x0001104e) scroll_pane_cp14

0x4334,	// (0x000117bb) scroll_pane_cp36

0x8852,	// (0x00015cd9) list_single_graphic_hl_pane_cp2_ParamLimits

0x8852,	// (0x00015cd9) list_single_graphic_hl_pane_cp2

0xa8ce,	// (0x00017d55) list_single_graphic_hl_pane_ParamLimits

0xa8ce,	// (0x00017d55) list_single_graphic_hl_pane

0xc66c,	// (0x00019af3) aid_size_min_hl_cp1

0xc675,	// (0x00019afc) list_highlight_pane_cp34_ParamLimits

0xc675,	// (0x00019afc) list_highlight_pane_cp34

0xc686,	// (0x00019b0d) list_single_graphic_hl_pane_g1_ParamLimits

0xc686,	// (0x00019b0d) list_single_graphic_hl_pane_g1

0xc693,	// (0x00019b1a) list_single_graphic_hl_pane_g2_ParamLimits

0xc693,	// (0x00019b1a) list_single_graphic_hl_pane_g2

0xc693,	// (0x00019b1a) list_single_graphic_hl_pane_g3_ParamLimits

0xc693,	// (0x00019b1a) list_single_graphic_hl_pane_g3

0x472d,	// (0x00011bb4) list_single_graphic_hl_pane_g4_ParamLimits

0x472d,	// (0x00011bb4) list_single_graphic_hl_pane_g4

0xc69f,	// (0x00019b26) list_single_graphic_hl_pane_g5_ParamLimits

0xc69f,	// (0x00019b26) list_single_graphic_hl_pane_g5

0x0004,

0xfbd1,	// (0x0001d058) list_single_graphic_hl_pane_g_ParamLimits

0xfbd1,	// (0x0001d058) list_single_graphic_hl_pane_g

0xc6b3,	// (0x00019b3a) list_single_graphic_hl_pane_t1_ParamLimits

0xc6b3,	// (0x00019b3a) list_single_graphic_hl_pane_t1

0xc6c9,	// (0x00019b50) aid_size_min_hl_cp2

0xc6d2,	// (0x00019b59) list_highlight_pane_cp34_cp2_ParamLimits

0xc6d2,	// (0x00019b59) list_highlight_pane_cp34_cp2

0xc686,	// (0x00019b0d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc686,	// (0x00019b0d) list_single_graphic_hl_pane_g1_cp2

0xc6df,	// (0x00019b66) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc6df,	// (0x00019b66) list_single_graphic_hl_pane_g2_cp2

0xc6eb,	// (0x00019b72) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc6eb,	// (0x00019b72) list_single_graphic_hl_pane_g3_cp2

0x472d,	// (0x00011bb4) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x472d,	// (0x00011bb4) list_single_graphic_hl_pane_g4_cp2

0xc69f,	// (0x00019b26) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc69f,	// (0x00019b26) list_single_graphic_hl_pane_g5_cp2

0x5eaa,	// (0x00013331) control_pane_g4_ParamLimits

0x5eaa,	// (0x00013331) control_pane_g4

0x4b50,	// (0x00011fd7) bg_popup_sub_pane_cp10_ParamLimits

0xbce7,	// (0x0001916e) list_choice_list_pane_ParamLimits

0xbcf6,	// (0x0001917d) scroll_pane_cp23

0x3993,	// (0x00010e1a) bg_popup_preview_window_pane_cp02_ParamLimits

0xc2e4,	// (0x0001976b) list_preview_fixed_pane_ParamLimits

0xc2fa,	// (0x00019781) list_preview_fixed_pane_cp_ParamLimits

0xc2fa,	// (0x00019781) list_preview_fixed_pane_cp

0xc306,	// (0x0001978d) popup_preview_fixed_window_g1_ParamLimits

0xc306,	// (0x0001978d) popup_preview_fixed_window_g1

0xc312,	// (0x00019799) popup_preview_fixed_window_g2_ParamLimits

0xc312,	// (0x00019799) popup_preview_fixed_window_g2

0x0002,

0xfb59,	// (0x0001cfe0) popup_preview_fixed_window_g_ParamLimits

0xfb59,	// (0x0001cfe0) popup_preview_fixed_window_g

0x5adc,	// (0x00012f63) aid_navi_side_left_pane_ParamLimits

0x5af1,	// (0x00012f78) aid_navi_side_right_pane_ParamLimits

0x5b09,	// (0x00012f90) navi_icon_pane_stacon_ParamLimits

0x5b1d,	// (0x00012fa4) navi_navi_pane_stacon_ParamLimits

0x5b09,	// (0x00012f90) navi_text_pane_stacon_ParamLimits

0x5702,	// (0x00012b89) main_text_info_pane

0xc70f,	// (0x00019b96) listscroll_text_info_pane

0xc717,	// (0x00019b9e) list_text_info_pane_ParamLimits

0xc717,	// (0x00019b9e) list_text_info_pane

0xc726,	// (0x00019bad) scroll_pane_cp24_ParamLimits

0xc726,	// (0x00019bad) scroll_pane_cp24

0xc744,	// (0x00019bcb) list_text_info_pane_t1_ParamLimits

0xc744,	// (0x00019bcb) list_text_info_pane_t1

0x6026,	// (0x000134ad) popup_fast_swap2_window_ParamLimits

0x6026,	// (0x000134ad) popup_fast_swap2_window

0xc778,	// (0x00019bff) aid_size_cell_fast2

0x3650,	// (0x00010ad7) bg_popup_window_pane_cp17

0x96bb,	// (0x00016b42) heading_pane_cp2

0x96c3,	// (0x00016b4a) listscroll_fast2_pane

0xc782,	// (0x00019c09) grid_fast2_pane

0xc78c,	// (0x00019c13) listscroll_fast2_pane_g1

0xc794,	// (0x00019c1b) listscroll_fast2_pane_g2

0x0001,

0xfbdc,	// (0x0001d063) listscroll_fast2_pane_g

0x3e29,	// (0x000112b0) scroll_pane_cp26

0xc79e,	// (0x00019c25) cell_fast2_pane_ParamLimits

0xc79e,	// (0x00019c25) cell_fast2_pane

0xc7b3,	// (0x00019c3a) cell_fast2_pane_g1

0xc7bc,	// (0x00019c43) cell_fast2_pane_g2

0xc7c5,	// (0x00019c4c) cell_fast2_pane_g3

0x0002,

0xfbe1,	// (0x0001d068) cell_fast2_pane_g

0x3afe,	// (0x00010f85) grid_highlight_pane_cp9

0x5fee,	// (0x00013475) main_eswt_pane_ParamLimits

0x5fee,	// (0x00013475) main_eswt_pane

0xc73b,	// (0x00019bc2) list_single_text_info_pane

0xc7cd,	// (0x00019c54) eswt_ctrl_button_pane

0xc7cd,	// (0x00019c54) eswt_ctrl_canvas_pane

0xc7d5,	// (0x00019c5c) eswt_ctrl_combo_pane

0xc7cd,	// (0x00019c54) eswt_ctrl_default_pane

0xc7cd,	// (0x00019c54) eswt_ctrl_label_pane

0xc7dd,	// (0x00019c64) eswt_ctrl_wait_pane

0xc7e5,	// (0x00019c6c) eswt_shell_pane

0x3650,	// (0x00010ad7) listscroll_eswt_app_pane

0xc805,	// (0x00019c8c) popup_eswt_tasktip_window_ParamLimits

0xc805,	// (0x00019c8c) popup_eswt_tasktip_window

0x9287,	// (0x0001670e) bg_popup_window_pane_cp18

0xc816,	// (0x00019c9d) eswt_control_pane_g1_ParamLimits

0xc816,	// (0x00019c9d) eswt_control_pane_g1

0xc823,	// (0x00019caa) eswt_control_pane_g2_ParamLimits

0xc823,	// (0x00019caa) eswt_control_pane_g2

0xc830,	// (0x00019cb7) eswt_control_pane_g3_ParamLimits

0xc830,	// (0x00019cb7) eswt_control_pane_g3

0xc83d,	// (0x00019cc4) eswt_control_pane_g4_ParamLimits

0xc83d,	// (0x00019cc4) eswt_control_pane_g4

0x0003,

0xfbe8,	// (0x0001d06f) eswt_control_pane_g_ParamLimits

0xfbe8,	// (0x0001d06f) eswt_control_pane_g

0x3c71,	// (0x000110f8) bg_button_pane_ParamLimits

0x3c71,	// (0x000110f8) bg_button_pane

0x3b13,	// (0x00010f9a) common_borders_pane_copy2_ParamLimits

0x3b13,	// (0x00010f9a) common_borders_pane_copy2

0xc84a,	// (0x00019cd1) control_button_pane_g1_ParamLimits

0xc84a,	// (0x00019cd1) control_button_pane_g1

0xc856,	// (0x00019cdd) control_button_pane_g2_ParamLimits

0xc856,	// (0x00019cdd) control_button_pane_g2

0xc862,	// (0x00019ce9) control_button_pane_g3_ParamLimits

0xc862,	// (0x00019ce9) control_button_pane_g3

0x0002,

0xfbf1,	// (0x0001d078) control_button_pane_g_ParamLimits

0xfbf1,	// (0x0001d078) control_button_pane_g

0xc876,	// (0x00019cfd) control_button_pane_t1

0xc884,	// (0x00019d0b) control_button_pane_t2

0x0001,

0xfbf8,	// (0x0001d07f) control_button_pane_t

0x9167,	// (0x000165ee) bg_button_pane_g1

0x9177,	// (0x000165fe) bg_button_pane_g2

0x916f,	// (0x000165f6) bg_button_pane_g3

0x9187,	// (0x0001660e) bg_button_pane_g4

0x917f,	// (0x00016606) bg_button_pane_g5

0x918f,	// (0x00016616) bg_button_pane_g6

0x9197,	// (0x0001661e) bg_button_pane_g7

0x91a7,	// (0x0001662e) bg_button_pane_g8

0x919f,	// (0x00016626) bg_button_pane_g9

0x0008,

0xf832,	// (0x0001ccb9) bg_button_pane_g

0xbca2,	// (0x00019129) common_borders_pane_ParamLimits

0xbca2,	// (0x00019129) common_borders_pane

0xc816,	// (0x00019c9d) eswt_control_pane_g1_copy1_ParamLimits

0xc816,	// (0x00019c9d) eswt_control_pane_g1_copy1

0xc823,	// (0x00019caa) eswt_control_pane_g2_copy1_ParamLimits

0xc823,	// (0x00019caa) eswt_control_pane_g2_copy1

0xc830,	// (0x00019cb7) eswt_control_pane_g3_copy1_ParamLimits

0xc830,	// (0x00019cb7) eswt_control_pane_g3_copy1

0xc83d,	// (0x00019cc4) eswt_control_pane_g4_copy1_ParamLimits

0xc83d,	// (0x00019cc4) eswt_control_pane_g4_copy1

0xbcdd,	// (0x00019164) bg_eswt_ctrl_canvas_pane_g1

0xbca2,	// (0x00019129) common_borders_pane_cp2_ParamLimits

0xbca2,	// (0x00019129) common_borders_pane_cp2

0xbca2,	// (0x00019129) common_borders_pane_cp3_ParamLimits

0xbca2,	// (0x00019129) common_borders_pane_cp3

0xc892,	// (0x00019d19) separator_horizontal_pane

0xc89a,	// (0x00019d21) separator_vertical_pane

0xc816,	// (0x00019c9d) eswt_control_pane_g1_copy2_ParamLimits

0xc816,	// (0x00019c9d) eswt_control_pane_g1_copy2

0xc823,	// (0x00019caa) eswt_control_pane_g2_copy2_ParamLimits

0xc823,	// (0x00019caa) eswt_control_pane_g2_copy2

0xc830,	// (0x00019cb7) eswt_control_pane_g3_copy2_ParamLimits

0xc830,	// (0x00019cb7) eswt_control_pane_g3_copy2

0xc83d,	// (0x00019cc4) eswt_control_pane_g4_copy2_ParamLimits

0xc83d,	// (0x00019cc4) eswt_control_pane_g4_copy2

0x3650,	// (0x00010ad7) common_borders_pane_cp4

0xc8a3,	// (0x00019d2a) separator_horizontal_pane_g1

0xc8ac,	// (0x00019d33) separator_horizontal_pane_g2

0xc8b5,	// (0x00019d3c) separator_horizontal_pane_g3

0x0002,

0xfbfd,	// (0x0001d084) separator_horizontal_pane_g

0xc816,	// (0x00019c9d) eswt_control_pane_g1_copy3_ParamLimits

0xc816,	// (0x00019c9d) eswt_control_pane_g1_copy3

0xc823,	// (0x00019caa) eswt_control_pane_g2_copy3_ParamLimits

0xc823,	// (0x00019caa) eswt_control_pane_g2_copy3

0xc830,	// (0x00019cb7) eswt_control_pane_g3_copy3_ParamLimits

0xc830,	// (0x00019cb7) eswt_control_pane_g3_copy3

0xc83d,	// (0x00019cc4) eswt_control_pane_g4_copy3_ParamLimits

0xc83d,	// (0x00019cc4) eswt_control_pane_g4_copy3

0x3650,	// (0x00010ad7) common_borders_pane_cp5

0xc8be,	// (0x00019d45) separator_vertical_pane_g1

0xc8c7,	// (0x00019d4e) separator_vertical_pane_g2

0xc8d0,	// (0x00019d57) separator_vertical_pane_g3

0x0002,

0xfc04,	// (0x0001d08b) separator_vertical_pane_g

0xc816,	// (0x00019c9d) eswt_control_pane_g1_copy4_ParamLimits

0xc816,	// (0x00019c9d) eswt_control_pane_g1_copy4

0xc823,	// (0x00019caa) eswt_control_pane_g2_copy4_ParamLimits

0xc823,	// (0x00019caa) eswt_control_pane_g2_copy4

0xc830,	// (0x00019cb7) eswt_control_pane_g3_copy4_ParamLimits

0xc830,	// (0x00019cb7) eswt_control_pane_g3_copy4

0xc83d,	// (0x00019cc4) eswt_control_pane_g4_copy4_ParamLimits

0xc83d,	// (0x00019cc4) eswt_control_pane_g4_copy4

0xc8d9,	// (0x00019d60) eswt_ctrl_combo_button_pane

0xc8e1,	// (0x00019d68) eswt_ctrl_input_pane

0xc8e9,	// (0x00019d70) popup_choice_list_window_cp70

0xc8f1,	// (0x00019d78) eswt_ctrl_input_pane_t1

0x3650,	// (0x00010ad7) input_focus_pane_cp70

0xbca2,	// (0x00019129) bg_button_pane_cp70_ParamLimits

0xbca2,	// (0x00019129) bg_button_pane_cp70

0xc8ff,	// (0x00019d86) eswt_ctrl_combo_button_pane_g1

0xc907,	// (0x00019d8e) wait_bar_pane_cp70

0x9287,	// (0x0001670e) bg_popup_window_pane_cp70_ParamLimits

0x9287,	// (0x0001670e) bg_popup_window_pane_cp70

0xc90f,	// (0x00019d96) popup_eswt_tasktip_window_t1

0xc925,	// (0x00019dac) wait_bar_pane_cp71_ParamLimits

0xc925,	// (0x00019dac) wait_bar_pane_cp71

0xc931,	// (0x00019db8) grid_eswt_app_pane

0x41c2,	// (0x00011649) scroll_pane_cp70

0xc93a,	// (0x00019dc1) cell_eswt_app_pane_ParamLimits

0xc93a,	// (0x00019dc1) cell_eswt_app_pane

0xc96a,	// (0x00019df1) cell_eswt_app_pane_g1_ParamLimits

0xc96a,	// (0x00019df1) cell_eswt_app_pane_g1

0xc999,	// (0x00019e20) cell_eswt_app_pane_g2_ParamLimits

0xc999,	// (0x00019e20) cell_eswt_app_pane_g2

0x0001,

0xfc0b,	// (0x0001d092) cell_eswt_app_pane_g_ParamLimits

0xfc0b,	// (0x0001d092) cell_eswt_app_pane_g

0xc9bd,	// (0x00019e44) cell_eswt_app_pane_t1_ParamLimits

0xc9bd,	// (0x00019e44) cell_eswt_app_pane_t1

0xc9ef,	// (0x00019e76) grid_highlight_pane_cp70_ParamLimits

0xc9ef,	// (0x00019e76) grid_highlight_pane_cp70

0x483b,	// (0x00011cc2) set_content_pane_g1

0x8bfb,	// (0x00016082) status_small_volume_pane

0x6e7b,	// (0x00014302) status_small_volume_pane_g1

0x6e83,	// (0x0001430a) volume_small2_pane

0x6e8c,	// (0x00014313) volume_small2_pane_g1

0x6e95,	// (0x0001431c) volume_small2_pane_g2

0x6e9e,	// (0x00014325) volume_small2_pane_g3

0x6ea7,	// (0x0001432e) volume_small2_pane_g4

0x6eb0,	// (0x00014337) volume_small2_pane_g5

0x6eb9,	// (0x00014340) volume_small2_pane_g6

0x6ec2,	// (0x00014349) volume_small2_pane_g7

0x6ecb,	// (0x00014352) volume_small2_pane_g8

0x6ed4,	// (0x0001435b) volume_small2_pane_g9

0x6edd,	// (0x00014364) volume_small2_pane_g10

0x0009,

0xfc10,	// (0x0001d097) volume_small2_pane_g

0xc095,	// (0x0001951c) fep_vkb_top_text_pane_g1_ParamLimits

0xc0b0,	// (0x00019537) fep_vkb_top_text_pane_t1_ParamLimits

0xc31e,	// (0x000197a5) popup_preview_fixed_window_g3_ParamLimits

0xc31e,	// (0x000197a5) popup_preview_fixed_window_g3

0x64d5,	// (0x0001395c) popup_toolbar_trans_pane

0xa618,	// (0x00017a9f) aid_height_set_list_ParamLimits

0xa629,	// (0x00017ab0) aid_size_parent_ParamLimits

0x4b50,	// (0x00011fd7) list_highlight_pane_cp2_ParamLimits

0x483b,	// (0x00011cc2) set_content_pane_g1_ParamLimits

0xa8ed,	// (0x00017d74) list_single_image_pane_ParamLimits

0xa8ed,	// (0x00017d74) list_single_image_pane

0xc9fb,	// (0x00019e82) aid_size_cell_image_ParamLimits

0xc9fb,	// (0x00019e82) aid_size_cell_image

0xca08,	// (0x00019e8f) grid_single_image_pane_ParamLimits

0xca08,	// (0x00019e8f) grid_single_image_pane

0x3e04,	// (0x0001128b) list_single_image_pane_g1_ParamLimits

0x3e04,	// (0x0001128b) list_single_image_pane_g1

0xc34c,	// (0x000197d3) list_single_image_pane_g2_ParamLimits

0xc34c,	// (0x000197d3) list_single_image_pane_g2

0x0001,

0xfc25,	// (0x0001d0ac) list_single_image_pane_g_ParamLimits

0xfc25,	// (0x0001d0ac) list_single_image_pane_g

0xca14,	// (0x00019e9b) list_single_image_pane_t1_ParamLimits

0xca14,	// (0x00019e9b) list_single_image_pane_t1

0xca2a,	// (0x00019eb1) cell_image_list_pane_ParamLimits

0xca2a,	// (0x00019eb1) cell_image_list_pane

0xca3e,	// (0x00019ec5) cell_image_list_pane_g1

0xca47,	// (0x00019ece) cell_image_list_pane_g2

0x0001,

0xfc2a,	// (0x0001d0b1) cell_image_list_pane_g

0xca50,	// (0x00019ed7) aid_size_cell_tb_trans_pane

0x3c71,	// (0x000110f8) bg_tb_trans_pane

0xca62,	// (0x00019ee9) grid_tb_trans_pane

0x9167,	// (0x000165ee) bg_tb_trans_pane_g1

0x9177,	// (0x000165fe) bg_tb_trans_pane_g2

0x916f,	// (0x000165f6) bg_tb_trans_pane_g3

0x9187,	// (0x0001660e) bg_tb_trans_pane_g4

0x917f,	// (0x00016606) bg_tb_trans_pane_g5

0x91a7,	// (0x0001662e) bg_tb_trans_pane_g6

0x919f,	// (0x00016626) bg_tb_trans_pane_g7

0x918f,	// (0x00016616) bg_tb_trans_pane_g8

0x9197,	// (0x0001661e) bg_tb_trans_pane_g9

0x0008,

0xfc2f,	// (0x0001d0b6) bg_tb_trans_pane_g

0xca76,	// (0x00019efd) cell_toolbar_trans_pane_ParamLimits

0xca76,	// (0x00019efd) cell_toolbar_trans_pane

0xbcdd,	// (0x00019164) cell_toolbar_trans_pane_g1

0xb85b,	// (0x00018ce2) list_form2_midp_pane_t1

0xb869,	// (0x00018cf0) list_form2_midp_pane_t2

0x0001,

0xfacc,	// (0x0001cf53) list_form2_midp_pane_t

0xb877,	// (0x00018cfe) scroll_pane_cp51_ParamLimits

0xba80,	// (0x00018f07) form2_midp_wait_pane_g1

0xba89,	// (0x00018f10) form2_midp_wait_pane_g2

0xba92,	// (0x00018f19) form2_midp_wait_pane_g3

0x0002,

0xfae1,	// (0x0001cf68) form2_midp_wait_pane_g

0x384f,	// (0x00010cd6) list_highlight_pane_cp21_ParamLimits

0xbada,	// (0x00018f61) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbae9,	// (0x00018f70) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa86f,	// (0x00017cf6) list_single_2graphic_im_pane_ParamLimits

0xa86f,	// (0x00017cf6) list_single_2graphic_im_pane

0xca9c,	// (0x00019f23) list_single_2graphic_im_pane_g1_ParamLimits

0xca9c,	// (0x00019f23) list_single_2graphic_im_pane_g1

0xcaad,	// (0x00019f34) list_single_2graphic_im_pane_g2_ParamLimits

0xcaad,	// (0x00019f34) list_single_2graphic_im_pane_g2

0xcab9,	// (0x00019f40) list_single_2graphic_im_pane_g3_ParamLimits

0xcab9,	// (0x00019f40) list_single_2graphic_im_pane_g3

0x0003,

0xfc42,	// (0x0001d0c9) list_single_2graphic_im_pane_g_ParamLimits

0xfc42,	// (0x0001d0c9) list_single_2graphic_im_pane_g

0xcad9,	// (0x00019f60) list_single_2graphic_im_pane_t1_ParamLimits

0xcad9,	// (0x00019f60) list_single_2graphic_im_pane_t1

0xc32a,	// (0x000197b1) list_single_graphic_2heading_pane_fp_ParamLimits

0xc32a,	// (0x000197b1) list_single_graphic_2heading_pane_fp

0xc383,	// (0x0001980a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc383,	// (0x0001980a) list_single_graphic_2heading_pane_fp_g1

0xc340,	// (0x000197c7) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc340,	// (0x000197c7) list_single_graphic_2heading_pane_fp_g2

0x3e04,	// (0x0001128b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3e04,	// (0x0001128b) list_single_graphic_2heading_pane_fp_g3

0xc34c,	// (0x000197d3) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc34c,	// (0x000197d3) list_single_graphic_2heading_pane_fp_g4

0xc360,	// (0x000197e7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc360,	// (0x000197e7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb69,	// (0x0001cff0) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb69,	// (0x0001cff0) list_single_graphic_2heading_pane_fp_g

0xcb0a,	// (0x00019f91) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcb0a,	// (0x00019f91) list_single_graphic_2heading_pane_fp_t1

0xc3bb,	// (0x00019842) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc3bb,	// (0x00019842) list_single_graphic_2heading_pane_fp_t2

0xcb20,	// (0x00019fa7) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcb20,	// (0x00019fa7) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc4b,	// (0x0001d0d2) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc4b,	// (0x0001d0d2) list_single_graphic_2heading_pane_fp_t

0xbd69,	// (0x000191f0) fep_hwr_write_pane_g5_ParamLimits

0xbd69,	// (0x000191f0) fep_hwr_write_pane_g5

0xbd75,	// (0x000191fc) fep_hwr_write_pane_g6_ParamLimits

0xbd75,	// (0x000191fc) fep_hwr_write_pane_g6

0xc7e5,	// (0x00019c6c) eswt_shell_pane_ParamLimits

0x9287,	// (0x0001670e) bg_popup_window_pane_cp18_ParamLimits

0xa55f,	// (0x000179e6) heading_pane_cp70

0xc90f,	// (0x00019d96) popup_eswt_tasktip_window_t1_ParamLimits

0x8ca3,	// (0x0001612a) aid_touch_tab_arrow_left

0x8cb2,	// (0x00016139) aid_touch_tab_arrow_right

0x7b91,	// (0x00015018) title_pane_g3_ParamLimits

0x7b91,	// (0x00015018) title_pane_g3

0x3c08,	// (0x0001108f) set_value_pane_g1

0x64d5,	// (0x0001395c) popup_toolbar_trans_pane_ParamLimits

0xca50,	// (0x00019ed7) aid_size_cell_tb_trans_pane_ParamLimits

0x3c71,	// (0x000110f8) bg_tb_trans_pane_ParamLimits

0xca62,	// (0x00019ee9) grid_tb_trans_pane_ParamLimits

0x3993,	// (0x00010e1a) cont_note_pane_ParamLimits

0x3993,	// (0x00010e1a) cont_note_pane

0x3b13,	// (0x00010f9a) cont_snote2_single_text_pane_ParamLimits

0x3b13,	// (0x00010f9a) cont_snote2_single_text_pane

0x3b13,	// (0x00010f9a) cont_snote2_single_graphic_pane_ParamLimits

0x3b13,	// (0x00010f9a) cont_snote2_single_graphic_pane

0x98e2,	// (0x00016d69) cont_note_wait_pane_ParamLimits

0x98e2,	// (0x00016d69) cont_note_wait_pane

0x98e2,	// (0x00016d69) cont_note_image_pane_ParamLimits

0x98e2,	// (0x00016d69) cont_note_image_pane

0xcb36,	// (0x00019fbd) popup_note2_window_g1_ParamLimits

0xcb36,	// (0x00019fbd) popup_note2_window_g1

0xcb67,	// (0x00019fee) popup_note2_window_t1_ParamLimits

0xcb67,	// (0x00019fee) popup_note2_window_t1

0xcbac,	// (0x0001a033) popup_note2_window_t2_ParamLimits

0xcbac,	// (0x0001a033) popup_note2_window_t2

0xcbf1,	// (0x0001a078) popup_note2_window_t3_ParamLimits

0xcbf1,	// (0x0001a078) popup_note2_window_t3

0xcc36,	// (0x0001a0bd) popup_note2_window_t4_ParamLimits

0xcc36,	// (0x0001a0bd) popup_note2_window_t4

0x3a17,	// (0x00010e9e) popup_note2_window_t5_ParamLimits

0x3a17,	// (0x00010e9e) popup_note2_window_t5

0x0004,

0xfc57,	// (0x0001d0de) popup_note2_window_t_ParamLimits

0xfc57,	// (0x0001d0de) popup_note2_window_t

0xcc65,	// (0x0001a0ec) popup_note2_image_window_g1_ParamLimits

0xcc65,	// (0x0001a0ec) popup_note2_image_window_g1

0xcc71,	// (0x0001a0f8) popup_note2_image_window_g2_ParamLimits

0xcc71,	// (0x0001a0f8) popup_note2_image_window_g2

0x0001,

0xfc62,	// (0x0001d0e9) popup_note2_image_window_g_ParamLimits

0xfc62,	// (0x0001d0e9) popup_note2_image_window_g

0xcc83,	// (0x0001a10a) popup_note2_image_window_t1_ParamLimits

0xcc83,	// (0x0001a10a) popup_note2_image_window_t1

0xcc9b,	// (0x0001a122) popup_note2_image_window_t2_ParamLimits

0xcc9b,	// (0x0001a122) popup_note2_image_window_t2

0xccb3,	// (0x0001a13a) popup_note2_image_window_t3_ParamLimits

0xccb3,	// (0x0001a13a) popup_note2_image_window_t3

0x0002,

0xfc67,	// (0x0001d0ee) popup_note2_image_window_t_ParamLimits

0xfc67,	// (0x0001d0ee) popup_note2_image_window_t

0x98f0,	// (0x00016d77) popup_note2_wait_window_g1_ParamLimits

0x98f0,	// (0x00016d77) popup_note2_wait_window_g1

0x98fc,	// (0x00016d83) popup_note2_wait_window_g2_ParamLimits

0x98fc,	// (0x00016d83) popup_note2_wait_window_g2

0x9908,	// (0x00016d8f) popup_note2_wait_window_g3_ParamLimits

0x9908,	// (0x00016d8f) popup_note2_wait_window_g3

0x0002,

0xf814,	// (0x0001cc9b) popup_note2_wait_window_g_ParamLimits

0xf814,	// (0x0001cc9b) popup_note2_wait_window_g

0xcccf,	// (0x0001a156) popup_note2_wait_window_t1_ParamLimits

0xcccf,	// (0x0001a156) popup_note2_wait_window_t1

0xcced,	// (0x0001a174) popup_note2_wait_window_t2_ParamLimits

0xcced,	// (0x0001a174) popup_note2_wait_window_t2

0xcd0b,	// (0x0001a192) popup_note2_wait_window_t3_ParamLimits

0xcd0b,	// (0x0001a192) popup_note2_wait_window_t3

0xcd1d,	// (0x0001a1a4) popup_note2_wait_window_t4_ParamLimits

0xcd1d,	// (0x0001a1a4) popup_note2_wait_window_t4

0x0003,

0xfc6e,	// (0x0001d0f5) popup_note2_wait_window_t_ParamLimits

0xfc6e,	// (0x0001d0f5) popup_note2_wait_window_t

0xcd2f,	// (0x0001a1b6) wait_bar2_pane_ParamLimits

0xcd2f,	// (0x0001a1b6) wait_bar2_pane

0xcd47,	// (0x0001a1ce) popup_snote2_single_text_window_g1_ParamLimits

0xcd47,	// (0x0001a1ce) popup_snote2_single_text_window_g1

0xcd6f,	// (0x0001a1f6) popup_snote2_single_text_window_t1_ParamLimits

0xcd6f,	// (0x0001a1f6) popup_snote2_single_text_window_t1

0xcdbb,	// (0x0001a242) popup_snote2_single_text_window_t2_ParamLimits

0xcdbb,	// (0x0001a242) popup_snote2_single_text_window_t2

0xce07,	// (0x0001a28e) popup_snote2_single_text_window_t3_ParamLimits

0xce07,	// (0x0001a28e) popup_snote2_single_text_window_t3

0xce48,	// (0x0001a2cf) popup_snote2_single_text_window_t4_ParamLimits

0xce48,	// (0x0001a2cf) popup_snote2_single_text_window_t4

0xce7e,	// (0x0001a305) popup_snote2_single_text_window_t5_ParamLimits

0xce7e,	// (0x0001a305) popup_snote2_single_text_window_t5

0x0004,

0xfc77,	// (0x0001d0fe) popup_snote2_single_text_window_t_ParamLimits

0xfc77,	// (0x0001d0fe) popup_snote2_single_text_window_t

0xcea9,	// (0x0001a330) popup_snote2_single_graphic_window_g1_ParamLimits

0xcea9,	// (0x0001a330) popup_snote2_single_graphic_window_g1

0xced1,	// (0x0001a358) popup_snote2_single_graphic_window_g2_ParamLimits

0xced1,	// (0x0001a358) popup_snote2_single_graphic_window_g2

0x0001,

0xfc82,	// (0x0001d109) popup_snote2_single_graphic_window_g_ParamLimits

0xfc82,	// (0x0001d109) popup_snote2_single_graphic_window_g

0xcef9,	// (0x0001a380) popup_snote2_single_graphic_window_t1_ParamLimits

0xcef9,	// (0x0001a380) popup_snote2_single_graphic_window_t1

0xcf45,	// (0x0001a3cc) popup_snote2_single_graphic_window_t2_ParamLimits

0xcf45,	// (0x0001a3cc) popup_snote2_single_graphic_window_t2

0xce07,	// (0x0001a28e) popup_snote2_single_graphic_window_t3_ParamLimits

0xce07,	// (0x0001a28e) popup_snote2_single_graphic_window_t3

0xce48,	// (0x0001a2cf) popup_snote2_single_graphic_window_t4_ParamLimits

0xce48,	// (0x0001a2cf) popup_snote2_single_graphic_window_t4

0xce7e,	// (0x0001a305) popup_snote2_single_graphic_window_t5_ParamLimits

0xce7e,	// (0x0001a305) popup_snote2_single_graphic_window_t5

0x0004,

0xfc87,	// (0x0001d10e) popup_snote2_single_graphic_window_t_ParamLimits

0xfc87,	// (0x0001d10e) popup_snote2_single_graphic_window_t

0xb734,	// (0x00018bbb) clock_nsta_pane_cp2_t1

0xb734,	// (0x00018bbb) clock_nsta_pane_cp2_t2

0x0001,

0xfaa2,	// (0x0001cf29) clock_nsta_pane_cp2_t

0x3c90,	// (0x00011117) form_field_data_wide_pane_g1_ParamLimits

0x3c9c,	// (0x00011123) form_field_data_wide_pane_g2_ParamLimits

0x3c9c,	// (0x00011123) form_field_data_wide_pane_g2

0x3ca8,	// (0x0001112f) form_field_data_wide_pane_g3_ParamLimits

0x3ca8,	// (0x0001112f) form_field_data_wide_pane_g3

0x0002,

0xf647,	// (0x0001cace) form_field_data_wide_pane_g_ParamLimits

0xf647,	// (0x0001cace) form_field_data_wide_pane_g

0xb610,	// (0x00018a97) grid_touch_3_pane_ParamLimits

0xb610,	// (0x00018a97) grid_touch_3_pane

0xcf91,	// (0x0001a418) cell_touch_3_pane_ParamLimits

0xcf91,	// (0x0001a418) cell_touch_3_pane

0xbcdd,	// (0x00019164) cell_touch_3_pane_g1

0xbcdd,	// (0x00019164) cell_touch_3_pane_g2

0x0001,

0xfb27,	// (0x0001cfae) cell_touch_3_pane_g

0x3a49,	// (0x00010ed0) cont_query_data_pane

0x3a51,	// (0x00010ed8) cont_query_data_pane_cp1

0xcfbf,	// (0x0001a446) button_value_adjust_pane_cp7

0xcfc7,	// (0x0001a44e) query_popup_pane_cp3

0x43d1,	// (0x00011858) bg_popup_sub_pane_cp22_ParamLimits

0x5c1e,	// (0x000130a5) navi_navi_volume_pane_cp2

0x5c36,	// (0x000130bd) popup_side_volume_key_window_g2

0x5c42,	// (0x000130c9) popup_side_volume_key_window_g3

0x0002,

0xf6dd,	// (0x0001cb64) popup_side_volume_key_window_g

0x5c5c,	// (0x000130e3) popup_side_volume_key_window_t2

0x0001,

0xf6e4,	// (0x0001cb6b) popup_side_volume_key_window_t

0x8a1f,	// (0x00015ea6) popup_side_volume_key_window_ParamLimits

0x8268,	// (0x000156ef) list_double_graphic_pane_g4_ParamLimits

0x8268,	// (0x000156ef) list_double_graphic_pane_g4

0xa8ae,	// (0x00017d35) list_single_2heading_msg_pane_ParamLimits

0xa8ae,	// (0x00017d35) list_single_2heading_msg_pane

0xcff6,	// (0x0001a47d) list_single_2heading_msg_pane_g1_ParamLimits

0xcff6,	// (0x0001a47d) list_single_2heading_msg_pane_g1

0x80d1,	// (0x00015558) list_single_2heading_msg_pane_g2_ParamLimits

0x80d1,	// (0x00015558) list_single_2heading_msg_pane_g2

0xd002,	// (0x0001a489) list_single_2heading_msg_pane_g3_ParamLimits

0xd002,	// (0x0001a489) list_single_2heading_msg_pane_g3

0xd00e,	// (0x0001a495) list_single_2heading_msg_pane_g4_ParamLimits

0xd00e,	// (0x0001a495) list_single_2heading_msg_pane_g4

0x0003,

0xfc92,	// (0x0001d119) list_single_2heading_msg_pane_g_ParamLimits

0xfc92,	// (0x0001d119) list_single_2heading_msg_pane_g

0xd026,	// (0x0001a4ad) list_single_2heading_msg_pane_t1_ParamLimits

0xd026,	// (0x0001a4ad) list_single_2heading_msg_pane_t1

0xd04e,	// (0x0001a4d5) list_single_2heading_msg_pane_t2_ParamLimits

0xd04e,	// (0x0001a4d5) list_single_2heading_msg_pane_t2

0xd07d,	// (0x0001a504) list_single_2heading_msg_pane_t3_ParamLimits

0xd07d,	// (0x0001a504) list_single_2heading_msg_pane_t3

0xd0b6,	// (0x0001a53d) list_single_2heading_msg_pane_t4_ParamLimits

0xd0b6,	// (0x0001a53d) list_single_2heading_msg_pane_t4

0x0003,

0xfc9b,	// (0x0001d122) list_single_2heading_msg_pane_t_ParamLimits

0xfc9b,	// (0x0001d122) list_single_2heading_msg_pane_t

0x37fd,	// (0x00010c84) title_pane_g4_ParamLimits

0x37fd,	// (0x00010c84) title_pane_g4

0x5a2d,	// (0x00012eb4) title_pane_stacon_g3_ParamLimits

0x5a2d,	// (0x00012eb4) title_pane_stacon_g3

0xcacd,	// (0x00019f54) list_single_2graphic_im_pane_g4_ParamLimits

0xcacd,	// (0x00019f54) list_single_2graphic_im_pane_g4

0xa329,	// (0x000177b0) popup_side_volume_key_window_cp

0xac36,	// (0x000180bd) main_idle_act2_pane_t1

0x6631,	// (0x00013ab8) toolbar_button_pane_g10

0x80bb,	// (0x00015542) popup_toolbar_window_cp1

0xb725,	// (0x00018bac) clock_nsta_pane_cp_t1

0xb725,	// (0x00018bac) clock_nsta_pane_cp_t2

0x0001,

0xfa9d,	// (0x0001cf24) clock_nsta_pane_cp_t

0x5c1e,	// (0x000130a5) navi_navi_volume_pane_cp2_ParamLimits

0x5c2a,	// (0x000130b1) popup_side_volume_key_window_g1_ParamLimits

0x5c36,	// (0x000130bd) popup_side_volume_key_window_g2_ParamLimits

0x5c42,	// (0x000130c9) popup_side_volume_key_window_g3_ParamLimits

0xf6dd,	// (0x0001cb64) popup_side_volume_key_window_g_ParamLimits

0x6ae7,	// (0x00013f6e) fep_hwr_aid_pane

0x6b8e,	// (0x00014015) bg_fep_hwr_top_pane_g4_ParamLimits

0xbd39,	// (0x000191c0) fep_hwr_top_pane_g1_ParamLimits

0xbd4b,	// (0x000191d2) fep_hwr_top_pane_g2_ParamLimits

0x6bae,	// (0x00014035) fep_hwr_top_pane_g3_ParamLimits

0xfaf2,	// (0x0001cf79) fep_hwr_top_pane_g_ParamLimits

0x6bc3,	// (0x0001404a) fep_hwr_top_text_pane_ParamLimits

0xa0ec,	// (0x00017573) aid_touch_tab_arrow_arrow_2

0xa0f5,	// (0x0001757c) aid_touch_tab_arrow_left_2

0x6afb,	// (0x00013f82) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6b32,	// (0x00013fb9) fep_hwr_prediction_pane

0xbea4,	// (0x0001932b) fep_vkb_prediction_pane

0xbfa1,	// (0x00019428) fep_vkb_side_pane_g3_ParamLimits

0xbfa1,	// (0x00019428) fep_vkb_side_pane_g3

0x6d3e,	// (0x000141c5) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6daa,	// (0x00014231) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6db7,	// (0x0001423e) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba1,	// (0x0001d028) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6ee6,	// (0x0001436d) fep_hwr_prediction_pane_g1

0x6ef0,	// (0x00014377) fep_hwr_prediction_pane_g2

0x6ef8,	// (0x0001437f) fep_hwr_prediction_pane_g3

0x6f00,	// (0x00014387) fep_hwr_prediction_pane_g4

0x0003,

0xfca4,	// (0x0001d12b) fep_hwr_prediction_pane_g

0xd0db,	// (0x0001a562) fep_vkb_prediction_pane_g1

0xd0e5,	// (0x0001a56c) fep_vkb_prediction_pane_g2

0xd0ed,	// (0x0001a574) fep_vkb_prediction_pane_g3

0xd0f5,	// (0x0001a57c) fep_vkb_prediction_pane_g4

0x0003,

0xfcad,	// (0x0001d134) fep_vkb_prediction_pane_g

0x691f,	// (0x00013da6) slider_set_pane_g3

0x6933,	// (0x00013dba) slider_set_pane_g4

0x694b,	// (0x00013dd2) slider_set_pane_g5

0x691f,	// (0x00013da6) slider_set_pane_g6

0x6961,	// (0x00013de8) slider_set_pane_g7

0xa78a,	// (0x00017c11) slider_form_pane_g3

0xa793,	// (0x00017c1a) slider_form_pane_g4

0xa79b,	// (0x00017c22) slider_form_pane_g5

0xa78a,	// (0x00017c11) slider_form_pane_g6

0xa7a3,	// (0x00017c2a) slider_form_pane_g7

0xaf1a,	// (0x000183a1) slider_set_pane_vc_g3

0xaf23,	// (0x000183aa) slider_set_pane_vc_g4

0xaf2c,	// (0x000183b3) slider_set_pane_vc_g5

0xaf1a,	// (0x000183a1) slider_set_pane_vc_g6

0xaf35,	// (0x000183bc) slider_set_pane_vc_g7

0xb3e3,	// (0x0001886a) slider_form_pane_vc_g1

0xb3ec,	// (0x00018873) slider_form_pane_vc_g2

0xb3f5,	// (0x0001887c) slider_form_pane_vc_g3

0xb3e3,	// (0x0001886a) slider_form_pane_vc_g4

0xb3fe,	// (0x00018885) slider_form_pane_vc_g5

0x0004,

0xfa6f,	// (0x0001cef6) slider_form_pane_vc_g

0x5702,	// (0x00012b89) main_idle_act3_pane

0xd0fd,	// (0x0001a584) ai3_links_pane

0xd106,	// (0x0001a58d) popup_ai3_data_window_ParamLimits

0xd106,	// (0x0001a58d) popup_ai3_data_window

0x3650,	// (0x00010ad7) grid_ai3_links_pane

0xd11e,	// (0x0001a5a5) cell_ai3_links_pane_ParamLimits

0xd11e,	// (0x0001a5a5) cell_ai3_links_pane

0xd136,	// (0x0001a5bd) bg_popup_sub_pane_cp11

0xd143,	// (0x0001a5ca) cell_ai3_links_pane_g1

0x3650,	// (0x00010ad7) bg_popup_sub_pane_cp12

0xd168,	// (0x0001a5ef) heading_ai3_data_pane

0xd170,	// (0x0001a5f7) list_ai3_gene_pane

0xd17c,	// (0x0001a603) popup_ai3_data_window_g1

0xd184,	// (0x0001a60b) heading_ai3_data_pane_g1

0xd18c,	// (0x0001a613) heading_ai3_data_pane_t1

0xd19a,	// (0x0001a621) list_double_ai3_gene_pane_ParamLimits

0xd19a,	// (0x0001a621) list_double_ai3_gene_pane

0xd1a7,	// (0x0001a62e) list_single_ai3_gene_pane_ParamLimits

0xd1a7,	// (0x0001a62e) list_single_ai3_gene_pane

0xbca2,	// (0x00019129) list_highlight_pane_cp7_ParamLimits

0xbca2,	// (0x00019129) list_highlight_pane_cp7

0xd1b4,	// (0x0001a63b) list_single_a13_gene_pane_t1_ParamLimits

0xd1b4,	// (0x0001a63b) list_single_a13_gene_pane_t1

0xd1cb,	// (0x0001a652) list_single_ai3_gene_pane_g1

0xd1d4,	// (0x0001a65b) list_single_ai3_gene_pane_g2

0x0001,

0xfcb6,	// (0x0001d13d) list_single_ai3_gene_pane_g

0xd1dc,	// (0x0001a663) list_double_ai3_gene_pane_g1_ParamLimits

0xd1dc,	// (0x0001a663) list_double_ai3_gene_pane_g1

0xd1e8,	// (0x0001a66f) list_double_ai3_gene_pane_t1_ParamLimits

0xd1e8,	// (0x0001a66f) list_double_ai3_gene_pane_t1

0xd204,	// (0x0001a68b) list_double_ai3_gene_pane_t2_ParamLimits

0xd204,	// (0x0001a68b) list_double_ai3_gene_pane_t2

0xd219,	// (0x0001a6a0) list_double_ai3_gene_pane_t3_ParamLimits

0xd219,	// (0x0001a6a0) list_double_ai3_gene_pane_t3

0x0002,

0xfcbb,	// (0x0001d142) list_double_ai3_gene_pane_t_ParamLimits

0xfcbb,	// (0x0001d142) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcfd8,	// (0x0001a45f) aid_size_min_col_2

0xcfe2,	// (0x0001a469) aid_size_min_msg_ParamLimits

0xcfe2,	// (0x0001a469) aid_size_min_msg

0xc0a1,	// (0x00019528) fep_vkb_top_text_pane_g2_ParamLimits

0xc0a1,	// (0x00019528) fep_vkb_top_text_pane_g2

0x0001,

0xfb22,	// (0x0001cfa9) fep_vkb_top_text_pane_g_ParamLimits

0xfb22,	// (0x0001cfa9) fep_vkb_top_text_pane_g

0x5702,	// (0x00012b89) main_hc_apps_shell_pane

0xd236,	// (0x0001a6bd) grid_hc_apps_pane_ParamLimits

0xd236,	// (0x0001a6bd) grid_hc_apps_pane

0xd248,	// (0x0001a6cf) list_hc_apps_pane

0xd250,	// (0x0001a6d7) scroll_pane_cp37_ParamLimits

0xd250,	// (0x0001a6d7) scroll_pane_cp37

0xd25c,	// (0x0001a6e3) cell_hc_apps_pane_ParamLimits

0xd25c,	// (0x0001a6e3) cell_hc_apps_pane

0xd30a,	// (0x0001a791) cell_hc_apps_pane_g1_ParamLimits

0xd30a,	// (0x0001a791) cell_hc_apps_pane_g1

0xd33a,	// (0x0001a7c1) cell_hc_apps_pane_g2_ParamLimits

0xd33a,	// (0x0001a7c1) cell_hc_apps_pane_g2

0xd356,	// (0x0001a7dd) cell_hc_apps_pane_g3_ParamLimits

0xd356,	// (0x0001a7dd) cell_hc_apps_pane_g3

0x0002,

0xfcc2,	// (0x0001d149) cell_hc_apps_pane_g_ParamLimits

0xfcc2,	// (0x0001d149) cell_hc_apps_pane_g

0xd378,	// (0x0001a7ff) cell_hc_apps_pane_t1_ParamLimits

0xd378,	// (0x0001a7ff) cell_hc_apps_pane_t1

0x3993,	// (0x00010e1a) grid_highlight_pane_cp10_ParamLimits

0x3993,	// (0x00010e1a) grid_highlight_pane_cp10

0xd3b8,	// (0x0001a83f) list_single_hc_apps_pane_ParamLimits

0xd3b8,	// (0x0001a83f) list_single_hc_apps_pane

0xd41b,	// (0x0001a8a2) list_single_hc_apps_pane_g1

0xd434,	// (0x0001a8bb) list_single_hc_apps_pane_g2

0x0001,

0xfcc9,	// (0x0001d150) list_single_hc_apps_pane_g

0xd44d,	// (0x0001a8d4) list_single_hc_apps_pane_g2_copy1

0xd469,	// (0x0001a8f0) list_single_hc_apps_pane_t1

0x384f,	// (0x00010cd6) bg_set_opt_pane_cp_ParamLimits

0x5955,	// (0x00012ddc) setting_slider_pane_t1_ParamLimits

0x596e,	// (0x00012df5) setting_slider_pane_t2_ParamLimits

0x5988,	// (0x00012e0f) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0001c9c0) setting_slider_pane_t_ParamLimits

0x59a0,	// (0x00012e27) slider_set_pane_ParamLimits

0x5ebe,	// (0x00013345) control_pane_g5_ParamLimits

0x5ebe,	// (0x00013345) control_pane_g5

0xa5dd,	// (0x00017a64) slider_set_pane_g1_ParamLimits

0x6913,	// (0x00013d9a) slider_set_pane_g2_ParamLimits

0x691f,	// (0x00013da6) slider_set_pane_g3_ParamLimits

0x6933,	// (0x00013dba) slider_set_pane_g4_ParamLimits

0x694b,	// (0x00013dd2) slider_set_pane_g5_ParamLimits

0x691f,	// (0x00013da6) slider_set_pane_g6_ParamLimits

0x6961,	// (0x00013de8) slider_set_pane_g7_ParamLimits

0xf930,	// (0x0001cdb7) slider_set_pane_g_ParamLimits

0x47e6,	// (0x00011c6d) navi_icon_text_pane_ParamLimits

0x8c64,	// (0x000160eb) aid_fill_nsta_2_ParamLimits

0x8ca3,	// (0x0001612a) aid_touch_tab_arrow_left_ParamLimits

0x8cb2,	// (0x00016139) aid_touch_tab_arrow_right_ParamLimits

0x8d1f,	// (0x000161a6) clock_nsta_pane_ParamLimits

0xa0ce,	// (0x00017555) navi_icon_pane_g1_ParamLimits

0xa0da,	// (0x00017561) navi_text_pane_t1_ParamLimits

0xb835,	// (0x00018cbc) navi_icon_text_pane_g1_ParamLimits

0xb841,	// (0x00018cc8) navi_icon_text_pane_t1_ParamLimits

0xd41b,	// (0x0001a8a2) list_single_hc_apps_pane_g1_ParamLimits

0xd434,	// (0x0001a8bb) list_single_hc_apps_pane_g2_ParamLimits

0xfcc9,	// (0x0001d150) list_single_hc_apps_pane_g_ParamLimits

0xd44d,	// (0x0001a8d4) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd469,	// (0x0001a8f0) list_single_hc_apps_pane_t1_ParamLimits

0x585f,	// (0x00012ce6) popup_toolbar2_fixed_window_ParamLimits

0x585f,	// (0x00012ce6) popup_toolbar2_fixed_window

0x64cb,	// (0x00013952) popup_toolbar2_float_window

0x3650,	// (0x00010ad7) bg_popup_sub_pane_cp27

0xd497,	// (0x0001a91e) grid_toolbar2_float_pane

0x3650,	// (0x00010ad7) bg_popup_sub_pane_cp26

0xd497,	// (0x0001a91e) grid_toolbar2_fixed_pane

0xd49f,	// (0x0001a926) cell_toolbar2_fixed_pane_ParamLimits

0xd49f,	// (0x0001a926) cell_toolbar2_fixed_pane

0xd4af,	// (0x0001a936) cell_toolbar2_fixed_pane_g1

0x639d,	// (0x00013824) toolbar2_fixed_button_pane

0x9167,	// (0x000165ee) toolbar2_fixed_button_pane_g1

0x9177,	// (0x000165fe) toolbar2_fixed_button_pane_g2

0x916f,	// (0x000165f6) toolbar2_fixed_button_pane_g3

0x9187,	// (0x0001660e) toolbar2_fixed_button_pane_g4

0x917f,	// (0x00016606) toolbar2_fixed_button_pane_g5

0x918f,	// (0x00016616) toolbar2_fixed_button_pane_g6

0x9197,	// (0x0001661e) toolbar2_fixed_button_pane_g7

0x91a7,	// (0x0001662e) toolbar2_fixed_button_pane_g8

0x919f,	// (0x00016626) toolbar2_fixed_button_pane_g9

0x0008,

0xf832,	// (0x0001ccb9) toolbar2_fixed_button_pane_g

0xd4b8,	// (0x0001a93f) cell_toolbar2_float_pane_ParamLimits

0xd4b8,	// (0x0001a93f) cell_toolbar2_float_pane

0xd4c9,	// (0x0001a950) cell_toolbar2_float_pane_g1

0x639d,	// (0x00013824) toolbar2_fixed_button_pane_cp

0xbe0b,	// (0x00019292) fep_vkb_accented_list_pane_ParamLimits

0xbe0b,	// (0x00019292) fep_vkb_accented_list_pane

0x6d1e,	// (0x000141a5) bg_popup_fep_shadow_pane_g9

0x4914,	// (0x00011d9b) bg_popup_fep_shadow_pane_cp3

0x3e10,	// (0x00011297) list_accented_list_pane

0xd4d2,	// (0x0001a959) list_single_accented_list_pane_ParamLimits

0xd4d2,	// (0x0001a959) list_single_accented_list_pane

0x4914,	// (0x00011d9b) list_highlight_pane_cp10

0xd4e3,	// (0x0001a96a) list_single_accented_list_pane_t1

0x641b,	// (0x000138a2) popup_slider_window_ParamLimits

0x641b,	// (0x000138a2) popup_slider_window

0xcfcf,	// (0x0001a456) aid_indentation_list_msg

0xd5a1,	// (0x0001aa28) bg_popup_window_pane_cp19

0xd609,	// (0x0001aa90) popup_slider_window_g1

0xd625,	// (0x0001aaac) popup_slider_window_g2

0xd641,	// (0x0001aac8) popup_slider_window_g3

0x0005,

0xfcce,	// (0x0001d155) popup_slider_window_g

0xd6a7,	// (0x0001ab2e) popup_slider_window_t1

0xd71b,	// (0x0001aba2) small_volume_slider_vertical_pane

0xbcdd,	// (0x00019164) small_volume_slider_vertical_pane_g1

0xbcdd,	// (0x00019164) small_volume_slider_vertical_pane_g2

0xd737,	// (0x0001abbe) small_volume_slider_vertical_pane_g3

0x0002,

0xfce0,	// (0x0001d167) small_volume_slider_vertical_pane_g

0x5625,	// (0x00012aac) area_side_right_pane_ParamLimits

0x5625,	// (0x00012aac) area_side_right_pane

0x6f08,	// (0x0001438f) aid_size_side_button_ParamLimits

0x6f08,	// (0x0001438f) aid_size_side_button

0x6f1c,	// (0x000143a3) grid_sctrl_middle_pane_ParamLimits

0x6f1c,	// (0x000143a3) grid_sctrl_middle_pane

0x6f3b,	// (0x000143c2) sctrl_sk_bottom_pane

0x6f4c,	// (0x000143d3) sctrl_sk_top_pane

0x6f5e,	// (0x000143e5) aid_touch_sctrl_top

0x6f6b,	// (0x000143f2) bg_sctrl_sk_pane_ParamLimits

0x6f6b,	// (0x000143f2) bg_sctrl_sk_pane

0x6f79,	// (0x00014400) sctrl_sk_top_pane_g1

0x6f86,	// (0x0001440d) sctrl_sk_top_pane_t1

0x6f5e,	// (0x000143e5) aid_touch_sctrl_bottom

0x6f6b,	// (0x000143f2) bg_sctrl_sk_pane_cp_ParamLimits

0x6f6b,	// (0x000143f2) bg_sctrl_sk_pane_cp

0x6fa1,	// (0x00014428) sctrl_sk_bottom_pane_g1

0x6f86,	// (0x0001440d) sctrl_sk_bottom_pane_t1

0x6faa,	// (0x00014431) cell_sctrl_middle_pane_ParamLimits

0x6faa,	// (0x00014431) cell_sctrl_middle_pane

0x6fc5,	// (0x0001444c) aid_touch_sctrl_middle_ParamLimits

0x6fc5,	// (0x0001444c) aid_touch_sctrl_middle

0x6fd7,	// (0x0001445e) bg_sctrl_middle_pane_ParamLimits

0x6fd7,	// (0x0001445e) bg_sctrl_middle_pane

0x6d3e,	// (0x000141c5) cell_sctrl_middle_pane_g1_ParamLimits

0x6d3e,	// (0x000141c5) cell_sctrl_middle_pane_g1

0x6fe5,	// (0x0001446c) cell_sctrl_middle_pane_g2_ParamLimits

0x6fe5,	// (0x0001446c) cell_sctrl_middle_pane_g2

0x0001,

0xfcec,	// (0x0001d173) cell_sctrl_middle_pane_g_ParamLimits

0xfcec,	// (0x0001d173) cell_sctrl_middle_pane_g

0x9167,	// (0x000165ee) bg_sctrl_middle_pane_g1

0x916f,	// (0x000165f6) bg_sctrl_middle_pane_g2

0x9177,	// (0x000165fe) bg_sctrl_middle_pane_g3

0x917f,	// (0x00016606) bg_sctrl_middle_pane_g4

0x9187,	// (0x0001660e) bg_sctrl_middle_pane_g5

0x918f,	// (0x00016616) bg_sctrl_middle_pane_g6

0x9197,	// (0x0001661e) bg_sctrl_middle_pane_g7

0x919f,	// (0x00016626) bg_sctrl_middle_pane_g8

0x0007,

0xfcf1,	// (0x0001d178) bg_sctrl_middle_pane_g

0x91a7,	// (0x0001662e) bg_sctrl_middle_pane_g8_copy1

0x9167,	// (0x000165ee) bg_sctrl_sk_pane_g1

0x9177,	// (0x000165fe) bg_sctrl_sk_pane_g2

0x916f,	// (0x000165f6) bg_sctrl_sk_pane_g3

0x0008,

0xf832,	// (0x0001ccb9) bg_sctrl_sk_pane_g

0x3b61,	// (0x00010fe8) aid_size_touch_scroll_bar

0x9187,	// (0x0001660e) bg_sctrl_sk_pane_g4

0x917f,	// (0x00016606) bg_sctrl_sk_pane_g5

0x918f,	// (0x00016616) bg_sctrl_sk_pane_g6

0x9197,	// (0x0001661e) bg_sctrl_sk_pane_g7

0x91a7,	// (0x0001662e) bg_sctrl_sk_pane_g8

0x919f,	// (0x00016626) bg_sctrl_sk_pane_g9

0x6084,	// (0x0001350b) popup_fep_china_hwr2_fs_candidate_window

0x608e,	// (0x00013515) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x608e,	// (0x00013515) popup_fep_china_hwr2_fs_control_window

0x6d3e,	// (0x000141c5) sctrl_sk_top_pane_g2

0x0001,

0xfce7,	// (0x0001d16e) sctrl_sk_top_pane_g

0xd740,	// (0x0001abc7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd740,	// (0x0001abc7) aid_fep_china_hwr2_fs_cell

0xd752,	// (0x0001abd9) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd752,	// (0x0001abd9) bg_popup_fep_shadow_pane_cp4

0xd769,	// (0x0001abf0) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd769,	// (0x0001abf0) bg_popup_fep_shadow_pane_cp5

0xd77b,	// (0x0001ac02) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd77b,	// (0x0001ac02) popup_fep_china_hwr2_fs_control_bar_grid

0xd78b,	// (0x0001ac12) popup_fep_china_hwr2_fs_control_funtion_grid

0xd793,	// (0x0001ac1a) aid_fep_china_hwr2_fs_candi_cell

0x3650,	// (0x00010ad7) bg_popup_fep_shadow_pane_cp6

0xd79d,	// (0x0001ac24) popup_fep_china_hwr2_fs_candidate_grid

0xd7a7,	// (0x0001ac2e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7a7,	// (0x0001ac2e) cell_fep_china_hwr2_fs_funtion_grid

0xbcdd,	// (0x00019164) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7bf,	// (0x0001ac46) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7bf,	// (0x0001ac46) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7cd,	// (0x0001ac54) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7cd,	// (0x0001ac54) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd02,	// (0x0001d189) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd02,	// (0x0001d189) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7e3,	// (0x0001ac6a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7e3,	// (0x0001ac6a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd7f8,	// (0x0001ac7f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd7f8,	// (0x0001ac7f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd07,	// (0x0001d18e) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd07,	// (0x0001d18e) cell_fep_china_hwr2_fs_funtion_grid_t

0xd814,	// (0x0001ac9b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd81c,	// (0x0001aca3) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd824,	// (0x0001acab) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0c,	// (0x0001d193) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd82c,	// (0x0001acb3) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd82c,	// (0x0001acb3) cell_fep_china_hwr2_fs_candidate_grid

0xd845,	// (0x0001accc) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd84d,	// (0x0001acd4) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbcdd,	// (0x00019164) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbcdd,	// (0x00019164) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb27,	// (0x0001cfae) cell_fep_china_hwr2_fs_candidate_grid_g

0xd855,	// (0x0001acdc) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8d32,	// (0x000161b9) clock_nsta_pane_cp_24_ParamLimits

0x8d32,	// (0x000161b9) clock_nsta_pane_cp_24

0x8db0,	// (0x00016237) indicator_nsta_pane_cp_24_ParamLimits

0x8db0,	// (0x00016237) indicator_nsta_pane_cp_24

0x9f4a,	// (0x000173d1) heading_pane_g1

0x0001,

0xf897,	// (0x0001cd1e) heading_pane_g

0xaa7f,	// (0x00017f06) grid_sct_catagory_button_pane

0xaaaf,	// (0x00017f36) scroll_pane_cp5_ParamLimits

0xb883,	// (0x00018d0a) button_value_adjust_pane_cp5_ParamLimits

0xb883,	// (0x00018d0a) button_value_adjust_pane_cp5

0xb97d,	// (0x00018e04) form2_midp_time_pane_ParamLimits

0xd863,	// (0x0001acea) cell_sct_catagory_button_pane_ParamLimits

0xd863,	// (0x0001acea) cell_sct_catagory_button_pane

0xbca2,	// (0x00019129) bg_button_pane_cp01_ParamLimits

0xbca2,	// (0x00019129) bg_button_pane_cp01

0xbcdd,	// (0x00019164) cell_sct_catagory_button_pane_g1

0x645a,	// (0x000138e1) popup_tb_extension_window

0xd875,	// (0x0001acfc) aid_size_cell_ext_ParamLimits

0xd875,	// (0x0001acfc) aid_size_cell_ext

0x3993,	// (0x00010e1a) bg_tb_trans_pane_cp1_ParamLimits

0x3993,	// (0x00010e1a) bg_tb_trans_pane_cp1

0xd895,	// (0x0001ad1c) grid_tb_ext_pane_ParamLimits

0xd895,	// (0x0001ad1c) grid_tb_ext_pane

0xd8c5,	// (0x0001ad4c) cell_tb_ext_pane_ParamLimits

0xd8c5,	// (0x0001ad4c) cell_tb_ext_pane

0xd8dc,	// (0x0001ad63) cell_tb_ext_pane_g1_ParamLimits

0xd8dc,	// (0x0001ad63) cell_tb_ext_pane_g1

0xd8f9,	// (0x0001ad80) cell_tb_ext_pane_t1

0x3993,	// (0x00010e1a) list_highlight_pane_cp11_ParamLimits

0x3993,	// (0x00010e1a) list_highlight_pane_cp11

0x587e,	// (0x00012d05) popup_uni_indicator_window_ParamLimits

0x587e,	// (0x00012d05) popup_uni_indicator_window

0x3c71,	// (0x000110f8) bg_popup_sub_pane_cp14

0xd915,	// (0x0001ad9c) list_uniindi_pane

0xd921,	// (0x0001ada8) uniindi_top_pane

0x3993,	// (0x00010e1a) bg_uniindi_top_pane

0xd940,	// (0x0001adc7) uniindi_top_pane_g1

0xd956,	// (0x0001addd) uniindi_top_pane_g2

0x0003,

0xfd13,	// (0x0001d19a) uniindi_top_pane_g

0xd980,	// (0x0001ae07) uniindi_top_pane_t1

0xd9aa,	// (0x0001ae31) list_single_uniindi_pane_ParamLimits

0xd9aa,	// (0x0001ae31) list_single_uniindi_pane

0xbcdd,	// (0x00019164) bg_uniindi_top_pane_g1

0xd9bd,	// (0x0001ae44) list_single_uniindi_pane_g1

0xd9d0,	// (0x0001ae57) list_single_uniindi_pane_t1

0x5702,	// (0x00012b89) control_bg_pane

0xd9f5,	// (0x0001ae7c) bg_sctrl_sk_pane_cp1

0xd9fe,	// (0x0001ae85) bg_sctrl_sk_pane_cp2

0xda07,	// (0x0001ae8e) control_bg_pane_g1

0xda10,	// (0x0001ae97) control_bg_pane_g2

0x0001,

0xfd1c,	// (0x0001d1a3) control_bg_pane_g

0xb6c9,	// (0x00018b50) cell_indicator_nsta_pane_g1_ParamLimits

0xb6d7,	// (0x00018b5e) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8b,	// (0x0001cf12) cell_indicator_nsta_pane_g_ParamLimits

0xba05,	// (0x00018e8c) form2_midp_time_pane_t1_ParamLimits

0x5fee,	// (0x00013475) main_idle_act4_pane_ParamLimits

0x5fee,	// (0x00013475) main_idle_act4_pane

0x645a,	// (0x000138e1) popup_tb_extension_window_ParamLimits

0xd8b5,	// (0x0001ad3c) tb_ext_find_pane_ParamLimits

0xd8b5,	// (0x0001ad3c) tb_ext_find_pane

0xda19,	// (0x0001aea0) ai_gene_pane_1_cp1

0x4995,	// (0x00011e1c) ai_gene_pane_2_cp1

0xda21,	// (0x0001aea8) list_single_idle_plugin_calendar_pane

0xda2a,	// (0x0001aeb1) list_single_idle_plugin_notification_pane

0xda33,	// (0x0001aeba) list_single_idle_plugin_player_pane

0xda3c,	// (0x0001aec3) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda3c,	// (0x0001aec3) list_single_idle_plugin_shortcut_pane

0xda5e,	// (0x0001aee5) main_idle_act4_pane_t1

0xda70,	// (0x0001aef7) main_idle_act4_pane_t2

0x0001,

0xfd21,	// (0x0001d1a8) main_idle_act4_pane_t

0xda82,	// (0x0001af09) middle_sk_idle_act4_pane_ParamLimits

0xda82,	// (0x0001af09) middle_sk_idle_act4_pane

0xda98,	// (0x0001af1f) popup_clock_digital_analogue_window_cp2

0xdab2,	// (0x0001af39) shortcut_wheel_idle_act4_pane_ParamLimits

0xdab2,	// (0x0001af39) shortcut_wheel_idle_act4_pane

0xbcdd,	// (0x00019164) shortcut_wheel_idle_act4_pane_g1

0xbcdd,	// (0x00019164) shortcut_wheel_idle_act4_pane_g2

0xbcdd,	// (0x00019164) shortcut_wheel_idle_act4_pane_g3

0xbcdd,	// (0x00019164) shortcut_wheel_idle_act4_pane_g4

0xbcdd,	// (0x00019164) shortcut_wheel_idle_act4_pane_g5

0xdac6,	// (0x0001af4d) shortcut_wheel_idle_act4_pane_g6

0xdace,	// (0x0001af55) shortcut_wheel_idle_act4_pane_g7

0xdad6,	// (0x0001af5d) shortcut_wheel_idle_act4_pane_g8

0xdade,	// (0x0001af65) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd26,	// (0x0001d1ad) shortcut_wheel_idle_act4_pane_g

0xbf4d,	// (0x000193d4) middle_sk_idle_act4_pane_g1_ParamLimits

0xbf4d,	// (0x000193d4) middle_sk_idle_act4_pane_g1

0xdb42,	// (0x0001afc9) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb42,	// (0x0001afc9) middle_sk_idle_act4_pane_g2

0x0001,

0xfd49,	// (0x0001d1d0) middle_sk_idle_act4_pane_g_ParamLimits

0xfd49,	// (0x0001d1d0) middle_sk_idle_act4_pane_g

0xdb4e,	// (0x0001afd5) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb4e,	// (0x0001afd5) middle_sk_idle_act4_pane_t1

0xdb6b,	// (0x0001aff2) grid_ai_shortcut_pane_ParamLimits

0xdb6b,	// (0x0001aff2) grid_ai_shortcut_pane

0xdb84,	// (0x0001b00b) list_highlight_pane_cp16_ParamLimits

0xdb84,	// (0x0001b00b) list_highlight_pane_cp16

0xdb91,	// (0x0001b018) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb91,	// (0x0001b018) list_single_idle_plugin_shortcut_pane_g1

0xdb9d,	// (0x0001b024) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdb9d,	// (0x0001b024) list_single_idle_plugin_shortcut_pane_g2

0xdbb5,	// (0x0001b03c) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbb5,	// (0x0001b03c) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4e,	// (0x0001d1d5) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4e,	// (0x0001d1d5) list_single_idle_plugin_shortcut_pane_g

0xdbc8,	// (0x0001b04f) cell_ai_shortcut_pane_ParamLimits

0xdbc8,	// (0x0001b04f) cell_ai_shortcut_pane

0xdbec,	// (0x0001b073) cell_ai_shortcut_pane_g1_ParamLimits

0xdbec,	// (0x0001b073) cell_ai_shortcut_pane_g1

0xda19,	// (0x0001aea0) ai_gene_pane_1_cp2

0xdc0e,	// (0x0001b095) ai_gene_pane_2_cp2

0xdc16,	// (0x0001b09d) list_highlight_pane_cp15

0xdc1f,	// (0x0001b0a6) list_single_idle_plugin_calendar_pane_g1

0xdc16,	// (0x0001b09d) list_highlight_pane_cp17

0xdc27,	// (0x0001b0ae) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc2f,	// (0x0001b0b6) list_single_idle_plugin_player_pane_g1

0xacd8,	// (0x0001815f) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd55,	// (0x0001d1dc) list_single_idle_plugin_player_pane_g

0xdc37,	// (0x0001b0be) list_single_idle_plugin_player_pane_t1

0xdc45,	// (0x0001b0cc) list_single_idle_plugin_player_pane_t2

0xdc53,	// (0x0001b0da) list_single_idle_plugin_player_pane_t3

0xdc61,	// (0x0001b0e8) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5a,	// (0x0001d1e1) list_single_idle_plugin_player_pane_t

0xdc6f,	// (0x0001b0f6) wait_bar_pane_cp15

0xdc77,	// (0x0001b0fe) grid_ai_notification_pane

0xacd8,	// (0x0001815f) list_single_idle_plugin_notification_pane_g1

0xdc80,	// (0x0001b107) cell_ai_notification_pane_ParamLimits

0xdc80,	// (0x0001b107) cell_ai_notification_pane

0xdc8d,	// (0x0001b114) cell_ai_notification_pane_g1

0xdc95,	// (0x0001b11c) cell_ai_notification_pane_t1

0xdca3,	// (0x0001b12a) tb_ext_find_button_pane

0xdcab,	// (0x0001b132) tb_ext_find_pane_g1

0xdcb3,	// (0x0001b13a) tb_ext_find_pane_t1

0x42e6,	// (0x0001176d) tb_ext_find_button_pane_g1

0xdcc1,	// (0x0001b148) tb_ext_find_button_pane_g2

0x0001,

0xfd63,	// (0x0001d1ea) tb_ext_find_button_pane_g

0xda5e,	// (0x0001aee5) main_idle_act4_pane_t1_ParamLimits

0xda70,	// (0x0001aef7) main_idle_act4_pane_t2_ParamLimits

0xfd21,	// (0x0001d1a8) main_idle_act4_pane_t_ParamLimits

0xda98,	// (0x0001af1f) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdaa6,	// (0x0001af2d) sat_plugin_idle_act4_pane_ParamLimits

0xdaa6,	// (0x0001af2d) sat_plugin_idle_act4_pane

0xdcca,	// (0x0001b151) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcca,	// (0x0001b151) sat_plugin_idle_act4_pane_t1

0xdcdd,	// (0x0001b164) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcdd,	// (0x0001b164) sat_plugin_idle_act4_pane_t2

0xdcf0,	// (0x0001b177) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdcf0,	// (0x0001b177) sat_plugin_idle_act4_pane_t3

0xdd03,	// (0x0001b18a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd03,	// (0x0001b18a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd68,	// (0x0001d1ef) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd68,	// (0x0001d1ef) sat_plugin_idle_act4_pane_t

0x57c7,	// (0x00012c4e) popup_battery_window_ParamLimits

0x57c7,	// (0x00012c4e) popup_battery_window

0x3993,	// (0x00010e1a) bg_popup_sub_pane_cp25_ParamLimits

0x3993,	// (0x00010e1a) bg_popup_sub_pane_cp25

0xdd16,	// (0x0001b19d) popup_battery_window_g1_ParamLimits

0xdd16,	// (0x0001b19d) popup_battery_window_g1

0xdd22,	// (0x0001b1a9) popup_battery_window_t1_ParamLimits

0xdd22,	// (0x0001b1a9) popup_battery_window_t1

0xdd34,	// (0x0001b1bb) popup_battery_window_t2_ParamLimits

0xdd34,	// (0x0001b1bb) popup_battery_window_t2

0x0001,

0xfd71,	// (0x0001d1f8) popup_battery_window_t_ParamLimits

0xfd71,	// (0x0001d1f8) popup_battery_window_t

0x8a96,	// (0x00015f1d) midp_canvas_pane_ParamLimits

0x8b0f,	// (0x00015f96) midp_keypad_pane_ParamLimits

0x8b0f,	// (0x00015f96) midp_keypad_pane

0x4b50,	// (0x00011fd7) main_midp_pane_ParamLimits

0xb743,	// (0x00018bca) signal_pane_g2_cp_ParamLimits

0xdd51,	// (0x0001b1d8) aid_size_cell_midp_keypad_ParamLimits

0xdd51,	// (0x0001b1d8) aid_size_cell_midp_keypad

0xdd6b,	// (0x0001b1f2) midp_keyp_game_grid_pane_ParamLimits

0xdd6b,	// (0x0001b1f2) midp_keyp_game_grid_pane

0xdd8b,	// (0x0001b212) midp_keyp_rocker_pane_ParamLimits

0xdd8b,	// (0x0001b212) midp_keyp_rocker_pane

0xddc4,	// (0x0001b24b) midp_keyp_sk_left_pane_ParamLimits

0xddc4,	// (0x0001b24b) midp_keyp_sk_left_pane

0xde1e,	// (0x0001b2a5) midp_keyp_sk_right_pane_ParamLimits

0xde1e,	// (0x0001b2a5) midp_keyp_sk_right_pane

0x3650,	// (0x00010ad7) bg_button_pane_cp03

0xde78,	// (0x0001b2ff) midp_keyp_sk_left_pane_g1

0x3650,	// (0x00010ad7) bg_button_pane_cp04

0xde78,	// (0x0001b2ff) midp_keyp_sk_right_pane_g1

0xbcdd,	// (0x00019164) midp_keyp_rocker_pane_g1

0xde81,	// (0x0001b308) keyp_game_cell_pane_ParamLimits

0xde81,	// (0x0001b308) keyp_game_cell_pane

0x3650,	// (0x00010ad7) bg_button_pane_cp02

0xde94,	// (0x0001b31b) keyp_game_cell_pane_g1

0x57fd,	// (0x00012c84) popup_fep_vkb2_window_ParamLimits

0x57fd,	// (0x00012c84) popup_fep_vkb2_window

0x7003,	// (0x0001448a) aid_size_cell_vkb2_ParamLimits

0x7003,	// (0x0001448a) aid_size_cell_vkb2

0x7057,	// (0x000144de) popup_fep_vkb2_window_g1_ParamLimits

0x7057,	// (0x000144de) popup_fep_vkb2_window_g1

0x709f,	// (0x00014526) vkb2_area_bottom_pane_ParamLimits

0x709f,	// (0x00014526) vkb2_area_bottom_pane

0x70eb,	// (0x00014572) vkb2_area_keypad_pane_ParamLimits

0x70eb,	// (0x00014572) vkb2_area_keypad_pane

0x712d,	// (0x000145b4) vkb2_area_top_pane_ParamLimits

0x712d,	// (0x000145b4) vkb2_area_top_pane

0x71a7,	// (0x0001462e) vkb2_top_entry_pane_ParamLimits

0x71a7,	// (0x0001462e) vkb2_top_entry_pane

0x71d1,	// (0x00014658) vkb2_top_grid_left_pane_ParamLimits

0x71d1,	// (0x00014658) vkb2_top_grid_left_pane

0x71ef,	// (0x00014676) vkb2_top_grid_right_pane_ParamLimits

0x71ef,	// (0x00014676) vkb2_top_grid_right_pane

0x720d,	// (0x00014694) vkb2_cell_keypad_pane_ParamLimits

0x720d,	// (0x00014694) vkb2_cell_keypad_pane

0x72de,	// (0x00014765) vkb2_area_bottom_grid_pane_ParamLimits

0x72de,	// (0x00014765) vkb2_area_bottom_grid_pane

0x7304,	// (0x0001478b) vkb2_area_bottom_pane_g1_ParamLimits

0x7304,	// (0x0001478b) vkb2_area_bottom_pane_g1

0x7328,	// (0x000147af) vkb2_area_bottom_pane_g2_ParamLimits

0x7328,	// (0x000147af) vkb2_area_bottom_pane_g2

0x7356,	// (0x000147dd) vkb2_area_bottom_pane_g3_ParamLimits

0x7356,	// (0x000147dd) vkb2_area_bottom_pane_g3

0x0002,

0xfd76,	// (0x0001d1fd) vkb2_area_bottom_pane_g_ParamLimits

0xfd76,	// (0x0001d1fd) vkb2_area_bottom_pane_g

0x73b7,	// (0x0001483e) vkb2_top_cell_left_pane_ParamLimits

0x73b7,	// (0x0001483e) vkb2_top_cell_left_pane

0xdea5,	// (0x0001b32c) vkb2_top_entry_pane_g1_ParamLimits

0xdea5,	// (0x0001b32c) vkb2_top_entry_pane_g1

0xdeb3,	// (0x0001b33a) vkb2_top_entry_pane_t1_ParamLimits

0xdeb3,	// (0x0001b33a) vkb2_top_entry_pane_t1

0xdee5,	// (0x0001b36c) vkb2_top_entry_pane_t2_ParamLimits

0xdee5,	// (0x0001b36c) vkb2_top_entry_pane_t2

0xdf17,	// (0x0001b39e) vkb2_top_entry_pane_t3_ParamLimits

0xdf17,	// (0x0001b39e) vkb2_top_entry_pane_t3

0x0002,

0xfd7d,	// (0x0001d204) vkb2_top_entry_pane_t_ParamLimits

0xfd7d,	// (0x0001d204) vkb2_top_entry_pane_t

0x7404,	// (0x0001488b) vkb2_top_grid_right_pane_g1_ParamLimits

0x7404,	// (0x0001488b) vkb2_top_grid_right_pane_g1

0x741a,	// (0x000148a1) vkb2_top_grid_right_pane_g2_ParamLimits

0x741a,	// (0x000148a1) vkb2_top_grid_right_pane_g2

0x7432,	// (0x000148b9) vkb2_top_grid_right_pane_g3_ParamLimits

0x7432,	// (0x000148b9) vkb2_top_grid_right_pane_g3

0x744a,	// (0x000148d1) vkb2_top_grid_right_pane_g4_ParamLimits

0x744a,	// (0x000148d1) vkb2_top_grid_right_pane_g4

0x0003,

0xfd84,	// (0x0001d20b) vkb2_top_grid_right_pane_g_ParamLimits

0xfd84,	// (0x0001d20b) vkb2_top_grid_right_pane_g

0x7460,	// (0x000148e7) vkb2_top_cell_left_pane_g1

0x7477,	// (0x000148fe) vkb2_cell_keypad_pane_g1_ParamLimits

0x7477,	// (0x000148fe) vkb2_cell_keypad_pane_g1

0xdf5c,	// (0x0001b3e3) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf5c,	// (0x0001b3e3) vkb2_cell_keypad_pane_t1

0x7485,	// (0x0001490c) vkb2_cell_bottom_grid_pane_ParamLimits

0x7485,	// (0x0001490c) vkb2_cell_bottom_grid_pane

0x74be,	// (0x00014945) vkb2_cell_bottom_grid_pane_g1

0xdae6,	// (0x0001af6d) aid_call2_pane_cp02

0xdaee,	// (0x0001af75) aid_call_pane_cp02

0xdaf6,	// (0x0001af7d) clock_digital_number_pane_cp10

0xdafe,	// (0x0001af85) clock_digital_number_pane_cp11

0xdb06,	// (0x0001af8d) clock_digital_number_pane_cp12

0xdb0e,	// (0x0001af95) clock_digital_number_pane_cp13

0xdb16,	// (0x0001af9d) clock_digital_separator_pane_cp10

0x42e6,	// (0x0001176d) popup_clock_digital_analogue_window_cp2_g1

0x42e6,	// (0x0001176d) popup_clock_digital_analogue_window_cp2_g2

0xdb1e,	// (0x0001afa5) popup_clock_digital_analogue_window_cp2_g3

0x42e6,	// (0x0001176d) popup_clock_digital_analogue_window_cp2_g4

0xdb1e,	// (0x0001afa5) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd39,	// (0x0001d1c0) popup_clock_digital_analogue_window_cp2_g

0xdb26,	// (0x0001afad) popup_clock_digital_analogue_window_cp2_t1

0xdb34,	// (0x0001afbb) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd44,	// (0x0001d1cb) popup_clock_digital_analogue_window_cp2_t

0xbcdd,	// (0x00019164) clock_digital_number_pane_cp10_g1

0xbcdd,	// (0x00019164) clock_digital_number_pane_cp10_g2

0x0001,

0xfb27,	// (0x0001cfae) clock_digital_number_pane_cp10_g

0xbcdd,	// (0x00019164) clock_digital_separator_pane_cp10_g1

0xbcdd,	// (0x00019164) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb27,	// (0x0001cfae) clock_digital_separator_pane_cp10_g

0xd962,	// (0x0001ade9) uniindi_top_pane_g3

0xd973,	// (0x0001adfa) uniindi_top_pane_g4

0x7298,	// (0x0001471f) vkb2_row_keypad_pane_ParamLimits

0x7298,	// (0x0001471f) vkb2_row_keypad_pane

0x74da,	// (0x00014961) vkb2_cell_t_keypad_pane_ParamLimits

0x74da,	// (0x00014961) vkb2_cell_t_keypad_pane

0x74ea,	// (0x00014971) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x74ea,	// (0x00014971) vkb2_cell_t_keypad_pane_cp08

0x74fd,	// (0x00014984) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x74fd,	// (0x00014984) vkb2_cell_t_keypad_pane_cp09

0x7511,	// (0x00014998) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7511,	// (0x00014998) vkb2_cell_t_keypad_pane_cp01

0x7522,	// (0x000149a9) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7522,	// (0x000149a9) vkb2_cell_t_keypad_pane_cp02

0x7533,	// (0x000149ba) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7533,	// (0x000149ba) vkb2_cell_t_keypad_pane_cp03

0x7544,	// (0x000149cb) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7544,	// (0x000149cb) vkb2_cell_t_keypad_pane_cp04

0x7555,	// (0x000149dc) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7555,	// (0x000149dc) vkb2_cell_t_keypad_pane_cp05

0x7566,	// (0x000149ed) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7566,	// (0x000149ed) vkb2_cell_t_keypad_pane_cp06

0x7577,	// (0x000149fe) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7577,	// (0x000149fe) vkb2_cell_t_keypad_pane_cp07

0x7588,	// (0x00014a0f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7588,	// (0x00014a0f) vkb2_cell_t_keypad_pane_cp10

0x6d3e,	// (0x000141c5) vkb2_cell_t_keypad_pane_g1

0xdf73,	// (0x0001b3fa) vkb2_cell_t_keypad_pane_t1

0x5702,	// (0x00012b89) popup_grid_graphic2_window

0xdf85,	// (0x0001b40c) aid_size_cell_graphic2_ParamLimits

0xdf85,	// (0x0001b40c) aid_size_cell_graphic2

0xdfbd,	// (0x0001b444) bg_popup_window_pane_cp21_ParamLimits

0xdfbd,	// (0x0001b444) bg_popup_window_pane_cp21

0xdfcb,	// (0x0001b452) graphic2_pages_pane_ParamLimits

0xdfcb,	// (0x0001b452) graphic2_pages_pane

0xe011,	// (0x0001b498) grid_graphic2_control_pane_ParamLimits

0xe011,	// (0x0001b498) grid_graphic2_control_pane

0xe04f,	// (0x0001b4d6) grid_graphic2_pane_ParamLimits

0xe04f,	// (0x0001b4d6) grid_graphic2_pane

0xe0c3,	// (0x0001b54a) cell_graphic2_pane

0x5702,	// (0x00012b89) main_comp_mode_pane

0xd170,	// (0x0001a5f7) list_ai3_gene_pane_ParamLimits

0xd5a1,	// (0x0001aa28) bg_popup_window_pane_cp19_ParamLimits

0xd5ad,	// (0x0001aa34) bg_touch_area_indi_pane_ParamLimits

0xd5ad,	// (0x0001aa34) bg_touch_area_indi_pane

0xd5c3,	// (0x0001aa4a) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5c3,	// (0x0001aa4a) bg_touch_area_indi_pane_cp01

0xd5d9,	// (0x0001aa60) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5d9,	// (0x0001aa60) bg_touch_area_indi_pane_cp02

0xd5ef,	// (0x0001aa76) bg_touch_area_indi_pane_cp03_ParamLimits

0xd5ef,	// (0x0001aa76) bg_touch_area_indi_pane_cp03

0xd609,	// (0x0001aa90) popup_slider_window_g1_ParamLimits

0xd625,	// (0x0001aaac) popup_slider_window_g2_ParamLimits

0xd641,	// (0x0001aac8) popup_slider_window_g3_ParamLimits

0xfcce,	// (0x0001d155) popup_slider_window_g_ParamLimits

0xd6a7,	// (0x0001ab2e) popup_slider_window_t1_ParamLimits

0xd71b,	// (0x0001aba2) small_volume_slider_vertical_pane_ParamLimits

0xe0c3,	// (0x0001b54a) cell_graphic2_pane_ParamLimits

0xe112,	// (0x0001b599) bg_button_pane_cp10_ParamLimits

0xe112,	// (0x0001b599) bg_button_pane_cp10

0xe125,	// (0x0001b5ac) bg_button_pane_cp11_ParamLimits

0xe125,	// (0x0001b5ac) bg_button_pane_cp11

0xe138,	// (0x0001b5bf) graphic2_pages_pane_g1_ParamLimits

0xe138,	// (0x0001b5bf) graphic2_pages_pane_g1

0xe153,	// (0x0001b5da) graphic2_pages_pane_g2_ParamLimits

0xe153,	// (0x0001b5da) graphic2_pages_pane_g2

0x0001,

0xfd92,	// (0x0001d219) graphic2_pages_pane_g_ParamLimits

0xfd92,	// (0x0001d219) graphic2_pages_pane_g

0xe16b,	// (0x0001b5f2) graphic2_pages_pane_t1_ParamLimits

0xe16b,	// (0x0001b5f2) graphic2_pages_pane_t1

0xe183,	// (0x0001b60a) cell_graphic2_control_pane_ParamLimits

0xe183,	// (0x0001b60a) cell_graphic2_control_pane

0xe1a1,	// (0x0001b628) cell_graphic2_pane_g1_ParamLimits

0xe1a1,	// (0x0001b628) cell_graphic2_pane_g1

0xe1ae,	// (0x0001b635) cell_graphic2_pane_g2_ParamLimits

0xe1ae,	// (0x0001b635) cell_graphic2_pane_g2

0xe1bb,	// (0x0001b642) cell_graphic2_pane_g3_ParamLimits

0xe1bb,	// (0x0001b642) cell_graphic2_pane_g3

0xe1c8,	// (0x0001b64f) cell_graphic2_pane_g4_ParamLimits

0xe1c8,	// (0x0001b64f) cell_graphic2_pane_g4

0xe1d5,	// (0x0001b65c) cell_graphic2_pane_g5_ParamLimits

0xe1d5,	// (0x0001b65c) cell_graphic2_pane_g5

0x0004,

0xfd97,	// (0x0001d21e) cell_graphic2_pane_g_ParamLimits

0xfd97,	// (0x0001d21e) cell_graphic2_pane_g

0xe1ee,	// (0x0001b675) cell_graphic2_pane_t1_ParamLimits

0xe1ee,	// (0x0001b675) cell_graphic2_pane_t1

0x9287,	// (0x0001670e) grid_highlight_pane_cp11_ParamLimits

0x9287,	// (0x0001670e) grid_highlight_pane_cp11

0x3993,	// (0x00010e1a) bg_button_pane_cp05

0xe224,	// (0x0001b6ab) cell_graphic2_control_pane_g1

0xbcdd,	// (0x00019164) bg_touch_area_indi_pane_g1

0xe24c,	// (0x0001b6d3) aid_cmod_rocker_key_size

0xe256,	// (0x0001b6dd) aid_cmode_itu_key_size

0xe260,	// (0x0001b6e7) main_cmode_video_pane

0xe26a,	// (0x0001b6f1) main_comp_mode_itu_pane

0xe276,	// (0x0001b6fd) main_comp_mode_rocker_pane

0xe282,	// (0x0001b709) cell_cmode_rocker_pane_ParamLimits

0xe282,	// (0x0001b709) cell_cmode_rocker_pane

0xe294,	// (0x0001b71b) cell_cmode_itu_pane_ParamLimits

0xe294,	// (0x0001b71b) cell_cmode_itu_pane

0x3c71,	// (0x000110f8) bg_button_pane_cp06_ParamLimits

0x3c71,	// (0x000110f8) bg_button_pane_cp06

0xbf4d,	// (0x000193d4) cell_cmode_rocker_pane_g1_ParamLimits

0xbf4d,	// (0x000193d4) cell_cmode_rocker_pane_g1

0xd7bf,	// (0x0001ac46) cell_cmode_rocker_pane_g2_ParamLimits

0xd7bf,	// (0x0001ac46) cell_cmode_rocker_pane_g2

0x0001,

0xfda7,	// (0x0001d22e) cell_cmode_rocker_pane_g_ParamLimits

0xfda7,	// (0x0001d22e) cell_cmode_rocker_pane_g

0x3650,	// (0x00010ad7) bg_button_pane_cp07

0xe2a9,	// (0x0001b730) cell_cmode_itu_pane_g1

0xe2b2,	// (0x0001b739) cell_cmode_itu_pane_t1

0xe2c0,	// (0x0001b747) cell_cmode_itu_pane_t2

0x0001,

0xfdac,	// (0x0001d233) cell_cmode_itu_pane_t

0xd9e5,	// (0x0001ae6c) aid_touch_ctrl_left

0xd9ed,	// (0x0001ae74) aid_touch_ctrl_right

0x3650,	// (0x00010ad7) compa_mode_pane

0xe2ce,	// (0x0001b755) aid_cmod_rocker_key_size_cp

0xe2d8,	// (0x0001b75f) aid_cmode_itu_key_size_cp

0xe2e2,	// (0x0001b769) compa_mode_pane_g1

0xe2ea,	// (0x0001b771) compa_mode_pane_g2

0xe2f2,	// (0x0001b779) compa_mode_pane_g3

0x0002,

0xfdb1,	// (0x0001d238) compa_mode_pane_g

0xe2fa,	// (0x0001b781) main_comp_mode_itu_pane_cp

0xe302,	// (0x0001b789) main_comp_mode_rocker_pane_cp

0xe30a,	// (0x0001b791) cell_cmode_itu_pane_cp_ParamLimits

0xe30a,	// (0x0001b791) cell_cmode_itu_pane_cp

0xe31f,	// (0x0001b7a6) cell_cmode_rocker_pane_cp_ParamLimits

0xe31f,	// (0x0001b7a6) cell_cmode_rocker_pane_cp

0x3c71,	// (0x000110f8) bg_button_pane_cp06_cp_ParamLimits

0x3c71,	// (0x000110f8) bg_button_pane_cp06_cp

0xbf4d,	// (0x000193d4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbf4d,	// (0x000193d4) cell_cmode_rocker_pane_g1_cp

0xbcdd,	// (0x00019164) cell_cmode_rocker_pane_g2_cp

0x3650,	// (0x00010ad7) bg_button_pane_cp07_cp

0xe331,	// (0x0001b7b8) cell_cmode_itu_pane_g1_cp

0xe33a,	// (0x0001b7c1) cell_cmode_itu_pane_t1_cp

0xe33a,	// (0x0001b7c1) cell_cmode_itu_pane_t2_cp

0xa777,	// (0x00017bfe) settings_code_pane_cp2

0x384f,	// (0x00010cd6) bg_popup_window_pane_cp3_ParamLimits

0x3aac,	// (0x00010f33) heading_pane_cp3_ParamLimits

0x3abb,	// (0x00010f42) listscroll_popup_graphic_pane_ParamLimits

0x6ae7,	// (0x00013f6e) fep_hwr_aid_pane_ParamLimits

0x6f5e,	// (0x000143e5) aid_touch_sctrl_top_ParamLimits

0x6f79,	// (0x00014400) sctrl_sk_top_pane_g1_ParamLimits

0x6d3e,	// (0x000141c5) sctrl_sk_top_pane_g2_ParamLimits

0xfce7,	// (0x0001d16e) sctrl_sk_top_pane_g_ParamLimits

0x6f86,	// (0x0001440d) sctrl_sk_top_pane_t1_ParamLimits

0x6f5e,	// (0x000143e5) aid_touch_sctrl_bottom_ParamLimits

0x6f86,	// (0x0001440d) sctrl_sk_bottom_pane_t1_ParamLimits

0xd92e,	// (0x0001adb5) aid_area_touch_clock

0x716f,	// (0x000145f6) aid_vkb2_area_top_pane_cell_ParamLimits

0x716f,	// (0x000145f6) aid_vkb2_area_top_pane_cell

0x72ba,	// (0x00014741) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x72ba,	// (0x00014741) aid_vkb2_area_bottom_pane_cell

0xde9d,	// (0x0001b324) popup_char_count_window

0xe348,	// (0x0001b7cf) popup_char_count_window_g1

0xe351,	// (0x0001b7d8) popup_char_count_window_g2

0xe35a,	// (0x0001b7e1) popup_char_count_window_g3

0x0002,

0xfdb8,	// (0x0001d23f) popup_char_count_window_g

0xe363,	// (0x0001b7ea) popup_char_count_window_t1

0x7035,	// (0x000144bc) popup_fep_char_preview_window_ParamLimits

0x7035,	// (0x000144bc) popup_fep_char_preview_window

0x718d,	// (0x00014614) vkb2_top_candi_pane_ParamLimits

0x718d,	// (0x00014614) vkb2_top_candi_pane

0xe371,	// (0x0001b7f8) cell_vkb2_top_candi_pane_ParamLimits

0xe371,	// (0x0001b7f8) cell_vkb2_top_candi_pane

0x759d,	// (0x00014a24) bg_popup_fep_char_preview_window_ParamLimits

0x759d,	// (0x00014a24) bg_popup_fep_char_preview_window

0x75ab,	// (0x00014a32) popup_fep_char_preview_window_t1_ParamLimits

0x75ab,	// (0x00014a32) popup_fep_char_preview_window_t1

0xe3be,	// (0x0001b845) bg_popup_fep_char_preview_window_g1

0xe3c6,	// (0x0001b84d) bg_popup_fep_char_preview_window_g2

0xe3ce,	// (0x0001b855) bg_popup_fep_char_preview_window_g3

0xe3d6,	// (0x0001b85d) bg_popup_fep_char_preview_window_g4

0xe3de,	// (0x0001b865) bg_popup_fep_char_preview_window_g5

0xe3e6,	// (0x0001b86d) bg_popup_fep_char_preview_window_g6

0xe3ee,	// (0x0001b875) bg_popup_fep_char_preview_window_g7

0xe3f6,	// (0x0001b87d) bg_popup_fep_char_preview_window_g8

0xe3fe,	// (0x0001b885) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbf,	// (0x0001d246) bg_popup_fep_char_preview_window_g

0x6d3e,	// (0x000141c5) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6d3e,	// (0x000141c5) cell_vkb2_top_candi_pane_g1

0x6d4c,	// (0x000141d3) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6d4c,	// (0x000141d3) cell_vkb2_top_candi_pane_g2

0xdf3b,	// (0x0001b3c2) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdf3b,	// (0x0001b3c2) cell_vkb2_top_candi_pane_g3

0x75ed,	// (0x00014a74) cell_vkb2_top_candi_pane_g4_ParamLimits

0x75ed,	// (0x00014a74) cell_vkb2_top_candi_pane_g4

0xc5e6,	// (0x00019a6d) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc5e6,	// (0x00019a6d) cell_vkb2_top_candi_pane_g5

0x760e,	// (0x00014a95) cell_vkb2_top_candi_pane_g6_ParamLimits

0x760e,	// (0x00014a95) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd4,	// (0x0001d25b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd4,	// (0x0001d25b) cell_vkb2_top_candi_pane_g

0x761c,	// (0x00014aa3) cell_vkb2_top_candi_pane_t1

0x68ff,	// (0x00013d86) aid_size_touch_slider_mark_ParamLimits

0x68ff,	// (0x00013d86) aid_size_touch_slider_mark

0xe001,	// (0x0001b488) grid_graphic2_catg_pane_ParamLimits

0xe001,	// (0x0001b488) grid_graphic2_catg_pane

0xe09f,	// (0x0001b526) popup_grid_graphic2_window_t1_ParamLimits

0xe09f,	// (0x0001b526) popup_grid_graphic2_window_t1

0xe0b1,	// (0x0001b538) popup_grid_graphic2_window_t2_ParamLimits

0xe0b1,	// (0x0001b538) popup_grid_graphic2_window_t2

0x0001,

0xfd8d,	// (0x0001d214) popup_grid_graphic2_window_t_ParamLimits

0xfd8d,	// (0x0001d214) popup_grid_graphic2_window_t

0x3993,	// (0x00010e1a) bg_button_pane_cp05_ParamLimits

0xe224,	// (0x0001b6ab) cell_graphic2_control_pane_g1_ParamLimits

0xe406,	// (0x0001b88d) cell_graphic2_catg_pane_ParamLimits

0xe406,	// (0x0001b88d) cell_graphic2_catg_pane

0x3650,	// (0x00010ad7) bg_button_pane_cp12

0xe418,	// (0x0001b89f) cell_graphic2_catg_pane_g1

0xd8f9,	// (0x0001ad80) cell_tb_ext_pane_t1_ParamLimits

0x73d7,	// (0x0001485e) vkb2_top_cell_right_narrow_pane_ParamLimits

0x73d7,	// (0x0001485e) vkb2_top_cell_right_narrow_pane

0x73ef,	// (0x00014876) vkb2_top_cell_right_wide_pane_ParamLimits

0x73ef,	// (0x00014876) vkb2_top_cell_right_wide_pane

0x6ad9,	// (0x00013f60) bg_vkb2_func_pane_ParamLimits

0x6ad9,	// (0x00013f60) bg_vkb2_func_pane

0x7460,	// (0x000148e7) vkb2_top_cell_left_pane_g1_ParamLimits

0x6ad9,	// (0x00013f60) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6ad9,	// (0x00013f60) bg_vkb2_fuc_pane_cp03

0x74be,	// (0x00014945) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x916f,	// (0x000165f6) bg_vkb2_func_pane_g1

0x9177,	// (0x000165fe) bg_vkb2_func_pane_g2

0x9187,	// (0x0001660e) bg_vkb2_func_pane_g3

0x917f,	// (0x00016606) bg_vkb2_func_pane_g4

0x918f,	// (0x00016616) bg_vkb2_func_pane_g5

0x9197,	// (0x0001661e) bg_vkb2_func_pane_g6

0x919f,	// (0x00016626) bg_vkb2_func_pane_g7

0x91a7,	// (0x0001662e) bg_vkb2_func_pane_g8

0x9167,	// (0x000165ee) bg_vkb2_func_pane_g9

0x0008,

0xfde1,	// (0x0001d268) bg_vkb2_func_pane_g

0x6ad9,	// (0x00013f60) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6ad9,	// (0x00013f60) bg_vkb2_fuc_pane_cp01

0x7460,	// (0x000148e7) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7460,	// (0x000148e7) vkb2_top_cell_right_wide_pane_g1

0x6ad9,	// (0x00013f60) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6ad9,	// (0x00013f60) bg_vkb2_fuc_pane_cp02

0x74be,	// (0x00014945) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x74be,	// (0x00014945) vkb2_top_cell_right_narrow_pane_g1

0xd51b,	// (0x0001a9a2) aid_touch_area_decrease_ParamLimits

0xd51b,	// (0x0001a9a2) aid_touch_area_decrease

0xd53f,	// (0x0001a9c6) aid_touch_area_increase_ParamLimits

0xd53f,	// (0x0001a9c6) aid_touch_area_increase

0xd557,	// (0x0001a9de) aid_touch_area_mute_ParamLimits

0xd557,	// (0x0001a9de) aid_touch_area_mute

0xd573,	// (0x0001a9fa) aid_touch_area_slider_ParamLimits

0xd573,	// (0x0001a9fa) aid_touch_area_slider

0xd65d,	// (0x0001aae4) popup_slider_window_g4_ParamLimits

0xd65d,	// (0x0001aae4) popup_slider_window_g4

0xd675,	// (0x0001aafc) popup_slider_window_g5_ParamLimits

0xd675,	// (0x0001aafc) popup_slider_window_g5

0xd697,	// (0x0001ab1e) popup_slider_window_g6_ParamLimits

0xd697,	// (0x0001ab1e) popup_slider_window_g6

0xd6d5,	// (0x0001ab5c) popup_slider_window_t2_ParamLimits

0xd6d5,	// (0x0001ab5c) popup_slider_window_t2

0x0001,

0xfcdb,	// (0x0001d162) popup_slider_window_t_ParamLimits

0xfcdb,	// (0x0001d162) popup_slider_window_t

0xd6ed,	// (0x0001ab74) slider_pane_ParamLimits

0xd6ed,	// (0x0001ab74) slider_pane

0xe421,	// (0x0001b8a8) slider_pane_g1_ParamLimits

0xe421,	// (0x0001b8a8) slider_pane_g1

0xe435,	// (0x0001b8bc) slider_pane_g2_ParamLimits

0xe435,	// (0x0001b8bc) slider_pane_g2

0xe44b,	// (0x0001b8d2) slider_pane_g3_ParamLimits

0xe44b,	// (0x0001b8d2) slider_pane_g3

0x0003,

0xfdf4,	// (0x0001d27b) slider_pane_g_ParamLimits

0xfdf4,	// (0x0001d27b) slider_pane_g

0x64b6,	// (0x0001393d) popup_tb_float_extension_window_ParamLimits

0x64b6,	// (0x0001393d) popup_tb_float_extension_window

0xe477,	// (0x0001b8fe) aid_size_cell_tb_float_ext

0x3650,	// (0x00010ad7) bg_popup_sub_window_cp28

0xe483,	// (0x0001b90a) grid_tb_float_ext_pane

0xe48d,	// (0x0001b914) cell_tb_float_ext_pane_ParamLimits

0xe48d,	// (0x0001b914) cell_tb_float_ext_pane

0xe4a7,	// (0x0001b92e) cell_tb_float_ext_pane_g1

0xe4b0,	// (0x0001b937) grid_highlight_pane_cp12

0x6c28,	// (0x000140af) cell_last_hwr_side_pane_ParamLimits

0x6c28,	// (0x000140af) cell_last_hwr_side_pane

0xbcdd,	// (0x00019164) cell_last_hwr_side_pane_g1

0xe4b9,	// (0x0001b940) cell_last_hwr_side_pane_g2

0x0001,

0xfdfd,	// (0x0001d284) cell_last_hwr_side_pane_g

0x7386,	// (0x0001480d) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7386,	// (0x0001480d) vkb2_area_bottom_space_btn_pane

0x6d3e,	// (0x000141c5) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf73,	// (0x0001b3fa) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x761c,	// (0x00014aa3) cell_vkb2_top_candi_pane_t1_ParamLimits

0x763b,	// (0x00014ac2) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x763b,	// (0x00014ac2) vkb2_area_bottom_space_btn_pane_g1

0x7675,	// (0x00014afc) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7675,	// (0x00014afc) vkb2_area_bottom_space_btn_pane_g2

0x76ab,	// (0x00014b32) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x76ab,	// (0x00014b32) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe02,	// (0x0001d289) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe02,	// (0x0001d289) vkb2_area_bottom_space_btn_pane_g

0x6b9c,	// (0x00014023) cel_fep_hwr_func_pane_ParamLimits

0x6b9c,	// (0x00014023) cel_fep_hwr_func_pane

0x6bd8,	// (0x0001405f) cell_hwr_side_button_pane_ParamLimits

0x6bd8,	// (0x0001405f) cell_hwr_side_button_pane

0xd92e,	// (0x0001adb5) aid_area_touch_clock_ParamLimits

0x3993,	// (0x00010e1a) bg_uniindi_top_pane_ParamLimits

0xd940,	// (0x0001adc7) uniindi_top_pane_g1_ParamLimits

0xd956,	// (0x0001addd) uniindi_top_pane_g2_ParamLimits

0xd962,	// (0x0001ade9) uniindi_top_pane_g3_ParamLimits

0xd973,	// (0x0001adfa) uniindi_top_pane_g4_ParamLimits

0xfd13,	// (0x0001d19a) uniindi_top_pane_g_ParamLimits

0xd980,	// (0x0001ae07) uniindi_top_pane_t1_ParamLimits

0x3993,	// (0x00010e1a) bg_vkb2_func_pane_cp01_ParamLimits

0x3993,	// (0x00010e1a) bg_vkb2_func_pane_cp01

0xe4c2,	// (0x0001b949) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4c2,	// (0x0001b949) cel_fep_hwr_func_pane_g1

0x3993,	// (0x00010e1a) bg_vkb2_func_pane_cp02_ParamLimits

0x3993,	// (0x00010e1a) bg_vkb2_func_pane_cp02

0xe4c2,	// (0x0001b949) cell_hwr_side_button_pane_g1_ParamLimits

0xe4c2,	// (0x0001b949) cell_hwr_side_button_pane_g1

0x8fbd,	// (0x00016444) status_pane_g4_ParamLimits

0x8fbd,	// (0x00016444) status_pane_g4

0x8fd7,	// (0x0001645e) status_pane_t1

0xba18,	// (0x00018e9f) form2_midp_gauge_slider_cont_pane

0xba20,	// (0x00018ea7) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba32,	// (0x00018eb9) form2_midp_gauge_slider_pane_t2_ParamLimits

0xba44,	// (0x00018ecb) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfada,	// (0x0001cf61) form2_midp_gauge_slider_pane_t_ParamLimits

0xba56,	// (0x00018edd) form2_midp_slider_pane_ParamLimits

0x6ff5,	// (0x0001447c) aid_size_cell_func_vkb2_ParamLimits

0x6ff5,	// (0x0001447c) aid_size_cell_func_vkb2

0xe463,	// (0x0001b8ea) slider_pane_g4_ParamLimits

0xe463,	// (0x0001b8ea) slider_pane_g4

0x76f5,	// (0x00014b7c) form2_midp_gauge_slider_pane_t2_cp01

0x7703,	// (0x00014b8a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7703,	// (0x00014b8a) form2_midp_gauge_slider_pane_t3_cp01

0x7720,	// (0x00014ba7) form2_midp_slider_pane_cp01

0x3650,	// (0x00010ad7) navi_smil_pane

0xe4fb,	// (0x0001b982) navi_smil_pane_g1

0xe503,	// (0x0001b98a) navi_smil_pane_t1

0xe4d0,	// (0x0001b957) form2_midp_slider_pane_g1

0xe4d9,	// (0x0001b960) form2_midp_slider_pane_g2

0xe4e1,	// (0x0001b968) form2_midp_slider_pane_g3

0xe4d0,	// (0x0001b957) form2_midp_slider_pane_g4

0xe4e9,	// (0x0001b970) form2_midp_slider_pane_g5

0x0004,

0xfe0b,	// (0x0001d292) form2_midp_slider_pane_g

0x76e5,	// (0x00014b6c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x76e5,	// (0x00014b6c) vkb2_area_bottom_space_btn_pane_g4

0x8dec,	// (0x00016273) lc0_navi_pane_ParamLimits

0x8dec,	// (0x00016273) lc0_navi_pane

0x8e62,	// (0x000162e9) lc0_stat_indi_pane_ParamLimits

0x8e62,	// (0x000162e9) lc0_stat_indi_pane

0x8e79,	// (0x00016300) ls0_title_pane_ParamLimits

0x8e79,	// (0x00016300) ls0_title_pane

0x3c71,	// (0x000110f8) bg_popup_sub_pane_cp14_ParamLimits

0xd915,	// (0x0001ad9c) list_uniindi_pane_ParamLimits

0xd921,	// (0x0001ada8) uniindi_top_pane_ParamLimits

0xd9bd,	// (0x0001ae44) list_single_uniindi_pane_g1_ParamLimits

0xd9d0,	// (0x0001ae57) list_single_uniindi_pane_t1_ParamLimits

0x7729,	// (0x00014bb0) lc0_stat_clock_pane_ParamLimits

0x7729,	// (0x00014bb0) lc0_stat_clock_pane

0xe511,	// (0x0001b998) lc0_stat_indi_pane_g1_ParamLimits

0xe511,	// (0x0001b998) lc0_stat_indi_pane_g1

0xe51e,	// (0x0001b9a5) lc0_stat_indi_pane_g2_ParamLimits

0xe51e,	// (0x0001b9a5) lc0_stat_indi_pane_g2

0x0001,

0xfe16,	// (0x0001d29d) lc0_stat_indi_pane_g_ParamLimits

0xfe16,	// (0x0001d29d) lc0_stat_indi_pane_g

0x7736,	// (0x00014bbd) lc0_uni_indicator_pane_ParamLimits

0x7736,	// (0x00014bbd) lc0_uni_indicator_pane

0xe52b,	// (0x0001b9b2) ls0_title_pane_g1_ParamLimits

0xe52b,	// (0x0001b9b2) ls0_title_pane_g1

0xe53f,	// (0x0001b9c6) ls0_title_pane_t1_ParamLimits

0xe53f,	// (0x0001b9c6) ls0_title_pane_t1

0x7743,	// (0x00014bca) lc0_uni_indicator_pane_g1_ParamLimits

0x7743,	// (0x00014bca) lc0_uni_indicator_pane_g1

0xe575,	// (0x0001b9fc) lc0_stat_clock_pane_t1

0x5702,	// (0x00012b89) main_ai5_pane

0xe583,	// (0x0001ba0a) ai5_sk_pane_ParamLimits

0xe583,	// (0x0001ba0a) ai5_sk_pane

0xe590,	// (0x0001ba17) cell_ai5_widget_pane_ParamLimits

0xe590,	// (0x0001ba17) cell_ai5_widget_pane

0xe659,	// (0x0001bae0) aid_size_cell_widget_grid

0xe667,	// (0x0001baee) bg_ai5_widget_pane_ParamLimits

0xe667,	// (0x0001baee) bg_ai5_widget_pane

0xe6e3,	// (0x0001bb6a) cell_ai5_widget_pane_g2

0xe6f7,	// (0x0001bb7e) cell_ai5_widget_pane_g3

0xe711,	// (0x0001bb98) cell_ai5_widget_pane_g4

0xe721,	// (0x0001bba8) cell_ai5_widget_pane_g5

0xe731,	// (0x0001bbb8) cell_ai5_widget_pane_g6

0xe73d,	// (0x0001bbc4) cell_ai5_widget_pane_g7

0xe7a9,	// (0x0001bc30) cell_ai5_widget_pane_t1_ParamLimits

0xe7a9,	// (0x0001bc30) cell_ai5_widget_pane_t1

0xe7c6,	// (0x0001bc4d) cell_ai5_widget_pane_t2_ParamLimits

0xe7c6,	// (0x0001bc4d) cell_ai5_widget_pane_t2

0xe7de,	// (0x0001bc65) cell_ai5_widget_pane_t3_ParamLimits

0xe7de,	// (0x0001bc65) cell_ai5_widget_pane_t3

0xe7f6,	// (0x0001bc7d) cell_ai5_widget_pane_t4_ParamLimits

0xe7f6,	// (0x0001bc7d) cell_ai5_widget_pane_t4

0xe81c,	// (0x0001bca3) cell_ai5_widget_pane_t5_ParamLimits

0xe81c,	// (0x0001bca3) cell_ai5_widget_pane_t5

0xe83b,	// (0x0001bcc2) cell_ai5_widget_pane_t6_ParamLimits

0xe83b,	// (0x0001bcc2) cell_ai5_widget_pane_t6

0xe84d,	// (0x0001bcd4) cell_ai5_widget_pane_t7_ParamLimits

0xe84d,	// (0x0001bcd4) cell_ai5_widget_pane_t7

0xe86c,	// (0x0001bcf3) cell_ai5_widget_pane_t8_ParamLimits

0xe86c,	// (0x0001bcf3) cell_ai5_widget_pane_t8

0x000b,

0xfe36,	// (0x0001d2bd) cell_ai5_widget_pane_t_ParamLimits

0xfe36,	// (0x0001d2bd) cell_ai5_widget_pane_t

0xe8f0,	// (0x0001bd77) grid_ai5_widget_pane

0x3c71,	// (0x000110f8) highlight_cell_ai5_widget_pane_ParamLimits

0x3c71,	// (0x000110f8) highlight_cell_ai5_widget_pane

0xe8fe,	// (0x0001bd85) ai5_sk_left_pane

0xe908,	// (0x0001bd8f) ai5_sk_middle_pane

0xe912,	// (0x0001bd99) ai5_sk_right_pane

0xe91c,	// (0x0001bda3) bg_ai5_widget_pane_g1_ParamLimits

0xe91c,	// (0x0001bda3) bg_ai5_widget_pane_g1

0xe928,	// (0x0001bdaf) bg_ai5_widget_pane_g2_ParamLimits

0xe928,	// (0x0001bdaf) bg_ai5_widget_pane_g2

0xe934,	// (0x0001bdbb) bg_ai5_widget_pane_g3_ParamLimits

0xe934,	// (0x0001bdbb) bg_ai5_widget_pane_g3

0xe940,	// (0x0001bdc7) bg_ai5_widget_pane_g4_ParamLimits

0xe940,	// (0x0001bdc7) bg_ai5_widget_pane_g4

0xe94c,	// (0x0001bdd3) bg_ai5_widget_pane_g5_ParamLimits

0xe94c,	// (0x0001bdd3) bg_ai5_widget_pane_g5

0xe958,	// (0x0001bddf) bg_ai5_widget_pane_g6_ParamLimits

0xe958,	// (0x0001bddf) bg_ai5_widget_pane_g6

0xe964,	// (0x0001bdeb) bg_ai5_widget_pane_g7_ParamLimits

0xe964,	// (0x0001bdeb) bg_ai5_widget_pane_g7

0xe970,	// (0x0001bdf7) bg_ai5_widget_pane_g8_ParamLimits

0xe970,	// (0x0001bdf7) bg_ai5_widget_pane_g8

0xe97c,	// (0x0001be03) bg_ai5_widget_pane_g9_ParamLimits

0xe97c,	// (0x0001be03) bg_ai5_widget_pane_g9

0x0008,

0xfe4f,	// (0x0001d2d6) bg_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x0001d2d6) bg_ai5_widget_pane_g

0xe9ae,	// (0x0001be35) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9ae,	// (0x0001be35) cell_shortcut_ai5_widget_pane

0x4914,	// (0x00011d9b) bg_cell_shortcut_ai5_widget_pane

0xe9bf,	// (0x0001be46) cell_grid_ai5_widget_pane_g1

0x4914,	// (0x00011d9b) highlight_cell_shortcut_ai5_widget_pane

0x916f,	// (0x000165f6) ai5_sk_left_pane_g1

0xe9c8,	// (0x0001be4f) ai5_sk_left_pane_g2

0xe9d0,	// (0x0001be57) ai5_sk_left_pane_g3

0xe9d8,	// (0x0001be5f) ai5_sk_left_pane_g4

0x0003,

0xfe62,	// (0x0001d2e9) ai5_sk_left_pane_g

0xe9e0,	// (0x0001be67) ai5_sk_left_pane_t1

0x9177,	// (0x000165fe) ai5_sk_right_pane_g1

0xe9ee,	// (0x0001be75) ai5_sk_right_pane_g2

0xe9f6,	// (0x0001be7d) ai5_sk_right_pane_g3

0xe9fe,	// (0x0001be85) ai5_sk_right_pane_g4

0x0003,

0xfe6b,	// (0x0001d2f2) ai5_sk_right_pane_g

0xea06,	// (0x0001be8d) ai5_sk_right_pane_t1

0x9177,	// (0x000165fe) ai5_sk_middle_pane_g1

0x916f,	// (0x000165f6) ai5_sk_middle_pane_g2

0x918f,	// (0x00016616) ai5_sk_middle_pane_g3

0xe9f6,	// (0x0001be7d) ai5_sk_middle_pane_g4

0xe9d0,	// (0x0001be57) ai5_sk_middle_pane_g5

0xea14,	// (0x0001be9b) ai5_sk_middle_pane_g6

0xea1c,	// (0x0001bea3) ai5_sk_middle_pane_g7

0x0006,

0xfe74,	// (0x0001d2fb) ai5_sk_middle_pane_g

0x8c72,	// (0x000160f9) aid_touch_area_size_lc0_ParamLimits

0x8c72,	// (0x000160f9) aid_touch_area_size_lc0

0x6d6d,	// (0x000141f4) cell_hwr_candidate_pane_t1_ParamLimits

0x8c8e,	// (0x00016115) aid_touch_navi_pane

0x8f67,	// (0x000163ee) status_dt_navi_pane_ParamLimits

0x8f67,	// (0x000163ee) status_dt_navi_pane

0x8f74,	// (0x000163fb) status_dt_sta_pane_ParamLimits

0x8f74,	// (0x000163fb) status_dt_sta_pane

0xea24,	// (0x0001beab) dt_sta_controll_pane

0xea31,	// (0x0001beb8) dt_sta_indi_pane

0xea42,	// (0x0001bec9) dt_sta_title_pane

0x3993,	// (0x00010e1a) bg_dt_sta_indi_pane_ParamLimits

0x3993,	// (0x00010e1a) bg_dt_sta_indi_pane

0xea55,	// (0x0001bedc) dt_sta_battery_pane

0xea5d,	// (0x0001bee4) dt_sta_indi_pane_g1

0xea66,	// (0x0001beed) dt_sta_indi_pane_g2

0xea6f,	// (0x0001bef6) dt_sta_indi_pane_g3

0x0002,

0xfe83,	// (0x0001d30a) dt_sta_indi_pane_g

0xea78,	// (0x0001beff) dt_sta_signal_pane

0x3c71,	// (0x000110f8) bg_dt_sta_title_pane_ParamLimits

0x3c71,	// (0x000110f8) bg_dt_sta_title_pane

0xa09e,	// (0x00017525) dt_sta_title_pane_g1

0xea81,	// (0x0001bf08) dt_sta_title_pane_t1_ParamLimits

0xea81,	// (0x0001bf08) dt_sta_title_pane_t1

0x3650,	// (0x00010ad7) bg_dt_sta_control_pane

0xea96,	// (0x0001bf1d) dt_sta_controll_pane_g1

0xea9f,	// (0x0001bf26) bg_dt_sta_title_pane_g1

0xeaa8,	// (0x0001bf2f) bg_dt_sta_title_pane_g2

0xeab1,	// (0x0001bf38) bg_dt_sta_title_pane_g3

0x0002,

0xfe8a,	// (0x0001d311) bg_dt_sta_title_pane_g

0xbcdd,	// (0x00019164) bg_dt_sta_indi_pane_g1

0xeaba,	// (0x0001bf41) dt_sta_signal_pane_g1

0xeac2,	// (0x0001bf49) dt_sta_signal_pane_g2

0x0001,

0xfe91,	// (0x0001d318) dt_sta_signal_pane_g

0xeaca,	// (0x0001bf51) dt_sta_battery_pane_g1

0xead3,	// (0x0001bf5a) dt_sta_battery_pane_t1

0xbcdd,	// (0x00019164) bg_dt_sta_control_pane_g1

0x440d,	// (0x00011894) fep_china_uni_eep_pane

0x4415,	// (0x0001189c) fep_china_uni_entry_pane_ParamLimits

0x4425,	// (0x000118ac) popup_fep_china_uni_window_g1_ParamLimits

0x4435,	// (0x000118bc) popup_fep_china_uni_window_g2_ParamLimits

0x4435,	// (0x000118bc) popup_fep_china_uni_window_g2

0x0001,

0xf6e9,	// (0x0001cb70) popup_fep_china_uni_window_g_ParamLimits

0xf6e9,	// (0x0001cb70) popup_fep_china_uni_window_g

0xeae2,	// (0x0001bf69) fep_china_uni_eep_pane_g1

0xeaea,	// (0x0001bf71) fep_china_uni_eep_pane_t1

0xe4f2,	// (0x0001b979) aid_touch_area_size_smil_player

0x8de4,	// (0x0001626b) lc0_clock_pane

0x8fcb,	// (0x00016452) status_pane_g5_ParamLimits

0x8fcb,	// (0x00016452) status_pane_g5

0x6177,	// (0x000135fe) popup_keymap_window

0x8f89,	// (0x00016410) status_icon_pane

0xe6f7,	// (0x0001bb7e) cell_ai5_widget_pane_g3_ParamLimits

0xe711,	// (0x0001bb98) cell_ai5_widget_pane_g4_ParamLimits

0xe721,	// (0x0001bba8) cell_ai5_widget_pane_g5_ParamLimits

0xe749,	// (0x0001bbd0) cell_ai5_widget_pane_g8_ParamLimits

0xe749,	// (0x0001bbd0) cell_ai5_widget_pane_g8

0xe75d,	// (0x0001bbe4) cell_ai5_widget_pane_g9_ParamLimits

0xe75d,	// (0x0001bbe4) cell_ai5_widget_pane_g9

0xe771,	// (0x0001bbf8) cell_ai5_widget_pane_g10_ParamLimits

0xe771,	// (0x0001bbf8) cell_ai5_widget_pane_g10

0xeaf9,	// (0x0001bf80) status_icon_pane_g1

0x3650,	// (0x00010ad7) bg_popup_sub_pane_cp13

0xeb01,	// (0x0001bf88) popup_keymap_window_t1

0x8c17,	// (0x0001609e) control_pane_g6_ParamLimits

0x8c17,	// (0x0001609e) control_pane_g6

0x8c24,	// (0x000160ab) control_pane_g7_ParamLimits

0x8c24,	// (0x000160ab) control_pane_g7

0x8c31,	// (0x000160b8) control_pane_g8_ParamLimits

0x8c31,	// (0x000160b8) control_pane_g8

0xea24,	// (0x0001beab) dt_sta_controll_pane_ParamLimits

0xea31,	// (0x0001beb8) dt_sta_indi_pane_ParamLimits

0xea42,	// (0x0001bec9) dt_sta_title_pane_ParamLimits

0x3b6a,	// (0x00010ff1) aid_size_touch_scroll_bar_cale

0x57db,	// (0x00012c62) popup_discreet_window_ParamLimits

0x57db,	// (0x00012c62) popup_discreet_window

0x5855,	// (0x00012cdc) popup_sk_window

0x98e2,	// (0x00016d69) bg_popup_sub_pane_cp28_ParamLimits

0x98e2,	// (0x00016d69) bg_popup_sub_pane_cp28

0xeb0f,	// (0x0001bf96) popup_discreet_window_g1_ParamLimits

0xeb0f,	// (0x0001bf96) popup_discreet_window_g1

0xeb2f,	// (0x0001bfb6) popup_discreet_window_t1_ParamLimits

0xeb2f,	// (0x0001bfb6) popup_discreet_window_t1

0xeb4d,	// (0x0001bfd4) popup_discreet_window_t2_ParamLimits

0xeb4d,	// (0x0001bfd4) popup_discreet_window_t2

0x0002,

0xfe96,	// (0x0001d31d) popup_discreet_window_t_ParamLimits

0xfe96,	// (0x0001d31d) popup_discreet_window_t

0x7757,	// (0x00014bde) popup_sk_window_g1

0x7761,	// (0x00014be8) popup_sk_window_g2

0x0001,

0xfe9d,	// (0x0001d324) popup_sk_window_g

0x7769,	// (0x00014bf0) popup_sk_window_t1

0x7777,	// (0x00014bfe) popup_sk_window_t1_copy1

0xe6e3,	// (0x0001bb6a) cell_ai5_widget_pane_g2_ParamLimits

0xe87e,	// (0x0001bd05) cell_ai5_widget_pane_t9_ParamLimits

0xe87e,	// (0x0001bd05) cell_ai5_widget_pane_t9

0x3650,	// (0x00010ad7) main_fep_fshwr2_pane

0x7785,	// (0x00014c0c) aid_fshwr2_btn_pane

0x7797,	// (0x00014c1e) aid_fshwr2_syb_pane

0x77a9,	// (0x00014c30) aid_fshwr2_txt_pane

0x77b5,	// (0x00014c3c) fshwr2_func_candi_pane

0x77d1,	// (0x00014c58) fshwr2_hwr_syb_pane

0x77eb,	// (0x00014c72) fshwr2_icf_pane

0x5702,	// (0x00012b89) fshwr2_icf_bg_pane

0x7819,	// (0x00014ca0) fshwr2_icf_pane_t1_ParamLimits

0x7819,	// (0x00014ca0) fshwr2_icf_pane_t1

0x42e6,	// (0x0001176d) fshwr2_func_candi_pane_g1

0xeb9f,	// (0x0001c026) fshwr2_func_candi_row_pane_ParamLimits

0xeb9f,	// (0x0001c026) fshwr2_func_candi_row_pane

0x7832,	// (0x00014cb9) cell_fshwr2_syb_pane_ParamLimits

0x7832,	// (0x00014cb9) cell_fshwr2_syb_pane

0x7855,	// (0x00014cdc) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7855,	// (0x00014cdc) fshwr2_hwr_syb_pane_g1

0x5702,	// (0x00012b89) bg_popup_call_pane_cp01

0x7863,	// (0x00014cea) fshwr2_func_candi_cell_pane_ParamLimits

0x7863,	// (0x00014cea) fshwr2_func_candi_cell_pane

0x9f3e,	// (0x000173c5) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9f3e,	// (0x000173c5) fshwr2_func_candi_cell_bg_pane

0x78ae,	// (0x00014d35) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x78ae,	// (0x00014d35) fshwr2_func_candi_cell_pane_g1

0x78ce,	// (0x00014d55) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x78ce,	// (0x00014d55) fshwr2_func_candi_cell_pane_t1

0x5702,	// (0x00012b89) bg_button_pane_cp08

0x4b50,	// (0x00011fd7) cell_fshwr2_syb_bg_pane

0x78e1,	// (0x00014d68) cell_fshwr2_syb_bg_pane_g1

0x78f5,	// (0x00014d7c) cell_fshwr2_syb_bg_pane_t1

0x3c71,	// (0x000110f8) main_tmo_pane

0xa3d7,	// (0x0001785e) uni_indicator_pane_g1_ParamLimits

0xa3ea,	// (0x00017871) uni_indicator_pane_g2_ParamLimits

0xa3fc,	// (0x00017883) uni_indicator_pane_g3_ParamLimits

0xa40b,	// (0x00017892) uni_indicator_pane_g4_ParamLimits

0xa40b,	// (0x00017892) uni_indicator_pane_g4

0xa41f,	// (0x000178a6) uni_indicator_pane_g5_ParamLimits

0xa41f,	// (0x000178a6) uni_indicator_pane_g5

0xa41f,	// (0x000178a6) uni_indicator_pane_g6_ParamLimits

0xa41f,	// (0x000178a6) uni_indicator_pane_g6

0xf8ed,	// (0x0001cd74) uni_indicator_pane_g_ParamLimits

0xd4fd,	// (0x0001a984) popup_tmo_note_window_ParamLimits

0xd4fd,	// (0x0001a984) popup_tmo_note_window

0x6fd7,	// (0x0001445e) fshwr2_bg_pane

0x78bf,	// (0x00014d46) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x78bf,	// (0x00014d46) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea2,	// (0x0001d329) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea2,	// (0x0001d329) fshwr2_func_candi_cell_pane_g

0x6d26,	// (0x000141ad) bg_popup_window_pane_cp01

0x790b,	// (0x00014d92) bg_popup_window_pane_g1_cp01

0xebc6,	// (0x0001c04d) bg_popup_window_pane_cp22_ParamLimits

0xebc6,	// (0x0001c04d) bg_popup_window_pane_cp22

0xebd4,	// (0x0001c05b) listscroll_tmo_link_pane_ParamLimits

0xebd4,	// (0x0001c05b) listscroll_tmo_link_pane

0xec14,	// (0x0001c09b) popup_tmo_note_window_g1_ParamLimits

0xec14,	// (0x0001c09b) popup_tmo_note_window_g1

0xec21,	// (0x0001c0a8) tmo_note_info_pane_ParamLimits

0xec21,	// (0x0001c0a8) tmo_note_info_pane

0xec3b,	// (0x0001c0c2) list_tmo_note_info_pane_g1_ParamLimits

0xec3b,	// (0x0001c0c2) list_tmo_note_info_pane_g1

0xec52,	// (0x0001c0d9) list_tmo_note_info_pane_g2_ParamLimits

0xec52,	// (0x0001c0d9) list_tmo_note_info_pane_g2

0x0001,

0xfea7,	// (0x0001d32e) list_tmo_note_info_pane_g_ParamLimits

0xfea7,	// (0x0001d32e) list_tmo_note_info_pane_g

0xec6e,	// (0x0001c0f5) list_tmo_note_info_text_pane_ParamLimits

0xec6e,	// (0x0001c0f5) list_tmo_note_info_text_pane

0xecef,	// (0x0001c176) list_tmo_link_pane

0xecfc,	// (0x0001c183) scroll_pane_cp20

0xed09,	// (0x0001c190) list_single_tmo_link_pane_ParamLimits

0xed09,	// (0x0001c190) list_single_tmo_link_pane

0xed19,	// (0x0001c1a0) list_single_tmo_link_pane_t1

0xed27,	// (0x0001c1ae) list_tmo_note_info_text_pane_t1_ParamLimits

0xed27,	// (0x0001c1ae) list_tmo_note_info_text_pane_t1

0x862d,	// (0x00015ab4) aid_size_touch_scroll_bar_cp01_ParamLimits

0x862d,	// (0x00015ab4) aid_size_touch_scroll_bar_cp01

0x852f,	// (0x000159b6) aid_size_touch_slider_marker

0x583d,	// (0x00012cc4) popup_settings_window_ParamLimits

0x583d,	// (0x00012cc4) popup_settings_window

0x4b8c,	// (0x00012013) popup_candi_list_indi_window

0x8c8e,	// (0x00016115) aid_touch_navi_pane_ParamLimits

0x6f32,	// (0x000143b9) rs_clock_indi_pane

0x6f3b,	// (0x000143c2) sctrl_sk_bottom_pane_ParamLimits

0x6f4c,	// (0x000143d3) sctrl_sk_top_pane_ParamLimits

0x704f,	// (0x000144d6) popup_fep_tooltip_window

0xe659,	// (0x0001bae0) aid_size_cell_widget_grid_ParamLimits

0xe6ce,	// (0x0001bb55) cell_ai5_widget_pane_g1_ParamLimits

0xe6ce,	// (0x0001bb55) cell_ai5_widget_pane_g1

0xe731,	// (0x0001bbb8) cell_ai5_widget_pane_g6_ParamLimits

0xe73d,	// (0x0001bbc4) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1b,	// (0x0001d2a2) cell_ai5_widget_pane_g_ParamLimits

0xfe1b,	// (0x0001d2a2) cell_ai5_widget_pane_g

0xe8ad,	// (0x0001bd34) cell_ai5_widget_pane_t10_ParamLimits

0xe8ad,	// (0x0001bd34) cell_ai5_widget_pane_t10

0xe8f0,	// (0x0001bd77) grid_ai5_widget_pane_ParamLimits

0xe988,	// (0x0001be0f) cell_contacts_ai5_widget_pane_ParamLimits

0xe988,	// (0x0001be0f) cell_contacts_ai5_widget_pane

0xeb62,	// (0x0001bfe9) popup_discreet_window_t3_ParamLimits

0xeb62,	// (0x0001bfe9) popup_discreet_window_t3

0x7803,	// (0x00014c8a) popup_fshwr2_char_preview_window_ParamLimits

0x7803,	// (0x00014c8a) popup_fshwr2_char_preview_window

0xec8c,	// (0x0001c113) tmo_note_info_pane_t1

0xeca1,	// (0x0001c128) tmo_note_info_pane_t2

0xecb6,	// (0x0001c13d) tmo_note_info_pane_t3

0xeccb,	// (0x0001c152) tmo_note_info_pane_t4

0xecdd,	// (0x0001c164) tmo_note_info_pane_t5

0x0004,

0xfeac,	// (0x0001d333) tmo_note_info_pane_t

0xecef,	// (0x0001c176) list_tmo_link_pane_ParamLimits

0xecfc,	// (0x0001c183) scroll_pane_cp20_ParamLimits

0x5702,	// (0x00012b89) bg_popup_fep_char_preview_window_cp01

0xed40,	// (0x0001c1c7) popup_fshwr2_char_preview_window_t1

0xed4e,	// (0x0001c1d5) popup_candi_list_indi_window_g1

0xed57,	// (0x0001c1de) bg_cell_contacts_ai5_widget_pane

0xed63,	// (0x0001c1ea) cell_contacts_ai5_widget_pane_g1

0xc53b,	// (0x000199c2) cell_contacts_ai5_widget_pane_g2

0xed78,	// (0x0001c1ff) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb7,	// (0x0001d33e) cell_contacts_ai5_widget_pane_g

0xed84,	// (0x0001c20b) cell_contacts_ai5_widget_pane_t1

0x3c71,	// (0x000110f8) highlight_cell_shortcut_ai5_widget_pane_cp01

0xedfb,	// (0x0001c282) settings_container_pane

0x4914,	// (0x00011d9b) listscroll_set_pane_copy1

0xb074,	// (0x000184fb) scroll_pane_cp121_copy1

0x9687,	// (0x00016b0e) set_content_pane_copy1

0xee07,	// (0x0001c28e) aid_height_set_list_copy1_ParamLimits

0xee07,	// (0x0001c28e) aid_height_set_list_copy1

0xa629,	// (0x00017ab0) aid_size_parent_copy1_ParamLimits

0xa629,	// (0x00017ab0) aid_size_parent_copy1

0xee13,	// (0x0001c29a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee13,	// (0x0001c29a) button_value_adjust_pane_cp6_copy1

0x4b50,	// (0x00011fd7) list_highlight_pane_cp2_copy1_ParamLimits

0x4b50,	// (0x00011fd7) list_highlight_pane_cp2_copy1

0xee27,	// (0x0001c2ae) list_set_pane_copy1_ParamLimits

0xee27,	// (0x0001c2ae) list_set_pane_copy1

0xed96,	// (0x0001c21d) main_pane_set_t1_copy1_ParamLimits

0xed96,	// (0x0001c21d) main_pane_set_t1_copy1

0xedd0,	// (0x0001c257) main_pane_set_t2_copy1_ParamLimits

0xedd0,	// (0x0001c257) main_pane_set_t2_copy1

0xeed4,	// (0x0001c35b) main_pane_set_t3_copy1

0xeee2,	// (0x0001c369) main_pane_set_t4_copy1

0xedef,	// (0x0001c276) set_content_pane_g1_copy1_ParamLimits

0xedef,	// (0x0001c276) set_content_pane_g1_copy1

0xeef0,	// (0x0001c377) setting_code_pane_copy1

0xeef8,	// (0x0001c37f) setting_slider_graphic_pane_copy1

0xeef8,	// (0x0001c37f) setting_slider_pane_copy1

0xef00,	// (0x0001c387) setting_text_pane_copy1

0xef00,	// (0x0001c387) setting_volume_pane_copy1

0xeef0,	// (0x0001c377) settings_code_pane_cp2_copy1

0xef08,	// (0x0001c38f) settings_code_pane_cp_copy1_ParamLimits

0xef08,	// (0x0001c38f) settings_code_pane_cp_copy1

0x7914,	// (0x00014d9b) volume_set_pane_copy1

0xef1c,	// (0x0001c3a3) volume_set_pane_g10_copy1

0xef24,	// (0x0001c3ab) volume_set_pane_g1_copy1

0xef2c,	// (0x0001c3b3) volume_set_pane_g2_copy1

0xef34,	// (0x0001c3bb) volume_set_pane_g3_copy1

0xef3c,	// (0x0001c3c3) volume_set_pane_g4_copy1

0xef44,	// (0x0001c3cb) volume_set_pane_g5_copy1

0xef4c,	// (0x0001c3d3) volume_set_pane_g6_copy1

0xef54,	// (0x0001c3db) volume_set_pane_g7_copy1

0xef5c,	// (0x0001c3e3) volume_set_pane_g8_copy1

0xef64,	// (0x0001c3eb) volume_set_pane_g9_copy1

0x384f,	// (0x00010cd6) bg_set_opt_pane_cp_copy1_ParamLimits

0x384f,	// (0x00010cd6) bg_set_opt_pane_cp_copy1

0x791c,	// (0x00014da3) setting_slider_pane_t1_copy1_ParamLimits

0x791c,	// (0x00014da3) setting_slider_pane_t1_copy1

0x793b,	// (0x00014dc2) setting_slider_pane_t2_copy1_ParamLimits

0x793b,	// (0x00014dc2) setting_slider_pane_t2_copy1

0x7955,	// (0x00014ddc) setting_slider_pane_t3_copy1_ParamLimits

0x7955,	// (0x00014ddc) setting_slider_pane_t3_copy1

0x796d,	// (0x00014df4) slider_set_pane_copy1_ParamLimits

0x796d,	// (0x00014df4) slider_set_pane_copy1

0x3d37,	// (0x000111be) set_opt_bg_pane_g1_copy2

0x3d3f,	// (0x000111c6) set_opt_bg_pane_g2_copy2

0xef6c,	// (0x0001c3f3) set_opt_bg_pane_g3_copy2

0x3d4f,	// (0x000111d6) set_opt_bg_pane_g4_copy2

0x3d57,	// (0x000111de) set_opt_bg_pane_g5_copy2

0x3d5f,	// (0x000111e6) set_opt_bg_pane_g6_copy2

0xef76,	// (0x0001c3fd) set_opt_bg_pane_g7_copy2

0xef7e,	// (0x0001c405) set_opt_bg_pane_g8_copy2

0xef88,	// (0x0001c40f) set_opt_bg_pane_g9_copy2

0x7983,	// (0x00014e0a) aid_size_touch_slider_mark_copy1_ParamLimits

0x7983,	// (0x00014e0a) aid_size_touch_slider_mark_copy1

0xef92,	// (0x0001c419) slider_set_pane_g1_copy1

0x7997,	// (0x00014e1e) slider_set_pane_g2_copy1

0x691f,	// (0x00013da6) slider_set_pane_g3_copy1_ParamLimits

0x691f,	// (0x00013da6) slider_set_pane_g3_copy1

0x6933,	// (0x00013dba) slider_set_pane_g4_copy1_ParamLimits

0x6933,	// (0x00013dba) slider_set_pane_g4_copy1

0x694b,	// (0x00013dd2) slider_set_pane_g5_copy1_ParamLimits

0x694b,	// (0x00013dd2) slider_set_pane_g5_copy1

0x691f,	// (0x00013da6) slider_set_pane_g6_copy1_ParamLimits

0x691f,	// (0x00013da6) slider_set_pane_g6_copy1

0x799f,	// (0x00014e26) slider_set_pane_g7_copy1_ParamLimits

0x799f,	// (0x00014e26) slider_set_pane_g7_copy1

0x37d3,	// (0x00010c5a) bg_set_opt_pane_cp2_copy1

0xef9b,	// (0x0001c422) setting_slider_graphic_pane_g1_copy1

0xefa4,	// (0x0001c42b) setting_slider_graphic_pane_t1_copy1

0xefb4,	// (0x0001c43b) setting_slider_graphic_pane_t2_copy1

0xefc4,	// (0x0001c44b) slider_set_pane_cp_copy1

0xefd4,	// (0x0001c45b) input_focus_pane_cp1_copy1

0xefdd,	// (0x0001c464) list_set_text_pane_copy1

0xefe5,	// (0x0001c46c) setting_text_pane_g1_copy1

0xefee,	// (0x0001c475) set_text_pane_t1_copy1

0xefd4,	// (0x0001c45b) input_focus_pane_cp2_copy1

0xefe5,	// (0x0001c46c) setting_code_pane_g1_copy1

0xf009,	// (0x0001c490) setting_code_pane_t1_copy1

0xf017,	// (0x0001c49e) list_set_graphic_pane_copy1

0x37d3,	// (0x00010c5a) bg_set_opt_pane_cp4_copy1

0x46a6,	// (0x00011b2d) list_set_graphic_pane_g1_copy1_ParamLimits

0x46a6,	// (0x00011b2d) list_set_graphic_pane_g1_copy1

0xf02b,	// (0x0001c4b2) list_set_graphic_pane_g2_copy1

0x46be,	// (0x00011b45) list_set_graphic_pane_t1_copy1_ParamLimits

0x46be,	// (0x00011b45) list_set_graphic_pane_t1_copy1

0xbcdd,	// (0x00019164) rs_clock_indi_pane_g1

0xf033,	// (0x0001c4ba) rs_clock_indi_pane_t1

0xf041,	// (0x0001c4c8) rs_indi_pane

0xf049,	// (0x0001c4d0) rs_indi_pane_g1

0xf052,	// (0x0001c4d9) rs_indi_pane_g2

0xed4e,	// (0x0001c1d5) rs_indi_pane_g3

0x0002,

0xfebe,	// (0x0001d345) rs_indi_pane_g

0x4914,	// (0x00011d9b) bg_popup_preview_window_pane_cp03

0xf05b,	// (0x0001c4e2) popup_fep_tooltip_window_t1

0xcb5a,	// (0x00019fe1) popup_note2_window_g2_ParamLimits

0xcb5a,	// (0x00019fe1) popup_note2_window_g2

0x0001,

0xfc52,	// (0x0001d0d9) popup_note2_window_g_ParamLimits

0xfc52,	// (0x0001d0d9) popup_note2_window_g

0xd136,	// (0x0001a5bd) bg_popup_sub_pane_cp11_ParamLimits

0xd143,	// (0x0001a5ca) cell_ai3_links_pane_g1_ParamLimits

0xd15a,	// (0x0001a5e1) cell_ai3_links_pane_t1

0xefee,	// (0x0001c475) set_text_pane_t1_copy1_ParamLimits

0x8a44,	// (0x00015ecb) cell_graphic_popup_pane_cp2_ParamLimits

0x8a44,	// (0x00015ecb) cell_graphic_popup_pane_cp2

0xf069,	// (0x0001c4f0) cell_graphic_popup_pane_g1_cp2

0x3aed,	// (0x00010f74) cell_graphic_popup_pane_g2_cp2

0xf071,	// (0x0001c4f8) cell_graphic_popup_pane_g3_cp2

0xf079,	// (0x0001c500) cell_graphic_popup_pane_t2_cp2

0x3afe,	// (0x00010f85) grid_highlight_pane_cp3_cp2

0x4144,	// (0x000115cb) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3c71,	// (0x000110f8) main_tmo_pane_ParamLimits

0xd4f1,	// (0x0001a978) popup_tmo_big_image_note_window

0xe6bd,	// (0x0001bb44) cell_ai5_widget_list_pane

0xe6c5,	// (0x0001bb4c) cell_ai5_widget_lrg_icon_pane

0xec8c,	// (0x0001c113) tmo_note_info_pane_t1_ParamLimits

0xeca1,	// (0x0001c128) tmo_note_info_pane_t2_ParamLimits

0xecb6,	// (0x0001c13d) tmo_note_info_pane_t3_ParamLimits

0xeccb,	// (0x0001c152) tmo_note_info_pane_t4_ParamLimits

0xecdd,	// (0x0001c164) tmo_note_info_pane_t5_ParamLimits

0xfeac,	// (0x0001d333) tmo_note_info_pane_t_ParamLimits

0xedfb,	// (0x0001c282) settings_container_pane_ParamLimits

0xefcc,	// (0x0001c453) indicator_popup_pane_cp5

0xefcc,	// (0x0001c453) indicator_popup_pane_cp6

0xf017,	// (0x0001c49e) list_set_graphic_pane_copy1_ParamLimits

0x3650,	// (0x00010ad7) bg_popup_window_pane_cp23

0xf087,	// (0x0001c50e) popup_tmo_big_image_note_window_g1

0xf090,	// (0x0001c517) popup_tmo_big_image_note_window_t1

0xf0a0,	// (0x0001c527) popup_tmo_big_image_note_window_t2

0xf0b0,	// (0x0001c537) popup_tmo_big_image_note_window_t3

0x0002,

0xfec5,	// (0x0001d34c) popup_tmo_big_image_note_window_t

0xbcdd,	// (0x00019164) cell_ai5_widget_lrg_icon_pane_g1

0xf0c0,	// (0x0001c547) cell_ai5_widget_lrg_icon_pane_t1

0xf0ce,	// (0x0001c555) cell_ai5_widget_list_row_pane_ParamLimits

0xf0ce,	// (0x0001c555) cell_ai5_widget_list_row_pane

0xf0e5,	// (0x0001c56c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0e5,	// (0x0001c56c) cell_ai5_widget_list_row_pane_g1

0xf0f2,	// (0x0001c579) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0f2,	// (0x0001c579) cell_ai5_widget_list_row_pane_t1

0xf11d,	// (0x0001c5a4) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf11d,	// (0x0001c5a4) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecc,	// (0x0001d353) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecc,	// (0x0001d353) cell_ai5_widget_list_row_pane_t

0x5702,	// (0x00012b89) main_fep_vtchi_ss_pane

0xf16d,	// (0x0001c5f4) popup_fep_char_pre_window

0xf175,	// (0x0001c5fc) popup_fep_ituss_window

0xf1a1,	// (0x0001c628) popup_fep_vkbss_window

0x4b50,	// (0x00011fd7) grid_vkbss_keypad_pane_ParamLimits

0x4b50,	// (0x00011fd7) grid_vkbss_keypad_pane

0xf1e1,	// (0x0001c668) ituss_keypad_pane

0x79c1,	// (0x00014e48) aid_vkbss_key_offset_ParamLimits

0x79c1,	// (0x00014e48) aid_vkbss_key_offset

0x79cd,	// (0x00014e54) cell_vkbss_key_pane_ParamLimits

0x79cd,	// (0x00014e54) cell_vkbss_key_pane

0xf1f0,	// (0x0001c677) bg_cell_vkbss_key_g1_ParamLimits

0xf1f0,	// (0x0001c677) bg_cell_vkbss_key_g1

0xf1fc,	// (0x0001c683) cell_vkbss_key_3p_pane_ParamLimits

0xf1fc,	// (0x0001c683) cell_vkbss_key_3p_pane

0xf232,	// (0x0001c6b9) cell_vkbss_key_g1_ParamLimits

0xf232,	// (0x0001c6b9) cell_vkbss_key_g1

0xf268,	// (0x0001c6ef) cell_vkbss_key_t1_ParamLimits

0xf268,	// (0x0001c6ef) cell_vkbss_key_t1

0x7a01,	// (0x00014e88) cell_ituss_key_pane_ParamLimits

0x7a01,	// (0x00014e88) cell_ituss_key_pane

0xf2c4,	// (0x0001c74b) bg_cell_ituss_key_g1_ParamLimits

0xf2c4,	// (0x0001c74b) bg_cell_ituss_key_g1

0xf2d0,	// (0x0001c757) cell_ituss_key_pane_g1_ParamLimits

0xf2d0,	// (0x0001c757) cell_ituss_key_pane_g1

0x7a12,	// (0x00014e99) cell_ituss_key_pane_g2_ParamLimits

0x7a12,	// (0x00014e99) cell_ituss_key_pane_g2

0x0005,

0xfed3,	// (0x0001d35a) cell_ituss_key_pane_g_ParamLimits

0xfed3,	// (0x0001d35a) cell_ituss_key_pane_g

0x7a96,	// (0x00014f1d) cell_ituss_key_t1_ParamLimits

0x7a96,	// (0x00014f1d) cell_ituss_key_t1

0x7ad0,	// (0x00014f57) cell_ituss_key_t2_ParamLimits

0x7ad0,	// (0x00014f57) cell_ituss_key_t2

0x7b01,	// (0x00014f88) cell_ituss_key_t3_ParamLimits

0x7b01,	// (0x00014f88) cell_ituss_key_t3

0x7ad0,	// (0x00014f57) cell_ituss_key_t4_ParamLimits

0x7ad0,	// (0x00014f57) cell_ituss_key_t4

0x0004,

0xfee0,	// (0x0001d367) cell_ituss_key_t_ParamLimits

0xfee0,	// (0x0001d367) cell_ituss_key_t

0xf2f6,	// (0x0001c77d) cell_vkbss_key_3p_pane_g1

0xf2fe,	// (0x0001c785) cell_vkbss_key_3p_pane_g2

0xf306,	// (0x0001c78d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeeb,	// (0x0001d372) cell_vkbss_key_3p_pane_g

0x4914,	// (0x00011d9b) bg_popup_fep_char_preview_window_cp02

0xf30e,	// (0x0001c795) popup_fep_char_pre_window_t1

0xe646,	// (0x0001bacd) main_ai5_sk_pane

0xed57,	// (0x0001c1de) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed63,	// (0x0001c1ea) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc53b,	// (0x000199c2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed78,	// (0x0001c1ff) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb7,	// (0x0001d33e) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed84,	// (0x0001c20b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3c71,	// (0x000110f8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf31c,	// (0x0001c7a3) main_ai5_sk_pane_g1

0x9723,	// (0x00016baa) popup_query_code_window_g1

0xf18b,	// (0x0001c612) popup_fep_vkb_icf_pane

0xf1b8,	// (0x0001c63f) popup_fep_vtchi_icf_pane

0x4b50,	// (0x00011fd7) bg_icf_pane

0x4b50,	// (0x00011fd7) list_vkb_icf_pane

0xf325,	// (0x0001c7ac) bg_icf_pane_cp01

0xf338,	// (0x0001c7bf) vtchi_icf_list_pane

0xf3a0,	// (0x0001c827) list_vkb_icf_pane_t1_ParamLimits

0xf3a0,	// (0x0001c827) list_vkb_icf_pane_t1

0xf3c2,	// (0x0001c849) vtchi_icf_list_pane_t1_ParamLimits

0xf3c2,	// (0x0001c849) vtchi_icf_list_pane_t1

0xf175,	// (0x0001c5fc) popup_fep_ituss_window_ParamLimits

0xf1b8,	// (0x0001c63f) popup_fep_vtchi_icf_pane_ParamLimits

0xf1e1,	// (0x0001c668) ituss_keypad_pane_ParamLimits

0x79b5,	// (0x00014e3c) ituss_sks_pane

0x4b50,	// (0x00011fd7) bg_icf_pane_ParamLimits

0xf145,	// (0x0001c5cc) icf_edit_indi_pane_ParamLimits

0xf145,	// (0x0001c5cc) icf_edit_indi_pane

0x4b50,	// (0x00011fd7) list_vkb_icf_pane_ParamLimits

0xf325,	// (0x0001c7ac) bg_icf_pane_cp01_ParamLimits

0xf160,	// (0x0001c5e7) icf_edit_indi_pane_cp01_ParamLimits

0xf160,	// (0x0001c5e7) icf_edit_indi_pane_cp01

0xf340,	// (0x0001c7c7) vtchi_query_pane

0xe4c2,	// (0x0001b949) icf_edit_indi_pane_g1_ParamLimits

0xe4c2,	// (0x0001b949) icf_edit_indi_pane_g1

0xf43a,	// (0x0001c8c1) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0001c8c1) icf_edit_indi_pane_g2

0x0001,

0xff16,	// (0x0001d39d) icf_edit_indi_pane_g_ParamLimits

0xff16,	// (0x0001d39d) icf_edit_indi_pane_g

0xf44e,	// (0x0001c8d5) icf_edit_indi_pane_t1

0xf3e3,	// (0x0001c86a) bg_input_focus_pane_cp042

0x3b61,	// (0x00010fe8) vtchi_button_pane

0xf3ec,	// (0x0001c873) vtchi_query_pane_t1

0xf3fa,	// (0x0001c881) vtchi_query_pane_t2

0xf408,	// (0x0001c88f) vtchi_query_pane_t3

0x0002,

0xff05,	// (0x0001d38c) vtchi_query_pane_t

0x5702,	// (0x00012b89) bg_button_pane_cp13

0xf416,	// (0x0001c89d) vtchi_button_pane_g1

0x7b44,	// (0x00014fcb) ituss_sks_pane_g1

0x7b4f,	// (0x00014fd6) ituss_sks_pane_g2

0x0001,

0xff0c,	// (0x0001d393) ituss_sks_pane_g

0xf41e,	// (0x0001c8a5) ituss_sks_pane_t1

0xf42c,	// (0x0001c8b3) ituss_sks_pane_t2

0x0001,

0xff11,	// (0x0001d398) ituss_sks_pane_t

0xb704,	// (0x00018b8b) indicator_nsta_pane_cp_g1

0xb70d,	// (0x00018b94) indicator_nsta_pane_cp_g2

0xb715,	// (0x00018b9c) indicator_nsta_pane_cp_g3

0xb71d,	// (0x00018ba4) indicator_nsta_pane_cp_g4

0xb70d,	// (0x00018b94) indicator_nsta_pane_cp_g5

0xb715,	// (0x00018b9c) indicator_nsta_pane_cp_g6

0x0005,

0xfa90,	// (0x0001cf17) indicator_nsta_pane_cp_g

0xe212,	// (0x0001b699) cell_graphic2_pane_t2_ParamLimits

0xe212,	// (0x0001b699) cell_graphic2_pane_t2

0x0001,

0xfda2,	// (0x0001d229) cell_graphic2_pane_t_ParamLimits

0xfda2,	// (0x0001d229) cell_graphic2_pane_t

0xe23e,	// (0x0001b6c5) cell_graphic2_control_pane_t1

0x88a1,	// (0x00015d28) signal_pane_g3_ParamLimits

0x88a1,	// (0x00015d28) signal_pane_g3

0x88b3,	// (0x00015d3a) signal_pane_g4_ParamLimits

0x88b3,	// (0x00015d3a) signal_pane_g4

0xf12f,	// (0x0001c5b6) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf12f,	// (0x0001c5b6) cell_ai5_widget_list_row_pane_t3

0xf2e4,	// (0x0001c76b) cell_ituss_key_pane_t1_ParamLimits

0xf2e4,	// (0x0001c76b) cell_ituss_key_pane_t1

0x9315,	// (0x0001679c) form_field_data_wide_pane_vc_t2_ParamLimits

0x9315,	// (0x0001679c) form_field_data_wide_pane_vc_t2

0x9329,	// (0x000167b0) form_field_data_wide_pane_vc_t3_ParamLimits

0x9329,	// (0x000167b0) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d5,	// (0x0001cc5c) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d5,	// (0x0001cc5c) form_field_data_wide_pane_vc_t

0xb3ae,	// (0x00018835) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb3ae,	// (0x00018835) form_field_slider_wide_pane_vc_t3

0xb48c,	// (0x00018913) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb48c,	// (0x00018913) form_field_popup_wide_pane_vc_t2

0xb4a3,	// (0x0001892a) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb4a3,	// (0x0001892a) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7f,	// (0x0001cf06) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x0001cf06) form_field_popup_wide_pane_vc_t

0x7785,	// (0x00014c0c) aid_fshwr2_btn_pane_ParamLimits

0x7797,	// (0x00014c1e) aid_fshwr2_syb_pane_ParamLimits

0x77a9,	// (0x00014c30) aid_fshwr2_txt_pane_ParamLimits

0x6fd7,	// (0x0001445e) fshwr2_bg_pane_ParamLimits

0x77b5,	// (0x00014c3c) fshwr2_func_candi_pane_ParamLimits

0x77d1,	// (0x00014c58) fshwr2_hwr_syb_pane_ParamLimits

0x77eb,	// (0x00014c72) fshwr2_icf_pane_ParamLimits

0xb31f,	// (0x000187a6) list_double_graphic_pane_vc_g4_ParamLimits

0xb31f,	// (0x000187a6) list_double_graphic_pane_vc_g4

0x7a32,	// (0x00014eb9) cell_ituss_key_pane_g3_ParamLimits

0x7a32,	// (0x00014eb9) cell_ituss_key_pane_g3

0x7b32,	// (0x00014fb9) cell_ituss_key_t5_ParamLimits

0x7b32,	// (0x00014fb9) cell_ituss_key_t5

0xf1a1,	// (0x0001c628) popup_fep_vkbss_window_ParamLimits

0xe650,	// (0x0001bad7) aid_cell_ai5_quarter

0xf44e,	// (0x0001c8d5) icf_edit_indi_pane_t1_ParamLimits

0x7d56,	// (0x000151dd) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7d56,	// (0x000151dd) aid_tch_indicator_popup_pane_cp2

0x7d69,	// (0x000151f0) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7d69,	// (0x000151f0) aid_tch_query_popup_data_pane_cp2

0x96cb,	// (0x00016b52) aid_tch_query_popup_pane_ParamLimits

0x96cb,	// (0x00016b52) aid_tch_query_popup_pane

0x96cb,	// (0x00016b52) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x96cb,	// (0x00016b52) aid_tch_query_popup_data_pane_cp1

0x4b50,	// (0x00011fd7) cell_fshwr2_syb_bg_pane_ParamLimits

0x78e1,	// (0x00014d68) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x78f5,	// (0x00014d7c) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf18b,	// (0x0001c612) popup_fep_vkb_icf_pane_ParamLimits

0x75e5,	// (0x00014a6c) bg_popup_fep_char_preview_window_g10

0xe785,	// (0x0001bc0c) cell_ai5_widget_pane_g11_ParamLimits

0xe785,	// (0x0001bc0c) cell_ai5_widget_pane_g11

0xe791,	// (0x0001bc18) cell_ai5_widget_pane_g12_ParamLimits

0xe791,	// (0x0001bc18) cell_ai5_widget_pane_g12

0xe79d,	// (0x0001bc24) cell_ai5_widget_pane_g13_ParamLimits

0xe79d,	// (0x0001bc24) cell_ai5_widget_pane_g13

0xe8cc,	// (0x0001bd53) cell_ai5_widget_pane_t11_ParamLimits

0xe8cc,	// (0x0001bd53) cell_ai5_widget_pane_t11

0xe8de,	// (0x0001bd65) cell_ai5_widget_pane_t12_ParamLimits

0xe8de,	// (0x0001bd65) cell_ai5_widget_pane_t12

0x7a3e,	// (0x00014ec5) cell_ituss_key_pane_g4_ParamLimits

0x7a3e,	// (0x00014ec5) cell_ituss_key_pane_g4

0x7a5a,	// (0x00014ee1) cell_ituss_key_pane_g5_ParamLimits

0x7a5a,	// (0x00014ee1) cell_ituss_key_pane_g5

0x7a76,	// (0x00014efd) cell_ituss_key_pane_g6_ParamLimits

0x7a76,	// (0x00014efd) cell_ituss_key_pane_g6

0x9167,	// (0x000165ee) bg_icf_pane_g1

0xf348,	// (0x0001c7cf) bg_icf_pane_g2

0xf354,	// (0x0001c7db) bg_icf_pane_g3

0xf35e,	// (0x0001c7e5) bg_icf_pane_g4

0xf36a,	// (0x0001c7f1) bg_icf_pane_g5

0xf374,	// (0x0001c7fb) bg_icf_pane_g6

0xf380,	// (0x0001c807) bg_icf_pane_g7

0xf38a,	// (0x0001c811) bg_icf_pane_g8

0xf396,	// (0x0001c81d) bg_icf_pane_g9

0x0008,

0xfef2,	// (0x0001d379) bg_icf_pane_g

0xf1ce,	// (0x0001c655) popup_hyb_candi_window_ParamLimits

0xf1ce,	// (0x0001c655) popup_hyb_candi_window

0x9287,	// (0x0001670e) bg_popup_sub_pane_cp01_ParamLimits

0x9287,	// (0x0001670e) bg_popup_sub_pane_cp01

0xf467,	// (0x0001c8ee) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0001c8ee) entry_hyb_candi_pane

0xf476,	// (0x0001c8fd) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0001c8fd) grid_hyb_candi_pane

0xf48b,	// (0x0001c912) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0001c912) grid_hyb_phrase_pane

0xf49a,	// (0x0001c921) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0001c921) cell_hyb_candi_pane

0xf4bd,	// (0x0001c944) cell_hyb_candi_scroll_pane

0x42e6,	// (0x0001176d) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0001c94d) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0001c95b) cell_hyb_phrase_pane

0x42e6,	// (0x0001176d) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0001c964) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0001c972) entry_hyb_candi_pane_t1

0x4914,	// (0x00011d9b) input_focus_pane_cp06

0xf4f9,	// (0x0001c980) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0001c988) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0001c990) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0001c998) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0001c9a0) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0001c9a8) cell_hyb_candi_scroll_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal

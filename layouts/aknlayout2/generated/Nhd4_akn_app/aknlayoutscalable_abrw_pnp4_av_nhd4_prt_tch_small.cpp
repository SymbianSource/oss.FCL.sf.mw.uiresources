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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001fb90 };

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
0x95df,	// (0x0002916f) Screen

0x95eb,	// (0x0002917b) application_window_ParamLimits

0x95eb,	// (0x0002917b) application_window

0x1a16,	// (0x000215a6) screen_g1

0x9647,	// (0x000291d7) area_bottom_pane_ParamLimits

0x9647,	// (0x000291d7) area_bottom_pane

0x9707,	// (0x00029297) area_top_pane_ParamLimits

0x9707,	// (0x00029297) area_top_pane

0x97a5,	// (0x00029335) main_pane_ParamLimits

0x97a5,	// (0x00029335) main_pane

0x1b06,	// (0x00021696) misc_graphics

0xabc9,	// (0x0002a759) battery_pane_ParamLimits

0xabc9,	// (0x0002a759) battery_pane

0x5f02,	// (0x00025a92) bg_status_flat_pane_g8

0x5f0a,	// (0x00025a9a) bg_status_flat_pane_g9

0x568a,	// (0x0002521a) context_pane_ParamLimits

0x568a,	// (0x0002521a) context_pane

0xacfd,	// (0x0002a88d) navi_pane_ParamLimits

0xacfd,	// (0x0002a88d) navi_pane

0xad70,	// (0x0002a900) signal_pane_ParamLimits

0xad70,	// (0x0002a900) signal_pane

0x0008,

0xf87f,	// (0x0002f40f) bg_status_flat_pane_g

0xadd5,	// (0x0002a965) status_pane_g1_ParamLimits

0xadd5,	// (0x0002a965) status_pane_g1

0x693a,	// (0x000264ca) status_pane_g2_ParamLimits

0x693a,	// (0x000264ca) status_pane_g2

0x56ef,	// (0x0002527f) status_pane_g3_ParamLimits

0x56ef,	// (0x0002527f) status_pane_g3

0x0004,

0xf7a6,	// (0x0002f336) status_pane_g_ParamLimits

0xf7a6,	// (0x0002f336) status_pane_g

0xade1,	// (0x0002a971) title_pane_ParamLimits

0xade1,	// (0x0002a971) title_pane

0xae1e,	// (0x0002a9ae) uni_indicator_pane_ParamLimits

0xae1e,	// (0x0002a9ae) uni_indicator_pane

0x55b3,	// (0x00025143) bg_list_pane_ParamLimits

0x55b3,	// (0x00025143) bg_list_pane

0xdee7,	// (0x0002da77) find_pane

0xa5bb,	// (0x0002a14b) listscroll_app_pane_ParamLimits

0xa5bb,	// (0x0002a14b) listscroll_app_pane

0x55db,	// (0x0002516b) listscroll_form_pane

0x9561,	// (0x000290f1) listscroll_gen_pane_ParamLimits

0x9561,	// (0x000290f1) listscroll_gen_pane

0xa5c7,	// (0x0002a157) listscroll_set_pane

0x9d6a,	// (0x000298fa) main_idle_act_pane

0x5397,	// (0x00024f27) main_idle_trad_pane

0x5397,	// (0x00024f27) main_list_empty_pane

0x4abb,	// (0x0002464b) main_midp_pane

0x5607,	// (0x00025197) main_pane_g1_ParamLimits

0x5607,	// (0x00025197) main_pane_g1

0xa5dd,	// (0x0002a16d) popup_ai_message_window_ParamLimits

0xa5dd,	// (0x0002a16d) popup_ai_message_window

0xa681,	// (0x0002a211) popup_fep_china_uni_window_ParamLimits

0xa681,	// (0x0002a211) popup_fep_china_uni_window

0xa6db,	// (0x0002a26b) popup_fep_japan_candidate_window_ParamLimits

0xa6db,	// (0x0002a26b) popup_fep_japan_candidate_window

0xa6f9,	// (0x0002a289) popup_fep_japan_predictive_window_ParamLimits

0xa6f9,	// (0x0002a289) popup_fep_japan_predictive_window

0xa729,	// (0x0002a2b9) popup_find_window

0xa736,	// (0x0002a2c6) popup_grid_graphic_window_ParamLimits

0xa736,	// (0x0002a2c6) popup_grid_graphic_window

0xa75e,	// (0x0002a2ee) popup_large_graphic_colour_window

0xa784,	// (0x0002a314) popup_menu_window_ParamLimits

0xa784,	// (0x0002a314) popup_menu_window

0xa93e,	// (0x0002a4ce) popup_note_image_window

0xa92a,	// (0x0002a4ba) popup_note_wait_window_ParamLimits

0xa92a,	// (0x0002a4ba) popup_note_wait_window

0xa92a,	// (0x0002a4ba) popup_note_window_ParamLimits

0xa92a,	// (0x0002a4ba) popup_note_window

0xa994,	// (0x0002a524) popup_query_code_window_ParamLimits

0xa994,	// (0x0002a524) popup_query_code_window

0xa9a8,	// (0x0002a538) popup_query_data_code_window_ParamLimits

0xa9a8,	// (0x0002a538) popup_query_data_code_window

0xa9c3,	// (0x0002a553) popup_query_data_window_ParamLimits

0xa9c3,	// (0x0002a553) popup_query_data_window

0xa9dd,	// (0x0002a56d) popup_query_sat_info_window_ParamLimits

0xa9dd,	// (0x0002a56d) popup_query_sat_info_window

0xaa16,	// (0x0002a5a6) popup_snote_single_graphic_window_ParamLimits

0xaa16,	// (0x0002a5a6) popup_snote_single_graphic_window

0xaa16,	// (0x0002a5a6) popup_snote_single_text_window_ParamLimits

0xaa16,	// (0x0002a5a6) popup_snote_single_text_window

0xaa2b,	// (0x0002a5bb) popup_sub_window_general

0xab59,	// (0x0002a6e9) popup_window_general_ParamLimits

0xab59,	// (0x0002a6e9) popup_window_general

0x5615,	// (0x000251a5) power_save_pane

0xa432,	// (0x00029fc2) control_pane_g1_ParamLimits

0xa432,	// (0x00029fc2) control_pane_g1

0xa459,	// (0x00029fe9) control_pane_g2_ParamLimits

0xa459,	// (0x00029fe9) control_pane_g2

0x559d,	// (0x0002512d) control_pane_g3_ParamLimits

0x559d,	// (0x0002512d) control_pane_g3

0x0007,

0xf78e,	// (0x0002f31e) control_pane_g_ParamLimits

0xf78e,	// (0x0002f31e) control_pane_g

0xa4c8,	// (0x0002a058) control_pane_t1_ParamLimits

0xa4c8,	// (0x0002a058) control_pane_t1

0xa514,	// (0x0002a0a4) control_pane_t2_ParamLimits

0xa514,	// (0x0002a0a4) control_pane_t2

0x0002,

0xf79f,	// (0x0002f32f) control_pane_t_ParamLimits

0xf79f,	// (0x0002f32f) control_pane_t

0x54be,	// (0x0002504e) navi_navi_volume_pane_cp1

0x54c7,	// (0x00025057) status_small_icon_pane

0x54cf,	// (0x0002505f) status_small_pane_g1_ParamLimits

0x54cf,	// (0x0002505f) status_small_pane_g1

0x5503,	// (0x00025093) status_small_pane_g2_ParamLimits

0x5503,	// (0x00025093) status_small_pane_g2

0x550f,	// (0x0002509f) status_small_pane_g3_ParamLimits

0x550f,	// (0x0002509f) status_small_pane_g3

0x551b,	// (0x000250ab) status_small_pane_g4_ParamLimits

0x551b,	// (0x000250ab) status_small_pane_g4

0x5527,	// (0x000250b7) status_small_pane_g5_ParamLimits

0x5527,	// (0x000250b7) status_small_pane_g5

0x5536,	// (0x000250c6) status_small_pane_g6_ParamLimits

0x5536,	// (0x000250c6) status_small_pane_g6

0x0007,

0xf77d,	// (0x0002f30d) status_small_pane_g_ParamLimits

0xf77d,	// (0x0002f30d) status_small_pane_g

0x5566,	// (0x000250f6) status_small_pane_t1

0x5589,	// (0x00025119) status_small_wait_pane_ParamLimits

0x5589,	// (0x00025119) status_small_wait_pane

0xa086,	// (0x00029c16) aid_levels_signal_ParamLimits

0xa086,	// (0x00029c16) aid_levels_signal

0xa098,	// (0x00029c28) signal_pane_g1_ParamLimits

0xa098,	// (0x00029c28) signal_pane_g1

0xa0ad,	// (0x00029c3d) signal_pane_g2_ParamLimits

0xa0ad,	// (0x00029c3d) signal_pane_g2

0x0003,

0xf70e,	// (0x0002f29e) signal_pane_g_ParamLimits

0xf70e,	// (0x0002f29e) signal_pane_g

0x4edd,	// (0x00024a6d) context_pane_g1

0x99e6,	// (0x00029576) title_pane_g1

0x9a10,	// (0x000295a0) title_pane_t1

0x1c3c,	// (0x000217cc) title_pane_t2

0x1c62,	// (0x000217f2) title_pane_t3

0x0002,

0xf55d,	// (0x0002f0ed) title_pane_t

0xae36,	// (0x0002a9c6) aid_levels_battery_ParamLimits

0xae36,	// (0x0002a9c6) aid_levels_battery

0xae4a,	// (0x0002a9da) battery_pane_g1_ParamLimits

0xae4a,	// (0x0002a9da) battery_pane_g1

0xae60,	// (0x0002a9f0) battery_pane_g2_ParamLimits

0xae60,	// (0x0002a9f0) battery_pane_g2

0x0001,

0xf7b1,	// (0x0002f341) battery_pane_g_ParamLimits

0xf7b1,	// (0x0002f341) battery_pane_g

0xb325,	// (0x0002aeb5) uni_indicator_pane_g1

0xb33c,	// (0x0002aecc) uni_indicator_pane_g2

0xb34f,	// (0x0002aedf) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x0002f4b7) uni_indicator_pane_g

0x5215,	// (0x00024da5) navi_icon_pane_ParamLimits

0x5215,	// (0x00024da5) navi_icon_pane

0x515e,	// (0x00024cee) navi_midp_pane

0x5231,	// (0x00024dc1) navi_navi_pane

0x523b,	// (0x00024dcb) navi_text_pane_ParamLimits

0x523b,	// (0x00024dcb) navi_text_pane

0x1a16,	// (0x000215a6) status_small_wait_pane_g1

0x1f4d,	// (0x00021add) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x0002f4b2) status_small_wait_pane_g

0x64bf,	// (0x0002604f) navi_navi_icon_text_pane

0x64d9,	// (0x00026069) navi_navi_pane_g1_ParamLimits

0x64d9,	// (0x00026069) navi_navi_pane_g1

0x64c7,	// (0x00026057) navi_navi_pane_g2_ParamLimits

0x64c7,	// (0x00026057) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x0002f480) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x0002f480) navi_navi_pane_g

0x64eb,	// (0x0002607b) navi_navi_tabs_pane

0x64f4,	// (0x00026084) navi_navi_text_pane

0x64bf,	// (0x0002604f) navi_navi_volume_pane

0x649b,	// (0x0002602b) navi_text_pane_t1

0x648f,	// (0x0002601f) navi_icon_pane_g1

0x63e2,	// (0x00025f72) navi_navi_text_pane_t1

0xb2ed,	// (0x0002ae7d) navi_navi_volume_pane_g1

0xb2f5,	// (0x0002ae85) volume_small_pane

0xb26d,	// (0x0002adfd) navi_navi_icon_text_pane_g1

0x63c8,	// (0x00025f58) navi_navi_icon_text_pane_t1

0x5231,	// (0x00024dc1) navi_tabs_2_long_pane

0x5231,	// (0x00024dc1) navi_tabs_2_pane

0x5231,	// (0x00024dc1) navi_tabs_3_long_pane

0x5231,	// (0x00024dc1) navi_tabs_3_pane

0x5231,	// (0x00024dc1) navi_tabs_4_pane

0xb24d,	// (0x0002addd) tabs_2_active_pane_ParamLimits

0xb24d,	// (0x0002addd) tabs_2_active_pane

0xb25d,	// (0x0002aded) tabs_2_passive_pane_ParamLimits

0xb25d,	// (0x0002aded) tabs_2_passive_pane

0xb21b,	// (0x0002adab) tabs_3_active_pane_ParamLimits

0xb21b,	// (0x0002adab) tabs_3_active_pane

0xb22b,	// (0x0002adbb) tabs_3_passive_pane_ParamLimits

0xb22b,	// (0x0002adbb) tabs_3_passive_pane

0xb23c,	// (0x0002adcc) tabs_3_passive_pane_cp_ParamLimits

0xb23c,	// (0x0002adcc) tabs_3_passive_pane_cp

0xb1d7,	// (0x0002ad67) tabs_4_active_pane_ParamLimits

0xb1d7,	// (0x0002ad67) tabs_4_active_pane

0xb1e8,	// (0x0002ad78) tabs_4_passive_pane_ParamLimits

0xb1e8,	// (0x0002ad78) tabs_4_passive_pane

0xb1f9,	// (0x0002ad89) tabs_4_passive_pane_cp_ParamLimits

0xb1f9,	// (0x0002ad89) tabs_4_passive_pane_cp

0xb20a,	// (0x0002ad9a) tabs_4_passive_pane_cp2_ParamLimits

0xb20a,	// (0x0002ad9a) tabs_4_passive_pane_cp2

0xb1b3,	// (0x0002ad43) tabs_2_long_active_pane_ParamLimits

0xb1b3,	// (0x0002ad43) tabs_2_long_active_pane

0xb1c5,	// (0x0002ad55) tabs_2_long_passive_pane_ParamLimits

0xb1c5,	// (0x0002ad55) tabs_2_long_passive_pane

0xb17a,	// (0x0002ad0a) tabs_3_long_active_pane_ParamLimits

0xb17a,	// (0x0002ad0a) tabs_3_long_active_pane

0xb18d,	// (0x0002ad1d) tabs_3_long_passive_pane_ParamLimits

0xb18d,	// (0x0002ad1d) tabs_3_long_passive_pane

0xb1a0,	// (0x0002ad30) tabs_3_long_passive_pane_cp_ParamLimits

0xb1a0,	// (0x0002ad30) tabs_3_long_passive_pane_cp

0xb120,	// (0x0002acb0) volume_small_pane_g1

0xb129,	// (0x0002acb9) volume_small_pane_g2

0xb132,	// (0x0002acc2) volume_small_pane_g3

0xb13b,	// (0x0002accb) volume_small_pane_g4

0xb144,	// (0x0002acd4) volume_small_pane_g5

0xb14d,	// (0x0002acdd) volume_small_pane_g6

0xb156,	// (0x0002ace6) volume_small_pane_g7

0xb15f,	// (0x0002acef) volume_small_pane_g8

0xb168,	// (0x0002acf8) volume_small_pane_g9

0xb171,	// (0x0002ad01) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x0002f44c) volume_small_pane_g

0x1c92,	// (0x00021822) bg_active_tab_pane_cp2_ParamLimits

0x1c92,	// (0x00021822) bg_active_tab_pane_cp2

0x1c82,	// (0x00021812) tabs_3_active_pane_g1

0x9a78,	// (0x00029608) tabs_3_active_pane_t1

0x1c92,	// (0x00021822) bg_passive_tab_pane_cp2_ParamLimits

0x1c92,	// (0x00021822) bg_passive_tab_pane_cp2

0x1c82,	// (0x00021812) tabs_3_passive_pane_g1

0x9a78,	// (0x00029608) tabs_3_passive_pane_t1

0x1c92,	// (0x00021822) bg_active_tab_pane_cp3_ParamLimits

0x1c92,	// (0x00021822) bg_active_tab_pane_cp3

0x1c8a,	// (0x0002181a) tabs_4_active_pane_g1

0x9a8a,	// (0x0002961a) tabs_4_active_pane_t1

0x1c92,	// (0x00021822) bg_passive_tab_pane_cp3_ParamLimits

0x1c92,	// (0x00021822) bg_passive_tab_pane_cp3

0x1c8a,	// (0x0002181a) tabs_4_1_passive_pane_g1

0x9a8a,	// (0x0002961a) tabs_4_1_passive_pane_t1

0x4abb,	// (0x0002464b) list_highlight_pane_cp2

0xb48b,	// (0x0002b01b) list_set_pane_ParamLimits

0xb48b,	// (0x0002b01b) list_set_pane

0xb531,	// (0x0002b0c1) main_pane_set_t1_ParamLimits

0xb531,	// (0x0002b0c1) main_pane_set_t1

0xb551,	// (0x0002b0e1) main_pane_set_t2_ParamLimits

0xb551,	// (0x0002b0e1) main_pane_set_t2

0xb565,	// (0x0002b0f5) main_pane_set_t3_ParamLimits

0xb565,	// (0x0002b0f5) main_pane_set_t3

0xb577,	// (0x0002b107) main_pane_set_t4_ParamLimits

0xb577,	// (0x0002b107) main_pane_set_t4

0x0003,

0xf98c,	// (0x0002f51c) main_pane_set_t_ParamLimits

0xf98c,	// (0x0002f51c) main_pane_set_t

0xb589,	// (0x0002b119) setting_code_pane

0xb593,	// (0x0002b123) setting_slider_graphic_pane

0xb593,	// (0x0002b123) setting_slider_pane

0xb593,	// (0x0002b123) setting_text_pane

0xb593,	// (0x0002b123) setting_volume_pane

0x9a9c,	// (0x0002962c) volume_set_pane

0x1c92,	// (0x00021822) bg_set_opt_pane_cp

0x9aa4,	// (0x00029634) setting_slider_pane_t1

0x9abd,	// (0x0002964d) setting_slider_pane_t2

0x9ad7,	// (0x00029667) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0002f0f4) setting_slider_pane_t

0x9aef,	// (0x0002967f) slider_set_pane

0x1b06,	// (0x00021696) bg_set_opt_pane_cp2

0x1ca0,	// (0x00021830) setting_slider_graphic_pane_g1

0x9b05,	// (0x00029695) setting_slider_graphic_pane_t1

0x9b15,	// (0x000296a5) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0002f0fb) setting_slider_graphic_pane_t

0x9b25,	// (0x000296b5) slider_set_pane_cp

0x1b06,	// (0x00021696) input_focus_pane_cp1

0x6924,	// (0x000264b4) list_set_text_pane

0x1a16,	// (0x000215a6) setting_text_pane_g1

0x1b06,	// (0x00021696) input_focus_pane_cp2

0x1a16,	// (0x000215a6) setting_code_pane_g1

0x1ca9,	// (0x00021839) setting_code_pane_t1

0xd76e,	// (0x0002d2fe) set_text_pane_t1_ParamLimits

0xd76e,	// (0x0002d2fe) set_text_pane_t1

0x49b1,	// (0x00024541) set_opt_bg_pane_g1

0x49b9,	// (0x00024549) set_opt_bg_pane_g2

0x6904,	// (0x00026494) set_opt_bg_pane_g3

0x49c9,	// (0x00024559) set_opt_bg_pane_g4

0x49d1,	// (0x00024561) set_opt_bg_pane_g5

0x49d9,	// (0x00024569) set_opt_bg_pane_g6

0x690c,	// (0x0002649c) set_opt_bg_pane_g7

0x6914,	// (0x000264a4) set_opt_bg_pane_g8

0x691c,	// (0x000264ac) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x0002f509) set_opt_bg_pane_g

0x68f7,	// (0x00026487) slider_set_pane_g1

0xb400,	// (0x0002af90) slider_set_pane_g2

0x0006,

0xf96a,	// (0x0002f4fa) slider_set_pane_g

0xb377,	// (0x0002af07) volume_set_pane_g1

0xb37f,	// (0x0002af0f) volume_set_pane_g2

0xb387,	// (0x0002af17) volume_set_pane_g3

0xb38f,	// (0x0002af1f) volume_set_pane_g4

0xb397,	// (0x0002af27) volume_set_pane_g5

0xb39f,	// (0x0002af2f) volume_set_pane_g6

0xb3a7,	// (0x0002af37) volume_set_pane_g7

0xb3af,	// (0x0002af3f) volume_set_pane_g8

0xb3b7,	// (0x0002af47) volume_set_pane_g9

0xb3bf,	// (0x0002af4f) volume_set_pane_g10

0x0009,

0xf942,	// (0x0002f4d2) volume_set_pane_g

0x9b2d,	// (0x000296bd) indicator_pane_ParamLimits

0x9b2d,	// (0x000296bd) indicator_pane

0x9b39,	// (0x000296c9) main_idle_pane_g2_ParamLimits

0x9b39,	// (0x000296c9) main_idle_pane_g2

0x9b61,	// (0x000296f1) main_pane_idle_g1_ParamLimits

0x9b61,	// (0x000296f1) main_pane_idle_g1

0x1cb7,	// (0x00021847) popup_clock_digital_analogue_window_ParamLimits

0x1cb7,	// (0x00021847) popup_clock_digital_analogue_window

0x9b6e,	// (0x000296fe) soft_indicator_pane_ParamLimits

0x9b6e,	// (0x000296fe) soft_indicator_pane

0x9b7a,	// (0x0002970a) wallpaper_pane_ParamLimits

0x9b7a,	// (0x0002970a) wallpaper_pane

0x1a16,	// (0x000215a6) wallpaper_pane_g1

0x9b86,	// (0x00029716) indicator_pane_g1_ParamLimits

0x9b86,	// (0x00029716) indicator_pane_g1

0x6af1,	// (0x00026681) navi_navi_icon_text_pane_srt_g1

0x1ce5,	// (0x00021875) soft_indicator_pane_t1

0x1cff,	// (0x0002188f) aid_ps_area_pane

0x9b92,	// (0x00029722) aid_ps_clock_pane

0x1d10,	// (0x000218a0) aid_ps_indicator_pane

0x1d1c,	// (0x000218ac) indicator_ps_pane_ParamLimits

0x1d1c,	// (0x000218ac) indicator_ps_pane

0x1d2b,	// (0x000218bb) power_save_pane_g1_ParamLimits

0x1d2b,	// (0x000218bb) power_save_pane_g1

0x1d37,	// (0x000218c7) power_save_pane_g2_ParamLimits

0x1d37,	// (0x000218c7) power_save_pane_g2

0x95fb,	// (0x0002918b) aid_navinavi_width_pane

0x1cff,	// (0x0002188f) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0002f100) power_save_pane_g_ParamLimits

0xf570,	// (0x0002f100) power_save_pane_g

0x1d45,	// (0x000218d5) power_save_pane_t1_ParamLimits

0x1d45,	// (0x000218d5) power_save_pane_t1

0x9b92,	// (0x00029722) aid_ps_clock_pane_ParamLimits

0x1d10,	// (0x000218a0) aid_ps_indicator_pane_ParamLimits

0x1d57,	// (0x000218e7) power_save_pane_t4_ParamLimits

0x1d57,	// (0x000218e7) power_save_pane_t4

0x0001,

0xf575,	// (0x0002f105) power_save_pane_t_ParamLimits

0xf575,	// (0x0002f105) power_save_pane_t

0x1d81,	// (0x00021911) power_save_t3_ParamLimits

0x1d81,	// (0x00021911) power_save_t3

0x1d6c,	// (0x000218fc) power_save_t2_ParamLimits

0x1d6c,	// (0x000218fc) power_save_t2

0x1d96,	// (0x00021926) indicator_ps_pane_g1

0x9ba0,	// (0x00029730) ai_gene_pane_ParamLimits

0x9ba0,	// (0x00029730) ai_gene_pane

0x9bac,	// (0x0002973c) ai_links_pane_ParamLimits

0x9bac,	// (0x0002973c) ai_links_pane

0x9bb8,	// (0x00029748) indicator_pane_cp1_ParamLimits

0x9bb8,	// (0x00029748) indicator_pane_cp1

0x9bc4,	// (0x00029754) main_pane_idle_g1_cp_ParamLimits

0x9bc4,	// (0x00029754) main_pane_idle_g1_cp

0x1d9f,	// (0x0002192f) popup_ai_links_title_window

0x9bd0,	// (0x00029760) soft_indicator_pane_cp1_ParamLimits

0x9bd0,	// (0x00029760) soft_indicator_pane_cp1

0x675f,	// (0x000262ef) ai_links_pane_g1

0x6768,	// (0x000262f8) grid_ai_links_pane

0xb31a,	// (0x0002aeaa) ai_gene_pane_1

0x674d,	// (0x000262dd) ai_gene_pane_2

0x6756,	// (0x000262e6) list_highlight_pane_cp4

0xb2fe,	// (0x0002ae8e) cell_ai_link_pane_ParamLimits

0xb2fe,	// (0x0002ae8e) cell_ai_link_pane

0x6745,	// (0x000262d5) cell_ai_link_pane_g1

0x1f4d,	// (0x00021add) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x0002f4ad) cell_ai_link_pane_g

0x1b06,	// (0x00021696) grid_highlight_cp2

0x1b06,	// (0x00021696) bg_popup_sub_pane_cp1

0x1db6,	// (0x00021946) popup_ai_links_title_window_t1

0x6695,	// (0x00026225) ai_gene_pane_1_g1_ParamLimits

0x6695,	// (0x00026225) ai_gene_pane_1_g1

0x66a1,	// (0x00026231) ai_gene_pane_1_g2_ParamLimits

0x66a1,	// (0x00026231) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x0002f4a3) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x0002f4a3) ai_gene_pane_1_g

0x66ae,	// (0x0002623e) ai_gene_pane_1_t1_ParamLimits

0x66ae,	// (0x0002623e) ai_gene_pane_1_t1

0x66e2,	// (0x00026272) grid_ai_soft_ind_pane

0x6680,	// (0x00026210) ai_gene_pane_2_t1_ParamLimits

0x6680,	// (0x00026210) ai_gene_pane_2_t1

0x9bdc,	// (0x0002976c) main_pane_empty_t1_ParamLimits

0x9bdc,	// (0x0002976c) main_pane_empty_t1

0x9bf4,	// (0x00029784) main_pane_empty_t2_ParamLimits

0x9bf4,	// (0x00029784) main_pane_empty_t2

0x9c09,	// (0x00029799) main_pane_empty_t3_ParamLimits

0x9c09,	// (0x00029799) main_pane_empty_t3

0x9c1b,	// (0x000297ab) main_pane_empty_t4_ParamLimits

0x9c1b,	// (0x000297ab) main_pane_empty_t4

0x9c2d,	// (0x000297bd) main_pane_empty_t5_ParamLimits

0x9c2d,	// (0x000297bd) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0002f10a) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0002f10a) main_pane_empty_t

0x4a02,	// (0x00024592) bg_popup_window_pane_ParamLimits

0x4a02,	// (0x00024592) bg_popup_window_pane

0x63f0,	// (0x00025f80) find_popup_pane_cp2_ParamLimits

0x63f0,	// (0x00025f80) find_popup_pane_cp2

0x63fc,	// (0x00025f8c) heading_pane_ParamLimits

0x63fc,	// (0x00025f8c) heading_pane

0x1b06,	// (0x00021696) bg_popup_sub_pane

0xb281,	// (0x0002ae11) bg_popup_window_pane_g1_ParamLimits

0xb281,	// (0x0002ae11) bg_popup_window_pane_g1

0xb28d,	// (0x0002ae1d) bg_popup_window_pane_g2_ParamLimits

0xb28d,	// (0x0002ae1d) bg_popup_window_pane_g2

0xb299,	// (0x0002ae29) bg_popup_window_pane_g3_ParamLimits

0xb299,	// (0x0002ae29) bg_popup_window_pane_g3

0xb2a5,	// (0x0002ae35) bg_popup_window_pane_g4_ParamLimits

0xb2a5,	// (0x0002ae35) bg_popup_window_pane_g4

0xb2b1,	// (0x0002ae41) bg_popup_window_pane_g5_ParamLimits

0xb2b1,	// (0x0002ae41) bg_popup_window_pane_g5

0xb2bd,	// (0x0002ae4d) bg_popup_window_pane_g6_ParamLimits

0xb2bd,	// (0x0002ae4d) bg_popup_window_pane_g6

0xb2c9,	// (0x0002ae59) bg_popup_window_pane_g7_ParamLimits

0xb2c9,	// (0x0002ae59) bg_popup_window_pane_g7

0xb2d5,	// (0x0002ae65) bg_popup_window_pane_g8_ParamLimits

0xb2d5,	// (0x0002ae65) bg_popup_window_pane_g8

0xb2e1,	// (0x0002ae71) bg_popup_window_pane_g9_ParamLimits

0xb2e1,	// (0x0002ae71) bg_popup_window_pane_g9

0x63d6,	// (0x00025f66) bg_popup_window_pane_g10_ParamLimits

0x63d6,	// (0x00025f66) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x0002f46b) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x0002f46b) bg_popup_window_pane_g

0x637f,	// (0x00025f0f) bg_popup_heading_pane_ParamLimits

0x637f,	// (0x00025f0f) bg_popup_heading_pane

0xb688,	// (0x0002b218) tabs_4_passive_pane_cp_srt_ParamLimits

0xb688,	// (0x0002b218) tabs_4_passive_pane_cp_srt

0xb69a,	// (0x0002b22a) tabs_4_passive_pane_srt_ParamLimits

0x6393,	// (0x00025f23) heading_pane_g2

0xb69a,	// (0x0002b22a) tabs_4_passive_pane_srt

0x4abb,	// (0x0002464b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4abb,	// (0x0002464b) bg_passive_tab_pane_cp3_srt

0x639b,	// (0x00025f2b) heading_pane_t1_ParamLimits

0x639b,	// (0x00025f2b) heading_pane_t1

0x63b2,	// (0x00025f42) heading_pane_t2_ParamLimits

0x63b2,	// (0x00025f42) heading_pane_t2

0x0001,

0xf8d6,	// (0x0002f466) heading_pane_t_ParamLimits

0xf8d6,	// (0x0002f466) heading_pane_t

0x5eca,	// (0x00025a5a) bg_popup_heading_pane_g1

0x5f5b,	// (0x00025aeb) bg_popup_heading_pane_g2

0x5f65,	// (0x00025af5) bg_popup_heading_pane_g3

0x5f6f,	// (0x00025aff) bg_popup_heading_pane_g4

0x5f79,	// (0x00025b09) bg_popup_heading_pane_g5

0x5f83,	// (0x00025b13) bg_popup_heading_pane_g6

0x5f8b,	// (0x00025b1b) bg_popup_heading_pane_g7

0x5f93,	// (0x00025b23) bg_popup_heading_pane_g8

0x5f9d,	// (0x00025b2d) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x0002f422) bg_popup_heading_pane_g

0x57e5,	// (0x00025375) bg_popup_sub_pane_g1

0x57ed,	// (0x0002537d) bg_popup_sub_pane_g2

0x57f5,	// (0x00025385) bg_popup_sub_pane_g3

0x57fd,	// (0x0002538d) bg_popup_sub_pane_g4

0x5805,	// (0x00025395) bg_popup_sub_pane_g5

0x580d,	// (0x0002539d) bg_popup_sub_pane_g6

0x5815,	// (0x000253a5) bg_popup_sub_pane_g7

0x581d,	// (0x000253ad) bg_popup_sub_pane_g8

0x5825,	// (0x000253b5) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x0002f3fc) bg_popup_sub_pane_g

0x1c74,	// (0x00021804) bg_popup_window_pane_cp5_ParamLimits

0x1c74,	// (0x00021804) bg_popup_window_pane_cp5

0x1dd3,	// (0x00021963) popup_note_window_g1_ParamLimits

0x1dd3,	// (0x00021963) popup_note_window_g1

0x1ddf,	// (0x0002196f) popup_note_window_t1_ParamLimits

0x1ddf,	// (0x0002196f) popup_note_window_t1

0x1df1,	// (0x00021981) popup_note_window_t2_ParamLimits

0x1df1,	// (0x00021981) popup_note_window_t2

0x1e03,	// (0x00021993) popup_note_window_t3_ParamLimits

0x1e03,	// (0x00021993) popup_note_window_t3

0x1e15,	// (0x000219a5) popup_note_window_t4_ParamLimits

0x1e15,	// (0x000219a5) popup_note_window_t4

0x1e3d,	// (0x000219cd) popup_note_window_t5_ParamLimits

0x1e3d,	// (0x000219cd) popup_note_window_t5

0x0004,

0xf585,	// (0x0002f115) popup_note_window_t_ParamLimits

0xf585,	// (0x0002f115) popup_note_window_t

0x1e61,	// (0x000219f1) bg_popup_window_pane_cp6_ParamLimits

0x1e61,	// (0x000219f1) bg_popup_window_pane_cp6

0x5e3e,	// (0x000259ce) popup_note_image_window_g1_ParamLimits

0x5e3e,	// (0x000259ce) popup_note_image_window_g1

0x5e4a,	// (0x000259da) popup_note_image_window_g2_ParamLimits

0x5e4a,	// (0x000259da) popup_note_image_window_g2

0x0001,

0xf860,	// (0x0002f3f0) popup_note_image_window_g_ParamLimits

0xf860,	// (0x0002f3f0) popup_note_image_window_g

0x5e63,	// (0x000259f3) popup_note_image_window_t1_ParamLimits

0x5e63,	// (0x000259f3) popup_note_image_window_t1

0x5e7c,	// (0x00025a0c) popup_note_image_window_t2_ParamLimits

0x5e7c,	// (0x00025a0c) popup_note_image_window_t2

0x5e95,	// (0x00025a25) popup_note_image_window_t3_ParamLimits

0x5e95,	// (0x00025a25) popup_note_image_window_t3

0x0002,

0xf865,	// (0x0002f3f5) popup_note_image_window_t_ParamLimits

0xf865,	// (0x0002f3f5) popup_note_image_window_t

0x5d1b,	// (0x000258ab) bg_popup_window_pane_cp7_ParamLimits

0x5d1b,	// (0x000258ab) bg_popup_window_pane_cp7

0x5d4b,	// (0x000258db) popup_note_wait_window_g1_ParamLimits

0x5d4b,	// (0x000258db) popup_note_wait_window_g1

0x5d57,	// (0x000258e7) popup_note_wait_window_g2_ParamLimits

0x5d57,	// (0x000258e7) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x0002f3de) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x0002f3de) popup_note_wait_window_g

0x5d6f,	// (0x000258ff) popup_note_wait_window_t1_ParamLimits

0x5d6f,	// (0x000258ff) popup_note_wait_window_t1

0x5d96,	// (0x00025926) popup_note_wait_window_t2_ParamLimits

0x5d96,	// (0x00025926) popup_note_wait_window_t2

0x5db3,	// (0x00025943) popup_note_wait_window_t3_ParamLimits

0x5db3,	// (0x00025943) popup_note_wait_window_t3

0x5dc6,	// (0x00025956) popup_note_wait_window_t4_ParamLimits

0x5dc6,	// (0x00025956) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x0002f3e5) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x0002f3e5) popup_note_wait_window_t

0x5deb,	// (0x0002597b) wait_bar_pane_ParamLimits

0x5deb,	// (0x0002597b) wait_bar_pane

0x1b06,	// (0x00021696) wait_anim_pane

0x1b06,	// (0x00021696) wait_border_pane

0x1a16,	// (0x000215a6) wait_anim_pane_g1

0x1a16,	// (0x000215a6) wait_anim_pane_g2

0x0001,

0xf709,	// (0x0002f299) wait_anim_pane_g

0x5cbf,	// (0x0002584f) wait_border_pane_g1

0x5cca,	// (0x0002585a) wait_border_pane_g2

0x5cd3,	// (0x00025863) wait_border_pane_g3

0x0002,

0xf847,	// (0x0002f3d7) wait_border_pane_g

0x5b2f,	// (0x000256bf) bg_popup_window_pane_cp16_ParamLimits

0x5b2f,	// (0x000256bf) bg_popup_window_pane_cp16

0x5c2f,	// (0x000257bf) indicator_popup_pane_cp4_ParamLimits

0x5c2f,	// (0x000257bf) indicator_popup_pane_cp4

0x5c43,	// (0x000257d3) popup_query_data_window_t1_ParamLimits

0x5c43,	// (0x000257d3) popup_query_data_window_t1

0x5c55,	// (0x000257e5) popup_query_data_window_t2_ParamLimits

0x5c55,	// (0x000257e5) popup_query_data_window_t2

0x5c6e,	// (0x000257fe) popup_query_data_window_t3_ParamLimits

0x5c6e,	// (0x000257fe) popup_query_data_window_t3

0x0002,

0xf840,	// (0x0002f3d0) popup_query_data_window_t_ParamLimits

0xf840,	// (0x0002f3d0) popup_query_data_window_t

0x5c88,	// (0x00025818) query_popup_data_pane_ParamLimits

0x5c88,	// (0x00025818) query_popup_data_pane

0x5c9c,	// (0x0002582c) query_popup_data_pane_cp1_ParamLimits

0x5c9c,	// (0x0002582c) query_popup_data_pane_cp1

0x5b2f,	// (0x000256bf) bg_popup_window_pane_cp10_ParamLimits

0x5b2f,	// (0x000256bf) bg_popup_window_pane_cp10

0x5b61,	// (0x000256f1) indicator_popup_pane_ParamLimits

0x5b61,	// (0x000256f1) indicator_popup_pane

0x5b83,	// (0x00025713) popup_query_code_window_t1_ParamLimits

0x5b83,	// (0x00025713) popup_query_code_window_t1

0x5b9d,	// (0x0002572d) popup_query_code_window_t2_ParamLimits

0x5b9d,	// (0x0002572d) popup_query_code_window_t2

0x5be6,	// (0x00025776) popup_query_code_window_t3_ParamLimits

0x5be6,	// (0x00025776) popup_query_code_window_t3

0x0002,

0xf839,	// (0x0002f3c9) popup_query_code_window_t_ParamLimits

0xf839,	// (0x0002f3c9) popup_query_code_window_t

0x5c15,	// (0x000257a5) query_popup_pane_ParamLimits

0x5c15,	// (0x000257a5) query_popup_pane

0x1e61,	// (0x000219f1) bg_popup_window_pane_cp15_ParamLimits

0x1e61,	// (0x000219f1) bg_popup_window_pane_cp15

0x1e7f,	// (0x00021a0f) indicator_popup_pane_cp1_ParamLimits

0x1e7f,	// (0x00021a0f) indicator_popup_pane_cp1

0x1e92,	// (0x00021a22) indicator_popup_pane_cp2_ParamLimits

0x1e92,	// (0x00021a22) indicator_popup_pane_cp2

0x1ea5,	// (0x00021a35) popup_query_data_code_window_g1_ParamLimits

0x1ea5,	// (0x00021a35) popup_query_data_code_window_g1

0x1eb8,	// (0x00021a48) popup_query_data_code_window_t1_ParamLimits

0x1eb8,	// (0x00021a48) popup_query_data_code_window_t1

0x1eca,	// (0x00021a5a) popup_query_data_code_window_t2_ParamLimits

0x1eca,	// (0x00021a5a) popup_query_data_code_window_t2

0x1edc,	// (0x00021a6c) popup_query_data_code_window_t3_ParamLimits

0x1edc,	// (0x00021a6c) popup_query_data_code_window_t3

0x1ef2,	// (0x00021a82) popup_query_data_code_window_t4_ParamLimits

0x1ef2,	// (0x00021a82) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0002f120) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0002f120) popup_query_data_code_window_t

0xaecb,	// (0x0002aa5b) list_single_midp_graphic_pane_g3

0x1f0a,	// (0x00021a9a) query_popup_data_pane_cp2_ParamLimits

0x1f1d,	// (0x00021aad) query_popup_pane_cp2_ParamLimits

0x1f1d,	// (0x00021aad) query_popup_pane_cp2

0x1b06,	// (0x00021696) bg_popup_window_pane_cp11

0x5b27,	// (0x000256b7) heading_pane_cp5

0x1fab,	// (0x00021b3b) listscroll_popup_info_pane

0x1b06,	// (0x00021696) input_focus_pane_cp3

0x1f30,	// (0x00021ac0) query_popup_pane_t1

0x1f3e,	// (0x00021ace) list_popup_info_pane_ParamLimits

0x1f3e,	// (0x00021ace) list_popup_info_pane

0x1f4d,	// (0x00021add) listscroll_popup_info_pane_g1

0x1f55,	// (0x00021ae5) scroll_pane_cp7

0x1f5f,	// (0x00021aef) popup_info_list_pane_t1_ParamLimits

0x1f5f,	// (0x00021aef) popup_info_list_pane_t1

0x1f79,	// (0x00021b09) popup_info_list_pane_t2_ParamLimits

0x1f79,	// (0x00021b09) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0002f129) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0002f129) popup_info_list_pane_t

0x1b06,	// (0x00021696) bg_popup_window_pane_cp12

0x6b0b,	// (0x0002669b) find_popup_pane

0x1c92,	// (0x00021822) bg_popup_window_pane_cp3

0x1f93,	// (0x00021b23) heading_pane_cp3

0x1f9f,	// (0x00021b2f) listscroll_popup_graphic_pane

0x1b06,	// (0x00021696) bg_popup_window_pane_cp4

0x9c91,	// (0x00029821) heading_pane_cp4

0x1fab,	// (0x00021b3b) listscroll_popup_colour_pane

0x1fb3,	// (0x00021b43) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x1fb3,	// (0x00021b43) cell_large_graphic_colour_none_popup_pane

0x9c9b,	// (0x0002982b) grid_large_graphic_colour_popup_pane_ParamLimits

0x9c9b,	// (0x0002982b) grid_large_graphic_colour_popup_pane

0x1fc7,	// (0x00021b57) listscroll_popup_colour_pane_g1_ParamLimits

0x1fc7,	// (0x00021b57) listscroll_popup_colour_pane_g1

0x1fde,	// (0x00021b6e) listscroll_popup_colour_pane_g2_ParamLimits

0x1fde,	// (0x00021b6e) listscroll_popup_colour_pane_g2

0x1ff5,	// (0x00021b85) listscroll_popup_colour_pane_g3_ParamLimits

0x1ff5,	// (0x00021b85) listscroll_popup_colour_pane_g3

0x9cc3,	// (0x00029853) listscroll_popup_colour_pane_g4_ParamLimits

0x9cc3,	// (0x00029853) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0002f12e) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0002f12e) listscroll_popup_colour_pane_g

0x2005,	// (0x00021b95) scroll_pane_cp6_ParamLimits

0x2005,	// (0x00021b95) scroll_pane_cp6

0x9cd2,	// (0x00029862) cell_large_graphic_colour_popup_pane_ParamLimits

0x9cd2,	// (0x00029862) cell_large_graphic_colour_popup_pane

0x2017,	// (0x00021ba7) cell_large_graphic_colour_none_popup_pane_t1

0x1b06,	// (0x00021696) grid_highlight_pane_cp5

0x2026,	// (0x00021bb6) cell_large_graphic_colour_popup_pane_g1

0x202e,	// (0x00021bbe) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0002f137) cell_large_graphic_colour_popup_pane_g

0x2036,	// (0x00021bc6) cell_large_graphic_colour_popup_pane_g2_copy1

0x203f,	// (0x00021bcf) grid_highlight_pane_cp4

0x2047,	// (0x00021bd7) bg_popup_window_pane_cp8_ParamLimits

0x2047,	// (0x00021bd7) bg_popup_window_pane_cp8

0x2062,	// (0x00021bf2) popup_snote_single_text_window_g1_ParamLimits

0x2062,	// (0x00021bf2) popup_snote_single_text_window_g1

0x2074,	// (0x00021c04) popup_snote_single_text_window_t1_ParamLimits

0x2074,	// (0x00021c04) popup_snote_single_text_window_t1

0x2087,	// (0x00021c17) popup_snote_single_text_window_t2_ParamLimits

0x2087,	// (0x00021c17) popup_snote_single_text_window_t2

0x209a,	// (0x00021c2a) popup_snote_single_text_window_t3_ParamLimits

0x209a,	// (0x00021c2a) popup_snote_single_text_window_t3

0x20d3,	// (0x00021c63) popup_snote_single_text_window_t4_ParamLimits

0x20d3,	// (0x00021c63) popup_snote_single_text_window_t4

0x2107,	// (0x00021c97) popup_snote_single_text_window_t5_ParamLimits

0x2107,	// (0x00021c97) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0002f13c) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0002f13c) popup_snote_single_text_window_t

0x2136,	// (0x00021cc6) bg_popup_window_pane_cp9_ParamLimits

0x2136,	// (0x00021cc6) bg_popup_window_pane_cp9

0x2062,	// (0x00021bf2) popup_snote_single_graphic_window_g1_ParamLimits

0x2062,	// (0x00021bf2) popup_snote_single_graphic_window_g1

0x2144,	// (0x00021cd4) popup_snote_single_graphic_window_g2_ParamLimits

0x2144,	// (0x00021cd4) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0002f147) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0002f147) popup_snote_single_graphic_window_g

0x2150,	// (0x00021ce0) popup_snote_single_graphic_window_t1_ParamLimits

0x2150,	// (0x00021ce0) popup_snote_single_graphic_window_t1

0x2163,	// (0x00021cf3) popup_snote_single_graphic_window_t2_ParamLimits

0x2163,	// (0x00021cf3) popup_snote_single_graphic_window_t2

0x2176,	// (0x00021d06) popup_snote_single_graphic_window_t3_ParamLimits

0x2176,	// (0x00021d06) popup_snote_single_graphic_window_t3

0x21af,	// (0x00021d3f) popup_snote_single_graphic_window_t4_ParamLimits

0x21af,	// (0x00021d3f) popup_snote_single_graphic_window_t4

0x21e3,	// (0x00021d73) popup_snote_single_graphic_window_t5_ParamLimits

0x21e3,	// (0x00021d73) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0002f14c) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0002f14c) popup_snote_single_graphic_window_t

0x6a93,	// (0x00026623) grid_graphic_popup_pane_ParamLimits

0x6a93,	// (0x00026623) grid_graphic_popup_pane

0x6abb,	// (0x0002664b) listscroll_popup_graphic_pane_g1_ParamLimits

0x6abb,	// (0x0002664b) listscroll_popup_graphic_pane_g1

0xb650,	// (0x0002b1e0) listscroll_popup_graphic_pane_g2_ParamLimits

0xb650,	// (0x0002b1e0) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x0002f546) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x0002f546) listscroll_popup_graphic_pane_g

0x6959,	// (0x000264e9) scroll_pane_cp5

0xb611,	// (0x0002b1a1) cell_graphic_popup_pane_ParamLimits

0xb611,	// (0x0002b1a1) cell_graphic_popup_pane

0x6a5e,	// (0x000265ee) cell_graphic_popup_pane_g1

0x6a66,	// (0x000265f6) cell_graphic_popup_pane_g2

0x2036,	// (0x00021bc6) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x0002f53f) cell_graphic_popup_pane_g

0x6a6f,	// (0x000265ff) cell_graphic_popup_pane_t2

0x203f,	// (0x00021bcf) grid_highlight_pane_cp3

0x2224,	// (0x00021db4) list_gen_pane_ParamLimits

0x2224,	// (0x00021db4) list_gen_pane

0x224c,	// (0x00021ddc) scroll_pane

0xb5c4,	// (0x0002b154) bg_list_pane_g1_ParamLimits

0xb5c4,	// (0x0002b154) bg_list_pane_g1

0x6a0d,	// (0x0002659d) bg_list_pane_g2_ParamLimits

0x6a0d,	// (0x0002659d) bg_list_pane_g2

0x6a20,	// (0x000265b0) bg_list_pane_g3_ParamLimits

0x6a20,	// (0x000265b0) bg_list_pane_g3

0x6a32,	// (0x000265c2) bg_list_pane_g4_ParamLimits

0x6a32,	// (0x000265c2) bg_list_pane_g4

0xb5df,	// (0x0002b16f) bg_list_pane_g5_ParamLimits

0xb5df,	// (0x0002b16f) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x0002f534) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x0002f534) bg_list_pane_g

0xe070,	// (0x0002dc00) list_double2_graphic_large_graphic_pane_ParamLimits

0xe070,	// (0x0002dc00) list_double2_graphic_large_graphic_pane

0xe070,	// (0x0002dc00) list_double2_graphic_pane_ParamLimits

0xe070,	// (0x0002dc00) list_double2_graphic_pane

0xe070,	// (0x0002dc00) list_double2_large_graphic_pane_ParamLimits

0xe070,	// (0x0002dc00) list_double2_large_graphic_pane

0xe070,	// (0x0002dc00) list_double2_pane_ParamLimits

0xe070,	// (0x0002dc00) list_double2_pane

0xe070,	// (0x0002dc00) list_double_graphic_heading_pane_ParamLimits

0xe070,	// (0x0002dc00) list_double_graphic_heading_pane

0xe070,	// (0x0002dc00) list_double_graphic_pane_ParamLimits

0xe070,	// (0x0002dc00) list_double_graphic_pane

0xe070,	// (0x0002dc00) list_double_heading_pane_ParamLimits

0xe070,	// (0x0002dc00) list_double_heading_pane

0xe070,	// (0x0002dc00) list_double_large_graphic_pane_ParamLimits

0xe070,	// (0x0002dc00) list_double_large_graphic_pane

0xe070,	// (0x0002dc00) list_double_number_pane_ParamLimits

0xe070,	// (0x0002dc00) list_double_number_pane

0xe070,	// (0x0002dc00) list_double_pane_ParamLimits

0xe070,	// (0x0002dc00) list_double_pane

0xe070,	// (0x0002dc00) list_double_time_pane_ParamLimits

0xe070,	// (0x0002dc00) list_double_time_pane

0xe070,	// (0x0002dc00) list_setting_number_pane_ParamLimits

0xe070,	// (0x0002dc00) list_setting_number_pane

0xe070,	// (0x0002dc00) list_setting_pane_ParamLimits

0xe070,	// (0x0002dc00) list_setting_pane

0xe0b2,	// (0x0002dc42) list_single_2graphic_pane_ParamLimits

0xe0b2,	// (0x0002dc42) list_single_2graphic_pane

0xe0b2,	// (0x0002dc42) list_single_graphic_heading_pane_ParamLimits

0xe0b2,	// (0x0002dc42) list_single_graphic_heading_pane

0xe0b2,	// (0x0002dc42) list_single_graphic_pane_ParamLimits

0xe0b2,	// (0x0002dc42) list_single_graphic_pane

0xe0b2,	// (0x0002dc42) list_single_heading_pane_ParamLimits

0xe0b2,	// (0x0002dc42) list_single_heading_pane

0xe13b,	// (0x0002dccb) list_single_large_graphic_pane_ParamLimits

0xe13b,	// (0x0002dccb) list_single_large_graphic_pane

0xe0b2,	// (0x0002dc42) list_single_number_heading_pane_ParamLimits

0xe0b2,	// (0x0002dc42) list_single_number_heading_pane

0xe0b2,	// (0x0002dc42) list_single_number_pane_ParamLimits

0xe0b2,	// (0x0002dc42) list_single_number_pane

0xe0b2,	// (0x0002dc42) list_single_pane_ParamLimits

0xe0b2,	// (0x0002dc42) list_single_pane

0x1b06,	// (0x00021696) list_highlight_pane_cp1

0xd794,	// (0x0002d324) list_single_pane_g1_ParamLimits

0xd794,	// (0x0002d324) list_single_pane_g1

0xd7a0,	// (0x0002d330) list_single_pane_g2_ParamLimits

0xd7a0,	// (0x0002d330) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0002f15e) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0002f15e) list_single_pane_g

0xe05a,	// (0x0002dbea) list_single_pane_t1_ParamLimits

0xe05a,	// (0x0002dbea) list_single_pane_t1

0xd794,	// (0x0002d324) list_single_number_pane_g1_ParamLimits

0xd794,	// (0x0002d324) list_single_number_pane_g1

0xd7a0,	// (0x0002d330) list_single_number_pane_g2_ParamLimits

0xd7a0,	// (0x0002d330) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0002f15e) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0002f15e) list_single_number_pane_g

0xe004,	// (0x0002db94) list_single_number_pane_t1_ParamLimits

0xe004,	// (0x0002db94) list_single_number_pane_t1

0xe01a,	// (0x0002dbaa) list_single_number_pane_t2_ParamLimits

0xe01a,	// (0x0002dbaa) list_single_number_pane_t2

0x0001,

0xf965,	// (0x0002f4f5) list_single_number_pane_t_ParamLimits

0xf965,	// (0x0002f4f5) list_single_number_pane_t

0xd788,	// (0x0002d318) list_single_graphic_pane_g1_ParamLimits

0xd788,	// (0x0002d318) list_single_graphic_pane_g1

0xd794,	// (0x0002d324) list_single_graphic_pane_g2_ParamLimits

0xd794,	// (0x0002d324) list_single_graphic_pane_g2

0xd7a0,	// (0x0002d330) list_single_graphic_pane_g3_ParamLimits

0xd7a0,	// (0x0002d330) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0002f157) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0002f157) list_single_graphic_pane_g

0xd7ac,	// (0x0002d33c) list_single_graphic_pane_t1_ParamLimits

0xd7ac,	// (0x0002d33c) list_single_graphic_pane_t1

0xd794,	// (0x0002d324) list_single_heading_pane_g1_ParamLimits

0xd794,	// (0x0002d324) list_single_heading_pane_g1

0xd7a0,	// (0x0002d330) list_single_heading_pane_g2_ParamLimits

0xd7a0,	// (0x0002d330) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002f15e) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002f15e) list_single_heading_pane_g

0xd7c2,	// (0x0002d352) list_single_heading_pane_t1_ParamLimits

0xd7c2,	// (0x0002d352) list_single_heading_pane_t1

0xd7d8,	// (0x0002d368) list_single_heading_pane_t2_ParamLimits

0xd7d8,	// (0x0002d368) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0002f163) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0002f163) list_single_heading_pane_t

0xd794,	// (0x0002d324) list_single_number_heading_pane_g1_ParamLimits

0xd794,	// (0x0002d324) list_single_number_heading_pane_g1

0xd7a0,	// (0x0002d330) list_single_number_heading_pane_g2_ParamLimits

0xd7a0,	// (0x0002d330) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002f15e) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002f15e) list_single_number_heading_pane_g

0xd7c2,	// (0x0002d352) list_single_number_heading_pane_t1_ParamLimits

0xd7c2,	// (0x0002d352) list_single_number_heading_pane_t1

0xd7ea,	// (0x0002d37a) list_single_number_heading_pane_t2_ParamLimits

0xd7ea,	// (0x0002d37a) list_single_number_heading_pane_t2

0xd7fc,	// (0x0002d38c) list_single_number_heading_pane_t3_ParamLimits

0xd7fc,	// (0x0002d38c) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0002f168) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0002f168) list_single_number_heading_pane_t

0xd80e,	// (0x0002d39e) list_single_graphic_heading_pane_g1_ParamLimits

0xd80e,	// (0x0002d39e) list_single_graphic_heading_pane_g1

0xd81a,	// (0x0002d3aa) list_single_graphic_heading_pane_g4_ParamLimits

0xd81a,	// (0x0002d3aa) list_single_graphic_heading_pane_g4

0xd7a0,	// (0x0002d330) list_single_graphic_heading_pane_g5_ParamLimits

0xd7a0,	// (0x0002d330) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0002f16f) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0002f16f) list_single_graphic_heading_pane_g

0xd7c2,	// (0x0002d352) list_single_graphic_heading_pane_t1_ParamLimits

0xd7c2,	// (0x0002d352) list_single_graphic_heading_pane_t1

0xd82b,	// (0x0002d3bb) list_single_graphic_heading_pane_t2_ParamLimits

0xd82b,	// (0x0002d3bb) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0002f176) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0002f176) list_single_graphic_heading_pane_t

0xd83d,	// (0x0002d3cd) list_single_large_graphic_pane_g1_ParamLimits

0xd83d,	// (0x0002d3cd) list_single_large_graphic_pane_g1

0xd849,	// (0x0002d3d9) list_single_large_graphic_pane_g2_ParamLimits

0xd849,	// (0x0002d3d9) list_single_large_graphic_pane_g2

0xd855,	// (0x0002d3e5) list_single_large_graphic_pane_g3_ParamLimits

0xd855,	// (0x0002d3e5) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0002f17b) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0002f17b) list_single_large_graphic_pane_g

0x5cca,	// (0x0002585a) wait_border_pane_g2_copy1

0xd861,	// (0x0002d3f1) list_single_large_graphic_pane_g4_cp2

0xd869,	// (0x0002d3f9) list_single_large_graphic_pane_t1_ParamLimits

0xd869,	// (0x0002d3f9) list_single_large_graphic_pane_t1

0xd87f,	// (0x0002d40f) list_double_pane_g1_ParamLimits

0xd87f,	// (0x0002d40f) list_double_pane_g1

0xd88b,	// (0x0002d41b) list_double_pane_g2_ParamLimits

0xd88b,	// (0x0002d41b) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0002f182) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0002f182) list_double_pane_g

0xd897,	// (0x0002d427) list_double_pane_t1_ParamLimits

0xd897,	// (0x0002d427) list_double_pane_t1

0xd8ad,	// (0x0002d43d) list_double_pane_t2_ParamLimits

0xd8ad,	// (0x0002d43d) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0002f187) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0002f187) list_double_pane_t

0xd8bf,	// (0x0002d44f) list_double2_pane_g1_ParamLimits

0xd8bf,	// (0x0002d44f) list_double2_pane_g1

0xd8d0,	// (0x0002d460) list_double2_pane_g2_ParamLimits

0xd8d0,	// (0x0002d460) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0002f18c) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0002f18c) list_double2_pane_g

0xd8dc,	// (0x0002d46c) list_double2_pane_t1_ParamLimits

0xd8dc,	// (0x0002d46c) list_double2_pane_t1

0xd8f2,	// (0x0002d482) list_double2_pane_t2_ParamLimits

0xd8f2,	// (0x0002d482) list_double2_pane_t2

0x0001,

0xf601,	// (0x0002f191) list_double2_pane_t_ParamLimits

0xf601,	// (0x0002f191) list_double2_pane_t

0xd87f,	// (0x0002d40f) list_double_number_pane_g1_ParamLimits

0xd87f,	// (0x0002d40f) list_double_number_pane_g1

0xd88b,	// (0x0002d41b) list_double_number_pane_g2_ParamLimits

0xd88b,	// (0x0002d41b) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0002f182) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0002f182) list_double_number_pane_g

0xd904,	// (0x0002d494) list_double_number_pane_t1_ParamLimits

0xd904,	// (0x0002d494) list_double_number_pane_t1

0xd916,	// (0x0002d4a6) list_double_number_pane_t2_ParamLimits

0xd916,	// (0x0002d4a6) list_double_number_pane_t2

0xd92c,	// (0x0002d4bc) list_double_number_pane_t3_ParamLimits

0xd92c,	// (0x0002d4bc) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0002f196) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0002f196) list_double_number_pane_t

0xd93e,	// (0x0002d4ce) list_double_graphic_pane_g1_ParamLimits

0xd93e,	// (0x0002d4ce) list_double_graphic_pane_g1

0xd94a,	// (0x0002d4da) list_double_graphic_pane_g2_ParamLimits

0xd94a,	// (0x0002d4da) list_double_graphic_pane_g2

0xd959,	// (0x0002d4e9) list_double_graphic_pane_g3_ParamLimits

0xd959,	// (0x0002d4e9) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0002f19d) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0002f19d) list_double_graphic_pane_g

0xd971,	// (0x0002d501) list_double_graphic_pane_t1_ParamLimits

0xd971,	// (0x0002d501) list_double_graphic_pane_t1

0xd987,	// (0x0002d517) list_double_graphic_pane_t2_ParamLimits

0xd987,	// (0x0002d517) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0002f1a6) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0002f1a6) list_double_graphic_pane_t

0xd999,	// (0x0002d529) list_double2_graphic_pane_g1_ParamLimits

0xd999,	// (0x0002d529) list_double2_graphic_pane_g1

0xd87f,	// (0x0002d40f) list_double2_graphic_pane_g2_ParamLimits

0xd87f,	// (0x0002d40f) list_double2_graphic_pane_g2

0xd88b,	// (0x0002d41b) list_double2_graphic_pane_g3_ParamLimits

0xd88b,	// (0x0002d41b) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0002f1ab) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0002f1ab) list_double2_graphic_pane_g

0xd9a5,	// (0x0002d535) list_double2_graphic_pane_t1_ParamLimits

0xd9a5,	// (0x0002d535) list_double2_graphic_pane_t1

0xd9bb,	// (0x0002d54b) list_double2_graphic_pane_t2_ParamLimits

0xd9bb,	// (0x0002d54b) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0002f1b2) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0002f1b2) list_double2_graphic_pane_t

0xd9cd,	// (0x0002d55d) list_double_large_graphic_pane_g1_ParamLimits

0xd9cd,	// (0x0002d55d) list_double_large_graphic_pane_g1

0xd9ec,	// (0x0002d57c) list_double_large_graphic_pane_g2_ParamLimits

0xd9ec,	// (0x0002d57c) list_double_large_graphic_pane_g2

0xd88b,	// (0x0002d41b) list_double_large_graphic_pane_g3_ParamLimits

0xd88b,	// (0x0002d41b) list_double_large_graphic_pane_g3

0xd9fd,	// (0x0002d58d) list_double_large_graphic_pane_g4_ParamLimits

0xd9fd,	// (0x0002d58d) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0002f1b7) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0002f1b7) list_double_large_graphic_pane_g

0xda25,	// (0x0002d5b5) list_double_large_graphic_pane_t1_ParamLimits

0xda25,	// (0x0002d5b5) list_double_large_graphic_pane_t1

0xda3e,	// (0x0002d5ce) list_double_large_graphic_pane_t2_ParamLimits

0xda3e,	// (0x0002d5ce) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0002f1c2) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0002f1c2) list_double_large_graphic_pane_t

0xda50,	// (0x0002d5e0) list_double2_large_graphic_pane_g1_ParamLimits

0xda50,	// (0x0002d5e0) list_double2_large_graphic_pane_g1

0xd8bf,	// (0x0002d44f) list_double2_large_graphic_pane_g2_ParamLimits

0xd8bf,	// (0x0002d44f) list_double2_large_graphic_pane_g2

0xd8d0,	// (0x0002d460) list_double2_large_graphic_pane_g3_ParamLimits

0xd8d0,	// (0x0002d460) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0002f1c7) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0002f1c7) list_double2_large_graphic_pane_g

0xda5c,	// (0x0002d5ec) list_double2_large_graphic_pane_t1_ParamLimits

0xda5c,	// (0x0002d5ec) list_double2_large_graphic_pane_t1

0xda72,	// (0x0002d602) list_double2_large_graphic_pane_t2_ParamLimits

0xda72,	// (0x0002d602) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0002f1ce) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0002f1ce) list_double2_large_graphic_pane_t

0xda84,	// (0x0002d614) list_double_heading_pane_g1_ParamLimits

0xda84,	// (0x0002d614) list_double_heading_pane_g1

0xda95,	// (0x0002d625) list_double_heading_pane_g2_ParamLimits

0xda95,	// (0x0002d625) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0002f1d3) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0002f1d3) list_double_heading_pane_g

0xdaa1,	// (0x0002d631) list_double_heading_pane_t1_ParamLimits

0xdaa1,	// (0x0002d631) list_double_heading_pane_t1

0xd8f2,	// (0x0002d482) list_double_heading_pane_t2_ParamLimits

0xd8f2,	// (0x0002d482) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0002f1d8) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0002f1d8) list_double_heading_pane_t

0xd999,	// (0x0002d529) list_double_graphic_heading_pane_g1_ParamLimits

0xd999,	// (0x0002d529) list_double_graphic_heading_pane_g1

0xda84,	// (0x0002d614) list_double_graphic_heading_pane_g2_ParamLimits

0xda84,	// (0x0002d614) list_double_graphic_heading_pane_g2

0xda95,	// (0x0002d625) list_double_graphic_heading_pane_g3_ParamLimits

0xda95,	// (0x0002d625) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0002f1dd) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0002f1dd) list_double_graphic_heading_pane_g

0xdab7,	// (0x0002d647) list_double_graphic_heading_pane_t1_ParamLimits

0xdab7,	// (0x0002d647) list_double_graphic_heading_pane_t1

0xd9bb,	// (0x0002d54b) list_double_graphic_heading_pane_t2_ParamLimits

0xd9bb,	// (0x0002d54b) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0002f1e4) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0002f1e4) list_double_graphic_heading_pane_t

0xd9ec,	// (0x0002d57c) list_double_time_pane_g1_ParamLimits

0xd9ec,	// (0x0002d57c) list_double_time_pane_g1

0xd88b,	// (0x0002d41b) list_double_time_pane_g2_ParamLimits

0xd88b,	// (0x0002d41b) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0002f1e9) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0002f1e9) list_double_time_pane_g

0xdacd,	// (0x0002d65d) list_double_time_pane_t1_ParamLimits

0xdacd,	// (0x0002d65d) list_double_time_pane_t1

0xdae3,	// (0x0002d673) list_double_time_pane_t2_ParamLimits

0xdae3,	// (0x0002d673) list_double_time_pane_t2

0xdaf5,	// (0x0002d685) list_double_time_pane_t3_ParamLimits

0xdaf5,	// (0x0002d685) list_double_time_pane_t3

0xdb07,	// (0x0002d697) list_double_time_pane_t4_ParamLimits

0xdb07,	// (0x0002d697) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0002f1ee) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0002f1ee) list_double_time_pane_t

0xdb19,	// (0x0002d6a9) list_setting_pane_g1_ParamLimits

0xdb19,	// (0x0002d6a9) list_setting_pane_g1

0xda95,	// (0x0002d625) list_setting_pane_g2_ParamLimits

0xda95,	// (0x0002d625) list_setting_pane_g2

0x0001,

0xf667,	// (0x0002f1f7) list_setting_pane_g_ParamLimits

0xf667,	// (0x0002f1f7) list_setting_pane_g

0xdb25,	// (0x0002d6b5) list_setting_pane_t1_ParamLimits

0xdb25,	// (0x0002d6b5) list_setting_pane_t1

0xdb3c,	// (0x0002d6cc) list_setting_pane_t2_ParamLimits

0xdb3c,	// (0x0002d6cc) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0002f1fc) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0002f1fc) list_setting_pane_t

0xdb79,	// (0x0002d709) set_value_pane_cp_ParamLimits

0xdb79,	// (0x0002d709) set_value_pane_cp

0xdb85,	// (0x0002d715) list_setting_number_pane_g1_ParamLimits

0xdb85,	// (0x0002d715) list_setting_number_pane_g1

0xdb91,	// (0x0002d721) list_setting_number_pane_g2_ParamLimits

0xdb91,	// (0x0002d721) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x0002f203) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x0002f203) list_setting_number_pane_g

0xdb9d,	// (0x0002d72d) list_setting_number_pane_t1_ParamLimits

0xdb9d,	// (0x0002d72d) list_setting_number_pane_t1

0xdbb1,	// (0x0002d741) list_setting_number_pane_t2_ParamLimits

0xdbb1,	// (0x0002d741) list_setting_number_pane_t2

0xdbc8,	// (0x0002d758) list_setting_number_pane_t3_ParamLimits

0xdbc8,	// (0x0002d758) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x0002f208) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x0002f208) list_setting_number_pane_t

0xdb79,	// (0x0002d709) set_value_pane_ParamLimits

0xdb79,	// (0x0002d709) set_value_pane

0x4909,	// (0x00024499) bg_set_opt_pane_ParamLimits

0x4909,	// (0x00024499) bg_set_opt_pane

0xdc0b,	// (0x0002d79b) set_value_pane_t1

0x492a,	// (0x000244ba) slider_set_pane_cp3

0x4933,	// (0x000244c3) volume_small_pane_cp

0x493c,	// (0x000244cc) list_form_gen_pane

0x4945,	// (0x000244d5) scroll_pane_cp8

0xdc21,	// (0x0002d7b1) form_field_data_pane_ParamLimits

0xdc21,	// (0x0002d7b1) form_field_data_pane

0xdc41,	// (0x0002d7d1) form_field_data_wide_pane_ParamLimits

0xdc41,	// (0x0002d7d1) form_field_data_wide_pane

0xdc62,	// (0x0002d7f2) form_field_popup_pane_ParamLimits

0xdc62,	// (0x0002d7f2) form_field_popup_pane

0xdc80,	// (0x0002d810) form_field_popup_wide_pane_ParamLimits

0xdc80,	// (0x0002d810) form_field_popup_wide_pane

0xdc9d,	// (0x0002d82d) form_field_slider_pane_ParamLimits

0xdc9d,	// (0x0002d82d) form_field_slider_pane

0xdcb0,	// (0x0002d840) form_field_slider_wide_pane_ParamLimits

0xdcb0,	// (0x0002d840) form_field_slider_wide_pane

0x4956,	// (0x000244e6) data_form_pane

0xdccd,	// (0x0002d85d) form_field_data_pane_t1

0x4962,	// (0x000244f2) input_focus_pane

0xdce7,	// (0x0002d877) data_form_wide_pane

0xdd04,	// (0x0002d894) form_field_data_wide_pane_t1

0x2054,	// (0x00021be4) input_focus_pane_cp6

0xdd26,	// (0x0002d8b6) form_field_popup_pane_t1

0x4962,	// (0x000244f2) input_focus_pane_cp7

0x4984,	// (0x00024514) list_form_pane

0xdd48,	// (0x0002d8d8) form_field_popup_wide_pane_t1

0x4962,	// (0x000244f2) input_focus_pane_cp8

0x4990,	// (0x00024520) list_form_wide_pane

0xdd65,	// (0x0002d8f5) form_field_slider_pane_t1_ParamLimits

0xdd65,	// (0x0002d8f5) form_field_slider_pane_t1

0xdd79,	// (0x0002d909) form_field_slider_pane_t2_ParamLimits

0xdd79,	// (0x0002d909) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x0002f218) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x0002f218) form_field_slider_pane_t

0x1c74,	// (0x00021804) input_focus_pane_cp9_ParamLimits

0x1c74,	// (0x00021804) input_focus_pane_cp9

0xdd8b,	// (0x0002d91b) slider_cont_pane_ParamLimits

0xdd8b,	// (0x0002d91b) slider_cont_pane

0x499f,	// (0x0002452f) form_field_slider_wide_pane_t1_ParamLimits

0x499f,	// (0x0002452f) form_field_slider_wide_pane_t1

0xdd9f,	// (0x0002d92f) form_field_slider_wide_pane_t2_ParamLimits

0xdd9f,	// (0x0002d92f) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x0002f21d) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x0002f21d) form_field_slider_wide_pane_t

0x1c74,	// (0x00021804) input_focus_pane_cp10_ParamLimits

0x1c74,	// (0x00021804) input_focus_pane_cp10

0xddb1,	// (0x0002d941) slider_cont_pane_cp1_ParamLimits

0xddb1,	// (0x0002d941) slider_cont_pane_cp1

0xddc5,	// (0x0002d955) slider_form_pane_cp

0x49b1,	// (0x00024541) input_focus_pane_g1

0x49b9,	// (0x00024549) input_focus_pane_g2

0x49c1,	// (0x00024551) input_focus_pane_g3

0x49c9,	// (0x00024559) input_focus_pane_g4

0x49d1,	// (0x00024561) input_focus_pane_g5

0x49d9,	// (0x00024569) input_focus_pane_g6

0x49e1,	// (0x00024571) input_focus_pane_g7

0x49e9,	// (0x00024579) input_focus_pane_g8

0x49f1,	// (0x00024581) input_focus_pane_g9

0x1a16,	// (0x000215a6) input_focus_pane_g10

0x0009,

0xf692,	// (0x0002f222) input_focus_pane_g

0x5cd3,	// (0x00025863) wait_border_pane_g3_copy1

0xddcd,	// (0x0002d95d) data_form_pane_t1

0x1a16,	// (0x000215a6) wait_anim_pane_g1_copy1

0xe02c,	// (0x0002dbbc) data_form_wide_pane_t1

0xdde8,	// (0x0002d978) list_form_graphic_pane_cp_ParamLimits

0xdde8,	// (0x0002d978) list_form_graphic_pane_cp

0x69a7,	// (0x00026537) slider_form_pane_g1

0x69b0,	// (0x00026540) slider_form_pane_g2

0x0006,

0xf995,	// (0x0002f525) slider_form_pane_g

0xdde8,	// (0x0002d978) list_form_graphic_pane_ParamLimits

0xdde8,	// (0x0002d978) list_form_graphic_pane

0xddff,	// (0x0002d98f) list_form_graphic_pane_g1

0xde07,	// (0x0002d997) list_form_graphic_pane_t1_ParamLimits

0xde07,	// (0x0002d997) list_form_graphic_pane_t1

0x1c92,	// (0x00021822) list_highlight_pane_cp5_ParamLimits

0x1c92,	// (0x00021822) list_highlight_pane_cp5

0xde1c,	// (0x0002d9ac) find_pane_g1

0x49f9,	// (0x00024589) input_find_pane

0xde25,	// (0x0002d9b5) input_find_pane_g1_ParamLimits

0xde25,	// (0x0002d9b5) input_find_pane_g1

0xde31,	// (0x0002d9c1) input_find_pane_t1_ParamLimits

0xde31,	// (0x0002d9c1) input_find_pane_t1

0xde46,	// (0x0002d9d6) input_find_pane_t2_ParamLimits

0xde46,	// (0x0002d9d6) input_find_pane_t2

0x0001,

0xf6a7,	// (0x0002f237) input_find_pane_t_ParamLimits

0xf6a7,	// (0x0002f237) input_find_pane_t

0x4a02,	// (0x00024592) input_focus_pane_cp5_ParamLimits

0x4a02,	// (0x00024592) input_focus_pane_cp5

0x4a10,	// (0x000245a0) bg_popup_window_pane_cp2_ParamLimits

0x4a10,	// (0x000245a0) bg_popup_window_pane_cp2

0x4a1d,	// (0x000245ad) listscroll_menu_pane_ParamLimits

0x4a1d,	// (0x000245ad) listscroll_menu_pane

0x9d07,	// (0x00029897) popup_submenu_window_ParamLimits

0x9d07,	// (0x00029897) popup_submenu_window

0x4a29,	// (0x000245b9) find_popup_pane_g1

0x4a31,	// (0x000245c1) input_popup_find_pane_cp

0x4a02,	// (0x00024592) input_focus_pane_cp4_ParamLimits

0x4a02,	// (0x00024592) input_focus_pane_cp4

0x4a3b,	// (0x000245cb) input_popup_find_pane_t1_ParamLimits

0x4a3b,	// (0x000245cb) input_popup_find_pane_t1

0x1b06,	// (0x00021696) bg_popup_sub_pane_cp

0x4a69,	// (0x000245f9) listscroll_popup_sub_pane

0x4a71,	// (0x00024601) list_submenu_pane_ParamLimits

0x4a71,	// (0x00024601) list_submenu_pane

0x4a82,	// (0x00024612) scroll_pane_cp4

0x4a8a,	// (0x0002461a) list_single_popup_submenu_pane_ParamLimits

0x4a8a,	// (0x0002461a) list_single_popup_submenu_pane

0x4a9e,	// (0x0002462e) list_single_popup_submenu_pane_g1

0x4aa6,	// (0x00024636) list_single_popup_submenu_pane_t1_ParamLimits

0x4aa6,	// (0x00024636) list_single_popup_submenu_pane_t1

0x1c92,	// (0x00021822) bg_active_tab_pane_cp1_ParamLimits

0x1c92,	// (0x00021822) bg_active_tab_pane_cp1

0x9d3d,	// (0x000298cd) tabs_2_active_pane_g1

0x9d45,	// (0x000298d5) tabs_2_active_pane_t1

0x1c92,	// (0x00021822) bg_passive_tab_pane_cp1_ParamLimits

0x1c92,	// (0x00021822) bg_passive_tab_pane_cp1

0x9d3d,	// (0x000298cd) tabs_2_passive_pane_g1

0x9d45,	// (0x000298d5) tabs_2_passive_pane_t1

0x692c,	// (0x000264bc) bg_active_tab_pane_cp4

0x9d57,	// (0x000298e7) tabs_2_long_active_pane_t1

0x9d6a,	// (0x000298fa) bg_passive_tab_pane_cp4

0xaed3,	// (0x0002aa63) list_single_midp_graphic_pane_g4_ParamLimits

0x692c,	// (0x000264bc) bg_active_tab_pane_cp5

0x9d76,	// (0x00029906) tabs_3_long_active_pane_t1

0x9d6a,	// (0x000298fa) bg_passive_tab_pane_cp5

0xaed3,	// (0x0002aa63) list_single_midp_graphic_pane_g4

0x1c92,	// (0x00021822) bg_popup_window_pane_cp13_ParamLimits

0x1c92,	// (0x00021822) bg_popup_window_pane_cp13

0x4ad0,	// (0x00024660) listscroll_popup_fast_pane_ParamLimits

0x4ad0,	// (0x00024660) listscroll_popup_fast_pane

0x4adc,	// (0x0002466c) grid_popup_fast_pane_ParamLimits

0x4adc,	// (0x0002466c) grid_popup_fast_pane

0x4aee,	// (0x0002467e) scroll_pane_cp9_ParamLimits

0x4aee,	// (0x0002467e) scroll_pane_cp9

0x7cba,	// (0x0002784a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7cba,	// (0x0002784a) list_single_graphic_hl_pane_t1_cp2

0x4b12,	// (0x000246a2) input_focus_pane_cp20_ParamLimits

0x4b12,	// (0x000246a2) input_focus_pane_cp20

0x4b20,	// (0x000246b0) query_popup_data_pane_t1_ParamLimits

0x4b20,	// (0x000246b0) query_popup_data_pane_t1

0x4b33,	// (0x000246c3) query_popup_data_pane_t2_ParamLimits

0x4b33,	// (0x000246c3) query_popup_data_pane_t2

0x4b79,	// (0x00024709) query_popup_data_pane_t3_ParamLimits

0x4b79,	// (0x00024709) query_popup_data_pane_t3

0x4bba,	// (0x0002474a) query_popup_data_pane_t4_ParamLimits

0x4bba,	// (0x0002474a) query_popup_data_pane_t4

0x4bf6,	// (0x00024786) query_popup_data_pane_t5_ParamLimits

0x4bf6,	// (0x00024786) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x0002f23c) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x0002f23c) query_popup_data_pane_t

0x49b1,	// (0x00024541) bg_set_opt_pane_g1

0x49b9,	// (0x00024549) bg_set_opt_pane_g2

0x49c1,	// (0x00024551) bg_set_opt_pane_g3

0x49c9,	// (0x00024559) bg_set_opt_pane_g4

0x49d1,	// (0x00024561) bg_set_opt_pane_g5

0x49d9,	// (0x00024569) bg_set_opt_pane_g6

0x49e1,	// (0x00024571) bg_set_opt_pane_g7

0x49e9,	// (0x00024579) bg_set_opt_pane_g8

0x49f1,	// (0x00024581) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x0002f247) bg_set_opt_pane_g

0xa175,	// (0x00029d05) control_top_pane_stacon_ParamLimits

0xa175,	// (0x00029d05) control_top_pane_stacon

0xa1c8,	// (0x00029d58) signal_pane_stacon_ParamLimits

0xa1c8,	// (0x00029d58) signal_pane_stacon

0x505d,	// (0x00024bed) stacon_top_pane_g1_ParamLimits

0x505d,	// (0x00024bed) stacon_top_pane_g1

0xa1ed,	// (0x00029d7d) title_pane_stacon_ParamLimits

0xa1ed,	// (0x00029d7d) title_pane_stacon

0xa217,	// (0x00029da7) uni_indicator_pane_stacon_ParamLimits

0xa217,	// (0x00029da7) uni_indicator_pane_stacon

0xa22c,	// (0x00029dbc) battery_pane_stacon_ParamLimits

0xa22c,	// (0x00029dbc) battery_pane_stacon

0xa270,	// (0x00029e00) control_bottom_pane_stacon_ParamLimits

0xa270,	// (0x00029e00) control_bottom_pane_stacon

0xa293,	// (0x00029e23) navi_pane_stacon_ParamLimits

0xa293,	// (0x00029e23) navi_pane_stacon

0x507f,	// (0x00024c0f) stacon_bottom_pane_g1_ParamLimits

0x507f,	// (0x00024c0f) stacon_bottom_pane_g1

0x9d88,	// (0x00029918) aid_levels_signal_lsc_ParamLimits

0x9d88,	// (0x00029918) aid_levels_signal_lsc

0x9d9f,	// (0x0002992f) signal_pane_stacon_g1_ParamLimits

0x9d9f,	// (0x0002992f) signal_pane_stacon_g1

0x9db3,	// (0x00029943) signal_pane_stacon_g2_ParamLimits

0x9db3,	// (0x00029943) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0002f25a) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0002f25a) signal_pane_stacon_g

0x9de8,	// (0x00029978) title_pane_stacon_t1_ParamLimits

0x9de8,	// (0x00029978) title_pane_stacon_t1

0x4c4e,	// (0x000247de) uni_indicator_pane_stacon_g1

0x4c58,	// (0x000247e8) uni_indicator_pane_stacon_g2

0x4c3a,	// (0x000247ca) uni_indicator_pane_stacon_g3

0x4c44,	// (0x000247d4) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x0002f266) uni_indicator_pane_stacon_g

0x9e0d,	// (0x0002999d) control_top_pane_stacon_g1

0x9e15,	// (0x000299a5) control_top_pane_stacon_t1_ParamLimits

0x9e15,	// (0x000299a5) control_top_pane_stacon_t1

0x9e4c,	// (0x000299dc) aid_levels_battery_lsc_ParamLimits

0x9e4c,	// (0x000299dc) aid_levels_battery_lsc

0x9e64,	// (0x000299f4) battery_pane_stacon_g1_ParamLimits

0x9e64,	// (0x000299f4) battery_pane_stacon_g1

0x9e77,	// (0x00029a07) battery_pane_stacon_g2_ParamLimits

0x9e77,	// (0x00029a07) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x0002f26f) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x0002f26f) battery_pane_stacon_g

0x9eb5,	// (0x00029a45) navi_icon_pane_stacon

0x9ec9,	// (0x00029a59) navi_navi_pane_stacon

0x9eb5,	// (0x00029a45) navi_text_pane_stacon

0x9e0d,	// (0x0002999d) control_bottom_pane_stacon_g1

0x9edd,	// (0x00029a6d) control_bottom_pane_stacon_t1_ParamLimits

0x9edd,	// (0x00029a6d) control_bottom_pane_stacon_t1

0x9f14,	// (0x00029aa4) grid_app_pane_ParamLimits

0x9f14,	// (0x00029aa4) grid_app_pane

0x9f36,	// (0x00029ac6) scroll_pane_cp15_ParamLimits

0x9f36,	// (0x00029ac6) scroll_pane_cp15

0x9f49,	// (0x00029ad9) cell_app_pane_ParamLimits

0x9f49,	// (0x00029ad9) cell_app_pane

0x9f6f,	// (0x00029aff) cell_app_pane_g1_ParamLimits

0x9f6f,	// (0x00029aff) cell_app_pane_g1

0x4c7c,	// (0x0002480c) cell_app_pane_g2_ParamLimits

0x4c7c,	// (0x0002480c) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x0002f274) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x0002f274) cell_app_pane_g

0x9f8f,	// (0x00029b1f) cell_app_pane_t1_ParamLimits

0x9f8f,	// (0x00029b1f) cell_app_pane_t1

0x4c88,	// (0x00024818) grid_highlight_pane_ParamLimits

0x4c88,	// (0x00024818) grid_highlight_pane

0x49b1,	// (0x00024541) cell_highlight_pane_g1

0x49b9,	// (0x00024549) cell_highlight_pane_g2

0x49c1,	// (0x00024551) cell_highlight_pane_g3

0x49c9,	// (0x00024559) cell_highlight_pane_g4

0x49d1,	// (0x00024561) cell_highlight_pane_g5

0x49d9,	// (0x00024569) cell_highlight_pane_g6

0x49e1,	// (0x00024571) cell_highlight_pane_g7

0x49e9,	// (0x00024579) cell_highlight_pane_g8

0x49f1,	// (0x00024581) cell_highlight_pane_g9

0x1a16,	// (0x000215a6) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x0002f222) cell_highlight_pane_g

0x4c99,	// (0x00024829) bg_scroll_pane

0x9fb9,	// (0x00029b49) scroll_handle_pane

0x4ce0,	// (0x00024870) scroll_bg_pane_g1

0x4cf5,	// (0x00024885) scroll_bg_pane_g2

0x4d0d,	// (0x0002489d) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x0002f279) scroll_bg_pane_g

0x4d22,	// (0x000248b2) scroll_handle_focus_pane_ParamLimits

0x4d22,	// (0x000248b2) scroll_handle_focus_pane

0x4ce0,	// (0x00024870) scroll_handle_pane_g1

0x4d2f,	// (0x000248bf) scroll_handle_pane_g2

0x4d0d,	// (0x0002489d) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x0002f280) scroll_handle_pane_g

0x4a02,	// (0x00024592) bg_popup_sub_pane_cp21_ParamLimits

0x4a02,	// (0x00024592) bg_popup_sub_pane_cp21

0x4d43,	// (0x000248d3) popup_fep_japan_predictive_window_t1_ParamLimits

0x4d43,	// (0x000248d3) popup_fep_japan_predictive_window_t1

0x4d5d,	// (0x000248ed) popup_fep_japan_predictive_window_t2_ParamLimits

0x4d5d,	// (0x000248ed) popup_fep_japan_predictive_window_t2

0x4d90,	// (0x00024920) popup_fep_japan_predictive_window_t3_ParamLimits

0x4d90,	// (0x00024920) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x0002f287) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x0002f287) popup_fep_japan_predictive_window_t

0x1b06,	// (0x00021696) bg_popup_sub_pane_cp23

0x4dc7,	// (0x00024957) listscroll_japin_cand_pane

0x4dcf,	// (0x0002495f) popup_fep_japan_candidate_window_t1

0x4ddd,	// (0x0002496d) candidate_pane_ParamLimits

0x4ddd,	// (0x0002496d) candidate_pane

0x4def,	// (0x0002497f) scroll_pane_cp30

0x4df7,	// (0x00024987) list_single_popup_jap_candidate_pane_ParamLimits

0x4df7,	// (0x00024987) list_single_popup_jap_candidate_pane

0x1b06,	// (0x00021696) list_highlight_pane_cp30

0x4e0b,	// (0x0002499b) list_single_popup_jap_candidate_pane_t1

0x4e1a,	// (0x000249aa) level_1_signal

0x4e27,	// (0x000249b7) level_2_signal

0x4e34,	// (0x000249c4) level_3_signal

0x4e41,	// (0x000249d1) level_4_signal

0x4e4e,	// (0x000249de) level_5_signal

0x4e5b,	// (0x000249eb) level_6_signal

0x4e68,	// (0x000249f8) level_7_signal

0x4e1a,	// (0x000249aa) level_1_battery

0x4e27,	// (0x000249b7) level_2_battery

0x4e34,	// (0x000249c4) level_3_battery

0x4e41,	// (0x000249d1) level_4_battery

0x4e4e,	// (0x000249de) level_5_battery

0x4e5b,	// (0x000249eb) level_6_battery

0x4e68,	// (0x000249f8) level_7_battery

0x4e8d,	// (0x00024a1d) list_menu_pane_ParamLimits

0x4e8d,	// (0x00024a1d) list_menu_pane

0x4ea3,	// (0x00024a33) scroll_pane_cp25_ParamLimits

0x4ea3,	// (0x00024a33) scroll_pane_cp25

0x4ebc,	// (0x00024a4c) list_double2_graphic_pane_cp2_ParamLimits

0x4ebc,	// (0x00024a4c) list_double2_graphic_pane_cp2

0x4ebc,	// (0x00024a4c) list_double2_large_graphic_pane_cp2_ParamLimits

0x4ebc,	// (0x00024a4c) list_double2_large_graphic_pane_cp2

0x4ebc,	// (0x00024a4c) list_double2_pane_cp2_ParamLimits

0x4ebc,	// (0x00024a4c) list_double2_pane_cp2

0x4ebc,	// (0x00024a4c) list_double_graphic_pane_cp2_ParamLimits

0x4ebc,	// (0x00024a4c) list_double_graphic_pane_cp2

0x4ebc,	// (0x00024a4c) list_double_large_graphic_pane_cp2_ParamLimits

0x4ebc,	// (0x00024a4c) list_double_large_graphic_pane_cp2

0x4ebc,	// (0x00024a4c) list_double_number_pane_cp2_ParamLimits

0x4ebc,	// (0x00024a4c) list_double_number_pane_cp2

0x4ebc,	// (0x00024a4c) list_double_pane_cp2_ParamLimits

0x4ebc,	// (0x00024a4c) list_double_pane_cp2

0xa015,	// (0x00029ba5) list_single_2graphic_pane_cp2_ParamLimits

0xa015,	// (0x00029ba5) list_single_2graphic_pane_cp2

0xa015,	// (0x00029ba5) list_single_graphic_heading_pane_cp2_ParamLimits

0xa015,	// (0x00029ba5) list_single_graphic_heading_pane_cp2

0xa015,	// (0x00029ba5) list_single_graphic_pane_cp2_ParamLimits

0xa015,	// (0x00029ba5) list_single_graphic_pane_cp2

0xa015,	// (0x00029ba5) list_single_heading_pane_cp2_ParamLimits

0xa015,	// (0x00029ba5) list_single_heading_pane_cp2

0x4ecc,	// (0x00024a5c) list_single_large_graphic_pane_cp2_ParamLimits

0x4ecc,	// (0x00024a5c) list_single_large_graphic_pane_cp2

0xa015,	// (0x00029ba5) list_single_number_heading_pane_cp2_ParamLimits

0xa015,	// (0x00029ba5) list_single_number_heading_pane_cp2

0xa015,	// (0x00029ba5) list_single_number_pane_cp2_ParamLimits

0xa015,	// (0x00029ba5) list_single_number_pane_cp2

0xa015,	// (0x00029ba5) list_single_pane_cp2_ParamLimits

0xa015,	// (0x00029ba5) list_single_pane_cp2

0x4ee6,	// (0x00024a76) bg_popup_sub_pane_cp22

0xa0f3,	// (0x00029c83) popup_side_volume_key_window_g1

0xa117,	// (0x00029ca7) popup_side_volume_key_window_t1

0xa133,	// (0x00029cc3) volume_small_pane_cp1

0x1c74,	// (0x00021804) bg_popup_sub_pane_cp24_ParamLimits

0x1c74,	// (0x00021804) bg_popup_sub_pane_cp24

0x4efc,	// (0x00024a8c) fep_china_uni_candidate_pane_ParamLimits

0x4efc,	// (0x00024a8c) fep_china_uni_candidate_pane

0x4f10,	// (0x00024aa0) fep_china_uni_entry_pane

0x4f20,	// (0x00024ab0) popup_fep_china_uni_window_g1

0x4f3c,	// (0x00024acc) fep_china_uni_entry_pane_g1

0x4f44,	// (0x00024ad4) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x0002f2b8) fep_china_uni_entry_pane_g

0x4f4c,	// (0x00024adc) fep_entry_item_pane

0x4f56,	// (0x00024ae6) fep_candidate_item_pane

0x4f5e,	// (0x00024aee) fep_china_uni_candidate_pane_g1

0x4f66,	// (0x00024af6) fep_china_uni_candidate_pane_g2

0x4f6e,	// (0x00024afe) fep_china_uni_candidate_pane_g3

0x4f76,	// (0x00024b06) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x0002f2bd) fep_china_uni_candidate_pane_g

0x1a16,	// (0x000215a6) fep_entry_item_pane_g1

0x4f7e,	// (0x00024b0e) fep_entry_item_pane_t1_ParamLimits

0x4f7e,	// (0x00024b0e) fep_entry_item_pane_t1

0x4f94,	// (0x00024b24) fep_candidate_item_pane_t1_ParamLimits

0x4f94,	// (0x00024b24) fep_candidate_item_pane_t1

0x4fa9,	// (0x00024b39) fep_candidate_item_pane_t2_ParamLimits

0x4fa9,	// (0x00024b39) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x0002f2c6) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x0002f2c6) fep_candidate_item_pane_t

0x1c92,	// (0x00021822) list_highlight_pane_cp31_ParamLimits

0x1c92,	// (0x00021822) list_highlight_pane_cp31

0x4fbb,	// (0x00024b4b) level_1_signal_lsc

0x4fc4,	// (0x00024b54) level_2_signal_lsc

0x4fcd,	// (0x00024b5d) level_3_signal_lsc

0x4fd6,	// (0x00024b66) level_4_signal_lsc

0x4fdf,	// (0x00024b6f) level_5_signal_lsc

0x4fe8,	// (0x00024b78) level_6_signal_lsc

0x4ff1,	// (0x00024b81) level_7_signal_lsc

0x4ff1,	// (0x00024b81) level_1_battery_lsc

0x4ffa,	// (0x00024b8a) level_2_battery_lsc

0x5003,	// (0x00024b93) level_3_battery_lsc

0x500c,	// (0x00024b9c) level_4_battery_lsc

0x5015,	// (0x00024ba5) level_5_battery_lsc

0x501e,	// (0x00024bae) level_6_battery_lsc

0x4fbb,	// (0x00024b4b) level_7_battery_lsc

0x5027,	// (0x00024bb7) scroll_handle_focus_pane_g1

0x5030,	// (0x00024bc0) scroll_handle_focus_pane_g2

0x5039,	// (0x00024bc9) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x0002f2cb) scroll_handle_focus_pane_g

0xde5b,	// (0x0002d9eb) list_single_2graphic_pane_g1_ParamLimits

0xde5b,	// (0x0002d9eb) list_single_2graphic_pane_g1

0xd81a,	// (0x0002d3aa) list_single_2graphic_pane_g2_ParamLimits

0xd81a,	// (0x0002d3aa) list_single_2graphic_pane_g2

0xd7a0,	// (0x0002d330) list_single_2graphic_pane_g3_ParamLimits

0xd7a0,	// (0x0002d330) list_single_2graphic_pane_g3

0xde67,	// (0x0002d9f7) list_single_2graphic_pane_g4_ParamLimits

0xde67,	// (0x0002d9f7) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x0002f2d2) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x0002f2d2) list_single_2graphic_pane_g

0xde73,	// (0x0002da03) list_single_2graphic_pane_t1_ParamLimits

0xde73,	// (0x0002da03) list_single_2graphic_pane_t1

0xdea1,	// (0x0002da31) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xdea1,	// (0x0002da31) list_double2_graphic_large_graphic_pane_g1

0xd8bf,	// (0x0002d44f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xd8bf,	// (0x0002d44f) list_double2_graphic_large_graphic_pane_g2

0xd8d0,	// (0x0002d460) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xd8d0,	// (0x0002d460) list_double2_graphic_large_graphic_pane_g3

0xdeb3,	// (0x0002da43) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xdeb3,	// (0x0002da43) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x0002f2db) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x0002f2db) list_double2_graphic_large_graphic_pane_g

0xdebf,	// (0x0002da4f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xdebf,	// (0x0002da4f) list_double2_graphic_large_graphic_pane_t1

0xded5,	// (0x0002da65) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xded5,	// (0x0002da65) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x0002f2e4) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x0002f2e4) list_double2_graphic_large_graphic_pane_t

0x5128,	// (0x00024cb8) popup_fast_swap_window_ParamLimits

0x5128,	// (0x00024cb8) popup_fast_swap_window

0x5144,	// (0x00024cd4) popup_side_volume_key_window

0x515e,	// (0x00024cee) stacon_top_pane

0x5168,	// (0x00024cf8) status_pane_ParamLimits

0x5168,	// (0x00024cf8) status_pane

0x515e,	// (0x00024cee) status_small_pane

0x1b06,	// (0x00021696) control_pane

0x1b06,	// (0x00021696) stacon_bottom_pane

0x4945,	// (0x000244d5) scroll_pane_cp121

0x493c,	// (0x000244cc) set_content_pane

0xa13b,	// (0x00029ccb) bg_active_tab_pane_g1_cp1

0x5042,	// (0x00024bd2) bg_active_tab_pane_g2_cp1

0xa144,	// (0x00029cd4) bg_active_tab_pane_g3_cp1

0xa13b,	// (0x00029ccb) bg_passive_tab_pane_g1_cp1

0x5042,	// (0x00024bd2) bg_passive_tab_pane_g2_cp1

0xa144,	// (0x00029cd4) bg_passive_tab_pane_g3_cp1

0xa14d,	// (0x00029cdd) bg_active_tab_pane_g1_cp2

0x5042,	// (0x00024bd2) bg_active_tab_pane_g2_cp2

0xa156,	// (0x00029ce6) bg_active_tab_pane_g3_cp2

0xa14d,	// (0x00029cdd) bg_passive_tab_pane_g1_cp2

0x5042,	// (0x00024bd2) bg_passive_tab_pane_g2_cp2

0xa156,	// (0x00029ce6) bg_passive_tab_pane_g3_cp2

0x5054,	// (0x00024be4) bg_active_tab_pane_g1_cp3

0x5042,	// (0x00024bd2) bg_active_tab_pane_g2_cp3

0x504b,	// (0x00024bdb) bg_active_tab_pane_g3_cp3

0x5054,	// (0x00024be4) bg_passive_tab_pane_g1_cp3

0x5042,	// (0x00024bd2) bg_passive_tab_pane_g2_cp3

0x504b,	// (0x00024bdb) bg_passive_tab_pane_g3_cp3

0xa15f,	// (0x00029cef) bg_active_tab_pane_g1_cp4

0x5042,	// (0x00024bd2) bg_active_tab_pane_g2_cp4

0xa16a,	// (0x00029cfa) bg_active_tab_pane_g3_cp4

0xa15f,	// (0x00029cef) bg_passive_tab_pane_g1_cp4

0x5042,	// (0x00024bd2) bg_passive_tab_pane_g2_cp4

0xa16a,	// (0x00029cfa) bg_passive_tab_pane_g3_cp4

0x50a4,	// (0x00024c34) bg_active_tab_pane_g1_cp5

0x5042,	// (0x00024bd2) bg_active_tab_pane_g2_cp5

0x509b,	// (0x00024c2b) bg_active_tab_pane_g3_cp5

0x50a4,	// (0x00024c34) bg_passive_tab_pane_g1_cp5

0x5042,	// (0x00024bd2) bg_passive_tab_pane_g2_cp5

0x509b,	// (0x00024c2b) bg_passive_tab_pane_g3_cp5

0xa2b6,	// (0x00029e46) list_set_graphic_pane_ParamLimits

0xa2b6,	// (0x00029e46) list_set_graphic_pane

0x1b06,	// (0x00021696) bg_set_opt_pane_cp4

0x50ad,	// (0x00024c3d) list_set_graphic_pane_g1_ParamLimits

0x50ad,	// (0x00024c3d) list_set_graphic_pane_g1

0x50b9,	// (0x00024c49) list_set_graphic_pane_g2_ParamLimits

0x50b9,	// (0x00024c49) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x0002f2e9) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x0002f2e9) list_set_graphic_pane_g

0x0009,

0xfae8,	// (0x0002f678) volume_small_pane_cp_g

0x50db,	// (0x00024c6b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x50db,	// (0x00024c6b) list_double2_large_graphic_pane_g1_cp2

0x50e7,	// (0x00024c77) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x50e7,	// (0x00024c77) list_double2_large_graphic_pane_g2_cp2

0x50f8,	// (0x00024c88) list_double2_large_graphic_pane_g3_cp2

0x5100,	// (0x00024c90) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x5100,	// (0x00024c90) list_double2_large_graphic_pane_t1_cp2

0x5116,	// (0x00024ca6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x5116,	// (0x00024ca6) list_double2_large_graphic_pane_t2_cp2

0x66f2,	// (0x00026282) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x66f2,	// (0x00026282) list_double_large_graphic_pane_g1_cp2

0x6703,	// (0x00026293) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6703,	// (0x00026293) list_double_large_graphic_pane_g2_cp2

0x5284,	// (0x00024e14) list_double_large_graphic_pane_g3_cp2

0x6714,	// (0x000262a4) list_double_large_graphic_pane_g4_cp

0x671c,	// (0x000262ac) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x671c,	// (0x000262ac) list_double_large_graphic_pane_t1_cp2

0x6733,	// (0x000262c3) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6733,	// (0x000262c3) list_double_large_graphic_pane_t2_cp2

0x5176,	// (0x00024d06) list_double2_graphic_pane_g1_cp2_ParamLimits

0x5176,	// (0x00024d06) list_double2_graphic_pane_g1_cp2

0x5184,	// (0x00024d14) list_double2_graphic_pane_g2_cp2_ParamLimits

0x5184,	// (0x00024d14) list_double2_graphic_pane_g2_cp2

0x5195,	// (0x00024d25) list_double2_graphic_pane_g3_cp2

0x519f,	// (0x00024d2f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x519f,	// (0x00024d2f) list_double2_graphic_pane_t1_cp2

0x51b5,	// (0x00024d45) list_double2_graphic_pane_t2_cp2_ParamLimits

0x51b5,	// (0x00024d45) list_double2_graphic_pane_t2_cp2

0x51c7,	// (0x00024d57) list_single_number_heading_pane_g1_cp2_ParamLimits

0x51c7,	// (0x00024d57) list_single_number_heading_pane_g1_cp2

0x51d3,	// (0x00024d63) list_single_number_heading_pane_g2_cp2

0x51db,	// (0x00024d6b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x51db,	// (0x00024d6b) list_single_number_heading_pane_t1_cp2

0x51f1,	// (0x00024d81) list_single_number_heading_pane_t2_cp2_ParamLimits

0x51f1,	// (0x00024d81) list_single_number_heading_pane_t2_cp2

0x5203,	// (0x00024d93) list_single_number_heading_pane_t3_cp2_ParamLimits

0x5203,	// (0x00024d93) list_single_number_heading_pane_t3_cp2

0x51c7,	// (0x00024d57) list_single_heading_pane_g1_cp2_ParamLimits

0x51c7,	// (0x00024d57) list_single_heading_pane_g1_cp2

0x51d3,	// (0x00024d63) list_single_heading_pane_g2_cp2

0x51db,	// (0x00024d6b) list_single_heading_pane_t1_cp2_ParamLimits

0x51db,	// (0x00024d6b) list_single_heading_pane_t1_cp2

0x64fc,	// (0x0002608c) list_single_heading_pane_t2_cp2_ParamLimits

0x64fc,	// (0x0002608c) list_single_heading_pane_t2_cp2

0x6444,	// (0x00025fd4) list_double_graphic_pane_g1_cp2_ParamLimits

0x6444,	// (0x00025fd4) list_double_graphic_pane_g1_cp2

0x6450,	// (0x00025fe0) list_double_graphic_pane_g2_cp2_ParamLimits

0x6450,	// (0x00025fe0) list_double_graphic_pane_g2_cp2

0x645f,	// (0x00025fef) list_double_graphic_pane_g3_cp2

0x6467,	// (0x00025ff7) list_double_graphic_pane_t1_cp2_ParamLimits

0x6467,	// (0x00025ff7) list_double_graphic_pane_t1_cp2

0x647d,	// (0x0002600d) list_double_graphic_pane_t2_cp2_ParamLimits

0x647d,	// (0x0002600d) list_double_graphic_pane_t2_cp2

0x5278,	// (0x00024e08) list_double_number_pane_g1_cp2_ParamLimits

0x5278,	// (0x00024e08) list_double_number_pane_g1_cp2

0x5284,	// (0x00024e14) list_double_number_pane_g2_cp2

0x6408,	// (0x00025f98) list_double_number_pane_t1_cp2_ParamLimits

0x6408,	// (0x00025f98) list_double_number_pane_t1_cp2

0x641c,	// (0x00025fac) list_double_number_pane_t2_cp2_ParamLimits

0x641c,	// (0x00025fac) list_double_number_pane_t2_cp2

0x6432,	// (0x00025fc2) list_double_number_pane_t3_cp2_ParamLimits

0x6432,	// (0x00025fc2) list_double_number_pane_t3_cp2

0x6371,	// (0x00025f01) list_single_graphic_pane_g1_cp2_ParamLimits

0x6371,	// (0x00025f01) list_single_graphic_pane_g1_cp2

0x228c,	// (0x00021e1c) list_single_graphic_pane_g2_cp2_ParamLimits

0x228c,	// (0x00021e1c) list_single_graphic_pane_g2_cp2

0x52dc,	// (0x00024e6c) list_single_graphic_pane_g3_cp2

0x6347,	// (0x00025ed7) list_single_graphic_pane_t1_cp2_ParamLimits

0x6347,	// (0x00025ed7) list_single_graphic_pane_t1_cp2

0x228c,	// (0x00021e1c) list_single_number_pane_g1_cp2_ParamLimits

0x228c,	// (0x00021e1c) list_single_number_pane_g1_cp2

0x52dc,	// (0x00024e6c) list_single_number_pane_g2_cp2

0x6347,	// (0x00025ed7) list_single_number_pane_t1_cp2_ParamLimits

0x6347,	// (0x00025ed7) list_single_number_pane_t1_cp2

0x635d,	// (0x00025eed) list_single_number_pane_t2_cp2_ParamLimits

0x635d,	// (0x00025eed) list_single_number_pane_t2_cp2

0x50e7,	// (0x00024c77) list_double2_pane_g1_cp2_ParamLimits

0x50e7,	// (0x00024c77) list_double2_pane_g1_cp2

0x50f8,	// (0x00024c88) list_double2_pane_g2_cp2

0x5250,	// (0x00024de0) list_double2_pane_t1_cp2_ParamLimits

0x5250,	// (0x00024de0) list_double2_pane_t1_cp2

0x5266,	// (0x00024df6) list_double2_pane_t2_cp2_ParamLimits

0x5266,	// (0x00024df6) list_double2_pane_t2_cp2

0x5278,	// (0x00024e08) list_double_pane_g1_cp2_ParamLimits

0x5278,	// (0x00024e08) list_double_pane_g1_cp2

0x5284,	// (0x00024e14) list_double_pane_g2_cp2

0x528c,	// (0x00024e1c) list_double_pane_t1_cp2_ParamLimits

0x528c,	// (0x00024e1c) list_double_pane_t1_cp2

0x52a2,	// (0x00024e32) list_double_pane_t2_cp2_ParamLimits

0x52a2,	// (0x00024e32) list_double_pane_t2_cp2

0x52cc,	// (0x00024e5c) list_single_pane_cp2_g3

0x228c,	// (0x00021e1c) list_single_pane_g1_cp2_ParamLimits

0x228c,	// (0x00021e1c) list_single_pane_g1_cp2

0x52dc,	// (0x00024e6c) list_single_pane_g2_cp2

0x52e4,	// (0x00024e74) list_single_pane_t1_cp2_ParamLimits

0x52e4,	// (0x00024e74) list_single_pane_t1_cp2

0x52fc,	// (0x00024e8c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x52fc,	// (0x00024e8c) list_single_large_graphic_pane_g1_cp2

0x5308,	// (0x00024e98) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x5308,	// (0x00024e98) list_single_large_graphic_pane_g2_cp2

0x5314,	// (0x00024ea4) list_single_large_graphic_pane_g3_cp2

0x531c,	// (0x00024eac) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x531c,	// (0x00024eac) list_single_large_graphic_pane_g4_cp1

0x5336,	// (0x00024ec6) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x5336,	// (0x00024ec6) list_single_large_graphic_pane_t1_cp2

0x6313,	// (0x00025ea3) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6313,	// (0x00025ea3) list_single_graphic_heading_pane_g1_cp2

0x62e0,	// (0x00025e70) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x62e0,	// (0x00025e70) list_single_graphic_heading_pane_g4_cp2

0x52dc,	// (0x00024e6c) list_single_graphic_heading_pane_g5_cp2

0x631f,	// (0x00025eaf) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x631f,	// (0x00025eaf) list_single_graphic_heading_pane_t1_cp2

0x6335,	// (0x00025ec5) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x6335,	// (0x00025ec5) list_single_graphic_heading_pane_t2_cp2

0x62d4,	// (0x00025e64) list_single_2graphic_pane_g1_cp2_ParamLimits

0x62d4,	// (0x00025e64) list_single_2graphic_pane_g1_cp2

0x62e0,	// (0x00025e70) list_single_2graphic_pane_g2_cp2_ParamLimits

0x62e0,	// (0x00025e70) list_single_2graphic_pane_g2_cp2

0x52dc,	// (0x00024e6c) list_single_2graphic_pane_g3_cp2

0x62f1,	// (0x00025e81) list_single_2graphic_pane_g4_cp2_ParamLimits

0x62f1,	// (0x00025e81) list_single_2graphic_pane_g4_cp2

0x62fd,	// (0x00025e8d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x62fd,	// (0x00025e8d) list_single_2graphic_pane_t1_cp2

0x1a16,	// (0x000215a6) list_highlight_pane_g10_cp1

0x5eca,	// (0x00025a5a) list_highlight_pane_g1_cp1

0x5ed2,	// (0x00025a62) list_highlight_pane_g2_cp1

0x5eda,	// (0x00025a6a) list_highlight_pane_g3_cp1

0x5ee2,	// (0x00025a72) list_highlight_pane_g4_cp1

0x5eea,	// (0x00025a7a) list_highlight_pane_g5_cp1

0x5ef2,	// (0x00025a82) list_highlight_pane_g6_cp1

0x5efa,	// (0x00025a8a) list_highlight_pane_g7_cp1

0x5f02,	// (0x00025a92) list_highlight_pane_g8_cp1

0x5f0a,	// (0x00025a9a) list_highlight_pane_g9_cp1

0xb0e6,	// (0x0002ac76) form_field_slider_pane_t3

0xb0f4,	// (0x0002ac84) form_field_slider_pane_t4

0x5dfe,	// (0x0002598e) slider_form_pane_ParamLimits

0x5dfe,	// (0x0002598e) slider_form_pane

0x1b06,	// (0x00021696) control_abbreviations

0x1b06,	// (0x00021696) control_conventions

0x1b06,	// (0x00021696) control_definitions

0x1b06,	// (0x00021696) format_table_attribute

0x6546,	// (0x000260d6) bg_popup_preview_window_pane_g9

0x1b06,	// (0x00021696) format_table_data2

0x1b06,	// (0x00021696) format_table_data3

0x1b06,	// (0x00021696) format_table_data_example

0x0008,

0x1b06,	// (0x00021696) intro_purpose

0xf8f5,	// (0x0002f485) bg_popup_preview_window_pane_g

0x1b06,	// (0x00021696) texts_category

0x1b06,	// (0x00021696) texts_graphics

0x534c,	// (0x00024edc) text_digital

0x535b,	// (0x00024eeb) text_primary

0x536a,	// (0x00024efa) text_primary_small

0x5379,	// (0x00024f09) text_secondary

0x5388,	// (0x00024f18) text_title

0x6a4d,	// (0x000265dd) bg_passive_tab_pane_g1_cp3_srt

0x5042,	// (0x00024bd2) bg_passive_tab_pane_g2_cp3_srt

0x6a44,	// (0x000265d4) bg_passive_tab_pane_g3_cp3_srt

0x1c92,	// (0x00021822) bg_active_tab_pane_cp3_srt_ParamLimits

0x1c92,	// (0x00021822) bg_active_tab_pane_cp3_srt

0x6a56,	// (0x000265e6) tabs_4_active_pane_srt_g1

0xb5ff,	// (0x0002b18f) tabs_4_active_pane_srt_t1_ParamLimits

0xb5ff,	// (0x0002b18f) tabs_4_active_pane_srt_t1

0x6a4d,	// (0x000265dd) bg_active_tab_pane_g1_cp3_copy1

0x5042,	// (0x00024bd2) bg_active_tab_pane_g2_cp3_copy1

0x6a44,	// (0x000265d4) bg_active_tab_pane_g3_cp3_copy1

0x1c92,	// (0x00021822) tabs_2_long_active_pane_srt_ParamLimits

0x1c92,	// (0x00021822) tabs_2_long_active_pane_srt

0x1c92,	// (0x00021822) tabs_2_long_passive_pane_srt_ParamLimits

0x1c92,	// (0x00021822) tabs_2_long_passive_pane_srt

0x9d6a,	// (0x000298fa) bg_passive_tab_pane_cp4_srt_ParamLimits

0x9d6a,	// (0x000298fa) bg_passive_tab_pane_cp4_srt

0x68ee,	// (0x0002647e) bg_passive_tab_pane_g1_cp4_srt

0x5042,	// (0x00024bd2) bg_passive_tab_pane_g2_cp4_srt

0x68e5,	// (0x00026475) bg_passive_tab_pane_g3_cp4_srt

0x692c,	// (0x000264bc) bg_active_tab_pane_cp4_srt_ParamLimits

0x692c,	// (0x000264bc) bg_active_tab_pane_cp4_srt

0xb3d9,	// (0x0002af69) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb3d9,	// (0x0002af69) tabs_2_long_active_pane_srt_t1

0x68ee,	// (0x0002647e) bg_active_tab_pane_g1_cp4_srt

0x5042,	// (0x00024bd2) bg_active_tab_pane_g2_cp4_srt

0x68e5,	// (0x00026475) bg_active_tab_pane_g3_cp4_srt

0x1c74,	// (0x00021804) tabs_3_long_active_pane_srt_ParamLimits

0x1c74,	// (0x00021804) tabs_3_long_active_pane_srt

0x1c74,	// (0x00021804) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x1c74,	// (0x00021804) tabs_3_long_passive_pane_cp_srt

0x1c74,	// (0x00021804) tabs_3_long_passive_pane_srt_ParamLimits

0x1c74,	// (0x00021804) tabs_3_long_passive_pane_srt

0x9d6a,	// (0x000298fa) bg_passive_tab_pane_cp5_srt_ParamLimits

0x9d6a,	// (0x000298fa) bg_passive_tab_pane_cp5_srt

0x50a4,	// (0x00024c34) bg_passive_tab_pane_g1_cp5_srt

0x5042,	// (0x00024bd2) bg_passive_tab_pane_g2_cp5_srt

0x509b,	// (0x00024c2b) bg_passive_tab_pane_g3_cp5_srt

0x692c,	// (0x000264bc) bg_active_tab_pane_cp5_srt_ParamLimits

0x692c,	// (0x000264bc) bg_active_tab_pane_cp5_srt

0xb3c7,	// (0x0002af57) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb3c7,	// (0x0002af57) tabs_3_long_active_pane_srt_t1

0x50a4,	// (0x00024c34) bg_active_tab_pane_g1_cp5_srt

0x5042,	// (0x00024bd2) bg_active_tab_pane_g2_cp5_srt

0x509b,	// (0x00024c2b) bg_active_tab_pane_g3_cp5_srt

0x68d7,	// (0x00026467) navi_text_pane_srt_t1

0x68cf,	// (0x0002645f) navi_icon_pane_srt_g1

0x5498,	// (0x00025028) midp_editing_number_pane_srt

0x5397,	// (0x00024f27) midp_ticker_pane_srt

0x54a0,	// (0x00025030) midp_ticker_pane_srt_g1

0x54a8,	// (0x00025038) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x0002f308) midp_ticker_pane_srt_g

0x54b0,	// (0x00025040) midp_ticker_pane_srt_t1

0x68c0,	// (0x00026450) midp_editing_number_pane_t1_copy1

0x9d6a,	// (0x000298fa) listscroll_midp_pane

0x9d6a,	// (0x000298fa) midp_form_pane

0x539f,	// (0x00024f2f) midp_info_popup_window_ParamLimits

0x539f,	// (0x00024f2f) midp_info_popup_window

0x4a02,	// (0x00024592) bg_popup_sub_pane_cp50_ParamLimits

0x4a02,	// (0x00024592) bg_popup_sub_pane_cp50

0x5b1b,	// (0x000256ab) listscroll_midp_info_pane_ParamLimits

0x5b1b,	// (0x000256ab) listscroll_midp_info_pane

0x5b03,	// (0x00025693) listscroll_form_midp_pane_ParamLimits

0x5b03,	// (0x00025693) listscroll_form_midp_pane

0x5b0f,	// (0x0002569f) scroll_bar_cp050

0xb0ce,	// (0x0002ac5e) list_midp_pane

0x734d,	// (0x00026edd) signal_pane_g2_cp

0x5a35,	// (0x000255c5) listscroll_midp_info_pane_t1_ParamLimits

0x5a35,	// (0x000255c5) listscroll_midp_info_pane_t1

0x5a4d,	// (0x000255dd) listscroll_midp_info_pane_t2_ParamLimits

0x5a4d,	// (0x000255dd) listscroll_midp_info_pane_t2

0x5a8b,	// (0x0002561b) listscroll_midp_info_pane_t3_ParamLimits

0x5a8b,	// (0x0002561b) listscroll_midp_info_pane_t3

0x5ac5,	// (0x00025655) listscroll_midp_info_pane_t4_ParamLimits

0x5ac5,	// (0x00025655) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x0002f3c0) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x0002f3c0) listscroll_midp_info_pane_t

0x4a82,	// (0x00024612) scroll_pane_cp21

0x59d7,	// (0x00025567) form_midp_field_choice_group_pane

0x59e0,	// (0x00025570) form_midp_field_text_pane

0x5a1b,	// (0x000255ab) form_midp_field_time_pane

0x5a23,	// (0x000255b3) form_midp_gauge_slider_pane

0x5a2c,	// (0x000255bc) form_midp_gauge_wait_pane

0x1b06,	// (0x00021696) form_midp_image_pane

0xdfca,	// (0x0002db5a) list_single_midp_pane_ParamLimits

0xdfca,	// (0x0002db5a) list_single_midp_pane

0xb093,	// (0x0002ac23) form_midp_field_text_pane_t1

0x5859,	// (0x000253e9) input_focus_pane_cp050

0x59c6,	// (0x00025556) list_midp_form_text_pane

0x5995,	// (0x00025525) form_midp_field_choice_group_pane_t1

0x59a3,	// (0x00025533) input_focus_pane_cp051

0x59b7,	// (0x00025547) list_midp_choice_pane

0x1b06,	// (0x00021696) status_idle_pane

0x5979,	// (0x00025509) form_midp_field_time_pane_t1

0x1a16,	// (0x000215a6) wait_anim_pane_g2_copy1

0x5987,	// (0x00025517) form_midp_field_time_pane_t2

0x0001,

0x540a,	// (0x00024f9a) aid_navinavi_width_2_pane

0xf82b,	// (0x0002f3bb) form_midp_field_time_pane_t

0x1b06,	// (0x00021696) input_focus_pane_cp052

0x1b06,	// (0x00021696) bg_input_focus_pane_cp040

0x5955,	// (0x000254e5) form_midp_gauge_slider_pane_t1

0x5963,	// (0x000254f3) form_midp_gauge_slider_pane_t2

0xb077,	// (0x0002ac07) form_midp_gauge_slider_pane_t3

0xb085,	// (0x0002ac15) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x0002f3b2) form_midp_gauge_slider_pane_t

0x5971,	// (0x00025501) form_midp_slider_pane

0x1c92,	// (0x00021822) bg_input_focus_pane_cp041_ParamLimits

0x1c92,	// (0x00021822) bg_input_focus_pane_cp041

0x5922,	// (0x000254b2) form_midp_gauge_wait_pane_t1_ParamLimits

0x5922,	// (0x000254b2) form_midp_gauge_wait_pane_t1

0x5934,	// (0x000254c4) form_midp_gauge_wait_pane_t2_ParamLimits

0x5934,	// (0x000254c4) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x0002f3ad) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x0002f3ad) form_midp_gauge_wait_pane_t

0x5946,	// (0x000254d6) form_midp_wait_pane_ParamLimits

0x5946,	// (0x000254d6) form_midp_wait_pane

0x58ec,	// (0x0002547c) form_midp_image_pane_g1

0x58f5,	// (0x00025485) form_midp_image_pane_t1

0x5904,	// (0x00025494) form_midp_image_pane_t2

0x5913,	// (0x000254a3) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x0002f3a6) form_midp_image_pane_t

0x58e3,	// (0x00025473) list_single_midp_pane_g1

0xdfbb,	// (0x0002db4b) list_single_midp_pane_t1

0xb048,	// (0x0002abd8) list_midp_form_item_pane_ParamLimits

0xb048,	// (0x0002abd8) list_midp_form_item_pane

0x53b2,	// (0x00024f42) list_midp_form_item_pane_t1

0x53c1,	// (0x00024f51) midp_ticker_pane_g1

0x53cd,	// (0x00024f5d) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x0002f2ee) midp_ticker_pane_g

0x53d9,	// (0x00024f69) midp_ticker_pane_t1

0x69eb,	// (0x0002657b) midp_editing_number_pane_t1

0x69c9,	// (0x00026559) midp_editing_number_pane

0x69d8,	// (0x00026568) midp_ticker_pane

0x68b0,	// (0x00026440) ai_message_heading_pane

0x1b06,	// (0x00021696) bg_popup_window_pane_cp14

0x68b8,	// (0x00026448) listscroll_ai_message_pane

0x683a,	// (0x000263ca) ai_message_heading_pane_g1_ParamLimits

0x683a,	// (0x000263ca) ai_message_heading_pane_g1

0x6846,	// (0x000263d6) ai_message_heading_pane_g2_ParamLimits

0x6846,	// (0x000263d6) ai_message_heading_pane_g2

0x6852,	// (0x000263e2) ai_message_heading_pane_g3_ParamLimits

0x6852,	// (0x000263e2) ai_message_heading_pane_g3

0x685e,	// (0x000263ee) ai_message_heading_pane_g4_ParamLimits

0x685e,	// (0x000263ee) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x0002f4e7) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x0002f4e7) ai_message_heading_pane_g

0x686a,	// (0x000263fa) ai_message_heading_pane_t1_ParamLimits

0x686a,	// (0x000263fa) ai_message_heading_pane_t1

0x6884,	// (0x00026414) ai_message_heading_pane_t2_ParamLimits

0x6884,	// (0x00026414) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x0002f4f0) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x0002f4f0) ai_message_heading_pane_t

0x6896,	// (0x00026426) bg_popup_heading_pane_cp1_ParamLimits

0x6896,	// (0x00026426) bg_popup_heading_pane_cp1

0x6828,	// (0x000263b8) list_ai_message_pane_ParamLimits

0x6828,	// (0x000263b8) list_ai_message_pane

0x4a82,	// (0x00024612) scroll_pane_cp10

0x67c4,	// (0x00026354) list_ai_message_pane_g1

0x67cc,	// (0x0002635c) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x0002f4c4) list_ai_message_pane_g

0x67d4,	// (0x00026364) list_ai_message_pane_t1_ParamLimits

0x67d4,	// (0x00026364) list_ai_message_pane_t1

0x67e9,	// (0x00026379) list_ai_message_pane_t2_ParamLimits

0x67e9,	// (0x00026379) list_ai_message_pane_t2

0x67fe,	// (0x0002638e) list_ai_message_pane_t3_ParamLimits

0x67fe,	// (0x0002638e) list_ai_message_pane_t3

0x6813,	// (0x000263a3) list_ai_message_pane_t4_ParamLimits

0x6813,	// (0x000263a3) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x0002f4c9) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x0002f4c9) list_ai_message_pane_t

0xb361,	// (0x0002aef1) cell_ai_soft_ind_pane_ParamLimits

0xb361,	// (0x0002aef1) cell_ai_soft_ind_pane

0x53eb,	// (0x00024f7b) cell_ai_soft_ind_pane_g1_ParamLimits

0x53eb,	// (0x00024f7b) cell_ai_soft_ind_pane_g1

0x1b06,	// (0x00021696) grid_highlight_cp1

0x53f8,	// (0x00024f88) text_secondary_cp56_ParamLimits

0x53f8,	// (0x00024f88) text_secondary_cp56

0x6799,	// (0x00026329) example_general_pane_ParamLimits

0x6799,	// (0x00026329) example_general_pane

0x67a5,	// (0x00026335) example_parent_pane_g1_ParamLimits

0x67a5,	// (0x00026335) example_parent_pane_g1

0x67b1,	// (0x00026341) example_parent_pane_t1_ParamLimits

0x67b1,	// (0x00026341) example_parent_pane_t1

0xa94c,	// (0x0002a4dc) popup_preview_text_window_ParamLimits

0xa94c,	// (0x0002a4dc) popup_preview_text_window

0x52d4,	// (0x00024e64) list_single_pane_cp2_g4

0x1e61,	// (0x000219f1) bg_popup_preview_window_pane_ParamLimits

0x1e61,	// (0x000219f1) bg_popup_preview_window_pane

0x654e,	// (0x000260de) popup_preview_text_window_t1_ParamLimits

0x654e,	// (0x000260de) popup_preview_text_window_t1

0x656c,	// (0x000260fc) popup_preview_text_window_t2_ParamLimits

0x656c,	// (0x000260fc) popup_preview_text_window_t2

0x65b5,	// (0x00026145) popup_preview_text_window_t3_ParamLimits

0x65b5,	// (0x00026145) popup_preview_text_window_t3

0x65fa,	// (0x0002618a) popup_preview_text_window_t4_ParamLimits

0x65fa,	// (0x0002618a) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x0002f498) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x0002f498) popup_preview_text_window_t

0x6678,	// (0x00026208) scroll_pane_cp11

0x57e5,	// (0x00025375) bg_popup_preview_window_pane_g1

0x650e,	// (0x0002609e) bg_popup_preview_window_pane_g2

0x6516,	// (0x000260a6) bg_popup_preview_window_pane_g3

0x651e,	// (0x000260ae) bg_popup_preview_window_pane_g4

0x6526,	// (0x000260b6) bg_popup_preview_window_pane_g5

0x652e,	// (0x000260be) bg_popup_preview_window_pane_g6

0x6536,	// (0x000260c6) bg_popup_preview_window_pane_g7

0x653e,	// (0x000260ce) bg_popup_preview_window_pane_g8

0x9607,	// (0x00029197) aid_popup_width_pane

0xa92a,	// (0x0002a4ba) popup_midp_note_alarm_window_ParamLimits

0xa92a,	// (0x0002a4ba) popup_midp_note_alarm_window

0x4956,	// (0x000244e6) data_form_pane_ParamLimits

0xdcc3,	// (0x0002d853) form_field_data_pane_g1

0xdccd,	// (0x0002d85d) form_field_data_pane_t1_ParamLimits

0x4962,	// (0x000244f2) input_focus_pane_ParamLimits

0xdce7,	// (0x0002d877) data_form_wide_pane_ParamLimits

0xdcf8,	// (0x0002d888) form_field_data_wide_pane_g1

0xdd04,	// (0x0002d894) form_field_data_wide_pane_t1_ParamLimits

0x2054,	// (0x00021be4) input_focus_pane_cp6_ParamLimits

0x9d2f,	// (0x000298bf) input_popup_find_pane_g1_ParamLimits

0x9d2f,	// (0x000298bf) input_popup_find_pane_g1

0x9e88,	// (0x00029a18) aid_navi_side_left_pane

0x9e9d,	// (0x00029a2d) aid_navi_side_right_pane

0x5fa7,	// (0x00025b37) bg_popup_window_pane_cp30_ParamLimits

0x5fa7,	// (0x00025b37) bg_popup_window_pane_cp30

0x6021,	// (0x00025bb1) popup_midp_note_alarm_window_g1_ParamLimits

0x6021,	// (0x00025bb1) popup_midp_note_alarm_window_g1

0x6051,	// (0x00025be1) popup_midp_note_alarm_window_t1_ParamLimits

0x6051,	// (0x00025be1) popup_midp_note_alarm_window_t1

0x60f2,	// (0x00025c82) popup_midp_note_alarm_window_t2_ParamLimits

0x60f2,	// (0x00025c82) popup_midp_note_alarm_window_t2

0x61a0,	// (0x00025d30) popup_midp_note_alarm_window_t3_ParamLimits

0x61a0,	// (0x00025d30) popup_midp_note_alarm_window_t3

0x61d2,	// (0x00025d62) popup_midp_note_alarm_window_t4_ParamLimits

0x61d2,	// (0x00025d62) popup_midp_note_alarm_window_t4

0x61f8,	// (0x00025d88) popup_midp_note_alarm_window_t5_ParamLimits

0x61f8,	// (0x00025d88) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x0002f435) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x0002f435) popup_midp_note_alarm_window_t

0x62a4,	// (0x00025e34) wait_bar_pane_cp1_ParamLimits

0x62a4,	// (0x00025e34) wait_bar_pane_cp1

0x1b06,	// (0x00021696) wait_anim_pane_copy1

0x1b06,	// (0x00021696) wait_border_pane_copy1

0x5cbf,	// (0x0002584f) wait_border_pane_g1_copy1

0xdd1e,	// (0x0002d8ae) form_field_popup_pane_g1

0xdd26,	// (0x0002d8b6) form_field_popup_pane_t1_ParamLimits

0x4962,	// (0x000244f2) input_focus_pane_cp7_ParamLimits

0x4984,	// (0x00024514) list_form_pane_ParamLimits

0xdd40,	// (0x0002d8d0) form_field_popup_wide_pane_g1

0xdd48,	// (0x0002d8d8) form_field_popup_wide_pane_t1_ParamLimits

0x4962,	// (0x000244f2) input_focus_pane_cp8_ParamLimits

0x4990,	// (0x00024520) list_form_wide_pane_ParamLimits

0x6a7d,	// (0x0002660d) aid_size_cell_graphic_pane

0xddcd,	// (0x0002d95d) data_form_pane_t1_ParamLimits

0xe02c,	// (0x0002dbbc) data_form_wide_pane_t1_ParamLimits

0xac0a,	// (0x0002a79a) bg_status_flat_pane

0x9a10,	// (0x000295a0) title_pane_t1_ParamLimits

0x1c3c,	// (0x000217cc) title_pane_t2_ParamLimits

0x1c62,	// (0x000217f2) title_pane_t3_ParamLimits

0xf55d,	// (0x0002f0ed) title_pane_t_ParamLimits

0x4e1a,	// (0x000249aa) level_1_signal_ParamLimits

0x4e27,	// (0x000249b7) level_2_signal_ParamLimits

0x4e34,	// (0x000249c4) level_3_signal_ParamLimits

0x4e41,	// (0x000249d1) level_4_signal_ParamLimits

0x4e4e,	// (0x000249de) level_5_signal_ParamLimits

0x4e5b,	// (0x000249eb) level_6_signal_ParamLimits

0x4e68,	// (0x000249f8) level_7_signal_ParamLimits

0x4e1a,	// (0x000249aa) level_1_battery_ParamLimits

0x4e27,	// (0x000249b7) level_2_battery_ParamLimits

0x4e34,	// (0x000249c4) level_3_battery_ParamLimits

0x4e41,	// (0x000249d1) level_4_battery_ParamLimits

0x4e4e,	// (0x000249de) level_5_battery_ParamLimits

0x4e5b,	// (0x000249eb) level_6_battery_ParamLimits

0x4e68,	// (0x000249f8) level_7_battery_ParamLimits

0x5eca,	// (0x00025a5a) bg_status_flat_pane_g1

0x5ed2,	// (0x00025a62) bg_status_flat_pane_g2

0x5eda,	// (0x00025a6a) bg_status_flat_pane_g3

0x5ee2,	// (0x00025a72) bg_status_flat_pane_g4

0x5eea,	// (0x00025a7a) bg_status_flat_pane_g5

0x5ef2,	// (0x00025a82) bg_status_flat_pane_g6

0x5efa,	// (0x00025a8a) bg_status_flat_pane_g7

0x9a78,	// (0x00029608) tabs_3_active_pane_t1_ParamLimits

0x9a78,	// (0x00029608) tabs_3_passive_pane_t1_ParamLimits

0x9a8a,	// (0x0002961a) tabs_4_active_pane_t1_ParamLimits

0x9a8a,	// (0x0002961a) tabs_4_1_passive_pane_t1_ParamLimits

0x9d45,	// (0x000298d5) tabs_2_active_pane_t1_ParamLimits

0x9d45,	// (0x000298d5) tabs_2_passive_pane_t1_ParamLimits

0x692c,	// (0x000264bc) bg_active_tab_pane_cp4_ParamLimits

0x9d57,	// (0x000298e7) tabs_2_long_active_pane_t1_ParamLimits

0x9d6a,	// (0x000298fa) bg_passive_tab_pane_cp4_ParamLimits

0xaf05,	// (0x0002aa95) list_single_midp_graphic_pane_t1_ParamLimits

0x692c,	// (0x000264bc) bg_active_tab_pane_cp5_ParamLimits

0x9d76,	// (0x00029906) tabs_3_long_active_pane_t1_ParamLimits

0x9d6a,	// (0x000298fa) bg_passive_tab_pane_cp5_ParamLimits

0xaf05,	// (0x0002aa95) list_single_midp_graphic_pane_t1

0xac0a,	// (0x0002a79a) bg_status_flat_pane_ParamLimits

0x56b6,	// (0x00025246) indicator_pane_cp2_ParamLimits

0x56b6,	// (0x00025246) indicator_pane_cp2

0xad54,	// (0x0002a8e4) navi_pane_srt_ParamLimits

0xad54,	// (0x0002a8e4) navi_pane_srt

0x56de,	// (0x0002526e) popup_clock_digital_analogue_window_cp1

0x1cd6,	// (0x00021866) indicator_pane_t1

0x5397,	// (0x00024f27) copy_highlight_pane

0x5397,	// (0x00024f27) cursor_graphics_pane

0x5397,	// (0x00024f27) graphic_within_text_pane

0x5397,	// (0x00024f27) link_highlight_pane

0x663b,	// (0x000261cb) popup_preview_text_window_t5_ParamLimits

0x663b,	// (0x000261cb) popup_preview_text_window_t5

0x5412,	// (0x00024fa2) cursor_digital_pane

0x5412,	// (0x00024fa2) cursor_primary_pane

0x5423,	// (0x00024fb3) cursor_primary_small_pane

0x542b,	// (0x00024fbb) cursor_secondary_pane

0x5433,	// (0x00024fc3) cursor_title_pane

0x5412,	// (0x00024fa2) link_highlight_digital_pane

0x541a,	// (0x00024faa) link_highlight_primary_pane

0x5423,	// (0x00024fb3) link_highlight_primary_small_pane

0x542b,	// (0x00024fbb) link_highlight_secondary_pane

0x5433,	// (0x00024fc3) link_highlight_title_pane

0x5412,	// (0x00024fa2) copy_highlight_digital_pane

0x5412,	// (0x00024fa2) copy_highlight_primary_pane

0x5423,	// (0x00024fb3) copy_highlight_primary_small_pane

0x542b,	// (0x00024fbb) copy_highlight_secondary_pane

0x5433,	// (0x00024fc3) copy_highlight_title_pane

0x542b,	// (0x00024fbb) graphic_text_digital_pane

0x5f4a,	// (0x00025ada) graphic_text_primary_pane

0x5f53,	// (0x00025ae3) graphic_text_primary_small_pane

0x5423,	// (0x00024fb3) graphic_text_secondary_pane

0x5412,	// (0x00024fa2) graphic_text_title_pane

0xa37f,	// (0x00029f0f) cursor_primary_pane_g1

0x5f3c,	// (0x00025acc) cursor_text_primary_t1

0xb116,	// (0x0002aca6) cursor_primary_small_pane_g1

0x5f2e,	// (0x00025abe) cursor_text_primary_small_t1

0xb10c,	// (0x0002ac9c) cursor_primary_small_pane_g1_copy1

0x5f20,	// (0x00025ab0) cursor_text_primary_small_t1_copy1

0x5f12,	// (0x00025aa2) cursor_text_title_t1

0xb102,	// (0x0002ac92) cursor_title_pane_g1

0xa37f,	// (0x00029f0f) cursor_digital_pane_g1

0x543b,	// (0x00024fcb) cursor_text_digital_t1

0x5eb3,	// (0x00025a43) link_highlight_primary_pane_g1

0x5ebb,	// (0x00025a4b) link_highlight_primary_pane_t1

0x5449,	// (0x00024fd9) link_highlight_primary_small_pane_g1

0x5451,	// (0x00024fe1) link_highlight_primary_small_pane_t1

0x5449,	// (0x00024fd9) link_highlight_secondary_pane_g1

0x5460,	// (0x00024ff0) link_highlight_secondary_pane_t1

0x5e27,	// (0x000259b7) link_highlight_title_pane_g1

0x5e2f,	// (0x000259bf) link_highlight_title_pane_t1

0x5e10,	// (0x000259a0) link_highlight_digital_pane_g1

0x5e18,	// (0x000259a8) link_highlight_digital_pane_t1

0x5d04,	// (0x00025894) copy_highlight_primary_pane_g1

0x5d0c,	// (0x0002589c) copy_highlight_primary_pane_t1

0x5cde,	// (0x0002586e) copy_highlight_primary_small_pane_g1

0x5cf5,	// (0x00025885) copy_highlight_primary_small_pane_t1

0x546f,	// (0x00024fff) copy_highlight_secondary_pane_g1

0x5477,	// (0x00025007) copy_highlight_secondary_pane_t1

0x5cde,	// (0x0002586e) copy_highlight_title_pane_g1

0x5ce6,	// (0x00025876) copy_highlight_title_pane_t1

0x5d04,	// (0x00025894) copy_highlight_digital_pane_g1

0x6c03,	// (0x00026793) copy_highlight_digital_pane_t1

0x6b57,	// (0x000266e7) graphic_text_primary_pane_g1

0x6be7,	// (0x00026777) graphic_text_primary_pane_t1

0x6bf5,	// (0x00026785) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x0002f564) graphic_text_primary_pane_t

0x6bc3,	// (0x00026753) graphic_text_primary_small_pane_g1

0x6bcb,	// (0x0002675b) graphic_text_primary_small_pane_t1

0x6bd9,	// (0x00026769) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x0002f55f) graphic_text_primary_small_pane_t

0x6b9f,	// (0x0002672f) graphic_text_secondary_pane_g1

0x6ba7,	// (0x00026737) graphic_text_secondary_pane_t1

0x6bb5,	// (0x00026745) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x0002f55a) graphic_text_secondary_pane_t

0x6b7b,	// (0x0002670b) graphic_text_title_pane_g1

0x6b83,	// (0x00026713) graphic_text_title_pane_t1

0x6b91,	// (0x00026721) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x0002f555) graphic_text_title_pane_t

0x6b57,	// (0x000266e7) graphic_text_digital_pane_g1

0x6b5f,	// (0x000266ef) graphic_text_digital_pane_t1

0x6b6d,	// (0x000266fd) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x0002f550) graphic_text_digital_pane_t

0x1c92,	// (0x00021822) navi_icon_pane_srt_ParamLimits

0x1c92,	// (0x00021822) navi_icon_pane_srt

0x1b06,	// (0x00021696) navi_midp_pane_srt

0x1b06,	// (0x00021696) navi_navi_pane_srt

0x1c92,	// (0x00021822) navi_text_pane_srt_ParamLimits

0x1c92,	// (0x00021822) navi_text_pane_srt

0x6b22,	// (0x000266b2) navi_navi_icon_text_pane_srt

0x6b3c,	// (0x000266cc) navi_navi_pane_srt_g1_ParamLimits

0x6b3c,	// (0x000266cc) navi_navi_pane_srt_g1

0x6b2a,	// (0x000266ba) navi_navi_pane_srt_g2_ParamLimits

0x6b2a,	// (0x000266ba) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x0002f54b) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x0002f54b) navi_navi_pane_srt_g

0x6b4e,	// (0x000266de) navi_navi_tabs_pane_srt

0x6b22,	// (0x000266b2) navi_navi_text_pane_srt

0x6b22,	// (0x000266b2) navi_navi_volume_pane_srt

0x6b13,	// (0x000266a3) navi_navi_text_pane_srt_t1

0xb723,	// (0x0002b2b3) navi_navi_volume_pane_srt_g1

0xb72b,	// (0x0002b2bb) volume_small_pane_srt_ParamLimits

0xb72b,	// (0x0002b2bb) volume_small_pane_srt

0xa389,	// (0x00029f19) volume_small_pane_srt_g1_ParamLimits

0xa389,	// (0x00029f19) volume_small_pane_srt_g1

0xa399,	// (0x00029f29) volume_small_pane_srt_g2_ParamLimits

0xa399,	// (0x00029f29) volume_small_pane_srt_g2

0xa3aa,	// (0x00029f3a) volume_small_pane_srt_g3_ParamLimits

0xa3aa,	// (0x00029f3a) volume_small_pane_srt_g3

0xa3bb,	// (0x00029f4b) volume_small_pane_srt_g4_ParamLimits

0xa3bb,	// (0x00029f4b) volume_small_pane_srt_g4

0xa3cc,	// (0x00029f5c) volume_small_pane_srt_g5_ParamLimits

0xa3cc,	// (0x00029f5c) volume_small_pane_srt_g5

0xa3dd,	// (0x00029f6d) volume_small_pane_srt_g6_ParamLimits

0xa3dd,	// (0x00029f6d) volume_small_pane_srt_g6

0xa3ee,	// (0x00029f7e) volume_small_pane_srt_g7_ParamLimits

0xa3ee,	// (0x00029f7e) volume_small_pane_srt_g7

0xa3ff,	// (0x00029f8f) volume_small_pane_srt_g8_ParamLimits

0xa3ff,	// (0x00029f8f) volume_small_pane_srt_g8

0xa410,	// (0x00029fa0) volume_small_pane_srt_g9_ParamLimits

0xa410,	// (0x00029fa0) volume_small_pane_srt_g9

0xa421,	// (0x00029fb1) volume_small_pane_srt_g10_ParamLimits

0xa421,	// (0x00029fb1) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x0002f2f3) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x0002f2f3) volume_small_pane_srt_g

0x1f0a,	// (0x00021a9a) query_popup_data_pane_cp2

0x6af9,	// (0x00026689) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6af9,	// (0x00026689) navi_navi_icon_text_pane_srt_t1

0x5f4a,	// (0x00025ada) navi_tabs_2_long_pane_srt

0x5f4a,	// (0x00025ada) navi_tabs_2_pane_srt

0x5f4a,	// (0x00025ada) navi_tabs_3_long_pane_srt

0x5f4a,	// (0x00025ada) navi_tabs_3_pane_srt

0x5f4a,	// (0x00025ada) navi_tabs_4_pane_srt

0xb703,	// (0x0002b293) tabs_2_active_pane_srt_ParamLimits

0xb703,	// (0x0002b293) tabs_2_active_pane_srt

0xb713,	// (0x0002b2a3) tabs_2_passive_pane_srt_ParamLimits

0xb713,	// (0x0002b2a3) tabs_2_passive_pane_srt

0x4abb,	// (0x0002464b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4abb,	// (0x0002464b) bg_passive_tab_pane_cp1_srt

0x6ae0,	// (0x00026670) bg_passive_tab_pane_g1_cp1_srt

0x5042,	// (0x00024bd2) bg_passive_tab_pane_g2_cp1_srt

0x6ad7,	// (0x00026667) bg_passive_tab_pane_g3_cp1_srt

0x1c92,	// (0x00021822) bg_active_tab_pane_cp1_srt_ParamLimits

0x1c92,	// (0x00021822) bg_active_tab_pane_cp1_srt

0x6ae9,	// (0x00026679) tabs_2_active_pane_srt_g1

0xb6f1,	// (0x0002b281) tabs_2_active_pane_srt_t1_ParamLimits

0xb6f1,	// (0x0002b281) tabs_2_active_pane_srt_t1

0x6ae0,	// (0x00026670) bg_active_tab_pane_g1_cp1_srt

0x5042,	// (0x00024bd2) bg_active_tab_pane_g2_cp1_srt

0x6ad7,	// (0x00026667) bg_active_tab_pane_g3_cp1_srt

0xb6be,	// (0x0002b24e) tabs_3_active_pane_srt_ParamLimits

0xb6be,	// (0x0002b24e) tabs_3_active_pane_srt

0xb6cf,	// (0x0002b25f) tabs_3_passive_pane_cp_srt_ParamLimits

0xb6cf,	// (0x0002b25f) tabs_3_passive_pane_cp_srt

0xb6e0,	// (0x0002b270) tabs_3_passive_pane_srt_ParamLimits

0xb6e0,	// (0x0002b270) tabs_3_passive_pane_srt

0x4abb,	// (0x0002464b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4abb,	// (0x0002464b) bg_passive_tab_pane_cp2_srt

0x548f,	// (0x0002501f) bg_passive_tab_pane_g1_cp2_srt

0x5042,	// (0x00024bd2) bg_passive_tab_pane_g2_cp2_srt

0x5486,	// (0x00025016) bg_passive_tab_pane_g3_cp2_srt

0x1c92,	// (0x00021822) bg_active_tab_pane_cp2_srt_ParamLimits

0x1c92,	// (0x00021822) bg_active_tab_pane_cp2_srt

0x6acf,	// (0x0002665f) tabs_3_active_pane_srt_g1

0xb6ac,	// (0x0002b23c) tabs_3_active_pane_srt_t1_ParamLimits

0xb6ac,	// (0x0002b23c) tabs_3_active_pane_srt_t1

0x548f,	// (0x0002501f) bg_active_tab_pane_g1_cp2_srt

0x5042,	// (0x00024bd2) bg_active_tab_pane_g2_cp2_srt

0x5486,	// (0x00025016) bg_active_tab_pane_g3_cp2_srt

0xb664,	// (0x0002b1f4) tabs_4_active_pane_srt_ParamLimits

0xb664,	// (0x0002b1f4) tabs_4_active_pane_srt

0xb676,	// (0x0002b206) tabs_4_passive_pane_cp2_srt_ParamLimits

0xb676,	// (0x0002b206) tabs_4_passive_pane_cp2_srt

0xa5ab,	// (0x0002a13b) aid_size_cell_toolbar

0x9d6a,	// (0x000298fa) main_idle_act_pane_ParamLimits

0xa75e,	// (0x0002a2ee) popup_large_graphic_colour_window_ParamLimits

0xaac3,	// (0x0002a653) popup_toolbar_window_ParamLimits

0xaac3,	// (0x0002a653) popup_toolbar_window

0x69fa,	// (0x0002658a) list_single_graphic_2heading_pane_ParamLimits

0x69fa,	// (0x0002658a) list_single_graphic_2heading_pane

0x4c62,	// (0x000247f2) aid_size_cell_apps_grid_lsc_pane

0x4c74,	// (0x00024804) aid_size_cell_apps_grid_prt_pane

0x4abb,	// (0x0002464b) bg_wml_button_pane_cp1_ParamLimits

0x4abb,	// (0x0002464b) bg_wml_button_pane_cp1

0xb093,	// (0x0002ac23) form_midp_field_text_pane_t1_ParamLimits

0x5859,	// (0x000253e9) input_focus_pane_cp050_ParamLimits

0x59c6,	// (0x00025556) list_midp_form_text_pane_ParamLimits

0x59a3,	// (0x00025533) input_focus_pane_cp051_ParamLimits

0x59b7,	// (0x00025547) list_midp_choice_pane_ParamLimits

0xafe4,	// (0x0002ab74) list_single_2graphic_pane_cp3_ParamLimits

0xafe4,	// (0x0002ab74) list_single_2graphic_pane_cp3

0xb00f,	// (0x0002ab9f) list_single_midp_graphic_pane_ParamLimits

0xb00f,	// (0x0002ab9f) list_single_midp_graphic_pane

0x9575,	// (0x00029105) list_single_graphic_2heading_pane_g1_ParamLimits

0x9575,	// (0x00029105) list_single_graphic_2heading_pane_g1

0x9581,	// (0x00029111) list_single_graphic_2heading_pane_g4_ParamLimits

0x9581,	// (0x00029111) list_single_graphic_2heading_pane_g4

0x958d,	// (0x0002911d) list_single_graphic_2heading_pane_g5_ParamLimits

0x958d,	// (0x0002911d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x0002f346) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x0002f346) list_single_graphic_2heading_pane_g

0x9599,	// (0x00029129) list_single_graphic_2heading_pane_t1_ParamLimits

0x9599,	// (0x00029129) list_single_graphic_2heading_pane_t1

0x95ad,	// (0x0002913d) list_single_graphic_2heading_pane_t2_ParamLimits

0x95ad,	// (0x0002913d) list_single_graphic_2heading_pane_t2

0x95c7,	// (0x00029157) list_single_graphic_2heading_pane_t3_ParamLimits

0x95c7,	// (0x00029157) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x0002f34d) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x0002f34d) list_single_graphic_2heading_pane_t

0x5723,	// (0x000252b3) bg_popup_sub_pane_cp2

0x574d,	// (0x000252dd) grid_toobar_pane

0xae76,	// (0x0002aa06) cell_toolbar_pane_ParamLimits

0xae76,	// (0x0002aa06) cell_toolbar_pane

0x5789,	// (0x00025319) cell_toolbar_pane_g1_ParamLimits

0x5789,	// (0x00025319) cell_toolbar_pane_g1

0x579d,	// (0x0002532d) cell_toolbar_pane_g2_ParamLimits

0x579d,	// (0x0002532d) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x0002f35b) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x0002f35b) cell_toolbar_pane_g

0x57bf,	// (0x0002534f) grid_highlight_pane_cp2_ParamLimits

0x57bf,	// (0x0002534f) grid_highlight_pane_cp2

0x57d9,	// (0x00025369) toolbar_button_pane

0x57e5,	// (0x00025375) toolbar_button_pane_g1

0x57f5,	// (0x00025385) toolbar_button_pane_g2

0x57ed,	// (0x0002537d) toolbar_button_pane_g3

0x5805,	// (0x00025395) toolbar_button_pane_g4

0x57fd,	// (0x0002538d) toolbar_button_pane_g5

0x580d,	// (0x0002539d) toolbar_button_pane_g6

0x5815,	// (0x000253a5) toolbar_button_pane_g7

0x5825,	// (0x000253b5) toolbar_button_pane_g8

0x581d,	// (0x000253ad) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x0002f360) toolbar_button_pane_g

0xaeae,	// (0x0002aa3e) list_single_2graphic_pane_g1_cp3_ParamLimits

0xaeae,	// (0x0002aa3e) list_single_2graphic_pane_g1_cp3

0xaeba,	// (0x0002aa4a) list_single_2graphic_pane_g2_cp3_ParamLimits

0xaeba,	// (0x0002aa4a) list_single_2graphic_pane_g2_cp3

0xaecb,	// (0x0002aa5b) list_single_2graphic_pane_g3_cp3

0xaed3,	// (0x0002aa63) list_single_2graphic_pane_g4_cp3_ParamLimits

0xaed3,	// (0x0002aa63) list_single_2graphic_pane_g4_cp3

0xaedf,	// (0x0002aa6f) list_single_2graphic_pane_t1_cp3_ParamLimits

0xaedf,	// (0x0002aa6f) list_single_2graphic_pane_t1_cp3

0xaef9,	// (0x0002aa89) list_single_midp_graphic_pane_g2_ParamLimits

0xaef9,	// (0x0002aa89) list_single_midp_graphic_pane_g2

0xa5b3,	// (0x0002a143) aid_zoom_text_primary

0x9559,	// (0x000290e9) aid_zoom_text_secondary

0x5543,	// (0x000250d3) status_small_pane_g7_ParamLimits

0x5543,	// (0x000250d3) status_small_pane_g7

0x5566,	// (0x000250f6) status_small_pane_t1_ParamLimits

0x99f3,	// (0x00029583) title_pane_g2

0x0003,

0xf554,	// (0x0002f0e4) title_pane_g

0x9c41,	// (0x000297d1) aid_size_cell_colour_1_pane_ParamLimits

0x9c41,	// (0x000297d1) aid_size_cell_colour_1_pane

0x9c55,	// (0x000297e5) aid_size_cell_colour_2_pane_ParamLimits

0x9c55,	// (0x000297e5) aid_size_cell_colour_2_pane

0x9c69,	// (0x000297f9) aid_size_cell_colour_3_pane_ParamLimits

0x9c69,	// (0x000297f9) aid_size_cell_colour_3_pane

0x9c7d,	// (0x0002980d) aid_size_cell_colour_4_pane_ParamLimits

0x9c7d,	// (0x0002980d) aid_size_cell_colour_4_pane

0x9dc4,	// (0x00029954) title_pane_stacon_g1_ParamLimits

0x9dc4,	// (0x00029954) title_pane_stacon_g1

0x5d63,	// (0x000258f3) popup_note_wait_window_g3_ParamLimits

0x5d63,	// (0x000258f3) popup_note_wait_window_g3

0x5dd9,	// (0x00025969) popup_note_wait_window_t5_ParamLimits

0x5dd9,	// (0x00025969) popup_note_wait_window_t5

0x1b06,	// (0x00021696) main_feb_china_hwr_fs_writing_pane

0xa647,	// (0x0002a1d7) popup_feb_china_hwr_fs_window_ParamLimits

0xa647,	// (0x0002a1d7) popup_feb_china_hwr_fs_window

0xaf1b,	// (0x0002aaab) aid_size_cell_hwr_fs_ParamLimits

0xaf1b,	// (0x0002aaab) aid_size_cell_hwr_fs

0x5859,	// (0x000253e9) bg_popup_sub_pane_cp3_ParamLimits

0x5859,	// (0x000253e9) bg_popup_sub_pane_cp3

0xaf30,	// (0x0002aac0) grid_hwr_fs_pane_ParamLimits

0xaf30,	// (0x0002aac0) grid_hwr_fs_pane

0xaf48,	// (0x0002aad8) linegrid_hwr_fs_pane_ParamLimits

0xaf48,	// (0x0002aad8) linegrid_hwr_fs_pane

0xaf58,	// (0x0002aae8) cell_hwr_fs_pane_ParamLimits

0xaf58,	// (0x0002aae8) cell_hwr_fs_pane

0x5865,	// (0x000253f5) linegrid_hwr_fs_pane_g1_ParamLimits

0x5865,	// (0x000253f5) linegrid_hwr_fs_pane_g1

0xaf7a,	// (0x0002ab0a) linegrid_hwr_fs_pane_g2_ParamLimits

0xaf7a,	// (0x0002ab0a) linegrid_hwr_fs_pane_g2

0x5871,	// (0x00025401) linegrid_hwr_fs_pane_g3_ParamLimits

0x5871,	// (0x00025401) linegrid_hwr_fs_pane_g3

0xaf8c,	// (0x0002ab1c) linegrid_hwr_fs_pane_g4_ParamLimits

0xaf8c,	// (0x0002ab1c) linegrid_hwr_fs_pane_g4

0xafa6,	// (0x0002ab36) linegrid_hwr_fs_pane_g5_ParamLimits

0xafa6,	// (0x0002ab36) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x0002f38b) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0002f38b) linegrid_hwr_fs_pane_g

0x587d,	// (0x0002540d) cell_hwr_fs_pane_g1_ParamLimits

0x587d,	// (0x0002540d) cell_hwr_fs_pane_g1

0x56ef,	// (0x0002527f) cell_hwr_fs_pane_g2_ParamLimits

0x56ef,	// (0x0002527f) cell_hwr_fs_pane_g2

0xafbc,	// (0x0002ab4c) cell_hwr_fs_pane_g3_ParamLimits

0xafbc,	// (0x0002ab4c) cell_hwr_fs_pane_g3

0xafc9,	// (0x0002ab59) cell_hwr_fs_pane_g4_ParamLimits

0xafc9,	// (0x0002ab59) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x0002f396) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x0002f396) cell_hwr_fs_pane_g

0xafd6,	// (0x0002ab66) cell_hwr_fs_pane_t1

0x1b06,	// (0x00021696) grid_highlight_pane_cp6

0x1b06,	// (0x00021696) main_idle_act2_pane

0x4a69,	// (0x000245f9) aid_inside_area_popup_secondary

0xb275,	// (0x0002ae05) aid_inside_area_window_primary_ParamLimits

0xb275,	// (0x0002ae05) aid_inside_area_window_primary

0x6c12,	// (0x000267a2) ai2_news_ticker_pane

0x6c1a,	// (0x000267aa) aid_size_cell_ai1_link_ParamLimits

0x6c1a,	// (0x000267aa) aid_size_cell_ai1_link

0x6c34,	// (0x000267c4) popup_ai2_data_window_ParamLimits

0x6c34,	// (0x000267c4) popup_ai2_data_window

0x6c48,	// (0x000267d8) popup_ai2_link_window_ParamLimits

0x6c48,	// (0x000267d8) popup_ai2_link_window

0x5859,	// (0x000253e9) bg_popup_sub_pane_cp4_ParamLimits

0x5859,	// (0x000253e9) bg_popup_sub_pane_cp4

0x6c5c,	// (0x000267ec) grid_ai2_link_pane_ParamLimits

0x6c5c,	// (0x000267ec) grid_ai2_link_pane

0x6c73,	// (0x00026803) popup_ai2_link_window_g1_ParamLimits

0x6c73,	// (0x00026803) popup_ai2_link_window_g1

0x6c7f,	// (0x0002680f) popup_ai2_link_window_g2_ParamLimits

0x6c7f,	// (0x0002680f) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x0002f569) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x0002f569) popup_ai2_link_window_g

0x6c8e,	// (0x0002681e) ai2_mp_button_pane

0x6c96,	// (0x00026826) ai2_mp_volume_pane

0x59a3,	// (0x00025533) bg_popup_sub_pane_cp5_ParamLimits

0x59a3,	// (0x00025533) bg_popup_sub_pane_cp5

0x6c9e,	// (0x0002682e) heading_ai2_gene_pane_ParamLimits

0x6c9e,	// (0x0002682e) heading_ai2_gene_pane

0x6caa,	// (0x0002683a) list_ai2_gene_pane_ParamLimits

0x6caa,	// (0x0002683a) list_ai2_gene_pane

0x6cf2,	// (0x00026882) cell_ai2_link_pane_ParamLimits

0x6cf2,	// (0x00026882) cell_ai2_link_pane

0x6d08,	// (0x00026898) cell_ai2_link_pane_g1

0x1b06,	// (0x00021696) grid_highlight_pane_cp7

0xb740,	// (0x0002b2d0) ai2_mp_volume_pane_g1

0x6de1,	// (0x00026971) ai2_mp_volume_pane_g2

0x6d4e,	// (0x000268de) list_ai2_gene_pane_t1

0x6dd9,	// (0x00026969) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x0002f582) ai2_mp_volume_pane_g

0xb748,	// (0x0002b2d8) volume_small_pane_cp3

0x6de9,	// (0x00026979) aid_size_cell_ai2_button

0x6df1,	// (0x00026981) grid_ai2_button_pane

0x6dfa,	// (0x0002698a) cell_ai2_button_pane_ParamLimits

0x6dfa,	// (0x0002698a) cell_ai2_button_pane

0x1a16,	// (0x000215a6) cell_ai2_button_pane_g1

0x1b06,	// (0x00021696) grid_highlight_pane_cp8

0x6d99,	// (0x00026929) ai2_gene_pane_t1_ParamLimits

0x6d99,	// (0x00026929) ai2_gene_pane_t1

0xa5a1,	// (0x0002a131) aid_height_parent_landscape

0xb464,	// (0x0002aff4) aid_height_set_list

0x55f5,	// (0x00025185) aid_size_parent

0x6a7d,	// (0x0002660d) aid_size_cell_graphic_pane_ParamLimits

0x6cba,	// (0x0002684a) popup_ai2_data_window_g1_ParamLimits

0x6cba,	// (0x0002684a) popup_ai2_data_window_g1

0x6cc6,	// (0x00026856) ai2_news_ticker_pane_g1

0x6cce,	// (0x0002685e) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x0002f56e) ai2_news_ticker_pane_g

0x6cd6,	// (0x00026866) ai2_news_ticker_pane_t1

0x6ce4,	// (0x00026874) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x0002f573) ai2_news_ticker_pane_t

0x6d11,	// (0x000268a1) heading_ai2_gene_pane_g1

0x6d19,	// (0x000268a9) heading_ai2_gene_pane_t1_ParamLimits

0x6d19,	// (0x000268a9) heading_ai2_gene_pane_t1

0x6d2e,	// (0x000268be) list_highlight_pane_cp6

0x6d36,	// (0x000268c6) ai2_gene_pane_ParamLimits

0x6d36,	// (0x000268c6) ai2_gene_pane

0x6d5c,	// (0x000268ec) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x0002f578) list_ai2_gene_pane_t

0x6d6a,	// (0x000268fa) list_highlight_pane_cp8_ParamLimits

0x6d6a,	// (0x000268fa) list_highlight_pane_cp8

0x6d7b,	// (0x0002690b) ai2_gene_pane_g1_ParamLimits

0x6d7b,	// (0x0002690b) ai2_gene_pane_g1

0x6d8d,	// (0x0002691d) ai2_gene_pane_g2_ParamLimits

0x6d8d,	// (0x0002691d) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x0002f57d) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x0002f57d) ai2_gene_pane_g

0x226f,	// (0x00021dff) scroll_pane_cp12

0xa560,	// (0x0002a0f0) control_pane_t3_ParamLimits

0xa560,	// (0x0002a0f0) control_pane_t3

0x5557,	// (0x000250e7) status_small_pane_g8_ParamLimits

0x5557,	// (0x000250e7) status_small_pane_g8

0xa729,	// (0x0002a2b9) popup_find_window_ParamLimits

0xa93e,	// (0x0002a4ce) popup_note_image_window_ParamLimits

0xdef7,	// (0x0002da87) list_double2_graphic_pane_vc_g1_ParamLimits

0xdef7,	// (0x0002da87) list_double2_graphic_pane_vc_g1

0xd849,	// (0x0002d3d9) list_double2_graphic_pane_vc_g2_ParamLimits

0xd849,	// (0x0002d3d9) list_double2_graphic_pane_vc_g2

0xd855,	// (0x0002d3e5) list_double2_graphic_pane_vc_g3_ParamLimits

0xd855,	// (0x0002d3e5) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x0002f354) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x0002f354) list_double2_graphic_pane_vc_g

0xdf03,	// (0x0002da93) list_double2_graphic_pane_vc_t1_ParamLimits

0xdf03,	// (0x0002da93) list_double2_graphic_pane_vc_t1

0xd849,	// (0x0002d3d9) list_single_heading_pane_vc_g1_ParamLimits

0xd849,	// (0x0002d3d9) list_single_heading_pane_vc_g1

0xd855,	// (0x0002d3e5) list_single_heading_pane_vc_g2_ParamLimits

0xd855,	// (0x0002d3e5) list_single_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002f375) list_single_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002f375) list_single_heading_pane_vc_g

0xdf19,	// (0x0002daa9) list_single_heading_pane_vc_t1_ParamLimits

0xdf19,	// (0x0002daa9) list_single_heading_pane_vc_t1

0xdf2f,	// (0x0002dabf) list_single_heading_pane_vc_t2_ParamLimits

0xdf2f,	// (0x0002dabf) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x0002f37a) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x0002f37a) list_single_heading_pane_vc_t

0xdf4b,	// (0x0002dadb) list_setting_number_pane_vc_g1_ParamLimits

0xdf4b,	// (0x0002dadb) list_setting_number_pane_vc_g1

0xdf57,	// (0x0002dae7) list_setting_number_pane_vc_g2_ParamLimits

0xdf57,	// (0x0002dae7) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x0002f37f) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x0002f37f) list_setting_number_pane_vc_g

0xdf63,	// (0x0002daf3) list_setting_number_pane_vc_t1_ParamLimits

0xdf63,	// (0x0002daf3) list_setting_number_pane_vc_t1

0xdf77,	// (0x0002db07) list_setting_number_pane_vc_t2_ParamLimits

0xdf77,	// (0x0002db07) list_setting_number_pane_vc_t2

0xdf91,	// (0x0002db21) list_setting_number_pane_vc_t3_ParamLimits

0xdf91,	// (0x0002db21) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x0002f384) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x0002f384) list_setting_number_pane_vc_t

0xdfab,	// (0x0002db3b) set_value_pane_vc_ParamLimits

0xdfab,	// (0x0002db3b) set_value_pane_vc

0x69fa,	// (0x0002658a) list_double2_graphic_pane_vc_ParamLimits

0x69fa,	// (0x0002658a) list_double2_graphic_pane_vc

0x69fa,	// (0x0002658a) list_double2_large_graphic_pane_vc_ParamLimits

0x69fa,	// (0x0002658a) list_double2_large_graphic_pane_vc

0x69fa,	// (0x0002658a) list_double2_pane_vc_ParamLimits

0x69fa,	// (0x0002658a) list_double2_pane_vc

0x69fa,	// (0x0002658a) list_double_graphic_heading_pane_vc_ParamLimits

0x69fa,	// (0x0002658a) list_double_graphic_heading_pane_vc

0x69fa,	// (0x0002658a) list_double_graphic_pane_vc_ParamLimits

0x69fa,	// (0x0002658a) list_double_graphic_pane_vc

0x69fa,	// (0x0002658a) list_double_heading_pane_vc_ParamLimits

0x69fa,	// (0x0002658a) list_double_heading_pane_vc

0x69fa,	// (0x0002658a) list_double_large_graphic_pane_vc_ParamLimits

0x69fa,	// (0x0002658a) list_double_large_graphic_pane_vc

0x69fa,	// (0x0002658a) list_double_number_pane_vc_ParamLimits

0x69fa,	// (0x0002658a) list_double_number_pane_vc

0x69fa,	// (0x0002658a) list_double_pane_vc_ParamLimits

0x69fa,	// (0x0002658a) list_double_pane_vc

0x69fa,	// (0x0002658a) list_double_time_pane_vc_ParamLimits

0x69fa,	// (0x0002658a) list_double_time_pane_vc

0x69fa,	// (0x0002658a) list_setting_number_pane_vc_ParamLimits

0x69fa,	// (0x0002658a) list_setting_number_pane_vc

0x69fa,	// (0x0002658a) list_setting_pane_vc_ParamLimits

0x69fa,	// (0x0002658a) list_setting_pane_vc

0x69fa,	// (0x0002658a) list_single_graphic_heading_pane_vc_ParamLimits

0x69fa,	// (0x0002658a) list_single_graphic_heading_pane_vc

0x69fa,	// (0x0002658a) list_single_heading_pane_vc_ParamLimits

0x69fa,	// (0x0002658a) list_single_heading_pane_vc

0xe08f,	// (0x0002dc1f) list_single_number_heading_pane_vc_ParamLimits

0xe08f,	// (0x0002dc1f) list_single_number_heading_pane_vc

0xe161,	// (0x0002dcf1) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe161,	// (0x0002dcf1) list_double_graphic_heading_pane_vc_g1

0xd849,	// (0x0002d3d9) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd849,	// (0x0002d3d9) list_double_graphic_heading_pane_vc_g2

0xd855,	// (0x0002d3e5) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd855,	// (0x0002d3e5) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f9,	// (0x0002f589) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f9,	// (0x0002f589) list_double_graphic_heading_pane_vc_g

0xe16d,	// (0x0002dcfd) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe16d,	// (0x0002dcfd) list_double_graphic_heading_pane_vc_t1

0xe189,	// (0x0002dd19) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe189,	// (0x0002dd19) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa00,	// (0x0002f590) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa00,	// (0x0002f590) list_double_graphic_heading_pane_vc_t

0xdf4b,	// (0x0002dadb) list_setting_pane_vc_g1_ParamLimits

0xdf4b,	// (0x0002dadb) list_setting_pane_vc_g1

0xdf57,	// (0x0002dae7) list_setting_pane_vc_g2_ParamLimits

0xdf57,	// (0x0002dae7) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x0002f37f) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x0002f37f) list_setting_pane_vc_g

0xe1a1,	// (0x0002dd31) list_setting_pane_vc_t1_ParamLimits

0xe1a1,	// (0x0002dd31) list_setting_pane_vc_t1

0xe1bb,	// (0x0002dd4b) list_setting_pane_vc_t2_ParamLimits

0xe1bb,	// (0x0002dd4b) list_setting_pane_vc_t2

0x0001,

0xfa43,	// (0x0002f5d3) list_setting_pane_vc_t_ParamLimits

0xfa43,	// (0x0002f5d3) list_setting_pane_vc_t

0xdfab,	// (0x0002db3b) set_value_pane_cp_vc_ParamLimits

0xdfab,	// (0x0002db3b) set_value_pane_cp_vc

0xd849,	// (0x0002d3d9) list_single_number_heading_pane_vc_g1_ParamLimits

0xd849,	// (0x0002d3d9) list_single_number_heading_pane_vc_g1

0xd855,	// (0x0002d3e5) list_single_number_heading_pane_vc_g2_ParamLimits

0xd855,	// (0x0002d3e5) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002f375) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002f375) list_single_number_heading_pane_vc_g

0xdf19,	// (0x0002daa9) list_single_number_heading_pane_vc_t1_ParamLimits

0xdf19,	// (0x0002daa9) list_single_number_heading_pane_vc_t1

0xe1d3,	// (0x0002dd63) list_single_number_heading_pane_vc_t2_ParamLimits

0xe1d3,	// (0x0002dd63) list_single_number_heading_pane_vc_t2

0xe1e7,	// (0x0002dd77) list_single_number_heading_pane_vc_t3_ParamLimits

0xe1e7,	// (0x0002dd77) list_single_number_heading_pane_vc_t3

0x0002,

0xfa48,	// (0x0002f5d8) list_single_number_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x0002f5d8) list_single_number_heading_pane_vc_t

0xdef7,	// (0x0002da87) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xdef7,	// (0x0002da87) list_single_graphic_heading_pane_vc_g1

0xd849,	// (0x0002d3d9) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd849,	// (0x0002d3d9) list_single_graphic_heading_pane_vc_g4

0xd855,	// (0x0002d3e5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd855,	// (0x0002d3e5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c4,	// (0x0002f354) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c4,	// (0x0002f354) list_single_graphic_heading_pane_vc_g

0xdf19,	// (0x0002daa9) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xdf19,	// (0x0002daa9) list_single_graphic_heading_pane_vc_t1

0xe1f9,	// (0x0002dd89) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe1f9,	// (0x0002dd89) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4f,	// (0x0002f5df) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4f,	// (0x0002f5df) list_single_graphic_heading_pane_vc_t

0xd849,	// (0x0002d3d9) list_double2_pane_vc_g1_ParamLimits

0xd849,	// (0x0002d3d9) list_double2_pane_vc_g1

0xd855,	// (0x0002d3e5) list_double2_pane_vc_g2_ParamLimits

0xd855,	// (0x0002d3e5) list_double2_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002f375) list_double2_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002f375) list_double2_pane_vc_g

0xe20d,	// (0x0002dd9d) list_double2_pane_vc_t1_ParamLimits

0xe20d,	// (0x0002dd9d) list_double2_pane_vc_t1

0xe223,	// (0x0002ddb3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe223,	// (0x0002ddb3) list_double2_large_graphic_pane_vc_g1

0xd849,	// (0x0002d3d9) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd849,	// (0x0002d3d9) list_double2_large_graphic_pane_vc_g2

0xd855,	// (0x0002d3e5) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd855,	// (0x0002d3e5) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa54,	// (0x0002f5e4) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa54,	// (0x0002f5e4) list_double2_large_graphic_pane_vc_g

0xe22f,	// (0x0002ddbf) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe22f,	// (0x0002ddbf) list_double2_large_graphic_pane_vc_t1

0xe245,	// (0x0002ddd5) list_double_time_pane_vc_g1_ParamLimits

0xe245,	// (0x0002ddd5) list_double_time_pane_vc_g1

0xe251,	// (0x0002dde1) list_double_time_pane_vc_g2_ParamLimits

0xe251,	// (0x0002dde1) list_double_time_pane_vc_g2

0x0001,

0xfa5b,	// (0x0002f5eb) list_double_time_pane_vc_g_ParamLimits

0xfa5b,	// (0x0002f5eb) list_double_time_pane_vc_g

0xe25d,	// (0x0002dded) list_double_time_pane_vc_t1_ParamLimits

0xe25d,	// (0x0002dded) list_double_time_pane_vc_t1

0xe281,	// (0x0002de11) list_double_time_pane_vc_t2_ParamLimits

0xe281,	// (0x0002de11) list_double_time_pane_vc_t2

0xe2cb,	// (0x0002de5b) list_double_time_pane_vc_t3_ParamLimits

0xe2cb,	// (0x0002de5b) list_double_time_pane_vc_t3

0xe2dd,	// (0x0002de6d) list_double_time_pane_vc_t4_ParamLimits

0xe2dd,	// (0x0002de6d) list_double_time_pane_vc_t4

0x0003,

0xfa60,	// (0x0002f5f0) list_double_time_pane_vc_t_ParamLimits

0xfa60,	// (0x0002f5f0) list_double_time_pane_vc_t

0xd849,	// (0x0002d3d9) list_double_pane_vc_g1_ParamLimits

0xd849,	// (0x0002d3d9) list_double_pane_vc_g1

0xd855,	// (0x0002d3e5) list_double_pane_vc_g2_ParamLimits

0xd855,	// (0x0002d3e5) list_double_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002f375) list_double_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002f375) list_double_pane_vc_g

0xe2f1,	// (0x0002de81) list_double_pane_vc_t1_ParamLimits

0xe2f1,	// (0x0002de81) list_double_pane_vc_t1

0xe305,	// (0x0002de95) list_double_pane_vc_t2_ParamLimits

0xe305,	// (0x0002de95) list_double_pane_vc_t2

0x0001,

0xfa69,	// (0x0002f5f9) list_double_pane_vc_t_ParamLimits

0xfa69,	// (0x0002f5f9) list_double_pane_vc_t

0xd849,	// (0x0002d3d9) list_double_number_pane_vc_g1_ParamLimits

0xd849,	// (0x0002d3d9) list_double_number_pane_vc_g1

0xd855,	// (0x0002d3e5) list_double_number_pane_vc_g2_ParamLimits

0xd855,	// (0x0002d3e5) list_double_number_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002f375) list_double_number_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002f375) list_double_number_pane_vc_g

0xe31d,	// (0x0002dead) list_double_number_pane_vc_t1_ParamLimits

0xe31d,	// (0x0002dead) list_double_number_pane_vc_t1

0xe32f,	// (0x0002debf) list_double_number_pane_vc_t2_ParamLimits

0xe32f,	// (0x0002debf) list_double_number_pane_vc_t2

0xe305,	// (0x0002de95) list_double_number_pane_vc_t3_ParamLimits

0xe305,	// (0x0002de95) list_double_number_pane_vc_t3

0x0002,

0xfa6e,	// (0x0002f5fe) list_double_number_pane_vc_t_ParamLimits

0xfa6e,	// (0x0002f5fe) list_double_number_pane_vc_t

0xe343,	// (0x0002ded3) list_double_large_graphic_pane_vc_g1_ParamLimits

0xe343,	// (0x0002ded3) list_double_large_graphic_pane_vc_g1

0xe34f,	// (0x0002dedf) list_double_large_graphic_pane_vc_g2_ParamLimits

0xe34f,	// (0x0002dedf) list_double_large_graphic_pane_vc_g2

0xd855,	// (0x0002d3e5) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd855,	// (0x0002d3e5) list_double_large_graphic_pane_vc_g3

0xe35e,	// (0x0002deee) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe35e,	// (0x0002deee) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa75,	// (0x0002f605) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa75,	// (0x0002f605) list_double_large_graphic_pane_vc_g

0xe36a,	// (0x0002defa) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe36a,	// (0x0002defa) list_double_large_graphic_pane_vc_t1

0xe37e,	// (0x0002df0e) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe37e,	// (0x0002df0e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7e,	// (0x0002f60e) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7e,	// (0x0002f60e) list_double_large_graphic_pane_vc_t

0xd849,	// (0x0002d3d9) list_double_heading_pane_vc_g1_ParamLimits

0xd849,	// (0x0002d3d9) list_double_heading_pane_vc_g1

0xd855,	// (0x0002d3e5) list_double_heading_pane_vc_g2_ParamLimits

0xd855,	// (0x0002d3e5) list_double_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002f375) list_double_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002f375) list_double_heading_pane_vc_g

0xe397,	// (0x0002df27) list_double_heading_pane_vc_t1_ParamLimits

0xe397,	// (0x0002df27) list_double_heading_pane_vc_t1

0xdf19,	// (0x0002daa9) list_double_heading_pane_vc_t2_ParamLimits

0xdf19,	// (0x0002daa9) list_double_heading_pane_vc_t2

0x0001,

0xfa83,	// (0x0002f613) list_double_heading_pane_vc_t_ParamLimits

0xfa83,	// (0x0002f613) list_double_heading_pane_vc_t

0xe3ab,	// (0x0002df3b) list_double_graphic_pane_vc_g1_ParamLimits

0xe3ab,	// (0x0002df3b) list_double_graphic_pane_vc_g1

0xe3bb,	// (0x0002df4b) list_double_graphic_pane_vc_g2_ParamLimits

0xe3bb,	// (0x0002df4b) list_double_graphic_pane_vc_g2

0xe3ca,	// (0x0002df5a) list_double_graphic_pane_vc_g3_ParamLimits

0xe3ca,	// (0x0002df5a) list_double_graphic_pane_vc_g3

0x0002,

0xfa88,	// (0x0002f618) list_double_graphic_pane_vc_g_ParamLimits

0xfa88,	// (0x0002f618) list_double_graphic_pane_vc_g

0xe3d6,	// (0x0002df66) list_double_graphic_pane_vc_t1_ParamLimits

0xe3d6,	// (0x0002df66) list_double_graphic_pane_vc_t1

0xe3ea,	// (0x0002df7a) list_double_graphic_pane_vc_t2_ParamLimits

0xe3ea,	// (0x0002df7a) list_double_graphic_pane_vc_t2

0x0001,

0xfa8f,	// (0x0002f61f) list_double_graphic_pane_vc_t_ParamLimits

0xfa8f,	// (0x0002f61f) list_double_graphic_pane_vc_t

0x9613,	// (0x000291a3) aid_size_cell_fastswap

0x961b,	// (0x000291ab) aid_size_cell_touch_ParamLimits

0x961b,	// (0x000291ab) aid_size_cell_touch

0x9880,	// (0x00029410) popup_fast_swap_wide_window_ParamLimits

0x9880,	// (0x00029410) popup_fast_swap_wide_window

0x9986,	// (0x00029516) touch_pane_ParamLimits

0x9986,	// (0x00029516) touch_pane

0x494e,	// (0x000244de) button_value_adjust_pane_cp2

0xdc19,	// (0x0002d7a9) button_value_adjust_pane_cp4

0xdc39,	// (0x0002d7c9) form_field_data_pane_cp2

0xdc58,	// (0x0002d7e8) form_field_data_wide_pane_cp2

0x4c99,	// (0x00024829) bg_scroll_pane_ParamLimits

0x9fb9,	// (0x00029b49) scroll_handle_pane_ParamLimits

0x9fcd,	// (0x00029b5d) scroll_sc2_down_pane_ParamLimits

0x9fcd,	// (0x00029b5d) scroll_sc2_down_pane

0x4cca,	// (0x0002485a) scroll_sc2_up_pane_ParamLimits

0x4cca,	// (0x0002485a) scroll_sc2_up_pane

0xb8d0,	// (0x0002b460) grid_wheel_folder_pane_g1_ParamLimits

0xb8d0,	// (0x0002b460) grid_wheel_folder_pane_g1

0xa24e,	// (0x00029dde) clock_nsta_pane_cp2_ParamLimits

0xa24e,	// (0x00029dde) clock_nsta_pane_cp2

0x9d6a,	// (0x000298fa) listscroll_midp_pane_ParamLimits

0xa2d6,	// (0x00029e66) midp_canvas_pane

0x55ab,	// (0x0002513b) nsta_clock_indic_pane

0x55db,	// (0x0002516b) listscroll_form_pane_vc

0x55e3,	// (0x00025173) listscroll_set_pane_vc_ParamLimits

0x55e3,	// (0x00025173) listscroll_set_pane_vc

0xac26,	// (0x0002a7b6) clock_nsta_pane

0xac33,	// (0x0002a7c3) indicator_nsta_pane

0x5723,	// (0x000252b3) bg_popup_sub_pane_cp2_ParamLimits

0x5737,	// (0x000252c7) find_pane_cp2_ParamLimits

0x5737,	// (0x000252c7) find_pane_cp2

0x574d,	// (0x000252dd) grid_toobar_pane_ParamLimits

0x582d,	// (0x000253bd) list_form_gen_pane_vc_ParamLimits

0x582d,	// (0x000253bd) list_form_gen_pane_vc

0x5843,	// (0x000253d3) scroll_pane_cp8_vc_ParamLimits

0x5843,	// (0x000253d3) scroll_pane_cp8_vc

0x5893,	// (0x00025423) data_form_wide_pane_vc_ParamLimits

0x5893,	// (0x00025423) data_form_wide_pane_vc

0x589f,	// (0x0002542f) form_field_data_wide_pane_vc_g1

0x58a7,	// (0x00025437) form_field_data_wide_pane_vc_t1_ParamLimits

0x58a7,	// (0x00025437) form_field_data_wide_pane_vc_t1

0x4962,	// (0x000244f2) input_focus_pane_cp6_vc_ParamLimits

0x4962,	// (0x000244f2) input_focus_pane_cp6_vc

0xb0ce,	// (0x0002ac5e) list_midp_pane_ParamLimits

0xb0da,	// (0x0002ac6a) scroll_pane_cp16_ParamLimits

0xb0da,	// (0x0002ac6a) scroll_pane_cp16

0x5b3d,	// (0x000256cd) button_value_adjust_pane_ParamLimits

0x5b3d,	// (0x000256cd) button_value_adjust_pane

0xb475,	// (0x0002b005) button_value_adjust_pane_cp6_ParamLimits

0xb475,	// (0x0002b005) button_value_adjust_pane_cp6

0xb59b,	// (0x0002b12b) settings_code_pane_cp_ParamLimits

0xb59b,	// (0x0002b12b) settings_code_pane_cp

0x1a16,	// (0x000215a6) cell_touch_pane_g1

0x1a16,	// (0x000215a6) cell_touch_pane_g2

0x0001,

0xf709,	// (0x0002f299) cell_touch_pane_g

0xb751,	// (0x0002b2e1) cell_touch_pane_cp_ParamLimits

0xb751,	// (0x0002b2e1) cell_touch_pane_cp

0xb761,	// (0x0002b2f1) cell_touch_pane_ParamLimits

0xb761,	// (0x0002b2f1) cell_touch_pane

0x1a16,	// (0x000215a6) scroll_sc2_down_pane_g1

0x1a16,	// (0x000215a6) scroll_sc2_up_pane_g1

0x1b06,	// (0x00021696) bg_set_opt_pane_cp4_vc

0x6e0c,	// (0x0002699c) list_set_graphic_pane_vc_g1_ParamLimits

0x6e0c,	// (0x0002699c) list_set_graphic_pane_vc_g1

0x6e18,	// (0x000269a8) list_set_graphic_pane_vc_g2_ParamLimits

0x6e18,	// (0x000269a8) list_set_graphic_pane_vc_g2

0x0001,

0xfa05,	// (0x0002f595) list_set_graphic_pane_vc_g_ParamLimits

0xfa05,	// (0x0002f595) list_set_graphic_pane_vc_g

0x6e24,	// (0x000269b4) text_primary_small_cp13_vc_ParamLimits

0x6e24,	// (0x000269b4) text_primary_small_cp13_vc

0x6946,	// (0x000264d6) list_set_graphic_pane_vc_ParamLimits

0x6946,	// (0x000264d6) list_set_graphic_pane_vc

0x1b06,	// (0x00021696) input_focus_pane_cp2_vc

0x1a16,	// (0x000215a6) setting_code_pane_vc_g1

0x1ca9,	// (0x00021839) setting_code_pane_vc_t1

0x6e3c,	// (0x000269cc) set_text_pane_vc_t1_ParamLimits

0x6e3c,	// (0x000269cc) set_text_pane_vc_t1

0x1b06,	// (0x00021696) input_focus_pane_cp1_vc

0x6e59,	// (0x000269e9) list_set_text_pane_vc

0x1a16,	// (0x000215a6) setting_text_pane_vc_g1

0x1b06,	// (0x00021696) bg_set_opt_pane_cp2_vc

0x1ca0,	// (0x00021830) setting_slider_graphic_pane_vc_g1

0x6e63,	// (0x000269f3) setting_slider_graphic_pane_vc_t1

0x6e73,	// (0x00026a03) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0a,	// (0x0002f59a) setting_slider_graphic_pane_vc_t

0x6e83,	// (0x00026a13) slider_set_pane_cp_vc

0x6e8b,	// (0x00026a1b) slider_set_pane_vc_g1

0x6e94,	// (0x00026a24) slider_set_pane_vc_g2

0x0006,

0xfa0f,	// (0x0002f59f) slider_set_pane_vc_g

0x49b1,	// (0x00024541) set_opt_bg_pane_g1_copy1

0x49b9,	// (0x00024549) set_opt_bg_pane_g2_copy1

0x6ec0,	// (0x00026a50) set_opt_bg_pane_g3_copy1

0x49c9,	// (0x00024559) set_opt_bg_pane_g4_copy1

0x49d1,	// (0x00024561) set_opt_bg_pane_g5_copy1

0x49d9,	// (0x00024569) set_opt_bg_pane_g6_copy1

0x6ec8,	// (0x00026a58) set_opt_bg_pane_g7_copy1

0x6ed2,	// (0x00026a62) set_opt_bg_pane_g8_copy1

0x6eda,	// (0x00026a6a) set_opt_bg_pane_g9_copy1

0x1b06,	// (0x00021696) bg_set_opt_pane_cp_vc

0x6ee2,	// (0x00026a72) setting_slider_pane_vc_t1

0x6ef1,	// (0x00026a81) setting_slider_pane_vc_t2

0x6f01,	// (0x00026a91) setting_slider_pane_vc_t3

0x0002,

0xfa1e,	// (0x0002f5ae) setting_slider_pane_vc_t

0x6f11,	// (0x00026aa1) slider_set_pane_vc

0xb120,	// (0x0002acb0) volume_set_pane_vc_g1

0xb772,	// (0x0002b302) volume_set_pane_vc_g2

0xb77b,	// (0x0002b30b) volume_set_pane_vc_g3

0xb784,	// (0x0002b314) volume_set_pane_vc_g4

0xb78d,	// (0x0002b31d) volume_set_pane_vc_g5

0xb796,	// (0x0002b326) volume_set_pane_vc_g6

0xb14d,	// (0x0002acdd) volume_set_pane_vc_g7

0xb79f,	// (0x0002b32f) volume_set_pane_vc_g8

0xb7a8,	// (0x0002b338) volume_set_pane_vc_g9

0xb7b1,	// (0x0002b341) volume_set_pane_vc_g10

0x0009,

0xfa25,	// (0x0002f5b5) volume_set_pane_vc_g

0x6f19,	// (0x00026aa9) volume_set_pane_vc

0x6f21,	// (0x00026ab1) button_value_adjust_pane_cp1_vc

0x6f2b,	// (0x00026abb) list_highlight_pane_cp2_vc

0x6f34,	// (0x00026ac4) list_set_pane_vc_ParamLimits

0x6f34,	// (0x00026ac4) list_set_pane_vc

0x6f92,	// (0x00026b22) main_pane_set_vc_t1_ParamLimits

0x6f92,	// (0x00026b22) main_pane_set_vc_t1

0x6fa7,	// (0x00026b37) main_pane_set_vc_t2_ParamLimits

0x6fa7,	// (0x00026b37) main_pane_set_vc_t2

0x6fb9,	// (0x00026b49) main_pane_set_vc_t3_ParamLimits

0x6fb9,	// (0x00026b49) main_pane_set_vc_t3

0x6fcb,	// (0x00026b5b) main_pane_set_vc_t4_ParamLimits

0x6fcb,	// (0x00026b5b) main_pane_set_vc_t4

0x0003,

0xfa3a,	// (0x0002f5ca) main_pane_set_vc_t_ParamLimits

0xfa3a,	// (0x0002f5ca) main_pane_set_vc_t

0x6fdd,	// (0x00026b6d) setting_code_pane_vc_ParamLimits

0x6fdd,	// (0x00026b6d) setting_code_pane_vc

0x6fec,	// (0x00026b7c) setting_slider_graphic_pane_vc

0x6fec,	// (0x00026b7c) setting_slider_pane_vc

0x6fec,	// (0x00026b7c) setting_text_pane_vc

0x6fec,	// (0x00026b7c) setting_volume_pane_vc

0x6ff4,	// (0x00026b84) scroll_pane_cp121_vc

0x493c,	// (0x000244cc) set_content_pane_vc

0x6ffc,	// (0x00026b8c) button_value_adjust_pane_g1

0x7005,	// (0x00026b95) button_value_adjust_pane_g2

0x0001,

0xfa94,	// (0x0002f624) button_value_adjust_pane_g

0x700e,	// (0x00026b9e) form_field_slider_wide_pane_vc_t1_ParamLimits

0x700e,	// (0x00026b9e) form_field_slider_wide_pane_vc_t1

0x7022,	// (0x00026bb2) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7022,	// (0x00026bb2) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa99,	// (0x0002f629) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x0002f629) form_field_slider_wide_pane_vc_t

0x1c74,	// (0x00021804) input_focus_pane_cp10_vc_ParamLimits

0x1c74,	// (0x00021804) input_focus_pane_cp10_vc

0x704e,	// (0x00026bde) slider_cont_pane_cp1_vc_ParamLimits

0x704e,	// (0x00026bde) slider_cont_pane_cp1_vc

0x705e,	// (0x00026bee) slider_form_pane_g1_cp2

0x6e94,	// (0x00026a24) slider_form_pane_g2_cp2

0x708b,	// (0x00026c1b) form_field_slider_pane_vc_t3

0x7099,	// (0x00026c29) form_field_slider_pane_vc_t4

0x70a7,	// (0x00026c37) slider_form_pane_vc_ParamLimits

0x70a7,	// (0x00026c37) slider_form_pane_vc

0x70b4,	// (0x00026c44) form_field_slider_pane_vc_t1_ParamLimits

0x70b4,	// (0x00026c44) form_field_slider_pane_vc_t1

0x7022,	// (0x00026bb2) form_field_slider_pane_vc_t2_ParamLimits

0x7022,	// (0x00026bb2) form_field_slider_pane_vc_t2

0x0001,

0xfaab,	// (0x0002f63b) form_field_slider_pane_vc_t_ParamLimits

0xfaab,	// (0x0002f63b) form_field_slider_pane_vc_t

0x1c74,	// (0x00021804) input_focus_pane_cp9_vc_ParamLimits

0x1c74,	// (0x00021804) input_focus_pane_cp9_vc

0x70d0,	// (0x00026c60) slider_cont_pane_vc_ParamLimits

0x70d0,	// (0x00026c60) slider_cont_pane_vc

0x70e2,	// (0x00026c72) list_form_graphic_pane_cp_vc_ParamLimits

0x70e2,	// (0x00026c72) list_form_graphic_pane_cp_vc

0x589f,	// (0x0002542f) form_field_popup_wide_pane_vc_g1

0x70f7,	// (0x00026c87) form_field_popup_wide_pane_vc_t1_ParamLimits

0x70f7,	// (0x00026c87) form_field_popup_wide_pane_vc_t1

0x4962,	// (0x000244f2) input_focus_pane_cp8_vc_ParamLimits

0x4962,	// (0x000244f2) input_focus_pane_cp8_vc

0x713c,	// (0x00026ccc) list_form_wide_pane_vc_ParamLimits

0x713c,	// (0x00026ccc) list_form_wide_pane_vc

0x7148,	// (0x00026cd8) list_form_graphic_pane_vc_g1

0x7150,	// (0x00026ce0) list_form_graphic_pane_vc_t1_ParamLimits

0x7150,	// (0x00026ce0) list_form_graphic_pane_vc_t1

0x1c92,	// (0x00021822) list_highlight_pane_cp5_vc_ParamLimits

0x1c92,	// (0x00021822) list_highlight_pane_cp5_vc

0x716c,	// (0x00026cfc) list_form_graphic_pane_vc_ParamLimits

0x716c,	// (0x00026cfc) list_form_graphic_pane_vc

0x589f,	// (0x0002542f) form_field_popup_pane_vc_g1

0x7182,	// (0x00026d12) form_field_popup_pane_vc_t1_ParamLimits

0x7182,	// (0x00026d12) form_field_popup_pane_vc_t1

0x4962,	// (0x000244f2) input_focus_pane_cp7_vc_ParamLimits

0x4962,	// (0x000244f2) input_focus_pane_cp7_vc

0x7199,	// (0x00026d29) list_form_pane_vc_ParamLimits

0x7199,	// (0x00026d29) list_form_pane_vc

0x71a5,	// (0x00026d35) data_form_pane_vc_t1_ParamLimits

0x71a5,	// (0x00026d35) data_form_pane_vc_t1

0x49b1,	// (0x00024541) input_focus_pane_vc_g1

0x49b9,	// (0x00024549) input_focus_pane_vc_g2

0x49c1,	// (0x00024551) input_focus_pane_vc_g3

0x49c9,	// (0x00024559) input_focus_pane_vc_g4

0x49d1,	// (0x00024561) input_focus_pane_vc_g5

0x49d9,	// (0x00024569) input_focus_pane_vc_g6

0x49e1,	// (0x00024571) input_focus_pane_vc_g7

0x49e9,	// (0x00024579) input_focus_pane_vc_g8

0x49f1,	// (0x00024581) input_focus_pane_vc_g9

0x1a16,	// (0x000215a6) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x0002f222) input_focus_pane_vc_g

0x5893,	// (0x00025423) data_form_pane_vc_ParamLimits

0x5893,	// (0x00025423) data_form_pane_vc

0x589f,	// (0x0002542f) form_field_data_pane_vc_g1

0x71c0,	// (0x00026d50) form_field_data_pane_vc_t1_ParamLimits

0x71c0,	// (0x00026d50) form_field_data_pane_vc_t1

0x4962,	// (0x000244f2) input_focus_pane_vc_ParamLimits

0x4962,	// (0x000244f2) input_focus_pane_vc

0x71da,	// (0x00026d6a) button_value_adjust_pane_cp3_vc

0x71e2,	// (0x00026d72) button_value_adjust_pane_cp5_vc

0x71ea,	// (0x00026d7a) form_field_data_pane_vc_ParamLimits

0x71ea,	// (0x00026d7a) form_field_data_pane_vc

0x7201,	// (0x00026d91) form_field_data_pane_vc_cp2

0x7209,	// (0x00026d99) form_field_data_wide_pane_vc_ParamLimits

0x7209,	// (0x00026d99) form_field_data_wide_pane_vc

0x721f,	// (0x00026daf) form_field_data_wide_pane_vc_cp2

0x7227,	// (0x00026db7) form_field_popup_pane_vc_ParamLimits

0x7227,	// (0x00026db7) form_field_popup_pane_vc

0x723e,	// (0x00026dce) form_field_popup_wide_pane_vc_ParamLimits

0x723e,	// (0x00026dce) form_field_popup_wide_pane_vc

0x7254,	// (0x00026de4) form_field_slider_pane_vc_ParamLimits

0x7254,	// (0x00026de4) form_field_slider_pane_vc

0x7267,	// (0x00026df7) form_field_slider_wide_pane_vc_ParamLimits

0x7267,	// (0x00026df7) form_field_slider_wide_pane_vc

0xb7ba,	// (0x0002b34a) grid_touch_1_pane_ParamLimits

0xb7ba,	// (0x0002b34a) grid_touch_1_pane

0xb7c6,	// (0x0002b356) grid_touch_2_pane_ParamLimits

0xb7c6,	// (0x0002b356) grid_touch_2_pane

0x559d,	// (0x0002512d) touch_pane_g1_ParamLimits

0x559d,	// (0x0002512d) touch_pane_g1

0x7288,	// (0x00026e18) cell_app_pane_cp_wide_ParamLimits

0x7288,	// (0x00026e18) cell_app_pane_cp_wide

0x7299,	// (0x00026e29) grid_popup_fast_wide_pane_ParamLimits

0x7299,	// (0x00026e29) grid_popup_fast_wide_pane

0x72ad,	// (0x00026e3d) scroll_pane_cp19_ParamLimits

0x72ad,	// (0x00026e3d) scroll_pane_cp19

0x1b06,	// (0x00021696) bg_popup_window_pane_cp20

0x72c1,	// (0x00026e51) listscroll_popup_fast_wide_pane

0x1c92,	// (0x00021822) grid_indicator_nsta_pane

0x72c9,	// (0x00026e59) clock_nsta_pane_g1

0x72d2,	// (0x00026e62) clock_nsta_pane_t1

0xb7de,	// (0x0002b36e) cell_indicator_nsta_pane_ParamLimits

0xb7de,	// (0x0002b36e) cell_indicator_nsta_pane

0x727a,	// (0x00026e0a) cell_indicator_nsta_pane_g1

0xb816,	// (0x0002b3a6) cell_indicator_nsta_pane_g2

0x0001,

0xfabc,	// (0x0002f64c) cell_indicator_nsta_pane_g

0x72ee,	// (0x00026e7e) clock_nsta_pane_cp

0x72f6,	// (0x00026e86) indicator_nsta_pane_cp

0x72fe,	// (0x00026e8e) nsta_clock_indic_pane_g1

0x1cce,	// (0x0002185e) grid_indicator_pane

0x4dbf,	// (0x0002494f) scroll_pane_cp29

0xa19d,	// (0x00029d2d) indicator_nsta_pane_cp2_ParamLimits

0xa19d,	// (0x00029d2d) indicator_nsta_pane_cp2

0x1c92,	// (0x00021822) main_apps_wheel_pane

0x59e0,	// (0x00025570) form_midp_field_text_pane_ParamLimits

0x5b0f,	// (0x0002569f) scroll_bar_cp050_ParamLimits

0x735f,	// (0x00026eef) cell_indicator_pane_ParamLimits

0x735f,	// (0x00026eef) cell_indicator_pane

0x737a,	// (0x00026f0a) cell_indicator_pane_g1

0xb82c,	// (0x0002b3bc) grid_wheel_folder_pane_ParamLimits

0xb82c,	// (0x0002b3bc) grid_wheel_folder_pane

0xb842,	// (0x0002b3d2) list_wheel_apps_pane_ParamLimits

0xb842,	// (0x0002b3d2) list_wheel_apps_pane

0xb853,	// (0x0002b3e3) main_apps_wheel_pane_g1_ParamLimits

0xb853,	// (0x0002b3e3) main_apps_wheel_pane_g1

0xb867,	// (0x0002b3f7) main_apps_wheel_pane_g2_ParamLimits

0xb867,	// (0x0002b3f7) main_apps_wheel_pane_g2

0x0001,

0xfad8,	// (0x0002f668) main_apps_wheel_pane_g_ParamLimits

0xfad8,	// (0x0002f668) main_apps_wheel_pane_g

0xb87f,	// (0x0002b40f) main_apps_wheel_pane_t1_ParamLimits

0xb87f,	// (0x0002b40f) main_apps_wheel_pane_t1

0xb8a2,	// (0x0002b432) list_wheel_apps_pane_g1

0xb8aa,	// (0x0002b43a) list_wheel_apps_pane_g2

0xb8b2,	// (0x0002b442) list_wheel_apps_pane_g3

0xb8bc,	// (0x0002b44c) list_wheel_apps_pane_g4

0xb8c6,	// (0x0002b456) list_wheel_apps_pane_g5

0x0004,

0xfadd,	// (0x0002f66d) list_wheel_apps_pane_g

0x5223,	// (0x00024db3) navi_icon_text_pane

0xab6e,	// (0x0002a6fe) aid_fill_nsta

0x7384,	// (0x00026f14) navi_icon_text_pane_g1

0x7390,	// (0x00026f20) navi_icon_text_pane_t1

0x50c5,	// (0x00024c55) list_set_graphic_pane_t1_ParamLimits

0x50c5,	// (0x00024c55) list_set_graphic_pane_t1

0x6227,	// (0x00025db7) popup_midp_note_alarm_window_t6_ParamLimits

0x6227,	// (0x00025db7) popup_midp_note_alarm_window_t6

0x6239,	// (0x00025dc9) popup_midp_note_alarm_window_t7_ParamLimits

0x6239,	// (0x00025dc9) popup_midp_note_alarm_window_t7

0x624b,	// (0x00025ddb) popup_midp_note_alarm_window_t8_ParamLimits

0x624b,	// (0x00025ddb) popup_midp_note_alarm_window_t8

0x625d,	// (0x00025ded) popup_midp_note_alarm_window_t9_ParamLimits

0x625d,	// (0x00025ded) popup_midp_note_alarm_window_t9

0x626f,	// (0x00025dff) popup_midp_note_alarm_window_t10_ParamLimits

0x626f,	// (0x00025dff) popup_midp_note_alarm_window_t10

0x6281,	// (0x00025e11) popup_midp_note_alarm_window_t11_ParamLimits

0x6281,	// (0x00025e11) popup_midp_note_alarm_window_t11

0x6293,	// (0x00025e23) scroll_pane_cp17_ParamLimits

0x6293,	// (0x00025e23) scroll_pane_cp17

0xb120,	// (0x0002acb0) volume_small_pane_cp_g1

0xb8e9,	// (0x0002b479) volume_small_pane_cp_g2

0xb8f2,	// (0x0002b482) volume_small_pane_cp_g3

0xb132,	// (0x0002acc2) volume_small_pane_cp_g4

0xb8fb,	// (0x0002b48b) volume_small_pane_cp_g5

0xb78d,	// (0x0002b31d) volume_small_pane_cp_g6

0xb144,	// (0x0002acd4) volume_small_pane_cp_g7

0xb904,	// (0x0002b494) volume_small_pane_cp_g8

0xb90d,	// (0x0002b49d) volume_small_pane_cp_g9

0xb156,	// (0x0002ace6) volume_small_pane_cp_g10

0x53c1,	// (0x00024f51) midp_ticker_pane_g1_ParamLimits

0x53cd,	// (0x00024f5d) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x0002f2ee) midp_ticker_pane_g_ParamLimits

0x53d9,	// (0x00024f69) midp_ticker_pane_t1_ParamLimits

0xab84,	// (0x0002a714) aid_fill_nsta_2

0x5afb,	// (0x0002568b) list_form2_midp_pane

0x69c9,	// (0x00026559) midp_editing_number_pane_ParamLimits

0x69d8,	// (0x00026568) midp_ticker_pane_ParamLimits

0x73a2,	// (0x00026f32) form2_midp_field_pane

0x73aa,	// (0x00026f3a) scroll_pane_cp51

0x73ca,	// (0x00026f5a) form2_midp_button_pane_ParamLimits

0x73ca,	// (0x00026f5a) form2_midp_button_pane

0x73dc,	// (0x00026f6c) form2_midp_content_pane_ParamLimits

0x73dc,	// (0x00026f6c) form2_midp_content_pane

0x73f6,	// (0x00026f86) form2_midp_field_choice_group_pane

0x73fe,	// (0x00026f8e) form2_midp_field_pane_g1

0x7406,	// (0x00026f96) form2_midp_field_pane_g2

0x740e,	// (0x00026f9e) form2_midp_field_pane_g3

0x7416,	// (0x00026fa6) form2_midp_field_pane_g4

0x0003,

0xfb02,	// (0x0002f692) form2_midp_field_pane_g

0x741e,	// (0x00026fae) form2_midp_gauge_slider_pane

0x7426,	// (0x00026fb6) form2_midp_gauge_wait_pane

0x742e,	// (0x00026fbe) form2_midp_image_pane_ParamLimits

0x742e,	// (0x00026fbe) form2_midp_image_pane

0x7449,	// (0x00026fd9) form2_midp_label_pane_ParamLimits

0x7449,	// (0x00026fd9) form2_midp_label_pane

0xb932,	// (0x0002b4c2) form2_midp_label_pane_cp_ParamLimits

0xb932,	// (0x0002b4c2) form2_midp_label_pane_cp

0x7462,	// (0x00026ff2) form2_midp_string_pane_ParamLimits

0x7462,	// (0x00026ff2) form2_midp_string_pane

0xe402,	// (0x0002df92) form2_midp_text_pane_ParamLimits

0xe402,	// (0x0002df92) form2_midp_text_pane

0x7474,	// (0x00027004) form2_midp_time_pane

0x7484,	// (0x00027014) input_focus_pane_cp51_ParamLimits

0x7484,	// (0x00027014) input_focus_pane_cp51

0x749c,	// (0x0002702c) form2_midp_label_pane_t1_ParamLimits

0x749c,	// (0x0002702c) form2_midp_label_pane_t1

0xe41b,	// (0x0002dfab) form2_mdip_text_pane_t1_ParamLimits

0xe41b,	// (0x0002dfab) form2_mdip_text_pane_t1

0xe439,	// (0x0002dfc9) form2_midp_time_pane_t1

0x74e4,	// (0x00027074) form2_midp_gauge_slider_pane_t1

0xb953,	// (0x0002b4e3) form2_midp_gauge_slider_pane_t2

0xb965,	// (0x0002b4f5) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb0b,	// (0x0002f69b) form2_midp_gauge_slider_pane_t

0x74f6,	// (0x00027086) form2_midp_slider_pane

0x7502,	// (0x00027092) form2_midp_gauge_wait_pane_t1

0x7510,	// (0x000270a0) form2_midp_wait_pane_ParamLimits

0x7510,	// (0x000270a0) form2_midp_wait_pane

0xb977,	// (0x0002b507) list_single_2graphic_pane_cp4_ParamLimits

0xb977,	// (0x0002b507) list_single_2graphic_pane_cp4

0xb00f,	// (0x0002ab9f) list_single_midp_graphic_pane_cp_ParamLimits

0xb00f,	// (0x0002ab9f) list_single_midp_graphic_pane_cp

0x1b06,	// (0x00021696) list_highlight_pane_cp20

0x753c,	// (0x000270cc) list_single_2graphic_pane_g1_cp4

0x6d11,	// (0x000268a1) list_single_2graphic_pane_g2_cp4

0x7544,	// (0x000270d4) list_single_2graphic_pane_t1_cp4

0x1c92,	// (0x00021822) list_highlight_pane_cp21

0x7553,	// (0x000270e3) list_single_midp_graphic_pane_g4_cp

0x7562,	// (0x000270f2) list_single_midp_graphic_pane_t1_cp

0xb9a5,	// (0x0002b535) form2_mdip_string_pane_t1_ParamLimits

0xb9a5,	// (0x0002b535) form2_mdip_string_pane_t1

0x1b06,	// (0x00021696) bg_wml_button_pane_cp2

0x1a16,	// (0x000215a6) form2_midp_image_pane_g1

0xda10,	// (0x0002d5a0) list_double_large_graphic_pane_g5_ParamLimits

0xda10,	// (0x0002d5a0) list_double_large_graphic_pane_g5

0x9d6a,	// (0x000298fa) midp_form_pane_ParamLimits

0x1c92,	// (0x00021822) main_apps_wheel_pane_ParamLimits

0xa964,	// (0x0002a4f4) popup_preview_window_ParamLimits

0xa964,	// (0x0002a4f4) popup_preview_window

0xab1b,	// (0x0002a6ab) popup_touch_info_window_ParamLimits

0xab1b,	// (0x0002a6ab) popup_touch_info_window

0xab39,	// (0x0002a6c9) popup_touch_menu_window_ParamLimits

0xab39,	// (0x0002a6c9) popup_touch_menu_window

0x1a0c,	// (0x0002159c) bg_popup_sub_pane_cp6

0x7577,	// (0x00027107) list_touch_menu_pane

0x757f,	// (0x0002710f) list_single_touch_menu_pane_ParamLimits

0x757f,	// (0x0002710f) list_single_touch_menu_pane

0x7593,	// (0x00027123) list_single_touch_menu_pane_t1

0x1c92,	// (0x00021822) bg_popup_sub_pane_cp7_ParamLimits

0x1c92,	// (0x00021822) bg_popup_sub_pane_cp7

0x75a1,	// (0x00027131) heading_sub_pane

0x75a9,	// (0x00027139) list_touch_info_pane_ParamLimits

0x75a9,	// (0x00027139) list_touch_info_pane

0x75b8,	// (0x00027148) list_single_touch_info_pane_ParamLimits

0x75b8,	// (0x00027148) list_single_touch_info_pane

0x75ca,	// (0x0002715a) list_single_touch_info_pane_t1

0x75d8,	// (0x00027168) list_single_touch_info_pane_t2

0x0001,

0xfb19,	// (0x0002f6a9) list_single_touch_info_pane_t

0x5397,	// (0x00024f27) bg_popup_heading_pane_cp

0x75e6,	// (0x00027176) heading_sub_pane_t1

0x5859,	// (0x000253e9) bg_popup_preview_window_pane_cp_ParamLimits

0x5859,	// (0x000253e9) bg_popup_preview_window_pane_cp

0x75a1,	// (0x00027131) heading_preview_pane

0x75a9,	// (0x00027139) list_preview_pane_ParamLimits

0x75a9,	// (0x00027139) list_preview_pane

0x75f4,	// (0x00027184) popup_preview_window_g1

0x75b8,	// (0x00027148) list_single_preview_pane_ParamLimits

0x75b8,	// (0x00027148) list_single_preview_pane

0x75fc,	// (0x0002718c) list_single_preview_pane_g1

0x7604,	// (0x00027194) list_single_preview_pane_t1

0x75ca,	// (0x0002715a) list_single_preview_pane_t2

0x0001,

0xfb1e,	// (0x0002f6ae) list_single_preview_pane_t

0x7612,	// (0x000271a2) bg_popup_heading_pane_cp2_ParamLimits

0x7612,	// (0x000271a2) bg_popup_heading_pane_cp2

0x7628,	// (0x000271b8) heading_preview_pane_g1

0x7630,	// (0x000271c0) heading_preview_pane_t1_ParamLimits

0x7630,	// (0x000271c0) heading_preview_pane_t1

0x1ce5,	// (0x00021875) soft_indicator_pane_t1_ParamLimits

0x224c,	// (0x00021ddc) scroll_pane_ParamLimits

0x4cc1,	// (0x00024851) scroll_sc2_left_pane

0x4cb8,	// (0x00024848) scroll_sc2_right_pane

0x4ce0,	// (0x00024870) scroll_bg_pane_g1_ParamLimits

0x4cf5,	// (0x00024885) scroll_bg_pane_g2_ParamLimits

0x4d0d,	// (0x0002489d) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x0002f279) scroll_bg_pane_g_ParamLimits

0x4ce0,	// (0x00024870) scroll_handle_pane_g1_ParamLimits

0x4d2f,	// (0x000248bf) scroll_handle_pane_g2_ParamLimits

0x4d0d,	// (0x0002489d) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x0002f280) scroll_handle_pane_g_ParamLimits

0xa5eb,	// (0x0002a17b) popup_choice_list_window_ParamLimits

0xa5eb,	// (0x0002a17b) popup_choice_list_window

0x572f,	// (0x000252bf) choice_list_pane

0x57b1,	// (0x00025341) cell_toolbar_pane_t1

0x57d9,	// (0x00025369) toolbar_button_pane_ParamLimits

0x66cd,	// (0x0002625d) ai_gene_pane_1_t2_ParamLimits

0x66cd,	// (0x0002625d) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x0002f4a8) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x0002f4a8) ai_gene_pane_1_t

0x764d,	// (0x000271dd) scroll_sc2_left_pane_g1

0x764d,	// (0x000271dd) scroll_sc2_right_pane_g1

0x4abb,	// (0x0002464b) bg_popup_sub_pane_cp10

0x7657,	// (0x000271e7) list_choice_list_pane

0x7670,	// (0x00027200) list_single_choice_list_pane_ParamLimits

0x7670,	// (0x00027200) list_single_choice_list_pane

0x7683,	// (0x00027213) list_single_choice_list_pane_g1

0x4aa6,	// (0x00024636) list_single_choice_list_pane_t1_ParamLimits

0x4aa6,	// (0x00024636) list_single_choice_list_pane_t1

0x768b,	// (0x0002721b) choice_list_pane_g1

0x7693,	// (0x00027223) choice_list_pane_t1

0x1a0c,	// (0x0002159c) input_focus_pane_cp11

0x4c2d,	// (0x000247bd) title_pane_stacon_g2_ParamLimits

0x4c2d,	// (0x000247bd) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x0002f25f) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0002f25f) title_pane_stacon_g

0x5397,	// (0x00024f27) cursor_press_pane

0xa693,	// (0x0002a223) popup_fep_hwr_window_ParamLimits

0xa693,	// (0x0002a223) popup_fep_hwr_window

0xa70b,	// (0x0002a29b) popup_fep_vkb_window_ParamLimits

0xa70b,	// (0x0002a29b) popup_fep_vkb_window

0x76a1,	// (0x00027231) cursor_press_pane_g1

0x0002,

0xfb47,	// (0x0002f6d7) fep_vkb_side_pane_g_ParamLimits

0xbb01,	// (0x0002b691) fep_hwr_candidate_pane_ParamLimits

0xbb01,	// (0x0002b691) fep_hwr_candidate_pane

0xbb2b,	// (0x0002b6bb) fep_hwr_side_pane_ParamLimits

0xbb2b,	// (0x0002b6bb) fep_hwr_side_pane

0xbb4b,	// (0x0002b6db) fep_hwr_top_pane_ParamLimits

0xbb4b,	// (0x0002b6db) fep_hwr_top_pane

0xbb63,	// (0x0002b6f3) fep_hwr_write_pane_ParamLimits

0xbb63,	// (0x0002b6f3) fep_hwr_write_pane

0xfb47,	// (0x0002f6d7) fep_vkb_side_pane_g

0x76bb,	// (0x0002724b) fep_hwr_top_pane_g1

0x76a9,	// (0x00027239) fep_hwr_top_pane_g2

0xbb9d,	// (0x0002b72d) fep_hwr_top_pane_g3

0x0002,

0xfb23,	// (0x0002f6b3) fep_hwr_top_pane_g

0xbbb2,	// (0x0002b742) fep_hwr_top_text_pane

0x4e85,	// (0x00024a15) fep_hwr_top_text_pane_g1

0x76f1,	// (0x00027281) fep_hwr_top_text_pane_t1

0xbca8,	// (0x0002b838) fep_hwr_candidate_pane_g1

0x781c,	// (0x000273ac) fep_vkb_keypad_pane_g3_ParamLimits

0x781c,	// (0x000273ac) fep_vkb_keypad_pane_g3

0x7844,	// (0x000273d4) fep_vkb_keypad_pane_g4_ParamLimits

0x7844,	// (0x000273d4) fep_vkb_keypad_pane_g4

0x78b3,	// (0x00027443) fep_vkb_bottom_pane_g2_ParamLimits

0x78b3,	// (0x00027443) fep_vkb_bottom_pane_g2

0x0001,

0xfb4e,	// (0x0002f6de) fep_vkb_bottom_pane_g_ParamLimits

0xfb4e,	// (0x0002f6de) fep_vkb_bottom_pane_g

0x764d,	// (0x000271dd) cell_vkb_side_pane_g2

0x0001,

0xfb58,	// (0x0002f6e8) cell_vkb_side_pane_g

0x78f7,	// (0x00027487) cell_vkb_side_pane_t1

0x7905,	// (0x00027495) cell_vkb_side_pane_t1_copy1

0x764d,	// (0x000271dd) bg_fep_vkb_candidate_pane_g2

0x79db,	// (0x0002756b) cell_vkb_candidate_pane_ParamLimits

0x76ff,	// (0x0002728f) aid_size_cell_vkb_ParamLimits

0x76ff,	// (0x0002728f) aid_size_cell_vkb

0x79db,	// (0x0002756b) cell_vkb_candidate_pane

0xbe84,	// (0x0002ba14) bg_popup_fep_shadow_pane_g1

0xbce1,	// (0x0002b871) fep_vkb_bottom_pane_ParamLimits

0xbce1,	// (0x0002b871) fep_vkb_bottom_pane

0x778a,	// (0x0002731a) fep_vkb_candidate_pane_ParamLimits

0x778a,	// (0x0002731a) fep_vkb_candidate_pane

0xbd06,	// (0x0002b896) fep_vkb_keypad_pane_ParamLimits

0xbd06,	// (0x0002b896) fep_vkb_keypad_pane

0xbd3b,	// (0x0002b8cb) fep_vkb_side_pane_ParamLimits

0xbd3b,	// (0x0002b8cb) fep_vkb_side_pane

0xbd77,	// (0x0002b907) fep_vkb_top_pane_ParamLimits

0xbd77,	// (0x0002b907) fep_vkb_top_pane

0x77b0,	// (0x00027340) fep_vkb_top_pane_g1_ParamLimits

0x77b0,	// (0x00027340) fep_vkb_top_pane_g1

0x77bf,	// (0x0002734f) fep_vkb_top_pane_g2_ParamLimits

0x77bf,	// (0x0002734f) fep_vkb_top_pane_g2

0x77ce,	// (0x0002735e) fep_vkb_top_pane_g3_ParamLimits

0x77ce,	// (0x0002735e) fep_vkb_top_pane_g3

0x0003,

0xfb3e,	// (0x0002f6ce) fep_vkb_top_pane_g_ParamLimits

0xfb3e,	// (0x0002f6ce) fep_vkb_top_pane_g

0x77ec,	// (0x0002737c) fep_vkb_top_text_pane_ParamLimits

0x77ec,	// (0x0002737c) fep_vkb_top_text_pane

0xbdac,	// (0x0002b93c) fep_vkb_side_pane_g1_ParamLimits

0xbdac,	// (0x0002b93c) fep_vkb_side_pane_g1

0x780b,	// (0x0002739b) grid_vkb_side_pane_ParamLimits

0x780b,	// (0x0002739b) grid_vkb_side_pane

0xbe8c,	// (0x0002ba1c) bg_popup_fep_shadow_pane_g2

0xbe95,	// (0x0002ba25) bg_popup_fep_shadow_pane_g3

0xbe9d,	// (0x0002ba2d) bg_popup_fep_shadow_pane_g4

0xbea6,	// (0x0002ba36) bg_popup_fep_shadow_pane_g5

0xbeb0,	// (0x0002ba40) bg_popup_fep_shadow_pane_g6

0xbeb8,	// (0x0002ba48) bg_popup_fep_shadow_pane_g7

0x49c9,	// (0x00024559) bg_popup_fep_shadow_pane_g8

0x7862,	// (0x000273f2) grid_vkb_keypad_number_pane_ParamLimits

0x7862,	// (0x000273f2) grid_vkb_keypad_number_pane

0x7872,	// (0x00027402) grid_vkb_keypad_pane_ParamLimits

0x7872,	// (0x00027402) grid_vkb_keypad_pane

0x7898,	// (0x00027428) fep_vkb_bottom_pane_g1_ParamLimits

0x7898,	// (0x00027428) fep_vkb_bottom_pane_g1

0x78c1,	// (0x00027451) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x78c1,	// (0x00027451) grid_vkb_keypad_bottom_left_pane

0x78d6,	// (0x00027466) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x78d6,	// (0x00027466) grid_vkb_keypad_bottom_right_pane

0x78eb,	// (0x0002747b) fep_vkb_top_text_pane_g1

0xbdf6,	// (0x0002b986) fep_vkb_top_text_pane_t1

0xbe0b,	// (0x0002b99b) cell_vkb_side_pane_ParamLimits

0xbe0b,	// (0x0002b99b) cell_vkb_side_pane

0x764d,	// (0x000271dd) cell_vkb_side_pane_g1

0x7913,	// (0x000274a3) cell_vkb_keypad_pane_ParamLimits

0x7913,	// (0x000274a3) cell_vkb_keypad_pane

0x7988,	// (0x00027518) cell_vkb_keypad_pane_g1

0x0008,

0xfb6b,	// (0x0002f6fb) bg_popup_fep_shadow_pane_g

0xbeca,	// (0x0002ba5a) cell_hwr_side_pane_g1

0xbeca,	// (0x0002ba5a) cell_hwr_side_pane_g2

0x7992,	// (0x00027522) cell_vkb_keypad_pane_t1

0xbe2e,	// (0x0002b9be) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbe2e,	// (0x0002b9be) cell_vkb_keypad_bottom_left_pane

0xbe4b,	// (0x0002b9db) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbe4b,	// (0x0002b9db) cell_vkb_keypad_bottom_right_pane

0x764d,	// (0x000271dd) cell_vkb_keypad_bottom_left_pane_g1

0x764d,	// (0x000271dd) cell_vkb_keypad_bottom_right_pane_g1

0x79a0,	// (0x00027530) cell_vkb_keypad_number_pane_ParamLimits

0x79a0,	// (0x00027530) cell_vkb_keypad_number_pane

0x79bf,	// (0x0002754f) cell_vkb_keypad_number_pane_g1

0x79c9,	// (0x00027559) cell_vkb_keypad_number_pane_g2

0x79d2,	// (0x00027562) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5d,	// (0x0002f6ed) cell_vkb_keypad_number_pane_g

0x7992,	// (0x00027522) cell_vkb_keypad_number_pane_t1

0x79f6,	// (0x00027586) fep_vkb_candidate_pane_g1

0x0001,

0xfb7e,	// (0x0002f70e) cell_hwr_side_pane_g

0x7a0f,	// (0x0002759f) cell_hwr_side_pane_t1

0xbed4,	// (0x0002ba64) cell_hwr_side_pane_t1_copy1

0xbee2,	// (0x0002ba72) cell_hwr_candidate_pane_g1

0xbf11,	// (0x0002baa1) cell_hwr_candidate_pane_t1

0x764d,	// (0x000271dd) cell_vkb_candidate_pane_g2

0x7a95,	// (0x00027625) cell_vkb_candidate_pane_t1

0xbac8,	// (0x0002b658) bg_popup_fep_shadow_pane_ParamLimits

0xbac8,	// (0x0002b658) bg_popup_fep_shadow_pane

0xbb7d,	// (0x0002b70d) bg_fep_hwr_top_pane_g4

0x76cd,	// (0x0002725d) bg_hwr_side_pane_g1_ParamLimits

0x76cd,	// (0x0002725d) bg_hwr_side_pane_g1

0xbbee,	// (0x0002b77e) cell_hwr_side_pane_ParamLimits

0xbbee,	// (0x0002b77e) cell_hwr_side_pane

0xbc29,	// (0x0002b7b9) fep_hwr_write_pane_g1_ParamLimits

0xbc29,	// (0x0002b7b9) fep_hwr_write_pane_g1

0xbc36,	// (0x0002b7c6) fep_hwr_write_pane_g2_ParamLimits

0xbc36,	// (0x0002b7c6) fep_hwr_write_pane_g2

0xbc43,	// (0x0002b7d3) fep_hwr_write_pane_g3_ParamLimits

0xbc43,	// (0x0002b7d3) fep_hwr_write_pane_g3

0xbc51,	// (0x0002b7e1) fep_hwr_write_pane_g4_ParamLimits

0xbc51,	// (0x0002b7e1) fep_hwr_write_pane_g4

0x0005,

0xfb2a,	// (0x0002f6ba) fep_hwr_write_pane_g_ParamLimits

0xfb2a,	// (0x0002f6ba) fep_hwr_write_pane_g

0xbb7d,	// (0x0002b70d) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xbb7d,	// (0x0002b70d) bg_fep_hwr_candidate_pane_g2

0xbc66,	// (0x0002b7f6) cell_hwr_candidate_pane_ParamLimits

0xbc66,	// (0x0002b7f6) cell_hwr_candidate_pane

0xbca8,	// (0x0002b838) fep_hwr_candidate_pane_g1_ParamLimits

0x772d,	// (0x000272bd) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x772d,	// (0x000272bd) bg_popup_fep_shadow_pane_cp2

0x77de,	// (0x0002736e) fep_vkb_top_pane_g4_ParamLimits

0x77de,	// (0x0002736e) fep_vkb_top_pane_g4

0x77fd,	// (0x0002738d) fep_vkb_side_pane_g2_ParamLimits

0x77fd,	// (0x0002738d) fep_vkb_side_pane_g2

0xdb4e,	// (0x0002d6de) list_setting_pane_t4_ParamLimits

0xdb4e,	// (0x0002d6de) list_setting_pane_t4

0xdbe0,	// (0x0002d770) list_setting_number_pane_t5_ParamLimits

0xdbe0,	// (0x0002d770) list_setting_number_pane_t5

0xa001,	// (0x00029b91) list_double_heading_pane_cp2_ParamLimits

0xa001,	// (0x00029b91) list_double_heading_pane_cp2

0x2280,	// (0x00021e10) list_double_heading_pane_g1_cp2_ParamLimits

0x2280,	// (0x00021e10) list_double_heading_pane_g1_cp2

0x4970,	// (0x00024500) list_double_heading_pane_g2_cp2_ParamLimits

0x4970,	// (0x00024500) list_double_heading_pane_g2_cp2

0x7aa3,	// (0x00027633) list_double_heading_pane_t1_cp2_ParamLimits

0x7aa3,	// (0x00027633) list_double_heading_pane_t1_cp2

0x7ab9,	// (0x00027649) list_double_heading_pane_t2_cp2_ParamLimits

0x7ab9,	// (0x00027649) list_double_heading_pane_t2_cp2

0x1a04,	// (0x00021594) aid_value_unit2

0x98cc,	// (0x0002945c) popup_preview_fixed_window

0x1dc5,	// (0x00021955) bg_popup_preview_window_pane_cp02

0x7acb,	// (0x0002765b) list_preview_fixed_pane

0x7b11,	// (0x000276a1) list_empty_pane_fp_ParamLimits

0x7b11,	// (0x000276a1) list_empty_pane_fp

0x7b11,	// (0x000276a1) list_single_cale_day_pane_fp_ParamLimits

0x7b11,	// (0x000276a1) list_single_cale_day_pane_fp

0x7b11,	// (0x000276a1) list_single_graphic_heading_pane_fp_ParamLimits

0x7b11,	// (0x000276a1) list_single_graphic_heading_pane_fp

0x7b11,	// (0x000276a1) list_single_graphic_pane_fp_ParamLimits

0x7b11,	// (0x000276a1) list_single_graphic_pane_fp

0x7b11,	// (0x000276a1) list_single_heading_pane_fp_ParamLimits

0x7b11,	// (0x000276a1) list_single_heading_pane_fp

0x7b11,	// (0x000276a1) list_single_pane_fp_ParamLimits

0x7b11,	// (0x000276a1) list_single_pane_fp

0x7b27,	// (0x000276b7) list_single_pane_fp_g1_ParamLimits

0x7b27,	// (0x000276b7) list_single_pane_fp_g1

0xd87f,	// (0x0002d40f) list_single_pane_fp_g2_ParamLimits

0xd87f,	// (0x0002d40f) list_single_pane_fp_g2

0xe44c,	// (0x0002dfdc) list_single_pane_fp_g3_ParamLimits

0xe44c,	// (0x0002dfdc) list_single_pane_fp_g3

0x7b33,	// (0x000276c3) list_single_pane_fp_g4_ParamLimits

0x7b33,	// (0x000276c3) list_single_pane_fp_g4

0x0003,

0xfb91,	// (0x0002f721) list_single_pane_fp_g_ParamLimits

0xfb91,	// (0x0002f721) list_single_pane_fp_g

0xe460,	// (0x0002dff0) list_single_pane_fp_t1_ParamLimits

0xe460,	// (0x0002dff0) list_single_pane_fp_t1

0xe477,	// (0x0002e007) list_single_graphic_pane_fp_g1_ParamLimits

0xe477,	// (0x0002e007) list_single_graphic_pane_fp_g1

0x7b27,	// (0x000276b7) list_single_graphic_pane_fp_g2_ParamLimits

0x7b27,	// (0x000276b7) list_single_graphic_pane_fp_g2

0xd87f,	// (0x0002d40f) list_single_graphic_pane_fp_g3_ParamLimits

0xd87f,	// (0x0002d40f) list_single_graphic_pane_fp_g3

0xe44c,	// (0x0002dfdc) list_single_graphic_pane_fp_g4_ParamLimits

0xe44c,	// (0x0002dfdc) list_single_graphic_pane_fp_g4

0x7b33,	// (0x000276c3) list_single_graphic_pane_fp_g5_ParamLimits

0x7b33,	// (0x000276c3) list_single_graphic_pane_fp_g5

0x0004,

0xfb9a,	// (0x0002f72a) list_single_graphic_pane_fp_g_ParamLimits

0xfb9a,	// (0x0002f72a) list_single_graphic_pane_fp_g

0xe483,	// (0x0002e013) list_single_graphic_pane_fp_t1_ParamLimits

0xe483,	// (0x0002e013) list_single_graphic_pane_fp_t1

0xe477,	// (0x0002e007) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe477,	// (0x0002e007) list_single_graphic_heading_pane_fp_g1

0x7b27,	// (0x000276b7) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7b27,	// (0x000276b7) list_single_graphic_heading_pane_fp_g2

0xd87f,	// (0x0002d40f) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd87f,	// (0x0002d40f) list_single_graphic_heading_pane_fp_g3

0xe44c,	// (0x0002dfdc) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xe44c,	// (0x0002dfdc) list_single_graphic_heading_pane_fp_g4

0x7b33,	// (0x000276c3) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7b33,	// (0x000276c3) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9a,	// (0x0002f72a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x0002f72a) list_single_graphic_heading_pane_fp_g

0xe499,	// (0x0002e029) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe499,	// (0x0002e029) list_single_graphic_heading_pane_fp_t1

0xe4af,	// (0x0002e03f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe4af,	// (0x0002e03f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba5,	// (0x0002f735) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba5,	// (0x0002f735) list_single_graphic_heading_pane_fp_t

0xe4c1,	// (0x0002e051) list_single_cale_day_pane_fp_g1_ParamLimits

0xe4c1,	// (0x0002e051) list_single_cale_day_pane_fp_g1

0x7b3f,	// (0x000276cf) list_single_cale_day_pane_fp_g2_ParamLimits

0x7b3f,	// (0x000276cf) list_single_cale_day_pane_fp_g2

0xe4f9,	// (0x0002e089) list_single_cale_day_pane_fp_g3_ParamLimits

0xe4f9,	// (0x0002e089) list_single_cale_day_pane_fp_g3

0xe521,	// (0x0002e0b1) list_single_cale_day_pane_fp_g4_ParamLimits

0xe521,	// (0x0002e0b1) list_single_cale_day_pane_fp_g4

0xe545,	// (0x0002e0d5) list_single_cale_day_pane_fp_g5_ParamLimits

0xe545,	// (0x0002e0d5) list_single_cale_day_pane_fp_g5

0x0004,

0xfbaa,	// (0x0002f73a) list_single_cale_day_pane_fp_g_ParamLimits

0xfbaa,	// (0x0002f73a) list_single_cale_day_pane_fp_g

0xe569,	// (0x0002e0f9) list_single_cale_day_pane_fp_t1_ParamLimits

0xe569,	// (0x0002e0f9) list_single_cale_day_pane_fp_t1

0xe58f,	// (0x0002e11f) list_single_cale_day_pane_fp_t2_ParamLimits

0xe58f,	// (0x0002e11f) list_single_cale_day_pane_fp_t2

0xe5a8,	// (0x0002e138) list_single_cale_day_pane_fp_t3_ParamLimits

0xe5a8,	// (0x0002e138) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb5,	// (0x0002f745) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb5,	// (0x0002f745) list_single_cale_day_pane_fp_t

0x7b27,	// (0x000276b7) list_empty_pane_fp_g1_ParamLimits

0x7b27,	// (0x000276b7) list_empty_pane_fp_g1

0xe5c1,	// (0x0002e151) list_empty_pane_fp_t1

0xe5cf,	// (0x0002e15f) list_empty_pane_fp_t2

0x0001,

0xfbbc,	// (0x0002f74c) list_empty_pane_fp_t

0x7b27,	// (0x000276b7) list_single_heading_pane_fp_g1_ParamLimits

0x7b27,	// (0x000276b7) list_single_heading_pane_fp_g1

0xd87f,	// (0x0002d40f) list_single_heading_pane_fp_g2_ParamLimits

0xd87f,	// (0x0002d40f) list_single_heading_pane_fp_g2

0xe44c,	// (0x0002dfdc) list_single_heading_pane_fp_g3_ParamLimits

0xe44c,	// (0x0002dfdc) list_single_heading_pane_fp_g3

0x0002,

0xfbc1,	// (0x0002f751) list_single_heading_pane_fp_g_ParamLimits

0xfbc1,	// (0x0002f751) list_single_heading_pane_fp_g

0xe5dd,	// (0x0002e16d) list_single_heading_pane_fp_t1_ParamLimits

0xe5dd,	// (0x0002e16d) list_single_heading_pane_fp_t1

0xe5ef,	// (0x0002e17f) list_single_heading_pane_fp_t2_ParamLimits

0xe5ef,	// (0x0002e17f) list_single_heading_pane_fp_t2

0x0001,

0xfbc8,	// (0x0002f758) list_single_heading_pane_fp_t_ParamLimits

0xfbc8,	// (0x0002f758) list_single_heading_pane_fp_t

0x4ac7,	// (0x00024657) aid_size_cell_fast

0x1da8,	// (0x00021938) soft_indicator_pane_cp1_t1

0x4b01,	// (0x00024691) cell_app_pane_cp2_ParamLimits

0x4b01,	// (0x00024691) cell_app_pane_cp2

0xbaea,	// (0x0002b67a) fep_hwr_candidate_drop_down_list_pane

0xbcc2,	// (0x0002b852) fep_hwr_candidate_pane_g3_ParamLimits

0xbcc2,	// (0x0002b852) fep_hwr_candidate_pane_g3

0x442a,	// (0x00023fba) fep_hwr_candidate_pane_g4_ParamLimits

0x442a,	// (0x00023fba) fep_hwr_candidate_pane_g4

0x0002,

0xfb37,	// (0x0002f6c7) fep_hwr_candidate_pane_g_ParamLimits

0xfb37,	// (0x0002f6c7) fep_hwr_candidate_pane_g

0x7779,	// (0x00027309) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7779,	// (0x00027309) fep_vkb_candidate_drop_down_list_pane

0x79fe,	// (0x0002758e) fep_vkb_candidate_pane_g3

0x7a06,	// (0x00027596) fep_vkb_candidate_pane_g4

0x0002,

0xfb64,	// (0x0002f6f4) fep_vkb_candidate_pane_g

0xbee2,	// (0x0002ba72) cell_hwr_candidate_pane_g1_ParamLimits

0xbef0,	// (0x0002ba80) cell_hwr_candidate_pane_g3_ParamLimits

0xbef0,	// (0x0002ba80) cell_hwr_candidate_pane_g3

0x8b81,	// (0x00028711) cell_hwr_candidate_pane_g4_ParamLimits

0x8b81,	// (0x00028711) cell_hwr_candidate_pane_g4

0x0002,

0xfb83,	// (0x0002f713) cell_hwr_candidate_pane_g_ParamLimits

0xfb83,	// (0x0002f713) cell_hwr_candidate_pane_g

0x7a5f,	// (0x000275ef) cell_vkb_candidate_pane_g3_ParamLimits

0x7a5f,	// (0x000275ef) cell_vkb_candidate_pane_g3

0x7a7a,	// (0x0002760a) cell_vkb_candidate_pane_g4_ParamLimits

0x7a7a,	// (0x0002760a) cell_vkb_candidate_pane_g4

0x7b4b,	// (0x000276db) cell_app_pane_cp2_g1_ParamLimits

0x7b4b,	// (0x000276db) cell_app_pane_cp2_g1

0x7b69,	// (0x000276f9) cell_app_pane_cp2_g2_ParamLimits

0x7b69,	// (0x000276f9) cell_app_pane_cp2_g2

0x0001,

0xfbcd,	// (0x0002f75d) cell_app_pane_cp2_g_ParamLimits

0xfbcd,	// (0x0002f75d) cell_app_pane_cp2_g

0x7b75,	// (0x00027705) cell_app_pane_cp2_t1_ParamLimits

0x7b75,	// (0x00027705) cell_app_pane_cp2_t1

0x4962,	// (0x000244f2) grid_highlight_pane_cp1_ParamLimits

0x4962,	// (0x000244f2) grid_highlight_pane_cp1

0xbf2f,	// (0x0002babf) cell_hwr_candidate_pane_cp1_ParamLimits

0xbf2f,	// (0x0002babf) cell_hwr_candidate_pane_cp1

0xbee2,	// (0x0002ba72) fep_hwr_candidate_drop_down_list_pane_g1

0xbf4e,	// (0x0002bade) fep_hwr_candidate_drop_down_list_pane_g2

0xbf5b,	// (0x0002baeb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd2,	// (0x0002f762) fep_hwr_candidate_drop_down_list_pane_g

0xbf68,	// (0x0002baf8) fep_hwr_candidate_drop_down_list_scroll_pane

0xbf71,	// (0x0002bb01) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbf71,	// (0x0002bb01) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xbf7e,	// (0x0002bb0e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbf7e,	// (0x0002bb0e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xbf8b,	// (0x0002bb1b) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbf8b,	// (0x0002bb1b) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xbf98,	// (0x0002bb28) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbf98,	// (0x0002bb28) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xbfb3,	// (0x0002bb43) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbfb3,	// (0x0002bb43) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xbfce,	// (0x0002bb5e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbfce,	// (0x0002bb5e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xbfe9,	// (0x0002bb79) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbfe9,	// (0x0002bb79) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xc004,	// (0x0002bb94) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc004,	// (0x0002bb94) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd9,	// (0x0002f769) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd9,	// (0x0002f769) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7ba1,	// (0x00027731) cell_vkb_candidate_pane_cp1_ParamLimits

0x7ba1,	// (0x00027731) cell_vkb_candidate_pane_cp1

0x77de,	// (0x0002736e) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x77de,	// (0x0002736e) fep_vkb_candidate_drop_down_list_pane_g1

0x7b87,	// (0x00027717) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7b87,	// (0x00027717) fep_vkb_candidate_drop_down_list_pane_g2

0x7b94,	// (0x00027724) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7b94,	// (0x00027724) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbea,	// (0x0002f77a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbea,	// (0x0002f77a) fep_vkb_candidate_drop_down_list_pane_g

0x7bc1,	// (0x00027751) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7bc1,	// (0x00027751) fep_vkb_candidate_drop_down_list_scroll_pane

0x7bce,	// (0x0002775e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7bce,	// (0x0002775e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7bdb,	// (0x0002776b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7bdb,	// (0x0002776b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7be7,	// (0x00027777) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7be7,	// (0x00027777) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7a1d,	// (0x000275ad) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7a1d,	// (0x000275ad) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7a3e,	// (0x000275ce) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7a3e,	// (0x000275ce) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7bf3,	// (0x00027783) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7bf3,	// (0x00027783) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7c14,	// (0x000277a4) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7c14,	// (0x000277a4) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7c35,	// (0x000277c5) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7c35,	// (0x000277c5) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf1,	// (0x0002f781) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf1,	// (0x0002f781) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x99e6,	// (0x00029576) title_pane_g1_ParamLimits

0x99f3,	// (0x00029583) title_pane_g2_ParamLimits

0xf554,	// (0x0002f0e4) title_pane_g_ParamLimits

0x4e7d,	// (0x00024a0d) aid_call2_pane

0x4e75,	// (0x00024a05) aid_call_pane

0x4e85,	// (0x00024a15) popup_clock_analogue_window_g1

0x4e85,	// (0x00024a15) popup_clock_analogue_window_g2

0x9fe2,	// (0x00029b72) popup_clock_analogue_window_g3

0x9feb,	// (0x00029b7b) popup_clock_analogue_window_g4

0x1a16,	// (0x000215a6) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x0002f28e) popup_clock_analogue_window_g

0x9ff3,	// (0x00029b83) popup_clock_analogue_window_t1

0xa02b,	// (0x00029bbb) clock_digital_number_pane_ParamLimits

0xa02b,	// (0x00029bbb) clock_digital_number_pane

0xa037,	// (0x00029bc7) clock_digital_number_pane_cp02_ParamLimits

0xa037,	// (0x00029bc7) clock_digital_number_pane_cp02

0xa043,	// (0x00029bd3) clock_digital_number_pane_cp03_ParamLimits

0xa043,	// (0x00029bd3) clock_digital_number_pane_cp03

0xa04f,	// (0x00029bdf) clock_digital_number_pane_cp04_ParamLimits

0xa04f,	// (0x00029bdf) clock_digital_number_pane_cp04

0xa05b,	// (0x00029beb) clock_digital_separator_pane_ParamLimits

0xa05b,	// (0x00029beb) clock_digital_separator_pane

0xa067,	// (0x00029bf7) popup_clock_digital_window_t1_ParamLimits

0xa067,	// (0x00029bf7) popup_clock_digital_window_t1

0x1a16,	// (0x000215a6) clock_digital_number_pane_g1

0x1a16,	// (0x000215a6) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x0002f299) clock_digital_number_pane_g

0x1a16,	// (0x000215a6) clock_digital_separator_pane_g1

0x1a16,	// (0x000215a6) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x0002f299) clock_digital_separator_pane_g

0xab6e,	// (0x0002a6fe) aid_fill_nsta_ParamLimits

0xac33,	// (0x0002a7c3) indicator_nsta_pane_ParamLimits

0x56d6,	// (0x00025266) popup_clock_analogue_window

0x56d6,	// (0x00025266) popup_clock_digital_window

0x1c92,	// (0x00021822) grid_indicator_nsta_pane_ParamLimits

0x72e0,	// (0x00026e70) clock_nsta_pane_t2

0x0001,

0xfab7,	// (0x0002f647) clock_nsta_pane_t

0x9fa6,	// (0x00029b36) aid_size_max_handle

0x9fb0,	// (0x00029b40) aid_size_min_handle

0x5397,	// (0x00024f27) editor_scroll_pane

0x7c50,	// (0x000277e0) ex_editor_pane

0x4a82,	// (0x00024612) scroll_pane_cp13

0x2278,	// (0x00021e08) scroll_pane_cp14

0x4eb4,	// (0x00024a44) scroll_pane_cp36

0xa015,	// (0x00029ba5) list_single_graphic_hl_pane_cp2_ParamLimits

0xa015,	// (0x00029ba5) list_single_graphic_hl_pane_cp2

0xe0fa,	// (0x0002dc8a) list_single_graphic_hl_pane_ParamLimits

0xe0fa,	// (0x0002dc8a) list_single_graphic_hl_pane

0xe605,	// (0x0002e195) aid_size_min_hl_cp1

0x7c58,	// (0x000277e8) list_highlight_pane_cp34_ParamLimits

0x7c58,	// (0x000277e8) list_highlight_pane_cp34

0x7c69,	// (0x000277f9) list_single_graphic_hl_pane_g1_ParamLimits

0x7c69,	// (0x000277f9) list_single_graphic_hl_pane_g1

0xe60e,	// (0x0002e19e) list_single_graphic_hl_pane_g2_ParamLimits

0xe60e,	// (0x0002e19e) list_single_graphic_hl_pane_g2

0xe60e,	// (0x0002e19e) list_single_graphic_hl_pane_g3_ParamLimits

0xe60e,	// (0x0002e19e) list_single_graphic_hl_pane_g3

0xe61a,	// (0x0002e1aa) list_single_graphic_hl_pane_g4_ParamLimits

0xe61a,	// (0x0002e1aa) list_single_graphic_hl_pane_g4

0xe626,	// (0x0002e1b6) list_single_graphic_hl_pane_g5_ParamLimits

0xe626,	// (0x0002e1b6) list_single_graphic_hl_pane_g5

0x0004,

0xfc02,	// (0x0002f792) list_single_graphic_hl_pane_g_ParamLimits

0xfc02,	// (0x0002f792) list_single_graphic_hl_pane_g

0xe63a,	// (0x0002e1ca) list_single_graphic_hl_pane_t1_ParamLimits

0xe63a,	// (0x0002e1ca) list_single_graphic_hl_pane_t1

0x7c76,	// (0x00027806) aid_size_min_hl_cp2

0x7c7f,	// (0x0002780f) list_highlight_pane_cp34_cp2_ParamLimits

0x7c7f,	// (0x0002780f) list_highlight_pane_cp34_cp2

0x7c69,	// (0x000277f9) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7c69,	// (0x000277f9) list_single_graphic_hl_pane_g1_cp2

0x7c8c,	// (0x0002781c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7c8c,	// (0x0002781c) list_single_graphic_hl_pane_g2_cp2

0x7c98,	// (0x00027828) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7c98,	// (0x00027828) list_single_graphic_hl_pane_g3_cp2

0x228c,	// (0x00021e1c) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x228c,	// (0x00021e1c) list_single_graphic_hl_pane_g4_cp2

0x7ca6,	// (0x00027836) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7ca6,	// (0x00027836) list_single_graphic_hl_pane_g5_cp2

0xa480,	// (0x0002a010) control_pane_g4_ParamLimits

0xa480,	// (0x0002a010) control_pane_g4

0x4abb,	// (0x0002464b) bg_popup_sub_pane_cp10_ParamLimits

0x7657,	// (0x000271e7) list_choice_list_pane_ParamLimits

0x7666,	// (0x000271f6) scroll_pane_cp23

0x1dc5,	// (0x00021955) bg_popup_preview_window_pane_cp02_ParamLimits

0x7acb,	// (0x0002765b) list_preview_fixed_pane_ParamLimits

0x7ae1,	// (0x00027671) list_preview_fixed_pane_cp_ParamLimits

0x7ae1,	// (0x00027671) list_preview_fixed_pane_cp

0x7aed,	// (0x0002767d) popup_preview_fixed_window_g1_ParamLimits

0x7aed,	// (0x0002767d) popup_preview_fixed_window_g1

0x7af9,	// (0x00027689) popup_preview_fixed_window_g2_ParamLimits

0x7af9,	// (0x00027689) popup_preview_fixed_window_g2

0x0002,

0xfb8a,	// (0x0002f71a) popup_preview_fixed_window_g_ParamLimits

0xfb8a,	// (0x0002f71a) popup_preview_fixed_window_g

0x9e88,	// (0x00029a18) aid_navi_side_left_pane_ParamLimits

0x9e9d,	// (0x00029a2d) aid_navi_side_right_pane_ParamLimits

0x9eb5,	// (0x00029a45) navi_icon_pane_stacon_ParamLimits

0x9ec9,	// (0x00029a59) navi_navi_pane_stacon_ParamLimits

0x9eb5,	// (0x00029a45) navi_text_pane_stacon_ParamLimits

0x979b,	// (0x0002932b) main_text_info_pane

0x7cd0,	// (0x00027860) listscroll_text_info_pane

0x7cd8,	// (0x00027868) list_text_info_pane_ParamLimits

0x7cd8,	// (0x00027868) list_text_info_pane

0x7ce7,	// (0x00027877) scroll_pane_cp24_ParamLimits

0x7ce7,	// (0x00027877) scroll_pane_cp24

0xc01f,	// (0x0002bbaf) list_text_info_pane_t1_ParamLimits

0xc01f,	// (0x0002bbaf) list_text_info_pane_t1

0xa607,	// (0x0002a197) popup_fast_swap2_window_ParamLimits

0xa607,	// (0x0002a197) popup_fast_swap2_window

0x7d05,	// (0x00027895) aid_size_cell_fast2

0x1a0c,	// (0x0002159c) bg_popup_window_pane_cp17

0x5b27,	// (0x000256b7) heading_pane_cp2

0x1fab,	// (0x00021b3b) listscroll_fast2_pane

0x7d0f,	// (0x0002789f) grid_fast2_pane

0x7d19,	// (0x000278a9) listscroll_fast2_pane_g1

0x7d21,	// (0x000278b1) listscroll_fast2_pane_g2

0x0001,

0xfc0d,	// (0x0002f79d) listscroll_fast2_pane_g

0x4a82,	// (0x00024612) scroll_pane_cp26

0x7d2b,	// (0x000278bb) cell_fast2_pane_ParamLimits

0x7d2b,	// (0x000278bb) cell_fast2_pane

0x7d40,	// (0x000278d0) cell_fast2_pane_g1

0x7d49,	// (0x000278d9) cell_fast2_pane_g2

0x7d52,	// (0x000278e2) cell_fast2_pane_g3

0x0002,

0xfc12,	// (0x0002f7a2) cell_fast2_pane_g

0x203f,	// (0x00021bcf) grid_highlight_pane_cp9

0xa5cf,	// (0x0002a15f) main_eswt_pane_ParamLimits

0xa5cf,	// (0x0002a15f) main_eswt_pane

0x7cfc,	// (0x0002788c) list_single_text_info_pane

0x7d5a,	// (0x000278ea) eswt_ctrl_button_pane

0x7d5a,	// (0x000278ea) eswt_ctrl_canvas_pane

0x7d62,	// (0x000278f2) eswt_ctrl_combo_pane

0x7d5a,	// (0x000278ea) eswt_ctrl_default_pane

0x7d5a,	// (0x000278ea) eswt_ctrl_label_pane

0x7d6a,	// (0x000278fa) eswt_ctrl_wait_pane

0x7d72,	// (0x00027902) eswt_shell_pane

0x1a0c,	// (0x0002159c) listscroll_eswt_app_pane

0x7d92,	// (0x00027922) popup_eswt_tasktip_window_ParamLimits

0x7d92,	// (0x00027922) popup_eswt_tasktip_window

0x5859,	// (0x000253e9) bg_popup_window_pane_cp18

0x7da3,	// (0x00027933) eswt_control_pane_g1_ParamLimits

0x7da3,	// (0x00027933) eswt_control_pane_g1

0x7db0,	// (0x00027940) eswt_control_pane_g2_ParamLimits

0x7db0,	// (0x00027940) eswt_control_pane_g2

0x7dbd,	// (0x0002794d) eswt_control_pane_g3_ParamLimits

0x7dbd,	// (0x0002794d) eswt_control_pane_g3

0x7dca,	// (0x0002795a) eswt_control_pane_g4_ParamLimits

0x7dca,	// (0x0002795a) eswt_control_pane_g4

0x0003,

0xfc19,	// (0x0002f7a9) eswt_control_pane_g_ParamLimits

0xfc19,	// (0x0002f7a9) eswt_control_pane_g

0x4962,	// (0x000244f2) bg_button_pane_ParamLimits

0x4962,	// (0x000244f2) bg_button_pane

0x2054,	// (0x00021be4) common_borders_pane_copy2_ParamLimits

0x2054,	// (0x00021be4) common_borders_pane_copy2

0x7dd7,	// (0x00027967) control_button_pane_g1_ParamLimits

0x7dd7,	// (0x00027967) control_button_pane_g1

0x7de3,	// (0x00027973) control_button_pane_g2_ParamLimits

0x7de3,	// (0x00027973) control_button_pane_g2

0x7def,	// (0x0002797f) control_button_pane_g3_ParamLimits

0x7def,	// (0x0002797f) control_button_pane_g3

0x0002,

0xfc22,	// (0x0002f7b2) control_button_pane_g_ParamLimits

0xfc22,	// (0x0002f7b2) control_button_pane_g

0x7e03,	// (0x00027993) control_button_pane_t1

0x7e11,	// (0x000279a1) control_button_pane_t2

0x0001,

0xfc29,	// (0x0002f7b9) control_button_pane_t

0x57e5,	// (0x00025375) bg_button_pane_g1

0x57ed,	// (0x0002537d) bg_button_pane_g2

0x57f5,	// (0x00025385) bg_button_pane_g3

0x57fd,	// (0x0002538d) bg_button_pane_g4

0x5805,	// (0x00025395) bg_button_pane_g5

0x580d,	// (0x0002539d) bg_button_pane_g6

0x5815,	// (0x000253a5) bg_button_pane_g7

0x581d,	// (0x000253ad) bg_button_pane_g8

0x5825,	// (0x000253b5) bg_button_pane_g9

0x0008,

0xf86c,	// (0x0002f3fc) bg_button_pane_g

0x7612,	// (0x000271a2) common_borders_pane_ParamLimits

0x7612,	// (0x000271a2) common_borders_pane

0x7da3,	// (0x00027933) eswt_control_pane_g1_copy1_ParamLimits

0x7da3,	// (0x00027933) eswt_control_pane_g1_copy1

0x7db0,	// (0x00027940) eswt_control_pane_g2_copy1_ParamLimits

0x7db0,	// (0x00027940) eswt_control_pane_g2_copy1

0x7dbd,	// (0x0002794d) eswt_control_pane_g3_copy1_ParamLimits

0x7dbd,	// (0x0002794d) eswt_control_pane_g3_copy1

0x7dca,	// (0x0002795a) eswt_control_pane_g4_copy1_ParamLimits

0x7dca,	// (0x0002795a) eswt_control_pane_g4_copy1

0x764d,	// (0x000271dd) bg_eswt_ctrl_canvas_pane_g1

0x7612,	// (0x000271a2) common_borders_pane_cp2_ParamLimits

0x7612,	// (0x000271a2) common_borders_pane_cp2

0x7612,	// (0x000271a2) common_borders_pane_cp3_ParamLimits

0x7612,	// (0x000271a2) common_borders_pane_cp3

0x7e1f,	// (0x000279af) separator_horizontal_pane

0x7e27,	// (0x000279b7) separator_vertical_pane

0x7da3,	// (0x00027933) eswt_control_pane_g1_copy2_ParamLimits

0x7da3,	// (0x00027933) eswt_control_pane_g1_copy2

0x7db0,	// (0x00027940) eswt_control_pane_g2_copy2_ParamLimits

0x7db0,	// (0x00027940) eswt_control_pane_g2_copy2

0x7dbd,	// (0x0002794d) eswt_control_pane_g3_copy2_ParamLimits

0x7dbd,	// (0x0002794d) eswt_control_pane_g3_copy2

0x7dca,	// (0x0002795a) eswt_control_pane_g4_copy2_ParamLimits

0x7dca,	// (0x0002795a) eswt_control_pane_g4_copy2

0x1a0c,	// (0x0002159c) common_borders_pane_cp4

0x7e30,	// (0x000279c0) separator_horizontal_pane_g1

0x7e39,	// (0x000279c9) separator_horizontal_pane_g2

0x7e42,	// (0x000279d2) separator_horizontal_pane_g3

0x0002,

0xfc2e,	// (0x0002f7be) separator_horizontal_pane_g

0x7da3,	// (0x00027933) eswt_control_pane_g1_copy3_ParamLimits

0x7da3,	// (0x00027933) eswt_control_pane_g1_copy3

0x7db0,	// (0x00027940) eswt_control_pane_g2_copy3_ParamLimits

0x7db0,	// (0x00027940) eswt_control_pane_g2_copy3

0x7dbd,	// (0x0002794d) eswt_control_pane_g3_copy3_ParamLimits

0x7dbd,	// (0x0002794d) eswt_control_pane_g3_copy3

0x7dca,	// (0x0002795a) eswt_control_pane_g4_copy3_ParamLimits

0x7dca,	// (0x0002795a) eswt_control_pane_g4_copy3

0x1a0c,	// (0x0002159c) common_borders_pane_cp5

0x7e4b,	// (0x000279db) separator_vertical_pane_g1

0x7e54,	// (0x000279e4) separator_vertical_pane_g2

0x7e5d,	// (0x000279ed) separator_vertical_pane_g3

0x0002,

0xfc35,	// (0x0002f7c5) separator_vertical_pane_g

0x7da3,	// (0x00027933) eswt_control_pane_g1_copy4_ParamLimits

0x7da3,	// (0x00027933) eswt_control_pane_g1_copy4

0x7db0,	// (0x00027940) eswt_control_pane_g2_copy4_ParamLimits

0x7db0,	// (0x00027940) eswt_control_pane_g2_copy4

0x7dbd,	// (0x0002794d) eswt_control_pane_g3_copy4_ParamLimits

0x7dbd,	// (0x0002794d) eswt_control_pane_g3_copy4

0x7dca,	// (0x0002795a) eswt_control_pane_g4_copy4_ParamLimits

0x7dca,	// (0x0002795a) eswt_control_pane_g4_copy4

0x7e66,	// (0x000279f6) eswt_ctrl_combo_button_pane

0x7e6e,	// (0x000279fe) eswt_ctrl_input_pane

0x7e76,	// (0x00027a06) popup_choice_list_window_cp70

0x7e7e,	// (0x00027a0e) eswt_ctrl_input_pane_t1

0x1a0c,	// (0x0002159c) input_focus_pane_cp70

0x7612,	// (0x000271a2) bg_button_pane_cp70_ParamLimits

0x7612,	// (0x000271a2) bg_button_pane_cp70

0x7e8c,	// (0x00027a1c) eswt_ctrl_combo_button_pane_g1

0x7e94,	// (0x00027a24) wait_bar_pane_cp70

0x5859,	// (0x000253e9) bg_popup_window_pane_cp70_ParamLimits

0x5859,	// (0x000253e9) bg_popup_window_pane_cp70

0x7e9c,	// (0x00027a2c) popup_eswt_tasktip_window_t1

0x7eb2,	// (0x00027a42) wait_bar_pane_cp71_ParamLimits

0x7eb2,	// (0x00027a42) wait_bar_pane_cp71

0x7ebe,	// (0x00027a4e) grid_eswt_app_pane

0x4cc1,	// (0x00024851) scroll_pane_cp70

0xc054,	// (0x0002bbe4) cell_eswt_app_pane_ParamLimits

0xc054,	// (0x0002bbe4) cell_eswt_app_pane

0xc088,	// (0x0002bc18) cell_eswt_app_pane_g1_ParamLimits

0xc088,	// (0x0002bc18) cell_eswt_app_pane_g1

0xc0b7,	// (0x0002bc47) cell_eswt_app_pane_g2_ParamLimits

0xc0b7,	// (0x0002bc47) cell_eswt_app_pane_g2

0x0001,

0xfc3c,	// (0x0002f7cc) cell_eswt_app_pane_g_ParamLimits

0xfc3c,	// (0x0002f7cc) cell_eswt_app_pane_g

0xc0db,	// (0x0002bc6b) cell_eswt_app_pane_t1_ParamLimits

0xc0db,	// (0x0002bc6b) cell_eswt_app_pane_t1

0x7ec7,	// (0x00027a57) grid_highlight_pane_cp70_ParamLimits

0x7ec7,	// (0x00027a57) grid_highlight_pane_cp70

0x5278,	// (0x00024e08) set_content_pane_g1

0x5580,	// (0x00025110) status_small_volume_pane

0xc10d,	// (0x0002bc9d) status_small_volume_pane_g1

0xc115,	// (0x0002bca5) volume_small2_pane

0xc11e,	// (0x0002bcae) volume_small2_pane_g1

0xc127,	// (0x0002bcb7) volume_small2_pane_g2

0xc130,	// (0x0002bcc0) volume_small2_pane_g3

0xc139,	// (0x0002bcc9) volume_small2_pane_g4

0xc142,	// (0x0002bcd2) volume_small2_pane_g5

0xc14b,	// (0x0002bcdb) volume_small2_pane_g6

0xc154,	// (0x0002bce4) volume_small2_pane_g7

0xc15d,	// (0x0002bced) volume_small2_pane_g8

0xc166,	// (0x0002bcf6) volume_small2_pane_g9

0xc16f,	// (0x0002bcff) volume_small2_pane_g10

0x0009,

0xfc41,	// (0x0002f7d1) volume_small2_pane_g

0x78eb,	// (0x0002747b) fep_vkb_top_text_pane_g1_ParamLimits

0xbdf6,	// (0x0002b986) fep_vkb_top_text_pane_t1_ParamLimits

0x7b05,	// (0x00027695) popup_preview_fixed_window_g3_ParamLimits

0x7b05,	// (0x00027695) popup_preview_fixed_window_g3

0xaaae,	// (0x0002a63e) popup_toolbar_trans_pane

0xb464,	// (0x0002aff4) aid_height_set_list_ParamLimits

0x55f5,	// (0x00025185) aid_size_parent_ParamLimits

0x4abb,	// (0x0002464b) list_highlight_pane_cp2_ParamLimits

0x5278,	// (0x00024e08) set_content_pane_g1_ParamLimits

0xe11c,	// (0x0002dcac) list_single_image_pane_ParamLimits

0xe11c,	// (0x0002dcac) list_single_image_pane

0xc178,	// (0x0002bd08) aid_size_cell_image_ParamLimits

0xc178,	// (0x0002bd08) aid_size_cell_image

0xc185,	// (0x0002bd15) grid_single_image_pane_ParamLimits

0xc185,	// (0x0002bd15) grid_single_image_pane

0x7ed3,	// (0x00027a63) list_single_image_pane_g1_ParamLimits

0x7ed3,	// (0x00027a63) list_single_image_pane_g1

0x7edf,	// (0x00027a6f) list_single_image_pane_g2_ParamLimits

0x7edf,	// (0x00027a6f) list_single_image_pane_g2

0x0001,

0xfc56,	// (0x0002f7e6) list_single_image_pane_g_ParamLimits

0xfc56,	// (0x0002f7e6) list_single_image_pane_g

0x7ef3,	// (0x00027a83) list_single_image_pane_t1_ParamLimits

0x7ef3,	// (0x00027a83) list_single_image_pane_t1

0xc191,	// (0x0002bd21) cell_image_list_pane_ParamLimits

0xc191,	// (0x0002bd21) cell_image_list_pane

0xc1a5,	// (0x0002bd35) cell_image_list_pane_g1

0xc1ae,	// (0x0002bd3e) cell_image_list_pane_g2

0x0001,

0xfc5b,	// (0x0002f7eb) cell_image_list_pane_g

0x7f09,	// (0x00027a99) aid_size_cell_tb_trans_pane

0x4962,	// (0x000244f2) bg_tb_trans_pane

0x7f1b,	// (0x00027aab) grid_tb_trans_pane

0x57e5,	// (0x00025375) bg_tb_trans_pane_g1

0x57ed,	// (0x0002537d) bg_tb_trans_pane_g2

0x57f5,	// (0x00025385) bg_tb_trans_pane_g3

0x57fd,	// (0x0002538d) bg_tb_trans_pane_g4

0x5805,	// (0x00025395) bg_tb_trans_pane_g5

0x581d,	// (0x000253ad) bg_tb_trans_pane_g6

0x5825,	// (0x000253b5) bg_tb_trans_pane_g7

0x580d,	// (0x0002539d) bg_tb_trans_pane_g8

0x5815,	// (0x000253a5) bg_tb_trans_pane_g9

0x0008,

0xfc60,	// (0x0002f7f0) bg_tb_trans_pane_g

0x7f2f,	// (0x00027abf) cell_toolbar_trans_pane_ParamLimits

0x7f2f,	// (0x00027abf) cell_toolbar_trans_pane

0x764d,	// (0x000271dd) cell_toolbar_trans_pane_g1

0xb916,	// (0x0002b4a6) list_form2_midp_pane_t1

0xb924,	// (0x0002b4b4) list_form2_midp_pane_t2

0x0001,

0xfafd,	// (0x0002f68d) list_form2_midp_pane_t

0x73aa,	// (0x00026f3a) scroll_pane_cp51_ParamLimits

0x7521,	// (0x000270b1) form2_midp_wait_pane_g1

0x752a,	// (0x000270ba) form2_midp_wait_pane_g2

0x7533,	// (0x000270c3) form2_midp_wait_pane_g3

0x0002,

0xfb12,	// (0x0002f6a2) form2_midp_wait_pane_g

0x1c92,	// (0x00021822) list_highlight_pane_cp21_ParamLimits

0x7553,	// (0x000270e3) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7562,	// (0x000270f2) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe08f,	// (0x0002dc1f) list_single_2graphic_im_pane_ParamLimits

0xe08f,	// (0x0002dc1f) list_single_2graphic_im_pane

0x7f55,	// (0x00027ae5) list_single_2graphic_im_pane_g1_ParamLimits

0x7f55,	// (0x00027ae5) list_single_2graphic_im_pane_g1

0x7f66,	// (0x00027af6) list_single_2graphic_im_pane_g2_ParamLimits

0x7f66,	// (0x00027af6) list_single_2graphic_im_pane_g2

0x7f72,	// (0x00027b02) list_single_2graphic_im_pane_g3_ParamLimits

0x7f72,	// (0x00027b02) list_single_2graphic_im_pane_g3

0x0003,

0xfc73,	// (0x0002f803) list_single_2graphic_im_pane_g_ParamLimits

0xfc73,	// (0x0002f803) list_single_2graphic_im_pane_g

0x7f92,	// (0x00027b22) list_single_2graphic_im_pane_t1_ParamLimits

0x7f92,	// (0x00027b22) list_single_2graphic_im_pane_t1

0x7b11,	// (0x000276a1) list_single_graphic_2heading_pane_fp_ParamLimits

0x7b11,	// (0x000276a1) list_single_graphic_2heading_pane_fp

0xe477,	// (0x0002e007) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe477,	// (0x0002e007) list_single_graphic_2heading_pane_fp_g1

0x7b27,	// (0x000276b7) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7b27,	// (0x000276b7) list_single_graphic_2heading_pane_fp_g2

0xd87f,	// (0x0002d40f) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd87f,	// (0x0002d40f) list_single_graphic_2heading_pane_fp_g3

0xe44c,	// (0x0002dfdc) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xe44c,	// (0x0002dfdc) list_single_graphic_2heading_pane_fp_g4

0x7b33,	// (0x000276c3) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7b33,	// (0x000276c3) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9a,	// (0x0002f72a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x0002f72a) list_single_graphic_2heading_pane_fp_g

0xe650,	// (0x0002e1e0) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe650,	// (0x0002e1e0) list_single_graphic_2heading_pane_fp_t1

0xe4af,	// (0x0002e03f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe4af,	// (0x0002e03f) list_single_graphic_2heading_pane_fp_t2

0xf3cb,	// (0x0002ef5b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf3cb,	// (0x0002ef5b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7c,	// (0x0002f80c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7c,	// (0x0002f80c) list_single_graphic_2heading_pane_fp_t

0x76d9,	// (0x00027269) fep_hwr_write_pane_g5_ParamLimits

0x76d9,	// (0x00027269) fep_hwr_write_pane_g5

0x76e5,	// (0x00027275) fep_hwr_write_pane_g6_ParamLimits

0x76e5,	// (0x00027275) fep_hwr_write_pane_g6

0x7d72,	// (0x00027902) eswt_shell_pane_ParamLimits

0x5859,	// (0x000253e9) bg_popup_window_pane_cp18_ParamLimits

0x68b0,	// (0x00026440) heading_pane_cp70

0x7e9c,	// (0x00027a2c) popup_eswt_tasktip_window_t1_ParamLimits

0xabae,	// (0x0002a73e) aid_touch_tab_arrow_left

0xabba,	// (0x0002a74a) aid_touch_tab_arrow_right

0x9a04,	// (0x00029594) title_pane_g3_ParamLimits

0x9a04,	// (0x00029594) title_pane_g3

0x4921,	// (0x000244b1) set_value_pane_g1

0xaaae,	// (0x0002a63e) popup_toolbar_trans_pane_ParamLimits

0x7f09,	// (0x00027a99) aid_size_cell_tb_trans_pane_ParamLimits

0x4962,	// (0x000244f2) bg_tb_trans_pane_ParamLimits

0x7f1b,	// (0x00027aab) grid_tb_trans_pane_ParamLimits

0x1dc5,	// (0x00021955) cont_note_pane_ParamLimits

0x1dc5,	// (0x00021955) cont_note_pane

0x2054,	// (0x00021be4) cont_snote2_single_text_pane_ParamLimits

0x2054,	// (0x00021be4) cont_snote2_single_text_pane

0x2054,	// (0x00021be4) cont_snote2_single_graphic_pane_ParamLimits

0x2054,	// (0x00021be4) cont_snote2_single_graphic_pane

0x5d3d,	// (0x000258cd) cont_note_wait_pane_ParamLimits

0x5d3d,	// (0x000258cd) cont_note_wait_pane

0x5d3d,	// (0x000258cd) cont_note_image_pane_ParamLimits

0x5d3d,	// (0x000258cd) cont_note_image_pane

0x7fc3,	// (0x00027b53) popup_note2_window_g1_ParamLimits

0x7fc3,	// (0x00027b53) popup_note2_window_g1

0x7ff4,	// (0x00027b84) popup_note2_window_t1_ParamLimits

0x7ff4,	// (0x00027b84) popup_note2_window_t1

0x8039,	// (0x00027bc9) popup_note2_window_t2_ParamLimits

0x8039,	// (0x00027bc9) popup_note2_window_t2

0x807e,	// (0x00027c0e) popup_note2_window_t3_ParamLimits

0x807e,	// (0x00027c0e) popup_note2_window_t3

0x80c3,	// (0x00027c53) popup_note2_window_t4_ParamLimits

0x80c3,	// (0x00027c53) popup_note2_window_t4

0x1e3d,	// (0x000219cd) popup_note2_window_t5_ParamLimits

0x1e3d,	// (0x000219cd) popup_note2_window_t5

0x0004,

0xfc88,	// (0x0002f818) popup_note2_window_t_ParamLimits

0xfc88,	// (0x0002f818) popup_note2_window_t

0x80f2,	// (0x00027c82) popup_note2_image_window_g1_ParamLimits

0x80f2,	// (0x00027c82) popup_note2_image_window_g1

0x80fe,	// (0x00027c8e) popup_note2_image_window_g2_ParamLimits

0x80fe,	// (0x00027c8e) popup_note2_image_window_g2

0x0001,

0xfc93,	// (0x0002f823) popup_note2_image_window_g_ParamLimits

0xfc93,	// (0x0002f823) popup_note2_image_window_g

0x8110,	// (0x00027ca0) popup_note2_image_window_t1_ParamLimits

0x8110,	// (0x00027ca0) popup_note2_image_window_t1

0x8128,	// (0x00027cb8) popup_note2_image_window_t2_ParamLimits

0x8128,	// (0x00027cb8) popup_note2_image_window_t2

0x8140,	// (0x00027cd0) popup_note2_image_window_t3_ParamLimits

0x8140,	// (0x00027cd0) popup_note2_image_window_t3

0x0002,

0xfc98,	// (0x0002f828) popup_note2_image_window_t_ParamLimits

0xfc98,	// (0x0002f828) popup_note2_image_window_t

0x5d4b,	// (0x000258db) popup_note2_wait_window_g1_ParamLimits

0x5d4b,	// (0x000258db) popup_note2_wait_window_g1

0x815c,	// (0x00027cec) popup_note2_wait_window_g2_ParamLimits

0x815c,	// (0x00027cec) popup_note2_wait_window_g2

0x5d63,	// (0x000258f3) popup_note2_wait_window_g3_ParamLimits

0x5d63,	// (0x000258f3) popup_note2_wait_window_g3

0x0002,

0xfc9f,	// (0x0002f82f) popup_note2_wait_window_g_ParamLimits

0xfc9f,	// (0x0002f82f) popup_note2_wait_window_g

0x8168,	// (0x00027cf8) popup_note2_wait_window_t1_ParamLimits

0x8168,	// (0x00027cf8) popup_note2_wait_window_t1

0x8186,	// (0x00027d16) popup_note2_wait_window_t2_ParamLimits

0x8186,	// (0x00027d16) popup_note2_wait_window_t2

0x81a4,	// (0x00027d34) popup_note2_wait_window_t3_ParamLimits

0x81a4,	// (0x00027d34) popup_note2_wait_window_t3

0x81b6,	// (0x00027d46) popup_note2_wait_window_t4_ParamLimits

0x81b6,	// (0x00027d46) popup_note2_wait_window_t4

0x0003,

0xfca6,	// (0x0002f836) popup_note2_wait_window_t_ParamLimits

0xfca6,	// (0x0002f836) popup_note2_wait_window_t

0x81c8,	// (0x00027d58) wait_bar2_pane_ParamLimits

0x81c8,	// (0x00027d58) wait_bar2_pane

0x81e0,	// (0x00027d70) popup_snote2_single_text_window_g1_ParamLimits

0x81e0,	// (0x00027d70) popup_snote2_single_text_window_g1

0x8208,	// (0x00027d98) popup_snote2_single_text_window_t1_ParamLimits

0x8208,	// (0x00027d98) popup_snote2_single_text_window_t1

0x8254,	// (0x00027de4) popup_snote2_single_text_window_t2_ParamLimits

0x8254,	// (0x00027de4) popup_snote2_single_text_window_t2

0x82a0,	// (0x00027e30) popup_snote2_single_text_window_t3_ParamLimits

0x82a0,	// (0x00027e30) popup_snote2_single_text_window_t3

0x82e1,	// (0x00027e71) popup_snote2_single_text_window_t4_ParamLimits

0x82e1,	// (0x00027e71) popup_snote2_single_text_window_t4

0x8317,	// (0x00027ea7) popup_snote2_single_text_window_t5_ParamLimits

0x8317,	// (0x00027ea7) popup_snote2_single_text_window_t5

0x0004,

0xfcaf,	// (0x0002f83f) popup_snote2_single_text_window_t_ParamLimits

0xfcaf,	// (0x0002f83f) popup_snote2_single_text_window_t

0x8342,	// (0x00027ed2) popup_snote2_single_graphic_window_g1_ParamLimits

0x8342,	// (0x00027ed2) popup_snote2_single_graphic_window_g1

0x836a,	// (0x00027efa) popup_snote2_single_graphic_window_g2_ParamLimits

0x836a,	// (0x00027efa) popup_snote2_single_graphic_window_g2

0x0001,

0xfcba,	// (0x0002f84a) popup_snote2_single_graphic_window_g_ParamLimits

0xfcba,	// (0x0002f84a) popup_snote2_single_graphic_window_g

0x8392,	// (0x00027f22) popup_snote2_single_graphic_window_t1_ParamLimits

0x8392,	// (0x00027f22) popup_snote2_single_graphic_window_t1

0x83de,	// (0x00027f6e) popup_snote2_single_graphic_window_t2_ParamLimits

0x83de,	// (0x00027f6e) popup_snote2_single_graphic_window_t2

0x82a0,	// (0x00027e30) popup_snote2_single_graphic_window_t3_ParamLimits

0x82a0,	// (0x00027e30) popup_snote2_single_graphic_window_t3

0x82e1,	// (0x00027e71) popup_snote2_single_graphic_window_t4_ParamLimits

0x82e1,	// (0x00027e71) popup_snote2_single_graphic_window_t4

0x8317,	// (0x00027ea7) popup_snote2_single_graphic_window_t5_ParamLimits

0x8317,	// (0x00027ea7) popup_snote2_single_graphic_window_t5

0x0004,

0xfcbf,	// (0x0002f84f) popup_snote2_single_graphic_window_t_ParamLimits

0xfcbf,	// (0x0002f84f) popup_snote2_single_graphic_window_t

0x733e,	// (0x00026ece) clock_nsta_pane_cp2_t1

0x733e,	// (0x00026ece) clock_nsta_pane_cp2_t2

0x0001,

0xfad3,	// (0x0002f663) clock_nsta_pane_cp2_t

0xdcf8,	// (0x0002d888) form_field_data_wide_pane_g1_ParamLimits

0x2280,	// (0x00021e10) form_field_data_wide_pane_g2_ParamLimits

0x2280,	// (0x00021e10) form_field_data_wide_pane_g2

0x4970,	// (0x00024500) form_field_data_wide_pane_g3_ParamLimits

0x4970,	// (0x00024500) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x0002f211) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x0002f211) form_field_data_wide_pane_g

0xb7d2,	// (0x0002b362) grid_touch_3_pane_ParamLimits

0xb7d2,	// (0x0002b362) grid_touch_3_pane

0xc1b7,	// (0x0002bd47) cell_touch_3_pane_ParamLimits

0xc1b7,	// (0x0002bd47) cell_touch_3_pane

0x764d,	// (0x000271dd) cell_touch_3_pane_g1

0x764d,	// (0x000271dd) cell_touch_3_pane_g2

0x0001,

0xfb58,	// (0x0002f6e8) cell_touch_3_pane_g

0x1e6f,	// (0x000219ff) cont_query_data_pane

0x1e77,	// (0x00021a07) cont_query_data_pane_cp1

0x842a,	// (0x00027fba) button_value_adjust_pane_cp7

0x8432,	// (0x00027fc2) query_popup_pane_cp3

0x4ee6,	// (0x00024a76) bg_popup_sub_pane_cp22_ParamLimits

0xa0e7,	// (0x00029c77) navi_navi_volume_pane_cp2

0xa0ff,	// (0x00029c8f) popup_side_volume_key_window_g2

0xa10b,	// (0x00029c9b) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x0002f2a7) popup_side_volume_key_window_g

0xa125,	// (0x00029cb5) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x0002f2ae) popup_side_volume_key_window_t

0x5144,	// (0x00024cd4) popup_side_volume_key_window_ParamLimits

0xd965,	// (0x0002d4f5) list_double_graphic_pane_g4_ParamLimits

0xd965,	// (0x0002d4f5) list_double_graphic_pane_g4

0xe0d6,	// (0x0002dc66) list_single_2heading_msg_pane_ParamLimits

0xe0d6,	// (0x0002dc66) list_single_2heading_msg_pane

0xf3eb,	// (0x0002ef7b) list_single_2heading_msg_pane_g1_ParamLimits

0xf3eb,	// (0x0002ef7b) list_single_2heading_msg_pane_g1

0xd794,	// (0x0002d324) list_single_2heading_msg_pane_g2_ParamLimits

0xd794,	// (0x0002d324) list_single_2heading_msg_pane_g2

0xf3f7,	// (0x0002ef87) list_single_2heading_msg_pane_g3_ParamLimits

0xf3f7,	// (0x0002ef87) list_single_2heading_msg_pane_g3

0xf403,	// (0x0002ef93) list_single_2heading_msg_pane_g4_ParamLimits

0xf403,	// (0x0002ef93) list_single_2heading_msg_pane_g4

0x0003,

0xfcca,	// (0x0002f85a) list_single_2heading_msg_pane_g_ParamLimits

0xfcca,	// (0x0002f85a) list_single_2heading_msg_pane_g

0xf41b,	// (0x0002efab) list_single_2heading_msg_pane_t1_ParamLimits

0xf41b,	// (0x0002efab) list_single_2heading_msg_pane_t1

0xf443,	// (0x0002efd3) list_single_2heading_msg_pane_t2_ParamLimits

0xf443,	// (0x0002efd3) list_single_2heading_msg_pane_t2

0xf477,	// (0x0002f007) list_single_2heading_msg_pane_t3_ParamLimits

0xf477,	// (0x0002f007) list_single_2heading_msg_pane_t3

0xf4b0,	// (0x0002f040) list_single_2heading_msg_pane_t4_ParamLimits

0xf4b0,	// (0x0002f040) list_single_2heading_msg_pane_t4

0x0003,

0xfcd3,	// (0x0002f863) list_single_2heading_msg_pane_t_ParamLimits

0xfcd3,	// (0x0002f863) list_single_2heading_msg_pane_t

0x1c30,	// (0x000217c0) title_pane_g4_ParamLimits

0x1c30,	// (0x000217c0) title_pane_g4

0x9dd8,	// (0x00029968) title_pane_stacon_g3_ParamLimits

0x9dd8,	// (0x00029968) title_pane_stacon_g3

0x7f86,	// (0x00027b16) list_single_2graphic_im_pane_g4_ParamLimits

0x7f86,	// (0x00027b16) list_single_2graphic_im_pane_g4

0x66ea,	// (0x0002627a) popup_side_volume_key_window_cp

0x6c26,	// (0x000267b6) main_idle_act2_pane_t1

0xaea6,	// (0x0002aa36) toolbar_button_pane_g10

0x9cf1,	// (0x00029881) popup_toolbar_window_cp1

0x732f,	// (0x00026ebf) clock_nsta_pane_cp_t1

0x732f,	// (0x00026ebf) clock_nsta_pane_cp_t2

0x0001,

0xface,	// (0x0002f65e) clock_nsta_pane_cp_t

0xa0e7,	// (0x00029c77) navi_navi_volume_pane_cp2_ParamLimits

0xa0f3,	// (0x00029c83) popup_side_volume_key_window_g1_ParamLimits

0xa0ff,	// (0x00029c8f) popup_side_volume_key_window_g2_ParamLimits

0xa10b,	// (0x00029c9b) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x0002f2a7) popup_side_volume_key_window_g_ParamLimits

0xbad6,	// (0x0002b666) fep_hwr_aid_pane

0xbb7d,	// (0x0002b70d) bg_fep_hwr_top_pane_g4_ParamLimits

0x76bb,	// (0x0002724b) fep_hwr_top_pane_g1_ParamLimits

0x76a9,	// (0x00027239) fep_hwr_top_pane_g2_ParamLimits

0xbb9d,	// (0x0002b72d) fep_hwr_top_pane_g3_ParamLimits

0xfb23,	// (0x0002f6b3) fep_hwr_top_pane_g_ParamLimits

0xbbb2,	// (0x0002b742) fep_hwr_top_text_pane_ParamLimits

0x64b6,	// (0x00026046) aid_touch_tab_arrow_arrow_2

0x64ad,	// (0x0002603d) aid_touch_tab_arrow_left_2

0xbaea,	// (0x0002b67a) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xbb21,	// (0x0002b6b1) fep_hwr_prediction_pane

0x77a6,	// (0x00027336) fep_vkb_prediction_pane

0xbdd3,	// (0x0002b963) fep_vkb_side_pane_g3_ParamLimits

0xbdd3,	// (0x0002b963) fep_vkb_side_pane_g3

0xbee2,	// (0x0002ba72) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xbf4e,	// (0x0002bade) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xbf5b,	// (0x0002baeb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd2,	// (0x0002f762) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xc1fc,	// (0x0002bd8c) fep_hwr_prediction_pane_g1

0xc206,	// (0x0002bd96) fep_hwr_prediction_pane_g2

0xc20e,	// (0x0002bd9e) fep_hwr_prediction_pane_g3

0xc216,	// (0x0002bda6) fep_hwr_prediction_pane_g4

0x0003,

0xfcdc,	// (0x0002f86c) fep_hwr_prediction_pane_g

0x8443,	// (0x00027fd3) fep_vkb_prediction_pane_g1

0x844d,	// (0x00027fdd) fep_vkb_prediction_pane_g2

0x8455,	// (0x00027fe5) fep_vkb_prediction_pane_g3

0x845d,	// (0x00027fed) fep_vkb_prediction_pane_g4

0x0003,

0xfce5,	// (0x0002f875) fep_vkb_prediction_pane_g

0xb40c,	// (0x0002af9c) slider_set_pane_g3

0xb420,	// (0x0002afb0) slider_set_pane_g4

0xb438,	// (0x0002afc8) slider_set_pane_g5

0xb40c,	// (0x0002af9c) slider_set_pane_g6

0xb44e,	// (0x0002afde) slider_set_pane_g7

0x69b0,	// (0x00026540) slider_form_pane_g3

0x69b9,	// (0x00026549) slider_form_pane_g4

0x69c1,	// (0x00026551) slider_form_pane_g5

0x69b0,	// (0x00026540) slider_form_pane_g6

0xb5bb,	// (0x0002b14b) slider_form_pane_g7

0x6e9c,	// (0x00026a2c) slider_set_pane_vc_g3

0x6ea5,	// (0x00026a35) slider_set_pane_vc_g4

0x6eae,	// (0x00026a3e) slider_set_pane_vc_g5

0x6e9c,	// (0x00026a2c) slider_set_pane_vc_g6

0x6eb7,	// (0x00026a47) slider_set_pane_vc_g7

0x7067,	// (0x00026bf7) slider_form_pane_vc_g1

0x7070,	// (0x00026c00) slider_form_pane_vc_g2

0x7079,	// (0x00026c09) slider_form_pane_vc_g3

0x7067,	// (0x00026bf7) slider_form_pane_vc_g4

0x7082,	// (0x00026c12) slider_form_pane_vc_g5

0x0004,

0xfaa0,	// (0x0002f630) slider_form_pane_vc_g

0x979b,	// (0x0002932b) main_idle_act3_pane

0x8465,	// (0x00027ff5) ai3_links_pane

0xc21e,	// (0x0002bdae) popup_ai3_data_window_ParamLimits

0xc21e,	// (0x0002bdae) popup_ai3_data_window

0x1a0c,	// (0x0002159c) grid_ai3_links_pane

0xc236,	// (0x0002bdc6) cell_ai3_links_pane_ParamLimits

0xc236,	// (0x0002bdc6) cell_ai3_links_pane

0x846e,	// (0x00027ffe) bg_popup_sub_pane_cp11

0x847b,	// (0x0002800b) cell_ai3_links_pane_g1

0x1a0c,	// (0x0002159c) bg_popup_sub_pane_cp12

0x84a0,	// (0x00028030) heading_ai3_data_pane

0x84a8,	// (0x00028038) list_ai3_gene_pane

0x84b4,	// (0x00028044) popup_ai3_data_window_g1

0x84bc,	// (0x0002804c) heading_ai3_data_pane_g1

0x84c4,	// (0x00028054) heading_ai3_data_pane_t1

0x84d2,	// (0x00028062) list_double_ai3_gene_pane_ParamLimits

0x84d2,	// (0x00028062) list_double_ai3_gene_pane

0x84df,	// (0x0002806f) list_single_ai3_gene_pane_ParamLimits

0x84df,	// (0x0002806f) list_single_ai3_gene_pane

0x7612,	// (0x000271a2) list_highlight_pane_cp7_ParamLimits

0x7612,	// (0x000271a2) list_highlight_pane_cp7

0x84ec,	// (0x0002807c) list_single_a13_gene_pane_t1_ParamLimits

0x84ec,	// (0x0002807c) list_single_a13_gene_pane_t1

0x8503,	// (0x00028093) list_single_ai3_gene_pane_g1

0x850c,	// (0x0002809c) list_single_ai3_gene_pane_g2

0x0001,

0xfcee,	// (0x0002f87e) list_single_ai3_gene_pane_g

0x8514,	// (0x000280a4) list_double_ai3_gene_pane_g1_ParamLimits

0x8514,	// (0x000280a4) list_double_ai3_gene_pane_g1

0x8520,	// (0x000280b0) list_double_ai3_gene_pane_t1_ParamLimits

0x8520,	// (0x000280b0) list_double_ai3_gene_pane_t1

0x853c,	// (0x000280cc) list_double_ai3_gene_pane_t2_ParamLimits

0x853c,	// (0x000280cc) list_double_ai3_gene_pane_t2

0x8551,	// (0x000280e1) list_double_ai3_gene_pane_t3_ParamLimits

0x8551,	// (0x000280e1) list_double_ai3_gene_pane_t3

0x0002,

0xfcf3,	// (0x0002f883) list_double_ai3_gene_pane_t_ParamLimits

0xfcf3,	// (0x0002f883) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf3e1,	// (0x0002ef71) aid_size_min_col_2

0xc1e8,	// (0x0002bd78) aid_size_min_msg_ParamLimits

0xc1e8,	// (0x0002bd78) aid_size_min_msg

0xbde7,	// (0x0002b977) fep_vkb_top_text_pane_g2_ParamLimits

0xbde7,	// (0x0002b977) fep_vkb_top_text_pane_g2

0x0001,

0xfb53,	// (0x0002f6e3) fep_vkb_top_text_pane_g_ParamLimits

0xfb53,	// (0x0002f6e3) fep_vkb_top_text_pane_g

0x979b,	// (0x0002932b) main_hc_apps_shell_pane

0x856e,	// (0x000280fe) grid_hc_apps_pane_ParamLimits

0x856e,	// (0x000280fe) grid_hc_apps_pane

0x857d,	// (0x0002810d) list_hc_apps_pane

0x8585,	// (0x00028115) scroll_pane_cp37_ParamLimits

0x8585,	// (0x00028115) scroll_pane_cp37

0xc24e,	// (0x0002bdde) cell_hc_apps_pane_ParamLimits

0xc24e,	// (0x0002bdde) cell_hc_apps_pane

0xc2fc,	// (0x0002be8c) cell_hc_apps_pane_g1_ParamLimits

0xc2fc,	// (0x0002be8c) cell_hc_apps_pane_g1

0x8591,	// (0x00028121) cell_hc_apps_pane_g2_ParamLimits

0x8591,	// (0x00028121) cell_hc_apps_pane_g2

0x85ad,	// (0x0002813d) cell_hc_apps_pane_g3_ParamLimits

0x85ad,	// (0x0002813d) cell_hc_apps_pane_g3

0x0002,

0xfcfa,	// (0x0002f88a) cell_hc_apps_pane_g_ParamLimits

0xfcfa,	// (0x0002f88a) cell_hc_apps_pane_g

0xc32d,	// (0x0002bebd) cell_hc_apps_pane_t1_ParamLimits

0xc32d,	// (0x0002bebd) cell_hc_apps_pane_t1

0x1dc5,	// (0x00021955) grid_highlight_pane_cp10_ParamLimits

0x1dc5,	// (0x00021955) grid_highlight_pane_cp10

0xc36d,	// (0x0002befd) list_single_hc_apps_pane_ParamLimits

0xc36d,	// (0x0002befd) list_single_hc_apps_pane

0xc3d5,	// (0x0002bf65) list_single_hc_apps_pane_g1

0xf4d5,	// (0x0002f065) list_single_hc_apps_pane_g2

0x0001,

0xfd01,	// (0x0002f891) list_single_hc_apps_pane_g

0xf4ee,	// (0x0002f07e) list_single_hc_apps_pane_g2_copy1

0xf50a,	// (0x0002f09a) list_single_hc_apps_pane_t1

0x1c92,	// (0x00021822) bg_set_opt_pane_cp_ParamLimits

0x9aa4,	// (0x00029634) setting_slider_pane_t1_ParamLimits

0x9abd,	// (0x0002964d) setting_slider_pane_t2_ParamLimits

0x9ad7,	// (0x00029667) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0002f0f4) setting_slider_pane_t_ParamLimits

0x9aef,	// (0x0002967f) slider_set_pane_ParamLimits

0xa494,	// (0x0002a024) control_pane_g5_ParamLimits

0xa494,	// (0x0002a024) control_pane_g5

0x68f7,	// (0x00026487) slider_set_pane_g1_ParamLimits

0xb400,	// (0x0002af90) slider_set_pane_g2_ParamLimits

0xb40c,	// (0x0002af9c) slider_set_pane_g3_ParamLimits

0xb420,	// (0x0002afb0) slider_set_pane_g4_ParamLimits

0xb438,	// (0x0002afc8) slider_set_pane_g5_ParamLimits

0xb40c,	// (0x0002af9c) slider_set_pane_g6_ParamLimits

0xb44e,	// (0x0002afde) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x0002f4fa) slider_set_pane_g_ParamLimits

0x5223,	// (0x00024db3) navi_icon_text_pane_ParamLimits

0xab84,	// (0x0002a714) aid_fill_nsta_2_ParamLimits

0xabae,	// (0x0002a73e) aid_touch_tab_arrow_left_ParamLimits

0xabba,	// (0x0002a74a) aid_touch_tab_arrow_right_ParamLimits

0xac26,	// (0x0002a7b6) clock_nsta_pane_ParamLimits

0x648f,	// (0x0002601f) navi_icon_pane_g1_ParamLimits

0x649b,	// (0x0002602b) navi_text_pane_t1_ParamLimits

0x7384,	// (0x00026f14) navi_icon_text_pane_g1_ParamLimits

0x7390,	// (0x00026f20) navi_icon_text_pane_t1_ParamLimits

0xc3d5,	// (0x0002bf65) list_single_hc_apps_pane_g1_ParamLimits

0xf4d5,	// (0x0002f065) list_single_hc_apps_pane_g2_ParamLimits

0xfd01,	// (0x0002f891) list_single_hc_apps_pane_g_ParamLimits

0xf4ee,	// (0x0002f07e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xf50a,	// (0x0002f09a) list_single_hc_apps_pane_t1_ParamLimits

0x98f8,	// (0x00029488) popup_toolbar2_fixed_window_ParamLimits

0x98f8,	// (0x00029488) popup_toolbar2_fixed_window

0xaaa4,	// (0x0002a634) popup_toolbar2_float_window

0x1a0c,	// (0x0002159c) bg_popup_sub_pane_cp27

0x85cf,	// (0x0002815f) grid_toolbar2_float_pane

0x1a0c,	// (0x0002159c) bg_popup_sub_pane_cp26

0x85cf,	// (0x0002815f) grid_toolbar2_fixed_pane

0xc3ee,	// (0x0002bf7e) cell_toolbar2_fixed_pane_ParamLimits

0xc3ee,	// (0x0002bf7e) cell_toolbar2_fixed_pane

0xc3ff,	// (0x0002bf8f) cell_toolbar2_fixed_pane_g1

0x5765,	// (0x000252f5) toolbar2_fixed_button_pane

0x57e5,	// (0x00025375) toolbar2_fixed_button_pane_g1

0x57ed,	// (0x0002537d) toolbar2_fixed_button_pane_g2

0x57f5,	// (0x00025385) toolbar2_fixed_button_pane_g3

0x57fd,	// (0x0002538d) toolbar2_fixed_button_pane_g4

0x5805,	// (0x00025395) toolbar2_fixed_button_pane_g5

0x580d,	// (0x0002539d) toolbar2_fixed_button_pane_g6

0x5815,	// (0x000253a5) toolbar2_fixed_button_pane_g7

0x581d,	// (0x000253ad) toolbar2_fixed_button_pane_g8

0x5825,	// (0x000253b5) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x0002f3fc) toolbar2_fixed_button_pane_g

0x85d7,	// (0x00028167) cell_toolbar2_float_pane_ParamLimits

0x85d7,	// (0x00028167) cell_toolbar2_float_pane

0x85eb,	// (0x0002817b) cell_toolbar2_float_pane_g1

0x5765,	// (0x000252f5) toolbar2_fixed_button_pane_cp

0xbccf,	// (0x0002b85f) fep_vkb_accented_list_pane_ParamLimits

0xbccf,	// (0x0002b85f) fep_vkb_accented_list_pane

0xbec2,	// (0x0002ba52) bg_popup_fep_shadow_pane_g9

0x5397,	// (0x00024f27) bg_popup_fep_shadow_pane_cp3

0x4a69,	// (0x000245f9) list_accented_list_pane

0x85f4,	// (0x00028184) list_single_accented_list_pane_ParamLimits

0x85f4,	// (0x00028184) list_single_accented_list_pane

0x5397,	// (0x00024f27) list_highlight_pane_cp10

0x8605,	// (0x00028195) list_single_accented_list_pane_t1

0xa9f4,	// (0x0002a584) popup_slider_window_ParamLimits

0xa9f4,	// (0x0002a584) popup_slider_window

0x843a,	// (0x00027fca) aid_indentation_list_msg

0xc4b4,	// (0x0002c044) bg_popup_window_pane_cp19

0x8671,	// (0x00028201) popup_slider_window_g1

0x868d,	// (0x0002821d) popup_slider_window_g2

0x86a9,	// (0x00028239) popup_slider_window_g3

0x0005,

0xfd06,	// (0x0002f896) popup_slider_window_g

0x86c5,	// (0x00028255) popup_slider_window_t1

0x870b,	// (0x0002829b) small_volume_slider_vertical_pane

0x764d,	// (0x000271dd) small_volume_slider_vertical_pane_g1

0x764d,	// (0x000271dd) small_volume_slider_vertical_pane_g2

0x8727,	// (0x000282b7) small_volume_slider_vertical_pane_g3

0x0002,

0xfd18,	// (0x0002f8a8) small_volume_slider_vertical_pane_g

0x96be,	// (0x0002924e) area_side_right_pane_ParamLimits

0x96be,	// (0x0002924e) area_side_right_pane

0xc52e,	// (0x0002c0be) aid_size_side_button_ParamLimits

0xc52e,	// (0x0002c0be) aid_size_side_button

0xc542,	// (0x0002c0d2) grid_sctrl_middle_pane_ParamLimits

0xc542,	// (0x0002c0d2) grid_sctrl_middle_pane

0xc561,	// (0x0002c0f1) sctrl_sk_bottom_pane

0xc572,	// (0x0002c102) sctrl_sk_top_pane

0xc584,	// (0x0002c114) aid_touch_sctrl_top

0xc591,	// (0x0002c121) bg_sctrl_sk_pane_ParamLimits

0xc591,	// (0x0002c121) bg_sctrl_sk_pane

0xc59f,	// (0x0002c12f) sctrl_sk_top_pane_g1

0xc5ac,	// (0x0002c13c) sctrl_sk_top_pane_t1

0xc584,	// (0x0002c114) aid_touch_sctrl_bottom

0xc591,	// (0x0002c121) bg_sctrl_sk_pane_cp_ParamLimits

0xc591,	// (0x0002c121) bg_sctrl_sk_pane_cp

0xc5c7,	// (0x0002c157) sctrl_sk_bottom_pane_g1

0xc5ac,	// (0x0002c13c) sctrl_sk_bottom_pane_t1

0xc5d0,	// (0x0002c160) cell_sctrl_middle_pane_ParamLimits

0xc5d0,	// (0x0002c160) cell_sctrl_middle_pane

0xc5eb,	// (0x0002c17b) aid_touch_sctrl_middle_ParamLimits

0xc5eb,	// (0x0002c17b) aid_touch_sctrl_middle

0xc5fd,	// (0x0002c18d) bg_sctrl_middle_pane_ParamLimits

0xc5fd,	// (0x0002c18d) bg_sctrl_middle_pane

0xbee2,	// (0x0002ba72) cell_sctrl_middle_pane_g1_ParamLimits

0xbee2,	// (0x0002ba72) cell_sctrl_middle_pane_g1

0xc60b,	// (0x0002c19b) cell_sctrl_middle_pane_g2_ParamLimits

0xc60b,	// (0x0002c19b) cell_sctrl_middle_pane_g2

0x0001,

0xfd24,	// (0x0002f8b4) cell_sctrl_middle_pane_g_ParamLimits

0xfd24,	// (0x0002f8b4) cell_sctrl_middle_pane_g

0x57e5,	// (0x00025375) bg_sctrl_middle_pane_g1

0x57f5,	// (0x00025385) bg_sctrl_middle_pane_g2

0x57ed,	// (0x0002537d) bg_sctrl_middle_pane_g3

0x5805,	// (0x00025395) bg_sctrl_middle_pane_g4

0x57fd,	// (0x0002538d) bg_sctrl_middle_pane_g5

0x580d,	// (0x0002539d) bg_sctrl_middle_pane_g6

0x5815,	// (0x000253a5) bg_sctrl_middle_pane_g7

0x5825,	// (0x000253b5) bg_sctrl_middle_pane_g8

0x0007,

0xfd29,	// (0x0002f8b9) bg_sctrl_middle_pane_g

0x581d,	// (0x000253ad) bg_sctrl_middle_pane_g8_copy1

0x57e5,	// (0x00025375) bg_sctrl_sk_pane_g1

0x57ed,	// (0x0002537d) bg_sctrl_sk_pane_g2

0x57f5,	// (0x00025385) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x0002f3fc) bg_sctrl_sk_pane_g

0x2212,	// (0x00021da2) aid_size_touch_scroll_bar

0x57fd,	// (0x0002538d) bg_sctrl_sk_pane_g4

0x5805,	// (0x00025395) bg_sctrl_sk_pane_g5

0x580d,	// (0x0002539d) bg_sctrl_sk_pane_g6

0x5815,	// (0x000253a5) bg_sctrl_sk_pane_g7

0x581d,	// (0x000253ad) bg_sctrl_sk_pane_g8

0x5825,	// (0x000253b5) bg_sctrl_sk_pane_g9

0xa665,	// (0x0002a1f5) popup_fep_china_hwr2_fs_candidate_window

0xa66f,	// (0x0002a1ff) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa66f,	// (0x0002a1ff) popup_fep_china_hwr2_fs_control_window

0xbee2,	// (0x0002ba72) sctrl_sk_top_pane_g2

0x0001,

0xfd1f,	// (0x0002f8af) sctrl_sk_top_pane_g

0xc61b,	// (0x0002c1ab) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc61b,	// (0x0002c1ab) aid_fep_china_hwr2_fs_cell

0xc62d,	// (0x0002c1bd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc62d,	// (0x0002c1bd) bg_popup_fep_shadow_pane_cp4

0xc644,	// (0x0002c1d4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc644,	// (0x0002c1d4) bg_popup_fep_shadow_pane_cp5

0xc656,	// (0x0002c1e6) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc656,	// (0x0002c1e6) popup_fep_china_hwr2_fs_control_bar_grid

0xc666,	// (0x0002c1f6) popup_fep_china_hwr2_fs_control_funtion_grid

0x873e,	// (0x000282ce) aid_fep_china_hwr2_fs_candi_cell

0x1a0c,	// (0x0002159c) bg_popup_fep_shadow_pane_cp6

0x8748,	// (0x000282d8) popup_fep_china_hwr2_fs_candidate_grid

0xc66e,	// (0x0002c1fe) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc66e,	// (0x0002c1fe) cell_fep_china_hwr2_fs_funtion_grid

0x764d,	// (0x000271dd) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8730,	// (0x000282c0) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8730,	// (0x000282c0) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8752,	// (0x000282e2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8752,	// (0x000282e2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd3a,	// (0x0002f8ca) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd3a,	// (0x0002f8ca) cell_fep_china_hwr2_fs_funtion_grid_g

0xc686,	// (0x0002c216) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc686,	// (0x0002c216) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc69b,	// (0x0002c22b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc69b,	// (0x0002c22b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3f,	// (0x0002f8cf) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3f,	// (0x0002f8cf) cell_fep_china_hwr2_fs_funtion_grid_t

0x8768,	// (0x000282f8) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8770,	// (0x00028300) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8778,	// (0x00028308) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd44,	// (0x0002f8d4) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8780,	// (0x00028310) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8780,	// (0x00028310) cell_fep_china_hwr2_fs_candidate_grid

0x8799,	// (0x00028329) popup_fep_china_hwr2_fs_candidate_grid_g20

0x87a1,	// (0x00028331) popup_fep_china_hwr2_fs_candidate_grid_g21

0x764d,	// (0x000271dd) cell_fep_china_hwr2_fs_candidate_grid_g1

0x764d,	// (0x000271dd) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb58,	// (0x0002f6e8) cell_fep_china_hwr2_fs_candidate_grid_g

0x87a9,	// (0x00028339) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5632,	// (0x000251c2) clock_nsta_pane_cp_24_ParamLimits

0x5632,	// (0x000251c2) clock_nsta_pane_cp_24

0x569a,	// (0x0002522a) indicator_nsta_pane_cp_24_ParamLimits

0x569a,	// (0x0002522a) indicator_nsta_pane_cp_24

0x638b,	// (0x00025f1b) heading_pane_g1

0x0001,

0xf8d1,	// (0x0002f461) heading_pane_g

0x6ab3,	// (0x00026643) grid_sct_catagory_button_pane

0x6959,	// (0x000264e9) scroll_pane_cp5_ParamLimits

0x73b6,	// (0x00026f46) button_value_adjust_pane_cp5_ParamLimits

0x73b6,	// (0x00026f46) button_value_adjust_pane_cp5

0x7474,	// (0x00027004) form2_midp_time_pane_ParamLimits

0x87b7,	// (0x00028347) cell_sct_catagory_button_pane_ParamLimits

0x87b7,	// (0x00028347) cell_sct_catagory_button_pane

0x7612,	// (0x000271a2) bg_button_pane_cp01_ParamLimits

0x7612,	// (0x000271a2) bg_button_pane_cp01

0x764d,	// (0x000271dd) cell_sct_catagory_button_pane_g1

0xaa33,	// (0x0002a5c3) popup_tb_extension_window

0xc6b7,	// (0x0002c247) aid_size_cell_ext_ParamLimits

0xc6b7,	// (0x0002c247) aid_size_cell_ext

0x1dc5,	// (0x00021955) bg_tb_trans_pane_cp1_ParamLimits

0x1dc5,	// (0x00021955) bg_tb_trans_pane_cp1

0xc6d7,	// (0x0002c267) grid_tb_ext_pane_ParamLimits

0xc6d7,	// (0x0002c267) grid_tb_ext_pane

0xc709,	// (0x0002c299) cell_tb_ext_pane_ParamLimits

0xc709,	// (0x0002c299) cell_tb_ext_pane

0xc720,	// (0x0002c2b0) cell_tb_ext_pane_g1_ParamLimits

0xc720,	// (0x0002c2b0) cell_tb_ext_pane_g1

0x87c9,	// (0x00028359) cell_tb_ext_pane_t1

0x1dc5,	// (0x00021955) list_highlight_pane_cp11_ParamLimits

0x1dc5,	// (0x00021955) list_highlight_pane_cp11

0x9917,	// (0x000294a7) popup_uni_indicator_window_ParamLimits

0x9917,	// (0x000294a7) popup_uni_indicator_window

0x4962,	// (0x000244f2) bg_popup_sub_pane_cp14

0x87e4,	// (0x00028374) list_uniindi_pane

0x87f0,	// (0x00028380) uniindi_top_pane

0x1dc5,	// (0x00021955) bg_uniindi_top_pane

0x880f,	// (0x0002839f) uniindi_top_pane_g1

0x8825,	// (0x000283b5) uniindi_top_pane_g2

0x0003,

0xfd4b,	// (0x0002f8db) uniindi_top_pane_g

0x884f,	// (0x000283df) uniindi_top_pane_t1

0x8879,	// (0x00028409) list_single_uniindi_pane_ParamLimits

0x8879,	// (0x00028409) list_single_uniindi_pane

0x764d,	// (0x000271dd) bg_uniindi_top_pane_g1

0x888c,	// (0x0002841c) list_single_uniindi_pane_g1

0x889f,	// (0x0002842f) list_single_uniindi_pane_t1

0x979b,	// (0x0002932b) control_bg_pane

0x88c4,	// (0x00028454) bg_sctrl_sk_pane_cp1

0x88cd,	// (0x0002845d) bg_sctrl_sk_pane_cp2

0x88d6,	// (0x00028466) control_bg_pane_g1

0x88df,	// (0x0002846f) control_bg_pane_g2

0x0001,

0xfd54,	// (0x0002f8e4) control_bg_pane_g

0x727a,	// (0x00026e0a) cell_indicator_nsta_pane_g1_ParamLimits

0xb816,	// (0x0002b3a6) cell_indicator_nsta_pane_g2_ParamLimits

0xfabc,	// (0x0002f64c) cell_indicator_nsta_pane_g_ParamLimits

0xe439,	// (0x0002dfc9) form2_midp_time_pane_t1_ParamLimits

0xa5cf,	// (0x0002a15f) main_idle_act4_pane_ParamLimits

0xa5cf,	// (0x0002a15f) main_idle_act4_pane

0xaa33,	// (0x0002a5c3) popup_tb_extension_window_ParamLimits

0xc6f9,	// (0x0002c289) tb_ext_find_pane_ParamLimits

0xc6f9,	// (0x0002c289) tb_ext_find_pane

0x88e8,	// (0x00028478) ai_gene_pane_1_cp1

0x542b,	// (0x00024fbb) ai_gene_pane_2_cp1

0x88f0,	// (0x00028480) list_single_idle_plugin_calendar_pane

0x88f9,	// (0x00028489) list_single_idle_plugin_notification_pane

0x8902,	// (0x00028492) list_single_idle_plugin_player_pane

0xc73d,	// (0x0002c2cd) list_single_idle_plugin_shortcut_pane_ParamLimits

0xc73d,	// (0x0002c2cd) list_single_idle_plugin_shortcut_pane

0xc75f,	// (0x0002c2ef) main_idle_act4_pane_t1

0xc771,	// (0x0002c301) main_idle_act4_pane_t2

0x0001,

0xfd59,	// (0x0002f8e9) main_idle_act4_pane_t

0xc783,	// (0x0002c313) middle_sk_idle_act4_pane_ParamLimits

0xc783,	// (0x0002c313) middle_sk_idle_act4_pane

0xc799,	// (0x0002c329) popup_clock_digital_analogue_window_cp2

0xc7b3,	// (0x0002c343) shortcut_wheel_idle_act4_pane_ParamLimits

0xc7b3,	// (0x0002c343) shortcut_wheel_idle_act4_pane

0x764d,	// (0x000271dd) shortcut_wheel_idle_act4_pane_g1

0x764d,	// (0x000271dd) shortcut_wheel_idle_act4_pane_g2

0x764d,	// (0x000271dd) shortcut_wheel_idle_act4_pane_g3

0x764d,	// (0x000271dd) shortcut_wheel_idle_act4_pane_g4

0x764d,	// (0x000271dd) shortcut_wheel_idle_act4_pane_g5

0x890b,	// (0x0002849b) shortcut_wheel_idle_act4_pane_g6

0x8913,	// (0x000284a3) shortcut_wheel_idle_act4_pane_g7

0x891b,	// (0x000284ab) shortcut_wheel_idle_act4_pane_g8

0x8923,	// (0x000284b3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5e,	// (0x0002f8ee) shortcut_wheel_idle_act4_pane_g

0x77de,	// (0x0002736e) middle_sk_idle_act4_pane_g1_ParamLimits

0x77de,	// (0x0002736e) middle_sk_idle_act4_pane_g1

0xc823,	// (0x0002c3b3) middle_sk_idle_act4_pane_g2_ParamLimits

0xc823,	// (0x0002c3b3) middle_sk_idle_act4_pane_g2

0x0001,

0xfd81,	// (0x0002f911) middle_sk_idle_act4_pane_g_ParamLimits

0xfd81,	// (0x0002f911) middle_sk_idle_act4_pane_g

0xc82f,	// (0x0002c3bf) middle_sk_idle_act4_pane_t1_ParamLimits

0xc82f,	// (0x0002c3bf) middle_sk_idle_act4_pane_t1

0xc84c,	// (0x0002c3dc) grid_ai_shortcut_pane_ParamLimits

0xc84c,	// (0x0002c3dc) grid_ai_shortcut_pane

0xc865,	// (0x0002c3f5) list_highlight_pane_cp16_ParamLimits

0xc865,	// (0x0002c3f5) list_highlight_pane_cp16

0xc872,	// (0x0002c402) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xc872,	// (0x0002c402) list_single_idle_plugin_shortcut_pane_g1

0xc87e,	// (0x0002c40e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xc87e,	// (0x0002c40e) list_single_idle_plugin_shortcut_pane_g2

0xc896,	// (0x0002c426) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xc896,	// (0x0002c426) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd86,	// (0x0002f916) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd86,	// (0x0002f916) list_single_idle_plugin_shortcut_pane_g

0xc8a9,	// (0x0002c439) cell_ai_shortcut_pane_ParamLimits

0xc8a9,	// (0x0002c439) cell_ai_shortcut_pane

0xc8ca,	// (0x0002c45a) cell_ai_shortcut_pane_g1_ParamLimits

0xc8ca,	// (0x0002c45a) cell_ai_shortcut_pane_g1

0x88e8,	// (0x00028478) ai_gene_pane_1_cp2

0x892b,	// (0x000284bb) ai_gene_pane_2_cp2

0x8933,	// (0x000284c3) list_highlight_pane_cp15

0x893c,	// (0x000284cc) list_single_idle_plugin_calendar_pane_g1

0x8933,	// (0x000284c3) list_highlight_pane_cp17

0x8944,	// (0x000284d4) list_single_idle_plugin_calendar_pane_g1_copy1

0x894c,	// (0x000284dc) list_single_idle_plugin_player_pane_g1

0x6cc6,	// (0x00026856) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd8d,	// (0x0002f91d) list_single_idle_plugin_player_pane_g

0x8954,	// (0x000284e4) list_single_idle_plugin_player_pane_t1

0x8962,	// (0x000284f2) list_single_idle_plugin_player_pane_t2

0x8970,	// (0x00028500) list_single_idle_plugin_player_pane_t3

0x897e,	// (0x0002850e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd92,	// (0x0002f922) list_single_idle_plugin_player_pane_t

0x898c,	// (0x0002851c) wait_bar_pane_cp15

0x8994,	// (0x00028524) grid_ai_notification_pane

0x6cc6,	// (0x00026856) list_single_idle_plugin_notification_pane_g1

0xc8ec,	// (0x0002c47c) cell_ai_notification_pane_ParamLimits

0xc8ec,	// (0x0002c47c) cell_ai_notification_pane

0x899d,	// (0x0002852d) cell_ai_notification_pane_g1

0x89a5,	// (0x00028535) cell_ai_notification_pane_t1

0xc8f9,	// (0x0002c489) tb_ext_find_button_pane

0xc901,	// (0x0002c491) tb_ext_find_pane_g1

0xc909,	// (0x0002c499) tb_ext_find_pane_t1

0x4e85,	// (0x00024a15) tb_ext_find_button_pane_g1

0x89b3,	// (0x00028543) tb_ext_find_button_pane_g2

0x0001,

0xfd9b,	// (0x0002f92b) tb_ext_find_button_pane_g

0xc75f,	// (0x0002c2ef) main_idle_act4_pane_t1_ParamLimits

0xc771,	// (0x0002c301) main_idle_act4_pane_t2_ParamLimits

0xfd59,	// (0x0002f8e9) main_idle_act4_pane_t_ParamLimits

0xc799,	// (0x0002c329) popup_clock_digital_analogue_window_cp2_ParamLimits

0xc7a7,	// (0x0002c337) sat_plugin_idle_act4_pane_ParamLimits

0xc7a7,	// (0x0002c337) sat_plugin_idle_act4_pane

0xc917,	// (0x0002c4a7) sat_plugin_idle_act4_pane_t1_ParamLimits

0xc917,	// (0x0002c4a7) sat_plugin_idle_act4_pane_t1

0xc92a,	// (0x0002c4ba) sat_plugin_idle_act4_pane_t2_ParamLimits

0xc92a,	// (0x0002c4ba) sat_plugin_idle_act4_pane_t2

0xc93d,	// (0x0002c4cd) sat_plugin_idle_act4_pane_t3_ParamLimits

0xc93d,	// (0x0002c4cd) sat_plugin_idle_act4_pane_t3

0xc950,	// (0x0002c4e0) sat_plugin_idle_act4_pane_t4_ParamLimits

0xc950,	// (0x0002c4e0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda0,	// (0x0002f930) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda0,	// (0x0002f930) sat_plugin_idle_act4_pane_t

0x9860,	// (0x000293f0) popup_battery_window_ParamLimits

0x9860,	// (0x000293f0) popup_battery_window

0x1dc5,	// (0x00021955) bg_popup_sub_pane_cp25_ParamLimits

0x1dc5,	// (0x00021955) bg_popup_sub_pane_cp25

0x89bc,	// (0x0002854c) popup_battery_window_g1_ParamLimits

0x89bc,	// (0x0002854c) popup_battery_window_g1

0x89c8,	// (0x00028558) popup_battery_window_t1_ParamLimits

0x89c8,	// (0x00028558) popup_battery_window_t1

0x89da,	// (0x0002856a) popup_battery_window_t2_ParamLimits

0x89da,	// (0x0002856a) popup_battery_window_t2

0x0001,

0xfda9,	// (0x0002f939) popup_battery_window_t_ParamLimits

0xfda9,	// (0x0002f939) popup_battery_window_t

0xa2d6,	// (0x00029e66) midp_canvas_pane_ParamLimits

0xa33a,	// (0x00029eca) midp_keypad_pane_ParamLimits

0xa33a,	// (0x00029eca) midp_keypad_pane

0x4abb,	// (0x0002464b) main_midp_pane_ParamLimits

0x734d,	// (0x00026edd) signal_pane_g2_cp_ParamLimits

0xc963,	// (0x0002c4f3) aid_size_cell_midp_keypad_ParamLimits

0xc963,	// (0x0002c4f3) aid_size_cell_midp_keypad

0xc97d,	// (0x0002c50d) midp_keyp_game_grid_pane_ParamLimits

0xc97d,	// (0x0002c50d) midp_keyp_game_grid_pane

0xc99d,	// (0x0002c52d) midp_keyp_rocker_pane_ParamLimits

0xc99d,	// (0x0002c52d) midp_keyp_rocker_pane

0xc9d2,	// (0x0002c562) midp_keyp_sk_left_pane_ParamLimits

0xc9d2,	// (0x0002c562) midp_keyp_sk_left_pane

0xca2a,	// (0x0002c5ba) midp_keyp_sk_right_pane_ParamLimits

0xca2a,	// (0x0002c5ba) midp_keyp_sk_right_pane

0x1a0c,	// (0x0002159c) bg_button_pane_cp03

0xca82,	// (0x0002c612) midp_keyp_sk_left_pane_g1

0x1a0c,	// (0x0002159c) bg_button_pane_cp04

0xca82,	// (0x0002c612) midp_keyp_sk_right_pane_g1

0x764d,	// (0x000271dd) midp_keyp_rocker_pane_g1

0xca8b,	// (0x0002c61b) keyp_game_cell_pane_ParamLimits

0xca8b,	// (0x0002c61b) keyp_game_cell_pane

0x1a0c,	// (0x0002159c) bg_button_pane_cp02

0xca9e,	// (0x0002c62e) keyp_game_cell_pane_g1

0x9896,	// (0x00029426) popup_fep_vkb2_window_ParamLimits

0x9896,	// (0x00029426) popup_fep_vkb2_window

0xcab5,	// (0x0002c645) aid_size_cell_vkb2_ParamLimits

0xcab5,	// (0x0002c645) aid_size_cell_vkb2

0xcb09,	// (0x0002c699) popup_fep_vkb2_window_g1_ParamLimits

0xcb09,	// (0x0002c699) popup_fep_vkb2_window_g1

0xcb51,	// (0x0002c6e1) vkb2_area_bottom_pane_ParamLimits

0xcb51,	// (0x0002c6e1) vkb2_area_bottom_pane

0xcb9d,	// (0x0002c72d) vkb2_area_keypad_pane_ParamLimits

0xcb9d,	// (0x0002c72d) vkb2_area_keypad_pane

0xcbdf,	// (0x0002c76f) vkb2_area_top_pane_ParamLimits

0xcbdf,	// (0x0002c76f) vkb2_area_top_pane

0xcc59,	// (0x0002c7e9) vkb2_top_entry_pane_ParamLimits

0xcc59,	// (0x0002c7e9) vkb2_top_entry_pane

0xcc83,	// (0x0002c813) vkb2_top_grid_left_pane_ParamLimits

0xcc83,	// (0x0002c813) vkb2_top_grid_left_pane

0xcca1,	// (0x0002c831) vkb2_top_grid_right_pane_ParamLimits

0xcca1,	// (0x0002c831) vkb2_top_grid_right_pane

0xccbf,	// (0x0002c84f) vkb2_cell_keypad_pane_ParamLimits

0xccbf,	// (0x0002c84f) vkb2_cell_keypad_pane

0xcd90,	// (0x0002c920) vkb2_area_bottom_grid_pane_ParamLimits

0xcd90,	// (0x0002c920) vkb2_area_bottom_grid_pane

0xcdb6,	// (0x0002c946) vkb2_area_bottom_pane_g1_ParamLimits

0xcdb6,	// (0x0002c946) vkb2_area_bottom_pane_g1

0xcdda,	// (0x0002c96a) vkb2_area_bottom_pane_g2_ParamLimits

0xcdda,	// (0x0002c96a) vkb2_area_bottom_pane_g2

0xce08,	// (0x0002c998) vkb2_area_bottom_pane_g3_ParamLimits

0xce08,	// (0x0002c998) vkb2_area_bottom_pane_g3

0x0002,

0xfdae,	// (0x0002f93e) vkb2_area_bottom_pane_g_ParamLimits

0xfdae,	// (0x0002f93e) vkb2_area_bottom_pane_g

0xce69,	// (0x0002c9f9) vkb2_top_cell_left_pane_ParamLimits

0xce69,	// (0x0002c9f9) vkb2_top_cell_left_pane

0xce89,	// (0x0002ca19) vkb2_top_entry_pane_g1_ParamLimits

0xce89,	// (0x0002ca19) vkb2_top_entry_pane_g1

0xce97,	// (0x0002ca27) vkb2_top_entry_pane_t1_ParamLimits

0xce97,	// (0x0002ca27) vkb2_top_entry_pane_t1

0x89ff,	// (0x0002858f) vkb2_top_entry_pane_t2_ParamLimits

0x89ff,	// (0x0002858f) vkb2_top_entry_pane_t2

0x8a31,	// (0x000285c1) vkb2_top_entry_pane_t3_ParamLimits

0x8a31,	// (0x000285c1) vkb2_top_entry_pane_t3

0x0002,

0xfdb5,	// (0x0002f945) vkb2_top_entry_pane_t_ParamLimits

0xfdb5,	// (0x0002f945) vkb2_top_entry_pane_t

0xcef6,	// (0x0002ca86) vkb2_top_grid_right_pane_g1_ParamLimits

0xcef6,	// (0x0002ca86) vkb2_top_grid_right_pane_g1

0xcf0c,	// (0x0002ca9c) vkb2_top_grid_right_pane_g2_ParamLimits

0xcf0c,	// (0x0002ca9c) vkb2_top_grid_right_pane_g2

0xcf24,	// (0x0002cab4) vkb2_top_grid_right_pane_g3_ParamLimits

0xcf24,	// (0x0002cab4) vkb2_top_grid_right_pane_g3

0xcf3c,	// (0x0002cacc) vkb2_top_grid_right_pane_g4_ParamLimits

0xcf3c,	// (0x0002cacc) vkb2_top_grid_right_pane_g4

0x0003,

0xfdbc,	// (0x0002f94c) vkb2_top_grid_right_pane_g_ParamLimits

0xfdbc,	// (0x0002f94c) vkb2_top_grid_right_pane_g

0xcf52,	// (0x0002cae2) vkb2_top_cell_left_pane_g1

0xcf69,	// (0x0002caf9) vkb2_cell_keypad_pane_g1_ParamLimits

0xcf69,	// (0x0002caf9) vkb2_cell_keypad_pane_g1

0x8a55,	// (0x000285e5) vkb2_cell_keypad_pane_t1_ParamLimits

0x8a55,	// (0x000285e5) vkb2_cell_keypad_pane_t1

0xcf77,	// (0x0002cb07) vkb2_cell_bottom_grid_pane_ParamLimits

0xcf77,	// (0x0002cb07) vkb2_cell_bottom_grid_pane

0xcfb0,	// (0x0002cb40) vkb2_cell_bottom_grid_pane_g1

0xc7c7,	// (0x0002c357) aid_call2_pane_cp02

0xc7cf,	// (0x0002c35f) aid_call_pane_cp02

0xc7d7,	// (0x0002c367) clock_digital_number_pane_cp10

0xc7df,	// (0x0002c36f) clock_digital_number_pane_cp11

0xc7e7,	// (0x0002c377) clock_digital_number_pane_cp12

0xc7ef,	// (0x0002c37f) clock_digital_number_pane_cp13

0xc7f7,	// (0x0002c387) clock_digital_separator_pane_cp10

0x4e85,	// (0x00024a15) popup_clock_digital_analogue_window_cp2_g1

0x4e85,	// (0x00024a15) popup_clock_digital_analogue_window_cp2_g2

0xc7ff,	// (0x0002c38f) popup_clock_digital_analogue_window_cp2_g3

0x4e85,	// (0x00024a15) popup_clock_digital_analogue_window_cp2_g4

0xc7ff,	// (0x0002c38f) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd71,	// (0x0002f901) popup_clock_digital_analogue_window_cp2_g

0xc807,	// (0x0002c397) popup_clock_digital_analogue_window_cp2_t1

0xc815,	// (0x0002c3a5) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd7c,	// (0x0002f90c) popup_clock_digital_analogue_window_cp2_t

0x764d,	// (0x000271dd) clock_digital_number_pane_cp10_g1

0x764d,	// (0x000271dd) clock_digital_number_pane_cp10_g2

0x0001,

0xfb58,	// (0x0002f6e8) clock_digital_number_pane_cp10_g

0x764d,	// (0x000271dd) clock_digital_separator_pane_cp10_g1

0x764d,	// (0x000271dd) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb58,	// (0x0002f6e8) clock_digital_separator_pane_cp10_g

0x8831,	// (0x000283c1) uniindi_top_pane_g3

0x8842,	// (0x000283d2) uniindi_top_pane_g4

0xcd4a,	// (0x0002c8da) vkb2_row_keypad_pane_ParamLimits

0xcd4a,	// (0x0002c8da) vkb2_row_keypad_pane

0xcfd0,	// (0x0002cb60) vkb2_cell_t_keypad_pane_ParamLimits

0xcfd0,	// (0x0002cb60) vkb2_cell_t_keypad_pane

0xcfe0,	// (0x0002cb70) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xcfe0,	// (0x0002cb70) vkb2_cell_t_keypad_pane_cp08

0xcff3,	// (0x0002cb83) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xcff3,	// (0x0002cb83) vkb2_cell_t_keypad_pane_cp09

0xd007,	// (0x0002cb97) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xd007,	// (0x0002cb97) vkb2_cell_t_keypad_pane_cp01

0xd018,	// (0x0002cba8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xd018,	// (0x0002cba8) vkb2_cell_t_keypad_pane_cp02

0xd029,	// (0x0002cbb9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xd029,	// (0x0002cbb9) vkb2_cell_t_keypad_pane_cp03

0xd03a,	// (0x0002cbca) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xd03a,	// (0x0002cbca) vkb2_cell_t_keypad_pane_cp04

0xd04b,	// (0x0002cbdb) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xd04b,	// (0x0002cbdb) vkb2_cell_t_keypad_pane_cp05

0xd05c,	// (0x0002cbec) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xd05c,	// (0x0002cbec) vkb2_cell_t_keypad_pane_cp06

0xd06d,	// (0x0002cbfd) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xd06d,	// (0x0002cbfd) vkb2_cell_t_keypad_pane_cp07

0xd07e,	// (0x0002cc0e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xd07e,	// (0x0002cc0e) vkb2_cell_t_keypad_pane_cp10

0xbee2,	// (0x0002ba72) vkb2_cell_t_keypad_pane_g1

0x8a6c,	// (0x000285fc) vkb2_cell_t_keypad_pane_t1

0x979b,	// (0x0002932b) popup_grid_graphic2_window

0xd093,	// (0x0002cc23) aid_size_cell_graphic2_ParamLimits

0xd093,	// (0x0002cc23) aid_size_cell_graphic2

0xd0cb,	// (0x0002cc5b) bg_popup_window_pane_cp21_ParamLimits

0xd0cb,	// (0x0002cc5b) bg_popup_window_pane_cp21

0xd0d9,	// (0x0002cc69) graphic2_pages_pane_ParamLimits

0xd0d9,	// (0x0002cc69) graphic2_pages_pane

0xd11f,	// (0x0002ccaf) grid_graphic2_control_pane_ParamLimits

0xd11f,	// (0x0002ccaf) grid_graphic2_control_pane

0xd15d,	// (0x0002cced) grid_graphic2_pane_ParamLimits

0xd15d,	// (0x0002cced) grid_graphic2_pane

0xd1d1,	// (0x0002cd61) cell_graphic2_pane

0x979b,	// (0x0002932b) main_comp_mode_pane

0x84a8,	// (0x00028038) list_ai3_gene_pane_ParamLimits

0xc4b4,	// (0x0002c044) bg_popup_window_pane_cp19_ParamLimits

0x8613,	// (0x000281a3) bg_touch_area_indi_pane_ParamLimits

0x8613,	// (0x000281a3) bg_touch_area_indi_pane

0x8629,	// (0x000281b9) bg_touch_area_indi_pane_cp01_ParamLimits

0x8629,	// (0x000281b9) bg_touch_area_indi_pane_cp01

0x863f,	// (0x000281cf) bg_touch_area_indi_pane_cp02_ParamLimits

0x863f,	// (0x000281cf) bg_touch_area_indi_pane_cp02

0x8657,	// (0x000281e7) bg_touch_area_indi_pane_cp03_ParamLimits

0x8657,	// (0x000281e7) bg_touch_area_indi_pane_cp03

0x8671,	// (0x00028201) popup_slider_window_g1_ParamLimits

0x868d,	// (0x0002821d) popup_slider_window_g2_ParamLimits

0x86a9,	// (0x00028239) popup_slider_window_g3_ParamLimits

0xfd06,	// (0x0002f896) popup_slider_window_g_ParamLimits

0x86c5,	// (0x00028255) popup_slider_window_t1_ParamLimits

0x870b,	// (0x0002829b) small_volume_slider_vertical_pane_ParamLimits

0xd1d1,	// (0x0002cd61) cell_graphic2_pane_ParamLimits

0xd21f,	// (0x0002cdaf) bg_button_pane_cp10_ParamLimits

0xd21f,	// (0x0002cdaf) bg_button_pane_cp10

0xd232,	// (0x0002cdc2) bg_button_pane_cp11_ParamLimits

0xd232,	// (0x0002cdc2) bg_button_pane_cp11

0xd245,	// (0x0002cdd5) graphic2_pages_pane_g1_ParamLimits

0xd245,	// (0x0002cdd5) graphic2_pages_pane_g1

0xd260,	// (0x0002cdf0) graphic2_pages_pane_g2_ParamLimits

0xd260,	// (0x0002cdf0) graphic2_pages_pane_g2

0x0001,

0xfdca,	// (0x0002f95a) graphic2_pages_pane_g_ParamLimits

0xfdca,	// (0x0002f95a) graphic2_pages_pane_g

0xd278,	// (0x0002ce08) graphic2_pages_pane_t1_ParamLimits

0xd278,	// (0x0002ce08) graphic2_pages_pane_t1

0xd28e,	// (0x0002ce1e) cell_graphic2_control_pane_ParamLimits

0xd28e,	// (0x0002ce1e) cell_graphic2_control_pane

0xd2af,	// (0x0002ce3f) cell_graphic2_pane_g1_ParamLimits

0xd2af,	// (0x0002ce3f) cell_graphic2_pane_g1

0xd2bc,	// (0x0002ce4c) cell_graphic2_pane_g2_ParamLimits

0xd2bc,	// (0x0002ce4c) cell_graphic2_pane_g2

0xd2c9,	// (0x0002ce59) cell_graphic2_pane_g3_ParamLimits

0xd2c9,	// (0x0002ce59) cell_graphic2_pane_g3

0xd2d6,	// (0x0002ce66) cell_graphic2_pane_g4_ParamLimits

0xd2d6,	// (0x0002ce66) cell_graphic2_pane_g4

0xd2e3,	// (0x0002ce73) cell_graphic2_pane_g5_ParamLimits

0xd2e3,	// (0x0002ce73) cell_graphic2_pane_g5

0x0004,

0xfdcf,	// (0x0002f95f) cell_graphic2_pane_g_ParamLimits

0xfdcf,	// (0x0002f95f) cell_graphic2_pane_g

0xd2fe,	// (0x0002ce8e) cell_graphic2_pane_t1_ParamLimits

0xd2fe,	// (0x0002ce8e) cell_graphic2_pane_t1

0x5859,	// (0x000253e9) grid_highlight_pane_cp11_ParamLimits

0x5859,	// (0x000253e9) grid_highlight_pane_cp11

0x1dc5,	// (0x00021955) bg_button_pane_cp05

0xd327,	// (0x0002ceb7) cell_graphic2_control_pane_g1

0x764d,	// (0x000271dd) bg_touch_area_indi_pane_g1

0x8a7e,	// (0x0002860e) aid_cmod_rocker_key_size

0x8a88,	// (0x00028618) aid_cmode_itu_key_size

0x8a92,	// (0x00028622) main_cmode_video_pane

0x8a9c,	// (0x0002862c) main_comp_mode_itu_pane

0x8aa8,	// (0x00028638) main_comp_mode_rocker_pane

0x8ab4,	// (0x00028644) cell_cmode_rocker_pane_ParamLimits

0x8ab4,	// (0x00028644) cell_cmode_rocker_pane

0x8ac6,	// (0x00028656) cell_cmode_itu_pane_ParamLimits

0x8ac6,	// (0x00028656) cell_cmode_itu_pane

0x4962,	// (0x000244f2) bg_button_pane_cp06_ParamLimits

0x4962,	// (0x000244f2) bg_button_pane_cp06

0x77de,	// (0x0002736e) cell_cmode_rocker_pane_g1_ParamLimits

0x77de,	// (0x0002736e) cell_cmode_rocker_pane_g1

0x8730,	// (0x000282c0) cell_cmode_rocker_pane_g2_ParamLimits

0x8730,	// (0x000282c0) cell_cmode_rocker_pane_g2

0x0001,

0xfddf,	// (0x0002f96f) cell_cmode_rocker_pane_g_ParamLimits

0xfddf,	// (0x0002f96f) cell_cmode_rocker_pane_g

0x1a0c,	// (0x0002159c) bg_button_pane_cp07

0x8adb,	// (0x0002866b) cell_cmode_itu_pane_g1

0x8ae4,	// (0x00028674) cell_cmode_itu_pane_t1

0x8af2,	// (0x00028682) cell_cmode_itu_pane_t2

0x0001,

0xfde4,	// (0x0002f974) cell_cmode_itu_pane_t

0x88b4,	// (0x00028444) aid_touch_ctrl_left

0x88bc,	// (0x0002844c) aid_touch_ctrl_right

0x1a0c,	// (0x0002159c) compa_mode_pane

0xd34f,	// (0x0002cedf) aid_cmod_rocker_key_size_cp

0xd359,	// (0x0002cee9) aid_cmode_itu_key_size_cp

0x8b00,	// (0x00028690) compa_mode_pane_g1

0x8b08,	// (0x00028698) compa_mode_pane_g2

0x8b10,	// (0x000286a0) compa_mode_pane_g3

0x0002,

0xfde9,	// (0x0002f979) compa_mode_pane_g

0xd363,	// (0x0002cef3) main_comp_mode_itu_pane_cp

0xd36b,	// (0x0002cefb) main_comp_mode_rocker_pane_cp

0xd373,	// (0x0002cf03) cell_cmode_itu_pane_cp_ParamLimits

0xd373,	// (0x0002cf03) cell_cmode_itu_pane_cp

0xd388,	// (0x0002cf18) cell_cmode_rocker_pane_cp_ParamLimits

0xd388,	// (0x0002cf18) cell_cmode_rocker_pane_cp

0x4962,	// (0x000244f2) bg_button_pane_cp06_cp_ParamLimits

0x4962,	// (0x000244f2) bg_button_pane_cp06_cp

0x77de,	// (0x0002736e) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x77de,	// (0x0002736e) cell_cmode_rocker_pane_g1_cp

0x764d,	// (0x000271dd) cell_cmode_rocker_pane_g2_cp

0x1a0c,	// (0x0002159c) bg_button_pane_cp07_cp

0xd39a,	// (0x0002cf2a) cell_cmode_itu_pane_g1_cp

0xd3a3,	// (0x0002cf33) cell_cmode_itu_pane_t1_cp

0xd3a3,	// (0x0002cf33) cell_cmode_itu_pane_t2_cp

0xb5b1,	// (0x0002b141) settings_code_pane_cp2

0x1c92,	// (0x00021822) bg_popup_window_pane_cp3_ParamLimits

0x1f93,	// (0x00021b23) heading_pane_cp3_ParamLimits

0x1f9f,	// (0x00021b2f) listscroll_popup_graphic_pane_ParamLimits

0xbad6,	// (0x0002b666) fep_hwr_aid_pane_ParamLimits

0xc584,	// (0x0002c114) aid_touch_sctrl_top_ParamLimits

0xc59f,	// (0x0002c12f) sctrl_sk_top_pane_g1_ParamLimits

0xbee2,	// (0x0002ba72) sctrl_sk_top_pane_g2_ParamLimits

0xfd1f,	// (0x0002f8af) sctrl_sk_top_pane_g_ParamLimits

0xc5ac,	// (0x0002c13c) sctrl_sk_top_pane_t1_ParamLimits

0xc584,	// (0x0002c114) aid_touch_sctrl_bottom_ParamLimits

0xc5ac,	// (0x0002c13c) sctrl_sk_bottom_pane_t1_ParamLimits

0x87fd,	// (0x0002838d) aid_area_touch_clock

0xcc21,	// (0x0002c7b1) aid_vkb2_area_top_pane_cell_ParamLimits

0xcc21,	// (0x0002c7b1) aid_vkb2_area_top_pane_cell

0xcd6c,	// (0x0002c8fc) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcd6c,	// (0x0002c8fc) aid_vkb2_area_bottom_pane_cell

0x89f7,	// (0x00028587) popup_char_count_window

0x8b18,	// (0x000286a8) popup_char_count_window_g1

0x8b21,	// (0x000286b1) popup_char_count_window_g2

0x8b2a,	// (0x000286ba) popup_char_count_window_g3

0x0002,

0xfdf0,	// (0x0002f980) popup_char_count_window_g

0x8b33,	// (0x000286c3) popup_char_count_window_t1

0xcae7,	// (0x0002c677) popup_fep_char_preview_window_ParamLimits

0xcae7,	// (0x0002c677) popup_fep_char_preview_window

0xcc3f,	// (0x0002c7cf) vkb2_top_candi_pane_ParamLimits

0xcc3f,	// (0x0002c7cf) vkb2_top_candi_pane

0xd3b1,	// (0x0002cf41) cell_vkb2_top_candi_pane_ParamLimits

0xd3b1,	// (0x0002cf41) cell_vkb2_top_candi_pane

0xd3fe,	// (0x0002cf8e) bg_popup_fep_char_preview_window_ParamLimits

0xd3fe,	// (0x0002cf8e) bg_popup_fep_char_preview_window

0xd40c,	// (0x0002cf9c) popup_fep_char_preview_window_t1_ParamLimits

0xd40c,	// (0x0002cf9c) popup_fep_char_preview_window_t1

0x8b51,	// (0x000286e1) bg_popup_fep_char_preview_window_g1

0x8b49,	// (0x000286d9) bg_popup_fep_char_preview_window_g2

0x8b41,	// (0x000286d1) bg_popup_fep_char_preview_window_g3

0x8b71,	// (0x00028701) bg_popup_fep_char_preview_window_g4

0x8b69,	// (0x000286f9) bg_popup_fep_char_preview_window_g5

0xd446,	// (0x0002cfd6) bg_popup_fep_char_preview_window_g6

0x8b61,	// (0x000286f1) bg_popup_fep_char_preview_window_g7

0x8b59,	// (0x000286e9) bg_popup_fep_char_preview_window_g8

0x8b79,	// (0x00028709) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf7,	// (0x0002f987) bg_popup_fep_char_preview_window_g

0xbee2,	// (0x0002ba72) cell_vkb2_top_candi_pane_g1_ParamLimits

0xbee2,	// (0x0002ba72) cell_vkb2_top_candi_pane_g1

0xbef0,	// (0x0002ba80) cell_vkb2_top_candi_pane_g2_ParamLimits

0xbef0,	// (0x0002ba80) cell_vkb2_top_candi_pane_g2

0x8b81,	// (0x00028711) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8b81,	// (0x00028711) cell_vkb2_top_candi_pane_g3

0xd44e,	// (0x0002cfde) cell_vkb2_top_candi_pane_g4_ParamLimits

0xd44e,	// (0x0002cfde) cell_vkb2_top_candi_pane_g4

0x7a3e,	// (0x000275ce) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7a3e,	// (0x000275ce) cell_vkb2_top_candi_pane_g5

0xd46f,	// (0x0002cfff) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd46f,	// (0x0002cfff) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe0a,	// (0x0002f99a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe0a,	// (0x0002f99a) cell_vkb2_top_candi_pane_g

0xd47d,	// (0x0002d00d) cell_vkb2_top_candi_pane_t1

0xb3ec,	// (0x0002af7c) aid_size_touch_slider_mark_ParamLimits

0xb3ec,	// (0x0002af7c) aid_size_touch_slider_mark

0xd10f,	// (0x0002cc9f) grid_graphic2_catg_pane_ParamLimits

0xd10f,	// (0x0002cc9f) grid_graphic2_catg_pane

0xd1ad,	// (0x0002cd3d) popup_grid_graphic2_window_t1_ParamLimits

0xd1ad,	// (0x0002cd3d) popup_grid_graphic2_window_t1

0xd1bf,	// (0x0002cd4f) popup_grid_graphic2_window_t2_ParamLimits

0xd1bf,	// (0x0002cd4f) popup_grid_graphic2_window_t2

0x0001,

0xfdc5,	// (0x0002f955) popup_grid_graphic2_window_t_ParamLimits

0xfdc5,	// (0x0002f955) popup_grid_graphic2_window_t

0x1dc5,	// (0x00021955) bg_button_pane_cp05_ParamLimits

0xd327,	// (0x0002ceb7) cell_graphic2_control_pane_g1_ParamLimits

0x0275,	// (0x0001fe05) cell_graphic2_catg_pane_ParamLimits

0x0275,	// (0x0001fe05) cell_graphic2_catg_pane

0x1a0c,	// (0x0002159c) bg_button_pane_cp12

0x0287,	// (0x0001fe17) cell_graphic2_catg_pane_g1

0x87c9,	// (0x00028359) cell_tb_ext_pane_t1_ParamLimits

0xcec9,	// (0x0002ca59) vkb2_top_cell_right_narrow_pane_ParamLimits

0xcec9,	// (0x0002ca59) vkb2_top_cell_right_narrow_pane

0xcee1,	// (0x0002ca71) vkb2_top_cell_right_wide_pane_ParamLimits

0xcee1,	// (0x0002ca71) vkb2_top_cell_right_wide_pane

0xbac8,	// (0x0002b658) bg_vkb2_func_pane_ParamLimits

0xbac8,	// (0x0002b658) bg_vkb2_func_pane

0xcf52,	// (0x0002cae2) vkb2_top_cell_left_pane_g1_ParamLimits

0xbac8,	// (0x0002b658) bg_vkb2_fuc_pane_cp03_ParamLimits

0xbac8,	// (0x0002b658) bg_vkb2_fuc_pane_cp03

0xcfb0,	// (0x0002cb40) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x57f5,	// (0x00025385) bg_vkb2_func_pane_g1

0x57ed,	// (0x0002537d) bg_vkb2_func_pane_g2

0x57fd,	// (0x0002538d) bg_vkb2_func_pane_g3

0x5805,	// (0x00025395) bg_vkb2_func_pane_g4

0x580d,	// (0x0002539d) bg_vkb2_func_pane_g5

0x5815,	// (0x000253a5) bg_vkb2_func_pane_g6

0x5825,	// (0x000253b5) bg_vkb2_func_pane_g7

0x581d,	// (0x000253ad) bg_vkb2_func_pane_g8

0x57e5,	// (0x00025375) bg_vkb2_func_pane_g9

0x0008,

0xfe17,	// (0x0002f9a7) bg_vkb2_func_pane_g

0xbac8,	// (0x0002b658) bg_vkb2_fuc_pane_cp01_ParamLimits

0xbac8,	// (0x0002b658) bg_vkb2_fuc_pane_cp01

0xcf52,	// (0x0002cae2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xcf52,	// (0x0002cae2) vkb2_top_cell_right_wide_pane_g1

0xbac8,	// (0x0002b658) bg_vkb2_fuc_pane_cp02_ParamLimits

0xbac8,	// (0x0002b658) bg_vkb2_fuc_pane_cp02

0xcfb0,	// (0x0002cb40) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xcfb0,	// (0x0002cb40) vkb2_top_cell_right_narrow_pane_g1

0xc432,	// (0x0002bfc2) aid_touch_area_decrease_ParamLimits

0xc432,	// (0x0002bfc2) aid_touch_area_decrease

0xc456,	// (0x0002bfe6) aid_touch_area_increase_ParamLimits

0xc456,	// (0x0002bfe6) aid_touch_area_increase

0xc462,	// (0x0002bff2) aid_touch_area_mute_ParamLimits

0xc462,	// (0x0002bff2) aid_touch_area_mute

0xc486,	// (0x0002c016) aid_touch_area_slider_ParamLimits

0xc486,	// (0x0002c016) aid_touch_area_slider

0xc4c0,	// (0x0002c050) popup_slider_window_g4_ParamLimits

0xc4c0,	// (0x0002c050) popup_slider_window_g4

0xc4cc,	// (0x0002c05c) popup_slider_window_g5_ParamLimits

0xc4cc,	// (0x0002c05c) popup_slider_window_g5

0xc4ee,	// (0x0002c07e) popup_slider_window_g6_ParamLimits

0xc4ee,	// (0x0002c07e) popup_slider_window_g6

0x86f3,	// (0x00028283) popup_slider_window_t2_ParamLimits

0x86f3,	// (0x00028283) popup_slider_window_t2

0x0001,

0xfd13,	// (0x0002f8a3) popup_slider_window_t_ParamLimits

0xfd13,	// (0x0002f8a3) popup_slider_window_t

0xc500,	// (0x0002c090) slider_pane_ParamLimits

0xc500,	// (0x0002c090) slider_pane

0xe666,	// (0x0002e1f6) slider_pane_g1_ParamLimits

0xe666,	// (0x0002e1f6) slider_pane_g1

0xe67a,	// (0x0002e20a) slider_pane_g2_ParamLimits

0xe67a,	// (0x0002e20a) slider_pane_g2

0xe690,	// (0x0002e220) slider_pane_g3_ParamLimits

0xe690,	// (0x0002e220) slider_pane_g3

0x0003,

0xfe2a,	// (0x0002f9ba) slider_pane_g_ParamLimits

0xfe2a,	// (0x0002f9ba) slider_pane_g

0xaa8f,	// (0x0002a61f) popup_tb_float_extension_window_ParamLimits

0xaa8f,	// (0x0002a61f) popup_tb_float_extension_window

0xe6bc,	// (0x0002e24c) aid_size_cell_tb_float_ext

0x1a0c,	// (0x0002159c) bg_popup_sub_window_cp28

0xe6c8,	// (0x0002e258) grid_tb_float_ext_pane

0xe6d2,	// (0x0002e262) cell_tb_float_ext_pane_ParamLimits

0xe6d2,	// (0x0002e262) cell_tb_float_ext_pane

0xe6ec,	// (0x0002e27c) cell_tb_float_ext_pane_g1

0xe6f5,	// (0x0002e285) grid_highlight_pane_cp12

0xbc17,	// (0x0002b7a7) cell_last_hwr_side_pane_ParamLimits

0xbc17,	// (0x0002b7a7) cell_last_hwr_side_pane

0x764d,	// (0x000271dd) cell_last_hwr_side_pane_g1

0xe6fe,	// (0x0002e28e) cell_last_hwr_side_pane_g2

0x0001,

0xfe33,	// (0x0002f9c3) cell_last_hwr_side_pane_g

0xce38,	// (0x0002c9c8) vkb2_area_bottom_space_btn_pane_ParamLimits

0xce38,	// (0x0002c9c8) vkb2_area_bottom_space_btn_pane

0xbee2,	// (0x0002ba72) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x8a6c,	// (0x000285fc) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xd47d,	// (0x0002d00d) cell_vkb2_top_candi_pane_t1_ParamLimits

0xd49c,	// (0x0002d02c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xd49c,	// (0x0002d02c) vkb2_area_bottom_space_btn_pane_g1

0xd4d6,	// (0x0002d066) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xd4d6,	// (0x0002d066) vkb2_area_bottom_space_btn_pane_g2

0xd50c,	// (0x0002d09c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xd50c,	// (0x0002d09c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe38,	// (0x0002f9c8) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe38,	// (0x0002f9c8) vkb2_area_bottom_space_btn_pane_g

0xbb8b,	// (0x0002b71b) cel_fep_hwr_func_pane_ParamLimits

0xbb8b,	// (0x0002b71b) cel_fep_hwr_func_pane

0xbbc7,	// (0x0002b757) cell_hwr_side_button_pane_ParamLimits

0xbbc7,	// (0x0002b757) cell_hwr_side_button_pane

0x87fd,	// (0x0002838d) aid_area_touch_clock_ParamLimits

0x1dc5,	// (0x00021955) bg_uniindi_top_pane_ParamLimits

0x880f,	// (0x0002839f) uniindi_top_pane_g1_ParamLimits

0x8825,	// (0x000283b5) uniindi_top_pane_g2_ParamLimits

0x8831,	// (0x000283c1) uniindi_top_pane_g3_ParamLimits

0x8842,	// (0x000283d2) uniindi_top_pane_g4_ParamLimits

0xfd4b,	// (0x0002f8db) uniindi_top_pane_g_ParamLimits

0x884f,	// (0x000283df) uniindi_top_pane_t1_ParamLimits

0x1dc5,	// (0x00021955) bg_vkb2_func_pane_cp01_ParamLimits

0x1dc5,	// (0x00021955) bg_vkb2_func_pane_cp01

0xe707,	// (0x0002e297) cel_fep_hwr_func_pane_g1_ParamLimits

0xe707,	// (0x0002e297) cel_fep_hwr_func_pane_g1

0x1dc5,	// (0x00021955) bg_vkb2_func_pane_cp02_ParamLimits

0x1dc5,	// (0x00021955) bg_vkb2_func_pane_cp02

0xe707,	// (0x0002e297) cell_hwr_side_button_pane_g1_ParamLimits

0xe707,	// (0x0002e297) cell_hwr_side_button_pane_g1

0x56fb,	// (0x0002528b) status_pane_g4_ParamLimits

0x56fb,	// (0x0002528b) status_pane_g4

0x5715,	// (0x000252a5) status_pane_t1

0x74dc,	// (0x0002706c) form2_midp_gauge_slider_cont_pane

0x74e4,	// (0x00027074) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb953,	// (0x0002b4e3) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb965,	// (0x0002b4f5) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb0b,	// (0x0002f69b) form2_midp_gauge_slider_pane_t_ParamLimits

0x74f6,	// (0x00027086) form2_midp_slider_pane_ParamLimits

0xcaa7,	// (0x0002c637) aid_size_cell_func_vkb2_ParamLimits

0xcaa7,	// (0x0002c637) aid_size_cell_func_vkb2

0xe6a8,	// (0x0002e238) slider_pane_g4_ParamLimits

0xe6a8,	// (0x0002e238) slider_pane_g4

0xd556,	// (0x0002d0e6) form2_midp_gauge_slider_pane_t2_cp01

0xd564,	// (0x0002d0f4) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd564,	// (0x0002d0f4) form2_midp_gauge_slider_pane_t3_cp01

0xd581,	// (0x0002d111) form2_midp_slider_pane_cp01

0x1a0c,	// (0x0002159c) navi_smil_pane

0xe737,	// (0x0002e2c7) navi_smil_pane_g1

0xe73f,	// (0x0002e2cf) navi_smil_pane_t1

0xe715,	// (0x0002e2a5) form2_midp_slider_pane_g1

0xe71e,	// (0x0002e2ae) form2_midp_slider_pane_g2

0xe726,	// (0x0002e2b6) form2_midp_slider_pane_g3

0xe715,	// (0x0002e2a5) form2_midp_slider_pane_g4

0x037e,	// (0x0001ff0e) form2_midp_slider_pane_g5

0x0004,

0xfe41,	// (0x0002f9d1) form2_midp_slider_pane_g

0xd546,	// (0x0002d0d6) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xd546,	// (0x0002d0d6) vkb2_area_bottom_space_btn_pane_g4

0xac49,	// (0x0002a7d9) lc0_navi_pane_ParamLimits

0xac49,	// (0x0002a7d9) lc0_navi_pane

0xacbf,	// (0x0002a84f) lc0_stat_indi_pane_ParamLimits

0xacbf,	// (0x0002a84f) lc0_stat_indi_pane

0xacd6,	// (0x0002a866) ls0_title_pane_ParamLimits

0xacd6,	// (0x0002a866) ls0_title_pane

0x4962,	// (0x000244f2) bg_popup_sub_pane_cp14_ParamLimits

0x87e4,	// (0x00028374) list_uniindi_pane_ParamLimits

0x87f0,	// (0x00028380) uniindi_top_pane_ParamLimits

0x888c,	// (0x0002841c) list_single_uniindi_pane_g1_ParamLimits

0x889f,	// (0x0002842f) list_single_uniindi_pane_t1_ParamLimits

0xd58a,	// (0x0002d11a) lc0_stat_clock_pane_ParamLimits

0xd58a,	// (0x0002d11a) lc0_stat_clock_pane

0x03a1,	// (0x0001ff31) lc0_stat_indi_pane_g1_ParamLimits

0x03a1,	// (0x0001ff31) lc0_stat_indi_pane_g1

0x0394,	// (0x0001ff24) lc0_stat_indi_pane_g2_ParamLimits

0x0394,	// (0x0001ff24) lc0_stat_indi_pane_g2

0x0001,

0xfe4c,	// (0x0002f9dc) lc0_stat_indi_pane_g_ParamLimits

0xfe4c,	// (0x0002f9dc) lc0_stat_indi_pane_g

0xd597,	// (0x0002d127) lc0_uni_indicator_pane_ParamLimits

0xd597,	// (0x0002d127) lc0_uni_indicator_pane

0x03bb,	// (0x0001ff4b) ls0_title_pane_g1_ParamLimits

0x03bb,	// (0x0001ff4b) ls0_title_pane_g1

0x03cf,	// (0x0001ff5f) ls0_title_pane_t1_ParamLimits

0x03cf,	// (0x0001ff5f) ls0_title_pane_t1

0xd5a4,	// (0x0002d134) lc0_uni_indicator_pane_g1_ParamLimits

0xd5a4,	// (0x0002d134) lc0_uni_indicator_pane_g1

0xe74d,	// (0x0002e2dd) lc0_stat_clock_pane_t1

0x979b,	// (0x0002932b) main_ai5_pane

0xe75b,	// (0x0002e2eb) ai5_sk_pane_ParamLimits

0xe75b,	// (0x0002e2eb) ai5_sk_pane

0x041a,	// (0x0001ffaa) cell_ai5_widget_pane_ParamLimits

0x041a,	// (0x0001ffaa) cell_ai5_widget_pane

0xe768,	// (0x0002e2f8) aid_size_cell_widget_grid

0xe776,	// (0x0002e306) bg_ai5_widget_pane_ParamLimits

0xe776,	// (0x0002e306) bg_ai5_widget_pane

0xe7ea,	// (0x0002e37a) cell_ai5_widget_pane_g2

0xe7fa,	// (0x0002e38a) cell_ai5_widget_pane_g3

0xe811,	// (0x0002e3a1) cell_ai5_widget_pane_g4

0xe81d,	// (0x0002e3ad) cell_ai5_widget_pane_g5

0xe829,	// (0x0002e3b9) cell_ai5_widget_pane_g6

0xe835,	// (0x0002e3c5) cell_ai5_widget_pane_g7

0xe87d,	// (0x0002e40d) cell_ai5_widget_pane_t1_ParamLimits

0xe87d,	// (0x0002e40d) cell_ai5_widget_pane_t1

0xe89a,	// (0x0002e42a) cell_ai5_widget_pane_t2_ParamLimits

0xe89a,	// (0x0002e42a) cell_ai5_widget_pane_t2

0xe8b2,	// (0x0002e442) cell_ai5_widget_pane_t3_ParamLimits

0xe8b2,	// (0x0002e442) cell_ai5_widget_pane_t3

0xe8ca,	// (0x0002e45a) cell_ai5_widget_pane_t4_ParamLimits

0xe8ca,	// (0x0002e45a) cell_ai5_widget_pane_t4

0xe8e7,	// (0x0002e477) cell_ai5_widget_pane_t5_ParamLimits

0xe8e7,	// (0x0002e477) cell_ai5_widget_pane_t5

0xe906,	// (0x0002e496) cell_ai5_widget_pane_t6_ParamLimits

0xe906,	// (0x0002e496) cell_ai5_widget_pane_t6

0xe918,	// (0x0002e4a8) cell_ai5_widget_pane_t7_ParamLimits

0xe918,	// (0x0002e4a8) cell_ai5_widget_pane_t7

0xe931,	// (0x0002e4c1) cell_ai5_widget_pane_t8_ParamLimits

0xe931,	// (0x0002e4c1) cell_ai5_widget_pane_t8

0x0009,

0xfe66,	// (0x0002f9f6) cell_ai5_widget_pane_t_ParamLimits

0xfe66,	// (0x0002f9f6) cell_ai5_widget_pane_t

0xe985,	// (0x0002e515) grid_ai5_widget_pane

0x4962,	// (0x000244f2) highlight_cell_ai5_widget_pane_ParamLimits

0x4962,	// (0x000244f2) highlight_cell_ai5_widget_pane

0x04e4,	// (0x00020074) ai5_sk_left_pane

0x04ee,	// (0x0002007e) ai5_sk_middle_pane

0x04f8,	// (0x00020088) ai5_sk_right_pane

0xe999,	// (0x0002e529) bg_ai5_widget_pane_g1_ParamLimits

0xe999,	// (0x0002e529) bg_ai5_widget_pane_g1

0xe9a5,	// (0x0002e535) bg_ai5_widget_pane_g2_ParamLimits

0xe9a5,	// (0x0002e535) bg_ai5_widget_pane_g2

0xe9b1,	// (0x0002e541) bg_ai5_widget_pane_g3_ParamLimits

0xe9b1,	// (0x0002e541) bg_ai5_widget_pane_g3

0xe9bd,	// (0x0002e54d) bg_ai5_widget_pane_g4_ParamLimits

0xe9bd,	// (0x0002e54d) bg_ai5_widget_pane_g4

0xe9c9,	// (0x0002e559) bg_ai5_widget_pane_g5_ParamLimits

0xe9c9,	// (0x0002e559) bg_ai5_widget_pane_g5

0xe9d5,	// (0x0002e565) bg_ai5_widget_pane_g6_ParamLimits

0xe9d5,	// (0x0002e565) bg_ai5_widget_pane_g6

0xe9e1,	// (0x0002e571) bg_ai5_widget_pane_g7_ParamLimits

0xe9e1,	// (0x0002e571) bg_ai5_widget_pane_g7

0xe9ed,	// (0x0002e57d) bg_ai5_widget_pane_g8_ParamLimits

0xe9ed,	// (0x0002e57d) bg_ai5_widget_pane_g8

0xe9f9,	// (0x0002e589) bg_ai5_widget_pane_g9_ParamLimits

0xe9f9,	// (0x0002e589) bg_ai5_widget_pane_g9

0x0008,

0xfe7b,	// (0x0002fa0b) bg_ai5_widget_pane_g_ParamLimits

0xfe7b,	// (0x0002fa0b) bg_ai5_widget_pane_g

0xea2b,	// (0x0002e5bb) cell_shortcut_ai5_widget_pane_ParamLimits

0xea2b,	// (0x0002e5bb) cell_shortcut_ai5_widget_pane

0x5397,	// (0x00024f27) bg_cell_shortcut_ai5_widget_pane

0xea3c,	// (0x0002e5cc) cell_grid_ai5_widget_pane_g1

0xea45,	// (0x0002e5d5) highlight_cell_shortcut_ai5_widget_pane

0x57f5,	// (0x00025385) ai5_sk_left_pane_g1

0xea4d,	// (0x0002e5dd) ai5_sk_left_pane_g2

0xea55,	// (0x0002e5e5) ai5_sk_left_pane_g3

0xea5d,	// (0x0002e5ed) ai5_sk_left_pane_g4

0x0003,

0xfe8e,	// (0x0002fa1e) ai5_sk_left_pane_g

0xea65,	// (0x0002e5f5) ai5_sk_left_pane_t1

0x57ed,	// (0x0002537d) ai5_sk_right_pane_g1

0xea73,	// (0x0002e603) ai5_sk_right_pane_g2

0xea7b,	// (0x0002e60b) ai5_sk_right_pane_g3

0xea83,	// (0x0002e613) ai5_sk_right_pane_g4

0x0003,

0xfe97,	// (0x0002fa27) ai5_sk_right_pane_g

0xea8b,	// (0x0002e61b) ai5_sk_right_pane_t1

0x57ed,	// (0x0002537d) ai5_sk_middle_pane_g1

0x57f5,	// (0x00025385) ai5_sk_middle_pane_g2

0x580d,	// (0x0002539d) ai5_sk_middle_pane_g3

0xea7b,	// (0x0002e60b) ai5_sk_middle_pane_g4

0xea55,	// (0x0002e5e5) ai5_sk_middle_pane_g5

0xea99,	// (0x0002e629) ai5_sk_middle_pane_g6

0x0502,	// (0x00020092) ai5_sk_middle_pane_g7

0x0006,

0xfea0,	// (0x0002fa30) ai5_sk_middle_pane_g

0xab92,	// (0x0002a722) aid_touch_area_size_lc0_ParamLimits

0xab92,	// (0x0002a722) aid_touch_area_size_lc0

0xbf11,	// (0x0002baa1) cell_hwr_candidate_pane_t1_ParamLimits

0x561d,	// (0x000251ad) aid_touch_navi_pane

0xadb3,	// (0x0002a943) status_dt_navi_pane_ParamLimits

0xadb3,	// (0x0002a943) status_dt_navi_pane

0xadc0,	// (0x0002a950) status_dt_sta_pane_ParamLimits

0xadc0,	// (0x0002a950) status_dt_sta_pane

0x050a,	// (0x0002009a) dt_sta_controll_pane

0x0517,	// (0x000200a7) dt_sta_indi_pane

0x0528,	// (0x000200b8) dt_sta_title_pane

0x1dc5,	// (0x00021955) bg_dt_sta_indi_pane_ParamLimits

0x1dc5,	// (0x00021955) bg_dt_sta_indi_pane

0xeaa1,	// (0x0002e631) dt_sta_battery_pane

0x053b,	// (0x000200cb) dt_sta_indi_pane_g1

0x0544,	// (0x000200d4) dt_sta_indi_pane_g2

0x054d,	// (0x000200dd) dt_sta_indi_pane_g3

0x0002,

0xfeaf,	// (0x0002fa3f) dt_sta_indi_pane_g

0x0556,	// (0x000200e6) dt_sta_signal_pane

0x4962,	// (0x000244f2) bg_dt_sta_title_pane_ParamLimits

0x4962,	// (0x000244f2) bg_dt_sta_title_pane

0xeaa9,	// (0x0002e639) dt_sta_title_pane_g1

0x055f,	// (0x000200ef) dt_sta_title_pane_t1_ParamLimits

0x055f,	// (0x000200ef) dt_sta_title_pane_t1

0x1a0c,	// (0x0002159c) bg_dt_sta_control_pane

0x0574,	// (0x00020104) dt_sta_controll_pane_g1

0xeab1,	// (0x0002e641) bg_dt_sta_title_pane_g1

0xeaba,	// (0x0002e64a) bg_dt_sta_title_pane_g2

0xeac3,	// (0x0002e653) bg_dt_sta_title_pane_g3

0x0002,

0xfeb6,	// (0x0002fa46) bg_dt_sta_title_pane_g

0x764d,	// (0x000271dd) bg_dt_sta_indi_pane_g1

0xeacc,	// (0x0002e65c) dt_sta_signal_pane_g1

0xead4,	// (0x0002e664) dt_sta_signal_pane_g2

0x0001,

0xfebd,	// (0x0002fa4d) dt_sta_signal_pane_g

0xeadc,	// (0x0002e66c) dt_sta_battery_pane_g1

0xeae5,	// (0x0002e675) dt_sta_battery_pane_t1

0x764d,	// (0x000271dd) bg_dt_sta_control_pane_g1

0x4f08,	// (0x00024a98) fep_china_uni_eep_pane

0x4f10,	// (0x00024aa0) fep_china_uni_entry_pane_ParamLimits

0x4f20,	// (0x00024ab0) popup_fep_china_uni_window_g1_ParamLimits

0x4f30,	// (0x00024ac0) popup_fep_china_uni_window_g2_ParamLimits

0x4f30,	// (0x00024ac0) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x0002f2b3) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x0002f2b3) popup_fep_china_uni_window_g

0xeaf4,	// (0x0002e684) fep_china_uni_eep_pane_g1

0xeafc,	// (0x0002e68c) fep_china_uni_eep_pane_t1

0xe72e,	// (0x0002e2be) aid_touch_area_size_smil_player

0x56ce,	// (0x0002525e) lc0_clock_pane

0x5709,	// (0x00025299) status_pane_g5_ParamLimits

0x5709,	// (0x00025299) status_pane_g5

0xa756,	// (0x0002a2e6) popup_keymap_window

0x56e7,	// (0x00025277) status_icon_pane

0xe7fa,	// (0x0002e38a) cell_ai5_widget_pane_g3_ParamLimits

0xe811,	// (0x0002e3a1) cell_ai5_widget_pane_g4_ParamLimits

0xe81d,	// (0x0002e3ad) cell_ai5_widget_pane_g5_ParamLimits

0xe841,	// (0x0002e3d1) cell_ai5_widget_pane_g8_ParamLimits

0xe841,	// (0x0002e3d1) cell_ai5_widget_pane_g8

0xe855,	// (0x0002e3e5) cell_ai5_widget_pane_g9_ParamLimits

0xe855,	// (0x0002e3e5) cell_ai5_widget_pane_g9

0xe869,	// (0x0002e3f9) cell_ai5_widget_pane_g10_ParamLimits

0xe869,	// (0x0002e3f9) cell_ai5_widget_pane_g10

0xeb0b,	// (0x0002e69b) status_icon_pane_g1

0x1a0c,	// (0x0002159c) bg_popup_sub_pane_cp13

0xeb13,	// (0x0002e6a3) popup_keymap_window_t1

0xa4a1,	// (0x0002a031) control_pane_g6_ParamLimits

0xa4a1,	// (0x0002a031) control_pane_g6

0xa4ae,	// (0x0002a03e) control_pane_g7_ParamLimits

0xa4ae,	// (0x0002a03e) control_pane_g7

0xa4bb,	// (0x0002a04b) control_pane_g8_ParamLimits

0xa4bb,	// (0x0002a04b) control_pane_g8

0x050a,	// (0x0002009a) dt_sta_controll_pane_ParamLimits

0x0517,	// (0x000200a7) dt_sta_indi_pane_ParamLimits

0x0528,	// (0x000200b8) dt_sta_title_pane_ParamLimits

0x221b,	// (0x00021dab) aid_size_touch_scroll_bar_cale

0x9874,	// (0x00029404) popup_discreet_window_ParamLimits

0x9874,	// (0x00029404) popup_discreet_window

0x98ee,	// (0x0002947e) popup_sk_window

0x5d3d,	// (0x000258cd) bg_popup_sub_pane_cp28_ParamLimits

0x5d3d,	// (0x000258cd) bg_popup_sub_pane_cp28

0xeb21,	// (0x0002e6b1) popup_discreet_window_g1_ParamLimits

0xeb21,	// (0x0002e6b1) popup_discreet_window_g1

0xeb41,	// (0x0002e6d1) popup_discreet_window_t1_ParamLimits

0xeb41,	// (0x0002e6d1) popup_discreet_window_t1

0xeb5f,	// (0x0002e6ef) popup_discreet_window_t2_ParamLimits

0xeb5f,	// (0x0002e6ef) popup_discreet_window_t2

0x0002,

0xfec2,	// (0x0002fa52) popup_discreet_window_t_ParamLimits

0xfec2,	// (0x0002fa52) popup_discreet_window_t

0xd5b9,	// (0x0002d149) popup_sk_window_g1

0xd5c3,	// (0x0002d153) popup_sk_window_g2

0x0001,

0xfec9,	// (0x0002fa59) popup_sk_window_g

0xd5cd,	// (0x0002d15d) popup_sk_window_t1

0xd5db,	// (0x0002d16b) popup_sk_window_t1_copy1

0xe7ea,	// (0x0002e37a) cell_ai5_widget_pane_g2_ParamLimits

0xe943,	// (0x0002e4d3) cell_ai5_widget_pane_t9_ParamLimits

0xe943,	// (0x0002e4d3) cell_ai5_widget_pane_t9

0x1a0c,	// (0x0002159c) main_fep_fshwr2_pane

0xd5e9,	// (0x0002d179) aid_fshwr2_btn_pane

0xd5f5,	// (0x0002d185) aid_fshwr2_syb_pane

0xd606,	// (0x0002d196) aid_fshwr2_txt_pane

0xd612,	// (0x0002d1a2) fshwr2_func_candi_pane

0xd62a,	// (0x0002d1ba) fshwr2_hwr_syb_pane

0xd641,	// (0x0002d1d1) fshwr2_icf_pane

0x1a0c,	// (0x0002159c) fshwr2_icf_bg_pane

0x062e,	// (0x000201be) fshwr2_icf_pane_t1_ParamLimits

0x062e,	// (0x000201be) fshwr2_icf_pane_t1

0x4e85,	// (0x00024a15) fshwr2_func_candi_pane_g1

0x0646,	// (0x000201d6) fshwr2_func_candi_row_pane_ParamLimits

0x0646,	// (0x000201d6) fshwr2_func_candi_row_pane

0x0656,	// (0x000201e6) cell_fshwr2_syb_pane_ParamLimits

0x0656,	// (0x000201e6) cell_fshwr2_syb_pane

0x77de,	// (0x0002736e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x77de,	// (0x0002736e) fshwr2_hwr_syb_pane_g1

0x1a0c,	// (0x0002159c) bg_popup_call_pane_cp01

0x0670,	// (0x00020200) fshwr2_func_candi_cell_pane_ParamLimits

0x0670,	// (0x00020200) fshwr2_func_candi_cell_pane

0x637f,	// (0x00025f0f) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x637f,	// (0x00025f0f) fshwr2_func_candi_cell_bg_pane

0x069b,	// (0x0002022b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x069b,	// (0x0002022b) fshwr2_func_candi_cell_pane_g1

0xebb1,	// (0x0002e741) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xebb1,	// (0x0002e741) fshwr2_func_candi_cell_pane_t1

0x1a0c,	// (0x0002159c) bg_button_pane_cp08

0x5397,	// (0x00024f27) cell_fshwr2_syb_bg_pane

0x06bb,	// (0x0002024b) cell_fshwr2_syb_bg_pane_g1

0x06c3,	// (0x00020253) cell_fshwr2_syb_bg_pane_t1

0x4962,	// (0x000244f2) main_tmo_pane

0xb325,	// (0x0002aeb5) uni_indicator_pane_g1_ParamLimits

0xb33c,	// (0x0002aecc) uni_indicator_pane_g2_ParamLimits

0xb34f,	// (0x0002aedf) uni_indicator_pane_g3_ParamLimits

0x6771,	// (0x00026301) uni_indicator_pane_g4_ParamLimits

0x6771,	// (0x00026301) uni_indicator_pane_g4

0x6785,	// (0x00026315) uni_indicator_pane_g5_ParamLimits

0x6785,	// (0x00026315) uni_indicator_pane_g5

0x6785,	// (0x00026315) uni_indicator_pane_g6_ParamLimits

0x6785,	// (0x00026315) uni_indicator_pane_g6

0xf927,	// (0x0002f4b7) uni_indicator_pane_g_ParamLimits

0xc414,	// (0x0002bfa4) popup_tmo_note_window_ParamLimits

0xc414,	// (0x0002bfa4) popup_tmo_note_window

0xc5fd,	// (0x0002c18d) fshwr2_bg_pane

0x06ac,	// (0x0002023c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x06ac,	// (0x0002023c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfece,	// (0x0002fa5e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfece,	// (0x0002fa5e) fshwr2_func_candi_cell_pane_g

0x764d,	// (0x000271dd) bg_popup_window_pane_cp01

0xebc4,	// (0x0002e754) bg_popup_window_pane_g1_cp01

0xebcd,	// (0x0002e75d) bg_popup_window_pane_cp22_ParamLimits

0xebcd,	// (0x0002e75d) bg_popup_window_pane_cp22

0xebdb,	// (0x0002e76b) listscroll_tmo_link_pane_ParamLimits

0xebdb,	// (0x0002e76b) listscroll_tmo_link_pane

0xec1b,	// (0x0002e7ab) popup_tmo_note_window_g1_ParamLimits

0xec1b,	// (0x0002e7ab) popup_tmo_note_window_g1

0xec28,	// (0x0002e7b8) tmo_note_info_pane_ParamLimits

0xec28,	// (0x0002e7b8) tmo_note_info_pane

0x06d2,	// (0x00020262) list_tmo_note_info_pane_g1_ParamLimits

0x06d2,	// (0x00020262) list_tmo_note_info_pane_g1

0xec42,	// (0x0002e7d2) list_tmo_note_info_pane_g2_ParamLimits

0xec42,	// (0x0002e7d2) list_tmo_note_info_pane_g2

0x0001,

0xfed3,	// (0x0002fa63) list_tmo_note_info_pane_g_ParamLimits

0xfed3,	// (0x0002fa63) list_tmo_note_info_pane_g

0xec5e,	// (0x0002e7ee) list_tmo_note_info_text_pane_ParamLimits

0xec5e,	// (0x0002e7ee) list_tmo_note_info_text_pane

0xeca0,	// (0x0002e830) list_tmo_link_pane

0xecad,	// (0x0002e83d) scroll_pane_cp20

0xecba,	// (0x0002e84a) list_single_tmo_link_pane_ParamLimits

0xecba,	// (0x0002e84a) list_single_tmo_link_pane

0xecca,	// (0x0002e85a) list_single_tmo_link_pane_t1

0xecd8,	// (0x0002e868) list_tmo_note_info_text_pane_t1_ParamLimits

0xecd8,	// (0x0002e868) list_tmo_note_info_text_pane_t1

0x9cfb,	// (0x0002988b) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9cfb,	// (0x0002988b) aid_size_touch_scroll_bar_cp01

0xdd5d,	// (0x0002d8ed) aid_size_touch_slider_marker

0x98d6,	// (0x00029466) popup_settings_window_ParamLimits

0x98d6,	// (0x00029466) popup_settings_window

0xdeef,	// (0x0002da7f) popup_candi_list_indi_window

0x561d,	// (0x000251ad) aid_touch_navi_pane_ParamLimits

0xc558,	// (0x0002c0e8) rs_clock_indi_pane

0xc561,	// (0x0002c0f1) sctrl_sk_bottom_pane_ParamLimits

0xc572,	// (0x0002c102) sctrl_sk_top_pane_ParamLimits

0xcb01,	// (0x0002c691) popup_fep_tooltip_window

0xe768,	// (0x0002e2f8) aid_size_cell_widget_grid_ParamLimits

0xe7d5,	// (0x0002e365) cell_ai5_widget_pane_g1_ParamLimits

0xe7d5,	// (0x0002e365) cell_ai5_widget_pane_g1

0xe829,	// (0x0002e3b9) cell_ai5_widget_pane_g6_ParamLimits

0xe835,	// (0x0002e3c5) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe51,	// (0x0002f9e1) cell_ai5_widget_pane_g_ParamLimits

0xfe51,	// (0x0002f9e1) cell_ai5_widget_pane_g

0xe967,	// (0x0002e4f7) cell_ai5_widget_pane_t10_ParamLimits

0xe967,	// (0x0002e4f7) cell_ai5_widget_pane_t10

0xe985,	// (0x0002e515) grid_ai5_widget_pane_ParamLimits

0xea05,	// (0x0002e595) cell_contacts_ai5_widget_pane_ParamLimits

0xea05,	// (0x0002e595) cell_contacts_ai5_widget_pane

0xeb74,	// (0x0002e704) popup_discreet_window_t3_ParamLimits

0xeb74,	// (0x0002e704) popup_discreet_window_t3

0xd656,	// (0x0002d1e6) popup_fshwr2_char_preview_window_ParamLimits

0xd656,	// (0x0002d1e6) popup_fshwr2_char_preview_window

0x06e9,	// (0x00020279) tmo_note_info_pane_t1

0x06fe,	// (0x0002028e) tmo_note_info_pane_t2

0x0715,	// (0x000202a5) tmo_note_info_pane_t3

0xec7c,	// (0x0002e80c) tmo_note_info_pane_t4

0xec8e,	// (0x0002e81e) tmo_note_info_pane_t5

0x0004,

0xfed8,	// (0x0002fa68) tmo_note_info_pane_t

0xeca0,	// (0x0002e830) list_tmo_link_pane_ParamLimits

0xecad,	// (0x0002e83d) scroll_pane_cp20_ParamLimits

0x1a0c,	// (0x0002159c) bg_popup_fep_char_preview_window_cp01

0xecf1,	// (0x0002e881) popup_fshwr2_char_preview_window_t1

0xecff,	// (0x0002e88f) popup_candi_list_indi_window_g1

0xed08,	// (0x0002e898) bg_cell_contacts_ai5_widget_pane

0xed14,	// (0x0002e8a4) cell_contacts_ai5_widget_pane_g1

0xed27,	// (0x0002e8b7) cell_contacts_ai5_widget_pane_g2

0xed33,	// (0x0002e8c3) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee3,	// (0x0002fa73) cell_contacts_ai5_widget_pane_g

0xed45,	// (0x0002e8d5) cell_contacts_ai5_widget_pane_t1

0x4962,	// (0x000244f2) highlight_cell_shortcut_ai5_widget_pane_cp01

0xedbf,	// (0x0002e94f) settings_container_pane

0x5397,	// (0x00024f27) listscroll_set_pane_copy1

0x6ff4,	// (0x00026b84) scroll_pane_cp121_copy1

0xedcb,	// (0x0002e95b) set_content_pane_copy1

0xedd3,	// (0x0002e963) aid_height_set_list_copy1_ParamLimits

0xedd3,	// (0x0002e963) aid_height_set_list_copy1

0x55f5,	// (0x00025185) aid_size_parent_copy1_ParamLimits

0x55f5,	// (0x00025185) aid_size_parent_copy1

0xeddf,	// (0x0002e96f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeddf,	// (0x0002e96f) button_value_adjust_pane_cp6_copy1

0x4abb,	// (0x0002464b) list_highlight_pane_cp2_copy1_ParamLimits

0x4abb,	// (0x0002464b) list_highlight_pane_cp2_copy1

0xedf3,	// (0x0002e983) list_set_pane_copy1_ParamLimits

0xedf3,	// (0x0002e983) list_set_pane_copy1

0xed5a,	// (0x0002e8ea) main_pane_set_t1_copy1_ParamLimits

0xed5a,	// (0x0002e8ea) main_pane_set_t1_copy1

0xed94,	// (0x0002e924) main_pane_set_t2_copy1_ParamLimits

0xed94,	// (0x0002e924) main_pane_set_t2_copy1

0xeea0,	// (0x0002ea30) main_pane_set_t3_copy1

0xeeae,	// (0x0002ea3e) main_pane_set_t4_copy1

0xedb3,	// (0x0002e943) set_content_pane_g1_copy1_ParamLimits

0xedb3,	// (0x0002e943) set_content_pane_g1_copy1

0xeebc,	// (0x0002ea4c) setting_code_pane_copy1

0xeec4,	// (0x0002ea54) setting_slider_graphic_pane_copy1

0xeec4,	// (0x0002ea54) setting_slider_pane_copy1

0xeec4,	// (0x0002ea54) setting_text_pane_copy1

0xeec4,	// (0x0002ea54) setting_volume_pane_copy1

0xeebc,	// (0x0002ea4c) settings_code_pane_cp2_copy1

0xeecc,	// (0x0002ea5c) settings_code_pane_cp_copy1_ParamLimits

0xeecc,	// (0x0002ea5c) settings_code_pane_cp_copy1

0xd66a,	// (0x0002d1fa) volume_set_pane_copy1

0xeee0,	// (0x0002ea70) volume_set_pane_g10_copy1

0xeee8,	// (0x0002ea78) volume_set_pane_g1_copy1

0xeef0,	// (0x0002ea80) volume_set_pane_g2_copy1

0xeef8,	// (0x0002ea88) volume_set_pane_g3_copy1

0xef00,	// (0x0002ea90) volume_set_pane_g4_copy1

0xef08,	// (0x0002ea98) volume_set_pane_g5_copy1

0xef10,	// (0x0002eaa0) volume_set_pane_g6_copy1

0xef18,	// (0x0002eaa8) volume_set_pane_g7_copy1

0xef20,	// (0x0002eab0) volume_set_pane_g8_copy1

0xef28,	// (0x0002eab8) volume_set_pane_g9_copy1

0x1c92,	// (0x00021822) bg_set_opt_pane_cp_copy1_ParamLimits

0x1c92,	// (0x00021822) bg_set_opt_pane_cp_copy1

0xd672,	// (0x0002d202) setting_slider_pane_t1_copy1_ParamLimits

0xd672,	// (0x0002d202) setting_slider_pane_t1_copy1

0xd690,	// (0x0002d220) setting_slider_pane_t2_copy1_ParamLimits

0xd690,	// (0x0002d220) setting_slider_pane_t2_copy1

0xd6aa,	// (0x0002d23a) setting_slider_pane_t3_copy1_ParamLimits

0xd6aa,	// (0x0002d23a) setting_slider_pane_t3_copy1

0xd6c2,	// (0x0002d252) slider_set_pane_copy1_ParamLimits

0xd6c2,	// (0x0002d252) slider_set_pane_copy1

0x49b1,	// (0x00024541) set_opt_bg_pane_g1_copy2

0x49b9,	// (0x00024549) set_opt_bg_pane_g2_copy2

0xef30,	// (0x0002eac0) set_opt_bg_pane_g3_copy2

0x49c9,	// (0x00024559) set_opt_bg_pane_g4_copy2

0x49d1,	// (0x00024561) set_opt_bg_pane_g5_copy2

0x49d9,	// (0x00024569) set_opt_bg_pane_g6_copy2

0xef3a,	// (0x0002eaca) set_opt_bg_pane_g7_copy2

0xef42,	// (0x0002ead2) set_opt_bg_pane_g8_copy2

0xef4c,	// (0x0002eadc) set_opt_bg_pane_g9_copy2

0xef56,	// (0x0002eae6) aid_size_touch_slider_mark_copy1_ParamLimits

0xef56,	// (0x0002eae6) aid_size_touch_slider_mark_copy1

0xef6a,	// (0x0002eafa) slider_set_pane_g1_copy1

0xef73,	// (0x0002eb03) slider_set_pane_g2_copy1

0x6965,	// (0x000264f5) slider_set_pane_g3_copy1_ParamLimits

0x6965,	// (0x000264f5) slider_set_pane_g3_copy1

0x6979,	// (0x00026509) slider_set_pane_g4_copy1_ParamLimits

0x6979,	// (0x00026509) slider_set_pane_g4_copy1

0x6991,	// (0x00026521) slider_set_pane_g5_copy1_ParamLimits

0x6991,	// (0x00026521) slider_set_pane_g5_copy1

0x6965,	// (0x000264f5) slider_set_pane_g6_copy1_ParamLimits

0x6965,	// (0x000264f5) slider_set_pane_g6_copy1

0xef7b,	// (0x0002eb0b) slider_set_pane_g7_copy1_ParamLimits

0xef7b,	// (0x0002eb0b) slider_set_pane_g7_copy1

0x1b06,	// (0x00021696) bg_set_opt_pane_cp2_copy1

0xef91,	// (0x0002eb21) setting_slider_graphic_pane_g1_copy1

0xef9a,	// (0x0002eb2a) setting_slider_graphic_pane_t1_copy1

0xefaa,	// (0x0002eb3a) setting_slider_graphic_pane_t2_copy1

0xefba,	// (0x0002eb4a) slider_set_pane_cp_copy1

0xefca,	// (0x0002eb5a) input_focus_pane_cp1_copy1

0xefd3,	// (0x0002eb63) list_set_text_pane_copy1

0xefdb,	// (0x0002eb6b) setting_text_pane_g1_copy1

0xf538,	// (0x0002f0c8) set_text_pane_t1_copy1

0xefca,	// (0x0002eb5a) input_focus_pane_cp2_copy1

0xefdb,	// (0x0002eb6b) setting_code_pane_g1_copy1

0xefe4,	// (0x0002eb74) setting_code_pane_t1_copy1

0x6946,	// (0x000264d6) list_set_graphic_pane_copy1

0x1b06,	// (0x00021696) bg_set_opt_pane_cp4_copy1

0x50ad,	// (0x00024c3d) list_set_graphic_pane_g1_copy1_ParamLimits

0x50ad,	// (0x00024c3d) list_set_graphic_pane_g1_copy1

0xeff2,	// (0x0002eb82) list_set_graphic_pane_g2_copy1

0x50c5,	// (0x00024c55) list_set_graphic_pane_t1_copy1_ParamLimits

0x50c5,	// (0x00024c55) list_set_graphic_pane_t1_copy1

0x764d,	// (0x000271dd) rs_clock_indi_pane_g1

0xeffa,	// (0x0002eb8a) rs_clock_indi_pane_t1

0xf008,	// (0x0002eb98) rs_indi_pane

0xf010,	// (0x0002eba0) rs_indi_pane_g1

0xf019,	// (0x0002eba9) rs_indi_pane_g2

0xf022,	// (0x0002ebb2) rs_indi_pane_g3

0x0002,

0xfeea,	// (0x0002fa7a) rs_indi_pane_g

0x5397,	// (0x00024f27) bg_popup_preview_window_pane_cp03

0xf02b,	// (0x0002ebbb) popup_fep_tooltip_window_t1

0x7fe7,	// (0x00027b77) popup_note2_window_g2_ParamLimits

0x7fe7,	// (0x00027b77) popup_note2_window_g2

0x0001,

0xfc83,	// (0x0002f813) popup_note2_window_g_ParamLimits

0xfc83,	// (0x0002f813) popup_note2_window_g

0x846e,	// (0x00027ffe) bg_popup_sub_pane_cp11_ParamLimits

0x847b,	// (0x0002800b) cell_ai3_links_pane_g1_ParamLimits

0x8492,	// (0x00028022) cell_ai3_links_pane_t1

0xf538,	// (0x0002f0c8) set_text_pane_t1_copy1_ParamLimits

0x52b4,	// (0x00024e44) cell_graphic_popup_pane_cp2_ParamLimits

0x52b4,	// (0x00024e44) cell_graphic_popup_pane_cp2

0xf039,	// (0x0002ebc9) cell_graphic_popup_pane_g1_cp2

0x202e,	// (0x00021bbe) cell_graphic_popup_pane_g2_cp2

0xf041,	// (0x0002ebd1) cell_graphic_popup_pane_g3_cp2

0xf049,	// (0x0002ebd9) cell_graphic_popup_pane_t2_cp2

0x203f,	// (0x00021bcf) grid_highlight_pane_cp3_cp2

0x4c62,	// (0x000247f2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4962,	// (0x000244f2) main_tmo_pane_ParamLimits

0xc408,	// (0x0002bf98) popup_tmo_big_image_note_window

0xe7c4,	// (0x0002e354) cell_ai5_widget_list_pane

0xe7cc,	// (0x0002e35c) cell_ai5_widget_lrg_icon_pane

0x06e9,	// (0x00020279) tmo_note_info_pane_t1_ParamLimits

0x06fe,	// (0x0002028e) tmo_note_info_pane_t2_ParamLimits

0x0715,	// (0x000202a5) tmo_note_info_pane_t3_ParamLimits

0xec7c,	// (0x0002e80c) tmo_note_info_pane_t4_ParamLimits

0xec8e,	// (0x0002e81e) tmo_note_info_pane_t5_ParamLimits

0xfed8,	// (0x0002fa68) tmo_note_info_pane_t_ParamLimits

0xedbf,	// (0x0002e94f) settings_container_pane_ParamLimits

0xefc2,	// (0x0002eb52) indicator_popup_pane_cp5

0xefc2,	// (0x0002eb52) indicator_popup_pane_cp6

0x6946,	// (0x000264d6) list_set_graphic_pane_copy1_ParamLimits

0x1a0c,	// (0x0002159c) bg_popup_window_pane_cp23

0xf057,	// (0x0002ebe7) popup_tmo_big_image_note_window_g1

0xf060,	// (0x0002ebf0) popup_tmo_big_image_note_window_t1

0xf070,	// (0x0002ec00) popup_tmo_big_image_note_window_t2

0xf080,	// (0x0002ec10) popup_tmo_big_image_note_window_t3

0x0002,

0xfef1,	// (0x0002fa81) popup_tmo_big_image_note_window_t

0x764d,	// (0x000271dd) cell_ai5_widget_lrg_icon_pane_g1

0xf090,	// (0x0002ec20) cell_ai5_widget_lrg_icon_pane_t1

0xf09e,	// (0x0002ec2e) cell_ai5_widget_list_row_pane_ParamLimits

0xf09e,	// (0x0002ec2e) cell_ai5_widget_list_row_pane

0xf0b7,	// (0x0002ec47) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0b7,	// (0x0002ec47) cell_ai5_widget_list_row_pane_g1

0xf0c4,	// (0x0002ec54) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0c4,	// (0x0002ec54) cell_ai5_widget_list_row_pane_t1

0xf0f2,	// (0x0002ec82) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf0f2,	// (0x0002ec82) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfef8,	// (0x0002fa88) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef8,	// (0x0002fa88) cell_ai5_widget_list_row_pane_t

0x979b,	// (0x0002932b) main_fep_vtchi_ss_pane

0xd6e7,	// (0x0002d277) popup_fep_char_pre_window

0xd6ef,	// (0x0002d27f) popup_fep_ituss_window

0xd710,	// (0x0002d2a0) popup_fep_vkbss_window

0xf11a,	// (0x0002ecaa) grid_vkbss_keypad_pane_ParamLimits

0xf11a,	// (0x0002ecaa) grid_vkbss_keypad_pane

0xf12a,	// (0x0002ecba) ituss_keypad_pane

0xd73b,	// (0x0002d2cb) aid_vkbss_key_offset_ParamLimits

0xd73b,	// (0x0002d2cb) aid_vkbss_key_offset

0xd747,	// (0x0002d2d7) cell_vkbss_key_pane_ParamLimits

0xd747,	// (0x0002d2d7) cell_vkbss_key_pane

0x693a,	// (0x000264ca) bg_cell_vkbss_key_g1_ParamLimits

0x693a,	// (0x000264ca) bg_cell_vkbss_key_g1

0xf13a,	// (0x0002ecca) cell_vkbss_key_3p_pane_ParamLimits

0xf13a,	// (0x0002ecca) cell_vkbss_key_3p_pane

0xf154,	// (0x0002ece4) cell_vkbss_key_g1_ParamLimits

0xf154,	// (0x0002ece4) cell_vkbss_key_g1

0xf16e,	// (0x0002ecfe) cell_vkbss_key_t1_ParamLimits

0xf16e,	// (0x0002ecfe) cell_vkbss_key_t1

0xd75d,	// (0x0002d2ed) cell_ituss_key_pane_ParamLimits

0xd75d,	// (0x0002d2ed) cell_ituss_key_pane

0xf199,	// (0x0002ed29) bg_cell_ituss_key_g1_ParamLimits

0xf199,	// (0x0002ed29) bg_cell_ituss_key_g1

0xf1a5,	// (0x0002ed35) cell_ituss_key_pane_g1_ParamLimits

0xf1a5,	// (0x0002ed35) cell_ituss_key_pane_g1

0xf1b9,	// (0x0002ed49) cell_ituss_key_pane_g2_ParamLimits

0xf1b9,	// (0x0002ed49) cell_ituss_key_pane_g2

0x0001,

0xfeff,	// (0x0002fa8f) cell_ituss_key_pane_g_ParamLimits

0xfeff,	// (0x0002fa8f) cell_ituss_key_pane_g

0xf1e7,	// (0x0002ed77) cell_ituss_key_t1_ParamLimits

0xf1e7,	// (0x0002ed77) cell_ituss_key_t1

0xf221,	// (0x0002edb1) cell_ituss_key_t2_ParamLimits

0xf221,	// (0x0002edb1) cell_ituss_key_t2

0xf252,	// (0x0002ede2) cell_ituss_key_t3_ParamLimits

0xf252,	// (0x0002ede2) cell_ituss_key_t3

0xf28c,	// (0x0002ee1c) cell_ituss_key_t4_ParamLimits

0xf28c,	// (0x0002ee1c) cell_ituss_key_t4

0x0003,

0xff04,	// (0x0002fa94) cell_ituss_key_t_ParamLimits

0xff04,	// (0x0002fa94) cell_ituss_key_t

0xf2c6,	// (0x0002ee56) cell_vkbss_key_3p_pane_g1

0xf2ce,	// (0x0002ee5e) cell_vkbss_key_3p_pane_g2

0xf2d6,	// (0x0002ee66) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0d,	// (0x0002fa9d) cell_vkbss_key_3p_pane_g

0x1a0c,	// (0x0002159c) bg_popup_fep_char_preview_window_cp02

0xf2de,	// (0x0002ee6e) popup_fep_char_pre_window_t1

0x04da,	// (0x0002006a) main_ai5_sk_pane

0xed08,	// (0x0002e898) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed14,	// (0x0002e8a4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed27,	// (0x0002e8b7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed33,	// (0x0002e8c3) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee3,	// (0x0002fa73) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed45,	// (0x0002e8d5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4962,	// (0x000244f2) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x082e,	// (0x000203be) main_ai5_sk_pane_g1

0x5b7b,	// (0x0002570b) popup_query_code_window_g1

0xd705,	// (0x0002d295) popup_fep_vkb_icf_pane

0xd719,	// (0x0002d2a9) popup_fep_vtchi_icf_pane

0x4962,	// (0x000244f2) bg_icf_pane

0xf2ed,	// (0x0002ee7d) list_vkb_icf_pane

0x4962,	// (0x000244f2) bg_icf_pane_cp01

0xf2f9,	// (0x0002ee89) vtchi_icf_list_pane

0xf30a,	// (0x0002ee9a) list_vkb_icf_pane_t1_ParamLimits

0xf30a,	// (0x0002ee9a) list_vkb_icf_pane_t1

0xf322,	// (0x0002eeb2) vtchi_icf_list_pane_t1_ParamLimits

0xf322,	// (0x0002eeb2) vtchi_icf_list_pane_t1

0xd6ef,	// (0x0002d27f) popup_fep_ituss_window_ParamLimits

0xd719,	// (0x0002d2a9) popup_fep_vtchi_icf_pane_ParamLimits

0xf12a,	// (0x0002ecba) ituss_keypad_pane_ParamLimits

0xd72f,	// (0x0002d2bf) ituss_sks_pane

0x4962,	// (0x000244f2) bg_icf_pane_ParamLimits

0xd6d8,	// (0x0002d268) icf_edit_indi_pane_ParamLimits

0xd6d8,	// (0x0002d268) icf_edit_indi_pane

0xf2ed,	// (0x0002ee7d) list_vkb_icf_pane_ParamLimits

0x4962,	// (0x000244f2) bg_icf_pane_cp01_ParamLimits

0xd6d8,	// (0x0002d268) icf_edit_indi_pane_cp01_ParamLimits

0xd6d8,	// (0x0002d268) icf_edit_indi_pane_cp01

0xf301,	// (0x0002ee91) vtchi_query_pane

0x77de,	// (0x0002736e) icf_edit_indi_pane_g1_ParamLimits

0x77de,	// (0x0002736e) icf_edit_indi_pane_g1

0xf3ae,	// (0x0002ef3e) icf_edit_indi_pane_g2_ParamLimits

0xf3ae,	// (0x0002ef3e) icf_edit_indi_pane_g2

0x0001,

0xff25,	// (0x0002fab5) icf_edit_indi_pane_g_ParamLimits

0xff25,	// (0x0002fab5) icf_edit_indi_pane_g

0xf3bd,	// (0x0002ef4d) icf_edit_indi_pane_t1

0xf344,	// (0x0002eed4) bg_input_focus_pane_cp042

0x2212,	// (0x00021da2) vtchi_button_pane

0xf34d,	// (0x0002eedd) vtchi_query_pane_t1

0xf35b,	// (0x0002eeeb) vtchi_query_pane_t2

0xf369,	// (0x0002eef9) vtchi_query_pane_t3

0x0002,

0xff14,	// (0x0002faa4) vtchi_query_pane_t

0x1a0c,	// (0x0002159c) bg_button_pane_cp13

0xf377,	// (0x0002ef07) vtchi_button_pane_g1

0xf37f,	// (0x0002ef0f) ituss_sks_pane_g1

0xf38a,	// (0x0002ef1a) ituss_sks_pane_g2

0x0001,

0xff1b,	// (0x0002faab) ituss_sks_pane_g

0xf392,	// (0x0002ef22) ituss_sks_pane_t1

0xf3a0,	// (0x0002ef30) ituss_sks_pane_t2

0x0001,

0xff20,	// (0x0002fab0) ituss_sks_pane_t

0x7306,	// (0x00026e96) indicator_nsta_pane_cp_g1

0x730f,	// (0x00026e9f) indicator_nsta_pane_cp_g2

0x7317,	// (0x00026ea7) indicator_nsta_pane_cp_g3

0x731f,	// (0x00026eaf) indicator_nsta_pane_cp_g4

0x7327,	// (0x00026eb7) indicator_nsta_pane_cp_g5

0x7327,	// (0x00026eb7) indicator_nsta_pane_cp_g6

0x0005,

0xfac1,	// (0x0002f651) indicator_nsta_pane_cp_g

0xd314,	// (0x0002cea4) cell_graphic2_pane_t2_ParamLimits

0xd314,	// (0x0002cea4) cell_graphic2_pane_t2

0x0001,

0xfdda,	// (0x0002f96a) cell_graphic2_pane_t_ParamLimits

0xfdda,	// (0x0002f96a) cell_graphic2_pane_t

0xd341,	// (0x0002ced1) cell_graphic2_control_pane_t1

0xa0c2,	// (0x00029c52) signal_pane_g3_ParamLimits

0xa0c2,	// (0x00029c52) signal_pane_g3

0xa0d4,	// (0x00029c64) signal_pane_g4_ParamLimits

0xa0d4,	// (0x00029c64) signal_pane_g4

0xf104,	// (0x0002ec94) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf104,	// (0x0002ec94) cell_ai5_widget_list_row_pane_t3

0xf1d5,	// (0x0002ed65) cell_ituss_key_pane_t1_ParamLimits

0xf1d5,	// (0x0002ed65) cell_ituss_key_pane_t1

0x58bb,	// (0x0002544b) form_field_data_wide_pane_vc_t2_ParamLimits

0x58bb,	// (0x0002544b) form_field_data_wide_pane_vc_t2

0x58cf,	// (0x0002545f) form_field_data_wide_pane_vc_t3_ParamLimits

0x58cf,	// (0x0002545f) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x0002f39f) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x0002f39f) form_field_data_wide_pane_vc_t

0x7034,	// (0x00026bc4) form_field_slider_wide_pane_vc_t3_ParamLimits

0x7034,	// (0x00026bc4) form_field_slider_wide_pane_vc_t3

0x710e,	// (0x00026c9e) form_field_popup_wide_pane_vc_t2_ParamLimits

0x710e,	// (0x00026c9e) form_field_popup_wide_pane_vc_t2

0x7125,	// (0x00026cb5) form_field_popup_wide_pane_vc_t3_ParamLimits

0x7125,	// (0x00026cb5) form_field_popup_wide_pane_vc_t3

0x0002,

0xfab0,	// (0x0002f640) form_field_popup_wide_pane_vc_t_ParamLimits

0xfab0,	// (0x0002f640) form_field_popup_wide_pane_vc_t

0xd5e9,	// (0x0002d179) aid_fshwr2_btn_pane_ParamLimits

0xd5f5,	// (0x0002d185) aid_fshwr2_syb_pane_ParamLimits

0xd606,	// (0x0002d196) aid_fshwr2_txt_pane_ParamLimits

0xc5fd,	// (0x0002c18d) fshwr2_bg_pane_ParamLimits

0xd612,	// (0x0002d1a2) fshwr2_func_candi_pane_ParamLimits

0xd62a,	// (0x0002d1ba) fshwr2_hwr_syb_pane_ParamLimits

0xd641,	// (0x0002d1d1) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small
